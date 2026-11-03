//@unit 8c080890
#include "../decls.h"
uint FUN_8c080890_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  uint uVar3;
  char cVar4;
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
  undefined1 auStack_20 [4];
  undefined8 uStack_1c;
  
  cVar4 = '\0';
  uVar3 = 1;
  uVar1 = (**(code **)(*ar6 + 0x10c))(ar6,ar5,ar6,ar7);
  Vec3_ctor_copy(auStack_20,uVar1,ar6,ar7);
  if (cVar4 == '\0') {
    uStack_1c = CONCAT44((*(uint*)((uchar*)&uStack_1c+4)),0x44570000);
  }
  else {
    uStack_1c = 0x14c44570000;
  }
  Vec3_ctor_xyz(auStack_60,uVar1,ar6,ar7);
  Vec3_add(auStack_20,auStack_60,ar6,ar7,auStack_70);
  Vec3_ctor_copy(auStack_30,auStack_70,ar6,ar7);
  Vec3_dtor(auStack_70,0xffffffff,ar6,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_60,0xffffffff,ar6,ar7);
  Vec3_ctor_xyz(auStack_80,uVar1,ar6,ar7);
  Vec3_add(auStack_20,auStack_80,ar6,ar7,auStack_90);
  Vec3_ctor_copy(auStack_40,auStack_90,ar6,ar7);
  Vec3_dtor(auStack_90,0xffffffff,ar6,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_80,0xffffffff,ar6,ar7);
  Vec3_ctor_xyz(auStack_a0,uVar1,ar6,ar7);
  Vec3_add(auStack_20,auStack_a0,ar6,ar7,auStack_b0);
  Vec3_ctor_copy(auStack_50,auStack_b0,ar6,ar7);
  Vec3_dtor(auStack_b0,0xffffffff,ar6,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_a0,0xffffffff,ar6,ar7);
  iVar2 = *(int *)(ar4 + 300);
  if (iVar2 == 0) {
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6,ar7);
    if (iVar2 == 1) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      ar6 = (int *)0x5;
      ar5_00 = 3;
      uVar1 = rand_range(ar4,3,5,ar7);
      *(undefined4 *)(ar4 + 0x294) = uVar1;
      FUN_8c032ab0(ar4,ar5_00,ar6,ar7);
      FUN_8c032ab0(ar4,ar5_00,ar6,ar7);
      FUN_8c032ab0(ar4,ar5_00,ar6,ar7);
      Vec3_ctor_xyz(auStack_c0,ar5_00,ar6,ar7);
      Vec3_add(auStack_30,auStack_c0,ar6,ar7,auStack_d0);
      Vec3_assign(ar4 + 0x54,auStack_d0,ar6,ar7);
      Vec3_dtor(auStack_d0,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_c0,0xffffffff,ar6,ar7);
    }
  }
  else if (iVar2 == 1) {
    ar6 = (int *)(ar4 + 0x54);
    iVar2 = pure_virtual_stub(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      Vec3_ctor_xyz(auStack_e0,ar5,ar6,ar7);
      Vec3_add(auStack_40,auStack_e0,ar6,ar7,auStack_f0);
      Vec3_assign(ar4 + 0x54,auStack_f0,ar6,ar7);
      Vec3_dtor(auStack_f0,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_e0,0xffffffff,ar6,ar7);
    }
  }
  else if (iVar2 == 2) {
    ar6 = (int *)(ar4 + 0x54);
    iVar2 = pure_virtual_stub(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      Vec3_ctor_xyz(auStack_100,ar5,ar6,ar7);
      Vec3_add(auStack_50,auStack_100,ar6,ar7,auStack_110);
      Vec3_assign(ar4 + 0x54,auStack_110,ar6,ar7);
      Vec3_dtor(auStack_110,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_100,0xffffffff,ar6,ar7);
    }
  }
  else if (iVar2 == 3) {
    ar6 = (int *)(ar4 + 0x54);
    iVar2 = pure_virtual_stub(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      iVar2 = *(int *)(ar4 + 0x294) + -1;
      *(int *)(ar4 + 0x294) = iVar2;
      uVar3 = (uint)(0 < iVar2);
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
    }
  }
  Vec3_dtor(auStack_50,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_40,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c080890\n.set _FUN_8c080890, _FUN_8c080890_def\n");
//@unit 8c080e80
#include "../decls.h"
undefined4 FUN_8c080e80_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *ar6_00;
  undefined4 uVar3;
  undefined4 in_fr1;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined4 in_fr3;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  undefined8 uStack_44;
  int iStack_28;
  int iStack_24;
  code *pcStack_20;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = 1;
  ar6_00 = ar6;
  uVar1 = (**(code **)(*ar6 + 0x10c))(ar6,ar5,ar6,ar7);
  Vec3_ctor_copy(&iStack_28,uVar1,ar6_00,ar7);
  if (cVar8 == '\0') {
    uStack_44 = (double)CONCAT44(0x444d0000,in_fr1);
  }
  else {
    uStack_44 = -8.332610471145132e-251;
    pcStack_20 = FUN_8c031748;
  }
  iStack_24 = 0x444d0000;
  FUN_8c031748(ar4,uVar1,ar6_00,ar7);
  iVar2 = *(int *)(ar4 + 300);
  if (iVar2 == 0) {
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7);
    if (iVar2 == 1) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x294) = 1;
      FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
    }
  }
  else if (iVar2 == 1) {
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44(iStack_28,in_fr3);
      dVar5 = (double)CONCAT44(0x40a00000,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar6 = (double)CONCAT44(iStack_24,iStack_28);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar5 = -0.007812501880835043;
    }
    if (cVar7 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                               SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + dVar5 * dVar5;
    }
    iVar2 = (int)((ulonglong)dVar6 >> 0x20);
    iStack_28 = iVar2;
    if (cVar8 != '\0') {
      iStack_28 = SUB84(dVar6,0);
      iStack_24 = iVar2;
    }
    ar6_00 = &iStack_28;
    iVar2 = pure_virtual_stub(ar4,ar5,ar6_00,ar7);
    if (iVar2 == 0) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
      if (*(int *)(ar4 + 0x128) == 7) {
        if (cVar8 == '\0') {
          dVar6 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x48);
          dVar6 = 0.0008789064584561856;
        }
        if (cVar7 == '\0') {
          fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar6 * dVar6,0);
        }
        if (cVar8 == '\0') {
          *(float *)(ar4 + 0x48) = fVar4;
        }
        else {
          *(undefined8 *)(ar4 + 0x48) = in_xd0;
        }
      }
      else {
        if (cVar8 == '\0') {
          dVar6 = (double)CONCAT44(0x3f4ccccd,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x48);
          dVar6 = -1.2917774888121279e-250;
        }
        if (cVar7 == '\0') {
          fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar6 * dVar6,0);
        }
        if (cVar8 == '\0') {
          *(float *)(ar4 + 0x48) = fVar4;
        }
        else {
          *(undefined8 *)(ar4 + 0x48) = in_xd0;
        }
      }
    }
  }
  else if (iVar2 == 2) {
    ar6_00 = &iStack_28;
    iVar2 = pure_virtual_stub(ar4,ar5,ar6_00,ar7);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      uVar1 = (**(code **)(*ar6 + 0x10c))(ar6,ar5,ar6_00,ar7);
      FUN_8c0d9898(uVar1,ar5,ar6_00,ar7);
      FUN_8c032ab0(ar4,ar5,ar6_00,ar7);
      if (cVar8 == '\0') {
        uStack_44 = (double)CONCAT44(uVar1,(int)((ulonglong)uStack_44 >> 0x20));
        dVar6 = (double)CONCAT44(0x3ccccccd,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
        dVar6 = -8.39273668135511e-251;
      }
      if (cVar7 == '\0') {
        fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar8 == '\0') {
        uStack_44 = (double)CONCAT44((undefined4)uStack_44,-fVar4);
      }
      if (cVar7 == '\0') {
        fVar4 = SUB84(uStack_44,0) * (float)((ulonglong)uStack_44 >> 0x20);
      }
      else {
        fVar4 = SUB84(uStack_44 * uStack_44,0);
      }
      if (cVar8 == '\0') {
        *(float *)(ar4 + 0x28) = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
    }
  }
  else if (iVar2 == 3) {
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7);
    if (iVar2 == 1) {
      ar7 = 0;
      ar6_00 = (int *)0xffffffff;
      uVar1 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
    }
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar6 = -8.625516738351765e-251;
    }
    if (cVar7 == '\0') {
      fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x28) = fVar4;
      fVar4 = *(float *)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd0;
    }
    if (cVar7 != '\0' || 0.0 <= fVar4) {
      *(undefined4 *)(ar4 + 300) = 2;
      *(undefined4 *)(ar4 + 0x40) = 5;
      iVar2 = *(int *)(ar4 + 0x294) + -1;
      *(int *)(ar4 + 0x294) = iVar2;
      if (iVar2 < 1) {
        *(undefined4 *)(ar4 + 300) = 0;
        uVar3 = 0;
        FUN_8c03c314(ar4,uVar1,ar6_00,ar7);
        FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7);
      }
    }
  }
  Vec3_dtor(&iStack_28,0xffffffff,ar6_00,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c080e80\n.set _FUN_8c080e80, _FUN_8c080e80_def\n");
//@unit 8c0811b4
#include "../decls.h"
undefined4 FUN_8c0811b4_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 ar7_00;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  float fVar13;
  double dVar14;
  double in_dr14;
  undefined8 in_xd0;
  double in_xd14;
  double dVar15;
  double dVar16;
  bool bVar17;
  undefined4 in_PR;
  char cVar18;
  char cVar19;
  undefined1 auStack_fc [16];
  undefined1 auStack_ec [12];
  undefined1 auStack_e0 [12];
  undefined1 auStack_d4 [16];
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar19 = '\0';
  cVar18 = '\0';
  uStack_10 = 1;
  uVar11 = 1;
  uVar7 = ar5;
  iVar2 = ar6;
  uStack_14 = in_PR;
  Vec3_set_zero(&uStack_20,ar5,ar6,ar7);
  pcVar8 = Vec3_set_zero;
  Vec3_set_zero(&fStack_2c,uVar7,ar6,Vec3_set_zero);
  pcVar4 = Vec3_ctor_zero;
  Vec3_ctor_zero(auStack_3c,Vec3_ctor_zero,ar6,pcVar8);
  Vec3_ctor_zero(auStack_4c,pcVar4,ar6,pcVar8);
  if (cVar19 == '\0') {
    dVar14 = (double)CONCAT44(0x3f7d70a4,*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x28);
    dVar14 = 7.98396688937273e-312;
  }
  if (cVar18 == '\0') {
    fVar13 = (float)((ulonglong)dVar14 >> 0x20);
    dVar14 = (double)CONCAT44(fVar13,SUB84(dVar14,0) * fVar13);
  }
  else {
    dVar14 = dVar14 * dVar14;
  }
  if (cVar19 == '\0') {
    *(int *)(ar4 + 0x28) = SUB84(dVar14,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = in_xd0;
  }
  FUN_8c0230f0(ar4 + 0x14,pcVar4,ar6,pcVar8,auStack_5c);
  pcVar5 = FUN_8c082378;
  FUN_8c082378(ar4,auStack_5c,FUN_8c082378,pcVar8);
  pcVar4 = (code *)0xffffffff;
  Vec3_dtor(auStack_5c,0xffffffff,pcVar5,pcVar8);
  iVar3 = *(int *)(ar4 + 0x2b0);
  if (iVar3 == 0) {
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar4,pcVar5,pcVar8);
    if (iVar2 == 1) {
      *(int *)(ar4 + 0x2b0) = *(int *)(ar4 + 0x2b0) + 1;
    }
  }
  else {
    if (iVar3 == 1) {
      FUN_8c0230f0(ar4 + 0x14,pcVar4,pcVar5,pcVar8,auStack_6c);
      FUN_8c022dac(auStack_6c,ar5,pcVar5,pcVar8);
      dVar15 = dVar14;
      if (cVar19 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   (int)((ulonglong)dVar14 >> 0x20));
        dVar15 = in_xd14;
      }
      Vec3_dtor(auStack_6c,0xffffffff,pcVar5,pcVar8);
      uVar7 = ar5;
      uVar10 = FUN_8c023334(ar4 + 0x14,ar5,pcVar5,pcVar8);
      *(undefined4 *)(ar4 + 0x220) = uVar10;
      Vec3_ctor_xyz(auStack_7c,uVar7,pcVar5,pcVar8);
      Vec3_assign(auStack_4c,auStack_7c,pcVar5,pcVar8);
      Vec3_dtor(auStack_7c,0xffffffff,pcVar5,pcVar8);
      if (iVar2 == 1) {
        pcVar5 = Vec3_assign;
        Vec3_assign(auStack_4c,ar5,Vec3_assign,pcVar8);
      }
      else {
        if (cVar19 == '\0') {
          dVar14 = (double)CONCAT44(0x41200000,SUB84(dVar14,0));
        }
        else {
          dVar14 = 1.29071326503144e-311;
        }
        fVar13 = SUB84(in_dr14,0);
        if (cVar18 == '\0') {
          bVar17 = (float)((ulonglong)dVar14 >> 0x20) < fVar13;
        }
        else {
          bVar17 = dVar14 < in_dr14;
        }
        if (!bVar17) {
          *(undefined4 *)(ar4 + 0x260) = 0;
          *(undefined4 *)(ar4 + 0x2b0) = 0;
          uVar11 = 0;
          uVar7 = 0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          Vec3_dtor(auStack_4c,0xffffffff,uVar7,uVar11);
          Vec3_dtor(auStack_3c,0xffffffff,uVar7,uVar11);
          object_dtor_delete(&fStack_2c,0xffffffff,uVar7,uVar11);
          object_dtor_delete(&uStack_20,0xffffffff,uVar7,object_dtor_delete);
          return 0;
        }
        if (cVar19 == '\0') {
          dVar14 = (double)CONCAT44(0x42960000,SUB84(dVar14,0));
        }
        else {
          dVar14 = 8.3237428396117e-312;
        }
        if (cVar18 == '\0') {
          bVar17 = (float)((ulonglong)dVar14 >> 0x20) < fVar13;
        }
        else {
          bVar17 = dVar14 < in_dr14;
        }
        if (bVar17) {
          if (cVar19 == '\0') {
            dVar14 = (double)CONCAT44(0x42d20000,SUB84(dVar14,0));
          }
          else {
            dVar14 = 1.29072731755484e-311;
          }
          if (cVar18 == '\0') {
            bVar17 = (float)((ulonglong)dVar14 >> 0x20) < fVar13;
          }
          else {
            bVar17 = dVar14 < in_dr14;
          }
          if (!bVar17) {
            *(undefined4 *)(ar4 + 0x260) = *(undefined4 *)(ar4 + 0x220);
            *(undefined4 *)(ar4 + 0x2b0) = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
            if (*(int *)(ar4 + 0x260) == 3) {
              uVar10 = 0;
              uVar11 = 0xffffffff;
              uVar7 = 5;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
            }
            else if (*(int *)(ar4 + 0x260) == 4) {
              uVar10 = 0;
              uVar11 = 0xffffffff;
              uVar7 = 6;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0xffffffff,0);
            }
            else {
              uVar10 = 0;
              uVar11 = 0xffffffff;
              uVar7 = 0;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
            }
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar11,uVar10);
            Vec3_dtor(auStack_4c,0xffffffff,uVar11,uVar10);
            Vec3_dtor(auStack_3c,0xffffffff,uVar11,uVar10);
            object_dtor_delete(&fStack_2c,0xffffffff,uVar11,uVar10);
            object_dtor_delete(&uStack_20,0xffffffff,uVar11,uVar10);
            return 0;
          }
          Vec3_assign(auStack_4c,ar5,pcVar5,pcVar8);
          if (*(int *)(ar4 + 0x220) == 3) {
            Vec3_set_xyz(auStack_88,ar5,pcVar5,pcVar8);
            FUN_8c023484(auStack_4c,auStack_88,pcVar5,pcVar8,auStack_98);
            Vec3_assign(auStack_4c,auStack_98,pcVar5,pcVar8);
            Vec3_dtor(auStack_98,0xffffffff,pcVar5,pcVar8);
            uVar7 = 0xffffffff;
            object_dtor_delete(auStack_88,0xffffffff,pcVar5,pcVar8);
          }
          else {
            Vec3_set_xyz(auStack_a4,ar5,pcVar5,pcVar8);
            FUN_8c023484(auStack_4c,auStack_a4,pcVar5,pcVar8,auStack_b4);
            Vec3_assign(auStack_4c,auStack_b4,pcVar5,pcVar8);
            Vec3_dtor(auStack_b4,0xffffffff,pcVar5,pcVar8);
            uVar7 = 0xffffffff;
            pcVar5 = object_dtor_delete;
            object_dtor_delete(auStack_a4,0xffffffff,object_dtor_delete,pcVar8);
          }
          Vec3_normalize(auStack_4c,uVar7,pcVar5,pcVar8);
          Vec3_assign(auStack_4c,auStack_c4,pcVar5,pcVar8);
          ar5 = 0xffffffff;
          Vec3_dtor(auStack_c4,0xffffffff,pcVar5,pcVar8);
          *(undefined4 *)(ar4 + 0x260) = *(undefined4 *)(ar4 + 0x220);
        }
        else {
          pcVar5 = Vec3_assign;
          Vec3_assign(auStack_4c,ar5,Vec3_assign,pcVar8);
          *(undefined4 *)(ar4 + 0x260) = 0;
        }
      }
      FUN_8c0230f0(ar4 + 0x14,ar5,pcVar5,pcVar8,auStack_d4);
      FUN_8c022dac(auStack_d4,auStack_4c,pcVar5,pcVar8);
      dVar16 = dVar14;
      if (cVar19 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   (int)((ulonglong)dVar14 >> 0x20));
        dVar16 = dVar15;
      }
      Vec3_dtor(auStack_d4,0xffffffff,pcVar5,pcVar8);
      uVar10 = SUB84(dVar14,0);
      uVar7 = FUN_8c023334(ar4 + 0x14,auStack_4c,pcVar5,pcVar8);
      *(undefined4 *)(ar4 + 0x220) = uVar7;
      if (cVar19 == '\0') {
        dVar14 = (double)CONCAT44(0x42b40000,uVar10);
      }
      else {
        dVar14 = 6.28663659401089e-312;
      }
      if (cVar18 == '\0') {
        bVar17 = SUB84(in_dr14,0) < (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        bVar17 = in_dr14 < dVar14;
      }
      if (bVar17) {
        if (*(int *)(ar4 + 0x128) < 2) {
          uVar11 = 0;
          *(undefined4 *)(ar4 + 0x2b0) = 0;
          goto LAB_8c0822ea;
        }
        if (*(int *)(ar4 + 0x128) == 2) {
          if (*(int *)(ar4 + 0x220) == 3) {
            uVar10 = 0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 9;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
            uVar6 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,pcVar8,uVar10);
            uVar10 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,uVar10);
            pcVar5 = deref_u32;
            puVar1 = (undefined4 *)deref_u32(uVar10,uVar7,pcVar8,deref_u32);
            uVar7 = puVar1[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c137618;
          }
          else {
            uVar9 = 0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 10;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0);
            uVar6 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,pcVar8,uVar9);
            uVar10 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,uVar9);
            puVar1 = (undefined4 *)deref_u32(uVar10,uVar7,pcVar8,uVar9);
            pcVar5 = (code *)(ar4 + 0xb4);
            uVar7 = puVar1[1];
            *(undefined4 *)pcVar5 = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c137630;
          }
        }
        else if (*(int *)(ar4 + 0x128) < 6) {
          if (*(int *)(ar4 + 0x220) == 3) {
            pcVar5 = (code *)0x0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 9;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
            uVar6 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,pcVar8,pcVar5);
            uVar7 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,pcVar5);
            puVar1 = (undefined4 *)deref_u32(uVar7,uVar7,pcVar8,pcVar5);
            uVar7 = puVar1[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c137678;
          }
          else {
            uVar9 = 0;
            uVar10 = 0xffffffff;
            uVar7 = 10;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0);
            uVar6 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,uVar10,uVar9);
            uVar7 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar10,uVar9);
            puVar1 = (undefined4 *)deref_u32(uVar7,uVar7,uVar10,uVar9);
            uVar7 = puVar1[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            pcVar5 = (code *)0xb4;
            pcVar8 = (code *)&DAT_8c137690;
            *(undefined **)(ar4 + 0xb4) = &DAT_8c137690;
          }
        }
        else if (*(int *)(ar4 + 0x220) == 3) {
          uVar9 = 0;
          uVar10 = 0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
          uVar6 = SUB84(dVar14,0);
          uVar7 = FUN_8c026db0(ar4,FUN_8c026db0,uVar10,uVar9);
          uVar7 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar10,uVar9);
          puVar1 = (undefined4 *)deref_u32(uVar7,uVar7,uVar10,deref_u32);
          uVar7 = puVar1[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar1;
          *(undefined4 *)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
          pcVar8 = (code *)(*(int *)(ar4 + 0x128) + -6);
          pcVar5 = (code *)0xb4;
          *(undefined **)(ar4 + 0xb4) = &DAT_8c1376d8 + (int)pcVar8 * 0x18;
        }
        else {
          uVar9 = 0;
          uVar10 = 0xffffffff;
          uVar7 = 10;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0);
          uVar6 = SUB84(dVar14,0);
          uVar7 = FUN_8c026db0(ar4,uVar7,uVar10,uVar9);
          uVar9 = 0xb0;
          uVar10 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,0xb0,uVar7);
          pcVar5 = deref_u32;
          pcVar8 = (code *)deref_u32(uVar10,uVar7,uVar9,deref_u32);
          uVar7 = *(undefined4 *)(pcVar8 + 4);
          *(undefined4 *)(ar4 + 0xb4) = *(undefined4 *)pcVar8;
          *(undefined4 *)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(ar4 + 0xbc) = *(undefined4 *)(pcVar8 + 8);
          *(undefined **)(ar4 + 0xb4) = &DAT_8c137708 + (*(int *)(ar4 + 0x128) + -6) * 0x18;
        }
        if (cVar19 == '\0') {
          dVar14 = (double)CONCAT44(0x42700000,uVar6);
        }
        else {
          dVar14 = 3.510285662012026e-304;
        }
        if (cVar18 == '\0') {
          fVar13 = SUB84(in_dr14,0) / (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(in_dr14 / dVar14,0);
        }
        if (cVar19 == '\0') {
          *(float *)(ar4 + 0x240) = fVar13;
        }
        else {
          *(double *)(ar4 + 0x240) = dVar16;
        }
      }
      else {
        if (*(int *)(ar4 + 0x128) < 2) {
          uVar11 = 0;
          *(undefined4 *)(ar4 + 0x2b0) = 0;
          goto LAB_8c0822ea;
        }
        if (*(int *)(ar4 + 0x128) == 2) {
          if (*(int *)(ar4 + 0x220) == 3) {
            pcVar5 = (code *)0x0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 2;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
            uVar9 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,pcVar8,pcVar5);
            uVar7 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,pcVar5);
            puVar1 = (undefined4 *)deref_u32(uVar7,deref_u32,pcVar8,pcVar5);
            uVar7 = puVar1[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c137648;
          }
          else {
            pcVar5 = (code *)0x0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 3;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0);
            uVar9 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,pcVar8,pcVar5);
            uVar10 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,pcVar5);
            puVar1 = (undefined4 *)deref_u32(uVar10,uVar7,pcVar8,pcVar5);
            uVar7 = puVar1[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c137660;
          }
        }
        else if (*(int *)(ar4 + 0x128) < 6) {
          if (*(int *)(ar4 + 0x220) == 3) {
            uVar6 = 0;
            uVar10 = 0xffffffff;
            uVar7 = 2;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
            uVar9 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,uVar10,uVar6);
            pcVar5 = (code *)(ar4 + 0xb0);
            pcVar8 = FUN_8c03c0f0;
            uVar7 = FUN_8c03c0f0(pcVar5,uVar7,FUN_8c03c0f0,pcVar5);
            puVar1 = (undefined4 *)deref_u32(uVar7,uVar7,pcVar8,pcVar5);
            uVar7 = puVar1[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c1376a8;
          }
          else {
            uVar6 = 0;
            uVar10 = 0xffffffff;
            uVar7 = 3;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0);
            uVar9 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,uVar10,uVar6);
            pcVar5 = (code *)(ar4 + 0xb0);
            pcVar8 = FUN_8c03c0f0;
            uVar7 = FUN_8c03c0f0(pcVar5,uVar7,FUN_8c03c0f0,pcVar5);
            puVar1 = (undefined4 *)deref_u32(uVar7,uVar7,pcVar8,pcVar5);
            uVar7 = puVar1[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c1376c0;
          }
        }
        else if (*(int *)(ar4 + 0x220) == 3) {
          pcVar5 = (code *)0x0;
          uVar10 = 0xffffffff;
          uVar7 = 2;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
          uVar9 = SUB84(dVar14,0);
          uVar7 = FUN_8c026db0(ar4,uVar7,uVar10,pcVar5);
          pcVar8 = (code *)FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar10,pcVar5);
          puVar1 = (undefined4 *)deref_u32(pcVar8,deref_u32,pcVar8,pcVar5);
          uVar7 = puVar1[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar1;
          *(undefined4 *)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
          *(undefined **)(ar4 + 0xb4) = &DAT_8c137798 + (*(int *)(ar4 + 0x128) + -6) * 0x18;
        }
        else {
          ar7_00 = 0;
          uVar6 = 0xffffffff;
          uVar7 = 3;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0);
          uVar9 = SUB84(dVar14,0);
          uVar7 = FUN_8c026db0(ar4,uVar7,uVar6,ar7_00);
          uVar10 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar6,ar7_00);
          puVar1 = (undefined4 *)deref_u32(uVar10,uVar7,uVar6,ar7_00);
          uVar7 = puVar1[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar1;
          *(undefined4 *)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
          pcVar8 = (code *)(*(int *)(ar4 + 0x128) + -6);
          pcVar5 = (code *)0xb4;
          *(undefined **)(ar4 + 0xb4) = &DAT_8c1377c8 + (int)pcVar8 * 0x18;
        }
        if (cVar19 == '\0') {
          dVar14 = (double)CONCAT44(0x43340000,uVar9);
        }
        else {
          dVar14 = 1.2652665412137e-311;
        }
        if (cVar18 == '\0') {
          fVar13 = SUB84(in_dr14,0) / (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(in_dr14 / dVar14,0);
        }
        if (cVar19 == '\0') {
          *(float *)(ar4 + 0x240) = fVar13;
        }
        else {
          *(double *)(ar4 + 0x240) = dVar16;
        }
      }
      uVar12 = SUB84(dVar14,0);
      FUN_8c02a1fc(ar4 + 0x254,0x254,pcVar8,pcVar5);
      if (cVar19 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar12;
      }
      pcVar4 = s_CAnimBody_SetFrame_033e6e;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,pcVar8,pcVar5);
      pcVar8 = (code *)0x2b0;
      pcVar5 = *(code **)(ar4 + 0x2b0);
      *(code **)(ar4 + 0x2b0) = pcVar5 + 1;
    }
    else if (iVar3 != 2) goto LAB_8c0822ea;
    CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar4,pcVar5,pcVar8,iVar2);
    uVar10 = *(undefined4 *)(*(int *)(ar4 + 0xb4) + 4);
    uVar7 = 0xb0;
    FUN_8c034650(ar4 + 0xb0,uVar10,0xb0,uVar10);
    vec3_copy_8c023d8c(&uStack_20,auStack_e0,uVar7,uVar10);
    object_dtor_delete(auStack_e0,0xffffffff,object_dtor_delete,auStack_e0);
    if (cVar19 == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x254),uStack_20);
    }
    else {
      in_xd0 = CONCAT44(uStack_1c,uStack_20);
      dVar14 = *(double *)(ar4 + 0x254);
    }
    if (cVar18 == '\0') {
      fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar14 - dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),fVar13);
    }
    else {
      dVar14 = *(double *)(ar4 + 0x240);
    }
    if (cVar18 == '\0') {
      fStack_2c = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fStack_2c = SUB84(dVar14 * dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 600),uStack_1c);
    }
    else {
      fStack_2c = (float)in_xd0;
      in_xd0 = CONCAT44(uStack_18,uStack_1c);
      dVar14 = *(double *)(ar4 + 600);
    }
    if (cVar18 == '\0') {
      fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar14 - dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),fVar13);
    }
    else {
      dVar14 = *(double *)(ar4 + 0x240);
    }
    if (cVar18 == '\0') {
      fStack_28 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fStack_28 = SUB84(dVar14 * dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x25c),uStack_18);
    }
    else {
      fStack_28 = (float)in_xd0;
      in_xd0 = CONCAT44(uStack_14,uStack_18);
      dVar14 = *(double *)(ar4 + 0x25c);
    }
    if (cVar18 == '\0') {
      fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar14 - dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),fVar13);
    }
    else {
      dVar14 = *(double *)(ar4 + 0x240);
    }
    if (cVar18 == '\0') {
      fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar14 * dVar14,0);
    }
    fStack_24 = fVar13;
    if (cVar19 != '\0') {
      fStack_24 = (float)in_xd0;
      uStack_20 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    pcVar8 = (code *)&uStack_20;
    uVar10 = 0x254;
    vec3_copy_8c023d8c(ar4 + 0x254,pcVar8,0x254,pcVar8);
    vec3_copy_8c02b5fc(auStack_ec,&fStack_2c,uVar10,pcVar8);
    FUN_8c023484(ar4 + 0x14,auStack_ec,uVar10,pcVar8,auStack_fc);
    Vec3_assign(ar4 + 0x14,auStack_fc,uVar10,pcVar8);
    Vec3_dtor(auStack_fc,0xffffffff,uVar10,pcVar8);
    uVar7 = 0xffffffff;
    object_dtor_delete(auStack_ec,0xffffffff,uVar10,pcVar8);
    iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar7,uVar10,pcVar8);
    if (iVar2 == 1) {
      uVar11 = 0;
      *(undefined4 *)(ar4 + 0x2b0) = 0;
      if (*(int *)(ar4 + 0x260) == 3) {
        pcVar8 = (code *)0x0;
        uVar7 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
      }
      else if (*(int *)(ar4 + 0x260) == 4) {
        pcVar8 = (code *)0x0;
        uVar7 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0xffffffff,0);
      }
      else {
        pcVar8 = (code *)0x0;
        uVar7 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,uVar7,pcVar8);
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      if (cVar19 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)(uint)fVar13;
      }
    }
  }
LAB_8c0822ea:
  uVar7 = 0xffffffff;
  Vec3_dtor(auStack_4c,0xffffffff,0xffffffff,pcVar8);
  Vec3_dtor(auStack_3c,0xffffffff,uVar7,pcVar8);
  object_dtor_delete(&fStack_2c,0xffffffff,uVar7,pcVar8);
  object_dtor_delete(&uStack_20,0xffffffff,uVar7,pcVar8);
  return uVar11;
}

__asm__(".globl _FUN_8c0811b4\n.set _FUN_8c0811b4, _FUN_8c0811b4_def\n");
//@unit 8c082378
#include "../decls.h"
undefined4 FUN_8c082378_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined4 in_fr4;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined8 uStack_4c;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = ar5;
  Vec3_ctor_zero(auStack_18,ar5,ar6,ar7);
  Vec3_normalize(ar5,uVar3,ar6,ar7);
  Vec3_assign(auStack_18,auStack_28,ar6,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  iVar2 = *(int *)(ar4 + 0x2b4);
  *(int *)(ar4 + 0x2b4) = iVar2 + 1;
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),(float)(iVar2 + 1));
  }
  else {
    dVar5 = *(double *)(ar4 + 0x38);
  }
  if (cVar6 == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
  }
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(in_fr4,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(iVar2,in_fr4);
  }
  if (cVar6 == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
  }
  uVar1 = in_xd0;
  if (cVar7 == '\0') {
    uStack_4c = CONCAT44((*(uint*)((uchar*)&uStack_4c+4)),fVar4);
    uVar1 = uStack_4c;
  }
  uStack_4c = uVar1;
  Vec3_scale(auStack_18,&uStack_4c,ar6,ar7,auStack_38);
  FUN_8c023aa0(ar4 + 0x14,auStack_38,ar6,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
  Vec3_normalize(ar4 + 0x14,uVar3,ar6,ar7);
  Vec3_assign(ar4 + 0x14,(int)&uStack_4c + 4,ar6,ar7);
  Vec3_dtor((int)&uStack_4c + 4,0xffffffff,ar6,ar7);
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
  uVar3 = Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c082378\n.set _FUN_8c082378, _FUN_8c082378_def\n");
//@unit 8c08248c
#include "../decls.h"
undefined4 FUN_8c08248c_def(int ar4,int ar5,undefined4 *ar6,int *ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *ar5_00;
  undefined4 uVar5;
  int *ar7_00;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  double in_xd0;
  char cVar11;
  char cVar12;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = 1;
  ar7_00 = ar7;
  puVar2 = ar6;
  Vec3_ctor_zero(&uStack_24,ar5,ar6,ar7);
  pcVar4 = Vec3_ctor_zero;
  Vec3_ctor_zero(auStack_34,Vec3_ctor_zero,ar6,ar7_00);
  Vec3_ctor_zero(auStack_44,pcVar4,ar6,ar7_00);
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x3f99999a,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x48);
    dVar8 = 7.971355768799707e+24;
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x451a6000,fVar7);
  }
  else {
    dVar8 = 8.23907165070957e-312;
  }
  if (cVar11 == '\0') {
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - SUB84(dVar8,0),SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 - dVar8;
  }
  uVar5 = (undefined4)((ulonglong)dVar8 >> 0x20);
  uStack_24 = uVar5;
  if (cVar12 != '\0') {
    uStack_24 = SUB84(dVar8,0);
    fStack_20 = (float)uVar5;
  }
  (**(code **)(*ar7 + 0x184))(ar7,*ar7,ar6,ar7_00);
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x42480000,(int)((ulonglong)dVar8 >> 0x20));
    dVar8 = in_xd0;
  }
  else {
    dVar9 = 5.69244280312755e-312;
  }
  if (cVar11 == '\0') {
    fStack_20 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fStack_20 = SUB84(dVar9 - dVar9,0);
  }
  if (cVar12 == '\0') {
    uVar5 = 0x448e8000;
    fVar7 = fStack_20;
  }
  else {
    fStack_20 = SUB84(dVar8,0);
    fVar7 = 1140.0;
    uVar5 = 0x110;
    uStack_18 = 0x110;
  }
  uStack_1c = 0x448e8000;
  pcVar4 = Vec3_ctor_xyz;
  Vec3_ctor_xyz(auStack_54,Vec3_ctor_xyz,ar6,ar7_00);
  if (*(int *)(ar4 + 0x128) < 7) {
    Vec3_dtor(auStack_54,0xffffffff,ar6,ar7_00);
    Vec3_dtor(auStack_44,0xffffffff,ar6,ar7_00);
    Vec3_dtor(auStack_34,0xffffffff,ar6,ar7_00);
    Vec3_dtor(&uStack_24,0xffffffff,ar6,ar7_00);
    uVar6 = 0;
  }
  else {
    (**(code **)(*ar7 + 0x184))(ar7,pcVar4,ar6,ar7_00);
    if (cVar12 == '\0') {
      uVar10 = CONCAT44(0x43200000,uVar5);
    }
    else {
      dVar8 = (double)CONCAT44(uVar5,fVar7);
      uVar10 = 0xd843200000;
    }
    if (cVar11 != '\0' || (float)uVar10 <= (float)(uVar10 >> 0x20)) {
      iVar3 = *(int *)(ar4 + 300);
      if ((iVar3 < 5) && (-1 < iVar3)) {
                    
        switch(iVar3) {
        case 0:
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(ar4 + 0x28);
            dVar9 = 3.73996784729797e-312;
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
            *(double *)(ar4 + 0x28) = dVar8;
          }
          iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar4,ar6,ar7_00);
          if (iVar3 == 1) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            *(undefined4 *)(ar4 + 0x40) = 5;
          }
          break;
        case 1:
          ar6 = &uStack_24;
          iVar3 = pure_virtual_stub(ar4,ar5,ar6,ar7_00);
          if (iVar3 == 0) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            *(undefined4 *)(ar4 + 0x40) = 5;
            *(undefined4 *)(ar4 + 0x2b4) = 0;
            *(undefined4 *)(ar4 + 0x2b0) = 0;
            if (cVar12 == '\0') {
              *(undefined4 *)(ar4 + 0x2c) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x2c) = uVar10 & 0xffffffff;
            }
            *(undefined4 *)(ar4 + 0x294) = 0;
            *(undefined4 *)(ar4 + 0x218) = 0xe;
          }
          break;
        case 2:
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(ar4 + 0x28);
            dVar9 = 4.24924683712963e-312;
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
            *(double *)(ar4 + 0x28) = dVar8;
          }
          FUN_8c0230f0(ar4 + 0x14,pcVar4,ar6,ar7_00,auStack_64);
          FUN_8c082378(ar4,auStack_64,ar6,ar7_00);
          uVar5 = 0xffffffff;
          Vec3_dtor(auStack_64,0xffffffff,ar6,ar7_00);
          vec3_clear(ar4 + 700,uVar5,ar6,ar7_00);
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),fStack_20);
          }
          else {
            dVar8 = (double)CONCAT44(uStack_1c,fStack_20);
            dVar9 = *(double *)(ar5 + 4);
          }
          if (cVar11 == '\0') {
            fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 - dVar9,0);
          }
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(0x3c23d70a,fVar7);
          }
          else {
            dVar9 = 3.73969762439725e-312;
          }
          if (cVar11 == '\0') {
            fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(ar4 + 0x2c0) = fVar7;
          }
          else {
            *(double *)(ar4 + 0x2c0) = dVar8;
          }
          iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar5,ar6,ar7_00);
          if ((iVar3 == 1) &&
             (iVar3 = *(int *)(ar4 + 0x294), *(int *)(ar4 + 0x294) = iVar3 + 1, 0 < iVar3)) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            *(undefined4 *)(ar4 + 0x2b4) = 0;
          }
          break;
        case 3:
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(ar4 + 0x28);
            dVar9 = 1.4859225791956e-311;
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
            *(double *)(ar4 + 0x28) = dVar8;
          }
          vec3_clear(ar4 + 700,pcVar4,ar6,ar7_00);
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),fStack_20);
          }
          else {
            dVar8 = (double)CONCAT44(uStack_1c,fStack_20);
            dVar9 = *(double *)(ar5 + 4);
          }
          if (cVar11 == '\0') {
            fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 - dVar9,0);
          }
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(0x3c23d70a,fVar7);
          }
          else {
            dVar9 = 4.58849594078336e-312;
          }
          if (cVar11 == '\0') {
            fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(ar4 + 0x2c0) = fVar7;
          }
          else {
            *(double *)(ar4 + 0x2c0) = dVar8;
          }
          Vec3_ctor_copy(auStack_74,auStack_54,ar6,ar7_00);
          ar6 = (undefined4 *)0x1;
          iVar3 = FUN_8c0811b4(ar4,auStack_74,1,ar7_00);
          Vec3_dtor(auStack_74,0xffffffff,ar6,ar7_00);
          if (iVar3 == 0) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            ar7_00 = (int *)0x0;
            ar6 = (undefined4 *)0xffffffff;
            uVar5 = 0x32;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x32,0xffffffff,0);
            uVar5 = FUN_8c026db0(ar4,uVar5,ar6,ar7_00);
            uVar1 = FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6,ar7_00);
            puVar2 = (undefined4 *)deref_u32(uVar1,uVar5,ar6,ar7_00);
            uVar1 = puVar2[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar2;
            *(undefined4 *)(ar4 + 0xb8) = uVar1;
            *(undefined4 *)(ar4 + 0xbc) = puVar2[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c1378e8;
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,ar6,ar7_00);
            *(undefined4 *)(ar4 + 0x2b4) = 0;
            vec3_clear(ar4 + 0x244,uVar5,ar6,ar7_00);
            if (cVar12 == '\0') {
              *(undefined4 *)(ar4 + 0x2c) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x2c) = (ulonglong)(uint)fVar7;
            }
          }
          break;
        case 4:
          FUN_8c031748(ar4,pcVar4,ar6,ar7_00);
          *(undefined4 *)(ar4 + 0x178) = 1;
          *(undefined4 *)(ar4 + 0x2cc) = 1;
          CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar4,ar6,ar7_00,puVar2);
          FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar6,ar7_00);
          Vec3_assign(auStack_34,auStack_84,ar6,ar7_00);
          Vec3_dtor(auStack_84,0xffffffff,ar6,ar7_00);
          Vec3_sub(auStack_34,ar4 + 0x244,ar6,ar7_00,auStack_94);
          Vec3_assign(auStack_44,auStack_94,ar6,ar7_00);
          Vec3_dtor(auStack_94,0xffffffff,ar6,ar7_00);
          ar5_00 = auStack_34;
          Vec3_assign(ar4 + 0x244,ar5_00,ar6,ar7_00);
          Vec3_ctor_xyz(auStack_a4,ar5_00,ar6,ar7_00);
          iVar3 = FUN_8c023d04(auStack_44,auStack_a4,ar6,ar7_00);
          Vec3_dtor(auStack_a4,0xffffffff,ar6,ar7_00);
          if (iVar3 != 0) {
            vec3_copy_8c02b5fc(auStack_b0,puVar2,ar6,ar7_00);
            FUN_8c023484(auStack_44,auStack_b0,ar6,ar7_00,auStack_c0);
            Vec3_assign(ar4 + 700,auStack_c0,ar6,ar7_00);
            Vec3_dtor(auStack_c0,0xffffffff,ar6,ar7_00);
            object_dtor_delete(auStack_b0,0xffffffff,ar6,ar7_00);
          }
          iVar3 = CAnimBody_AdvanceFrame_wrapper
                            (ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,ar6,ar7_00);
          if (iVar3 == 1) {
            *(undefined4 *)(ar4 + 0x178) = 0;
            *(undefined4 *)(ar4 + 0x2cc) = 0;
            uVar6 = 0;
            uVar5 = 0;
            *(undefined4 *)(ar4 + 300) = 0;
            vec3_clear(ar4 + 0x244,0,ar6,ar7_00);
            vec3_clear(ar4 + 700,uVar5,ar6,ar7_00);
            ar7_00 = (int *)0x0;
            ar6 = (undefined4 *)0xffffffff;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,ar6,ar7_00);
            FUN_8c03c314(ar4,FUN_8c03c314,ar6,ar7_00);
            *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
          }
        }
      }
      Vec3_dtor(auStack_54,0xffffffff,ar6,ar7_00);
      Vec3_dtor(auStack_44,0xffffffff,ar6,ar7_00);
      Vec3_dtor(auStack_34,0xffffffff,ar6,ar7_00);
      Vec3_dtor(&uStack_24,0xffffffff,ar6,ar7_00);
    }
    else {
      Vec3_dtor(auStack_54,0xffffffff,ar6,ar7_00);
      Vec3_dtor(auStack_44,0xffffffff,ar6,ar7_00);
      Vec3_dtor(auStack_34,0xffffffff,ar6,ar7_00);
      Vec3_dtor(&uStack_24,0xffffffff,ar6,ar7_00);
      uVar6 = 0;
    }
  }
  return uVar6;
}

