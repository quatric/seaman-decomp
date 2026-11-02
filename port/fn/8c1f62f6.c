#include "../decls.h"
undefined4 FUN_8c1f62f6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *in_r1;
  undefined4 a5;
  int ar6_00;
  uint uVar2;
  undefined4 *puVar3;
  uint a4;
  
  if (*in_r1 != 0) {
    FUN_8c1efcae(ar4,ar5,ar6,ar7);
  }
  ar6_00 = (int)0x4e0;
  a5 = 0;
  memset(0x8c4727c4,0,ar6_00,ar7);
  uVar2 = (int)0x4e0 + 0x8c4727c4;
  puVar3 = 0x8c472ca4;
  a4 = 0x8c4727c4;
  do {
    uVar1 = s_no_device_1f5f4e(a4,a5,ar6_00,ar7);
    a4 = a4 + 0x34;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  } while (a4 < uVar2);
  return uVar1;
}

__asm__(".globl _FUN_8c1f62f6\n.set _FUN_8c1f62f6, _FUN_8c1f62f6_def\n");
