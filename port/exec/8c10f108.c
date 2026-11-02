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
undefined8 * FUN_8c10f108_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f108";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  ulonglong in_dr2 = 0;
  float in_fr5 = 0;
  float fVar6;
  float fVar7;
  char cVar8;
  
  cVar8 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10ecd8(ar5,ar4,ar6,ar7));
  uVar1 = 1;
  uVar3 = ar4 >> 1;
  if (cVar8 == '\0') {
    fVar6 = 0.5;
  }
  else {
    in_fr5 = 0.5;
    fVar6 = -NAN;
  }
  if (1 < uVar3) {
    do {
      fVar5 = (float)in_dr2;
      ar4 = ar4 - 1;
      pfVar4 = (float *)(unsigned)(uVar1 * 4 + ar5);
      if (cVar8 == '\0') {
        in_fr5 = *pfVar4;
      }
      pfVar2 = (float *)(unsigned)(ar4 * 4 + ar5);
      if (cVar8 == '\0') {
        fVar7 = *pfVar2;
        fVar5 = in_fr5;
      }
      else {
        fVar7 = (float)((ulonglong)*(undefined8 *)(unsigned)pfVar2 >> 0x20);
      }
      uVar1 = uVar1 + 1;
      cVar8 = '\0';
      in_fr5 = (in_fr5 + fVar7) * fVar6;
      fVar5 = (fVar5 - fVar7) * fVar6;
      in_dr2 = (ulonglong)(uint)fVar5;
      *pfVar2 = fVar5;
      *pfVar4 = in_fr5;
    } while (uVar1 < uVar3);
  }
  return ((undefined1 *)(unsigned)0x8c10f160);
}

__asm__(".globl _FUN_8c10f108\n.set _FUN_8c10f108, _FUN_8c10f108_def\n");
