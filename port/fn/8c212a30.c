#include "../decls.h"
undefined4 FUN_8c212a30_def(double *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  double **ppdVar15;
  double in_dr0;
  double dVar16;
  float fVar17;
  uint uVar18;
  float fVar21;
  double dVar19;
  double dVar20;
  undefined4 uVar22;
  float fVar23;
  undefined8 in_dr12;
  double dVar24;
  undefined8 in_dr14;
  double dVar25;
  double in_xd2;
  undefined8 uVar26;
  double in_xd4;
  bool bVar27;
  float in_PR;
  char cVar28;
  char cVar29;
  double *pdStack_1f8;
  float *pfStack_1f4;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  cVar29 = '\0';
  cVar28 = '\0';
  uStack_20 = (int)in_dr14;
  uStack_24 = (int)((ulonglong)in_dr14 >> 0x20);
  uStack_28 = (int)in_dr12;
  uStack_2c = (undefined4)((ulonglong)in_dr12 >> 0x20);
  ppdVar15 = &pdStack_1f8;
  dVar24 = (double)CONCAT44(uStack_2c,0x3f000000);
  dVar25 = 7.993609747768068e-16;
  pdStack_1f8 = ar4;
  pfStack_1f4 = ar5;
  uStack_17c = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  fStack_6c = (*(float *)ar4 + *(float *)((int)ar4 + 0xc) + *(float *)(ar4 + 3) +
              *(float *)((int)ar4 + 0x24)) * 0.25;
  fStack_68 = (*(float *)((int)ar4 + 4) + *(float *)(ar4 + 2) + *(float *)((int)ar4 + 0x1c) +
              *(float *)(ar4 + 5)) * 0.25;
  fStack_64 = (*(float *)(ar4 + 1) + *(float *)((int)ar4 + 0x14) + *(float *)(ar4 + 4) +
              *(float *)((int)ar4 + 0x2c)) * 0.25;
  fStack_78 = (*ar5 + ar5[3] + ar5[6] + ar5[9]) * 0.25;
  fStack_74 = (ar5[1] + ar5[4] + ar5[7] + ar5[10]) * 0.25;
  fStack_70 = (ar5[2] + ar5[5] + ar5[8] + ar5[0xb]) * 0.25;
  fStack_3c = *(float *)((int)ar4 + 0x24);
  fStack_38 = *(float *)(ar4 + 5);
  dVar20 = (double)CONCAT44(fStack_70,*(undefined4 *)((int)ar4 + 0x2c));
  uStack_34 = *(undefined4 *)((int)ar4 + 0x2c);
  uVar2 = 0;
  fStack_30 = in_PR;
  while (ppdVar15[2] = (double *)uVar2, uVar2 < 0x30) {
    iVar5 = (int)*ppdVar15;
    iVar3 = (int)ppdVar15[2];
    if (cVar29 == '\0') {
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(iVar5 + iVar3));
    }
    else {
      in_xd2 = *(double *)(iVar5 + iVar3);
    }
    if (cVar29 == '\0') {
      fStack_48 = SUB84(dVar20,0);
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(iVar5 + iVar3 + 4))
      ;
    }
    else {
      fStack_48 = SUB84(in_xd2,0);
      in_xd2 = *(double *)(iVar5 + iVar3 + 4);
    }
    if (cVar29 == '\0') {
      fStack_44 = SUB84(dVar20,0);
      uStack_40 = *(undefined4 *)(iVar5 + iVar3 + 8);
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fStack_48);
      fVar17 = fStack_48;
      dVar19 = (double)CONCAT44(fStack_48,fStack_3c);
    }
    else {
      fStack_44 = SUB84(in_xd2,0);
      uVar26 = *(undefined8 *)(iVar5 + iVar3 + 8);
      uStack_40 = (undefined4)uVar26;
      fStack_3c = (float)((ulonglong)uVar26 >> 0x20);
      in_xd2 = (double)CONCAT44(fStack_44,fStack_48);
      in_xd4 = (double)CONCAT44(fStack_38,fStack_3c);
      fVar17 = fStack_44;
      dVar19 = in_xd2;
    }
    if (cVar28 == '\0') {
      bVar27 = SUB84(dVar19,0) < SUB84(dVar20,0) + SUB84(dVar25,0);
    }
    else {
      bVar27 = dVar19 < dVar20 + dVar25;
    }
    if (bVar27) {
LAB_8c212b84:
      if (cVar29 == '\0') {
        dVar20 = (double)CONCAT44(fStack_3c,fStack_38);
        dVar19 = (double)CONCAT44(fStack_48,fStack_44);
      }
      else {
        dVar20 = (double)CONCAT44(fStack_38,fStack_3c);
        dVar19 = (double)CONCAT44(fStack_44,fStack_48);
        in_xd4 = (double)CONCAT44(uStack_34,fStack_38);
        in_xd2 = (double)CONCAT44(uStack_40,fStack_44);
      }
      fVar17 = (float)((ulonglong)dVar20 >> 0x20);
      if (cVar28 == '\0') {
        fVar21 = (float)((ulonglong)dVar19 >> 0x20) - fVar17;
        dVar19 = (double)CONCAT44(fVar21,(SUB84(dVar19,0) - SUB84(dVar20,0)) / fVar21);
      }
      else {
        dVar19 = (dVar19 - dVar20) - dVar20;
        dVar19 = dVar19 / dVar19;
      }
      if (cVar29 == '\0') {
        ppdVar15[6] = (double *)SUB84(dVar19,0);
      }
      else {
        *(double *)(ppdVar15 + 6) = in_xd2;
      }
      if (cVar28 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) * fVar17);
      }
      else {
        dVar19 = dVar19 * dVar20;
      }
      if (cVar28 == '\0') {
        fVar17 = -SUB84(dVar19,0) + SUB84(dVar20,0);
      }
      else {
        fVar17 = SUB84((double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),-SUB84(dVar19,0)) + dVar20,
                       0);
      }
      if (cVar29 == '\0') {
        ppdVar15[0x11] = (double *)fVar17;
      }
      else {
        *(double *)(ppdVar15 + 0x11) = in_xd2;
      }
      ppdVar15[4] = (double *)0x0;
    }
    else {
      if (cVar29 == '\0') {
        dVar20 = (double)CONCAT44(fVar17,0x3ccccccd);
      }
      else {
        in_xd2 = -7.993607630185699e-16;
        dVar20 = dVar19;
      }
      if (cVar28 == '\0') {
        bVar27 = (float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0) < SUB84(dVar19,0);
      }
      else {
        bVar27 = dVar20 + dVar20 < dVar19;
      }
      if (bVar27) goto LAB_8c212b84;
      if (cVar29 == '\0') {
        ppdVar15[0x16] = (double *)fStack_3c;
      }
      else {
        in_xd2 = (double)CONCAT44(fStack_38,fStack_3c);
        *(double *)(ppdVar15 + 0x16) = in_xd2;
      }
      ppdVar15[4] = (double *)0x1;
    }
    if (cVar29 == '\0') {
      dVar20 = (double)CONCAT44(fStack_3c,fStack_48);
    }
    else {
      in_xd2 = (double)CONCAT44(fStack_44,fStack_48);
      dVar20 = (double)CONCAT44(fStack_38,fStack_3c);
    }
    if (cVar28 == '\0') {
      dVar20 = (double)CONCAT44(((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0)) *
                                SUB84(dVar24,0),SUB84(dVar20,0));
    }
    else {
      dVar20 = (dVar20 + dVar20) * dVar24;
    }
    if (cVar29 == '\0') {
      ppdVar15[0x5d] = (double *)(int)((ulonglong)dVar20 >> 0x20);
      dVar20 = (double)CONCAT44(fStack_38,fStack_44);
    }
    else {
      *(double *)(ppdVar15 + 0x5d) = dVar20;
      dVar20 = (double)CONCAT44(uStack_34,fStack_38);
      in_xd2 = (double)CONCAT44(uStack_40,fStack_44);
    }
    if (cVar28 == '\0') {
      dVar20 = (double)CONCAT44(((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0)) *
                                SUB84(dVar24,0),SUB84(dVar20,0));
    }
    else {
      dVar20 = (dVar20 + dVar20) * dVar24;
    }
    iVar3 = (int)((ulonglong)dVar20 >> 0x20);
    if (cVar29 == '\0') {
      ppdVar15[0x5e] = (double *)iVar3;
    }
    else {
      *(double *)(ppdVar15 + 0x5e) = dVar20;
    }
    iVar5 = (int)ppdVar15[1];
    if (cVar29 == '\0') {
      fStack_54 = *(float *)(iVar5 + 0x24);
      fStack_50 = *(float *)(iVar5 + 0x28);
      dVar20 = (double)CONCAT44(iVar3,*(undefined4 *)(iVar5 + 0x2c));
      uStack_4c = *(undefined4 *)(iVar5 + 0x2c);
    }
    else {
      fStack_54 = (float)*(undefined8 *)(iVar5 + 0x24);
      fStack_50 = (float)*(undefined8 *)(iVar5 + 0x28);
      in_xd2 = *(double *)(iVar5 + 0x2c);
      uStack_4c = SUB84(in_xd2,0);
      fStack_48 = (float)((ulonglong)in_xd2 >> 0x20);
    }
    ppdVar15[3] = (double *)0x0;
    ppdVar15[0xe] = (double *)(uint)(ppdVar15[4] == (double *)0x0);
    do {
      ar4 = *(double **)((int)ppdVar15 + 4);
      iVar3 = *(int *)((int)ppdVar15 + 0xc);
      if (cVar29 == '\0') {
        fStack_60 = *(float *)((int)ar4 + iVar3);
        fStack_5c = *(float *)((int)ar4 + iVar3 + 4);
        uStack_58 = *(undefined4 *)((int)ar4 + iVar3 + 8);
        dVar19 = (double)CONCAT44(fStack_54,fStack_60);
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fStack_60);
        fVar17 = fStack_60;
      }
      else {
        fStack_60 = (float)*(undefined8 *)((int)ar4 + iVar3);
        fStack_5c = (float)*(undefined8 *)((int)ar4 + iVar3 + 4);
        uVar26 = *(undefined8 *)((int)ar4 + iVar3 + 8);
        uStack_58 = (undefined4)uVar26;
        fStack_54 = (float)((ulonglong)uVar26 >> 0x20);
        in_xd2 = (double)CONCAT44(fStack_5c,fStack_60);
        dVar19 = (double)CONCAT44(fStack_50,fStack_54);
        fVar17 = fStack_54;
        in_xd4 = in_xd2;
      }
      fVar21 = (float)((ulonglong)dVar19 >> 0x20);
      if (cVar28 == '\0') {
        bVar27 = fVar21 < SUB84(dVar20,0) + SUB84(dVar25,0);
      }
      else {
        bVar27 = dVar19 < dVar20 + dVar25;
      }
      iVar3 = 0;
      if (bVar27) {
LAB_8c212c46:
        if (cVar29 == '\0') {
          dVar19 = (double)CONCAT44(fStack_54,fStack_50);
          dVar20 = (double)CONCAT44(fStack_60,fStack_5c);
        }
        else {
          dVar19 = (double)CONCAT44(fStack_50,fStack_54);
          dVar20 = (double)CONCAT44(fStack_5c,fStack_60);
          in_xd4 = (double)CONCAT44(uStack_4c,fStack_50);
          in_xd2 = (double)CONCAT44(uStack_58,fStack_5c);
        }
        fVar17 = (float)((ulonglong)dVar19 >> 0x20);
        if (cVar28 == '\0') {
          fVar21 = (float)((ulonglong)dVar20 >> 0x20) - fVar17;
          dVar20 = (double)CONCAT44(fVar21,(SUB84(dVar20,0) - SUB84(dVar19,0)) / fVar21);
        }
        else {
          dVar20 = (dVar20 - dVar19) - dVar19;
          dVar20 = dVar20 / dVar20;
        }
        if (cVar29 == '\0') {
          *(float *)((int)ppdVar15 + 0x20) = SUB84(dVar20,0);
        }
        else {
          *(double *)((int)ppdVar15 + 0x20) = in_xd2;
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) * fVar17);
        }
        else {
          dVar20 = dVar20 * dVar19;
        }
        if (cVar28 == '\0') {
          fVar17 = -SUB84(dVar20,0) + SUB84(dVar19,0);
        }
        else {
          fVar17 = SUB84((double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),-SUB84(dVar20,0)) +
                         dVar19,0);
        }
        if (cVar29 == '\0') {
          *(float *)((int)ppdVar15 + 0x5c) = fVar17;
        }
        else {
          *(double *)((int)ppdVar15 + 0x5c) = in_xd2;
        }
        iVar5 = 0;
      }
      else {
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(fVar17,0x3ccccccd);
        }
        else {
          in_xd2 = 6.712045148555942e-134;
          dVar20 = in_xd4;
        }
        if (cVar28 == '\0') {
          fVar17 = (float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0);
          dVar20 = (double)CONCAT44(fVar17,SUB84(dVar20,0));
          bVar27 = fVar17 < fVar21;
        }
        else {
          dVar20 = dVar20 + dVar20;
          bVar27 = dVar20 < dVar19;
        }
        if (bVar27) goto LAB_8c212c46;
        fVar17 = fStack_54;
        if (cVar29 != '\0') {
          in_xd2 = (double)CONCAT44(fStack_50,fStack_54);
          fVar17 = SUB84(dVar20,0);
        }
        iVar5 = 1;
        if (cVar29 == '\0') {
          *(float *)((int)ppdVar15 + 0x6c) = fVar17;
        }
        else {
          *(double *)((int)ppdVar15 + 0x6c) = in_xd2;
        }
      }
      uVar1 = SUB84(dVar24,0);
      if (*(int *)((int)ppdVar15 + 0x38) == 0) {
        if (iVar5 != 0) goto LAB_8c212ccc;
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x58),
                                    *(undefined4 *)((int)ppdVar15 + 0x5c));
          in_dr0 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x20),SUB84(in_dr0,0));
          dVar24 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x58),uVar1);
        }
        else {
          dVar20 = *(double *)((int)ppdVar15 + 0x58);
          in_xd2 = *(double *)((int)ppdVar15 + 0x5c);
          in_dr0 = *(double *)((int)ppdVar15 + 0x20);
          dVar24 = dVar20;
        }
