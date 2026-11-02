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
undefined4 pvr_206ff0_def(undefined4 ar4,undefined4 ar5,le<uint>* ar6,undefined4 ar7)

{
  TRACE_ENTER("pvr_206ff0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  le<undefined4>* puVar2;
  le<uint>* puVar3;
  le<int>* piVar4;
  le<undefined4>* puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  le<uint>* puVar10;
  uint uVar11;
  
  puVar3 = 0xa05f6900;
  puVar1 = ((void *)(unsigned)0x8c2062c8);
  uVar11 = *(volatile le<undefined4>* )(unsigned)0xa05f6900;
  if (((uVar11 & 8) != 0) && (iVar7 = (vsp = ((unsigned long)(fr0_ - 4)), pvr_2069a0(ar4,ar5,ar6,ar7)), iVar7 != 0)) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(iVar7,ar5,ar6,ar7));
  }
  if ((uVar11 & 0x20) != 0) {
    *puVar3 = 0x20;
    *(le<undefined4>* )(unsigned)0x8c4a9e5c = *(le<undefined4>* )(unsigned)0x8c4a9e5c | 4;
  }
  if ((uVar11 & 4) != 0) {
    *puVar3 = 7;
    *(le<undefined4>* )(unsigned)0x8c4a9db4 = 0;
    piVar4 = 0xffd8000c;
    puVar2 = 0x8c4aa0b4;
    *(le<undefined4>* )(unsigned)0x8c4aa0b4 = 0;
    puVar2[0x11] = puVar2[0x10] - *piVar4;
    if (*(le<undefined4>* )(unsigned)0x8c4a9f24 == 0) {
      *(le<undefined4>* )(unsigned)(0x8c4a9ef8 + *(le<int>* )(unsigned)(0x8c4a9ef8 + 0x14) * 4) = 5;
    }
    else {
      *(le<undefined4>* )(unsigned)0x8c4a9f24 = 0;
      puVar5 = 0x8c4a9e78;
      puVar2[6] = 0;
      puVar2 = 0xa05f8048;
      *(volatile le<undefined4>* )(unsigned)0xa05f8048 = *puVar5;
      puVar2[1] = *(le<undefined4>* )(unsigned)0x8c4a9e70;
      *(volatile le<undefined4>* )(unsigned)0xa05f8068 = *(le<undefined4>* )(unsigned)0x8c4a9e60;
      *(volatile le<undefined4>* )(unsigned)0xa05f806c = *(le<undefined4>* )(unsigned)0x8c4a9e64;
    }
    *(le<undefined4>* )(unsigned)0x8c4a9e5c = *(le<undefined4>* )(unsigned)0x8c4a9e5c | 1;
    *(le<undefined4>* )(unsigned)0x8c4aa104 = 0;
  }
  puVar10 = 0xffa0002c;
  uVar9 = 0x80000;
  if ((uVar11 & 0x80000) != 0) {
    uVar8 = *(volatile le<undefined4>* )(unsigned)0xffa0002c;
    *(volatile le<undefined4>* )(unsigned)0xffa0002c = uVar8 & 0xfffffffc;
    puVar6 = ((void *)(unsigned)0x8c203160);
    *puVar3 = uVar9;
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar6)))(uVar8 & 0xfffffffc,uVar9,puVar10,ar7));
    ar6 = puVar10;
  }
  if ((uVar11 & 0x40) != 0) {
    *puVar3 = 0x40;
    *(le<undefined4>* )(unsigned)0x8c4a9e5c = *(le<undefined4>* )(unsigned)0x8c4a9e5c | 0x40;
  }
  uVar8 = (uint)0x80;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *(le<undefined4>* )(unsigned)0x8c4a9f18 = *(le<undefined4>* )(unsigned)0x8c4a9f18 | 1;
    if (*(le<undefined4>* )(unsigned)0x8c4a9f14 == *puVar10) {
      (vsp = ((unsigned long)(fr0_ - 4)), pvr_206cfe(uVar8,uVar9,ar6,ar7));
    }
  }
  uVar8 = (uint)0x100;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *(le<undefined4>* )(unsigned)0x8c4a9f18 = *(le<undefined4>* )(unsigned)0x8c4a9f18 | 2;
    if (*(le<undefined4>* )(unsigned)0x8c4a9f14 == *puVar10) {
      (vsp = ((unsigned long)(fr0_ - 4)), pvr_206cfe(uVar8,uVar9,ar6,ar7));
    }
  }
  uVar8 = (uint)0x200;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *(le<undefined4>* )(unsigned)0x8c4a9f18 = *(le<undefined4>* )(unsigned)0x8c4a9f18 | 4;
    if (*(le<undefined4>* )(unsigned)0x8c4a9f14 == *puVar10) {
      (vsp = ((unsigned long)(fr0_ - 4)), pvr_206cfe(uVar8,uVar9,ar6,ar7));
    }
  }
  uVar8 = (uint)0x400;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *(le<undefined4>* )(unsigned)0x8c4a9f18 = *(le<undefined4>* )(unsigned)0x8c4a9f18 | 8;
    if (*(le<undefined4>* )(unsigned)0x8c4a9f14 == *puVar10) {
      (vsp = ((unsigned long)(fr0_ - 4)), pvr_206cfe(uVar8,uVar9,ar6,ar7));
    }
  }
  uVar8 = 0x200000;
  if ((uVar11 & 0x200000) != 0) {
    *puVar3 = 0x200000;
    puVar3 = 0x8c4a9f18;
    *(le<undefined4>* )(unsigned)0x8c4a9f18 = *(le<undefined4>* )(unsigned)0x8c4a9f18 | 0x10;
    if (*(le<undefined4>* )(unsigned)0x8c4a9f14 == *puVar3) {
      (vsp = ((unsigned long)(fr0_ - 4)), pvr_206cfe(uVar8,uVar9,ar6,ar7));
    }
  }
  uVar11 = *(volatile le<undefined4>* )(unsigned)0xa05f6908;
  if (((uVar11 & 4) != 0) && (uVar8 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c206f76(uVar8,uVar9,ar6,ar7)), uVar8 != 0)) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(uVar8,uVar9,ar6,ar7));
  }
  if (((uVar11 & 8) != 0) && (uVar8 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c206faa(uVar8,uVar9,ar6,ar7)), uVar8 != 0)) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(uVar8,uVar9,ar6,ar7));
  }
  if (((uVar11 & 2) != 0) && (iVar7 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c206fd2(uVar8,uVar9,ar6,ar7)), iVar7 != 0)) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(iVar7,uVar9,ar6,ar7));
  }
  puVar1 = ((void *)(unsigned)0x8c207334);
  for (uVar11 = 0; (int)uVar11 < 10; uVar11 = uVar11 + 1) {
    if ((int)uVar11 < 0) {
      uVar9 = 1 >> (~uVar11 & 0x1f) + 1;
    }
    else {
      uVar9 = 1 << (uVar11 & 0x1f);
    }
    if ((*(le<undefined4>* )(unsigned)0x8c4a9e5c & uVar9) != 0) {
      *(le<undefined4>* )(unsigned)0x8c4a9e5c = *(le<undefined4>* )(unsigned)0x8c4a9e5c & ~uVar9;
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(*(le<undefined4>* )(unsigned)(0x8c4a9de0 + -4 + uVar11 * 8),
                        *(le<undefined4>* )(unsigned)(0x8c4a9de0 + uVar11 * 8),ar6,ar7));
    }
  }
  return 0;
}

__asm__(".globl pvr_206ff0\n.set pvr_206ff0, pvr_206ff0_def\n");

}
