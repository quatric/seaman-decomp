#include "../decls.h"
int FUN_8c267cce_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *in_r2;
  int iVar1;
  int iVar2;
  undefined4 in_PR;
  
  iVar1 = ar6;
  if (*in_r2 == 0) {
    iVar2 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar2 = 0x7000103;
  }
  else {
    iVar2 = (int)(short)ar5;
    if ((iVar2 < -0x18ff) || (0x18ff < iVar2)) {
      iVar2 = 0x3000001;
    }
    else {
      _DAT_8c4bd4b8 = 0x28;
      DAT_8c4bd4bc = *(undefined1 *)(ar4 + 1);
      iVar2 = iVar2 + 0x8000;
      DAT_8c4bd4be = (undefined1)iVar2;
      DAT_8c4bd4bf = (undefined1)((uint)iVar2 >> 8);
      DAT_8c4bd4c0 = (undefined1)ar6;
      iVar1 = ar6 >> 8;
      DAT_8c4bd4c1 = (undefined1)((uint)ar6 >> 8);
      iVar2 = FUN_8c267fe8(&DAT_8c4bd4b8,iVar2 >> 8,iVar1,ar7);
    }
  }
  if (iVar2 != 0) {
    FUN_8c2688a0(FUN_8c267ccc,iVar2,iVar1,ar7,in_PR);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c267cce\n.set _FUN_8c267cce, _FUN_8c267cce_def\n");
