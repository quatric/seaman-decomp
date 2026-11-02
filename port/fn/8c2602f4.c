#include "../decls.h"
undefined4 FUN_8c2602f4_def(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(0xa8 + ar4) == 0) {
    if ((*(int *)(ar4 + 4) == 1) &&
       (iVar1 = get_field_c_264f82(*(undefined4 *)(ar4 + 8)), iVar1 == 0)) {
      ar5 = ar4 + 0x70;
      ar7 = ar4 + 0x78;
      ar6 = ar4 + 0x74;
      (**(code **)(0x88 + ar4))(*(undefined4 *)(0x88 + 4 + ar4));
      FUN_8c260062(ar4,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 4) = 2;
    }
    iVar1 = *(int *)(ar4 + 4);
    if (iVar1 == 2) {
      FUN_8c26501c(*(undefined4 *)(ar4 + 8));
      iVar1 = get_field_c_264f82(*(undefined4 *)(ar4 + 8));
      if (iVar1 == 3) {
        FUN_8c260198(ar4,ar5,ar6,ar7);
        FUN_8c264fea(*(undefined4 *)(ar4 + 8));
        iVar1 = (int)0x90;
        iVar1 = (**(code **)(iVar1 + ar4))
                          (*(undefined4 *)(iVar1 + 4 + ar4),*(undefined4 *)(iVar1 + 0x14 + ar4),
                           *(undefined4 *)(iVar1 + 0x10 + ar4));
        *(undefined4 *)(ar4 + 4) = 3;
      }
    }
    return iVar1;
  }
  if (*(short *)(0xa8 + ar4) == 2) {
    uVar2 = FUN_8c260540();
    return uVar2;
  }
  if (*(short *)(0xa8 + ar4) == 3) {
    uVar2 = FUN_8c25f40e();
    return uVar2;
  }
  if (*(short *)(0xa8 + ar4) == 4) {
    uVar2 = FUN_8c25fb5c();
    return uVar2;
  }
  if (*(short *)(0xa8 + ar4) == 1) {
    uVar2 = FUN_8c260c60();
    return uVar2;
  }
  return (int)*(short *)(0xa8 + ar4);
}

__asm__(".globl _FUN_8c2602f4\n.set _FUN_8c2602f4, _FUN_8c2602f4_def\n");
