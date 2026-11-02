#include "../decls.h"
int FUN_8c1209be_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined1 *puVar1;
  
  if (ar5 < *ar4 + -1) {
    do {
      puVar1 = (undefined1 *)((int)ar4 + ar5 * 2 + 8);
      ar5 = ar5 + 1;
      *puVar1 = puVar1[2];
      in_r0 = (int)(char)puVar1[3];
      puVar1[1] = puVar1[3];
    } while (ar5 < *ar4 + -1);
  }
  *ar4 = *ar4 + -1;
  return in_r0;
}

__asm__(".globl _FUN_8c1209be\n.set _FUN_8c1209be, _FUN_8c1209be_def\n");
