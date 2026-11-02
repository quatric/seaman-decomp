#include "../decls.h"
undefined4 FUN_8c20bdc0_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 a5;
  undefined4 uVar10;
  uint uStack_74;
  uint *puStack_70;
  uint *puStack_6c;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uStack_60 = 0x80000000;
  uStack_5c = 0;
  uStack_58 = 0x800400;
  uStack_54 = 0;
  uStack_50 = 0xffffffff;
  uStack_4c = 0xffffffff;
  uStack_48 = 0xffffffff;
  uStack_44 = 0xffffffff;
  puVar7 = &uStack_60;
  if (_DAT_8c4a9ef0 == 1) {
    _DAT_ff000038 = 0x10;
    _DAT_ff00003c = 0x10;
    uStack_60 = (_DAT_8c4a9fd0 & 7) << 0x18 | 0x80000000;
    ar6 = 0x20;
    FUN_8c20731e(*(uint *)(_DAT_8c4aa21c + _DAT_8c4a9fd0 * 4) & 0x3ffffff | 0xe0000000,puVar7,0x20,
                 ar7);
    ar5 = puVar7;
  }
  iVar4 = FUN_8c20b708(ar4,ar5,ar6,ar7);
  if (iVar4 != 0) {
    FUN_8c210cc0(DAT_8c27570c,ar5,ar6,ar7);
    return iVar4;
  }
  if ((*(uint *)(ar4 + 0x18) & 0x10) == 0) {
    _DAT_8c4aa114 = (*(uint *)(ar4 + 0xc) & 0xfffffff) >> 2;
  }
  else {
    uVar5 = pvr_20a876(0xe4,ar5,ar6,ar7);
    _DAT_8c4aa114 = (uVar5 & 0x1f) << 3;
  }
  uVar5 = _DAT_8c4a9f08;
  _DAT_8c4aa118 = *(uint *)(ar4 + 0x1c) | 0x1000000;
  puVar7 = (uint *)(_DAT_8c4a9f08 * 4);
  uVar9 = _DAT_8c4a9f08 & 1;
  puStack_6c = puVar7 + -0x1ced5835;
  puStack_70 = puVar7 + -0x1ced5821;
  if (_DAT_8c4a9ef0 == 0) {
    _DAT_8c4a9f1c = 0;
    iVar4 = 0;
    do {
      if (_DAT_8c4a9db8 == 0) goto LAB_8c20bf52;
      (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
    } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd4);
    iVar4 = 1;
LAB_8c20bf52:
    if (iVar4 != 0) {
      _DAT_8c4a9f24 = 0;
      goto override_prt_8c20c05a_7a4d7f16;
    }
  }
  puVar7[-0x1ced5835] = *_DAT_8c4aa218;
  puVar7[-0x1ced5831] = _DAT_8c4aa218[1];
  puVar7[-0x1ced582d] = _DAT_8c4aa218[2];
  puVar7[-0x1ced5829] = _DAT_8c4aa218[3];
  puVar7[-0x1ced5825] = _DAT_8c4aa218[4];
  uStack_74 = 0;
  do {
    iVar4 = uStack_74 * 4;
    iVar8 = *(int *)(_DAT_8c4aa21c + iVar4) - *puStack_6c;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 3;
    }
    *puStack_70 = (iVar8 >> 2) << 2;
    if ((_DAT_8c4a9ef0 == 0) || (uStack_74 != _DAT_8c4a9fd0)) {
      if ((int)uStack_74 < 0) {
        uVar6 = 1 >> (~uStack_74 & 0x1f) + 1;
      }
      else {
        uVar6 = 1 << (uStack_74 & 0x1f);
      }
      if ((uVar6 & _DAT_8c4aa014) != 0) {
        ar6 = 4;
        puVar7 = (uint *)&DAT_8c26d420;
        FUN_8c20731e(*(undefined4 *)(iVar4 + _DAT_8c4aa21c),&DAT_8c26d420,4,ar7);
        *(int *)(iVar4 + _DAT_8c4aa21c) = *(int *)(iVar4 + _DAT_8c4aa21c) + 0x20;
        if (*(uint *)(&DAT_8c4aa070 + iVar4) < *puStack_70) {
          FUN_8c2062c8(2,puVar7,ar6,ar7);
        }
      }
    }
    uVar10 = _DAT_8c4a9d60;
    puStack_70 = puStack_70 + 4;
    puStack_6c = puStack_6c + 4;
    uStack_74 = uStack_74 + 1;
  } while (uStack_74 < 5);
  _DAT_8c4a9f1c = 0;
  bVar1 = false;
  ar5 = puVar7;
  do {
    if (_DAT_8c4a9db4 == 0) goto LAB_8c20c050;
    (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
  } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd0);
  bVar1 = true;
