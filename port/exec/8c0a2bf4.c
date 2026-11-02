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
undefined4 FUN_8c0a2bf4_def(int ar4,double *ar5,double *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a2bf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 176; for (int i_ = 0; i_ < 176; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  double *ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  float fVar6;
  double in_dr0 = 0;
  float fVar10;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  double in_dr2 = 0;
  double dVar11;
  undefined8 in_dr4 = 0;
  undefined4 uVar12;
  undefined8 in_dr14 = 0;
  double in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar13;
  char cVar14;
  char cVar15;
  
  uVar3 = SUB84(in_dr2,0);
  cVar15 = '\0';
  cVar14 = '\0';
  dVar8 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr4 >> 0x20));
  ar5_00 = (double *)(unsigned)0x1;
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if (7 < iVar2) {
    return 1;
  }
  if (iVar2 < 0) {
    return 1;
  }
                    
  switch(iVar2) {
  case 0:
    (vsp = ((unsigned long)(fr0_ - 176)), vec3_clear(ar4 + 0x224,1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), Vec3_assign(ar4 + 0x54,ar5,ar6,ar7));
    if (cVar15 == '\0') {
      dVar7 = CONCAT44D(SUB84(dVar8,0),0x41700000);
    }
    else {
      in_xd0 = -4.2458146733691317e-250;
      dVar7 = in_xd14;
    }
    if (cVar14 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) - F32LO(dVar7),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar7;
    }
    if (cVar15 == '\0') {
      *(int *)(unsigned)(ar4 + 0x58) = (int)(D2U(dVar7) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x58) = dVar7;
    }
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031b68(ar4,0x8c2851b0,ar6,ar7));
    iVar2 = ar4 + 0x54;
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031bb4(ar4,ar5,iVar2,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c022fc0(ar5,ar4 + 0x54,iVar2,((void *)0x8c022fc0)));
    uVar3 = SUB84(in_dr2,0);
    fVar6 = F32HI(dVar7);
    if (cVar15 == '\0') {
      fVar10 = 300.0;
    }
    else {
      fVar6 = 300.0;
      fVar10 = 2.46629e-43;
      in_xd0 = dVar7;
    }
    if (cVar14 != '\0' || fVar10 <= fVar6) {
      ar7 = 0;
      uVar4 = 1;
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
      ar6 = (double *)(unsigned)0xb0;
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,0xb0,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      goto switchD_8c0a2c2e_caseD_1;
    }
    ar7 = 0;
    ar6 = (double *)(unsigned)0x0;
    ar5_00 = (double *)(unsigned)0x2;
    (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0,0));
    if (cVar15 == '\0') {
      fVar6 = *(float *)(unsigned)(ar4 + 0x28);
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
    }
    in_dr0 = (double)(ulonglong)(uint)fVar6;
    if (fVar6 == 0.0) {
      in_dr0 = CONCAT44D(0x3f800000,fVar6);
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f800000;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = in_dr0;
      }
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 3;
  case 3:
