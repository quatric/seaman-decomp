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
undefined4 FUN_8c23ae70_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23ae70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar5;
  double dVar4;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float in_fr11 = 0;
  undefined8 in_xd4 = 0;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
                    
  cVar14 = '\0';
  if (in_fr11 < 0.0) {
    fVar13 = *(float *)(unsigned)(ar4 + 0x70);
    fVar5 = -in_fr11;
    fVar11 = *(float *)(unsigned)(ar4 + 0x74);
    fVar3 = *(float *)(unsigned)(ar4 + 0x108);
    fVar8 = *(float *)(unsigned)(ar4 + 0x10c);
    fVar6 = *(float *)(unsigned)(ar4 + 0x110);
    *(float *)(unsigned)((int)ar5 + 4) = fVar5 * fVar3 + *(float *)(unsigned)((int)ar5 + 4);
    *(float *)(unsigned)(ar5 + 1) = fVar5 * fVar8 + *(float *)(unsigned)(ar5 + 1);
    *(float *)(unsigned)((int)ar5 + 0xc) = fVar5 * fVar6 + *(float *)(unsigned)((int)ar5 + 0xc);
    if (fVar11 < in_fr11 * in_fr11) {
      dVar4 = CONCAT44D(0x3f800000,fVar3);
      if (in_fr11 * in_fr11 < fVar13) {
        dVar4 = CONCAT44D(0x3f800000,*(undefined4 *)(unsigned)(ar4 + 0x80));
        ({ unsigned long ri0_ = (unsigned long)(0x88); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c23a8d8(*(undefined4 *)(unsigned)(ar4 + 0x88),ar5,ar6,ar7); });
        if (cVar14 == '\0') {
          dVar4 = CONCAT44D(F32HI(dVar4) * F32LO(dVar4),SUB84(dVar4,0)
                                  );
        }
        else {
          dVar4 = dVar4 * dVar4;
        }
      }
      puVar2 = (undefined8 *)(unsigned)((int)ar5 + 0x14);
      if (cVar15 == '\0') {
        uVar12 = CONCAT44(*(undefined4 *)(unsigned)ar5,fVar11);
        dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x118));
        uVar7 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x11c),*(undefined4 *)(unsigned)(ar4 + 0x120));
        uVar9 = CONCAT44(*(undefined4 *)(unsigned)puVar2,*(undefined4 *)(unsigned)(ar5 + 3));
        puVar1 = (undefined8 *)(unsigned)((int)ar5 + 0x1c);
        uVar10 = CONCAT44(*(undefined4 *)(unsigned)puVar1,*(undefined4 *)(unsigned)(ar4 + 0x114));
      }
      else {
        uVar12 = *ar5;
        uVar7 = *(undefined8 *)(unsigned)(ar4 + 0x124);
        uVar9 = *puVar2;
        in_xd4 = *(undefined8 *)(unsigned)((int)ar5 + 0x1c);
        puVar1 = (undefined8 *)(unsigned)((int)ar5 + 0x24);
        uVar10 = *puVar1;
      }
      fVar3 = F32HI(dVar4);
      if (cVar14 == '\0') {
        uVar9 = CONCAT44(fVar3 * F32LO(dVar4) + F32HI(uVar9),
                         fVar3 * F32HI(uVar7) + (float)uVar9);
        fVar5 = (float)uVar10;
        uVar10 = CONCAT44(fVar3 * (float)uVar7 + F32HI(uVar10),fVar5);
        uVar12 = CONCAT44(fVar3 * fVar5 + F32HI(uVar12),(int)uVar12);
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)puVar2 = (int)((ulonglong)uVar9 >> 0x20);
        *(int *)(unsigned)(ar5 + 3) = (int)uVar9;
        *(int *)(unsigned)puVar1 = (int)((ulonglong)uVar10 >> 0x20);
        *(int *)(unsigned)ar5 = (int)((ulonglong)uVar12 >> 0x20);
      }
      else {
        *puVar2 = uVar9;
        ar5[3] = in_xd4;
        *puVar1 = uVar10;
        *ar5 = uVar12;
      }
    }
  }
  return 4;
}

__asm__(".globl _FUN_8c23ae70\n.set _FUN_8c23ae70, _FUN_8c23ae70_def\n");
