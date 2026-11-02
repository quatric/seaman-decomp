#include "../decls.h"
uint FUN_8c097e0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(int *)(0x12c + ar4);
  if (iVar1 == 0) {
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5 = 2;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0)
    ;
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
    *(int *)(0x12c + ar4) = *(int *)(0x12c + ar4) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    return 0;
  }
  iVar1 = (*(code *)(&CAnimBody_AdvanceFrame_wrapper))
                    (ar4 + 0xb0,ar5,ar6,ar7);
  if (iVar1 == 1) {
    ar5_00 = 2;
    s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,2,ar6,ar7);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6,ar7);
    *(int *)(0x12c + ar4) = *(int *)(0x12c + ar4) + 1;
  }
  return (uint)(iVar1 != 1);
}

__asm__(".globl _FUN_8c097e0c\n.set _FUN_8c097e0c, _FUN_8c097e0c_def\n");