switchD_8c0a2c2e_caseD_3:
    fVar6 = F32LO(in_dr0);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6,ar7));
    if (iVar2 == 2) {
      (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
    }
    if (cVar15 == '\0') {
      fVar6 = *(float *)(unsigned)(ar4 + 0x18);
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x18);
    }
    cVar5 = cVar14 == '\0' && 0.0 < fVar6;
    if (cVar15 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)(ar4 + 0x54));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x54);
      dVar7 = *ar5;
    }
    if (cVar14 == '\0') {
      fVar6 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 != '\0' || 0.0 <= fVar6) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(unsigned)(ar4 + 0x14);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x14);
      }
      if (cVar14 != '\0' || 0.0 <= fVar6) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar15 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)(ar4 + 0x54));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x54);
      dVar7 = *ar5;
    }
    if (cVar14 == '\0') {
      fVar6 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 == '\0' && fVar6 < 0.0) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(unsigned)(ar4 + 0x14);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x14);
      }
      if (cVar14 == '\0' && fVar6 < 0.0) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar15 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),*(undefined4 *)(unsigned)(ar4 + 0x5c));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x5c);
      dVar7 = ar5[1];
    }
    if (cVar14 == '\0') {
      fVar6 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 != '\0' || 0.0 <= fVar6) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(unsigned)(ar4 + 0x1c);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x1c);
      }
      if (cVar14 != '\0' || 0.0 <= fVar6) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar15 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),*(undefined4 *)(unsigned)(ar4 + 0x5c));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x5c);
      dVar7 = ar5[1];
    }
    if (cVar14 == '\0') {
      fVar6 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    dVar7 = (double)(ulonglong)(uint)fVar6;
    if (cVar14 == '\0' && fVar6 < 0.0) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(unsigned)(ar4 + 0x1c);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x1c);
      }
      dVar7 = (double)(ulonglong)(uint)fVar6;
      if (cVar14 == '\0' && fVar6 < 0.0) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar5 == '\x03') {
      if (cVar15 == '\0') {
        uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x28);
        dVar7 = CONCAT44D(uVar3,SUB84(dVar7,0));
        *(undefined4 *)(unsigned)(ar4 + 0x24) = uVar3;
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x28);
        *(double *)(unsigned)(ar4 + 0x24) = dVar7;
      }
      ar5_00 = (double *)(unsigned)(ar4 + 0x54);
      (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c022fc0(ar5,ar5_00,ar6,ar7));
      if (cVar15 == '\0') {
        dVar11 = CONCAT44D(0x40000000,SUB84(dVar7,0));
        dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar11 = 1.19733612505215e-311;
      }
      if (cVar14 == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) *
                                 F32HI(dVar11),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 * dVar11;
      }
      if (cVar15 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar11,0));
      }
      else {
        dVar11 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        dVar8 = CONCAT44D(F32HI(dVar7) /
                                 F32HI(dVar11),SUB84(dVar7,0));
      }
      else {
        dVar8 = dVar7 / dVar11;
      }
      if (cVar15 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar11,0));
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) /
                                 F32HI(dVar8),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 / dVar8;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x234) = (int)(D2U(dVar7) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x234) = dVar7;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    else {
      ar5_00 = (double *)(unsigned)(ar4 + 0x54);
      ar6 = ar5;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031764(ar4,ar5_00,ar5,ar7));
      if (iVar2 != 0) {
        if (cVar15 == '\0') {
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),SUB84(in_dr2,0));
          dVar7 = CONCAT44D(SUB84(dVar8,0),0x41700000);
        }
        else {
          in_dr2 = *(double *)(unsigned)((int)ar5 + 4);
          in_xd0 = 1.19734804055586e-311;
          dVar7 = in_xd14;
        }
        if (cVar14 == '\0') {
          fVar6 = F32HI(dVar7) - F32LO(dVar7);
          dVar7 = CONCAT44D(fVar6,SUB84(dVar7,0));
          bVar13 = F32HI(in_dr2) < fVar6;
        }
        else {
          dVar7 = dVar7 - dVar7;
          bVar13 = in_dr2 < dVar7;
        }
        if (bVar13) {
          if (cVar15 == '\0') {
            dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x234),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
            dVar7 = *(double *)(unsigned)(ar4 + 0x234);
          }
          if (cVar14 == '\0') {
            fVar6 = F32LO(dVar7) - F32HI(dVar7);
          }
          else {
            fVar6 = SUB84(dVar7 - dVar7,0);
          }
          if (cVar15 == '\0') {
            *(float *)(unsigned)(ar4 + 0x28) = fVar6;
            fVar6 = *(float *)(unsigned)(ar4 + 0x28);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
            in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
          }
          if (cVar14 == '\0' && 0.0 < fVar6) {
            return 1;
          }
          if (cVar15 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
          }
          if (cVar15 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x234) = (ulonglong)(uint)fVar6;
          }
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          break;
        }
      }
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar7) & 0xffffffff;
      }
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x234) = D2U(dVar7) & 0xffffffff;
      }
      *(undefined4 *)(unsigned)(ar4 + 300) = 4;
    }
    break;
  case 1:
