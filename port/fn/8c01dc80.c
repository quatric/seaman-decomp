#include "../decls.h"
undefined4
FUN_8c01dc80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *ar6_00;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  undefined4 ar5_00;
  
  uVar2 = ar6;
  ar7_00 = ar7;
  ar5_00 = ar5;
  FUN_8c01d984(ar4,ar5,ar6,ar7);
  _DAT_8c2791bc = 0;
  if (_DAT_8c279264 != 0) {
    FUN_8c01d008(ar4,ar5,uVar2,ar7_00);
    asr_init_from_model(ar4,ar5,uVar2,ar7_00);
  }
  ar7_01 = &DAT_8c279264;
  uVar2 = 1;
  FUN_8c10be9c(_DAT_8c279258,ar7,1,&DAT_8c279264);
  *(undefined4 *)(ar4 + 0x5b38) = ar7;
  *(undefined4 *)(ar4 + 0x5b3c) = s0;
  *(undefined4 *)(ar4 + 0x5b40) = s4;
  strcpy(ar4 + 0x5b44,ar5_00,uVar2,ar7_01,ar5_00);
  strcpy(ar4 + 0x5b65,ar6,uVar2,ar7_01,ar5_00);
  iVar1 = FUN_8c01ddfc(ar4,ar6,uVar2,ar7_01);
  if (iVar1 == 1) {
    ar6_00 = &DAT_8c279268;
    iVar1 = FUN_8c10c3de(_DAT_8c279258,*(undefined4 *)(ar4 + 0x5b40),&DAT_8c279268,ar7_01);
    if ((iVar1 == 0) && (_DAT_8c279288 != (undefined1 *)0x0)) {
      FUN_8c122e7c(_DAT_8c279264,_DAT_8c279268,&DAT_8c12fbae,_DAT_8c279290,_DAT_8c279294);
      ar6_00 = &DAT_8c12fbae;
      ar7_01 = _DAT_8c279288;
      FUN_8c122664(_DAT_8c279264,_DAT_8c279268,&DAT_8c12fbae,_DAT_8c279288,_DAT_8c27928c,
                   &DAT_8c279290,&DAT_8c279294);
    }
    iVar1 = FUN_8c10b6cc(_DAT_8c27925c,_DAT_8c279264,ar6_00,ar7_01);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01dc80\n.set _FUN_8c01dc80, _FUN_8c01dc80_def\n");
