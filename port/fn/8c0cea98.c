#include "../decls.h"
undefined4 FUN_8c0cea98_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int a5;
  
  a5 = ar5;
  iVar1 = get_field_24_05c284(ar5,ar5,ar6,ar7);
  uVar2 = (**(code **)(0x148 + *(int *)(ar5 + 8)))(ar5,a5,ar6,ar7);
  if ((iVar1 == 3) && ((short)uVar2 == 7)) {
    uVar2 = 1;
  }
  else if ((iVar1 == 5) && (2 < (short)uVar2)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0cea98\n.set _FUN_8c0cea98, _FUN_8c0cea98_def\n");
