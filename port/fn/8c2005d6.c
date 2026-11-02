#include "../decls.h"
undefined4 FUN_8c2005d6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar6_00;
  byte *ar4_00;
  int iVar1;
  
  ar6_00 = ar4 * 0x148 + 0x8c4783e0;
  ar4_00 = *(byte **)(ar6_00 + 0x28);
  iVar1 = 0;
  while( true ) {
    if (*(int *)(*(int *)(ar6_00 + 0x1c) + 0x30) <= iVar1) {
      return 0xffffffff;
    }
    if ((uint)*ar4_00 == (int)0xcc) break;
    ar4_00 = ar4_00 + 0x20;
    iVar1 = iVar1 + 1;
  }
  FUN_8c2004ea(ar4_00,ar5,ar6_00,(uint)*ar4_00);
  return iVar1;
}

__asm__(".globl _FUN_8c2005d6\n.set _FUN_8c2005d6, _FUN_8c2005d6_def\n");
