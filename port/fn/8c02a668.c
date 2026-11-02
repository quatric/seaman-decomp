#include "../decls.h"
undefined4 FUN_8c02a668_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  undefined1 auStack_18 [20];
  
  a5 = ar4 + 0x30;
  (**(code **)(**(int **)(0x30c + ar4) + 0x38))(*(int **)(0x30c + ar4),a5,ar5,ar6);
  FUN_8c02a6d0(*(undefined4 *)(0x30c + ar4),a5,ar5,ar6,auStack_18);
  FUN_8c023aa0(ar4 + 0x30,auStack_18,ar5,ar6);
  Vec3_dtor(auStack_18,0xffffffff,ar5,ar6);
  return 1;
}

__asm__(".globl _FUN_8c02a668\n.set _FUN_8c02a668, _FUN_8c02a668_def\n");
