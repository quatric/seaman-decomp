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
le<uint>*  FUN_8c11335c_def(int ar4,uint ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c11335c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  le<uint>* puVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(le<ushort>* )(unsigned)(in_r0 + ar4),0x18,vr6,vr7));
  uVar7 = ar5;
  if (ar5 < *(le<uint>* )(unsigned)(ar4 + 0x110)) {
    do {
      iVar6 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10c) + uVar7 * 4);
      if (ar5 != 0) {
        *(le<int>* )(unsigned)(ar5 + 4) = iVar6;
      }
      uVar4 = ar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(le<int>* )(unsigned)(iVar2 + iVar6 + 4) = iVar3 * 0x18 + iVar6;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar7 = uVar7 + 1;
      ar5 = uVar4 * 0x18 + iVar6;
    } while (uVar7 < *(le<uint>* )(unsigned)(ar4 + 0x110));
  }
  if (ar5 != 0) {
    *(le<uint>* )(unsigned)(ar5 + 4) = ar6;
  }
  puVar5 = (le<uint>* )(unsigned)*((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10c));
  puVar5[3] = ar6;
  puVar5[5] = ar6;
  *puVar5 = ar6;
  puVar5[2] = ar6;
  puVar5[4] = ar6;
  *(le<uint>* )(unsigned)(ar4 + 0x114) = puVar5[1];
  return puVar5;
}

__asm__(".globl FUN_8c11335c\n.set FUN_8c11335c, FUN_8c11335c_def\n");

}
