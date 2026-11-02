#include "../decls.h"
int Class_12ad14_m3_0a427c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(0x128 + ar4) == 0) {
    uVar4 = 0;
    uVar3 = 0xffffffff;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0)
    ;
    uVar2 = 3;
    s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,3,uVar3,uVar4);
    iVar1 = (*(code *)(&s_CAnimBody_SetFrame_033e6e))
                      (ar4 + 0xb0,uVar2,uVar3,uVar4);
  }
  else {
    iVar1 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7);
    if ((iVar1 == 0xd) ||
       (iVar1 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7),
       iVar1 == 0xe)) {
      iVar1 = FUN_8c03f3ac(ar4 + 0xb0,ar5,ar6,ar7);
      if (iVar1 == 7) {
        iVar1 = rand_range(ar4,0,100,ar7);
        if (iVar1 < 0x50) {
          iVar1 = (*(code *)(&s_CAnimBody_SetAnimation_033a94))
                            (ar4 + 0xb0,0xd,0xffffffff,0);
        }
        else {
          iVar1 = (*(code *)(&s_CAnimBody_SetAnimation_033a94))
                            (ar4 + 0xb0,0xe,0xffffffff,0);
        }
      }
    }
    else {
      uVar4 = 0;
      uVar3 = 0xffffffff;
      uVar2 = 0xe;
      (*(code *)(&s_CAnimBody_SetAnimation_033a94))
                (ar4 + 0xb0,0xe,0xffffffff,0);
      iVar1 = (*(code *)(&s_CAnimBody_SetFrame_033e6e))
                        (ar4 + 0xb0,uVar2,uVar3,uVar4);
    }
  }
  return iVar1;
}

__asm__(".globl _Class_12ad14_m3_0a427c\n.set _Class_12ad14_m3_0a427c, _Class_12ad14_m3_0a427c_def\n");
