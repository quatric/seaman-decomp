#include "../decls.h"
uint FUN_8c02e99c_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  if (*ar4 < 3) {
    if (ar4[4] == 0) {
      ar4[3] = 0x1e;
    }
    if (ar4[5] == 0) {
      ar4[4] = 0x708;
      uVar1 = 0x258;
      ar4[5] = 0x258;
    }
    else {
      ar4[4] = ar4[4] + 0x708;
      uVar1 = 0x258;
      ar4[5] = ar4[5] + 0x258;
    }
  }
  else {
    uVar1 = ar4[6];
    if ((uVar1 == 0) && (uVar1 = 0, ar4[8] != 0)) {
      uVar1 = 1;
      ar4[2] = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c02e99c\n.set _FUN_8c02e99c, _FUN_8c02e99c_def\n");
