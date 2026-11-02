#include "../decls.h"
undefined4 Class_12b0c4_m1_0ab7f4_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *ar6_00;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [20];
  
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  puVar4 = auStack_50;
  puVar2 = &DAT_8c13b394;
  iVar5 = 0x10;
  do {
    puVar3 = puVar2 + 1;
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 2;
    puVar4[1] = *puVar3;
    puVar4 = puVar4 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  DAT_8c13b388 = *(undefined4 *)(ar4 + 0xa0);
  DAT_8c13b38c = *(undefined4 *)(ar4 + 0xa4);
  DAT_8c13b390 = *(undefined4 *)(ar4 + 0xa8);
  piVar7 = ar5;
  ar6_00 = ar6;
  FUN_8c0abfb0(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c0abc30(ar6[3],piVar7,ar6_00,ar7);
  if (((char)uVar1 == '\x01') && (iVar5 = get_field_24_026024(ar5,piVar7,ar6_00,ar7), iVar5 == 1)) {
    iVar6 = ar6[3];
    iVar5 = get_field_48_0abc28(iVar6,piVar7,ar6_00,ar7);
    if (iVar5 != 0) {
      uVar1 = rand(iVar6,piVar7,ar6_00,ar7);
      piVar7 = (int *)0x12c;
      iVar5 = libgcc_divide_helper_01031c(uVar1,300,ar6_00,ar7);
      if (iVar5 < 1) {
        uVar1 = get_field_48_0abc28(ar6[3],piVar7,ar6_00,ar7);
        *(undefined4 *)(ar4 + 0x6c) = uVar1;
        if (*(int *)(ar4 + 0x6c) != 0) {
          *(undefined4 *)(ar4 + 4) = 6;
          *(undefined4 *)(ar4 + 0x40) = 3;
          *(undefined4 *)(ar4 + 8) = 0x55;
          *(undefined4 *)(ar4 + 0xc) = 0;
          uVar1 = 699;
          FUN_8c02f298(ar4,699,ar6_00,ar7);
          (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x74))
                    (*(int *)(ar4 + 0x6c),uVar1,ar6_00,ar7);
          piVar7 = (int *)0x0;
          FUN_8c0996e4(ar6[3],0,ar6_00,ar7);
        }
      }
    }
  }
  iVar5 = get_field_24_026024(ar5,piVar7,ar6_00,ar7);
  if (iVar5 == 0) {
    iVar5 = ar6[6];
    uVar1 = get_field_a0_035724(iVar5,piVar7,ar6_00,ar7);
    if ((byte)uVar1 < 2) {
      *(undefined1 *)(ar4 + 0x98) = 1;
    }
    else {
      uVar1 = rand(iVar5,piVar7,ar6_00,ar7);
      piVar7 = (int *)0x3e8;
      iVar5 = libgcc_divide_helper_01031c(uVar1,1000,ar6_00,ar7);
      if ((iVar5 < 1) && (*(int *)(ar4 + 4) != 0xb)) {
        *(undefined4 *)(ar4 + 4) = 0xb;
        *(undefined4 *)(ar4 + 8) = 0x5a;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x38) = 2;
        FUN_8c0ac1f0(ar4,ar5,ar6_00,ar7);
        piVar7 = (int *)0x4a6;
        FUN_8c02f298(ar4,0x4a6,ar6_00,ar7);
      }
    }
  }
  iVar5 = (**(code **)(*(int *)(*ar6 + 8) + 0xb8))(*ar6,piVar7,ar6_00,ar7);
  if (iVar5 == 1) {
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                (*(int *)(ar4 + 0x6c),piVar7,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
    iVar5 = get_field_6c_02f46c(*ar6,piVar7,ar6_00,ar7);
    if ((iVar5 == 0) && (iVar5 = get_field_70_05f490(*ar6,piVar7,ar6_00,ar7), iVar5 == 0)) {
      uVar1 = (**(code **)(*ar5 + 0x148))(ar5,piVar7,ar6_00,ar7);
      piVar7 = (int *)0x0;
      FUN_8c0abc1c(uVar1,0,ar6_00,ar7);
      FUN_8c0f4d84(*ar6,piVar7,ar6_00,ar7);
    }
  }
  get_field_124_027930(ar6[2],piVar7,ar6_00,ar7);
  get_field_40_05eea0(ar4,piVar7,ar6_00,ar7);
  piVar7 = ar6;
  FUN_8c02f20c(ar4,ar6,ar6_00,ar7);
  get_field_124_027930(ar6[2],piVar7,ar6_00,ar7);
  get_field_40_05eea0(ar4,piVar7,ar6_00,ar7);
  uVar1 = get_field_4_05eed8(ar4,piVar7,ar6_00,ar7);
  piVar7 = ar6;
  FUN_8c0abe84(ar4,ar5,ar6,uVar1);
  get_field_124_027930(ar6[2],ar5,piVar7,uVar1);
  get_field_40_05eea0(ar4,ar5,piVar7,uVar1);
  if ((*(char *)(ar4 + 0x98) == '\x01') && ((*(int *)(ar4 + 0x40) != 4 || (*(int *)(ar4 + 4) != 1)))
     ) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 1;
    *(undefined4 *)(ar4 + 8) = 99;
    *(undefined4 *)(ar4 + 0x40) = 4;
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                (*(int *)(ar4 + 0x6c),ar5,piVar7,uVar1);
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
  }
  FUN_8c0ac19c(ar4,ar5,piVar7,uVar1);
  FUN_8c05ee90(ar6[2],ar5,piVar7,uVar1);
  iVar5 = get_field_124_027930(ar6[2],ar5,piVar7,uVar1);
  iVar6 = get_field_40_05eea0(ar4,ar5,piVar7,uVar1);
  if (iVar5 != iVar6) {
    ar5_00 = get_field_40_05eea0(ar4,ar5,piVar7,uVar1);
    piVar7 = (int *)0x1;
    FUN_8c031b08(ar6[2],ar5_00,1,uVar1);
  }
  uVar1 = Vec3_dtor(auStack_30,0xffffffff,piVar7,uVar1);
  return uVar1;
}

__asm__(".globl _Class_12b0c4_m1_0ab7f4\n.set _Class_12b0c4_m1_0ab7f4, _Class_12b0c4_m1_0ab7f4_def\n");
