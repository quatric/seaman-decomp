#include "../decls.h"
undefined4 FUN_8c2199aa_def(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  uint unaff_r13;
  uint uVar3;
  
  uVar2 = (uint)0x100;
  do {
    uVar3 = *ar4;
    if ((uVar3 & 7) == 7) {
      uVar1 = 7;
      if ((uVar3 & 8) == 0) {
        uVar1 = FUN_8c219954(ar4[1],ar5,ar6,ar7);
      }
      if ((uVar3 & 0x10) == 0) {
        uVar1 = FUN_8c2199aa((uint *)(uint)ar4[0xb],ar5,ar6,ar7);
      }
    }
    else {
      FUN_8c2563ac();
      if ((uVar3 & 1) == 0) {
        noop_25b638(ar4 + 2);
      }
      if ((uVar3 & 2) == 0) {
        unaff_r13 = uVar3 & 0x20;
        ar5 = unaff_r13;
        FUN_8c2569e0(ar4 + 5);
      }
      if ((uVar3 & 4) == 0) {
        FUN_8c257098(ar4 + 8);
      }
      if ((uVar3 & 8) == 0) {
        unaff_r13 = FUN_8c219954(ar4[1],ar5,ar6,ar7);
      }
      if (((uVar3 & 0x10) == 0) && (((uVar3 & uVar2) == 0 || (unaff_r13 == 0)))) {
        FUN_8c2199aa((uint *)(uint)ar4[0xb],ar5,ar6,ar7);
      }
      uVar1 = FUN_8c256254();
    }
    ar4 = (uint *)(uint)ar4[0xc];
  } while (ar4 != (uint *)0x0);
  return uVar1;
}

__asm__(".globl _FUN_8c2199aa\n.set _FUN_8c2199aa, _FUN_8c2199aa_def\n");
