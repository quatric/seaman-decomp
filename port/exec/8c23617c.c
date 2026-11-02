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
undefined4
FUN_8c23617c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23617c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr1 = 0;
  undefined4 in_fr0 = 0;
  undefined4 in_fr3 = 0;
  undefined4 in_fr2 = 0;
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr7 = 0;
  undefined4 in_fr6 = 0;
  undefined4 in_fr9 = 0;
  undefined4 in_fr8 = 0;
  undefined4 in_fr11 = 0;
  undefined4 in_fr10 = 0;
  undefined4 in_fr13 = 0;
  undefined4 in_fr12 = 0;
  undefined4 in_fr15 = 0;
  undefined4 in_fr14 = 0;
  
  ar4[0xf] = in_fr15;
  ar4[0xe] = in_fr14;
  ar4[0xd] = in_fr13;
  ar4[0xc] = in_fr12;
  ar4[0xb] = in_fr11;
  ar4[10] = in_fr10;
  ar4[9] = in_fr9;
  ar4[8] = in_fr8;
  ar4[7] = in_fr7;
  ar4[6] = in_fr6;
  ar4[5] = in_fr5;
  ar4[4] = in_fr4;
  ar4[3] = in_fr3;
  ar4[2] = in_fr2;
  ar4[1] = in_fr1;
  *ar4 = in_fr0;
  return ain0;
}

__asm__(".globl _FUN_8c23617c\n.set _FUN_8c23617c, _FUN_8c23617c_def\n");
