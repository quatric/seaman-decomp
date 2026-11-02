#include "../decls.h"
undefined4
FUN_8c20e8dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            ,undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20,undefined4 s24)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a7;
  int unaff_r9;
  int unaff_r10;
  undefined4 unaff_r12;
  int *piVar3;
  int unaff_r14;
  undefined4 in_PR;
  
  iVar1 = FUN_8c20e838(ar7,ar5,ar6,ar7);
  if (unaff_r10 != 0) {
    FUN_8c20e9ae(unaff_r12,unaff_r14,unaff_r14,s24);
  }
  a7 = s24;
  s_UUUU_t_20ed60(*(int *)(&DAT_8c26d63c + iVar1 * 4) + unaff_r9,unaff_r12,unaff_r14,s24,in_PR);
  piVar3 = (int *)(&DAT_8c26d63c + (iVar1 + -1) * 4);
  do {
    FUN_8c20f25a(unaff_r12,unaff_r14,unaff_r14,a7);
    unaff_r14 = unaff_r14 >> 1;
    if (unaff_r10 != 0) {
      FUN_8c20e9ae(unaff_r12,unaff_r14,unaff_r14,s24);
    }
    a7 = s24;
    uVar2 = s_UUUU_t_20ed60(*piVar3 + unaff_r9,unaff_r12,unaff_r14,s24,in_PR);
    piVar3 = piVar3 + -1;
  } while (&UNK_8c26d63b < piVar3);
  return uVar2;
}

__asm__(".globl _FUN_8c20e8dc\n.set _FUN_8c20e8dc, _FUN_8c20e8dc_def\n");
