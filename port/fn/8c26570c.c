#include "../decls.h"
int FUN_8c26570c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain1)

{
  int *in_r3;
  int *dst;
  int ar6_00;
  int unaff_r14;
  undefined4 in_PR;
  
  dst = *(int **)(*in_r3 + 0x17c);
  if (*in_r3 == 0) {
    unaff_r14 = 0xd000001;
    ar6_00 = 0;
  }
  else {
    ar7 = 0x40;
    ar6_00 = ain1;
    do {
      if (*dst != 1) {
        FUN_8c010794(0x20,dst,&DAT_8c2784d0);
        *ar4 = (int)dst;
        *(int *)(DAT_8c2784c0 + 0x184) = *(int *)(DAT_8c2784c0 + 0x184) + 1;
        goto LAB_8c26574e;
      }
      ar6_00 = ar6_00 + 1;
      dst = dst + 8;
    } while (ar6_00 < 0x40);
    unaff_r14 = 0x7000101;
    *ar4 = ain1;
  }
LAB_8c26574e:
  if (unaff_r14 != 0) {
    FUN_8c2688a0(FUN_8c265704,unaff_r14,ar6_00,ar7,in_PR);
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c26570c\n.set _FUN_8c26570c, _FUN_8c26570c_def\n");
