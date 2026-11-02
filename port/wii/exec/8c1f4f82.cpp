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
undefined4 FUN_8c1f4f82_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f4f82");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte bVar5;
  
  pbVar4 = (byte *)(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 4 + ar4 * 8);
  iVar1 = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0xfe8 + (1 - *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10b4)) * 0x60 +
                    (((le<undefined4>* )(unsigned)0x8c26c728))[ar4] * 4));
  if ((iVar1 == -1) || (iVar1 == -0x100)) {
    *(le<int>* )(unsigned)(pbVar4 + 4) = *(le<int>* )(unsigned)(pbVar4 + 4) + 1;
    if (*(le<uint>* )(unsigned)(pbVar4 + 4) <= *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10dc)) {
      return 0;
    }
    bVar5 = 0;
    uVar3 = 0xffffffff;
  }
  else {
    if (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4727b4) + 0x10c4) == 1) {
      pbVar2 = &(*(byte *)(fr0_ - 0x3));
    }
    else {
      pbVar2 = ((byte *)(fr0_ - 0x2));
    }
    bVar5 = *pbVar2;
    uVar3 = 0;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
  }
  pbVar4[1] = *pbVar4;
  *pbVar4 = bVar5;
  pbVar4[2] = (pbVar4[1] ^ *pbVar4) & *pbVar4;
  pbVar4[3] = (pbVar4[1] ^ *pbVar4) & ~*pbVar4;
  return uVar3;
}

__asm__(".globl FUN_8c1f4f82\n.set FUN_8c1f4f82, FUN_8c1f4f82_def\n");

}
