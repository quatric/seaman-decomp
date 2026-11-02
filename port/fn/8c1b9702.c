#include "../decls.h"
undefined4 FUN_8c1b9702_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r13;
  int in_GBR;
  undefined4 in_stack_00000000;
  
  uVar1 = FUN_8c1b9552(ar4,ar5,ar6,ar7,in_stack_00000000);
  *(char *)(in_GBR + 0xd1) = (char)uVar1;
  uVar2 = *(uint *)(unaff_r13 + 0x38);
  *(short *)(in_GBR + 0x192) = (short)uVar1;
  uVar1 = FUN_8c1b9444(ar4,ar5,ar6,ar7,
                       uVar2 & 0xffff0000 | (uVar2 & 0xff) << 8 | (uVar2 & 0xff00) >> 8);
  FUN_8c1b9556(ar4,ar5,ar6,ar7,uVar1);
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9702\n.set _FUN_8c1b9702, _FUN_8c1b9702_def\n");
