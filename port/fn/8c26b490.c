#include "../decls.h"
uint FUN_8c26b490_def(int ar4,int ar5,int ar6,int *ar7)

{
  undefined4 a5;
  int iVar1;
  int a6;
  int *a7;
  int iVar2;
  
  a6 = ar6;
  a7 = ar7;
  a5 = FUN_8c26b1e0(ar4,ar5,ar6,ar7);
  iVar1 = 0;
  if (ar5 != 0) {
    if (ar5 != 1) {
      iVar2 = 0;
      if (*(int *)(ar4 + 0x1c) != 0) {
        (**(code **)(ar4 + 0x1c))(*(undefined4 *)(ar4 + 0x20),0xfffffffd,a6,a7);
      }
      goto LAB_8c26b4d2;
    }
    iVar1 = *(int *)(ar4 + 0xc);
    iVar2 = ar6;
    if (ar6 <= iVar1) goto LAB_8c26b4d2;
  }
  iVar2 = iVar1;
LAB_8c26b4d2:
  *ar7 = iVar2;
  FUN_8c26b1f8(ar4,a5,a6,a7);
  return (uint)(iVar2 == ar6);
}

__asm__(".globl _FUN_8c26b490\n.set _FUN_8c26b490, _FUN_8c26b490_def\n");
