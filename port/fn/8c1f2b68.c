#include "../decls.h"
uint FUN_8c1f2b68_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int ar5_00;
  uint ar6_00;
  
  if (*ar4 < 0x22) {
    uVar1 = 0;
  }
  else {
    FUN_8c1f2a5c(ar4 + 2,ar5,4,ar7);
    FUN_8c1f2a5c(ar4 + 10,ar5 + 4,4,ar7);
    *(byte *)(ar5 + 8) = ar4[0x19];
    uVar1 = (uint)ar4[0x20];
    if ((*(byte *)(ar5 + 8) & 2) == 0) {
      uVar1 = uVar1 - 2;
    }
    ar5_00 = ar5 + 10;
    ar6_00 = uVar1;
    FUN_8c1f2a5c(ar4 + 0x21,ar5_00,uVar1,ar7);
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
    uVar2 = FUN_8c1f2b42(ar5 + 10,ar5_00,ar6_00,ar7);
    *(char *)(ar5 + 9) = (char)uVar2;
    uVar1 = (uint)*ar4;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f2b68\n.set _FUN_8c1f2b68, _FUN_8c1f2b68_def\n");
