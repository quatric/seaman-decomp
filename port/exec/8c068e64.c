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
undefined4 FUN_8c068e64_def(int *ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c068e64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12372; for (int i_ = 0; i_ < 12372; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *ar4_00;
  int *a5;
  undefined1 *ar5_00;
  double *pdVar4;
  code *ar6_00;
  int *piVar5;
  float fVar6;
  double in_dr0 = 0;
  double dVar7;
  float fVar10;
  double dVar8;
  ulonglong uVar9;
  undefined4 in_fr3 = 0;
  double in_dr14 = 0;
  double in_xd0 = 0;
  undefined8 in_xd14 = 0;
  bool bVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  piVar5 = ar6;
  (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  ((uint *)(fr0_ - 0x44))[0] = (*(undefined4 *)(unsigned)(unsigned)0x8c137100);
  ((uint *)(fr0_ - 0x44))[1] = (*(undefined1 *)(unsigned)0x8c137104);
  ((uint *)(fr0_ - 0x44))[2] = (*(undefined1 *)(unsigned)0x8c137108);
  ((uint *)(fr0_ - 0x44))[3] = (*(undefined1 *)(unsigned)0x8c13710c);
  ((uint *)(fr0_ - 0x34))[0] = (*(undefined1 *)(unsigned)0x8c137110);
  ((uint *)(fr0_ - 0x34))[1] = (*(undefined1 *)(unsigned)0x8c137114);
  ((uint *)(fr0_ - 0x34))[2] = (*(undefined1 *)(unsigned)0x8c137118);
  ((uint *)(fr0_ - 0x34))[3] = (*(undefined1 *)(unsigned)0x8c13711c);
  iVar3 = ar4[0x8c];
  if ((5 < iVar3) || (iVar3 < 0)) goto switchD_8c068ec8_default;
                    
  switch(iVar3) {
  case 0:
    (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c068890(((undefined1 *)(fr0_ - 0x810)),ar5,piVar5,ar7));
    uVar2 = SUB84(in_dr0,0);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c06afb0(ar4,((undefined1 *)(fr0_ - 0x810)),piVar5,ar7));
    if (cVar13 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),ar4[0x90]);
      dVar8 = CONCAT44D(0x44610000,uVar2);
    }
    else {
      in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x90);
      dVar8 = -9.834358688611842e-251;
    }
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D((float)(uVar1 & 0xffff),SUB84(dVar8,0));
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 (F32LO(in_dr14) / F32HI(dVar8)) *
                                 (float)(uVar1 & 0xffff));
    }
    else {
      dVar7 = (double)(uVar1 & 0xffff);
      in_dr14 = (in_dr14 / dVar8) * dVar7;
    }
    uVar2 = SUB84(dVar7,0);
    (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c068818(((undefined1 *)(fr0_ - 0x810)),0xffffffff,piVar5,ar7));
    if (cVar13 == '\0') {
      in_dr0 = CONCAT44D(ar4[0x90],uVar2);
    }
    else {
      in_dr0 = *(double *)(unsigned)(ar4 + 0x90);
    }
    if (cVar12 == '\0') {
      bVar11 = F32HI(in_dr0) < SUB84(in_dr14,0);
    }
    else {
      bVar11 = in_dr0 < in_dr14;
    }
    if (bVar11) {
      if (cVar13 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),ar4[0x90]);
      }
      else {
        in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x90);
      }
      ar4[0x8c] = ar4[0x8c] + 1;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 12372)), libgcc_divide_helper_01031c(ar4[0x84],4,piVar5,ar7));
      ar4[0x85] = ar4[0x85] & ~((uint *)(fr0_ - 0x44))[iVar3];
      piVar5 = ar4;
    }
    if (cVar13 == '\0') {
      ar4[0x8d] = SUB84(in_dr14,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x8d) = in_xd14;
    }
  case 1:
    uVar2 = SUB84(in_dr0,0);
    (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c068890(((undefined1 *)(fr0_ - 0xfdc)),ar5,piVar5,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c06afb0(ar4,((undefined1 *)(fr0_ - 0xfdc)),piVar5,ar7));
    if (cVar13 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),ar4[0x90]);
      dVar8 = CONCAT44D(0x44e10000,uVar2);
    }
    else {
      in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x90);
      dVar8 = 1.20586454969464e-311;
    }
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D((float)(uVar1 & 0xffff),SUB84(dVar8,0));
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 (F32LO(in_dr14) / F32HI(dVar8)) *
                                 (float)(uVar1 & 0xffff));
    }
    else {
      dVar7 = (double)(uVar1 & 0xffff);
      in_dr14 = (in_dr14 / dVar8) * dVar7;
    }
    uVar2 = SUB84(dVar7,0);
    (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c068818(((undefined1 *)(fr0_ - 0xfdc)),0xffffffff,piVar5,ar7));
    if (cVar13 == '\0') {
      in_dr0 = CONCAT44D(ar4[0x90],uVar2);
    }
    else {
      in_dr0 = *(double *)(unsigned)(ar4 + 0x90);
    }
    if (cVar12 == '\0') {
      bVar11 = F32HI(in_dr0) < SUB84(in_dr14,0);
    }
    else {
      bVar11 = in_dr0 < in_dr14;
    }
    if (bVar11) {
      if (cVar13 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),ar4[0x90]);
      }
      else {
        in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x90);
      }
      ar4[0x8c] = ar4[0x8c] + 1;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 12372)), libgcc_divide_helper_01031c(ar4[0x84],4,piVar5,ar7));
      ar4[0x85] = ar4[0x85] & ~((uint *)(fr0_ - 0x34))[iVar3];
    }
    if (cVar13 == '\0') {
      ar4[0x8e] = SUB84(in_dr14,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x8e) = in_xd14;
    }
  case 2:
    uVar2 = SUB84(in_dr0,0);
    (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c068890(((undefined1 *)(fr0_ - 0x17a8)),ar5,piVar5,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c06afb0(ar4,((undefined1 *)(fr0_ - 0x17a8)),piVar5,ar7));
    if (cVar13 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),ar4[0x90]);
      dVar8 = CONCAT44D(0x45610000,uVar2);
    }
    else {
      in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x90);
      dVar8 = 9.4222363968352e-311;
    }
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D((float)(uVar1 & 0xffff),SUB84(dVar8,0));
      dVar8 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                               (F32LO(in_dr14) / F32HI(dVar8)) *
                               (float)(uVar1 & 0xffff));
    }
    else {
      dVar7 = (double)(uVar1 & 0xffff);
      dVar8 = (in_dr14 / dVar8) * dVar7;
    }
    uVar2 = SUB84(dVar7,0);
    (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c068818(((undefined1 *)(fr0_ - 0x17a8)),0xffffffff,piVar5,ar7));
    if (cVar13 == '\0') {
      dVar7 = CONCAT44D(ar4[0x90],uVar2);
    }
    else {
      dVar7 = *(double *)(unsigned)(ar4 + 0x90);
    }
    if (cVar12 == '\0') {
      bVar11 = F32HI(dVar7) < SUB84(dVar8,0);
    }
    else {
      bVar11 = dVar7 < dVar8;
    }
    if (bVar11) {
      if (cVar13 == '\0') {
        dVar8 = (double)(ulonglong)(uint)ar4[0x90];
      }
      else {
        in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x90);
      }
      ar4[0x8c] = ar4[0x8c] + 1;
      (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c068890(((undefined1 *)(fr0_ - 0x1f74)),ar5,piVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c06af5c(ar4,((undefined1 *)(fr0_ - 0x1f74)),piVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c068818(((undefined1 *)(fr0_ - 0x1f74)),0xffffffff,piVar5,ar7));
    }
    if (cVar13 == '\0') {
      ar4[0x8f] = SUB84(dVar8,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x8f) = in_xd14;
    }
    break;
  case 3:
    (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c068890(((undefined1 *)(fr0_ - 0x2740)),ar5,piVar5,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c06afb0(ar4,((undefined1 *)(fr0_ - 0x2740)),piVar5,ar7));
    bVar11 = 0x707f < (ushort)uVar2;
    (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c068818(((undefined1 *)(fr0_ - 0x2740)),0xffffffff,piVar5,ar7));
    a5 = (int *)(unsigned)0x0;
    if ((bVar11) && (a5 = (int *)(unsigned)0x2, (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c2809a8) < 2)) {
      *(unsigned *)0x8c2809a8 = (unsigned)(unsigned long)((double *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c2809a8) + 1));
      ar4[0x8c] = ar4[0x8c] + 1;
      a5 = ar4;
    }
    ar4_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 12372)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x188))))(ar6,a5,piVar5,ar7));
    dVar8 = in_dr0;
    if (cVar13 == '\0') {
      (*(ulonglong *)(fr0_ - 0x3050)) = (ulonglong)CONCAT14(bVar11,(int)((ulonglong)in_dr0 >> 0x20));
      in_dr0 = (double)((*(ulonglong *)(fr0_ - 0x3050)) & 0xffffffff);
      dVar8 = in_xd0;
    }
    in_xd0 = dVar8;
    fVar6 = F32LO(in_dr0);
    if ((cVar12 == '\0' && 0.0 < fVar6) ||
       (ar4_00 = ar4, a5 = ar6, iVar3 = (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c06d714(ar4,ar6,piVar5,ar7)), iVar3 != 0)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 12372)), rand(ar4_00,a5,piVar5,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 12372)), libgcc_divide_helper_01031c(uVar2,5,piVar5,ar7));
      if (cVar13 == '\0') {
        dVar8 = CONCAT44D(ar4[0x91],in_fr3);
      }
      else {
        dVar8 = *(double *)(unsigned)(ar4 + 0x91);
      }
      if (cVar13 == '\0') {
        dVar7 = CONCAT44D(0x41200000,(float)(iVar3 + 8));
      }
      else {
        dVar7 = 2.2974389978324538e-39;
      }
      if (cVar12 == '\0') {
        fVar6 = F32LO(dVar7) / F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar13 == '\0') {
        dVar7 = CONCAT44D(0x37e90453,fVar6);
      }
      else {
        dVar7 = 1.18029310218391e-311;
      }
      if (cVar12 == '\0') {
        fVar10 = F32HI(dVar7);
        fVar6 = F32LO(dVar7) * fVar10;
        dVar7 = CONCAT44D(fVar10,fVar6);
        dVar8 = CONCAT44D(F32HI(dVar8) - fVar6,SUB84(dVar8,0));
      }
      else {
        dVar7 = dVar7 * dVar7;
        dVar8 = dVar8 - dVar7;
      }
      if (cVar13 == '\0') {
        ar4[0x91] = (int)(D2U(dVar8) >> 0x20);
        dVar7 = (double)(ulonglong)(uint)ar4[0x91];
      }
      else {
        *(double *)(unsigned)(ar4 + 0x91) = dVar8;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x91);
      }
      if (cVar12 == '\0' && SUB84(dVar7,0) < 0.0) {
        if (cVar13 == '\0') {
          ar4[0x91] = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x91) = D2U(dVar7) & 0xffffffff;
        }
      }
      if (cVar13 == '\0') {
        in_dr0 = CONCAT44D(0x42b40000,ar4[0x91]);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x91);
        in_dr0 = 1.18887054821592e-311;
      }
      if (cVar12 == '\0') {
        in_dr0 = (double)(ulonglong)(uint)(F32LO(in_dr0) * F32HI(in_dr0));
      }
      else {
        in_dr0 = in_dr0 * in_dr0;
      }
      if (cVar13 == '\0') {
        ar4[0x8b] = SUB84(in_dr0,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x8b) = in_xd0;
      }
    }
    else {
      pdVar4 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2809a8);
      if ((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c2809a8) < 2) {
        pdVar4 = (double *)(unsigned)(ar4 + 0x91);
        if (cVar13 == '\0') {
          fVar6 = *(float *)(unsigned)pdVar4;
        }
        else {
          in_xd0 = *pdVar4;
        }
        in_dr0 = (double)(ulonglong)(uint)fVar6;
        if (fVar6 == 0.0) {
          *(unsigned *)0x8c2809a8 = (unsigned)(unsigned long)((double *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c2809a8) + 1));
          ar4[0x8c] = ar4[0x8c] + 1;
          piVar5 = ar4;
          goto LAB_8c06940e;
        }
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 12372)), rand(pdVar4,((undefined1 *)(unsigned)0x8c2809a8),piVar5,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 12372)), libgcc_divide_helper_01031c(uVar2,5,piVar5,ar7));
      if (cVar13 == '\0') {
        dVar8 = CONCAT44D(ar4[0x91],in_fr3);
      }
      else {
        dVar8 = *(double *)(unsigned)(ar4 + 0x91);
      }
      if (cVar13 == '\0') {
        dVar7 = CONCAT44D(0x41200000,(float)(iVar3 + 8));
      }
      else {
        dVar7 = 2.2974389978324538e-39;
      }
      if (cVar12 == '\0') {
        fVar6 = F32LO(dVar7) / F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar13 == '\0') {
        dVar7 = CONCAT44D(0x37e90453,fVar6);
      }
      else {
        dVar7 = 1.12087722003689e-311;
      }
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(F32HI(dVar8) +
                                 F32LO(dVar7) * F32HI(dVar7),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 + dVar7 * dVar7;
      }
      if (cVar13 == '\0') {
        ar4[0x91] = (int)(D2U(dVar8) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x91) = dVar8;
      }
      iVar3 = (vsp = ((unsigned long)(fr0_ - 12372)), libgcc_divide_helper_01031c(ar4[0x84],4,piVar5,ar7));
      ar4[0x8a] = iVar3 * 3;
      if (cVar13 == '\0') {
        dVar8 = CONCAT44D(0x42b40000,ar4[0x91]);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x91);
        dVar8 = 1.14643063239662e-311;
      }
      if (cVar12 == '\0') {
        fVar6 = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar13 == '\0') {
        ar4[0x8b] = (int)fVar6;
        fVar6 = (float)ar4[0x91];
      }
      else {
        *(double *)(unsigned)(ar4 + 0x8b) = in_xd0;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x91);
      }
      in_dr0 = CONCAT44D(0x3f800000,fVar6);
      if (cVar12 != '\0' || 1.0 <= fVar6) {
        *(undefined4 *)(unsigned)(ar4[0x87] * 8 + -0x73d7f604) = 0;
        *(undefined4 *)(unsigned)(ar4[0x87] * 8 + -0x73d7f600) = 0;
        ar5_00 = (undefined1 *)(unsigned)0x4;
        if (ar4[0x84] < 4) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0) + -1;
        }
        else {
          ar5_00 = ((undefined1 *)(unsigned)0x8c28099c);
          (*(undefined4 *)(unsigned)(unsigned)0x8c28099c) = (*(undefined4 *)(unsigned)(unsigned)0x8c28099c) + -1;
        }
        (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c0f4d84(ar4,ar5_00,piVar5,ar7));
      }
    }
