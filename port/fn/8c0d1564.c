#include "../decls.h"
undefined4 FUN_8c0d1564_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0xeb40) = 0;
  *(undefined4 *)(ar4 + 0xeb44) = 0;
  *(undefined4 *)(ar4 + 0xeb34) = 0x40a00000;
  *(undefined4 *)(ar4 + 0xeb38) = 0;
  *(undefined4 *)(ar4 + 0xeb3c) = 0;
  *(undefined4 *)(ar4 + 0xeb60) = 0;
  *(undefined2 *)(ar4 + 0xeb64) = 0;
  return 0xeb64;
}

__asm__(".globl _FUN_8c0d1564\n.set _FUN_8c0d1564, _FUN_8c0d1564_def\n");
