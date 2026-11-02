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
undefined4 FUN_8c220c88_def(uint *ar4,double *ar5,double *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c220c88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 108; for (int i_ = 0; i_ < 108; i_++) z_[i_] = 0; }
  uint *puVar1;
  double dVar2;
  undefined4 uVar3;
  uint *puVar4;
  double *pdVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
  double *unaff_r11 = 0;
  uint *puVar9;
  int iVar10;
  double *unaff_r13 = 0;
  undefined4 extraout_fr0 = 0;
  double in_dr2 = 0;
  double dVar11;
  float fVar12;
  undefined4 in_fr5 = 0;
  double dVar13;
  undefined8 in_dr14 = 0;
  double dVar14;
  double in_xd2 = 0;
  bool bVar15;
  uint uVar16;
  char cVar17;
  char cVar18;
  
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab0c4);
  cVar18 = '\0';
  cVar17 = '\0';
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (ar4[1] == 0) {
    return ain0;
  }
  if ((*ar4 & 8) != 0) {
    return *ar4;
  }
  puVar4 = ((uint *)(unsigned long)*(unsigned *)(unsigned)ar4[1]);
  if ((puVar4 != (uint *)(unsigned)0x0) && ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad84) != 0)) {
    *(unsigned *)(unsigned long)*(unsigned *)0x8c4ab0c4 = (unsigned)(*puVar4);
    uVar6 = puVar4[1];
    puVar1[1] = uVar6;
    uVar6 = uVar6 >> 0x10;
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c2759d8) == 0) {
      (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2205d8(*puVar1 & 0xffff,ar5,ar6,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c2759d8) = 1;
    }
    (*(int *)(fr0_ - 0x50)) = 0;
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) != -1) {
      unaff_r13 = (double *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab0c4) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378));
    }
    if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) != (double *)(unsigned)0xffffffff) {
      unaff_r11 = (double *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab0c4) + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c));
    }
    if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380) != (double *)(unsigned)0xffffffff) {
      (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab0c4) + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380)));
    }
    if (cVar18 == '\0') {
      dVar14 = CONCAT44D(0x4f000000,(int)in_dr14);
    }
    else {
      dVar14 = -1.8630120701277013e-249;
    }
    ar5 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380);
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) & 0x10) != 0) {
      iVar7 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
      if (iVar7 != 0) {
        ar6 = ((double *)(unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4));
        if (cVar18 == '\0') {
          dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad70),in_fr5);
        }
        else {
          dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad74),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70));
        }
        fVar12 = F32HI(dVar13);
        if (cVar17 == '\0') {
          bVar15 = F32HI(dVar14) < fVar12;
        }
        else {
          bVar15 = dVar14 < dVar13;
        }
        ar5 = (double *)(unsigned)0x0;
        if (bVar15) {
          if (cVar18 == '\0') {
            dVar11 = CONCAT44D(0xcf800000,fVar12);
          }
          else {
            dVar11 = -3.155538209390776e-250;
            in_xd2 = dVar13;
          }
          dVar2 = in_xd2;
          if (cVar17 == '\0') {
            fVar12 = F32HI(dVar11);
            in_dr2 = CONCAT44D(fVar12,F32LO(dVar11) + fVar12);
          }
          else {
            in_dr2 = dVar11 + dVar11;
          }
        }
        else {
          dVar2 = dVar13;
          if (cVar18 == '\0') {
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar12);
            dVar2 = in_xd2;
          }
        }
        in_xd2 = dVar2;
        if (cVar17 == '\0') {
          uVar16 = (uint)SUB84(in_dr2,0);
          pdVar5 = ar6;
        }
        else {
          uVar16 = (uint)in_dr2;
          pdVar5 = ar6;
        }
        while ((*(unsigned *)(fr0_ - 0x64) = (unsigned)(unsigned long)(pdVar5)), 1 < (uint)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x64)) - (int)ar5)) {
          pdVar5 = (double *)(unsigned)((uint)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x64)) + (int)ar5) >> 1);
          if (*(uint *)(unsigned)((int)pdVar5 * 8 + iVar7) <= uVar16) {
            ar5 = pdVar5;
            pdVar5 = ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x64));
          }
        }
        ar7 = &(*(int *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c221300(iVar7,ar5,ar6,ar7));
        in_fr5 = SUB84(dVar13,0);
        if (cVar18 == '\0') {
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),extraout_fr0);
        }
        (*(unsigned *)(fr0_ - 0x64) = (unsigned)(unsigned long)((double *)(unsigned)(*(int *)(fr0_ - 0x30))));
        (*(int *)(fr0_ - 0x58)) = (*(int *)(fr0_ - 0x2c));
        (*(int *)(fr0_ - 0x50)) = 1;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) + 1;
    }
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) & 0x20) != 0) {
      ar5 = (double *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
      iVar7 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + (int)ar5);
      if (iVar7 != 0) {
        ar6 = ((double *)(unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + (int)ar5));
        if (cVar18 == '\0') {
          dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad70),in_fr5);
        }
        else {
          dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad74),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70));
        }
        ar5 = (double *)(unsigned)0x0;
        fVar12 = F32HI(dVar13);
        if (cVar17 == '\0') {
          bVar15 = F32HI(dVar14) < fVar12;
        }
        else {
          bVar15 = dVar14 < dVar13;
        }
        if (bVar15) {
          if (cVar18 == '\0') {
            dVar14 = CONCAT44D(0xcf800000,fVar12);
            dVar13 = in_xd2;
          }
          else {
            dVar14 = -3.155538209390776e-250;
          }
          if (cVar17 == '\0') {
            fVar12 = F32HI(dVar14);
            in_dr2 = CONCAT44D(fVar12,F32LO(dVar14) + fVar12);
          }
          else {
            in_dr2 = dVar14 + dVar14;
          }
        }
        else if (cVar18 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar12);
          dVar13 = in_xd2;
        }
        in_xd2 = dVar13;
        pdVar5 = ar6;
        if (cVar17 == '\0') {
          uVar16 = (uint)SUB84(in_dr2,0);
        }
        else {
          uVar16 = (uint)in_dr2;
        }
        while (pdVar8 = pdVar5, 1 < (uint)((int)pdVar8 - (int)ar5)) {
          pdVar5 = (double *)(unsigned)((uint)((int)ar5 + (int)pdVar8) >> 1);
          if (*(uint *)(unsigned)((int)pdVar5 * 8 + iVar7) <= uVar16) {
            ar5 = pdVar5;
            pdVar5 = pdVar8;
          }
        }
        ar7 = &(*(int *)(fr0_ - 0x38));
        (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c221300(iVar7,ar5,ar6,ar7));
        (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x38));
        (*(int *)(fr0_ - 0x54)) = (*(int *)(fr0_ - 0x34));
        (*(int *)(fr0_ - 0x50)) = (*(int *)(fr0_ - 0x50)) + 2;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) + 1;
    }
    (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)(puVar4));
    if ((*(int *)(fr0_ - 0x50)) == 1) {
      ar5 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c);
      if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380) == (double *)(unsigned)0xffffffff) {
        if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) == (double *)(unsigned)0xffffffff) {
          iVar7 = 0;
          iVar10 = 0;
          if (uVar6 != 0) {
            do {
              ar5 = (double *)(unsigned)((*(int *)(fr0_ - 0x58)) + iVar10 * 4);
              ar6 = unaff_r13;
              (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c22158a((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x64)) + iVar10 * 4,ar5,unaff_r13,ar7));
              iVar7 = iVar7 + 1;
              unaff_r13 = (double *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
              iVar10 = iVar10 + 3;
            } while (iVar7 < (int)uVar6);
          }
        }
        else {
          (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((uint *)(unsigned)0x0));
          iVar7 = 0;
          puVar9 = puVar4;
          if (uVar6 != 0) {
            do {
              ar5 = (double *)(unsigned)(iVar7 * 4 + (*(int *)(fr0_ - 0x58)));
              ar6 = unaff_r13;
              (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c22158a(iVar7 * 4 + (int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x64)),ar5,unaff_r13,ar7));
              if (cVar18 == '\0') {
                in_dr2 = (double)(ulonglong)puVar9[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c)];
              }
              else {
                in_xd2 = *(double *)(unsigned)(puVar9 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c));
              }
              iVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4;
              if (cVar18 == '\0') {
                *(uint *)(unsigned)unaff_r11 = SUB84(in_dr2,0);
              }
              else {
                *unaff_r11 = in_xd2;
              }
              unaff_r13 = (double *)(unsigned)((int)unaff_r13 + iVar10);
              if (cVar18 == '\0') {
                *(uint *)(unsigned)((int)unaff_r11 + 4) = puVar9[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 1];
                in_dr2 = (double)(ulonglong)puVar9[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2];
                *(uint *)(unsigned)(unaff_r11 + 1) = puVar9[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2];
              }
              else {
                *(undefined8 *)(unsigned)((int)unaff_r11 + 4) =
                     *(undefined8 *)(unsigned)(puVar9 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 1);
                in_xd2 = *(double *)(unsigned)(puVar9 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2);
                unaff_r11[1] = in_xd2;
              }
              (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) + 1)));
              puVar9 = puVar9 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
              unaff_r11 = (double *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
              iVar7 = iVar7 + 3;
            } while ((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) < (int)uVar6);
          }
        }
      }
      else if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) == (double *)(unsigned)0xffffffff) {
        iVar7 = 0;
        iVar10 = 0;
        if (uVar6 != 0) {
          do {
            ar5 = (double *)(unsigned)((*(int *)(fr0_ - 0x58)) + iVar10 * 4);
            ar6 = unaff_r13;
            (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c22158a((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x64)) + iVar10 * 4,ar5,unaff_r13,ar7));
            iVar7 = iVar7 + 1;
            unaff_r13 = (double *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68))[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380)];
            (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
            (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
            iVar10 = iVar10 + 3;
          } while (iVar7 < (int)uVar6);
        }
      }
      else {
        iVar7 = 0;
        (*(int *)(fr0_ - 0x60)) = 0;
        puVar9 = puVar4;
        if (uVar6 != 0) {
          do {
            ar5 = (double *)(unsigned)(iVar7 * 4 + (*(int *)(fr0_ - 0x58)));
            ar6 = unaff_r13;
            (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c22158a(iVar7 * 4 + (int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x64)),ar5,unaff_r13,ar7));
            if (cVar18 == '\0') {
              in_dr2 = (double)(ulonglong)puVar9[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c)];
            }
            else {
              in_xd2 = *(double *)(unsigned)(puVar9 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c));
            }
            iVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4;
            if (cVar18 == '\0') {
              *(uint *)(unsigned)unaff_r11 = SUB84(in_dr2,0);
            }
            else {
              *unaff_r11 = in_xd2;
            }
            unaff_r13 = (double *)(unsigned)((int)unaff_r13 + iVar10);
            if (cVar18 == '\0') {
              *(uint *)(unsigned)((int)unaff_r11 + 4) = puVar9[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 1];
              in_dr2 = (double)(ulonglong)puVar9[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2];
              *(uint *)(unsigned)(unaff_r11 + 1) = puVar9[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2];
            }
            else {
              *(undefined8 *)(unsigned)((int)unaff_r11 + 4) = *(undefined8 *)(unsigned)(puVar9 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 1)
              ;
              in_xd2 = *(double *)(unsigned)(puVar9 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2);
              unaff_r11[1] = in_xd2;
            }
            unaff_r11 = (double *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68))[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380)];
            (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
            puVar9 = puVar9 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
            (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x60)) + 1;
            iVar7 = iVar7 + 3;
          } while ((*(int *)(fr0_ - 0x60)) < (int)uVar6);
        }
      }
    }
    else if ((*(int *)(fr0_ - 0x50)) == 2) {
      if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380) == (double *)(unsigned)0xffffffff) {
        (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((uint *)(unsigned)0x0));
        iVar7 = 0;
        puVar9 = puVar4;
        if (uVar6 != 0) {
          do {
            if (cVar18 == '\0') {
              *(uint *)(unsigned)unaff_r13 = puVar9[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378)];
              *(uint *)(unsigned)((int)unaff_r13 + 4) = puVar9[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1];
              *(uint *)(unsigned)(unaff_r13 + 1) = puVar9[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2];
            }
            else {
              *unaff_r13 = *(double *)(unsigned)(puVar9 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378));
              *(undefined8 *)(unsigned)((int)unaff_r13 + 4) = *(undefined8 *)(unsigned)(puVar9 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1);
              unaff_r13[1] = *(double *)(unsigned)(puVar9 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2);
            }
            unaff_r13 = (double *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            ar5 = (double *)(unsigned)(iVar7 * 4 + (*(int *)(fr0_ - 0x54)));
            ar6 = unaff_r11;
            (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2215b4(iVar7 * 4 + (*(int *)(fr0_ - 0x60)),ar5,unaff_r11,ar7));
            (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) + 1)));
            unaff_r11 = (double *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            puVar9 = puVar9 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            iVar7 = iVar7 + 3;
          } while ((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) < (int)uVar6);
        }
      }
      else {
        iVar7 = 0;
        (*(unsigned *)(fr0_ - 0x64) = (unsigned)(unsigned long)((double *)(unsigned)0x0));
        puVar9 = puVar4;
        if (uVar6 != 0) {
          do {
            if (cVar18 == '\0') {
              *(uint *)(unsigned)unaff_r13 = puVar9[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378)];
              *(uint *)(unsigned)((int)unaff_r13 + 4) = puVar9[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1];
              *(uint *)(unsigned)(unaff_r13 + 1) = puVar9[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2];
            }
            else {
              *unaff_r13 = *(double *)(unsigned)(puVar9 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378));
              *(undefined8 *)(unsigned)((int)unaff_r13 + 4) = *(undefined8 *)(unsigned)(puVar9 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1);
              unaff_r13[1] = *(double *)(unsigned)(puVar9 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2);
            }
            unaff_r13 = (double *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            ar5 = (double *)(unsigned)(iVar7 * 4 + (*(int *)(fr0_ - 0x54)));
            ar6 = unaff_r11;
            (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2215b4(iVar7 * 4 + (*(int *)(fr0_ - 0x60)),ar5,unaff_r11,ar7));
            unaff_r11 = (double *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68))[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380)];
            (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
            puVar9 = puVar9 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
            (*(unsigned *)(fr0_ - 0x64) = (unsigned)(unsigned long)((double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x64)) + 1)));
            iVar7 = iVar7 + 3;
          } while ((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x64)) < (int)uVar6);
        }
      }
    }
    else {
      if ((*(int *)(fr0_ - 0x50)) != 3) goto LAB_8c221200;
      if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380) == (double *)(unsigned)0xffffffff) {
        iVar7 = 0;
        iVar10 = 0;
        if (uVar6 != 0) {
          do {
            (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c22158a(iVar10 * 4 + (int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x64)),iVar10 * 4 + (*(int *)(fr0_ - 0x58)),unaff_r13,ar7));
            unaff_r13 = (double *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            ar5 = (double *)(unsigned)(iVar10 * 4 + (*(int *)(fr0_ - 0x54)));
            ar6 = unaff_r11;
            (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2215b4(iVar10 * 4 + (*(int *)(fr0_ - 0x60)),ar5,unaff_r11,ar7));
            iVar7 = iVar7 + 1;
            unaff_r11 = (double *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            iVar10 = iVar10 + 3;
          } while (iVar7 < (int)uVar6);
        }
      }
      else {
        iVar7 = 0;
        iVar10 = 0;
        if (uVar6 != 0) {
          do {
            (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c22158a(iVar10 * 4 + (int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x64)),iVar10 * 4 + (*(int *)(fr0_ - 0x58)),unaff_r13,ar7));
            unaff_r13 = (double *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            ar5 = (double *)(unsigned)(iVar10 * 4 + (*(int *)(fr0_ - 0x54)));
            ar6 = unaff_r11;
            (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c2215b4(iVar10 * 4 + (*(int *)(fr0_ - 0x60)),ar5,unaff_r11,ar7));
            iVar7 = iVar7 + 1;
            unaff_r11 = (double *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68))[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380)];
            (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
            (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
            iVar10 = iVar10 + 3;
          } while (iVar7 < (int)uVar6);
        }
      }
    }
    *(unsigned *)(unsigned)ar4[1] = puVar1;
    puVar1[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * uVar6 + 2] = 0xff;
  }
LAB_8c221200:
  uVar3 = (vsp = ((unsigned long)(fr0_ - 108)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aa368)))(ar4[1],ar5,ar6,ar7));
  *(unsigned *)(unsigned)ar4[1] = puVar4;
  return uVar3;
}

__asm__(".globl _FUN_8c220c88\n.set _FUN_8c220c88, _FUN_8c220c88_def\n");
