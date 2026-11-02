#include "../decls.h"
int Class_12c3c4_m9_10a00c_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  if (ar6 == 2) {
    *(char *)(0x865 + ar4) = (char)*(undefined4 *)(ar5 + 4);
  }
  else {
    *(char *)(0x854 + ar4) = (char)*(undefined4 *)(ar5 + 4);
  }
  *(undefined1 *)(0x98 + ar4) = *ar5;
  FUN_8c030d10(ar4 + 0x9c,ar5 + 8,ar6,ar7);
  iVar1 = 0x99;
  *(undefined1 *)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl _Class_12c3c4_m9_10a00c\n.set _Class_12c3c4_m9_10a00c, _Class_12c3c4_m9_10a00c_def\n");
