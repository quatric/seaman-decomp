#include "../decls.h"
int FUN_8c038d0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x330;
  *(undefined4 *)(0x330 + ar4) = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c038d0c\n.set _FUN_8c038d0c, _FUN_8c038d0c_def\n");
