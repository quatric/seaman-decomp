#include "../decls.h"
undefined4 Class_12b0c4_m2_0abc38_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_4c [32];
  undefined1 auStack_2c [20];
  
  piVar8 = ar5;
  piVar7 = ar6;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  puVar6 = auStack_4c;
  iVar3 = 0x10;
  puVar5 = (&DATA_8c13b3b4);
  do {
    puVar4 = puVar5 + 1;
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar6[1] = *puVar4;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((&DATA_8c13b2ec) + 0x9c) = *(undefined4 *)(0xa0 + ar4);
  *(undefined4 *)((&DATA_8c13b2ec) + 0xa0) = *(undefined4 *)(0xa4 + ar4);
  *(undefined4 *)((&DATA_8c13b2ec) + 0xa4) = *(undefined4 *)(0xa8 + ar4);
  get_field_18_02d1a0(ar6[1] + 0xa8,piVar8,piVar7,ar7);
  get_field_24_026024(ar5,piVar8,piVar7,ar7);
  (**(code **)(0x1a8 + *ar5))(ar5,piVar8,piVar7,ar7);
  iVar3 = get_field_18_02d1a0(ar6[1] + 0xa8,piVar8,piVar7,ar7);
  if (((0 < iVar3) &&
      (iVar3 = get_field_24_026024(ar5,piVar8,piVar7,ar7), iVar3 == 1)) &&
     (iVar3 = (**(code **)(0x1a8 + *ar5))(ar5,piVar8,piVar7,ar7), iVar3 == 0)) {
    (**(code **)(0xbc + *ar5))(ar5,piVar8,piVar7,ar7);
    get_field_18_02d1a0(ar6[1] + 0xa8,piVar8,piVar7,ar7);
  }
  piVar8 = ar5;
  piVar7 = ar6;
  FUN_8c0abfb0(ar4,ar5,ar6,ar7);
  iVar3 = (**(code **)(0xb8 + *(int *)(*ar6 + 8)))(*ar6,piVar8,piVar7,ar7);
  if (iVar3 == 1) {
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                (*(int *)(ar4 + 0x6c),piVar8,piVar7,ar7);
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
    iVar3 = get_field_6c_02f46c(*ar6,piVar8,piVar7,ar7);
    if ((iVar3 == 0) &&
       (iVar3 = get_field_70_05f490(*ar6,piVar8,piVar7,ar7), iVar3 == 0)) {
      FUN_8c0f4d84(*ar6,piVar8,piVar7,ar7);
    }
  }
  piVar8 = ar6;
  FUN_8c02f20c(ar4,ar6,piVar7,ar7);
  uVar1 = get_field_4_05eed8(ar4,piVar8,piVar7,ar7);
  piVar8 = ar6;
  FUN_8c0abe84(ar4,ar5,ar6,uVar1);
  FUN_8c0ac19c(ar4,ar5,piVar8,uVar1);
  FUN_8c05ee90(ar6[2],ar5,piVar8,uVar1);
  iVar3 = get_field_124_027930(ar6[2],ar5,piVar8,uVar1);
  iVar2 = get_field_40_05eea0(ar4,ar5,piVar8,uVar1);
  if (iVar3 != iVar2) {
    ar5_00 = get_field_40_05eea0(ar4,ar5,piVar8,uVar1);
    piVar8 = (int *)0x1;
    FUN_8c031b08(ar6[2],ar5_00,1,uVar1);
  }
  uVar1 = Vec3_dtor(auStack_2c,0xffffffff,piVar8,uVar1);
  return uVar1;
}

__asm__(".globl _Class_12b0c4_m2_0abc38\n.set _Class_12b0c4_m2_0abc38, _Class_12b0c4_m2_0abc38_def\n");
