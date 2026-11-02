#include "../decls.h"
undefined4 FUN_8c2008f4_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int ar5_00;
  int ar5_01;
  int iVar1;
  int ar6_00;
  
  ar5_00 = 0xfffc;
  ar6_00 = 0xfffc + -2;
  while( true ) {
    ar5_01 = FUN_8c200890(ar4,ar5_00,ar6,ar7);
    if (ar5_01 < 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_8c20093a(ar4,ar5_01,ar6,ar7);
    if (-1 < iVar1) break;
    ar6 = ar6_00;
    FUN_8c20099e(ar4,ar5_01,ar6_00,ar7);
  }
  return ar5_01;
}

__asm__(".globl _FUN_8c2008f4\n.set _FUN_8c2008f4, _FUN_8c2008f4_def\n");
