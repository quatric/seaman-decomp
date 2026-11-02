#include "../decls.h"
undefined * FUN_8c0a0184_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(ar4 + 0x40);
  puVar1 = (undefined *)0xc;
  if ((iVar2 < 0xd) && (puVar1 = (undefined *)0x5, 4 < iVar2)) {
    puVar1 = (&switchdata_8c0a01a0_8c0a01a4)[iVar2 + -5];
                    
    switch(iVar2) {
    case 5:
      *(undefined4 *)(ar4 + 0x40) = 2;
      *(undefined4 *)(ar4 + 4) = 0;
      puVar1 = (undefined *)0x1e;
      *(undefined4 *)(ar4 + 8) = 0x1e;
      break;
    case 8:
      *(undefined4 *)(ar4 + 0x40) = 2;
      *(undefined4 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 8) = 0x1e;
      puVar1 = (undefined *)0x9c;
      *(int *)(ar4 + 0x9c) = *(int *)(ar4 + 0x9c) + 1;
      break;
    case 9:
      *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
      puVar1 = (undefined *)0xf;
      *(undefined4 *)(ar4 + 8) = 0xf;
      break;
    case 0xc:
      *(undefined1 *)(ar4 + 0x98) = 2;
      puVar1 = (undefined *)0xf;
      *(undefined4 *)(ar4 + 8) = 0xf;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0a0184\n.set _FUN_8c0a0184, _FUN_8c0a0184_def\n");
