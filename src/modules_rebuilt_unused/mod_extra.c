/* functions that failed to decompile with the r4-r7 signature: old-signature output */

/* FUN_8c012090 @ 8c012090 callers=2 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c01213c) */
/* WARNING: Removing unreachable block (ram,0x8c0120cc) */
/* WARNING: Removing unreachable block (ram,0x8c0120aa) */
/* WARNING: Removing unreachable block (ram,0x8c012104) */
/* WARNING: Removing unreachable block (ram,0x8c012146) */

double FUN_8c012090(undefined8 param_1,double param_2,float param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  undefined4 in_fr1;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar10;
  double dVar9;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_8;
  float fStack_4;
  
  fVar10 = (float)((ulonglong)param_1 >> 0x20);
  fStack_4 = (float)((ulonglong)param_1 >> 0x20);
  fStack_8 = fVar10;
  if (in_FPSCR_SZ != '\0') {
    param_3 = (float)((ulonglong)param_1 >> 0x20);
    fStack_8 = (float)param_1;
  }
  bVar2 = false;
  bVar1 = false;
  if (fVar10 == 0.0) {
    bVar2 = false;
    bVar1 = true;
  }
  else if (((uint)fStack_8 & DAT_8c012188) == DAT_8c012184) {
    bVar2 = true;
    bVar1 = false;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c01218c,(float)param_1);
  }
  else {
    dVar11 = *(double *)PTR_DAT_8c01218c;
  }
  pdVar5 = (double *)PTR_DAT_8c012190;
  if (!bVar1) {
    if ((int)fStack_8 < 0) {
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),in_fr1);
      }
      return dVar11;
    }
    pdVar5 = (double *)PTR_DAT_8c012194;
    if (!bVar2) {
      if (in_FPSCR_SZ == '\0') {
        fVar10 = *(float *)PTR_DAT_8c012198;
        fVar8 = fStack_4;
      }
      else {
        in_xd2 = *(double *)PTR_DAT_8c012198;
        fVar10 = fStack_4;
        fVar8 = param_3;
      }
      if (fVar8 != fVar10) {
        if (in_FPSCR_SZ != '\0') {
          in_xd2 = (double)CONCAT44(param_3,fStack_4);
          fStack_8 = param_3;
        }
        uVar3 = (uint)fStack_4 & DAT_8c0121a0 | DAT_8c0121a4;
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c0121b0,*(undefined4 *)PTR_DAT_8c0121ac);
        }
        else {
          dVar6 = *(double *)PTR_DAT_8c0121b0;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar10 = *(float *)PTR_DAT_8c0121a8;
        }
        else {
          fVar10 = (float)((ulonglong)*(undefined8 *)PTR_DAT_8c0121a8 >> 0x20);
        }
        fVar8 = (float)(((int)(DAT_8c012184 & (uint)fStack_4) >> 0x17) + -0x7f);
        dVar9 = (double)CONCAT44(fVar10,fVar8);
        if (in_FPSCR_PR == '\0') {
          dVar9 = (double)CONCAT44(fVar10,fVar8 + fVar10);
        }
        else {
          dVar9 = dVar9 + dVar9;
        }
        dVar7 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar9,0));
          dVar7 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = SUB84(param_2,0) * SUB84(dVar6,0);
        }
        else {
          fVar10 = SUB84(param_2 * dVar6,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),uVar3);
        }
        else {
          in_xd2 = (double)CONCAT44(fStack_8,uVar3);
        }
        if (in_FPSCR_PR == '\0') {
          dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + SUB84(dVar9,0),SUB84(dVar6,0)
                                  );
        }
        else {
          dVar6 = dVar6 + dVar9;
        }
        iVar4 = 7;
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c0121b4,SUB84(dVar9,0));
          dVar11 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c0121b8,SUB84(dVar11,0));
          pdVar5 = (double *)(PTR_DAT_8c0121b8 + 4);
        }
        else {
          dVar9 = *(double *)PTR_DAT_8c0121b4;
          dVar11 = *(double *)PTR_DAT_8c0121b8;
          pdVar5 = (double *)(PTR_DAT_8c0121b8 + 8);
        }
        if (in_FPSCR_PR == '\0') {
          dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) + SUB84(dVar9,0),SUB84(dVar9,0)
                                  );
        }
        else {
          dVar9 = dVar9 + dVar9;
        }
        dVar13 = dVar6;
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),(int)((ulonglong)dVar6 >> 0x20)
                                   );
          dVar13 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                    SUB84(dVar11,0) / (float)((ulonglong)dVar9 >> 0x20));
        }
        else {
          dVar11 = dVar11 / dVar9;
        }
        dVar14 = dVar13;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(SUB84(dVar11,0),fVar10);
        }
        if (in_FPSCR_PR == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) * SUB84(dVar11,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 * dVar11;
        }
        do {
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)(ulonglong)*(uint *)pdVar5;
            pdVar5 = (double *)((int)pdVar5 + 4);
            dVar6 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),SUB84(dVar6,0));
          }
          else {
            in_xd2 = *pdVar5;
            pdVar5 = pdVar5 + 1;
            dVar6 = dVar14;
          }
          iVar4 = iVar4 + -1;
          if (in_FPSCR_PR == '\0') {
            dVar9 = (double)(ulonglong)
                            (uint)((float)((ulonglong)dVar6 >> 0x20) *
                                   (float)((ulonglong)dVar11 >> 0x20) + SUB84(dVar9,0));
          }
          dVar12 = in_xd2;
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(SUB84(dVar9,0),SUB84(dVar11,0));
          }
          dVar11 = dVar12;
        } while (0 < iVar4);
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(SUB84(dVar12,0),SUB84(dVar12,0));
          dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),SUB84(dVar14,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) *
                                    (float)((ulonglong)dVar12 >> 0x20),SUB84(dVar13,0));
        }
        else {
          dVar13 = dVar13 * dVar12;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(SUB84(dVar12,0),SUB84(dVar6,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) +
                                   (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar7,0));
        }
        else {
          dVar7 = dVar7 + dVar13;
        }
        return dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c01219c,in_fr1);
      }
      else {
        dVar11 = *(double *)PTR_DAT_8c01219c;
      }
      return dVar11;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(*(undefined4 *)pdVar5,in_fr1);
  }
  else {
    dVar11 = *pdVar5;
  }
  return dVar11;
}




/* FUN_8c024010 @ 8c024010 callers=2 callees=1 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_8c024010(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_18 = *(undefined4 *)param_3;
    uStack_14 = *(undefined4 *)((int)param_3 + 4);
    uStack_10 = *(undefined4 *)(param_3 + 1);
    uStack_c = in_PR;
  }
  else {
    uStack_18 = (undefined4)*param_3;
    uStack_14 = (undefined4)*(undefined8 *)((int)param_3 + 4);
    uStack_10 = (undefined4)param_3[1];
    uStack_c = (undefined4)((ulonglong)param_3[1] >> 0x20);
  }
  (*(code *)PTR_FUN_8c024084)(param_1,&uStack_18,&uStack_24);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)param_2 = uStack_24;
    *(undefined4 *)((int)param_2 + 4) = uStack_20;
    *(undefined4 *)(param_2 + 1) = uStack_1c;
  }
  else {
    *param_2 = CONCAT44(uStack_20,uStack_24);
    *(ulonglong *)((int)param_2 + 4) = CONCAT44(uStack_1c,uStack_20);
    param_2[1] = CONCAT44(uStack_18,uStack_1c);
  }
  return;
}



