/* Kernel semaphores: 32-bit IDs, counted tokens and FIFO waiters.
 * Priority-ordered semaphores are approximated by FIFO order. */
#define _GNU_SOURCE
#include "runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <errno.h>
#include <time.h>
#define ERR(n) ((int32_t)(UINT32_C(0x80020000)|(n)))
typedef struct Waiter {
    int32_t need, result;
    int done;
    pthread_cond_t event;
    struct Waiter *next;
    /* Diagnostics: thread + guest call site captured at block time. */
    char thread[32];
    uintptr_t guest_ret;
    uint64_t entered_ns;
} Waiter;
/* Snapshot passed from the ABI export into wait_count. */
typedef struct {
    char thread[32];
    uintptr_t guest_ret;
    uint64_t entered_ns;
} WaitInfo;
/* Guest-offset formatter (POSIX describe_address equivalent). */
static void sema_guest_site(char *out,size_t size,uintptr_t ret) {
    uintptr_t base=probe_image_base();
    if (base && ret>=base && ret-base<0x10000000u)
        snprintf(out,size,"guest+0x%lx",(unsigned long)(ret-base));
    else snprintf(out,size,"host %p",(void*)ret);
}
/* One-shot first-block logger: the guest caller of sem_wait is the direct host
 * address (probe.c writes the runtime function address into the GOT), so
 * __builtin_return_address(0) taken in sem_wait is the real guest call site. */
static void first_block_log(uint32_t id,const WaitInfo *info) {
    static uint64_t seen; static int enabled=-1;
    if (enabled<0) { const char *e=getenv("SPARTAN_SEMA_FIRST_BLOCK"); enabled=e && *e && *e!='0'; }
    if (!enabled || id>=64) return;
    if (__atomic_fetch_or(&seen,1ull<<id,__ATOMIC_ACQ_REL)&(1ull<<id)) return;
    char site[64]; sema_guest_site(site,sizeof(site),info->guest_ret);
    fprintf(stderr,"[SEMAFIRST] id=%u thread='%s' caller=%s\n",id,info->thread,site);
    fflush(stderr);
}
typedef struct Sema {
    uint32_t id, attr;
    int32_t count, initial, maximum;
    unsigned active;
    int deleted;
    Waiter *first;
    struct Sema *next;
} Sema;
static pthread_mutex_t lock=PTHREAD_MUTEX_INITIALIZER;
static Sema *registry;
static uint32_t next_id=1;
static size_t created, deleted, acquired, signaled, timed_out;
/* A found semaphore moves to the front. New ones went in front, so the ones made at boot
 * sat behind every one made since, each wait and signal walking past them under the one lock
 * (from Awakenchan 0.9.34 beta 9.9). Not for the diagnostic snapshot, which leaves the order
 * alone. SPARTAN_SEMA_FRONT=0: the list keeps its order, as before. */
static Sema *find_ordered(uint32_t id,int reorder) {
    static int front=-1;
    if (front<0) { const char *e=getenv("SPARTAN_SEMA_FRONT"); front=!(e && e[0]=='0'); }
    Sema **link=&registry;
    for (Sema *s=registry;s;link=&s->next,s=s->next) {
        if (s->id!=id) continue;
        if (reorder && front && link!=&registry) { *link=s->next; s->next=registry; registry=s; }
        return s;
    }
    return NULL;
}
static Sema *find(uint32_t id) { return find_ordered(id,1); }
static void host_check(int e) {
    if (e) { fprintf(stderr,"STOP: semaphore host error %d\n",e); exit(21); }
}
/* Waits use this clock for their deadlines. winpthreads condition variables accept only
 * CLOCK_REALTIME (pthread_condattr_setclock(CLOCK_MONOTONIC) fails with EINVAL). */
