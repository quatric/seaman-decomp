#include "../decls.h"
int FUN_8c020600_def(undefined4 ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int ar6_00;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_stack_00000000;
  
  ar6_00 = *ar6;
  if (ar6_00 == 0) {
    ar6_00 = 0;
  }
  else {
    iVar1 = FUN_8c020588(ar4,ar5,ar6_00,ar7,in_stack_00000000);
    if (iVar1 == 1) {
      *ar6 = *(int *)(ar6_00 + 4);
    }
    else if (*(int *)(ar6_00 + 4) == 0) {
      ar6_00 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(ar6_00 + 4) + 4);
      iVar1 = ar6_00;
      ar6_00 = *(int *)(ar6_00 + 4);
      while (iVar2 = FUN_8c020588(ar4,ar5,ar6_00,ar7,in_stack_00000000), iVar2 != 1)
      {
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = *(int *)(*(int *)(ar6_00 + 4) + 4);
        iVar1 = ar6_00;
        ar6_00 = *(int *)(ar6_00 + 4);
      }
      *(int *)(iVar1 + 4) = iVar3;
    }
  }
  return ar6_00;
}

__asm__(".globl _FUN_8c020600\n.set _FUN_8c020600, _FUN_8c020600_def\n");
