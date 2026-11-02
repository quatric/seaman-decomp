#include "../decls.h"
undefined4 FUN_8c1fc9b0_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = 0x8c475fa0;
  iVar5 = (int)0x400;
  *(undefined4 *)0x8c475fa0 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar2 = (&memset);
  memset(0x8c475fc0,0,iVar5,4);
  (*(code *)puVar2)(0x8c4763c0,0x30,iVar5);
  (*(code *)puVar2)(0x8c4767c0,0x31,iVar5);
  (*(code *)puVar2)(0x8c476bc0,0x32,iVar5);
  (*(code *)puVar2)(0x8c476fc0,0x33,iVar5);
  (*(code *)puVar2)(0x8c4773c0,0x34,iVar5);
  (*(code *)puVar2)(0x8c4777c0,0x35,iVar5);
  (*(code *)puVar2)(0x8c477bc0,0x36,iVar5);
  (*(code *)puVar2)(0x8c477fc0,0x37,iVar5);
  iVar3 = FUN_8c1fcf90();
  puVar2 = (&FUN_8c1fcfa6);
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if ((ar4 & 1) != 0) {
      FUN_8c1fcfa6((&DATA_8c1fcaf4),0x8c4763c0,iVar5);
    }
    if ((ar4 & 2) != 0) {
      (*(code *)puVar2)((&DATA_8c1fcaf8),0x8c4767c0,iVar5);
    }
    if ((ar4 & 4) != 0) {
      (*(code *)puVar2)((&DATA_8c1fcafc),0x8c476bc0,iVar5);
    }
    if ((ar4 & 8) != 0) {
      (*(code *)puVar2)((&DATA_8c1fcb00),0x8c476fc0,iVar5);
    }
    if ((ar4 & 0x10) != 0) {
      (*(code *)puVar2)((&DATA_8c1fcb04),0x8c4773c0,iVar5);
    }
    if ((ar4 & 0x20) != 0) {
      (*(code *)puVar2)((&DATA_8c1fcb08),0x8c4777c0,iVar5);
    }
    if ((ar4 & 0x40) != 0) {
      (*(code *)puVar2)((&DATA_8c1fcb0c),0x8c477bc0,iVar5);
    }
    if ((ar4 & (int)0x80) != 0) {
      (*(code *)puVar2)((&DATA_8c1fcb64),0x8c477fc0,iVar5);
    }
    uVar4 = 0;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1fc9b0\n.set _FUN_8c1fc9b0, _FUN_8c1fc9b0_def\n");
