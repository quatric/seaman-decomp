#include "../decls.h"
undefined4 FUN_8c010b60_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 auStackY_8028 [8];
  undefined1 auStackY_8020 [32748];
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  undefined1 auStack_20 [16];
  
  puVar5 = &stack0xffffffcc;
  puVar8 = &stack0xffffffcc;
  uVar4 = CONCAT22((short)((uint)in_stack_ffffffd0 >> 0x10),(undefined2)ar4);
  puVar6 = auStack_20;
  if (ar6 < 1) {
    FUN_8c012b1c(-ar6,&stack0xffffffcc,auStack_20,ar7);
    iVar2 = (int)(short)uVar4;
    FUN_8c0129b4(&stack0xffffffcc,auStack_20,iVar2,ar5);
  }
  else {
    FUN_8c012b1c(ar6,&stack0xffffffcc,auStack_20,ar7);
    iVar2 = (int)(short)uVar4;
    FUN_8c010c60(&stack0xffffffcc,auStack_20,iVar2,ar5);
    puVar8 = puVar5;
  }
  iVar9 = 0x3f - (short)in_stack_ffffffcc;
  iVar3 = FUN_8c0105c4(puVar8,puVar6,iVar2,ar5,in_stack_ffffffcc,uVar4);
  FUN_8c012e00(auStack_20,9,0x42 - (short)iVar9,ar5);
  iVar7 = (int)(short)iVar3;
  iVar2 = 8;
  if (iVar7 < 9) {
    do {
      sVar1 = (short)iVar2;
      auStack_20[sVar1] = auStack_20[sVar1 - iVar7];
      iVar2 = sVar1 + -1;
    } while (iVar7 <= (short)iVar2);
  }
  sVar1 = (short)iVar2;
  puVar8 = auStack_20 + sVar1 + 1;
  while (-1 < sVar1) {
    iVar2 = iVar2 + -1;
    puVar8 = puVar8 + -1;
    *puVar8 = 0;
    sVar1 = (short)iVar2;
  }
  iVar9 = iVar9 + iVar3 * -8;
  FUN_8c012da8(auStack_20,9,iVar9,ar5,in_stack_ffffffcc);
  FUN_8c012c70(auStack_20,0x40,iVar9,ar5);
  uVar4 = memmove(ar7,auStack_20,8,ar5);
  return uVar4;
}

__asm__(".globl _FUN_8c010b60\n.set _FUN_8c010b60, _FUN_8c010b60_def\n");
