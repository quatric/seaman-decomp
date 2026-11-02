#include "../decls.h"
undefined4 FUN_8c058d60_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  code *ar5_00;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  double dVar6;
  float fVar7;
  char cVar8;
  char cVar9;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
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
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  ar5_00 = Vec3_ctor_zero;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_20,Vec3_ctor_zero,ar6,ar7);
  Vec3_ctor_zero(auStack_30,ar5_00,ar6_00,ar7_00);
  Vec3_assign(auStack_30,ar6,ar6_00,ar7_00);
  *(undefined4 *)(ar4 + 0x178) = 1;
  iVar1 = *(int *)(ar4 + 300);
  if ((iVar1 < 7) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      *(undefined4 *)(ar4 + 0x214) = 0;
      ar6_00 = (undefined1 *)(ar4 + 0x34c);
      iVar1 = FUN_8c055c38(ar4,ar5,ar6_00,ar7);
      ar7_00 = ar7;
      if (iVar1 == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
      break;
    case 1:
      uVar3 = ar5;
      iVar1 = FUN_8c057164(ar4,ar5,ar6_00,ar7_00);
      if (iVar1 == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x40) = 5;
        FUN_8c0230f0(auStack_30,uVar3,ar6_00,ar7_00,auStack_40);
        FUN_8c0230f0(ar5,uVar3,ar6_00,ar7_00,auStack_50);
        puVar2 = auStack_50;
        Vec3_sub(auStack_40,puVar2,ar6_00,ar7_00,auStack_60);
        Vec3_normalize(auStack_60,puVar2,ar6_00,ar7_00);
        Vec3_assign(ar4 + 0x54,auStack_70,ar6_00,ar7_00);
        Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_50,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_40,0xffffffff,ar6_00,ar7_00);
        Vec3_scale(ar4 + 0x54,&DAT_8c1365f0,ar6_00,ar7_00,auStack_80);
        Vec3_sub(auStack_30,auStack_80,ar6_00,ar7_00,auStack_90);
        Vec3_assign(ar4 + 0x248,auStack_90,ar6_00,ar7_00);
        Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_80,0xffffffff,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x250));
        }
        else {
          dVar6 = *(double *)(ar4 + 0x48);
        }
        if (cVar8 == '\0') {
          fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar6 - dVar6,0);
        }
        if (cVar8 != '\0' || fVar5 <= 0.0) {
          Vec3_assign(ar4 + 0x248,ar5,ar6_00,ar7_00);
        }
        *(undefined4 *)(ar4 + 700) = 1;
      }
      break;
    case 2:
      FUN_8c0230f0(auStack_30,ar6,ar6_00,ar7_00,auStack_a0);
      FUN_8c0230f0(ar5,ar6,ar6_00,ar7_00,auStack_b0);
      puVar2 = auStack_b0;
      Vec3_sub(auStack_a0,puVar2,ar6_00,ar7_00,auStack_c0);
      Vec3_normalize(auStack_c0,puVar2,ar6_00,ar7_00);
      Vec3_assign(ar4 + 0x54,auStack_d0,ar6_00,ar7_00);
      Vec3_dtor(auStack_d0,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_c0,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_b0,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_a0,0xffffffff,ar6_00,ar7_00);
      Vec3_ctor_copy(auStack_e0,ar4 + 0x54,ar6_00,ar7_00);
      ar7_00 = auStack_e0;
      ar6_00 = (undefined1 *)(ar4 + 0x248);
      iVar1 = FUN_8c04e0e0(ar4,ar5,ar6_00,ar7_00);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_e0,0xffffffff,ar6_00,ar7_00);
      if (iVar1 == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        FUN_8c030f2c(ar4 + 0x1fc,uVar3,ar6_00,ar7_00);
        *(undefined4 *)(ar4 + 0x2e8) = 1;
      }
      break;
    case 3:
      ar7_00 = (undefined1 *)0x1d;
      ar6_00 = auStack_30;
      iVar1 = FUN_8c058024(ar4,ar5,ar6_00,0x1d);
      if (iVar1 == 0) {
        FUN_8c022d04(ar4 + 0x2a8,ar5,ar6_00,ar7_00);
        FUN_8c022d04(ar4 + 0x2d4,ar5,ar6_00,ar7_00);
        *(undefined4 *)(ar4 + 700) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      *(undefined4 *)(ar4 + 0x2e8) = 1;
      break;
    case 4:
      Vec3_ctor_xyz(auStack_f0,ar6,ar6_00,ar7_00);
      Vec3_add(ar5,auStack_f0,ar6_00,ar7_00,auStack_100);
      ar6_00 = auStack_100;
      FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00);
      Vec3_dtor(auStack_100,0xffffffff,ar6_00,ar7_00);
      ar6 = (undefined1 *)0xffffffff;
      Vec3_dtor(auStack_f0,0xffffffff,ar6_00,ar7_00);
      FUN_8c032ab0(ar4,ar6,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x278) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(undefined8 *)(ar4 + 0x278) = in_dr0;
      }
      *(undefined4 *)(ar4 + 800) = 0;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 5:
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      iVar1 = FUN_8c057e58(ar4,ar6,ar6_00,ar7_00);
      if (iVar1 == 0) {
        ar7_00 = (undefined1 *)0x0;
        ar6_00 = (undefined1 *)0xffffffff;
        uVar3 = 0x1a;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_00);
        FUN_8c0230f0(ar4 + 0x14,uVar3,ar6_00,ar7_00,auStack_110);
        Vec3_ctor_xyz(auStack_120,uVar3,ar6_00,ar7_00);
        FUN_8c022dac(auStack_110,auStack_120,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          fVar7 = 2.0;
        }
        else {
          fVar5 = 2.0;
          fVar7 = 8.319336e+12;
        }
        Vec3_dtor(auStack_120,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_110,0xffffffff,ar6_00,ar7_00);
        if (cVar8 != '\0' || fVar5 <= fVar7) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
        else {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + -1;
        }
      }
      break;
    case 6:
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar6_00,ar7_00);
      *(undefined4 *)(ar4 + 0x2e8) = 1;
      uVar4 = 0;
    }
  }
  Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7_00);
  return uVar4;
}

__asm__(".globl _FUN_8c058d60\n.set _FUN_8c058d60, _FUN_8c058d60_def\n");
