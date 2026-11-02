#include "../decls.h"
int FUN_8c20374e_def(uint ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int ar5_00;
  int iVar5;
  int ar4_00;
  
  if ((int)ar4 < 0) {
    uVar1 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar4 & 0x1f;
  }
  if (uVar1 != 0) {
    ar4 = ar4 + (0x20 - uVar1);
  }
  ar5_00 = ar4 << 1;
  iVar5 = ar5;
  if ((_DAT_8c4a9bb0 & 4) == 0) {
    uVar4 = 8;
    iVar2 = FUN_8c2046d2(0,ar5_00,ar5,8);
  }
  else {
    uVar4 = 8;
    iVar2 = FUN_8c2046d2((uint)(DAT_8c275410 <= DAT_8c275424),ar5_00,ar5,8);
  }
  if (iVar2 == 0) {
    ar4_00 = *(int *)(ar5 + 0x1c);
    *(uint *)(ar5 + 0x14) = ar4;
    uVar3 = FUN_8c2059be(ar4_00,ar5_00,iVar5,uVar4);
    *(undefined4 *)(ar5 + 0x1c) = uVar3;
    *(uint *)(ar6 + 0x14) = ar4;
    uVar4 = FUN_8c2059be(ar4_00 + 4,ar5_00,iVar5,uVar4);
    *(undefined4 *)(ar6 + 0x1c) = uVar4;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c20374e\n.set _FUN_8c20374e, _FUN_8c20374e_def\n");
