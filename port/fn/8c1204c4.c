#include "../decls.h"
int FUN_8c1204c4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  
  a4 = *ar4;
  if (*(int *)(a4 + 0x40) == 0) {
    *(uint *)(a4 + 0x40) = (uint)CONCAT12((char)ar4[1],(short)ar5);
  }
  if (*(int *)(a4 + 0x2c) != 0) {
    (**(code **)(a4 + 0x2c))(a4,*(undefined4 *)(a4 + 0x40),ar6,ar7);
  }
  return (int)(short)ar5;
}

__asm__(".globl _FUN_8c1204c4\n.set _FUN_8c1204c4, _FUN_8c1204c4_def\n");
