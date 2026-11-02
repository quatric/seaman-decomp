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
int FUN_8c1212d4_def(le<int>* ar4,byte *ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c1212d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  le<ushort>*  s0 = (le<ushort>* )(unsigned long)*(le<unsigned>* )(vsp + 0);
  uint s4 = *(le<uint>* )(vsp + 4);
  uint s8 = *(le<uint>* )(vsp + 8);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  byte bVar1;
  undefined *puVar2;
  int in_r0 = (int)(unsigned long)vin0;
  le<ushort>* puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c1293e4));
  uVar5 = ar7 + 1U >> 1;
  uVar6 = (uint)0xf0;
  iVar8 = *(le<int>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c1293e0));
  if (ar6 == 0) {
    (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)((le<int>* )(unsigned)0x0));
    if (s8 != 0) {
      do {
        bVar1 = *ar5;
        ar5 = ar5 + uVar5;
        uVar4 = bVar1 & uVar6;
        iVar8 = iVar8 + uVar4 * -2;
        uVar7 = 0;
        (*(le<unsigned>* )(fr0_ - 0x20) = (unsigned)(unsigned long)(ar4));
        if (s4 != 0) {
          do {
            uVar7 = uVar7 + 1;
            puVar3 = s0 + 1;
            in_r0 = ((int)*(le<short>* )(unsigned)((uint)*s0 * 2 + iVar8) + uVar4) * 4;
            *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20)) = *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20)) + *(le<int>* )(unsigned)(puVar2 + in_r0);
            s0 = puVar3;
            (*(le<unsigned>* )(fr0_ - 0x20) = (unsigned)(unsigned long)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20)) + 1));
          } while (uVar7 < s4);
        }
        iVar8 = iVar8 + uVar4 * 2;
        (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)((le<int>* )(unsigned)((int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24)) + 1)));
      } while (((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24)) < s8);
    }
  }
  else {
    (*(le<unsigned>* )(fr0_ - 0x20) = (unsigned)(unsigned long)((le<int>* )(unsigned)0x0));
    if (s8 != 0) {
      do {
        bVar1 = *ar5;
        ar5 = ar5 + uVar5;
        uVar4 = (uint)bVar1 << 4 & uVar6;
        iVar8 = iVar8 + uVar4 * -2;
        uVar7 = 0;
        (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)(ar4));
        if (s4 != 0) {
          do {
            uVar7 = uVar7 + 1;
            puVar3 = s0 + 1;
            in_r0 = ((int)*(le<short>* )(unsigned)((uint)*s0 * 2 + iVar8) + uVar4) * 4;
            *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24)) = *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24)) + *(le<int>* )(unsigned)(puVar2 + in_r0);
            s0 = puVar3;
            (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24)) + 1));
          } while (uVar7 < s4);
        }
        iVar8 = iVar8 + uVar4 * 2;
        (*(le<unsigned>* )(fr0_ - 0x20) = (unsigned)(unsigned long)((le<int>* )(unsigned)((int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20)) + 1)));
      } while (((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20)) < s8);
    }
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c1212d4\n.set FUN_8c1212d4, FUN_8c1212d4_def\n");

}
