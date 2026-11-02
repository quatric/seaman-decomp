#include "../decls.h"
undefined4 FUN_8c25dc60_def(int ar4,uint ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint d;
  undefined4 a6;
  undefined4 ar7_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  int n;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  undefined4 in_stack_fffffea8;
  undefined4 in_stack_fffffeac;
  int iStack_e4;
  int iStack_dc;
  int iStack_d8;
  undefined4 auStack_d4 [4];
  undefined4 uStack_c4;
  undefined4 auStack_c0 [4];
  undefined4 uStack_b0;
  int aiStack_ac [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  uint uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  aiStack_ac[0] = DAT_8c271fd0;
  aiStack_ac[1] = DAT_8c271fd4;
  aiStack_ac[2] = DAT_8c271fd8;
  aiStack_ac[3] = DAT_8c271fdc;
  uStack_9c = DAT_8c271fe0;
  uStack_98 = DAT_8c271fe4;
  auStack_c0[0] = DAT_8c271fe8;
  auStack_c0[1] = DAT_8c271fec;
  auStack_c0[2] = DAT_8c271ff0;
  auStack_c0[3] = DAT_8c271ff4;
  uStack_b0 = DAT_8c271ff8;
  auStack_d4[0] = DAT_8c271ffc;
  auStack_d4[1] = DAT_8c272000;
  auStack_d4[2] = DAT_8c272004;
  auStack_d4[3] = DAT_8c272008;
  uStack_c4 = DAT_8c27200c;
  iVar6 = aiStack_ac[ar6];
  _DAT_8c4a9bf8 = ar5;
  if (((_DAT_8c4a9bcc & 1) != 1) && ((_DAT_8c4a9bcc & 0x2c) == 0x20)) {
    _DAT_8c4a9bf8 = ar5 >> 1;
  }
  if ((in_stack_00000004 == 0) || ((_DAT_8c4a9bcc & 0x20) != 0)) {
    iStack_dc = 1;
  }
  else {
    iStack_dc = 2;
  }
  uStack_74 = 1;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_54 = 0;
  uStack_24 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  if ((_DAT_8c4a9bcc & 1) == 0) {
    uStack_28 = 0;
    if (ar7 == 1) {
      iVar5 = 2;
      goto LAB_8c25dd8c;
    }
    iStack_d8 = 1;
    iVar5 = 1;
  }
  else {
    uStack_28 = 1;
    iVar5 = 1;
LAB_8c25dd8c:
    iStack_d8 = 0;
  }
  if (iVar6 != 0x10) {
    if (iVar6 == 0x18) {
      uStack_64 = 4;
      uStack_58 = 2;
    }
    else {
      if (iVar6 != 0x20) goto LAB_8c25dde8;
      uStack_64 = 6;
      uStack_58 = 3;
    }
    uStack_68 = 0;
    goto LAB_8c25dde8;
  }
  if (ar6 == 3) {
    uStack_64 = 3;
LAB_8c25ddc4:
    uStack_58 = 0;
  }
  else if (ar6 == 0) {
    uStack_64 = 1;
    uStack_58 = 1;
  }
  else {
    if (ar6 == 1) {
      uStack_64 = 0;
      goto LAB_8c25ddc4;
    }
    uStack_64 = 1;
    uStack_58 = 1;
  }
  uStack_68 = in_stack_00000000;
LAB_8c25dde8:
  n = ar4 * iVar6;
  uStack_6c = 0;
  uStack_78 = 0;
  iStack_50 = n;
  if (n < 0) {
    iStack_50 = n + 0x3f;
  }
  iStack_50 = iStack_50 >> 6;
  d = 0x20;
  _DAT_8c4a9bf4 = ar4;
  iStack_70 = ar7;
  iVar1 = libgcc_divide_helper_010468(n,0x20);
  uVar4 = (int)(ar5 + ((int)ar5 < 0)) >> 1;
  iStack_94 = iVar1 + -1;
  iVar1 = iVar6;
  if (iVar6 < 0) {
    iVar1 = iVar6 + 7;
  }
  iVar1 = (iVar1 >> 3) * ar4;
  uStack_90 = uVar4;
  if (ar7 == 1) {
    if ((_DAT_8c4a9bcc & d) == 0) {
      _DAT_8c4a9dc4 = 0;
      iStack_8c = 1;
      _DAT_8c4a9dc8 = iVar1;
      uStack_90 = ar5;
    }
    else {
      iVar2 = libgcc_divide_helper_010468(n,d);
      iStack_8c = iVar2 + 1;
      _DAT_8c4a9dc4 = 0;
      _DAT_8c4a9dc8 = iVar1;
    }
  }
  else if ((_DAT_8c4a9bcc & 1) == 0) {
    if ((_DAT_8c4a9bcc & d) == 0) {
      _DAT_8c4a9dc4 = 0;
      iStack_8c = 1;
      _DAT_8c4a9dc8 = iVar1;
      uStack_90 = ar5;
    }
    else {
      _DAT_8c4a9dc4 = 0;
      _DAT_8c4a9dc8 = iVar1;
      iVar1 = libgcc_divide_helper_010468(n,d);
      iStack_8c = iVar1 + 1;
    }
  }
  else {
    _DAT_8c4a9dc4 = 0;
    iStack_8c = 1;
    _DAT_8c4a9dc8 = iVar1;
    uStack_90 = ar5;
  }
  uVar3 = uStack_90;
  uStack_90 = uStack_90 - 1;
  ar7_00 = 0x42;
  if (in_stack_00000004 == 0) {
    uStack_88 = 0;
    if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) != 0x20)) {
      if ((_DAT_8c4a9bcc & 1) == 0) {
        if ((_DAT_8c4a9bcc & d) == 0) {
          if ((_DAT_8c4a9bcc & 0x42) == 0x42) {
            uStack_84 = auStack_c0[_DAT_8c4a9bdc];
            uStack_90 = uVar3 - 2;
          }
          else {
            uStack_84 = 0x400;
          }
        }
        else {
          if ((_DAT_8c4a9bcc & 0x42) == 0x42) {
            uStack_84 = auStack_c0[_DAT_8c4a9bdc];
          }
          else {
            uStack_84 = 0x401;
          }
          uStack_90 = uVar3 - 2;
        }
      }
      else {
        uStack_84 = 0x400;
      }
    }
    else {
      if ((_DAT_8c4a9bcc & 0x42) == 0x42) {
        uStack_84 = auStack_d4[_DAT_8c4a9bdc];
      }
      else {
        uStack_84 = 0x800;
      }
      _DAT_8c4a9dc4 = 0;
      _DAT_8c4a9dc8 = 0;
      iStack_8c = 1;
      uStack_90 = uVar3 - 2;
    }
    iStack_e4 = 1;
  }
  else {
    _DAT_8c4a9c14 = _DAT_8c4a9c14 | 1;
    uStack_88 = 1;
    iStack_e4 = 2;
    uStack_90 = uVar3 - 2;
    if ((_DAT_8c4a9bcc & 1) == 0) {
      uVar3 = _DAT_8c4a9bcc & 0xffffffec;
      if ((((uVar3 == 100) || (uVar3 == 0x68)) || (uVar3 == 0x24)) || (uVar3 == 0x28)) {
        if ((_DAT_8c4a9bcc & 0x42) == 0x42) {
          uStack_84 = auStack_c0[_DAT_8c4a9bdc];
        }
        else {
          uStack_84 = 0x401;
        }
        iStack_8c = libgcc_divide_helper_010468(n,d);
        iStack_8c = iStack_8c + 1;
      }
      else if ((((uVar3 == 0x60) || (uVar3 == 0x40)) ||
               ((uVar3 == 0x44 || ((uVar3 == 0x20 || (uVar3 == 0)))))) || (uVar3 == 4)) {
        _DAT_8c4a9dc4 = 0;
        _DAT_8c4a9dc8 = 0;
        if ((_DAT_8c4a9bcc & 0x42) == 0x42) {
          uStack_84 = auStack_d4[_DAT_8c4a9bdc];
        }
        else {
          uStack_84 = 0x800;
        }
        iStack_8c = 1;
      }
    }
    else {
      uStack_84 = 0x401;
    }
  }
  uStack_80 = 0x40;
  uStack_7c = 0x80;
  _DAT_8c4aa008 = libgcc_divide_helper_010468(ar4,d);
  _DAT_8c4aa008 = _DAT_8c4aa008 * iStack_e4;
  iVar5 = libgcc_divide_helper_010468(ar5 * iVar5 * iStack_dc,d);
  _DAT_8c4aa00c = iVar5 + iStack_d8;
  a6 = 0xf;
  if (0xf < _DAT_8c4aa00c) {
    _DAT_8c4aa00c = 0xf;
  }
  uStack_48 = 9;
  uStack_4c = 6;
  if (iVar6 == 0x10) {
    uStack_44 = 8;
  }
  else {
    uStack_44 = 0xb;
  }
  uStack_3c = 0;
  iVar6 = ar4 + -1;
  uStack_34 = 0;
  if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) != 0x20)) {
    ar5 = ar5 - 1;
    uStack_38 = ar5;
  }
  else {
    uStack_38 = uVar4 - 1;
  }
  iStack_40 = iVar6;
  FUN_8c010838(iVar6,ar5,0xf,ar7_00,in_stack_fffffea8,in_stack_fffffeac);
  FUN_8c25dac0(iVar6,ar5,a6,ar7_00);
  _DAT_8c4a9be8 = 0;
  _DAT_8c4a9be4 = 0;
  return 0;
}

__asm__(".globl _FUN_8c25dc60\n.set _FUN_8c25dc60, _FUN_8c25dc60_def\n");