LAB_8c20c050:
  if (!bVar1) {
    _DAT_8c4a9f24 = 1;
    _DAT_8c4a9db8 = 1;
    iVar4 = uVar9 << 5;
    if (_DAT_8c4a9ef0 == 0) {
      pvr_20a844(8,1,ar6,ar7);
      pvr_20a844(8,0,ar6,ar7);
      pvr_20a844(0x124,*(undefined4 *)(iVar4 + -0x73b55fdc),ar6,ar7);
      pvr_20a844(300,*(undefined4 *)(iVar4 + -0x73b55fd8),ar6,ar7);
      pvr_20a844(0x128,*(undefined4 *)(iVar4 + -0x73b55fd0),ar6,ar7);
      pvr_20a844(0x130,*(undefined4 *)(iVar4 + -0x73b55fcc),ar6,ar7);
      pvr_20a844(0x164,*(undefined4 *)(iVar4 + -0x73b55fd4),ar6,ar7);
      ar5 = (uint *)0x80000000;
      pvr_20a844(0x144,0x80000000,ar6,ar7);
      pvr_20a876(0x144,ar5,ar6,ar7);
    }
    _DAT_8c4a9f1c = 0;
    bVar1 = false;
    do {
      if (_DAT_8c4a9db4 == 0) goto LAB_8c20c18e;
      (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
    } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd0);
    bVar1 = true;
LAB_8c20c18e:
    if (bVar1) {
      _DAT_8c4a9f24 = 0;
      FUN_8c210cc0(DAT_8c27570c,ar5,ar6,ar7);
      return 0xfffffffe;
    }
    _DAT_8c4a9f10 = uVar5;
    _DAT_8c4a9f14 = _DAT_8c4aa014;
    _DAT_8c4a9f18 = 0;
    if (_DAT_8c4a9ef0 == 0) {
      uVar5 = 0xff;
    }
    else {
      _DAT_ff000038 = 0x10;
      _DAT_ff00003c = 0x10;
      ar6 = 4;
      ar5 = (uint *)&DAT_8c26d420;
      FUN_8c20731e(*(uint *)(_DAT_8c4aa21c + _DAT_8c4a9fd0 * 4) & 0x3ffffff | 0xe0000000,
                   &DAT_8c26d420,4,ar7);
      uVar5 = _DAT_8c4a9fd0;
    }
    FUN_8c20b160(uVar5,ar5,ar6,ar7,iVar4);
    uVar3 = _DAT_8c4a9e64;
    uVar2 = _DAT_8c4a9e60;
    uVar5 = _DAT_8c4a9bf8;
    if (*(uint *)(ar4 + 0x10) <= _DAT_8c4a9bf8) {
      uVar5 = *(uint *)(ar4 + 0x10) - 1;
    }
    a5 = 0;
    uVar9 = _DAT_8c4a9bf4;
    if (*(uint *)(ar4 + 0xc) <= _DAT_8c4a9bf4) {
      uVar9 = *(uint *)(ar4 + 0xc) - 1;
    }
    FUN_8c20a482(0,0,uVar9,uVar5);
    _DAT_8c4aa11c = _DAT_8c4a9e60;
    _DAT_8c4aa120 = _DAT_8c4a9e64;
    _DAT_8c4a9e60 = uVar2;
    _DAT_8c4a9e64 = uVar3;
    FUN_8c20b5a0(&DAT_8c4aa110,a5,uVar9,uVar5);
    _DAT_8c4a9d60 = uVar10;
    FUN_8c210cc0(DAT_8c27570c,a5,uVar9,uVar5);
    if (_DAT_8c4a9ef0 == 1) {
      _DAT_8c4a9f1c = 0;
      bVar1 = false;
      do {
        if (_DAT_8c4a9db4 == 0) goto LAB_8c20c350;
        (*_DAT_8c4a9e14)(_DAT_8c4a9e18,a5,uVar9,uVar5);
      } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd0);
      bVar1 = true;
LAB_8c20c350:
      if (bVar1) {
        _DAT_8c4a9f24 = 0;
        return 0xfffffffd;
      }
      pvr_20a844(8,1,uVar9,uVar5);
      pvr_20a844(8,0,uVar9,uVar5);
      pvr_20a844(0x124,*(undefined4 *)(iVar4 + -0x73b55fdc),uVar9,uVar5);
      pvr_20a844(300,*(undefined4 *)(iVar4 + -0x73b55fd8),uVar9,uVar5);
      pvr_20a844(0x128,*(undefined4 *)(iVar4 + -0x73b55fd0),uVar9,uVar5);
      pvr_20a844(0x130,*(undefined4 *)(iVar4 + -0x73b55fcc),uVar9,uVar5);
      pvr_20a844(0x164,*(undefined4 *)(iVar4 + -0x73b55fd4),uVar9,uVar5);
      uVar10 = 0x80000000;
      pvr_20a844(0x144,0x80000000,uVar9,uVar5);
      pvr_20a876(0x144,uVar10,uVar9,uVar5);
    }
    DAT_8c275710 = 0;
    _DAT_8c4a9e30 = &stack0xffffff88;
    return 0;
  }
override_prt_8c20c05a_7a4d7f16:
  _DAT_8c4a9db8 = 0;
  FUN_8c210cc0(DAT_8c27570c,ar5,ar6,ar7);
  return 0xffffffff;
}

__asm__(".globl _FUN_8c20bdc0\n.set _FUN_8c20bdc0, _FUN_8c20bdc0_def\n");
