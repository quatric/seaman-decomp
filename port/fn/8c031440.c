#include "../decls.h"
undefined4 Class_129cbc_m5_031440_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  
  iVar1 = get_field_10_031590(ar4 + 0xb0,ar5,ar6,ar7);
  ar7_00 = 0;
  uVar3 = 0xffffffff;
  iVar1 = iVar1 + -1;
  iVar2 = (*(code *)(&s_CAnimBody_SetAnimation_033a94))
                    (ar4 + 0xb0,iVar1,0xffffffff,0);
  if (iVar2 != 6) {
    iVar1 = get_field_1c_026dd8(ar4 + 0xb0,iVar1,uVar3,ar7_00);
    s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,iVar1,uVar3,ar7_00);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar1,uVar3,ar7_00);
  }
  uVar3 = (*(code *)(&s_CAnimBody_AdvanceFrame_033ba0))
                    (ar4 + 0xb0,iVar1,uVar3,ar7_00);
  return uVar3;
}

__asm__(".globl _Class_129cbc_m5_031440\n.set _Class_129cbc_m5_031440, _Class_129cbc_m5_031440_def\n");
