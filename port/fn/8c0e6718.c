#include "../decls.h"
undefined4 FUN_8c0e6718_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  if (iVar1 != 0xf) {
    ar5 = s_CEnv_AddItem_0da93a(ar4,ar5,ar6,ar7);
  }
  return ar5;
}

__asm__(".globl _FUN_8c0e6718\n.set _FUN_8c0e6718, _FUN_8c0e6718_def\n");