LAB_8c212ce0:
        if (cVar28 == '\0') {
          dVar20 = (double)(ulonglong)
                           (uint)((float)((ulonglong)in_dr0 >> 0x20) *
                                  (float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0));
        }
        if (cVar29 == '\0') {
          *(int *)((int)ppdVar15 + 0x2c) = SUB84(dVar20,0);
        }
        else {
          *(double *)((int)ppdVar15 + 0x2c) = in_xd2;
        }
      }
      else {
        if (iVar5 == 0) {
          if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x18),
                                      *(undefined4 *)((int)ppdVar15 + 0x20));
          }
          else {
            in_xd2 = *(double *)((int)ppdVar15 + 0x20);
            dVar20 = *(double *)((int)ppdVar15 + 0x18);
          }
          if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                      SUB84(dVar20,0) + SUB84(dVar25,0));
          }
          else {
            dVar20 = dVar20 + dVar25;
          }
          fVar17 = (float)((ulonglong)dVar20 >> 0x20);
          if (cVar28 != '\0' || SUB84(dVar20,0) <= fVar17) {
            if (cVar29 == '\0') {
              dVar20 = (double)CONCAT44(fVar17,0x3ccccccd);
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                        *(undefined4 *)((int)ppdVar15 + 0x20));
            }
            else {
              in_xd2 = 6.712045148555942e-134;
            }
            if (cVar28 == '\0') {
              fVar17 = SUB84(in_dr0,0) + SUB84(dVar20,0);
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar17);
              bVar27 = fVar17 < (float)((ulonglong)dVar20 >> 0x20);
            }
            else {
              in_dr0 = in_dr0 + dVar20;
              bVar27 = in_dr0 < dVar20;
            }
            if (!bVar27) goto LAB_8c212cf0;
          }
          if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x5c),
                                      *(undefined4 *)((int)ppdVar15 + 0x44));
            dVar16 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x18),
                                      *(undefined4 *)((int)ppdVar15 + 0x20));
          }
          else {
            in_xd2 = *(double *)((int)ppdVar15 + 0x44);
            dVar20 = *(double *)((int)ppdVar15 + 0x5c);
            dVar16 = *(double *)((int)ppdVar15 + 0x18);
          }
          if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar20,0),
                                      SUB84(dVar20,0));
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                      SUB84(dVar16,0));
          }
          else {
            dVar20 = dVar20 - dVar20;
            dVar16 = dVar16 - dVar16;
          }
          dVar24 = dVar20;
          if (cVar29 == '\0') {
            dVar24 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),uVar1);
          }
          if (cVar28 == '\0') {
            dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) /
                                      (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar24,0));
          }
          else {
            dVar24 = dVar24 / dVar16;
          }
          if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x18),SUB84(dVar20,0));
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar16,0));
          }
          else {
            dVar20 = *(double *)((int)ppdVar15 + 0x18);
            in_dr0 = dVar24;
          }
          goto LAB_8c212ce0;
        }
LAB_8c212ccc:
        if (*(int *)((int)ppdVar15 + 0x10) == 0) {
          if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x18),
                                      *(undefined4 *)((int)ppdVar15 + 0x44));
            in_dr0 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x6c),SUB84(in_dr0,0));
            dVar24 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x6c),uVar1);
          }
          else {
            in_xd2 = *(double *)((int)ppdVar15 + 0x44);
            dVar20 = *(double *)((int)ppdVar15 + 0x18);
            in_dr0 = *(double *)((int)ppdVar15 + 0x6c);
            dVar24 = *(double *)((int)ppdVar15 + 0x6c);
          }
          goto LAB_8c212ce0;
        }
