#include "../decls.h"
uint FUN_8c1ef4fa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  uint uVar1;
  uint in_r3;
  undefined1 *puVar2;
  undefined1 *a5;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 in_PR;
  
  uVar1 = ain0 & in_r3 | 0xf0;
  puVar2 = &DAT_8c470e90;
  if (_DAT_8c470e90 == 0) {
    _DAT_8c470bec = _DAT_8c470bec + 1;
    pvr_1efaf4(&DAT_8c470e90,ar5,ar6,ar7);
    uVar1 = FUN_8c1ef558(puVar2,ar5,ar6,ar7,in_PR);
    a5 = &DAT_8c470920;
    piVar4 = (int *)&DAT_8c470920;
    puVar2 = &DAT_8c470920;
    puVar3 = (undefined4 *)&DAT_8c470920;
    do {
      if (*piVar4 != 0) {
        uVar1 = (*(code *)*puVar3)(puVar2,a5,ar6,ar7);
      }
      piVar4 = piVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (piVar4 < &DAT_8c4709a0);
  }
  else {
    _DAT_8c470e90 = 0;
    _DAT_8c470e94 = _DAT_8c470e94 + 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1ef4fa\n.set _FUN_8c1ef4fa, _FUN_8c1ef4fa_def\n");
