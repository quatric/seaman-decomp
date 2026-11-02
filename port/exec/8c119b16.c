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
undefined4 FUN_8c119b16_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c119b16";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 in_dr0 = 0;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  
  fVar6 = F32HI(in_dr0);
  if (ar6 != ar7) {
    cVar7 = '\0';
    fVar2 = (float)ar5;
    if (ar5 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    iVar1 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1cc) + ar6 * 4);
    fVar3 = (float)iVar1;
    if (iVar1 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    iVar1 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1cc) + ar7 * 4);
    fVar4 = (float)iVar1;
    if (iVar1 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    fVar5 = (float)(ar6 - ar7);
    if (ar6 - ar7 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    fVar5 = ((fVar2 - fVar3) + fVar4) / fVar5;
    fVar2 = 0.08544444;
    if (-26.0 <= fVar5) {
      if (78.0 < fVar5) {
        fVar2 = -4.4671087;
        (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7));
        if (cVar7 == '\0') {
          fVar2 = 1.0;
        }
        fVar6 = 10000.0 / (fVar6 + fVar2);
      }
      else {
        fVar6 = (91.0 - fVar5) * 76.899994;
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7));
      if (cVar7 == '\0') {
        fVar2 = 1.0;
      }
      fVar6 = 10000.0 / (fVar6 + fVar2);
    }
    fVar6 = fVar6 + 0.5;
    if (2.1474836e+09 <= fVar6) {
      fVar6 = fVar6 - 4.2949673e+09;
    }
    return (int)fVar6;
  }
  return 0;
}

__asm__(".globl _FUN_8c119b16\n.set _FUN_8c119b16, _FUN_8c119b16_def\n");
