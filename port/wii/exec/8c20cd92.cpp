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
undefined4 FUN_8c20cd92_def(int ar4,uint ar5,uint ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c20cd92");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);
  int s4 = *(le<int>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint a6;
  int ar6_00;
  undefined4 uVar4;
  undefined4 ar7_00;
  int iVar5;
  int iVar6;
  
  if ((ar5 & 0x1f) != 0) {
    return 7;
  }
  uVar3 = *(le<uint>* )(unsigned)(ar4 + 0x18);
  if (((((uVar3 & 1) == 0) && ((uVar3 & 4) == 0)) && ((uVar3 & 8) == 0)) &&
     (((uVar3 & 0x20) == 0 && ((*(le<uint>* )(unsigned)(ar4 + 8) & 0x18000000) != 0)))) {
    if (s0 == 6) {
      iVar5 = 0;
    }
    else {
      if (s0 != 3) {
        return 4;
      }
      iVar5 = 1;
    }
    if (((0 < (int)ar6) && ((int)ar6 < 0x41)) && ((0 < (int)ar7 && ((int)ar7 < 0x41)))) {
      iVar6 = ar6 * ar7;
      if (iVar6 < 2) {
        ar6 = *(le<uint>* )(unsigned)(ar4 + 0xc) >> 4;
        ar7 = *(le<uint>* )(unsigned)(ar4 + 0x10) >> 4;
      }
      uVar3 = (uint)(iVar6 >= 2);
      if (iVar5 == 0) {
        if (uVar3 == 0) {
          iVar6 = ar6 * ar7;
        }
        iVar6 = iVar6 * 0x180;
      }
      else {
        if (uVar3 == 0) {
          iVar6 = ar6 * ar7;
        }
        iVar6 = iVar6 << 9;
      }
      uVar4 = 0x3f;
      a6 = ar6 - 1 & 0x3f;
      (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c20a844))))
                ((int)0x14c,iVar5 << 0x18 | uVar3 << 0x10 | (ar7 - 1 & 0x3f) << 8 | a6,a6,
                 0x3f));
      (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c20a844))))
                ((int)0x148,*(le<uint>* )(unsigned)(ar4 + 0x1c) & 0xfffff8,a6,uVar4));
      uVar4 = 0x10800000;
      puVar1 = ((void *)(unsigned)0x8c202f40);
      iVar5 = (int)0x100;
      do {
        ar7_00 = 0x18;
        ar6_00 = iVar6;
        iVar2 = ({ unsigned long t0_ = (unsigned long)(((le<undefined4>*  *)(fr0_ - 0x1c))); *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 28)) - 8); (*(code *)xlat((unsigned long)(puVar1)))(uVar4,ar5,iVar6,0x18); });
      } while (iVar2 == iVar5);
      if (iVar2 == 0) {
        if (s4 == 1) {
          (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c203320(*((le<undefined4>*  *)(fr0_ - 0x1c))[0],0,ar6_00,ar7_00));
        }
        return 0;
      }
      return 8;
    }
  }
  return 4;
}

__asm__(".globl FUN_8c20cd92\n.set FUN_8c20cd92, FUN_8c20cd92_def\n");

}
