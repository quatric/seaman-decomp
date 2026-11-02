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
undefined4 FUN_8c20aacc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20aacc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<uint>* puVar3;
  le<undefined4>* puVar4;
  le<undefined4>* puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar1 = 0x8c4aa0b4;
  iVar9 = 4;
  iVar6 = 0;
  iVar10 = 0;
  iVar11 = 0;
  do {
    iVar2 = 0x8c4aa030;
    iVar8 = (1 - iVar10) * 0x18;
    *(le<undefined4>* )(unsigned)(ar4 + iVar8) = *(le<undefined4>* )(unsigned)(0x8c4aa030 + iVar6);
    *(le<undefined4>* )(unsigned)(ar4 + iVar8 + 4) = *(le<undefined4>* )(unsigned)(iVar2 + -0xc + iVar6);
    *(le<undefined4>* )(unsigned)(ar4 + iVar8 + 8) = *(le<undefined4>* )(unsigned)(iVar2 + -0x14 + iVar6);
    *(le<undefined4>* )(unsigned)(ar4 + iVar8 + 0xc) = *(le<undefined4>* )(unsigned)(iVar2 + 4 + iVar6);
    *(le<undefined4>* )(unsigned)(ar4 + iVar8 + 0x10) = *(le<undefined4>* )(unsigned)(iVar2 + -8 + iVar6);
    iVar2 = 0x8c4a9dc4;
    *(le<undefined4>* )(unsigned)(iVar8 + ar4 + 0x14) = *(le<undefined4>* )(unsigned)(iVar1 + 0x24 + iVar11);
    iVar10 = iVar10 + 1;
    puVar4 = (le<undefined4>* )(unsigned)(iVar2 + iVar11);
    iVar11 = iVar11 + 4;
    *(le<undefined4>* )(unsigned)(ar4 + 0x38 + iVar9) = *puVar4;
    puVar3 = 0x8c4a9f08;
    iVar2 = 0x8c4a9ee0;
    iVar9 = iVar9 + -4;
    iVar6 = iVar6 + 0x20;
  } while (iVar10 < 2);
  if (*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 0) {
    puVar3 = (le<uint>* )(unsigned)(0x8c4a9ee0 + 0x28);
    *(le<undefined4>* )(unsigned)(ar4 + 0x30) = *(le<undefined4>* )(unsigned)(0x8c4a9ee0 + (*puVar3 & 1) * 4);
    *(le<undefined4>* )(unsigned)(ar4 + 0x34) = *(le<undefined4>* )(unsigned)(iVar2 + (1 - (*puVar3 & 1)) * 4);
  }
  else {
    *(le<undefined4>* )(unsigned)(ar4 + 0x34) = *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)0x8c4a9f08 & 1) * 4 + 0x8c4a9ee0);
    *(le<uint>* )(unsigned)(ar4 + 0x30) = puVar3[-9 - (*puVar3 & 1)];
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x40) = *(le<undefined4>* )(unsigned)0x8c4a9e60;
  uVar7 = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x44) = *(le<undefined4>* )(unsigned)0x8c4a9e64;
  iVar6 = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x48) = *(le<undefined4>* )(unsigned)(iVar1 + 8);
  *(le<undefined4>* )(unsigned)(ar4 + 0x4c) = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
  *(le<undefined4>* )(unsigned)(ar4 + 0x50) = *(le<undefined4>* )(unsigned)(iVar1 + 0x1c);
  *(le<undefined4>* )(unsigned)(ar4 + 0x54) = *(le<undefined4>* )(unsigned)(iVar1 + 0x20);
  do {
    iVar10 = 0x8c4a9f2c + 4;
    *(le<undefined4>* )(unsigned)(ar4 + 0x58 + uVar7) = *(le<undefined4>* )(unsigned)(0x8c4a9f2c + iVar6);
    iVar9 = 0x8c4aa070;
    *(le<undefined4>* )(unsigned)(ar4 + uVar7 + 0x6c) = *(le<undefined4>* )(unsigned)(iVar10 + iVar6);
    *(le<undefined4>* )(unsigned)(0x80 + ar4 + uVar7) = *(le<undefined4>* )(unsigned)(iVar9 + uVar7);
    puVar4 = (le<undefined4>* )(unsigned)(iVar1 + 0x2c + uVar7);
    puVar5 = (le<undefined4>* )(unsigned)(0x94 + ar4 + uVar7);
    uVar7 = uVar7 + 4;
    *puVar5 = *puVar4;
    iVar6 = iVar6 + 0x10;
  } while (uVar7 < 0x14);
  *(le<undefined4>* )(unsigned)(ar4 + 0xa8) = *(le<undefined4>* )(unsigned)(iVar1 + 0x4c);
  *(le<undefined4>* )(unsigned)(ar4 + 0xac) = *(le<undefined4>* )(unsigned)(iVar1 + 0x44);
  return 0;
}

__asm__(".globl FUN_8c20aacc\n.set FUN_8c20aacc, FUN_8c20aacc_def\n");

}
