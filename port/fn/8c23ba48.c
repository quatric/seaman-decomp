#include "../decls.h"
undefined4 *
FUN_8c23ba48_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 *ain0,
            undefined4 *ain1)

{
  undefined4 *in_r2;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  a5 = *ain0;
  a6 = *ain1;
  a7 = *in_r2;
  puVar2 = (undefined4 *)&DAT_8c4ab284;
  puVar1 = &DAT_8c277b40;
  for (iVar3 = _DAT_8c4c1300; iVar3 != 0; iVar3 = iVar3 + -1) {
    ain0 = (undefined4 *)(*(code *)*puVar1)(*puVar2,a5,a6,a7);
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c23ba48\n.set _FUN_8c23ba48, _FUN_8c23ba48_def\n");
