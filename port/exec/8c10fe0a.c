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
undefined4 FUN_8c10fe0a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10fe0a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r14 = 0;
  float fVar4;
  byte in_FPSCR_CAUSE = 0;
  byte bVar5;
  byte in_FPSCR_DN = 0;
  byte bVar6;
  byte in_FPSCR_PR = 0;
  byte bVar7;
  byte in_FPSCR_SZ = 0;
  byte bVar8;
  
  if (*(int *)(unsigned)(in_r0 + unaff_r14) == 0) {
    return in_r0;
  }
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  bVar5 = 0;
  bVar6 = 0;
  bVar7 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar8 = (byte)((uVar3 & 0x100000) >> 0x14);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(unaff_r14 + 0x10)),ar5,ar6,ar7));
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(unsigned)(unaff_r14 + 0x32) == '\0') {
    if (*(int *)(unsigned)(unaff_r14 + 0x28) != 0) {
      uVar3 = ((uint)bVar5 << 0xc | (uint)bVar6 << 0x12 | (uint)bVar7 << 0x13 | (uint)bVar8 << 0x14)
              & 0xffe7ffff;
      if ((char)((uVar3 & 0x100000) >> 0x14) == '\0') {
        fVar4 = *(float *)(unsigned)(unaff_r14 + 0x54);
      }
      else {
        fVar4 = (float)((ulonglong)*(undefined8 *)(unsigned)(unaff_r14 + 0x54) >> 0x20);
      }
      if ((char)((uVar3 & 0x80000) >> 0x13) != '\0' ||
          fVar4 <= (float)*(int *)(unsigned)(0x88 + unaff_r14)) goto LAB_8c10fe62;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fd82(unaff_r14,ar5,ar6,ar7));
    *(short *)(unsigned)(unaff_r14 + 0x30) = (short)uVar2;
  }
LAB_8c10fe62:
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (iVar1,(*(ushort *)(unsigned)(unaff_r14 + 0x30) - 1) * *(int *)(unsigned)(unaff_r14 + 0x70) * 4 +
                   *(int *)(unsigned)(unaff_r14 + 0x3c),*(int *)(unsigned)(unaff_r14 + 0x70) << 2,ar7));
  iVar1 = *(int *)(unsigned)(unaff_r14 + 0x3c) + *(int *)(unsigned)(0x80 + unaff_r14) * 4;
  *(int *)(unsigned)(unaff_r14 + 0x3c) = iVar1;
  if (iVar1 == *(int *)(unsigned)(unaff_r14 + 0x38)) {
    *(undefined4 *)(unsigned)(unaff_r14 + 0x3c) = *(undefined4 *)(unsigned)(unaff_r14 + 0x34);
  }
  *(int *)(unsigned)(unaff_r14 + 0x48) = *(int *)(unsigned)(unaff_r14 + 0x48) + -1;
  return 0x48;
}

__asm__(".globl _FUN_8c10fe0a\n.set _FUN_8c10fe0a, _FUN_8c10fe0a_def\n");
