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
undefined4 Class_129808_m1_014894_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_129808_m1_014894";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int *ar5_00;
  float in_fr1 = 0;
  float fVar2;
  float in_fr4 = 0;
  float in_PR = 0;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  ar5_00 = ar4 + 5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023aa0(ar4 + 1,ar5_00,ar6,ar7));
  if (cVar4 == '\0') {
    in_fr1 = (float)ar4[2];
  }
  uVar1 = 0;
  fVar2 = in_fr4;
  if (cVar4 == '\0') {
    fVar2 = in_fr1;
    in_PR = in_fr4;
  }
  if (cVar3 == '\0' && fVar2 < in_PR) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x14))))(ar4,ar5_00,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _Class_129808_m1_014894\n.set _Class_129808_m1_014894, _Class_129808_m1_014894_def\n");
