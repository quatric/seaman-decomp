#include "../decls.h"
int FUN_8c2378a6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ain0;
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  ar6_00 = *(undefined4 *)(*DAT_8c277b04 + ar4 * 0xc + 8);
  iVar1 = DAT_8c277b08;
  ar5_00 = DAT_8c277b0c;
  ain0 = FUN_8c25a566(DAT_8c277b08,DAT_8c277b0c,ar6_00,ar7);
  FUN_8c25b5b4(iVar1,ar5_00,ar6_00,ar7,ain0);
  if (ain0 < 0) {
    _DAT_8c4aa6b4 = 1;
    iVar1 = -1;
    _DAT_8c4aa6ac = ar4;
  }
  else {
    iVar1 = FUN_8c23782c(ain0 * 0x44 + DAT_8c277b08,ar5_00,ar6_00,ar7);
    if (iVar1 < 0) {
      _DAT_8c4aa6ac = ar4;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c2378a6\n.set _FUN_8c2378a6, _FUN_8c2378a6_def\n");
