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
int FUN_8c010960_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c010960";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  int in_r0 = (int)(unsigned long)vin0;
  int iVar2;
  char *in_r1 = (char *)(unsigned long)vin1;
  char *in_r2 = 0;
  char *pcVar3;
  
  iVar2 = 0;
  if (in_r0 != 0) {
    pcVar3 = in_r2 + in_r0;
    do {
      cVar1 = *in_r2;
      *in_r1 = cVar1;
      if (pcVar3 <= in_r2 + 1) {
        return (int)cVar1;
      }
      cVar1 = in_r2[1];
      in_r1[1] = cVar1;
      if (pcVar3 <= in_r2 + 2) {
        return (int)cVar1;
      }
      cVar1 = in_r2[2];
      in_r1[2] = cVar1;
      if (pcVar3 <= in_r2 + 3) {
        return (int)cVar1;
      }
      cVar1 = in_r2[3];
      iVar2 = (int)cVar1;
      in_r2 = in_r2 + 4;
      in_r1[3] = cVar1;
      in_r1 = in_r1 + 4;
    } while (in_r2 < pcVar3);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c010960\n.set _FUN_8c010960, _FUN_8c010960_def\n");
