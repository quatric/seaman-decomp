#include "../decls.h"
undefined4 FUN_8c1f34f4_def(int *ar4,uint ar5,uint ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint a6;
  
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    uVar1 = 0xfffffff6;
  }
  else if ((ar6 & 0x1f) == 0) {
    if ((ar5 & 0x1f) == 0) {
      if ((short)ar4[0x12] == 4) {
        a6 = ar5;
        iVar2 = (**(code **)(*(int *)(*ar4 + 0xc) + 0xc))(ar4[0xf],ar6,ar5,ar7);
        if (iVar2 == 0) {
          *(undefined2 *)((int)ar4 + 0x4a) = 1;
          ar4[8] = ar5;
          ar4[6] = 0;
          (**(code **)(*(int *)(*ar4 + 0xc) + 0x40))(0,ar6,a6,ar7);
          uVar1 = 0;
        }
        else if (iVar2 == -1) {
          uVar1 = 0xffffffe8;
        }
        else {
          uVar1 = 0xfffffff3;
        }
      }
      else {
        uVar1 = 0xffffffec;
      }
    }
    else {
      uVar1 = 0xfffffff1;
    }
  }
  else {
    uVar1 = 0xfffffff2;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f34f4\n.set _FUN_8c1f34f4, _FUN_8c1f34f4_def\n");
