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
undefined4 * FUN_8c21f2ae_def(uint *ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c21f2ae";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 * ain0 = (undefined4 *)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 136; for (int i_ = 0; i_ < 136; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *unaff_r8 = 0;
  int iVar10;
  int iVar11;
  undefined8 *unaff_r11 = 0;
  undefined8 *unaff_r13 = 0;
  double in_dr2 = 0;
  double dVar12;
  float fVar14;
  double dVar13;
  float fVar15;
  undefined4 in_fr5 = 0;
  undefined4 in_fr12 = 0;
  undefined8 in_dr14 = 0;
  bool bVar16;
  uint uVar17;
  char cVar18;
  char cVar19;
  
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa360);
  cVar19 = '\0';
  cVar18 = '\0';
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa364) = 0;
  if ((((ar4[1] != 0) && (ain0 = (undefined4 *)(unsigned)*ar4, ((uint)ain0 & 8) == 0)) &&
      (puVar4 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)ar4[1]), puVar4 != (undefined4 *)(unsigned)0x0)) && ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad84) != 0)) {
    *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa360 = (unsigned)(*puVar4);
    uVar3 = puVar4[1];
    puVar1[1] = uVar3;
    (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)((undefined4 *)(unsigned)0x0));
    uVar3 = uVar3 >> 0x10;
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) != -1) {
      unaff_r13 = (undefined8 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa360) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378));
    }
    if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) != (undefined4 *)(unsigned)0xffffffff) {
      unaff_r11 = (undefined8 *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa360) + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c));
    }
    if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380) != (undefined4 *)(unsigned)0xffffffff) {
      unaff_r8 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa360) + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380);
    }
    fVar15 = 2.1474836e+09;
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) & 0x10) != 0) {
      iVar5 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
      if (iVar5 != 0) {
        uVar7 = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) <= 2.1474836e+09) {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70));
        }
        else {
          in_dr2 = CONCAT44D(0xcf800000,(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) + -4.2949673e+09);
        }
        uVar6 = 0;
        uVar2 = uVar7;
        while ((*(uint *)(fr0_ - 0x84)) = uVar2, 1 < (*(uint *)(fr0_ - 0x84)) - uVar6) {
          uVar2 = (*(uint *)(fr0_ - 0x84)) + uVar6 >> 1;
          if (*(uint *)(unsigned)(uVar2 * 8 + iVar5) <= (uint)(int)SUB84(in_dr2,0)) {
            uVar6 = uVar2;
            uVar2 = (*(uint *)(fr0_ - 0x84));
          }
        }
        ar7 = &(*(int *)(fr0_ - 0x3c));
        (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c22123c(iVar5,uVar6,uVar7,ar7));
        (*(int *)(fr0_ - 0x74)) = (*(int *)(fr0_ - 0x3c));
        (*(int *)(fr0_ - 0x6c)) = (*(int *)(fr0_ - 0x38));
        (*(int *)(fr0_ - 0x7c)) = (*(int *)(fr0_ - 0x34));
        (*(uint *)(fr0_ - 0x84)) = (*(int *)(fr0_ - 0x30));
        (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)((undefined4 *)(unsigned)0x1));
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) + 1;
    }
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) & 0x20) != 0) {
      iVar5 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
      if (iVar5 != 0) {
        uVar7 = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
        if (cVar19 == '\0') {
          dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad70),in_fr5);
        }
        else {
          dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad74),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70));
        }
        fVar14 = F32HI(dVar13);
        if (cVar18 == '\0') {
          bVar16 = fVar15 < fVar14;
        }
        else {
          bVar16 = CONCAT44D(in_fr12,fVar15) < dVar13;
        }
        uVar6 = 0;
        if (bVar16) {
          if (cVar19 == '\0') {
            dVar12 = CONCAT44D(0xcf800000,fVar14);
          }
          else {
            dVar12 = -3.1550160660390674e-250;
          }
          if (cVar18 == '\0') {
            fVar14 = F32HI(dVar12);
            in_dr2 = CONCAT44D(fVar14,F32LO(dVar12) + fVar14);
          }
          else {
            in_dr2 = dVar12 + dVar12;
          }
        }
        else if (cVar19 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar14);
        }
        uVar2 = uVar7;
        if (cVar18 == '\0') {
          uVar17 = (uint)SUB84(in_dr2,0);
        }
        else {
          uVar17 = (uint)in_dr2;
        }
        while ((*(uint *)(fr0_ - 0x78)) = uVar2, 1 < (*(uint *)(fr0_ - 0x78)) - uVar6) {
          uVar2 = (*(uint *)(fr0_ - 0x78)) + uVar6 >> 1;
          if (*(uint *)(unsigned)(uVar2 * 8 + iVar5) <= uVar17) {
            uVar6 = uVar2;
            uVar2 = (*(uint *)(fr0_ - 0x78));
          }
        }
        ar7 = &(*(int *)(fr0_ - 0x4c));
        (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c221300(iVar5,uVar6,uVar7,ar7));
        in_fr5 = SUB84(dVar13,0);
        (*(uint *)(fr0_ - 0x78)) = (*(int *)(fr0_ - 0x4c));
        (*(int *)(fr0_ - 0x68)) = (*(int *)(fr0_ - 0x48));
        (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x60)) + 2)));
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) + 1;
    }
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) & 0x4000) != 0) {
      iVar5 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad68) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
      if (iVar5 != 0) {
        uVar7 = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad6c) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) * 4);
        if (cVar19 == '\0') {
          dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad70),in_fr5);
        }
        else {
          dVar13 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aad74),(*(undefined4 *)(unsigned)(unsigned)0x8c4aad70));
        }
        uVar6 = 0;
        fVar14 = F32HI(dVar13);
        if (cVar18 == '\0') {
          bVar16 = fVar15 < fVar14;
        }
        else {
          bVar16 = CONCAT44D(in_fr12,fVar15) < dVar13;
        }
        if (bVar16) {
          if (cVar19 == '\0') {
            dVar13 = CONCAT44D(0xcf800000,fVar14);
          }
          else {
            dVar13 = -3.155905840934326e-250;
          }
          if (cVar18 == '\0') {
            fVar15 = F32HI(dVar13);
            in_dr2 = CONCAT44D(fVar15,F32LO(dVar13) + fVar15);
          }
          else {
            in_dr2 = dVar13 + dVar13;
          }
        }
        else if (cVar19 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar14);
        }
        uVar2 = uVar7;
        if (cVar18 == '\0') {
          uVar17 = (uint)SUB84(in_dr2,0);
        }
        else {
          uVar17 = (uint)in_dr2;
        }
        while (uVar8 = uVar2, 1 < uVar8 - uVar6) {
          uVar2 = uVar6 + uVar8 >> 1;
          if (*(uint *)(unsigned)(uVar2 * 8 + iVar5) <= uVar17) {
            uVar6 = uVar2;
            uVar2 = uVar8;
          }
        }
        ar7 = &(*(int *)(fr0_ - 0x54));
        (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c22138a(iVar5,uVar6,uVar7,ar7));
        (*(int *)(fr0_ - 0x70)) = (*(int *)(fr0_ - 0x54));
        (*(int *)(fr0_ - 0x64)) = (*(int *)(fr0_ - 0x50));
        (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x60)) + 1));
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) + 1;
    }
    ain0 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x60));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa364) = 1;
    (*(unsigned *)(fr0_ - 0x80) = (unsigned)(unsigned long)(puVar4));
    if (((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x60)) == (undefined4 *)(unsigned)0x1) {
      if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380) == (undefined4 *)(unsigned)0xffffffff) {
        if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) == (undefined4 *)(unsigned)0xffffffff) {
          iVar5 = 0;
          iVar9 = 0;
          ain0 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c);
          if (uVar3 != 0) {
            do {
              iVar10 = iVar9 * 4;
              ain0 = (undefined4 *)(unsigned)
                     ({ unsigned long t0_ = (unsigned long)(unaff_r13); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c221622((*(int *)(fr0_ - 0x74)) + iVar10,(*(int *)(fr0_ - 0x6c)) + iVar10,(*(int *)(fr0_ - 0x7c)) + iVar10,
                                  (*(uint *)(fr0_ - 0x84)) + iVar10); });
              iVar5 = iVar5 + 1;
              unaff_r13 = (undefined8 *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
              iVar9 = iVar9 + 3;
            } while (iVar5 < (int)uVar3);
          }
        }
        else {
          iVar5 = 0;
          (*(unsigned *)(fr0_ - 0x80) = (unsigned)(unsigned long)((undefined4 *)(unsigned)0x0));
          ain0 = (undefined4 *)(unsigned)0x0;
          if (uVar3 != 0) {
            do {
              iVar9 = iVar5 * 4;
              ({ unsigned long t0_ = (unsigned long)(
                           unaff_r13); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c221622((*(int *)(fr0_ - 0x74)) + iVar9,(*(int *)(fr0_ - 0x6c)) + iVar9,(*(int *)(fr0_ - 0x7c)) + iVar9,(*(uint *)(fr0_ - 0x84)) + iVar9); });
              unaff_r13 = (undefined8 *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
              if (cVar19 == '\0') {
                *(undefined4 *)(unsigned)unaff_r11 = puVar4[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c)];
                *(undefined4 *)(unsigned)((int)unaff_r11 + 4) = puVar4[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 1];
              }
              else {
                *unaff_r11 = *(undefined8 *)(unsigned)(puVar4 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c));
                *(undefined8 *)(unsigned)((int)unaff_r11 + 4) =
                     *(undefined8 *)(unsigned)(puVar4 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 1);
              }
              if (cVar19 == '\0') {
                *(undefined4 *)(unsigned)(unaff_r11 + 1) = puVar4[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2];
              }
              else {
                unaff_r11[1] = *(undefined8 *)(unsigned)(puVar4 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2);
              }
              (*(unsigned *)(fr0_ - 0x80) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80)) + 1)));
              puVar4 = puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
              unaff_r11 = (undefined8 *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
              iVar5 = iVar5 + 3;
              ain0 = (undefined4 *)(unsigned)0x8;
            } while ((int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80)) < (int)uVar3);
          }
        }
      }
      else if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) == (undefined4 *)(unsigned)0xffffffff) {
        iVar5 = 0;
        iVar9 = 0;
        ain0 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c);
        if (uVar3 != 0) {
          do {
            iVar10 = iVar9 * 4;
            ({ unsigned long t0_ = (unsigned long)(unaff_r13); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c221622((*(int *)(fr0_ - 0x74)) + iVar10,(*(int *)(fr0_ - 0x6c)) + iVar10,(*(int *)(fr0_ - 0x7c)) + iVar10,(*(uint *)(fr0_ - 0x84)) + iVar10
                         ); });
            iVar5 = iVar5 + 1;
            unaff_r13 = (undefined8 *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            *unaff_r8 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80))[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380)];
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            iVar9 = iVar9 + 3;
            ain0 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80));
            (*(unsigned *)(fr0_ - 0x80) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
          } while (iVar5 < (int)uVar3);
        }
      }
      else {
        iVar5 = 0;
        (*(int *)(fr0_ - 0x68)) = 0;
        ain0 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c);
        if (uVar3 != 0) {
          do {
            iVar9 = iVar5 * 4;
            ({ unsigned long t0_ = (unsigned long)(
                         unaff_r13); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c221622(iVar9 + (*(int *)(fr0_ - 0x74)),iVar9 + (*(int *)(fr0_ - 0x6c)),iVar9 + (*(int *)(fr0_ - 0x7c)),iVar9 + (*(uint *)(fr0_ - 0x84))); });
            unaff_r13 = (undefined8 *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            if (cVar19 == '\0') {
              *(undefined4 *)(unsigned)unaff_r11 = puVar4[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c)];
              *(undefined4 *)(unsigned)((int)unaff_r11 + 4) = puVar4[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 1];
              *(undefined4 *)(unsigned)(unaff_r11 + 1) = puVar4[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2];
            }
            else {
              *unaff_r11 = *(undefined8 *)(unsigned)(puVar4 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c));
              *(undefined8 *)(unsigned)((int)unaff_r11 + 4) = *(undefined8 *)(unsigned)(puVar4 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 1)
              ;
              unaff_r11[1] = *(undefined8 *)(unsigned)(puVar4 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2);
            }
            unaff_r11 = (undefined8 *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            *unaff_r8 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80))[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380)];
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            puVar4 = puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            (*(int *)(fr0_ - 0x68)) = (*(int *)(fr0_ - 0x68)) + 1;
            iVar5 = iVar5 + 3;
            ain0 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80));
            (*(unsigned *)(fr0_ - 0x80) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
          } while ((*(int *)(fr0_ - 0x68)) < (int)uVar3);
        }
      }
    }
    else if (((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x60)) == (undefined4 *)(unsigned)0x2) {
      if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380) == (undefined4 *)(unsigned)0xffffffff) {
        iVar5 = 0;
        (*(uint *)(fr0_ - 0x84)) = 0;
        ain0 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380);
        if (uVar3 != 0) {
          do {
            if (cVar19 == '\0') {
              *(undefined4 *)(unsigned)unaff_r13 = puVar4[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378)];
              *(undefined4 *)(unsigned)((int)unaff_r13 + 4) = puVar4[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1];
              *(undefined4 *)(unsigned)(unaff_r13 + 1) = puVar4[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2];
            }
            else {
              *unaff_r13 = *(undefined8 *)(unsigned)(puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378));
              *(undefined8 *)(unsigned)((int)unaff_r13 + 4) = *(undefined8 *)(unsigned)(puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1);
              unaff_r13[1] = *(undefined8 *)(unsigned)(puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2);
            }
            unaff_r13 = (undefined8 *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            ain0 = (undefined4 *)(unsigned)
                   (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c2215b4(iVar5 * 4 + (*(uint *)(fr0_ - 0x78)),iVar5 * 4 + (*(int *)(fr0_ - 0x68)),unaff_r11,ar7));
            (*(uint *)(fr0_ - 0x84)) = (*(uint *)(fr0_ - 0x84)) + 1;
            unaff_r11 = (undefined8 *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            puVar4 = puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            iVar5 = iVar5 + 3;
          } while ((int)(*(uint *)(fr0_ - 0x84)) < (int)uVar3);
        }
      }
      else {
        ain0 = (undefined4 *)(unsigned)0x0;
        (*(int *)(fr0_ - 0x7c)) = 0;
        (*(uint *)(fr0_ - 0x84)) = 0;
        if (uVar3 != 0) {
          do {
            if (cVar19 == '\0') {
              *(undefined4 *)(unsigned)unaff_r13 = puVar4[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378)];
              *(undefined4 *)(unsigned)((int)unaff_r13 + 4) = puVar4[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1];
              *(undefined4 *)(unsigned)(unaff_r13 + 1) = puVar4[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2];
            }
            else {
              *unaff_r13 = *(undefined8 *)(unsigned)(puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378));
              *(undefined8 *)(unsigned)((int)unaff_r13 + 4) = *(undefined8 *)(unsigned)(puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1);
              unaff_r13[1] = *(undefined8 *)(unsigned)(puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2);
            }
            unaff_r13 = (undefined8 *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c2215b4((*(uint *)(fr0_ - 0x84)) * 4 + (*(uint *)(fr0_ - 0x78)),(*(uint *)(fr0_ - 0x84)) * 4 + (*(int *)(fr0_ - 0x68)),unaff_r11,ar7));
            unaff_r11 = (undefined8 *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            *unaff_r8 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80))[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380)];
            puVar4 = puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            (*(int *)(fr0_ - 0x7c)) = (*(int *)(fr0_ - 0x7c)) + 1;
            (*(uint *)(fr0_ - 0x84)) = (*(uint *)(fr0_ - 0x84)) + 3;
            ain0 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80));
            (*(unsigned *)(fr0_ - 0x80) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
          } while ((*(int *)(fr0_ - 0x7c)) < (int)uVar3);
        }
      }
    }
    else if (((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x60)) == (undefined4 *)(unsigned)0x3) {
      if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380) == (undefined4 *)(unsigned)0xffffffff) {
        iVar5 = 0;
        iVar9 = 0;
        ain0 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380);
        if (uVar3 != 0) {
          do {
            iVar11 = iVar9 * 4;
            iVar10 = (*(uint *)(fr0_ - 0x84)) + iVar11;
            ({ unsigned long t0_ = (unsigned long)(unaff_r13); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c221622((*(int *)(fr0_ - 0x74)) + iVar11,(*(int *)(fr0_ - 0x6c)) + iVar11,(*(int *)(fr0_ - 0x7c)) + iVar11,iVar10); });
            unaff_r13 = (undefined8 *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            ain0 = (undefined4 *)(unsigned)
                   (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c2215b4((*(uint *)(fr0_ - 0x78)) + iVar9 * 4,(*(int *)(fr0_ - 0x68)) + iVar9 * 4,unaff_r11,iVar10));
            iVar5 = iVar5 + 1;
            unaff_r11 = (undefined8 *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            iVar9 = iVar9 + 3;
          } while (iVar5 < (int)uVar3);
        }
      }
      else {
        ain0 = (undefined4 *)(unsigned)0x0;
        iVar5 = 0;
        (*(int *)(fr0_ - 0x70)) = 0;
        if (uVar3 != 0) {
          do {
            iVar10 = iVar5 * 4;
            iVar9 = (*(uint *)(fr0_ - 0x84)) + iVar10;
            ({ unsigned long t0_ = (unsigned long)(unaff_r13); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c221622((*(int *)(fr0_ - 0x74)) + iVar10,(*(int *)(fr0_ - 0x6c)) + iVar10,(*(int *)(fr0_ - 0x7c)) + iVar10,iVar9); });
            unaff_r13 = (undefined8 *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c2215b4((*(uint *)(fr0_ - 0x78)) + iVar5 * 4,(*(int *)(fr0_ - 0x68)) + iVar5 * 4,unaff_r11,iVar9));
            unaff_r11 = (undefined8 *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            *unaff_r8 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80))[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa380)];
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            (*(int *)(fr0_ - 0x70)) = (*(int *)(fr0_ - 0x70)) + 1;
            iVar5 = iVar5 + 3;
            ain0 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80));
            (*(unsigned *)(fr0_ - 0x80) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80)) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374)));
          } while ((*(int *)(fr0_ - 0x70)) < (int)uVar3);
        }
      }
    }
    else if (((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x60)) == (undefined4 *)(unsigned)0x4) {
      if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) == (undefined4 *)(unsigned)0xffffffff) {
        iVar5 = 0;
        (*(uint *)(fr0_ - 0x84)) = 0;
        ain0 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c);
        if (uVar3 != 0) {
          do {
            if (cVar19 == '\0') {
              *(undefined4 *)(unsigned)unaff_r13 = puVar4[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378)];
              *(undefined4 *)(unsigned)((int)unaff_r13 + 4) = puVar4[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1];
              *(undefined4 *)(unsigned)(unaff_r13 + 1) = puVar4[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2];
            }
            else {
              *unaff_r13 = *(undefined8 *)(unsigned)(puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378));
              *(undefined8 *)(unsigned)((int)unaff_r13 + 4) = *(undefined8 *)(unsigned)(puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1);
              unaff_r13[1] = *(undefined8 *)(unsigned)(puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2);
            }
            unaff_r13 = (undefined8 *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            ain0 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 136)), FUN_8c221414((*(int *)(fr0_ - 0x70)) + iVar5,(*(int *)(fr0_ - 0x64)) + iVar5,unaff_r8,ar7));
            (*(uint *)(fr0_ - 0x84)) = (*(uint *)(fr0_ - 0x84)) + 1;
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            puVar4 = puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            iVar5 = iVar5 + 4;
          } while ((int)(*(uint *)(fr0_ - 0x84)) < (int)uVar3);
        }
      }
      else {
        ain0 = (undefined4 *)(unsigned)0x0;
        (*(int *)(fr0_ - 0x7c)) = 0;
        (*(uint *)(fr0_ - 0x84)) = 0;
        if (uVar3 != 0) {
          do {
            if (cVar19 == '\0') {
              *(undefined4 *)(unsigned)unaff_r13 = puVar4[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378)];
              *(undefined4 *)(unsigned)((int)unaff_r13 + 4) = puVar4[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1];
              *(undefined4 *)(unsigned)(unaff_r13 + 1) = puVar4[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2];
            }
            else {
              *unaff_r13 = *(undefined8 *)(unsigned)(puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378));
              *(undefined8 *)(unsigned)((int)unaff_r13 + 4) = *(undefined8 *)(unsigned)(puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1);
              unaff_r13[1] = *(undefined8 *)(unsigned)(puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2);
            }
            unaff_r13 = (undefined8 *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            if (cVar19 == '\0') {
              *(undefined4 *)(unsigned)unaff_r11 = puVar4[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c)];
              *(undefined4 *)(unsigned)((int)unaff_r11 + 4) = puVar4[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 1];
              *(undefined4 *)(unsigned)(unaff_r11 + 1) = puVar4[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2];
            }
            else {
              *unaff_r11 = *(undefined8 *)(unsigned)(puVar4 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c));
              *(undefined8 *)(unsigned)((int)unaff_r11 + 4) = *(undefined8 *)(unsigned)(puVar4 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 1)
              ;
              unaff_r11[1] = *(undefined8 *)(unsigned)(puVar4 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2);
            }
            unaff_r11 = (undefined8 *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            ain0 = (undefined4 *)(unsigned)
                   (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c221414((*(uint *)(fr0_ - 0x84)) + (*(int *)(fr0_ - 0x70)),(*(uint *)(fr0_ - 0x84)) + (*(int *)(fr0_ - 0x64)),unaff_r8,ar7));
            (*(int *)(fr0_ - 0x7c)) = (*(int *)(fr0_ - 0x7c)) + 1;
            puVar4 = puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            (*(uint *)(fr0_ - 0x84)) = (*(uint *)(fr0_ - 0x84)) + 4;
          } while ((*(int *)(fr0_ - 0x7c)) < (int)uVar3);
        }
      }
    }
    else if (((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x60)) == (undefined4 *)(unsigned)0x5) {
      if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) == (undefined4 *)(unsigned)0xffffffff) {
        iVar5 = 0;
        (*(unsigned *)(fr0_ - 0x80) = (unsigned)(unsigned long)((undefined4 *)(unsigned)0x0));
        iVar9 = 0;
        ain0 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c);
        if (uVar3 != 0) {
          do {
            iVar11 = iVar5 * 4;
            iVar10 = (*(uint *)(fr0_ - 0x84)) + iVar11;
            ({ unsigned long t0_ = (unsigned long)(unaff_r13); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c221622((*(int *)(fr0_ - 0x74)) + iVar11,(*(int *)(fr0_ - 0x6c)) + iVar11,(*(int *)(fr0_ - 0x7c)) + iVar11,iVar10); });
            unaff_r13 = (undefined8 *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            ain0 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 136)), FUN_8c221414((*(int *)(fr0_ - 0x70)) + iVar9,(*(int *)(fr0_ - 0x64)) + iVar9,unaff_r8,iVar10));
            iVar9 = iVar9 + 4;
            (*(unsigned *)(fr0_ - 0x80) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80)) + 1)));
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            iVar5 = iVar5 + 3;
          } while ((int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x80)) < (int)uVar3);
        }
      }
      else {
        (*(int *)(fr0_ - 0x68)) = 0;
        iVar5 = 0;
        (*(uint *)(fr0_ - 0x78)) = 0;
        ain0 = (undefined4 *)(unsigned)0x0;
        if (uVar3 != 0) {
          do {
            iVar9 = (*(uint *)(fr0_ - 0x78)) * 4;
            iVar10 = iVar9 + (*(uint *)(fr0_ - 0x84));
            ({ unsigned long t0_ = (unsigned long)(unaff_r13); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c221622(iVar9 + (*(int *)(fr0_ - 0x74)),iVar9 + (*(int *)(fr0_ - 0x6c)),iVar9 + (*(int *)(fr0_ - 0x7c)),iVar10); });
            unaff_r13 = (undefined8 *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            if (cVar19 == '\0') {
              *(undefined4 *)(unsigned)unaff_r11 = puVar4[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c)];
              *(undefined4 *)(unsigned)((int)unaff_r11 + 4) = puVar4[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 1];
              *(undefined4 *)(unsigned)(unaff_r11 + 1) = puVar4[(int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2];
            }
            else {
              *unaff_r11 = *(undefined8 *)(unsigned)(puVar4 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c));
              *(undefined8 *)(unsigned)((int)unaff_r11 + 4) = *(undefined8 *)(unsigned)(puVar4 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 1)
              ;
              unaff_r11[1] = *(undefined8 *)(unsigned)(puVar4 + (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa37c) + 2);
            }
            unaff_r11 = (undefined8 *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
            ain0 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 136)), FUN_8c221414((*(int *)(fr0_ - 0x70)) + iVar5,(*(int *)(fr0_ - 0x64)) + iVar5,unaff_r8,iVar10));
            iVar5 = iVar5 + 4;
            (*(int *)(fr0_ - 0x68)) = (*(int *)(fr0_ - 0x68)) + 1;
            puVar4 = puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
            (*(uint *)(fr0_ - 0x78)) = (*(uint *)(fr0_ - 0x78)) + 3;
          } while ((*(int *)(fr0_ - 0x68)) < (int)uVar3);
        }
      }
    }
    else if (((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x60)) == (undefined4 *)(unsigned)0x6) {
      (*(int *)(fr0_ - 0x74)) = 0;
      (*(uint *)(fr0_ - 0x84)) = 0;
      (*(int *)(fr0_ - 0x7c)) = 0;
      if (uVar3 != 0) {
        do {
          if (cVar19 == '\0') {
            *(undefined4 *)(unsigned)unaff_r13 = puVar4[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378)];
            *(undefined4 *)(unsigned)((int)unaff_r13 + 4) = puVar4[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1];
            *(undefined4 *)(unsigned)(unaff_r13 + 1) = puVar4[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2];
          }
          else {
            *unaff_r13 = *(undefined8 *)(unsigned)(puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378));
            *(undefined8 *)(unsigned)((int)unaff_r13 + 4) = *(undefined8 *)(unsigned)(puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 1);
            unaff_r13[1] = *(undefined8 *)(unsigned)(puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa378) + 2);
          }
          unaff_r13 = (undefined8 *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
          (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c2215b4((*(int *)(fr0_ - 0x7c)) * 4 + (*(uint *)(fr0_ - 0x78)),(*(int *)(fr0_ - 0x7c)) * 4 + (*(int *)(fr0_ - 0x68)),unaff_r11,ar7));
          unaff_r11 = (undefined8 *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
          ain0 = (undefined4 *)(unsigned)
                 (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c221414((*(uint *)(fr0_ - 0x84)) + (*(int *)(fr0_ - 0x70)),(*(uint *)(fr0_ - 0x84)) + (*(int *)(fr0_ - 0x64)),unaff_r8,ar7));
          (*(int *)(fr0_ - 0x74)) = (*(int *)(fr0_ - 0x74)) + 1;
          unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          (*(uint *)(fr0_ - 0x84)) = (*(uint *)(fr0_ - 0x84)) + 4;
          (*(int *)(fr0_ - 0x7c)) = (*(int *)(fr0_ - 0x7c)) + 3;
          puVar4 = puVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
        } while ((*(int *)(fr0_ - 0x74)) < (int)uVar3);
      }
    }
    else {
      if (((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x60)) != (undefined4 *)(unsigned)0x7) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa364) = 0;
        return (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c4aa364);
      }
      iVar5 = 0;
      (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)((undefined4 *)(unsigned)0x0));
      iVar9 = 0;
      if (uVar3 != 0) {
        do {
          iVar10 = iVar5 * 4;
          iVar11 = iVar10 + (*(uint *)(fr0_ - 0x84));
          ({ unsigned long t0_ = (unsigned long)(unaff_r13); *(unsigned *)((((unsigned long)(fr0_ - 136)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 136)) - 8); FUN_8c221622(iVar10 + (*(int *)(fr0_ - 0x74)),iVar10 + (*(int *)(fr0_ - 0x6c)),iVar10 + (*(int *)(fr0_ - 0x7c)),iVar11); });
          unaff_r13 = (undefined8 *)(unsigned)((int)unaff_r13 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
          (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c2215b4(iVar5 * 4 + (*(uint *)(fr0_ - 0x78)),iVar5 * 4 + (*(int *)(fr0_ - 0x68)),unaff_r11,iVar11));
          unaff_r11 = (undefined8 *)(unsigned)((int)unaff_r11 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * 4);
          ain0 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 136)), FUN_8c221414((*(int *)(fr0_ - 0x70)) + iVar9,(*(int *)(fr0_ - 0x64)) + iVar9,unaff_r8,iVar11));
          iVar9 = iVar9 + 4;
          (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x60)) + 1)));
          unaff_r8 = unaff_r8 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa374);
          iVar5 = iVar5 + 3;
        } while ((int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x60)) < (int)uVar3);
      }
    }
    puVar1[(*(undefined4 *)(unsigned)(unsigned)0x8c4aa374) * uVar3 + 2] = 0xff;
  }
  return ain0;
}

__asm__(".globl _FUN_8c21f2ae\n.set _FUN_8c21f2ae, _FUN_8c21f2ae_def\n");
