#include "../decls.h"
int FUN_8c2624a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined4 in_stack_fffffff4;
  
  ar5_00 = &stack0xfffffff4;
  iVar1 = (int)*(char *)(ar4 + 1);
  if (iVar1 == 2) {
    uVar2 = FUN_8c263746(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
    *(char *)(ar4 + 1) = (char)uVar2;
    FUN_8c263768(*(undefined4 *)(ar4 + 4),&stack0xfffffff4,ar6,ar7);
    *(undefined4 *)(ar4 + 0x24) = in_stack_fffffff4;
    iVar1 = (int)*(char *)(ar4 + 1);
    if ((iVar1 == 3) || (iVar1 == 4)) {
      *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + *(int *)(ar4 + 0x24);
      iVar1 = FUN_8c26211c(ar4,ar5_00,ar6,ar7,in_stack_fffffff4);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c2624a0\n.set _FUN_8c2624a0, _FUN_8c2624a0_def\n");
