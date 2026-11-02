#include "../decls.h"
undefined4 FUN_8c237770_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  uint uVar2;
  
  _DAT_8c4c1260 = 0;
  _DAT_8c4c11b0 = 0x3f800000;
  _DAT_8c4c11b4 = 0x3f000000;
  _DAT_8c4c11b8 = 0x3f000000;
  _DAT_8c4c11bc = 0x3f000000;
  _DAT_8c4c11c0 = 0x3f800000;
  _DAT_8c4c11c4 = 0x3f000000;
  _DAT_8c4c11c8 = 0x3f000000;
  _DAT_8c4c11cc = 0x3f000000;
  _DAT_8c4c11a0 = 0x3f800000;
  _DAT_8c4c11a4 = 0;
  _DAT_8c4c11a8 = 0;
  _DAT_8c4c11ac = 0;
  _DAT_8c4c11d0 = 0x40c00000;
  uVar2 = 0;
  _DAT_8c4c1300 = 0;
  do {
    puVar1 = (undefined4 *)(uVar2 + 0x8c4c1280);
    uVar2 = uVar2 + 4;
    *puVar1 = 0;
  } while (uVar2 < 0x80);
  return 0x80;
}

__asm__(".globl _FUN_8c237770\n.set _FUN_8c237770, _FUN_8c237770_def\n");
