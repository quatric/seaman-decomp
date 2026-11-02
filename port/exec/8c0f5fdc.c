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
undefined4 FUN_8c0f5fdc_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f5fdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 168; for (int i_ = 0; i_ < 168; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  float *ar5_00;
  undefined *puVar7;
  float *a6;
  undefined4 uVar8;
  float fVar9;
  float fVar12;
  double dVar10;
  ulonglong uVar11;
  double in_dr14 = 0;
  double dVar13;
  undefined8 in_xd0 = 0;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
  cVar14 = '\0';
  pfVar5 = ar5;
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  uVar8 = 0;
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x38)),pfVar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x48)),pfVar5,ar6,ar7));
  a6 = &(*(float *)(fr0_ - 0x48));
  pfVar5 = ar5;
  (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*ar5 + 0x124))))(ar5,&(*(float *)(fr0_ - 0x38)),a6,ar7));
  if (cVar15 == '\0') {
    fVar9 = *(float *)(unsigned)(ar4 + 0x30);
    fVar12 = (*(float *)(fr0_ - 0x38));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x30);
    fVar9 = (*(float *)(fr0_ - 0x38));
    fVar12 = (*(float *)(fr0_ - 0x34));
  }
  if (cVar14 == '\0' && fVar12 < fVar9) {
    pfVar5 = (float *)(unsigned)(ar4 + 0x30);
    if (cVar15 == '\0') {
      fVar9 = *pfVar5;
      fVar12 = (*(float *)(fr0_ - 0x48));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)pfVar5;
      fVar9 = (*(float *)(fr0_ - 0x48));
      fVar12 = (*(float *)(fr0_ - 0x44));
    }
    if (cVar14 != '\0' || fVar12 <= fVar9) {
      if (cVar15 != '\0') {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
        (*(float *)(fr0_ - 0x48)) = fVar9;
      }
      if (cVar14 == '\0') {
        (*(float *)(fr0_ - 0x48)) = (*(float *)(fr0_ - 0x48)) - 1.0;
      }
      else {
        (*(float *)(fr0_ - 0x48)) = SUB84(CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x48))) -
                          CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x48))),0);
      }
      if (cVar15 == '\0') {
        *(float *)(unsigned)(ar4 + 0x30) = (*(float *)(fr0_ - 0x48));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
      }
    }
  }
  else {
    if (cVar15 != '\0') {
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x34)),(*(float *)(fr0_ - 0x38)));
      (*(float *)(fr0_ - 0x38)) = fVar9;
    }
    if (cVar14 == '\0') {
      (*(float *)(fr0_ - 0x38)) = (*(float *)(fr0_ - 0x38)) + 1.0;
    }
    else {
      (*(float *)(fr0_ - 0x38)) = SUB84(CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x38))) +
                        CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x38))),0);
    }
    if (cVar15 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = (*(float *)(fr0_ - 0x38));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
    }
  }
  ar5_00 = (float *)(unsigned)(ar4 + 0x38);
  if (cVar15 == '\0') {
    fVar9 = *ar5_00;
    fVar12 = (*(float *)(fr0_ - 0x30));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)ar5_00;
    fVar9 = (*(float *)(fr0_ - 0x30));
    fVar12 = (*(float *)(fr0_ - 0x2c));
  }
  if (cVar14 == '\0' && fVar12 < fVar9) {
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D((*(uint *)(fr0_ - 0x40)),*(undefined4 *)(unsigned)(ar4 + 0x38));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x38);
      dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0x3c)),(*(uint *)(fr0_ - 0x40)));
    }
    if (cVar14 != '\0' || F32HI(dVar10) <= SUB84(dVar10,0)) {
      if (cVar15 == '\0') {
        dVar10 = (double)(ulonglong)(*(uint *)(fr0_ - 0x40));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x3c)),(*(uint *)(fr0_ - 0x40)));
      }
      dVar13 = CONCAT44D(0x3f800000,SUB84(dVar10,0));
      if (cVar14 == '\0') {
        dVar10 = CONCAT44D(0x3f800000,F32LO(dVar10) - 1.0);
      }
      else {
        dVar10 = dVar13 - dVar13;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x38) = SUB84(dVar10,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x38) = in_xd0;
      }
    }
  }
  else {
    pfVar5 = (float *)(unsigned)(ar4 + 0x38);
    if (cVar15 != '\0') {
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
      (*(float *)(fr0_ - 0x30)) = fVar9;
    }
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x30)) + 1.0);
    }
    else {
      dVar10 = CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x30))) + CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x30)));
    }
    if (cVar15 == '\0') {
      *pfVar5 = SUB84(dVar10,0);
    }
    else {
      *(undefined8 *)(unsigned)pfVar5 = in_xd0;
    }
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x1cc);
  if (iVar1 == 0) {
    if ((*(uint *)(unsigned)(ar4 + 0x74) & 0x40) == 0x40) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(pfVar5,ar5_00,a6,ar7));
      uVar3 = SUB84(in_dr14,0);
      fVar9 = F32LO(dVar10);
      uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), rand(pfVar5,ar5_00,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,0x14,a6,ar7));
      uVar4 = 0x14;
      (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar2,0x14,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c022d04(ar4 + 0x1bc,uVar4,a6,ar7));
      puVar7 = ((undefined1 *)(unsigned)0x8c1401d8);
      iVar1 = ar4 + 0x1bc;
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c023c98(iVar1,((undefined1 *)(unsigned)0x8c1401d8),a6,ar7));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(iVar1,puVar7,a6,ar7));
      uVar2 = 2;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,2,a6,ar7));
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = CONCAT44D(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x1bc));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1bc);
          dVar10 = 2.81690796727611e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = F32LO(dVar10) * F32HI(dVar10);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(unsigned)(ar4 + 0x1bc) = fVar9;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x1bc) = in_xd0;
        }
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(uVar4,uVar2,a6,ar7));
      uVar2 = 2;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,2,a6,ar7));
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = CONCAT44D(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x1c4));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1c4);
          dVar10 = 2.81690796727611e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = F32LO(dVar10) * F32HI(dVar10);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(unsigned)(ar4 + 0x1c4) = fVar9;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x1c4) = in_xd0;
        }
      }
      uVar11 = (ulonglong)(uint)fVar9;
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x1d0) = uVar11;
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(uVar4,uVar2,a6,ar7));
      uVar2 = (undefined4)uVar11;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,0x14,a6,ar7));
      if (cVar14 == '\0') {
        in_dr14 = CONCAT44D((float)iVar1,uVar3);
      }
      else {
        in_dr14 = (double)iVar1;
      }
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(0x41200000,uVar2);
      }
      else {
        dVar10 = 9.76657887968582e-312;
      }
      if (cVar14 == '\0') {
        in_dr14 = CONCAT44D(F32HI(in_dr14) /
                                   F32HI(dVar10),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 / dVar10;
      }
      dVar10 = CONCAT44D(0x3f800000,SUB84(dVar10,0));
      if (cVar14 == '\0') {
        in_dr14 = CONCAT44D(F32HI(in_dr14) + 1.0,SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 + dVar10;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x1d4) = (int)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x1d4) = in_dr14;
      }
      *(int *)(unsigned)(ar4 + 0x1cc) = *(int *)(unsigned)(ar4 + 0x1cc) + 1;
    }
    else {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(pfVar5,ar5_00,a6,ar7));
      uVar3 = SUB84(in_dr14,0);
      fVar9 = F32LO(dVar10);
      uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), rand(pfVar5,ar5_00,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,0x32,a6,ar7));
      uVar4 = 0x32;
      (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar2,0x32,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c022d04(ar4 + 0x1bc,uVar4,a6,ar7));
      puVar7 = ((undefined1 *)(unsigned)0x8c1401dc);
      iVar1 = ar4 + 0x1bc;
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c023c98(iVar1,((undefined1 *)(unsigned)0x8c1401dc),a6,ar7));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(iVar1,puVar7,a6,ar7));
      uVar2 = 2;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,2,a6,ar7));
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = CONCAT44D(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x1bc));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1bc);
          dVar10 = 9.60729449836498e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = F32LO(dVar10) * F32HI(dVar10);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(unsigned)(ar4 + 0x1bc) = fVar9;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x1bc) = in_xd0;
        }
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(uVar4,uVar2,a6,ar7));
      uVar2 = 2;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,2,a6,ar7));
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = CONCAT44D(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x1c4));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1c4);
          dVar10 = 9.60729449836498e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = F32LO(dVar10) * F32HI(dVar10);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(unsigned)(ar4 + 0x1c4) = fVar9;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x1c4) = in_xd0;
        }
      }
      uVar11 = (ulonglong)(uint)fVar9;
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x1d0) = uVar11;
      }
      (*(undefined4 *)(fr0_ - 0x94)) = (vsp = ((unsigned long)(fr0_ - 168)), rand(uVar4,uVar2,a6,ar7));
      uVar4 = (undefined4)uVar11;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c((*(undefined4 *)(fr0_ - 0x94)),0x14,a6,ar7));
      if (cVar14 == '\0') {
        in_dr14 = CONCAT44D((float)iVar1,uVar3);
      }
      else {
        in_dr14 = (double)iVar1;
      }
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(0x41200000,uVar4);
      }
      else {
        dVar10 = 9.76657887968582e-312;
      }
      if (cVar14 == '\0') {
        in_dr14 = CONCAT44D(F32HI(in_dr14) /
                                   F32HI(dVar10),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 / dVar10;
      }
      dVar10 = CONCAT44D(0x3f800000,SUB84(dVar10,0));
      if (cVar14 == '\0') {
        in_dr14 = CONCAT44D(F32HI(in_dr14) + 1.0,SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 + dVar10;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x1d4) = (int)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x1d4) = in_dr14;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 2;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      iVar1 = ar4 + 0x30;
      (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*ar5 + 0x128))))(ar5,iVar1,a6,ar7));
      uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
      uVar4 = (undefined4)(D2U(dVar10) >> 0x20);
      (*(undefined4 *)(fr0_ - 0xa4)) = uVar4;
      if (cVar15 != '\0') {
        (*(undefined4 *)(fr0_ - 0xa4)) = SUB84(dVar10,0);
        (*(undefined4 *)(fr0_ - 0xa0)) = uVar4;
      }
      iVar6 = ar4;
      (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x174))))(ar4,iVar1,a6,ar7));
      uVar4 = (undefined4)(D2U(dVar10) >> 0x20);
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(uVar4,(*(undefined4 *)(fr0_ - 0xa4)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0xa0)),uVar4);
      }
      if (cVar14 == '\0') {
        fVar9 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar15 == '\0') {
        uVar11 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x34),fVar9);
      }
      else {
        uVar11 = *(ulonglong *)(unsigned)(ar4 + 0x34);
      }
      if (cVar14 != '\0' || (float)(uVar11 >> 0x20) <= (float)uVar11) {
        iVar6 = ar4 + 0x1bc;
        (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c022d04(iVar6,iVar1,a6,ar7));
        if (cVar15 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x1d4) = uVar11 & 0xffffffff;
        }
        uVar8 = 1;
        uVar11 = uVar11 & 0xffffffff;
        if (cVar15 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x1d0) = uVar11;
        }
      }
      uVar3 = (undefined4)uVar11;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(iVar6,iVar1,a6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,100,a6,ar7));
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(0x461c4000,uVar3);
      }
      else {
        dVar10 = 3.23124508159998e-312;
      }
      if (cVar14 == '\0') {
        dVar13 = CONCAT44D(uVar2,(float)iVar1 / F32HI(dVar10));
      }
      else {
        dVar13 = CONCAT44D(uVar2,(float)iVar1) / dVar10;
      }
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x1d0),SUB84(dVar10,0));
      }
      else {
        dVar10 = *(double *)(unsigned)(ar4 + 0x1d0);
      }
      if (cVar14 == '\0') {
        dVar10 = CONCAT44D(F32HI(dVar10) + F32LO(dVar13),
                                  SUB84(dVar10,0));
      }
      else {
        dVar10 = dVar10 + dVar13;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x1d0) = (int)(D2U(dVar10) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x1d0) = dVar10;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); Vec3_scale(ar4 + 0x1bc,ar4 + 0x1d4,a6,ar7); });
      uVar4 = SUB84(dVar10,0);
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c023aa0(ar4 + 0x30,((undefined1 *)(fr0_ - 0x68)),a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,a6,ar7));
      if (cVar15 == '\0') {
        uVar4 = *(undefined4 *)(unsigned)(ar4 + 0x34);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x34);
      }
      a6 = (float *)(unsigned)0x1d0;
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x1d0),uVar4);
      }
      else {
        dVar10 = *(double *)(unsigned)(ar4 + 0x1d0);
      }
      if (cVar14 == '\0') {
        fVar9 = F32LO(dVar10) - F32HI(dVar10);
      }
      else {
        fVar9 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar15 == '\0') {
        *(float *)(unsigned)(ar4 + 0x34) = fVar9;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x34) = in_xd0;
      }
    }
    goto LAB_8c0f6620;
  }
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  iVar1 = ar4 + 0x30;
  (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*ar5 + 0x128))))(ar5,iVar1,a6,ar7));
  uVar4 = (undefined4)(D2U(dVar10) >> 0x20);
  (*(undefined4 *)(fr0_ - 0x98)) = uVar4;
  if (cVar15 != '\0') {
    (*(undefined4 *)(fr0_ - 0x98)) = SUB84(dVar10,0);
    (*(undefined4 *)(fr0_ - 0x94)) = uVar4;
  }
  iVar6 = ar4;
  (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x174))))(ar4,iVar1,a6,ar7));
  uVar4 = (undefined4)(D2U(dVar10) >> 0x20);
  if (cVar15 == '\0') {
    dVar10 = CONCAT44D(uVar4,(*(undefined4 *)(fr0_ - 0x98)));
  }
  else {
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x94)),uVar4);
  }
  if (cVar14 == '\0') {
    fVar9 = F32LO(dVar10) + F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 + dVar10,0);
  }
  if (cVar15 == '\0') {
    uVar11 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x34),fVar9);
  }
  else {
    uVar11 = *(ulonglong *)(unsigned)(ar4 + 0x34);
  }
  if (cVar14 != '\0' || (float)(uVar11 >> 0x20) <= (float)uVar11) {
    iVar6 = ar4 + 0x1bc;
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c022d04(iVar6,iVar1,a6,ar7));
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x1d4) = uVar11 & 0xffffffff;
    }
    uVar8 = 1;
    uVar11 = uVar11 & 0xffffffff;
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x1d0) = uVar11;
    }
  }
  uVar4 = (undefined4)uVar11;
  if ((*(uint *)(unsigned)(ar4 + 0x74) & 0x10) == 0x10) {
    *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 2;
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x1d4) = uVar11 & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x1d0) = uVar11 & 0xffffffff;
    }
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c023bf4(ar4 + 0x1bc,((undefined1 *)(unsigned)0x8c1401e0),a6,ar7));
  }
  else {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 168)), rand(iVar6,iVar1,a6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar3,100,a6,ar7));
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D(0x42c80000,uVar4);
    }
    else {
      dVar10 = 9.85159599864978e-312;
    }
    if (cVar14 == '\0') {
      dVar13 = CONCAT44D(uVar2,(float)iVar1 / F32HI(dVar10));
    }
    else {
      dVar13 = CONCAT44D(uVar2,(float)iVar1) / dVar10;
    }
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x1d0),SUB84(dVar10,0));
    }
    else {
      dVar10 = *(double *)(unsigned)(ar4 + 0x1d0);
    }
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D(F32HI(dVar10) + F32LO(dVar13),SUB84(dVar10,0)
                               );
    }
    else {
      dVar10 = dVar10 + dVar13;
    }
    if (cVar15 == '\0') {
      *(int *)(unsigned)(ar4 + 0x1d0) = (int)(D2U(dVar10) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x1d0) = dVar10;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); Vec3_scale(ar4 + 0x1bc,ar4 + 0x1d4,a6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c023aa0(ar4 + 0x30,((undefined1 *)(fr0_ - 0x58)),a6,ar7));
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,a6,ar7));
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x1d0),*(undefined4 *)(unsigned)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x34);
      dVar10 = *(double *)(unsigned)(ar4 + 0x1d0);
    }
    if (cVar14 == '\0') {
      fVar9 = F32LO(dVar10) - F32HI(dVar10);
    }
    else {
      fVar9 = SUB84(dVar10 - dVar10,0);
    }
    if (cVar15 == '\0') {
      *(float *)(unsigned)(ar4 + 0x34) = fVar9;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x34) = in_xd0;
    }
  }
LAB_8c0f6620:
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(&(*(float *)(fr0_ - 0x48)),0xffffffff,a6,ar7));
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(&(*(float *)(fr0_ - 0x38)),0xffffffff,a6,ar7));
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,a6,ar7));
  return uVar8;
}

__asm__(".globl _FUN_8c0f5fdc\n.set _FUN_8c0f5fdc, _FUN_8c0f5fdc_def\n");
