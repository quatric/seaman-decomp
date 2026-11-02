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
uint FUN_8c20e9ae_def(byte *ar4,int ar5,uint ar6,int ar7)

{
  TRACE_ENTER("FUN_8c20e9ae");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  undefined4 s8 = *(le<undefined4>* )(vsp + 8);
  undefined4 s12 = *(le<undefined4>* )(vsp + 12);
  undefined4 s16 = *(le<undefined4>* )(vsp + 16);
  undefined4 s20 = *(le<undefined4>* )(vsp + 20);
  undefined4 s24 = *(le<undefined4>* )(vsp + 24);
  undefined4 s28 = *(le<undefined4>* )(vsp + 28);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  le<int>* piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  le<undefined4>* puVar13;
  
  iVar3 = (int)(int)0xffffbfa8;
  if (ar5 == 1) {
    ar6 = 1;
  }
  else if (ar6 != 1) {
    puVar13 = (le<undefined4>* )(unsigned)((int)&s28 + iVar3);
    *(le<unsigned>* )(unsigned)((int)&s12 + iVar3) = puVar13;
    for (iVar12 = ar5; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13 = puVar13 + 4;
    }
    puVar13 = (le<undefined4>* )(unsigned)((fr0_ + (int)0xffffffe4) + 0x4048 + iVar3);
    *(le<unsigned>* )(unsigned)((int)&s0 + iVar3) = puVar13;
    *puVar13 = 0;
    *(le<unsigned>* )(unsigned)((int)&s8 + iVar3) = puVar13 + 1;
    puVar13[1] = 0;
    *(le<unsigned>* )(unsigned)((fr0_ + (int)0xffffffec) + iVar3) = puVar13 + 2;
    puVar13[2] = 0;
    *(le<unsigned>* )(unsigned)((int)&s16 + iVar3) = puVar13 + 3;
    puVar13[3] = 0;
    puVar13 = (le<undefined4>* )(unsigned)((fr0_ + (int)0xffffffe4) + 0x4038 + iVar3);
    *(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffff4) + iVar3) = puVar13;
    *puVar13 = 0;
    *(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffff8) + iVar3) = puVar13 + 1;
    puVar13[1] = 0;
    *(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffffc) + iVar3) = puVar13 + 2;
    puVar13[2] = 0;
    *(le<unsigned>* )(unsigned)((int)&s4 + iVar3) = puVar13 + 3;
    puVar13[3] = 0;
    *(le<uint>* )(unsigned)((fr0_ + (int)0xffffffe8) + iVar3) = ar6;
    while (*(le<int>* )(unsigned)((fr0_ + (int)0xffffffe8) + iVar3) != 0) {
      piVar8 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s12 + iVar3));
      *(le<int>* )(unsigned)((fr0_ + (int)0xfffffff0) + iVar3) = ar5;
      while (*(le<int>* )(unsigned)((fr0_ + (int)0xfffffff0) + iVar3) != 0) {
        bVar1 = ar4[3];
        iVar6 = *piVar8;
        bVar2 = ar4[2];
        iVar12 = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s0 + iVar3));
        *(le<unsigned>* )(unsigned)((int)&s20 + iVar3) = piVar8 + 1;
        iVar4 = piVar8[1];
        uVar7 = iVar6 + (uint)bVar1 + iVar12;
        bVar1 = ar4[1];
        iVar12 = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s8 + iVar3));
        *(le<unsigned>* )(unsigned)((int)&s24 + iVar3) = piVar8 + 2;
        uVar5 = iVar4 + (uint)bVar2 + iVar12;
        uVar11 = piVar8[2] + (uint)bVar1 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xffffffec) + iVar3));
        uVar9 = (uint)*ar4;
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        else if ((int)0xff < (int)uVar7) {
          uVar7 = (int)0xff;
        }
        if ((int)uVar5 < 0) {
          uVar5 = 0;
        }
        else if ((int)0xff < (int)uVar5) {
          uVar5 = (int)0xff;
        }
        if ((int)uVar11 < 0) {
          uVar11 = 0;
        }
        else if ((int)0xff < (int)uVar11) {
          uVar11 = (int)0xff;
        }
        if ((int)uVar9 < 0) {
          uVar9 = 0;
        }
        else if ((int)0xff < (int)uVar9) {
          uVar9 = (int)0xff;
        }
        ar4[3] = (byte)uVar7;
        iVar12 = 0x8000000;
        ar4[2] = (byte)uVar5;
        uVar10 = (uint)0xf8;
        ar4[1] = (byte)uVar11;
        *ar4 = (byte)uVar9;
        if (ar7 == iVar12) {
          ar6 = (int)0xfc & uVar5 | 2;
          uVar5 = uVar5 - ar6;
          uVar11 = uVar11 - (uVar10 & uVar11 | 4);
          uVar9 = 0;
          uVar7 = uVar7 - (uVar7 & uVar10 | 4);
        }
        else if (ar7 == 0x10000000) {
          uVar10 = (uint)0xf0;
          uVar5 = uVar5 - ((int)uVar5 >> 4 & 8U | uVar5 & uVar10 | 4);
          uVar11 = uVar11 - ((int)uVar11 >> 4 & 8U | uVar11 & uVar10 | 4);
          ar6 = (int)uVar9 >> 4 & 8U | uVar10 & uVar9 | 4;
          uVar9 = uVar9 - ar6;
          *(le<uint>* )(unsigned)((fr0_ + (int)0xffffffe4) + iVar3) = uVar9;
          uVar7 = uVar7 - ((int)uVar7 >> 4 & 8U | uVar7 & uVar10 | 4);
        }
        else {
          ar6 = uVar11;
          if (ar7 == 0) {
            uVar5 = uVar5 - (uVar5 & uVar10 | 4);
            ar6 = uVar7 - (uVar7 & uVar10 | 4);
            uVar11 = uVar11 - (uVar10 & uVar11 | 4);
            *(le<uint>* )(unsigned)((fr0_ + (int)0xffffffe4) + iVar3) = uVar11;
            uVar7 = ar6;
          }
        }
        iVar12 = (int)(uVar7 * 3 + 4) >> 3;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s0 + iVar3)) = iVar12;
        *piVar8 = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffff4) + iVar3)) + iVar12;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffff4) + iVar3)) = uVar7 + iVar12 * -2;
        iVar12 = (int)(uVar5 * 3 + 4) >> 3;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s8 + iVar3)) = iVar12;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s20 + iVar3)) = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffff8) + iVar3)) + iVar12;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffff8) + iVar3)) = uVar5 + iVar12 * -2;
        iVar12 = (int)(uVar11 * 3 + 4) >> 3;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xffffffec) + iVar3)) = iVar12;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s24 + iVar3)) = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffffc) + iVar3)) + iVar12;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffffc) + iVar3)) = uVar11 + iVar12 * -2;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s16 + iVar3)) = iVar12;
        piVar8[3] = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s4 + iVar3)) + iVar12;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s4 + iVar3)) = uVar9 + iVar12 * -2;
        ar4 = ar4 + 4;
        piVar8 = piVar8 + 4;
        *(le<int>* )(unsigned)((fr0_ + (int)0xfffffff0) + iVar3) = *(le<int>* )(unsigned)((fr0_ + (int)0xfffffff0) + iVar3) + -1;
      }
      *(le<int>* )(unsigned)((fr0_ + (int)0xffffffe8) + iVar3) = *(le<int>* )(unsigned)((fr0_ + (int)0xffffffe8) + iVar3) + -1;
    }
  }
  return ar6;
}

__asm__(".globl FUN_8c20e9ae\n.set FUN_8c20e9ae, FUN_8c20e9ae_def\n");

}
