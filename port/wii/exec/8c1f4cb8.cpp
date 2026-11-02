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
undefined4 FUN_8c1f4cb8_def(int ar4,undefined4 ar5,le<uint>* ar6,int ar7)

{
  TRACE_ENTER("FUN_8c1f4cb8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  le<uint>*  s0 = (le<uint>* )(unsigned long)*(le<unsigned>* )(vsp + 0);
  int s4 = *(le<int>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 a5;
  le<uint>* a6;
  uint uVar4;
  int iVar5;
  le<uint>* puVar6;
  
  a5 = 3;
  uVar4 = ar7 + s4;
  bVar1 = (((undefined1 *)(unsigned)0x8c26c710))[ar4];
  uVar2 = (int)(char)bVar1 & 0xc0;
  a6 = ar6;
  iVar5 = ar7;
  if (((0 < *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10cc)) && (0 < *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfd8))) &&
     ((int)uVar2 >> 6 == ((int)(short)((uint)*((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfcc)) >> 0x10) & 3U)
     )) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f4a00(*(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10cc),3,ar6,ar7));
  }
  *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfcc) =
       *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfcc) + *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfd8) * 4;
  puVar6 = ((le<uint>* )(unsigned long)*(le<unsigned>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfcc));
  *puVar6 = ((int)uVar2 >> 6) << 0x10 | uVar4 & 0xff;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f59f2(*(le<undefined4>* )(unsigned)
                        ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfe8 + *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10b4) * 0x60 + ar4 * 4),
                       a5,a6,iVar5));
  puVar6[1] = uVar3;
  if (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10c4) == 1) {
    puVar6[2] = (uint)(byte)ar5 << 0x18 | (uint)bVar1 << 0x10 | uVar2 << 8 | uVar4 & 0xff;
    puVar6 = puVar6 + 3;
    iVar5 = 0;
    if (0 < ar7) {
      do {
        uVar2 = *ar6;
        ar6 = ar6 + 1;
        iVar5 = iVar5 + 1;
        *puVar6 = uVar2;
        puVar6 = puVar6 + 1;
      } while (iVar5 < ar7);
    }
  }
  else {
    puVar6[2] = uVar2 << 0x10 | (uint)bVar1 << 8 | uVar4 * 0x1000000 | (uint)(byte)ar5;
    puVar6 = puVar6 + 3;
    iVar5 = 0;
    if (0 < ar7) {
      do {
        uVar2 = *ar6;
        ar6 = ar6 + 1;
        iVar5 = iVar5 + 1;
        *puVar6 = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | (int)uVar2 >> 8 & 0xff00U | uVar2 >> 0x18;
        puVar6 = puVar6 + 1;
      } while (iVar5 < ar7);
    }
  }
  if (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10c4) == 1) {
    iVar5 = 0;
    if (0 < s4) {
      do {
        iVar5 = iVar5 + 1;
        *puVar6 = (uint)*(byte *)(unsigned)((int)s0 + 1) << 0x10 | (uint)*(byte *)(unsigned)((int)s0 + 2) << 8 |
                  (int)(char)*s0 << 0x18 | (uint)*(byte *)(unsigned)((int)s0 + 3);
        puVar6 = puVar6 + 1;
        s0 = s0 + 1;
      } while (iVar5 < s4);
    }
  }
  else {
    iVar5 = 0;
    if (0 < s4) {
      do {
        uVar2 = *s0;
        s0 = s0 + 1;
        iVar5 = iVar5 + 1;
        *puVar6 = uVar2;
        puVar6 = puVar6 + 1;
      } while (iVar5 < s4);
    }
  }
  *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfd8) = uVar4 + 3;
  *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfdc) = *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfdc) + (uVar4 + 3) * 4;
  return 0;
}

__asm__(".globl FUN_8c1f4cb8\n.set FUN_8c1f4cb8, FUN_8c1f4cb8_def\n");

}
