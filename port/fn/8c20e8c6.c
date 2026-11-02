#include "../decls.h"
undefined4 FUN_8c20e8c6_def(int ar4,undefined4 ar5,int ar6,int ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int *piVar3;
  undefined4 unaff_r14;
  undefined4 in_PR;
  
  iVar1 = FUN_8c20e838(ar7,ar7,ar6,ar7);
  if (ar6 != 0) {
    FUN_8c20e9ae(ar5,ar7,ar7,s0,in_PR,unaff_r8,unaff_r9,unaff_r10,unaff_r11,unaff_r12,unaff_r13,
                 unaff_r14);
  }
  ar7_00 = s0;
  s_UUUU_t_20ed60(*(int *)(&DAT_8c26d63c + iVar1 * 4) + ar4,ar5,ar7,s0,&DAT_8c26d63c);
  piVar3 = (int *)(&DAT_8c26d63c + (iVar1 + -1) * 4);
  do {
    uVar2 = FUN_8c20f25a(ar5,ar7,ar7,ar7_00);
    ar7 = ar7 >> 1;
    if (ar6 != 0) {
      uVar2 = FUN_8c20e9ae(ar5,ar7,ar7,s0,in_PR,unaff_r8,unaff_r9,unaff_r10,unaff_r11,unaff_r12,
                           unaff_r13,unaff_r14);
    }
    ar7_00 = s0;
    uVar2 = s_UUUU_t_20ed60(*piVar3 + ar4,ar5,ar7,s0,uVar2);
    piVar3 = piVar3 + -1;
  } while ((undefined *)0x8c26d63b < piVar3);
  return uVar2;
}

__asm__(".globl _FUN_8c20e8c6\n.set _FUN_8c20e8c6, _FUN_8c20e8c6_def\n");
