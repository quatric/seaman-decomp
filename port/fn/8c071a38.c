#include "../decls.h"
undefined4 FUN_8c071a38_def(int ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong *ar5_00;
  undefined4 uVar5;
  int a5;
  undefined4 uVar6;
  code *pcVar7;
  undefined *puVar8;
  uint ar6_00;
  undefined1 *puVar9;
  code *pcVar10;
  undefined *ar7_00;
  undefined4 unaff_r12;
  code *ar7_01;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  double *pdVar11;
  undefined4 in_fr1;
  float fVar12;
  ulonglong uVar13;
  float fVar16;
  double dVar14;
  undefined8 uVar15;
  undefined8 in_dr12;
  double dVar17;
  double in_dr14;
  double dVar18;
  undefined8 in_xd0;
  undefined8 in_xd12;
  undefined8 in_xd14;
  bool bVar19;
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
    dStack_10 = (double)CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar11 = (double *)auStack_20;
    uStack_8 = in_xd14;
    dStack_10 = in_dr14;
  }
  *(undefined4 *)((int)pdVar11 + -4) = unaff_r14;
  *(undefined4 *)((int)pdVar11 + -8) = unaff_r13;
  *(undefined4 *)((int)pdVar11 + -0xc) = unaff_r12;
  *(undefined4 *)((int)pdVar11 + -0x10) = in_PR;
  ar7_01 = (code *)0x1;
  *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0x8c);
  FUN_8c03f480(*ar5,1,ar6,ar7,*(undefined4 *)((int)pdVar11 + -800));
  uVar1 = (undefined4)in_dr12;
  Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0x20),(undefined1 *)((int)pdVar11 + -0x8c),ar6,ar7);
  pcVar10 = (code *)((int)pdVar11 + -0x8c);
  Vec3_dtor(pcVar10,0xffffffff,ar6,pcVar10);
  ar5_00 = (ulonglong *)(ar5 + 8);
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44((int)*ar5_00,in_fr1);
    *(int *)(ar4 + 0x7c) = (int)*ar5_00;
  }
  else {
    uVar13 = *ar5_00;
    *(ulonglong *)(ar4 + 0x7c) = uVar13;
  }
  if (*(int *)(ar4 + 0x2cc) == 0) {
    if (ar5[4] != 3) {
      pcVar10 = (code *)(ar4 + 0x68);
      ar6 = *(int *)pcVar10;
      if (ar6 == 0) goto LAB_8c071c68;
    }
    ar5_00 = *(ulonglong **)(ar4 + 0x298);
    if (ar5_00 == (ulonglong *)0x1) {
      if ((*(int *)(ar4 + 0x124) == 4) && (*(int *)(ar4 + 300) == 2)) {
        uVar1 = get_field_6c_028cc4(*ar5,1,ar6,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x1e4) = uVar1;
        if (*(int *)((int)pdVar11 + -0x1e4) != 0) {
          *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0x9c);
          uVar6 = 0x80;
          Vec3_scale(ar4 + 0x80,ar4 + 0x48,0x80,pcVar10,*(undefined4 *)((int)pdVar11 + -800));
          *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0xac);
          Vec3_scale((undefined1 *)((int)pdVar11 + -0x9c),*(int *)(ar5[1] + 8) + 4,uVar6,pcVar10,
                     *(undefined4 *)((int)pdVar11 + -800));
          *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0xbc);
          pcVar10 = Vec3_add;
          Vec3_add((undefined1 *)((int)pdVar11 + -0xac),*(undefined4 *)(uint)ar5[1],uVar6,Vec3_add,
                   *(undefined4 *)((int)pdVar11 + -800));
          Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0x30),(undefined1 *)((int)pdVar11 + -0xbc),
                         uVar6,pcVar10);
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0xbc),0xffffffff,uVar6,pcVar10);
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0xac),0xffffffff,uVar6,pcVar10);
          uVar5 = 0xffffffff;
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0x9c),0xffffffff,uVar6,pcVar10);
          uVar1 = get_field_6c_028cc4(*ar5,uVar5,uVar6,pcVar10);
          *(undefined4 *)((int)pdVar11 + -0x1e8) = uVar1;
          FUN_8c036988(*(undefined4 *)((int)pdVar11 + -0x1e8),uVar5,uVar6,pcVar10);
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0x30),0xffffffff,uVar6,pcVar10);
        }
      }
      *(undefined4 *)((int)pdVar11 + -800) = ar5[6];
      uVar5 = ar5[3];
      uVar1 = ar5[4];
      FUN_8c07a68c(ar4,*(undefined4 *)(uint)ar5[1],uVar1,uVar5);
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,uVar1,uVar5);
      *(undefined4 *)((int)pdVar11 + -0x1c0) = 1;
      Vec3_dtor((undefined1 *)((int)pdVar11 + -0x20),0xffffffff,uVar1,uVar5);
      return *(undefined4 *)((int)pdVar11 + -0x1c0);
    }
  }
