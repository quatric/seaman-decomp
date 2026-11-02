#include "../decls.h"
undefined4 FUN_8c259be8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  _DAT_8c4b3338 = FUN_8c1f397e(ar4,0,ar6,ar7);
  if ((_DAT_8c4b3338 != 0) &&
     (iVar1 = FUN_8c1f30d4(_DAT_8c4b3338,&DAT_8c277c9c,ar6,ar7), iVar1 != 0)) {
    DAT_8c277c98 = DAT_8c277c9c + 0x7ff >> 0xb;
    DAT_8c277c94 = 0;
    DAT_8c277ca0 = 0;
    DAT_8c277ca4 = 0;
    DAT_8c277ca8 = 0;
    DAT_8c277cac = 0;
    return 0;
  }
  _DAT_8c4aa6b4 = 2;
  return 0xfffffffe;
}

__asm__(".globl _FUN_8c259be8\n.set _FUN_8c259be8, _FUN_8c259be8_def\n");
