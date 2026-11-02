#include "../decls.h"
int FUN_8c200c8a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *unaff_r13;
  byte *unaff_r14;
  
  uVar2 = FUN_8c200bc4((uint)*unaff_r14,ar5,ar6,ar7);
  uVar3 = FUN_8c200bc4((uint)unaff_r14[1],ar5,ar6,ar7);
  *unaff_r13 = (short)uVar2 * 100 + (short)uVar3;
  uVar2 = FUN_8c200bc4((uint)unaff_r14[2],ar5,ar6,ar7);
  *(char *)(unaff_r13 + 1) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)unaff_r14[3],ar5,ar6,ar7);
  *(char *)((int)unaff_r13 + 3) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)unaff_r14[4],ar5,ar6,ar7);
  *(char *)(unaff_r13 + 2) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)unaff_r14[5],ar5,ar6,ar7);
  *(char *)((int)unaff_r13 + 5) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)unaff_r14[6],ar5,ar6,ar7);
  *(char *)(unaff_r13 + 3) = (char)uVar2;
  cVar1 = (&DAT_8c26d218)[unaff_r14[7] & 7];
  *(char *)((int)unaff_r13 + 7) = cVar1;
  return (int)cVar1;
}

__asm__(".globl _FUN_8c200c8a\n.set _FUN_8c200c8a, _FUN_8c200c8a_def\n");
