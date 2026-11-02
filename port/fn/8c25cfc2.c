#include "../decls.h"
uint FUN_8c25cfc2_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  
  puVar1 = (uint *)(ar4 | 0xa5000000);
  *puVar1 = (ar4 - ar5 >> 2) + 2 | 0x80200000;
  puVar1[1] = 0xf0000000;
  puVar1[2] = 0x800000;
  puVar1[3] = 0x24900000;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0x2edbe6ff;
  puVar1[8] = 0x80ff0000;
  puVar1[9] = 0;
  puVar1[10] = 0x44a00000;
  puVar1[0xb] = 0x2edbe6ff;
  puVar1[0xc] = 0x8000ff00;
  puVar1[0xd] = 0x45200000;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0x2edbe6ff;
  puVar1[0x10] = 0x800000ff;
  return ar4;
}

__asm__(".globl _FUN_8c25cfc2\n.set _FUN_8c25cfc2, _FUN_8c25cfc2_def\n");
