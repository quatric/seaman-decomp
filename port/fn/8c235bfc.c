#include "../decls.h"
undefined4 FUN_8c235bfc_def(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  int ar7_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  undefined1 *ar6_01;
  undefined8 in_dr12;
  undefined8 in_dr14;
  undefined1 auStack_32c [772];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = (undefined4)in_dr14;
  uStack_20 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_24 = (undefined4)in_dr12;
  uStack_28 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  ar6_00 = auStack_32c;
  ar6_01 = auStack_32c;
  if ((ar6 & 0x80000000) == 0) {
    uVar1 = ar5;
    ar7_00 = FUN_8c235e1c(ar4,ar5,auStack_32c,ar7);
    if (ar7_00 == -1) {
      return 0xffffffff;
    }
    FUN_8c236454(ar4,uVar1,ar6_01,ar7);
    if ((ar6 & 0x40) == 0) {
      uVar2 = 0x80002;
      FUN_8c237124(0x80002,uVar1,ar6_01,ar7);
      uVar1 = FUN_8c236510(uVar2,uVar1,ar6_01,ar7);
    }
    else {
      uVar2 = 0x2100002;
      FUN_8c237124(0x2100002,uVar1,ar6_01,ar7);
      uVar1 = FUN_8c2365e2(uVar2,uVar1,ar6_01,ar7);
    }
    if ((ar6 & 0x20) == 0) {
      uVar2 = FUN_8c25c3a4(auStack_32c,ar5,uVar1,ar7_00);
    }
    else {
      uVar2 = FUN_8c25b650(auStack_32c,ar5,uVar1,ar7_00);
    }
  }
  else {
    uVar1 = ar5;
    ar7_00 = FUN_8c235d8c(ar4,ar5,auStack_32c,ar7);
    if (ar7_00 == -1) {
      return 0xffffffff;
    }
    FUN_8c236454(ar4,uVar1,ar6_00,ar7);
    if ((ar6 & 0x40) == 0) {
      uVar2 = 0x8000a;
      FUN_8c237124(0x8000a,uVar1,ar6_00,ar7);
      uVar1 = FUN_8c23666c(uVar2,uVar1,ar6_00,ar7);
    }
    else {
      uVar2 = 0x210000a;
      FUN_8c237124(0x210000a,uVar1,ar6_00,ar7);
      uVar1 = FUN_8c236718(uVar2,uVar1,ar6_00,ar7);
    }
    if ((ar6 & 0x20) == 0) {
      uVar2 = FUN_8c25c868(auStack_32c,ar5,uVar1,ar7_00);
    }
    else {
      uVar2 = FUN_8c25bc88(auStack_32c,ar5,uVar1,ar7_00);
    }
  }
  FUN_8c2370dc(uVar2,ar5,uVar1,ar7_00);
  uVar1 = FUN_8c2364b2(uVar2,ar5,uVar1,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c235bfc\n.set _FUN_8c235bfc, _FUN_8c235bfc_def\n");
