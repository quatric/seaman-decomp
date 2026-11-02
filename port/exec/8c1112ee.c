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
uint FUN_8c1112ee_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1112ee";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int unaff_r12 = 0;
  uint uVar2;
  int *piVar3;
  
  piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(unaff_r12 + 0xc));
  uVar2 = ar4;
  if (ar4 < *(byte *)(unsigned)(unaff_r12 + 8)) {
    do {
      if ((*(int *)(unsigned)(*piVar3 + 0x38) != 0) &&
         (*(int *)(unsigned)(*(int *)(unsigned)(*piVar3 + 0x2c) + piVar3[1] * 4) != 0)) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(*piVar3,piVar3[1],0,ar7));
        ar4 = ar4 | uVar1;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 < *(byte *)(unsigned)(unaff_r12 + 8));
  }
  return ar4;
}

__asm__(".globl _FUN_8c1112ee\n.set _FUN_8c1112ee, _FUN_8c1112ee_def\n");
