#include "../decls.h"
int FUN_8c026f7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  puVar2 = (undefined4 *)
           (*(code *)(&FUN_8c015510))
                     (*(int *)((short)uVar1 * 0x124 + *(int *)(0x328 + ar4)) +
                      0x1e4,ar5,ar6,ar7);
  *puVar2 = *(undefined4 *)
             (*(int *)((short)uVar1 * 0x124 + *(int *)(0x328 + ar4)) + 0x40);
  iVar3 = *(int *)(0x344 + ar4);
  *(undefined4 **)(iVar3 + 4) = puVar2;
  return iVar3;
}

__asm__(".globl _FUN_8c026f7c\n.set _FUN_8c026f7c, _FUN_8c026f7c_def\n");
