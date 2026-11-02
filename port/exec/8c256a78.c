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
undefined4 FUN_8c256a78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c256a78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_xf0 = 0;
  float in_xf1 = 0;
  float in_xf2 = 0;
  float in_xf3 = 0;
  undefined8 in_xd4 = 0;
  float fVar9;
  undefined8 in_xd6 = 0;
  float fVar10;
  undefined8 in_xd8 = 0;
  float fVar11;
  undefined8 in_xd10 = 0;
  float fVar12;
  undefined8 in_xd12 = 0;
  float fVar13;
  undefined8 in_xd14 = 0;
  float fVar14;
  
  fVar13 = F32HI(in_xd12);
  fVar14 = F32HI(in_xd14);
  if (ar4 != 0) {
    fVar1 = ((float)(ushort)ar5 * 6.2831855) / 65536.0;
    fVar2 = (float)sin(fVar1);
    fVar1 = (float)cos(fVar1);
    fVar2 = (float)fVar2;
    fVar1 = (float)fVar1;
    lVar4 = (ulonglong)(uint)fVar2 << 0x20;
    fVar6 = *(float *)(unsigned)(ar4 + 0x10);
    fVar5 = *(float *)(unsigned)(ar4 + 0x14);
    fVar8 = *(float *)(unsigned)(ar4 + 0x18);
    fVar7 = *(float *)(unsigned)(ar4 + 0x1c);
                    
    fVar9 = F32HI(in_xd4);
    fVar11 = F32HI(in_xd8);
    fVar10 = F32HI(in_xd6);
    fVar12 = F32HI(in_xd10);
    fVar3 = in_xf2 * fVar1 + (float)in_xd6 * 0.0 + (float)in_xd10 * 0.0 + (float)in_xd14 * fVar2;
    fVar3 = in_xf3 * fVar1 + fVar10 * 0.0 + fVar12 * 0.0 + fVar14 * fVar2;
                    
    *(float *)(unsigned)(ar4 + 0x2c) =
         in_xf2 * fVar5 + (float)in_xd6 * fVar6 + (float)in_xd10 * fVar7 + (float)in_xd14 * fVar8;
    *(float *)(unsigned)(ar4 + 0x28) = in_xf3 * fVar5 + fVar10 * fVar6 + fVar12 * fVar7 + fVar14 * fVar8;
    *(float *)(unsigned)(ar4 + 0x24) =
         in_xf0 * fVar5 + (float)in_xd4 * fVar6 + (float)in_xd8 * fVar7 + (float)in_xd12 * fVar8;
    *(float *)(unsigned)(ar4 + 0x20) = in_xf1 * fVar5 + fVar9 * fVar6 + fVar11 * fVar7 + fVar13 * fVar8;
    *(int *)(unsigned)(ar4 + 0x1c) = (int)lVar4;
    *(int *)(unsigned)(ar4 + 0x18) = (int)((ulonglong)lVar4 >> 0x20);
    *(float *)(unsigned)(ar4 + 0x14) =
         in_xf0 * fVar1 + (float)in_xd4 * 0.0 + (float)in_xd8 * 0.0 + (float)in_xd12 * fVar2;
    *(float *)(unsigned)(ar4 + 0x10) = in_xf1 * fVar1 + fVar9 * 0.0 + fVar11 * 0.0 + fVar13 * fVar2;
    return ain0;
  }
  fVar13 = ((float)(ushort)ar5 * 6.2831855) / 65536.0;
  sin(fVar13);
  cos(fVar13);
  return ain0;
}

__asm__(".globl _FUN_8c256a78\n.set _FUN_8c256a78, _FUN_8c256a78_def\n");
