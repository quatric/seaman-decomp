#include "../decls.h"
int FUN_8c265374_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined1 *ar6_00;
  int *ar7_00;
  int in_stack_ffffffe4;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  char cStack_c;
  
  ar6_00 = &stack0xffffffe4;
  ar7_00 = &iStack_18;
  uStack_14 = ar4;
  uStack_10 = ar5;
  cStack_c = (char)ar6;
  ar5_00 = FUN_8c2684f0(ar5,(int)(char)ar6,&stack0xffffffe4,ar7_00);
  if (ar5_00 == 0) {
    if ((in_stack_ffffffe4 == 0) || (iStack_18 < 1)) {
      ar5_00 = 0x7fffffff;
    }
    else {
      ar5_00 = FUN_8c265ff4(uStack_14,in_stack_ffffffe4,ar6_00,ar7_00);
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265374,ar5_00,ar6_00,ar7_00,in_stack_ffffffe4);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265374\n.set _FUN_8c265374, _FUN_8c265374_def\n");
