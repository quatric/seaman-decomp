#include "../decls.h"
undefined4 FUN_8c0593cc_def(int ar4,int *ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *ar6_00;
  undefined1 *puVar7;
  uint ar7_00;
  uint ar7_01;
  undefined4 ar7_02;
  undefined4 uVar8;
  float fVar9;
  undefined8 in_dr0;
  undefined8 uVar10;
  double dVar11;
  float fVar12;
  undefined8 in_xd0;
  char cVar13;
  char cVar14;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  undefined4 in_stack_fffffe9c;
  uint uStack_100;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  cVar14 = '\0';
  cVar13 = '\0';
  uVar8 = 1;
  ar7_00 = ar7;
  Vec3_ctor_copy(auStack_30,in_stack_00000000,ar6,ar7);
  *(undefined4 *)(ar4 + 0x178) = 1;
  uVar5 = 1;
  *(undefined4 *)(ar4 + 0x2e8) = 1;
  iVar1 = *(int *)(ar4 + 300);
  if ((iVar1 < 7) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      FUN_8c030f2c(ar4 + 0x1fc,in_stack_00000000,1,ar7_00);
      Vec3_ctor_xyz(auStack_40,in_stack_00000000,uVar5,ar7_00);
      Vec3_add(ar7,auStack_40,uVar5,ar7_00,auStack_50);
      puVar7 = auStack_50;
      FUN_8c057b6c(ar4,ar7,puVar7,ar7_00);
      Vec3_dtor(auStack_50,0xffffffff,puVar7,ar7_00);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_40,0xffffffff,puVar7,ar7_00);
      FUN_8c032ab0(ar4,uVar2,puVar7,ar7_00);
      if (cVar14 == '\0') {
        *(int *)(ar4 + 0x278) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(undefined8 *)(ar4 + 0x278) = in_dr0;
      }
      uVar5 = 0;
      *(undefined4 *)(ar4 + 800) = 0;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      if (in_stack_00000004 == 0x1c) {
        uVar5 = 0x100;
        uVar2 = 0;
        iVar1 = rand_range(ar4,0,0x100,ar7_00);
        if (iVar1 == 0) {
          FUN_8c022d04(ar4 + 0x2a8,uVar2,uVar5,ar7_00);
          FUN_8c022d04(ar4 + 0x2d4,uVar2,uVar5,ar7_00);
          *(undefined4 *)(ar4 + 300) = 5;
          uVar6 = 0;
          uVar2 = 0xffffffff;
          uVar5 = 0x20;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x20,0xffffffff,0);
          *(undefined4 *)(ar4 + 0x218) = 5;
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6);
          break;
        }
      }
      uVar6 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      FUN_8c0230f0(ar4 + 0x14,uVar2,uVar5,ar7_00,auStack_60);
      Vec3_ctor_xyz(auStack_70,uVar2,uVar5,ar7_00);
      FUN_8c022dac(auStack_60,auStack_70,uVar5,ar7_00);
      if (cVar14 == '\0') {
        in_dr0 = CONCAT44(0x40000000,uVar6);
      }
      else {
        in_dr0 = 0x8c022cb040000000;
      }
      ar7_01 = (uint)(cVar13 == '\0' && (float)in_dr0 < (float)((ulonglong)in_dr0 >> 0x20));
      ar7_00 = ar7_01;
      Vec3_dtor(auStack_70,0xffffffff,uVar5,ar7_01);
      in_stack_00000000 = 0xffffffff;
      Vec3_dtor(auStack_60,0xffffffff,uVar5,ar7_00);
      if (ar7_01 != 0) {
        *(undefined4 *)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(ar4 + 300) = 2;
        vec3_clear(ar4 + 0x2a8,in_stack_00000000,uVar5,ar7_00);
        pcVar4 = vec3_clear;
        vec3_clear(ar4 + 0x2d4,vec3_clear,uVar5,ar7_00);
        if (in_stack_00000004 == 0x1d) {
          uVar2 = (**(code **)(*ar5 + 0x10c))(ar5,pcVar4,uVar5,ar7_00);
          FUN_8c0d98d4(uVar2,pcVar4,uVar5,ar7_00);
        }
        break;
      }
    case 1:
      fVar9 = (float)((ulonglong)in_dr0 >> 0x20);
      iVar1 = FUN_8c057e58(ar4,in_stack_00000000,uVar5,ar7_00);
      if (iVar1 == 0) {
        FUN_8c0230f0(ar4 + 0x14,in_stack_00000000,uVar5,ar7_00,auStack_80);
        Vec3_ctor_xyz(auStack_90,in_stack_00000000,uVar5,ar7_00);
        FUN_8c022dac(auStack_80,auStack_90,uVar5,ar7_00);
        if (cVar14 == '\0') {
          pcVar4 = (code *)0x40000000;
        }
        else {
          fVar9 = 2.0;
          pcVar4 = Vec3_dtor;
        }
        Vec3_dtor(auStack_90,0xffffffff,uVar5,ar7_00);
        Vec3_dtor(auStack_80,0xffffffff,uVar5,ar7_00);
        if (cVar13 != '\0' || fVar9 <= (float)(uint)pcVar4) {
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          uVar5 = 300;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          iVar1 = ar4;
          vec3_clear(ar4 + 0x2a8,300,ar4,ar7_00);
          vec3_clear(ar4 + 0x2d4,uVar5,iVar1,ar7_00);
          if (in_stack_00000004 == 0x1d) {
            uVar2 = (**(code **)(*ar5 + 0x10c))(ar5,uVar5,iVar1,ar7_00);
            FUN_8c0d98d4(uVar2,uVar5,iVar1,ar7_00);
          }
        }
        else {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + -1;
        }
      }
      break;
    case 2:
      if (in_stack_00000004 == 0x1c) {
        uVar5 = 0x1c;
        puVar7 = auStack_30;
        iVar1 = FUN_8c058024(ar4,ar7,puVar7,0x1c);
        if (iVar1 == 0) {
          FUN_8c03c314(ar4,ar7,puVar7,uVar5);
          FUN_8c022d04(ar4 + 0x2a8,ar7,puVar7,uVar5);
          *(undefined4 *)(ar4 + 0x2e8) = 0;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          uVar6 = 0;
          uVar2 = 0xffffffff;
          uVar5 = 0x1a;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6);
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          FUN_8c03f39c(ar6,uVar5,uVar2,uVar6);
        }
      }
      else if (in_stack_00000004 == 0x1d) {
        uVar5 = 0x1d;
        iVar1 = FUN_8c058024(ar4,ar7,auStack_30,0x1d);
        if (iVar1 == 0) {
          if (cVar14 == '\0') {
            uVar10 = CONCAT44(*(undefined4 *)(ar7 + 4),(int)in_dr0);
          }
          else {
            uVar10 = *(undefined8 *)(ar7 + 4);
          }
          uVar2 = 0x2a8;
          FUN_8c022d04(ar4 + 0x2a8,FUN_8c022d04,0x2a8,uVar5);
          (**(code **)(*ar5 + 0x128))(ar5,ar7,uVar2,uVar5);
          if (cVar14 == '\0') {
            dVar11 = (double)CONCAT44(*(undefined4 *)(ar7 + 4),(int)((ulonglong)uVar10 >> 0x20));
            uVar10 = in_xd0;
          }
          else {
            dVar11 = *(double *)(ar7 + 4);
          }
          if (cVar13 == '\0') {
            fVar9 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
          }
          else {
            fVar9 = SUB84(dVar11 - dVar11,0);
          }
          if (cVar14 == '\0') {
            *(float *)(ar4 + 0x2ac) = fVar9;
          }
          else {
            *(undefined8 *)(ar4 + 0x2ac) = uVar10;
          }
          uVar6 = 0;
          uVar2 = 0xffffffff;
          uVar5 = 0x25;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x25,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6);
          *(undefined4 *)(ar4 + 0x2e8) = 2;
          *(undefined4 *)(ar4 + 300) = 6;
          Vec3_ctor_xyz(auStack_a0,uVar5,uVar2,uVar6);
          Vec3_add(ar7,auStack_a0,uVar2,uVar6,auStack_b0);
          puVar7 = auStack_b0;
          FUN_8c057b6c(ar4,ar7,puVar7,uVar6);
          Vec3_dtor(auStack_b0,0xffffffff,puVar7,uVar6);
          uVar5 = 0xffffffff;
          Vec3_dtor(auStack_a0,0xffffffff,puVar7,uVar6);
          FUN_8c030eb8(ar4 + 0x1fc,uVar5,puVar7,uVar6);
        }
      }
      else if (in_stack_00000004 == 0x31) {
        uVar5 = 0x1c;
        puVar7 = auStack_30;
        iVar1 = FUN_8c058024(ar4,ar7,puVar7,0x1c);
        if (iVar1 == 0) {
          FUN_8c03c314(ar4,ar7,puVar7,uVar5);
          FUN_8c022d04(ar4 + 0x2a8,ar7,puVar7,uVar5);
          *(undefined4 *)(ar4 + 0x2e8) = 0;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          uVar2 = 0;
          uVar5 = 0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
          iVar1 = ar4 + 0xb0;
          s_CAnimBody_SetFrame_033e6e(iVar1,iVar1,uVar5,uVar2);
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          FUN_8c03f39c(ar6,iVar1,uVar5,uVar2);
        }
      }
      break;
    case 3:
      uVar5 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x26,0xffffffff,0);
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      *(undefined4 *)(ar4 + 0x178) = 0;
      *(undefined4 *)(ar4 + 700) = 0;
      *(undefined4 *)(ar4 + 300) = 0;
      pcVar4 = FUN_8c022d04;
      FUN_8c022d04(ar4 + 0x2d4,0x2d4,FUN_8c022d04,uVar5);
      FUN_8c022d04(ar4 + 0x2a8,ar4 + 0x2a8,pcVar4,uVar5);
      uVar8 = 0;
      *(undefined4 *)(ar4 + 0x2e8) = 2;
      break;
    case 4:
      FUN_8c030eb8(ar4 + 0x1fc,in_stack_00000000,1,ar7_00);
      uVar5 = 0x1c;
      iVar1 = FUN_8c058024(ar4,ar7,auStack_30,0x1c);
      if (iVar1 == 0) {
        *(undefined4 *)(ar4 + 0x2e8) = 2;
        *(undefined4 *)(ar4 + 700) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + -1;
        FUN_8c022d04(ar4 + 0x2a8,ar4,0,uVar5);
        uVar6 = 0;
        uVar2 = 0xffffffff;
        uVar5 = 0x1a;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
        *(undefined4 *)(ar4 + 0x218) = 4;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6);
        *(undefined4 *)(ar4 + 0x2b8) = 2;
      }
      break;
    case 5:
      s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,in_stack_00000000,1,ar7_00);
      fVar9 = (float)((ulonglong)in_dr0 >> 0x20);
      CAnimBody_GetCurFrame(ar4 + 0xb0,CAnimBody_GetCurFrame,uVar5,ar7_00,in_stack_fffffe9c);
      if (cVar14 == '\0') {
        fVar12 = 113.0;
      }
      else {
        fVar9 = 113.0;
        fVar12 = 1.04257e-42;
      }
      if (cVar13 != '\0' || fVar12 <= fVar9) {
        *(undefined4 *)(ar4 + 0x2e8) = 1;
        ar7_02 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x55;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x55,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar6,ar7_02);
        FUN_8c022d04(ar4 + 0x2d4,uVar5,uVar6,ar7_02);
        FUN_8c022d04(ar4 + 0x2a8,uVar5,uVar6,ar7_02);
        uVar5 = FUN_8c026db0(ar4,uVar5,uVar6,ar7_02);
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,uVar5,uVar6,ar7_02);
        puVar3 = (undefined4 *)deref_u32(uVar2,uVar5,uVar6,ar7_02);
        uVar5 = puVar3[1];
        *(undefined4 *)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(ar4 + 0xb8) = uVar5;
        *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
        *(undefined4 *)(ar4 + 0x29c) = 1;
        *(undefined4 *)(ar4 + 300) = 4;
      }
      break;
    case 6:
      iVar1 = FUN_8c057e58(ar4,in_stack_00000000,1,ar7_00);
      fVar9 = (float)((ulonglong)in_dr0 >> 0x20);
      if (iVar1 == 0) {
        pcVar4 = FUN_8c0230f0;
        FUN_8c0230f0(ar4 + 0x14,FUN_8c0230f0,uVar5,ar7_00,auStack_c0);
        Vec3_ctor_xyz(auStack_d0,pcVar4,uVar5,ar7_00);
        FUN_8c022dac(auStack_c0,auStack_d0,uVar5,ar7_00);
        if (cVar14 == '\0') {
          pcVar4 = (code *)0x40000000;
        }
        else {
          fVar9 = 2.0;
          pcVar4 = Vec3_dtor;
        }
        Vec3_dtor(auStack_d0,0xffffffff,uVar5,ar7_00);
        ar6_00 = Vec3_dtor;
        Vec3_dtor(auStack_c0,0xffffffff,Vec3_dtor,ar7_00);
        uStack_100 = (uint)(cVar13 == '\0' && fVar9 < (float)(uint)pcVar4);
        if (uStack_100 == 0) {
          puVar7 = auStack_e0;
          Vec3_ctor_xyz(puVar7,0,puVar7,ar7_00);
          Vec3_add(ar7,auStack_e0,puVar7,ar7_00,auStack_f0);
          puVar7 = auStack_f0;
          FUN_8c057b6c(ar4,ar7,puVar7,ar7_00);
          Vec3_dtor(auStack_f0,0xffffffff,puVar7,ar7_00);
          Vec3_dtor(auStack_e0,0xffffffff,puVar7,ar7_00);
        }
        else {
          *(undefined4 *)(ar4 + 800) = 0;
          FUN_8c022d04(ar4 + 0x2d4,uStack_100,ar6_00,ar7_00);
          FUN_8c022d04(ar4 + 0x2a8,uStack_100,ar6_00,ar7_00);
          *(undefined4 *)(ar4 + 700) = 0;
          *(undefined4 *)(ar4 + 300) = 0;
          *(undefined4 *)(ar4 + 0x178) = 0;
          uVar8 = 0;
          *(undefined4 *)(ar4 + 0x2b8) = 2;
        }
      }
    }
  }
  Vec3_dtor(auStack_30,0xffffffff,auStack_30,0xffffffff);
  return uVar8;
}

__asm__(".globl _FUN_8c0593cc\n.set _FUN_8c0593cc, _FUN_8c0593cc_def\n");
