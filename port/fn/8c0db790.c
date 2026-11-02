#include "../decls.h"
undefined4 FUN_8c0db790_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)(&s_Invalid_Item_number_CNodePtr_0fe424))
                    (ar5 * 0x3c + ar4 + 0x3a8,ar6,ar6,ar7);
  return *(undefined4 *)(iVar1 + 8);
}

__asm__(".globl _FUN_8c0db790\n.set _FUN_8c0db790, _FUN_8c0db790_def\n");
