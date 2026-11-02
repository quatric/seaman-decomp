#include "../decls.h"
undefined4 Class_12ad14_m4_0a43d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 0;
  ar6_00 = 0xffffffff;
  s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0);
  uVar1 = 3;
  s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,3,ar6_00,ar7_00);
  uVar1 = (*(code *)(&s_CAnimBody_SetFrame_033e6e))
                    (ar4 + 0xb0,uVar1,ar6_00,ar7_00);
  return uVar1;
}

__asm__(".globl _Class_12ad14_m4_0a43d4\n.set _Class_12ad14_m4_0a43d4, _Class_12ad14_m4_0a43d4_def\n");
