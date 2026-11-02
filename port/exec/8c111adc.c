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
undefined4 FUN_8c111adc_def(int *ar4,int ar5,uint ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c111adc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint a6;
  uint a7;
  int a5;
  undefined8 in_dr0 = 0;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  
  fVar4 = F32HI(in_dr0);
  cVar7 = '\0';
  a6 = ar6;
  a7 = ar7;
  a5 = ar5;
  if (ar5 == 0) {
    ar5 = 1;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,1,ar6,ar7));
    if (cVar7 == '\0') {
      fVar6 = 2.1474836e+09;
    }
    else {
      fVar6 = -NAN;
    }
    fVar5 = fVar4;
    if (fVar6 < fVar4) {
      fVar5 = fVar4 + -4.2949673e+09;
    }
    a5 = (int)fVar5;
  }
  if (ar6 == 0) {
    ar5 = 2;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,2,a6,a7));
    ar6 = (uint)fVar4;
  }
  if (ar4[7] != 0) {
    ar5 = ar4[7];
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar5,a6,a7));
  }
  if ((ar6 & 0xffff) == 0) {
    ar4[7] = 0;
  }
  else {
    a6 = ar6 & 0xffff;
    ar5 = a5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x14))))(*ar4,a5,a6,a7));
    ar4[7] = iVar1;
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,2,a6,a7));
      return 0;
    }
  }
  ar4[2] = a5;
  *(short *)(unsigned)(ar4 + 3) = (short)ar6;
  ar4[4] = (ar6 & 0xffff) * a5;
  ar4[9] = ar4[7];
  ar4[8] = ar4[7] + ar4[4];
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112234(ar4,ar5,a6,a7));
  if ((ar7 & 0xff) == 0xff) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,3,a6,a7));
    ar7 = (uint)fVar4;
  }
  if ((ar7 & 0xff) == 0) {
    ar4[6] = 0;
    uVar2 = 0;
    if (ar4[5] != 0) {
      do {
        uVar3 = uVar2 + 1;
        *(undefined4 *)(unsigned)(uVar2 * 4 + ar4[0xb]) = 0;
        uVar2 = uVar3;
      } while (uVar3 < (uint)ar4[5]);
    }
  }
  else {
    ar4[6] = ar4[5];
  }
  if ((*(short *)(fr0_ + 0x00000000)) == -1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,4,a6,a7));
    (*(short *)(fr0_ + 0x00000000)) = (short)(int)fVar4;
  }
  *(short *)(unsigned)((int)ar4 + 0xe) = (*(short *)(fr0_ + 0x00000000));
  if ((*(char *)(fr0_ + 0x00000004)) == -1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,5,a6,a7));
    *(char *)(unsigned)((int)ar4 + 0x31) = (char)(int)fVar4;
  }
  else {
    *(char *)(unsigned)((int)ar4 + 0x31) = (*(char *)(fr0_ + 0x00000004));
  }
  return ar4;
}

__asm__(".globl _FUN_8c111adc\n.set _FUN_8c111adc, _FUN_8c111adc_def\n");
