#include "../decls.h"
undefined4 FUN_8c203298_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = 0x8c47e988;
  piVar5 = 0x8c47e988;
  do {
    if ((int *)((int)0x200 + (int)0x8c47e988) <= piVar4) {
      return 1;
    }
    uVar1 = 0;
    piVar2 = piVar4;
    piVar3 = piVar5;
    do {
      if ((*piVar3 == ar4) && ((piVar2[6] & 3U) != 0)) {
        return 0;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 8;
      piVar3 = piVar3 + 8;
    } while (uVar1 < 8);
    piVar4 = (int *)((int)piVar4 + (int)0x100);
    piVar5 = (int *)((int)piVar5 + (int)0x100);
  } while( true );
}

__asm__(".globl _FUN_8c203298\n.set _FUN_8c203298, _FUN_8c203298_def\n");
