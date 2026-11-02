#include "../decls.h"
undefined4 FUN_8c0cf6bc_def(int ar4,ulonglong *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  ulonglong in_dr0;
  char cVar4;
  
  cVar4 = '\0';
  if (DAT_8c437434 == '\0') {
    in_dr0 = CONCAT44(0x43c00000,(int)in_dr0);
    _DAT_8c437430 = 0x43c00000;
    DAT_8c437434 = '\x01';
  }
  if (DAT_8c43743c == '\0') {
    in_dr0 = CONCAT44(0x438c0000,(int)in_dr0);
    _DAT_8c437438 = 0x438c0000;
    DAT_8c43743c = '\x01';
  }
  uVar2 = 2;
  sVar3 = (short)ar6;
  iVar1 = libgcc_divide_helper_01031c((int)sVar3,2,ar6,ar7);
  if (iVar1 == 0) {
    if (cVar4 == '\0') {
      *(undefined4 *)ar5 = 0x43c00000;
      *(undefined4 *)((int)ar5 + 4) = 0x438c0000;
    }
    else {
      *ar5 = 0x8c43743c43c00000;
      *(undefined8 *)((int)ar5 + 4) = 0x8c01031c438c0000;
    }
  }
  else if (cVar4 == '\0') {
    *(undefined4 *)ar5 = 0;
    *(undefined4 *)((int)ar5 + 4) = 0x438c0000;
  }
  else {
    *ar5 = in_dr0 & 0xffffffff;
    *(undefined8 *)((int)ar5 + 4) = 0x8c01031c438c0000;
  }
  FUN_8c01538c(ar4 + 0x158,uVar2,ar6,ar7);
  iVar1 = (int)sVar3;
  FUN_8c014a94(ar4 + 0x158,iVar1,ar6,ar7);
  uVar2 = FUN_8c01636c(ar4 + 0x160,iVar1,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0cf6bc\n.set _FUN_8c0cf6bc, _FUN_8c0cf6bc_def\n");