switchD_8c0a2c2e_caseD_1:
    ar5_00 = (double *)(unsigned)((int)ar5 + 4);
    if (cVar15 == '\0') {
      in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)ar5_00,uVar3);
      dVar7 = CONCAT44D(SUB84(dVar8,0),0x41700000);
    }
    else {
      in_dr2 = *ar5_00;
      in_xd0 = 1.19734804055586e-311;
      dVar7 = in_xd14;
    }
    if (cVar14 == '\0') {
      fVar6 = F32HI(dVar7) - F32LO(dVar7);
      dVar7 = CONCAT44D(fVar6,SUB84(dVar7,0));
      bVar13 = F32HI(in_dr2) < fVar6;
    }
    else {
      dVar7 = dVar7 - dVar7;
      bVar13 = in_dr2 < dVar7;
    }
    if (bVar13) {
      ar5_00 = (double *)(unsigned)(ar4 + 0x54);
      (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c022fc0(ar5,ar5_00,ar6,ar7));
      if (cVar15 == '\0') {
        in_dr0 = CONCAT44D(0x43960000,(int)(D2U(dVar7) >> 0x20));
      }
      else {
        in_dr0 = 6.37158960238423e-312;
        in_xd0 = dVar7;
      }
      if (cVar14 != '\0' || F32HI(in_dr0) <= SUB84(in_dr0,0)) {
LAB_8c0a2e1c:
        (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xac))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7); });
        fVar6 = F32HI(in_dr0);
        if (cVar15 == '\0') {
          fVar10 = 15.0;
          in_dr0 = in_xd0;
        }
        else {
          fVar6 = 15.0;
          fVar10 = 1.79366e-43;
        }
        if (cVar14 == '\0' && fVar6 < fVar10) {
          return 1;
        }
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xac))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7); });
        if (cVar15 == '\0') {
          fVar6 = 35.0;
        }
        else {
          in_dr0 = CONCAT44D(fVar10,fVar6);
          fVar10 = 35.0;
          fVar6 = 7.73517e-43;
        }
        if (cVar14 == '\0' && fVar10 < fVar6) {
          if (cVar15 == '\0') {
            dVar8 = CONCAT44D(0x3e19999a,*(undefined4 *)(unsigned)(ar4 + 0x228));
          }
          else {
            in_dr0 = *(double *)(unsigned)(ar4 + 0x228);
            dVar8 = -8.3327967895966e-251;
          }
          if (cVar14 == '\0') {
            fVar6 = F32LO(dVar8) + F32HI(dVar8);
          }
          else {
            fVar6 = SUB84(dVar8 + dVar8,0);
          }
          if (cVar15 == '\0') {
            *(float *)(unsigned)(ar4 + 0x228) = fVar6;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x228) = in_dr0;
          }
        }
        else {
          if (cVar15 == '\0') {
            dVar8 = CONCAT44D(0x3df5c28f,*(undefined4 *)(unsigned)(ar4 + 0x228));
          }
          else {
            in_dr0 = *(double *)(unsigned)(ar4 + 0x228);
            dVar8 = 9.363579837252917e+86;
          }
          if (cVar14 == '\0') {
            fVar6 = F32LO(dVar8) - F32HI(dVar8);
          }
          else {
            fVar6 = SUB84(dVar8 - dVar8,0);
          }
          if (cVar15 == '\0') {
            *(float *)(unsigned)(ar4 + 0x228) = fVar6;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x228) = in_dr0;
          }
        }
        (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7));
        return 1;
      }
      if (cVar15 == '\0') {
        dVar7 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x18);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x18);
        dVar7 = in_dr0;
      }
      in_dr0 = (double)(D2U(dVar7) & 0xffffffff);
      if (cVar14 != '\0' || SUB84(dVar7,0) <= 0.0) goto LAB_8c0a2e1c;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      goto switchD_8c0a2c2e_caseD_2;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar7) & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x234) = D2U(dVar7) & 0xffffffff;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 4;
    (vsp = ((unsigned long)(fr0_ - 176)), vec3_clear(ar4 + 0x224,ar5_00,ar6,ar7));
    break;
  case 2:
