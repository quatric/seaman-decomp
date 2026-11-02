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
undefined4 FUN_8c0d7e80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7e80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);
  int s4 = *(int *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_fr1 = 0;
  double dVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102974(ar4 + 0x1c,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102974(ar4 + 0x30,ar5,ar6,ar7));
  if (cVar3 == '\0') {
    dVar2 = CONCAT44D((float)s4,in_fr1);
  }
  else {
    dVar2 = (double)s4;
  }
  if (cVar4 == '\0') {
    *(int *)(unsigned)(ar4 + 0x18) = (int)(D2U(dVar2) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x18) = dVar2;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d7e80\n.set _FUN_8c0d7e80, _FUN_8c0d7e80_def\n");
