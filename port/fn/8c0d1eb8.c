#include "../decls.h"
undefined4 FUN_8c0d1eb8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(ar4 + 0x14bc) = 0;
  *(undefined1 *)(ar4 + 0x14c0) = 0;
  *(undefined4 *)(ar4 + 0x14b4) = 1;
  *(undefined4 *)(ar4 + 0x14b8) = 1;
  for (iVar1 = 0; iVar1 < 0x14; iVar1 = iVar1 + 1) {
    FUN_8c013fb4(iVar1 * 0xf0 + ar4 + 0x14c4,0x8c437b48,0xf0,ar7);
  }
  return 0x14;
}

__asm__(".globl _FUN_8c0d1eb8\n.set _FUN_8c0d1eb8, _FUN_8c0d1eb8_def\n");
