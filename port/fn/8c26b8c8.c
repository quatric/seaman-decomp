#include "../decls.h"
uint FUN_8c26b8c8_def(int ar4,int ar5,int ar6,int *ar7)

{
  undefined4 a5;
  int iVar1;
  int a6;
  int *a7;
  int iVar2;
  
  a6 = ar6;
  a7 = ar7;
  a5 = FUN_8c26b4f4(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    a6 = *(int *)(ar4 + 0x10);
    iVar1 = (*(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x14)) + *(int *)(ar4 + 0x24);
    if (a6 < iVar1) {
      iVar1 = a6;
    }
  }
  else {
    if (ar5 != 1) {
      iVar2 = 0;
      if (*(int *)(ar4 + 0x28) != 0) {
        (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,a7);
      }
      goto LAB_8c26b934;
    }
    a6 = (*(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x18)) + *(int *)(ar4 + 0x24);
    iVar1 = a6;
    if (*(int *)(ar4 + 0xc) < a6) {
      iVar1 = *(int *)(ar4 + 0xc);
    }
  }
  iVar2 = ar6;
  if (iVar1 < ar6) {
    iVar2 = iVar1;
  }
LAB_8c26b934:
  *ar7 = iVar2;
  FUN_8c26b50c(ar4,a5,a6,a7);
  return (uint)(iVar2 == ar6);
}

__asm__(".globl _FUN_8c26b8c8\n.set _FUN_8c26b8c8, _FUN_8c26b8c8_def\n");