LAB_8c06940e:
    if (ar4[0x8c] != 3) {
      in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
      if (cVar13 == '\0') {
        ar4[0x8b] = 0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x8b) = in_dr0;
      }
switchD_8c068ec8_caseD_4:
      uVar1 = SUB84(in_dr0,0);
      iVar3 = (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c0d19dc(0xe,0x1b,piVar5,ar7));
      ar4[0xa4] = iVar3;
      *(undefined4 *)(unsigned)(ar4[0xa4] + 0x230) = 4;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 12372)), get_field_24_026024(ar6,0x230,piVar5,ar7));
      *(undefined4 *)(unsigned)(ar4[0xa4] + 0x218) = uVar2;
      *(undefined4 *)(unsigned)(ar4[0xa4] + 0x21c) = 0xffffffff;
      uVar9 = (ulonglong)uVar1;
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)(ar4[0xa4] + 0x22c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4[0xa4] + 0x22c) = uVar9;
      }
      iVar3 = ar4[0xa4];
      (vsp = ((unsigned long)(fr0_ - 12372)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x4c))))(ar6,iVar3,piVar5,ar7));
      fVar6 = (float)uVar9;
      (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c06abb8(ar4,iVar3,piVar5,ar7));
      ar6_00 = ((void *)0x8c023d8c);
      (vsp = ((unsigned long)(fr0_ - 12372)), vec3_copy_8c023d8c(ar4[0xa4] + 0x50,((undefined1 *)(fr0_ - 0x274c)),((void *)0x8c023d8c),ar7));
      (vsp = ((unsigned long)(fr0_ - 12372)), object_dtor_delete(((undefined1 *)(fr0_ - 0x274c)),0xffffffff,ar6_00,ar7));
      uVar2 = 4;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 12372)), libgcc_divide_helper_01031c(ar4[0x84],4,ar6_00,ar7));
      if (iVar3 == 0) {
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D(0x430d0000,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x15);
          dVar8 = 1.35014511006795e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = F32LO(dVar8) - F32HI(dVar8);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(unsigned)(ar4[0xa4] + 0x54) = fVar6;
        }
        else {
          *(double *)(unsigned)(ar4[0xa4] + 0x54) = in_xd0;
        }
        iVar3 = ar4[0xa4];
        pdVar4 = (double *)(unsigned)(iVar3 + 0x27c);
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D(0x430d0000,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x15);
          dVar8 = 1.35014511006795e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = F32LO(dVar8) - F32HI(dVar8);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(unsigned)pdVar4 = fVar6;
        }
        else {
          *pdVar4 = in_xd0;
        }
        (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c06aa04(ar4,iVar3,ar6_00,ar7));
        piVar5 = ar4 + 0x90;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x276c))); *(unsigned *)((((unsigned long)(fr0_ - 12372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12372)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x275c)),piVar5,ar6_00,ar7); });
        if (cVar13 != '\0') {
          fVar6 = 141.0;
        }
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x2778)),piVar5,ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2788))); *(unsigned *)((((unsigned long)(fr0_ - 12372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12372)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x276c)),((undefined1 *)(fr0_ - 0x2778)),ar6_00,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2798))); *(unsigned *)((((unsigned long)(fr0_ - 12372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12372)) - 8); Vec3_add(ar4 + 0xc,((undefined1 *)(fr0_ - 0x2788)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_assign(ar4[0xa4] + 0x30,((undefined1 *)(fr0_ - 0x2798)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2798)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2788)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2778)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x276c)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x275c)),0xffffffff,ar6_00,ar7));
      }
      else if (iVar3 == 1) {
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D(0x4286999a,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x15);
          dVar8 = 1.35014075831897e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = F32LO(dVar8) + F32HI(dVar8);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(unsigned)(ar4[0xa4] + 0x54) = fVar6;
        }
        else {
          *(double *)(unsigned)(ar4[0xa4] + 0x54) = in_xd0;
        }
        pdVar4 = (double *)(unsigned)(ar4[0xa4] + 0x27c);
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D(0x4286999a,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x15);
          dVar8 = 1.35014075831897e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = F32LO(dVar8) + F32HI(dVar8);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(unsigned)pdVar4 = fVar6;
        }
        else {
          *pdVar4 = in_xd0;
        }
        (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c06aa04(ar4,pdVar4,ar6_00,ar7));
        piVar5 = ar4 + 0x90;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x27b8))); *(unsigned *)((((unsigned long)(fr0_ - 12372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12372)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x27a8)),piVar5,ar6_00,ar7); });
        if (cVar13 != '\0') {
          fVar6 = 67.3;
        }
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x27c4)),piVar5,ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x27d4))); *(unsigned *)((((unsigned long)(fr0_ - 12372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12372)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x27b8)),((undefined1 *)(fr0_ - 0x27c4)),ar6_00,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x27e4))); *(unsigned *)((((unsigned long)(fr0_ - 12372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12372)) - 8); Vec3_add(ar4 + 0xc,((undefined1 *)(fr0_ - 0x27d4)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_assign(ar4[0xa4] + 0x30,((undefined1 *)(fr0_ - 0x27e4)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x27e4)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x27d4)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), object_dtor_delete(((undefined1 *)(fr0_ - 0x27c4)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x27b8)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x27a8)),0xffffffff,ar6_00,ar7));
      }
      else if (iVar3 == 2) {
        pdVar4 = (double *)(unsigned)(ar4[0xa4] + 0x54);
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D(0x41680000,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x15);
          dVar8 = 1.35013147847267e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = F32LO(dVar8) + F32HI(dVar8);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(unsigned)pdVar4 = fVar6;
        }
        else {
          *pdVar4 = in_xd0;
        }
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D(0x41680000,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x15);
          dVar8 = 1.35013147847267e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = F32LO(dVar8) + F32HI(dVar8);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(unsigned)(ar4[0xa4] + 0x27c) = fVar6;
        }
        else {
          *(double *)(unsigned)(ar4[0xa4] + 0x27c) = in_xd0;
        }
        (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c06aa04(ar4,pdVar4,ar6_00,ar7));
        piVar5 = ar4 + 0x90;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2804))); *(unsigned *)((((unsigned long)(fr0_ - 12372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12372)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x27f4)),piVar5,ar6_00,ar7); });
        if (cVar13 != '\0') {
          fVar6 = 14.5;
        }
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x2810)),piVar5,ar6_00,ar7));
        ar6_00 = ((void *)0x8c023484);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2820))); *(unsigned *)((((unsigned long)(fr0_ - 12372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12372)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x2804)),((undefined1 *)(fr0_ - 0x2810)),((void *)0x8c023484),ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2830))); *(unsigned *)((((unsigned long)(fr0_ - 12372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12372)) - 8); Vec3_add(ar4 + 0xc,((undefined1 *)(fr0_ - 0x2820)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_assign(ar4[0xa4] + 0x30,((undefined1 *)(fr0_ - 0x2830)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2830)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2820)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2810)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2804)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x27f4)),0xffffffff,ar6_00,ar7));
      }
      else if (iVar3 == 3) {
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D(0x4299999a,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x15);
          dVar8 = 1.3501413735216e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = F32LO(dVar8) - F32HI(dVar8);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(unsigned)(ar4[0xa4] + 0x54) = fVar6;
        }
        else {
          *(double *)(unsigned)(ar4[0xa4] + 0x54) = in_xd0;
        }
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D(0x4299999a,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x15);
          dVar8 = 1.3501413735216e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = F32LO(dVar8) - F32HI(dVar8);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(unsigned)(ar4[0xa4] + 0x27c) = fVar6;
        }
        else {
          *(double *)(unsigned)(ar4[0xa4] + 0x27c) = in_xd0;
        }
        (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c06aa04(ar4,uVar2,ar6_00,ar7));
        piVar5 = ar4 + 0x90;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2850))); *(unsigned *)((((unsigned long)(fr0_ - 12372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12372)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x2840)),piVar5,ar6_00,ar7); });
        if (cVar13 != '\0') {
          fVar6 = 76.8;
        }
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x285c)),piVar5,ar6_00,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x286c))); *(unsigned *)((((unsigned long)(fr0_ - 12372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12372)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x2850)),((undefined1 *)(fr0_ - 0x285c)),ar6_00,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x287c))); *(unsigned *)((((unsigned long)(fr0_ - 12372)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 12372)) - 8); Vec3_add(ar4 + 0xc,((undefined1 *)(fr0_ - 0x286c)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_assign(ar4[0xa4] + 0x30,((undefined1 *)(fr0_ - 0x287c)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x287c)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x286c)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), object_dtor_delete(((undefined1 *)(fr0_ - 0x285c)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2850)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2840)),0xffffffff,ar6_00,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_assign(ar4[0xa4] + 0x268,ar4 + 0xc,ar6_00,ar7));
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)(ar4[0xa4] + 0x278) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4[0xa4] + 0x278) = (ulonglong)(uint)fVar6;
      }
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)(ar4[0xa4] + 0x280) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4[0xa4] + 0x280) = (ulonglong)(uint)fVar6;
      }
      if (cVar13 == '\0') {
        *(int *)(unsigned)(ar4[0xa4] + 0x5c) = ar4[0x90];
      }
      else {
        *(undefined8 *)(unsigned)(ar4[0xa4] + 0x5c) = *(undefined8 *)(unsigned)(ar4 + 0x90);
      }
      if (cVar13 == '\0') {
        *(int *)(unsigned)(ar4[0xa4] + 0x60) = ar4[0x90];
      }
      else {
        *(undefined8 *)(unsigned)(ar4[0xa4] + 0x60) = *(undefined8 *)(unsigned)(ar4 + 0x90);
      }
      if (cVar13 == '\0') {
        *(int *)(unsigned)(ar4[0xa4] + 100) = ar4[0x90];
      }
      else {
        *(undefined8 *)(unsigned)(ar4[0xa4] + 100) = *(undefined8 *)(unsigned)(ar4 + 0x90);
      }
      ar4[0xa4] = 0;
      (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c068890(((undefined1 *)(fr0_ - 0x3048)),ar5,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c06af5c(ar4,((undefined1 *)(fr0_ - 0x3048)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 12372)), FUN_8c068818(((undefined1 *)(fr0_ - 0x3048)),0xffffffff,ar6_00,ar7));
      piVar5 = (int *)(unsigned)(ar4[0x8c] + 1);
      ar4[0x8c] = (int)piVar5;
      goto switchD_8c068ec8_caseD_5;
    }
    break;
  case 4:
    goto switchD_8c068ec8_caseD_4;
  case 5:
switchD_8c068ec8_caseD_5:
    iVar3 = (vsp = ((unsigned long)(fr0_ - 12372)), libgcc_divide_helper_01031c(ar4[0x84],4,piVar5,ar7));
    ar4[0x8a] = iVar3 * 3 + 1;
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(0x3dcccccd,ar4[0x8b]);
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x8b);
      dVar8 = 21990236605644.8;
    }
    if (cVar12 == '\0') {
      fVar6 = F32LO(dVar8) + F32HI(dVar8);
    }
    else {
      fVar6 = SUB84(dVar8 + dVar8,0);
    }
    if (cVar13 == '\0') {
      ar4[0x8b] = (int)fVar6;
      uVar9 = CONCAT44(0x42b40000,ar4[0x8b]);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x8b) = in_xd0;
      uVar9 = 0x30a842b40000;
    }
    if (cVar12 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
      ar4[0x8c] = 3;
      if (cVar13 == '\0') {
        ar4[0x8b] = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x8b) = uVar9 & 0xffffffff;
      }
    }
  }
switchD_8c068ec8_default:
  uVar2 = (vsp = ((unsigned long)(fr0_ - 12372)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,piVar5,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c068e64\n.set _FUN_8c068e64, _FUN_8c068e64_def\n");
