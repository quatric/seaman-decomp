#include "../decls.h"
undefined4 FUN_8c1b9aa8_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  short *extraout_r1;
  undefined4 in_r2;
  undefined2 unaff_r9;
  int unaff_r10;
  int in_GBR;
  char extraout_S;
  undefined4 extraout_MACH;
  undefined4 extraout_MACL;
  
  *(undefined4 *)(unaff_r10 + -4) = in_r2;
  halt_unimplemented_wrap_1b9668(ar4,ar5,ar6,ar7);
  *(undefined2 *)(ar5 + -2) = unaff_r9;
  uVar1 = FUN_8c1b9a54(ar4,(undefined2 *)(ar5 + -2),ar6,ar7);
  *(short *)(in_GBR + 0x13a) = (short)uVar1;
  if (extraout_S != '\0') {
    mac_wOp(CONCAT44(extraout_MACH,extraout_MACL),(int)*extraout_r1 * (int)*extraout_r1);
  }
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9aa8\n.set _FUN_8c1b9aa8, _FUN_8c1b9aa8_def\n");
