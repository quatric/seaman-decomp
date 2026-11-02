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
float * FUN_8c016cec_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c016cec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int * s0 = (int *)(unsigned long)*(unsigned *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 in_xd0 = 0;
  undefined4 in_PR = 0;
  char cVar6;
  char cVar7;
  undefined4 uVar5;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (*(undefined4 *)(fr0_ - 0x10)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*s0 + 0x34))))(s0,((undefined1 *)(fr0_ - 0x20)),ar6,ar7));
  if (cVar7 == '\0') {
    uVar5 = *(undefined4 *)(unsigned)ar5;
    *(undefined4 *)(unsigned)(ar4 + 0x30) = uVar5;
    *(undefined4 *)(unsigned)(ar4 + 4) = uVar5;
    uVar5 = *(undefined4 *)(unsigned)((int)ar5 + 4);
    *(undefined4 *)(unsigned)(ar4 + 0x34) = uVar5;
    *(undefined4 *)(unsigned)(ar4 + 8) = uVar5;
    uVar5 = *(undefined4 *)(unsigned)(ar5 + 1);
    *(undefined4 *)(unsigned)(ar4 + 0x38) = uVar5;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = uVar5;
    *(undefined4 *)(unsigned)(ar4 + 0x20) = *(undefined4 *)(unsigned)ar7;
    *(undefined4 *)(unsigned)(ar4 + 0x24) = *(undefined4 *)(unsigned)((int)ar7 + 4);
    *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar7 + 1);
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),(*(undefined4 *)(fr0_ - 0x14)));
  }
  else {
    uVar3 = *ar5;
    *(undefined8 *)(unsigned)(ar4 + 0x30) = uVar3;
    *(undefined8 *)(unsigned)(ar4 + 4) = uVar3;
    uVar3 = *(undefined8 *)(unsigned)((int)ar5 + 4);
    *(undefined8 *)(unsigned)(ar4 + 0x34) = uVar3;
    *(undefined8 *)(unsigned)(ar4 + 8) = uVar3;
    uVar3 = ar5[1];
    *(undefined8 *)(unsigned)(ar4 + 0x38) = uVar3;
    *(undefined8 *)(unsigned)(ar4 + 0xc) = uVar3;
    *(undefined8 *)(unsigned)(ar4 + 0x20) = *ar7;
    *(undefined8 *)(unsigned)(ar4 + 0x24) = *(undefined8 *)(unsigned)((int)ar7 + 4);
    *(undefined8 *)(unsigned)(ar4 + 0x28) = ar7[1];
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
    dVar4 = *(double *)(unsigned)(ar4 + 0x28);
  }
  pfVar1 = (float *)(unsigned)(ar4 + 0x3c);
  if (cVar6 == '\0') {
    fVar2 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar2 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar7 == '\0') {
    *pfVar1 = fVar2;
  }
  else {
    *(undefined8 *)(unsigned)pfVar1 = in_xd0;
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c016cec\n.set _FUN_8c016cec, _FUN_8c016cec_def\n");