LAB_8c071c68:
  iVar3 = *(int *)(ar4 + 0x124);
  pcVar7 = (code *)0x21;
  if ((iVar3 < 0x22) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      if ((ar5[4] == 1) || (*(int *)(ar4 + 0x2ac) == 2)) {
        FUN_8c10277c((undefined1 *)((int)pdVar11 + -0x3c),ar5_00,ar5[7] + 4,pcVar10);
        *(undefined4 *)((int)pdVar11 + -800) = ar5[6];
        pcVar10 = (code *)((int)pdVar11 + -0x3c);
        pcVar7 = *(code **)(ar5[1] + 4);
        uVar1 = FUN_8c07a3cc(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x1ec) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x1ec);
        free_if_nonnull_wrap_102790((undefined1 *)((int)pdVar11 + -0x3c),0xffffffff,pcVar7,pcVar10);
      }
      else {
        FUN_8c030eb8(ar4 + 0x1fc,ar5_00,FUN_8c030eb8,ar4 + 0x1fc);
        *(undefined4 *)((int)pdVar11 + -800) = ar5[6];
        *(undefined4 *)((int)pdVar11 + -0x324) = *ar5;
        pcVar10 = (code *)(uint)ar5[3];
        pcVar7 = *(code **)(ar5[1] + 4);
        uVar1 = FUN_8c078fd0(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x1f0) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x1f0);
      }
      break;
    case 1:
      pcVar7 = (code *)((int)pdVar11 + -0x20);
      uVar1 = pure_virtual_stub(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x23c) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -0x23c);
      break;
    case 2:
      pcVar10 = (code *)(uint)ar5[6];
      uVar1 = FUN_8c07af10(ar4,*(undefined4 *)(uint)ar5[1],ar5[4],pcVar10);
      *(undefined4 *)((int)pdVar11 + -600) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -600);
      pcVar7 = *(code **)ar5[1];
      FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      break;
    case 3:
      if (*(int *)(ar4 + 100) == 1) {
        uVar1 = FUN_8c031de8(ar4,0x1d,0x21,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x214) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x214);
        pcVar7 = *(code **)ar5[1];
        FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      }
      else {
        pcVar7 = (code *)(uint)ar5[6];
        uVar1 = FUN_8c07f76c(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x218) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x218);
      }
      break;
    case 4:
      *(undefined4 *)((int)pdVar11 + -800) = *(undefined4 *)(ar5[1] + 8);
      *(undefined4 *)((int)pdVar11 + -0x324) = *(undefined4 *)(ar5[1] + 4);
      pcVar10 = (code *)*ar5;
      pcVar7 = (code *)((int)pdVar11 + -0x20);
      uVar1 = FUN_8c077a38(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x254) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -0x254);
      break;
    case 6:
      pcVar7 = (code *)(uint)ar5[6];
      pcVar10 = *(code **)ar5[1];
      uVar1 = FUN_8c07edac(ar4,pcVar10,pcVar7,pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x2a4) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -0x2a4);
      break;
    case 7:
      FUN_8c031b58(ar4 + 0xb0,ar5_00,0x21,pcVar10);
      pcVar10 = (code *)0xb0;
      pcVar7 = (code *)(ar4 + 0xb0);
      uVar1 = CAnimBody_AdvanceFrame_wrapper(pcVar7,ar5_00,pcVar7,0xb0);
      *(undefined4 *)((int)pdVar11 + -0x2a8) = uVar1;
      if (*(int *)((int)pdVar11 + -0x2a8) == 1) {
        FUN_8c03c314(ar4,uVar1,pcVar7,pcVar10);
        ar7_01 = (code *)0x0;
      }
      break;
    case 10:
      if (*(int *)(ar4 + 100) == 1) {
        pcVar7 = (code *)(uint)ar5[4];
        uVar1 = FUN_8c076750(ar4,*ar5,pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x248) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x248);
      }
      else {
        pcVar7 = FUN_8c076994;
        uVar1 = FUN_8c076994(ar4,ar5,FUN_8c076994,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x24c) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x24c);
        (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar1,pcVar7,pcVar10);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x250) = (int)(uVar13 >> 0x20);
          dVar17 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),
                                    *(undefined4 *)((int)pdVar11 + -0x250));
        }
        else {
          *(ulonglong *)((int)pdVar11 + -0x250) = uVar13;
          in_xd0 = *(undefined8 *)((int)pdVar11 + -0x250);
          dVar17 = *(double *)(ar4 + 0x48);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar17,0) - (float)((ulonglong)dVar17 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar17 - dVar17,0);
        }
        pcVar10 = *(code **)ar5[1];
        if (in_FPSCR_SZ == '\0') {
          uVar15 = CONCAT44(*(int *)(pcVar10 + 4),fVar12);
        }
        else {
          uVar15 = *(undefined8 *)(pcVar10 + 4);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar15 < (float)((ulonglong)uVar15 >> 0x20)) {
          FUN_8c03c314(ar4,0x94,pcVar7,pcVar10);
        }
        else {
          FUN_8c031748(ar4,FUN_8c031748,pcVar7,pcVar10);
        }
      }
      *(int *)((int)pdVar11 + -0x2dc) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(0x3f666666,*(undefined4 *)(*(int *)((int)pdVar11 + -0x2dc) + 0x28)
                                 );
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x2dc) + 0x28);
        dVar17 = 4.245243188319886e+78;
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar17,0) * (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar17 * dVar17,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar11 + -0x2dc) + 0x28) = fVar12;
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar11 + -0x2dc) + 0x28) = in_xd0;
      }
      break;
    case 0xb:
      pcVar7 = *(code **)ar5[1];
      FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      if (*(int *)(ar4 + 100) == 1) {
        pcVar10 = FUN_8c076198;
        uVar1 = FUN_8c076198(ar4,(int *)(ar4 + 100),pcVar7,FUN_8c076198);
        *(undefined4 *)((int)pdVar11 + -0x240) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x240);
      }
      else {
        Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0xcc),&DAT_8c125e68,pcVar7,pcVar10);
        pcVar7 = (code *)0x0;
        uVar1 = FUN_8c0811b4(ar4,(undefined1 *)((int)pdVar11 + -0xcc),0,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x244) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x244);
        Vec3_dtor((undefined1 *)((int)pdVar11 + -0xcc),0xffffffff,pcVar7,pcVar10);
      }
      break;
    case 0xe:
      *(undefined4 *)(ar4 + 0x214) = 0;
      pcVar7 = *(code **)ar5[1];
      FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      pcVar10 = (code *)FUN_8c082c50(ar4,ar5,pcVar7,pcVar10);
      *(code **)((int)pdVar11 + -0x21c) = pcVar10;
      ar7_01 = *(code **)((int)pdVar11 + -0x21c);
      if (ar7_01 == (code *)0x0) {
        pcVar7 = (code *)0x214;
        *(undefined4 *)(ar4 + 0x214) = 1;
      }
      break;
    case 0x10:
      *(undefined4 *)(ar4 + 0x214) = 0;
      *(int *)((int)pdVar11 + -0x2e0) = ar4;
      pcVar10 = (code *)0x1fc;
      pcVar7 = (code *)0x1fc;
      uVar1 = 0xfffffffb;
      *(byte *)(*(int *)((int)pdVar11 + -0x2e0) + 0x1fc) =
           *(byte *)(*(int *)((int)pdVar11 + -0x2e0) + 0x1fc) & 0xfb;
      iVar3 = *(int *)(ar4 + 300);
      if (iVar3 == 0) {
        *(undefined4 *)(ar4 + 0x178) = 1;
        FUN_8c031748(ar4,0xfffffffb,0x1fc,0x1fc);
        pcVar10 = (code *)0x0;
        pcVar7 = (code *)0x0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0);
        *(int *)((int)pdVar11 + -0x2e4) = ar4;
        uVar1 = 300;
        *(int *)(*(int *)((int)pdVar11 + -0x2e4) + 300) =
             *(int *)(*(int *)((int)pdVar11 + -0x2e4) + 300) + 1;
      }
      else if (iVar3 != 1) {
        if (iVar3 == 2) {
          *(undefined4 *)((int)pdVar11 + -0x2f8) = ar5[2];
          Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0x10c),
                         &DAT_8c125f30 + *(int *)((int)pdVar11 + -0x2f8) * 0x10,&DAT_8c125f30,
                         *(int *)((int)pdVar11 + -0x2f8) * 0x10);
          uVar5 = 1;
          pcVar10 = (code *)((int)pdVar11 + -0x10c);
          uVar1 = FUN_8c0811b4(ar4,pcVar10,1,pcVar10);
          *(undefined4 *)((int)pdVar11 + -0x270) = uVar1;
          *(uint *)((int)pdVar11 + -0x1d8) = (uint)(*(int *)((int)pdVar11 + -0x270) == 0);
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0x10c),0xffffffff,uVar5,pcVar10);
          if (*(int *)((int)pdVar11 + -0x1d8) == 0) {
            pcVar7 = (code *)0x0;
          }
          else {
            *(undefined4 *)((int)pdVar11 + -0x2fc) = ar5[2];
            Vec3_assign(ar4 + 0x14,&DAT_8c125f30 + *(int *)((int)pdVar11 + -0x2fc) * 0x10,
                        *(int *)((int)pdVar11 + -0x1d8),pcVar10);
            *(int *)((int)pdVar11 + -0x300) = ar4;
            *(int *)(*(int *)((int)pdVar11 + -0x300) + 300) =
                 *(int *)(*(int *)((int)pdVar11 + -0x300) + 300) + 1;
            pcVar10 = (code *)0x0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
            pcVar7 = (code *)0xb0;
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,0xb0,pcVar10);
          }
        }
        else if (iVar3 == 3) {
          CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xfffffffb,0x1fc,0x1fc);
          ar7_01 = (code *)0x0;
          *(undefined4 *)(ar4 + 0x178) = 0;
        }
        break;
      }
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,pcVar7,pcVar10);
      Vec3_ctor_xyz((undefined1 *)((int)pdVar11 + -0xdc),uVar1,ar5[3],pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x2e8) = ar5[2];
      *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0xec);
      ar7_00 = &DAT_8c125f10;
      puVar8 = &DAT_8c125f10 + *(int *)((int)pdVar11 + -0x2e8) * 0x10;
      Vec3_add(puVar8,(undefined1 *)((int)pdVar11 + -0xdc),puVar8,&DAT_8c125f10,
               *(undefined4 *)((int)pdVar11 + -800));
      *(undefined4 *)((int)pdVar11 + -0x2ec) = ar5[2];
      Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0xfc),
                     &DAT_8c125f30 + *(int *)((int)pdVar11 + -0x2ec) * 0x10,puVar8,ar7_00);
      uVar1 = FUN_8c032d48(ar4,*(undefined4 *)(uint)ar5[1],(undefined1 *)((int)pdVar11 + -0xec),
                           (undefined1 *)((int)pdVar11 + -0xfc));
      *(undefined4 *)((int)pdVar11 + -0x26c) = uVar1;
      pcVar10 = *(code **)((int)pdVar11 + -0x26c);
      ar6_00 = (uint)(pcVar10 == (code *)0x0);
      *(uint *)((int)pdVar11 + -0x1d4) = ar6_00;
      Vec3_dtor((undefined1 *)((int)pdVar11 + -0xfc),0xffffffff,ar6_00,pcVar10);
      Vec3_dtor((undefined1 *)((int)pdVar11 + -0xec),0xffffffff,ar6_00,pcVar10);
      Vec3_dtor((undefined1 *)((int)pdVar11 + -0xdc),0xffffffff,ar6_00,pcVar10);
      if (*(int *)((int)pdVar11 + -0x1d4) == 0) {
        pcVar7 = (code *)0x0;
      }
      else {
        *(undefined4 *)((int)pdVar11 + -0x2f0) = *(undefined4 *)(ar4 + 0x128);
        FUN_8c031b68(ar4,(*(int *)((int)pdVar11 + -0x2f0) * 2 + *(int *)((int)pdVar11 + -0x2f0)) * 8
                         + -0x73d7f14c,*(int *)((int)pdVar11 + -0x1d4),pcVar10);
        *(int *)((int)pdVar11 + -0x2f4) = ar4;
        pcVar10 = *(code **)((int)pdVar11 + -0x2f4);
        pcVar7 = *(code **)((int)pdVar11 + -0x2f4);
        *(int *)(pcVar10 + 300) = *(int *)(pcVar7 + 300) + 1;
      }
      break;
    case 0x11:
      *(undefined4 *)(ar4 + 0x214) = 0;
      *(int *)((int)pdVar11 + -0x304) = ar4;
      pcVar7 = (code *)(uint)*(byte *)(*(int *)((int)pdVar11 + -0x304) + 0x1fc);
      uVar1 = 0xfffffffb;
      *(byte *)(*(int *)((int)pdVar11 + -0x304) + 0x1fc) =
           *(byte *)(*(int *)((int)pdVar11 + -0x304) + 0x1fc) & 0xfb;
      iVar3 = *(int *)(ar4 + 300);
      if (iVar3 == 0) {
        *(undefined4 *)(ar4 + 0x178) = 1;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5[2] + 0x21,0xffffffff,0);
        uVar1 = 0xb0;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar5,uVar6);
        vec3_clear(ar4 + 0x244,uVar1,uVar5,uVar6);
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(int *)((int)pdVar11 + -0x308) = ar4;
        uVar1 = 300;
        *(int *)(*(int *)((int)pdVar11 + -0x308) + 300) =
             *(int *)(*(int *)((int)pdVar11 + -0x308) + 300) + 1;
      }
      else if (iVar3 != 1) {
        if (iVar3 == 2) {
          uVar1 = CAnimBody_AdvanceFrame_wrapper
                            (ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,pcVar7,pcVar10);
          *(undefined4 *)((int)pdVar11 + -0x28c) = uVar1;
          if (*(int *)((int)pdVar11 + -0x28c) == 1) {
            FUN_8c03c314(ar4,uVar1,FUN_8c03c314,pcVar10);
            uVar6 = 0;
            uVar5 = 0xffffffff;
            uVar1 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar5,uVar6);
            ar7_01 = (code *)0x0;
            *(undefined4 *)(ar4 + 0x294) = 0;
            *(undefined4 *)(ar4 + 0x214) = 1;
            pcVar10 = FUN_8c030eb8;
            FUN_8c030eb8(ar4 + 0x1fc,0,0x294,FUN_8c030eb8);
            pcVar7 = (code *)0x12c;
            *(undefined4 *)(ar4 + 300) = 0;
            Vec3_assign(ar4 + 0x14,ar4 + 0x80,300,pcVar10);
            *(undefined4 *)(ar4 + 0x178) = 0;
          }
          else {
            Vec3_ctor_zero((undefined1 *)((int)pdVar11 + -0x6c),uVar1,
                           *(int *)((int)pdVar11 + -0x28c),pcVar10);
            puVar4 = (undefined1 *)((int)pdVar11 + -0x7c);
            Vec3_ctor_zero(puVar4,Vec3_ctor_zero,puVar4,pcVar10);
            CAnimBody_GetCurFrame(ar4 + 0xb0,CAnimBody_GetCurFrame,puVar4,pcVar10);
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)pdVar11 + -0x290) = (int)(uVar13 >> 0x20);
            }
            else {
              *(ulonglong *)((int)pdVar11 + -0x290) = uVar13;
            }
            *(undefined4 *)((int)pdVar11 + -0x31c) = ar5[2];
            *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0x168);
            uVar1 = *(undefined4 *)
                     (&DAT_8c1378b8 +
                     (*(int *)((int)pdVar11 + -0x31c) * 2 + *(int *)((int)pdVar11 + -0x31c)) * 8);
            FUN_8c034384(ar4 + 0xb0,uVar1,uVar1,
                         (*(int *)((int)pdVar11 + -0x31c) * 2 + *(int *)((int)pdVar11 + -0x31c)) * 8
                        );
            pcVar10 = Vec3_assign;
            Vec3_assign((undefined1 *)((int)pdVar11 + -0x6c),(undefined1 *)((int)pdVar11 + -0x168),
                        uVar1,Vec3_assign);
            uVar1 = 0xffffffff;
            Vec3_dtor((undefined1 *)((int)pdVar11 + -0x168),0xffffffff,0xffffffff,pcVar10);
            *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0x178);
            iVar3 = ar4 + 0x244;
            Vec3_sub((undefined1 *)((int)pdVar11 + -0x6c),iVar3,uVar1,iVar3,
                     *(undefined4 *)((int)pdVar11 + -800));
            Vec3_assign((undefined1 *)((int)pdVar11 + -0x7c),(undefined1 *)((int)pdVar11 + -0x178),
                        uVar1,iVar3);
            pcVar10 = Vec3_dtor;
            Vec3_dtor((undefined1 *)((int)pdVar11 + -0x178),0xffffffff,Vec3_dtor,iVar3);
            puVar4 = (undefined1 *)((int)pdVar11 + -0x6c);
            Vec3_assign(ar4 + 0x244,puVar4,pcVar10,iVar3);
            Vec3_ctor_xyz((undefined1 *)((int)pdVar11 + -0x188),puVar4,pcVar10,iVar3);
            pcVar7 = FUN_8c023d04;
            uVar1 = FUN_8c023d04((undefined1 *)((int)pdVar11 + -0x7c),
                                 (undefined1 *)((int)pdVar11 + -0x188),FUN_8c023d04,iVar3);
            *(undefined4 *)((int)pdVar11 + -0x294) = uVar1;
            *(undefined4 *)((int)pdVar11 + -0x1e0) = *(undefined4 *)((int)pdVar11 + -0x294);
            pcVar10 = Vec3_dtor;
            Vec3_dtor((undefined1 *)((int)pdVar11 + -0x188),0xffffffff,pcVar7,Vec3_dtor);
            if (*(int *)((int)pdVar11 + -0x1e0) != 0) {
              vec3_copy_8c02b5fc((undefined1 *)((int)pdVar11 + -0x194),*(undefined4 *)(ar5[1] + 4),
                                 pcVar7,pcVar10);
              puVar9 = (undefined1 *)((int)pdVar11 + -0x1a4);
              *(undefined1 **)((int)pdVar11 + -800) = puVar9;
              puVar4 = (undefined1 *)((int)pdVar11 + -0x194);
              FUN_8c023484((undefined1 *)((int)pdVar11 + -0x7c),puVar4,puVar9,pcVar10,
                           *(undefined4 *)((int)pdVar11 + -800));
              uVar1 = Vec3_length((undefined1 *)((int)pdVar11 + -0x1a4),puVar4,puVar9,pcVar10);
              *(undefined4 *)((int)pdVar11 + -0x298) = uVar1;
              Vec3_assign(ar4 + 0x14,*(undefined4 *)((int)pdVar11 + -0x298),puVar9,pcVar10);
              Vec3_dtor((undefined1 *)((int)pdVar11 + -0x1a4),0xffffffff,0xffffffff,pcVar10);
              pcVar7 = object_dtor_delete;
              object_dtor_delete((undefined1 *)((int)pdVar11 + -0x194),0xffffffff,object_dtor_delete
                                 ,pcVar10);
            }
            puVar4 = (undefined1 *)((int)pdVar11 + -0x7c);
            Vec3_length_sq(puVar4,puVar4,pcVar7,pcVar10);
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)pdVar11 + -0x29c) = (int)(uVar13 >> 0x20);
              uVar15 = CONCAT44(*(undefined4 *)((int)pdVar11 + -0x29c),(int)uVar13);
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)((int)pdVar11 + -0x29c);
            }
            else {
              *(ulonglong *)((int)pdVar11 + -0x29c) = uVar13;
              uVar15 = *(undefined8 *)((int)pdVar11 + -0x29c);
              *(undefined8 *)(ar4 + 0x28) = uVar15;
            }
            CAnimBody_GetCurFrame(ar4 + 0xb0,puVar4,pcVar7,pcVar10);
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)pdVar11 + -0x2a0) = (int)((ulonglong)uVar15 >> 0x20);
              dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x2a0),(int)uVar15);
            }
            else {
              *(undefined8 *)((int)pdVar11 + -0x2a0) = uVar15;
              dVar17 = *(double *)((int)pdVar11 + -0x2a0);
            }
            if (in_FPSCR_PR == '\0') {
              iVar3 = (int)(float)((ulonglong)dVar17 >> 0x20);
            }
            else {
              iVar3 = (int)dVar17;
            }
            pcVar10 = (code *)0x1a4;
            if ((iVar3 == 0x1a4) && (ar5[2] == 1)) {
              FUN_8c03f39c(*ar5,FUN_8c03f39c,pcVar7,0x1a4);
              pcVar10 = (code *)(uint)ar5[6];
              pcVar7 = *(code **)ar5[1];
              FUN_8c033474(ar4,2,pcVar7,pcVar10);
            }
            Vec3_dtor((undefined1 *)((int)pdVar11 + -0x7c),0xffffffff,pcVar7,pcVar10);
            Vec3_dtor((undefined1 *)((int)pdVar11 + -0x6c),0xffffffff,pcVar7,pcVar10);
          }
        }
        break;
      }
      pcVar10 = (code *)(ar4 + 0xb0);
      pcVar7 = FUN_8c03f3ac;
      uVar1 = FUN_8c03f3ac(pcVar10,uVar1,FUN_8c03f3ac,pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x274) = uVar1;
      iVar3 = *(int *)((int)pdVar11 + -0x274);
      if (iVar3 == 7) {
        *(int *)((int)pdVar11 + -0x30c) = ar4;
        *(undefined4 *)((int)pdVar11 + -0x310) =
             *(undefined4 *)(*(int *)((int)pdVar11 + -0x30c) + 0x294);
        *(int *)(*(int *)((int)pdVar11 + -0x30c) + 0x294) = *(int *)((int)pdVar11 + -0x310) + 1;
        if (0x11 < *(int *)((int)pdVar11 + -0x310) + 1) {
          *(int *)((int)pdVar11 + -0x314) = ar4;
          pcVar7 = *(code **)((int)pdVar11 + -0x314);
          *(int *)(pcVar7 + 300) = *(int *)(*(int *)((int)pdVar11 + -0x314) + 300) + 1;
        }
      }
      else {
        Vec3_ctor_zero((undefined1 *)((int)pdVar11 + -0x4c),iVar3,pcVar7,pcVar10);
        Vec3_ctor_zero((undefined1 *)((int)pdVar11 + -0x5c),iVar3,pcVar7,pcVar10);
        CAnimBody_GetCurFrame(ar4 + 0xb0,iVar3,pcVar7,pcVar10);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x278) = (int)(uVar13 >> 0x20);
        }
        else {
          *(ulonglong *)((int)pdVar11 + -0x278) = uVar13;
        }
        uVar1 = ar5[2];
        *(undefined4 *)((int)pdVar11 + -0x318) = uVar1;
        *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0x11c);
        FUN_8c034384(ar4 + 0xb0,
                     *(undefined4 *)
                      (&DAT_8c1378b8 +
                      (*(int *)((int)pdVar11 + -0x318) * 2 + *(int *)((int)pdVar11 + -0x318)) * 8),
                     pcVar7,uVar1);
        Vec3_assign((undefined1 *)((int)pdVar11 + -0x4c),(undefined1 *)((int)pdVar11 + -0x11c),
                    pcVar7,uVar1);
        Vec3_dtor((undefined1 *)((int)pdVar11 + -0x11c),0xffffffff,pcVar7,uVar1);
        *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -300);
        pcVar10 = Vec3_sub;
        Vec3_sub((undefined1 *)((int)pdVar11 + -0x4c),ar4 + 0x244,pcVar7,Vec3_sub,
                 *(undefined4 *)((int)pdVar11 + -800));
        puVar9 = (undefined1 *)((int)pdVar11 + -300);
        Vec3_assign((undefined1 *)((int)pdVar11 + -0x5c),puVar9,puVar9,pcVar10);
        Vec3_dtor((undefined1 *)((int)pdVar11 + -300),0xffffffff,puVar9,pcVar10);
        puVar4 = (undefined1 *)((int)pdVar11 + -0x4c);
        Vec3_assign(ar4 + 0x244,puVar4,puVar9,pcVar10);
        Vec3_ctor_xyz((undefined1 *)((int)pdVar11 + -0x13c),puVar4,puVar9,pcVar10);
        uVar1 = FUN_8c023d04((undefined1 *)((int)pdVar11 + -0x5c),
                             (undefined1 *)((int)pdVar11 + -0x13c),puVar9,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x27c) = uVar1;
        *(undefined4 *)((int)pdVar11 + -0x1dc) = *(undefined4 *)((int)pdVar11 + -0x27c);
        Vec3_dtor((undefined1 *)((int)pdVar11 + -0x13c),0xffffffff,uVar1,pcVar10);
        if (*(int *)((int)pdVar11 + -0x1dc) != 0) {
          pcVar7 = vec3_copy_8c02b5fc;
          vec3_copy_8c02b5fc((undefined1 *)((int)pdVar11 + -0x148),*(undefined4 *)(ar5[1] + 4),
                             vec3_copy_8c02b5fc,pcVar10);
          *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0x158);
          puVar4 = (undefined1 *)((int)pdVar11 + -0x148);
          pcVar10 = FUN_8c023484;
          FUN_8c023484((undefined1 *)((int)pdVar11 + -0x5c),puVar4,pcVar7,FUN_8c023484,
                       *(undefined4 *)((int)pdVar11 + -800));
          pcVar7 = Vec3_length;
          uVar1 = Vec3_length((undefined1 *)((int)pdVar11 + -0x158),puVar4,Vec3_length,pcVar10);
          *(undefined4 *)((int)pdVar11 + -0x280) = uVar1;
          Vec3_assign(ar4 + 0x14,*(undefined4 *)((int)pdVar11 + -0x280),pcVar7,pcVar10);
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0x158),0xffffffff,pcVar7,pcVar10);
          pcVar10 = object_dtor_delete;
          object_dtor_delete((undefined1 *)((int)pdVar11 + -0x148),0xffffffff,pcVar7,
                             object_dtor_delete);
        }
        puVar4 = (undefined1 *)((int)pdVar11 + -0x5c);
        pcVar7 = Vec3_length_sq;
        Vec3_length_sq(puVar4,Vec3_length_sq,puVar4,pcVar10);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x284) = (int)(uVar13 >> 0x20);
          uVar15 = CONCAT44(*(undefined4 *)((int)pdVar11 + -0x284),(int)uVar13);
          *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)((int)pdVar11 + -0x284);
        }
        else {
          *(ulonglong *)((int)pdVar11 + -0x284) = uVar13;
          uVar15 = *(undefined8 *)((int)pdVar11 + -0x284);
          *(undefined8 *)(ar4 + 0x28) = uVar15;
        }
        CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar7,puVar4,pcVar10);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x288) = (int)((ulonglong)uVar15 >> 0x20);
          dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x288),(int)uVar15);
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x288) = uVar15;
          dVar17 = *(double *)((int)pdVar11 + -0x288);
        }
        if (in_FPSCR_PR == '\0') {
          iVar3 = (int)(float)((ulonglong)dVar17 >> 0x20);
        }
        else {
          iVar3 = (int)dVar17;
        }
        if ((iVar3 == 0x127) && (ar5[2] == 1)) {
          pcVar10 = (code *)(uint)ar5[6];
          puVar4 = *(undefined1 **)ar5[1];
          FUN_8c033474(ar4,3,puVar4,pcVar10);
        }
        Vec3_dtor((undefined1 *)((int)pdVar11 + -0x5c),0xffffffff,puVar4,pcVar10);
        pcVar7 = (code *)((int)pdVar11 + -0x4c);
        Vec3_dtor(pcVar7,0xffffffff,pcVar7,pcVar10);
      }
      break;
    case 0x12:
      if (*(int *)(ar4 + 0x128) < 7) {
        *(undefined4 *)((int)pdVar11 + -0x1c4) = 2;
        Vec3_dtor((undefined1 *)((int)pdVar11 + -0x20),0xffffffff,2,pcVar10);
        return *(undefined4 *)((int)pdVar11 + -0x1c4);
      }
      Vec3_assign((undefined1 *)((int)pdVar11 + -0x20),&DAT_8c125e98,0x21,pcVar10);
      (**(code **)(*(int *)(uint)ar5[6] + 0x128))
                ((int *)(uint)ar5[6],(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar11 + -0x25c) = (int)(uVar13 >> 0x20);
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)((int)pdVar11 + -0x25c));
        dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1c),(int)uVar13);
      }
      else {
        *(ulonglong *)((int)pdVar11 + -0x25c) = uVar13;
        in_xd14 = *(undefined8 *)((int)pdVar11 + -0x25c);
        dVar17 = *(double *)((int)pdVar11 + -0x1c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar19 = (float)((ulonglong)dVar17 >> 0x20) < SUB84(in_dr14,0);
      }
      else {
        bVar19 = dVar17 < in_dr14;
      }
      if (bVar19) {
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)pdVar11 + -0x1c) = SUB84(in_dr14,0);
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x1c) = in_xd14;
        }
      }
      *(undefined4 *)((int)pdVar11 + -800) = *ar5;
      *(undefined4 *)((int)pdVar11 + -0x324) = ar5[6];
      *(undefined4 *)((int)pdVar11 + -0x328) = ar5[4];
      *(undefined4 *)((int)pdVar11 + -0x32c) = *(undefined4 *)(ar5[1] + 4);
      pcVar10 = (code *)&DAT_8c125ea8;
      pcVar7 = (code *)((int)pdVar11 + -0x20);
      uVar1 = FUN_8c07c5f8(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,&DAT_8c125ea8);
      *(undefined4 *)((int)pdVar11 + -0x260) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -0x260);
      break;
    case 0x13:
      if (*(int *)(ar4 + 0x128) < 7) {
        *(undefined4 *)((int)pdVar11 + -0x1cc) = 2;
        Vec3_dtor((undefined1 *)((int)pdVar11 + -0x20),0xffffffff,0x21,pcVar10);
        return *(undefined4 *)((int)pdVar11 + -0x1cc);
      }
      *(undefined4 *)((int)pdVar11 + -800) = ar5[6];
      pcVar10 = (code *)*ar5;
      uVar1 = FUN_8c07e828(ar4,*(undefined4 *)(uint)ar5[1],*(undefined4 *)(ar5[1] + 4),pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x268) = uVar1;
      pcVar7 = *(code **)((int)pdVar11 + -0x268);
      ar7_01 = pcVar7;
      break;
    case 0x14:
      if (*(int *)(ar4 + 100) == 1) {
        if (in_FPSCR_SZ == '\0') {
          fVar12 = *(float *)((int)pdVar11 + -0x20);
          pcVar10 = (code *)0x447a0000;
        }
        else {
          fVar12 = 1000.0;
          pcVar10 = FUN_8c07bec4;
        }
        if (in_FPSCR_PR == '\0' && (float)(uint)pcVar10 < fVar12) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)pdVar11 + -0x20) = 0x447a0000;
          }
          else {
            *(undefined8 *)((int)pdVar11 + -0x20) = 0x8c07bec4447a0000;
          }
        }
        pcVar10 = (code *)(uint)ar5[6];
        pcVar7 = (code *)((int)pdVar11 + -0x20);
        uVar1 = FUN_8c07bec4(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x224) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x224);
      }
      else if (*(int *)(ar4 + 0x21c) == 1) {
        *(undefined4 *)((int)pdVar11 + -0x2d0) = *(undefined4 *)(ar4 + 0x128);
        FUN_8c031b68(ar4,(*(int *)((int)pdVar11 + -0x2d0) * 2 + *(int *)((int)pdVar11 + -0x2d0)) * 8
                         + -0x73d7f14c,
                     (*(int *)((int)pdVar11 + -0x2d0) * 2 + *(int *)((int)pdVar11 + -0x2d0)) * 8,
                     pcVar10);
        *(int *)((int)pdVar11 + -0x2d4) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(0x3f000000,
                                    *(undefined4 *)(*(int *)((int)pdVar11 + -0x2d4) + 0x38));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x2d4) + 0x38);
          dVar17 = 1.62172699419915e-311;
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar17,0) * (float)((ulonglong)dVar17 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar17 * dVar17,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar11 + -0x2d4) + 0x38) = fVar12;
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar11 + -0x2d4) + 0x38) = in_xd0;
        }
        pcVar10 = (code *)(uint)ar5[1];
        pcVar7 = *(code **)pcVar10;
        puVar4 = (undefined1 *)((int)pdVar11 + -0x20);
        FUN_8c031c74(ar4,puVar4,pcVar7,pcVar10);
        uVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,puVar4,pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x228) = uVar1;
        if (*(int *)((int)pdVar11 + -0x228) == 1) {
          uVar1 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          pcVar10 = (code *)(ar4 + 0xb0);
          pcVar7 = s_CAnimBody_SetFrame_033e6e;
          s_CAnimBody_SetFrame_033e6e(pcVar10,uVar1,s_CAnimBody_SetFrame_033e6e,pcVar10);
        }
        else if (*(int *)(ar4 + 0x40) == 0) {
          *(undefined4 *)((int)pdVar11 + -0x2d8) = *(undefined4 *)(ar4 + 0x128);
          pcVar7 = (code *)0x8c280eb4;
          FUN_8c031b68(ar4,(*(int *)((int)pdVar11 + -0x2d8) * 2 + *(int *)((int)pdVar11 + -0x2d8)) *
                           8 + -0x73d7f14c,0x8c280eb4,pcVar10);
          *(undefined4 *)(ar4 + 300) = 0;
          *(undefined4 *)(ar4 + 0x2a0) = 2;
          ar7_01 = (code *)0x0;
        }
      }
      else {
        iVar3 = *(int *)(uint)ar5[6];
        (**(code **)(iVar3 + 0x184))((int *)(uint)ar5[6],iVar3,0x21,pcVar10);
        uVar5 = SUB84(in_dr14,0);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x22c) = (int)(uVar13 >> 0x20);
          fVar12 = *(float *)((int)pdVar11 + -0x22c);
          fVar16 = 900.0;
        }
        else {
          *(ulonglong *)((int)pdVar11 + -0x22c) = uVar13;
          fVar12 = 900.0;
          fVar16 = 1.07059e-42;
        }
        if (in_FPSCR_PR == '\0' && fVar12 < fVar16) {
          if (in_FPSCR_SZ == '\0') {
            fVar12 = *(float *)((int)pdVar11 + -0x20);
          }
          pcVar10 = (code *)&DAT_8c125be0;
          if (in_FPSCR_SZ != '\0') {
            fVar12 = 0.0;
          }
          if (in_FPSCR_PR == '\0' && fVar12 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)((int)pdVar11 + -0x20) = 0;
            }
            else {
              fVar12 = 0.0;
              *(undefined8 *)((int)pdVar11 + -0x20) = 0;
            }
          }
        }
        iVar3 = ar5[3];
        pdVar2 = (double *)(iVar3 + 8);
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(*(undefined4 *)pdVar2,uVar1);
          dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar12);
        }
        else {
          dVar17 = *pdVar2;
          dVar14 = *(double *)(ar4 + 0x48);
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) -
                                    (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar17,0));
        }
        else {
          dVar17 = dVar17 - dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x18) = (int)((ulonglong)dVar17 >> 0x20);
        }
        else {
          *(double *)((int)pdVar11 + -0x18) = dVar17;
        }
        a5 = *(int *)(uint)ar5[6];
        (**(code **)(a5 + 0x184))((int *)(uint)ar5[6],a5,iVar3,pcVar10);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x230) = (int)((ulonglong)dVar14 >> 0x20);
          dVar18 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x230),uVar5);
          dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),SUB84(dVar14,0));
        }
        else {
          *(double *)((int)pdVar11 + -0x230) = dVar14;
          dVar18 = *(double *)((int)pdVar11 + -0x230);
          dVar14 = *(double *)(ar4 + 0x48);
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) -
                                    (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar18,0));
        }
        else {
          dVar18 = dVar18 - dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1c),SUB84(dVar14,0));
        }
        else {
          dVar14 = *(double *)((int)pdVar11 + -0x1c);
        }
        fVar12 = (float)((ulonglong)dVar18 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar19 = fVar12 < (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          bVar19 = dVar18 < dVar14;
        }
        if (bVar19) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)pdVar11 + -0x1c) = fVar12;
          }
          else {
            *(double *)((int)pdVar11 + -0x1c) = dVar18;
          }
        }
        (**(code **)(*(int *)(uint)ar5[6] + 0x128))
                  ((int *)(uint)ar5[6],(undefined1 *)((int)pdVar11 + -0x20),
                   (undefined1 *)((int)pdVar11 + -0x20),ar4 + 0x48);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x234) = (int)((ulonglong)dVar14 >> 0x20);
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),*(undefined4 *)(ar4 + 0x48));
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x234),SUB84(dVar14,0));
        }
        else {
          *(double *)((int)pdVar11 + -0x234) = dVar14;
          in_xd12 = *(undefined8 *)(ar4 + 0x48);
          dVar14 = *(double *)((int)pdVar11 + -0x234);
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                    SUB84(dVar17,0) + (float)((ulonglong)dVar14 >> 0x20));
        }
        else {
          dVar17 = dVar17 + dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1c),SUB84(dVar14,0));
        }
        else {
          dVar14 = *(double *)((int)pdVar11 + -0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          bVar19 = (float)((ulonglong)dVar14 >> 0x20) < SUB84(dVar17,0);
        }
        else {
          bVar19 = dVar14 < dVar17;
        }
        if (bVar19) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)pdVar11 + -0x1c) = SUB84(dVar17,0);
          }
          else {
            *(undefined8 *)((int)pdVar11 + -0x1c) = in_xd12;
          }
        }
        *(undefined4 *)((int)pdVar11 + -800) = ar5[6];
        pcVar10 = (code *)(uint)ar5[3];
        pcVar7 = (code *)((int)pdVar11 + -0x20);
        uVar1 = FUN_8c07baa0(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x238) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x238);
      }
      break;
    case 0x16:
      pcVar10 = (code *)0x0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      pcVar7 = *(code **)ar5[1];
      FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      ar7_01 = (code *)0x0;
      break;
    case 0x18:
      vec3_copy_8c02b5fc((undefined1 *)((int)pdVar11 + -0x1b0),*(undefined4 *)(ar5[1] + 4),0x21,
                         pcVar10);
      *(undefined4 *)((int)pdVar11 + -800) = 0;
      *(undefined1 **)((int)pdVar11 + -0x324) = (undefined1 *)((int)pdVar11 + -0x1b0);
      pcVar10 = (code *)(uint)ar5[6];
      pcVar7 = (code *)*ar5;
      uVar1 = FUN_8c07d048(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x2b4) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -0x2b4);
      object_dtor_delete((undefined1 *)((int)pdVar11 + -0x1b0),0xffffffff,pcVar7,pcVar10);
      break;
    case 0x19:
      *(undefined4 *)(ar4 + 0x214) = 0;
      iVar3 = *(int *)(ar4 + 300);
      if ((iVar3 < 5) && (-1 < iVar3)) {
        switch((&switchdata_8c071f8e_8c071f9c)[iVar3]) {
        case 0x8c071fb0:
          uVar6 = ar5[6];
          uVar5 = *(undefined4 *)(uint)ar5[1];
          uVar1 = 0x1e;
          FUN_8c033474(ar4,0x1e,uVar5,uVar6);
          FUN_8c031748(ar4,uVar1,uVar5,uVar6);
          if (*(int *)(ar4 + 100) == 1) {
            uVar1 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0);
          }
          else {
            uVar1 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
          }
          puVar8 = &DAT_8c125e68;
          pcVar10 = FUN_8c023334;
          uVar5 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,FUN_8c023334,uVar1);
          *(undefined4 *)((int)pdVar11 + -0x1fc) = uVar5;
          *(undefined4 *)(ar4 + 0x220) = *(undefined4 *)((int)pdVar11 + -0x1fc);
          if (*(int *)(ar4 + 0x220) == 3) {
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,puVar8,pcVar10,uVar1);
          }
          else {
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,puVar8,0xb0,uVar1);
          }
          *(int *)((int)pdVar11 + -700) = ar4;
          pcVar10 = *(code **)((int)pdVar11 + -700);
          *(int *)(*(int *)((int)pdVar11 + -700) + 300) = *(int *)(pcVar10 + 300) + 1;
        case 0x8c0720b0:
          if (*(int *)(ar4 + 0x40) == 0) {
            *(int *)((int)pdVar11 + -0x2c0) = ar4;
            *(int *)(*(int *)((int)pdVar11 + -0x2c0) + 300) =
                 *(int *)(*(int *)((int)pdVar11 + -0x2c0) + 300) + 1;
          }
          break;
        case 0x8c0720ec:
          if (*(int *)(ar4 + 0x220) == 3) {
            uVar1 = s_CAnimBody_AdvanceFrame_033ba0
                              (ar4 + 0xb0,(&switchdata_8c071f8e_8c071f9c)[iVar3],
                               s_CAnimBody_AdvanceFrame_033ba0,pcVar10);
            *(undefined4 *)((int)pdVar11 + -0x200) = uVar1;
            if (*(int *)((int)pdVar11 + -0x200) == 1) {
              *(undefined4 *)(ar4 + 0x214) = 1;
              uVar1 = rand_range(ar4,0,100,pcVar10);
              *(undefined4 *)((int)pdVar11 + -0x204) = uVar1;
              if (*(int *)((int)pdVar11 + -0x204) < 0x32) {
                *(int *)((int)pdVar11 + -0x2c4) = ar4;
                pcVar10 = *(code **)((int)pdVar11 + -0x2c4);
                *(int *)(*(int *)((int)pdVar11 + -0x2c4) + 300) = *(int *)(pcVar10 + 300) + 1;
              }
              else {
                ar7_01 = (code *)0x0;
                *(undefined4 *)(ar4 + 300) = 0;
              }
            }
          }
          else {
            uVar1 = 0xb0;
            s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,0x21,pcVar10);
            CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,pcVar7,pcVar10);
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)pdVar11 + -0x208) = (int)(uVar13 >> 0x20);
              uVar13 = (ulonglong)*(uint *)((int)pdVar11 + -0x208);
            }
            else {
              *(ulonglong *)((int)pdVar11 + -0x208) = uVar13;
            }
            if (in_FPSCR_PR != '\0' || (float)uVar13 <= 0.0) {
              pcVar10 = s_CAnimBody_SetFrame_033e6e;
              s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,pcVar7,s_CAnimBody_SetFrame_033e6e);
              *(undefined4 *)(ar4 + 0x214) = 1;
              uVar1 = rand_range(ar4,0,100,pcVar10);
              *(undefined4 *)((int)pdVar11 + -0x20c) = uVar1;
              pcVar10 = *(code **)((int)pdVar11 + -0x20c);
              if ((int)pcVar10 < 0x32) {
                *(int *)((int)pdVar11 + -0x2c8) = ar4;
                *(int *)(*(int *)((int)pdVar11 + -0x2c8) + 300) =
                     *(int *)(*(int *)((int)pdVar11 + -0x2c8) + 300) + 1;
              }
              else {
                ar7_01 = (code *)0x0;
                *(undefined4 *)(ar4 + 300) = 0;
              }
            }
          }
          break;
        case 0x8c072254:
          if (*(int *)(ar4 + 0x128) == 6) {
            pcVar7 = (code *)0xffffffff;
            uVar1 = 0x26;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x26,0xffffffff,0);
          }
          else {
            pcVar7 = (code *)0xffffffff;
            uVar1 = 0x30;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x30,0xffffffff,0);
          }
          pcVar10 = s_CAnimBody_SetFrame_033e6e;
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,pcVar7,s_CAnimBody_SetFrame_033e6e);
          *(int *)((int)pdVar11 + -0x2cc) = ar4;
          *(int *)(*(int *)((int)pdVar11 + -0x2cc) + 300) =
               *(int *)(*(int *)((int)pdVar11 + -0x2cc) + 300) + 1;
        case 0x8c0722d2:
          uVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,pcVar7,pcVar10);
          *(undefined4 *)((int)pdVar11 + -0x210) = uVar1;
          if (*(int *)((int)pdVar11 + -0x210) == 1) {
            ar7_01 = (code *)0x0;
            *(undefined4 *)(ar4 + 300) = 0;
            uVar1 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
            pcVar10 = (code *)(ar4 + 0xb0);
            s_CAnimBody_SetFrame_033e6e(pcVar10,uVar1,s_CAnimBody_SetFrame_033e6e,pcVar10);
          }
        }
      }
      pcVar7 = *(code **)ar5[1];
      FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      break;
    case 0x1a:
      FUN_8c031748(ar4,ar5_00,0x21,pcVar10);
      if (*(int *)(ar4 + 100) == 1) {
        pcVar10 = (code *)0x0;
        uVar5 = 0xffffffff;
        uVar1 = 0x1d;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0);
      }
      else {
        pcVar10 = (code *)0x0;
        uVar5 = 0xffffffff;
        uVar1 = 8;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
      }
      FUN_8c032ab0(ar4,uVar1,uVar5,pcVar10);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar11 + -0x1f8) = (int)(uVar13 >> 0x20);
      }
      else {
        *(ulonglong *)((int)pdVar11 + -0x1f8) = uVar13;
      }
      s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar1,uVar5,pcVar10);
      pcVar7 = *(code **)ar5[1];
      FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      break;
    case 0x1b:
      pcVar7 = *(code **)ar5[1];
      FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      if (*(int *)(ar4 + 100) == 1) {
        pcVar7 = FUN_8c07dc50;
        uVar1 = FUN_8c07dc50(ar4,*ar5,FUN_8c07dc50,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x2ac) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x2ac);
      }
      else {
        uVar1 = FUN_8c07d904(ar4,*ar5,pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x2b0) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x2b0);
      }
      break;
    case 0x1d:
      if (*(int *)(ar4 + 0x128) < 7) {
        *(undefined4 *)((int)pdVar11 + -0x1c8) = 2;
        Vec3_dtor((undefined1 *)((int)pdVar11 + -0x20),0xffffffff,0x21,pcVar10);
        return *(undefined4 *)((int)pdVar11 + -0x1c8);
      }
      *(undefined4 *)((int)pdVar11 + -800) = *ar5;
      *(undefined4 *)((int)pdVar11 + -0x324) = ar5[6];
      *(undefined4 *)((int)pdVar11 + -0x328) = *(undefined4 *)(ar4 + 100);
      pcVar10 = *(code **)(ar5[1] + 4);
      pcVar7 = (code *)&DAT_8c125eb8;
      uVar1 = FUN_8c07e460(ar4,*(undefined4 *)(uint)ar5[1],&DAT_8c125eb8,pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x264) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -0x264);
      break;
    case 0x1e:
      pcVar7 = *(code **)ar5[1];
      puVar4 = (undefined1 *)((int)pdVar11 + -0x20);
      FUN_8c031c74(ar4,puVar4,pcVar7,pcVar10);
      uVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,puVar4,pcVar7,pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x220) = uVar1;
      pcVar10 = *(code **)((int)pdVar11 + -0x220);
      if (pcVar10 == (code *)0x1) {
        pcVar7 = (code *)0x0;
        ar7_01 = (code *)0x0;
      }
      break;
    case 0x1f:
      if (*(int *)(ar4 + 100) == 1) {
        pcVar7 = (code *)0x0;
        ar7_01 = (code *)0x0;
      }
      else {
        *(undefined4 *)((int)pdVar11 + -800) = ar5[3];
        pcVar10 = (code *)(uint)ar5[6];
        pcVar7 = (code *)((int)pdVar11 + -0x20);
        uVar1 = FUN_8c07f56c(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10,
                             *(undefined4 *)((int)pdVar11 + -800));
        *(undefined4 *)((int)pdVar11 + -500) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -500);
      }
      break;
    case 0x20:
      vec3_copy_8c02b5fc((undefined1 *)((int)pdVar11 + -0x1bc),*(undefined4 *)(ar5[1] + 4),0x21,
                         pcVar10);
      *(undefined4 *)((int)pdVar11 + -800) = 1;
      *(undefined1 **)((int)pdVar11 + -0x324) = (undefined1 *)((int)pdVar11 + -0x1bc);
      uVar1 = FUN_8c07d048(ar4,*(undefined4 *)(uint)ar5[1],*ar5,ar5[6]);
      *(undefined4 *)((int)pdVar11 + -0x2b8) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -0x2b8);
      pcVar7 = (code *)0xffffffff;
      pcVar10 = ar7_01;
      object_dtor_delete((undefined1 *)((int)pdVar11 + -0x1bc),0xffffffff,0xffffffff,ar7_01);
    }
  }
  if ((((*(int *)(ar4 + 0x124) != 0x12) && (*(int *)(ar4 + 0x124) != 0x18)) &&
      (*(int *)(ar4 + 0x124) != 0x20)) &&
     (((*(int *)(ar4 + 0x124) != 0x1d && (*(int *)(ar4 + 0x124) != 0x11)) &&
      (*(int *)(ar4 + 0x2ac) == 0)))) {
    pcVar7 = (code *)(ar4 + 0x14);
    Vec3_assign(ar4 + 0x80,pcVar7,pcVar7,pcVar10);
  }
  *(code **)((int)pdVar11 + -0x1d0) = ar7_01;
  Vec3_dtor((undefined1 *)((int)pdVar11 + -0x20),0xffffffff,pcVar7,pcVar10);
  return *(undefined4 *)((int)pdVar11 + -0x1d0);
}

__asm__(".globl _FUN_8c071a38\n.set _FUN_8c071a38, _FUN_8c071a38_def\n");
