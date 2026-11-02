#include "../decls.h"
undefined4 FUN_8c0a2bf4_def(int ar4,double *ar5,double *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  double *ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  float fVar6;
  double in_dr0;
  float fVar10;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  double in_dr2;
  double dVar11;
  undefined8 in_dr4;
  undefined4 uVar12;
  undefined8 in_dr14;
  double in_xd0;
  double in_xd14;
  bool bVar13;
  char cVar14;
  char cVar15;
  undefined4 in_stack_ffffff54;
  
  uVar3 = SUB84(in_dr2,0);
  cVar15 = '\0';
  cVar14 = '\0';
  dVar8 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr4 >> 0x20));
  ar5_00 = (double *)0x1;
  iVar2 = *(int *)(ar4 + 300);
  if (7 < iVar2) {
    return 1;
  }
  if (iVar2 < 0) {
    return 1;
  }
                    
  switch(iVar2) {
  case 0:
    vec3_clear(ar4 + 0x224,1,ar6,ar7);
    Vec3_assign(ar4 + 0x54,ar5,ar6,ar7);
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44(SUB84(dVar8,0),0x41700000);
    }
    else {
      in_xd0 = -4.2458146733691317e-250;
      dVar7 = in_xd14;
    }
    if (cVar14 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar7;
    }
    if (cVar15 == '\0') {
      *(int *)(ar4 + 0x58) = (int)((ulonglong)dVar7 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x58) = dVar7;
    }
    FUN_8c031b68(ar4,0x8c2851b0,ar6,ar7);
    iVar2 = ar4 + 0x54;
    FUN_8c031bb4(ar4,ar5,iVar2,ar7);
    FUN_8c022fc0(ar5,ar4 + 0x54,iVar2,FUN_8c022fc0);
    uVar3 = SUB84(in_dr2,0);
    fVar6 = (float)((ulonglong)dVar7 >> 0x20);
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
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
      ar6 = (double *)0xb0;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,0xb0,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      goto switchD_8c0a2c2e_caseD_1;
    }
    ar7 = 0;
    ar6 = (double *)0x0;
    ar5_00 = (double *)0x2;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0,0);
    if (cVar15 == '\0') {
      fVar6 = *(float *)(ar4 + 0x28);
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x28);
    }
    in_dr0 = (double)(ulonglong)(uint)fVar6;
    if (fVar6 == 0.0) {
      in_dr0 = (double)CONCAT44(0x3f800000,fVar6);
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0x3f800000;
      }
      else {
        *(double *)(ar4 + 0x28) = in_dr0;
      }
    }
    *(undefined4 *)(ar4 + 300) = 3;
  case 3:
