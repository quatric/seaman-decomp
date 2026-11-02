#include "../decls.h"
undefined4 FUN_8c26b32e_def(int ar4,int ar5,int ar6,int *ar7)

{
  undefined4 uVar1;
  int a6;
  int *a7;
  
  a6 = ar6;
  a7 = ar7;
  uVar1 = FUN_8c26b1e0(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    ar7[1] = 0;
    *ar7 = 0;
  }
  else if (ar5 == 1) {
    if (*(int *)(ar4 + 0xc) < ar6) {
      ar6 = *(int *)(ar4 + 0xc);
    }
    ar7[1] = ar6;
    *ar7 = *(int *)(ar4 + 0x14) + *(int *)(ar4 + 0x10);
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + ar7[1];
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) - ar7[1];
  }
  else {
    ar7[1] = 0;
    *ar7 = 0;
    if (*(int *)(ar4 + 0x1c) != 0) {
      (**(code **)(ar4 + 0x1c))(*(undefined4 *)(ar4 + 0x20),0xfffffffd,a6,a7);
    }
  }
  uVar1 = FUN_8c26b1f8(ar4,uVar1,a6,a7);
  return uVar1;
}

__asm__(".globl _FUN_8c26b32e\n.set _FUN_8c26b32e, _FUN_8c26b32e_def\n");
