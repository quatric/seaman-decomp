#include "../decls.h"
undefined4 FUN_8c04b168_def(int ar4,undefined8 *ar5,code *ar6,code *ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *ar4_00;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *ar5_00;
  undefined1 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 ar7_00;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar9;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  double *pdVar10;
  uint uVar11;
  float fVar12;
  undefined8 in_dr0;
  double dVar13;
  ulonglong uVar14;
  float fVar16;
  undefined8 uVar15;
  undefined4 in_fr3;
  undefined8 in_dr6;
  double in_dr12;
  double in_dr14;
  double dVar17;
  undefined8 in_xd0;
  undefined8 in_xd6;
  undefined8 in_xd14;
  bool bVar18;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_20 [16];
  double dStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    
    (*(uint*)((uchar*)&uStack_8+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    pdVar10 = &dStack_10;
    dStack_10 = (double)CONCAT44(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar10 = (double *)auStack_20;
    uStack_8 = in_xd14;
    dStack_10 = in_dr14;
  }
  *(undefined4 *)((int)pdVar10 + -4) = unaff_r14;
  *(undefined4 *)((int)pdVar10 + -8) = unaff_r13;
  *(undefined4 *)((int)pdVar10 + -0xc) = unaff_r12;
  *(undefined4 *)((int)pdVar10 + -0x10) = unaff_r11;
  *(undefined4 *)((int)pdVar10 + -0x14) = unaff_r10;
  *(undefined4 *)((int)pdVar10 + -0x18) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar10 + -0x228) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)((int)pdVar10 + -0x224) = (int)in_dr6;
  }
  else {
    *(undefined8 *)((int)pdVar10 + -0x228) = in_dr6;
    *(undefined8 *)((int)pdVar10 + -0x224) = in_xd6;
  }
  uVar9 = 1;
  pcVar7 = ar6;
  Vec3_ctor_zero((undefined1 *)((int)pdVar10 + -0x28),ar5,ar6,ar7);
  Vec3_ctor_copy((undefined1 *)((int)pdVar10 + -0x38),ar6,pcVar7,ar7);
  FUN_8c022fc0(ar5,(undefined1 *)((int)pdVar10 + -0x38),pcVar7,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar10 + -0x160) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x160),(int)in_dr0);
    *(undefined4 *)((int)pdVar10 + -0x134) = *(undefined4 *)((int)pdVar10 + -0x160);
  }
  else {
    *(undefined8 *)((int)pdVar10 + -0x160) = in_dr0;
    dVar13 = *(double *)((int)pdVar10 + -0x160);
    *(double *)((int)pdVar10 + -0x134) = dVar13;
  }
  *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0x80);
  puVar3 = ar5;
  Vec3_sub((undefined1 *)((int)pdVar10 + -0x38),ar5,pcVar7,ar7,
           *(undefined4 *)((int)pdVar10 + -0x22c));
  *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0x90);
  Vec3_normalize((undefined1 *)((int)pdVar10 + -0x80),puVar3,pcVar7,ar7);
  Vec3_ctor_copy((undefined1 *)((int)pdVar10 + -0x48),(undefined1 *)((int)pdVar10 + -0x90),pcVar7,
                 ar7);
  Vec3_dtor((undefined1 *)((int)pdVar10 + -0x90),0xffffffff,pcVar7,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar10 + -0x80),0xffffffff,pcVar7,ar7);
  puVar3 = ar5;
  Vec3_ctor_copy((undefined1 *)((int)pdVar10 + -0x58),ar5,pcVar7,ar7);
  Vec3_set_zero((undefined1 *)((int)pdVar10 + -100),puVar3,pcVar7,ar7);
  Vec3_set_zero((undefined1 *)((int)pdVar10 + -0x70),puVar3,pcVar7,ar7);
  if (*(int *)(ar4 + 0x128) == 3) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44(0x40800000,SUB84(in_dr14,0));
      *(undefined4 *)((int)pdVar10 + -0x138) = 0x41c80000;
      *(undefined4 *)((int)pdVar10 + -0x13c) = 0x42040000;
      *(undefined4 *)((int)pdVar10 + -0x140) = 0x41200000;
      *(undefined4 *)((int)pdVar10 + -0x144) = 0x429e0000;
      in_dr12 = 16777220.078125;
      *(undefined4 *)((int)pdVar10 + -0x150) = 0x41c80000;
      *(undefined4 *)((int)pdVar10 + -0x148) = 0x41f00000;
      *(undefined4 *)((int)pdVar10 + -0x14c) = 0x42200000;
      dVar13 = (double)CONCAT44(0x41700000,SUB84(dVar13,0));
      *(undefined4 *)((int)pdVar10 + -0x154) = 0x41700000;
    }
    else {
      in_dr14 = 2097152.50390625;
      *(undefined8 *)((int)pdVar10 + -0x138) = 0xf041c80000;
      *(undefined8 *)((int)pdVar10 + -0x13c) = 0xec42040000;
      *(undefined8 *)((int)pdVar10 + -0x140) = 0xe841200000;
      *(undefined8 *)((int)pdVar10 + -0x144) = 0xe4429e0000;
      in_dr12 = 4.58893505299949e-312;
      *(undefined8 *)((int)pdVar10 + -0x150) = 0xf041c80000;
      *(undefined8 *)((int)pdVar10 + -0x148) = 0xe041f00000;
      *(undefined8 *)((int)pdVar10 + -0x14c) = 0xdc42200000;
      dVar13 = 4.58893505299949e-312;
      *(undefined8 *)((int)pdVar10 + -0x154) = 0xd841700000;
    }
  }
  else if (*(int *)(ar4 + 0x128) == 4) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44(0x41700000,SUB84(in_dr14,0));
      *(undefined4 *)((int)pdVar10 + -0x138) = 0x420c0000;
      *(undefined4 *)((int)pdVar10 + -0x13c) = 0x42280000;
      *(undefined4 *)((int)pdVar10 + -0x140) = 0x41200000;
      *(undefined4 *)((int)pdVar10 + -0x144) = 0x429e0000;
      in_dr12 = 8388610.052734375;
      *(undefined4 *)((int)pdVar10 + -0x150) = 0x41c80000;
      *(undefined4 *)((int)pdVar10 + -0x148) = 0x420c0000;
      *(undefined4 *)((int)pdVar10 + -0x14c) = 0x42280000;
      dVar13 = (double)CONCAT44(0x41700000,SUB84(dVar13,0));
      *(undefined4 *)((int)pdVar10 + -0x154) = 0x41700000;
    }
    else {
      in_dr14 = 268435521.4375;
      *(undefined8 *)((int)pdVar10 + -0x138) = 0xf0420c0000;
      *(undefined8 *)((int)pdVar10 + -0x13c) = 0xec42280000;
      *(undefined8 *)((int)pdVar10 + -0x140) = 0xe841200000;
      *(undefined8 *)((int)pdVar10 + -0x144) = 0xe4429e0000;
      in_dr12 = 805306498.75;
      *(undefined8 *)((int)pdVar10 + -0x150) = 0xd841c80000;
      *(undefined8 *)((int)pdVar10 + -0x148) = 0xf0420c0000;
      *(undefined8 *)((int)pdVar10 + -0x14c) = 0xec42280000;
      dVar13 = 268435521.4375;
      *(undefined8 *)((int)pdVar10 + -0x154) = 0x41b0000041700000;
    }
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if ((5 < iVar1) || (iVar1 < 0)) goto switchD_8c04b39c_caseD_2;
                    
  switch(iVar1) {
  case 0:
    uVar5 = FUN_8c05c28c(ar4,iVar1 * 4,pcVar7,ar7);
    *(undefined4 *)((int)pdVar10 + -0x164) = uVar5;
    if (*(int *)((int)pdVar10 + -0x164) != 0) {
      *(undefined4 *)((int)pdVar10 + -0x158) = 1;
      object_dtor_delete((undefined1 *)((int)pdVar10 + -0x70),0xffffffff,pcVar7,ar7);
      object_dtor_delete((undefined1 *)((int)pdVar10 + -100),0xffffffff,pcVar7,ar7);
      Vec3_dtor((undefined1 *)((int)pdVar10 + -0x58),0xffffffff,pcVar7,ar7);
      Vec3_dtor((undefined1 *)((int)pdVar10 + -0x48),0xffffffff,pcVar7,ar7);
      Vec3_dtor((undefined1 *)((int)pdVar10 + -0x38),0xffffffff,pcVar7,ar7);
      Vec3_dtor((undefined1 *)((int)pdVar10 + -0x28),0xffffffff,pcVar7,ar7);
      return *(undefined4 *)((int)pdVar10 + -0x158);
    }
    if (*(int *)(ar4 + 0x1b8) == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x18c) = *(undefined4 *)ar5;
        *(undefined4 *)(ar4 + 400) = *(undefined4 *)((int)ar5 + 4);
        *(undefined4 *)(ar4 + 0x194) = *(undefined4 *)(ar5 + 1);
        *(undefined4 *)(ar4 + 0x198) = *(undefined4 *)((int)pdVar10 + -0x38);
        *(undefined4 *)(ar4 + 0x19c) = *(undefined4 *)((int)pdVar10 + -0x34);
        dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x30),SUB84(dVar13,0));
        *(undefined4 *)(ar4 + 0x1a0) = *(undefined4 *)((int)pdVar10 + -0x30);
      }
      else {
        *(undefined8 *)(ar4 + 0x18c) = *ar5;
        *(undefined8 *)(ar4 + 400) = *(undefined8 *)((int)ar5 + 4);
        *(undefined8 *)(ar4 + 0x194) = ar5[1];
        *(undefined8 *)(ar4 + 0x198) = *(undefined8 *)((int)pdVar10 + -0x38);
        *(undefined8 *)(ar4 + 0x19c) = *(undefined8 *)((int)pdVar10 + -0x34);
        dVar13 = *(double *)((int)pdVar10 + -0x30);
        *(double *)(ar4 + 0x1a0) = dVar13;
      }
    }
    uVar11 = SUB84(dVar13,0);
    FUN_8c03c314(ar4,FUN_8c03c314,pcVar7,ar7);
    uVar14 = (ulonglong)uVar11;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0xa0) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0xa0) = uVar14;
    }
    *(undefined4 *)((int)pdVar10 + -0x1fc) = *(undefined4 *)(ar4 + 0x128);
    FUN_8c031b68(ar4,(*(int *)((int)pdVar10 + -0x1fc) * 2 + *(int *)((int)pdVar10 + -0x1fc)) * 8 +
                     -0x73d7fc0c,pcVar7,ar7);
    uVar11 = (uint)uVar14;
    puVar6 = (undefined1 *)((int)pdVar10 + -0x38);
    puVar3 = ar5;
    FUN_8c031bb4(ar4,ar5,puVar6,ar7);
    uVar14 = (ulonglong)uVar11;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar14;
    }
    FUN_8c0231c8((undefined1 *)((int)pdVar10 + -0x48),puVar3,puVar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar10 + -0x168) = (int)(uVar14 >> 0x20);
    }
    else {
      *(ulonglong *)((int)pdVar10 + -0x168) = uVar14;
    }
    iVar1 = ar4 + 0x14;
    FUN_8c0231c8(iVar1,puVar3,puVar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar10 + -0x16c) = (int)(uVar14 >> 0x20);
      uVar15 = CONCAT44(*(undefined4 *)((int)pdVar10 + -0x16c),(int)uVar14);
    }
    else {
      *(ulonglong *)((int)pdVar10 + -0x16c) = uVar14;
      uVar15 = *(undefined8 *)((int)pdVar10 + -0x16c);
    }
    FUN_8c010e38(iVar1,puVar3,puVar6,ar7,*(undefined4 *)((int)pdVar10 + -0x228));
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar10 + -0x170) = (int)((ulonglong)uVar15 >> 0x20);
    }
    else {
      *(undefined8 *)((int)pdVar10 + -0x170) = uVar15;
    }
    uVar5 = 0x228;
    if (in_FPSCR_SZ == '\0') {
      uVar4 = *(undefined4 *)((int)pdVar10 + -0x170);
      uVar15 = CONCAT44(uVar4,(int)uVar15);
      *(undefined4 *)(ar4 + 0x228) = uVar4;
    }
    else {
      uVar15 = *(undefined8 *)((int)pdVar10 + -0x170);
      *(undefined8 *)(ar4 + 0x228) = uVar15;
    }
    *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0xa0);
    FUN_8c0230f0(ar4 + 0x14,0x228,puVar6,ar7,*(undefined4 *)((int)pdVar10 + -0x22c));
    *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0xb0);
    FUN_8c0230f0((undefined1 *)((int)pdVar10 + -0x48),uVar5,puVar6,ar7,
                 *(undefined4 *)((int)pdVar10 + -0x22c));
    FUN_8c022dac((undefined1 *)((int)pdVar10 + -0xa0),(undefined1 *)((int)pdVar10 + -0xb0),puVar6,
                 ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar10 + -0x174) = (int)((ulonglong)uVar15 >> 0x20);
      uVar15 = CONCAT44(*(undefined4 *)((int)pdVar10 + -0x174),(int)uVar15);
      *(undefined4 *)(ar4 + 0x224) = *(undefined4 *)((int)pdVar10 + -0x174);
    }
    else {
      *(undefined8 *)((int)pdVar10 + -0x174) = uVar15;
      uVar15 = *(undefined8 *)((int)pdVar10 + -0x174);
      *(undefined8 *)(ar4 + 0x224) = uVar15;
    }
    uVar5 = (undefined4)uVar15;
    pcVar7 = Vec3_dtor;
    Vec3_dtor((undefined1 *)((int)pdVar10 + -0xb0),0xffffffff,Vec3_dtor,ar7);
    Vec3_dtor((undefined1 *)((int)pdVar10 + -0xa0),0xffffffff,pcVar7,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
      uVar15 = CONCAT44(*(undefined4 *)(ar4 + 0x220),*(undefined4 *)(ar4 + 0x24));
    }
    else {
      *(undefined8 *)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar5);
      in_xd0 = *(undefined8 *)(ar4 + 0x24);
      uVar15 = *(undefined8 *)(ar4 + 0x220);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar15 < (float)((ulonglong)uVar15 >> 0x20)) {
      ar7 = (code *)0x0;
      pcVar7 = (code *)0xffffffff;
      uVar4 = 6;
      ar4_00 = (undefined *)(ar4 + 0xb0);
      uVar5 = s_CAnimBody_SetAnimation_033a94(ar4_00,6,0xffffffff,0);
      *(undefined4 *)((int)pdVar10 + -0x178) = uVar5;
      if (*(int *)((int)pdVar10 + -0x178) != 6) {
        ar4_00 = (undefined *)(ar4 + 0xb0);
        s_CAnimBody_SetFrame_033e6e(ar4_00,uVar4,pcVar7,ar7);
      }
    }
    else {
      ar7 = (code *)0x0;
      pcVar7 = (code *)0xffffffff;
      uVar4 = 10;
      ar4_00 = (undefined *)(ar4 + 0xb0);
      s_CAnimBody_SetAnimation_033a94(ar4_00,10,0xffffffff,0);
    }
    if (in_FPSCR_SZ == '\0') {
      fVar12 = *(float *)(ar4 + 0x224);
      fVar16 = 45.0;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x224);
      fVar12 = 45.0;
      fVar16 = 6.72623e-43;
    }
    if (in_FPSCR_PR == '\0' && fVar16 < fVar12) {
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar13 = *(double *)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar13 / dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x3c) = fVar12;
      }
      else {
        *(undefined8 *)(ar4 + 0x3c) = in_xd0;
      }
      uVar5 = FUN_8c023334(ar4 + 0x14,(undefined1 *)((int)pdVar10 + -0x48),pcVar7,ar7);
      *(undefined4 *)((int)pdVar10 + -0x17c) = uVar5;
      *(undefined4 *)(ar4 + 0x27c) = *(undefined4 *)((int)pdVar10 + -0x17c);
      if (*(int *)(ar4 + 0x27c) == 3) {
        ar7_00 = 0;
        uVar8 = 0xffffffff;
        uVar4 = 7;
        uVar5 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
        *(undefined4 *)((int)pdVar10 + -0x180) = uVar5;
        iVar1 = *(int *)((int)pdVar10 + -0x180);
        uVar5 = FUN_8c026db0(ar4,uVar4,uVar8,ar7_00);
        *(undefined4 *)((int)pdVar10 + -0x184) = uVar5;
        uVar4 = *(undefined4 *)((int)pdVar10 + -0x184);
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,uVar4,uVar8,ar7_00);
        *(undefined4 *)((int)pdVar10 + -0x188) = uVar5;
        uVar5 = deref_u32(*(undefined4 *)((int)pdVar10 + -0x188),uVar4,uVar8,ar7_00);
        *(undefined4 *)((int)pdVar10 + -0x18c) = uVar5;
        ar7 = (code *)(ar4 + 0xb4);
        pcVar7 = *(code **)((int)pdVar10 + -0x18c);
        uVar4 = *(undefined4 *)(pcVar7 + 4);
        *(undefined4 *)ar7 = *(undefined4 *)pcVar7;
        *(undefined4 *)(ar4 + 0xb8) = uVar4;
        ar4_00 = *(undefined **)(pcVar7 + 8);
        *(undefined **)(ar4 + 0xbc) = ar4_00;
        if (*(int *)(ar4 + 0x128) == 3) {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c135fdc;
        }
        else {
          ar4_00 = &DAT_8c1362c4;
          *(undefined **)(ar4 + 0xb4) = &DAT_8c1362c4;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c0) = *(undefined4 *)(ar4 + 0x224);
        }
        else {
          *(undefined8 *)(ar4 + 0x2c0) = *(undefined8 *)(ar4 + 0x224);
        }
      }
      else {
        ar7 = (code *)0x0;
        pcVar7 = (code *)0xffffffff;
        uVar4 = 8;
        uVar5 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
        *(undefined4 *)((int)pdVar10 + -400) = uVar5;
        iVar1 = *(int *)((int)pdVar10 + -400);
        uVar5 = FUN_8c026db0(ar4,uVar4,pcVar7,ar7);
        *(undefined4 *)((int)pdVar10 + -0x194) = uVar5;
        uVar4 = *(undefined4 *)((int)pdVar10 + -0x194);
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,uVar4,pcVar7,ar7);
        *(undefined4 *)((int)pdVar10 + -0x198) = uVar5;
        uVar5 = deref_u32(*(undefined4 *)((int)pdVar10 + -0x198),uVar4,pcVar7,ar7);
        *(undefined4 *)((int)pdVar10 + -0x19c) = uVar5;
        puVar2 = *(undefined4 **)((int)pdVar10 + -0x19c);
        uVar4 = puVar2[1];
        *(undefined4 *)(ar4 + 0xb4) = *puVar2;
        *(undefined4 *)(ar4 + 0xb8) = uVar4;
        ar4_00 = (undefined *)puVar2[2];
        *(undefined **)(ar4 + 0xbc) = ar4_00;
        if (*(int *)(ar4 + 0x128) == 3) {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c135ff4;
        }
        else {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c1362dc;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c0) = *(undefined4 *)(ar4 + 0x224);
        }
        else {
          *(undefined8 *)(ar4 + 0x2c0) = *(undefined8 *)(ar4 + 0x224);
        }
      }
      if (iVar1 != 6) {
        ar4_00 = (undefined *)(ar4 + 0xb0);
        s_CAnimBody_SetFrame_033e6e(ar4_00,uVar4,pcVar7,ar7);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x278) = 0x3f333333;
      }
      else {
        *(undefined8 *)(ar4 + 0x278) = 0x2b83f333333;
      }
    }
    *(undefined4 *)(ar4 + 0x2b8) = 3;
    *(undefined4 *)(ar4 + 0x40) = 1;
    uVar5 = rand(ar4_00,uVar4,pcVar7,ar7);
    *(undefined4 *)((int)pdVar10 + -0x1a0) = uVar5;
    uVar4 = 3;
    uVar5 = libgcc_divide_helper_01031c(*(undefined4 *)((int)pdVar10 + -0x1a0),3,pcVar7,ar7);
    *(undefined4 *)((int)pdVar10 + -0x200) = uVar5;
    *(int *)(ar4 + 0x280) = *(int *)((int)pdVar10 + -0x200) + 1;
    FUN_8c02a1fc(ar4 + 0x2c8,uVar4,pcVar7,ar7);
    break;
  case 1:
    *(undefined4 *)(ar4 + 0x40) = 3;
    *(undefined4 *)(ar4 + 0x290) = 0;
  case 3:
    uVar5 = get_field_1c_026dd8(ar4 + 0xb0,iVar1 * 4,pcVar7,ar7);
    uVar4 = (undefined4)((ulonglong)in_dr14 >> 0x20);
    *(undefined4 *)((int)pdVar10 + -0x1a4) = uVar5;
    iVar1 = *(int *)((int)pdVar10 + -0x1a4);
    if (iVar1 == 5) {
      uVar5 = get_field_1c_026dd8(ar4 + 0xb0,uVar5,pcVar7,ar7);
      uVar11 = SUB84(dVar13,0);
      *(undefined4 *)((int)pdVar10 + -0x1c0) = uVar5;
      uVar5 = s_Check_This_Motion_Data_0314fc
                        (ar4 + 0xb0,*(undefined4 *)((int)pdVar10 + -0x1c0),pcVar7,ar7);
      *(undefined4 *)((int)pdVar10 + -0x1c4) = uVar5;
      fVar12 = (float)*(int *)((int)pdVar10 + -0x1c4);
      dVar17 = (double)CONCAT44(uVar4,fVar12);
      dVar13 = (double)(ulonglong)uVar11;
      if (in_FPSCR_PR == '\0') {
        bVar18 = fVar12 < 0.0;
      }
      else {
        bVar18 = dVar17 < dVar13;
      }
      if (bVar18) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(0x4f800000,uVar11);
        }
        else {
          dVar13 = 1.16351267261062e-311;
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44(uVar4,fVar12 + (float)((ulonglong)dVar13 >> 0x20));
        }
        else {
          dVar17 = dVar17 + dVar13;
        }
      }
      Vec3_set_xyz((undefined1 *)((int)pdVar10 + -0x104),0x228,pcVar7,ar7);
      *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0x104);
      *(undefined1 **)((int)pdVar10 + -0x230) = (undefined1 *)((int)pdVar10 + -0x114);
      iVar1 = ar4 + 0x14;
      puVar6 = (undefined1 *)((int)pdVar10 + -0x38);
      FUN_8c031eb0(ar4,ar5,puVar6,iVar1,*(undefined4 *)((int)pdVar10 + -0x230));
      Vec3_assign(ar4 + 0x14,(undefined1 *)((int)pdVar10 + -0x114),puVar6,iVar1);
      Vec3_dtor((undefined1 *)((int)pdVar10 + -0x114),0xffffffff,puVar6,iVar1);
      pcVar7 = object_dtor_delete;
      object_dtor_delete((undefined1 *)((int)pdVar10 + -0x104),0xffffffff,object_dtor_delete,
                         (undefined1 *)((int)pdVar10 + -0x104));
      ar7 = s_CAnimBody_AdvanceFrame_033ba0;
      pcVar7 = (code *)s_CAnimBody_AdvanceFrame_033ba0
                                 (ar4 + 0xb0,0x278,pcVar7,s_CAnimBody_AdvanceFrame_033ba0);
      *(code **)((int)pdVar10 + -0x1c8) = pcVar7;
      iVar1 = *(int *)((int)pdVar10 + -0x1c8);
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
      CAnimBody_GetCurFrame(ar4 + 0xb0,iVar1,pcVar7,ar7,*(undefined4 *)((int)pdVar10 + -0x228));
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar10 + -0x1cc) = (int)((ulonglong)dVar13 >> 0x20);
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                  *(undefined4 *)((int)pdVar10 + -0x1cc));
      }
      else {
        *(double *)((int)pdVar10 + -0x1cc) = dVar13;
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar17 >> 0x20) < SUB84(dVar17,0)) {
        if (in_FPSCR_PR == '\0') {
          bVar18 = SUB84(dVar17,0) < SUB84(in_dr12,0);
        }
        else {
          bVar18 = dVar17 < in_dr12;
        }
        if (bVar18) {
          *(int *)((int)pdVar10 + -0x208) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(0x3e4ccccd,
                                      *(undefined4 *)(*(int *)((int)pdVar10 + -0x208) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x208) + 0x28);
            dVar13 = -5.8130718906204204e+255;
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar13 + dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar10 + -0x208) + 0x28) = fVar12;
            dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar10 + -0x208) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar13 = *(double *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar13 >> 0x20) < SUB84(dVar13,0)) {
            if (in_FPSCR_SZ == '\0') {
              uVar5 = *(undefined4 *)(ar4 + 0x24);
              dVar13 = (double)CONCAT44(uVar5,SUB84(dVar13,0));
              *(undefined4 *)(ar4 + 0x28) = uVar5;
            }
            else {
              dVar13 = *(double *)(ar4 + 0x24);
              *(double *)(ar4 + 0x28) = dVar13;
            }
          }
          goto LAB_8c04c060;
        }
      }
      FUN_8c032ab0(ar4,iVar1,pcVar7,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar10 + -0x1d0) = (int)((ulonglong)dVar13 >> 0x20);
      }
      else {
        *(double *)((int)pdVar10 + -0x1d0) = dVar13;
      }
      *(int *)((int)pdVar10 + -0x20c) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x1d0),
                                  *(undefined4 *)(*(int *)((int)pdVar10 + -0x20c) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x20c) + 0x28);
        dVar13 = *(double *)((int)pdVar10 + -0x1d0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar13 - dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar10 + -0x20c) + 0x28) = fVar12;
        fVar12 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar10 + -0x20c) + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      dVar13 = (double)(ulonglong)(uint)fVar12;
      if (in_FPSCR_PR == '\0' && fVar12 < 0.0) {
        ar7 = (code *)(ar4 + 0x28);
        dVar13 = (double)(ulonglong)(uint)fVar12;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)ar7 = 0;
        }
        else {
          *(double *)ar7 = dVar13;
        }
      }
    }
    else if (iVar1 == 6) {
      uVar8 = 0xb0;
      uVar5 = get_field_1c_026dd8(ar4 + 0xb0,ar4 + 0xb0,0xb0,ar7);
      uVar11 = SUB84(dVar13,0);
      *(undefined4 *)((int)pdVar10 + -0x1d4) = uVar5;
      uVar5 = s_Check_This_Motion_Data_0314fc
                        (ar4 + 0xb0,*(undefined4 *)((int)pdVar10 + -0x1d4),uVar8,ar7);
      *(undefined4 *)((int)pdVar10 + -0x1d8) = uVar5;
      fVar12 = (float)*(int *)((int)pdVar10 + -0x1d8);
      dVar17 = (double)CONCAT44(uVar4,fVar12);
      dVar13 = (double)(ulonglong)uVar11;
      if (in_FPSCR_PR == '\0') {
        bVar18 = fVar12 < 0.0;
      }
      else {
        bVar18 = dVar17 < dVar13;
      }
      if (bVar18) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(0x4f800000,uVar11);
        }
        else {
          dVar13 = 1.16351267261062e-311;
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44(uVar4,fVar12 + (float)((ulonglong)dVar13 >> 0x20));
        }
        else {
          dVar17 = dVar17 + dVar13;
        }
      }
      Vec3_set_xyz((undefined1 *)((int)pdVar10 + -0x120),*(int *)((int)pdVar10 + -0x1d8),uVar8,ar7);
      *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0x120);
      *(undefined1 **)((int)pdVar10 + -0x230) = (undefined1 *)((int)pdVar10 + -0x130);
      iVar1 = ar4 + 0x14;
      puVar6 = (undefined1 *)((int)pdVar10 + -0x38);
      FUN_8c031eb0(ar4,ar5,puVar6,iVar1,*(undefined4 *)((int)pdVar10 + -0x230));
      Vec3_assign(ar4 + 0x14,(undefined1 *)((int)pdVar10 + -0x130),puVar6,iVar1);
      Vec3_dtor((undefined1 *)((int)pdVar10 + -0x130),0xffffffff,puVar6,iVar1);
      uVar5 = 0xffffffff;
      object_dtor_delete((undefined1 *)((int)pdVar10 + -0x120),0xffffffff,puVar6,iVar1);
      ar7 = (code *)(ar4 + 0xb0);
      pcVar7 = s_CAnimBody_AdvanceFrame_033d90;
      s_CAnimBody_AdvanceFrame_033d90(ar7,uVar5,s_CAnimBody_AdvanceFrame_033d90,ar7);
      uVar5 = 0xb0;
      CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar7,ar7,*(undefined4 *)((int)pdVar10 + -0x228));
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar10 + -0x1dc) = (int)((ulonglong)dVar13 >> 0x20);
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                  *(undefined4 *)((int)pdVar10 + -0x1dc));
      }
      else {
        *(double *)((int)pdVar10 + -0x1dc) = dVar13;
      }
      if (in_FPSCR_PR == '\0') {
        bVar18 = (float)((ulonglong)in_dr12 >> 0x20) < SUB84(dVar17,0);
      }
      else {
        bVar18 = in_dr12 < dVar17;
      }
      if (bVar18) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x150),SUB84(dVar13,0));
        }
        else {
          dVar13 = *(double *)((int)pdVar10 + -0x150);
        }
        if (in_FPSCR_PR == '\0') {
          bVar18 = SUB84(dVar17,0) < (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          bVar18 = dVar17 < dVar13;
        }
        if (bVar18) {
          *(int *)((int)pdVar10 + -0x210) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(0x3f19999a,
                                      *(undefined4 *)(*(int *)((int)pdVar10 + -0x210) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x210) + 0x28);
            dVar13 = -5.813068321944503e+255;
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar13 + dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar10 + -0x210) + 0x28) = fVar12;
            dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar10 + -0x210) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar13 = *(double *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar13 >> 0x20) < SUB84(dVar13,0)) {
            if (in_FPSCR_SZ == '\0') {
              uVar5 = *(undefined4 *)(ar4 + 0x24);
              dVar13 = (double)CONCAT44(uVar5,SUB84(dVar13,0));
              *(undefined4 *)(ar4 + 0x28) = uVar5;
            }
            else {
              dVar13 = *(double *)(ar4 + 0x24);
              *(double *)(ar4 + 0x28) = dVar13;
            }
          }
          goto LAB_8c04c060;
        }
      }
      FUN_8c032ab0(ar4,uVar5,pcVar7,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar10 + -0x1e0) = (int)((ulonglong)dVar13 >> 0x20);
      }
      else {
        *(double *)((int)pdVar10 + -0x1e0) = dVar13;
      }
      *(int *)((int)pdVar10 + -0x214) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x1e0),
                                  *(undefined4 *)(*(int *)((int)pdVar10 + -0x214) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x214) + 0x28);
        dVar13 = *(double *)((int)pdVar10 + -0x1e0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar13 - dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar10 + -0x214) + 0x28) = fVar12;
        fVar12 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar10 + -0x214) + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      dVar13 = (double)(ulonglong)(uint)fVar12;
      if (in_FPSCR_PR == '\0' && fVar12 < 0.0) {
        dVar13 = (double)(ulonglong)(uint)fVar12;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(double *)(ar4 + 0x28) = dVar13;
        }
      }
    }
    else if ((iVar1 == 7) || (iVar1 == 8)) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar13 & 0xffffffff;
      }
      *(int *)((int)pdVar10 + -0x204) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(0x3f666666,*(undefined4 *)(*(int *)((int)pdVar10 + -0x204) + 0x28)
                                 );
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x204) + 0x28);
        dVar13 = 3.73996784729797e-312;
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = (float)((ulonglong)dVar13 >> 0x20);
        dVar13 = (double)CONCAT44(fVar12,SUB84(dVar13,0) * fVar12);
      }
      else {
        dVar13 = dVar13 * dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)pdVar10 + -0x204) + 0x28) = SUB84(dVar13,0);
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar10 + -0x204) + 0x28) = in_xd0;
      }
      CAnimBody_GetCurFrame(ar4 + 0xb0,ar4 + 0xb0,pcVar7,ar7,*(undefined4 *)((int)pdVar10 + -0x228))
      ;
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar10 + -0x1a8) = (int)((ulonglong)dVar13 >> 0x20);
      }
      else {
        *(double *)((int)pdVar10 + -0x1a8) = dVar13;
      }
      *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0xbc);
      FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),pcVar7,ar7);
      vec3_copy_8c023d8c((undefined1 *)((int)pdVar10 + -100),(undefined1 *)((int)pdVar10 + -0xbc),
                         pcVar7,ar7);
      object_dtor_delete((undefined1 *)((int)pdVar10 + -0xbc),0xffffffff,pcVar7,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c8),*(undefined4 *)((int)pdVar10 + -100))
        ;
      }
      else {
        in_xd0 = *(undefined8 *)((int)pdVar10 + -100);
        dVar13 = *(double *)(ar4 + 0x2c8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar13 - dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)pdVar10 + -0x70) = fVar12;
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2cc),*(undefined4 *)((int)pdVar10 + -0x60)
                                 );
      }
      else {
        *(undefined8 *)((int)pdVar10 + -0x70) = in_xd0;
        in_xd0 = *(undefined8 *)((int)pdVar10 + -0x60);
        dVar13 = *(double *)(ar4 + 0x2cc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar13 - dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)pdVar10 + -0x6c) = fVar12;
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2d0),*(undefined4 *)((int)pdVar10 + -0x5c)
                                 );
      }
      else {
        *(undefined8 *)((int)pdVar10 + -0x6c) = in_xd0;
        in_xd0 = *(undefined8 *)((int)pdVar10 + -0x5c);
        dVar13 = *(double *)(ar4 + 0x2d0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = (float)((ulonglong)dVar13 >> 0x20);
        dVar13 = (double)CONCAT44(fVar12,SUB84(dVar13,0) - fVar12);
      }
      else {
        dVar13 = dVar13 - dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar10 + -0x68) = SUB84(dVar13,0);
      }
      else {
        *(undefined8 *)((int)pdVar10 + -0x68) = in_xd0;
      }
      vec3_copy_8c023d8c(ar4 + 0x2c8,(undefined1 *)((int)pdVar10 + -100),pcVar7,ar7);
      vec3_copy_8c02b5fc((undefined1 *)((int)pdVar10 + -200),(undefined1 *)((int)pdVar10 + -0x70),
                         pcVar7,ar7);
      *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0xd8);
      FUN_8c023484(ar4 + 0x14,(undefined1 *)((int)pdVar10 + -200),pcVar7,ar7,
                   *(undefined4 *)((int)pdVar10 + -0x22c));
      Vec3_assign(ar4 + 0x14,(undefined1 *)((int)pdVar10 + -0xd8),pcVar7,ar7);
      Vec3_dtor((undefined1 *)((int)pdVar10 + -0xd8),0xffffffff,pcVar7,ar7);
      uVar5 = 0xffffffff;
      object_dtor_delete((undefined1 *)((int)pdVar10 + -200),0xffffffff,pcVar7,ar7);
      Vec3_length(ar4 + 0x14,uVar5,pcVar7,ar7);
      uVar4 = 0x278;
      uVar5 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0x278,pcVar7,ar7);
      *(undefined4 *)((int)pdVar10 + -0x1ac) = uVar5;
      if (*(int *)((int)pdVar10 + -0x1ac) == 1) {
        FUN_8c0231c8((undefined1 *)((int)pdVar10 + -0x48),uVar4,pcVar7,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar10 + -0x1b0) = (int)((ulonglong)dVar13 >> 0x20);
        }
        else {
          *(double *)((int)pdVar10 + -0x1b0) = dVar13;
        }
        iVar1 = ar4 + 0x14;
        FUN_8c0231c8(iVar1,uVar4,pcVar7,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar10 + -0x1b4) = (int)((ulonglong)dVar13 >> 0x20);
          uVar15 = CONCAT44(*(undefined4 *)((int)pdVar10 + -0x1b4),SUB84(dVar13,0));
        }
        else {
          *(double *)((int)pdVar10 + -0x1b4) = dVar13;
          uVar15 = *(undefined8 *)((int)pdVar10 + -0x1b4);
        }
        FUN_8c010e38(iVar1,uVar4,pcVar7,ar7,*(undefined4 *)((int)pdVar10 + -0x228));
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar10 + -0x1b8) = (int)((ulonglong)uVar15 >> 0x20);
          uVar15 = CONCAT44(*(undefined4 *)((int)pdVar10 + -0x1b8),(int)uVar15);
          *(undefined4 *)(ar4 + 0x228) = *(undefined4 *)((int)pdVar10 + -0x1b8);
        }
        else {
          *(undefined8 *)((int)pdVar10 + -0x1b8) = uVar15;
          uVar15 = *(undefined8 *)((int)pdVar10 + -0x1b8);
          *(undefined8 *)(ar4 + 0x228) = uVar15;
        }
        *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0xe8);
        FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar7,ar7,*(undefined4 *)((int)pdVar10 + -0x22c));
        *(undefined1 **)((int)pdVar10 + -0x22c) = (undefined1 *)((int)pdVar10 + -0xf8);
        FUN_8c0230f0((undefined1 *)((int)pdVar10 + -0x48),uVar4,pcVar7,ar7,
                     *(undefined4 *)((int)pdVar10 + -0x22c));
        FUN_8c022dac((undefined1 *)((int)pdVar10 + -0xe8),(undefined1 *)((int)pdVar10 + -0xf8),
                     pcVar7,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar10 + -0x1bc) = (int)((ulonglong)uVar15 >> 0x20);
          dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x1bc),(int)uVar15);
          *(undefined4 *)(ar4 + 0x224) = *(undefined4 *)((int)pdVar10 + -0x1bc);
        }
        else {
          *(undefined8 *)((int)pdVar10 + -0x1bc) = uVar15;
          dVar13 = *(double *)((int)pdVar10 + -0x1bc);
          *(double *)(ar4 + 0x224) = dVar13;
        }
        Vec3_dtor((undefined1 *)((int)pdVar10 + -0xf8),0xffffffff,pcVar7,ar7);
        Vec3_dtor((undefined1 *)((int)pdVar10 + -0xe8),0xffffffff,pcVar7,ar7);
        *(undefined4 *)(ar4 + 0x290) = 0;
        pcVar7 = (code *)0x2b8;
        *(undefined4 *)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
    }
    else {
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      uVar5 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,pcVar7,ar7);
      *(undefined4 *)((int)pdVar10 + -0x1e4) = uVar5;
      if (*(int *)((int)pdVar10 + -0x1e4) == 1) {
        *(undefined4 *)(ar4 + 0x2b8) = 2;
      }
    }
