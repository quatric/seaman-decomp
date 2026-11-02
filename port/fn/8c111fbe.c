#include "../decls.h"
int FUN_8c111fbe_def(int ar4,int ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = ar5 * 4;
  if (*(int *)(*(int *)(ar4 + 0x40) + iVar4) == *(int *)(ar4 + 0x3c)) {
    if ((*(int *)(ar4 + 0x38) != 0) && (*(int *)(*(int *)(ar4 + 0x2c) + iVar4) != 0)) {
      FUN_8c111208(ar4,ar5,0,ar7);
    }
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)(*(int *)(ar4 + 0x2c) + iVar4);
    iVar1 = *piVar2;
    *piVar2 = iVar1 + (uint)*(ushort *)(ar4 + 0xc);
    if (*(uint *)(ar4 + 0x20) <= *(uint *)(*(int *)(ar4 + 0x2c) + iVar4)) {
      *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar4) = *(undefined4 *)(ar4 + 0x1c);
    }
    *(int *)(*(int *)(ar4 + 0x40) + iVar4) = *(int *)(*(int *)(ar4 + 0x40) + iVar4) + 1;
    if (iVar1 == *(int *)(ar4 + 0x28)) {
      uVar3 = 0;
      if (*(int *)(ar4 + 0x14) != 0) {
        do {
          ar7 = uVar3 * 4;
          if ((iVar1 == *(int *)(*(int *)(ar4 + 0x2c) + ar7)) &&
             (*(int *)(*(int *)(ar4 + 0x40) + ar7) != *(int *)(ar4 + 0x3c))) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(ar4 + 0x14));
      }
      if (uVar3 == *(uint *)(ar4 + 0x14)) {
        *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar4);
        *(undefined1 *)(ar4 + 0x30) = 0;
      }
    }
    if (*(int *)(ar4 + 0x38) != 0) {
      FUN_8c111208(ar4,ar5,1,ar7);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c111fbe\n.set _FUN_8c111fbe, _FUN_8c111fbe_def\n");
