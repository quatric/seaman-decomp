#include "../decls.h"
uint FUN_8c200f2c_def(int ar4,undefined4 ar5,int ar6,uint ar7,undefined4 s0,uint s4)

{
  uint uVar1;
  int iVar2;
  int *ar7_00;
  uint uVar3;
  int iStack_20;
  int iStack_1c;
  
  ar7_00 = &iStack_20;
  uVar3 = ar7;
  iStack_1c = ar6;
  uVar1 = FUN_8c1fe350(ar4,0,ar6,ar7);
  iVar2 = FUN_8c1ffb70(ar4,ar5,ar6,uVar3);
  if (0 < iVar2) {
    uVar1 = uVar1 + iVar2;
  }
  if (-1 < (int)uVar1) {
    if (uVar1 < ar7) {
      uVar1 = 0xffffff04;
    }
    else if ((s4 & 0x80000000) == 0) {
      uVar1 = FUN_8c1fe7aa(ar4,ar5,s0,&iStack_20);
      if (-1 < (int)uVar1) {
        iVar2 = ar4 * 0x148;
        uVar3 = 0;
        *(char *)(iStack_20 + 1) = (char)s4;
        *(undefined4 *)(iVar2 + -0x73b87bf0) = 1;
        *(uint *)(iVar2 + -0x73b87bec) =
             *(int *)(&DAT_8c273aa4 + *(int *)(iVar2 + -0x73b87c1c) * 0x50) + ar7;
        iVar2 = iStack_1c;
        if (ar7 != 0) {
          do {
            uVar1 = FUN_8c1febd6(iStack_20,iVar2,s0,ar7_00);
            if ((int)uVar1 < 0) goto LAB_8c20100a;
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + 0x200;
          } while (uVar3 < ar7);
        }
        uVar1 = 0;
LAB_8c20100a:
        FUN_8c1fe9ae(iStack_20,0,s0,ar7_00);
      }
    }
    else {
      uVar1 = FUN_8c20103c(ar4,ar5,iStack_1c,ar7);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c200f2c\n.set _FUN_8c200f2c, _FUN_8c200f2c_def\n");
