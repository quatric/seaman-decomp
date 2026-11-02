#include "../decls.h"
undefined4 FUN_8c111cec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r10;
  uint unaff_r11;
  int a6;
  int unaff_r14;
  int iVar4;
  
  puVar1 = (&memmove);
  iVar4 = unaff_r11 * *(ushort *)(unaff_r14 + 0xc);
  if ((*(char *)(unaff_r14 + 0x30) == '\0') && (unaff_r11 <= *(uint *)(unaff_r14 + 8))) {
    if (*(uint *)(unaff_r14 + 0x24) < *(uint *)(unaff_r14 + 0x28)) {
      if (*(uint *)(unaff_r14 + 0x28) < (uint)(*(int *)(unaff_r14 + 0x24) + iVar4))
      goto LAB_8c111d40;
      memmove(*(undefined4 *)(unaff_r14 + 0x24),unaff_r10,iVar4,ar7);
      *(int *)(unaff_r14 + 0x24) = *(int *)(unaff_r14 + 0x24) + iVar4;
    }
    else {
      if (*(uint *)(unaff_r14 + 0x28) <
          (uint)((*(int *)(unaff_r14 + 0x24) + iVar4) - *(int *)(unaff_r14 + 0x10)))
      goto LAB_8c111d40;
      if (*(uint *)(unaff_r14 + 0x20) < (uint)(*(int *)(unaff_r14 + 0x24) + iVar4)) {
        a6 = *(int *)(unaff_r14 + 0x20) - *(int *)(unaff_r14 + 0x24);
        memmove(*(int *)(unaff_r14 + 0x24),unaff_r10,a6,ar7);
        (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x1c),unaff_r10 + a6,iVar4 - a6,ar7);
        *(int *)(unaff_r14 + 0x24) = (iVar4 - a6) + *(int *)(unaff_r14 + 0x1c);
      }
      else {
        memmove(*(undefined4 *)(unaff_r14 + 0x24),unaff_r10,iVar4,ar7);
        iVar4 = *(int *)(unaff_r14 + 0x24) + iVar4;
        *(int *)(unaff_r14 + 0x24) = iVar4;
        if (iVar4 == *(int *)(unaff_r14 + 0x20)) {
          *(undefined4 *)(unaff_r14 + 0x24) = *(undefined4 *)(unaff_r14 + 0x1c);
        }
      }
    }
    uVar3 = 0;
    if (*(int *)(unaff_r14 + 0x14) != 0) {
      do {
        if (*(int *)(uVar3 * 4 + *(int *)(unaff_r14 + 0x2c)) == 0) {
          *(uint *)(*(int *)(unaff_r14 + 0x40) + uVar3 * 4) =
               *(int *)(*(int *)(unaff_r14 + 0x40) + uVar3 * 4) + unaff_r11;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(unaff_r14 + 0x14));
    }
    if ((*(int *)(unaff_r14 + 0x24) == *(int *)(unaff_r14 + 0x28)) &&
       (*(int *)(unaff_r14 + 0x18) != 0)) {
      *(undefined1 *)(unaff_r14 + 0x30) = 1;
    }
    uVar2 = 1;
    *(uint *)(unaff_r14 + 0x3c) = *(int *)(unaff_r14 + 0x3c) + unaff_r11;
  }
  else {
LAB_8c111d40:
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c111cec\n.set _FUN_8c111cec, _FUN_8c111cec_def\n");
