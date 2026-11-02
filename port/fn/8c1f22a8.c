#include "../decls.h"
undefined4 FUN_8c1f22a8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int ar7_00;
  int ar4_00;
  
  if (ar4 < 0xb05e) {
    FUN_8c1f175c(0xffffffe0,ar5,ar6,ar7);
  }
  else {
    ar4_00 = DAT_8c2739e0[6];
    ar7_00 = ar5 << 0xb;
    for (iVar1 = 0; iVar1 < *DAT_8c2739e0; iVar1 = iVar1 + 1) {
      if (*(short *)(ar4_00 + 0x4c) == 0) {
        ar5_00 = 0;
        FUN_8c1f21bc(ar4_00,0,ar4,ar7_00);
        FUN_8c1f175c(0,ar5_00,ar4,ar7_00);
        return ar4_00;
      }
      ar4_00 = ar4_00 + 0x54;
    }
    FUN_8c1f175c(0xfffffff7,ar5,DAT_8c2739e0,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f22a8\n.set _FUN_8c1f22a8, _FUN_8c1f22a8_def\n");
