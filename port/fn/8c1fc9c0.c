#include "../decls.h"
undefined4 FUN_8c1fc9c0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 unaff_r11;
  uint unaff_r12;
  undefined4 unaff_r14;
  
  *ar4 = unaff_r11;
  ar4[1] = unaff_r11;
  ar4[2] = unaff_r11;
  ar4[3] = unaff_r11;
  ar4[4] = unaff_r11;
  ar4[5] = unaff_r11;
  ar4[6] = unaff_r11;
  ar4[7] = unaff_r11;
  puVar1 = (&memset);
  memset(0x8c475fc0,unaff_r11,unaff_r14,ar7);
  (*(code *)puVar1)(0x8c4763c0,0x30,unaff_r14,ar7);
  (*(code *)puVar1)(0x8c4767c0,0x31,unaff_r14,ar7);
  (*(code *)puVar1)(0x8c476bc0,0x32,unaff_r14,ar7);
  (*(code *)puVar1)(0x8c476fc0,0x33,unaff_r14,ar7);
  (*(code *)puVar1)(0x8c4773c0,0x34,unaff_r14,ar7);
  (*(code *)puVar1)(0x8c4777c0,0x35,unaff_r14,ar7);
  (*(code *)puVar1)(0x8c477bc0,0x36,unaff_r14,ar7);
  ar5_00 = 0x37;
  uVar3 = 0x8c477fc0;
  ar6_00 = unaff_r14;
  (*(code *)puVar1)(0x8c477fc0,0x37,unaff_r14,ar7);
  iVar2 = FUN_8c1fcf90(uVar3,ar5_00,ar6_00,ar7);
  puVar1 = (&FUN_8c1fcfa6);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((unaff_r12 & 1) != 0) {
      FUN_8c1fcfa6((&DATA_8c1fcaf4),0x8c4763c0,unaff_r14,ar7);
    }
    if ((unaff_r12 & 2) != 0) {
      (*(code *)puVar1)((&DATA_8c1fcaf8),0x8c4767c0,unaff_r14,ar7);
    }
    if ((unaff_r12 & 4) != 0) {
      (*(code *)puVar1)((&DATA_8c1fcafc),0x8c476bc0,unaff_r14,ar7);
    }
    if ((unaff_r12 & 8) != 0) {
      (*(code *)puVar1)((&DATA_8c1fcb00),0x8c476fc0,unaff_r14,ar7);
    }
    if ((unaff_r12 & 0x10) != 0) {
      (*(code *)puVar1)((&DATA_8c1fcb04),0x8c4773c0,unaff_r14,ar7);
    }
    if ((unaff_r12 & 0x20) != 0) {
      (*(code *)puVar1)((&DATA_8c1fcb08),0x8c4777c0,unaff_r14,ar7);
    }
    if ((unaff_r12 & 0x40) != 0) {
      (*(code *)puVar1)((&DATA_8c1fcb0c),0x8c477bc0,unaff_r14,ar7);
    }
    if ((unaff_r12 & (int)0x80) != 0) {
      (*(code *)puVar1)((&DATA_8c1fcb64),0x8c477fc0,unaff_r14,ar7);
    }
    uVar3 = 0;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c1fc9c0\n.set _FUN_8c1fc9c0, _FUN_8c1fc9c0_def\n");
