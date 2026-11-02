#include "../decls.h"
undefined4 FUN_8c0b6e6c_def(undefined *ar4,undefined *ar5,undefined *ar6,undefined *ar7)

{
  int iVar1;
  undefined *ar6_00;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined1 *ar6_01;
  undefined *ar7_00;
  undefined4 ar7_01;
  undefined4 uVar3;
  undefined *in_stack_00000000;
  int in_stack_00000004;
  undefined4 in_stack_ffffff64;
  undefined auStack_48 [20];
  undefined1 auStack_34 [24];
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  iVar1 = get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7);
  uVar3 = 1;
  FUN_8c0162f8(auStack_34,ar5_00,ar6_00,ar7_00);
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar7_00 = &DAT_8c13c025;
      ar6_00 = (undefined *)0x0;
      uVar2 = 0xb;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,0xb,0,&DAT_8c13c025);
      uVar2 = FUN_8c01f520(0x8c3dd7dc,uVar2,ar6_00,ar7_00);
      if (in_stack_00000004 == 1) {
        iVar1 = FUN_8c0b6e04(ar4,s_SM2000US__VM_8c13c040,ar6_00,ar7_00);
        if (iVar1 == 0) {
          ar6_00 = auStack_48;
          iVar1 = FUN_8c01bc2c(uVar2,s_SM2000US__VM_8c13c040,ar6_00,ar7_00);
          if (iVar1 == 1) {
            iVar1 = FUN_8c01b0a8(uVar2,ar4,ar7,in_stack_00000000);
            ar6_00 = ar7;
            ar7_00 = in_stack_00000000;
            if (iVar1 == 1) {
              uVar3 = 0;
            }
            break;
          }
        }
        iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_USR_8c13c026,ar6_00,ar7_00);
        if ((iVar1 == 0) &&
           (iVar1 = FUN_8c01bba0(uVar2,s_SM2000US_USR_8c13c026,ar6_00,ar7_00), iVar1 == 1)) {
          iVar1 = FUN_8c01ae98(uVar2,ar4,ar5,ar6);
          ar6_00 = ar5;
          ar7_00 = ar6;
          if (iVar1 == 1) {
            uVar3 = 0;
            ar6_00 = ar5;
            ar7_00 = ar6;
          }
        }
        else {
          iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_INC_8c13c033,ar6_00,ar7_00);
          if ((iVar1 == 0) &&
             (iVar1 = FUN_8c01bc2c(uVar2,s_SM2000US__VM_8c13c040,auStack_48,ar7_00), iVar1 == 1)) {
            iVar1 = FUN_8c01b47c(uVar2,s_SM2000US__VM_8c13c040,ar5,ar6);
            ar6_00 = ar5;
            ar7_00 = ar6;
            if (iVar1 == 1) {
              uVar3 = 0;
              ar6_00 = ar5;
              ar7_00 = ar6;
            }
          }
          else {
            ar7_01 = 4;
            ar6_01 = &DAT_8c4365bc;
            FUN_8c016318(auStack_34,&DAT_8c43659c,&DAT_8c4365bc,4,in_stack_ffffff64);
            uVar2 = 0x60;
            FUN_8c015198(auStack_34,0x60,ar6_01,ar7_01,in_stack_ffffff64);
            FUN_8c016340(auStack_34,uVar2,ar6_01,ar7_01);
            ar6_00 = (undefined *)0x0;
            s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,3,0,ar4);
            ar7_00 = ar4;
          }
        }
      }
      else {
        iVar1 = FUN_8c0b6e04(ar4,s_SM2000US__VM_8c13c040,ar6_00,ar7_00);
        if (iVar1 == 0) {
          iVar1 = FUN_8c01b0a8(uVar2,ar4,ar7,in_stack_00000000);
          ar6_00 = ar7;
          ar7_00 = in_stack_00000000;
          if (iVar1 == 1) {
            uVar3 = 0;
          }
        }
        else {
          iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_USR_8c13c026,ar6_00,ar7_00);
          if (iVar1 == 0) {
            iVar1 = FUN_8c01ae98(uVar2,ar4,ar5,ar6);
            ar6_00 = ar5;
            ar7_00 = ar6;
            if (iVar1 == 1) {
              uVar3 = 0;
              ar6_00 = ar5;
              ar7_00 = ar6;
            }
          }
          else {
            iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_INC_8c13c033,ar6_00,ar7_00);
            if ((iVar1 == 0) &&
               (iVar1 = FUN_8c01b47c(uVar2,s_SM2000US__VM_8c13c040,ar5,ar6), ar6_00 = ar5,
               ar7_00 = ar6, iVar1 == 1)) {
              uVar3 = 0;
              ar6_00 = ar5;
              ar7_00 = ar6;
            }
          }
        }
      }
      break;
    case 1:
      ar7_00 = &DAT_8c13c025;
      ar6_00 = (undefined *)0x0;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,1,0,&DAT_8c13c025);
      break;
    case 3:
      ar6_00 = (undefined *)get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7_00);
      ar7_00 = &DAT_8c13c025;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,2,ar6_00,&DAT_8c13c025);
      break;
    case 4:
      ar6_00 = (undefined *)get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7_00);
      ar7_00 = &DAT_8c13c025;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,4,ar6_00,&DAT_8c13c025);
    }
  }
  free_if_nonnull_wrap_0151a0(auStack_34,0xffffffff,ar6_00,ar7_00);
  return uVar3;
}

__asm__(".globl _FUN_8c0b6e6c\n.set _FUN_8c0b6e6c, _FUN_8c0b6e6c_def\n");
