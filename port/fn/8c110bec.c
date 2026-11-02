#include "../decls.h"
uint FUN_8c110bec_def(undefined4 ar4,undefined4 ar5,int ar6,uint *ar7,int ain0)

{
  uint uVar1;
  int a6;
  uint *a7;
  uint uVar2;
  undefined4 unaff_r14;
  char in_T;
  undefined4 in_PR;
  
  uVar2 = 1;
  if (in_T == '\x01') {
    a6 = ar6;
    a7 = ar7;
    FUN_8c110b58(unaff_r14,ar5,ar6,ar7,in_PR);
    uVar1 = (**(code **)(ar6 + 0x3c))(ar6,ar5,a6,a7);
    if (*ar7 < uVar1) {
      (**(code **)(ar6 + 0x6c))(ar6,ar5,a6,a7);
      uVar2 = FUN_8c110c80(unaff_r14,ar5,a6,a7);
      uVar2 = (uint)((uVar2 & 0xff) == 0);
      *ar7 = *ar7 + 1;
    }
  }
  else if (ain0 == 0xff) {
    FUN_8c110b58(unaff_r14,ar5,ar6,ar7,in_PR);
    FUN_8c120668(unaff_r14,ar5,ar6,ar7);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c110bec\n.set _FUN_8c110bec, _FUN_8c110bec_def\n");
