#include "../decls.h"
undefined4 FUN_8c1b9b02_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  undefined4 uVar1;
  undefined1 unaff_r12;
  int in_GBR;
  char in_T;
  
  if (in_T != '\0') {
    uVar1 = FUN_8c1b9966(ar4,ar5,ar6,ar7);
    *(char *)(in_GBR + 0x90) = (char)uVar1;
    uVar1 = FUN_8c1b93be(ar4,ar5,ar6,ar7);
    *(short *)(in_GBR + 0x146) = (short)uVar1;
    uVar1 = FUN_8c1b93e2(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  *(undefined2 *)(in_GBR + 10) = in_r0;
  *(undefined2 *)(in_GBR + 0x1a4) = in_r0;
  *ar4 = unaff_r12;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9b02\n.set _FUN_8c1b9b02, _FUN_8c1b9b02_def\n");
