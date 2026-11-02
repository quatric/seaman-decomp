#include "../decls.h"
undefined4 FUN_8c20b5a0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  _DAT_8c4a9db4 = 1;
  uVar2 = _DAT_8c4a9f10 & 1;
  if ((_DAT_8c4a9bb0 & 0x10) != 0) {
    pvr_20a844(8,2,ar6,ar7);
    pvr_20a844(8,0,ar6,ar7);
  }
  iVar3 = uVar2 * 0x20;
  pvr_20a844(0x2c,*(undefined4 *)(iVar3 + -0x73b55fe4),ar6,ar7);
  pvr_20a844(0x20,*(undefined4 *)(iVar3 + -0x73b55fd0),ar6,ar7);
  pvr_20a844(0x60,ar4[2],ar6,ar7);
  pvr_20a844(0x48,*ar4,ar6,ar7);
  pvr_20a844(0x4c,ar4[1],ar6,ar7);
  pvr_20a844(0x68,ar4[3],ar6,ar7);
  uVar4 = ar4[4];
  pvr_20a844(0x6c,uVar4,ar6,ar7);
  _DAT_8c4a9f1c = 0;
  bVar1 = false;
  do {
    if (_DAT_8c4a9db8 == 0) goto LAB_8c20b63e;
    (*_DAT_8c4a9e14)(_DAT_8c4a9e18,uVar4,ar6,ar7);
  } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd4);
  bVar1 = true;
LAB_8c20b63e:
  if (bVar1) {
    pvr_20a844(0x48,_DAT_8c4a9e78,ar6,ar7);
    pvr_20a844(0x4c,_DAT_8c4a9e70,ar6,ar7);
    pvr_20a844(0x68,_DAT_8c4a9e60,ar6,ar7);
    uVar4 = _DAT_8c4a9e64;
    pvr_20a844(0x6c,_DAT_8c4a9e64,ar6,ar7);
    _DAT_8c4a9db8 = 0;
    _DAT_8c4a9f24 = 0;
    uVar4 = FUN_8c210cc0(DAT_8c27570c,uVar4,ar6,ar7);
    return uVar4;
  }
  pvr_20a844(0x8c,_DAT_8c4a9d60,ar6,ar7);
  pvr_20a844(0x88,_DAT_8c4a9d5c & 0xfffffff0,ar6,ar7);
  uVar4 = pvr_20a844(0x14,0xffffffff,ar6,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c20b5a0\n.set _FUN_8c20b5a0, _FUN_8c20b5a0_def\n");
