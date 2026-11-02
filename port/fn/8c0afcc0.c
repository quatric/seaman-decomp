#include "../decls.h"
undefined4 Class_12b2ac_m6_0afcc0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  FUN_8c031b68(ar4,0x8c286dbc,ar6,ar7);
  *(undefined4 *)(0x128 + ar4) = ar5;
  if (1 < *(int *)(0x314 + ar4)) {
    ar7 = 0;
    ar6 = 0xffffffff;
    (*(code *)(&s_CAnimBody_SetAnimation_033a94))
              (ar4 + 0xb0,0xe,0xffffffff,0);
  }
  uVar3 = 0x12;
  uVar1 = FUN_8c03c0f0(ar4 + 0xb0,0x12,ar6,ar7);
  piVar2 = (int *)deref_u32(uVar1,uVar3,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(*piVar2 + 0x18) != 0) {
    uVar3 = 0x12;
    uVar1 = FUN_8c03c0f0(ar4 + 0xb0,0x12,ar6,ar7);
    uVar1 = deref_u32(uVar1,uVar3,ar6,ar7);
    uVar5 = 1;
    puVar4 = (&DATA_8c13ba4c);
    FUN_8c034a70(ar4 + 0xb0,uVar1,(&DATA_8c13ba4c),1);
    uVar3 = 0x13;
    uVar1 = FUN_8c03c0f0(ar4 + 0xb0,0x13,puVar4,uVar5);
    uVar1 = deref_u32(uVar1,uVar3,puVar4,uVar5);
    uVar5 = 1;
    puVar4 = (&DATA_8c13ba4c) + 0x18;
    FUN_8c034a70(ar4 + 0xb0,uVar1,puVar4,1);
    uVar3 = 0x14;
    uVar1 = FUN_8c03c0f0(ar4 + 0xb0,0x14,puVar4,uVar5);
    uVar1 = deref_u32(uVar1,uVar3,puVar4,uVar5);
    uVar1 = FUN_8c034a70(ar4 + 0xb0,uVar1,(&DATA_8c13ba4c) + 0x30,1);
  }
  return uVar1;
}

__asm__(".globl _Class_12b2ac_m6_0afcc0\n.set _Class_12b2ac_m6_0afcc0, _Class_12b2ac_m6_0afcc0_def\n");
