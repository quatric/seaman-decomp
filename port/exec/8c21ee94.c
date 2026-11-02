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
undefined4 FUN_8c21ee94_def(uint *ar4,uint *ar5,uint *ar6,uint **ar7)

{
  ring[rp++ & 255] = "FUN_8c21ee94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  uint *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *unaff_r11 = 0;
  uint *unaff_r12 = 0;
  int iVar7;
  undefined4 extraout_fr0 = 0;
  double in_dr2 = 0;
  double dVar8;
  float fVar9;
  undefined4 in_fr5 = 0;
  double dVar10;
  undefined8 in_dr14 = 0;
  double dVar11;
  bool bVar12;
  uint uVar13;
  char cVar14;
  char cVar15;
  
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab0c4);
  cVar15 = '\0';
  cVar14 = '\0';
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (ar4[1] == 0) {
    return ain0;
  }
  if ((*ar4 & 8) != 0) {
    return *ar4;
  }
  puVar3 = ((uint *)(unsigned long)*(unsigned *)(unsigned)ar4[1]);
  if ((puVar3 != (uint *)(unsigned)0x0) && ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad84) != 0)) {
    *(unsigned *)(unsigned long)*(unsigned *)0x8c4ab0c4 = (unsigned)(*puVar3);
    uVar4 = puVar3[1];
    puVar1[1] = uVar4;
    uVar4 = uVar4 >> 0x10;
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c2759d8) == 0) {
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c21ee54(*puVar1 & 0xffff,ar5,ar6,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c2759d8) = 1;
    }
    (*(int *)(fr0_ - 0x58)) = 0;
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) != -1) {
      unaff_r12 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab0c4) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378);
    }
    if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) != (uint *)(unsigned)0xffffffff) {
      unaff_r11 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab0c4) + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c);
    }
    if (cVar15 == '\0') {
      dVar11 = CONCAT44D(0x4f000000,(int)in_dr14);
    }
    else {
      dVar11 = -1.8630120701277013e-249;
    }
    ar5 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c);
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) & 0x10) != 0) {
      iVar5 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
      if (iVar5 != 0) {
        ar6 = ((uint *)(unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4));
        if (cVar15 == '\0') {
          dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad70),in_fr5);
        }
        else {
          dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad74),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70));
        }
        fVar9 = F32HI(dVar10);
        if (cVar14 == '\0') {
          bVar12 = F32HI(dVar11) < fVar9;
        }
        else {
          bVar12 = dVar11 < dVar10;
        }
        ar5 = (uint *)(unsigned)0x0;
        if (bVar12) {
          if (cVar15 == '\0') {
            dVar8 = CONCAT44D(0xcf800000,fVar9);
          }
          else {
            dVar8 = -3.155538209390776e-250;
          }
          if (cVar14 == '\0') {
            fVar9 = F32HI(dVar8);
            in_dr2 = CONCAT44D(fVar9,F32LO(dVar8) + fVar9);
          }
          else {
            in_dr2 = dVar8 + dVar8;
          }
        }
        else if (cVar15 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar9);
        }
        if (cVar14 == '\0') {
          uVar13 = (uint)SUB84(in_dr2,0);
          puVar6 = ar6;
        }
        else {
          uVar13 = (uint)in_dr2;
          puVar6 = ar6;
        }
        while ((*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(puVar6)), 1 < (uint)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) - (int)ar5)) {
          puVar6 = (uint *)(unsigned)((uint)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) + (int)ar5) >> 1);
          if (*(uint *)(unsigned)((int)puVar6 * 8 + iVar5) <= uVar13) {
            ar5 = puVar6;
            puVar6 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c));
          }
        }
        ar7 = ((uint * *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c221300(iVar5,ar5,ar6,ar7));
        in_fr5 = SUB84(dVar10,0);
        if (cVar15 == '\0') {
          dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),extraout_fr0);
        }
        (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x30))));
        (*(int *)(fr0_ - 0x4c)) = (*(int *)(fr0_ - 0x2c));
        (*(int *)(fr0_ - 0x58)) = 1;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) + 1;
    }
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) & 0x20) != 0) {
      ar5 = (uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
      iVar5 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + (int)ar5);
      if (iVar5 != 0) {
        ar6 = ((uint *)(unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + (int)ar5));
        if (cVar15 == '\0') {
          dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad70),in_fr5);
        }
        else {
          dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad74),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70));
        }
        fVar9 = F32HI(dVar10);
        if (cVar14 == '\0') {
          bVar12 = F32HI(dVar11) < fVar9;
        }
        else {
          bVar12 = dVar11 < dVar10;
        }
        ar5 = (uint *)(unsigned)0x0;
        if (bVar12) {
          if (cVar15 == '\0') {
            dVar11 = CONCAT44D(0xcf800000,fVar9);
          }
          else {
            dVar11 = -3.155538209390776e-250;
          }
          if (cVar14 == '\0') {
            fVar9 = F32HI(dVar11);
            in_dr2 = CONCAT44D(fVar9,F32LO(dVar11) + fVar9);
          }
          else {
            in_dr2 = dVar11 + dVar11;
          }
        }
        else if (cVar15 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar9);
        }
        if (cVar14 == '\0') {
          uVar13 = (uint)SUB84(in_dr2,0);
          puVar6 = ar6;
        }
        else {
          uVar13 = (uint)in_dr2;
          puVar6 = ar6;
        }
        while ((*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(puVar6)), 1 < (uint)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) - (int)ar5)) {
          puVar6 = (uint *)(unsigned)((uint)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) + (int)ar5) >> 1);
          if (*(uint *)(unsigned)((int)puVar6 * 8 + iVar5) <= uVar13) {
            ar5 = puVar6;
            puVar6 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c));
          }
        }
        ar7 = ((uint * *)(fr0_ - 0x38));
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c221300(iVar5,ar5,ar6,ar7));
        (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x38))));
        (*(int *)(fr0_ - 0x50)) = (*(int *)(fr0_ - 0x34));
        (*(int *)(fr0_ - 0x58)) = (*(int *)(fr0_ - 0x58)) + 2;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) + 1;
    }
    if ((*(int *)(fr0_ - 0x58)) == 1) {
      (*(int *)(fr0_ - 0x58)) = 0;
      (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)((uint *)(unsigned)0x0));
      puVar6 = puVar3;
      if (uVar4 != 0) {
        do {
          ar5 = (uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) * 4 + (*(int *)(fr0_ - 0x4c)));
          ar6 = unaff_r12;
          (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c22158a(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x54)) + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)),ar5,unaff_r12,ar7));
          unaff_r12 = unaff_r12 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          if (cVar15 == '\0') {
            *unaff_r11 = puVar6[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c)];
            unaff_r11[1] = puVar6[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 1];
            unaff_r11[2] = puVar6[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2];
          }
          else {
            *(undefined8 *)(unsigned)unaff_r11 = *(undefined8 *)(unsigned)(puVar6 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c));
            *(undefined8 *)(unsigned)(unaff_r11 + 1) = *(undefined8 *)(unsigned)(puVar6 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 1);
            *(undefined8 *)(unsigned)(unaff_r11 + 2) = *(undefined8 *)(unsigned)(puVar6 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2);
          }
          (*(int *)(fr0_ - 0x58)) = (*(int *)(fr0_ - 0x58)) + 1;
          unaff_r11 = unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          puVar6 = puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) + 3)));
        } while ((*(int *)(fr0_ - 0x58)) < (int)uVar4);
      }
    }
    else if ((*(int *)(fr0_ - 0x58)) == 2) {
      iVar5 = 0;
      iVar7 = 0;
      puVar6 = puVar3;
      if (uVar4 != 0) {
        do {
          if (cVar15 == '\0') {
            *unaff_r12 = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378)];
            unaff_r12[1] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1];
            unaff_r12[2] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2];
          }
          else {
            *(undefined8 *)(unsigned)unaff_r12 = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378));
            *(undefined8 *)(unsigned)(unaff_r12 + 1) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1);
            *(undefined8 *)(unsigned)(unaff_r12 + 2) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2);
          }
          unaff_r12 = unaff_r12 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          ar5 = (uint *)(unsigned)(iVar7 * 4 + (*(int *)(fr0_ - 0x50)));
          ar6 = unaff_r11;
          (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c2215b4(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) + iVar7,ar5,unaff_r11,ar7));
          iVar5 = iVar5 + 1;
          unaff_r11 = unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          puVar6 = puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          iVar7 = iVar7 + 3;
        } while (iVar5 < (int)uVar4);
      }
    }
    else {
      if ((*(int *)(fr0_ - 0x58)) != 3) goto LAB_8c21f1c8;
      iVar5 = 0;
      iVar7 = 0;
      if (uVar4 != 0) {
        do {
          (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c22158a(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x54)) + iVar7,iVar7 * 4 + (*(int *)(fr0_ - 0x4c)),unaff_r12,ar7));
          unaff_r12 = unaff_r12 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          ar5 = (uint *)(unsigned)(iVar7 * 4 + (*(int *)(fr0_ - 0x50)));
          ar6 = unaff_r11;
          (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c2215b4(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) + iVar7,ar5,unaff_r11,ar7));
          iVar5 = iVar5 + 1;
          unaff_r11 = unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          iVar7 = iVar7 + 3;
        } while (iVar5 < (int)uVar4);
      }
    }
    *(unsigned *)(unsigned)ar4[1] = puVar1;
    puVar1[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * uVar4 + 2] = 0xff;
  }
LAB_8c21f1c8:
  uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aa368)))(ar4[1],ar5,ar6,ar7));
  *(unsigned *)(unsigned)ar4[1] = puVar3;
  return uVar2;
}

__asm__(".globl _FUN_8c21ee94\n.set _FUN_8c21ee94, _FUN_8c21ee94_def\n");
