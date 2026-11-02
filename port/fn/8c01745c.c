#include "../decls.h"
undefined4 Class_129938_m5_01745c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_64 [100];
  
  (**(code **)(*ar5 + 0x38))(ar5,auStack_64,ar6,ar7);
  uVar1 = FUN_8c23340c(ar4 + 0x30,auStack_64,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_129938_m5_01745c\n.set _Class_129938_m5_01745c, _Class_129938_m5_01745c_def\n");
