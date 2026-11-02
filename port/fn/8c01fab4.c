#include "../decls.h"
int FUN_8c01fab4_def(int *ar4,int *ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = ar4[4];
  iVar1 = ar4[5];
  if (iVar1 == 1) {
    ar4[5] = 2;
    ar4[6] = ar4[6] - 0x800;
    iVar2 = ar4[4];
    iVar1 = s_E9040816_adxf_is_NULL_ADXF_R_26231a(*ar4,1,iVar2,ar7);
    if (iVar1 < 0) {
      FUN_8c02049c(ar4,ar4[1],iVar2,ar7);
      iVar1 = 5;
      ar4[5] = 5;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = s_E9040832_adxf_is_NULL_ADXF_G_2626b4(*ar4,ar5,ar6,ar7);
    if (iVar1 == 3) {
      ar4[5] = 4;
      iVar1 = 0x800;
      if (0x800 < *(int *)(iVar2 + 0x20)) {
        ar4[5] = 3;
        uVar3 = *(int *)(iVar2 + 0x20) + 0xfffff800;
        ar4[6] = ar4[6] - uVar3;
        if (0x4b800 < uVar3) {
          FUN_8c02049c(ar4,ar4[1],ar6,ar7);
          ar4[5] = 5;
        }
        iVar2 = ar4[4] + 0x800;
        iVar1 = (*(code *)(&s_E9040816_adxf_is_NULL_ADXF_R_26231a))
                          (*ar4,uVar3 >> 0xb,iVar2,ar7);
        if (iVar1 < 0) {
          FUN_8c02049c(ar4,ar4[1],iVar2,ar7);
          iVar1 = 5;
          ar4[5] = 5;
        }
      }
    }
    else if (iVar1 == 4) {
      FUN_8c02049c(ar4,ar4[1],ar6,ar7);
      ar4[5] = 5;
      iVar1 = 5;
    }
  }
  else if (iVar1 == 3) {
    iVar1 = s_E9040832_adxf_is_NULL_ADXF_G_2626b4(*ar4,ar5,ar6,ar7);
    if (iVar1 == 3) {
      ar4[5] = 4;
      iVar1 = 4;
    }
    else if (iVar1 == 4) {
      FUN_8c02049c(ar4,ar4[1],ar6,ar7);
      ar4[5] = 5;
      iVar1 = 5;
    }
  }
  else {
    if (iVar1 == 4) {
      FUN_8c01fc78(ar4,ar4[1],ar6,ar7);
      if (0 < ar4[6]) {
        ar4[5] = 1;
        return 1;
      }
      ar7 = ar4[1] + 0x10;
      FUN_8c020600(ar4,*(undefined4 *)(uint)ar4[1],ar4 + 8,ar7);
      ar6 = ar4[1];
      ar5 = ar4 + 10;
      FUN_8c0205e8(ar4,ar5,ar6,ar7);
      if (*ar4 != 0) {
        FUN_8c262168(*ar4,ar5,ar6,ar7);
      }
      *ar4 = 0;
    }
    ar4[5] = 0;
    ar4[6] = 0;
    iVar1 = FUN_8c02009c(ar4,ar5,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01fab4\n.set _FUN_8c01fab4, _FUN_8c01fab4_def\n");
