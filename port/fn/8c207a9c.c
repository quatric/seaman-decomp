#include "../decls.h"
int s_DisplayMode_207aaa_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *a5;
  undefined4 ar7_00;
  uint uVar4;
  int iVar5;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_24;
  
  iVar5 = 0;
  ar7_00 = ar7;
  FUN_8c21214e(ar4,ar5,ar6,ar7);
  uVar1 = s_HARDWARE_205e00(s_KAMUI_8c26d3a8,s_DisplayMode_8c26d3bc,ar4,ar7_00);
  iVar2 = s_HARDWARE_205e00(s_KAMUI_8c26d3a8,s_AntiAlias_8c26d3c8,ar7,ar7_00);
  a5 = s_Dither_8c26d3d4;
  iVar3 = s_HARDWARE_205e00(s_KAMUI_8c26d3a8,s_Dither_8c26d3d4,ar6,ar7_00);
  _DAT_8c4a9bc8 = uVar1 & 3;
  if ((uVar1 & 0x42) == 0x42) {
    uStack_28 = uVar1;
    (*_DAT_8c4a9e24)(&uStack_28,a5,ar6,ar7_00);
    _DAT_8c4a9bdc = iStack_24;
    if ((iStack_24 < 0) || (4 < iStack_24)) {
      _DAT_8c4a9bdc = 1;
    }
  }
  if ((((ar5 != 5) && (ar5 != 4)) && (ar5 != 3)) && ((ar5 != 1 && (ar5 != 0)))) {
    iVar5 = 1;
  }
  uVar4 = (uint)(iVar2 != 0);
  uStack_34 = (uint)(iVar3 != 0);
  if (iVar5 == 0) {
    _DAT_8c4a9bd4 = uStack_34;
    if (uVar1 == 1) {
      iVar2 = 0x1e0;
      uStack_2c = 0x280;
      uStack_30 = 0;
      _DAT_8c4a9ecc = 0x1e0;
    }
    else {
      if (((uVar1 & 1) == 1) || ((uVar1 & 0x2c) == 0)) {
        uStack_30 = 0;
      }
      else {
        uStack_30 = 1;
      }
      if ((uVar1 & 0x10) == 0) {
        uStack_2c = 0x140;
      }
      else {
        uStack_2c = 0x280;
      }
      if ((uVar1 & 0x20) == 0) {
        if ((uVar1 & 0x42) == 0x42) {
          iVar2 = (int)(*(int *)(&DAT_8c4aa084 + _DAT_8c4a9bdc * 4) +
                       (uint)(*(int *)(&DAT_8c4aa084 + _DAT_8c4a9bdc * 4) < 0)) >> 1;
          _DAT_8c4a9ecc = iVar2;
        }
        else {
          iVar2 = 0xf0;
          _DAT_8c4a9ecc = iVar2;
        }
      }
      else {
        if ((uVar1 & 0x42) == 0x42) {
          iVar2 = *(int *)(&DAT_8c4aa084 + _DAT_8c4a9bdc * 4);
        }
        else {
          iVar2 = 0x1e0;
        }
        _DAT_8c4a9ecc = (int)(iVar2 + (uint)(iVar2 < 0)) >> 1;
      }
    }
    _DAT_8c4a9bcc = uVar1;
    _DAT_8c4a9bd0 = ar5;
    _DAT_8c4a9bd8 = uVar4;
    if (_DAT_8c4a9bc8 == 1) {
      iVar5 = 0;
      FUN_8c25eb60(0x280,0x1e0,ar6,ar7_00);
    }
    else if (_DAT_8c4a9bc8 == 0) {
      iVar5 = 0;
      FUN_8c25e884(0x280,0x1e0,ar6,ar7_00);
    }
    else if (_DAT_8c4a9bc8 == 2) {
      iVar5 = 0;
      FUN_8c25e540(0x280,0x1e0,ar6,ar7_00);
    }
    else {
      iVar5 = 1;
    }
    FUN_8c25dc60(uStack_2c,iVar2,ar5,uStack_30);
    FUN_8c2079a0(uStack_2c,iVar2,ar5,uStack_30);
  }
  return iVar5;
}

__asm__(".globl _s_DisplayMode_207aaa\n.set _s_DisplayMode_207aaa, _s_DisplayMode_207aaa_def\n");
