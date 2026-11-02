#include "../decls.h"
undefined4 FUN_8c0213bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = FUN_8c021370(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0213bc\n.set _FUN_8c0213bc, _FUN_8c0213bc_def\n");
