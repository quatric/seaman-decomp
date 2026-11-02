#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11495c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11495c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_r10 = 0;
  int iVar3;
  int *unaff_r14 = 0;
  undefined4 extraout_fr1 = 0;
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  float extraout_fr0_01 = 0;
  float extraout_fr0_02 = 0;
  float extraout_fr0_03 = 0;
  float extraout_fr0_04 = 0;
  float extraout_fr0_05 = 0;
  int extraout_fr0_06 = 0;
  float extraout_fr0_07 = 0;
  float extraout_fr0_08 = 0;
  float extraout_fr0_09 = 0;
  float in_fr3 = 0;
  float fVar4;
  char cVar5;
  
  cVar5 = '\0';
  iVar3 = *unaff_r14;
  *(undefined4 *)(unsigned)(ain0 + (int)unaff_r14) = unaff_r10;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,ar5,ar6,ar7));
  if (cVar5 == '\0') {
    in_fr3 = 2.1474836e+09;
  }
  fVar4 = extraout_fr0;
  if (in_fr3 < extraout_fr0) {
    fVar4 = extraout_fr0 + -4.2949673e+09;
  }
  unaff_r14[0x53] = (int)fVar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0x16,ar6,ar7));
  *(char *)(unsigned)((int)unaff_r14 + 0x1e6) = (char)(int)extraout_fr0_00;
  if (*(char *)(unsigned)((int)unaff_r14 + 0x1e6) == '\0') {
    *(char *)(unsigned)(unaff_r14 + 0x1f) = (char)unaff_r10;
  }
  else {
    *(undefined1 *)(unsigned)(unaff_r14 + 0x1f) = 0;
  }
  unaff_r14[10] = *(int *)(unsigned)unaff_r14[3];
  unaff_r14[0xb] = *(int *)(unsigned)unaff_r14[4];
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0x10,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112a20(unaff_r14,(int)extraout_fr0_01 & 0xffff,ar6,ar7));
  if ((uVar1 & 0xff) == 0) {
    *(char *)(unsigned)(unaff_r14 + 0x55) = (char)unaff_r10;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0x11,ar6,ar7));
    *(short *)(unsigned)(unaff_r14 + 0x79) = (short)(int)extraout_fr0_02;
    if (*(ushort *)(unsigned)(unaff_r14 + 0x79) < 0xfde9) {
      if (*(ushort *)(unsigned)(unaff_r14 + 0x79) < 200) {
        *(undefined2 *)(unsigned)(unaff_r14 + 0x79) = 200;
      }
    }
    else {
      *(undefined2 *)(unsigned)(unaff_r14 + 0x79) = 65000;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,8,ar6,ar7));
    cVar5 = '\0';
    unaff_r14[0x56] = (int)extraout_fr0_03 & 0xffff;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,5,ar6,ar7));
    if (cVar5 == '\0') {
      fVar4 = 128.0;
    }
    fVar4 = extraout_fr0_04 * fVar4;
    if (2.1474836e+09 < fVar4) {
      fVar4 = fVar4 + -4.2949673e+09;
    }
    unaff_r14[0x5b] = (int)fVar4;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,6,ar6,ar7));
    cVar5 = '\0';
    *(short *)(unsigned)(unaff_r14 + 0x58) = (short)(int)extraout_fr0_05;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,7,ar6,ar7));
    if (cVar5 == '\0') {
      unaff_r14[0x59] = extraout_fr0_06;
    }
    else {
      *(ulonglong *)(unsigned)(unaff_r14 + 0x59) = CONCAT44(extraout_fr0_06,extraout_fr1);
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,10,ar6,ar7));
    *(short *)(unsigned)(unaff_r14 + 0x68) = (short)(int)extraout_fr0_07;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0xf,ar6,ar7));
    *(short *)(unsigned)((int)unaff_r14 + 0x1be) = (short)(int)extraout_fr0_08;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x10))))(iVar3,0x3c,ar6,ar7));
    unaff_r14[0x3f] = iVar3;
    unaff_r14[0x20] = 0;
    unaff_r14[0x13] = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0x18,ar6,ar7));
    *(short *)(unsigned)(unaff_r14 + 0x7a) = (short)(int)extraout_fr0_09;
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11495c\n.set _FUN_8c11495c, _FUN_8c11495c_def\n");
