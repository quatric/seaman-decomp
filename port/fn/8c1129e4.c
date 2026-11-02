#include "../decls.h"
undefined4 FUN_8c1129e4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  uVar3 = *(uint *)(ar4 + 8);
  puVar4 = *(undefined4 **)(ar4 + 0xc);
  uVar1 = 0;
  puVar2 = *(undefined4 **)(ar5 + 0xc);
  if (uVar3 != 0) {
    do {
      uVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      uVar1 = uVar1 + 1;
      *puVar4 = uVar5;
      puVar4 = puVar4 + 1;
    } while (uVar1 < uVar3);
  }
  return ain0;
}

__asm__(".globl _FUN_8c1129e4\n.set _FUN_8c1129e4, _FUN_8c1129e4_def\n");
