#include "../decls.h"
undefined4 FUN_8c11cdb6_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *a5;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  a5 = &uStack_14;
  if (ar4 != (undefined4 *)0x0) {
    uStack_10 = 0;
    uStack_14 = ar5;
    puVar1 = (undefined4 *)(*(code *)*ar4)(0x3c,&uStack_14,ar6,ar7);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[5] = *ar4;
      puVar1[6] = ar4[1];
      puVar1[7] = ar4[3];
      puVar1[8] = ar4[4];
      puVar1[9] = ar4[5];
      puVar1[10] = ar4[6];
      puVar1[0xb] = ar4[7];
      uVar2 = 0x1b9813f5;
      puVar1[0xc] = ar4[8];
      puVar1[0xe] = uVar2;
      puVar1[2] = uStack_14;
      puVar1[3] = uStack_10;
      uVar2 = (*(code *)puVar1[9])(&uStack_14,a5,ar6,ar7);
      puVar1[4] = uVar2;
      uVar2 = (*(code *)puVar1[7])(&uStack_14,a5,ar6,ar7);
      puVar1[1] = uVar2;
      return puVar1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11cdb6\n.set _FUN_8c11cdb6, _FUN_8c11cdb6_def\n");
