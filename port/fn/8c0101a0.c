#include "../decls.h"
undefined4 global_list_push_def(undefined4 ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  puVar1 = 0x8c2787a0;
  *ar6 = *(undefined4 *)0x8c2787a0;
  ar6[1] = ar5;
  ar6[2] = ar4;
  *puVar1 = ar6;
  return ar4;
}

__asm__(".globl _global_list_push\n.set _global_list_push, _global_list_push_def\n");
