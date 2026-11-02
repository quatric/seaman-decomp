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
undefined4 FUN_8c204cfc_def(undefined4 ar4,le<ushort>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204cfc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  le<ushort>* puVar1;
  le<ushort>* puVar2;
  le<undefined4>* ar5_00;
  le<undefined4>* puVar3;
  le<ushort>* ar6_00;
  int iVar4;
  le<ushort>* puVar5;
  
  iVar4 = (int)(short)ar4;
  *ar5 = *ar5 & 0xfffb;
  ar5_00 = ((le<undefined4>* )(unsigned)0x8c275404) + iVar4 * 5;
  ar6_00 = ar5;
  ({ unsigned long ri0_ = (unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c204ed2(((le<undefined4>* )(unsigned)0x8c275400) + iVar4 * 5,ar5_00,ar5,ar7); });
  (((le<undefined4>* )(unsigned)0x8c275410))[iVar4 * 5] = (((le<undefined4>* )(unsigned)0x8c275410))[iVar4 * 5] + *(le<int>* )(unsigned)(ar5 + 8);
  puVar5 = (le<ushort>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c275408))[iVar4 * 5];
  puVar2 = (le<ushort>* )(unsigned)0x0;
  while (puVar1 = puVar5, puVar1 != (le<ushort>* )(unsigned)0x0) {
    ar6_00 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar5 + 6));
    ar5_00 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 6));
    if ((ar5_00 == (le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar5 + 8) + (int)ar6_00)) ||
       (ar6_00 == (le<ushort>* )(unsigned)(*(le<int>* )(unsigned)(puVar1 + 8) + (int)ar5_00))) {
      puVar5 = (le<ushort>* )(unsigned)0x0;
      puVar2 = puVar1;
    }
    else {
      puVar5 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 4));
    }
  }
  iVar4 = (int)(short)ar4;
  puVar3 = ((le<undefined4>* )(unsigned)0x8c275400) + iVar4 * 5;
  puVar5 = ar5;
  if (puVar2 != (le<ushort>* )(unsigned)0x0) {
    do {
      ar5 = puVar2;
      if (*(le<int>* )(unsigned)(ar5 + 6) == *(le<int>* )(unsigned)(puVar5 + 6) + *(le<int>* )(unsigned)(puVar5 + 8)) {
        *(le<undefined4>* )(unsigned)(ar5 + 6) = *(le<undefined4>* )(unsigned)(puVar5 + 6);
        *(le<int>* )(unsigned)(ar5 + 8) = *(le<int>* )(unsigned)(ar5 + 8) + *(le<int>* )(unsigned)(puVar5 + 8);
      }
      else {
        *(le<int>* )(unsigned)(ar5 + 8) = *(le<int>* )(unsigned)(ar5 + 8) + *(le<int>* )(unsigned)(puVar5 + 8);
      }
      ({ unsigned long ri0_ = (unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c204e6c(puVar5,ar5_00,ar6_00,ar7); });
      ar5_00 = ((le<undefined4>* )(unsigned)0x8c27540c) + iVar4 * 5;
      ar6_00 = ar5;
      ({ unsigned long ri0_ = (unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c204ed2(((le<undefined4>* )(unsigned)0x8c275408) + iVar4 * 5,ar5_00,ar5,ar7); });
      puVar5 = (le<ushort>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c275408))[iVar4 * 5];
      puVar2 = (le<ushort>* )(unsigned)0x0;
      while (puVar1 = puVar5, puVar1 != (le<ushort>* )(unsigned)0x0) {
        ar5_00 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar5 + 6));
        ar6_00 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 6));
        if ((ar6_00 == (le<ushort>* )(unsigned)(*(le<int>* )(unsigned)(ar5 + 8) + (int)ar5_00)) ||
           (ar5_00 == (le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(puVar1 + 8) + (int)ar6_00))) {
          puVar5 = (le<ushort>* )(unsigned)0x0;
          puVar2 = puVar1;
        }
        else {
          puVar5 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 4));
        }
      }
      puVar5 = ar5;
    } while (puVar2 != (le<ushort>* )(unsigned)0x0);
    puVar3 = ((le<undefined4>* )(unsigned)0x8c275400) + (short)ar4 * 5;
    (*(le<unsigned>* )(fr0_ - 0x20) = (unsigned)(unsigned long)(puVar3));
  }
  ({ unsigned long ri0_ = (unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c204e92(puVar3 + 2,puVar3 + 3,ar5,ar7); });
  return 0;
}

__asm__(".globl FUN_8c204cfc\n.set FUN_8c204cfc, FUN_8c204cfc_def\n");

}
