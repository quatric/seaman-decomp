#include "../decls.h"
undefined4 FUN_8c1f68ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  
  ar5_00 = 0x210 + ar4;
  for (iVar2 = 0; iVar2 < *(int *)(0x208 + ar4); iVar2 = iVar2 + 1) {
    if (*(int *)(ar5_00 + 0xc) != 0) {
      FUN_8c1f689e(ar4,ar5_00,ar6,ar7);
    }
    ar5_00 = ar5_00 + 0x124;
  }
  uVar1 = memset(ar4,0,(int)0xd7c);
  return uVar1;
}

__asm__(".globl _FUN_8c1f68ec\n.set _FUN_8c1f68ec, _FUN_8c1f68ec_def\n");
