#include "../decls.h"
uint FUN_8c1017f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int ar4_00;
  undefined4 ar5_00;
  
  *(char *)(ar4 + 0x28) = *(char *)(ar4 + 0x28) + '\x01';
  ar5_00 = 5;
  ar4_00 = (int)*(char *)(ar4 + 0x28);
  uVar1 = libgcc_divide_helper_01031c(ar4_00,5,ar6,ar7);
  *(char *)(ar4 + 0x28) = (char)uVar1;
  uVar1 = sh4_tmu_1f88e6(ar4_00,ar5_00,ar6,ar7);
  *(undefined4 *)(*(char *)(ar4 + 0x28) * 8 + ar4) = uVar1;
  *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(*(char *)(ar4 + 0x28) * 8 + ar4);
  if (*(char *)(ar4 + 0x28) == '\0') {
    *(undefined4 *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) = 0;
  }
  else {
    ar6 = *(undefined4 *)(*(char *)(ar4 + 0x28) * 8 + ar4);
    ar5_00 = *(undefined4 *)((*(char *)(ar4 + 0x28) + -1) * 8 + ar4);
    uVar1 = FUN_8c101de0(ar4,ar5_00,ar6,ar7);
    *(undefined4 *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) = uVar1;
  }
  uVar2 = 0;
  if (*(int *)(0xb0 + ar4) != 0) {
    if (*(uint *)(0xbc + ar4) < *(uint *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4)) {
      if (0x124f80 <
          (uint)(*(int *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) - *(int *)(0xbc + ar4))) {
        uVar2 = FUN_8c101c64(ar4,ar5_00,ar6,ar7);
      }
      else {
        uVar2 = 0xc3500;
        if (0xc3500 <
            (uint)(*(int *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) - *(int *)(0xbc + ar4))) {
          *(undefined1 *)(0xb8 + ar4) = 2;
          uVar2 = 0xc4;
          *(undefined4 *)(0xc4 + ar4) = 0;
        }
      }
    }
    else {
      uVar2 = *(uint *)(0xbc + ar4);
      if (*(uint *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) < *(uint *)(0xbc + ar4)) {
        if (0x124f80 <
            (uint)(*(int *)(0xbc + ar4) - *(int *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4))) {
          uVar2 = FUN_8c101c64(ar4,ar5_00,ar6,ar7);
        }
        else {
          uVar2 = 0xc3500;
          if (0xc3500 <
              (uint)(*(int *)(0xbc + ar4) - *(int *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4)))
          {
            *(undefined1 *)(0xb8 + ar4) = 2;
            uVar2 = 0xc4;
            *(undefined4 *)(0xc4 + ar4) = 0;
          }
        }
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1017f4\n.set _FUN_8c1017f4, _FUN_8c1017f4_def\n");
