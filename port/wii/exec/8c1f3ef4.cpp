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
undefined4 FUN_8c1f3ef4_def(le<int>* ar4,le<uint>* ar5,uint ar6,int ar7)

{
  TRACE_ENTER("FUN_8c1f3ef4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  le<undefined4>* a4;
  le<undefined4>* a5;
  undefined4 a6;
  undefined4 a7;
  le<undefined4>* puVar6;
  le<int>* piVar7;
  
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) = -0x73b8e948;
  uVar5 = ar6;
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c47267c) & 0x1f) != 0) {
    uVar5 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c47267c) + 0x20 & 0xffffffe0;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c47267c) = uVar5;
  puVar1 = ar5;
  if (((uint)((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c472680) & 0x1f) != 0) {
    puVar1 = (le<uint>* )(unsigned)((int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c472680) + 0x20U & 0xffffffe0);
  }
  *(le<unsigned>* )0x8c472680 = (unsigned)(unsigned long)(puVar1);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c47267c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c47267c) | 0xa0000000;
  *(le<unsigned>* )0x8c472680 = (unsigned)(unsigned long)((le<uint>* )(unsigned)((uint)((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c472680) | 0xa0000000));
  (vsp = ((unsigned long)(fr0_ - 72)), g2dma_1f4794(0x8c4716b8,ar5,ar6,ar7));
  uVar5 = 0;
  do {
    *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfe8 + uVar5) = 0;
    iVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + uVar5;
    uVar5 = uVar5 + 4;
    *(le<undefined4>* )(unsigned)(iVar3 + 0x1048) = 0;
  } while (uVar5 < 0x60);
  iVar3 = 0;
  (*(le<unsigned>* )(fr0_ - 0x28) = (unsigned)(unsigned long)(ar5));
  (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)(ar4));
  if (0 < ar7) {
    do {
      uVar5 = *((le<uint>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x28));
      if ((uVar5 & 0x1f) != 0) {
        uVar5 = uVar5 + 0x20 & 0xffffffe0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24));
      *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfe8 + iVar2 * 4) = uVar5 | 0xa0000000;
      *(le<uint>* )(unsigned)(iVar2 * 4 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x1048) = (uVar5 | 0xa0000000) + 0x400;
      (*(le<unsigned>* )(fr0_ - 0x28) = (unsigned)(unsigned long)(((le<uint>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x28)) + 1));
      (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24)) + 1));
    } while (iVar3 < ar7);
  }
  iVar3 = 0;
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10a8) = *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfc4);
  *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10ac) = ar7 * 0x400 + *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfc4);
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfcc) = *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10a8);
  do {
    puVar4 = (undefined1 *)(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xf90 + iVar3);
    iVar3 = iVar3 + 1;
    *puVar4 = 0;
  } while (iVar3 < 0x18);
  a7 = 0x65;
  iVar3 = 0;
  a6 = 0x72;
  if (0 < ar7) {
    do {
      iVar2 = *ar4;
      ar4 = ar4 + 1;
      if ((((iVar2 == 0) || (iVar2 == 6)) || (iVar2 == 0xc)) || (iVar2 == 0x12)) {
        *(undefined1 *)(unsigned)(iVar2 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xf90) = 0x72;
      }
      else {
        *(undefined1 *)(unsigned)(iVar2 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xf90) = 0x65;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < ar7);
  }
  a4 = ((le<undefined4>* )(unsigned)0x8c26c728);
  a5 = ((le<undefined4>* )(unsigned)0x8c26c728);
  puVar6 = ((le<undefined4>* )(unsigned)0x8c26c728);
  piVar7 = (le<int>*)(((le<undefined4>* )(unsigned)0x8c26c728));
  do {
    if (*(char *)(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xf90 + *piVar7) != '\0') {
      a4 = (le<undefined4>* )(unsigned)*puVar6;
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c1f55e4(a4,a5,a6,a7));
    }
    piVar7 = piVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (piVar7 < (le<int>* )(unsigned)0x8c26c738);
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c1f59c8(a4,a5,a6,a7));
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfc0) = 1;
  *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10f4) + 0x8c) = 0x6155404f;
  *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10f4) + 0x10) = 0;
  *(le<uint>* )(unsigned)(*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10f4) + 0x80) =
       *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10c0) | *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10d0);
  *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10f4) + 0x14) = 1;
  return 0;
}

__asm__(".globl FUN_8c1f3ef4\n.set FUN_8c1f3ef4, FUN_8c1f3ef4_def\n");

}
