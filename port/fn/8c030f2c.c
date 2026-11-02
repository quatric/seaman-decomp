#include "../decls.h"
uint FUN_8c030f2c_def(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  
  *ar4 = *ar4 & 0xfe;
  *ar4 = *ar4 & 0xfd;
  *ar4 = *ar4 & 0xfb;
  *ar4 = *ar4 & 0xf7;
  *ar4 = *ar4 & 0xef;
  bVar1 = *ar4;
  *ar4 = (byte)(bVar1 & 0xffffffdf);
  return bVar1 & 0xffffffdf;
}

__asm__(".globl _FUN_8c030f2c\n.set _FUN_8c030f2c, _FUN_8c030f2c_def\n");
