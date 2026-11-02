#include "../decls.h"
undefined4 FUN_8c1b9c52_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short *extraout_r1;
  uint extraout_r2;
  int extraout_r2_00;
  int iVar3;
  int *unaff_r9;
  char *unaff_r12;
  int in_GBR;
  char extraout_S;
  char extraout_S_00;
  bool bVar4;
  undefined4 extraout_MACH;
  undefined4 extraout_MACH_00;
  undefined4 extraout_MACL;
  undefined4 extraout_MACL_00;
  
  iVar3 = (int)*unaff_r12;
  FUN_8c1b9a72(ar4,ar5,ar6,iVar3);
  uVar2 = DAT_8c1b9cd8;
  uVar1 = FUN_8c1b9c3a(ar4,DAT_8c1b9cd8,ar6,iVar3);
  *(short *)(in_GBR + 0x1ce) = (short)uVar1;
  bVar4 = (extraout_r2 & 1) != 0;
  if (extraout_S != '\0') {
    mac_lOp(CONCAT44(extraout_MACH,extraout_MACL),
            (longlong)*unaff_r9 * (longlong)*(int *)(extraout_r2 >> 1 | (uint)bVar4 << 0x1f));
  }
  uVar1 = FUN_8c1bab30(ar4,uVar2,ar6,iVar3,*(undefined4 *)(&stack0x00000000 + (-(uint)bVar4 - ar4)))
  ;
  *(short *)(unaff_r12 + 0xf) = (short)uVar1;
  iVar3 = (int)unaff_r12[1];
  FUN_8c1b9aa8(ar4,uVar2,ar6,iVar3);
  uVar2 = FUN_8c1b9c52(ar4,uVar2,ar6,iVar3);
  *(short *)(in_GBR + 0x1cc) = (short)uVar2;
  if (extraout_S_00 != '\0') {
    mac_wOp(CONCAT44(extraout_MACH_00,extraout_MACL_00),(int)*extraout_r1 * (int)*extraout_r1);
  }
  *(short *)(extraout_r2_00 + 0x1a) = (short)uVar2;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9c52\n.set _FUN_8c1b9c52, _FUN_8c1b9c52_def\n");
