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
float * FUN_8c031fc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031fc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  
  if (*(float *)(unsigned)(ar4 + 0x24) <= *(float *)(unsigned)(ar4 + 0x28)) {
    if (*(float *)(unsigned)(ar4 + 0x28) <= *(float *)(unsigned)(ar4 + 0x24)) {
      pfVar1 = (float *)(unsigned)0x44;
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
    }
    else {
      *(float *)(unsigned)(ar4 + 0x28) =
           *(float *)(unsigned)(ar4 + 0x28) - *(float *)(unsigned)(ar4 + 0x24) / *(float *)(unsigned)(ar4 + 0x38);
      pfVar1 = (float *)(unsigned)(ar4 + 0x24);
      if (*(float *)(unsigned)(ar4 + 0x28) <= *pfVar1) {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
        pfVar1 = (float *)(unsigned)0x44;
        *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
      }
    }
  }
  else {
    *(float *)(unsigned)(ar4 + 0x28) =
         *(float *)(unsigned)(ar4 + 0x28) + *(float *)(unsigned)(ar4 + 0x24) / *(float *)(unsigned)(ar4 + 0x34);
    pfVar1 = (float *)(unsigned)(ar4 + 0x24);
    if (*pfVar1 <= *(float *)(unsigned)(ar4 + 0x28)) {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
      pfVar1 = (float *)(unsigned)0x44;
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
    }
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c031fc4\n.set _FUN_8c031fc4, _FUN_8c031fc4_def\n");
