#include "../decls.h"
undefined4 FUN_8c2646fe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ain0;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 8);
  ain0 = FUN_8c2631c2(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  if (*(char *)(ar4 + 0x6c) != '\0') {
    if (ain0 < 0) {
      ain0 = ain0 + 0x7ff;
    }
    uVar1 = FUN_8c263534(uVar1,ain0 >> 0xb,ar6,ar7);
    return uVar1;
  }
  uVar1 = FUN_8c26311e(*(undefined4 *)(ar4 + 4),0xffffffff,ar6,ar7,ain0);
  uVar1 = FUN_8c26357a(*(undefined4 *)(ar4 + 8),0x7fffffff,ar6,ar7,uVar1);
  return uVar1;
}

__asm__(".globl _FUN_8c2646fe\n.set _FUN_8c2646fe, _FUN_8c2646fe_def\n");
