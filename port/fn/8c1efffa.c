#include "../decls.h"
uint * FUN_8c1efffa_def(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar2 = ar4 + 1;
  puVar4 = ar4 + 1;
  iVar1 = 0;
  uVar3 = 0x80000000;
  do {
    if ((uVar3 & *ar4) != 0) {
      if (ar5 == uVar3) {
        return puVar4;
      }
      puVar2 = puVar2 + 1;
      puVar4 = puVar2;
    }
    iVar1 = iVar1 + 1;
    uVar3 = uVar3 >> 1;
  } while (iVar1 < 0x20);
  return (uint *)0;
}

__asm__(".globl _FUN_8c1efffa\n.set _FUN_8c1efffa, _FUN_8c1efffa_def\n");
