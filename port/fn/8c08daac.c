#include "../decls.h"
undefined4 FUN_8c08daac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c283b30,FUN_8c03a4ac,0x124,4,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c08daac\n.set _FUN_8c08daac, _FUN_8c08daac_def\n");
