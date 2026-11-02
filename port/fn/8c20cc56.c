#include "../decls.h"
undefined4 FUN_8c20cc56_def(uint *ar4,undefined4 ar5,uint ar6,uint ar7)

{
  uint uVar1;
  int iVar2;
  uint ar7_00;
  uint uVar3;
  
  ar7_00 = ar7 & 0xfffffffc;
  if (ar7_00 != 0) {
    if ((*ar4 & 0xffff) == 3) {
      return 4;
    }
    uVar1 = ar4[6];
    if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0))
    {
      iVar2 = 0;
    }
    else {
      iVar2 = 4;
    }
    uVar3 = (ar6 & 0xfffffffc) + iVar2;
    uVar1 = ar4[5] - uVar3;
    if (ar4[5] <= uVar3) {
      return 7;
    }
    if (ar7_00 < uVar1) {
      uVar1 = ar7_00;
    }
    FUN_8c20a8e0(uVar3 + ar4[7],ar5,uVar1,ar7_00);
  }
  return 0;
}

__asm__(".globl _FUN_8c20cc56\n.set _FUN_8c20cc56, _FUN_8c20cc56_def\n");
