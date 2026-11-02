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
undefined1 * FUN_8c012a24_def(undefined1 *ar4,le<uint>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012a24");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = ar4 + 4;
  iVar4 = 0x18;
  do {
    uVar3 = -iVar4;
    if ((int)uVar3 < 0) {
      uVar2 = (undefined1)(*ar5 >> (~uVar3 & 0x1f) + 1);
    }
    else {
      uVar2 = (undefined1)(*ar5 << (uVar3 & 0x1f));
    }
    *ar4 = uVar2;
    ar4 = ar4 + 1;
    iVar4 = iVar4 + -8;
  } while (ar4 < puVar1);
  return puVar1;
}

__asm__(".globl FUN_8c012a24\n.set FUN_8c012a24, FUN_8c012a24_def\n");

}
