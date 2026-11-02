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
undefined4 FUN_8c0d75a0_def(int ar4,float *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d75a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xc4) + 0x38))))((int *)(unsigned)(ar4 + 0xc4),&(*(float *)(fr0_ - 0x68)),ar6,ar7));
  fVar1 = (*(float *)(fr0_ - 0x24));
  if (cVar4 == '\0') {
    fVar1 = *(float *)(unsigned)(ar6 + 8);
    (*(float *)(fr0_ - 0x20)) = (*(float *)(fr0_ - 0x24));
  }
  if (cVar3 != '\0' || fVar1 <= (*(float *)(fr0_ - 0x20))) {
    fVar1 = (*(float *)(fr0_ - 0x68));
    fVar2 = (*(float *)(fr0_ - 0x64));
    if (cVar4 == '\0') {
      fVar1 = *ar5;
      fVar2 = (*(float *)(fr0_ - 0x68));
    }
    if (cVar3 != '\0' || fVar2 <= fVar1) {
      fVar1 = (*(float *)(fr0_ - 0x44));
      if (cVar4 == '\0') {
        fVar1 = *ar5;
        (*(float *)(fr0_ - 0x40)) = (*(float *)(fr0_ - 0x44));
      }
      if (cVar3 != '\0' || fVar1 <= (*(float *)(fr0_ - 0x40))) {
        fVar1 = (*(float *)(fr0_ - 0x34));
        if (cVar4 == '\0') {
          fVar1 = ar5[1];
          (*(float *)(fr0_ - 0x30)) = (*(float *)(fr0_ - 0x34));
        }
        if (cVar3 != '\0' || (*(float *)(fr0_ - 0x30)) <= fVar1) {
          fVar1 = (*(float *)(fr0_ - 0x64));
          if (cVar4 == '\0') {
            fVar1 = ar5[1];
            (*(float *)(fr0_ - 0x60)) = (*(float *)(fr0_ - 0x64));
          }
          if (cVar3 != '\0' || fVar1 <= (*(float *)(fr0_ - 0x60))) {
            return 1;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0d75a0\n.set _FUN_8c0d75a0, _FUN_8c0d75a0_def\n");
