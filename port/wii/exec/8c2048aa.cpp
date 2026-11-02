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
undefined4 FUN_8c2048aa_def(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2048aa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  le<ushort>* puVar1;
  le<ushort>* ar6_00;
  ushort uVar2;
  uint uVar3;
  le<ushort>* puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if ((int)ar5 < 0) {
    uVar3 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar3 = ar5 & 0x1f;
  }
  if (uVar3 != 0) {
    ar5 = ar5 + (0x20 - uVar3);
  }
  iVar7 = (int)(short)ar4;
  puVar4 = (le<ushort>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c275408))[iVar7 * 5];
  ar6_00 = (le<ushort>* )(unsigned)0x0;
  while (puVar1 = puVar4, puVar1 != (le<ushort>* )(unsigned)0x0) {
    if (*(le<int>* )(unsigned)(puVar1 + 8) < (int)ar5) {
      puVar4 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 4));
    }
    else {
      puVar4 = (le<ushort>* )(unsigned)0x0;
      ar6_00 = puVar1;
    }
  }
  if (ar6_00 == (le<ushort>* )(unsigned)0x0) {
LAB_8c204964:
    uVar5 = 3;
  }
  else {
    if (*(le<uint>* )(unsigned)(ar6_00 + 8) == ar5) {
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204ed2(((le<undefined4>* )(unsigned)0x8c275408) + iVar7 * 5,((le<undefined4>* )(unsigned)0x8c27540c) + iVar7 * 5,ar6_00,ar7); })
      ;
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar7 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar7 * 5,ar6_00,ar7); })
      ;
      *(le<undefined4>* )(unsigned)(ar6 + 0x1c) = *(le<undefined4>* )(unsigned)(ar6_00 + 6);
      *(le<int>* )(unsigned)(ar6_00 + 10) = ar6;
      *ar6_00 = 1;
      if ((short)ar4 == 0) {
        uVar2 = *ar6_00 | 0x20;
      }
      else {
        uVar2 = *ar6_00 | 0x40;
      }
      *ar6_00 = uVar2;
      *ar6_00 = *ar6_00 | 4;
      iVar6 = *(le<int>* )(unsigned)(ar6_00 + 8);
    }
    else {
      puVar4 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 36)), FUN_8c204e40(0,0,ar6,ar7));
      if (puVar4 == (le<ushort>* )(unsigned)0x0) goto LAB_8c204964;
      *(le<undefined4>* )(unsigned)(puVar4 + 6) = *(le<undefined4>* )(unsigned)(ar6_00 + 6);
      *(le<uint>* )(unsigned)(puVar4 + 8) = ar5;
      *(le<uint>* )(unsigned)(ar6_00 + 8) = *(le<int>* )(unsigned)(ar6_00 + 8) - ar5;
      *(le<uint>* )(unsigned)(ar6_00 + 6) = *(le<int>* )(unsigned)(ar6_00 + 6) + ar5;
      ({ unsigned long ri0_ = (unsigned long)(
                   ((le<undefined4>* )(unsigned)0x8c275400) + iVar7 * 5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar7 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar7 * 5,puVar4,ar7); });
      *(le<undefined4>* )(unsigned)(ar6 + 0x1c) = *(le<undefined4>* )(unsigned)(puVar4 + 6);
      *(le<int>* )(unsigned)(puVar4 + 10) = ar6;
      if ((short)ar4 == 0) {
        uVar2 = *puVar4 | 0x20;
      }
      else {
        uVar2 = *puVar4 | 0x40;
      }
      *puVar4 = uVar2;
      *puVar4 = *puVar4 | 4;
      iVar6 = *(le<int>* )(unsigned)(puVar4 + 8);
    }
    uVar5 = 0;
    (((le<undefined4>* )(unsigned)0x8c275410))[iVar7 * 5] = (((le<undefined4>* )(unsigned)0x8c275410))[iVar7 * 5] - iVar6;
  }
  return uVar5;
}

__asm__(".globl FUN_8c2048aa\n.set FUN_8c2048aa, FUN_8c2048aa_def\n");

}
