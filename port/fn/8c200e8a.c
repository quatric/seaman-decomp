#include "../decls.h"
uint FUN_8c200e8a_def(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 *ar6_00;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  ar6_00 = &uStack_24;
  uVar5 = ar7;
  uStack_20 = ar5;
  iStack_1c = ar6;
  if (((ar7 != 0) ||
      (uVar1 = FUN_8c1ffb70(ar4,ar5,ar6,0), uVar5 = uVar1, -1 < (int)uVar1)) &&
     (uVar1 = FUN_8c1fe534(ar4,uStack_20,&uStack_24,ar7), -1 < (int)uVar1)) {
    uVar4 = 0;
    iVar2 = ar4 * 0x148 + 0x8c4783e0;
    *(undefined4 *)(iVar2 + 0x30) = 1;
    *(uint *)(iVar2 + 0x34) = uVar5;
    if (uVar5 != 0) {
      iVar3 = (int)0x200;
      iVar2 = iStack_1c;
      do {
        uVar1 = FUN_8c1fee6c(uStack_24,iVar2,ar6_00,ar7);
        if ((int)uVar1 < 0) goto LAB_8c200f12;
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + iVar3;
      } while (uVar4 < uVar5);
    }
    uVar1 = 0;
LAB_8c200f12:
    FUN_8c1fe9ae(uStack_24,0,ar6_00,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c200e8a\n.set _FUN_8c200e8a, _FUN_8c200e8a_def\n");