LAB_8c212cf0:
        iVar3 = 1;
      }
      if (iVar3 == 0) {
        *(undefined4 *)((int)ppdVar15 + 0x3c) = 0;
        *(undefined4 *)((int)ppdVar15 + 0x40) = 0;
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(fStack_3c,SUB84(in_dr0,0));
        }
        else {
          dVar20 = (double)CONCAT44(fStack_38,fStack_3c);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) -
                                    (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar24;
        }
        uVar2 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)ppdVar15 + 0x80) = uVar2;
          puVar12 = (undefined8 *)((int)ppdVar15 + -4);
          *(uint *)((int)ppdVar15 + -4) = uVar2;
          dVar16 = (double)CONCAT44(fStack_38,*(undefined4 *)((int)ppdVar15 + 0x2c));
        }
        else {
          *(double *)((int)ppdVar15 + 0x80) = dVar20;
          puVar12 = (undefined8 *)((int)ppdVar15 + -8);
          *(double *)((int)ppdVar15 + -8) = dVar20;
          in_xd2 = *(double *)((int)ppdVar15 + 0x28);
          dVar16 = (double)CONCAT44(uStack_34,fStack_38);
        }
        if (cVar28 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
          uVar1 = (undefined4)((ulonglong)dVar16 >> 0x20);
          dVar16 = (double)CONCAT44(uVar1,uVar1);
          *(undefined4 *)((int)puVar12 + 0x94) = uVar1;
        }
        else {
          *(double *)((int)puVar12 + 0x94) = dVar16;
          in_xd2 = dVar16;
        }
        if (cVar28 == '\0') {
          uVar2 = SUB84(dVar16,0);
        }
        else {
          uVar2 = SUB84(dVar16 * dVar16,0);
        }
        if (cVar29 == '\0') {
          uVar26 = CONCAT44(*(undefined4 *)puVar12,SUB84(dVar20,0));
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          uVar2 = SUB84(dVar19,0);
        }
        else {
          uVar26 = *puVar12;
          puVar12 = puVar12 + 1;
        }
        FUN_8c258030(0,iVar5,ar4,ar5);
        if (cVar29 == '\0') {
          *(int *)((int)puVar12 + 0x128) = (int)((ulonglong)uVar26 >> 0x20);
          dVar20 = (double)CONCAT44(fStack_48,(int)uVar26);
        }
        else {
          *(undefined8 *)((int)puVar12 + 0x128) = uVar26;
          dVar20 = (double)CONCAT44(fStack_44,fStack_48);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) -
                                    (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar24;
        }
        uVar18 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)puVar12 + 0xb8) = uVar18;
          puVar7 = (undefined8 *)((int)puVar12 + -4);
          *(uint *)((int)puVar12 + -4) = uVar18;
          dVar19 = (double)CONCAT44(fStack_44,*(undefined4 *)((int)puVar12 + 0x2c));
        }
        else {
          *(double *)((int)puVar12 + 0xb8) = dVar20;
          puVar7 = (undefined8 *)((int)puVar12 + -8);
          *(double *)((int)puVar12 + -8) = dVar20;
          in_xd2 = *(double *)((int)puVar12 + 0x28);
          dVar19 = (double)CONCAT44(uStack_40,fStack_44);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        fVar17 = (float)((ulonglong)dVar19 >> 0x20);
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar18;
          dVar19 = (double)CONCAT44(fVar17,fVar17);
          *(float *)(puVar7 + 0x17) = fVar17;
        }
        else {
          puVar7[0x17] = dVar19;
          in_xd2 = dVar19;
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44(fVar17 * SUB84(dVar19,0),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 * dVar19;
        }
        if (cVar29 == '\0') {
          uVar26 = CONCAT44(*(undefined4 *)puVar7,SUB84(dVar20,0));
          puVar8 = (undefined8 *)((int)puVar7 + 4);
        }
        else {
          uVar26 = *puVar7;
          puVar8 = puVar7 + 1;
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)uVar26 >> 0x20) * (float)uVar26 +
                                    (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0));
        }
        dVar20 = dVar19;
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
        }
        uVar1 = SUB84(dVar20,0);
        FUN_8c258030(iVar3,iVar5,ar4,ar5);
        if (cVar29 == '\0') {
          *(int *)((int)puVar8 + 0x118) = (int)((ulonglong)uVar26 >> 0x20);
          dVar20 = (double)CONCAT44(fStack_3c,(int)uVar26);
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),fStack_48);
        }
        else {
          *(undefined8 *)((int)puVar8 + 0x118) = uVar26;
          dVar20 = (double)CONCAT44(fStack_38,fStack_3c);
          in_xd2 = (double)CONCAT44(fStack_44,fStack_48);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar19;
        }
        uVar2 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)puVar8 + 0x10c) = uVar2;
          pdVar6 = (double *)((int)puVar8 + -4);
          *(uint *)((int)puVar8 + -4) = uVar2;
          dVar19 = (double)CONCAT44(fStack_38,fStack_44);
        }
        else {
          *(double *)((int)puVar8 + 0x10c) = dVar20;
          pdVar6 = (double *)((int)puVar8 + -8);
          *(double *)((int)puVar8 + -8) = dVar20;
          in_xd2 = (double)CONCAT44(uStack_40,fStack_44);
          dVar19 = (double)CONCAT44(uStack_34,fStack_38);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
          uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
          dVar19 = (double)CONCAT44(uVar22,uVar22);
          *(undefined4 *)(pdVar6 + 0x1d) = uVar22;
        }
        else {
          pdVar6[0x1d] = dVar19;
          in_xd2 = dVar19;
        }
        if (cVar28 == '\0') {
          uVar22 = SUB84(dVar19,0);
        }
        else {
          uVar22 = SUB84(dVar19 * dVar19,0);
        }
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar20,0));
          pdVar6 = (double *)((int)pdVar6 + 4);
          uVar22 = uVar1;
        }
        else {
          dVar20 = *pdVar6;
          pdVar6 = pdVar6 + 1;
        }
        FUN_8c258030(iVar3,iVar5,ar4,ar5);
        dVar19 = dVar20;
        if (cVar29 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),uVar22);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) +
                                    (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 + dVar25;
        }
        if (cVar29 == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 0x128),
                                    *(undefined4 *)((int)pdVar6 + 0x118));
        }
        else {
          in_xd2 = *(double *)((int)pdVar6 + 0x118);
          dVar16 = *(double *)((int)pdVar6 + 0x128);
        }
        if (cVar28 == '\0') {
          bVar27 = (float)((ulonglong)dVar19 >> 0x20) <
                   (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0) + SUB84(dVar25,0);
        }
        else {
          bVar27 = dVar19 < dVar16 + dVar16 + dVar25;
        }
        if (!bVar27) {
          *(undefined4 *)((int)pdVar6 + 0x3c) = 1;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(fStack_54,SUB84(dVar20,0));
        }
        else {
          dVar20 = (double)CONCAT44(fStack_50,fStack_54);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) -
                                    (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar24;
        }
        uVar2 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)pdVar6 + 0xa4) = uVar2;
          puVar12 = (undefined8 *)((int)pdVar6 + -4);
          *(uint *)((int)pdVar6 + -4) = uVar2;
          dVar16 = (double)CONCAT44(fStack_50,*(undefined4 *)((int)pdVar6 + 0x2c));
        }
        else {
          *(double *)((int)pdVar6 + 0xa4) = dVar20;
          puVar12 = (undefined8 *)((int)pdVar6 + -8);
          *(double *)((int)pdVar6 + -8) = dVar20;
          in_xd2 = *(double *)((int)pdVar6 + 0x28);
          dVar16 = (double)CONCAT44(uStack_4c,fStack_50);
        }
        if (cVar28 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
          uVar1 = (undefined4)((ulonglong)dVar16 >> 0x20);
          dVar16 = (double)CONCAT44(uVar1,uVar1);
          *(undefined4 *)((int)puVar12 + 0xac) = uVar1;
        }
        else {
          *(double *)((int)puVar12 + 0xac) = dVar16;
          in_xd2 = dVar16;
        }
        if (cVar28 == '\0') {
          uVar2 = SUB84(dVar16,0);
        }
        else {
          uVar2 = SUB84(dVar16 * dVar16,0);
        }
        if (cVar29 == '\0') {
          uVar26 = CONCAT44(*(undefined4 *)puVar12,SUB84(dVar20,0));
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          uVar2 = SUB84(dVar19,0);
        }
        else {
          uVar26 = *puVar12;
          puVar12 = puVar12 + 1;
        }
        FUN_8c258030(iVar3,iVar5,ar4,ar5);
        if (cVar29 == '\0') {
          *(int *)((int)puVar12 + 300) = (int)((ulonglong)uVar26 >> 0x20);
          dVar20 = (double)CONCAT44(fStack_60,(int)uVar26);
        }
        else {
          *(undefined8 *)((int)puVar12 + 300) = uVar26;
          dVar20 = (double)CONCAT44(fStack_5c,fStack_60);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) -
                                    (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar24;
        }
        uVar18 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)puVar12 + 0xd0) = uVar18;
          puVar7 = (undefined8 *)((int)puVar12 + -4);
          *(uint *)((int)puVar12 + -4) = uVar18;
          dVar19 = (double)CONCAT44(fStack_5c,*(undefined4 *)((int)puVar12 + 0x2c));
        }
        else {
          *(double *)((int)puVar12 + 0xd0) = dVar20;
          puVar7 = (undefined8 *)((int)puVar12 + -8);
          *(double *)((int)puVar12 + -8) = dVar20;
          in_xd2 = *(double *)((int)puVar12 + 0x28);
          dVar19 = (double)CONCAT44(uStack_58,fStack_5c);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        fVar17 = (float)((ulonglong)dVar19 >> 0x20);
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar18;
          dVar19 = (double)CONCAT44(fVar17,fVar17);
          *(float *)((int)puVar7 + 0xb4) = fVar17;
        }
        else {
          *(double *)((int)puVar7 + 0xb4) = dVar19;
          in_xd2 = dVar19;
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44(fVar17 * SUB84(dVar19,0),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 * dVar19;
        }
        if (cVar29 == '\0') {
          uVar26 = CONCAT44(*(undefined4 *)puVar7,SUB84(dVar20,0));
          puVar9 = (undefined8 *)((int)puVar7 + 4);
        }
        else {
          uVar26 = *puVar7;
          puVar9 = puVar7 + 1;
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)uVar26 >> 0x20) * (float)uVar26 +
                                    (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0));
        }
        dVar20 = dVar19;
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
        }
        uVar1 = SUB84(dVar20,0);
        FUN_8c258030(iVar3,iVar5,ar4,ar5);
        if (cVar29 == '\0') {
          *(int *)((int)puVar9 + 0x124) = (int)((ulonglong)uVar26 >> 0x20);
          dVar20 = (double)CONCAT44(fStack_54,(int)uVar26);
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),fStack_60);
        }
        else {
          *(undefined8 *)((int)puVar9 + 0x124) = uVar26;
          dVar20 = (double)CONCAT44(fStack_50,fStack_54);
          in_xd2 = (double)CONCAT44(fStack_5c,fStack_60);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar19;
        }
        uVar2 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)puVar9 + 0x100) = uVar2;
          pdVar6 = (double *)((int)puVar9 + -4);
          *(uint *)((int)puVar9 + -4) = uVar2;
          dVar19 = (double)CONCAT44(fStack_50,fStack_5c);
        }
        else {
          *(double *)((int)puVar9 + 0x100) = dVar20;
          pdVar6 = (double *)((int)puVar9 + -8);
          *(double *)((int)puVar9 + -8) = dVar20;
          in_xd2 = (double)CONCAT44(uStack_58,fStack_5c);
          dVar19 = (double)CONCAT44(uStack_4c,fStack_50);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
          uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
          dVar19 = (double)CONCAT44(uVar22,uVar22);
          *(undefined4 *)((int)pdVar6 + 0xec) = uVar22;
        }
        else {
          *(double *)((int)pdVar6 + 0xec) = dVar19;
          in_xd2 = dVar19;
        }
        if (cVar28 == '\0') {
          uVar22 = SUB84(dVar19,0);
        }
        else {
          uVar22 = SUB84(dVar19 * dVar19,0);
        }
        if (cVar29 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar20,0));
          ppdVar15 = (double **)((int)pdVar6 + 4);
          uVar22 = uVar1;
        }
        else {
          in_dr0 = *pdVar6;
          ppdVar15 = (double **)(pdVar6 + 1);
        }
        FUN_8c258030(iVar3,iVar5,ar4,ar5);
        dVar19 = in_dr0;
        if (cVar29 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uVar22);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) +
                                    (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 + dVar25;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 300),
                                    *(undefined4 *)((int)ppdVar15 + 0x124));
        }
        else {
          in_xd2 = *(double *)((int)ppdVar15 + 0x124);
          dVar20 = *(double *)((int)ppdVar15 + 300);
        }
        if (cVar28 == '\0') {
          fVar17 = (float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0) + SUB84(dVar25,0);
          dVar20 = (double)CONCAT44(fVar17,SUB84(dVar20,0));
          bVar27 = (float)((ulonglong)dVar19 >> 0x20) < fVar17;
        }
        else {
          dVar20 = dVar20 + dVar20 + dVar25;
          bVar27 = dVar19 < dVar20;
        }
        if (!bVar27) {
          *(undefined4 *)((int)ppdVar15 + 0x40) = 1;
        }
        if ((*(int *)((int)ppdVar15 + 0x3c) != 0) && (*(int *)((int)ppdVar15 + 0x40) != 0)) {
          *(undefined4 *)((int)ppdVar15 + 0x7c) = 1;
          break;
        }
      }
      if (cVar29 == '\0') {
        fStack_54 = fStack_60;
        fStack_50 = fStack_5c;
        dVar20 = (double)CONCAT44(fStack_5c,uStack_58);
        uStack_4c = uStack_58;
      }
      else {
        fStack_54 = fStack_60;
        dVar20 = (double)CONCAT44(uStack_58,fStack_5c);
        fStack_50 = fStack_5c;
        in_xd2 = (double)CONCAT44(fStack_60,uStack_58);
        uStack_4c = uStack_58;
        fStack_48 = fStack_60;
      }
      uStack_4c = uStack_58;
      fStack_50 = fStack_5c;
      fStack_54 = fStack_60;
      iVar3 = *(int *)((int)ppdVar15 + 0xc);
      *(uint *)((int)ppdVar15 + 0xc) = iVar3 + 0xcU;
    } while (iVar3 + 0xcU < 0x30);
    if (*(int *)((int)ppdVar15 + 0x7c) != 0) break;
    if (cVar29 == '\0') {
      fStack_3c = fStack_48;
      fStack_38 = fStack_44;
      dVar20 = (double)CONCAT44(fStack_44,uStack_40);
      uStack_34 = uStack_40;
    }
    else {
      fStack_3c = fStack_48;
      dVar20 = (double)CONCAT44(uStack_40,fStack_44);
      fStack_38 = fStack_44;
      in_xd2 = (double)CONCAT44(fStack_48,uStack_40);
      uStack_34 = uStack_40;
      fStack_30 = fStack_48;
    }
    uStack_34 = uStack_40;
    fStack_38 = fStack_44;
    fStack_3c = fStack_48;
    uVar2 = *(int *)((int)ppdVar15 + 8) + 0xc;
  }
  iVar3 = (int)*ppdVar15;
  if (cVar29 == '\0') {
    fStack_3c = *(float *)(iVar3 + 0x24);
    fStack_38 = *(float *)(iVar3 + 0x28);
    dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(iVar3 + 0x2c));
    uStack_34 = *(undefined4 *)(iVar3 + 0x2c);
  }
  else {
    fStack_3c = (float)*(undefined8 *)(iVar3 + 0x24);
    fStack_38 = (float)*(undefined8 *)(iVar3 + 0x28);
    in_xd2 = *(double *)(iVar3 + 0x2c);
    uStack_34 = SUB84(in_xd2,0);
    fStack_30 = (float)((ulonglong)in_xd2 >> 0x20);
  }
  ppdVar15[2] = (double *)0x0;
  while (ppdVar15[2] < 0x30) {
    iVar5 = (int)*ppdVar15;
    iVar3 = (int)ppdVar15[2];
    if (cVar29 == '\0') {
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(iVar5 + iVar3));
    }
    else {
      in_xd2 = *(double *)(iVar5 + iVar3);
    }
    if (cVar29 == '\0') {
      fStack_48 = SUB84(dVar20,0);
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(iVar5 + iVar3 + 4))
      ;
    }
    else {
      fStack_48 = SUB84(in_xd2,0);
      in_xd2 = *(double *)(iVar5 + iVar3 + 4);
    }
    if (cVar29 == '\0') {
      fStack_44 = SUB84(dVar20,0);
      uStack_40 = *(undefined4 *)(iVar5 + iVar3 + 8);
      dVar19 = (double)CONCAT44(fStack_3c,fStack_48);
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fStack_48);
      fVar17 = fStack_48;
    }
    else {
      fStack_44 = SUB84(in_xd2,0);
      uVar26 = *(undefined8 *)(iVar5 + iVar3 + 8);
      uStack_40 = (undefined4)uVar26;
      fStack_3c = (float)((ulonglong)uVar26 >> 0x20);
      in_xd2 = (double)CONCAT44(fStack_44,fStack_48);
      dVar19 = (double)CONCAT44(fStack_38,fStack_3c);
      fVar17 = fStack_3c;
      in_xd4 = in_xd2;
    }
    fVar21 = (float)((ulonglong)dVar19 >> 0x20);
    if (cVar28 == '\0') {
      bVar27 = fVar21 < SUB84(dVar20,0) + SUB84(dVar25,0);
    }
    else {
      bVar27 = dVar19 < dVar20 + dVar25;
    }
    if (bVar27) {
LAB_8c212ef2:
      if (cVar29 == '\0') {
        dVar20 = (double)CONCAT44(uStack_34,fStack_3c);
        dVar19 = (double)CONCAT44(fStack_48,uStack_40);
      }
      else {
        in_xd4 = (double)CONCAT44(fStack_38,fStack_3c);
        dVar19 = (double)CONCAT44(fStack_44,fStack_48);
        dVar20 = (double)CONCAT44(fStack_30,uStack_34);
        in_xd2 = (double)CONCAT44(fStack_3c,uStack_40);
      }
      fVar17 = (float)((ulonglong)dVar20 >> 0x20);
      if (cVar28 == '\0') {
        fVar21 = (float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar20,0);
        dVar19 = (double)CONCAT44(fVar21,(SUB84(dVar19,0) - fVar17) / fVar21);
      }
      else {
        dVar19 = (dVar19 - dVar20) - dVar20;
        dVar19 = dVar19 / dVar19;
      }
      if (cVar29 == '\0') {
        ppdVar15[5] = (double *)SUB84(dVar19,0);
      }
      else {
        *(double *)(ppdVar15 + 5) = in_xd2;
      }
      if (cVar28 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) * SUB84(dVar20,0)
                                 );
      }
      else {
        dVar19 = dVar19 * dVar20;
      }
      if (cVar28 == '\0') {
        fVar17 = -SUB84(dVar19,0) + fVar17;
      }
      else {
        fVar17 = SUB84((double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),-SUB84(dVar19,0)) + dVar20,
                       0);
      }
      if (cVar29 == '\0') {
        ppdVar15[0x13] = (double *)fVar17;
      }
      else {
        *(double *)(ppdVar15 + 0x13) = in_xd2;
      }
      ppdVar15[4] = (double *)0x0;
    }
    else {
      if (cVar29 == '\0') {
        dVar20 = (double)CONCAT44(fVar17,0x3ccccccd);
      }
      else {
        in_xd2 = -3.6367901170526095e+156;
        dVar20 = in_xd4;
      }
      if (cVar28 == '\0') {
        bVar27 = (float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0) < fVar21;
      }
      else {
        bVar27 = dVar20 + dVar20 < dVar19;
      }
      if (bVar27) goto LAB_8c212ef2;
      if (cVar29 == '\0') {
        ppdVar15[0x15] = (double *)fStack_3c;
      }
      else {
        in_xd2 = (double)CONCAT44(fStack_38,fStack_3c);
        *(double *)(ppdVar15 + 0x15) = in_xd2;
      }
      ppdVar15[4] = (double *)0x1;
    }
    if (cVar29 == '\0') {
      dVar20 = (double)CONCAT44(fStack_3c,fStack_48);
    }
    else {
      in_xd2 = (double)CONCAT44(fStack_44,fStack_48);
      dVar20 = (double)CONCAT44(fStack_38,fStack_3c);
    }
    if (cVar28 == '\0') {
      dVar20 = (double)CONCAT44(((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0)) *
                                SUB84(dVar24,0),SUB84(dVar20,0));
    }
    else {
      dVar20 = (dVar20 + dVar20) * dVar24;
    }
    if (cVar29 == '\0') {
      ppdVar15[0x5d] = (double *)(int)((ulonglong)dVar20 >> 0x20);
      dVar20 = (double)CONCAT44(uStack_34,uStack_40);
    }
    else {
      *(double *)(ppdVar15 + 0x5d) = dVar20;
      dVar20 = (double)CONCAT44(fStack_30,uStack_34);
      in_xd2 = (double)CONCAT44(fStack_3c,uStack_40);
    }
    if (cVar28 == '\0') {
      dVar20 = (double)CONCAT44(((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0)) *
                                SUB84(dVar24,0),SUB84(dVar20,0));
    }
    else {
      dVar20 = (dVar20 + dVar20) * dVar24;
    }
    iVar3 = (int)((ulonglong)dVar20 >> 0x20);
    if (cVar29 == '\0') {
      ppdVar15[0x5f] = (double *)iVar3;
    }
    else {
      *(double *)(ppdVar15 + 0x5f) = dVar20;
    }
    iVar5 = (int)ppdVar15[1];
    if (cVar29 == '\0') {
      fStack_54 = *(float *)(iVar5 + 0x24);
      fStack_50 = *(float *)(iVar5 + 0x28);
      dVar20 = (double)CONCAT44(iVar3,*(undefined4 *)(iVar5 + 0x2c));
      uStack_4c = *(undefined4 *)(iVar5 + 0x2c);
    }
    else {
      fStack_54 = (float)*(undefined8 *)(iVar5 + 0x24);
      fStack_50 = (float)*(undefined8 *)(iVar5 + 0x28);
      in_xd2 = *(double *)(iVar5 + 0x2c);
      uStack_4c = SUB84(in_xd2,0);
      fStack_48 = (float)((ulonglong)in_xd2 >> 0x20);
    }
    ppdVar15[3] = (double *)0x0;
    ppdVar15[0xe] = (double *)(uint)(ppdVar15[4] == (double *)0x0);
    do {
      ar4 = *(double **)((int)ppdVar15 + 4);
      iVar3 = *(int *)((int)ppdVar15 + 0xc);
      if (cVar29 == '\0') {
        fStack_60 = *(float *)((int)ar4 + iVar3);
        fStack_5c = *(float *)((int)ar4 + iVar3 + 4);
        uStack_58 = *(undefined4 *)((int)ar4 + iVar3 + 8);
        dVar19 = (double)CONCAT44(fStack_54,fStack_60);
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fStack_60);
        fVar17 = fStack_60;
      }
      else {
        fStack_60 = (float)*(undefined8 *)((int)ar4 + iVar3);
        fStack_5c = (float)*(undefined8 *)((int)ar4 + iVar3 + 4);
        uVar26 = *(undefined8 *)((int)ar4 + iVar3 + 8);
        uStack_58 = (undefined4)uVar26;
        fStack_54 = (float)((ulonglong)uVar26 >> 0x20);
        in_xd2 = (double)CONCAT44(fStack_5c,fStack_60);
        dVar19 = (double)CONCAT44(fStack_50,fStack_54);
        fVar17 = fStack_54;
        in_xd4 = in_xd2;
      }
      fVar21 = (float)((ulonglong)dVar19 >> 0x20);
      if (cVar28 == '\0') {
        bVar27 = fVar21 < SUB84(dVar20,0) + SUB84(dVar25,0);
      }
      else {
        bVar27 = dVar19 < dVar20 + dVar25;
      }
      iVar3 = 0;
      if (bVar27) {
LAB_8c212f92:
        if (cVar29 == '\0') {
          dVar19 = (double)CONCAT44(uStack_4c,fStack_54);
          dVar20 = (double)CONCAT44(fStack_60,uStack_58);
        }
        else {
          in_xd4 = (double)CONCAT44(fStack_50,fStack_54);
          dVar20 = (double)CONCAT44(fStack_5c,fStack_60);
          dVar19 = (double)CONCAT44(fStack_48,uStack_4c);
          in_xd2 = (double)CONCAT44(fStack_54,uStack_58);
        }
        fVar17 = (float)((ulonglong)dVar19 >> 0x20);
        if (cVar28 == '\0') {
          fVar21 = (float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar19,0);
          dVar20 = (double)CONCAT44(fVar21,(SUB84(dVar20,0) - fVar17) / fVar21);
        }
        else {
          dVar20 = (dVar20 - dVar19) - dVar19;
          dVar20 = dVar20 / dVar20;
        }
        if (cVar29 == '\0') {
          *(float *)((int)ppdVar15 + 0x28) = SUB84(dVar20,0);
        }
        else {
          *(double *)((int)ppdVar15 + 0x28) = in_xd2;
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                    SUB84(dVar20,0) * SUB84(dVar19,0));
        }
        else {
          dVar20 = dVar20 * dVar19;
        }
        if (cVar28 == '\0') {
          fVar17 = -SUB84(dVar20,0) + fVar17;
        }
        else {
          fVar17 = SUB84((double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),-SUB84(dVar20,0)) +
                         dVar19,0);
        }
        if (cVar29 == '\0') {
          *(float *)((int)ppdVar15 + 100) = fVar17;
        }
        else {
          *(double *)((int)ppdVar15 + 100) = in_xd2;
        }
        iVar5 = 0;
      }
      else {
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(fVar17,0x3ccccccd);
        }
        else {
          in_xd2 = -3.6367901170526095e+156;
          dVar20 = in_xd4;
        }
        if (cVar28 == '\0') {
          fVar17 = (float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0);
          dVar20 = (double)CONCAT44(fVar17,SUB84(dVar20,0));
          bVar27 = fVar17 < fVar21;
        }
        else {
          dVar20 = dVar20 + dVar20;
          bVar27 = dVar20 < dVar19;
        }
        if (bVar27) goto LAB_8c212f92;
        fVar17 = fStack_54;
        if (cVar29 != '\0') {
          in_xd2 = (double)CONCAT44(fStack_50,fStack_54);
          fVar17 = SUB84(dVar20,0);
        }
        iVar5 = 1;
        if (cVar29 == '\0') {
          *(float *)((int)ppdVar15 + 0x70) = fVar17;
        }
        else {
          *(double *)((int)ppdVar15 + 0x70) = in_xd2;
        }
      }
      uVar1 = SUB84(dVar24,0);
      if (*(int *)((int)ppdVar15 + 0x38) == 0) {
        if (iVar5 != 0) goto LAB_8c213020;
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x54),
                                    *(undefined4 *)((int)ppdVar15 + 100));
          in_dr0 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x28),SUB84(in_dr0,0));
          dVar24 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x54),uVar1);
        }
        else {
          dVar20 = *(double *)((int)ppdVar15 + 0x54);
          in_xd2 = *(double *)((int)ppdVar15 + 100);
          in_dr0 = *(double *)((int)ppdVar15 + 0x28);
          dVar24 = dVar20;
        }
