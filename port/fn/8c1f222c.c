#include "../decls.h"
undefined4 FUN_8c1f222c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  int iVar1;
  undefined4 ar6_00;
  int *piVar2;
  int ar4_00;
  int iVar3;
  
  ar6_00 = 0;
  if (ar5 == 0) {
    ar5 = DAT_8c2739e0[4];
  }
  ar5_00 = FUN_8c1f2cce(ar4,ar5,0,ar7);
  if (ar5_00 == 0) {
    FUN_8c1f175c(0xfffffff8,0,ar6_00,ar7);
  }
  else {
    iVar3 = (ar5_00 + -1) * 0x2c;
    ar4_00 = DAT_8c2739e0[6];
    for (iVar1 = 0; iVar1 < *DAT_8c2739e0; iVar1 = iVar1 + 1) {
      if (*(short *)(ar4_00 + 0x4c) == 0) {
        piVar2 = (int *)(ar5 + 0x10 + iVar3);
        iVar3 = piVar2[1];
        iVar1 = *piVar2 + 0x96;
        FUN_8c1f21bc(ar4_00,ar5_00,iVar1,iVar3);
        FUN_8c1f175c(0,ar5_00,iVar1,iVar3);
        return ar4_00;
      }
      ar4_00 = ar4_00 + 0x54;
    }
    FUN_8c1f175c(0xfffffff7,ar5_00,DAT_8c2739e0,iVar3);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f222c\n.set _FUN_8c1f222c, _FUN_8c1f222c_def\n");
