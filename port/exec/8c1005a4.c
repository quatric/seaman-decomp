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
undefined4 * FUN_8c1005a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1005a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  double dVar2;
  float fVar3;
  undefined8 in_xd0 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x188) == 6) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,0,ar6,ar7));
  }
  *(undefined2 *)(unsigned)(ar4 + 0x18c) = 0x78;
  if (cVar5 == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x13c),*(undefined4 *)(unsigned)(ar4 + 300));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 300);
    dVar2 = *(double *)(unsigned)(ar4 + 0x13c);
  }
  if (cVar4 == '\0') {
    fVar1 = F32LO(dVar2) + F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (cVar5 == '\0') {
    *(float *)(unsigned)(ar4 + 300) = fVar1;
    fVar1 = *(float *)(unsigned)(ar4 + 300);
    fVar3 = 615.0;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 300) = in_xd0;
    fVar1 = 615.0;
    fVar3 = 2.721048e+09;
  }
  if (cVar4 != '\0' || fVar3 <= fVar1) {
    if (cVar5 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 300) = 0x4419c000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 300) = 0x4f222fe64419c000;
    }
  }
  return ((undefined4 *)(unsigned)0x8c100618);
}

__asm__(".globl _FUN_8c1005a4\n.set _FUN_8c1005a4, _FUN_8c1005a4_def\n");
