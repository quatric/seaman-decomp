#include "../decls.h"
undefined4 FUN_8c25a6ea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = DAT_8c277b08;
  for (uVar2 = 0; uVar2 < DAT_8c277b0c; uVar2 = uVar2 + 1) {
    if (*piVar1 == ar4) {
      ain0 = 0x40;
      *(short *)(piVar1 + 0x10) = (short)piVar1[0x10] + 1;
    }
    piVar1 = piVar1 + 0x11;
  }
  return ain0;
}

__asm__(".globl _FUN_8c25a6ea\n.set _FUN_8c25a6ea, _FUN_8c25a6ea_def\n");
