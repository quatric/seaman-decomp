#include "../decls.h"
int FUN_8c26686a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int ar5_00;
  
  ar5_00 = 0;
  if (((char)ar5 < '\0') || (' ' < (char)ar5)) {
    ar5_00 = 0x3000001;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c26686a,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c26686a\n.set _FUN_8c26686a, _FUN_8c26686a_def\n");
