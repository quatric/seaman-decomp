#include "../decls.h"
int FUN_8c2666cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  
  ar5_00 = FUN_8c266690(ar4,ar5,ar6,ar7);
  if (ar5_00 == 0) {
    *(undefined4 *)(ar4 + 4) = 0;
  }
  else {
    FUN_8c2688a0(FUN_8c2666cc,ar5_00,ar6,ar7,ar4);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2666cc\n.set _FUN_8c2666cc, _FUN_8c2666cc_def\n");
