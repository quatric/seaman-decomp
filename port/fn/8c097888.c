#include "../decls.h"
undefined4 FUN_8c097888_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  code *pcVar7;
  double dVar6;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined4 in_stack_00000000;
  undefined4 ain0;
  undefined8 uStack_98;
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar2 = ar5;
  ain0 = ar7;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_34,uVar2,ar6,ar7);
  uVar3 = 1;
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c0978d0:
    iVar1 = FUN_8c034148(ar4 + 0xb0,4,ar6,ar7);
    uVar4 = (undefined4)in_dr0;
    if ((iVar1 != 1) && (iVar1 != 2)) {
      Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
      return 1;
    }
    uVar2 = 0x8c2846e8;
    FUN_8c031b68(ar4,0x8c2846e8,ar6,ar7);
    in_dr0 = CONCAT44(0x3f800000,uVar4);
    if (cVar10 == '\0') {
      *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x48) = in_dr0;
    }
    *(undefined4 *)(ar4 + 0x40) = 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 3) {
      iVar1 = ar4 + 0x24c;
      Vec3_assign(auStack_24,iVar1,ar6,ar7);
      s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar1,ar6,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,iVar1,ar6,ar7,ain0);
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x42920000,(int)in_dr0);
        in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        dVar6 = 1.23979734631016e-311;
      }
      if (cVar9 == '\0') {
        bVar8 = in_fr15 < (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        bVar8 = (double)CONCAT44(in_fr14,in_fr15) < dVar6;
      }
      if (!bVar8) {
        *(undefined4 *)(ar4 + 0x248) = 0;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
      FUN_8c0230f0(ar4 + 0x14,iVar1,ar6,ar7,auStack_54);
      Vec3_assign(ar4 + 0x80,auStack_54,ar6,ar7);
      Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
      uVar2 = ar5;
      Vec3_sub(auStack_24,ar5,ar6,ar7,auStack_64);
      Vec3_normalize(auStack_64,uVar2,ar6,ar7);
      Vec3_assign(auStack_34,auStack_74,ar6,ar7);
      Vec3_dtor(auStack_74,0xffffffff,ar6,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_64,0xffffffff,ar6,ar7);
      FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7,auStack_84);
      FUN_8c0230f0(auStack_34,uVar2,ar6,ar7,(int)&uStack_98 + 4);
      FUN_8c022dac(auStack_84,(int)&uStack_98 + 4,ar6,ar7);
      if (cVar10 == '\0') {
        uStack_98 = (double)CONCAT44((*(uint*)((uchar*)&uStack_98+4)),(int)((ulonglong)dVar6 >> 0x20));
        dVar6 = uStack_98;
      }
      uStack_98 = dVar6;
      Vec3_dtor((int)&uStack_98 + 4,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_84,0xffffffff,ar6,ar7);
      uVar3 = FUN_8c097ba4(ar4,auStack_24,ar5,ar7);
      ar6 = ar5;
      goto LAB_8c097b04;
    }
    if (iVar1 != 5) goto LAB_8c097b04;
    goto LAB_8c0978d0;
  }
  s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6,ar7);
  CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7,ain0);
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x42200000,(int)in_dr0);
    in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    dVar6 = 2.7216357441417e-312;
  }
  if (cVar9 == '\0') {
    bVar8 = (float)((ulonglong)dVar6 >> 0x20) < in_fr15;
  }
  else {
    bVar8 = dVar6 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar8) {
    Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6,ar7);
    if (cVar10 == '\0') {
      uVar2 = SUB84(dVar6,0);
      pcVar7 = (code *)0x40000000;
    }
    else {
      uVar2 = 0x40000000;
      pcVar7 = s_CAnimBody_AdvanceFrame_033ba0;
    }
    FUN_8c031ce8(ar4,ain0,in_stack_00000000,ar7);
    Vec3_assign(ar4 + 0x24c,auStack_44,in_stack_00000000,ar7);
    Vec3_dtor(auStack_44,0xffffffff,in_stack_00000000,ar7);
    ar5_00 = auStack_24;
    FUN_8c022fc0(ar5,ar5_00,in_stack_00000000,ar7);
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),pcVar7);
    }
    else {
      in_xd0 = CONCAT44(pcVar7,uVar2);
      dVar6 = *(double *)(ar4 + 0x24);
    }
    if (cVar9 == '\0') {
      fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar10 == '\0') {
      *(float *)(ar4 + 0x30) = fVar5;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
    }
    FUN_8c031c64(ar4,ar5_00,in_stack_00000000,ar7);
    *(undefined4 *)(ar4 + 0x40) = 3;
    ar6 = in_stack_00000000;
  }
LAB_8c097b04:
  Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c097888\n.set _FUN_8c097888, _FUN_8c097888_def\n");
