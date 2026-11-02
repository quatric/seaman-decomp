#include "../decls.h"
undefined4 FUN_8c21b998_def(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  puVar2 = (&FUN_8c2563ac);
  puVar1 = (&FUN_8c2569e0);
  uVar5 = 0x80;
  uVar4 = (uint)0x80;
  do {
    (*(code *)puVar2)(uVar5);
    if ((*ar4 & 0x40) == 0) {
      (*(code *)*(undefined4 *)0x8c4aa340)(ar4);
    }
    else {
      noop_25b638(ar4 + 2);
      ar5 = *ar4 & 0x20;
      (*(code *)puVar1)(ar4 + 5);
      FUN_8c257098(ar4 + 8);
    }
    if ((code *)*(undefined4 *)0x8c4aa358 != (code *)0x0) {
      (*(code *)*(undefined4 *)0x8c4aa358)(ar4);
    }
    if ((*ar4 & uVar4) == 0) {
      (*(code *)*(undefined4 *)0x8c4aa36c)(ar4);
    }
    else if ((ar4[1] != 0) && ((*ar4 & 8) == 0)) {
      FUN_8c219954(ar4[1]);
    }
    if (ar4[0xb] != 0) {
      FUN_8c21b998((uint *)(uint)ar4[0xb],ar5,ar6,ar7);
    }
    uVar3 = FUN_8c256254();
    ar4 = (uint *)(uint)ar4[0xc];
  } while (ar4 != (uint *)0x0);
  return uVar3;
}

__asm__(".globl _FUN_8c21b998\n.set _FUN_8c21b998, _FUN_8c21b998_def\n");
