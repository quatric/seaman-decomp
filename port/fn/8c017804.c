#include "../decls.h"
undefined4 FUN_8c017804_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c015ad4(ar4 + 0x90,&DAT_8c12ca68,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x2c) = 1;
  return 1;
}

__asm__(".globl _FUN_8c017804\n.set _FUN_8c017804, _FUN_8c017804_def\n");
