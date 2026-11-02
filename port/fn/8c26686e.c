#include "../decls.h"
int FUN_8c26686e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_PR;
  
  ar5_00 = 0;
  if ((ar4 < 0) || (0x20 < ar4)) {
    ar5_00 = 0x3000001;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(&LAB_8c26686a,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c26686e\n.set _FUN_8c26686e, _FUN_8c26686e_def\n");
