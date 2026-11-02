#include "../decls.h"
undefined4 FUN_8c1fda7e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  iVar1 = FUN_8c1fd550(ar4,ar5,ar6,ar7);
  if ((iVar1 != 0) && (*(char *)(iVar2 + 8) != '\0')) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1fda7e\n.set _FUN_8c1fda7e, _FUN_8c1fda7e_def\n");
