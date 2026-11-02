#include "../decls.h"
int FUN_8c2620c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int iVar1;
  undefined4 in_PR;
  
  ar5_00 = 0;
  ar4_00 = 2;
  ar6_00 = unaff_r12;
  ar7_00 = unaff_r13;
  FUN_8c261a4c(2,0,unaff_r12,unaff_r13);
  FUN_8c260ca0(ar4_00,ar5_00,ar6_00,ar7_00,in_PR);
  a4 = FUN_8c261f48(ar4_00,ar5_00,ar6_00,ar7_00);
  iVar1 = a4;
  if ((a4 != 0) &&
     (ar5_00 = unaff_r12, ar6_00 = unaff_r13, ar4_00 = FUN_8c262078(a4,unaff_r12,unaff_r13,ar7_00),
     ar4_00 < 0)) {
    FUN_8c262168(a4,ar5_00,ar6_00,ar7_00);
    iVar1 = 0;
    ar4_00 = a4;
  }
  FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar7_00,in_PR);
  FUN_8c261a4c(2,1,unaff_r12,unaff_r13);
  return iVar1;
}

__asm__(".globl _FUN_8c2620c8\n.set _FUN_8c2620c8, _FUN_8c2620c8_def\n");
