#include "../decls.h"
int FUN_8c23c4cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  uint unaff_r10;
  int unaff_r11;
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 extraout_fr1;
  float extraout_fr0;
  float fVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_xd2;
  undefined8 uVar8;
  undefined8 in_xd14;
  undefined4 in_PR;
  int iVar9;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = auStack_4;
  }
  else {
    puVar3 = auStack_8;
  }
  *(undefined4 *)(puVar3 + -4) = in_PR;
  iVar1 = *(int *)(ain0 + unaff_r11);
  uVar7 = 0x3f800000;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    iVar2 = *(int *)(*(int *)(iVar1 * 4 + unaff_r11) * 4 + -0x73b3ee20);
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(_DAT_8c4c11a4,*(undefined4 *)(iVar2 + 200));
    }
    else {
      in_xd2 = *(undefined8 *)(iVar2 + 200);
      dVar5 = (double)CONCAT44(_DAT_8c4c11a8,_DAT_8c4c11a4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0xf8) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11a8,*(undefined4 *)(iVar2 + 0xcc));
    }
    else {
      *(double *)(iVar2 + 0xf8) = dVar5;
      in_xd2 = *(undefined8 *)(iVar2 + 0xcc);
      dVar5 = (double)CONCAT44(_DAT_8c4c11ac,_DAT_8c4c11a8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0xfc) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11ac,*(undefined4 *)(iVar2 + 0xd0));
    }
    else {
      *(double *)(iVar2 + 0xfc) = dVar5;
      in_xd2 = *(undefined8 *)(iVar2 + 0xd0);
      dVar5 = (double)CONCAT44(_DAT_8c4c11b0,_DAT_8c4c11ac);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x100) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11b4,*(undefined4 *)(iVar2 + 0xd8));
    }
    else {
      *(double *)(iVar2 + 0x100) = dVar5;
      in_xd2 = *(undefined8 *)(iVar2 + 0xd8);
      dVar5 = (double)CONCAT44(_DAT_8c4c11b8,_DAT_8c4c11b4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x108) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11b8,*(undefined4 *)(iVar2 + 0xdc));
    }
    else {
      *(double *)(iVar2 + 0x108) = dVar5;
      in_xd2 = *(undefined8 *)(iVar2 + 0xdc);
      dVar5 = (double)CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x10c) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11bc,*(undefined4 *)(iVar2 + 0xe0));
    }
    else {
      *(double *)(iVar2 + 0x10c) = dVar5;
      in_xd2 = *(undefined8 *)(iVar2 + 0xe0);
      dVar5 = (double)CONCAT44(_DAT_8c4c11c0,_DAT_8c4c11bc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x110) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11c4,*(undefined4 *)(iVar2 + 0xe8));
    }
    else {
      *(double *)(iVar2 + 0x110) = dVar5;
      in_xd2 = *(undefined8 *)(iVar2 + 0xe8);
      dVar5 = (double)CONCAT44(_DAT_8c4c11c8,_DAT_8c4c11c4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x118) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11c8,*(undefined4 *)(iVar2 + 0xec));
    }
    else {
      *(double *)(iVar2 + 0x118) = dVar5;
      in_xd2 = *(undefined8 *)(iVar2 + 0xec);
      dVar5 = (double)CONCAT44(_DAT_8c4c11cc,_DAT_8c4c11c8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x11c) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11cc,*(undefined4 *)(iVar2 + 0xf0));
      uVar8 = in_xd2;
    }
    else {
      *(double *)(iVar2 + 0x11c) = dVar5;
      uVar8 = *(undefined8 *)(iVar2 + 0xf0);
      dVar5 = (double)CONCAT44(_DAT_8c4c11d0,_DAT_8c4c11cc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    uVar6 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar2 + 0x120) = uVar6;
      *(undefined4 *)(iVar2 + 0x114) = *(undefined4 *)(iVar2 + 0xe4);
      dVar5 = (double)CONCAT44(uVar6,_DAT_8c4c11d0);
    }
    else {
      *(double *)(iVar2 + 0x120) = dVar5;
      *(undefined8 *)(iVar2 + 0x114) = *(undefined8 *)(iVar2 + 0xe4);
      uVar8 = CONCAT44((*(uint *)0x8c4c11d4),_DAT_8c4c11d0);
    }
    if (in_FPSCR_PR == '\0') {
      iVar9 = (int)SUB84(dVar5,0);
    }
    else {
      iVar9 = (int)dVar5;
    }
    *(int *)(iVar2 + 0x88) = iVar9;
    ain0 = 0x124;
    in_xd2 = uVar8;
    if ((*(uint *)(iVar2 + 0x124) & unaff_r10) != 0) {
      FUN_8c23a8d8(*(undefined4 *)(iVar2 + 0x88),ar5,ar6,ar7,*(undefined4 *)(puVar3 + -4));
      in_xd2 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),uVar7);
        in_xd2 = uVar8;
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) / extraout_fr0;
      }
      else {
        fVar4 = SUB84(dVar5 / (double)CONCAT44(extraout_fr0,extraout_fr1),0);
      }
      ain0 = 0x80;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(iVar2 + 0x80) = fVar4;
      }
      else {
        *(undefined8 *)(iVar2 + 0x80) = in_xd2;
      }
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c23c4cc\n.set _FUN_8c23c4cc, _FUN_8c23c4cc_def\n");