switchD_8c0a2c2e_caseD_3:
    fVar6 = SUB84(in_dr0,0);
    iVar2 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6,ar7);
    if (iVar2 == 2) {
      FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7);
    }
    else {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
    }
    if (cVar15 == '\0') {
      fVar6 = *(float *)(ar4 + 0x18);
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x18);
    }
    cVar5 = cVar14 == '\0' && 0.0 < fVar6;
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar4 + 0x54));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x54);
      dVar7 = *ar5;
    }
    if (cVar14 == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 != '\0' || 0.0 <= fVar6) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(ar4 + 0x14);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x14);
      }
      if (cVar14 != '\0' || 0.0 <= fVar6) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar4 + 0x54));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x54);
      dVar7 = *ar5;
    }
    if (cVar14 == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 == '\0' && fVar6 < 0.0) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(ar4 + 0x14);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x14);
      }
      if (cVar14 == '\0' && fVar6 < 0.0) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)(ar4 + 0x5c));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x5c);
      dVar7 = ar5[1];
    }
    if (cVar14 == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 != '\0' || 0.0 <= fVar6) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(ar4 + 0x1c);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x1c);
      }
      if (cVar14 != '\0' || 0.0 <= fVar6) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)(ar4 + 0x5c));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x5c);
      dVar7 = ar5[1];
    }
    if (cVar14 == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    dVar7 = (double)(ulonglong)(uint)fVar6;
    if (cVar14 == '\0' && fVar6 < 0.0) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(ar4 + 0x1c);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x1c);
      }
      dVar7 = (double)(ulonglong)(uint)fVar6;
      if (cVar14 == '\0' && fVar6 < 0.0) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar5 == '\x03') {
      if (cVar15 == '\0') {
        uVar3 = *(undefined4 *)(ar4 + 0x28);
        dVar7 = (double)CONCAT44(uVar3,SUB84(dVar7,0));
        *(undefined4 *)(ar4 + 0x24) = uVar3;
      }
      else {
        dVar7 = *(double *)(ar4 + 0x28);
        *(double *)(ar4 + 0x24) = dVar7;
      }
      ar5_00 = (double *)(ar4 + 0x54);
      FUN_8c022fc0(ar5,ar5_00,ar6,ar7);
      if (cVar15 == '\0') {
        dVar11 = (double)CONCAT44(0x40000000,SUB84(dVar7,0));
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar11 = 1.19733612505215e-311;
      }
      if (cVar14 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) *
                                 (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 * dVar11;
      }
      if (cVar15 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar11,0));
      }
      else {
        dVar11 = *(double *)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) /
                                 (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar8 = dVar7 / dVar11;
      }
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar11,0));
      }
      else {
        dVar7 = *(double *)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) /
                                 (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 / dVar8;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x234) = (int)((ulonglong)dVar7 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x234) = dVar7;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    else {
      ar5_00 = (double *)(ar4 + 0x54);
      ar6 = ar5;
      iVar2 = FUN_8c031764(ar4,ar5_00,ar5,ar7);
      if (iVar2 != 0) {
        if (cVar15 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),SUB84(in_dr2,0));
          dVar7 = (double)CONCAT44(SUB84(dVar8,0),0x41700000);
        }
        else {
          in_dr2 = *(double *)((int)ar5 + 4);
          in_xd0 = 1.19734804055586e-311;
          dVar7 = in_xd14;
        }
        if (cVar14 == '\0') {
          fVar6 = (float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0);
          dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0));
          bVar13 = (float)((ulonglong)in_dr2 >> 0x20) < fVar6;
        }
        else {
          dVar7 = dVar7 - dVar7;
          bVar13 = in_dr2 < dVar7;
        }
        if (bVar13) {
          if (cVar15 == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x234),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x28);
            dVar7 = *(double *)(ar4 + 0x234);
          }
          if (cVar14 == '\0') {
            fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar7 - dVar7,0);
          }
          if (cVar15 == '\0') {
            *(float *)(ar4 + 0x28) = fVar6;
            fVar6 = *(float *)(ar4 + 0x28);
          }
          else {
            *(double *)(ar4 + 0x28) = in_xd0;
            in_xd0 = *(double *)(ar4 + 0x28);
          }
          if (cVar14 == '\0' && 0.0 < fVar6) {
            return 1;
          }
          if (cVar15 == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
          }
          if (cVar15 == '\0') {
            *(undefined4 *)(ar4 + 0x234) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x234) = (ulonglong)(uint)fVar6;
          }
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          break;
        }
      }
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar7 & 0xffffffff;
      }
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x234) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x234) = (ulonglong)dVar7 & 0xffffffff;
      }
      *(undefined4 *)(ar4 + 300) = 4;
    }
    break;
  case 1:
