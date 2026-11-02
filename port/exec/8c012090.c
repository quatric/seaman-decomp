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
undefined4 * FUN_8c012090_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c012090";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  longlong in_dr4 = 0;
  float fVar4;
  
  fVar4 = F32HI(in_dr4);
  uVar2 = 0;
  if (in_dr4 < 0) {
    uVar2 = 8;
  }
  if (fVar4 == 0.0) {
    uVar2 = uVar2 | 4;
  }
  else if (ABS(fVar4) == INFINITY) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar2 & 4) == 0) {
    if ((uVar2 & 8) != 0) {
      return (undefined4 *)(unsigned)uVar2;
    }
    if ((uVar2 & 2) == 0) {
      if (fVar4 != 1.0) {
        iVar3 = 7;
        do {
          iVar3 = iVar3 + -1;
        } while (0 < iVar3);
        return (undefined4 *)(unsigned)fVar4;
      }
      return (undefined4 *)(unsigned)8;
    }
    puVar1 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c125800);
  }
  else {
    puVar1 = ((undefined4 *)(unsigned)0x8c125830);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c012090\n.set _FUN_8c012090, _FUN_8c012090_def\n");
