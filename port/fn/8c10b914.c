#include "../decls.h"
undefined4 asr_lib_create_engine_def(int *ar4,int ar5,int *ar6,undefined4 ar7)

{
  int *ar5_00;
  int iVar1;
  int *ar6_00;
  undefined4 uVar2;
  int aiStack_3c [2];
  undefined *puStack_34;
  undefined *puStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  
  uVar2 = 0;
  aiStack_3c[1] = 0;
  ar6_00 = ar6;
  aiStack_3c[0] = ar5;
  ar5_00 = (int *)(*(code *)*ar4)(0x2c,aiStack_3c,ar6,ar7);
  if (ar5_00 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    ar5_00[2] = *ar4;
    ar5_00[3] = ar4[1];
    ar5_00[4] = ar4[2];
    ar5_00[5] = ar4[3];
    ar5_00[6] = ar4[4];
    ar5_00[7] = ar4[5];
    ar5_00[8] = ar4[6];
    ar5_00[9] = ar4[7];
    ar5_00[10] = ar4[8];
    ar5_00[1] = ar5;
    puStack_34 = (&FUN_8c10aff4);
    *ar6 = (int)ar5_00;
    puStack_30 = (&FUN_8c10b02a);
    puStack_2c = (&FUN_8c10b060);
    puStack_28 = (&FUN_8c10b096);
    puStack_24 = (&FUN_8c10b0d8);
    puStack_20 = (&FUN_8c10b10e);
    puStack_1c = (&FUN_8c10b144);
    puStack_18 = (&FUN_8c10b17a);
    puStack_14 = (&FUN_8c10b1b0);
    iVar1 = FUN_8c11cdb6(&puStack_34,ar5_00,ar6_00,ar7);
    if (iVar1 == 0) {
      uVar2 = FUN_8c11cd44(0,0,ar6_00,ar7);
      (*(code *)(uint)ar4[1])(ar5_00,aiStack_3c,ar6_00,ar7);
    }
    else {
      *ar5_00 = iVar1;
    }
  }
  return uVar2;
}

__asm__(".globl _asr_lib_create_engine\n.set _asr_lib_create_engine, _asr_lib_create_engine_def\n");
