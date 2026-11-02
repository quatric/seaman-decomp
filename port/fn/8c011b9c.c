#include "../decls.h"
int FUN_8c011b9c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  ulonglong in_dr4;
  float fVar1;
  
  fVar1 = (float)(in_dr4 >> 0x20);
  if (((uint)fVar1 & 0x7f800000) < 0x4b000000) {
    ain0 = (int)fVar1;
  }
  if ((in_dr4 & 0x8000000000000000) == 0) {
    ain0 = 4;
  }
  return ain0;
}

__asm__(".globl _FUN_8c011b9c\n.set _FUN_8c011b9c, _FUN_8c011b9c_def\n");
