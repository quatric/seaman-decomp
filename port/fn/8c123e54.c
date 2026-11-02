#include "../decls.h"
undefined4 FUN_8c123e54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int in_r0;
  undefined4 uVar2;
  uint uVar3;
  undefined1 in_r3;
  undefined8 *puVar4;
  uint ar5_00;
  int unaff_r14;
  undefined4 extraout_fr1;
  float extraout_fr0;
  undefined4 in_fr5;
  undefined8 uVar5;
  undefined2 uVar6;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  *(undefined1 *)(in_r0 + unaff_r14) = in_r3;
  uVar2 = _DAT_8c123ef4;
  if (in_FPSCR_SZ == 0) {
    uVar2 = in_fr5;
  }
  FUN_8c120550(unaff_r14,6,ar6,ar7);
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  cVar1 = (char)((uVar3 & 0x100000) >> 0x14);
  ar5_00 = 0;
  puVar4 = (undefined8 *)(unaff_r14 + 0x54);
  if ((char)((uVar3 & 0x80000) >> 0x13) == '\0') {
    uVar6 = (undefined2)(int)extraout_fr0;
  }
  else {
    uVar6 = (undefined2)(int)(double)CONCAT44(extraout_fr0,extraout_fr1);
  }
  *(undefined2 *)(unaff_r14 + 0x48) = uVar6;
  if (cVar1 == '\0') {
    uVar5 = CONCAT44(DAT_8c123f00,uVar2);
  }
  else {
    uVar5 = CONCAT44(DAT_8c123f04,DAT_8c123f00);
  }
  do {
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (cVar1 == '\0') {
      *(undefined4 *)puVar4 = uVar2;
    }
    else {
      *puVar4 = uVar5;
    }
    ar5_00 = ar5_00 + 2;
    if (cVar1 == '\0') {
      *(undefined4 *)((int)puVar4 + 4) = uVar2;
    }
    else {
      *(undefined8 *)((int)puVar4 + 4) = uVar5;
    }
    puVar4 = puVar4 + 1;
  } while (ar5_00 < 0x14);
  *(int *)(0xa8 + unaff_r14) = unaff_r14 + 0x54;
  uVar2 = FUN_8c12356c(unaff_r14,ar5_00,0x14,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c123e54\n.set _FUN_8c123e54, _FUN_8c123e54_def\n");
