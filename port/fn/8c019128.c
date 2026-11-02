#include "../decls.h"
undefined4 FUN_8c019128_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr4;
  
  uVar1 = FUN_8c256ce0(0,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7,in_fr4);
  return uVar1;
}

__asm__(".globl _FUN_8c019128\n.set _FUN_8c019128, _FUN_8c019128_def\n");
