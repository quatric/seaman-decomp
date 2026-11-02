#include "../decls.h"
undefined4 FUN_8c20e720_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((((*(int *)(ar4 + 8) == 0) &&
       (((*(int *)(ar4 + 0x20) == 2 || (*(int *)(ar4 + 0x20) == 3)) && (*(int *)(ar4 + 0x54) == 1)))
       ) && (((*(int *)(ar4 + 0x2c) == 10 && (*(int *)(ar4 + 0x30) == 0xb)) &&
             (*(int *)(ar4 + 0x34) == 0)))) && (*(int *)(ar4 + 0x38) == 0)) {
    uVar1 = 2;
  }
  if ((((*(int *)(ar4 + 8) == 2) && ((*(int *)(ar4 + 0x20) == 2 || (*(int *)(ar4 + 0x20) == 3)))) &&
      (*(int *)(ar4 + 0x54) == 1)) &&
     ((((*(int *)(ar4 + 0x2c) == 10 && (*(int *)(ar4 + 0x30) == 0xb)) && (*(int *)(ar4 + 0x34) == 0)
       ) && (*(int *)(ar4 + 0x38) == 1)))) {
    uVar1 = 3;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c20e720\n.set _FUN_8c20e720, _FUN_8c20e720_def\n");
