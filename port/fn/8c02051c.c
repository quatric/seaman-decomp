#include "../decls.h"
int FUN_8c02051c_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int ar6_00;
  int iVar1;
  undefined4 in_stack_00000000;
  
  if (ar6 == 0) {
    ar6_00 = 0;
  }
  else {
    do {
      ar6_00 = ar6;
      if (ar6_00 == 0) {
        return 0;
      }
      ar6 = *(int *)(ar6_00 + 4);
      iVar1 = FUN_8c020588(ar4,ar5,ar6_00,ar7,in_stack_00000000);
    } while (iVar1 != 1);
  }
  return ar6_00;
}

__asm__(".globl _FUN_8c02051c\n.set _FUN_8c02051c, _FUN_8c02051c_def\n");
