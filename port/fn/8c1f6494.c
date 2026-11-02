#include "../decls.h"
uint FUN_8c1f6494_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  int iVar1;
  undefined1 auStack_8 [8];
  
  ar5_00 = FUN_8c1efd26(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c1f01ae(auStack_8,ar5_00,ar6,ar7);
  return (uint)(-1 < iVar1);
}

__asm__(".globl _FUN_8c1f6494\n.set _FUN_8c1f6494, _FUN_8c1f6494_def\n");
