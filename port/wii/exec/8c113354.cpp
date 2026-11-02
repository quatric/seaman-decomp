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
le<uint>*  FUN_8c113354_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c113354");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  le<uint>* puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = 0;
  uVar4 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(le<ushort>* )(unsigned)(ar4 + 0x1e4),0x18,vr6,vr7));
  uVar8 = uVar4;
  if (uVar4 < *(le<uint>* )(unsigned)(ar4 + 0x110)) {
    do {
      iVar7 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10c) + uVar8 * 4);
      if (uVar4 != 0) {
        *(le<int>* )(unsigned)(uVar4 + 4) = iVar7;
      }
      uVar4 = uVar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(le<int>* )(unsigned)(iVar2 + iVar7 + 4) = iVar3 * 0x18 + iVar7;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar8 = uVar8 + 1;
      uVar4 = uVar4 * 0x18 + iVar7;
    } while (uVar8 < *(le<uint>* )(unsigned)(ar4 + 0x110));
  }
  if (uVar4 != 0) {
    *(le<uint>* )(unsigned)(uVar4 + 4) = uVar6;
  }
  puVar5 = (le<uint>* )(unsigned)*((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10c));
  puVar5[3] = uVar6;
  puVar5[5] = uVar6;
  *puVar5 = uVar6;
  puVar5[2] = uVar6;
  puVar5[4] = uVar6;
  *(le<uint>* )(unsigned)(ar4 + 0x114) = puVar5[1];
  return puVar5;
}

__asm__(".globl FUN_8c113354\n.set FUN_8c113354, FUN_8c113354_def\n");

}
