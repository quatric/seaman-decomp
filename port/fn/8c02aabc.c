#include "../decls.h"
int FUN_8c02aabc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  uVar1 = (*(code *)(&FUN_8c015510))
                    (*(int *)((short)uVar1 * 0x124 + *(int *)(0x328 + ar4)) +
                     0x1e4,ar5,ar6,ar7);
  iVar2 = *(int *)(0x344 + ar4);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  return iVar2;
}

__asm__(".globl _FUN_8c02aabc\n.set _FUN_8c02aabc, _FUN_8c02aabc_def\n");
