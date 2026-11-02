#include "../decls.h"
undefined4 FUN_8c02a5d4_def(undefined4 ar4,undefined4 *ar5,undefined8 *ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  char cVar1;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [48];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar1 = '\0';
  uStack_58 = *ar5;
  uStack_54 = ar5[1];
  uStack_50 = ar5[2];
  uStack_1c = in_fr1;
  FUN_8c024340(auStack_4c,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    uStack_1c = 0;
  }
  else {
    uStack_64 = 0;
    uStack_10 = 0;
  }
  uStack_14 = 0;
  uStack_18 = 0;
  FUN_8c212740(auStack_4c,&uStack_58,&uStack_64,ar7,uStack_1c);
  if (cVar1 == '\0') {
    *(undefined4 *)ar6 = uStack_64;
    *(undefined4 *)((int)ar6 + 4) = uStack_60;
  }
  else {
    *ar6 = CONCAT44(uStack_60,uStack_64);
    *(ulonglong *)((int)ar6 + 4) = CONCAT44(uStack_5c,uStack_60);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar6 + 1) = uStack_5c;
  }
  else {
    ar6[1] = CONCAT44(uStack_58,uStack_5c);
  }
  return 0x10;
}

__asm__(".globl _FUN_8c02a5d4\n.set _FUN_8c02a5d4, _FUN_8c02a5d4_def\n");
