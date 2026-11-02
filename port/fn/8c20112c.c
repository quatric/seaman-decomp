#include "../decls.h"
uint FUN_8c20112c_def(int ar4,undefined4 ar5,int ar6,uint ar7,undefined4 s0,uint s4)

{
  uint uVar1;
  int *ar7_00;
  uint uVar2;
  int iVar3;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  ar7_00 = &iStack_24;
  iStack_20 = ar6;
  uStack_1c = ar5;
  uVar1 = FUN_8c1fe350(ar4,1,ar6,ar7);
  if (-1 < (int)uVar1) {
    if (uVar1 < ar7) {
      uVar1 = 0xffffff04;
    }
    else if ((s4 & 0x80000000) == 0) {
      uVar1 = FUN_8c1fe646(ar4,uStack_1c,s0,&iStack_24);
      if (-1 < (int)uVar1) {
        iVar3 = ar4 * 0x148;
        uVar2 = 0;
        *(char *)(iStack_24 + 1) = (char)s4;
        *(undefined4 *)(iVar3 + -0x73b87bf0) = 1;
        *(uint *)(iVar3 + -0x73b87bec) =
             *(int *)(&DAT_8c273aa4 + *(int *)(iVar3 + -0x73b87c1c) * 0x50) + ar7;
        iVar3 = iStack_20;
        if (ar7 != 0) {
          do {
            uVar1 = FUN_8c1fecf2(iStack_24,iVar3,s0,ar7_00);
            if ((int)uVar1 < 0) goto LAB_8c201208;
            uVar2 = uVar2 + 1;
            iVar3 = iVar3 + 0x200;
          } while (uVar2 < ar7);
        }
        uVar1 = 0;
LAB_8c201208:
        FUN_8c1fe9ae(iStack_24,0,s0,ar7_00);
      }
    }
    else {
      uVar1 = FUN_8c201240(ar4,uStack_1c,iStack_20,ar7);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c20112c\n.set _FUN_8c20112c, _FUN_8c20112c_def\n");
