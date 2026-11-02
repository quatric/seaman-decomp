#include "../decls.h"
undefined8 * FUN_8c019508_def(undefined4 ar4,undefined4 *ar5,undefined8 *ar6,undefined8 *ar7)

{
  char cVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar1 = '\0';
  uStack_14 = *ar5;
  uStack_10 = ar5[1];
  uStack_c = ar5[2];
  FUN_8c256294(0,&uStack_14,&uStack_1c,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)ar6 = uStack_1c;
    *(undefined4 *)ar7 = uStack_18;
  }
  else {
    *ar6 = CONCAT44(uStack_18,uStack_1c);
    *ar7 = CONCAT44(uStack_14,uStack_18);
  }
  return ar7;
}

__asm__(".globl _FUN_8c019508\n.set _FUN_8c019508, _FUN_8c019508_def\n");
