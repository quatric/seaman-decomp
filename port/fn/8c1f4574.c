#include "../decls.h"
int FUN_8c1f4574_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0,undefined4 s0,
                undefined4 s4)

{
  int *in_r2;
  undefined4 *ar6_00;
  
  if (*(int *)(ain0 + *in_r2) != 0) {
    ar6_00 = &s4;
    ain0 = vsprintf_like(0x8c4715b8,s0,ar6_00,ar7);
    if (DAT_8c2739f8 != (code *)0x0) {
      ain0 = (*DAT_8c2739f8)(0x8c4715b8,s0,ar6_00,ar7);
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c1f4574\n.set _FUN_8c1f4574, _FUN_8c1f4574_def\n");
