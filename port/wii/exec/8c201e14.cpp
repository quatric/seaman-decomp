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
int FUN_8c201e14_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c201e14");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStackY_30 [8];
  undefined1 auStackY_28 [8];
  
  iVar5 = ar5;
  iVar4 = ar6;
  ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c20202e(ar4,ar5,ar6,ar7); });
  iVar3 = ar4;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_201c8e(ar4,iVar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(8,auStackY_28,ar4 + 8,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(8,auStackY_30,iVar2 + 0x3c,vr7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2029b4(iVar3,iVar5,ar6,ar7));
  if (iVar3 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(8,auStackY_28,ar4 + 8,vr7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c202924(*(le<undefined4>* )(unsigned)(iVar2 + 0x14),iVar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(8,auStackY_30,iVar2 + 0x3c,vr7));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c202924(*(le<undefined4>* )(unsigned)(iVar2 + 0x14),iVar5,ar6,ar7));
    iVar6 = *(le<int>* )(unsigned)(iVar2 + 0x14) - iVar3;
    if (*(le<int>* )(unsigned)(iVar2 + 8) == 0) {
      iVar4 = iVar4 >> 1;
    }
    iVar1 = iVar6;
    if (iVar3 < iVar5) {
      iVar1 = -iVar3;
    }
    if (iVar5 + iVar1 < iVar4) {
      iVar4 = iVar5 + iVar1;
    }
    if (iVar6 < iVar4) {
      iVar6 = iVar4 - iVar6;
    }
    else {
      iVar6 = 0;
    }
    iVar4 = iVar4 - iVar6;
    if (*(le<int>* )(unsigned)(iVar2 + 8) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar5,iVar3 * 2 + *(le<int>* )(unsigned)(iVar2 + 0x48),iVar4 * 2,ar7));
      if (iVar6 != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(iVar4 * 2 + ar5,*(le<undefined4>* )(unsigned)(iVar2 + 0x48),iVar6 << 1,ar7));
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar5,*(le<int>* )(unsigned)(iVar2 + 0x48) + iVar3,iVar4,ar7));
      if (iVar6 != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar5 + iVar4,*(le<undefined4>* )(unsigned)(iVar2 + 0x48),iVar6,ar7));
      }
    }
    iVar4 = iVar4 + iVar6;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}

__asm__(".globl FUN_8c201e14\n.set FUN_8c201e14, FUN_8c201e14_def\n");

}
