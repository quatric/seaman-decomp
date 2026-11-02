#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d7dcc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7dcc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint in_fr1 = 0;
  uint extraout_fr1 = 0;
  char cVar2;
  
  cVar2 = '\0';
  for (uVar1 = 0; uVar1 < (uint)ar4[4]; uVar1 = uVar1 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0149d4(uVar1 * 0x38 + ar4[3],ar5,ar6,ar7));
    in_fr1 = extraout_fr1;
  }
  ar4[2] = 4100000000;
  *ar4 = 0;
  ar4[1] = 0;
  if (cVar2 == '\0') {
    ar4[5] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 5) = (ulonglong)in_fr1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0d7dcc\n.set _FUN_8c0d7dcc, _FUN_8c0d7dcc_def\n");
