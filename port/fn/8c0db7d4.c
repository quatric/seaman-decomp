#include "../decls.h"
undefined4 FUN_8c0db7d4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = get_field_38_0db5a0(ar5 * 0x3c + ar4 + 0x3a8,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0db7d4\n.set _FUN_8c0db7d4, _FUN_8c0db7d4_def\n");
