#include "../decls.h"
undefined4 FUN_8c06ca34_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *ar5 = *(undefined4 *)(ar4 + 0x24);
  vec3_copy_8c023d8c(ar5 + 1,ar4 + 0x50,ar6,ar7);
  FUN_8c023e04(ar5 + 4,ar4 + 0x5c,ar6,ar7);
  uVar1 = *(undefined4 *)(ar4 + 0x74);
  ar5[8] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c06ca34\n.set _FUN_8c06ca34, _FUN_8c06ca34_def\n");
