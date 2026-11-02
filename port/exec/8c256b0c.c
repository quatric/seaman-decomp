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
undefined4 FUN_8c256b0c_def(float *ar4,uint ar5,uint ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c256b0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar3;
  ulonglong uVar2;
  float fVar4;
  float fVar7;
  longlong lVar5;
  longlong lVar6;
  float fVar8;
  float fVar9;
  float fVar10;
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
  
  fVar20 = (float)in_xd8;
  fVar21 = F32HI(in_xd8);
  fVar22 = (float)in_xd10;
  fVar23 = F32HI(in_xd10);
  fVar24 = (float)in_xd12;
  fVar25 = F32HI(in_xd12);
  fVar26 = (float)in_xd14;
  fVar27 = F32HI(in_xd14);
  if (ar4 != (float *)(unsigned)0x0) {
    fVar12 = (float)in_xd0;
    fVar13 = F32HI(in_xd0);
    fVar14 = (float)in_xd2;
    fVar15 = F32HI(in_xd2);
    fVar16 = (float)in_xd4;
    fVar17 = F32HI(in_xd4);
    fVar18 = (float)in_xd6;
    fVar19 = F32HI(in_xd6);
    if (ar7 != 0) {
      fVar1 = ((float)(ar7 & 0xffff) * 6.2831855) / 65536.0;
      sin(fVar1);
      cos(fVar1);
      fVar3 = *ar4;
      fVar1 = ar4[1];
      fVar7 = ar4[2];
      fVar4 = ar4[3];
      fVar9 = ar4[4];
      fVar8 = ar4[5];
      fVar11 = ar4[6];
      fVar10 = ar4[7];
                    
                    
      ar4[7] = fVar14 * fVar8 + fVar18 * fVar9 + fVar22 * fVar10 + fVar26 * fVar11;
      ar4[6] = fVar15 * fVar8 + fVar19 * fVar9 + fVar23 * fVar10 + fVar27 * fVar11;
      ar4[5] = fVar12 * fVar8 + fVar16 * fVar9 + fVar20 * fVar10 + fVar24 * fVar11;
      ar4[4] = fVar13 * fVar8 + fVar17 * fVar9 + fVar21 * fVar10 + fVar25 * fVar11;
      ar4[3] = fVar14 * fVar1 + fVar18 * fVar3 + fVar22 * fVar4 + fVar26 * fVar7;
      ar4[2] = fVar15 * fVar1 + fVar19 * fVar3 + fVar23 * fVar4 + fVar27 * fVar7;
      ar4[1] = fVar12 * fVar1 + fVar16 * fVar3 + fVar20 * fVar4 + fVar24 * fVar7;
      *ar4 = fVar13 * fVar1 + fVar17 * fVar3 + fVar21 * fVar4 + fVar25 * fVar7;
    }
    if (ar6 != 0) {
      fVar1 = ((float)(ar6 & 0xffff) * 6.2831855) / 65536.0;
      fVar3 = (float)sin(fVar1);
      fVar1 = (float)cos(fVar1);
      fVar3 = (float)fVar3;
      fVar1 = (float)fVar1;
      lVar5 = (ulonglong)(uint)fVar3 << 0x20;
      lVar6 = (ulonglong)(uint)fVar1 << 0x20;
      fVar7 = *ar4;
      fVar4 = ar4[1];
      fVar9 = ar4[2];
      fVar8 = ar4[3];
                    
                    
      fVar10 = fVar12 * 0.0 + fVar16 * fVar3 + fVar20 * 0.0 + fVar24 * fVar1;
      fVar10 = fVar13 * 0.0 + fVar17 * fVar3 + fVar21 * 0.0 + fVar25 * fVar1;
      fVar10 = fVar14 * 0.0 + fVar18 * fVar3 + fVar22 * 0.0 + fVar26 * fVar1;
      fVar1 = fVar15 * 0.0 + fVar19 * fVar3 + fVar23 * 0.0 + fVar27 * fVar1;
      ar4[0xb] = (float)lVar6;
      ar4[10] = F32HI(lVar6);
      ar4[9] = (float)lVar5;
      ar4[8] = F32HI(lVar5);
      ar4[3] = fVar14 * fVar4 + fVar18 * fVar7 + fVar22 * fVar8 + fVar26 * fVar9;
      ar4[2] = fVar15 * fVar4 + fVar19 * fVar7 + fVar23 * fVar8 + fVar27 * fVar9;
      ar4[1] = fVar12 * fVar4 + fVar16 * fVar7 + fVar20 * fVar8 + fVar24 * fVar9;
      *ar4 = fVar13 * fVar4 + fVar17 * fVar7 + fVar21 * fVar8 + fVar25 * fVar9;
    }
    if (ar5 != 0) {
      fVar1 = ((float)(ar5 & 0xffff) * 6.2831855) / 65536.0;
      fVar3 = (float)sin(fVar1);
      fVar1 = (float)cos(fVar1);
      fVar3 = (float)fVar3;
      fVar1 = (float)fVar1;
      lVar6 = (ulonglong)(uint)fVar3 << 0x20;
      uVar2 = (ulonglong)(uint)fVar1;
      fVar8 = ar4[4];
      fVar7 = ar4[5];
      fVar10 = ar4[6];
      fVar9 = ar4[7];
                    
      fVar4 = fVar12 * fVar1 + fVar16 * 0.0 + fVar20 * 0.0 + fVar24 * fVar3;
      fVar4 = fVar13 * fVar1 + fVar17 * 0.0 + fVar21 * 0.0 + fVar25 * fVar3;
      fVar4 = fVar14 * fVar1 + fVar18 * 0.0 + fVar22 * 0.0 + fVar26 * fVar3;
      fVar1 = fVar15 * fVar1 + fVar19 * 0.0 + fVar23 * 0.0 + fVar27 * fVar3;
                    
      ar4[0xb] = fVar14 * fVar7 + fVar18 * fVar8 + fVar22 * fVar9 + fVar26 * fVar10;
      ar4[10] = fVar15 * fVar7 + fVar19 * fVar8 + fVar23 * fVar9 + fVar27 * fVar10;
      ar4[9] = fVar12 * fVar7 + fVar16 * fVar8 + fVar20 * fVar9 + fVar24 * fVar10;
      ar4[8] = fVar13 * fVar7 + fVar17 * fVar8 + fVar21 * fVar9 + fVar25 * fVar10;
      ar4[7] = (float)lVar6;
      ar4[6] = F32HI(lVar6);
      ar4[5] = (float)uVar2;
      ar4[4] = (float)(uVar2 >> 0x20);
    }
    return ain0;
  }
  if (ar7 != 0) {
    fVar20 = ((float)(ar7 & 0xffff) * 6.2831855) / 65536.0;
    sin(fVar20);
    cos(fVar20);
  }
  if (ar6 != 0) {
    fVar20 = ((float)(ar6 & 0xffff) * 6.2831855) / 65536.0;
    sin(fVar20);
    cos(fVar20);
  }
  if (ar5 != 0) {
    fVar20 = ((float)(ar5 & 0xffff) * 6.2831855) / 65536.0;
    sin(fVar20);
    cos(fVar20);
  }
  return ain0;
}

__asm__(".globl _FUN_8c256b0c\n.set _FUN_8c256b0c, _FUN_8c256b0c_def\n");
