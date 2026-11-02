#include "../decls.h"
undefined4 FUN_8c110060_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int unaff_r14;
  
  iVar1 = *(int *)(unaff_r14 + 0x28);
  if (iVar1 == 0) {
    if (*(int *)(unaff_r14 + 0x48) == *(int *)(unaff_r14 + 0x7c)) {
      FUN_8c10fe04(unaff_r14,ar5,ar6,ar7);
    }
    if (*(uint *)(unaff_r14 + 0x48) < *(uint *)(unaff_r14 + 0x7c)) {
      FUN_8c10fc96(unaff_r14,ar5,ar6,ar7);
    }
    if ((float)*(int *)(unaff_r14 + 0x8c) < *(float *)(unaff_r14 + 0x4c)) {
      *(undefined4 *)(unaff_r14 + 0x28) = 1;
    }
  }
  else if (iVar1 == 1) {
    FUN_8c10fe04(unaff_r14,ar5,ar6,ar7);
    if (*(int *)(unaff_r14 + 0x48) == 0) {
      *(undefined4 *)(unaff_r14 + 0x28) = 2;
    }
  }
  else if (iVar1 == 2) {
    if (*(uint *)(unaff_r14 + 0x48) < *(uint *)(unaff_r14 + 0x7c)) {
      FUN_8c10fc96(unaff_r14,ar5,ar6,ar7);
    }
    FUN_8c10fe04(unaff_r14,ar5,ar6,ar7);
  }
  if (*(int *)(unaff_r14 + 0x28) != 1) {
    uVar2 = 0;
    do {
      if ((*(char *)(*(int *)(unaff_r14 + 0x6c) + uVar2) != '\0') &&
         (*(int *)(*(int *)(*(int *)(uVar2 * 8 + *(int *)(unaff_r14 + 0xc)) + 0x40) +
                  *(int *)(uVar2 * 8 + *(int *)(unaff_r14 + 0xc) + 4) * 4) ==
          *(int *)(*(int *)(*(int *)(unaff_r14 + 0xc) + uVar2 * 8) + 0x3c))) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(unaff_r14 + 0x78));
  }
  return 1;
}

__asm__(".globl _FUN_8c110060\n.set _FUN_8c110060, _FUN_8c110060_def\n");
