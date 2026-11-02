#include "../decls.h"
undefined4
FUN_8c25f052_def(undefined4 ar4,int ar5,short *ar6,undefined1 *ar7,char *s0,undefined1 *s4,char *s8,
            undefined4 *s12,undefined4 *s16,undefined4 *s20)

{
  int iVar1;
  short sVar2;
  undefined4 uStack_20;
  char acStack_1c [4];
  char acStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  short *psStack_c;
  undefined1 *puStack_8;
  
  if (ar5 < 0x1000) {
    *ar6 = 0;
  }
  else {
    uStack_10 = ar4;
    psStack_c = ar6;
    puStack_8 = ar7;
    iVar1 = FUN_8c25ed3c(ar4,&uStack_20,acStack_1c,acStack_18);
    if ((iVar1 != 0) && (sVar2 = (short)iVar1 - (short)uStack_10, *psStack_c = sVar2, 0 < sVar2)) {
      *s12 = uStack_20;
      *s8 = acStack_1c[0];
      *s0 = acStack_18[0];
      *s16 = uStack_14;
      *puStack_8 = 0xff;
      iVar1 = (int)(short)*s8 * (int)(short)*s0;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 7;
      }
      *s4 = (char)(iVar1 >> 3);
      *s20 = 1;
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c25f052\n.set _FUN_8c25f052, _FUN_8c25f052_def\n");
