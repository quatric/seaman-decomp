#include "../decls.h"
undefined4 FUN_8c25e540_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  undefined4 ar6_00;
  undefined4 a7;
  bool bVar2;
  undefined4 in_stack_fffffdec;
  undefined4 in_stack_fffffdf0;
  int aiStack_118 [13];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  aiStack_118[7] = 0x35f;
  aiStack_118[5] = 0x8d;
  aiStack_118[6] = 0x34b;
  uVar1 = 1;
  aiStack_118[0xb] = 0x3f;
  if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
    aiStack_118[10] = 0x138;
  }
  else {
    aiStack_118[10] = 0x270;
  }
  a7 = 0x42;
  ar6_00 = 0x16;
  if ((_DAT_8c4a9bcc & 0x42) == 0x42) {
    if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
      aiStack_118[8] = 0x16;
      aiStack_118[9] = 0x134;
    }
    else {
      aiStack_118[8] = 0x2c;
      aiStack_118[9] = 0x26c;
    }
    if ((_DAT_8c4a9bcc & 0x20) == 0) {
      uStack_90 = 0x136;
    }
    else {
      uStack_90 = 0x134;
    }
  }
  else {
    if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
      aiStack_118[8] = 0x16;
      aiStack_118[9] = 0x134;
    }
    else {
      aiStack_118[8] = 0x2c;
      aiStack_118[9] = 0x26c;
    }
    if ((_DAT_8c4a9bcc & 0x20) == 0) {
      uStack_90 = 0x136;
    }
    else {
      uStack_90 = 0x134;
    }
  }
  uStack_8c = 0x15;
  if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
    aiStack_118[0xc] = 3;
    uStack_e4 = 799;
    uStack_e0 = 0xf;
  }
  else {
    uStack_e4 = 0x16a;
    uStack_e0 = 0x1f;
    aiStack_118[0xc] = 5;
  }
  if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
    uStack_d4 = 0;
  }
  else {
    uStack_d4 = 1;
  }
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
    uStack_c0 = 2;
  }
  else {
    uStack_c0 = 0;
  }
  if (_DAT_8c4a9bac == 6) {
    uStack_94 = 0x16;
  }
  else {
    uStack_94 = 0x3f;
  }
  bVar2 = (_DAT_8c4a9bcc & 0x10) == 0;
  if (bVar2) {
    uStack_98 = 1;
  }
  else {
    uStack_98 = 0;
  }
  uStack_98 = (uint)bVar2;
  uStack_dc = 0;
  uStack_d8 = 1;
  uStack_bc = 1;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  ar5_00 = 0xf0;
  uStack_a0 = 0xf0;
  uStack_c = 0xae;
  if ((_DAT_8c4a9bcc & 0x42) == 0x42) {
    aiStack_118[0] = 0x2a;
    aiStack_118[1] = 0x26;
    aiStack_118[2] = 0x22;
    aiStack_118[3] = 0x1e;
    aiStack_118[4] = 0x1a;
    iStack_10 = aiStack_118[_DAT_8c4a9bdc];
    ar5_00 = iStack_10;
    if (((_DAT_8c4a9bcc & 1) != 1) && ((_DAT_8c4a9bcc & 0x2c) != 0)) {
      ar5_00 = iStack_10 + -1;
    }
    _DAT_8c4a9ecc =
         (int)(*(int *)(&DAT_8c4aa084 + _DAT_8c4a9bdc * 4) +
              (uint)(*(int *)(&DAT_8c4aa084 + _DAT_8c4a9bdc * 4) < 0)) >> 1;
    iStack_14 = ar5_00;
  }
  else {
    ar6_00 = 0x2e;
    if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
      iStack_14 = 0x2e;
    }
    else {
      iStack_14 = 0x2d;
    }
    iStack_10 = 0x2e;
    _DAT_8c4a9ecc = 0xf0;
  }
  _DAT_8c4a9ec4 = (aiStack_118[8] >> 1) + _DAT_8c4a9ecc;
  _DAT_8c4a9ec8 = aiStack_118[8];
  FUN_8c010838(1,ar5_00,ar6_00,0x42,in_stack_fffffdec,in_stack_fffffdf0);
  uVar1 = FUN_8c25e260(uVar1,ar5_00,ar6_00,a7);
  return uVar1;
}

__asm__(".globl _FUN_8c25e540\n.set _FUN_8c25e540, _FUN_8c25e540_def\n");
