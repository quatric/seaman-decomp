#include "../decls.h"
undefined4 FUN_8c201bae_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = 0;
  uStack_10 = *(undefined4 *)(ar4 + 0x14);
  iVar1 = ar4;
  FUN_8c010794(8,auStack_1c,&uStack_14);
  FUN_8c010794(8,auStack_24,ar4 + 0x3c);
  iVar1 = FUN_8c2029b4(iVar1,ar5,ar6,ar7);
  if (iVar1 == 1) {
    uVar2 = *(undefined4 *)(ar4 + 0x14);
  }
  else {
    uVar2 = *(undefined4 *)(ar4 + 0x40);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c201bae\n.set _FUN_8c201bae, _FUN_8c201bae_def\n");
