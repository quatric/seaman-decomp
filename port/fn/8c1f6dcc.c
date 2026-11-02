#include "../decls.h"
undefined4 FUN_8c1f6dcc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = (&s_KATANA_FLASH_1f0d98);
  puVar1 = 0x8c4748ac;
  if (4 < ar4) {
    *(undefined4 *)0x8c4748a8 = 2;
    return 0;
  }
  if (*(undefined4 *)0x8c4749b8 != ar4) {
    if (ar4 < 0) {
      ar4 = -ar4;
    }
    *(undefined4 *)0x8c4749b8 = ar4;
    iVar3 = (*(code *)puVar2)(ar4,*puVar1,ar6,ar7);
    if (iVar3 != 0) {
      *(undefined4 *)0x8c4748a8 = iVar3;
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c1f6dcc\n.set _FUN_8c1f6dcc, _FUN_8c1f6dcc_def\n");
