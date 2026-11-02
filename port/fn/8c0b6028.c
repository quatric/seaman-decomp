#include "../decls.h"
undefined4 Class_12b2e8_m2_0b6028_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 auStack_44 [32];
  undefined1 auStack_24 [20];
  
  uVar2 = ar5;
  iVar7 = ar6;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  puVar6 = auStack_44;
  puVar4 = &DAT_8c13bc14;
  iVar3 = 0x10;
  do {
    puVar5 = puVar4 + 1;
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 2;
    puVar6[1] = *puVar5;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),uVar2,iVar7,ar7);
  *(uint *)(ar4 + 0xa8) = uVar1 & 0xffff;
  iVar3 = ar6;
  FUN_8c0b6328(ar4,ar5,ar6,ar7);
  iVar7 = ar6;
  FUN_8c02f20c(ar4,ar6,iVar3,ar7);
  uVar2 = get_field_4_05eed8(ar4,iVar7,iVar3,ar7);
  iVar7 = ar6;
  FUN_8c0b61bc(ar4,ar5,ar6,uVar2);
  iVar3 = (int)*(char *)(ar4 + 0x98);
  if ((iVar3 < 8) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      *(undefined4 *)(ar4 + 0x40) = 8;
      DAT_8c13bbe8 = 8;
      break;
    case 4:
    case 6:
      *(undefined4 *)(ar4 + 0x40) = 3;
      DAT_8c13bbe8 = 3;
      break;
    case 5:
      *(undefined4 *)(ar4 + 0x40) = 7;
      DAT_8c13bbe8 = 7;
      break;
    case 7:
      *(undefined4 *)(ar4 + 0x40) = 2;
      DAT_8c13bbe8 = 2;
    }
  }
  FUN_8c0b65b0(ar4,ar5,iVar7,uVar2);
  FUN_8c05ee90(*(undefined4 *)(ar6 + 8),ar5,iVar7,uVar2);
  iVar3 = get_field_124_027930(*(undefined4 *)(ar6 + 8),ar5,iVar7,uVar2);
  if (*(int *)(ar4 + 0x40) != iVar3) {
    iVar7 = 1;
    FUN_8c031b08(*(undefined4 *)(ar6 + 8),*(undefined4 *)(ar4 + 0x40),1,uVar2);
  }
  uVar2 = Vec3_dtor(auStack_24,0xffffffff,iVar7,uVar2);
  return uVar2;
}

__asm__(".globl _Class_12b2e8_m2_0b6028\n.set _Class_12b2e8_m2_0b6028, _Class_12b2e8_m2_0b6028_def\n");
