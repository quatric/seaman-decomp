#include "../decls.h"
undefined4 FUN_8c101da0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  for (cVar1 = '\0'; cVar1 < '\x05'; cVar1 = cVar1 + '\x01') {
    *(undefined4 *)(cVar1 * 8 + ar4) = 0;
    *(undefined4 *)(ar4 + cVar1 * 8 + 4) = 0;
  }
  *(undefined1 *)(ar4 + 0x28) = 0xff;
  return 0x28;
}

__asm__(".globl _FUN_8c101da0\n.set _FUN_8c101da0, _FUN_8c101da0_def\n");
