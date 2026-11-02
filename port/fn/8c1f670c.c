#include "../decls.h"
undefined4 * FUN_8c1f670c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  memset(0x8c472da0,0,(int)0x1af8,ar7);
  puVar2 = 0x8c4748a0;
  puVar1 = 0x8c47489c;
  *(undefined4 *)0x8c474898 = 0;
  *puVar1 = 0;
  *puVar2 = 0;
  return puVar2;
}

__asm__(".globl _FUN_8c1f670c\n.set _FUN_8c1f670c, _FUN_8c1f670c_def\n");