switchD_8c0a2c2e_caseD_2:
    iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 176)), vec3_clear(ar4 + 0x224,ar5_00,ar6,ar7));
      uVar12 = SUB84(dVar8,0);
      uVar4 = SUB84(in_dr0,0);
      ar7 = 0;
      ar6 = (double *)(unsigned)0xffffffff;
      uVar3 = 2;
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
      if (cVar15 == '\0') {
        uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x28);
        dVar8 = CONCAT44D(uVar3,uVar4);
        *(undefined4 *)(unsigned)(ar4 + 0x24) = uVar3;
      }
      else {
        dVar8 = *(double *)(unsigned)(ar4 + 0x28);
        *(double *)(unsigned)(ar4 + 0x24) = dVar8;
      }
      ar5_00 = (double *)(unsigned)(ar4 + 0x54);
      (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c022fc0(ar5,ar5_00,ar6,ar7));
      uVar3 = SUB84(dVar8,0);
      if (cVar15 == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),uVar12);
        dVar7 = CONCAT44D(0x40000000,uVar3);
      }
      else {
        dVar7 = 1.19733612505215e-311;
      }
      if (cVar14 == '\0') {
        dVar8 = CONCAT44D(F32HI(dVar8) *
                                 F32HI(dVar7),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 * dVar7;
      }
      if (cVar15 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar7,0));
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        dVar8 = CONCAT44D(F32HI(dVar8) /
                                 F32HI(dVar7),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 / dVar7;
      }
      if (cVar15 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar7,0));
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        in_dr0 = CONCAT44D(F32HI(dVar7) /
                                  F32HI(dVar8),SUB84(dVar7,0));
      }
      else {
        in_dr0 = dVar7 / dVar8;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x234) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x234) = in_dr0;
      }
      (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      goto switchD_8c0a2c2e_caseD_3;
    }
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xac))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7); });
    fVar6 = F32HI(in_dr0);
    if (cVar15 == '\0') {
      fVar10 = 15.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar6 = 15.0;
      fVar10 = 35.0;
    }
    if (cVar14 == '\0' && fVar6 < fVar10) {
      return 1;
    }
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xac))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7); });
    if (cVar15 == '\0') {
      fVar6 = 35.0;
    }
    else {
      in_dr0 = CONCAT44D(fVar10,fVar6);
      fVar10 = 35.0;
      fVar6 = 7.73517e-43;
    }
    in_xd0 = in_dr0;
    if (cVar14 == '\0' && fVar10 < fVar6) {
      if (cVar15 == '\0') {
        dVar7 = CONCAT44D(0x3e19999a,*(undefined4 *)(unsigned)(ar4 + 0x228));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x228);
        dVar7 = -8.3327967895966e-251;
      }
      if (cVar14 == '\0') {
        dVar7 = (double)(ulonglong)(uint)(F32LO(dVar7) + F32HI(dVar7));
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x228) = SUB84(dVar7,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x228) = in_xd0;
      }
    }
    else {
      if (cVar15 == '\0') {
        dVar7 = CONCAT44D(0x3df5c28f,*(undefined4 *)(unsigned)(ar4 + 0x228));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x228);
        dVar7 = 3.6211232371055283e+96;
      }
      if (cVar14 == '\0') {
        dVar7 = (double)(ulonglong)(uint)(F32LO(dVar7) - F32HI(dVar7));
      }
      else {
        dVar7 = dVar7 - dVar7;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x228) = SUB84(dVar7,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x228) = in_xd0;
      }
    }
    ar5_00 = (double *)(unsigned)(ar4 + 0x54);
    ar6 = ar5;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031764(ar4,ar5_00,ar5,ar7));
    if (iVar2 != 0) {
      if (cVar15 == '\0') {
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),SUB84(in_dr2,0));
        dVar7 = CONCAT44D(SUB84(dVar8,0),0x41700000);
      }
      else {
        in_dr2 = *(double *)(unsigned)((int)ar5 + 4);
        in_xd0 = 1.19734804055586e-311;
        dVar7 = in_xd14;
      }
      if (cVar14 == '\0') {
        fVar6 = F32HI(dVar7) - F32LO(dVar7);
        dVar7 = CONCAT44D(fVar6,SUB84(dVar7,0));
        bVar13 = F32HI(in_dr2) < fVar6;
      }
      else {
        dVar7 = dVar7 - dVar7;
        bVar13 = in_dr2 < dVar7;
      }
      if (bVar13) {
        return 1;
      }
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar7) & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x234) = D2U(dVar7) & 0xffffffff;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 4;
    break;
  case 5:
    goto switchD_8c0a2c2e_caseD_5;
  case 6:
    goto switchD_8c0a2c2e_caseD_6;
  case 7:
    if (*(int *)(unsigned)(ar4 + 0x248) < 0x12d) {
      (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c03f3ac(ar4 + 0xb0,1,ar6,ar7));
      *(int *)(unsigned)(ar4 + 0x248) = *(int *)(unsigned)(ar4 + 0x248) + 1;
      return 1;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,1,ar6,ar7));
    if (iVar2 != 1) {
      return 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x248) = 0;
    return 0;
  }
  uVar3 = SUB84(in_dr2,0);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6,ar7));
  if (iVar2 == 2) {
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
  }
  if (cVar15 == '\0') {
    dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x234),*(undefined4 *)(unsigned)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
    dVar7 = *(double *)(unsigned)(ar4 + 0x234);
  }
  if (cVar14 == '\0') {
    fVar6 = F32LO(dVar7) - F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 - dVar7,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x28) = fVar6;
    fVar6 = *(float *)(unsigned)(ar4 + 0x28);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
    in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
  }
  dVar7 = (double)(ulonglong)(uint)fVar6;
  if (cVar14 == '\0' && 0.0 < fVar6) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7));
    if (iVar2 != 0) {
      if (cVar15 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),uVar3);
        in_xd14 = CONCAT44D(SUB84(dVar8,0),0x41700000);
      }
      else {
        dVar11 = *(double *)(unsigned)((int)ar5 + 4);
        in_xd0 = 1.19734804055586e-311;
      }
      if (cVar14 == '\0') {
        fVar6 = F32HI(in_xd14) - F32LO(in_xd14);
        dVar7 = CONCAT44D(fVar6,SUB84(in_xd14,0));
        bVar13 = F32HI(dVar11) < fVar6;
      }
      else {
        dVar7 = in_xd14 - in_xd14;
        bVar13 = dVar11 < dVar7;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(dVar11,0));
          dVar7 = CONCAT44D(0x41f80000,*(undefined4 *)(unsigned)(ar4 + 0x234));
        }
        else {
          dVar8 = *(double *)(unsigned)(ar4 + 0x28);
          dVar7 = 6.37145555296751e-312;
        }
        if (cVar14 == '\0') {
          bVar13 = F32LO(dVar7) * F32HI(dVar7) <
                   F32HI(dVar8);
        }
        else {
          bVar13 = dVar7 * dVar7 < dVar8;
        }
        if (bVar13) {
          return 1;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        return 1;
      }
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar7) & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x234) = D2U(dVar7) & 0xffffffff;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 5;
  }
  else {
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x234) = (ulonglong)(uint)fVar6;
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
switchD_8c0a2c2e_caseD_5:
  if (cVar15 == '\0') {
    dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x234),*(undefined4 *)(unsigned)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
    dVar7 = *(double *)(unsigned)(ar4 + 0x234);
  }
  if (cVar14 == '\0') {
    fVar6 = F32LO(dVar7) - F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 - dVar7,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x28) = fVar6;
    fVar6 = *(float *)(unsigned)(ar4 + 0x28);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
    in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
  }
  dVar7 = (double)(ulonglong)(uint)fVar6;
  if (cVar14 != '\0' || fVar6 <= 0.0) {
LAB_8c0a3432:
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar7) & 0xffffffff;
    }
    dVar7 = (double)(D2U(dVar7) & 0xffffffff);
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x234) = dVar7;
    }
  }
  else {
    if (cVar15 == '\0') {
      dVar7 = CONCAT44D(0x41700000,*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      in_xd0 = *(double *)(unsigned)((int)ar5 + 4);
      dVar7 = -8.33279687642364e-251;
    }
    if (cVar14 == '\0') {
      bVar13 = SUB84(dVar7,0) < F32LO(dVar8) - F32HI(dVar7);
    }
    else {
      bVar13 = dVar7 < dVar8 - dVar7;
    }
    if (!bVar13) goto LAB_8c0a3432;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031764(ar4,ar4 + 0x54,ar5,ar4 + 0x54));
  if (iVar2 == 0) {
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = D2U(dVar7) & 0xffffffff;
    }
  }
  ar7 = 0;
  uVar4 = 0xffffffff;
  uVar3 = 8;
  (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
  (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar4,ar7));
  *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
