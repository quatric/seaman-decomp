#include "../decls.h"
undefined4 FUN_8c2569e0_def(uint *ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  float fVar1;
  
  if (0 < ar5) goto LAB_8c256a1a;
  do {
    if (ar4[2] != 0) {
      fVar1 = ((float)(ar4[2] & 0xffff) * 6.2831855) / 65536.0;
      sin(fVar1);
      cos(fVar1);
    }
    if (0 < ar5) {
      return ain0;
    }
LAB_8c256a1a:
    if (ar4[1] != 0) {
      fVar1 = ((float)(ar4[1] & 0xffff) * 6.2831855) / 65536.0;
      sin(fVar1);
      cos(fVar1);
    }
    if (*ar4 != 0) {
      fVar1 = ((float)(*ar4 & 0xffff) * 6.2831855) / 65536.0;
      sin(fVar1);
      cos(fVar1);
    }
  } while (0 < ar5);
  return ain0;
}

__asm__(".globl _FUN_8c2569e0\n.set _FUN_8c2569e0, _FUN_8c2569e0_def\n");
