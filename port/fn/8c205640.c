#include "../decls.h"
undefined4 FUN_8c205640_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(ar5 + 0xc);
  if (iVar1 == 8) {
    if ((*(uint *)(ar5 + 0x18) & 1) == 0) {
      *ar4 = 0x1000;
      ar4[1] = 0x80;
      ar4[2] = 0x20;
      ar4[3] = 0xf90;
    }
    else {
      *ar4 = 0x2000;
      ar4[1] = 0x80;
      ar4[2] = 0x20;
      ar4[3] = 4000;
    }
  }
  else if (iVar1 == 0x10) {
    if ((*(uint *)(ar5 + 0x18) & 1) == 0) {
      uVar2 = 0xfc0;
      *ar4 = 0x3000;
      ar4[1] = 0x80;
      ar4[2] = 0x40;
    }
    else {
      *ar4 = 0x4000;
      uVar2 = 0xfe0;
      ar4[1] = 0x80;
      ar4[2] = 0x60;
    }
    ar4[3] = uVar2;
  }
  else {
    if (iVar1 == 0x20) {
      if ((*(uint *)(ar5 + 0x18) & 1) == 0) {
        *ar4 = 0x5000;
        ar4[1] = 0x100;
        ar4[2] = 0x100;
        ar4[3] = 0x1000;
        goto LAB_8c205756;
      }
      *ar4 = 0x6000;
      ar4[1] = 0x200;
      uVar2 = 0xf60;
      ar4[2] = 0x160;
    }
    else {
      if (iVar1 != 0x40) {
        return 0;
      }
      if ((*(uint *)(ar5 + 0x18) & 1) == 0) {
        *ar4 = 0x7000;
        ar4[1] = 0x400;
        ar4[2] = 0x400;
        ar4[3] = 0x1000;
        goto LAB_8c205756;
      }
      *ar4 = 0x8000;
      ar4[1] = 0x800;
      uVar2 = 0xd60;
      ar4[2] = 0x560;
    }
    ar4[3] = uVar2;
  }
LAB_8c205756:
  uVar2 = libgcc_divide_helper_01051c(0x800,ar4[1]);
  ar4[4] = uVar2;
  return 1;
}

__asm__(".globl _FUN_8c205640\n.set _FUN_8c205640, _FUN_8c205640_def\n");
