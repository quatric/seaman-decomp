#include "../decls.h"
undefined4 FUN_8c110b58_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  uint uVar1;
  int iVar2;
  
  if (ar4[0xb] != 0) {
    uVar1 = 0;
    iVar2 = *ar4;
    if (ar4[10] != 0) {
      do {
        (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)(ar4[0xb] + uVar1 * 4));
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)ar4[10]);
    }
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0xb]);
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0xc]);
    in_r0 = (**(code **)(iVar2 + 0x18))(iVar2,ar4[0xd]);
    ar4[0xb] = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c110b58\n.set _FUN_8c110b58, _FUN_8c110b58_def\n");
