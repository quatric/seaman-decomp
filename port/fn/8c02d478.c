#include "../decls.h"
int FUN_8c02d478_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_8c02c380(ar4 + 0xf8,ar5,ar6,ar7);
  iVar2 = get_field_4_02d4bc(ar4 + 0xf8,ar5,ar6,ar7);
  return iVar1 * iVar2;
}

__asm__(".globl _FUN_8c02d478\n.set _FUN_8c02d478, _FUN_8c02d478_def\n");
