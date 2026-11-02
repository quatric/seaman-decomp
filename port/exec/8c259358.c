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
undefined4 FUN_8c259358_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c259358";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = 0x8c4aabbc;
  *(int *)(unsigned)*(undefined4 *)(unsigned)0x8c4aabbc = (int)0x2000;
  iVar3 = *piVar1;
  if (ar4 == 0) {
    *(undefined4 *)(unsigned)(iVar3 + 0x50) = 0;
    goto LAB_8c259396;
  }
  if (ar4 == 1) {
    uVar2 = 1;
  }
  else {
    if (ar4 == 2) {
      *(undefined4 *)(unsigned)(iVar3 + 0x50) = 2;
      goto LAB_8c259396;
    }
    if (ar4 != 3) goto LAB_8c259396;
    uVar2 = 3;
  }
  *(undefined4 *)(unsigned)(iVar3 + 0x50) = uVar2;
LAB_8c259396:
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20f640(*piVar1,vr5,vr6,vr7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20fe00(*piVar1,vr5,vr6,vr7));
  return uVar2;
}

__asm__(".globl _FUN_8c259358\n.set _FUN_8c259358, _FUN_8c259358_def\n");
