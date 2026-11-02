#include "../decls.h"
undefined4 FUN_8c11116e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float extraout_fr0;
  
  FUN_8c120550(ar4,4,ar6,ar7);
  *(short *)(**(int **)(ar4 + 0x10) + 0xc) = (short)((int)extraout_fr0 << 2);
  return 0;
}

__asm__(".globl _FUN_8c11116e\n.set _FUN_8c11116e, _FUN_8c11116e_def\n");