#ifdef _WIN32
#define WAIT_CLOCK CLOCK_REALTIME
#else
#define WAIT_CLOCK CLOCK_MONOTONIC
#endif
static uint64_t now_ns(void) {
    struct timespec t;
    if (clock_gettime(WAIT_CLOCK,&t)) { perror("clock_gettime"); exit(1); }
    return (uint64_t)t.tv_sec*1000000000+(uint64_t)t.tv_nsec;
}
static ABI int32_t sem_create(uint32_t *out,const char *name,uint32_t attr,
                              int32_t initial,int32_t maximum,const void *options) {
    if (!out || !name || attr>2 || initial<0 || maximum<=0 || initial>maximum) return ERR(22);
    if (options) { fputs("STOP: semaphore options are not implemented\n",stderr); exit(21); }
    Sema *s=calloc(1,sizeof(*s));
    if (!s) return ERR(12);
    pthread_mutex_lock(&lock);
    if (next_id==UINT32_MAX) { pthread_mutex_unlock(&lock); free(s); return ERR(28); }
    s->id=next_id++; s->attr=attr; s->count=s->initial=initial; s->maximum=maximum;
    s->next=registry; registry=s; *out=s->id; ++created;
    printf("Runtime: semaphore id=%u, attr=%u, initial=%d, max=%d\n",s->id,attr,initial,maximum);
    pthread_mutex_unlock(&lock);
    return 0;
}
static int32_t wait_count(uint32_t id,int32_t need,uint32_t *timeout,int block,const WaitInfo *info) {
    pthread_mutex_lock(&lock);
    Sema *s=find(id);
    int32_t result=0;
    if (!s) result=ERR(3);
    else if (need<=0 || need>s->maximum) result=ERR(22);
    else if (s->count>=need) { s->count-=need; ++acquired; }
    else if (!block) result=ERR(16);
    else if (timeout && !*timeout) { result=ERR(60); ++timed_out; }
    else {
        /* Priority-ordered semaphores (attr 2) are served FIFO: there is no
           PS4 priority scheduler, host threads run at equal priority. */
        if (getenv("SPARTAN_TRACE_SEMA")) fprintf(stderr,"Runtime: blocking wait on semaphore %u (need %d, count %d, timeout=%u us)\n",id,need,s->count,timeout?*timeout:0); /* deadlock diagnosis */
        Waiter w={.need=need};
        if (info) {
            snprintf(w.thread,sizeof(w.thread),"%s",info->thread);
            w.guest_ret=info->guest_ret; w.entered_ns=info->entered_ns;
        }
        pthread_condattr_t attr;
        host_check(pthread_condattr_init(&attr));
        host_check(pthread_condattr_setclock(&attr,WAIT_CLOCK));
        host_check(pthread_cond_init(&w.event,&attr));
        host_check(pthread_condattr_destroy(&attr));
        Waiter **tail=&s->first;
        while (*tail) tail=&(*tail)->next;
        *tail=&w; ++s->active;
        if (info) first_block_log(id,info);
        uint64_t deadline=timeout ? now_ns()+(uint64_t)*timeout*1000 : 0;
        struct timespec end={.tv_sec=(time_t)(deadline/1000000000),.tv_nsec=(long)(deadline%1000000000)};
        while (!w.done) {
            int e=timeout ? pthread_cond_timedwait(&w.event,&lock,&end) : pthread_cond_wait(&w.event,&lock);
            if (e==ETIMEDOUT && !w.done) {
                Waiter **p=&s->first;
                while (*p!=&w) p=&(*p)->next;
                *p=w.next; w.result=ERR(60); w.done=1; ++timed_out;
            } else if (e!=ETIMEDOUT) host_check(e);
        }
        result=w.result;
        if (!result) ++acquired;
        if (timeout) {
            uint64_t now=now_ns();
            *timeout=result ? 0 : (uint32_t)(now>=deadline ? 0 : (deadline-now)/1000);
        }
        host_check(pthread_cond_destroy(&w.event));
        if (!--s->active && s->deleted) free(s);
    }
    pthread_mutex_unlock(&lock);
    return result;
}
static ABI __attribute__((noinline)) int32_t sem_wait(uint32_t id,int32_t need,uint32_t *timeout) {
    const uint64_t wait_start=runtime_wait_begin();
    WaitInfo info;
    const char *tn=runtime_thread_name();
    snprintf(info.thread,sizeof(info.thread),"%s",tn?tn:"host");
    info.guest_ret=(uintptr_t)__builtin_return_address(0);
    info.entered_ns=now_ns();
    const int32_t r=wait_count(id,need,timeout,1,&info);
    runtime_wait_end("semaphore wait",wait_start,"id",id);
    return r;
}
static ABI int32_t sem_poll(uint32_t id,int32_t need) { return wait_count(id,need,NULL,0,NULL); }
static ABI int32_t sem_signal(uint32_t id,int32_t count) {
    pthread_mutex_lock(&lock);
    Sema *s=find(id);
    int32_t result=0;
    if (!s) result=ERR(3);
    else if (count<=0 || count>s->maximum-s->count) result=ERR(22);
    else {
        s->count+=count; ++signaled;
        Waiter **p=&s->first;
        while (*p) {
            Waiter *w=*p;
            if (w->need>s->count) { p=&w->next; continue; }
            s->count-=w->need; *p=w->next; w->done=1;
            host_check(pthread_cond_signal(&w->event));
        }
    }
    pthread_mutex_unlock(&lock);
    return result;
}
static int32_t wake_all(Sema *s,int32_t result) {
    int32_t count=0;
    while (s->first) {
        Waiter *w=s->first; s->first=w->next;
        w->result=result; w->done=1; ++count;
        host_check(pthread_cond_signal(&w->event));
    }
    return count;
}
static ABI int32_t sem_cancel(uint32_t id,int32_t count,int32_t *waiters) {
    pthread_mutex_lock(&lock);
    Sema *s=find(id);
    int32_t result=0;
    if (!s) result=ERR(3);
    else if (count>s->maximum) result=ERR(22);
    else {
        int32_t n=wake_all(s,ERR(85));
        if (waiters) *waiters=n;
        s->count=count<0 ? s->initial : count;
    }
    pthread_mutex_unlock(&lock);
    return result;
}
static ABI int32_t sem_delete(uint32_t id) {
    pthread_mutex_lock(&lock);
    Sema **p=&registry;
    while (*p && (*p)->id!=id) p=&(*p)->next;
    if (!*p) { pthread_mutex_unlock(&lock); return ERR(3); }
    Sema *s=*p; *p=s->next; s->deleted=1; ++deleted;
    wake_all(s,ERR(13));
    if (!s->active) free(s);
    pthread_mutex_unlock(&lock);
    return 0;
}
/* Read-only test/diagnostic snapshot, not exposed to guest code. */
unsigned runtime_sema_waiters(uint32_t id) {
    pthread_mutex_lock(&lock);
    Sema *s=find_ordered(id,0); unsigned n=0;
    if (s) for (Waiter *w=s->first;w;w=w->next) ++n;
    pthread_mutex_unlock(&lock);
    return n;
}
uintptr_t runtime_sema_resolve(const char *name) {
    if (!strcmp(name,"188x57JYp0g#libkernel")) return (uintptr_t)sem_create;
    if (!strcmp(name,"Zxa0VhQVTsk#libkernel")) return (uintptr_t)sem_wait;
    if (!strcmp(name,"4czppHBiriw#libkernel")) return (uintptr_t)sem_signal;
    if (!strcmp(name,"12wOHk8ywb0#libkernel")) return (uintptr_t)sem_poll;
    if (!strcmp(name,"4DM06U2BNEY#libkernel")) return (uintptr_t)sem_cancel;
    if (!strcmp(name,"R1Jvn8bSCW8#libkernel")) return (uintptr_t)sem_delete;
    return 0;
}
void runtime_sema_report(void) {
    pthread_mutex_lock(&lock);
    printf("Runtime: semaphores created=%zu, deleted=%zu, acquired=%zu, signals=%zu, timeouts=%zu\n",
           created,deleted,acquired,signaled,timed_out);
    pthread_mutex_unlock(&lock);
}
/* Diagnostic snapshot for a stalled level load: dump every live semaphore with
 * blocked waiters. Called from the SIGUSR2 thread dump in probe.c. */
void runtime_sema_dump_blocked(void) {
    if (pthread_mutex_trylock(&lock)) { fputs("[SEMADUMP] registry lock held, skipped\n",stderr); return; }
    unsigned n=0;
    for (Sema *s=registry; s; s=s->next) {
        if (!s->deleted && s->active) {
            fprintf(stderr,"[SEMADUMP] id=%u attr=%u count=%d initial=%d max=%d waiters=%u\n",
                    s->id,s->attr,s->count,s->initial,s->maximum,s->active), ++n;
            unsigned k=0;
            for (Waiter *w=s->first; w; w=w->next,++k) {
                char site[64]; sema_guest_site(site,sizeof(site),w->guest_ret);
                double age=w->entered_ns ? (now_ns()-w->entered_ns)/1e9 : 0.0;
                fprintf(stderr,"[SEMADUMP]   waiter %u: thread='%s' age=%.1fs need=%d caller=%s\n",
                        k,w->thread,age,w->need,site);
            }
        }
    }
    fprintf(stderr,"[SEMADUMP] %u semaphores with blocked waiters\n",n);
    pthread_mutex_unlock(&lock);
}

