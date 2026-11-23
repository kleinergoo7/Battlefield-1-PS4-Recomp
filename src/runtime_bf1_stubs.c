/* Offline-safe fallback stubs for BF1 imports not otherwise implemented. */
#include "runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char bf1_dummy_object[256];
static ABI int64_t bf1_zero_stub(void) { return 0; }
static ABI int64_t bf1_pointer_stub(void) {
    /* shadPS4's CommonStub returns zero for every JSC import; match it exactly. */
    if (getenv("SPARTAN_JSC_ZERO")) return 0;
    return (int64_t)(uintptr_t)bf1_dummy_object;
}

static ABI int64_t bf1_stub_0(void) { printf("BF1 stub %s: sceGnmSetEmbeddedVsShader\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_1(void) { printf("BF1 stub %s: scePthreadSetspecific\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_2(void) { printf("BF1 stub %s: scePthreadRwlockUnlock\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_3(void) { printf("BF1 stub %s: sceKernelPread\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_4(void) { printf("BF1 stub %s: sceGnmSetupMipStatsReport\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_5(void) { printf("BF1 stub %s: sceKernelReadTsc\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_6(void) { printf("BF1 stub %s: sceNpPartyShowInvitationList\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_7(void) { printf("BF1 stub %s: scePlayGoGetProgress\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_8(void) { printf("BF1 stub %s: scePthreadAttrSetdetachstate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_9(void) { printf("BF1 stub %s: sceKernelInternalMemoryGetModuleSegmentInfo\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_10(void) { printf("BF1 stub %s: sceKernelSleep\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_11(void) { printf("BF1 stub %s: scePthreadAttrGetstacksize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_12(void) { printf("BF1 stub %s: sceKernelConvertUtcToLocaltime\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_13(void) { printf("BF1 stub %s: sceAjmBatchWait\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_14(void) { printf("BF1 stub %s: scePthreadAttrGetstack\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_15(void) { printf("BF1 stub %s: sceGnmDispatchDirect\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_16(void) { printf("BF1 stub %s: sceKernelUtimes\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_17(void) { printf("BF1 stub %s: sceSslTerm\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_18(void) { printf("BF1 stub %s: sceKernelConvertLocaltimeToUtc\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_19(void) { printf("BF1 stub %s: sceNpProfileDialogTerminate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_20(void) { printf("BF1 stub %s: pthread_cond_init\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_21(void) { printf("BF1 stub %s: sceNpCommerceDialogInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_22(void) { printf("BF1 stub %s: sceNetCtlGetResult\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_23(void) { printf("BF1 stub %s: JSValueMakeString\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_24(void) { printf("BF1 stub %s: sceSaveDataMount2\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_25(void) { printf("BF1 stub %s: sceInvitationDialogOpen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_26(void) { printf("BF1 stub %s: sceKernelMkdir\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_27(void) { printf("BF1 stub %s: sceKernelPollSema\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_28(void) { printf("BF1 stub %s: scePthreadOnce\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_29(void) { printf("BF1 stub %s: sceKernelCreateSema\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_30(void) { printf("BF1 stub %s: sceRtcGetCurrentTick\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_31(void) { printf("BF1 stub %s: scePthreadMutexattrSetprotocol\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_32(void) { printf("BF1 stub %s: sceKernelOpen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_33(void) { printf("BF1 stub %s: sceAudio3dObjectUnreserve\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_34(void) { printf("BF1 stub %s: sceSystemGestureAppendTouchRecognizer\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_35(void) { printf("BF1 stub %s: sceKernelGetTscFrequency\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_36(void) { printf("BF1 stub %s: sceKernelUsleep\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_37(void) { printf("BF1 stub %s: sceSystemServiceGetDisplaySafeAreaInfo\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_38(void) { printf("BF1 stub %s: sceGnmInsertWaitFlipDone\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_39(void) { printf("BF1 stub %s: scePthreadGetprio\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_40(void) { printf("BF1 stub %s: sceUserServiceGetUserName\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_41(void) { printf("BF1 stub %s: sceGnmLogicalCuIndexToPhysicalCuIndex\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_42(void) { printf("BF1 stub %s: pthread_cond_timedwait\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_43(void) { printf("BF1 stub %s: sceNpTrophyUnlockTrophy\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_44(void) { printf("BF1 stub %s: sceGnmMapComputeQueue\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_45(void) { printf("BF1 stub %s: sceNpFriendListDialogInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_46(void) { printf("BF1 stub %s: pthread_cond_signal\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_47(void) { printf("BF1 stub %s: scePthreadMutexDestroy\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_48(void) { printf("BF1 stub %s: pthread_attr_setstacksize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_49(void) { printf("BF1 stub %s: sceKernelBatchMap\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_50(void) { printf("BF1 stub %s: scePthreadCondInit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_51(void) { printf("BF1 stub %s: pthread_mutex_unlock\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_52(void) { printf("BF1 stub %s: sceNpWebApiUnregisterServicePushEventCallback\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_53(void) { printf("BF1 stub %s: sceNetSetsockopt\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_54(void) { printf("BF1 stub %s: sceNpCheckNpAvailability\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_55(void) { printf("BF1 stub %s: sceScreenShotEnable\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_56(void) { printf("BF1 stub %s: sceNetRecvfrom\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_57(void) { printf("BF1 stub %s: scePlayGoGetLanguageMask\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_58(void) { printf("BF1 stub %s: scePthreadEqual\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_59(void) { printf("BF1 stub %s: sceSystemGestureFinalizePrimitiveTouchRecognizer\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_60(void) { printf("BF1 stub %s: sceNpCheckCallback\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_61(void) { printf("BF1 stub %s: accept\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_62(void) { printf("BF1 stub %s: sceNpPartyCheckCallback\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_63(void) { printf("BF1 stub %s: sceKernelMlock\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_64(void) { printf("BF1 stub %s: scePthreadExit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_65(void) { printf("BF1 stub %s: sceSystemGestureInitializePrimitiveTouchRecognizer\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_66(void) { printf("BF1 stub %s: scePthreadAttrSetaffinity\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_67(void) { printf("BF1 stub %s: sceAppContentAddcontUnmount\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_68(void) { printf("BF1 stub %s: scePthreadAttrSetschedpolicy\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_69(void) { printf("BF1 stub %s: sceNetSocketClose\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_70(void) { printf("BF1 stub %s: scePlayGoSetInstallSpeed\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_71(void) { printf("BF1 stub %s: sceKernelCancelSema\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_72(void) { printf("BF1 stub %s: sceKernelGetProcessTime\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_73(void) { printf("BF1 stub %s: sceKernelSignalSema\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_74(void) { printf("BF1 stub %s: scePthreadDetach\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_75(void) { printf("BF1 stub %s: sceSaveDataDialogOpen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_76(void) { printf("BF1 stub %s: sceAudio3dObjectSetAttributes\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_77(void) { printf("BF1 stub %s: sceGnmDrawIndirect\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_78(void) { printf("BF1 stub %s: sceKernelWrite\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_79(void) { printf("BF1 stub %s: sceKernelRename\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_80(void) { printf("BF1 stub %s: sceVoiceStart\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_81(void) { printf("BF1 stub %s: sceNpWebApiDeleteHandle\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_82(void) { printf("BF1 stub %s: sceAudioInOpen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_83(void) { printf("BF1 stub %s: sceGnmValidateGetDiagnostics\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_84(void) { printf("BF1 stub %s: sceGnmDrawIndexIndirectMulti\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_85(void) { printf("BF1 stub %s: sceGnmSetPsShader350\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_86(void) { printf("BF1 stub %s: sceGnmCreateWorkloadStream\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_87(void) { printf("BF1 stub %s: scePthreadAttrDestroy\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_88(void) { printf("BF1 stub %s: sceSystemServiceReceiveEvent\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_89(void) { printf("BF1 stub %s: sceNetGetMacAddress\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_90(void) { printf("BF1 stub %s: scePthreadRwlockInit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_91(void) { printf("BF1 stub %s: scePthreadCreate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_92(void) { printf("BF1 stub %s: sched_yield\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_93(void) { printf("BF1 stub %s: sceGnmRequestFlipAndSubmitDoneForWorkload\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_94(void) { printf("BF1 stub %s: _exit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_95(void) { printf("BF1 stub %s: sceMsgDialogUpdateStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_96(void) { printf("BF1 stub %s: sceVideoOutGetResolutionStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_97(void) { printf("BF1 stub %s: scePadClose\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_98(void) { printf("BF1 stub %s: _sigprocmask\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_99(void) { printf("BF1 stub %s: sceNpWebApiCreateHandle\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_100(void) { printf("BF1 stub %s: pthread_mutex_lock\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_101(void) { printf("BF1 stub %s: pthread_equal\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_102(void) { printf("BF1 stub %s: sceGnmInsertPopMarker\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_103(void) { printf("BF1 stub %s: sceKernelClearEventFlag\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_104(void) { printf("BF1 stub %s: scePthreadAttrGetaffinity\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_105(void) { printf("BF1 stub %s: sceNpLookupCreateTitleCtx\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_106(void) { printf("BF1 stub %s: sceSaveDataSetParam\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_107(void) { printf("BF1 stub %s: sceNetInetPton\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_108(void) { printf("BF1 stub %s: JSGlobalContextCreate\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_109(void) { printf("BF1 stub %s: sceInvitationDialogGetResult\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_110(void) { printf("BF1 stub %s: sceGnmDrawInitToDefaultContextState\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_111(void) { printf("BF1 stub %s: sceKernelDeleteEventFlag\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_112(void) { printf("BF1 stub %s: fcntl\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_113(void) { printf("BF1 stub %s: sceCoredumpRegisterCoredumpHandler\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_114(void) { printf("BF1 stub %s: sceInvitationDialogUpdateStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_115(void) { printf("BF1 stub %s: sceKernelGetProcParam\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_116(void) { printf("BF1 stub %s: sceAppContentAppParamGetInt\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_117(void) { printf("BF1 stub %s: __error\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_118(void) { printf("BF1 stub %s: sceVoiceInit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_119(void) { printf("BF1 stub %s: scePthreadMutexLock\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_120(void) { printf("BF1 stub %s: JSValueToStringCopy\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_121(void) { printf("BF1 stub %s: sceNetInetNtop\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_122(void) { printf("BF1 stub %s: sceNetRecv\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_123(void) { printf("BF1 stub %s: sceGameLiveStreamingTerminate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_124(void) { printf("BF1 stub %s: sceGnmMapComputeQueueWithPriority\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_125(void) { printf("BF1 stub %s: sceNpSetContentRestriction\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_126(void) { printf("BF1 stub %s: sceHttpInit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_127(void) { printf("BF1 stub %s: sceKernelUnlink\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_128(void) { printf("BF1 stub %s: JSPropertyNameArrayGetNameAtIndex\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_129(void) { printf("BF1 stub %s: sceVoiceStop\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_130(void) { printf("BF1 stub %s: sceGnmUnmapComputeQueue\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_131(void) { printf("BF1 stub %s: sceAjmInstanceCreate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_132(void) { printf("BF1 stub %s: sceNetResolverAbort\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_133(void) { printf("BF1 stub %s: sceFiberReturnToThread\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_134(void) { printf("BF1 stub %s: pthread_yield\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_135(void) { printf("BF1 stub %s: sceInvitationDialogTerminate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_136(void) { printf("BF1 stub %s: scePthreadRwlockDestroy\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_137(void) { printf("BF1 stub %s: sceKernelGetDirectMemoryType\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_138(void) { printf("BF1 stub %s: sceSaveDataUmount\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_139(void) { printf("BF1 stub %s: mmap\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_140(void) { printf("BF1 stub %s: sceCommonDialogIsUsed\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_141(void) { printf("BF1 stub %s: JSValueIsUndefined\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_142(void) { printf("BF1 stub %s: scePthreadCondTimedwait\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_143(void) { printf("BF1 stub %s: sceKernelCreateEventFlag\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_144(void) { printf("BF1 stub %s: scePthreadAttrSetstack\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_145(void) { printf("BF1 stub %s: sceKernelAvailableDirectMemorySize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_146(void) { printf("BF1 stub %s: sceNetResolverCreate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_147(void) { printf("BF1 stub %s: sceVideoOutSetFlipRate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_148(void) { printf("BF1 stub %s: sceNpWebApiReadData\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_149(void) { printf("BF1 stub %s: sceMsgDialogGetStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_150(void) { printf("BF1 stub %s: sceUserServiceGetInitialUser\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_151(void) { printf("BF1 stub %s: sceKernelRead\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_152(void) { printf("BF1 stub %s: sceGameLiveStreamingGetCurrentStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_153(void) { printf("BF1 stub %s: sceVoiceGetPortInfo\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_154(void) { printf("BF1 stub %s: sceKernelCreateEqueue\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_155(void) { printf("BF1 stub %s: JSStringGetMaximumUTF8CStringSize\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_156(void) { printf("BF1 stub %s: sceNpCommerceShowPsStoreIcon\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_157(void) { printf("BF1 stub %s: sceNpPartyGetId\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_158(void) { printf("BF1 stub %s: _read\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_159(void) { printf("BF1 stub %s: sceCoredumpWriteUserData\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_160(void) { printf("BF1 stub %s: sceNpCommerceDialogOpen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_161(void) { printf("BF1 stub %s: scePthreadAttrSetschedparam\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_162(void) { printf("BF1 stub %s: pthread_attr_setdetachstate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_163(void) { printf("BF1 stub %s: sceNpTrophyDestroyContext\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_164(void) { printf("BF1 stub %s: sceNpFriendListDialogTerminate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_165(void) { printf("BF1 stub %s: sceGnmDrawIndexIndirect\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_166(void) { printf("BF1 stub %s: sceSystemGestureRemoveTouchRecognizer\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_167(void) { printf("BF1 stub %s: sceSaveDataDialogGetStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_168(void) { printf("BF1 stub %s: pthread_mutexattr_setpshared\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_169(void) { printf("BF1 stub %s: sceNpSetNpTitleId\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_170(void) { printf("BF1 stub %s: sceAjmBatchJobRunBufferRa\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_171(void) { printf("BF1 stub %s: pthread_self\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_172(void) { printf("BF1 stub %s: recv\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_173(void) { printf("BF1 stub %s: sceNpPartyGetMemberInfo\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_174(void) { printf("BF1 stub %s: sceNpGetUserIdByOnlineId\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_175(void) { printf("BF1 stub %s: scePthreadMutexattrInit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_176(void) { printf("BF1 stub %s: getargv\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_177(void) { printf("BF1 stub %s: sceGnmSetEsShader\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_178(void) { printf("BF1 stub %s: sceSystemGestureCreateTouchRecognizer\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_179(void) { printf("BF1 stub %s: sceGnmEndWorkload\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_180(void) { printf("BF1 stub %s: sceVideoRecordingSetInfo\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_181(void) { printf("BF1 stub %s: __elf_phdr_match_addr\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_182(void) { printf("BF1 stub %s: _write\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_183(void) { printf("BF1 stub %s: sceNpWebApiInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_184(void) { printf("BF1 stub %s: scePthreadRename\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_185(void) { printf("BF1 stub %s: sceGnmDrawIndexAuto\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_186(void) { printf("BF1 stub %s: sceNpTrophyDestroyHandle\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_187(void) { printf("BF1 stub %s: sceGnmUpdateHsShader\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_188(void) { printf("BF1 stub %s: sceGnmSubmitAndFlipCommandBuffersForWorkload\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_189(void) { printf("BF1 stub %s: sceNpNotifyPlusFeature\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_190(void) { printf("BF1 stub %s: sceSystemGestureUpdatePrimitiveTouchRecognizer\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_191(void) { printf("BF1 stub %s: sceNpGetAccountCountry\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_192(void) { printf("BF1 stub %s: sceNpCreateRequest\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_193(void) { printf("BF1 stub %s: sceGnmGetEqTimeStamp\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_194(void) { printf("BF1 stub %s: sceNpAuthDeleteRequest\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_195(void) { printf("BF1 stub %s: pthread_mutexattr_destroy\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_196(void) { printf("BF1 stub %s: sceGnmDisableMipStatsReport\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_197(void) { printf("BF1 stub %s: sceNetErrnoLoc\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_198(void) { printf("BF1 stub %s: sceVideoOutAddFlipEvent\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_199(void) { printf("BF1 stub %s: sceGnmDrawIndex\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_200(void) { printf("BF1 stub %s: sceGnmValidateGetVersion\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_201(void) { printf("BF1 stub %s: sceImeDialogGetStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_202(void) { printf("BF1 stub %s: sceKernelSetEventFlag\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_203(void) { printf("BF1 stub %s: sceKernelMapFlexibleMemory\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_204(void) { printf("BF1 stub %s: scePthreadMutexTimedlock\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_205(void) { printf("BF1 stub %s: sceHttpTerm\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_206(void) { printf("BF1 stub %s: JSValueIsString\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_207(void) { printf("BF1 stub %s: sceNetEpollDestroy\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_208(void) { printf("BF1 stub %s: sceKernelGetModuleList\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_209(void) { printf("BF1 stub %s: sceNetResolverGetError\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_210(void) { printf("BF1 stub %s: sceNpPartyLeave\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_211(void) { printf("BF1 stub %s: sceNpLookupCreateAsyncRequest\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_212(void) { printf("BF1 stub %s: scePthreadCondBroadcast\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_213(void) { printf("BF1 stub %s: sceKernelWaitEventFlag\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_214(void) { printf("BF1 stub %s: sceFiberFinalize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_215(void) { printf("BF1 stub %s: sceAudioOutInit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_216(void) { printf("BF1 stub %s: sceAudioInClose\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_217(void) { printf("BF1 stub %s: pthread_create_name_np\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_218(void) { printf("BF1 stub %s: sceNpWebApiAbortRequest\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_219(void) { printf("BF1 stub %s: pthread_mutex_trylock\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_220(void) { printf("BF1 stub %s: sceNetPoolDestroy\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_221(void) { printf("BF1 stub %s: sceSaveDataDialogUpdateStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_222(void) { printf("BF1 stub %s: sceNpGetAccountLanguage\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_223(void) { printf("BF1 stub %s: sceNpWebApiSendRequest2\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_224(void) { printf("BF1 stub %s: sceGnmGetNumTcaUnits\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_225(void) { printf("BF1 stub %s: bind\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_226(void) { printf("BF1 stub %s: sceGnmSetCsShaderWithModifier\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_227(void) { printf("BF1 stub %s: sceNpAuthGetAuthorizationCode\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_228(void) { printf("BF1 stub %s: sceKernelMapDirectMemory\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_229(void) { printf("BF1 stub %s: sceNpCommerceDialogUpdateStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_230(void) { printf("BF1 stub %s: JSObjectCopyPropertyNames\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_231(void) { printf("BF1 stub %s: sceNpProfileDialogInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_232(void) { printf("BF1 stub %s: sceAudioInInput\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_233(void) { printf("BF1 stub %s: scePlayGoOpen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_234(void) { printf("BF1 stub %s: sceGnmValidateResetState\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_235(void) { printf("BF1 stub %s: sceKernelReleaseDirectMemory\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_236(void) { printf("BF1 stub %s: JSSynchronousGarbageCollectForDebugging\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_237(void) { printf("BF1 stub %s: sceAjmFinalize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_238(void) { printf("BF1 stub %s: scePlayGoTerminate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_239(void) { printf("BF1 stub %s: sceVideoOutSetWindowModeMargins\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_240(void) { printf("BF1 stub %s: sceGnmResetVgtControl\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_241(void) { printf("BF1 stub %s: sceNpAuthCreateAsyncRequest\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_242(void) { printf("BF1 stub %s: sceVideoOutConfigureOutputMode_\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_243(void) { printf("BF1 stub %s: rename\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_244(void) { printf("BF1 stub %s: sceImeDialogInit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_245(void) { printf("BF1 stub %s: sceLibcHeapGetTraceInfo\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_246(void) { printf("BF1 stub %s: sceKernelMapNamedDirectMemory\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_247(void) { printf("BF1 stub %s: sceNetResolverStartNtoa\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_248(void) { printf("BF1 stub %s: sceNetInit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_249(void) { printf("BF1 stub %s: JSStringRelease\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_250(void) { printf("BF1 stub %s: scePlayGoGetToDoList\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_251(void) { printf("BF1 stub %s: JSStringGetUTF8CString\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_252(void) { printf("BF1 stub %s: scePthreadSetcancelstate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_253(void) { printf("BF1 stub %s: sceKernelDebugRaiseException\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_254(void) { printf("BF1 stub %s: sceNetConnect\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_255(void) { printf("BF1 stub %s: sceVoiceEnd\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_256(void) { printf("BF1 stub %s: pthread_cond_wait\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_257(void) { printf("BF1 stub %s: __stack_chk_fail\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_258(void) { printf("BF1 stub %s: scePthreadRwlockRdlock\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_259(void) { printf("BF1 stub %s: pthread_create\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_260(void) { printf("BF1 stub %s: sceAudio3dPortClose\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_261(void) { printf("BF1 stub %s: sceNpAbortRequest\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_262(void) { printf("BF1 stub %s: scePthreadGetschedparam\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_263(void) { printf("BF1 stub %s: sceRandomGetRandomNumber\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_264(void) { printf("BF1 stub %s: sceNetAccept\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_265(void) { printf("BF1 stub %s: sceGnmDeleteEqEvent\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_266(void) { printf("BF1 stub %s: sceNpWebApiDeleteServicePushEventFilter\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_267(void) { printf("BF1 stub %s: sceNpWebApiRegisterPushEventCallback\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_268(void) { printf("BF1 stub %s: _ZN3sce7Toolkit2NP9Utilities6FutureINS1_6NpUserEE3getEv\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_269(void) { printf("BF1 stub %s: scePthreadKeyDelete\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_270(void) { printf("BF1 stub %s: sceAjmModuleRegister\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_271(void) { printf("BF1 stub %s: sceNetSocket\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_272(void) { printf("BF1 stub %s: sceGnmValidationRegisterMemoryCheckCallback\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_273(void) { printf("BF1 stub %s: sceKernelClockGettime\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_274(void) { printf("BF1 stub %s: sceKernelStopUnloadModule\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_275(void) { printf("BF1 stub %s: sceAudioOutOutput\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_276(void) { printf("BF1 stub %s: usleep\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_277(void) { printf("BF1 stub %s: sceKernelNanosleep\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_278(void) { printf("BF1 stub %s: sceKernelDeleteSema\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_279(void) { printf("BF1 stub %s: sceGnmDriverTraceInProgress\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_280(void) { printf("BF1 stub %s: sceAppContentInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_281(void) { printf("BF1 stub %s: JSContextGetGlobalObject\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_282(void) { printf("BF1 stub %s: sceGnmLogicalCuMaskToPhysicalCuMask\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_283(void) { printf("BF1 stub %s: sceGnmValidateGetDiagnosticInfo\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_284(void) { printf("BF1 stub %s: pthread_cond_destroy\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_285(void) { printf("BF1 stub %s: sceAjmInstanceDestroy\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_286(void) { printf("BF1 stub %s: sceNetNtohs\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_287(void) { printf("BF1 stub %s: sceKernelGetModuleInfoForUnwind\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_288(void) { printf("BF1 stub %s: sceNetCtlUnregisterCallback\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_289(void) { printf("BF1 stub %s: scePthreadAttrGetstackaddr\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_290(void) { printf("BF1 stub %s: sceSaveDataDelete\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_291(void) { printf("BF1 stub %s: sceNpDeleteRequest\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_292(void) { printf("BF1 stub %s: sceNetEpollCreate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_293(void) { printf("BF1 stub %s: sceGnmValidateDisableDiagnostics\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_294(void) { printf("BF1 stub %s: sceVideoOutGetFlipStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_295(void) { printf("BF1 stub %s: sceKernelFcntl\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_296(void) { printf("BF1 stub %s: sceNpPartyGetMembers\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_297(void) { printf("BF1 stub %s: sceNpLookupNpId\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_298(void) { printf("BF1 stub %s: scePthreadYield\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_299(void) { printf("BF1 stub %s: select\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_300(void) { printf("BF1 stub %s: sceNetGetpeername\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_301(void) { printf("BF1 stub %s: sceNpTrophyRegisterContext\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_302(void) { printf("BF1 stub %s: sceGnmDriverCaptureInProgress\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_303(void) { printf("BF1 stub %s: sceNetShutdown\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_304(void) { printf("BF1 stub %s: socket\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_305(void) { printf("BF1 stub %s: getpeername\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_306(void) { printf("BF1 stub %s: sceVoiceSetBitRate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_307(void) { printf("BF1 stub %s: JSObjectMakeFunctionWithCallback\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_308(void) { printf("BF1 stub %s: sceSaveDataInitialize3\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_309(void) { printf("BF1 stub %s: sceVideodecDeleteDecoder\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_310(void) { printf("BF1 stub %s: sceNetCtlRegisterCallback\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_311(void) { printf("BF1 stub %s: sceGnmSetGsShader\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_312(void) { printf("BF1 stub %s: sceKernelClose\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_313(void) { printf("BF1 stub %s: sceGnmInsertThreadTraceMarker\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_314(void) { printf("BF1 stub %s: scePthreadAttrSetstacksize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_315(void) { printf("BF1 stub %s: scePlayGoClose\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_316(void) { printf("BF1 stub %s: sceAudio3dInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_317(void) { printf("BF1 stub %s: sceGnmGetEqEventType\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_318(void) { printf("BF1 stub %s: sceVideoOutOpen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_319(void) { printf("BF1 stub %s: sceGnmDestroyWorkloadStream\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_320(void) { printf("BF1 stub %s: sceGnmUpdateVsShader\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_321(void) { printf("BF1 stub %s: sceNpLookupPollAsync\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_322(void) { printf("BF1 stub %s: signal\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_323(void) { printf("BF1 stub %s: sceAppContentAddcontMount\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_324(void) { printf("BF1 stub %s: sceAudio3dPortPush\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_325(void) { printf("BF1 stub %s: sceGnmSetHsShader\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_326(void) { printf("BF1 stub %s: sceKernelGetCpumode\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_327(void) { printf("BF1 stub %s: sceKernelFtruncate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_328(void) { printf("BF1 stub %s: sceNpRegisterStateCallback\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_329(void) { printf("BF1 stub %s: sigfillset\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_330(void) { printf("BF1 stub %s: sceCompanionHttpdGetEvent\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_331(void) { printf("BF1 stub %s: sceSystemServiceHideSplashScreen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_332(void) { printf("BF1 stub %s: scePthreadSetprio\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_333(void) { printf("BF1 stub %s: sceGnmInsertPushMarker\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_334(void) { printf("BF1 stub %s: sceKernelQueryMemoryProtection\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_335(void) { printf("BF1 stub %s: scePthreadCondWait\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_336(void) { printf("BF1 stub %s: sceAudio3dTerminate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_337(void) { printf("BF1 stub %s: sceInvitationDialogClose\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_338(void) { printf("BF1 stub %s: sceAjmModuleUnregister\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_339(void) { printf("BF1 stub %s: sceKernelPrintBacktraceWithModuleInfo\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_340(void) { printf("BF1 stub %s: sceKernelTruncate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_341(void) { printf("BF1 stub %s: sceKernelIsNeoMode\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_342(void) { printf("BF1 stub %s: sceGnmSetEmbeddedPsShader\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_343(void) { printf("BF1 stub %s: scePthreadRwlockTryrdlock\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_344(void) { printf("BF1 stub %s: sceNpGetOnlineId\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_345(void) { printf("BF1 stub %s: sceNpWebApiDeleteContext\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_346(void) { printf("BF1 stub %s: connect\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_347(void) { printf("BF1 stub %s: sceNpTrophyCreateContext\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_348(void) { printf("BF1 stub %s: sceAudio3dPortOpen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_349(void) { printf("BF1 stub %s: sceGnmSetWaveLimitMultipliers\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_350(void) { printf("BF1 stub %s: sceInvitationDialogInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_351(void) { printf("BF1 stub %s: JSValueMakeBoolean\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_352(void) { printf("BF1 stub %s: sceVoiceWriteToIPort\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_353(void) { printf("BF1 stub %s: scePadReadState\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_354(void) { printf("BF1 stub %s: JSEvaluateScript\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_355(void) { printf("BF1 stub %s: sceSaveDataDialogTerminate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_356(void) { printf("BF1 stub %s: sceGnmDispatchIndirect\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_357(void) { printf("BF1 stub %s: sceNpFriendListDialogGetResult\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_358(void) { printf("BF1 stub %s: sceNetCtlTerm\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_359(void) { printf("BF1 stub %s: sceVoiceGetResourceInfo\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_360(void) { printf("BF1 stub %s: JSValueMakeNull\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_361(void) { printf("BF1 stub %s: Need_sceLibcInternal\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_362(void) { printf("BF1 stub %s: sceNetEpollControl\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_363(void) { printf("BF1 stub %s: sceKernelWaitSema\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_364(void) { printf("BF1 stub %s: sceFiberRun\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_365(void) { printf("BF1 stub %s: sceNpGetAccountId\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_366(void) { printf("BF1 stub %s: scePthreadSelf\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_367(void) { printf("BF1 stub %s: sceGnmInsertPushColorMarker\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_368(void) { printf("BF1 stub %s: sigprocmask\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_369(void) { printf("BF1 stub %s: sceGnmInsertSetColorMarker\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_370(void) { printf("BF1 stub %s: sceVoiceDisconnectIPortFromOPort\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_371(void) { printf("BF1 stub %s: sceNpWebApiTerminate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_372(void) { printf("BF1 stub %s: JSGlobalContextRelease\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_373(void) { printf("BF1 stub %s: sceAudioOutSetVolume\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_374(void) { printf("BF1 stub %s: sceMsgDialogOpen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_375(void) { printf("BF1 stub %s: sceGnmAreSubmitsAllowed\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_376(void) { printf("BF1 stub %s: sceGnmAddEqEvent\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_377(void) { printf("BF1 stub %s: sceVoiceDeletePort\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_378(void) { printf("BF1 stub %s: sceNetBind\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_379(void) { printf("BF1 stub %s: scePthreadRwlockTrywrlock\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_380(void) { printf("BF1 stub %s: JSValueToBoolean\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_381(void) { printf("BF1 stub %s: sceGnmDingDong\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_382(void) { printf("BF1 stub %s: close\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_383(void) { printf("BF1 stub %s: sceNetSend\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_384(void) { printf("BF1 stub %s: scePthreadSetaffinity\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_385(void) { printf("BF1 stub %s: sceAppContentTemporaryDataMount2\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_386(void) { printf("BF1 stub %s: sceUserServiceTerminate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_387(void) { printf("BF1 stub %s: sceGnmDingDongForWorkload\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_388(void) { printf("BF1 stub %s: sceSaveDataSaveIcon\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_389(void) { printf("BF1 stub %s: sceCompanionUtilGetEvent\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_390(void) { printf("BF1 stub %s: sceNpAuthAbortRequest\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_391(void) { printf("BF1 stub %s: sceGnmSetVgtControl\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_392(void) { printf("BF1 stub %s: sceSaveDataLoadIcon\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_393(void) { printf("BF1 stub %s: sceVoiceReadFromOPort\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_394(void) { printf("BF1 stub %s: sceKernelMunmap\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_395(void) { printf("BF1 stub %s: JSValueMakeNumber\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_396(void) { printf("BF1 stub %s: sceNetTerm\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_397(void) { printf("BF1 stub %s: scePthreadMutexInit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_398(void) { printf("BF1 stub %s: sceSharePlaySetProhibition\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_399(void) { printf("BF1 stub %s: _is_signal_return\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_400(void) { printf("BF1 stub %s: sceGnmDriverTriggerCapture\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_401(void) { printf("BF1 stub %s: pthread_mutexattr_init\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_402(void) { printf("BF1 stub %s: sceGameLiveStreamingEnableLiveStreaming\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_403(void) { printf("BF1 stub %s: sceNetPoolCreate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_404(void) { printf("BF1 stub %s: sceNpCmpOnlineId\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_405(void) { printf("BF1 stub %s: __progname\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_406(void) { printf("BF1 stub %s: sceAjmInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_407(void) { printf("BF1 stub %s: sceAjmBatchJobControlBufferRa\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_408(void) { printf("BF1 stub %s: sceNetEpollWait\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_409(void) { printf("BF1 stub %s: sceNpCommerceHidePsStoreIcon\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_410(void) { printf("BF1 stub %s: sceSaveDataDirNameSearch\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_411(void) { printf("BF1 stub %s: sceMsgDialogTerminate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_412(void) { printf("BF1 stub %s: sceNpGetState\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_413(void) { printf("BF1 stub %s: sceSysmoduleUnloadModule\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_414(void) { printf("BF1 stub %s: sceKernelStat\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_415(void) { printf("BF1 stub %s: scePthreadAttrSetinheritsched\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_416(void) { printf("BF1 stub %s: sceNpCreateAsyncRequest\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_417(void) { printf("BF1 stub %s: sceKernelGettimeofday\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_418(void) { printf("BF1 stub %s: sceAudioOutOpen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_419(void) { printf("BF1 stub %s: sceVoiceGetPortAttr\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_420(void) { printf("BF1 stub %s: scePthreadGetspecific\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_421(void) { printf("BF1 stub %s: sceRazorIsLoaded\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_422(void) { printf("BF1 stub %s: sceGnmDrawIndirectMulti\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_423(void) { printf("BF1 stub %s: sceKernelGetModuleInfoFromAddr\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_424(void) { printf("BF1 stub %s: __stack_chk_guard\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_425(void) { printf("BF1 stub %s: sceGnmRequestMipStatsReportAndReset\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_426(void) { printf("BF1 stub %s: sceVideodecReset\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_427(void) { printf("BF1 stub %s: sceAjmBatchStartBuffer\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_428(void) { printf("BF1 stub %s: sceCoredumpUnregisterCoredumpHandler\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_429(void) { printf("BF1 stub %s: setsockopt\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_430(void) { printf("BF1 stub %s: sceSystemGestureGetTouchEvents\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_431(void) { printf("BF1 stub %s: sceSysmoduleIsLoaded\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_432(void) { printf("BF1 stub %s: sceUserServiceGetLoginUserIdList\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_433(void) { printf("BF1 stub %s: sceKernelFsync\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_434(void) { printf("BF1 stub %s: send\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_435(void) { printf("BF1 stub %s: sceSystemServiceParamGetInt\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_436(void) { printf("BF1 stub %s: sceKernelChmod\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_437(void) { printf("BF1 stub %s: sceNpFriendListDialogUpdateStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_438(void) { printf("BF1 stub %s: sceGnmGetProtectionFaultTimeStamp\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_439(void) { printf("BF1 stub %s: sceKernelWaitEqueue\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_440(void) { printf("BF1 stub %s: scePthreadCondDestroy\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_441(void) { printf("BF1 stub %s: JSValueGetType\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_442(void) { printf("BF1 stub %s: sceSysmoduleLoadModule\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_443(void) { printf("BF1 stub %s: sceGnmSetVsShader\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_444(void) { printf("BF1 stub %s: JSPropertyNameArrayGetCount\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_445(void) { printf("BF1 stub %s: sceGnmRequestFlipAndSubmitDone\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_446(void) { printf("BF1 stub %s: scePthreadKeyCreate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_447(void) { printf("BF1 stub %s: scePadGetControllerInformation\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_448(void) { printf("BF1 stub %s: sceNpAuthPollAsync\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_449(void) { printf("BF1 stub %s: sceNetCtlInit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_450(void) { printf("BF1 stub %s: sceNetSendto\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_451(void) { printf("BF1 stub %s: sceImeDialogTerm\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_452(void) { printf("BF1 stub %s: pthread_join\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_453(void) { printf("BF1 stub %s: getrusage\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_454(void) { printf("BF1 stub %s: sceNetGetSockInfo\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_455(void) { printf("BF1 stub %s: JSPropertyNameArrayRelease\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_456(void) { printf("BF1 stub %s: _sceFiberInitializeImpl\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_457(void) { printf("BF1 stub %s: sceNpProfileDialogUpdateStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_458(void) { printf("BF1 stub %s: sceSslInit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_459(void) { printf("BF1 stub %s: sceNetGetsockname\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_460(void) { printf("BF1 stub %s: sceGnmValidateDrawCommandBuffers\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_461(void) { printf("BF1 stub %s: JSStringCreateWithUTF8CString\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_462(void) { printf("BF1 stub %s: scePadInit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_463(void) { printf("BF1 stub %s: sceKernelCheckedReleaseDirectMemory\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_464(void) { printf("BF1 stub %s: sceVideoOutSetBufferAttribute\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_465(void) { printf("BF1 stub %s: sceNpCmpNpId\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_466(void) { printf("BF1 stub %s: sceGnmFlushGarlic\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_467(void) { printf("BF1 stub %s: sceGnmGetLastWaitedAddress\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_468(void) { printf("BF1 stub %s: getargc\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_469(void) { printf("BF1 stub %s: scePthreadMutexattrSettype\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_470(void) { printf("BF1 stub %s: sceNetCtlCheckCallback\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_471(void) { printf("BF1 stub %s: sceNetHtons\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_472(void) { printf("BF1 stub %s: sceGnmBeginWorkload\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_473(void) { printf("BF1 stub %s: sceNpGetParentalControlInfo\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_474(void) { printf("BF1 stub %s: sceSharePlayInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_475(void) { printf("BF1 stub %s: sceKernelGetdents\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_476(void) { printf("BF1 stub %s: sceUserServiceInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_477(void) { printf("BF1 stub %s: sceSystemGestureUpdateTouchRecognizer\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_478(void) { printf("BF1 stub %s: sceSystemGestureClose\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_479(void) { printf("BF1 stub %s: sceGnmDrawIndexMultiInstanced\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_480(void) { printf("BF1 stub %s: sceAudio3dObjectReserve\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_481(void) { printf("BF1 stub %s: sceGnmSubmitCommandBuffersForWorkload\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_482(void) { printf("BF1 stub %s: sceVideodecFlush\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_483(void) { printf("BF1 stub %s: sceGnmIsUserPaEnabled\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_484(void) { printf("BF1 stub %s: sceGnmInsertSetMarker\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_485(void) { printf("BF1 stub %s: JSValueIsObject\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_486(void) { printf("BF1 stub %s: sceKernelDeleteEqueue\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_487(void) { printf("BF1 stub %s: sceGnmSetGsRingSizes\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_488(void) { printf("BF1 stub %s: getpagesize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_489(void) { printf("BF1 stub %s: sceGnmGetShaderStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_490(void) { printf("BF1 stub %s: sceNpPartyRegisterHandler\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_491(void) { printf("BF1 stub %s: sceKernelFstat\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_492(void) { printf("BF1 stub %s: scePthreadCondSignal\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_493(void) { printf("BF1 stub %s: sceNpWebApiRegisterServicePushEventCallback\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_494(void) { printf("BF1 stub %s: sceNetResolverDestroy\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_495(void) { printf("BF1 stub %s: sceNetListen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_496(void) { printf("BF1 stub %s: sceKernelGetModuleInfo\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_497(void) { printf("BF1 stub %s: __pthread_cxa_finalize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_498(void) { printf("BF1 stub %s: _ZNK3sce7Toolkit2NP9Utilities10FutureImpl8hasErrorEv\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_499(void) { printf("BF1 stub %s: sceGameLiveStreamingInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_500(void) { printf("BF1 stub %s: sceMsgDialogInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_501(void) { printf("BF1 stub %s: clock_gettime\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_502(void) { printf("BF1 stub %s: JSObjectGetPropertyAtIndex\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_503(void) { printf("BF1 stub %s: recvfrom\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_504(void) { printf("BF1 stub %s: sceDiscMapIsRequestOnHDD\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_505(void) { printf("BF1 stub %s: sceVideodecQueryResourceInfo\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_506(void) { printf("BF1 stub %s: JSObjectCallAsFunction\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_507(void) { printf("BF1 stub %s: sceNpPartyInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_508(void) { printf("BF1 stub %s: sceGnmGetTheTessellationFactorRingBufferBaseAddress\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_509(void) { printf("BF1 stub %s: _ZNK3sce7Toolkit2NP9Utilities10FutureImpl9hasResultEv\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_510(void) { printf("BF1 stub %s: pthread_mutex_destroy\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_511(void) { printf("BF1 stub %s: sceNpCommerceDialogTerminate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_512(void) { printf("BF1 stub %s: scePthreadCondattrInit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_513(void) { printf("BF1 stub %s: pthread_mutexattr_settype\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_514(void) { printf("BF1 stub %s: sceKernelMapNamedFlexibleMemory\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_515(void) { printf("BF1 stub %s: sceGnmUpdatePsShader350\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_516(void) { printf("BF1 stub %s: sceNpUnregisterStateCallback\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_517(void) { printf("BF1 stub %s: sigreturn\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_518(void) { printf("BF1 stub %s: scePthreadRwlockWrlock\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_519(void) { printf("BF1 stub %s: JSValueMakeUndefined\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_520(void) { printf("BF1 stub %s: sceNpLookupDeleteTitleCtx\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_521(void) { printf("BF1 stub %s: gettimeofday\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_522(void) { printf("BF1 stub %s: sceGnmGetShaderProgramBaseAddress\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_523(void) { printf("BF1 stub %s: sceGnmDispatchInitDefaultHardwareState\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_524(void) { printf("BF1 stub %s: sceKernelPwrite\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_525(void) { printf("BF1 stub %s: sceGnmUpdateGsShader\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_526(void) { printf("BF1 stub %s: sceNpPartyCreate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_527(void) { printf("BF1 stub %s: sceVoiceCreatePort\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_528(void) { printf("BF1 stub %s: sceKernelRmdir\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_529(void) { printf("BF1 stub %s: sceNpWebApiDeleteRequest\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_530(void) { printf("BF1 stub %s: scePthreadAttrInit\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_531(void) { printf("BF1 stub %s: sceSystemGestureResetPrimitiveTouchRecognizer\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_532(void) { printf("BF1 stub %s: JSObjectMakeArray\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_533(void) { printf("BF1 stub %s: sceImeDialogAbort\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_534(void) { printf("BF1 stub %s: sendto\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_535(void) { printf("BF1 stub %s: sceSystemGestureResetTouchRecognizer\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_536(void) { printf("BF1 stub %s: scePthreadSetschedparam\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_537(void) { printf("BF1 stub %s: sceGnmGetGpuBlockStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_538(void) { printf("BF1 stub %s: sceNpPartyTerminate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_539(void) { printf("BF1 stub %s: sceVoiceConnectIPortToOPort\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_540(void) { printf("BF1 stub %s: sceGnmDrawIndexOffset\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_541(void) { printf("BF1 stub %s: sceNetCtlGetInfo\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_542(void) { printf("BF1 stub %s: sceKernelLseek\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_543(void) { printf("BF1 stub %s: scePthreadJoin\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_544(void) { printf("BF1 stub %s: sceNpWebApiUtilityParseNpId\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_545(void) { printf("BF1 stub %s: sceNpGetNpId\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_546(void) { printf("BF1 stub %s: _sceKernelRtldSetApplicationHeapAPI\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_547(void) { printf("BF1 stub %s: JSObjectGetProperty\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_548(void) { printf("BF1 stub %s: sceKernelGetDirectMemorySize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_549(void) { printf("BF1 stub %s: sceVideoOutModeSetAny_\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_550(void) { printf("BF1 stub %s: listen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_551(void) { printf("BF1 stub %s: sceVideodecDecode\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_552(void) { printf("BF1 stub %s: scePadRead\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_553(void) { printf("BF1 stub %s: sceNpTrophyCreateHandle\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_554(void) { printf("BF1 stub %s: sceGnmValidateDispatchCommandBuffers\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_555(void) { printf("BF1 stub %s: sceNpWebApiUnregisterPushEventCallback\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_556(void) { printf("BF1 stub %s: sceVideodecCreateDecoder\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_557(void) { printf("BF1 stub %s: JSValueToObject\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_558(void) { printf("BF1 stub %s: sceGnmDebugHardwareStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_559(void) { printf("BF1 stub %s: sceSystemGestureOpen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_560(void) { printf("BF1 stub %s: sceNpCommerceDialogGetResult\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_561(void) { printf("BF1 stub %s: sceNpCheckPlus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_562(void) { printf("BF1 stub %s: sceSystemServiceGetStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_563(void) { printf("BF1 stub %s: JSValueToNumber\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_564(void) { printf("BF1 stub %s: sceGnmValidateOnSubmitEnabled\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_565(void) { printf("BF1 stub %s: sceKernelAllocateDirectMemory\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_566(void) { printf("BF1 stub %s: sceKernelVirtualQuery\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_567(void) { printf("BF1 stub %s: sceVideoOutGetEventData\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_568(void) { printf("BF1 stub %s: scePthreadGetaffinity\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_569(void) { printf("BF1 stub %s: sceNpWebApiCreateRequest\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_570(void) { printf("BF1 stub %s: scePlayGoGetInstallSpeed\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_571(void) { printf("BF1 stub %s: sceAudioOutClose\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_572(void) { printf("BF1 stub %s: sceSaveDataDialogInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_573(void) { printf("BF1 stub %s: sceNpWebApiCreateServicePushEventFilter\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_574(void) { printf("BF1 stub %s: sceNpGetPlatformType\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_575(void) { printf("BF1 stub %s: scePthreadMutexattrDestroy\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_576(void) { printf("BF1 stub %s: sceGnmDrawOpaqueAuto\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_577(void) { printf("BF1 stub %s: sceScreenShotDisable\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_578(void) { printf("BF1 stub %s: sceGnmGetGpuInfoStatus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_579(void) { printf("BF1 stub %s: msync\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_580(void) { printf("BF1 stub %s: sceKernelGetdirentries\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_581(void) { printf("BF1 stub %s: _ZN3sce7Toolkit2NP9Utilities6FutureINS1_6NpUserEED1Ev\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_582(void) { printf("BF1 stub %s: sceKernelReleaseFlexibleMemory\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_583(void) { printf("BF1 stub %s: scePthreadMutexUnlock\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_584(void) { printf("BF1 stub %s: JSObjectSetPropertyAtIndex\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_585(void) { printf("BF1 stub %s: scePlayGoInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_586(void) { printf("BF1 stub %s: pthread_mutex_init\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_587(void) { printf("BF1 stub %s: JSValueIsBoolean\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_588(void) { printf("BF1 stub %s: sceRazorCaptureImmediate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_589(void) { printf("BF1 stub %s: sceNetCtlGetState\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_590(void) { printf("BF1 stub %s: scePlayGoGetLocus\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_591(void) { printf("BF1 stub %s: sceVoiceResetPort\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_592(void) { printf("BF1 stub %s: sceNpProfileDialogOpen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_593(void) { printf("BF1 stub %s: sceCommonDialogInitialize\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_594(void) { printf("BF1 stub %s: scePthreadMutexTrylock\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_595(void) { printf("BF1 stub %s: sceNpPollAsync\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_596(void) { printf("BF1 stub %s: sceVideoOutClose\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_597(void) { printf("BF1 stub %s: __tls_get_addr\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_598(void) { printf("BF1 stub %s: sceGnmSetLsShader\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_599(void) { printf("BF1 stub %s: JSObjectMake\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_600(void) { printf("BF1 stub %s: sceVideoOutRegisterBuffers\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_601(void) { printf("BF1 stub %s: sceGnmDispatchIndirectOnMec\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_602(void) { printf("BF1 stub %s: sceNpLookupDeleteRequest\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_603(void) { printf("BF1 stub %s: scePthreadCondattrDestroy\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_604(void) { printf("BF1 stub %s: pthread_attr_init\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_605(void) { printf("BF1 stub %s: sceKernelLoadStartModule\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_606(void) { printf("BF1 stub %s: sceImeDialogGetResult\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_607(void) { printf("BF1 stub %s: scePthreadAttrGet\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_608(void) { printf("BF1 stub %s: sceNpWebApiCreateContext\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_609(void) { printf("BF1 stub %s: sceGnmSubmitAndFlipCommandBuffers\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_610(void) { printf("BF1 stub %s: scePadOpen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_611(void) { printf("BF1 stub %s: sceAppContentGetAddcontInfoList\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_612(void) { printf("BF1 stub %s: sceNetGetsockopt\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_613(void) { printf("BF1 stub %s: sceNpWebApiCreatePushEventFilter\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_614(void) { printf("BF1 stub %s: scePadSetVibration\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_615(void) { printf("BF1 stub %s: sceUserServiceGetEvent\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_616(void) { printf("BF1 stub %s: sceSaveDataTerminate\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_617(void) { printf("BF1 stub %s: nanosleep\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_618(void) { printf("BF1 stub %s: sceGnmDrawInitDefaultHardwareState350\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_619(void) { printf("BF1 stub %s: sceGnmSubmitDone\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_620(void) { printf("BF1 stub %s: JSObjectSetProperty\n", "bf1_pointer_stub"); return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_621(void) { printf("BF1 stub %s: sceNpWebApiDeletePushEventFilter\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_622(void) { printf("BF1 stub %s: sceKernelDebugRaiseExceptionOnReleaseMode\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_623(void) { printf("BF1 stub %s: sceNetSocketAbort\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_624(void) { printf("BF1 stub %s: sceNpFriendListDialogOpen\n", "bf1_zero_stub"); return bf1_zero_stub(); }
static ABI int64_t bf1_stub_625(void) { printf("BF1 stub %s: sceGnmSubmitCommandBuffers\n", "bf1_zero_stub"); return bf1_zero_stub(); }

static const RuntimeExport exports[] = {
    {"sceGnmSetEmbeddedVsShader",bf1_stub_0},
    {"scePthreadSetspecific",bf1_stub_1},
    {"scePthreadRwlockUnlock",bf1_stub_2},
    {"sceKernelPread",bf1_stub_3},
    {"sceGnmSetupMipStatsReport",bf1_stub_4},
    {"sceKernelReadTsc",bf1_stub_5},
    {"sceNpPartyShowInvitationList",bf1_stub_6},
    {"scePlayGoGetProgress",bf1_stub_7},
    {"scePthreadAttrSetdetachstate",bf1_stub_8},
    {"sceKernelInternalMemoryGetModuleSegmentInfo",bf1_stub_9},
    {"sceKernelSleep",bf1_stub_10},
    {"scePthreadAttrGetstacksize",bf1_stub_11},
    {"sceKernelConvertUtcToLocaltime",bf1_stub_12},
    {"sceAjmBatchWait",bf1_stub_13},
    {"scePthreadAttrGetstack",bf1_stub_14},
    {"sceGnmDispatchDirect",bf1_stub_15},
    {"sceKernelUtimes",bf1_stub_16},
    {"sceSslTerm",bf1_stub_17},
    {"sceKernelConvertLocaltimeToUtc",bf1_stub_18},
    {"sceNpProfileDialogTerminate",bf1_stub_19},
    {"pthread_cond_init",bf1_stub_20},
    {"sceNpCommerceDialogInitialize",bf1_stub_21},
    {"sceNetCtlGetResult",bf1_stub_22},
    {"JSValueMakeString",bf1_stub_23},
    {"sceSaveDataMount2",bf1_stub_24},
    {"sceInvitationDialogOpen",bf1_stub_25},
    {"sceKernelMkdir",bf1_stub_26},
    {"sceKernelPollSema",bf1_stub_27},
    {"scePthreadOnce",bf1_stub_28},
    {"sceKernelCreateSema",bf1_stub_29},
    {"sceRtcGetCurrentTick",bf1_stub_30},
    {"scePthreadMutexattrSetprotocol",bf1_stub_31},
    {"sceKernelOpen",bf1_stub_32},
    {"sceAudio3dObjectUnreserve",bf1_stub_33},
    {"sceSystemGestureAppendTouchRecognizer",bf1_stub_34},
    {"sceKernelGetTscFrequency",bf1_stub_35},
    {"sceKernelUsleep",bf1_stub_36},
    {"sceSystemServiceGetDisplaySafeAreaInfo",bf1_stub_37},
    {"sceGnmInsertWaitFlipDone",bf1_stub_38},
    {"scePthreadGetprio",bf1_stub_39},
    {"sceUserServiceGetUserName",bf1_stub_40},
    {"sceGnmLogicalCuIndexToPhysicalCuIndex",bf1_stub_41},
    {"pthread_cond_timedwait",bf1_stub_42},
    {"sceNpTrophyUnlockTrophy",bf1_stub_43},
    {"sceGnmMapComputeQueue",bf1_stub_44},
    {"sceNpFriendListDialogInitialize",bf1_stub_45},
    {"pthread_cond_signal",bf1_stub_46},
    {"scePthreadMutexDestroy",bf1_stub_47},
    {"pthread_attr_setstacksize",bf1_stub_48},
    {"sceKernelBatchMap",bf1_stub_49},
    {"scePthreadCondInit",bf1_stub_50},
    {"pthread_mutex_unlock",bf1_stub_51},
    {"sceNpWebApiUnregisterServicePushEventCallback",bf1_stub_52},
    {"sceNetSetsockopt",bf1_stub_53},
    {"sceNpCheckNpAvailability",bf1_stub_54},
    {"sceScreenShotEnable",bf1_stub_55},
    {"sceNetRecvfrom",bf1_stub_56},
    {"scePlayGoGetLanguageMask",bf1_stub_57},
    {"scePthreadEqual",bf1_stub_58},
    {"sceSystemGestureFinalizePrimitiveTouchRecognizer",bf1_stub_59},
    {"sceNpCheckCallback",bf1_stub_60},
    {"accept",bf1_stub_61},
    {"sceNpPartyCheckCallback",bf1_stub_62},
    {"sceKernelMlock",bf1_stub_63},
    {"scePthreadExit",bf1_stub_64},
    {"sceSystemGestureInitializePrimitiveTouchRecognizer",bf1_stub_65},
    {"scePthreadAttrSetaffinity",bf1_stub_66},
    {"sceAppContentAddcontUnmount",bf1_stub_67},
    {"scePthreadAttrSetschedpolicy",bf1_stub_68},
    {"sceNetSocketClose",bf1_stub_69},
    {"scePlayGoSetInstallSpeed",bf1_stub_70},
    {"sceKernelCancelSema",bf1_stub_71},
    {"sceKernelGetProcessTime",bf1_stub_72},
    {"sceKernelSignalSema",bf1_stub_73},
    {"scePthreadDetach",bf1_stub_74},
    {"sceSaveDataDialogOpen",bf1_stub_75},
    {"sceAudio3dObjectSetAttributes",bf1_stub_76},
    {"sceGnmDrawIndirect",bf1_stub_77},
    {"sceKernelWrite",bf1_stub_78},
    {"sceKernelRename",bf1_stub_79},
    {"sceVoiceStart",bf1_stub_80},
    {"sceNpWebApiDeleteHandle",bf1_stub_81},
    {"sceAudioInOpen",bf1_stub_82},
    {"sceGnmValidateGetDiagnostics",bf1_stub_83},
    {"sceGnmDrawIndexIndirectMulti",bf1_stub_84},
    {"sceGnmSetPsShader350",bf1_stub_85},
    {"sceGnmCreateWorkloadStream",bf1_stub_86},
    {"scePthreadAttrDestroy",bf1_stub_87},
    {"sceSystemServiceReceiveEvent",bf1_stub_88},
    {"sceNetGetMacAddress",bf1_stub_89},
    {"scePthreadRwlockInit",bf1_stub_90},
    {"scePthreadCreate",bf1_stub_91},
    {"sched_yield",bf1_stub_92},
    {"sceGnmRequestFlipAndSubmitDoneForWorkload",bf1_stub_93},
    {"_exit",bf1_stub_94},
    {"sceMsgDialogUpdateStatus",bf1_stub_95},
    {"sceVideoOutGetResolutionStatus",bf1_stub_96},
    {"scePadClose",bf1_stub_97},
    {"_sigprocmask",bf1_stub_98},
    {"sceNpWebApiCreateHandle",bf1_stub_99},
    {"pthread_mutex_lock",bf1_stub_100},
    {"pthread_equal",bf1_stub_101},
    {"sceGnmInsertPopMarker",bf1_stub_102},
    {"sceKernelClearEventFlag",bf1_stub_103},
    {"scePthreadAttrGetaffinity",bf1_stub_104},
    {"sceNpLookupCreateTitleCtx",bf1_stub_105},
    {"sceSaveDataSetParam",bf1_stub_106},
    {"sceNetInetPton",bf1_stub_107},
    {"JSGlobalContextCreate",bf1_stub_108},
    {"sceInvitationDialogGetResult",bf1_stub_109},
    {"sceGnmDrawInitToDefaultContextState",bf1_stub_110},
    {"sceKernelDeleteEventFlag",bf1_stub_111},
    {"fcntl",bf1_stub_112},
    {"sceCoredumpRegisterCoredumpHandler",bf1_stub_113},
    {"sceInvitationDialogUpdateStatus",bf1_stub_114},
    {"sceKernelGetProcParam",bf1_stub_115},
    {"sceAppContentAppParamGetInt",bf1_stub_116},
    {"__error",bf1_stub_117},
    {"sceVoiceInit",bf1_stub_118},
    {"scePthreadMutexLock",bf1_stub_119},
    {"JSValueToStringCopy",bf1_stub_120},
    {"sceNetInetNtop",bf1_stub_121},
    {"sceNetRecv",bf1_stub_122},
    {"sceGameLiveStreamingTerminate",bf1_stub_123},
    {"sceGnmMapComputeQueueWithPriority",bf1_stub_124},
    {"sceNpSetContentRestriction",bf1_stub_125},
    {"sceHttpInit",bf1_stub_126},
    {"sceKernelUnlink",bf1_stub_127},
    {"JSPropertyNameArrayGetNameAtIndex",bf1_stub_128},
    {"sceVoiceStop",bf1_stub_129},
    {"sceGnmUnmapComputeQueue",bf1_stub_130},
    {"sceAjmInstanceCreate",bf1_stub_131},
    {"sceNetResolverAbort",bf1_stub_132},
    {"sceFiberReturnToThread",bf1_stub_133},
    {"pthread_yield",bf1_stub_134},
    {"sceInvitationDialogTerminate",bf1_stub_135},
    {"scePthreadRwlockDestroy",bf1_stub_136},
    {"sceKernelGetDirectMemoryType",bf1_stub_137},
    {"sceSaveDataUmount",bf1_stub_138},
    {"mmap",bf1_stub_139},
    {"sceCommonDialogIsUsed",bf1_stub_140},
    {"JSValueIsUndefined",bf1_stub_141},
    {"scePthreadCondTimedwait",bf1_stub_142},
    {"sceKernelCreateEventFlag",bf1_stub_143},
    {"scePthreadAttrSetstack",bf1_stub_144},
    {"sceKernelAvailableDirectMemorySize",bf1_stub_145},
    {"sceNetResolverCreate",bf1_stub_146},
    {"sceVideoOutSetFlipRate",bf1_stub_147},
    {"sceNpWebApiReadData",bf1_stub_148},
    {"sceMsgDialogGetStatus",bf1_stub_149},
    {"sceUserServiceGetInitialUser",bf1_stub_150},
    {"sceKernelRead",bf1_stub_151},
    {"sceGameLiveStreamingGetCurrentStatus",bf1_stub_152},
    {"sceVoiceGetPortInfo",bf1_stub_153},
    {"sceKernelCreateEqueue",bf1_stub_154},
    {"JSStringGetMaximumUTF8CStringSize",bf1_stub_155},
    {"sceNpCommerceShowPsStoreIcon",bf1_stub_156},
    {"sceNpPartyGetId",bf1_stub_157},
    {"_read",bf1_stub_158},
    {"sceCoredumpWriteUserData",bf1_stub_159},
    {"sceNpCommerceDialogOpen",bf1_stub_160},
    {"scePthreadAttrSetschedparam",bf1_stub_161},
    {"pthread_attr_setdetachstate",bf1_stub_162},
    {"sceNpTrophyDestroyContext",bf1_stub_163},
    {"sceNpFriendListDialogTerminate",bf1_stub_164},
    {"sceGnmDrawIndexIndirect",bf1_stub_165},
    {"sceSystemGestureRemoveTouchRecognizer",bf1_stub_166},
    {"sceSaveDataDialogGetStatus",bf1_stub_167},
    {"pthread_mutexattr_setpshared",bf1_stub_168},
    {"sceNpSetNpTitleId",bf1_stub_169},
    {"sceAjmBatchJobRunBufferRa",bf1_stub_170},
    {"pthread_self",bf1_stub_171},
    {"recv",bf1_stub_172},
    {"sceNpPartyGetMemberInfo",bf1_stub_173},
    {"sceNpGetUserIdByOnlineId",bf1_stub_174},
    {"scePthreadMutexattrInit",bf1_stub_175},
    {"getargv",bf1_stub_176},
    {"sceGnmSetEsShader",bf1_stub_177},
    {"sceSystemGestureCreateTouchRecognizer",bf1_stub_178},
    {"sceGnmEndWorkload",bf1_stub_179},
    {"sceVideoRecordingSetInfo",bf1_stub_180},
    {"__elf_phdr_match_addr",bf1_stub_181},
    {"_write",bf1_stub_182},
    {"sceNpWebApiInitialize",bf1_stub_183},
    {"scePthreadRename",bf1_stub_184},
    {"sceGnmDrawIndexAuto",bf1_stub_185},
    {"sceNpTrophyDestroyHandle",bf1_stub_186},
    {"sceGnmUpdateHsShader",bf1_stub_187},
    {"sceGnmSubmitAndFlipCommandBuffersForWorkload",bf1_stub_188},
    {"sceNpNotifyPlusFeature",bf1_stub_189},
    {"sceSystemGestureUpdatePrimitiveTouchRecognizer",bf1_stub_190},
    {"sceNpGetAccountCountry",bf1_stub_191},
    {"sceNpCreateRequest",bf1_stub_192},
    {"sceGnmGetEqTimeStamp",bf1_stub_193},
    {"sceNpAuthDeleteRequest",bf1_stub_194},
    {"pthread_mutexattr_destroy",bf1_stub_195},
    {"sceGnmDisableMipStatsReport",bf1_stub_196},
    {"sceNetErrnoLoc",bf1_stub_197},
    {"sceVideoOutAddFlipEvent",bf1_stub_198},
    {"sceGnmDrawIndex",bf1_stub_199},
    {"sceGnmValidateGetVersion",bf1_stub_200},
    {"sceImeDialogGetStatus",bf1_stub_201},
    {"sceKernelSetEventFlag",bf1_stub_202},
    {"sceKernelMapFlexibleMemory",bf1_stub_203},
    {"scePthreadMutexTimedlock",bf1_stub_204},
    {"sceHttpTerm",bf1_stub_205},
    {"JSValueIsString",bf1_stub_206},
    {"sceNetEpollDestroy",bf1_stub_207},
    {"sceKernelGetModuleList",bf1_stub_208},
    {"sceNetResolverGetError",bf1_stub_209},
    {"sceNpPartyLeave",bf1_stub_210},
    {"sceNpLookupCreateAsyncRequest",bf1_stub_211},
    {"scePthreadCondBroadcast",bf1_stub_212},
    {"sceKernelWaitEventFlag",bf1_stub_213},
    {"sceFiberFinalize",bf1_stub_214},
    {"sceAudioOutInit",bf1_stub_215},
    {"sceAudioInClose",bf1_stub_216},
    {"pthread_create_name_np",bf1_stub_217},
    {"sceNpWebApiAbortRequest",bf1_stub_218},
    {"pthread_mutex_trylock",bf1_stub_219},
    {"sceNetPoolDestroy",bf1_stub_220},
    {"sceSaveDataDialogUpdateStatus",bf1_stub_221},
    {"sceNpGetAccountLanguage",bf1_stub_222},
    {"sceNpWebApiSendRequest2",bf1_stub_223},
    {"sceGnmGetNumTcaUnits",bf1_stub_224},
    {"bind",bf1_stub_225},
    {"sceGnmSetCsShaderWithModifier",bf1_stub_226},
    {"sceNpAuthGetAuthorizationCode",bf1_stub_227},
    {"sceKernelMapDirectMemory",bf1_stub_228},
    {"sceNpCommerceDialogUpdateStatus",bf1_stub_229},
    {"JSObjectCopyPropertyNames",bf1_stub_230},
    {"sceNpProfileDialogInitialize",bf1_stub_231},
    {"sceAudioInInput",bf1_stub_232},
    {"scePlayGoOpen",bf1_stub_233},
    {"sceGnmValidateResetState",bf1_stub_234},
    {"sceKernelReleaseDirectMemory",bf1_stub_235},
    {"JSSynchronousGarbageCollectForDebugging",bf1_stub_236},
    {"sceAjmFinalize",bf1_stub_237},
    {"scePlayGoTerminate",bf1_stub_238},
    {"sceVideoOutSetWindowModeMargins",bf1_stub_239},
    {"sceGnmResetVgtControl",bf1_stub_240},
    {"sceNpAuthCreateAsyncRequest",bf1_stub_241},
    {"sceVideoOutConfigureOutputMode_",bf1_stub_242},
    {"rename",bf1_stub_243},
    {"sceImeDialogInit",bf1_stub_244},
    {"sceLibcHeapGetTraceInfo",bf1_stub_245},
    {"sceKernelMapNamedDirectMemory",bf1_stub_246},
    {"sceNetResolverStartNtoa",bf1_stub_247},
    {"sceNetInit",bf1_stub_248},
    {"JSStringRelease",bf1_stub_249},
    {"scePlayGoGetToDoList",bf1_stub_250},
    {"JSStringGetUTF8CString",bf1_stub_251},
    {"scePthreadSetcancelstate",bf1_stub_252},
    {"sceKernelDebugRaiseException",bf1_stub_253},
    {"sceNetConnect",bf1_stub_254},
    {"sceVoiceEnd",bf1_stub_255},
    {"pthread_cond_wait",bf1_stub_256},
    {"__stack_chk_fail",bf1_stub_257},
    {"scePthreadRwlockRdlock",bf1_stub_258},
    {"pthread_create",bf1_stub_259},
    {"sceAudio3dPortClose",bf1_stub_260},
    {"sceNpAbortRequest",bf1_stub_261},
    {"scePthreadGetschedparam",bf1_stub_262},
    {"sceRandomGetRandomNumber",bf1_stub_263},
    {"sceNetAccept",bf1_stub_264},
    {"sceGnmDeleteEqEvent",bf1_stub_265},
    {"sceNpWebApiDeleteServicePushEventFilter",bf1_stub_266},
    {"sceNpWebApiRegisterPushEventCallback",bf1_stub_267},
    {"_ZN3sce7Toolkit2NP9Utilities6FutureINS1_6NpUserEE3getEv",bf1_stub_268},
    {"scePthreadKeyDelete",bf1_stub_269},
    {"sceAjmModuleRegister",bf1_stub_270},
    {"sceNetSocket",bf1_stub_271},
    {"sceGnmValidationRegisterMemoryCheckCallback",bf1_stub_272},
    {"sceKernelClockGettime",bf1_stub_273},
    {"sceKernelStopUnloadModule",bf1_stub_274},
    {"sceAudioOutOutput",bf1_stub_275},
    {"usleep",bf1_stub_276},
    {"sceKernelNanosleep",bf1_stub_277},
    {"sceKernelDeleteSema",bf1_stub_278},
    {"sceGnmDriverTraceInProgress",bf1_stub_279},
    {"sceAppContentInitialize",bf1_stub_280},
    {"JSContextGetGlobalObject",bf1_stub_281},
    {"sceGnmLogicalCuMaskToPhysicalCuMask",bf1_stub_282},
    {"sceGnmValidateGetDiagnosticInfo",bf1_stub_283},
    {"pthread_cond_destroy",bf1_stub_284},
    {"sceAjmInstanceDestroy",bf1_stub_285},
    {"sceNetNtohs",bf1_stub_286},
    {"sceKernelGetModuleInfoForUnwind",bf1_stub_287},
    {"sceNetCtlUnregisterCallback",bf1_stub_288},
    {"scePthreadAttrGetstackaddr",bf1_stub_289},
    {"sceSaveDataDelete",bf1_stub_290},
    {"sceNpDeleteRequest",bf1_stub_291},
    {"sceNetEpollCreate",bf1_stub_292},
    {"sceGnmValidateDisableDiagnostics",bf1_stub_293},
    {"sceVideoOutGetFlipStatus",bf1_stub_294},
    {"sceKernelFcntl",bf1_stub_295},
    {"sceNpPartyGetMembers",bf1_stub_296},
    {"sceNpLookupNpId",bf1_stub_297},
    {"scePthreadYield",bf1_stub_298},
    {"select",bf1_stub_299},
    {"sceNetGetpeername",bf1_stub_300},
    {"sceNpTrophyRegisterContext",bf1_stub_301},
    {"sceGnmDriverCaptureInProgress",bf1_stub_302},
    {"sceNetShutdown",bf1_stub_303},
    {"socket",bf1_stub_304},
    {"getpeername",bf1_stub_305},
    {"sceVoiceSetBitRate",bf1_stub_306},
    {"JSObjectMakeFunctionWithCallback",bf1_stub_307},
    {"sceSaveDataInitialize3",bf1_stub_308},
    {"sceVideodecDeleteDecoder",bf1_stub_309},
    {"sceNetCtlRegisterCallback",bf1_stub_310},
    {"sceGnmSetGsShader",bf1_stub_311},
    {"sceKernelClose",bf1_stub_312},
    {"sceGnmInsertThreadTraceMarker",bf1_stub_313},
    {"scePthreadAttrSetstacksize",bf1_stub_314},
    {"scePlayGoClose",bf1_stub_315},
    {"sceAudio3dInitialize",bf1_stub_316},
    {"sceGnmGetEqEventType",bf1_stub_317},
    {"sceVideoOutOpen",bf1_stub_318},
    {"sceGnmDestroyWorkloadStream",bf1_stub_319},
    {"sceGnmUpdateVsShader",bf1_stub_320},
    {"sceNpLookupPollAsync",bf1_stub_321},
    {"signal",bf1_stub_322},
    {"sceAppContentAddcontMount",bf1_stub_323},
    {"sceAudio3dPortPush",bf1_stub_324},
    {"sceGnmSetHsShader",bf1_stub_325},
    {"sceKernelGetCpumode",bf1_stub_326},
    {"sceKernelFtruncate",bf1_stub_327},
    {"sceNpRegisterStateCallback",bf1_stub_328},
    {"sigfillset",bf1_stub_329},
    {"sceCompanionHttpdGetEvent",bf1_stub_330},
    {"sceSystemServiceHideSplashScreen",bf1_stub_331},
    {"scePthreadSetprio",bf1_stub_332},
    {"sceGnmInsertPushMarker",bf1_stub_333},
    {"sceKernelQueryMemoryProtection",bf1_stub_334},
    {"scePthreadCondWait",bf1_stub_335},
    {"sceAudio3dTerminate",bf1_stub_336},
    {"sceInvitationDialogClose",bf1_stub_337},
    {"sceAjmModuleUnregister",bf1_stub_338},
    {"sceKernelPrintBacktraceWithModuleInfo",bf1_stub_339},
    {"sceKernelTruncate",bf1_stub_340},
    {"sceKernelIsNeoMode",bf1_stub_341},
    {"sceGnmSetEmbeddedPsShader",bf1_stub_342},
    {"scePthreadRwlockTryrdlock",bf1_stub_343},
    {"sceNpGetOnlineId",bf1_stub_344},
    {"sceNpWebApiDeleteContext",bf1_stub_345},
    {"connect",bf1_stub_346},
    {"sceNpTrophyCreateContext",bf1_stub_347},
    {"sceAudio3dPortOpen",bf1_stub_348},
    {"sceGnmSetWaveLimitMultipliers",bf1_stub_349},
    {"sceInvitationDialogInitialize",bf1_stub_350},
    {"JSValueMakeBoolean",bf1_stub_351},
    {"sceVoiceWriteToIPort",bf1_stub_352},
    {"scePadReadState",bf1_stub_353},
    {"JSEvaluateScript",bf1_stub_354},
    {"sceSaveDataDialogTerminate",bf1_stub_355},
    {"sceGnmDispatchIndirect",bf1_stub_356},
    {"sceNpFriendListDialogGetResult",bf1_stub_357},
    {"sceNetCtlTerm",bf1_stub_358},
    {"sceVoiceGetResourceInfo",bf1_stub_359},
    {"JSValueMakeNull",bf1_stub_360},
    {"Need_sceLibcInternal",bf1_stub_361},
    {"sceNetEpollControl",bf1_stub_362},
    {"sceKernelWaitSema",bf1_stub_363},
    {"sceFiberRun",bf1_stub_364},
    {"sceNpGetAccountId",bf1_stub_365},
    {"scePthreadSelf",bf1_stub_366},
    {"sceGnmInsertPushColorMarker",bf1_stub_367},
    {"sigprocmask",bf1_stub_368},
    {"sceGnmInsertSetColorMarker",bf1_stub_369},
    {"sceVoiceDisconnectIPortFromOPort",bf1_stub_370},
    {"sceNpWebApiTerminate",bf1_stub_371},
    {"JSGlobalContextRelease",bf1_stub_372},
    {"sceAudioOutSetVolume",bf1_stub_373},
    {"sceMsgDialogOpen",bf1_stub_374},
    {"sceGnmAreSubmitsAllowed",bf1_stub_375},
    {"sceGnmAddEqEvent",bf1_stub_376},
    {"sceVoiceDeletePort",bf1_stub_377},
    {"sceNetBind",bf1_stub_378},
    {"scePthreadRwlockTrywrlock",bf1_stub_379},
    {"JSValueToBoolean",bf1_stub_380},
    {"sceGnmDingDong",bf1_stub_381},
    {"close",bf1_stub_382},
    {"sceNetSend",bf1_stub_383},
    {"scePthreadSetaffinity",bf1_stub_384},
    {"sceAppContentTemporaryDataMount2",bf1_stub_385},
    {"sceUserServiceTerminate",bf1_stub_386},
    {"sceGnmDingDongForWorkload",bf1_stub_387},
    {"sceSaveDataSaveIcon",bf1_stub_388},
    {"sceCompanionUtilGetEvent",bf1_stub_389},
    {"sceNpAuthAbortRequest",bf1_stub_390},
    {"sceGnmSetVgtControl",bf1_stub_391},
    {"sceSaveDataLoadIcon",bf1_stub_392},
    {"sceVoiceReadFromOPort",bf1_stub_393},
    {"sceKernelMunmap",bf1_stub_394},
    {"JSValueMakeNumber",bf1_stub_395},
    {"sceNetTerm",bf1_stub_396},
    {"scePthreadMutexInit",bf1_stub_397},
    {"sceSharePlaySetProhibition",bf1_stub_398},
    {"_is_signal_return",bf1_stub_399},
    {"sceGnmDriverTriggerCapture",bf1_stub_400},
    {"pthread_mutexattr_init",bf1_stub_401},
    {"sceGameLiveStreamingEnableLiveStreaming",bf1_stub_402},
    {"sceNetPoolCreate",bf1_stub_403},
    {"sceNpCmpOnlineId",bf1_stub_404},
    {"__progname",bf1_stub_405},
    {"sceAjmInitialize",bf1_stub_406},
    {"sceAjmBatchJobControlBufferRa",bf1_stub_407},
    {"sceNetEpollWait",bf1_stub_408},
    {"sceNpCommerceHidePsStoreIcon",bf1_stub_409},
    {"sceSaveDataDirNameSearch",bf1_stub_410},
    {"sceMsgDialogTerminate",bf1_stub_411},
    {"sceNpGetState",bf1_stub_412},
    {"sceSysmoduleUnloadModule",bf1_stub_413},
    {"sceKernelStat",bf1_stub_414},
    {"scePthreadAttrSetinheritsched",bf1_stub_415},
    {"sceNpCreateAsyncRequest",bf1_stub_416},
    {"sceKernelGettimeofday",bf1_stub_417},
    {"sceAudioOutOpen",bf1_stub_418},
    {"sceVoiceGetPortAttr",bf1_stub_419},
    {"scePthreadGetspecific",bf1_stub_420},
    {"sceRazorIsLoaded",bf1_stub_421},
    {"sceGnmDrawIndirectMulti",bf1_stub_422},
    {"sceKernelGetModuleInfoFromAddr",bf1_stub_423},
    {"__stack_chk_guard",bf1_stub_424},
    {"sceGnmRequestMipStatsReportAndReset",bf1_stub_425},
    {"sceVideodecReset",bf1_stub_426},
    {"sceAjmBatchStartBuffer",bf1_stub_427},
    {"sceCoredumpUnregisterCoredumpHandler",bf1_stub_428},
    {"setsockopt",bf1_stub_429},
    {"sceSystemGestureGetTouchEvents",bf1_stub_430},
    {"sceSysmoduleIsLoaded",bf1_stub_431},
    {"sceUserServiceGetLoginUserIdList",bf1_stub_432},
    {"sceKernelFsync",bf1_stub_433},
    {"send",bf1_stub_434},
    {"sceSystemServiceParamGetInt",bf1_stub_435},
    {"sceKernelChmod",bf1_stub_436},
    {"sceNpFriendListDialogUpdateStatus",bf1_stub_437},
    {"sceGnmGetProtectionFaultTimeStamp",bf1_stub_438},
    {"sceKernelWaitEqueue",bf1_stub_439},
    {"scePthreadCondDestroy",bf1_stub_440},
    {"JSValueGetType",bf1_stub_441},
    {"sceSysmoduleLoadModule",bf1_stub_442},
    {"sceGnmSetVsShader",bf1_stub_443},
    {"JSPropertyNameArrayGetCount",bf1_stub_444},
    {"sceGnmRequestFlipAndSubmitDone",bf1_stub_445},
    {"scePthreadKeyCreate",bf1_stub_446},
    {"scePadGetControllerInformation",bf1_stub_447},
    {"sceNpAuthPollAsync",bf1_stub_448},
    {"sceNetCtlInit",bf1_stub_449},
    {"sceNetSendto",bf1_stub_450},
    {"sceImeDialogTerm",bf1_stub_451},
    {"pthread_join",bf1_stub_452},
    {"getrusage",bf1_stub_453},
    {"sceNetGetSockInfo",bf1_stub_454},
    {"JSPropertyNameArrayRelease",bf1_stub_455},
    {"_sceFiberInitializeImpl",bf1_stub_456},
    {"sceNpProfileDialogUpdateStatus",bf1_stub_457},
    {"sceSslInit",bf1_stub_458},
    {"sceNetGetsockname",bf1_stub_459},
    {"sceGnmValidateDrawCommandBuffers",bf1_stub_460},
    {"JSStringCreateWithUTF8CString",bf1_stub_461},
    {"scePadInit",bf1_stub_462},
    {"sceKernelCheckedReleaseDirectMemory",bf1_stub_463},
    {"sceVideoOutSetBufferAttribute",bf1_stub_464},
    {"sceNpCmpNpId",bf1_stub_465},
    {"sceGnmFlushGarlic",bf1_stub_466},
    {"sceGnmGetLastWaitedAddress",bf1_stub_467},
    {"getargc",bf1_stub_468},
    {"scePthreadMutexattrSettype",bf1_stub_469},
    {"sceNetCtlCheckCallback",bf1_stub_470},
    {"sceNetHtons",bf1_stub_471},
    {"sceGnmBeginWorkload",bf1_stub_472},
    {"sceNpGetParentalControlInfo",bf1_stub_473},
    {"sceSharePlayInitialize",bf1_stub_474},
    {"sceKernelGetdents",bf1_stub_475},
    {"sceUserServiceInitialize",bf1_stub_476},
    {"sceSystemGestureUpdateTouchRecognizer",bf1_stub_477},
    {"sceSystemGestureClose",bf1_stub_478},
    {"sceGnmDrawIndexMultiInstanced",bf1_stub_479},
    {"sceAudio3dObjectReserve",bf1_stub_480},
    {"sceGnmSubmitCommandBuffersForWorkload",bf1_stub_481},
    {"sceVideodecFlush",bf1_stub_482},
    {"sceGnmIsUserPaEnabled",bf1_stub_483},
    {"sceGnmInsertSetMarker",bf1_stub_484},
    {"JSValueIsObject",bf1_stub_485},
    {"sceKernelDeleteEqueue",bf1_stub_486},
    {"sceGnmSetGsRingSizes",bf1_stub_487},
    {"getpagesize",bf1_stub_488},
    {"sceGnmGetShaderStatus",bf1_stub_489},
    {"sceNpPartyRegisterHandler",bf1_stub_490},
    {"sceKernelFstat",bf1_stub_491},
    {"scePthreadCondSignal",bf1_stub_492},
    {"sceNpWebApiRegisterServicePushEventCallback",bf1_stub_493},
    {"sceNetResolverDestroy",bf1_stub_494},
    {"sceNetListen",bf1_stub_495},
    {"sceKernelGetModuleInfo",bf1_stub_496},
    {"__pthread_cxa_finalize",bf1_stub_497},
    {"_ZNK3sce7Toolkit2NP9Utilities10FutureImpl8hasErrorEv",bf1_stub_498},
    {"sceGameLiveStreamingInitialize",bf1_stub_499},
    {"sceMsgDialogInitialize",bf1_stub_500},
    {"clock_gettime",bf1_stub_501},
    {"JSObjectGetPropertyAtIndex",bf1_stub_502},
    {"recvfrom",bf1_stub_503},
    {"sceDiscMapIsRequestOnHDD",bf1_stub_504},
    {"sceVideodecQueryResourceInfo",bf1_stub_505},
    {"JSObjectCallAsFunction",bf1_stub_506},
    {"sceNpPartyInitialize",bf1_stub_507},
    {"sceGnmGetTheTessellationFactorRingBufferBaseAddress",bf1_stub_508},
    {"_ZNK3sce7Toolkit2NP9Utilities10FutureImpl9hasResultEv",bf1_stub_509},
    {"pthread_mutex_destroy",bf1_stub_510},
    {"sceNpCommerceDialogTerminate",bf1_stub_511},
    {"scePthreadCondattrInit",bf1_stub_512},
    {"pthread_mutexattr_settype",bf1_stub_513},
    {"sceKernelMapNamedFlexibleMemory",bf1_stub_514},
    {"sceGnmUpdatePsShader350",bf1_stub_515},
    {"sceNpUnregisterStateCallback",bf1_stub_516},
    {"sigreturn",bf1_stub_517},
    {"scePthreadRwlockWrlock",bf1_stub_518},
    {"JSValueMakeUndefined",bf1_stub_519},
    {"sceNpLookupDeleteTitleCtx",bf1_stub_520},
    {"gettimeofday",bf1_stub_521},
    {"sceGnmGetShaderProgramBaseAddress",bf1_stub_522},
    {"sceGnmDispatchInitDefaultHardwareState",bf1_stub_523},
    {"sceKernelPwrite",bf1_stub_524},
    {"sceGnmUpdateGsShader",bf1_stub_525},
    {"sceNpPartyCreate",bf1_stub_526},
    {"sceVoiceCreatePort",bf1_stub_527},
    {"sceKernelRmdir",bf1_stub_528},
    {"sceNpWebApiDeleteRequest",bf1_stub_529},
    {"scePthreadAttrInit",bf1_stub_530},
    {"sceSystemGestureResetPrimitiveTouchRecognizer",bf1_stub_531},
    {"JSObjectMakeArray",bf1_stub_532},
    {"sceImeDialogAbort",bf1_stub_533},
    {"sendto",bf1_stub_534},
    {"sceSystemGestureResetTouchRecognizer",bf1_stub_535},
    {"scePthreadSetschedparam",bf1_stub_536},
    {"sceGnmGetGpuBlockStatus",bf1_stub_537},
    {"sceNpPartyTerminate",bf1_stub_538},
    {"sceVoiceConnectIPortToOPort",bf1_stub_539},
    {"sceGnmDrawIndexOffset",bf1_stub_540},
    {"sceNetCtlGetInfo",bf1_stub_541},
    {"sceKernelLseek",bf1_stub_542},
    {"scePthreadJoin",bf1_stub_543},
    {"sceNpWebApiUtilityParseNpId",bf1_stub_544},
    {"sceNpGetNpId",bf1_stub_545},
    {"_sceKernelRtldSetApplicationHeapAPI",bf1_stub_546},
    {"JSObjectGetProperty",bf1_stub_547},
    {"sceKernelGetDirectMemorySize",bf1_stub_548},
    {"sceVideoOutModeSetAny_",bf1_stub_549},
    {"listen",bf1_stub_550},
    {"sceVideodecDecode",bf1_stub_551},
    {"scePadRead",bf1_stub_552},
    {"sceNpTrophyCreateHandle",bf1_stub_553},
    {"sceGnmValidateDispatchCommandBuffers",bf1_stub_554},
    {"sceNpWebApiUnregisterPushEventCallback",bf1_stub_555},
    {"sceVideodecCreateDecoder",bf1_stub_556},
    {"JSValueToObject",bf1_stub_557},
    {"sceGnmDebugHardwareStatus",bf1_stub_558},
    {"sceSystemGestureOpen",bf1_stub_559},
    {"sceNpCommerceDialogGetResult",bf1_stub_560},
    {"sceNpCheckPlus",bf1_stub_561},
    {"sceSystemServiceGetStatus",bf1_stub_562},
    {"JSValueToNumber",bf1_stub_563},
    {"sceGnmValidateOnSubmitEnabled",bf1_stub_564},
    {"sceKernelAllocateDirectMemory",bf1_stub_565},
    {"sceKernelVirtualQuery",bf1_stub_566},
    {"sceVideoOutGetEventData",bf1_stub_567},
    {"scePthreadGetaffinity",bf1_stub_568},
    {"sceNpWebApiCreateRequest",bf1_stub_569},
    {"scePlayGoGetInstallSpeed",bf1_stub_570},
    {"sceAudioOutClose",bf1_stub_571},
    {"sceSaveDataDialogInitialize",bf1_stub_572},
    {"sceNpWebApiCreateServicePushEventFilter",bf1_stub_573},
    {"sceNpGetPlatformType",bf1_stub_574},
    {"scePthreadMutexattrDestroy",bf1_stub_575},
    {"sceGnmDrawOpaqueAuto",bf1_stub_576},
    {"sceScreenShotDisable",bf1_stub_577},
    {"sceGnmGetGpuInfoStatus",bf1_stub_578},
    {"msync",bf1_stub_579},
    {"sceKernelGetdirentries",bf1_stub_580},
    {"_ZN3sce7Toolkit2NP9Utilities6FutureINS1_6NpUserEED1Ev",bf1_stub_581},
    {"sceKernelReleaseFlexibleMemory",bf1_stub_582},
    {"scePthreadMutexUnlock",bf1_stub_583},
    {"JSObjectSetPropertyAtIndex",bf1_stub_584},
    {"scePlayGoInitialize",bf1_stub_585},
    {"pthread_mutex_init",bf1_stub_586},
    {"JSValueIsBoolean",bf1_stub_587},
    {"sceRazorCaptureImmediate",bf1_stub_588},
    {"sceNetCtlGetState",bf1_stub_589},
    {"scePlayGoGetLocus",bf1_stub_590},
    {"sceVoiceResetPort",bf1_stub_591},
    {"sceNpProfileDialogOpen",bf1_stub_592},
    {"sceCommonDialogInitialize",bf1_stub_593},
    {"scePthreadMutexTrylock",bf1_stub_594},
    {"sceNpPollAsync",bf1_stub_595},
    {"sceVideoOutClose",bf1_stub_596},
    {"__tls_get_addr",bf1_stub_597},
    {"sceGnmSetLsShader",bf1_stub_598},
    {"JSObjectMake",bf1_stub_599},
    {"sceVideoOutRegisterBuffers",bf1_stub_600},
    {"sceGnmDispatchIndirectOnMec",bf1_stub_601},
    {"sceNpLookupDeleteRequest",bf1_stub_602},
    {"scePthreadCondattrDestroy",bf1_stub_603},
    {"pthread_attr_init",bf1_stub_604},
    {"sceKernelLoadStartModule",bf1_stub_605},
    {"sceImeDialogGetResult",bf1_stub_606},
    {"scePthreadAttrGet",bf1_stub_607},
    {"sceNpWebApiCreateContext",bf1_stub_608},
    {"sceGnmSubmitAndFlipCommandBuffers",bf1_stub_609},
    {"scePadOpen",bf1_stub_610},
    {"sceAppContentGetAddcontInfoList",bf1_stub_611},
    {"sceNetGetsockopt",bf1_stub_612},
    {"sceNpWebApiCreatePushEventFilter",bf1_stub_613},
    {"scePadSetVibration",bf1_stub_614},
    {"sceUserServiceGetEvent",bf1_stub_615},
    {"sceSaveDataTerminate",bf1_stub_616},
    {"nanosleep",bf1_stub_617},
    {"sceGnmDrawInitDefaultHardwareState350",bf1_stub_618},
    {"sceGnmSubmitDone",bf1_stub_619},
    {"JSObjectSetProperty",bf1_stub_620},
    {"sceNpWebApiDeletePushEventFilter",bf1_stub_621},
    {"sceKernelDebugRaiseExceptionOnReleaseMode",bf1_stub_622},
    {"sceNetSocketAbort",bf1_stub_623},
    {"sceNpFriendListDialogOpen",bf1_stub_624},
    {"sceGnmSubmitCommandBuffers",bf1_stub_625},
};

uintptr_t runtime_bf1_stubs_resolve(const char *name) {
    /* JSStringRelease gets NULL from JSValueToStringCopy failures. shadPS4's
     * stub is a no-op, so keep that one NULL-safe even with real JSC active. */
    if (name && !strcmp(name,"Nm-U+BAjCkY#libJavaScriptCore")) return (uintptr_t)bf1_zero_stub;
    /* Let the real linked JavaScriptCore exports win when the PRX is loaded. */
    if (getenv("SPARTAN_NO_JSC_STUBS") && name && strstr(name,"JavaScriptCore")) return 0;
    return RUNTIME_LOOKUP(exports, name);
}
