#include "../decls.h"
undefined4 FUN_8c0e8df8_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*ar5 / 224.54546);
  iVar2 = (int)(ar5[2] / 150.0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (10 < iVar1) {
    iVar1 = 10;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (9 < iVar2) {
    iVar2 = 9;
  }
  return *(undefined4 *)(iVar1 * 0x78 + ar4 + iVar2 * 0xc + 0x2281c);
}

__asm__(".globl _FUN_8c0e8df8\n.set _FUN_8c0e8df8, _FUN_8c0e8df8_def\n");
