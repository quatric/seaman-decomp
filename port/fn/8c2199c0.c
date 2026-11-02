#include "../decls.h"
undefined4 FUN_8c2199c0_def(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint unaff_r8;
  uint unaff_r10;
  uint unaff_r11;
  uint *unaff_r12;
  uint unaff_r13;
  uint uVar2;
  undefined4 in_PR;
  
  do {
    uVar2 = *unaff_r12;
    if ((uVar2 & 7) == 7) {
      uVar1 = 7;
      if ((uVar2 & unaff_r11) == 0) {
        ar4 = (uint *)unaff_r12[1];
        uVar1 = FUN_8c219954(ar4,ar5,ar6,ar7);
      }
      if ((uVar2 & unaff_r10) == 0) {
        ar4 = (uint *)unaff_r12[0xb];
        uVar1 = FUN_8c2199aa(ar4,ar5,ar6,ar7);
      }
    }
    else {
      FUN_8c2563ac(ar4,ar5,ar6,ar7,in_PR);
      if ((uVar2 & 1) == 0) {
        ar4 = unaff_r12 + 2;
        noop_25b638(ar4,ar5,ar6,ar7,in_PR);
      }
      if ((uVar2 & 2) == 0) {
        unaff_r13 = uVar2 & 0x20;
        ar4 = unaff_r12 + 5;
        ar5 = unaff_r13;
        FUN_8c2569e0(ar4,unaff_r13,ar6,ar7,in_PR);
      }
      if ((uVar2 & unaff_r8) == 0) {
        ar4 = unaff_r12 + 8;
        FUN_8c257098(ar4,ar5,ar6,ar7,in_PR);
      }
      if ((uVar2 & unaff_r11) == 0) {
        ar4 = (uint *)unaff_r12[1];
        unaff_r13 = FUN_8c219954(ar4,ar5,ar6,ar7);
      }
      if (((uVar2 & unaff_r10) == 0) && (((uVar2 & 0x100) == 0 || (unaff_r13 == 0)))) {
        ar4 = (uint *)unaff_r12[0xb];
        FUN_8c2199aa(ar4,ar5,ar6,ar7);
      }
      uVar1 = FUN_8c256254(ar4,ar5,ar6,ar7);
    }
    unaff_r12 = (uint *)unaff_r12[0xc];
  } while (unaff_r12 != (uint *)0x0);
  return uVar1;
}

__asm__(".globl _FUN_8c2199c0\n.set _FUN_8c2199c0, _FUN_8c2199c0_def\n");
