#include "../decls.h"
uint FUN_8c200bfc_def(undefined1 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int ar5_00;
  
  ar5_00 = ar5;
  uVar1 = libgcc_divide_helper_010468((uint)*(ushort *)ar5,100);
  uVar1 = FUN_8c200ba0(uVar1,ar5_00,ar6,ar7);
  *ar4 = (char)uVar1;
  uVar1 = libgcc_divide_helper_010614((uint)*(ushort *)ar5,100);
  uVar1 = FUN_8c200ba0(uVar1,ar5_00,ar6,ar7);
  ar4[1] = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)(ar5 + 2),ar5_00,ar6,ar7);
  ar4[2] = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)(ar5 + 3),ar5_00,ar6,ar7);
  ar4[3] = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)(ar5 + 4),ar5_00,ar6,ar7);
  ar4[4] = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)(ar5 + 5),ar5_00,ar6,ar7);
  ar4[5] = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)(ar5 + 6),ar5_00,ar6,ar7);
  ar4[6] = (char)uVar1;
  uVar2 = *(byte *)(ar5 + 7) & 7;
  ar4[7] = (&DAT_8c26d210)[uVar2];
  return uVar2;
}

__asm__(".globl _FUN_8c200bfc\n.set _FUN_8c200bfc, _FUN_8c200bfc_def\n");
