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
undefined4 FUN_8c035af8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c035af8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined8 in_dr0 = 0;
  float fVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  
  fVar2 = F32HI(in_dr0);
  cVar5 = '\0';
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035b50(ar4[5],ar5,ar6,ar7));
  if ((char)uVar1 < '\x04') {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar4 + 0x188))))((int *)(unsigned)*ar4,ar5,ar6,ar7));
    if (cVar5 == '\0') {
      fVar3 = 40.0;
    }
    else {
      fVar2 = 40.0;
      fVar3 = 5.547118e+19;
    }
    if (cVar4 == '\0' && fVar3 < fVar2) {
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c035af8\n.set _FUN_8c035af8, _FUN_8c035af8_def\n");
