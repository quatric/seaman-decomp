#include "../decls.h"
undefined4 FUN_8c266b08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar6_00;
  undefined *ar7_00;
  
  if (*(int *)(DAT_8c2784c0 + 0x15c) != 0) {
    *(undefined4 *)(DAT_8c2784c0 + 0x160) = 1;
    if ((*(uint *)(DAT_8c2784c0 + 0x15c) & 1) != 0) {
      *(int *)(DAT_8c2784c0 + 0x15c) = *(int *)(DAT_8c2784c0 + 0x15c) + 1;
    }
    ar7_00 = (undefined *)0x8c266b70;
    ar6_00 = *(int *)(DAT_8c2784c0 + 0x15c) << 4;
    FUN_8c265ea0(*(undefined4 *)(DAT_8c2784c0 + 0x178),*(undefined4 *)(DAT_8c2784c0 + 0x158),ar6_00,
                 (undefined *)0x8c266b70,DAT_8c2784c0 + 0x158);
    FUN_8c265ff4(*(undefined4 *)(DAT_8c2784c0 + 0x178),*(undefined4 *)(DAT_8c2784c0 + 0x1c4),ar6_00,
                 ar7_00);
  }
  return 0;
}

__asm__(".globl _FUN_8c266b08\n.set _FUN_8c266b08, _FUN_8c266b08_def\n");
