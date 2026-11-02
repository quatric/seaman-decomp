#include "../decls.h"
undefined4 FUN_8c23c4ba_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_fr1;
  float extraout_fr0;
  float fVar4;
  double dVar5;
  undefined4 uVar6;
  undefined8 in_xd2;
  undefined8 uVar7;
  undefined8 in_xd14;
  int iVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar1 = 0x80;
  uVar6 = 0x3f800000;
  iVar2 = _DAT_8c4c1300;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    iVar3 = *(int *)(*(int *)(iVar2 * 4 + -0x73b3ed80) * 4 + -0x73b3ee20);
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(_DAT_8c4c11a4,*(undefined4 *)(iVar3 + 200));
    }
    else {
      in_xd2 = *(undefined8 *)(iVar3 + 200);
      dVar5 = (double)CONCAT44(_DAT_8c4c11a8,_DAT_8c4c11a4);
    }
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(iVar3 + 0xf8) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11a8,*(undefined4 *)(iVar3 + 0xcc));
    }
    else {
      *(double *)(iVar3 + 0xf8) = dVar5;
      in_xd2 = *(undefined8 *)(iVar3 + 0xcc);
      dVar5 = (double)CONCAT44(_DAT_8c4c11ac,_DAT_8c4c11a8);
    }
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(iVar3 + 0xfc) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11ac,*(undefined4 *)(iVar3 + 0xd0));
    }
    else {
      *(double *)(iVar3 + 0xfc) = dVar5;
      in_xd2 = *(undefined8 *)(iVar3 + 0xd0);
      dVar5 = (double)CONCAT44(_DAT_8c4c11b0,_DAT_8c4c11ac);
    }
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(iVar3 + 0x100) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11b4,*(undefined4 *)(iVar3 + 0xd8));
    }
    else {
      *(double *)(iVar3 + 0x100) = dVar5;
      in_xd2 = *(undefined8 *)(iVar3 + 0xd8);
      dVar5 = (double)CONCAT44(_DAT_8c4c11b8,_DAT_8c4c11b4);
    }
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(iVar3 + 0x108) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11b8,*(undefined4 *)(iVar3 + 0xdc));
    }
    else {
      *(double *)(iVar3 + 0x108) = dVar5;
      in_xd2 = *(undefined8 *)(iVar3 + 0xdc);
      dVar5 = (double)CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
    }
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(iVar3 + 0x10c) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11bc,*(undefined4 *)(iVar3 + 0xe0));
    }
    else {
      *(double *)(iVar3 + 0x10c) = dVar5;
      in_xd2 = *(undefined8 *)(iVar3 + 0xe0);
      dVar5 = (double)CONCAT44(_DAT_8c4c11c0,_DAT_8c4c11bc);
    }
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(iVar3 + 0x110) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11c4,*(undefined4 *)(iVar3 + 0xe8));
    }
    else {
      *(double *)(iVar3 + 0x110) = dVar5;
      in_xd2 = *(undefined8 *)(iVar3 + 0xe8);
      dVar5 = (double)CONCAT44(_DAT_8c4c11c8,_DAT_8c4c11c4);
    }
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(iVar3 + 0x118) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11c8,*(undefined4 *)(iVar3 + 0xec));
    }
    else {
      *(double *)(iVar3 + 0x118) = dVar5;
      in_xd2 = *(undefined8 *)(iVar3 + 0xec);
      dVar5 = (double)CONCAT44(_DAT_8c4c11cc,_DAT_8c4c11c8);
    }
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(iVar3 + 0x11c) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11cc,*(undefined4 *)(iVar3 + 0xf0));
      uVar7 = in_xd2;
    }
    else {
      *(double *)(iVar3 + 0x11c) = dVar5;
      uVar7 = *(undefined8 *)(iVar3 + 0xf0);
      dVar5 = (double)CONCAT44(_DAT_8c4c11d0,_DAT_8c4c11cc);
    }
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    uVar1 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if (cVar10 == '\0') {
      *(undefined4 *)(iVar3 + 0x120) = uVar1;
      *(undefined4 *)(iVar3 + 0x114) = *(undefined4 *)(iVar3 + 0xe4);
      dVar5 = (double)CONCAT44(uVar1,_DAT_8c4c11d0);
    }
    else {
      *(double *)(iVar3 + 0x120) = dVar5;
      *(undefined8 *)(iVar3 + 0x114) = *(undefined8 *)(iVar3 + 0xe4);
      uVar7 = CONCAT44((*(uint *)0x8c4c11d4),_DAT_8c4c11d0);
    }
    if (cVar9 == '\0') {
      iVar8 = (int)SUB84(dVar5,0);
    }
    else {
      iVar8 = (int)dVar5;
    }
    *(int *)(iVar3 + 0x88) = iVar8;
    uVar1 = 0x124;
    in_xd2 = uVar7;
    if ((*(uint *)(iVar3 + 0x124) & 0x38) != 0) {
      FUN_8c23a8d8(*(undefined4 *)(iVar3 + 0x88),ar5,ar6,ar7,0x70);
      in_xd2 = in_xd14;
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),uVar6);
        in_xd2 = uVar7;
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar5,0) / extraout_fr0;
      }
      else {
        fVar4 = SUB84(dVar5 / (double)CONCAT44(extraout_fr0,extraout_fr1),0);
      }
      uVar1 = 0x80;
      if (cVar10 == '\0') {
        *(float *)(iVar3 + 0x80) = fVar4;
      }
      else {
        *(undefined8 *)(iVar3 + 0x80) = in_xd2;
      }
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c23c4ba\n.set _FUN_8c23c4ba, _FUN_8c23c4ba_def\n");
