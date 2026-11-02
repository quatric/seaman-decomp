#include "../decls.h"
undefined4 FUN_8c11c210_def(undefined4 ar4,undefined4 ar5,int ar6,int *ar7)

{
  int in_r0;
  int unaff_r14;
  char in_T;
  
  if (in_T == '\x01') {
    if (ar6 != 0) {
      FUN_8c11bcb8(unaff_r14,*ar7 + ar6,ar6,ar7);
    }
    *ar7 = *ar7 + ((*(ushort *)(unaff_r14 + 0x4c) + 4) * *(int *)(unaff_r14 + 0x54) + 4) * 4;
  }
  else if (in_r0 == 2) {
    if (ar6 == 0) {
      FUN_8c11bb94(unaff_r14,ar5,0,ar7);
    }
    else {
      FUN_8c11bbd4(unaff_r14,*ar7 + ar6,ar6,ar7);
      *ar7 = *ar7 + ((*(ushort *)(unaff_r14 + 0x4c) + 4) * *(int *)(unaff_r14 + 0x54) + 4) * 4;
    }
  }
  else {
    if (in_r0 != 0xff) {
      return 0;
    }
    FUN_8c11c1d8(unaff_r14,ar5,ar6,ar7);
    FUN_8c120668(unaff_r14,ar5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c11c210\n.set _FUN_8c11c210, _FUN_8c11c210_def\n");
