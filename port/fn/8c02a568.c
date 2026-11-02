#include "../decls.h"
undefined4 FUN_8c02a568_def(undefined4 ar4,undefined4 *ar5,undefined8 *ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 in_stack_ffffff9c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [68];
  
  cVar1 = '\0';
  uStack_58 = *ar5;
  uStack_54 = ar5[1];
  uStack_50 = ar5[2];
  FUN_8c024340(auStack_4c,ar5,ar6,ar7);
  FUN_8c212740(auStack_4c,&uStack_58,&stack0xffffff9c,ar7,in_stack_ffffff9c);
  if (cVar1 == '\0') {
    *(undefined4 *)ar6 = in_stack_ffffff9c;
    *(undefined4 *)((int)ar6 + 4) = uStack_60;
  }
  else {
    *ar6 = CONCAT44(uStack_60,in_stack_ffffff9c);
    *(ulonglong *)((int)ar6 + 4) = CONCAT44(uStack_5c,uStack_60);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar6 + 1) = uStack_5c;
  }
  else {
    ar6[1] = CONCAT44(uStack_58,uStack_5c);
  }
  return 8;
}

__asm__(".globl _FUN_8c02a568\n.set _FUN_8c02a568, _FUN_8c02a568_def\n");
