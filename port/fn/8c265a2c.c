#include "../decls.h"
int FUN_8c265a2c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  
  ar5_00 = 0;
  FUN_8c265e08(ar4,ar5,ar6,ar7);
  if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar5 == (undefined4 *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    *ar5 = *(undefined4 *)(ar4 + 4);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265a2c,ar5_00,ar6,ar7,ar5);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265a2c\n.set _FUN_8c265a2c, _FUN_8c265a2c_def\n");
