#include "../decls.h"
undefined4 FUN_8c111cdc_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (&memmove);
  iVar5 = ar6 * *(ushort *)(ar4 + 0xc);
  if ((*(char *)(ar4 + 0x30) == '\0') && (ar6 <= *(uint *)(ar4 + 8))) {
    if (*(uint *)(ar4 + 0x24) < *(uint *)(ar4 + 0x28)) {
      if (*(uint *)(ar4 + 0x28) < (uint)(*(int *)(ar4 + 0x24) + iVar5)) goto LAB_8c111d40;
      memmove(*(undefined4 *)(ar4 + 0x24),ar5,iVar5);
      *(int *)(ar4 + 0x24) = *(int *)(ar4 + 0x24) + iVar5;
    }
    else {
      if (*(uint *)(ar4 + 0x28) < (uint)((*(int *)(ar4 + 0x24) + iVar5) - *(int *)(ar4 + 0x10)))
      goto LAB_8c111d40;
      if (*(uint *)(ar4 + 0x20) < (uint)(*(int *)(ar4 + 0x24) + iVar5)) {
        iVar4 = *(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x24);
        memmove(ar5,iVar4);
        (*(code *)puVar1)(*(undefined4 *)(ar4 + 0x1c),ar5 + iVar4,iVar5 - iVar4);
        *(int *)(ar4 + 0x24) = (iVar5 - iVar4) + *(int *)(ar4 + 0x1c);
      }
      else {
        memmove(*(undefined4 *)(ar4 + 0x24),ar5,iVar5);
        iVar5 = *(int *)(ar4 + 0x24) + iVar5;
        *(int *)(ar4 + 0x24) = iVar5;
        if (iVar5 == *(int *)(ar4 + 0x20)) {
          *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x1c);
        }
      }
    }
    uVar3 = 0;
    if (*(int *)(ar4 + 0x14) != 0) {
      do {
        if (*(int *)(uVar3 * 4 + *(int *)(ar4 + 0x2c)) == 0) {
          *(uint *)(*(int *)(ar4 + 0x40) + uVar3 * 4) =
               *(int *)(*(int *)(ar4 + 0x40) + uVar3 * 4) + ar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(ar4 + 0x14));
    }
    if ((*(int *)(ar4 + 0x24) == *(int *)(ar4 + 0x28)) && (*(int *)(ar4 + 0x18) != 0)) {
      *(undefined1 *)(ar4 + 0x30) = 1;
    }
    uVar2 = 1;
    *(uint *)(ar4 + 0x3c) = *(int *)(ar4 + 0x3c) + ar6;
  }
  else {
LAB_8c111d40:
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c111cdc\n.set _FUN_8c111cdc, _FUN_8c111cdc_def\n");
