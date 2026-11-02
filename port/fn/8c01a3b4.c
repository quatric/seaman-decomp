#include "../decls.h"
uint FUN_8c01a3b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = s_VM_User_Icon_VMI_01a3ec(ar4,ar5,ar6,ar7);
  return (uint)(iVar1 == 3);
}

__asm__(".globl _FUN_8c01a3b4\n.set _FUN_8c01a3b4, _FUN_8c01a3b4_def\n");
