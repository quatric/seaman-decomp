#include "../decls.h"
undefined4 FUN_8c20c7e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (_DAT_8c4a9ef0 == 1) {
    uVar1 = _DAT_8c4a9f08 & 1;
    pvr_20a844(8,1,ar6,ar7);
    pvr_20a844(8,0,ar6,ar7);
    iVar3 = uVar1 * 0x20;
    pvr_20a844(0x124,*(undefined4 *)(iVar3 + -0x73b55fdc),ar6,ar7);
    pvr_20a844(300,*(undefined4 *)(iVar3 + -0x73b55fd8),ar6,ar7);
    pvr_20a844(0x128,*(undefined4 *)(iVar3 + -0x73b55fd0),ar6,ar7);
    pvr_20a844(0x130,*(undefined4 *)(iVar3 + -0x73b55fcc),ar6,ar7);
    pvr_20a844(0x164,*(undefined4 *)(iVar3 + -0x73b55fd4),ar6,ar7);
    ar5 = 0x80000000;
    pvr_20a844(0x144,0x80000000,ar6,ar7);
    pvr_20a876(0x144,ar5,ar6,ar7);
    _DAT_8c4a9f18 = 0;
    _DAT_8c4a9f14 = _DAT_8c4aa014;
  }
  uVar2 = FUN_8c210cc0(DAT_8c27570c,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c20c7e0\n.set _FUN_8c20c7e0, _FUN_8c20c7e0_def\n");
