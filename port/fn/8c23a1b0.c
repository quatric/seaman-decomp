#include "../decls.h"
undefined4 FUN_8c23a1b0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  ushort uStack_10;
  ushort uStack_e;
  
  iVar2 = 0x54525650;
  do {
    FUN_8c238e98(&iStack_20,4,ar6,ar7);
    if (iStack_20 == 0x54525650) {
      FUN_8c238e98(&iStack_18,0xc,ar6,ar7);
      ar4[4] = (uint)uStack_10;
      ar4[5] = (uint)uStack_e;
      ar4[1] = iStack_14 << 0x10;
    }
    else {
      FUN_8c238e98(&uStack_1c,4,ar6,ar7);
      FUN_8c238eba(uStack_1c,1,ar6,ar7);
    }
    puVar1 = (&FUN_8c238eba);
  } while (iStack_20 != iVar2);
  *ar4 = *(undefined4 *)0x8c4ab274;
  uVar3 = (*(code *)puVar1)(iStack_18 + -8,1,ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c23a1b0\n.set _FUN_8c23a1b0, _FUN_8c23a1b0_def\n");
