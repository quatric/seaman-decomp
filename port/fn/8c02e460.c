#include "../decls.h"
undefined4 * FUN_8c02e460_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  
  *ar4 = 0;
  ar4[1] = 1;
  ar6_00 = ar6;
  FUN_8c02cb24(ar4,ar5,ar6,ar7);
  FUN_8c02cadc(ar4,ar6,ar6_00,ar7);
  ar4[4] = 0;
  ar4[10] = 0;
  ar4[5] = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  ar4[6] = 0;
  *(undefined1 *)(ar4 + 0xc) = 0;
  ar4[0xd] = 0;
  ar4[0xe] = 0;
  ar4[0xb] = 5;
  return ar4;
}

__asm__(".globl _FUN_8c02e460\n.set _FUN_8c02e460, _FUN_8c02e460_def\n");
