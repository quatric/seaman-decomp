#include "../decls.h"
undefined4 FUN_8c0c3530_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  float *pfVar2;
  int iVar3;
  int ar6_00;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  double in_dr0;
  undefined8 in_dr4;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  float fStack_3c;
  undefined8 auStack_38 [4];
  
  cVar8 = '\0';
  cVar7 = '\0';
  if (DAT_8c43689c == '\0') {
    _DAT_8c436898 = 99;
    DAT_8c43689c = '\x01';
  }
  if (DAT_8c4368a4 == '\0') {
    _DAT_8c4368a0 = 0;
    DAT_8c4368a4 = '\x01';
  }
  if (DAT_8c4368ac == '\0') {
    _DAT_8c4368a8 = 0;
    DAT_8c4368ac = '\x01';
  }
  uVar4 = 4;
  ar6_00 = ar4 + 0x164;
  FUN_8c016318(ar4 + 0xc,ar4 + 0x34,ar6_00,4,ar6);
  iVar3 = ar4 + 0x174;
  FUN_8c016324(ar4 + 0xc,iVar3,ar6_00,uVar4);
  FUN_8c01538c(ar4 + 4,iVar3,ar6_00,uVar4);
  iVar3 = ar5;
  FUN_8c014a94(ar4 + 4,ar5,ar6_00,uVar4);
  FUN_8c01636c(ar4 + 0xc,iVar3,ar6_00,uVar4);
  if (ar5 < 7) {
    uVar5 = SUB84(in_dr0,0);
    switch((uint)ar5) {
    case 1:
      _DAT_8c4368a0 = 0x113;
      _DAT_8c4368a8 = 0x91;
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar5);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3aac(ar4,iVar3,ar6_00,uVar4);
      break;
    case 2:
      _DAT_8c4368a0 = 0x114;
      _DAT_8c4368a8 = 0xeb;
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar5);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,iVar3,ar6_00,uVar4);
      break;
    case 3:
      _DAT_8c4368a0 = 0xd5;
      _DAT_8c4368a8 = 0xe2;
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar5);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,iVar3,ar6_00,uVar4);
      break;
    case 4:
      _DAT_8c4368a0 = 0xda;
      _DAT_8c4368a8 = 0xec;
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar5);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3b10(ar4,iVar3,ar6_00,uVar4);
      break;
    case 5:
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar5);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,iVar3,ar6_00,uVar4);
      break;
    case 6:
      _DAT_8c4368a0 = 0xa7;
      _DAT_8c4368a8 = 0xc6;
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar5);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,iVar3,ar6_00,uVar4);
    }
  }
  if ((((ar5 == 1) || (ar5 == 4)) || (ar5 == 2)) || ((ar5 == 6 || (ar5 == 3)))) {
    uVar4 = libgcc_divide_helper_010284(ar6,6,ar6_00,uVar4);
    sVar1 = (short)uVar4 + 1;
    *(short *)(ar4 + 0x184) = sVar1 * 0x10;
    *(short *)(ar4 + 0x188) = sVar1 * 0x10;
    *(short *)(ar4 + 0x18c) = sVar1 * 0x10 + 0xf;
    *(short *)(ar4 + 400) = sVar1 * 0x10 + 0xf;
    *(undefined2 *)(ar4 + 0x186) = 0x5f;
    *(undefined2 *)(ar4 + 0x18a) = 0x40;
    *(undefined2 *)(ar4 + 0x18e) = 0x40;
    *(undefined2 *)(ar4 + 0x192) = 0x5f;
    for (iVar3 = 0; fVar6 = SUB84(in_dr0,0), iVar3 < 4; iVar3 = iVar3 + 1) {
      pfVar2 = (float *)(ar4 + iVar3 * 8 + 0x54);
      if (cVar8 == '\0') {
        fVar6 = *pfVar2;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar2;
      }
      if (cVar7 == '\0') {
        fVar6 = fVar6 + (float)((ulonglong)in_dr4 >> 0x20) + (float)_DAT_8c4368a0;
      }
      else {
        fVar6 = SUB84((double)_DAT_8c4368a0 + (double)_DAT_8c4368a0,0);
      }
      if (cVar8 == '\0') {
        (&fStack_3c)[iVar3 * 2] = fVar6;
      }
      else {
        *(undefined8 *)(&fStack_3c + iVar3 * 2) = in_xd0;
      }
      pfVar2 = (float *)(ar4 + iVar3 * 8 + 0x58);
      if (cVar8 == '\0') {
        fVar6 = *pfVar2;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar2;
      }
      if (cVar7 == '\0') {
        in_dr0 = (double)CONCAT44((float)_DAT_8c4368a8,fVar6 + (float)in_dr4 + (float)_DAT_8c4368a8)
        ;
      }
      else {
        in_dr0 = (double)_DAT_8c4368a8 + (double)_DAT_8c4368a8;
      }
      if (cVar8 == '\0') {
        *(int *)(auStack_38 + iVar3) = SUB84(in_dr0,0);
      }
      else {
        auStack_38[iVar3] = in_xd0;
      }
    }
    uVar4 = 4;
    ar6_00 = ar4 + 0x164;
    FUN_8c016318(ar4 + 0x20,&fStack_3c,ar6_00,4,ar6);
    iVar3 = ar4 + 0x184;
    FUN_8c016324(ar4 + 0x20,iVar3,ar6_00,uVar4);
    FUN_8c01538c(ar4 + 4,iVar3,ar6_00,uVar4);
    iVar3 = 0;
    FUN_8c014a94(ar4 + 4,0,ar6_00,uVar4);
    FUN_8c016340(ar4 + 0x20,iVar3,ar6_00,uVar4);
  }
  uVar4 = FUN_8c0c453c(ar4,iVar3,ar6_00,uVar4);
  return uVar4;
}

__asm__(".globl _FUN_8c0c3530\n.set _FUN_8c0c3530, _FUN_8c0c3530_def\n");
