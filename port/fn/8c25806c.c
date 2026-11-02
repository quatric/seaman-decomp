#include "../decls.h"
undefined4 FUN_8c25806c_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *in_r2;
  
  *ar5 = ar4;
  *in_r2 = ar4;
  s_HARDWARE_211130(0x8c4aacbc,ar5,ar6,ar7);
  uVar1 = FUN_8c25b49e(0,ar5,ar6,ar7);
  *(undefined4 *)0x8c4aa6a8 = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c25806c\n.set _FUN_8c25806c, _FUN_8c25806c_def\n");
