#include "../decls.h"
uint FUN_8c1f2b70_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int in_r2;
  int ar5_00;
  uint a6;
  byte *unaff_r13;
  undefined4 in_PR;
  
  if ((int)(uint)*unaff_r13 < in_r2) {
    uVar1 = 0;
  }
  else {
    FUN_8c1f2a5c(unaff_r13 + 2,ar5,4,ar7,in_PR);
    FUN_8c1f2a5c(unaff_r13 + 10,ar5 + 4,4,ar7,in_PR);
    *(byte *)(ar5 + 8) = unaff_r13[0x19];
    uVar1 = (uint)unaff_r13[0x20];
    if ((*(byte *)(ar5 + 8) & 2) == 0) {
      uVar1 = uVar1 - 2;
    }
    ar5_00 = ar5 + 10;
    a6 = uVar1;
    FUN_8c1f2a5c(unaff_r13 + 0x21,ar5_00,uVar1,ar7,in_PR);
    *(undefined1 *)(uVar1 + ar5 + 10) = 0;
    if ((*(byte *)(ar5 + 8) & 2) != 0) {
      ar5_00 = 0x2e;
      if (*(char *)(ar5 + 10) == '\0') {
        *(undefined1 *)(ar5 + 10) = 0x2e;
      }
      else if (*(char *)(ar5 + 10) == '\x01') {
        *(undefined1 *)(ar5 + 10) = 0x2e;
        *(undefined1 *)(ar5 + 0xb) = 0x2e;
        *(undefined1 *)(ar5 + 0xc) = 0;
      }
    }
    uVar2 = FUN_8c1f2b42(ar5 + 10,ar5_00,a6,ar7);
    *(char *)(ar5 + 9) = (char)uVar2;
    uVar1 = (uint)*unaff_r13;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f2b70\n.set _FUN_8c1f2b70, _FUN_8c1f2b70_def\n");
