#include "../decls.h"
int FUN_8c23c2a6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double *unaff_r13;
  int iVar4;
  undefined8 *puVar5;
  double in_dr0;
  double dVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  double in_dr2;
  float fVar11;
  double dVar9;
  ulonglong uVar10;
  float fVar12;
  float fVar13;
  double in_dr4;
  double dVar14;
  double in_dr6;
  double dVar15;
  undefined8 in_dr14;
  double in_xd2;
  double in_xd4;
  double in_xd14;
  bool bVar16;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_1c [8];
  undefined8 uStack_14;
  
  iVar1 = 0x8c4c1280;
  if (in_FPSCR_SZ == '\0') {
    uStack_14 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_14);
    puVar5 = &uStack_14;
                    
    (*(uint*)((uchar*)&uStack_14+0)) = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar5 = (undefined8 *)auStack_1c;
    uStack_14 = in_xd14;
  }
  *(undefined4 *)((int)puVar5 + -4) = in_PR;
  iVar2 = (int)0x80;
  iVar3 = *(int *)(iVar2 + 0x8c4c1280);
LAB_8c23c4a0:
  while( true ) {
    if (iVar3 == 0) {
      return iVar2;
    }
    iVar3 = iVar3 + -1;
    iVar4 = *(int *)(*(int *)(iVar3 * 4 + iVar1) * 4 + 0x8c4c11e0);
    iVar2 = *(int *)(0x124 + iVar4);
    uVar8 = (undefined4)((ulonglong)in_dr2 >> 0x20);
    if ((((iVar2 != 0xc4) && (iVar2 != 0xe0)) && (iVar2 != 0xc5)) &&
       (iVar2 != 0xe5)) goto code_r0x8c23c2f0;
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44(uVar8,*(undefined4 *)unaff_r13);
      dVar15 = (double)CONCAT44(*(undefined4 *)(0x90 + iVar4),SUB84(in_dr6,0));
      dVar6 = (double)CONCAT44(*(undefined4 *)((int)unaff_r13 + 4),SUB84(in_dr0,0));
    }
    else {
      in_xd2 = *unaff_r13;
      dVar15 = *(double *)(0x90 + iVar4);
      dVar6 = *(double *)((int)unaff_r13 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr6 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - SUB84(in_dr2,0),SUB84(dVar15,0)
                               );
    }
    else {
      in_dr6 = dVar15 - in_dr2;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(0x94 + iVar4),SUB84(in_dr4,0));
      dVar14 = (double)CONCAT44(*(undefined4 *)(unaff_r13 + 1),SUB84(in_dr2,0));
    }
    else {
      dVar15 = *(double *)(0x94 + iVar4);
      dVar14 = unaff_r13[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) -
                                (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar15,0));
    }
    else {
      dVar15 = dVar15 - dVar6;
    }
    fVar12 = (float)((ulonglong)in_dr6 >> 0x20);
    fVar13 = (float)((ulonglong)dVar15 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),fVar13);
      dVar15 = in_xd2;
      dVar9 = (double)CONCAT44(fVar13,*(undefined4 *)(0x98 + iVar4));
      dVar6 = (double)CONCAT44(fVar12,SUB84(dVar6,0));
    }
    else {
      in_xd4 = *(double *)(0x98 + iVar4);
      dVar9 = dVar15;
      dVar6 = in_dr6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar11 = (float)((ulonglong)dVar14 >> 0x20);
      in_dr4 = (double)(ulonglong)(uint)(SUB84(dVar9,0) - fVar11);
      in_dr2 = (double)CONCAT44(fVar11,(float)((ulonglong)dVar6 >> 0x20) * fVar12 +
                                       SUB84(dVar14,0) * fVar13);
    }
    else {
      in_dr2 = dVar14 * dVar9;
      in_dr4 = dVar9 - in_dr2;
    }
    in_dr0 = in_xd4;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(SUB84(in_dr4,0),SUB84(dVar6,0));
    }
    if (in_FPSCR_PR == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                (float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr4,0) +
                                SUB84(in_dr2,0));
    }
    if (in_FPSCR_SZ == '\0') {
      uVar8 = SUB84(in_dr2,0);
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x6c));
      in_xd2 = dVar15;
      dVar15 = (double)CONCAT44(uVar8,0x3f800000);
    }
    else {
      in_xd2 = *(double *)(iVar4 + 0x6c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar16 = (float)((ulonglong)dVar15 >> 0x20) < SUB84(in_dr2,0);
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
    FUN_8c258030(0x8c4c11e0,ar5,ar6,ar7);
    dVar6 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(SUB84(dVar15,0),uVar8);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr4 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) /
                                (float)((ulonglong)in_dr0 >> 0x20),SUB84(dVar6,0));
    }
    else {
      in_dr4 = dVar6 / in_dr0;
    }
    iVar2 = (int)0x90;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(iVar2 + iVar4),*(undefined4 *)unaff_r13);
    }
    else {
      in_xd2 = *unaff_r13;
      dVar6 = *(double *)(iVar2 + iVar4);
    }
    fVar13 = (float)((ulonglong)in_dr4 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44(((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar6,0)) * fVar13,
                               SUB84(dVar6,0));
    }
    else {
      dVar6 = (dVar6 - dVar6) * in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x18 + iVar4) = (int)((ulonglong)dVar6 >> 0x20);
      dVar6 = (double)(ulonglong)*(uint *)((int)unaff_r13 + 4);
    }
    else {
      *(double *)(iVar2 + 0x18 + iVar4) = dVar6;
      in_xd2 = *(double *)((int)unaff_r13 + 4);
    }
    iVar2 = (int)0x94;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(iVar2 + iVar4),SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(iVar2 + iVar4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44(((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar6,0)) * fVar13,
                               SUB84(dVar6,0));
    }
    else {
      dVar6 = (dVar6 - dVar6) * in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x18 + iVar4) = (int)((ulonglong)dVar6 >> 0x20);
      dVar6 = (double)(ulonglong)*(uint *)(unaff_r13 + 1);
    }
    else {
      *(double *)(iVar2 + 0x18 + iVar4) = dVar6;
      in_xd2 = unaff_r13[1];
    }
    iVar2 = (int)0x98;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(iVar2 + iVar4),SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(iVar2 + iVar4);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr2 = (double)CONCAT44(((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar6,0)) * fVar13,
                                SUB84(dVar6,0));
    }
    else {
      in_dr2 = (dVar6 - dVar6) * in_dr4;
    }
    uVar8 = (undefined4)((ulonglong)in_dr2 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar2 + 0x18 + iVar4) = uVar8;
      in_dr2 = (double)CONCAT44(uVar8,*(undefined4 *)(iVar4 + 0x68));
    }
    else {
      *(double *)(iVar2 + 0x18 + iVar4) = in_dr2;
      in_xd2 = *(double *)(iVar4 + 0x68);
    }
    fVar13 = (float)((ulonglong)dVar15 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar16 = SUB84(in_dr2,0) < fVar13;
    }
    else {
      bVar16 = in_dr2 < dVar15;
    }
    if (bVar16) {
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x68));
      }
      else {
        in_xd2 = *(double *)(iVar4 + 0x68);
      }
      iVar2 = 0x60;
      if (in_FPSCR_PR == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) / fVar13);
      }
      else {
        in_dr2 = in_dr2 / dVar15;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(iVar4 + 0x60) = SUB84(in_dr2,0);
      }
      else {
        *(double *)(iVar4 + 0x60) = in_xd2;
      }
    }
    else {
      iVar2 = 0x60;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(iVar4 + 0x60) = SUB84(dVar15,0);
      }
      else {
        *(double *)(iVar4 + 0x60) = in_xd14;
      }
    }
  }
  goto LAB_8c23c49a;
