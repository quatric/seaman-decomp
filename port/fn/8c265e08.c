#include "../decls.h"
undefined4 FUN_8c265e08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar5_00;
  char in_IMASK;
  char in_S;
  byte in_T;
  int aiStack_10 [2];
  
  ar5_00 = aiStack_10;
  if ((((*(int *)(&DATA_8c2784c0) != 0) &&
       ((byte)((in_T | in_S << 1) & 0xf0 | in_IMASK << 4) == 0xf0)) &&
      ((*(code *)(&FUN_8c1f8d48))
                 (*(undefined4 *)((int)0x1ac + *(int *)(&DATA_8c2784c0)),aiStack_10,ar6,ar7),
      aiStack_10[0] == 0)) && (*(int *)((int)0x190 + *(int *)(&DATA_8c2784c0)) != 0)) {
    (*(code *)(&FUN_8c1f8cbc))
              (*(undefined4 *)((int)0x1ac + *(int *)(&DATA_8c2784c0)),ar5_00,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c265e08\n.set _FUN_8c265e08, _FUN_8c265e08_def\n");
