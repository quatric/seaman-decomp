#include "../decls.h"
int FUN_8c028da8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c0f4ebc(ar4,ar5,ar6,ar7);
  FUN_8c02ce58(ar4 + 0x174,ar5 + 0x24,ar6,ar7);
  FUN_8c035338(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7);
  (**(code **)(**(int **)(0x308 + ar4) + 0x24))
            (*(int **)(0x308 + ar4),ar5 + 0x48,ar6,ar7);
  iVar1 = 0x460;
  *(undefined4 *)(0x460 + ar4) = *(undefined4 *)(ar5 + 0x68);
  return iVar1;
}

__asm__(".globl _FUN_8c028da8\n.set _FUN_8c028da8, _FUN_8c028da8_def\n");