code_r0x8c23c2f0:
  if (iVar2 == 0xc8) {
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44(uVar8,*(undefined4 *)unaff_r13);
      dVar15 = (double)CONCAT44(*(undefined4 *)(0x90 + iVar4),SUB84(in_dr6,0));
      dVar6 = (double)CONCAT44(*(undefined4 *)((int)unaff_r13 + 4),SUB84(in_dr0,0));
    }
    else {
      in_xd2 = *unaff_r13;
      dVar15 = *(double *)(0x90 + iVar4);
      dVar6 = *(double *)((int)unaff_r13 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr6 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - SUB84(in_dr2,0),SUB84(dVar15,0)
                               );
    }
    else {
      in_dr6 = dVar15 - in_dr2;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                *(undefined4 *)(0x94 + iVar4));
      dVar15 = (double)CONCAT44(*(undefined4 *)(unaff_r13 + 1),SUB84(in_dr2,0));
    }
    else {
      in_xd4 = *(double *)(0x94 + iVar4);
      dVar15 = unaff_r13[1];
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = SUB84(in_dr4,0) - (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar13 = SUB84(in_dr4 - dVar6,0);
    }
    fVar12 = (float)((ulonglong)in_dr6 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(0x98 + iVar4),fVar13);
      dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),fVar13);
      dVar6 = (double)CONCAT44(fVar12,SUB84(dVar6,0));
    }
    else {
      dVar14 = *(double *)(0x98 + iVar4);
      fVar13 = SUB84(dVar14,0);
      in_xd2 = in_xd4;
      dVar6 = in_dr6;
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) -
                                (float)((ulonglong)dVar15 >> 0x20),fVar13);
      dVar15 = (double)(ulonglong)
                       (uint)((float)((ulonglong)dVar6 >> 0x20) * fVar12 + SUB84(dVar15,0) * fVar13)
      ;
    }
    else {
      dVar15 = dVar15 * dVar14;
      dVar14 = dVar14 - dVar15;
    }
    fVar13 = SUB84(dVar15,0);
    fVar12 = (float)((ulonglong)dVar14 >> 0x20);
    dVar15 = dVar14;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(fVar12,SUB84(dVar6,0));
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = (float)((ulonglong)dVar15 >> 0x20) * fVar12 + fVar13;
    }
    dVar9 = in_xd2;
    dVar6 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)((ulonglong)dVar14 & 0xffffffff);
      dVar6 = (double)CONCAT44(fVar13,0x3f800000);
    }
    uVar8 = SUB84(dVar9,0);
    FUN_8c258030(0x8c4c11e0,ar5,ar6,ar7);
    dVar14 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(SUB84(dVar6,0),uVar8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) /
                                (float)((ulonglong)dVar15 >> 0x20),SUB84(dVar14,0));
    }
    else {
      dVar14 = dVar14 / dVar15;
    }
    iVar2 = (int)0x90;
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(iVar2 + iVar4),*(undefined4 *)unaff_r13);
    }
    else {
      in_xd2 = *unaff_r13;
      dVar9 = *(double *)(iVar2 + iVar4);
    }
    fVar13 = (float)((ulonglong)dVar14 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44(((float)((ulonglong)dVar9 >> 0x20) - SUB84(dVar9,0)) * fVar13,
                               SUB84(dVar9,0));
    }
    else {
      dVar9 = (dVar9 - dVar9) * dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x18 + iVar4) = (int)((ulonglong)dVar9 >> 0x20);
      dVar9 = (double)(ulonglong)*(uint *)((int)unaff_r13 + 4);
    }
    else {
      *(double *)(iVar2 + 0x18 + iVar4) = dVar9;
      in_xd2 = *(double *)((int)unaff_r13 + 4);
    }
    iVar2 = (int)0x94;
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(iVar2 + iVar4),SUB84(dVar9,0));
    }
    else {
      dVar9 = *(double *)(iVar2 + iVar4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44(((float)((ulonglong)dVar9 >> 0x20) - SUB84(dVar9,0)) * fVar13,
                               SUB84(dVar9,0));
    }
    else {
      dVar9 = (dVar9 - dVar9) * dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x18 + iVar4) = (int)((ulonglong)dVar9 >> 0x20);
      dVar9 = (double)(ulonglong)*(uint *)(unaff_r13 + 1);
    }
    else {
      *(double *)(iVar2 + 0x18 + iVar4) = dVar9;
      in_xd2 = unaff_r13[1];
    }
    iVar2 = (int)0x98;
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(iVar2 + iVar4),SUB84(dVar9,0));
    }
    else {
      dVar9 = *(double *)(iVar2 + iVar4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44(((float)((ulonglong)dVar9 >> 0x20) - SUB84(dVar9,0)) * fVar13,
                               SUB84(dVar9,0));
    }
    else {
      dVar9 = (dVar9 - dVar9) * dVar14;
    }
    uVar8 = (undefined4)((ulonglong)dVar9 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar2 + 0x18 + iVar4) = uVar8;
      dVar15 = (double)CONCAT44(*(undefined4 *)(iVar2 + 8 + iVar4),SUB84(dVar15,0));
      dVar9 = (double)CONCAT44(uVar8,*(undefined4 *)(iVar2 + 0x14 + iVar4));
    }
    else {
      *(double *)(iVar2 + 0x18 + iVar4) = dVar9;
      dVar15 = *(double *)(iVar2 + 8 + iVar4);
      in_xd2 = *(double *)(iVar2 + 0x14 + iVar4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = SUB84(dVar9,0) * (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar9 * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44(*(undefined4 *)(iVar2 + 4 + iVar4),SUB84(dVar15,0));
      uVar10 = CONCAT44(*(undefined4 *)(iVar2 + 0x10 + iVar4),fVar13);
    }
    else {
      uVar7 = *(undefined8 *)(iVar2 + 4 + iVar4);
      uVar10 = *(ulonglong *)(iVar2 + 0x10 + iVar4);
    }
    if (in_FPSCR_PR == '\0') {
      uVar10 = (ulonglong)
               (uint)((float)((ulonglong)uVar7 >> 0x20) * (float)(uVar10 >> 0x20) + (float)uVar10);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)(iVar2 + 0xc + iVar4),(int)uVar7);
      dVar15 = (double)CONCAT44(*(undefined4 *)(iVar2 + 0x18 + iVar4),(int)uVar10);
    }
    else {
      in_dr0 = *(double *)(iVar2 + 0xc + iVar4);
      dVar15 = *(double *)(iVar2 + 0x18 + iVar4);
    }
    fVar13 = (float)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar12 = (float)((ulonglong)dVar15 >> 0x20);
      dVar15 = (double)CONCAT44(fVar12,fVar13 * fVar12 + SUB84(dVar15,0));
    }
    in_dr4 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      in_dr4 = (double)CONCAT44(SUB84(dVar15,0),SUB84(dVar14,0));
    }
    fVar12 = (float)((ulonglong)in_dr4 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) * fVar12);
    }
    else {
      in_dr2 = dVar15 * in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar4 + 100) = SUB84(in_dr2,0);
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x6c));
    }
    else {
      *(double *)(iVar4 + 100) = in_xd2;
      in_xd2 = *(double *)(iVar4 + 0x6c);
    }
    fVar11 = (float)((ulonglong)dVar6 >> 0x20);
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
          in_dr2 = (double)((ulonglong)*(uint *)(iVar4 + 0x74) << 0x20);
          in_dr0 = (double)CONCAT44(fVar13,*(undefined4 *)(iVar4 + 100));
        }
        else {
          in_dr2 = *(double *)(iVar4 + 0x74);
        }
        fVar13 = (float)((ulonglong)in_dr2 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar16 = fVar13 < SUB84(in_dr0,0);
        }
        else {
          bVar16 = in_dr2 < in_dr0;
        }
        if (bVar16) {
          if (in_FPSCR_SZ == '\0') {
            in_dr2 = (double)CONCAT44(fVar13,*(undefined4 *)(iVar4 + 0x68));
          }
          else {
            in_xd2 = *(double *)(iVar4 + 0x68);
          }
          if (in_FPSCR_PR == '\0') {
            bVar16 = SUB84(in_dr2,0) < fVar11;
          }
          else {
            bVar16 = in_dr2 < dVar6;
          }
          if (bVar16) {
            if (in_FPSCR_SZ == '\0') {
              in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                        *(undefined4 *)(iVar4 + 0x68));
            }
            else {
              in_xd2 = *(double *)(iVar4 + 0x68);
            }
            if (in_FPSCR_PR == '\0') {
              in_dr2 = (double)(ulonglong)(uint)(SUB84(in_dr2,0) / fVar11);
            }
            else {
              in_dr2 = in_dr2 / dVar6;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(iVar4 + 0x60) = SUB84(in_dr2,0);
            }
            else {
              *(double *)(iVar4 + 0x60) = in_xd2;
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            *(int *)(iVar4 + 0x60) = SUB84(dVar6,0);
          }
          else {
            *(double *)(iVar4 + 0x60) = in_xd14;
          }
          uVar8 = SUB84(in_dr2,0);
          if (in_FPSCR_SZ == '\0') {
            uVar8 = *(undefined4 *)(iVar4 + 0x70);
          }
          else {
            in_xd2 = *(double *)(iVar4 + 0x70);
          }
          iVar2 = 100;
          if (in_FPSCR_SZ == '\0') {
            in_dr2 = (double)CONCAT44(*(undefined4 *)(iVar4 + 100),uVar8);
          }
          else {
            in_dr2 = *(double *)(iVar4 + 100);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr2 >> 0x20) < SUB84(in_dr2,0)) {
            if (in_FPSCR_SZ == '\0') {
              dVar15 = (double)CONCAT44(*(undefined4 *)(iVar4 + 100),*(undefined4 *)(iVar4 + 0x74));
            }
            else {
              in_xd2 = *(double *)(iVar4 + 0x74);
              dVar15 = *(double *)(iVar4 + 100);
            }
            iVar2 = 0x60;
            if (in_FPSCR_PR == '\0') {
              dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - SUB84(dVar15,0),
                                        SUB84(dVar15,0));
            }
            else {
              dVar15 = dVar15 - dVar15;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                        *(undefined4 *)(iVar4 + 0x80));
            }
            else {
              in_xd2 = *(double *)(iVar4 + 0x80);
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar15 * dVar15,0);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar15 = (double)CONCAT44(*(undefined4 *)(iVar4 + 0x60),fVar13);
            }
            else {
              dVar15 = *(double *)(iVar4 + 0x60);
            }
            if (in_FPSCR_PR == '\0') {
              in_dr2 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) * SUB84(dVar15,0),
                                        SUB84(dVar15,0));
            }
            else {
              in_dr2 = dVar15 * dVar15;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(iVar4 + 0x60) = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              *(double *)(iVar4 + 0x60) = in_dr2;
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
      *(undefined4 *)(iVar4 + 0x60) = 0;
    }
    else {
      *(double *)(iVar4 + 0x60) = in_dr4;
    }
  }
  goto LAB_8c23c4a0;
}

__asm__(".globl _FUN_8c23c2a6\n.set _FUN_8c23c2a6, _FUN_8c23c2a6_def\n");