LAB_8c213034:
        if (cVar28 == '\0') {
          dVar20 = (double)(ulonglong)
                           (uint)((float)((ulonglong)in_dr0 >> 0x20) *
                                  (float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0));
        }
        if (cVar29 == '\0') {
          *(int *)((int)ppdVar15 + 0x30) = SUB84(dVar20,0);
        }
        else {
          *(double *)((int)ppdVar15 + 0x30) = in_xd2;
        }
      }
      else {
        if (iVar5 == 0) {
          if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x14),
                                      *(undefined4 *)((int)ppdVar15 + 0x28));
          }
          else {
            in_xd2 = *(double *)((int)ppdVar15 + 0x28);
            dVar20 = *(double *)((int)ppdVar15 + 0x14);
          }
          if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                      SUB84(dVar20,0) + SUB84(dVar25,0));
          }
          else {
            dVar20 = dVar20 + dVar25;
          }
          fVar17 = (float)((ulonglong)dVar20 >> 0x20);
          if (cVar28 != '\0' || SUB84(dVar20,0) <= fVar17) {
            if (cVar29 == '\0') {
              dVar20 = (double)CONCAT44(fVar17,0x3ccccccd);
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                        *(undefined4 *)((int)ppdVar15 + 0x28));
            }
            else {
              in_xd2 = 6.712045148555942e-134;
            }
            if (cVar28 == '\0') {
              fVar17 = SUB84(in_dr0,0) + SUB84(dVar20,0);
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar17);
              bVar27 = fVar17 < (float)((ulonglong)dVar20 >> 0x20);
            }
            else {
              in_dr0 = in_dr0 + dVar20;
              bVar27 = in_dr0 < dVar20;
            }
            if (!bVar27) goto LAB_8c213040;
          }
          if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 100),
                                      *(undefined4 *)((int)ppdVar15 + 0x4c));
            dVar16 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x14),
                                      *(undefined4 *)((int)ppdVar15 + 0x28));
          }
          else {
            in_xd2 = *(double *)((int)ppdVar15 + 0x4c);
            dVar20 = *(double *)((int)ppdVar15 + 100);
            dVar16 = *(double *)((int)ppdVar15 + 0x14);
          }
          if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar20,0),
                                      SUB84(dVar20,0));
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                      SUB84(dVar16,0));
          }
          else {
            dVar20 = dVar20 - dVar20;
            dVar16 = dVar16 - dVar16;
          }
          dVar24 = dVar20;
          if (cVar29 == '\0') {
            dVar24 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),uVar1);
          }
          if (cVar28 == '\0') {
            dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) /
                                      (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar24,0));
          }
          else {
            dVar24 = dVar24 / dVar16;
          }
          if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x14),SUB84(dVar20,0));
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar16,0));
          }
          else {
            dVar20 = *(double *)((int)ppdVar15 + 0x14);
            in_dr0 = dVar24;
          }
          goto LAB_8c213034;
        }
LAB_8c213020:
        if (*(int *)((int)ppdVar15 + 0x10) == 0) {
          if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x14),
                                      *(undefined4 *)((int)ppdVar15 + 0x4c));
            in_dr0 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x70),SUB84(in_dr0,0));
            dVar24 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x70),uVar1);
          }
          else {
            in_xd2 = *(double *)((int)ppdVar15 + 0x4c);
            dVar20 = *(double *)((int)ppdVar15 + 0x14);
            in_dr0 = *(double *)((int)ppdVar15 + 0x70);
            dVar24 = *(double *)((int)ppdVar15 + 0x70);
          }
          goto LAB_8c213034;
        }
