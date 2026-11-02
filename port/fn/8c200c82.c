#include "../decls.h"
int FUN_8c200c82_def(short *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *ar5_00;
  
  ar5_00 = ar5;
  uVar2 = FUN_8c200bc4((uint)*ar5,ar5,ar6,ar7);
  uVar3 = FUN_8c200bc4((uint)ar5[1],ar5_00,ar6,ar7);
  *ar4 = (short)uVar2 * 100 + (short)uVar3;
  uVar2 = FUN_8c200bc4((uint)ar5[2],ar5_00,ar6,ar7);
  *(char *)(ar4 + 1) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)ar5[3],ar5_00,ar6,ar7);
  *(char *)((int)ar4 + 3) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)ar5[4],ar5_00,ar6,ar7);
  *(char *)(ar4 + 2) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)ar5[5],ar5_00,ar6,ar7);
  *(char *)((int)ar4 + 5) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)ar5[6],ar5_00,ar6,ar7);
  *(char *)(ar4 + 3) = (char)uVar2;
  cVar1 = (&DAT_8c26d218)[ar5[7] & 7];
  *(char *)((int)ar4 + 7) = cVar1;
  return (int)cVar1;
}

__asm__(".globl _FUN_8c200c82\n.set _FUN_8c200c82, _FUN_8c200c82_def\n");
