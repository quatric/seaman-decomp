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
undefined4 FUN_8c25a674_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a674");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  le<int>* a4;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar2 = ~ar5;
  for (uVar3 = 0; uVar3 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c); uVar3 = uVar3 + 1) {
    a4 = (le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar4);
    if (*a4 == ar4) {
      uVar1 = a4[4];
      a4[4] = uVar1 & uVar2;
      if ((uVar1 & uVar2 & 2) == 0) {
        ain0 = 0x40;
        a4[0xd] = 0;
        *(le<undefined2>* )(unsigned)(a4 + 0x10) = 0;
      }
      if ((a4[4] & 1U) == 0) {
        a4[5] = 0;
      }
      if ((a4[4] & 3U) == 0) {
        ain0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25a49e(a4,ar5,ar6,ar7));
      }
    }
    iVar4 = iVar4 + 0x44;
  }
  return ain0;
}

__asm__(".globl FUN_8c25a674\n.set FUN_8c25a674, FUN_8c25a674_def\n");

}
