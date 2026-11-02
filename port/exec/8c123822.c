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
int FUN_8c123822_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c123822";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  int unaff_r14 = 0;
  double dVar2;
  uint uVar3;
  byte in_FPSCR_CAUSE = 0;
  byte in_FPSCR_DN = 0;
  byte in_FPSCR_PR = 0;
  
  if ((*(short *)(unsigned)(in_r0 + unaff_r14) != 0) &&
     (in_r0 = *(int *)(unsigned)(0x4cc + unaff_r14), in_r0 == 1)) {
    iVar1 = (int)0x4cc;
    *(undefined4 *)(unsigned)(iVar1 + unaff_r14) = 0;
    if (*(short *)(unsigned)(iVar1 + -0xc + unaff_r14) == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013adc))))
                        ((uint)*(ushort *)(unsigned)(0x4b8 + unaff_r14) -
                         (uint)*(ushort *)(unsigned)(0x4b8 + 2 + unaff_r14),ar5,ar6,ar7));
      dVar2 = CONCAT44D(0x3c23d70a,(float)*(ushort *)(unsigned)(0x4ba + unaff_r14));
      if ((char)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                  (uint)in_FPSCR_PR << 0x13) & 0xffe7ffff & 0x80000) >> 0x13) == '\0') {
        uVar3 = (uint)((float)*(ushort *)(unsigned)(0x4ba + unaff_r14) * 0x3c23d70a);
      }
      else {
        uVar3 = (uint)(dVar2 * dVar2);
      }
      if ((int)(uVar3 & 0xffff) < iVar1) {
        *(undefined2 *)(unsigned)(0x4b4 + unaff_r14) = 0;
      }
      in_r0 = (int)0x4b4;
      if (10 < *(ushort *)(unsigned)(in_r0 + unaff_r14)) {
        iVar1 = (int)0x4b8;
        *(undefined2 *)(unsigned)(iVar1 + 8 + unaff_r14) = *(undefined2 *)(unsigned)(iVar1 + unaff_r14);
        in_r0 = iVar1 + -4;
        *(undefined2 *)(unsigned)(in_r0 + unaff_r14) = 0;
      }
    }
    else {
      in_r0 = (int)0x4b4;
      *(undefined2 *)(unsigned)(in_r0 + unaff_r14) = 0;
    }
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c123822\n.set _FUN_8c123822, _FUN_8c123822_def\n");
