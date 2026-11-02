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
le<ushort>*  FUN_8c205860_def(undefined4 ar4,int ar5,le<ushort>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c205860");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  le<ushort>* puVar3;
  int iVar4;
  le<ushort>* puVar5;
  
  puVar3 = (le<ushort>* )(unsigned)0x0;
  (*(le<int>* )(fr0_ - 0x28)) = ar5;
  (*(le<ushort>*  *)(fr0_ - 0x24)) = ar6;
  iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753ec);
  for (puVar5 = (le<ushort>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c275400))[(short)ar4 * 5]; puVar5 != (le<ushort>* )(unsigned)0x0;
      puVar5 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar5 + 4))) {
    uVar1 = *puVar5;
    if (((((uVar1 & 4) == 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 0x1800) != 0)) &&
       (((*(le<int>* )(fr0_ - 0x28)) <= *(le<int>* )(unsigned)(puVar5 + 8) && (*(le<int>* )(unsigned)(puVar5 + 8) < iVar4)))) {
      if ((short)ar4 == 0) {
        iVar2 = *(le<int>* )(unsigned)(puVar5 + 6) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4);
      }
      else {
        iVar2 = *(le<int>* )(unsigned)(puVar5 + 6) - (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4);
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c204cc0(iVar2,((undefined1 *)(fr0_ - 0x2c)),ar6,ar7));
      if ((iVar2 != 0) && ((*((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 + 0x14)) & 0xf000) == (*(*(le<ushort>*  *)(fr0_ - 0x24)) & 0xf000))) {
        iVar4 = *(le<int>* )(unsigned)(puVar5 + 8);
        puVar3 = puVar5;
      }
    }
  }
  return puVar3;
}

__asm__(".globl FUN_8c205860\n.set FUN_8c205860, FUN_8c205860_def\n");

}
