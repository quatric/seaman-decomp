#include "../decls.h"
undefined4 FUN_8c016fa4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c015ad4(ar4 + 0x40,&DAT_8c12f1b8,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x2c) = 0;
  return 0;
}

__asm__(".globl _FUN_8c016fa4\n.set _FUN_8c016fa4, _FUN_8c016fa4_def\n");
