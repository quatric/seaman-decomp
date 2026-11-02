#include "../decls.h"
int FUN_8c0353bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  FUN_8c02bef8(ar5,ar5,ar6,ar7);
  FUN_8c035000(ar5,ar5_00,ar6,ar7);
  for (iVar3 = 0; iVar2 = (int)*(short *)(*(int *)(ar4 + 0x1c) + 2), iVar3 < iVar2;
      iVar3 = iVar3 + 1) {
    if (*(char *)(ar4 + iVar3 + 0xc) == '\0') {
      uVar1 = FUN_8c02bef8(ar5,ar5_00,ar6,ar7);
      if (*(short *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 4) <= (short)uVar1) {
        iVar2 = FUN_8c035000(ar5,ar5_00,ar6,ar7);
        if (*(short *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 6) <= iVar2) {
          *(undefined1 *)(ar4 + iVar3 + 0xc) = 1;
        }
      }
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0353bc\n.set _FUN_8c0353bc, _FUN_8c0353bc_def\n");
