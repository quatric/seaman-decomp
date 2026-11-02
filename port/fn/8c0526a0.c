#include "../decls.h"
undefined4 FUN_8c0526a0_def(code *ar4,code *ar5,code *ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  code *ar6_00;
  code *ar7_00;
  undefined4 ar7_01;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 in_dr0;
  float fVar12;
  double dVar10;
  ulonglong uVar11;
  undefined8 in_xd0;
  char cVar13;
  char cVar14;
  undefined8 uStack_180;
  undefined1 auStack_16c [12];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
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
  
  cVar14 = '\0';
  cVar13 = '\0';
  uVar4 = 1;
  uVar8 = 1;
  pcVar3 = ar6;
  Vec3_ctor_zero(auStack_20,1,ar6,ar7);
  Vec3_ctor_zero(auStack_30,uVar4,pcVar3,ar7);
  FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar3,ar7,auStack_40);
  Vec3_ctor_xyz(auStack_50,uVar4,pcVar3,ar7);
  FUN_8c0230f0(auStack_50,uVar4,pcVar3,ar7,auStack_60);
  FUN_8c022dac(auStack_40,auStack_60,pcVar3,ar7);
  uVar1 = in_dr0;
  if (cVar14 == '\0') {
    uStack_180 = CONCAT44((*(uint*)((uchar*)&uStack_180+4)),(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = uStack_180;
  }
  uStack_180 = uVar1;
  Vec3_dtor(auStack_60,0xffffffff,pcVar3,ar7);
  ar7_00 = Vec3_dtor;
  Vec3_dtor(auStack_50,0xffffffff,pcVar3,Vec3_dtor);
  Vec3_dtor(auStack_40,0xffffffff,pcVar3,ar7_00);
  if (ar6 != (code *)0x0) {
    if (ar6 == (code *)0x1) {
      pcVar3 = *(code **)(ar4 + 0x28c);
      uVar4 = 5;
      if (((int)pcVar3 < 6) && (-1 < (int)pcVar3)) {
        ar6_00 = (code *)((int)pcVar3 * 4);
                    
        switch(pcVar3) {
        case 0x0:
          if (*(int *)(ar4 + 0x324) == 1) {
            Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7_00);
            Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7_00);
            return 0;
          }
          *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
          ar6_00 = ar4;
        case 0x1:
          pcVar3 = ar6_00;
          iVar5 = FUN_8c057164(ar4,ar5,pcVar3,ar7_00);
          if (iVar5 == 0) {
            *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
          }
          break;
        case 0x2:
          Vec3_ctor_xyz(auStack_70,5,ar6_00,ar7_00);
          uVar4 = FUN_8c023334(ar4 + 0x14,auStack_70,ar6_00,ar7_00);
          *(undefined4 *)(ar4 + 0x27c) = uVar4;
          uVar4 = 0xffffffff;
          Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7_00);
          FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7_00,auStack_80);
          ar6_00 = Vec3_ctor_xyz;
          Vec3_ctor_xyz(auStack_90,uVar4,Vec3_ctor_xyz,ar7_00);
          FUN_8c022dac(auStack_80,auStack_90,ar6_00,ar7_00);
          if (cVar14 == '\0') {
            *(int *)(ar4 + 0x224) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            *(undefined8 *)(ar4 + 0x224) = in_dr0;
          }
          Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7_00);
          uVar4 = 0xffffffff;
          Vec3_dtor(auStack_80,0xffffffff,ar6_00,ar7_00);
          if (cVar14 == '\0') {
            fVar9 = *(float *)(ar4 + 0x224);
            fVar12 = 30.0;
          }
          else {
            fVar9 = 30.0;
            fVar12 = -1.0;
          }
          if (cVar13 == '\0' && fVar9 < fVar12) {
            ar7_01 = 0;
            uVar7 = 0xffffffff;
            uVar4 = 0x1a;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar7,ar7_01);
            *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 3;
            *(undefined4 *)(ar4 + 0x27c) = 0;
            pcVar3 = (code *)0x28c;
            ar7_00 = ar4;
            break;
          }
          if (cVar14 == '\0') {
            fVar9 = *(float *)(ar4 + 0x224);
            fVar12 = 70.0;
          }
          else {
            fVar9 = 70.0;
            fVar12 = -1.0;
          }
          if (cVar13 == '\0' && fVar9 < fVar12) {
            ar7_00 = (code *)0x0;
            pcVar3 = (code *)0xffffffff;
            uVar4 = 0x1a;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,pcVar3,ar7_00);
            *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 3;
            break;
          }
          if (*(int *)(ar4 + 0x27c) == 3) {
            FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00);
            FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00);
            Vec3_ctor_xyz(auStack_c0,uVar4,ar6_00,ar7_00);
            Vec3_add(ar5,auStack_c0,ar6_00,ar7_00,auStack_d0);
            ar6_00 = (code *)auStack_d0;
            FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00);
            Vec3_dtor(auStack_d0,0xffffffff,ar6_00,ar7_00);
            uVar4 = 0xffffffff;
            Vec3_dtor(auStack_c0,0xffffffff,ar6_00,ar7_00);
          }
          else if (*(int *)(ar4 + 0x27c) == 4) {
            FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00);
            FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00);
            Vec3_ctor_xyz(auStack_a0,uVar4,ar6_00,ar7_00);
            Vec3_add(ar5,auStack_a0,ar6_00,ar7_00,auStack_b0);
            ar6_00 = (code *)auStack_b0;
            FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00);
            Vec3_dtor(auStack_b0,0xffffffff,ar6_00,ar7_00);
            uVar4 = 0xffffffff;
            Vec3_dtor(auStack_a0,0xffffffff,ar6_00,ar7_00);
          }
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00);
          *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
        case 0x3:
          iVar5 = FUN_8c057e58(ar4,uVar4,ar6_00,ar7_00);
          pcVar3 = ar6_00;
          if (iVar5 == 0) {
            *(undefined4 *)(ar4 + 0x28c) = 1;
          }
          break;
        case 0x4:
          iVar5 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,5,ar6_00,ar7_00);
          pcVar3 = ar6_00;
          if (iVar5 == 1) {
            *(undefined4 *)(ar4 + 0x28c) = 0;
            *(undefined4 *)(ar4 + 0x290) = 0;
            uVar8 = 0;
          }
          break;
        case 0x5:
          *(undefined4 *)(ar4 + 0x28c) = 0;
          *(undefined4 *)(ar4 + 0x290) = 0;
          uVar8 = 0;
          pcVar3 = ar6_00;
        }
      }
      goto switchD_8c0527a4_default;
    }
    if (ar6 != (code *)0x2) goto switchD_8c0527a4_default;
  }
  Vec3_scale(ar4 + 0x14,&DAT_8c1365a4,pcVar3,ar7_00,auStack_e0);
  Vec3_add(ar5,auStack_e0,pcVar3,ar7_00,auStack_f0);
  pcVar3 = ar5;
  FUN_8c031c74(ar4,auStack_f0,ar5,ar7_00);
  Vec3_dtor(auStack_f0,0xffffffff,pcVar3,ar7_00);
  iVar5 = -1;
  Vec3_dtor(auStack_e0,0xffffffff,pcVar3,ar7_00);
  if (cVar14 == '\0') {
    dVar10 = (double)CONCAT44(0x3f7d70a4,*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x28);
    dVar10 = 1.38406752724369e-311;
  }
  if (cVar13 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0) * fVar9);
  }
  else {
    dVar10 = dVar10 * dVar10;
  }
  if (cVar14 == '\0') {
    *(int *)(ar4 + 0x28) = SUB84(dVar10,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = in_xd0;
  }
  iVar2 = *(int *)(ar4 + 0x28c);
  if (iVar2 == 0) {
    iVar5 = FUN_8c05c28c(ar4,iVar5,pcVar3,ar7_00);
    if (iVar5 == 0) {
      *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
    }
    goto switchD_8c0527a4_default;
  }
  if (iVar2 == 1) {
    Vec3_ctor_xyz(auStack_100,iVar5,pcVar3,ar7_00);
    uVar4 = FUN_8c023334(ar4 + 0x14,auStack_100,pcVar3,ar7_00);
    *(undefined4 *)(ar4 + 0x27c) = uVar4;
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_100,0xffffffff,pcVar3,ar7_00);
    FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar3,ar7_00,auStack_110);
    Vec3_ctor_xyz(auStack_120,uVar4,pcVar3,ar7_00);
    FUN_8c0230f0(auStack_120,uVar4,pcVar3,ar7_00,auStack_130);
    FUN_8c022dac(auStack_110,auStack_130,pcVar3,ar7_00);
    if (cVar14 == '\0') {
      *(int *)(ar4 + 0x224) = (int)((ulonglong)dVar10 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x224) = dVar10;
    }
    Vec3_dtor(auStack_130,0xffffffff,pcVar3,ar7_00);
    Vec3_dtor(auStack_120,0xffffffff,pcVar3,ar7_00);
    Vec3_dtor(auStack_110,0xffffffff,pcVar3,ar7_00);
    if (cVar14 == '\0') {
      uVar11 = CONCAT44(0x420c0000,*(undefined4 *)(ar4 + 0x224));
    }
    else {
      uVar11 = 0x28c420c0000;
    }
    if (cVar13 == '\0' && (float)uVar11 < (float)(uVar11 >> 0x20)) {
      *(undefined4 *)(ar4 + 0x27c) = 0;
      uVar8 = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = uVar11 & 0xffffffff;
      }
      *(undefined4 *)(ar4 + 0x28c) = 0;
      goto switchD_8c0527a4_default;
    }
    if (cVar14 == '\0') {
      uVar11 = CONCAT44(0x425c0000,*(undefined4 *)(ar4 + 0x224));
    }
    else {
      uVar11 = 0x28c425c0000;
    }
    fVar9 = (float)uVar11;
    if (cVar13 == '\0' && fVar9 < (float)(uVar11 >> 0x20)) {
      uVar8 = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = uVar11 & 0xffffffff;
      }
      *(undefined4 *)(ar4 + 0x28c) = 0;
      goto switchD_8c0527a4_default;
    }
    if (cVar14 == '\0') {
      *(undefined4 *)(ar4 + 0x224) = 0x42340000;
    }
    else {
      fVar9 = 45.0;
      *(undefined8 *)(ar4 + 0x224) = 0x27c42340000;
    }
    if (*(int *)(ar4 + 0x27c) == 3) {
      ar7_00 = (code *)0x0;
      pcVar3 = (code *)0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
    }
    else if (*(int *)(ar4 + 0x27c) == 4) {
      ar7_00 = (code *)0x0;
      pcVar3 = (code *)0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
    }
    *(undefined4 *)(ar4 + 0x2b8) = 3;
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,pcVar3,ar7_00);
    if (cVar14 == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = (ulonglong)(uint)fVar9;
    }
    pcVar3 = (code *)0x28c;
    iVar5 = *(int *)(ar4 + 0x28c);
    *(int *)(ar4 + 0x28c) = iVar5 + 1;
  }
  else if (iVar2 != 2) {
    if (iVar2 == 3) {
      uVar8 = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar10 & 0xffffffff;
      }
      *(undefined4 *)(ar4 + 0x28c) = 0;
      pcVar3 = (code *)0x0;
      ar7_00 = (code *)0x28c;
    }
    goto switchD_8c0527a4_default;
  }
  FUN_8c05ae54(ar4,iVar5,pcVar3,ar7_00);
  Vec3_ctor_xyz(auStack_140,iVar5,pcVar3,ar7_00);
  Vec3_scale(auStack_140,&DAT_8c1365a8,pcVar3,ar7_00,auStack_150);
  puVar6 = auStack_150;
  Vec3_add(ar5,puVar6,pcVar3,ar7_00,auStack_160);
  uVar4 = get_field_1c_026dd8(ar4 + 0xb0,puVar6,pcVar3,ar7_00);
  s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar4,pcVar3,ar7_00);
  Vec3_set_xyz(auStack_16c,ar4 + 0x224,pcVar3,ar7_00);
  pcVar3 = ar4 + 0x14;
  puVar6 = auStack_160;
  FUN_8c031eb0(ar4,ar5,puVar6,pcVar3,(int)&uStack_180 + 4);
  Vec3_assign(ar4 + 0x14,(int)&uStack_180 + 4,puVar6,pcVar3);
  Vec3_dtor((int)&uStack_180 + 4,0xffffffff,puVar6,pcVar3);
  object_dtor_delete(auStack_16c,0xffffffff,puVar6,pcVar3);
  Vec3_dtor(auStack_160,0xffffffff,puVar6,pcVar3);
  uVar7 = 0xffffffff;
  puVar6 = auStack_150;
  Vec3_dtor(puVar6,0xffffffff,puVar6,0xffffffff);
  uVar4 = 0xffffffff;
  Vec3_dtor(auStack_140,0xffffffff,puVar6,uVar7);
  pcVar3 = (code *)CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,puVar6,uVar7);
  ar7_00 = pcVar3;
  if (pcVar3 == (code *)0x1) {
    *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + -1;
  }
switchD_8c0527a4_default:
  Vec3_dtor(auStack_30,0xffffffff,pcVar3,ar7_00);
  Vec3_dtor(auStack_20,0xffffffff,pcVar3,ar7_00);
  return uVar8;
}

__asm__(".globl _FUN_8c0526a0\n.set _FUN_8c0526a0, _FUN_8c0526a0_def\n");
