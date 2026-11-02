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
int FUN_8c011bfc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c011bfc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ulonglong in_dr4 = 0;
  float fVar1;
  
  fVar1 = (float)(in_dr4 >> 0x20);
  if (((uint)fVar1 & 0x7f800000) < 0x4b000000) {
    ain0 = (int)fVar1;
  }
  if ((in_dr4 & 0x8000000000000000) != 0) {
    ain0 = 4;
  }
  return ain0;
}

__asm__(".globl _FUN_8c011bfc\n.set _FUN_8c011bfc, _FUN_8c011bfc_def\n");
