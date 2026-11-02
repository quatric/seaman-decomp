#include "../decls.h"
undefined4 FUN_8c07d048_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *ar5_00;
  undefined4 uVar4;
  undefined *ar6_00;
  undefined4 uVar5;
  undefined1 *ar7_00;
  undefined4 uVar6;
  float fVar7;
  undefined8 in_dr0;
  undefined8 uVar8;
  float fVar10;
  double dVar9;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [12];
  undefined1 auStack_10c [12];
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
  undefined1 auStack_30 [20];
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar7_00 = (undefined1 *)0x0;
  *(undefined4 *)(ar4 + 0x214) = 0;
  ar6_00 = (undefined *)0x1fc;
  uVar4 = ar5;
  FUN_8c030f2c(ar4 + 0x1fc,ar5,0x1fc,0);
  uVar6 = 1;
  Vec3_ctor_zero(auStack_30,uVar4,ar6_00,ar7_00);
  iVar1 = (**(code **)(*ar7 + 0x1d0))(ar7,uVar4,ar6_00,ar7_00);
  iVar2 = (**(code **)(*ar7 + 0x1cc))(ar7,uVar4,ar6_00,ar7_00);
  Vec3_ctor_xyz(auStack_50,uVar4,ar6_00,ar7_00);
  Vec3_add(iVar2 + 4,auStack_50,ar6_00,ar7_00,auStack_60);
  Vec3_assign(auStack_30,auStack_60,ar6_00,ar7_00);
  Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7_00);
  ar5_00 = (undefined1 *)0xffffffff;
  Vec3_dtor(auStack_50,0xffffffff,ar6_00,ar7_00);
  iVar3 = *(int *)(ar4 + 300);
  if ((iVar3 < 6) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      *(undefined4 *)(ar4 + 0x178) = 1;
      Vec3_ctor_xyz(auStack_70,ar5_00,ar6_00,ar7_00);
      Vec3_sub(auStack_30,auStack_70,ar6_00,ar7_00,auStack_80);
      Vec3_assign(ar4 + 0x280,auStack_80,ar6_00,ar7_00);
      Vec3_dtor(auStack_80,0xffffffff,ar6_00,ar7_00);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7_00);
      FUN_8c031748(ar4,uVar4,ar6_00,ar7_00);
      Vec3_ctor_xyz(auStack_90,Vec3_ctor_xyz,ar6_00,ar7_00);
      Vec3_scale(auStack_90,&DAT_8c1379b8,ar6_00,ar7_00,auStack_a0);
      Vec3_add(auStack_30,auStack_a0,ar6_00,ar7_00,auStack_b0);
      Vec3_add(auStack_b0,ar5,ar6_00,ar7_00,auStack_c0);
      Vec3_scale(auStack_c0,&DAT_8c1379bc,ar6_00,ar7_00,auStack_d0);
      Vec3_assign(ar4 + 0x54,auStack_d0,ar6_00,ar7_00);
      Vec3_dtor(auStack_d0,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_c0,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_b0,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_a0,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7_00);
      (**(code **)(*ar7 + 0x128))(ar7,ar4 + 0x54,ar6_00,ar7_00);
      uStack_150 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar12 == '\0') {
        uVar8 = CONCAT44(*(undefined4 *)(ar4 + 0x58),uStack_150);
        in_dr0 = in_xd0;
      }
      else {
        uStack_150 = (undefined4)in_dr0;
        uVar8 = *(undefined8 *)(ar4 + 0x58);
      }
      if (cVar11 == '\0' && (float)((ulonglong)uVar8 >> 0x20) < (float)uVar8) {
        (**(code **)(*ar7 + 0x128))(ar7,ar4 + 0x54,ar6_00,ar7_00);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
          uStack_154 = uVar4;
        }
        else {
          uStack_154 = (undefined4)uVar8;
          in_dr0 = *(undefined8 *)(ar4 + 0x48);
          dVar9 = 6.37129236237323e-312;
          uStack_150 = uVar4;
        }
        if (cVar11 == '\0') {
          fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(uStack_154,fVar7);
        }
        else {
          dVar9 = (double)CONCAT44(uStack_150,uStack_154);
        }
        if (cVar11 == '\0') {
          fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar9 + dVar9,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 0x58) = fVar7;
        }
        else {
          *(undefined8 *)(ar4 + 0x58) = in_dr0;
        }
      }
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 1:
      ar6_00 = (undefined *)(ar4 + 0x54);
      iVar1 = pure_virtual_stub(ar4,ar5,ar6_00,ar7_00);
      if (iVar1 == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      ar5_00 = (undefined1 *)(ar4 + 0x14);
      Vec3_assign(ar4 + 0x80,ar5_00,ar6_00,ar7_00);
      break;
    case 2:
      uVar4 = 1;
      FUN_8c031de8(ar4,1,ar6_00,ar7_00);
      fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
      Vec3_ctor_xyz(auStack_e0,uVar4,ar6_00,ar7_00);
      ar7_00 = auStack_e0;
      ar6_00 = auStack_30;
      iVar2 = FUN_8c032d48(ar4,ar5,ar6_00,ar7_00);
      Vec3_dtor(auStack_e0,0xffffffff,ar6_00,ar7_00);
      if (iVar2 == 0) {
        FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      ar5_00 = (undefined1 *)(ar4 + 0x14);
      Vec3_assign(ar4 + 0x80,ar5_00,ar6_00,ar7_00);
      if (in_stack_00000004 == 0) {
        ar5_00 = auStack_30;
        FUN_8c022fc0(ar5,ar5_00,ar6_00,ar7_00);
        if (cVar12 == '\0') {
          fVar10 = 1000.0;
        }
        else {
          fVar7 = 1000.0;
          fVar10 = 5.26888e-43;
        }
        if ((cVar11 == '\0' && fVar10 < fVar7) && (iVar1 == 0)) {
          uVar6 = 2;
          *(undefined4 *)(ar4 + 300) = 0;
          *(undefined4 *)(ar4 + 0x178) = 0;
        }
      }
      break;
    case 3:
      Vec3_ctor_xyz(auStack_f0,ar5_00,ar6_00,ar7_00);
      ar6_00 = (undefined *)0x1;
      iVar1 = FUN_8c0811b4(ar4,auStack_f0,1,ar7_00);
      ar5_00 = (undefined1 *)0xffffffff;
      Vec3_dtor(auStack_f0,0xffffffff,ar6_00,ar7_00);
      if (iVar1 == 0) {
        Vec3_ctor_xyz(auStack_100,ar5_00,ar6_00,ar7_00);
        Vec3_assign(ar4 + 0x14,auStack_100,ar6_00,ar7_00);
        Vec3_dtor(auStack_100,0xffffffff,ar6_00,ar7_00);
        Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        ar7_00 = (undefined1 *)0x0;
        uVar5 = 0xffffffff;
        uVar4 = 0x27;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x27,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar5,ar7_00);
        ar6_00 = &DAT_8c137888;
        ar5_00 = (undefined1 *)0x27;
        FUN_8c07f1e4(ar4,0x27,&DAT_8c137888,ar7_00);
      }
      break;
    case 4:
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
      if (iVar1 == 1) {
        ar7_00 = (undefined1 *)0x0;
        uVar5 = 0xffffffff;
        uVar4 = 0x28;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x28,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar5,ar7_00);
        ar6_00 = &DAT_8c1378a0;
        ar5_00 = (undefined1 *)0x28;
        FUN_8c07f1e4(ar4,0x28,&DAT_8c1378a0,ar7_00);
        FUN_8c03f39c(ar6,ar5_00,ar6_00,ar7_00);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else {
        vec3_copy_8c02b5fc(auStack_10c,in_stack_00000000,ar6_00,ar7_00);
        FUN_8c07f268(ar4,auStack_10c,ar6_00,ar7_00);
        ar5_00 = (undefined1 *)0xffffffff;
        object_dtor_delete(auStack_10c,0xffffffff,ar6_00,ar7_00);
      }
      break;
    case 5:
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
      if (iVar1 == 1) {
        ar7_00 = (undefined1 *)0x0;
        ar6_00 = (undefined *)0xffffffff;
        uVar4 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00);
        *(undefined4 *)(ar4 + 0x214) = 1;
        FUN_8c030eb8(ar4 + 0x1fc,uVar4,ar6_00,ar7_00);
        Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7_00);
        ar5_00 = (undefined1 *)0x178;
        *(undefined4 *)(ar4 + 0x178) = 0;
        uVar6 = 0;
      }
      else {
        vec3_copy_8c02b5fc(auStack_118,in_stack_00000000,ar6_00,ar7_00);
        FUN_8c07f268(ar4,auStack_118,ar6_00,ar7_00);
        object_dtor_delete(auStack_118,0xffffffff,ar6_00,ar7_00);
        ar5_00 = (undefined1 *)(ar4 + 0x80);
        FUN_8c07f418(ar4,ar5_00,ar6_00,ar7_00);
        CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7_00,ar6);
        fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
        if (cVar12 == '\0') {
          fVar10 = 160.0;
          in_dr0 = in_xd0;
        }
        else {
          fVar7 = 160.0;
          fVar10 = 480.0;
        }
        if (cVar11 == '\0' && fVar10 < fVar7) {
          CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7_00,ar6);
          if (cVar12 == '\0') {
            fVar7 = 480.0;
          }
          else {
            in_dr0 = CONCAT44(fVar10,fVar7);
            fVar10 = 480.0;
            fVar7 = 0.25;
          }
          if (cVar11 == '\0' && fVar10 < fVar7) {
            if (cVar12 == '\0') {
              dVar9 = (double)CONCAT44(0x3e800000,*(undefined4 *)(ar4 + 0x28));
            }
            else {
              in_dr0 = *(undefined8 *)(ar4 + 0x28);
              dVar9 = -0.007812501818989404;
            }
            if (cVar11 == '\0') {
              fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
            }
            else {
              fVar7 = SUB84(dVar9 * dVar9,0);
            }
            if (cVar12 == '\0') {
              *(float *)(ar4 + 0x28) = fVar7;
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = in_dr0;
            }
            Vec3_ctor_xyz(auStack_128,auStack_128,ar6_00,ar7_00);
            Vec3_scale(auStack_128,ar4 + 0x28,ar6_00,ar7_00,auStack_138);
            Vec3_ctor_copy(auStack_40,auStack_138,ar6_00,ar7_00);
            Vec3_dtor(auStack_138,0xffffffff,ar6_00,ar7_00);
            Vec3_dtor(auStack_128,0xffffffff,ar6_00,ar7_00);
            FUN_8c023aa0(iVar2 + 4,auStack_40,ar6_00,ar7_00);
            FUN_8c023aa0(iVar2 + 0x14,auStack_40,ar6_00,ar7_00);
            ar5_00 = (undefined1 *)0xffffffff;
            Vec3_dtor(auStack_40,0xffffffff,ar6_00,ar7_00);
          }
        }
      }
    }
  }
  FUN_8c031700(ar4,ar5_00,ar6_00,ar7_00);
  Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7_00);
  return uVar6;
}

__asm__(".globl _FUN_8c07d048\n.set _FUN_8c07d048, _FUN_8c07d048_def\n");
