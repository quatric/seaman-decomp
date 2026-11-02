#include "../decls.h"
undefined4
FUN_8c017490_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7,undefined4 *s0,undefined4 *s4,
            undefined4 *s8,undefined4 *s12,undefined4 *s16)

{
  undefined4 *ar6_00;
  undefined4 in_fr1;
  undefined4 uVar2;
  undefined8 uVar1;
  char cVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  cVar3 = '\0';
  *(undefined4 *)(ar4 + 0x30) = *ar5;
  *(undefined4 *)(ar4 + 0x34) = ar5[1];
  *(undefined4 *)(ar4 + 0x38) = ar5[2];
  *(undefined4 *)(ar4 + 0x3c) = *ar6;
  *(undefined4 *)(ar4 + 0x40) = ar6[1];
  *(undefined4 *)(ar4 + 0x44) = ar6[2];
  *(undefined4 *)(ar4 + 0x48) = *ar7;
  *(undefined4 *)(ar4 + 0x4c) = ar7[1];
  *(undefined4 *)(ar4 + 0x50) = ar7[2];
  *(undefined4 *)(ar4 + 0x54) = *s0;
  *(undefined4 *)(ar4 + 0x58) = s0[1];
  *(undefined4 *)(ar4 + 0x5c) = s0[2];
  *(undefined4 *)(ar4 + 0x60) = *s4;
  *(undefined4 *)(ar4 + 100) = s4[1];
  *(undefined4 *)(ar4 + 0x68) = s4[2];
  *(undefined4 *)(ar4 + 0x6c) = *s8;
  *(undefined4 *)(ar4 + 0x70) = s8[1];
  *(undefined4 *)(ar4 + 0x74) = s8[2];
  *(undefined4 *)(ar4 + 0x78) = *s12;
  *(undefined4 *)(ar4 + 0x7c) = s12[1];
  *(undefined4 *)(ar4 + 0x80) = s12[2];
  *(undefined4 *)(ar4 + 0x84) = *s16;
  *(undefined4 *)(ar4 + 0x88) = s16[1];
  uVar2 = s16[2];
  *(undefined4 *)(ar4 + 0x8c) = uVar2;
  ar6_00 = ar6;
  FUN_8c022fc0(ar5,s0,ar6,ar7);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x20) = uVar2;
  }
  else {
    *(ulonglong *)(ar4 + 0x20) = CONCAT44(uVar2,in_fr1);
  }
  uVar1 = CONCAT44(uVar2,in_fr1);
  FUN_8c022fc0(ar5,s4,ar6_00,ar7);
  uStack_28 = (undefined4)uVar1;
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = uVar2;
    uStack_28 = uVar2;
  }
  else {
    *(undefined8 *)(ar4 + 0x24) = uVar1;
  }
  FUN_8c022fc0(ar5,ar6,ar6_00,ar7);
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_2c = uVar2;
  if (cVar3 != '\0') {
    uStack_2c = (undefined4)uVar1;
    uStack_28 = uVar2;
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x28) = uStack_2c;
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = CONCAT44(uStack_28,uStack_2c);
  }
  return 4;
}

__asm__(".globl _FUN_8c017490\n.set _FUN_8c017490, _FUN_8c017490_def\n");
