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
int FUN_8c0168b4_def(int ar4,int ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0168b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  float in_fr5 = 0;
  float in_fr4 = 0;
  float in_fr6 = 0;
  
  *ar6 = (float)*(int *)(unsigned)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4;
  ar6[1] = (float)*(int *)(unsigned)(ar4 + 0x10) * in_fr6 + in_fr5;
  ar6[2] = (float)*(int *)(unsigned)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4;
  ar6[3] = in_fr5;
  ar6[4] = (float)*(int *)(unsigned)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4 +
           (float)*(int *)(unsigned)(ar4 + 0xc) * in_fr6;
  ar6[5] = in_fr5;
  ar6[6] = (float)*(int *)(unsigned)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4 +
           (float)*(int *)(unsigned)(ar4 + 0xc) * in_fr6;
  iVar1 = *(int *)(unsigned)(ar4 + 0x10);
  ar6[7] = (float)iVar1 * in_fr6 + in_fr5;
  return iVar1;
}

__asm__(".globl _FUN_8c0168b4\n.set _FUN_8c0168b4, _FUN_8c0168b4_def\n");
