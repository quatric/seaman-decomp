#include "../decls.h"
undefined4 s_E9040816_adxf_is_NULL_ADXF_R_26231a_def(int *ar4,int ar5,uint ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  uint ar4_00;
  int *ar4_01;
  undefined4 a5;
  int iVar3;
  int iVar4;
  int *a6;
  int ar7_00;
  
  a5 = 0;
  uVar2 = 4;
  piVar1 = ar4;
  ar7_00 = ar5;
  FUN_8c261a4c(4,0,ar4,ar5);
  if ((ar4 == (int *)0x0) || (ar5 < 0)) {
    FUN_8c25ece6(uVar2,a5,piVar1,ar7_00);
  }
  else if (ar6 == 0) {
    FUN_8c25ece6(uVar2,a5,piVar1,ar7_00);
  }
  else {
    if ((ar6 & 0x1f) == 0) {
      if (*(char *)((int)ar4 + 1) == '\x02') {
        return 0;
      }
      if (ar4[2] != 0) {
        FUN_8c25ece6(ar6,a5,piVar1,ar7_00);
        return 0xffffffff;
      }
      iVar3 = ar5 << 0xb;
      uVar2 = 0;
      ar4_00 = ar6;
      iVar4 = iVar3;
      piVar1 = (int *)FUN_8c26b564(ar6,iVar3,0,ar7_00);
      if (piVar1 == (int *)0x0) {
        return 0xfffffffe;
      }
      ar4[10] = ar6;
      ar4[0xb] = iVar4;
      if (_DAT_8c4b4220 == 1) {
        iVar3 = ar4[0xb];
        ar4_00 = ar4[10];
        FUN_8c261786(ar4_00,iVar3,uVar2,ar7_00,iVar4);
      }
      FUN_8c260ca0(ar4_00,iVar3,uVar2,ar7_00,iVar4);
      ar4_01 = ar4;
      iVar4 = ar5;
      a6 = piVar1;
      iVar3 = s_E9040811_adxf_is_NULL_adxf_r_26220e(ar4,ar5,piVar1,ar7_00);
      if (iVar3 < 1) {
        (**(code **)(*piVar1 + 0xc))(piVar1,iVar4,a6,ar7_00);
        ar4_01 = piVar1;
      }
      else {
        ar4[2] = (int)piVar1;
      }
      *(undefined1 *)((int)ar4 + 2) = 0;
      FUN_8c260cc8(ar4_01,iVar4,a6,ar7_00,iVar3);
      FUN_8c261a4c(4,1,ar4,ar5);
      return iVar3;
    }
    FUN_8c25ece6(ar6,a5,piVar1,ar7_00);
  }
  return 0xfffffffd;
}

__asm__(".globl _s_E9040816_adxf_is_NULL_ADXF_R_26231a\n.set _s_E9040816_adxf_is_NULL_ADXF_R_26231a, _s_E9040816_adxf_is_NULL_ADXF_R_26231a_def\n");
