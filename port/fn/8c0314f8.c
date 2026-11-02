#include "../decls.h"
undefined4 s_Check_This_Motion_Data_0314fc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_24 [8];
  int iStack_1c;
  int iStack_18;
  int iStack_10;
  
  iStack_18 = ar5;
  iStack_10 = deref_u32(*(int *)(ar4 + 0x14) + ar5 * 4);
  if (iStack_10 == 0) {
    (*(code *)(&FUN_8c014334))
              (auStack_24,(&DATA_8c132c08) + 0x82,ar5);
    (*(code *)(&report_error_message))
              ((&DATA_8c132c08) + 0x85,auStack_24,1,2,5);
  }
  iStack_1c = ar5;
  uVar1 = FUN_8c031588(*(int *)(ar4 + 0x14) + ar5 * 4);
  return uVar1;
}

__asm__(".globl _s_Check_This_Motion_Data_0314fc\n.set _s_Check_This_Motion_Data_0314fc, _s_Check_This_Motion_Data_0314fc_def\n");
