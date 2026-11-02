#include "../decls.h"
int FUN_8c258fd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int in_r0;
  
  piVar1 = 0x8c4ab330;
  if (*(undefined4 *)0x8c4ab330 != 0) {
    in_r0 = FUN_8c1fa54c(*(undefined4 *)0x8c4ab330,ar5,ar6,ar7);
    *piVar1 = 0;
  }
  if (ar4 != 0) {
    in_r0 = FUN_8c1fa244((int)0x900,ar4,0x58,0);
    *piVar1 = in_r0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c258fd8\n.set _FUN_8c258fd8, _FUN_8c258fd8_def\n");
