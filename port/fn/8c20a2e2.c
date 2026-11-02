#include "../decls.h"
undefined4 FUN_8c20a2e2_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r3;
  undefined4 ar5_00;
  undefined4 *puVar2;
  int ar4_00;
  
  puVar1 = (&pvr_20a844);
  if (in_r3 < ar5) {
    ar5 = (int)0x3ff;
  }
  ar4_00 = ar4 * 4 + (int)0x1000;
  puVar2 = (undefined4 *)(ar4 * 4 + ar6);
  for (; ar4 < ar5; ar4 = ar4 + 1) {
    ar5_00 = *puVar2;
    puVar2 = puVar2 + 1;
    (*(code *)puVar1)(ar4_00,ar5_00,ar6,ar7);
    ar4_00 = ar4_00 + 4;
  }
  return 0;
}

__asm__(".globl _FUN_8c20a2e2\n.set _FUN_8c20a2e2, _FUN_8c20a2e2_def\n");
