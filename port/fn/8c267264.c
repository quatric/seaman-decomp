#include "../decls.h"
int FUN_8c267264_def(undefined4 ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int *in_r2;
  int unaff_r10;
  undefined4 unaff_r12;
  int unaff_r13;
  undefined1 *unaff_r14;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    unaff_r10 = 0xd000001;
  }
  else if (unaff_r13 == 0) {
    unaff_r10 = 0x7000103;
  }
  else {
    FUN_8c266ea8(unaff_r13,unaff_r12,unaff_r14 + 0x14,ar7);
    FUN_8c266f38(unaff_r13,unaff_r12,unaff_r14 + 0x18,ar7);
    *unaff_r14 = (char)unaff_r10;
    unaff_r14[1] = (char)unaff_r10;
    FUN_8c2673f0(unaff_r13,unaff_r12,unaff_r14 + 2,ar7);
    FUN_8c267058(unaff_r13,unaff_r12,unaff_r14 + 3,ar7);
    FUN_8c267130(unaff_r13,unaff_r12,unaff_r14 + 6,ar7);
    FUN_8c2671c0(unaff_r13,unaff_r12,unaff_r14 + 8,ar7);
    FUN_8c266fc8(unaff_r13,unaff_r12,unaff_r14 + 4,ar7);
    FUN_8c266e2c(unaff_r13,unaff_r12,unaff_r14 + 5,ar7);
    FUN_8c266d28(unaff_r13,unaff_r12,unaff_r14 + 0x10,ar7);
    ar6 = unaff_r14 + 0xc;
    FUN_8c267360(unaff_r13,unaff_r12,ar6,ar7);
  }
  if (unaff_r10 != 0) {
    FUN_8c2688a0(&LAB_8c2664c4,unaff_r10,ar6,ar7,in_PR);
  }
  return unaff_r10;
}

__asm__(".globl _FUN_8c267264\n.set _FUN_8c267264, _FUN_8c267264_def\n");
