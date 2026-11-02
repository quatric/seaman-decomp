#include "../decls.h"
undefined4 FUN_8c049b68_def(int ar4,undefined8 *ar5,code *ar6,code *ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  double *ar6_00;
  code *pcVar9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar10;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  double *pdVar11;
  uint uVar12;
  float fVar13;
  undefined8 in_dr0;
  double dVar14;
  double dVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined4 in_fr3;
  undefined8 in_dr4;
  undefined8 in_dr6;
  double in_dr12;
  float fVar18;
  double in_dr14;
  float fVar19;
  undefined8 in_xd0;
  undefined8 in_xd4;
  undefined8 in_xd6;
  undefined8 in_xd14;
  bool bVar20;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_20 [16];
  double dStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    
    (*(uint*)((uchar*)&uStack_8+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    pdVar11 = &dStack_10;
    dStack_10 = (double)CONCAT44(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar11 = (double *)auStack_20;
    uStack_8 = in_xd14;
    dStack_10 = in_dr14;
  }
  *(undefined4 *)((int)pdVar11 + -4) = unaff_r14;
  *(undefined4 *)((int)pdVar11 + -8) = unaff_r13;
  *(undefined4 *)((int)pdVar11 + -0xc) = unaff_r12;
  *(undefined4 *)((int)pdVar11 + -0x10) = unaff_r11;
  *(undefined4 *)((int)pdVar11 + -0x14) = unaff_r10;
  *(undefined4 *)((int)pdVar11 + -0x18) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar11 + -0x268) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)((int)pdVar11 + -0x264) = (int)in_dr4;
    *(int *)((int)pdVar11 + -0x260) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)((int)pdVar11 + -0x25c) = (int)in_dr6;
  }
  else {
    *(undefined8 *)((int)pdVar11 + -0x268) = in_dr4;
    *(undefined8 *)((int)pdVar11 + -0x264) = in_xd4;
    *(undefined8 *)((int)pdVar11 + -0x260) = in_dr6;
    *(undefined8 *)((int)pdVar11 + -0x25c) = in_xd6;
  }
  uVar10 = 1;
  pcVar5 = Vec3_set_zero;
  pcVar9 = ar6;
  Vec3_set_zero((undefined1 *)((int)pdVar11 + -0x24),Vec3_set_zero,ar6,ar7);
  Vec3_set_zero((undefined1 *)((int)pdVar11 + -0x30),pcVar5,pcVar9,ar7);
  Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0x40),ar6,pcVar9,ar7);
  FUN_8c022fc0(ar5,(undefined1 *)((int)pdVar11 + -0x40),pcVar9,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar11 + -0x158) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x158),(int)in_dr0);
    *(undefined4 *)((int)pdVar11 + -0x140) = *(undefined4 *)((int)pdVar11 + -0x158);
  }
  else {
    *(undefined8 *)((int)pdVar11 + -0x158) = in_dr0;
    dVar14 = *(double *)((int)pdVar11 + -0x158);
    *(double *)((int)pdVar11 + -0x140) = dVar14;
  }
  *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0x70);
  puVar6 = ar5;
  Vec3_sub((undefined1 *)((int)pdVar11 + -0x40),ar5,pcVar9,ar7,
           *(undefined4 *)((int)pdVar11 + -0x26c));
  *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0x80);
  Vec3_normalize((undefined1 *)((int)pdVar11 + -0x70),puVar6,pcVar9,ar7);
  Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0x50),(undefined1 *)((int)pdVar11 + -0x80),pcVar9,
                 ar7);
  Vec3_dtor((undefined1 *)((int)pdVar11 + -0x80),0xffffffff,pcVar9,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar11 + -0x70),0xffffffff,pcVar9,ar7);
  Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0x60),ar5,pcVar9,ar7);
  pcVar5 = (code *)(ar4 + 0x14);
  Vec3_assign(ar4 + 0x80,pcVar5,pcVar9,ar7);
  uVar2 = SUB84(dVar14,0);
  if (*(int *)(ar4 + 0x128) == 1) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x220) = 0x40d00000;
    }
    else {
      uVar2 = 0x40d00000;
      *(undefined8 *)(ar4 + 0x220) = 0xb040d00000;
    }
    uVar1 = get_field_1c_026dd8(ar4 + 0xb0,pcVar5,pcVar9,ar7);
    *(undefined4 *)((int)pdVar11 + -0x15c) = uVar1;
    iVar4 = *(int *)((int)pdVar11 + -0x15c);
    uVar1 = SUB84(in_dr14,0);
    if (iVar4 == 5) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)pdVar11 + -0x144) = 0x42000000;
        in_dr14 = (double)CONCAT44(0x41980000,uVar1);
        in_dr12 = 524288.1283569336;
      }
      else {
        in_dr12 = 8589936676.0;
        uVar2 = 0x42000000;
        *(undefined8 *)((int)pdVar11 + -0x144) = 0x12442000000;
        in_dr14 = 402653249.59375;
      }
    }
    else if (iVar4 == 6) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)pdVar11 + -0x144) = 0x42200000;
        in_dr14 = (double)CONCAT44(0x41800000,uVar1);
        in_dr12 = 536871043.6875;
      }
      else {
        in_dr12 = 34359746784.0;
        uVar2 = 0x42200000;
        *(undefined8 *)((int)pdVar11 + -0x144) = 0x12442200000;
        in_dr14 = 1610612998.0;
      }
    }
    else if (iVar4 == 10) {
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(0x41200000,uVar1);
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),0x41800000);
      }
      else {
        in_dr14 = 33554440.140625;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(0x3f333333,uVar2);
      *(undefined4 *)((int)pdVar11 + -0x148) = 0x3f333333;
    }
    else {
      dVar14 = 6.11658655508794e-312;
      *(undefined8 *)((int)pdVar11 + -0x148) = 0x1203f333333;
    }
  }
  else if (*(int *)(ar4 + 0x128) == 2) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x220) = 0x40d00000;
    }
    else {
      uVar2 = 0x40d00000;
      *(undefined8 *)(ar4 + 0x220) = 0xb040d00000;
    }
    pcVar5 = get_field_1c_026dd8;
    uVar1 = get_field_1c_026dd8(ar4 + 0xb0,get_field_1c_026dd8,pcVar9,ar7);
    *(undefined4 *)((int)pdVar11 + -0x160) = uVar1;
    iVar4 = *(int *)((int)pdVar11 + -0x160);
    uVar1 = SUB84(in_dr14,0);
    if (iVar4 == 5) {
      in_dr12 = (double)((ulonglong)in_dr12 & 0xffffffff);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)pdVar11 + -0x144) = 0x42440000;
        in_dr14 = (double)CONCAT44(0x41300000,uVar1);
        in_dr12 = 5.44745745654293e-315;
      }
      else {
        uVar2 = 0x42440000;
        *(undefined8 *)((int)pdVar11 + -0x144) = 0x12442440000;
        in_dr14 = 402653249.1875;
      }
    }
    else if (iVar4 == 6) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)pdVar11 + -0x144) = 0x421c0000;
        in_dr14 = (double)CONCAT44(0x41300000,uVar1);
        in_dr12 = 536871043.4375;
      }
      else {
        in_dr12 = 30064775280.0;
        uVar2 = 0x421c0000;
        *(undefined8 *)((int)pdVar11 + -0x144) = 0x124421c0000;
        in_dr14 = 402653249.1875;
      }
    }
    else if (iVar4 == 10) {
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(0x40e00000,uVar1);
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),0x41300000);
      }
      else {
        in_dr14 = 1048576.2534179688;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(0x3f000000,uVar2);
      *(undefined4 *)((int)pdVar11 + -0x148) = 0x3f000000;
    }
    else {
      dVar14 = 6.11656997699681e-312;
      *(undefined8 *)((int)pdVar11 + -0x148) = 0x1203f000000;
    }
  }
  iVar4 = *(int *)(ar4 + 0x40);
  if ((5 < iVar4) || (iVar4 < 0)) goto override_jmp_8c049e5a_case_2;
                    
  switch(iVar4) {
  case 0:
    if (*(int *)(ar4 + 0x124) == 0x11) {
      uVar2 = FUN_8c05c28c(ar4,pcVar5,pcVar9,ar7);
      *(undefined4 *)((int)pdVar11 + -0x164) = uVar2;
      iVar4 = *(int *)((int)pdVar11 + -0x164);
    }
    else {
      uVar2 = FUN_8c05c28c(ar4,pcVar5,pcVar9,ar7);
      *(undefined4 *)((int)pdVar11 + -0x168) = uVar2;
      iVar4 = *(int *)((int)pdVar11 + -0x168);
    }
    if (iVar4 != 0) {
      *(undefined4 *)((int)pdVar11 + -0x150) = 1;
      Vec3_dtor((undefined1 *)((int)pdVar11 + -0x60),0xffffffff,pcVar9,ar7);
      Vec3_dtor((undefined1 *)((int)pdVar11 + -0x50),0xffffffff,pcVar9,ar7);
      Vec3_dtor((undefined1 *)((int)pdVar11 + -0x40),0xffffffff,pcVar9,ar7);
      object_dtor_delete((undefined1 *)((int)pdVar11 + -0x30),0xffffffff,pcVar9,ar7);
      object_dtor_delete((undefined1 *)((int)pdVar11 + -0x24),0xffffffff,pcVar9,ar7);
      return *(undefined4 *)((int)pdVar11 + -0x150);
    }
    if (*(int *)(ar4 + 0x1b8) == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x18c) = *(undefined4 *)ar5;
        *(undefined4 *)(ar4 + 400) = *(undefined4 *)((int)ar5 + 4);
        *(undefined4 *)(ar4 + 0x194) = *(undefined4 *)(ar5 + 1);
        *(undefined4 *)(ar4 + 0x198) = *(undefined4 *)((int)pdVar11 + -0x40);
        *(undefined4 *)(ar4 + 0x19c) = *(undefined4 *)((int)pdVar11 + -0x3c);
        dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x38),SUB84(dVar14,0));
        *(undefined4 *)(ar4 + 0x1a0) = *(undefined4 *)((int)pdVar11 + -0x38);
      }
      else {
        *(undefined8 *)(ar4 + 0x18c) = *ar5;
        *(undefined8 *)(ar4 + 400) = *(undefined8 *)((int)ar5 + 4);
        *(undefined8 *)(ar4 + 0x194) = ar5[1];
        *(undefined8 *)(ar4 + 0x198) = *(undefined8 *)((int)pdVar11 + -0x40);
        *(undefined8 *)(ar4 + 0x19c) = *(undefined8 *)((int)pdVar11 + -0x3c);
        dVar14 = *(double *)((int)pdVar11 + -0x38);
        *(double *)(ar4 + 0x1a0) = dVar14;
      }
    }
    uVar12 = SUB84(dVar14,0);
    *(undefined4 *)((int)pdVar11 + -0x220) = *(undefined4 *)(ar4 + 0x128);
    iVar4 = (*(int *)((int)pdVar11 + -0x220) * 2 + *(int *)((int)pdVar11 + -0x220)) * 8 +
            -0x73d7fc0c;
    FUN_8c031b68(ar4,iVar4,pcVar9,ar7);
    FUN_8c03c314(ar4,iVar4,pcVar9,ar7);
    puVar8 = (undefined1 *)((int)pdVar11 + -0x40);
    puVar6 = ar5;
    FUN_8c031bb4(ar4,ar5,puVar8,ar7);
    uVar16 = (ulonglong)uVar12;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar16;
    }
    FUN_8c0231c8((undefined1 *)((int)pdVar11 + -0x50),puVar6,puVar8,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar11 + -0x16c) = (int)(uVar16 >> 0x20);
    }
    else {
      *(ulonglong *)((int)pdVar11 + -0x16c) = uVar16;
    }
    FUN_8c0231c8(ar4 + 0x14,puVar6,puVar8,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar11 + -0x170) = (int)(uVar16 >> 0x20);
      uVar17 = CONCAT44(*(undefined4 *)((int)pdVar11 + -0x170),(int)uVar16);
    }
    else {
      *(ulonglong *)((int)pdVar11 + -0x170) = uVar16;
      uVar17 = *(undefined8 *)((int)pdVar11 + -0x170);
    }
    FUN_8c010e38(FUN_8c010e38,puVar6,puVar8,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar11 + -0x174) = (int)((ulonglong)uVar17 >> 0x20);
      uVar17 = CONCAT44(*(undefined4 *)((int)pdVar11 + -0x174),(int)uVar17);
      *(undefined4 *)(ar4 + 0x228) = *(undefined4 *)((int)pdVar11 + -0x174);
    }
    else {
      *(undefined8 *)((int)pdVar11 + -0x174) = uVar17;
      uVar17 = *(undefined8 *)((int)pdVar11 + -0x174);
      *(undefined8 *)(ar4 + 0x228) = uVar17;
    }
    *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0x90);
    FUN_8c0230f0(ar4 + 0x14,ar4 + 0x228,puVar8,ar7,*(undefined4 *)((int)pdVar11 + -0x26c));
    *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0xa0);
    FUN_8c0230f0((undefined1 *)((int)pdVar11 + -0x50),(undefined1 *)((int)pdVar11 + -0xa0),puVar8,
                 ar7,*(undefined4 *)((int)pdVar11 + -0x26c));
    FUN_8c022dac((undefined1 *)((int)pdVar11 + -0x90),(undefined1 *)((int)pdVar11 + -0xa0),puVar8,
                 ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar11 + -0x178) = (int)((ulonglong)uVar17 >> 0x20);
      *(undefined4 *)(ar4 + 0x224) = *(undefined4 *)((int)pdVar11 + -0x178);
    }
    else {
      *(undefined8 *)((int)pdVar11 + -0x178) = uVar17;
      *(undefined8 *)(ar4 + 0x224) = *(undefined8 *)((int)pdVar11 + -0x178);
    }
    Vec3_dtor((undefined1 *)((int)pdVar11 + -0xa0),0xffffffff,puVar8,ar7);
    Vec3_dtor((undefined1 *)((int)pdVar11 + -0x90),0xffffffff,puVar8,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x278) = 0x3f4ccccd;
      uVar17 = CONCAT44(*(undefined4 *)(ar4 + 0x220),*(undefined4 *)(ar4 + 0x24));
    }
    else {
      *(undefined8 *)(ar4 + 0x278) = 0x2203f4ccccd;
      in_xd0 = *(undefined8 *)(ar4 + 0x24);
      uVar17 = *(undefined8 *)(ar4 + 0x220);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar17 < (float)((ulonglong)uVar17 >> 0x20)) {
      uVar2 = rand_range(ar4,0,2,ar4 + 0x220);
      *(undefined4 *)((int)pdVar11 + -0x17c) = uVar2;
      ar7 = (code *)0x0;
      uVar1 = 0xffffffff;
      iVar4 = *(int *)((int)pdVar11 + -0x17c) + 5;
      uVar2 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar4,0xffffffff,0);
      *(undefined4 *)((int)pdVar11 + -0x180) = uVar2;
      if (*(int *)((int)pdVar11 + -0x180) != 6) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar4,uVar1,ar7);
      }
    }
    else {
      ar7 = (code *)0x0;
      uVar1 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar17 = CONCAT44(0x42340000,*(undefined4 *)(ar4 + 0x224));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x224);
      uVar17 = 0x21842340000;
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar17 >> 0x20) < (float)uVar17) {
      uVar2 = FUN_8c023334(ar4 + 0x14,(undefined1 *)((int)pdVar11 + -0x50),uVar1,ar7);
      *(undefined4 *)((int)pdVar11 + -0x184) = uVar2;
      *(undefined4 *)(ar4 + 0x27c) = *(undefined4 *)((int)pdVar11 + -0x184);
      if (*(int *)(ar4 + 0x27c) == 3) {
        ar7 = (code *)0x0;
        uVar7 = 0xffffffff;
        uVar2 = 7;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
        uVar2 = FUN_8c026db0(ar4,uVar2,uVar7,ar7);
        *(undefined4 *)((int)pdVar11 + -0x188) = uVar2;
        uVar1 = *(undefined4 *)((int)pdVar11 + -0x188);
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,uVar1,uVar7,ar7);
        *(undefined4 *)((int)pdVar11 + -0x18c) = uVar2;
        uVar2 = deref_u32(*(undefined4 *)((int)pdVar11 + -0x18c),uVar1,uVar7,ar7);
        *(undefined4 *)((int)pdVar11 + -400) = uVar2;
        puVar3 = *(undefined4 **)((int)pdVar11 + -400);
        uVar2 = puVar3[1];
        *(undefined4 *)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(ar4 + 0xb8) = uVar2;
        *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
        if (*(int *)(ar4 + 0x128) == 1) {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c13630c;
        }
        else {
          ar7 = (code *)&DAT_8c136354;
          *(undefined **)(ar4 + 0xb4) = &DAT_8c136354;
        }
      }
      else {
        ar7 = (code *)0x0;
        uVar7 = 0xffffffff;
        uVar2 = 8;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
        uVar2 = FUN_8c026db0(ar4,uVar2,uVar7,ar7);
        *(undefined4 *)((int)pdVar11 + -0x194) = uVar2;
        uVar1 = *(undefined4 *)((int)pdVar11 + -0x194);
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,uVar1,uVar7,ar7);
        *(undefined4 *)((int)pdVar11 + -0x198) = uVar2;
        uVar2 = deref_u32(*(undefined4 *)((int)pdVar11 + -0x198),uVar1,uVar7,ar7);
        *(undefined4 *)((int)pdVar11 + -0x19c) = uVar2;
        puVar3 = *(undefined4 **)((int)pdVar11 + -0x19c);
        uVar2 = puVar3[1];
        *(undefined4 *)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(ar4 + 0xb8) = uVar2;
        *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
        if (*(int *)(ar4 + 0x128) == 1) {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c136324;
        }
        else {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c13636c;
        }
      }
      FUN_8c032ab0(ar4,uVar1,uVar7,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar11 + -0x1a0) = (int)((ulonglong)uVar17 >> 0x20);
        dVar14 = (double)CONCAT44(0x42700000,*(undefined4 *)(ar4 + 0x224));
      }
      else {
        *(undefined8 *)((int)pdVar11 + -0x1a0) = uVar17;
        in_xd0 = *(undefined8 *)(ar4 + 0x224);
        dVar14 = 3.74021962707397e-312;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) / (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1a0),fVar13);
      }
      else {
        dVar14 = *(double *)((int)pdVar11 + -0x1a0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 * dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x2c0) = fVar13;
      }
      else {
        *(undefined8 *)(ar4 + 0x2c0) = in_xd0;
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar7,ar7);
      uVar2 = get_field_1c_026dd8(ar4 + 0xb0,uVar1,uVar7,ar7);
      *(undefined4 *)((int)pdVar11 + -0x1a4) = uVar2;
      uVar1 = 0xb0;
      uVar2 = s_Check_This_Motion_Data_0314fc
                        (ar4 + 0xb0,*(undefined4 *)((int)pdVar11 + -0x1a4),0xb0,ar7);
      *(undefined4 *)((int)pdVar11 + -0x1a8) = uVar2;
      if (*(int *)((int)pdVar11 + -0x1a8) == 0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x228) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x228) = CONCAT44(0x3f800000,fVar13);
        }
      }
      else {
        uVar2 = get_field_1c_026dd8(ar4 + 0xb0,get_field_1c_026dd8,uVar1,ar7);
        *(undefined4 *)((int)pdVar11 + -0x1ac) = uVar2;
        uVar2 = s_Check_This_Motion_Data_0314fc
                          (ar4 + 0xb0,*(undefined4 *)((int)pdVar11 + -0x1ac),uVar1,ar7);
        *(undefined4 *)((int)pdVar11 + -0x1b0) = uVar2;
        *(int *)((int)pdVar11 + -0x224) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)pdVar11 + -0x224) + 0x228),in_fr3)
          ;
        }
        else {
          dVar14 = *(double *)(*(int *)((int)pdVar11 + -0x224) + 0x228);
        }
        fVar13 = (float)*(int *)((int)pdVar11 + -0x1b0);
        dVar15 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(0x4f800000,fVar13);
          }
          else {
            dVar15 = 5.4415140602002105e+158;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = (float)((ulonglong)dVar15 >> 0x20);
            dVar15 = (double)CONCAT44(fVar13,SUB84(dVar15,0) + fVar13);
          }
          else {
            dVar15 = dVar15 + dVar15;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) / SUB84(dVar15,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 / dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(*(int *)((int)pdVar11 + -0x224) + 0x228) = (int)((ulonglong)dVar14 >> 0x20);
        }
        else {
          *(double *)(*(int *)((int)pdVar11 + -0x224) + 0x228) = dVar14;
        }
      }
    }
    *(undefined4 *)(ar4 + 0x2b8) = 3;
    *(undefined4 *)(ar4 + 0x40) = 1;
    uVar2 = rand(rand,1,uVar1,ar7);
    *(undefined4 *)((int)pdVar11 + -0x1b4) = uVar2;
    uVar7 = 3;
    uVar2 = libgcc_divide_helper_01031c(*(undefined4 *)((int)pdVar11 + -0x1b4),3,uVar1,ar7);
    *(undefined4 *)((int)pdVar11 + -0x228) = uVar2;
    *(int *)(ar4 + 0x280) = *(int *)((int)pdVar11 + -0x228) + 1;
    FUN_8c02a1fc(ar4 + 0x2c8,uVar7,uVar1,ar7);
    break;
  case 1:
    *(undefined4 *)(ar4 + 0x40) = 3;
  case 3:
    uVar2 = get_field_1c_026dd8(ar4 + 0xb0,pcVar5,pcVar9,ar7);
    *(undefined4 *)((int)pdVar11 + -0x1b8) = uVar2;
    iVar4 = *(int *)((int)pdVar11 + -0x1b8);
    if ((iVar4 < 0xb) && (-1 < iVar4)) {
      pcVar5 = (code *)(&switchdata_8c04a56e_8c04a57c)[iVar4];
      switch(iVar4) {
      case 0:
      case 1:
        uVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar5,pcVar9,ar7);
        *(undefined4 *)((int)pdVar11 + -0x1bc) = uVar2;
        if (*(int *)((int)pdVar11 + -0x1bc) == 1) {
          *(undefined4 *)(ar4 + 0x40) = 5;
          *(undefined4 *)(ar4 + 0x2b8) = 2;
        }
        *(int *)((int)pdVar11 + -0x22c) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(0x3dcccccd,
                                    *(undefined4 *)(*(int *)((int)pdVar11 + -0x22c) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x22c) + 0x28);
          dVar14 = 2.6649806623074442e+256;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar11 + -0x22c) + 0x28) = fVar13;
          fVar13 = *(float *)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar11 + -0x22c) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        dVar14 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          dVar14 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(double *)(ar4 + 0x28) = dVar14;
          }
        }
        break;
      default:
        goto switchD_8c04a56e_caseD_2;
      case 5:
        s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,pcVar5,pcVar9,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,pcVar9,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x1ec) = (int)((ulonglong)dVar14 >> 0x20);
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                     *(undefined4 *)((int)pdVar11 + -0x1ec));
        }
        else {
          *(double *)((int)pdVar11 + -0x1ec) = dVar14;
        }
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr14 >> 0x20) < SUB84(in_dr14,0)) {
          if (in_FPSCR_PR == '\0') {
            bVar20 = SUB84(in_dr14,0) < SUB84(in_dr12,0);
          }
          else {
            bVar20 = in_dr14 < in_dr12;
          }
          if (bVar20) {
            uVar2 = get_field_1c_026dd8(ar4 + 0xb0,pcVar5,pcVar9,ar7);
            *(undefined4 *)((int)pdVar11 + -0x1f0) = uVar2;
            uVar2 = *(undefined4 *)((int)pdVar11 + -0x1f0);
            uVar1 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar2,pcVar9,ar7);
            *(undefined4 *)((int)pdVar11 + -500) = uVar1;
            Vec3_set_xyz((undefined1 *)((int)pdVar11 + -0x110),uVar2,pcVar9,ar7);
            *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0x110);
            *(undefined1 **)((int)pdVar11 + -0x270) = (undefined1 *)((int)pdVar11 + -0x120);
            ar7 = (code *)(ar4 + 0x14);
            pcVar9 = (code *)((int)pdVar11 + -0x40);
            FUN_8c031eb0(ar4,ar5,pcVar9,ar7,*(undefined4 *)((int)pdVar11 + -0x270));
            Vec3_assign(ar4 + 0x14,(undefined1 *)((int)pdVar11 + -0x120),pcVar9,ar7);
            Vec3_dtor((undefined1 *)((int)pdVar11 + -0x120),0xffffffff,pcVar9,ar7);
            object_dtor_delete((undefined1 *)((int)pdVar11 + -0x110),0xffffffff,pcVar9,ar7);
            *(int *)((int)pdVar11 + -0x240) = ar4;
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x264),
                                        *(undefined4 *)(*(int *)((int)pdVar11 + -0x240) + 0x28));
            }
            else {
              in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x240) + 0x28);
              dVar14 = *(double *)((int)pdVar11 + -0x264);
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 + dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(*(int *)((int)pdVar11 + -0x240) + 0x28) = fVar13;
              dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
            }
            else {
              *(undefined8 *)(*(int *)((int)pdVar11 + -0x240) + 0x28) = in_xd0;
              in_xd0 = *(undefined8 *)(ar4 + 0x28);
              dVar14 = *(double *)(ar4 + 0x24);
            }
            if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar14 >> 0x20) < SUB84(dVar14,0)) {
              if (in_FPSCR_SZ == '\0') {
                uVar2 = *(undefined4 *)(ar4 + 0x24);
                dVar14 = (double)CONCAT44(uVar2,SUB84(dVar14,0));
                *(undefined4 *)(ar4 + 0x28) = uVar2;
              }
              else {
                dVar14 = *(double *)(ar4 + 0x24);
                *(double *)(ar4 + 0x28) = dVar14;
              }
            }
            break;
          }
        }
        FUN_8c032ab0(ar4,pcVar5,pcVar9,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x1f8) = (int)((ulonglong)dVar14 >> 0x20);
        }
        else {
          *(double *)((int)pdVar11 + -0x1f8) = dVar14;
        }
        *(int *)((int)pdVar11 + -0x244) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1f8),
                                    *(undefined4 *)(*(int *)((int)pdVar11 + -0x244) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x244) + 0x28);
          dVar14 = *(double *)((int)pdVar11 + -0x1f8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar11 + -0x244) + 0x28) = fVar13;
          fVar13 = *(float *)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar11 + -0x244) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        dVar14 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          dVar14 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(double *)(ar4 + 0x28) = dVar14;
          }
        }
        break;
      case 6:
        if (in_FPSCR_SZ == '\0') {
          uVar17 = CONCAT44(0x40400000,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          uVar17 = 0x27840400000;
        }
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar17 >> 0x20) < (float)uVar17) {
          s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,pcVar5,pcVar9,ar7);
        }
        else {
          uVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar5,pcVar9,ar7);
          *(undefined4 *)((int)pdVar11 + -0x1fc) = uVar2;
          if (*(int *)((int)pdVar11 + -0x1fc) == 1) {
            *(undefined4 *)(ar4 + 0x40) = 5;
            *(undefined4 *)(ar4 + 0x2b8) = 2;
          }
        }
        CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,pcVar9,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x200) = (int)((ulonglong)uVar17 >> 0x20);
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                     *(undefined4 *)((int)pdVar11 + -0x200));
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x200) = uVar17;
        }
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr14 >> 0x20) < SUB84(in_dr14,0)) {
          if (in_FPSCR_PR == '\0') {
            bVar20 = SUB84(in_dr14,0) < SUB84(in_dr12,0);
          }
          else {
            bVar20 = in_dr14 < in_dr12;
          }
          if (bVar20) {
            uVar1 = 6;
            uVar2 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,6,pcVar9,ar7);
            *(undefined4 *)((int)pdVar11 + -0x204) = uVar2;
            Vec3_set_xyz((undefined1 *)((int)pdVar11 + -300),uVar1,pcVar9,ar7);
            *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -300);
            *(undefined1 **)((int)pdVar11 + -0x270) = (undefined1 *)((int)pdVar11 + -0x13c);
            ar7 = (code *)(ar4 + 0x14);
            pcVar9 = (code *)((int)pdVar11 + -0x40);
            FUN_8c031eb0(ar4,ar5,pcVar9,ar7,*(undefined4 *)((int)pdVar11 + -0x270));
            Vec3_assign(ar4 + 0x14,(undefined1 *)((int)pdVar11 + -0x13c),pcVar9,ar7);
            Vec3_dtor((undefined1 *)((int)pdVar11 + -0x13c),0xffffffff,pcVar9,ar7);
            object_dtor_delete((undefined1 *)((int)pdVar11 + -300),0xffffffff,pcVar9,ar7);
            *(int *)((int)pdVar11 + -0x248) = ar4;
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x264),
                                        *(undefined4 *)(*(int *)((int)pdVar11 + -0x248) + 0x28));
            }
            else {
              in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x248) + 0x28);
              dVar14 = *(double *)((int)pdVar11 + -0x264);
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 + dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(*(int *)((int)pdVar11 + -0x248) + 0x28) = fVar13;
              dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
            }
            else {
              *(undefined8 *)(*(int *)((int)pdVar11 + -0x248) + 0x28) = in_xd0;
              in_xd0 = *(undefined8 *)(ar4 + 0x28);
              dVar14 = *(double *)(ar4 + 0x24);
            }
            if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar14 >> 0x20) < SUB84(dVar14,0)) {
              if (in_FPSCR_SZ == '\0') {
                uVar2 = *(undefined4 *)(ar4 + 0x24);
                dVar14 = (double)CONCAT44(uVar2,SUB84(dVar14,0));
                *(undefined4 *)(ar4 + 0x28) = uVar2;
              }
              else {
                dVar14 = *(double *)(ar4 + 0x24);
                *(double *)(ar4 + 0x28) = dVar14;
              }
            }
            break;
          }
        }
        FUN_8c032ab0(ar4,pcVar5,pcVar9,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x208) = (int)((ulonglong)uVar17 >> 0x20);
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x208) = uVar17;
        }
        *(int *)((int)pdVar11 + -0x24c) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x208),
                                    *(undefined4 *)(*(int *)((int)pdVar11 + -0x24c) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x24c) + 0x28);
          dVar14 = *(double *)((int)pdVar11 + -0x208);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar11 + -0x24c) + 0x28) = fVar13;
          fVar13 = *(float *)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar11 + -0x24c) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        dVar14 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          dVar14 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(double *)(ar4 + 0x28) = dVar14;
          }
        }
        break;
      case 7:
      case 8:
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar14 & 0xffffffff;
        }
        *(int *)((int)pdVar11 + -0x230) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(0x3d4ccccd,
                                    *(undefined4 *)(*(int *)((int)pdVar11 + -0x230) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x230) + 0x28);
          dVar14 = 5.238690701939511e-11;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 + dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar11 + -0x230) + 0x28) = fVar13;
          fVar13 = *(float *)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar11 + -0x230) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        dVar14 = (double)CONCAT44(0x3f800000,fVar13);
        if (in_FPSCR_PR == '\0' && 1.0 < fVar13) {
          *(int *)((int)pdVar11 + -0x234) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(0x3dcccccd,
                                      *(undefined4 *)(*(int *)((int)pdVar11 + -0x234) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x234) + 0x28);
            dVar14 = 3.73983522256399e-312;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = (float)((ulonglong)dVar14 >> 0x20);
            dVar14 = (double)CONCAT44(fVar13,SUB84(dVar14,0) - fVar13);
          }
          else {
            dVar14 = dVar14 - dVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(*(int *)((int)pdVar11 + -0x234) + 0x28) = SUB84(dVar14,0);
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar11 + -0x234) + 0x28) = in_xd0;
          }
        }
        CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar9,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x1c0) = (int)((ulonglong)dVar14 >> 0x20);
        }
        else {
          *(double *)((int)pdVar11 + -0x1c0) = dVar14;
        }
        *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0xac);
        FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),pcVar9,ar7);
        vec3_copy_8c023d8c((undefined1 *)((int)pdVar11 + -0x24),(undefined1 *)((int)pdVar11 + -0xac)
                           ,pcVar9,ar7);
        uVar2 = 0xffffffff;
        object_dtor_delete((undefined1 *)((int)pdVar11 + -0xac),0xffffffff,pcVar9,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,pcVar9,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x1c4) = (int)((ulonglong)dVar14 >> 0x20);
        }
        else {
          *(double *)((int)pdVar11 + -0x1c4) = dVar14;
        }
        uVar2 = get_field_1c_026dd8(ar4 + 0xb0,uVar2,pcVar9,ar7);
        *(undefined4 *)((int)pdVar11 + -0x1c8) = uVar2;
        uVar2 = s_Check_This_Motion_Data_0314fc
                          (ar4 + 0xb0,*(undefined4 *)((int)pdVar11 + -0x1c8),pcVar9,ar7);
        *(undefined4 *)((int)pdVar11 + -0x1cc) = uVar2;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1c4),in_fr3);
        }
        else {
          dVar14 = *(double *)((int)pdVar11 + -0x1c4);
        }
        fVar13 = (float)*(int *)((int)pdVar11 + -0x1cc);
        dVar15 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(0x4f800000,fVar13);
          }
          else {
            dVar15 = 2.0000005923211575;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = (float)((ulonglong)dVar15 >> 0x20);
            dVar15 = (double)CONCAT44(fVar13,SUB84(dVar15,0) + fVar13);
          }
          else {
            dVar15 = dVar15 + dVar15;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) / SUB84(dVar15,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 / dVar15;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = 1.0 - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84((double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),0x3f800000) - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(0x40000000,fVar13);
        }
        else {
          dVar14 = 6.03177303581879e-312;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)pdVar11 + -0x14c) = fVar13;
          dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c8),
                                    *(undefined4 *)((int)pdVar11 + -0x24));
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x14c) = in_xd0;
          in_xd0 = *(undefined8 *)((int)pdVar11 + -0x24);
          dVar14 = *(double *)(ar4 + 0x2c8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),fVar13);
        }
        else {
          dVar14 = *(double *)(ar4 + 0x2c0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x14c),fVar13);
        }
        else {
          dVar14 = *(double *)((int)pdVar11 + -0x14c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)pdVar11 + -0x30) = fVar13;
          dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2cc),
                                    *(undefined4 *)((int)pdVar11 + -0x20));
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x30) = in_xd0;
          in_xd0 = *(undefined8 *)((int)pdVar11 + -0x20);
          dVar14 = *(double *)(ar4 + 0x2cc);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        ar6_00 = (double *)(ar4 + 0x2c0);
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)ar6_00,fVar13);
        }
        else {
          dVar14 = *ar6_00;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x14c),fVar13);
        }
        else {
          dVar14 = *(double *)((int)pdVar11 + -0x14c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)pdVar11 + -0x2c) = fVar13;
          dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2d0),
                                    *(undefined4 *)((int)pdVar11 + -0x1c));
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x2c) = in_xd0;
          in_xd0 = *(undefined8 *)((int)pdVar11 + -0x1c);
          dVar14 = *(double *)(ar4 + 0x2d0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),fVar13);
        }
        else {
          dVar14 = *(double *)(ar4 + 0x2c0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x14c),fVar13);
        }
        else {
          dVar14 = *(double *)((int)pdVar11 + -0x14c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = (float)((ulonglong)dVar14 >> 0x20);
          dVar14 = (double)CONCAT44(fVar13,SUB84(dVar14,0) * fVar13);
        }
        else {
          dVar14 = dVar14 * dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x28) = SUB84(dVar14,0);
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x28) = in_xd0;
        }
        vec3_copy_8c023d8c(ar4 + 0x2c8,(undefined1 *)((int)pdVar11 + -0x24),ar6_00,ar7);
        vec3_copy_8c02b5fc((undefined1 *)((int)pdVar11 + -0xb8),(undefined1 *)((int)pdVar11 + -0x30)
                           ,ar6_00,ar7);
        *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -200);
        FUN_8c023484(ar4 + 0x14,(undefined1 *)((int)pdVar11 + -0xb8),ar6_00,ar7,
                     *(undefined4 *)((int)pdVar11 + -0x26c));
        Vec3_assign(ar4 + 0x14,(undefined1 *)((int)pdVar11 + -200),ar6_00,ar7);
        Vec3_dtor((undefined1 *)((int)pdVar11 + -200),0xffffffff,ar6_00,ar7);
        uVar2 = 0xffffffff;
        object_dtor_delete((undefined1 *)((int)pdVar11 + -0xb8),0xffffffff,ar6_00,ar7);
        Vec3_set_xyz((undefined1 *)((int)pdVar11 + -0xd4),uVar2,ar6_00,ar7);
        *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0xd4);
        *(undefined1 **)((int)pdVar11 + -0x270) = (undefined1 *)((int)pdVar11 + -0xe4);
        iVar4 = ar4 + 0x14;
        puVar8 = (undefined1 *)((int)pdVar11 + -0x40);
        FUN_8c031eb0(ar4,ar5,puVar8,iVar4,*(undefined4 *)((int)pdVar11 + -0x270));
        Vec3_assign(ar4 + 0x14,(undefined1 *)((int)pdVar11 + -0xe4),puVar8,iVar4);
        puVar8 = (undefined1 *)((int)pdVar11 + -0xe4);
        Vec3_dtor(puVar8,0xffffffff,puVar8,iVar4);
        uVar1 = 0xffffffff;
        ar7 = object_dtor_delete;
        object_dtor_delete((undefined1 *)((int)pdVar11 + -0xd4),0xffffffff,puVar8,object_dtor_delete
                          );
        pcVar9 = (code *)(ar4 + 0x14);
        Vec3_length(pcVar9,uVar1,pcVar9,ar7);
        uVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar1,pcVar9,ar7);
        *(undefined4 *)((int)pdVar11 + -0x1d0) = uVar2;
        if (*(int *)((int)pdVar11 + -0x1d0) == 1) {
          FUN_8c0231c8((undefined1 *)((int)pdVar11 + -0x50),uVar1,pcVar9,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar11 + -0x1d4) = (int)((ulonglong)dVar14 >> 0x20);
          }
          else {
            *(double *)((int)pdVar11 + -0x1d4) = dVar14;
          }
          iVar4 = ar4 + 0x14;
          FUN_8c0231c8(iVar4,uVar1,pcVar9,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar11 + -0x1d8) = (int)((ulonglong)dVar14 >> 0x20);
            uVar17 = CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1d8),SUB84(dVar14,0));
          }
          else {
            *(double *)((int)pdVar11 + -0x1d8) = dVar14;
            uVar17 = *(undefined8 *)((int)pdVar11 + -0x1d8);
          }
          FUN_8c010e38(iVar4,uVar1,pcVar9,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar11 + -0x1dc) = (int)((ulonglong)uVar17 >> 0x20);
          }
          else {
            *(undefined8 *)((int)pdVar11 + -0x1dc) = uVar17;
          }
          uVar2 = 0x228;
          if (in_FPSCR_SZ == '\0') {
            uVar17 = CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1dc),(int)uVar17);
            *(undefined4 *)(ar4 + 0x228) = *(undefined4 *)((int)pdVar11 + -0x1dc);
          }
          else {
            uVar17 = *(undefined8 *)((int)pdVar11 + -0x1dc);
            *(undefined8 *)(ar4 + 0x228) = uVar17;
          }
          *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0xf4);
          FUN_8c0230f0(ar4 + 0x14,0x228,pcVar9,ar7,*(undefined4 *)((int)pdVar11 + -0x26c));
          *(undefined1 **)((int)pdVar11 + -0x26c) = (undefined1 *)((int)pdVar11 + -0x104);
          FUN_8c0230f0((undefined1 *)((int)pdVar11 + -0x50),uVar2,pcVar9,ar7,
                       *(undefined4 *)((int)pdVar11 + -0x26c));
          ar7 = (code *)((int)pdVar11 + -0xf4);
          pcVar9 = FUN_8c022dac;
          FUN_8c022dac(ar7,(undefined1 *)((int)pdVar11 + -0x104),FUN_8c022dac,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar11 + -0x1e0) = (int)((ulonglong)uVar17 >> 0x20);
            dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1e0),(int)uVar17);
            *(undefined4 *)(ar4 + 0x224) = *(undefined4 *)((int)pdVar11 + -0x1e0);
          }
          else {
            *(undefined8 *)((int)pdVar11 + -0x1e0) = uVar17;
            dVar14 = *(double *)((int)pdVar11 + -0x1e0);
            *(double *)(ar4 + 0x224) = dVar14;
          }
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0x104),0xffffffff,pcVar9,ar7);
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0xf4),0xffffffff,pcVar9,ar7);
          *(undefined4 *)(ar4 + 0x290) = 0;
          *(undefined4 *)(ar4 + 0x40) = 5;
          *(undefined4 *)(ar4 + 0x2b8) = 2;
        }
        break;
      case 10:
        CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,pcVar9,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x1e4) = (int)((ulonglong)dVar14 >> 0x20);
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                     *(undefined4 *)((int)pdVar11 + -0x1e4));
        }
        else {
          *(double *)((int)pdVar11 + -0x1e4) = dVar14;
        }
        if (in_FPSCR_PR != '\0' || SUB84(in_dr14,0) <= (float)((ulonglong)in_dr14 >> 0x20)) {
LAB_8c04aa78:
          *(int *)((int)pdVar11 + -0x23c) = ar4;
          ar7 = (code *)(*(int *)((int)pdVar11 + -0x23c) + 0x28);
          pcVar9 = *(code **)((int)pdVar11 + -0x23c);
          pcVar5 = pcVar9 + 0x28;
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(0x3c23d70a,*(float *)pcVar5);
          }
          else {
            in_xd0 = *(undefined8 *)pcVar5;
            dVar14 = 3.73969762439725e-312;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
          }
          else {
            fVar13 = SUB84(dVar14 - dVar14,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)ar7 = fVar13;
            fVar13 = *(float *)(ar4 + 0x28);
          }
          else {
            *(undefined8 *)ar7 = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
          }
          dVar14 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            dVar14 = (double)(ulonglong)(uint)fVar13;
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x28) = 0;
            }
            else {
              *(double *)(ar4 + 0x28) = dVar14;
            }
          }
        }
        else {
          if (in_FPSCR_PR == '\0') {
            bVar20 = SUB84(in_dr14,0) < SUB84(in_dr12,0);
          }
          else {
            bVar20 = in_dr14 < in_dr12;
          }
          if (!bVar20) goto LAB_8c04aa78;
          *(int *)((int)pdVar11 + -0x238) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(0x40000000,
                                      *(undefined4 *)(*(int *)((int)pdVar11 + -0x238) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x238) + 0x28);
            dVar14 = 6.6797933913687535e+115;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
          }
          else {
            fVar13 = SUB84(dVar14 + dVar14,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar11 + -0x238) + 0x28) = fVar13;
            dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar11 + -0x238) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar14 = *(double *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar14 >> 0x20) < SUB84(dVar14,0)) {
            if (in_FPSCR_SZ == '\0') {
              uVar2 = *(undefined4 *)(ar4 + 0x24);
              dVar14 = (double)CONCAT44(uVar2,SUB84(dVar14,0));
              *(undefined4 *)(ar4 + 0x28) = uVar2;
            }
            else {
              dVar14 = *(double *)(ar4 + 0x24);
              *(double *)(ar4 + 0x28) = dVar14;
            }
          }
        }
        uVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar5,pcVar9,ar7);
        *(undefined4 *)((int)pdVar11 + -0x1e8) = uVar2;
        if (*(int *)((int)pdVar11 + -0x1e8) == 1) {
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          *(undefined4 *)(ar4 + 0x40) = 5;
        }
      }
    }
    else {
switchD_8c04a56e_caseD_2:
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      uVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar5,pcVar9,ar7);
      *(undefined4 *)((int)pdVar11 + -0x20c) = uVar2;
      if (*(int *)((int)pdVar11 + -0x20c) == 1) {
        *(undefined4 *)(ar4 + 0x2b8) = 2;
      }
    }
    FUN_8c022fc0(ar5,ar6,pcVar9,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar11 + -0x210) = (int)((ulonglong)dVar14 >> 0x20);
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x28));
    }
    else {
      *(double *)((int)pdVar11 + -0x210) = dVar14;
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar14 = *(double *)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar14 + dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar16 = CONCAT44(*(undefined4 *)((int)pdVar11 + -0x210),fVar13);
    }
    else {
      uVar16 = *(ulonglong *)((int)pdVar11 + -0x210);
    }
    if (in_FPSCR_PR != '\0' || (float)(uVar16 >> 0x20) <= (float)uVar16) {
      *(undefined4 *)(ar4 + 0x40) = 4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
        dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = uVar16 & 0xffffffff;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar14 = *(double *)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) / (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x3c) = fVar13;
      }
      else {
        *(undefined8 *)(ar4 + 0x3c) = in_xd0;
      }
      *(undefined4 *)(ar4 + 0x40) = 4;
    }
    break;
  case 4:
    pcVar9 = CAnimBody_GetCurFrame;
    CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,CAnimBody_GetCurFrame,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar11 + -0x214) = (int)((ulonglong)dVar14 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)pdVar11 + -0x214));
    }
    else {
      *(double *)((int)pdVar11 + -0x214) = dVar14;
    }
    uVar2 = get_field_1c_026dd8(ar4 + 0xb0,pcVar5,pcVar9,ar7);
    fVar13 = SUB84(dVar14,0);
    *(undefined4 *)((int)pdVar11 + -0x218) = uVar2;
    fVar19 = (float)((ulonglong)in_dr14 >> 0x20);
    fVar18 = SUB84(in_dr14,0);
    if (*(int *)((int)pdVar11 + -0x218) == 5) {
      if (in_FPSCR_PR == '\0' && fVar19 < fVar18) {
        if (in_FPSCR_PR == '\0') {
          bVar20 = fVar18 < SUB84(in_dr12,0);
        }
        else {
          bVar20 = in_dr14 < in_dr12;
        }
        if (bVar20) {
          *(int *)((int)pdVar11 + -0x250) = ar4;
          pcVar5 = (code *)(*(int *)((int)pdVar11 + -0x250) + 0x28);
          if (in_FPSCR_SZ == '\0') {
            fVar13 = *(float *)pcVar5;
          }
          else {
            in_xd0 = *(undefined8 *)pcVar5;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = fVar13 + 1.0;
          }
          else {
            fVar13 = SUB84((double)CONCAT44(0x3f800000,fVar13) + (double)CONCAT44(0x3f800000,fVar13)
                           ,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar11 + -0x250) + 0x28) = fVar13;
            uVar17 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar11 + -0x250) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            uVar17 = *(undefined8 *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar17 >> 0x20) < (float)uVar17) {
            pcVar5 = (code *)(ar4 + 0x24);
            if (in_FPSCR_SZ == '\0') {
              *(float *)(ar4 + 0x28) = *(float *)pcVar5;
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)pcVar5;
            }
          }
        }
      }
    }
    else if ((*(int *)((int)pdVar11 + -0x218) == 6) && (in_FPSCR_PR == '\0' && fVar19 < fVar18)) {
      if (in_FPSCR_PR == '\0') {
        bVar20 = fVar18 < SUB84(in_dr12,0);
      }
      else {
        bVar20 = in_dr14 < in_dr12;
      }
      if (bVar20) {
        *(int *)((int)pdVar11 + -0x254) = ar4;
        if (in_FPSCR_SZ == '\0') {
          fVar13 = *(float *)(*(int *)((int)pdVar11 + -0x254) + 0x28);
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x254) + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = fVar13 + 1.0;
        }
        else {
          fVar13 = SUB84((double)CONCAT44(0x3f800000,fVar13) + (double)CONCAT44(0x3f800000,fVar13),0
                        );
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar11 + -0x254) + 0x28) = fVar13;
          uVar17 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar11 + -0x254) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          uVar17 = *(undefined8 *)(ar4 + 0x24);
        }
        pcVar5 = (code *)(ar4 + 0x24);
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar17 >> 0x20) < (float)uVar17) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
          }
        }
      }
    }
    *(int *)((int)pdVar11 + -600) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x3c),
                                *(undefined4 *)(*(int *)((int)pdVar11 + -600) + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -600) + 0x28);
      dVar14 = *(double *)(ar4 + 0x3c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar14 - dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)pdVar11 + -600) + 0x28) = fVar13;
      fVar13 = *(float *)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(*(int *)((int)pdVar11 + -600) + 0x28) = in_xd0;
    }
    if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar13;
      }
    }
    ar7 = (code *)0xb0;
    uVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar5,ar4 + 0xb0,0xb0);
    *(undefined4 *)((int)pdVar11 + -0x21c) = uVar2;
    if (*(int *)((int)pdVar11 + -0x21c) == 1) {
      FUN_8c02a1fc(ar4 + 0x2c8,uVar2,FUN_8c02a1fc,ar7);
      uVar10 = 0;
      *(undefined4 *)(ar4 + 0x2b8) = 2;
      ar7 = (code *)(ar4 + 0x2c);
      if (in_FPSCR_SZ == '\0') {
        *(float *)ar7 = 0.0;
      }
      else {
        *(ulonglong *)ar7 = (ulonglong)(uint)fVar13;
      }
    }
  }
override_jmp_8c049e5a_case_2:
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar4 + 0x14,ar7);
  FUN_8c051a68(ar4,(undefined1 *)((int)pdVar11 + -0x40),ar5,ar7);
  *(undefined4 *)((int)pdVar11 + -0x154) = uVar10;
  Vec3_dtor((undefined1 *)((int)pdVar11 + -0x60),0xffffffff,ar5,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar11 + -0x50),0xffffffff,ar5,ar7);
  Vec3_dtor((undefined1 *)((int)pdVar11 + -0x40),0xffffffff,ar5,ar7);
  object_dtor_delete((undefined1 *)((int)pdVar11 + -0x30),0xffffffff,ar5,ar7);
  object_dtor_delete((undefined1 *)((int)pdVar11 + -0x24),0xffffffff,ar5,ar7);
  return *(undefined4 *)((int)pdVar11 + -0x154);
}

__asm__(".globl _FUN_8c049b68\n.set _FUN_8c049b68, _FUN_8c049b68_def\n");
