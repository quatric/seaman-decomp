#include "../decls.h"
int FUN_8c01bc2c_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined1 *ar6_00;
  
  if (_DAT_8c2791b0 == 3) {
    ar6_00 = ar6;
    ar5_00 = FUN_8c01bcc0(ar4,ar5,ar6,ar7);
    if (ar5_00 < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_8c01acd0(ar4,ar5_00,ar6_00,ar7);
      *ar6 = 0;
      if (iVar1 == 5) {
        strcpy(ar6,ar5_00 * 0x28 + ar4 + 0x245c,ar6_00,ar7,ar5);
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01bc2c\n.set _FUN_8c01bc2c, _FUN_8c01bc2c_def\n");
