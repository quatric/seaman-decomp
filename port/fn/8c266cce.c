#include "../decls.h"
int FUN_8c266cce_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    ar5_00 = FUN_8c2666cc(ar4,ar5,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266ccc,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266cce\n.set _FUN_8c266cce, _FUN_8c266cce_def\n");