LAB_8c213040:
        iVar3 = 1;
      }
      if (iVar3 == 0) {
        *(undefined4 *)((int)ppdVar15 + 0x40) = 0;
        *(undefined4 *)((int)ppdVar15 + 0x3c) = 0;
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(fStack_3c,SUB84(in_dr0,0));
        }
        else {
          dVar20 = (double)CONCAT44(fStack_38,fStack_3c);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) -
                                    (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar24;
        }
        uVar2 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)ppdVar15 + 0x84) = uVar2;
          puVar12 = (undefined8 *)((int)ppdVar15 + -4);
          *(uint *)((int)ppdVar15 + -4) = uVar2;
          dVar16 = (double)CONCAT44(uStack_34,*(undefined4 *)((int)ppdVar15 + 0x30));
        }
        else {
          *(double *)((int)ppdVar15 + 0x84) = dVar20;
          puVar12 = (undefined8 *)((int)ppdVar15 + -8);
          *(double *)((int)ppdVar15 + -8) = dVar20;
          in_xd2 = *(double *)((int)ppdVar15 + 0x2c);
          dVar16 = (double)CONCAT44(fStack_30,uStack_34);
        }
        if (cVar28 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
          uVar1 = (undefined4)((ulonglong)dVar16 >> 0x20);
          dVar16 = (double)CONCAT44(uVar1,uVar1);
          *(undefined4 *)((int)puVar12 + 0xa4) = uVar1;
        }
        else {
          *(double *)((int)puVar12 + 0xa4) = dVar16;
          in_xd2 = dVar16;
        }
        if (cVar28 == '\0') {
          uVar2 = SUB84(dVar16,0);
        }
        else {
          uVar2 = SUB84(dVar16 * dVar16,0);
        }
        if (cVar29 == '\0') {
          uVar26 = CONCAT44(*(undefined4 *)puVar12,SUB84(dVar20,0));
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          uVar2 = SUB84(dVar19,0);
        }
        else {
          uVar26 = *puVar12;
          puVar12 = puVar12 + 1;
        }
        FUN_8c258030(0,iVar5,ar4,ar5);
        if (cVar29 == '\0') {
          *(int *)((int)puVar12 + 0x138) = (int)((ulonglong)uVar26 >> 0x20);
          dVar20 = (double)CONCAT44(fStack_48,(int)uVar26);
        }
        else {
          *(undefined8 *)((int)puVar12 + 0x138) = uVar26;
          dVar20 = (double)CONCAT44(fStack_44,fStack_48);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) -
                                    (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar24;
        }
        uVar18 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)puVar12 + 0xc4) = uVar18;
          puVar7 = (undefined8 *)((int)puVar12 + -4);
          *(uint *)((int)puVar12 + -4) = uVar18;
          dVar19 = (double)CONCAT44(uStack_40,*(undefined4 *)((int)puVar12 + 0x30));
        }
        else {
          *(double *)((int)puVar12 + 0xc4) = dVar20;
          puVar7 = (undefined8 *)((int)puVar12 + -8);
          *(double *)((int)puVar12 + -8) = dVar20;
          in_xd2 = *(double *)((int)puVar12 + 0x2c);
          dVar19 = (double)CONCAT44(fStack_3c,uStack_40);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        fVar17 = (float)((ulonglong)dVar19 >> 0x20);
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar18;
          dVar19 = (double)CONCAT44(fVar17,fVar17);
          *(float *)((int)puVar7 + 0xcc) = fVar17;
        }
        else {
          *(double *)((int)puVar7 + 0xcc) = dVar19;
          in_xd2 = dVar19;
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44(fVar17 * SUB84(dVar19,0),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 * dVar19;
        }
        if (cVar29 == '\0') {
          uVar26 = CONCAT44(*(undefined4 *)puVar7,SUB84(dVar20,0));
          puVar10 = (undefined8 *)((int)puVar7 + 4);
        }
        else {
          uVar26 = *puVar7;
          puVar10 = puVar7 + 1;
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)uVar26 >> 0x20) * (float)uVar26 +
                                    (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0));
        }
        dVar20 = dVar19;
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
        }
        uVar1 = SUB84(dVar20,0);
        FUN_8c258030(iVar3,iVar5,ar4,ar5);
        if (cVar29 == '\0') {
          *(int *)((int)puVar10 + 0x110) = (int)((ulonglong)uVar26 >> 0x20);
          dVar20 = (double)CONCAT44(fStack_3c,(int)uVar26);
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),fStack_48);
        }
        else {
          *(undefined8 *)((int)puVar10 + 0x110) = uVar26;
          dVar20 = (double)CONCAT44(fStack_38,fStack_3c);
          in_xd2 = (double)CONCAT44(fStack_44,fStack_48);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar19;
        }
        uVar2 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)puVar10 + 0xf4) = uVar2;
          pdVar6 = (double *)((int)puVar10 + -4);
          *(uint *)((int)puVar10 + -4) = uVar2;
          dVar19 = (double)CONCAT44(uStack_34,uStack_40);
        }
        else {
          *(double *)((int)puVar10 + 0xf4) = dVar20;
          pdVar6 = (double *)((int)puVar10 + -8);
          *(double *)((int)puVar10 + -8) = dVar20;
          in_xd2 = (double)CONCAT44(fStack_3c,uStack_40);
          dVar19 = (double)CONCAT44(fStack_30,uStack_34);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
          uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
          dVar19 = (double)CONCAT44(uVar22,uVar22);
          *(undefined4 *)(pdVar6 + 0x21) = uVar22;
        }
        else {
          pdVar6[0x21] = dVar19;
          in_xd2 = dVar19;
        }
        if (cVar28 == '\0') {
          uVar22 = SUB84(dVar19,0);
        }
        else {
          uVar22 = SUB84(dVar19 * dVar19,0);
        }
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar20,0));
          pdVar6 = (double *)((int)pdVar6 + 4);
          uVar22 = uVar1;
        }
        else {
          dVar20 = *pdVar6;
          pdVar6 = pdVar6 + 1;
        }
        FUN_8c258030(iVar3,iVar5,ar4,ar5);
        dVar19 = dVar20;
        if (cVar29 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),uVar22);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) +
                                    (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 + dVar25;
        }
        if (cVar29 == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 0x138),
                                    *(undefined4 *)((int)pdVar6 + 0x110));
        }
        else {
          in_xd2 = *(double *)((int)pdVar6 + 0x110);
          dVar16 = *(double *)((int)pdVar6 + 0x138);
        }
        if (cVar28 == '\0') {
          bVar27 = (float)((ulonglong)dVar19 >> 0x20) <
                   (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0) + SUB84(dVar25,0);
        }
        else {
          bVar27 = dVar19 < dVar16 + dVar16 + dVar25;
        }
        if (!bVar27) {
          *(undefined4 *)((int)pdVar6 + 0x40) = 1;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(fStack_54,SUB84(dVar20,0));
        }
        else {
          dVar20 = (double)CONCAT44(fStack_50,fStack_54);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) -
                                    (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar24;
        }
        uVar2 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)pdVar6 + 0x9c) = uVar2;
          puVar12 = (undefined8 *)((int)pdVar6 + -4);
          *(uint *)((int)pdVar6 + -4) = uVar2;
          dVar16 = (double)CONCAT44(uStack_4c,*(undefined4 *)((int)pdVar6 + 0x30));
        }
        else {
          *(double *)((int)pdVar6 + 0x9c) = dVar20;
          puVar12 = (undefined8 *)((int)pdVar6 + -8);
          *(double *)((int)pdVar6 + -8) = dVar20;
          in_xd2 = *(double *)((int)pdVar6 + 0x2c);
          dVar16 = (double)CONCAT44(fStack_48,uStack_4c);
        }
        if (cVar28 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
          uVar1 = (undefined4)((ulonglong)dVar16 >> 0x20);
          dVar16 = (double)CONCAT44(uVar1,uVar1);
          *(undefined4 *)(puVar12 + 0x16) = uVar1;
        }
        else {
          puVar12[0x16] = dVar16;
          in_xd2 = dVar16;
        }
        if (cVar28 == '\0') {
          uVar2 = SUB84(dVar16,0);
        }
        else {
          uVar2 = SUB84(dVar16 * dVar16,0);
        }
        if (cVar29 == '\0') {
          uVar26 = CONCAT44(*(undefined4 *)puVar12,SUB84(dVar20,0));
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          uVar2 = SUB84(dVar19,0);
        }
        else {
          uVar26 = *puVar12;
          puVar12 = puVar12 + 1;
        }
        FUN_8c258030(iVar3,iVar5,ar4,ar5);
        if (cVar29 == '\0') {
          *(int *)((int)puVar12 + 0x130) = (int)((ulonglong)uVar26 >> 0x20);
          dVar20 = (double)CONCAT44(fStack_60,(int)uVar26);
        }
        else {
          *(undefined8 *)((int)puVar12 + 0x130) = uVar26;
          dVar20 = (double)CONCAT44(fStack_5c,fStack_60);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) -
                                    (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar24;
        }
        uVar18 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)puVar12 + 0xd4) = uVar18;
          puVar7 = (undefined8 *)((int)puVar12 + -4);
          *(uint *)((int)puVar12 + -4) = uVar18;
          dVar19 = (double)CONCAT44(uStack_58,*(undefined4 *)((int)puVar12 + 0x30));
        }
        else {
          *(double *)((int)puVar12 + 0xd4) = dVar20;
          puVar7 = (undefined8 *)((int)puVar12 + -8);
          *(double *)((int)puVar12 + -8) = dVar20;
          in_xd2 = *(double *)((int)puVar12 + 0x2c);
          dVar19 = (double)CONCAT44(fStack_54,uStack_58);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        fVar17 = (float)((ulonglong)dVar19 >> 0x20);
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar18;
          dVar19 = (double)CONCAT44(fVar17,fVar17);
          *(float *)((int)puVar7 + 0xdc) = fVar17;
        }
        else {
          *(double *)((int)puVar7 + 0xdc) = dVar19;
          in_xd2 = dVar19;
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44(fVar17 * SUB84(dVar19,0),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 * dVar19;
        }
        if (cVar29 == '\0') {
          uVar26 = CONCAT44(*(undefined4 *)puVar7,SUB84(dVar20,0));
          puVar11 = (undefined8 *)((int)puVar7 + 4);
        }
        else {
          uVar26 = *puVar7;
          puVar11 = puVar7 + 1;
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)uVar26 >> 0x20) * (float)uVar26 +
                                    (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0));
        }
        dVar20 = dVar19;
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
        }
        uVar1 = SUB84(dVar20,0);
        FUN_8c258030(iVar3,iVar5,ar4,ar5);
        if (cVar29 == '\0') {
          *(int *)((int)puVar11 + 0x120) = (int)((ulonglong)uVar26 >> 0x20);
          dVar20 = (double)CONCAT44(fStack_54,(int)uVar26);
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),fStack_60);
        }
        else {
          *(undefined8 *)((int)puVar11 + 0x120) = uVar26;
          dVar20 = (double)CONCAT44(fStack_50,fStack_54);
          in_xd2 = (double)CONCAT44(fStack_5c,fStack_60);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar19;
        }
        uVar2 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)puVar11 + 0xf0) = uVar2;
          pdVar6 = (double *)((int)puVar11 + -4);
          *(uint *)((int)puVar11 + -4) = uVar2;
          dVar19 = (double)CONCAT44(uStack_4c,uStack_58);
        }
        else {
          *(double *)((int)puVar11 + 0xf0) = dVar20;
          pdVar6 = (double *)((int)puVar11 + -8);
          *(double *)((int)puVar11 + -8) = dVar20;
          in_xd2 = (double)CONCAT44(fStack_54,uStack_58);
          dVar19 = (double)CONCAT44(fStack_48,uStack_4c);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
          uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
          dVar19 = (double)CONCAT44(uVar22,uVar22);
          *(undefined4 *)(pdVar6 + 0x1e) = uVar22;
        }
        else {
          pdVar6[0x1e] = dVar19;
          in_xd2 = dVar19;
        }
        if (cVar28 == '\0') {
          uVar22 = SUB84(dVar19,0);
        }
        else {
          uVar22 = SUB84(dVar19 * dVar19,0);
        }
        if (cVar29 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar20,0));
          ppdVar15 = (double **)((int)pdVar6 + 4);
          uVar22 = uVar1;
        }
        else {
          in_dr0 = *pdVar6;
          ppdVar15 = (double **)(pdVar6 + 1);
        }
        FUN_8c258030(iVar3,iVar5,ar4,ar5);
        dVar19 = in_dr0;
        if (cVar29 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uVar22);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) +
                                    (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 + dVar25;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x130),
                                    *(undefined4 *)((int)ppdVar15 + 0x120));
        }
        else {
          in_xd2 = *(double *)((int)ppdVar15 + 0x120);
          dVar20 = *(double *)((int)ppdVar15 + 0x130);
        }
        if (cVar28 == '\0') {
          fVar17 = (float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0) + SUB84(dVar25,0);
          dVar20 = (double)CONCAT44(fVar17,SUB84(dVar20,0));
          bVar27 = (float)((ulonglong)dVar19 >> 0x20) < fVar17;
        }
        else {
          dVar20 = dVar20 + dVar20 + dVar25;
          bVar27 = dVar19 < dVar20;
        }
        if (!bVar27) {
          *(undefined4 *)((int)ppdVar15 + 0x3c) = 1;
        }
        if ((*(int *)((int)ppdVar15 + 0x40) != 0) && (*(int *)((int)ppdVar15 + 0x3c) != 0)) {
          *(undefined4 *)((int)ppdVar15 + 0x74) = 1;
          break;
        }
      }
      if (cVar29 == '\0') {
        fStack_54 = fStack_60;
        fStack_50 = fStack_5c;
        dVar20 = (double)CONCAT44(fStack_5c,uStack_58);
        uStack_4c = uStack_58;
      }
      else {
        fStack_54 = fStack_60;
        dVar20 = (double)CONCAT44(uStack_58,fStack_5c);
        fStack_50 = fStack_5c;
        in_xd2 = (double)CONCAT44(fStack_60,uStack_58);
        uStack_4c = uStack_58;
        fStack_48 = fStack_60;
      }
      uStack_4c = uStack_58;
      fStack_50 = fStack_5c;
      fStack_54 = fStack_60;
      iVar3 = *(int *)((int)ppdVar15 + 0xc);
      *(uint *)((int)ppdVar15 + 0xc) = iVar3 + 0xcU;
    } while (iVar3 + 0xcU < 0x30);
    if (*(int *)((int)ppdVar15 + 0x74) != 0) break;
    if (cVar29 == '\0') {
      fStack_3c = fStack_48;
      fStack_38 = fStack_44;
      dVar20 = (double)CONCAT44(fStack_44,uStack_40);
      uStack_34 = uStack_40;
    }
    else {
      fStack_3c = fStack_48;
      dVar20 = (double)CONCAT44(uStack_40,fStack_44);
      fStack_38 = fStack_44;
      in_xd2 = (double)CONCAT44(fStack_48,uStack_40);
      uStack_34 = uStack_40;
      fStack_30 = fStack_48;
    }
    uStack_34 = uStack_40;
    fStack_38 = fStack_44;
    fStack_3c = fStack_48;
    *(int *)((int)ppdVar15 + 8) = *(int *)((int)ppdVar15 + 8) + 0xc;
  }
  iVar3 = (int)*ppdVar15;
  if (cVar29 == '\0') {
    fStack_3c = *(float *)(iVar3 + 0x24);
    fStack_38 = *(float *)(iVar3 + 0x28);
    dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(iVar3 + 0x2c));
    uStack_34 = *(undefined4 *)(iVar3 + 0x2c);
  }
  else {
    fStack_3c = (float)*(undefined8 *)(iVar3 + 0x24);
    fStack_38 = (float)*(undefined8 *)(iVar3 + 0x28);
    in_xd2 = *(double *)(iVar3 + 0x2c);
    uStack_34 = SUB84(in_xd2,0);
    fStack_30 = (float)((ulonglong)in_xd2 >> 0x20);
  }
  ppdVar15[2] = (double *)0x0;
  while (ppdVar15[2] < 0x30) {
    iVar5 = (int)*ppdVar15;
    iVar3 = (int)ppdVar15[2];
    if (cVar29 == '\0') {
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(iVar5 + iVar3));
    }
    else {
      in_xd2 = *(double *)(iVar5 + iVar3);
    }
    if (cVar29 == '\0') {
      fStack_48 = SUB84(dVar20,0);
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(iVar5 + iVar3 + 4))
      ;
    }
    else {
      fStack_48 = SUB84(in_xd2,0);
      in_xd2 = *(double *)(iVar5 + iVar3 + 4);
    }
    fVar17 = SUB84(dVar20,0);
    if (cVar29 == '\0') {
      fStack_44 = fVar17;
      uStack_40 = *(undefined4 *)(iVar5 + iVar3 + 8);
      dVar19 = (double)CONCAT44(fStack_38,fVar17);
      fVar21 = fVar17;
    }
    else {
      fStack_44 = SUB84(in_xd2,0);
      uVar26 = *(undefined8 *)(iVar5 + iVar3 + 8);
      uStack_40 = (undefined4)uVar26;
      fStack_3c = (float)((ulonglong)uVar26 >> 0x20);
      in_xd2 = (double)CONCAT44(uStack_40,fStack_44);
      dVar19 = (double)CONCAT44(uStack_34,fStack_38);
      fVar21 = fStack_38;
      in_xd4 = in_xd2;
    }
    fVar23 = (float)((ulonglong)dVar19 >> 0x20);
    if (cVar28 == '\0') {
      bVar27 = fVar23 < fVar17 + SUB84(dVar25,0);
    }
    else {
      bVar27 = dVar19 < dVar20 + dVar25;
    }
    if (bVar27) {
LAB_8c213244:
      if (cVar29 == '\0') {
        dVar20 = (double)CONCAT44(uStack_34,fStack_38);
        dVar19 = (double)CONCAT44(fStack_44,uStack_40);
      }
      else {
        in_xd2 = (double)CONCAT44(fStack_3c,uStack_40);
        dVar20 = (double)CONCAT44(fStack_30,uStack_34);
        in_xd4 = (double)CONCAT44(uStack_34,fStack_38);
        dVar19 = (double)CONCAT44(uStack_40,fStack_44);
      }
      fVar17 = (float)((ulonglong)dVar20 >> 0x20);
      if (cVar28 == '\0') {
        fVar21 = (float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar20,0);
        dVar19 = (double)CONCAT44(fVar21,(SUB84(dVar19,0) - fVar17) / fVar21);
      }
      else {
        dVar19 = (dVar19 - dVar20) - dVar20;
        dVar19 = dVar19 / dVar19;
      }
      if (cVar29 == '\0') {
        ppdVar15[7] = (double *)SUB84(dVar19,0);
      }
      else {
        *(double *)(ppdVar15 + 7) = in_xd2;
      }
      if (cVar28 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) * SUB84(dVar20,0)
                                 );
      }
      else {
        dVar19 = dVar19 * dVar20;
      }
      if (cVar28 == '\0') {
        fVar17 = -SUB84(dVar19,0) + fVar17;
      }
      else {
        fVar17 = SUB84((double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),-SUB84(dVar19,0)) + dVar20,
                       0);
      }
      if (cVar29 == '\0') {
        ppdVar15[0x12] = (double *)fVar17;
      }
      else {
        *(double *)(ppdVar15 + 0x12) = in_xd2;
      }
      ppdVar15[4] = (double *)0x0;
    }
    else {
      if (cVar29 == '\0') {
        dVar20 = (double)CONCAT44(fVar21,0x3ccccccd);
      }
      else {
        in_xd2 = -2.559049917583599e+249;
        dVar20 = in_xd4;
      }
      if (cVar28 == '\0') {
        bVar27 = (float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0) < fVar23;
      }
      else {
        bVar27 = dVar20 + dVar20 < dVar19;
      }
      if (bVar27) goto LAB_8c213244;
      if (cVar29 == '\0') {
        ppdVar15[0x14] = (double *)fStack_38;
      }
      else {
        in_xd2 = (double)CONCAT44(uStack_34,fStack_38);
        *(double *)(ppdVar15 + 0x14) = in_xd2;
      }
      ppdVar15[4] = (double *)0x1;
    }
    if (cVar29 == '\0') {
      dVar20 = (double)CONCAT44(fStack_38,fStack_44);
    }
    else {
      in_xd2 = (double)CONCAT44(uStack_40,fStack_44);
      dVar20 = (double)CONCAT44(uStack_34,fStack_38);
    }
    if (cVar28 == '\0') {
      dVar20 = (double)CONCAT44(((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0)) *
                                SUB84(dVar24,0),SUB84(dVar20,0));
    }
    else {
      dVar20 = (dVar20 + dVar20) * dVar24;
    }
    if (cVar29 == '\0') {
      ppdVar15[0x5e] = (double *)(int)((ulonglong)dVar20 >> 0x20);
      dVar20 = (double)CONCAT44(uStack_34,uStack_40);
    }
    else {
      *(double *)(ppdVar15 + 0x5e) = dVar20;
      dVar20 = (double)CONCAT44(fStack_30,uStack_34);
      in_xd2 = (double)CONCAT44(fStack_3c,uStack_40);
    }
    if (cVar28 == '\0') {
      dVar20 = (double)CONCAT44(((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0)) *
                                SUB84(dVar24,0),SUB84(dVar20,0));
    }
    else {
      dVar20 = (dVar20 + dVar20) * dVar24;
    }
    iVar3 = (int)((ulonglong)dVar20 >> 0x20);
    if (cVar29 == '\0') {
      ppdVar15[0x5f] = (double *)iVar3;
    }
    else {
      *(double *)(ppdVar15 + 0x5f) = dVar20;
    }
    iVar5 = (int)ppdVar15[1];
    if (cVar29 == '\0') {
      fStack_54 = *(float *)(iVar5 + 0x24);
      fStack_50 = *(float *)(iVar5 + 0x28);
      dVar20 = (double)CONCAT44(iVar3,*(undefined4 *)(iVar5 + 0x2c));
      uStack_4c = *(undefined4 *)(iVar5 + 0x2c);
    }
    else {
      fStack_54 = (float)*(undefined8 *)(iVar5 + 0x24);
      fStack_50 = (float)*(undefined8 *)(iVar5 + 0x28);
      in_xd2 = *(double *)(iVar5 + 0x2c);
      uStack_4c = SUB84(in_xd2,0);
      fStack_48 = (float)((ulonglong)in_xd2 >> 0x20);
    }
    ppdVar15[3] = (double *)0x0;
    ppdVar15[0xe] = (double *)(uint)(ppdVar15[4] == (double *)0x0);
    do {
      ar4 = *(double **)((int)ppdVar15 + 4);
      iVar3 = *(int *)((int)ppdVar15 + 0xc);
      if (cVar29 == '\0') {
        fStack_60 = *(float *)((int)ar4 + iVar3);
        fVar21 = *(float *)((int)ar4 + iVar3 + 4);
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar21);
        fStack_5c = fVar21;
        uStack_58 = *(undefined4 *)((int)ar4 + iVar3 + 8);
        dVar19 = (double)CONCAT44(fStack_50,fVar21);
        fVar17 = fVar21;
      }
      else {
        fStack_60 = (float)*(undefined8 *)((int)ar4 + iVar3);
        fVar21 = SUB84(dVar20,0);
        fStack_5c = (float)*(undefined8 *)((int)ar4 + iVar3 + 4);
        uVar26 = *(undefined8 *)((int)ar4 + iVar3 + 8);
        uStack_58 = (undefined4)uVar26;
        fStack_54 = (float)((ulonglong)uVar26 >> 0x20);
        in_xd2 = (double)CONCAT44(uStack_58,fStack_5c);
        dVar19 = (double)CONCAT44(uStack_4c,fStack_50);
        fVar17 = fStack_50;
        in_xd4 = in_xd2;
      }
      fVar23 = (float)((ulonglong)dVar19 >> 0x20);
      if (cVar28 == '\0') {
        bVar27 = fVar23 < fVar21 + SUB84(dVar25,0);
      }
      else {
        bVar27 = dVar19 < dVar20 + dVar25;
      }
      iVar3 = 0;
      if (bVar27) {
LAB_8c2132f0:
        if (cVar29 == '\0') {
          dVar19 = (double)CONCAT44(uStack_4c,fStack_50);
          dVar20 = (double)CONCAT44(fStack_5c,uStack_58);
        }
        else {
          in_xd2 = (double)CONCAT44(fStack_54,uStack_58);
          dVar19 = (double)CONCAT44(fStack_48,uStack_4c);
          in_xd4 = (double)CONCAT44(uStack_4c,fStack_50);
          dVar20 = (double)CONCAT44(uStack_58,fStack_5c);
        }
        fVar17 = (float)((ulonglong)dVar19 >> 0x20);
        if (cVar28 == '\0') {
          fVar21 = (float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar19,0);
          dVar20 = (double)CONCAT44(fVar21,(SUB84(dVar20,0) - fVar17) / fVar21);
        }
        else {
          dVar20 = (dVar20 - dVar19) - dVar19;
          dVar20 = dVar20 / dVar20;
        }
        if (cVar29 == '\0') {
          *(float *)((int)ppdVar15 + 0x24) = SUB84(dVar20,0);
        }
        else {
          *(double *)((int)ppdVar15 + 0x24) = in_xd2;
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                    SUB84(dVar20,0) * SUB84(dVar19,0));
        }
        else {
          dVar20 = dVar20 * dVar19;
        }
        if (cVar28 == '\0') {
          fVar17 = -SUB84(dVar20,0) + fVar17;
        }
        else {
          fVar17 = SUB84((double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),-SUB84(dVar20,0)) +
                         dVar19,0);
        }
        if (cVar29 == '\0') {
          *(float *)((int)ppdVar15 + 0x60) = fVar17;
        }
        else {
          *(double *)((int)ppdVar15 + 0x60) = in_xd2;
        }
        iVar5 = 0;
      }
      else {
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(fVar17,0x3ccccccd);
        }
        else {
          in_xd2 = 6.712045148555942e-134;
          dVar20 = in_xd4;
        }
        if (cVar28 == '\0') {
          bVar27 = (float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0) < fVar23;
        }
        else {
          bVar27 = dVar20 + dVar20 < dVar19;
        }
        if (bVar27) goto LAB_8c2132f0;
        iVar5 = 1;
        if (cVar29 == '\0') {
          *(float *)((int)ppdVar15 + 0x68) = fStack_50;
        }
        else {
          in_xd2 = (double)CONCAT44(uStack_4c,fStack_50);
          *(double *)((int)ppdVar15 + 0x68) = in_xd2;
        }
      }
      uVar1 = SUB84(dVar24,0);
      if (*(int *)((int)ppdVar15 + 0x38) == 0) {
        if (iVar5 != 0) goto LAB_8c21337a;
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x50),
                                    *(undefined4 *)((int)ppdVar15 + 0x60));
          in_dr0 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x24),SUB84(in_dr0,0));
          dVar24 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x50),uVar1);
        }
        else {
          dVar20 = *(double *)((int)ppdVar15 + 0x50);
          in_xd2 = *(double *)((int)ppdVar15 + 0x60);
          in_dr0 = *(double *)((int)ppdVar15 + 0x24);
          dVar24 = dVar20;
        }
