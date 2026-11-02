#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c010120_def(int ar4,code *ar5,code *ar6,int ar7)

{
  TRACE_ENTER("FUN_8c010120");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint s0 = *(le<uint>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uStackY_1c;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = ar4;
  for (uStackY_1c = 0; uStackY_1c < s0; uStackY_1c = uStackY_1c + 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)ar5))(iVar1,1,uVar2,vr7));
    iVar1 = iVar1 + ar7;
  }
  if ((uStackY_1c < s0) && (s0 = 0, ar6 != (code *)0x0)) {
    iVar1 = ar7 * uStackY_1c + ar4;
    for (; s0 = 0, uStackY_1c != 0; uStackY_1c = uStackY_1c - 1) {
      iVar1 = iVar1 - ar7;
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)ar6))(iVar1,0xffffffff,vr6,vr7));
    }
  }
  return s0;
}

__asm__(".globl FUN_8c010120\n.set FUN_8c010120, FUN_8c010120_def\n");

}
