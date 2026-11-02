#include "../decls.h"
undefined4 FUN_8c10d0da_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar6_00;
  uint ar6_01;
  int iVar2;
  
  ar6_01 = ar5 * 2;
  if (*(ushort *)(*(int *)(ar4 + 100) + 0xc) == ar6_01) {
LAB_8c10d11a:
    ar6_00 = ar5 * 3;
    if (*(ushort *)(**(int **)(ar4 + 0x60) + 0xc) != ar6_00) {
      ar7 = 1;
      uVar1 = 1;
      iVar2 = FUN_8c111adc(**(undefined4 **)(ar4 + 0x60),1,ar6_00,1);
      if (iVar2 == 0) goto LAB_8c10d152;
      iVar2 = FUN_8c111dfe(**(undefined4 **)(ar4 + 0x60),uVar1,ar6_00,ar7);
      *(int *)(ar4 + 0x28) = iVar2;
      *(uint *)(ar4 + 0x2c) = ar6_01 + iVar2;
    }
    (*(code *)(&FUN_8c111fbe))
              (**(undefined4 **)(ar4 + 0x60),(*(undefined4 **)(ar4 + 0x60))[1],ar6_00,ar7);
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(ar4 + 100);
    ar7 = *(undefined4 *)(iVar2 + 0x18);
    iVar2 = FUN_8c111adc(iVar2,*(undefined4 *)(iVar2 + 8),ar6_01,ar7);
    if (iVar2 != 0) goto LAB_8c10d11a;
LAB_8c10d152:
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10d0da\n.set _FUN_8c10d0da, _FUN_8c10d0da_def\n");
