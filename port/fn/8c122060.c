#include "../decls.h"
undefined4 FUN_8c122060_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(0xfc + ar4);
  uVar5 = 0;
  if (*(int *)(0x240 + ar4) != 0) {
    do {
      if (*(int *)(uVar5 * 8 + 0x268 + ar4 + 4) != 0) {
        (**(code **)(iVar4 + 0x18))
                  (*(undefined4 *)(uVar5 * 8 + 0x268 + ar4 + 4),0xf4 + ar4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(0x240 + ar4));
  }
  puVar1 = (&FUN_8c120348);
  *(undefined4 *)(0x148 + ar4) = 3;
  cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x23,0);
  if (((cVar2 == '\0') && (cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x15,0), cVar2 == '\0')) &&
     (cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x10,*(undefined4 *)(0x248 + ar4),2),
     puVar1 = (&FUN_8c121f38), cVar2 == '\0')) {
    *(undefined1 *)(0x234 + ar4) = 0;
    *(undefined **)(0xdc + ar4) = puVar1;
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c122060\n.set _FUN_8c122060, _FUN_8c122060_def\n");
