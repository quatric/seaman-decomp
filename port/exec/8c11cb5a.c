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
undefined4 FUN_8c11cb5a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cb5a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int unaff_r13 = 0;
  int ar4_00;
  
  if (unaff_r13 == 0) {
    uVar1 = 6;
  }
  else if (*(int *)(unsigned)(unaff_r13 + 0x18) == 0x2783d5f5) {
    ar4_00 = *(int *)(unsigned)(unaff_r13 + 0x14);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4_00 + 0x1c))))(ar4_00 + 8,ar5,ar6,ar7));
    if ((*(int *)(unsigned)(unaff_r13 + 0xc) != iVar2) ||
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4_00 + 0x20))))(ar4_00 + 8,ar5,ar6,ar7)),
       *(int *)(unsigned)(unaff_r13 + 0x10) != iVar2)) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(ar4_00,0x11,ar6,ar7));
      return uVar1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0x10;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11cb5a\n.set _FUN_8c11cb5a, _FUN_8c11cb5a_def\n");
