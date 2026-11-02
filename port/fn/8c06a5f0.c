#include "../decls.h"
ulonglong * FUN_8c06a5f0_def(int ar4,ulonglong *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  int iVar5;
  uint in_fr1;
  undefined4 uVar6;
  ulonglong uVar7;
  double dVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  if (*(int *)(ar4 + 0x218) == -1) {
    _DAT_8c2809a8 = _DAT_8c2809a8 + 1;
  }
  if (-1 < *(int *)(ar4 + 0x21c)) {
    iVar3 = *(int *)(ar4 + 0x218);
    if (iVar3 == 0) {
      *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f648) = 0;
      if (*(int *)(ar4 + 0x230) == 3) {
        _DAT_8c280998 = _DAT_8c280998 + -1;
        _DAT_8c2809a8 = _DAT_8c2809a8 + 1;
      }
    }
    else if (iVar3 == 1) {
      *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f604) = 0;
      if (*(int *)(ar4 + 0x230) == 3) {
        if (*(int *)(ar4 + 0x210) < 4) {
          _DAT_8c2809a0 = _DAT_8c2809a0 + -1;
        }
        else {
          _DAT_8c28099c = _DAT_8c28099c + -1;
        }
        _DAT_8c2809a8 = _DAT_8c2809a8 + 1;
      }
    }
    else if ((iVar3 == 2) &&
            (*(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f5c8) = 0,
            *(int *)(ar4 + 0x230) == 3)) {
      _DAT_8c2809a4 = _DAT_8c2809a4 + -1;
      _DAT_8c2809a8 = _DAT_8c2809a8 + 1;
    }
    *(undefined4 *)(ar4 + 0x21c) = 0xffffffff;
  }
  iVar3 = ar6;
  if (ar6 == 0) {
    *(undefined4 *)(ar4 + 0x218) = 0;
    uVar1 = rand(ar4,ar5,0,ar7);
    iVar2 = libgcc_divide_helper_01031c(uVar1,7,iVar3,ar7);
    iVar5 = 7;
    while ((*(int *)(iVar2 * 8 + -0x73d7f648) == 1 && (0 < iVar5))) {
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
      if (6 < iVar2) {
        iVar2 = 0;
      }
    }
    if (0 < iVar5) {
      *(undefined4 *)(iVar2 * 8 + -0x73d7f648) = 1;
      *(int *)(ar4 + 0x21c) = iVar2;
    }
    puVar4 = (ulonglong *)(iVar2 * 0x10 + -0x73d7f544);
    iVar2 = ar4 + 0x30;
    Vec3_assign(iVar2,puVar4,iVar3,ar7);
  }
  else if (ar6 == 1) {
    *(undefined4 *)(ar4 + 0x218) = 1;
    uVar1 = rand(ar4,ar5,1,ar7);
    iVar2 = libgcc_divide_helper_01031c(uVar1,6,iVar3,ar7);
    iVar5 = 6;
    while ((*(int *)(iVar2 * 8 + -0x73d7f604) == 1 && (0 < iVar5))) {
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
      if (5 < iVar2) {
        iVar2 = 0;
      }
    }
    if (0 < iVar5) {
      *(undefined4 *)(iVar2 * 8 + -0x73d7f604) = 1;
      *(int *)(ar4 + 0x21c) = iVar2;
    }
    puVar4 = (ulonglong *)(iVar2 * 0x10 + -0x73d7f48c);
    iVar2 = ar4 + 0x30;
    Vec3_assign(iVar2,puVar4,iVar3,ar7);
  }
  else if (ar6 == 2) {
    *(undefined4 *)(ar4 + 0x218) = 2;
    uVar1 = rand(ar4,ar5,2,ar7);
    iVar2 = libgcc_divide_helper_01031c(uVar1,6,iVar3,ar7);
    iVar5 = 6;
    while ((*(int *)(iVar2 * 8 + -0x73d7f5c8) == 1 && (0 < iVar5))) {
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
      if (5 < iVar2) {
        iVar2 = 0;
      }
    }
    if (0 < iVar5) {
      *(undefined4 *)(iVar2 * 8 + -0x73d7f5c8) = 1;
      *(int *)(ar4 + 0x21c) = iVar2;
    }
    puVar4 = (ulonglong *)(iVar2 * 0x10 + -0x73d7f3e4);
    iVar2 = ar4 + 0x30;
    Vec3_assign(iVar2,puVar4,iVar3,ar7);
  }
  else {
    iVar2 = ar4;
    puVar4 = ar5;
    if (ar6 == 3) {
      *(undefined4 *)(ar4 + 0x218) = 3;
      *(undefined4 *)(ar4 + 0x21c) = 0xffffffff;
    }
  }
  uVar7 = (ulonglong)in_fr1;
  if (cVar10 == '\0') {
    *(undefined4 *)(ar4 + 0x50) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x50) = uVar7;
  }
  uVar1 = rand(iVar2,puVar4,iVar3,ar7);
  uVar6 = (undefined4)uVar7;
  iVar3 = libgcc_divide_helper_01031c(uVar1,0x168,iVar3,ar7);
  if (cVar9 == '\0') {
    dVar8 = (double)CONCAT44((float)iVar3,uVar6);
  }
  else {
    dVar8 = (double)iVar3;
  }
  if (cVar10 == '\0') {
    *(int *)(ar4 + 0x54) = (int)((ulonglong)dVar8 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x54) = dVar8;
  }
  if (cVar10 == '\0') {
    *(undefined4 *)(ar4 + 0x58) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x58) = (ulonglong)dVar8 & 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x230) = 1;
  if (cVar10 == '\0') {
    *(undefined4 *)(ar4 + 0x244) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x244) = (ulonglong)dVar8 & 0xffffffff;
  }
  if (ar6 == 3) {
    if (cVar10 == '\0') {
      *(undefined4 *)ar5 = 0;
    }
    else {
      *ar5 = (ulonglong)dVar8 & 0xffffffff;
    }
    puVar4 = (ulonglong *)((int)ar5 + 4);
    if (cVar10 == '\0') {
      *(undefined4 *)puVar4 = 0;
    }
    else {
      *puVar4 = (ulonglong)dVar8 & 0xffffffff;
    }
    if (cVar10 == '\0') {
      *(undefined4 *)(ar5 + 1) = 0;
    }
    else {
      ar5[1] = (ulonglong)dVar8 & 0xffffffff;
    }
  }
  else {
    if (cVar10 == '\0') {
      *(undefined4 *)ar5 = *(undefined4 *)(ar4 + 0x30);
      *(undefined4 *)(ar5 + 1) = *(undefined4 *)(ar4 + 0x38);
      *(undefined4 *)((int)ar5 + 4) = *(undefined4 *)(ar4 + 0x34);
    }
    else {
      *ar5 = *(ulonglong *)(ar4 + 0x30);
      ar5[1] = *(ulonglong *)(ar4 + 0x38);
      *(undefined8 *)((int)ar5 + 4) = *(undefined8 *)(ar4 + 0x34);
    }
    puVar4 = (ulonglong *)(ar4 + 0x38);
  }
  return puVar4;
}

__asm__(".globl _FUN_8c06a5f0\n.set _FUN_8c06a5f0, _FUN_8c06a5f0_def\n");
