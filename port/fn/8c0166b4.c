#include "../decls.h"
undefined4 Class_129808_m6_0166b4_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *ar5_00;
  int iVar2;
  int ar5_01;
  undefined1 auStack_64 [20];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [36];
  
  iVar2 = ar5;
  ar5_01 = ar6;
  FUN_8c0162f8(auStack_64,ar5,ar6,ar7);
  FUN_8c01688c(ar4,iVar2,ar6,ar7);
  FUN_8c015198(auStack_64,ar5_01,ar6,ar7,ar5_01);
  for (iVar2 = 0; *(char *)(iVar2 + ar5) != '\0'; iVar2 = iVar2 + 1) {
    FUN_8c01679c(ar4,(int)*(char *)(iVar2 + ar5),auStack_50,ar7);
    FUN_8c0168b4(ar4,iVar2,auStack_40,ar7);
    ar7 = 4;
    ar6 = ar4 + 0x1c;
    FUN_8c016318(auStack_64,auStack_40,ar6,4,ar5_01);
    ar5_00 = auStack_50;
    FUN_8c016324(auStack_64,ar5_00,ar6,ar7);
    FUN_8c016340(auStack_64,ar5_00,ar6,ar7);
  }
  uVar1 = free_if_nonnull_wrap_0151a0(auStack_64,0xffffffff,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_129808_m6_0166b4\n.set _Class_129808_m6_0166b4, _Class_129808_m6_0166b4_def\n");
