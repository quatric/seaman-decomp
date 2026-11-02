#include "../decls.h"
int FUN_8c23c2a0_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double in_dr0;
  double dVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  double in_dr2;
  float fVar9;
  double dVar7;
  ulonglong uVar8;
  float fVar10;
  float fVar11;
  double in_dr4;
  double dVar12;
  double in_dr6;
  double dVar13;
  double in_xd2;
  double in_xd4;
  double in_xd14;
  bool bVar14;
  char cVar15;
  char cVar16;
  
  cVar16 = '\0';
  cVar15 = '\0';
  iVar1 = 0x80;
  iVar2 = _DAT_8c4c1300;
LAB_8c23c4a0:
  while( true ) {
    if (iVar2 == 0) {
      return iVar1;
    }
    iVar2 = iVar2 + -1;
    iVar3 = *(int *)(*(int *)(iVar2 * 4 + -0x73b3ed80) * 4 + -0x73b3ee20);
    iVar1 = *(int *)(iVar3 + 0x124);
    uVar6 = (undefined4)((ulonglong)in_dr2 >> 0x20);
    if ((((iVar1 != 0xc4) && (iVar1 != 0xe0)) && (iVar1 != 0xc5)) && (iVar1 != 0xe5))
    goto code_r0x8c23c2f0;
    if (cVar16 == '\0') {
      in_dr2 = (double)CONCAT44(uVar6,*(undefined4 *)ar4);
      dVar13 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x90),SUB84(in_dr6,0));
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),SUB84(in_dr0,0));
    }
    else {
      in_xd2 = *ar4;
      dVar13 = *(double *)(iVar3 + 0x90);
      dVar4 = *(double *)((int)ar4 + 4);
    }
    if (cVar15 == '\0') {
      in_dr6 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) - SUB84(in_dr2,0),SUB84(dVar13,0)
                               );
    }
    else {
      in_dr6 = dVar13 - in_dr2;
    }
    if (cVar16 == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x94),SUB84(in_dr4,0));
      dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),SUB84(in_dr2,0));
    }
    else {
      dVar13 = *(double *)(iVar3 + 0x94);
      dVar12 = ar4[1];
    }
    if (cVar15 == '\0') {
      dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) -
                                (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar13,0));
    }
    else {
      dVar13 = dVar13 - dVar4;
    }
    fVar10 = (float)((ulonglong)in_dr6 >> 0x20);
    fVar11 = (float)((ulonglong)dVar13 >> 0x20);
    if (cVar16 == '\0') {
      dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),fVar11);
      dVar13 = in_xd2;
      dVar7 = (double)CONCAT44(fVar11,*(undefined4 *)(iVar3 + 0x98));
      dVar4 = (double)CONCAT44(fVar10,SUB84(dVar4,0));
    }
    else {
      in_xd4 = *(double *)(iVar3 + 0x98);
      dVar7 = dVar13;
      dVar4 = in_dr6;
    }
    if (cVar15 == '\0') {
      fVar9 = (float)((ulonglong)dVar12 >> 0x20);
      in_dr4 = (double)(ulonglong)(uint)(SUB84(dVar7,0) - fVar9);
      in_dr2 = (double)CONCAT44(fVar9,(float)((ulonglong)dVar4 >> 0x20) * fVar10 +
                                      SUB84(dVar12,0) * fVar11);
    }
    else {
      in_dr2 = dVar12 * dVar7;
      in_dr4 = dVar7 - in_dr2;
    }
    in_dr0 = in_xd4;
    if (cVar16 == '\0') {
      in_dr0 = (double)CONCAT44(SUB84(in_dr4,0),SUB84(dVar4,0));
    }
    if (cVar15 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                (float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr4,0) +
                                SUB84(in_dr2,0));
    }
    if (cVar16 == '\0') {
      uVar6 = SUB84(in_dr2,0);
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x6c));
      in_xd2 = dVar13;
      dVar13 = (double)CONCAT44(uVar6,0x3f800000);
    }
    else {
      in_xd2 = *(double *)(iVar3 + 0x6c);
    }
    if (cVar15 == '\0') {
      bVar14 = (float)((ulonglong)dVar13 >> 0x20) < SUB84(in_dr2,0);
    }
    else {
      bVar14 = dVar13 < in_dr2;
    }
    if (!bVar14) break;
    dVar4 = dVar13;
    if (cVar16 == '\0') {
      dVar4 = (double)((ulonglong)in_dr4 & 0xffffffff);
    }
    uVar6 = SUB84(dVar4,0);
    FUN_8c258030(0x8c4c11e0,ar5,ar6,ar7,0x6c);
    dVar4 = in_xd14;
    if (cVar16 == '\0') {
      dVar4 = (double)CONCAT44(SUB84(dVar13,0),uVar6);
    }
    if (cVar15 == '\0') {
      in_dr4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) /
                                (float)((ulonglong)in_dr0 >> 0x20),SUB84(dVar4,0));
    }
    else {
      in_dr4 = dVar4 / in_dr0;
    }
    if (cVar16 == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)ar4);
    }
    else {
      in_xd2 = *ar4;
      dVar4 = *(double *)(iVar3 + 0x90);
    }
    fVar11 = (float)((ulonglong)in_dr4 >> 0x20);
    if (cVar15 == '\0') {
      dVar4 = (double)CONCAT44(((float)((ulonglong)dVar4 >> 0x20) - SUB84(dVar4,0)) * fVar11,
                               SUB84(dVar4,0));
    }
    else {
      dVar4 = (dVar4 - dVar4) * in_dr4;
    }
    if (cVar16 == '\0') {
      *(int *)(iVar3 + 0xa8) = (int)((ulonglong)dVar4 >> 0x20);
      dVar4 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x94),*(undefined4 *)((int)ar4 + 4));
    }
    else {
      *(double *)(iVar3 + 0xa8) = dVar4;
      in_xd2 = *(double *)((int)ar4 + 4);
      dVar4 = *(double *)(iVar3 + 0x94);
    }
    if (cVar15 == '\0') {
      dVar4 = (double)CONCAT44(((float)((ulonglong)dVar4 >> 0x20) - SUB84(dVar4,0)) * fVar11,
                               SUB84(dVar4,0));
    }
    else {
      dVar4 = (dVar4 - dVar4) * in_dr4;
    }
    if (cVar16 == '\0') {
      *(int *)(iVar3 + 0xac) = (int)((ulonglong)dVar4 >> 0x20);
      dVar4 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x98),*(undefined4 *)(ar4 + 1));
    }
    else {
      *(double *)(iVar3 + 0xac) = dVar4;
      in_xd2 = ar4[1];
      dVar4 = *(double *)(iVar3 + 0x98);
    }
    if (cVar15 == '\0') {
      in_dr2 = (double)CONCAT44(((float)((ulonglong)dVar4 >> 0x20) - SUB84(dVar4,0)) * fVar11,
                                SUB84(dVar4,0));
    }
    else {
      in_dr2 = (dVar4 - dVar4) * in_dr4;
    }
    uVar6 = (undefined4)((ulonglong)in_dr2 >> 0x20);
    if (cVar16 == '\0') {
      *(undefined4 *)(iVar3 + 0xb0) = uVar6;
      in_dr2 = (double)CONCAT44(uVar6,*(undefined4 *)(iVar3 + 0x68));
    }
    else {
      *(double *)(iVar3 + 0xb0) = in_dr2;
      in_xd2 = *(double *)(iVar3 + 0x68);
    }
    fVar11 = (float)((ulonglong)dVar13 >> 0x20);
    if (cVar15 == '\0') {
      bVar14 = SUB84(in_dr2,0) < fVar11;
    }
    else {
      bVar14 = in_dr2 < dVar13;
    }
    if (bVar14) {
      if (cVar16 == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x68));
      }
      else {
        in_xd2 = *(double *)(iVar3 + 0x68);
      }
      iVar1 = 0x60;
      if (cVar15 == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) / fVar11);
      }
      else {
        in_dr2 = in_dr2 / dVar13;
      }
      if (cVar16 == '\0') {
        *(int *)(iVar3 + 0x60) = SUB84(in_dr2,0);
      }
      else {
        *(double *)(iVar3 + 0x60) = in_xd2;
      }
    }
    else {
      iVar1 = 0x60;
      if (cVar16 == '\0') {
        *(int *)(iVar3 + 0x60) = SUB84(dVar13,0);
      }
      else {
        *(double *)(iVar3 + 0x60) = in_xd14;
      }
    }
  }
  goto LAB_8c23c49a;
