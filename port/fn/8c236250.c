#include "../decls.h"
undefined4 FUN_8c236250_def(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = 0x8c4ab210;
  uVar1 = 0xa5;
  *(undefined4 *)(0x8c4ab210 + 2) = 0x24;
  puVar3 = 0x8c4ab234;
  *puVar2 = uVar1;
  puVar2[1] = 1;
  *(undefined2 **)(puVar2 + 6) = ar4;
  *(undefined2 **)(puVar2 + 4) = ar4;
  *(undefined4 *)(ar4 + 2) = ar5;
  *ar4 = uVar1;
  ar4[1] = 0;
  *(undefined2 **)(ar4 + 6) = puVar2;
  *(undefined2 **)(ar4 + 4) = puVar2;
  *puVar3 = *(undefined4 *)(puVar2 + 4);
  return 0;
}

__asm__(".globl _FUN_8c236250\n.set _FUN_8c236250, _FUN_8c236250_def\n");
