#include "../decls.h"
undefined4 FUN_8c1b91d8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c1b9994(ar4,ar5,ar6,ar7,(*(uint *)0xffffffd2));
  TrapAlways(0xcb);
  FUN_8c1b9044(ar4,ar5,ar6,ar7,(*(uint *)0xffffffd2));
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b91d8\n.set _FUN_8c1b91d8, _FUN_8c1b91d8_def\n");
