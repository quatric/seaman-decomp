#include "../decls.h"
int FUN_8c2013c2_def(int ar4,undefined4 ar5,int ar6,int ar7,uint s0)

{
  int iVar1;
  int iVar2;
  undefined4 ar6_00;
  int iVar3;
  uint uVar4;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_24 = ar7;
  uStack_20 = ar5;
  iStack_1c = ar6;
  if (s0 == 0) {
    iVar1 = FUN_8c1ffb70(ar4,ar5,ar6,ar7);
    if (iVar1 < 0) {
      return iVar1;
    }
    s0 = iVar1 - iStack_24;
  }
  iVar2 = FUN_8c1fe534(ar4,uStack_20,&uStack_28,ar7);
  iVar1 = iStack_1c;
  if (-1 < iVar2) {
    ar6_00 = 0;
    iVar2 = ar4 * 0x148 + 0x8c4783e0;
    *(undefined4 *)(iVar2 + 0x30) = 1;
    *(uint *)(iVar2 + 0x34) = s0;
    FUN_8c20135c(uStack_28,iStack_24,0,ar7);
    uVar4 = 0;
    if (s0 != 0) {
      iVar3 = (int)0x200;
      do {
        iVar2 = FUN_8c1fee6c(uStack_28,iVar1,ar6_00,ar7);
        if (iVar2 < 0) goto LAB_8c201442;
        uVar4 = uVar4 + 1;
        iVar1 = iVar1 + iVar3;
      } while (uVar4 < s0);
    }
    iVar2 = 0;
LAB_8c201442:
    FUN_8c1fe9ae(uStack_28,0,ar6_00,ar7);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2013c2\n.set _FUN_8c2013c2, _FUN_8c2013c2_def\n");
