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
undefined4 FUN_8c21e4f8_def(uint *ar4,int ar5,uint *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c21e4f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  uint *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *unaff_r8 = 0;
  uint *unaff_r11 = 0;
  int iVar8;
  int iVar9;
  uint *unaff_r13 = 0;
  double in_dr2 = 0;
  double dVar10;
  float fVar12;
  double dVar11;
  undefined4 in_fr5 = 0;
  float in_fr13 = 0;
  undefined4 in_fr12 = 0;
  undefined8 in_dr14 = 0;
  bool bVar13;
  uint uVar14;
  char cVar15;
  char cVar16;
  
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab0c4);
  cVar16 = '\0';
  cVar15 = '\0';
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
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c21da20(*puVar1 & 0xffff,ar5,ar6,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c2759d8) = 1;
    }
    (*(int *)(fr0_ - 0x58)) = 0;
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) != -1) {
      unaff_r13 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab0c4) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378);
    }
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) != -1) {
      unaff_r11 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab0c4) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c);
    }
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa380) != -1) {
      unaff_r8 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab0c4) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa380);
    }
    if (cVar16 == '\0') {
      in_fr13 = 2.1474836e+09;
    }
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) & 0x10) != 0) {
      iVar5 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
      if (iVar5 != 0) {
        ar6 = ((uint *)(unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4));
        if (cVar16 == '\0') {
          dVar11 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad70),in_fr5);
        }
        else {
          dVar11 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad74),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70));
        }
        fVar12 = F32HI(dVar11);
        if (cVar15 == '\0') {
          bVar13 = in_fr13 < fVar12;
        }
        else {
          bVar13 = CONCAT44D(in_fr12,in_fr13) < dVar11;
        }
        puVar6 = (uint *)(unsigned)0x0;
        if (bVar13) {
          if (cVar16 == '\0') {
            dVar10 = CONCAT44D(0xcf800000,fVar12);
          }
          else {
            dVar10 = -3.155538209390776e-250;
          }
          if (cVar15 == '\0') {
            fVar12 = F32HI(dVar10);
            in_dr2 = CONCAT44D(fVar12,F32LO(dVar10) + fVar12);
          }
          else {
            in_dr2 = dVar10 + dVar10;
          }
        }
        else if (cVar16 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar12);
        }
        if (cVar15 == '\0') {
          uVar14 = (uint)SUB84(in_dr2,0);
          puVar7 = ar6;
        }
        else {
          uVar14 = (uint)in_dr2;
          puVar7 = ar6;
        }
        while ((*(unsigned *)(fr0_ - 0x74) = (unsigned)(unsigned long)(puVar7)), 1 < (uint)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) - (int)puVar6)) {
          puVar7 = (uint *)(unsigned)((uint)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) + (int)puVar6) >> 1);
          if (*(uint *)(unsigned)((int)puVar7 * 8 + iVar5) <= uVar14) {
            puVar6 = puVar7;
            puVar7 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74));
          }
        }
        ar7 = &(*(int *)(fr0_ - 0x34));
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c221300(iVar5,puVar6,ar6,ar7));
        in_fr5 = SUB84(dVar11,0);
        (*(int *)(fr0_ - 0x6c)) = (*(int *)(fr0_ - 0x34));
        (*(unsigned *)(fr0_ - 0x74) = (unsigned)(unsigned long)((uint *)(unsigned)(*(int *)(fr0_ - 0x30))));
        (*(int *)(fr0_ - 0x58)) = 1;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) + 1;
    }
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) & 0x20) != 0) {
      iVar5 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
      if (iVar5 != 0) {
        ar6 = ((uint *)(unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4));
        if (cVar16 == '\0') {
          dVar11 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad70),in_fr5);
        }
        else {
          dVar11 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad74),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70));
        }
        fVar12 = F32HI(dVar11);
        if (cVar15 == '\0') {
          bVar13 = in_fr13 < fVar12;
        }
        else {
          bVar13 = CONCAT44D(in_fr12,in_fr13) < dVar11;
        }
        puVar6 = (uint *)(unsigned)0x0;
        if (bVar13) {
          if (cVar16 == '\0') {
            dVar10 = CONCAT44D(0xcf800000,fVar12);
          }
          else {
            dVar10 = -3.155538209390776e-250;
          }
          if (cVar15 == '\0') {
            fVar12 = F32HI(dVar10);
            in_dr2 = CONCAT44D(fVar12,F32LO(dVar10) + fVar12);
          }
          else {
            in_dr2 = dVar10 + dVar10;
          }
        }
        else if (cVar16 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar12);
        }
        if (cVar15 == '\0') {
          uVar14 = (uint)SUB84(in_dr2,0);
          puVar7 = ar6;
        }
        else {
          uVar14 = (uint)in_dr2;
          puVar7 = ar6;
        }
        while ((*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)(puVar7)), 1 < (uint)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) - (int)puVar6)) {
          puVar7 = (uint *)(unsigned)((uint)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) + (int)puVar6) >> 1);
          if (*(uint *)(unsigned)((int)puVar7 * 8 + iVar5) <= uVar14) {
            puVar6 = puVar7;
            puVar7 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68));
          }
        }
        ar7 = &(*(int *)(fr0_ - 0x3c));
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c221300(iVar5,puVar6,ar6,ar7));
        in_fr5 = SUB84(dVar11,0);
        (*(int *)(fr0_ - 0x5c)) = (*(int *)(fr0_ - 0x3c));
        (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((uint *)(unsigned)(*(int *)(fr0_ - 0x38))));
        (*(int *)(fr0_ - 0x58)) = (*(int *)(fr0_ - 0x58)) + 2;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) + 1;
    }
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) & 0x4000) != 0) {
      iVar5 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
      if (iVar5 != 0) {
        ar6 = ((uint *)(unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4));
        if (cVar16 == '\0') {
          dVar11 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad70),in_fr5);
        }
        else {
          dVar11 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad74),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70));
        }
        fVar12 = F32HI(dVar11);
        if (cVar15 == '\0') {
          bVar13 = in_fr13 < fVar12;
        }
        else {
          bVar13 = CONCAT44D(in_fr12,in_fr13) < dVar11;
        }
        puVar6 = (uint *)(unsigned)0x0;
        if (bVar13) {
          if (cVar16 == '\0') {
            dVar11 = CONCAT44D(0xcf800000,fVar12);
          }
          else {
            dVar11 = -3.155905840934326e-250;
          }
          if (cVar15 == '\0') {
            fVar12 = F32HI(dVar11);
            in_dr2 = CONCAT44D(fVar12,F32LO(dVar11) + fVar12);
          }
          else {
            in_dr2 = dVar11 + dVar11;
          }
        }
        else if (cVar16 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar12);
        }
        if (cVar15 == '\0') {
          uVar14 = (uint)SUB84(in_dr2,0);
          puVar7 = ar6;
        }
        else {
          uVar14 = (uint)in_dr2;
          puVar7 = ar6;
        }
        while ((*(unsigned *)(fr0_ - 0x64) = (unsigned)(unsigned long)(puVar7)), 1 < (uint)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x64)) - (int)puVar6)) {
          puVar7 = (uint *)(unsigned)((uint)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x64)) + (int)puVar6) >> 1);
          if (*(uint *)(unsigned)((int)puVar7 * 8 + iVar5) <= uVar14) {
            puVar6 = puVar7;
            puVar7 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x64));
          }
        }
        ar7 = &(*(int *)(fr0_ - 0x44));
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c22138a(iVar5,puVar6,ar6,ar7));
        (*(unsigned *)(fr0_ - 0x64) = (unsigned)(unsigned long)((uint *)(unsigned)(*(int *)(fr0_ - 0x44))));
        (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x40));
        (*(int *)(fr0_ - 0x58)) = (*(int *)(fr0_ - 0x58)) + 4;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) + 1;
    }
    ar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa380);
    (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)(puVar3));
    if ((*(int *)(fr0_ - 0x58)) == 1) {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa380) == -1) {
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) == -1) {
          iVar5 = 0;
          iVar8 = 0;
          if (uVar4 != 0) {
            do {
              ar5 = (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) + iVar8 * 4;
              ar6 = unaff_r13;
              (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c22158a((*(int *)(fr0_ - 0x6c)) + iVar8 * 4,ar5,unaff_r13,ar7));
              iVar5 = iVar5 + 1;
              unaff_r13 = unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
              iVar8 = iVar8 + 3;
            } while (iVar5 < (int)uVar4);
          }
        }
        else {
          iVar5 = 0;
          iVar8 = 0;
          puVar6 = puVar3;
          if (uVar4 != 0) {
            do {
              ar5 = iVar8 * 4 + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74));
              ar6 = unaff_r13;
              (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c22158a(iVar8 * 4 + (*(int *)(fr0_ - 0x6c)),ar5,unaff_r13,ar7));
              iVar5 = iVar5 + 1;
              unaff_r13 = unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
              if (cVar16 == '\0') {
                *unaff_r11 = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c)];
                unaff_r11[1] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 1];
                unaff_r11[2] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 2];
              }
              else {
                *(undefined8 *)(unsigned)unaff_r11 = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c));
                *(undefined8 *)(unsigned)(unaff_r11 + 1) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 1);
                *(undefined8 *)(unsigned)(unaff_r11 + 2) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 2);
              }
              unaff_r11 = unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
              puVar6 = puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
              iVar8 = iVar8 + 3;
            } while (iVar5 < (int)uVar4);
          }
        }
      }
      else if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) == -1) {
        iVar5 = 0;
        iVar8 = 0;
        if (uVar4 != 0) {
          do {
            ar5 = (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) + iVar8 * 4;
            ar6 = unaff_r13;
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c22158a((*(int *)(fr0_ - 0x6c)) + iVar8 * 4,ar5,unaff_r13,ar7));
            iVar5 = iVar5 + 1;
            unaff_r13 = unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            *unaff_r8 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70))[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa380)];
            (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            iVar8 = iVar8 + 3;
          } while (iVar5 < (int)uVar4);
        }
      }
      else {
        iVar5 = 0;
        (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((uint *)(unsigned)0x0));
        puVar6 = puVar3;
        if (uVar4 != 0) {
          do {
            ar5 = iVar5 * 4 + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74));
            ar6 = unaff_r13;
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c22158a(iVar5 * 4 + (*(int *)(fr0_ - 0x6c)),ar5,unaff_r13,ar7));
            unaff_r13 = unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            if (cVar16 == '\0') {
              *unaff_r11 = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c)];
              unaff_r11[1] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 1];
              unaff_r11[2] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 2];
            }
            else {
              *(undefined8 *)(unsigned)unaff_r11 = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c));
              *(undefined8 *)(unsigned)(unaff_r11 + 1) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 1);
              *(undefined8 *)(unsigned)(unaff_r11 + 2) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 2);
            }
            unaff_r11 = unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            *unaff_r8 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70))[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa380)];
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            puVar6 = puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
            (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) + 1)));
            iVar5 = iVar5 + 3;
          } while ((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) < (int)uVar4);
        }
      }
    }
    else if ((*(int *)(fr0_ - 0x58)) == 2) {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa380) == -1) {
        iVar5 = 0;
        (*(unsigned *)(fr0_ - 0x74) = (unsigned)(unsigned long)((uint *)(unsigned)0x0));
        puVar6 = puVar3;
        if (uVar4 != 0) {
          do {
            if (cVar16 == '\0') {
              *unaff_r13 = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378)];
              unaff_r13[1] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1];
              unaff_r13[2] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2];
            }
            else {
              *(undefined8 *)(unsigned)unaff_r13 = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378));
              *(undefined8 *)(unsigned)(unaff_r13 + 1) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1);
              *(undefined8 *)(unsigned)(unaff_r13 + 2) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2);
            }
            unaff_r13 = unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            ar5 = iVar5 * 4 + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68));
            ar6 = unaff_r11;
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2215b4(iVar5 * 4 + (*(int *)(fr0_ - 0x5c)),ar5,unaff_r11,ar7));
            (*(unsigned *)(fr0_ - 0x74) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) + 1)));
            unaff_r11 = unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            puVar6 = puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            iVar5 = iVar5 + 3;
          } while ((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) < (int)uVar4);
        }
      }
      else {
        (*(int *)(fr0_ - 0x6c)) = 0;
        (*(unsigned *)(fr0_ - 0x74) = (unsigned)(unsigned long)((uint *)(unsigned)0x0));
        puVar6 = puVar3;
        if (uVar4 != 0) {
          do {
            if (cVar16 == '\0') {
              *unaff_r13 = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378)];
              unaff_r13[1] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1];
              unaff_r13[2] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2];
            }
            else {
              *(undefined8 *)(unsigned)unaff_r13 = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378));
              *(undefined8 *)(unsigned)(unaff_r13 + 1) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1);
              *(undefined8 *)(unsigned)(unaff_r13 + 2) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2);
            }
            unaff_r13 = unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            ar5 = (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) * 4 + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68));
            ar6 = unaff_r11;
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2215b4((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) * 4 + (*(int *)(fr0_ - 0x5c)),ar5,unaff_r11,ar7));
            unaff_r11 = unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            *unaff_r8 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70))[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa380)];
            (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
            puVar6 = puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            (*(int *)(fr0_ - 0x6c)) = (*(int *)(fr0_ - 0x6c)) + 1;
            (*(unsigned *)(fr0_ - 0x74) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) + 3)));
          } while ((*(int *)(fr0_ - 0x6c)) < (int)uVar4);
        }
      }
    }
    else if ((*(int *)(fr0_ - 0x58)) == 3) {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa380) == -1) {
        iVar5 = 0;
        iVar8 = 0;
        if (uVar4 != 0) {
          do {
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c22158a((*(int *)(fr0_ - 0x6c)) + iVar8 * 4,(int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) + iVar8 * 4,unaff_r13,ar7));
            unaff_r13 = unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            ar5 = iVar8 * 4 + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68));
            ar6 = unaff_r11;
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2215b4(iVar8 * 4 + (*(int *)(fr0_ - 0x5c)),ar5,unaff_r11,ar7));
            iVar5 = iVar5 + 1;
            unaff_r11 = unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            iVar8 = iVar8 + 3;
          } while (iVar5 < (int)uVar4);
        }
      }
      else {
        iVar5 = 0;
        iVar8 = 0;
        if (uVar4 != 0) {
          do {
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c22158a(iVar8 * 4 + (*(int *)(fr0_ - 0x6c)),iVar8 * 4 + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)),unaff_r13,ar7));
            unaff_r13 = unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            ar5 = iVar8 * 4 + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68));
            ar6 = unaff_r11;
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2215b4(iVar8 * 4 + (*(int *)(fr0_ - 0x5c)),ar5,unaff_r11,ar7));
            iVar5 = iVar5 + 1;
            unaff_r11 = unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            *unaff_r8 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70))[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa380)];
            (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            iVar8 = iVar8 + 3;
          } while (iVar5 < (int)uVar4);
        }
      }
    }
    else if ((*(int *)(fr0_ - 0x58)) == 4) {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) == -1) {
        iVar5 = 0;
        (*(unsigned *)(fr0_ - 0x74) = (unsigned)(unsigned long)((uint *)(unsigned)0x0));
        if (uVar4 != 0) {
          do {
            if (cVar16 == '\0') {
              *unaff_r13 = puVar3[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378)];
              unaff_r13[1] = puVar3[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1];
              unaff_r13[2] = puVar3[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2];
            }
            else {
              *(undefined8 *)(unsigned)unaff_r13 = *(undefined8 *)(unsigned)(puVar3 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378));
              *(undefined8 *)(unsigned)(unaff_r13 + 1) = *(undefined8 *)(unsigned)(puVar3 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1);
              *(undefined8 *)(unsigned)(unaff_r13 + 2) = *(undefined8 *)(unsigned)(puVar3 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2);
            }
            unaff_r13 = unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            ar5 = (*(int *)(fr0_ - 0x60)) + iVar5;
            ar6 = unaff_r8;
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c221414((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x64)) + iVar5,ar5,unaff_r8,ar7));
            (*(unsigned *)(fr0_ - 0x74) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) + 1)));
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            iVar5 = iVar5 + 4;
          } while ((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) < (int)uVar4);
        }
      }
      else {
        (*(int *)(fr0_ - 0x6c)) = 0;
        (*(unsigned *)(fr0_ - 0x74) = (unsigned)(unsigned long)((uint *)(unsigned)0x0));
        puVar6 = puVar3;
        if (uVar4 != 0) {
          do {
            if (cVar16 == '\0') {
              *unaff_r13 = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378)];
              unaff_r13[1] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1];
              unaff_r13[2] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2];
            }
            else {
              *(undefined8 *)(unsigned)unaff_r13 = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378));
              *(undefined8 *)(unsigned)(unaff_r13 + 1) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1);
              *(undefined8 *)(unsigned)(unaff_r13 + 2) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2);
            }
            unaff_r13 = unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            if (cVar16 == '\0') {
              *unaff_r11 = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c)];
              unaff_r11[1] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 1];
              unaff_r11[2] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 2];
            }
            else {
              *(undefined8 *)(unsigned)unaff_r11 = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c));
              *(undefined8 *)(unsigned)(unaff_r11 + 1) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 1);
              *(undefined8 *)(unsigned)(unaff_r11 + 2) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 2);
            }
            unaff_r11 = unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            ar5 = (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) + (*(int *)(fr0_ - 0x60));
            ar6 = unaff_r8;
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c221414((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x64)),ar5,unaff_r8,ar7));
            (*(int *)(fr0_ - 0x6c)) = (*(int *)(fr0_ - 0x6c)) + 1;
            puVar6 = puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            (*(unsigned *)(fr0_ - 0x74) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) + 4)));
          } while ((*(int *)(fr0_ - 0x6c)) < (int)uVar4);
        }
      }
    }
    else if ((*(int *)(fr0_ - 0x58)) == 5) {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) == -1) {
        iVar5 = 0;
        iVar9 = 0;
        iVar8 = 0;
        if (uVar4 != 0) {
          do {
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c22158a(iVar8 * 4 + (*(int *)(fr0_ - 0x6c)),iVar8 * 4 + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)),unaff_r13,ar7));
            ar5 = (*(int *)(fr0_ - 0x60)) + iVar9;
            unaff_r13 = unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            ar6 = unaff_r8;
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c221414((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x64)) + iVar9,ar5,unaff_r8,ar7));
            iVar5 = iVar5 + 1;
            iVar9 = iVar9 + 4;
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            iVar8 = iVar8 + 3;
          } while (iVar5 < (int)uVar4);
        }
      }
      else {
        (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((uint *)(unsigned)0x0));
        iVar5 = 0;
        (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)((uint *)(unsigned)0x0));
        puVar6 = puVar3;
        if (uVar4 != 0) {
          do {
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c22158a((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) * 4 + (*(int *)(fr0_ - 0x6c)),(int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) * 4 + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)),
                         unaff_r13,ar7));
            unaff_r13 = unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            if (cVar16 == '\0') {
              *unaff_r11 = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c)];
              unaff_r11[1] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 1];
              unaff_r11[2] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 2];
            }
            else {
              *(undefined8 *)(unsigned)unaff_r11 = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c));
              *(undefined8 *)(unsigned)(unaff_r11 + 1) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 1);
              *(undefined8 *)(unsigned)(unaff_r11 + 2) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa37c) + 2);
            }
            unaff_r11 = unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            ar5 = (*(int *)(fr0_ - 0x60)) + iVar5;
            ar6 = unaff_r8;
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c221414((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x64)) + iVar5,ar5,unaff_r8,ar7));
            iVar5 = iVar5 + 4;
            (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) + 1)));
            puVar6 = puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) + 3)));
          } while ((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) < (int)uVar4);
        }
      }
    }
    else if ((*(int *)(fr0_ - 0x58)) == 6) {
      (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)((uint *)(unsigned)0x0));
      (*(unsigned *)(fr0_ - 0x74) = (unsigned)(unsigned long)((uint *)(unsigned)0x0));
      (*(int *)(fr0_ - 0x6c)) = 0;
      puVar6 = puVar3;
      if (uVar4 != 0) {
        do {
          if (cVar16 == '\0') {
            *unaff_r13 = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378)];
            unaff_r13[1] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1];
            unaff_r13[2] = puVar6[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2];
          }
          else {
            *(undefined8 *)(unsigned)unaff_r13 = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378));
            *(undefined8 *)(unsigned)(unaff_r13 + 1) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1);
            *(undefined8 *)(unsigned)(unaff_r13 + 2) = *(undefined8 *)(unsigned)(puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2);
          }
          unaff_r13 = unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2215b4((*(int *)(fr0_ - 0x6c)) * 4 + (*(int *)(fr0_ - 0x5c)),(*(int *)(fr0_ - 0x6c)) * 4 + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)),unaff_r11,ar7));
          unaff_r11 = unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          ar5 = (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) + (*(int *)(fr0_ - 0x60));
          ar6 = unaff_r8;
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c221414((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x64)),ar5,unaff_r8,ar7));
          (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) + 1)));
          unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          (*(unsigned *)(fr0_ - 0x74) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)) + 4)));
          (*(int *)(fr0_ - 0x6c)) = (*(int *)(fr0_ - 0x6c)) + 3;
          puVar6 = puVar6 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
        } while ((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) < (int)uVar4);
      }
    }
    else {
      if ((*(int *)(fr0_ - 0x58)) != 7) goto LAB_8c21ee14;
      iVar8 = 0;
      (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)((uint *)(unsigned)0x0));
      iVar5 = 0;
      if (uVar4 != 0) {
        do {
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c22158a(iVar8 * 4 + (*(int *)(fr0_ - 0x6c)),iVar8 * 4 + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x74)),unaff_r13,ar7));
          unaff_r13 = unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c2215b4(iVar8 * 4 + (*(int *)(fr0_ - 0x5c)),iVar8 * 4 + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)),unaff_r11,ar7));
          ar5 = (*(int *)(fr0_ - 0x60)) + iVar5;
          unaff_r11 = unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          ar6 = unaff_r8;
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c221414((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x64)) + iVar5,ar5,unaff_r8,ar7));
          iVar5 = iVar5 + 4;
          (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) + 1)));
          unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          iVar8 = iVar8 + 3;
        } while ((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) < (int)uVar4);
      }
    }
    *(unsigned *)(unsigned)ar4[1] = puVar1;
    puVar1[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * uVar4 + 2] = 0xff;
  }
LAB_8c21ee14:
  uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aa368)))(ar4[1],ar5,ar6,ar7));
  *(unsigned *)(unsigned)ar4[1] = puVar3;
  return uVar2;
}

__asm__(".globl _FUN_8c21e4f8\n.set _FUN_8c21e4f8, _FUN_8c21e4f8_def\n");
