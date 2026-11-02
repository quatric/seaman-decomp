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
uint FUN_8c23b6dc_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23b6dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float in_fr11 = 0;
  float fVar14;
  float fVar15;
  undefined8 in_xd4 = 0;
  char cVar16;
  char cVar17;
  
  *(float *)(unsigned)((int)ar5 + 4) = *(float *)(unsigned)((int)ar5 + 4) + *(float *)(unsigned)(ar4 + 0xf8);
  fVar6 = *(float *)(unsigned)(ar4 + 0xfc);
  *(float *)(unsigned)(ar5 + 1) = *(float *)(unsigned)(ar5 + 1) + fVar6;
  *(float *)(unsigned)((int)ar5 + 0xc) = *(float *)(unsigned)((int)ar5 + 0xc) + *(float *)(unsigned)(ar4 + 0x100);
  cVar17 = '\0';
                    
  cVar16 = '\0';
                    
  uVar1 = (uint)(in_fr11 < *(float *)(unsigned)(ar4 + 0x6c)) << 1 | (uint)(0.0 < fVar6);
  if (uVar1 == 3) {
    fVar14 = 1.0 / SQRT(in_fr11);
    uVar1 = 4;
    fVar15 = 1.0;
    if (*(float *)(unsigned)(ar4 + 0x68) < in_fr11) {
      fVar15 = fVar14 * fVar14 * *(float *)(unsigned)(ar4 + 0x68);
    }
    fVar13 = *(float *)(unsigned)(ar4 + 0x70);
    fVar11 = *(float *)(unsigned)(ar4 + 0x74);
    fVar4 = *(float *)(unsigned)(ar4 + 0x108);
    fVar6 = fVar6 * fVar14;
    fVar8 = *(float *)(unsigned)(ar4 + 0x10c);
    fVar14 = *(float *)(unsigned)(ar4 + 0x110);
    *(float *)(unsigned)((int)ar5 + 4) = fVar6 * fVar4 + *(float *)(unsigned)((int)ar5 + 4);
    *(float *)(unsigned)(ar5 + 1) = fVar6 * fVar8 + *(float *)(unsigned)(ar5 + 1);
    dVar5 = CONCAT44D(fVar15,fVar4);
    *(float *)(unsigned)((int)ar5 + 0xc) = fVar6 * fVar14 + *(float *)(unsigned)((int)ar5 + 0xc);
    if (fVar11 < fVar6 * fVar6) {
      if (fVar6 * fVar6 < fVar13) {
        dVar5 = CONCAT44D(fVar15,*(float *)(unsigned)(ar4 + 0x80) * fVar15);
        ({ unsigned long ri0_ = (unsigned long)(0x88); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c23a8d8(*(undefined4 *)(unsigned)(ar4 + 0x88),ar5,ar6,ar7); });
        if (cVar16 == '\0') {
          dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0)
                                  );
        }
        else {
          dVar5 = dVar5 * dVar5;
        }
      }
      uVar1 = 4;
      puVar3 = (undefined8 *)(unsigned)((int)ar5 + 0x14);
      if (cVar17 == '\0') {
        uVar12 = CONCAT44(*(undefined4 *)(unsigned)ar5,fVar11);
        dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x118));
        uVar7 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x11c),*(undefined4 *)(unsigned)(ar4 + 0x120));
        uVar9 = CONCAT44(*(undefined4 *)(unsigned)puVar3,*(undefined4 *)(unsigned)(ar5 + 3));
        puVar2 = (undefined8 *)(unsigned)((int)ar5 + 0x1c);
        uVar10 = CONCAT44(*(undefined4 *)(unsigned)puVar2,*(undefined4 *)(unsigned)(ar4 + 0x114));
      }
      else {
        uVar12 = *ar5;
        uVar7 = *(undefined8 *)(unsigned)(ar4 + 0x124);
        uVar9 = *puVar3;
        in_xd4 = *(undefined8 *)(unsigned)((int)ar5 + 0x1c);
        puVar2 = (undefined8 *)(unsigned)((int)ar5 + 0x24);
        uVar10 = *puVar2;
      }
      fVar6 = F32HI(dVar5);
      if (cVar16 == '\0') {
        uVar9 = CONCAT44(fVar6 * F32LO(dVar5) + F32HI(uVar9),
                         fVar6 * F32HI(uVar7) + (float)uVar9);
        fVar14 = (float)uVar10;
        uVar10 = CONCAT44(fVar6 * (float)uVar7 + F32HI(uVar10),fVar14);
        uVar12 = CONCAT44(fVar6 * fVar14 + F32HI(uVar12),(int)uVar12);
      }
      if (cVar17 == '\0') {
        *(int *)(unsigned)puVar3 = (int)((ulonglong)uVar9 >> 0x20);
        *(int *)(unsigned)(ar5 + 3) = (int)uVar9;
        *(int *)(unsigned)puVar2 = (int)((ulonglong)uVar10 >> 0x20);
        *(int *)(unsigned)ar5 = (int)((ulonglong)uVar12 >> 0x20);
      }
      else {
        *puVar3 = uVar9;
        ar5[3] = in_xd4;
        *puVar2 = uVar10;
        *ar5 = uVar12;
      }
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c23b6dc\n.set _FUN_8c23b6dc, _FUN_8c23b6dc_def\n");
