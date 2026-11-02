#include "../decls.h"
uint FUN_8c200c08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *unaff_r8;
  ushort *unaff_r13;
  int unaff_r14;
  
  uVar1 = libgcc_divide_helper_010468((uint)*unaff_r13,100);
  uVar1 = FUN_8c200ba0(uVar1,ar5,ar6,ar7);
  *unaff_r8 = (char)uVar1;
  uVar1 = libgcc_divide_helper_010614((uint)*unaff_r13,100);
  uVar1 = FUN_8c200ba0(uVar1,ar5,ar6,ar7);
  *(char *)(unaff_r14 + 1) = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)(byte)unaff_r13[1],ar5,ar6,ar7);
  *(char *)(unaff_r14 + 2) = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)((int)unaff_r13 + 3),ar5,ar6,ar7);
  *(char *)(unaff_r14 + 3) = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)(byte)unaff_r13[2],ar5,ar6,ar7);
  *(char *)(unaff_r14 + 4) = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)((int)unaff_r13 + 5),ar5,ar6,ar7);
  *(char *)(unaff_r14 + 5) = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)(byte)unaff_r13[3],ar5,ar6,ar7);
  *(char *)(unaff_r14 + 6) = (char)uVar1;
  uVar2 = *(byte *)((int)unaff_r13 + 7) & 7;
  *(undefined *)(unaff_r14 + 7) = (&DAT_8c26d210)[uVar2];
  return uVar2;
}

__asm__(".globl _FUN_8c200c08\n.set _FUN_8c200c08, _FUN_8c200c08_def\n");
