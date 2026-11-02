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
undefined4 FUN_8c0d6c18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6c18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined8 in_dr0 = 0;
  double dVar1;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd14 = 0;
  bool bVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6aac(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xe8) + 8))))((int *)(unsigned)(ar4 + 0xe8),ar5,ar6,ar7));
  if (cVar4 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),(int)in_dr0);
    in_fr15 = F32HI(in_dr0);
    in_dr0 = in_xd14;
  }
  else {
    dVar1 = *(double *)(unsigned)(ar4 + 0x34);
  }
  if (cVar3 == '\0') {
    bVar2 = F32HI(dVar1) < in_fr15;
  }
  else {
    bVar2 = dVar1 < CONCAT44D(in_fr14,in_fr15);
  }
  if (bVar2) {
    if (cVar4 == '\0') {
      *(float *)(unsigned)(ar4 + 0x34) = in_fr15;
      *(float *)(unsigned)(ar4 + 0x24) = in_fr15;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x34) = in_dr0;
      *(undefined8 *)(unsigned)(ar4 + 0x24) = in_dr0;
    }
  }
  *(undefined4 *)(unsigned)(ar4 + 100) = 6;
  return 100;
}

__asm__(".globl _FUN_8c0d6c18\n.set _FUN_8c0d6c18, _FUN_8c0d6c18_def\n");
