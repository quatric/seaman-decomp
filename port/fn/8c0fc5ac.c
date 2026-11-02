#include "../decls.h"
undefined4 FUN_8c0fc5ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(0x88 + ar4);
  uVar1 = rand(ar4,ar5,ar6,ar7);
  iVar2 = (*(code *)(&libgcc_divide_helper_01031c))
                    (uVar1,*(undefined4 *)(iVar3 + 0x28),ar6,ar7);
  uVar1 = s_ERROR_0fb0de(ar4,iVar3 + iVar2 * 0x20 + 0x2c,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fc5ac\n.set _FUN_8c0fc5ac, _FUN_8c0fc5ac_def\n");
