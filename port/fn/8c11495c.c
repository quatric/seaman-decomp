#include "../decls.h"
undefined4 FUN_8c11495c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_r10;
  int iVar3;
  int *unaff_r14;
  undefined4 extraout_fr1;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  float extraout_fr0_02;
  float extraout_fr0_03;
  float extraout_fr0_04;
  float extraout_fr0_05;
  int extraout_fr0_06;
  float extraout_fr0_07;
  float extraout_fr0_08;
  float extraout_fr0_09;
  float in_fr3;
  float fVar4;
  char cVar5;
  
  cVar5 = '\0';
  iVar3 = *unaff_r14;
  *(undefined4 *)(ain0 + (int)unaff_r14) = unaff_r10;
  FUN_8c120550(unaff_r14,ar5,ar6,ar7);
  if (cVar5 == '\0') {
    in_fr3 = 2.1474836e+09;
  }
  fVar4 = extraout_fr0;
  if (in_fr3 < extraout_fr0) {
    fVar4 = extraout_fr0 + -4.2949673e+09;
  }
  unaff_r14[0x53] = (int)fVar4;
  FUN_8c120550(unaff_r14,0x16,ar6,ar7);
  *(char *)((int)unaff_r14 + 0x1e6) = (char)(int)extraout_fr0_00;
  if (*(char *)((int)unaff_r14 + 0x1e6) == '\0') {
    *(char *)(unaff_r14 + 0x1f) = (char)unaff_r10;
  }
  else {
    *(undefined1 *)(unaff_r14 + 0x1f) = 0;
  }
  unaff_r14[10] = *(int *)unaff_r14[3];
  unaff_r14[0xb] = *(int *)unaff_r14[4];
  FUN_8c120550(unaff_r14,0x10,ar6,ar7);
  uVar1 = FUN_8c112a20(unaff_r14,(int)extraout_fr0_01 & 0xffff,ar6,ar7);
  if ((uVar1 & 0xff) == 0) {
    *(char *)(unaff_r14 + 0x55) = (char)unaff_r10;
    FUN_8c120550(unaff_r14,0x11,ar6,ar7);
    *(short *)(unaff_r14 + 0x79) = (short)(int)extraout_fr0_02;
    if (*(ushort *)(unaff_r14 + 0x79) < 0xfde9) {
      if (*(ushort *)(unaff_r14 + 0x79) < 200) {
        *(undefined2 *)(unaff_r14 + 0x79) = 200;
      }
    }
    else {
      *(undefined2 *)(unaff_r14 + 0x79) = 65000;
    }
    FUN_8c120550(unaff_r14,8,ar6,ar7);
    cVar5 = '\0';
    unaff_r14[0x56] = (int)extraout_fr0_03 & 0xffff;
    FUN_8c120550(unaff_r14,5,ar6,ar7);
    if (cVar5 == '\0') {
      fVar4 = 128.0;
    }
    fVar4 = extraout_fr0_04 * fVar4;
    if (2.1474836e+09 < fVar4) {
      fVar4 = fVar4 + -4.2949673e+09;
    }
    unaff_r14[0x5b] = (int)fVar4;
    FUN_8c120550(unaff_r14,6,ar6,ar7);
    cVar5 = '\0';
    *(short *)(unaff_r14 + 0x58) = (short)(int)extraout_fr0_05;
    FUN_8c120550(unaff_r14,7,ar6,ar7);
    if (cVar5 == '\0') {
      unaff_r14[0x59] = extraout_fr0_06;
    }
    else {
      *(ulonglong *)(unaff_r14 + 0x59) = CONCAT44(extraout_fr0_06,extraout_fr1);
    }
    FUN_8c120550(unaff_r14,10,ar6,ar7);
    *(short *)(unaff_r14 + 0x68) = (short)(int)extraout_fr0_07;
    FUN_8c120550(unaff_r14,0xf,ar6,ar7);
    *(short *)((int)unaff_r14 + 0x1be) = (short)(int)extraout_fr0_08;
    iVar3 = (**(code **)(iVar3 + 0x10))(iVar3,0x3c,ar6,ar7);
    unaff_r14[0x3f] = iVar3;
    unaff_r14[0x20] = 0;
    unaff_r14[0x13] = 0;
    FUN_8c120550(unaff_r14,0x18,ar6,ar7);
    *(short *)(unaff_r14 + 0x7a) = (short)(int)extraout_fr0_09;
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11495c\n.set _FUN_8c11495c, _FUN_8c11495c_def\n");
