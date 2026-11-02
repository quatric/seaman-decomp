#include "../decls.h"
int FUN_8c2378ba_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int in_r2;
  undefined4 *in_r3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 unaff_r14;
  undefined4 in_PR;
  
  ar6_00 = *(undefined4 *)(*(int *)*in_r3 + in_r2 + 8);
  iVar2 = DAT_8c277b08;
  ar5_00 = DAT_8c277b0c;
  iVar1 = FUN_8c25a566(DAT_8c277b08,DAT_8c277b0c,ar6_00,ar7);
  FUN_8c25b5b4(iVar2,ar5_00,ar6_00,ar7,in_PR);
  if (iVar1 < 0) {
    _DAT_8c4aa6b4 = 1;
    iVar2 = -1;
    _DAT_8c4aa6ac = unaff_r14;
  }
  else {
    iVar2 = FUN_8c23782c(iVar1 * 0x44 + DAT_8c277b08,ar5_00,ar6_00,ar7);
    if (iVar2 < 0) {
      _DAT_8c4aa6ac = unaff_r14;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2378ba\n.set _FUN_8c2378ba, _FUN_8c2378ba_def\n");
