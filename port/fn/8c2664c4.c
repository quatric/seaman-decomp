#include "../decls.h"
int FUN_8c2664c4_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int ar5_00;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c266214(ar4,ar5 + 0x14,ar6,ar7);
    FUN_8c266288(ar4,ar5 + 0x18,ar6,ar7);
    *ar5 = 0;
    ar5[1] = 0;
    FUN_8c266620(ar4,ar5 + 2,ar6,ar7);
    FUN_8c266368(ar4,ar5 + 3,ar6,ar7);
    FUN_8c2663d8(ar4,ar5 + 6,ar6,ar7);
    FUN_8c266448(ar4,ar5 + 8,ar6,ar7);
    FUN_8c2662f8(ar4,ar5 + 4,ar6,ar7);
    FUN_8c2661a4(ar4,ar5 + 5,ar6,ar7);
    FUN_8c266134(ar4,ar5 + 0x10,ar6,ar7);
    in_r0 = FUN_8c2665b0(ar4,ar5 + 0xc,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2664c4,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2664c4\n.set _FUN_8c2664c4, _FUN_8c2664c4_def\n");
