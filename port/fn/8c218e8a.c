#include "../decls.h"
undefined4 FUN_8c218e8a_def(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint *puVar2;
  uint unaff_r13;
  uint uVar3;
  
  puVar2 = ar4;
  do {
    uVar3 = *puVar2;
    if ((uVar3 & 7) == 7) {
      uVar1 = 7;
      if ((uVar3 & 8) == 0) {
        ar4 = (uint *)puVar2[1];
        uVar1 = FUN_8c218e00(ar4,ar5,ar6,ar7);
      }
      if ((uVar3 & 0x10) == 0) {
        ar4 = (uint *)puVar2[0xb];
        uVar1 = FUN_8c218e8a(ar4,ar5,ar6,ar7);
      }
    }
    else {
      uVar1 = FUN_8c2563ac(ar4,ar5,ar6,ar7,uVar3 & 7);
      if ((uVar3 & 1) == 0) {
        ar4 = puVar2 + 2;
        uVar1 = noop_25b638(ar4,ar5,ar6,ar7,uVar1);
      }
      if ((uVar3 & 2) == 0) {
        unaff_r13 = uVar3 & 0x20;
        ar4 = puVar2 + 5;
        ar5 = unaff_r13;
        uVar1 = FUN_8c2569e0(ar4,unaff_r13,ar6,ar7,uVar1);
      }
      if ((uVar3 & 4) == 0) {
        ar4 = puVar2 + 8;
        FUN_8c257098(ar4,ar5,ar6,ar7,uVar1);
      }
      if ((uVar3 & 8) == 0) {
        ar4 = (uint *)puVar2[1];
        unaff_r13 = FUN_8c218e00(ar4,ar5,ar6,ar7);
      }
      if (((uVar3 & 0x10) == 0) && (((uVar3 & 0x100) == 0 || (unaff_r13 == 0)))) {
        ar4 = (uint *)puVar2[0xb];
        FUN_8c218e8a(ar4,ar5,ar6,ar7);
      }
      uVar1 = FUN_8c256254(ar4,ar5,ar6,ar7);
    }
    puVar2 = (uint *)puVar2[0xc];
  } while (puVar2 != (uint *)0x0);
  return uVar1;
}

__asm__(".globl _FUN_8c218e8a\n.set _FUN_8c218e8a, _FUN_8c218e8a_def\n");
