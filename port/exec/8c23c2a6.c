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
int FUN_8c23c2a6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23c2a6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  double *unaff_r13 = 0;
  int iVar4;
  undefined8 *puVar5;
  double in_dr0 = 0;
  double dVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  double in_dr2 = 0;
  float fVar11;
  double dVar9;
  ulonglong uVar10;
  float fVar12;
  float fVar13;
  double in_dr4 = 0;
  double dVar14;
  double in_dr6 = 0;
  double dVar15;
  undefined8 in_dr14 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd14 = 0;
  bool bVar16;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  iVar1 = 0x8c4c1280;
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44D((int)in_dr14,(undefined4)(*(undefined8 *)(fr0_ - 0x14)));
    puVar5 = &(*(undefined8 *)(fr0_ - 0x14));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x14))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar5 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x1c));
    (*(undefined8 *)(fr0_ - 0x14)) = in_xd14;
  }
  *(undefined4 *)(unsigned)((int)puVar5 + -4) = in_PR;
  iVar2 = (int)0x80;
  iVar3 = *(int *)(unsigned)(iVar2 + 0x8c4c1280);
LAB_8c23c4a0:
  while( true ) {
    if (iVar3 == 0) {
      return iVar2;
    }
    iVar3 = iVar3 + -1;
    iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(iVar3 * 4 + iVar1) * 4 + 0x8c4c11e0);
    iVar2 = *(int *)(unsigned)(0x124 + iVar4);
    uVar8 = (undefined4)((ulonglong)in_dr2 >> 0x20);
    if ((((iVar2 != 0xc4) && (iVar2 != 0xe0)) && (iVar2 != 0xc5)) &&
       (iVar2 != 0xe5)) goto code_r0x8c23c2f0;
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = CONCAT44D(uVar8,*(undefined4 *)(unsigned)unaff_r13);
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(0x90 + iVar4),SUB84(in_dr6,0));
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)((int)unaff_r13 + 4),SUB84(in_dr0,0));
    }
    else {
      in_xd2 = *unaff_r13;
      dVar15 = *(double *)(unsigned)(0x90 + iVar4);
      dVar6 = *(double *)(unsigned)((int)unaff_r13 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr6 = CONCAT44D(F32HI(dVar15) - F32LO(in_dr2),SUB84(dVar15,0)
                               );
    }
    else {
      in_dr6 = dVar15 - in_dr2;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(0x94 + iVar4),SUB84(in_dr4,0));
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r13 + 1),SUB84(in_dr2,0));
    }
    else {
      dVar15 = *(double *)(unsigned)(0x94 + iVar4);
      dVar14 = unaff_r13[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = CONCAT44D(F32HI(dVar15) -
                                F32HI(dVar6),SUB84(dVar15,0));
    }
    else {
      dVar15 = dVar15 - dVar6;
    }
    fVar12 = F32HI(in_dr6);
    fVar13 = F32HI(dVar15);
    if (in_FPSCR_SZ == '\0') {
      dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),fVar13);
      dVar15 = in_xd2;
      dVar9 = CONCAT44D(fVar13,*(undefined4 *)(unsigned)(0x98 + iVar4));
      dVar6 = CONCAT44D(fVar12,SUB84(dVar6,0));
    }
    else {
      in_xd4 = *(double *)(unsigned)(0x98 + iVar4);
      dVar9 = dVar15;
      dVar6 = in_dr6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar11 = F32HI(dVar14);
      in_dr4 = (double)(ulonglong)(uint)(F32LO(dVar9) - fVar11);
      in_dr2 = CONCAT44D(fVar11,F32HI(dVar6) * fVar12 +
                                       F32LO(dVar14) * fVar13);
    }
    else {
      in_dr2 = dVar14 * dVar9;
      in_dr4 = dVar9 - in_dr2;
    }
    in_dr0 = in_xd4;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44D(SUB84(in_dr4,0),SUB84(dVar6,0));
    }
    if (in_FPSCR_PR == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),
                                F32HI(in_dr0) * F32LO(in_dr4) +
                                SUB84(in_dr2,0));
    }
    if (in_FPSCR_SZ == '\0') {
      uVar8 = SUB84(in_dr2,0);
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x6c));
      in_xd2 = dVar15;
      dVar15 = CONCAT44D(uVar8,0x3f800000);
    }
    else {
      in_xd2 = *(double *)(unsigned)(iVar4 + 0x6c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar16 = F32HI(dVar15) < SUB84(in_dr2,0);
    }
    else {
      bVar16 = dVar15 < in_dr2;
    }
    if (!bVar16) break;
    dVar6 = dVar15;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)((ulonglong)in_dr4 & 0xffffffff);
    }
    uVar8 = SUB84(dVar6,0);
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c258030(0x8c4c11e0,ar5,ar6,ar7));
    dVar6 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D(SUB84(dVar15,0),uVar8);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr4 = CONCAT44D(F32HI(dVar6) /
                                F32HI(in_dr0),SUB84(dVar6,0));
    }
    else {
      in_dr4 = dVar6 / in_dr0;
    }
    iVar2 = (int)0x90;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(iVar2 + iVar4),*(undefined4 *)(unsigned)unaff_r13);
    }
    else {
      in_xd2 = *unaff_r13;
      dVar6 = *(double *)(unsigned)(iVar2 + iVar4);
    }
    fVar13 = F32HI(in_dr4);
    if (in_FPSCR_PR == '\0') {
      dVar6 = CONCAT44D((F32HI(dVar6) - F32LO(dVar6)) * fVar13,
                               SUB84(dVar6,0));
    }
    else {
      dVar6 = (dVar6 - dVar6) * in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(iVar2 + 0x18 + iVar4) = (int)(D2U(dVar6) >> 0x20);
      dVar6 = (double)(ulonglong)*(uint *)(unsigned)((int)unaff_r13 + 4);
    }
    else {
      *(double *)(unsigned)(iVar2 + 0x18 + iVar4) = dVar6;
      in_xd2 = *(double *)(unsigned)((int)unaff_r13 + 4);
    }
    iVar2 = (int)0x94;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(iVar2 + iVar4),SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(unsigned)(iVar2 + iVar4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = CONCAT44D((F32HI(dVar6) - F32LO(dVar6)) * fVar13,
                               SUB84(dVar6,0));
    }
    else {
      dVar6 = (dVar6 - dVar6) * in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(iVar2 + 0x18 + iVar4) = (int)(D2U(dVar6) >> 0x20);
      dVar6 = (double)(ulonglong)*(uint *)(unsigned)(unaff_r13 + 1);
    }
    else {
      *(double *)(unsigned)(iVar2 + 0x18 + iVar4) = dVar6;
      in_xd2 = unaff_r13[1];
    }
    iVar2 = (int)0x98;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(iVar2 + iVar4),SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(unsigned)(iVar2 + iVar4);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr2 = CONCAT44D((F32HI(dVar6) - F32LO(dVar6)) * fVar13,
                                SUB84(dVar6,0));
    }
    else {
      in_dr2 = (dVar6 - dVar6) * in_dr4;
    }
    uVar8 = (undefined4)((ulonglong)in_dr2 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(iVar2 + 0x18 + iVar4) = uVar8;
      in_dr2 = CONCAT44D(uVar8,*(undefined4 *)(unsigned)(iVar4 + 0x68));
    }
    else {
      *(double *)(unsigned)(iVar2 + 0x18 + iVar4) = in_dr2;
      in_xd2 = *(double *)(unsigned)(iVar4 + 0x68);
    }
    fVar13 = F32HI(dVar15);
    if (in_FPSCR_PR == '\0') {
      bVar16 = SUB84(in_dr2,0) < fVar13;
    }
    else {
      bVar16 = in_dr2 < dVar15;
    }
    if (bVar16) {
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x68));
      }
      else {
        in_xd2 = *(double *)(unsigned)(iVar4 + 0x68);
      }
      iVar2 = 0x60;
      if (in_FPSCR_PR == '\0') {
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),F32LO(in_dr2) / fVar13);
      }
      else {
        in_dr2 = in_dr2 / dVar15;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(iVar4 + 0x60) = SUB84(in_dr2,0);
      }
      else {
        *(double *)(unsigned)(iVar4 + 0x60) = in_xd2;
      }
    }
    else {
      iVar2 = 0x60;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(iVar4 + 0x60) = SUB84(dVar15,0);
      }
      else {
        *(double *)(unsigned)(iVar4 + 0x60) = in_xd14;
      }
    }
  }
  goto LAB_8c23c49a;
