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
undefined4 FUN_8c1f3dd8_def(uint ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f3dd8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  uint uVar1;
  le<undefined4>* ar4_00;
  le<undefined4>* ar5_00;
  undefined4 ar6_00;
  le<undefined4>* puVar2;
  le<int>* piVar3;
  
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) = -0x73b8e948;
  ar6_00 = 0x1f;
  uVar1 = ar4;
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c47267c) & 0x1f) != 0) {
    uVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c47267c) + 0x20 & 0xffffffe0;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c47267c) = uVar1;
  uVar1 = ar6;
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c472680) & 0x1f) != 0) {
    uVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c472680) + 0x20 & 0xffffffe0;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c472680) = uVar1;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c47267c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c47267c) | 0xa0000000;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c472680) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c472680) | 0xa0000000;
  (vsp = ((unsigned long)(fr0_ - 32)), g2dma_1f4794(0xa0000000,0xffffffe0,0x1f,ar7));
  ar4_00 = ((le<undefined4>* )(unsigned)0x8c26c728);
  ar5_00 = ((le<undefined4>* )(unsigned)0x8c26c728);
  puVar2 = ((le<undefined4>* )(unsigned)0x8c26c728);
  piVar3 = (le<int>*)(((le<undefined4>* )(unsigned)0x8c26c728));
  do {
    if (*(char *)(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xf90 + *piVar3) != '\0') {
      ar4_00 = (le<undefined4>* )(unsigned)*puVar2;
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f55e4(ar4_00,ar5_00,ar6_00,ar7));
    }
    piVar3 = piVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (piVar3 < (le<int>* )(unsigned)0x8c26c738);
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f59c8(ar4_00,ar5_00,ar6_00,ar7));
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfc0) = 1;
  *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10f4) + 0x8c) = 0x6155404f;
  *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10f4) + 0x10) = 0;
  *(le<uint>* )(unsigned)(*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10f4) + 0x80) =
       *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10c0) | *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10d0);
  *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10f4) + 0x14) = 1;
  return 0;
}

__asm__(".globl FUN_8c1f3dd8\n.set FUN_8c1f3dd8, FUN_8c1f3dd8_def\n");

}
