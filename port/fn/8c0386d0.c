#include "../decls.h"
undefined4 CAnimal_m2_0386d0_def(int ar4,uint ar5,int *ar6,int *ar7)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined2 uVar8;
  undefined4 in_stack_ffffffb8;
  
  cVar1 = *(char *)(ar4 + 0x524);
  if (cVar1 == -1) {
    piVar6 = ar6;
    piVar7 = ar7;
    uVar5 = FUN_8c028ee4(ar5,ar5,ar6,ar7);
    uVar5 = uVar5 & 0xffff;
    FUN_8c028edc(ar4 + 0x21c,uVar5,piVar6,piVar7,in_stack_ffffffb8);
    uVar5 = FUN_8c02602c(ar5,uVar5,piVar6,piVar7);
    uVar5 = uVar5 & 0xffff;
    FUN_8c028ed4(ar4 + 0x21c,uVar5,piVar6,piVar7,in_stack_ffffffb8);
    if (*(int *)(ar4 + 0x330) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10c))
                (*(int *)(ar4 + 0x330),ar5,piVar6,piVar7);
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))
                (*(int *)(ar4 + 0x330),1,piVar6,piVar7);
      uVar5 = ar5;
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10))(*(int *)(ar4 + 0x330),ar5,ar6,ar7);
      FUN_8c036988(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,ar7);
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x144))
                (*(int *)(ar4 + 0x330),uVar5,ar6,ar7);
      FUN_8c038a10(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,ar7);
      piVar6 = ar6;
      piVar7 = ar7;
    }
    uVar2 = FUN_8c02602c(ar5,uVar5,piVar6,piVar7);
    ar5 = uVar5;
    ar6 = piVar6;
    ar7 = piVar7;
    if (((ushort)uVar2 < 5) &&
       (iVar4 = get_field_18_02d1a0(ar4 + 0x21c,uVar5,piVar6,piVar7), ar5 = uVar5, ar6 = piVar6,
       ar7 = piVar7, -1 < iVar4)) {
      *(undefined1 *)(ar4 + 0x524) = 0;
    }
  }
  else if (cVar1 == '\0') {
    uVar5 = ar5;
    piVar6 = ar6;
    piVar7 = ar7;
    uVar3 = FUN_8c02602c(ar5,ar5,ar6,ar7);
    uVar8 = (undefined2)in_stack_ffffffb8;
    iVar4 = get_field_c_02d1b8(ar4 + 0x21c,uVar5,piVar6,piVar7);
    uVar3 = (uVar3 & 0xffff) - iVar4;
    if (*(int *)(ar4 + 0x330) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10c))
                (*(int *)(ar4 + 0x330),ar5,piVar6,piVar7);
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))
                (*(int *)(ar4 + 0x330),1,piVar6,piVar7);
      uVar5 = ar5;
      piVar7 = ar7;
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10))(*(int *)(ar4 + 0x330),ar5,ar6,ar7);
      FUN_8c036988(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,piVar7);
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x144))
                (*(int *)(ar4 + 0x330),uVar5,ar6,piVar7);
      FUN_8c038a10(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,piVar7);
      piVar6 = ar6;
    }
    iVar4 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,uVar5,piVar6,piVar7);
    if (iVar4 != 0) {
      uVar5 = uVar3;
      FUN_8c02c030(ar4 + 0x174,uVar3,ar7,piVar7);
      piVar6 = ar7;
    }
    iVar4 = FUN_8c02c518(ar4 + 0x174,uVar5,piVar6,piVar7);
    if (iVar4 == -1) {
      ar5 = 0x3c;
      iVar4 = libgcc_divide_helper_0101e4(uVar3,0x3c,piVar6,piVar7);
      ar6 = piVar6;
      ar7 = piVar7;
      if (3 < iVar4) {
        *(undefined1 *)(ar4 + 0x524) = 1;
      }
    }
    else {
      uVar5 = FUN_8c028ee4(ar5,uVar5,piVar6,piVar7);
      uVar2 = CONCAT22((short)uVar5,uVar8);
      uVar5 = uVar5 & 0xffff;
      FUN_8c028edc(ar4 + 0x21c,uVar5,piVar6,piVar7,uVar2);
      uVar8 = (undefined2)((uint)uVar2 >> 0x10);
      uVar5 = FUN_8c02602c(ar5,uVar5,piVar6,piVar7);
      ar5 = uVar5 & 0xffff;
      FUN_8c028ed4(ar4 + 0x21c,ar5,piVar6,piVar7,CONCAT22(uVar8,(short)uVar5));
      ar6 = piVar6;
      ar7 = piVar7;
    }
  }
  else if (cVar1 == '\x01') {
    piVar6 = ar7;
    (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))(*(int *)(ar4 + 0x330),0,ar6,ar7);
    (**(code **)(*ar7 + 0x4c))(ar7,*(undefined4 *)(ar4 + 0x330),ar6,piVar6);
    *(undefined4 *)(ar4 + 0x330) = 0;
    ar6 = (int *)0x1b;
    uVar5 = 0x1a;
    FUN_8c0b9ed4(ar5,0x1a,0x1b,piVar6);
    FUN_8c0f4d84(ar4,uVar5,ar6,piVar6);
    ar5 = uVar5;
    ar7 = piVar6;
  }
  (**(code **)(*(int *)(ar4 + 8) + 0xf8))(ar4,ar5,ar6,ar7);
  FUN_8c0f79b8(ar4 + 0xa0,ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _CAnimal_m2_0386d0\n.set _CAnimal_m2_0386d0, _CAnimal_m2_0386d0_def\n");