switchD_8c0a2c2e_caseD_1:
    ar5_00 = (double *)((int)ar5 + 4);
    if (cVar15 == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)ar5_00,uVar3);
      dVar7 = (double)CONCAT44(SUB84(dVar8,0),0x41700000);
    }
    else {
      in_dr2 = *ar5_00;
      in_xd0 = 1.19734804055586e-311;
      dVar7 = in_xd14;
    }
    if (cVar14 == '\0') {
      fVar6 = (float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0);
      dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0));
      bVar13 = (float)((ulonglong)in_dr2 >> 0x20) < fVar6;
    }
    else {
      dVar7 = dVar7 - dVar7;
      bVar13 = in_dr2 < dVar7;
    }
    if (bVar13) {
      ar5_00 = (double *)(ar4 + 0x54);
      FUN_8c022fc0(ar5,ar5_00,ar6,ar7);
      if (cVar15 == '\0') {
        in_dr0 = (double)CONCAT44(0x43960000,(int)((ulonglong)dVar7 >> 0x20));
      }
      else {
        in_dr0 = 6.37158960238423e-312;
        in_xd0 = dVar7;
      }
      if (cVar14 != '\0' || (float)((ulonglong)in_dr0 >> 0x20) <= SUB84(in_dr0,0)) {
LAB_8c0a2e1c:
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7,in_stack_ffffff54);
        fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
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
        CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7,in_stack_ffffff54);
        if (cVar15 == '\0') {
          fVar6 = 35.0;
        }
        else {
          in_dr0 = (double)CONCAT44(fVar10,fVar6);
          fVar10 = 35.0;
          fVar6 = 7.73517e-43;
        }
        if (cVar14 == '\0' && fVar10 < fVar6) {
          if (cVar15 == '\0') {
            dVar8 = (double)CONCAT44(0x3e19999a,*(undefined4 *)(ar4 + 0x228));
          }
          else {
            in_dr0 = *(double *)(ar4 + 0x228);
            dVar8 = -8.3327967895966e-251;
          }
          if (cVar14 == '\0') {
            fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar8 + dVar8,0);
          }
          if (cVar15 == '\0') {
            *(float *)(ar4 + 0x228) = fVar6;
          }
          else {
            *(double *)(ar4 + 0x228) = in_dr0;
          }
        }
        else {
          if (cVar15 == '\0') {
            dVar8 = (double)CONCAT44(0x3df5c28f,*(undefined4 *)(ar4 + 0x228));
          }
          else {
            in_dr0 = *(double *)(ar4 + 0x228);
            dVar8 = 9.363579837252917e+86;
          }
          if (cVar14 == '\0') {
            fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar8 - dVar8,0);
          }
          if (cVar15 == '\0') {
            *(float *)(ar4 + 0x228) = fVar6;
          }
          else {
            *(double *)(ar4 + 0x228) = in_dr0;
          }
        }
        FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7);
        return 1;
      }
      if (cVar15 == '\0') {
        dVar7 = (double)(ulonglong)*(uint *)(ar4 + 0x18);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x18);
        dVar7 = in_dr0;
      }
      in_dr0 = (double)((ulonglong)dVar7 & 0xffffffff);
      if (cVar14 != '\0' || SUB84(dVar7,0) <= 0.0) goto LAB_8c0a2e1c;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      goto switchD_8c0a2c2e_caseD_2;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar7 & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x234) = (ulonglong)dVar7 & 0xffffffff;
    }
    *(undefined4 *)(ar4 + 300) = 4;
    vec3_clear(ar4 + 0x224,ar5_00,ar6,ar7);
    break;
  case 2:
