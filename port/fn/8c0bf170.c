#include "../decls.h"
undefined4 FUN_8c0bf170_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  
  _DAT_8c4362f0 = 0;
  ar6_00 = ar6;
  strcpy(0x8c4362a0,ar5,ar6,ar7,ar5);
  strcpy(0x8c4362c0,ar6,ar6_00,ar7,ar5);
  _DAT_8c43627c = FUN_8c0f8320(0x8c35468c,6,0x8c436280,ar7);
  return _DAT_8c43627c;
}

__asm__(".globl _FUN_8c0bf170\n.set _FUN_8c0bf170, _FUN_8c0bf170_def\n");
