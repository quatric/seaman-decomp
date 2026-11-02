#include "../decls.h"
undefined4 FUN_8c01fc78_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_stack_ffffff0c;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [32];
  undefined1 auStack_bc [40];
  undefined4 auStack_94 [33];
  
  uStack_ec = *ar5;
  uStack_e8 = 0;
  strcpy(auStack_bc,ar5 + 0xc,ar6,ar7,in_stack_ffffff0c);
  iVar2 = 0;
  while (iVar3 = iVar2, iVar3 < 0x20) {
    auStack_94[iVar3] = ar5[iVar3 + 0x16];
    in_stack_ffffff0c = iVar3;
    iVar2 = iVar3 + 1;
  }
  iVar2 = *(int *)(ar4 + 0x10);
  strcpy(auStack_dc,iVar2,ar6,ar7,in_stack_ffffff0c);
  uStack_e0 = *(undefined4 *)(iVar2 + 0x20);
  iStack_e4 = iVar2 + 0x40;
  uVar1 = s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e(ar4,&uStack_ec,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01fc78\n.set _FUN_8c01fc78, _FUN_8c01fc78_def\n");
