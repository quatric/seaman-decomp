#include "../decls.h"
undefined4 FUN_8c1fd8b2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  
  ar4_00 = ar4 * 0x148 + 0x8c4783e0;
  memset(ar4_00,0,(int)0x148,ar7);
  *(int *)(ar4_00 + 0x1c) = ar4 * 0x4c + 0x8c47ce40;
  return 0;
}

__asm__(".globl _FUN_8c1fd8b2\n.set _FUN_8c1fd8b2, _FUN_8c1fd8b2_def\n");
