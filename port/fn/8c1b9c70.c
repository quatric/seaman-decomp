#include "../decls.h"
undefined4 FUN_8c1b9c70_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  undefined4 uVar1;
  short *extraout_r1;
  int extraout_r2;
  int a7;
  char *unaff_r12;
  int in_GBR;
  char extraout_S;
  undefined4 extraout_MACH;
  undefined4 extraout_MACL;
  
  *(undefined2 *)(unaff_r12 + 0xe) = in_r0;
  a7 = (int)*unaff_r12;
  FUN_8c1b9aa8(ar4,ar5,ar6,a7);
  uVar1 = FUN_8c1b9c52(ar4,ar5,ar6,a7);
  *(short *)(in_GBR + 0x1cc) = (short)uVar1;
  if (extraout_S != '\0') {
    mac_wOp(CONCAT44(extraout_MACH,extraout_MACL),(int)*extraout_r1 * (int)*extraout_r1);
  }
  *(short *)(extraout_r2 + 0x1a) = (short)uVar1;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9c70\n.set _FUN_8c1b9c70, _FUN_8c1b9c70_def\n");