LAB_8c21338e:
        if (cVar28 == '\0') {
          dVar20 = (double)(ulonglong)
                           (uint)((float)((ulonglong)in_dr0 >> 0x20) *
                                  (float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0));
        }
        if (cVar29 == '\0') {
          *(int *)((int)ppdVar15 + 0x34) = SUB84(dVar20,0);
        }
        else {
          *(double *)((int)ppdVar15 + 0x34) = in_xd2;
        }
      }
      else {
        if (iVar5 == 0) {
          if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x1c),
                                      *(undefined4 *)((int)ppdVar15 + 0x24));
          }
          else {
            in_xd2 = *(double *)((int)ppdVar15 + 0x24);
            dVar20 = *(double *)((int)ppdVar15 + 0x1c);
          }
          if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                      SUB84(dVar20,0) + SUB84(dVar25,0));
          }
          else {
            dVar20 = dVar20 + dVar25;
          }
          fVar17 = (float)((ulonglong)dVar20 >> 0x20);
          if (cVar28 != '\0' || SUB84(dVar20,0) <= fVar17) {
            if (cVar29 == '\0') {
              dVar20 = (double)CONCAT44(fVar17,0x3ccccccd);
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                        *(undefined4 *)((int)ppdVar15 + 0x24));
            }
            else {
              in_xd2 = 6.712045148555942e-134;
            }
            if (cVar28 == '\0') {
              fVar17 = SUB84(in_dr0,0) + SUB84(dVar20,0);
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar17);
              bVar27 = fVar17 < (float)((ulonglong)dVar20 >> 0x20);
            }
            else {
              in_dr0 = in_dr0 + dVar20;
              bVar27 = in_dr0 < dVar20;
            }
            if (!bVar27) goto LAB_8c21339c;
          }
          if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x60),
                                      *(undefined4 *)((int)ppdVar15 + 0x48));
            dVar16 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x1c),
                                      *(undefined4 *)((int)ppdVar15 + 0x24));
          }
          else {
            in_xd2 = *(double *)((int)ppdVar15 + 0x48);
            dVar20 = *(double *)((int)ppdVar15 + 0x60);
            dVar16 = *(double *)((int)ppdVar15 + 0x1c);
          }
          if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar20,0),
                                      SUB84(dVar20,0));
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                      SUB84(dVar16,0));
          }
          else {
            dVar20 = dVar20 - dVar20;
            dVar16 = dVar16 - dVar16;
          }
          dVar24 = dVar20;
          if (cVar29 == '\0') {
            dVar24 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),uVar1);
          }
          if (cVar28 == '\0') {
            dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) /
                                      (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar24,0));
          }
          else {
            dVar24 = dVar24 / dVar16;
          }
          if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x1c),SUB84(dVar20,0));
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar16,0));
          }
          else {
            dVar20 = *(double *)((int)ppdVar15 + 0x1c);
            in_dr0 = dVar24;
          }
          goto LAB_8c21338e;
        }
