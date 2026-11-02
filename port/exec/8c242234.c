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
undefined4 FUN_8c242234_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c242234";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  int iVar3;
  double *unaff_r8 = 0;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  double in_dr0 = 0;
  float fVar12;
  double dVar13;
  float fVar15;
  uint uVar16;
  undefined8 uVar14;
  double in_dr4 = 0;
  undefined4 uVar18;
  double dVar17;
  undefined4 uVar19;
  float in_fr13 = 0;
  undefined4 in_fr12 = 0;
  double in_dr14 = 0;
  float fVar20;
  double in_xd2 = 0;
  double in_xd12 = 0;
  undefined8 in_xd14 = 0;
  bool bVar21;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x20)) = CONCAT44(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0x20)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x20))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar11 = ((undefined1 *)(fr0_ - 0x24));
  }
  else {
    puVar11 = ((undefined1 *)(fr0_ - 0x30));
    (*(undefined8 *)(fr0_ - 0x20)) = in_xd14;
  }
  *(undefined4 *)(unsigned)(puVar11 + -4) = in_PR;
  *(undefined4 *)(unsigned)(puVar11 + -0x10) = ar4;
  ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar11 + -0x14)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  puVar8 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(puVar11 + -0x10) + 4));
  *(uint *)(unsigned)(puVar11 + -8) = (uint)*(ushort *)(unsigned)(*(int *)(unsigned)(puVar11 + -0x10) + 2);
  *(undefined4 *)(unsigned)(puVar11 + -0xc) = 0;
  *(undefined4 *)(unsigned)(puVar11 + -0x10) = 0;
  do {
    uVar19 = SUB84(in_dr14,0);
    uVar1 = *puVar8;
    puVar9 = puVar8 + 1;
    *(uint *)(unsigned)(puVar11 + -0x14) = (uint)uVar1;
    if (in_FPSCR_SZ == '\0') {
      uVar19 = 0x3f800000;
    }
    if ((uVar1 & 0x8000) != 0) {
      if (in_FPSCR_PR == '\0') {
        uVar18 = 0xbf800000;
      }
      else {
        uVar18 = (undefined4)((ulonglong)-CONCAT44D(0x3f800000,SUB84(in_dr4,0)) >> 0x20);
      }
      *(uint *)(unsigned)(puVar11 + -0x14) = *(uint *)(unsigned)(puVar11 + -0x14) & 0x7fff;
      if (in_FPSCR_SZ == '\0') {
        uVar19 = uVar18;
      }
    }
    *(int *)(unsigned)(puVar11 + -0x10) = *(int *)(unsigned)(puVar11 + -0x10) + *(int *)(unsigned)(puVar11 + -0x14);
    *(int *)(unsigned)(puVar11 + -0x14) = *(int *)(unsigned)(puVar11 + -0x14) + -2;
    puVar10 = puVar8 + 2;
    puVar8 = puVar8 + 3;
    pdVar5 = (double *)(unsigned)((uint)*puVar10 * 0x40 + iVar2);
    pdVar4 = (double *)(unsigned)((uint)*puVar9 * 0x40 + iVar2);
    pdVar6 = unaff_r8;
    if (in_FPSCR_SZ == '\0') {
      in_fr13 = *(float *)(unsigned)((int)pdVar5 + 4);
      in_dr14 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar5 + 1),uVar19);
      in_dr4 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 4),*(undefined4 *)(unsigned)(pdVar4 + 1));
    }
    else {
      in_xd12 = *(double *)(unsigned)((int)pdVar5 + 4);
      in_dr4 = *(double *)(unsigned)((int)pdVar4 + 4);
      in_dr14 = pdVar5[1];
    }
    do {
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
      pdVar7 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar2);
      if (in_FPSCR_SZ == '\0') {
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 1),in_fr13);
      }
      else {
        dVar13 = pdVar7[1];
        in_xd2 = in_xd12;
      }
      if (in_FPSCR_PR == '\0') {
        dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),
                                  F32LO(dVar13) - F32HI(in_dr4));
      }
      else {
        dVar13 = dVar13 - in_dr4;
      }
      fVar20 = F32HI(in_dr14);
      if (in_FPSCR_PR == '\0') {
        dVar13 = CONCAT44D(F32HI(dVar13) - fVar20,SUB84(dVar13,0));
      }
      else {
        dVar13 = dVar13 - in_dr14;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)((int)pdVar7 + 4))
        ;
      }
      if (in_FPSCR_PR == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - in_fr13);
        fVar12 = F32LO(dVar13) * F32HI(dVar13);
      }
      else {
        in_dr0 = in_dr0 - CONCAT44D(in_fr12,in_fr13);
        fVar12 = SUB84(dVar13 * dVar13,0);
      }
      dVar13 = in_dr14;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = CONCAT44D(fVar20,fVar12);
      }
      fVar12 = F32LO(in_dr0);
      if (in_FPSCR_PR == '\0') {
        fVar15 = (F32HI(dVar13) - F32LO(in_dr4)) * fVar12;
        dVar13 = CONCAT44D(fVar15,F32LO(dVar13) - fVar15);
      }
      else {
        dVar13 = (dVar13 - in_dr4) * in_dr0;
        dVar13 = dVar13 - dVar13;
      }
      dVar17 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = CONCAT44D(SUB84(dVar13,0),SUB84(in_dr4,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = CONCAT44D(F32HI(dVar17) * F32LO(in_dr14),
                                  SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 * in_dr14;
      }
      uVar16 = (uint)(D2U(dVar13) >> 0x20);
      fVar15 = F32HI(dVar17);
      if (pdVar6 < unaff_r8) {
        if (in_FPSCR_PR == '\0') {
          bVar21 = fVar15 < 0.0;
        }
        else {
          bVar21 = dVar17 < (double)((ulonglong)uVar16 << 0x20);
        }
        if (bVar21) {
          *(undefined4 *)(unsigned)pdVar5 = 0xe0000000;
          CacheBlockWriteBack(pdVar5);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(pdVar5 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar5 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar5 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar14 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar19);
            *(undefined4 *)(unsigned)((int)pdVar5 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar5[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar5 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            in_xd2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            pdVar5[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar5 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          uVar19 = (undefined4)uVar14;
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar5 + 0x2c));
LAB_8c242424:
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(in_dr0,0));
            dVar13 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 4),uVar19);
            pdVar4 = pdVar5 + 1;
          }
          else {
            in_dr0 = *pdVar5;
            dVar13 = pdVar5[1];
            pdVar4 = pdVar5 + 2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar19 = *(undefined4 *)(unsigned)(pdVar4 + 2);
            dVar17 = CONCAT44D(uVar19,SUB84(dVar17,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar4 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar19;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar13) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar17 = pdVar4[2];
            unaff_r8[3] = pdVar4[3];
            unaff_r8[2] = dVar17;
            unaff_r8[1] = dVar13;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          *(undefined4 *)(unsigned)pdVar5 = 0xf0000000;
          CacheBlockWriteBack(pdVar5);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(pdVar5 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar5 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar5 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar14 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar19);
            *(undefined4 *)(unsigned)((int)pdVar5 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar5[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar5 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            in_xd2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            pdVar5[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar5 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar5 + 0x2c));
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar12);
            dVar13 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 4),(int)uVar14);
            pdVar4 = pdVar5 + 1;
          }
          else {
            in_dr0 = *pdVar5;
            dVar13 = pdVar5[1];
            pdVar4 = pdVar5 + 2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar19 = *(undefined4 *)(unsigned)(pdVar4 + 2);
            dVar17 = CONCAT44D(uVar19,SUB84(dVar17,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar4 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar19;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar13) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar17 = pdVar4[2];
            unaff_r8[3] = pdVar4[3];
            unaff_r8[2] = dVar17;
            unaff_r8[1] = dVar13;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          *(int *)(unsigned)(puVar11 + -0xc) = (int)unaff_r8 + *(int *)(unsigned)(puVar11 + -0xc) + (0x20 - (int)pdVar6)
          ;
          pdVar6 = unaff_r8;
        }
      }
      else {
        if (in_FPSCR_PR == '\0') {
          bVar21 = fVar15 < 0.0;
        }
        else {
          bVar21 = dVar17 < (double)((ulonglong)uVar16 << 0x20);
        }
        if (bVar21) {
          *(undefined4 *)(unsigned)pdVar4 = 0xe0000000;
          CacheBlockWriteBack(pdVar4);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(pdVar4 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar4 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar14 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar19);
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar4[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar4 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            in_xd2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            pdVar4[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar4 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar4 + 0x2c));
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,fVar12);
            dVar13 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 4),(int)uVar14);
            pdVar4 = pdVar4 + 1;
          }
          else {
            in_dr0 = *pdVar4;
            dVar13 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar19 = *(undefined4 *)(unsigned)(pdVar4 + 2);
            dVar17 = CONCAT44D(uVar19,SUB84(dVar17,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar4 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar19;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar13) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar17 = pdVar4[2];
            unaff_r8[3] = pdVar4[3];
            unaff_r8[2] = dVar17;
            unaff_r8[1] = dVar13;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)pdVar5 = 0xe0000000;
          CacheBlockWriteBack(pdVar5);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(pdVar5 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar5 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar5 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar14 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar19);
            *(undefined4 *)(unsigned)((int)pdVar5 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar5[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar5 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            in_xd2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            pdVar5[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar5 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          uVar19 = (undefined4)uVar14;
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar5 + 0x2c));
          goto LAB_8c242424;
        }
      }
      in_dr4 = in_xd12;
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = CONCAT44D(in_fr13,SUB84(dVar17,0));
      }
      iVar3 = *(int *)(unsigned)(puVar11 + -0x14);
      if (in_FPSCR_SZ == '\0') {
        in_fr13 = *(float *)(unsigned)((int)pdVar7 + 4);
      }
      else {
        in_xd12 = *(double *)(unsigned)((int)pdVar7 + 4);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar20);
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 1),SUB84(in_dr14,0));
      }
      else {
        dVar13 = pdVar7[1];
      }
      in_dr14 = CONCAT44D((int)(D2U(dVar13) >> 0x20),-SUB84(dVar13,0));
      *(int *)(unsigned)(puVar11 + -0x14) = iVar3 + -1;
      pdVar4 = pdVar5;
      pdVar5 = pdVar7;
    } while (iVar3 + -1 != 0);
    if (pdVar6 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar7 = 0xf0000000;
      CacheBlockWriteBack(pdVar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(pdVar7 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        *(undefined4 *)(unsigned)((int)pdVar7 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        *(undefined4 *)(unsigned)(pdVar7 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        uVar14 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar19);
        *(undefined4 *)(unsigned)((int)pdVar7 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
      }
      else {
        pdVar7[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
        *(ulonglong *)(unsigned)((int)pdVar7 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
        in_xd2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
        pdVar7[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
        uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
        *(undefined8 *)(unsigned)((int)pdVar7 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
      }
      CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar7 + 0x2c));
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(in_dr0,0));
        dVar13 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),(int)uVar14);
        pdVar7 = pdVar7 + 1;
      }
      else {
        in_dr0 = *pdVar7;
        dVar13 = pdVar7[1];
        pdVar7 = pdVar7 + 2;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar19 = *(undefined4 *)(unsigned)(pdVar7 + 2);
        in_dr4 = CONCAT44D(uVar19,SUB84(in_dr4,0));
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar19;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar13) >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar7[2];
        unaff_r8[3] = pdVar7[3];
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = dVar13;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
      *(int *)(unsigned)(puVar11 + -0xc) = (int)unaff_r8 + *(int *)(unsigned)(puVar11 + -0xc) + (0x20 - (int)pdVar6);
    }
    iVar3 = *(int *)(unsigned)(puVar11 + -8);
    *(int *)(unsigned)(puVar11 + -8) = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + (*(uint *)(unsigned)(puVar11 + -0xc) >> 5);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + *(int *)(unsigned)(puVar11 + -0x10);
      return 8;
    }
  } while( true );
}

__asm__(".globl _FUN_8c242234\n.set _FUN_8c242234, _FUN_8c242234_def\n");
