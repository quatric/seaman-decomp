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
int FUN_8c263d90_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c263d90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  float fVar1;
  double dVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c263cd8(ar4,&(*(int *)(fr0_ - 0xc)),((int *)(fr0_ - 0x8)),ar7));
  if (cVar4 == '\0') {
    fVar1 = (float)(*(int *)(fr0_ - 0xc)) / (float)((int *)(fr0_ - 0x8))[0];
  }
  else {
    fVar1 = SUB84((double)((int *)(fr0_ - 0x8))[0] / (double)((int *)(fr0_ - 0x8))[0],0);
  }
  if (cVar5 == '\0') {
    dVar2 = CONCAT44D(0x42c80000,fVar1);
  }
  else {
    dVar2 = -3.874703964122394e-250;
  }
  if (cVar4 == '\0') {
    iVar3 = (int)(F32LO(dVar2) * F32HI(dVar2));
  }
  else {
    iVar3 = (int)(dVar2 * dVar2);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c263d90\n.set _FUN_8c263d90, _FUN_8c263d90_def\n");
