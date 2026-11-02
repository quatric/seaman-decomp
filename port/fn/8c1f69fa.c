#include "../decls.h"
int FUN_8c1f69fa_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  int *unaff_r14;
  char in_T;
  undefined4 in_PR;
  undefined4 in_stack_00000000;
  
  if (in_T == '\0') {
    iVar1 = 0x7fffffff;
  }
  else {
    iVar1 = *(int *)(*unaff_r14 + 0x204) + ar4;
  }
  *(int *)(*(int *)(ain0 + *unaff_r14) + 0x14) = iVar1;
  iVar1 = FUN_8c01422c(*(int *)(*unaff_r14 + 0xd78) + 0x18,ar5,ar6,ar7,in_PR,in_stack_00000000);
  if (iVar1 == 0) {
    iVar1 = FUN_8c013e4c(*unaff_r14 + 4,1,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f69fa\n.set _FUN_8c1f69fa, _FUN_8c1f69fa_def\n");
