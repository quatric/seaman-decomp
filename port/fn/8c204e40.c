#include "../decls.h"
ushort * FUN_8c204e40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = 0x8c47eba8;
  puVar2 = 0x8c47eba8;
  while( true ) {
    if ((ushort *)(0x18000 + (int)0x8c47eba8) <= puVar1) {
      return (ushort *)0;
    }
    if ((*puVar1 & 1) == 0) break;
    puVar1 = puVar1 + 0xc;
    puVar2 = puVar2 + 0xc;
  }
  *puVar2 = 1;
  return puVar2;
}

__asm__(".globl _FUN_8c204e40\n.set _FUN_8c204e40, _FUN_8c204e40_def\n");
