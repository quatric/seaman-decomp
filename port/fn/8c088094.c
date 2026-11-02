#include "../decls.h"
undefined4 CAnimal_m2_088094_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  cVar1 = *(char *)(0x524 + ar4);
  uVar4 = ar5;
  uVar5 = ar6;
  piVar6 = ar7;
  if (cVar1 == -1) {
    if (*(int *)(0x330 + ar4) != 0) {
      (**(code **)(0x10c + *(int *)(*(int *)(0x330 + ar4) + 8)))
                (*(int *)(0x330 + ar4),ar5,ar6,ar7);
    }
    *(undefined1 *)(0x524 + ar4) = 0;
  }
  else if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar5 = 0x1b;
      FUN_8c0b9ed4(ar5,0x16,0x1b,ar7);
      (**(code **)(0x110 + *(int *)(*(int *)(0x330 + ar4) + 8)))
                (*(int *)(0x330 + ar4),0,uVar5,piVar6);
      uVar4 = *(undefined4 *)(0x330 + ar4);
      (**(code **)(*ar7 + 0x4c))(ar7,uVar4,uVar5,piVar6);
      *(undefined4 *)(0x330 + ar4) = 0;
      FUN_8c0f4d84(ar4,uVar4,uVar5,piVar6);
      *(undefined1 *)(0x524 + ar4) = 2;
    }
    goto LAB_8c0881ac;
  }
  uVar2 = FUN_8c02602c(ar5,uVar4,uVar5,piVar6);
  iVar3 = get_field_c_02d1b8(ar4 + 0x21c,uVar4,uVar5,piVar6);
  uVar4 = 0x3c;
  iVar3 = (*(code *)(&libgcc_divide_helper_0101e4))
                    ((uVar2 & 0xffff) - iVar3,0x3c,uVar5,piVar6);
  if (9 < iVar3) {
    *(undefined1 *)(0x524 + ar4) = 1;
  }
  if (*(int *)(0x330 + ar4) != 0) {
    (**(code **)(0x110 + *(int *)(*(int *)(0x330 + ar4) + 8)))
              (*(int *)(0x330 + ar4),1,uVar5,piVar6);
    (**(code **)(*(int *)(*(int *)(0x330 + ar4) + 8) + 0x10))
              (*(int *)(0x330 + ar4),ar5,ar6,ar7);
    FUN_8c036988(*(undefined4 *)(0x330 + ar4),ar5,ar6,ar7);
    uVar4 = ar5;
    uVar5 = ar6;
    piVar6 = ar7;
  }
LAB_8c0881ac:
  (**(code **)(0xf8 + *(int *)(ar4 + 8)))(ar4,uVar4,uVar5,piVar6);
  FUN_8c0f79b8(ar4 + 0xa0,uVar4,uVar5,piVar6);
  return 1;
}

__asm__(".globl _CAnimal_m2_088094\n.set _CAnimal_m2_088094, _CAnimal_m2_088094_def\n");
