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
int FUN_8c113d68_def(le<int>* ar4,le<int>* ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c113d68");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  le<ushort>*  s0 = (le<ushort>* )(unsigned long)*(le<unsigned>* )(vsp + 0);
  le<ushort>*  s4 = (le<ushort>* )(unsigned long)*(le<unsigned>* )(vsp + 4);
  int s8 = *(le<int>* )(vsp + 8);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  short sVar1;
  int in_r0 = (int)(unsigned long)vin0;
  int iVar2;
  le<ushort>* puVar3;
  le<int>* piVar4;
  int iVar5;
  le<short>* psVar6;
  
  puVar3 = (le<ushort>* )(unsigned)*ar6;
  piVar4 = (le<int>* )(unsigned)*ar4;
  psVar6 = (le<short>* )(unsigned)((uint)*s0 * 2 + s8);
  while (s0 < s4) {
    s0 = s0 + 1;
    *piVar4 = *ar5;
    piVar4 = piVar4 + 1;
    iVar5 = (uint)*s0 * 2 + s8;
    iVar2 = iVar5 - (int)psVar6;
    *ar5 = *ar5 + ((int)(iVar2 + (uint)(iVar2 < 0)) >> 1) + 2;
    for (; psVar6 < (le<short>* )(unsigned)(iVar5 + -2); psVar6 = psVar6 + 1) {
      *puVar3 = *psVar6 << 2 | 2;
      puVar3 = puVar3 + 1;
    }
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
    *puVar3 = sVar1 << 2 | 1;
    (*(le<short>* )(fr0_ - 0x1a)) = (short)((uint)ar7 >> 0x10);
    in_r0 = (int)(*(le<short>* )(fr0_ - 0x1a));
    *(le<undefined4>* )(unsigned)(puVar3 + 1) = ar7;
    puVar3 = puVar3 + 3;
  }
  *ar6 = (int)puVar3;
  *ar4 = (int)piVar4;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c113d68\n.set FUN_8c113d68, FUN_8c113d68_def\n");

}
