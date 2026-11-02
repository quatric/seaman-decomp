#include "../decls.h"
undefined4
s_E8101208_parameter_error_ADX_263e5c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int in_r2;
  int in_r3;
  int unaff_r14;
  undefined4 in_PR;
  
  *(short *)(in_r3 + in_r2) = (short)ar6;
  if (ar5 < *(char *)(unaff_r14 + 3)) {
    uVar1 = (*(code *)&SUB_8c262a12)(*(undefined4 *)(unaff_r14 + 0xc));
    return uVar1;
  }
  uVar1 = FUN_8c25ece6(ar4,ar5,ar6,ar7,s_E8101208__parameter_error__ADXT__8c273038,in_PR);
  return uVar1;
}

__asm__(".globl _s_E8101208_parameter_error_ADX_263e5c\n.set _s_E8101208_parameter_error_ADX_263e5c, _s_E8101208_parameter_error_ADX_263e5c_def\n");
