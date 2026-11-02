#include "../decls.h"
undefined4 FUN_8c02ef60_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar5 < 8) && (1 < ar5)) {
                    
    switch((uint)ar5) {
    case 2:
      return 0;
    case 3:
      return 1;
    case 4:
      return 2;
    case 5:
      return 3;
    case 6:
      return 4;
    case 7:
      return 5;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c02ef60\n.set _FUN_8c02ef60, _FUN_8c02ef60_def\n");
