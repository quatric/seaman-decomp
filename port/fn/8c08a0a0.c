#include "../decls.h"
undefined4 FUN_8c08a0a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281a20,free_if_nonnull_wrap_03a3dc,4,0x14,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08a0a0\n.set _FUN_8c08a0a0, _FUN_8c08a0a0_def\n");
