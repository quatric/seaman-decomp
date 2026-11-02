#include "../decls.h"
undefined4 FUN_8c2020fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  memset(ar4,0,ar6,ar7);
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined1 *)(ar4 + 2) = 0;
  return 0;
}

__asm__(".globl _FUN_8c2020fc\n.set _FUN_8c2020fc, _FUN_8c2020fc_def\n");