LAB_8c04c060:
    FUN_8c022fc0(ar5,ar6,pcVar7,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar10 + -0x1e8) = (int)((ulonglong)dVar13 >> 0x20);
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),in_fr3);
      dVar17 = (double)CONCAT44(0x40400000,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      *(double *)((int)pdVar10 + -0x1e8) = dVar13;
      dVar13 = *(double *)(ar4 + 0x48);
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar17 = 2.0000004786998034;
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(dVar17,0) * (float)((ulonglong)dVar17 >> 0x20);
      dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) + fVar12,SUB84(dVar13,0));
    }
    else {
      fVar12 = SUB84(dVar17 * dVar17,0);
      dVar13 = dVar13 + dVar17 * dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x1e8),fVar12);
    }
    else {
      dVar17 = *(double *)((int)pdVar10 + -0x1e8);
    }
    if (in_FPSCR_PR == '\0') {
      bVar18 = (float)((ulonglong)dVar13 >> 0x20) < (float)((ulonglong)dVar17 >> 0x20);
    }
    else {
      bVar18 = dVar13 < dVar17;
    }
    if (!bVar18) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar17 & 0xffffffff;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar13 = *(double *)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar13 / dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x3c) = fVar12;
        fVar12 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x3c) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      uVar14 = (ulonglong)(uint)fVar12;
      if (in_FPSCR_PR == '\0' && 0.0 < fVar12) {
        FUN_8c022fc0(ar5,ar6,pcVar7,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar10 + -0x1ec) = (int)(uVar14 >> 0x20);
          dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),
                                    *(undefined4 *)((int)pdVar10 + -0x1ec));
        }
        else {
          *(ulonglong *)((int)pdVar10 + -0x1ec) = uVar14;
          in_xd0 = *(undefined8 *)((int)pdVar10 + -0x1ec);
          dVar13 = *(double *)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar13 / dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(0x40000000,fVar12);
        }
        else {
          dVar13 = 1.0045666267400928e+178;
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar13 * dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x38) = fVar12;
          dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(ar4 + 0x38) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar13 = *(double *)(ar4 + 0x38);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar13 / dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x3c) = fVar12;
        }
        else {
          *(undefined8 *)(ar4 + 0x3c) = in_xd0;
        }
      }
      *(undefined4 *)(ar4 + 0x40) = 4;
    }
    break;
  case 4:
    uVar5 = 0xb0;
    CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar7,ar7,*(undefined4 *)((int)pdVar10 + -0x228));
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar10 + -0x1f0) = (int)((ulonglong)dVar13 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)pdVar10 + -0x1f0));
    }
    else {
      *(double *)((int)pdVar10 + -0x1f0) = dVar13;
    }
    uVar5 = get_field_1c_026dd8(ar4 + 0xb0,uVar5,pcVar7,ar7);
    *(undefined4 *)((int)pdVar10 + -500) = uVar5;
    fVar12 = SUB84(in_dr14,0);
    if (*(int *)((int)pdVar10 + -500) == 5) {
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr14 >> 0x20) < fVar12) {
        if (in_FPSCR_PR == '\0') {
          bVar18 = fVar12 < SUB84(in_dr12,0);
        }
        else {
          bVar18 = in_dr14 < in_dr12;
        }
        if (bVar18) {
          *(int *)((int)pdVar10 + -0x218) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(0x3d4ccccd,
                                      *(undefined4 *)(*(int *)((int)pdVar10 + -0x218) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x218) + 0x28);
            dVar13 = -3.862675775024149e-255;
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar13 + dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar10 + -0x218) + 0x28) = fVar12;
            uVar15 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar10 + -0x218) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            uVar15 = *(undefined8 *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar15 >> 0x20) < (float)uVar15) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
            }
          }
        }
      }
    }
    else if (*(int *)((int)pdVar10 + -500) == 6) {
      if (in_FPSCR_PR == '\0') {
        bVar18 = (float)((ulonglong)in_dr12 >> 0x20) < fVar12;
      }
      else {
        bVar18 = in_dr12 < in_dr14;
      }
      if (bVar18) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + -0x150),SUB84(dVar13,0));
        }
        else {
          dVar13 = *(double *)((int)pdVar10 + -0x150);
        }
        if (in_FPSCR_PR == '\0') {
          bVar18 = fVar12 < (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          bVar18 = in_dr14 < dVar13;
        }
        if (bVar18) {
          *(int *)((int)pdVar10 + -0x21c) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(0x3dcccccd,
                                      *(undefined4 *)(*(int *)((int)pdVar10 + -0x21c) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x21c) + 0x28);
            dVar13 = 1.34161360293656e-311;
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar13 + dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar10 + -0x21c) + 0x28) = fVar12;
            uVar15 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar10 + -0x21c) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            uVar15 = *(undefined8 *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar15 >> 0x20) < (float)uVar15) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
            }
          }
        }
      }
    }
    *(int *)((int)pdVar10 + -0x220) = ar4;
    ar5_00 = (float *)(*(int *)((int)pdVar10 + -0x220) + 0x28);
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x3c),
                                *(undefined4 *)(*(int *)((int)pdVar10 + -0x220) + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)pdVar10 + -0x220) + 0x28);
      dVar13 = *(double *)(ar4 + 0x3c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar12 = SUB84(dVar13 - dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *ar5_00 = fVar12;
      fVar12 = *(float *)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)ar5_00 = in_xd0;
    }
    if (in_FPSCR_PR == '\0' && fVar12 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar12;
      }
    }
    uVar5 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,pcVar7,ar7);
    *(undefined4 *)((int)pdVar10 + -0x1f8) = uVar5;
    if (*(int *)((int)pdVar10 + -0x1f8) == 1) {
      uVar9 = 0;
      *(undefined4 *)(ar4 + 0x2b8) = 2;
    }
  }
switchD_8c04b39c_caseD_2:
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar7,ar7);
  FUN_8c051a68(ar4,(undefined1 *)((int)pdVar10 + -0x38),ar5,ar7);
  *(undefined4 *)((int)pdVar10 + -0x15c) = uVar9;
  object_dtor_delete((undefined1 *)((int)pdVar10 + -0x70),0xffffffff,ar5,ar7);
  object_dtor_delete((undefined1 *)((int)pdVar10 + -100),0xffffffff,ar5,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar10 + -0x58),0xffffffff,ar5,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar10 + -0x48),0xffffffff,ar5,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar10 + -0x38),0xffffffff,ar5,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar10 + -0x28),0xffffffff,ar5,ar7);
  return *(undefined4 *)((int)pdVar10 + -0x15c);
}

__asm__(".globl _FUN_8c04b168\n.set _FUN_8c04b168, _FUN_8c04b168_def\n");
