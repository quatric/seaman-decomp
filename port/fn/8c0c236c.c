#include "../decls.h"
undefined4 FUN_8c0c236c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar5 < 0x19) {
    if (ar5 < 0x18) {
      if (0xe < ar5) {
        return ar5;
      }
      if (1 < ar5) {
                    
        switch((uint)ar5) {
        case 2:
          return 4;
        default:
          return ar5;
        case 4:
          return 8;
        case 5:
          return 10;
        case 7:
        case 9:
        case 0xb:
          goto switchD_8c0c2396_caseD_3;
        case 0xc:
          return 0xd;
        }
      }
      return ar5;
    }
  }
  else if (ar5 != 0x1a) {
    return ar5;
  }
switchD_8c0c2396_caseD_3:
  return 0xb;
}

__asm__(".globl _FUN_8c0c236c\n.set _FUN_8c0c236c, _FUN_8c0c236c_def\n");
