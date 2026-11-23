/* Offline-safe fallback stubs for BF1 imports not otherwise implemented.
 * Each logs its name when called so startup failures can be attributed. */
#include "runtime.h"
#include <stdio.h>

static ABI int64_t bf1_stub_0(void) { printf("BF1 stub: %s\n", "sceGnmSetEmbeddedVsShader"); return 0; }
static ABI int64_t bf1_stub_1(void) { printf("BF1 stub: %s\n", "scePthreadSetspecific"); return 0; }
static ABI int64_t bf1_stub_2(void) { printf("BF1 stub: %s\n", "scePthreadRwlockUnlock"); return 0; }
static ABI int64_t bf1_stub_3(void) { printf("BF1 stub: %s\n", "sceKernelPread"); return 0; }
static ABI int64_t bf1_stub_4(void) { printf("BF1 stub: %s\n", "sceGnmSetupMipStatsReport"); return 0; }
static ABI int64_t bf1_stub_5(void) { printf("BF1 stub: %s\n", "sceKernelReadTsc"); return 0; }
static ABI int64_t bf1_stub_6(void) { printf("BF1 stub: %s\n", "sceNpPartyShowInvitationList"); return 0; }
static ABI int64_t bf1_stub_7(void) { printf("BF1 stub: %s\n", "scePlayGoGetProgress"); return 0; }
static ABI int64_t bf1_stub_8(void) { printf("BF1 stub: %s\n", "scePthreadAttrSetdetachstate"); return 0; }
static ABI int64_t bf1_stub_9(void) { printf("BF1 stub: %s\n", "sceKernelInternalMemoryGetModuleSegmentInfo"); return 0; }
static ABI int64_t bf1_stub_10(void) { printf("BF1 stub: %s\n", "sceKernelSleep"); return 0; }
static ABI int64_t bf1_stub_11(void) { printf("BF1 stub: %s\n", "scePthreadAttrGetstacksize"); return 0; }
static ABI int64_t bf1_stub_12(void) { printf("BF1 stub: %s\n", "sceKernelConvertUtcToLocaltime"); return 0; }
static ABI int64_t bf1_stub_13(void) { printf("BF1 stub: %s\n", "sceAjmBatchWait"); return 0; }
static ABI int64_t bf1_stub_14(void) { printf("BF1 stub: %s\n", "scePthreadAttrGetstack"); return 0; }
static ABI int64_t bf1_stub_15(void) { printf("BF1 stub: %s\n", "sceGnmDispatchDirect"); return 0; }
static ABI int64_t bf1_stub_16(void) { printf("BF1 stub: %s\n", "sceKernelUtimes"); return 0; }
static ABI int64_t bf1_stub_17(void) { printf("BF1 stub: %s\n", "sceSslTerm"); return 0; }
static ABI int64_t bf1_stub_18(void) { printf("BF1 stub: %s\n", "sceKernelConvertLocaltimeToUtc"); return 0; }
static ABI int64_t bf1_stub_19(void) { printf("BF1 stub: %s\n", "sceNpProfileDialogTerminate"); return 0; }
static ABI int64_t bf1_stub_20(void) { printf("BF1 stub: %s\n", "pthread_cond_init"); return 0; }
static ABI int64_t bf1_stub_21(void) { printf("BF1 stub: %s\n", "sceNpCommerceDialogInitialize"); return 0; }
static ABI int64_t bf1_stub_22(void) { printf("BF1 stub: %s\n", "sceNetCtlGetResult"); return 0; }
static ABI int64_t bf1_stub_23(void) { printf("BF1 stub: %s\n", "JSValueMakeString"); return 0; }
static ABI int64_t bf1_stub_24(void) { printf("BF1 stub: %s\n", "sceSaveDataMount2"); return 0; }
static ABI int64_t bf1_stub_25(void) { printf("BF1 stub: %s\n", "sceInvitationDialogOpen"); return 0; }
static ABI int64_t bf1_stub_26(void) { printf("BF1 stub: %s\n", "sceKernelMkdir"); return 0; }
static ABI int64_t bf1_stub_27(void) { printf("BF1 stub: %s\n", "sceKernelPollSema"); return 0; }
static ABI int64_t bf1_stub_28(void) { printf("BF1 stub: %s\n", "scePthreadOnce"); return 0; }
static ABI int64_t bf1_stub_29(void) { printf("BF1 stub: %s\n", "sceKernelCreateSema"); return 0; }
static ABI int64_t bf1_stub_30(void) { printf("BF1 stub: %s\n", "sceRtcGetCurrentTick"); return 0; }
static ABI int64_t bf1_stub_31(void) { printf("BF1 stub: %s\n", "scePthreadMutexattrSetprotocol"); return 0; }
static ABI int64_t bf1_stub_32(void) { printf("BF1 stub: %s\n", "sceKernelOpen"); return 0; }
static ABI int64_t bf1_stub_33(void) { printf("BF1 stub: %s\n", "sceAudio3dObjectUnreserve"); return 0; }
static ABI int64_t bf1_stub_34(void) { printf("BF1 stub: %s\n", "sceSystemGestureAppendTouchRecognizer"); return 0; }
static ABI int64_t bf1_stub_35(void) { printf("BF1 stub: %s\n", "sceKernelGetTscFrequency"); return 0; }
static ABI int64_t bf1_stub_36(void) { printf("BF1 stub: %s\n", "sceKernelUsleep"); return 0; }
static ABI int64_t bf1_stub_37(void) { printf("BF1 stub: %s\n", "sceSystemServiceGetDisplaySafeAreaInfo"); return 0; }
static ABI int64_t bf1_stub_38(void) { printf("BF1 stub: %s\n", "sceGnmInsertWaitFlipDone"); return 0; }
static ABI int64_t bf1_stub_39(void) { printf("BF1 stub: %s\n", "scePthreadGetprio"); return 0; }
static ABI int64_t bf1_stub_40(void) { printf("BF1 stub: %s\n", "sceUserServiceGetUserName"); return 0; }
static ABI int64_t bf1_stub_41(void) { printf("BF1 stub: %s\n", "sceGnmLogicalCuIndexToPhysicalCuIndex"); return 0; }
static ABI int64_t bf1_stub_42(void) { printf("BF1 stub: %s\n", "pthread_cond_timedwait"); return 0; }
static ABI int64_t bf1_stub_43(void) { printf("BF1 stub: %s\n", "sceNpTrophyUnlockTrophy"); return 0; }
static ABI int64_t bf1_stub_44(void) { printf("BF1 stub: %s\n", "sceGnmMapComputeQueue"); return 0; }
static ABI int64_t bf1_stub_45(void) { printf("BF1 stub: %s\n", "sceNpFriendListDialogInitialize"); return 0; }
static ABI int64_t bf1_stub_46(void) { printf("BF1 stub: %s\n", "pthread_cond_signal"); return 0; }
static ABI int64_t bf1_stub_47(void) { printf("BF1 stub: %s\n", "scePthreadMutexDestroy"); return 0; }
static ABI int64_t bf1_stub_48(void) { printf("BF1 stub: %s\n", "pthread_attr_setstacksize"); return 0; }
static ABI int64_t bf1_stub_49(void) { printf("BF1 stub: %s\n", "sceKernelBatchMap"); return 0; }
static ABI int64_t bf1_stub_50(void) { printf("BF1 stub: %s\n", "scePthreadCondInit"); return 0; }
static ABI int64_t bf1_stub_51(void) { printf("BF1 stub: %s\n", "pthread_mutex_unlock"); return 0; }
static ABI int64_t bf1_stub_52(void) { printf("BF1 stub: %s\n", "sceNpWebApiUnregisterServicePushEventCallback"); return 0; }
static ABI int64_t bf1_stub_53(void) { printf("BF1 stub: %s\n", "sceNetSetsockopt"); return 0; }
static ABI int64_t bf1_stub_54(void) { printf("BF1 stub: %s\n", "sceNpCheckNpAvailability"); return 0; }
static ABI int64_t bf1_stub_55(void) { printf("BF1 stub: %s\n", "sceScreenShotEnable"); return 0; }
static ABI int64_t bf1_stub_56(void) { printf("BF1 stub: %s\n", "sceNetRecvfrom"); return 0; }
static ABI int64_t bf1_stub_57(void) { printf("BF1 stub: %s\n", "scePlayGoGetLanguageMask"); return 0; }
static ABI int64_t bf1_stub_58(void) { printf("BF1 stub: %s\n", "scePthreadEqual"); return 0; }
static ABI int64_t bf1_stub_59(void) { printf("BF1 stub: %s\n", "sceSystemGestureFinalizePrimitiveTouchRecognizer"); return 0; }
static ABI int64_t bf1_stub_60(void) { printf("BF1 stub: %s\n", "sceNpCheckCallback"); return 0; }
static ABI int64_t bf1_stub_61(void) { printf("BF1 stub: %s\n", "accept"); return 0; }
static ABI int64_t bf1_stub_62(void) { printf("BF1 stub: %s\n", "sceNpPartyCheckCallback"); return 0; }
static ABI int64_t bf1_stub_63(void) { printf("BF1 stub: %s\n", "sceKernelMlock"); return 0; }
static ABI int64_t bf1_stub_64(void) { printf("BF1 stub: %s\n", "scePthreadExit"); return 0; }
static ABI int64_t bf1_stub_65(void) { printf("BF1 stub: %s\n", "sceSystemGestureInitializePrimitiveTouchRecognizer"); return 0; }
static ABI int64_t bf1_stub_66(void) { printf("BF1 stub: %s\n", "scePthreadAttrSetaffinity"); return 0; }
static ABI int64_t bf1_stub_67(void) { printf("BF1 stub: %s\n", "sceAppContentAddcontUnmount"); return 0; }
static ABI int64_t bf1_stub_68(void) { printf("BF1 stub: %s\n", "scePthreadAttrSetschedpolicy"); return 0; }
static ABI int64_t bf1_stub_69(void) { printf("BF1 stub: %s\n", "sceNetSocketClose"); return 0; }
static ABI int64_t bf1_stub_70(void) { printf("BF1 stub: %s\n", "scePlayGoSetInstallSpeed"); return 0; }
static ABI int64_t bf1_stub_71(void) { printf("BF1 stub: %s\n", "sceKernelCancelSema"); return 0; }
static ABI int64_t bf1_stub_72(void) { printf("BF1 stub: %s\n", "sceKernelGetProcessTime"); return 0; }
static ABI int64_t bf1_stub_73(void) { printf("BF1 stub: %s\n", "sceKernelSignalSema"); return 0; }
static ABI int64_t bf1_stub_74(void) { printf("BF1 stub: %s\n", "scePthreadDetach"); return 0; }
static ABI int64_t bf1_stub_75(void) { printf("BF1 stub: %s\n", "sceSaveDataDialogOpen"); return 0; }
static ABI int64_t bf1_stub_76(void) { printf("BF1 stub: %s\n", "sceAudio3dObjectSetAttributes"); return 0; }
static ABI int64_t bf1_stub_77(void) { printf("BF1 stub: %s\n", "sceGnmDrawIndirect"); return 0; }
static ABI int64_t bf1_stub_78(void) { printf("BF1 stub: %s\n", "sceKernelWrite"); return 0; }
static ABI int64_t bf1_stub_79(void) { printf("BF1 stub: %s\n", "sceKernelRename"); return 0; }
static ABI int64_t bf1_stub_80(void) { printf("BF1 stub: %s\n", "sceVoiceStart"); return 0; }
static ABI int64_t bf1_stub_81(void) { printf("BF1 stub: %s\n", "sceNpWebApiDeleteHandle"); return 0; }
static ABI int64_t bf1_stub_82(void) { printf("BF1 stub: %s\n", "sceAudioInOpen"); return 0; }
static ABI int64_t bf1_stub_83(void) { printf("BF1 stub: %s\n", "sceGnmValidateGetDiagnostics"); return 0; }
static ABI int64_t bf1_stub_84(void) { printf("BF1 stub: %s\n", "sceGnmDrawIndexIndirectMulti"); return 0; }
static ABI int64_t bf1_stub_85(void) { printf("BF1 stub: %s\n", "sceGnmSetPsShader350"); return 0; }
static ABI int64_t bf1_stub_86(void) { printf("BF1 stub: %s\n", "sceGnmCreateWorkloadStream"); return 0; }
static ABI int64_t bf1_stub_87(void) { printf("BF1 stub: %s\n", "scePthreadAttrDestroy"); return 0; }
static ABI int64_t bf1_stub_88(void) { printf("BF1 stub: %s\n", "sceSystemServiceReceiveEvent"); return 0; }
static ABI int64_t bf1_stub_89(void) { printf("BF1 stub: %s\n", "sceNetGetMacAddress"); return 0; }
static ABI int64_t bf1_stub_90(void) { printf("BF1 stub: %s\n", "scePthreadRwlockInit"); return 0; }
static ABI int64_t bf1_stub_91(void) { printf("BF1 stub: %s\n", "scePthreadCreate"); return 0; }
static ABI int64_t bf1_stub_92(void) { printf("BF1 stub: %s\n", "sched_yield"); return 0; }
static ABI int64_t bf1_stub_93(void) { printf("BF1 stub: %s\n", "sceGnmRequestFlipAndSubmitDoneForWorkload"); return 0; }
static ABI int64_t bf1_stub_94(void) { printf("BF1 stub: %s\n", "_exit"); return 0; }
static ABI int64_t bf1_stub_95(void) { printf("BF1 stub: %s\n", "sceMsgDialogUpdateStatus"); return 0; }
static ABI int64_t bf1_stub_96(void) { printf("BF1 stub: %s\n", "sceVideoOutGetResolutionStatus"); return 0; }
static ABI int64_t bf1_stub_97(void) { printf("BF1 stub: %s\n", "scePadClose"); return 0; }
static ABI int64_t bf1_stub_98(void) { printf("BF1 stub: %s\n", "_sigprocmask"); return 0; }
static ABI int64_t bf1_stub_99(void) { printf("BF1 stub: %s\n", "sceNpWebApiCreateHandle"); return 0; }
static ABI int64_t bf1_stub_100(void) { printf("BF1 stub: %s\n", "pthread_mutex_lock"); return 0; }
static ABI int64_t bf1_stub_101(void) { printf("BF1 stub: %s\n", "pthread_equal"); return 0; }
static ABI int64_t bf1_stub_102(void) { printf("BF1 stub: %s\n", "sceGnmInsertPopMarker"); return 0; }
static ABI int64_t bf1_stub_103(void) { printf("BF1 stub: %s\n", "sceKernelClearEventFlag"); return 0; }
static ABI int64_t bf1_stub_104(void) { printf("BF1 stub: %s\n", "scePthreadAttrGetaffinity"); return 0; }
static ABI int64_t bf1_stub_105(void) { printf("BF1 stub: %s\n", "sceNpLookupCreateTitleCtx"); return 0; }
static ABI int64_t bf1_stub_106(void) { printf("BF1 stub: %s\n", "sceSaveDataSetParam"); return 0; }
static ABI int64_t bf1_stub_107(void) { printf("BF1 stub: %s\n", "sceNetInetPton"); return 0; }
static ABI int64_t bf1_stub_108(void) { printf("BF1 stub: %s\n", "JSGlobalContextCreate"); return 0; }
static ABI int64_t bf1_stub_109(void) { printf("BF1 stub: %s\n", "sceInvitationDialogGetResult"); return 0; }
static ABI int64_t bf1_stub_110(void) { printf("BF1 stub: %s\n", "sceGnmDrawInitToDefaultContextState"); return 0; }
static ABI int64_t bf1_stub_111(void) { printf("BF1 stub: %s\n", "sceKernelDeleteEventFlag"); return 0; }
static ABI int64_t bf1_stub_112(void) { printf("BF1 stub: %s\n", "fcntl"); return 0; }
static ABI int64_t bf1_stub_113(void) { printf("BF1 stub: %s\n", "sceCoredumpRegisterCoredumpHandler"); return 0; }
static ABI int64_t bf1_stub_114(void) { printf("BF1 stub: %s\n", "sceInvitationDialogUpdateStatus"); return 0; }
static ABI int64_t bf1_stub_115(void) { printf("BF1 stub: %s\n", "sceKernelGetProcParam"); return 0; }
static ABI int64_t bf1_stub_116(void) { printf("BF1 stub: %s\n", "sceAppContentAppParamGetInt"); return 0; }
static ABI int64_t bf1_stub_117(void) { printf("BF1 stub: %s\n", "__error"); return 0; }
static ABI int64_t bf1_stub_118(void) { printf("BF1 stub: %s\n", "sceVoiceInit"); return 0; }
static ABI int64_t bf1_stub_119(void) { printf("BF1 stub: %s\n", "scePthreadMutexLock"); return 0; }
static ABI int64_t bf1_stub_120(void) { printf("BF1 stub: %s\n", "JSValueToStringCopy"); return 0; }
static ABI int64_t bf1_stub_121(void) { printf("BF1 stub: %s\n", "sceNetInetNtop"); return 0; }
static ABI int64_t bf1_stub_122(void) { printf("BF1 stub: %s\n", "sceNetRecv"); return 0; }
static ABI int64_t bf1_stub_123(void) { printf("BF1 stub: %s\n", "sceGameLiveStreamingTerminate"); return 0; }
static ABI int64_t bf1_stub_124(void) { printf("BF1 stub: %s\n", "sceGnmMapComputeQueueWithPriority"); return 0; }
static ABI int64_t bf1_stub_125(void) { printf("BF1 stub: %s\n", "sceNpSetContentRestriction"); return 0; }
static ABI int64_t bf1_stub_126(void) { printf("BF1 stub: %s\n", "sceHttpInit"); return 0; }
static ABI int64_t bf1_stub_127(void) { printf("BF1 stub: %s\n", "sceKernelUnlink"); return 0; }
static ABI int64_t bf1_stub_128(void) { printf("BF1 stub: %s\n", "JSPropertyNameArrayGetNameAtIndex"); return 0; }
static ABI int64_t bf1_stub_129(void) { printf("BF1 stub: %s\n", "sceVoiceStop"); return 0; }
static ABI int64_t bf1_stub_130(void) { printf("BF1 stub: %s\n", "sceGnmUnmapComputeQueue"); return 0; }
static ABI int64_t bf1_stub_131(void) { printf("BF1 stub: %s\n", "sceAjmInstanceCreate"); return 0; }
static ABI int64_t bf1_stub_132(void) { printf("BF1 stub: %s\n", "sceNetResolverAbort"); return 0; }
static ABI int64_t bf1_stub_133(void) { printf("BF1 stub: %s\n", "sceFiberReturnToThread"); return 0; }
static ABI int64_t bf1_stub_134(void) { printf("BF1 stub: %s\n", "pthread_yield"); return 0; }
static ABI int64_t bf1_stub_135(void) { printf("BF1 stub: %s\n", "sceInvitationDialogTerminate"); return 0; }
static ABI int64_t bf1_stub_136(void) { printf("BF1 stub: %s\n", "scePthreadRwlockDestroy"); return 0; }
static ABI int64_t bf1_stub_137(void) { printf("BF1 stub: %s\n", "sceKernelGetDirectMemoryType"); return 0; }
static ABI int64_t bf1_stub_138(void) { printf("BF1 stub: %s\n", "sceSaveDataUmount"); return 0; }
static ABI int64_t bf1_stub_139(void) { printf("BF1 stub: %s\n", "mmap"); return 0; }
static ABI int64_t bf1_stub_140(void) { printf("BF1 stub: %s\n", "sceCommonDialogIsUsed"); return 0; }
static ABI int64_t bf1_stub_141(void) { printf("BF1 stub: %s\n", "JSValueIsUndefined"); return 0; }
static ABI int64_t bf1_stub_142(void) { printf("BF1 stub: %s\n", "scePthreadCondTimedwait"); return 0; }
static ABI int64_t bf1_stub_143(void) { printf("BF1 stub: %s\n", "sceKernelCreateEventFlag"); return 0; }
static ABI int64_t bf1_stub_144(void) { printf("BF1 stub: %s\n", "scePthreadAttrSetstack"); return 0; }
static ABI int64_t bf1_stub_145(void) { printf("BF1 stub: %s\n", "sceKernelAvailableDirectMemorySize"); return 0; }
static ABI int64_t bf1_stub_146(void) { printf("BF1 stub: %s\n", "sceNetResolverCreate"); return 0; }
static ABI int64_t bf1_stub_147(void) { printf("BF1 stub: %s\n", "sceVideoOutSetFlipRate"); return 0; }
static ABI int64_t bf1_stub_148(void) { printf("BF1 stub: %s\n", "sceNpWebApiReadData"); return 0; }
static ABI int64_t bf1_stub_149(void) { printf("BF1 stub: %s\n", "sceMsgDialogGetStatus"); return 0; }
static ABI int64_t bf1_stub_150(void) { printf("BF1 stub: %s\n", "sceUserServiceGetInitialUser"); return 0; }
static ABI int64_t bf1_stub_151(void) { printf("BF1 stub: %s\n", "sceKernelRead"); return 0; }
static ABI int64_t bf1_stub_152(void) { printf("BF1 stub: %s\n", "sceGameLiveStreamingGetCurrentStatus"); return 0; }
static ABI int64_t bf1_stub_153(void) { printf("BF1 stub: %s\n", "sceVoiceGetPortInfo"); return 0; }
static ABI int64_t bf1_stub_154(void) { printf("BF1 stub: %s\n", "sceKernelCreateEqueue"); return 0; }
static ABI int64_t bf1_stub_155(void) { printf("BF1 stub: %s\n", "JSStringGetMaximumUTF8CStringSize"); return 0; }
static ABI int64_t bf1_stub_156(void) { printf("BF1 stub: %s\n", "sceNpCommerceShowPsStoreIcon"); return 0; }
static ABI int64_t bf1_stub_157(void) { printf("BF1 stub: %s\n", "sceNpPartyGetId"); return 0; }
static ABI int64_t bf1_stub_158(void) { printf("BF1 stub: %s\n", "_read"); return 0; }
static ABI int64_t bf1_stub_159(void) { printf("BF1 stub: %s\n", "sceCoredumpWriteUserData"); return 0; }
static ABI int64_t bf1_stub_160(void) { printf("BF1 stub: %s\n", "sceNpCommerceDialogOpen"); return 0; }
static ABI int64_t bf1_stub_161(void) { printf("BF1 stub: %s\n", "scePthreadAttrSetschedparam"); return 0; }
static ABI int64_t bf1_stub_162(void) { printf("BF1 stub: %s\n", "pthread_attr_setdetachstate"); return 0; }
static ABI int64_t bf1_stub_163(void) { printf("BF1 stub: %s\n", "sceNpTrophyDestroyContext"); return 0; }
static ABI int64_t bf1_stub_164(void) { printf("BF1 stub: %s\n", "sceNpFriendListDialogTerminate"); return 0; }
static ABI int64_t bf1_stub_165(void) { printf("BF1 stub: %s\n", "sceGnmDrawIndexIndirect"); return 0; }
static ABI int64_t bf1_stub_166(void) { printf("BF1 stub: %s\n", "sceSystemGestureRemoveTouchRecognizer"); return 0; }
static ABI int64_t bf1_stub_167(void) { printf("BF1 stub: %s\n", "sceSaveDataDialogGetStatus"); return 0; }
static ABI int64_t bf1_stub_168(void) { printf("BF1 stub: %s\n", "pthread_mutexattr_setpshared"); return 0; }
static ABI int64_t bf1_stub_169(void) { printf("BF1 stub: %s\n", "sceNpSetNpTitleId"); return 0; }
static ABI int64_t bf1_stub_170(void) { printf("BF1 stub: %s\n", "sceAjmBatchJobRunBufferRa"); return 0; }
static ABI int64_t bf1_stub_171(void) { printf("BF1 stub: %s\n", "pthread_self"); return 0; }
static ABI int64_t bf1_stub_172(void) { printf("BF1 stub: %s\n", "recv"); return 0; }
static ABI int64_t bf1_stub_173(void) { printf("BF1 stub: %s\n", "sceNpPartyGetMemberInfo"); return 0; }
static ABI int64_t bf1_stub_174(void) { printf("BF1 stub: %s\n", "sceNpGetUserIdByOnlineId"); return 0; }
static ABI int64_t bf1_stub_175(void) { printf("BF1 stub: %s\n", "scePthreadMutexattrInit"); return 0; }
static ABI int64_t bf1_stub_176(void) { printf("BF1 stub: %s\n", "getargv"); return 0; }
static ABI int64_t bf1_stub_177(void) { printf("BF1 stub: %s\n", "sceGnmSetEsShader"); return 0; }
static ABI int64_t bf1_stub_178(void) { printf("BF1 stub: %s\n", "sceSystemGestureCreateTouchRecognizer"); return 0; }
static ABI int64_t bf1_stub_179(void) { printf("BF1 stub: %s\n", "sceGnmEndWorkload"); return 0; }
static ABI int64_t bf1_stub_180(void) { printf("BF1 stub: %s\n", "sceVideoRecordingSetInfo"); return 0; }
static ABI int64_t bf1_stub_181(void) { printf("BF1 stub: %s\n", "__elf_phdr_match_addr"); return 0; }
static ABI int64_t bf1_stub_182(void) { printf("BF1 stub: %s\n", "_write"); return 0; }
static ABI int64_t bf1_stub_183(void) { printf("BF1 stub: %s\n", "sceNpWebApiInitialize"); return 0; }
static ABI int64_t bf1_stub_184(void) { printf("BF1 stub: %s\n", "scePthreadRename"); return 0; }
static ABI int64_t bf1_stub_185(void) { printf("BF1 stub: %s\n", "sceGnmDrawIndexAuto"); return 0; }
static ABI int64_t bf1_stub_186(void) { printf("BF1 stub: %s\n", "sceNpTrophyDestroyHandle"); return 0; }
static ABI int64_t bf1_stub_187(void) { printf("BF1 stub: %s\n", "sceGnmUpdateHsShader"); return 0; }
static ABI int64_t bf1_stub_188(void) { printf("BF1 stub: %s\n", "sceGnmSubmitAndFlipCommandBuffersForWorkload"); return 0; }
static ABI int64_t bf1_stub_189(void) { printf("BF1 stub: %s\n", "sceNpNotifyPlusFeature"); return 0; }
static ABI int64_t bf1_stub_190(void) { printf("BF1 stub: %s\n", "sceSystemGestureUpdatePrimitiveTouchRecognizer"); return 0; }
static ABI int64_t bf1_stub_191(void) { printf("BF1 stub: %s\n", "sceNpGetAccountCountry"); return 0; }
static ABI int64_t bf1_stub_192(void) { printf("BF1 stub: %s\n", "sceNpCreateRequest"); return 0; }
static ABI int64_t bf1_stub_193(void) { printf("BF1 stub: %s\n", "sceGnmGetEqTimeStamp"); return 0; }
static ABI int64_t bf1_stub_194(void) { printf("BF1 stub: %s\n", "sceNpAuthDeleteRequest"); return 0; }
static ABI int64_t bf1_stub_195(void) { printf("BF1 stub: %s\n", "pthread_mutexattr_destroy"); return 0; }
static ABI int64_t bf1_stub_196(void) { printf("BF1 stub: %s\n", "sceGnmDisableMipStatsReport"); return 0; }
static ABI int64_t bf1_stub_197(void) { printf("BF1 stub: %s\n", "sceNetErrnoLoc"); return 0; }
static ABI int64_t bf1_stub_198(void) { printf("BF1 stub: %s\n", "sceVideoOutAddFlipEvent"); return 0; }
static ABI int64_t bf1_stub_199(void) { printf("BF1 stub: %s\n", "sceGnmDrawIndex"); return 0; }
static ABI int64_t bf1_stub_200(void) { printf("BF1 stub: %s\n", "sceGnmValidateGetVersion"); return 0; }
static ABI int64_t bf1_stub_201(void) { printf("BF1 stub: %s\n", "sceImeDialogGetStatus"); return 0; }
static ABI int64_t bf1_stub_202(void) { printf("BF1 stub: %s\n", "sceKernelSetEventFlag"); return 0; }
static ABI int64_t bf1_stub_203(void) { printf("BF1 stub: %s\n", "sceKernelMapFlexibleMemory"); return 0; }
static ABI int64_t bf1_stub_204(void) { printf("BF1 stub: %s\n", "scePthreadMutexTimedlock"); return 0; }
static ABI int64_t bf1_stub_205(void) { printf("BF1 stub: %s\n", "sceHttpTerm"); return 0; }
static ABI int64_t bf1_stub_206(void) { printf("BF1 stub: %s\n", "JSValueIsString"); return 0; }
static ABI int64_t bf1_stub_207(void) { printf("BF1 stub: %s\n", "sceNetEpollDestroy"); return 0; }
static ABI int64_t bf1_stub_208(void) { printf("BF1 stub: %s\n", "sceKernelGetModuleList"); return 0; }
static ABI int64_t bf1_stub_209(void) { printf("BF1 stub: %s\n", "sceNetResolverGetError"); return 0; }
static ABI int64_t bf1_stub_210(void) { printf("BF1 stub: %s\n", "sceNpPartyLeave"); return 0; }
static ABI int64_t bf1_stub_211(void) { printf("BF1 stub: %s\n", "sceNpLookupCreateAsyncRequest"); return 0; }
static ABI int64_t bf1_stub_212(void) { printf("BF1 stub: %s\n", "scePthreadCondBroadcast"); return 0; }
static ABI int64_t bf1_stub_213(void) { printf("BF1 stub: %s\n", "sceKernelWaitEventFlag"); return 0; }
static ABI int64_t bf1_stub_214(void) { printf("BF1 stub: %s\n", "sceFiberFinalize"); return 0; }
static ABI int64_t bf1_stub_215(void) { printf("BF1 stub: %s\n", "sceAudioOutInit"); return 0; }
static ABI int64_t bf1_stub_216(void) { printf("BF1 stub: %s\n", "sceAudioInClose"); return 0; }
static ABI int64_t bf1_stub_217(void) { printf("BF1 stub: %s\n", "pthread_create_name_np"); return 0; }
static ABI int64_t bf1_stub_218(void) { printf("BF1 stub: %s\n", "sceNpWebApiAbortRequest"); return 0; }
static ABI int64_t bf1_stub_219(void) { printf("BF1 stub: %s\n", "pthread_mutex_trylock"); return 0; }
static ABI int64_t bf1_stub_220(void) { printf("BF1 stub: %s\n", "sceNetPoolDestroy"); return 0; }
static ABI int64_t bf1_stub_221(void) { printf("BF1 stub: %s\n", "sceSaveDataDialogUpdateStatus"); return 0; }
static ABI int64_t bf1_stub_222(void) { printf("BF1 stub: %s\n", "sceNpGetAccountLanguage"); return 0; }
static ABI int64_t bf1_stub_223(void) { printf("BF1 stub: %s\n", "sceNpWebApiSendRequest2"); return 0; }
static ABI int64_t bf1_stub_224(void) { printf("BF1 stub: %s\n", "sceGnmGetNumTcaUnits"); return 0; }
static ABI int64_t bf1_stub_225(void) { printf("BF1 stub: %s\n", "bind"); return 0; }
static ABI int64_t bf1_stub_226(void) { printf("BF1 stub: %s\n", "sceGnmSetCsShaderWithModifier"); return 0; }
static ABI int64_t bf1_stub_227(void) { printf("BF1 stub: %s\n", "sceNpAuthGetAuthorizationCode"); return 0; }
static ABI int64_t bf1_stub_228(void) { printf("BF1 stub: %s\n", "sceKernelMapDirectMemory"); return 0; }
static ABI int64_t bf1_stub_229(void) { printf("BF1 stub: %s\n", "sceNpCommerceDialogUpdateStatus"); return 0; }
static ABI int64_t bf1_stub_230(void) { printf("BF1 stub: %s\n", "JSObjectCopyPropertyNames"); return 0; }
static ABI int64_t bf1_stub_231(void) { printf("BF1 stub: %s\n", "sceNpProfileDialogInitialize"); return 0; }
static ABI int64_t bf1_stub_232(void) { printf("BF1 stub: %s\n", "sceAudioInInput"); return 0; }
static ABI int64_t bf1_stub_233(void) { printf("BF1 stub: %s\n", "scePlayGoOpen"); return 0; }
static ABI int64_t bf1_stub_234(void) { printf("BF1 stub: %s\n", "sceGnmValidateResetState"); return 0; }
static ABI int64_t bf1_stub_235(void) { printf("BF1 stub: %s\n", "sceKernelReleaseDirectMemory"); return 0; }
static ABI int64_t bf1_stub_236(void) { printf("BF1 stub: %s\n", "JSSynchronousGarbageCollectForDebugging"); return 0; }
static ABI int64_t bf1_stub_237(void) { printf("BF1 stub: %s\n", "sceAjmFinalize"); return 0; }
static ABI int64_t bf1_stub_238(void) { printf("BF1 stub: %s\n", "scePlayGoTerminate"); return 0; }
static ABI int64_t bf1_stub_239(void) { printf("BF1 stub: %s\n", "sceVideoOutSetWindowModeMargins"); return 0; }
static ABI int64_t bf1_stub_240(void) { printf("BF1 stub: %s\n", "sceGnmResetVgtControl"); return 0; }
static ABI int64_t bf1_stub_241(void) { printf("BF1 stub: %s\n", "sceNpAuthCreateAsyncRequest"); return 0; }
static ABI int64_t bf1_stub_242(void) { printf("BF1 stub: %s\n", "sceVideoOutConfigureOutputMode_"); return 0; }
static ABI int64_t bf1_stub_243(void) { printf("BF1 stub: %s\n", "rename"); return 0; }
static ABI int64_t bf1_stub_244(void) { printf("BF1 stub: %s\n", "sceImeDialogInit"); return 0; }
static ABI int64_t bf1_stub_245(void) { printf("BF1 stub: %s\n", "sceLibcHeapGetTraceInfo"); return 0; }
static ABI int64_t bf1_stub_246(void) { printf("BF1 stub: %s\n", "sceKernelMapNamedDirectMemory"); return 0; }
static ABI int64_t bf1_stub_247(void) { printf("BF1 stub: %s\n", "sceNetResolverStartNtoa"); return 0; }
static ABI int64_t bf1_stub_248(void) { printf("BF1 stub: %s\n", "sceNetInit"); return 0; }
static ABI int64_t bf1_stub_249(void) { printf("BF1 stub: %s\n", "JSStringRelease"); return 0; }
static ABI int64_t bf1_stub_250(void) { printf("BF1 stub: %s\n", "scePlayGoGetToDoList"); return 0; }
static ABI int64_t bf1_stub_251(void) { printf("BF1 stub: %s\n", "JSStringGetUTF8CString"); return 0; }
static ABI int64_t bf1_stub_252(void) { printf("BF1 stub: %s\n", "scePthreadSetcancelstate"); return 0; }
static ABI int64_t bf1_stub_253(void) { printf("BF1 stub: %s\n", "sceKernelDebugRaiseException"); return 0; }
static ABI int64_t bf1_stub_254(void) { printf("BF1 stub: %s\n", "sceNetConnect"); return 0; }
static ABI int64_t bf1_stub_255(void) { printf("BF1 stub: %s\n", "sceVoiceEnd"); return 0; }
static ABI int64_t bf1_stub_256(void) { printf("BF1 stub: %s\n", "pthread_cond_wait"); return 0; }
static ABI int64_t bf1_stub_257(void) { printf("BF1 stub: %s\n", "__stack_chk_fail"); return 0; }
static ABI int64_t bf1_stub_258(void) { printf("BF1 stub: %s\n", "scePthreadRwlockRdlock"); return 0; }
static ABI int64_t bf1_stub_259(void) { printf("BF1 stub: %s\n", "pthread_create"); return 0; }
static ABI int64_t bf1_stub_260(void) { printf("BF1 stub: %s\n", "sceAudio3dPortClose"); return 0; }
static ABI int64_t bf1_stub_261(void) { printf("BF1 stub: %s\n", "sceNpAbortRequest"); return 0; }
static ABI int64_t bf1_stub_262(void) { printf("BF1 stub: %s\n", "scePthreadGetschedparam"); return 0; }
static ABI int64_t bf1_stub_263(void) { printf("BF1 stub: %s\n", "sceRandomGetRandomNumber"); return 0; }
static ABI int64_t bf1_stub_264(void) { printf("BF1 stub: %s\n", "sceNetAccept"); return 0; }
static ABI int64_t bf1_stub_265(void) { printf("BF1 stub: %s\n", "sceGnmDeleteEqEvent"); return 0; }
static ABI int64_t bf1_stub_266(void) { printf("BF1 stub: %s\n", "sceNpWebApiDeleteServicePushEventFilter"); return 0; }
static ABI int64_t bf1_stub_267(void) { printf("BF1 stub: %s\n", "sceNpWebApiRegisterPushEventCallback"); return 0; }
static ABI int64_t bf1_stub_268(void) { printf("BF1 stub: %s\n", "_ZN3sce7Toolkit2NP9Utilities6FutureINS1_6NpUserEE3getEv"); return 0; }
static ABI int64_t bf1_stub_269(void) { printf("BF1 stub: %s\n", "scePthreadKeyDelete"); return 0; }
static ABI int64_t bf1_stub_270(void) { printf("BF1 stub: %s\n", "sceAjmModuleRegister"); return 0; }
static ABI int64_t bf1_stub_271(void) { printf("BF1 stub: %s\n", "sceNetSocket"); return 0; }
static ABI int64_t bf1_stub_272(void) { printf("BF1 stub: %s\n", "sceGnmValidationRegisterMemoryCheckCallback"); return 0; }
static ABI int64_t bf1_stub_273(void) { printf("BF1 stub: %s\n", "sceKernelClockGettime"); return 0; }
static ABI int64_t bf1_stub_274(void) { printf("BF1 stub: %s\n", "sceKernelStopUnloadModule"); return 0; }
static ABI int64_t bf1_stub_275(void) { printf("BF1 stub: %s\n", "sceAudioOutOutput"); return 0; }
static ABI int64_t bf1_stub_276(void) { printf("BF1 stub: %s\n", "usleep"); return 0; }
static ABI int64_t bf1_stub_277(void) { printf("BF1 stub: %s\n", "sceKernelNanosleep"); return 0; }
static ABI int64_t bf1_stub_278(void) { printf("BF1 stub: %s\n", "sceKernelDeleteSema"); return 0; }
static ABI int64_t bf1_stub_279(void) { printf("BF1 stub: %s\n", "sceGnmDriverTraceInProgress"); return 0; }
static ABI int64_t bf1_stub_280(void) { printf("BF1 stub: %s\n", "sceAppContentInitialize"); return 0; }
static ABI int64_t bf1_stub_281(void) { printf("BF1 stub: %s\n", "JSContextGetGlobalObject"); return 0; }
static ABI int64_t bf1_stub_282(void) { printf("BF1 stub: %s\n", "sceGnmLogicalCuMaskToPhysicalCuMask"); return 0; }
static ABI int64_t bf1_stub_283(void) { printf("BF1 stub: %s\n", "sceGnmValidateGetDiagnosticInfo"); return 0; }
static ABI int64_t bf1_stub_284(void) { printf("BF1 stub: %s\n", "pthread_cond_destroy"); return 0; }
static ABI int64_t bf1_stub_285(void) { printf("BF1 stub: %s\n", "sceAjmInstanceDestroy"); return 0; }
static ABI int64_t bf1_stub_286(void) { printf("BF1 stub: %s\n", "sceNetNtohs"); return 0; }
static ABI int64_t bf1_stub_287(void) { printf("BF1 stub: %s\n", "sceKernelGetModuleInfoForUnwind"); return 0; }
static ABI int64_t bf1_stub_288(void) { printf("BF1 stub: %s\n", "sceNetCtlUnregisterCallback"); return 0; }
static ABI int64_t bf1_stub_289(void) { printf("BF1 stub: %s\n", "scePthreadAttrGetstackaddr"); return 0; }
static ABI int64_t bf1_stub_290(void) { printf("BF1 stub: %s\n", "sceSaveDataDelete"); return 0; }
static ABI int64_t bf1_stub_291(void) { printf("BF1 stub: %s\n", "sceNpDeleteRequest"); return 0; }
static ABI int64_t bf1_stub_292(void) { printf("BF1 stub: %s\n", "sceNetEpollCreate"); return 0; }
static ABI int64_t bf1_stub_293(void) { printf("BF1 stub: %s\n", "sceGnmValidateDisableDiagnostics"); return 0; }
static ABI int64_t bf1_stub_294(void) { printf("BF1 stub: %s\n", "sceVideoOutGetFlipStatus"); return 0; }
static ABI int64_t bf1_stub_295(void) { printf("BF1 stub: %s\n", "sceKernelFcntl"); return 0; }
static ABI int64_t bf1_stub_296(void) { printf("BF1 stub: %s\n", "sceNpPartyGetMembers"); return 0; }
static ABI int64_t bf1_stub_297(void) { printf("BF1 stub: %s\n", "sceNpLookupNpId"); return 0; }
static ABI int64_t bf1_stub_298(void) { printf("BF1 stub: %s\n", "scePthreadYield"); return 0; }
static ABI int64_t bf1_stub_299(void) { printf("BF1 stub: %s\n", "select"); return 0; }
static ABI int64_t bf1_stub_300(void) { printf("BF1 stub: %s\n", "sceNetGetpeername"); return 0; }
static ABI int64_t bf1_stub_301(void) { printf("BF1 stub: %s\n", "sceNpTrophyRegisterContext"); return 0; }
static ABI int64_t bf1_stub_302(void) { printf("BF1 stub: %s\n", "sceGnmDriverCaptureInProgress"); return 0; }
static ABI int64_t bf1_stub_303(void) { printf("BF1 stub: %s\n", "sceNetShutdown"); return 0; }
static ABI int64_t bf1_stub_304(void) { printf("BF1 stub: %s\n", "socket"); return 0; }
static ABI int64_t bf1_stub_305(void) { printf("BF1 stub: %s\n", "getpeername"); return 0; }
static ABI int64_t bf1_stub_306(void) { printf("BF1 stub: %s\n", "sceVoiceSetBitRate"); return 0; }
static ABI int64_t bf1_stub_307(void) { printf("BF1 stub: %s\n", "JSObjectMakeFunctionWithCallback"); return 0; }
static ABI int64_t bf1_stub_308(void) { printf("BF1 stub: %s\n", "sceSaveDataInitialize3"); return 0; }
static ABI int64_t bf1_stub_309(void) { printf("BF1 stub: %s\n", "sceVideodecDeleteDecoder"); return 0; }
static ABI int64_t bf1_stub_310(void) { printf("BF1 stub: %s\n", "sceNetCtlRegisterCallback"); return 0; }
static ABI int64_t bf1_stub_311(void) { printf("BF1 stub: %s\n", "sceGnmSetGsShader"); return 0; }
static ABI int64_t bf1_stub_312(void) { printf("BF1 stub: %s\n", "sceKernelClose"); return 0; }
static ABI int64_t bf1_stub_313(void) { printf("BF1 stub: %s\n", "sceGnmInsertThreadTraceMarker"); return 0; }
static ABI int64_t bf1_stub_314(void) { printf("BF1 stub: %s\n", "scePthreadAttrSetstacksize"); return 0; }
static ABI int64_t bf1_stub_315(void) { printf("BF1 stub: %s\n", "scePlayGoClose"); return 0; }
static ABI int64_t bf1_stub_316(void) { printf("BF1 stub: %s\n", "sceAudio3dInitialize"); return 0; }
static ABI int64_t bf1_stub_317(void) { printf("BF1 stub: %s\n", "sceGnmGetEqEventType"); return 0; }
static ABI int64_t bf1_stub_318(void) { printf("BF1 stub: %s\n", "sceVideoOutOpen"); return 0; }
static ABI int64_t bf1_stub_319(void) { printf("BF1 stub: %s\n", "sceGnmDestroyWorkloadStream"); return 0; }
static ABI int64_t bf1_stub_320(void) { printf("BF1 stub: %s\n", "sceGnmUpdateVsShader"); return 0; }
static ABI int64_t bf1_stub_321(void) { printf("BF1 stub: %s\n", "sceNpLookupPollAsync"); return 0; }
static ABI int64_t bf1_stub_322(void) { printf("BF1 stub: %s\n", "signal"); return 0; }
static ABI int64_t bf1_stub_323(void) { printf("BF1 stub: %s\n", "sceAppContentAddcontMount"); return 0; }
static ABI int64_t bf1_stub_324(void) { printf("BF1 stub: %s\n", "sceAudio3dPortPush"); return 0; }
static ABI int64_t bf1_stub_325(void) { printf("BF1 stub: %s\n", "sceGnmSetHsShader"); return 0; }
static ABI int64_t bf1_stub_326(void) { printf("BF1 stub: %s\n", "sceKernelGetCpumode"); return 0; }
static ABI int64_t bf1_stub_327(void) { printf("BF1 stub: %s\n", "sceKernelFtruncate"); return 0; }
static ABI int64_t bf1_stub_328(void) { printf("BF1 stub: %s\n", "sceNpRegisterStateCallback"); return 0; }
static ABI int64_t bf1_stub_329(void) { printf("BF1 stub: %s\n", "sigfillset"); return 0; }
static ABI int64_t bf1_stub_330(void) { printf("BF1 stub: %s\n", "sceCompanionHttpdGetEvent"); return 0; }
static ABI int64_t bf1_stub_331(void) { printf("BF1 stub: %s\n", "sceSystemServiceHideSplashScreen"); return 0; }
static ABI int64_t bf1_stub_332(void) { printf("BF1 stub: %s\n", "scePthreadSetprio"); return 0; }
static ABI int64_t bf1_stub_333(void) { printf("BF1 stub: %s\n", "sceGnmInsertPushMarker"); return 0; }
static ABI int64_t bf1_stub_334(void) { printf("BF1 stub: %s\n", "sceKernelQueryMemoryProtection"); return 0; }
static ABI int64_t bf1_stub_335(void) { printf("BF1 stub: %s\n", "scePthreadCondWait"); return 0; }
static ABI int64_t bf1_stub_336(void) { printf("BF1 stub: %s\n", "sceAudio3dTerminate"); return 0; }
static ABI int64_t bf1_stub_337(void) { printf("BF1 stub: %s\n", "sceInvitationDialogClose"); return 0; }
static ABI int64_t bf1_stub_338(void) { printf("BF1 stub: %s\n", "sceAjmModuleUnregister"); return 0; }
static ABI int64_t bf1_stub_339(void) { printf("BF1 stub: %s\n", "sceKernelPrintBacktraceWithModuleInfo"); return 0; }
static ABI int64_t bf1_stub_340(void) { printf("BF1 stub: %s\n", "sceKernelTruncate"); return 0; }
static ABI int64_t bf1_stub_341(void) { printf("BF1 stub: %s\n", "sceKernelIsNeoMode"); return 0; }
static ABI int64_t bf1_stub_342(void) { printf("BF1 stub: %s\n", "sceGnmSetEmbeddedPsShader"); return 0; }
static ABI int64_t bf1_stub_343(void) { printf("BF1 stub: %s\n", "scePthreadRwlockTryrdlock"); return 0; }
static ABI int64_t bf1_stub_344(void) { printf("BF1 stub: %s\n", "sceNpGetOnlineId"); return 0; }
static ABI int64_t bf1_stub_345(void) { printf("BF1 stub: %s\n", "sceNpWebApiDeleteContext"); return 0; }
static ABI int64_t bf1_stub_346(void) { printf("BF1 stub: %s\n", "connect"); return 0; }
static ABI int64_t bf1_stub_347(void) { printf("BF1 stub: %s\n", "sceNpTrophyCreateContext"); return 0; }
static ABI int64_t bf1_stub_348(void) { printf("BF1 stub: %s\n", "sceAudio3dPortOpen"); return 0; }
static ABI int64_t bf1_stub_349(void) { printf("BF1 stub: %s\n", "sceGnmSetWaveLimitMultipliers"); return 0; }
static ABI int64_t bf1_stub_350(void) { printf("BF1 stub: %s\n", "sceInvitationDialogInitialize"); return 0; }
static ABI int64_t bf1_stub_351(void) { printf("BF1 stub: %s\n", "JSValueMakeBoolean"); return 0; }
static ABI int64_t bf1_stub_352(void) { printf("BF1 stub: %s\n", "sceVoiceWriteToIPort"); return 0; }
static ABI int64_t bf1_stub_353(void) { printf("BF1 stub: %s\n", "scePadReadState"); return 0; }
static ABI int64_t bf1_stub_354(void) { printf("BF1 stub: %s\n", "JSEvaluateScript"); return 0; }
static ABI int64_t bf1_stub_355(void) { printf("BF1 stub: %s\n", "sceSaveDataDialogTerminate"); return 0; }
static ABI int64_t bf1_stub_356(void) { printf("BF1 stub: %s\n", "sceGnmDispatchIndirect"); return 0; }
static ABI int64_t bf1_stub_357(void) { printf("BF1 stub: %s\n", "sceNpFriendListDialogGetResult"); return 0; }
static ABI int64_t bf1_stub_358(void) { printf("BF1 stub: %s\n", "sceNetCtlTerm"); return 0; }
static ABI int64_t bf1_stub_359(void) { printf("BF1 stub: %s\n", "sceVoiceGetResourceInfo"); return 0; }
static ABI int64_t bf1_stub_360(void) { printf("BF1 stub: %s\n", "JSValueMakeNull"); return 0; }
static ABI int64_t bf1_stub_361(void) { printf("BF1 stub: %s\n", "Need_sceLibcInternal"); return 0; }
static ABI int64_t bf1_stub_362(void) { printf("BF1 stub: %s\n", "sceNetEpollControl"); return 0; }
static ABI int64_t bf1_stub_363(void) { printf("BF1 stub: %s\n", "sceKernelWaitSema"); return 0; }
static ABI int64_t bf1_stub_364(void) { printf("BF1 stub: %s\n", "sceFiberRun"); return 0; }
static ABI int64_t bf1_stub_365(void) { printf("BF1 stub: %s\n", "sceNpGetAccountId"); return 0; }
static ABI int64_t bf1_stub_366(void) { printf("BF1 stub: %s\n", "scePthreadSelf"); return 0; }
static ABI int64_t bf1_stub_367(void) { printf("BF1 stub: %s\n", "sceGnmInsertPushColorMarker"); return 0; }
static ABI int64_t bf1_stub_368(void) { printf("BF1 stub: %s\n", "sigprocmask"); return 0; }
static ABI int64_t bf1_stub_369(void) { printf("BF1 stub: %s\n", "sceGnmInsertSetColorMarker"); return 0; }
static ABI int64_t bf1_stub_370(void) { printf("BF1 stub: %s\n", "sceVoiceDisconnectIPortFromOPort"); return 0; }
static ABI int64_t bf1_stub_371(void) { printf("BF1 stub: %s\n", "sceNpWebApiTerminate"); return 0; }
static ABI int64_t bf1_stub_372(void) { printf("BF1 stub: %s\n", "JSGlobalContextRelease"); return 0; }
static ABI int64_t bf1_stub_373(void) { printf("BF1 stub: %s\n", "sceAudioOutSetVolume"); return 0; }
static ABI int64_t bf1_stub_374(void) { printf("BF1 stub: %s\n", "sceMsgDialogOpen"); return 0; }
static ABI int64_t bf1_stub_375(void) { printf("BF1 stub: %s\n", "sceGnmAreSubmitsAllowed"); return 0; }
static ABI int64_t bf1_stub_376(void) { printf("BF1 stub: %s\n", "sceGnmAddEqEvent"); return 0; }
static ABI int64_t bf1_stub_377(void) { printf("BF1 stub: %s\n", "sceVoiceDeletePort"); return 0; }
static ABI int64_t bf1_stub_378(void) { printf("BF1 stub: %s\n", "sceNetBind"); return 0; }
static ABI int64_t bf1_stub_379(void) { printf("BF1 stub: %s\n", "scePthreadRwlockTrywrlock"); return 0; }
static ABI int64_t bf1_stub_380(void) { printf("BF1 stub: %s\n", "JSValueToBoolean"); return 0; }
static ABI int64_t bf1_stub_381(void) { printf("BF1 stub: %s\n", "sceGnmDingDong"); return 0; }
static ABI int64_t bf1_stub_382(void) { printf("BF1 stub: %s\n", "close"); return 0; }
static ABI int64_t bf1_stub_383(void) { printf("BF1 stub: %s\n", "sceNetSend"); return 0; }
static ABI int64_t bf1_stub_384(void) { printf("BF1 stub: %s\n", "scePthreadSetaffinity"); return 0; }
static ABI int64_t bf1_stub_385(void) { printf("BF1 stub: %s\n", "sceAppContentTemporaryDataMount2"); return 0; }
static ABI int64_t bf1_stub_386(void) { printf("BF1 stub: %s\n", "sceUserServiceTerminate"); return 0; }
static ABI int64_t bf1_stub_387(void) { printf("BF1 stub: %s\n", "sceGnmDingDongForWorkload"); return 0; }
static ABI int64_t bf1_stub_388(void) { printf("BF1 stub: %s\n", "sceSaveDataSaveIcon"); return 0; }
static ABI int64_t bf1_stub_389(void) { printf("BF1 stub: %s\n", "sceCompanionUtilGetEvent"); return 0; }
static ABI int64_t bf1_stub_390(void) { printf("BF1 stub: %s\n", "sceNpAuthAbortRequest"); return 0; }
static ABI int64_t bf1_stub_391(void) { printf("BF1 stub: %s\n", "sceGnmSetVgtControl"); return 0; }
static ABI int64_t bf1_stub_392(void) { printf("BF1 stub: %s\n", "sceSaveDataLoadIcon"); return 0; }
static ABI int64_t bf1_stub_393(void) { printf("BF1 stub: %s\n", "sceVoiceReadFromOPort"); return 0; }
static ABI int64_t bf1_stub_394(void) { printf("BF1 stub: %s\n", "sceKernelMunmap"); return 0; }
static ABI int64_t bf1_stub_395(void) { printf("BF1 stub: %s\n", "JSValueMakeNumber"); return 0; }
static ABI int64_t bf1_stub_396(void) { printf("BF1 stub: %s\n", "sceNetTerm"); return 0; }
static ABI int64_t bf1_stub_397(void) { printf("BF1 stub: %s\n", "scePthreadMutexInit"); return 0; }
static ABI int64_t bf1_stub_398(void) { printf("BF1 stub: %s\n", "sceSharePlaySetProhibition"); return 0; }
static ABI int64_t bf1_stub_399(void) { printf("BF1 stub: %s\n", "_is_signal_return"); return 0; }
static ABI int64_t bf1_stub_400(void) { printf("BF1 stub: %s\n", "sceGnmDriverTriggerCapture"); return 0; }
static ABI int64_t bf1_stub_401(void) { printf("BF1 stub: %s\n", "pthread_mutexattr_init"); return 0; }
static ABI int64_t bf1_stub_402(void) { printf("BF1 stub: %s\n", "sceGameLiveStreamingEnableLiveStreaming"); return 0; }
static ABI int64_t bf1_stub_403(void) { printf("BF1 stub: %s\n", "sceNetPoolCreate"); return 0; }
static ABI int64_t bf1_stub_404(void) { printf("BF1 stub: %s\n", "sceNpCmpOnlineId"); return 0; }
static ABI int64_t bf1_stub_405(void) { printf("BF1 stub: %s\n", "__progname"); return 0; }
static ABI int64_t bf1_stub_406(void) { printf("BF1 stub: %s\n", "sceAjmInitialize"); return 0; }
static ABI int64_t bf1_stub_407(void) { printf("BF1 stub: %s\n", "sceAjmBatchJobControlBufferRa"); return 0; }
static ABI int64_t bf1_stub_408(void) { printf("BF1 stub: %s\n", "sceNetEpollWait"); return 0; }
static ABI int64_t bf1_stub_409(void) { printf("BF1 stub: %s\n", "sceNpCommerceHidePsStoreIcon"); return 0; }
static ABI int64_t bf1_stub_410(void) { printf("BF1 stub: %s\n", "sceSaveDataDirNameSearch"); return 0; }
static ABI int64_t bf1_stub_411(void) { printf("BF1 stub: %s\n", "sceMsgDialogTerminate"); return 0; }
static ABI int64_t bf1_stub_412(void) { printf("BF1 stub: %s\n", "sceNpGetState"); return 0; }
static ABI int64_t bf1_stub_413(void) { printf("BF1 stub: %s\n", "sceSysmoduleUnloadModule"); return 0; }
static ABI int64_t bf1_stub_414(void) { printf("BF1 stub: %s\n", "sceKernelStat"); return 0; }
static ABI int64_t bf1_stub_415(void) { printf("BF1 stub: %s\n", "scePthreadAttrSetinheritsched"); return 0; }
static ABI int64_t bf1_stub_416(void) { printf("BF1 stub: %s\n", "sceNpCreateAsyncRequest"); return 0; }
static ABI int64_t bf1_stub_417(void) { printf("BF1 stub: %s\n", "sceKernelGettimeofday"); return 0; }
static ABI int64_t bf1_stub_418(void) { printf("BF1 stub: %s\n", "sceAudioOutOpen"); return 0; }
static ABI int64_t bf1_stub_419(void) { printf("BF1 stub: %s\n", "sceVoiceGetPortAttr"); return 0; }
static ABI int64_t bf1_stub_420(void) { printf("BF1 stub: %s\n", "scePthreadGetspecific"); return 0; }
static ABI int64_t bf1_stub_421(void) { printf("BF1 stub: %s\n", "sceRazorIsLoaded"); return 0; }
static ABI int64_t bf1_stub_422(void) { printf("BF1 stub: %s\n", "sceGnmDrawIndirectMulti"); return 0; }
static ABI int64_t bf1_stub_423(void) { printf("BF1 stub: %s\n", "sceKernelGetModuleInfoFromAddr"); return 0; }
static ABI int64_t bf1_stub_424(void) { printf("BF1 stub: %s\n", "__stack_chk_guard"); return 0; }
static ABI int64_t bf1_stub_425(void) { printf("BF1 stub: %s\n", "sceGnmRequestMipStatsReportAndReset"); return 0; }
static ABI int64_t bf1_stub_426(void) { printf("BF1 stub: %s\n", "sceVideodecReset"); return 0; }
static ABI int64_t bf1_stub_427(void) { printf("BF1 stub: %s\n", "sceAjmBatchStartBuffer"); return 0; }
static ABI int64_t bf1_stub_428(void) { printf("BF1 stub: %s\n", "sceCoredumpUnregisterCoredumpHandler"); return 0; }
static ABI int64_t bf1_stub_429(void) { printf("BF1 stub: %s\n", "setsockopt"); return 0; }
static ABI int64_t bf1_stub_430(void) { printf("BF1 stub: %s\n", "sceSystemGestureGetTouchEvents"); return 0; }
static ABI int64_t bf1_stub_431(void) { printf("BF1 stub: %s\n", "sceSysmoduleIsLoaded"); return 0; }
static ABI int64_t bf1_stub_432(void) { printf("BF1 stub: %s\n", "sceUserServiceGetLoginUserIdList"); return 0; }
static ABI int64_t bf1_stub_433(void) { printf("BF1 stub: %s\n", "sceKernelFsync"); return 0; }
static ABI int64_t bf1_stub_434(void) { printf("BF1 stub: %s\n", "send"); return 0; }
static ABI int64_t bf1_stub_435(void) { printf("BF1 stub: %s\n", "sceSystemServiceParamGetInt"); return 0; }
static ABI int64_t bf1_stub_436(void) { printf("BF1 stub: %s\n", "sceKernelChmod"); return 0; }
static ABI int64_t bf1_stub_437(void) { printf("BF1 stub: %s\n", "sceNpFriendListDialogUpdateStatus"); return 0; }
static ABI int64_t bf1_stub_438(void) { printf("BF1 stub: %s\n", "sceGnmGetProtectionFaultTimeStamp"); return 0; }
static ABI int64_t bf1_stub_439(void) { printf("BF1 stub: %s\n", "sceKernelWaitEqueue"); return 0; }
static ABI int64_t bf1_stub_440(void) { printf("BF1 stub: %s\n", "scePthreadCondDestroy"); return 0; }
static ABI int64_t bf1_stub_441(void) { printf("BF1 stub: %s\n", "JSValueGetType"); return 0; }
static ABI int64_t bf1_stub_442(void) { printf("BF1 stub: %s\n", "sceSysmoduleLoadModule"); return 0; }
static ABI int64_t bf1_stub_443(void) { printf("BF1 stub: %s\n", "sceGnmSetVsShader"); return 0; }
static ABI int64_t bf1_stub_444(void) { printf("BF1 stub: %s\n", "JSPropertyNameArrayGetCount"); return 0; }
static ABI int64_t bf1_stub_445(void) { printf("BF1 stub: %s\n", "sceGnmRequestFlipAndSubmitDone"); return 0; }
static ABI int64_t bf1_stub_446(void) { printf("BF1 stub: %s\n", "scePthreadKeyCreate"); return 0; }
static ABI int64_t bf1_stub_447(void) { printf("BF1 stub: %s\n", "scePadGetControllerInformation"); return 0; }
static ABI int64_t bf1_stub_448(void) { printf("BF1 stub: %s\n", "sceNpAuthPollAsync"); return 0; }
static ABI int64_t bf1_stub_449(void) { printf("BF1 stub: %s\n", "sceNetCtlInit"); return 0; }
static ABI int64_t bf1_stub_450(void) { printf("BF1 stub: %s\n", "sceNetSendto"); return 0; }
static ABI int64_t bf1_stub_451(void) { printf("BF1 stub: %s\n", "sceImeDialogTerm"); return 0; }
static ABI int64_t bf1_stub_452(void) { printf("BF1 stub: %s\n", "pthread_join"); return 0; }
static ABI int64_t bf1_stub_453(void) { printf("BF1 stub: %s\n", "getrusage"); return 0; }
static ABI int64_t bf1_stub_454(void) { printf("BF1 stub: %s\n", "sceNetGetSockInfo"); return 0; }
static ABI int64_t bf1_stub_455(void) { printf("BF1 stub: %s\n", "JSPropertyNameArrayRelease"); return 0; }
static ABI int64_t bf1_stub_456(void) { printf("BF1 stub: %s\n", "_sceFiberInitializeImpl"); return 0; }
static ABI int64_t bf1_stub_457(void) { printf("BF1 stub: %s\n", "sceNpProfileDialogUpdateStatus"); return 0; }
static ABI int64_t bf1_stub_458(void) { printf("BF1 stub: %s\n", "sceSslInit"); return 0; }
static ABI int64_t bf1_stub_459(void) { printf("BF1 stub: %s\n", "sceNetGetsockname"); return 0; }
static ABI int64_t bf1_stub_460(void) { printf("BF1 stub: %s\n", "sceGnmValidateDrawCommandBuffers"); return 0; }
static ABI int64_t bf1_stub_461(void) { printf("BF1 stub: %s\n", "JSStringCreateWithUTF8CString"); return 0; }
static ABI int64_t bf1_stub_462(void) { printf("BF1 stub: %s\n", "scePadInit"); return 0; }
static ABI int64_t bf1_stub_463(void) { printf("BF1 stub: %s\n", "sceKernelCheckedReleaseDirectMemory"); return 0; }
static ABI int64_t bf1_stub_464(void) { printf("BF1 stub: %s\n", "sceVideoOutSetBufferAttribute"); return 0; }
static ABI int64_t bf1_stub_465(void) { printf("BF1 stub: %s\n", "sceNpCmpNpId"); return 0; }
static ABI int64_t bf1_stub_466(void) { printf("BF1 stub: %s\n", "sceGnmFlushGarlic"); return 0; }
static ABI int64_t bf1_stub_467(void) { printf("BF1 stub: %s\n", "sceGnmGetLastWaitedAddress"); return 0; }
static ABI int64_t bf1_stub_468(void) { printf("BF1 stub: %s\n", "getargc"); return 0; }
static ABI int64_t bf1_stub_469(void) { printf("BF1 stub: %s\n", "scePthreadMutexattrSettype"); return 0; }
static ABI int64_t bf1_stub_470(void) { printf("BF1 stub: %s\n", "sceNetCtlCheckCallback"); return 0; }
static ABI int64_t bf1_stub_471(void) { printf("BF1 stub: %s\n", "sceNetHtons"); return 0; }
static ABI int64_t bf1_stub_472(void) { printf("BF1 stub: %s\n", "sceGnmBeginWorkload"); return 0; }
static ABI int64_t bf1_stub_473(void) { printf("BF1 stub: %s\n", "sceNpGetParentalControlInfo"); return 0; }
static ABI int64_t bf1_stub_474(void) { printf("BF1 stub: %s\n", "sceSharePlayInitialize"); return 0; }
static ABI int64_t bf1_stub_475(void) { printf("BF1 stub: %s\n", "sceKernelGetdents"); return 0; }
static ABI int64_t bf1_stub_476(void) { printf("BF1 stub: %s\n", "sceUserServiceInitialize"); return 0; }
static ABI int64_t bf1_stub_477(void) { printf("BF1 stub: %s\n", "sceSystemGestureUpdateTouchRecognizer"); return 0; }
static ABI int64_t bf1_stub_478(void) { printf("BF1 stub: %s\n", "sceSystemGestureClose"); return 0; }
static ABI int64_t bf1_stub_479(void) { printf("BF1 stub: %s\n", "sceGnmDrawIndexMultiInstanced"); return 0; }
static ABI int64_t bf1_stub_480(void) { printf("BF1 stub: %s\n", "sceAudio3dObjectReserve"); return 0; }
static ABI int64_t bf1_stub_481(void) { printf("BF1 stub: %s\n", "sceGnmSubmitCommandBuffersForWorkload"); return 0; }
static ABI int64_t bf1_stub_482(void) { printf("BF1 stub: %s\n", "sceVideodecFlush"); return 0; }
static ABI int64_t bf1_stub_483(void) { printf("BF1 stub: %s\n", "sceGnmIsUserPaEnabled"); return 0; }
static ABI int64_t bf1_stub_484(void) { printf("BF1 stub: %s\n", "sceGnmInsertSetMarker"); return 0; }
static ABI int64_t bf1_stub_485(void) { printf("BF1 stub: %s\n", "JSValueIsObject"); return 0; }
static ABI int64_t bf1_stub_486(void) { printf("BF1 stub: %s\n", "sceKernelDeleteEqueue"); return 0; }
static ABI int64_t bf1_stub_487(void) { printf("BF1 stub: %s\n", "sceGnmSetGsRingSizes"); return 0; }
static ABI int64_t bf1_stub_488(void) { printf("BF1 stub: %s\n", "getpagesize"); return 0; }
static ABI int64_t bf1_stub_489(void) { printf("BF1 stub: %s\n", "sceGnmGetShaderStatus"); return 0; }
static ABI int64_t bf1_stub_490(void) { printf("BF1 stub: %s\n", "sceNpPartyRegisterHandler"); return 0; }
static ABI int64_t bf1_stub_491(void) { printf("BF1 stub: %s\n", "sceKernelFstat"); return 0; }
static ABI int64_t bf1_stub_492(void) { printf("BF1 stub: %s\n", "scePthreadCondSignal"); return 0; }
static ABI int64_t bf1_stub_493(void) { printf("BF1 stub: %s\n", "sceNpWebApiRegisterServicePushEventCallback"); return 0; }
static ABI int64_t bf1_stub_494(void) { printf("BF1 stub: %s\n", "sceNetResolverDestroy"); return 0; }
static ABI int64_t bf1_stub_495(void) { printf("BF1 stub: %s\n", "sceNetListen"); return 0; }
static ABI int64_t bf1_stub_496(void) { printf("BF1 stub: %s\n", "sceKernelGetModuleInfo"); return 0; }
static ABI int64_t bf1_stub_497(void) { printf("BF1 stub: %s\n", "__pthread_cxa_finalize"); return 0; }
static ABI int64_t bf1_stub_498(void) { printf("BF1 stub: %s\n", "_ZNK3sce7Toolkit2NP9Utilities10FutureImpl8hasErrorEv"); return 0; }
static ABI int64_t bf1_stub_499(void) { printf("BF1 stub: %s\n", "sceGameLiveStreamingInitialize"); return 0; }
static ABI int64_t bf1_stub_500(void) { printf("BF1 stub: %s\n", "sceMsgDialogInitialize"); return 0; }
static ABI int64_t bf1_stub_501(void) { printf("BF1 stub: %s\n", "clock_gettime"); return 0; }
static ABI int64_t bf1_stub_502(void) { printf("BF1 stub: %s\n", "JSObjectGetPropertyAtIndex"); return 0; }
static ABI int64_t bf1_stub_503(void) { printf("BF1 stub: %s\n", "recvfrom"); return 0; }
static ABI int64_t bf1_stub_504(void) { printf("BF1 stub: %s\n", "sceDiscMapIsRequestOnHDD"); return 0; }
static ABI int64_t bf1_stub_505(void) { printf("BF1 stub: %s\n", "sceVideodecQueryResourceInfo"); return 0; }
static ABI int64_t bf1_stub_506(void) { printf("BF1 stub: %s\n", "JSObjectCallAsFunction"); return 0; }
static ABI int64_t bf1_stub_507(void) { printf("BF1 stub: %s\n", "sceNpPartyInitialize"); return 0; }
static ABI int64_t bf1_stub_508(void) { printf("BF1 stub: %s\n", "sceGnmGetTheTessellationFactorRingBufferBaseAddress"); return 0; }
static ABI int64_t bf1_stub_509(void) { printf("BF1 stub: %s\n", "_ZNK3sce7Toolkit2NP9Utilities10FutureImpl9hasResultEv"); return 0; }
static ABI int64_t bf1_stub_510(void) { printf("BF1 stub: %s\n", "pthread_mutex_destroy"); return 0; }
static ABI int64_t bf1_stub_511(void) { printf("BF1 stub: %s\n", "sceNpCommerceDialogTerminate"); return 0; }
static ABI int64_t bf1_stub_512(void) { printf("BF1 stub: %s\n", "scePthreadCondattrInit"); return 0; }
static ABI int64_t bf1_stub_513(void) { printf("BF1 stub: %s\n", "pthread_mutexattr_settype"); return 0; }
static ABI int64_t bf1_stub_514(void) { printf("BF1 stub: %s\n", "sceKernelMapNamedFlexibleMemory"); return 0; }
static ABI int64_t bf1_stub_515(void) { printf("BF1 stub: %s\n", "sceGnmUpdatePsShader350"); return 0; }
static ABI int64_t bf1_stub_516(void) { printf("BF1 stub: %s\n", "sceNpUnregisterStateCallback"); return 0; }
static ABI int64_t bf1_stub_517(void) { printf("BF1 stub: %s\n", "sigreturn"); return 0; }
static ABI int64_t bf1_stub_518(void) { printf("BF1 stub: %s\n", "scePthreadRwlockWrlock"); return 0; }
static ABI int64_t bf1_stub_519(void) { printf("BF1 stub: %s\n", "JSValueMakeUndefined"); return 0; }
static ABI int64_t bf1_stub_520(void) { printf("BF1 stub: %s\n", "sceNpLookupDeleteTitleCtx"); return 0; }
static ABI int64_t bf1_stub_521(void) { printf("BF1 stub: %s\n", "gettimeofday"); return 0; }
static ABI int64_t bf1_stub_522(void) { printf("BF1 stub: %s\n", "sceGnmGetShaderProgramBaseAddress"); return 0; }
static ABI int64_t bf1_stub_523(void) { printf("BF1 stub: %s\n", "sceGnmDispatchInitDefaultHardwareState"); return 0; }
static ABI int64_t bf1_stub_524(void) { printf("BF1 stub: %s\n", "sceKernelPwrite"); return 0; }
static ABI int64_t bf1_stub_525(void) { printf("BF1 stub: %s\n", "sceGnmUpdateGsShader"); return 0; }
static ABI int64_t bf1_stub_526(void) { printf("BF1 stub: %s\n", "sceNpPartyCreate"); return 0; }
static ABI int64_t bf1_stub_527(void) { printf("BF1 stub: %s\n", "sceVoiceCreatePort"); return 0; }
static ABI int64_t bf1_stub_528(void) { printf("BF1 stub: %s\n", "sceKernelRmdir"); return 0; }
static ABI int64_t bf1_stub_529(void) { printf("BF1 stub: %s\n", "sceNpWebApiDeleteRequest"); return 0; }
static ABI int64_t bf1_stub_530(void) { printf("BF1 stub: %s\n", "scePthreadAttrInit"); return 0; }
static ABI int64_t bf1_stub_531(void) { printf("BF1 stub: %s\n", "sceSystemGestureResetPrimitiveTouchRecognizer"); return 0; }
static ABI int64_t bf1_stub_532(void) { printf("BF1 stub: %s\n", "JSObjectMakeArray"); return 0; }
static ABI int64_t bf1_stub_533(void) { printf("BF1 stub: %s\n", "sceImeDialogAbort"); return 0; }
static ABI int64_t bf1_stub_534(void) { printf("BF1 stub: %s\n", "sendto"); return 0; }
static ABI int64_t bf1_stub_535(void) { printf("BF1 stub: %s\n", "sceSystemGestureResetTouchRecognizer"); return 0; }
static ABI int64_t bf1_stub_536(void) { printf("BF1 stub: %s\n", "scePthreadSetschedparam"); return 0; }
static ABI int64_t bf1_stub_537(void) { printf("BF1 stub: %s\n", "sceGnmGetGpuBlockStatus"); return 0; }
static ABI int64_t bf1_stub_538(void) { printf("BF1 stub: %s\n", "sceNpPartyTerminate"); return 0; }
static ABI int64_t bf1_stub_539(void) { printf("BF1 stub: %s\n", "sceVoiceConnectIPortToOPort"); return 0; }
static ABI int64_t bf1_stub_540(void) { printf("BF1 stub: %s\n", "sceGnmDrawIndexOffset"); return 0; }
static ABI int64_t bf1_stub_541(void) { printf("BF1 stub: %s\n", "sceNetCtlGetInfo"); return 0; }
static ABI int64_t bf1_stub_542(void) { printf("BF1 stub: %s\n", "sceKernelLseek"); return 0; }
static ABI int64_t bf1_stub_543(void) { printf("BF1 stub: %s\n", "scePthreadJoin"); return 0; }
static ABI int64_t bf1_stub_544(void) { printf("BF1 stub: %s\n", "sceNpWebApiUtilityParseNpId"); return 0; }
static ABI int64_t bf1_stub_545(void) { printf("BF1 stub: %s\n", "sceNpGetNpId"); return 0; }
static ABI int64_t bf1_stub_546(void) { printf("BF1 stub: %s\n", "_sceKernelRtldSetApplicationHeapAPI"); return 0; }
static ABI int64_t bf1_stub_547(void) { printf("BF1 stub: %s\n", "JSObjectGetProperty"); return 0; }
static ABI int64_t bf1_stub_548(void) { printf("BF1 stub: %s\n", "sceKernelGetDirectMemorySize"); return 0; }
static ABI int64_t bf1_stub_549(void) { printf("BF1 stub: %s\n", "sceVideoOutModeSetAny_"); return 0; }
static ABI int64_t bf1_stub_550(void) { printf("BF1 stub: %s\n", "listen"); return 0; }
static ABI int64_t bf1_stub_551(void) { printf("BF1 stub: %s\n", "sceVideodecDecode"); return 0; }
static ABI int64_t bf1_stub_552(void) { printf("BF1 stub: %s\n", "scePadRead"); return 0; }
static ABI int64_t bf1_stub_553(void) { printf("BF1 stub: %s\n", "sceNpTrophyCreateHandle"); return 0; }
static ABI int64_t bf1_stub_554(void) { printf("BF1 stub: %s\n", "sceGnmValidateDispatchCommandBuffers"); return 0; }
static ABI int64_t bf1_stub_555(void) { printf("BF1 stub: %s\n", "sceNpWebApiUnregisterPushEventCallback"); return 0; }
static ABI int64_t bf1_stub_556(void) { printf("BF1 stub: %s\n", "sceVideodecCreateDecoder"); return 0; }
static ABI int64_t bf1_stub_557(void) { printf("BF1 stub: %s\n", "JSValueToObject"); return 0; }
static ABI int64_t bf1_stub_558(void) { printf("BF1 stub: %s\n", "sceGnmDebugHardwareStatus"); return 0; }
static ABI int64_t bf1_stub_559(void) { printf("BF1 stub: %s\n", "sceSystemGestureOpen"); return 0; }
static ABI int64_t bf1_stub_560(void) { printf("BF1 stub: %s\n", "sceNpCommerceDialogGetResult"); return 0; }
static ABI int64_t bf1_stub_561(void) { printf("BF1 stub: %s\n", "sceNpCheckPlus"); return 0; }
static ABI int64_t bf1_stub_562(void) { printf("BF1 stub: %s\n", "sceSystemServiceGetStatus"); return 0; }
static ABI int64_t bf1_stub_563(void) { printf("BF1 stub: %s\n", "JSValueToNumber"); return 0; }
static ABI int64_t bf1_stub_564(void) { printf("BF1 stub: %s\n", "sceGnmValidateOnSubmitEnabled"); return 0; }
static ABI int64_t bf1_stub_565(void) { printf("BF1 stub: %s\n", "sceKernelAllocateDirectMemory"); return 0; }
static ABI int64_t bf1_stub_566(void) { printf("BF1 stub: %s\n", "sceKernelVirtualQuery"); return 0; }
static ABI int64_t bf1_stub_567(void) { printf("BF1 stub: %s\n", "sceVideoOutGetEventData"); return 0; }
static ABI int64_t bf1_stub_568(void) { printf("BF1 stub: %s\n", "scePthreadGetaffinity"); return 0; }
static ABI int64_t bf1_stub_569(void) { printf("BF1 stub: %s\n", "sceNpWebApiCreateRequest"); return 0; }
static ABI int64_t bf1_stub_570(void) { printf("BF1 stub: %s\n", "scePlayGoGetInstallSpeed"); return 0; }
static ABI int64_t bf1_stub_571(void) { printf("BF1 stub: %s\n", "sceAudioOutClose"); return 0; }
static ABI int64_t bf1_stub_572(void) { printf("BF1 stub: %s\n", "sceSaveDataDialogInitialize"); return 0; }
static ABI int64_t bf1_stub_573(void) { printf("BF1 stub: %s\n", "sceNpWebApiCreateServicePushEventFilter"); return 0; }
static ABI int64_t bf1_stub_574(void) { printf("BF1 stub: %s\n", "sceNpGetPlatformType"); return 0; }
static ABI int64_t bf1_stub_575(void) { printf("BF1 stub: %s\n", "scePthreadMutexattrDestroy"); return 0; }
static ABI int64_t bf1_stub_576(void) { printf("BF1 stub: %s\n", "sceGnmDrawOpaqueAuto"); return 0; }
static ABI int64_t bf1_stub_577(void) { printf("BF1 stub: %s\n", "sceScreenShotDisable"); return 0; }
static ABI int64_t bf1_stub_578(void) { printf("BF1 stub: %s\n", "sceGnmGetGpuInfoStatus"); return 0; }
static ABI int64_t bf1_stub_579(void) { printf("BF1 stub: %s\n", "msync"); return 0; }
static ABI int64_t bf1_stub_580(void) { printf("BF1 stub: %s\n", "sceKernelGetdirentries"); return 0; }
static ABI int64_t bf1_stub_581(void) { printf("BF1 stub: %s\n", "_ZN3sce7Toolkit2NP9Utilities6FutureINS1_6NpUserEED1Ev"); return 0; }
static ABI int64_t bf1_stub_582(void) { printf("BF1 stub: %s\n", "sceKernelReleaseFlexibleMemory"); return 0; }
static ABI int64_t bf1_stub_583(void) { printf("BF1 stub: %s\n", "scePthreadMutexUnlock"); return 0; }
static ABI int64_t bf1_stub_584(void) { printf("BF1 stub: %s\n", "JSObjectSetPropertyAtIndex"); return 0; }
static ABI int64_t bf1_stub_585(void) { printf("BF1 stub: %s\n", "scePlayGoInitialize"); return 0; }
static ABI int64_t bf1_stub_586(void) { printf("BF1 stub: %s\n", "pthread_mutex_init"); return 0; }
static ABI int64_t bf1_stub_587(void) { printf("BF1 stub: %s\n", "JSValueIsBoolean"); return 0; }
static ABI int64_t bf1_stub_588(void) { printf("BF1 stub: %s\n", "sceRazorCaptureImmediate"); return 0; }
static ABI int64_t bf1_stub_589(void) { printf("BF1 stub: %s\n", "sceNetCtlGetState"); return 0; }
static ABI int64_t bf1_stub_590(void) { printf("BF1 stub: %s\n", "scePlayGoGetLocus"); return 0; }
static ABI int64_t bf1_stub_591(void) { printf("BF1 stub: %s\n", "sceVoiceResetPort"); return 0; }
static ABI int64_t bf1_stub_592(void) { printf("BF1 stub: %s\n", "sceNpProfileDialogOpen"); return 0; }
static ABI int64_t bf1_stub_593(void) { printf("BF1 stub: %s\n", "sceCommonDialogInitialize"); return 0; }
static ABI int64_t bf1_stub_594(void) { printf("BF1 stub: %s\n", "scePthreadMutexTrylock"); return 0; }
static ABI int64_t bf1_stub_595(void) { printf("BF1 stub: %s\n", "sceNpPollAsync"); return 0; }
static ABI int64_t bf1_stub_596(void) { printf("BF1 stub: %s\n", "sceVideoOutClose"); return 0; }
static ABI int64_t bf1_stub_597(void) { printf("BF1 stub: %s\n", "__tls_get_addr"); return 0; }
static ABI int64_t bf1_stub_598(void) { printf("BF1 stub: %s\n", "sceGnmSetLsShader"); return 0; }
static ABI int64_t bf1_stub_599(void) { printf("BF1 stub: %s\n", "JSObjectMake"); return 0; }
static ABI int64_t bf1_stub_600(void) { printf("BF1 stub: %s\n", "sceVideoOutRegisterBuffers"); return 0; }
static ABI int64_t bf1_stub_601(void) { printf("BF1 stub: %s\n", "sceGnmDispatchIndirectOnMec"); return 0; }
static ABI int64_t bf1_stub_602(void) { printf("BF1 stub: %s\n", "sceNpLookupDeleteRequest"); return 0; }
static ABI int64_t bf1_stub_603(void) { printf("BF1 stub: %s\n", "scePthreadCondattrDestroy"); return 0; }
static ABI int64_t bf1_stub_604(void) { printf("BF1 stub: %s\n", "pthread_attr_init"); return 0; }
static ABI int64_t bf1_stub_605(void) { printf("BF1 stub: %s\n", "sceKernelLoadStartModule"); return 0; }
static ABI int64_t bf1_stub_606(void) { printf("BF1 stub: %s\n", "sceImeDialogGetResult"); return 0; }
static ABI int64_t bf1_stub_607(void) { printf("BF1 stub: %s\n", "scePthreadAttrGet"); return 0; }
static ABI int64_t bf1_stub_608(void) { printf("BF1 stub: %s\n", "sceNpWebApiCreateContext"); return 0; }
static ABI int64_t bf1_stub_609(void) { printf("BF1 stub: %s\n", "sceGnmSubmitAndFlipCommandBuffers"); return 0; }
static ABI int64_t bf1_stub_610(void) { printf("BF1 stub: %s\n", "scePadOpen"); return 0; }
static ABI int64_t bf1_stub_611(void) { printf("BF1 stub: %s\n", "sceAppContentGetAddcontInfoList"); return 0; }
static ABI int64_t bf1_stub_612(void) { printf("BF1 stub: %s\n", "sceNetGetsockopt"); return 0; }
static ABI int64_t bf1_stub_613(void) { printf("BF1 stub: %s\n", "sceNpWebApiCreatePushEventFilter"); return 0; }
static ABI int64_t bf1_stub_614(void) { printf("BF1 stub: %s\n", "scePadSetVibration"); return 0; }
static ABI int64_t bf1_stub_615(void) { printf("BF1 stub: %s\n", "sceUserServiceGetEvent"); return 0; }
static ABI int64_t bf1_stub_616(void) { printf("BF1 stub: %s\n", "sceSaveDataTerminate"); return 0; }
static ABI int64_t bf1_stub_617(void) { printf("BF1 stub: %s\n", "nanosleep"); return 0; }
static ABI int64_t bf1_stub_618(void) { printf("BF1 stub: %s\n", "sceGnmDrawInitDefaultHardwareState350"); return 0; }
static ABI int64_t bf1_stub_619(void) { printf("BF1 stub: %s\n", "sceGnmSubmitDone"); return 0; }
static ABI int64_t bf1_stub_620(void) { printf("BF1 stub: %s\n", "JSObjectSetProperty"); return 0; }
static ABI int64_t bf1_stub_621(void) { printf("BF1 stub: %s\n", "sceNpWebApiDeletePushEventFilter"); return 0; }
static ABI int64_t bf1_stub_622(void) { printf("BF1 stub: %s\n", "sceKernelDebugRaiseExceptionOnReleaseMode"); return 0; }
static ABI int64_t bf1_stub_623(void) { printf("BF1 stub: %s\n", "sceNetSocketAbort"); return 0; }
static ABI int64_t bf1_stub_624(void) { printf("BF1 stub: %s\n", "sceNpFriendListDialogOpen"); return 0; }
static ABI int64_t bf1_stub_625(void) { printf("BF1 stub: %s\n", "sceGnmSubmitCommandBuffers"); return 0; }

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
    return RUNTIME_LOOKUP(exports, name);
}
