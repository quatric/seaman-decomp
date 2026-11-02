#include "../decls.h"
undefined4 FUN_8c06d6ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(int *)(0x220 + ar4) == 0) && (*(int *)(0x230 + ar4) == 7)) {
    return 1;
  }
  return *(undefined4 *)(0x220 + ar4);
}

__asm__(".globl _FUN_8c06d6ec\n.set _FUN_8c06d6ec, _FUN_8c06d6ec_def\n");
