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
undefined4 FUN_8c114be0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c114be0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 a5;
  int unaff_r13 = 0;
  int unaff_r14 = 0;
  undefined4 extraout_fr1 = 0;
  float extraout_fr0 = 0;
  undefined1 uVar5;
  byte in_FPSCR_CAUSE = 0;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte in_FPSCR_DN = 0;
  byte bVar9;
  byte bVar10;
  byte in_FPSCR_PR = 0;
  
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x2c))))(ar5,ar5,ar6,ar7));
  *(short *)(unsigned)(0xdc + unaff_r13) = (short)uVar2;
  bVar6 = 0;
  bVar8 = 0;
  bVar10 = (byte)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                   (uint)in_FPSCR_PR << 0x13) & 0xffe7ffff & 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x30))))(unaff_r14,ar5,ar6,ar7));
  *(short *)(unsigned)(0xde + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar6 << 0xc | (uint)bVar8 << 0x12 | (uint)bVar10 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x34))))(unaff_r14,ar5,ar6,ar7));
  *(short *)(unsigned)(0xe0 + unaff_r13) = (short)uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x38))))(unaff_r14,ar5,ar6,ar7));
  *(short *)(unsigned)(0xe2 + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x34))))(unaff_r14,ar5,ar6,ar7));
  *(short *)(unsigned)(0x1c6 + unaff_r13) = (short)uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x20))))(unaff_r14,ar5,ar6,ar7));
  *(short *)(unsigned)(0xe4 + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x44))))(unaff_r14,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0xf4 + unaff_r13) = uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x48))))(unaff_r14,ar5,ar6,ar7));
  *(short *)(unsigned)(0xe6 + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x88 + unaff_r14))))(unaff_r14,ar5,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c120550);
  a5 = 0x15;
  *(undefined4 *)(unsigned)(0xe8 + unaff_r13) = uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r13,0x15,ar6,ar7));
  iVar3 = (int)0xf8;
  if ((char)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
             0x80000) >> 0x13) == '\0') {
    uVar5 = (undefined1)(int)extraout_fr0;
  }
  else {
    uVar5 = (undefined1)(int)CONCAT44D(extraout_fr0,extraout_fr1);
  }
  *(undefined1 *)(unsigned)(iVar3 + unaff_r13) = uVar5;
  if (*(char *)(unsigned)(iVar3 + unaff_r13) != '\0') {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x8c + unaff_r14))))(unaff_r14,a5,ar6,ar7));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xcc + unaff_r14))))(uVar2,a5,ar6,ar7));
    *(undefined4 *)(unsigned)(0xec + unaff_r13) = uVar4;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xd0 + unaff_r14))))(uVar2,a5,ar6,ar7));
    *(undefined4 *)(unsigned)(0xf0 + unaff_r13) = uVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c114be0\n.set _FUN_8c114be0, _FUN_8c114be0_def\n");
