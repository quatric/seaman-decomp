#include "../decls.h"
undefined4 FUN_8c1f026a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 1) {
    FUN_8c1f468a(ar5);
  }
  else if (ar4 == 2) {
    FUN_8c1f4656(ar5);
  }
  else if (ar4 == 4) {
    FUN_8c1f46de(ar5);
  }
  else if (ar4 == 3) {
    FUN_8c1f469e(ar5);
  }
  else if (ar4 == 6) {
    FUN_8c1f46ca(ar5);
  }
  else if (ar4 == 5) {
    FUN_8c1f4672(ar5);
  }
  else if (ar4 == 0) {
    FUN_8c1f46f2(ar5);
  }
  else if (ar4 == 7) {
    FUN_8c1f4716(ar5);
  }
  else if (ar4 == 8) {
    FUN_8c1f472a(ar5);
  }
  else {
    if (ar4 != 9) {
      return 0xffffffff;
    }
    FUN_8c1f4764(ar5);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f026a\n.set _FUN_8c1f026a, _FUN_8c1f026a_def\n");