__asm__(".globl _FUN_8c08248c\n.set _FUN_8c08248c, _FUN_8c08248c_def\n");
//@unit 8c082c50
#include "../decls.h"
undefined4 FUN_8c082c50_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar4;
  double in_dr0;
  double dVar5;
  char cVar6;
  char cVar7;
  int in_stack_ffffff0c;
  undefined8 uStack_d4;
  undefined1 auStack_cc [16];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uStack_c = 1;
  uVar4 = 1;
  uVar3 = **(undefined4 **)(ar5 + 4);
  ar5_00 = &DAT_8c125e78;
  FUN_8c031c74(ar4,&DAT_8c125e78,uVar3,ar7);
  iVar1 = *(int *)(ar4 + 0x134);
  if (iVar1 == 0) {
    if (*(int *)(ar4 + 100) == 1) {
      uVar4 = 0;
    }
    else if (*(int *)(ar4 + 0x128) < 3) {
      uVar4 = 0;
    }
    else {
      FUN_8c031748(ar4,ar5_00,uVar3,ar7);
      Vec3_ctor_copy(auStack_40,&DAT_8c125e68,uVar3,ar7);
      uVar3 = 1;
      iVar1 = FUN_8c0811b4(ar4,auStack_40,1,ar7);
      uStack_d4 = (double)(ulonglong)CONCAT14(iVar1 == 0,(undefined4)uStack_d4);
      Vec3_dtor(auStack_40,0xffffffff,uVar3,ar7);
      if ((*(uint*)((uchar*)&uStack_d4+4)) != 0) {
        ar7_00 = 0;
        uVar2 = 0xffffffff;
        uVar3 = 8;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,ar7_00);
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
        uVar3 = rand_range(ar4,5,7,ar7_00);
        *(undefined4 *)(ar4 + 0x294) = uVar3;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      if (*(int *)(ar4 + 0x128) < 6) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        ar5_00 = (undefined *)0x16;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x16,0xffffffff,0);
      }
      else if (*(int *)(ar4 + 0x128) == 6) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        ar5_00 = (undefined *)0x10;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0);
      }
      else {
        ar7 = 0;
        uVar3 = 0xffffffff;
        ar5_00 = (undefined *)0x10;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar3,ar7);
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    }
    else if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      FUN_8c0230f0(ar4 + 0x14,ar5_00,uVar3,ar7,auStack_cc);
      FUN_8c082378(ar4,auStack_cc,uVar3,ar7);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_cc,0xffffffff,uVar3,ar7);
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,uVar3,ar7);
      if (iVar1 != 1) {
        return 1;
      }
      uVar2 = 0;
      uVar3 = 0xffffffff;
      uVar4 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar3,uVar2);
      *(undefined4 *)(ar4 + 0x134) = 0;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      return 0;
    }
    FUN_8c0230f0(ar4 + 0x14,ar5_00,uVar3,ar7,auStack_50);
    FUN_8c082378(ar4,auStack_50,uVar3,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_50,0xffffffff,uVar3,ar7);
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,uVar3,ar7);
    if (iVar1 == 1) {
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      in_stack_ffffff0c = ar4;
      if ((*(int *)(ar4 + 0x128) < 3) || (5 < *(int *)(ar4 + 0x128))) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 8;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7);
      }
      else {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 0x14;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x14,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7);
      }
    }
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,uVar3,ar7,in_stack_ffffff0c);
    if (cVar6 == '\0') {
      iVar1 = (int)(float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      iVar1 = (int)in_dr0;
    }
    if (iVar1 == 0x25) {
      ar7 = *(undefined4 *)(ar5 + 0x18);
      uVar3 = **(undefined4 **)(ar5 + 4);
      FUN_8c033474(ar4,0x1b,uVar3,ar7);
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x44bb8000,*(undefined4 *)(**(int **)(ar5 + 4) + 8));
      }
      else {
        dVar5 = 3.14625103273492e-312;
      }
      if (cVar6 == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - SUB84(dVar5,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar5;
      }
      if (cVar7 == '\0') {
        uStack_d4 = (double)CONCAT44((*(uint*)((uchar*)&uStack_d4+4)),(int)((ulonglong)dVar5 >> 0x20));
        dVar5 = uStack_d4;
      }
      uStack_d4 = dVar5;
      Vec3_scale(ar4 + 0x14,&uStack_d4,uVar3,ar7,auStack_60);
      Vec3_scale(auStack_60,&DAT_8c1379c8,uVar3,ar7,auStack_70);
      Vec3_ctor_copy(auStack_20,auStack_70,uVar3,ar7);
      Vec3_dtor(auStack_70,0xffffffff,uVar3,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_60,0xffffffff,uVar3,ar7);
      FUN_8c02374c(auStack_20,uVar2,uVar3,ar7);
      Vec3_assign(auStack_20,auStack_80,uVar3,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_80,0xffffffff,uVar3,ar7);
      Vec3_ctor_xyz(auStack_90,uVar2,uVar3,ar7);
      vec3_copy_8c02b5fc(auStack_9c,*(undefined4 *)(*(int *)(ar5 + 4) + 4),uVar3,ar7);
      FUN_8c023484(auStack_90,auStack_9c,uVar3,ar7,auStack_ac);
      Vec3_add(**(undefined4 **)(ar5 + 4),auStack_ac,uVar3,ar7,auStack_bc);
      Vec3_ctor_copy(auStack_30,auStack_bc,uVar3,ar7);
      Vec3_dtor(auStack_bc,0xffffffff,uVar3,ar7);
      Vec3_dtor(auStack_ac,0xffffffff,uVar3,ar7);
      object_dtor_delete(auStack_9c,0xffffffff,uVar3,ar7);
      Vec3_dtor(auStack_90,0xffffffff,uVar3,ar7);
      ar6_00 = auStack_20;
      FUN_8c0dba50(*(undefined4 *)(ar5 + 0x18),auStack_30,ar6_00,ar7);
      Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7);
    }
    FUN_8c031c74(ar4,&DAT_8c125e78,**(undefined4 **)(ar5 + 4),ar7);
  }
  return uVar4;
}

__asm__(".globl _FUN_8c082c50\n.set _FUN_8c082c50, _FUN_8c082c50_def\n");
//@unit 8c0831c8
#include "../decls.h"
undefined4 FUN_8c0831c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float in_fr1;
  float fVar7;
  double dVar8;
  undefined8 in_xd0;
  char cVar9;
  char cVar10;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar6 = 1;
  if (*(int *)(ar4 + 0x128) < 3) {
    uVar6 = 0;
  }
  else {
    iVar1 = *(int *)(ar4 + 300);
    if ((iVar1 < 5) && (-1 < iVar1)) {
                    
      switch(iVar1) {
      case 0:
        FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_24);
        Vec3_assign(ar4 + 0x54,auStack_24,ar6,ar7);
        ar5 = 0xffffffff;
        Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
        if (cVar10 == '\0') {
          in_fr1 = *(float *)(ar4 + 0x5c);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x5c);
        }
        if (cVar9 == '\0' && in_fr1 < 0.0) {
          if (cVar10 == '\0') {
            dVar8 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x5c));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x5c);
            dVar8 = 6.38186089609776e-312;
          }
          if (cVar9 == '\0') {
            fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar8 * dVar8,0);
          }
          if (cVar10 == '\0') {
            *(float *)(ar4 + 0x5c) = fVar7;
          }
          else {
            *(undefined8 *)(ar4 + 0x5c) = in_xd0;
          }
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      case 1:
        FUN_8c031748(ar4,ar5,ar6,ar7);
        Vec3_ctor_copy(auStack_34,ar4 + 0x54,ar6,ar7);
        uVar3 = 0;
        iVar1 = FUN_8c0811b4(ar4,auStack_34,0,ar7);
        Vec3_dtor(auStack_34,0xffffffff,uVar3,ar7);
        if (iVar1 == 0) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          *(undefined4 *)(ar4 + 0x2b4) = 0;
          uVar4 = 0;
          uVar2 = 0xffffffff;
          uVar3 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,uVar4);
        }
        break;
      case 2:
        uVar3 = ar6;
        FUN_8c031748(ar4,ar5,ar6,ar7);
        if (cVar10 == '\0') {
          dVar8 = (double)CONCAT44(0x3f7ae148,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar8 = -7.932371482664937e-251;
        }
        if (cVar9 == '\0') {
          fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 * dVar8,0);
        }
        if (cVar10 == '\0') {
          *(float *)(ar4 + 0x28) = fVar7;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
        Vec3_ctor_copy(auStack_44,ar4 + 0x54,ar6,ar7);
        FUN_8c082378(ar4,auStack_44,ar6,ar7);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
        iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7);
        if (iVar1 == 1) {
          uVar5 = 6;
          uVar4 = 4;
          uVar2 = rand_range(ar4,4,6,ar7);
          *(undefined4 *)(ar4 + 0x294) = uVar2;
          uVar2 = get_field_94_02aaa4(uVar3,uVar4,uVar5,ar7);
          iVar1 = libgcc_divide_helper_0101e4(uVar2,5,uVar5,ar7);
          if ((iVar1 == 3) || (iVar1 == 8)) {
            iVar1 = 2;
          }
          else {
            iVar1 = rand_range(ar4,0,2,ar7);
          }
          if (*(int *)(ar4 + 0x128) < 6) {
            uVar4 = 0;
            uVar2 = 0xffffffff;
            ar5_00 = iVar1 + 0x13;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0);
          }
          else if (*(int *)(ar4 + 0x128) == 6) {
            uVar4 = 0;
            uVar2 = 0xffffffff;
            ar5_00 = iVar1 + 0x25;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0);
          }
          else {
            uVar4 = 0;
            uVar2 = 0xffffffff;
            ar5_00 = iVar1 + 0x2f;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0);
          }
          if (iVar1 == 1) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 2;
            FUN_8c032ab0(ar4,ar5_00,uVar2,uVar4);
            FUN_8c032204(ar4 + 0xb0,ar5_00,uVar2,uVar4,uVar3);
          }
          else {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            FUN_8c032ab0(ar4,ar5_00,uVar2,uVar4);
            FUN_8c032204(ar4 + 0xb0,ar5_00,uVar2,uVar4,uVar3);
          }
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar2,uVar4);
          *(int *)(ar4 + 0x218) = iVar1 + 0xb;
        }
        break;
      case 3:
        uVar3 = ar6;
        FUN_8c031748(ar4,ar5,ar6,ar7);
        Vec3_ctor_copy(auStack_54,ar4 + 0x54,ar6,ar7);
        FUN_8c082378(ar4,auStack_54,ar6,ar7);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
        iVar1 = FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6,ar7);
        if (iVar1 == 7) {
          FUN_8c032ab0(ar4,uVar2,ar6,ar7);
          FUN_8c032204(ar4 + 0xb0,uVar2,ar6,ar7,uVar3);
          iVar1 = *(int *)(ar4 + 0x294) + -1;
          *(int *)(ar4 + 0x294) = iVar1;
          if (iVar1 < 1) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            FUN_8c032204(ar4 + 0xb0,uVar2,ar6,ar7,uVar3);
          }
        }
        break;
      case 4:
        uVar3 = ar6;
        FUN_8c031748(ar4,ar5,ar6,ar7);
        Vec3_ctor_copy(auStack_64,ar4 + 0x54,ar6,ar7);
        FUN_8c082378(ar4,auStack_64,ar6,ar7);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_64,0xffffffff,ar6,ar7);
        iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7);
        if (iVar1 == 1) {
          *(undefined4 *)(ar4 + 0x294) = 0;
          *(undefined4 *)(ar4 + 300) = 0;
          uVar6 = 0;
          *(undefined4 *)(ar4 + 0x2b4) = 0;
          uVar5 = 0;
          uVar4 = 0xffffffff;
          uVar2 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar4,uVar5);
          *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
          FUN_8c03c314(ar4,uVar2,uVar4,uVar5);
          FUN_8c032204(ar4 + 0xb0,uVar2,uVar4,uVar5,uVar3);
        }
      }
    }
  }
  return uVar6;
}

__asm__(".globl _FUN_8c0831c8\n.set _FUN_8c0831c8, _FUN_8c0831c8_def\n");
//@unit 8c083780
#include "../decls.h"
undefined4 FUN_8c083780_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fr1;
  char cVar4;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  cVar4 = '\0';
  uVar3 = 1;
  iVar1 = *(int *)(ar4 + 0x134);
  if (iVar1 == 0) {
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(ar4 + 0x2b0) = 1;
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      Vec3_set_xyz(auStack_18,ar5,ar6,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_18,ar6,ar7,auStack_28);
      Vec3_assign(ar4 + 0x280,auStack_28,ar6,ar7);
      Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_18,0xffffffff,ar6,ar7);
      if (cVar4 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_fr1;
      }
    }
  }
  else if (iVar1 == 1) {
    *(float *)(ar4 + 0x28) = *(float *)(ar4 + 0x28) + 0.5;
    if (10.0 < *(float *)(ar4 + 0x28)) {
      *(undefined4 *)(ar4 + 0x28) = 0x41200000;
    }
    Vec3_ctor_copy(auStack_38,ar4 + 0x280,ar6,ar7);
    ar6_00 = 1;
    iVar1 = FUN_8c0811b4(ar4,auStack_38,1,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x2b0) = 1;
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      Vec3_set_xyz(auStack_44,uVar2,ar6_00,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_44,ar6_00,ar7,auStack_54);
      Vec3_assign(ar4 + 0x280,auStack_54,ar6_00,ar7);
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_44,0xffffffff,ar6_00,ar7);
    }
  }
  else if (iVar1 == 2) {
    *(float *)(ar4 + 0x28) = *(float *)(ar4 + 0x28) + 0.5;
    if (10.0 < *(float *)(ar4 + 0x28)) {
      *(undefined4 *)(ar4 + 0x28) = 0x41200000;
    }
    Vec3_ctor_copy(auStack_64,ar4 + 0x280,ar6,ar7);
    uVar2 = 1;
    iVar1 = FUN_8c0811b4(ar4,auStack_64,1,ar7);
    Vec3_dtor(auStack_64,0xffffffff,uVar2,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x2b0) = 0;
      *(undefined4 *)(ar4 + 0x134) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c083780\n.set _FUN_8c083780, _FUN_8c083780_def\n");
//@unit 8c0839c0
#include "../decls.h"
uint FUN_8c0839c0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  uint uVar4;
  undefined4 uVar7;
  undefined8 uVar5;
  double dVar6;
  undefined4 in_fr3;
  double dVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [8];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  iVar1 = (**(code **)(**(int **)(ar5 + 0x18) + 0x1cc))(*(int **)(ar5 + 0x18),ar5,ar6,ar7);
  iVar1 = iVar1 + 4;
  Vec3_ctor_copy(auStack_24,iVar1,ar6,ar7);
  if (*(int *)(ar4 + 0x2b0) == 0) {
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7);
    if (iVar1 == 1) {
      ar7_00 = 0;
      uVar3 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      *(int *)(ar4 + 0x2b0) = *(int *)(ar4 + 0x2b0) + 1;
      uVar2 = **(undefined4 **)(ar5 + 4);
      Vec3_assign(ar4 + 0x280,uVar2,uVar3,ar7_00);
      *(undefined4 *)(ar4 + 0x294) = 1;
      if (cVar11 == '\0') {
        uVar7 = 0x42340000;
      }
      else {
        uVar7 = 0xac;
      }
      Vec3_set_xyz(auStack_30,uVar2,uVar3,ar7_00);
      FUN_8c023484(&DAT_8c125e68,auStack_30,uVar3,ar7_00,auStack_40);
      Vec3_scale(auStack_40,ar4 + 0x48,uVar3,ar7_00,auStack_50);
      Vec3_scale(auStack_50,&DAT_8c1379cc,uVar3,ar7_00,auStack_60);
      Vec3_add(ar4 + 0x280,auStack_60,uVar3,ar7_00,auStack_70);
      Vec3_assign(ar4 + 0x54,auStack_70,uVar3,ar7_00);
      Vec3_dtor(auStack_70,0xffffffff,uVar3,ar7_00);
      Vec3_dtor(auStack_60,0xffffffff,uVar3,ar7_00);
      Vec3_dtor(auStack_50,0xffffffff,uVar3,ar7_00);
      Vec3_dtor(auStack_40,0xffffffff,uVar3,ar7_00);
      object_dtor_delete(auStack_30,0xffffffff,uVar3,ar7_00);
      FUN_8c022fc0(ar4 + 0x54,auStack_24,uVar3,ar7_00);
      if (cVar11 == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x48),uVar7);
      }
      else {
        uVar5 = *(undefined8 *)(ar4 + 0x48);
      }
      if (cVar10 == '\0' && (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20)) {
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44(uStack_1c,in_fr3);
          dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          dVar8 = (double)CONCAT44(uStack_18,uStack_1c);
          dVar6 = -1.6035025660963675e-250;
        }
        if (cVar10 == '\0') {
          dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                                   SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar8,0)
                                  );
        }
        else {
          dVar8 = dVar8 - dVar6 * dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x5c) = (int)((ulonglong)dVar8 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x5c) = dVar8;
        }
      }
      ar7 = *(undefined4 *)(ar5 + 0x18);
      ar6 = *(int *)(ar5 + 0xc);
      FUN_8c032788(ar4,ar4 + 0x54,ar6,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
    }
  }
  else if (*(int *)(ar4 + 0x2b0) == 1) {
    ar6 = ar4 + 0x54;
    uVar2 = **(undefined4 **)(ar5 + 4);
    iVar1 = pure_virtual_stub(ar4,uVar2,ar6,ar7);
    if (iVar1 == 0) {
      *(int *)(ar4 + 0x294) = *(int *)(ar4 + 0x294) + 1;
      if (cVar11 == '\0') {
        uVar3 = 0x42340000;
      }
      else {
        uVar3 = 0xac;
      }
      Vec3_set_xyz(auStack_7c,uVar2,ar6,ar7);
      FUN_8c023484(&DAT_8c125e68,auStack_7c,ar6,ar7,auStack_8c);
      Vec3_scale(auStack_8c,ar4 + 0x48,ar6,ar7,auStack_9c);
      Vec3_scale(auStack_9c,&DAT_8c1379d0,ar6,ar7,auStack_ac);
      Vec3_add(ar4 + 0x280,auStack_ac,ar6,ar7,auStack_bc);
      Vec3_assign(ar4 + 0x54,auStack_bc,ar6,ar7);
      Vec3_dtor(auStack_bc,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_ac,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_9c,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_8c,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_7c,0xffffffff,ar6,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
      bVar9 = *(int *)(ar4 + 0x294) < 9;
      if (!bVar9) {
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(undefined4 *)(ar4 + 0x2b0) = 0;
      }
      uVar4 = (uint)bVar9;
      FUN_8c022fc0(ar4 + 0x54,auStack_24,ar6,ar7);
      if (cVar11 == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x48),uVar3);
      }
      else {
        uVar5 = *(undefined8 *)(ar4 + 0x48);
      }
      if (cVar10 == '\0' && (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20)) {
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44(uStack_1c,in_fr3);
          dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          dVar8 = (double)CONCAT44(uStack_18,uStack_1c);
          dVar6 = -1.6035025660963675e-250;
        }
        if (cVar10 == '\0') {
          dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                                   SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar8,0)
                                  );
        }
        else {
          dVar8 = dVar8 - dVar6 * dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x5c) = (int)((ulonglong)dVar8 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x5c) = dVar8;
        }
      }
      ar7 = *(undefined4 *)(ar5 + 0x18);
      ar6 = *(int *)(ar5 + 0xc);
      FUN_8c032788(ar4,ar4 + 0x54,ar6,ar7);
    }
  }
  Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c0839c0\n.set _FUN_8c0839c0, _FUN_8c0839c0_def\n");
//@unit 8c083d8c
#include "../decls.h"
undefined4 FUN_8c083d8c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  undefined *puVar8;
  float fVar9;
  double dVar6;
  double dVar7;
  undefined4 in_fr3;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined4 in_stack_fffffec4;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar12 = '\0';
  cVar11 = '\0';
  uVar4 = 1;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  iVar1 = *(int *)(ar4 + 0x134);
  if ((4 < iVar1) || (iVar1 < 0)) goto switchD_8c083dce_default;
                    
  switch(iVar1) {
  case 0:
    ar6 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,ar6,ar7);
    if (ar6 == 1) {
      if (cVar12 == '\0') {
        fVar5 = *(float *)**(undefined4 **)(ar5 + 4);
        puVar8 = (undefined *)0x449a6000;
      }
      else {
        in_xd0 = *(undefined8 *)**(undefined4 **)(ar5 + 4);
        fVar5 = 1235.0;
        puVar8 = &DAT_8c125e48;
      }
      if (cVar11 != '\0' || fVar5 <= (float)(uint)puVar8) {
        Vec3_scale(&DAT_8c125e48,&DAT_8c1379d4,1,ar7,auStack_38);
        Vec3_assign(ar4 + 0x54,auStack_38,ar6,ar7);
        Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
      }
      else {
        Vec3_assign(ar4 + 0x54,&DAT_8c125e48,1,ar7);
      }
      ar7 = 0;
      uVar3 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar3,ar7);
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar5);
      }
      else {
        dVar6 = *(double *)(ar4 + 0x48);
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(-(float)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = -dVar6;
      }
      if (cVar12 == '\0') {
        uStack_e0 = (double)CONCAT44((*(uint*)((uchar*)&uStack_e0+4)),(int)((ulonglong)dVar6 >> 0x20));
        dVar6 = uStack_e0;
      }
      uStack_e0 = dVar6;
      Vec3_scale(ar4 + 0x54,&uStack_e0,uVar3,ar7,auStack_48);
      Vec3_scale(auStack_48,&DAT_8c1379d8,uVar3,ar7,auStack_58);
      Vec3_add(**(undefined4 **)(ar5 + 4),auStack_58,uVar3,ar7,auStack_68);
      ar6 = 0x280;
      Vec3_assign(ar4 + 0x280,auStack_68,0x280,ar7);
      Vec3_dtor(auStack_68,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_58,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x288));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x288);
        dVar6 = 6.54086966663815e-312;
      }
      if (cVar11 == '\0') {
        fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x288) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 0x288) = in_xd0;
      }
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      *(undefined4 *)(ar4 + 0x2b0) = 0;
    }
    break;
  case 1:
    Vec3_ctor_copy(auStack_78,ar4 + 0x54,ar6,ar7);
    ar6 = 1;
    iVar1 = FUN_8c0811b4(ar4,auStack_78,1,ar7);
    Vec3_dtor(auStack_78,0xffffffff,ar6,ar7);
    if (iVar1 == 0) {
      if (*(int *)(ar4 + 0x128) == 6) {
        ar7 = 0;
        ar6 = -1;
        uVar3 = 0x23;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x23,0xffffffff,0);
      }
      else {
        ar7 = 0;
        ar6 = -1;
        uVar3 = 0x2d;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2d,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    }
    break;
  case 2:
    Vec3_sub(**(undefined4 **)(ar5 + 4),ar4 + 0x280,ar6,ar7,auStack_88);
    Vec3_assign(auStack_28,auStack_88,ar6,ar7);
    Vec3_dtor(auStack_88,0xffffffff,ar6,ar7);
    Vec3_ctor_copy(auStack_98,auStack_28,ar6,ar7);
    FUN_8c082378(ar4,auStack_98,ar6,ar7);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_98,0xffffffff,ar6,ar7);
    FUN_8c031748(ar4,uVar3,ar6,ar7);
    ar6 = **(int **)(ar5 + 4);
    uVar3 = **(undefined4 **)(ar5 + 4);
    FUN_8c031c74(ar4,uVar3,ar6,ar7);
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6,ar7);
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7,in_stack_fffffec4);
    if (cVar12 == '\0') {
      fVar9 = 100.0;
    }
    else {
      fVar5 = 100.0;
      fVar9 = 4.316e-43;
    }
    if (cVar11 != '\0' || fVar9 <= fVar5) {
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      ar6 = 6;
      uVar3 = rand_range(ar4,4,6,ar7);
      *(undefined4 *)(ar4 + 0x294) = uVar3;
    }
    break;
  case 3:
    Vec3_sub(**(undefined4 **)(ar5 + 4),ar4 + 0x280,ar6,ar7,auStack_a8);
    Vec3_assign(auStack_28,auStack_a8,ar6,ar7);
    Vec3_dtor(auStack_a8,0xffffffff,ar6,ar7);
    Vec3_ctor_copy(auStack_b8,auStack_28,ar6,ar7);
    FUN_8c082378(ar4,auStack_b8,ar6,ar7);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_b8,0xffffffff,ar6,ar7);
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7,in_stack_fffffec4);
    if (cVar12 == '\0') {
      in_fr15 = fVar5;
    }
    if (cVar11 == '\0') {
      iVar1 = (int)in_fr15;
    }
    else {
      iVar1 = (int)(double)CONCAT44(in_fr14,in_fr15);
    }
    if ((iVar1 == 0x8a) && (*(int *)(ar4 + 0x294) < 1)) {
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x3ca3d70a,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 985162545658593.2;
      }
      if (cVar11 == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x28) = fVar5;
        fVar5 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      if (cVar11 == '\0' && 0.0 < fVar5) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
        }
      }
      iVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar3,ar6,ar7);
      if (iVar1 == 7) {
        ar6 = 6;
        uVar3 = 4;
        uVar2 = rand_range(ar4,4,6,ar7);
        *(undefined4 *)(ar4 + 0x294) = uVar2;
      }
    }
    else {
      iVar1 = FUN_8c03f3ac(ar4 + 0xb0,uVar3,ar6,ar7);
      if (iVar1 == 7) {
        FUN_8c032ab0(ar4,uVar3,ar6,ar7);
        FUN_8c032204(ar4 + 0xb0,uVar3,ar6,ar7,in_stack_fffffec4);
        *(int *)(ar4 + 0x294) = *(int *)(ar4 + 0x294) + -1;
      }
    }
    FUN_8c031748(ar4,uVar3,ar6,ar7);
    if (cVar12 == '\0') {
      dVar6 = (double)CONCAT44(0x3c23d70a,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar6 = 87960945987420.16;
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar12 == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
      fVar5 = *(float *)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
    }
    if (cVar11 == '\0' && 0.0 < fVar5) {
      if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
      }
    }
    if (cVar12 == '\0') {
      dVar6 = (double)CONCAT44(0x42d40000,fVar5);
    }
    else {
      dVar6 = 211106267570176.0;
    }
    if (cVar11 == '\0') {
      bVar10 = (float)((ulonglong)dVar6 >> 0x20) < in_fr15;
    }
    else {
      bVar10 = dVar6 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar10) {
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x42e80000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 492581279399936.0;
      }
      if (cVar11 == '\0') {
        bVar10 = in_fr15 < (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        bVar10 = (double)CONCAT44(in_fr14,in_fr15) < dVar6;
      }
      if (!bVar10) goto LAB_8c08437e;
LAB_8c08438e:
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0xc0400000,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 1.1920937492693184e-07;
      }
      if (cVar11 == '\0' && (float)((ulonglong)dVar6 >> 0x20) < SUB84(dVar6,0)) {
        if (cVar12 == '\0') {
          dVar6 = (double)CONCAT44(0x3e800000,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar6 = -7.957972465383526e-251;
        }
        if (cVar11 == '\0') {
          fVar5 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) - fVar5);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        if (cVar12 == '\0') {
          *(int *)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
      }
    }
    else {
LAB_8c08437e:
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x42fc0000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 844425070608384.0;
      }
      if (cVar11 == '\0') {
        bVar10 = (float)((ulonglong)dVar6 >> 0x20) < in_fr15;
      }
      else {
        bVar10 = dVar6 < (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar10) {
        if (cVar12 == '\0') {
          dVar6 = (double)CONCAT44(0x43080000,SUB84(dVar6,0));
        }
        else {
          dVar6 = -32.00000799074769;
        }
        if (cVar11 == '\0') {
          bVar10 = in_fr15 < (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          bVar10 = (double)CONCAT44(in_fr14,in_fr15) < dVar6;
        }
        if (bVar10) goto LAB_8c08438e;
      }
    }
    Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_c8);
    Vec3_add(**(undefined4 **)(ar5 + 4),auStack_c8,ar6,ar7,auStack_d8);
    FUN_8c022fc0(auStack_d8,ar4 + 0x280,ar6,ar7);
    if (cVar12 == '\0') {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),in_fr3);
      dVar7 = (double)CONCAT44(0x3f99999a,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar7 = -7.932637885456047e-251;
    }
    if (cVar11 == '\0') {
      bVar10 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20) <
               (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar10 = dVar7 * dVar7 < dVar6;
    }
    Vec3_dtor(auStack_d8,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_c8,0xffffffff,ar6,ar7);
    if (bVar10) {
      if (*(int *)(ar4 + 0x2b8) == 1) {
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
        ar7 = 0x2b4;
        ar6 = 0;
        *(undefined4 *)(ar4 + 0x2b4) = 0;
      }
    }
    else {
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      ar6 = ar4;
    }
    break;
  case 4:
    FUN_8c031748(ar4,FUN_8c031748,ar6,ar7);
    ar6 = **(int **)(ar5 + 4);
    uVar3 = **(undefined4 **)(ar5 + 4);
    FUN_8c031c74(ar4,uVar3,ar6,ar7);
    iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar3,ar6,ar7);
    if (iVar1 == 1) {
      uVar4 = 0;
      *(undefined4 *)(ar4 + 0x134) = 0;
      *(undefined4 *)(ar4 + 0x294) = 0;
      FUN_8c03c314(ar4,0,ar6,ar7);
      *(undefined4 *)(ar4 + 0x178) = 0;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      ar7 = 0;
      ar6 = -1;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,ar6,ar7);
      FUN_8c032204(ar4 + 0xb0,ar4 + 0xb0,ar6,ar7,in_stack_fffffec4);
    }
  }
switchD_8c083dce_default:
  (*(uint*)((uchar*)&uStack_e0+4)) = uVar4;
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  return (*(uint*)((uchar*)&uStack_e0+4));
}

__asm__(".globl _FUN_8c083d8c\n.set _FUN_8c083d8c, _FUN_8c083d8c_def\n");
//@unit 8c0845f4
#include "../decls.h"
undefined4 FUN_8c0845f4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  float fVar8;
  double dVar6;
  double dVar7;
  undefined4 in_fr3;
  undefined8 in_xd0;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffff08;
  undefined8 uStack_b8;
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  iVar1 = ar5;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  iVar2 = *(int *)(ar4 + 0x134);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7);
      if (iVar1 == 1) {
        if (cVar11 == '\0') {
          fVar5 = *(float *)**(undefined4 **)(ar5 + 4);
          fVar8 = 1235.0;
        }
        else {
          in_xd0 = *(undefined8 *)**(undefined4 **)(ar5 + 4);
          fVar5 = 1235.0;
          fVar8 = 2.74654e-43;
        }
        if (cVar10 != '\0' || fVar5 <= fVar8) {
          Vec3_assign(ar4 + 0x54,&DAT_8c125e48,ar6,ar7);
        }
        else {
          Vec3_scale(&DAT_8c125e48,&DAT_8c1379dc,ar6,ar7,auStack_34);
          Vec3_assign(ar4 + 0x54,auStack_34,ar6,ar7);
          Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
        }
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar3 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
        Vec3_scale(ar4 + 0x54,ar4 + 0x48,ar6,ar7,auStack_44);
        Vec3_scale(auStack_44,&DAT_8c1379e0,ar6,ar7,auStack_54);
        Vec3_add(**(undefined4 **)(ar5 + 4),auStack_54,ar6,ar7,auStack_64);
        Vec3_assign(ar4 + 0x280,auStack_64,ar6,ar7);
        Vec3_dtor(auStack_64,0xffffffff,ar6,ar7);
        Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
        Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x288));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x288);
          dVar6 = 6.54086966663815e-312;
        }
        if (cVar10 == '\0') {
          fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar6 - dVar6,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 0x288) = fVar5;
        }
        else {
          *(undefined8 *)(ar4 + 0x288) = in_xd0;
        }
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
        *(undefined4 *)(ar4 + 0x2b0) = 0;
      }
      break;
    case 1:
      Vec3_ctor_copy(auStack_74,ar4 + 0x54,ar6,ar7);
      ar6 = 1;
      iVar1 = FUN_8c0811b4(ar4,auStack_74,1,ar7);
      Vec3_dtor(auStack_74,0xffffffff,ar6,ar7);
      if (iVar1 == 0) {
        if (*(int *)(ar4 + 0x128) == 6) {
          ar7 = 0;
          ar6 = 0xffffffff;
          uVar3 = 0x24;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x24,0xffffffff,0);
        }
        else {
          ar7 = 0;
          ar6 = 0xffffffff;
          uVar3 = 0x2e;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2e,0xffffffff,0);
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
        *(undefined4 *)(ar4 + 0x2b4) = 0;
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      }
      break;
    case 2:
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7);
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      CAnimBody_GetCurFrame(ar4 + 0xb0,iVar1,ar6,ar7,in_stack_ffffff08);
      if (cVar11 == '\0') {
        fVar8 = 90.0;
      }
      else {
        fVar5 = 90.0;
        fVar8 = 4.316e-43;
      }
      if (cVar10 != '\0' || fVar8 <= fVar5) {
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      }
      break;
    case 3:
      Vec3_sub(ar4 + 0x280,**(undefined4 **)(ar5 + 4),ar6,ar7,auStack_84);
      Vec3_assign(auStack_24,auStack_84,ar6,ar7);
      Vec3_dtor(auStack_84,0xffffffff,ar6,ar7);
      Vec3_ctor_copy(auStack_94,auStack_24,ar6,ar7);
      FUN_8c082378(ar4,auStack_94,ar6,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_94,0xffffffff,ar6,ar7);
      FUN_8c03f3ac(ar4 + 0xb0,uVar3,ar6,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7,in_stack_ffffff08);
      if (cVar11 == '\0') {
        uStack_b8 = CONCAT44((*(uint*)((uchar*)&uStack_b8+4)),(int)((ulonglong)in_dr0 >> 0x20));
        dVar6 = (double)CONCAT44(0x40400000,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 1.3411048278844095e-08;
        uStack_b8 = in_dr0;
      }
      if (cVar10 == '\0' && SUB84(dVar6,0) < (float)((ulonglong)dVar6 >> 0x20)) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar6 = -7.957972460180408e-251;
        }
        if (cVar10 == '\0') {
          fVar5 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) + fVar5);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
      }
      Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_a4);
      Vec3_add(**(undefined4 **)(ar5 + 4),auStack_a4,ar6,ar7,(int)&uStack_b8 + 4);
      FUN_8c022fc0((int)&uStack_b8 + 4,ar4 + 0x280,ar6,ar7);
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),in_fr3);
        dVar7 = (double)CONCAT44(0x3f99999a,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar7 = 6.54101886946819e-312;
      }
      if (cVar10 == '\0') {
        bVar9 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20) <
                (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        bVar9 = dVar7 * dVar7 < dVar6;
      }
      Vec3_dtor((int)&uStack_b8 + 4,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_a4,0xffffffff,ar6,ar7);
      if (bVar9) {
        if (*(int *)(ar4 + 0x2b8) == 1) {
          *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
          *(undefined4 *)(ar4 + 0x2b8) = 0;
          *(undefined4 *)(ar4 + 0x2b4) = 0;
        }
      }
      else {
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
        *(undefined4 *)(ar4 + 0x2b4) = 0;
      }
      break;
    case 4:
      ar6 = **(undefined4 **)(ar5 + 4);
      uVar3 = **(undefined4 **)(ar5 + 4);
      FUN_8c031c74(ar4,uVar3,ar6,ar7);
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar3,ar6,ar7);
      if (iVar1 == 1) {
        uVar4 = 0;
        *(undefined4 *)(ar4 + 0x134) = 0;
        *(undefined4 *)(ar4 + 0x294) = 0;
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar3 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
        FUN_8c032204(ar4 + 0xb0,uVar3,ar6,ar7,in_stack_ffffff08);
        *(undefined4 *)(ar4 + 0x178) = 0;
        *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
      }
    }
  }
  Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c0845f4\n.set _FUN_8c0845f4, _FUN_8c0845f4_def\n");
