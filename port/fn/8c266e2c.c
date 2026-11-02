#include "../decls.h"
undefined4 FUN_8c266e2c_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int ar6_00;
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  undefined1 *puStack_c;
  
  ar6_00 = *(int *)(&DATA_8c2784c0);
  uVar1 = 0xd000001;
  if (((ar6_00 != 0) && (uVar1 = 0x7000103, ar4 != 0)) &&
     (uVar1 = 0x7000203, ar6 != (undefined1 *)0x0)) {
    puStack_c = ar6;
    (*(code *)(&FUN_8c268650))
              (*(char *)(ar4 + 1) * 0x40 + (int)0x400 + *(int *)(0x1b8 + ar6_00) +
               (char)ar5 * 0x20 + 0x11,auStack_10,ar6_00,ar7);
    *puStack_c = auStack_10[0];
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c266e2c\n.set _FUN_8c266e2c, _FUN_8c266e2c_def\n");
