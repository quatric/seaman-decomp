#include "../decls.h"
undefined4 s_no_device_1f5f4e_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  if (_DAT_8c472d04 == 0) {
    ar4[2] = 0;
    ar4[3] = 0xffffffff;
    ar4[4] = 0;
    ar4[5] = 0;
  }
  else {
    ar4[2] = 0xffffffff;
    ar4[3] = 0;
    ar4[4] = 0xffffffff;
    ar4[5] = 0xffffffff;
  }
  *(undefined2 *)(ar4 + 6) = 0;
  *(undefined2 *)((int)ar4 + 0x1a) = 0;
  *(undefined2 *)((int)ar4 + 0x22) = 0;
  *(undefined2 *)(ar4 + 8) = 0;
  *(undefined2 *)((int)ar4 + 0x1e) = 0;
  *(undefined2 *)(ar4 + 7) = 0;
  ar4[10] = 0;
  ar4[9] = s__no_device__8c26c7c4;
  return 0;
}

__asm__(".globl _s_no_device_1f5f4e\n.set _s_no_device_1f5f4e, _s_no_device_1f5f4e_def\n");
