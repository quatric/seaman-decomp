#include "../decls.h"
undefined4 FUN_8c11e274_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 1;
  }
  if (ar5 == 0) {
    uVar2 = FUN_8c1204c4(ar4 + 0x48,0x13,ar6,ar7);
    return uVar2 & 0xff;
  }
  *(undefined4 *)(ar4 + 0x40) = 0;
  FUN_8c120348(ar4 + 0x48,5,ar5,0);
  return *(undefined4 *)(ar4 + 0x40);
}

__asm__(".globl _FUN_8c11e274\n.set _FUN_8c11e274, _FUN_8c11e274_def\n");
