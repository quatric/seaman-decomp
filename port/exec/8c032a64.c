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
int rand_range_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "rand_range";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  double dVar2;
  undefined4 in_fr3 = 0;
  double dVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
  if (cVar4 == '\0') {
    dVar3 = CONCAT44D((float)(ar6 - ar5),in_fr3);
  }
  else {
    dVar3 = (double)(ar6 - ar5);
  }
  if (cVar5 == '\0') {
    dVar2 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar2 = -1.5729774447110699e+308;
  }
  if (cVar4 == '\0') {
    iVar1 = (int)(F32HI(dVar3) *
                 (F32LO(dVar2) / F32HI(dVar2)));
  }
  else {
    iVar1 = (int)(dVar3 * (dVar2 / dVar2));
  }
  return iVar1 + ar5;
}

__asm__(".globl _rand_range\n.set _rand_range, _rand_range_def\n");
