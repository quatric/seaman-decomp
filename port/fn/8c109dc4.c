#include "../decls.h"
undefined4 FUN_8c109dc4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  
  if (*(char *)(0x98 + ar4) == '\x03') {
    ar5_00 = 1;
    uVar1 = FUN_8c109e34(*(undefined4 *)(ar5 + 0x10),1,ar6,ar7);
    if ((((char)uVar1 == '\x05') && (*(int *)(0x874 + ar4) == 0)) &&
       (uVar1 = FUN_8c02d1d0(*(int *)(ar5 + 4) + 0xa8,ar5_00,ar6,ar7),
       (char)uVar1 == '\x01')) {
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c109dc4\n.set _FUN_8c109dc4, _FUN_8c109dc4_def\n");
