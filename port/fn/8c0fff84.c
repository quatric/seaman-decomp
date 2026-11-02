#include "../decls.h"
undefined4 FUN_8c0fff84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_PR;
  
  if (*(int *)(ar4 + 0x188) != 6) {
    ar5_00 = *(undefined4 *)(ar4 + 0x188);
    FUN_8c0fffec(ar4 + 0x15c,ar5_00,ar6,ar7,in_PR);
    (**(code **)(*(int *)(ar4 + 0x15c) + 0x14))((int *)(ar4 + 0x15c),ar5_00,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c0fff84\n.set _FUN_8c0fff84, _FUN_8c0fff84_def\n");
