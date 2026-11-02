#include "../decls.h"
undefined4 FUN_8c07e828_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  undefined4 uVar3;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar4;
  undefined4 unaff_r12;
  int *a4;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar5;
  float fVar6;
  undefined8 in_dr0;
  double dVar7;
  undefined8 uVar8;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar9;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar5 = auStack_4;
  }
  else {
    puVar5 = auStack_8;
  }
  *(undefined4 *)(puVar5 + -4) = unaff_r14;
  *(undefined4 *)(puVar5 + -8) = unaff_r13;
  *(undefined4 *)(puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar5 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar5 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar5 + -0x1c) = in_PR;
  *(undefined4 *)(puVar5 + -0x104) = ar6;
  a4 = *(int **)(puVar5 + 4);
  *(undefined4 *)(ar4 + 0x214) = 0;
  uVar3 = ar5;
  FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7);
  uVar4 = 1;
  FUN_8c031700(ar4,uVar3,ar6,ar7);
  *(undefined4 *)(ar4 + 0x290) = 0xffffffff;
  Vec3_ctor_zero(puVar5 + -0x2c,uVar3,ar6,ar7);
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x178) = 1;
    FUN_8c031748(ar4,uVar3,ar6,ar7);
    FUN_8c031c74(ar4,&DAT_8c125e78,ar5,ar7);
    ar6 = ar5;
    if (*(int *)(ar4 + 0x40) == 0) {
      uVar3 = FUN_8c034148(ar4 + 0xb0,0x29,ar5,ar7);
      *(undefined4 *)(puVar5 + -0xc4) = uVar3;
      ar6 = ar5;
      if (0 < *(int *)(puVar5 + -0xc4)) {
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(undefined4 *)(ar4 + 0x290) = *(undefined4 *)(ar4 + 0x294);
        *(int *)(puVar5 + -0xf0) = ar4;
        *(int *)(*(int *)(puVar5 + -0xf0) + 300) = *(int *)(*(int *)(puVar5 + -0xf0) + 300) + 1;
      }
    }
  }
  else if (iVar1 == 1) {
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7,*(undefined4 *)(puVar5 + -0x104));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar5 + -200) = (int)((ulonglong)in_dr0 >> 0x20);
      in_fr15 = *(float *)(puVar5 + -200);
      dVar7 = (double)CONCAT44(0x43250000,(int)in_dr0);
    }
    else {
      *(undefined8 *)(puVar5 + -200) = in_dr0;
      dVar7 = 6.03203368746242e-312;
    }
    if (in_FPSCR_PR == '\0') {
      bVar9 = (float)((ulonglong)dVar7 >> 0x20) < in_fr15;
    }
    else {
      bVar9 = dVar7 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar9) {
      uVar3 = (**(code **)(*a4 + 0x11c))(a4,6,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xcc) = uVar3;
      if (*(int *)(puVar5 + -0xcc) == 0) {
        uVar3 = (**(code **)(*a4 + 0x11c))(a4,4,ar6,ar7);
        *(undefined4 *)(puVar5 + -0xd0) = uVar3;
        if (*(int *)(puVar5 + -0xd0) == 0) {
          *(undefined4 *)(puVar5 + -0xb8) = 2;
          Vec3_dtor(puVar5 + -0x2c,0xffffffff,ar6,ar7);
          return *(undefined4 *)(puVar5 + -0xb8);
        }
        uVar3 = 4;
      }
      else {
        uVar3 = 6;
      }
      ar5_00 = 0x2c;
      uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x2c,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xd4) = uVar2;
      uVar2 = deref_u32(*(undefined4 *)(puVar5 + -0xd4),ar5_00,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xd8) = uVar2;
      CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7,*(undefined4 *)(puVar5 + -0x104));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar5 + -0xdc) = (int)((ulonglong)dVar7 >> 0x20);
      }
      else {
        *(double *)(puVar5 + -0xdc) = dVar7;
      }
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0x4c;
      if (in_FPSCR_SZ == '\0') {
        uVar8 = CONCAT44(0x42f40000,SUB84(dVar7,0));
      }
      else {
        uVar8 = 0x8c0342d842f40000;
      }
      FUN_8c0342d8(ar4 + 0xb0,*(undefined4 *)**(undefined4 **)(puVar5 + -0xd8),ar6,ar7);
      Vec3_assign(puVar5 + -0x2c,puVar5 + -0x4c,ar6,ar7);
      Vec3_dtor(puVar5 + -0x4c,0xffffffff,ar6,ar7);
      vec3_copy_8c02b5fc(puVar5 + -0x58,*(undefined4 *)(puVar5 + -0x104),ar6,ar7);
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0x68;
      FUN_8c023484(puVar5 + -0x2c,puVar5 + -0x58,ar6,ar7,*(undefined4 *)(puVar5 + -0x108));
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0x78;
      Vec3_add(puVar5 + -0x68,ar5,ar6,ar7,*(undefined4 *)(puVar5 + -0x108));
      Vec3_assign(puVar5 + -0x2c,puVar5 + -0x78,ar6,ar7);
      Vec3_dtor(puVar5 + -0x78,0xffffffff,ar6,ar7);
      Vec3_dtor(puVar5 + -0x68,0xffffffff,ar6,ar7);
      object_dtor_delete(puVar5 + -0x58,0xffffffff,ar6,ar7);
      ar6 = *(undefined4 *)(ar4 + 0x294);
      uVar2 = (**(code **)(*a4 + 0x100))(a4,uVar3,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xe0) = uVar2;
      iVar1 = *(int *)(puVar5 + -0xe0);
      if (iVar1 != 0) {
        FUN_8c036988(iVar1,uVar3,ar6,ar7);
      }
      Vec3_ctor_xyz(puVar5 + -0x88,uVar3,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xf4) = *(undefined4 *)(ar4 + 0x294);
      Vec3_set_xyz(puVar5 + -0x94,uVar3,ar6,ar7);
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0xa4;
      FUN_8c023484(puVar5 + -0x88,puVar5 + -0x94,ar6,ar7,*(undefined4 *)(puVar5 + -0x108));
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0xb4;
      Vec3_scale(puVar5 + -0xa4,&DAT_8c1379c0,ar6,ar7,*(undefined4 *)(puVar5 + -0x108));
      Vec3_ctor_copy(puVar5 + -0x3c,puVar5 + -0xb4,ar6,ar7);
      Vec3_dtor(puVar5 + -0xb4,0xffffffff,ar6,ar7);
      Vec3_dtor(puVar5 + -0xa4,0xffffffff,ar6,ar7);
      object_dtor_delete(puVar5 + -0x94,0xffffffff,ar6,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(puVar5 + -0x88,0xffffffff,ar6,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7,*(undefined4 *)(puVar5 + -0x104));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar5 + -0xe4) = (int)((ulonglong)uVar8 >> 0x20);
        dVar7 = (double)CONCAT44(0x42f40000,*(undefined4 *)(puVar5 + -0xe4));
      }
      else {
        *(undefined8 *)(puVar5 + -0xe4) = uVar8;
        in_xd0 = *(undefined8 *)(puVar5 + -0xe4);
        dVar7 = -8.406882663868896e-251;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(0x42f00000,fVar6);
      }
      else {
        dVar7 = -7.95866521996774e-251;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar5 + -0xc0) = fVar6;
      }
      else {
        *(undefined8 *)(puVar5 + -0xc0) = in_xd0;
      }
      FUN_8c023bf4(puVar5 + -0x3c,puVar5 + -0xc0,ar6,ar7);
      ar5_01 = puVar5 + -0x3c;
      FUN_8c023aa0(puVar5 + -0x2c,ar5_01,ar6,ar7);
      FUN_8c036988(iVar1,ar5_01,ar6,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(puVar5 + -0x3c,0xffffffff,ar6,ar7);
    }
    else {
      vec3_clear(puVar5 + -0x2c,uVar3,ar6,ar7);
    }
    uVar2 = FUN_8c03f3ac(ar4 + 0xb0,uVar3,ar6,ar7);
    *(undefined4 *)(puVar5 + -0xe8) = uVar2;
    if (*(int *)(puVar5 + -0xe8) == 7) {
      if (in_FPSCR_PR == '\0') {
        iVar1 = (int)in_fr15;
      }
      else {
        iVar1 = (int)(double)CONCAT44(in_fr14,in_fr15);
      }
      if (iVar1 == 0xa5) {
        uVar3 = 6;
        FUN_8c033474(ar4,6,ar5,a4);
        ar6 = ar5;
        ar7 = a4;
      }
      *(int *)(puVar5 + -0xf8) = ar4;
      *(undefined4 *)(puVar5 + -0xfc) = *(undefined4 *)(*(int *)(puVar5 + -0xf8) + 0x294);
      *(int *)(*(int *)(puVar5 + -0xf8) + 0x294) = *(int *)(puVar5 + -0xfc) + 1;
      if (*(int *)(puVar5 + -0xfc) + 1 < 6) {
        *(undefined4 *)(ar4 + 0x290) = *(undefined4 *)(ar4 + 0x294);
      }
      else {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
        *(int *)(puVar5 + -0x100) = ar4;
        *(int *)(*(int *)(puVar5 + -0x100) + 300) = *(int *)(*(int *)(puVar5 + -0x100) + 300) + 1;
      }
    }
  }
  else if (iVar1 == 2) {
    uVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6,ar7);
    *(undefined4 *)(puVar5 + -0xec) = uVar2;
    if (*(int *)(puVar5 + -0xec) == 1) {
      uVar4 = 0;
      FUN_8c03c314(ar4,uVar3,ar6,ar7);
      *(undefined4 *)(ar4 + 0x214) = 1;
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x178) = 0;
    }
  }
  *(undefined4 *)(puVar5 + -0xbc) = uVar4;
  Vec3_dtor(puVar5 + -0x2c,0xffffffff,ar6,ar7);
  return *(undefined4 *)(puVar5 + -0xbc);
}

__asm__(".globl _FUN_8c07e828\n.set _FUN_8c07e828, _FUN_8c07e828_def\n");
