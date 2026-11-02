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
undefined4 FUN_8c20f25a_def(undefined1 *ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20f25a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4148; for (int i_ = 0; i_ < 4148; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  
  iVar2 = (int)(int)0xffffeff4;
  iVar6 = (int)(ar5 + (uint)(ar5 < 0)) >> 1;
  *(le<int>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2 + 8) = (int)(ar6 + (uint)(ar6 < 0)) >> 1;
  puVar9 = (fr0_ + (int)0xffffffec) + iVar2;
  puVar5 = ar4;
  for (iVar4 = ar5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar5;
    puVar9[1] = puVar5[1];
    puVar9[2] = puVar5[2];
    puVar1 = puVar5 + 3;
    puVar5 = puVar5 + 4;
    puVar9[3] = *puVar1;
    puVar9 = puVar9 + 4;
  }
  iVar4 = *(le<int>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2 + 8);
  *(le<int>* )(unsigned)((fr0_ + (int)0xffffffe4) + iVar2) = ar5 << 2;
  *(le<int>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2 + 8) = ar5 << 3;
  *(le<int>* )(unsigned)((fr0_ + (int)0xffffffe8) + iVar2) = iVar6 << 2;
  puVar9 = ar4 + (ar6 + -1) * ar5 * 2;
  puVar5 = ar4;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    iVar7 = *(le<int>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2 + 8);
    iVar8 = *(le<int>* )(unsigned)((fr0_ + (int)0xffffffe4) + iVar2);
    *(le<int>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2 + 4) = iVar6;
    *(le<unsigned>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2) = ar4;
    (vsp = ((unsigned long)(fr0_ - 4148)), FUN_8c20eec0(puVar9,puVar5,puVar5 + iVar8,puVar5 + iVar7));
    ar4 = ar4 + *(le<int>* )(unsigned)((fr0_ + (int)0xffffffe8) + iVar2);
    puVar9 = puVar5 + iVar8;
    puVar5 = puVar5 + iVar7;
  }
  iVar4 = *(le<int>* )(unsigned)((fr0_ + (int)0xffffffe4) + iVar2);
  *(le<int>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2 + 4) = iVar6;
  *(le<unsigned>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2) = ar4;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 4148)), FUN_8c20eec0(puVar9,puVar5,puVar5 + iVar4,(fr0_ + (int)0xffffffec) + iVar2));
  return uVar3;
}

__asm__(".globl FUN_8c20f25a\n.set FUN_8c20f25a, FUN_8c20f25a_def\n");

}
