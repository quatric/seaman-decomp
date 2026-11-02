#include "../decls.h"
int Class_12a7a8_m1_098d14_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *ar6_00;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar6 = 0;
  DAT_8c13a920 = *(undefined4 *)(ar4 + 0x9c);
  DAT_8c13a924 = *(undefined4 *)(ar4 + 0xa0);
  DAT_8c13a928 = *(undefined4 *)(ar4 + 0xa4);
  piVar5 = ar5;
  ar6_00 = ar6;
  FUN_8c099858(ar4,ar5,ar6,ar7);
  iVar1 = get_field_24_026024(ar5,piVar5,ar6_00,ar7);
  if (iVar1 == 0) {
    iVar4 = ar6[1];
    iVar1 = get_field_13c_028d9c(iVar4,piVar5,ar6_00,ar7);
    if (iVar1 == 0x13) {
      uVar2 = rand(iVar4,piVar5,ar6_00,ar7);
      piVar5 = (int *)0x64;
      iVar1 = libgcc_divide_helper_01031c(uVar2,100,ar6_00,ar7);
      if ((iVar1 < 1) && (*(int *)(ar4 + 4) != 0xb)) {
        *(undefined4 *)(ar4 + 4) = 0xb;
        *(undefined4 *)(ar4 + 8) = 0x55;
        *(undefined4 *)(ar4 + 0xc) = 0;
        FUN_8c099b0c(ar4,ar5,ar6_00,ar7);
        piVar5 = (int *)0x4a6;
        FUN_8c02f298(ar4,0x4a6,ar6_00,ar7);
      }
    }
  }
  iVar1 = get_field_24_026024(ar5,piVar5,ar6_00,ar7);
  if (iVar1 == 1) {
    iVar4 = ar6[1];
    iVar1 = get_field_13c_028d9c(iVar4,piVar5,ar6_00,ar7);
    if (iVar1 == 0x13) {
      uVar2 = rand(iVar4,piVar5,ar6_00,ar7);
      iVar1 = libgcc_divide_helper_01031c(uVar2,10000,ar6_00,ar7);
      if (iVar1 < 1) {
        piVar5 = (int *)0x0;
        while( true ) {
          uVar2 = 10;
          iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,10,ar6_00,ar7);
          if (iVar1 <= (int)piVar5) break;
          uVar2 = 10;
          ar6_00 = piVar5;
          iVar1 = (**(code **)(*ar5 + 0x100))(ar5,10,piVar5,ar7);
          iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,uVar2,ar6_00,ar7);
          if (iVar1 == 0x13) {
            uVar2 = 10;
            ar6_00 = piVar5;
            iVar1 = (**(code **)(*ar5 + 0x100))(ar5,10,piVar5,ar7);
            iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xb4))(iVar1,uVar2,ar6_00,ar7);
            if (iVar1 == 1) {
              iVar6 = iVar6 + 1;
              uVar2 = 10;
              ar6_00 = piVar5;
              iVar1 = (**(code **)(*ar5 + 0x100))(ar5,10,piVar5,ar7);
              iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x180))(iVar1,uVar2,ar6_00,ar7);
              if (iVar1 == 0xb) {
                iVar7 = iVar7 + 1;
              }
            }
          }
          piVar5 = (int *)((int)piVar5 + 1);
        }
        if ((((iVar7 == 0) && (3 < iVar6)) && (*(int *)(ar4 + 4) == 0)) &&
           (iVar1 = (**(code **)(*ar5 + 0x1a8))(ar5,uVar2,ar6_00,ar7), iVar1 == 1)) {
          FUN_8c0996e4(ar6[3],*ar6,ar6_00,ar7);
          *(undefined4 *)(ar4 + 4) = 0xd;
          *(undefined4 *)(ar4 + 8) = 0x5f;
          *(undefined4 *)(ar4 + 0xc) = 0;
          *(undefined4 *)(ar4 + 0x40) = 0xb;
          *(undefined4 *)(ar4 + 0x9c) = 0xb;
          DAT_8c13a920 = 0xb;
          *(undefined4 *)(ar4 + 0xa0) = 0xc;
          DAT_8c13a924 = 0xc;
          *(undefined4 *)(ar4 + 0xa4) = 0xc;
          DAT_8c13a928 = 0xc;
        }
      }
    }
  }
  piVar5 = ar6;
  FUN_8c02f20c(ar4,ar6,ar6_00,ar7);
  uVar2 = get_field_4_05eed8(ar4,piVar5,ar6_00,ar7);
  piVar5 = ar6;
  FUN_8c099714(ar4,ar5,ar6,uVar2);
  uVar3 = FUN_8c02bef8(ar6[1],ar5,piVar5,uVar2);
  if ((((short)uVar3 == 1) && (uVar3 = FUN_8c035bf8(ar6[3],ar5,piVar5,uVar2), (char)uVar3 == '\0'))
     && (iVar1 = get_field_13c_028d9c(ar6[1],ar5,piVar5,uVar2), iVar1 == 0x11)) {
    *(undefined1 *)(ar4 + 0x98) = 3;
  }
  iVar1 = (**(code **)(*(int *)(*ar6 + 8) + 0xb8))(*ar6,ar5,piVar5,uVar2);
  if ((iVar1 == 1) && (*(char *)(ar4 + 0x98) < '\t')) {
    *(undefined1 *)(ar4 + 0x98) = 8;
  }
  if ((*(char *)(ar4 + 0x98) < '\n') && (-1 < *(char *)(ar4 + 0x98))) {
                    
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 0xd;
    *(undefined4 *)(ar4 + 0x9c) = 1;
    *(undefined4 *)(ar4 + 0x40) = 1;
    DAT_8c13a920 = 1;
    *(undefined4 *)(ar4 + 0xa0) = 0xc;
    DAT_8c13a924 = 0xc;
    *(undefined4 *)(ar4 + 0xa4) = 0xc;
    DAT_8c13a928 = 0xc;
    piVar5 = (int *)0x1b;
    ar5 = (int *)0x26;
    FUN_8c0b9ed4(ar6[6],0x26,0x1b,uVar2);
  }
  FUN_8c099ab8(ar4,ar5,piVar5,uVar2);
  FUN_8c05ee90(ar6[2],ar5,piVar5,uVar2);
  iVar1 = get_field_124_027930(ar6[2],ar5,piVar5,uVar2);
  iVar6 = get_field_40_05eea0(ar4,ar5,piVar5,uVar2);
  if (iVar1 != iVar6) {
    uVar3 = get_field_40_05eea0(ar4,ar5,piVar5,uVar2);
    iVar6 = FUN_8c031b08(ar6[2],uVar3,1,uVar2);
  }
  return iVar6;
}

__asm__(".globl _Class_12a7a8_m1_098d14\n.set _Class_12a7a8_m1_098d14, _Class_12a7a8_m1_098d14_def\n");
