#include "../decls.h"
int FUN_8c26211c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  undefined4 in_stack_fffffff4;
  
  if (*(int *)(ar4 + 4) != 0) {
    ain0 = FUN_8c263446(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7,in_stack_fffffff4);
    *(undefined4 *)(ar4 + 4) = 0;
  }
  if ((*(int *)(ar4 + 8) != 0) && (ain0 = (int)*(char *)(ar4 + 2), ain0 == 0)) {
    if (_DAT_8c4b4220 == 1) {
      ar5 = *(undefined4 *)(ar4 + 0x2c);
      FUN_8c261786(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7,in_stack_fffffff4);
    }
    ain0 = (**(code **)(**(int **)(ar4 + 8) + 0xc))(*(int **)(ar4 + 8),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 8) = 0;
  }
  return ain0;
}

__asm__(".globl _FUN_8c26211c\n.set _FUN_8c26211c, _FUN_8c26211c_def\n");
