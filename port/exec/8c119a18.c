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
int FUN_8c119a18_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c119a18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  
  cVar4 = '\0';
  fVar1 = (float)ar5;
  if (ar5 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)ar6;
  if (ar6 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = (float)ar4;
  if (ar4 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar3 = (fVar1 - fVar2) / fVar3;
  fVar1 = 0.08544444;
  if (-26.0 <= fVar3) {
    if (78.0 < fVar3) {
      fVar1 = -4.4671087;
      (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7));
      if (cVar4 == '\0') {
        fVar1 = 1.0;
      }
      fVar1 = 10000.0 / (extraout_fr0_00 + fVar1);
    }
    else {
      fVar1 = (91.0 - fVar3) * 76.899994;
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7));
    if (cVar4 == '\0') {
      fVar1 = 1.0;
    }
    fVar1 = 10000.0 / (extraout_fr0 + fVar1);
  }
  if (2.1474836e+09 <= fVar1) {
    fVar1 = fVar1 - 4.2949673e+09;
  }
  return (int)fVar1;
}

__asm__(".globl _FUN_8c119a18\n.set _FUN_8c119a18, _FUN_8c119a18_def\n");
