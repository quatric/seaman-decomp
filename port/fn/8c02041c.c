#include "../decls.h"
uint FUN_8c02041c_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(ar5 + 8) = 0;
  ar4[5] = 0;
  iVar2 = ar5;
  for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
    iVar2 = 0;
    iVar1 = FUN_8c26201c(ar5 + 0x10,0,ar6,ar7);
    *ar4 = iVar1;
    if (*ar4 != 0) break;
  }
  iVar3 = *ar4;
  if (iVar3 != 0) {
    ar4[5] = 1;
    iVar2 = s_E9040829_adxf_is_NULL_ADXF_G_262646(*ar4,iVar2,ar6,ar7);
    ar4[6] = iVar2;
  }
  else {
    FUN_8c02049c(ar4,ar5,ar6,ar7);
  }
  return (uint)(iVar3 != 0);
}

__asm__(".globl _FUN_8c02041c\n.set _FUN_8c02041c, _FUN_8c02041c_def\n");
