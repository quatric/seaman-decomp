#include "../decls.h"
undefined4
FUN_8c25f67e_def(undefined4 ar4,int ar5,short *ar6,undefined1 *ar7,char *s0,undefined1 *s4,char *s8,
            undefined4 *s12,undefined4 *s16,undefined4 *s20)

{
  int iVar1;
  short sVar2;
  undefined4 uStack_20;
  char acStack_1c [4];
  char cStack_18;
  undefined4 uStack_14;
  short *psStack_10;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  
  if (ar5 < 8) {
    *ar6 = 0;
  }
  else {
    psStack_10 = ar6;
    uStack_c = ar4;
    puStack_8 = ar7;
    iVar1 = FUN_8c25f428(ar4,ar5,&uStack_20,acStack_1c);
    if ((iVar1 != 0) && (sVar2 = (short)iVar1 - (short)uStack_c, *psStack_10 = sVar2, 0 < sVar2)) {
      *s12 = uStack_20;
      *s8 = acStack_1c[0];
      *s0 = cStack_18;
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

__asm__(".globl _FUN_8c25f67e\n.set _FUN_8c25f67e, _FUN_8c25f67e_def\n");
