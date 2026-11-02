#include "../decls.h"
undefined4 FUN_8c260e9c_def(ushort *ar4,int ar5,ushort *ar6,undefined4 ar7)

{
  if (0x11 < ar5) {
    if (((int)(uint)*ar4 >> 8 | (uint)*ar4 << 8 & 0xff00 & 0xffff) != 0x8000) {
      return 0xfffffffe;
    }
    if (0xd < (int)((int)(short)ar4[1] >> 8 & 0xffU | (int)(short)ar4[1] << 8 & 0xff00)) {
      *ar6 = ar4[8] >> 8 | ar4[8] << 8 & (int)0xffffff00;
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c260e9c\n.set _FUN_8c260e9c, _FUN_8c260e9c_def\n");
