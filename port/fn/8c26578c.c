#include "../decls.h"
int FUN_8c26578c_def(int *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *in_r2;
  int unaff_r14;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    unaff_r14 = 0xd000001;
  }
  else {
    ar7 = 0x7000102;
    if (ar4 == (int *)0x0) {
      unaff_r14 = 0x7000102;
    }
    else if (*ar4 == 1) {
      *ar4 = ar6;
      *(int *)(DAT_8c2784c0 + 0x184) = *(int *)(DAT_8c2784c0 + 0x184) + -1;
    }
    else {
      unaff_r14 = 0x7000102;
    }
  }
  if (unaff_r14 != 0) {
    FUN_8c2688a0(FUN_8c265784,unaff_r14,ar6,ar7,in_PR);
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c26578c\n.set _FUN_8c26578c, _FUN_8c26578c_def\n");