//@unit 8c084bc0
#include "../decls.h"
undefined4 get_field_2cc_084bc0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x2cc + ar4);
}

__asm__(".globl _get_field_2cc_084bc0\n.set _get_field_2cc_084bc0, _get_field_2cc_084bc0_def\n");
//@unit 8c084bcc
#include "../decls.h"
undefined4 FUN_8c084bcc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined1 auStack_124 [24];
  undefined1 auStack_10c [268];
  
  uStack_128 = Vec3_ctor_xyz((&DATA_8c125e48),ar5,ar6,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e00;
  global_list_push(uStack_128,(&Vec3_dtor),0x8c280e00,ar7);
  uStack_12c = Vec3_ctor_xyz((&DATA_8c125e58),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e0c;
  global_list_push(uStack_12c,(&Vec3_dtor),0x8c280e0c,ar7);
  uStack_130 = Vec3_ctor_xyz((&DATA_8c125e68),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e18;
  global_list_push(uStack_130,(&Vec3_dtor),0x8c280e18,ar7);
  uStack_134 = Vec3_ctor_xyz((&DATA_8c125e78),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e24;
  global_list_push(uStack_134,(&Vec3_dtor),0x8c280e24,ar7);
  uStack_138 = Vec3_ctor_xyz((&DATA_8c125e88),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e30;
  global_list_push(uStack_138,(&Vec3_dtor),0x8c280e30,ar7);
  uStack_13c = Vec3_ctor_xyz((&DATA_8c125e98),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e3c;
  global_list_push(uStack_13c,(&Vec3_dtor),0x8c280e3c,ar7);
  uStack_140 = Vec3_ctor_xyz((&DATA_8c125ea8),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e48;
  global_list_push(uStack_140,(&Vec3_dtor),0x8c280e48,ar7);
  uStack_144 = Vec3_ctor_xyz((&DATA_8c125eb8),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e54;
  global_list_push(uStack_144,(&Vec3_dtor),0x8c280e54,ar7);
  uStack_148 = Vec3_ctor_xyz((&DATA_8c125ec8),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e60;
  global_list_push(uStack_148,(&Vec3_dtor),0x8c280e60,ar7);
  Vec3_ctor_xyz((int)&uStack_180 + 0x16c,puVar2,uVar1,ar7);
  uStack_14c = (*(code *)(&Vec3_ctor_copy))
                         ((&DATA_8c125ed8),(int)&uStack_180 + 0x16c,uVar1,ar7);
  uVar1 = 0x8c280e6c;
  global_list_push(uStack_14c,(&Vec3_dtor),0x8c280e6c,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor((int)&uStack_180 + 0x16c,0xffffffff,uVar1,ar7);
  Vec3_ctor_xyz((int)&uStack_180 + 0x15c,uVar3,uVar1,ar7);
  uStack_150 = (*(code *)(&Vec3_ctor_copy))
                         ((&DATA_8c125ed8) + 0x10,(int)&uStack_180 + 0x15c,uVar1,ar7);
  uVar1 = 0x8c280e78;
  global_list_push(uStack_150,(&Vec3_dtor),0x8c280e78,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor((int)&uStack_180 + 0x15c,0xffffffff,uVar1,ar7);
  Vec3_ctor_xyz((int)&uStack_180 + 0x14c,uVar3,uVar1,ar7);
  uStack_154 = (*(code *)(&Vec3_ctor_copy))
                         ((&DATA_8c125f10),(int)&uStack_180 + 0x14c,uVar1,ar7);
  uVar1 = 0x8c280e84;
  global_list_push(uStack_154,(&Vec3_dtor),0x8c280e84,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor((int)&uStack_180 + 0x14c,0xffffffff,uVar1,ar7);
  Vec3_ctor_xyz((int)&uStack_180 + 0x13c,uVar3,uVar1,ar7);
  uStack_158 = (*(code *)(&Vec3_ctor_copy))
                         ((&DATA_8c125f10) + 0x10,(int)&uStack_180 + 0x13c,uVar1,ar7);
  uVar1 = 0x8c280e90;
  global_list_push(uStack_158,(&Vec3_dtor),0x8c280e90,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor((int)&uStack_180 + 0x13c,0xffffffff,uVar1,ar7);
  Vec3_ctor_xyz((int)&uStack_180 + 0x12c,uVar3,uVar1,ar7);
  uStack_15c = (*(code *)(&Vec3_ctor_copy))
                         ((&DATA_8c125f30),(int)&uStack_180 + 0x12c,uVar1,ar7);
  uVar1 = 0x8c280e9c;
  global_list_push(uStack_15c,(&Vec3_dtor),0x8c280e9c,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor((int)&uStack_180 + 0x12c,0xffffffff,uVar1,ar7);
  Vec3_ctor_xyz((int)&uStack_180 + 0x11c,uVar3,uVar1,ar7);
  uStack_160 = (*(code *)(&Vec3_ctor_copy))
                         ((&DATA_8c125f30) + 0x10,(int)&uStack_180 + 0x11c,uVar1,ar7);
  uVar1 = 0x8c280ea8;
  global_list_push(uStack_160,(&Vec3_dtor),0x8c280ea8,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor((int)&uStack_180 + 0x11c,0xffffffff,uVar1,ar7);
  uVar3 = FUN_8c030e34((int)&uStack_180 + 0x104,uVar3,uVar1,ar7);
  uStack_164 = uVar3;
  FUN_8c05d608(0x8c280eb4,uVar3,uVar1,ar7);
  uVar3 = FUN_8c030e34((int)&uStack_180 + 0xec,uVar3,uVar1,ar7);
  uStack_168 = uVar3;
  FUN_8c05d608(0x8c280eb4 + 0x18,uVar3,uVar1,ar7);
  uVar3 = FUN_8c030e34((int)&uStack_180 + 0xd4,uVar3,uVar1,ar7);
  uStack_16c = uVar3;
  FUN_8c05d608(0x8c280eb4 + 0x30,uVar3,uVar1,ar7);
  uVar3 = FUN_8c030e34((int)&uStack_180 + 0xbc,uVar3,uVar1,ar7);
  uStack_170 = uVar3;
  FUN_8c05d608(0x8c280eb4 + 0x48,uVar3,uVar1,ar7);
  uVar3 = FUN_8c030e34((int)&uStack_180 + 0xa4,uVar3,uVar1,ar7);
  uStack_174 = uVar3;
  FUN_8c05d608(0x8c280eb4 + 0x60,uVar3,uVar1,ar7);
  uVar3 = FUN_8c030e34((int)&uStack_180 + 0x8c,uVar3,uVar1,ar7);
  uStack_178 = uVar3;
  FUN_8c05d608(0x8c280eb4 + 0x78,uVar3,uVar1,ar7);
  uVar3 = FUN_8c030e34(auStack_10c,uVar3,uVar1,ar7);
  uStack_17c = uVar3;
  FUN_8c05d608(0x8c280eb4 + 0x90,uVar3,uVar1,ar7);
  uStack_180 = FUN_8c030e34(auStack_124,uVar3,uVar1,ar7);
  uVar1 = FUN_8c05d608(0x8c280eb4 + 0xa8,uStack_180,uVar1,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c084bcc\n.set _FUN_8c084bcc, _FUN_8c084bcc_def\n");
//@unit 8c08516c
#include "../decls.h"
int CAnimal_m0_08516c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12a434;
    Class_129938_m0_017084(ar4 + 0x1014,0xffffffff,ar6,ar7);
    Class_12a25c_m0_06f3c4(ar4 + 0xd20,0xffffffff,ar6,ar7);
    Class_12c3c4_m0_1030a4(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _CAnimal_m0_08516c\n.set _CAnimal_m0_08516c, _CAnimal_m0_08516c_def\n");
//@unit 8c0851f4
#include "../decls.h"
int s_GRAPHICS_HIGYOLINE_0851fa_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  ar6_00 = 1;
  uVar1 = 3;
  ar7_00 = ar6;
  (*(code *)(&FUN_8c0254d0))
            (ar4,3,1,ar6,0,ar5,0x8c280fb4,0x8c2818e0,*(undefined4 *)(&DATA_8c137b2c));
  *(undefined **)(ar4 + 8) = (&DATA_8c12a434);
  s_HIGYOLINE_102eee(ar4 + 0x490,uVar1,ar6_00,ar7_00);
  FUN_8c06e4ec(ar4 + 0xd20,uVar1,ar6_00,ar7_00);
  FUN_8c016fcc(ar4 + 0x1014,uVar1,ar6_00,ar7_00);
  (*(code *)(&FUN_8c014334))
            (ar4 + 0xc,uVar1,ar6_00,ar7_00,(&DATA_8c138590) + 0x182b);
  *(int *)(0x308 + ar4) = ar4 + 0x490;
  uVar1 = FUN_8c034d38(ar4 + 0x2dc,ar6,ar6_00,ar7_00);
  FUN_8c028ec8(*(undefined4 *)(0x308 + ar4),uVar1,ar6_00,ar7_00);
  *(int *)(0x30c + ar4) = ar4 + 0xd20;
  *(undefined1 *)(0x10d8 + ar4) = 0;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(undefined4 *)(0x10a8 + ar4 + iVar2 * 4) = 0;
    *(undefined4 *)(0x10c0 + ar4 + iVar2 * 4) = 0;
  }
  (*(code *)(&FUN_8c0f532c))
            (ar4,*(undefined4 *)(0xb4 + *(int *)(0x328 + ar4)),ar4 + 0x1014,
             ar7_00);
  *(undefined4 *)(0x3d8 + ar4) = *(undefined4 *)(**(int **)(0x328 + ar4) + 0x40);
  *(undefined4 *)(0x3dc + ar4) = *(undefined4 *)(**(int **)(0x328 + ar4) + 0x40);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x10;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_HIGYOLINE_0851fa\n.set _s_GRAPHICS_HIGYOLINE_0851fa, _s_GRAPHICS_HIGYOLINE_0851fa_def\n");
//@unit 8c085390
#include "../decls.h"
undefined4 CAnimal_m2_085390_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined4 ar7_00;
  
  ar5_00 = ar5;
  ar7_00 = ar7;
  CAnimal_m2_02573c(ar4,ar5,ar6,ar7);
  FUN_8c02a788(ar4,ar5_00,ar6,ar7_00);
  FUN_8c02aabc(ar4,ar5_00,ar6,ar7_00);
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if (((((char)uVar1 == '\x01') && (*(int *)(0x10c0 + ar4) == 0)) &&
      (*(int *)(0x10c4 + ar4) == 0)) &&
     (((*(int *)(0x10c8 + ar4) == 0 && (*(int *)(0x10cc + ar4) == 0)) &&
      ((*(int *)(0x10d0 + ar4) == 0 && (*(int *)(0x10d4 + ar4) == 0)))))) {
    ar5_00 = ar5;
    FUN_8c0858e4(ar4,ar5,ar6,ar7_00);
  }
  if (((*(int *)(0x10c0 + ar4) != 0) || (*(int *)(0x10c4 + ar4) != 0)) ||
     ((*(int *)(0x10c8 + ar4) != 0 ||
      (((*(int *)(0x10cc + ar4) != 0 || (*(int *)(0x10d0 + ar4) != 0)) ||
       (*(int *)(0x10d4 + ar4) != 0)))))) {
    ar5_00 = ar5;
    FUN_8c0859c8(ar4,ar5,ar6,ar7_00);
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((char)uVar1 == '\x02') {
    iVar2 = get_field_290_085544(ar4 + 0xd20,ar5_00,ar6,ar7_00);
    if (iVar2 != -1) {
      if (*(char *)(0x10d8 + ar4) == '\0') {
        *(undefined1 *)(0x10d8 + ar4) = 1;
        *(undefined4 *)(&DATA_8c13bcc4) = 0;
      }
      s_CSquidLine_085b18(ar4,ar7,ar5,ar7_00);
      ar5_00 = ar7;
      ar6 = ar5;
    }
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((char)uVar1 == '\x02') {
    iVar2 = get_field_290_085544(ar4 + 0xd20,ar5_00,ar6,ar7_00);
    iVar3 = (**(code **)(**(int **)(0x308 + ar4) + 0x44))
                      (*(int **)(0x308 + ar4),ar5_00,ar6,ar7_00);
    if ((iVar3 + -1 <= iVar2) && (*(char *)(0x10d8 + ar4) == '\x01')) {
      *(undefined1 *)(0x10d8 + ar4) = 0;
    }
  }
  return 1;
}

__asm__(".globl _CAnimal_m2_085390\n.set _CAnimal_m2_085390, _CAnimal_m2_085390_def\n");
//@unit 8c085544
#include "../decls.h"
undefined4 get_field_290_085544_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x290 + ar4);
}

__asm__(".globl _get_field_290_085544\n.set _get_field_290_085544, _get_field_290_085544_def\n");
//@unit 8c085550
#include "../decls.h"
undefined4 CAnimal_m3_085550_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined4 ar7_00;
  
  ar5_00 = ar5;
  ar7_00 = ar7;
  CAnimal_m3_026078(ar4,ar5,ar6,ar7);
  FUN_8c02a788(ar4,ar5_00,ar6,ar7_00);
  FUN_8c02aabc(ar4,ar5_00,ar6,ar7_00);
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if (((((char)uVar1 == '\x01') && (*(int *)(0x10c0 + ar4) == 0)) &&
      (*(int *)(0x10c4 + ar4) == 0)) &&
     (((*(int *)(0x10c8 + ar4) == 0 && (*(int *)(0x10cc + ar4) == 0)) &&
      ((*(int *)(0x10d0 + ar4) == 0 && (*(int *)(0x10d4 + ar4) == 0)))))) {
    ar5_00 = ar5;
    FUN_8c0858e4(ar4,ar5,ar6,ar7_00);
  }
  if (((*(int *)(0x10c0 + ar4) != 0) || (*(int *)(0x10c4 + ar4) != 0)) ||
     ((*(int *)(0x10c8 + ar4) != 0 ||
      (((*(int *)(0x10cc + ar4) != 0 || (*(int *)(0x10d0 + ar4) != 0)) ||
       (*(int *)(0x10d4 + ar4) != 0)))))) {
    ar5_00 = ar5;
    FUN_8c0859c8(ar4,ar5,ar6,ar7_00);
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((char)uVar1 == '\x02') {
    iVar2 = get_field_290_085544(ar4 + 0xd20,ar5_00,ar6,ar7_00);
    if (iVar2 != -1) {
      if (*(char *)(0x10d8 + ar4) == '\0') {
        *(undefined1 *)(0x10d8 + ar4) = 1;
        *(undefined4 *)(&DATA_8c13bcc4) = 0;
      }
      s_CSquidLine_085b18(ar4,ar7,ar5,ar7_00);
      ar5_00 = ar7;
      ar6 = ar5;
    }
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((char)uVar1 == '\x02') {
    iVar2 = get_field_290_085544(ar4 + 0xd20,ar5_00,ar6,ar7_00);
    iVar3 = (**(code **)(**(int **)(0x308 + ar4) + 0x44))
                      (*(int **)(0x308 + ar4),ar5_00,ar6,ar7_00);
    if ((iVar3 + -1 <= iVar2) && (*(char *)(0x10d8 + ar4) == '\x01')) {
      *(undefined1 *)(0x10d8 + ar4) = 0;
    }
  }
  return 1;
}

__asm__(".globl _CAnimal_m3_085550\n.set _CAnimal_m3_085550, _CAnimal_m3_085550_def\n");
//@unit 8c085704
#include "../decls.h"
int FUN_8c085704_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint in_fr1;
  ulonglong uVar5;
  char cVar6;
  
  cVar6 = '\0';
  FUN_8c02702c(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  piVar4 = (int *)(*(int *)(ar4 + 0x328) + (short)uVar1 * 0x124);
  iVar2 = FUN_8c015bb8(piVar4 + 0x1c,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x344) =
       *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x2c) + 0x2c) + 0x2c);
  *(undefined4 *)(ar4 + 0x348) = *(undefined4 *)(*(int *)(ar4 + 0x344) + 0x2c);
  *(undefined4 *)(ar4 + 0x34c) = *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x344) + 0x2c) + 0x30);
  *(undefined4 *)(ar4 + 0x350) =
       *(undefined4 *)(*(int *)(*(int *)(*(int *)(ar4 + 0x344) + 0x2c) + 0x30) + 0x30);
  uVar1 = FUN_8c015510(*piVar4 + 0x1e8,ar5,ar6,ar7);
  *(undefined4 *)(*(int *)(ar4 + 0x348) + 4) = uVar1;
  *(undefined4 *)(*(int *)(ar4 + 0x34c) + 4) = uVar1;
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x374) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x374) = (ulonglong)in_fr1;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x378) = 0;
    uVar5 = CONCAT44(0x40a00000,in_fr1);
    *(undefined4 *)(ar4 + 0x37c) = 0x40a00000;
  }
  else {
    *(ulonglong *)(ar4 + 0x378) = (ulonglong)in_fr1;
    uVar5 = 0x3a040a00000;
    *(undefined8 *)(ar4 + 0x37c) = 0x3a040a00000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x3a0) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x3a0) = uVar5 & 0xffffffff;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x3a4) = 0;
    *(undefined4 *)(ar4 + 0x3a8) = 0x40a00000;
  }
  else {
    *(ulonglong *)(ar4 + 0x3a4) = uVar5 & 0xffffffff;
    *(undefined8 *)(ar4 + 0x3a8) = 0x3a040a00000;
  }
  FUN_8c02a788(ar4,ar5,ar6,ar7);
  FUN_8c02aabc(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x358) = 0;
  *(undefined4 *)(ar4 + 0x354) = 0;
  *(undefined4 *)(ar4 + 0x360) = 0;
  *(undefined4 *)(ar4 + 0x35c) = 0;
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  iVar3 = (int)(short)uVar1;
  if (iVar3 == 6) {
    *(undefined4 *)(ar4 + 0x358) =
         *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x2c) +
                                                       0x2c) + 0x30) + 0x30) + 0x30) + 0x2c) + 0x2c)
    ;
    iVar3 = 0x354;
    *(undefined4 *)(ar4 + 0x354) =
         *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) +
                                                                         0x2c) + 0x2c) + 0x30) +
                                              0x30) + 0x30) + 0x2c) + 0x30) + 0x2c);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c085704\n.set _FUN_8c085704, _FUN_8c085704_def\n");
//@unit 8c0858bc
#include "../decls.h"
undefined4 FUN_8c0858bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0366e4(*(undefined4 *)(0x308 + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0858bc\n.set _FUN_8c0858bc, _FUN_8c0858bc_def\n");
//@unit 8c0858e4
#include "../decls.h"
undefined4 FUN_8c0858e4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a6;
  int iVar3;
  
  iVar2 = ar5;
  for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
    uVar1 = get_field_a0_035724(ar5,iVar2,ar6,ar7);
    if ((char)uVar1 == '\x02') {
      a6 = 5;
      uVar1 = s_Shell_0fef9c(0x8c3eb324,6,5,ar7);
      *(undefined4 *)(0x10a8 + ar4 + iVar3 * 4) = uVar1;
    }
    else {
      a6 = 0x15;
      uVar1 = s_Shell_0fef9c(0x8c3eb324,4,0x15,ar7);
      *(undefined4 *)(0x10a8 + ar4 + iVar3 * 4) = uVar1;
    }
    iVar2 = *(int *)(0x10a8 + ar4 + iVar3 * 4);
    (**(code **)(*(int *)(iVar2 + 8) + 0x54))(iVar2,0x8c3eb324,a6,ar7);
    ar6 = 0;
    iVar2 = *(int *)(0x10a8 + ar4 + iVar3 * 4);
    uVar1 = (*(code *)(&s_CItemGLoader_RegistToLoad_0fed74))
                      (*(undefined4 *)(0x7d0 + ar5),iVar2,0,ar7);
    *(undefined4 *)(0x10c0 + ar4 + iVar3 * 4) = uVar1;
  }
  return 6;
}

__asm__(".globl _FUN_8c0858e4\n.set _FUN_8c0858e4, _FUN_8c0858e4_def\n");
//@unit 8c0859c8
#include "../decls.h"
int FUN_8c0859c8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    if (*(int *)(0x10c0 + ar4 + iVar3 * 4) != 0) {
      ar5_00 = *(int *)(0x10c0 + ar4 + iVar3 * 4);
      iVar1 = FUN_8c0feef8(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
      if (iVar1 == 1) {
        ar5_00 = ar4 + iVar3 * 4 + 0x10c0;
        uVar2 = FUN_8c0feeb0(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
        *(undefined4 *)(0x10a8 + ar4 + iVar3 * 4) = uVar2;
      }
    }
  }
  if (*(int *)(0x10d4 + ar4) != 0) {
    ar5_00 = *(int *)(0x10d4 + ar4);
    iVar3 = FUN_8c0feef8(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
    if (iVar3 == 1) {
      ar5_00 = ar4 + 0x10d4;
      uVar2 = FUN_8c0feeb0(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
      *(undefined4 *)(0x10bc + ar4) = uVar2;
    }
  }
  iVar3 = *(int *)(0x10c0 + ar4);
  if ((((iVar3 == 0) && (iVar3 = *(int *)(0x10c4 + ar4), iVar3 == 0)) &&
      (iVar3 = *(int *)(0x10c8 + ar4), iVar3 == 0)) &&
     (((iVar3 = *(int *)(0x10cc + ar4), iVar3 == 0 &&
       (iVar3 = *(int *)(0x10d0 + ar4), iVar3 == 0)) &&
      (iVar3 = *(int *)(0x10d4 + ar4), iVar3 == 0)))) {
    uVar2 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7);
    iVar3 = (int)(char)uVar2;
    if (iVar3 == 1) {
      iVar3 = FUN_8c035f4c(ar4 + 0x490,2,ar6,ar7);
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0859c8\n.set _FUN_8c0859c8, _FUN_8c0859c8_def\n");
//@unit 8c085b14
#include "../decls.h"
int s_CSquidLine_085b18_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a6;
  
  a6 = ar6;
  iVar1 = get_field_290_085544(ar4 + 0xd20,ar5,ar6,ar7);
  if (*(int *)(0x10a8 + ar4 + iVar1 * 4) == 0) {
    iVar2 = (*(code *)(&report_error_message))
                      ((&DATA_8c138590) + 0x1835,
                       (&DATA_8c138590) + 0x1840,1,2);
  }
  else {
    iVar2 = *(int *)(0x10a8 + ar4 + iVar1 * 4);
    (**(code **)(0x10c + *(int *)(iVar2 + 8)))(iVar2,ar6,a6,ar7);
    FUN_8c036988(*(undefined4 *)(0x10a8 + ar4 + iVar1 * 4),ar6,a6,ar7);
    iVar2 = *(int *)(0x10a8 + ar4 + iVar1 * 4);
    (**(code **)(*(int *)(iVar2 + 8) + 0x5c))(iVar2,ar6,a6,ar7);
    (**(code **)(*ar5 + 0x4c))(ar5,*(undefined4 *)(0x10a8 + ar4 + iVar1 * 4),a6,ar7);
    iVar2 = 0x10a8;
    *(undefined4 *)(0x10a8 + ar4 + iVar1 * 4) = 0;
  }
  return iVar2;
}

__asm__(".globl _s_CSquidLine_085b18\n.set _s_CSquidLine_085b18, _s_CSquidLine_085b18_def\n");
//@unit 8c085c1c
#include "../decls.h"
undefined4 FUN_8c085c1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 0x490) + 0x1c))
                    ((int *)(ar4 + 0x490),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c085c1c\n.set _FUN_8c085c1c, _FUN_8c085c1c_def\n");
//@unit 8c085c3c
#include "../decls.h"
int FUN_8c085c3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined1 *puVar2;
  undefined4 *ar6_00;
  float *ar6_01;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined8 in_dr6;
  float in_fr8;
  float in_xf0;
  char cVar6;
  char cVar7;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_88 [3];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [12];
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar7 = '\0';
  cVar6 = '\0';
  fVar5 = (float)in_dr6;
  ar5_00 = 1;
  FUN_8c036d3c(*(undefined4 *)(ar4 + 0x308),1,ar6,ar7);
  FUN_8c085e8c(ar4 + 0xd20,ar5_00,ar6,ar7);
  iVar1 = get_field_2a4_085e80(ar4 + 0xd20,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = ar4 + 0x50;
    vec3_copy_8c02b5fc(auStack_40,iVar1,ar6,ar7);
    iVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x144))(ar4,iVar1,ar6,ar7);
    FUN_8c023484(iVar1 + 0xd8,auStack_40,ar6,ar7,auStack_50);
    Vec3_add(ar4 + 0x30,auStack_50,ar6,ar7,auStack_60);
    Vec3_ctor_copy(&uStack_18,auStack_60,ar6,ar7);
    Vec3_dtor(auStack_60,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_50,0xffffffff,ar6,ar7);
    object_dtor_delete(auStack_40,0xffffffff,ar6,ar7);
    if (cVar7 != '\0') {
      uStack_18 = uStack_c;
    }
    ar6_00 = &uStack_90;
    puVar2 = auStack_24;
    FUN_8c256294(0,puVar2,ar6_00,ar7);
    Vec3_ctor_zero(&fStack_34,puVar2,ar6_00,ar7);
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_90,fVar5);
      fStack_30 = in_xf0;
    }
    else {
      dVar4 = (double)CONCAT44(uStack_8c,uStack_90);
      fStack_30 = fVar5;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_18,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(uStack_14,uStack_18);
    }
    if (cVar6 == '\0') {
      fStack_34 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_34 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_8c,in_fr8);
    }
    else {
      dVar4 = (double)CONCAT44(auStack_88[0],uStack_8c);
      fStack_34 = fStack_30;
      fStack_30 = in_fr8;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(0xbf800000,fVar3);
    }
    else {
      dVar4 = 1.65674406927311e-311;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_14,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(uStack_10,uStack_14);
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      fStack_30 = fVar3;
      fVar5 = fStack_28;
    }
    fStack_28 = fVar5;
    uStack_2c = (int)((ulonglong)in_dr6 >> 0x20);
    FUN_8c02ace4(*(undefined4 *)(ar4 + 0x30c),puVar2,ar6_00,ar7,auStack_70);
    Vec3_set_xyz(auStack_7c,puVar2,ar6_00,ar7);
    puVar2 = auStack_70;
    ar6_01 = &fStack_34;
    FUN_8c0332b4(*(undefined4 *)(ar4 + 0x30c),&uStack_18,ar6_01,puVar2,auStack_88,auStack_7c);
    vec3_copy_8c023d8c(ar4 + 0x3fc,auStack_88,ar6_01,puVar2);
    object_dtor_delete(auStack_88,0xffffffff,ar6_01,puVar2);
    object_dtor_delete(auStack_7c,0xffffffff,ar6_01,puVar2);
    Vec3_dtor(auStack_70,0xffffffff,ar6_01,puVar2);
    Vec3_dtor(&fStack_34,0xffffffff,ar6_01,puVar2);
    iVar1 = Vec3_dtor(&uStack_18,0xffffffff,ar6_01,puVar2);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c085c3c\n.set _FUN_8c085c3c, _FUN_8c085c3c_def\n");
//@unit 8c085e80
#include "../decls.h"
undefined4 get_field_2a4_085e80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x2a4 + ar4);
}

__asm__(".globl _get_field_2a4_085e80\n.set _get_field_2a4_085e80, _get_field_2a4_085e80_def\n");
//@unit 8c085e8c
#include "../decls.h"
int FUN_8c085e8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x2a8;
  *(undefined4 *)(0x2a8 + ar4) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c085e8c\n.set _FUN_8c085e8c, _FUN_8c085e8c_def\n");
