#include "../decls.h"
uint FUN_8c030eb8_def(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  *ar4 = *ar4 & 0xfe | 1;
  *ar4 = *ar4 & 0xfd | 2;
  *ar4 = *ar4 & 0xfb | 4;
  *ar4 = *ar4 & 0xf7 | 8;
  *ar4 = *ar4 & 0xef | 0x10;
  uVar1 = *ar4 & 0xffffffdf | 0x20;
  *ar4 = (byte)uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c030eb8\n.set _FUN_8c030eb8, _FUN_8c030eb8_def\n");
