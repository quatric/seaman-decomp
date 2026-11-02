#include "../decls.h"
int FUN_8c10b852_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int unaff_r11;
  undefined4 unaff_r12;
  undefined4 *unaff_r13;
  char in_T;
  
  ar5_00 = unaff_r12;
  if (in_T != '\x01') {
    ar5_00 = *unaff_r13;
  }
  iVar1 = FUN_8c11e534(*ar4,ar5_00,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r11 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4,ar6,ar7);
  }
  if (unaff_r11 == 0) {
    if (unaff_r13 == (undefined4 *)0x0) {
      ar4[9] = unaff_r12;
      ar4[0xb] = unaff_r12;
      ar4[10] = unaff_r12;
    }
    else {
      iVar1 = unaff_r13[1];
      if (iVar1 == 4) {
        ar4[10] = unaff_r13;
      }
      else if ((iVar1 == 10) || (iVar1 == 0xb)) {
        ar4[9] = unaff_r13;
        ar4[0xb] = unaff_r12;
      }
      else {
        unaff_r11 = 0xd;
      }
    }
  }
  return unaff_r11;
}

__asm__(".globl _FUN_8c10b852\n.set _FUN_8c10b852, _FUN_8c10b852_def\n");
