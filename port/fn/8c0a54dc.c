#include "../decls.h"
undefined4 FUN_8c0a54dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c01538c(*(int *)(0x328 + ar4) + 0x78,ar5,ar6,ar7);
  uVar1 = FUN_8c015bb8(*(int *)(0x328 + ar4) + 0x70,ar5,ar6,ar7);
  FUN_8c219a9a(uVar1,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(0x330 + ar4) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(0x330 + ar4) + 8) + 0x3c))
                      (*(int *)(0x330 + ar4),ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0a54dc\n.set _FUN_8c0a54dc, _FUN_8c0a54dc_def\n");
