#include "../decls.h"
undefined4 FUN_8c262e10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int a7;
  undefined4 uVar3;
  int *a4;
  
  uVar3 = *(undefined4 *)(ar4 + 4);
  a4 = *(int **)(ar4 + 8);
  if ((*(char *)(ar4 + 3) == '\x01') &&
     (iVar1 = (**(code **)(*a4 + 0x24))(a4,1,ar6,ar7), iVar1 == 0)) {
    *(undefined1 *)(ar4 + 1) = 3;
    return 3;
  }
  ar5_00 = 1;
  a7 = ar4 + 0x14;
  ar6_00 = 0x7fffffff;
  (**(code **)(*a4 + 0x18))(a4,1,0x7fffffff,a7);
  iVar1 = FUN_8c25fec0(uVar3,ar5_00,ar6_00,a7);
  if ((((iVar1 == 0) && (1 < *(int *)(ar4 + 0x18))) &&
      (((int)**(short **)(ar4 + 0x14) >> 8 & 0xffU |
       (int)**(short **)(ar4 + 0x14) << 8 & 0xff00 & 0xffff) == 0x8001)) ||
     (iVar1 = FUN_8c263186(ar4,ar5_00,ar6_00,a7), iVar1 <= *(int *)(ar4 + 0x34))) {
    *(undefined1 *)(ar4 + 1) = 3;
  }
  else {
    iVar1 = FUN_8c26316e(ar4,ar5_00,ar6_00,a7);
    uVar2 = (**(code **)(**(int **)(ar4 + 0xc) + 0x24))(*(int **)(ar4 + 0xc),0,ar6_00,a7);
    if (iVar1 <= (int)(uVar2 >> 1)) {
      FUN_8c25ff3c(uVar3,*(undefined4 *)(ar4 + 0x14),*(undefined4 *)(ar4 + 0x18),a7);
      uVar3 = FUN_8c25ff8e(uVar3);
      return uVar3;
    }
  }
                    
                    
  uVar3 = (**(code **)(*a4 + 0x1c))(a4,1,ar4 + 0x14);
  return uVar3;
}

__asm__(".globl _FUN_8c262e10\n.set _FUN_8c262e10, _FUN_8c262e10_def\n");
