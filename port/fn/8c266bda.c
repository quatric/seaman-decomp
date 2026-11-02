#include "../decls.h"
int FUN_8c266bda_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  int *unaff_r13;
  int ar5_01;
  undefined4 in_PR;
  
  if (*unaff_r13 == 0) {
    ar5_01 = 0xd000001;
  }
  else {
    ar6 = 0x200;
    *(undefined4 *)(*unaff_r13 + 0x158) = ar4;
    ar5_00 = 0;
    _DAT_8c4bd420 = ar4;
    memset(ar4,0,0x200,ar7);
    *(undefined4 *)(*unaff_r13 + 0x160) = 0;
    ar5_01 = FUN_8c265704(*unaff_r13 + 0x178,ar5_00,ar6,ar7);
  }
  if (ar5_01 != 0) {
    FUN_8c2688a0(FUN_8c266bd4,ar5_01,ar6,ar7,in_PR);
  }
  return ar5_01;
}

__asm__(".globl _FUN_8c266bda\n.set _FUN_8c266bda, _FUN_8c266bda_def\n");
