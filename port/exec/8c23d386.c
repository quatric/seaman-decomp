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
undefined4 FUN_8c23d386_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23d386";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  double *pdVar1;
  double *pdVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined4 *puVar5;
  uint *puVar6;
  double *pdVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar19;
  undefined4 uVar20;
  double dVar18;
  float fVar21;
  double in_dr4 = 0;
  double dVar22;
  undefined4 in_fr7 = 0;
  double dVar23;
  undefined4 in_fr9 = 0;
  double dVar24;
  undefined4 uVar25;
  undefined4 in_fr11 = 0;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 in_dr12 = 0;
  double dVar29;
  undefined8 in_dr14 = 0;
  double in_xd0 = 0;
  undefined8 in_xd2 = 0;
  undefined8 in_xd4 = 0;
  undefined8 in_xd6 = 0;
  double in_xd8 = 0;
  undefined8 in_xd10 = 0;
  float in_xf12 = 0;
  float in_xf13 = 0;
  double in_xd14 = 0;
  bool bVar30;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  puVar9 = 0x8c4aa4e0;
  pdVar4 = 0x8c4ab324;
  puVar3 = 0x8c4aa4dc;
  pdVar2 = 0x8c4ab320;
  pdVar1 = 0x8c4aa4a8;
  uVar8 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x1c)) = CONCAT44D((int)in_dr14,(undefined4)(*(undefined8 *)(fr0_ - 0x1c)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1c))+0)) = uVar8;
    puVar12 = (undefined1 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x24)) + 4);
    (*(undefined8 *)(fr0_ - 0x24)) = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)(*(undefined8 *)(fr0_ - 0x24)));
  }
  else {
    puVar12 = ((undefined1 *)(fr0_ - 0x2c));
    (*(undefined8 *)(fr0_ - 0x1c)) = in_xd14;
    (*(undefined8 *)(fr0_ - 0x24)) = in_dr14;
  }
  *(undefined4 *)(unsigned)(puVar12 + -4) = in_PR;
  *(undefined4 *)(unsigned)(puVar12 + -0x48) = 0xffffffff;
  *(undefined4 *)(unsigned)(puVar12 + -0x38) = 0;
  *(undefined4 *)(unsigned)(puVar12 + -0x40) = *(undefined4 *)(unsigned)0x8c4aa510;
  *(undefined4 *)(unsigned)(puVar12 + -0x3c) = *ar4;
  iVar11 = ar4[1];
  *(undefined4 *)(unsigned)0x8c4ab318 = 0;
  puVar5 = 0x8c4ab30c;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,*(undefined4 *)(unsigned)puVar3);
  }
  else {
    in_xd2 = *puVar3;
    dVar17 = *pdVar1;
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = CONCAT44D(F32HI(dVar17) * F32LO(dVar17),SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)pdVar2 = (int)(D2U(dVar17) >> 0x20);
    dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,*(undefined4 *)(unsigned)puVar9);
  }
  else {
    *pdVar2 = dVar17;
    in_xd2 = *puVar9;
    dVar17 = *pdVar1;
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = CONCAT44D(F32HI(dVar17) * F32LO(dVar17),SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)pdVar4 = (int)(D2U(dVar17) >> 0x20);
    dVar17 = CONCAT44D(ar4[6],ar4[7]);
    fVar19 = (float)ar4[8];
  }
  else {
    *pdVar4 = dVar17;
    dVar17 = *(double *)(unsigned)(ar4 + 6);
    in_xd0 = *(double *)(unsigned)(ar4 + 8);
    fVar19 = (float)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 10) >> 0x20);
  }
  dVar18 = CONCAT44D(fVar19,0x3f800000);
                    
  if (in_FPSCR_PR == '\0') {
    fVar15 = F32LO(dVar17);
    fVar26 = F32HI(dVar17);
    fVar13 = F32LO(in_xd0) * fVar15 + (float)in_xd4 * fVar26 + F32LO(in_xd8) * 1.0 +
             in_xf12 * fVar19;
    fVar13 = F32HI(in_xd0) * fVar15 +
             F32HI(in_xd4) * fVar26 + F32HI(in_xd8) * 1.0
             + in_xf13 * fVar19;
    fVar13 = (float)in_xd2 * fVar15 + (float)in_xd6 * fVar26 + (float)in_xd10 * 1.0 +
             F32LO(in_xd14) * fVar19;
    fVar19 = F32HI(in_xd2) * fVar15 +
             F32HI(in_xd6) * fVar26 + F32HI(in_xd10) * 1.0
             + F32HI(in_xd14) * fVar19;
  }
  uVar20 = (undefined4)(D2U(dVar18) >> 0x20);
  uVar25 = (undefined4)(D2U(dVar17) >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    puVar5[2] = uVar20;
    puVar5[1] = SUB84(dVar17,0);
    *puVar5 = uVar25;
  }
  else {
    *(double *)(unsigned)(puVar5 + 1) = dVar18;
    *(double *)(unsigned)(puVar5 + -1) = in_xd0;
    *(double *)(unsigned)(puVar5 + -3) = dVar17;
  }
  puVar6 = 0x8c4aa4f0;
  puVar3 = 0x8c4aa4c4;
  uVar10 = *(undefined4 *)(unsigned)0x8c4aa4f0;
  dVar29 = CONCAT44D(uVar8,0x3f800000);
  if (in_FPSCR_SZ == '\0') {
    in_dr4 = (double)(ulonglong)*(uint *)(unsigned)(0x8c4ab30c + 1);
  }
  if (((int)0x100 & uVar10) == 0) {
LAB_8c23d4be:
    uVar8 = SUB84(dVar17,0);
    if ((uVar10 & 0x40) != 0) {
      if (in_FPSCR_SZ == '\0') {
        dVar17 = CONCAT44D(ar4[9],SUB84(in_dr4,0));
        dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),*(undefined4 *)(unsigned)0x8c4aa544);
      }
      else {
        dVar17 = *(double *)(unsigned)(ar4 + 9);
      }
      if (in_FPSCR_PR == '\0') {
        bVar30 = SUB84(dVar18,0) < F32LO(dVar17) + F32HI(dVar17);
      }
      else {
        bVar30 = dVar18 < dVar17 + dVar17;
      }
      if (bVar30) {
        *(undefined4 *)(unsigned)0x8c4aa554 = 1;
      }
    }
    uVar10 = (uint)0x80;
    *(undefined4 *)(unsigned)0x8c4aa518 = *(undefined4 *)(unsigned)0x8c4aa518 + ar4[2];
    *(undefined4 *)(unsigned)(puVar12 + -0x34) = ar4[2];
    *(undefined4 *)(unsigned)(puVar12 + -0x30) = *(undefined4 *)(unsigned)(puVar12 + -0x40);
    *(undefined4 *)(unsigned)(puVar12 + -0x2c) = *(undefined4 *)(unsigned)(puVar12 + -0x3c);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(puVar12 + -0x24) = *(undefined4 *)(unsigned)pdVar2;
      *(undefined4 *)(unsigned)(puVar12 + -0x20) = *(undefined4 *)(unsigned)pdVar4;
    }
    else {
      *(double *)(unsigned)(puVar12 + -0x24) = *pdVar2;
      *(double *)(unsigned)(puVar12 + -0x20) = *pdVar4;
    }
    if ((*puVar6 & 2) == 0) {
      *(undefined4 *)(unsigned)(puVar12 + -0x1c) = *(undefined4 *)(unsigned)(puVar12 + -0x48);
      puVar9 = puVar3 + 1;
      *(undefined4 *)(unsigned)(puVar12 + -0x18) = *(undefined4 *)(unsigned)(puVar12 + -0x38);
      *(unsigned *)(unsigned)(puVar12 + -0x44) = puVar3;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar12 + -0x14) = *(undefined4 *)(unsigned)puVar3;
      }
      else {
        *(undefined8 *)(unsigned)(puVar12 + -0x14) = *puVar3;
      }
      *(unsigned *)(unsigned)(puVar12 + -0x48) = puVar9;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar12 + -0x10) = *(undefined4 *)(unsigned)puVar9;
      }
      else {
        *(undefined8 *)(unsigned)(puVar12 + -0x10) = *puVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar12 + -0xc) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(puVar12 + -0x44) + 4);
      }
      else {
        *(undefined8 *)(unsigned)(puVar12 + -0xc) = *(undefined8 *)(unsigned)(*(int *)(unsigned)(puVar12 + -0x44) + 4);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar12 + -8) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(puVar12 + -0x48) + 4);
      }
      else {
        *(undefined8 *)(unsigned)(puVar12 + -8) = *(undefined8 *)(unsigned)(*(int *)(unsigned)(puVar12 + -0x48) + 4);
      }
      if (iVar11 == 0) {
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c23d254(puVar12 + -0x34,0x8c4ab148,puVar9,uVar10));
      }
      else {
        *(int *)(unsigned)(puVar12 + -0x28) = iVar11;
        iVar11 = *(undefined4 *)(unsigned)0x8c4ab148;
        if ((uVar10 & *puVar6) == 0) {
          if (iVar11 == 0) {
            (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c23d118(puVar12 + -0x34,0x8c4ab148,0,uVar10));
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c23cfd0(puVar12 + -0x34,0x8c4ab148,iVar11,uVar10));
          }
        }
        else if (iVar11 == 0) {
          (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c23ce74(puVar12 + -0x34,0x8c4ab148,0,uVar10));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c23cd0c(puVar12 + -0x34,0x8c4ab148,iVar11,uVar10));
        }
      }
      uVar10 = *(uint *)(unsigned)(puVar12 + -0x1c);
      if ((((uVar10 & 0x3c) != 0) || ((uVar10 & 2) != 0)) || ((uVar10 & 1) != 0)) goto LAB_8c23d61a;
      *(undefined4 *)(unsigned)0x8c4ab318 = *(undefined4 *)(unsigned)(puVar12 + -0x18);
      pdVar7 = 0x8c4ab32c;
      pdVar1 = 0x8c4ab328;
      if ((*(uint *)(unsigned)(puVar12 + -0x18) & 1) != 0) {
        fVar19 = F32LO(dVar29);
        dVar18 = in_xd14;
        dVar17 = in_xd14;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = CONCAT44D(fVar19,uVar8);
          dVar17 = CONCAT44D(fVar19,*(undefined4 *)(unsigned)0x8c4aa4d4);
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = CONCAT44D(F32HI(dVar17) / F32LO(dVar17),
                                    SUB84(dVar17,0));
        }
        else {
          dVar17 = dVar17 / dVar17;
        }
        uVar8 = (undefined4)(D2U(dVar17) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)0x8c4ab31c = uVar8;
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),*(undefined4 *)(unsigned)pdVar2);
        }
        else {
          *(undefined4 *)(unsigned)0x8c4ab31c = dVar17;
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = CONCAT44D(F32HI(dVar18) / F32LO(dVar18),
                                    SUB84(dVar18,0));
        }
        else {
          dVar18 = dVar18 / dVar18;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)pdVar1 = (int)(D2U(dVar18) >> 0x20);
          dVar17 = CONCAT44D(uVar8,*(undefined4 *)(unsigned)pdVar4);
        }
        else {
          *pdVar1 = dVar18;
        }
        if (in_FPSCR_PR == '\0') {
          fVar19 = fVar19 / F32LO(dVar17);
        }
        else {
          fVar19 = SUB84(dVar29 / dVar17,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)pdVar7 = fVar19;
        }
        else {
          *pdVar7 = in_xd14;
        }
      }
    }
    else if (iVar11 == 0) {
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c23cc40(puVar12 + -0x34,0x8c4ab148,puVar3,uVar10));
    }
    else {
      *(int *)(unsigned)(puVar12 + -0x28) = iVar11;
      if ((uVar10 & *puVar6) == 0) {
        if (*(undefined4 *)(unsigned)0x8c4ab148 == 0) {
          (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c23cb50(puVar12 + -0x34,0x8c4ab148,puVar3,uVar10));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c23ca50(puVar12 + -0x34,0x8c4ab148,puVar3,uVar10));
        }
      }
      else if (*(undefined4 *)(unsigned)0x8c4ab148 == 0) {
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c23c940(puVar12 + -0x34,0x8c4ab148,puVar3,uVar10));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c23c824(puVar12 + -0x34,0x8c4ab148,puVar3,uVar10));
      }
    }
    uVar8 = 0;
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D(uVar20,SUB84(in_dr4,0));
      dVar22 = CONCAT44D(ar4[9],SUB84(in_dr4,0));
    }
    else {
      dVar22 = *(double *)(unsigned)(ar4 + 9);
    }
    fVar19 = F32HI(dVar22);
    if (in_FPSCR_PR == '\0') {
      fVar13 = F32LO(dVar18) + fVar19;
    }
    else {
      fVar13 = SUB84(dVar18 + dVar22,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4d4,fVar13);
    }
    else {
      dVar18 = *(undefined4 *)(unsigned)0x8c4aa4d4;
    }
    fVar13 = F32HI(dVar18);
    if (in_FPSCR_PR == '\0' && fVar13 < SUB84(dVar18,0)) {
      uVar8 = SUB84(dVar22,0);
      if (in_FPSCR_SZ == '\0') {
        dVar18 = CONCAT44D(fVar13,uVar8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = F32LO(dVar18) - fVar19;
      }
      else {
        fVar13 = SUB84(dVar18 - dVar22,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar18 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4d8,fVar13);
      }
      else {
        dVar18 = *(undefined4 *)(unsigned)0x8c4aa4d8;
      }
      fVar13 = F32HI(dVar18);
      if (in_FPSCR_PR != '\0' || SUB84(dVar18,0) <= fVar13) {
        if (in_FPSCR_SZ == '\0') {
          dVar18 = CONCAT44D(fVar13,uVar8);
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),F32LO(dVar18) + fVar19);
        }
        else {
          dVar18 = dVar18 + dVar22;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar17 = CONCAT44D(uVar25,*(undefined4 *)(unsigned)0x8c4ab30c);
          dVar29 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,(int)in_dr12);
          dVar23 = CONCAT44D(0x3f800000,in_fr7);
        }
        else {
          in_xd0 = *(undefined4 *)(unsigned)0x8c4ab30c;
          dVar29 = *pdVar2;
          dVar23 = in_xd14;
        }
        if (in_FPSCR_PR == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) / F32LO(dVar18),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 / dVar18;
        }
        if (in_FPSCR_SZ == '\0') {
          in_xd0 = CONCAT44D(SUB84(dVar17,0),SUB84(dVar18,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = CONCAT44D(F32HI(in_xd0) - fVar19,SUB84(in_xd0,0));
        }
        else {
          dVar18 = in_xd0 - dVar22;
        }
        fVar13 = F32HI(dVar29);
        if (in_FPSCR_SZ == '\0') {
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),fVar13);
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar1 + 0xc),in_fr9);
          uVar27 = CONCAT44(*(undefined4 *)(unsigned)((unsigned)0x8c4ab30c + 4),in_fr11);
        }
        else {
          dVar24 = *(double *)(unsigned)((int)pdVar1 + 0xc);
          uVar27 = *(undefined8 *)(unsigned)((unsigned)0x8c4ab30c + 4);
        }
        if (in_FPSCR_PR == '\0') {
          dVar14 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) + fVar19);
        }
        else {
          dVar14 = dVar17 + dVar22;
        }
        uVar25 = (undefined4)(D2U(dVar24) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),uVar25);
        }
        if (in_FPSCR_PR == '\0') {
          fVar15 = F32LO(dVar18) * F32HI(dVar18);
        }
        else {
          fVar15 = SUB84(dVar18 * dVar18,0);
        }
        if (in_FPSCR_SZ == '\0') {
          fVar26 = *(float *)(unsigned)pdVar4;
          uVar27 = CONCAT44((int)((ulonglong)uVar27 >> 0x20),fVar26);
          dVar24 = CONCAT44D(uVar25,*(undefined4 *)(unsigned)(pdVar1 + 2));
          dVar18 = CONCAT44D(fVar26,fVar15);
          in_dr4 = in_xd8;
        }
        else {
          dVar18 = *pdVar4;
          in_dr4 = pdVar1[2];
          fVar26 = (float)uVar27;
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = fVar13 * F32LO(dVar14);
        }
        else {
          fVar13 = (float)((ulonglong)(dVar29 * dVar14) >> 0x20);
        }
        uVar25 = (undefined4)(D2U(dVar23) >> 0x20);
        dVar17 = dVar23;
        dVar29 = in_dr4;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = CONCAT44D(uVar25,SUB84(dVar14,0));
          dVar29 = CONCAT44D(SUB84(dVar24,0),0x3f800000);
        }
        fVar15 = F32HI(dVar17);
        if (in_FPSCR_PR == '\0') {
          dVar23 = CONCAT44D(uVar25,fVar15 * F32LO(dVar18) + F32LO(dVar23));
        }
        fVar28 = F32HI(uVar27);
        if (in_FPSCR_SZ == '\0') {
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),fVar28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar16 = F32LO(dVar18) - fVar19;
          fVar21 = F32HI(dVar18) * fVar16;
          dVar18 = CONCAT44D(fVar21,fVar16);
          dVar29 = CONCAT44D(fVar15 * fVar21 + F32HI(dVar29),
                                    SUB84(dVar29,0));
          dVar24 = CONCAT44D(fVar15 * fVar13 + F32HI(dVar24),
                                    fVar15 * fVar26 * (fVar28 + fVar19) + F32LO(dVar24));
        }
        else {
          dVar18 = (dVar18 - dVar22) * (dVar18 - dVar22);
          fVar21 = F32HI(dVar18);
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr4 = CONCAT44D(SUB84(dVar24,0),uVar8);
        }
        *(unsigned *)(unsigned)(puVar12 + -0x44) = 0x8c4aa4c4;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = CONCAT44D(fVar21,*(undefined4 *)(unsigned)0x8c4aa4c4);
        }
        if (in_FPSCR_PR == '\0') {
          bVar30 = F32HI(dVar24) < SUB84(dVar18,0);
        }
        else {
          bVar30 = dVar24 < dVar18;
        }
        if (!bVar30) {
          if (in_FPSCR_SZ == '\0') {
            dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                      *(undefined4 *)(unsigned)(0x8c4aa4c4 + 1));
          }
          if (in_FPSCR_PR == '\0') {
            bVar30 = SUB84(dVar18,0) < SUB84(dVar23,0);
          }
          else {
            bVar30 = dVar18 < dVar23;
          }
          if (!bVar30) {
            if (in_FPSCR_SZ == '\0') {
              dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                        *(undefined4 *)(unsigned)(*(int *)(unsigned)(puVar12 + -0x44) + 4));
            }
            if (in_FPSCR_PR == '\0') {
              bVar30 = F32HI(in_dr4) < SUB84(dVar18,0);
            }
            else {
              bVar30 = in_dr4 < dVar18;
            }
            if (!bVar30) {
              if (in_FPSCR_SZ == '\0') {
                dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                          *(undefined4 *)(unsigned)((unsigned)0x8c4aa4c4 + 0xc));
              }
              if (in_FPSCR_PR == '\0') {
                bVar30 = SUB84(dVar18,0) < F32HI(dVar29);
              }
              else {
                bVar30 = dVar18 < dVar29;
              }
              if (!bVar30) goto LAB_8c23d4be;
            }
          }
        }
      }
    }
LAB_8c23d61a:
    uVar8 = 0xffffffff;
  }
  return uVar8;
}

__asm__(".globl _FUN_8c23d386\n.set _FUN_8c23d386, _FUN_8c23d386_def\n");
