#include "../decls.h"
undefined4 FUN_8c11adde_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  
  puStack_10 = ar5;
  puStack_c = ar6;
  if (ar5 == (undefined4 *)0x0) {
    FUN_8c1148c4(ar4,0,ar6,ar7);
    FUN_8c113bcc(ar4,ar5,ar6,ar7);
    FUN_8c113ac8(ar4,ar5,ar6,ar7);
    *(undefined **)(0x1a4 + ar4) = (&FUN_8c11ad68);
  }
  else {
    uVar1 = FUN_8c11a634(ar4,&uStack_14,ar6,ar7);
    *puStack_10 = uStack_14;
    *puStack_c = uVar1;
  }
  *(undefined1 *)(0x1d8 + ar4) = 1;
  return 0;
}

__asm__(".globl _FUN_8c11adde\n.set _FUN_8c11adde, _FUN_8c11adde_def\n");