code_r0x8c23c2f0:
  if (iVar1 == 200) {
    if (cVar16 == '\0') {
      in_dr2 = (double)CONCAT44(uVar6,*(undefined4 *)ar4);
      dVar13 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x90),SUB84(in_dr6,0));
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),SUB84(in_dr0,0));
    }
    else {
      in_xd2 = *ar4;
      dVar13 = *(double *)(iVar3 + 0x90);
      dVar4 = *(double *)((int)ar4 + 4);
    }
    if (cVar15 == '\0') {
      in_dr6 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) - SUB84(in_dr2,0),SUB84(dVar13,0)
                               );
    }
    else {
      in_dr6 = dVar13 - in_dr2;
    }
    if (cVar16 == '\0') {
      in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(iVar3 + 0x94));
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),SUB84(in_dr2,0));
    }
    else {
      in_xd4 = *(double *)(iVar3 + 0x94);
      dVar13 = ar4[1];
    }
    if (cVar15 == '\0') {
      fVar11 = SUB84(in_dr4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar11 = SUB84(in_dr4 - dVar4,0);
    }
    fVar10 = (float)((ulonglong)in_dr6 >> 0x20);
    if (cVar16 == '\0') {
      dVar12 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x98),fVar11);
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),fVar11);
      dVar4 = (double)CONCAT44(fVar10,SUB84(dVar4,0));
    }
    else {
      dVar12 = *(double *)(iVar3 + 0x98);
      fVar11 = SUB84(dVar12,0);
      in_xd2 = in_xd4;
      dVar4 = in_dr6;
    }
    if (cVar15 == '\0') {
      dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) -
                                (float)((ulonglong)dVar13 >> 0x20),fVar11);
      dVar13 = (double)(ulonglong)
                       (uint)((float)((ulonglong)dVar4 >> 0x20) * fVar10 + SUB84(dVar13,0) * fVar11)
      ;
    }
    else {
      dVar13 = dVar13 * dVar12;
      dVar12 = dVar12 - dVar13;
    }
    fVar11 = SUB84(dVar13,0);
    fVar10 = (float)((ulonglong)dVar12 >> 0x20);
    dVar13 = dVar12;
    if (cVar16 == '\0') {
      dVar13 = (double)CONCAT44(fVar10,SUB84(dVar4,0));
    }
    if (cVar15 == '\0') {
      fVar11 = (float)((ulonglong)dVar13 >> 0x20) * fVar10 + fVar11;
    }
    dVar7 = in_xd2;
    dVar4 = in_xd2;
    if (cVar16 == '\0') {
      dVar7 = (double)((ulonglong)dVar12 & 0xffffffff);
      dVar4 = (double)CONCAT44(fVar11,0x3f800000);
    }
    uVar6 = SUB84(dVar7,0);
    FUN_8c258030(0x8c4c11e0,ar5,ar6,ar7,0x98);
    dVar12 = in_xd14;
    if (cVar16 == '\0') {
      dVar12 = (double)CONCAT44(SUB84(dVar4,0),uVar6);
    }
    if (cVar15 == '\0') {
      dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) /
                                (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar12,0));
    }
    else {
      dVar12 = dVar12 / dVar13;
    }
    if (cVar16 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)ar4);
    }
    else {
      in_xd2 = *ar4;
      dVar7 = *(double *)(iVar3 + 0x90);
    }
    fVar11 = (float)((ulonglong)dVar12 >> 0x20);
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44(((float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0)) * fVar11,
                               SUB84(dVar7,0));
    }
    else {
      dVar7 = (dVar7 - dVar7) * dVar12;
    }
    if (cVar16 == '\0') {
      *(int *)(iVar3 + 0xa8) = (int)((ulonglong)dVar7 >> 0x20);
      dVar7 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x94),*(undefined4 *)((int)ar4 + 4));
    }
    else {
      *(double *)(iVar3 + 0xa8) = dVar7;
      in_xd2 = *(double *)((int)ar4 + 4);
      dVar7 = *(double *)(iVar3 + 0x94);
    }
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44(((float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0)) * fVar11,
                               SUB84(dVar7,0));
    }
    else {
      dVar7 = (dVar7 - dVar7) * dVar12;
    }
    if (cVar16 == '\0') {
      *(int *)(iVar3 + 0xac) = (int)((ulonglong)dVar7 >> 0x20);
      dVar7 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x98),*(undefined4 *)(ar4 + 1));
    }
    else {
      *(double *)(iVar3 + 0xac) = dVar7;
      in_xd2 = ar4[1];
      dVar7 = *(double *)(iVar3 + 0x98);
    }
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44(((float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0)) * fVar11,
                               SUB84(dVar7,0));
    }
    else {
      dVar7 = (dVar7 - dVar7) * dVar12;
    }
    uVar6 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (cVar16 == '\0') {
      *(undefined4 *)(iVar3 + 0xb0) = uVar6;
      dVar13 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0xa0),SUB84(dVar13,0));
      dVar7 = (double)CONCAT44(uVar6,*(undefined4 *)(iVar3 + 0xac));
    }
    else {
      *(double *)(iVar3 + 0xb0) = dVar7;
      dVar13 = *(double *)(iVar3 + 0xa0);
      in_xd2 = *(double *)(iVar3 + 0xac);
    }
    if (cVar15 == '\0') {
      fVar11 = SUB84(dVar7,0) * (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar7 * dVar13,0);
    }
    if (cVar16 == '\0') {
      uVar5 = CONCAT44(*(undefined4 *)(iVar3 + 0x9c),SUB84(dVar13,0));
      uVar8 = CONCAT44(*(undefined4 *)(iVar3 + 0xa8),fVar11);
    }
    else {
      uVar5 = *(undefined8 *)(iVar3 + 0x9c);
      uVar8 = *(ulonglong *)(iVar3 + 0xa8);
    }
    if (cVar15 == '\0') {
      uVar8 = (ulonglong)
              (uint)((float)((ulonglong)uVar5 >> 0x20) * (float)(uVar8 >> 0x20) + (float)uVar8);
    }
    if (cVar16 == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0xa4),(int)uVar5);
      dVar13 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0xb0),(int)uVar8);
    }
    else {
      in_dr0 = *(double *)(iVar3 + 0xa4);
      dVar13 = *(double *)(iVar3 + 0xb0);
    }
    fVar11 = (float)((ulonglong)in_dr0 >> 0x20);
    if (cVar15 == '\0') {
      fVar10 = (float)((ulonglong)dVar13 >> 0x20);
      dVar13 = (double)CONCAT44(fVar10,fVar11 * fVar10 + SUB84(dVar13,0));
    }
    in_dr4 = in_xd2;
    if (cVar16 == '\0') {
      in_dr4 = (double)CONCAT44(SUB84(dVar13,0),SUB84(dVar12,0));
    }
    fVar10 = (float)((ulonglong)in_dr4 >> 0x20);
    if (cVar15 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),SUB84(dVar13,0) * fVar10);
    }
    else {
      in_dr2 = dVar13 * in_dr4;
    }
    if (cVar16 == '\0') {
      *(int *)(iVar3 + 100) = SUB84(in_dr2,0);
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x6c));
    }
    else {
      *(double *)(iVar3 + 100) = in_xd2;
      in_xd2 = *(double *)(iVar3 + 0x6c);
    }
    fVar9 = (float)((ulonglong)dVar4 >> 0x20);
    if (cVar15 == '\0') {
      bVar14 = fVar9 < SUB84(in_dr2,0);
    }
    else {
      bVar14 = dVar4 < in_dr2;
    }
    if (bVar14) {
      in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
      if (cVar15 == '\0') {
        bVar14 = fVar10 < 0.0;
      }
      else {
        bVar14 = in_dr4 < in_dr2;
      }
      if (bVar14) {
        if (cVar16 == '\0') {
          in_dr2 = (double)((ulonglong)*(uint *)(iVar3 + 0x74) << 0x20);
          in_dr0 = (double)CONCAT44(fVar11,*(undefined4 *)(iVar3 + 100));
        }
        else {
          in_dr2 = *(double *)(iVar3 + 0x74);
        }
        fVar11 = (float)((ulonglong)in_dr2 >> 0x20);
        if (cVar15 == '\0') {
          bVar14 = fVar11 < SUB84(in_dr0,0);
        }
        else {
          bVar14 = in_dr2 < in_dr0;
        }
        if (bVar14) {
          if (cVar16 == '\0') {
            in_dr2 = (double)CONCAT44(fVar11,*(undefined4 *)(iVar3 + 0x68));
          }
          else {
            in_xd2 = *(double *)(iVar3 + 0x68);
          }
          if (cVar15 == '\0') {
            bVar14 = SUB84(in_dr2,0) < fVar9;
          }
          else {
            bVar14 = in_dr2 < dVar4;
          }
          if (bVar14) {
            if (cVar16 == '\0') {
              in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                        *(undefined4 *)(iVar3 + 0x68));
            }
            else {
              in_xd2 = *(double *)(iVar3 + 0x68);
            }
            if (cVar15 == '\0') {
              in_dr2 = (double)(ulonglong)(uint)(SUB84(in_dr2,0) / fVar9);
            }
            else {
              in_dr2 = in_dr2 / dVar4;
            }
            if (cVar16 == '\0') {
              *(int *)(iVar3 + 0x60) = SUB84(in_dr2,0);
            }
            else {
              *(double *)(iVar3 + 0x60) = in_xd2;
            }
          }
          else if (cVar16 == '\0') {
            *(int *)(iVar3 + 0x60) = SUB84(dVar4,0);
          }
          else {
            *(double *)(iVar3 + 0x60) = in_xd14;
          }
          uVar6 = SUB84(in_dr2,0);
          if (cVar16 == '\0') {
            uVar6 = *(undefined4 *)(iVar3 + 0x70);
          }
          else {
            in_xd2 = *(double *)(iVar3 + 0x70);
          }
          iVar1 = 100;
          if (cVar16 == '\0') {
            in_dr2 = (double)CONCAT44(*(undefined4 *)(iVar3 + 100),uVar6);
          }
          else {
            in_dr2 = *(double *)(iVar3 + 100);
          }
          if (cVar15 == '\0' && (float)((ulonglong)in_dr2 >> 0x20) < SUB84(in_dr2,0)) {
            if (cVar16 == '\0') {
              dVar13 = (double)CONCAT44(*(undefined4 *)(iVar3 + 100),*(undefined4 *)(iVar3 + 0x74));
            }
            else {
              in_xd2 = *(double *)(iVar3 + 0x74);
              dVar13 = *(double *)(iVar3 + 100);
            }
            iVar1 = 0x60;
            if (cVar15 == '\0') {
              dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) - SUB84(dVar13,0),
                                        SUB84(dVar13,0));
            }
            else {
              dVar13 = dVar13 - dVar13;
            }
            if (cVar16 == '\0') {
              dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                                        *(undefined4 *)(iVar3 + 0x80));
            }
            else {
              in_xd2 = *(double *)(iVar3 + 0x80);
            }
            if (cVar15 == '\0') {
              fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
            }
            else {
              fVar11 = SUB84(dVar13 * dVar13,0);
            }
            if (cVar16 == '\0') {
              dVar13 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x60),fVar11);
            }
            else {
              dVar13 = *(double *)(iVar3 + 0x60);
            }
            if (cVar15 == '\0') {
              in_dr2 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) * SUB84(dVar13,0),
                                        SUB84(dVar13,0));
            }
            else {
              in_dr2 = dVar13 * dVar13;
            }
            if (cVar16 == '\0') {
              *(int *)(iVar3 + 0x60) = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              *(double *)(iVar3 + 0x60) = in_dr2;
            }
          }
          goto LAB_8c23c4a0;
        }
      }
    }
LAB_8c23c49a:
    iVar1 = 0x60;
    in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
    if (cVar16 == '\0') {
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
    else {
      *(double *)(iVar3 + 0x60) = in_dr4;
    }
  }
  goto LAB_8c23c4a0;
}

__asm__(".globl _FUN_8c23c2a0\n.set _FUN_8c23c2a0, _FUN_8c23c2a0_def\n");
