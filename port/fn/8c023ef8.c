#include "../decls.h"
undefined4 FUN_8c023ef8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr4;
  
  uVar1 = FUN_8c256ce0(ar4,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c023ef8\n.set _FUN_8c023ef8, _FUN_8c023ef8_def\n");
