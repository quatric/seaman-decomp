#include "../decls.h"
undefined4 aica_reg_1f85ee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 auStack_c [2];
  
  auStack_c[0] = ar4;
  FUN_8c1f9610(auStack_c,0xa0710000,4,1,0,0);
  return 0;
}

__asm__(".globl _aica_reg_1f85ee\n.set _aica_reg_1f85ee, _aica_reg_1f85ee_def\n");