//@unit 8c085e9c
#include "../decls.h"
undefined4 FUN_8c085e9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = (float)*(int *)(ar4 + 0x458) / 216000.0;
  *(float *)(ar4 + 0x438) = DAT_8c137b1c * fVar3;
  *(float *)(ar4 + 0x43c) = DAT_8c137b20 * fVar3;
  *(float *)(ar4 + 0x440) = DAT_8c137b24 * fVar3;
  *(float *)(ar4 + 0x444) = DAT_8c137b28 * fVar3;
  iVar1 = *(int *)(ar4 + 0x458);
  *(int *)(ar4 + 0x458) = iVar1 + 1;
  uVar2 = 0x34bc0;
  if (0x34bc0 < iVar1 + 1) {
    *(undefined4 *)(ar4 + 0x458) = 0;
    uVar2 = 0x74;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0x7fffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c085e9c\n.set _FUN_8c085e9c, _FUN_8c085e9c_def\n");
//@unit 8c085f4c
#include "../decls.h"
undefined4 s_gm1_Home_njd_085f50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  undefined4 in_stack_fffffeb4;
  undefined1 auStack_12c [12];
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [12];
  undefined1 auStack_108 [12];
  undefined1 auStack_fc [12];
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [12];
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [12];
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [16];
  
  _DAT_8c28107c = (ulonglong)_DAT_8c28107c;
  cVar12 = '\0';
  cVar11 = '\0';
  for (iVar8 = 0; iVar8 < 8; iVar8 = iVar8 + 1) {
    *(undefined1 **)(iVar8 * 0x124 + -0x73d7f04c) = &DAT_8c27d1fc;
  }
  _DAT_8c280fb8 = &PTR_s_gm1_Hover_njm_8c137b58;
  _DAT_8c280fbc = &PTR_s_gm1_Hover_njs_8c137ba0;
  _DAT_8c280fc0 = PTR_s_gm1_Home_njd_8c137b34;
  _DAT_8c280fc4 = PTR_s_GM1_FACE_8c137b4c;
  _DAT_8c280fc8 = PTR_s_GM1_BODY_8c137b50;
  _DAT_8c280fcc = PTR_s_Gm1_MotionPack_npd_8c137b38;
  _DAT_8c280fd0 = PTR_s_hand_for_gm1_njm_8c137b54;
  _DAT_8c281068 = 0x8c283444;
  _DAT_8c28107c = CONCAT44(0x3ca3d70a,_DAT_8c28107c);
  _DAT_8c281084 = 0x3f4ccccd;
  _DAT_8c281088 = 0x42f00000;
  _DAT_8c28108c = 0;
  uVar2 = 0xdc;
  _DAT_8c281090 = 0;
  _DAT_8c281094 = 0x41100000;
  Class_129920_m0_015248(0x8c28103c,&PTR_PTR_8c13841c,0xdc,0x8c280fb4,in_stack_fffffeb4);
  Class_129920_m0_015248(0x8c281044,&PTR_PTR_8c13841c,uVar2,0x8c281044,in_stack_fffffeb4);
  _DAT_8c280fd4 = PTR_s_gm1_PVM_8c137b3c;
  _DAT_8c280fd8 = 3;
  _DAT_8c280fe4 = 0x8c282160;
  _DAT_8c280fe8 = PTR_s_gm1_PVM_8c137b40;
  _DAT_8c280fec = 3;
  _DAT_8c280ff8 = 0x8c282184;
  _DAT_8c280ffc = PTR_s_gm1_head_normal_PVM_8c137b44;
  _DAT_8c281000 = 10;
  _DAT_8c28100c = 0x8c2821a8;
  _DAT_8c281010 = PTR_s_gm1_head_normal_PVM_8c137b48;
  _DAT_8c281014 = 10;
  _DAT_8c281020 = 0x8c282220;
  _DAT_8c281054 = 0x8c28191c;
  _DAT_8c281058 = 0x12;
  _DAT_8c28105c = 0x8c281970;
  _DAT_8c281060 = 0x12;
  Vec3_set_xyz(auStack_18,0x12,0x8c28191c,0x8c282220);
  uVar5 = 0x8c280fb4;
  pcVar3 = vec3_copy_8c023d8c;
  vec3_copy_8c023d8c(0x8c2810ac,auStack_18,vec3_copy_8c023d8c,0x8c280fb4);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_18,0xffffffff,pcVar3,uVar5);
  Vec3_set_xyz(auStack_24,uVar2,pcVar3,uVar5);
  uVar4 = 0x8c2810b8;
  vec3_copy_8c023d8c(0x8c2810b8,auStack_24,0x8c2810b8,uVar5);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_24,0xffffffff,uVar4,uVar5);
  Vec3_set_xyz(auStack_30,uVar2,uVar4,uVar5);
  uVar2 = 0x8c2810c4;
  vec3_copy_8c023d8c(0x8c2810c4,auStack_30,0x8c2810c4,uVar5);
  object_dtor_delete(auStack_30,0xffffffff,uVar2,uVar5);
  if (cVar12 == '\0') {
    _DAT_8c2810d4 = CONCAT44(DAT_8c2810d4_4,0x42b40000);
    _DAT_8c2810a0 = CONCAT44(DAT_8c2810a0_4,0x41600000);
    dVar10 = (double)CONCAT44(0x3f000000,_DAT_8c28107c);
  }
  else {
    _DAT_8c2810d4 = 0x12842b40000;
    _DAT_8c2810a0 = 0xc841600000;
    dVar10 = -1.7008876239802676e-250;
    in_xd0 = _DAT_8c28107c;
  }
  if (cVar11 == '\0') {
    _DAT_8c281194 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    _DAT_8c281194 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c28107c = CONCAT44(_DAT_8c281080,_DAT_8c281194);
    uVar1 = _DAT_8c28107c;
  }
  _DAT_8c28107c = uVar1;
  _DAT_8c2810dc = &PTR_s_gm2_Hover_njm_8c137c10;
  _DAT_8c2810e0 = &PTR_s_gm2_Hover_njs_8c137c60;
  _DAT_8c2810e4 = PTR_s_gm2_Home_njd_8c137bec;
  _DAT_8c2810e8 = PTR_s_BABYGILLMAN_FACE_8c137c04;
  _DAT_8c2810ec = PTR_s_BABYGILLMAN_BODY_8c137c08;
  _DAT_8c2810f0 = PTR_s_Gm2_MotionPack_npd_8c137bf0;
  _DAT_8c2810f4 = PTR_s_Hand_for_gm2_njm_8c137c0c;
  _DAT_8c2810f8 = PTR_s_gm2_PVM_8c137bf4;
  _DAT_8c2810fc = 3;
  _DAT_8c281108 = 0x8c282298;
  _DAT_8c28110c = PTR_s_gm2_PVM_8c137bf8;
  _DAT_8c281110 = 3;
  _DAT_8c28111c = 0x8c2822bc;
  _DAT_8c281120 = PTR_s_gm2_head_normal_PVM_8c137bfc;
  _DAT_8c281124 = 10;
  _DAT_8c281130 = 0x8c2822e0;
  _DAT_8c281134 = PTR_s_gm2_head_normal_PVM_8c137c00;
  _DAT_8c281138 = 10;
  _DAT_8c281144 = 0x8c282358;
  _DAT_8c28118c = 0x8c2834e4;
  if (cVar12 != '\0') {
    _DAT_8c281194 = 0.75;
  }
  _DAT_8c281190 = 0x3f400000;
  if (cVar12 == '\0') {
    _DAT_8c281194 = 1.0;
    dVar10 = 0.0004882813655058271;
  }
  else {
    _DAT_8c281198 = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,_DAT_8c281194);
    dVar10 = (double)CONCAT44(_DAT_8c281194,0x3f400000);
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(_DAT_8c281198,fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)0x8c28119e),CONCAT24(_DAT_8c28119c,_DAT_8c281198));
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x46610000,fVar9);
  }
  else {
    dVar10 = 1.0361173199865e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0));
    _DAT_8c28119c = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    _DAT_8c28119c = (short)(int)dVar10;
  }
  if (_DAT_8c28119c == 0) {
    _DAT_8c28119c = 1;
  }
  if (cVar12 == '\0') {
    _DAT_8c2811b4 = SUB84(dVar10,0);
  }
  else {
    _DAT_8c2811b4 = 0x430c0000;
  }
  _DAT_8c2811ac = 0x430c0000;
  _DAT_8c2811a8 = 0x3f4ccccd;
  _DAT_8c2811a0 = CONCAT44(0x3ca3d70a,(int)_DAT_8c2811a0);
  if (cVar12 == '\0') {
    _DAT_8c2811b4 = 0;
  }
  else {
    ppuRam8c2811bc = &PTR_PTR_8c138460;
  }
  _DAT_8c2811b8 = 0x4179999a;
  uVar4 = 0x8c281160;
  _DAT_8c2811b0 = _DAT_8c2811b4;
  Class_129920_m0_015248
            (0x8c281160,&PTR_PTR_8c138460,Class_129920_m0_015248,0x8c281160,in_stack_fffffeb4);
  uVar2 = 0x8c280fb4;
  Class_129920_m0_015248(0x8c281168,&PTR_PTR_8c138460,0x8c280fb4,uVar4,in_stack_fffffeb4);
  _DAT_8c281178 = 0x8c2819c4;
  _DAT_8c28117c = 0x14;
  _DAT_8c281180 = 0x8c281a20;
  _DAT_8c281184 = 0x14;
  Vec3_set_xyz(auStack_3c,0x14,uVar2,uVar4);
  puVar6 = auStack_3c;
  uVar4 = 0x8c280fb4;
  vec3_copy_8c023d8c(&(*(uint *)0x8c2811d0),puVar6,0x8c280fb4,puVar6);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_3c,0xffffffff,uVar4,puVar6);
  Vec3_set_xyz(auStack_48,uVar2,uVar4,puVar6);
  pcVar3 = vec3_copy_8c023d8c;
  vec3_copy_8c023d8c(0x8c2811dc,auStack_48,uVar4,vec3_copy_8c023d8c);
  uVar2 = 0xffffffff;
  puVar6 = auStack_48;
  object_dtor_delete(puVar6,0xffffffff,puVar6,pcVar3);
  Vec3_set_xyz(auStack_54,uVar2,puVar6,pcVar3);
  puVar6 = auStack_54;
  vec3_copy_8c023d8c(0x8c2811e8,puVar6,puVar6,pcVar3);
  object_dtor_delete(auStack_54,0xffffffff,puVar6,pcVar3);
  if (cVar12 == '\0') {
    _DAT_8c2811f8 = CONCAT44(DAT_8c2811f8_4,0x42c80000);
    _DAT_8c2811c8 = 0x43938000;
  }
  else {
    _DAT_8c2811f8 = 0x21442c80000;
    (*(uint *)0x8c2811d0) = 0x210;
    _DAT_8c2811c8 = 0x1ec;
  }
  _DAT_8c2811cc = 0x43960000;
  _DAT_8c2811c4 = 0x41b00000;
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x3f333333,_DAT_8c2811a0);
  }
  else {
    dVar10 = 1.24825739279838e-311;
    in_xd0 = _DAT_8c2811a0;
  }
  if (cVar11 == '\0') {
    _DAT_8c2812b8 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    _DAT_8c2812b8 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c2811a0 = CONCAT44(_DAT_8c2811a4,_DAT_8c2812b8);
    uVar1 = _DAT_8c2811a0;
  }
  _DAT_8c2811a0 = uVar1;
  _DAT_8c281200 = &PTR_s_gm3_SlowHover_njm_8c137cd8;
  _DAT_8c281204 = &PTR_s_gm3_SlowHover_njs_8c137d44;
  _DAT_8c281208 = PTR_s_gm3_Home_njd_8c137cb4;
  _DAT_8c28120c = PTR_s_GM3_FACE_8c137ccc;
  _DAT_8c281210 = PTR_s_GM3_BODY_8c137cd0;
  _DAT_8c281214 = PTR_s_Gm3_MotionPack_npd_8c137cb8;
  _DAT_8c281218 = PTR_s_hand_for_gm3_njm_8c137cd4;
  _DAT_8c28121c = PTR_s_gm3_normal_PVM_8c137cbc;
  _DAT_8c281220 = 6;
  _DAT_8c28122c = 0x8c2823d0;
  _DAT_8c281230 = PTR_s_gm3_special_PVM_8c137cc0;
  _DAT_8c281234 = 6;
  _DAT_8c281240 = 0x8c282418;
  _DAT_8c281244 = PTR_s_gm3_head_normal_PVM_8c137cc4;
  _DAT_8c281248 = 10;
  _DAT_8c281254 = 0x8c282460;
  _DAT_8c281258 = PTR_s_gm3_head_special_PVM_8c137cc8;
  _DAT_8c28125c = 10;
  _DAT_8c281268 = 0x8c2824d8;
  _DAT_8c2812b0 = 0x8c283584;
  if (cVar12 != '\0') {
    _DAT_8c2812b8 = 0.85;
  }
  _DAT_8c2812b4 = 0x3f59999a;
  if (cVar12 == '\0') {
    _DAT_8c2812b8 = 1.0;
  }
  else {
    _DAT_8c2812bc = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,_DAT_8c2812b8);
  }
  puVar6 = &DAT_8c2812b4;
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x3f59999a,_DAT_8c2812b8);
  }
  else {
    dVar10 = (double)CONCAT44(_DAT_8c2812b8,0x3f59999a);
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(_DAT_8c2812bc,fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)0x8c2812c2),CONCAT24(_DAT_8c2812c0,_DAT_8c2812bc));
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x46610000,fVar9);
  }
  else {
    dVar10 = 1.0361173199865e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0));
    _DAT_8c2812c0 = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    _DAT_8c2812c0 = (short)(int)dVar10;
  }
  if (_DAT_8c2812c0 == 0) {
    _DAT_8c2812c0 = 1;
  }
  if (cVar12 == '\0') {
    _DAT_8c2812d4 = SUB84(dVar10,0);
  }
  else {
    _DAT_8c2812d4 = 0x430c0000;
  }
  _DAT_8c2812d0 = 0x430c0000;
  _DAT_8c2812cc = 0x3f4ccccd;
  _DAT_8c2812c4 = CONCAT44(0x3ca3d70a,(int)_DAT_8c2812c4);
  if (cVar12 == '\0') {
    _DAT_8c2812d4 = 0;
  }
  else {
    ppuRam8c2812e0 = &PTR_PTR_8c1384a4;
  }
  _DAT_8c2812dc = 0x41b40000;
  _DAT_8c2812d8 = 0xbfa66666;
  pcVar3 = Class_129920_m0_015248;
  Class_129920_m0_015248
            (0x8c281284,&PTR_PTR_8c1384a4,Class_129920_m0_015248,&DAT_8c2812b4,in_stack_fffffeb4);
  Class_129920_m0_015248(0x8c28128c,&PTR_PTR_8c1384a4,pcVar3,puVar6,in_stack_fffffeb4);
  _DAT_8c28129c = 0x8c281a7c;
  _DAT_8c2812a0 = 0x1b;
  _DAT_8c2812a4 = 0x8c281af4;
  uVar4 = 0x1b;
  _DAT_8c2812a8 = 0x1b;
  puVar6 = auStack_60;
  Vec3_set_xyz(puVar6,0x8c281af4,puVar6,0x1b);
  vec3_copy_8c023d8c(&(*(uint *)0x8c2812f4),auStack_60,puVar6,uVar4);
  object_dtor_delete(auStack_60,0xffffffff,puVar6,uVar4);
  Vec3_set_xyz(auStack_6c,Vec3_set_xyz,puVar6,uVar4);
  vec3_copy_8c023d8c(0x8c281300,auStack_6c,puVar6,uVar4);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_6c,0xffffffff,puVar6,uVar4);
  Vec3_set_xyz(auStack_78,uVar2,puVar6,uVar4);
  vec3_copy_8c023d8c(0x8c28130c,auStack_78,puVar6,uVar4);
  object_dtor_delete(auStack_78,0xffffffff,puVar6,uVar4);
  if (cVar12 == '\0') {
    _DAT_8c28131c = CONCAT44(DAT_8c28131c_4,0x430c0000);
    _DAT_8c2812ec = 0x43938000;
  }
  else {
    _DAT_8c28131c = 0x338430c0000;
    (*(uint *)0x8c2812f4) = 0x334;
    _DAT_8c2812ec = 0x310;
  }
  _DAT_8c2812f0 = 0x43960000;
  _DAT_8c2812e8 = 0x42040000;
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x3f333333,_DAT_8c2812c4);
  }
  else {
    dVar10 = 1.86788016376024e-311;
    in_xd0 = _DAT_8c2812c4;
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c2812c4 = CONCAT44(_DAT_8c2812c8,fVar9);
    uVar1 = _DAT_8c2812c4;
  }
  _DAT_8c2812c4 = uVar1;
  _DAT_8c281324 = &PTR_s_gm5_SlowHover_njm_8c137e08;
  _DAT_8c281328 = &PTR_s_gm5_SlowHover_njs_8c137e78;
  _DAT_8c28132c = PTR_s_gm5_Home_njd_8c137db4;
  _DAT_8c281330 = PTR_s_GILLMAN_FACE_8c137df4;
  _DAT_8c281334 = PTR_s_GILLMAN_BODY_8c137df8;
  _DAT_8c281338 = PTR_s_Gm4_MotionPack_npd_8c137db8;
  _DAT_8c28133c = PTR_s_Hand_for_gm4_njm_8c137dfc;
  _DAT_8c281340 = PTR_s_gm4_normal_PVM_8c137dc4;
  _DAT_8c281344 = 9;
  _DAT_8c281350 = 0x8c282550;
  _DAT_8c281354 = PTR_s_gm4_special_PVM_8c137dc8;
  _DAT_8c281358 = 9;
  _DAT_8c281364 = 0x8c2825bc;
  _DAT_8c281368 = PTR_s_gm4_head_normal_PVM_8c137ddc;
  _DAT_8c28136c = 10;
  _DAT_8c281378 = 0x8c2827d8;
  _DAT_8c28137c = PTR_s_gm4_head_special_PVM_8c137de0;
  _DAT_8c281380 = 10;
  _DAT_8c28138c = 0x8c282850;
  _DAT_8c2813d4 = 0x8c283624;
  if (cVar12 == '\0') {
    dVar10 = 5.004884578511337e-05;
  }
  else {
    _DAT_8c2813e0 = 0x430;
    in_xd0 = 0x4303f2e147b;
    dVar10 = 0.00022949223013711163;
  }
  _DAT_8c2813dc = 0x3f2e147b;
  _DAT_8c2813d8 = 0x3f0a3d71;
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(_DAT_8c2813e0,fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)0x8c2813e6),CONCAT24(_DAT_8c2813e4,_DAT_8c2813e0));
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x46610000,fVar9);
  }
  else {
    dVar10 = 2.29233882823794e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0));
    _DAT_8c2813e4 = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    _DAT_8c2813e4 = (short)(int)dVar10;
  }
  if (_DAT_8c2813e4 == 0) {
    _DAT_8c2813e4 = 1;
  }
  if (cVar12 == '\0') {
    _DAT_8c2813f8 = SUB84(dVar10,0);
  }
  else {
    _DAT_8c2813f8 = 0x435c0000;
  }
  _DAT_8c2813f4 = 0x435c0000;
  _DAT_8c2813f0 = 0x3e99999a;
  _DAT_8c2813e8 = CONCAT44(0x3a1d4952,(int)_DAT_8c2813e8);
  if (cVar12 == '\0') {
    _DAT_8c2813f8 = 0;
  }
  else {
    ppuRam8c281404 = &PTR_PTR_8c1384e8;
  }
  _DAT_8c281400 = 0x42630000;
  _DAT_8c2813fc = 0x3f400000;
  uVar4 = 0x8c280fb4;
  Class_129920_m0_015248(0x8c2813a8,&PTR_PTR_8c1384e8,&DAT_8c2813f4,0x8c280fb4,in_stack_fffffeb4);
  Class_129920_m0_015248(0x8c2813b0,&PTR_PTR_8c1384e8,0x3fc,uVar4,in_stack_fffffeb4);
  _DAT_8c2813c0 = 0x8c281b6c;
  uVar2 = 0x410;
  _DAT_8c2813c4 = 0x1c;
  _DAT_8c2813c8 = 0x8c281be8;
  _DAT_8c2813cc = 0x1c;
  Vec3_set_xyz(auStack_84,0x418,0x410,uVar4);
  uVar5 = 0x464;
  vec3_copy_8c023d8c(0x8c281418,auStack_84,uVar2,0x464);
  uVar4 = 0xffffffff;
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_84,0xffffffff,0xffffffff,uVar5);
  Vec3_set_xyz(auStack_90,uVar2,uVar4,uVar5);
  vec3_copy_8c023d8c(0x8c281424,auStack_90,uVar4,uVar5);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_90,0xffffffff,uVar4,uVar5);
  Vec3_set_xyz(auStack_9c,uVar2,uVar4,uVar5);
  uVar2 = 0x8c281430;
  vec3_copy_8c023d8c(0x8c281430,auStack_9c,0x8c281430,uVar5);
  object_dtor_delete(auStack_9c,0xffffffff,uVar2,uVar5);
  if (cVar12 == '\0') {
    _DAT_8c281440 = CONCAT44(DAT_8c281440_4,0x43160000);
    _DAT_8c28140c = CONCAT44(DAT_8c28140c_4,0x427c0000);
    dVar10 = (double)CONCAT44(0x3f333333,_DAT_8c2813e8);
  }
  else {
    _DAT_8c281440 = 0x45843160000;
    _DAT_8c28140c = 0x434427c0000;
    dVar10 = 2.48750293472209e-311;
    in_xd0 = _DAT_8c2813e8;
  }
  if (cVar11 == '\0') {
    _DAT_8c281500 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    _DAT_8c281500 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c2813e8 = CONCAT44(_DAT_8c2813ec,_DAT_8c281500);
    uVar1 = _DAT_8c2813e8;
  }
  _DAT_8c2813e8 = uVar1;
  _DAT_8c281448 = &PTR_s_gm5_SlowHover_njm_8c137ee8;
  _DAT_8c28144c = &PTR_s_gm5_SlowHover_njs_8c137f58;
  _DAT_8c281450 = PTR_s_gm5_Home_njd_8c137db4;
  _DAT_8c281454 = PTR_s_GILLMAN_FACE_8c137df4;
  _DAT_8c281458 = PTR_s_GILLMAN_BODY_8c137df8;
  _DAT_8c28145c = PTR_s_Gm5_MotionPack_npd_8c137dbc;
  _DAT_8c281460 = PTR_s_Hand_for_gm5_njm_8c137e00;
  _DAT_8c281464 = PTR_s_gm5_normal_PVM_8c137dcc;
  _DAT_8c281468 = 9;
  _DAT_8c281474 = 0x8c282628;
  _DAT_8c281478 = PTR_s_gm5_special_PVM_8c137dd0;
  _DAT_8c28147c = 9;
  _DAT_8c281488 = 0x8c282694;
  _DAT_8c28148c = PTR_s_gm5_head_normal_PVM_8c137de4;
  _DAT_8c281490 = 10;
  _DAT_8c28149c = 0x8c2828c8;
  _DAT_8c2814a0 = PTR_s_gm5_head_special_PVM_8c137de8;
  _DAT_8c2814a4 = 10;
  _DAT_8c2814b0 = 0x8c282940;
  _DAT_8c2814f8 = 0x8c283624;
  if (cVar12 != '\0') {
    _DAT_8c281500 = 0.68;
  }
  _DAT_8c2814fc = 0x3f2e147b;
  if (cVar12 == '\0') {
    _DAT_8c281500 = 1.0;
    dVar10 = 0.0002294922303462954;
  }
  else {
    _DAT_8c281504 = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,_DAT_8c281500);
    dVar10 = (double)CONCAT44(_DAT_8c281500,0x3f2e147b);
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(_DAT_8c281504,fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)0x8c28150a),CONCAT24(_DAT_8c281508,_DAT_8c281504));
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x46610000,fVar9);
  }
  else {
    dVar10 = 2.9119615991998e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0));
    _DAT_8c281508 = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    _DAT_8c281508 = (short)(int)dVar10;
  }
  iVar8 = (int)_DAT_8c281508;
  if (_DAT_8c281508 == 0) {
    _DAT_8c281508 = 1;
  }
  if (cVar12 == '\0') {
    _DAT_8c28151c = SUB84(dVar10,0);
  }
  else {
    _DAT_8c28151c = 0x435c0000;
  }
  _DAT_8c281518 = 0x435c0000;
  _DAT_8c281514 = 0x3e99999a;
  _DAT_8c28150c = CONCAT44(0x3a03126f,(int)_DAT_8c28150c);
  if (cVar12 == '\0') {
    _DAT_8c28151c = 0;
  }
  else {
    ppuRam8c281528 = &PTR_PTR_8c1384e8;
  }
  _DAT_8c281524 = 0x42630000;
  _DAT_8c281520 = 0x3f400000;
  pcVar3 = Class_129920_m0_015248;
  Class_129920_m0_015248
            (0x8c2814cc,&PTR_PTR_8c1384e8,Class_129920_m0_015248,iVar8,in_stack_fffffeb4);
  Class_129920_m0_015248
            (0x8c2814d4,&PTR_PTR_8c1384e8,pcVar3,Class_129920_m0_015248,in_stack_fffffeb4);
  _DAT_8c2814e4 = 0x8c281c64;
  uVar2 = 0x1c;
  _DAT_8c2814e8 = 0x1c;
  _DAT_8c2814ec = 0x8c281ce0;
  _DAT_8c2814f0 = 0x1c;
  Vec3_set_xyz(auStack_a8,0x8c280fb4,0x1c,0x8c281c64);
  pcVar7 = vec3_copy_8c023d8c;
  vec3_copy_8c023d8c(0x8c28153c,auStack_a8,uVar2,vec3_copy_8c023d8c);
  pcVar3 = object_dtor_delete;
  object_dtor_delete(auStack_a8,0xffffffff,object_dtor_delete,pcVar7);
  Vec3_set_xyz(auStack_b4,auStack_b4,pcVar3,pcVar7);
  vec3_copy_8c023d8c(0x8c281548,auStack_b4,vec3_copy_8c023d8c,pcVar7);
  puVar6 = auStack_b4;
  object_dtor_delete(puVar6,0xffffffff,puVar6,pcVar7);
  Vec3_set_xyz(auStack_c0,auStack_c0,puVar6,pcVar7);
  vec3_copy_8c023d8c(0x8c281554,auStack_c0,vec3_copy_8c023d8c,pcVar7);
  object_dtor_delete(auStack_c0,0xffffffff,auStack_c0,pcVar7);
  if (cVar12 == '\0') {
    _DAT_8c281564 = CONCAT44(DAT_8c281564_4,0x43160000);
    _DAT_8c281530 = CONCAT44(DAT_8c281530_4,0x427c0000);
    dVar10 = (double)CONCAT44(0x3f666666,_DAT_8c28150c);
  }
  else {
    _DAT_8c281564 = 0x8c280fb443160000;
    _DAT_8c281530 = 0x558427c0000;
    dVar10 = 3.10712736349307e-311;
    in_xd0 = _DAT_8c28150c;
  }
  if (cVar11 == '\0') {
    _DAT_8c281620 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    _DAT_8c281620 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c28150c = CONCAT44(_DAT_8c281510,_DAT_8c281620);
    uVar1 = _DAT_8c28150c;
  }
  _DAT_8c28150c = uVar1;
  _DAT_8c28156c = &PTR_s_gm5_SlowHover_njm_8c137fc8;
  _DAT_8c281570 = &PTR_s_gm5_SlowHover_njs_8c138038;
  _DAT_8c281574 = PTR_s_gm5_Home_njd_8c137db4;
  _DAT_8c281578 = PTR_s_GILLMAN_FACE_8c137df4;
  _DAT_8c28157c = PTR_s_GILLMAN_BODY_8c137df8;
  _DAT_8c281580 = PTR_s_Gm6_MotionPack_npd_8c137dc0;
  _DAT_8c281584 = PTR_s_Hand_for_gm6_njm_8c137e04;
  _DAT_8c281588 = PTR_s_gm6_normal_PVM_8c137dd4;
  _DAT_8c28158c = 9;
  _DAT_8c281598 = 0x8c282700;
  _DAT_8c28159c = PTR_s_gm6_special_PVM_8c137dd8;
  _DAT_8c2815a0 = 9;
  _DAT_8c2815ac = 0x8c28276c;
  _DAT_8c2815b0 = PTR_s_gm6_head_normal_PVM_8c137dec;
  _DAT_8c2815b4 = 10;
  _DAT_8c2815c0 = 0x8c2829b8;
  _DAT_8c2815c4 = PTR_s_gm6_head_special_PVM_8c137df0;
  _DAT_8c2815c8 = 10;
  _DAT_8c2815d4 = 0x8c282a30;
  _DAT_8c28161c = 0x8c283624;
  if (cVar12 == '\0') {
    _DAT_8c281620 = 1.0;
    dVar10 = 0.007812501854205038;
  }
  else {
    _DAT_8c281628 = 0x678;
    in_xd0 = 0x6783fb5c28f;
    dVar10 = (double)CONCAT44(0x3fb5c28f,_DAT_8c281620);
  }
  _DAT_8c281624 = 0x3fb5c28f;
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(_DAT_8c281628,fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)0x8c28162e),CONCAT24(_DAT_8c28162c,_DAT_8c281628));
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x46610000,fVar9);
  }
  else {
    dVar10 = 3.53158437016166e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0));
    _DAT_8c28162c = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    _DAT_8c28162c = (short)(int)dVar10;
  }
  if (_DAT_8c28162c == 0) {
    _DAT_8c28162c = 1;
  }
  if (cVar12 == '\0') {
    uVar2 = SUB84(dVar10,0);
  }
  else {
    uVar2 = 0x435c0000;
  }
  _DAT_8c28163c = 0x435c0000;
  _DAT_8c281638 = 0x3e99999a;
  _DAT_8c281634 = 0x3a03126f;
  if (cVar12 == '\0') {
    _DAT_8c281640 = 0;
    uVar4 = uVar2;
  }
  else {
    uVar4 = 0x42630000;
    ppuRam8c28164c = &PTR_PTR_8c1384e8;
    _DAT_8c281640 = uVar2;
  }
  _DAT_8c281648 = 0x42630000;
  _DAT_8c281644 = 0x3f400000;
  Class_129920_m0_015248
            (0x8c2815f0,&PTR_PTR_8c1384e8,&DAT_8c281624,Class_129920_m0_015248,in_stack_fffffeb4);
  uVar2 = 0x8c280fb4;
  pcVar3 = Class_129920_m0_015248;
  Class_129920_m0_015248(0x8c2815f8,&PTR_PTR_8c1384e8,Class_129920_m0_015248,0x8c280fb4);
  _DAT_8c281608 = 0x8c281d5c;
  _DAT_8c28160c = 0x1c;
  _DAT_8c281610 = 0x8c281dd8;
  _DAT_8c281614 = 0x1c;
  Vec3_set_xyz(auStack_cc,0x65c,pcVar3,uVar2);
  uVar5 = 0x8c281660;
  pcVar3 = vec3_copy_8c023d8c;
  vec3_copy_8c023d8c(0x8c281660,auStack_cc,vec3_copy_8c023d8c,0x8c281660);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_cc,0xffffffff,pcVar3,uVar5);
  Vec3_set_xyz(auStack_d8,uVar2,pcVar3,uVar5);
  vec3_copy_8c023d8c(0x8c28166c,auStack_d8,pcVar3,uVar5);
  uVar2 = 0xffffffff;
  pcVar7 = object_dtor_delete;
  object_dtor_delete(auStack_d8,0xffffffff,pcVar3,object_dtor_delete);
  Vec3_set_xyz(auStack_e4,uVar2,Vec3_set_xyz,pcVar7);
  uVar2 = 0x8c281678;
  vec3_copy_8c023d8c(0x8c281678,auStack_e4,0x8c281678,pcVar7);
  object_dtor_delete(auStack_e4,0xffffffff,uVar2,pcVar7);
  if (cVar12 == '\0') {
    _DAT_8c281654 = CONCAT44(DAT_8c281654_4,0x427c0000);
  }
  else {
    uVar4 = 0x427c0000;
    _DAT_8c281654 = 0x558427c0000;
  }
  _DAT_8c281690 = &PTR_s_hg1_W_Hover_njm_8c1380d0;
  _DAT_8c281694 = &PTR_s_hg1_W_Hover_njs_8c138174;
  _DAT_8c281698 = PTR_s_Hg1_Home_njd_8c1380ac;
  _DAT_8c28169c = PTR_s_HG1_FACE_8c1380c4;
  _DAT_8c2816a0 = PTR_s_HG1_BODY_8c1380c8;
  _DAT_8c2816a4 = PTR_s_Hg1_MotionPack_npd_8c1380b0;
  _DAT_8c2816a8 = PTR_s_Hand_for_hg1_njm_8c1380cc;
  _DAT_8c2816ac = PTR_s_hg1_normal_PVM_8c1380b4;
  _DAT_8c2816b0 = 0xd;
  _DAT_8c2816bc = 0x8c282aa8;
  _DAT_8c2816c0 = PTR_s_hg1_special_PVM_8c1380b8;
  _DAT_8c2816c4 = 0xd;
  _DAT_8c2816d0 = 0x8c282b44;
  _DAT_8c2816d4 = PTR_s_hg1_head_normal_PVM_8c1380bc;
  _DAT_8c2816d8 = 10;
  _DAT_8c2816e4 = 0x8c282be0;
  _DAT_8c2816e8 = PTR_s_hg1_head_special_PVM_8c1380c0;
  _DAT_8c2816ec = 10;
  _DAT_8c2816f8 = 0x8c282c58;
  _DAT_8c281740 = 0x8c2836c4;
  _DAT_8c281748 = uVar4;
  if (cVar12 != '\0') {
    _DAT_8c281748 = 0x3f5374bc;
  }
  _DAT_8c281744 = 0x3f5374bc;
  if (cVar12 == '\0') {
    _DAT_8c281748 = 0x3f800000;
    dVar10 = 0.0011874998435814632;
  }
  else {
    _DAT_8c28174c = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,_DAT_8c281748);
    dVar10 = (double)CONCAT44(_DAT_8c281748,0x3f5374bc);
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(_DAT_8c28174c,fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)0x8c281752),CONCAT24(_DAT_8c281750,_DAT_8c28174c));
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x46610000,fVar9);
  }
  else {
    dVar10 = 4.15120714112352e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0));
    _DAT_8c281750 = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    _DAT_8c281750 = (short)(int)dVar10;
  }
  if (_DAT_8c281750 == 0) {
    _DAT_8c281750 = 1;
  }
  if (cVar12 == '\0') {
    _DAT_8c281764 = SUB84(dVar10,0);
  }
  else {
    _DAT_8c281764 = 0x3e19999a;
  }
  _DAT_8c28175c = 0x3e19999a;
  _DAT_8c281754 = CONCAT44(0x3ba3d70a,(int)_DAT_8c281754);
  uVar2 = 0x8c280fb4;
  if (cVar12 != '\0') {
    _DAT_8c281764 = 0x43b40000;
  }
  _DAT_8c281760 = 0x43b40000;
  if (cVar12 == '\0') {
    _DAT_8c281764 = 0;
  }
  else {
    (*(uint *)0x8c281770) = 0x7c0;
    _DAT_8c281778 = &PTR_PTR_8c13852c;
  }
  _DAT_8c281774 = 0x41ec0000;
  _DAT_8c28176c = 0x429f0000;
  _DAT_8c281768 = 0x3fd33333;
  Class_129920_m0_015248
            (0x8c281714,&PTR_PTR_8c13852c,Class_129920_m0_015248,0x8c280fb4,in_stack_fffffeb4);
  Class_129920_m0_015248(0x8c28171c,&PTR_PTR_8c13852c,0x8c280fb4,uVar2,in_stack_fffffeb4);
  _DAT_8c28172c = 0x8c281e54;
  _DAT_8c281730 = 0x29;
  _DAT_8c281734 = 0x8c281f04;
  uVar4 = 0x784;
  _DAT_8c281738 = 0x29;
  Vec3_set_xyz(auStack_f0,0x29,0x784,uVar2);
  vec3_copy_8c023d8c(0x8c281784,auStack_f0,uVar4,uVar2);
  uVar4 = 0xffffffff;
  pcVar3 = object_dtor_delete;
  object_dtor_delete(auStack_f0,0xffffffff,object_dtor_delete,uVar2);
  Vec3_set_xyz(auStack_fc,uVar4,pcVar3,uVar2);
  uVar4 = 0x8c281790;
  pcVar3 = vec3_copy_8c023d8c;
  vec3_copy_8c023d8c(0x8c281790,auStack_fc,vec3_copy_8c023d8c,0x8c281790);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_fc,0xffffffff,pcVar3,uVar4);
  Vec3_set_xyz(auStack_108,uVar2,pcVar3,uVar4);
  vec3_copy_8c023d8c(0x8c28179c,auStack_108,pcVar3,uVar4);
  object_dtor_delete(auStack_108,0xffffffff,pcVar3,uVar4);
  if (cVar12 == '\0') {
    _DAT_8c2817ac = CONCAT44(DAT_8c2817ac_4,0x437a0000);
  }
  else {
    _DAT_8c2817ac = 0x7c4437a0000;
    (*(uint *)0x8c28177c) = 0x7a0;
  }
  _DAT_8c281778 = (undefined **)0x42e40000;
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x3fa66666,_DAT_8c281754);
  }
  else {
    dVar10 = 4.3463749776783e-311;
    in_xd0 = _DAT_8c281754;
  }
  if (cVar11 == '\0') {
    _DAT_8c28186c = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    _DAT_8c28186c = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c281754 = CONCAT44(_DAT_8c281758,_DAT_8c28186c);
    uVar1 = _DAT_8c281754;
  }
  _DAT_8c281754 = uVar1;
  _DAT_8c2817b4 = &PTR_s_hg2_W_Hover_njm_8c138240;
  _DAT_8c2817b8 = &PTR_s_hg2_W_Hover_njs_8c138310;
  _DAT_8c2817bc = PTR_s_Hg2_Home_njd_8c13821c;
  _DAT_8c2817c0 = PTR_s_HIGYO_FACE_8c138234;
  _DAT_8c2817c4 = PTR_s_HIGYO_BODY_8c138238;
  _DAT_8c2817c8 = PTR_s_Hg2_MotionPack_npd_8c138220;
  _DAT_8c2817cc = PTR_s_Hand_for_hg2_njm_8c13823c;
  _DAT_8c2817d0 = PTR_s_hg2_normal_PVM_8c138224;
  _DAT_8c2817d4 = 0xd;
  _DAT_8c2817e0 = 0x8c282cd0;
  _DAT_8c2817e4 = PTR_s_hg2_special_PVM_8c138228;
  _DAT_8c2817e8 = 0xd;
  _DAT_8c2817f4 = 0x8c282d6c;
  _DAT_8c2817f8 = PTR_s_hg2_head_normal_PVM_8c13822c;
  _DAT_8c2817fc = 10;
  _DAT_8c281808 = 0x8c282e08;
  _DAT_8c28180c = PTR_s_hg2_head_special_PVM_8c138230;
  _DAT_8c281810 = 10;
  _DAT_8c28181c = 0x8c282e80;
  _DAT_8c281864 = 0x8c283764;
  if (cVar12 == '\0') {
    _DAT_8c28186c = 1.0;
    dVar10 = 0.007812501848093234;
  }
  else {
    _DAT_8c281870 = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,_DAT_8c28186c);
    dVar10 = (double)CONCAT44(_DAT_8c28186c,_DAT_8c28186c);
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(_DAT_8c281870,fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)0x8c281876),CONCAT24(_DAT_8c281874,_DAT_8c281870));
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x46610000,fVar9);
  }
  else {
    dVar10 = 4.77082991208538e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0));
    _DAT_8c281874 = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    _DAT_8c281874 = (short)(int)dVar10;
  }
  if (_DAT_8c281874 == 0) {
    _DAT_8c281874 = 1;
  }
  if (cVar12 == '\0') {
    _DAT_8c281888 = SUB84(dVar10,0);
  }
  else {
    _DAT_8c281888 = 0x3ba3d70a;
  }
  _DAT_8c281878 = CONCAT44(0x3ba3d70a,(int)_DAT_8c281878);
  uVar2 = 0x8c280fb4;
  if (cVar12 != '\0') {
    _DAT_8c281888 = 0x43be0000;
  }
  _DAT_8c281884 = 0x43be0000;
  _DAT_8c281880 = 0x3e19999a;
  if (cVar12 == '\0') {
    _DAT_8c281888 = 0;
  }
  else {
    (*(uint *)0x8c281894) = 0x8e4;
    _DAT_8c28189c = &PTR_PTR_8c138570;
  }
  _DAT_8c281898 = 0x42120000;
  _DAT_8c281890 = 0x42c00000;
  _DAT_8c28188c = 0x40000000;
  _DAT_8c281868 = _DAT_8c28186c;
  Class_129920_m0_015248
            (0x8c281838,&PTR_PTR_8c138570,Class_129920_m0_015248,0x8c280fb4,in_stack_fffffeb4);
  pcVar3 = Class_129920_m0_015248;
  Class_129920_m0_015248(0x8c281840,&PTR_PTR_8c138570,Class_129920_m0_015248,uVar2);
  _DAT_8c281850 = 0x8c281fb4;
  _DAT_8c281854 = 0x34;
  _DAT_8c281858 = 0x8c282090;
  uVar4 = 0x8a8;
  _DAT_8c28185c = 0x34;
  Vec3_set_xyz(auStack_114,0x8c280fb4,pcVar3,0x8a8);
  vec3_copy_8c023d8c(0x8c2818a8,auStack_114,0x8f4,uVar4);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_114,0xffffffff,auStack_114,uVar4);
  pcVar3 = Vec3_set_xyz;
  Vec3_set_xyz(auStack_120,uVar2,Vec3_set_xyz,uVar4);
  vec3_copy_8c023d8c(0x8c2818b4,auStack_120,pcVar3,uVar4);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_120,0xffffffff,pcVar3,uVar4);
  Vec3_set_xyz(auStack_12c,uVar2,pcVar3,Vec3_set_xyz);
  uVar2 = 0x8c280fb4;
  pcVar3 = vec3_copy_8c023d8c;
  vec3_copy_8c023d8c(0x8c2818c0,auStack_12c,vec3_copy_8c023d8c,0x8c280fb4);
  object_dtor_delete(auStack_12c,0xffffffff,pcVar3,uVar2);
  if (cVar12 == '\0') {
    _DAT_8c2818d0 = CONCAT44(DAT_8c2818d0_4,0x43960000);
  }
  else {
    _DAT_8c2818d0 = 0x8e843960000;
    (*(uint *)0x8c2818a0) = 0x8c4;
  }
  _DAT_8c28189c = (undefined **)0x42fe0000;
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x3fc00000,_DAT_8c281878);
  }
  else {
    dVar10 = -4.2070694879144825e-250;
    in_xd0 = _DAT_8c281878;
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c281878 = CONCAT44(_DAT_8c28187c,fVar9);
    uVar1 = _DAT_8c281878;
  }
  _DAT_8c281878 = uVar1;
  _DAT_8c2818e0 = 3;
  _DAT_8c2818e4 = 1;
  _DAT_8c2818e8 = 0;
  _DAT_8c2818ec = 0;
  _DAT_8c2818f0 = 6;
  _DAT_8c2818f4 = 1;
  _DAT_8c2818f8 = 0;
  _DAT_8c2818fc = 0;
  _DAT_8c281900 = 0xffff;
  _DAT_8c281904 = 1;
  _DAT_8c281908 = 0;
  _DAT_8c28190c = 0;
  return 0x20;
}

__asm__(".globl _s_gm1_Home_njd_085f50\n.set _s_gm1_Home_njd_085f50, _s_gm1_Home_njd_085f50_def\n");
//@unit 8c087ed0
#include "../decls.h"
int s_GRAPHICS_HIGYOLINE_087ed2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  int ar6_01;
  undefined4 ar7_00;
  
  ar7_00 = 0x15;
  ar6_00 = 1;
  uVar1 = 4;
  FUN_8c0254d0(ar4,4,1,0x15,0,ar5,0x8c283804,0x8c283934,PTR_s_GRAPHICS_HIGYOLINE_8c138578);
  *(undefined **)(ar4 + 8) = &DAT_8c12a298;
  FUN_8c016fcc(ar4 + 0x490,uVar1,ar6_00,ar7_00);
  FUN_8c02ff6c(ar4 + 0x528,uVar1,ar6_00,ar7_00);
  FUN_8c030fa0(ar4 + 0x5c4,uVar1,ar6_00,ar7_00);
  FUN_8c014334(ar4 + 0xc,uVar1,ar6_00,ar7_00,s_HigyoEgg_8c139e22);
  *(int *)(ar4 + 0x308) = ar4 + 0x528;
  *(int *)(ar4 + 0x30c) = ar4 + 0x5c4;
  *(undefined1 *)(ar4 + 0x524) = 0xff;
  ar6_01 = ar4 + 0x490;
  uVar1 = *(undefined4 *)(*(int *)(ar4 + 0x328) + 0xb4);
  FUN_8c0f532c(ar4,uVar1,ar6_01,ar7_00);
  FUN_8c027224(ar4 + 0x5c4,uVar1,ar6_01,ar7_00,ar5);
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x28))((int *)(ar4 + 0xa8),ar4 + 0x30,ar6_01,ar7_00);
  *(undefined4 *)(ar4 + 0x330) = 0;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_HIGYOLINE_087ed2\n.set _s_GRAPHICS_HIGYOLINE_087ed2, _s_GRAPHICS_HIGYOLINE_087ed2_def\n");
