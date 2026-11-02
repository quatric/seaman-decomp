#include "../decls.h"
undefined4 FUN_8c0fc4fc_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  int iVar2;
  undefined1 auStack_18 [16];
  
  if ((*(int *)(ar5 + 0x28) != 1) && (*(int *)(ar5 + 0x28) != 2)) {
    for (iVar2 = 0; iVar2 < *(int *)(ar5 + 0x6c); iVar2 = iVar2 + 1) {
      ar5_00 = ar5 + iVar2 * 0x68 + 0x70;
      iVar1 = FUN_8c0faf30((&DATA_8c141dd0) + 0x4c,ar5_00,ar6,ar7);
      if (iVar1 == 0) {
        FUN_8c014334(auStack_18,ar5_00,ar6,ar7,(&DATA_8c141dd0) + 0x40);
        iVar1 = FUN_8c0faf30(auStack_18,ar5 + iVar2 * 0x68 + 0xb0,ar6,ar7);
        if (iVar1 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0fc4fc\n.set _FUN_8c0fc4fc, _FUN_8c0fc4fc_def\n");
