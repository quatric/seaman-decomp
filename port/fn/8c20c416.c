#include "../decls.h"
undefined1 * FUN_8c20c416_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 a5;
  undefined4 uVar6;
  uint ar6_00;
  uint ar7_00;
  int iVar7;
  
  puVar4 = (undefined1 *)FUN_8c20b708(ar4,ar5,ar6,ar7);
  uVar3 = _DAT_8c4a9f08;
  if (puVar4 == (undefined1 *)0x0) {
    _DAT_8c4aa114 = (*(uint *)(ar4 + 0xc) & 0xfffffff) >> 2;
    _DAT_8c4aa118 = *(uint *)(ar4 + 0x1c) | 0x1000000;
    _DAT_8c4a9f1c = 0;
    puVar4 = &DAT_8c4a9db8;
    bVar1 = false;
    do {
      if (_DAT_8c4a9db8 == 0) goto LAB_8c20c4ce;
      (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
      puVar4 = &DAT_8c4a9dd4;
    } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd4);
    bVar1 = true;
LAB_8c20c4ce:
    if (!bVar1) {
      _DAT_8c4a9f1c = 0;
      bVar1 = false;
      do {
        if (_DAT_8c4a9db4 == 0) goto LAB_8c20c504;
        (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
        puVar4 = &DAT_8c4a9dd0;
      } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd0);
      bVar1 = true;
LAB_8c20c504:
      uVar2 = _DAT_8c4a9e64;
      uVar6 = _DAT_8c4a9e60;
      if (bVar1) {
        puVar5 = (undefined4 *)&DAT_8c4a9db4;
      }
      else {
        _DAT_8c4a9f24 = 1;
        ar7_00 = *(uint *)(ar4 + 0x10);
        ar6_00 = *(uint *)(ar4 + 0xc);
        if (_DAT_8c4a9bf8 < ar7_00) {
          ar7_00 = _DAT_8c4a9bf8;
        }
        a5 = 0;
        if (_DAT_8c4a9bf4 < ar6_00) {
          ar6_00 = _DAT_8c4a9bf4;
        }
        FUN_8c20a482(0,0,ar6_00,ar7_00);
        _DAT_8c4aa11c = _DAT_8c4a9e60;
        _DAT_8c4aa120 = _DAT_8c4a9e64;
        _DAT_8c4a9e60 = uVar6;
        _DAT_8c4a9e64 = uVar2;
        puVar4 = (undefined1 *)FUN_8c20b5a0(&DAT_8c4aa110,a5,ar6_00,ar7_00);
        _DAT_8c4a9f1c = 0;
        bVar1 = false;
        do {
          if (_DAT_8c4a9db4 == 0) goto LAB_8c20c5e8;
          (*_DAT_8c4a9e14)(_DAT_8c4a9e18,a5,ar6_00,ar7_00);
          puVar4 = &DAT_8c4a9dd0;
        } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd0);
        bVar1 = true;
LAB_8c20c5e8:
        if (!bVar1) {
          pvr_20a844(8,1,ar6_00,ar7_00);
          pvr_20a844(8,0,ar6_00,ar7_00);
          iVar7 = (uVar3 & 1) * 0x20;
          pvr_20a844(0x124,*(undefined4 *)(iVar7 + -0x73b55fdc),ar6_00,ar7_00);
          pvr_20a844(300,*(undefined4 *)(iVar7 + -0x73b55fd8),ar6_00,ar7_00);
          pvr_20a844(0x128,*(undefined4 *)(iVar7 + -0x73b55fd0),ar6_00,ar7_00);
          pvr_20a844(0x130,*(undefined4 *)(iVar7 + -0x73b55fcc),ar6_00,ar7_00);
          pvr_20a844(0x164,*(undefined4 *)(iVar7 + -0x73b55fd4),ar6_00,ar7_00);
          uVar6 = 0x80000000;
          pvr_20a844(0x144,0x80000000,ar6_00,ar7_00);
          pvr_20a876(0x144,uVar6,ar6_00,ar7_00);
          _DAT_8c4a9f18 = 0;
          _DAT_8c4a9f14 = _DAT_8c4aa014;
          _DAT_8c4a9f10 = _DAT_8c4a9f08;
          _DAT_8c4a9db8 = 1;
          _DAT_8c4a9f28 = 1;
          *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 2;
          return (undefined1 *)0;
        }
        puVar5 = (undefined4 *)&DAT_8c4a9f24;
      }
      *puVar5 = 0;
    }
  }
  else {
    FUN_8c210cc0(DAT_8c27570c,ar5,ar6,ar7);
  }
  return puVar4;
}

__asm__(".globl _FUN_8c20c416\n.set _FUN_8c20c416, _FUN_8c20c416_def\n");
