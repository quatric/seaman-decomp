#include "../decls.h"
undefined4 FUN_8c262524_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ain0;
  undefined4 uVar1;
  char *ar4_00;
  char *a4;
  undefined4 in_PR;
  
  FUN_8c260ca0(ar4,ar5,ar6,ar7,in_PR);
  a4 = &DAT_8c4b3b20;
  do {
    ain0 = (int)*a4;
    ar4_00 = a4;
    if (ain0 == 1) {
      ain0 = FUN_8c2624a0(a4,ar5,ar6,ar7);
    }
    a4 = a4 + 0x30;
  } while (a4 < (char *)0x8c4b3e20);
  uVar1 = FUN_8c260cc8(ar4_00,ar5,ar6,ar7,ain0);
  return uVar1;
}

__asm__(".globl _FUN_8c262524\n.set _FUN_8c262524, _FUN_8c262524_def\n");
