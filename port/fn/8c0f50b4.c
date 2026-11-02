#include "../decls.h"
undefined4 FUN_8c0f50b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x24) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x28) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x6c) = 0x32;
  *(undefined4 *)(ar4 + 0x70) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  *(undefined4 *)(0x168 + ar4) = 0;
  *(undefined4 *)(0x164 + ar4) = 0;
  *(undefined4 *)(0x16c + ar4) = 1;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x80000000;
  return 0x74;
}

__asm__(".globl _FUN_8c0f50b4\n.set _FUN_8c0f50b4, _FUN_8c0f50b4_def\n");
