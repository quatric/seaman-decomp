#include "../decls.h"
undefined4 FUN_8c20a366_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  _DAT_8c4a9d64 =
       (int)(*(float *)(ar4 + 0x70) * 255.0) << 0x18 | (int)(*(float *)(ar4 + 0x74) * 255.0) << 0x10
       | (int)(*(float *)(ar4 + 0x78) * 255.0) << 8 | (int)(*(float *)(ar4 + 0x7c) * 255.0);
  _DAT_8c4a9d68 =
       (int)(*(float *)(ar4 + 0x80) * 255.0) << 0x18 | (int)(*(float *)(ar4 + 0x84) * 255.0) << 0x10
       | (int)(*(float *)(ar4 + 0x88) * 255.0) << 8 | (int)(*(float *)(ar4 + 0x8c) * 255.0);
  _DAT_8c4a9d4c = *(undefined4 *)(ar4 + 0x94);
  _DAT_8c4a9d50 = *(undefined4 *)(ar4 + 0x98);
  _DAT_8c4a9d54 = *(undefined4 *)(ar4 + 0x9c);
  return 0;
}

__asm__(".globl _FUN_8c20a366\n.set _FUN_8c20a366, _FUN_8c20a366_def\n");
