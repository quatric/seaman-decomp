#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * game_frame_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("game_frame");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint ain0;
  undefined4 ain0_00;
  undefined1 *ar4_00;
  uint uVar1;
  
  uVar1 = 0;
  ain0 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aad24) = ain0;
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6dc) != 0) {
    while (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6d4) != 0 && (uVar1 < 0x28870))) {
      ar5 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
      ar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f88f0((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aad24),ar5,ar6,ar7));
      ain0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f892a(ar4,ar5,ar6,ar7));
      uVar1 = ain0;
    }
    if (uVar1 < 0x28870) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c258e50(ar4,ar5,ar6,ar7); });
    }
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6d4) = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20b7a0(ar4,ar5,ar6,ar7));
  ar4_00 = ((undefined1 *)(unsigned)0x8c4aa540);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa518) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa51c) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa520) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa540) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa540) + 1;
  ain0_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20b260(((undefined1 *)(unsigned)0x8c4aa540),ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1f61c6(ar4_00,ar5,ar6,ar7); });
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aad28) = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4_00,ar5,ar6,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa4f4) = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aabdc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa4f8) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aabdc)[1];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa4fc) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aabdc)[2];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa500) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aabdc)[3];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa504) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aabdc)[4];
  return ((undefined1 *)(unsigned)0x8c4aa4fc);
}

__asm__(".globl game_frame\n.set game_frame, game_frame_def\n");

}
