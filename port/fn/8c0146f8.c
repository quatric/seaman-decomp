#include "../decls.h"
int * FUN_8c0146f8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (int)(&DATA_8c129808);
  Vec3_ctor_zero(ar4 + 1,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 5,ar5,ar6,ar7);
  ar4[10] = 0x8c2787e8;
  *(undefined4 *)0x8c27882c = 0x3f777777;
  ((undefined1 *)1)[0x8c27882c] = 0x3333333;
  FUN_8c014764(ar4[10],ar5,ar6,ar7);
  (**(code **)(*ar4 + 0x14))(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0146f8\n.set _FUN_8c0146f8, _FUN_8c0146f8_def\n");