switchD_8c0a2c2e_caseD_6:
  if (cVar15 == '\0') {
    dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x234),*(undefined4 *)(unsigned)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
    dVar8 = *(double *)(unsigned)(ar4 + 0x234);
  }
  if (cVar14 == '\0') {
    fVar6 = F32LO(dVar8) - F32HI(dVar8);
  }
  else {
    fVar6 = SUB84(dVar8 - dVar8,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x28) = fVar6;
    fVar6 = *(float *)(unsigned)(ar4 + 0x28);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
  }
  if (cVar14 != '\0' || fVar6 <= 0.0) {
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x234) = (ulonglong)(uint)fVar6;
    }
  }
  uVar9 = (ulonglong)(uint)fVar6;
  iVar2 = ar4 + 0x54;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c031764(ar4,iVar2,ar5,ar7));
  if (iVar1 == 0) {
    uVar9 = uVar9 & 0xffffffff;
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9;
    }
  }
  uVar3 = (undefined4)(uVar9 >> 0x20);
  (vsp = ((unsigned long)(fr0_ - 176)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar2,ar5,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xac))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); CAnimBody_GetCurFrame(ar4 + 0xb0,iVar2,ar5,ar7); });
  if (cVar15 == '\0') {
    uVar9 = CONCAT44(0x41f00000,uVar3);
  }
  else {
    uVar9 = 0x6013d10d41f00000;
  }
  if (cVar14 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9 & 0xffffffff;
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c0a2bf4\n.set _FUN_8c0a2bf4, _FUN_8c0a2bf4_def\n");
