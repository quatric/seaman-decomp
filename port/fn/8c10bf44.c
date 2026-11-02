#include "../decls.h"
undefined4 asr_lib_load_model_def(undefined4 *ar4,int *ar5,undefined4 ar6,int *ar7)

{
  undefined *puVar1;
  int *a4;
  int iVar2;
  int *ar7_00;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar3 = 0;
  uStack_18 = ar4[1];
  uStack_14 = 0;
  ar7_00 = ar7;
  a4 = (int *)(*(code *)(uint)ar4[2])(0xc,&uStack_18,ar6,ar7);
  a4[2] = (int)ar4;
  puVar1 = (&FUN_8c11e2de);
  a4[1] = *ar5;
  iVar2 = (*(code *)puVar1)(*ar4,ar5,ar6,ar7_00);
  *a4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = FUN_8c11cd44(*ar4,0,ar6,ar7_00);
    (*(code *)(uint)ar4[3])(a4,&uStack_18,ar6,ar7_00);
  }
  *ar7 = (int)a4;
  return uVar3;
}

__asm__(".globl _asr_lib_load_model\n.set _asr_lib_load_model, _asr_lib_load_model_def\n");
