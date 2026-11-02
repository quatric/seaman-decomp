#include "../decls.h"
undefined4 FUN_8c1f59c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  **(uint **)((int)0xfcc + *(undefined4 *)0x8c4727b4) =
       **(uint **)((int)0xfcc + *(undefined4 *)0x8c4727b4) | 0x80000000;
  return 0;
}

__asm__(".globl _FUN_8c1f59c8\n.set _FUN_8c1f59c8, _FUN_8c1f59c8_def\n");
