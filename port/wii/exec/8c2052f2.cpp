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
undefined4 FUN_8c2052f2_def(undefined4 ar4,int ar5,uint ar6,int ar7)

{
  TRACE_ENTER("FUN_8c2052f2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);
  int s4 = *(le<int>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  le<ushort>* ar6_00;
  uint uVar1;
  int iVar2;
  le<ushort>* puVar3;
  le<ushort>* ar6_01;
  int ain0;
  int iVar4;
  int iVar5;
  undefined4 a7;
  
  iVar5 = ar5 + ar6;
  if ((int)ar6 < 0) {
    uVar1 = ~(~ar6 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar6 & 0x1f;
  }
  a7 = 0;
  if (uVar1 != 0) {
    ar6 = ar6 + (0x20 - uVar1);
  }
  iVar2 = (int)(short)ar4;
  ar6_00 = (le<ushort>* )(unsigned)0x0;
  puVar3 = (le<ushort>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c275408))[iVar2 * 5];
  iVar4 = ar5;
  while (puVar3 != (le<ushort>* )(unsigned)0x0) {
    iVar4 = *(le<int>* )(unsigned)(puVar3 + 6);
    if ((((ar5 < iVar4) || (*(le<int>* )(unsigned)(puVar3 + 8) + iVar4 <= ar5)) || (iVar5 < iVar4)) ||
       (*(le<int>* )(unsigned)(puVar3 + 8) + iVar4 < iVar5)) {
      puVar3 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar3 + 4));
    }
    else {
      ar6_00 = puVar3;
      puVar3 = (le<ushort>* )(unsigned)0x0;
    }
  }
  if (ar6_00 == (le<ushort>* )(unsigned)0x0) {
    return 3;
  }
  if (*(le<uint>* )(unsigned)(ar6_00 + 8) == ar6) {
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204ed2(((le<undefined4>* )(unsigned)0x8c275408) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c27540c) + iVar2 * 5,ar6_00,0); });
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar2 * 5,ar6_00,a7); });
    *(le<undefined4>* )(unsigned)(ar7 + 8) = *(le<undefined4>* )(unsigned)(ar6_00 + 6);
    *(le<int>* )(unsigned)(ar6_00 + 10) = ar7;
    *ar6_00 = 1;
    if ((short)ar4 == 0) {
      *ar6_00 = *ar6_00 | 0x800;
    }
    else {
      *ar6_00 = *ar6_00 | 0x1000;
    }
    if (s0 != 0) {
      *ar6_00 = *ar6_00 | 2;
    }
    if (s4 != 0) {
      *ar6_00 = *ar6_00 | 4;
    }
    iVar5 = *(le<int>* )(unsigned)(ar6_00 + 8);
  }
  else {
    if (*(le<int>* )(unsigned)(ar6_00 + 6) != ar5) {
      if (*(le<int>* )(unsigned)(ar6_00 + 6) + *(le<int>* )(unsigned)(ar6_00 + 8) == iVar5) {
        ar6_01 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(0,iVar4,iVar5,0));
        if (ar6_01 == (le<ushort>* )(unsigned)0x0) {
          return 3;
        }
        *(le<uint>* )(unsigned)(ar6_00 + 8) = *(le<int>* )(unsigned)(ar6_00 + 8) - ar6;
        *(le<int>* )(unsigned)(ar6_01 + 6) = ar5;
        *(le<uint>* )(unsigned)(ar6_01 + 8) = ar6;
        ({ unsigned long ri0_ = (unsigned long)(
                     ((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar2 * 5,ar6_01,a7); });
        *(le<undefined4>* )(unsigned)(ar7 + 8) = *(le<undefined4>* )(unsigned)(ar6_01 + 6);
        *(le<int>* )(unsigned)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x800;
        }
        else {
          *ar6_01 = *ar6_01 | 0x1000;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      else {
        ar6_01 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(0,iVar4,iVar5,0));
        if (ar6_01 == (le<ushort>* )(unsigned)0x0) {
          return 3;
        }
        ain0 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(puVar3,iVar4,iVar5,a7));
        if (ain0 == 0) {
          ({ unsigned long ri0_ = (unsigned long)(0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e6c(ar6_01,iVar4,iVar5,a7); });
          return 3;
        }
        iVar5 = *(le<int>* )(unsigned)(ar6_00 + 8);
        iVar4 = *(le<int>* )(unsigned)(ar6_00 + 6);
        *(le<int>* )(unsigned)(ar6_00 + 8) = ar5 - iVar4;
        *(le<int>* )(unsigned)(ar6_01 + 6) = ar5;
        *(le<uint>* )(unsigned)(ar6_01 + 8) = ar6;
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar2 * 5,ar6_01,a7); });
        *(le<uint>* )(unsigned)(ain0 + 0xc) = ar5 + ar6;
        *(le<uint>* )(unsigned)(ain0 + 0x10) = (iVar5 - ar6) - (ar5 - iVar4);
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204eb6(((le<undefined4>* )(unsigned)0x8c27540c) + iVar2 * 5,ain0,(((le<undefined4>* )(unsigned)0x8c27540c))[iVar2 * 5],a7); });
        *(le<undefined4>* )(unsigned)(ar7 + 8) = *(le<undefined4>* )(unsigned)(ar6_01 + 6);
        *(le<int>* )(unsigned)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x800;
        }
        else {
          *ar6_01 = *ar6_01 | 0x1000;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      (((le<undefined4>* )(unsigned)0x8c275410))[iVar2 * 5] = (((le<undefined4>* )(unsigned)0x8c275410))[iVar2 * 5] - *(le<int>* )(unsigned)(ar6_01 + 8);
      return 0;
    }
    puVar3 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(0,iVar4,iVar5,0));
    if (puVar3 == (le<ushort>* )(unsigned)0x0) {
      return 3;
    }
    *(le<undefined4>* )(unsigned)(puVar3 + 6) = *(le<undefined4>* )(unsigned)(ar6_00 + 6);
    *(le<uint>* )(unsigned)(puVar3 + 8) = ar6;
    *(le<uint>* )(unsigned)(ar6_00 + 8) = *(le<int>* )(unsigned)(ar6_00 + 8) - ar6;
    *(le<uint>* )(unsigned)(ar6_00 + 6) = *(le<int>* )(unsigned)(ar6_00 + 6) + ar6;
    ({ unsigned long ri0_ = (unsigned long)(
                 ((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar2 * 5,puVar3,a7); });
    *(le<undefined4>* )(unsigned)(ar7 + 8) = *(le<undefined4>* )(unsigned)(puVar3 + 6);
    *(le<int>* )(unsigned)(puVar3 + 10) = ar7;
    if ((short)ar4 == 0) {
      *puVar3 = *puVar3 | 0x800;
    }
    else {
      *puVar3 = *puVar3 | 0x1000;
    }
    if (s0 != 0) {
      *puVar3 = *puVar3 | 2;
    }
    if (s4 != 0) {
      *puVar3 = *puVar3 | 4;
    }
    iVar5 = *(le<int>* )(unsigned)(puVar3 + 8);
  }
  (((le<undefined4>* )(unsigned)0x8c275410))[iVar2 * 5] = (((le<undefined4>* )(unsigned)0x8c275410))[iVar2 * 5] - iVar5;
  return 0;
}

__asm__(".globl FUN_8c2052f2\n.set FUN_8c2052f2, FUN_8c2052f2_def\n");

}