//@unit 8c08800c
#include "../decls.h"
int CAnimal_m0_08800c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12a298;
    Class_129cbc_m0_0312f4(ar4 + 0x5c4,0xffffffff,ar6,ar7);
    Class_129c24_m0_02ff90(ar4 + 0x528,0xffffffff,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _CAnimal_m0_08800c\n.set _CAnimal_m0_08800c, _CAnimal_m0_08800c_def\n");
//@unit 8c088094
#include "../decls.h"
undefined4 CAnimal_m2_088094_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  cVar1 = *(char *)(0x524 + ar4);
  uVar4 = ar5;
  uVar5 = ar6;
  piVar6 = ar7;
  if (cVar1 == -1) {
    if (*(int *)(0x330 + ar4) != 0) {
      (**(code **)(0x10c + *(int *)(*(int *)(0x330 + ar4) + 8)))
                (*(int *)(0x330 + ar4),ar5,ar6,ar7);
    }
    *(undefined1 *)(0x524 + ar4) = 0;
  }
  else if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar5 = 0x1b;
      FUN_8c0b9ed4(ar5,0x16,0x1b,ar7);
      (**(code **)(0x110 + *(int *)(*(int *)(0x330 + ar4) + 8)))
                (*(int *)(0x330 + ar4),0,uVar5,piVar6);
      uVar4 = *(undefined4 *)(0x330 + ar4);
      (**(code **)(*ar7 + 0x4c))(ar7,uVar4,uVar5,piVar6);
      *(undefined4 *)(0x330 + ar4) = 0;
      FUN_8c0f4d84(ar4,uVar4,uVar5,piVar6);
      *(undefined1 *)(0x524 + ar4) = 2;
    }
    goto LAB_8c0881ac;
  }
  uVar2 = FUN_8c02602c(ar5,uVar4,uVar5,piVar6);
  iVar3 = get_field_c_02d1b8(ar4 + 0x21c,uVar4,uVar5,piVar6);
  uVar4 = 0x3c;
  iVar3 = (*(code *)(&libgcc_divide_helper_0101e4))
                    ((uVar2 & 0xffff) - iVar3,0x3c,uVar5,piVar6);
  if (9 < iVar3) {
    *(undefined1 *)(0x524 + ar4) = 1;
  }
  if (*(int *)(0x330 + ar4) != 0) {
    (**(code **)(0x110 + *(int *)(*(int *)(0x330 + ar4) + 8)))
              (*(int *)(0x330 + ar4),1,uVar5,piVar6);
    (**(code **)(*(int *)(*(int *)(0x330 + ar4) + 8) + 0x10))
              (*(int *)(0x330 + ar4),ar5,ar6,ar7);
    FUN_8c036988(*(undefined4 *)(0x330 + ar4),ar5,ar6,ar7);
    uVar4 = ar5;
    uVar5 = ar6;
    piVar6 = ar7;
  }
LAB_8c0881ac:
  (**(code **)(0xf8 + *(int *)(ar4 + 8)))(ar4,uVar4,uVar5,piVar6);
  FUN_8c0f79b8(ar4 + 0xa0,uVar4,uVar5,piVar6);
  return 1;
}

__asm__(".globl _CAnimal_m2_088094\n.set _CAnimal_m2_088094, _CAnimal_m2_088094_def\n");
//@unit 8c088210
#include "../decls.h"
undefined4 * CAnimal_m7_088210_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  double in_dr0;
  double dVar2;
  undefined4 in_fr3;
  double dVar4;
  double in_dr14;
  double in_xd14;
  bool bVar5;
  char cVar6;
  char cVar7;
  float fVar3;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (**(code **)(*ar5 + 0x184))(ar5,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd14;
  }
  CAnimal_m7_0f49b8(ar4,ar5,ar6,ar7);
  puVar1 = (undefined4 *)(*(uint *)(ar4 + 0x74) & 0x40);
  if (puVar1 != (undefined4 *)0x40) {
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),in_fr3);
    }
    else {
      dVar4 = *(double *)(ar4 + 0x34);
    }
    puVar1 = &DAT_8c08827c;
    dVar2 = in_dr0;
    if (cVar7 == '\0') {
      dVar2 = (double)CONCAT44(SUB84(in_dr14,0),0x41200000);
    }
    if (cVar6 == '\0') {
      fVar3 = (float)((ulonglong)dVar2 >> 0x20) - SUB84(dVar2,0);
      dVar2 = (double)CONCAT44(fVar3,SUB84(dVar2,0));
      bVar5 = fVar3 < (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      dVar2 = dVar2 - dVar2;
      bVar5 = dVar2 < dVar4;
    }
    if (bVar5) {
      puVar1 = &DAT_8c08827c;
      if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44(0x41200000,SUB84(dVar2,0));
      }
      else {
        dVar4 = 1.251627927188126e-308;
      }
      if (cVar6 == '\0') {
        fVar3 = SUB84(in_dr14,0) - (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(in_dr14 - dVar4,0);
      }
      if (cVar7 == '\0') {
        *(float *)(ar4 + 0x34) = fVar3;
      }
      else {
        *(double *)(ar4 + 0x34) = in_dr0;
      }
    }
  }
  return puVar1;
}

__asm__(".globl _CAnimal_m7_088210\n.set _CAnimal_m7_088210, _CAnimal_m7_088210_def\n");
//@unit 8c088280
#include "../decls.h"
undefined4 noop_088280_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_088280\n.set _noop_088280, _noop_088280_def\n");
//@unit 8c088284
#include "../decls.h"
undefined4 noop_088284_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_088284\n.set _noop_088284, _noop_088284_def\n");
//@unit 8c088288
#include "../decls.h"
undefined4 FUN_8c088288_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  int ar7_00;
  int ar6_00;
  int ar5_00;
  char cVar4;
  char cVar5;
  undefined4 in_stack_fffffff4;
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_fffffff4);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_fffffff4);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar3 / dVar3);
  }
  FUN_8c256b0c(0,ar5_00,ar6_00,ar7_00,in_stack_fffffff4);
  FUN_8c256fec(0,ar5_00,ar6_00,ar7_00,in_stack_fffffff4);
  uVar1 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5_00,ar6_00,ar7_00);
  FUN_8c219a9a(uVar1,ar5_00,ar6_00,ar7_00);
  FUN_8c256210(1,ar5_00,ar6_00,ar7_00);
  uVar1 = 0;
  if (*(int *)(ar4 + 0x330) != 0) {
    FUN_8c0f4b44(*(undefined4 *)(ar4 + 0x330),ar5_00,ar6_00,ar7_00);
    uVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x34))
                      (*(int *)(ar4 + 0x330),ar5_00,ar6_00,ar7_00);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c088288\n.set _FUN_8c088288, _FUN_8c088288_def\n");
//@unit 8c0883a8
#include "../decls.h"
undefined4 FUN_8c0883a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  noop_038c8c(ar4,ar5,ar6,ar7,in_PR);
  uVar1 = 0;
  if (*(int *)(ar4 + 0x330) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x5c))
                      (*(int *)(ar4 + 0x330),ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0883a8\n.set _FUN_8c0883a8, _FUN_8c0883a8_def\n");
//@unit 8c0883e0
#include "../decls.h"
undefined4 FUN_8c0883e0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0f4e34(ar4,ar5,ar6,ar7);
  FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7);
  uVar1 = FUN_8c035338(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0883e0\n.set _FUN_8c0883e0, _FUN_8c0883e0_def\n");
//@unit 8c088440
#include "../decls.h"
undefined4 FUN_8c088440_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0f4f0c(ar4,ar5,ar6,ar7);
  FUN_8c02cf20(ar4 + 0x174,ar5 + 0x4c,ar6,ar7);
  uVar1 = FUN_8c03539c(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c088440\n.set _FUN_8c088440, _FUN_8c088440_def\n");
//@unit 8c0884a0
#include "../decls.h"
undefined4 FUN_8c0884a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a6;
  undefined4 uVar1;
  
  a6 = s_Shell_0fef9c(ar5,3,2,ar7);
  uVar1 = 0;
  if (a6 != 0) {
    uVar1 = (**(code **)(0x100 + *(int *)(ar4 + 8)))(ar4,0,a6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0884a0\n.set _FUN_8c0884a0, _FUN_8c0884a0_def\n");
//@unit 8c0884ec
#include "../decls.h"
int FUN_8c0884ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x330;
  *(undefined4 *)(0x330 + ar4) = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c0884ec\n.set _FUN_8c0884ec, _FUN_8c0884ec_def\n");
//@unit 8c0884f8
#include "../decls.h"
undefined4 FUN_8c0884f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(0x330 + ar4) != 0) {
    uVar1 = FUN_8c0ff500(ar5,ar4 + 0x330,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0884f8\n.set _FUN_8c0884f8, _FUN_8c0884f8_def\n");
//@unit 8c08852c
#include "../decls.h"
undefined4 s_CHigyoEgg_LoadGRReq_088532_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(0x420 + ar4) == 0) {
    iVar1 = s_Failed_to_load_Pack_CAnimal__027a86(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(0x420 + ar4) = 1;
    }
  }
  else if (*(int *)(0x420 + ar4) == 1) {
    if (*(int *)(0x330 + ar4) == 0) {
      (*(code *)(&report_error_message))
                ((&DATA_8c138590) + 0x189b,
                 (&DATA_8c138590) + 0x18ad,0,2);
      *(undefined4 *)(0x420 + ar4) = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = (**(code **)(0xdc + *(int *)(*(int *)(0x330 + ar4) + 8)))
                        (*(int *)(0x330 + ar4),ar5,0,ar7);
      if (iVar1 == 1) {
        *(undefined2 *)(0x41c + ar4) = 0;
        *(undefined4 *)(0x420 + ar4) = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _s_CHigyoEgg_LoadGRReq_088532\n.set _s_CHigyoEgg_LoadGRReq_088532, _s_CHigyoEgg_LoadGRReq_088532_def\n");
//@unit 8c0885fc
#include "../decls.h"
undefined4 FUN_8c0885fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  s_Failed_to_Load_CAnimal_LoadG_0284b8(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(0x330 + ar4) != 0) {
    uVar1 = (**(code **)(0xe0 + *(int *)(*(int *)(0x330 + ar4) + 8)))
                      (*(int *)(0x330 + ar4),ar5,0,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0885fc\n.set _FUN_8c0885fc, _FUN_8c0885fc_def\n");
//@unit 8c08864c
#include "../decls.h"
undefined4 FUN_8c08864c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c028afc(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(0x330 + ar4) != 0) {
    uVar1 = (**(code **)(0xec + *(int *)(*(int *)(0x330 + ar4) + 8)))
                      (*(int *)(0x330 + ar4),ar5,0,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c08864c\n.set _FUN_8c08864c, _FUN_8c08864c_def\n");
//@unit 8c08869c
#include "../decls.h"
undefined4 s_gme_Home_nj_08869c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c7fc) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c75c) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c748) = 0;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7c758) = 0;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7c750) = 0;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(iVar1 * 0x124 + -0x73d7c7f8) = &PTR_s_gme_Birth_njm_8c138588;
    *(undefined ***)(iVar1 * 0x124 + -0x73d7c7f4) = &PTR_s_gme_Birth_njs_8c13858c;
    *(undefined **)(iVar1 * 0x124 + -0x73d7c7f0) = PTR_s_gme_Home_nj_8c13857c;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c7ec) = 0;
    *(undefined **)(iVar1 * 0x124 + -0x73d7c7e8) = PTR_s_HIGYO_EGG_8c138584;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c7e4) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c75c) = 0x8c283950;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7c758) = 1;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c754) = 0x8c283960;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7c750) = 1;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c748) = 0x8c283a50;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c740) = 0x3f800000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c730) = 0x3ca3d70a;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c72c) = 0x3f4ccccd;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c728) = 0x42c80000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(iVar1 * 0x10 + -0x73d7c6cc) = 0xffff;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7c6c8) = 1;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7c6c4) = 0;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7c6c0) = 0;
  }
  return 1;
}

__asm__(".globl _s_gme_Home_nj_08869c\n.set _s_gme_Home_nj_08869c, _s_gme_Home_nj_08869c_def\n");
//@unit 8c08891c
#include "../decls.h"
undefined4 CAnimal_m3_08891c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x10))(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _CAnimal_m3_08891c\n.set _CAnimal_m3_08891c, _CAnimal_m3_08891c_def\n");
//@unit 8c088944
#include "../decls.h"
undefined4 ret_const_1_088944_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}

__asm__(".globl _ret_const_1_088944\n.set _ret_const_1_088944, _ret_const_1_088944_def\n");
//@unit 8c08894c
#include "../decls.h"
undefined4 FUN_8c08894c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  char cVar6;
  
  cVar6 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125f50,Vec3_ctor_xyz,ar6,ar7);
  uVar3 = 0x8c280f78;
  global_list_push(uVar1,Vec3_dtor,0x8c280f78,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125f60,Vec3_ctor_xyz,uVar3,ar7);
  uVar3 = 0x8c280f84;
  global_list_push(uVar1,Vec3_dtor,0x8c280f84,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125f70,Vec3_ctor_xyz,uVar3,ar7);
  uVar3 = 0x8c280f90;
  global_list_push(uVar1,Vec3_dtor,0x8c280f90,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125f80,Vec3_ctor_xyz,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c280f9c,ar7);
  if (cVar6 == '\0') {
    _DAT_8c125f90 = CONCAT44(_UNK_8c125f94,0x800000);
                    
  }
  else {
    _DAT_8c125f90 = 0xffffffff00800000;
  }
  uVar1 = 0x124;
  FUN_8c010120(0x8c280fb4,FUN_8c02452c,FUN_8c03a4ac,0x124,8);
  global_list_push(0,FUN_8c08a154,0x8c280fa8,uVar1);
  uVar1 = 0x10;
  FUN_8c010120(&DAT_8c2818e0,FUN_8c024824,free_if_nonnull_wrap_03a454,0x10,3);
  global_list_push(0,FUN_8c08a130,0x8c2818d4,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c28191c,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x12);
  global_list_push(0,FUN_8c08a10c,0x8c281910,uVar1);
  FUN_8c010120(0x8c281970,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x12);
  global_list_push(0,FUN_8c08a0e8,0x8c281964,0);
  uVar1 = 4;
  FUN_8c010120(0x8c2819c4,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x14);
  global_list_push(0,FUN_8c08a0c4,0x8c2819b8,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c281a20,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x14);
  global_list_push(0,FUN_8c08a0a0,0x8c281a14,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c281a7c,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x1b);
  global_list_push(0,FUN_8c08a07c,0x8c281a70,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c281af4,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x1b);
  global_list_push(0,FUN_8c08a058,0x8c281ae8,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c281b6c,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x1c);
  global_list_push(0,FUN_8c08a034,0x8c281b60,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c281be8,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x1c);
  global_list_push(0,FUN_8c08a010,0x8c281bdc,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c281c64,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x1c);
  global_list_push(0,FUN_8c089fec,0x8c281c58,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c281ce0,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x1c);
  global_list_push(0,FUN_8c089fc8,0x8c281cd4,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c281d5c,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x1c);
  global_list_push(0,FUN_8c089fa4,0x8c281d50,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c281dd8,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x1c);
  global_list_push(0,FUN_8c089f80,0x8c281dcc,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c281e54,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x29);
  global_list_push(0,FUN_8c089f5c,0x8c281e48,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c281f04,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x29);
  global_list_push(0,FUN_8c089f38,0x8c281ef8,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c281fb4,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x34);
  global_list_push(0,FUN_8c089f14,0x8c281fa8,uVar1);
  uVar4 = 4;
  FUN_8c010120(0x8c282090,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x34);
  global_list_push(0,FUN_8c089ef0,0x8c282084,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c282f04,Vec3_ctor_xyz,0x8c282f04,uVar4);
  global_list_push(uVar1,Vec3_dtor,0x8c282ef8,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c282f20,Vec3_ctor_xyz,0x8c282f20,uVar4);
  global_list_push(uVar1,Vec3_dtor,0x8c282f14,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c282f3c,Vec3_ctor_xyz,0x8c282f3c,uVar4);
  global_list_push(uVar1,Vec3_dtor,0x8c282f30,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c282f58,Vec3_ctor_xyz,0x8c282f58,uVar4);
  uVar3 = 0x8c282f4c;
  global_list_push(uVar1,Vec3_dtor,0x8c282f4c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c282f74,Vec3_ctor_xyz,uVar3,uVar4);
  uVar3 = 0x8c282f68;
  global_list_push(uVar1,Vec3_dtor,0x8c282f68,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c282f90,0x8c282f90,uVar3,uVar4);
  uVar3 = 0x8c282f84;
  global_list_push(uVar1,Vec3_dtor,0x8c282f84,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c282fac,0x8c282fac,uVar3,uVar4);
  uVar3 = 0x8c282fa0;
  global_list_push(uVar1,Vec3_dtor,0x8c282fa0,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c282fc8,0x8c282fc8,uVar3,uVar4);
  uVar3 = 0x8c282fbc;
  global_list_push(uVar1,Vec3_dtor,0x8c282fbc,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c282fe4,0x8c282fe4,uVar3,uVar4);
  uVar3 = 0x8c282fd8;
  pcVar2 = Vec3_dtor;
  pcVar5 = global_list_push;
  global_list_push(uVar1,Vec3_dtor,0x8c282fd8,global_list_push);
  uVar1 = Vec3_ctor_xyz(0x8c283000,pcVar2,uVar3,pcVar5);
  uVar3 = 0x8c282ff4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c282ff4,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c28301c,pcVar2,uVar3,pcVar5);
  uVar3 = 0x8c283010;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283010,uVar1);
  uVar1 = Vec3_ctor_xyz(0x8c283038,pcVar2,uVar3,uVar1);
  uVar3 = 0x8c28302c;
  global_list_push(uVar1,Vec3_dtor,0x8c28302c,uVar1);
  uVar3 = Vec3_ctor_xyz(0x8c283054,0x8c283054,uVar3,uVar1);
  uVar4 = 0x8c283048;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar3,Vec3_dtor,0x8c283048,uVar1);
  pcVar5 = Vec3_ctor_xyz;
  uVar1 = Vec3_ctor_xyz(0x8c283070,pcVar2,uVar4,Vec3_ctor_xyz);
  uVar3 = 0x8c283064;
  global_list_push(uVar1,Vec3_dtor,0x8c283064,pcVar5);
  pcVar5 = Vec3_ctor_xyz;
  uVar1 = Vec3_ctor_xyz(0x8c28308c,0x8c28308c,uVar3,Vec3_ctor_xyz);
  uVar3 = 0x8c283080;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283080,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c2830a8,pcVar2,uVar3,pcVar5);
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28309c,pcVar5);
  uVar4 = 0x8c2830c4;
  uVar1 = Vec3_ctor_xyz(0x8c2830c4,pcVar2,Vec3_ctor_xyz,0x8c2830c4);
  uVar3 = 0x8c2830b8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2830b8,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2830e0,pcVar2,uVar3,uVar4);
  uVar4 = 0x8c2830d4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2830d4,0x8c2830d4);
  uVar1 = Vec3_ctor_xyz(0x8c2830fc,pcVar2,Vec3_ctor_xyz,uVar4);
  uVar3 = 0x8c2830f0;
  global_list_push(uVar1,Vec3_dtor,0x8c2830f0,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c283118,Vec3_ctor_xyz,uVar3,uVar4);
  uVar3 = 0x8c28310c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28310c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c283134,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c283128;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283128,uVar1);
  uVar1 = Vec3_ctor_xyz(0x8c283150,pcVar2,uVar3,uVar1);
  uVar3 = 0x8c283144;
  global_list_push(uVar1,Vec3_dtor,0x8c283144,uVar1);
  uVar3 = Vec3_ctor_xyz(0x8c28316c,0x8c28316c,uVar3,uVar1);
  uVar4 = 0x8c283160;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar3,Vec3_dtor,0x8c283160,uVar1);
  uVar3 = Vec3_ctor_xyz(0x8c283188,pcVar2,uVar4,uVar1);
  uVar4 = 0x8c28317c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar3,Vec3_dtor,0x8c28317c,uVar1);
  uVar1 = Vec3_ctor_xyz(0x8c2831a4,pcVar2,uVar4,uVar1);
  uVar3 = 0x8c283198;
  pcVar5 = Vec3_dtor;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283198,Vec3_dtor);
  uVar1 = Vec3_ctor_xyz(0x8c2831c0,pcVar2,uVar3,pcVar5);
  uVar3 = 0x8c2831b4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2831b4,pcVar5);
  uVar4 = 0x8c2831dc;
  uVar1 = Vec3_ctor_xyz(0x8c2831dc,pcVar2,uVar3,0x8c2831dc);
  uVar3 = 0x8c2831d0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2831d0,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2831f8,pcVar2,uVar3,uVar4);
  uVar4 = 0x8c2831ec;
  uVar3 = 0x8c2831ec;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2831ec,0x8c2831ec);
  uVar1 = Vec3_ctor_xyz(0x8c283214,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c283208;
  pcVar2 = Vec3_dtor;
  pcVar5 = global_list_push;
  global_list_push(uVar1,Vec3_dtor,0x8c283208,global_list_push);
  uVar1 = Vec3_ctor_xyz(0x8c283230,pcVar2,uVar3,pcVar5);
  uVar3 = 0x8c283224;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283224,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c28324c,pcVar2,uVar3,pcVar5);
  uVar3 = 0x8c283240;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283240,uVar1);
  uVar1 = Vec3_ctor_xyz(0x8c283268,pcVar2,uVar3,uVar1);
  uVar3 = 0x8c28325c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28325c,uVar1);
  uVar3 = Vec3_ctor_xyz(0x8c283284,pcVar2,uVar3,uVar1);
  uVar4 = 0x8c283278;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar3,Vec3_dtor,0x8c283278,uVar1);
  pcVar5 = Vec3_ctor_xyz;
  uVar1 = Vec3_ctor_xyz(0x8c2832a0,pcVar2,uVar4,Vec3_ctor_xyz);
  uVar3 = 0x8c283294;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283294,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c2832bc,pcVar2,uVar3,pcVar5);
  uVar3 = 0x8c2832b0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2832b0,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c2832d8,pcVar2,uVar3,pcVar5);
  uVar3 = 0x8c2832cc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2832cc,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c2832f4,pcVar2,uVar3,pcVar5);
  uVar3 = 0x8c2832e8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2832e8,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c283310,pcVar2,uVar3,pcVar5);
  uVar3 = 0x8c283304;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283304,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c28332c,pcVar2,uVar3,pcVar5);
  uVar3 = 0x8c283320;
  global_list_push(uVar1,Vec3_dtor,0x8c283320,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c283348,Vec3_ctor_xyz,uVar3,pcVar5);
  uVar3 = 0x8c28333c;
  global_list_push(uVar1,Vec3_dtor,0x8c28333c,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c283364,Vec3_ctor_xyz,uVar3,pcVar5);
  uVar3 = 0x8c283358;
  global_list_push(uVar1,Vec3_dtor,0x8c283358,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c283380,Vec3_ctor_xyz,uVar3,pcVar5);
  uVar3 = 0x8c283374;
  global_list_push(uVar1,Vec3_dtor,0x8c283374,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c28339c,Vec3_ctor_xyz,uVar3,pcVar5);
  global_list_push(uVar1,Vec3_dtor,0x8c283390,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c2833b8,Vec3_ctor_xyz,0x8c2833b8,pcVar5);
  uVar4 = 0x8c2833ac;
  uVar3 = 0x8c2833ac;
  global_list_push(uVar1,Vec3_dtor,0x8c2833ac,0x8c2833ac);
  uVar1 = Vec3_ctor_xyz(0x8c2833d4,Vec3_ctor_xyz,uVar3,uVar4);
  pcVar2 = global_list_push;
  global_list_push(uVar1,Vec3_dtor,0x8c2833c8,global_list_push);
  uVar1 = Vec3_ctor_xyz(0x8c2833f0,Vec3_ctor_xyz,0x8c2833f0,pcVar2);
  uVar3 = 0x8c2833e4;
  global_list_push(uVar1,Vec3_dtor,0x8c2833e4,pcVar2);
  uVar1 = Vec3_ctor_xyz(0x8c28340c,Vec3_ctor_xyz,uVar3,pcVar2);
  global_list_push(uVar1,Vec3_dtor,0x8c283400,uVar1);
  uVar1 = Vec3_ctor_xyz(0x8c283428,Vec3_ctor_xyz,0x8c283428,uVar1);
  global_list_push(uVar1,Vec3_dtor,0x8c28341c,uVar1);
  uVar3 = 0x8c282f3c;
  uVar1 = FUN_8c017010(0x8c283444,0x8c282f04,0x8c282f20,0x8c282f3c,0x8c282f58,0x8c282f74,0x8c282f90,
                       0x8c282fac,0x8c282fc8);
  global_list_push(uVar1,Class_129938_m0_017084,0x8c283438,uVar3);
  uVar1 = FUN_8c017010(0x8c2834e4,0x8c282fe4,0x8c283000,0x8c28301c,0x8c283038,0x8c283054,0x8c283070,
                       0x8c28308c,0x8c2830a8);
  global_list_push(uVar1,Class_129938_m0_017084,0x8c2834d8,uVar1);
  uVar3 = 0x8c2830fc;
  uVar1 = FUN_8c017010(0x8c283584,0x8c2830c4,0x8c2830e0,0x8c2830fc,0x8c283118,0x8c283134,0x8c283150,
                       0x8c28316c,0x8c283188);
  global_list_push(uVar1,Class_129938_m0_017084,0x8c283578,uVar3);
  uVar1 = FUN_8c017010(0x8c283624,0x8c2831a4,0x8c2831c0,0x8c2831dc,0x8c2831f8,0x8c283214,0x8c283230,
                       0x8c28324c,0x8c283268);
  global_list_push(uVar1,Class_129938_m0_017084,0x8c283618,uVar1);
  uVar3 = 0x8c2832bc;
  uVar1 = FUN_8c017010(0x8c2836c4,0x8c283284,0x8c2832a0,0x8c2832bc,0x8c2832d8,0x8c2832f4,0x8c283310,
                       0x8c28332c,0x8c283348);
  global_list_push(uVar1,Class_129938_m0_017084,0x8c2836b8,uVar3);
  uVar1 = FUN_8c017010(0x8c283764,0x8c283364,0x8c283380,0x8c28339c,0x8c2833b8,0x8c2833d4,0x8c2833f0,
                       0x8c28340c,0x8c283428);
  uVar3 = 0x8c283758;
  global_list_push(uVar1,Class_129938_m0_017084,0x8c283758,uVar1);
  uVar3 = FUN_8c02452c(0x8c283804,0x8c283804,uVar3,uVar1);
  uVar4 = 0x8c2837f8;
  pcVar2 = FUN_8c03a4ac;
  global_list_push(uVar3,FUN_8c03a4ac,0x8c2837f8,uVar1);
  pcVar5 = FUN_8c024824;
  uVar1 = FUN_8c024824(0x8c283934,pcVar2,uVar4,FUN_8c024824);
  uVar3 = 0x8c283928;
  global_list_push(uVar1,free_if_nonnull_wrap_03a454,0x8c283928,pcVar5);
  uVar1 = FUN_8c015b94(0x8c283950,0x8c283950,uVar3,pcVar5);
  uVar3 = 0x8c283944;
  pcVar5 = free_if_nonnull_wrap_0247b0;
  pcVar2 = free_if_nonnull_wrap_0247b0;
  global_list_push(uVar1,free_if_nonnull_wrap_0247b0,0x8c283944,free_if_nonnull_wrap_0247b0);
  uVar1 = FUN_8c015bc8(0x8c283960,pcVar2,uVar3,pcVar5);
  pcVar2 = free_if_nonnull_wrap_03a3dc;
  global_list_push(uVar1,free_if_nonnull_wrap_03a3dc,0x8c283954,pcVar5);
  uVar4 = 0x8c283970;
  uVar1 = Vec3_ctor_xyz(0x8c283970,pcVar2,Vec3_ctor_xyz,0x8c283970);
  uVar3 = 0x8c283964;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283964,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c28398c,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c283980;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283980,0x8c283980);
  uVar1 = Vec3_ctor_xyz(0x8c2839a8,pcVar2,Vec3_ctor_xyz,uVar3);
  pcVar5 = global_list_push;
  global_list_push(uVar1,Vec3_dtor,0x8c28399c,global_list_push);
  uVar1 = Vec3_ctor_xyz(0x8c2839c4,Vec3_ctor_xyz,0x8c2839c4,pcVar5);
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2839b8,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c2839e0,pcVar2,Vec3_ctor_xyz,pcVar5);
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2839d4,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c2839fc,pcVar2,Vec3_ctor_xyz,pcVar5);
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2839f0,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c283a18,pcVar2,Vec3_ctor_xyz,pcVar5);
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283a0c,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c283a34,pcVar2,Vec3_ctor_xyz,pcVar5);
  global_list_push(uVar1,Vec3_dtor,0x8c283a28,pcVar5);
  uVar3 = 0x8c2839a8;
  uVar1 = FUN_8c017010(0x8c283a50,0x8c283970,0x8c28398c,0x8c2839a8,0x8c2839c4,0x8c2839e0,0x8c2839fc,
                       0x8c283a18,0x8c283a34);
  uVar1 = global_list_push(uVar1,Class_129938_m0_017084,0x8c283a44,uVar3);
  return uVar1;
}

__asm__(".globl _FUN_8c08894c\n.set _FUN_8c08894c, _FUN_8c08894c_def\n");
//@unit 8c089ef0
#include "../decls.h"
undefined4 FUN_8c089ef0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c282090,free_if_nonnull_wrap_03a3dc,4,0x34,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c089ef0\n.set _FUN_8c089ef0, _FUN_8c089ef0_def\n");
//@unit 8c089f14
#include "../decls.h"
undefined4 FUN_8c089f14_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281fb4,free_if_nonnull_wrap_0247b0,4,0x34,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c089f14\n.set _FUN_8c089f14, _FUN_8c089f14_def\n");
//@unit 8c089f38
#include "../decls.h"
undefined4 FUN_8c089f38_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281f04,free_if_nonnull_wrap_03a3dc,4,0x29,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c089f38\n.set _FUN_8c089f38, _FUN_8c089f38_def\n");
//@unit 8c089f5c
#include "../decls.h"
undefined4 FUN_8c089f5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281e54,free_if_nonnull_wrap_0247b0,4,0x29,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c089f5c\n.set _FUN_8c089f5c, _FUN_8c089f5c_def\n");
//@unit 8c089f80
#include "../decls.h"
undefined4 FUN_8c089f80_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281dd8,free_if_nonnull_wrap_03a3dc,4,0x1c,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c089f80\n.set _FUN_8c089f80, _FUN_8c089f80_def\n");
//@unit 8c089fa4
#include "../decls.h"
undefined4 FUN_8c089fa4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281d5c,free_if_nonnull_wrap_0247b0,4,0x1c,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c089fa4\n.set _FUN_8c089fa4, _FUN_8c089fa4_def\n");
//@unit 8c089fc8
#include "../decls.h"
undefined4 FUN_8c089fc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281ce0,free_if_nonnull_wrap_03a3dc,4,0x1c,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c089fc8\n.set _FUN_8c089fc8, _FUN_8c089fc8_def\n");
//@unit 8c089fec
#include "../decls.h"
undefined4 FUN_8c089fec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281c64,free_if_nonnull_wrap_0247b0,4,0x1c,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c089fec\n.set _FUN_8c089fec, _FUN_8c089fec_def\n");
//@unit 8c08a010
#include "../decls.h"
undefined4 FUN_8c08a010_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281be8,free_if_nonnull_wrap_03a3dc,4,0x1c,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08a010\n.set _FUN_8c08a010, _FUN_8c08a010_def\n");
//@unit 8c08a034
#include "../decls.h"
undefined4 FUN_8c08a034_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281b6c,free_if_nonnull_wrap_0247b0,4,0x1c,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08a034\n.set _FUN_8c08a034, _FUN_8c08a034_def\n");
//@unit 8c08a058
#include "../decls.h"
undefined4 FUN_8c08a058_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281af4,free_if_nonnull_wrap_03a3dc,4,0x1b,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08a058\n.set _FUN_8c08a058, _FUN_8c08a058_def\n");
//@unit 8c08a07c
#include "../decls.h"
undefined4 FUN_8c08a07c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281a7c,free_if_nonnull_wrap_0247b0,4,0x1b,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08a07c\n.set _FUN_8c08a07c, _FUN_8c08a07c_def\n");
//@unit 8c08a0a0
#include "../decls.h"
undefined4 FUN_8c08a0a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281a20,free_if_nonnull_wrap_03a3dc,4,0x14,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08a0a0\n.set _FUN_8c08a0a0, _FUN_8c08a0a0_def\n");
//@unit 8c08a0c4
#include "../decls.h"
undefined4 FUN_8c08a0c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c2819c4,free_if_nonnull_wrap_0247b0,4,0x14,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08a0c4\n.set _FUN_8c08a0c4, _FUN_8c08a0c4_def\n");
//@unit 8c08a0e8
#include "../decls.h"
undefined4 FUN_8c08a0e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281970,free_if_nonnull_wrap_03a3dc,4,0x12,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08a0e8\n.set _FUN_8c08a0e8, _FUN_8c08a0e8_def\n");
//@unit 8c08a10c
#include "../decls.h"
undefined4 FUN_8c08a10c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c28191c,free_if_nonnull_wrap_0247b0,4,0x12,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08a10c\n.set _FUN_8c08a10c, _FUN_8c08a10c_def\n");
//@unit 8c08a130
#include "../decls.h"
undefined4 FUN_8c08a130_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(&DAT_8c2818e0,free_if_nonnull_wrap_03a454,0x10,3,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08a130\n.set _FUN_8c08a130, _FUN_8c08a130_def\n");
//@unit 8c08a154
#include "../decls.h"
undefined4 FUN_8c08a154_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c280fb4,FUN_8c03a4ac,0x124,8,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08a154\n.set _FUN_8c08a154, _FUN_8c08a154_def\n");
//@unit 8c08a17c
#include "../decls.h"
int s_GRAPHICS_MOTHLINE_08a182_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  ar6_00 = 1;
  uVar1 = 10;
  ar7_00 = ar6;
  (*(code *)(&FUN_8c0254d0))
            (ar4,10,1,ar6,0,ar5,0x8c283b30,0x8c283fcc,*(undefined4 *)(&DATA_8c139e80));
  *(undefined **)(ar4 + 8) = (&DATA_8c12a5d0);
  FUN_8c098ca8(ar4 + 0x490,uVar1,ar6_00,ar7_00);
  FUN_8c08dad4(ar4 + 0x538,uVar1,ar6_00,ar7_00);
  FUN_8c015b94(ar4 + 0x850,uVar1,ar6_00,ar7_00);
  FUN_8c015bc8(ar4 + 0x854,uVar1,ar6_00,ar7_00);
  FUN_8c016fcc(ar4 + 0x858,uVar1,ar6_00,ar7_00);
  Vec3_ctor_zero(ar4 + 0x900,uVar1,ar6_00,ar7_00);
  Vec3_set_zero(ar4 + 0x910,uVar1,ar6_00,ar7_00);
  FUN_8c023dac(ar4 + 0x91c,uVar1,ar6_00,ar7_00);
  (*(code *)(&FUN_8c014334))
            (ar4 + 0xc,uVar1,ar6_00,ar7_00,(&DATA_8c139fcc) + 0x45d);
  *(int *)(0x308 + ar4) = ar4 + 0x490;
  uVar1 = FUN_8c034d38(ar4 + 0x2dc,ar6,ar6_00,ar7_00);
  FUN_8c028ec8(*(undefined4 *)(0x308 + ar4),uVar1,ar6_00,ar7_00);
  *(int *)(0x30c + ar4) = ar4 + 0x538;
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    *(undefined4 *)(0x8ec + ar4 + iVar2 * 4) = 0;
    *(undefined4 *)(0x8f4 + ar4 + iVar2 * 4) = 0;
  }
  iVar2 = ar4 + 0x858;
  uVar1 = *(undefined4 *)(0xb4 + *(int *)(0x328 + ar4));
  FUN_8c0f532c(ar4,uVar1,iVar2,ar7_00);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  FUN_8c023d7c(ar4 + 0x338,uVar1,iVar2,ar7_00);
  *(undefined4 *)(0x8fc + ar4) = 0;
  *(undefined4 *)(0x840 + ar4) = 0;
  *(undefined4 *)(0x844 + ar4) = 0;
  *(undefined4 *)(0x848 + ar4) = 0;
  *(undefined4 *)(0x84c + ar4) = 0;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_MOTHLINE_08a182\n.set _s_GRAPHICS_MOTHLINE_08a182, _s_GRAPHICS_MOTHLINE_08a182_def\n");