switchD_8c0a2c2e_caseD_2:
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
    if (iVar2 == 1) {
      vec3_clear(ar4 + 0x224,ar5_00,ar6,ar7);
      uVar12 = SUB84(dVar8,0);
      uVar4 = SUB84(in_dr0,0);
      ar7 = 0;
      ar6 = (double *)0xffffffff;
      uVar3 = 2;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
      if (cVar15 == '\0') {
        uVar3 = *(undefined4 *)(ar4 + 0x28);
        dVar8 = (double)CONCAT44(uVar3,uVar4);
        *(undefined4 *)(ar4 + 0x24) = uVar3;
      }
      else {
        dVar8 = *(double *)(ar4 + 0x28);
        *(double *)(ar4 + 0x24) = dVar8;
      }
      ar5_00 = (double *)(ar4 + 0x54);
      FUN_8c022fc0(ar5,ar5_00,ar6,ar7);
      uVar3 = SUB84(dVar8,0);
      if (cVar15 == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),uVar12);
        dVar7 = (double)CONCAT44(0x40000000,uVar3);
      }
      else {
        dVar7 = 1.19733612505215e-311;
      }
      if (cVar14 == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) *
                                 (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 * dVar7;
      }
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar7,0));
      }
      else {
        dVar7 = *(double *)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) /
                                 (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 / dVar7;
      }
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar7,0));
      }
      else {
        dVar7 = *(double *)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) /
                                  (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar7,0));
      }
      else {
        in_dr0 = dVar7 / dVar8;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x234) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x234) = in_dr0;
      }
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      goto switchD_8c0a2c2e_caseD_3;
    }
    CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7,in_stack_ffffff54);
    fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
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
    CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7,in_stack_ffffff54);
    if (cVar15 == '\0') {
      fVar6 = 35.0;
    }
    else {
      in_dr0 = (double)CONCAT44(fVar10,fVar6);
      fVar10 = 35.0;
      fVar6 = 7.73517e-43;
    }
    in_xd0 = in_dr0;
    if (cVar14 == '\0' && fVar10 < fVar6) {
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(0x3e19999a,*(undefined4 *)(ar4 + 0x228));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x228);
        dVar7 = -8.3327967895966e-251;
      }
      if (cVar14 == '\0') {
        dVar7 = (double)(ulonglong)(uint)(SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20));
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x228) = SUB84(dVar7,0);
      }
      else {
        *(double *)(ar4 + 0x228) = in_xd0;
      }
    }
    else {
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(0x3df5c28f,*(undefined4 *)(ar4 + 0x228));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x228);
        dVar7 = 3.6211232371055283e+96;
      }
      if (cVar14 == '\0') {
        dVar7 = (double)(ulonglong)(uint)(SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20));
      }
      else {
        dVar7 = dVar7 - dVar7;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x228) = SUB84(dVar7,0);
      }
      else {
        *(double *)(ar4 + 0x228) = in_xd0;
      }
    }
    ar5_00 = (double *)(ar4 + 0x54);
    ar6 = ar5;
    iVar2 = FUN_8c031764(ar4,ar5_00,ar5,ar7);
    if (iVar2 != 0) {
      if (cVar15 == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),SUB84(in_dr2,0));
        dVar7 = (double)CONCAT44(SUB84(dVar8,0),0x41700000);
      }
      else {
        in_dr2 = *(double *)((int)ar5 + 4);
        in_xd0 = 1.19734804055586e-311;
        dVar7 = in_xd14;
      }
      if (cVar14 == '\0') {
        fVar6 = (float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0);
        dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0));
        bVar13 = (float)((ulonglong)in_dr2 >> 0x20) < fVar6;
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
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar7 & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x234) = (ulonglong)dVar7 & 0xffffffff;
    }
    *(undefined4 *)(ar4 + 300) = 4;
    break;
  case 5:
    goto switchD_8c0a2c2e_caseD_5;
  case 6:
    goto switchD_8c0a2c2e_caseD_6;
  case 7:
    if (*(int *)(ar4 + 0x248) < 0x12d) {
      FUN_8c03f3ac(ar4 + 0xb0,1,ar6,ar7);
      *(int *)(ar4 + 0x248) = *(int *)(ar4 + 0x248) + 1;
      return 1;
    }
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,1,ar6,ar7);
    if (iVar2 != 1) {
      return 1;
    }
    *(undefined4 *)(ar4 + 300) = 0;
    *(undefined4 *)(ar4 + 0x248) = 0;
    return 0;
  }
  uVar3 = SUB84(in_dr2,0);
  iVar2 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6,ar7);
  if (iVar2 == 2) {
    FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7);
  }
  else {
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
  }
  if (cVar15 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x234),*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x28);
    dVar7 = *(double *)(ar4 + 0x234);
  }
  if (cVar14 == '\0') {
    fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 - dVar7,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x28) = fVar6;
    fVar6 = *(float *)(ar4 + 0x28);
  }
  else {
    *(double *)(ar4 + 0x28) = in_xd0;
    in_xd0 = *(double *)(ar4 + 0x28);
  }
  dVar7 = (double)(ulonglong)(uint)fVar6;
  if (cVar14 == '\0' && 0.0 < fVar6) {
    iVar2 = FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7);
    if (iVar2 != 0) {
      if (cVar15 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),uVar3);
        in_xd14 = (double)CONCAT44(SUB84(dVar8,0),0x41700000);
      }
      else {
        dVar11 = *(double *)((int)ar5 + 4);
        in_xd0 = 1.19734804055586e-311;
      }
      if (cVar14 == '\0') {
        fVar6 = (float)((ulonglong)in_xd14 >> 0x20) - SUB84(in_xd14,0);
        dVar7 = (double)CONCAT44(fVar6,SUB84(in_xd14,0));
        bVar13 = (float)((ulonglong)dVar11 >> 0x20) < fVar6;
      }
      else {
        dVar7 = in_xd14 - in_xd14;
        bVar13 = dVar11 < dVar7;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar11,0));
          dVar7 = (double)CONCAT44(0x41f80000,*(undefined4 *)(ar4 + 0x234));
        }
        else {
          dVar8 = *(double *)(ar4 + 0x28);
          dVar7 = 6.37145555296751e-312;
        }
        if (cVar14 == '\0') {
          bVar13 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20) <
                   (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          bVar13 = dVar7 * dVar7 < dVar8;
        }
        if (bVar13) {
          return 1;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        return 1;
      }
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar7 & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x234) = (ulonglong)dVar7 & 0xffffffff;
    }
    *(undefined4 *)(ar4 + 300) = 5;
  }
  else {
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x234) = (ulonglong)(uint)fVar6;
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
switchD_8c0a2c2e_caseD_5:
  if (cVar15 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x234),*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x28);
    dVar7 = *(double *)(ar4 + 0x234);
  }
  if (cVar14 == '\0') {
    fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 - dVar7,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x28) = fVar6;
    fVar6 = *(float *)(ar4 + 0x28);
  }
  else {
    *(double *)(ar4 + 0x28) = in_xd0;
    in_xd0 = *(double *)(ar4 + 0x28);
  }
  dVar7 = (double)(ulonglong)(uint)fVar6;
  if (cVar14 != '\0' || fVar6 <= 0.0) {
LAB_8c0a3432:
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar7 & 0xffffffff;
    }
    dVar7 = (double)((ulonglong)dVar7 & 0xffffffff);
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x234) = 0;
    }
    else {
      *(double *)(ar4 + 0x234) = dVar7;
    }
  }
  else {
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44(0x41700000,*(undefined4 *)((int)ar5 + 4));
    }
    else {
      in_xd0 = *(double *)((int)ar5 + 4);
      dVar7 = -8.33279687642364e-251;
    }
    if (cVar14 == '\0') {
      bVar13 = SUB84(dVar7,0) < SUB84(dVar8,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      bVar13 = dVar7 < dVar8 - dVar7;
    }
    if (!bVar13) goto LAB_8c0a3432;
  }
  iVar2 = FUN_8c031764(ar4,ar4 + 0x54,ar5,ar4 + 0x54);
  if (iVar2 == 0) {
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar7 & 0xffffffff;
    }
  }
  ar7 = 0;
  uVar4 = 0xffffffff;
  uVar3 = 8;
  s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
  s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar4,ar7);
  *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
