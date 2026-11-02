#include "../decls.h"
undefined4 FUN_8c1f2356_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar4_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 a7;
  
  a7 = 0;
  uVar2 = 0;
  ar4_00 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
  if (ar4_00 != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x38))(ar4,ar5,uVar2,a7);
    if (iVar1 == 0) {
      uVar2 = 0xfffffff3;
    }
    else {
      ar4_00[0xf] = iVar1;
      *(undefined2 *)(ar4_00 + 0x14) = 4;
      *(int **)(*ar4_00 + 0x1c) = ar4_00;
      uVar2 = FUN_8c1f2f98(ar4_00,ar5,uVar2,a7);
    }
    return uVar2;
  }
  return 0xfffffff3;
}

__asm__(".globl _FUN_8c1f2356\n.set _FUN_8c1f2356, _FUN_8c1f2356_def\n");
