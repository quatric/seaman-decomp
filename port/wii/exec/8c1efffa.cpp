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
le<uint>*  FUN_8c1efffa_def(le<uint>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1efffa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<uint>* puVar2;
  uint uVar3;
  le<uint>* puVar4;
  
  puVar2 = ar4 + 1;
  puVar4 = ar4 + 1;
  iVar1 = 0;
  uVar3 = 0x80000000;
  do {
    if ((uVar3 & *ar4) != 0) {
      if (ar5 == uVar3) {
        return puVar4;
      }
      puVar2 = puVar2 + 1;
      puVar4 = puVar2;
    }
    iVar1 = iVar1 + 1;
    uVar3 = uVar3 >> 1;
  } while (iVar1 < 0x20);
  return (le<uint>* )(unsigned)0;
}

__asm__(".globl FUN_8c1efffa\n.set FUN_8c1efffa, FUN_8c1efffa_def\n");

}
