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
undefined4 FUN_8c20b260_def(undefined4 ar4,undefined *ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20b260");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 ar5_00;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275710) == 0) {
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 0) {
      *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4) = 1;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f20) = 1;
    }
    else {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0fc) = (*(volatile le<undefined4>* )(unsigned)(unsigned)0xffd8000c);
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f10) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08);
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) = 1;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f18) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f14) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014);
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f20) = 1;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8) = 0;
      *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4) = 2;
      if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fcc) & 0x20) == 0) {
        iVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4;
        iVar5 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4;
        iVar7 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0) * 0x10;
        iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0) * 0x10;
        do {
          ar7 = 0x10;
          ar5 = ((undefined *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar6 + -0x73b560d4 + iVar4));
          ar6 = *(le<int>* )(unsigned)(iVar5 + -0x73b56084 + iVar7) + 0x20;
          iVar2 = ({ unsigned long t0_ = (unsigned long)((fr0_ + (int)0xffffffd8)); *(le<unsigned>* )((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); sh4_dmac_202f40(0x10000000,ar5,ar6,0x10); });
        } while (iVar2 == 0x100);
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c20b160((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0),ar5,ar6,ar7); });
      }
      else {
        (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038) = 0x10;
        (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00003c) = 0x10;
        ar5 = ((undefined1 *)(unsigned)0x8c26d3f8);
        ar6 = 4;
        (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c20731e(0xe0000000,((undefined1 *)(unsigned)0x8c26d3f8),4,ar7));
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c20b160((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0),ar5,ar6,ar7); });
      }
    }
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) = 0;
  bVar1 = false;
  do {
    *(le<unsigned>* )(unsigned)0x8c4a9f20 = 0; goto LAB_8c20b3e0;
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4a9e14)))((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e18),ar5,ar6,ar7));
  } while ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd4) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd0) + 1U);
  bVar1 = true;
LAB_8c20b3e0:
  if (bVar1) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) = 0;
    bVar1 = false;
    do {
      *(le<unsigned>* )(unsigned)0x8c4a9f20 = 0; goto LAB_8c20b468;
      (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4a9e14)))((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e18),ar5,ar6,ar7));
    } while ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) < 0x15);
    bVar1 = true;
LAB_8c20b468:
    if (bVar1) {
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c2062c8(4,ar5,ar6,ar7));
    }
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) + 1 & 3;
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4) = 0;
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 1) || ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275710) == 1)) {
    uVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) & 1;
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(8,1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(8,0,ar6,ar7));
    iVar7 = uVar3 * 0x20;
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(0x124,*(le<undefined4>* )(unsigned)(iVar7 + -0x73b55fdc),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(300,*(le<undefined4>* )(unsigned)(iVar7 + -0x73b55fd8),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(0x128,*(le<undefined4>* )(unsigned)(iVar7 + -0x73b55fd0),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(0x130,*(le<undefined4>* )(unsigned)(iVar7 + -0x73b55fcc),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(0x164,*(le<undefined4>* )(unsigned)(iVar7 + -0x73b55fd4),ar6,ar7));
    ar5_00 = 0x80000000;
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(0x144,0x80000000,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a876(0x144,ar5_00,ar6,ar7));
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f18) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f14) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014);
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275710) != 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f10) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08);
      *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4) = 2;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) = 1;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f28) = 1;
    }
  }
  return 0;
}

__asm__(".globl FUN_8c20b260\n.set FUN_8c20b260, FUN_8c20b260_def\n");

}
