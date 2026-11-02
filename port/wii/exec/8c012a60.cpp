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
undefined4 FUN_8c012a60_def(undefined4 ar4,le<short>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012a60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int ar6_00;
  byte *ar4_00;
  
  *ar5 = (short)ar4 + 0x3f;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c012af8(ar4,((byte *)(fr0_ - 0x1c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), memset(ar6,0,8,ar7));
  iVar3 = 0;
  ar6_00 = 0;
  for (ar4_00 = ((byte *)(fr0_ - 0x1c)); *ar4_00 == 0; ar4_00 = ar4_00 + 1) {
    iVar3 = iVar3 + 1;
    *ar5 = *ar5 + -8;
  }
  for (uVar2 = 0x80; (*ar4_00 & uVar2) == 0; uVar2 = uVar2 >> 1) {
    ar6_00 = ar6_00 + 1;
  }
  ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c01289c(ar4_00,8 - iVar3,ar6_00,ar7); });
  *ar5 = *ar5 - (short)ar6_00;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), memmove(ar6,ar4_00,8 - iVar3,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c012a60\n.set FUN_8c012a60, FUN_8c012a60_def\n");

}
