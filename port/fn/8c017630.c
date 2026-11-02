#include "../decls.h"
undefined4 FUN_8c017630_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  undefined4 uVar2;
  undefined8 uVar1;
  char cVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar3 = '\0';
  *(undefined4 *)(ar4 + 0x30) = *ar5;
  *(undefined4 *)(ar4 + 0x34) = ar5[1];
  *(undefined4 *)(ar4 + 0x38) = ar5[2];
  *(undefined4 *)(ar4 + 0x3c) = ar5[4];
  *(undefined4 *)(ar4 + 0x40) = ar5[5];
  *(undefined4 *)(ar4 + 0x44) = ar5[6];
  *(undefined4 *)(ar4 + 0x48) = ar5[8];
  *(undefined4 *)(ar4 + 0x4c) = ar5[9];
  *(undefined4 *)(ar4 + 0x50) = ar5[10];
  *(undefined4 *)(ar4 + 0x54) = ar5[0xc];
  *(undefined4 *)(ar4 + 0x58) = ar5[0xd];
  *(undefined4 *)(ar4 + 0x5c) = ar5[0xe];
  *(undefined4 *)(ar4 + 0x60) = ar5[0x10];
  *(undefined4 *)(ar4 + 100) = ar5[0x11];
  *(undefined4 *)(ar4 + 0x68) = ar5[0x12];
  *(undefined4 *)(ar4 + 0x6c) = ar5[0x14];
  *(undefined4 *)(ar4 + 0x70) = ar5[0x15];
  *(undefined4 *)(ar4 + 0x74) = ar5[0x16];
  *(undefined4 *)(ar4 + 0x78) = ar5[0x18];
  *(undefined4 *)(ar4 + 0x7c) = ar5[0x19];
  *(undefined4 *)(ar4 + 0x80) = ar5[0x1a];
  *(undefined4 *)(ar4 + 0x84) = ar5[0x1c];
  *(undefined4 *)(ar4 + 0x88) = ar5[0x1d];
  uVar2 = ar5[0x1e];
  *(undefined4 *)(ar4 + 0x8c) = uVar2;
  FUN_8c022fc0(ar5,ar5 + 0xc,ar6,ar7);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x20) = uVar2;
  }
  else {
    *(ulonglong *)(ar4 + 0x20) = CONCAT44(uVar2,in_fr1);
  }
  uVar1 = CONCAT44(uVar2,in_fr1);
  FUN_8c022fc0(ar5,ar5 + 0x10,ar6,ar7);
  uStack_14 = (undefined4)uVar1;
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = uVar2;
    uStack_14 = uVar2;
  }
  else {
    *(undefined8 *)(ar4 + 0x24) = uVar1;
  }
  FUN_8c022fc0(ar5,ar5 + 4,ar6,ar7);
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_18 = uVar2;
  if (cVar3 != '\0') {
    uStack_18 = (undefined4)uVar1;
    uStack_14 = uVar2;
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x28) = uStack_18;
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = CONCAT44(uStack_14,uStack_18);
  }
  return 0;
}

__asm__(".globl _FUN_8c017630\n.set _FUN_8c017630, _FUN_8c017630_def\n");
