#include "../decls.h"
int FUN_8c2659e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int unaff_r13;
  char in_T;
  undefined4 in_PR;
  
  if (in_T == '\0') {
    if (*(int *)(ar4 + 0x10) != 0) {
      if (*(int *)(ar4 + 0x10) == -1) {
        *(undefined4 *)(ar4 + 0x18) = 1;
      }
      else {
        (**(code **)(ar4 + 0x10))(*(undefined4 *)(ar4 + 0x14),ar5,ar6,ar7);
      }
    }
  }
  else {
    unaff_r13 = 0x7000103;
  }
  if (unaff_r13 != 0) {
    FUN_8c2688a0(FUN_8c2659dc,unaff_r13,ar6,ar7,in_PR);
  }
  return unaff_r13;
}

__asm__(".globl _FUN_8c2659e4\n.set _FUN_8c2659e4, _FUN_8c2659e4_def\n");
