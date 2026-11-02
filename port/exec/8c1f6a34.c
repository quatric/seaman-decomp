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
undefined4 FUN_8c1f6a34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f6a34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int a5;
  undefined4 in_PR = 0;
  byte in_FPSCR_RM = 0;
  byte in_FPSCR_FLAG = 0;
  byte in_FPSCR_ENABLE = 0;
  byte in_FPSCR_CAUSE = 0;
  byte in_FPSCR_DN = 0;
  byte in_FPSCR_FR = 0;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c47489c) = (*(undefined4 *)(unsigned)(unsigned)0x8c474898);
  a5 = ar4 + 0x210;
  (*(undefined4 *)(unsigned)(unsigned)0x8c474898) = ar4;
  ({ unsigned long ri0_ = (unsigned long)(
               (uint)in_FPSCR_RM | (uint)in_FPSCR_FLAG << 2 | (uint)in_FPSCR_ENABLE << 7 |
               (uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_FR << 0x15); unsigned long ri1_ = (unsigned long)(
               in_PR); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c01422c(ar4 + 4,ar5,ar6,ar7); });
  for (iVar2 = 0; iVar2 < *(int *)(unsigned)(ar4 + 0x208); iVar2 = iVar2 + 1) {
    *(int *)(unsigned)(ar4 + 0xd78) = a5;
    iVar1 = *(int *)(unsigned)(a5 + 0xc);
    if (iVar1 != 0) {
      if (iVar1 == 3) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f689e(ar4,a5,ar6,ar7));
      }
      else if (iVar1 == 1) {
        if (*(uint *)(unsigned)(a5 + 0x14) <= *(uint *)(unsigned)(ar4 + 0x204)) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013e4c(a5 + 0x18,1,ar6,ar7));
        }
      }
      else if (iVar1 == 2) {
        *(undefined4 *)(unsigned)(a5 + 0xc) = 3;
        *(unsigned *)(unsigned)(a5 + 0x20) = ((void *)0x8c1f692a);
      }
    }
    a5 = a5 + 0x124;
  }
  *(int *)(unsigned)(ar4 + 0x204) = *(int *)(unsigned)(ar4 + 0x204) + 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c474898) = (*(undefined4 *)(unsigned)(unsigned)0x8c47489c);
  return 0x204;
}

__asm__(".globl _FUN_8c1f6a34\n.set _FUN_8c1f6a34, _FUN_8c1f6a34_def\n");
