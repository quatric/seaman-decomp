#include "../decls.h"
undefined4 FUN_8c20b260_def(undefined4 ar4,undefined *ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 ar5_00;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_stack_ffffffd8;
  
  if (DAT_8c275710 == 0) {
    if (_DAT_8c4a9ef0 == 0) {
      *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 1;
      _DAT_8c4a9f20 = 1;
    }
    else {
      _DAT_8c4aa0fc = _DAT_ffd8000c;
      _DAT_8c4a9f10 = _DAT_8c4a9f08;
      _DAT_8c4a9db8 = 1;
      _DAT_8c4a9f18 = 0;
      _DAT_8c4a9f14 = _DAT_8c4aa014;
      _DAT_8c4a9f20 = 1;
      _DAT_8c4aa0b8 = 0;
      *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 2;
      if ((_DAT_8c4a9fcc & 0x20) == 0) {
        iVar6 = _DAT_8c4a9f08 * 4;
        iVar5 = _DAT_8c4a9f08 * 4;
        iVar7 = _DAT_8c4a9fd0 * 0x10;
        iVar4 = _DAT_8c4a9fd0 * 0x10;
        do {
          ar7 = 0x10;
          ar5 = *(undefined **)(iVar6 + -0x73b560d4 + iVar4);
          ar6 = *(int *)(iVar5 + -0x73b56084 + iVar7) + 0x20;
          iVar2 = sh4_dmac_202f40(0x10000000,ar5,ar6,0x10,&stack0xffffffd8);
        } while (iVar2 == 0x100);
        FUN_8c20b160(_DAT_8c4a9fd0,ar5,ar6,ar7,in_stack_ffffffd8);
      }
      else {
        _DAT_ff000038 = 0x10;
        _DAT_ff00003c = 0x10;
        ar5 = &DAT_8c26d3f8;
        ar6 = 4;
        FUN_8c20731e(0xe0000000,&DAT_8c26d3f8,4,ar7);
        FUN_8c20b160(_DAT_8c4a9fd0,ar5,ar6,ar7,in_stack_ffffffd8);
      }
    }
  }
  _DAT_8c4a9f1c = 0;
  bVar1 = false;
  do {
    if (_DAT_8c4a9f20 == 0) goto LAB_8c20b3e0;
    (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
  } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd4 + _DAT_8c4a9dd0 + 1U);
  bVar1 = true;
LAB_8c20b3e0:
  if (bVar1) {
    _DAT_8c4a9db4 = 0;
    _DAT_8c4a9f1c = 0;
    bVar1 = false;
    do {
      if (_DAT_8c4a9f20 == 0) goto LAB_8c20b468;
      (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
    } while (_DAT_8c4a9f1c < 0x15);
    bVar1 = true;
LAB_8c20b468:
    if (bVar1) {
      FUN_8c2062c8(4,ar5,ar6,ar7);
    }
  }
  _DAT_8c4a9f08 = _DAT_8c4a9f08 + 1 & 3;
  *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 0;
  if ((_DAT_8c4a9ef0 == 1) || (DAT_8c275710 == 1)) {
    uVar3 = _DAT_8c4a9f08 & 1;
    pvr_20a844(8,1,ar6,ar7);
    pvr_20a844(8,0,ar6,ar7);
    iVar7 = uVar3 * 0x20;
    pvr_20a844(0x124,*(undefined4 *)(iVar7 + -0x73b55fdc),ar6,ar7);
    pvr_20a844(300,*(undefined4 *)(iVar7 + -0x73b55fd8),ar6,ar7);
    pvr_20a844(0x128,*(undefined4 *)(iVar7 + -0x73b55fd0),ar6,ar7);
    pvr_20a844(0x130,*(undefined4 *)(iVar7 + -0x73b55fcc),ar6,ar7);
    pvr_20a844(0x164,*(undefined4 *)(iVar7 + -0x73b55fd4),ar6,ar7);
    ar5_00 = 0x80000000;
    pvr_20a844(0x144,0x80000000,ar6,ar7);
    pvr_20a876(0x144,ar5_00,ar6,ar7);
    _DAT_8c4a9f18 = 0;
    _DAT_8c4a9f14 = _DAT_8c4aa014;
    if (DAT_8c275710 != 0) {
      _DAT_8c4a9f10 = _DAT_8c4a9f08;
      *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 2;
      _DAT_8c4a9db8 = 1;
      _DAT_8c4a9f28 = 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c20b260\n.set _FUN_8c20b260, _FUN_8c20b260_def\n");
