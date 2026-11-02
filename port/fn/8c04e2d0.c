#include "../decls.h"
undefined4 FUN_8c04e2d0_def(int ar4,undefined4 ar5,undefined1 *ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *ar6_00;
  int ar7_00;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  float fVar7;
  double dVar6;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  undefined4 in_stack_ffffff00;
  undefined4 auStack_a4 [4];
  undefined1 auStack_94 [12];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  iVar1 = *(int *)(ar4 + 0x298);
  if (iVar1 == 0) {
    uVar2 = ar5;
    ar6_00 = ar6;
    iVar1 = FUN_8c04b168(ar4,ar5,ar6,ar7_00);
    if (iVar1 == 0) {
      *(int *)(ar4 + 0x298) = *(int *)(ar4 + 0x298) + 1;
      *(undefined4 *)(ar4 + 0x40) = 5;
      FUN_8c031748(ar4,uVar2,ar6_00,ar7_00);
    }
  }
  else if (iVar1 == 1) {
    iVar1 = ar7;
    uVar2 = FUN_8c023334(ar4 + 0x14,ar7,ar6_00,ar7_00);
    *(undefined4 *)(ar4 + 0x27c) = uVar2;
    FUN_8c0230f0(ar4 + 0x14,iVar1,ar6_00,ar7_00,auStack_38);
    FUN_8c0230f0(ar7,iVar1,ar6_00,ar7_00,auStack_48);
    FUN_8c022dac(auStack_38,auStack_48,ar6_00,ar7_00);
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x224) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(undefined8 *)(ar4 + 0x224) = in_dr0;
    }
    Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7_00);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7_00);
    FUN_8c0231c8(ar7,uVar2,ar6_00,ar7_00);
    iVar1 = ar4 + 0x14;
    FUN_8c0231c8(iVar1,uVar2,ar6_00,ar7_00);
    FUN_8c010e38(iVar1,uVar2,ar6_00,ar7_00,in_stack_ffffff00);
    fVar5 = (float)in_dr0;
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x228) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(undefined8 *)(ar4 + 0x228) = in_dr0;
    }
    *(undefined4 *)(ar4 + 0x40) = 1;
    if (cVar9 == '\0') {
      fVar5 = *(float *)(ar4 + 0x224);
    }
    if (cVar8 == '\0' && 1.0 < fVar5) {
      uVar2 = FUN_8c023334(ar4 + 0x14,ar7,ar6_00,ar7_00);
      *(undefined4 *)(ar4 + 0x27c) = uVar2;
      if (*(int *)(ar4 + 0x27c) == 3) {
        ar7_00 = 0;
        ar6_00 = (undefined1 *)0xffffffff;
        uVar2 = 7;
        iVar1 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
        if (iVar1 != 6) {
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        }
      }
      else {
        ar7_00 = 0;
        ar6_00 = (undefined1 *)0xffffffff;
        uVar2 = 8;
        iVar1 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
        if (iVar1 != 6) {
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        }
      }
      if (cVar9 == '\0') {
        fVar5 = *(float *)(ar4 + 0x224);
        fVar7 = 45.0;
      }
      else {
        fVar5 = 45.0;
        fVar7 = 9.30462e-43;
      }
      if (cVar8 == '\0' && fVar7 < fVar5) {
        if (cVar9 == '\0') {
          *(undefined4 *)(ar4 + 0x224) = 0x42340000;
        }
        else {
          *(undefined8 *)(ar4 + 0x224) = 0x29842340000;
        }
      }
      *(int *)(ar4 + 0x298) = *(int *)(ar4 + 0x298) + 1;
    }
    else {
      *(undefined4 *)(ar4 + 0x280) = 0;
      *(undefined4 *)(ar4 + 0x298) = 0;
      uVar4 = 0;
    }
  }
  else if (iVar1 == 2) {
    Vec3_sub(ar6,ar5,ar6_00,ar7_00,auStack_58);
    Vec3_scale(auStack_58,&DAT_8c136590,ar6_00,ar7_00,auStack_68);
    Vec3_assign(auStack_28,auStack_68,ar6_00,ar7_00);
    Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7_00);
    puVar3 = auStack_28;
    Vec3_assign(ar4 + 0x2a8,puVar3,ar6_00,ar7_00);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar6 = 1.34162686540996e-311;
    }
    if (cVar8 == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
      uVar2 = 0x3f333333;
      *(undefined4 *)(ar4 + 0x278) = 0x3f333333;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd0;
      uVar2 = 0xb0;
      *(undefined8 *)(ar4 + 0x278) = 0xb03f333333;
    }
    CAnimBody_GetCurFrame(ar4 + 0xb0,puVar3,ar6_00,ar7_00,in_stack_ffffff00);
    if (cVar9 == '\0') {
      uVar2 = auStack_a4[0];
    }
    auStack_a4[0] = uVar2;
    FUN_8c0230f0(ar7,puVar3,ar6_00,ar7_00,auStack_78);
    puVar3 = auStack_78;
    Vec3_add(ar5,puVar3,ar6_00,ar7_00,auStack_88);
    uVar2 = get_field_1c_026dd8(ar4 + 0xb0,puVar3,ar6_00,ar7_00);
    s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
    uVar2 = get_field_1c_026dd8(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
    s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
    Vec3_set_xyz(auStack_94,uVar2,ar6_00,ar7_00);
    ar7_00 = ar4 + 0x14;
    ar6_00 = auStack_88;
    FUN_8c031eb0(ar4,ar5,ar6_00,ar7_00,auStack_a4);
    Vec3_assign(ar4 + 0x14,auStack_a4,ar6_00,ar7_00);
    Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7_00);
    object_dtor_delete(auStack_94,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_88,0xffffffff,ar6_00,ar7_00);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_78,0xffffffff,ar6_00,ar7_00);
    iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
    if (iVar1 == 1) {
      *(int *)(ar4 + 0x298) = *(int *)(ar4 + 0x298) + -1;
    }
  }
  FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_00);
  return uVar4;
}

__asm__(".globl _FUN_8c04e2d0\n.set _FUN_8c04e2d0, _FUN_8c04e2d0_def\n");
