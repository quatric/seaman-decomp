#include "../decls.h"
undefined4 FUN_8c21f27c_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int *a7;
  undefined4 *a5;
  
  a7 = 0x8c4aa360;
  if (ar5 == 0) {
    *(undefined4 *)0x8c4aa360 = *(undefined4 *)0x8c4ab0c4;
  }
  else {
    *(undefined4 *)0x8c4aa360 = ar5;
  }
  a5 = 0x8c4aa370;
  if (ar6 == 0) {
    *(undefined4 *)0x8c4aa370 = (&FUN_8c21fca8);
  }
  else {
    *(undefined4 *)0x8c4aa370 = (&FUN_8c21f2ae);
  }
  (*(code *)*(undefined4 *)0x8c4aa36c)(ar4,a5,ar6,a7);
  return *(undefined4 *)0x8c4aa364;
}

__asm__(".globl _FUN_8c21f27c\n.set _FUN_8c21f27c, _FUN_8c21f27c_def\n");
