#include "../decls.h"
undefined4 FUN_8c029510_def(int ar4,int ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  int ar6_00;
  int *piVar4;
  double dVar5;
  undefined4 in_fr15;
  double in_xd14;
  char cVar6;
  char cVar7;
  undefined4 in_stack_ffffffd4;
  undefined2 uVar8;
  undefined4 ain0;
  
  uVar8 = (undefined2)((uint)in_stack_ffffffd4 >> 0x10);
  cVar7 = '\0';
  cVar6 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  ain0 = CONCAT22(uVar8,(short)uVar1);
  piVar4 = (int *)(*(int *)(ar4 + 0x328) + (short)uVar1 * 0x124);
  uVar1 = 0x40;
  iVar3 = _DAT_8c27d1ec * 0x40 + -0x73d83e14;
  FUN_8c013fb4((_DAT_8c27d1ec + 1) * 0x40 + -0x73d83e14,iVar3,0x40,ar7);
  _DAT_8c27d1ec = _DAT_8c27d1ec + 1;
  FUN_8c256328(0,iVar3,uVar1,ar7,ain0);
  iVar3 = ar5;
  ar6_00 = ar6;
  FUN_8c029af0(ar4,ar5,ar6,ar7);
  if (*(int *)(ar5 + 4) != 0) {
    pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
    if (cVar7 == '\0') {
      in_fr15 = *(undefined4 *)pdVar2;
    }
    else {
      in_xd14 = *pdVar2;
    }
    pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
    dVar5 = in_xd14;
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(in_fr15,*(undefined4 *)(ar4 + 0x5c));
    }
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)pdVar2 = (int)((ulonglong)dVar5 >> 0x20);
    }
    else {
      *pdVar2 = dVar5;
    }
    if (*(int *)(ar4 + 0x344) == ar5) {
      iVar3 = ar5;
      FUN_8c029dec(ar4,ar5,ar6_00,ar7);
    }
    else if (*(int *)(ar4 + 0x348) == ar5) {
      ar7 = ar4 + 900;
      ar6_00 = ar4 + 0x374;
      iVar3 = ar4 + 0x364;
      FUN_8c02a2b8(ar4,iVar3,ar6_00,ar7);
      FUN_8c01538c(*piVar4 + 0x1f0,iVar3,ar6_00,ar7);
      iVar3 = ar4 + 900;
      FUN_8c029ca8(ar4,iVar3,ar6_00,ar7);
      FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),iVar3,ar6_00,ar7);
    }
    else if (*(int *)(ar4 + 0x34c) == ar5) {
      ar7 = ar4 + 0x3b0;
      ar6_00 = ar4 + 0x3a0;
      iVar3 = ar4 + 0x390;
      FUN_8c02a2b8(ar4,iVar3,ar6_00,ar7);
      FUN_8c01538c(*piVar4 + 0x1f0,iVar3,ar6_00,ar7);
      iVar3 = ar4 + 0x3b0;
      FUN_8c029ca8(ar4,iVar3,ar6_00,ar7);
      FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),iVar3,ar6_00,ar7);
    }
    else if ((((*(int *)(ar4 + 0x358) == ar5) || (*(int *)(ar4 + 0x354) == ar5)) ||
             (*(int *)(ar4 + 0x360) == ar5)) || (*(int *)(ar4 + 0x35c) == ar5)) {
      iVar3 = ar5;
      (**(code **)(*(int *)(ar4 + 8) + 0x198))(ar4,ar5,ar6_00,ar7);
    }
    else {
      iVar3 = *(int *)(ar5 + 4);
      FUN_8c02a29c(ar4,iVar3,ar6_00,ar7);
    }
    pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
    if (cVar7 == '\0') {
      *(undefined4 *)pdVar2 = in_fr15;
    }
    else {
      *pdVar2 = in_xd14;
    }
  }
  if (*(int *)(ar4 + 0x350) == ar5) {
    FUN_8c01538c(*piVar4 + 0x1f8,iVar3,ar6_00,ar7);
    iVar3 = FUN_8c015bb8(0x8c27d3e8,iVar3,ar6_00,ar7);
    ar6_00 = ar6;
    FUN_8c029d64(ar4,iVar3,ar6,ar7);
    FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),iVar3,ar6_00,ar7);
  }
  if (*(int *)(ar5 + 0x2c) != 0) {
    iVar3 = *(int *)(ar5 + 0x2c);
    ar6_00 = ar6;
    FUN_8c029510(ar4,iVar3,ar6,ar7);
  }
  FUN_8c256210(1,iVar3,ar6_00,ar7);
  _DAT_8c27d1ec = _DAT_8c27d1ec + -1;
  uVar1 = 0;
  if (*(int *)(ar5 + 0x30) != 0) {
    uVar1 = FUN_8c029510(ar4,*(undefined4 *)(ar5 + 0x30),ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c029510\n.set _FUN_8c029510, _FUN_8c029510_def\n");
