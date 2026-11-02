#include "../decls.h"
undefined4 FUN_8c019088_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr5;
  float in_fr4;
  float in_fr6;
  
  uVar1 = FUN_8c256b0c(0,(int)((in_fr4 * 65536.0) / 360.0),(int)((in_fr5 * 65536.0) / 360.0),
                       (int)((in_fr6 * 65536.0) / 360.0),in_fr4);
  return uVar1;
}

__asm__(".globl _FUN_8c019088\n.set _FUN_8c019088, _FUN_8c019088_def\n");
