#include "../decls.h"
int FUN_8c0fa334_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 ar6_00;
  
  ar6_00 = 0x1010;
  memmove(ar4,ar5,0x1010,ar7);
  *(undefined4 *)(ar4 + 0xc) = 1;
  iVar1 = *(int *)(0x1040 + ar4);
  if (iVar1 == 1) {
    iVar2 = FUN_8c0fa658(ar4,ar5,ar6_00,ar7);
    iVar1 = 1;
    if (1 < iVar2) {
      iVar1 = 0;
      *(undefined4 *)(ar4 + 0xc) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0fa334\n.set _FUN_8c0fa334, _FUN_8c0fa334_def\n");
