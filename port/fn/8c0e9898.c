#include "../decls.h"
int FUN_8c0e9898_def(undefined1 *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  
  ar5_00 = ar5;
  uVar2 = FUN_8c0e98f0(ar4,ar5,ar6,ar7);
  *ar5 = (char)uVar2;
  uVar2 = FUN_8c0e98e8(ar4,ar5_00,ar6,ar7);
  ar5[1] = (char)uVar2;
  ar5[2] = ar4[0x3d];
  ar5[3] = *ar4;
  cVar1 = ar4[0x3b];
  ar5[4] = cVar1;
  return (int)cVar1;
}

__asm__(".globl _FUN_8c0e9898\n.set _FUN_8c0e9898, _FUN_8c0e9898_def\n");
