#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
ulonglong * FUN_8c06a5f0_def(int ar4,ulonglong *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c06a5f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  int iVar5;
  uint in_fr1 = 0;
  undefined4 uVar6;
  ulonglong uVar7;
  double dVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x218) == -1) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) + 1;
  }
  if (-1 < *(int *)(unsigned)(ar4 + 0x21c)) {
    iVar3 = *(int *)(unsigned)(ar4 + 0x218);
    if (iVar3 == 0) {
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f648) = 0;
      if (*(int *)(unsigned)(ar4 + 0x230) == 3) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c280998) = (*(undefined4 *)(unsigned)(unsigned)0x8c280998) + -1;
        (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) + 1;
      }
    }
    else if (iVar3 == 1) {
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f604) = 0;
      if (*(int *)(unsigned)(ar4 + 0x230) == 3) {
        if (*(int *)(unsigned)(ar4 + 0x210) < 4) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0) + -1;
        }
        else {
          (*(undefined4 *)(unsigned)(unsigned)0x8c28099c) = (*(undefined4 *)(unsigned)(unsigned)0x8c28099c) + -1;
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) + 1;
      }
    }
    else if ((iVar3 == 2) &&
            (*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f5c8) = 0,
            *(int *)(unsigned)(ar4 + 0x230) == 3)) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2809a4) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a4) + -1;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) + 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x21c) = 0xffffffff;
  }
  iVar3 = ar6;
  if (ar6 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4,ar5,0,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(uVar1,7,iVar3,ar7));
    iVar5 = 7;
    while ((*(int *)(unsigned)(iVar2 * 8 + -0x73d7f648) == 1 && (0 < iVar5))) {
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
      if (6 < iVar2) {
        iVar2 = 0;
      }
    }
    if (0 < iVar5) {
      *(undefined4 *)(unsigned)(iVar2 * 8 + -0x73d7f648) = 1;
      *(int *)(unsigned)(ar4 + 0x21c) = iVar2;
    }
    puVar4 = (ulonglong *)(unsigned)(iVar2 * 0x10 + -0x73d7f544);
    iVar2 = ar4 + 0x30;
    (vsp = ((unsigned long)(fr0_ - 4)), Vec3_assign(iVar2,puVar4,iVar3,ar7));
  }
  else if (ar6 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x218) = 1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4,ar5,1,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(uVar1,6,iVar3,ar7));
    iVar5 = 6;
    while ((*(int *)(unsigned)(iVar2 * 8 + -0x73d7f604) == 1 && (0 < iVar5))) {
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
      if (5 < iVar2) {
        iVar2 = 0;
      }
    }
    if (0 < iVar5) {
      *(undefined4 *)(unsigned)(iVar2 * 8 + -0x73d7f604) = 1;
      *(int *)(unsigned)(ar4 + 0x21c) = iVar2;
    }
    puVar4 = (ulonglong *)(unsigned)(iVar2 * 0x10 + -0x73d7f48c);
    iVar2 = ar4 + 0x30;
    (vsp = ((unsigned long)(fr0_ - 4)), Vec3_assign(iVar2,puVar4,iVar3,ar7));
  }
  else if (ar6 == 2) {
    *(undefined4 *)(unsigned)(ar4 + 0x218) = 2;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4,ar5,2,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(uVar1,6,iVar3,ar7));
    iVar5 = 6;
    while ((*(int *)(unsigned)(iVar2 * 8 + -0x73d7f5c8) == 1 && (0 < iVar5))) {
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
      if (5 < iVar2) {
        iVar2 = 0;
      }
    }
    if (0 < iVar5) {
      *(undefined4 *)(unsigned)(iVar2 * 8 + -0x73d7f5c8) = 1;
      *(int *)(unsigned)(ar4 + 0x21c) = iVar2;
    }
    puVar4 = (ulonglong *)(unsigned)(iVar2 * 0x10 + -0x73d7f3e4);
    iVar2 = ar4 + 0x30;
    (vsp = ((unsigned long)(fr0_ - 4)), Vec3_assign(iVar2,puVar4,iVar3,ar7));
  }
  else {
    iVar2 = ar4;
    puVar4 = ar5;
    if (ar6 == 3) {
      *(undefined4 *)(unsigned)(ar4 + 0x218) = 3;
      *(undefined4 *)(unsigned)(ar4 + 0x21c) = 0xffffffff;
    }
  }
  uVar7 = (ulonglong)in_fr1;
  if (cVar10 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x50) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x50) = uVar7;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), rand(iVar2,puVar4,iVar3,ar7));
  uVar6 = (undefined4)uVar7;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(uVar1,0x168,iVar3,ar7));
  if (cVar9 == '\0') {
    dVar8 = CONCAT44D((float)iVar3,uVar6);
  }
  else {
    dVar8 = (double)iVar3;
  }
  if (cVar10 == '\0') {
    *(int *)(unsigned)(ar4 + 0x54) = (int)(D2U(dVar8) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x54) = dVar8;
  }
  if (cVar10 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x58) = D2U(dVar8) & 0xffffffff;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x230) = 1;
  if (cVar10 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x244) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x244) = D2U(dVar8) & 0xffffffff;
  }
  if (ar6 == 3) {
    if (cVar10 == '\0') {
      *(undefined4 *)(unsigned)ar5 = 0;
    }
    else {
      *ar5 = D2U(dVar8) & 0xffffffff;
    }
    puVar4 = (ulonglong *)(unsigned)((int)ar5 + 4);
    if (cVar10 == '\0') {
      *(undefined4 *)(unsigned)puVar4 = 0;
    }
    else {
      *puVar4 = D2U(dVar8) & 0xffffffff;
    }
    if (cVar10 == '\0') {
      *(undefined4 *)(unsigned)(ar5 + 1) = 0;
    }
    else {
      ar5[1] = D2U(dVar8) & 0xffffffff;
    }
  }
  else {
    if (cVar10 == '\0') {
      *(undefined4 *)(unsigned)ar5 = *(undefined4 *)(unsigned)(ar4 + 0x30);
      *(undefined4 *)(unsigned)(ar5 + 1) = *(undefined4 *)(unsigned)(ar4 + 0x38);
      *(undefined4 *)(unsigned)((int)ar5 + 4) = *(undefined4 *)(unsigned)(ar4 + 0x34);
    }
    else {
      *ar5 = *(ulonglong *)(unsigned)(ar4 + 0x30);
      ar5[1] = *(ulonglong *)(unsigned)(ar4 + 0x38);
      *(undefined8 *)(unsigned)((int)ar5 + 4) = *(undefined8 *)(unsigned)(ar4 + 0x34);
    }
    puVar4 = (ulonglong *)(unsigned)(ar4 + 0x38);
  }
  return puVar4;
}

__asm__(".globl _FUN_8c06a5f0\n.set _FUN_8c06a5f0, _FUN_8c06a5f0_def\n");
