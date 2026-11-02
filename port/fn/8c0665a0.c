#include "../decls.h"
undefined4 * FUN_8c0665a0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_8c02c518(*(undefined4 *)(ar5 + 4),ar5,ar6,ar7);
  if ((iVar1 == 0) || (iVar1 != 1)) {
    if (*(int *)(ar4 + 4) == 2) {
      puVar2 = (undefined4 *)get_field_8_066620(ar4,ar5,ar6,ar7);
    }
    else {
      get_field_8_066620(ar4,ar5,ar6,ar7);
      puVar2 = &DAT_8c06661c;
    }
  }
  else {
    puVar2 = (undefined4 *)&DAT_8c066614;
  }
  return puVar2;
}

__asm__(".globl _FUN_8c0665a0\n.set _FUN_8c0665a0, _FUN_8c0665a0_def\n");
