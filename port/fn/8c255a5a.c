#include "../decls.h"
undefined4 FUN_8c255a5a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *in_r1;
  int in_r3;
  undefined4 unaff_r12;
  int *unaff_r13;
  int iVar2;
  
  iVar2 = *unaff_r13;
  unaff_r13[1] = iVar2;
  unaff_r13[2] = iVar2 + 4;
  unaff_r13[5] = in_r3;
  (*(code *)*in_r1)(unaff_r12,ar5,ar6,ar7);
  (*(code *)*(undefined4 *)0x8c4aad38)(unaff_r12,ar5,ar6,ar7);
  uVar1 = (*(code *)*(undefined4 *)0x8c4aad3c)(unaff_r12,ar5,ar6,ar7);
  *unaff_r13 = iVar2 + 8;
  return uVar1;
}

__asm__(".globl _FUN_8c255a5a\n.set _FUN_8c255a5a, _FUN_8c255a5a_def\n");
