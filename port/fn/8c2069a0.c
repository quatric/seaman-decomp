#include "../decls.h"
undefined4 pvr_2069a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar4_00;
  bool bVar2;
  undefined4 ar5_00;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  
  _DAT_a05f6900 = 8;
  _DAT_8c4a9e5c = _DAT_8c4a9e5c | 2;
  _DAT_8c4a9f1c = _DAT_8c4a9f1c + 1;
  if ((_DAT_8c4a9bb0 & 2) == 0) {
    _DAT_8c4aa10c = DAT_8c2756b8 + 1 & 1;
    DAT_8c2756b8 = _DAT_8c4aa10c;
  }
  else {
    _DAT_8c4aa10c = (_DAT_a05f810c & 0x400) >> 10;
  }
  if (((_DAT_8c4a9bcc & 4) == 4) && (_DAT_8c4aa10c == 1)) {
    bVar2 = true;
  }
  else {
    _DAT_8c4a9d8c = _DAT_8c4a9d8c + -1;
    if (_DAT_8c4a9d8c < 0) {
      _DAT_8c4a9d8c = _DAT_8c4a9d90;
      bVar2 = false;
    }
    else if (_DAT_8c4aa0b0 == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
      _DAT_8c4aa0b0 = 0;
    }
  }
  if (!bVar2) {
    uStack_24 = 0;
    ar5_00 = 0;
    if (_DAT_8c4a9f28 == 0) {
      if (_DAT_8c4a9f24 == 0) {
        iStack_28 = 0;
        iStack_30 = 0;
        iStack_2c = 0;
        ar4_00 = 0;
        for (iStack_34 = 0; iStack_34 < 4; iStack_34 = iStack_34 + 1) {
          iVar1 = iStack_34 * 4;
          if ((-1 < *(int *)(&DAT_8c4a9ef8 + iVar1)) &&
             ((*(uint *)(&DAT_8c4a9ef8 + iVar1) & 1) == 0)) {
            if (_DAT_8c4a9dd0 == 0) {
              if (*(int *)(&DAT_8c4a9ef8 + iVar1) == 4) {
                *(undefined4 *)(&DAT_8c4a9ef8 + iVar1) = 5;
                if (_DAT_8c4a9db4 != 0) {
                  _DAT_8c4aa0bc = _DAT_8c4aa0bc + 1;
                }
                _DAT_8c4a9db4 = 0;
                _DAT_a05f8008 = 0;
              }
              else {
                _DAT_8c4aa0b0 = 1;
                uStack_24 = 1;
                if ((*(int *)(&DAT_8c4a9ef8 + iVar1) == 2) &&
                   (_DAT_8c4aa0b8 = _DAT_8c4aa0b8 + 1, _DAT_8c4a9dd4 < _DAT_8c4aa0b8)) {
                  _DAT_8c4aa0c0 = _DAT_8c4aa0c0 + 1;
                  g2dma_202e82(ar4_00,ar5_00,ar6,ar7);
                  *(undefined4 *)(&DAT_8c4a9ef8 + iVar1) = 0xffffffff;
                  _DAT_8c4a9db8 = 0;
                  _DAT_8c4aa0b8 = 0;
                }
              }
            }
            else {
              _DAT_8c4aa0b0 = 1;
              uStack_24 = 1;
              if ((*(int *)(&DAT_8c4a9ef8 + iVar1) == 4) &&
                 (_DAT_8c4aa0b4 = _DAT_8c4aa0b4 + 1, _DAT_8c4a9dd0 < _DAT_8c4aa0b4)) {
                _DAT_8c4aa0bc = _DAT_8c4aa0bc + 1;
                _DAT_a05f8008 = 0;
                _DAT_a05f8044 = _DAT_8c4a9e74;
                FUN_8c25d0a0(_DAT_8c4aa008,_DAT_8c4aa00c,0,1);
                ar6 = 0;
                ar7 = 1;
                ar4_00 = _DAT_8c4aa008;
                ar5_00 = _DAT_8c4aa00c;
                FUN_8c25d0a0(_DAT_8c4aa008,_DAT_8c4aa00c,0,1);
                *(undefined4 *)(&DAT_8c4a9ef8 + iStack_2c) = 5;
                _DAT_8c4a9db4 = 0;
                _DAT_8c4aa104 = _DAT_8c4aa104 + 1;
                _DAT_8c4aa0b4 = 0;
              }
              if ((*(int *)(&DAT_8c4a9ef8 + iStack_30) == 2) &&
                 (_DAT_8c4aa0b8 = _DAT_8c4aa0b8 + 1, _DAT_8c4a9dd4 < _DAT_8c4aa0b8)) {
                _DAT_8c4aa0c0 = _DAT_8c4aa0c0 + 1;
                g2dma_202e82(ar4_00,ar5_00,ar6,ar7);
                *(undefined4 *)(&DAT_8c4a9ef8 + iStack_28) = 0xffffffff;
                _DAT_8c4a9db8 = 0;
                _DAT_8c4aa0b8 = 0;
              }
            }
          }
          iStack_28 = iStack_28 + 4;
          iStack_30 = iStack_30 + 4;
          iStack_2c = iStack_2c + 4;
        }
        uStack_24 = uStack_24 | _DAT_8c4a9db4;
      }
      else {
        _DAT_8c4aa0cc = _DAT_8c4aa0cc + 1;
        ar5_00 = 1;
        if (0x10 < _DAT_8c4aa0cc) {
          _DAT_a05f8048 = _DAT_8c4a9e78;
          _DAT_a05f804c = _DAT_8c4a9e70;
          _DAT_a05f8068 = _DAT_8c4a9e60;
          _DAT_a05f806c = _DAT_8c4a9e64;
          _DAT_8c4a9db4 = 0;
          _DAT_8c4aa0cc = 0;
        }
        uStack_24 = 1;
      }
    }
    else {
      uStack_24 = 1;
    }
    if (uStack_24 == 0) {
      pvr_206350(0,ar5_00,ar6,ar7);
      iVar1 = pvr_206480(uStack_24,ar5_00,ar6,ar7);
      if (iVar1 == 0) {
        return 1;
      }
      pvr_20672a(uStack_24,ar5_00,ar6,ar7);
      _DAT_8c4a9f20 = 0;
    }
  }
  return 0;
}

__asm__(".globl _pvr_2069a0\n.set _pvr_2069a0, _pvr_2069a0_def\n");
