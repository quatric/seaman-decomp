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
undefined4 FUN_8c11f5d2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11f5d2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 a4;
  int iVar4;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar2 != 0) {
    return 1;
  }
  sVar1 = *(short *)(unsigned)(ar4 + 0x3e);
  if (((sVar1 != 6) && (sVar1 != 8)) && (sVar1 != 9)) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,7,ar6,ar7));
    return uVar3 & 0xff;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c121cc0(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(0x148 + ar4) != 4) {
    iVar2 = (int)0x148;
    iVar4 = (int)0xf4;
    a4 = *(undefined4 *)(unsigned)(iVar2 + ar4);
    *(undefined4 *)(unsigned)(iVar2 + ar4) = 4;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + -0x7c + ar4))))(a4,iVar4 + ar4,ar6,ar7));
  }
  return uVar3 & 0xff;
}

__asm__(".globl _FUN_8c11f5d2\n.set _FUN_8c11f5d2, _FUN_8c11f5d2_def\n");
