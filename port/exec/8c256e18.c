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
undefined4 FUN_8c256e18_def(float *ar4,uint ar5,uint ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c256e18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  ulonglong uVar3;
  float fVar6;
  float fVar8;
  longlong lVar7;
  float fVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined8 in_xd0 = 0;
  float fVar13;
  float fVar14;
  undefined8 in_xd2 = 0;
  float fVar15;
  float fVar16;
  undefined8 in_xd4 = 0;
  float fVar17;
  float fVar18;
  undefined8 in_xd6 = 0;
  float fVar19;
  float fVar20;
  undefined8 in_xd8 = 0;
  float fVar21;
  float fVar22;
  undefined8 in_xd10 = 0;
  float fVar23;
  float fVar24;
  undefined8 in_xd12 = 0;
  float fVar25;
  float fVar26;
  undefined8 in_xd14 = 0;
  float fVar27;
  
  fVar16 = (float)in_xd4;
  fVar17 = F32HI(in_xd4);
  fVar18 = (float)in_xd6;
  fVar19 = F32HI(in_xd6);
  fVar24 = (float)in_xd12;
  fVar25 = F32HI(in_xd12);
  fVar26 = (float)in_xd14;
  fVar27 = F32HI(in_xd14);
  if (ar4 != (float *)(unsigned)0x0) {
    fVar12 = (float)in_xd0;
    fVar13 = F32HI(in_xd0);
    fVar14 = (float)in_xd2;
    fVar15 = F32HI(in_xd2);
    fVar20 = (float)in_xd8;
    fVar21 = F32HI(in_xd8);
    fVar22 = (float)in_xd10;
    fVar23 = F32HI(in_xd10);
    if (ar6 != 0) {
      fVar1 = ((float)(ar6 & 0xffff) * 6.2831855) / 65536.0;
      fVar4 = (float)sin(fVar1);
      fVar1 = (float)cos(fVar1);
      fVar4 = (float)fVar4;
      fVar1 = (float)fVar1;
      lVar10 = (ulonglong)(uint)fVar1 << 0x20;
      lVar7 = (ulonglong)(uint)fVar4 << 0x20;
      fVar5 = *ar4;
      fVar2 = ar4[1];
      fVar8 = ar4[2];
      fVar6 = ar4[3];
                    
                    
      fVar9 = fVar12 * 0.0 + fVar16 * fVar4 + fVar20 * 0.0 + fVar24 * fVar1;
      fVar9 = fVar13 * 0.0 + fVar17 * fVar4 + fVar21 * 0.0 + fVar25 * fVar1;
      fVar9 = fVar14 * 0.0 + fVar18 * fVar4 + fVar22 * 0.0 + fVar26 * fVar1;
      fVar1 = fVar15 * 0.0 + fVar19 * fVar4 + fVar23 * 0.0 + fVar27 * fVar1;
      ar4[0xb] = (float)lVar10;
      ar4[10] = F32HI(lVar10);
      ar4[9] = (float)lVar7;
      ar4[8] = F32HI(lVar7);
      ar4[3] = fVar14 * fVar2 + fVar18 * fVar5 + fVar22 * fVar6 + fVar26 * fVar8;
      ar4[2] = fVar15 * fVar2 + fVar19 * fVar5 + fVar23 * fVar6 + fVar27 * fVar8;
      ar4[1] = fVar12 * fVar2 + fVar16 * fVar5 + fVar20 * fVar6 + fVar24 * fVar8;
      *ar4 = fVar13 * fVar2 + fVar17 * fVar5 + fVar21 * fVar6 + fVar25 * fVar8;
    }
    if (ar5 != 0) {
      fVar1 = ((float)(ar5 & 0xffff) * 6.2831855) / 65536.0;
      fVar4 = (float)sin(fVar1);
      fVar1 = (float)cos(fVar1);
      fVar4 = (float)fVar4;
      fVar1 = (float)fVar1;
      lVar7 = (ulonglong)(uint)fVar4 << 0x20;
      uVar3 = (ulonglong)(uint)fVar1;
      fVar6 = ar4[4];
      fVar5 = ar4[5];
      fVar9 = ar4[6];
      fVar8 = ar4[7];
                    
      fVar2 = fVar12 * fVar1 + fVar16 * 0.0 + fVar20 * 0.0 + fVar24 * fVar4;
      fVar2 = fVar13 * fVar1 + fVar17 * 0.0 + fVar21 * 0.0 + fVar25 * fVar4;
      fVar2 = fVar14 * fVar1 + fVar18 * 0.0 + fVar22 * 0.0 + fVar26 * fVar4;
      fVar1 = fVar15 * fVar1 + fVar19 * 0.0 + fVar23 * 0.0 + fVar27 * fVar4;
                    
      ar4[0xb] = fVar14 * fVar5 + fVar18 * fVar6 + fVar22 * fVar8 + fVar26 * fVar9;
      ar4[10] = fVar15 * fVar5 + fVar19 * fVar6 + fVar23 * fVar8 + fVar27 * fVar9;
      ar4[9] = fVar12 * fVar5 + fVar16 * fVar6 + fVar20 * fVar8 + fVar24 * fVar9;
      ar4[8] = fVar13 * fVar5 + fVar17 * fVar6 + fVar21 * fVar8 + fVar25 * fVar9;
      ar4[7] = (float)lVar7;
      ar4[6] = F32HI(lVar7);
      ar4[5] = (float)uVar3;
      ar4[4] = (float)(uVar3 >> 0x20);
    }
    if (ar7 != 0) {
      fVar1 = ((float)(ar7 & 0xffff) * 6.2831855) / 65536.0;
      sin(fVar1);
      cos(fVar1);
      fVar4 = *ar4;
      fVar1 = ar4[1];
      fVar5 = ar4[2];
      fVar2 = ar4[3];
      fVar8 = ar4[4];
      fVar6 = ar4[5];
      fVar11 = ar4[6];
      fVar9 = ar4[7];
                    
                    
      ar4[7] = fVar14 * fVar6 + fVar18 * fVar8 + fVar22 * fVar9 + fVar26 * fVar11;
      ar4[6] = fVar15 * fVar6 + fVar19 * fVar8 + fVar23 * fVar9 + fVar27 * fVar11;
      ar4[5] = fVar12 * fVar6 + fVar16 * fVar8 + fVar20 * fVar9 + fVar24 * fVar11;
      ar4[4] = fVar13 * fVar6 + fVar17 * fVar8 + fVar21 * fVar9 + fVar25 * fVar11;
      ar4[3] = fVar14 * fVar1 + fVar18 * fVar4 + fVar22 * fVar2 + fVar26 * fVar5;
      ar4[2] = fVar15 * fVar1 + fVar19 * fVar4 + fVar23 * fVar2 + fVar27 * fVar5;
      ar4[1] = fVar12 * fVar1 + fVar16 * fVar4 + fVar20 * fVar2 + fVar24 * fVar5;
      *ar4 = fVar13 * fVar1 + fVar17 * fVar4 + fVar21 * fVar2 + fVar25 * fVar5;
    }
    return ain0;
  }
  if (ar6 != 0) {
    fVar16 = ((float)(ar6 & 0xffff) * 6.2831855) / 65536.0;
    sin(fVar16);
    cos(fVar16);
  }
  if (ar5 != 0) {
    fVar16 = ((float)(ar5 & 0xffff) * 6.2831855) / 65536.0;
    sin(fVar16);
    cos(fVar16);
  }
  if (ar7 != 0) {
    fVar16 = ((float)(ar7 & 0xffff) * 6.2831855) / 65536.0;
    sin(fVar16);
    cos(fVar16);
  }
  return ain0;
}

__asm__(".globl _FUN_8c256e18\n.set _FUN_8c256e18, _FUN_8c256e18_def\n");
