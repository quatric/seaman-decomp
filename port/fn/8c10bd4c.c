#include "../decls.h"
undefined4 FUN_8c10bd4c_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *ar6_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puStack_24;
  undefined1 auStack_20 [4];
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar2 = (undefined4 *)(uint)ar4[1];
  uVar3 = 0;
  ar6_00 = auStack_20;
  uStack_18 = puVar2[1];
  uStack_14 = ar4[2];
  puStack_1c = ar5;
  iVar1 = FUN_8c11d996(*ar4,&puStack_24,ar6_00,ar7);
  if (iVar1 != 0) {
    uVar3 = FUN_8c11cd44(*puVar2,*ar4,ar6_00,ar7);
  }
  *puStack_1c = *puStack_24;
  puStack_1c[1] = puStack_24[1];
  puStack_1c[2] = puStack_24[2];
  puStack_1c[3] = puStack_24[3];
  puStack_1c[4] = puStack_24[4];
  puStack_1c[5] = puStack_24[5];
  puStack_1c[6] = puStack_24[6];
  puStack_1c[7] = puStack_24[7];
  puStack_1c[8] = puStack_24[8];
  puStack_1c[9] = puStack_24[9];
  puStack_1c[10] = puStack_24[10];
  puStack_1c[0xb] = puStack_24[0xb];
  puStack_1c[0xc] = puStack_24[0xc];
  puStack_1c[0xd] = puStack_24[0xd];
  (*(code *)puVar2[3])(puStack_24,&uStack_18,ar6_00,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c10bd4c\n.set _FUN_8c10bd4c, _FUN_8c10bd4c_def\n");
