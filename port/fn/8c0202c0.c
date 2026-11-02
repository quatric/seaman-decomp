#include "../decls.h"
undefined4 FUN_8c0202c0_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_stack_ffffffbc;
  undefined1 auStack_30 [36];
  
  ar5[2] = 0;
  *ar4 = 0;
  strcpy(auStack_30,ar5 + 4,ar6,ar7,in_stack_ffffffbc);
  iVar3 = 0;
  iVar1 = FUN_8c26201c(auStack_30,0,ar6,ar7);
  *ar4 = iVar1;
  if (*ar4 == 0) {
    FUN_8c02049c(ar4,ar5,ar6,ar7);
    uVar2 = 0;
  }
  else {
    iVar1 = s_E9040829_adxf_is_NULL_ADXF_G_262646(*ar4,iVar3,ar6,ar7);
    ar5[3] = iVar1;
    iVar1 = ar5[3] + 0x7ff >> 0xb;
    if (ar5[0x15] != 0) {
      iVar1 = ar5[0x15];
      ar5[3] = iVar1 << 0xb;
      ar6 = 0;
      iVar3 = ar5[0x14];
      FUN_8c262554(*ar4,iVar3,0,ar7);
    }
    if ((*ar5 < 0xb) && (-1 < *ar5)) {
                    
      ar5[2] = ar4[4];
    }
    else {
      iVar3 = malloc_thunk(ar5[3] + 0x800,iVar3,ar6,ar7);
      ar5[2] = iVar3;
      if (ar5[2] == 0) {
        FUN_8c02049c(ar4,ar5,ar6,ar7);
        return 0;
      }
    }
    iVar3 = ar5[2];
    iVar1 = s_E9040816_adxf_is_NULL_ADXF_R_26231a(*ar4,iVar1,iVar3,ar7);
    if (iVar1 < 0) {
      FUN_8c02049c(ar4,ar5,iVar3,ar7);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0202c0\n.set _FUN_8c0202c0, _FUN_8c0202c0_def\n");
