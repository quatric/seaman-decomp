#include "../decls.h"
undefined4 FUN_8c01acd0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint *ar5_00;
  uint uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [10];
  undefined1 auStack_16 [14];
  
  FUN_8c1f8176(auStack_16,ar5,ar6,ar7);
  ar5_00 = &uStack_24;
  FUN_8c1f826c(auStack_16,ar5_00,ar6,ar7);
  uStack_24 = uStack_24 + 10;
  while( true ) {
    FUN_8c01c984(ar4,ar5_00,ar6,ar7);
    FUN_8c1f8176(auStack_20,ar5_00,ar6,ar7);
    ar5_00 = &uStack_28;
    FUN_8c1f826c(auStack_20,ar5_00,ar6,ar7);
    if (uStack_24 < uStack_28) {
      return 0;
    }
    iVar1 = *(int *)(0x2450 + ar5 * 0x28 + ar4);
    if ((iVar1 != 2) && (iVar1 != 3)) break;
    FUN_8c01a630(ar4,ar5_00,ar6,ar7);
  }
  return *(undefined4 *)(0x2450 + ar5 * 0x28 + ar4);
}

__asm__(".globl _FUN_8c01acd0\n.set _FUN_8c01acd0, _FUN_8c01acd0_def\n");
