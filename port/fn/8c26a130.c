#include "../decls.h"
undefined4 FUN_8c26a130_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = (&DATA_8c2785e4);
  if (ar4 == 0) {
    *(undefined4 *)(&DATA_8c2785e0) = 0;
    *(undefined4 *)puVar1 = 0;
  }
  else {
    *(int *)(&DATA_8c2785e0) = ar4;
    *(undefined4 *)puVar1 = ar5;
  }
  uVar2 = memset(0x8c4bea48,0,(int)0x100);
  return uVar2;
}

__asm__(".globl _FUN_8c26a130\n.set _FUN_8c26a130, _FUN_8c26a130_def\n");
