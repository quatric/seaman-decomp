#include "../decls.h"
undefined4 FUN_8c2560b4_def(int ar4,int ar5,ushort *ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = 0xa0000000;
  if (*(undefined4 *)0x8c4ab138 == 0x10) {
    iVar5 = ar5 + ar4;
    uVar4 = ar4 * 4 + 0x5f9000;
    for (; ar4 < iVar5; ar4 = ar4 + 1) {
      uVar1 = *ar6;
      ar6 = ar6 + 1;
      *(uint *)(uVar4 | uVar2) = (uint)uVar1;
      uVar4 = uVar4 + 4;
    }
    return 0x10;
  }
  uVar3 = FUN_8c23c7f4(ar4 * 4 + 0x5f9000 | 0xa0000000,ar6,ar5);
  return uVar3;
}

__asm__(".globl _FUN_8c2560b4\n.set _FUN_8c2560b4, _FUN_8c2560b4_def\n");
