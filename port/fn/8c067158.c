#include "../decls.h"
int Class_12a078_m7_067158_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(0x868 + ar4) = *(undefined4 *)(ar5 + 4);
  *(undefined1 *)(0x98 + ar4) = *ar5;
  FUN_8c030d10(ar4 + 0x9c,ar5 + 8,ar6,ar7);
  iVar1 = 0x99;
  *(undefined1 *)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl _Class_12a078_m7_067158\n.set _Class_12a078_m7_067158, _Class_12a078_m7_067158_def\n");
