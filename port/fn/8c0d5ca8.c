#include "../decls.h"
int FUN_8c0d5ca8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < 0x226; iVar3 = iVar3 + 1) {
    iVar1 = (*(code *)(&get_field_44_0d5ca0))
                      (iVar3 * 0x88 + ar4 + 0x62c,ar5,ar6,ar7);
    if (iVar1 == 1) {
      FUN_8c0d294c(iVar3 * 0x88 + ar4 + 0x62c,ar5,ar6,ar7);
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0d5ca8\n.set _FUN_8c0d5ca8, _FUN_8c0d5ca8_def\n");
