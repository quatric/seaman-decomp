#include "../decls.h"
undefined4 FUN_8c23a982_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *_DAT_8c4ab278 = *_DAT_8c4ab278 + *(float *)(ar4 + 0x104);
  _DAT_8c4ab278[1] = _DAT_8c4ab278[1] + *(float *)(ar4 + 0x108);
  _DAT_8c4ab278[2] = _DAT_8c4ab278[2] + *(float *)(ar4 + 0x10c);
  _DAT_8c4ab278[3] = _DAT_8c4ab278[3] + *(float *)(ar4 + 0x110);
  return 0xc;
}

__asm__(".globl _FUN_8c23a982\n.set _FUN_8c23a982, _FUN_8c23a982_def\n");
