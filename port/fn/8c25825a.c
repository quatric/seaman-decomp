#include "../decls.h"
undefined4 pvr_25825a_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *ar5_01;
  undefined4 uVar5;
  undefined8 in_dr2;
  double dVar6;
  undefined4 in_fr5;
  double dVar7;
  undefined4 in_xf12;
  undefined8 in_xd14;
  bool bVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  
  uVar5 = (undefined4)((ulonglong)in_dr2 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  ar5_01 = &DAT_8c4aa4a8;
  uVar3 = 0x44200000;
  if ((ar4 & 0x10) == 0) {
    _DAT_8c4aa508 = 0x140;
    _DAT_8c4aa4ac = 0x43a00000;
  }
  else {
    _DAT_8c4aa508 = 0x280;
    _DAT_8c4aa4ac = 0x44200000;
  }
  dVar7 = 7.205761227476173e+16;
  if ((ar4 & 0x20) == 0) {
    _DAT_8c4aa50c = 0xf0;
    _DAT_8c4aa4b0 = 0x43700000;
  }
  else {
    _DAT_8c4aa50c = 0x1e0;
    _DAT_8c4aa4b0 = 0x43f00000;
  }
  _DAT_8c4aa4e4 = ar4;
  _DAT_8c4aa4e8 = ar5;
  _DAT_8c4aa4ec = ar6;
  iVar11 = ar5;
  if ((ar4 & 3) == 1) {
    pvr_2580e4(ar4,ar5,ar6,ar7,ar5);
    aica_reg_258104(0,ar5,ar6,ar7);
    _DAT_8c4aa4ac = in_xf12;
    if (cVar10 == '\0') {
      _DAT_8c4aa4ac = uVar3;
    }
    _DAT_8c4aa508 = 0x280;
    if (cVar10 == '\0') {
      _DAT_8c4aa4b0 = SUB84(dVar7,0);
    }
    else {
      _DAT_8c4aa4b0 = (undefined4)in_xd14;
      _DAT_8c4aa4b4 = (undefined4)((ulonglong)in_xd14 >> 0x20);
    }
    _DAT_8c4aa50c = 0x1e0;
  }
  else {
    uVar4 = ar4;
    iVar1 = FUN_8c1f7ea8(ar4,ar5,ar6,ar7);
    pvr_2580e4(uVar4,ar5,ar6,ar7,iVar11);
    if (iVar1 == 2) {
      uVar3 = 0x200;
    }
    else if (iVar1 == 3) {
      uVar3 = 0x300;
    }
    else if (iVar1 == 1) {
      uVar3 = 0x100;
    }
    else {
      uVar3 = 0x300;
    }
    aica_reg_258104(uVar3,ar5,ar6,ar7);
  }
  if ((ar4 & 0x10000) == 0) {
    uVar5 = 0;
  }
  else {
    if (cVar9 == '\0') {
      uVar5 = 0x40000000;
    }
    else {
      uVar5 = SUB84((double)CONCAT44(uVar5,0x3f800000) + (double)CONCAT44(uVar5,0x3f800000),0);
    }
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44(_DAT_8c4aa4ac,uVar5);
    }
    else {
      dVar6 = (double)CONCAT44(_DAT_8c4aa4b0,_DAT_8c4aa4ac);
    }
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * SUB84(dVar6,0),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 * dVar6;
    }
    _DAT_8c4aa4ac = SUB84(dVar6,0);
    uVar5 = (undefined4)((ulonglong)dVar6 >> 0x20);
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44(_DAT_8c4aa4b0,_DAT_8c4aa4ac);
      _DAT_8c4aa4ac = uVar5;
    }
    else {
      dVar6 = (double)CONCAT44(_DAT_8c4aa4b4,uVar5);
      _DAT_8c4aa4b0 = uVar5;
    }
    if (cVar9 == '\0') {
      bVar8 = (float)((ulonglong)dVar6 >> 0x20) == (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      bVar8 = dVar6 == dVar7;
    }
    uVar5 = 1;
    if (bVar8) {
      if (cVar10 == '\0') {
        _DAT_8c4aa4b0 = SUB84(dVar7,0);
      }
      else {
        _DAT_8c4aa4b0 = (undefined4)in_xd14;
        _DAT_8c4aa4b4 = (undefined4)((ulonglong)in_xd14 >> 0x20);
      }
    }
  }
  if (iVar11 == 0) {
    ar5_01 = (undefined1 *)0x0;
  }
  else if (iVar11 == 1) {
    ar5_01 = (undefined1 *)0x1;
  }
  else if (iVar11 == 3) {
    ar5_01 = (undefined1 *)0x3;
  }
  else if (iVar11 == 4) {
    ar5_01 = (undefined1 *)0x4;
  }
  else if (iVar11 == 5) {
    ar5_01 = (undefined1 *)0x5;
  }
  _DAT_a05f80e8 = _DAT_a05f80e8 | 8;
  _DAT_a05f6900 = 8;
  s_KAMUI_207a0e(ar4 & 3,&DAT_a05f6900,ar6,ar7);
  if ((ar4 & 0x40) != 0) {
    uVar4 = ar4 & 0xe0000;
    _DAT_8c4aa6e0 = (int)(short)((int)uVar4 >> 0x11);
    FUN_8c2078d8(FUN_8c258252,0,ar6,ar7);
    if (_DAT_8c4aa50c == 0xf0) {
      if (uVar4 == 0) {
        _DAT_8c4aa50c = 0xf8;
      }
      else if (uVar4 == 0x20000) {
        _DAT_8c4aa50c = 0x100;
      }
      else if (uVar4 == 0x40000) {
        _DAT_8c4aa50c = 0x108;
      }
      else if (uVar4 == 0x60000) {
        _DAT_8c4aa50c = 0x110;
      }
      else if (uVar4 == 0x80000) {
        _DAT_8c4aa50c = 0x118;
      }
    }
    else if (uVar4 == 0) {
      _DAT_8c4aa50c = 0x1f0;
    }
    else if (uVar4 == 0x20000) {
      _DAT_8c4aa50c = 0x200;
    }
    else if (uVar4 == 0x40000) {
      _DAT_8c4aa50c = 0x210;
    }
    else if (uVar4 == 0x60000) {
      _DAT_8c4aa50c = 0x220;
    }
    else if (uVar4 == 0x80000) {
      _DAT_8c4aa50c = 0x230;
    }
  }
  uVar3 = 1;
  s_DisplayMode_207aaa(ar4 & 0xfff,ar5_01,1,uVar5);
  _DAT_8c4aacbc = 0x60;
  _DAT_8c4aacc0 = 1;
  _DAT_8c4aad1c = 0x8c4aa6e4;
  _DAT_8c4aad20 = 0x8c4aa70c;
  _DAT_8c4aacc4 = &DAT_8c4aad1c;
  _DAT_8c4aaccc = 0;
  _DAT_8c4aacd0 = 0;
  _DAT_8c4aacd8 = DAT_8c277ac8;
  DAT_8c277b2c = 0;
  _DAT_8c4aacdc = &DAT_8c4aabdc;
  _DAT_8c4aace0 = 0;
  _DAT_8c4aace4 = 0;
  if (cVar10 == '\0') {
    _DAT_8c4aacf8 = 0;
  }
  else {
    (*(uint *)0x8c4aacfc) = 0;
    _DAT_8c4aacf8 = in_fr5;
  }
  _DAT_8c4aa6dc = 0;
  _DAT_8c4aa6d4 = 0;
  _DAT_8c4aa6d8 = 1;
  _DAT_8c4aa558 = 0;
  _DAT_8c4aace8 = _DAT_8c4aacf8;
  _DAT_8c4aacec = _DAT_8c4aacf8;
  _DAT_8c4aacf0 = _DAT_8c4aacf8;
  _DAT_8c4aacf4 = _DAT_8c4aacf8;
  FUN_8c20757e(FUN_8c258096,0,uVar3,uVar5);
  ar5_00 = 0;
  FUN_8c20786a(FUN_8c2580b8,0,uVar3,uVar5);
  FUN_8c2078be(FUN_8c2580c0,ar5_00,uVar3,uVar5);
  uVar2 = _DAT_8c4aa4ec;
  FUN_8c20a786(_DAT_8c4aa4ec,ar5_00,uVar3,uVar5);
  uVar2 = FUN_8c2588f8(uVar2,ar5_00,uVar3,uVar5);
  if ((_DAT_a05f689c & 0xff) < 10) {
    FUN_8c259a1c(0xffff6600,ar5_00,uVar3,uVar5);
                    
                    
    uVar5 = (*DAT_8c277c70)();
    return uVar5;
  }
  return uVar2;
}

__asm__(".globl _pvr_25825a\n.set _pvr_25825a, _pvr_25825a_def\n");
