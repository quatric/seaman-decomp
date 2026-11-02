#include "../decls.h"
int FUN_8c268254_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int ar6_00;
  int ar5_00;
  char in_T;
  undefined4 in_PR;
  
  if (in_T == '\0') {
    _DAT_8c4bd530 = 0x15;
    DAT_8c4bd534 = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd535 = (undefined1)((char)ar5 + 0x80);
    DAT_8c4bd536 = (undefined1)ar6;
    ar6_00 = ar6 >> 8;
    DAT_8c4bd537 = (undefined1)((uint)ar6 >> 8);
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd530,(char)ar5 + 0x80,ar6_00,ar7);
  }
  else {
    ar5_00 = 0x7000103;
    ar6_00 = ar6;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c268250,ar5_00,ar6_00,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c268254\n.set _FUN_8c268254, _FUN_8c268254_def\n");
