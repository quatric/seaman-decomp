#include "../decls.h"
undefined4 FUN_8c112a28_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int unaff_r14;
  undefined4 extraout_fr1;
  float extraout_fr0;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  
  FUN_8c120550(ar4,0x10,ar6,ar7);
  iVar1 = (int)0x138;
  uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13) &
          0xffe7ffff;
  *(uint *)(iVar1 + unaff_r14) = ar5;
  *(uint *)(iVar1 + 8 + unaff_r14) = ar5;
  if ((char)((uVar2 & 0x80000) >> 0x13) == '\0') {
    uVar2 = (uint)extraout_fr0;
  }
  else {
    uVar2 = (uint)(double)CONCAT44(extraout_fr0,extraout_fr1);
  }
  uVar2 = uVar2 & 0xffff;
  if (*(char *)(iVar1 + -0x3f + unaff_r14) == '\0') {
    if (uVar2 < ar5) {
      uVar2 = ar5;
    }
    *(uint *)(0x13c + unaff_r14) = uVar2;
  }
  else {
    *(undefined4 *)(0x13c + unaff_r14) = 1;
  }
  if ((ar5 < 2) && (*(char *)(0xf8 + unaff_r14) == '\0')) {
    iVar1 = (int)0x130;
    if (*(undefined **)(iVar1 + unaff_r14) == (&FUN_8c117bac)) {
      return 0;
    }
    *(undefined **)(iVar1 + unaff_r14) = (&FUN_8c117bac);
    *(undefined4 *)(iVar1 + 4 + unaff_r14) = *(undefined4 *)(iVar1 + unaff_r14);
    if (*(int *)(unaff_r14 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(0xb0 + unaff_r14) != 0) {
      return 0;
    }
    uVar2 = FUN_8c115732(unaff_r14,1,ar6,ar7);
  }
  else {
    iVar1 = (int)0x130;
    if (*(undefined **)(iVar1 + unaff_r14) == (&FUN_8c11617a)) {
      return 0;
    }
    *(undefined **)(iVar1 + unaff_r14) = (&FUN_8c11617a);
    *(undefined4 *)(iVar1 + 4 + unaff_r14) = *(undefined4 *)(iVar1 + unaff_r14);
    if (*(int *)(unaff_r14 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(0xa8 + unaff_r14) != 0) {
      return 0;
    }
    uVar2 = FUN_8c1155a0(unaff_r14,1,ar6,ar7);
  }
  if ((uVar2 & 0xff) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c112a28\n.set _FUN_8c112a28, _FUN_8c112a28_def\n");