//@unit 8c08a3a4
#include "../decls.h"
int Class_12a5d0_m0_08a3a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12a5d0;
    free_if_nonnull_wrap_016ac4(ar4 + 0x91c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x910,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x900,0xffffffff,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0x858,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_03a3dc(ar4 + 0x854,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0247b0(ar4 + 0x850,0xffffffff,ar6,ar7);
    Class_12a76c_m0_08dca8(ar4 + 0x538,0xffffffff,ar6,ar7);
    Class_12a7a8_m0_098ccc(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12a5d0_m0_08a3a4\n.set _Class_12a5d0_m0_08a3a4, _Class_12a5d0_m0_08a3a4_def\n");
//@unit 8c08a49c
#include "../decls.h"
undefined4 Class_12a5d0_m2_08a49c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 ar7_00;
  float fVar3;
  ulonglong in_dr0;
  double dVar4;
  ulonglong in_xd0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  *(undefined4 *)(ar4 + 0x928) = ar7;
  if (*(int *)(ar4 + 0x48c) == 1) {
    FUN_8c031b08(ar4 + 0x538,0,1,ar7);
  }
  ar5_00 = ar5;
  ar7_00 = ar7;
  CAnimal_m2_02573c(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((((char)uVar1 == '\x01') && (*(int *)(ar4 + 0x8f8) == 0)) && (*(int *)(ar4 + 0x8f4) == 0)) {
    ar5_00 = ar7;
    ar6 = ar5;
    FUN_8c08ab58(ar4,ar7,ar5,ar7_00);
  }
  if ((*(int *)(ar4 + 0x8f4) != 0) || (*(int *)(ar4 + 0x8f8) != 0)) {
    ar5_00 = ar5;
    FUN_8c08ac38(ar4,ar5,ar6,ar7_00);
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if (((char)uVar1 == '\x02') &&
     (iVar2 = get_field_25c_08a6f8(ar4 + 0x538,ar5_00,ar6,ar7_00), iVar2 != -1)) {
    s_CMothLine_08ad54(ar4,ar7,ar5,ar7_00);
    ar5_00 = ar7;
    ar6 = ar5;
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((((char)uVar1 == '\x02') && (*(int *)(ar4 + 0x8ec) == 0)) && (*(int *)(ar4 + 0x8f0) == 0)) {
    ar5_00 = 0;
    FUN_8c035f4c(ar4 + 0x490,0,ar6,ar7_00);
  }
  iVar2 = get_field_124_027930(ar4 + 0x538,ar5_00,ar6,ar7_00);
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5_00,ar6,ar7_00);
  if ((iVar2 == 3) && ((short)uVar1 == 2)) {
    FUN_8c08a6e8(ar4 + 0x538,ar5_00,ar6,ar7_00);
    if (cVar6 == '\0') {
      dVar4 = (double)CONCAT44(0xc5e10000,(int)(in_dr0 >> 0x20));
      in_dr0 = in_xd0;
    }
    else {
      dVar4 = -0.007812505759034138;
    }
    if (cVar5 == '\0') {
      fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    if (cVar6 == '\0') {
      dVar4 = (double)CONCAT44(0xbf800000,fVar3);
    }
    else {
      dVar4 = 4.89066565470418e-311;
    }
    if (cVar5 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar6 == '\0') {
      *(float *)(ar4 + 0x438) = fVar3;
    }
    else {
      *(ulonglong *)(ar4 + 0x438) = in_dr0;
    }
  }
  else {
    if (cVar6 == '\0') {
      *(undefined4 *)(ar4 + 0x438) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x438) = in_dr0 & 0xffffffff;
    }
    if ((iVar2 == 9) && ((short)uVar1 == 3)) {
      Vec3_assign(ar4 + 0x900,ar4 + 0x30,ar6,ar7_00);
      vec3_copy_8c023d8c(ar4 + 0x910,ar4 + 0x50,ar6,ar7_00);
      FUN_8c023e04(ar4 + 0x91c,ar4 + 0x5c,ar6,ar7_00);
      *(undefined4 *)(ar4 + 0x8fc) = 0x1e;
    }
    else {
      iVar2 = *(int *)(ar4 + 0x8fc) + -1;
      *(int *)(ar4 + 0x8fc) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(ar4 + 0x8fc) = 0;
      }
    }
  }
  return 1;
}

__asm__(".globl _Class_12a5d0_m2_08a49c\n.set _Class_12a5d0_m2_08a49c, _Class_12a5d0_m2_08a49c_def\n");
//@unit 8c08a6e8
#include "../decls.h"
undefined4 FUN_8c08a6e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0x2fc;
}

__asm__(".globl _FUN_8c08a6e8\n.set _FUN_8c08a6e8, _FUN_8c08a6e8_def\n");
//@unit 8c08a6f8
#include "../decls.h"
undefined4 get_field_25c_08a6f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x25c + ar4);
}

__asm__(".globl _get_field_25c_08a6f8\n.set _get_field_25c_08a6f8, _get_field_25c_08a6f8_def\n");
//@unit 8c08a704
#include "../decls.h"
undefined4 Class_12a5d0_m3_08a704_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 ar7_00;
  float fVar3;
  ulonglong in_dr0;
  double dVar4;
  ulonglong in_xd0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  if (*(int *)(ar4 + 0x48c) == 1) {
    FUN_8c031b08(ar4 + 0x538,0,1,ar7);
  }
  ar5_00 = ar5;
  ar7_00 = ar7;
  CAnimal_m3_026078(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((((char)uVar1 == '\x01') && (*(int *)(ar4 + 0x8f8) == 0)) && (*(int *)(ar4 + 0x8f4) == 0)) {
    ar5_00 = ar7;
    ar6 = ar5;
    FUN_8c08ab58(ar4,ar7,ar5,ar7_00);
  }
  if ((*(int *)(ar4 + 0x8f4) != 0) || (*(int *)(ar4 + 0x8f8) != 0)) {
    ar5_00 = ar5;
    FUN_8c08ac38(ar4,ar5,ar6,ar7_00);
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if (((char)uVar1 == '\x02') &&
     (iVar2 = get_field_25c_08a6f8(ar4 + 0x538,ar5_00,ar6,ar7_00), iVar2 != -1)) {
    s_CMothLine_08ad54(ar4,ar7,ar5,ar7_00);
    ar5_00 = ar7;
    ar6 = ar5;
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((((char)uVar1 == '\x02') && (*(int *)(ar4 + 0x8ec) == 0)) && (*(int *)(ar4 + 0x8f0) == 0)) {
    ar5_00 = 0;
    FUN_8c035f4c(ar4 + 0x490,0,ar6,ar7_00);
  }
  iVar2 = get_field_124_027930(ar4 + 0x538,ar5_00,ar6,ar7_00);
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5_00,ar6,ar7_00);
  if ((iVar2 == 3) && ((short)uVar1 == 2)) {
    FUN_8c08a6e8(ar4 + 0x538,ar5_00,ar6,ar7_00);
    if (cVar6 == '\0') {
      dVar4 = (double)CONCAT44(0xc5e10000,(int)(in_dr0 >> 0x20));
      in_dr0 = in_xd0;
    }
    else {
      dVar4 = -0.007812505759034138;
    }
    if (cVar5 == '\0') {
      fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    if (cVar6 == '\0') {
      dVar4 = (double)CONCAT44(0xbf800000,fVar3);
    }
    else {
      dVar4 = 4.89066565470418e-311;
    }
    if (cVar5 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar6 == '\0') {
      *(float *)(ar4 + 0x438) = fVar3;
    }
    else {
      *(ulonglong *)(ar4 + 0x438) = in_dr0;
    }
  }
  else {
    if (cVar6 == '\0') {
      *(undefined4 *)(ar4 + 0x438) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x438) = in_dr0 & 0xffffffff;
    }
    if ((iVar2 == 9) && ((short)uVar1 == 3)) {
      Vec3_assign(ar4 + 0x900,ar4 + 0x30,ar6,ar7_00);
      vec3_copy_8c023d8c(ar4 + 0x910,ar4 + 0x50,ar6,ar7_00);
      FUN_8c023e04(ar4 + 0x91c,ar4 + 0x5c,ar6,ar7_00);
      *(undefined4 *)(ar4 + 0x8fc) = 0x1e;
    }
    else {
      iVar2 = *(int *)(ar4 + 0x8fc) + -1;
      *(int *)(ar4 + 0x8fc) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(ar4 + 0x8fc) = 0;
      }
    }
  }
  return 1;
}

__asm__(".globl _Class_12a5d0_m3_08a704\n.set _Class_12a5d0_m3_08a704, _Class_12a5d0_m3_08a704_def\n");
//@unit 8c08a948
#include "../decls.h"
undefined4 FUN_8c08a948_def(int ar4,float *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float *ar5_00;
  int ar6_00;
  float fVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  undefined1 auStack_20 [20];
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  FUN_8c0f5398(ar4,ar5,ar6,ar7);
  ar5_00 = ar5;
  Vec3_ctor_copy(auStack_20,ar5,ar6_00,ar7);
  if (ar6 == 0) {
    FUN_8c08a9b8(ar4 + 0x5c,ar5_00,ar6_00,ar7);
    if (cVar5 == '\0') {
      fVar2 = *ar5;
      pcVar3 = (code *)0x447a0000;
    }
    else {
      fVar2 = 1000.0;
      pcVar3 = Vec3_dtor;
    }
    if (cVar4 == '\0' && (float)(uint)pcVar3 < fVar2) {
      if (cVar5 == '\0') {
        *ar5 = 1000.0;
      }
      else {
        ar5[0] = 1000.0;
        ar5[1] = -1.0028283e-31;
      }
    }
  }
  uVar1 = Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c08a948\n.set _FUN_8c08a948, _FUN_8c08a948_def\n");
//@unit 8c08a9b8
#include "../decls.h"
undefined4 FUN_8c08a9b8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[2] = 0x3f800000;
  ar4[1] = 0x3f800000;
  *ar4 = 0x3f800000;
  return 0;
}

__asm__(".globl _FUN_8c08a9b8\n.set _FUN_8c08a9b8, _FUN_8c08a9b8_def\n");
//@unit 8c08a9ec
#include "../decls.h"
undefined4 Class_12a5d0_m4_08a9ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = ar6;
  (**(code **)(**(int **)(0x308 + ar4) + 0x14))(*(int **)(0x308 + ar4),ar6,ar6,ar7);
  uVar1 = (**(code **)(**(int **)(0x30c + ar4) + 0x14))
                    (*(int **)(0x30c + ar4),ar6,uVar1,ar7);
  return uVar1;
}

__asm__(".globl _Class_12a5d0_m4_08a9ec\n.set _Class_12a5d0_m4_08a9ec, _Class_12a5d0_m4_08a9ec_def\n");
//@unit 8c08aa6c
#include "../decls.h"
undefined4 Class_12a5d0_m5_08aa6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = (**(code **)(**(int **)(0x30c + ar4) + 0x14))
                    (*(int **)(0x30c + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_12a5d0_m5_08aa6c\n.set _Class_12a5d0_m5_08aa6c, _Class_12a5d0_m5_08aa6c_def\n");
//@unit 8c08aad8
#include "../decls.h"
undefined4 Class_12a5d0_m6_08aad8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  FUN_8c02c398(ar4 + 0x174,ar5,ar6,ar7);
  uVar1 = (**(code **)(**(int **)(0x30c + ar4) + 0x14))
                    (*(int **)(0x30c + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_12a5d0_m6_08aad8\n.set _Class_12a5d0_m6_08aad8, _Class_12a5d0_m6_08aad8_def\n");
//@unit 8c08ab58
#include "../decls.h"
undefined4 FUN_8c08ab58_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a4;
  undefined4 a6;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    if (*(undefined4 *)0x8c431a54 == 0) {
      *(undefined4 *)0x8c431a54 = 1;
      a6 = 0x19;
      uVar1 = s_Shell_0fef9c(0x8c3eb324,0xc,0x19,ar7);
      *(undefined4 *)(0x8ec + ar4 + iVar2 * 4) = uVar1;
    }
    else {
      a6 = 0x17;
      uVar1 = s_Shell_0fef9c(0x8c3eb324,0xb,0x17,ar7);
      *(undefined4 *)(0x8ec + ar4 + iVar2 * 4) = uVar1;
    }
    a4 = *(int *)(0x8ec + ar4 + iVar2 * 4);
    (**(code **)(*(int *)(a4 + 8) + 0x54))(a4,0x8c3eb324,a6,ar7);
    uVar1 = (*(code *)(&s_CItemGLoader_RegistToLoad_0fed74))
                      (*(undefined4 *)(0x7d0 + ar6),
                       *(undefined4 *)(0x8ec + ar4 + iVar2 * 4),0,ar7);
    *(undefined4 *)(0x8f4 + ar4 + iVar2 * 4) = uVar1;
  }
  return 2;
}

__asm__(".globl _FUN_8c08ab58\n.set _FUN_8c08ab58, _FUN_8c08ab58_def\n");
//@unit 8c08ac38
#include "../decls.h"
int FUN_8c08ac38_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  for (iVar3 = 0; iVar3 < 1; iVar3 = iVar3 + 1) {
    if (*(int *)(0x8f4 + ar4 + iVar3 * 4) != 0) {
      ar5_00 = *(int *)(0x8f4 + ar4 + iVar3 * 4);
      iVar1 = FUN_8c0feef8(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
      if (iVar1 == 1) {
        ar5_00 = ar4 + iVar3 * 4 + 0x8f4;
        uVar2 = FUN_8c0feeb0(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
        *(undefined4 *)(0x8ec + ar4 + iVar3 * 4) = uVar2;
      }
    }
  }
  if (*(int *)(0x8f8 + ar4) != 0) {
    ar5_00 = *(int *)(0x8f8 + ar4);
    iVar3 = FUN_8c0feef8(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
    if (iVar3 == 1) {
      ar5_00 = ar4 + 0x8f8;
      uVar2 = FUN_8c0feeb0(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
      *(undefined4 *)(0x8f0 + ar4) = uVar2;
    }
  }
  iVar3 = *(int *)(0x8f4 + ar4);
  if ((iVar3 == 0) && (iVar3 = *(int *)(0x8f8 + ar4), iVar3 == 0)) {
    uVar2 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7);
    iVar3 = (int)(char)uVar2;
    if (iVar3 == 1) {
      iVar3 = FUN_8c035f4c(ar4 + 0x490,2,ar6,ar7);
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c08ac38\n.set _FUN_8c08ac38, _FUN_8c08ac38_def\n");
//@unit 8c08ad50
#include "../decls.h"
undefined4 s_CMothLine_08ad54_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [68];
  
  piStack_c4 = ar5;
  uStack_c0 = ar6;
  iVar1 = get_field_25c_08a6f8(ar4 + 0x538,ar5,ar6,ar7);
  iStack_a0 = iVar1;
  Vec3_ctor_zero((int)&piStack_c4 + 0xa8,ar5,ar6,ar7);
  iStack_a4 = iVar1;
  if (*(int *)(0x8ec + ar4 + iVar1 * 4) == 0) {
    ar7 = 2;
    ar6 = 1;
    (*(code *)(&report_error_message))
              ((&DATA_8c139fcc) + 0x466,
               (&DATA_8c139fcc) + 0x470,1,2);
  }
  else {
    iVar3 = *(int *)(0x8ec + ar4 + iVar1 * 4);
    uVar2 = uStack_c0;
    iStack_a8 = iVar1;
    (**(code **)(0x10c + *(int *)(iVar3 + 8)))(iVar3,uStack_c0,ar6,ar7);
    if (iVar1 == 0) {
      (**(code **)(0x140 + *(int *)(ar4 + 8)))(ar4,uVar2,ar6,ar7);
      (*(code *)(&FUN_8c0230f0))
                (&stack0xffffff38 + 0x9c,uVar2,ar6,ar7,(int)&piStack_c4 + 0x88);
      Vec3_normalize(&stack0xffffff38 + 0x8c,uVar2,ar6,ar7);
      Vec3_scale(auStack_4c,(&DATA_8c139fc4),ar6,ar7,auStack_5c);
      Vec3_assign((int)&piStack_c4 + 0xa8,auStack_5c,ar6,ar7);
      Vec3_dtor(auStack_5c,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
      Vec3_dtor((int)&piStack_c4 + 0x88,0xffffffff,ar6,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor((int)&piStack_c4 + 0x98,0xffffffff,ar6,ar7);
    }
    else {
      (**(code **)(0x140 + *(int *)(ar4 + 8)))(ar4,uVar2,ar6,ar7);
      FUN_8c0230f0(auStack_6c,uVar2,ar6,ar7,auStack_7c);
      Vec3_normalize(auStack_7c,uVar2,ar6,ar7);
      Vec3_scale(auStack_8c,(&DATA_8c139fc8),ar6,ar7,auStack_9c);
      Vec3_assign((int)&piStack_c4 + 0xa8,auStack_9c,ar6,ar7);
      Vec3_dtor(auStack_9c,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_8c,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_7c,0xffffffff,ar6,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_6c,0xffffffff,ar6,ar7);
    }
    iStack_ac = iVar1;
    FUN_8c036988(*(undefined4 *)(0x8ec + ar4 + iVar1 * 4),uVar2,ar6,ar7);
    iVar3 = *(int *)(0x8ec + ar4 + iVar1 * 4);
    iStack_b0 = iVar1;
    (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3,uVar2,ar6,ar7);
    uVar2 = *(undefined4 *)(0x8ec + ar4 + iVar1 * 4);
    iStack_b4 = iVar1;
    (**(code **)(*piStack_c4 + 0x4c))(piStack_c4,uVar2,ar6,ar7);
    iStack_b8 = iVar1;
    FUN_8c036988(*(undefined4 *)(0x8ec + ar4 + iVar1 * 4),uVar2,ar6,ar7);
    *(undefined4 *)(0x8ec + ar4 + iVar1 * 4) = 0;
    iStack_bc = iVar1;
  }
  uVar2 = Vec3_dtor((int)&piStack_c4 + 0xa8,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _s_CMothLine_08ad54\n.set _s_CMothLine_08ad54, _s_CMothLine_08ad54_def\n");
//@unit 8c08b020
#include "../decls.h"
undefined4 FUN_8c08b020_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  int ar7_00;
  int ar5_00;
  char cVar11;
  char cVar12;
  undefined4 in_stack_ffffff80;
  undefined2 uVar13;
  int iStack_4c;
  int iStack_34;
  
  uVar13 = (undefined2)((uint)in_stack_ffffff80 >> 0x10);
  cVar12 = '\0';
  cVar11 = '\0';
  iVar2 = get_field_124_027930(ar4 + 0x538,ar5,ar6,ar7);
  uVar3 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  sVar1 = (short)uVar3;
  uVar3 = CONCAT22(uVar13,sVar1);
  iVar7 = *(int *)(ar4 + 0x328) + sVar1 * 0x124;
  FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7);
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,uVar3);
  FUN_8c25b5d0(0,ar5,ar6,ar7,uVar3);
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    ar7_00 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar9 / dVar9);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    iStack_34 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iStack_34 = (int)(dVar9 / dVar9);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    fVar10 = (float)((ulonglong)dVar9 >> 0x20);
    fVar8 = SUB84(dVar9,0) / fVar10;
    dVar9 = (double)CONCAT44(fVar10,fVar8);
    ar5_00 = (int)fVar8;
  }
  else {
    dVar9 = dVar9 / dVar9;
    ar5_00 = (int)dVar9;
  }
  iStack_4c = (int)((ulonglong)dVar9 >> 0x20);
  FUN_8c256b0c(0,ar5_00,iStack_34,ar7_00,uVar3);
  FUN_8c256fec(0,ar5_00,iStack_34,ar7_00,uVar3);
  if (sVar1 == 3) {
    uVar4 = FUN_8c015bb8(iVar7 + 0x70,ar5_00,iStack_34,ar7_00);
    iVar5 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iStack_34,ar7_00);
    iVar5 = deref_u32(*(int *)(iVar7 + 0xa0) + iVar5 * 4,ar5_00,iStack_34,ar7_00);
    iVar6 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iStack_34,ar7_00);
    iVar7 = FUN_8c026d74(*(int *)(iVar7 + 0xa8) + iVar6 * 4,ar5_00,iStack_34,ar7_00);
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5_00,iStack_34,ar7_00);
    iStack_34 = iStack_4c;
    if (cVar12 == '\0') {
      iStack_34 = iVar7;
    }
    FUN_8c21bbb0(uVar4,iVar5,iStack_34,ar7_00,uVar3);
    ar5_00 = iVar5;
  }
  else if (*(int *)(ar4 + 0x6c) < 0x32) {
    FUN_8c219a9a(*(undefined4 *)(ar4 + 0x848),ar5_00,iStack_34,ar7_00);
  }
  else {
    uVar4 = FUN_8c015bb8(iVar7 + 0x70,ar5_00,iStack_34,ar7_00);
    iVar5 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iStack_34,ar7_00);
    iVar5 = deref_u32(*(int *)(iVar7 + 0xa0) + iVar5 * 4,ar5_00,iStack_34,ar7_00);
    iVar6 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iStack_34,ar7_00);
    iVar7 = FUN_8c026d74(*(int *)(iVar7 + 0xa8) + iVar6 * 4,ar5_00,iStack_34,ar7_00);
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5_00,iStack_34,ar7_00);
    if (cVar12 == '\0') {
      iStack_4c = iVar7;
    }
    FUN_8c21bbb0(uVar4,iVar5,iStack_4c,ar7_00,uVar3);
    ar5_00 = iVar5;
    iStack_34 = iStack_4c;
  }
  FUN_8c256210(1,ar5_00,iStack_34,ar7_00);
  if (sVar1 == 2) {
    if (iVar2 == 3) {
      FUN_8c233dac(&DAT_8c139e5c,ar5_00,iStack_34,ar7_00);
    }
    FUN_8c08a6e8(ar4 + 0x538,ar5_00,iStack_34,ar7_00);
    FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x844),ar5_00,iStack_34,ar7_00);
    FUN_8c256328(0,ar5_00,iStack_34,ar7_00,uVar3);
    FUN_8c25b5d0(0,ar5_00,iStack_34,ar7_00,uVar3);
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x43b40000,fVar8);
    }
    else {
      dVar9 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      ar7_00 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      ar7_00 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x43b40000,fVar8);
    }
    else {
      dVar9 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      iVar2 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      iVar2 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x43b40000,fVar8);
    }
    else {
      dVar9 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      iVar7 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      iVar7 = (int)(dVar9 / dVar9);
    }
    FUN_8c256b0c(0,iVar7,iVar2,ar7_00,uVar3);
    FUN_8c256fec(0,iVar7,iVar2,ar7_00,uVar3);
    ar5_00 = deref_u32(ar4 + 0x850,iVar7,iVar2,ar7_00);
    iStack_34 = FUN_8c026d74(ar4 + 0x854,iVar7,iVar2,ar7_00);
    FUN_8c21bbb0(*(undefined4 *)(ar4 + 0x840),ar5_00,iStack_34,ar7_00,uVar3);
    FUN_8c256210(1,ar5_00,iStack_34,ar7_00);
  }
  else if ((sVar1 == 3) && (*(int *)(ar4 + 0x8fc) != 0)) {
    FUN_8c08a6e8(ar4 + 0x538,ar5_00,iStack_34,ar7_00);
    FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x844),ar5_00,iStack_34,ar7_00);
    FUN_8c256328(0,ar5_00,iStack_34,ar7_00,uVar3);
    FUN_8c25b5d0(0,ar5_00,iStack_34,ar7_00,uVar3);
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x918));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x43b40000,fVar8);
    }
    else {
      dVar9 = 4.93207941252472e-311;
    }
    if (cVar11 == '\0') {
      ar7_00 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      ar7_00 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x914));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x43b40000,fVar8);
    }
    else {
      dVar9 = 4.93207941252472e-311;
    }
    if (cVar11 == '\0') {
      iVar2 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      iVar2 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x910));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x43b40000,fVar8);
    }
    else {
      dVar9 = 4.93207941252472e-311;
    }
    if (cVar11 == '\0') {
      iVar7 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      iVar7 = (int)(dVar9 / dVar9);
    }
    FUN_8c256b0c(0,iVar7,iVar2,ar7_00,uVar3);
    FUN_8c256fec(0,iVar7,iVar2,ar7_00,uVar3);
    ar5_00 = deref_u32(ar4 + 0x850,iVar7,iVar2,ar7_00);
    iStack_34 = FUN_8c026d74(ar4 + 0x854,iVar7,iVar2,ar7_00);
    FUN_8c21bbb0(*(undefined4 *)(ar4 + 0x840),ar5_00,iStack_34,ar7_00,uVar3);
    FUN_8c256210(1,ar5_00,iStack_34,ar7_00);
  }
  uVar3 = FUN_8c233dac(&DAT_8c139e5c,ar5_00,iStack_34,ar7_00);
  return uVar3;
}

__asm__(".globl _FUN_8c08b020\n.set _FUN_8c08b020, _FUN_8c08b020_def\n");
//@unit 8c08b5a8
#include "../decls.h"
undefined4 FUN_8c08b5a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_fr0;
  char cVar5;
  undefined4 in_stack_ffffffcc;
  undefined2 uVar6;
  undefined4 ain0;
  undefined4 uStack_20;
  
  uVar6 = (undefined2)((uint)in_stack_ffffffcc >> 0x10);
  cVar5 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  ain0 = CONCAT22(uVar6,(short)uVar1);
  iVar4 = *(int *)(ar4 + 0x328) + (short)uVar1 * 0x124;
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5,ar6,ar7);
  uVar1 = FUN_8c015bb8(iVar4 + 0x70,ar5,ar6,ar7);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  ar5_00 = deref_u32(*(int *)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uVar3 = FUN_8c026d74(*(int *)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uStack_20 = extraout_fr0;
  if (cVar5 == '\0') {
    uStack_20 = uVar3;
  }
  uVar1 = FUN_8c21bbb0(uVar1,ar5_00,uStack_20,ar7,ain0);
  return uVar1;
}

__asm__(".globl _FUN_8c08b5a8\n.set _FUN_8c08b5a8, _FUN_8c08b5a8_def\n");
//@unit 8c08b694
#include "../decls.h"
int FUN_8c08b694_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c0f4e34(ar4,ar5,ar6,ar7);
  FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7);
  FUN_8c035338(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7);
  (**(code **)(**(int **)(0x308 + ar4) + 0x24))
            (*(int **)(0x308 + ar4),ar5 + 0xc8,ar6,ar7);
  iVar1 = 0x460;
  *(undefined4 *)(0x460 + ar4) = *(undefined4 *)(0xe8 + ar5);
  return iVar1;
}

__asm__(".globl _FUN_8c08b694\n.set _FUN_8c08b694, _FUN_8c08b694_def\n");
//@unit 8c08b720
#include "../decls.h"
int FUN_8c08b720_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c0f4ebc(ar4,ar5,ar6,ar7);
  FUN_8c02ce58(ar4 + 0x174,ar5 + 0x24,ar6,ar7);
  FUN_8c035338(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7);
  (**(code **)(**(int **)(0x308 + ar4) + 0x24))
            (*(int **)(0x308 + ar4),ar5 + 0x48,ar6,ar7);
  iVar1 = 0x460;
  *(undefined4 *)(0x460 + ar4) = *(undefined4 *)(ar5 + 0x68);
  return iVar1;
}

__asm__(".globl _FUN_8c08b720\n.set _FUN_8c08b720, _FUN_8c08b720_def\n");
//@unit 8c08b798
#include "../decls.h"
undefined8 * FUN_8c08b798_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulonglong in_dr0;
  char cVar3;
  
  cVar3 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  if ((short)uVar1 == 2) {
    *(undefined4 *)(ar4 + 0x478) = 0;
  }
  else if (*(int *)(ar4 + 0x460) == 2) {
    *(undefined4 *)(ar4 + 0x478) = 1;
  }
  FUN_8c02702c(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  if ((short)uVar1 < 2) {
    puVar2 = &DAT_8c08b828;
    if (cVar3 == '\0') {
      *(undefined4 *)(ar4 + 0x334) = 0x40800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x334) = 0x2fd62fe640800000;
    }
  }
  else {
    puVar2 = (undefined8 *)0x334;
    if (cVar3 == '\0') {
      *(undefined4 *)(ar4 + 0x334) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x334) = in_dr0 & 0xffffffff;
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c08b798\n.set _FUN_8c08b798, _FUN_8c08b798_def\n");
//@unit 8c08bd20
#include "../decls.h"
int s_cp_ESA_FRONT_HOME_njd_08bd28_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int ar7_00;
  undefined4 uStack_1c;
  int aiStack_18 [2];
  
  iVar1 = -0x208;
  FUN_8c028afc(ar4,ar5,ar6,ar7);
  ar7_00 = ar4 + ar6;
  (*(code *)(&FUN_8c020a70))
            (ar5,*(undefined4 *)(&DATA_8c139e9c),*(undefined4 *)(0x410 + ar4),ar7_00);
  if (ar6 == 2) {
    (*(code *)(&FUN_8c020a70))
              (ar5,*(undefined4 *)(&DATA_8c139f68),*(undefined4 *)(0x410 + ar4),ar7_00);
    (*(code *)(&FUN_8c020c60))
              (ar5,*(undefined4 *)(&DATA_8c139f6c),*(undefined4 *)(0x410 + ar4),ar7_00);
    uVar4 = *(undefined4 *)(0x410 + ar4);
    uVar3 = *(undefined4 *)(&DATA_8c139f70);
    FUN_8c020d58(ar5,uVar3,uVar4,ar7_00);
    uVar2 = FUN_8c256670(*(undefined4 *)(0x844 + ar4),uVar3,uVar4,ar7_00);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar2;
    ar6 = *(int *)(&stack0xfffffff0 + iVar1);
    if (ar6 == -1) {
      *(undefined4 *)((int)aiStack_18 + iVar1) =
           *(undefined4 *)**(undefined4 **)(0x844 + ar4);
      *(undefined **)((int)&uStack_1c + iVar1) = (&DATA_8c139fcc) + 0x5be;
      (*(code *)(&FUN_8c014334))
                ((int)&uStack_1c + 0x110 + iVar1,uVar3,uVar4,ar7_00,
                 *(undefined4 *)((int)&uStack_1c + iVar1));
      *(undefined4 *)((int)aiStack_18 + iVar1) = 5;
      ar6 = (*(code *)(&report_error_message))
                      ((int)aiStack_18 + 0x10c + iVar1,
                       (&DATA_8c139fcc) + 0x5dd,1,2);
    }
  }
  else if (ar6 == 3) {
    (*(code *)(&FUN_8c020a70))
              (ar5,*(undefined4 *)(&DATA_8c139f44),*(undefined4 *)(0x410 + ar4),ar7_00);
    (*(code *)(&FUN_8c020b68))
              (ar5,*(undefined4 *)(&DATA_8c139f44),*(undefined4 *)(0x410 + ar4),ar7_00);
    (*(code *)(&FUN_8c020c60))
              (ar5,*(undefined4 *)(&DATA_8c139f54),*(undefined4 *)(0x410 + ar4),ar7_00);
    (*(code *)(&FUN_8c020d58))
              (ar5,*(undefined4 *)(&DATA_8c139f5c),*(undefined4 *)(0x410 + ar4),ar7_00);
    (*(code *)(&FUN_8c020c60))
              (ar5,*(undefined4 *)((&DATA_8c139f54) + 4),*(undefined4 *)(0x410 + ar4),ar7_00)
    ;
    (*(code *)(&FUN_8c020d58))
              (ar5,*(undefined4 *)((&DATA_8c139f5c) + 4),*(undefined4 *)(0x410 + ar4),ar7_00)
    ;
    uVar4 = *(undefined4 *)(0x410 + ar4);
    uVar3 = *(undefined4 *)(&DATA_8c139f4c);
    FUN_8c020e48(ar5,uVar3,uVar4,ar7_00);
    uVar2 = FUN_8c256670(*(undefined4 *)(0x844 + ar4),uVar3,uVar4,ar7_00);
    *(undefined4 *)((int)aiStack_18 + iVar1 + 4) = uVar2;
    ar6 = *(int *)((int)aiStack_18 + iVar1 + 4);
    if (ar6 == -1) {
      *(undefined4 *)((int)aiStack_18 + iVar1) =
           *(undefined4 *)**(undefined4 **)(0x844 + ar4);
      *(undefined **)((int)&uStack_1c + iVar1) = (&DATA_8c139fcc) + 0x5be;
      (*(code *)(&FUN_8c014334))
                (&stack0xfffffff4 + iVar1,uVar3,uVar4,ar7_00,
                 *(undefined4 *)((int)&uStack_1c + iVar1));
      *(undefined4 *)((int)aiStack_18 + iVar1) = 5;
      ar6 = (*(code *)(&report_error_message))
                      (&stack0xfffffff4 + iVar1,(&DATA_8c139fcc) + 0x5ff,1,2);
    }
  }
  return ar6;
}

__asm__(".globl _s_cp_ESA_FRONT_HOME_njd_08bd28\n.set _s_cp_ESA_FRONT_HOME_njd_08bd28, _s_cp_ESA_FRONT_HOME_njd_08bd28_def\n");
//@unit 8c08bf2c
#include "../decls.h"
undefined1 * s_Cp_Home_njd_08bf2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7c4d0) = 0;
    *(undefined4 *)(&DAT_8c283bd0 + iVar1 * 0x124) = 0;
    *(undefined4 *)(&DAT_8c283be4 + iVar1 * 0x124) = 0;
    *(undefined2 *)(&DAT_8c283bd4 + iVar1 * 0x124) = 0;
    *(undefined2 *)(&DAT_8c283bdc + iVar1 * 0x124) = 0;
  }
  _DAT_8c283b34 = &PTR_s_cp_Creep_njm_8c139ea4;
  _DAT_8c283b38 = &PTR_s_cp_Creep_njs_8c139ef4;
  _DAT_8c283b3c = PTR_s_Cp_Home_njd_8c139e88;
  _DAT_8c283b40 = 0;
  _DAT_8c283b44 = PTR_s_CAT_BODY_8c139ea0;
  _DAT_8c283b48 = PTR_s_Cp_MotionPack_npd_8c139e8c;
  _DAT_8c283b50 = PTR_s_cp_mapset_de_pvm_8c139e90;
  _DAT_8c283b64 = PTR_s_cp_mapset_sp_pvm_8c139e94;
  _DAT_8c283b68 = 0xb;
  _DAT_8c283b54 = 0xb;
  _DAT_8c283b60 = 0x8c28412c;
  _DAT_8c283b74 = 0x8c2841b0;
  _DAT_8c283be4 = 0x8c284488;
  _DAT_8c283c08 = 0;
  _DAT_8c283c0c = 0;
  _DAT_8c283bd0 = 0x8c284008;
  _DAT_8c283bd4 = 0x14;
  _DAT_8c283bd8 = 0x8c284064;
  _DAT_8c283bdc = 0x14;
  _DAT_8c283bec = 0x3f800000;
  _DAT_8c283bf4 = (short)(int)(14400.0 / (0.5 / _DAT_8c283bf0));
  if (_DAT_8c283bf4 == 0) {
    _DAT_8c283bf4 = 1;
  }
  _DAT_8c283bf8 = _DAT_8c283bf8 * 0.7;
  _DAT_8c283c58 = &PTR_s_cp_Creep_njm_8c139ea4;
  _DAT_8c283c5c = &PTR_s_cp_Creep_njs_8c139ef4;
  _DAT_8c283c60 = PTR_s_Cp_Home_njd_8c139e88;
  _DAT_8c283c64 = 0;
  _DAT_8c283c68 = PTR_s_CAT_BODY_8c139ea0;
  _DAT_8c283c6c = PTR_s_Cp_MotionPack_npd_8c139e8c;
  _DAT_8c283c74 = PTR_s_cp_mapset_de_pvm_8c139e90;
  _DAT_8c283c88 = PTR_s_cp_mapset_sp_pvm_8c139e94;
  _DAT_8c283c8c = 0xb;
  _DAT_8c283c78 = 0xb;
  _DAT_8c283c84 = 0x8c28412c;
  _DAT_8c283c98 = 0x8c2841b0;
  _DAT_8c283d08 = 0x8c284488;
  _DAT_8c283d2c = 0;
  _DAT_8c283d30 = 0;
  _DAT_8c283cf4 = 0x8c284008;
  _DAT_8c283cf8 = 0x14;
  _DAT_8c283cfc = 0x8c284064;
  _DAT_8c283d00 = 0x14;
  _DAT_8c283d1c = _DAT_8c283d1c * 0.7;
  _DAT_8c283d7c = &PTR_s_cc_BeMoth_njm_8c139f54;
  _DAT_8c283d80 = &PTR_s_cc_BeMoth_njs_8c139f5c;
  _DAT_8c283d84 = PTR_s_Cc_Home_nj_8c139f44;
  _DAT_8c283d88 = 0;
  _DAT_8c283d8c = PTR_s_CC_BODY_8c139f50;
  _DAT_8c283d90 = PTR_s_Cc_MotionPack_npd_8c139f4c;
  _DAT_8c283e2c = 0x8c284608;
  _DAT_8c283e34 = 0x3f800000;
  _DAT_8c283e48 = 0x3f800000;
  _DAT_8c283e50 = 0;
  _DAT_8c283e54 = 0;
  _DAT_8c283e18 = 0x8c2840c0;
  _DAT_8c283e1c = 2;
  _DAT_8c283e20 = 0x8c2840d4;
  _DAT_8c283e24 = 2;
  _DAT_8c283ea0 = &PTR_s_mo_Fly_njm_8c139f8c;
  _DAT_8c283ea4 = &PTR_s_mo_Fly_njs_8c139fa8;
  _DAT_8c283ea8 = PTR_s_Mo_Home_njd_8c139f78;
  _DAT_8c283eac = 0;
  _DAT_8c283eb0 = PTR_s_MOTH_BODY_8c139f80;
  _DAT_8c283eb4 = PTR_s_Mo_MotionPack_npd_8c139f7c;
  _DAT_8c283ebc = PTR_s_mo_mapset_1_pvm_8c139f84;
  _DAT_8c283ed0 = PTR_s_mo_mapset_2_pvm_8c139f88;
  _DAT_8c283ed4 = 0xf;
  _DAT_8c283ec0 = 0xf;
  _DAT_8c283ecc = 0x8c284234;
  _DAT_8c283ee0 = 0x8c2842e8;
  _DAT_8c283f50 = 0x8c284608;
  _DAT_8c283f58 = 0x3f800000;
  _DAT_8c283f74 = 0;
  _DAT_8c283f78 = 0;
  _DAT_8c283f3c = 0x8c2840e8;
  _DAT_8c283f40 = 7;
  _DAT_8c283f44 = 0x8c284110;
  _DAT_8c283f48 = 7;
  _DAT_8c283f64 = _DAT_8c283f64 * 0.7;
  _DAT_8c283fbc = 0x43660000;
  _DAT_8c283fcc = 2;
  _DAT_8c283fd0 = 1;
  _DAT_8c283fd4 = 1;
  _DAT_8c283fd8 = 0;
  _DAT_8c283fdc = 3;
  _DAT_8c283fe0 = 1;
  _DAT_8c283fe4 = 1;
  _DAT_8c283fe8 = 0;
  _DAT_8c283fec = 0xffff;
  _DAT_8c283ff0 = 1;
  _DAT_8c283ff4 = 1;
  _DAT_8c283ff8 = 0;
  _DAT_8c283be8 = 0x3f000000;
  _DAT_8c283bfc = 0x3c23d70a;
  _DAT_8c283c00 = 0x3f000000;
  _DAT_8c283c04 = 0x43480000;
  _DAT_8c283c10 = 0x418c0000;
  _DAT_8c283c1c = 0x41400000;
  _DAT_8c283c50 = 0x43200000;
  _DAT_8c283d20 = 0x3c23d70a;
  _DAT_8c283d24 = 0x3f000000;
  _DAT_8c283d28 = 0x43480000;
  _DAT_8c283d34 = 0x418c0000;
  _DAT_8c283d40 = 0x41400000;
  _DAT_8c283d74 = 0x43200000;
  _DAT_8c283e44 = 0x3c23d70a;
  _DAT_8c283e4c = 0x43480000;
  _DAT_8c283e58 = 0x418c0000;
  _DAT_8c283e98 = 0x43200000;
  _DAT_8c283f68 = 0x3c23d70a;
  _DAT_8c283f6c = 0x3e99999a;
  _DAT_8c283f70 = 0x43660000;
  _DAT_8c283f7c = 0xc0400000;
  _DAT_8c283f88 = 0x41a00000;
  return &DAT_8c283fcc;
}

