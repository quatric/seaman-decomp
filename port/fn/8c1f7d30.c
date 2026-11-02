#include "../decls.h"
undefined4 FUN_8c1f7d30_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  
  if (ar5 == (undefined4 *)0x0) {
    return 0;
  }
  iStack_c = ar4 + 0x40;
  iStack_10 = ar4 + 0x2b;
  iStack_10 = FUN_8c1f7d80(iStack_10,&uStack_18,&uStack_14,ar7);
  ar5[1] = uStack_18;
  puVar1 = (&memmove);
  *ar5 = uStack_14;
  (*(code *)puVar1)(ar5 + 2,iStack_c,10,ar7);
  *(undefined1 *)((int)ar5 + 0x12) = 0;
  return iStack_10;
}

__asm__(".globl _FUN_8c1f7d30\n.set _FUN_8c1f7d30, _FUN_8c1f7d30_def\n");
