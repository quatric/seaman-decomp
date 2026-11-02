#include "../decls.h"
int FUN_8c201240_def(int ar4,undefined4 ar5,int ar6,uint ar7,undefined1 *s0,undefined4 s4)

{
  int iVar1;
  int *ar6_00;
  int *ar7_00;
  int ar5_00;
  uint uVar2;
  int iVar3;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  ar7_00 = &iStack_2c;
  ar6_00 = &iStack_2c;
  uStack_28 = ar5;
  iStack_24 = ar6;
  iVar1 = FUN_8c1fe646(ar4,ar5,s0,&iStack_2c);
  if (-1 < iVar1) {
    iVar1 = ar4 * 0x148;
    uVar2 = 0;
    *(undefined1 *)(iStack_2c + 1) = (undefined1)s4;
    *(undefined4 *)(iVar1 + -0x73b87bf0) = 1;
    *(uint *)(iVar1 + -0x73b87bec) =
         ar7 * 2 + *(int *)(&DAT_8c273aa4 + *(int *)(iVar1 + -0x73b87c1c) * 0x50);
    iVar3 = iStack_24;
    if (ar7 != 0) {
      do {
        iVar1 = FUN_8c1fecf2(iStack_2c,iVar3,s0,ar7_00);
        if (iVar1 < 0) goto LAB_8c201312;
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x200;
      } while (uVar2 < ar7);
    }
    FUN_8c1fe9ae(iStack_2c,0,s0,ar7_00);
    iVar1 = FUN_8c1fe534(ar4,uStack_28,&iStack_2c,ar7_00);
    if (-1 < iVar1) {
      uVar2 = 0;
      ar5_00 = ar4 * 0x800 + -0x73b871c0;
      iVar3 = iStack_24;
      if (ar7 != 0) {
        do {
          iVar1 = FUN_8c1fee6c(iStack_2c,ar5_00,ar6_00,ar7_00);
          s0 = (undefined1 *)ar6_00;
          if (iVar1 < 0) goto LAB_8c201312;
          iVar1 = FUN_8c1fd4f0(ar5_00,iVar3,ar6_00,ar7_00);
          if (iVar1 != 0) {
            iVar1 = -0xf0;
            s0 = (undefined1 *)ar6_00;
            goto LAB_8c201312;
          }
          uVar2 = uVar2 + 1;
          iVar3 = iVar3 + 0x200;
        } while (uVar2 < ar7);
      }
      iVar1 = 0;
      s0 = (undefined1 *)ar6_00;
LAB_8c201312:
      FUN_8c1fe9ae(iStack_2c,0,s0,ar7_00);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c201240\n.set _FUN_8c201240, _FUN_8c201240_def\n");
