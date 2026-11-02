#include "../decls.h"
undefined4
s_Failed_to_Read_CAnimal_LoadM_02839e_def
          (undefined4 ar4,char *ar5,undefined4 ar6,undefined4 *ar7,short *s0,undefined4 s4,
          undefined4 s8,undefined4 s12,int s16)

{
  undefined4 *ar7_00;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 auStack_24 [2];
  
  uVar1 = 0;
  iVar2 = 2;
  auStack_24[0] = 0;
  uVar3 = ar6;
  if (s16 == 0) {
    ar7_00 = auStack_24;
    iVar2 = FUN_8c020ba0(s8,ar5,ar6,ar7_00);
  }
  else {
    ar7_00 = ar7;
    if (s16 == 1) {
      if (*ar5 == '\0') {
        iVar2 = 1;
      }
      else {
        ar7_00 = auStack_24;
        iVar2 = FUN_8c020c98(s8,ar5,ar6,ar7_00);
      }
    }
  }
  if (iVar2 == 1) {
    if (s16 == 0) {
      FUN_8c015bb0(ar7,auStack_24[0],ar6,ar7_00,uVar3);
    }
    else if (s16 == 1) {
      FUN_8c015be4(ar7,auStack_24[0],ar6,ar7_00,uVar3);
    }
    *s0 = *s0 + 1;
    if (*s0 == (short)s4) {
      uVar1 = 1;
    }
  }
  else if (iVar2 == 0) {
    report_error_message(ar5,"Failed to Read ..:CAnimal::LoadMFile()",1,2);
  }
  return uVar1;
}

__asm__(".globl _s_Failed_to_Read_CAnimal_LoadM_02839e\n.set _s_Failed_to_Read_CAnimal_LoadM_02839e, _s_Failed_to_Read_CAnimal_LoadM_02839e_def\n");
