#include "../decls.h"
undefined4 Class_12ab2c_m2_09db4c_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  int iVar1;
  int *a7;
  float extraout_fr1;
  float fVar2;
  float extraout_fr1_00;
  char cVar3;
  byte bStack_10;
  
  cVar3 = '\0';
  a7 = ar7;
  CAnimal_m2_02573c(ar4,ar5,ar6,ar7);
  (**(code **)(*ar7 + 0x198))(ar7,ar5,ar6,a7);
  if (((bStack_10 & 3) >> 1) - ((int)((uint)bStack_10 << 0x1f) >> 0x1f) == 2) {
    if (0 < *(int *)(ar4 + 0xfd0)) {
      fVar2 = extraout_fr1;
      if (cVar3 == '\0') {
        fVar2 = *(float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
      }
      if (fVar2 != 0.0) {
        FUN_8c09edf0(ar4,ar5,ar6,a7);
      }
    }
  }
  else {
    iVar1 = get_field_124_027930(ar4 + 0xcc4,ar5,ar6,a7);
    if ((iVar1 == 2) || (iVar1 = get_field_124_027930(ar4 + 0xcc4,ar5,ar6,a7), iVar1 == 9)) {
      FUN_8c09ea78(ar4,ar5,ar6,a7);
    }
    else if (0 < *(int *)(ar4 + 0xfd0)) {
      fVar2 = extraout_fr1_00;
      if (cVar3 == '\0') {
        fVar2 = *(float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
      }
      if (fVar2 != 0.0) {
        FUN_8c09edf0(ar4,ar5,ar6,a7);
      }
    }
  }
  return 1;
}

__asm__(".globl _Class_12ab2c_m2_09db4c\n.set _Class_12ab2c_m2_09db4c, _Class_12ab2c_m2_09db4c_def\n");
