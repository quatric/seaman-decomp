#include "../decls.h"
undefined4 FUN_8c050300_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  undefined4 uVar4;
  uint in_fr1;
  float fVar5;
  double dVar6;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [20];
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar4 = 1;
  uVar3 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_copy(auStack_28,ar7,ar6,ar7);
  Vec3_set_xyz(auStack_34,ar7,uVar3,ar7_00);
  iVar1 = get_field_6c_028cc4(ar5,ar7,uVar3,ar7_00);
  Vec3_ctor_zero(&uStack_44,ar7,uVar3,ar7_00);
  if (iVar1 == 0) {
    Vec3_dtor(&uStack_44,0xffffffff,uVar3,ar7_00);
    object_dtor_delete(auStack_34,0xffffffff,uVar3,ar7_00);
    Vec3_dtor(auStack_28,0xffffffff,uVar3,ar7_00);
    uVar4 = 2;
  }
  else {
    ar7_01 = auStack_3c;
    ar6_00 = &uStack_40;
    ar5_00 = &uStack_44;
    FUN_8c0507a4(iVar1,ar5_00,ar6_00,ar7_01);
    iVar2 = *(int *)(ar4 + 300);
    if (iVar2 == 0) {
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,ar6_00,ar7_01);
      if (iVar1 == 1) {
        ar7_01 = (undefined1 *)0x0;
        ar6_00 = (undefined4 *)0xffffffff;
        ar5_00 = (undefined4 *)0x0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7_01);
        *(undefined4 *)(ar4 + 0x2b8) = 3;
      }
      FUN_8c05ae54(ar4,ar5_00,ar6_00,ar7_01);
      if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 1.23128308427977e-311;
      }
      if (cVar7 == '\0') {
        fVar5 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) * fVar5);
      }
      else {
        dVar6 = dVar6 * dVar6;
      }
      if (cVar8 == '\0') {
        *(int *)(ar4 + 0x28) = SUB84(dVar6,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      (**(code **)(**(int **)(ar4 + 0x244) + 0x184))(*(int **)(ar4 + 0x244),ar5_00,ar6_00,ar7_01);
      if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),uStack_40);
      }
      if (cVar7 != '\0' || SUB84(dVar6,0) <= (float)((ulonglong)dVar6 >> 0x20)) {
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar6 & 0xffffffff;
        }
      }
    }
    else if (iVar2 == 1) {
      ar6_00 = &uStack_44;
      iVar1 = pure_virtual_stub(ar4,ar6,ar6_00,ar7_01);
      if ((iVar1 == 0) || (*(int *)(ar4 + 0x40) == 4)) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x280) = 0;
        *(undefined4 *)(ar4 + 0x2b8) = 3;
        ar7_01 = (undefined1 *)0x0;
        ar6_00 = (undefined4 *)0xffffffff;
        uVar3 = 0x10;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_01);
        *(undefined4 *)(ar4 + 0x40) = 5;
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)in_fr1;
        }
      }
    }
    else if (iVar2 == 2) {
      FUN_8c05ae54(ar4,ar5_00,ar6_00,ar7_01);
      *(undefined4 *)(ar4 + 0x214) = 0;
      ar7_01 = auStack_3c;
      ar6_00 = &uStack_40;
      FUN_8c0507a4(iVar1,&uStack_44,ar6_00,ar7_01);
      Vec3_scale(ar4 + 0x14,ar4 + 0x48,ar6_00,ar7_01,auStack_54);
      Vec3_scale(auStack_54,&DAT_8c136598,ar6_00,ar7_01,auStack_64);
      Vec3_add(auStack_64,ar6,ar6_00,ar7_01,auStack_74);
      Vec3_sub(auStack_74,&uStack_44,ar6_00,ar7_01,auStack_84);
      Vec3_scale(auStack_84,&DAT_8c13659c,ar6_00,ar7_01,auStack_94);
      FUN_8c023aa0(&uStack_44,auStack_94,ar6_00,ar7_01);
      Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7_01);
      Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7_01);
      Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7_01);
      Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7_01);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_01);
      FUN_8c036988(iVar1,uVar3,ar6_00,ar7_01);
      if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(0x3f59999a,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 3.73996370277889e-312;
      }
      if (cVar7 == '\0') {
        fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar8 == '\0') {
        *(float *)(ar4 + 0x28) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6_00,ar7_01);
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 300) = 0;
        uVar4 = 0;
        *(undefined4 *)(ar4 + 0x280) = 0;
        *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb | 4;
        FUN_8c03f3e8(ar5,uVar3,ar6_00,ar7_01);
        ar7_01 = (undefined1 *)0x0;
        ar6_00 = (undefined4 *)0xffffffff;
        uVar3 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_01);
        *(undefined4 *)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(ar4 + 0x214) = 1;
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)(uint)fVar5;
        }
      }
    }
    Vec3_dtor(&uStack_44,0xffffffff,ar6_00,ar7_01);
    object_dtor_delete(auStack_34,0xffffffff,ar6_00,ar7_01);
    Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_01);
  }
  return uVar4;
}

__asm__(".globl _FUN_8c050300\n.set _FUN_8c050300, _FUN_8c050300_def\n");
