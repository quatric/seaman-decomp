#include "../decls.h"
undefined4 FUN_8c26014c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 ain0;
  undefined4 uVar1;
  
  uVar1 = ar7;
  ain0 = FUN_8c26011e(ar4,ar5 * 2 + ar4,ar7,ar7,ar6);
  uVar1 = FUN_8c26011e(ar6 * 2 + ar4,(ar5 + ar6) * 2 + ar4,ar7,uVar1,ain0);
  return uVar1;
}

__asm__(".globl _FUN_8c26014c\n.set _FUN_8c26014c, _FUN_8c26014c_def\n");
