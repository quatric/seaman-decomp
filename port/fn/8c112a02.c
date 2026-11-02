#include "../decls.h"
undefined4 FUN_8c112a02_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 in_fr4;
  
  uVar2 = *(uint *)(ar4 + 8);
  puVar3 = *(undefined4 **)(ar4 + 0xc);
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      uVar1 = uVar1 + 1;
      *puVar3 = in_fr4;
      puVar3 = puVar3 + 1;
    } while (uVar1 < uVar2);
  }
  return ain0;
}

__asm__(".globl _FUN_8c112a02\n.set _FUN_8c112a02, _FUN_8c112a02_def\n");
