#include "../decls.h"
undefined4 FUN_8c263e50_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  *(short *)(ar5 * 2 + ar4 + 0x42) = (short)ar6;
  if (ar5 < *(char *)(ar4 + 3)) {
    uVar1 = (*(code *)&SUB_8c262a12)(*(undefined4 *)(ar4 + 0xc));
    return uVar1;
  }
  uVar1 = FUN_8c25ece6(ar4,ar5,ar6,ar7,s_E8101208__parameter_error__ADXT__8c273038,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c263e50\n.set _FUN_8c263e50, _FUN_8c263e50_def\n");
