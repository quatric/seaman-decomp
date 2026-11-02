#include "../decls.h"
undefined4 FUN_8c21a8b0_def(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar3 = (&FUN_8c2563ac);
  puVar2 = (&FUN_8c2569e0);
  puVar1 = (&FUN_8c257098);
  uVar5 = 0x20;
  do {
    (*(code *)puVar3)(uVar5);
    if ((*ar4 & 0x40) == 0) {
      (*(code *)*(undefined4 *)0x8c4aa340)(ar4);
    }
    else {
      noop_25b638(ar4 + 2);
      ar5 = *ar4 & 0x20;
      (*(code *)puVar2)(ar4 + 5);
      (*(code *)puVar1)(ar4 + 8);
    }
    if ((code *)*(undefined4 *)0x8c4aa358 != (code *)0x0) {
      (*(code *)*(undefined4 *)0x8c4aa358)(ar4);
    }
    if ((ar4[1] != 0) && ((*ar4 & 8) == 0)) {
      (*(code *)*(undefined4 *)0x8c4aa368)(ar4[1]);
    }
    if (ar4[0xb] != 0) {
      FUN_8c21a8b0((uint *)(uint)ar4[0xb],ar5,ar6,ar7);
    }
    uVar4 = FUN_8c256254();
    ar4 = (uint *)(uint)ar4[0xc];
  } while (ar4 != (uint *)0x0);
  return uVar4;
}

__asm__(".globl _FUN_8c21a8b0\n.set _FUN_8c21a8b0, _FUN_8c21a8b0_def\n");
