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
undefined4 FUN_8c10a564_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10a564";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  uint uVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  float *a4;
  float *a5;
  int iVar5;
  int a6;
  float *a5_00;
  float *a4_00;
  float **ppfVar6;
  double *pdVar7;
  float **ppfVar8;
  double in_dr0 = 0;
  double dVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 in_dr12 = 0;
  undefined4 uVar13;
  undefined8 in_dr14 = 0;
  double dVar14;
  undefined8 in_xd2 = 0;
  byte bVar15;
  byte bVar16;
  char cVar17;
  byte bVar18;
  
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)in_dr12;
  (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_dr12 >> 0x20);
  ppfVar8 = ((float * *)(fr0_ - 0x44));
  a5_00 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa4));
  iVar4 = *(int *)(unsigned)(ar4 + 0x7c);
  a6 = iVar4 * 4;
  if (*(float *)(unsigned)(ar4 + 0x80) < *(float *)(unsigned)(ar4 + 0x70)) {
    *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
    ar6 = a6;
    (vsp = ((unsigned long)(fr0_ - 68)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x54),*(undefined4 *)(unsigned)(ar4 + 0x58),a6,ar7));
    ar5 = *(undefined4 *)(unsigned)(ar4 + 0x54);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c11b93c(*(undefined4 *)(unsigned)(ar4 + 0xb0),ar5,ar6,ar7));
    if ((uVar1 & 0xff) != 0) {
      return 0;
    }
    *(undefined1 *)(unsigned)(ar4 + 0x51) = 1;
  }
  uVar13 = (undefined4)in_dr14;
  if ((*(int *)(unsigned)(ar4 + 0x38) != 0) && (*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01')) {
    pdVar2 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
    a4_00 = (float *)(unsigned)((int)pdVar2 + 4);
    iVar5 = a6;
    if (*(char *)(unsigned)(ar4 + 0x51) == '\0') {
      cVar17 = '\0';
      (vsp = ((unsigned long)(fr0_ - 68)), memmove(a4_00,a5_00,a6,ar7));
      a4 = a4_00;
      a5 = a5_00;
      ppfVar8 = ((float * *)(fr0_ - 0x44));
    }
    else {
      ((float * *)(fr0_ - 0x44))[0] = a4_00 + iVar4;
      a5 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30));
      cVar17 = '\0';
      a4 = a4_00;
      (vsp = ((unsigned long)(fr0_ - 68)), memmove(a4_00,a5,a6,ar7));
      (*(undefined4 *)(fr0_ - 0x38)) = *(undefined4 *)(unsigned)(ar4 + 0x54);
      if (cVar17 == '\0') {
        uVar12 = 0;
        dVar14 = CONCAT44D(0x40000000,uVar13);
      }
      else {
        uVar12 = 0x3ff00000;
        dVar14 = -1.5697950159475534e-250;
      }
      if (cVar17 == '\0') {
        dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),uVar12);
      }
      ppfVar6 = ((float * *)(fr0_ - 0x44));
      if (a4_00 < ((float * *)(fr0_ - 0x44))[0]) {
        do {
          puVar3 = ((undefined8 *)(unsigned long)*(unsigned *)(unsigned)((int)ppfVar6 + 0xc));
          *(unsigned *)(unsigned)((int)ppfVar6 + 0xc) = (undefined4 *)(unsigned)((int)puVar3 + 4);
          if (cVar17 == '\0') {
            uVar10 = CONCAT44(*a4_00,*(undefined4 *)(unsigned)puVar3);
          }
          else {
            in_xd2 = *puVar3;
            uVar10 = *(undefined8 *)(unsigned)a4_00;
          }
          fVar11 = F32HI(uVar10) - (float)uVar10;
          *a4_00 = fVar11;
          if (*a5_00 <= fVar11) {
            fVar11 = *a4_00;
            *(float *)(unsigned)((int)ppfVar6 + 8) = fVar11;
            *(double *)(unsigned)((int)ppfVar6 + -8) = (double)fVar11;
            fVar11 = (float)((ulonglong)((double)(*a5_00 - *(float *)(unsigned)((int)ppfVar6 + 8)) * dVar14)
                            >> 0x20);
            (vsp = ((unsigned long)(fr0_ - 68)), thunk_FUN_8c013cd8(a4,a5,iVar5,ar7));
            bVar15 = 0;
            bVar16 = 0;
            bVar18 = 0;
            (vsp = ((unsigned long)(fr0_ - 68)), thunk_FUN_8c013dfc(a4,a5,iVar5,ar7));
            cVar17 = (char)((((uint)bVar15 << 0x12 | (uint)bVar16 << 0x13 | (uint)bVar18 << 0x14) &
                            0x100000) >> 0x14);
          }
          else {
            fVar11 = *a5_00;
            *(float *)(unsigned)((int)ppfVar6 + 4) = fVar11;
            *(double *)(unsigned)((int)ppfVar6 + -8) = (double)fVar11;
            fVar11 = (float)((ulonglong)((double)(*a4_00 - *(float *)(unsigned)((int)ppfVar6 + 4)) * dVar14)
                            >> 0x20);
            (vsp = ((unsigned long)(fr0_ - 68)), thunk_FUN_8c013cd8(a4,a5,iVar5,ar7));
            bVar15 = 0;
            bVar16 = 0;
            bVar18 = 0;
            (vsp = ((unsigned long)(fr0_ - 68)), thunk_FUN_8c013dfc(a4,a5,iVar5,ar7));
            cVar17 = (char)((((uint)bVar15 << 0x12 | (uint)bVar16 << 0x13 | (uint)bVar18 << 0x14) &
                            0x100000) >> 0x14);
          }
          pdVar7 = (double *)(unsigned)((int)ppfVar6 + -8);
          if (cVar17 == '\0') {
            dVar9 = 0.5;
          }
          else {
            dVar9 = -7.963806069003694e+87;
          }
          ppfVar8 = ppfVar6;
          if (cVar17 != '\0') {
            ppfVar8 = (float **)(unsigned)((int)ppfVar6 + 8);
            pdVar7 = (double *)(unsigned)ppfVar6;
          }
          in_dr0 = *pdVar7 + (double)fVar11 * dVar9;
          if (cVar17 == '\0') {
            *a4_00 = (float)in_dr0;
          }
          else {
            *(undefined8 *)(unsigned)a4_00 = in_xd2;
          }
          a4_00 = a4_00 + 1;
          a5_00 = a5_00 + 1;
          ppfVar6 = ppfVar8;
        } while (a4_00 < *ppfVar8);
      }
    }
    if (cVar17 == '\0') {
      *(undefined4 *)(unsigned)((int)ppfVar8 + 0x10) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x30) + a6);
    }
    else {
      *(undefined8 *)(unsigned)((int)ppfVar8 + 0x10) = *(undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x30) + a6);
    }
    cVar17 = '\0';
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c10a2cc(a4,a5,iVar5,ar7));
    if (cVar17 == '\0') {
      *(int *)(unsigned)pdVar2 = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *pdVar2 = in_dr0;
    }
    iVar4 = *(int *)(unsigned)(ar4 + 0x30) + *(int *)(unsigned)(ar4 + 0x40) * 4;
    *(int *)(unsigned)(ar4 + 0x30) = iVar4;
    if (iVar4 == *(int *)(unsigned)(ar4 + 0x2c)) {
      *(undefined4 *)(unsigned)(ar4 + 0x30) = *(undefined4 *)(unsigned)(ar4 + 0x28);
    }
    *(int *)(unsigned)(ar4 + 0x38) = *(int *)(unsigned)(ar4 + 0x38) + -1;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c10a564\n.set _FUN_8c10a564, _FUN_8c10a564_def\n");
