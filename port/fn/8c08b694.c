#include "../decls.h"
int FUN_8c08b694_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c0f4e34(ar4,ar5,ar6,ar7);
  FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7);
  FUN_8c035338(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7);
  (**(code **)(**(int **)(0x308 + ar4) + 0x24))
            (*(int **)(0x308 + ar4),ar5 + 0xc8,ar6,ar7);
  iVar1 = 0x460;
  *(undefined4 *)(0x460 + ar4) = *(undefined4 *)(0xe8 + ar5);
  return iVar1;
}

__asm__(".globl _FUN_8c08b694\n.set _FUN_8c08b694, _FUN_8c08b694_def\n");
