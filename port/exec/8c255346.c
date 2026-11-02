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
undefined4 FUN_8c255346_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c255346";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *a5;
  uint uVar7;
  int *a6;
  uint uVar8;
  int *a7;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double in_dr2 = 0;
  double dVar13;
  float fVar14;
  undefined4 in_fr5 = 0;
  float fVar15;
  undefined4 in_fr12 = 0;
  undefined8 in_dr14 = 0;
  bool bVar16;
  uint uVar17;
  char cVar18;
  char cVar19;
  
  cVar19 = '\0';
  cVar18 = '\0';
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  iVar9 = 0;
  if (ar4[1] == 0) {
    return ain0;
  }
  if ((*ar4 & 8) != 0) {
    return *ar4;
  }
  puVar4 = (undefined4 *)(unsigned)(uint)ar4[1];
  uVar2 = *puVar4;
  uVar3 = puVar4[1];
  fVar14 = 2.1474836e+09;
  iVar11 = puVar4[2];
  iVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad84) == 1) {
    iVar10 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + iVar5);
    if (iVar10 != 0) {
      fVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70);
      if (2.1474836e+09 < (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70)) {
        fVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) + -4.2949673e+09;
      }
      uVar7 = 0;
      uVar6 = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + iVar5);
      while (uVar8 = uVar6, 1 < uVar8 - uVar7) {
        uVar6 = uVar7 + uVar8 >> 1;
        if (*(uint *)(unsigned)(uVar6 * 8 + iVar10) <= (uint)(int)fVar14) {
          uVar7 = uVar6;
          uVar6 = uVar8;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c254fbc(iVar10,uVar7,*(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + iVar5),&(*(int *)(fr0_ - 0x3c))));
      iVar9 = 1;
    }
  }
  else if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad84) == 2) {
    iVar10 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + iVar5);
    if (iVar10 != 0) {
      fVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70);
      if (2.1474836e+09 < (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70)) {
        fVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) + -4.2949673e+09;
      }
      uVar7 = 0;
      uVar6 = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + iVar5);
      while (uVar8 = uVar6, 1 < uVar8 - uVar7) {
        uVar6 = uVar7 + uVar8 >> 1;
        if (*(uint *)(unsigned)(uVar6 * 8 + iVar10) <= (uint)(int)fVar14) {
          uVar7 = uVar6;
          uVar6 = uVar8;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c254fbc(iVar10,uVar7,*(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + iVar5),&(*(int *)(fr0_ - 0x4c))));
      iVar9 = 2;
    }
  }
  else if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad84) == 3) {
    iVar10 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + iVar5);
    if (iVar10 != 0) {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) <= 2.1474836e+09) {
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70));
      }
      else {
        in_dr2 = CONCAT44D(0xcf800000,(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) + -4.2949673e+09);
      }
      uVar7 = 0;
      uVar6 = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + iVar5);
      while (uVar8 = uVar6, 1 < uVar8 - uVar7) {
        uVar6 = uVar7 + uVar8 >> 1;
        if (*(uint *)(unsigned)(uVar6 * 8 + iVar10) <= (uint)(int)SUB84(in_dr2,0)) {
          uVar7 = uVar6;
          uVar6 = uVar8;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c254fbc(iVar10,uVar7,*(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + iVar5),&(*(int *)(fr0_ - 0x3c))));
      iVar9 = 1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) + 1;
    iVar5 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
    if (iVar5 != 0) {
      uVar7 = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
      if (cVar19 == '\0') {
        dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad70),in_fr5);
      }
      else {
        dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad74),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70));
      }
      fVar15 = F32HI(dVar13);
      if (cVar18 == '\0') {
        bVar16 = fVar14 < fVar15;
      }
      else {
        bVar16 = CONCAT44D(in_fr12,fVar14) < dVar13;
      }
      uVar6 = 0;
      if (bVar16) {
        if (cVar19 == '\0') {
          dVar13 = CONCAT44D(0xcf800000,fVar15);
        }
        else {
          dVar13 = -1.8639332822651773e-249;
        }
        if (cVar18 == '\0') {
          fVar14 = F32HI(dVar13);
          in_dr2 = CONCAT44D(fVar14,F32LO(dVar13) + fVar14);
        }
        else {
          in_dr2 = dVar13 + dVar13;
        }
      }
      else if (cVar19 == '\0') {
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar15);
      }
      uVar8 = uVar7;
      if (cVar18 == '\0') {
        uVar17 = (uint)SUB84(in_dr2,0);
      }
      else {
        uVar17 = (uint)in_dr2;
      }
      while ((*(uint *)(fr0_ - 0x74)) = uVar8, 1 < (*(uint *)(fr0_ - 0x74)) - uVar6) {
        uVar8 = (*(uint *)(fr0_ - 0x74)) + uVar6 >> 1;
        if (*(uint *)(unsigned)(uVar8 * 8 + iVar5) <= uVar17) {
          uVar6 = uVar8;
          uVar8 = (*(uint *)(fr0_ - 0x74));
        }
      }
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c254fbc(iVar5,uVar6,uVar7,&(*(int *)(fr0_ - 0x4c))));
      iVar9 = iVar9 + 2;
    }
  }
  iVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c4);
  a7 = &(*(int *)(fr0_ - 0x44));
  a5 = ((int *)(fr0_ - 0x30));
  a6 = &(*(int *)(fr0_ - 0x40));
  if (iVar9 == 1) {
    iVar9 = 0;
    iVar10 = 0;
    if (0 < iVar11) {
      do {
        a7 = (int *)(unsigned)(((int *)(fr0_ - 0x30))[0] + iVar10);
        a5 = (int *)(unsigned)((*(int *)(fr0_ - 0x38)) + iVar10);
        a6 = (int *)(unsigned)((*(int *)(fr0_ - 0x34)) + iVar10);
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2552b0(iVar10 + (*(int *)(fr0_ - 0x3c)),a5,a6,a7));
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar9 < iVar11);
    }
    *(int *)(unsigned)(uint)ar4[1] = iVar5;
  }
  else {
    if (iVar9 == 2) {
      iVar9 = 0;
      iVar10 = 0;
      if (0 < iVar11) {
        do {
          a5 = (int *)(unsigned)(iVar10 + (*(int *)(fr0_ - 0x48)));
          a7 = (int *)(unsigned)((*(int *)(fr0_ - 0x40)) + iVar10);
          a6 = (int *)(unsigned)((*(int *)(fr0_ - 0x44)) + iVar10);
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2551d4((*(int *)(fr0_ - 0x4c)) + iVar10,a5,a6,a7));
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 0xc;
        } while (iVar9 < iVar11);
      }
    }
    else {
      if (iVar9 != 3) goto LAB_8c25569a;
      iVar9 = 0;
      iVar10 = iVar11 * 0xc + (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c4);
      iVar12 = 0;
      if (0 < iVar11) {
        do {
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2552b0((*(int *)(fr0_ - 0x3c)) + iVar12,(*(int *)(fr0_ - 0x38)) + iVar12,(*(int *)(fr0_ - 0x34)) + iVar12,
                       ((int *)(fr0_ - 0x30))[0] + iVar12));
          a5 = (int *)(unsigned)((*(int *)(fr0_ - 0x48)) + iVar12);
          a7 = (int *)(unsigned)((*(int *)(fr0_ - 0x40)) + iVar12);
          a6 = (int *)(unsigned)((*(int *)(fr0_ - 0x44)) + iVar12);
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2551d4((*(int *)(fr0_ - 0x4c)) + iVar12,a5,a6,a7));
          iVar9 = iVar9 + 1;
          iVar12 = iVar12 + 0xc;
        } while (iVar9 < iVar11);
      }
      *(int *)(unsigned)(uint)ar4[1] = iVar5;
      iVar5 = iVar10;
    }
    *(int *)(unsigned)(ar4[1] + 4) = iVar5;
  }
LAB_8c25569a:
  uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4ab0bc)))(ar4[1],a5,a6,a7));
  *(undefined4 *)(unsigned)(uint)ar4[1] = uVar2;
  *(undefined4 *)(unsigned)(ar4[1] + 4) = uVar3;
  return uVar1;
}

__asm__(".globl _FUN_8c255346\n.set _FUN_8c255346, _FUN_8c255346_def\n");
