#include "../decls.h"
uint FUN_8c01cbc8_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  bool bVar2;
  
  if (ar5 != ar4[1]) {
    *(undefined4 *)0x8c2791b8 = 0;
    ar4[1] = ar5;
    if (ar5 == 6) {
      *ar4 = 8;
      ar4[2] = 8;
    }
    else if (ar5 == 0xc) {
      *ar4 = 0xe;
      ar4[2] = 0xe;
    }
    else if (ar5 == 0x12) {
      *ar4 = 0x14;
      ar4[2] = 0x14;
    }
    else {
      *ar4 = 2;
      ar4[2] = 2;
    }
  }
  puVar1 = (uint *)FUN_8c1f6342(ar4[2],ar5,ar6,ar7);
  bVar2 = (*puVar1 & 0x10) != 0;
  if (!bVar2) {
    FUN_8c01d440(ar4,ar5,ar6,ar7);
    *ar4 = 0xffffffff;
    ar4[1] = 0xffffffff;
    *(undefined4 *)0x8c2791b8 = 0;
  }
  return (uint)bVar2;
}

__asm__(".globl _FUN_8c01cbc8\n.set _FUN_8c01cbc8, _FUN_8c01cbc8_def\n");