__asm__(".globl _s_Cp_Home_njd_08bf2c\n.set _s_Cp_Home_njd_08bf2c, _s_Cp_Home_njd_08bf2c_def\n");
//@unit 8c08c688
#include "../decls.h"
undefined4 FUN_8c08c688_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0982b8(ar4 + 0x538,1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c08c688\n.set _FUN_8c08c688, _FUN_8c08c688_def\n");
//@unit 8c08c6ac
#include "../decls.h"
undefined4 Class_12a5d0_m7_08c6ac_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *a6;
  float fVar3;
  double in_dr0;
  double dVar4;
  double dVar5;
  float fVar6;
  undefined8 in_dr14;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar9 = '\0';
  cVar8 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&uStack_24,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_34,ar5_00,ar6,ar7);
  dVar5 = (double)CONCAT44(uVar2,0x3f800000);
  iVar1 = get_field_288_08c818(ar4 + 0x538,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    (**(code **)(*(int *)(ar4 + 8) + 0x170))(ar4,ar5_00,ar6,ar7);
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    }
  }
  a6 = &uStack_34;
  (**(code **)(*ar5 + 0x124))(ar5,&uStack_24,a6,ar7);
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x30));
  }
  fVar6 = SUB84(dVar5,0);
  if (cVar8 == '\0') {
    fVar3 = SUB84(in_dr0,0) - fVar6;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar5,0);
  }
  if (cVar9 == '\0') {
    dVar4 = (double)CONCAT44(uStack_24,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(uStack_20,uStack_24);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar8 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x30));
    }
    if (cVar8 == '\0') {
      fVar3 = SUB84(dVar4,0) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar5,0);
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(uStack_34,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(fStack_30,uStack_34);
    }
    if (cVar8 != '\0' || (float)((ulonglong)dVar4 >> 0x20) <= SUB84(dVar4,0)) {
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(uStack_34,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(fStack_30,uStack_34);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar4;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(uStack_24,SUB84(dVar4,0));
    }
    else {
      dVar4 = (double)CONCAT44(uStack_20,uStack_24);
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar5;
    }
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x30) = dVar4;
    }
  }
  if (cVar9 == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 0x38));
  }
  if (cVar8 == '\0') {
    fVar3 = SUB84(dVar4,0) - fVar6;
  }
  else {
    fVar3 = SUB84(dVar4 - dVar5,0);
  }
  if (cVar9 == '\0') {
    dVar4 = (double)CONCAT44(uStack_1c,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(uStack_18,uStack_1c);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar8 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x38));
    }
    if (cVar8 == '\0') {
      fVar3 = SUB84(dVar4,0) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar5,0);
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(fStack_2c,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(uStack_28,fStack_2c);
    }
    if (cVar8 != '\0' || (float)((ulonglong)dVar4 >> 0x20) <= SUB84(dVar4,0)) {
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(fStack_2c,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(uStack_28,fStack_2c);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x38) = dVar4;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(uStack_1c,SUB84(dVar4,0));
    }
    else {
      dVar4 = (double)CONCAT44(uStack_18,uStack_1c);
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar5;
    }
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x38) = dVar4;
    }
  }
  (**(code **)(*ar5 + 0x128))(ar5,ar4 + 0x30,a6,ar7);
  uVar2 = SUB84(dVar4,0);
  if (cVar9 == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),SUB84(dVar5,0));
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),uVar2);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x34);
  }
  fVar6 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar8 == '\0') {
    bVar7 = fVar6 < (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    bVar7 = dVar4 < dVar5;
  }
  if (bVar7) {
    fVar6 = fStack_30;
    fVar3 = fStack_2c;
    if (cVar9 == '\0') {
      fVar6 = *(float *)(ar4 + 0x34);
      fVar3 = fStack_30;
    }
    if (cVar8 != '\0' || fVar3 <= fVar6) {
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x34) = fStack_30;
      }
      else {
        *(ulonglong *)(ar4 + 0x34) = CONCAT44(fStack_2c,fStack_30);
      }
    }
  }
  else if (cVar9 == '\0') {
    *(float *)(ar4 + 0x34) = fVar6;
  }
  else {
    *(double *)(ar4 + 0x34) = dVar4;
  }
  Vec3_dtor(&uStack_34,0xffffffff,a6,ar7);
  uVar2 = Vec3_dtor(&uStack_24,0xffffffff,a6,ar7);
  return uVar2;
}

__asm__(".globl _Class_12a5d0_m7_08c6ac\n.set _Class_12a5d0_m7_08c6ac, _Class_12a5d0_m7_08c6ac_def\n");
//@unit 8c08c818
#include "../decls.h"
undefined4 get_field_288_08c818_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x288 + ar4);
}

__asm__(".globl _get_field_288_08c818\n.set _get_field_288_08c818, _get_field_288_08c818_def\n");
//@unit 8c08c824
#include "../decls.h"
undefined4 FUN_8c08c824_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_fr1;
  double dVar3;
  float fVar4;
  undefined8 in_dr14;
  double dVar5;
  char cVar6;
  char cVar7;
  
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar7 = '\0';
  cVar6 = '\0';
  iVar1 = get_field_24_026024(*(undefined4 *)(ar4 + 0x928),ar5,ar6,ar7);
  if (iVar1 == 1) {
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x42c80000,in_fr1);
    }
    else {
      dVar3 = 3.829877612487459e+27;
    }
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44(uVar2,(float)*(int *)(ar4 + 0x458) /
                                     (float)((ulonglong)dVar3 >> 0x20));
    }
    else {
      dVar5 = (double)CONCAT44(uVar2,(float)*(int *)(ar4 + 0x458)) / dVar3;
    }
  }
  else {
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x45a8c000,in_fr1);
    }
    else {
      dVar3 = 2.29233286239132e-311;
    }
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44(uVar2,(float)*(int *)(ar4 + 0x458) /
                                     (float)((ulonglong)dVar3 >> 0x20));
    }
    else {
      dVar5 = (double)CONCAT44(uVar2,(float)*(int *)(ar4 + 0x458)) / dVar3;
    }
  }
  fVar4 = SUB84(dVar5,0);
  if (*(int *)(ar4 + 0x458) < 0x65) {
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c139e6c,SUB84(dVar3,0));
    }
    else {
      dVar3 = (double)CONCAT44(_DAT_8c139e70,DAT_8c139e6c);
    }
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x438) = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(_DAT_8c139e70,SUB84(dVar3,0));
    }
    else {
      *(double *)(ar4 + 0x438) = dVar3;
      dVar3 = (double)CONCAT44(DAT_8c139e74,_DAT_8c139e70);
    }
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x43c) = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(DAT_8c139e74,SUB84(dVar3,0));
    }
    else {
      *(double *)(ar4 + 0x43c) = dVar3;
      dVar3 = (double)CONCAT44(DAT_8c139e78,DAT_8c139e74);
    }
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x440) = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(DAT_8c139e78,SUB84(dVar3,0));
    }
    else {
      *(double *)(ar4 + 0x440) = dVar3;
      dVar3 = (double)CONCAT44((*(uint *)0x8c139e7c),DAT_8c139e78);
    }
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x444) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x444) = dVar3;
    }
  }
  if (899 < *(int *)(ar4 + 0x458)) {
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44((float)*(int *)(ar4 + 0x458),fVar4);
    }
    else {
      dVar5 = (double)*(int *)(ar4 + 0x458);
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x44610000,SUB84(dVar3,0));
    }
    else {
      dVar3 = 1099511907856.0;
    }
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - (float)((ulonglong)dVar3 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 - dVar3;
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x42700000,SUB84(dVar3,0));
    }
    else {
      dVar3 = 2.12254649446278e-311;
    }
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / (float)((ulonglong)dVar3 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar3;
    }
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + 1.0,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + (double)CONCAT44(0x3f800000,SUB84(dVar3,0));
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c139e6c,SUB84(dVar3,0));
    }
    else {
      dVar3 = (double)CONCAT44(_DAT_8c139e70,DAT_8c139e6c);
    }
    fVar4 = (float)((ulonglong)dVar5 >> 0x20);
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x438) = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(_DAT_8c139e70,SUB84(dVar3,0));
    }
    else {
      *(double *)(ar4 + 0x438) = dVar3;
      dVar3 = (double)CONCAT44(DAT_8c139e74,_DAT_8c139e70);
    }
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x43c) = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(DAT_8c139e74,SUB84(dVar3,0));
    }
    else {
      *(double *)(ar4 + 0x43c) = dVar3;
      dVar3 = (double)CONCAT44(DAT_8c139e78,DAT_8c139e74);
    }
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x440) = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(DAT_8c139e78,SUB84(dVar3,0));
    }
    else {
      *(double *)(ar4 + 0x440) = dVar3;
      dVar3 = (double)CONCAT44((*(uint *)0x8c139e7c),DAT_8c139e78);
    }
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x444) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x444) = dVar3;
    }
  }
  iVar1 = get_field_24_026024(*(undefined4 *)(ar4 + 0x928),ar5,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = *(int *)(ar4 + 0x458);
    *(int *)(ar4 + 0x458) = iVar1 + 1;
    uVar2 = 1000;
    if (1000 < iVar1 + 1) {
      *(undefined4 *)(ar4 + 0x458) = 0;
      uVar2 = 0x74;
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0x7fffffff;
    }
  }
  else {
    iVar1 = *(int *)(ar4 + 0x458);
    *(int *)(ar4 + 0x458) = iVar1 + 1;
    uVar2 = 0x1518;
    if (0x1518 < iVar1 + 1) {
      *(undefined4 *)(ar4 + 0x458) = 0;
      uVar2 = 0x74;
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0x7fffffff;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c08c824\n.set _FUN_8c08c824, _FUN_8c08c824_def\n");
//@unit 8c08c9dc
#include "../decls.h"
undefined4 s_cp_ESA_FRONT_HOME_njd_08c9ea_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *ar5_00;
  code *a6;
  int *a7;
  undefined4 *puVar4;
  undefined4 ar6_00;
  undefined4 uVar5;
  int s0;
  undefined4 in_stack_ffffff48;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [2];
  
  auStack_24[0] = 0;
  uStack_28 = 0;
  uVar5 = 0;
  a7 = (int *)0x2;
  iVar1 = *(int *)(ar4 + 0x328) + ar6 * 0x124;
  s0 = ar4 + ar6;
  uStack_2c = 0;
  iVar2 = *(int *)(ar4 + 0x418);
  a6 = (code *)0xb;
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
    ar5_00 = (&switchdata_8c08ca4a_8c08ca68)[iVar2];
                    
    switch(iVar2) {
    case 0:
      *(undefined2 *)(ar4 + 0x414) = 0;
      iVar2 = FUN_8c0209b0(ar5,PTR_s_cp_ESA_FRONT_HOME_njd_8c139e9c,*(undefined4 *)(ar4 + 0x410),
                           auStack_24);
      if (iVar2 == 1) {
        *(undefined4 *)(ar4 + 0x848) = auStack_24[0];
        *(undefined4 *)(ar4 + 0x418) = 1;
      }
      else if (iVar2 == 0) {
        report_error_message(*(undefined4 *)(iVar1 + 0xc),s_Read_NJCM_Failed___8c13a5ed,0,2);
      }
      break;
    case 1:
      if (*(int *)(iVar1 + 0x18) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 2;
      }
      else {
        iVar2 = FUN_8c020d90(ar5,*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(ar4 + 0x410),s0);
        if (iVar2 == 1) {
          *(undefined4 *)(ar4 + 0x418) = 2;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(iVar1 + 0x18),s_Failed_to_load_Pack_CAnimal__Loa_8c13a600,0,2);
        }
      }
      break;
    case 2:
      if (*(int *)(iVar1 + 4) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 3;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(undefined4 *)(*(short *)(ar4 + 0x414) * 4 + *(int *)(iVar1 + 4)),
                           *(undefined4 *)(ar4 + 0x410),
                           *(int *)(iVar1 + 0xa0) + *(short *)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(short *)(iVar1 + 0xa4),ar5,s0,0);
        if (iVar1 == 1) {
          *(undefined2 *)(ar4 + 0x414) = 0;
          *(undefined4 *)(ar4 + 0x418) = 3;
        }
      }
      break;
    case 3:
      if (*(int *)(iVar1 + 0x1c) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 4;
      }
      else {
        puVar4 = &uStack_2c;
        uVar3 = *(undefined4 *)(ar4 + 0x410);
        iVar2 = FUN_8c020ba0(ar5,*(undefined4 *)(iVar1 + 0x1c),uVar3,puVar4);
        if (iVar2 == 1) {
          FUN_8c015bb0(iVar1 + 0xb0,uStack_2c,uVar3,puVar4,in_stack_ffffff48);
          *(undefined4 *)(ar4 + 0x418) = 4;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(iVar1 + 0x18),s_Failed_to_load_Pack_CAnimal__Loa_8c13a600,0,2);
        }
      }
      break;
    case 4:
      if (*(int *)(iVar1 + 8) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 5;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(undefined4 *)(*(short *)(ar4 + 0x414) * 4 + *(int *)(iVar1 + 8)),
                           *(undefined4 *)(ar4 + 0x410),
                           *(int *)(iVar1 + 0xa8) + *(short *)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(short *)(iVar1 + 0xac),ar5,s0,1);
        if (iVar1 == 1) {
          *(undefined2 *)(ar4 + 0x414) = 0;
          *(undefined4 *)(ar4 + 0x418) = 5;
        }
      }
      break;
    case 5:
      puVar4 = auStack_24;
      uVar3 = *(undefined4 *)(ar4 + 0x410);
      iVar2 = FUN_8c0209b0(ar5,*(undefined4 *)(iVar1 + 0xc),uVar3,puVar4);
      if (iVar2 == 1) {
        FUN_8c015ad4(iVar1 + 0x70,auStack_24[0],uVar3,puVar4,in_stack_ffffff48);
        *(undefined4 *)(ar4 + 0x418) = 6;
      }
      else if (iVar2 == 0) {
        report_error_message(*(undefined4 *)(iVar1 + 0xc),s_Read_NJCM_Failed___8c13a5ed,0,2);
      }
      break;
    case 6:
      if (*(int *)(iVar1 + 0x20) == 0) {
        puVar4 = &uStack_28;
        uVar3 = *(undefined4 *)(ar4 + 0x410);
        iVar2 = FUN_8c020aa8(ar5,*(undefined4 *)(iVar1 + 0xc),uVar3,puVar4);
        if (iVar2 == 1) {
          (**(code **)(*(int *)(iVar1 + 0x78) + 8))((int *)(iVar1 + 0x78),uStack_28,uVar3,puVar4);
          *(undefined4 *)(ar4 + 0x418) = 7;
        }
        else if (iVar2 == 0) {
          report_error_message(*(undefined4 *)(iVar1 + 0xc),s_Read_NJTL_Failed___8c13a629,0,2);
        }
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 0xc);
        s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x20,uVar3,2);
        (**(code **)(*(int *)(iVar1 + 0x78) + 8))((int *)(iVar1 + 0x78),iVar1 + 0x28,uVar3,a7);
        *(undefined4 *)(ar4 + 0x418) = 7;
      }
      break;
    case 7:
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar3 = get_field_4_0253e4(iVar1 + 0x78,ar5_00,0xb,2);
        iVar2 = FUN_8c020e80(ar5,*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(ar4 + 0x410),uVar3);
        if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(iVar1 + 0x14),s_Failed_to_load_tex_CAnimal__Load_8c13a65e,0,2);
        }
      }
      else {
        uVar3 = get_field_4_0253e4(iVar1 + 0x78,ar5_00,0xb,2);
        iVar2 = s_CDCGD_ReadPVMFileReq_021082
                          (ar5,*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(ar4 + 0x410),uVar3,s0);
        if (iVar2 == 0) {
          report_error_message
                    (s_Failed_to_load_body_pvm_textuer__8c13a495,
                     s_CAnimal__LoadTextureResourceReq__8c13a63c,0,2);
        }
      }
      if (iVar2 == 1) {
        if (*(int *)(iVar1 + 0x34) == 0) {
          *(undefined4 *)(ar4 + 0x418) = 8;
        }
        else {
          *(undefined4 *)(ar4 + 0x418) = 9;
        }
      }
      break;
    case 8:
      if (*(int *)(iVar1 + 0x10) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
      else {
        if (*(int *)(iVar1 + 0x48) == 0) {
          uVar3 = get_field_4_0253e4(iVar1 + 0x88,ar5_00,0xb,2);
          iVar2 = FUN_8c020e80(ar5,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(ar4 + 0x410),uVar3)
          ;
          if (iVar2 == 0) {
            report_error_message
                      (*(undefined4 *)(iVar1 + 0x10),s_Failed_to_load_tex_CAnimal__Load_8c13a65e,0,2
                      );
          }
        }
        else {
          ar6_00 = *(undefined4 *)(iVar1 + 0xc);
          uVar3 = ar6_00;
          s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x48,ar6_00,ar6_00);
          iVar2 = iVar1 + 0x50;
          (**(code **)(*(int *)(iVar1 + 0x88) + 8))((int *)(iVar1 + 0x88),iVar2,ar6_00,uVar3);
          uVar3 = get_field_4_0253e4(iVar1 + 0x88,iVar2,ar6_00,uVar3);
          iVar2 = s_CDCGD_ReadPVMFileReq_021082
                            (ar5,*(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(ar4 + 0x410),uVar3,s0
                            );
          if (iVar2 == 0) {
            report_error_message
                      (s_Failed_to_load_face_pvm_textuer__8c13a6cc,
                       s_CAnimal__LoadGResourceReq___8c13a6b0,0,2);
          }
        }
        if (iVar2 == 1) {
          if (*(int *)(iVar1 + 0x5c) == 0) {
            *(undefined4 *)(ar4 + 0x418) = 0;
            uVar5 = 1;
          }
          else {
            *(undefined4 *)(ar4 + 0x418) = 0xb;
          }
        }
      }
      break;
    case 9:
      s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x34,*(undefined4 *)(iVar1 + 0xc),2);
      a7 = (int *)(iVar1 + 0x80);
      a6 = *(code **)(*a7 + 8);
      (*a6)(a7,iVar1 + 0x3c,a6,a7);
      ar5_00 = (undefined *)0xa;
      *(undefined4 *)(ar4 + 0x418) = 10;
    case 10:
      uVar3 = get_field_4_0253e4(iVar1 + 0x80,ar5_00,a6,a7);
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  (s_Failed_to_load_SPECIAL_body_pvm_t_8c13a686,
                   s_CAnimal__LoadGResourceReq___8c13a6b0,0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 0x418) = 8;
      }
      break;
    case 0xb:
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x5c,uVar3,2);
      iVar2 = iVar1 + 100;
      (**(code **)(*(int *)(iVar1 + 0x90) + 8))((int *)(iVar1 + 0x90),iVar2,uVar3,a7);
      uVar3 = get_field_4_0253e4(iVar1 + 0x90,iVar2,uVar3,a7);
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(iVar1 + 0x5c),*(undefined4 *)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  (s_Failed_to_load_SPECIAL_face_pvm_t_8c13a6ee,
                   s_CAnimal__LoadGResourceReq___8c13a6b0,0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
    }
  }
  else {
    report_error_message
              (s_Invalid_Load_Sequence___8c13a718,s_CAnimal__LoadGResourceReq___8c13a6b0,0,2);
  }
  return uVar5;
}

__asm__(".globl _s_cp_ESA_FRONT_HOME_njd_08c9ea\n.set _s_cp_ESA_FRONT_HOME_njd_08c9ea, _s_cp_ESA_FRONT_HOME_njd_08c9ea_def\n");
//@unit 8c08d380
#include "../decls.h"
undefined4 FUN_8c08d380_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  
  cVar5 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125f98,ar5,ar6,ar7);
  uVar3 = 0x8c283ae8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283ae8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125fa8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c283af4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283af4,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125fb8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c283b00;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283b00,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125fc8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c283b0c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283b0c,ar7);
  if (cVar5 == '\0') {
    _DAT_8c125fd8 = CONCAT44(_DAT_8c125fdc,0x800000);
  }
  else {
                    
    _DAT_8c125fd8 = 0xffffffff00800000;
  }
  uVar1 = Vec3_ctor_xyz(&DAT_8c125fdc,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c283b18,ar7);
  uVar1 = 0x124;
  FUN_8c010120(0x8c283b30,FUN_8c02452c,FUN_8c03a4ac,0x124,4);
  global_list_push(0,FUN_8c08daac,0x8c283b24,uVar1);
  uVar1 = 0x10;
  FUN_8c010120(&DAT_8c283fcc,FUN_8c024824,free_if_nonnull_wrap_03a454,0x10,3);
  global_list_push(0,FUN_8c08da88,0x8c283fc0,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c284008,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x14);
  global_list_push(0,FUN_8c08da64,0x8c283ffc,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c284064,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x14);
  global_list_push(0,FUN_8c08da40,0x8c284058,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c2840c0,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,2);
  global_list_push(0,FUN_8c08da1c,0x8c2840b4,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c2840d4,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,2);
  global_list_push(0,FUN_8c08d9f8,0x8c2840c8,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c2840e8,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,7);
  global_list_push(0,FUN_8c08d9d4,0x8c2840dc,uVar1);
  uVar4 = 4;
  FUN_8c010120(0x8c284110,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,7);
  uVar1 = 0x8c284104;
  pcVar2 = FUN_8c08d9b0;
  global_list_push(0,FUN_8c08d9b0,0x8c284104,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2843a8,pcVar2,uVar1,uVar4);
  uVar3 = 0x8c28439c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28439c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2843c4,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2843b8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2843b8,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2843e0,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2843d4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2843d4,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2843fc,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2843f0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2843f0,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c284418,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c28440c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28440c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c284434,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c284428;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284428,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c284450,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c284444;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284444,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c28446c,pcVar2,uVar3,uVar4);
  global_list_push(uVar1,Vec3_dtor,0x8c284460,uVar4);
  uVar4 = 0x8c2843e0;
  uVar1 = FUN_8c017010(0x8c284488,0x8c2843a8,0x8c2843c4,0x8c2843e0,0x8c2843fc,0x8c284418,0x8c284434,
                       0x8c284450,0x8c28446c);
  uVar3 = 0x8c28447c;
  pcVar2 = Class_129938_m0_017084;
  global_list_push(uVar1,Class_129938_m0_017084,0x8c28447c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c284528,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c28451c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28451c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c284544,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c284538;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284538,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c284560,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c284554;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284554,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c28457c,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c284570;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284570,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c284598,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c28458c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28458c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2845b4,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2845a8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2845a8,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2845d0,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2845c4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2845c4,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2845ec,pcVar2,uVar3,uVar4);
  global_list_push(uVar1,Vec3_dtor,0x8c2845e0,uVar4);
  uVar3 = 0x8c284560;
  uVar1 = FUN_8c017010(0x8c284608,0x8c284528,0x8c284544,0x8c284560,0x8c28457c,0x8c284598,0x8c2845b4,
                       0x8c2845d0,0x8c2845ec);
  uVar1 = global_list_push(uVar1,Class_129938_m0_017084,0x8c2845fc,uVar3);
  return uVar1;
}

__asm__(".globl _FUN_8c08d380\n.set _FUN_8c08d380, _FUN_8c08d380_def\n");
//@unit 8c08d9b0
#include "../decls.h"
undefined4 FUN_8c08d9b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c284110,free_if_nonnull_wrap_03a3dc,4,7,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08d9b0\n.set _FUN_8c08d9b0, _FUN_8c08d9b0_def\n");
//@unit 8c08d9d4
#include "../decls.h"
undefined4 FUN_8c08d9d4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c2840e8,free_if_nonnull_wrap_0247b0,4,7,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08d9d4\n.set _FUN_8c08d9d4, _FUN_8c08d9d4_def\n");
//@unit 8c08d9f8
#include "../decls.h"
undefined4 FUN_8c08d9f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c2840d4,free_if_nonnull_wrap_03a3dc,4,2,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08d9f8\n.set _FUN_8c08d9f8, _FUN_8c08d9f8_def\n");
//@unit 8c08da1c
#include "../decls.h"
undefined4 FUN_8c08da1c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c2840c0,free_if_nonnull_wrap_0247b0,4,2,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08da1c\n.set _FUN_8c08da1c, _FUN_8c08da1c_def\n");
//@unit 8c08da40
#include "../decls.h"
undefined4 FUN_8c08da40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c284064,free_if_nonnull_wrap_03a3dc,4,0x14,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08da40\n.set _FUN_8c08da40, _FUN_8c08da40_def\n");
//@unit 8c08da64
#include "../decls.h"
undefined4 FUN_8c08da64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c284008,free_if_nonnull_wrap_0247b0,4,0x14,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08da64\n.set _FUN_8c08da64, _FUN_8c08da64_def\n");
//@unit 8c08da88
#include "../decls.h"
undefined4 FUN_8c08da88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(&DAT_8c283fcc,free_if_nonnull_wrap_03a454,0x10,3,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08da88\n.set _FUN_8c08da88, _FUN_8c08da88_def\n");
//@unit 8c08daac
#include "../decls.h"
undefined4 FUN_8c08daac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c283b30,FUN_8c03a4ac,0x124,4,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08daac\n.set _FUN_8c08daac, _FUN_8c08daac_def\n");
//@unit 8c08dad4
#include "../decls.h"
undefined4 * FUN_8c08dad4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c030fa0(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12a76c);
  Vec3_ctor_zero((int)ar4 + 0x230,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x24c,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x264,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x28c,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x29c,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2a8,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x2b8,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2d0,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2e0,ar5,ar6,ar7);
  FUN_8c08db9c(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c08dad4\n.set _FUN_8c08dad4, _FUN_8c08dad4_def\n");
//@unit 8c08db9c
#include "../decls.h"
undefined4 FUN_8c08db9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  ulonglong uVar1;
  char cVar2;
  
  cVar2 = '\0';
  *(undefined ***)(ar4 + 0x1c8) = &PTR_DAT_8c13a734;
  *(undefined4 *)(ar4 + 0x1cc) = 0xc;
  *(undefined4 *)(ar4 + 0x284) = 0;
  *(undefined4 *)(ar4 + 0x25c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x248) = 0;
  vec3_clear(ar4 + 0x90,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uVar1 = CONCAT44(0xbdcccccd,in_fr1);
    *(undefined4 *)(ar4 + 0xa0) = 0xbdcccccd;
  }
  else {
    uVar1 = 0xa4bdcccccd;
    *(undefined8 *)(ar4 + 0xa0) = 0xa4bdcccccd;
  }
  *(undefined4 *)(ar4 + 0xa4) = 1;
  FUN_8c03c314(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x220) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x220) = uVar1 & 0xffffffff;
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x224) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x224) = uVar1 & 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x228) = 0;
  *(undefined4 *)(ar4 + 0x22c) = 0;
  *(undefined4 *)(ar4 + 0x2f0) = 0;
  *(undefined4 *)(ar4 + 0x2f4) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x2f8) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x240) = 0;
  *(undefined4 *)(ar4 + 0x244) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x2fc) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x2fc) = uVar1 & 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x288) = 1;
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x304) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x304) = CONCAT44(0x3f800000,(int)uVar1);
  }
  return 0x304;
}

__asm__(".globl _FUN_8c08db9c\n.set _FUN_8c08db9c, _FUN_8c08db9c_def\n");
//@unit 8c08dca8
#include "../decls.h"
undefined4 * Class_12a76c_m0_08dca8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12a76c;
    Vec3_dtor(ar4 + 0xb8,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xb4,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0xae,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xaa,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0xa7,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xa3,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x99,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x93,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x8c,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_129cbc_m0_0312f4(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12a76c_m0_08dca8\n.set _Class_12a76c_m0_08dca8, _Class_12a76c_m0_08dca8_def\n");
//@unit 8c08dd98
#include "../decls.h"
undefined8 * FUN_8c08dd98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  char cVar2;
  
  cVar2 = '\0';
  FUN_8c031684(ar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x128) == 3) {
    *(undefined4 *)(ar4 + 0x248) = 0;
    *(undefined4 *)(ar4 + 0x40) = 5;
    puVar1 = &DAT_8c08de1c;
    if (cVar2 == '\0') {
      *(undefined4 *)(ar4 + 0x24) = 0x41200000;
    }
    else {
      *(undefined8 *)(ar4 + 0x24) = 0x21441200000;
    }
  }
  else {
    *(undefined4 *)(ar4 + 0x214) = 1;
    FUN_8c030eb8(ar4 + 0x1fc,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x240) = 0;
    puVar1 = *(undefined8 **)(ar4 + 0x2f4);
    if ((-1 < (int)puVar1) && (puVar1 = *(undefined8 **)(ar4 + 0x2f8), -1 < (int)puVar1)) {
      FUN_8c06b1d8(*(undefined4 *)(ar4 + 0x2f4),*(undefined4 *)(ar4 + 0x2f8),ar6,ar7);
      *(undefined4 *)(ar4 + 0x2f4) = 0xffffffff;
      puVar1 = (undefined8 *)0x2f8;
      *(undefined4 *)(ar4 + 0x2f8) = 0xffffffff;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c08dd98\n.set _FUN_8c08dd98, _FUN_8c08dd98_def\n");
//@unit 8c08de3c
#include "../decls.h"
undefined8 * FUN_8c08de3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 in_xd14;
  char cVar4;
  
  cVar4 = '\0';
  *(undefined4 *)(ar4 + 0x128) = ar5;
  iVar1 = *(int *)(ar4 + 0x128);
  if ((iVar1 == 0) || (iVar1 == 1)) {
    uVar3 = *(undefined4 *)(ar4 + 0xa0);
    FUN_8c031b68(ar4,0x8c2846d0,ar6,ar7);
    puVar2 = (undefined8 *)0xa0;
    if (cVar4 == '\0') {
      *(undefined4 *)(ar4 + 0xa0) = uVar3;
    }
    else {
      *(undefined8 *)(ar4 + 0xa0) = in_xd14;
    }
  }
  else {
    if (iVar1 == 2) {
      ar7 = 0;
      ar6 = 0xffffffff;
      uVar3 = 1;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
    }
    else if (iVar1 != 3) {
      return (undefined8 *)iVar1;
    }
    FUN_8c031b68(ar4,0x8c2846e8,ar6,ar7);
    puVar2 = &DAT_8c08dee8;
    if (cVar4 == '\0') {
      *(undefined4 *)(ar4 + 0x24) = 0x41200000;
    }
    else {
      *(undefined8 *)(ar4 + 0x24) = 0x2fd62fe641200000;
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c08de3c\n.set _FUN_8c08de3c, _FUN_8c08de3c_def\n");
//@unit 8c08e6e8
#include "../decls.h"
int FUN_8c08e6e8_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 in_dr0;
  char cVar5;
  undefined4 in_stack_00000000;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_0000000c;
  int *in_stack_00000018;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [92];
  int iStack_1c;
  undefined8 uStack_18;
  
  cVar5 = '\0';
  iVar4 = 1;
  FUN_8c03f480(in_stack_00000000,ar5,ar6,ar7,auStack_88);
  Vec3_ctor_copy(&iStack_1c,auStack_88,ar6,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_88,0xffffffff,ar6,ar7);
  FUN_8c08e9b0(auStack_78,uVar3,ar6,ar7);
  iVar2 = *(int *)(ar4 + 0x124);
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      ar7 = 0;
      ar6 = (int *)0xffffffff;
      uVar3 = 5;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
      iVar4 = 0;
      break;
    case 1:
      *(undefined4 *)(ar4 + 0x214) = 0;
      iVar4 = FUN_8c091d40(ar4,*in_stack_00000004,in_stack_00000018,ar7);
      ar6 = in_stack_00000018;
      break;
    default:
      ar6 = (int *)in_stack_00000004[1];
      iVar4 = FUN_8c08fd38(ar4,*in_stack_00000004,ar6,in_stack_0000000c);
      ar7 = in_stack_0000000c;
      if (iVar4 == 0) {
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(undefined4 *)(ar4 + 0x134) = 0;
        *(undefined4 *)(ar4 + 300) = 0;
      }
      break;
    case 3:
      ar6 = (int *)in_stack_00000004[1];
      iVar4 = FUN_8c090bc4(ar4,*in_stack_00000004,ar6,in_stack_0000000c);
      ar7 = in_stack_0000000c;
      break;
    case 4:
      (**(code **)(*in_stack_00000018 + 0x128))(in_stack_00000018,*in_stack_00000004,ar6,ar7);
      uVar1 = in_dr0;
      if (cVar5 == '\0') {
        uStack_18 = CONCAT44((*(uint*)((uchar*)&uStack_18+4)),(int)((ulonglong)in_dr0 >> 0x20));
        uVar1 = uStack_18;
      }
      uStack_18 = uVar1;
      ar6 = &iStack_1c;
      iVar4 = FUN_8c091924(ar4,*in_stack_00000004,ar6,ar7);
      break;
    case 8:
      *(undefined4 *)(ar4 + 0x214) = 0;
      iVar4 = FUN_8c097e0c(ar4,*in_stack_00000004,ar6,ar7);
      ar6 = (int *)*in_stack_00000004;
      FUN_8c031c74(ar4,&iStack_1c,ar6,ar7);
    }
  }
  FUN_8c08e93c(auStack_78,0xffffffff,ar6,ar7);
  Vec3_dtor(&iStack_1c,0xffffffff,ar6,ar7);
  return iVar4;
}

__asm__(".globl _FUN_8c08e6e8\n.set _FUN_8c08e6e8, _FUN_8c08e6e8_def\n");
//@unit 8c08e93c
#include "../decls.h"
int FUN_8c08e93c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Vec3_dtor(ar4 + 0x4c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x3c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x30,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x20,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c08e93c\n.set _FUN_8c08e93c, _FUN_8c08e93c_def\n");
//@unit 8c08e9b0
#include "../decls.h"
int FUN_8c08e9b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x20,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x30,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x3c,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x4c,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c08e9b0\n.set _FUN_8c08e9b0, _FUN_8c08e9b0_def\n");
//@unit 8c08e9fc
#include "../decls.h"
undefined4 FUN_8c08e9fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float fVar4;
  undefined8 in_dr0;
  float fVar5;
  char cVar6;
  char cVar7;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  Vec3_set_zero(auStack_20,ar5,ar6,ar7);
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c08ea30:
    uVar2 = 0;
    iVar1 = FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7);
    uVar3 = (undefined4)in_dr0;
    if ((iVar1 != 1) && (iVar1 != 2)) {
      object_dtor_delete(auStack_20,0xffffffff,ar6_00,ar7);
      return 1;
    }
    FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7,auStack_30);
    Vec3_assign(ar4 + 0x14,auStack_30,ar6_00,ar7);
    Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7);
    FUN_8c031b68(ar4,0x8c2846d0,ar6_00,ar7);
    in_dr0 = CONCAT44(0x3f800000,uVar3);
    if (cVar7 == '\0') {
      *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x48) = in_dr0;
    }
    uVar2 = ar5;
    ar6_00 = ar6;
    FUN_8c031bb4(ar4,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x40) = 3;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c08eb0e;
    goto LAB_8c08ea30;
  }
  fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
  FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6_00,ar7);
  ar6_00 = ar5;
  uVar3 = FUN_8c097ba4(ar4,ar6,ar5,ar7);
  FUN_8c022fc0(ar5,ar6,ar6_00,ar7);
  if (cVar7 == '\0') {
    fVar5 = 100.0;
  }
  else {
    fVar4 = 100.0;
    fVar5 = 7.1186e-43;
  }
  if (cVar6 == '\0' && fVar4 < fVar5) {
    *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb;
  }
