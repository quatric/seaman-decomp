#include "../decls.h"
undefined4 FUN_8c0d64a0_def(undefined8 *ar4,undefined4 ar5,undefined8 *ar6,undefined8 *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *a5;
  double in_dr0;
  undefined8 uVar3;
  float fVar6;
  double dVar4;
  double dVar5;
  undefined8 in_dr14;
  uint uVar8;
  double dVar7;
  undefined8 in_xd0;
  double in_xd14;
  char cVar9;
  char cVar10;
  undefined4 auStack_3c [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar8 = (uint)((ulonglong)in_dr14 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  Vec3_ctor_zero(&uStack_1c,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_2c,ar5,ar6,ar7);
  dVar7 = (double)((ulonglong)uVar8 << 0x20);
  iVar2 = *(int *)((int)ar4 + 100);
  if ((iVar2 < 7) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      if (cVar10 == '\0') {
        uVar3 = CONCAT44(*(undefined4 *)(ar4 + 0xb),*(undefined4 *)(ar4 + 1));
      }
      else {
        uVar3 = ar4[0xb];
      }
      if (cVar9 == '\0' && (float)uVar3 < (float)((ulonglong)uVar3 >> 0x20)) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 1) = *(undefined4 *)(ar4 + 0xb);
        }
        else {
          ar4[1] = ar4[0xb];
        }
      }
      break;
    case 2:
      if (*(int *)(ar4 + 0xc) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0xc) + 8) + 0x80))(*(int *)(ar4 + 0xc),ar5,ar6,ar7);
        ar7 = ar4 + 7;
        ar6 = (undefined8 *)((int)ar4 + 0x34);
        a5 = ar4 + 6;
        (**(code **)(*(int *)(*(int *)(ar4 + 0xc) + 8) + 0x134))(*(int *)(ar4 + 0xc),a5,ar6,ar7);
        (**(code **)(*(int *)(*(int *)(ar4 + 0xc) + 8) + 0x130))(*(int *)(ar4 + 0xc),a5,ar6,ar7);
        uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        if (cVar10 == '\0') {
          in_dr0 = (double)CONCAT44(uVar1,*(undefined4 *)(ar4 + 7));
        }
        else {
          in_xd0 = ar4[7];
          auStack_3c[0] = uVar1;
        }
        if (cVar9 == '\0') {
          fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
          in_dr0 = (double)CONCAT44(fVar6,SUB84(in_dr0,0) + fVar6);
        }
        else {
          in_dr0 = in_dr0 + in_dr0;
        }
        if (cVar10 == '\0') {
          *(int *)(ar4 + 7) = SUB84(in_dr0,0);
        }
        else {
          ar4[7] = in_xd0;
        }
      }
      Vec3_sub(ar4 + 6,ar4,ar6,ar7,auStack_3c);
      Vec3_assign(&uStack_1c,auStack_3c,ar6,ar7);
      uVar1 = 0xffffffff;
      Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7);
      Vec3_length_sq(&uStack_1c,uVar1,ar6,ar7);
      (**(code **)(*(int *)((int)ar4 + 0x11c) + 8))((int *)((int)ar4 + 0x11c),uVar1,ar6,ar7);
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
        in_dr0 = in_xd14;
      }
      Vec3_length(&uStack_1c,uVar1,ar6,ar7);
      fStack_24 = SUB84(dVar7,0);
      dVar4 = in_dr0;
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(fStack_24,uStack_1c);
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * SUB84(dVar4,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar4;
      }
      if (cVar10 == '\0') {
        uStack_2c = (undefined4)((ulonglong)dVar4 >> 0x20);
        dVar4 = (double)CONCAT44(fStack_24,uStack_18);
      }
      else {
        uStack_2c = SUB84(dVar4,0);
        dVar4 = in_dr0;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * SUB84(dVar4,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar4;
      }
      uStack_28 = SUB84(dVar4,0);
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(uStack_14,uStack_28);
        uStack_28 = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        dVar5 = (double)CONCAT44(uStack_10,uStack_14);
      }
      if (cVar9 == '\0') {
        fStack_24 = fStack_24 * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_24 = SUB84(dVar7 * dVar5,0);
      }
      if (cVar10 != '\0') {
        fStack_24 = SUB84(in_dr0,0);
        uStack_20 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      }
      FUN_8c023aa0(ar4,&uStack_2c,ar6,ar7);
      break;
    case 4:
      ar6 = ar4 + 6;
      iVar2 = FUN_8c0d6d58(ar4,ar4,ar6,ar7);
      if (iVar2 == 4) {
        *(undefined4 *)((int)ar4 + 100) = 3;
      }
      if (cVar10 == '\0') {
        *(undefined4 *)(ar4 + 4) = *(undefined4 *)ar4;
      }
      else {
        ar4[4] = *ar4;
      }
      break;
    case 5:
      ar6 = ar4 + 6;
      iVar2 = FUN_8c0d6d58(ar4,ar4,ar6,ar7);
      if (iVar2 == 4) {
        *(undefined4 *)((int)ar4 + 100) = 0;
      }
      break;
    case 6:
      ar6 = ar4 + 6;
      iVar2 = FUN_8c0d6d58(ar4,ar4,ar6,ar7);
      if (iVar2 == 4) {
        *(undefined4 *)((int)ar4 + 100) = 0;
      }
      if (cVar10 == '\0') {
        *(undefined4 *)(ar4 + 4) = *(undefined4 *)ar4;
      }
      else {
        ar4[4] = *ar4;
      }
    }
  }
  Vec3_dtor(&uStack_2c,0xffffffff,ar6,ar7);
  uVar1 = Vec3_dtor(&uStack_1c,0xffffffff,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d64a0\n.set _FUN_8c0d64a0, _FUN_8c0d64a0_def\n");
