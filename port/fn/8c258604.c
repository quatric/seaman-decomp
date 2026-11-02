#include "../decls.h"
undefined4 FUN_8c258604_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined *a4;
  undefined4 uVar5;
  undefined4 ar6_00;
  uint uVar6;
  int ar5_00;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined8 in_dr2;
  double dVar9;
  float fVar10;
  float in_fr13;
  float fVar11;
  undefined8 in_dr14;
  undefined8 uVar12;
  undefined8 in_xd12;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [4];
  undefined8 uStack_20;
  
  uVar8 = (undefined4)((ulonglong)in_dr2 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = CONCAT44((int)in_dr14,(undefined4)uStack_20);
                    
    (*(uint*)((uchar*)&uStack_20+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar7 = auStack_24;
  }
  else {
    puVar7 = auStack_30;
    uStack_20 = in_xd14;
  }
  *(undefined4 *)(puVar7 + -4) = in_PR;
  *(undefined4 *)(puVar7 + -8) = ar5;
  *(undefined4 *)(puVar7 + -0xc) = ar6;
  thunk_FUN_8c207f80(ar4,ar5,ar6,ar7);
  uVar5 = (undefined4)in_dr14;
  FUN_8c20aed8(1,ar5,ar6,ar7);
  piVar2 = 0x8c4aa508;
  *(undefined4 *)0x8c4aa4e8 = *(undefined4 *)(puVar7 + -8);
  ar5_00 = 0x8c4aa4a8;
  *(undefined4 *)0x8c4aa4ec = *(undefined4 *)(puVar7 + -0xc);
  *(uint *)(puVar7 + -0xc) = (int)0xfff & ar4;
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44((undefined4)DAT_8c258714,uVar5);
  }
  else {
    uVar12 = CONCAT44(0x8c4aa508,(undefined4)DAT_8c258714);
  }
  uVar5 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if ((ar4 & 0x10) == 0) {
    iVar4 = (int)0x140;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar5_00 + 4) = (undefined4)DAT_8c258720;
    }
    else {
      *(ulonglong *)(ar5_00 + 4) = CONCAT44((*(uint*)((uchar*)&DAT_8c258720+4)),(undefined4)DAT_8c258720);
    }
  }
  else {
    iVar4 = (int)0x280;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar5_00 + 4) = uVar5;
    }
    else {
      *(undefined8 *)(ar5_00 + 4) = uVar12;
    }
  }
  *piVar2 = iVar4;
  piVar3 = 0x8c4aa50c;
  fVar11 = (*(uint*)((uchar*)&DAT_8c258720+4));
  if (in_FPSCR_SZ != '\0') {
    in_xd12 = CONCAT44(DAT_8c258728,(*(uint*)((uchar*)&DAT_8c258720+4)));
    fVar11 = in_fr13;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44(uVar5,DAT_8c258728);
  }
  else {
    in_xd14 = CONCAT44(0x8c4aa50c,DAT_8c258728);
  }
  if ((ar4 & 0x20) == 0) {
    iVar4 = (int)0xf0;
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar5_00 + 8) = fVar11;
    }
    else {
      *(undefined8 *)(ar5_00 + 8) = in_xd12;
    }
  }
  else {
    iVar4 = (int)0x1e0;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar5_00 + 8) = (int)uVar12;
    }
    else {
      *(undefined8 *)(ar5_00 + 8) = in_xd14;
    }
  }
  *piVar3 = iVar4;
  if ((ar4 & 3) == 1) {
    aica_reg_258104(0,ar5,ar6,ar7);
    iVar4 = (int)0x280;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar5_00 + 4) = (int)((ulonglong)uVar12 >> 0x20);
    }
    else {
      *(undefined8 *)(ar5_00 + 4) = uVar12;
    }
    *piVar2 = iVar4;
    iVar4 = (int)0x1e0;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar5_00 + 8) = (int)uVar12;
    }
    else {
      *(undefined8 *)(ar5_00 + 8) = in_xd14;
    }
    *piVar3 = iVar4;
  }
  else {
    iVar4 = FUN_8c1f7ea8(ar4 & 3,ar5,ar6,ar7);
    if (iVar4 == 2) {
      iVar4 = (int)0x200;
    }
    else if (iVar4 == 3) {
      iVar4 = (int)0x300;
    }
    else if (iVar4 == 1) {
      iVar4 = (int)0x100;
    }
    else {
      iVar4 = (int)0x300;
    }
    aica_reg_258210(iVar4,ar5,ar6,ar7);
  }
  if ((0x10000 & ar4) == 0) {
    uVar8 = 0;
  }
  else {
    if (in_FPSCR_PR == '\0') {
      uVar8 = 0x40000000;
    }
    else {
      uVar8 = SUB84((double)CONCAT44(uVar8,0x3f800000) + (double)CONCAT44(uVar8,0x3f800000),0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar5_00 + 4),uVar8);
    }
    else {
      dVar9 = *(double *)(ar5_00 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) * SUB84(dVar9,0),SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 * dVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar5_00 + 4) = (int)((ulonglong)dVar9 >> 0x20);
      fVar10 = *(float *)(ar5_00 + 8);
    }
    else {
      *(double *)(ar5_00 + 4) = dVar9;
      fVar10 = (float)((ulonglong)*(undefined8 *)(ar5_00 + 8) >> 0x20);
    }
    uVar8 = 1;
    if (fVar10 == fVar11) {
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar5_00 + 8) = (int)uVar12;
      }
      else {
        *(undefined8 *)(ar5_00 + 8) = in_xd14;
      }
    }
  }
  iVar4 = *(int *)(puVar7 + -8);
  if (iVar4 == 0) {
    ar5_00 = 0;
  }
  else if (iVar4 == 1) {
    ar5_00 = 1;
  }
  else if (iVar4 == 3) {
    ar5_00 = 3;
  }
  else if (iVar4 == 4) {
    ar5_00 = 4;
  }
  else if (iVar4 == 5) {
    ar5_00 = 5;
  }
  *(undefined4 *)0x8c4aacd8 = *(undefined4 *)(&DATA_8c277ac8);
  if ((ar4 & 0x40) == 0) goto LAB_8c258846;
  uVar6 = 0xe0000 & ar4;
  *(undefined4 *)0x8c4aa6e0 = (int)(short)((int)uVar6 >> 0x11);
  FUN_8c2078d8((&FUN_8c258252),0,ar6,ar7);
  if (*piVar3 == (int)0xf0) {
    sVar1 = 0xf8;
    if (uVar6 != 0) {
      if (uVar6 == 0x20000) {
        iVar4 = (int)0x100;
LAB_8c25883e:
        *piVar3 = iVar4;
      }
      else {
        sVar1 = 0x108;
        if (uVar6 != 0x40000) {
          if (uVar6 == 0x60000) {
            iVar4 = (int)0x110;
            goto LAB_8c25883e;
          }
          sVar1 = 0x118;
          if (uVar6 != 0x80000) goto LAB_8c258846;
        }
        *piVar3 = (int)sVar1;
      }
      goto LAB_8c258846;
    }
  }
  else {
    sVar1 = 0x1f0;
    if (uVar6 != 0) {
      if (uVar6 != 0x20000) {
        sVar1 = 0x210;
        if (uVar6 != 0x40000) {
          if (uVar6 == 0x60000) {
            iVar4 = (int)0x220;
            goto LAB_8c25883e;
          }
          sVar1 = 0x230;
          if (uVar6 != 0x80000) goto LAB_8c258846;
        }
        *piVar3 = (int)sVar1;
        goto LAB_8c258846;
      }
      iVar4 = (int)0x200;
      goto LAB_8c25883e;
    }
  }
  *piVar3 = (int)sVar1;
LAB_8c258846:
  ar6_00 = 1;
  s_DisplayMode_207aaa(*(undefined4 *)(puVar7 + -0xc),ar5_00,1,uVar8);
  FUN_8c20a786(*(undefined4 *)0x8c4aa4ec,ar5_00,ar6_00,uVar8);
  *(undefined4 *)0x8c4aa6dc = 0;
  *(undefined4 *)0x8c4aa6d4 = 0;
  *(undefined4 *)0x8c4aa6d8 = 1;
  *(undefined4 *)0x8c4aa558 = 0;
  FUN_8c20757e((&FUN_8c258096),0,ar6_00,uVar8);
  uVar5 = 0;
  FUN_8c20786a((&FUN_8c2580b8),0,ar6_00,uVar8);
  a4 = (&FUN_8c2580c0);
  FUN_8c2078be((&FUN_8c2580c0),uVar5,ar6_00,uVar8);
  FUN_8c258ac0(a4,uVar5,ar6_00,uVar8);
  uVar8 = FUN_8c20aed8(0);
  return uVar8;
}

__asm__(".globl _FUN_8c258604\n.set _FUN_8c258604, _FUN_8c258604_def\n");
