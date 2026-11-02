#include "../decls.h"
undefined4 FUN_8c023ebc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr4;
  
  uVar1 = FUN_8c256a78(ar4,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c023ebc\n.set _FUN_8c023ebc, _FUN_8c023ebc_def\n");
