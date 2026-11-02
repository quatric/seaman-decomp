#include "../decls.h"
undefined4 FUN_8c1016f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  *(char *)(0x598 + ar4) = *(char *)(0x598 + ar4) + '\x01';
  puVar2 = (undefined1 *)(ar4 + (uint)*(byte *)(0x598 + ar4) * 4 + 0x190);
  uVar1 = input_get_word_a538(0x8c3dd7dc,ar5,ar6,ar7);
  *puVar2 = (char)uVar1;
  uVar1 = input_get_word_a53c(0x8c3dd7dc,ar5,ar6,ar7);
  puVar2[1] = (char)uVar1;
  uVar1 = FUN_8c01efb0(0x8c3dd7dc,ar5,ar6,ar7);
  puVar2[2] = (char)uVar1;
  uVar1 = input_is_mask_set_10000_01ec68(0x8c3dd7dc,ar5,ar6,ar7);
  puVar2[3] = (char)uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c1016f0\n.set _FUN_8c1016f0, _FUN_8c1016f0_def\n");
