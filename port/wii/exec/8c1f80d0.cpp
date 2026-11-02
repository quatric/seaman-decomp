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
undefined4 FUN_8c1f80d0_def(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f80d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = 0;
  bVar3 = 0;
  do {
    iVar1 = iVar2 + 2;
    iVar2 = iVar2 + 1;
    bVar3 = bVar3 + ar4[iVar1];
  } while (iVar2 < 6);
  if ((bVar3 == ar4[1]) && ((byte)~bVar3 == *ar4)) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c1f80d0\n.set FUN_8c1f80d0, FUN_8c1f80d0_def\n");

}
