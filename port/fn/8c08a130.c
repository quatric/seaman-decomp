#include "../decls.h"
undefined4 FUN_8c08a130_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(&DAT_8c2818e0,free_if_nonnull_wrap_03a454,0x10,3,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08a130\n.set _FUN_8c08a130, _FUN_8c08a130_def\n");
