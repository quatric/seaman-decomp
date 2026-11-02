#include "../decls.h"
undefined4 FUN_8c20cbbc_def(uint *ar4,undefined4 ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  uint ar7_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((*ar4 & 0xffff) == 3) {
    uVar1 = 4;
  }
  else {
    uVar2 = ar4[6];
    if (((((uVar2 & 4) == 0) || ((uVar2 & 1) == 0)) || ((uVar2 & 8) != 0)) || ((uVar2 & 0x20) != 0))
    {
      iVar3 = 0;
    }
    else {
      iVar3 = 4;
    }
    ar7_00 = ar7 * 0x20;
    uVar4 = iVar3 + ar6 * ar7_00;
    uVar2 = ar4[5] - uVar4;
    if (uVar4 < ar4[5]) {
      if (ar7_00 < uVar2) {
        uVar2 = ar7_00;
      }
      FUN_8c20a8e0(uVar4 + ar4[7],ar5,uVar2,ar7_00);
      uVar1 = 0;
    }
    else {
      uVar1 = 0xc;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c20cbbc\n.set _FUN_8c20cbbc, _FUN_8c20cbbc_def\n");
