#include "../decls.h"
undefined4 FUN_8c26b64e_def(int ar4,int ar5,int ar6,int *ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int a6;
  int *a7;
  
  a6 = ar6;
  a7 = ar7;
  uVar1 = FUN_8c26b4f4(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    iVar3 = (*(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x14)) + *(int *)(ar4 + 0x24);
    if (*(int *)(ar4 + 0x10) < iVar3) {
      iVar3 = *(int *)(ar4 + 0x10);
    }
    ar7[1] = iVar3;
    if (iVar3 < ar6) {
      ar6 = iVar3;
    }
    ar7[1] = ar6;
    *ar7 = *(int *)(ar4 + 0x1c) + *(int *)(ar4 + 0x14);
    uVar2 = libgcc_divide_helper_010614(*(int *)(ar4 + 0x14) + ar7[1],*(undefined4 *)(ar4 + 0x20));
    *(undefined4 *)(ar4 + 0x14) = uVar2;
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) - ar7[1];
  }
  else if (ar5 == 1) {
    iVar3 = (*(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x18)) + *(int *)(ar4 + 0x24);
    if (*(int *)(ar4 + 0xc) < iVar3) {
      iVar3 = *(int *)(ar4 + 0xc);
    }
    ar7[1] = iVar3;
    if (iVar3 < ar6) {
      ar6 = iVar3;
    }
    ar7[1] = ar6;
    *ar7 = *(int *)(ar4 + 0x1c) + *(int *)(ar4 + 0x18);
    uVar2 = libgcc_divide_helper_010614(*(int *)(ar4 + 0x18) + ar7[1],*(undefined4 *)(ar4 + 0x20));
    *(undefined4 *)(ar4 + 0x18) = uVar2;
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) - ar7[1];
  }
  else {
    ar7[1] = 0;
    *ar7 = 0;
    if (*(int *)(ar4 + 0x28) != 0) {
      (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,a7);
    }
  }
  uVar1 = FUN_8c26b50c(ar4,uVar1,a6,a7);
  return uVar1;
}

__asm__(".globl _FUN_8c26b64e\n.set _FUN_8c26b64e, _FUN_8c26b64e_def\n");
