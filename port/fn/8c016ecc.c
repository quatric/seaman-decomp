#include "../decls.h"
undefined4 FUN_8c016ecc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 0xc + ar5) = *(undefined4 *)(iVar1 * 0xc + ar4 + 0x30);
    *(undefined4 *)(iVar1 * 0xc + ar5 + 4) = *(undefined4 *)(iVar1 * 0xc + ar4 + 0x34);
    *(undefined4 *)(iVar1 * 0xc + ar5 + 8) = *(undefined4 *)(iVar1 * 0xc + ar4 + 0x38);
  }
  return 8;
}

__asm__(".globl _FUN_8c016ecc\n.set _FUN_8c016ecc, _FUN_8c016ecc_def\n");
