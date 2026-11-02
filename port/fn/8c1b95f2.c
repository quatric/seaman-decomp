#include "../decls.h"
undefined4 FUN_8c1b95f2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  short *extraout_r1;
  char *unaff_r12;
  int in_GBR;
  char extraout_S;
  undefined4 extraout_MACH;
  undefined4 extraout_MACL;
  undefined4 in_stack_00000000;
  
  FUN_8c1b91a2(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c1b940a(ar4,ar5,ar6,(int)*unaff_r12,in_stack_00000000);
  *(short *)(in_GBR + 0x1cc) = (short)uVar1;
  if (extraout_S != '\0') {
    mac_wOp(CONCAT44(extraout_MACH,extraout_MACL),(int)*extraout_r1 * (int)*extraout_r1);
  }
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b95f2\n.set _FUN_8c1b95f2, _FUN_8c1b95f2_def\n");
