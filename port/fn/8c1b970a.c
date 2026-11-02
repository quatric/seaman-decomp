#include "../decls.h"
undefined4 FUN_8c1b970a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int in_r3;
  int in_GBR;
  
  *(char *)(in_GBR + 0xd1) = (char)(undefined2)ain0;
  *(undefined2 *)(in_GBR + 0x192) = (undefined2)ain0;
  FUN_8c1b9444(ar4,ar5,ar6,ar7,*(undefined4 *)(&stack0x00000000 + in_r3));
  FUN_8c1b9556(ar4,ar5,ar6,ar7,*(undefined4 *)(&stack0x00000000 + in_r3));
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b970a\n.set _FUN_8c1b970a, _FUN_8c1b970a_def\n");
