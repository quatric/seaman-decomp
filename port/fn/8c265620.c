#include "../decls.h"
int FUN_8c265620_def(int ar4,undefined4 ar5,undefined4 ar6,code *ar7)

{
  int ar5_00;
  int in_stack_ffffffe0;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c265a2c(ar4,&stack0xffffffe0,ar6,ar7);
    if (in_stack_ffffffe0 == 2) {
      ar5_00 = 0x6000001;
    }
    else {
      *(undefined4 *)(ar4 + 0x18) = 0;
      ar5_00 = FUN_8c265f74(ar4,2,ar6,ar7);
      if (ar5_00 == 0) {
        ar7 = FUN_8c26592c;
        *(int *)(DAT_8c2784c0 + 400) = ar4;
        *(int *)(DAT_8c2784c0 + 0x188) = *(int *)(DAT_8c2784c0 + 0x188) + 1;
        ar6 = *(undefined4 *)(ar4 + 0xc);
        ar5_00 = aica_ram_266970(*(undefined4 *)(ar4 + 8),ar5,ar6,FUN_8c26592c,ar4);
      }
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265620,ar5_00,ar6,ar7,in_stack_ffffffe0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265620\n.set _FUN_8c265620, _FUN_8c265620_def\n");
