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
int FUN_8c22dd84_def(short *ar4,int ar5,uint ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c22dd84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  bool bVar1;
  float fVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined4 *ar4_00;
  undefined8 *puVar5;
  double *pdVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  undefined4 *ar6_00;
  undefined4 *ar5_00;
  double in_dr2 = 0;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_dr10 = 0;
  float fVar17;
  double dVar18;
  float fVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined8 in_xd4 = 0;
  undefined8 in_xd6 = 0;
  undefined8 in_xd8 = 0;
  undefined8 in_xd12 = 0;
  float fVar22;
  undefined8 in_xd14 = 0;
  bool bVar23;
  char cVar24;
  char cVar25;
  
  cVar25 = '\0';
  cVar24 = '\0';
  (*(uint *)(fr0_ - 0x38)) = ar6 & 0x3fff;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x20000) == 0) {
    uVar20 = 0x3f0000003f000000;
  }
  else {
    uVar20 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c277af8) + 0.5,(*(undefined4 *)(unsigned)(unsigned)0x8c277afc) + 0.5);
  }
  dVar18 = 0.007812501833541319;
  iVar9 = 0;
  iVar10 = 0;
  (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(ar4));
  do {
    psVar11 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) + 1;
    iVar12 = (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40));
    if (iVar12 < 0) {
      iVar12 = -iVar12;
    }
    iVar10 = iVar10 + iVar12;
    iVar12 = iVar12 + -2;
    psVar4 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) + 4;
    iVar8 = 0;
    (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) + 7));
    ar4_00 = (undefined4 *)(unsigned)(*psVar11 * 0x20 + ar5);
    ar5_00 = (undefined4 *)(unsigned)(*psVar4 * 0x20 + ar5);
    do {
      fVar22 = F32HI(in_xd12);
      ar6_00 = (undefined4 *)(unsigned)(*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) * 0x20 + ar5);
      if (cVar25 == '\0') {
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*ar4_00);
      }
      fVar19 = F32HI(dVar18);
      if (cVar24 == '\0') {
        bVar23 = fVar19 < SUB84(in_dr2,0);
      }
      else {
        bVar23 = dVar18 < in_dr2;
      }
      bVar1 = false;
      if (bVar23) {
        if (cVar25 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*ar5_00);
        }
        if (cVar24 == '\0') {
          bVar23 = fVar19 < SUB84(in_dr2,0);
        }
        else {
          bVar23 = dVar18 < in_dr2;
        }
        if (!bVar23) goto LAB_8c22de64;
        if (cVar25 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*ar6_00);
        }
        if (cVar24 == '\0') {
          bVar23 = fVar19 < SUB84(in_dr2,0);
        }
        else {
          bVar23 = dVar18 < in_dr2;
        }
        if (!bVar23) goto LAB_8c22de64;
      }
      else {
LAB_8c22de64:
        bVar1 = true;
      }
      fVar17 = F32LO(dVar18);
      uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
      uVar3 = (undefined4)uVar20;
      if (bVar1) {
        if (iVar8 != 0) {
          puVar7 = (undefined8 *)(unsigned)(ar5_00 + 1);
          if (cVar25 == '\0') {
            in_dr10 = CONCAT44(ar5_00[4],(int)in_dr10);
            pdVar6 = (double *)(unsigned)(ar5_00 + 6);
            uVar15 = CONCAT44(uVar21,ar5_00[5]);
            uVar16 = CONCAT44(uVar3,ar5_00[3]);
            fVar22 = fVar17;
          }
          else {
            in_xd6 = *puVar7;
            puVar7 = (undefined8 *)(unsigned)(ar5_00 + 3);
            in_xd4 = *(undefined8 *)(unsigned)(ar5_00 + 5);
            in_dr10 = *(undefined8 *)(unsigned)(ar5_00 + 7);
            in_xd8 = *(undefined8 *)(unsigned)(ar5_00 + 9);
            pdVar6 = (double *)(unsigned)(ar5_00 + 0xd);
            uVar15 = uVar20;
            uVar16 = in_xd14;
          }
          uVar14 = *puVar7;
          in_dr2 = *pdVar6;
          if (cVar24 == '\0') {
            uVar15 = CONCAT44(fVar22 * F32LO(in_dr2) + F32HI(uVar15),
                              (int)uVar15);
          }
          if (cVar25 == '\0') {
            puVar7 = (undefined8 *)(unsigned)(ar7 + 0x1c);
            *(int *)(unsigned)puVar7 = (int)uVar15;
          }
          else {
            puVar7 = (undefined8 *)(unsigned)(ar7 + 0x18);
            *puVar7 = in_xd8;
          }
          if (cVar24 == '\0') {
            uVar16 = CONCAT44(fVar22 * F32HI(in_dr2) +
                              F32HI(uVar16),(int)uVar16);
          }
          if (cVar25 == '\0') {
            *(int *)(unsigned)((int)puVar7 + -4) = (int)((ulonglong)in_dr10 >> 0x20);
            *(int *)(unsigned)(puVar7 + -1) = (int)((ulonglong)uVar16 >> 0x20);
            *(int *)(unsigned)((int)puVar7 + -0xc) = (int)((ulonglong)uVar15 >> 0x20);
            *(int *)(unsigned)(puVar7 + -2) = (int)uVar16;
            *(int *)(unsigned)((int)puVar7 + -0x14) = (int)((ulonglong)uVar14 >> 0x20);
            puVar7 = puVar7 + -3;
            *(int *)(unsigned)puVar7 = (int)uVar14;
          }
          else {
            puVar7[-1] = in_dr10;
            puVar7[-2] = uVar16;
            puVar7[-3] = uVar15;
            puVar7[-4] = in_xd4;
            puVar7[-5] = uVar14;
            puVar7 = puVar7 + -6;
            *puVar7 = in_xd6;
          }
          *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xf0000000;
          iVar9 = iVar9 + iVar8 + 1;
          iVar8 = 0;
          ar7 = (int)puVar7 + 0x1c;
        }
      }
      else {
        if (iVar8 == 0) {
          if (cVar25 == '\0') {
            in_dr10 = CONCAT44(ar4_00[1],(int)in_dr10);
            puVar7 = (undefined8 *)(unsigned)(ar4_00 + 2);
            uVar15 = CONCAT44(ar4_00[5],uVar21);
            puVar5 = (undefined8 *)(unsigned)(ar4_00 + 6);
            uVar16 = CONCAT44(uVar3,ar4_00[4]);
            fVar2 = fVar17;
          }
          else {
            in_dr10 = *(undefined8 *)(unsigned)(ar4_00 + 1);
            in_xd8 = *(undefined8 *)(unsigned)(ar4_00 + 3);
            puVar7 = (undefined8 *)(unsigned)(ar4_00 + 5);
            in_xd4 = *(undefined8 *)(unsigned)(ar4_00 + 7);
            uVar15 = *(undefined8 *)(unsigned)(ar4_00 + 9);
            puVar5 = (undefined8 *)(unsigned)(ar4_00 + 0xd);
            uVar16 = in_xd14;
            in_xd6 = uVar20;
            fVar2 = fVar22;
          }
          uVar14 = *puVar7;
          uVar13 = *puVar5;
          if (cVar24 == '\0') {
            uVar15 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),fVar2 * (float)uVar13 + (float)uVar15
                             );
          }
          if (cVar25 == '\0') {
            puVar7 = (undefined8 *)(unsigned)(ar7 + 0x1c);
            *(int *)(unsigned)puVar7 = (int)((ulonglong)uVar15 >> 0x20);
          }
          else {
            puVar7 = (undefined8 *)(unsigned)(ar7 + 0x18);
            *puVar7 = uVar15;
          }
          if (cVar24 == '\0') {
            uVar16 = CONCAT44(fVar2 * F32HI(uVar13) +
                              F32HI(uVar16),(int)uVar16);
          }
          if (cVar25 == '\0') {
            *(int *)(unsigned)((int)puVar7 + -4) = (int)uVar16;
            *(int *)(unsigned)(puVar7 + -1) = (int)((ulonglong)uVar16 >> 0x20);
            *(int *)(unsigned)((int)puVar7 + -0xc) = (int)uVar15;
            *(int *)(unsigned)(puVar7 + -2) = (int)((ulonglong)uVar14 >> 0x20);
            *(int *)(unsigned)((int)puVar7 + -0x14) = (int)uVar14;
            puVar7 = puVar7 + -3;
            *(int *)(unsigned)puVar7 = (int)((ulonglong)in_dr10 >> 0x20);
          }
          else {
            puVar7[-1] = in_xd4;
            puVar7[-2] = uVar16;
            puVar7[-3] = in_xd6;
            puVar7[-4] = uVar14;
            puVar7[-5] = in_xd8;
            puVar7 = puVar7 + -6;
            *puVar7 = in_dr10;
          }
          *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xe0000000;
          iVar8 = 1;
          ar7 = (int)puVar7 + 0x1c;
        }
        if (cVar25 == '\0') {
          in_dr10 = CONCAT44(ar5_00[1],(int)in_dr10);
          puVar7 = (undefined8 *)(unsigned)(ar5_00 + 2);
          uVar16 = CONCAT44(ar5_00[4],uVar21);
          pdVar6 = (double *)(unsigned)(ar5_00 + 6);
          uVar15 = CONCAT44(uVar3,ar5_00[5]);
          fVar22 = fVar17;
        }
        else {
          in_dr10 = *(undefined8 *)(unsigned)(ar5_00 + 1);
          in_xd8 = *(undefined8 *)(unsigned)(ar5_00 + 3);
          puVar7 = (undefined8 *)(unsigned)(ar5_00 + 5);
          uVar16 = *(undefined8 *)(unsigned)(ar5_00 + 7);
          in_xd4 = *(undefined8 *)(unsigned)(ar5_00 + 9);
          pdVar6 = (double *)(unsigned)(ar5_00 + 0xd);
          uVar15 = in_xd14;
          in_xd6 = uVar20;
        }
        uVar14 = *puVar7;
        in_dr2 = *pdVar6;
        if (cVar24 == '\0') {
          uVar16 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),
                            fVar22 * F32LO(in_dr2) + (float)uVar16);
        }
        if (cVar25 == '\0') {
          puVar7 = (undefined8 *)(unsigned)(ar7 + 0x1c);
          *(int *)(unsigned)puVar7 = (int)uVar15;
        }
        else {
          puVar7 = (undefined8 *)(unsigned)(ar7 + 0x18);
          *puVar7 = in_xd4;
        }
        if (cVar24 == '\0') {
          uVar15 = CONCAT44(fVar22 * F32HI(in_dr2) +
                            F32HI(uVar15),(int)uVar15);
        }
        if (cVar25 == '\0') {
          *(int *)(unsigned)((int)puVar7 + -4) = (int)((ulonglong)uVar16 >> 0x20);
          *(int *)(unsigned)(puVar7 + -1) = (int)((ulonglong)uVar15 >> 0x20);
          *(int *)(unsigned)((int)puVar7 + -0xc) = (int)uVar16;
          *(int *)(unsigned)(puVar7 + -2) = (int)((ulonglong)uVar14 >> 0x20);
          *(int *)(unsigned)((int)puVar7 + -0x14) = (int)uVar14;
          puVar7 = puVar7 + -3;
          *(int *)(unsigned)puVar7 = (int)((ulonglong)in_dr10 >> 0x20);
        }
        else {
          puVar7[-1] = uVar16;
          puVar7[-2] = uVar15;
          puVar7[-3] = in_xd6;
          puVar7[-4] = uVar14;
          puVar7[-5] = in_xd8;
          puVar7 = puVar7 + -6;
          *puVar7 = in_dr10;
        }
        *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xe0000000;
        ar7 = (int)puVar7 + 0x1c;
        iVar8 = iVar8 + 1;
      }
      if (bVar1) {
        if (cVar25 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*ar4_00);
        }
        if (cVar24 == '\0') {
          bVar23 = fVar19 < SUB84(in_dr2,0);
        }
        else {
          bVar23 = dVar18 < in_dr2;
        }
        if (!bVar23) {
          if (cVar25 == '\0') {
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*ar5_00);
          }
          if (cVar24 == '\0') {
            bVar23 = fVar19 < SUB84(in_dr2,0);
          }
          else {
            bVar23 = dVar18 < in_dr2;
          }
          if (!bVar23) {
            if (cVar25 == '\0') {
              in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*ar6_00);
            }
            if (cVar24 == '\0') {
              bVar23 = fVar19 < SUB84(in_dr2,0);
            }
            else {
              bVar23 = dVar18 < in_dr2;
            }
            if (!bVar23) goto LAB_8c22df58;
          }
        }
        ar7 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c22dff8(ar4_00,ar5_00,ar6_00,ar7));
      }
