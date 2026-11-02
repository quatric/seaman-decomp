#include "../decls.h"
undefined4 FUN_8c1f0cdc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  
  if (*(short *)(ar4 + 2) == 0) {
    puVar3 = (ushort *)((*(int *)(ar4 + 0x28) + 1) * 0x40 + *(int *)(ar4 + 0xc));
    func_0x8c1f0974(puVar3 + 1,*(undefined4 *)(ar4 + 0x30),0x3c);
    if ((*puVar3 == 0xffff) ||
       (uVar1 = FUN_8c1f109c(0x3e,puVar3), puVar3[0x1f] == uVar1)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffc;
    }
  }
  else {
    uVar2 = 0xfffffffa;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f0cdc\n.set _FUN_8c1f0cdc, _FUN_8c1f0cdc_def\n");
