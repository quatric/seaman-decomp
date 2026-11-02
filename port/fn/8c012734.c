#include "../decls.h"
undefined4 FUN_8c012734_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 in_fr5;
  uint in_fr4;
  undefined8 in_xd2;
  undefined4 in_PR;
  char cVar3;
  undefined2 uStack_10;
  undefined1 uStack_e;
  undefined1 uStack_d;
  
  cVar3 = '\0';
  uStack_10 = (undefined2)in_fr4;
  uStack_e = (undefined1)(in_fr4 >> 0x10);
  uStack_d = (undefined1)(in_fr4 >> 0x18);
  iVar1 = FUN_8c010df4(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if ((int)((in_fr4 >> 0x14 & 0x7ff) - 0x3ff) < 0) {
      if (cVar3 == '\0') {
        ar4[1] = 0;
        *ar4 = 0;
      }
      else {
        *(undefined8 *)(ar4 + 1) = 0x7001600700000000;
        *(undefined8 *)(ar4 + -1) = 0x7001600700000000;
      }
    }
    else {
      if (cVar3 == '\0') {
        uVar2 = CONCAT44(in_fr4,in_fr5);
      }
      else {
        in_xd2 = CONCAT17(uStack_d,CONCAT16(uStack_e,CONCAT24(uStack_10,in_fr5)));
        uVar2 = CONCAT44(in_PR,in_fr4);
      }
      if (cVar3 == '\0') {
        ar4[1] = (int)((ulonglong)uVar2 >> 0x20);
        *ar4 = (int)uVar2;
      }
      else {
        *(undefined8 *)(ar4 + 1) = uVar2;
        *(undefined8 *)(ar4 + -1) = in_xd2;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      _DAT_8c2787a8 = 0x4b8;
    }
    if (iVar1 == 2) {
      _DAT_8c2787a8 = 0x44c;
    }
  }
  return 4;
}

__asm__(".globl _FUN_8c012734\n.set _FUN_8c012734, _FUN_8c012734_def\n");
