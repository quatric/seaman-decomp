#include "../decls.h"
undefined4 FUN_8c202924_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int s0)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_stack_00000004;
  
  if (ar4 < 1) {
    return 0;
  }
  iVar1 = libgcc_divide_helper_0106dc(in_stack_00000004,ar4);
  if (s0 == 0) {
    return iVar1;
  }
  iVar2 = libgcc_divide_helper_0106dc(0xffffffff,ar4);
  iVar2 = iVar2 + 1;
  if (iVar2 == ar4) {
    iVar2 = 0;
  }
  iVar3 = libgcc_divide_helper_0106dc(s0,ar4);
  uVar4 = libgcc_divide_helper_0106dc(iVar3 * iVar2 + iVar1,ar4);
  return uVar4;
}

__asm__(".globl _FUN_8c202924\n.set _FUN_8c202924, _FUN_8c202924_def\n");