code_r0x8c23c2f0:
  if (iVar2 == 0xc8) {
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = CONCAT44D(uVar8,*(undefined4 *)(unsigned)unaff_r13);
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(0x90 + iVar4),SUB84(in_dr6,0));
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)((int)unaff_r13 + 4),SUB84(in_dr0,0));
    }
    else {
      in_xd2 = *unaff_r13;
      dVar15 = *(double *)(unsigned)(0x90 + iVar4);
      dVar6 = *(double *)(unsigned)((int)unaff_r13 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr6 = CONCAT44D(F32HI(dVar15) - F32LO(in_dr2),SUB84(dVar15,0)
                               );
    }
    else {
      in_dr6 = dVar15 - in_dr2;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                *(undefined4 *)(unsigned)(0x94 + iVar4));
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r13 + 1),SUB84(in_dr2,0));
    }
    else {
      in_xd4 = *(double *)(unsigned)(0x94 + iVar4);
      dVar15 = unaff_r13[1];
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = F32LO(in_dr4) - F32HI(dVar6);
    }
    else {
      fVar13 = SUB84(in_dr4 - dVar6,0);
    }
    fVar12 = F32HI(in_dr6);
    if (in_FPSCR_SZ == '\0') {
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(0x98 + iVar4),fVar13);
      dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),fVar13);
      dVar6 = CONCAT44D(fVar12,SUB84(dVar6,0));
    }
    else {
      dVar14 = *(double *)(unsigned)(0x98 + iVar4);
      fVar13 = F32LO(dVar14);
      in_xd2 = in_xd4;
      dVar6 = in_dr6;
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = CONCAT44D(F32HI(dVar14) -
                                F32HI(dVar15),fVar13);
      dVar15 = (double)(ulonglong)
                       (uint)(F32HI(dVar6) * fVar12 + F32LO(dVar15) * fVar13)
      ;
    }
    else {
      dVar15 = dVar15 * dVar14;
      dVar14 = dVar14 - dVar15;
    }
    fVar13 = F32LO(dVar15);
    fVar12 = F32HI(dVar14);
    dVar15 = dVar14;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = CONCAT44D(fVar12,SUB84(dVar6,0));
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = F32HI(dVar15) * fVar12 + fVar13;
    }
    dVar9 = in_xd2;
    dVar6 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)(D2U(dVar14) & 0xffffffff);
      dVar6 = CONCAT44D(fVar13,0x3f800000);
    }
    uVar8 = SUB84(dVar9,0);
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c258030(0x8c4c11e0,ar5,ar6,ar7));
    dVar14 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar14 = CONCAT44D(SUB84(dVar6,0),uVar8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = CONCAT44D(F32HI(dVar14) /
                                F32HI(dVar15),SUB84(dVar14,0));
    }
    else {
      dVar14 = dVar14 / dVar15;
    }
    iVar2 = (int)0x90;
    if (in_FPSCR_SZ == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(iVar2 + iVar4),*(undefined4 *)(unsigned)unaff_r13);
    }
    else {
      in_xd2 = *unaff_r13;
      dVar9 = *(double *)(unsigned)(iVar2 + iVar4);
    }
    fVar13 = F32HI(dVar14);
    if (in_FPSCR_PR == '\0') {
      dVar9 = CONCAT44D((F32HI(dVar9) - F32LO(dVar9)) * fVar13,
                               SUB84(dVar9,0));
    }
    else {
      dVar9 = (dVar9 - dVar9) * dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(iVar2 + 0x18 + iVar4) = (int)(D2U(dVar9) >> 0x20);
      dVar9 = (double)(ulonglong)*(uint *)(unsigned)((int)unaff_r13 + 4);
    }
    else {
      *(double *)(unsigned)(iVar2 + 0x18 + iVar4) = dVar9;
      in_xd2 = *(double *)(unsigned)((int)unaff_r13 + 4);
    }
    iVar2 = (int)0x94;
    if (in_FPSCR_SZ == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(iVar2 + iVar4),SUB84(dVar9,0));
    }
    else {
      dVar9 = *(double *)(unsigned)(iVar2 + iVar4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = CONCAT44D((F32HI(dVar9) - F32LO(dVar9)) * fVar13,
                               SUB84(dVar9,0));
    }
    else {
      dVar9 = (dVar9 - dVar9) * dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(iVar2 + 0x18 + iVar4) = (int)(D2U(dVar9) >> 0x20);
      dVar9 = (double)(ulonglong)*(uint *)(unsigned)(unaff_r13 + 1);
    }
    else {
      *(double *)(unsigned)(iVar2 + 0x18 + iVar4) = dVar9;
      in_xd2 = unaff_r13[1];
    }
    iVar2 = (int)0x98;
    if (in_FPSCR_SZ == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(iVar2 + iVar4),SUB84(dVar9,0));
    }
    else {
      dVar9 = *(double *)(unsigned)(iVar2 + iVar4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = CONCAT44D((F32HI(dVar9) - F32LO(dVar9)) * fVar13,
                               SUB84(dVar9,0));
    }
    else {
      dVar9 = (dVar9 - dVar9) * dVar14;
    }
    uVar8 = (undefined4)(D2U(dVar9) >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(iVar2 + 0x18 + iVar4) = uVar8;
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(iVar2 + 8 + iVar4),SUB84(dVar15,0));
      dVar9 = CONCAT44D(uVar8,*(undefined4 *)(unsigned)(iVar2 + 0x14 + iVar4));
    }
    else {
      *(double *)(unsigned)(iVar2 + 0x18 + iVar4) = dVar9;
      dVar15 = *(double *)(unsigned)(iVar2 + 8 + iVar4);
      in_xd2 = *(double *)(unsigned)(iVar2 + 0x14 + iVar4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = F32LO(dVar9) * F32HI(dVar15);
    }
    else {
      fVar13 = SUB84(dVar9 * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44(*(undefined4 *)(unsigned)(iVar2 + 4 + iVar4),SUB84(dVar15,0));
      uVar10 = CONCAT44(*(undefined4 *)(unsigned)(iVar2 + 0x10 + iVar4),fVar13);
    }
    else {
      uVar7 = *(undefined8 *)(unsigned)(iVar2 + 4 + iVar4);
      uVar10 = *(ulonglong *)(unsigned)(iVar2 + 0x10 + iVar4);
    }
    if (in_FPSCR_PR == '\0') {
      uVar10 = (ulonglong)
               (uint)(F32HI(uVar7) * (float)(uVar10 >> 0x20) + (float)uVar10);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(iVar2 + 0xc + iVar4),(int)uVar7);
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(iVar2 + 0x18 + iVar4),(int)uVar10);
    }
    else {
      in_dr0 = *(double *)(unsigned)(iVar2 + 0xc + iVar4);
      dVar15 = *(double *)(unsigned)(iVar2 + 0x18 + iVar4);
    }
    fVar13 = F32HI(in_dr0);
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32HI(dVar15);
      dVar15 = CONCAT44D(fVar12,fVar13 * fVar12 + F32LO(dVar15));
    }
    in_dr4 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      in_dr4 = CONCAT44D(SUB84(dVar15,0),SUB84(dVar14,0));
    }
    fVar12 = F32HI(in_dr4);
    if (in_FPSCR_PR == '\0') {
      in_dr2 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) * fVar12);
    }
    else {
      in_dr2 = dVar15 * in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(iVar4 + 100) = SUB84(in_dr2,0);
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x6c));
    }
    else {
      *(double *)(unsigned)(iVar4 + 100) = in_xd2;
      in_xd2 = *(double *)(unsigned)(iVar4 + 0x6c);
    }
    fVar11 = F32HI(dVar6);
    if (in_FPSCR_PR == '\0') {
      bVar16 = fVar11 < SUB84(in_dr2,0);
    }
    else {
      bVar16 = dVar6 < in_dr2;
    }
    if (bVar16) {
      in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
      if (in_FPSCR_PR == '\0') {
        bVar16 = fVar12 < 0.0;
      }
      else {
        bVar16 = in_dr4 < in_dr2;
      }
      if (bVar16) {
        if (in_FPSCR_SZ == '\0') {
          in_dr2 = (double)((ulonglong)*(uint *)(unsigned)(iVar4 + 0x74) << 0x20);
          in_dr0 = CONCAT44D(fVar13,*(undefined4 *)(unsigned)(iVar4 + 100));
        }
        else {
          in_dr2 = *(double *)(unsigned)(iVar4 + 0x74);
        }
        fVar13 = F32HI(in_dr2);
        if (in_FPSCR_PR == '\0') {
          bVar16 = fVar13 < SUB84(in_dr0,0);
        }
        else {
          bVar16 = in_dr2 < in_dr0;
        }
        if (bVar16) {
          if (in_FPSCR_SZ == '\0') {
            in_dr2 = CONCAT44D(fVar13,*(undefined4 *)(unsigned)(iVar4 + 0x68));
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar4 + 0x68);
          }
          if (in_FPSCR_PR == '\0') {
            bVar16 = SUB84(in_dr2,0) < fVar11;
          }
          else {
            bVar16 = in_dr2 < dVar6;
          }
          if (bVar16) {
            if (in_FPSCR_SZ == '\0') {
              in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),
                                        *(undefined4 *)(unsigned)(iVar4 + 0x68));
            }
            else {
              in_xd2 = *(double *)(unsigned)(iVar4 + 0x68);
            }
            if (in_FPSCR_PR == '\0') {
              in_dr2 = (double)(ulonglong)(uint)(F32LO(in_dr2) / fVar11);
            }
            else {
              in_dr2 = in_dr2 / dVar6;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(unsigned)(iVar4 + 0x60) = SUB84(in_dr2,0);
            }
            else {
              *(double *)(unsigned)(iVar4 + 0x60) = in_xd2;
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(iVar4 + 0x60) = SUB84(dVar6,0);
          }
          else {
            *(double *)(unsigned)(iVar4 + 0x60) = in_xd14;
          }
          uVar8 = SUB84(in_dr2,0);
          if (in_FPSCR_SZ == '\0') {
            uVar8 = *(undefined4 *)(unsigned)(iVar4 + 0x70);
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar4 + 0x70);
          }
          iVar2 = 100;
          if (in_FPSCR_SZ == '\0') {
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)(iVar4 + 100),uVar8);
          }
          else {
            in_dr2 = *(double *)(unsigned)(iVar4 + 100);
          }
          if (in_FPSCR_PR == '\0' && F32HI(in_dr2) < SUB84(in_dr2,0)) {
            if (in_FPSCR_SZ == '\0') {
              dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(iVar4 + 100),*(undefined4 *)(unsigned)(iVar4 + 0x74));
            }
            else {
              in_xd2 = *(double *)(unsigned)(iVar4 + 0x74);
              dVar15 = *(double *)(unsigned)(iVar4 + 100);
            }
            iVar2 = 0x60;
            if (in_FPSCR_PR == '\0') {
              dVar15 = CONCAT44D(F32HI(dVar15) - F32LO(dVar15),
                                        SUB84(dVar15,0));
            }
            else {
              dVar15 = dVar15 - dVar15;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                        *(undefined4 *)(unsigned)(iVar4 + 0x80));
            }
            else {
              in_xd2 = *(double *)(unsigned)(iVar4 + 0x80);
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = F32LO(dVar15) * F32HI(dVar15);
            }
            else {
              fVar13 = SUB84(dVar15 * dVar15,0);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(iVar4 + 0x60),fVar13);
            }
            else {
              dVar15 = *(double *)(unsigned)(iVar4 + 0x60);
            }
            if (in_FPSCR_PR == '\0') {
              in_dr2 = CONCAT44D(F32HI(dVar15) * F32LO(dVar15),
                                        SUB84(dVar15,0));
            }
            else {
              in_dr2 = dVar15 * dVar15;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(unsigned)(iVar4 + 0x60) = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              *(double *)(unsigned)(iVar4 + 0x60) = in_dr2;
            }
          }
          goto LAB_8c23c4a0;
        }
      }
    }
LAB_8c23c49a:
    iVar2 = 0x60;
    in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(iVar4 + 0x60) = 0;
    }
    else {
      *(double *)(unsigned)(iVar4 + 0x60) = in_dr4;
    }
  }
  goto LAB_8c23c4a0;
}

__asm__(".globl _FUN_8c23c2a6\n.set _FUN_8c23c2a6, _FUN_8c23c2a6_def\n");
