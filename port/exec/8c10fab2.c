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
undefined4 FUN_8c10fab2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10fab2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  float *ain0;
  float *ar4_00;
  uint *puVar3;
  int *ar6_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  longlong in_dr0 = 0;
  float fVar9;
  ulonglong uVar8;
  undefined4 uVar10;
  float fVar11;
  undefined8 in_dr4 = 0;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 in_xd4 = 0;
  undefined8 in_xd6 = 0;
  undefined8 in_xd14 = 0;
  char cVar16;
  
  fVar11 = F32HI(in_dr4);
  if (*(float *)(unsigned)(ar4 + 0x4c) <= (float)*(int *)(unsigned)(ar4 + 0x8c)) {
    *(float *)(unsigned)(ar4 + 0x4c) = *(float *)(unsigned)(ar4 + 0x4c) + fVar11;
  }
  fVar9 = *(float *)(unsigned)(ar4 + 0x54) + fVar11;
  *(float *)(unsigned)(ar4 + 0x54) = fVar9;
  if (*(int *)(unsigned)(ar4 + 0x50) < *(int *)(unsigned)(ar4 + 0x84)) {
    *(int *)(unsigned)(ar4 + 0x50) = *(int *)(unsigned)(ar4 + 0x50) + 1;
  }
  uVar6 = 0;
  uVar8 = CONCAT44(fVar9,(float)*(int *)(unsigned)(ar4 + 0x50));
  lVar15 = (ulonglong)(uint)fVar11 << 0x20;
  uVar14 = (ulonglong)(uint)(1.0 / (float)*(int *)(unsigned)(ar4 + 0x50));
  pfVar7 = (float *)(unsigned)(ar5 + *(int *)(unsigned)(ar4 + 0x74) * 4);
  if (*(int *)(unsigned)(ar4 + 0x78) != 0) {
    do {
      cVar16 = '\0';
      uVar10 = (undefined4)in_dr4;
      if (*(char *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + uVar6 + 1) != '\0') {
        iVar5 = -1;
        puVar3 = ((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60));
        ar4_00 = pfVar7 + (*(int *)(unsigned)(ar4 + 0x70) - *(int *)(unsigned)(ar4 + 0x74));
        uVar12 = 0x7f7fffff7f7fffff;
        iVar4 = 0;
        uVar13 = uVar12;
        if (*(char *)(unsigned)(ar4 + 0x59) != '\0') {
          do {
            ar5 = (int)pfVar7;
            uVar12 = in_xd14;
            if (cVar16 == '\0') {
              uVar12 = CONCAT44((int)lVar15,(int)in_dr4);
            }
            for (; in_dr4 = uVar12, (uint)ar5 < ar4_00; ar5 = (int)(ar5 + 4)) {
              if (cVar16 == '\0') {
                uVar8 = (ulonglong)*puVar3;
                in_dr4 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(float *)(unsigned)ar5);
              }
              else {
                in_xd4 = *(undefined8 *)(unsigned)ar5;
              }
              cVar16 = '\0';
              fVar11 = (float)in_dr4 - (float)uVar8;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = fVar11 * fVar11 + F32HI(in_dr4);
              in_dr4 = CONCAT44(fVar9,fVar11);
              if (F32HI(uVar13) < fVar9) break;
              puVar3 = puVar3 + 1;
              uVar12 = in_dr4;
              cVar16 = '\0';
            }
            if ((float *)(unsigned)ar5 == ar4_00) {
              iVar5 = iVar4;
              uVar12 = in_dr4;
              if (cVar16 == '\0') {
                uVar12 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)uVar13);
              }
            }
            else {
              iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468((int)ar4_00 - ar5,4,vr6,vr7));
              puVar3 = puVar3 + iVar2;
              uVar12 = uVar13;
            }
            uVar10 = (undefined4)in_dr4;
            iVar4 = iVar4 + 1;
            uVar13 = uVar12;
          } while (iVar4 < (int)(uint)*(byte *)(unsigned)(ar4 + 0x59));
        }
        fVar11 = F32HI(in_dr0);
        in_dr4 = in_xd6;
        if (cVar16 == '\0') {
          in_dr4 = CONCAT44((int)uVar12,uVar10);
        }
        ar6_00 = (int *)(unsigned)((uint)*(byte *)(unsigned)(ar4 + 0x5a) * iVar5 * 4 + *(int *)(unsigned)(ar4 + 100));
        iVar5 = 0;
        if (*(char *)(unsigned)(ar4 + 0x5a) != '\0') {
          do {
            puVar3 = (uint *)(unsigned)(*ar6_00 * 4 + *(int *)(unsigned)(ar4 + 0x68));
            ar5 = (int)pfVar7;
            uVar12 = in_dr4;
            cVar1 = cVar16;
            uVar13 = in_xd14;
            if (cVar16 == '\0') {
              uVar12 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)lVar15);
              uVar13 = in_xd4;
            }
            do {
              in_xd4 = uVar13;
              cVar16 = cVar1;
              if (ar4_00 <= (uint)ar5) break;
              if (cVar16 == '\0') {
                uVar8 = (ulonglong)*puVar3;
                puVar3 = puVar3 + 1;
                fVar11 = *(float *)(unsigned)ar5;
                ar5 = ar5 + 4;
              }
              else {
                puVar3 = puVar3 + 2;
                fVar11 = (float)((ulonglong)*(undefined8 *)(unsigned)ar5 >> 0x20);
                ar5 = ar5 + 8;
              }
              cVar16 = '\0';
              fVar11 = fVar11 - (float)uVar8;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = F32HI(uVar12);
              fVar11 = fVar11 * fVar11 + (float)uVar12;
              uVar12 = CONCAT44(fVar9,fVar11);
              cVar1 = '\0';
              uVar13 = in_xd4;
            } while (fVar11 <= fVar9);
            fVar11 = F32HI(in_dr0);
            ar6_00 = ar6_00 + 1;
            in_dr4 = uVar12;
            if (((float *)(unsigned)ar5 == ar4_00) && (in_dr4 = in_xd4, cVar16 == '\0')) {
              in_dr4 = CONCAT44((int)uVar12,(int)uVar12);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(uint)*(byte *)(unsigned)(ar4 + 0x5a));
        }
        ain0 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x44) + uVar6 * 4);
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c11fbb6(ar4_00,ar5,ar6_00,iVar5); });
        fVar11 = fVar11 * F32HI(lVar15) -
                 *(float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x44) + uVar6 * 4);
        in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
        fVar11 = fVar11 * (float)uVar14 + *ain0;
        uVar8 = (ulonglong)(uint)fVar11;
        *ain0 = fVar11;
      }
      uVar6 = uVar6 + 1;
      pfVar7 = pfVar7 + *(int *)(unsigned)(ar4 + 0x70);
    } while (uVar6 < *(uint *)(unsigned)(ar4 + 0x78));
  }
  return 0x78;
}

__asm__(".globl _FUN_8c10fab2\n.set _FUN_8c10fab2, _FUN_8c10fab2_def\n");
