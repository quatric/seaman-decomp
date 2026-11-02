#include "../decls.h"
undefined4 FUN_8c091924_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined4 uVar4;
  float fVar5;
  float fVar8;
  double dVar6;
  ulonglong uVar7;
  undefined8 in_xd0;
  char cVar9;
  char cVar10;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [4];
  float fStack_1c;
  undefined4 uStack_18;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  uVar2 = ar5;
  uVar3 = ar6;
  Vec3_set_zero(auStack_20,ar5,ar6,ar7);
  iVar1 = *(int *)(ar4 + 0x40);
  if ((5 < iVar1) || (iVar1 < 0)) goto switchD_8c091960_caseD_2;
                    
  switch(iVar1) {
  case 0:
    FUN_8c0230f0(ar4 + 0x14,uVar2,uVar3,ar7,auStack_30);
    Vec3_assign(ar4 + 0x14,auStack_30,uVar3,ar7);
    Vec3_dtor(auStack_30,0xffffffff,uVar3,ar7);
    FUN_8c031b68(ar4,0x8c2846d0,uVar3,ar7);
    uVar2 = ar5;
    uVar3 = ar6;
    FUN_8c031bb4(ar4,ar5,ar6,ar7);
    if (cVar10 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0x3d4ccccd;
      *(undefined4 *)(ar4 + 0x24) = 0x3d4ccccd;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = 0xb03d4ccccd;
      *(undefined8 *)(ar4 + 0x24) = 0xb03d4ccccd;
    }
    iVar1 = get_field_1c_026dd8(ar4 + 0xb0,uVar2,uVar3,ar7);
    if (iVar1 != 0) {
      ar7_00 = 0;
      uVar3 = 0xffffffff;
      uVar2 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7_00);
    }
    ar7 = ar4 + 0x14;
    FUN_8c092884(ar4,ar5,ar6,ar7);
    vec3_copy_8c023d8c(auStack_20,auStack_3c,ar6,ar7);
    uVar2 = 0xffffffff;
    object_dtor_delete(auStack_3c,0xffffffff,ar6,ar7);
    if (cVar10 == '\0') {
      fVar8 = 90.0;
      fVar5 = fStack_1c;
    }
    else {
      in_xd0 = CONCAT44(uStack_18,fStack_1c);
      fVar5 = 90.0;
      fVar8 = -90.0;
    }
    if (cVar9 != '\0' || fVar8 <= fVar5) {
LAB_8c091a60:
      if (cVar10 == '\0') {
        fVar5 = 90.0;
      }
      else {
        in_xd0 = CONCAT44(uStack_18,fStack_1c);
        fStack_1c = 90.0;
        fVar5 = -90.0;
      }
      if (cVar9 == '\0' && fStack_1c < fVar5) {
        *(undefined4 *)(ar4 + 0x22c) = 2;
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar2 = 9;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
      }
      else {
        *(undefined4 *)(ar4 + 0x22c) = 1;
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar2 = 8;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7);
    }
    else {
      if (cVar10 == '\0') {
        fVar8 = -90.0;
        fVar5 = fStack_1c;
      }
      else {
        in_xd0 = CONCAT44(uStack_18,fStack_1c);
        fVar5 = -90.0;
        fVar8 = 7.79122e-43;
      }
      if (cVar9 != '\0' || fVar5 <= fVar8) goto LAB_8c091a60;
    }
    *(undefined4 *)(ar4 + 0x40) = 1;
    uVar3 = ar6;
  case 1:
    if (*(int *)(ar4 + 0x22c) == 0) {
      *(undefined4 *)(ar4 + 0x40) = 3;
    }
    else {
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x220));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x220);
        dVar6 = 21990236605644.8;
      }
      if (cVar9 == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x220) = fVar5;
        uVar7 = CONCAT44(0x42b40000,*(undefined4 *)(ar4 + 0x220));
      }
      else {
        *(undefined8 *)(ar4 + 0x220) = in_xd0;
        uVar7 = 0x42f0000042b40000;
      }
      if (cVar9 != '\0' || (float)uVar7 <= (float)(uVar7 >> 0x20)) {
        FUN_8c03f3ac(ar4 + 0xb0,uVar2,uVar3,ar7);
        if (*(int *)(ar4 + 0x22c) == 1) {
          Vec3_set_xyz(auStack_48,uVar2,uVar3,ar7);
          FUN_8c023484(ar4 + 0x14,auStack_48,uVar3,ar7,auStack_58);
          Vec3_assign(ar4 + 0x14,auStack_58,uVar3,ar7);
          Vec3_dtor(auStack_58,0xffffffff,uVar3,ar7);
          object_dtor_delete(auStack_48,0xffffffff,uVar3,ar7);
        }
        else if (*(int *)(ar4 + 0x22c) == 2) {
          Vec3_set_xyz(auStack_64,uVar2,uVar3,ar7);
          FUN_8c023484(ar4 + 0x14,auStack_64,uVar3,ar7,auStack_74);
          Vec3_assign(ar4 + 0x14,auStack_74,uVar3,ar7);
          Vec3_dtor(auStack_74,0xffffffff,uVar3,ar7);
          object_dtor_delete(auStack_64,0xffffffff,uVar3,ar7);
        }
      }
      else {
        iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,uVar3,ar7);
        if (iVar1 == 1) {
          *(undefined4 *)(ar4 + 0x40) = 3;
          *(undefined4 *)(ar4 + 0x22c) = 0;
          *(undefined4 *)(ar4 + 0x40) = 3;
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x220) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x220) = uVar7 & 0xffffffff;
          }
          ar7 = 0;
          uVar3 = 0xffffffff;
          uVar2 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7);
        }
      }
    }
    break;
  case 3:
    FUN_8c03f3ac(ar4 + 0xb0,uVar2,uVar3,ar7);
    uVar4 = FUN_8c031764(ar4,ar6,ar5,ar7);
    uVar3 = ar5;
  }
switchD_8c091960_caseD_2:
  object_dtor_delete(auStack_20,0xffffffff,uVar3,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c091924\n.set _FUN_8c091924, _FUN_8c091924_def\n");
