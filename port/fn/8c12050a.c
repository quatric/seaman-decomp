#include "../decls.h"
int FUN_8c12050a_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  
  a4 = *ar4;
  if (*(int *)(a4 + 0x44) == 0) {
    *(uint *)(a4 + 0x44) = (uint)CONCAT12((char)ar4[1],(short)ar5);
  }
  if (*(int *)(a4 + 0x30) != 0) {
    (**(code **)(a4 + 0x30))(a4,*(undefined4 *)(a4 + 0x44),ar6,ar7);
  }
  return (int)(short)ar5;
}

__asm__(".globl _FUN_8c12050a\n.set _FUN_8c12050a, _FUN_8c12050a_def\n");
