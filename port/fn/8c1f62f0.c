#include "../decls.h"
undefined4 FUN_8c1f62f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int ar6_00;
  uint uVar2;
  undefined4 *puVar3;
  uint ar4_00;
  
  if (*(undefined4 *)0x8c4727bc != 0) {
    FUN_8c1efcae(0x8c4594c0);
  }
  ar6_00 = (int)0x4e0;
  ar5_00 = 0;
  memset(0x8c4727c4);
  uVar2 = (int)0x4e0 + 0x8c4727c4;
  puVar3 = 0x8c472ca4;
  ar4_00 = 0x8c4727c4;
  do {
    uVar1 = s_no_device_1f5f4e(ar4_00,ar5_00,ar6_00,ar7);
    ar4_00 = ar4_00 + 0x34;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  } while (ar4_00 < uVar2);
  return uVar1;
}

__asm__(".globl _FUN_8c1f62f0\n.set _FUN_8c1f62f0, _FUN_8c1f62f0_def\n");
