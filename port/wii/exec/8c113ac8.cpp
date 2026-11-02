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
int FUN_8c113ac8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c113ac8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  le<int>* piVar6;
  le<uint>* puVar7;
  uint uVar8;
  le<uint>* puVar9;
  le<uint>* puVar10;
  le<uint>* puVar11;
  uint uVar12;
  
  iVar1 = (int)0x9c;
  uVar8 = 0;
  uVar5 = (uint)0x80;
  puVar11 = ((le<uint>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + ar4));
  piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + -4 + ar4));
  iVar1 = iVar1 + -0xc;
  puVar9 = ((le<uint>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + ar4));
  puVar10 = puVar9;
  if (*(le<int>* )(unsigned)(ar4 + 0x38) != 0) {
    do {
      *piVar6 = (int)puVar11;
      piVar6 = piVar6 + 1;
      uVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      uVar12 = *puVar10;
      puVar7 = puVar9 + uVar4;
joined_r0x8c113afe:
      if (uVar4 < uVar12) {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        iVar1 = *(le<int>* )(unsigned)(0xc0 + ar4);
        uVar4 = uVar4 + 1;
        if ((*(le<ushort>* )(unsigned)(iVar1 + uVar3 * 2) & uVar5) != 0) goto code_r0x8c113b16;
        goto LAB_8c113b32;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(le<uint>* )(unsigned)(ar4 + 0x38));
  }
  *piVar6 = (int)puVar11;
  return iVar1;
code_r0x8c113b16:
  iVar1 = *(le<int>* )(unsigned)(0x94 + ar4);
  uVar2 = -(uVar3 & 7);
  if ((int)uVar2 < 0) {
    uVar2 = (int)uVar5 >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar2 = uVar5 << (uVar2 & 0x1f);
  }
  if ((*(byte *)(unsigned)(iVar1 + (uVar3 >> 3)) & uVar2) != 0) {
LAB_8c113b32:
    *puVar11 = uVar3;
    puVar11 = puVar11 + 1;
  }
  goto joined_r0x8c113afe;
}

__asm__(".globl FUN_8c113ac8\n.set FUN_8c113ac8, FUN_8c113ac8_def\n");

}
