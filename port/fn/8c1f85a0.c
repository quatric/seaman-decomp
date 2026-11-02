#include "../decls.h"
undefined4 aica_reg_1f85a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 auStack_c [4];
  
  auStack_c[0] = 1;
  FUN_8c1f9610(auStack_c,0xa0710008,4,1,0,0);
  return 0;
}

__asm__(".globl _aica_reg_1f85a0\n.set _aica_reg_1f85a0, _aica_reg_1f85a0_def\n");
