#include "../decls.h"
undefined4 FUN_8c261ae2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  undefined4 uVar2;
  undefined4 a5;
  int iVar3;
  
  iVar3 = 0;
  do {
    a5 = ar5;
    uVar2 = ar6;
    ar5 = a5;
    a4 = s_E9040816_adxf_is_NULL_ADXF_R_26231a(ar4,a5,ar6,ar7);
    if (0 < a4) break;
    FUN_8c1f39f0(a4,a5,uVar2,ar7);
    FUN_8c26371e(a4,a5,uVar2,ar7);
    FUN_8c262524(a4,a5,uVar2,ar7);
    FUN_8c261aa8(a4,a5,uVar2,ar7,ar5);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10000);
  if (iVar3 == 10000) {
    return 0;
  }
  iVar3 = 0;
  do {
    FUN_8c1f39f0(a4,a5,uVar2,ar7);
    FUN_8c26371e(a4,a5,uVar2,ar7);
    FUN_8c262524(a4,a5,uVar2,ar7);
    a4 = ar4;
    iVar1 = s_E9040832_adxf_is_NULL_ADXF_G_2626b4(ar4,a5,uVar2,ar7);
    if (iVar1 == 3) break;
    FUN_8c261aa8(a4,a5,uVar2,ar7,ar5);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10000);
  uVar2 = s_E9040831_adxf_is_NULL_ADXF_G_262696(ar4,a5,uVar2,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c261ae2\n.set _FUN_8c261ae2, _FUN_8c261ae2_def\n");
