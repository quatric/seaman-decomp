#include "../decls.h"
undefined4 FUN_8c1b94ce_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short *in_r1;
  char in_S;
  undefined4 in_MACH;
  undefined4 in_MACL;
  
  if (in_S != '\0') {
    mac_wOp(CONCAT44(in_MACH,in_MACL),(int)*in_r1 * (int)*in_r1);
  }
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b94ce\n.set _FUN_8c1b94ce, _FUN_8c1b94ce_def\n");