switchD_8c0a2c2e_caseD_6:
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x234),*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x28);
    dVar8 = *(double *)(ar4 + 0x234);
  }
  if (cVar14 == '\0') {
    fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 - dVar8,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x28) = fVar6;
    fVar6 = *(float *)(ar4 + 0x28);
  }
  else {
    *(double *)(ar4 + 0x28) = in_xd0;
  }
  if (cVar14 != '\0' || fVar6 <= 0.0) {
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x234) = (ulonglong)(uint)fVar6;
    }
  }
  uVar9 = (ulonglong)(uint)fVar6;
  iVar2 = ar4 + 0x54;
  iVar1 = FUN_8c031764(ar4,iVar2,ar5,ar7);
  if (iVar1 == 0) {
    uVar9 = uVar9 & 0xffffffff;
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar9;
    }
  }
  uVar3 = (undefined4)(uVar9 >> 0x20);
  CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar2,ar5,ar7);
  CAnimBody_GetCurFrame(ar4 + 0xb0,iVar2,ar5,ar7,in_stack_ffffff54);
  if (cVar15 == '\0') {
    uVar9 = CONCAT44(0x41f00000,uVar3);
  }
  else {
    uVar9 = 0x6013d10d41f00000;
  }
  if (cVar14 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar9 & 0xffffffff;
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c0a2bf4\n.set _FUN_8c0a2bf4, _FUN_8c0a2bf4_def\n");
