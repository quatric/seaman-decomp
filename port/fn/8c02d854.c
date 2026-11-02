#include "../decls.h"
uint FUN_8c02d854_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint ar4_00;
  undefined4 uVar4;
  
  cVar1 = (char)ar6;
  uVar3 = 0;
  if (*(int *)(ar4 + 0x14) != 0) {
    uVar4 = *(undefined4 *)(ar4 + 0x14);
    ar4_00 = ar5;
    iVar2 = libgcc_divide_helper_0103d0(ar5,uVar4,ar6,ar7);
    if ((iVar2 == 0) && (*(int *)(ar4 + 4) < *(int *)(ar4 + 0xc))) {
      *(int *)(ar4 + 4) = *(int *)(ar4 + 4) + 1;
    }
    uVar3 = *(uint *)(ar4 + 8);
    if (((*(uint *)(ar4 + 8) == 1) && (uVar3 = (int)cVar1, (int)cVar1 == 0xffffffff)) &&
       (uVar3 = 0x258, 0x258 < ar5)) {
      uVar4 = rand(ar4_00,uVar4,ar6,ar7);
      uVar3 = libgcc_divide_helper_01031c(uVar4,100,ar6,ar7);
      if (uVar3 == 1) {
        uVar3 = (*(code *)(&libgcc_divide_helper_0101e4))
                          (*(undefined4 *)(ar4 + 0x10),10,ar6,ar7);
        *(uint *)(ar4 + 8) = uVar3 * 6;
      }
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c02d854\n.set _FUN_8c02d854, _FUN_8c02d854_def\n");
