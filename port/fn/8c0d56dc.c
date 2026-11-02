#include "../decls.h"
undefined4 FUN_8c0d56dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(ar4 + 0x5c4) = 0x3f4ccccd;
  *(undefined4 *)(ar4 + 0x5c8) = 0x3f4ccccd;
  *(undefined4 *)(ar4 + 0x5cc) = 0x3f4ccccd;
  *(undefined2 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 0x5e8) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    if (*(int *)(iVar1 * 0x18 + ar4 + 0x600) != -1) {
      FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(iVar1 * 0x18 + ar4 + 0x600),ar6,ar7);
      FUN_8c021a8c(0x8c2b59d0,iVar1 * 0x18 + ar4 + 0x600,ar6,ar7);
      *(undefined4 *)(iVar1 * 0x18 + ar4 + 0x600) = 0xffffffff;
    }
  }
  *(undefined4 *)(ar4 + 0x61c) = 0xffffffe2;
  DAT_8c437843 = 0xff;
  DAT_8c437842 = 0x32;
  DAT_8c437841 = 0x32;
  DAT_8c437840 = 0x1f;
  return 0x1f;
}

__asm__(".globl _FUN_8c0d56dc\n.set _FUN_8c0d56dc, _FUN_8c0d56dc_def\n");
