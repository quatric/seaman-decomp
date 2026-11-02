#include "../decls.h"
undefined4 FUN_8c097fcc_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  double dVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 ar5_00;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  ulonglong in_dr0;
  double dVar8;
  float fVar10;
  ulonglong uVar9;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  undefined4 in_stack_00000004;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar4 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_1c,ar5,ar6,ar7);
  uVar5 = (undefined4)in_dr0;
  if (*(int *)(ar4 + 300) == 0) {
    FUN_8c022d04(auStack_1c,uVar4,ar6_00,ar7_00);
    Vec3_set_xyz(auStack_28,uVar4,ar6_00,ar7_00);
    FUN_8c023484(auStack_1c,auStack_28,ar6_00,ar7_00,auStack_38);
    Vec3_assign(auStack_1c,auStack_38,ar6_00,ar7_00);
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7_00);
    uVar4 = 0xffffffff;
    puVar3 = auStack_28;
    object_dtor_delete(puVar3,0xffffffff,ar6_00,ar7_00);
    uVar4 = rand(puVar3,uVar4,ar6_00,ar7_00);
    ar5_00 = 0x168;
    libgcc_divide_helper_01031c(uVar4,0x168,ar6_00,ar7_00);
    FUN_8c0238b4(auStack_1c,ar5_00,ar6_00,ar7_00);
    Vec3_assign(auStack_1c,auStack_48,ar6_00,ar7_00);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7_00);
    Vec3_normalize(auStack_1c,uVar4,ar6_00,ar7_00);
    Vec3_assign(auStack_1c,auStack_58,ar6_00,ar7_00);
    uVar4 = 0xffffffff;
    puVar3 = auStack_58;
    Vec3_dtor(puVar3,0xffffffff,ar6_00,ar7_00);
    uVar4 = rand(puVar3,uVar4,ar6_00,ar7_00);
    iVar2 = libgcc_divide_helper_01031c(uVar4,0x50,ar6_00,ar7_00);
    if (cVar11 == '\0') {
      dVar8 = (double)CONCAT44((float)iVar2,uVar5);
    }
    else {
      dVar8 = (double)iVar2;
    }
    dVar1 = dVar8;
    if (cVar12 == '\0') {
      uStack_70 = (double)CONCAT44((*(uint*)((uchar*)&uStack_70+4)),(int)((ulonglong)dVar8 >> 0x20));
      dVar1 = uStack_70;
    }
    uStack_70 = dVar1;
    FUN_8c023bf4(auStack_1c,&uStack_70,ar6_00,ar7_00);
    uVar6 = SUB84(dVar8,0);
    Vec3_add(ar6,auStack_1c,ar6_00,ar7_00,auStack_68);
    ar6_00 = auStack_68;
    iVar2 = FUN_8c093e80(ar4,ar5,ar6_00,ar7);
    Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7);
    ar7_00 = ar7;
    if (iVar2 == 0) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      ar7_00 = 0;
      ar6_00 = (undefined1 *)0x0;
      uVar4 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0,0);
      if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x220) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x220) = (ulonglong)uVar6;
      }
      FUN_8c030f2c(ar4 + 0x1fc,uVar4,ar6_00,ar7_00);
      FUN_8c03f39c(in_stack_00000004,uVar4,ar6_00,ar7_00);
    }
  }
  else if (*(int *)(ar4 + 300) == 1) {
    if (cVar12 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
      fVar7 = *(float *)(ar4 + 0x220);
      fVar10 = 30.0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      in_xd0 = *(undefined8 *)(ar4 + 0x220);
      fVar7 = 30.0;
      fVar10 = 2.0;
    }
    if (cVar11 != '\0' || fVar10 <= fVar7) {
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        fVar7 = *(float *)(ar4 + 0x220);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x220);
      }
      if (cVar11 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x220) = fVar7;
        uVar9 = CONCAT44(0x42f00000,*(undefined4 *)(ar4 + 0x220));
      }
      else {
        *(undefined8 *)(ar4 + 0x220) = in_xd0;
        uVar9 = 0x454d00142f00000;
      }
      if (cVar11 == '\0' && (float)(uVar9 >> 0x20) < (float)uVar9) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x220) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x220) = uVar9 & 0xffffffff;
        }
      }
    }
    else {
      FUN_8c03f3ac(ar4 + 0xb0,uVar4,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        fVar7 = *(float *)(ar4 + 0x220);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x220);
      }
      if (cVar11 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x220) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x220) = in_xd0;
      }
    }
  }
  (*(uint*)((uchar*)&uStack_70+4)) = 1;
  Vec3_dtor(auStack_1c,0xffffffff,ar6_00,ar7_00);
  return (*(uint*)((uchar*)&uStack_70+4));
}

__asm__(".globl _FUN_8c097fcc\n.set _FUN_8c097fcc, _FUN_8c097fcc_def\n");
