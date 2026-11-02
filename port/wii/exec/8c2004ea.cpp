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
undefined4 FUN_8c2004ea_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2004ea");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  le<int>* piVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar5 = (byte *)(unsigned)(ar5 + 0x10);
  *(le<uint>* )(unsigned)(ar5 + 4) = (uint)*ar4;
  pbVar6 = ar4 + 4;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    *pbVar5 = bVar1;
    pbVar5 = pbVar5 + 1;
  } while (pbVar5 < (byte *)(unsigned)(ar5 + 0x1c));
  pbVar5 = (byte *)(unsigned)(ar5 + 0x20);
  *(undefined1 *)(unsigned)(ar5 + 0x1c) = 0;
  pbVar6 = ar4 + 0x10;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    *pbVar5 = bVar1;
    piVar2 = 0x8c4783dc;
    pbVar5 = pbVar5 + 1;
  } while (pbVar5 < (byte *)(unsigned)(ar5 + 0x28));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<undefined4>* )(unsigned)0x8c4783dc + 0xc))))(ar4,2,1,vr7));
  *(le<uint>* )(unsigned)(ar5 + 0xc) = uVar3 & 0xffff;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar2 + 0xc))))(ar4,0x18,vr6,vr7));
  *(le<uint>* )(unsigned)(ar5 + 0x28) = uVar3 & 0xffff;
  *(byte *)(unsigned)(ar5 + 10) = ar4[1];
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar2 + 0xc))))(ar4,0x1a,vr6,vr7));
  *(le<short>* )(unsigned)(ar5 + 8) = (short)uVar4;
  return uVar4;
}

__asm__(".globl FUN_8c2004ea\n.set FUN_8c2004ea, FUN_8c2004ea_def\n");

}
