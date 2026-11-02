#include "../decls.h"
int FUN_8c0db864_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_8c0db810(ar4,ar5,ar6,ar7);
  iVar2 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  return iVar2 - iVar1;
}

__asm__(".globl _FUN_8c0db864\n.set _FUN_8c0db864, _FUN_8c0db864_def\n");