LAB_8c08eb0e:
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7);
  object_dtor_delete(auStack_20,0xffffffff,ar6_00,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c08e9fc\n.set _FUN_8c08e9fc, _FUN_8c08e9fc_def\n");
//@unit 8c08eb8c
#include "../decls.h"
undefined4 FUN_8c08eb8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int ar5_00;
  undefined4 ar5_01;
  undefined4 uVar3;
  undefined4 in_fr1;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  undefined1 auStack_f4 [16];
  undefined1 auStack_e4 [12];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [12];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [20];
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar3 = 1;
  Vec3_ctor_xyz(auStack_28,ar5,ar6,ar7);
  if (cVar6 != '\0') {
    in_fr1 = (undefined4)*(undefined8 *)(ar4 + 700);
  }
  Vec3_set_xyz(auStack_34,ar5,ar6,ar7);
  FUN_8c023484(auStack_28,auStack_34,ar6,ar7,auStack_44);
  iVar1 = FUN_8c023334(ar4 + 0x14,auStack_44,ar6,ar7);
  Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
  object_dtor_delete(auStack_34,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  if (iVar1 == 3) {
    iVar1 = 8;
  }
  else {
    iVar1 = 9;
  }
  ar5_00 = iVar1;
  iVar2 = FUN_8c034148(ar4 + 0xb0,iVar1,ar6,ar7);
  if ((iVar2 == 1) || (iVar2 == 2)) {
    FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7);
    Vec3_ctor_xyz(auStack_54,ar5_00,ar6,ar7);
    if (cVar6 == '\0') {
      uVar4 = CONCAT44(*(undefined4 *)(ar4 + 700),in_fr1);
    }
    else {
      uVar4 = *(ulonglong *)(ar4 + 700);
    }
    Vec3_set_xyz(auStack_60,ar5_00,ar6,ar7);
    FUN_8c023484(auStack_54,auStack_60,ar6,ar7,auStack_70);
    FUN_8c022dac(ar4 + 0x14,auStack_70,ar6,ar7);
    if (cVar6 == '\0') {
      uVar4 = uVar4 >> 0x20;
    }
    Vec3_dtor(auStack_70,0xffffffff,ar6,ar7);
    object_dtor_delete(auStack_60,0xffffffff,ar6,ar7);
    ar5_01 = 0xffffffff;
    Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
    if (cVar5 != '\0' || (float)uVar4 <= 1.0) {
      Vec3_ctor_xyz(auStack_d8,ar5_01,ar6,ar7);
      Vec3_set_xyz(auStack_e4,ar5_01,ar6,ar7);
      FUN_8c023484(auStack_d8,auStack_e4,ar6,ar7,auStack_f4);
      Vec3_assign(ar4 + 0x14,auStack_f4,ar6,ar7);
      Vec3_dtor(auStack_f4,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_e4,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_d8,0xffffffff,ar6,ar7);
      uVar3 = 0;
    }
    else if (iVar1 == 8) {
      Vec3_ctor_xyz(auStack_80,ar5_01,ar6,ar7);
      Vec3_set_xyz(auStack_8c,ar5_01,ar6,ar7);
      FUN_8c023484(auStack_80,auStack_8c,ar6,ar7,auStack_9c);
      Vec3_assign(ar4 + 0x14,auStack_9c,ar6,ar7);
      Vec3_dtor(auStack_9c,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_8c,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_80,0xffffffff,ar6,ar7);
    }
    else {
      Vec3_ctor_xyz(auStack_ac,ar5_01,ar6,ar7);
      Vec3_set_xyz(auStack_b8,ar5_01,ar6,ar7);
      FUN_8c023484(auStack_ac,auStack_b8,ar6,ar7,auStack_c8);
      Vec3_assign(ar4 + 0x14,auStack_c8,ar6,ar7);
      Vec3_dtor(auStack_c8,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_b8,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_ac,0xffffffff,ar6,ar7);
    }
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c08eb8c\n.set _FUN_8c08eb8c, _FUN_8c08eb8c_def\n");
//@unit 8c08eef4
#include "../decls.h"
undefined4 FUN_8c08eef4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar5_01;
  undefined4 uVar2;
  undefined4 ar6_00;
  int ar5_02;
  float in_fr1;
  float fVar3;
  float fVar5;
  double dVar4;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  iVar1 = ar5;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  Vec3_set_zero(auStack_38,iVar1,ar6,ar7);
  ar5_02 = ar5 + 0xb;
  uVar2 = 10;
  iVar1 = FUN_8c034148(ar4 + 0xb0,10,ar6,ar7);
  if ((iVar1 == 1) || (iVar1 == 2)) {
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7);
    if (cVar7 == '\0') {
      in_fr1 = *(float *)(ar4 + 0x2cc);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x2cc);
    }
    if (cVar6 == '\0') {
      in_fr1 = in_fr1 + 1.0;
    }
    else {
      in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
    }
    if (cVar7 == '\0') {
      *(float *)(ar4 + 0x2cc) = in_fr1;
    }
    else {
      *(undefined8 *)(ar4 + 0x2cc) = in_xd0;
    }
    iVar1 = ar5_02;
    uVar2 = FUN_8c03c0f0(ar4 + 0xb0,ar5_02,ar6,ar7);
    uVar2 = deref_u32(uVar2,iVar1,ar6,ar7);
    ar5_00 = FUN_8c0342ac(ar4 + 0xb0,uVar2,0,ar7);
    ar6_00 = 0;
    ar5_01 = FUN_8c034548(ar4 + 0xb0,uVar2,0,ar7);
    if (cVar7 == '\0') {
      fVar3 = *(float *)(ar4 + 0x2cc);
      fVar5 = 319.0;
    }
    else {
      fVar3 = 319.0;
      fVar5 = 4.2039e-43;
    }
    if (fVar3 == fVar5) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7);
      ar7 = 0;
      ar6_00 = 0xffffffff;
      uVar2 = 0;
      iVar1 = ar4 + 0xb0;
      s_CAnimBody_SetAnimation_033a94(iVar1,0,0xffffffff,0);
      *(undefined4 *)(ar4 + 0x284) = 0x15;
      if (ar5_02 < 0xe) {
        uVar2 = rand(iVar1,uVar2,ar6_00,ar7);
        iVar1 = libgcc_divide_helper_01031c(uVar2,0xaf0,ar6_00,ar7);
        if (cVar6 == '\0') {
          dVar4 = (double)CONCAT44((float)(iVar1 + 0x781),fVar3);
        }
        else {
          dVar4 = (double)(iVar1 + 0x781);
        }
        if (cVar7 == '\0') {
          *(int *)(ar4 + 0x27c) = (int)((ulonglong)dVar4 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x27c) = dVar4;
        }
      }
      else {
        uVar2 = rand(iVar1,uVar2,ar6_00,ar7);
        iVar1 = libgcc_divide_helper_01031c(uVar2,3000,ar6_00,ar7);
        if (cVar6 == '\0') {
          dVar4 = (double)CONCAT44((float)(iVar1 + 2000),fVar3);
        }
        else {
          dVar4 = (double)(iVar1 + 2000);
        }
        if (cVar7 == '\0') {
          *(int *)(ar4 + 0x27c) = (int)((ulonglong)dVar4 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x27c) = dVar4;
        }
      }
      *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb | 4;
    }
    FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    Vec3_assign(ar4 + 0x2d0,auStack_48,ar6_00,ar7);
    Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
    FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_00,ar7);
    FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_00,ar7);
    FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    Vec3_assign(ar4 + 0x2e0,auStack_58,ar6_00,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
    Vec3_set_xyz(auStack_64,uVar2,ar6_00,ar7);
    FUN_8c023484(ar4 + 0x2d0,auStack_64,ar6_00,ar7,auStack_74);
    Vec3_assign(ar4 + 0x2d0,auStack_74,ar6_00,ar7);
    Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_64,0xffffffff,ar6_00,ar7);
    FUN_8c034650(ar4 + 0xb0,ar5_01,ar6_00,ar7);
    vec3_copy_8c023d8c(auStack_38,auStack_80,ar6_00,ar7);
    uVar2 = 0xffffffff;
    object_dtor_delete(auStack_80,0xffffffff,ar6_00,ar7);
    Vec3_ctor_xyz(auStack_90,uVar2,ar6_00,ar7);
    Vec3_set_xyz(auStack_9c,uVar2,ar6_00,ar7);
    FUN_8c023484(auStack_90,auStack_9c,ar6_00,ar7,auStack_ac);
    Vec3_assign(ar4 + 0x14,auStack_ac,ar6_00,ar7);
    Vec3_dtor(auStack_ac,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_9c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7);
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7);
    object_dtor_delete(auStack_38,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7);
  }
  else {
    object_dtor_delete(auStack_38,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c08eef4\n.set _FUN_8c08eef4, _FUN_8c08eef4_def\n");
//@unit 8c08f354
#include "../decls.h"
undefined4 FUN_8c08f354_def(int ar4,int ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar5_01;
  int iVar2;
  int iVar3;
  int ar5_02;
  undefined4 ar6_00;
  int iVar4;
  undefined4 in_fr1;
  float fVar5;
  undefined8 uVar6;
  code *pcVar8;
  float fVar9;
  double dVar7;
  undefined8 in_xd0;
  char cVar10;
  char cVar11;
  int in_stack_00000000;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [12];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  iVar3 = ar6;
  iVar2 = ar5;
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  Vec3_set_zero(auStack_3c,ar5,iVar3,ar7);
  iVar4 = iVar2 + 0xb;
  if (cVar11 == '\0') {
    in_fr1 = *(undefined4 *)(ar4 + 0x2cc);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2cc);
  }
  ar5_02 = 0x27c;
  if (cVar11 == '\0') {
    uVar6 = CONCAT44(*(undefined4 *)(ar4 + 0x27c),in_fr1);
  }
  else {
    uVar6 = *(undefined8 *)(ar4 + 0x27c);
  }
  if (((float)uVar6 == (float)((ulonglong)uVar6 >> 0x20)) &&
     (ar5_02 = *(int *)(ar4 + 0x284), 0 < ar5_02)) {
    if (*(int *)(ar4 + 0x284) == 0x15) {
      ar7 = 0;
      uVar1 = 0xffffffff;
      ar5_02 = 4;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_02,uVar1,ar7);
      *(int *)(ar4 + 0x284) = *(int *)(ar4 + 0x284) + -1;
      iVar3 = ar4;
    }
    fVar5 = (float)((ulonglong)uVar6 >> 0x20);
    iVar4 = FUN_8c03f3ac(ar4 + 0xb0,ar5_02,iVar3,ar7);
    if (iVar4 == 7) {
      *(int *)(ar4 + 0x284) = *(int *)(ar4 + 0x284) + -1;
      if (*(int *)(ar4 + 0x284) == 0) {
        ar7 = 0;
        iVar3 = -1;
        ar5_02 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      }
      else if (*(int *)(ar4 + 0x284) == 10) {
        ar5_02 = *(int *)(ar4 + 0x2f8);
        FUN_8c06b154(*(undefined4 *)(ar4 + 0x2f4),ar5_02,iVar3,ar7);
      }
    }
    CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_02,iVar3,ar7,iVar2);
    if (cVar11 == '\0') {
      pcVar8 = (code *)0x42480000;
    }
    else {
      fVar5 = 50.0;
      pcVar8 = libgcc_divide_helper_01031c;
    }
    if (fVar5 == (float)(uint)pcVar8) {
      iVar2 = libgcc_divide_helper_01031c(iVar2,3,iVar3,ar7);
      if (iVar2 == 0) {
        FUN_8c033474(ar4,0x22,ar6,in_stack_00000000);
        iVar3 = ar6;
        ar7 = in_stack_00000000;
      }
      else if (iVar2 == 1) {
        FUN_8c033474(ar4,0x23,ar6,in_stack_00000000);
        iVar3 = ar6;
        ar7 = in_stack_00000000;
      }
      else if (iVar2 == 2) {
        FUN_8c033474(ar4,0x25,ar6,in_stack_00000000);
        iVar3 = ar6;
        ar7 = in_stack_00000000;
      }
    }
  }
  else {
    FUN_8c03f3ac(ar4 + 0xb0,ar5_02,iVar3,ar7);
    fVar5 = (float)uVar6;
    if (cVar11 == '\0') {
      fVar5 = *(float *)(ar4 + 0x2cc);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x2cc);
    }
    if (cVar10 == '\0') {
      fVar5 = fVar5 + 1.0;
    }
    else {
      fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) + (double)CONCAT44(0x3f800000,fVar5),0);
    }
    if (cVar11 == '\0') {
      *(float *)(ar4 + 0x2cc) = fVar5;
    }
    else {
      *(undefined8 *)(ar4 + 0x2cc) = in_xd0;
    }
    iVar2 = iVar4;
    uVar1 = FUN_8c03c0f0(ar4 + 0xb0,iVar4,iVar3,ar7);
    uVar1 = deref_u32(uVar1,iVar2,iVar3,ar7);
    ar5_00 = FUN_8c0342ac(ar4 + 0xb0,uVar1,0,ar7);
    ar6_00 = 0;
    iVar3 = ar4 + 0xb0;
    ar5_01 = FUN_8c034548(iVar3,uVar1,0,ar7);
    if (iVar4 < 0xe) {
      if (cVar11 == '\0') {
        fVar5 = *(float *)(ar4 + 0x2cc);
        pcVar8 = (code *)0x45938000;
      }
      else {
        fVar5 = 4720.0;
        pcVar8 = rand;
      }
      if (fVar5 == (float)(uint)pcVar8) {
        iVar3 = rand(iVar3,uVar1,ar6_00,ar7);
        uVar1 = 2;
        iVar2 = libgcc_divide_helper_01031c(iVar3,2,ar6_00,ar7);
        if (iVar2 != 0) {
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x2cc) = 0x45cf8800;
          }
          else {
            *(undefined8 *)(ar4 + 0x2cc) = 0x45c5800045cf8800;
          }
        }
      }
      if (cVar11 == '\0') {
        fVar5 = *(float *)(ar4 + 0x2cc);
        fVar9 = 6320.0;
      }
      else {
        fVar5 = 6320.0;
        fVar9 = 4.2039e-43;
      }
      if (fVar5 == fVar9) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7);
        ar7 = 0;
        ar6_00 = 0xffffffff;
        uVar1 = 10;
        iVar3 = ar4 + 0xb0;
        s_CAnimBody_SetAnimation_033a94(iVar3,10,0xffffffff,0);
      }
      if (cVar11 == '\0') {
        fVar5 = *(float *)(ar4 + 0x2cc);
        fVar9 = 7040.0;
      }
      else {
        fVar5 = 7040.0;
        fVar9 = 1921.0;
      }
      if (fVar5 == fVar9) {
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x2cc) = 0x44f02000;
        }
        else {
          fVar5 = 1921.0;
          *(undefined8 *)(ar4 + 0x2cc) = 0x28444f02000;
        }
        *(undefined4 *)(ar4 + 0x284) = 0x15;
        uVar1 = rand(iVar3,uVar1,ar6_00,ar7);
        iVar3 = libgcc_divide_helper_01031c(uVar1,0xaf0,ar6_00,ar7);
        if (cVar10 == '\0') {
          dVar7 = (double)CONCAT44((float)(iVar3 + 0x781),fVar5);
        }
        else {
          dVar7 = (double)(iVar3 + 0x781);
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x27c) = (int)((ulonglong)dVar7 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x27c) = dVar7;
        }
      }
    }
    else {
      if (cVar11 == '\0') {
        fVar5 = *(float *)(ar4 + 0x2cc);
        fVar9 = 8720.0;
      }
      else {
        fVar5 = 8720.0;
        fVar9 = 4.2039e-43;
      }
      if (fVar5 == fVar9) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7);
        ar7 = 0;
        ar6_00 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0);
      }
    }
    FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    Vec3_assign(ar4 + 0x2d0,auStack_4c,ar6_00,ar7);
    Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7);
    FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_00,ar7);
    FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_00,ar7);
    FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    Vec3_assign(ar4 + 0x2e0,auStack_5c,ar6_00,ar7);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7);
    Vec3_set_xyz(auStack_68,uVar1,ar6_00,ar7);
    FUN_8c023484(ar4 + 0x2d0,auStack_68,ar6_00,ar7,auStack_78);
    Vec3_assign(ar4 + 0x2d0,auStack_78,ar6_00,ar7);
    Vec3_dtor(auStack_78,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_68,0xffffffff,ar6_00,ar7);
    FUN_8c034650(ar4 + 0xb0,ar5_01,ar6_00,ar7);
    vec3_copy_8c023d8c(auStack_3c,auStack_84,ar6_00,ar7);
    uVar1 = 0xffffffff;
    object_dtor_delete(auStack_84,0xffffffff,ar6_00,ar7);
    Vec3_ctor_xyz(auStack_94,uVar1,ar6_00,ar7);
    Vec3_set_xyz(auStack_a0,uVar1,ar6_00,ar7);
    FUN_8c023484(auStack_94,auStack_a0,ar6_00,ar7,auStack_b0);
    Vec3_assign(ar4 + 0x14,auStack_b0,ar6_00,ar7);
    Vec3_dtor(auStack_b0,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_a0,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7);
    ar7 = ar4 + 0x14;
    iVar3 = 0x80;
    Vec3_assign(ar4 + 0x80,ar7,0x80,ar7);
  }
  object_dtor_delete(auStack_3c,0xffffffff,iVar3,ar7);
  Vec3_dtor(auStack_30,0xffffffff,Vec3_dtor,ar7);
  return 1;
}

__asm__(".globl _FUN_8c08f354\n.set _FUN_8c08f354, _FUN_8c08f354_def\n");
//@unit 8c08f9e8
#include "../decls.h"
undefined4 FUN_8c08f9e8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 ar6_00;
  int ar5_01;
  undefined4 uVar3;
  float in_fr1;
  float fVar4;
  float fVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  ar5_00 = ar5;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  Vec3_set_zero(auStack_38,ar5_00,ar6,ar7);
  ar5_01 = ar5 + 0xb;
  CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
  if (cVar7 == '\0') {
    in_fr1 = *(float *)(ar4 + 0x2cc);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2cc);
  }
  if (cVar6 == '\0') {
    in_fr1 = in_fr1 + 1.0;
  }
  else {
    in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
  }
  if (cVar7 == '\0') {
    *(float *)(ar4 + 0x2cc) = in_fr1;
  }
  else {
    *(undefined8 *)(ar4 + 0x2cc) = in_xd0;
  }
  uVar1 = FUN_8c03c0f0(ar4 + 0xb0,ar5_01,ar6,ar7);
  uVar1 = deref_u32(uVar1,ar5_01,ar6,ar7);
  uVar2 = FUN_8c0342ac(ar4 + 0xb0,uVar1,0,ar7);
  ar6_00 = 0;
  uVar1 = FUN_8c034548(ar4 + 0xb0,uVar1,0,ar7);
  if (cVar7 == '\0') {
    fVar4 = *(float *)(ar4 + 0x2cc);
    fVar5 = 6640.0;
  }
  else {
    fVar4 = 6640.0;
    fVar5 = 9040.0;
  }
  if (fVar4 != fVar5) {
    if (cVar7 == '\0') {
      fVar4 = *(float *)(ar4 + 0x2cc);
      fVar5 = 9040.0;
    }
    else {
      fVar4 = 9040.0;
      fVar5 = 4.2039e-43;
    }
    if (fVar4 != fVar5) goto LAB_8c08faa8;
  }
  *(undefined4 *)(ar4 + 300) = 0;
  uVar3 = 0;
LAB_8c08faa8:
  FUN_8c034384(ar4 + 0xb0,uVar2,ar6_00,ar7);
  Vec3_assign(ar4 + 0x2d0,auStack_48,ar6_00,ar7);
  Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
  FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_00,ar7);
  FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_00,ar7);
  FUN_8c034384(ar4 + 0xb0,uVar2,ar6_00,ar7);
  Vec3_assign(ar4 + 0x2e0,auStack_58,ar6_00,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
  Vec3_set_xyz(auStack_64,uVar2,ar6_00,ar7);
  FUN_8c023484(ar4 + 0x2d0,auStack_64,ar6_00,ar7,auStack_74);
  Vec3_assign(ar4 + 0x2d0,auStack_74,ar6_00,ar7);
  Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
  object_dtor_delete(auStack_64,0xffffffff,ar6_00,ar7);
  FUN_8c034650(ar4 + 0xb0,uVar1,ar6_00,ar7);
  vec3_copy_8c023d8c(auStack_38,auStack_80,ar6_00,ar7);
  uVar1 = 0xffffffff;
  object_dtor_delete(auStack_80,0xffffffff,ar6_00,ar7);
  Vec3_ctor_xyz(auStack_90,uVar1,ar6_00,ar7);
  Vec3_set_xyz(auStack_9c,uVar1,ar6_00,ar7);
  FUN_8c023484(auStack_90,auStack_9c,ar6_00,ar7,auStack_ac);
  Vec3_assign(ar4 + 0x14,auStack_ac,ar6_00,ar7);
  Vec3_dtor(auStack_ac,0xffffffff,ar6_00,ar7);
  object_dtor_delete(auStack_9c,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7);
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7);
  object_dtor_delete(auStack_38,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c08f9e8\n.set _FUN_8c08f9e8, _FUN_8c08f9e8_def\n");
//@unit 8c08fd38
#include "../decls.h"
int FUN_8c08fd38_def(code *ar4,code *ar5,code *ar6,code *ar7)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  code *ar5_00;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 *ar6_00;
  code *pcVar6;
  int iVar7;
  float fVar8;
  ulonglong in_dr0;
  double dVar9;
  undefined8 uVar10;
  ulonglong in_xd0;
  undefined4 in_PR;
  char cVar11;
  char cVar12;
  code *in_stack_00000000;
  undefined8 uStack_26c;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 auStack_25c [16];
  undefined1 auStack_24c [16];
  undefined1 auStack_23c [16];
  undefined1 auStack_22c [16];
  undefined1 auStack_21c [4];
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 auStack_20c [16];
  undefined1 auStack_1fc [16];
  undefined1 auStack_1ec [16];
  undefined1 auStack_1dc [16];
  undefined1 auStack_1cc [16];
  undefined1 auStack_1bc [16];
  undefined1 auStack_1ac [12];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [12];
  undefined1 auStack_164 [16];
  undefined1 auStack_154 [16];
  undefined1 auStack_144 [16];
  undefined1 auStack_134 [16];
  undefined1 auStack_124 [16];
  undefined1 auStack_114 [16];
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [16];
  undefined1 auStack_e4 [4];
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined1 auStack_d4 [16];
  undefined1 auStack_c4 [16];
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  cVar12 = '\0';
  cVar11 = '\0';
  pcVar4 = ar6;
  pcVar6 = ar7;
  uStack_1c = in_PR;
  FUN_8c102748(&iStack_28,ar5,ar6,ar7);
  Vec3_ctor_xyz(auStack_104,Vec3_ctor_xyz,pcVar4,pcVar6);
  Vec3_ctor_copy(auStack_88,auStack_104,pcVar4,pcVar6);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_104,0xffffffff,pcVar4,pcVar6);
  Vec3_ctor_xyz(auStack_114,uVar3,pcVar4,pcVar6);
  Vec3_ctor_copy(auStack_78,auStack_114,pcVar4,pcVar6);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_114,0xffffffff,pcVar4,pcVar6);
  Vec3_ctor_xyz(auStack_124,uVar3,pcVar4,pcVar6);
  Vec3_ctor_copy(auStack_68,auStack_124,pcVar4,pcVar6);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_124,0xffffffff,pcVar4,pcVar6);
  pcVar4 = Vec3_ctor_xyz;
  Vec3_ctor_xyz(auStack_134,uVar3,Vec3_ctor_xyz,pcVar6);
  Vec3_ctor_copy(auStack_58,auStack_134,pcVar4,pcVar6);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_134,0xffffffff,pcVar4,pcVar6);
  Vec3_ctor_xyz(auStack_144,uVar3,pcVar4,pcVar6);
  Vec3_ctor_copy(auStack_48,auStack_144,pcVar4,pcVar6);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_144,0xffffffff,pcVar4,pcVar6);
  Vec3_ctor_xyz(auStack_154,uVar3,pcVar4,pcVar6);
  Vec3_ctor_copy(auStack_38,auStack_154,pcVar4,pcVar6);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_154,0xffffffff,pcVar4,pcVar6);
  FUN_8c08e9b0(auStack_e4,uVar3,pcVar4,pcVar6);
  Vec3_ctor_zero(auStack_f4,uVar3,pcVar4,pcVar6);
  iVar7 = 1;
  if (*(int *)(ar4 + 0x134) == 0) {
    pcVar4 = (code *)0x64;
    uVar3 = rand_range(ar4,0,100,pcVar6);
    iVar2 = libgcc_divide_helper_0101e4(uVar3,10,pcVar4,pcVar6);
    *(int *)(ar4 + 0x134) = iVar2;
    *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    *(int *)(ar4 + 300) = 0;
  }
  iVar2 = *(int *)(ar4 + 0x134);
  uVar3 = 10;
  if ((iVar2 < 0xb) && (4 < iVar2)) {
                    
    switch(iVar2) {
    default:
      if (*(int *)(ar4 + 300) == 0) {
        if (cVar12 == '\0') {
          *(int *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
        }
        iVar2 = rand_range(ar4,0,3,pcVar6);
        if (iVar2 == 0) {
          pcVar6 = (code *)0x0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0);
        }
        else if (iVar2 == 1) {
          pcVar6 = (code *)0x0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0,0);
        }
        else if (iVar2 == 2) {
          uVar3 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0,0);
          iVar2 = rand_range(ar4,0,2,uVar3);
          FUN_8c033474(ar4,iVar2 + 0x1f,ar5,in_stack_00000000);
          pcVar6 = in_stack_00000000;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        pcVar4 = ar4;
      }
      else if (*(int *)(ar4 + 300) != 1) break;
      iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,300,pcVar4,pcVar6);
      if (iVar2 == 1) {
        iVar7 = 0;
      }
      break;
    case 9:
      iVar2 = *(int *)(ar4 + 300);
      if ((iVar2 < 6) && (-1 < iVar2)) {
                    
        switch(iVar2) {
        case 0:
          iVar2 = get_field_24_026024(in_stack_00000000,10,pcVar4,pcVar6);
          if (iVar2 != 1) {
            uStack_264 = 0;
            Vec3_dtor(auStack_f4,0xffffffff,pcVar4,pcVar6);
            FUN_8c08e93c(auStack_e4,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_38,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_48,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_58,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_68,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_78,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_88,0xffffffff,pcVar4,pcVar6);
            free_if_nonnull_wrap_102790(&iStack_28,0xffffffff,pcVar4,pcVar6);
            return uStack_264;
          }
          uVar3 = get_field_24_026024(in_stack_00000000,uVar3,pcVar4,pcVar6);
          uVar5 = 0;
          iVar2 = FUN_8c069c24(auStack_e4,uVar3,0,pcVar6);
          if (iVar2 == 0) {
            uStack_260 = 0;
            Vec3_dtor(auStack_f4,0xffffffff,uVar5,pcVar6);
            FUN_8c08e93c(auStack_e4,0xffffffff,uVar5,pcVar6);
            Vec3_dtor(auStack_38,0xffffffff,uVar5,pcVar6);
            Vec3_dtor(auStack_48,0xffffffff,uVar5,pcVar6);
            Vec3_dtor(auStack_58,0xffffffff,uVar5,pcVar6);
            Vec3_dtor(auStack_68,0xffffffff,uVar5,pcVar6);
            Vec3_dtor(auStack_78,0xffffffff,uVar5,pcVar6);
            Vec3_dtor(auStack_88,0xffffffff,uVar5,pcVar6);
            free_if_nonnull_wrap_102790(&iStack_28,0xffffffff,uVar5,pcVar6);
            return uStack_260;
          }
          Vec3_assign(ar4 + 0x28c,auStack_d4,uVar5,pcVar6);
          Vec3_scale(auStack_c4,&iStack_9c,uVar5,pcVar6,auStack_164);
          pcVar4 = Vec3_assign;
          Vec3_assign(ar4 + 0x2a8,auStack_164,Vec3_assign,pcVar6);
          Vec3_dtor(auStack_164,0xffffffff,pcVar4,pcVar6);
          if (cVar12 == '\0') {
            *(int *)(ar4 + 0x29c) = iStack_b4;
            *(int *)(ar4 + 0x2a0) = iStack_b0;
            *(int *)(ar4 + 0x2a4) = iStack_ac;
            *(int *)(ar4 + 0x2b8) = iStack_a8;
            *(int *)(ar4 + 700) = iStack_a4;
            *(int *)(ar4 + 0x2c0) = iStack_a0;
            *(int *)(ar4 + 0x2c4) = iStack_9c;
          }
          else {
            *(ulonglong *)(ar4 + 0x29c) = CONCAT44(iStack_b0,iStack_b4);
            *(ulonglong *)(ar4 + 0x2a0) = CONCAT44(iStack_ac,iStack_b0);
            *(ulonglong *)(ar4 + 0x2a4) = CONCAT44(iStack_a8,iStack_ac);
            *(ulonglong *)(ar4 + 0x2b8) = CONCAT44(iStack_a4,iStack_a8);
            *(ulonglong *)(ar4 + 700) = CONCAT44(iStack_a0,iStack_a4);
            *(ulonglong *)(ar4 + 0x2c0) = CONCAT44(iStack_9c,iStack_a0);
            *(ulonglong *)(ar4 + 0x2c4) = CONCAT44(uStack_98,iStack_9c);
          }
          pcVar6 = ar4 + 0x2c4;
          *(int *)(ar4 + 0x2c8) = iStack_e0;
          *(int *)(ar4 + 0x2f4) = iStack_dc;
          *(int *)(ar4 + 0x2f8) = iStack_d8;
          pcVar4 = (code *)0x2e0;
          Vec3_assign(ar4 + 0x2e0,auStack_88 + *(int *)(ar4 + 0x2c8) * 0x10,0x2e0,pcVar6);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        case 1:
          Vec3_set_xyz(auStack_170,ar4 + 0x2a0,pcVar4,pcVar6);
          FUN_8c023484(ar4 + 0x2a8,auStack_170,pcVar4,pcVar6,auStack_180);
          ar5_00 = ar4 + 0x28c;
          Vec3_add(auStack_180,ar5_00,pcVar4,pcVar6,auStack_190);
          Vec3_ctor_xyz(auStack_1a0,ar5_00,pcVar4,pcVar6);
          Vec3_set_xyz(auStack_1ac,700,pcVar4,pcVar6);
          FUN_8c023484(auStack_1a0,auStack_1ac,pcVar4,pcVar6,auStack_1bc);
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(0x41a00000,*(int *)(ar4 + 0x2c4));
          }
          else {
            in_xd0 = *(ulonglong *)(ar4 + 0x2c4);
            dVar9 = 5.43774891134696e-312;
          }
          if (cVar11 == '\0') {
            fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar8 = SUB84(dVar9 * dVar9,0);
          }
          uVar1 = in_xd0;
          if (cVar12 == '\0') {
            uStack_26c = CONCAT44((*(uint*)((uchar*)&uStack_26c+4)),fVar8);
            uVar1 = uStack_26c;
          }
          uStack_26c = uVar1;
          ar6_00 = auStack_1cc;
          Vec3_scale(auStack_1bc,&uStack_26c,ar6_00,pcVar6,ar6_00);
          Vec3_sub(auStack_190,auStack_1cc,ar6_00,pcVar6,auStack_1dc);
          Vec3_assign(auStack_f4,auStack_1dc,ar6_00,pcVar6);
          Vec3_dtor(auStack_1dc,0xffffffff,ar6_00,pcVar6);
          Vec3_dtor(auStack_1cc,0xffffffff,ar6_00,pcVar6);
          Vec3_dtor(auStack_1bc,0xffffffff,ar6_00,pcVar6);
          object_dtor_delete(auStack_1ac,0xffffffff,ar6_00,pcVar6);
          Vec3_dtor(auStack_1a0,0xffffffff,ar6_00,pcVar6);
          Vec3_dtor(auStack_190,0xffffffff,ar6_00,pcVar6);
          Vec3_dtor(auStack_180,0xffffffff,ar6_00,pcVar6);
          object_dtor_delete(auStack_170,0xffffffff,ar6_00,pcVar6);
          pcVar4 = (code *)auStack_f4;
          iVar2 = FUN_8c08e9fc(ar4,ar5,pcVar4,ar6);
          pcVar6 = ar6;
          if (iVar2 == 0) {
            if (cVar12 == '\0') {
              *(int *)(ar4 + 0x28) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar8;
            }
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          }
          break;
        case 2:
          iVar2 = FUN_8c08eb8c(ar4,ar6,pcVar4,pcVar6);
          if (iVar2 == 0) {
            if (cVar12 == '\0') {
              *(int *)(ar4 + 0x2cc) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x2cc) = in_dr0 & 0xffffffff;
            }
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            *(int *)(ar4 + 0x240) = 1;
          }
          break;
        case 3:
          FUN_8c08eef4(ar4,*(int *)(ar4 + 0x2c8),ar6,pcVar6);
          pcVar4 = ar6;
          break;
        case 4:
          FUN_8c08f354(ar4,*(int *)(ar4 + 0x2c8),ar5,ar6);
          pcVar4 = ar5;
          pcVar6 = ar6;
          break;
        case 5:
          iVar7 = FUN_8c08f9e8(ar4,*(int *)(ar4 + 0x2c8),ar6,pcVar6);
          pcVar4 = ar6;
          if (iVar7 == 0) {
            *(int *)(ar4 + 0x240) = 0;
            if ((-1 < *(int *)(ar4 + 0x2f4)) && (-1 < *(int *)(ar4 + 0x2f8))) {
              FUN_8c06b1d8(*(int *)(ar4 + 0x2f4),*(int *)(ar4 + 0x2f8),ar6,pcVar6);
              *(int *)(ar4 + 0x2f4) = -1;
              *(int *)(ar4 + 0x2f8) = -1;
            }
            Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,pcVar6,auStack_1ec);
            Vec3_add(ar5,auStack_1ec,ar6,pcVar6,auStack_1fc);
            Vec3_add(auStack_1fc,ar4 + 0x90,ar6,pcVar6,auStack_20c);
            pcVar4 = (code *)auStack_20c;
            Vec3_add(pcVar4,ar4 + 0x2d0,pcVar4,pcVar6,auStack_21c);
            (**(code **)(*(int *)in_stack_00000000 + 0x128))(in_stack_00000000,ar5,pcVar4,pcVar6);
            if (cVar12 == '\0') {
              dVar9 = (double)CONCAT44(uStack_218,(int)(in_dr0 >> 0x20));
              in_dr0 = in_xd0;
            }
            else {
              dVar9 = (double)CONCAT44(uStack_214,uStack_218);
            }
            if (cVar11 == '\0') {
              fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
            }
            else {
              fVar8 = SUB84(dVar9 - dVar9,0);
            }
            if (cVar12 == '\0') {
              dVar9 = (double)CONCAT44(0x38d1b717,fVar8);
            }
            else {
              dVar9 = -7.932637709049515e-251;
            }
            if (cVar11 == '\0') {
              fVar8 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
            }
            else {
              fVar8 = SUB84(dVar9 + dVar9,0);
            }
            if (cVar12 == '\0') {
              dVar9 = (double)CONCAT44(*(int *)(ar4 + 0x2d4),fVar8);
            }
            else {
              dVar9 = *(double *)(ar4 + 0x2d4);
            }
            if (cVar11 == '\0') {
              fVar8 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
            }
            else {
              fVar8 = SUB84(dVar9 + dVar9,0);
            }
            if (cVar12 == '\0') {
              *(float *)(ar4 + 0x2d4) = fVar8;
            }
            else {
              *(ulonglong *)(ar4 + 0x2d4) = in_dr0;
            }
            Vec3_dtor(auStack_21c,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_20c,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_1fc,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_1ec,0xffffffff,pcVar4,pcVar6);
          }
        }
      }
      if (((-1 < *(int *)(ar4 + 0x2f4)) && (-1 < *(int *)(ar4 + 0x2f8))) &&
         (iVar2 = FUN_8c06b054(*(int *)(ar4 + 0x2f4),FUN_8c06b054,pcVar4,pcVar6), iVar2 == 0)) {
        FUN_8c06b1d8(*(int *)(ar4 + 0x2f4),*(int *)(ar4 + 0x2f8),pcVar4,pcVar6);
        iVar7 = 0;
        *(int *)(ar4 + 0x240) = 0;
        *(int *)(ar4 + 0x2f4) = -1;
        *(int *)(ar4 + 0x2f8) = -1;
      }
    }
  }
  else {
    if (*(int *)(ar4 + 300) == 0) {
      FUN_8c0230f0(ar4 + 0x80,ar4 + 0x80,pcVar4,pcVar6,auStack_22c);
      uVar5 = (undefined4)in_dr0;
      Vec3_normalize(auStack_22c,auStack_22c,pcVar4,pcVar6);
      FUN_8c03263c(ar4,auStack_23c,pcVar4,pcVar6);
      Vec3_add(auStack_24c,ar5,pcVar4,pcVar6,auStack_25c);
      Vec3_assign(ar4 + 0x54,auStack_25c,pcVar4,pcVar6);
      Vec3_dtor(auStack_25c,0xffffffff,pcVar4,pcVar6);
      Vec3_dtor(auStack_24c,0xffffffff,pcVar4,pcVar6);
      Vec3_dtor(auStack_23c,0xffffffff,pcVar4,pcVar6);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_22c,0xffffffff,pcVar4,pcVar6);
      iVar7 = get_field_24_026024(in_stack_00000000,uVar3,pcVar4,pcVar6);
      pcVar6 = in_stack_00000000;
      if (iVar7 == 0) {
        if (cVar12 == '\0') {
          iStack_24 = *(int *)(ar7 + 4);
          iStack_20 = *(int *)(ar7 + 8);
          uVar10 = CONCAT44(iStack_20,uVar5);
        }
        else {
          iStack_24 = (int)*(undefined8 *)(ar7 + 4);
          uVar10 = *(undefined8 *)(ar7 + 8);
          iStack_20 = (int)uVar10;
          uStack_1c = (undefined4)((ulonglong)uVar10 >> 0x20);
        }
        iStack_28 = 0x447a0000;
        if (cVar12 == '\0') {
          uVar10 = CONCAT44(0x40000000,(int)uVar10);
        }
        else {
          uVar10 = 0x8c03278840000000;
        }
        ar7 = (code *)&iStack_28;
        FUN_8c032788(ar4,ar4 + 0x54,ar7,in_stack_00000000);
      }
      else {
        if (cVar12 == '\0') {
          uVar10 = CONCAT44(0x40000000,uVar5);
        }
        else {
          uVar10 = 0x8c03278840000000;
        }
        FUN_8c032788(ar4,ar4 + 0x54,ar7,in_stack_00000000);
      }
      (**(code **)(*(int *)in_stack_00000000 + 0x128))(in_stack_00000000,ar4 + 0x54,ar7,pcVar6);
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x58) = (int)((ulonglong)uVar10 >> 0x20);
      }
      else {
        *(undefined8 *)(ar4 + 0x58) = uVar10;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    else if (*(int *)(ar4 + 300) != 1) goto LAB_8c090ada;
    pcVar4 = ar4 + 0x54;
    iVar7 = FUN_8c091924(ar4,ar5,pcVar4,pcVar6);
  }
LAB_8c090ada:
  (*(uint*)((uchar*)&uStack_26c+4)) = iVar7;
  Vec3_dtor(auStack_f4,0xffffffff,pcVar4,pcVar6);
  FUN_8c08e93c(auStack_e4,0xffffffff,pcVar4,pcVar6);
  Vec3_dtor(auStack_38,0xffffffff,pcVar4,pcVar6);
  Vec3_dtor(auStack_48,0xffffffff,pcVar4,pcVar6);
  Vec3_dtor(auStack_58,0xffffffff,pcVar4,pcVar6);
  Vec3_dtor(auStack_68,0xffffffff,pcVar4,pcVar6);
  Vec3_dtor(auStack_78,0xffffffff,pcVar4,pcVar6);
  Vec3_dtor(auStack_88,0xffffffff,pcVar4,pcVar6);
  free_if_nonnull_wrap_102790(&iStack_28,0xffffffff,pcVar4,pcVar6);
  return (*(uint*)((uchar*)&uStack_26c+4));
}

__asm__(".globl _FUN_8c08fd38\n.set _FUN_8c08fd38, _FUN_8c08fd38_def\n");
