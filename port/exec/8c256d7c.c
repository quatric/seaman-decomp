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
undefined4 FUN_8c256d7c_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c256d7c";
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
  float fVar8;
  undefined8 in_xd0 = 0;
  float fVar9;
  undefined8 in_xd2 = 0;
  float fVar10;
  undefined8 in_xd4 = 0;
  float fVar11;
  undefined8 in_xd6 = 0;
  float fVar12;
  float in_xf8 = 0;
  float in_xf9 = 0;
  float in_xf10 = 0;
  float in_xf11 = 0;
  undefined8 in_xd12 = 0;
  float fVar13;
  undefined8 in_xd14 = 0;
  float fVar14;
  
  fVar13 = F32HI(in_xd12);
  fVar14 = F32HI(in_xd14);
  if (ar4 != (float *)(unsigned)0x0) {
    fVar1 = ((float)(ushort)ar5 * 6.2831855) / 65536.0;
    sin(fVar1);
    cos(fVar1);
    fVar2 = *ar4;
    fVar1 = ar4[1];
    fVar4 = ar4[2];
    fVar3 = ar4[3];
    fVar6 = ar4[4];
    fVar5 = ar4[5];
    fVar8 = ar4[6];
    fVar7 = ar4[7];
                    
    fVar9 = F32HI(in_xd0);
    fVar11 = F32HI(in_xd4);
    fVar10 = F32HI(in_xd2);
    fVar12 = F32HI(in_xd6);
                    
    ar4[7] = (float)in_xd2 * fVar5 + (float)in_xd6 * fVar6 + in_xf10 * fVar7 +
             (float)in_xd14 * fVar8;
    ar4[6] = fVar10 * fVar5 + fVar12 * fVar6 + in_xf11 * fVar7 + fVar14 * fVar8;
    ar4[5] = (float)in_xd0 * fVar5 + (float)in_xd4 * fVar6 + in_xf8 * fVar7 + (float)in_xd12 * fVar8
    ;
    ar4[4] = fVar9 * fVar5 + fVar11 * fVar6 + in_xf9 * fVar7 + fVar13 * fVar8;
    ar4[3] = (float)in_xd2 * fVar1 + (float)in_xd6 * fVar2 + in_xf10 * fVar3 +
             (float)in_xd14 * fVar4;
    ar4[2] = fVar10 * fVar1 + fVar12 * fVar2 + in_xf11 * fVar3 + fVar14 * fVar4;
    ar4[1] = (float)in_xd0 * fVar1 + (float)in_xd4 * fVar2 + in_xf8 * fVar3 + (float)in_xd12 * fVar4
    ;
    *ar4 = fVar9 * fVar1 + fVar11 * fVar2 + in_xf9 * fVar3 + fVar13 * fVar4;
    return ain0;
  }
  fVar13 = ((float)(ushort)ar5 * 6.2831855) / 65536.0;
  sin(fVar13);
  cos(fVar13);
  return ain0;
}

__asm__(".globl _FUN_8c256d7c\n.set _FUN_8c256d7c, _FUN_8c256d7c_def\n");
