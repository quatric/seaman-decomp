#include "../decls.h"
undefined4 FUN_8c1b9444_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain1)

{
  uint uVar1;
  int in_r2;
  undefined4 in_R7_BANK;
  int in_GBR;
  char in_M;
  char in_Q;
  undefined4 *puVar2;
  
  *(undefined2 *)(in_GBR + 0x1a2) = *(undefined2 *)(in_GBR + 0x194);
  *(undefined4 *)(ain1 + -0xc) = in_R7_BANK;
  uVar1 = (int)(char)(ain1 + -8) << 1 | (uint)(0 < ain1 + -8);
  if (in_Q == '\0' && in_M == '\0') {
    puVar2 = (undefined4 *)(uVar1 - in_r2);
  }
  else if (in_Q == '\0' && in_M == '\x01') {
    puVar2 = (undefined4 *)(uVar1 + in_r2);
  }
  else if (in_Q == '\x01' && in_M == '\0') {
    puVar2 = (undefined4 *)(uVar1 + in_r2);
  }
  else {
    puVar2 = (undefined4 *)(uVar1 - in_r2);
  }
  FUN_8c1b9b9e(ar4,ar5,ar6,ar7,*puVar2);
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9444\n.set _FUN_8c1b9444, _FUN_8c1b9444_def\n");
