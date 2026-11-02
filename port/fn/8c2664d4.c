#include "../decls.h"
int FUN_8c2664d4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int unaff_r11;
  int unaff_r13;
  undefined1 *unaff_r14;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    unaff_r11 = 0xd000001;
  }
  else if (unaff_r13 == 0) {
    unaff_r11 = 0x7000103;
  }
  else {
    FUN_8c266214(unaff_r13,unaff_r14 + 0x14,ar6,ar7);
    FUN_8c266288(unaff_r13,unaff_r14 + 0x18,ar6,ar7);
    *unaff_r14 = (char)unaff_r11;
    unaff_r14[1] = (char)unaff_r11;
    FUN_8c266620(unaff_r13,unaff_r14 + 2,ar6,ar7);
    FUN_8c266368(unaff_r13,unaff_r14 + 3,ar6,ar7);
    FUN_8c2663d8(unaff_r13,unaff_r14 + 6,ar6,ar7);
    FUN_8c266448(unaff_r13,unaff_r14 + 8,ar6,ar7);
    FUN_8c2662f8(unaff_r13,unaff_r14 + 4,ar6,ar7);
    FUN_8c2661a4(unaff_r13,unaff_r14 + 5,ar6,ar7);
    FUN_8c266134(unaff_r13,unaff_r14 + 0x10,ar6,ar7);
    FUN_8c2665b0(unaff_r13,unaff_r14 + 0xc,ar6,ar7);
  }
  if (unaff_r11 != 0) {
    FUN_8c2688a0(&LAB_8c2664c4,unaff_r11,ar6,ar7,in_PR);
  }
  return unaff_r11;
}

__asm__(".globl _FUN_8c2664d4\n.set _FUN_8c2664d4, _FUN_8c2664d4_def\n");
