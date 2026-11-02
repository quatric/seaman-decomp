#include "../decls.h"
undefined4 FUN_8c25699c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    ar4 = _DAT_8c4c0cc0;
  }
  *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(ar4 + 0x5c);
  *(undefined4 *)(ar4 + 0x44) = *(undefined4 *)(ar4 + 0x60);
  *(undefined4 *)(ar4 + 0x48) = *(undefined4 *)(ar4 + 100);
  *(undefined4 *)(ar4 + 0x4c) = *(undefined4 *)(ar4 + 0x68);
  *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar4 + 0x6c);
  *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)(ar4 + 0x70);
  *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)(ar4 + 0x74);
  return 0x58;
}

__asm__(".globl _FUN_8c25699c\n.set _FUN_8c25699c, _FUN_8c25699c_def\n");
