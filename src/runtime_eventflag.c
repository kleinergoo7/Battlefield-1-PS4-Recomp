#include "runtime.h"

#include <pthread.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <time.h>
#include <string.h>

#define MAX_EVENT_FLAGS 256
#define EVF_WAIT_AND 0x01
#define EVF_WAIT_OR 0x02
#define EVF_CLEAR_ALL 0x10
#define EVF_CLEAR_PAT 0x20

typedef struct {
    pthread_mutex_t mutex;
    pthread_cond_t condition;
    uint64_t bits;
    int deleted;
} EventFlag;

static EventFlag *event_flags[MAX_EVENT_FLAGS];
static pthread_mutex_t table_mutex = PTHREAD_MUTEX_INITIALIZER;

static int32_t allocate_handle(EventFlag *flag) {
    pthread_mutex_lock(&table_mutex);
    for (int i = 0; i < MAX_EVENT_FLAGS; ++i) {
        if (event_flags[i]) continue;
        event_flags[i] = flag;
        pthread_mutex_unlock(&table_mutex);
        return i + 1;
    }
    pthread_mutex_unlock(&table_mutex);
    return 0;
}

static EventFlag *resolve_handle(int32_t handle) {
    if (handle <= 0 || handle > MAX_EVENT_FLAGS) return NULL;
    pthread_mutex_lock(&table_mutex);
    EventFlag *flag = event_flags[handle - 1];
    pthread_mutex_unlock(&table_mutex);
    return flag;
}

static ABI int32_t create_event_flag(int32_t *handle, const char *name, uint32_t attributes,
                                     uint64_t initial_bits, const void *opt) {
    (void)name;
    (void)opt;
    if (!handle || (attributes & ~0x33u)) return 0x80020000;
    EventFlag *flag = calloc(1, sizeof(*flag));
    if (!flag) return 0x80020000;
    pthread_mutex_init(&flag->mutex, NULL);
    pthread_cond_init(&flag->condition, NULL);
    flag->bits = initial_bits;
    int32_t allocated = allocate_handle(flag);
    if (!allocated) {
        pthread_cond_destroy(&flag->condition);
        pthread_mutex_destroy(&flag->mutex);
        free(flag);
        return 0x80020000;
    }
    *handle = allocated;
    printf("EVF create -> handle=%d\n",allocated);
    return 0;
}

static ABI int32_t delete_event_flag(int32_t handle) {
    EventFlag *flag = resolve_handle(handle);
    if (!flag) return 0x80020000;
    pthread_mutex_lock(&flag->mutex);
    flag->deleted = 1;
    pthread_cond_broadcast(&flag->condition);
    pthread_mutex_unlock(&flag->mutex);
    printf("EVF delete handle=%d\n",handle);
    return 0;
}

static ABI int32_t clear_event_flag(int32_t handle, uint64_t bits) {
    EventFlag *flag=resolve_handle(handle);
    if (!flag) return 0x80020000;
    pthread_mutex_lock(&flag->mutex);
    flag->bits &= ~bits;
    pthread_mutex_unlock(&flag->mutex);
    return 0;
}

static ABI int32_t set_event_flag(int32_t handle, uint64_t bits) {
    EventFlag *flag = resolve_handle(handle);
    if (!flag) return 0x80020000;
    pthread_mutex_lock(&flag->mutex);
    flag->bits |= bits;
    pthread_cond_broadcast(&flag->condition);
    pthread_mutex_unlock(&flag->mutex);
    return 0;
}

static ABI int32_t wait_event_flag(int32_t handle, uint64_t bits, uint32_t mode,
                                   uint64_t *result, uint32_t *timeout) {
    EventFlag *flag = resolve_handle(handle);
    if (!flag || !result) return 0x80020000;
    struct timespec deadline;
    if (timeout) {
        uint64_t micros = *timeout;
        clock_gettime(CLOCK_REALTIME,&deadline);
        deadline.tv_sec += micros / 1000000;
        deadline.tv_nsec += (micros % 1000000) * 1000;
        while (deadline.tv_nsec >= 1000000000) { deadline.tv_sec++; deadline.tv_nsec -= 1000000000; }
    }
    pthread_mutex_lock(&flag->mutex);
    while (!flag->deleted) {
        int satisfied = (mode & EVF_WAIT_AND) ? (flag->bits & bits) == bits
                                              : (flag->bits & bits) != 0;
        if (satisfied) break;
        int wait_result = timeout
            ? pthread_cond_timedwait(&flag->condition,&flag->mutex,&deadline)
            : pthread_cond_wait(&flag->condition,&flag->mutex);
        if (wait_result == ETIMEDOUT) {
            *result = flag->bits;
            if (timeout) *timeout = 0;
            pthread_mutex_unlock(&flag->mutex);
            return 0x8002003C;
        }
    }
    if (flag->deleted) {
        pthread_mutex_unlock(&flag->mutex);
        return 0x80020000;
    }
    *result = flag->bits & bits;
    if (mode & EVF_CLEAR_ALL) flag->bits = 0;
    else if (mode & EVF_CLEAR_PAT) flag->bits &= ~bits;
    pthread_mutex_unlock(&flag->mutex);
    return 0;
}

static const RuntimeExport exports[] = {
    {"sceKernelCreateEventFlag", create_event_flag},
    {"sceKernelDeleteEventFlag", delete_event_flag},
    {"sceKernelSetEventFlag", set_event_flag},
    {"sceKernelClearEventFlag", clear_event_flag},
    {"sceKernelWaitEventFlag", wait_event_flag},
};

uintptr_t runtime_eventflag_resolve(const char *name) {
    uintptr_t resolved = RUNTIME_LOOKUP(exports, name);
    if (resolved) printf("EVF resolve %s -> %p\n", name, (void *)resolved);
    return resolved;
}
