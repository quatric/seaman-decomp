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
undefined4 FUN_8c0232e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0232e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float extraout_fr1 = 0;
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  float in_fr15 = 0;
  float fVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  uVar1 = 2;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0231c8(ar5,ar5,ar6,ar7));
  if (cVar4 == '\0') {
    in_fr15 = extraout_fr0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0231c8(ar4,ar5,ar6,ar7));
  fVar2 = extraout_fr1;
  if (cVar4 == '\0') {
    fVar2 = in_fr15;
  }
  if (cVar3 == '\0' && fVar2 < extraout_fr0_00) {
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0232e8\n.set _FUN_8c0232e8, _FUN_8c0232e8_def\n");
