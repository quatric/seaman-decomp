#include "../decls.h"
uint FUN_8c02d8fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = libgcc_divide_helper_0101e4(*(undefined4 *)(ar4 + 0xc),2,ar6,ar7);
  return (uint)(iVar1 < *(int *)(ar4 + 4));
}

__asm__(".globl _FUN_8c02d8fc\n.set _FUN_8c02d8fc, _FUN_8c02d8fc_def\n");
