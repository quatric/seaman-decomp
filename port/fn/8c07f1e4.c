#include "../decls.h"
undefined4 FUN_8c07f1e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar3 = ar6;
  uVar1 = FUN_8c03c0f0(ar4 + 0xb0,ar5,ar6,ar7);
  puVar2 = (undefined4 *)deref_u32(uVar1,ar5,uVar3,ar7);
  puVar4 = (undefined4 *)(ar4 + 0xb4);
  uVar1 = puVar2[1];
  *puVar4 = *puVar2;
  puVar4[1] = uVar1;
  puVar4[2] = puVar2[2];
  *(undefined4 *)(0xb4 + ar4) = ar6;
  vec3_clear(ar4 + 0x244,ar5,uVar3,ar7);
  uVar3 = FUN_8c02a1fc(ar4 + 0x254,ar5,uVar3,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c07f1e4\n.set _FUN_8c07f1e4, _FUN_8c07f1e4_def\n");
