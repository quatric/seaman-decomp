#include "../decls.h"
undefined4 FUN_8c2141a6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 in_r0;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = (&FUN_8c21279c);
  puVar1 = (&FUN_8c212740);
  uVar5 = *(uint *)(0x8c4c0d60 + 0x50);
  iVar3 = 0x8c4c0dc0;
  iVar4 = 0x8c4c0d60;
  while( true ) {
    if ((uVar5 & 1) != 0) {
      if ((uVar5 >> 1 & 1) == 0) {
        in_r0 = (*(code *)puVar2)(0,iVar4,iVar3);
      }
      else {
        in_r0 = (*(code *)puVar1)(0,iVar4,iVar3);
      }
    }
    if ((uVar5 >> 2 & 1) != 0) break;
    iVar4 = iVar4 + 0xc;
    uVar5 = uVar5 >> 3;
    iVar3 = iVar3 + 0x20;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c2141a6\n.set _FUN_8c2141a6, _FUN_8c2141a6_def\n");
