#include "../decls.h"
undefined4 FUN_8c1f696e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r3;
  int in_MACL;
  undefined4 in_PR;
  
  if (*(int *)(in_MACL + in_r3 + 0xc) == 1) {
    FUN_8c1f69d6(ar4,ar5,ar6,ar7,in_PR);
    *(undefined4 *)(in_MACL + in_r3 + 0xc) = 2;
    return 0;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f696e\n.set _FUN_8c1f696e, _FUN_8c1f696e_def\n");
