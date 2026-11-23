/* Offline-safe fallback stubs for BF1 imports not otherwise implemented.
 * Each logs its name when called so startup failures can be attributed. */
#include "runtime.h"
#include <stdio.h>

static char bf1_dummy_object[256];
static ABI int64_t bf1_zero_stub(void) { printf("BF1 stub: %s\n", __func__); return 0; }
static ABI int64_t bf1_pointer_stub(void) { printf("BF1 ptr stub: %s\n", __func__); return (int64_t)(uintptr_t)bf1_dummy_object; }

static ABI int64_t bf1_stub_0(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_1(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_2(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_3(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_4(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_5(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_6(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_7(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_8(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_9(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_10(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_11(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_12(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_13(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_14(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_15(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_16(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_17(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_18(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_19(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_20(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_21(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_22(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_23(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_24(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_25(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_26(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_27(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_28(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_29(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_30(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_31(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_32(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_33(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_34(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_35(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_36(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_37(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_38(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_39(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_40(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_41(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_42(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_43(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_44(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_45(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_46(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_47(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_48(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_49(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_50(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_51(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_52(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_53(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_54(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_55(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_56(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_57(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_58(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_59(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_60(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_61(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_62(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_63(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_64(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_65(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_66(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_67(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_68(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_69(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_70(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_71(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_72(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_73(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_74(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_75(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_76(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_77(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_78(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_79(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_80(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_81(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_82(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_83(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_84(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_85(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_86(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_87(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_88(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_89(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_90(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_91(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_92(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_93(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_94(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_95(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_96(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_97(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_98(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_99(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_100(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_101(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_102(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_103(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_104(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_105(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_106(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_107(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_108(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_109(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_110(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_111(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_112(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_113(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_114(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_115(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_116(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_117(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_118(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_119(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_120(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_121(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_122(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_123(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_124(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_125(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_126(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_127(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_128(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_129(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_130(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_131(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_132(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_133(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_134(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_135(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_136(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_137(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_138(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_139(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_140(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_141(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_142(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_143(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_144(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_145(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_146(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_147(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_148(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_149(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_150(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_151(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_152(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_153(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_154(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_155(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_156(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_157(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_158(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_159(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_160(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_161(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_162(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_163(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_164(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_165(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_166(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_167(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_168(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_169(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_170(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_171(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_172(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_173(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_174(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_175(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_176(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_177(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_178(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_179(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_180(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_181(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_182(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_183(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_184(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_185(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_186(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_187(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_188(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_189(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_190(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_191(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_192(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_193(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_194(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_195(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_196(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_197(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_198(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_199(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_200(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_201(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_202(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_203(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_204(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_205(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_206(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_207(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_208(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_209(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_210(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_211(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_212(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_213(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_214(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_215(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_216(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_217(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_218(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_219(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_220(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_221(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_222(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_223(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_224(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_225(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_226(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_227(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_228(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_229(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_230(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_231(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_232(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_233(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_234(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_235(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_236(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_237(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_238(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_239(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_240(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_241(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_242(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_243(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_244(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_245(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_246(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_247(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_248(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_249(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_250(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_251(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_252(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_253(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_254(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_255(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_256(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_257(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_258(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_259(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_260(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_261(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_262(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_263(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_264(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_265(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_266(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_267(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_268(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_269(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_270(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_271(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_272(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_273(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_274(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_275(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_276(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_277(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_278(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_279(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_280(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_281(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_282(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_283(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_284(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_285(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_286(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_287(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_288(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_289(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_290(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_291(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_292(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_293(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_294(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_295(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_296(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_297(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_298(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_299(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_300(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_301(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_302(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_303(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_304(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_305(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_306(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_307(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_308(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_309(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_310(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_311(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_312(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_313(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_314(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_315(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_316(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_317(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_318(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_319(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_320(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_321(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_322(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_323(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_324(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_325(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_326(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_327(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_328(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_329(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_330(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_331(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_332(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_333(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_334(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_335(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_336(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_337(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_338(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_339(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_340(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_341(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_342(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_343(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_344(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_345(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_346(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_347(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_348(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_349(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_350(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_351(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_352(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_353(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_354(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_355(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_356(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_357(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_358(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_359(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_360(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_361(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_362(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_363(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_364(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_365(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_366(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_367(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_368(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_369(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_370(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_371(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_372(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_373(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_374(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_375(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_376(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_377(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_378(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_379(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_380(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_381(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_382(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_383(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_384(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_385(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_386(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_387(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_388(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_389(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_390(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_391(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_392(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_393(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_394(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_395(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_396(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_397(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_398(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_399(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_400(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_401(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_402(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_403(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_404(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_405(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_406(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_407(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_408(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_409(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_410(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_411(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_412(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_413(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_414(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_415(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_416(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_417(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_418(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_419(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_420(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_421(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_422(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_423(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_424(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_425(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_426(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_427(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_428(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_429(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_430(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_431(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_432(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_433(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_434(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_435(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_436(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_437(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_438(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_439(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_440(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_441(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_442(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_443(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_444(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_445(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_446(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_447(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_448(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_449(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_450(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_451(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_452(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_453(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_454(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_455(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_456(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_457(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_458(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_459(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_460(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_461(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_462(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_463(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_464(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_465(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_466(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_467(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_468(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_469(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_470(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_471(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_472(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_473(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_474(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_475(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_476(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_477(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_478(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_479(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_480(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_481(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_482(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_483(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_484(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_485(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_486(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_487(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_488(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_489(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_490(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_491(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_492(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_493(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_494(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_495(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_496(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_497(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_498(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_499(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_500(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_501(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_502(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_503(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_504(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_505(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_506(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_507(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_508(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_509(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_510(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_511(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_512(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_513(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_514(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_515(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_516(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_517(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_518(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_519(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_520(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_521(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_522(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_523(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_524(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_525(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_526(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_527(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_528(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_529(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_530(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_531(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_532(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_533(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_534(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_535(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_536(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_537(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_538(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_539(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_540(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_541(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_542(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_543(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_544(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_545(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_546(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_547(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_548(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_549(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_550(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_551(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_552(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_553(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_554(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_555(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_556(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_557(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_558(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_559(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_560(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_561(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_562(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_563(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_564(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_565(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_566(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_567(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_568(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_569(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_570(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_571(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_572(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_573(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_574(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_575(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_576(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_577(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_578(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_579(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_580(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_581(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_582(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_583(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_584(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_585(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_586(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_587(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_588(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_589(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_590(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_591(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_592(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_593(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_594(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_595(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_596(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_597(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_598(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_599(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_600(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_601(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_602(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_603(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_604(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_605(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_606(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_607(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_608(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_609(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_610(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_611(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_612(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_613(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_614(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_615(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_616(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_617(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_618(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_619(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_620(void) { return bf1_pointer_stub(); }
static ABI int64_t bf1_stub_621(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_622(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_623(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_624(void) { return bf1_zero_stub(); }
static ABI int64_t bf1_stub_625(void) { return bf1_zero_stub(); }

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
