#include "../decls.h"
undefined4 FUN_8c10ac3c_def(undefined4 ar4,undefined4 ar5,int ar6,int *ar7)

{
  int in_r0;
  uint uVar1;
  int iVar2;
  int unaff_r14;
  char in_T;
  
  if (in_T == '\x01') {
    *(undefined1 *)(unaff_r14 + 0x50) = 1;
    return 1;
  }
  if (in_r0 == 3) {
    if (ar6 != 0) {
      FUN_8c10a410(unaff_r14,*ar7 + ar6,ar6,ar7);
    }
    iVar2 = *ar7 + (*(int *)(unaff_r14 + 0x7c) * 3 + 10) * 4;
  }
  else {
    if (in_r0 != 4) {
      if (in_r0 == 0xf8) {
        *ar7 = *(int *)(unaff_r14 + 0x38);
        return 1;
      }
      if (in_r0 == 0xff) {
        FUN_8c10abf4(unaff_r14,ar5,ar6,ar7);
        FUN_8c120668(unaff_r14,ar5,ar6,ar7);
        return 1;
      }
      return 0;
    }
    if (ar6 == 0) {
      uVar1 = FUN_8c10a308(unaff_r14,ar5,0,ar7);
      if ((uVar1 & 0xff) == 0) {
        return 1;
      }
      return 0;
    }
    FUN_8c10a4bc(unaff_r14,*ar7 + ar6,ar6,ar7);
    iVar2 = *ar7 + (*(int *)(unaff_r14 + 0x7c) * 3 + 10) * 4;
  }
  *ar7 = iVar2;
  return 1;
}

__asm__(".globl _FUN_8c10ac3c\n.set _FUN_8c10ac3c, _FUN_8c10ac3c_def\n");
