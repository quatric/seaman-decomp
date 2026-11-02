#include "../decls.h"
undefined4 FUN_8c022128_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*ar4 != 0) {
    iVar1 = FUN_8c013adc(ar5,ar5,ar6,ar7);
    iVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                      (iVar1 * 0x190,0xbb8,ar6,ar7);
    uVar2 = FUN_8c022bf8(ar4 + 1,-iVar1,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c022128\n.set _FUN_8c022128, _FUN_8c022128_def\n");
