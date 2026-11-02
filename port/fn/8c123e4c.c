#include "../decls.h"
undefined4 FUN_8c123e4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint ar5_00;
  float extraout_fr0;
  
  *(undefined1 *)(ar4 + 0x28) = 0;
  FUN_8c120550(ar4,6,ar6,ar7);
  ar5_00 = 0;
  puVar2 = (undefined4 *)(ar4 + 0x54);
  *(short *)(ar4 + 0x48) = (short)(int)extraout_fr0;
  do {
    *puVar2 = 0x4effffff;
    ar5_00 = ar5_00 + 2;
    puVar2[1] = 0x4effffff;
    puVar2 = puVar2 + 2;
  } while (ar5_00 < 0x14);
  *(int *)(ar4 + 0xa8) = ar4 + 0x54;
  uVar1 = FUN_8c12356c(ar4,ar5_00,0x14,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c123e4c\n.set _FUN_8c123e4c, _FUN_8c123e4c_def\n");