LAB_8c21337a:
        if (*(int *)((int)ppdVar15 + 0x10) == 0) {
          if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x1c),
                                      *(undefined4 *)((int)ppdVar15 + 0x48));
            in_dr0 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x68),SUB84(in_dr0,0));
            dVar24 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x68),uVar1);
          }
          else {
            in_xd2 = *(double *)((int)ppdVar15 + 0x48);
            dVar20 = *(double *)((int)ppdVar15 + 0x1c);
            in_dr0 = *(double *)((int)ppdVar15 + 0x68);
            dVar24 = *(double *)((int)ppdVar15 + 0x68);
          }
          goto LAB_8c21338e;
        }
LAB_8c21339c:
        iVar3 = 1;
      }
      if (iVar3 == 0) {
        *(undefined4 *)((int)ppdVar15 + 0x40) = 0;
        *(undefined4 *)((int)ppdVar15 + 0x3c) = 0;
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(fStack_38,SUB84(in_dr0,0));
        }
        else {
          dVar20 = (double)CONCAT44(uStack_34,fStack_38);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) -
                                    (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar24;
        }
        uVar2 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)ppdVar15 + 0x94) = uVar2;
          puVar12 = (undefined8 *)((int)ppdVar15 + -4);
          *(uint *)((int)ppdVar15 + -4) = uVar2;
          dVar16 = (double)CONCAT44(uStack_34,*(undefined4 *)((int)ppdVar15 + 0x34));
        }
        else {
          *(double *)((int)ppdVar15 + 0x94) = dVar20;
          puVar12 = (undefined8 *)((int)ppdVar15 + -8);
          *(double *)((int)ppdVar15 + -8) = dVar20;
          in_xd2 = *(double *)((int)ppdVar15 + 0x30);
          dVar16 = (double)CONCAT44(fStack_30,uStack_34);
        }
        if (cVar28 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
          uVar1 = (undefined4)((ulonglong)dVar16 >> 0x20);
          dVar16 = (double)CONCAT44(uVar1,uVar1);
          *(undefined4 *)(puVar12 + 0x12) = uVar1;
        }
        else {
          puVar12[0x12] = dVar16;
          in_xd2 = dVar16;
        }
        if (cVar28 == '\0') {
          uVar2 = SUB84(dVar16,0);
        }
        else {
          uVar2 = SUB84(dVar16 * dVar16,0);
        }
        if (cVar29 == '\0') {
          uVar26 = CONCAT44(*(undefined4 *)puVar12,SUB84(dVar20,0));
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          uVar2 = SUB84(dVar19,0);
        }
        else {
          uVar26 = *puVar12;
          puVar12 = puVar12 + 1;
        }
        FUN_8c258030(0,iVar5,ar4,ar5);
        if (cVar29 == '\0') {
          *(int *)((int)puVar12 + 0x134) = (int)((ulonglong)uVar26 >> 0x20);
          dVar20 = (double)CONCAT44(fStack_44,(int)uVar26);
        }
        else {
          *(undefined8 *)((int)puVar12 + 0x134) = uVar26;
          dVar20 = (double)CONCAT44(uStack_40,fStack_44);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) -
                                    (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar24;
        }
        uVar18 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)puVar12 + 0xbc) = uVar18;
          puVar7 = (undefined8 *)((int)puVar12 + -4);
          *(uint *)((int)puVar12 + -4) = uVar18;
          dVar19 = (double)CONCAT44(uStack_40,*(undefined4 *)((int)puVar12 + 0x34));
        }
        else {
          *(double *)((int)puVar12 + 0xbc) = dVar20;
          puVar7 = (undefined8 *)((int)puVar12 + -8);
          *(double *)((int)puVar12 + -8) = dVar20;
          in_xd2 = *(double *)((int)puVar12 + 0x30);
          dVar19 = (double)CONCAT44(fStack_3c,uStack_40);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        fVar17 = (float)((ulonglong)dVar19 >> 0x20);
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar18;
          dVar19 = (double)CONCAT44(fVar17,fVar17);
          *(float *)((int)puVar7 + 0xc4) = fVar17;
        }
        else {
          *(double *)((int)puVar7 + 0xc4) = dVar19;
          in_xd2 = dVar19;
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44(fVar17 * SUB84(dVar19,0),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 * dVar19;
        }
        if (cVar29 == '\0') {
          uVar26 = CONCAT44(*(undefined4 *)puVar7,SUB84(dVar20,0));
          puVar13 = (undefined8 *)((int)puVar7 + 4);
        }
        else {
          uVar26 = *puVar7;
          puVar13 = puVar7 + 1;
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)uVar26 >> 0x20) * (float)uVar26 +
                                    (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0));
        }
        dVar20 = dVar19;
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
        }
        uVar1 = SUB84(dVar20,0);
        FUN_8c258030(iVar3,iVar5,ar4,ar5);
        if (cVar29 == '\0') {
          *(int *)((int)puVar13 + 0x114) = (int)((ulonglong)uVar26 >> 0x20);
          dVar20 = (double)CONCAT44(fStack_38,(int)uVar26);
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),fStack_44);
        }
        else {
          *(undefined8 *)((int)puVar13 + 0x114) = uVar26;
          dVar20 = (double)CONCAT44(uStack_34,fStack_38);
          in_xd2 = (double)CONCAT44(uStack_40,fStack_44);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar19;
        }
        uVar2 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)puVar13 + 0xe0) = uVar2;
          pdVar6 = (double *)((int)puVar13 + -4);
          *(uint *)((int)puVar13 + -4) = uVar2;
          dVar19 = (double)CONCAT44(uStack_34,uStack_40);
        }
        else {
          *(double *)((int)puVar13 + 0xe0) = dVar20;
          pdVar6 = (double *)((int)puVar13 + -8);
          *(double *)((int)puVar13 + -8) = dVar20;
          in_xd2 = (double)CONCAT44(fStack_3c,uStack_40);
          dVar19 = (double)CONCAT44(fStack_30,uStack_34);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
          uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
          dVar19 = (double)CONCAT44(uVar22,uVar22);
          *(undefined4 *)((int)pdVar6 + 0x10c) = uVar22;
        }
        else {
          *(double *)((int)pdVar6 + 0x10c) = dVar19;
          in_xd2 = dVar19;
        }
        if (cVar28 == '\0') {
          uVar22 = SUB84(dVar19,0);
        }
        else {
          uVar22 = SUB84(dVar19 * dVar19,0);
        }
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar20,0));
          pdVar6 = (double *)((int)pdVar6 + 4);
          uVar22 = uVar1;
        }
        else {
          dVar20 = *pdVar6;
          pdVar6 = pdVar6 + 1;
        }
        FUN_8c258030(iVar3,iVar5,ar4,ar5);
        dVar19 = dVar20;
        if (cVar29 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),uVar22);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) +
                                    (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 + dVar25;
        }
        if (cVar29 == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 0x134),
                                    *(undefined4 *)((int)pdVar6 + 0x114));
        }
        else {
          in_xd2 = *(double *)((int)pdVar6 + 0x114);
          dVar16 = *(double *)((int)pdVar6 + 0x134);
        }
        if (cVar28 == '\0') {
          bVar27 = (float)((ulonglong)dVar19 >> 0x20) <
                   (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0) + SUB84(dVar25,0);
        }
        else {
          bVar27 = dVar19 < dVar16 + dVar16 + dVar25;
        }
        if (!bVar27) {
          *(undefined4 *)((int)pdVar6 + 0x40) = 1;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(fStack_50,SUB84(dVar20,0));
        }
        else {
          dVar20 = (double)CONCAT44(uStack_4c,fStack_50);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) -
                                    (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar24;
        }
        uVar2 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)pdVar6 + 0x88) = uVar2;
          puVar12 = (undefined8 *)((int)pdVar6 + -4);
          *(uint *)((int)pdVar6 + -4) = uVar2;
          dVar16 = (double)CONCAT44(uStack_4c,*(undefined4 *)((int)pdVar6 + 0x34));
        }
        else {
          *(double *)((int)pdVar6 + 0x88) = dVar20;
          puVar12 = (undefined8 *)((int)pdVar6 + -8);
          *(double *)((int)pdVar6 + -8) = dVar20;
          in_xd2 = *(double *)((int)pdVar6 + 0x30);
          dVar16 = (double)CONCAT44(fStack_48,uStack_4c);
        }
        if (cVar28 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
          uVar1 = (undefined4)((ulonglong)dVar16 >> 0x20);
          dVar16 = (double)CONCAT44(uVar1,uVar1);
          *(undefined4 *)((int)puVar12 + 0x9c) = uVar1;
        }
        else {
          *(double *)((int)puVar12 + 0x9c) = dVar16;
          in_xd2 = dVar16;
        }
        if (cVar28 == '\0') {
          uVar2 = SUB84(dVar16,0);
        }
        else {
          uVar2 = SUB84(dVar16 * dVar16,0);
        }
        if (cVar29 == '\0') {
          uVar26 = CONCAT44(*(undefined4 *)puVar12,SUB84(dVar20,0));
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          uVar2 = SUB84(dVar19,0);
        }
        else {
          uVar26 = *puVar12;
          puVar12 = puVar12 + 1;
        }
        FUN_8c258030(iVar3,iVar5,ar4,ar5);
        if (cVar29 == '\0') {
          *(int *)((int)puVar12 + 0x13c) = (int)((ulonglong)uVar26 >> 0x20);
          dVar20 = (double)CONCAT44(fStack_5c,(int)uVar26);
        }
        else {
          *(undefined8 *)((int)puVar12 + 0x13c) = uVar26;
          dVar20 = (double)CONCAT44(uStack_58,fStack_5c);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) -
                                    (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar24;
        }
        uVar18 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)puVar12 + 0xcc) = uVar18;
          puVar7 = (undefined8 *)((int)puVar12 + -4);
          *(uint *)((int)puVar12 + -4) = uVar18;
          dVar19 = (double)CONCAT44(uStack_58,*(undefined4 *)((int)puVar12 + 0x34));
        }
        else {
          *(double *)((int)puVar12 + 0xcc) = dVar20;
          puVar7 = (undefined8 *)((int)puVar12 + -8);
          *(double *)((int)puVar12 + -8) = dVar20;
          in_xd2 = *(double *)((int)puVar12 + 0x30);
          dVar19 = (double)CONCAT44(fStack_54,uStack_58);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        fVar17 = (float)((ulonglong)dVar19 >> 0x20);
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar18;
          dVar19 = (double)CONCAT44(fVar17,fVar17);
          *(float *)(puVar7 + 0x1c) = fVar17;
        }
        else {
          puVar7[0x1c] = dVar19;
          in_xd2 = dVar19;
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44(fVar17 * SUB84(dVar19,0),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 * dVar19;
        }
        if (cVar29 == '\0') {
          uVar26 = CONCAT44(*(undefined4 *)puVar7,SUB84(dVar20,0));
          puVar14 = (undefined8 *)((int)puVar7 + 4);
        }
        else {
          uVar26 = *puVar7;
          puVar14 = puVar7 + 1;
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)uVar26 >> 0x20) * (float)uVar26 +
                                    (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0));
        }
        dVar20 = dVar19;
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
        }
        uVar1 = SUB84(dVar20,0);
        FUN_8c258030(iVar3,iVar5,ar4,ar5);
        if (cVar29 == '\0') {
          *(int *)((int)puVar14 + 0x11c) = (int)((ulonglong)uVar26 >> 0x20);
          dVar20 = (double)CONCAT44(fStack_50,(int)uVar26);
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),fStack_5c);
        }
        else {
          *(undefined8 *)((int)puVar14 + 0x11c) = uVar26;
          dVar20 = (double)CONCAT44(uStack_4c,fStack_50);
          in_xd2 = (double)CONCAT44(uStack_58,fStack_5c);
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar19;
        }
        uVar2 = (uint)((ulonglong)dVar20 >> 0x20);
        if (cVar29 == '\0') {
          *(uint *)((int)puVar14 + 0xf8) = uVar2;
          pdVar6 = (double *)((int)puVar14 + -4);
          *(uint *)((int)puVar14 + -4) = uVar2;
          dVar19 = (double)CONCAT44(uStack_4c,uStack_58);
        }
        else {
          *(double *)((int)puVar14 + 0xf8) = dVar20;
          pdVar6 = (double *)((int)puVar14 + -8);
          *(double *)((int)puVar14 + -8) = dVar20;
          in_xd2 = (double)CONCAT44(fStack_54,uStack_58);
          dVar19 = (double)CONCAT44(fStack_48,uStack_4c);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)uVar2;
          uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
          dVar19 = (double)CONCAT44(uVar22,uVar22);
          *(undefined4 *)(pdVar6 + 0x20) = uVar22;
        }
        else {
          pdVar6[0x20] = dVar19;
          in_xd2 = dVar19;
        }
        if (cVar28 == '\0') {
          uVar22 = SUB84(dVar19,0);
        }
        else {
          uVar22 = SUB84(dVar19 * dVar19,0);
        }
        if (cVar29 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar20,0));
          ppdVar15 = (double **)((int)pdVar6 + 4);
          uVar22 = uVar1;
        }
        else {
          in_dr0 = *pdVar6;
          ppdVar15 = (double **)(pdVar6 + 1);
        }
        FUN_8c258030(iVar3,iVar5,ar4,ar5);
        dVar19 = in_dr0;
        if (cVar29 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uVar22);
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) +
                                    (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 + dVar25;
        }
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)ppdVar15 + 0x13c),
                                    *(undefined4 *)((int)ppdVar15 + 0x11c));
        }
        else {
          in_xd2 = *(double *)((int)ppdVar15 + 0x11c);
          dVar20 = *(double *)((int)ppdVar15 + 0x13c);
        }
        if (cVar28 == '\0') {
          fVar17 = (float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0) + SUB84(dVar25,0);
          dVar20 = (double)CONCAT44(fVar17,SUB84(dVar20,0));
          bVar27 = (float)((ulonglong)dVar19 >> 0x20) < fVar17;
        }
        else {
          dVar20 = dVar20 + dVar20 + dVar25;
          bVar27 = dVar19 < dVar20;
        }
        if (!bVar27) {
          *(undefined4 *)((int)ppdVar15 + 0x3c) = 1;
        }
        if ((*(int *)((int)ppdVar15 + 0x40) != 0) && (*(int *)((int)ppdVar15 + 0x3c) != 0)) {
          *(undefined4 *)((int)ppdVar15 + 0x78) = 1;
          break;
        }
      }
      if (cVar29 == '\0') {
        fStack_54 = fStack_60;
        fStack_50 = fStack_5c;
        dVar20 = (double)CONCAT44(fStack_5c,uStack_58);
        uStack_4c = uStack_58;
      }
      else {
        fStack_54 = fStack_60;
        dVar20 = (double)CONCAT44(uStack_58,fStack_5c);
        fStack_50 = fStack_5c;
        in_xd2 = (double)CONCAT44(fStack_60,uStack_58);
        uStack_4c = uStack_58;
        fStack_48 = fStack_60;
      }
      uStack_4c = uStack_58;
      fStack_50 = fStack_5c;
      fStack_54 = fStack_60;
      iVar3 = *(int *)((int)ppdVar15 + 0xc);
      *(uint *)((int)ppdVar15 + 0xc) = iVar3 + 0xcU;
    } while (iVar3 + 0xcU < 0x30);
    if (*(int *)((int)ppdVar15 + 0x78) != 0) break;
    if (cVar29 == '\0') {
      fStack_3c = fStack_48;
      fStack_38 = fStack_44;
      dVar20 = (double)CONCAT44(fStack_44,uStack_40);
      uStack_34 = uStack_40;
    }
    else {
      fStack_3c = fStack_48;
      dVar20 = (double)CONCAT44(uStack_40,fStack_44);
      fStack_38 = fStack_44;
      in_xd2 = (double)CONCAT44(fStack_48,uStack_40);
      uStack_34 = uStack_40;
      fStack_30 = fStack_48;
    }
    uStack_34 = uStack_40;
    fStack_38 = fStack_44;
    fStack_3c = fStack_48;
    *(int *)((int)ppdVar15 + 8) = *(int *)((int)ppdVar15 + 8) + 0xc;
  }
  uVar2 = 0;
  iVar3 = 0;
  while (uVar2 < 0x20) {
    if (cVar29 == '\0') {
      dVar20 = (double)(ulonglong)*(uint *)((int)*ppdVar15 + iVar3);
    }
    else {
      in_xd2 = *(double *)((int)*ppdVar15 + iVar3);
    }
    pdVar6 = (double *)((int)ppdVar15 + uVar2 + 0x160);
    if (cVar29 == '\0') {
      *(int *)pdVar6 = SUB84(dVar20,0);
    }
    else {
      *pdVar6 = in_xd2;
    }
    if (cVar29 == '\0') {
      uVar18 = *(uint *)((int)*ppdVar15 + iVar3 + 4);
      dVar20 = (double)(ulonglong)uVar18;
      *(uint *)((int)pdVar6 + 4) = uVar18;
    }
    else {
      in_xd2 = *(double *)((int)*ppdVar15 + iVar3 + 4);
      *(double *)((int)pdVar6 + 4) = in_xd2;
    }
    if (cVar29 == '\0') {
      dVar20 = (double)(ulonglong)*(uint *)((int)ppdVar15[1] + iVar3);
    }
    else {
      in_xd2 = *(double *)((int)ppdVar15[1] + iVar3);
    }
    ar4 = (double *)((int)ppdVar15 + uVar2 + 0x140);
    if (cVar29 == '\0') {
      *(int *)ar4 = SUB84(dVar20,0);
    }
    else {
      *ar4 = in_xd2;
    }
    uVar2 = uVar2 + 8;
    iVar5 = (int)ppdVar15[1] + iVar3;
    iVar4 = iVar3 + 0xc;
    iVar3 = iVar3 + 0xc;
    if (cVar29 == '\0') {
      uVar18 = *(uint *)(iVar5 + 4);
      dVar20 = (double)(ulonglong)uVar18;
      *(uint *)((int)ar4 + 4) = uVar18;
      iVar3 = iVar4;
    }
    else {
      in_xd2 = *(double *)(iVar5 + 4);
      *(double *)((int)ar4 + 4) = in_xd2;
    }
  }
  iVar3 = FUN_8c212946(ppdVar15 + 0x58,ppdVar15 + 0x50,ar4,ar5);
  ppdVar15[3] = (double *)iVar3;
  uVar2 = 0;
  iVar3 = 0;
  while (uVar2 < 0x20) {
    if (cVar29 == '\0') {
      dVar20 = (double)(ulonglong)*(uint *)((int)*ppdVar15 + iVar3);
    }
    else {
      in_xd2 = *(double *)((int)*ppdVar15 + iVar3);
    }
    pdVar6 = (double *)((int)ppdVar15 + uVar2 + 0x160);
    if (cVar29 == '\0') {
      *(int *)pdVar6 = SUB84(dVar20,0);
    }
    else {
      *pdVar6 = in_xd2;
    }
    if (cVar29 == '\0') {
      uVar18 = *(uint *)((int)*ppdVar15 + iVar3 + 8);
      dVar20 = (double)(ulonglong)uVar18;
      *(uint *)((int)pdVar6 + 4) = uVar18;
    }
    else {
      in_xd2 = *(double *)((int)*ppdVar15 + iVar3 + 8);
      *(double *)((int)pdVar6 + 4) = in_xd2;
    }
    if (cVar29 == '\0') {
      dVar20 = (double)(ulonglong)*(uint *)((int)ppdVar15[1] + iVar3);
    }
    else {
      in_xd2 = *(double *)((int)ppdVar15[1] + iVar3);
    }
    ar4 = (double *)((int)ppdVar15 + uVar2 + 0x140);
    if (cVar29 == '\0') {
      *(int *)ar4 = SUB84(dVar20,0);
    }
    else {
      *ar4 = in_xd2;
    }
    uVar2 = uVar2 + 8;
    iVar5 = (int)ppdVar15[1] + iVar3;
    iVar4 = iVar3 + 0xc;
    iVar3 = iVar3 + 0xc;
    if (cVar29 == '\0') {
      uVar18 = *(uint *)(iVar5 + 8);
      dVar20 = (double)(ulonglong)uVar18;
      *(uint *)((int)ar4 + 4) = uVar18;
      iVar3 = iVar4;
    }
    else {
      in_xd2 = *(double *)(iVar5 + 8);
      *(double *)((int)ar4 + 4) = in_xd2;
    }
  }
  iVar5 = FUN_8c212946(ppdVar15 + 0x58,ppdVar15 + 0x50,ar4,ar5);
  iVar3 = 0;
  ppdVar15[2] = (double *)iVar5;
  for (uVar2 = 0; uVar2 < 0x20; uVar2 = uVar2 + 8) {
    if (cVar29 == '\0') {
      dVar20 = (double)(ulonglong)*(uint *)((int)*ppdVar15 + iVar3 + 4);
    }
    else {
      in_xd2 = *(double *)((int)*ppdVar15 + iVar3 + 4);
    }
    pdVar6 = (double *)((int)ppdVar15 + uVar2 + 0x160);
    if (cVar29 == '\0') {
      *(int *)pdVar6 = SUB84(dVar20,0);
    }
    else {
      *pdVar6 = in_xd2;
    }
    if (cVar29 == '\0') {
      uVar18 = *(uint *)((int)*ppdVar15 + iVar3 + 8);
      dVar20 = (double)(ulonglong)uVar18;
      *(uint *)((int)pdVar6 + 4) = uVar18;
    }
    else {
      in_xd2 = *(double *)((int)*ppdVar15 + iVar3 + 8);
      *(double *)((int)pdVar6 + 4) = in_xd2;
    }
    if (cVar29 == '\0') {
      dVar20 = (double)(ulonglong)*(uint *)((int)ppdVar15[1] + iVar3 + 4);
    }
    else {
      in_xd2 = *(double *)((int)ppdVar15[1] + iVar3 + 4);
    }
    ar4 = (double *)((int)ppdVar15 + uVar2 + 0x140);
    if (cVar29 == '\0') {
      *(int *)ar4 = SUB84(dVar20,0);
    }
    else {
      *ar4 = in_xd2;
    }
    if (cVar29 == '\0') {
      uVar18 = *(uint *)((int)ppdVar15[1] + iVar3 + 8);
      dVar20 = (double)(ulonglong)uVar18;
      *(uint *)((int)ar4 + 4) = uVar18;
    }
    else {
      in_xd2 = *(double *)((int)ppdVar15[1] + iVar3 + 8);
      *(double *)((int)ar4 + 4) = in_xd2;
    }
    iVar3 = iVar3 + 0xc;
  }
  iVar3 = FUN_8c212946(ppdVar15 + 0x58,ppdVar15 + 0x50,ar4,ar5);
  if ((((ppdVar15[0x1f] == (double *)0x0) && (ppdVar15[3] == (double *)0x0)) ||
      ((ppdVar15[0x1d] == (double *)0x0 && (ppdVar15[2] == (double *)0x0)))) ||
     ((ppdVar15[0x1e] == (double *)0x0 && (iVar3 == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c212a30\n.set _FUN_8c212a30, _FUN_8c212a30_def\n");
