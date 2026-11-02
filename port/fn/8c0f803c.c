#include "../decls.h"
undefined4 FUN_8c0f803c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  
  *(undefined4 *)(0x89140 + ar4) = ar5;
  ar5_00 = 0;
  uVar1 = FUN_8c0b93c0(*(undefined4 *)(0x89140 + ar4),0,ar6,ar7);
  *(undefined4 *)(0x1028 + ar4) = uVar1;
  uVar1 = (*(code *)(&get_field_c8_0bced0))
                    (*(undefined4 *)(0x89140 + ar4),ar5_00,ar6,ar7);
  *(undefined4 *)(0x1030 + ar4) = uVar1;
  uVar1 = (*(code *)(&get_field_c4_0f8128))
                    (*(undefined4 *)(0x89140 + ar4),ar5_00,ar6,ar7);
  *(undefined4 *)(0x1038 + ar4) = uVar1;
  if (*(int *)(0x1038 + ar4) < 0xb2) {
    *(int *)(0x1038 + ar4) = *(int *)(0x1038 + ar4) + 1;
  }
  else {
    *(undefined4 *)(0x1038 + ar4) = 0;
  }
  uVar1 = FUN_8c0b951c(*(undefined4 *)(0x89140 + ar4),ar5_00,ar6,ar7);
  *(undefined4 *)(0x103c + ar4) = uVar1;
  *(undefined4 *)(0x1040 + ar4) = 0;
  if (*(char *)(*(int *)(0x89140 + ar4) + 0x2c) == '\x01') {
    *(undefined4 *)(0x1040 + ar4) = 1;
  }
  uVar1 = (*(code *)(&FUN_8c0bb158))
                    (*(undefined4 *)(0x89140 + ar4),ar4 + 0x101c,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f803c\n.set _FUN_8c0f803c, _FUN_8c0f803c_def\n");
