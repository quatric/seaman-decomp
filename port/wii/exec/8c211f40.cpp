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
int FUN_8c211f40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c211f40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 2;
  if (((ar4 != 1) ||
      (ar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a8), ar7 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1ac),
      iVar1 = ({ unsigned long t0_ = (unsigned long)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1b0)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c21092e((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a0),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a4),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a8),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1ac)); }),
      iVar1 == 0)) &&
     ((ar4 != 2 || (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c210e40((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1a0),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1f8),ar6,ar7)), iVar1 == 0)))) {
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1bc) == (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1cc)) {
      uVar4 = 1;
    }
    uVar3 = 0;
    iVar1 = 0;
    if (uVar4 != 0) {
      do {
        iVar2 = ({ unsigned long t0_ = (unsigned long)(
                             *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa1c8) + iVar1)); unsigned long t1_ = (unsigned long)(ar4); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c202a80(*(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa1bc) + iVar1),
                             *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa1c0) + iVar1),
                             *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa1c4) + iVar1),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1b8)); });
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar3 = uVar3 + 1;
        iVar1 = iVar1 + 0x10;
      } while (uVar3 < uVar4);
    }
    ar6_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1b8);
    ar7_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1e4);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20af76((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1dc),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1e0),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1b8),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa1e4)));
    if ((iVar1 == 0) && (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 1 || ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2758ec) == 1)))) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f10) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08);
      *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f20) = 1;
      uVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) & 1;
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,1,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,0,ar6_00,ar7_00));
      iVar2 = uVar4 * 0x20;
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x124,*(le<undefined4>* )(unsigned)(iVar2 + -0x73b55fdc),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(300,*(le<undefined4>* )(unsigned)(iVar2 + -0x73b55fd8),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x128,*(le<undefined4>* )(unsigned)(iVar2 + -0x73b55fd0),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x130,*(le<undefined4>* )(unsigned)(iVar2 + -0x73b55fcc),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x164,*(le<undefined4>* )(unsigned)(iVar2 + -0x73b55fd4),ar6_00,ar7_00));
      ar5_00 = 0x80000000;
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x144,0x80000000,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a876(0x144,ar5_00,ar6_00,ar7_00));
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f18) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f14) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014);
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c211f40\n.set FUN_8c211f40, FUN_8c211f40_def\n");

}
