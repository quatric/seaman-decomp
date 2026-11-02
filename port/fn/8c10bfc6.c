#include "../decls.h"
undefined4 asr_lib_create_recognizer_def(undefined4 *ar4,int *ar5,int ar6,int *ar7)

{
  undefined *puVar1;
  int *ar6_00;
  int iVar2;
  int *ar6_01;
  int *ar7_00;
  undefined4 uVar3;
  undefined4 uStack_34;
  int iStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  
  uVar3 = 0;
  puStack_2c = (&FUN_8c10b1ec);
  puStack_28 = (&FUN_8c10b576);
  puStack_24 = (&FUN_8c10b5b8);
  puStack_20 = (&FUN_8c10b5f0);
  puStack_1c = (&FUN_8c10b628);
  puStack_18 = (&FUN_8c10b660);
  uStack_34 = ar4[1];
  ar7_00 = ar7;
  iStack_30 = ar6;
  ar6_00 = (int *)(*(code *)(uint)ar4[2])(0x30,&uStack_34,ar6,ar7);
  ar6_00[2] = ar6;
  ar6_00[1] = (int)ar4;
  ar6_00[3] = *ar5;
  ar6_00[4] = ar5[1];
  ar6_00[5] = ar5[2];
  ar6_00[6] = ar5[3];
  ar6_00[7] = ar5[4];
  puVar1 = (&FUN_8c11ce8e);
  ar6_00[8] = ar5[5];
  ar6_00[9] = 0;
  ar6_00[10] = 0;
  ar6_00[0xb] = 0;
  ar6_01 = ar6_00;
  iVar2 = (*(code *)puVar1)(*ar4,&puStack_2c,ar6_00,ar7_00);
  if (iVar2 == 0) {
    uVar3 = FUN_8c11cd44(*ar4,0,ar6_01,ar7_00);
    (*(code *)(uint)ar4[3])(ar6_00,&uStack_34,ar6_01,ar7_00);
  }
  else {
    *ar6_00 = iVar2;
    *ar7 = (int)ar6_00;
  }
  return uVar3;
}

__asm__(".globl _asr_lib_create_recognizer\n.set _asr_lib_create_recognizer, _asr_lib_create_recognizer_def\n");
