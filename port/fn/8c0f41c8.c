#include "../decls.h"
undefined4 CAnimal_m1_0f41c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_dr8;
  undefined8 in_dr10;
  char cVar3;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined8 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar3 = '\0';
  uStack_28 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uStack_24 = (undefined4)in_dr4;
  uStack_20 = (undefined4)((ulonglong)in_dr6 >> 0x20);
  uStack_1c = (undefined4)in_dr6;
  uStack_18 = (undefined4)((ulonglong)in_dr8 >> 0x20);
  uStack_14 = (undefined4)in_dr8;
  uStack_10 = (undefined4)((ulonglong)in_dr10 >> 0x20);
  uStack_c = (undefined4)in_dr10;
  uStack_34 = CONCAT44(ar5,&DAT_8c1401fa);
  uStack_2c = ar5;
  FUN_8c014334(ar4 + 0xc,ar5,ar6,ar7,&DAT_8c1401fa);
  if (cVar3 == '\0') {
    puVar2 = &uStack_30;
    uStack_34 = CONCAT44(in_stack_00000000,(undefined4)uStack_34);
  }
  else {
    uStack_34 = CONCAT44(in_stack_00000004,in_stack_00000000);
    puVar2 = (undefined4 *)&stack0xffffffcc;
  }
  uVar1 = FUN_8c0f528c(ar4,ar5,ar6,ar7,*puVar2,puVar2[1]);
  return uVar1;
}

__asm__(".globl _CAnimal_m1_0f41c8\n.set _CAnimal_m1_0f41c8, _CAnimal_m1_0f41c8_def\n");
