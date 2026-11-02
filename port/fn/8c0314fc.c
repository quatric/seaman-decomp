#include "../decls.h"
undefined4 CAnimBody_CheckThisMotionData_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *ar5_00;
  undefined1 auStack_1c [8];
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int iStack_8;
  
  ar5_00 = ar5;
  puStack_10 = ar5;
  iStack_8 = deref_u32(*(int *)(ar4 + 0x14) + (int)ar5 * 4,ar5,ar6,ar7);
  if (iStack_8 == 0) {
    (*(code *)(&FUN_8c014334))
              (auStack_1c,ar5_00,ar6,ar7,(&DATA_8c132c08) + 0x82);
    ar7 = 2;
    ar6 = 1;
    ar5_00 = auStack_1c;
    (*(code *)(&report_error_message))
              ((&DATA_8c132c08) + 0x85,ar5_00,1,2);
  }
  puStack_14 = ar5;
  uVar1 = FUN_8c031588(*(int *)(ar4 + 0x14) + (int)ar5 * 4,ar5_00,ar6,ar7);
  return uVar1;
}

__asm__(".globl _CAnimBody_CheckThisMotionData\n.set _CAnimBody_CheckThisMotionData, _CAnimBody_CheckThisMotionData_def\n");
