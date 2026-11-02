#include "../decls.h"
undefined4 FUN_8c258d4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar4_00;
  
  ar4_00 = ar4 * 0xc0 + 0x8c4aa73c;
  *(undefined4 *)0x8c4aabbc = ar4_00;
  uVar1 = FUN_8c20fe00(ar4_00,ar5,ar6,ar7);
  *(undefined4 *)0x8c4aabd8 = ar4 * 4 + 0x8c4aabc0;
  return uVar1;
}

__asm__(".globl _FUN_8c258d4c\n.set _FUN_8c258d4c, _FUN_8c258d4c_def\n");
