#include "../decls.h"
undefined4 FUN_8c20a280_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 & 0xfffffffc) == 0) {
    *(undefined4 *)0x8c4a9c48 = ar4;
    pvr_20a844((int)0x108,ar4);
  }
  return 0;
}

__asm__(".globl _FUN_8c20a280\n.set _FUN_8c20a280, _FUN_8c20a280_def\n");
