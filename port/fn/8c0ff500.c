#include "../decls.h"
undefined4 FUN_8c0ff500_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = get_field_24_05c284(*ar5,ar5,ar6,ar7);
  piVar2 = (int *)(iVar1 * 4 + 0x8c441348);
  *piVar2 = *piVar2 + -1;
  iVar1 = *ar5;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 8) + 8))(iVar1,1,ar6,ar7);
  }
  *ar5 = 0;
  return 0;
}

__asm__(".globl _FUN_8c0ff500\n.set _FUN_8c0ff500, _FUN_8c0ff500_def\n");
