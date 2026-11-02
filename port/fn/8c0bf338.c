#include "../decls.h"
undefined4 * FUN_8c0bf338_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  FUN_8c0ba898(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12b334);
  ar4[2] = 0;
  puVar1 = (&DATA_8c13be20);
  uVar2 = *(undefined4 *)((&DATA_8c13be20) + 4);
  ar4[3] = *(undefined4 *)(&DATA_8c13be20);
  ar4[4] = uVar2;
  ar4[5] = *(undefined4 *)(puVar1 + 8);
  puVar1 = (&DATA_8c13be2c);
  uVar2 = *(undefined4 *)((&DATA_8c13be2c) + 4);
  ar4[6] = *(undefined4 *)(&DATA_8c13be2c);
  ar4[7] = uVar2;
  ar4[8] = *(undefined4 *)(puVar1 + 8);
  return ar4;
}

__asm__(".globl _FUN_8c0bf338\n.set _FUN_8c0bf338, _FUN_8c0bf338_def\n");
