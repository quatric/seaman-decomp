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
undefined4 FUN_8c256ce0_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c256ce0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 in_xd0 = 0;
  float fVar10;
  undefined8 in_xd2 = 0;
  float fVar11;
  float in_xf4 = 0;
  float in_xf5 = 0;
  float in_xf6 = 0;
  float in_xf7 = 0;
  undefined8 in_xd8 = 0;
  float fVar12;
  undefined8 in_xd10 = 0;
  float fVar13;
  undefined8 in_xd12 = 0;
  float fVar14;
  undefined8 in_xd14 = 0;
  float fVar15;
  
  fVar14 = F32HI(in_xd12);
  fVar15 = F32HI(in_xd14);
  if (ar4 != (float *)(unsigned)0x0) {
    fVar1 = ((float)(ushort)ar5 * 6.2831855) / 65536.0;
    fVar3 = (float)sin(fVar1);
    fVar1 = (float)cos(fVar1);
    fVar3 = (float)fVar3;
    fVar1 = (float)fVar1;
    lVar9 = (ulonglong)(uint)fVar1 << 0x20;
    lVar8 = (ulonglong)(uint)fVar3 << 0x20;
    fVar4 = *ar4;
    fVar2 = ar4[1];
    fVar6 = ar4[2];
    fVar5 = ar4[3];
                    
    fVar10 = F32HI(in_xd0);
    fVar12 = F32HI(in_xd8);
    fVar11 = F32HI(in_xd2);
    fVar13 = F32HI(in_xd10);
                    
    fVar7 = (float)in_xd0 * 0.0 + in_xf4 * fVar3 + (float)in_xd8 * 0.0 + (float)in_xd12 * fVar1;
    fVar7 = fVar10 * 0.0 + in_xf5 * fVar3 + fVar12 * 0.0 + fVar14 * fVar1;
    fVar7 = (float)in_xd2 * 0.0 + in_xf6 * fVar3 + (float)in_xd10 * 0.0 + (float)in_xd14 * fVar1;
    fVar1 = fVar11 * 0.0 + in_xf7 * fVar3 + fVar13 * 0.0 + fVar15 * fVar1;
    ar4[0xb] = (float)lVar9;
    ar4[10] = F32HI(lVar9);
    ar4[9] = (float)lVar8;
    ar4[8] = F32HI(lVar8);
    ar4[3] = (float)in_xd2 * fVar2 + in_xf6 * fVar4 + (float)in_xd10 * fVar5 +
             (float)in_xd14 * fVar6;
    ar4[2] = fVar11 * fVar2 + in_xf7 * fVar4 + fVar13 * fVar5 + fVar15 * fVar6;
    ar4[1] = (float)in_xd0 * fVar2 + in_xf4 * fVar4 + (float)in_xd8 * fVar5 + (float)in_xd12 * fVar6
    ;
    *ar4 = fVar10 * fVar2 + in_xf5 * fVar4 + fVar12 * fVar5 + fVar14 * fVar6;
    return ain0;
  }
  fVar14 = ((float)(ushort)ar5 * 6.2831855) / 65536.0;
  sin(fVar14);
  cos(fVar14);
  return ain0;
}

__asm__(".globl _FUN_8c256ce0\n.set _FUN_8c256ce0, _FUN_8c256ce0_def\n");