LAB_8c22df58:
      fVar22 = F32HI(in_xd12);
      (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) + (ar6 >> 0xe & 3) + 3));
      iVar12 = iVar12 + -1;
      ar4_00 = ar5_00;
      ar5_00 = ar6_00;
    } while (iVar12 != 0);
    if (iVar8 != 0) {
      if (cVar25 == '\0') {
        fVar22 = F32LO(dVar18);
        uVar16 = CONCAT44(ar6_00[1],ar6_00[3]);
        in_dr10 = CONCAT44(ar6_00[5],(int)in_dr10);
        pdVar6 = (double *)(unsigned)(ar6_00 + 6);
        uVar15 = CONCAT44((int)((ulonglong)uVar20 >> 0x20),ar6_00[4]);
        uVar14 = CONCAT44((int)uVar20,ar6_00[2]);
      }
      else {
        uVar16 = *(undefined8 *)(unsigned)(ar6_00 + 1);
        in_xd4 = *(undefined8 *)(unsigned)(ar6_00 + 3);
        in_xd6 = *(undefined8 *)(unsigned)(ar6_00 + 5);
        in_xd8 = *(undefined8 *)(unsigned)(ar6_00 + 7);
        in_dr10 = *(undefined8 *)(unsigned)(ar6_00 + 9);
        pdVar6 = (double *)(unsigned)(ar6_00 + 0xd);
        uVar15 = uVar20;
        uVar14 = in_xd14;
      }
      in_dr2 = *pdVar6;
      if (cVar24 == '\0') {
        uVar15 = CONCAT44(fVar22 * F32LO(in_dr2) + F32HI(uVar15),(int)uVar15)
        ;
      }
      if (cVar25 == '\0') {
        puVar7 = (undefined8 *)(unsigned)(ar7 + 0x1c);
        *(int *)(unsigned)puVar7 = (int)((ulonglong)in_dr10 >> 0x20);
      }
      else {
        puVar7 = (undefined8 *)(unsigned)(ar7 + 0x18);
        *puVar7 = in_dr10;
      }
      if (cVar24 == '\0') {
        uVar14 = CONCAT44(fVar22 * F32HI(in_dr2) +
                          F32HI(uVar14),(int)uVar14);
      }
      if (cVar25 == '\0') {
        *(int *)(unsigned)((int)puVar7 + -4) = (int)uVar15;
        *(int *)(unsigned)(puVar7 + -1) = (int)((ulonglong)uVar14 >> 0x20);
        *(int *)(unsigned)((int)puVar7 + -0xc) = (int)((ulonglong)uVar15 >> 0x20);
        *(int *)(unsigned)(puVar7 + -2) = (int)uVar16;
        *(int *)(unsigned)((int)puVar7 + -0x14) = (int)uVar14;
        puVar7 = puVar7 + -3;
        *(int *)(unsigned)puVar7 = (int)((ulonglong)uVar16 >> 0x20);
      }
      else {
        puVar7[-1] = in_xd8;
        puVar7[-2] = uVar14;
        puVar7[-3] = uVar15;
        puVar7[-4] = in_xd6;
        puVar7[-5] = in_xd4;
        puVar7 = puVar7 + -6;
        *puVar7 = uVar16;
      }
      *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xf0000000;
      iVar9 = iVar9 + iVar8 + 1;
      ar7 = (int)puVar7 + 0x1c;
    }
    (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) - 1;
    if ((*(uint *)(fr0_ - 0x38)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar9;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar10;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c22dd84\n.set _FUN_8c22dd84, _FUN_8c22dd84_def\n");
