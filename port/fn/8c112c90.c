#include "../decls.h"
undefined4 FUN_8c112c90_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  uVar1 = 0;
  if (ar4[0x17] != 0) {
    do {
      (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)(ar4[0x16] + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)ar4[0x17]);
  }
  if (ar4[0x16] != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x16]);
  }
  ar4[0x16] = 0;
  ar4[0x17] = 0;
  return 0x5c;
}

__asm__(".globl _FUN_8c112c90\n.set _FUN_8c112c90, _FUN_8c112c90_def\n");
