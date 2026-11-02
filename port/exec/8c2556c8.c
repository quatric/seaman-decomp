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
undefined4 FUN_8c2556c8_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2556c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
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
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double in_dr2 = 0;
  double dVar14;
  float fVar15;
  undefined4 in_fr5 = 0;
  float fVar16;
  undefined4 in_fr12 = 0;
  undefined8 in_dr14 = 0;
  bool bVar17;
  uint uVar18;
  char cVar19;
  char cVar20;
  
  cVar20 = '\0';
  cVar19 = '\0';
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
  fVar15 = 2.1474836e+09;
  iVar12 = puVar4[2];
  iVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad84) == 1) {
    iVar11 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + iVar5);
    if (iVar11 != 0) {
      fVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70);
      if (2.1474836e+09 < (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70)) {
        fVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) + -4.2949673e+09;
      }
      uVar6 = 0;
      uVar7 = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + iVar5);
      while (uVar8 = uVar7, 1 < uVar8 - uVar6) {
        uVar7 = uVar6 + uVar8 >> 1;
        if (*(uint *)(unsigned)(uVar7 * 8 + iVar11) <= (uint)(int)fVar15) {
          uVar6 = uVar7;
          uVar7 = uVar8;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c255080(iVar11,uVar6,*(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + iVar5),&(*(int *)(fr0_ - 0x34))));
      iVar9 = 1;
    }
  }
  else if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad84) == 2) {
    iVar11 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + iVar5);
    if (iVar11 != 0) {
      fVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70);
      if (2.1474836e+09 < (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70)) {
        fVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) + -4.2949673e+09;
      }
      uVar6 = 0;
      uVar7 = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + iVar5);
      while (uVar8 = uVar7, 1 < uVar8 - uVar6) {
        uVar7 = uVar6 + uVar8 >> 1;
        if (*(uint *)(unsigned)(uVar7 * 8 + iVar11) <= (uint)(int)fVar15) {
          uVar6 = uVar7;
          uVar7 = uVar8;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c255080(iVar11,uVar6,*(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + iVar5),&(*(int *)(fr0_ - 0x3c))));
      iVar9 = 2;
    }
  }
  else if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad84) == 3) {
    iVar11 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + iVar5);
    if (iVar11 != 0) {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) <= 2.1474836e+09) {
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70));
      }
      else {
        in_dr2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) + -4.2949673e+09,(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) + -4.2949673e+09);
      }
      uVar6 = 0;
      uVar7 = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + iVar5);
      while (uVar8 = uVar7, 1 < uVar8 - uVar6) {
        uVar7 = uVar6 + uVar8 >> 1;
        if (*(uint *)(unsigned)(uVar7 * 8 + iVar11) <= (uint)(int)SUB84(in_dr2,0)) {
          uVar6 = uVar7;
          uVar7 = uVar8;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c255080(iVar11,uVar6,*(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + iVar5),&(*(int *)(fr0_ - 0x34))));
      iVar9 = 1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) + 1;
    iVar5 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
    if (iVar5 != 0) {
      uVar6 = 0;
      uVar7 = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
      if (cVar20 == '\0') {
        dVar14 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad70),in_fr5);
      }
      else {
        dVar14 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad74),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70));
      }
      fVar16 = F32HI(dVar14);
      if (cVar19 == '\0') {
        bVar17 = fVar15 < fVar16;
      }
      else {
        bVar17 = CONCAT44D(in_fr12,fVar15) < dVar14;
      }
      if (bVar17) {
        if (cVar20 == '\0') {
          dVar14 = CONCAT44D(0xcf800000,fVar16);
        }
        else {
          dVar14 = 8.151439918505315e-41;
        }
        if (cVar19 == '\0') {
          fVar15 = F32HI(dVar14);
          in_dr2 = CONCAT44D(fVar15,F32LO(dVar14) + fVar15);
        }
        else {
          in_dr2 = dVar14 + dVar14;
        }
      }
      else if (cVar20 == '\0') {
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar16);
      }
      uVar8 = uVar7;
      if (cVar19 == '\0') {
        uVar18 = (uint)SUB84(in_dr2,0);
      }
      else {
        uVar18 = (uint)in_dr2;
      }
      while (uVar10 = uVar8, 1 < uVar10 - uVar6) {
        uVar8 = uVar6 + uVar10 >> 1;
        if (*(uint *)(unsigned)(uVar8 * 8 + iVar5) <= uVar18) {
          uVar6 = uVar8;
          uVar8 = uVar10;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c255080(iVar5,uVar6,uVar7,&(*(int *)(fr0_ - 0x3c))));
      iVar9 = iVar9 + 2;
    }
  }
  iVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c4);
  a5 = &(*(int *)(fr0_ - 0x34));
  a6 = &(*(int *)(fr0_ - 0x3c));
  a7 = &(*(int *)(fr0_ - 0x38));
  if (iVar9 == 1) {
    iVar9 = 0;
    iVar11 = 0;
    if (0 < iVar12) {
      do {
        a5 = (int *)(unsigned)((*(int *)(fr0_ - 0x30)) + iVar11);
        a6 = (int *)(unsigned)(iVar11 + iVar5);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c2551aa(iVar11 + (*(int *)(fr0_ - 0x34)),a5,a6,a7));
        iVar9 = iVar9 + 1;
        iVar11 = iVar11 + 0xc;
      } while (iVar9 < iVar12);
    }
    *(int *)(unsigned)(uint)ar4[1] = iVar5;
  }
  else {
    if (iVar9 == 2) {
      iVar9 = 0;
      iVar11 = 0;
      if (0 < iVar12) {
        do {
          a5 = (int *)(unsigned)(iVar11 + (*(int *)(fr0_ - 0x38)));
          a6 = (int *)(unsigned)(iVar11 + iVar5);
          (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c25513c((*(int *)(fr0_ - 0x3c)) + iVar11,a5,a6,a7));
          iVar9 = iVar9 + 1;
          iVar11 = iVar11 + 0xc;
        } while (iVar9 < iVar12);
      }
    }
    else {
      if (iVar9 != 3) goto LAB_8c25598e;
      iVar9 = 0;
      iVar11 = iVar12 * 0xc + (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c4);
      iVar13 = 0;
      if (0 < iVar12) {
        do {
          (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c2551aa((*(int *)(fr0_ - 0x34)) + iVar13,(*(int *)(fr0_ - 0x30)) + iVar13,iVar13 + iVar5,a7));
          a5 = (int *)(unsigned)((*(int *)(fr0_ - 0x38)) + iVar13);
          a6 = (int *)(unsigned)(iVar13 + iVar11);
          (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c25513c((*(int *)(fr0_ - 0x3c)) + iVar13,a5,a6,a7));
          iVar9 = iVar9 + 1;
          iVar13 = iVar13 + 0xc;
        } while (iVar9 < iVar12);
      }
      *(int *)(unsigned)(uint)ar4[1] = iVar5;
      iVar5 = iVar11;
    }
    *(int *)(unsigned)(ar4[1] + 4) = iVar5;
  }
LAB_8c25598e:
  uVar1 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4ab0bc)))(ar4[1],a5,a6,a7));
  *(undefined4 *)(unsigned)(uint)ar4[1] = uVar2;
  *(undefined4 *)(unsigned)(ar4[1] + 4) = uVar3;
  return uVar1;
}

__asm__(".globl _FUN_8c2556c8\n.set _FUN_8c2556c8, _FUN_8c2556c8_def\n");
