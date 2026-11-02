/* Seaman (USA) region 0x8c110000-0x8c120000 (Ghidra decompiler) */

/* FUN_8c110060 @ 8c110060 callers=0 callees=2 */

/* WARNING: Removing unreachable block (ram,0x8c1100ae) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c110060(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int unaff_r14;
  float fVar3;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  iVar1 = *(int *)(unaff_r14 + 0x28);
  if (iVar1 == 0) {
    if (*(int *)(unaff_r14 + 0x48) == *(int *)(unaff_r14 + 0x7c)) {
      FUN_8c10fe04(unaff_r14,ar5,ar6,ar7);
    }
    if (*(uint *)(unaff_r14 + 0x48) < *(uint *)(unaff_r14 + 0x7c)) {
      uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & DAT_8c110154;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar2 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar2 & 0x100000) >> 0x14);
      FUN_8c10fc96(unaff_r14,ar5,ar6,ar7);
    }
    uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c110154;
    if ((char)((uVar2 & 0x100000) >> 0x14) == '\0') {
      fVar3 = *(float *)(unaff_r14 + 0x4c);
    }
    else {
      fVar3 = (float)((ulonglong)*(undefined8 *)(unaff_r14 + 0x4c) >> 0x20);
    }
    if ((char)((uVar2 & 0x80000) >> 0x13) == '\0' &&
        (float)*(int *)(DAT_8c110150 + unaff_r14) < fVar3) {
      *(undefined4 *)(unaff_r14 + 0x28) = 1;
    }
  }
  else if (iVar1 == 1) {
    FUN_8c10fe04(unaff_r14,ar5,ar6,ar7);
    if (*(int *)(unaff_r14 + 0x48) == 0) {
      *(undefined4 *)(unaff_r14 + 0x28) = 2;
    }
  }
  else if (iVar1 == 2) {
    if (*(uint *)(unaff_r14 + 0x48) < *(uint *)(unaff_r14 + 0x7c)) {
      FUN_8c10fc96(unaff_r14,ar5,ar6,ar7);
    }
    FUN_8c10fe04(unaff_r14,ar5,ar6,ar7);
  }
  if (*(int *)(unaff_r14 + 0x28) != 1) {
    uVar2 = 0;
    do {
      if ((*(char *)(*(int *)(unaff_r14 + 0x6c) + uVar2) != '\0') &&
         (*(int *)(*(int *)(*(int *)(uVar2 * 8 + *(int *)(unaff_r14 + 0xc)) + 0x40) +
                  *(int *)(uVar2 * 8 + *(int *)(unaff_r14 + 0xc) + 4) * 4) ==
          *(int *)(*(int *)(*(int *)(unaff_r14 + 0xc) + uVar2 * 8) + 0x3c))) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(unaff_r14 + 0x78));
  }
  return 1;
}



/* FUN_8c110158 @ 8c110158 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c110158(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c110188)(ar4,ar5,4,1);
  return uVar1;
}



/* FUN_8c11033c @ 8c11033c callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c11033c(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (int)DAT_8c110452;
  iVar2 = *ar4;
  uVar4 = 0;
  uVar3 = *(int *)(iVar1 + iVar2) * 8 +
          *(int *)(iVar1 + -0x38 + iVar2) * *(int *)(iVar1 + -0x3c + iVar2) * 2 +
          (*(int *)(iVar1 + -0x30 + iVar2) + 1) * 2 + *(int *)(iVar1 + -0x2c + iVar2) * 2 +
          (*(int *)(iVar1 + -0x28 + iVar2) + 1) * 2 + *(int *)(iVar1 + -0x24 + iVar2) * 4 +
          (int)DAT_8c110454;
  iVar2 = iVar2 + uVar3 + ((uVar3 * 2 ^ uVar3) & 3);
  if (ar5 != 0) {
    do {
      uVar3 = FUN_8c1104d2(ar4,iVar2,ar6,ar7);
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + uVar3 + ((uVar3 << 1 ^ uVar3) & 3);
    } while (uVar4 < ar5);
  }
  return iVar2;
}



/* FUN_8c11034c @ 8c11034c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c11034c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  uint uVar2;
  uint unaff_r10;
  int *unaff_r11;
  uint uVar3;
  
  iVar1 = *unaff_r11;
  uVar3 = 0;
  uVar2 = *(int *)(in_r0 + iVar1) * 8 +
          *(int *)(in_r0 + -0x38 + iVar1) * *(int *)(in_r0 + -0x3c + iVar1) * 2 +
          (*(int *)(in_r0 + -0x30 + iVar1) + 1) * 2 + *(int *)(in_r0 + -0x2c + iVar1) * 2 +
          (*(int *)(in_r0 + -0x28 + iVar1) + 1) * 2 + *(int *)(in_r0 + -0x24 + iVar1) * 4 +
          (int)DAT_8c110454;
  iVar1 = iVar1 + uVar2 + ((uVar2 * 2 ^ uVar2) & 3);
  if (unaff_r10 != 0) {
    do {
      uVar2 = FUN_8c1104d2(unaff_r11,iVar1,ar6,ar7);
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + uVar2 + ((uVar2 << 1 ^ uVar2) & 3);
    } while (uVar3 < unaff_r10);
  }
  return iVar1;
}



/* FUN_8c1103ea @ 8c1103ea callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1103ea(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  iVar1 = FUN_8c11033c(ar4,*(undefined4 *)((int)DAT_8c110456 + *ar4),ar6,ar7);
  return *(undefined4 *)(*(int *)(iVar2 + DAT_8c110458) * 4 + iVar1);
}



/* FUN_8c110414 @ 8c110414 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c110414(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *ar4;
  iVar1 = FUN_8c11033c(ar4,*(undefined4 *)(DAT_8c110456 + iVar3),ar6,ar7);
  uVar2 = (iVar1 + *(int *)(*(int *)(DAT_8c110458 + iVar3) * 4 + iVar1) * 2) - iVar3;
  return iVar3 + uVar2 + ((uVar2 * 2 ^ uVar2) & 3);
}



/* FUN_8c110460 @ 8c110460 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

int FUN_8c110460(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  int iVar1;
  
  a5 = FUN_8c110414(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c1104b2(ar4,a5,ar6,ar7);
  return iVar1 + a5;
}



/* FUN_8c1104b2 @ 8c1104b2 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1104b2(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  return ar5[1] * 2 + 8 + (*(int *)((int)DAT_8c1105b6 + *ar4) + 1) * 2 + (*ar5 + 1) * 2;
}



/* FUN_8c1104d2 @ 8c1104d2 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1104d2(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = ar5[3];
  if (*(short *)((int)DAT_8c1105b4 + *ar4) == 0) {
    uVar1 = ar5[5];
  }
  else {
    uVar1 = ar5[5] + 1U >> 1;
  }
  uVar1 = *ar5 * ar5[1] * 4 + ar5[1] * ar5[2] * 4 + *ar5 * iVar2 * 4 + iVar2 * 4 + iVar2 * uVar1 +
          0x18;
  if (*(short *)((int)DAT_8c1105b8 + *ar4) != 0) {
    uVar1 = uVar1 + ((uVar1 * 2 ^ uVar1) & 3) + ar5[3] * ar5[3] * 4;
  }
  return uVar1;
}



/* FUN_8c11066a @ 8c11066a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11066a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_memmove_8c11067c)(PTR_DAT_8c110678,(int)DAT_8c110676);
  return uVar1;
}



/* FUN_8c110680 @ 8c110680 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c110680(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 in_dr2;
  double dVar10;
  undefined8 uVar11;
  byte in_FPSCR_CAUSE;
  byte bVar12;
  byte in_FPSCR_DN;
  byte bVar13;
  byte in_FPSCR_PR;
  byte bVar14;
  byte in_FPSCR_SZ;
  char cVar15;
  byte bVar16;
  
  if ((*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') ||
     (*(uint *)(ar4 + 0x48) < *(uint *)(ar4 + 0x2c))) {
    uVar8 = (*(undefined4 **)(ar4 + 0xc))[1];
    puVar3 = (undefined8 *)(*(code *)PTR_FUN_8c1107a4)(**(undefined4 **)(ar4 + 0xc),uVar8,ar6,ar7);
    puVar2 = PTR_FUN_8c1107a8;
    uVar9 = (undefined4)in_dr2;
    if (puVar3 == (undefined8 *)0x0) {
      if (*(char *)(ar4 + 0x28) != '\0') {
        iVar7 = *(int *)(ar4 + 0x48);
        while (iVar7 != 0) {
          uVar9 = (undefined4)in_dr2;
          uVar6 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                   (uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & DAT_8c1107ac;
          bVar12 = 0;
          bVar13 = 0;
          bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
          bVar16 = (byte)((uVar6 & 0x100000) >> 0x14);
          iVar7 = (*(code *)puVar2)(**(undefined4 **)(ar4 + 0x10),uVar8,ar6,ar7);
          if (iVar7 == 0) break;
          if (bVar16 == 0) {
            uVar9 = *(undefined4 *)(ar4 + 0x34);
          }
          uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar14 << 0x13 |
                  (uint)bVar16 << 0x14) & DAT_8c1107ac;
          if (bVar16 == 0) {
            in_dr2 = CONCAT44(*(undefined4 *)(ar4 + 0x44),uVar9);
          }
          else {
            in_dr2 = *(undefined8 *)(ar4 + 0x44);
          }
          in_FPSCR_CAUSE = 0;
          in_FPSCR_DN = 0;
          in_FPSCR_PR = (byte)((uVar6 & 0x80000) >> 0x13);
          in_FPSCR_SZ = (byte)((uVar6 & 0x100000) >> 0x14);
          *(bool *)iVar7 = in_FPSCR_PR == 0 && (float)in_dr2 < (float)((ulonglong)in_dr2 >> 0x20);
          iVar7 = *(int *)(ar4 + 0x48) + -1;
          *(int *)(ar4 + 0x48) = iVar7;
        }
        if (*(int *)(ar4 + 0x48) == 0) {
          *(undefined1 *)(ar4 + 0x28) = 0;
        }
        return (int)*(char *)(ar4 + 0x28);
      }
    }
    else {
      if (in_FPSCR_SZ == 0) {
        uVar9 = **(undefined4 **)(ar4 + 0x3c);
      }
      if (in_FPSCR_SZ == 0) {
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x44),uVar9);
      }
      else {
        dVar10 = *(double *)(ar4 + 0x44);
      }
      uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & DAT_8c1107ac;
      uVar6 = (uVar5 & 0x80000) >> 0x13;
      cVar15 = (char)uVar6;
      uVar5 = (uVar5 & 0x100000) >> 0x14;
      cVar1 = (char)uVar5;
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) - SUB84(dVar10,0),
                                  SUB84(dVar10,0));
      }
      else {
        dVar10 = dVar10 - dVar10;
      }
      if (cVar1 == '\0') {
        *(int *)(ar4 + 0x44) = (int)((ulonglong)dVar10 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x44) = dVar10;
      }
      puVar4 = *(undefined4 **)(ar4 + 0x3c);
      *(undefined4 **)(ar4 + 0x3c) = puVar4 + 1;
      if (cVar1 == '\0') {
        *puVar4 = *(undefined4 *)puVar3;
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x44),*(undefined4 *)puVar3);
      }
      else {
        *(undefined8 *)(puVar4 + -1) = *puVar3;
        dVar10 = *(double *)(ar4 + 0x44);
      }
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar10,0),
                                  SUB84(dVar10,0));
      }
      else {
        dVar10 = dVar10 + dVar10;
      }
      if (cVar1 == '\0') {
        *(int *)(ar4 + 0x44) = (int)((ulonglong)dVar10 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x44) = dVar10;
      }
      if (*(int *)(ar4 + 0x3c) == *(int *)(ar4 + 0x40)) {
        *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar4 + 0x38);
      }
      if (*(int *)(ar4 + 0x48) == *(int *)(ar4 + 0x2c)) {
        uVar6 = (uVar6 << 0x13 | uVar5 << 0x14) & DAT_8c1107ac;
        bVar12 = 0;
        bVar13 = 0;
        bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
        cVar15 = (char)(uVar6 >> 0x14);
        uVar8 = (*(code *)puVar2)(**(undefined4 **)(ar4 + 0x10),uVar8,ar6,ar7);
        uVar9 = SUB84(dVar10,0);
        if (cVar15 == '\0') {
          uVar9 = *(undefined4 *)(ar4 + 0x34);
        }
        if (cVar15 == '\0') {
          uVar11 = CONCAT44(*(undefined4 *)(ar4 + 0x44),uVar9);
        }
        else {
          uVar11 = *(undefined8 *)(ar4 + 0x44);
        }
        *(bool *)uVar8 =
             (char)((((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar14 << 0x13) &
                     DAT_8c1107ac & 0x80000) >> 0x13) == '\0' &&
             (float)uVar11 < (float)((ulonglong)uVar11 >> 0x20);
      }
      else {
        *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + 1;
      }
    }
  }
  iVar7 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar7 + 0x40)) == *(int *)(iVar7 + 0x3c)
         ^ 1;
}



/* FUN_8c1107b0 @ 8c1107b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1107b0(int *ar4,uint ar5,undefined4 ar6,int *ar7)

{
  uint uVar1;
  int a5;
  
  uVar1 = ar5 & 0xff;
  if (uVar1 == 1) {
    *(undefined1 *)(ar4 + 10) = 1;
  }
  else if (uVar1 == (int)DAT_8c1108d2) {
    *ar7 = ar4[0x12];
  }
  else {
    if (uVar1 != (int)DAT_8c1108d4) {
      return 0;
    }
    a5 = ar4[0xe];
    (**(code **)(*ar4 + 0x18))(*ar4,a5,ar6,ar7);
    (*(code *)PTR_FUN_8c1108dc)(ar4,a5,ar6,ar7);
  }
  return 1;
}



/* FUN_8c110818 @ 8c110818 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c11086e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c110818(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int *unaff_r14;
  undefined4 extraout_fr1;
  undefined4 extraout_fr1_00;
  undefined4 extraout_fr1_01;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  undefined8 in_xd2;
  short sVar4;
  byte in_FPSCR_CAUSE;
  byte bVar5;
  byte in_FPSCR_DN;
  byte bVar6;
  byte in_FPSCR_PR;
  byte bVar7;
  byte in_FPSCR_SZ;
  byte bVar8;
  char cVar9;
  
  puVar1 = PTR_FUN_8c1108e0;
  iVar3 = *unaff_r14;
  (*(code *)PTR_FUN_8c1108e0)(ar4,1,ar6,ar7);
  uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c1108d8;
  bVar5 = 0;
  bVar6 = 0;
  bVar7 = (byte)((uVar2 & 0x80000) >> 0x13);
  bVar8 = (byte)((uVar2 & 0x100000) >> 0x14);
  if (bVar7 == 0) {
    uVar2 = (uint)extraout_fr0;
  }
  else {
    uVar2 = (uint)(double)CONCAT44(extraout_fr0,extraout_fr1);
  }
  unaff_r14[0xb] = uVar2 & 0xffff;
  (*(code *)puVar1)(unaff_r14,2,ar6,ar7);
  uVar2 = ((uint)bVar5 << 0xc | (uint)bVar6 << 0x12 | (uint)bVar7 << 0x13 | (uint)bVar8 << 0x14) &
          DAT_8c1108d8;
  bVar5 = 0;
  bVar6 = 0;
  bVar7 = (byte)((uVar2 & 0x80000) >> 0x13);
  bVar8 = (byte)((uVar2 & 0x100000) >> 0x14);
  if (bVar7 == 0) {
    uVar2 = (uint)extraout_fr0_00;
  }
  else {
    uVar2 = (uint)(double)CONCAT44(extraout_fr0_00,extraout_fr1_00);
  }
  unaff_r14[0xc] = uVar2 & 0xffff;
  (*(code *)puVar1)(unaff_r14,3,ar6,ar7);
  uVar2 = ((uint)bVar5 << 0xc | (uint)bVar6 << 0x12 | (uint)bVar7 << 0x13 | (uint)bVar8 << 0x14) &
          DAT_8c1108d8;
  cVar9 = (char)((uVar2 & 0x100000) >> 0x14);
  if ((char)((uVar2 & 0x80000) >> 0x13) == '\0') {
    sVar4 = (short)(int)extraout_fr0_01;
  }
  else {
    sVar4 = (short)(int)(double)CONCAT44(extraout_fr0_01,extraout_fr1_01);
  }
  if (cVar9 == '\0') {
    unaff_r14[0xd] = (int)(float)(int)sVar4;
  }
  else {
    *(undefined8 *)(unaff_r14 + 0xd) = in_xd2;
  }
  *(undefined2 *)(*(int *)unaff_r14[4] + 0xc) = 1;
  iVar3 = (**(code **)(iVar3 + 0x14))(iVar3,unaff_r14[0xc],4,ar7);
  unaff_r14[0xe] = iVar3;
  unaff_r14[0xf] = iVar3;
  unaff_r14[0x10] = unaff_r14[0xc] * 4 + unaff_r14[0xe];
  if (cVar9 == '\0') {
    unaff_r14[0x11] = (int)DAT_8c1108e4;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x11) = CONCAT44(DAT_8c1108e4._4_4_,(int)DAT_8c1108e4);
  }
  unaff_r14[0x12] = 0;
  return 0;
}



/* FUN_8c1108b0 @ 8c1108b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1108b0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1108fc)(ar4,ar5,1,1);
  return uVar1;
}



/* FUN_8c110908 @ 8c110908 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c110908(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  uint uVar2;
  double *pdVar3;
  int in_r1;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 a6;
  int unaff_r14;
  undefined8 *puVar9;
  float extraout_fr3;
  float fVar10;
  undefined4 extraout_fr2;
  undefined4 in_fr5;
  double dVar11;
  undefined4 uVar12;
  undefined8 in_dr14;
  double dVar13;
  double in_xd14;
  double dVar14;
  undefined4 in_PR;
  byte in_FPSCR_CAUSE;
  byte bVar15;
  byte in_FPSCR_DN;
  byte bVar16;
  byte in_FPSCR_PR;
  byte bVar17;
  byte in_FPSCR_SZ;
  byte bVar18;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == 0) {
    uStack_8 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar9 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar9 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar9 + -4) = in_PR;
  bVar1 = *(byte *)(unaff_r14 + 8);
  iVar4 = *(int *)(unaff_r14 + 0xc);
  if (*(char *)(**(int **)(unaff_r14 + 0x10) + in_r1) != '\x01') {
    a6 = *(undefined4 *)(unaff_r14 + 0x28);
    if (in_FPSCR_SZ == 0) {
      dVar11 = (double)CONCAT44(DAT_8c110a18,in_fr5);
    }
    else {
      dVar11 = (double)CONCAT44(PTR_FUN_8c110a1c,DAT_8c110a18);
    }
    uVar7 = (uint)*(byte *)(unaff_r14 + 8);
    uVar12 = (undefined4)((ulonglong)dVar11 >> 0x20);
    dVar13 = dVar11;
    dVar14 = dVar11;
    if (in_FPSCR_SZ == 0) {
      dVar13 = (double)CONCAT44(uVar12,uVar12);
      dVar14 = in_xd14;
    }
    uVar2 = (*(code *)PTR_FUN_8c110a1c)(*(undefined4 *)(unaff_r14 + 0xc),uVar7,a6,ar7);
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
    if (in_FPSCR_SZ == 0) {
      dVar11 = (double)CONCAT44((undefined4)DAT_8c110a20,SUB84(dVar11,0));
    }
    else {
      dVar11 = (double)CONCAT44(DAT_8c110a20._4_4_,(undefined4)DAT_8c110a20);
    }
    uVar2 = 0;
    fVar10 = extraout_fr3;
    if (*(char *)(unaff_r14 + 8) != '\0') {
      do {
        if (*(int *)(*(int *)(unaff_r14 + 0x28) + uVar2 * 4) != 0) {
          if (in_FPSCR_SZ == 0) {
            fVar10 = **(float **)(*(int *)(unaff_r14 + 0x28) + uVar2 * 4);
          }
          uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                   (uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & DAT_8c110a20._4_4_;
          in_FPSCR_CAUSE = 0;
          in_FPSCR_DN = 0;
          in_FPSCR_PR = (byte)((uVar5 & 0x80000) >> 0x13);
          in_FPSCR_SZ = (byte)((uVar5 & 0x100000) >> 0x14);
          if (in_FPSCR_PR == 0) {
            dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) +
                                      (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar13,0) + fVar10);
            in_FPSCR_CAUSE = 0;
            in_FPSCR_DN = 0;
          }
          else {
            dVar13 = dVar13 + dVar11 + (double)CONCAT44(extraout_fr2,fVar10);
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(byte *)(unaff_r14 + 8));
    }
    uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c110a20._4_4_;
    bVar15 = 0;
    bVar16 = 0;
    bVar17 = (byte)((uVar2 & 0x80000) >> 0x13);
    bVar18 = (byte)((uVar2 & 0x100000) >> 0x14);
    pdVar3 = (double *)(*(code *)PTR_FUN_8c110a28)(**(undefined4 **)(unaff_r14 + 0x10),uVar7,a6,ar7)
    ;
    uVar7 = ((uint)bVar15 << 0xc | (uint)bVar16 << 0x12 | (uint)bVar17 << 0x13 |
            (uint)bVar18 << 0x14) & DAT_8c110a20._4_4_;
    if ((char)((uVar7 & 0x80000) >> 0x13) == '\0') {
      fVar10 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar10 = SUB84(dVar13 / dVar13,0);
    }
    if ((char)((uVar7 & 0x100000) >> 0x14) == '\0') {
      *(float *)pdVar3 = fVar10;
    }
    else {
      *pdVar3 = dVar14;
    }
  }
  piVar6 = *(int **)(unaff_r14 + 0xc);
  while( true ) {
    if ((int *)((uint)bVar1 * 8 + iVar4) <= piVar6) {
      return 1;
    }
    iVar8 = *piVar6;
    if ((*(int *)(*(int *)(iVar8 + 0x2c) + piVar6[1] * 4) != 0) &&
       (*(int *)(*(int *)(iVar8 + 0x40) + piVar6[1] * 4) == *(int *)(iVar8 + 0x3c))) break;
    piVar6 = piVar6 + 2;
  }
  return 0;
}



/* FUN_8c1109d2 @ 8c1109d2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1109d2(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  
  if ((ar5 & 0xff) == (int)DAT_8c110a14) {
    a5 = ar4[10];
    (**(code **)(*ar4 + 0x18))(*ar4,a5,ar6,ar7);
    (*(code *)PTR_FUN_8c110a2c)(ar4,a5,ar6,ar7);
    return 1;
  }
  return 0;
}



/* FUN_8c110a30 @ 8c110a30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c110a30(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined2 *)(*(int *)ar4[4] + 0xc) = 4;
  iVar1 = (**(code **)(*ar4 + 0x10))(*ar4,(uint)*(byte *)(ar4 + 2) << 2,ar6,ar7);
  ar4[10] = iVar1;
  return 0;
}



/* FUN_8c110a5c @ 8c110a5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c110a5c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c110a8c)(ar4,ar5,3,1);
  return uVar1;
}



/* FUN_8c110a90 @ 8c110a90 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c110a90(int ar4,int ar5,undefined8 *ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  uint uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined4 in_fr5;
  undefined8 uVar10;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  uVar7 = 0;
  puVar1 = &DAT_8c110bd0;
  if (in_FPSCR_SZ == 0) {
    uVar10 = CONCAT44((undefined4)DAT_8c110bd0,in_fr5);
  }
  else {
    uVar10 = CONCAT44(DAT_8c110bd0._4_4_,(undefined4)DAT_8c110bd0);
  }
  if (*(int *)(ar4 + 0x28) != 0) {
    do {
      iVar2 = uVar7 * 4;
      if (in_FPSCR_SZ == 0) {
        *(int *)ar6 = (int)((ulonglong)uVar10 >> 0x20);
      }
      else {
        *ar6 = uVar10;
      }
      puVar4 = *(undefined4 **)(*(int *)(ar4 + 0x2c) + iVar2);
      puVar1 = *(undefined8 **)(ar4 + 0x30);
      puVar6 = puVar4 + *(int *)(*(int *)(ar4 + 0x34) + iVar2);
      pfVar5 = (float *)(*(int *)((int)puVar1 + iVar2) * 4 + ar5);
      while (puVar4 < puVar6) {
        if (in_FPSCR_SZ == 0) {
          fVar8 = *pfVar5;
          pfVar5 = pfVar5 + 1;
        }
        else {
          fVar8 = (float)((ulonglong)*(undefined8 *)pfVar5 >> 0x20);
          pfVar5 = pfVar5 + 2;
        }
        uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13
                | (uint)in_FPSCR_SZ << 0x14) & DAT_8c110bd0._4_4_;
        if (in_FPSCR_SZ == 0) {
          uVar9 = CONCAT44(*(undefined4 *)ar6,*puVar4);
          puVar4 = puVar4 + 1;
        }
        else {
          uVar9 = *ar6;
          puVar4 = puVar4 + 2;
        }
        in_FPSCR_CAUSE = 0;
        in_FPSCR_DN = 0;
        in_FPSCR_PR = (byte)((uVar3 & 0x80000) >> 0x13);
        in_FPSCR_SZ = (byte)((uVar3 & 0x100000) >> 0x14);
        if (in_FPSCR_PR == 0) {
          uVar9 = CONCAT44(fVar8 * (float)uVar9 + (float)((ulonglong)uVar9 >> 0x20),(float)uVar9);
        }
        if (in_FPSCR_SZ == 0) {
          *(int *)ar6 = (int)((ulonglong)uVar9 >> 0x20);
        }
        else {
          *ar6 = uVar9;
        }
      }
      uVar7 = uVar7 + 1;
      ar6 = (undefined8 *)((int)ar6 + 4);
    } while (uVar7 < *(uint *)(ar4 + 0x28));
  }
  return puVar1;
}



/* FUN_8c110aea @ 8c110aea callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c110aea(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') {
    uVar2 = (*(undefined4 **)(ar4 + 0xc))[1];
    iVar1 = (*(code *)PTR_FUN_8c110bd8)(**(undefined4 **)(ar4 + 0xc),uVar2,ar6,ar7);
    if (iVar1 != 0) {
      uVar2 = (*(code *)PTR_FUN_8c110bdc)(**(undefined4 **)(ar4 + 0x10),uVar2,ar6,ar7);
      FUN_8c110a90(ar4,iVar1,uVar2,ar7);
    }
  }
  iVar1 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar1 + 0x40)) == *(int *)(iVar1 + 0x3c)
         ^ 1;
}



/* FUN_8c110b58 @ 8c110b58 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c110b58(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  uint uVar1;
  int iVar2;
  
  if (ar4[0xb] != 0) {
    uVar1 = 0;
    iVar2 = *ar4;
    if (ar4[10] != 0) {
      do {
        (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)(ar4[0xb] + uVar1 * 4));
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)ar4[10]);
    }
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0xb]);
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0xc]);
    in_r0 = (**(code **)(iVar2 + 0x18))(iVar2,ar4[0xd]);
    ar4[0xb] = 0;
  }
  return in_r0;
}



/* FUN_8c110b5c @ 8c110b5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c110b5c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  uint uVar1;
  int a4;
  int *unaff_r14;
  
  if (unaff_r14[0xb] != 0) {
    uVar1 = 0;
    a4 = *unaff_r14;
    if (unaff_r14[10] != 0) {
      do {
        (**(code **)(a4 + 0x18))(a4,*(undefined4 *)(unaff_r14[0xb] + uVar1 * 4),ar6,ar7);
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)unaff_r14[10]);
    }
    (**(code **)(a4 + 0x18))(a4,unaff_r14[0xb],ar6,ar7);
    (**(code **)(a4 + 0x18))(a4,unaff_r14[0xc],ar6,ar7);
    in_r0 = (**(code **)(a4 + 0x18))(a4,unaff_r14[0xd],ar6,ar7);
    unaff_r14[0xb] = 0;
  }
  return in_r0;
}



/* FUN_8c110bec @ 8c110bec callers=0 callees=2 */

/* WARNING: Unknown calling convention */

uint FUN_8c110bec(undefined4 ar4,undefined4 ar5,int ar6,uint *ar7)

{
  int in_r0;
  uint uVar1;
  int a6;
  uint *a7;
  uint uVar2;
  undefined4 unaff_r14;
  char in_T;
  
  uVar2 = 1;
  if (in_T == '\x01') {
    a6 = ar6;
    a7 = ar7;
    FUN_8c110b58(unaff_r14,ar5,ar6,ar7);
    uVar1 = (**(code **)(ar6 + 0x3c))(ar6,ar5,a6,a7);
    if (*ar7 < uVar1) {
      (**(code **)(ar6 + 0x6c))(ar6,ar5,a6,a7);
      uVar2 = FUN_8c110c80(unaff_r14,ar5,a6,a7);
      uVar2 = (uint)((uVar2 & 0xff) == 0);
      *ar7 = *ar7 + 1;
    }
  }
  else if (in_r0 == DAT_8c110cf4) {
    FUN_8c110b58(unaff_r14,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c110cfc)(unaff_r14,ar5,ar6,ar7);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c110c80 @ 8c110c80 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c110d1c) */
/* WARNING: Removing unreachable block (ram,0x8c110f58) */
/* WARNING: Removing unreachable block (ram,0x8c110d20) */
/* WARNING: Removing unreachable block (ram,0x8c110d26) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c110c80(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar3;
  undefined *puVar4;
  double *a5;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  double *pdVar9;
  uint uVar10;
  int a4;
  double *pdVar11;
  undefined8 *puVar12;
  double *pdVar13;
  undefined4 *puVar14;
  double in_dr0;
  double dVar15;
  float fVar16;
  undefined8 in_dr2;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double in_dr4;
  float fVar21;
  undefined8 in_dr12;
  double dVar22;
  float fVar23;
  undefined8 in_dr14;
  double dVar24;
  double in_xd0;
  double dVar25;
  double in_xd2;
  double in_xd12;
  double in_xd14;
  bool bVar26;
  undefined4 in_PR;
  int iVar27;
  uint uVar28;
  byte in_FPSCR_CAUSE;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte in_FPSCR_DN;
  byte bVar32;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  undefined1 auStack_3c [16];
  undefined8 uStack_2c;
  undefined8 uStack_24;
  char cVar2;
  
  puVar3 = PTR_FUN_8c110d00;
  uVar5 = (undefined4)((ulonglong)in_dr2 >> 0x20);
  if (in_FPSCR_SZ == 0) {
    uStack_24 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar12 = &uStack_2c;
    uStack_2c = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar12 = (undefined8 *)auStack_3c;
    uStack_24 = in_xd14;
    uStack_2c = in_dr14;
  }
  *(undefined4 *)((int)puVar12 + -4) = in_PR;
  pdVar13 = (double *)((int)puVar12 + -0x14);
  puVar14 = (undefined4 *)((int)puVar12 + -0x14);
  uVar19 = DAT_8c110d04;
  if (in_FPSCR_SZ == 0) {
    uVar19 = SUB84(in_dr4,0);
    in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)in_dr14);
  }
  a4 = *ar4;
  (*(code *)PTR_FUN_8c110d00)(ar4,2,ar6,ar7);
  uVar20 = _DAT_8c110d08;
  if (in_FPSCR_SZ == 0) {
    uVar20 = uVar19;
  }
  uVar7 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c110cf8;
  dVar22 = in_dr0;
  if (in_FPSCR_SZ == 0) {
    dVar22 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),(int)in_dr12);
  }
  bVar29 = 0;
  bVar32 = 0;
  bVar31 = (byte)((uVar7 & 0x80000) >> 0x13);
  bVar30 = (byte)((uVar7 & 0x100000) >> 0x14);
  (*(code *)puVar3)(ar4,3,ar6,ar7);
  uVar7 = ((uint)bVar29 << 0xc | (uint)bVar32 << 0x12 | (uint)bVar31 << 0x13 | (uint)bVar30 << 0x14)
          & DAT_8c110cf8;
  bVar30 = 0;
  bVar31 = 0;
  bVar32 = (byte)((uVar7 & 0x80000) >> 0x13);
  bVar29 = (byte)((uVar7 & 0x100000) >> 0x14);
  if (bVar32 == 0) {
    uVar7 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar7 = (uint)in_dr0;
  }
  if (bVar29 == 0) {
    ar4[0xe] = (int)((ulonglong)in_dr4 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0xe) = in_dr4;
  }
  uVar7 = (uVar7 & 0xffff) >> 1;
  uVar10 = uVar7 + 1;
  iVar8 = uVar10 * 4;
  iVar27 = a4;
  a5 = (double *)(**(code **)(a4 + 0x10))(a4,iVar8,ar6,ar7);
  if (a5 == (double *)0x0) {
LAB_8c1110d4:
    (*(code *)PTR_FUN_8c1111e8)(ar4,100,ar6,ar7);
  }
  else {
    uVar6 = ((uint)bVar30 << 0xc | (uint)bVar31 << 0x12 | (uint)bVar32 << 0x13 |
            (uint)bVar29 << 0x14) & DAT_8c110f6c;
    uVar28 = (uVar6 & 0x80000) >> 0x13;
    cVar1 = (char)uVar28;
    uVar6 = (uVar6 & 0x100000) >> 0x14;
    cVar2 = (char)uVar6;
    fVar16 = (float)uVar7;
    dVar17 = (double)CONCAT44(uVar5,fVar16);
    uVar5 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar25 = dVar22;
    if (cVar2 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uVar5);
      dVar25 = in_xd0;
    }
    if (cVar1 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) / fVar16);
    }
    else {
      in_dr0 = in_dr0 / dVar17;
    }
    if (cVar2 == '\0') {
      *(int *)((int)puVar12 + -0x10) = SUB84(in_dr0,0);
      dVar22 = (double)CONCAT44(uVar5,DAT_8c110f74);
    }
    else {
      *(double *)((int)puVar12 + -0x10) = dVar25;
      in_xd12 = (double)CONCAT44(_DAT_8c110f78,DAT_8c110f74);
    }
    fVar21 = SUB84(dVar22,0);
    fVar16 = (float)((ulonglong)dVar22 >> 0x20);
    if (cVar1 != '\0' || fVar16 <= fVar21) {
      in_xd12 = dVar22;
      if (cVar2 == '\0') {
        in_xd12 = (double)CONCAT44(fVar16,uVar20);
      }
    }
    else if (cVar2 == '\0') {
      in_xd12 = (double)CONCAT44(fVar21,uVar20);
    }
    if (cVar2 == '\0') {
      in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),_DAT_8c110f78);
    }
    else {
      in_xd14 = (double)CONCAT44(DAT_8c110f7c,_DAT_8c110f78);
    }
    uVar7 = (uVar28 << 0x13 | uVar6 << 0x14) & DAT_8c110f6c;
    if (cVar2 == '\0') {
      dVar17 = (double)(ulonglong)DAT_8c110f7c;
      in_xd12 = (double)CONCAT44((int)((ulonglong)in_xd12 >> 0x20),(int)((ulonglong)in_dr4 >> 0x20))
      ;
    }
    else {
      in_xd2 = (double)CONCAT44(_DAT_8c110f80,DAT_8c110f7c);
    }
    bVar29 = (byte)((uVar7 & 0x80000) >> 0x13);
    bVar30 = (byte)(uVar7 >> 0x14);
    if (bVar30 == 0) {
      dVar17 = (double)CONCAT44(_DAT_8c110f78,SUB84(dVar17,0));
    }
    else {
      dVar17 = (double)CONCAT44(DAT_8c110f7c,_DAT_8c110f78);
    }
    fVar23 = (float)((ulonglong)in_xd12 >> 0x20);
    if (bVar29 == 0) {
      bVar26 = (float)((ulonglong)dVar17 >> 0x20) < fVar23;
      in_xd12 = (double)CONCAT44(fVar23,SUB84(in_xd12,0) * SUB84(dVar17,0));
    }
    else {
      bVar26 = dVar17 < in_xd12;
      in_xd12 = in_xd12 * dVar17;
    }
    pdVar11 = a5;
    if (bVar26) {
      do {
        dVar24 = in_xd14;
        if (bVar30 == 0) {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(in_dr4,0));
          dVar24 = in_xd2;
        }
        in_xd2 = dVar24;
        uVar7 = ((uint)bVar29 << 0x13 | (uint)bVar30 << 0x14) & DAT_8c110f6c;
        bVar29 = (byte)((uVar7 & 0x80000) >> 0x13);
        bVar30 = (byte)(uVar7 >> 0x14);
        if (bVar29 == 0) {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                    SUB84(dVar17,0) / SUB84(in_xd12,0));
        }
        else {
          dVar17 = dVar17 / in_xd12;
        }
        if (bVar30 == 0) {
          *(int *)pdVar11 = SUB84(dVar17,0);
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                    *(undefined4 *)((int)puVar12 + -0x10));
        }
        else {
          *pdVar11 = in_xd2;
          in_xd2 = *(double *)((int)puVar12 + -0x10);
        }
        if (bVar29 == 0) {
          fVar23 = SUB84(in_dr4,0) + SUB84(dVar17,0);
          in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),fVar23);
          bVar26 = fVar23 < (float)((ulonglong)in_xd12 >> 0x20);
        }
        else {
          in_dr4 = in_dr4 + dVar17;
          bVar26 = in_dr4 < in_xd12;
        }
        pdVar11 = (double *)((int)pdVar11 + 4);
      } while (bVar26);
    }
    puVar4 = PTR_thunk_FUN_8c013dfc_8c110f84;
    uVar5 = _DAT_8c110f80;
    if (bVar30 != 0) {
      in_xd2 = (double)CONCAT44(PTR_thunk_FUN_8c013dfc_8c110f84,_DAT_8c110f80);
      uVar5 = SUB84(dVar17,0);
    }
    uVar7 = ((uint)bVar29 << 0x13 | (uint)bVar30 << 0x14) & DAT_8c110f6c;
    if (bVar30 == 0) {
      dVar17 = (double)CONCAT44(*(undefined4 *)((int)puVar12 + -0x10),uVar5);
    }
    else {
      dVar17 = *(double *)((int)puVar12 + -0x10);
    }
    bVar29 = (byte)((uVar7 & 0x80000) >> 0x13);
    bVar30 = (byte)(uVar7 >> 0x14);
    if (bVar29 == 0) {
      fVar23 = SUB84(in_dr4,0);
      dVar24 = (double)CONCAT44((float)((ulonglong)in_dr4 >> 0x20) * fVar21,fVar23);
      fVar16 = (float)((ulonglong)dVar17 >> 0x20) / SUB84(dVar17,0) + fVar16;
      dVar17 = (double)CONCAT44(fVar16,SUB84(dVar17,0));
      bVar26 = fVar23 < fVar16;
    }
    else {
      dVar24 = in_dr4 * dVar22;
      dVar17 = dVar17 / dVar17 + dVar22;
      fVar23 = SUB84(dVar24,0);
      fVar16 = (float)((ulonglong)dVar17 >> 0x20);
      bVar26 = dVar24 < dVar17;
    }
    if (bVar30 == 0) {
      *(float *)((int)puVar12 + -0xc) = fVar16;
      *(int *)((int)puVar12 + -8) = (int)((ulonglong)dVar24 >> 0x20);
      dVar24 = (double)CONCAT44(DAT_8c110f88,fVar23);
    }
    else {
      *(double *)((int)puVar12 + -0xc) = dVar17;
      *(double *)((int)puVar12 + -8) = dVar24;
      dVar24 = (double)CONCAT44(_DAT_8c110f8c,DAT_8c110f88);
    }
    if (bVar26) {
      do {
        *(double **)((int)puVar12 + -0x18) = pdVar11;
        if (bVar30 == 0) {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                    *(undefined4 *)((int)puVar12 + -8));
        }
        else {
          in_xd2 = *(double *)((int)puVar12 + -8);
        }
        pdVar11 = (double *)((int)pdVar11 + 4);
        uVar7 = ((uint)bVar29 << 0x13 | (uint)bVar30 << 0x14) & DAT_8c110f6c;
        dVar15 = in_xd14;
        if (bVar30 == 0) {
          dVar15 = (double)CONCAT44(SUB84(dVar24,0),SUB84(in_xd12,0));
        }
        bVar29 = 0;
        bVar30 = 0;
        bVar32 = (byte)((uVar7 & 0x80000) >> 0x13);
        bVar31 = (byte)(uVar7 >> 0x14);
        if (bVar32 == 0) {
          in_xd12 = (double)((ulonglong)dVar15 & 0xffffffff);
        }
        else {
          in_xd12 = dVar15 / dVar17;
        }
        (*(code *)puVar4)(iVar27,iVar8,ar6,ar7);
        if (bVar31 == 0) {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c110f8c);
        }
        else {
          in_xd2 = (double)CONCAT44(_DAT_8c110f90,_DAT_8c110f8c);
        }
        uVar7 = ((uint)bVar29 << 0xc | (uint)bVar30 << 0x12 | (uint)bVar32 << 0x13 |
                (uint)bVar31 << 0x14) & DAT_8c110f6c;
        bVar29 = (byte)((uVar7 & 0x80000) >> 0x13);
        bVar30 = (byte)((uVar7 & 0x100000) >> 0x14);
        if (bVar29 == 0) {
          dVar15 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) / SUB84(dVar17,0),
                                    SUB84(in_dr0,0));
        }
        else {
          dVar15 = in_dr0 / dVar17;
        }
        uVar5 = (undefined4)((ulonglong)dVar24 >> 0x20);
        if (bVar30 == 0) {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar17,0));
          in_dr0 = (double)CONCAT44(uVar5,_DAT_8c110f90);
        }
        else {
          dVar25 = (double)CONCAT44(DAT_8c110f94,_DAT_8c110f90);
          in_dr0 = dVar24;
        }
        if (bVar29 == 0) {
          fVar16 = (float)((ulonglong)in_dr0 >> 0x20);
          in_dr0 = (double)CONCAT44(fVar16,fVar16 * (float)((ulonglong)dVar15 >> 0x20) +
                                           SUB84(in_dr0,0));
        }
        if (bVar30 == 0) {
          *(int *)*(double **)((int)puVar12 + -0x18) = SUB84(in_dr0,0);
          dVar17 = (double)CONCAT44(*(undefined4 *)((int)puVar12 + -0x10),SUB84(dVar15,0));
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)((int)puVar12 + -0xc));
        }
        else {
          **(double **)((int)puVar12 + -0x18) = dVar25;
          dVar17 = *(double *)((int)puVar12 + -0x10);
          dVar25 = *(double *)((int)puVar12 + -0xc);
        }
        if (bVar29 == 0) {
          fVar16 = SUB84(dVar24,0) + (float)((ulonglong)dVar17 >> 0x20);
          dVar24 = (double)CONCAT44(uVar5,fVar16);
          bVar26 = fVar16 < SUB84(in_dr0,0);
        }
        else {
          dVar24 = dVar24 + dVar17;
          bVar26 = dVar24 < in_dr0;
        }
      } while (bVar26);
    }
    uVar28 = SUB84(in_xd12,0);
    uVar7 = ((uint)bVar29 << 0x13 | (uint)bVar30 << 0x14) & DAT_8c110f6c;
    uVar6 = (uVar7 & 0x80000) >> 0x13;
    uVar7 = uVar7 >> 0x14;
    fVar16 = (float)((ulonglong)dVar22 >> 0x20);
    if ((char)uVar6 != '\0' || SUB84(dVar22,0) <= fVar16) {
      uVar6 = uVar6 << 0x13 | uVar7 << 0x14 | DAT_8c110f94 & 0x3fffff;
      uVar7 = (uVar6 & 0x100000) >> 0x14;
      cVar1 = (char)uVar7;
      if (cVar1 == '\0') {
        dVar17 = (double)CONCAT44((undefined4)DAT_8c110fa8,_DAT_8c110f78);
      }
      else {
        dVar17 = (double)CONCAT44(DAT_8c110fa8._4_4_,(undefined4)DAT_8c110fa8);
      }
      uVar7 = (uVar6 & 0x80000 | uVar7 << 0x14) & DAT_8c110f6c;
      dVar25 = in_xd2;
      if (cVar1 == '\0') {
        dVar25 = (double)((ulonglong)in_xd12 & 0xffffffff);
      }
      uVar28 = SUB84(dVar25,0);
      bVar29 = 0;
      bVar30 = 0;
      bVar32 = (byte)((uVar7 & 0x80000) >> 0x13);
      bVar31 = (byte)(uVar7 >> 0x14);
      (*(code *)puVar4)(iVar27,iVar8,ar6,ar7);
      uVar7 = ((uint)bVar29 << 0xc | (uint)bVar30 << 0x12 | (uint)bVar32 << 0x13 |
              (uint)bVar31 << 0x14) & DAT_8c110f6c;
      uVar6 = (uVar7 & 0x80000) >> 0x13;
      cVar1 = (char)uVar6;
      uVar7 = (uVar7 & 0x100000) >> 0x14;
      if (cVar1 == '\0') {
        dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) *
                                  (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 * dVar24;
      }
      if ((char)uVar7 == '\0') {
        dVar25 = (double)CONCAT44(_DAT_8c110f90,_DAT_8c110f8c);
      }
      else {
        in_xd2 = (double)CONCAT44(_DAT_8c110f90,_DAT_8c110f8c);
        dVar25 = (double)CONCAT44(DAT_8c110f94,_DAT_8c110f90);
      }
      if (cVar1 == '\0') {
        fVar16 = (float)((ulonglong)dVar17 >> 0x20) / SUB84(dVar25,0) +
                 (float)((ulonglong)dVar25 >> 0x20);
      }
      else {
        fVar16 = (float)((ulonglong)(dVar17 / dVar25 + dVar25) >> 0x20);
      }
      uVar7 = uVar6 << 0x13 | uVar7 << 0x14 | DAT_8c110f94 & 0x3fffff;
      bVar29 = (byte)((uVar7 & 0x80000) >> 0x13);
      bVar30 = (byte)((uVar7 & 0x100000) >> 0x14);
      dVar17 = (double)fVar16;
      if (bVar30 == 0) {
        dVar25 = (double)CONCAT44(DAT_8c110f9c,DAT_8c110fa0);
      }
      else {
        dVar25 = (double)CONCAT44(DAT_8c110fa0,DAT_8c110f9c);
        in_xd2 = (double)CONCAT44(DAT_8c110fa4,DAT_8c110fa0);
      }
      if (bVar29 == 0) {
        dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) +
                                  (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 + dVar25;
      }
      dVar25 = (double)DAT_8c110fa4;
      fVar16 = (float)((ulonglong)dVar17 >> 0x20);
      fVar21 = (float)((ulonglong)dVar25 >> 0x20);
      if (bVar29 == 0) {
        bVar26 = fVar16 < fVar21;
      }
      else {
        bVar26 = dVar17 < dVar25;
      }
      if (!bVar26) {
        if (bVar29 == 0) {
          dVar17 = (double)CONCAT44(fVar16 - (fVar21 + fVar21),SUB84(dVar17,0));
        }
        else {
          dVar17 = dVar17 - (dVar25 + dVar25);
        }
      }
      if (bVar29 == 0) {
        iVar27 = (int)(float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        iVar27 = (int)dVar17;
      }
    }
    else {
      uVar7 = uVar6 << 0x13 | uVar7 << 0x14 | DAT_8c110f94 & 0x3fffff;
      bVar29 = (byte)((uVar7 & 0x80000) >> 0x13);
      bVar30 = (byte)((uVar7 & 0x100000) >> 0x14);
      dVar25 = (double)fVar16;
      if (bVar30 == 0) {
        dVar17 = (double)CONCAT44(DAT_8c110f98,_DAT_8c110f78);
      }
      else {
        dVar17 = (double)CONCAT44(DAT_8c110f9c,DAT_8c110f98);
      }
      if (bVar29 == 0) {
        dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) /
                                  (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar25,0));
      }
      else {
        dVar25 = dVar25 / dVar17;
      }
      if (bVar30 == 0) {
        dVar17 = (double)CONCAT44(DAT_8c110f9c,DAT_8c110fa0);
      }
      else {
        dVar17 = (double)CONCAT44(DAT_8c110fa0,DAT_8c110f9c);
      }
      if (bVar29 == 0) {
        dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) +
                                  (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar25,0));
      }
      else {
        dVar25 = dVar25 + dVar17;
      }
      dVar17 = (double)DAT_8c110fa4;
      fVar16 = (float)((ulonglong)dVar17 >> 0x20);
      fVar21 = (float)((ulonglong)dVar25 >> 0x20);
      if (bVar29 == 0) {
        bVar26 = fVar21 < fVar16;
      }
      else {
        bVar26 = dVar25 < dVar17;
      }
      if (!bVar26) {
        if (bVar29 == 0) {
          dVar17 = (double)CONCAT44(fVar16 + fVar16,SUB84(dVar17,0));
          dVar25 = (double)CONCAT44(fVar21 - (fVar16 + fVar16),SUB84(dVar25,0));
        }
        else {
          dVar17 = dVar17 + dVar17;
          dVar25 = dVar25 - dVar17;
        }
      }
      if (bVar29 == 0) {
        iVar27 = (int)(float)((ulonglong)dVar25 >> 0x20);
      }
      else {
        iVar27 = (int)dVar25;
      }
    }
    uVar7 = DAT_8c110f6c;
    ar4[10] = iVar27;
    if (bVar30 == 0) {
      dVar25 = (double)(ulonglong)uVar28;
    }
    else {
      dVar25 = (double)CONCAT44(PTR_FUN_8c110fb0,DAT_8c110fa8._4_4_);
    }
    uVar7 = ((uint)bVar29 << 0x13 | (uint)bVar30 << 0x14) & uVar7;
    bVar29 = 0;
    bVar30 = 0;
    bVar32 = (byte)((uVar7 & 0x80000) >> 0x13);
    bVar31 = (byte)(uVar7 >> 0x14);
    (*(code *)puVar3)(ar4,4,ar6,ar7);
    uVar6 = ((uint)bVar29 << 0xc | (uint)bVar30 << 0x12 | (uint)bVar32 << 0x13 |
            (uint)bVar31 << 0x14) & DAT_8c110f6c;
    uVar7 = (uVar6 & 0x80000) >> 0x13;
    if ((char)uVar7 == '\0') {
      uVar28 = (uint)(float)((ulonglong)dVar17 >> 0x20);
    }
    else {
      uVar28 = (uint)dVar17;
    }
    if (ar4[10] == (uVar28 & 0xffff)) {
      uVar7 = (uVar7 << 0x13 | uVar6 & 0x100000) & DAT_8c110f6c;
      bVar31 = 0;
      bVar32 = 0;
      bVar29 = (byte)((uVar7 & 0x80000) >> 0x13);
      bVar30 = (byte)(uVar7 >> 0x14);
      iVar27 = (**(code **)(a4 + 0x14))(a4,ar4[10],4,ar7);
      uVar7 = DAT_8c110f6c;
      ar4[0xb] = iVar27;
      uVar7 = ((uint)bVar31 << 0xc | (uint)bVar32 << 0x12 | (uint)bVar29 << 0x13 |
              (uint)bVar30 << 0x14) & uVar7;
      bVar31 = 0;
      bVar29 = 0;
      bVar30 = (byte)((uVar7 & 0x80000) >> 0x13);
      bVar32 = (byte)((uVar7 & 0x100000) >> 0x14);
      iVar27 = (**(code **)(a4 + 0x14))(a4,ar4[10],4,ar7);
      uVar7 = DAT_8c110f6c;
      ar4[0xc] = iVar27;
      uVar7 = ((uint)bVar31 << 0xc | (uint)bVar29 << 0x12 | (uint)bVar30 << 0x13 |
              (uint)bVar32 << 0x14) & uVar7;
      bVar29 = 0;
      bVar30 = 0;
      bVar32 = (byte)((uVar7 & 0x80000) >> 0x13);
      bVar31 = (byte)((uVar7 & 0x100000) >> 0x14);
      iVar27 = (**(code **)(a4 + 0x14))(a4,ar4[10],4,ar7);
      uVar7 = DAT_8c110f6c;
      ar4[0xd] = iVar27;
      ar6 = 4;
      pdVar11 = (double *)ar4[10];
      uVar7 = ((uint)bVar29 << 0xc | (uint)bVar30 << 0x12 | (uint)bVar32 << 0x13 |
              (uint)bVar31 << 0x14) & uVar7;
      bVar29 = 0;
      bVar30 = 0;
      bVar32 = (byte)((uVar7 & 0x80000) >> 0x13);
      bVar31 = (byte)((uVar7 & 0x100000) >> 0x14);
      uVar5 = (**(code **)(a4 + 0x14))(a4,pdVar11,4,ar7);
      *(undefined4 *)((int)puVar12 + -0x14) = uVar5;
      if ((((ar4[0xb] != 0) && (ar4[0xc] != 0)) && (ar4[0xd] != 0)) &&
         (*(int *)((int)puVar12 + -0x14) != 0)) {
        uVar7 = 0;
        if (ar4[10] != 0) {
          do {
            uVar6 = DAT_8c110f6c;
            iVar27 = uVar7 * 4;
            *(undefined4 *)(ar4[0xd] + iVar27) = 0;
            *(undefined4 *)(ar4[0xc] + iVar27) = 0xffffffff;
            uVar6 = ((uint)bVar29 << 0xc | (uint)bVar30 << 0x12 | (uint)bVar32 << 0x13 |
                    (uint)bVar31 << 0x14) & uVar6;
            uVar28 = (uVar6 & 0x80000) >> 0x13;
            uVar6 = (uVar6 & 0x100000) >> 0x14;
            cVar1 = (char)uVar6;
            if (cVar1 == '\0') {
              dVar17 = (double)CONCAT44(_DAT_8c110f78,(float)(int)(uVar7 + 1));
            }
            else {
              dVar17 = (double)CONCAT44(DAT_8c110f7c,_DAT_8c110f78);
            }
            fVar16 = (float)((ulonglong)dVar17 >> 0x20);
            dVar15 = in_xd2;
            if (cVar1 == '\0') {
              dVar15 = (double)CONCAT44(SUB84(dVar17,0),SUB84(dVar25,0));
            }
            dVar25 = dVar15;
            uVar5 = (undefined4)((ulonglong)dVar25 >> 0x20);
            uVar19 = (undefined4)((ulonglong)dVar24 >> 0x20);
            if ((char)uVar28 != '\0' || fVar16 <= SUB84(dVar17,0)) {
              dVar15 = dVar25;
              if (cVar1 == '\0') {
                dVar24 = (double)CONCAT44(uVar19,uVar5);
                dVar15 = in_xd14;
              }
            }
            else {
              if (cVar1 == '\0') {
                dVar24 = (double)CONCAT44(uVar19,uVar5);
                dVar17 = (double)CONCAT44(fVar16,DAT_8c110f70);
              }
              else {
                in_xd2 = (double)CONCAT44(DAT_8c110f74,DAT_8c110f70);
                in_xd14 = dVar25;
              }
              dVar15 = in_xd14;
              if ((char)uVar28 == '\0') {
                dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                          SUB84(dVar24,0) + SUB84(dVar17,0));
              }
              else {
                dVar24 = dVar24 + dVar17;
              }
            }
            in_xd14 = dVar15;
            if (uVar7 < 10) {
              dVar17 = in_xd14;
              if (cVar1 == '\0') {
                dVar17 = (double)((longlong)dVar24 << 0x20);
              }
              uVar6 = (uVar28 << 0x13 | uVar6 << 0x14) & DAT_8c1111c8;
              fVar16 = (float)((ulonglong)dVar17 >> 0x20);
              dVar18 = (double)CONCAT44(fVar16,DAT_8c1111c4);
              bVar29 = (byte)((uVar6 & 0x80000) >> 0x13);
              bVar30 = (byte)(uVar6 >> 0x14);
              if (bVar29 == 0) {
                dVar18 = (double)CONCAT44(fVar16 * DAT_8c1111c4,DAT_8c1111c4);
              }
              else {
                dVar18 = dVar18 * dVar18;
              }
              if (bVar30 == 0) {
                *(int *)(*(int *)pdVar13 + uVar7 * 4) = (int)((ulonglong)dVar18 >> 0x20);
              }
              else {
                *(double *)(*(int *)pdVar13 + uVar7 * 4) = dVar18;
              }
            }
            else {
              dVar15 = in_xd14;
              if (cVar1 == '\0') {
                dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar24,0));
                dVar15 = in_xd2;
              }
              in_xd2 = dVar15;
              *(uint *)((int)pdVar13 + -4) = *(int *)pdVar13 + uVar7 * 4;
              uVar28 = (uVar28 << 0x13 | uVar6 << 0x14) & DAT_8c1111c8;
              uVar6 = (uVar28 & 0x80000) >> 0x13;
              if ((char)uVar6 == '\0') {
                fVar16 = SUB84(dVar17,0) / (float)((ulonglong)dVar24 >> 0x20);
              }
              else {
                fVar16 = SUB84(dVar17 / dVar24,0);
              }
              uVar6 = uVar6 << 0x13 | uVar28 & 0xfff00000 | DAT_8c1111cc & 0x3fffff;
              uVar28 = (uVar6 & 0x80000) >> 0x13;
              uVar6 = (uVar6 & 0x100000) >> 0x14;
              cVar1 = (char)uVar6;
              dVar17 = (double)fVar16;
              if (cVar1 == '\0') {
                dVar15 = (double)CONCAT44(DAT_8c1111d0,DAT_8c1111d4);
              }
              else {
                dVar15 = (double)CONCAT44(DAT_8c1111d4,DAT_8c1111d0);
              }
              if (cVar1 == '\0') {
                dVar25 = (double)((ulonglong)dVar25 & 0xffffffff);
              }
              else {
                dVar25 = (double)CONCAT44(PTR_thunk_FUN_8c014064_8c1111dc,_DAT_8c1111d8);
              }
              if ((char)uVar28 == '\0') {
                dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) +
                                          (float)((ulonglong)dVar15 >> 0x20),SUB84(dVar17,0));
              }
              else {
                dVar17 = dVar17 + dVar15;
              }
              uVar6 = (uVar28 << 0x13 | uVar6 << 0x14) & DAT_8c1111c8;
              dVar18 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),(float)dVar17);
              if (cVar1 == '\0') {
                dVar25 = (double)(ulonglong)(uint)(float)dVar17;
              }
              bVar29 = 0;
              bVar30 = 0;
              bVar32 = (byte)((uVar6 & 0x80000) >> 0x13);
              bVar31 = (byte)(uVar6 >> 0x14);
              (*(code *)PTR_thunk_FUN_8c014064_8c1111dc)(iVar27,pdVar11,ar6,ar7);
              uVar6 = ((uint)bVar29 << 0xc | (uint)bVar30 << 0x12 | (uint)bVar32 << 0x13 |
                      (uint)bVar31 << 0x14) & DAT_8c1111c8;
              bVar29 = (byte)((uVar6 & 0x80000) >> 0x13);
              bVar30 = (byte)((uVar6 & 0x100000) >> 0x14);
              if (bVar29 == 0) {
                dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) * SUB84(dVar22,0),
                                          SUB84(dVar15,0));
              }
              else {
                dVar15 = dVar15 * dVar22;
              }
              if (bVar30 == 0) {
                *(int *)*(double **)((int)pdVar13 + -4) = (int)((ulonglong)dVar15 >> 0x20);
              }
              else {
                **(double **)((int)pdVar13 + -4) = dVar15;
              }
            }
            uVar6 = 1;
            iVar27 = uVar7 * 4;
            if (1 < uVar10) {
              do {
                if (bVar30 == 0) {
                  dVar25 = (double)CONCAT44(*(undefined4 *)(uVar6 * 4 + (int)a5),SUB84(dVar25,0));
                }
                else {
                  dVar25 = *(double *)(uVar6 * 4 + (int)a5);
                }
                fVar16 = (float)((ulonglong)dVar25 >> 0x20);
                uVar28 = (uint)bVar29 << 0x13 | (uint)bVar30 << 0x14 | DAT_8c1111cc & 0x3fffff;
                bVar29 = (byte)((uVar28 & 0x80000) >> 0x13);
                bVar30 = (byte)((uVar28 & 0x100000) >> 0x14);
                dVar15 = (double)fVar16;
                dVar17 = (double)SUB84(dVar24,0);
                if (bVar30 == 0) {
                  *(int *)((int)pdVar13 + -4) = (int)((ulonglong)dVar15 >> 0x20);
                  pdVar11 = (double *)((int)pdVar13 + -8);
                  *(int *)((int)pdVar13 + -8) = SUB84(dVar15,0);
                  dVar15 = (double)CONCAT44(DAT_8c1111e0,DAT_8c1111d4);
                }
                else {
                  *(double *)((int)pdVar13 + -8) = dVar15;
                  pdVar11 = (double *)((int)pdVar13 + -0x10);
                  *(double *)((int)pdVar13 + -0x10) = in_xd2;
                  dVar15 = (double)CONCAT44(DAT_8c1111e4,DAT_8c1111e0);
                  in_xd2 = (double)CONCAT44(_DAT_8c1111d8,DAT_8c1111d4);
                }
                if (bVar29 == 0) {
                  dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) +
                                            (float)((ulonglong)dVar15 >> 0x20),SUB84(dVar17,0));
                }
                else {
                  dVar17 = dVar17 + dVar15;
                }
                if (bVar30 == 0) {
                  pdVar13 = pdVar11 + 1;
                  pdVar9 = pdVar11;
                }
                else {
                  in_xd2 = *pdVar11;
                  pdVar9 = pdVar11 + 1;
                  pdVar13 = pdVar11 + 2;
                }
                dVar18 = *pdVar9;
                if (bVar29 == 0) {
                  bVar26 = (float)((ulonglong)dVar17 >> 0x20) < (float)((ulonglong)dVar18 >> 0x20);
                }
                else {
                  bVar26 = dVar17 < dVar18;
                }
                if (bVar26) {
                  dVar15 = (double)fVar16;
                  dVar17 = (double)SUB84(dVar24,0);
                  if (bVar30 == 0) {
                    *(int *)((int)pdVar13 + -4) = (int)((ulonglong)dVar15 >> 0x20);
                    pdVar11 = (double *)((int)pdVar13 + -8);
                    *(int *)((int)pdVar13 + -8) = SUB84(dVar15,0);
                    dVar15 = (double)CONCAT44(DAT_8c1111e4,DAT_8c1111d4);
                  }
                  else {
                    *(double *)((int)pdVar13 + -8) = dVar15;
                    pdVar11 = (double *)((int)pdVar13 + -0x10);
                    *(double *)((int)pdVar13 + -0x10) = in_xd2;
                    dVar15 = (double)CONCAT44(PTR_FUN_8c1111e8,DAT_8c1111e4);
                    in_xd2 = (double)CONCAT44(_DAT_8c1111d8,DAT_8c1111d4);
                  }
                  if (bVar29 == 0) {
                    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) +
                                              (float)((ulonglong)dVar15 >> 0x20),SUB84(dVar17,0));
                  }
                  else {
                    dVar17 = dVar17 + dVar15;
                  }
                  if (bVar30 == 0) {
                    pdVar13 = pdVar11 + 1;
                    pdVar9 = pdVar11;
                  }
                  else {
                    in_xd2 = *pdVar11;
                    pdVar9 = pdVar11 + 1;
                    pdVar13 = pdVar11 + 2;
                  }
                  dVar18 = *pdVar9;
                  if (bVar29 == 0) {
                    bVar26 = (float)((ulonglong)dVar18 >> 0x20) < (float)((ulonglong)dVar17 >> 0x20)
                    ;
                  }
                  else {
                    bVar26 = dVar18 < dVar17;
                  }
                  if (!bVar26) goto LAB_8c111082;
                  iVar8 = 1;
                }
                else {
LAB_8c111082:
                  iVar8 = 0;
                }
                *(int *)(ar4[0xd] + iVar27) = *(int *)(ar4[0xd] + iVar27) + iVar8;
                if ((iVar8 != 0) && (*(int *)(ar4[0xc] + iVar27) == -1)) {
                  *(uint *)(ar4[0xc] + iVar27) = uVar6;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar10);
            }
            ar6 = 4;
            *(int *)((int)pdVar13 + -4) = ar4[0xb] + iVar27;
            uVar6 = ((uint)bVar29 << 0x13 | (uint)bVar30 << 0x14) & DAT_8c1111c8;
            bVar29 = 0;
            bVar30 = 0;
            bVar32 = (byte)((uVar6 & 0x80000) >> 0x13);
            bVar31 = (byte)(uVar6 >> 0x14);
            uVar5 = (**(code **)(a4 + 0x14))(a4,*(undefined4 *)(ar4[0xd] + iVar27),4,ar7);
            **(undefined4 **)((int)pdVar13 + -4) = uVar5;
            if (*(int *)(ar4[0xb] + iVar27) == 0) goto LAB_8c1110d4;
            pdVar11 = *(double **)(ar4[0xb] + iVar27);
            uVar6 = 0;
            pdVar9 = pdVar11;
            dVar17 = in_xd2;
            if (*(int *)(ar4[0xd] + iVar27) != 0) {
              do {
                iVar8 = (*(int *)(ar4[0xc] + iVar27) + uVar6) * 4;
                uVar28 = ((uint)bVar29 << 0xc | (uint)bVar30 << 0x12 | (uint)bVar32 << 0x13 |
                         (uint)bVar31 << 0x14) & DAT_8c1111c8;
                if (bVar31 == 0) {
                  dVar25 = (double)CONCAT44(*(undefined4 *)(iVar8 + (int)a5),SUB84(dVar25,0));
                }
                else {
                  dVar25 = *(double *)(iVar8 + (int)a5);
                }
                bVar29 = 0;
                bVar30 = 0;
                bVar32 = (byte)((uVar28 & 0x80000) >> 0x13);
                bVar31 = (byte)((uVar28 & 0x100000) >> 0x14);
                fVar21 = (float)((ulonglong)dVar25 >> 0x20);
                fVar16 = SUB84(dVar24,0);
                if (bVar32 == 0) {
                  bVar26 = fVar21 < fVar16;
                }
                else {
                  bVar26 = dVar25 < dVar24;
                }
                pdVar11 = (double *)((int)pdVar9 + 4);
                uVar5 = (undefined4)((ulonglong)dVar18 >> 0x20);
                if (bVar26) {
                  in_xd2 = dVar25;
                  if (bVar31 == 0) {
                    dVar18 = (double)CONCAT44(uVar5,fVar21);
                    in_xd2 = dVar17;
                  }
                  if (bVar32 == 0) {
                    fVar16 = SUB84(dVar18,0) - fVar16;
                  }
                  else {
                    fVar16 = SUB84(dVar18 - dVar24,0);
                  }
                }
                else {
                  in_xd2 = in_xd14;
                  if (bVar31 == 0) {
                    dVar18 = (double)CONCAT44(uVar5,fVar16);
                    in_xd2 = dVar17;
                  }
                  if (bVar32 == 0) {
                    fVar16 = SUB84(dVar18,0) - fVar21;
                  }
                  else {
                    fVar16 = SUB84(dVar18 - dVar25,0);
                  }
                }
                if (bVar31 == 0) {
                  dVar18 = (double)CONCAT44(DAT_8c1111ec,fVar16);
                }
                else {
                  dVar18 = (double)CONCAT44(_DAT_8c1111f0,DAT_8c1111ec);
                }
                uVar6 = uVar6 + 1;
                if (bVar32 == 0) {
                  fVar16 = (float)((ulonglong)dVar18 >> 0x20);
                  dVar18 = (double)CONCAT44(fVar16,SUB84(dVar18,0) + fVar16);
                }
                else {
                  dVar18 = dVar18 + dVar18;
                }
                if (bVar31 == 0) {
                  *(int *)pdVar9 = SUB84(dVar18,0);
                }
                else {
                  *pdVar9 = in_xd2;
                }
                pdVar9 = pdVar11;
                dVar17 = in_xd2;
              } while (uVar6 < *(uint *)(ar4[0xd] + iVar27));
            }
            uVar7 = uVar7 + 1;
            puVar14 = (undefined4 *)pdVar13;
          } while (uVar7 < (uint)ar4[10]);
        }
        (**(code **)(a4 + 0x18))(a4,*puVar14,ar6,ar7);
        (**(code **)(a4 + 0x18))(a4,a5,ar6,ar7);
        return 0;
      }
      (*(code *)PTR_FUN_8c110fb0)(ar4,100,ar6,ar7);
    }
  }
  return 1;
}



/* FUN_8c11116e @ 8c11116e callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11116e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 extraout_fr1;
  float extraout_fr0;
  int iVar1;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  
  (*(code *)PTR_FUN_8c1111f4)(ar4,4,ar6,ar7);
  if ((char)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13)
              & DAT_8c1111c8 & 0x80000) >> 0x13) == '\0') {
    iVar1 = (int)extraout_fr0;
  }
  else {
    iVar1 = (int)(double)CONCAT44(extraout_fr0,extraout_fr1);
  }
  *(short *)(**(int **)(ar4 + 0x10) + 0xc) = (short)(iVar1 << 2);
  return 0;
}



/* FUN_8c1111a0 @ 8c1111a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1111a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c111204)(ar4,ar5,1,1);
  return uVar1;
}



/* FUN_8c111208 @ 8c111208 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c111208(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int a5;
  int a7;
  int iVar2;
  int iVar3;
  int iVar4;
  char cStack_24;
  
  cStack_24 = '\0';
  iVar4 = ar5 * 4;
  iVar1 = 0;
  a5 = ar4[0xe];
joined_r0x8c111238:
  do {
    if (a5 == 0) {
      return (int)cStack_24;
    }
    a7 = *(int *)(*(int *)(a5 + 8) + iVar4);
    if (-1 < a7) {
      iVar2 = a7;
      if ((ar6 == 0) && (a7 == 0)) {
        iVar2 = -1;
      }
      *(int *)(*(int *)(a5 + 8) + iVar4) = iVar2 - ar6;
      if (iVar2 - ar6 < 0) {
        iVar3 = *(int *)(a5 + 0xc);
        iVar2 = *(int *)(a5 + 4) + -1;
        *(int *)(a5 + 4) = iVar2;
        if (iVar2 == 0) {
          *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
        }
        cStack_24 = '\x01';
        iVar2 = *ar4;
        (*(code *)PTR_FUN_8c1113cc)(iVar3,*(undefined4 *)(ar4[0xd] + iVar4),iVar2,a7);
        if (*(int *)(a5 + 4) == 0) {
          iVar3 = *(int *)(a5 + 0x10);
          if (iVar1 == 0) {
            ar4[0xe] = iVar3;
          }
          else {
            *(int *)(iVar1 + 0x10) = iVar3;
          }
          (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)(a5 + 8),iVar2,a7);
          (**(code **)(*ar4 + 0x18))(*ar4,a5,iVar2,a7);
          a5 = iVar3;
          goto joined_r0x8c111238;
        }
      }
    }
    iVar1 = a5;
    a5 = *(int *)(a5 + 0x10);
  } while( true );
}



/* FUN_8c1112e2 @ 8c1112e2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1112e2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(ar4 + 0xc);
  uVar2 = 0;
  uVar3 = 0;
  if (*(char *)(ar4 + 8) != '\0') {
    do {
      if ((*(int *)(*piVar4 + 0x38) != 0) &&
         (*(int *)(*(int *)(*piVar4 + 0x2c) + piVar4[1] * 4) != 0)) {
        uVar1 = FUN_8c111208(*piVar4,piVar4[1],0,ar7);
        uVar2 = uVar2 | uVar1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < *(byte *)(ar4 + 8));
  }
  return uVar2;
}



/* FUN_8c1112ee @ 8c1112ee callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c1112ee(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int unaff_r12;
  uint uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(unaff_r12 + 0xc);
  uVar2 = ar4;
  if (ar4 < *(byte *)(unaff_r12 + 8)) {
    do {
      if ((*(int *)(*piVar3 + 0x38) != 0) &&
         (*(int *)(*(int *)(*piVar3 + 0x2c) + piVar3[1] * 4) != 0)) {
        uVar1 = FUN_8c111208(*piVar3,piVar3[1],0,ar7);
        ar4 = ar4 | uVar1;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 < *(byte *)(unaff_r12 + 8));
  }
  return ar4;
}



/* FUN_8c111342 @ 8c111342 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c111342(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
  if (*(int *)(ar4 + 0x14) != 0) {
    do {
      in_r0 = uVar2 * 4;
      if (*(int *)(in_r0 + *(int *)(ar4 + 0x40)) != *(int *)(ar4 + 0x3c)) {
        in_r0 = *(int *)(ar4 + 0x2c);
        iVar1 = uVar2 * 4;
        if (*(int *)(ar4 + 0x24) == *(int *)(in_r0 + iVar1)) {
          *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
          break;
        }
        if (*(uint *)(ar4 + 0x24) < *(uint *)(ar4 + 0x28)) {
          in_r0 = *(int *)(ar4 + 0x2c);
          if ((*(uint *)(in_r0 + iVar1) < *(uint *)(ar4 + 0x28)) &&
             (*(uint *)(ar4 + 0x24) < *(uint *)(in_r0 + iVar1))) {
            in_r0 = *(int *)(ar4 + 0x2c);
            *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(in_r0 + iVar1);
          }
        }
        else {
          in_r0 = *(int *)(ar4 + 0x2c);
          if ((*(uint *)(in_r0 + iVar1) < *(uint *)(ar4 + 0x28)) ||
             (*(uint *)(ar4 + 0x24) < *(uint *)(in_r0 + iVar1))) {
            in_r0 = *(int *)(ar4 + 0x2c);
            *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(in_r0 + iVar1);
          }
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(ar4 + 0x14));
  }
  if (uVar2 == *(uint *)(ar4 + 0x14)) {
    in_r0 = 0x30;
    *(undefined1 *)(ar4 + 0x30) = 0;
  }
  return in_r0;
}



/* FUN_8c1113d0 @ 8c1113d0 callers=0 callees=3 */

/* WARNING: Unknown calling convention */

uint FUN_8c1113d0(int *ar4,uint ar5,int ar6,int ar7)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *extraout_r2;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  uVar9 = 1;
  uVar3 = ar5 & 0xff;
  uVar12 = 1;
  iVar10 = ar6 * 4;
  if (uVar3 == 1) {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        iVar10 = uVar3 * 4;
        uVar3 = uVar3 + 1;
        *(int *)(ar4[0xb] + iVar10) = ar4[9];
        *(undefined4 *)(ar4[0x10] + iVar10) = 0;
      } while (uVar3 < (uint)ar4[5]);
    }
  }
  else if (uVar3 == 2) {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar12 = 0;
    if (ar4[5] != 0) {
      do {
        iVar10 = uVar12 * 4;
        uVar12 = uVar12 + 1;
        *(int *)(ar4[0xb] + iVar10) = ar4[9];
        *(undefined4 *)(ar4[0x10] + iVar10) = 0;
      } while (uVar12 < (uint)ar4[5]);
    }
    uVar12 = FUN_8c1117e4(ar4,(uint)*(ushort *)((int)ar4 + 0xe),1,ar7);
  }
  else if (uVar3 == 3) {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar12 = 0;
    if (ar4[5] != 0) {
      do {
        iVar10 = uVar12 * 4;
        uVar12 = uVar12 + 1;
        *(int *)(ar4[0xb] + iVar10) = ar4[9];
        *(undefined4 *)(ar4[0x10] + iVar10) = 0;
      } while (uVar12 < (uint)ar4[5]);
    }
    uVar12 = FUN_8c1117e4(ar4,ar6,1,ar7);
  }
  else if (uVar3 == 4) {
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        iVar10 = uVar3 * 4;
        uVar3 = uVar3 + 1;
        *(int *)(ar4[0xb] + iVar10) = ar4[9];
        *(int *)(ar4[0x10] + iVar10) = ar4[0xf];
      } while (uVar3 < (uint)ar4[5]);
    }
    ar4[10] = ar4[9];
    *(undefined1 *)(ar4 + 0xc) = 0;
    ar4[6] = 0;
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        uVar7 = uVar3 + 1;
        *(undefined4 *)(uVar3 * 4 + ar4[0xb]) = 0;
        uVar3 = uVar7;
      } while (uVar7 < (uint)ar4[5]);
    }
    puVar2 = PTR_FUN_8c1116ec;
    iVar10 = ar4[0xe];
    while (iVar10 != 0) {
      if (*(int *)(iVar10 + 0xc) != ar6) {
        uVar3 = (*(code *)puVar2)(*(undefined4 *)(iVar10 + 0xc),*ar4,uVar9,ar7);
        uVar12 = uVar12 | uVar3;
      }
      iVar11 = *(int *)(iVar10 + 0x10);
      (**(code **)(*ar4 + 0x18))(*ar4,iVar10,uVar9,ar7);
      iVar10 = iVar11;
    }
    ar4[0xe] = 0;
  }
  else if (uVar3 == 5) {
    if (*(int *)(ar4[0xb] + iVar10) == 0) {
      *(int *)(ar4[0xb] + iVar10) = ar4[9];
      *(int *)(ar4[0x10] + iVar10) = ar4[0xf];
      if (ar4[6] == 0) {
        ar4[10] = ar4[9];
      }
      ar4[6] = ar4[6] + 1;
    }
  }
  else if (uVar3 == 6) {
    if ((*(int *)(ar4[0xb] + iVar10) != 0) && (ar4[0xe] == 0)) {
      iVar8 = *(int *)(ar4[0xb] + iVar10);
      *(int *)(ar4[0xb] + iVar10) = 0;
      iVar11 = ar4[6];
      ar4[6] = iVar11 + -1;
      if (iVar11 + -1 == 0) {
        ar4[10] = ar4[9];
      }
      else if (iVar8 == ar4[10]) {
        FUN_8c111342(ar4,iVar8,1,ar7);
      }
      *(int *)(ar4[0x10] + iVar10) = ar4[0xf];
    }
  }
  else if (uVar3 == 7) {
    if (*(int *)(ar4[0xb] + iVar10) == 0) {
      *(int *)(ar4[0xb] + iVar10) = ar4[9];
      *(int *)(ar4[0x10] + iVar10) = ar4[0xf];
      ar4[6] = ar4[6] + 1;
    }
    uVar12 = FUN_8c11189a(ar4,ar6,ar7,ar7);
  }
  else if (uVar3 == (int)DAT_8c1114a0) {
    if ((*(char *)((int)ar4 + 0x31) != '\0') && (ar4[6] != 0)) {
      bVar1 = false;
      iVar11 = ar4[0xe];
      iVar10 = 0;
      while (iVar8 = iVar11, iVar8 != 0) {
        if (*(int *)(iVar8 + 0xc) == ar6) {
          bVar1 = true;
        }
        iVar10 = iVar8;
        iVar11 = *(int *)(iVar8 + 0x10);
      }
      if (!bVar1) {
        *(int *)(ar6 + 4) = *(int *)(ar6 + 4) + 1;
        iVar11 = ar7;
        iVar8 = (**(code **)(*ar4 + 0x10))(*ar4,0x14,1,ar7);
        uVar4 = (**(code **)(*ar4 + 0x10))(*ar4,ar4[5] << 2,uVar9,iVar11);
        uVar9 = DAT_8c1116f0;
        *(undefined4 *)(iVar8 + 8) = uVar4;
        uVar3 = 0;
        if (ar4[5] != 0) {
          do {
            if (*(int *)(uVar3 * 4 + ar4[0xb]) == 0) {
              *(undefined4 *)(*(int *)(iVar8 + 8) + uVar3 * 4) = uVar9;
            }
            else if ((*(int *)(ar4[0xb] + uVar3 * 4) == ar4[9]) &&
                    (*(int *)(ar4[0x10] + uVar3 * 4) != ar4[0xf])) {
              *(int *)(*(int *)(iVar8 + 8) + uVar3 * 4) = ar4[2] + ar7;
            }
            else {
              if ((uint)ar4[9] < *(uint *)(ar4[0xb] + uVar3 * 4)) {
                iVar6 = (*(code *)PTR_libgcc_divide_helper_010468_8c11193c)
                                  (uVar3,uVar9,uVar3 << 2,iVar11);
                piVar5 = extraout_r2;
              }
              else {
                piVar5 = (int *)(*(int *)(iVar8 + 8) + uVar3 * 4);
                iVar6 = (*(code *)PTR_libgcc_divide_helper_010468_8c1116f4)
                                  (uVar3,uVar9,uVar3 * 4,iVar11);
              }
              *piVar5 = iVar6 + ar7;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)ar4[5]);
        }
        *(int *)(iVar8 + 4) = ar4[6];
        *(int *)(iVar8 + 0xc) = ar6;
        *(undefined4 *)(iVar8 + 0x10) = 0;
        if (iVar10 == 0) {
          ar4[0xe] = iVar8;
        }
        else {
          *(int *)(iVar10 + 0x10) = iVar8;
        }
      }
    }
  }
  else if (uVar3 == (int)DAT_8c1114a2) {
    iVar10 = ar4[0xe];
    if (ar4[7] != 0) {
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[7],1,ar7);
    }
    if (ar4[0xb] != 0) {
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[0xb],uVar9,ar7);
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[0xd],uVar9,ar7);
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[0x10],uVar9,ar7);
    }
    while (iVar10 != 0) {
      iVar11 = *(int *)(iVar10 + 0x10);
      (**(code **)(*ar4 + 0x18))(*ar4,iVar10,uVar9,ar7);
      iVar10 = iVar11;
    }
    (**(code **)(*ar4 + 0x18))(*ar4,ar4,uVar9,ar7);
  }
  else {
    uVar12 = 0;
  }
  return uVar12;
}



/* FUN_8c1117e4 @ 8c1117e4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1117e4(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(uint *)(ar4 + 0x24) < *(uint *)(ar4 + 0x28)) {
    uVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c11193c)(ar4,ar5,ar6,ar7);
  }
  else {
    iVar1 = (*(code *)PTR_libgcc_divide_helper_01051c_8c111944)(ar4,ar5,ar6,ar7);
    uVar3 = *(int *)(ar4 + 8) - iVar1;
  }
  if (uVar3 < ar5) {
    return 0;
  }
  iVar1 = ar5 * *(ushort *)(ar4 + 0xc);
  uVar3 = *(int *)(ar4 + 0x28) - iVar1;
  *(uint *)(ar4 + 0x28) = uVar3;
  if (uVar3 < *(uint *)(ar4 + 0x1c)) {
    *(int *)(ar4 + 0x28) = *(int *)(ar4 + 0x28) + *(int *)(ar4 + 0x10);
  }
  uVar3 = 0;
  if (*(int *)(ar4 + 0x28) == *(int *)(ar4 + 0x24)) {
    *(undefined1 *)(ar4 + 0x30) = 1;
  }
  if (*(int *)(ar4 + 0x14) != 0) {
    do {
      if (*(int *)(uVar3 * 4 + *(int *)(ar4 + 0x2c)) != 0) {
        iVar2 = uVar3 * 4;
        *(int *)(*(int *)(ar4 + 0x2c) + iVar2) = *(int *)(*(int *)(ar4 + 0x2c) + iVar2) - iVar1;
        *(int *)(*(int *)(ar4 + 0x40) + iVar2) = *(int *)(*(int *)(ar4 + 0x40) + iVar2) - iVar1;
        if (*(uint *)(*(int *)(ar4 + 0x2c) + iVar2) < *(uint *)(ar4 + 0x1c)) {
          *(int *)(*(int *)(ar4 + 0x2c) + iVar2) =
               *(int *)(*(int *)(ar4 + 0x2c) + iVar2) + *(int *)(ar4 + 0x10);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(ar4 + 0x14));
  }
  return 1;
}



/* FUN_8c11189a @ 8c11189a callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11189a(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint a6;
  
  if (ar6 != 0) {
    iVar4 = ar5 * 4;
    a6 = ar6 * (uint)*(ushort *)(ar4 + 0xc);
    uVar2 = *(int *)(ar4 + 0x24) - *(int *)(*(int *)(ar4 + 0x2c) + iVar4);
    if (DAT_8c111948 <= uVar2) {
      uVar2 = uVar2 + *(int *)(ar4 + 0x10);
    }
    if ((uVar2 == 0) && (*(int *)(*(int *)(ar4 + 0x40) + iVar4) == *(int *)(ar4 + 0x3c))) {
      uVar2 = *(uint *)(ar4 + 0x10);
    }
    if (uVar2 < a6) {
      return 0;
    }
    if (a6 == uVar2) {
      *(undefined1 *)(ar4 + 0x30) = 1;
    }
    piVar3 = (int *)(*(int *)(ar4 + 0x2c) + iVar4);
    iVar1 = *(int *)(ar4 + 0x1c);
    uVar2 = (*piVar3 - iVar1) - a6;
    if (DAT_8c111948 <= uVar2) {
      iVar1 = *(int *)(ar4 + 0x20);
    }
    *piVar3 = iVar1 + uVar2;
    *(int *)(*(int *)(ar4 + 0x40) + iVar4) = *(int *)(*(int *)(ar4 + 0x40) + iVar4) - ar6;
    if (*(int *)(ar4 + 0x14) == 1) {
      *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar4);
    }
    else {
      FUN_8c111342(ar4,uVar2,a6,ar6);
    }
  }
  return 1;
}



/* FUN_8c11194c @ 8c11194c callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int * FUN_8c11194c(int *ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  double in_dr0;
  float fVar9;
  undefined4 in_fr3;
  float fVar11;
  double dVar10;
  double dVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined4 in_PR;
  undefined1 uVar15;
  ushort uVar16;
  int iVar17;
  uint uVar18;
  byte in_FPSCR_CAUSE;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte in_FPSCR_DN;
  byte bVar22;
  byte bVar23;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  char cVar2;
  
  puVar3 = PTR_FUN_8c111bb4;
  if (in_FPSCR_SZ == 0) {
    puVar8 = auStack_18;
  }
  else {
    puVar8 = auStack_1c;
  }
  *(undefined4 *)(puVar8 + -4) = in_PR;
  (*(code *)PTR_FUN_8c111bb4)(ar4,1,ar6,ar7);
  if (in_FPSCR_SZ == 0) {
    dVar10 = (double)CONCAT44((undefined4)DAT_8c111bb8,in_fr3);
  }
  else {
    dVar10 = (double)CONCAT44(DAT_8c111bb8._4_4_,(undefined4)DAT_8c111bb8);
  }
  uVar4 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c111bb8._4_4_;
  fVar9 = (float)((ulonglong)in_dr0 >> 0x20);
  dVar12 = in_dr0;
  if (in_FPSCR_SZ == 0) {
    dVar12 = (double)((ulonglong)(uint)fVar9 << 0x20);
  }
  uVar18 = (uVar4 & 0x80000) >> 0x13;
  cVar1 = (char)uVar18;
  cVar2 = (char)((uVar4 & 0x100000) >> 0x14);
  fVar11 = (float)((ulonglong)dVar10 >> 0x20);
  if (cVar1 == '\0') {
    bVar14 = fVar11 < fVar9;
  }
  else {
    bVar14 = dVar10 < in_dr0;
  }
  uVar13 = (undefined4)((ulonglong)dVar12 >> 0x20);
  if (bVar14) {
    if (cVar2 == '\0') {
      in_dr0 = (double)CONCAT44(fVar9,uVar13);
      dVar10 = (double)CONCAT44(fVar11,DAT_8c111bc0);
    }
    if (cVar1 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) + SUB84(dVar10,0));
    }
    else {
      in_dr0 = in_dr0 + dVar10;
    }
    if (cVar2 == '\0') {
      dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),SUB84(in_dr0,0));
    }
  }
  else if (cVar2 == '\0') {
    dVar10 = (double)CONCAT44(fVar11,uVar13);
  }
  iVar7 = 2;
  bVar19 = 0;
  bVar21 = 0;
  bVar23 = (byte)((uVar18 << 0x13 & DAT_8c111bb8._4_4_) >> 0x13);
  if (bVar23 == 0) {
    iVar17 = (int)SUB84(dVar10,0);
  }
  else {
    iVar17 = (int)dVar10;
  }
  (*(code *)puVar3)(ar4,2,ar6,ar7);
  bVar20 = 0;
  bVar22 = 0;
  uVar4 = (((uint)bVar19 << 0xc | (uint)bVar21 << 0x12 | (uint)bVar23 << 0x13) & DAT_8c111bb8._4_4_
          & 0x80000) >> 0x13;
  bVar19 = (byte)uVar4;
  if (bVar19 == 0) {
    uVar18 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar18 = (uint)in_dr0;
  }
  if ((uVar18 & 0xffff) == _DAT_8c111bc8) {
    uVar18 = (uint)(short)ar4[3];
  }
  if (ar4[7] != 0) {
    iVar5 = *ar4;
    *(int *)(puVar8 + -8) = iVar5;
    iVar7 = ar4[7];
    bVar20 = 0;
    bVar22 = 0;
    bVar19 = (byte)((uVar4 << 0x13 & DAT_8c111bb8._4_4_) >> 0x13);
    (**(code **)(iVar5 + 0x18))(iVar5,iVar7,ar6,ar7);
  }
  if ((uVar18 & 0xffff) == 0) {
    ar4[7] = 0;
  }
  else {
    iVar5 = *ar4;
    ar6 = uVar18 & 0xffff;
    *(int *)(puVar8 + -8) = iVar5;
    uVar4 = (uint)bVar20;
    uVar6 = (uint)bVar22;
    bVar20 = 0;
    bVar22 = 0;
    bVar19 = (byte)(((uVar4 << 0xc | uVar6 << 0x12 | (uint)bVar19 << 0x13) & DAT_8c111bb8._4_4_ &
                    0x80000) >> 0x13);
    iVar7 = iVar17;
    iVar5 = (**(code **)(iVar5 + 0x14))(iVar5,iVar17,ar6,ar7);
    ar4[7] = iVar5;
    if (iVar5 == 0) {
      iVar7 = *ar4;
      *(int *)(puVar8 + -8) = iVar7;
      (**(code **)(iVar7 + 0x18))(iVar7,ar4,ar6,ar7);
      (*(code *)PTR_FUN_8c111bcc)(ar4,2,ar6,ar7);
      return (int *)0;
    }
  }
  ar4[2] = iVar17;
  uVar4 = DAT_8c111bb8._4_4_;
  iVar17 = (uVar18 & 0xffff) * iVar17;
  *(short *)(ar4 + 3) = (short)uVar18;
  ar4[4] = iVar17;
  ar4[8] = ar4[7] + iVar17;
  bVar21 = 0;
  bVar23 = 0;
  bVar19 = (byte)((((uint)bVar20 << 0xc | (uint)bVar22 << 0x12 | (uint)bVar19 << 0x13) & uVar4 &
                  0x80000) >> 0x13);
  FUN_8c112234(ar4,iVar7,ar6,ar7);
  bVar20 = 0;
  bVar22 = 0;
  bVar19 = (byte)((((uint)bVar21 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar19 << 0x13) &
                   DAT_8c111bb8._4_4_ & 0x80000) >> 0x13);
  (*(code *)puVar3)(ar4,3,ar6,ar7);
  uVar4 = (((uint)bVar20 << 0xc | (uint)bVar22 << 0x12 | (uint)bVar19 << 0x13) & DAT_8c111bb8._4_4_
          & 0x80000) >> 0x13;
  if ((char)uVar4 == '\0') {
    uVar18 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar18 = (uint)in_dr0;
  }
  if ((uVar18 & 0xff) == 0) {
    ar4[6] = 0;
    uVar18 = 0;
    if (ar4[5] != 0) {
      do {
        uVar6 = uVar18 + 1;
        *(undefined4 *)(uVar18 * 4 + ar4[0xb]) = 0;
        uVar18 = uVar6;
      } while (uVar6 < (uint)ar4[5]);
    }
  }
  else {
    ar4[6] = ar4[5];
  }
  bVar19 = 0;
  bVar21 = 0;
  bVar23 = (byte)((uVar4 << 0x13 & DAT_8c111bb8._4_4_) >> 0x13);
  (*(code *)puVar3)(ar4,4,ar6,ar7);
  bVar20 = 0;
  bVar22 = 0;
  bVar19 = (byte)((((uint)bVar19 << 0xc | (uint)bVar21 << 0x12 | (uint)bVar23 << 0x13) &
                   DAT_8c111bb8._4_4_ & 0x80000) >> 0x13);
  if (bVar19 == 0) {
    uVar16 = (ushort)(int)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar16 = (ushort)(int)in_dr0;
  }
  *(ushort *)((int)ar4 + 0xe) = uVar16 & 0xff;
  (*(code *)puVar3)(ar4,5,ar6,ar7);
  if ((char)((((uint)bVar20 << 0xc | (uint)bVar22 << 0x12 | (uint)bVar19 << 0x13) &
              DAT_8c111bb8._4_4_ & 0x80000) >> 0x13) == '\0') {
    uVar15 = (undefined1)(int)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar15 = (undefined1)(int)in_dr0;
  }
  *(undefined1 *)((int)ar4 + 0x31) = uVar15;
  return ar4;
}



/* FUN_8c111adc @ 8c111adc callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c111adc(int *ar4,int ar5,uint ar6,uint ar7)

{
  uint uVar1;
  char cVar2;
  undefined *puVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  uint a7;
  int a5;
  uint uVar8;
  undefined1 *puVar9;
  double in_dr0;
  float fVar10;
  undefined4 in_fr3;
  float fVar12;
  double dVar11;
  double dVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined4 in_PR;
  undefined1 uVar16;
  byte in_FPSCR_CAUSE;
  byte bVar17;
  byte bVar18;
  byte in_FPSCR_DN;
  byte bVar19;
  byte bVar20;
  byte in_FPSCR_PR;
  byte bVar21;
  byte in_FPSCR_SZ;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  char cVar3;
  
  puVar4 = PTR_FUN_8c111bb4;
  if (in_FPSCR_SZ == 0) {
    puVar9 = auStack_1c;
  }
  else {
    puVar9 = auStack_20;
  }
  *(undefined4 *)(puVar9 + -4) = in_PR;
  *(uint *)(puVar9 + -8) = ar6;
  a7 = ar7;
  a5 = ar5;
  if (ar5 == 0) {
    ar5 = 1;
    (*(code *)PTR_FUN_8c111bb4)(ar4,1,ar6,ar7);
    if (in_FPSCR_SZ == 0) {
      dVar11 = (double)CONCAT44((undefined4)DAT_8c111bb8,in_fr3);
    }
    else {
      dVar11 = (double)CONCAT44(DAT_8c111bb8._4_4_,(undefined4)DAT_8c111bb8);
    }
    uVar8 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c111bb8._4_4_;
    fVar10 = (float)((ulonglong)in_dr0 >> 0x20);
    dVar13 = in_dr0;
    if (in_FPSCR_SZ == 0) {
      dVar13 = (double)((ulonglong)(uint)fVar10 << 0x20);
    }
    uVar7 = (uVar8 & 0x80000) >> 0x13;
    cVar2 = (char)uVar7;
    cVar3 = (char)((uVar8 & 0x100000) >> 0x14);
    fVar12 = (float)((ulonglong)dVar11 >> 0x20);
    if (cVar2 == '\0') {
      bVar15 = fVar12 < fVar10;
    }
    else {
      bVar15 = dVar11 < in_dr0;
    }
    uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
    if (bVar15) {
      if (cVar3 == '\0') {
        in_dr0 = (double)CONCAT44(fVar10,uVar14);
        dVar11 = (double)CONCAT44(fVar12,DAT_8c111bc0);
      }
      if (cVar2 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) + SUB84(dVar11,0)
                                 );
      }
      else {
        in_dr0 = in_dr0 + dVar11;
      }
      if (cVar3 == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(in_dr0,0));
      }
    }
    else if (cVar3 == '\0') {
      dVar11 = (double)CONCAT44(fVar12,uVar14);
    }
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((uVar7 << 0x13 & DAT_8c111bb8._4_4_) >> 0x13);
    if (in_FPSCR_PR == 0) {
      a5 = (int)SUB84(dVar11,0);
    }
    else {
      a5 = (int)dVar11;
    }
  }
  if (*(int *)(puVar9 + -8) == 0) {
    ar5 = 2;
    bVar17 = 0;
    bVar19 = 0;
    bVar21 = (byte)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                     (uint)in_FPSCR_PR << 0x13) & DAT_8c111bb8._4_4_ & 0x80000) >> 0x13);
    (*(code *)puVar4)(ar4,2,ar6,a7);
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar21 << 0x13) &
                          DAT_8c111bb8._4_4_ & 0x80000) >> 0x13);
    if (in_FPSCR_PR == 0) {
      uVar8 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      uVar8 = (uint)in_dr0;
    }
  }
  else {
    uVar8 = *(uint *)(puVar9 + -8);
  }
  if (ar4[7] != 0) {
    iVar6 = *ar4;
    *(int *)(puVar9 + -8) = iVar6;
    uVar7 = (uint)in_FPSCR_CAUSE;
    uVar1 = (uint)in_FPSCR_DN;
    ar5 = ar4[7];
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)(((uVar7 << 0xc | uVar1 << 0x12 | (uint)in_FPSCR_PR << 0x13) &
                          DAT_8c111bb8._4_4_ & 0x80000) >> 0x13);
    (**(code **)(iVar6 + 0x18))(iVar6,ar5,ar6,a7);
  }
  if ((uVar8 & 0xffff) == 0) {
    ar4[7] = 0;
  }
  else {
    iVar6 = *ar4;
    ar6 = uVar8 & 0xffff;
    *(int *)(puVar9 + -8) = iVar6;
    uVar7 = (uint)in_FPSCR_CAUSE;
    uVar1 = (uint)in_FPSCR_DN;
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)(((uVar7 << 0xc | uVar1 << 0x12 | (uint)in_FPSCR_PR << 0x13) &
                          DAT_8c111bb8._4_4_ & 0x80000) >> 0x13);
    ar5 = a5;
    iVar6 = (**(code **)(iVar6 + 0x14))(iVar6,a5,ar6,a7);
    ar4[7] = iVar6;
    if (iVar6 == 0) {
      (*(code *)PTR_FUN_8c111bcc)(ar4,2,ar6,a7);
      return 0;
    }
  }
  ar4[2] = a5;
  uVar7 = DAT_8c111cd0;
  *(short *)(ar4 + 3) = (short)uVar8;
  ar4[4] = (uVar8 & 0xffff) * a5;
  ar4[9] = ar4[7];
  ar4[8] = ar4[7] + ar4[4];
  bVar17 = 0;
  bVar19 = 0;
  bVar21 = (byte)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                   (uint)in_FPSCR_PR << 0x13) & uVar7 & 0x80000) >> 0x13);
  FUN_8c112234(ar4,ar5,ar6,a7);
  if ((ar7 & 0xff) == (int)(short)DAT_8c111ccc) {
    bVar18 = 0;
    bVar20 = 0;
    bVar21 = (byte)((((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar21 << 0x13) &
                     DAT_8c111cd0 & 0x80000) >> 0x13);
    (*(code *)puVar4)(ar4,3,ar6,a7);
    bVar17 = 0;
    bVar19 = 0;
    bVar21 = (byte)((((uint)bVar18 << 0xc | (uint)bVar20 << 0x12 | (uint)bVar21 << 0x13) &
                     DAT_8c111cd0 & 0x80000) >> 0x13);
    if (bVar21 == 0) {
      ar7 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      ar7 = (uint)in_dr0;
    }
  }
  if ((ar7 & 0xff) == 0) {
    ar4[6] = 0;
    uVar8 = 0;
    if (ar4[5] != 0) {
      do {
        uVar7 = uVar8 + 1;
        *(undefined4 *)(uVar8 * 4 + ar4[0xb]) = 0;
        uVar8 = uVar7;
      } while (uVar7 < (uint)ar4[5]);
    }
  }
  else {
    ar4[6] = ar4[5];
  }
  if (*(ushort *)(puVar9 + 0x1c) == DAT_8c111cd4) {
    bVar18 = 0;
    bVar20 = 0;
    bVar21 = (byte)((((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar21 << 0x13) &
                     DAT_8c111cd0 & 0x80000) >> 0x13);
    (*(code *)puVar4)(ar4,4,ar6,a7);
    bVar17 = 0;
    bVar19 = 0;
    bVar21 = (byte)((((uint)bVar18 << 0xc | (uint)bVar20 << 0x12 | (uint)bVar21 << 0x13) &
                     DAT_8c111cd0 & 0x80000) >> 0x13);
    if (bVar21 == 0) {
      uVar5 = (undefined2)(int)(float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      uVar5 = (undefined2)(int)in_dr0;
    }
  }
  else {
    uVar5 = *(undefined2 *)(puVar9 + 0x1c);
  }
  *(undefined2 *)((int)ar4 + 0xe) = uVar5;
  if ((byte)puVar9[0x20] == DAT_8c111ccc) {
    bVar18 = 0;
    bVar20 = 0;
    bVar17 = (byte)((((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar21 << 0x13) &
                     DAT_8c111cd0 & 0x80000) >> 0x13);
    (*(code *)puVar4)(ar4,5,ar6,a7);
    if ((char)((((uint)bVar18 << 0xc | (uint)bVar20 << 0x12 | (uint)bVar17 << 0x13) & DAT_8c111cd0 &
               0x80000) >> 0x13) == '\0') {
      uVar16 = (undefined1)(int)(float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      uVar16 = (undefined1)(int)in_dr0;
    }
    *(undefined1 *)((int)ar4 + 0x31) = uVar16;
  }
  else {
    *(undefined1 *)((int)ar4 + 0x31) = puVar9[0x20];
  }
  return ar4;
}



/* FUN_8c111cdc @ 8c111cdc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c111cdc(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = PTR_memmove_8c111f04;
  iVar5 = ar6 * *(ushort *)(ar4 + 0xc);
  if ((*(char *)(ar4 + 0x30) == '\0') && (ar6 <= *(uint *)(ar4 + 8))) {
    if (*(uint *)(ar4 + 0x24) < *(uint *)(ar4 + 0x28)) {
      if (*(uint *)(ar4 + 0x28) < (uint)(*(int *)(ar4 + 0x24) + iVar5)) goto LAB_8c111d40;
      (*(code *)PTR_memmove_8c111f04)(*(undefined4 *)(ar4 + 0x24),ar5,iVar5);
      *(int *)(ar4 + 0x24) = *(int *)(ar4 + 0x24) + iVar5;
    }
    else {
      if (*(uint *)(ar4 + 0x28) < (uint)((*(int *)(ar4 + 0x24) + iVar5) - *(int *)(ar4 + 0x10)))
      goto LAB_8c111d40;
      if (*(uint *)(ar4 + 0x20) < (uint)(*(int *)(ar4 + 0x24) + iVar5)) {
        iVar4 = *(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x24);
        (*(code *)PTR_memmove_8c111f04)(ar5,iVar4);
        (*(code *)puVar1)(*(undefined4 *)(ar4 + 0x1c),ar5 + iVar4,iVar5 - iVar4);
        *(int *)(ar4 + 0x24) = (iVar5 - iVar4) + *(int *)(ar4 + 0x1c);
      }
      else {
        (*(code *)PTR_memmove_8c111f04)(*(undefined4 *)(ar4 + 0x24),ar5,iVar5);
        iVar5 = *(int *)(ar4 + 0x24) + iVar5;
        *(int *)(ar4 + 0x24) = iVar5;
        if (iVar5 == *(int *)(ar4 + 0x20)) {
          *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x1c);
        }
      }
    }
    uVar3 = 0;
    if (*(int *)(ar4 + 0x14) != 0) {
      do {
        if (*(int *)(uVar3 * 4 + *(int *)(ar4 + 0x2c)) == 0) {
          *(uint *)(*(int *)(ar4 + 0x40) + uVar3 * 4) =
               *(int *)(*(int *)(ar4 + 0x40) + uVar3 * 4) + ar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(ar4 + 0x14));
    }
    if ((*(int *)(ar4 + 0x24) == *(int *)(ar4 + 0x28)) && (*(int *)(ar4 + 0x18) != 0)) {
      *(undefined1 *)(ar4 + 0x30) = 1;
    }
    uVar2 = 1;
    *(uint *)(ar4 + 0x3c) = *(int *)(ar4 + 0x3c) + ar6;
  }
  else {
LAB_8c111d40:
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c111cec @ 8c111cec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c111cec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r10;
  uint unaff_r11;
  int a6;
  int unaff_r14;
  int iVar4;
  
  puVar1 = PTR_memmove_8c111f04;
  iVar4 = unaff_r11 * *(ushort *)(unaff_r14 + 0xc);
  if ((*(char *)(unaff_r14 + 0x30) == '\0') && (unaff_r11 <= *(uint *)(unaff_r14 + 8))) {
    if (*(uint *)(unaff_r14 + 0x24) < *(uint *)(unaff_r14 + 0x28)) {
      if (*(uint *)(unaff_r14 + 0x28) < (uint)(*(int *)(unaff_r14 + 0x24) + iVar4))
      goto LAB_8c111d40;
      (*(code *)PTR_memmove_8c111f04)(*(undefined4 *)(unaff_r14 + 0x24),unaff_r10,iVar4,ar7);
      *(int *)(unaff_r14 + 0x24) = *(int *)(unaff_r14 + 0x24) + iVar4;
    }
    else {
      if (*(uint *)(unaff_r14 + 0x28) <
          (uint)((*(int *)(unaff_r14 + 0x24) + iVar4) - *(int *)(unaff_r14 + 0x10)))
      goto LAB_8c111d40;
      if (*(uint *)(unaff_r14 + 0x20) < (uint)(*(int *)(unaff_r14 + 0x24) + iVar4)) {
        a6 = *(int *)(unaff_r14 + 0x20) - *(int *)(unaff_r14 + 0x24);
        (*(code *)PTR_memmove_8c111f04)(*(int *)(unaff_r14 + 0x24),unaff_r10,a6,ar7);
        (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x1c),unaff_r10 + a6,iVar4 - a6,ar7);
        *(int *)(unaff_r14 + 0x24) = (iVar4 - a6) + *(int *)(unaff_r14 + 0x1c);
      }
      else {
        (*(code *)PTR_memmove_8c111f04)(*(undefined4 *)(unaff_r14 + 0x24),unaff_r10,iVar4,ar7);
        iVar4 = *(int *)(unaff_r14 + 0x24) + iVar4;
        *(int *)(unaff_r14 + 0x24) = iVar4;
        if (iVar4 == *(int *)(unaff_r14 + 0x20)) {
          *(undefined4 *)(unaff_r14 + 0x24) = *(undefined4 *)(unaff_r14 + 0x1c);
        }
      }
    }
    uVar3 = 0;
    if (*(int *)(unaff_r14 + 0x14) != 0) {
      do {
        if (*(int *)(uVar3 * 4 + *(int *)(unaff_r14 + 0x2c)) == 0) {
          *(uint *)(*(int *)(unaff_r14 + 0x40) + uVar3 * 4) =
               *(int *)(*(int *)(unaff_r14 + 0x40) + uVar3 * 4) + unaff_r11;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(unaff_r14 + 0x14));
    }
    if ((*(int *)(unaff_r14 + 0x24) == *(int *)(unaff_r14 + 0x28)) &&
       (*(int *)(unaff_r14 + 0x18) != 0)) {
      *(undefined1 *)(unaff_r14 + 0x30) = 1;
    }
    uVar2 = 1;
    *(uint *)(unaff_r14 + 0x3c) = *(int *)(unaff_r14 + 0x3c) + unaff_r11;
  }
  else {
LAB_8c111d40:
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c111dfe @ 8c111dfe callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c111dfe(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(ar4 + 0x30) != '\0') {
    return 0;
  }
  iVar3 = *(int *)(ar4 + 0x24);
  iVar1 = iVar3 + (uint)*(ushort *)(ar4 + 0xc);
  *(int *)(ar4 + 0x24) = iVar1;
  uVar2 = 0;
  if (iVar1 == *(int *)(ar4 + 0x20)) {
    *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x1c);
  }
  if (*(int *)(ar4 + 0x14) != 0) {
    do {
      if (*(int *)(uVar2 * 4 + *(int *)(ar4 + 0x2c)) == 0) {
        *(int *)(*(int *)(ar4 + 0x40) + uVar2 * 4) = *(int *)(*(int *)(ar4 + 0x40) + uVar2 * 4) + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(ar4 + 0x14));
  }
  if ((*(int *)(ar4 + 0x24) == *(int *)(ar4 + 0x28)) && (*(int *)(ar4 + 0x18) != 0)) {
    *(undefined1 *)(ar4 + 0x30) = 1;
  }
  *(int *)(ar4 + 0x3c) = *(int *)(ar4 + 0x3c) + 1;
  return iVar3;
}



/* FUN_8c111e72 @ 8c111e72 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c111e72(int ar4,int ar5,int ar6,uint ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int a6;
  uint a5;
  int iVar5;
  
  iVar4 = ar5 * 4;
  a5 = *(uint *)(*(int *)(ar4 + 0x2c) + iVar4);
  if (*(int *)(*(int *)(ar4 + 0x40) + iVar4) == *(int *)(ar4 + 0x3c)) {
    if ((*(int *)(ar4 + 0x38) != 0) && (a5 != 0)) {
      FUN_8c111208(ar4,ar5,0,ar7);
    }
  }
  else if (ar7 <= *(uint *)(ar4 + 8)) {
    iVar5 = ar7 * *(ushort *)(ar4 + 0xc);
    uVar1 = a5;
    iVar2 = iVar5;
    uVar3 = ar7;
    if (a5 < *(uint *)(ar4 + 0x24)) {
      if (iVar5 + a5 <= *(uint *)(ar4 + 0x24)) {
        (*(code *)PTR_memmove_8c111f04)(ar6,a5,iVar5,ar7);
        *(int *)(*(int *)(ar4 + 0x2c) + iVar4) = *(int *)(*(int *)(ar4 + 0x2c) + iVar4) + iVar5;
LAB_8c111f76:
        *(uint *)(*(int *)(ar4 + 0x40) + iVar4) = *(int *)(*(int *)(ar4 + 0x40) + iVar4) + ar7;
        if (*(uint *)(ar4 + 0x28) == a5) {
          FUN_8c111342(ar4,uVar1,iVar2,uVar3);
        }
        if (*(int *)(ar4 + 0x38) != 0) {
          FUN_8c111208(ar4,ar5,ar7,uVar3);
        }
        return 1;
      }
    }
    else if ((a5 + iVar5) - *(int *)(ar4 + 0x10) <= *(uint *)(ar4 + 0x24)) {
      if (*(uint *)(ar4 + 0x20) < iVar5 + a5) {
        a6 = *(int *)(ar4 + 0x20) - a5;
        (*(code *)PTR_memmove_8c112134)(ar6,a5,a6,ar7);
        iVar5 = iVar5 - a6;
        uVar1 = *(uint *)(ar4 + 0x1c);
        iVar2 = iVar5;
        (*(code *)PTR_memmove_8c112134)(ar6 + a6,uVar1,iVar5,uVar3);
        *(int *)(*(int *)(ar4 + 0x2c) + iVar4) = iVar5 + *(int *)(ar4 + 0x1c);
      }
      else {
        (*(code *)PTR_memmove_8c112134)(ar6,a5,iVar5,ar7);
        *(int *)(*(int *)(ar4 + 0x2c) + iVar4) = *(int *)(*(int *)(ar4 + 0x2c) + iVar4) + iVar5;
        if (*(int *)(*(int *)(ar4 + 0x2c) + iVar4) == *(int *)(ar4 + 0x20)) {
          *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar4) = *(undefined4 *)(ar4 + 0x1c);
        }
      }
      goto LAB_8c111f76;
    }
  }
  return 0;
}



/* FUN_8c111fbe @ 8c111fbe callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c111fbe(int ar4,int ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = ar5 * 4;
  if (*(int *)(*(int *)(ar4 + 0x40) + iVar4) == *(int *)(ar4 + 0x3c)) {
    if ((*(int *)(ar4 + 0x38) != 0) && (*(int *)(*(int *)(ar4 + 0x2c) + iVar4) != 0)) {
      FUN_8c111208(ar4,ar5,0,ar7);
    }
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)(*(int *)(ar4 + 0x2c) + iVar4);
    iVar1 = *piVar2;
    *piVar2 = iVar1 + (uint)*(ushort *)(ar4 + 0xc);
    if (*(uint *)(ar4 + 0x20) <= *(uint *)(*(int *)(ar4 + 0x2c) + iVar4)) {
      *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar4) = *(undefined4 *)(ar4 + 0x1c);
    }
    *(int *)(*(int *)(ar4 + 0x40) + iVar4) = *(int *)(*(int *)(ar4 + 0x40) + iVar4) + 1;
    if (iVar1 == *(int *)(ar4 + 0x28)) {
      uVar3 = 0;
      if (*(int *)(ar4 + 0x14) != 0) {
        do {
          ar7 = uVar3 * 4;
          if ((iVar1 == *(int *)(*(int *)(ar4 + 0x2c) + ar7)) &&
             (*(int *)(*(int *)(ar4 + 0x40) + ar7) != *(int *)(ar4 + 0x3c))) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(ar4 + 0x14));
      }
      if (uVar3 == *(uint *)(ar4 + 0x14)) {
        *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar4);
        *(undefined1 *)(ar4 + 0x30) = 0;
      }
    }
    if (*(int *)(ar4 + 0x38) != 0) {
      FUN_8c111208(ar4,ar5,1,ar7);
    }
  }
  return iVar1;
}



/* FUN_8c111fc6 @ 8c111fc6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c111fc6(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int in_r0;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int unaff_r14;
  
  if (*(int *)(*(int *)(in_r0 + ar4) + unaff_r14) == *(int *)(ar4 + 0x3c)) {
    if ((*(int *)(ar4 + 0x38) != 0) && (*(int *)(*(int *)(ar4 + 0x2c) + unaff_r14) != 0)) {
      FUN_8c111208(ar4,ar5,0,ar7);
    }
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)(*(int *)(ar4 + 0x2c) + unaff_r14);
    iVar1 = *piVar2;
    *piVar2 = iVar1 + (uint)*(ushort *)(ar4 + 0xc);
    if (*(uint *)(ar4 + 0x20) <= *(uint *)(*(int *)(ar4 + 0x2c) + unaff_r14)) {
      *(undefined4 *)(*(int *)(ar4 + 0x2c) + unaff_r14) = *(undefined4 *)(ar4 + 0x1c);
    }
    *(int *)(*(int *)(ar4 + 0x40) + unaff_r14) = *(int *)(*(int *)(ar4 + 0x40) + unaff_r14) + 1;
    if (iVar1 == *(int *)(ar4 + 0x28)) {
      uVar3 = 0;
      if (*(int *)(ar4 + 0x14) != 0) {
        do {
          ar7 = uVar3 * 4;
          if ((iVar1 == *(int *)(*(int *)(ar4 + 0x2c) + ar7)) &&
             (*(int *)(*(int *)(ar4 + 0x40) + ar7) != *(int *)(ar4 + 0x3c))) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(ar4 + 0x14));
      }
      if (uVar3 == *(uint *)(ar4 + 0x14)) {
        *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(*(int *)(ar4 + 0x2c) + unaff_r14);
        *(undefined1 *)(ar4 + 0x30) = 0;
      }
    }
    if (*(int *)(ar4 + 0x38) != 0) {
      FUN_8c111208(ar4,ar5,1,ar7);
    }
  }
  return iVar1;
}



/* FUN_8c112074 @ 8c112074 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

uint FUN_8c112074(int *ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int *a6;
  int *piVar4;
  bool bVar5;
  
  piVar4 = ar4 + ar5 * 2;
  bVar5 = true;
  for (a6 = ar4; a6 < piVar4; a6 = a6 + 2) {
    if (*(int *)(*(int *)(*a6 + 0x2c) + a6[1] * 4) != 0) {
      bVar5 = *(int *)(*(int *)(*a6 + 0x40) + a6[1] * 4) == *(int *)(*a6 + 0x3c);
      break;
    }
  }
  do {
    piVar1 = a6;
    a6 = piVar1 + 2;
    if (piVar4 <= a6) break;
  } while ((*(int *)(*(int *)(*a6 + 0x2c) + piVar1[3] * 4) == 0) ||
          (bVar5 == (*(int *)(*(int *)(*a6 + 0x40) + piVar1[3] * 4) == *(int *)(*a6 + 0x3c))));
  if (a6 == piVar4) {
    if (bVar5 == false) {
      for (; ar4 < piVar4; ar4 = ar4 + 2) {
        uVar3 = FUN_8c111fbe(*ar4,ar4[1],a6,ar7);
        *ar6 = uVar3;
        ar6 = ar6 + 1;
      }
    }
    else {
      for (; ar4 < piVar4; ar4 = ar4 + 2) {
        if ((*(int *)(*ar4 + 0x38) != 0) && (*(int *)(*(int *)(*ar4 + 0x2c) + ar4[1] * 4) != 0)) {
          FUN_8c111208(*ar4,ar4[1],0,ar7);
        }
      }
    }
    uVar2 = (uint)(bVar5 == false);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c112170 @ 8c112170 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c112170(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  piVar4 = ar4 + ar5 * 2;
  bVar5 = true;
  for (piVar3 = ar4; piVar3 < piVar4; piVar3 = piVar3 + 2) {
    if (*(int *)(*(int *)(*piVar3 + 0x2c) + piVar3[1] * 4) != 0) {
      bVar5 = *(int *)(*(int *)(*piVar3 + 0x40) + piVar3[1] * 4) == *(int *)(*piVar3 + 0x3c);
      break;
    }
  }
  do {
    piVar1 = piVar3;
    piVar3 = piVar1 + 2;
    if (piVar4 <= piVar3) break;
  } while ((*(int *)(*(int *)(*piVar3 + 0x2c) + piVar1[3] * 4) == 0) ||
          (bVar5 == (*(int *)(*(int *)(*piVar3 + 0x40) + piVar1[3] * 4) == *(int *)(*piVar3 + 0x3c))
          ));
  if (piVar3 == piVar4) {
    if (bVar5 != false) {
      for (; ar4 < piVar4; ar4 = ar4 + 2) {
        if ((*(int *)(*ar4 + 0x38) != 0) && (*(int *)(*(int *)(*ar4 + 0x2c) + ar4[1] * 4) != 0)) {
          (*(code *)PTR_FUN_8c112348)(*ar4,ar4[1],0,uVar6);
        }
      }
    }
    uVar2 = (uint)(bVar5 == false);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c11217e @ 8c11217e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c11217e(int *ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int unaff_r13;
  int *piVar3;
  bool bVar4;
  
  piVar3 = (int *)(unaff_r13 + (int)ar6);
  bVar4 = true;
  for (; ar6 < piVar3; ar6 = ar6 + 2) {
    if (*(int *)(*(int *)(*ar6 + 0x2c) + ar6[1] * 4) != 0) {
      bVar4 = *(int *)(*(int *)(*ar6 + 0x40) + ar6[1] * 4) == *(int *)(*ar6 + 0x3c);
      break;
    }
  }
  do {
    piVar1 = ar6;
    ar6 = piVar1 + 2;
    if (piVar3 <= ar6) break;
  } while ((*(int *)(*(int *)(*ar6 + 0x2c) + piVar1[3] * 4) == 0) ||
          (bVar4 == (*(int *)(*(int *)(*ar6 + 0x40) + piVar1[3] * 4) == *(int *)(*ar6 + 0x3c))));
  if (ar6 == piVar3) {
    if (bVar4 != false) {
      for (; ar4 < piVar3; ar4 = ar4 + 2) {
        if ((*(int *)(*ar4 + 0x38) != 0) && (*(int *)(*(int *)(*ar4 + 0x2c) + ar4[1] * 4) != 0)) {
          (*(code *)PTR_FUN_8c112348)(*ar4,ar4[1],0,ar7);
        }
      }
    }
    uVar2 = (uint)(bVar4 == false);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c112234 @ 8c112234 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112234(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(ar4 + 0x14) != 0) {
    do {
      iVar2 = uVar1 * 4;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar2) = *(undefined4 *)(ar4 + 0x1c);
      *(undefined4 *)(*(int *)(ar4 + 0x40) + iVar2) = 0;
    } while (uVar1 < *(uint *)(ar4 + 0x14));
  }
  *(undefined4 *)(ar4 + 0x3c) = 0;
  *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x1c);
  *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x1c);
  *(undefined1 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x38) = 0;
  return 0x30;
}



/* FUN_8c1122ac @ 8c1122ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int * FUN_8c1122ac(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 a6;
  int iStack_18;
  undefined1 uStack_14;
  
  a6 = 0x44;
  piVar1 = (int *)(**(code **)(ar4 + 0x14))(ar4,1,0x44,ar7);
  if (piVar1 == (int *)0x0) {
    iStack_18 = ar4;
    uStack_14 = (undefined1)ar5;
    (*(code *)PTR_FUN_8c11234c)(&iStack_18,2,a6,ar7);
    piVar1 = (int *)0x0;
  }
  else {
    iVar2 = (**(code **)(ar4 + 0x10))(ar4,ar6 << 2,a6,ar7);
    piVar1[0xb] = iVar2;
    iVar2 = (**(code **)(ar4 + 0x14))(ar4,ar6,4,ar7);
    piVar1[0xd] = iVar2;
    iVar2 = (**(code **)(ar4 + 0x14))(ar4,ar6,4,ar7);
    piVar1[0x10] = iVar2;
    piVar1[5] = ar6;
    *(undefined1 *)(piVar1 + 1) = (undefined1)ar5;
    *piVar1 = ar4;
    piVar1[2] = 1;
  }
  return piVar1;
}



/* FUN_8c112350 @ 8c112350 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112350(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (**(code **)(ar4 + 0x14))(ar4,1,0x18,ar7);
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1;
}



/* FUN_8c11237a @ 8c11237a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11237a(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((*(char *)(ar4 + 0x14) != '\0') && (*(int *)(ar4 + 0xc) != 0)) {
    (**(code **)(ar5 + 0x18))(ar5,*(undefined4 *)(ar4 + 0xc));
  }
                    /* WARNING: Could not recover jumptable at 0x8c1123ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(ar5 + 0x18))(ar5,ar4);
  return uVar1;
}



/* FUN_8c112380 @ 8c112380 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112380(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  int unaff_r14;
  
  if ((*(char *)(in_r0 + unaff_r14) != '\0') && (*(int *)(unaff_r14 + 0xc) != 0)) {
    (**(code **)(ar5 + 0x18))(ar5,*(undefined4 *)(unaff_r14 + 0xc),ar6,ar7);
  }
                    /* WARNING: Could not recover jumptable at 0x8c1123ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(ar5 + 0x18))(ar5);
  return uVar1;
}



/* FUN_8c1123b0 @ 8c1123b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1123b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (**(code **)(ar4 + 0x14))(ar4,1,0x18,ar7);
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1;
}



/* FUN_8c1123da @ 8c1123da callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1123da(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((*(char *)(ar4 + 0x14) != '\0') && (*(int *)(ar4 + 0xc) != 0)) {
    (**(code **)(ar5 + 0x18))(ar5,*(undefined4 *)(ar4 + 0xc));
  }
                    /* WARNING: Could not recover jumptable at 0x8c11240c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(ar5 + 0x18))(ar5,ar4);
  return uVar1;
}



/* FUN_8c1123e0 @ 8c1123e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1123e0(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  int unaff_r14;
  
  if ((*(char *)(in_r0 + unaff_r14) != '\0') && (*(int *)(unaff_r14 + 0xc) != 0)) {
    (**(code **)(ar5 + 0x18))(ar5,*(undefined4 *)(unaff_r14 + 0xc),ar6,ar7);
  }
                    /* WARNING: Could not recover jumptable at 0x8c11240c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(ar5 + 0x18))(ar5);
  return uVar1;
}



/* FUN_8c112410 @ 8c112410 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int * FUN_8c112410(int *ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 in_fr5;
  undefined8 uVar4;
  uint uVar5;
  char in_FPSCR_SZ;
  
  uVar5 = ar5 * ar6;
  *ar4 = ar5;
  ar4[1] = ar6;
  ar4[2] = uVar5;
  iVar1 = (**(code **)(ar7 + 0x10))(ar7,uVar5 * 4);
  ar4[3] = iVar1;
  if (iVar1 == 0) {
    (**(code **)(ar7 + 0x18))(ar7,ar4);
    ar4 = (int *)0x0;
  }
  else {
    *(undefined1 *)(ar4 + 5) = 1;
    uVar3 = 0;
    ar4[4] = uVar5 * 4 + ar4[3];
    puVar2 = (undefined8 *)ar4[3];
    if (in_FPSCR_SZ == '\0') {
      uVar4 = CONCAT44(_DAT_8c1125e0,in_fr5);
    }
    else {
      uVar4 = CONCAT44(PTR_FUN_8c1125e4,_DAT_8c1125e0);
    }
    if (uVar5 != 0) {
      do {
        uVar3 = uVar3 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(int *)puVar2 = (int)((ulonglong)uVar4 >> 0x20);
        }
        else {
          *puVar2 = uVar4;
        }
        puVar2 = (undefined8 *)((int)puVar2 + 4);
      } while (uVar3 < uVar5);
    }
  }
  return ar4;
}



/* FUN_8c11241e @ 8c11241e callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c11241e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint unaff_r12;
  int unaff_r13;
  undefined4 *unaff_r14;
  undefined4 in_fr5;
  undefined8 uVar4;
  char in_FPSCR_SZ;
  
  *unaff_r14 = ar5;
  unaff_r14[1] = ar6;
  unaff_r14[2] = unaff_r12;
  iVar1 = (**(code **)(unaff_r13 + 0x10))(unaff_r13,unaff_r12 << 2,ar6,ar7);
  unaff_r14[3] = iVar1;
  if (iVar1 == 0) {
    (**(code **)(unaff_r13 + 0x18))(unaff_r13,unaff_r14,ar6,ar7);
    unaff_r14 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(unaff_r14 + 5) = 1;
    uVar3 = 0;
    unaff_r14[4] = unaff_r12 * 4 + unaff_r14[3];
    puVar2 = (undefined8 *)unaff_r14[3];
    if (in_FPSCR_SZ == '\0') {
      uVar4 = CONCAT44(_DAT_8c1125e0,in_fr5);
    }
    else {
      uVar4 = CONCAT44(PTR_FUN_8c1125e4,_DAT_8c1125e0);
    }
    if (unaff_r12 != 0) {
      do {
        uVar3 = uVar3 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(int *)puVar2 = (int)((ulonglong)uVar4 >> 0x20);
        }
        else {
          *puVar2 = uVar4;
        }
        puVar2 = (undefined8 *)((int)puVar2 + 4);
      } while (uVar3 < unaff_r12);
    }
  }
  return unaff_r14;
}



/* FUN_8c112482 @ 8c112482 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int * FUN_8c112482(int *ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  undefined4 a6;
  int a7;
  int a5;
  
  a5 = ar5 * ar6;
  *ar4 = ar5;
  ar4[1] = ar6;
  a6 = 4;
  ar4[2] = a5;
  a7 = ar7;
  iVar1 = (**(code **)(ar7 + 0x14))(ar7,a5,4,ar7);
  ar4[3] = iVar1;
  if (iVar1 == 0) {
    (**(code **)(ar7 + 0x18))(ar7,ar4,a6,a7);
    ar4 = (int *)0x0;
  }
  else {
    *(undefined1 *)(ar4 + 5) = 1;
    ar4[4] = a5 * 4 + ar4[3];
  }
  return ar4;
}



/* FUN_8c1124de @ 8c1124de callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int * FUN_8c1124de(int *ar4,int *ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = *ar5 * ar5[1];
  iVar2 = (**(code **)(ar6 + 0x10))(ar6,*ar4 * ar4[1] * 4);
  ar4[3] = iVar2;
  if (iVar2 == 0) {
    (**(code **)(ar6 + 0x18))(ar6,ar4);
    ar4 = (int *)0x0;
  }
  else {
    *(undefined1 *)(ar4 + 5) = 1;
    puVar1 = PTR_FUN_8c1125e4;
    ar4[4] = *ar4 * ar4[1] * 4 + ar4[3];
    (*(code *)puVar1)(ar4,ar5);
  }
  return ar4;
}



/* FUN_8c1124ea @ 8c1124ea callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int * FUN_8c1124ea(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int unaff_r12;
  int *unaff_r13;
  int *unaff_r14;
  
  *unaff_r14 = *unaff_r13;
  unaff_r14[1] = unaff_r13[1];
  unaff_r14[2] = *unaff_r13 * unaff_r13[1];
  iVar2 = (**(code **)(unaff_r12 + 0x10))(unaff_r12,*unaff_r14 * unaff_r14[1] * 4,ar6,ar7);
  unaff_r14[3] = iVar2;
  if (iVar2 == 0) {
    (**(code **)(unaff_r12 + 0x18))(unaff_r12,unaff_r14,ar6,ar7);
    unaff_r14 = (int *)0x0;
  }
  else {
    *(undefined1 *)(unaff_r14 + 5) = 1;
    puVar1 = PTR_FUN_8c1125e4;
    unaff_r14[4] = *unaff_r14 * unaff_r14[1] * 4 + unaff_r14[3];
    (*(code *)puVar1)(unaff_r14,unaff_r13,ar6,ar7);
  }
  return unaff_r14;
}



/* FUN_8c1125e8 @ 8c1125e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1125e8(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *ar4;
  iVar2 = ar4[1];
  iVar1 = ar4[3];
  puVar5 = (undefined4 *)(ar5 * iVar4 * 4 + iVar1);
  for (puVar3 = puVar5 + iVar4; puVar3 < (undefined4 *)(iVar4 * iVar2 * 4 + iVar1);
      puVar3 = puVar3 + 1) {
    *puVar5 = *puVar3;
    puVar5 = puVar5 + 1;
  }
  ar4[1] = ar4[1] + -1;
  ar4[2] = ar4[2] + -1;
  ar4[4] = ar4[4] + *ar4 * -4;
  return in_r0;
}



/* FUN_8c112642 @ 8c112642 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112642(int *ar4,int ar5,int ar6,int ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  ar4[1] = ar6;
  ar4[2] = ar5 * ar6;
  ar4[3] = ar7;
  ar4[4] = ar7 + ar4[2] * 4;
  return in_r0;
}



/* FUN_8c112658 @ 8c112658 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112658(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  float in_fr3;
  undefined4 in_fr2;
  undefined4 in_fr5;
  double dVar4;
  bool bVar5;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  pdVar3 = *(double **)(ar4 + 0xc);
  uVar2 = 1;
  if (in_FPSCR_SZ == 0) {
    dVar4 = (double)CONCAT44(*(undefined4 *)pdVar3,in_fr5);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  else {
    dVar4 = *pdVar3;
    pdVar3 = pdVar3 + 1;
  }
  if (1 < *(uint *)(ar4 + 8)) {
    do {
      if (in_FPSCR_SZ == 0) {
        in_fr3 = *(float *)pdVar3;
      }
      uVar1 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & DAT_8c112818;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar1 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar1 & 0x100000) >> 0x14);
      if (in_FPSCR_PR == 0) {
        bVar5 = (float)((ulonglong)dVar4 >> 0x20) < in_fr3;
      }
      else {
        bVar5 = dVar4 < (double)CONCAT44(in_fr2,in_fr3);
      }
      uVar2 = uVar2 + 1;
      if (bVar5) {
        if (in_FPSCR_SZ == 0) {
          dVar4 = (double)CONCAT44(*(float *)pdVar3,SUB84(dVar4,0));
        }
        else {
          dVar4 = *pdVar3;
        }
      }
      pdVar3 = (double *)((int)pdVar3 + 4);
    } while (uVar2 < *(uint *)(ar4 + 8));
  }
  return in_r0;
}



/* FUN_8c112680 @ 8c112680 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined8 * FUN_8c112680(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  double *a5;
  uint uVar8;
  double *pdVar9;
  undefined1 *puVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  undefined8 in_dr4;
  undefined4 in_PR;
  uint uVar14;
  float fVar15;
  byte in_FPSCR_CAUSE;
  byte bVar16;
  byte in_FPSCR_DN;
  byte bVar17;
  byte in_FPSCR_PR;
  byte bVar18;
  byte in_FPSCR_SZ;
  byte bVar19;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  
  puVar3 = PTR_thunk_FUN_8c013cd8_8c112820;
  puVar2 = PTR_thunk_FUN_8c013dfc_8c11281c;
  if (in_FPSCR_SZ == 0) {
    puVar10 = auStack_18;
  }
  else {
    puVar10 = auStack_1c;
  }
  *(undefined4 *)(puVar10 + -4) = in_PR;
  uVar8 = 0;
  if (in_FPSCR_SZ == 0) {
    *(int *)(puVar10 + -8) = (int)((ulonglong)in_dr4 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar10 + -8) = in_dr4;
  }
  puVar4 = &DAT_8c112824;
  iVar6 = ar4[1];
  iVar5 = *ar4;
  a5 = (double *)ar4[3];
  pdVar9 = a5;
  if (iVar5 * iVar6 != 0) {
    do {
      uVar14 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13
               | (uint)in_FPSCR_SZ << 0x14) & DAT_8c112818 & 0x180000 |
               DAT_8c112824._4_4_ & 0x3fffff;
      uVar7 = (uVar14 & 0x100000) >> 0x14;
      fVar15 = DAT_8c11282c;
      fVar13 = DAT_8c112830;
      if ((char)uVar7 == '\0') {
        fVar15 = DAT_8c112830;
        fVar13 = DAT_8c11282c;
      }
      uVar7 = (uVar14 & 0x80000 | uVar7 << 0x14) & DAT_8c112818;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = (byte)((uVar7 & 0x80000) >> 0x13);
      bVar19 = (byte)(uVar7 >> 0x14);
      (*(code *)puVar3)(ar4,a5,ar6,ar7);
      uVar7 = ((uint)bVar16 << 0xc | (uint)bVar17 << 0x12 | (uint)bVar18 << 0x13 |
              (uint)bVar19 << 0x14) & DAT_8c112818;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = (byte)((uVar7 & 0x80000) >> 0x13);
      bVar19 = (byte)((uVar7 & 0x100000) >> 0x14);
      (*(code *)puVar2)(ar4,a5,ar6,ar7);
      uVar8 = uVar8 + 1;
      uVar14 = (uint)bVar16 << 0xc | (uint)bVar17 << 0x12 | (uint)bVar18 << 0x13 |
               (uint)bVar19 << 0x14 | DAT_8c112824._4_4_;
      uVar7 = (uVar14 & 0x80000) >> 0x13;
      uVar14 = (uVar14 & 0x100000) >> 0x14;
      cVar1 = (char)uVar14;
      dVar12 = (double)fVar13;
      if (cVar1 == '\0') {
        dVar11 = (double)CONCAT44(_DAT_8c112834,fVar15);
      }
      else {
        dVar11 = (double)CONCAT44(PTR_FUN_8c112838,_DAT_8c112834);
      }
      puVar4 = (undefined8 *)&DAT_8c112830;
      if (cVar1 == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),DAT_8c112830);
      }
      if ((char)uVar7 == '\0') {
        dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) *
                                  (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar12,0));
      }
      else {
        dVar12 = dVar12 * dVar11;
      }
      uVar7 = (uVar7 << 0x13 | uVar14 << 0x14) & DAT_8c112818;
      fVar15 = (float)dVar12;
      if (cVar1 == '\0') {
        fVar13 = *(float *)pdVar9;
      }
      else {
        fVar13 = (float)((ulonglong)*pdVar9 >> 0x20);
      }
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar7 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)(uVar7 >> 0x14);
      if (in_FPSCR_PR == 0) {
        dVar12 = (double)CONCAT44(fVar13 - fVar15,fVar15);
      }
      else {
        dVar12 = (double)CONCAT44(fVar13,fVar15) - (double)CONCAT44(fVar13,fVar15);
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)pdVar9 = (int)((ulonglong)dVar12 >> 0x20);
      }
      else {
        *pdVar9 = dVar12;
      }
      pdVar9 = (double *)((int)pdVar9 + 4);
    } while (uVar8 < (uint)(iVar5 * iVar6));
  }
  return puVar4;
}



/* FUN_8c112734 @ 8c112734 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1127dc) */
/* WARNING: Removing unreachable block (ram,0x8c1127cc) */
/* WARNING: Removing unreachable block (ram,0x8c112842) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c112734(double *ar4,double *ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  double *pdVar8;
  double *a5;
  uint a6;
  double *pdVar9;
  double *pdVar10;
  uint uVar11;
  double *pdVar12;
  double *pdVar13;
  double dVar14;
  float fVar15;
  double in_dr2;
  float fVar16;
  float fVar17;
  double in_dr4;
  undefined4 uVar18;
  float fVar19;
  double in_dr6;
  undefined4 uVar20;
  double in_dr12;
  double in_dr14;
  double dVar21;
  float fVar22;
  double in_xd2;
  double dVar23;
  double in_xd4;
  double dVar24;
  double in_xd6;
  double in_xd14;
  bool bVar25;
  undefined4 in_PR;
  float fVar26;
  byte in_FPSCR_CAUSE;
  byte bVar27;
  byte in_FPSCR_DN;
  byte bVar28;
  byte in_FPSCR_PR;
  byte bVar29;
  byte in_FPSCR_SZ;
  byte bVar30;
  undefined1 auStack_3c [16];
  double dStack_2c;
  undefined8 uStack_24;
  char cVar2;
  
  if (in_FPSCR_SZ == 0) {
    uStack_24 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    pdVar13 = &dStack_2c;
    dStack_2c = (double)CONCAT44(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar13 = (double *)auStack_3c;
    uStack_24 = in_xd14;
    dStack_2c = in_dr14;
  }
  *(undefined4 *)((int)pdVar13 + -4) = in_PR;
  iVar5 = *(int *)((int)ar4 + 4);
  iVar3 = *(int *)ar4;
  a6 = ar6 + 1;
  iVar6 = *(int *)((int)ar4 + 0xc);
  *(int *)((int)pdVar13 + -8) = *(int *)(ar5 + 1) * 4 + *(int *)((int)ar5 + 0xc);
  if (in_FPSCR_SZ == 0) {
    in_dr12 = (double)(ulonglong)(uint)DAT_8c112824;
  }
  pdVar8 = ar4;
  a5 = ar5;
  uVar11 = a6;
  if (a6 < *(uint *)((int)ar4 + 4)) {
    do {
      if (in_FPSCR_SZ == 0) {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c112830);
      }
      else {
        in_xd2 = (double)CONCAT44(_DAT_8c112834,DAT_8c112830);
      }
      pdVar10 = (double *)(uVar11 * *(int *)ar4 * 4 + *(int *)((int)ar4 + 0xc));
      pdVar12 = (double *)(uVar11 * 4 + (int)pdVar10);
      if (in_FPSCR_SZ == 0) {
        dVar21 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(in_dr14,0));
      }
      else {
        dVar21 = *pdVar12;
      }
      pdVar9 = (double *)((int)pdVar10 + *(int *)ar4 * -4);
      pdVar12 = (double *)((int)pdVar12 + -4);
      if (in_FPSCR_SZ == 0) {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)pdVar12);
      }
      else {
        in_xd14 = *pdVar12;
      }
      uVar7 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & DAT_8c112818;
      uVar4 = (uVar7 & 0x80000) >> 0x13;
      cVar1 = (char)uVar4;
      uVar7 = (uVar7 & 0x100000) >> 0x14;
      cVar2 = (char)uVar7;
      fVar26 = SUB84(dVar21,0);
      if (cVar1 == '\0') {
        bVar25 = SUB84(in_dr2,0) < fVar26;
      }
      else {
        bVar25 = in_dr2 < dVar21;
      }
      if (bVar25) {
        dVar23 = in_xd14;
        if (cVar2 == '\0') {
          dVar23 = (double)CONCAT44(fVar26,SUB84(in_dr4,0));
        }
      }
      else {
        dVar23 = in_xd14;
        if (cVar2 == '\0') {
          dVar23 = (double)CONCAT44(fVar26,SUB84(in_dr4,0));
        }
        if (cVar1 == '\0') {
          dVar23 = (double)CONCAT44(-(float)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0));
        }
        else {
          dVar23 = -dVar23;
        }
      }
      if (cVar2 == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c112830);
      }
      else {
        in_xd2 = (double)CONCAT44(_DAT_8c112834,DAT_8c112830);
      }
      uVar7 = (uVar4 << 0x13 | uVar7 << 0x14) & DAT_8c112818;
      uVar4 = (uVar7 & 0x80000) >> 0x13;
      uVar7 = uVar7 >> 0x14;
      cVar1 = (char)uVar7;
      fVar22 = (float)((ulonglong)dVar21 >> 0x20);
      if ((char)uVar4 == '\0') {
        bVar25 = SUB84(in_dr2,0) < fVar22;
      }
      else {
        bVar25 = in_dr2 < dVar21;
      }
      uVar18 = (undefined4)((ulonglong)dVar23 >> 0x20);
      dVar24 = dVar21;
      if (bVar25) {
        if (cVar1 == '\0') {
          dVar23 = (double)CONCAT44(uVar18,fVar22);
          dVar24 = in_xd4;
        }
      }
      else {
        if (cVar1 == '\0') {
          dVar23 = (double)CONCAT44(uVar18,fVar22);
          dVar24 = in_xd4;
        }
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),-SUB84(dVar23,0));
      }
      uVar7 = (uVar4 << 0x13 | uVar7 << 0x14) & DAT_8c112818;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = (byte)((uVar7 & 0x80000) >> 0x13);
      bVar30 = (byte)(uVar7 >> 0x14);
      if (bVar29 != 0 || SUB84(dVar23,0) <= (float)((ulonglong)dVar23 >> 0x20)) {
        dVar23 = dVar21;
        if (bVar30 == 0) {
          in_dr2 = (double)(ulonglong)(uint)fVar22;
          dVar23 = in_xd2;
        }
        dVar14 = dVar23;
        if (bVar30 == 0) {
          dVar14 = (double)CONCAT44(-SUB84(in_dr2,0),SUB84(in_dr12,0));
        }
        if (bVar29 == 0) {
          in_dr12 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) / fVar26,SUB84(dVar14,0));
        }
        else {
          in_dr12 = dVar14 / dVar21;
        }
        dVar14 = in_dr12;
        if (bVar30 == 0) {
          dVar14 = (double)((ulonglong)in_dr12 & 0xffffffff00000000);
        }
        fVar26 = (float)((ulonglong)dVar14 >> 0x20);
        (*(code *)PTR_FUN_8c112944)(pdVar8,a5,a6,ar7);
        uVar4 = (uint)bVar27 << 0xc | (uint)bVar28 << 0x12 | (uint)bVar29 << 0x13 |
                (uint)bVar30 << 0x14 | DAT_8c112948;
        uVar7 = (uVar4 & 0x80000) >> 0x13;
        uVar4 = (uVar4 & 0x100000) >> 0x14;
        cVar1 = (char)uVar4;
        if (cVar1 == '\0') {
          dVar14 = (double)CONCAT44(DAT_8c11294c,DAT_8c112950);
        }
        else {
          dVar14 = (double)CONCAT44(DAT_8c112950,DAT_8c11294c);
        }
        fVar22 = (float)((ulonglong)(double)fVar26 >> 0x20);
        if ((char)uVar7 == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) / fVar22,SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 / (double)fVar26;
        }
        uVar7 = (uVar7 << 0x13 | uVar4 << 0x14) & DAT_8c112954;
        fVar26 = (float)dVar14;
        in_dr2 = (double)CONCAT44(fVar22,fVar26);
        dVar14 = dVar23;
        in_xd4 = dVar23;
        if (cVar1 == '\0') {
          dVar14 = (double)CONCAT44(fVar26,fVar26);
          in_xd4 = dVar24;
        }
        bVar27 = (byte)((uVar7 & 0x80000) >> 0x13);
        bVar28 = (byte)(uVar7 >> 0x14);
        if (bVar27 == 0) {
          in_dr4 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                    SUB84(dVar14,0) * (float)((ulonglong)in_dr12 >> 0x20));
        }
        else {
          in_dr4 = dVar14 * in_dr12;
        }
      }
      else {
        dVar23 = in_xd14;
        if (bVar30 == 0) {
          in_dr2 = (double)((ulonglong)dVar21 & 0xffffffff);
          dVar23 = in_xd2;
        }
        dVar14 = dVar23;
        if (bVar30 == 0) {
          dVar14 = (double)CONCAT44(-SUB84(in_dr2,0),SUB84(in_dr12,0));
        }
        if (bVar29 == 0) {
          in_dr12 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) / fVar22,SUB84(dVar14,0));
        }
        else {
          in_dr12 = dVar14 / dVar21;
        }
        dVar14 = in_dr12;
        if (bVar30 == 0) {
          dVar14 = (double)((ulonglong)in_dr12 & 0xffffffff00000000);
        }
        fVar26 = (float)((ulonglong)dVar14 >> 0x20);
        (*(code *)PTR_FUN_8c112838)(pdVar8,a5,a6,ar7);
        uVar7 = (uint)bVar27 << 0xc | (uint)bVar28 << 0x12 | (uint)bVar29 << 0x13 |
                (uint)bVar30 << 0x14 | DAT_8c112824._4_4_;
        uVar4 = (uVar7 & 0x80000) >> 0x13;
        uVar7 = (uVar7 & 0x100000) >> 0x14;
        cVar1 = (char)uVar7;
        if (cVar1 == '\0') {
          dVar14 = (double)CONCAT44(DAT_8c11283c,DAT_8c112830);
        }
        else {
          dVar14 = (double)CONCAT44(uRam8c112840,DAT_8c11283c);
        }
        fVar22 = (float)((ulonglong)(double)fVar26 >> 0x20);
        if ((char)uVar4 == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) / fVar22,SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 / (double)fVar26;
        }
        uVar7 = (uVar4 << 0x13 | uVar7 << 0x14) & DAT_8c112818;
        fVar26 = (float)dVar14;
        in_dr2 = (double)CONCAT44(fVar22,fVar26);
        dVar14 = dVar23;
        in_xd4 = dVar23;
        if (cVar1 == '\0') {
          dVar14 = (double)CONCAT44(fVar26,fVar26);
          in_xd4 = dVar24;
        }
        bVar27 = (byte)((uVar7 & 0x80000) >> 0x13);
        bVar28 = (byte)(uVar7 >> 0x14);
        if (bVar27 == 0) {
          in_dr4 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) *
                                    (float)((ulonglong)in_dr12 >> 0x20),SUB84(dVar14,0));
        }
        else {
          in_dr4 = dVar14 * in_dr12;
        }
      }
      fVar26 = (float)((ulonglong)in_xd4 >> 0x20);
      uVar7 = 1;
      if (1 < uVar11) {
        do {
          if (bVar28 == 0) {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)pdVar10);
            pdVar10 = (double *)((int)pdVar10 + 4);
          }
          else {
            dVar23 = *pdVar10;
            pdVar10 = pdVar10 + 1;
          }
          uVar7 = uVar7 + 1;
          if (bVar28 == 0) {
            *(int *)pdVar9 = SUB84(in_dr2,0);
          }
          else {
            *pdVar9 = dVar23;
          }
          pdVar9 = (double *)((int)pdVar9 + 4);
        } while (uVar7 < uVar11);
      }
      uVar7 = ((uint)bVar27 << 0x13 | (uint)bVar28 << 0x14) & DAT_8c112954;
      in_FPSCR_PR = (byte)((uVar7 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)(uVar7 >> 0x14);
      fVar22 = SUB84(in_dr4,0);
      fVar19 = (float)((ulonglong)in_dr4 >> 0x20);
      if (in_FPSCR_PR == 0) {
        in_dr14 = (double)(ulonglong)
                          (uint)(SUB84(dVar21,0) * fVar19 -
                                (float)((ulonglong)dVar21 >> 0x20) * fVar22);
      }
      else {
        dVar21 = dVar21 * in_dr4 * in_dr4;
        in_dr14 = dVar21 - dVar21;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)pdVar9 = SUB84(in_dr14,0);
      }
      else {
        *pdVar9 = in_xd14;
      }
      in_xd2 = dVar23;
      for (pdVar12 = (double *)((int)pdVar12 + *(int *)ar4 * 4);
          pdVar12 < (double *)(iVar3 * iVar5 * 4 + iVar6);
          pdVar12 = (double *)((int)pdVar12 + *(int *)ar4 * 4)) {
        fVar15 = SUB84(in_dr2,0);
        if (in_FPSCR_SZ == 0) {
          dVar21 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(in_dr6,0));
        }
        else {
          dVar21 = *pdVar12;
        }
        pdVar8 = (double *)((int)pdVar12 + 4);
        uVar7 = ((uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & DAT_8c112954;
        fVar17 = (float)((ulonglong)dVar21 >> 0x20);
        if (in_FPSCR_SZ == 0) {
          dVar21 = in_xd2;
          fVar15 = fVar17;
          in_dr6 = (double)CONCAT44(fVar17,*(undefined4 *)pdVar8);
        }
        else {
          in_xd6 = *pdVar8;
          in_dr6 = dVar21;
        }
        in_FPSCR_PR = (byte)((uVar7 & 0x80000) >> 0x13);
        in_FPSCR_SZ = (byte)(uVar7 >> 0x14);
        dVar23 = in_xd6;
        if (in_FPSCR_SZ == 0) {
          dVar23 = (double)CONCAT44(SUB84(in_dr6,0),fVar15);
        }
        if (in_FPSCR_PR == 0) {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) * fVar22,
                                    SUB84(dVar23,0) * fVar19);
        }
        else {
          dVar23 = dVar23 * in_dr4 * in_dr4;
        }
        fVar15 = fVar26;
        if (in_FPSCR_SZ == 0) {
          fVar15 = fVar22;
        }
        if (in_FPSCR_PR == 0) {
          fVar16 = (float)((ulonglong)dVar23 >> 0x20);
          in_dr2 = (double)CONCAT44(fVar16,SUB84(dVar23,0) - fVar16);
          in_dr6 = (double)(ulonglong)(uint)(fVar15 * fVar17 + SUB84(in_dr6,0) * fVar19);
        }
        else {
          in_dr6 = in_dr6 * in_dr4;
          in_dr2 = dVar23 - dVar23;
        }
        if (in_FPSCR_SZ == 0) {
          *(int *)pdVar12 = SUB84(in_dr2,0);
          *(int *)pdVar8 = SUB84(in_dr6,0);
        }
        else {
          *pdVar12 = dVar21;
          *pdVar8 = in_xd6;
        }
        in_xd2 = dVar21;
      }
      pdVar8 = (double *)(uVar11 * 4 + *(int *)((int)ar5 + 0xc));
      dVar21 = in_xd2;
      if (pdVar8 < *(double **)((int)pdVar13 + -8)) {
        do {
          uVar18 = SUB84(in_dr2,0);
          a5 = (double *)((int)pdVar8 + -4);
          if (in_FPSCR_SZ == 0) {
            in_xd2 = (double)CONCAT44(*(undefined4 *)a5,SUB84(in_dr6,0));
          }
          else {
            in_xd2 = *a5;
          }
          uVar7 = ((uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & DAT_8c112954;
          uVar20 = (undefined4)((ulonglong)in_xd2 >> 0x20);
          if (in_FPSCR_SZ == 0) {
            in_xd2 = dVar21;
            uVar18 = uVar20;
            in_dr6 = (double)CONCAT44(uVar20,*(int *)pdVar8);
          }
          else {
            in_xd6 = *pdVar8;
            in_dr6 = in_xd2;
          }
          in_FPSCR_PR = (byte)((uVar7 & 0x80000) >> 0x13);
          in_FPSCR_SZ = (byte)(uVar7 >> 0x14);
          dVar21 = in_xd6;
          if (in_FPSCR_SZ == 0) {
            dVar21 = (double)CONCAT44(SUB84(in_dr6,0),uVar18);
          }
          if (in_FPSCR_PR == 0) {
            in_dr6 = (double)CONCAT44(uVar20,SUB84(in_dr6,0) * fVar19);
            dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) * fVar22,SUB84(dVar21,0));
          }
          else {
            in_dr6 = in_dr6 * in_dr4;
            dVar21 = dVar21 * in_dr4;
          }
          fVar15 = fVar26;
          if (in_FPSCR_SZ == 0) {
            fVar15 = fVar22;
          }
          if (in_FPSCR_PR == 0) {
            fVar17 = (float)((ulonglong)dVar21 >> 0x20);
            in_dr6 = (double)(ulonglong)
                             (uint)(fVar15 * (float)((ulonglong)in_dr6 >> 0x20) + SUB84(in_dr6,0));
            in_dr2 = (double)CONCAT44(fVar17,SUB84(dVar21,0) * fVar19 - fVar17);
          }
          else {
            in_dr2 = dVar21 * in_dr4 - dVar21 * in_dr4;
          }
          if (in_FPSCR_SZ == 0) {
            *(int *)a5 = SUB84(in_dr2,0);
            *(int *)pdVar8 = SUB84(in_dr6,0);
          }
          else {
            *a5 = in_xd2;
            *pdVar8 = in_xd6;
          }
          pdVar8 = (double *)((int)pdVar8 + *(int *)ar5 * 4);
          dVar21 = in_xd2;
        } while (pdVar8 < *(double **)((int)pdVar13 + -8));
      }
      in_FPSCR_DN = 0;
      in_FPSCR_CAUSE = 0;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)((int)ar4 + 4));
  }
  *(int *)((int)ar4 + 4) = *(int *)((int)ar4 + 4) + -1;
  return 0;
}



/* FUN_8c112958 @ 8c112958 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112958(uint *ar4,int ar5,int ar6,undefined4 ar7)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  float fVar9;
  double in_dr2;
  float fVar10;
  double in_dr4;
  double dVar11;
  double in_xd2;
  bool bVar12;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  pdVar8 = (double *)ar4[3];
  pdVar6 = *(double **)(ar5 + 0xc);
  pdVar4 = *(double **)(ar6 + 0xc);
  uVar5 = 0;
  while (bVar12 = uVar5 < ar4[1], uVar5 = uVar5 + 1, bVar12) {
    if (in_FPSCR_SZ == 0) {
      dVar11 = (double)CONCAT44(*(undefined4 *)pdVar4,SUB84(in_dr4,0));
      pdVar4 = (double *)((int)pdVar4 + 4);
    }
    else {
      dVar11 = *pdVar4;
      pdVar4 = pdVar4 + 1;
    }
    pdVar8 = (double *)((int)pdVar8 + uVar5 * 4);
    pdVar1 = pdVar4;
    uVar3 = uVar5;
    pdVar7 = pdVar8;
    if (uVar5 < *ar4) {
      do {
        uVar3 = uVar3 + 1;
        if (in_FPSCR_SZ == 0) {
          fVar9 = *(float *)pdVar7;
          pdVar7 = (double *)((int)pdVar7 + 4);
        }
        else {
          fVar9 = (float)((ulonglong)*pdVar7 >> 0x20);
          pdVar7 = pdVar7 + 1;
        }
        uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13
                | (uint)in_FPSCR_SZ << 0x14) & DAT_8c112a1c;
        if (in_FPSCR_SZ == 0) {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)pdVar1);
          pdVar1 = (double *)((int)pdVar1 + 4);
        }
        else {
          in_xd2 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
        in_FPSCR_CAUSE = 0;
        in_FPSCR_DN = 0;
        in_FPSCR_PR = (byte)((uVar2 & 0x80000) >> 0x13);
        in_FPSCR_SZ = (byte)((uVar2 & 0x100000) >> 0x14);
        if (in_FPSCR_PR == 0) {
          dVar11 = (double)CONCAT44(fVar9 * SUB84(in_dr2,0) + (float)((ulonglong)dVar11 >> 0x20),
                                    SUB84(dVar11,0));
        }
      } while (uVar3 < *ar4);
    }
    if (in_FPSCR_SZ == 0) {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)pdVar6);
      pdVar6 = (double *)((int)pdVar6 + 4);
    }
    else {
      in_xd2 = *pdVar6;
      pdVar6 = pdVar6 + 1;
    }
    pdVar1 = (double *)((int)pdVar4 + -4);
    uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c112a1c;
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((uVar3 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)((uVar3 & 0x100000) >> 0x14);
    if (in_FPSCR_PR == 0) {
      in_dr4 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) * SUB84(in_dr2,0),SUB84(dVar11,0)
                               );
    }
    else {
      in_dr4 = dVar11 * in_dr2;
    }
    if (in_FPSCR_SZ == 0) {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)pdVar1);
    }
    else {
      in_xd2 = *pdVar1;
    }
    fVar9 = (float)((ulonglong)in_dr4 >> 0x20);
    if (in_FPSCR_PR == 0) {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) - fVar9);
    }
    else {
      in_dr2 = in_dr2 - in_dr4;
    }
    if (in_FPSCR_SZ == 0) {
      *(int *)pdVar1 = SUB84(in_dr2,0);
    }
    else {
      *pdVar1 = in_xd2;
    }
    uVar3 = uVar5;
    pdVar1 = pdVar4;
    if (uVar5 < *ar4) {
      do {
        uVar3 = uVar3 + 1;
        dVar11 = in_dr4;
        if (in_FPSCR_SZ == 0) {
          dVar11 = (double)CONCAT44(fVar9,SUB84(in_dr2,0));
        }
        uVar2 = ((uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & DAT_8c112a1c;
        if (in_FPSCR_SZ == 0) {
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),*(float *)pdVar8);
          pdVar8 = (double *)((int)pdVar8 + 4);
        }
        else {
          in_xd2 = *pdVar8;
          pdVar8 = pdVar8 + 1;
        }
        in_FPSCR_CAUSE = 0;
        in_FPSCR_DN = 0;
        in_FPSCR_PR = (byte)((uVar2 & 0x80000) >> 0x13);
        in_FPSCR_SZ = (byte)(uVar2 >> 0x14);
        if (in_FPSCR_PR == 0) {
          dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) * SUB84(dVar11,0),
                                    SUB84(dVar11,0));
        }
        else {
          dVar11 = dVar11 * dVar11;
        }
        if (in_FPSCR_SZ == 0) {
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),*(undefined4 *)pdVar1);
        }
        else {
          in_xd2 = *pdVar1;
        }
        if (in_FPSCR_PR == 0) {
          fVar10 = (float)((ulonglong)dVar11 >> 0x20);
          in_dr2 = (double)CONCAT44(fVar10,SUB84(dVar11,0) - fVar10);
        }
        else {
          in_dr2 = dVar11 - dVar11;
        }
        if (in_FPSCR_SZ == 0) {
          *(int *)pdVar1 = SUB84(in_dr2,0);
        }
        else {
          *pdVar1 = in_xd2;
        }
        pdVar1 = (double *)((int)pdVar1 + 4);
      } while (uVar3 < *ar4);
    }
  }
  return 0;
}



/* FUN_8c1129e4 @ 8c1129e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1129e4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 in_fr3;
  undefined8 in_xd2;
  char in_FPSCR_SZ;
  
  uVar3 = *(uint *)(ar4 + 8);
  puVar4 = *(undefined8 **)(ar4 + 0xc);
  uVar1 = 0;
  puVar2 = *(undefined8 **)(ar5 + 0xc);
  if (uVar3 != 0) {
    do {
      if (in_FPSCR_SZ == '\0') {
        in_fr3 = *(undefined4 *)puVar2;
        puVar2 = (undefined8 *)((int)puVar2 + 4);
      }
      else {
        in_xd2 = *puVar2;
        puVar2 = puVar2 + 1;
      }
      uVar1 = uVar1 + 1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)puVar4 = in_fr3;
      }
      else {
        *puVar4 = in_xd2;
      }
      puVar4 = (undefined8 *)((int)puVar4 + 4);
    } while (uVar1 < uVar3);
  }
  return in_r0;
}



/* FUN_8c112a02 @ 8c112a02 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112a02(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_SZ;
  
  uVar2 = *(uint *)(ar4 + 8);
  puVar3 = *(undefined8 **)(ar4 + 0xc);
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      uVar1 = uVar1 + 1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)puVar3 = in_fr4;
      }
      else {
        *puVar3 = CONCAT44(in_fr4,in_fr5);
      }
      puVar3 = (undefined8 *)((int)puVar3 + 4);
    } while (uVar1 < uVar2);
  }
  return in_r0;
}



/* FUN_8c112a20 @ 8c112a20 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c112a20(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  undefined4 in_fr5;
  undefined8 uVar5;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    uVar5 = CONCAT44(_DAT_8c112b00,in_fr5);
  }
  else {
    uVar5 = CONCAT44(PTR_FUN_8c112b04,_DAT_8c112b00);
  }
  dVar4 = (double)(*(code *)PTR_FUN_8c112b04)(uVar5,0x10);
  iVar2 = (int)DAT_8c112af2;
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13) &
          DAT_8c112b08;
  *(uint *)(iVar2 + ar4) = ar5;
  *(uint *)(iVar2 + 8 + ar4) = ar5;
  if ((char)((uVar3 & 0x80000) >> 0x13) == '\0') {
    uVar3 = (uint)(float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    uVar3 = (uint)dVar4;
  }
  uVar3 = uVar3 & 0xffff;
  if (*(char *)(iVar2 + -0x3f + ar4) == '\0') {
    if (uVar3 < ar5) {
      uVar3 = ar5;
    }
    *(uint *)(DAT_8c112af4 + ar4) = uVar3;
  }
  else {
    *(undefined4 *)(DAT_8c112af4 + ar4) = 1;
  }
  if ((ar5 < 2) && (*(char *)(DAT_8c112af6 + ar4) == '\0')) {
    iVar2 = (int)DAT_8c112af8;
    if (*(undefined **)(iVar2 + ar4) == PTR_FUN_8c112b14) {
      return 0;
    }
    *(undefined **)(iVar2 + ar4) = PTR_FUN_8c112b14;
    *(undefined4 *)(iVar2 + 4 + ar4) = *(undefined4 *)(iVar2 + ar4);
    if (*(int *)(ar4 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(DAT_8c112afc + ar4) != 0) {
      return 0;
    }
    cVar1 = (*(code *)PTR_FUN_8c112b18)(ar4);
  }
  else {
    iVar2 = (int)DAT_8c112af8;
    if (*(undefined **)(iVar2 + ar4) == PTR_FUN_8c112b0c) {
      return 0;
    }
    *(undefined **)(iVar2 + ar4) = PTR_FUN_8c112b0c;
    *(undefined4 *)(iVar2 + 4 + ar4) = *(undefined4 *)(iVar2 + ar4);
    if (*(int *)(ar4 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(DAT_8c112afa + ar4) != 0) {
      return 0;
    }
    cVar1 = (*(code *)PTR_FUN_8c112b10)(ar4);
  }
  if (cVar1 == '\0') {
    return 0;
  }
  return 1;
}



/* FUN_8c112a28 @ 8c112a28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112a28(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int unaff_r14;
  undefined4 extraout_fr1;
  float extraout_fr0;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  
  (*(code *)PTR_FUN_8c112b04)(ar4,0x10,ar6,ar7);
  iVar1 = (int)DAT_8c112af2;
  uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13) &
          DAT_8c112b08;
  *(uint *)(iVar1 + unaff_r14) = ar5;
  *(uint *)(iVar1 + 8 + unaff_r14) = ar5;
  if ((char)((uVar2 & 0x80000) >> 0x13) == '\0') {
    uVar2 = (uint)extraout_fr0;
  }
  else {
    uVar2 = (uint)(double)CONCAT44(extraout_fr0,extraout_fr1);
  }
  uVar2 = uVar2 & 0xffff;
  if (*(char *)(iVar1 + -0x3f + unaff_r14) == '\0') {
    if (uVar2 < ar5) {
      uVar2 = ar5;
    }
    *(uint *)(DAT_8c112af4 + unaff_r14) = uVar2;
  }
  else {
    *(undefined4 *)(DAT_8c112af4 + unaff_r14) = 1;
  }
  if ((ar5 < 2) && (*(char *)(DAT_8c112af6 + unaff_r14) == '\0')) {
    iVar1 = (int)DAT_8c112af8;
    if (*(undefined **)(iVar1 + unaff_r14) == PTR_FUN_8c112b14) {
      return 0;
    }
    *(undefined **)(iVar1 + unaff_r14) = PTR_FUN_8c112b14;
    *(undefined4 *)(iVar1 + 4 + unaff_r14) = *(undefined4 *)(iVar1 + unaff_r14);
    if (*(int *)(unaff_r14 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(DAT_8c112afc + unaff_r14) != 0) {
      return 0;
    }
    uVar2 = (*(code *)PTR_FUN_8c112b18)(unaff_r14,1,ar6,ar7);
  }
  else {
    iVar1 = (int)DAT_8c112af8;
    if (*(undefined **)(iVar1 + unaff_r14) == PTR_FUN_8c112b0c) {
      return 0;
    }
    *(undefined **)(iVar1 + unaff_r14) = PTR_FUN_8c112b0c;
    *(undefined4 *)(iVar1 + 4 + unaff_r14) = *(undefined4 *)(iVar1 + unaff_r14);
    if (*(int *)(unaff_r14 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(DAT_8c112afa + unaff_r14) != 0) {
      return 0;
    }
    uVar2 = (*(code *)PTR_FUN_8c112b10)(unaff_r14,1,ar6,ar7);
  }
  if ((uVar2 & 0xff) == 0) {
    return 0;
  }
  return 1;
}



/* FUN_8c112b1c @ 8c112b1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c112b1c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined2 *)(DAT_8c112c0c + ar4) = (undefined2)ar5;
  uVar1 = DAT_8c112c10;
  iVar2 = (int)DAT_8c112c0e;
  if (*(int *)(iVar2 + ar4) != 0) {
    uVar3 = 0;
    if (*(int *)(ar4 + 0x38) != 0) {
      do {
        if ((*(ushort *)(uVar3 * 2 + *(int *)(DAT_8c112c0e + ar4)) & uVar1) == 0) {
          iVar2 = *(int *)(DAT_8c112c12 + ar4);
          *(undefined2 *)(iVar2 + uVar3 * 2) = 0;
        }
        else {
          iVar2 = *(int *)(DAT_8c112c12 + ar4);
          *(undefined2 *)(iVar2 + uVar3 * 2) = (undefined2)ar5;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(ar4 + 0x38));
    }
  }
  return iVar2;
}



/* FUN_8c112b6e @ 8c112b6e callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112b6e(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int a6;
  uint uVar5;
  int iVar6;
  int a4;
  
  iVar6 = ar4[0x17];
  a4 = *ar4;
  iVar2 = (**(code **)(a4 + 0x10))(a4,(iVar6 + 1) * 4,ar6,ar7);
  if (iVar2 != 0) {
    if (iVar6 != 0) {
      a6 = iVar6 << 2;
      (*(code *)PTR_memmove_8c112c1c)(iVar2,ar4[0x16],a6,ar7);
      (**(code **)(a4 + 0x18))(a4,ar4[0x16],a6,ar7);
    }
    ar4[0x16] = iVar2;
    ar6 = 0x20;
    iVar2 = (**(code **)(a4 + 0x14))
                      (a4,(uint)(*(ushort *)((int)DAT_8c112c14 + (int)ar4) >> 5),0x20,ar7);
    if (iVar2 != 0) {
      if (ar5 != 0) {
        uVar1 = *(ushort *)((int)DAT_8c112cfa + (int)ar4);
        *(int *)(ar5 + 0x18) = iVar2;
        uVar5 = (uint)(uVar1 >> 5);
        uVar3 = 0;
        uVar4 = uVar3;
        if (uVar5 != 1) {
          do {
            uVar3 = uVar4 + 1;
            *(uint *)(uVar4 * 0x20 + iVar2 + 0x18) = (uVar4 + 1) * 0x20 + iVar2;
            uVar4 = uVar3;
          } while (uVar3 < uVar5 - 1);
        }
        *(undefined4 *)(uVar3 * 0x20 + iVar2 + 0x18) = 0;
      }
      *(int *)(ar4[0x16] + iVar6 * 4) = iVar2;
      ar4[0x17] = iVar6 + 1;
      return iVar2;
    }
  }
  (*(code *)PTR_FUN_8c112c20)(ar4,2,ar6,ar7);
  return 0;
}



/* FUN_8c112c90 @ 8c112c90 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112c90(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  uVar1 = 0;
  if (ar4[0x17] != 0) {
    do {
      (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)(ar4[0x16] + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)ar4[0x17]);
  }
  if (ar4[0x16] != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x16]);
  }
  ar4[0x16] = 0;
  ar4[0x17] = 0;
  return 0x5c;
}



/* FUN_8c112c9e @ 8c112c9e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112c9e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint unaff_r11;
  uint uVar1;
  int a4;
  int *unaff_r14;
  
  a4 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(uint *)(in_r0 + (int)unaff_r14)) {
    do {
      (**(code **)(a4 + 0x18))(a4,*(undefined4 *)(unaff_r14[0x16] + uVar1 * 4),ar6,ar7);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)unaff_r14[0x17]);
  }
  if (unaff_r14[0x16] != 0) {
    (**(code **)(a4 + 0x18))(a4,unaff_r14[0x16],ar6,ar7);
  }
  unaff_r14[0x16] = unaff_r11;
  unaff_r14[0x17] = unaff_r11;
  return 0x5c;
}



/* FUN_8c112d00 @ 8c112d00 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112d00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = 0;
  uVar5 = (uint)(*(ushort *)(DAT_8c112e2a + ar4) >> 5);
  uVar6 = 0;
  if (*(int *)(ar4 + 0x5c) != 0) {
    do {
      iVar4 = *(int *)(*(int *)(ar4 + 0x58) + uVar6 * 4);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x18) = iVar4;
      }
      uVar2 = 0;
      uVar3 = uVar2;
      if (uVar5 != 1) {
        do {
          uVar2 = uVar3 + 1;
          *(uint *)(uVar3 * 0x20 + iVar4 + 0x18) = (uVar3 + 1) * 0x20 + iVar4;
          uVar3 = uVar2;
        } while (uVar2 < uVar5 - 1);
      }
      uVar6 = uVar6 + 1;
      iVar1 = uVar2 * 0x20 + iVar4;
    } while (uVar6 < *(uint *)(ar4 + 0x5c));
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  *(undefined4 *)(ar4 + 0x54) = **(undefined4 **)(ar4 + 0x58);
  return 0;
}



/* FUN_8c112d82 @ 8c112d82 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112d82(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  code *extraout_r3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)((int)DAT_8c112e2c + (int)ar4);
  iVar7 = *ar4;
  iVar4 = (iVar6 + 1) * 4;
  iVar3 = iVar7;
  iVar2 = (**(code **)(iVar7 + 0x10))(iVar7,iVar4,ar6,ar7);
  if (iVar2 != 0) {
    if (iVar6 != 0) {
      ar6 = iVar6 << 2;
      (*(code *)PTR_memmove_8c112e34)(iVar2,*(undefined4 *)((int)DAT_8c112e2e + (int)ar4),ar6,ar7);
      iVar4 = *(int *)((int)DAT_8c112e2e + (int)ar4);
      iVar3 = iVar7;
      (**(code **)(iVar7 + 0x18))(iVar7,iVar4,ar6,ar7);
    }
    puVar1 = PTR_libgcc_divide_helper_01051c_8c112e38;
    *(int *)((int)DAT_8c112e2e + (int)ar4) = iVar2;
    iVar3 = (*(code *)puVar1)(iVar3,iVar4,ar6,ar7);
    iVar3 = iVar3 * 0x18;
    iVar2 = (*extraout_r3)(iVar7,iVar3,ar6,ar7);
    if (iVar2 != 0) {
      iVar3 = (*(code *)PTR_libgcc_divide_helper_01051c_8c112f38)(iVar2,iVar3,ar6,ar7);
      if (ar5 == 0) {
        iVar4 = (int)DAT_8c112f32;
        *(int *)(iVar4 + (int)ar4) = iVar2;
        *(undefined4 *)(iVar4 + -0xc + (int)ar4) = 0;
      }
      else {
        *(int *)(ar5 + 0x10) = iVar2;
      }
      uVar5 = 0;
      if (iVar3 != 1) {
        do {
          iVar7 = uVar5 + 1;
          iVar4 = uVar5 * 0x18;
          uVar5 = uVar5 + 1;
          *(int *)(iVar4 + iVar2 + 0x10) = iVar7 * 0x18 + iVar2;
        } while (uVar5 < iVar3 - 1U);
      }
      iVar3 = (int)DAT_8c112f34;
      *(undefined4 *)(uVar5 * 0x18 + iVar2 + 0x10) = 0;
      *(int *)(*(int *)(iVar3 + (int)ar4) + iVar6 * 4) = iVar2;
      *(int *)((int)DAT_8c112f36 + (int)ar4) = iVar6 + 1;
      return iVar2;
    }
  }
  (*(code *)PTR_FUN_8c112e3c)(ar4,2,ar6,ar7);
  return 0;
}



/* FUN_8c112ec6 @ 8c112ec6 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c112ec6(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  uVar1 = 0;
  if (*(int *)((int)DAT_8c112f36 + (int)ar4) != 0) {
    do {
      (**(code **)(iVar2 + 0x18))
                (iVar2,*(undefined4 *)(*(int *)((int)DAT_8c112f34 + (int)ar4) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)DAT_8c112f36 + (int)ar4));
  }
  if (*(int *)((int)DAT_8c112f34 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c112f34 + (int)ar4));
  }
  iVar2 = (int)DAT_8c112f34;
  *(undefined4 *)(iVar2 + (int)ar4) = 0;
  iVar2 = iVar2 + 4;
  *(undefined4 *)(iVar2 + (int)ar4) = 0;
  return iVar2;
}



/* FUN_8c112ed4 @ 8c112ed4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c112ed4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint unaff_r11;
  uint uVar1;
  int iVar2;
  int *unaff_r14;
  
  iVar2 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(uint *)(in_r0 + (int)unaff_r14)) {
    do {
      (**(code **)(iVar2 + 0x18))
                (iVar2,*(undefined4 *)(*(int *)((int)DAT_8c112f34 + (int)unaff_r14) + uVar1 * 4),ar6
                 ,ar7);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)DAT_8c112f36 + (int)unaff_r14));
  }
  if (*(int *)((int)DAT_8c112f34 + (int)unaff_r14) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c112f34 + (int)unaff_r14),ar6,ar7);
  }
  iVar2 = (int)DAT_8c112f34;
  *(uint *)(iVar2 + (int)unaff_r14) = unaff_r11;
  iVar2 = iVar2 + 4;
  *(uint *)(iVar2 + (int)unaff_r14) = unaff_r11;
  return iVar2;
}



/* FUN_8c112f40 @ 8c112f40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112f40(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  uVar4 = 0;
  iVar1 = (*(code *)PTR_libgcc_divide_helper_01051c_8c113018)();
  uVar7 = uVar4;
  if (uVar4 < *(uint *)(DAT_8c113010 + ar4)) {
    do {
      iVar5 = *(int *)(*(int *)(DAT_8c113012 + ar4) + uVar7 * 4);
      if (uVar4 != 0) {
        *(int *)(uVar4 + 0x10) = iVar5;
      }
      uVar4 = uVar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(iVar2 + iVar5 + 0x10) = iVar3 * 0x18 + iVar5;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar7 = uVar7 + 1;
      uVar4 = uVar4 * 0x18 + iVar5;
    } while (uVar7 < *(uint *)(DAT_8c113010 + ar4));
  }
  if (uVar4 != 0) {
    *(uint *)(uVar4 + 0x10) = uVar6;
  }
  iVar1 = (int)DAT_8c113012;
  *(undefined4 *)(iVar1 + 8 + ar4) = **(undefined4 **)(iVar1 + ar4);
  *(uint *)(iVar1 + -4 + ar4) = uVar6;
  return 0;
}



/* FUN_8c112f48 @ 8c112f48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112f48(int ar4,uint ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = (*(code *)PTR_libgcc_divide_helper_01051c_8c113018)(ar4,ar5,ar6,ar7);
  uVar6 = ar5;
  if (ar5 < *(uint *)(DAT_8c113010 + ar4)) {
    do {
      iVar5 = *(int *)(*(int *)(DAT_8c113012 + ar4) + uVar6 * 4);
      if (ar5 != 0) {
        *(int *)(ar5 + 0x10) = iVar5;
      }
      uVar4 = ar7;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(iVar2 + iVar5 + 0x10) = iVar3 * 0x18 + iVar5;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar6 = uVar6 + 1;
      ar5 = uVar4 * 0x18 + iVar5;
    } while (uVar6 < *(uint *)(DAT_8c113010 + ar4));
  }
  if (ar5 != 0) {
    *(uint *)(ar5 + 0x10) = ar7;
  }
  iVar1 = (int)DAT_8c113012;
  *(undefined4 *)(iVar1 + 8 + ar4) = **(undefined4 **)(iVar1 + ar4);
  *(uint *)(iVar1 + -4 + ar4) = ar7;
  return 0;
}



/* FUN_8c112fd8 @ 8c112fd8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112fd8(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  code *extraout_r3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)((int)DAT_8c113014 + (int)ar4);
  iVar7 = *ar4;
  iVar4 = (iVar6 + 1) * 4;
  iVar3 = iVar7;
  iVar2 = (**(code **)(iVar7 + 0x10))(iVar7,iVar4,ar6,ar7);
  if (iVar2 != 0) {
    if (iVar6 != 0) {
      ar6 = iVar6 << 2;
      (*(code *)PTR_memmove_8c113118)(iVar2,*(undefined4 *)((int)DAT_8c11310c + (int)ar4),ar6,ar7);
      iVar4 = *(int *)((int)DAT_8c11310c + (int)ar4);
      iVar3 = iVar7;
      (**(code **)(iVar7 + 0x18))(iVar7,iVar4,ar6,ar7);
    }
    puVar1 = PTR_libgcc_divide_helper_01051c_8c11311c;
    *(int *)((int)DAT_8c11310c + (int)ar4) = iVar2;
    iVar3 = (*(code *)puVar1)(iVar3,iVar4,ar6,ar7);
    iVar3 = iVar3 * 0x18;
    iVar2 = (*extraout_r3)(iVar7,iVar3,ar6,ar7);
    if (iVar2 != 0) {
      if (ar5 != 0) {
        iVar3 = (*(code *)PTR_libgcc_divide_helper_01051c_8c11311c)(iVar2,iVar3,ar6,ar7);
        *(int *)(ar5 + 4) = iVar2;
        uVar5 = 0;
        if (iVar3 != 1) {
          do {
            iVar7 = uVar5 + 1;
            iVar4 = uVar5 * 0x18;
            uVar5 = uVar5 + 1;
            *(int *)(iVar4 + iVar2 + 4) = iVar7 * 0x18 + iVar2;
          } while (uVar5 < iVar3 - 1U);
        }
        *(undefined4 *)(uVar5 * 0x18 + iVar2 + 4) = 0;
      }
      *(int *)(*(int *)((int)DAT_8c11310c + (int)ar4) + iVar6 * 4) = iVar2;
      *(int *)((int)DAT_8c113110 + (int)ar4) = iVar6 + 1;
      return iVar2;
    }
  }
  (*(code *)PTR_FUN_8c113120)(ar4,2,ar6,ar7);
  return 0;
}



/* FUN_8c113124 @ 8c113124 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c113124(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  uVar1 = 0;
  if (*(int *)((int)DAT_8c11323c + (int)ar4) != 0) {
    do {
      (**(code **)(iVar2 + 0x18))
                (iVar2,*(undefined4 *)(*(int *)((int)DAT_8c11323e + (int)ar4) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)DAT_8c11323c + (int)ar4));
  }
  if (*(int *)((int)DAT_8c11323e + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c11323e + (int)ar4));
  }
  iVar2 = (int)DAT_8c11323e;
  *(undefined4 *)(iVar2 + (int)ar4) = 0;
  iVar2 = iVar2 + 4;
  *(undefined4 *)(iVar2 + (int)ar4) = 0;
  return iVar2;
}



/* FUN_8c113132 @ 8c113132 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c113132(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint unaff_r11;
  uint uVar1;
  int iVar2;
  int *unaff_r14;
  
  iVar2 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(uint *)(in_r0 + (int)unaff_r14)) {
    do {
      (**(code **)(iVar2 + 0x18))
                (iVar2,*(undefined4 *)(*(int *)((int)DAT_8c11323e + (int)unaff_r14) + uVar1 * 4),ar6
                 ,ar7);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)DAT_8c11323c + (int)unaff_r14));
  }
  if (*(int *)((int)DAT_8c11323e + (int)unaff_r14) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c11323e + (int)unaff_r14),ar6,ar7);
  }
  iVar2 = (int)DAT_8c11323e;
  *(uint *)(iVar2 + (int)unaff_r14) = unaff_r11;
  iVar2 = iVar2 + 4;
  *(uint *)(iVar2 + (int)unaff_r14) = unaff_r11;
  return iVar2;
}



/* FUN_8c11318e @ 8c11318e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11318e(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  code *extraout_r3;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  uVar1 = *(ushort *)((int)DAT_8c113240 + (int)ar4);
  iVar10 = *ar4;
  uVar9 = (uint)uVar1;
  iVar4 = (**(code **)(iVar10 + 0x10))(iVar10,(uVar9 + 1) * 4,0);
  if (iVar4 != 0) {
    if (uVar9 != 0) {
      (*(code *)PTR_memmove_8c11324c)
                (iVar4,*(undefined4 *)((int)DAT_8c113242 + (int)ar4),uVar9 << 2);
      (**(code **)(iVar10 + 0x18))(iVar10,*(undefined4 *)((int)DAT_8c113242 + (int)ar4));
    }
    puVar3 = PTR_libgcc_divide_helper_01051c_8c113250;
    *(int *)((int)DAT_8c113242 + (int)ar4) = iVar4;
    iVar4 = (*(code *)puVar3)();
    piVar5 = (int *)(*extraout_r3)(iVar10,iVar4 * 0xc);
    if (piVar5 != (int *)0x0) {
      iVar4 = (*(code *)PTR_libgcc_divide_helper_01051c_8c11334c)();
      uVar8 = iVar4 - 1;
      if (ar5 != (int *)0x0) {
        *ar5 = (int)piVar5;
        piVar5[1] = (int)ar5;
      }
      uVar11 = 0;
      piVar7 = piVar5;
      piVar2 = piVar5;
      if (uVar8 != 0) {
        do {
          uVar11 = uVar11 + 1;
          *piVar7 = (int)(piVar2 + 3);
          piVar2[4] = (int)piVar7;
          piVar7 = piVar7 + 3;
          piVar2 = piVar2 + 3;
        } while (uVar11 < uVar8);
      }
      iVar4 = (int)DAT_8c113344;
      piVar5[uVar8 * 3] = 0;
      *(int **)(*(int *)(iVar4 + (int)ar4) + uVar9 * 4) = piVar5;
      iVar4 = (int)DAT_8c113346;
      *(ushort *)(iVar4 + (int)ar4) = uVar1 + 1;
      if (*(int *)(iVar4 + 8 + (int)ar4) == 0) {
        *(int **)((int)DAT_8c113348 + (int)ar4) = piVar5;
      }
      iVar4 = (int)DAT_8c11334a;
      *(int **)(iVar4 + (int)ar4) = piVar5 + uVar8 * 3;
      return iVar4;
    }
  }
  uVar6 = (*(code *)PTR_FUN_8c113254)(ar4,2);
  return uVar6;
}



/* FUN_8c11319e @ 8c11319e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11319e(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ushort uVar1;
  int *piVar2;
  undefined *puVar3;
  int in_r0;
  int a4;
  int iVar4;
  int *a4_00;
  undefined4 uVar5;
  code *extraout_r3;
  int a5;
  int *piVar6;
  uint uVar7;
  int *unaff_r10;
  uint uVar8;
  int a4_01;
  uint uVar9;
  int *unaff_r14;
  
  uVar1 = *(ushort *)(in_r0 + (int)unaff_r14);
  a4_01 = *unaff_r14;
  uVar8 = (uint)uVar1;
  a5 = (uVar8 + 1) * 4;
  iVar4 = a4_01;
  a4 = (**(code **)(a4_01 + 0x10))(a4_01,a5,ar6,ar7);
  if (a4 != 0) {
    if (uVar8 != 0) {
      ar6 = uVar8 << 2;
      (*(code *)PTR_memmove_8c11324c)
                (a4,*(undefined4 *)((int)DAT_8c113242 + (int)unaff_r14),ar6,ar7);
      a5 = *(int *)((int)DAT_8c113242 + (int)unaff_r14);
      iVar4 = a4_01;
      (**(code **)(a4_01 + 0x18))(a4_01,a5,ar6,ar7);
    }
    puVar3 = PTR_libgcc_divide_helper_01051c_8c113250;
    *(int *)((int)DAT_8c113242 + (int)unaff_r14) = a4;
    iVar4 = (*(code *)puVar3)(iVar4,a5,ar6,ar7);
    iVar4 = iVar4 * 0xc;
    a4_00 = (int *)(*extraout_r3)(a4_01,iVar4,ar6,ar7);
    if (a4_00 != (int *)0x0) {
      iVar4 = (*(code *)PTR_libgcc_divide_helper_01051c_8c11334c)(a4_00,iVar4,ar6,ar7);
      uVar7 = iVar4 - 1;
      if (unaff_r10 != (int *)0x0) {
        *unaff_r10 = (int)a4_00;
        a4_00[1] = (int)unaff_r10;
      }
      uVar9 = 0;
      piVar6 = a4_00;
      piVar2 = a4_00;
      if (uVar7 != 0) {
        do {
          uVar9 = uVar9 + 1;
          *piVar6 = (int)(piVar2 + 3);
          piVar2[4] = (int)piVar6;
          piVar6 = piVar6 + 3;
          piVar2 = piVar2 + 3;
        } while (uVar9 < uVar7);
      }
      iVar4 = (int)DAT_8c113344;
      a4_00[uVar7 * 3] = 0;
      *(int **)(*(int *)(iVar4 + (int)unaff_r14) + uVar8 * 4) = a4_00;
      iVar4 = (int)DAT_8c113346;
      *(ushort *)(iVar4 + (int)unaff_r14) = uVar1 + 1;
      if (*(int *)(iVar4 + 8 + (int)unaff_r14) == 0) {
        *(int **)((int)DAT_8c113348 + (int)unaff_r14) = a4_00;
      }
      iVar4 = (int)DAT_8c11334a;
      *(int **)(iVar4 + (int)unaff_r14) = a4_00 + uVar7 * 3;
      return iVar4;
    }
  }
  uVar5 = (*(code *)PTR_FUN_8c113254)(2);
  return uVar5;
}



/* FUN_8c1132cc @ 8c1132cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1132cc(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  uVar1 = 0;
  if (*(short *)((int)DAT_8c113346 + (int)ar4) != 0) {
    do {
      (**(code **)(iVar2 + 0x18))
                (iVar2,*(undefined4 *)(*(int *)((int)DAT_8c113344 + (int)ar4) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)((int)DAT_8c113346 + (int)ar4));
  }
  if (*(int *)((int)DAT_8c113344 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c113344 + (int)ar4));
  }
  iVar2 = (int)DAT_8c113344;
  *(undefined4 *)(iVar2 + (int)ar4) = 0;
  *(undefined2 *)(iVar2 + 4 + (int)ar4) = 0;
  *(undefined4 *)(iVar2 + 8 + (int)ar4) = 0;
  *(undefined4 *)(iVar2 + 0xc + (int)ar4) = 0;
  return iVar2 + 0xc;
}



/* FUN_8c1132da @ 8c1132da callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1132da(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint unaff_r11;
  uint uVar1;
  int iVar2;
  int *unaff_r14;
  
  iVar2 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(ushort *)(in_r0 + (int)unaff_r14)) {
    do {
      (**(code **)(iVar2 + 0x18))
                (iVar2,*(undefined4 *)(*(int *)((int)DAT_8c113344 + (int)unaff_r14) + uVar1 * 4),ar6
                 ,ar7);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)((int)DAT_8c113346 + (int)unaff_r14));
  }
  if (*(int *)((int)DAT_8c113344 + (int)unaff_r14) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c113344 + (int)unaff_r14),ar6,ar7);
  }
  iVar2 = (int)DAT_8c113344;
  *(uint *)(iVar2 + (int)unaff_r14) = unaff_r11;
  *(short *)(iVar2 + 4 + (int)unaff_r14) = (short)unaff_r11;
  *(uint *)(iVar2 + 8 + (int)unaff_r14) = unaff_r11;
  *(uint *)(iVar2 + 0xc + (int)unaff_r14) = unaff_r11;
  return iVar2 + 0xc;
}



/* FUN_8c113354 @ 8c113354 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint * FUN_8c113354(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = 0;
  uVar4 = 0;
  iVar1 = (*(code *)PTR_libgcc_divide_helper_01051c_8c113464)();
  uVar8 = uVar4;
  if (uVar4 < *(uint *)(DAT_8c11345e + ar4)) {
    do {
      iVar7 = *(int *)(*(int *)(DAT_8c113460 + ar4) + uVar8 * 4);
      if (uVar4 != 0) {
        *(int *)(uVar4 + 4) = iVar7;
      }
      uVar4 = uVar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(iVar2 + iVar7 + 4) = iVar3 * 0x18 + iVar7;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar8 = uVar8 + 1;
      uVar4 = uVar4 * 0x18 + iVar7;
    } while (uVar8 < *(uint *)(DAT_8c11345e + ar4));
  }
  if (uVar4 != 0) {
    *(uint *)(uVar4 + 4) = uVar6;
  }
  iVar1 = (int)DAT_8c113460;
  puVar5 = (uint *)**(undefined4 **)(iVar1 + ar4);
  puVar5[3] = uVar6;
  puVar5[5] = uVar6;
  *puVar5 = uVar6;
  puVar5[2] = uVar6;
  puVar5[4] = uVar6;
  *(uint *)(iVar1 + 8 + ar4) = puVar5[1];
  return puVar5;
}



/* FUN_8c11335c @ 8c11335c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint * FUN_8c11335c(int ar4,uint ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = (*(code *)PTR_libgcc_divide_helper_01051c_8c113464)(ar4,ar5,ar6,ar7);
  uVar7 = ar5;
  if (ar5 < *(uint *)(DAT_8c11345e + ar4)) {
    do {
      iVar6 = *(int *)(*(int *)(DAT_8c113460 + ar4) + uVar7 * 4);
      if (ar5 != 0) {
        *(int *)(ar5 + 4) = iVar6;
      }
      uVar4 = ar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(iVar2 + iVar6 + 4) = iVar3 * 0x18 + iVar6;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar7 = uVar7 + 1;
      ar5 = uVar4 * 0x18 + iVar6;
    } while (uVar7 < *(uint *)(DAT_8c11345e + ar4));
  }
  if (ar5 != 0) {
    *(uint *)(ar5 + 4) = ar6;
  }
  iVar1 = (int)DAT_8c113460;
  puVar5 = (uint *)**(undefined4 **)(iVar1 + ar4);
  puVar5[3] = ar6;
  puVar5[5] = ar6;
  *puVar5 = ar6;
  puVar5[2] = ar6;
  puVar5[4] = ar6;
  *(uint *)(iVar1 + 8 + ar4) = puVar5[1];
  return puVar5;
}



/* FUN_8c1133f6 @ 8c1133f6 callers=1 callees=6 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1133f6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_8c113124(ar4,ar5,ar6,ar7);
  uVar2 = 0;
  iVar1 = FUN_8c112fd8(ar4,0,ar6,ar7);
  if (iVar1 != 0) {
    FUN_8c112c90(ar4,uVar2,ar6,ar7);
    uVar2 = 0;
    iVar1 = FUN_8c112b6e(ar4,0,ar6,ar7);
    if (iVar1 != 0) {
      FUN_8c112ec6(ar4,uVar2,ar6,ar7);
      iVar1 = FUN_8c112d82(ar4,0,ar6,ar7);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}



/* FUN_8c11346c @ 8c11346c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c11346c(int ar4,ushort *ar5,int ar6,int *ar7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  ushort *puVar6;
  uint *puVar7;
  ushort *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uStack_20;
  
  if (*(int *)(ar4 + 0x30) == 1) {
    iVar11 = *(int *)(ar4 + 0x54);
    uStack_20 = 0;
    uVar3 = (uint)*(ushort *)(DAT_8c11354e + ar4);
    if (*(short *)(ar4 + 0x50) != 0) {
      do {
        puVar6 = *(ushort **)(iVar11 + 0xc);
        uVar1 = *puVar6 >> 2;
        if (*(char *)(ar6 + (uint)uVar1) == '\0') {
          uVar3 = uVar3 + 1;
          *(undefined1 *)(ar6 + (uint)uVar1) = 1;
          ar5[uVar3] = uVar1;
        }
        puVar8 = puVar6 + 1;
        if ((*puVar6 & 1) == 0) {
          uVar1 = *puVar8;
          ar7 = (int *)(uint)(uVar1 >> 2);
          if (*(char *)(ar6 + (int)ar7) == '\0') {
            uVar3 = uVar3 + 1;
            *(char *)(ar6 + (int)ar7) = '\x01';
            ar5[uVar3] = uVar1 >> 2;
          }
          if ((*puVar8 & 1) != 0) {
            puVar7 = (uint *)(*(int *)(puVar6 + 2) * 4 + *(int *)(DAT_8c113676 + ar4));
            piVar10 = (int *)puVar7[1];
            ar7 = (int *)*puVar7;
            while (ar7 < piVar10) {
              piVar9 = *(int **)(*ar7 * 4 + *(int *)(ar4 + 0x44));
              iVar2 = *ar7;
              ar7 = ar7 + 1;
              piVar4 = *(int **)((iVar2 + 1) * 4 + *(int *)(ar4 + 0x44));
              while (piVar9 < piVar4) {
                iVar2 = *piVar9;
                piVar9 = piVar9 + 1;
                uVar1 = *(ushort *)(iVar2 * 2 + *(int *)(ar4 + 0x48)) >> 2;
                if (*(char *)(ar6 + (uint)uVar1) == '\0') {
                  uVar3 = uVar3 + 1;
                  *(undefined1 *)(ar6 + (uint)uVar1) = 1;
                  ar5[uVar3] = uVar1;
                }
              }
            }
          }
        }
        else {
          puVar7 = (uint *)(*(int *)puVar8 * 4 + *(int *)(DAT_8c113550 + ar4));
          piVar10 = (int *)puVar7[1];
          ar7 = (int *)*puVar7;
          while (ar7 < piVar10) {
            piVar9 = *(int **)(*ar7 * 4 + *(int *)(ar4 + 0x44));
            iVar2 = *ar7;
            ar7 = ar7 + 1;
            piVar4 = *(int **)((iVar2 + 1) * 4 + *(int *)(ar4 + 0x44));
            while (piVar9 < piVar4) {
              iVar2 = *piVar9;
              piVar9 = piVar9 + 1;
              uVar1 = *(ushort *)(iVar2 * 2 + *(int *)(ar4 + 0x48)) >> 2;
              if (*(char *)(ar6 + (uint)uVar1) == '\0') {
                uVar3 = uVar3 + 1;
                *(undefined1 *)(ar6 + (uint)uVar1) = 1;
                ar5[uVar3] = uVar1;
              }
            }
          }
        }
        uStack_20 = uStack_20 + 1;
        iVar11 = *(int *)(iVar11 + 0x18);
      } while (uStack_20 < *(ushort *)(ar4 + 0x50));
    }
    uVar5 = (uint)(*(ushort *)(*(int *)(ar4 + 0x28) + 0xc) >> 1);
    if (uVar5 - uVar3 < (uint)*(ushort *)(ar4 + 0x50)) {
      *(undefined4 *)(ar4 + 0x30) = 0;
    }
    if (uVar3 == uVar5) {
      (*(code *)PTR_memset_8c11367c)(ar6,0,(*(ushort *)(*(int *)(ar4 + 0x28) + 0xc) >> 1) + 1,ar7);
      *(undefined4 *)(ar4 + 0x30) = 0;
    }
    *ar5 = (ushort)uVar3;
  }
  else if (*(int *)(ar4 + 0x30) == 0) {
    if (*(ushort *)(ar4 + 0x50) < *(ushort *)(*(int *)(ar4 + 0x28) + 0xc) >> 2) {
      *(undefined4 *)(ar4 + 0x30) = 1;
    }
    uVar1 = *(ushort *)(*(int *)(ar4 + 0x28) + 0xc) >> 1;
    uVar3 = (uint)uVar1;
    *ar5 = uVar1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* FUN_8c11372e @ 8c11372e callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11372e(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uStack_2c;
  uint uStack_28;
  
  iVar9 = 0;
  *(undefined4 *)((int)DAT_8c11386c + (int)ar4) = 0;
  *(undefined2 *)(ar4 + 0x14) = 0;
  *(undefined2 *)(ar4 + 0xd) = 0;
  iVar2 = (int)DAT_8c11386e;
  *(undefined4 *)(iVar2 + (int)ar4) = 0;
  *(undefined4 *)(iVar2 + -0x24 + (int)ar4) = 0xffffffff;
  iVar2 = (int)DAT_8c113870;
  *(undefined2 *)(iVar2 + (int)ar4) = 0;
  *(undefined2 *)(iVar2 + -0x2a + (int)ar4) = 0;
  ar4[0xc] = 1;
  *(undefined4 *)(iVar2 + -0x28 + (int)ar4) = 0;
  if (*(char *)(iVar2 + -0x70 + (int)ar4) != '\0') {
    *(undefined1 *)((int)DAT_8c113872 + (int)ar4) = 0;
    uVar3 = FUN_8c1133f6(ar4,ar5,ar6,ar7);
    if ((uVar3 & 0xff) != 0) {
      return 1;
    }
  }
  piVar4 = (int *)FUN_8c113354(ar4,ar5,ar6,ar7);
  piVar4[1] = 0;
  uVar3 = FUN_8c112d00(ar4,ar5,ar6,ar7);
  if ((uVar3 & 0xff) == 0) {
    if (*(undefined **)((int)DAT_8c113874 + (int)ar4) == PTR_FUN_8c113888) {
      (*(code *)PTR_FUN_8c11388c)(ar4,ar5,ar6,ar7);
    }
    if (*(undefined **)((int)DAT_8c113874 + (int)ar4) == PTR_FUN_8c113890) {
      (*(code *)PTR_FUN_8c113894)(ar4,ar5,ar6,ar7);
    }
    iVar2 = 0;
    if (*(undefined **)((int)DAT_8c113874 + (int)ar4) == PTR_FUN_8c113888) {
      iVar11 = ar4[0x15];
      uStack_2c = 0;
      if (*(int *)((int)DAT_8c113876 + (int)ar4) != 0) {
        do {
          uVar7 = *(uint *)(*(int *)((int)DAT_8c113878 + (int)ar4) + uStack_2c * 4);
          uVar3 = -(uVar7 & 7);
          if ((int)uVar3 < 0) {
            uVar3 = (int)DAT_8c11387c >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar3 = (int)DAT_8c11387c << (uVar3 & 0x1f);
          }
          if ((*(byte *)(*(int *)((int)DAT_8c11387a + (int)ar4) + (uVar7 >> 3)) & uVar3) != 0) {
            piVar5 = *(int **)((uVar7 + 1) * 4 + ar4[0x11]);
            for (piVar10 = *(int **)(uVar7 * 4 + ar4[0x11]); piVar10 < piVar5; piVar10 = piVar10 + 1
                ) {
              *(int *)(iVar11 + 0xc) = *piVar10 * 2 + ar4[0x12];
              *(undefined2 *)(iVar11 + 2) = 0;
              *(int **)(iVar11 + 8) = piVar4;
              *(undefined4 *)(iVar11 + 0x10) = 0;
              iVar9 = (int)DAT_8c113880;
              *(int *)(iVar11 + 0x14) = *(int *)((int)DAT_8c11387e + (int)ar4) + -4;
              *(uint *)(iVar11 + 0x1c) = *(int *)(iVar9 + (int)ar4) + uStack_2c * 4;
              if (*(int *)(iVar11 + 0x18) == 0) {
                iVar8 = FUN_8c112b6e(ar4,iVar11,ar6,ar7);
              }
              else {
                iVar8 = *(int *)(iVar11 + 0x18);
              }
              iVar2 = iVar2 + 1;
              iVar9 = iVar11;
              iVar11 = iVar8;
            }
          }
          uStack_2c = uStack_2c + 1;
        } while (uStack_2c < *(uint *)((int)DAT_8c113926 + (int)ar4));
      }
    }
    else if (*(undefined **)((int)DAT_8c113874 + (int)ar4) == PTR_FUN_8c11392c) {
      iVar6 = *(int *)((int)DAT_8c113a58 + (int)ar4);
      iVar8 = ar4[0x10];
      uVar3 = 0;
      iVar11 = ar4[0x15];
      if (ar4[0x10] != 0) {
        do {
          iVar9 = iVar11;
          *(uint *)(iVar9 + 0xc) = uVar3 * 2 + ar4[0x12];
          *(undefined4 *)(iVar9 + 0x10) = 0;
          uVar1 = DAT_8c113a5a;
          if (uVar3 == iVar8 - iVar6) {
            uVar1 = 0;
          }
          *(undefined2 *)(iVar9 + 2) = uVar1;
          *(int **)(iVar9 + 8) = piVar4;
          *(int **)(iVar9 + 4) = piVar4;
          *(undefined4 *)(iVar9 + 0x14) = 0;
          if (*(int *)(iVar9 + 0x18) == 0) {
            iVar11 = FUN_8c112b6e(ar4,iVar9,ar6,ar7);
          }
          else {
            iVar11 = *(int *)(iVar9 + 0x18);
          }
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + 1;
        } while (uVar3 < (uint)ar4[0x10]);
      }
      *piVar4 = iVar2;
    }
    else {
      iVar11 = ar4[0x15];
      if (ar4[0x13] == 0) {
        iVar8 = (**(code **)(*ar4 + 0x10))(*ar4,ar4[0x10] << 2,ar6,ar7);
        ar4[0x13] = iVar8;
        if (ar4[0x13] == 0) {
          (*(code *)PTR_FUN_8c113930)(ar4,2,ar6,ar7);
          return 1;
        }
      }
      iVar8 = ar4[0x10] << 2;
      (*(code *)PTR_memset_8c113a60)(ar4[0x13],0,iVar8,ar7);
      uStack_28 = 0;
      if (*(int *)((int)DAT_8c113a50 + (int)ar4) != 0) {
        do {
          uVar7 = *(uint *)(*(int *)((int)DAT_8c113a52 + (int)ar4) + uStack_28 * 4);
          uVar3 = -(uVar7 & 7);
          if ((int)uVar3 < 0) {
            uVar3 = (int)DAT_8c113a56 >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar3 = (int)DAT_8c113a56 << (uVar3 & 0x1f);
          }
          if ((*(byte *)(*(int *)((int)DAT_8c113a54 + (int)ar4) + (uVar7 >> 3)) & uVar3) != 0) {
            piVar5 = *(int **)((uVar7 + 1) * 4 + ar4[0x11]);
            for (piVar10 = *(int **)(uVar7 * 4 + ar4[0x11]); piVar10 < piVar5; piVar10 = piVar10 + 1
                ) {
              *(int *)(iVar11 + 0xc) = *piVar10 * 2 + ar4[0x12];
              *(undefined4 *)(iVar11 + 0x10) = 0;
              *(undefined2 *)(iVar11 + 2) = 0;
              *(int **)(iVar11 + 8) = piVar4;
              *(undefined4 *)(iVar11 + 0x14) = 0;
              *(int *)(ar4[0x13] + *piVar10 * 4) = iVar11;
              if (*(int *)(iVar11 + 0x18) == 0) {
                iVar6 = FUN_8c112b6e(ar4,iVar11,iVar8,ar7);
              }
              else {
                iVar6 = *(int *)(iVar11 + 0x18);
              }
              iVar2 = iVar2 + 1;
              iVar9 = iVar11;
              iVar11 = iVar6;
            }
          }
          uStack_28 = uStack_28 + 1;
        } while (uStack_28 < *(uint *)((int)DAT_8c113a50 + (int)ar4));
      }
    }
    iVar11 = 0;
    iVar8 = 0;
    *piVar4 = *piVar4 + iVar2;
    ar4[0x18] = iVar9;
    *(short *)(ar4 + 0x14) = (short)iVar2;
    iVar9 = (int)DAT_8c113bb2;
    *(undefined2 *)(iVar9 + -2 + (int)ar4) = *(undefined2 *)(iVar9 + (int)ar4);
    *(undefined1 *)(iVar9 + -4 + (int)ar4) = 0;
    do {
      iVar9 = (int)DAT_8c113bb6;
      iVar8 = iVar8 + 1;
      *(undefined4 *)((int)ar4 + iVar11 + DAT_8c113bb4) = 0;
      *(undefined4 *)((int)ar4 + iVar11 + iVar9) = 0;
      iVar11 = iVar11 + 4;
    } while (iVar8 < 5);
    *(undefined1 *)((int)DAT_8c113bb8 + (int)ar4) = 0;
    return 0;
  }
  return 1;
}



/* FUN_8c113ac8 @ 8c113ac8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c113ac8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  
  iVar1 = (int)DAT_8c113bba;
  uVar8 = 0;
  uVar5 = (uint)DAT_8c113bbc;
  puVar11 = *(uint **)(iVar1 + ar4);
  piVar6 = *(int **)(iVar1 + -4 + ar4);
  iVar1 = iVar1 + -0xc;
  puVar9 = *(uint **)(iVar1 + ar4);
  puVar10 = puVar9;
  if (*(int *)(ar4 + 0x38) != 0) {
    do {
      *piVar6 = (int)puVar11;
      piVar6 = piVar6 + 1;
      uVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      uVar12 = *puVar10;
      puVar7 = puVar9 + uVar4;
joined_r0x8c113afe:
      if (uVar4 < uVar12) {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        iVar1 = *(int *)(DAT_8c113bbe + ar4);
        uVar4 = uVar4 + 1;
        if ((*(ushort *)(iVar1 + uVar3 * 2) & uVar5) != 0) goto code_r0x8c113b16;
        goto LAB_8c113b32;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(ar4 + 0x38));
  }
  *piVar6 = (int)puVar11;
  return iVar1;
code_r0x8c113b16:
  iVar1 = *(int *)(DAT_8c113bc0 + ar4);
  uVar2 = -(uVar3 & 7);
  if ((int)uVar2 < 0) {
    uVar2 = (int)uVar5 >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar2 = uVar5 << (uVar2 & 0x1f);
  }
  if ((*(byte *)(iVar1 + (uVar3 >> 3)) & uVar2) != 0) {
LAB_8c113b32:
    *puVar11 = uVar3;
    puVar11 = puVar11 + 1;
  }
  goto joined_r0x8c113afe;
}



/* FUN_8c113b54 @ 8c113b54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c113b54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)DAT_8c113bc2;
  puVar3 = *(undefined4 **)(iVar1 + ar4);
  *puVar3 = *(undefined4 *)(ar4 + 0x38);
  puVar3[1] = *(undefined4 *)(iVar1 + 0x48 + ar4);
  puVar3[2] = *(undefined4 *)(ar4 + 0x44);
  puVar3[3] = *(undefined4 *)(ar4 + 0x48);
  iVar1 = (int)DAT_8c113bc4;
  puVar3[4] = *(undefined4 *)(ar4 + 0xc0);
  iVar2 = (int)DAT_8c113bc6;
  puVar3[5] = *(undefined4 *)(iVar1 + ar4);
  puVar3[6] = *(undefined4 *)(iVar2 + ar4);
  iVar1 = (int)DAT_8c113bc8;
  puVar3[7] = *(undefined4 *)(iVar2 + 4 + ar4);
  puVar3[8] = *(undefined4 *)(iVar1 + ar4);
  iVar2 = (int)DAT_8c113bca;
  puVar3[9] = *(undefined4 *)(iVar1 + 0x10 + ar4);
  puVar3[10] = *(undefined4 *)(iVar2 + ar4);
  puVar3[0xb] = *(undefined4 *)(iVar2 + 4 + ar4);
  puVar3[0xc] = *(undefined4 *)(iVar2 + -8 + ar4);
  puVar3[0xd] = *(undefined4 *)(iVar2 + 0x10 + ar4);
  puVar3[0xe] = *(undefined4 *)(iVar2 + 0xc + ar4);
  return iVar2 + 0xc;
}



/* FUN_8c113bcc @ 8c113bcc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c113bcc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)DAT_8c113d42;
  puVar2 = *(undefined4 **)(iVar1 + ar4);
  *(undefined4 *)(ar4 + 0x38) = *puVar2;
  *(undefined4 *)(iVar1 + 0x48 + ar4) = puVar2[1];
  *(undefined4 *)(ar4 + 0x44) = puVar2[2];
  *(undefined4 *)(ar4 + 0x48) = puVar2[3];
  *(undefined4 *)(ar4 + 0xc0) = puVar2[4];
  *(undefined4 *)(DAT_8c113d44 + ar4) = puVar2[5];
  iVar1 = (int)DAT_8c113d46;
  *(undefined4 *)(iVar1 + ar4) = puVar2[6];
  *(undefined4 *)(iVar1 + 4 + ar4) = puVar2[7];
  iVar1 = (int)DAT_8c113d48;
  *(undefined4 *)(iVar1 + ar4) = puVar2[8];
  *(undefined4 *)(iVar1 + 0x10 + ar4) = puVar2[9];
  iVar1 = (int)DAT_8c113d4a;
  *(undefined4 *)(iVar1 + ar4) = puVar2[10];
  *(undefined4 *)(iVar1 + 4 + ar4) = puVar2[0xb];
  *(undefined4 *)(iVar1 + -8 + ar4) = puVar2[0xc];
  *(undefined4 *)(iVar1 + 0x10 + ar4) = puVar2[0xd];
  *(undefined4 *)(iVar1 + 0xc + ar4) = puVar2[0xe];
  *(int *)(iVar1 + -4 + ar4) =
       (*(int *)(ar4 + 0x38) + *(int *)(iVar1 + 0x10 + ar4) + 1) * 4 + *(int *)(iVar1 + -8 + ar4);
  *(undefined4 *)(iVar1 + 0x60 + ar4) = *(undefined4 *)(ar4 + 0x38);
  return iVar1 + 0x60;
}



/* FUN_8c113c46 @ 8c113c46 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c113c46(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x12]);
  (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x11]);
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c113d4c + (int)ar4));
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c113d44 + (int)ar4));
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c113d46 + (int)ar4));
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c113d4e + (int)ar4));
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c113d48 + (int)ar4));
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c113d50 + (int)ar4));
  if (*(undefined **)((int)DAT_8c113d52 + (int)ar4) == PTR_FUN_8c113d60) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c113d54 + (int)ar4));
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c113d56 + (int)ar4));
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c113d4a + (int)ar4));
  }
  if (*(undefined **)((int)DAT_8c113d52 + (int)ar4) == PTR_FUN_8c113d64) {
                    /* WARNING: Could not recover jumptable at 0x8c113d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c113d58 + (int)ar4));
    return uVar1;
  }
  return (int)DAT_8c113d52;
}



/* FUN_8c113c4e @ 8c113c4e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c113c4e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  int *unaff_r13;
  int a4;
  
  a4 = *unaff_r13;
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)(in_r0 + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,unaff_r13[0x11],ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c113d4c + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c113d44 + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c113d46 + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c113d4e + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c113d48 + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c113d50 + (int)unaff_r13),ar6,ar7);
  if (*(undefined **)((int)DAT_8c113d52 + (int)unaff_r13) == PTR_FUN_8c113d60) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c113d54 + (int)unaff_r13),ar6,ar7);
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c113d56 + (int)unaff_r13),ar6,ar7);
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c113d4a + (int)unaff_r13),ar6,ar7);
  }
  if (*(undefined **)((int)DAT_8c113d52 + (int)unaff_r13) == PTR_FUN_8c113d64) {
                    /* WARNING: Could not recover jumptable at 0x8c113d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c113d58 + (int)unaff_r13));
    return uVar1;
  }
  return (int)DAT_8c113d52;
}



/* FUN_8c113d68 @ 8c113d68 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c113d68(int *ar4,int *ar5,int *ar6,undefined4 ar7)

{
  short sVar1;
  int in_r0;
  int iVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  ushort *in_stack_00000000;
  ushort *in_stack_00000004;
  int in_stack_00000008;
  short sStack_1a;
  
  puVar3 = (ushort *)*ar6;
  piVar4 = (int *)*ar4;
  psVar6 = (short *)((uint)*in_stack_00000000 * 2 + in_stack_00000008);
  while (in_stack_00000000 < in_stack_00000004) {
    in_stack_00000000 = in_stack_00000000 + 1;
    *piVar4 = *ar5;
    piVar4 = piVar4 + 1;
    iVar5 = (uint)*in_stack_00000000 * 2 + in_stack_00000008;
    iVar2 = iVar5 - (int)psVar6;
    *ar5 = *ar5 + ((int)(iVar2 + (uint)(iVar2 < 0)) >> 1) + 2;
    for (; psVar6 < (short *)(iVar5 + -2); psVar6 = psVar6 + 1) {
      *puVar3 = *psVar6 << 2 | 2;
      puVar3 = puVar3 + 1;
    }
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
    *puVar3 = sVar1 << 2 | 1;
    sStack_1a = (short)((uint)ar7 >> 0x10);
    in_r0 = (int)sStack_1a;
    *(undefined4 *)(puVar3 + 1) = ar7;
    puVar3 = puVar3 + 3;
  }
  *ar6 = (int)puVar3;
  *ar4 = (int)piVar4;
  return in_r0;
}



/* FUN_8c113dfa @ 8c113dfa callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c113dfa(int *ar4,int *ar5,int *ar6,int ar7)

{
  ushort uVar1;
  int a6;
  int a4;
  undefined2 *puVar2;
  undefined2 in_stack_00000000;
  short in_stack_00000002;
  
  uVar1 = *(ushort *)(ar4 + 1);
  a4 = *ar6;
  a6 = (uint)uVar1 * 2;
  (*(code *)PTR_memmove_8c113e94)(a4,*ar4 * 2 + ar7,a6,ar7);
  puVar2 = (undefined2 *)(a4 + a6);
  puVar2[-1] = puVar2[-1] | 1;
  *puVar2 = in_stack_00000000;
  puVar2[1] = in_stack_00000002;
  *ar5 = *ar5 + uVar1 + 2;
  *ar6 = (int)(puVar2 + 2);
  return (int)in_stack_00000002;
}



/* FUN_8c113e64 @ 8c113e64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c113e64(int ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar2 = 0;
  puVar3 = (uint *)(*(int *)(*(int *)(ar4 + 0x44) + ar5 * 4) + 4);
  iVar4 = ar6 - *(int *)(ar4 + 0x48);
  uVar1 = *puVar3;
  while (uVar1 < (uint)((int)(iVar4 + (uint)(iVar4 < 0)) >> 1)) {
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + 1;
    uVar1 = *puVar3;
  }
  return iVar2;
}



/* FUN_8c113e98 @ 8c113e98 callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c113e98(int *ar4,int ar5,undefined4 ar6,uint ar7)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ushort *puVar19;
  int *a7;
  int *piVar20;
  int a4;
  int iVar21;
  uint uVar22;
  int *piStack_90;
  uint *puStack_8c;
  short *psStack_88;
  int *piStack_84;
  int *piStack_7c;
  uint uStack_78;
  int *piStack_74;
  int *piStack_70;
  uint uStack_6c;
  int *piStack_68;
  int *piStack_64;
  int iStack_60;
  int iStack_5c;
  int *piStack_58;
  uint *puStack_54;
  int *piStack_50;
  int iStack_4c;
  int iStack_48;
  short *psStack_44;
  int iStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  
  iStack_5c = *(int *)((int)DAT_8c113f80 + (int)ar4);
  iVar21 = 0;
  uVar22 = 0;
  piVar20 = (int *)ar4[0x11];
  puStack_54 = (uint *)*piVar20;
  a4 = *ar4;
  iStack_34 = 0;
  iStack_40 = 0;
  uStack_38 = *(undefined4 *)((int)DAT_8c113f82 + (int)ar4);
  iVar11 = *(int *)((int)DAT_8c113f84 + (int)ar4);
  iStack_4c = 0;
  iStack_60 = 0;
  piStack_30 = (int *)ar4[0x12];
  uVar8 = 1;
  uVar7 = 0;
  for (iVar16 = ar5; iVar16 != 0; iVar16 = *(int *)(iVar16 + 0x10)) {
    iStack_34 = iStack_34 + 1;
    for (piVar15 = *(int **)(iVar16 + 0xc); piVar15 != (int *)0x0; piVar15 = (int *)piVar15[4]) {
      iVar12 = piVar20[*piVar15 + 1] - piVar20[*piVar15];
      if (iVar12 < 0) {
        iVar12 = iVar12 + 3;
      }
      uVar13 = iVar12 >> 2;
      iVar21 = iVar21 + uVar13;
      if (uVar22 < uVar13) {
        uVar22 = uVar13;
      }
    }
  }
  iVar12 = (**(code **)(a4 + 0x10))(a4,(iVar21 + 1) * 0xc,0,ar7);
  iVar21 = (**(code **)(a4 + 0x10))(a4,iVar21 * uVar22 * 6,iVar16,ar7);
  uVar22 = DAT_8c113f8c;
  sVar4 = (short)DAT_8c113f8c;
  *(short *)(iVar12 + 8) = sVar4;
  do {
    if (ar5 == 0) {
      for (uVar5 = *(ushort *)(iVar12 + 8); uVar5 != uVar22;
          uVar5 = *(ushort *)((uint)uVar5 * 6 + iVar21 + 2)) {
        iStack_40 = iStack_40 + 1;
      }
      piVar9 = (int *)(uVar8 - 1);
      piStack_50 = (int *)(iVar12 + 0xc);
      uStack_6c = (uint)uVar7 - iStack_40;
      piVar14 = piStack_50;
      piVar15 = piStack_50;
      piVar20 = piVar9;
      piStack_84 = piVar9;
      for (piStack_90 = (int *)0x1; piStack_90 <= piVar9; piStack_90 = (int *)((int)piStack_90 + 1))
      {
        uVar13 = (uint)*(ushort *)(piVar15 + 2);
        if (uVar13 != 0) {
          iVar16 = piVar14[1] * 0xc + iStack_5c;
          iStack_4c = iStack_4c + (uint)*(ushort *)(iVar16 + 4);
          uVar8 = *(ushort *)(iVar16 + 8);
          while (uVar13 != uVar22) {
            uVar18 = (int)*(short *)(*(int *)((uint)*(ushort *)(uVar13 * 6 + iVar21) * 0xc + iVar12
                                             + 4) * 0xc + iStack_5c + 6) +
                     (uint)uVar8 * (uint)*(ushort *)((int)DAT_8c1142d4 + (int)ar4);
            puVar19 = (ushort *)((uVar18 & 0xffff) * 2 + iVar11);
            iVar16 = (uint)*(ushort *)((uint)puVar19[1] * 2 + iVar11) -
                     (uint)*(ushort *)((uint)*puVar19 * 2 + iVar11);
            uVar17 = uVar22;
            if (iVar16 != 0) {
              iStack_4c = iStack_4c + iVar16;
              piStack_84 = (int *)((int)piStack_84 + 1);
              uStack_6c = uStack_6c + 1;
              puVar19 = (ushort *)((uVar18 & 0xffff) * 2 + iVar11);
              piVar20 = (int *)((int)piVar20 + ((uint)puVar19[1] - (uint)*puVar19));
              uVar17 = uVar18;
            }
            iVar16 = uVar13 * 6 + iVar21;
            *(short *)(iVar16 + 4) = (short)uVar17;
            uVar13 = (uint)*(ushort *)(iVar16 + 2);
          }
        }
        piVar15 = piVar15 + 3;
        piVar14 = piVar14 + 3;
      }
      piStack_64 = piVar9;
      piStack_74 = (int *)(**(code **)(a4 + 0x10))(a4,((int)piStack_84 + 1U) * 4,piVar14,piVar15);
      piStack_2c = piStack_74;
      puStack_54 = (uint *)(**(code **)(a4 + 0x10))(a4,uStack_6c << 2,piVar14,piVar15);
      puVar19 = (ushort *)0x2;
      psStack_88 = (short *)(**(code **)(a4 + 0x14))(a4,piStack_84,2,piVar15);
      psStack_44 = psStack_88;
      uVar10 = (**(code **)(a4 + 0x10))(a4,(int)piStack_84 << 1,puVar19,piVar15);
      *(undefined4 *)((int)DAT_8c114436 + (int)ar4) = uVar10;
      piStack_70 = (int *)(**(code **)(a4 + 0x10))
                                    (a4,((int)piStack_84 + (int)piVar20 + 2) * 4,puVar19,piVar15);
      piStack_68 = piStack_70 + (int)piStack_84 + 1;
      piStack_58 = piStack_70;
      iStack_48 = (**(code **)(a4 + 0x10))(a4,((int)piVar20 * 2 + iStack_4c) * 2,puVar19,piVar15);
      iStack_24 = iStack_48;
      piVar20 = (int *)(**(code **)(a4 + 0x10))(a4,iStack_40 << 2,puVar19,piVar15);
      piStack_28 = piVar20;
      piVar14 = (int *)(**(code **)(a4 + 0x10))(a4,(int)piStack_84 << 3,puVar19,piVar15);
      *(int **)((int)DAT_8c114438 + (int)ar4) = piVar14;
      iStack_60 = 0;
      uVar8 = *(ushort *)(iVar12 + 8);
      while (uVar8 != uVar22) {
        puVar19 = (ushort *)((uint)uVar8 * 6 + iVar21);
        piVar15 = (int *)(uint)*puVar19;
        *piVar20 = (int)piVar15 + -1;
        psStack_88[(int)piVar15 + -1] = 1;
        piVar20 = piVar20 + 1;
        uVar8 = puVar19[1];
      }
      puStack_8c = puStack_54;
      piStack_90 = piStack_50;
      for (piStack_3c = (int *)0x1; piStack_3c <= piVar9; piStack_3c = (int *)((int)piStack_3c + 1))
      {
        iStack_4c = CONCAT22(iStack_4c._2_2_,
                             *(undefined2 *)
                              (*(int *)((int)DAT_8c11457a + (int)ar4) + *piStack_90 * 2));
        uVar8 = *(ushort *)(piStack_90 + 2);
        *piVar14 = *piStack_90;
        uVar13 = (uint)uVar8;
        piVar14[1] = piStack_90[1];
        piVar14 = piVar14 + 2;
        *piStack_74 = (int)puStack_8c;
        *piStack_68 = iStack_60;
        *piStack_70 = (int)piStack_68;
        puVar19 = (ushort *)&iStack_48;
        piVar15 = piStack_30;
        piStack_68 = piStack_68 + 1;
        FUN_8c113dfa(piStack_90[1] * 0xc + iStack_5c,&iStack_60,puVar19,piStack_30);
        if (uVar13 != 0) {
          if (uVar13 == uVar22) {
            *psStack_88 = 2;
          }
          else if (*psStack_88 != 1) {
            *psStack_88 = (short)iStack_4c;
          }
          psStack_88 = psStack_88 + 1;
          piVar20 = piStack_64;
          for (; piStack_64 = piVar20, uVar13 != uVar22;
              uVar13 = (uint)*(ushort *)(uVar13 * 6 + iVar21 + 2)) {
            if (*(ushort *)(uVar13 * 6 + iVar21 + 4) == uVar22) {
              *puStack_8c = *(ushort *)(uVar13 * 6 + iVar21) - 1;
            }
            else {
              piStack_64 = (int *)((int)piVar20 + 1);
              *puStack_8c = (uint)piVar20;
            }
            puStack_8c = puStack_8c + 1;
            piVar20 = piStack_64;
          }
        }
        piStack_90 = piStack_90 + 3;
        piStack_74 = piStack_74 + 1;
        piStack_70 = piStack_70 + 1;
      }
      *piStack_74 = (int)puStack_8c;
      *piStack_70 = (int)piStack_68;
      piVar20 = piStack_50;
      piStack_74 = piStack_74 + 1;
      piStack_70 = piStack_70 + 1;
      piStack_64 = piVar9;
      for (piStack_7c = (int *)0x1; piStack_7c <= piVar9; piStack_7c = (int *)((int)piStack_7c + 1))
      {
        uVar13 = (uint)*(ushort *)(piVar20 + 2);
        puVar1 = puStack_8c;
        piVar2 = piStack_74;
        piVar3 = piStack_70;
        a7 = piStack_64;
        if (uVar13 != 0) {
          for (; puStack_8c = puVar1, piStack_74 = piVar2, piStack_70 = piVar3, piStack_64 = a7,
              uVar13 != uVar22; uVar13 = (uint)*(ushort *)(uVar13 * 6 + iVar21 + 2)) {
            uVar8 = *(ushort *)(uVar13 * 6 + iVar21 + 4);
            if (uVar8 != uVar22) {
              *piVar14 = -1;
              piVar14[1] = -1;
              piVar14 = piVar14 + 2;
              iStack_5c = (uint)uVar8 * 2 + iVar11;
              puVar19 = (ushort *)&iStack_48;
              piStack_64 = (int *)((int)a7 + 1);
              FUN_8c113d68(&piStack_68,&iStack_60,puVar19,a7);
              piStack_70 = piVar3 + 1;
              *piVar3 = (int)piStack_68;
              puStack_8c = puVar1 + 1;
              *puVar1 = *(ushort *)(uVar13 * 6 + iVar21) - 1;
              piStack_74 = piVar2 + 1;
              *piVar2 = (int)puStack_8c;
              piVar15 = a7;
            }
            puVar1 = puStack_8c;
            piVar2 = piStack_74;
            piVar3 = piStack_70;
            a7 = piStack_64;
          }
        }
        piVar20 = piVar20 + 3;
      }
      *piStack_68 = iStack_60;
      uVar22 = *(uint *)((int)DAT_8c114670 + (int)ar4);
      if (uVar22 < (uint)(iStack_34 * 0x14)) {
        uVar22 = iStack_34 * 0x14;
      }
      *(uint *)((int)DAT_8c114670 + (int)ar4) = uVar22;
      *(int **)((int)DAT_8c11474c + (int)ar4) = piVar9;
      *(int *)((int)DAT_8c11474e + (int)ar4) = iStack_40;
      ar4[0xe] = (int)piStack_84;
      ar4[0x11] = (int)piStack_58;
      ar4[0x12] = iStack_24;
      *(short **)((int)DAT_8c114750 + (int)ar4) = psStack_44;
      *(int **)((int)DAT_8c114752 + (int)ar4) = piStack_2c;
      *(uint **)((int)DAT_8c114754 + (int)ar4) = puStack_54;
      *(uint *)((int)DAT_8c114756 + (int)ar4) = uStack_6c;
      piStack_68 = piStack_68 + 1;
      (*(code *)PTR_FUN_8c114764)(ar4,(int)*(short *)((int)DAT_8c114758 + (int)ar4),puVar19,piVar15)
      ;
      *(int **)((int)DAT_8c11475a + (int)ar4) = piStack_28;
      (**(code **)(a4 + 0x18))(a4,iVar12,puVar19,piVar15);
      (**(code **)(a4 + 0x18))(a4,iVar21,puVar19,piVar15);
      if (((*(undefined **)((int)DAT_8c11475c + (int)ar4) == PTR_FUN_8c114768) &&
          (uVar22 = FUN_8c1155a0(ar4,iVar21,puVar19,piVar15), (uVar22 & 0xff) != 0)) ||
         ((*(undefined **)((int)DAT_8c11475c + (int)ar4) == PTR_FUN_8c11476c &&
          (uVar22 = (*(code *)PTR_FUN_8c114770)(ar4,iVar21,puVar19,piVar15), (uVar22 & 0xff) != 0)))
         ) {
        uVar10 = 1;
      }
      else {
        *(undefined1 *)(ar4 + 0x1f) = 1;
        uVar10 = 0;
      }
      return uVar10;
    }
    piStack_70 = (int *)0x0;
    piStack_84 = (int *)0x0;
    piVar15 = *(int **)(ar5 + 0xc);
    uVar13 = 0;
    if (piVar15 != (int *)0x0) {
      do {
        if (piVar15 == (int *)0x0) break;
        piStack_84 = (int *)*piVar15;
        uVar5 = *(ushort *)(uVar13 * 0xc + iVar12 + 8);
        iVar16 = piVar20[(int)piStack_84] - (int)puStack_54;
        if (iVar16 < 0) {
          iVar16 = iVar16 + 3;
        }
        piStack_70 = (int *)(iVar16 >> 2);
        while (uVar17 = (uint)uVar5, uVar17 != uVar22) {
          if ((int *)*(int *)((uint)*(ushort *)(uVar17 * 6 + iVar21) * 0xc + iVar12 + 4) ==
              piStack_70) {
            uVar13 = (uint)*(ushort *)(uVar17 * 6 + iVar21);
            piVar15 = (int *)piVar15[4];
            goto LAB_8c11405a;
          }
          uVar5 = *(ushort *)(uVar17 * 6 + iVar21 + 2);
        }
        if (uVar13 == 0) {
          ar7 = 1;
        }
        else {
          iVar16 = piVar20[*(int *)(uVar13 * 0xc + iVar12) + 1] -
                   piVar20[*(int *)(uVar13 * 0xc + iVar12)];
          if (iVar16 < 0) {
            iVar16 = iVar16 + 3;
          }
          ar7 = iVar16 >> 2;
        }
LAB_8c11405a:
      } while (uVar17 != uVar22);
      uStack_6c = (uint)*(ushort *)(uVar13 * 0xc + iVar12 + 8);
      uVar17 = ar7;
      while( true ) {
        iVar16 = piVar20[(int)piStack_84 + 1] - piVar20[(int)piStack_84];
        if (iVar16 < 0) {
          iVar16 = iVar16 + 3;
        }
        ar7 = iVar16 >> 2;
        psStack_44 = (short *)(ar7 - 1);
        piStack_58 = (int *)(uint)uVar8;
        uVar18 = 0;
        if (ar7 != 0) {
          do {
            uStack_78 = uStack_6c;
            piStack_90 = (int *)((uint)uVar7 * 6 + iVar21);
            for (piStack_7c = (int *)0x0; piStack_7c < uVar17;
                piStack_7c = (int *)((int)piStack_7c + 1)) {
              *(ushort *)piStack_90 = uVar8 + (short)uVar18;
              sVar6 = sVar4;
              if (uStack_6c != uVar22) {
                sVar6 = (short)uStack_78;
              }
              *(short *)((int)piStack_90 + 2) = sVar6;
              uStack_78 = uStack_78 + 1;
              piStack_90 = (int *)((int)piStack_90 + 6);
            }
            uStack_6c = (uint)uVar7;
            if ((short *)uVar18 == psStack_44) {
              for (piStack_90 = (int *)0x0; piStack_90 < uVar17;
                  piStack_90 = (int *)((int)piStack_90 + 1)) {
                *(ushort *)(((int)piStack_90 + uVar13) * 0xc + iVar12 + 8) =
                     uVar7 + (short)piStack_90;
              }
            }
            uVar7 = uVar7 + (short)uVar17;
            piVar14 = (int *)(((int)piStack_58 + uVar18) * 0xc + iVar12);
            piVar14[1] = (int)piStack_70 + uVar18;
            uVar18 = uVar18 + 1;
            *piVar14 = (int)piStack_84;
          } while (uVar18 < ar7);
        }
        psStack_88._0_2_ = (short)ar7;
        uVar8 = (short)psStack_88 + uVar8;
        piVar15 = (int *)piVar15[4];
        if (piVar15 == (int *)0x0) break;
        piStack_84 = (int *)*piVar15;
        iVar16 = piVar20[(int)piStack_84] - (int)puStack_54;
        if (iVar16 < 0) {
          iVar16 = iVar16 + 3;
        }
        piStack_70 = (int *)(iVar16 >> 2);
        uStack_6c = uVar22;
        uVar13 = (uint)piStack_58;
        uVar17 = ar7;
      }
      uVar17 = 0;
      uVar13 = (uint)piStack_58;
      if (ar7 != 0) {
        do {
          iVar16 = uVar13 * 0xc;
          uVar13 = uVar13 + 1;
          uVar17 = uVar17 + 1;
          *(short *)(iVar16 + iVar12 + 8) = sVar4;
        } while (uVar17 < ar7);
      }
    }
    ar5 = *(int *)(ar5 + 0x10);
  } while( true );
}



/* FUN_8c114774 @ 8c114774 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c114774(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined *puVar2;
  ushort *a4;
  int *a6;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int a5;
  int a6_00;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int a4_00;
  
  a4_00 = *ar4;
  iVar8 = 0;
  puVar7 = *(undefined4 **)((int)DAT_8c1148aa + (int)ar4);
  a4 = (ushort *)(**(code **)(a4_00 + 0x14))(a4_00,ar4[0xe] << 1,1,ar7);
  a6_00 = ar4[0xe] << 1;
  (*(code *)PTR_memmove_8c1148b8)(a4,*(undefined4 *)((int)DAT_8c1148ac + (int)ar4),a6_00,ar7);
  uVar1 = *a4;
  while ((uVar1 & 1) == 0) {
    iVar8 = iVar8 + 1;
    uVar1 = a4[iVar8];
  }
  a4[iVar8] = a4[iVar8] & (ushort)DAT_8c1148bc;
  iVar3 = iVar8 * 4;
  uVar4 = *(undefined4 *)(*(int *)((int)DAT_8c1148aa + (int)ar4) + iVar3);
  uVar9 = *(int *)((iVar8 + 1) * 4 + *(int *)((int)DAT_8c1148ae + (int)ar4)) -
          *(int *)(iVar3 + *(int *)((int)DAT_8c1148ae + (int)ar4));
  a5 = uVar9 * 4;
  a6 = (int *)(**(code **)(a4_00 + 0x10))(a4_00,a5,a6_00,ar7);
  *a6 = iVar8;
  uVar5 = 0;
  do {
    uVar5 = uVar5 + 1;
    *puVar7 = uVar4;
    puVar7 = puVar7 + 1;
  } while (uVar5 <= (uint)ar4[0xe]);
  uVar5 = 0;
  if (uVar9 != 0) {
    do {
      a5 = *(int *)((*(int *)(iVar3 + *(int *)((int)DAT_8c1148ae + (int)ar4)) + uVar5) * 4 +
                   *(int *)((int)DAT_8c1148ae + (int)ar4));
      a4[a5] = a4[a5] | 3;
      uVar6 = uVar5 + 1;
      a6[uVar5] = a5;
      uVar5 = uVar6;
    } while (uVar6 < uVar9);
  }
  puVar2 = PTR_FUN_8c1148c0;
  iVar8 = (int)DAT_8c1148b0;
  *(uint *)(iVar8 + (int)ar4) = uVar9;
  *(int **)(iVar8 + 4 + (int)ar4) = a6;
  iVar8 = (int)DAT_8c1148ac;
  *(ushort **)(iVar8 + (int)ar4) = a4;
  *(undefined4 *)(iVar8 + -0xc + (int)ar4) = 0;
  if ((*(undefined **)(iVar8 + 0x70 + (int)ar4) == puVar2) &&
     (uVar5 = FUN_8c1155a0(ar4,a5,a6,ar7), (uVar5 & 0xff) != 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* FUN_8c1148c4 @ 8c1148c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1148c4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)DAT_8c1149c2 + (int)ar4),ar6,ar7);
  (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)DAT_8c1149c4 + (int)ar4),ar6,ar7);
  if (*(undefined **)((int)DAT_8c1149c6 + (int)ar4) == PTR_FUN_8c1149d8) {
    (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)DAT_8c1149c8 + (int)ar4),ar6,ar7);
    (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)DAT_8c1149ca + (int)ar4),ar6,ar7);
                    /* WARNING: Could not recover jumptable at 0x8c11493e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)DAT_8c1149cc + (int)ar4));
    return uVar1;
  }
  return (int)DAT_8c1149c6;
}



/* FUN_8c11495c @ 8c11495c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11495c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar3;
  int in_r0;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_r10;
  int a4;
  int *unaff_r14;
  float extraout_fr1;
  undefined4 extraout_fr1_00;
  undefined4 extraout_fr1_01;
  undefined4 extraout_fr1_02;
  undefined4 extraout_fr1_03;
  float extraout_fr1_04;
  float fVar7;
  undefined4 extraout_fr1_05;
  undefined4 extraout_fr1_06;
  undefined4 extraout_fr1_07;
  undefined4 extraout_fr1_08;
  undefined4 extraout_fr1_09;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  float extraout_fr0_02;
  float extraout_fr0_03;
  float extraout_fr0_04;
  float extraout_fr0_05;
  undefined4 extraout_fr0_06;
  float extraout_fr0_07;
  float extraout_fr0_08;
  float extraout_fr0_09;
  double in_dr2;
  float fVar9;
  double dVar8;
  float in_fr5;
  float fVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  undefined2 uVar14;
  int iVar15;
  byte in_FPSCR_CAUSE;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte in_FPSCR_DN;
  byte bVar19;
  byte bVar20;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  char cVar21;
  uint uVar2;
  
  a4 = *unaff_r14;
  *(undefined4 *)(in_r0 + (int)unaff_r14) = unaff_r10;
  puVar3 = PTR_FUN_8c1149dc;
  fVar9 = (float)DAT_8c1149e0;
  if (in_FPSCR_SZ == 0) {
    fVar9 = in_fr5;
  }
  (*(code *)PTR_FUN_8c1149dc)(unaff_r14,ar5,ar6,ar7);
  if (in_FPSCR_SZ == 0) {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c1149e0._4_4_);
  }
  uVar6 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c1149d4;
  fVar10 = extraout_fr1;
  if (in_FPSCR_SZ == 0) {
    fVar10 = fVar9;
  }
  uVar2 = (uVar6 & 0x80000) >> 0x13;
  cVar21 = (char)uVar2;
  uVar6 = (uVar6 & 0x100000) >> 0x14;
  cVar1 = (char)uVar6;
  if (cVar21 == '\0') {
    bVar12 = SUB84(in_dr2,0) < extraout_fr0;
  }
  else {
    bVar12 = in_dr2 < (double)CONCAT44(extraout_fr0,extraout_fr1);
  }
  if (bVar12) {
    if (cVar1 == '\0') {
      in_dr2 = (double)CONCAT44(_DAT_8c1149e8,extraout_fr0);
    }
    else {
      in_dr2 = (double)CONCAT44(DAT_8c1149ec,_DAT_8c1149e8);
    }
    if (cVar21 == '\0') {
      fVar9 = (float)((ulonglong)in_dr2 >> 0x20);
      in_dr2 = (double)CONCAT44(fVar9,SUB84(in_dr2,0) + fVar9);
    }
    else {
      in_dr2 = in_dr2 + in_dr2;
    }
  }
  else if (cVar1 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),extraout_fr0);
  }
  uVar6 = (uVar2 << 0x13 | uVar6 << 0x14) & DAT_8c1149d4;
  bVar16 = 0;
  bVar18 = 0;
  bVar19 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar17 = (byte)(uVar6 >> 0x14);
  if (bVar19 == 0) {
    iVar15 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar15 = (int)in_dr2;
  }
  *(int *)((int)DAT_8c1149d0 + (int)unaff_r14) = iVar15;
  fVar9 = DAT_8c1149ec;
  if (bVar17 == 0) {
    fVar9 = fVar10;
  }
  (*(code *)puVar3)(unaff_r14,0x16,ar6,ar7);
  iVar15 = (int)DAT_8c1149d2;
  uVar6 = ((uint)bVar16 << 0xc | (uint)bVar18 << 0x12 | (uint)bVar19 << 0x13 | (uint)bVar17 << 0x14)
          & DAT_8c1149d4;
  uVar2 = (uVar6 & 0x80000) >> 0x13;
  uVar6 = (uVar6 & 0x100000) >> 0x14;
  if ((char)uVar2 == '\0') {
    uVar13 = (undefined1)(int)extraout_fr0_00;
  }
  else {
    uVar13 = (undefined1)(int)(double)CONCAT44(extraout_fr0_00,extraout_fr1_00);
  }
  *(undefined1 *)(iVar15 + (int)unaff_r14) = uVar13;
  if (*(char *)(iVar15 + (int)unaff_r14) == '\0') {
    *(char *)(unaff_r14 + 0x1f) = (char)unaff_r10;
  }
  else {
    *(undefined1 *)(unaff_r14 + 0x1f) = 0;
  }
  unaff_r14[10] = *(int *)unaff_r14[3];
  unaff_r14[0xb] = *(int *)unaff_r14[4];
  fVar10 = DAT_8c114acc;
  if ((char)uVar6 == '\0') {
    fVar10 = fVar9;
  }
  uVar6 = (uVar2 << 0x13 | uVar6 << 0x14) & _DAT_8c114ad0;
  bVar17 = 0;
  bVar16 = 0;
  bVar18 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar19 = (byte)(uVar6 >> 0x14);
  (*(code *)puVar3)(unaff_r14,0x10,ar6,ar7);
  uVar6 = ((uint)bVar17 << 0xc | (uint)bVar16 << 0x12 | (uint)bVar18 << 0x13 | (uint)bVar19 << 0x14)
          & _DAT_8c114ad0;
  bVar16 = 0;
  bVar18 = 0;
  bVar19 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar17 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar19 == 0) {
    uVar6 = (uint)extraout_fr0_01;
  }
  else {
    uVar6 = (uint)(double)CONCAT44(extraout_fr0_01,extraout_fr1_01);
  }
  uVar6 = (*(code *)PTR_FUN_8c114ad4)(unaff_r14,uVar6 & 0xffff,ar6,ar7);
  if ((uVar6 & 0xff) == 0) {
    *(char *)((int)DAT_8c114ac2 + (int)unaff_r14) = (char)unaff_r10;
    fVar9 = (float)DAT_8c114ad8;
    if (bVar17 == 0) {
      fVar9 = fVar10;
    }
    uVar6 = ((uint)bVar16 << 0xc | (uint)bVar18 << 0x12 | (uint)bVar19 << 0x13 |
            (uint)bVar17 << 0x14) & _DAT_8c114ad0;
    bVar16 = 0;
    bVar18 = 0;
    bVar19 = (byte)((uVar6 & 0x80000) >> 0x13);
    bVar17 = (byte)((uVar6 & 0x100000) >> 0x14);
    (*(code *)puVar3)(unaff_r14,0x11,ar6,ar7);
    iVar15 = DAT_8c114ad8._4_4_;
    iVar5 = (int)DAT_8c114ac4;
    uVar6 = ((uint)bVar16 << 0xc | (uint)bVar18 << 0x12 | (uint)bVar19 << 0x13 |
            (uint)bVar17 << 0x14) & _DAT_8c114ad0;
    uVar2 = (uVar6 & 0x80000) >> 0x13;
    uVar6 = (uVar6 & 0x100000) >> 0x14;
    if ((char)uVar2 == '\0') {
      uVar14 = (undefined2)(int)extraout_fr0_02;
    }
    else {
      uVar14 = (undefined2)(int)(double)CONCAT44(extraout_fr0_02,extraout_fr1_02);
    }
    *(undefined2 *)(iVar5 + (int)unaff_r14) = uVar14;
    if (iVar15 < (int)(uint)*(ushort *)(iVar5 + (int)unaff_r14)) {
      *(short *)(iVar5 + (int)unaff_r14) = (short)iVar15;
    }
    else if ((int)(uint)*(ushort *)(iVar5 + (int)unaff_r14) < (int)DAT_8c114ac6) {
      *(short *)(iVar5 + (int)unaff_r14) = DAT_8c114ac6;
    }
    fVar10 = (float)DAT_8c114ad8;
    if ((char)uVar6 == '\0') {
      fVar10 = fVar9;
    }
    uVar6 = (uVar2 << 0x13 | uVar6 << 0x14) & _DAT_8c114ad0;
    bVar16 = 0;
    bVar18 = 0;
    bVar19 = (byte)((uVar6 & 0x80000) >> 0x13);
    bVar17 = (byte)(uVar6 >> 0x14);
    (*(code *)puVar3)(unaff_r14,8,ar6,ar7);
    uVar6 = ((uint)bVar16 << 0xc | (uint)bVar18 << 0x12 | (uint)bVar19 << 0x13 |
            (uint)bVar17 << 0x14) & _DAT_8c114ad0;
    bVar17 = 0;
    bVar19 = 0;
    bVar18 = (byte)((uVar6 & 0x80000) >> 0x13);
    bVar16 = (byte)((uVar6 & 0x100000) >> 0x14);
    if (bVar18 == 0) {
      uVar6 = (uint)extraout_fr0_03;
    }
    else {
      uVar6 = (uint)(double)CONCAT44(extraout_fr0_03,extraout_fr1_03);
    }
    *(uint *)((int)DAT_8c114ac8 + (int)unaff_r14) = uVar6 & 0xffff;
    fVar9 = DAT_8c114ae0;
    if (bVar16 == 0) {
      fVar9 = fVar10;
    }
    (*(code *)puVar3)(unaff_r14,5,ar6,ar7);
    if (bVar16 == 0) {
      fVar9 = extraout_fr0_04;
    }
    uVar6 = ((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar18 << 0x13 |
            (uint)bVar16 << 0x14) & _DAT_8c114ad0;
    fVar10 = extraout_fr1_04;
    if (bVar16 == 0) {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),_DAT_8c114ae4);
      fVar10 = fVar9;
    }
    uVar2 = (uVar6 & 0x80000) >> 0x13;
    cVar21 = (char)uVar2;
    uVar6 = (uVar6 & 0x100000) >> 0x14;
    cVar1 = (char)uVar6;
    if (cVar21 == '\0') {
      dVar11 = (double)CONCAT44(extraout_fr0_04 * SUB84(in_dr2,0),fVar10);
    }
    else {
      dVar11 = (double)CONCAT44(extraout_fr0_04,fVar10) * in_dr2;
    }
    if (cVar1 == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c114ae8,SUB84(in_dr2,0));
    }
    else {
      dVar8 = (double)CONCAT44(DAT_8c114aec,DAT_8c114ae8);
    }
    fVar9 = (float)((ulonglong)dVar8 >> 0x20);
    fVar10 = (float)((ulonglong)dVar11 >> 0x20);
    if (cVar21 == '\0') {
      bVar12 = fVar9 < fVar10;
    }
    else {
      bVar12 = dVar8 < dVar11;
    }
    if (bVar12) {
      fVar7 = extraout_fr1_04;
      if (cVar1 == '\0') {
        dVar8 = (double)CONCAT44(fVar9,fVar10);
        fVar7 = DAT_8c114aec;
      }
      if (cVar21 == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar8,0) + fVar7);
      }
      else {
        dVar8 = dVar8 + (double)CONCAT44(extraout_fr0_04,fVar7);
      }
    }
    else if (cVar1 == '\0') {
      dVar8 = (double)CONCAT44(fVar9,fVar10);
    }
    uVar6 = (uVar2 << 0x13 | uVar6 << 0x14) & DAT_8c114bc0;
    bVar18 = 0;
    bVar16 = 0;
    bVar17 = (byte)((uVar6 & 0x80000) >> 0x13);
    bVar19 = (byte)(uVar6 >> 0x14);
    if (bVar17 == 0) {
      iVar15 = (int)SUB84(dVar8,0);
    }
    else {
      iVar15 = (int)dVar8;
    }
    *(int *)((int)DAT_8c114bae + (int)unaff_r14) = iVar15;
    (*(code *)puVar3)(unaff_r14,6,ar6,ar7);
    uVar6 = ((uint)bVar18 << 0xc | (uint)bVar16 << 0x12 | (uint)bVar17 << 0x13 |
            (uint)bVar19 << 0x14) & DAT_8c114bc0;
    bVar16 = 0;
    bVar18 = 0;
    bVar19 = (byte)((uVar6 & 0x80000) >> 0x13);
    cVar21 = (char)((uVar6 & 0x100000) >> 0x14);
    if (bVar19 == 0) {
      uVar14 = (undefined2)(int)extraout_fr0_05;
    }
    else {
      uVar14 = (undefined2)(int)(double)CONCAT44(extraout_fr0_05,extraout_fr1_05);
    }
    *(undefined2 *)((int)DAT_8c114bb0 + (int)unaff_r14) = uVar14;
    (*(code *)puVar3)(unaff_r14,7,ar6,ar7);
    if (cVar21 == '\0') {
      *(undefined4 *)((int)DAT_8c114bb2 + (int)unaff_r14) = extraout_fr0_06;
    }
    else {
      *(ulonglong *)((int)DAT_8c114bb2 + (int)unaff_r14) = CONCAT44(extraout_fr0_06,extraout_fr1_06)
      ;
    }
    bVar17 = 0;
    bVar20 = 0;
    bVar16 = (byte)((((uint)bVar16 << 0xc | (uint)bVar18 << 0x12 | (uint)bVar19 << 0x13) &
                     DAT_8c114bc0 & 0x80000) >> 0x13);
    (*(code *)puVar3)(unaff_r14,10,ar6,ar7);
    bVar18 = 0;
    bVar19 = 0;
    bVar16 = (byte)((((uint)bVar17 << 0xc | (uint)bVar20 << 0x12 | (uint)bVar16 << 0x13) &
                     DAT_8c114bc0 & 0x80000) >> 0x13);
    if (bVar16 == 0) {
      uVar14 = (undefined2)(int)extraout_fr0_07;
    }
    else {
      uVar14 = (undefined2)(int)(double)CONCAT44(extraout_fr0_07,extraout_fr1_07);
    }
    *(undefined2 *)((int)DAT_8c114bb4 + (int)unaff_r14) = uVar14;
    (*(code *)puVar3)(unaff_r14,0xf,ar6,ar7);
    bVar17 = 0;
    bVar20 = 0;
    bVar16 = (byte)((((uint)bVar18 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar16 << 0x13) &
                     DAT_8c114bc0 & 0x80000) >> 0x13);
    if (bVar16 == 0) {
      uVar14 = (undefined2)(int)extraout_fr0_08;
    }
    else {
      uVar14 = (undefined2)(int)(double)CONCAT44(extraout_fr0_08,extraout_fr1_08);
    }
    *(undefined2 *)((int)DAT_8c114bb6 + (int)unaff_r14) = uVar14;
    uVar4 = (**(code **)(a4 + 0x10))(a4,0x3c,ar6,ar7);
    uVar6 = DAT_8c114bc0;
    *(undefined4 *)((int)DAT_8c114bb8 + (int)unaff_r14) = uVar4;
    *(undefined4 *)((int)DAT_8c114bba + (int)unaff_r14) = 0;
    unaff_r14[0x13] = 0;
    bVar18 = 0;
    bVar19 = 0;
    bVar16 = (byte)((((uint)bVar17 << 0xc | (uint)bVar20 << 0x12 | (uint)bVar16 << 0x13) & uVar6 &
                    0x80000) >> 0x13);
    (*(code *)puVar3)(unaff_r14,0x18,ar6,ar7);
    if ((char)((((uint)bVar18 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar16 << 0x13) & DAT_8c114bc0 &
               0x80000) >> 0x13) == '\0') {
      uVar14 = (undefined2)(int)extraout_fr0_09;
    }
    else {
      uVar14 = (undefined2)(int)(double)CONCAT44(extraout_fr0_09,extraout_fr1_09);
    }
    *(undefined2 *)((int)DAT_8c114bbc + (int)unaff_r14) = uVar14;
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* FUN_8c114bd8 @ 8c114bd8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c114bd8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  double dVar7;
  undefined4 in_fr5;
  undefined8 uVar8;
  undefined1 uVar9;
  byte in_FPSCR_CAUSE;
  byte bVar10;
  byte bVar11;
  byte in_FPSCR_DN;
  byte bVar12;
  byte bVar13;
  byte in_FPSCR_PR;
  byte bVar14;
  byte in_FPSCR_SZ;
  char cVar15;
  
  uVar2 = (**(code **)(ar5 + 0x2c))(ar5);
  *(undefined2 *)(DAT_8c114d02 + ar4) = uVar2;
  uVar6 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c114d24;
  bVar10 = 0;
  bVar12 = 0;
  bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar11 = (byte)((uVar6 & 0x100000) >> 0x14);
  uVar2 = (**(code **)(ar5 + 0x30))(ar5);
  *(undefined2 *)(DAT_8c114d04 + ar4) = uVar2;
  uVar6 = ((uint)bVar10 << 0xc | (uint)bVar12 << 0x12 | (uint)bVar14 << 0x13 | (uint)bVar11 << 0x14)
          & DAT_8c114d24;
  bVar10 = 0;
  bVar12 = 0;
  bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar11 = (byte)((uVar6 & 0x100000) >> 0x14);
  uVar2 = (**(code **)(ar5 + 0x34))(ar5);
  *(undefined2 *)(DAT_8c114d06 + ar4) = uVar2;
  uVar6 = ((uint)bVar10 << 0xc | (uint)bVar12 << 0x12 | (uint)bVar14 << 0x13 | (uint)bVar11 << 0x14)
          & DAT_8c114d24;
  bVar10 = 0;
  bVar12 = 0;
  bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar11 = (byte)((uVar6 & 0x100000) >> 0x14);
  uVar2 = (**(code **)(ar5 + 0x38))(ar5);
  *(undefined2 *)(DAT_8c114d08 + ar4) = uVar2;
  uVar6 = ((uint)bVar10 << 0xc | (uint)bVar12 << 0x12 | (uint)bVar14 << 0x13 | (uint)bVar11 << 0x14)
          & DAT_8c114d24;
  bVar10 = 0;
  bVar12 = 0;
  bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar11 = (byte)((uVar6 & 0x100000) >> 0x14);
  uVar2 = (**(code **)(ar5 + 0x34))(ar5);
  *(undefined2 *)(DAT_8c114d0a + ar4) = uVar2;
  uVar6 = ((uint)bVar10 << 0xc | (uint)bVar12 << 0x12 | (uint)bVar14 << 0x13 | (uint)bVar11 << 0x14)
          & DAT_8c114d24;
  bVar11 = 0;
  bVar12 = 0;
  bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar10 = (byte)((uVar6 & 0x100000) >> 0x14);
  uVar2 = (**(code **)(ar5 + 0x20))(ar5);
  *(undefined2 *)(DAT_8c114d0c + ar4) = uVar2;
  uVar6 = ((uint)bVar11 << 0xc | (uint)bVar12 << 0x12 | (uint)bVar14 << 0x13 | (uint)bVar10 << 0x14)
          & DAT_8c114d24;
  bVar10 = 0;
  bVar12 = 0;
  bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar11 = (byte)((uVar6 & 0x100000) >> 0x14);
  uVar3 = (**(code **)(ar5 + 0x44))(ar5);
  *(undefined4 *)(DAT_8c114d0e + ar4) = uVar3;
  uVar6 = ((uint)bVar10 << 0xc | (uint)bVar12 << 0x12 | (uint)bVar14 << 0x13 | (uint)bVar11 << 0x14)
          & DAT_8c114d24;
  bVar10 = 0;
  bVar12 = 0;
  bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar11 = (byte)((uVar6 & 0x100000) >> 0x14);
  uVar2 = (**(code **)(ar5 + 0x48))(ar5);
  *(undefined2 *)(DAT_8c114d10 + ar4) = uVar2;
  uVar6 = ((uint)bVar10 << 0xc | (uint)bVar12 << 0x12 | (uint)bVar14 << 0x13 | (uint)bVar11 << 0x14)
          & DAT_8c114d24;
  bVar10 = 0;
  bVar12 = 0;
  bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
  cVar15 = (char)((uVar6 & 0x100000) >> 0x14);
  uVar3 = (**(code **)(DAT_8c114d12 + ar5))(ar5);
  puVar1 = PTR_FUN_8c114d2c;
  *(undefined4 *)(DAT_8c114d14 + ar4) = uVar3;
  if (cVar15 == '\0') {
    uVar8 = CONCAT44(_DAT_8c114d28,in_fr5);
  }
  else {
    uVar8 = CONCAT44(PTR_FUN_8c114d2c,_DAT_8c114d28);
  }
  bVar11 = 0;
  bVar13 = 0;
  bVar10 = (byte)((((uint)bVar10 << 0xc | (uint)bVar12 << 0x12 | (uint)bVar14 << 0x13) &
                   DAT_8c114d24 & 0x80000) >> 0x13);
  dVar7 = (double)(*(code *)puVar1)(uVar8,ar4,0x15);
  iVar4 = (int)DAT_8c114d16;
  if ((char)((((uint)bVar11 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar10 << 0x13) & DAT_8c114d24 &
             0x80000) >> 0x13) == '\0') {
    uVar9 = (undefined1)(int)(float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    uVar9 = (undefined1)(int)dVar7;
  }
  *(undefined1 *)(iVar4 + ar4) = uVar9;
  if (*(char *)(iVar4 + ar4) != '\0') {
    uVar3 = (**(code **)(DAT_8c114d18 + ar5))(ar5);
    uVar5 = (**(code **)(DAT_8c114d1a + ar5))(uVar3);
    *(undefined4 *)(DAT_8c114d1c + ar4) = uVar5;
    uVar3 = (**(code **)(DAT_8c114d1e + ar5))(uVar3);
    *(undefined4 *)(DAT_8c114d20 + ar4) = uVar3;
  }
  return 0;
}



/* FUN_8c114be0 @ 8c114be0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c114be0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 a5;
  int unaff_r13;
  int unaff_r14;
  undefined4 extraout_fr1;
  float extraout_fr0;
  undefined1 uVar5;
  byte in_FPSCR_CAUSE;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte in_FPSCR_DN;
  byte bVar9;
  byte bVar10;
  byte in_FPSCR_PR;
  
  uVar2 = (**(code **)(unaff_r14 + 0x2c))(ar5,ar5,ar6,ar7);
  *(short *)(DAT_8c114d02 + unaff_r13) = (short)uVar2;
  bVar6 = 0;
  bVar8 = 0;
  bVar10 = (byte)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                   (uint)in_FPSCR_PR << 0x13) & DAT_8c114d24 & 0x80000) >> 0x13);
  uVar2 = (**(code **)(unaff_r14 + 0x30))(unaff_r14,ar5,ar6,ar7);
  *(short *)(DAT_8c114d04 + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar6 << 0xc | (uint)bVar8 << 0x12 | (uint)bVar10 << 0x13) & DAT_8c114d24 &
                 0x80000) >> 0x13);
  uVar2 = (**(code **)(unaff_r14 + 0x34))(unaff_r14,ar5,ar6,ar7);
  *(short *)(DAT_8c114d06 + unaff_r13) = (short)uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & DAT_8c114d24 &
                 0x80000) >> 0x13);
  uVar2 = (**(code **)(unaff_r14 + 0x38))(unaff_r14,ar5,ar6,ar7);
  *(short *)(DAT_8c114d08 + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & DAT_8c114d24 &
                 0x80000) >> 0x13);
  uVar2 = (**(code **)(unaff_r14 + 0x34))(unaff_r14,ar5,ar6,ar7);
  *(short *)(DAT_8c114d0a + unaff_r13) = (short)uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & DAT_8c114d24 &
                 0x80000) >> 0x13);
  uVar2 = (**(code **)(unaff_r14 + 0x20))(unaff_r14,ar5,ar6,ar7);
  *(short *)(DAT_8c114d0c + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & DAT_8c114d24 &
                 0x80000) >> 0x13);
  uVar2 = (**(code **)(unaff_r14 + 0x44))(unaff_r14,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c114d0e + unaff_r13) = uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & DAT_8c114d24 &
                 0x80000) >> 0x13);
  uVar2 = (**(code **)(unaff_r14 + 0x48))(unaff_r14,ar5,ar6,ar7);
  *(short *)(DAT_8c114d10 + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & DAT_8c114d24 &
                 0x80000) >> 0x13);
  uVar2 = (**(code **)(DAT_8c114d12 + unaff_r14))(unaff_r14,ar5,ar6,ar7);
  puVar1 = PTR_FUN_8c114d2c;
  a5 = 0x15;
  *(undefined4 *)(DAT_8c114d14 + unaff_r13) = uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & DAT_8c114d24 &
                 0x80000) >> 0x13);
  (*(code *)puVar1)(unaff_r13,0x15,ar6,ar7);
  iVar3 = (int)DAT_8c114d16;
  if ((char)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & DAT_8c114d24 &
             0x80000) >> 0x13) == '\0') {
    uVar5 = (undefined1)(int)extraout_fr0;
  }
  else {
    uVar5 = (undefined1)(int)(double)CONCAT44(extraout_fr0,extraout_fr1);
  }
  *(undefined1 *)(iVar3 + unaff_r13) = uVar5;
  if (*(char *)(iVar3 + unaff_r13) != '\0') {
    uVar2 = (**(code **)(DAT_8c114d18 + unaff_r14))(unaff_r14,a5,ar6,ar7);
    uVar4 = (**(code **)(DAT_8c114d1a + unaff_r14))(uVar2,a5,ar6,ar7);
    *(undefined4 *)(DAT_8c114d1c + unaff_r13) = uVar4;
    uVar2 = (**(code **)(DAT_8c114d1e + unaff_r14))(uVar2,a5,ar6,ar7);
    *(undefined4 *)(DAT_8c114d20 + unaff_r13) = uVar2;
  }
  return 0;
}



/* FUN_8c114d30 @ 8c114d30 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c114d30(int ar4,uint ar5,uint ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  int *piVar12;
  ushort *puVar13;
  int iStack_28;
  int *piStack_24;
  uint uStack_20;
  
  piVar7 = *(int **)(DAT_8c114e72 + ar4);
  iVar2 = (int)DAT_8c114e74;
  piStack_24 = (int *)(*(int *)(ar4 + 0x38) * 4 + *(int *)(ar4 + 0x44) + 4);
  iVar3 = iVar2 + 0x20;
  iVar9 = *(int *)(iVar3 + ar4);
  piVar12 = (int *)(*(int *)(iVar2 + ar4) * 4 + *(int *)(iVar2 + 8 + ar4));
  uStack_20 = 0;
  piVar8 = piVar12 + 2;
  if (ar5 != 0) {
    do {
      piVar12 = piVar12 + 1;
      iStack_28 = 0;
      puVar13 = (ushort *)(*piVar12 * 2 + *(int *)(DAT_8c114e76 + ar4));
      iVar2 = *(int *)(DAT_8c114e76 + ar4) + *piVar8 * 2;
      puVar10 = (ushort *)(iVar2 + -2);
      *(undefined2 *)((int)piVar7 + 6) =
           *(undefined2 *)(*(int *)((uint)*puVar13 * 4 + iVar9) * 2 + iVar9);
      *(undefined2 *)(piVar7 + 2) =
           *(undefined2 *)((*(int *)((uint)*puVar10 * 4 + iVar9) + 1) * 2 + iVar9);
      iVar3 = 0;
      if (2 < (uint)((int)((iVar2 - (int)puVar13) + (uint)(iVar2 - (int)puVar13 < 0)) >> 1)) {
        uVar1 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar10 = (ushort *)(iVar2 + -4);
        piVar4 = (int *)((uint)uVar1 * 4 + iVar9);
        iStack_28 = (piVar4[1] - *piVar4) + -2;
      }
      piVar4 = piStack_24 + 1;
      *piVar7 = *piStack_24 + iStack_28;
      for (; puVar13 <= puVar10; puVar13 = puVar13 + 1) {
        piVar5 = (int *)((uint)*puVar13 * 4 + iVar9);
        iVar3 = iVar3 + (piVar5[1] - *piVar5) + -2;
      }
      *(short *)(piVar7 + 1) = (short)iVar3;
      piVar8 = piVar8 + 1;
      piVar7 = piVar7 + 3;
      uStack_20 = uStack_20 + 1;
      piStack_24 = piVar4;
    } while (uStack_20 < ar5);
  }
  iVar2 = DAT_8c114e7c;
  uVar11 = 0;
  iVar9 = *piStack_24;
  if (ar6 != 0) {
    do {
      piStack_24 = piStack_24 + 1;
      iVar3 = (int)DAT_8c114e78;
      iVar6 = *piStack_24;
      *piVar7 = iVar9;
      *(undefined2 *)(piVar7 + 2) = *(undefined2 *)(iVar3 + ar4);
      *(undefined2 *)((int)piVar7 + 6) = *(undefined2 *)(DAT_8c114e78 + ar4);
      uVar11 = uVar11 + 1;
      iVar3 = (iVar6 - iVar9) + iVar2;
      *(short *)(piVar7 + 1) = (short)iVar3;
      piVar7 = piVar7 + 3;
      iVar9 = iVar6;
    } while (uVar11 < ar6);
  }
  return iVar3;
}



/* FUN_8c114e80 @ 8c114e80 callers=0 callees=3 */

/* WARNING: Removing unreachable block (ram,0x8c11545e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c114e80(int *ar4,int ar5,undefined4 ar6,short *ar7)

{
  ushort uVar1;
  short sVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  int *a6;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ushort *puVar13;
  int *piVar14;
  int iVar15;
  ushort *puVar16;
  ushort *puVar17;
  int *a5;
  int *piVar18;
  undefined4 a5_00;
  int *piVar19;
  int *a7;
  int iVar20;
  short *psVar21;
  short *psVar22;
  int a4;
  undefined4 extraout_fr1;
  undefined4 extraout_fr1_00;
  float extraout_fr0;
  float extraout_fr0_00;
  float fVar23;
  bool bVar24;
  byte in_FPSCR_CAUSE;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  char cVar30;
  undefined4 uStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined4 *puStack_44;
  ushort *puStack_40;
  int *piStack_2c;
  
  a4 = *ar4;
  iVar20 = *(int *)((int)DAT_8c115010 + (int)ar4);
  uVar6 = *(short *)(DAT_8c115010 + -0xc + (int)ar4) << 2 | 1;
  iVar15 = ar5;
  iVar7 = (**(code **)(ar5 + 0x10))(ar5,ar5,ar6,ar7);
  bVar25 = 0;
  bVar27 = 0;
  bVar28 = (byte)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                   (uint)in_FPSCR_PR << 0x13) & DAT_8c115024 & 0x80000) >> 0x13);
  a6 = (int *)(**(code **)(ar5 + 0x14))(ar5,iVar15,ar6,ar7);
  bVar26 = 0;
  bVar29 = 0;
  bVar25 = (byte)((((uint)bVar25 << 0xc | (uint)bVar27 << 0x12 | (uint)bVar28 << 0x13) &
                   DAT_8c115024 & 0x80000) >> 0x13);
  uVar8 = (**(code **)(ar5 + 0x1c))(ar5,iVar15,ar6,ar7);
  *(undefined4 *)((int)DAT_8c115012 + (int)ar4) = uVar8;
  bVar27 = 0;
  bVar28 = 0;
  bVar25 = (byte)((((uint)bVar26 << 0xc | (uint)bVar29 << 0x12 | (uint)bVar25 << 0x13) &
                   DAT_8c115024 & 0x80000) >> 0x13);
  uVar8 = (**(code **)(ar5 + 8))(ar5,iVar15,ar6,ar7);
  *(undefined4 *)((int)DAT_8c115014 + (int)ar4) = uVar8;
  bVar26 = 0;
  bVar29 = 0;
  bVar25 = (byte)((((uint)bVar27 << 0xc | (uint)bVar28 << 0x12 | (uint)bVar25 << 0x13) &
                   DAT_8c115024 & 0x80000) >> 0x13);
  iVar9 = (**(code **)(ar5 + 8))(ar5,iVar15,ar6,ar7);
  bVar27 = 0;
  bVar28 = 0;
  bVar25 = (byte)((((uint)bVar26 << 0xc | (uint)bVar29 << 0x12 | (uint)bVar25 << 0x13) &
                   DAT_8c115024 & 0x80000) >> 0x13);
  iVar10 = (**(code **)(ar5 + 0xc))(ar5,iVar15,ar6,ar7);
  ar4[0xe] = iVar10 + iVar9;
  iVar11 = (int)DAT_8c115016;
  ar4[0xf] = ((iVar10 + iVar9) - 1U >> 3) + 1;
  *(int *)(iVar11 + (int)ar4) = iVar7 + (int)a6;
  uVar12 = DAT_8c115024;
  *(int *)(iVar11 + 0x4c + (int)ar4) = ar4[0xe];
  bVar26 = 0;
  bVar29 = 0;
  bVar25 = (byte)((((uint)bVar27 << 0xc | (uint)bVar28 << 0x12 | (uint)bVar25 << 0x13) & uVar12 &
                  0x80000) >> 0x13);
  uVar12 = (*(code *)PTR_FUN_8c115028)(ar4,iVar15,ar6,ar7);
  if ((uVar12 & 0xff) != 0) {
    return 1;
  }
  bVar27 = 0;
  bVar28 = 0;
  bVar25 = (byte)((((uint)bVar26 << 0xc | (uint)bVar29 << 0x12 | (uint)bVar25 << 0x13) &
                   DAT_8c115024 & 0x80000) >> 0x13);
  puVar13 = (ushort *)(**(code **)(ar5 + 0x34))(ar5,iVar15,ar6,ar7);
  *(ushort **)((int)DAT_8c115018 + (int)ar4) = puVar13;
  bVar26 = 0;
  bVar29 = 0;
  bVar25 = (byte)((((uint)bVar27 << 0xc | (uint)bVar28 << 0x12 | (uint)bVar25 << 0x13) &
                   DAT_8c115024 & 0x80000) >> 0x13);
  uVar8 = (**(code **)(ar5 + 0x38))(ar5,iVar15,ar6,ar7);
  *(undefined4 *)((int)DAT_8c11501a + (int)ar4) = uVar8;
  bVar27 = 0;
  bVar28 = 0;
  bVar25 = (byte)((((uint)bVar26 << 0xc | (uint)bVar29 << 0x12 | (uint)bVar25 << 0x13) &
                   DAT_8c115024 & 0x80000) >> 0x13);
  uVar8 = (**(code **)(ar5 + 0x3c))(ar5,iVar15,ar6,ar7);
  *(undefined4 *)((int)DAT_8c11501c + (int)ar4) = uVar8;
  bVar26 = 0;
  bVar29 = 0;
  bVar25 = (byte)((((uint)bVar27 << 0xc | (uint)bVar28 << 0x12 | (uint)bVar25 << 0x13) &
                   DAT_8c115024 & 0x80000) >> 0x13);
  uVar8 = (**(code **)(ar5 + 0x40))(ar5,iVar15,ar6,ar7);
  uVar12 = ((uint)bVar26 << 0xc | (uint)bVar29 << 0x12 | (uint)bVar25 << 0x13) & DAT_8c115024;
  *(undefined4 *)((int)DAT_8c11501e + (int)ar4) = uVar8;
  bVar25 = 0;
  bVar27 = 0;
  bVar28 = (byte)((uVar12 & 0x80000) >> 0x13);
  iVar9 = (**(code **)(ar5 + 0x28))(ar5,iVar15,ar6,ar7);
  bVar26 = 0;
  bVar29 = 0;
  bVar25 = (byte)((((uint)bVar25 << 0xc | (uint)bVar27 << 0x12 | (uint)bVar28 << 0x13) &
                   DAT_8c115024 & 0x80000) >> 0x13);
  piVar14 = (int *)(**(code **)(ar5 + 0x24))(ar5,iVar15,ar6,ar7);
  uVar12 = DAT_8c115024;
  piVar19 = (int *)0x0;
  if (piVar14 != (int *)0x0) {
    do {
      uVar1 = *puVar13;
      puVar13 = puVar13 + 1;
      piVar19 = (int *)((int)piVar19 + 1);
      iVar9 = iVar9 + (*(int *)((uVar1 + 1) * 4 + iVar20) - *(int *)((uint)uVar1 * 4 + iVar20));
    } while (piVar19 < piVar14);
  }
  ar4[0x10] = iVar9 + (int)piVar14 * -2 + *(int *)((int)DAT_8c115016 + (int)ar4) * 3;
  bVar28 = 0;
  bVar27 = 0;
  bVar25 = (byte)((((uint)bVar26 << 0xc | (uint)bVar29 << 0x12 | (uint)bVar25 << 0x13) & uVar12 &
                  0x80000) >> 0x13);
  uVar8 = (**(code **)(a4 + 0x10))(a4,*(int *)((int)DAT_8c115012 + (int)ar4) << 2,piVar19,ar7);
  *(undefined4 *)((int)DAT_8c115020 + (int)ar4) = uVar8;
  bVar29 = 0;
  bVar26 = 0;
  bVar25 = (byte)((((uint)bVar28 << 0xc | (uint)bVar27 << 0x12 | (uint)bVar25 << 0x13) &
                   DAT_8c115138 & 0x80000) >> 0x13);
  uVar8 = (**(code **)(a4 + 0x10))(a4,ar4[0xe] << 1,piVar19,ar7);
  *(undefined4 *)((int)DAT_8c11512c + (int)ar4) = uVar8;
  bVar27 = 0;
  bVar28 = 0;
  bVar25 = (byte)((((uint)bVar29 << 0xc | (uint)bVar26 << 0x12 | (uint)bVar25 << 0x13) &
                   DAT_8c115138 & 0x80000) >> 0x13);
  iVar15 = (**(code **)(a4 + 0x10))
                     (a4,(ar4[0xe] + *(int *)((int)DAT_8c11512e + (int)ar4) + 2) * 4,piVar19,ar7);
  ar4[0x11] = iVar15;
  bVar26 = 0;
  bVar29 = 0;
  bVar25 = (byte)((((uint)bVar27 << 0xc | (uint)bVar28 << 0x12 | (uint)bVar25 << 0x13) &
                   DAT_8c115138 & 0x80000) >> 0x13);
  iVar15 = (**(code **)(a4 + 0x10))(a4,ar4[0x10] << 1,piVar19,ar7);
  ar4[0x12] = iVar15;
  if ((((*(int *)((int)DAT_8c115130 + (int)ar4) != 0) &&
       (*(int *)((int)DAT_8c11512c + (int)ar4) != 0)) && (ar4[0x11] != 0)) && (ar4[0x12] != 0)) {
    iVar15 = 0;
    puVar13 = (ushort *)ar4[0x12];
    uStack_54 = -1;
    bVar4 = false;
    puVar16 = *(ushort **)((int)DAT_8c115132 + (int)ar4);
    a5 = *(int **)((int)DAT_8c115134 + (int)ar4);
    a7 = a5 + *a5;
    puVar3 = (undefined4 *)ar4[0x11];
    piVar18 = (undefined4 *)ar4[0x11] + ar4[0xe] + 1;
    puStack_40 = puVar16;
    piStack_50 = a5;
    piStack_2c = a7;
    iVar9 = uStack_54;
    for (puVar17 = puVar16; uStack_54 = iVar9, piStack_4c = piVar18, puStack_44 = puVar3,
        puVar17 < puVar16 + (int)piVar14; puVar17 = puVar17 + 1) {
      if (puVar17 == puStack_40) {
        if (bVar4) {
          if (*(char *)((int)DAT_8c115136 + (int)ar4) == '\0') {
            puVar13[-1] = puVar13[-1] | 1;
          }
          else {
            *puVar13 = uVar6;
            puVar13 = puVar13 + 1;
            iVar15 = iVar15 + 1;
          }
          uStack_54._0_2_ = (ushort)iVar9;
          *puVar13 = (ushort)uStack_54;
          uStack_54._2_2_ = (ushort)((uint)iVar9 >> 0x10);
          puVar13[1] = uStack_54._2_2_;
          puVar13 = puVar13 + 2;
          iVar15 = iVar15 + 2;
        }
        else {
          bVar4 = true;
        }
        bVar24 = a7 == piStack_2c;
        a7 = a7 + 1;
        if (bVar24) {
          piStack_50 = piStack_50 + 1;
          uStack_54 = iVar9 + 1;
          piStack_2c = (int *)(*piStack_50 * 4 + *(int *)((int)DAT_8c115266 + (int)ar4));
          puStack_44 = puVar3 + 1;
          *puVar3 = piVar18;
        }
        puStack_40 = puVar16 + *a7;
        piStack_4c = piVar18 + 1;
        *piVar18 = iVar15;
      }
      piVar18 = (int *)((uint)*puVar17 * 4 + iVar20);
      piVar19 = (int *)(piVar18[1] * 2 + iVar20);
      for (a5 = (int *)(*piVar18 * 2 + iVar20 + 4); a5 < piVar19; a5 = (int *)((int)a5 + 2)) {
        iVar15 = iVar15 + 1;
        *puVar13 = (short)*a5 << 2;
        puVar13 = puVar13 + 1;
      }
      puVar3 = puStack_44;
      piVar18 = piStack_4c;
      iVar9 = uStack_54;
    }
    psVar21 = *(short **)((int)DAT_8c115268 + (int)ar4);
    bVar27 = 0;
    bVar28 = 0;
    bVar25 = (byte)((((uint)bVar26 << 0xc | (uint)bVar29 << 0x12 | (uint)bVar25 << 0x13) &
                     DAT_8c115270 & 0x80000) >> 0x13);
    iVar9 = (**(code **)(ar5 + 0x28))(ar5,a5,piVar19,a7);
    ar7 = psVar21 + iVar9;
    piVar14 = *(int **)((int)DAT_8c11526a + (int)ar4);
    piVar18 = piVar14 + *piVar14;
    piVar19 = piVar18;
    psVar22 = psVar21;
    puStack_40 = (ushort *)psVar21;
    do {
      if ((ushort *)psVar22 == puStack_40) {
        if (bVar4) {
          if (*(char *)((int)DAT_8c11526c + (int)ar4) == '\0') {
            puVar13[-1] = puVar13[-1] | 1;
          }
          else {
            *puVar13 = uVar6;
            puVar13 = puVar13 + 1;
            iVar15 = iVar15 + 1;
          }
          *puVar13 = (ushort)uStack_54;
          puVar13[1] = uStack_54._2_2_;
          puVar13 = puVar13 + 2;
          iVar15 = iVar15 + 2;
        }
        else {
          bVar4 = true;
        }
        bVar24 = piVar18 == piVar19;
        piVar18 = piVar18 + 1;
        if (bVar24) {
          piVar14 = piVar14 + 1;
          uStack_54 = uStack_54 + 1;
          piVar19 = (int *)(*piVar14 * 4 + *(int *)((int)DAT_8c11526a + (int)ar4));
          *puStack_44 = piStack_4c;
          puStack_44 = puStack_44 + 1;
        }
        puStack_40 = (ushort *)(psVar21 + *piVar18);
        *piStack_4c = iVar15;
        piStack_4c = piStack_4c + 1;
        if (psVar22 == ar7) goto LAB_8c115274;
      }
      sVar2 = *psVar22;
      psVar22 = psVar22 + 1;
      iVar15 = iVar15 + 1;
      *puVar13 = sVar2 << 2;
      puVar13 = puVar13 + 1;
    } while( true );
  }
LAB_8c115402:
  uVar8 = (*(code *)PTR_FUN_8c115428)(ar4,0x71,piVar19,ar7);
  return uVar8;
LAB_8c115274:
  bVar29 = 0;
  bVar26 = 0;
  bVar25 = (byte)((((uint)bVar27 << 0xc | (uint)bVar28 << 0x12 | (uint)bVar25 << 0x13) &
                   DAT_8c115320 & 0x80000) >> 0x13);
  uVar8 = (**(code **)(a4 + 0x10))(a4,*(int *)((int)DAT_8c115312 + (int)ar4) * 0xc,piVar19,ar7);
  *(undefined4 *)((int)DAT_8c115314 + (int)ar4) = uVar8;
  bVar27 = 0;
  bVar28 = 0;
  bVar25 = (byte)((((uint)bVar29 << 0xc | (uint)bVar26 << 0x12 | (uint)bVar25 << 0x13) &
                   DAT_8c115320 & 0x80000) >> 0x13);
  FUN_8c114d30(ar4,iVar7,a6,ar7);
  bVar29 = 0;
  bVar26 = 0;
  bVar25 = (byte)((((uint)bVar27 << 0xc | (uint)bVar28 << 0x12 | (uint)bVar25 << 0x13) &
                   DAT_8c115320 & 0x80000) >> 0x13);
  uVar8 = (**(code **)(ar5 + 0x48))(ar5,iVar7,a6,ar7);
  *(undefined4 *)((int)DAT_8c115316 + (int)ar4) = uVar8;
  bVar27 = 0;
  bVar28 = 0;
  bVar25 = (byte)((((uint)bVar29 << 0xc | (uint)bVar26 << 0x12 | (uint)bVar25 << 0x13) &
                   DAT_8c115320 & 0x80000) >> 0x13);
  uVar8 = (**(code **)(ar5 + 0x44))(ar5,iVar7,a6,ar7);
  *(undefined4 *)((int)DAT_8c115318 + (int)ar4) = uVar8;
  uVar12 = DAT_8c115320;
  *(undefined1 *)((int)DAT_8c11531a + (int)ar4) = 0;
  bVar26 = 0;
  bVar29 = 0;
  bVar25 = (byte)((((uint)bVar27 << 0xc | (uint)bVar28 << 0x12 | (uint)bVar25 << 0x13) & uVar12 &
                  0x80000) >> 0x13);
  uVar8 = (**(code **)(ar5 + 0x30))(ar5,iVar7,a6,ar7);
  *(char *)((int)DAT_8c11531c + (int)ar4) = (char)uVar8;
  if (*(char *)((int)DAT_8c11531c + (int)ar4) == '\0') {
    bVar27 = 0;
    bVar28 = 0;
    bVar25 = (byte)((((uint)bVar26 << 0xc | (uint)bVar29 << 0x12 | (uint)bVar25 << 0x13) &
                     DAT_8c115320 & 0x80000) >> 0x13);
    (*(code *)PTR_FUN_8c115328)(ar4,0xf,a6,ar7);
    cVar30 = (char)((((uint)bVar27 << 0xc | (uint)bVar28 << 0x12 | (uint)bVar25 << 0x13) &
                     DAT_8c115320 & 0x80000) >> 0x13);
    piVar19 = a6;
    uVar8 = extraout_fr1;
    fVar23 = extraout_fr0;
  }
  else {
    bVar27 = 0;
    bVar28 = 0;
    bVar25 = (byte)((((uint)bVar26 << 0xc | (uint)bVar29 << 0x12 | (uint)bVar25 << 0x13) &
                     DAT_8c115418._4_4_ & 0x80000) >> 0x13);
    (*(code *)PTR_FUN_8c115420)(ar4,0x17,a6,ar7);
    cVar30 = (char)((((uint)bVar27 << 0xc | (uint)bVar28 << 0x12 | (uint)bVar25 << 0x13) &
                     DAT_8c115418._4_4_ & 0x80000) >> 0x13);
    piVar19 = a6;
    uVar8 = extraout_fr1_00;
    fVar23 = extraout_fr0_00;
  }
  if (cVar30 == '\0') {
    iVar15 = (int)fVar23;
  }
  else {
    iVar15 = (int)(double)CONCAT44(fVar23,uVar8);
  }
  (*(code *)PTR_FUN_8c115424)(ar4,iVar15,piVar19,ar7);
  iVar15 = 0;
  uVar12 = 0;
  if (ar4[0xe] != 0) {
    do {
      if ((*(ushort *)(uVar12 * 2 + *(int *)((int)DAT_8c11540c + (int)ar4)) & 1) != 0) {
        iVar7 = iVar15 * 4;
        iVar15 = iVar15 + 1;
        *(uint *)(*(int *)((int)DAT_8c11540e + (int)ar4) + iVar7) = uVar12;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)ar4[0xe]);
  }
  uVar8 = (**(code **)(a4 + 0x10))(a4,(ar4[0xe] + 1) * 4,piVar19,ar7);
  *(undefined4 *)((int)DAT_8c115410 + (int)ar4) = uVar8;
  uVar8 = (**(code **)(a4 + 0x10))(a4,ar4[0xf],piVar19,ar7);
  *(undefined4 *)((int)DAT_8c115412 + (int)ar4) = uVar8;
  uVar8 = (**(code **)(a4 + 0x10))
                    (a4,((*(int **)((int)DAT_8c115414 + (int)ar4))[ar4[0xe]] -
                        **(int **)((int)DAT_8c115414 + (int)ar4)) * 4,piVar19,ar7);
  *(undefined4 *)((int)DAT_8c115416 + (int)ar4) = uVar8;
  sVar2 = DAT_8c115514;
  if (((*(int *)((int)DAT_8c115410 + (int)ar4) != 0) &&
      (*(int *)((int)DAT_8c115412 + (int)ar4) != 0)) &&
     (*(int *)((int)DAT_8c115416 + (int)ar4) != 0)) {
    uVar12 = 0;
    iVar15 = (int)DAT_8c115514;
    if (ar4[0xf] != 1) {
      do {
        *(char *)(*(int *)((int)DAT_8c115516 + (int)ar4) + uVar12) = (char)sVar2;
        uVar12 = uVar12 + 1;
      } while (uVar12 < ar4[0xf] - 1U);
    }
    puVar5 = PTR_FUN_8c115528;
    uVar8 = 7;
    iVar15 = iVar15 << (8 - (ar4[0xe] & 7U) & 7);
    *(char *)(*(int *)((int)DAT_8c115516 + (int)ar4) + uVar12) = (char)iVar15;
    (*(code *)puVar5)(ar4,iVar15,7,ar7);
    puVar5 = PTR_FUN_8c11552c;
    iVar7 = (*(int **)((int)DAT_8c115518 + (int)ar4))[ar4[0xe]] -
            **(int **)((int)DAT_8c115518 + (int)ar4);
    if (iVar7 < 0) {
      iVar7 = iVar7 + 3;
    }
    iVar9 = (int)DAT_8c11551a;
    *(int *)(iVar9 + (int)ar4) = iVar7 >> 2;
    if (((*(undefined **)(iVar9 + 0x7c + (int)ar4) != puVar5) ||
        (uVar12 = FUN_8c1155a0(ar4,iVar15,uVar8,ar7), (uVar12 & 0xff) == 0)) &&
       ((*(undefined **)((int)DAT_8c11551c + (int)ar4) != PTR_FUN_8c115530 ||
        (uVar12 = FUN_8c115732(ar4,iVar15,uVar8,ar7), (uVar12 & 0xff) == 0)))) {
      a5_00 = *(undefined4 *)((int)DAT_8c11551e + (int)ar4);
      uVar12 = (*(code *)PTR_FUN_8c115534)(ar4,a5_00,uVar8,ar7);
      if (((uVar12 & 0xff) == 0) &&
         (uVar12 = (*(code *)PTR_FUN_8c115538)(ar4,a5_00,uVar8,ar7), (uVar12 & 0xff) == 0)) {
        if (*(char *)((int)DAT_8c115520 + (int)ar4) == '\0') {
          if (*(char *)((int)DAT_8c11558a + (int)ar4) == '\0') {
            iVar15 = (int)DAT_8c11558c;
            *(undefined **)(iVar15 + (int)ar4) = PTR_FUN_8c11559c;
            *(undefined1 *)(iVar15 + 0x34 + (int)ar4) = 1;
          }
          else {
            iVar15 = (int)DAT_8c11558c;
            *(undefined **)(iVar15 + (int)ar4) = PTR_FUN_8c115590;
            *(undefined1 *)(iVar15 + 0x34 + (int)ar4) = 0;
            (*(code *)PTR_FUN_8c115598)(ar4,a5_00,uVar8,ar7);
          }
        }
        else {
          iVar15 = (int)DAT_8c115522;
          *(undefined **)(iVar15 + (int)ar4) = PTR_FUN_8c11553c;
          puVar5 = PTR_FUN_8c115540;
          *(undefined1 *)(iVar15 + 0x34 + (int)ar4) = 1;
          (*(code *)puVar5)(ar4,a5_00,uVar8,ar7);
        }
        return 0;
      }
    }
    return 1;
  }
  goto LAB_8c115402;
}



/* FUN_8c1155a0 @ 8c1155a0 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1155a0(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = *ar4;
  uVar2 = (**(code **)(iVar8 + 0x10))(iVar8,(ar4[0xe] + 1) * 4);
  puVar1 = PTR_FUN_8c1156ac;
  *(undefined4 *)((int)DAT_8c11569a + (int)ar4) = uVar2;
  if (*(int *)((int)DAT_8c11569a + (int)ar4) != 0) {
    uVar2 = (**(code **)(iVar8 + 0x10))
                      (iVar8,(*(int *)((int)DAT_8c11569e + (int)ar4) +
                             *(int *)((int)DAT_8c11569c + (int)ar4)) * 4);
    *(undefined4 *)((int)DAT_8c1156a0 + (int)ar4) = uVar2;
    if (*(int *)((int)DAT_8c1156a0 + (int)ar4) != 0) {
      if (*(int *)((int)DAT_8c1156a2 + (int)ar4) == 0) {
        (*(code *)PTR_FUN_8c1156b4)(ar4,0);
      }
      piVar7 = *(int **)((int)DAT_8c1156a4 + (int)ar4);
      piVar5 = piVar7 + *(int *)(DAT_8c1156a4 + 0x18 + (int)ar4);
      iVar3 = 0;
      for (; piVar7 < piVar5; piVar7 = piVar7 + 1) {
        iVar4 = *(int *)((*piVar7 + 1) * 4 + ar4[0x11]) - *(int *)(*piVar7 * 4 + ar4[0x11]);
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        iVar3 = iVar3 + (iVar4 >> 2);
      }
      iVar4 = (int)DAT_8c1156a6;
      *(int *)(iVar4 + (int)ar4) = iVar3;
      uVar2 = (**(code **)(iVar8 + 0x10))(iVar8,(ar4[0xe] + *(int *)(iVar4 + (int)ar4) + 1) * 4);
      *(undefined4 *)((int)DAT_8c1156a8 + (int)ar4) = uVar2;
      iVar8 = (int)DAT_8c1156a6;
      *(int *)(iVar8 + -0x14 + (int)ar4) =
           (ar4[0xe] + *(int *)(iVar8 + (int)ar4) + 1) * 4 + *(int *)(iVar8 + -0x18 + (int)ar4);
      if (*(int *)(iVar8 + -0x18 + (int)ar4) != 0) {
        uVar6 = 0;
        iVar8 = ar4[0xe] * 4 + *(int *)((int)DAT_8c1157ae + (int)ar4);
        if (ar4[0xe] != 0) {
          do {
            iVar3 = (int)DAT_8c1157b0;
            *(int *)(*(int *)((int)DAT_8c1157ae + (int)ar4) + uVar6 * 4) = iVar8;
            for (piVar7 = *(int **)(*(int *)(iVar3 + (int)ar4) + uVar6 * 4);
                piVar7 < *(int **)((uVar6 + 1) * 4 + *(int *)(iVar3 + (int)ar4));
                piVar7 = piVar7 + 1) {
              iVar4 = *(int *)((*piVar7 + 1) * 4 + ar4[0x11]) - *(int *)(*piVar7 * 4 + ar4[0x11]);
              if (iVar4 < 0) {
                iVar4 = iVar4 + 3;
              }
              iVar8 = iVar8 + (iVar4 >> 2) * 4;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)ar4[0xe]);
        }
        return 0;
      }
    }
  }
  uVar2 = (*(code *)puVar1)(ar4,0x71);
  return uVar2;
}



/* FUN_8c1155a4 @ 8c1155a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1155a4(undefined4 ar4,undefined4 ar5,int *ar6,int ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *unaff_r14;
  
  iVar8 = *unaff_r14;
  uVar2 = (**(code **)(iVar8 + 0x10))(iVar8,(unaff_r14[0xe] + 1) * 4,ar6,ar7);
  puVar1 = PTR_FUN_8c1156ac;
  *(undefined4 *)((int)DAT_8c11569a + (int)unaff_r14) = uVar2;
  if (*(int *)((int)DAT_8c11569a + (int)unaff_r14) != 0) {
    uVar2 = (**(code **)(iVar8 + 0x10))
                      (iVar8,(*(int *)((int)DAT_8c11569e + (int)unaff_r14) +
                             *(int *)((int)DAT_8c11569c + (int)unaff_r14)) * 4,ar6,ar7);
    *(undefined4 *)((int)DAT_8c1156a0 + (int)unaff_r14) = uVar2;
    if (*(int *)((int)DAT_8c1156a0 + (int)unaff_r14) != 0) {
      if (*(int *)((int)DAT_8c1156a2 + (int)unaff_r14) == 0) {
        (*(code *)PTR_FUN_8c1156b4)(unaff_r14,0,ar6,ar7);
      }
      ar6 = *(int **)((int)DAT_8c1156a4 + (int)unaff_r14);
      piVar6 = ar6 + *(int *)(DAT_8c1156a4 + 0x18 + (int)unaff_r14);
      iVar3 = 0;
      for (piVar5 = ar6; piVar5 < piVar6; piVar5 = piVar5 + 1) {
        ar7 = *piVar5;
        ar6 = (int *)unaff_r14[0x11];
        iVar4 = ar6[ar7 + 1] - ar6[ar7];
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        iVar3 = iVar3 + (iVar4 >> 2);
      }
      iVar4 = (int)DAT_8c1156a6;
      *(int *)(iVar4 + (int)unaff_r14) = iVar3;
      uVar2 = (**(code **)(iVar8 + 0x10))
                        (iVar8,(unaff_r14[0xe] + *(int *)(iVar4 + (int)unaff_r14) + 1) * 4,ar6,ar7);
      *(undefined4 *)((int)DAT_8c1156a8 + (int)unaff_r14) = uVar2;
      iVar8 = (int)DAT_8c1156a6;
      *(int *)(iVar8 + -0x14 + (int)unaff_r14) =
           (unaff_r14[0xe] + *(int *)(iVar8 + (int)unaff_r14) + 1) * 4 +
           *(int *)(iVar8 + -0x18 + (int)unaff_r14);
      if (*(int *)(iVar8 + -0x18 + (int)unaff_r14) != 0) {
        uVar7 = 0;
        iVar8 = unaff_r14[0xe] * 4 + *(int *)((int)DAT_8c1157ae + (int)unaff_r14);
        if (unaff_r14[0xe] != 0) {
          do {
            iVar3 = (int)DAT_8c1157b0;
            *(int *)(*(int *)((int)DAT_8c1157ae + (int)unaff_r14) + uVar7 * 4) = iVar8;
            for (piVar5 = *(int **)(*(int *)(iVar3 + (int)unaff_r14) + uVar7 * 4);
                piVar5 < *(int **)((uVar7 + 1) * 4 + *(int *)(iVar3 + (int)unaff_r14));
                piVar5 = piVar5 + 1) {
              iVar4 = *(int *)((*piVar5 + 1) * 4 + unaff_r14[0x11]) -
                      *(int *)(*piVar5 * 4 + unaff_r14[0x11]);
              if (iVar4 < 0) {
                iVar4 = iVar4 + 3;
              }
              iVar8 = iVar8 + (iVar4 >> 2) * 4;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < (uint)unaff_r14[0xe]);
        }
        return 0;
      }
    }
  }
  uVar2 = (*(code *)puVar1)(unaff_r14,0x71,ar6,ar7);
  return uVar2;
}



/* FUN_8c115732 @ 8c115732 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c115732(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*ar4 + 0x10))(*ar4,ar4[0xe] << 3,ar6,ar7);
  *(undefined4 *)((int)DAT_8c1157b2 + (int)ar4) = uVar1;
  if (*(int *)((int)DAT_8c1157b2 + (int)ar4) == 0) {
    uVar1 = (*(code *)PTR_FUN_8c1157bc)(ar4,0x71);
    return uVar1;
  }
  return 0;
}



/* FUN_8c115778 @ 8c115778 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c115778(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(DAT_8c1157b4 + ar4) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  *(undefined4 *)(ar4 + 0x6c) = 0;
  iVar1 = 100;
  *(undefined2 *)(ar4 + 100) = 0;
  uVar2 = 0;
  if ((*(uint *)(ar4 + 0x38) & 0x7fffffff) != 0) {
    do {
      uVar3 = uVar2 + 1;
      iVar1 = *(int *)(DAT_8c1157b2 + ar4);
      *(undefined4 *)(iVar1 + uVar2 * 4) = 0;
      uVar2 = uVar3;
    } while (uVar3 < (uint)(*(int *)(ar4 + 0x38) << 1));
  }
  return iVar1;
}



/* FUN_8c1157c0 @ 8c1157c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1157c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(DAT_8c1158bc + ar4) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  *(undefined4 *)(ar4 + 0x6c) = 0;
  *(undefined2 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0;
  *(undefined4 *)(ar4 + 0x78) = 0;
  *(undefined2 *)(ar4 + 0x70) = 0;
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1;
    *(undefined4 *)(iVar1 + *(int *)(DAT_8c1158be + ar4)) = 0;
  } while (uVar2 <= *(uint *)(ar4 + 0x38));
  uVar2 = 0;
  if (*(int *)(DAT_8c1158c2 + ar4) + *(int *)(DAT_8c1158c0 + ar4) != 0) {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(int *)(DAT_8c1158c4 + ar4) + iVar1) = 0;
    } while (uVar2 < (uint)(*(int *)(DAT_8c1158c2 + ar4) + *(int *)(DAT_8c1158c0 + ar4)));
  }
  iVar1 = DAT_8c1158c6 + 0x18;
  puVar3 = (undefined4 *)**(undefined4 **)(DAT_8c1158c6 + ar4);
  uVar2 = 0;
  if (*(int *)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (int)DAT_8c1158c8;
      uVar2 = uVar2 + 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (uVar2 < *(uint *)(iVar1 + ar4));
  }
  return iVar1;
}



/* FUN_8c11584e @ 8c11584e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c11584e(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (ar5 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*ar4 + 0x10))(*ar4,0x14,ar6,ar7);
    iVar4 = (int)DAT_8c1158ca;
    *puVar3 = *(undefined4 *)(iVar4 + (int)ar4);
    puVar1 = PTR_FUN_8c1158cc;
    puVar3[1] = *(undefined4 *)(iVar4 + 0x70 + (int)ar4);
    puVar2 = PTR_LAB_8c1158d0;
    *(undefined **)(iVar4 + (int)ar4) = puVar1;
    puVar1 = PTR_LAB_8c1158d4;
    *(undefined **)(iVar4 + 0x70 + (int)ar4) = puVar2;
    *(undefined **)(iVar4 + 0x74 + (int)ar4) = puVar1;
    return puVar3;
  }
  iVar4 = (int)DAT_8c1158ca;
  *(undefined4 *)(iVar4 + (int)ar4) = *ar5;
  puVar1 = PTR_FUN_8c1158d8;
  *(undefined4 *)(iVar4 + 0x70 + (int)ar4) = ar5[1];
  puVar2 = PTR_FUN_8c1158dc;
  *(undefined **)(iVar4 + 0x74 + (int)ar4) = puVar1;
  ar4[6] = (int)puVar2;
  (**(code **)(*ar4 + 0x18))(*ar4,ar5,ar6,ar7);
  return (undefined4 *)0;
}



/* FUN_8c1158e0 @ 8c1158e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c1158e0(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (ar5 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*ar4 + 0x10))(*ar4,0x14,ar6,ar7);
    iVar4 = (int)DAT_8c1159f0;
    *puVar3 = *(undefined4 *)(iVar4 + (int)ar4);
    puVar3[1] = *(undefined4 *)(iVar4 + 0x70 + (int)ar4);
    puVar3[2] = *(undefined4 *)(iVar4 + 0x74 + (int)ar4);
    puVar3[3] = ar4[6];
    puVar1 = PTR_FUN_8c1159f4;
    puVar3[4] = *(undefined4 *)(iVar4 + -0xc + (int)ar4);
    puVar2 = PTR_FUN_8c1159f8;
    *(undefined **)(iVar4 + (int)ar4) = puVar1;
    puVar1 = PTR_LAB_8c1159fc;
    *(undefined **)(iVar4 + 0x70 + (int)ar4) = puVar2;
    puVar2 = PTR_FUN_8c115a00;
    *(undefined **)(iVar4 + 0x74 + (int)ar4) = puVar1;
    ar4[6] = (int)puVar2;
    *(undefined4 *)(iVar4 + -0xc + (int)ar4) = 0;
    return puVar3;
  }
  iVar4 = (int)DAT_8c1159f0;
  *(undefined4 *)(iVar4 + (int)ar4) = *ar5;
  *(undefined4 *)(iVar4 + 0x70 + (int)ar4) = ar5[1];
  *(undefined4 *)(iVar4 + 0x74 + (int)ar4) = ar5[2];
  ar4[6] = ar5[3];
  *(undefined4 *)(iVar4 + -0xc + (int)ar4) = ar5[4];
  (**(code **)(*ar4 + 0x18))(*ar4,ar5,ar6,ar7);
  return (undefined4 *)0;
}



/* FUN_8c11596e @ 8c11596e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11596e(int *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  puVar1 = PTR_FUN_8c115a04;
  uVar7 = *ar5;
  uVar10 = ar5[1];
  iVar9 = *ar4;
  uVar6 = ar5[2];
  uVar8 = ar5[3];
  *(uint *)((int)DAT_8c1159f2 + (int)ar4) = uVar10;
  ar4[0xe] = uVar7 + 2;
  cVar2 = (*(code *)puVar1)(ar4);
  if (cVar2 == '\0') {
    iVar4 = (uVar10 - 1) * 2 + uVar7 + 2;
    ar4[0x10] = iVar4;
    iVar4 = (**(code **)(iVar9 + 0x10))(iVar9,iVar4 * 2);
    ar4[0x12] = iVar4;
    if (ar4[0x12] == 0) {
      uVar3 = (*(code *)PTR_FUN_8c115a0c)(ar4,2);
      return uVar3;
    }
    if (ar4[0x13] != 0) {
      (**(code **)(iVar9 + 0x18))(iVar9,ar4[0x13]);
      ar4[0x13] = 0;
    }
    iVar9 = 0;
    uVar5 = 0;
    if (uVar7 != 0) {
      do {
        iVar4 = uVar5 * 2;
        uVar5 = uVar5 + 1;
        *(undefined2 *)(iVar9 * 2 + ar4[0x12]) = *(undefined2 *)(iVar4 + uVar6);
        iVar9 = iVar9 + 1;
      } while (uVar5 < uVar7);
    }
    uVar6 = 0;
    if (uVar10 != 0) {
      do {
        iVar4 = uVar6 * 2;
        uVar6 = uVar6 + 1;
        *(undefined2 *)(iVar9 * 2 + ar4[0x12]) = *(undefined2 *)(iVar4 + uVar8);
        iVar9 = iVar9 + 1;
      } while (uVar6 < uVar10);
      uVar6 = 0;
      if (uVar10 != 0) {
        do {
          iVar4 = uVar6 * 2;
          uVar6 = uVar6 + 1;
          *(undefined2 *)(iVar9 * 2 + ar4[0x12]) = *(undefined2 *)(iVar4 + uVar8);
          iVar9 = iVar9 + 1;
        } while (uVar6 < uVar10);
      }
    }
    cVar2 = (*(code *)PTR_FUN_8c115b1c)(ar4);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}



/* FUN_8c115980 @ 8c115980 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c115980(undefined4 ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r0;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *unaff_r14;
  
  puVar1 = PTR_FUN_8c115a04;
  uVar6 = *ar5;
  uVar9 = ar5[1];
  iVar8 = *unaff_r14;
  uVar5 = ar5[2];
  uVar7 = ar5[3];
  *(uint *)(in_r0 + (int)unaff_r14) = uVar9;
  unaff_r14[0xe] = uVar6 + 2;
  uVar2 = (*(code *)puVar1)(unaff_r14,ar5,ar6,ar7);
  if ((uVar2 & 0xff) == 0) {
    iVar4 = (uVar9 - 1) * 2 + uVar6 + 2;
    unaff_r14[0x10] = iVar4;
    iVar4 = (**(code **)(iVar8 + 0x10))(iVar8,iVar4 * 2,ar6,ar7);
    unaff_r14[0x12] = iVar4;
    if (unaff_r14[0x12] == 0) {
      uVar3 = (*(code *)PTR_FUN_8c115a0c)(2);
      return uVar3;
    }
    if (unaff_r14[0x13] != 0) {
      (**(code **)(iVar8 + 0x18))(iVar8,unaff_r14[0x13],ar6,ar7);
      unaff_r14[0x13] = 0;
    }
    iVar8 = 0;
    uVar2 = 0;
    if (uVar6 != 0) {
      do {
        iVar4 = uVar2 * 2;
        uVar2 = uVar2 + 1;
        *(undefined2 *)(iVar8 * 2 + unaff_r14[0x12]) = *(undefined2 *)(iVar4 + uVar5);
        iVar8 = iVar8 + 1;
      } while (uVar2 < uVar6);
    }
    uVar2 = 0;
    if (uVar9 != 0) {
      do {
        iVar4 = uVar2 * 2;
        uVar2 = uVar2 + 1;
        *(undefined2 *)(iVar8 * 2 + unaff_r14[0x12]) = *(undefined2 *)(iVar4 + uVar7);
        iVar8 = iVar8 + 1;
      } while (uVar2 < uVar9);
      uVar2 = 0;
      if (uVar9 != 0) {
        do {
          iVar4 = uVar2 * 2;
          uVar2 = uVar2 + 1;
          *(undefined2 *)(iVar8 * 2 + unaff_r14[0x12]) = *(undefined2 *)(iVar4 + uVar7);
          iVar8 = iVar8 + 1;
        } while (uVar2 < uVar9);
      }
    }
    uVar2 = (*(code *)PTR_FUN_8c115b1c)(unaff_r14,uVar2,ar6,ar7);
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
  }
  return 1;
}



/* FUN_8c115ac8 @ 8c115ac8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c115ac8(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int a5;
  int iVar10;
  uint uStack_38;
  int iStack_34;
  ushort *puStack_30;
  ushort *puStack_24;
  
  uVar8 = *ar5;
  puStack_24 = (ushort *)ar5[2];
  puStack_30 = (ushort *)ar5[3];
  uVar9 = ar5[1];
  *(undefined2 *)(ar4 + 0x50) = 0;
  iVar4 = (int)DAT_8c115b12;
  *(undefined4 *)(iVar4 + ar4) = 0xffffffff;
  *(undefined2 *)(iVar4 + 0x6e + ar4) = 0;
  *(undefined4 *)(iVar4 + 0x80 + ar4) = 0;
  *(uint *)(iVar4 + 0x88 + ar4) = uVar9;
  if (uVar9 == 0) {
    *(undefined4 *)(DAT_8c115c14 + ar4) = 0;
  }
  else {
    *(uint *)(DAT_8c115b14 + ar4) = (uint)*puStack_30;
  }
  uVar5 = (*(code *)PTR_FUN_8c115c1c)(ar4,ar5,ar6,ar7);
  if ((uVar5 & 0xff) == 0) {
    piVar6 = (int *)(*(code *)PTR_FUN_8c115c20)(ar4,ar5,ar6,ar7);
    puVar2 = PTR_FUN_8c115c24;
    piVar6[1] = 0;
    piVar6[4] = 0;
    *piVar6 = 0;
    uVar5 = (*(code *)puVar2)(ar4,ar5,ar6,ar7);
    uVar1 = DAT_8c115c16;
    if ((uVar5 & 0xff) == 0) {
      a5 = 0;
      iStack_34 = 0;
      iVar10 = *(int *)(ar4 + 0x54);
      uStack_38 = 0;
      iVar4 = a5;
      if (uVar9 != 0) {
        do {
          a5 = iVar10;
          *(uint *)(a5 + 0xc) = (uint)puStack_30[uStack_38];
          if (iVar4 != 0) {
            *(int *)(iVar4 + 0x10) = a5;
          }
          uVar3 = uVar1;
          if (uStack_38 == 0) {
            uVar3 = 0;
          }
          *(undefined2 *)(a5 + 2) = uVar3;
          *(int **)(a5 + 8) = piVar6;
          *(int **)(a5 + 4) = piVar6;
          if (*(int *)(a5 + 0x18) == 0) {
            iVar10 = (*(code *)PTR_FUN_8c115c28)(ar4,a5,ar6,ar7);
          }
          else {
            iVar10 = *(int *)(a5 + 0x18);
          }
          iStack_34 = iStack_34 + 1;
          uStack_38 = uStack_38 + 1;
          iVar4 = a5;
        } while (uStack_38 < uVar9);
      }
      uStack_38 = 0;
      iVar4 = a5;
      if (uVar8 != 0) {
        do {
          a5 = iVar10;
          *(uint *)(a5 + 0xc) = (uint)*puStack_24;
          if (iVar4 != 0) {
            *(int *)(iVar4 + 0x10) = a5;
          }
          *(undefined2 *)(a5 + 2) = uVar1;
          *(int **)(a5 + 8) = piVar6;
          *(int **)(a5 + 4) = piVar6;
          if (*(int *)(a5 + 0x18) == 0) {
            iVar10 = (*(code *)PTR_FUN_8c115c28)(ar4,a5,ar6,ar7);
          }
          else {
            iVar10 = *(int *)(a5 + 0x18);
          }
          iStack_34 = iStack_34 + 1;
          uStack_38 = uStack_38 + 1;
          iVar4 = a5;
          puStack_24 = puStack_24 + 1;
        } while (uStack_38 < uVar8);
      }
      uStack_38 = 0;
      iVar4 = a5;
      iVar7 = iVar10;
      if (uVar9 != 0) {
        do {
          a5 = iVar7;
          *(uint *)(a5 + 0xc) = (uint)*puStack_30;
          if (iVar4 != 0) {
            *(int *)(iVar4 + 0x10) = a5;
          }
          *(undefined2 *)(a5 + 2) = uVar1;
          *(int **)(a5 + 8) = piVar6;
          *(int **)(a5 + 4) = piVar6;
          if (*(int *)(a5 + 0x18) == 0) {
            iVar7 = (*(code *)PTR_FUN_8c115ce8)(ar4,a5,ar6,ar7);
          }
          else {
            iVar7 = *(int *)(a5 + 0x18);
          }
          iStack_34 = iStack_34 + 1;
          uStack_38 = uStack_38 + 1;
          iVar4 = a5;
          puStack_30 = puStack_30 + 1;
        } while (uStack_38 < uVar9);
      }
      if (uVar9 < 2) {
        *(int *)(a5 + 0x10) = a5;
      }
      else {
        *(int *)(a5 + 0x10) = iVar10;
      }
      if (uVar9 == 0) {
        *(undefined2 *)(*(int *)(ar4 + 0x54) + 2) = 0;
      }
      *piVar6 = iStack_34;
      *(int *)(ar4 + 0x60) = a5;
      *(short *)(ar4 + 0x50) = (short)iStack_34;
      *(undefined1 *)(DAT_8c115ce0 + ar4) = 0;
      return 0;
    }
  }
  return 1;
}



/* FUN_8c115cec @ 8c115cec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c115cec(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  if (ar4[0x11] != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x11]);
    ar4[0x11] = 0;
  }
  if (ar4[0x12] != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x12]);
    ar4[0x12] = 0;
  }
  if (ar4[0x13] != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x13]);
    ar4[0x13] = 0;
  }
  if (*(int *)((int)DAT_8c115e1c + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c115e1c + (int)ar4));
    *(undefined4 *)((int)DAT_8c115e1c + (int)ar4) = 0;
  }
  if (*(int *)((int)DAT_8c115e1e + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c115e1e + (int)ar4));
    *(undefined4 *)((int)DAT_8c115e1e + (int)ar4) = 0;
  }
  if ((*(char *)((int)DAT_8c115e20 + (int)ar4) != '\0') &&
     (*(int *)((int)DAT_8c115e22 + (int)ar4) != 0)) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c115e22 + (int)ar4));
    *(undefined4 *)((int)DAT_8c115e22 + (int)ar4) = 0;
  }
  if (*(int *)((int)DAT_8c115e24 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c115e24 + (int)ar4));
    *(undefined4 *)((int)DAT_8c115e24 + (int)ar4) = 0;
  }
  if (*(int *)((int)DAT_8c115e26 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c115e26 + (int)ar4));
    *(undefined4 *)((int)DAT_8c115e26 + (int)ar4) = 0;
  }
  if (*(int *)((int)DAT_8c115e28 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c115e28 + (int)ar4));
    *(undefined4 *)((int)DAT_8c115e28 + (int)ar4) = 0;
  }
  if (*(int *)((int)DAT_8c115e2a + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c115e2a + (int)ar4));
    *(undefined4 *)((int)DAT_8c115e2a + (int)ar4) = 0;
  }
  if (*(int *)((int)DAT_8c115e2c + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c115e2c + (int)ar4));
    *(undefined4 *)((int)DAT_8c115f02 + (int)ar4) = 0;
  }
  if (*(int *)((int)DAT_8c115f04 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c115f04 + (int)ar4));
    *(undefined4 *)((int)DAT_8c115f04 + (int)ar4) = 0;
  }
  if (*(int *)((int)DAT_8c115f06 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c115f06 + (int)ar4));
    *(undefined4 *)((int)DAT_8c115f06 + (int)ar4) = 0;
  }
  if (*(int *)((int)DAT_8c115f08 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c115f08 + (int)ar4));
    *(undefined4 *)((int)DAT_8c115f08 + (int)ar4) = 0;
  }
  iVar1 = (int)DAT_8c115f0a;
  if (*(int *)(iVar1 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c115f0c + (int)ar4));
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)DAT_8c115f0e + (int)ar4));
    iVar1 = (int)DAT_8c115f0a;
    *(undefined4 *)(iVar1 + (int)ar4) = 0;
  }
  return iVar1;
}



/* FUN_8c115cf4 @ 8c115cf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c115cf4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int a4;
  int *unaff_r14;
  
  a4 = *unaff_r14;
  if (*(int *)(in_r0 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)(in_r0 + (int)unaff_r14),ar6,ar7);
    unaff_r14[0x11] = 0;
  }
  if (unaff_r14[0x12] != 0) {
    (**(code **)(a4 + 0x18))(a4,unaff_r14[0x12],ar6,ar7);
    unaff_r14[0x12] = 0;
  }
  if (unaff_r14[0x13] != 0) {
    (**(code **)(a4 + 0x18))(a4,unaff_r14[0x13],ar6,ar7);
    unaff_r14[0x13] = 0;
  }
  if (*(int *)((int)DAT_8c115e1c + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c115e1c + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)DAT_8c115e1c + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)DAT_8c115e1e + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c115e1e + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)DAT_8c115e1e + (int)unaff_r14) = 0;
  }
  if ((*(char *)((int)DAT_8c115e20 + (int)unaff_r14) != '\0') &&
     (*(int *)((int)DAT_8c115e22 + (int)unaff_r14) != 0)) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c115e22 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)DAT_8c115e22 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)DAT_8c115e24 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c115e24 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)DAT_8c115e24 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)DAT_8c115e26 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c115e26 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)DAT_8c115e26 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)DAT_8c115e28 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c115e28 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)DAT_8c115e28 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)DAT_8c115e2a + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c115e2a + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)DAT_8c115e2a + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)DAT_8c115e2c + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c115e2c + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)DAT_8c115f02 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)DAT_8c115f04 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c115f04 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)DAT_8c115f04 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)DAT_8c115f06 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c115f06 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)DAT_8c115f06 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)DAT_8c115f08 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c115f08 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)DAT_8c115f08 + (int)unaff_r14) = 0;
  }
  iVar1 = (int)DAT_8c115f0a;
  if (*(int *)(iVar1 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c115f0c + (int)unaff_r14),ar6,ar7);
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)DAT_8c115f0e + (int)unaff_r14),ar6,ar7);
    iVar1 = (int)DAT_8c115f0a;
    *(undefined4 *)(iVar1 + (int)unaff_r14) = 0;
  }
  return iVar1;
}



/* FUN_8c115ed8 @ 8c115ed8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c115ed8(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)ar5[1];
  piVar3 = (int *)ar5[1];
  piVar2 = ar5;
  while (piVar1 = piVar3, iVar4 < 2) {
    piVar3 = (int *)piVar1[1];
    piVar2 = piVar1;
    iVar4 = *(int *)piVar1[1];
  }
  iVar4 = (int)DAT_8c115f10;
  *piVar1 = *piVar1 + -1;
  piVar2[1] = *(int *)(iVar4 + ar4);
  *(int **)(iVar4 + ar4) = ar5;
  return iVar4;
}



/* FUN_8c115f18 @ 8c115f18 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c115f18(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *a5;
  int *piVar5;
  
  a5 = (int *)**(int **)(DAT_8c115fde + ar4);
  if (a5 == *(int **)(DAT_8c115fde + -4 + ar4)) {
    (*(code *)PTR_FUN_8c115fe4)(ar4,a5,ar6,ar7);
  }
  iVar2 = (int)DAT_8c115fde;
  a5[2] = ar5;
  if (a5 != *(int **)(iVar2 + ar4)) {
    do {
      piVar4 = (int *)a5[2];
      a5 = (int *)a5[1];
      iVar2 = *piVar4;
      while (iVar2 == 0) {
        piVar5 = (int *)piVar4[1];
        piVar3 = piVar4;
        if (piVar5 != (int *)0x0) {
          iVar2 = *piVar5 + -1;
          *piVar5 = iVar2;
          while (piVar1 = piVar5, iVar2 == 0) {
            piVar3 = (int *)piVar1[2];
            if ((piVar3 != (int *)0x0) && (iVar2 = *piVar3, *piVar3 = iVar2 + -1, iVar2 + -1 == 0))
            {
              a5 = (int *)*a5;
              if (a5 == (int *)*(int *)(DAT_8c115fe0 + ar4)) {
                (*(code *)PTR_FUN_8c115fe4)(ar4,a5,ar6,ar7);
              }
              a5[2] = piVar1[2];
            }
            piVar5 = (int *)piVar1[1];
            piVar3 = piVar1;
            if (piVar5 == (int *)0x0) break;
            iVar2 = *piVar5 + -1;
            *piVar5 = iVar2;
          }
        }
        iVar2 = (int)DAT_8c115fe2;
        piVar3[1] = *(int *)(iVar2 + ar4);
        *(int **)(iVar2 + ar4) = piVar4;
        piVar4 = (int *)piVar4[2];
        if (piVar4 == (int *)0x0) break;
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4;
      }
      iVar2 = (int)DAT_8c115fde;
    } while (a5 != *(int **)(iVar2 + ar4));
  }
  return iVar2;
}



/* FUN_8c115fec @ 8c115fec callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c116044) */
/* WARNING: Removing unreachable block (ram,0x8c116034) */
/* WARNING: Removing unreachable block (ram,0x8c116094) */
/* WARNING: Unknown calling convention */

int FUN_8c115fec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r3;
  uint uVar3;
  int iVar4;
  int a6;
  int a7;
  
  a6 = 0;
  if (*(char *)(DAT_8c1160de + ar4) == '\0') {
    if ((10 < *(uint *)(DAT_8c11622c + ar4)) ||
       (*(uint *)(DAT_8c11622e + ar4) >> 2 < (uint)*(ushort *)(ar4 + 0x50))) {
      *(undefined1 *)(DAT_8c116230 + ar4) = 1;
    }
  }
  else {
    iVar2 = 0;
    uVar3 = 0;
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 + *(int *)(DAT_8c1160e0 + ar4 + iVar2);
      iVar2 = iVar2 + 4;
    } while (iVar4 < 5);
    if (DAT_8c1160ec < uVar3) {
      uVar1 = (*(code *)PTR_libgcc_divide_helper_01051c_8c1160f0)(ar4,iVar2,0,uVar3);
    }
    else {
      uVar1 = (*(code *)PTR_libgcc_divide_helper_01051c_8c1160f0)(ar4,iVar2,0,uVar3 * 0x80);
    }
    *(undefined4 *)(DAT_8c1160e4 + ar4) = uVar1;
    iVar2 = (int)DAT_8c1160e6;
    iVar4 = *(int *)(iVar2 + ar4) - (uint)*(ushort *)(ar4 + 0x50);
    iVar2 = iVar4 * *(int *)(iVar2 + 0x14 + ar4) * *(int *)(iVar2 + 0x10 + ar4);
    if (iVar4 < 1) {
      iVar4 = DAT_8c1160f8;
      a7 = DAT_8c1160f8;
      if ((iVar2 < 1) && (iVar4 = iVar2, a7 = DAT_8c1160f8, iVar2 < DAT_8c1160f8)) {
        iVar4 = DAT_8c1160f8;
        a7 = DAT_8c1160f8;
      }
    }
    else {
      iVar4 = DAT_8c1160f4;
      a7 = DAT_8c1160f4;
      if ((-1 < iVar2) && (iVar4 = iVar2, DAT_8c1160f4 < iVar2)) {
        iVar4 = DAT_8c1160f4;
      }
    }
    iVar2 = (iVar4 >> 0xe) + (uint)*(ushort *)(DAT_8c1160e8 + ar4);
    if ((int)(uint)*(ushort *)(DAT_8c1160e8 + 2 + ar4) < iVar2) {
      *(undefined2 *)(DAT_8c1160ea + -2 + ar4) = *(undefined2 *)(DAT_8c1160ea + ar4);
    }
    else {
      *(short *)(DAT_8c1160e8 + ar4) = (short)iVar2;
    }
    uVar1 = 3;
    uVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c1160fc)(ar4,3,a6,a7);
    if (extraout_r3 < (int)(uVar3 & 0xffff)) {
      uVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c1160fc)(ar4,uVar1,a6,a7);
      *(short *)(DAT_8c1160e8 + ar4) = (short)uVar1;
    }
  }
  iVar2 = (int)DAT_8c116230;
  if (*(char *)(iVar2 + ar4) != '\0') {
    uVar3 = (uint)*(byte *)(DAT_8c116232 + ar4);
    iVar2 = uVar3 * 4;
    iVar4 = uVar3 + 1;
    *(uint *)(DAT_8c116234 + ar4 + iVar2) =
         (uint)*(ushort *)(ar4 + 0x50) * (uint)*(ushort *)(DAT_8c116232 + -0x3a + ar4) >> 3;
    *(uint *)(iVar2 + DAT_8c116236 + ar4) =
         (uint)*(ushort *)(ar4 + 0x50) * (uint)*(ushort *)(ar4 + 0x50) >> 3;
    if (iVar4 == 5) {
      iVar4 = a6;
    }
    iVar2 = (int)DAT_8c116232;
    *(char *)(iVar2 + ar4) = (char)iVar4;
  }
  return iVar2;
}



/* FUN_8c11617a @ 8c11617a callers=0 callees=2 */

/* WARNING: Switch with 1 destination removed at 0x8c1163a2 */
/* WARNING: Switch with 1 destination removed at 0x8c117400 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11617a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iStack_8;
  
  iVar2 = (int)DAT_8c116238;
  *(undefined4 *)((int)&iStack_8 + DAT_8c11623a + iVar2) = ar4;
  *(undefined4 *)((int)&iStack_8 + DAT_8c11623c + iVar2) = ar5;
  (&stack0x0000000f)[iVar2] =
       *(undefined1 *)(*(int *)((int)&iStack_8 + DAT_8c11623a + iVar2) + 0x7c);
  if (DAT_8c11624c < (int)(uint)*(ushort *)(*(int *)((int)&iStack_8 + DAT_8c11623a + iVar2) + 0x50))
  {
    return 0xffffffff;
  }
  *(int *)(&stack0x00000030 + iVar2) = (int)DAT_8c116240;
  *(int *)(&stack0x0000002c + iVar2) =
       (int)*(short *)((int)DAT_8c116242 + *(int *)((int)&iStack_8 + DAT_8c11623a + iVar2));
  *(undefined4 *)((int)&iStack_8 + DAT_8c116244 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11623a + iVar2) + 0x54);
  iVar6 = *(int *)((int)&iStack_8 + DAT_8c11623a + iVar2);
  *(int *)(DAT_8c116246 + iVar6) =
       *(int *)(DAT_8c116246 + iVar6) + *(int *)(&stack0x0000002c + iVar2);
  *(undefined4 *)(&stack0x00000034 + iVar2) = 0;
  while (*(uint *)(&stack0x00000034 + iVar2) <
         (uint)*(ushort *)(*(int *)((int)&iStack_8 + DAT_8c1163a8 + iVar2) + 0x50)) {
    iVar6 = (int)*(short *)(*(int *)((int)&iStack_8 + DAT_8c116244 + iVar2) + 2);
    *(int *)(&stack0x00000008 + iVar2) = iVar6;
    if (iVar6 < DAT_8c116248) {
      *(uint *)(&stack0x00000004 + iVar2) =
           (uint)(**(ushort **)(*(int *)((int)&iStack_8 + DAT_8c116244 + iVar2) + 0xc) >> 2);
      iVar4 = *(int *)(&stack0x00000008 + iVar2);
      *(int *)(&stack0x00000008 + iVar2) = iVar4 - *(int *)(&stack0x0000002c + iVar2);
      iVar6 = (int)DAT_8c11623c;
      **(undefined2 **)((int)&iStack_8 + DAT_8c116244 + iVar2) =
           (short)(iVar4 - *(int *)(&stack0x0000002c + iVar2));
      *(int *)(&stack0x00000008 + iVar2) =
           *(int *)(&stack0x00000008 + iVar2) +
           (int)*(short *)(*(int *)((int)&iStack_8 + iVar6 + iVar2) +
                          *(int *)(&stack0x00000004 + iVar2) * 2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + DAT_8c116244 + iVar2) + 2) =
           *(undefined2 *)(&stack0x00000008 + iVar2);
    }
    else {
      **(undefined2 **)((int)&iStack_8 + DAT_8c1163a6 + iVar2) =
           (short)*(undefined4 *)(&stack0x00000008 + iVar2);
    }
    if (*(int *)(&stack0x00000008 + iVar2) <= *(int *)(&stack0x00000030 + iVar2)) {
      if (*(int *)(&stack0x00000008 + iVar2) == *(int *)(&stack0x00000030 + iVar2)) {
        *(undefined4 *)(&stack0x00000004 + iVar2) =
             *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1163a6 + iVar2) + 0xc);
        while ((**(ushort **)(&stack0x00000004 + iVar2) & 1) == 0) {
          *(int *)(&stack0x00000004 + iVar2) = *(int *)(&stack0x00000004 + iVar2) + 2;
        }
        *(undefined2 *)(&stack0x00000000 + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x00000004 + iVar2) + 2);
        *(undefined2 *)(&stack0x00000002 + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x00000004 + iVar2) + 4);
        if ((*(ushort *)
              (*(int *)(*(int *)((int)&iStack_8 + DAT_8c1163a8 + iVar2) + (int)DAT_8c1163aa) +
              *(int *)(&stack0x00000000 + iVar2) * 2) & 2) != 0) {
          *(undefined4 *)((int)DAT_8c1163ac + *(int *)((int)&iStack_8 + DAT_8c1163a8 + iVar2)) =
               *(undefined4 *)((int)&iStack_8 + DAT_8c1163a6 + iVar2);
        }
      }
      else {
        *(undefined4 *)((int)DAT_8c1163ac + *(int *)((int)&iStack_8 + DAT_8c1163a8 + iVar2)) =
             *(undefined4 *)((int)&iStack_8 + DAT_8c1163a6 + iVar2);
      }
      *(undefined4 *)(&stack0x00000030 + iVar2) = *(undefined4 *)(&stack0x00000008 + iVar2);
    }
    iVar6 = (int)DAT_8c1163a6;
    piVar7 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c1163a6 + iVar2) + 8);
    *piVar7 = *piVar7 + 1;
    iVar4 = *(int *)((int)&iStack_8 + iVar6 + iVar2);
    iVar6 = (int)DAT_8c1163a6;
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)((int)&iStack_8 + DAT_8c1163a6 + iVar2) =
         *(undefined4 *)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x18);
    *(int *)(&stack0x00000034 + iVar2) = *(int *)(&stack0x00000034 + iVar2) + 1;
  }
  *(short *)((int)DAT_8c1163ae + *(int *)((int)&iStack_8 + DAT_8c1163a8 + iVar2)) =
       (short)*(undefined4 *)(&stack0x00000030 + iVar2);
  FUN_8c115fec(*(undefined4 *)((int)&iStack_8 + DAT_8c1163a8 + iVar2),ar5,ar6,ar7);
  iVar6 = *(int *)((int)&iStack_8 + DAT_8c1163a8 + iVar2);
  *(short *)(&stack0x0000002a + iVar2) =
       *(short *)(DAT_8c1163ae + -0x3c + iVar6) + *(short *)(DAT_8c1163ae + iVar6) +
       *(short *)((int)DAT_8c1163b0 + *(int *)((int)&iStack_8 + DAT_8c1163a8 + iVar2));
  *(uint *)(&stack0x00000048 + iVar2) =
       (uint)*(ushort *)(*(int *)((int)&iStack_8 + DAT_8c1163a8 + iVar2) + 0x50);
  *(uint *)(&stack0x00000044 + iVar2) =
       (uint)*(ushort *)(*(int *)((int)&iStack_8 + DAT_8c1163a8 + iVar2) + 100);
  *(uint *)(&stack0x00000040 + iVar2) =
       (uint)*(ushort *)(*(int *)((int)&iStack_8 + DAT_8c1163a8 + iVar2) + 0x70);
  *(undefined4 *)(&stack0x00000074 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1163a8 + iVar2) + 0x60);
  *(undefined4 *)(&stack0x00000070 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1163a8 + iVar2) + 0x6c);
  *(undefined4 *)(&stack0x0000006c + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1163a8 + iVar2) + 0x78);
  *(undefined4 *)((int)&iStack_8 + DAT_8c1163a6 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1163a8 + iVar2) + 0x54);
  iVar6 = 0;
  *(undefined4 *)(&stack0x00000064 + iVar2) = 0;
  do {
    *(int *)(&stack0x00000034 + iVar2) = iVar6;
    if ((uint)*(ushort *)(*(int *)((int)&iStack_8 + DAT_8c11749e + iVar2) + 0x50) <=
        *(uint *)(&stack0x00000034 + iVar2)) {
      *(undefined4 *)(&stack0x0000003c + iVar2) = *(undefined4 *)(&stack0x00000044 + iVar2);
      *(undefined4 *)((int)&iStack_8 + DAT_8c1174a0 + iVar2) =
           *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11749e + iVar2) + 0x68);
      *(undefined4 *)(&stack0x00000064 + iVar2) = 0;
      uVar9 = 0;
      while (*(uint *)(&stack0x00000034 + iVar2) = uVar9,
            uVar9 < *(uint *)(&stack0x0000003c + iVar2)) {
        iVar6 = (int)*(short *)(*(int *)((int)&iStack_8 + DAT_8c1174a0 + iVar2) + 2);
        *(int *)(&stack0x00000008 + iVar2) = iVar6;
        if (*(short *)(&stack0x0000002a + iVar2) < iVar6) {
          if ((*(int *)(*(int *)((int)&iStack_8 + DAT_8c117700 + iVar2) + 8) != 0) &&
             (piVar7 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c117700 + iVar2) + 8),
             iVar6 = *piVar7 + -1, *piVar7 = iVar6, iVar6 < 1)) {
            (*(code *)PTR_FUN_8c11770c)
                      (*(undefined4 *)((int)&iStack_8 + DAT_8c117702 + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117700 + iVar2) + 8),ar6,ar7)
            ;
          }
          if ((&stack0x0000000f)[iVar2] == '\0') {
            *(undefined4 *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c117700 + iVar2) + 0x14) + 0x10)
                 = 0;
          }
          else {
            **(undefined4 **)(*(int *)((int)&iStack_8 + DAT_8c11785e + iVar2) + 0x1c) = 0;
          }
          if (*(int *)((int)&iStack_8 + DAT_8c11785e + iVar2) == *(int *)(&stack0x00000070 + iVar2))
          {
            *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
            if (*(int *)((int)&iStack_8 + DAT_8c11785e + iVar2) ==
                *(int *)(*(int *)((int)&iStack_8 + DAT_8c117860 + iVar2) + 0x68)) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117860 + iVar2) + 0x68) = 0;
            }
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11785e + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + DAT_8c11785e + iVar2);
          }
          else {
            *(undefined4 *)(&stack0x00000004 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11785e + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11785e + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + DAT_8c11785e + iVar2);
            if (*(int *)(&stack0x00000064 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117860 + iVar2) + 0x68) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + DAT_8c11785e + iVar2) =
                 *(undefined4 *)(&stack0x00000004 + iVar2);
          }
          *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + -1;
        }
        else {
          *(undefined4 *)(&stack0x00000058 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1174a0 + iVar2) + 8);
          iVar6 = *(int *)(*(int *)((int)&iStack_8 + DAT_8c1174a0 + iVar2) + 0xc);
          *(int *)(&stack0x0000004c + iVar2) = iVar6;
          *(undefined2 *)(&stack0x00000024 + iVar2) = *(undefined2 *)(iVar6 + 2);
          *(undefined2 *)(&stack0x00000026 + iVar2) =
               *(undefined2 *)(*(int *)(&stack0x0000004c + iVar2) + 4);
          iVar6 = *(int *)((int)DAT_8c1174a2 + *(int *)((int)&iStack_8 + DAT_8c11749e + iVar2));
          *(int *)(&stack0x00000050 + iVar2) = iVar6;
          if (*(int *)(iVar6 + 4) == 0) {
            iVar4 = (int)DAT_8c1174a2;
            iVar6 = *(int *)((int)&iStack_8 + DAT_8c11749e + iVar2);
            uVar3 = (*(code *)PTR_FUN_8c1174ac)
                              (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
            *(undefined4 *)(iVar4 + iVar6) = uVar3;
          }
          else {
            *(undefined4 *)((int)DAT_8c1175c0 + *(int *)((int)&iStack_8 + DAT_8c1175be + iVar2)) =
                 *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
          }
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1175c2 + iVar2) + 0xc);
          **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
               *(undefined4 *)((int)DAT_8c1175c4 + *(int *)((int)&iStack_8 + DAT_8c1175be + iVar2));
          iVar6 = (int)DAT_8c1175c8;
          *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
               *(int *)(&stack0x00000008 + iVar2) +
               *(int *)((int)DAT_8c1175c6 + *(int *)((int)&iStack_8 + DAT_8c1175be + iVar2));
          *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          iVar6 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c1175be + iVar2) + iVar6) +
                          *(int *)(&stack0x00000024 + iVar2) * 4);
          *(int *)(&stack0x00000060 + iVar2) = iVar6;
          if (iVar6 == 0) {
            if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
              uVar3 = (*(code *)PTR_FUN_8c1175d0)
                                (*(undefined4 *)((int)&iStack_8 + DAT_8c1175be + iVar2),
                                 *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
              *(undefined4 *)(&stack0x00000068 + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(&stack0x00000068 + iVar2) =
                   *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            }
            *(undefined2 *)(*(int *)(&stack0x00000068 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000008 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) =
                 *(undefined4 *)(&stack0x0000004c + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) =
                 *(undefined4 *)((int)&iStack_8 + DAT_8c117700 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(int *)(&stack0x00000040 + iVar2) = *(int *)(&stack0x00000040 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
            if (*(int *)(&stack0x0000006c + iVar2) != 0) {
              *(undefined4 *)(*(int *)(&stack0x0000006c + iVar2) + 0x18) =
                   *(undefined4 *)(&stack0x00000068 + iVar2);
            }
            *(undefined4 *)(&stack0x0000006c + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
            *(undefined4 *)
             (*(int *)(*(int *)((int)&iStack_8 + DAT_8c117702 + iVar2) + (int)DAT_8c117704) +
             *(int *)(&stack0x00000024 + iVar2) * 4) = *(undefined4 *)(&stack0x0000006c + iVar2);
            if (*(int *)(*(int *)((int)&iStack_8 + DAT_8c117702 + iVar2) + 0x74) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117702 + iVar2) + 0x74) =
                   *(undefined4 *)(&stack0x0000006c + iVar2);
            }
          }
          else if (*(int *)(&stack0x00000008 + iVar2) < (int)*(short *)(iVar6 + 2)) {
            *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000008 + iVar2);
            *(undefined4 *)(&stack0x00000054 + iVar2) =
                 *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8);
            *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000058 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000054 + iVar2);
          }
          else {
            *(undefined4 *)(&stack0x00000054 + iVar2) =
                 *(undefined4 *)(*(int *)(*(int *)(&stack0x00000060 + iVar2) + 8) + 8);
            *(undefined4 *)(*(int *)(*(int *)(&stack0x00000060 + iVar2) + 8) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000058 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000054 + iVar2);
          }
          piVar7 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c117700 + iVar2) + 8);
          iVar6 = *piVar7 + -1;
          *piVar7 = iVar6;
          if (iVar6 < 1) {
            (*(code *)PTR_FUN_8c11770c)
                      (*(undefined4 *)((int)&iStack_8 + DAT_8c117702 + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117700 + iVar2) + 8),ar6,ar7)
            ;
          }
          *(undefined2 *)(*(int *)((int)&iStack_8 + DAT_8c117700 + iVar2) + 2) = DAT_8c117706;
          iVar6 = (int)DAT_8c117700;
          *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117700 + iVar2) + 8) = 0;
          *(undefined4 *)(&stack0x00000064 + iVar2) =
               *(undefined4 *)((int)&iStack_8 + iVar6 + iVar2);
          *(undefined4 *)((int)&iStack_8 + DAT_8c117700 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117700 + iVar2) + 0x18);
        }
        uVar9 = *(int *)(&stack0x00000034 + iVar2) + 1;
      }
      *(undefined4 *)(&stack0x00000038 + iVar2) = *(undefined4 *)(&stack0x00000040 + iVar2);
      *(undefined4 *)((int)&iStack_8 + DAT_8c11785e + iVar2) =
           *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117860 + iVar2) + 0x74);
      *(undefined4 *)(&stack0x00000064 + iVar2) = 0;
      uVar9 = 0;
      while (*(uint *)(&stack0x00000034 + iVar2) = uVar9,
            uVar9 < *(uint *)(&stack0x00000038 + iVar2)) {
        *(int *)(&stack0x00000008 + iVar2) =
             (int)*(short *)(*(int *)((int)&iStack_8 + DAT_8c11785e + iVar2) + 2);
        *(undefined2 *)(&stack0x00000024 + iVar2) =
             *(undefined2 *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c11785e + iVar2) + 0xc) + 2);
        *(undefined2 *)(&stack0x00000026 + iVar2) =
             *(undefined2 *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c11785e + iVar2) + 0xc) + 4);
        if ((int)*(short *)(&stack0x0000002a + iVar2) < *(int *)(&stack0x00000008 + iVar2)) {
          *(undefined4 *)
           (*(int *)(*(int *)((int)&iStack_8 + DAT_8c117ae0 + iVar2) + (int)DAT_8c117aec) +
           *(int *)(&stack0x00000024 + iVar2) * 4) = 0;
          if (*(int *)((int)&iStack_8 + DAT_8c117ae8 + iVar2) == *(int *)(&stack0x0000006c + iVar2))
          {
            *(undefined4 *)(&stack0x0000006c + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
            if (*(int *)((int)&iStack_8 + DAT_8c117ae8 + iVar2) ==
                *(int *)(*(int *)((int)&iStack_8 + DAT_8c117ae0 + iVar2) + 0x74)) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117ae0 + iVar2) + 0x74) = 0;
            }
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117ae8 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + DAT_8c117ae8 + iVar2);
          }
          else {
            *(undefined4 *)(&stack0x00000004 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117c64 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117c64 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + DAT_8c117c64 + iVar2);
            if (*(int *)(&stack0x00000064 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117c66 + iVar2) + 0x74) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + DAT_8c117c64 + iVar2) =
                 *(undefined4 *)(&stack0x00000004 + iVar2);
          }
          *(int *)(&stack0x00000040 + iVar2) = *(int *)(&stack0x00000040 + iVar2) + -1;
        }
        else {
          *(undefined4 *)(&stack0x00000058 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11785e + iVar2) + 8);
          *(undefined4 *)(&stack0x0000001c + iVar2) =
               *(undefined4 *)
                (*(int *)(*(int *)((int)&iStack_8 + DAT_8c117860 + iVar2) + (int)DAT_8c117862) +
                *(int *)(&stack0x00000024 + iVar2) * 4);
          *(undefined4 *)(&stack0x00000018 + iVar2) =
               *(undefined4 *)
                (*(int *)(*(int *)((int)&iStack_8 + DAT_8c117860 + iVar2) + (int)DAT_8c117862) +
                (*(int *)(&stack0x00000024 + iVar2) + 1) * 4);
          *(undefined4 *)(&stack0x0000005c + iVar2) =
               *(undefined4 *)
                (*(int *)(*(int *)((int)&iStack_8 + DAT_8c117860 + iVar2) + (int)DAT_8c117864) +
                *(int *)(&stack0x00000024 + iVar2) * 4);
          while (*(uint *)(&stack0x0000001c + iVar2) < *(uint *)(&stack0x00000018 + iVar2)) {
            iVar6 = **(int **)(&stack0x0000001c + iVar2);
            *(int *)(&stack0x00000020 + iVar2) = iVar6;
            *(short *)(&stack0x0000000c + iVar2) =
                 *(short *)(&stack0x00000008 + iVar2) +
                 *(short *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c117972 + iVar2) +
                                    (int)DAT_8c117974) + iVar6 * 2);
            *(undefined4 *)(&stack0x00000014 + iVar2) =
                 *(undefined4 *)
                  (*(int *)(*(int *)((int)&iStack_8 + DAT_8c117972 + iVar2) + 0x44) +
                  *(int *)(&stack0x00000020 + iVar2) * 4);
            *(undefined4 *)(&stack0x00000010 + iVar2) =
                 *(undefined4 *)
                  (*(int *)(*(int *)((int)&iStack_8 + DAT_8c117972 + iVar2) + 0x44) +
                  (*(int *)(&stack0x00000020 + iVar2) + 1) * 4);
            while (*(uint *)(&stack0x00000014 + iVar2) < *(uint *)(&stack0x00000010 + iVar2)) {
              puVar5 = (ushort *)
                       (**(int **)(&stack0x00000014 + iVar2) * 2 +
                       *(int *)(*(int *)((int)&iStack_8 + DAT_8c117972 + iVar2) + 0x48));
              *(ushort **)(&stack0x0000004c + iVar2) = puVar5;
              *(undefined4 *)(&stack0x00000060 + iVar2) =
                   **(undefined4 **)(&stack0x0000005c + iVar2);
              *(short *)(&stack0x00000028 + iVar2) =
                   *(short *)(&stack0x0000000c + iVar2) +
                   *(short *)(*(int *)((int)&iStack_8 + DAT_8c117976 + iVar2) +
                             (uint)(*puVar5 >> 2) * 2);
              if (*(short *)(&stack0x00000028 + iVar2) <= *(short *)(&stack0x0000002a + iVar2)) {
                if (*(int *)(&stack0x00000060 + iVar2) == 0) {
                  if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                    uVar3 = (*(code *)PTR_FUN_8c117980)
                                      (*(undefined4 *)((int)&iStack_8 + DAT_8c117972 + iVar2),
                                       *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
                    *(undefined4 *)(&stack0x00000074 + iVar2) = uVar3;
                  }
                  else {
                    *(undefined4 *)(&stack0x00000074 + iVar2) =
                         *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                  }
                  *(undefined2 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
                       *(undefined2 *)(&stack0x00000028 + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
                       *(undefined4 *)(&stack0x0000004c + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
                       *(undefined4 *)(&stack0x00000058 + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x10) = 0;
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) = 0;
                  **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                  *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
                  **(undefined4 **)(&stack0x0000005c + iVar2) =
                       *(undefined4 *)(&stack0x00000074 + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) =
                       *(undefined4 *)(&stack0x0000005c + iVar2);
                  iVar4 = *(int *)((int)&iStack_8 + DAT_8c117ae0 + iVar2);
                  iVar6 = *(int *)(&stack0x0000001c + iVar2) -
                          *(int *)((int)DAT_8c117ae6 +
                                  *(int *)((int)&iStack_8 + DAT_8c117ae0 + iVar2));
                  if (iVar6 < 0) {
                    iVar6 = iVar6 + 3;
                  }
                  *(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x1c) =
                       *(int *)(DAT_8c117ae2 + iVar4) * 4 + *(int *)(DAT_8c117ae4 + iVar4) +
                       (iVar6 >> 2) * 4;
                }
                else if (*(short *)(&stack0x00000028 + iVar2) <
                         *(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
                  *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
                       *(undefined2 *)(&stack0x00000028 + iVar2);
                  iVar6 = **(int **)(*(int *)(&stack0x00000060 + iVar2) + 8) + -1;
                  **(int **)(*(int *)(&stack0x00000060 + iVar2) + 8) = iVar6;
                  if (iVar6 < 1) {
                    (*(code *)PTR_FUN_8c11797c)
                              (*(undefined4 *)((int)&iStack_8 + DAT_8c117972 + iVar2),
                               *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8),ar6,ar7);
                  }
                  *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                       *(undefined4 *)(&stack0x00000058 + iVar2);
                  **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                }
              }
              *(int *)(&stack0x00000014 + iVar2) = *(int *)(&stack0x00000014 + iVar2) + 4;
              *(int *)(&stack0x0000005c + iVar2) = *(int *)(&stack0x0000005c + iVar2) + 4;
            }
            *(int *)(&stack0x0000001c + iVar2) = *(int *)(&stack0x0000001c + iVar2) + 4;
          }
          iVar6 = **(int **)(&stack0x00000058 + iVar2) + -1;
          **(int **)(&stack0x00000058 + iVar2) = iVar6;
          if (iVar6 < 1) {
            (*(code *)PTR_FUN_8c117af4)
                      (*(undefined4 *)((int)&iStack_8 + DAT_8c117ae0 + iVar2),
                       *(undefined4 *)(&stack0x00000058 + iVar2),ar6,ar7);
          }
          *(undefined2 *)(*(int *)((int)&iStack_8 + DAT_8c117ae8 + iVar2) + 2) = DAT_8c117aea;
          iVar6 = (int)DAT_8c117ae8;
          *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117ae8 + iVar2) + 8) = 0;
          *(undefined4 *)(&stack0x00000064 + iVar2) =
               *(undefined4 *)((int)&iStack_8 + iVar6 + iVar2);
          *(undefined4 *)((int)&iStack_8 + DAT_8c117ae8 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117ae8 + iVar2) + 0x18);
        }
        uVar9 = *(int *)(&stack0x00000034 + iVar2) + 1;
      }
      *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117c66 + iVar2) + 0x60) =
           *(undefined4 *)(&stack0x00000074 + iVar2);
      *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117c66 + iVar2) + 0x6c) =
           *(undefined4 *)(&stack0x00000070 + iVar2);
      *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117c66 + iVar2) + 0x78) =
           *(undefined4 *)(&stack0x0000006c + iVar2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + DAT_8c117c66 + iVar2) + 0x50) =
           *(undefined2 *)(&stack0x00000048 + iVar2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + DAT_8c117c66 + iVar2) + 100) =
           *(undefined2 *)(&stack0x00000044 + iVar2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + DAT_8c117c66 + iVar2) + 0x70) =
           *(undefined2 *)(&stack0x00000040 + iVar2);
      return 0;
    }
    *(int *)(&stack0x00000000 + iVar2) = (int)**(short **)((int)&iStack_8 + DAT_8c116490 + iVar2);
    *(undefined4 *)(&stack0x00000058 + iVar2) =
         *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c116490 + iVar2) + 4);
    puVar5 = *(ushort **)(*(int *)((int)&iStack_8 + DAT_8c116490 + iVar2) + 0xc);
    *(ushort **)(&stack0x0000004c + iVar2) = puVar5;
    uVar1 = *puVar5;
    *(uint *)(&stack0x00000008 + iVar2) = (uint)uVar1;
    if ((uVar1 & 2) == 0) {
      *(undefined4 *)(&stack0x00000004 + iVar2) = 1;
    }
    else {
      *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
    }
    if ((*(uint *)(&stack0x00000008 + iVar2) & 1) == 0) {
      iVar6 = *(int *)(&stack0x0000004c + iVar2);
      *(ushort **)(&stack0x0000004c + iVar2) = (ushort *)(iVar6 + 2);
      uVar1 = *(ushort *)(iVar6 + 2);
      *(uint *)(&stack0x00000008 + iVar2) = (uint)uVar1;
      uVar9 = (uint)(uVar1 >> 2);
      *(uint *)(&stack0xfffffffc + iVar2) = uVar9;
      *(short *)(&stack0x00000028 + iVar2) =
           *(short *)(*(int *)((int)&iStack_8 + DAT_8c116492 + iVar2) + uVar9 * 2) +
           (short)*(undefined4 *)(&stack0x00000000 + iVar2);
      if (((*(uint *)(&stack0x00000008 + iVar2) & 1) == 0) || ((&stack0x0000000f)[iVar2] != '\0')) {
        iVar6 = *(int *)(*(int *)((int)&iStack_8 + DAT_8c116490 + iVar2) + 0x10);
        *(int *)(&stack0x00000060 + iVar2) = iVar6;
        if (iVar6 == 0) {
          if (*(short *)(&stack0x00000028 + iVar2) <= *(short *)(&stack0x0000002a + iVar2)) {
            if (*(int *)(&stack0x00000004 + iVar2) == 0) {
              iVar6 = *(int *)((int)DAT_8c1165ac + *(int *)((int)&iStack_8 + DAT_8c1165aa + iVar2));
              *(int *)(&stack0x00000050 + iVar2) = iVar6;
              if (*(int *)(iVar6 + 4) == 0) {
                iVar4 = (int)DAT_8c1165ac;
                iVar6 = *(int *)((int)&iStack_8 + DAT_8c1165aa + iVar2);
                uVar3 = (*(code *)PTR_FUN_8c1165b8)
                                  (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                *(undefined4 *)(iVar4 + iVar6) = uVar3;
              }
              else {
                *(undefined4 *)((int)DAT_8c116714 + *(int *)((int)&iStack_8 + DAT_8c116712 + iVar2))
                     = *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
              }
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                   *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c116716 + iVar2) + 0xc);
              **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                   *(undefined4 *)
                    ((int)DAT_8c116718 + *(int *)((int)&iStack_8 + DAT_8c116712 + iVar2));
              *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                   *(int *)(&stack0x00000000 + iVar2) +
                   *(int *)((int)DAT_8c11671a + *(int *)((int)&iStack_8 + DAT_8c116712 + iVar2));
              *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
            }
            if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
              uVar3 = (*(code *)PTR_FUN_8c116724)
                                (*(undefined4 *)((int)&iStack_8 + DAT_8c116712 + iVar2),
                                 *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
              *(undefined4 *)(&stack0x00000074 + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(&stack0x00000074 + iVar2) =
                   *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            }
            *(undefined2 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000028 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
                 *(undefined4 *)(&stack0x0000004c + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x10) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) =
                 *(undefined4 *)((int)&iStack_8 + DAT_8c116716 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
            iVar6 = (int)DAT_8c116716;
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x1c) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c116716 + iVar2) + 0x1c);
            *(undefined4 *)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x10) =
                 *(undefined4 *)(&stack0x00000074 + iVar2);
          }
        }
        else if (*(short *)(&stack0x00000028 + iVar2) <
                 *(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar6 = *(int *)((int)DAT_8c116496 + *(int *)((int)&iStack_8 + DAT_8c116494 + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar6;
            if (*(int *)(iVar6 + 4) == 0) {
              iVar4 = (int)DAT_8c116496;
              iVar6 = *(int *)((int)&iStack_8 + DAT_8c116494 + iVar2);
              uVar3 = (*(code *)PTR_FUN_8c11649c)
                                (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)((int)DAT_8c1165ac + *(int *)((int)&iStack_8 + DAT_8c1165aa + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1165ae + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)DAT_8c1165b0 + *(int *)((int)&iStack_8 + DAT_8c1165aa + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)DAT_8c1165b2 + *(int *)((int)&iStack_8 + DAT_8c1165aa + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000028 + iVar2);
          iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
          *(int *)(&stack0x00000054 + iVar2) = iVar6;
          if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
            *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1;
            **(int **)(&stack0x00000054 + iVar2) = iVar6;
            if (iVar6 < 1) {
              FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + DAT_8c1165aa + iVar2),
                           *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
            }
          }
        }
        piVar7 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c116716 + iVar2) + 4);
        iVar6 = *piVar7 + -1;
        *piVar7 = iVar6;
        if (iVar6 < 1) {
          FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + DAT_8c116712 + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c116716 + iVar2) + 4),ar6,ar7)
          ;
        }
        if (*(short *)(*(int *)((int)&iStack_8 + DAT_8c116716 + iVar2) + 2) <=
            *(short *)(&stack0x0000002a + iVar2)) {
          iVar6 = *(int *)((int)&iStack_8 + DAT_8c1168de + iVar2);
          *(int *)(&stack0x00000064 + iVar2) = iVar6;
          *(undefined4 *)((int)&iStack_8 + DAT_8c1168de + iVar2) = *(undefined4 *)(iVar6 + 0x18);
          goto LAB_8c1173e8;
        }
        if ((*(uint *)(*(int *)((int)&iStack_8 + DAT_8c116716 + iVar2) + 0x14) <
             *(uint *)((int)DAT_8c11671c + *(int *)((int)&iStack_8 + DAT_8c116712 + iVar2))) ||
           (*(uint *)((int)DAT_8c11671e + *(int *)((int)&iStack_8 + DAT_8c116712 + iVar2)) <=
            *(uint *)(*(int *)((int)&iStack_8 + DAT_8c116716 + iVar2) + 0x14))) {
          if (*(int *)(*(int *)((int)&iStack_8 + DAT_8c11683c + iVar2) + 0x14) == 0)
          goto LAB_8c116732;
          if (*(int *)(*(int *)((int)&iStack_8 + DAT_8c11683c + iVar2) + 0x10) != 0) {
            iVar6 = *(int *)((int)&iStack_8 + DAT_8c1168de + iVar2);
            *(int *)(&stack0x00000064 + iVar2) = iVar6;
            *(undefined4 *)((int)&iStack_8 + DAT_8c1168de + iVar2) = *(undefined4 *)(iVar6 + 0x18);
            goto LAB_8c1173e8;
          }
          piVar7 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c11683c + iVar2) + 8);
          iVar6 = *piVar7 + -1;
          *piVar7 = iVar6;
          if (iVar6 < 1) {
            FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + DAT_8c11683e + iVar2),
                         *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11683c + iVar2) + 8),ar6,
                         ar7);
          }
          *(undefined4 *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c11683c + iVar2) + 0x14) + 0x10) =
               0;
          if (*(int *)((int)&iStack_8 + DAT_8c11683c + iVar2) != *(int *)(&stack0x00000074 + iVar2))
          {
            *(undefined4 *)((int)&iStack_8 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11683c + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11683c + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + DAT_8c11683c + iVar2);
            if (*(int *)(&stack0x00000064 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1168dc + iVar2) + 0x54) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + DAT_8c1168de + iVar2) =
                 *(undefined4 *)((int)&iStack_8 + iVar2);
            goto LAB_8c1173cc;
          }
        }
        else {
          **(undefined4 **)(*(int *)((int)&iStack_8 + DAT_8c116716 + iVar2) + 0x14) = 0;
LAB_8c116732:
          piVar7 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c11683c + iVar2) + 8);
          iVar6 = *piVar7 + -1;
          *piVar7 = iVar6;
          if (iVar6 < 1) {
            FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + DAT_8c11683e + iVar2),
                         *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11683c + iVar2) + 8),ar6,
                         ar7);
          }
          if (*(int *)(*(int *)((int)&iStack_8 + DAT_8c11683c + iVar2) + 0x10) != 0) {
            *(undefined4 *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c11683c + iVar2) + 0x10) + 0x14)
                 = 0;
          }
          if (*(int *)((int)&iStack_8 + DAT_8c11683c + iVar2) != *(int *)(&stack0x00000074 + iVar2))
          {
            *(undefined4 *)((int)&iStack_8 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11683c + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11683c + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + DAT_8c11683c + iVar2);
            if (*(int *)(&stack0x00000064 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11683e + iVar2) + 0x54) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + DAT_8c11683c + iVar2) =
                 *(undefined4 *)((int)&iStack_8 + iVar2);
            goto LAB_8c1173cc;
          }
        }
        *(undefined4 *)(&stack0x00000074 + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
        goto LAB_8c1173cc;
      }
      iVar6 = **(int **)(*(int *)((int)&iStack_8 + DAT_8c1168de + iVar2) + 0x1c);
      *(int *)(&stack0x00000060 + iVar2) = iVar6;
      if (iVar6 == 0) {
        if (*(int *)(&stack0x00000004 + iVar2) == 0) {
          iVar6 = *(int *)((int)DAT_8c116d38 + *(int *)((int)&iStack_8 + DAT_8c116d36 + iVar2));
          *(int *)(&stack0x00000050 + iVar2) = iVar6;
          if (*(int *)(iVar6 + 4) == 0) {
            iVar4 = (int)DAT_8c116d38;
            iVar6 = *(int *)((int)&iStack_8 + DAT_8c116d36 + iVar2);
            uVar3 = (*(code *)PTR_FUN_8c116d44)
                              (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
            *(undefined4 *)(iVar4 + iVar6) = uVar3;
          }
          else {
            *(undefined4 *)((int)DAT_8c116d38 + *(int *)((int)&iStack_8 + DAT_8c116d36 + iVar2)) =
                 *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
          }
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c116d3a + iVar2) + 0xc);
          **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
               *(undefined4 *)((int)DAT_8c116d3c + *(int *)((int)&iStack_8 + DAT_8c116d36 + iVar2));
          *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
               *(int *)(&stack0x00000000 + iVar2) +
               *(int *)((int)DAT_8c116d3e + *(int *)((int)&iStack_8 + DAT_8c116d36 + iVar2));
          *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
        }
        if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
          uVar3 = (*(code *)PTR_FUN_8c116d48)
                            (*(undefined4 *)((int)&iStack_8 + DAT_8c116d36 + iVar2),
                             *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
          *(undefined4 *)(&stack0x00000074 + iVar2) = uVar3;
        }
        else {
          *(undefined4 *)(&stack0x00000074 + iVar2) =
               *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
        }
        *(undefined2 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
             *(undefined2 *)(&stack0x00000028 + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
             *(undefined4 *)(&stack0x0000004c + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
             *(undefined4 *)(&stack0x00000058 + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x10) = 0;
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) =
             *(undefined4 *)((int)&iStack_8 + DAT_8c116de0 + iVar2);
        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
        *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
        iVar6 = (int)DAT_8c116de0;
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x1c) =
             *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c116de0 + iVar2) + 0x1c);
        **(undefined4 **)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x1c) =
             *(undefined4 *)(&stack0x00000074 + iVar2);
        *(undefined4 *)((int)&iStack_8 + DAT_8c116de2 + iVar2) =
             *(undefined4 *)(&stack0x00000074 + iVar2);
        if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
          uVar3 = (*(code *)PTR_FUN_8c116dec)
                            (*(undefined4 *)((int)&iStack_8 + DAT_8c116de4 + iVar2),
                             *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
          *(undefined4 *)(&stack0x00000068 + iVar2) = uVar3;
        }
        else {
          *(undefined4 *)(&stack0x00000068 + iVar2) =
               *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
        }
        *(undefined2 *)(*(int *)(&stack0x00000068 + iVar2) + 2) =
             *(undefined2 *)(&stack0x00000000 + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) =
             *(undefined4 *)(&stack0x0000004c + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 8) =
             *(undefined4 *)(&stack0x00000058 + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
        *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) =
             *(undefined4 *)((int)&iStack_8 + DAT_8c116f0c + iVar2);
        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
        *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
             *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
        if (*(int *)(&stack0x00000070 + iVar2) != 0) {
          *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) =
               *(undefined4 *)(&stack0x00000068 + iVar2);
        }
        *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
        if (*(int *)(*(int *)((int)&iStack_8 + DAT_8c116f0e + iVar2) + 0x68) == 0) {
          *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c116f0e + iVar2) + 0x68) =
               *(undefined4 *)(&stack0x00000070 + iVar2);
        }
        *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c116f0c + iVar2) + 0x10) =
             *(undefined4 *)(&stack0x00000070 + iVar2);
      }
      else {
        if (*(short *)(&stack0x00000028 + iVar2) <
            *(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar6 = *(int *)((int)DAT_8c1168e0 + *(int *)((int)&iStack_8 + DAT_8c1168dc + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar6;
            if (*(int *)(iVar6 + 4) == 0) {
              iVar4 = (int)DAT_8c1168e0;
              iVar6 = *(int *)((int)&iStack_8 + DAT_8c1168dc + iVar2);
              uVar3 = (*(code *)PTR_FUN_8c1168e8)
                                (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)((int)DAT_8c116a0a + *(int *)((int)&iStack_8 + DAT_8c116a08 + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c116a0c + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)DAT_8c116a0e + *(int *)((int)&iStack_8 + DAT_8c116a08 + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)DAT_8c116a10 + *(int *)((int)&iStack_8 + DAT_8c116a08 + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
            *(undefined4 *)(&stack0x00000004 + iVar2) = 1;
          }
          *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000028 + iVar2);
          iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
          *(int *)(&stack0x00000054 + iVar2) = iVar6;
          if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
            *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1;
            **(int **)(&stack0x00000054 + iVar2) = iVar6;
            if (iVar6 < 1) {
              FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + DAT_8c116a08 + iVar2),
                           *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
            }
          }
        }
        iVar6 = *(int *)(&stack0x00000060 + iVar2);
        *(int *)((int)&iStack_8 + DAT_8c116a12 + iVar2) = iVar6;
        iVar6 = *(int *)(iVar6 + 0x10);
        *(int *)(&stack0x00000060 + iVar2) = iVar6;
        if (iVar6 == 0) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar6 = *(int *)((int)DAT_8c116b2c + *(int *)((int)&iStack_8 + DAT_8c116b2a + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar6;
            if (*(int *)(iVar6 + 4) == 0) {
              iVar4 = (int)DAT_8c116b2c;
              iVar6 = *(int *)((int)&iStack_8 + DAT_8c116b2a + iVar2);
              uVar3 = (*(code *)PTR_FUN_8c116b38)
                                (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)((int)DAT_8c116c60 + *(int *)((int)&iStack_8 + DAT_8c116c5e + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c116c62 + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)DAT_8c116c64 + *(int *)((int)&iStack_8 + DAT_8c116c5e + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)DAT_8c116c66 + *(int *)((int)&iStack_8 + DAT_8c116c5e + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
            uVar3 = (*(code *)PTR_FUN_8c116c70)
                              (*(undefined4 *)((int)&iStack_8 + DAT_8c116c5e + iVar2),
                               *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
            *(undefined4 *)(&stack0x00000068 + iVar2) = uVar3;
          }
          else {
            *(undefined4 *)(&stack0x00000068 + iVar2) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
          }
          *(undefined2 *)(*(int *)(&stack0x00000068 + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000000 + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) =
               *(undefined4 *)(&stack0x0000004c + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 8) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) =
               *(undefined4 *)((int)&iStack_8 + DAT_8c116c68 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
               *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
          if (*(int *)(&stack0x00000070 + iVar2) != 0) {
            *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) =
                 *(undefined4 *)(&stack0x00000068 + iVar2);
          }
          *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
          if (*(int *)(*(int *)((int)&iStack_8 + DAT_8c116c5e + iVar2) + 0x68) == 0) {
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c116c5e + iVar2) + 0x68) =
                 *(undefined4 *)(&stack0x00000070 + iVar2);
          }
          *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c116c68 + iVar2) + 0x10) =
               *(undefined4 *)(&stack0x00000070 + iVar2);
        }
        else if (*(int *)(&stack0x00000000 + iVar2) <
                 (int)*(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar6 = *(int *)((int)DAT_8c116a0a + *(int *)((int)&iStack_8 + DAT_8c116a08 + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar6;
            if (*(int *)(iVar6 + 4) == 0) {
              iVar4 = (int)DAT_8c116a0a;
              iVar6 = *(int *)((int)&iStack_8 + DAT_8c116a08 + iVar2);
              uVar3 = (*(code *)PTR_FUN_8c116a18)
                                (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)((int)DAT_8c116b2c + *(int *)((int)&iStack_8 + DAT_8c116b2a + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c116b2e + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)DAT_8c116b30 + *(int *)((int)&iStack_8 + DAT_8c116b2a + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)DAT_8c116b32 + *(int *)((int)&iStack_8 + DAT_8c116b2a + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 0xc) =
               *(undefined4 *)(&stack0x0000004c + iVar2);
          *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000000 + iVar2);
          iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
          *(int *)(&stack0x00000054 + iVar2) = iVar6;
          if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
            *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            if ((*(int *)(&stack0x00000054 + iVar2) != 0) &&
               (iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1,
               **(int **)(&stack0x00000054 + iVar2) = iVar6, iVar6 < 1)) {
              FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + DAT_8c116b2a + iVar2),
                           *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
            }
          }
        }
      }
      piVar7 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c116f10 + iVar2) + 4);
      iVar6 = *piVar7 + -1;
      *piVar7 = iVar6;
      if (iVar6 < 1) {
        FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + DAT_8c116f0e + iVar2),
                     *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c116f10 + iVar2) + 4),ar6,ar7);
      }
      if (*(short *)(&stack0x0000002a + iVar2) <
          *(short *)(*(int *)((int)&iStack_8 + DAT_8c116f10 + iVar2) + 2)) {
        piVar7 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c116f10 + iVar2) + 8);
        iVar6 = *piVar7 + -1;
        *piVar7 = iVar6;
        if (iVar6 < 1) {
          FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + DAT_8c116f0e + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c116f10 + iVar2) + 8),ar6,ar7)
          ;
        }
        if ((*(uint *)(*(int *)((int)&iStack_8 + DAT_8c116f10 + iVar2) + 0x14) <
             *(uint *)((int)DAT_8c116f12 + *(int *)((int)&iStack_8 + DAT_8c116f0e + iVar2))) ||
           (*(uint *)((int)DAT_8c116f14 + *(int *)((int)&iStack_8 + DAT_8c116f0e + iVar2)) <=
            *(uint *)(*(int *)((int)&iStack_8 + DAT_8c116f10 + iVar2) + 0x14))) {
          if (*(int *)(*(int *)((int)&iStack_8 + DAT_8c11700e + iVar2) + 0x14) != 0) {
            *(undefined4 *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c11700e + iVar2) + 0x14) + 0x10)
                 = 0;
          }
        }
        else {
          **(undefined4 **)(*(int *)((int)&iStack_8 + DAT_8c116f10 + iVar2) + 0x14) = 0;
        }
        if (*(int *)((int)&iStack_8 + DAT_8c11700e + iVar2) == *(int *)(&stack0x00000074 + iVar2)) {
          *(undefined4 *)(&stack0x00000074 + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
        }
        else {
          *(undefined4 *)((int)&iStack_8 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11700e + iVar2) + 0x18);
          *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11700e + iVar2) + 0x18) =
               *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
          *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
               *(undefined4 *)((int)&iStack_8 + DAT_8c11700e + iVar2);
          if (*(int *)(&stack0x00000064 + iVar2) == 0) {
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117010 + iVar2) + 0x54) =
                 *(undefined4 *)((int)&iStack_8 + iVar2);
          }
          else {
            *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + iVar2);
          }
          *(undefined4 *)((int)&iStack_8 + DAT_8c11700e + iVar2) =
               *(undefined4 *)((int)&iStack_8 + iVar2);
        }
        goto LAB_8c1173cc;
      }
      iVar6 = *(int *)((int)&iStack_8 + DAT_8c11700e + iVar2);
      *(int *)(&stack0x00000064 + iVar2) = iVar6;
      *(undefined4 *)((int)&iStack_8 + DAT_8c11700e + iVar2) = *(undefined4 *)(iVar6 + 0x18);
    }
    else {
      if ((&stack0x0000000f)[iVar2] == '\0') {
        iVar6 = *(int *)(*(int *)((int)&iStack_8 + DAT_8c11700e + iVar2) + 0x10);
      }
      else {
        iVar6 = **(int **)(*(int *)((int)&iStack_8 + DAT_8c11700e + iVar2) + 0x1c);
      }
      *(int *)(&stack0x00000060 + iVar2) = iVar6;
      if (iVar6 == 0) {
        if (*(int *)(&stack0x00000000 + iVar2) <= (int)*(short *)(&stack0x0000002a + iVar2)) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar6 = *(int *)((int)DAT_8c11713c + *(int *)((int)&iStack_8 + DAT_8c11713a + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar6;
            if (*(int *)(iVar6 + 4) == 0) {
              iVar4 = (int)DAT_8c11713c;
              iVar6 = *(int *)((int)&iStack_8 + DAT_8c11713a + iVar2);
              uVar3 = (*(code *)PTR_FUN_8c11714c)
                                (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)((int)DAT_8c11727c + *(int *)((int)&iStack_8 + DAT_8c11727a + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11727e + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)DAT_8c117280 + *(int *)((int)&iStack_8 + DAT_8c11727a + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)DAT_8c117282 + *(int *)((int)&iStack_8 + DAT_8c11727a + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
            uVar3 = (*(code *)PTR_FUN_8c117288)
                              (*(undefined4 *)((int)&iStack_8 + DAT_8c11727a + iVar2),
                               *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
            *(undefined4 *)(&stack0x00000068 + iVar2) = uVar3;
          }
          else {
            *(undefined4 *)(&stack0x00000068 + iVar2) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
          }
          *(undefined2 *)(*(int *)(&stack0x00000068 + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000000 + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) =
               *(undefined4 *)(&stack0x0000004c + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 8) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) =
               *(undefined4 *)((int)&iStack_8 + DAT_8c11727e + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
               *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
          if (*(int *)(&stack0x00000070 + iVar2) != 0) {
            *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) =
                 *(undefined4 *)(&stack0x00000068 + iVar2);
          }
          *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
          if (*(int *)(*(int *)((int)&iStack_8 + DAT_8c11727a + iVar2) + 0x68) == 0) {
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11727a + iVar2) + 0x68) =
                 *(undefined4 *)(&stack0x00000070 + iVar2);
          }
          if ((&stack0x0000000f)[iVar2] == '\0') {
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11727e + iVar2) + 0x10) =
                 *(undefined4 *)(&stack0x00000070 + iVar2);
          }
          else {
            iVar6 = (int)DAT_8c1173ac;
            *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x1c) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) + 0x1c);
            **(undefined4 **)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x1c) =
                 *(undefined4 *)(&stack0x00000070 + iVar2);
          }
        }
      }
      else if (*(int *)(&stack0x00000000 + iVar2) <
               (int)*(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
        if (*(int *)(&stack0x00000004 + iVar2) == 0) {
          iVar6 = *(int *)((int)DAT_8c117012 + *(int *)((int)&iStack_8 + DAT_8c117010 + iVar2));
          *(int *)(&stack0x00000050 + iVar2) = iVar6;
          if (*(int *)(iVar6 + 4) == 0) {
            iVar4 = (int)DAT_8c117012;
            iVar6 = *(int *)((int)&iStack_8 + DAT_8c117010 + iVar2);
            uVar3 = (*(code *)PTR_FUN_8c117018)
                              (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
            *(undefined4 *)(iVar4 + iVar6) = uVar3;
          }
          else {
            *(undefined4 *)((int)DAT_8c11713c + *(int *)((int)&iStack_8 + DAT_8c11713a + iVar2)) =
                 *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
          }
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11713e + iVar2) + 0xc);
          **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
               *(undefined4 *)((int)DAT_8c117140 + *(int *)((int)&iStack_8 + DAT_8c11713a + iVar2));
          *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
               *(int *)(&stack0x00000000 + iVar2) +
               *(int *)((int)DAT_8c117142 + *(int *)((int)&iStack_8 + DAT_8c11713a + iVar2));
          *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
        }
        *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
             *(undefined2 *)(&stack0x00000000 + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 0xc) =
             *(undefined4 *)(&stack0x0000004c + iVar2);
        iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
        *(int *)(&stack0x00000054 + iVar2) = iVar6;
        if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
          *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          if ((*(int *)(&stack0x00000054 + iVar2) != 0) &&
             (iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1,
             **(int **)(&stack0x00000054 + iVar2) = iVar6, iVar6 < 1)) {
            (*(code *)PTR_FUN_8c117148)
                      (*(undefined4 *)((int)&iStack_8 + DAT_8c11713a + iVar2),
                       *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
          }
        }
      }
      piVar7 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) + 4);
      iVar6 = *piVar7 + -1;
      *piVar7 = iVar6;
      if (iVar6 < 1) {
        (*(code *)PTR_FUN_8c1173b8)
                  (*(undefined4 *)((int)&iStack_8 + DAT_8c1173ae + iVar2),
                   *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) + 4),ar6,ar7);
      }
      if ((*(short *)(*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) + 2) <=
           *(short *)(&stack0x0000002a + iVar2)) ||
         (*(int *)(*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) + 0x10) != 0)) {
        iVar6 = *(int *)((int)&iStack_8 + DAT_8c1174a0 + iVar2);
        *(int *)(&stack0x00000064 + iVar2) = iVar6;
        *(undefined4 *)((int)&iStack_8 + DAT_8c1174a0 + iVar2) = *(undefined4 *)(iVar6 + 0x18);
        goto LAB_8c1173e8;
      }
      piVar7 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) + 8);
      iVar6 = *piVar7 + -1;
      *piVar7 = iVar6;
      if (iVar6 < 1) {
        (*(code *)PTR_FUN_8c1173b8)
                  (*(undefined4 *)((int)&iStack_8 + DAT_8c1173ae + iVar2),
                   *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) + 8),ar6,ar7);
      }
      if ((&stack0x0000000f)[iVar2] == '\0') {
        puVar8 = *(undefined4 **)(*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) + 0x1c);
LAB_8c11734a:
        *puVar8 = 0;
      }
      else {
        if ((*(uint *)((int)DAT_8c1173b0 + *(int *)((int)&iStack_8 + DAT_8c1173ae + iVar2)) <=
             *(uint *)(*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) + 0x14)) &&
           (*(uint *)(*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) + 0x14) <
            *(uint *)((int)DAT_8c1173b2 + *(int *)((int)&iStack_8 + DAT_8c1173ae + iVar2)))) {
          puVar8 = *(undefined4 **)(*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) + 0x14);
          goto LAB_8c11734a;
        }
        if (*(int *)(*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) + 0x14) != 0) {
          *(undefined4 *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) + 0x14) + 0x10) =
               0;
        }
      }
      if (*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) == *(int *)(&stack0x00000074 + iVar2)) {
        *(undefined4 *)(&stack0x00000074 + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
      }
      else {
        *(undefined4 *)(&stack0xfffffffc + iVar2) =
             *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) + 0x18);
        *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1173ac + iVar2) + 0x18) =
             *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
             *(undefined4 *)((int)&iStack_8 + DAT_8c1173ac + iVar2);
        if (*(int *)(&stack0x00000064 + iVar2) == 0) {
          *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11749e + iVar2) + 0x54) =
               *(undefined4 *)(&stack0xfffffffc + iVar2);
        }
        else {
          *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
               *(undefined4 *)(&stack0xfffffffc + iVar2);
        }
        *(undefined4 *)((int)&iStack_8 + DAT_8c1174a0 + iVar2) =
             *(undefined4 *)(&stack0xfffffffc + iVar2);
      }
LAB_8c1173cc:
      *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + -1;
    }
LAB_8c1173e8:
    iVar6 = *(int *)(&stack0x00000034 + iVar2) + 1;
  } while( true );
}



/* FUN_8c117bac @ 8c117bac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c117bac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  ushort *puVar8;
  int iStack_8;
  
  iVar2 = (int)DAT_8c117c6a;
  *(undefined4 *)((int)&iStack_8 + DAT_8c117c6c + iVar2) = ar4;
  *(undefined4 *)((int)&iStack_8 + DAT_8c117c64 + iVar2) = ar5;
  (&stack0x0000000f)[iVar2] =
       *(undefined1 *)(*(int *)((int)&iStack_8 + DAT_8c117c6c + iVar2) + 0x7c);
  if (DAT_8c117c78 < *(ushort *)(*(int *)((int)&iStack_8 + DAT_8c117c6c + iVar2) + 0x50)) {
    return 0xffffffff;
  }
  *(int *)(&stack0x00000038 + iVar2) = (int)DAT_8c117c6e;
  *(undefined2 *)(&stack0x00000036 + iVar2) =
       *(undefined2 *)((int)DAT_8c117c70 + *(int *)((int)&iStack_8 + DAT_8c117c6c + iVar2));
  *(undefined4 *)((int)&iStack_8 + DAT_8c117c72 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117c6c + iVar2) + 0x54);
  iVar4 = *(int *)((int)&iStack_8 + DAT_8c117c6c + iVar2);
  *(int *)(DAT_8c117c74 + iVar4) =
       *(int *)(DAT_8c117c74 + iVar4) + (int)*(short *)(&stack0x00000036 + iVar2);
  iVar4 = 0;
  while (*(int *)(&stack0x0000003c + iVar2) = iVar4,
        *(uint *)(&stack0x0000003c + iVar2) <
        (uint)*(ushort *)(*(int *)((int)&iStack_8 + DAT_8c117dc6 + iVar2) + 0x50)) {
    *(uint *)(&stack0x00000008 + iVar2) =
         (uint)(**(ushort **)(*(int *)((int)&iStack_8 + DAT_8c117c72 + iVar2) + 0xc) >> 2);
    iVar4 = (int)*(short *)(*(int *)((int)&iStack_8 + DAT_8c117c72 + iVar2) + 2);
    *(int *)(&stack0x00000004 + iVar2) = iVar4;
    if (iVar4 < DAT_8c117c76) {
      iVar7 = *(int *)(&stack0x00000004 + iVar2);
      *(int *)(&stack0x00000004 + iVar2) = iVar7 - *(short *)(&stack0x00000036 + iVar2);
      iVar4 = (int)DAT_8c117c64;
      **(undefined2 **)((int)&iStack_8 + DAT_8c117c72 + iVar2) =
           (short)(iVar7 - *(short *)(&stack0x00000036 + iVar2));
      *(int *)(&stack0x00000004 + iVar2) =
           *(int *)(&stack0x00000004 + iVar2) +
           (int)*(short *)(*(int *)((int)&iStack_8 + iVar4 + iVar2) +
                          *(int *)(&stack0x00000008 + iVar2) * 2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + DAT_8c117c72 + iVar2) + 2) =
           *(undefined2 *)(&stack0x00000004 + iVar2);
    }
    else {
      **(undefined2 **)((int)&iStack_8 + DAT_8c117dc4 + iVar2) =
           (short)*(undefined4 *)(&stack0x00000004 + iVar2);
    }
    if (*(int *)(&stack0x00000004 + iVar2) <= *(int *)(&stack0x00000038 + iVar2)) {
      if (*(int *)(&stack0x00000004 + iVar2) == *(int *)(&stack0x00000038 + iVar2)) {
        *(undefined4 *)(&stack0x00000000 + iVar2) =
             *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117dc4 + iVar2) + 0xc);
        while ((**(ushort **)(&stack0x00000000 + iVar2) & 1) == 0) {
          *(int *)(&stack0x00000000 + iVar2) = *(int *)(&stack0x00000000 + iVar2) + 2;
        }
        *(undefined2 *)(&stack0xfffffffc + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x00000000 + iVar2) + 2);
        *(undefined2 *)(&stack0xfffffffe + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x00000000 + iVar2) + 4);
        if ((*(ushort *)
              (*(int *)(*(int *)((int)&iStack_8 + DAT_8c117dc6 + iVar2) + (int)DAT_8c117dc8) +
              *(int *)(&stack0xfffffffc + iVar2) * 2) & 2) != 0) {
          *(undefined4 *)((int)DAT_8c117dca + *(int *)((int)&iStack_8 + DAT_8c117dc6 + iVar2)) =
               *(undefined4 *)((int)&iStack_8 + DAT_8c117dc4 + iVar2);
        }
      }
      else {
        *(undefined4 *)((int)DAT_8c117dca + *(int *)((int)&iStack_8 + DAT_8c117dc6 + iVar2)) =
             *(undefined4 *)((int)&iStack_8 + DAT_8c117dc4 + iVar2);
      }
      *(undefined4 *)(&stack0x00000038 + iVar2) = *(undefined4 *)(&stack0x00000004 + iVar2);
    }
    iVar4 = (int)DAT_8c117dc4;
    piVar5 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c117dc4 + iVar2) + 8);
    *piVar5 = *piVar5 + 1;
    iVar7 = *(int *)((int)&iStack_8 + iVar4 + iVar2);
    iVar4 = (int)DAT_8c117dc4;
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar7 + 8);
    *(undefined4 *)((int)&iStack_8 + DAT_8c117dc4 + iVar2) =
         *(undefined4 *)(*(int *)((int)&iStack_8 + iVar4 + iVar2) + 0x18);
    iVar4 = *(int *)(&stack0x0000003c + iVar2) + 1;
  }
  *(undefined2 *)((int)DAT_8c117dcc + *(int *)((int)&iStack_8 + DAT_8c117dc6 + iVar2)) =
       *(undefined2 *)(&stack0x00000038 + iVar2);
  (*(code *)PTR_FUN_8c117dd4)(*(undefined4 *)((int)&iStack_8 + DAT_8c117dc6 + iVar2),ar5,ar6,ar7);
  iVar4 = *(int *)((int)&iStack_8 + DAT_8c117dc6 + iVar2);
  *(short *)(&stack0x00000034 + iVar2) =
       *(short *)(DAT_8c117dcc + -0x3c + iVar4) + *(short *)(DAT_8c117dcc + iVar4) +
       *(short *)((int)DAT_8c117dce + *(int *)((int)&iStack_8 + DAT_8c117dc6 + iVar2));
  *(uint *)(&stack0x00000048 + iVar2) =
       (uint)*(ushort *)(*(int *)((int)&iStack_8 + DAT_8c117dc6 + iVar2) + 0x50);
  *(uint *)(&stack0x00000044 + iVar2) =
       (uint)*(ushort *)(*(int *)((int)&iStack_8 + DAT_8c117dc6 + iVar2) + 100);
  *(undefined4 *)(&stack0x00000074 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117dc6 + iVar2) + 0x60);
  *(undefined4 *)(&stack0x00000070 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117dc6 + iVar2) + 0x6c);
  *(undefined4 *)((int)&iStack_8 + DAT_8c117dc4 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117dc6 + iVar2) + 0x54);
  iVar4 = 0;
  *(undefined4 *)(&stack0x00000068 + iVar2) = 0;
  do {
    *(int *)(&stack0x0000003c + iVar2) = iVar4;
    if ((uint)*(ushort *)(*(int *)((int)&iStack_8 + DAT_8c118d32 + iVar2) + 0x50) <=
        *(uint *)(&stack0x0000003c + iVar2)) {
      *(undefined4 *)(&stack0x00000040 + iVar2) = *(undefined4 *)(&stack0x00000044 + iVar2);
      *(undefined4 *)((int)&iStack_8 + DAT_8c118d34 + iVar2) =
           *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118d32 + iVar2) + 0x68);
      *(undefined4 *)(&stack0x00000068 + iVar2) = 0;
      *(undefined4 *)(&stack0x0000003c + iVar2) = 0;
      while (*(uint *)(&stack0x0000003c + iVar2) < *(uint *)(&stack0x00000040 + iVar2)) {
        *(int *)(&stack0x00000008 + iVar2) =
             (int)*(short *)(*(int *)((int)&iStack_8 + DAT_8c118d34 + iVar2) + 2);
        *(undefined2 *)(&stack0x0000002c + iVar2) =
             *(undefined2 *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c118d34 + iVar2) + 0xc) + 2);
        *(undefined2 *)(&stack0x0000002e + iVar2) =
             *(undefined2 *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c118d34 + iVar2) + 0xc) + 4);
        if ((int)*(short *)(&stack0x00000034 + iVar2) < *(int *)(&stack0x00000008 + iVar2)) {
          *(undefined4 *)
           (*(int *)(*(int *)((int)&iStack_8 + DAT_8c1191f2 + iVar2) + (int)DAT_8c1191f4) +
           (*(int *)(&stack0x0000002c + iVar2) * 2 + 1) * 4) = 0;
          if (*(int *)((int)&iStack_8 + DAT_8c1191f6 + iVar2) == *(int *)(&stack0x00000070 + iVar2))
          {
            *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
            if (*(int *)((int)&iStack_8 + DAT_8c1191f6 + iVar2) ==
                *(int *)(*(int *)((int)&iStack_8 + DAT_8c1191f2 + iVar2) + 0x68)) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1191f2 + iVar2) + 0x68) = 0;
            }
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1191f6 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + DAT_8c1191f6 + iVar2);
          }
          else {
            *(undefined4 *)(&stack0x00000004 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1191f6 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1191f6 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + DAT_8c1191f6 + iVar2);
            if (*(int *)(&stack0x00000068 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1191f2 + iVar2) + 0x68) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + DAT_8c1191f6 + iVar2) =
                 *(undefined4 *)(&stack0x00000004 + iVar2);
          }
          *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + -1;
        }
        else {
          (&stack0x00000007)[iVar2] = 0;
          *(undefined4 *)(&stack0x00000058 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118d34 + iVar2) + 8);
          *(undefined4 *)(&stack0x00000020 + iVar2) =
               *(undefined4 *)
                (*(int *)(*(int *)((int)&iStack_8 + DAT_8c118d32 + iVar2) + (int)DAT_8c118d36) +
                *(int *)(&stack0x0000002c + iVar2) * 4);
          *(undefined4 *)(&stack0x0000001c + iVar2) =
               *(undefined4 *)
                (*(int *)(*(int *)((int)&iStack_8 + DAT_8c118d32 + iVar2) + (int)DAT_8c118d36) +
                (*(int *)(&stack0x0000002c + iVar2) + 1) * 4);
          while (*(uint *)(&stack0x00000020 + iVar2) < *(uint *)(&stack0x0000001c + iVar2)) {
            iVar4 = **(int **)(&stack0x00000020 + iVar2);
            *(int *)(&stack0x00000028 + iVar2) = iVar4;
            *(short *)(&stack0x00000032 + iVar2) =
                 (short)*(undefined4 *)(&stack0x00000008 + iVar2) +
                 *(short *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c118e1e + iVar2) +
                                    (int)DAT_8c118e20) + iVar4 * 2);
            *(undefined4 *)(&stack0x00000018 + iVar2) =
                 *(undefined4 *)
                  (*(int *)(*(int *)((int)&iStack_8 + DAT_8c118e1e + iVar2) + 0x44) +
                  *(int *)(&stack0x00000028 + iVar2) * 4);
            *(undefined4 *)(&stack0x00000014 + iVar2) =
                 *(undefined4 *)
                  (*(int *)(*(int *)((int)&iStack_8 + DAT_8c118e1e + iVar2) + 0x44) +
                  (*(int *)(&stack0x00000028 + iVar2) + 1) * 4);
            while (*(uint *)(&stack0x00000018 + iVar2) < *(uint *)(&stack0x00000014 + iVar2)) {
              iVar4 = **(int **)(&stack0x00000018 + iVar2);
              *(int *)(&stack0x00000010 + iVar2) = iVar4;
              puVar8 = (ushort *)
                       (iVar4 * 2 + *(int *)(*(int *)((int)&iStack_8 + DAT_8c118e1e + iVar2) + 0x48)
                       );
              *(ushort **)(&stack0x0000004c + iVar2) = puVar8;
              *(short *)(&stack0x00000030 + iVar2) =
                   *(short *)(*(int *)((int)&iStack_8 + DAT_8c118e22 + iVar2) +
                             (uint)(*puVar8 >> 2) * 2) + *(short *)(&stack0x00000032 + iVar2);
              if (*(short *)(&stack0x00000030 + iVar2) <= *(short *)(&stack0x00000034 + iVar2)) {
                iVar4 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c118e1e + iVar2) + 0x4c) +
                                *(int *)(&stack0x00000010 + iVar2) * 4);
                *(int *)(&stack0x00000064 + iVar2) = iVar4;
                if (iVar4 == 0) {
                  if ((&stack0x00000007)[iVar2] == '\0') {
                    iVar4 = *(int *)((int)DAT_8c118f28 +
                                    *(int *)((int)&iStack_8 + DAT_8c118f26 + iVar2));
                    *(int *)(&stack0x00000050 + iVar2) = iVar4;
                    if (*(int *)(iVar4 + 4) == 0) {
                      iVar7 = (int)DAT_8c118f28;
                      iVar4 = *(int *)((int)&iStack_8 + DAT_8c118f26 + iVar2);
                      uVar3 = (*(code *)PTR_FUN_8c118f38)
                                        (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                      *(undefined4 *)(iVar7 + iVar4) = uVar3;
                    }
                    else {
                      *(undefined4 *)
                       ((int)DAT_8c11908a + *(int *)((int)&iStack_8 + DAT_8c119088 + iVar2)) =
                           *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                    }
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                         *(undefined4 *)(&stack0x00000058 + iVar2);
                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                         *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11908c + iVar2) + 0xc);
                    **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                         *(undefined4 *)
                          ((int)DAT_8c11908e + *(int *)((int)&iStack_8 + DAT_8c119088 + iVar2));
                    *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                         *(int *)(&stack0x00000008 + iVar2) +
                         *(int *)((int)DAT_8c119090 +
                                 *(int *)((int)&iStack_8 + DAT_8c119088 + iVar2));
                    *(undefined4 *)(&stack0x00000058 + iVar2) =
                         *(undefined4 *)(&stack0x00000050 + iVar2);
                    (&stack0x00000007)[iVar2] = 1;
                  }
                  if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                    uVar3 = (*(code *)PTR_FUN_8c119098)
                                      (*(undefined4 *)((int)&iStack_8 + DAT_8c119088 + iVar2),
                                       *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
                    *(undefined4 *)(&stack0x00000074 + iVar2) = uVar3;
                  }
                  else {
                    *(undefined4 *)(&stack0x00000074 + iVar2) =
                         *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                  }
                  *(undefined2 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
                       *(undefined2 *)(&stack0x00000030 + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
                       *(undefined4 *)(&stack0x0000004c + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
                       *(undefined4 *)(&stack0x00000058 + iVar2);
                  **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                  *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
                  *(undefined4 *)
                   (*(int *)(*(int *)((int)&iStack_8 + DAT_8c119088 + iVar2) + 0x4c) +
                   *(int *)(&stack0x00000010 + iVar2) * 4) =
                       *(undefined4 *)(&stack0x00000074 + iVar2);
                }
                else if (*(short *)(&stack0x00000030 + iVar2) < *(short *)(iVar4 + 2)) {
                  *(undefined2 *)(*(int *)(&stack0x00000064 + iVar2) + 2) =
                       *(undefined2 *)(&stack0x00000030 + iVar2);
                  if ((&stack0x00000007)[iVar2] == '\0') {
                    iVar4 = *(int *)((int)DAT_8c118e24 +
                                    *(int *)((int)&iStack_8 + DAT_8c118e1e + iVar2));
                    *(int *)(&stack0x00000050 + iVar2) = iVar4;
                    if (*(int *)(iVar4 + 4) == 0) {
                      iVar7 = (int)DAT_8c118e24;
                      iVar4 = *(int *)((int)&iStack_8 + DAT_8c118e1e + iVar2);
                      uVar3 = (*(code *)PTR_FUN_8c118e2c)
                                        (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                      *(undefined4 *)(iVar7 + iVar4) = uVar3;
                    }
                    else {
                      *(undefined4 *)
                       ((int)DAT_8c118f28 + *(int *)((int)&iStack_8 + DAT_8c118f26 + iVar2)) =
                           *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                    }
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                         *(undefined4 *)(&stack0x00000058 + iVar2);
                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                         *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118f2a + iVar2) + 0xc);
                    **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                         *(undefined4 *)
                          ((int)DAT_8c118f2c + *(int *)((int)&iStack_8 + DAT_8c118f26 + iVar2));
                    *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                         *(int *)(&stack0x00000008 + iVar2) +
                         *(int *)((int)DAT_8c118f2e +
                                 *(int *)((int)&iStack_8 + DAT_8c118f26 + iVar2));
                    *(undefined4 *)(&stack0x00000058 + iVar2) =
                         *(undefined4 *)(&stack0x00000050 + iVar2);
                    (&stack0x00000007)[iVar2] = 1;
                  }
                  iVar4 = *(int *)(*(int *)(&stack0x00000064 + iVar2) + 8);
                  *(int *)(&stack0x00000054 + iVar2) = iVar4;
                  if (iVar4 != *(int *)(&stack0x00000058 + iVar2)) {
                    *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 8) =
                         *(undefined4 *)(&stack0x00000058 + iVar2);
                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                    iVar4 = **(int **)(&stack0x00000054 + iVar2) + -1;
                    **(int **)(&stack0x00000054 + iVar2) = iVar4;
                    if (iVar4 < 1) {
                      (*(code *)PTR_FUN_8c118f34)
                                (*(undefined4 *)((int)&iStack_8 + DAT_8c118f26 + iVar2),
                                 *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
                    }
                  }
                }
              }
              *(int *)(&stack0x00000018 + iVar2) = *(int *)(&stack0x00000018 + iVar2) + 4;
            }
            *(int *)(&stack0x00000020 + iVar2) = *(int *)(&stack0x00000020 + iVar2) + 4;
          }
          piVar5 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c11908c + iVar2) + 8);
          iVar4 = *piVar5 + -1;
          *piVar5 = iVar4;
          if (iVar4 < 1) {
            (*(code *)PTR_FUN_8c11909c)
                      (*(undefined4 *)((int)&iStack_8 + DAT_8c119088 + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11908c + iVar2) + 8),ar6,ar7)
            ;
          }
          *(undefined2 *)(*(int *)((int)&iStack_8 + DAT_8c11908c + iVar2) + 2) = DAT_8c119092;
          iVar4 = (int)DAT_8c11908c;
          *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11908c + iVar2) + 8) = 0;
          *(undefined4 *)(&stack0x00000068 + iVar2) =
               *(undefined4 *)((int)&iStack_8 + iVar4 + iVar2);
          *(undefined4 *)((int)&iStack_8 + DAT_8c11908c + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11908c + iVar2) + 0x18);
        }
        *(int *)(&stack0x0000003c + iVar2) = *(int *)(&stack0x0000003c + iVar2) + 1;
      }
      *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1191f2 + iVar2) + 0x60) =
           *(undefined4 *)(&stack0x00000074 + iVar2);
      *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1191f2 + iVar2) + 0x6c) =
           *(undefined4 *)(&stack0x00000070 + iVar2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + DAT_8c1191f2 + iVar2) + 0x50) =
           *(undefined2 *)(&stack0x00000048 + iVar2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + DAT_8c1191f2 + iVar2) + 100) =
           *(undefined2 *)(&stack0x00000044 + iVar2);
      return 0;
    }
    *(int *)(&stack0x00000000 + iVar2) = (int)**(short **)((int)&iStack_8 + DAT_8c117ed2 + iVar2);
    *(undefined4 *)(&stack0x00000058 + iVar2) =
         *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117ed2 + iVar2) + 4);
    puVar8 = *(ushort **)(*(int *)((int)&iStack_8 + DAT_8c117ed2 + iVar2) + 0xc);
    *(ushort **)(&stack0x0000004c + iVar2) = puVar8;
    uVar1 = *puVar8;
    *(uint *)(&stack0x00000008 + iVar2) = (uint)uVar1;
    if ((uVar1 & 2) == 0) {
      *(undefined4 *)(&stack0x00000004 + iVar2) = 1;
    }
    else {
      *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
    }
    if ((*(uint *)(&stack0x00000008 + iVar2) & 1) == 0) {
      iVar4 = *(int *)(&stack0x0000004c + iVar2);
      *(ushort **)(&stack0x0000004c + iVar2) = (ushort *)(iVar4 + 2);
      uVar1 = *(ushort *)(iVar4 + 2);
      *(uint *)(&stack0x00000008 + iVar2) = (uint)uVar1;
      if (((uVar1 & 1) == 0) || ((&stack0x0000000f)[iVar2] != '\0')) {
        iVar4 = *(int *)(&stack0x0000004c + iVar2) -
                *(int *)(*(int *)((int)&iStack_8 + DAT_8c117ed4 + iVar2) + 0x48);
        *(int *)(&stack0x00000010 + iVar2) = (int)(iVar4 + (uint)(iVar4 < 0)) >> 1;
        sVar6 = *(short *)(*(int *)((int)&iStack_8 + DAT_8c117ed6 + iVar2) +
                          (*(uint *)(&stack0x00000008 + iVar2) >> 2) * 2) +
                (short)*(undefined4 *)(&stack0x00000000 + iVar2);
        *(short *)(&stack0x00000030 + iVar2) = sVar6;
        if (sVar6 <= *(short *)(&stack0x00000034 + iVar2)) {
          iVar4 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c117ed4 + iVar2) + 0x4c) +
                          *(int *)(&stack0x00000010 + iVar2) * 4);
          *(int *)(&stack0x00000064 + iVar2) = iVar4;
          if (iVar4 == 0) {
            if (*(int *)(&stack0x00000004 + iVar2) == 0) {
              iVar4 = *(int *)((int)DAT_8c117fe2 + *(int *)((int)&iStack_8 + DAT_8c117fe0 + iVar2));
              *(int *)(&stack0x00000050 + iVar2) = iVar4;
              if (*(int *)(iVar4 + 4) == 0) {
                iVar7 = (int)DAT_8c117fe2;
                iVar4 = *(int *)((int)&iStack_8 + DAT_8c117fe0 + iVar2);
                uVar3 = (*(code *)PTR_FUN_8c117ff4)
                                  (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                *(undefined4 *)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)((int)DAT_8c118084 + *(int *)((int)&iStack_8 + DAT_8c118082 + iVar2))
                     = *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
              }
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                   *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118086 + iVar2) + 0xc);
              **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                   *(undefined4 *)
                    ((int)DAT_8c118088 + *(int *)((int)&iStack_8 + DAT_8c118082 + iVar2));
              *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                   *(int *)(&stack0x00000000 + iVar2) +
                   *(int *)((int)DAT_8c11808a + *(int *)((int)&iStack_8 + DAT_8c118082 + iVar2));
              *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
            }
            if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
              uVar3 = (*(code *)PTR_FUN_8c118090)
                                (*(undefined4 *)((int)&iStack_8 + DAT_8c118082 + iVar2),
                                 *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
              *(undefined4 *)(&stack0x00000074 + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(&stack0x00000074 + iVar2) =
                   *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            }
            *(undefined2 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000030 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
                 *(undefined4 *)(&stack0x0000004c + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
            *(undefined4 *)
             (*(int *)(*(int *)((int)&iStack_8 + DAT_8c1181d0 + iVar2) + 0x4c) +
             *(int *)(&stack0x00000010 + iVar2) * 4) = *(undefined4 *)(&stack0x00000074 + iVar2);
          }
          else if (*(short *)(&stack0x00000030 + iVar2) < *(short *)(iVar4 + 2)) {
            if (*(int *)(&stack0x00000004 + iVar2) == 0) {
              iVar4 = *(int *)((int)DAT_8c117ed8 + *(int *)((int)&iStack_8 + DAT_8c117ed4 + iVar2));
              *(int *)(&stack0x00000050 + iVar2) = iVar4;
              if (*(int *)(iVar4 + 4) == 0) {
                iVar7 = (int)DAT_8c117ed8;
                iVar4 = *(int *)((int)&iStack_8 + DAT_8c117ed4 + iVar2);
                uVar3 = (*(code *)PTR_FUN_8c117ee0)
                                  (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                *(undefined4 *)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)((int)DAT_8c117fe2 + *(int *)((int)&iStack_8 + DAT_8c117fe0 + iVar2))
                     = *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
              }
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                   *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c117fe4 + iVar2) + 0xc);
              **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                   *(undefined4 *)
                    ((int)DAT_8c117fe6 + *(int *)((int)&iStack_8 + DAT_8c117fe0 + iVar2));
              *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                   *(int *)(&stack0x00000000 + iVar2) +
                   *(int *)((int)DAT_8c117fe8 + *(int *)((int)&iStack_8 + DAT_8c117fe0 + iVar2));
              *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
            }
            *(undefined2 *)(*(int *)(&stack0x00000064 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000030 + iVar2);
            iVar4 = *(int *)(*(int *)(&stack0x00000064 + iVar2) + 8);
            *(int *)(&stack0x00000054 + iVar2) = iVar4;
            if (iVar4 != *(int *)(&stack0x00000058 + iVar2)) {
              *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 8) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              iVar4 = **(int **)(&stack0x00000054 + iVar2) + -1;
              **(int **)(&stack0x00000054 + iVar2) = iVar4;
              if (iVar4 < 1) {
                (*(code *)PTR_FUN_8c117ff0)
                          (*(undefined4 *)((int)&iStack_8 + DAT_8c117fe0 + iVar2),
                           *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
              }
            }
          }
        }
        piVar5 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c1181d2 + iVar2) + 4);
        iVar4 = *piVar5 + -1;
        *piVar5 = iVar4;
        if (iVar4 < 1) {
          (*(code *)PTR_FUN_8c1181d8)
                    (*(undefined4 *)((int)&iStack_8 + DAT_8c1181d0 + iVar2),
                     *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1181d2 + iVar2) + 4),ar6,ar7);
        }
        if (*(short *)(&stack0x00000034 + iVar2) <
            *(short *)(*(int *)((int)&iStack_8 + DAT_8c1181d2 + iVar2) + 2)) {
          piVar5 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c1181d2 + iVar2) + 8);
          iVar4 = *piVar5 + -1;
          *piVar5 = iVar4;
          if (iVar4 < 1) {
            (*(code *)PTR_FUN_8c1181d8)
                      (*(undefined4 *)((int)&iStack_8 + DAT_8c1181d0 + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1181d2 + iVar2) + 8),ar6,ar7)
            ;
          }
          iVar7 = *(int *)((int)&iStack_8 + DAT_8c1181d0 + iVar2);
          iVar4 = *(int *)(*(int *)((int)&iStack_8 + DAT_8c1181d2 + iVar2) + 0xc) -
                  *(int *)(iVar7 + 0x48);
          *(undefined4 *)(*(int *)(iVar7 + 0x4c) + ((int)(iVar4 + (uint)(iVar4 < 0)) >> 1) * 4) = 0;
          if (*(int *)((int)&iStack_8 + DAT_8c1181d2 + iVar2) == *(int *)(&stack0x00000074 + iVar2))
          {
            *(undefined4 *)(&stack0x00000074 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
          }
          else {
            *(undefined4 *)(&stack0xfffffffc + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1181d2 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1181d2 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + DAT_8c1181d2 + iVar2);
            if (*(int *)(&stack0x00000068 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1181d0 + iVar2) + 0x54) =
                   *(undefined4 *)(&stack0xfffffffc + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18) =
                   *(undefined4 *)(&stack0xfffffffc + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + DAT_8c1181d2 + iVar2) =
                 *(undefined4 *)(&stack0xfffffffc + iVar2);
          }
          goto LAB_8c118c66;
        }
        iVar4 = *(int *)((int)&iStack_8 + DAT_8c1181d2 + iVar2);
        *(int *)(&stack0x00000068 + iVar2) = iVar4;
        *(undefined4 *)((int)&iStack_8 + DAT_8c1181d2 + iVar2) = *(undefined4 *)(iVar4 + 0x18);
      }
      else {
        *(undefined2 *)(&stack0xfffffffc + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x0000004c + iVar2) + 2);
        *(undefined2 *)(&stack0xfffffffe + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x0000004c + iVar2) + 4);
        *(short *)(&stack0x00000030 + iVar2) =
             *(short *)(*(int *)((int)&iStack_8 + DAT_8c118288 + iVar2) +
                       (*(uint *)(&stack0x00000008 + iVar2) >> 2) * 2) +
             (short)*(undefined4 *)(&stack0x00000000 + iVar2);
        *(int *)(&stack0x00000024 + iVar2) = *(int *)(&stack0xfffffffc + iVar2) * 2;
        iVar4 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c11828a + iVar2) +
                                 (int)DAT_8c11828c) + *(int *)(&stack0xfffffffc + iVar2) * 8);
        *(int *)(&stack0x00000060 + iVar2) = iVar4;
        if (*(short *)(&stack0x00000030 + iVar2) <= *(short *)(&stack0x00000034 + iVar2)) {
          if (iVar4 == 0) {
            if (*(int *)(&stack0x00000004 + iVar2) == 0) {
              iVar4 = *(int *)((int)DAT_8c11839a + *(int *)((int)&iStack_8 + DAT_8c118398 + iVar2));
              *(int *)(&stack0x00000050 + iVar2) = iVar4;
              if (*(int *)(iVar4 + 4) == 0) {
                iVar7 = (int)DAT_8c11839a;
                iVar4 = *(int *)((int)&iStack_8 + DAT_8c118398 + iVar2);
                uVar3 = (*(code *)PTR_FUN_8c1183ac)
                                  (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                *(undefined4 *)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)((int)DAT_8c118500 + *(int *)((int)&iStack_8 + DAT_8c1184fe + iVar2))
                     = *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
              }
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                   *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118502 + iVar2) + 0xc);
              **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                   *(undefined4 *)
                    ((int)DAT_8c118504 + *(int *)((int)&iStack_8 + DAT_8c1184fe + iVar2));
              *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                   *(int *)(&stack0x00000000 + iVar2) +
                   *(int *)((int)DAT_8c118506 + *(int *)((int)&iStack_8 + DAT_8c1184fe + iVar2));
              *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
              *(undefined4 *)(&stack0x00000004 + iVar2) = 1;
            }
            if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
              uVar3 = (*(code *)PTR_FUN_8c118510)
                                (*(undefined4 *)((int)&iStack_8 + DAT_8c1184fe + iVar2),
                                 *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
              *(undefined4 *)(&stack0x00000074 + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(&stack0x00000074 + iVar2) =
                   *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            }
            *(undefined2 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000030 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
                 *(undefined4 *)(&stack0x0000004c + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
            *(undefined4 *)
             (*(int *)(*(int *)((int)&iStack_8 + DAT_8c1184fe + iVar2) + (int)DAT_8c118508) +
             *(int *)(&stack0x00000024 + iVar2) * 4) = *(undefined4 *)(&stack0x00000074 + iVar2);
          }
          else if (*(short *)(&stack0x00000030 + iVar2) < *(short *)(iVar4 + 2)) {
            if (*(int *)(&stack0x00000004 + iVar2) == 0) {
              iVar4 = *(int *)((int)DAT_8c11828e + *(int *)((int)&iStack_8 + DAT_8c11828a + iVar2));
              *(int *)(&stack0x00000050 + iVar2) = iVar4;
              if (*(int *)(iVar4 + 4) == 0) {
                iVar7 = (int)DAT_8c11828e;
                iVar4 = *(int *)((int)&iStack_8 + DAT_8c11828a + iVar2);
                uVar3 = (*(code *)PTR_FUN_8c118294)
                                  (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                *(undefined4 *)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)((int)DAT_8c11839a + *(int *)((int)&iStack_8 + DAT_8c118398 + iVar2))
                     = *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
              }
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                   *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c11839c + iVar2) + 0xc);
              **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                   *(undefined4 *)
                    ((int)DAT_8c11839e + *(int *)((int)&iStack_8 + DAT_8c118398 + iVar2));
              *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                   *(int *)(&stack0x00000000 + iVar2) +
                   *(int *)((int)DAT_8c1183a0 + *(int *)((int)&iStack_8 + DAT_8c118398 + iVar2));
              *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
              *(undefined4 *)(&stack0x00000004 + iVar2) = 1;
            }
            *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000030 + iVar2);
            iVar4 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
            *(int *)(&stack0x00000054 + iVar2) = iVar4;
            if (iVar4 != *(int *)(&stack0x00000058 + iVar2)) {
              *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              iVar4 = **(int **)(&stack0x00000054 + iVar2) + -1;
              **(int **)(&stack0x00000054 + iVar2) = iVar4;
              if (iVar4 < 1) {
                (*(code *)PTR_FUN_8c1183a8)
                          (*(undefined4 *)((int)&iStack_8 + DAT_8c118398 + iVar2),
                           *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
              }
            }
          }
        }
        if (*(int *)(&stack0x00000000 + iVar2) <= (int)*(short *)(&stack0x00000034 + iVar2)) {
          iVar7 = *(int *)(&stack0x00000024 + iVar2);
          iVar4 = *(int *)((int)&iStack_8 + DAT_8c1184fe + iVar2);
          *(int *)(&stack0x00000024 + iVar2) = iVar7 + 1;
          iVar4 = *(int *)(*(int *)(iVar4 + DAT_8c118508) + (iVar7 + 1) * 4);
          *(int *)(&stack0x0000005c + iVar2) = iVar4;
          if (iVar4 == 0) {
            if (*(int *)(&stack0x00000004 + iVar2) == 0) {
              iVar4 = *(int *)((int)DAT_8c118620 + *(int *)((int)&iStack_8 + DAT_8c11861e + iVar2));
              *(int *)(&stack0x00000050 + iVar2) = iVar4;
              if (*(int *)(iVar4 + 4) == 0) {
                iVar7 = (int)DAT_8c118620;
                iVar4 = *(int *)((int)&iStack_8 + DAT_8c11861e + iVar2);
                uVar3 = (*(code *)PTR_FUN_8c118630)
                                  (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                *(undefined4 *)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)((int)DAT_8c1186c0 + *(int *)((int)&iStack_8 + DAT_8c1186be + iVar2))
                     = *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
              }
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                   *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1186c2 + iVar2) + 0xc);
              **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                   *(undefined4 *)
                    ((int)DAT_8c1186c4 + *(int *)((int)&iStack_8 + DAT_8c1186be + iVar2));
              *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                   *(int *)(&stack0x00000000 + iVar2) +
                   *(int *)((int)DAT_8c1186c6 + *(int *)((int)&iStack_8 + DAT_8c1186be + iVar2));
              *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
            }
            if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
              uVar3 = (*(code *)PTR_FUN_8c1186cc)
                                (*(undefined4 *)((int)&iStack_8 + DAT_8c1186be + iVar2),
                                 *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
              *(undefined4 *)(&stack0x0000006c + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(&stack0x0000006c + iVar2) =
                   *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            }
            *(undefined2 *)(*(int *)(&stack0x0000006c + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000000 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x0000006c + iVar2) + 0xc) =
                 *(undefined4 *)(&stack0x0000004c + iVar2);
            *(undefined4 *)(*(int *)(&stack0x0000006c + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x0000006c + iVar2) + 0x18);
            if (*(int *)(&stack0x00000070 + iVar2) != 0) {
              *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) =
                   *(undefined4 *)(&stack0x0000006c + iVar2);
            }
            *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x0000006c + iVar2);
            if (*(int *)(*(int *)((int)&iStack_8 + DAT_8c118822 + iVar2) + 0x68) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118822 + iVar2) + 0x68) =
                   *(undefined4 *)(&stack0x00000070 + iVar2);
            }
            *(undefined4 *)
             (*(int *)(*(int *)((int)&iStack_8 + DAT_8c118822 + iVar2) + (int)DAT_8c118824) +
             *(int *)(&stack0x00000024 + iVar2) * 4) = *(undefined4 *)(&stack0x00000070 + iVar2);
          }
          else if (*(int *)(&stack0x00000000 + iVar2) < (int)*(short *)(iVar4 + 2)) {
            if (*(int *)(&stack0x00000004 + iVar2) == 0) {
              iVar4 = *(int *)((int)DAT_8c118500 + *(int *)((int)&iStack_8 + DAT_8c1184fe + iVar2));
              *(int *)(&stack0x00000050 + iVar2) = iVar4;
              if (*(int *)(iVar4 + 4) == 0) {
                iVar7 = (int)DAT_8c118500;
                iVar4 = *(int *)((int)&iStack_8 + DAT_8c1184fe + iVar2);
                uVar3 = (*(code *)PTR_FUN_8c118514)
                                  (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                *(undefined4 *)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)((int)DAT_8c118620 + *(int *)((int)&iStack_8 + DAT_8c11861e + iVar2))
                     = *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
              }
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                   *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118622 + iVar2) + 0xc);
              **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                   *(undefined4 *)
                    ((int)DAT_8c118624 + *(int *)((int)&iStack_8 + DAT_8c11861e + iVar2));
              *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                   *(int *)(&stack0x00000000 + iVar2) +
                   *(int *)((int)DAT_8c118626 + *(int *)((int)&iStack_8 + DAT_8c11861e + iVar2));
              *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
            }
            *(undefined2 *)(*(int *)(&stack0x0000005c + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000000 + iVar2);
            iVar4 = *(int *)(*(int *)(&stack0x0000005c + iVar2) + 8);
            *(int *)(&stack0x00000054 + iVar2) = iVar4;
            if (iVar4 != *(int *)(&stack0x00000058 + iVar2)) {
              *(undefined4 *)(*(int *)(&stack0x0000005c + iVar2) + 8) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              if ((*(int *)(&stack0x00000054 + iVar2) != 0) &&
                 (iVar4 = **(int **)(&stack0x00000054 + iVar2) + -1,
                 **(int **)(&stack0x00000054 + iVar2) = iVar4, iVar4 < 1)) {
                (*(code *)PTR_FUN_8c11862c)
                          (*(undefined4 *)((int)&iStack_8 + DAT_8c11861e + iVar2),
                           *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
              }
            }
          }
        }
        piVar5 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c118826 + iVar2) + 4);
        iVar4 = *piVar5 + -1;
        *piVar5 = iVar4;
        if (iVar4 < 1) {
          (*(code *)PTR_FUN_8c11882c)
                    (*(undefined4 *)((int)&iStack_8 + DAT_8c118822 + iVar2),
                     *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118826 + iVar2) + 4),ar6,ar7);
        }
        if (*(short *)(&stack0x00000034 + iVar2) <
            *(short *)(*(int *)((int)&iStack_8 + DAT_8c118826 + iVar2) + 2)) {
          piVar5 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c118826 + iVar2) + 8);
          iVar4 = *piVar5 + -1;
          *piVar5 = iVar4;
          if (iVar4 < 1) {
            (*(code *)PTR_FUN_8c11882c)
                      (*(undefined4 *)((int)&iStack_8 + DAT_8c118822 + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118826 + iVar2) + 8),ar6,ar7)
            ;
          }
          iVar7 = *(int *)((int)&iStack_8 + DAT_8c118822 + iVar2);
          iVar4 = *(int *)(*(int *)((int)&iStack_8 + DAT_8c118826 + iVar2) + 0xc) -
                  *(int *)(iVar7 + 0x48);
          *(undefined4 *)(*(int *)(iVar7 + 0x4c) + ((int)(iVar4 + (uint)(iVar4 < 0)) >> 1) * 4) = 0;
          if (*(int *)((int)&iStack_8 + DAT_8c118826 + iVar2) == *(int *)(&stack0x00000074 + iVar2))
          {
            *(undefined4 *)(&stack0x00000074 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
          }
          else {
            *(undefined4 *)((int)&iStack_8 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118826 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118826 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + DAT_8c118826 + iVar2);
            if (*(int *)(&stack0x00000068 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c1188ec + iVar2) + 0x54) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + DAT_8c1188ee + iVar2) =
                 *(undefined4 *)((int)&iStack_8 + iVar2);
          }
LAB_8c118c66:
          *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + -1;
        }
        else {
          iVar4 = *(int *)((int)&iStack_8 + DAT_8c1188ee + iVar2);
          *(int *)(&stack0x00000068 + iVar2) = iVar4;
          *(undefined4 *)((int)&iStack_8 + DAT_8c1188ee + iVar2) = *(undefined4 *)(iVar4 + 0x18);
        }
      }
    }
    else {
      if (*(int *)(&stack0x00000000 + iVar2) <= (int)*(short *)(&stack0x00000034 + iVar2)) {
        *(undefined2 *)(&stack0xfffffffc + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x0000004c + iVar2) + 2);
        *(undefined2 *)(&stack0xfffffffe + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x0000004c + iVar2) + 4);
        iVar4 = *(int *)(&stack0xfffffffc + iVar2) * 2 + 1;
        *(int *)(&stack0x00000024 + iVar2) = iVar4;
        iVar4 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + DAT_8c1188ec + iVar2) +
                                 (int)DAT_8c1188f0) + iVar4 * 4);
        *(int *)(&stack0x0000005c + iVar2) = iVar4;
        if (iVar4 == 0) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar4 = *(int *)((int)DAT_8c118a04 + *(int *)((int)&iStack_8 + DAT_8c118a02 + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar4;
            if (*(int *)(iVar4 + 4) == 0) {
              iVar7 = (int)DAT_8c118a04;
              iVar4 = *(int *)((int)&iStack_8 + DAT_8c118a02 + iVar2);
              uVar3 = (*(code *)PTR_FUN_8c118a14)
                                (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar7 + iVar4) = uVar3;
            }
            else {
              *(undefined4 *)((int)DAT_8c118aa4 + *(int *)((int)&iStack_8 + DAT_8c118aa2 + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118aa6 + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)DAT_8c118aa8 + *(int *)((int)&iStack_8 + DAT_8c118aa2 + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)DAT_8c118aaa + *(int *)((int)&iStack_8 + DAT_8c118aa2 + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
            uVar3 = (*(code *)PTR_FUN_8c118ab0)
                              (*(undefined4 *)((int)&iStack_8 + DAT_8c118aa2 + iVar2),
                               *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
            *(undefined4 *)(&stack0x0000006c + iVar2) = uVar3;
          }
          else {
            *(undefined4 *)(&stack0x0000006c + iVar2) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
          }
          *(undefined2 *)(*(int *)(&stack0x0000006c + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000000 + iVar2);
          *(undefined4 *)(*(int *)(&stack0x0000006c + iVar2) + 0xc) =
               *(undefined4 *)(&stack0x0000004c + iVar2);
          *(undefined4 *)(*(int *)(&stack0x0000006c + iVar2) + 8) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
               *(undefined4 *)(*(int *)(&stack0x0000006c + iVar2) + 0x18);
          if (*(int *)(&stack0x00000070 + iVar2) != 0) {
            *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) =
                 *(undefined4 *)(&stack0x0000006c + iVar2);
          }
          *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x0000006c + iVar2);
          if (*(int *)(*(int *)((int)&iStack_8 + DAT_8c118bdc + iVar2) + 0x68) == 0) {
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118bdc + iVar2) + 0x68) =
                 *(undefined4 *)(&stack0x00000070 + iVar2);
          }
          *(undefined4 *)
           (*(int *)(*(int *)((int)&iStack_8 + DAT_8c118bdc + iVar2) + (int)DAT_8c118bde) +
           *(int *)(&stack0x00000024 + iVar2) * 4) = *(undefined4 *)(&stack0x00000070 + iVar2);
        }
        else if (*(int *)(&stack0x00000000 + iVar2) < (int)*(short *)(iVar4 + 2)) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar4 = *(int *)((int)DAT_8c1188f2 + *(int *)((int)&iStack_8 + DAT_8c1188ec + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar4;
            if (*(int *)(iVar4 + 4) == 0) {
              iVar7 = (int)DAT_8c1188f2;
              iVar4 = *(int *)((int)&iStack_8 + DAT_8c1188ec + iVar2);
              uVar3 = (*(code *)PTR_FUN_8c1188f8)
                                (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar7 + iVar4) = uVar3;
            }
            else {
              *(undefined4 *)((int)DAT_8c118a04 + *(int *)((int)&iStack_8 + DAT_8c118a02 + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118a06 + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)DAT_8c118a08 + *(int *)((int)&iStack_8 + DAT_8c118a02 + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)DAT_8c118a0a + *(int *)((int)&iStack_8 + DAT_8c118a02 + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          *(undefined2 *)(*(int *)(&stack0x0000005c + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000000 + iVar2);
          iVar4 = *(int *)(*(int *)(&stack0x0000005c + iVar2) + 8);
          *(int *)(&stack0x00000054 + iVar2) = iVar4;
          if (iVar4 != *(int *)(&stack0x00000058 + iVar2)) {
            *(undefined4 *)(*(int *)(&stack0x0000005c + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            if ((*(int *)(&stack0x00000054 + iVar2) != 0) &&
               (iVar4 = **(int **)(&stack0x00000054 + iVar2) + -1,
               **(int **)(&stack0x00000054 + iVar2) = iVar4, iVar4 < 1)) {
              (*(code *)PTR_FUN_8c118a10)
                        (*(undefined4 *)((int)&iStack_8 + DAT_8c118a02 + iVar2),
                         *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
            }
          }
        }
      }
      piVar5 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c118be0 + iVar2) + 4);
      iVar4 = *piVar5 + -1;
      *piVar5 = iVar4;
      if (iVar4 < 1) {
        (*(code *)PTR_FUN_8c118be8)
                  (*(undefined4 *)((int)&iStack_8 + DAT_8c118bdc + iVar2),
                   *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118be0 + iVar2) + 4),ar6,ar7);
      }
      if (*(short *)(&stack0x00000034 + iVar2) <
          *(short *)(*(int *)((int)&iStack_8 + DAT_8c118be0 + iVar2) + 2)) {
        piVar5 = *(int **)(*(int *)((int)&iStack_8 + DAT_8c118be0 + iVar2) + 8);
        iVar4 = *piVar5 + -1;
        *piVar5 = iVar4;
        if (iVar4 < 1) {
          (*(code *)PTR_FUN_8c118be8)
                    (*(undefined4 *)((int)&iStack_8 + DAT_8c118bdc + iVar2),
                     *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118be0 + iVar2) + 8),ar6,ar7);
        }
        if ((&stack0x0000000f)[iVar2] == '\0') {
          *(undefined2 *)(&stack0xfffffffc + iVar2) =
               *(undefined2 *)(*(int *)(&stack0x0000004c + iVar2) + 2);
          *(undefined2 *)(&stack0xfffffffe + iVar2) =
               *(undefined2 *)(*(int *)(&stack0x0000004c + iVar2) + 4);
          *(undefined4 *)
           (*(int *)(*(int *)((int)&iStack_8 + DAT_8c118bdc + iVar2) + (int)DAT_8c118bde) +
           *(int *)(&stack0xfffffffc + iVar2) * 8) = 0;
        }
        else {
          iVar4 = *(int *)((int)&iStack_8 + DAT_8c118d32 + iVar2);
          iVar7 = *(int *)(*(int *)((int)&iStack_8 + DAT_8c118d34 + iVar2) + 0xc) -
                  *(int *)(iVar4 + 0x48);
          *(undefined4 *)(*(int *)(iVar4 + 0x4c) + ((int)(iVar7 + (uint)(iVar7 < 0)) >> 1) * 4) = 0;
        }
        if (*(int *)((int)&iStack_8 + DAT_8c118d34 + iVar2) == *(int *)(&stack0x00000074 + iVar2)) {
          *(undefined4 *)(&stack0x00000074 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
        }
        else {
          *(undefined4 *)(&stack0xfffffffc + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118d34 + iVar2) + 0x18);
          *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118d34 + iVar2) + 0x18) =
               *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
          *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
               *(undefined4 *)((int)&iStack_8 + DAT_8c118d34 + iVar2);
          if (*(int *)(&stack0x00000068 + iVar2) == 0) {
            *(undefined4 *)(*(int *)((int)&iStack_8 + DAT_8c118d32 + iVar2) + 0x54) =
                 *(undefined4 *)(&stack0xfffffffc + iVar2);
          }
          else {
            *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18) =
                 *(undefined4 *)(&stack0xfffffffc + iVar2);
          }
          *(undefined4 *)((int)&iStack_8 + DAT_8c118d34 + iVar2) =
               *(undefined4 *)(&stack0xfffffffc + iVar2);
        }
        goto LAB_8c118c66;
      }
      iVar4 = *(int *)((int)&iStack_8 + DAT_8c118d34 + iVar2);
      *(int *)(&stack0x00000068 + iVar2) = iVar4;
      *(undefined4 *)((int)&iStack_8 + DAT_8c118d34 + iVar2) = *(undefined4 *)(iVar4 + 0x18);
    }
    iVar4 = *(int *)(&stack0x0000003c + iVar2) + 1;
  } while( true );
}



/* FUN_8c11919e @ 8c11919e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11919e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  uStack_14 = (*(code *)PTR_FUN_8c119200)(ar4,&uStack_1c,ar6,ar7);
  uStack_18 = uStack_1c;
  uStack_10 = *(undefined4 *)(DAT_8c1191fa + ar4);
  iStack_c = *(int *)(DAT_8c1191fc + ar4) + 1;
  uVar1 = (*(code *)PTR_FUN_8c119208)(ar4,0xc,&uStack_18,3);
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  return 0;
}



/* FUN_8c119218 @ 8c119218 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c119218(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint *a6;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *a6_00;
  undefined4 a7;
  int a4;
  int iVar4;
  int *unaff_r14;
  bool bVar5;
  
  iVar4 = *(int *)(in_r0 + (int)unaff_r14);
  a4 = *unaff_r14;
  uVar2 = ar5;
  if (ar5 < (unaff_r14[0x10] - *(int *)((int)DAT_8c119316 + (int)unaff_r14)) - 1U) {
    do {
      uVar2 = uVar2 + 1;
      iVar4 = *(int *)(iVar4 + 0x18);
    } while (uVar2 < (unaff_r14[0x10] - *(int *)((int)DAT_8c119316 + (int)unaff_r14)) - 1U);
  }
  uVar2 = unaff_r14[0x10] + *(int *)((int)DAT_8c119316 + (int)unaff_r14) * -2;
  for (iVar3 = *(int *)(iVar4 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
    if ((*(int *)(iVar3 + 0x10) != 0) &&
       (iVar1 = *(int *)(iVar3 + 0x10) - unaff_r14[0x12],
       (uint)((int)(iVar1 + (uint)(iVar1 < 0)) >> 1) < uVar2)) {
      ar5 = ar5 + 1;
    }
  }
  a6 = (uint *)(**(code **)(a4 + 0x10))(a4,(ar5 - 1) * 2 + 8,ar6,ar7);
  *a6 = ar5;
  iVar3 = ar5 - 1;
  for (iVar4 = *(int *)(iVar4 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
    if ((*(int *)(iVar4 + 0x10) != 0) &&
       (iVar1 = *(int *)(iVar4 + 0x10) - unaff_r14[0x12],
       (uint)((int)(iVar1 + (uint)(iVar1 < 0)) >> 1) < uVar2)) {
      iVar1 = iVar3 * 2;
      iVar3 = iVar3 + -1;
      *(undefined2 *)((int)a6 + iVar1 + 4) = **(undefined2 **)(iVar4 + 0x10);
    }
  }
  a7 = 1;
  a6_00 = a6;
  uVar2 = (*(code *)PTR_FUN_8c11931c)(unaff_r14,0xc,a6,1);
  bVar5 = (uVar2 & 0xff) == 0;
  if (bVar5) {
    (**(code **)(a4 + 0x18))(a4,a6,a6_00,a7);
  }
  return (uint)!bVar5;
}



/* FUN_8c119320 @ 8c119320 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c119320(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  short *a7;
  short *psVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined2 *puVar11;
  short *psVar12;
  short *psVar13;
  uint uStack_30;
  short sStack_2c;
  short *psStack_24;
  
  iVar5 = (int)DAT_8c119448;
  uVar7 = 0;
  iVar9 = (int)DAT_8c119444;
  sVar6 = *(short *)(DAT_8c119446 + ar4);
  iVar1 = DAT_8c119446 + 0x12;
  *(int *)(iVar1 + ar4) = *(int *)(iVar1 + ar4) + (int)sVar6;
  puVar11 = *(undefined2 **)(ar4 + 0x54);
  uVar8 = (uint)*(ushort *)(ar4 + 0x50);
  if (uVar8 != 0) {
    do {
      iVar1 = (int)(short)puVar11[1];
      if (iVar1 < iVar5) {
        iVar1 = iVar1 + (short)(*(short *)(ar5 + (uint)**(ushort **)(puVar11 + 6) * 2) - sVar6);
      }
      *puVar11 = (short)iVar1;
      puVar11[1] = (short)iVar1;
      if (iVar1 <= iVar9) {
        *(undefined2 **)(DAT_8c11944a + ar4) = puVar11;
        iVar9 = iVar1;
      }
      iVar1 = **(int **)(puVar11 + 2) + -1;
      **(int **)(puVar11 + 2) = iVar1;
      if (iVar1 < 1) {
        (*(code *)PTR_FUN_8c119454)(ar4,*(undefined4 *)(puVar11 + 2),ar6,ar7);
      }
      uVar7 = uVar7 + 1;
      **(int **)(puVar11 + 4) = **(int **)(puVar11 + 4) + 1;
      *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar11 + 4);
      puVar11 = *(undefined2 **)(puVar11 + 0xc);
    } while (uVar7 < uVar8);
  }
  uVar7 = 1;
  *(short *)(DAT_8c119446 + ar4) = (short)iVar9;
  a7 = *(short **)(ar4 + 0x54);
  iVar9 = (int)a7[1];
  psVar4 = *(short **)(a7 + 0xc);
  if (1 < uVar8 + *(int *)(DAT_8c11944c + ar4) * -2) {
    do {
      if ((int)*psVar4 < (int)(short)iVar9) {
        iVar9 = (int)*psVar4;
        a7 = psVar4;
      }
      uVar7 = uVar7 + 1;
      psVar4 = *(short **)(psVar4 + 0xc);
    } while (uVar7 < uVar8 + *(int *)(DAT_8c11944c + ar4) * -2);
  }
  sStack_2c = *(short *)(DAT_8c11944e + ar4) + (short)iVar9;
  if (uVar7 < (uVar8 - *(int *)(DAT_8c11944c + ar4)) - 1) {
    do {
      uVar7 = uVar7 + 1;
      psVar4 = *(short **)(psVar4 + 0xc);
    } while (uVar7 < (uVar8 - *(int *)(DAT_8c11944c + ar4)) - 1);
  }
  psVar12 = a7;
  if (*psVar4 < sStack_2c) {
    sStack_2c = *psVar4;
    psVar12 = psVar4;
  }
  for (; uVar7 < uVar8 - 1; uVar7 = uVar7 + 1) {
    psVar4 = *(short **)(psVar4 + 0xc);
  }
  iVar1 = iVar9;
  psStack_24 = a7;
  if ((int)*psVar4 < (int)(short)iVar9) {
    iVar1 = (int)*psVar4;
    psStack_24 = psVar4;
  }
  psVar4 = *(short **)(ar4 + 0x54);
  uStack_30 = 0;
  sVar6 = (short)iVar1 + *(short *)(DAT_8c119578 + ar4);
  piVar3 = *(int **)(psStack_24 + 2);
  piVar10 = *(int **)(DAT_8c11957a + ar4);
  if (piVar10[1] == 0) {
    uVar2 = (*(code *)PTR_FUN_8c119588)(ar4,piVar10,iVar9,a7);
    *(undefined4 *)(DAT_8c11957a + ar4) = uVar2;
  }
  else {
    *(int *)(DAT_8c11957a + ar4) = piVar10[1];
  }
  iVar1 = (int)DAT_8c11957c;
  piVar10[1] = (int)piVar3;
  *piVar3 = *piVar3 + 1;
  piVar10[4] = *(int *)(psStack_24 + 6);
  iVar5 = (int)DAT_8c11957e;
  *piVar10 = 0;
  piVar10[5] = *(int *)(iVar1 + ar4) + 1;
  piVar10[3] = (int)psVar4[1] + *(int *)(iVar5 + ar4);
  iVar1 = (int)DAT_8c119580;
  *piVar10 = *piVar10 + 1;
  if (uVar8 + *(int *)(iVar1 + ar4) * -2 != 0) {
    do {
      if (sVar6 < psVar4[1]) {
        psVar4[1] = sVar6;
        piVar3 = *(int **)(psVar4 + 4);
        *(int **)(psVar4 + 4) = piVar10;
        *piVar10 = *piVar10 + 1;
        iVar1 = *piVar3;
        *piVar3 = iVar1 + -1;
        if (iVar1 + -1 < 1) {
          (*(code *)PTR_FUN_8c11958c)(ar4,piVar3,iVar9,a7);
        }
      }
      psVar4 = *(short **)(psVar4 + 0xc);
      uStack_30 = uStack_30 + 1;
    } while (uStack_30 < uVar8 + *(int *)(DAT_8c119580 + ar4) * -2);
  }
  iVar1 = *piVar10;
  *piVar10 = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    (*(code *)PTR_FUN_8c11958c)(ar4,piVar10,iVar9,a7);
  }
  if (sStack_2c < psVar4[1]) {
    psVar4[1] = sStack_2c;
    piVar10 = *(int **)(DAT_8c11957a + ar4);
    piVar3 = *(int **)(psVar12 + 2);
    if (piVar10[1] == 0) {
      uVar2 = (*(code *)PTR_FUN_8c119588)(ar4,piVar10,iVar9,a7);
      *(undefined4 *)(DAT_8c11957a + ar4) = uVar2;
    }
    else {
      *(int *)(DAT_8c11957a + ar4) = piVar10[1];
    }
    iVar1 = (int)DAT_8c1196c4;
    piVar10[1] = (int)piVar3;
    *piVar3 = *piVar3 + 1;
    piVar10[4] = *(int *)(psVar12 + 6);
    *piVar10 = 0;
    piVar10[5] = *(int *)(iVar1 + ar4) + 1;
    piVar10[3] = (int)psVar4[1] + *(int *)(DAT_8c1196c6 + ar4);
    piVar3 = *(int **)(psVar4 + 4);
    *(int **)(psVar4 + 4) = piVar10;
    *piVar10 = *piVar10 + 1;
    iVar1 = *piVar3;
    *piVar3 = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      (*(code *)PTR_FUN_8c1196d0)(ar4,piVar3,iVar9,a7);
    }
  }
  psVar12 = *(short **)(psVar4 + 0xc);
  uVar7 = 0;
  psVar13 = psVar12;
  if (*(int *)(DAT_8c1196c8 + ar4) != 1) {
    do {
      if (*psVar4 < psVar13[1]) {
        psVar13[1] = *psVar4;
        piVar10 = *(int **)(psVar13 + 4);
        piVar3 = *(int **)(psVar4 + 2);
        if (piVar10 != piVar3) {
          *(int **)(psVar13 + 4) = piVar3;
          *piVar3 = *piVar3 + 1;
          iVar1 = *piVar10;
          *piVar10 = iVar1 + -1;
          if (iVar1 + -1 < 1) {
            (*(code *)PTR_FUN_8c1196d0)(ar4,piVar10,iVar9,a7);
          }
        }
      }
      uVar7 = uVar7 + 1;
      psVar12 = *(short **)(psVar13 + 0xc);
      psVar4 = psVar13;
      psVar13 = psVar12;
    } while (uVar7 < *(int *)(DAT_8c1196c8 + ar4) - 1U);
  }
  uVar7 = 0;
  psVar4 = psVar12;
  if (*(int *)(DAT_8c1196c8 + ar4) != 1) {
    do {
      uVar7 = uVar7 + 1;
      psVar4 = *(short **)(psVar4 + 0xc);
    } while (uVar7 < *(int *)(DAT_8c1196c8 + ar4) - 1U);
  }
  if (*psVar4 < psVar12[1]) {
    psVar12[1] = *psVar4;
    piVar10 = *(int **)(psVar12 + 4);
    piVar3 = *(int **)(psVar4 + 2);
    if (piVar10 != piVar3) {
      *(int **)(psVar12 + 4) = piVar3;
      *piVar3 = *piVar3 + 1;
      iVar1 = *piVar10;
      *piVar10 = iVar1 + -1;
      if (iVar1 + -1 < 1) {
        (*(code *)PTR_FUN_8c1196d0)(ar4,piVar10,iVar9,a7);
      }
    }
  }
  uVar7 = 0;
  psVar4 = *(short **)(psVar12 + 0xc);
  if (*(int *)(DAT_8c1196c8 + ar4) != 1) {
    do {
      if (*psVar12 < psVar4[1]) {
        psVar4[1] = *psVar12;
        piVar10 = *(int **)(psVar4 + 4);
        piVar3 = *(int **)(psVar12 + 2);
        if (piVar10 != piVar3) {
          *(int **)(psVar4 + 4) = piVar3;
          *piVar3 = *piVar3 + 1;
          iVar1 = *piVar10;
          *piVar10 = iVar1 + -1;
          if (iVar1 + -1 < 1) {
            (*(code *)PTR_FUN_8c1197c8)(ar4,piVar10,iVar9,a7);
          }
        }
      }
      uVar7 = uVar7 + 1;
      psVar12 = psVar4;
      psVar4 = *(short **)(psVar4 + 0xc);
    } while (uVar7 < *(int *)(DAT_8c1197bc + ar4) - 1U);
  }
  return 0;
}



/* FUN_8c119706 @ 8c119706 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c119772) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c119706(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_fr0;
  float fVar6;
  double dVar7;
  float in_xf2;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  fStack_1c = in_xf2;
  iStack_10 = (*(code *)PTR_FUN_8c1197cc)(ar4,ar5,ar6,ar7);
  if (*(int *)(DAT_8c1197bc + ar4) == 0) {
    iVar4 = 0;
    iStack_14 = *(int *)(DAT_8c1197be + ar4) + 1;
    iStack_24 = (int)*(short *)(DAT_8c1197c0 + ar4) + *(int *)(DAT_8c1197c0 + -4 + ar4);
  }
  else {
    iStack_14 = *(int *)(iStack_10 + 0x14);
    iVar5 = iStack_10;
    for (iVar4 = iStack_10; iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
      if ((*(uint *)(DAT_8c1197c2 + ar4) == (*(uint *)(iVar4 + 0x10) & 0xffff)) &&
         (*(int *)(iVar4 + 4) != 0)) {
        iVar5 = iVar4;
      }
    }
    iVar4 = *(int *)(iVar5 + 0x14);
    iStack_24 = *(int *)(iStack_10 + 0xc) - *(int *)(iVar5 + 0xc);
  }
  iStack_20 = iStack_14 - iVar4;
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c1197c4;
  cVar1 = (char)((uVar3 & 0x80000) >> 0x13);
  fVar6 = (float)iStack_24;
  if (iStack_24 < 0) {
    if (cVar1 == '\0') {
      fVar6 = fVar6 + DAT_8c1197d0;
    }
    else {
      fVar6 = SUB84((double)CONCAT44(DAT_8c1197d0,fVar6) + (double)CONCAT44(DAT_8c1197d0,fVar6),0);
    }
  }
  if (cVar1 == '\0') {
    dVar7 = (double)CONCAT44((float)iStack_20,fVar6);
  }
  else {
    dVar7 = (double)iStack_20;
  }
  if (iStack_20 < 0) {
    if (cVar1 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + DAT_8c1197d0,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + (double)CONCAT44(extraout_fr0,DAT_8c1197d0);
    }
  }
  if (cVar1 == '\0') {
    fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 / dVar7,0);
  }
  if ((char)((uVar3 & 0x100000) >> 0x14) == '\0') {
    fStack_1c = fVar6;
  }
  iStack_28 = (int)*(short *)(DAT_8c1197c0 + ar4) + *(int *)(DAT_8c1197c0 + -4 + ar4);
  _fStack_1c = CONCAT44(iVar4,fStack_1c);
  uVar2 = (*(code *)PTR_FUN_8c1197d4)(ar4,0xc,&iStack_28,2);
  return uVar2;
}



/* FUN_8c1197d8 @ 8c1197d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1197d8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  short *psVar8;
  int a6;
  int a7;
  int *piVar9;
  uint uVar10;
  short *psVar11;
  int *piVar12;
  uint uStack_30;
  
  sVar7 = DAT_8c1198c0;
  a6 = (int)DAT_8c1198c0;
  psVar11 = (short *)0x0;
  a7 = (int)DAT_8c1198bc;
  psVar8 = *(short **)(ar4 + 0x54);
  sVar1 = *(short *)(DAT_8c1198be + ar4);
  iVar2 = DAT_8c1198be + 0x12;
  *(int *)(iVar2 + ar4) = *(int *)(iVar2 + ar4) + (int)sVar1;
  uVar6 = (uint)*(ushort *)(ar4 + 0x50);
  uVar10 = 0;
  if (uVar6 != 0) {
    do {
      iVar2 = (int)psVar8[1];
      if (iVar2 < a6) {
        iVar2 = iVar2 - sVar1;
        *psVar8 = (short)iVar2;
        iVar2 = iVar2 + *(short *)(ar5 + *(int *)(psVar8 + 6) * 2);
        psVar8[1] = (short)iVar2;
      }
      else {
        *psVar8 = sVar7;
      }
      if (iVar2 < (short)a7) {
        a7 = iVar2;
      }
      **(int **)(psVar8 + 4) = **(int **)(psVar8 + 4) + 1;
      uVar10 = uVar10 + 1;
      *(undefined4 *)(psVar8 + 2) = *(undefined4 *)(psVar8 + 4);
      psVar8 = *(short **)(psVar8 + 0xc);
    } while (uVar10 < uVar6);
  }
  *(short *)(DAT_8c1198be + ar4) = (short)a7;
  uVar10 = *(uint *)(DAT_8c1198c2 + ar4);
  uStack_30 = 0;
  psVar8 = *(short **)(ar4 + 0x54);
  if (uVar6 != 0) {
    do {
      psVar11 = psVar8;
      iVar2 = *(int *)(psVar11 + 8);
      sVar1 = *psVar11;
      sVar7 = *(short *)(ar5 + *(int *)(iVar2 + 0xc) * 2) + sVar1;
      piVar12 = *(int **)(psVar11 + 2);
      piVar9 = piVar12;
      if (sVar7 < *(short *)(iVar2 + 2)) {
        *(short *)(iVar2 + 2) = sVar7;
        piVar9 = *(int **)(DAT_8c1198c4 + ar4);
        if (piVar9[1] == 0) {
          uVar3 = (*(code *)PTR_FUN_8c1198cc)(ar4,piVar9,a6,a7);
          *(undefined4 *)(DAT_8c1198c4 + ar4) = uVar3;
        }
        else {
          *(int *)(DAT_8c1198c4 + ar4) = piVar9[1];
        }
        iVar4 = (int)DAT_8c11996e;
        piVar9[1] = (int)piVar12;
        *piVar12 = *piVar12 + 1;
        piVar9[4] = *(int *)(psVar11 + 6);
        *piVar9 = 0;
        iVar5 = (int)DAT_8c119970;
        piVar9[5] = *(int *)(iVar4 + ar4);
        piVar9[3] = (int)sVar1 + *(int *)(iVar5 + ar4);
        piVar12 = *(int **)(iVar2 + 8);
        if (piVar12 != piVar9) {
          *(int **)(iVar2 + 8) = piVar9;
          *piVar9 = *piVar9 + 1;
          iVar2 = *piVar12;
          *piVar12 = iVar2 + -1;
          if (iVar2 + -1 < 1) {
            (*(code *)PTR_FUN_8c119978)(ar4,piVar12,a6,a7);
          }
        }
      }
      if ((1 < uVar10) && (uVar10 - 1 == uStack_30)) {
        iVar2 = *(int *)(ar4 + 0x54);
        sVar7 = *(short *)(ar5 + *(int *)(iVar2 + 0xc) * 2) + sVar1;
        if (sVar7 < *(short *)(iVar2 + 2)) {
          *(short *)(iVar2 + 2) = sVar7;
          piVar12 = piVar9;
          if (piVar9 == *(int **)(psVar11 + 2)) {
            piVar12 = *(int **)(DAT_8c119972 + ar4);
            if (piVar12[1] == 0) {
              uVar3 = (*(code *)PTR_FUN_8c11997c)(ar4,piVar12,a6,a7);
              *(undefined4 *)(DAT_8c119972 + ar4) = uVar3;
            }
            else {
              *(int *)(DAT_8c119972 + ar4) = piVar12[1];
            }
            iVar4 = (int)DAT_8c119a9c;
            piVar12[1] = (int)piVar9;
            *piVar9 = *piVar9 + 1;
            piVar12[4] = *(int *)(psVar11 + 6);
            *piVar12 = 0;
            iVar5 = (int)DAT_8c119a9e;
            piVar12[5] = *(int *)(iVar4 + ar4);
            piVar12[3] = (int)sVar1 + *(int *)(iVar5 + ar4);
          }
          piVar9 = *(int **)(iVar2 + 8);
          if (piVar9 != piVar12) {
            *(int **)(iVar2 + 8) = piVar12;
            *piVar12 = *piVar12 + 1;
            iVar2 = *piVar9;
            *piVar9 = iVar2 + -1;
            if (iVar2 + -1 < 1) {
              (*(code *)PTR_FUN_8c119aa8)(ar4,piVar9,a6,a7);
            }
          }
        }
      }
      iVar2 = **(int **)(psVar11 + 2) + -1;
      **(int **)(psVar11 + 2) = iVar2;
      if (iVar2 < 1) {
        (*(code *)PTR_FUN_8c119aa8)(ar4,*(undefined4 *)(psVar11 + 2),a6,a7);
      }
      uStack_30 = uStack_30 + 1;
      psVar8 = *(short **)(psVar11 + 0xc);
    } while (uStack_30 < uVar6);
  }
  *(short *)(DAT_8c119aa0 + ar4) = psVar11[1];
  return 0;
}



/* FUN_8c119a18 @ 8c119a18 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c119a20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c119a18(int ar4,int ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  double in_dr0;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined4 in_fr5;
  float fVar9;
  double dVar8;
  float fVar10;
  double in_dr14;
  double in_xd2;
  double in_xd14;
  bool bVar11;
  undefined4 in_PR;
  int iVar12;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == 0) {
    puVar3 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar3 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar3 + -4) = in_PR;
  fVar5 = (float)ar5;
  if (ar5 < 0) {
    if (in_FPSCR_PR == 0) {
      fVar5 = fVar5 + DAT_8c119aac;
    }
    else {
      fVar5 = SUB84((double)CONCAT44(DAT_8c119aac,fVar5) + (double)CONCAT44(DAT_8c119aac,fVar5),0);
    }
  }
  if (in_FPSCR_PR == 0) {
    dVar6 = (double)CONCAT44((float)ar6,fVar5);
  }
  else {
    dVar6 = (double)ar6;
  }
  if (ar6 < 0) {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),DAT_8c119aac);
    if (in_FPSCR_PR == 0) {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + DAT_8c119aac,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + in_dr0;
    }
  }
  if (in_FPSCR_PR == 0) {
    fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 - dVar6,0);
  }
  if (in_FPSCR_PR == 0) {
    dVar6 = (double)CONCAT44((float)ar4,fVar5);
  }
  else {
    dVar6 = (double)ar4;
  }
  if (ar4 < 0) {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),DAT_8c119aac);
    if (in_FPSCR_PR == 0) {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + DAT_8c119aac,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + in_dr0;
    }
  }
  if (in_FPSCR_SZ == 0) {
    in_xd2 = (double)CONCAT44(SUB84(dVar6,0),in_fr5);
  }
  if (in_FPSCR_PR == 0) {
    dVar6 = (double)CONCAT44((float)((ulonglong)in_xd2 >> 0x20) / (float)((ulonglong)dVar6 >> 0x20),
                             SUB84(in_xd2,0));
  }
  else {
    dVar6 = in_xd2 / dVar6;
  }
  if (in_FPSCR_SZ == 0) {
    dVar7 = (double)CONCAT44(DAT_8c119ab4,DAT_8c119ab0);
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c119ab8,DAT_8c119ab4);
  }
  fVar5 = (float)((ulonglong)dVar7 >> 0x20);
  fVar9 = (float)((ulonglong)dVar6 >> 0x20);
  if (in_FPSCR_PR == 0) {
    bVar11 = fVar9 < fVar5;
  }
  else {
    bVar11 = dVar6 < dVar7;
  }
  dVar8 = dVar6;
  if (in_FPSCR_SZ == 0) {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar9);
    dVar8 = in_xd14;
  }
  if (in_FPSCR_PR == 0) {
    fVar10 = SUB84(in_dr14,0) * SUB84(dVar7,0);
  }
  else {
    fVar10 = SUB84(in_dr14 * dVar7,0);
  }
  uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (bVar11) {
    if (in_FPSCR_SZ == 0) {
      in_dr0 = (double)CONCAT44(uVar4,DAT_8c119ab8);
      dVar8 = (double)CONCAT44(fVar10,SUB84(dVar6,0));
    }
    if (in_FPSCR_PR == 0) {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) + SUB84(in_dr0,0),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 + in_dr0;
    }
    dVar6 = (double)(*(code *)PTR_thunk_FUN_8c013cd8_8c119abc)();
    if (in_FPSCR_SZ == 0) {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),DAT_8c119ac0);
    }
    uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c119aa4;
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((uVar2 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)((uVar2 & 0x100000) >> 0x14);
    if (in_FPSCR_PR == 0) {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + SUB84(dVar7,0),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + dVar7;
    }
    if (in_FPSCR_SZ == 0) {
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),DAT_8c119ac4);
    }
    if (in_FPSCR_PR == 0) {
      fVar5 = SUB84(dVar8,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar8 / dVar6,0);
    }
  }
  else {
    if (in_FPSCR_SZ == 0) {
      in_dr0 = (double)CONCAT44(uVar4,(undefined4)DAT_8c119ac8);
    }
    if (in_FPSCR_PR == 0) {
      bVar11 = SUB84(in_dr0,0) < fVar9;
    }
    else {
      bVar11 = in_dr0 < dVar6;
    }
    if (bVar11) {
      if (in_FPSCR_SZ == 0) {
        dVar7 = (double)CONCAT44(fVar5,_DAT_8c119be0);
        dVar8 = (double)CONCAT44(fVar10,SUB84(dVar6,0));
      }
      if (in_FPSCR_PR == 0) {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) + SUB84(dVar7,0),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 + dVar7;
      }
      dVar6 = (double)(*(code *)PTR_thunk_FUN_8c013cd8_8c119be4)();
      if (in_FPSCR_SZ == 0) {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),DAT_8c119be8);
      }
      uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & _DAT_8c119bec;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar2 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar2 & 0x100000) >> 0x14);
      if (in_FPSCR_PR == 0) {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + SUB84(dVar7,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar7;
      }
      if (in_FPSCR_SZ == 0) {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),DAT_8c119bf0);
      }
      if (in_FPSCR_PR == 0) {
        fVar5 = SUB84(dVar8,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar8 / dVar6,0);
      }
    }
    else {
      if (in_FPSCR_SZ == 0) {
        dVar7 = (double)CONCAT44(DAT_8c119ad0,DAT_8c119ac8._4_4_);
      }
      else {
        dVar7 = (double)CONCAT44(uRam8c119ad4,DAT_8c119ad0);
      }
      if (in_FPSCR_PR == 0) {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) - fVar9);
      }
      else {
        dVar7 = dVar7 - dVar6;
      }
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44(fVar9,SUB84(dVar7,0));
      }
      if (in_FPSCR_PR == 0) {
        fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 * dVar7,0);
      }
    }
  }
  fVar9 = SUB84(dVar7,0);
  if (in_FPSCR_SZ == 0) {
    fVar9 = fVar5;
  }
  cVar1 = (char)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                  (uint)in_FPSCR_PR << 0x13) & _DAT_8c119bec & 0x80000) >> 0x13);
  dVar6 = (double)CONCAT44(_DAT_8c119bf4,fVar9);
  if (cVar1 != '\0' || _DAT_8c119bf4 <= fVar9) {
    if (cVar1 == '\0') {
      dVar6 = (double)CONCAT44(_DAT_8c119bf4 + _DAT_8c119bf4,fVar9 - (_DAT_8c119bf4 + _DAT_8c119bf4)
                              );
    }
    else {
      dVar6 = (dVar6 + dVar6) - (dVar6 + dVar6);
    }
  }
  if (cVar1 == '\0') {
    iVar12 = (int)SUB84(dVar6,0);
  }
  else {
    iVar12 = (int)dVar6;
  }
  return iVar12;
}



/* FUN_8c119a1e @ 8c119a1e callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c119a20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c119a1e(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar2;
  double in_dr0;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined4 in_fr5;
  float fVar8;
  double dVar7;
  float fVar9;
  double in_dr14;
  double in_xd2;
  double in_xd14;
  char in_T;
  bool bVar10;
  int in_FPUL;
  int iVar11;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  fVar4 = (float)in_FPUL;
  if (in_T != '\x01') {
    if (in_FPSCR_PR == 0) {
      fVar4 = fVar4 + DAT_8c119aac;
    }
    else {
      fVar4 = SUB84((double)CONCAT44(DAT_8c119aac,fVar4) + (double)CONCAT44(DAT_8c119aac,fVar4),0);
    }
  }
  if (in_FPSCR_PR == 0) {
    dVar5 = (double)CONCAT44((float)ar6,fVar4);
  }
  else {
    dVar5 = (double)ar6;
  }
  if (ar6 < 0) {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),DAT_8c119aac);
    if (in_FPSCR_PR == 0) {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + DAT_8c119aac,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + in_dr0;
    }
  }
  if (in_FPSCR_PR == 0) {
    fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 - dVar5,0);
  }
  if (in_FPSCR_PR == 0) {
    dVar5 = (double)CONCAT44((float)ar4,fVar4);
  }
  else {
    dVar5 = (double)ar4;
  }
  if (ar4 < 0) {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),DAT_8c119aac);
    if (in_FPSCR_PR == 0) {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + DAT_8c119aac,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + in_dr0;
    }
  }
  if (in_FPSCR_SZ == 0) {
    in_xd2 = (double)CONCAT44(SUB84(dVar5,0),in_fr5);
  }
  if (in_FPSCR_PR == 0) {
    dVar5 = (double)CONCAT44((float)((ulonglong)in_xd2 >> 0x20) / (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(in_xd2,0));
  }
  else {
    dVar5 = in_xd2 / dVar5;
  }
  if (in_FPSCR_SZ == 0) {
    dVar6 = (double)CONCAT44(DAT_8c119ab4,DAT_8c119ab0);
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c119ab8,DAT_8c119ab4);
  }
  fVar4 = (float)((ulonglong)dVar6 >> 0x20);
  fVar8 = (float)((ulonglong)dVar5 >> 0x20);
  if (in_FPSCR_PR == 0) {
    bVar10 = fVar8 < fVar4;
  }
  else {
    bVar10 = dVar5 < dVar6;
  }
  dVar7 = dVar5;
  if (in_FPSCR_SZ == 0) {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar8);
    dVar7 = in_xd14;
  }
  if (in_FPSCR_PR == 0) {
    fVar9 = SUB84(in_dr14,0) * SUB84(dVar6,0);
  }
  else {
    fVar9 = SUB84(in_dr14 * dVar6,0);
  }
  uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (bVar10) {
    if (in_FPSCR_SZ == 0) {
      in_dr0 = (double)CONCAT44(uVar3,DAT_8c119ab8);
      dVar7 = (double)CONCAT44(fVar9,SUB84(dVar5,0));
    }
    if (in_FPSCR_PR == 0) {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + SUB84(in_dr0,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + in_dr0;
    }
    (*(code *)PTR_thunk_FUN_8c013cd8_8c119abc)(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == 0) {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),DAT_8c119ac0);
    }
    uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c119aa4;
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((uVar2 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)((uVar2 & 0x100000) >> 0x14);
    if (in_FPSCR_PR == 0) {
      dVar5 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) + SUB84(dVar6,0),SUB84(in_dr0,0));
    }
    else {
      dVar5 = in_dr0 + dVar6;
    }
    if (in_FPSCR_SZ == 0) {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),DAT_8c119ac4);
    }
    if (in_FPSCR_PR == 0) {
      fVar4 = SUB84(dVar7,0) / (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar7 / dVar5,0);
    }
  }
  else {
    if (in_FPSCR_SZ == 0) {
      in_dr0 = (double)CONCAT44(uVar3,(undefined4)DAT_8c119ac8);
    }
    if (in_FPSCR_PR == 0) {
      bVar10 = SUB84(in_dr0,0) < fVar8;
    }
    else {
      bVar10 = in_dr0 < dVar5;
    }
    if (bVar10) {
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44(fVar4,_DAT_8c119be0);
        dVar7 = (double)CONCAT44(fVar9,SUB84(dVar5,0));
      }
      if (in_FPSCR_PR == 0) {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + SUB84(dVar6,0),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar6;
      }
      (*(code *)PTR_thunk_FUN_8c013cd8_8c119be4)(ar4,ar5,ar6,ar7);
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),DAT_8c119be8);
      }
      uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & _DAT_8c119bec;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar2 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar2 & 0x100000) >> 0x14);
      if (in_FPSCR_PR == 0) {
        dVar5 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) + SUB84(dVar6,0),SUB84(in_dr0,0)
                                );
      }
      else {
        dVar5 = in_dr0 + dVar6;
      }
      if (in_FPSCR_SZ == 0) {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),DAT_8c119bf0);
      }
      if (in_FPSCR_PR == 0) {
        fVar4 = SUB84(dVar7,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 / dVar5,0);
      }
    }
    else {
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44(DAT_8c119ad0,DAT_8c119ac8._4_4_);
      }
      else {
        dVar6 = (double)CONCAT44(uRam8c119ad4,DAT_8c119ad0);
      }
      if (in_FPSCR_PR == 0) {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0) - fVar8);
      }
      else {
        dVar6 = dVar6 - dVar5;
      }
      if (in_FPSCR_SZ == 0) {
        dVar5 = (double)CONCAT44(fVar8,SUB84(dVar6,0));
      }
      if (in_FPSCR_PR == 0) {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar6,0);
      }
    }
  }
  fVar8 = SUB84(dVar6,0);
  if (in_FPSCR_SZ == 0) {
    fVar8 = fVar4;
  }
  cVar1 = (char)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                  (uint)in_FPSCR_PR << 0x13) & _DAT_8c119bec & 0x80000) >> 0x13);
  dVar5 = (double)CONCAT44(_DAT_8c119bf4,fVar8);
  if (cVar1 != '\0' || _DAT_8c119bf4 <= fVar8) {
    if (cVar1 == '\0') {
      dVar5 = (double)CONCAT44(_DAT_8c119bf4 + _DAT_8c119bf4,fVar8 - (_DAT_8c119bf4 + _DAT_8c119bf4)
                              );
    }
    else {
      dVar5 = (dVar5 + dVar5) - (dVar5 + dVar5);
    }
  }
  if (cVar1 == '\0') {
    iVar11 = (int)SUB84(dVar5,0);
  }
  else {
    iVar11 = (int)dVar5;
  }
  return iVar11;
}



/* FUN_8c119b16 @ 8c119b16 callers=2 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c119b36) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c119b16(int ar4,int ar5,int ar6,int ar7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  double in_dr0;
  undefined4 uVar6;
  double dVar5;
  float fVar7;
  double dVar8;
  undefined4 in_fr5;
  float fVar10;
  double dVar9;
  float fVar11;
  double in_dr14;
  double in_xd2;
  double in_xd14;
  bool bVar12;
  undefined4 in_PR;
  byte in_FPSCR_CAUSE;
  byte bVar13;
  byte in_FPSCR_DN;
  byte bVar14;
  byte in_FPSCR_PR;
  byte bVar15;
  byte in_FPSCR_SZ;
  byte bVar16;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == 0) {
    puVar4 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar4 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar4 + -4) = in_PR;
  if (ar6 != ar7) {
    uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & _DAT_8c119bec;
    bVar13 = 0;
    bVar14 = 0;
    bVar15 = (byte)((uVar3 & 0x80000) >> 0x13);
    bVar16 = (byte)((uVar3 & 0x100000) >> 0x14);
    fVar7 = (float)ar5;
    if (ar5 < 0) {
      if (bVar15 == 0) {
        fVar7 = fVar7 + DAT_8c119bf8;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(DAT_8c119bf8,fVar7) + (double)CONCAT44(DAT_8c119bf8,fVar7),0)
        ;
      }
    }
    iVar2 = *(int *)(DAT_8c119bdc + ar4);
    *(int *)((int)puVar4 + -8) = iVar2;
    iVar2 = *(int *)(iVar2 + ar6 * 4);
    if (bVar15 == 0) {
      dVar8 = (double)CONCAT44((float)iVar2,fVar7);
    }
    else {
      dVar8 = (double)iVar2;
    }
    if (iVar2 < 0) {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),DAT_8c119bf8);
      if (bVar15 == 0) {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) + DAT_8c119bf8,SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 + in_dr0;
      }
    }
    if (bVar15 == 0) {
      fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 - dVar8,0);
    }
    iVar2 = *(int *)(*(int *)((int)puVar4 + -8) + ar7 * 4);
    if (bVar15 == 0) {
      dVar8 = (double)CONCAT44((float)iVar2,fVar7);
    }
    else {
      dVar8 = (double)iVar2;
    }
    if (iVar2 < 0) {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),DAT_8c119bf8);
      if (bVar15 == 0) {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) + DAT_8c119bf8,SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 + in_dr0;
      }
    }
    iVar2 = ar6 - ar7;
    if (bVar15 == 0) {
      fVar7 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 + dVar8,0);
    }
    if (bVar15 == 0) {
      dVar8 = (double)CONCAT44((float)iVar2,fVar7);
    }
    else {
      dVar8 = (double)iVar2;
    }
    if (iVar2 < 0) {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),DAT_8c119bf8);
      if (bVar15 == 0) {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) + DAT_8c119bf8,SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 + in_dr0;
      }
    }
    if (bVar16 == 0) {
      in_xd2 = (double)CONCAT44(SUB84(dVar8,0),in_fr5);
    }
    if (bVar15 == 0) {
      dVar8 = (double)CONCAT44((float)((ulonglong)in_xd2 >> 0x20) /
                               (float)((ulonglong)dVar8 >> 0x20),SUB84(in_xd2,0));
    }
    else {
      dVar8 = in_xd2 / dVar8;
    }
    if (bVar16 == 0) {
      dVar5 = (double)CONCAT44(DAT_8c119c00,DAT_8c119bfc);
    }
    else {
      dVar5 = (double)CONCAT44(DAT_8c119c04,DAT_8c119c00);
    }
    fVar7 = (float)((ulonglong)dVar5 >> 0x20);
    fVar10 = (float)((ulonglong)dVar8 >> 0x20);
    if (bVar15 == 0) {
      bVar12 = fVar10 < fVar7;
    }
    else {
      bVar12 = dVar8 < dVar5;
    }
    dVar9 = dVar8;
    if (bVar16 == 0) {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar10);
      dVar9 = in_xd14;
    }
    if (bVar15 == 0) {
      fVar11 = SUB84(in_dr14,0) * SUB84(dVar5,0);
    }
    else {
      fVar11 = SUB84(in_dr14 * dVar5,0);
    }
    uVar6 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (bVar12) {
      if (bVar16 == 0) {
        in_dr0 = (double)CONCAT44(uVar6,DAT_8c119c04);
        dVar9 = (double)CONCAT44(fVar11,SUB84(dVar8,0));
      }
      if (bVar15 == 0) {
        dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) + SUB84(in_dr0,0),SUB84(dVar9,0))
        ;
      }
      else {
        dVar9 = dVar9 + in_dr0;
      }
      (*(code *)PTR_thunk_FUN_8c013cd8_8c119be4)(ar4,ar5,ar6,ar7);
      if (bVar16 == 0) {
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),DAT_8c119be8);
      }
      uVar3 = ((uint)bVar13 << 0xc | (uint)bVar14 << 0x12 | (uint)bVar15 << 0x13 |
              (uint)bVar16 << 0x14) & _DAT_8c119bec;
      bVar15 = (byte)((uVar3 & 0x80000) >> 0x13);
      bVar16 = (byte)((uVar3 & 0x100000) >> 0x14);
      if (bVar15 == 0) {
        dVar5 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) + SUB84(dVar5,0),SUB84(in_dr0,0)
                                );
      }
      else {
        dVar5 = in_dr0 + dVar5;
      }
      if (bVar16 == 0) {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),DAT_8c119bf0);
      }
      if (bVar15 == 0) {
        fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 / dVar5,0);
      }
    }
    else {
      if (bVar16 == 0) {
        in_dr0 = (double)CONCAT44(uVar6,_DAT_8c119c08);
      }
      if (bVar15 == 0) {
        bVar12 = SUB84(in_dr0,0) < fVar10;
      }
      else {
        bVar12 = in_dr0 < dVar8;
      }
      if (bVar12) {
        if (bVar16 == 0) {
          dVar5 = (double)CONCAT44(fVar7,_DAT_8c119d68);
          dVar9 = (double)CONCAT44(fVar11,SUB84(dVar8,0));
        }
        if (bVar15 == 0) {
          dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) + SUB84(dVar5,0),SUB84(dVar9,0)
                                  );
        }
        else {
          dVar9 = dVar9 + dVar5;
        }
        (*(code *)PTR_thunk_FUN_8c013cd8_8c119d6c)(ar4,ar5,ar6,ar7);
        if (bVar16 == 0) {
          dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),DAT_8c119d70);
        }
        uVar3 = ((uint)bVar13 << 0xc | (uint)bVar14 << 0x12 | (uint)bVar15 << 0x13 |
                (uint)bVar16 << 0x14) & _DAT_8c119d74;
        bVar15 = (byte)((uVar3 & 0x80000) >> 0x13);
        bVar16 = (byte)((uVar3 & 0x100000) >> 0x14);
        if (bVar15 == 0) {
          dVar5 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) + SUB84(dVar5,0),
                                   SUB84(in_dr0,0));
        }
        else {
          dVar5 = in_dr0 + dVar5;
        }
        if (bVar16 == 0) {
          dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),DAT_8c119d78);
        }
        if (bVar15 == 0) {
          fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar9 / dVar5,0);
        }
      }
      else {
        if (bVar16 == 0) {
          dVar5 = (double)CONCAT44(DAT_8c119c10,DAT_8c119c0c);
        }
        else {
          dVar5 = (double)CONCAT44(uRam8c119c14,DAT_8c119c10);
        }
        if (bVar15 == 0) {
          dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),SUB84(dVar5,0) - fVar10);
        }
        else {
          dVar5 = dVar5 - dVar8;
        }
        if (bVar16 == 0) {
          dVar8 = (double)CONCAT44(fVar10,SUB84(dVar5,0));
        }
        if (bVar15 == 0) {
          fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 * dVar5,0);
        }
      }
    }
    uVar3 = (uint)bVar15 << 0x13 | (uint)bVar16 << 0x14 | DAT_8c119d7c & 0x3fffff;
    cVar1 = (char)((uVar3 & 0x80000) >> 0x13);
    dVar8 = (double)fVar7;
    if ((char)((uVar3 & 0x100000) >> 0x14) == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c119d80,DAT_8c119d84);
    }
    else {
      dVar5 = (double)CONCAT44(DAT_8c119d84,DAT_8c119d80);
    }
    if (cVar1 == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) + (float)((ulonglong)dVar5 >> 0x20)
                               ,SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 + dVar5;
    }
    dVar5 = (double)DAT_8c119d88;
    fVar7 = (float)((ulonglong)dVar5 >> 0x20);
    fVar10 = (float)((ulonglong)dVar8 >> 0x20);
    if (cVar1 == '\0') {
      bVar12 = fVar10 < fVar7;
    }
    else {
      bVar12 = dVar8 < dVar5;
    }
    if (!bVar12) {
      if (cVar1 == '\0') {
        dVar8 = (double)CONCAT44(fVar10 - (fVar7 + fVar7),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 - (dVar5 + dVar5);
      }
    }
    if (cVar1 == '\0') {
      iVar2 = (int)(float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      iVar2 = (int)dVar8;
    }
    return iVar2;
  }
  return 0;
}



/* FUN_8c119c68 @ 8c119c68 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int * FUN_8c119c68(int ar4,int ar5,uint *ar6,uint *ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *a5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_84;
  uint *puStack_80;
  uint *puStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  char cStack_6c;
  int iStack_68;
  int iStack_64;
  uint *puStack_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  uint *puStack_4c;
  uint *puStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  
  cStack_6c = (char)ar6;
  puStack_48 = ar7;
  a5 = *(int **)(DAT_8c119d5c + ar4);
  piStack_78 = (int *)0x0;
  puStack_60 = (uint *)0x1;
  iStack_50 = 0;
  iStack_54 = 0;
  puStack_4c = (uint *)**(uint **)((int)&uStack_84 + (int)DAT_8c119d5e);
  iStack_3c = 0;
  iStack_40 = 1;
  puVar6 = (undefined4 *)0x0;
  if (*(int *)(ar5 + 8) != 0) {
    uStack_34 = *(undefined4 *)(ar5 + 8);
    puVar6 = &uStack_38;
    uStack_28 = *(undefined4 *)(ar5 + 0xc);
    uStack_38 = 1;
    puStack_7c = *(uint **)(DAT_8c119d60 + ar4);
    iStack_68 = (int)*(short *)(ar5 + 2) + *(int *)(DAT_8c119d62 + ar4);
  }
  uStack_44 = (uint)((char)ar6 == '\0');
  if (puVar6 != (undefined4 *)0x0) {
    iVar4 = puVar6[4];
    while (iVar4 != 0) {
      uVar1 = (uint)uStack_84 >> 0x10;
      uStack_84 = CONCAT22((short)uVar1,*(undefined2 *)(puVar6[4] + 2));
      uStack_84 = CONCAT22(*(undefined2 *)(puVar6[4] + 4),*(undefined2 *)(puVar6[4] + 2));
      puVar9 = (undefined4 *)puVar6[1];
      puVar7 = (undefined4 *)0x0;
      if (((uStack_44 != 0) && (puVar9[4] != 0)) &&
         (uStack_70 = CONCAT22(*(undefined2 *)(puVar9[4] + 4),*(undefined2 *)(puVar9[4] + 2)),
         *(uint *)(DAT_8c119d64 + ar4) <= uStack_70)) {
        iStack_3c = 1;
        puVar8 = (undefined4 *)puVar9[1];
        if ((*(ushort *)puVar8[4] & 2) == 0) {
          uStack_74 = CONCAT22(*(undefined2 *)(puVar8[4] + 4),*(undefined2 *)(puVar8[4] + 2));
          iVar5 = *(int *)(DAT_8c119e96 + ar4);
          iVar4 = *(int *)(DAT_8c119e96 + -4 + ar4);
          uStack_58 = (uint)*(ushort *)(*(int *)(uStack_74 * 8 + iVar4 + 4) * 0xc + iVar5 + 6);
          if (*(short *)(iVar5 + *(int *)(uStack_84 * 8 + iVar4 + 4) * 0xc + 8) == 0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = puVar8;
            if (uStack_58 == 0) {
              puVar7 = (undefined4 *)puVar8[1];
              puVar9 = puVar8;
            }
          }
        }
        else {
          puVar7 = (undefined4 *)puVar8[1];
          puVar9 = puVar8;
        }
      }
      iStack_64 = puVar9[3];
      puStack_80 = (uint *)puVar9[5];
      iStack_5c = iStack_68 - puVar9[3];
      if (iStack_40 != 0) {
        if (puStack_4c < puStack_80) {
          puStack_4c = puStack_80;
          **(int **)((int)&uStack_84 + (int)DAT_8c119e98) = iStack_5c;
        }
        if (cStack_6c == '\0') {
          iStack_54 = iStack_68 -
                      (uint)*(ushort *)(DAT_8c119e9a + ar4) *
                      (int)*(short *)(DAT_8c119e9a + -0x1c + ar4);
          puStack_60 = puStack_7c;
          iStack_50 = *(int *)(*(int *)(DAT_8c119e9c + ar4) + (int)puStack_7c * 4);
        }
        iStack_40 = 0;
      }
      if (a5[4] == 0) {
        piVar3 = (int *)(*(code *)PTR_FUN_8c119ea4)(ar4,a5,ar6,ar7);
      }
      else {
        piVar3 = (int *)a5[4];
      }
      a5[4] = (int)piStack_78;
      piStack_78 = a5;
      a5[3] = 0;
      *a5 = uStack_84;
      if (cStack_6c == '\0') {
        if (*(ushort *)puVar6[4] >> 2 == *(ushort *)(DAT_8c119f9e + ar4)) {
          puStack_60 = (uint *)((int)puStack_60 - ((int)puStack_7c - (int)puStack_80));
          iStack_54 = iStack_54 - iStack_5c;
          iStack_50 = iStack_50 -
                      (*(int *)((int)puStack_7c * 4 + *(int *)(DAT_8c119fa0 + ar4)) -
                      *(int *)((int)puStack_80 * 4 + *(int *)(DAT_8c119fa0 + ar4)));
        }
        if ((*(ushort *)(uStack_84 * 2 + *(int *)(DAT_8c119fa2 + ar4)) & 0x80) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)*(short *)(DAT_8c119fa4 + ar4);
        }
        *(undefined2 *)(a5 + 5) = puStack_7c._0_2_;
        iVar4 = (iStack_68 - iVar4) - iStack_64;
        a5[2] = iVar4;
        ar7 = puStack_80;
        iVar4 = FUN_8c119b16(ar4,iVar4,puStack_7c,puStack_80);
        a5[1] = iVar4;
        ar6 = puStack_7c;
      }
      else {
        ar6 = (uint *)puVar6[4];
        uVar2 = (*(code *)PTR_FUN_8c119ea8)(ar4,uStack_84,ar6,ar7);
        *(short *)((int)a5 + 0x16) = (short)uVar2;
      }
      if (iStack_3c != 0) {
        if (puVar7 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)puVar9[1];
          if (uStack_58 == 0) {
            puStack_80 = (uint *)puVar9[5];
            iStack_64 = puVar9[3];
          }
        }
        else if (puVar7[4] != 0) {
          if ((*(ushort *)puVar7[4] & 2) != 0) {
            puStack_80 = (uint *)puVar7[5];
            iStack_64 = puVar7[3];
            puVar9 = puVar7;
          }
          puVar9 = (undefined4 *)puVar9[1];
        }
        iStack_3c = 0;
      }
      puStack_7c = puStack_80;
      iStack_68 = iStack_64;
      a5 = piVar3;
      if (puVar9 == (undefined4 *)0x0) break;
      puVar6 = puVar9;
      iVar4 = puVar9[4];
    }
  }
  if (piStack_78 == (int *)0x0) {
    piVar10 = (int *)0x0;
    piVar3 = a5;
  }
  else {
    if (a5[4] == 0) {
      piVar3 = (int *)(*(code *)PTR_FUN_8c119fac)(ar4,a5,ar6,ar7);
    }
    else {
      piVar3 = (int *)a5[4];
    }
    a5[3] = (int)piStack_78;
    if ((uint)*(ushort *)(piStack_78 + 5) < *puStack_48) {
      *puStack_48 = (uint)*(ushort *)(piStack_78 + 5);
      **(int **)((int)&uStack_84 + (int)DAT_8c11a0d6) = piStack_78[2];
    }
    piVar10 = a5;
    if (cStack_6c == '\0') {
      a5[2] = iStack_54;
      a5[1] = iStack_50;
      *(short *)(a5 + 5) = (short)puStack_60;
    }
  }
  *(int **)(DAT_8c11a0d8 + ar4) = piVar3;
  **(uint **)((int)&uStack_84 + (int)DAT_8c11a0da) = (uint)puStack_4c;
  return piVar10;
}



/* FUN_8c11a014 @ 8c11a014 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c11a014(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = *(undefined4 **)(DAT_8c11a0dc + ar4);
  puVar1 = (undefined4 *)0x0;
  for (; ar5 != 0; ar5 = *(int *)(ar5 + 8)) {
    puVar5 = *(undefined4 **)(DAT_8c11a0dc + ar4);
    if (puVar5[1] == 0) {
      uVar2 = (*(code *)PTR_FUN_8c11a0e4)(ar4,puVar5);
      *(undefined4 *)(DAT_8c11a0dc + ar4) = uVar2;
    }
    else {
      *(undefined4 *)(DAT_8c11a0dc + ar4) = puVar5[1];
    }
    puVar5[4] = *(undefined4 *)(ar5 + 0x10);
    *puVar5 = 1;
    puVar5[3] = *(undefined4 *)(ar5 + 0xc);
    puVar5[5] = *(undefined4 *)(ar5 + 0x14);
    piVar3 = *(int **)(ar5 + 4);
    puVar5[1] = piVar3;
    *piVar3 = *piVar3 + 1;
    puVar5[2] = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = puVar5;
    }
    puVar1 = puVar5;
  }
  *puVar4 = 0;
  return puVar4;
}



/* FUN_8c11a02c @ 8c11a02c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c11a02c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  int unaff_r12;
  int unaff_r13;
  undefined4 *a5;
  char in_T;
  
  puVar3 = *(undefined4 **)(in_r0 + unaff_r12);
  if (in_T != '\x01') {
    do {
      a5 = *(undefined4 **)(DAT_8c11a0dc + unaff_r12);
      if (a5[1] == 0) {
        uVar1 = (*(code *)PTR_FUN_8c11a0e4)(unaff_r12,a5,ar6,ar7);
        *(undefined4 *)(DAT_8c11a0dc + unaff_r12) = uVar1;
      }
      else {
        *(undefined4 *)(DAT_8c11a0dc + unaff_r12) = a5[1];
      }
      a5[4] = *(undefined4 *)(unaff_r13 + 0x10);
      *a5 = 1;
      a5[3] = *(undefined4 *)(unaff_r13 + 0xc);
      a5[5] = *(undefined4 *)(unaff_r13 + 0x14);
      piVar2 = *(int **)(unaff_r13 + 4);
      a5[1] = piVar2;
      *piVar2 = *piVar2 + 1;
      a5[2] = unaff_r10;
      if (unaff_r11 != (undefined4 *)0x0) {
        unaff_r11[2] = a5;
      }
      unaff_r13 = *(int *)(unaff_r13 + 8);
      unaff_r11 = a5;
    } while (unaff_r13 != 0);
  }
  *puVar3 = unaff_r10;
  return puVar3;
}



/* FUN_8c11a09e @ 8c11a09e callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c11a09e(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = ar4[3];
  puVar3 = (undefined4 *)ar4[2];
  puVar2 = ar4;
  while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
    if ((uint)puVar1[3] < uVar4) {
      uVar5 = *ar4;
      puVar2[2] = puVar1[2];
      puVar1[2] = ar4;
      *ar4 = 1;
      *puVar1 = uVar5;
      uVar4 = puVar1[3];
      puVar3 = (undefined4 *)puVar2[2];
      ar4 = puVar1;
    }
    else {
      puVar3 = (undefined4 *)puVar1[2];
      puVar2 = puVar1;
    }
  }
  return ar4;
}



/* FUN_8c11a0e8 @ 8c11a0e8 callers=1 callees=4 */

/* WARNING: Unknown calling convention */

int * FUN_8c11a0e8(int ar4,int *ar5,uint ar6,uint ar7)

{
  int *a5;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *a5_00;
  char cVar6;
  int *piVar7;
  int *a5_01;
  int *piVar8;
  int *piVar9;
  undefined4 uStack_44;
  int *piStack_40;
  int *piStack_38;
  int iStack_30;
  int *piStack_2c;
  uint uStack_28;
  int iStack_24;
  
  cVar6 = (char)ar6;
  piVar8 = *(int **)(DAT_8c11a1da + ar4);
  piStack_38 = (int *)0x0;
  piVar9 = (int *)ar5[2];
  piStack_40 = (int *)0x0;
  a5_01 = *(int **)(DAT_8c11a1dc + ar4);
  iStack_24 = 0;
  iStack_30 = 1;
  uStack_28 = 0;
  piStack_2c = (int *)0x0;
  a5_00 = ar5;
  if (piVar9 != (int *)0x0) {
    if (cVar6 == '\0') {
      piStack_2c = (int *)(((int)*(short *)((int)ar5 + 2) + *(int *)(DAT_8c11a1de + ar4)) -
                          (uint)*(ushort *)(DAT_8c11a1e0 + ar4) *
                          (int)*(short *)(DAT_8c11a1e2 + ar4));
      iStack_30 = *(int *)(DAT_8c11a1e4 + ar4);
      uStack_28 = *(uint *)(*(int *)(DAT_8c11a1e6 + ar4) + iStack_30 * 4);
    }
    if (piVar8[4] == 0) {
      piVar4 = (int *)(*(code *)PTR_FUN_8c11a1f0)(ar4,piVar8,ar6,ar7);
    }
    else {
      piVar4 = (int *)piVar8[4];
    }
    uStack_44 = (int *)CONCAT22(*(undefined2 *)(ar5[3] + 4),*(undefined2 *)(ar5[3] + 2));
    piVar8[4] = 0;
    piVar8[3] = 0;
    if (cVar6 == '\0') {
      iVar3 = (int)DAT_8c11a1e8;
      *(undefined2 *)(piVar8 + 5) = *(undefined2 *)(DAT_8c11a1e4 + ar4);
      if ((*(ushort *)((int)uStack_44 * 2 + *(int *)(iVar3 + ar4)) & 0x80) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)*(short *)(DAT_8c11a1e2 + ar4);
      }
      piVar8[2] = (((int)*(short *)((int)ar5 + 2) + *(int *)(DAT_8c11a30c + ar4)) - piVar9[3]) -
                  iVar3;
      a5_00 = (int *)piVar8[2];
      ar6 = (uint)*(ushort *)(piVar8 + 5);
      ar7 = piVar9[5] & 0xffff;
      iVar3 = FUN_8c119b16(ar4,a5_00,ar6,ar7);
      piVar8[1] = iVar3;
    }
    else {
      ar6 = ar5[3];
      a5_00 = uStack_44;
      uVar2 = (*(code *)PTR_FUN_8c11a1f4)(ar4,uStack_44,ar6,ar7);
      *(short *)((int)piVar8 + 0x16) = (short)uVar2;
    }
    *piVar8 = (int)uStack_44;
    piVar7 = piVar8;
    piStack_38 = piVar8;
    while (piVar1 = piStack_40, piVar8 = piVar4, a5 = piVar9, a5 != (int *)0x0) {
      piVar4 = piVar8;
      if (a5[4] == 0) {
        piVar9 = (int *)0x0;
        piStack_40 = piVar1;
      }
      else {
        piVar9 = (int *)a5[1];
        piStack_40 = piVar7;
        if ((*(ushort *)a5[4] & 2) == 0) {
          if (piVar8[4] == 0) {
            piVar4 = (int *)(*(code *)PTR_FUN_8c11a31c)(ar4,piVar8,ar6,ar7);
          }
          else {
            piVar4 = (int *)piVar8[4];
          }
          uStack_44 = (int *)CONCAT22(*(undefined2 *)(a5[4] + 4),*(undefined2 *)(a5[4] + 2));
          piVar8[4] = (int)piStack_38;
          piVar8[3] = 0;
          if (cVar6 == '\0') {
            ar6 = a5[5];
            ar7 = piVar9[5];
            if (*(ushort *)a5[4] >> 2 == *(ushort *)(DAT_8c11a30e + ar4)) {
              iStack_30 = iStack_30 - (ar6 - ar7);
              piStack_2c = (int *)((int)piStack_2c - (a5[3] - *(int *)(a5[1] + 0xc)));
              uStack_28 = uStack_28 -
                          (*(int *)(ar6 * 4 + *(int *)(DAT_8c11a310 + ar4)) -
                          *(int *)(ar7 * 4 + *(int *)(DAT_8c11a310 + ar4)));
            }
            if ((*(ushort *)((int)uStack_44 * 2 + *(int *)(DAT_8c11a312 + ar4)) & 0x80) == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = (int)*(short *)(DAT_8c11a314 + ar4);
            }
            *(short *)(piVar8 + 5) = (short)ar6;
            a5_00 = (int *)((a5[3] - piVar9[3]) - iVar3);
            piVar8[2] = (int)a5_00;
            iVar3 = FUN_8c119b16(ar4,a5_00,ar6,ar7);
            piVar8[1] = iVar3;
          }
          else {
            ar6 = a5[4];
            a5_00 = uStack_44;
            uVar2 = (*(code *)PTR_FUN_8c11a320)(ar4,uStack_44,ar6,ar7);
            *(short *)((int)piVar8 + 0x16) = (short)uVar2;
          }
          *piVar8 = (int)uStack_44;
          piVar7 = a5;
          if ((a5 != (int *)ar5[2]) && (1 < *a5)) {
            a5_00 = a5;
            piVar7 = (int *)FUN_8c11a014(ar4,a5,ar6,ar7);
          }
          a5_01 = (int *)*a5_01;
          if (a5_01 == *(int **)(DAT_8c11a41c + ar4)) {
            a5_00 = a5_01;
            (*(code *)PTR_FUN_8c11a424)(ar4,a5_01,ar6,ar7);
          }
          a5_01[2] = (int)piVar7;
          piStack_38 = piVar8;
          piStack_40 = piVar7;
          if ((piVar7 != a5) && (piVar1 != (int *)0x0)) {
            *piVar7 = *piVar7 + 1;
            iVar3 = *(int *)piVar1[1] + -1;
            *(int *)piVar1[1] = iVar3;
            if (iVar3 < 1) {
              a5_00 = (int *)piVar1[1];
              (*(code *)PTR_FUN_8c11a428)(ar4,a5_00,ar6,ar7);
            }
            piVar1[1] = (int)piVar7;
          }
        }
      }
    }
  }
  piVar9 = *(int **)(DAT_8c11a41e + ar4);
  iVar3 = (int)DAT_8c11a41e;
  *(int *)(iVar3 + ar4) = *a5_01;
  if (*(int *)(iVar3 + ar4) == *(int *)(iVar3 + -4 + ar4)) {
    a5_00 = *(int **)(DAT_8c11a41e + ar4);
    (*(code *)PTR_FUN_8c11a424)(ar4,a5_00,ar6,ar7);
  }
  if (piStack_38 == (int *)0x0) {
    piStack_40 = (int *)0x0;
    piVar4 = piVar8;
  }
  else {
    if (piVar8[4] == 0) {
      a5_00 = piVar8;
      piVar4 = (int *)(*(code *)PTR_FUN_8c11a42c)(ar4,piVar8,ar6,ar7);
    }
    else {
      piVar4 = (int *)piVar8[4];
    }
    piVar8[3] = (int)piStack_38;
    piStack_40 = piVar8;
    if (cVar6 == '\0') {
      piVar8[2] = (int)*(short *)((int)ar5 + 2) + *(int *)(DAT_8c11a536 + ar4);
      iVar3 = FUN_8c119a18(iStack_30,piStack_2c,uStack_28,ar7);
      piVar8[1] = iVar3;
      a5_00 = piStack_2c;
      ar6 = uStack_28;
    }
  }
  piVar8 = (int *)0x0;
  for (; a5_01 != piVar9; a5_01 = (int *)a5_01[1]) {
    piVar7 = (int *)a5_01[2];
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)0x0;
      if (piVar7[2] != 0) {
        piVar8 = (int *)FUN_8c11a09e(piVar7[2],a5_00,ar6,ar7);
        iStack_24 = piVar8[3] - piVar7[3];
        *piVar8 = *piVar7 + -1;
        piVar7[2] = 0;
      }
    }
    else {
      iVar3 = FUN_8c11a014(ar4,piVar7,ar6,ar7);
      *piVar8 = *piVar8 + 1;
      iVar5 = **(int **)(iVar3 + 4) + -1;
      **(int **)(iVar3 + 4) = iVar5;
      a5_00 = piVar7;
      if (iVar5 < 1) {
        a5_00 = *(int **)(iVar3 + 4);
        (*(code *)PTR_FUN_8c11a53c)(ar4,a5_00,ar6,ar7);
      }
      *(int **)(iVar3 + 4) = piVar8;
      iVar5 = *(int *)(iVar3 + 0xc);
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + iStack_24;
      piVar8 = (int *)FUN_8c11a09e(iVar3,a5_00,ar6,ar7);
      iStack_24 = piVar8[3] - iVar5;
    }
  }
  if (piVar8 == (int *)0x0) {
    if (ar5[2] != 0) {
      iVar3 = *(int *)ar5[2] + -1;
      *(int *)ar5[2] = iVar3;
      if (iVar3 < 1) {
        (*(code *)PTR_FUN_8c11a630)(ar4,ar5[2],ar6,ar7);
      }
      ar5[2] = 0;
    }
    *(undefined2 *)((int)ar5 + 2) = DAT_8c11a620;
  }
  else {
    *piVar8 = *piVar8 + 1;
    iVar3 = *(int *)ar5[2] + -1;
    *(int *)ar5[2] = iVar3;
    if (iVar3 < 1) {
      (*(code *)PTR_FUN_8c11a53c)(ar4,ar5[2],ar6,ar7);
    }
    ar5[2] = (int)piVar8;
    *(short *)((int)ar5 + 2) = (short)iStack_24 + *(short *)((int)ar5 + 2);
  }
  *(int **)(DAT_8c11a622 + ar4) = piVar9;
  *(int **)(DAT_8c11a624 + ar4) = piVar4;
  return piStack_40;
}



/* FUN_8c11a588 @ 8c11a588 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c11a588(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_c;
  
  if (ar6 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    iVar1 = *(int *)(*ar5 + 8);
    while (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        iVar1 = 0;
      }
      else {
        if (((**(ushort **)(iVar1 + 0x10) & 1) != 0) &&
           (uStack_c = CONCAT22(*(undefined2 *)(*(int *)(iVar1 + 0x10) + 4),
                                *(undefined2 *)(*(int *)(iVar1 + 0x10) + 2)),
           (*(ushort *)(*(int *)(DAT_8c11a628 + ar4) + uStack_c * 2) & DAT_8c11a626) != 0)) {
          iVar2 = iVar2 + 1;
        }
        iVar1 = *(int *)(iVar1 + 4);
      }
    }
  }
  return iVar2;
}



/* FUN_8c11a634 @ 8c11a634 callers=2 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c11a634(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *a7;
  int a5;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  iVar3 = ar4[0x15];
  a5 = 0;
  uVar4 = 0;
  if ((short)ar4[0x14] != 0) {
    do {
      if (((**(ushort **)(iVar3 + 0xc) & 1) != 0) &&
         (uStack_28 = CONCAT22(*(undefined2 *)(*(int *)(iVar3 + 0xc) + 4),
                               *(undefined2 *)(*(int *)(iVar3 + 0xc) + 2)),
         (*(ushort *)(*(int *)((int)DAT_8c11a74c + (int)ar4) + uStack_28 * 2) & 2) != 0)) {
        a5 = a5 + 1;
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(iVar3 + 0x18);
    } while (uVar4 < *(ushort *)(ar4 + 0x14));
  }
  if (a5 == 0) {
    *ar5 = 0;
  }
  else {
    uVar1 = (**(code **)(*ar4 + 0x10))(*ar4,a5 << 2,ar6,ar7);
    *ar5 = uVar1;
    iVar3 = ar4[0x15];
    piStack_24 = (int *)*ar5;
    if (*(undefined **)((int)DAT_8c11a74e + (int)ar4) == PTR_FUN_8c11a754) {
      uStack_34 = 0;
      if ((short)ar4[0x14] != 0) {
        do {
          if ((**(ushort **)(iVar3 + 0xc) & 1) == 0) {
            iVar2 = **(int **)(iVar3 + 8) + -1;
            **(int **)(iVar3 + 8) = iVar2;
            if (iVar2 < 1) {
              (*(code *)PTR_FUN_8c11a880)(ar4,*(undefined4 *)(iVar3 + 8),ar6,ar7);
            }
            *(undefined4 *)(iVar3 + 8) = 0;
          }
          else {
            uStack_30 = CONCAT22(*(undefined2 *)(*(int *)(iVar3 + 0xc) + 4),
                                 *(undefined2 *)(*(int *)(iVar3 + 0xc) + 2));
            if ((*(ushort *)(*(int *)((int)DAT_8c11a874 + (int)ar4) + uStack_30 * 2) & 2) == 0) {
              iVar2 = **(int **)(iVar3 + 8) + -1;
              **(int **)(iVar3 + 8) = iVar2;
              if (iVar2 < 1) {
                (*(code *)PTR_FUN_8c11a880)(ar4,*(undefined4 *)(iVar3 + 8),ar6,ar7);
              }
              *(undefined4 *)(iVar3 + 8) = 0;
            }
            else {
              *piStack_24 = iVar3;
              piStack_24 = piStack_24 + 1;
            }
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uStack_34 = uStack_34 + 1;
        } while (uStack_34 < *(ushort *)(ar4 + 0x14));
      }
    }
    else {
      uStack_34 = 0;
      if ((short)ar4[0x14] != 0) {
        do {
          if ((**(ushort **)(iVar3 + 0xc) & 1) == 0) {
            iVar2 = **(int **)(iVar3 + 8) + -1;
            **(int **)(iVar3 + 8) = iVar2;
            if (iVar2 < 1) {
              (*(code *)PTR_FUN_8c11a87c)(ar4,*(undefined4 *)(iVar3 + 8),ar6,ar7);
            }
            *(undefined4 *)(iVar3 + 8) = 0;
          }
          else {
            uStack_2c = CONCAT22(*(undefined2 *)(*(int *)(iVar3 + 0xc) + 4),
                                 *(undefined2 *)(*(int *)(iVar3 + 0xc) + 2));
            if ((*(ushort *)(*(int *)((int)DAT_8c11a74c + (int)ar4) + uStack_2c * 2) & 2) == 0) {
              iVar2 = **(int **)(iVar3 + 8) + -1;
              **(int **)(iVar3 + 8) = iVar2;
              if (iVar2 < 1) {
                (*(code *)PTR_FUN_8c11a758)(ar4,*(undefined4 *)(iVar3 + 8),ar6,ar7);
              }
              *(undefined4 *)(iVar3 + 8) = 0;
            }
            else {
              *piStack_24 = iVar3;
              piStack_24 = piStack_24 + 1;
            }
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uStack_34 = uStack_34 + 1;
        } while (uStack_34 < *(ushort *)(ar4 + 0x14));
      }
    }
    a7 = PTR_LAB_8c11a884;
    (*(code *)PTR_FUN_8c11a888)(*ar5,a5,4,PTR_LAB_8c11a884);
    uVar1 = FUN_8c11a588(ar4,*ar5,a5,a7);
    *(short *)((int)DAT_8c11a876 + (int)ar4) = (short)uVar1;
  }
  return a5;
}



/* FUN_8c11a88c @ 8c11a88c callers=4 callees=3 */

/* WARNING: Unknown calling convention */

int FUN_8c11a88c(int *ar4,short *ar5,short *ar6,undefined4 ar7)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int *a7;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar4 = FUN_8c11a634(ar4,&piStack_38,ar6,ar7);
  if (uVar4 == 0) {
    iVar6 = (int)DAT_8c11aa98;
    *(undefined4 *)(iVar6 + (int)ar4) = 0;
  }
  else {
    iStack_30 = -1;
    uVar10 = 0;
    iStack_34 = 0;
    iStack_28 = 0;
    iStack_2c = 0;
    sVar2 = *(short *)(*piStack_38 + 2);
    a7 = (int *)(int)sVar2;
    iVar7 = 0;
    if (uVar4 != 0) {
      do {
        uVar10 = uVar10 + 1;
        ar6 = (short *)(*(int *)((int)piStack_38 + iVar7) + 2);
        *ar6 = *ar6 - sVar2;
        iVar7 = iVar7 + 4;
      } while (uVar10 < uVar4);
    }
    if ((*(undefined **)((int)DAT_8c11a954 + (int)ar4) == PTR_FUN_8c11a95c) &&
       ((*(char *)((int)DAT_8c11a956 + (int)ar4) == '\0' || (((uint)ar5 & 0xff) != 0)))) {
      uVar10 = 1;
      ar6 = ar5;
      iVar7 = FUN_8c11a0e8(ar4,*piStack_38,ar5,a7);
      iVar6 = iVar7;
      if ((iVar7 != 0) && (iVar5 = iVar7, 1 < *(uint *)((int)DAT_8c11aa96 + (int)ar4))) {
        do {
          uVar8 = 1;
          iVar6 = *piStack_38;
          sVar2 = *(short *)(iVar6 + 2);
          if (1 < uVar4) {
            sVar3 = *(short *)(piStack_38[1] + 2);
            while (sVar3 < sVar2) {
              iVar9 = uVar8 - 1;
              piVar1 = piStack_38 + uVar8;
              uVar8 = uVar8 + 1;
              piStack_38[iVar9] = *piVar1;
              if (uVar4 <= uVar8) break;
              sVar3 = *(short *)(piStack_38[uVar8] + 2);
            }
          }
          piStack_38[uVar8 - 1] = iVar6;
          ar6 = ar5;
          iVar6 = FUN_8c11a0e8(ar4,*piStack_38,ar5,a7);
          *(int *)(iVar5 + 0x10) = iVar6;
          uVar10 = uVar10 + 1;
        } while ((iVar6 != 0) && (iVar5 = iVar6, uVar10 < *(uint *)((int)DAT_8c11aa96 + (int)ar4)));
      }
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0x10) = 0;
      }
    }
    else {
      uVar10 = *(uint *)((int)DAT_8c11a958 + (int)ar4);
      if (uVar4 <= *(uint *)((int)DAT_8c11a958 + (int)ar4)) {
        uVar10 = uVar4;
      }
      iVar6 = uVar10 << 2;
      iVar7 = 0;
      while (uVar10 != 0) {
        iVar6 = iVar6 + -4;
        uVar10 = uVar10 - 1;
        a7 = &iStack_30;
        ar6 = ar5;
        iVar5 = FUN_8c119c68(ar4,*(undefined4 *)((int)piStack_38 + iVar6),ar5,a7);
        if (iVar5 != 0) {
          *(int *)(iVar5 + 0x10) = iVar7;
          iVar7 = iVar5;
        }
      }
    }
    *(int *)((int)DAT_8c11aa98 + (int)ar4) = iVar7;
    iStack_24 = *ar4;
    iVar6 = (**(code **)(iStack_24 + 0x18))(iStack_24,piStack_38,ar6,a7);
    if ((iVar7 != 0) && (((uint)ar5 & 0xff) == 0)) {
      iVar11 = iStack_28 + iStack_2c;
      iVar9 = *(int *)((int)DAT_8c11aa9c + (int)ar4);
      iVar12 = (iStack_30 + *(int *)((int)DAT_8c11aa9a + (int)ar4)) - iStack_34;
      iVar13 = *(int *)(*(int *)((int)DAT_8c11aa9a + (int)ar4) * 4 + iVar9);
      iVar5 = *(int *)(iStack_34 * 4 + iVar9);
      iVar6 = iStack_30 * 4;
      iVar9 = *(int *)(iVar6 + iVar9);
      for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x10)) {
        iVar6 = (*(code *)PTR_FUN_8c11aaa4)
                          ((uint)*(ushort *)(iVar7 + 0x14) - iVar12,*(int *)(iVar7 + 8) - iVar11,
                           *(int *)(iVar7 + 4) - ((iVar13 - iVar5) + iVar9),a7);
        *(int *)(iVar7 + 4) = iVar6;
      }
    }
  }
  return iVar6;
}



/* FUN_8c11aaa8 @ 8c11aaa8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11aaa8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(DAT_8c11ab46 + ar4);
  if (iVar5 != 0) {
    puVar3 = *(ushort **)(iVar5 + 0xc);
    if (*(undefined **)(DAT_8c11ab48 + ar4) == PTR_FUN_8c11ab50) {
      iVar2 = (int)puVar3 - *(int *)(ar4 + 0x48);
      uVar4 = (int)(iVar2 + (uint)(iVar2 < 0)) >> 1;
      if ((uVar4 < *(uint *)(ar4 + 0x38)) ||
         (*(int *)(DAT_8c11ab4e + ar4) + *(uint *)(ar4 + 0x38) <= uVar4)) {
        *(undefined2 *)(ar4 + 0x34) = 0;
      }
      else {
        *(short *)(ar4 + 0x34) = *(short *)(ar4 + 0x34) + 1;
      }
    }
    else {
      uVar1 = *puVar3;
      while ((uVar1 & 1) == 0) {
        puVar3 = puVar3 + 1;
        uVar1 = *puVar3;
      }
      iVar2 = *(int *)(puVar3 + 1);
      if (((*(ushort *)(iVar2 * 2 + *(int *)(DAT_8c11ab4a + ar4)) & 2) == 0) ||
         (iVar2 != *(int *)(DAT_8c11ab4c + ar4))) {
        *(undefined2 *)(ar4 + 0x34) = 0;
      }
      else {
        *(short *)(ar4 + 0x34) = *(short *)(ar4 + 0x34) + 1;
      }
      *(int *)(DAT_8c11ab4c + ar4) = iVar2;
    }
    if (*(uint *)(DAT_8c11ac32 + ar4) < (uint)*(ushort *)(ar4 + 0x34)) {
      if (*(undefined **)(DAT_8c11ac34 + ar4) == PTR_FUN_8c11ac3c) {
        iVar5 = *(int *)(iVar5 + 8);
        uVar1 = 0;
        if (iVar5 != 0) {
          iVar2 = *(int *)(iVar5 + 0x10);
          while (iVar2 != 0) {
            iVar2 = *(int *)(iVar5 + 0x10) - *(int *)(ar4 + 0x48);
            iVar5 = *(int *)(iVar5 + 4);
            if ((uint)((int)(iVar2 + (uint)(iVar2 < 0)) >> 1) <
                (uint)(*(int *)(ar4 + 0x40) + *(int *)(DAT_8c11ac36 + ar4) * -2)) {
              uVar1 = uVar1 + 1;
            }
            if (iVar5 == 0) break;
            iVar2 = *(int *)(iVar5 + 0x10);
          }
        }
        if (uVar1 < 0x10) {
          *(undefined2 *)(ar4 + 0x34) = 0;
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



/* FUN_8c11abc6 @ 8c11abc6 callers=3 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11abc6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(DAT_8c11ac38 + ar4) == 0) {
    ar5 = 0;
    uVar1 = 10;
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(DAT_8c11ac38 + ar4);
    uVar1 = 9;
  }
  uVar1 = (*(code *)PTR_FUN_8c11ac40)(ar4,uVar1,uVar2,ar5);
  return uVar1;
}



/* FUN_8c11abf0 @ 8c11abf0 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11abf0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c11ac44)(ar4,ar5,ar6,ar7);
  if ((uVar1 & 0xff) == 0) {
    FUN_8c11a88c(ar4,0,ar6,ar7);
    uVar1 = FUN_8c11abc6(ar4,0,ar6,ar7);
    if ((uVar1 & 0xff) == 0) {
      return 0;
    }
  }
  return 1;
}



/* FUN_8c11ac4c @ 8c11ac4c callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11ac4c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (*(code *)PTR_FUN_8c11ad48)(ar4,ar5,ar6,ar7);
  if ((uVar1 & 0xff) == 0) {
    *(undefined4 *)(DAT_8c11ad3c + -4 + ar4) = *(undefined4 *)(DAT_8c11ad3c + ar4);
    FUN_8c11a88c(ar4,1,ar6,ar7);
    if (*(int *)(DAT_8c11ad3e + ar4) == 0) {
      uVar3 = FUN_8c11abc6(ar4,0,ar6,ar7);
      return uVar3;
    }
    *(undefined4 *)(DAT_8c11ad40 + -8 + ar4) = *(undefined4 *)(DAT_8c11ad40 + ar4);
    uVar1 = (*(code *)PTR_FUN_8c11ad50)(ar4,*(undefined4 *)(DAT_8c11ad3e + ar4),ar6,ar7);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = (int)DAT_8c11ad42;
      *(undefined **)(iVar2 + ar4) = PTR_LAB_8c11ad54;
      *(undefined1 *)(iVar2 + 0x34 + ar4) = 1;
      uVar3 = (*(code *)PTR_FUN_8c11ad58)(ar4,0xd,0);
      return uVar3;
    }
  }
  return 1;
}



/* FUN_8c11ace2 @ 8c11ace2 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11ace2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 a5;
  int unaff_r14;
  
  FUN_8c11a88c(ar4,0,ar6,ar7);
  *(undefined **)(DAT_8c11ad42 + unaff_r14) = PTR_FUN_8c11ad5c;
  a5 = *(undefined4 *)(DAT_8c11ad44 + unaff_r14);
  uVar1 = FUN_8c11abc6(unaff_r14,a5,ar6,ar7);
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  (*(code *)PTR_FUN_8c11ad60)(unaff_r14,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c11ad64)(unaff_r14,a5,ar6,ar7);
  *(undefined1 *)(unaff_r14 + 0x7c) = 0;
  *(undefined1 *)(DAT_8c11ad46 + unaff_r14) = 0;
  return 0;
}



/* FUN_8c11ad68 @ 8c11ad68 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11ad68(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (*(code *)PTR_FUN_8c11ae48)(ar4,ar5,ar6,ar7);
  if ((uVar1 & 0xff) == 0) {
    uVar3 = 0;
    *(undefined4 *)(DAT_8c11ae3c + -4 + ar4) = *(undefined4 *)(DAT_8c11ae3c + ar4);
    FUN_8c11a88c(ar4,0,ar6,ar7);
    *(undefined4 *)(DAT_8c11ae3e + -8 + ar4) = *(undefined4 *)(DAT_8c11ae3e + ar4);
    uVar1 = (*(code *)PTR_FUN_8c11ae50)(ar4,uVar3,ar6,ar7);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = (int)DAT_8c11ae40;
      *(undefined **)(iVar2 + ar4) = PTR_FUN_8c11ae54;
      *(undefined1 *)(iVar2 + 0x34 + ar4) = 0;
      uVar3 = (*(code *)PTR_FUN_8c11ae58)(ar4,0xe,*(undefined4 *)(DAT_8c11ae42 + ar4),0);
      return uVar3;
    }
  }
  return 1;
}



/* FUN_8c11adde @ 8c11adde callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11adde(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  
  puStack_10 = ar5;
  puStack_c = ar6;
  if (ar5 == (undefined4 *)0x0) {
    (*(code *)PTR_FUN_8c11ae5c)(ar4,0,ar6,ar7);
    (*(code *)PTR_FUN_8c11ae60)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c11ae64)(ar4,ar5,ar6,ar7);
    *(undefined **)(DAT_8c11ae40 + ar4) = PTR_FUN_8c11ae68;
  }
  else {
    uVar1 = FUN_8c11a634(ar4,&uStack_14,ar6,ar7);
    *puStack_10 = uStack_14;
    *puStack_c = uVar1;
  }
  *(undefined1 *)(DAT_8c11ae44 + ar4) = 1;
  return 0;
}



/* FUN_8c11ae6c @ 8c11ae6c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c11ae6c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *a4;
  undefined4 *a4_00;
  int iVar1;
  int iVar2;
  
  a4 = (undefined4 *)
       (**(code **)(*ar4 + 0x10))
                 (*ar4,(*(int *)((int)DAT_8c11afae + (int)ar4) + (int)DAT_8c11afac) * 4,ar6,ar7);
  a4_00 = (undefined4 *)
          (**(code **)(*ar4 + 0x10))
                    (*ar4,(*(int *)((int)DAT_8c11afae + (int)ar4) + (int)DAT_8c11afac) * 4,ar6,ar7);
  iVar1 = (int)DAT_8c11afae;
  if (*(int *)(iVar1 + (int)ar4) == 0) {
    *a4 = 0;
    *a4_00 = 0;
  }
  else {
    iVar2 = (*(int *)(iVar1 + (int)ar4) + 1) * 4;
    (*(code *)PTR_memmove_8c11afbc)(a4,*(undefined4 *)(iVar1 + -8 + (int)ar4),iVar2,ar7);
    (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)DAT_8c11afb0 + (int)ar4),iVar2,ar7);
    iVar1 = (*(int *)((int)DAT_8c11afae + (int)ar4) + 1) * 4;
    (*(code *)PTR_memmove_8c11afbc)(a4_00,*(undefined4 *)(DAT_8c11afae + -4 + (int)ar4),iVar1,ar7);
    (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)DAT_8c11afb2 + (int)ar4),iVar1,ar7);
  }
  iVar1 = (int)DAT_8c11afb0;
  iVar2 = (int)DAT_8c11afb4;
  *(undefined4 **)(iVar1 + (int)ar4) = a4;
  *(undefined4 **)(iVar1 + 4 + (int)ar4) = a4_00;
  iVar1 = iVar1 + 8;
  *(int *)(iVar1 + (int)ar4) = *(int *)(iVar1 + (int)ar4) + iVar2;
  return iVar1;
}



/* FUN_8c11af3a @ 8c11af3a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11af3a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_FUN_8c11afc0;
  iVar2 = (*(code *)PTR_FUN_8c11afc0)
                    (**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6,ar7);
  while (iVar2 != 0) {
    iVar2 = (*(code *)puVar1)(**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6,ar7)
    ;
  }
  return 0;
}



/* FUN_8c11af7e @ 8c11af7e callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11af7e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = (*(code *)PTR_FUN_8c11afc0)
                    (**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6,ar7);
  if (iVar1 != 0) {
    if (*(undefined **)(ar4 + 0x18) == PTR_FUN_8c11afc4) {
      return 0;
    }
    iVar2 = (int)DAT_8c11b0f4;
    *(int *)(iVar2 + ar4) = *(int *)(iVar2 + ar4) + 1;
    iVar4 = iVar1;
    iVar2 = (**(code **)(iVar2 + 8 + ar4))(ar4,iVar1,ar6,ar7);
    if (iVar2 != 0) {
      (*(code *)PTR_FUN_8c11b10c)(ar4,0x77,ar6,ar7);
      ar7 = 0;
      ar6 = 0;
      *(undefined **)(ar4 + 0x18) = PTR_FUN_8c11b110;
      iVar4 = 0xb;
      uVar3 = (*(code *)PTR_FUN_8c11b114)(ar4,0xb,0,0);
      if ((uVar3 & 0xff) != 0) {
        return 1;
      }
    }
    if (*(char *)(DAT_8c11b0f6 + ar4) != '\0') {
      if (*(uint *)(DAT_8c11b0f8 + ar4) <= *(uint *)(DAT_8c11b0f4 + ar4)) {
        FUN_8c11ae6c(ar4,iVar4,ar6,ar7);
      }
      *(int *)((*(int *)(DAT_8c11b0f4 + ar4) + 1) * 4 + *(int *)(DAT_8c11b0fa + ar4)) =
           (int)*(short *)((uint)*(ushort *)(DAT_8c11b0fc + ar4) * 2 + iVar1) +
           *(int *)(*(int *)(DAT_8c11b0f4 + ar4) * 4 + *(int *)(DAT_8c11b0fa + ar4));
      iVar4 = *(int *)(DAT_8c11b0fe + ar4);
      *(int *)((*(int *)(DAT_8c11b0f4 + ar4) + 1) * 4 + iVar4) =
           (int)*(short *)(iVar1 + (uint)*(ushort *)(DAT_8c11b100 + ar4) * 2) +
           *(int *)(*(int *)(DAT_8c11b0f4 + ar4) * 4 + iVar4);
    }
    iVar1 = (*(code *)PTR_FUN_8c11b118)(*(undefined4 *)(ar4 + 0x2c),iVar4,ar6,ar7);
    iVar4 = iVar1 + (uint)*(ushort *)(*(int *)(ar4 + 0x28) + 0xc);
    uVar3 = (**(code **)(DAT_8c11b102 + ar4))(ar4,iVar1,iVar4,ar7);
    if ((uVar3 & 0xffff) == 0) {
      return 1;
    }
    if ((*(int *)(DAT_8c11b104 + ar4) != 0) &&
       (uVar3 = FUN_8c11aaa8(ar4,iVar1,iVar4,ar7), (uVar3 & 0xff) != 0)) {
      *(undefined **)(ar4 + 0x18) = PTR_FUN_8c11b110;
      uVar3 = (*(code *)PTR_FUN_8c11b114)(ar4,8,0,0);
      if ((uVar3 & 0xff) != 0) {
        return 1;
      }
    }
  }
  iVar1 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar1 + 0x40)) == *(int *)(iVar1 + 0x3c)
         ^ 1;
}



/* FUN_8c11b13e @ 8c11b13e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11b13e(int *ar4,uint ar5,uint *ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint a5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 a6;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  puVar1 = PTR_memset_8c11b24c;
  uVar11 = ar5 & 0xff;
  if (uVar11 == 4) {
    iVar2 = (int)DAT_8c11b240;
    ar4[6] = (int)PTR_FUN_8c11b248;
    uVar11 = (**(code **)(iVar2 + (int)ar4))(ar4,ar6,ar7,ar7);
  }
  else {
    if ((uVar11 == 0x21) || (uVar11 == 3)) {
      if ((uVar11 == 3) &&
         (uVar11 = (*(code *)PTR_FUN_8c11b250)(ar4,ar5,ar6,ar7), (uVar11 & 0xff) != 0)) {
        return 0;
      }
      uVar8 = 0;
      (*(code *)PTR_FUN_8c11b258)(ar4[0xb],0,ar6,ar7);
      iVar2 = (*(code *)PTR_FUN_8c11b25c)(ar4[0xb],uVar8,ar6,ar7);
      iVar12 = (uint)*(ushort *)(ar4[10] + 0xc) + iVar2;
      (*(code *)puVar1)(iVar12,0,(uint)(*(ushort *)(ar4[10] + 0xc) >> 1),ar7);
      (*(code *)puVar1)(iVar12,1,(uint)*(ushort *)((int)DAT_8c11b242 + (int)ar4),ar7);
      uVar11 = (**(code **)((int)DAT_8c11b244 + (int)ar4))(ar4,iVar2,iVar12,ar7);
      if ((uVar11 & 0xffff) == 0) {
        return 0;
      }
      ar4[6] = (int)PTR_FUN_8c11b260;
      return 1;
    }
    if (uVar11 == 5) {
      ar4[6] = (int)PTR_FUN_8c11b248;
      return 1;
    }
    if (uVar11 != 0x22) {
      if (uVar11 == 0x23) {
        puVar9 = ar6;
        (*(code *)PTR_FUN_8c11b314)(ar4,ar5,ar6,ar7);
        uVar11 = (*(code *)PTR_FUN_8c11b31c)(ar4,ar6,puVar9,ar7);
      }
      else if (uVar11 == 0x1c) {
        (*(code *)PTR_memset_8c11b24c)(*(undefined4 *)((int)DAT_8c11b312 + (int)ar4),0,ar4[0xf],ar7)
        ;
        piVar7 = (int *)0x0;
        a6 = 7;
        uVar8 = 0x80;
        if (ar7 != (int *)0x0) {
          do {
            uVar10 = *ar6;
            ar6 = ar6 + 1;
            piVar7 = (int *)((int)piVar7 + 1);
            uVar11 = -(uVar10 & 7);
            if ((int)uVar11 < 0) {
              bVar3 = (byte)(0x80 >> (~uVar11 & 0x1f) + 1);
            }
            else {
              bVar3 = (byte)(0x80 << (uVar11 & 0x1f));
            }
            uVar10 = uVar10 >> 3;
            *(byte *)(*(int *)((int)DAT_8c11b312 + (int)ar4) + uVar10) =
                 *(byte *)(*(int *)((int)DAT_8c11b312 + (int)ar4) + uVar10) | bVar3;
          } while (piVar7 < ar7);
        }
        (*(code *)PTR_FUN_8c11b320)(ar4,0x80,7,ar6);
        uVar11 = (*(code *)PTR_FUN_8c11b324)(ar4,uVar8,a6,ar6);
      }
      else {
        if (uVar11 == 0x1d) {
          *ar6 = *(uint *)((int)DAT_8c11b312 + (int)ar4);
          *ar7 = ar4[0xf];
          return 1;
        }
        if (uVar11 == 0x11) {
          return 1;
        }
        if (uVar11 == 0x1a) {
          uVar11 = *ar6;
          uVar10 = ar6[2];
          uVar4 = ar6[3];
          uVar5 = ar6[4];
          a5 = ar6[5];
          uVar6 = ar6[7];
          if (*(uint *)((int)DAT_8c11b42a + (int)ar4) != uVar11) {
            iVar2 = (int)DAT_8c11b42c;
            *(undefined1 *)(iVar2 + (int)ar4) = 1;
            *(uint *)(iVar2 + 4 + (int)ar4) = uVar11;
          }
          *(uint *)((int)DAT_8c11b42e + (int)ar4) = uVar5;
          uVar11 = (*(code *)PTR_FUN_8c11b43c)(ar4,uVar10,ar6,ar7);
          if ((uVar11 & 0xff) == 0) {
            if ((int)*(short *)((int)DAT_8c11b430 + (int)ar4) != a5) {
              (*(code *)PTR_FUN_8c11b440)(ar4,a5,ar6,ar7);
            }
            if (uVar4 == 0) {
              *(undefined4 *)((int)DAT_8c11b432 + (int)ar4) = 0;
            }
            else {
              *(undefined4 *)((int)DAT_8c11b432 + (int)ar4) = 1;
            }
            *(short *)((int)DAT_8c11b434 + (int)ar4) = (short)uVar6;
            return 1;
          }
          return 0;
        }
        if (uVar11 == 0x1b) {
          iVar2 = (int)DAT_8c11b42a;
          *ar6 = *(uint *)(iVar2 + (int)ar4);
          ar6[4] = *(uint *)(iVar2 + -0xc + (int)ar4);
          iVar12 = (int)DAT_8c11b430;
          ar6[2] = *(uint *)(iVar2 + -0x20 + (int)ar4);
          iVar2 = (int)DAT_8c11b432;
          ar6[5] = (int)*(short *)(iVar12 + (int)ar4);
          iVar12 = (int)DAT_8c11b434;
          ar6[3] = (uint)(*(int *)(iVar2 + (int)ar4) != 0);
          ar6[7] = (int)*(short *)(iVar12 + (int)ar4);
          return 1;
        }
        if (uVar11 == 0x15) {
          if (ar7 != (int *)0x1) {
            (*(code *)PTR_FUN_8c11b444)(ar4,ar6,ar6,ar7);
            return 1;
          }
          uVar11 = (*(code *)PTR_FUN_8c11b444)(ar4,0,ar6,1);
LAB_8c11b488:
          *ar6 = uVar11;
          return 1;
        }
        if (uVar11 == 0x17) {
          puVar9 = ar6;
          (*(code *)PTR_FUN_8c11b4cc)(ar4,ar5,ar6,ar7);
          uVar11 = (*(code *)PTR_FUN_8c11b4d4)(ar4,ar6,puVar9,ar7);
        }
        else {
          if (uVar11 == 0x18) {
            if (ar7 != (int *)0x1) {
              (*(code *)PTR_FUN_8c11b4d8)(ar4,ar6,ar6,ar7);
              return 1;
            }
            uVar11 = (*(code *)PTR_FUN_8c11b4d8)(ar4,0,ar6,1);
            goto LAB_8c11b488;
          }
          if (uVar11 != 0x19) {
            if (uVar11 == 0x1e) {
              (*(code *)PTR_FUN_8c11b4e0)(*(undefined4 *)ar4[4],0,ar6,ar7);
              *(undefined **)((int)DAT_8c11b4c8 + (int)ar4) = PTR_FUN_8c11b4e4;
              return 1;
            }
            if (uVar11 == (int)DAT_8c11b5fe) {
              (*(code *)PTR_FUN_8c11b608)(ar4,ar5,ar6,ar7);
              (*(code *)PTR_FUN_8c11b610)(ar4,ar5,ar6,ar7);
              (*(code *)PTR_FUN_8c11b614)(ar4,ar5,ar6,ar7);
              (*(code *)PTR_FUN_8c11b618)(ar4,ar5,ar6,ar7);
              (*(code *)PTR_FUN_8c11b61c)(ar4,ar5,ar6,ar7);
              if (*(int *)((int)DAT_8c11b600 + (int)ar4) != 0) {
                (**(code **)(*ar4 + 0x18))
                          (*ar4,*(undefined4 *)((int)DAT_8c11b600 + (int)ar4),ar6,ar7);
              }
              (**(code **)(*ar4 + 0x18))(*ar4,ar4[3],ar6,ar7);
              (**(code **)(*ar4 + 0x18))(*ar4,ar4[4],ar6,ar7);
              (**(code **)(*ar4 + 0x18))(*ar4,ar4,ar6,ar7);
              return 1;
            }
            return 0;
          }
          uVar11 = (*(code *)PTR_FUN_8c11b4dc)(ar4,ar6,ar6,ar7);
        }
      }
      if ((uVar11 & 0xff) == 0) {
        return 1;
      }
      return 0;
    }
    uVar11 = (*(code *)PTR_FUN_8c11b264)(ar4,ar6,ar6,ar7);
  }
  if ((uVar11 & 0xff) != 0) {
    return 0;
  }
  return 1;
}



/* FUN_8c11b5a0 @ 8c11b5a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int * FUN_8c11b5a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *a5;
  
  iVar6 = *(int *)(ar4 + 0x54);
  uVar4 = 1;
  if (1 < *(ushort *)(ar4 + 0x50)) {
    do {
      uVar4 = uVar4 + 1;
      iVar6 = *(int *)(iVar6 + 0x18);
    } while (uVar4 < *(ushort *)(ar4 + 0x50));
  }
  piVar5 = *(int **)(iVar6 + 8);
  a5 = piVar5;
  if (*(int *)(DAT_8c11b602 + ar4) == 0) {
    sVar1 = *(short *)(DAT_8c11b604 + ar4);
    a5 = *(int **)(DAT_8c11b606 + ar4);
    if (a5[1] == 0) {
      uVar2 = (*(code *)PTR_FUN_8c11b620)(ar4,a5,ar6,ar7);
      *(undefined4 *)(DAT_8c11b606 + ar4) = uVar2;
    }
    else {
      *(int *)(DAT_8c11b606 + ar4) = a5[1];
    }
    iVar3 = (int)DAT_8c11b69c;
    a5[1] = (int)piVar5;
    *piVar5 = *piVar5 + 1;
    a5[4] = *(int *)(iVar6 + 0xc);
    *a5 = 0;
    iVar6 = (int)DAT_8c11b69e;
    a5[5] = *(int *)(iVar3 + ar4);
    a5[3] = (int)sVar1 + *(int *)(iVar6 + ar4);
    a5[5] = a5[5] + 1;
  }
  return a5;
}



/* FUN_8c11b666 @ 8c11b666 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c11b666(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c11b6b0)(ar4,ar5,ar7,ar7);
  if (iVar1 != 0) {
    iVar2 = (int)DAT_8c11b6a2;
    *(undefined **)(iVar2 + iVar1) = PTR_FUN_8c11b6b4;
    *(undefined4 *)(iVar2 + -4 + iVar1) = 0;
  }
  return iVar1;
}



/* FUN_8c11b6b8 @ 8c11b6b8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c11b782) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11b6b8(int ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint a6;
  double dVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  undefined4 in_fr5;
  undefined4 in_fr4;
  bool bVar18;
  byte in_FPSCR_CAUSE;
  byte bVar19;
  byte bVar20;
  byte in_FPSCR_DN;
  byte bVar21;
  byte in_FPSCR_PR;
  byte bVar22;
  byte in_FPSCR_SZ;
  double dStack_20;
  
  uVar10 = 1;
  if (in_FPSCR_SZ == 0) {
    dStack_20 = (double)CONCAT44(dStack_20._4_4_,in_fr4);
  }
  else {
    dStack_20 = (double)CONCAT44(in_fr4,in_fr5);
  }
  uVar12 = 0x1c;
  piVar4 = (int *)(**(code **)(ar4 + 0x14))(ar4,1,0x1c,ar7);
  puVar2 = PTR_FUN_8c11b904;
  if (piVar4 != (int *)0x0) {
    uVar9 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c11b908;
    bVar19 = 0;
    bVar20 = 0;
    bVar22 = (byte)((uVar9 & 0x80000) >> 0x13);
    bVar21 = (byte)((uVar9 & 0x100000) >> 0x14);
    iVar5 = (*(code *)PTR_FUN_8c11b904)(ar4,uVar10,uVar12,ar7);
    *piVar4 = iVar5;
    puVar3 = PTR_FUN_8c11b90c;
    if (iVar5 != 0) {
      uVar13 = (uint)*(ushort *)((int)ar6 + 6);
      uVar10 = *ar6;
      uVar9 = ((uint)bVar19 << 0xc | (uint)bVar20 << 0x12 | (uint)bVar22 << 0x13 |
              (uint)bVar21 << 0x14) & DAT_8c11b908;
      uVar11 = (uint)*(ushort *)(ar6 + 1);
      bVar20 = 0;
      bVar19 = 0;
      bVar21 = (byte)((uVar9 & 0x80000) >> 0x13);
      bVar22 = (byte)((uVar9 & 0x100000) >> 0x14);
      (*(code *)PTR_FUN_8c11b90c)(*piVar4,uVar11,uVar13,uVar10);
      uVar9 = ((uint)bVar20 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar21 << 0x13 |
              (uint)bVar22 << 0x14) & DAT_8c11b908;
      bVar19 = 0;
      bVar21 = 0;
      bVar22 = (byte)((uVar9 & 0x80000) >> 0x13);
      bVar20 = (byte)((uVar9 & 0x100000) >> 0x14);
      iVar5 = (*(code *)puVar2)(ar4,uVar11,uVar13,uVar10);
      piVar4[1] = iVar5;
      if (iVar5 != 0) {
        uVar13 = (uint)*(ushort *)((int)ar6 + 0xe);
        uVar10 = ar6[2];
        uVar9 = ((uint)bVar19 << 0xc | (uint)bVar21 << 0x12 | (uint)bVar22 << 0x13 |
                (uint)bVar20 << 0x14) & DAT_8c11b908;
        uVar11 = (uint)*(ushort *)(ar6 + 3);
        bVar19 = 0;
        bVar21 = 0;
        bVar20 = (byte)((uVar9 & 0x80000) >> 0x13);
        bVar22 = (byte)((uVar9 & 0x100000) >> 0x14);
        (*(code *)puVar3)(piVar4[1],uVar11,uVar13,uVar10);
        uVar9 = ((uint)bVar19 << 0xc | (uint)bVar21 << 0x12 | (uint)bVar20 << 0x13 |
                (uint)bVar22 << 0x14) & DAT_8c11b908;
        bVar19 = 0;
        bVar21 = 0;
        bVar22 = (byte)((uVar9 & 0x80000) >> 0x13);
        bVar20 = (byte)((uVar9 & 0x100000) >> 0x14);
        iVar5 = (*(code *)puVar2)(ar4,uVar11,uVar13,uVar10);
        piVar4[3] = iVar5;
        if (iVar5 != 0) {
          a6 = (uint)*(ushort *)((int)ar6 + 0x16);
          uVar10 = ar6[4];
          uVar9 = ((uint)bVar19 << 0xc | (uint)bVar21 << 0x12 | (uint)bVar22 << 0x13 |
                  (uint)bVar20 << 0x14) & DAT_8c11b908;
          uVar13 = (uint)*(ushort *)(ar6 + 5);
          bVar19 = 0;
          bVar21 = 0;
          bVar22 = (byte)((uVar9 & 0x80000) >> 0x13);
          bVar20 = (byte)((uVar9 & 0x100000) >> 0x14);
          (*(code *)puVar3)(piVar4[3],uVar13,a6,uVar10);
          uVar11 = ((uint)bVar19 << 0xc | (uint)bVar21 << 0x12 | (uint)bVar22 << 0x13 |
                   (uint)bVar20 << 0x14) & DAT_8c11b908;
          uVar9 = (uVar11 & 0x80000) >> 0x13;
          cVar1 = (char)uVar9;
          uVar11 = (uVar11 & 0x100000) >> 0x14;
          fVar15 = (float)(ar5 + -1);
          if (ar5 + -1 < 0) {
            if (cVar1 == '\0') {
              fVar15 = fVar15 + DAT_8c11b910;
            }
            else {
              fVar15 = SUB84((double)CONCAT44(DAT_8c11b910,fVar15) +
                             (double)CONCAT44(DAT_8c11b910,fVar15),0);
            }
          }
          if ((char)uVar11 == '\0') {
            dStack_20 = (double)CONCAT44(dStack_20._0_4_,fVar15);
          }
          if (cVar1 == '\0') {
            fVar15 = SUB84(dStack_20,0) / (float)((ulonglong)dStack_20 >> 0x20);
          }
          else {
            fVar15 = SUB84(dStack_20 / dStack_20,0);
          }
          uVar9 = uVar9 << 0x13 | uVar11 << 0x14 | DAT_8c11b914 & 0x3fffff;
          cVar1 = (char)((uVar9 & 0x80000) >> 0x13);
          dVar14 = (double)fVar15;
          if ((char)((uVar9 & 0x100000) >> 0x14) == '\0') {
            dVar16 = (double)CONCAT44(DAT_8c11b918,DAT_8c11b91c);
          }
          else {
            dVar16 = (double)CONCAT44(DAT_8c11b91c,DAT_8c11b918);
          }
          if (cVar1 == '\0') {
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) +
                                      (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar14,0));
          }
          else {
            dVar14 = dVar14 + dVar16;
          }
          dVar16 = (double)DAT_8c11b920;
          fVar15 = (float)((ulonglong)dVar14 >> 0x20);
          fVar17 = (float)((ulonglong)dVar16 >> 0x20);
          if (cVar1 == '\0') {
            bVar18 = fVar15 < fVar17;
          }
          else {
            bVar18 = dVar14 < dVar16;
          }
          if (!bVar18) {
            if (cVar1 == '\0') {
              dVar14 = (double)CONCAT44(fVar15 - (fVar17 + fVar17),SUB84(dVar14,0));
            }
            else {
              dVar14 = dVar14 - (dVar16 + dVar16);
            }
          }
          if (cVar1 == '\0') {
            iVar5 = (int)(float)((ulonglong)dVar14 >> 0x20);
          }
          else {
            iVar5 = (int)dVar14;
          }
          iVar6 = (*(code *)puVar2)(ar4,uVar13,a6,uVar10);
          piVar4[4] = iVar6;
          if (iVar6 != 0) {
            uVar12 = 0;
            uVar10 = 1;
            (*(code *)puVar3)(piVar4[4],ar5,1,0);
            iVar6 = (*(code *)puVar2)(ar4,ar5,uVar10,uVar12);
            piVar4[5] = iVar6;
            if (iVar6 != 0) {
              uVar10 = 1;
              iVar5 = iVar5 + 2;
              iVar6 = iVar5;
              iVar8 = ar4;
              iVar7 = (*(code *)PTR_FUN_8c11b924)(piVar4[5],iVar5,1,ar4);
              if (iVar7 != 0) {
                iVar6 = (*(code *)PTR_FUN_8c11b928)(ar4,iVar6,uVar10,iVar8);
                piVar4[6] = iVar6;
                if (iVar6 != 0) {
                  uVar10 = 1;
                  iVar6 = ar4;
                  iVar8 = (*(code *)PTR_FUN_8c11b92c)(piVar4[6],1,iVar5,ar4);
                  if (iVar8 != 0) {
                    iVar5 = (*(code *)puVar2)(ar4,uVar10,iVar5,iVar6);
                    piVar4[2] = iVar5;
                    if ((iVar5 != 0) &&
                       (iVar5 = (*(code *)PTR_FUN_8c11b930)(piVar4[2],piVar4[1],ar4,iVar6),
                       iVar5 != 0)) {
                      return piVar4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



/* FUN_8c11b884 @ 8c11b884 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11b884(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_FUN_8c11b934;
  (*(code *)PTR_FUN_8c11b934)(*ar4);
  (*(code *)puVar1)(ar4[1],ar5);
  (*(code *)puVar1)(ar4[3],ar5);
  (*(code *)puVar1)(ar4[4],ar5);
  (*(code *)puVar1)(ar4[5],ar5);
  (*(code *)PTR_FUN_8c11b938)(ar4[6],ar5);
  (*(code *)puVar1)(ar4[2],ar5);
                    /* WARNING: Could not recover jumptable at 0x8c11b900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(ar5 + 0x18))(ar5,ar4);
  return uVar2;
}



/* FUN_8c11b88c @ 8c11b88c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11b88c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *unaff_r13;
  int unaff_r14;
  
  puVar1 = PTR_FUN_8c11b934;
  (*(code *)PTR_FUN_8c11b934)(*unaff_r13,ar5,ar6,ar7);
  (*(code *)puVar1)(unaff_r13[1],unaff_r14,ar6,ar7);
  (*(code *)puVar1)(unaff_r13[3],unaff_r14,ar6,ar7);
  (*(code *)puVar1)(unaff_r13[4],unaff_r14,ar6,ar7);
  (*(code *)puVar1)(unaff_r13[5],unaff_r14,ar6,ar7);
  (*(code *)PTR_FUN_8c11b938)(unaff_r13[6],unaff_r14,ar6,ar7);
  (*(code *)puVar1)(unaff_r13[2],unaff_r14,ar6,ar7);
                    /* WARNING: Could not recover jumptable at 0x8c11b900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(unaff_r14 + 0x18))();
  return uVar2;
}



/* FUN_8c11b93c @ 8c11b93c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11b93c(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 a5;
  uint uVar6;
  double *pdVar7;
  float *pfVar8;
  double *a6;
  double *a6_00;
  undefined8 *puVar9;
  double *a7;
  undefined4 *puVar10;
  double *pdVar11;
  float *pfVar12;
  int *piVar13;
  int a4;
  int *piVar14;
  int *a4_00;
  int *a4_01;
  double in_dr0;
  float fVar15;
  double in_dr2;
  undefined8 uVar16;
  uint in_fr5;
  double in_xd2;
  byte in_FPSCR_CAUSE;
  byte bVar17;
  byte bVar18;
  byte in_FPSCR_DN;
  byte bVar19;
  byte bVar20;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  uVar5 = ar4[1];
  piVar13 = (int *)*ar4;
  a5 = ar4[3];
  a4_01 = (int *)ar4[2];
  a4 = ar4[6];
  piVar14 = (int *)ar4[5];
  a4_00 = (int *)ar4[4];
  (*(code *)PTR_FUN_8c11bb30)(a4_01,uVar5,ar6,ar7);
  uVar4 = DAT_8c11bb34;
  a4_00[3] = ar5;
  a4_00[4] = a4_00[2] * 4 + ar5;
  uVar4 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & uVar4;
  bVar17 = 0;
  bVar19 = 0;
  bVar20 = (byte)((uVar4 & 0x80000) >> 0x13);
  bVar18 = (byte)((uVar4 & 0x100000) >> 0x14);
  (*(code *)PTR_FUN_8c11bb38)(a4_00,uVar5,ar6,ar7);
  uVar4 = ((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar20 << 0x13 | (uint)bVar18 << 0x14)
          & DAT_8c11bb34;
  if (bVar18 == 0) {
    in_dr0 = (double)(ulonglong)in_fr5;
  }
  bVar18 = 0;
  bVar20 = 0;
  bVar19 = (byte)((uVar4 & 0x80000) >> 0x13);
  bVar17 = (byte)((uVar4 & 0x100000) >> 0x14);
  (*(code *)PTR_FUN_8c11bb3c)(a4_00,uVar5,ar6,ar7);
  uVar4 = ((uint)bVar18 << 0xc | (uint)bVar20 << 0x12 | (uint)bVar19 << 0x13 | (uint)bVar17 << 0x14)
          & DAT_8c11bb34;
  bVar17 = 0;
  bVar19 = 0;
  bVar20 = (byte)((uVar4 & 0x80000) >> 0x13);
  bVar18 = (byte)((uVar4 & 0x100000) >> 0x14);
  iVar3 = (*(code *)PTR_FUN_8c11bb40)(a4_01,a5,a4_00,ar7);
  if (iVar3 == 0) {
    iVar3 = *(int *)(a4 + 4);
    while (iVar3 != 0) {
      iVar3 = iVar3 + -1;
      *(int *)(*(int *)(a4 + 0xc) + iVar3 * 4) = iVar3;
    }
    do {
      uVar4 = a4_01[1];
      a6 = (double *)(*piVar14 * 4 + piVar14[3]);
      a6_00 = (double *)(*a4_01 * uVar4 * 4 + a4_01[3]);
      a7 = (double *)(*a4_00 * 4 + a4_00[3] + (*a4_00 - uVar4) * -4);
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        a7 = (double *)((int)a7 + -4);
        if (bVar18 == 0) {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)a7);
        }
        else {
          in_xd2 = *a7;
        }
        pdVar7 = (double *)((uVar4 - 1) * *a4_01 * 4 + a4_01[3] + uVar4 * 4 + -4);
        if (bVar18 == 0) {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(in_dr0,0));
          a6 = (double *)((int)a6 - 4);
          *(float *)a6 = SUB84(in_dr2,0);
        }
        else {
          in_dr0 = *pdVar7;
          a6 = a6 + -1;
          *a6 = in_xd2;
        }
        pdVar11 = a6;
        for (pdVar7 = (double *)((int)pdVar7 + *a4_01 * 4); pdVar7 < a6_00;
            pdVar7 = (double *)((int)pdVar7 + *a4_01 * 4)) {
          fVar15 = SUB84(in_dr2,0);
          pdVar11 = (double *)((int)pdVar11 + 4);
          if (bVar18 == 0) {
            fVar15 = *(float *)pdVar11;
          }
          else {
            in_xd2 = *pdVar11;
          }
          uVar6 = ((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar20 << 0x13 |
                  (uint)bVar18 << 0x14) & DAT_8c11bb34;
          if (bVar18 == 0) {
            in_dr2 = (double)CONCAT44(*(float *)pdVar7,fVar15);
          }
          else {
            in_dr2 = *pdVar7;
          }
          bVar17 = 0;
          bVar19 = 0;
          bVar20 = (byte)((uVar6 & 0x80000) >> 0x13);
          bVar18 = (byte)((uVar6 & 0x100000) >> 0x14);
          if (bVar20 == 0) {
            in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) * SUB84(in_dr2,0),
                                      SUB84(in_dr2,0));
          }
          else {
            in_dr2 = in_dr2 * in_dr2;
          }
          if (bVar18 == 0) {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(float *)a6);
          }
          else {
            in_xd2 = *a6;
          }
          if (bVar20 == 0) {
            fVar15 = (float)((ulonglong)in_dr2 >> 0x20);
            in_dr2 = (double)CONCAT44(fVar15,SUB84(in_dr2,0) - fVar15);
          }
          else {
            in_dr2 = in_dr2 - in_dr2;
          }
          if (bVar18 == 0) {
            *(float *)a6 = SUB84(in_dr2,0);
          }
          else {
            *a6 = in_xd2;
          }
        }
        if (bVar18 == 0) {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(float *)a6);
        }
        else {
          in_xd2 = *a6;
        }
        uVar6 = ((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar20 << 0x13 |
                (uint)bVar18 << 0x14) & DAT_8c11bb34;
        bVar17 = 0;
        bVar19 = 0;
        bVar20 = (byte)((uVar6 & 0x80000) >> 0x13);
        bVar18 = (byte)((uVar6 & 0x100000) >> 0x14);
        if (bVar20 == 0) {
          fVar15 = SUB84(in_dr2,0) / (float)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          fVar15 = SUB84(in_dr2 / in_dr0,0);
        }
        if (bVar18 == 0) {
          *(float *)a6 = fVar15;
          in_dr2 = (double)CONCAT44(*(float *)a6,DAT_8c11bb44);
        }
        else {
          *a6 = in_xd2;
          in_dr2 = *a6;
          in_xd2 = (double)CONCAT44(PTR_FUN_8c11bb48,DAT_8c11bb44);
        }
        if ((bVar20 == 0 && SUB84(in_dr2,0) < (float)((ulonglong)in_dr2 >> 0x20)) && (2 < uVar4))
        break;
        bVar17 = 0;
        bVar19 = 0;
      }
      if (uVar4 != 0) {
        a6 = (double *)(uVar4 - 1);
        uVar6 = ((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar20 << 0x13 |
                (uint)bVar18 << 0x14) & DAT_8c11bb34;
        bVar18 = 0;
        bVar17 = 0;
        bVar19 = (byte)((uVar6 & 0x80000) >> 0x13);
        bVar20 = (byte)((uVar6 & 0x100000) >> 0x14);
        a6_00 = a6;
        iVar3 = (*(code *)PTR_FUN_8c11bb48)(a4_01,a4_00,a6,a7);
        puVar2 = PTR_FUN_8c11bb4c;
        uVar6 = DAT_8c11bb34;
        if (iVar3 != 0) goto LAB_8c11ba88;
        *piVar14 = *piVar14 + -1;
        uVar6 = ((uint)bVar18 << 0xc | (uint)bVar17 << 0x12 | (uint)bVar19 << 0x13 |
                (uint)bVar20 << 0x14) & uVar6;
        bVar17 = 0;
        bVar19 = 0;
        bVar20 = (byte)((uVar6 & 0x80000) >> 0x13);
        bVar18 = (byte)((uVar6 & 0x100000) >> 0x14);
        (*(code *)puVar2)(a4,a6,a6_00,a7);
      }
    } while (2 < uVar4);
    uVar4 = ((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar20 << 0x13 |
            (uint)bVar18 << 0x14) & DAT_8c11bb34;
    bVar17 = 0;
    bVar19 = 0;
    bVar20 = (byte)((uVar4 & 0x80000) >> 0x13);
    bVar18 = (byte)((uVar4 & 0x100000) >> 0x14);
    (*(code *)PTR_FUN_8c11bb50)(a4_00,a6,a6_00,a7);
    pfVar8 = (float *)piVar14[3];
    pfVar12 = pfVar8 + *piVar14;
    piVar1 = *(int **)(a4 + 0xc);
    for (; pfVar8 < pfVar12; pfVar8 = pfVar8 + 1) {
      puVar9 = (undefined8 *)a4_00[3];
      puVar10 = (undefined4 *)(*piVar13 * *piVar1 * 4 + piVar13[3]);
      uVar4 = 0;
      if (a4_00[2] != 0) {
        do {
          uVar4 = uVar4 + 1;
          if (bVar18 == 0) {
            fVar15 = *pfVar8;
          }
          else {
            fVar15 = (float)((ulonglong)*(undefined8 *)pfVar8 >> 0x20);
          }
          uVar6 = ((uint)bVar17 << 0xc | (uint)bVar19 << 0x12 | (uint)bVar20 << 0x13 |
                  (uint)bVar18 << 0x14) & DAT_8c11bb34;
          if (bVar18 == 0) {
            uVar5 = *puVar10;
            puVar10 = puVar10 + 1;
            uVar16 = CONCAT44(*(undefined4 *)puVar9,uVar5);
          }
          else {
            puVar10 = puVar10 + 2;
            uVar16 = *puVar9;
          }
          bVar17 = 0;
          bVar19 = 0;
          bVar20 = (byte)((uVar6 & 0x80000) >> 0x13);
          bVar18 = (byte)((uVar6 & 0x100000) >> 0x14);
          if (bVar20 == 0) {
            uVar16 = CONCAT44(fVar15 * (float)uVar16 + (float)((ulonglong)uVar16 >> 0x20),
                              (float)uVar16);
          }
          if (bVar18 == 0) {
            *(int *)puVar9 = (int)((ulonglong)uVar16 >> 0x20);
          }
          else {
            *puVar9 = uVar16;
          }
          puVar9 = (undefined8 *)((int)puVar9 + 4);
        } while (uVar4 < (uint)a4_00[2]);
      }
      piVar1 = piVar1 + 1;
    }
    iVar3 = piVar13[1];
    uVar5 = 0;
    a4_01[1] = iVar3;
    *piVar14 = iVar3;
    *(int *)(a4 + 4) = iVar3;
  }
  else {
LAB_8c11ba88:
    uVar5 = 1;
  }
  return uVar5;
}



/* FUN_8c11bb54 @ 8c11bb54 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11bb54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 in_fr5;
  undefined8 uVar3;
  char in_FPSCR_SZ;
  undefined4 uVar4;
  
  puVar2 = *(undefined8 **)(ar4 + 0x38);
  iVar1 = *(int *)(ar4 + 0x54) * 4;
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44((undefined4)DAT_8c11bdec,in_fr5);
  }
  else {
    uVar3 = CONCAT44(DAT_8c11bdec._4_4_,(undefined4)DAT_8c11bdec);
  }
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 < (undefined8 *)((int)puVar2 + iVar1)) {
    do {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)puVar2 = uVar4;
      }
      else {
        *puVar2 = uVar3;
      }
      puVar2 = (undefined8 *)((int)puVar2 + 4);
    } while (puVar2 < (undefined8 *)(*(int *)(ar4 + 0x38) + iVar1));
  }
  puVar2 = *(undefined8 **)(ar4 + 0x34);
  if (puVar2 < (undefined8 *)((int)puVar2 + iVar1)) {
    do {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)puVar2 = uVar4;
      }
      else {
        *puVar2 = uVar3;
      }
      puVar2 = (undefined8 *)((int)puVar2 + 4);
    } while (puVar2 < (undefined8 *)(*(int *)(ar4 + 0x34) + iVar1));
  }
  *(undefined2 *)(ar4 + 0x28) = 0;
  return 0x28;
}



/* FUN_8c11bb94 @ 8c11bb94 callers=2 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11bb94(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 *ar5_00;
  int ar6_00;
  int ar7_00;
  undefined4 in_fr5;
  undefined8 uVar2;
  char in_FPSCR_SZ;
  
  ar5_00 = *(undefined8 **)(ar4 + 0x2c);
  ar7_00 = *(int *)(ar4 + 0x54);
  if (in_FPSCR_SZ == '\0') {
    uVar2 = CONCAT44((undefined4)DAT_8c11bdec,in_fr5);
  }
  else {
    uVar2 = CONCAT44(DAT_8c11bdec._4_4_,(undefined4)DAT_8c11bdec);
  }
  ar6_00 = ar7_00 * 4;
  if (ar5_00 < (undefined8 *)((int)ar5_00 + *(int *)(ar4 + 0x54) * 4 + ar6_00)) {
    do {
      if (in_FPSCR_SZ == '\0') {
        *(int *)ar5_00 = (int)((ulonglong)uVar2 >> 0x20);
      }
      else {
        *ar5_00 = uVar2;
      }
      ar5_00 = (undefined8 *)((int)ar5_00 + 4);
    } while (ar5_00 < (undefined8 *)(*(int *)(ar4 + 0x2c) + ar6_00 + *(int *)(ar4 + 0x54) * 4));
  }
  *(undefined2 *)(ar4 + 0x2a) = 0;
  uVar1 = FUN_8c11bb54(ar4,ar5_00,ar6_00,ar7_00);
  return uVar1;
}



/* FUN_8c11bbd4 @ 8c11bbd4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11bbd4(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  double dVar11;
  undefined8 in_dr4;
  float in_fr15;
  undefined4 in_fr14;
  undefined4 in_PR;
  byte in_FPSCR_CAUSE;
  byte bVar12;
  byte in_FPSCR_DN;
  byte bVar13;
  byte in_FPSCR_PR;
  byte bVar14;
  byte in_FPSCR_SZ;
  byte bVar15;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  
  puVar1 = PTR_memmove_8c11bdf4;
  puVar8 = ar5 + 2;
  if (in_FPSCR_SZ == 0) {
    puVar10 = auStack_20;
  }
  else {
    puVar10 = auStack_24;
  }
  *(undefined4 *)(puVar10 + -4) = in_PR;
  uVar6 = *(uint *)(ar4 + 0x54);
  *(short *)(ar4 + 0x28) = (short)*ar5;
  iVar7 = uVar6 * 4;
  *(short *)(ar4 + 0x2a) = (short)ar5[1];
  (*(code *)puVar1)(*(undefined4 *)(ar4 + 0x2c),puVar8,iVar7);
  puVar8 = puVar8 + uVar6;
  uVar4 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c11bdec._4_4_;
  bVar12 = 0;
  bVar13 = 0;
  bVar14 = (byte)((uVar4 & 0x80000) >> 0x13);
  bVar15 = (byte)((uVar4 & 0x100000) >> 0x14);
  (*(code *)puVar1)(*(undefined4 *)(ar4 + 0x34),puVar8,iVar7);
  uVar4 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar14 << 0x13 | (uint)bVar15 << 0x14)
          & DAT_8c11bdec._4_4_;
  bVar12 = 0;
  bVar13 = 0;
  bVar14 = (byte)((uVar4 & 0x80000) >> 0x13);
  bVar15 = (byte)((uVar4 & 0x100000) >> 0x14);
  (*(code *)puVar1)(*(undefined4 *)(ar4 + 0x38),puVar8 + uVar6,iVar7);
  puVar2 = PTR_thunk_FUN_8c013dfc_8c11bdf8;
  piVar9 = puVar8 + uVar6 + uVar6;
  uVar4 = 0;
  iVar7 = 0;
  if (bVar15 == 0) {
    in_fr15 = (float)DAT_8c11bdfc;
  }
  if (uVar6 != 0) {
    do {
      *(int *)(puVar10 + -8) = *(int *)(ar4 + 0x30) + iVar7;
      uVar5 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar14 << 0x13 |
              (uint)bVar15 << 0x14) & DAT_8c11bdec._4_4_;
      if (bVar15 == 0) {
        in_dr4 = CONCAT44(*(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar7),(int)in_dr4);
      }
      else {
        in_dr4 = *(undefined8 *)(*(int *)(ar4 + 0x2c) + iVar7);
      }
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = (byte)((uVar5 & 0x80000) >> 0x13);
      bVar15 = (byte)((uVar5 & 0x100000) >> 0x14);
      dVar11 = (double)(*(code *)puVar2)(in_dr4);
      uVar4 = uVar4 + 1;
      uVar5 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar14 << 0x13 |
              (uint)bVar15 << 0x14) & DAT_8c11bdec._4_4_;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = (byte)((uVar5 & 0x80000) >> 0x13);
      bVar15 = (byte)((uVar5 & 0x100000) >> 0x14);
      if (bVar14 == 0) {
        dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) * in_fr15,SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 * (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar15 == 0) {
        *(int *)*(double **)(puVar10 + -8) = (int)((ulonglong)dVar11 >> 0x20);
      }
      else {
        **(double **)(puVar10 + -8) = dVar11;
      }
      iVar7 = iVar7 + 4;
    } while (uVar4 < uVar6);
  }
  *(int *)(ar4 + 0x44) = *piVar9 * 4 + *(int *)(ar4 + 0x3c);
  *(int *)(ar4 + 0x48) = piVar9[1] * 4 + *(int *)(ar4 + 0x3c);
  uVar3 = (*(code *)puVar1)(*(undefined4 *)(ar4 + 0x3c),piVar9 + 2,
                            uVar6 * (*(ushort *)(ar4 + 0x4c) + 1) * 4);
  return uVar3;
}



/* FUN_8c11bbec @ 8c11bbec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11bbec(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int in_r0;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int a5;
  int a6;
  uint uVar6;
  int iVar7;
  int unaff_r13;
  int a5_00;
  int *piVar8;
  int unaff_r14;
  undefined1 *puVar9;
  double in_dr0;
  float in_fr15;
  undefined4 in_fr14;
  undefined4 in_PR;
  byte in_FPSCR_CAUSE;
  byte bVar10;
  byte in_FPSCR_DN;
  byte bVar11;
  byte in_FPSCR_PR;
  byte bVar12;
  byte in_FPSCR_SZ;
  byte bVar13;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  
  puVar1 = PTR_memmove_8c11bdf4;
  if (in_FPSCR_SZ == 0) {
    puVar9 = auStack_8;
  }
  else {
    puVar9 = auStack_c;
  }
  *(undefined4 *)(puVar9 + -4) = in_PR;
  uVar6 = *(uint *)(in_r0 + unaff_r14);
  *(short *)(unaff_r14 + 0x28) = (short)*ar4;
  iVar7 = uVar6 * 4;
  *(short *)(unaff_r14 + 0x2a) = (short)ar4[1];
  (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x2c),ar5,iVar7,ar7);
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c11bdec._4_4_;
  bVar10 = 0;
  bVar11 = 0;
  bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
  (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x34),unaff_r13 + iVar7,iVar7,ar7);
  a5_00 = unaff_r13 + iVar7 + iVar7;
  uVar3 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar13 << 0x14)
          & DAT_8c11bdec._4_4_;
  bVar10 = 0;
  bVar11 = 0;
  bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
  a5 = a5_00;
  a6 = iVar7;
  (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x38),a5_00,iVar7,ar7);
  puVar2 = PTR_thunk_FUN_8c013dfc_8c11bdf8;
  uVar5 = 0;
  piVar8 = (int *)(a5_00 + iVar7);
  uVar3 = 0;
  iVar7 = 0;
  if (bVar13 == 0) {
    in_fr15 = (float)DAT_8c11bdfc;
  }
  if (uVar6 != 0) {
    do {
      *(int *)(puVar9 + -8) = *(int *)(unaff_r14 + 0x30) + iVar7;
      uVar4 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & DAT_8c11bdec._4_4_;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar4 & 0x100000) >> 0x14);
      (*(code *)puVar2)(uVar5,a5,a6,ar7);
      uVar3 = uVar3 + 1;
      uVar4 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & DAT_8c11bdec._4_4_;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar4 & 0x100000) >> 0x14);
      if (bVar12 == 0) {
        in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * in_fr15,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 * (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar13 == 0) {
        *(int *)*(double **)(puVar9 + -8) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        **(double **)(puVar9 + -8) = in_dr0;
      }
      iVar7 = iVar7 + 4;
    } while (uVar3 < uVar6);
  }
  *(int *)(unaff_r14 + 0x44) = *piVar8 * 4 + *(int *)(unaff_r14 + 0x3c);
  *(int *)(unaff_r14 + 0x48) = piVar8[1] * 4 + *(int *)(unaff_r14 + 0x3c);
  uVar5 = (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x3c),piVar8 + 2,
                            uVar6 * (*(ushort *)(unaff_r14 + 0x4c) + 1) * 4,ar7);
  return uVar5;
}



/* FUN_8c11bcb8 @ 8c11bcb8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11bcb8(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  puVar1 = PTR_memmove_8c11bdf4;
  puVar5 = ar5 + 2;
  iVar3 = *(int *)(ar4 + 0x54);
  iVar4 = iVar3 * 4;
  *ar5 = (uint)*(ushort *)(ar4 + 0x28);
  ar5[1] = (uint)*(ushort *)(ar4 + 0x2a);
  (*(code *)puVar1)(puVar5,*(undefined4 *)(ar4 + 0x2c),iVar4);
  puVar5 = puVar5 + iVar3;
  (*(code *)puVar1)(puVar5,*(undefined4 *)(ar4 + 0x34),iVar4);
  (*(code *)puVar1)(puVar5 + iVar3,*(undefined4 *)(ar4 + 0x38),iVar4);
  iVar4 = *(int *)(ar4 + 0x44) - *(int *)(ar4 + 0x3c);
  puVar5 = puVar5 + iVar3 + iVar3;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 3;
  }
  *puVar5 = iVar4 >> 2;
  iVar4 = *(int *)(ar4 + 0x48) - *(int *)(ar4 + 0x3c);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 3;
  }
  puVar5[1] = iVar4 >> 2;
  uVar2 = (*(code *)puVar1)(puVar5 + 2,*(undefined4 *)(ar4 + 0x3c),
                            iVar3 * (*(ushort *)(ar4 + 0x4c) + 1) * 4);
  return uVar2;
}



/* FUN_8c11bccc @ 8c11bccc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11bccc(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r0;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int a6;
  int unaff_r13;
  int a4;
  int *piVar5;
  int unaff_r14;
  
  puVar1 = PTR_memmove_8c11bdf4;
  iVar4 = *(int *)(in_r0 + unaff_r14);
  a6 = iVar4 * 4;
  *ar4 = (uint)*(ushort *)(unaff_r14 + 0x28);
  ar4[1] = (uint)*(ushort *)(unaff_r14 + 0x2a);
  (*(code *)puVar1)(unaff_r13,*(undefined4 *)(unaff_r14 + 0x2c),a6,ar7);
  (*(code *)puVar1)(unaff_r13 + a6,*(undefined4 *)(unaff_r14 + 0x34),a6,ar7);
  a4 = unaff_r13 + a6 + a6;
  (*(code *)puVar1)(a4,*(undefined4 *)(unaff_r14 + 0x38),a6,ar7);
  iVar3 = *(int *)(unaff_r14 + 0x44) - *(int *)(unaff_r14 + 0x3c);
  piVar5 = (int *)(a4 + a6);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  *piVar5 = iVar3 >> 2;
  iVar3 = *(int *)(unaff_r14 + 0x48) - *(int *)(unaff_r14 + 0x3c);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  piVar5[1] = iVar3 >> 2;
  uVar2 = (*(code *)puVar1)(piVar5 + 2,*(undefined4 *)(unaff_r14 + 0x3c),
                            iVar4 * (*(ushort *)(unaff_r14 + 0x4c) + 1) * 4,ar7);
  return uVar2;
}



/* FUN_8c11bd6c @ 8c11bd6c callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c11be7e) */
/* WARNING: Removing unreachable block (ram,0x8c11be92) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11bd6c(int ar4,undefined4 ar5,undefined4 ar6,double *ar7)

{
  char cVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  double *pdVar9;
  undefined4 uVar10;
  double *pdVar11;
  ulonglong *puVar12;
  double *pdVar13;
  ushort uVar14;
  double *pdVar15;
  int iVar16;
  double *a6;
  undefined8 *puVar17;
  double in_dr0;
  undefined4 uVar18;
  float fVar19;
  double in_dr2;
  undefined4 uVar21;
  ulonglong uVar20;
  float fVar22;
  double in_dr4;
  double in_dr6;
  double dVar23;
  undefined8 in_dr12;
  double dVar24;
  undefined8 in_dr14;
  double dVar25;
  double in_xd2;
  double dVar26;
  double dVar27;
  double in_xd4;
  double dVar28;
  undefined8 in_xd14;
  bool bVar29;
  undefined4 in_PR;
  byte in_FPSCR_CAUSE;
  byte bVar30;
  byte in_FPSCR_DN;
  byte bVar31;
  byte in_FPSCR_PR;
  byte bVar32;
  byte in_FPSCR_SZ;
  byte bVar33;
  char cVar34;
  undefined1 auStack_3c [16];
  undefined8 uStack_2c;
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == 0) {
    uStack_24 = CONCAT44((int)in_dr14,(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar17 = &uStack_2c;
    uStack_2c = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar17 = (undefined8 *)auStack_3c;
    uStack_24 = in_xd14;
    uStack_2c = in_dr14;
  }
  *(undefined4 *)((int)puVar17 + -4) = in_PR;
  *(undefined1 *)((int)puVar17 + -8) = (undefined1)ar5;
  *(undefined4 *)((int)puVar17 + -0x18) = ar6;
  *(double **)((int)puVar17 + -0x10) = ar7;
  *(undefined4 *)((int)puVar17 + -0x24) = *(undefined4 *)(ar4 + 0x54);
  iVar16 = *(int *)(ar4 + 0x44);
  *(undefined4 *)((int)puVar17 + -0x20) = *(undefined4 *)(ar4 + 0x40);
  *(undefined4 *)((int)puVar17 + -0x14) = *(undefined4 *)(ar4 + 0x3c);
  *(undefined2 *)((int)puVar17 + -0xc) = *(undefined2 *)(ar4 + 0x4c);
  *(undefined2 *)((int)puVar17 + -0x1c) = *(undefined2 *)(ar4 + 0x2a);
  uVar14 = *(ushort *)(ar4 + 0x28);
  if (in_FPSCR_SZ == 0) {
    dVar24 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x60),(int)in_dr12);
    dVar25 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),(int)in_dr14);
  }
  else {
    dVar24 = *(double *)(ar4 + 0x60);
    dVar25 = *(double *)(ar4 + 0x5c);
  }
  if (in_FPSCR_SZ == 0) {
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),DAT_8c11bdfc._4_4_);
  }
  pdVar15 = *(double **)(ar4 + 0x2c);
  a6 = (double *)(*(int *)((int)puVar17 + -0x24) * 4);
  uVar10 = *(undefined4 *)((int)puVar17 + -0x18);
  iVar6 = iVar16;
  pdVar9 = a6;
  (*(code *)PTR_memmove_8c11bdf4)(iVar16,uVar10,a6,ar7);
  puVar3 = PTR_thunk_FUN_8c013dfc_8c11bdf8;
  uVar18 = SUB84(in_dr4,0);
  iVar16 = iVar16 + (int)a6;
  if (iVar16 == *(int *)((int)puVar17 + -0x20)) {
    iVar16 = *(int *)((int)puVar17 + -0x14);
  }
  if (in_FPSCR_SZ == 0) {
    dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),(undefined4)DAT_8c11bdfc);
  }
  if (*(char *)((int)puVar17 + -8) == '\0') {
    if (*(short *)((int)puVar17 + -0x1c) == 0) {
      *(undefined4 *)((int)puVar17 + -0x14) = *(undefined4 *)(ar4 + 0x30);
      *(undefined4 *)((int)puVar17 + -0x24) = *(undefined4 *)((int)puVar17 + -0x18);
      *(double **)((int)puVar17 + -0x20) = (double *)((int)a6 + (int)pdVar15);
      pdVar11 = pdVar15;
      if (pdVar15 < (double *)((int)a6 + (int)pdVar15)) {
        do {
          uVar7 = DAT_8c11bff4;
          if (in_FPSCR_SZ == 0) {
            uVar18 = *(undefined4 *)*(double **)((int)puVar17 + -0x24);
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar18);
            *(undefined4 *)pdVar11 = uVar18;
          }
          else {
            in_xd2 = **(double **)((int)puVar17 + -0x24);
            *pdVar11 = in_xd2;
          }
          iVar4 = *(int *)((int)puVar17 + -0x14);
          *(int *)((int)puVar17 + -0x14) = iVar4 + 4;
          *(int *)((int)puVar17 + -0x28) = iVar4;
          if (in_FPSCR_SZ == 0) {
            in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
          }
          else {
            in_dr4 = **(double **)((int)puVar17 + -0x24);
          }
          uVar7 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                   (uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & uVar7;
          bVar30 = 0;
          bVar31 = 0;
          bVar32 = (byte)((uVar7 & 0x80000) >> 0x13);
          bVar33 = (byte)((uVar7 & 0x100000) >> 0x14);
          (*(code *)puVar3)(iVar6,uVar10,pdVar9,ar7);
          pdVar11 = (double *)((int)pdVar11 + 4);
          uVar7 = ((uint)bVar30 << 0xc | (uint)bVar31 << 0x12 | (uint)bVar32 << 0x13 |
                  (uint)bVar33 << 0x14) & DAT_8c11bff4;
          in_FPSCR_CAUSE = 0;
          in_FPSCR_DN = 0;
          in_FPSCR_PR = (byte)((uVar7 & 0x80000) >> 0x13);
          in_FPSCR_SZ = (byte)((uVar7 & 0x100000) >> 0x14);
          if (in_FPSCR_PR == 0) {
            in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar25,0),
                                      SUB84(in_dr0,0));
          }
          else {
            in_dr0 = in_dr0 * dVar25;
          }
          if (in_FPSCR_SZ == 0) {
            *(int *)*(double **)((int)puVar17 + -0x28) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            **(double **)((int)puVar17 + -0x28) = in_dr0;
          }
          *(int *)((int)puVar17 + -0x24) = *(int *)((int)puVar17 + -0x24) + 4;
        } while (pdVar11 < *(double **)((int)puVar17 + -0x20));
      }
    }
    uVar18 = SUB84(in_dr4,0);
    if ((uint)uVar14 <= (uint)*(ushort *)((int)puVar17 + -0xc)) {
      uVar14 = uVar14 + 1;
    }
    uVar7 = *(ushort *)((int)puVar17 + -0xc) + 1;
    if (uVar14 == uVar7) {
      uVar8 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & DAT_8c11bff4;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar8 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar8 & 0x100000) >> 0x14);
      uVar21 = (undefined4)((ulonglong)in_dr2 >> 0x20);
      in_dr2 = (double)CONCAT44(uVar21,(float)*(ushort *)((int)puVar17 + -0x1c));
      fVar19 = (float)((ulonglong)dVar24 >> 0x20);
      if (in_FPSCR_PR == 0) {
        bVar29 = (float)*(ushort *)((int)puVar17 + -0x1c) < fVar19;
      }
      else {
        bVar29 = in_dr2 < dVar24;
      }
      if (bVar29) {
        sVar2 = *(short *)((int)puVar17 + -0x1c);
        *(ushort *)((int)puVar17 + -0x1c) = sVar2 + 1U;
        in_dr2 = (double)CONCAT44(uVar21,(float)(ushort)(sVar2 + 1U));
        dVar23 = in_xd2;
      }
      else {
        dVar23 = dVar24;
        if (in_FPSCR_SZ == 0) {
          in_dr2 = (double)CONCAT44(uVar21,fVar19);
          dVar23 = in_xd2;
        }
      }
      in_xd2 = dVar23;
      if (in_FPSCR_SZ == 0) {
        dVar24 = (double)CONCAT44(DAT_8c11bff8,SUB84(dVar24,0));
      }
      else {
        dVar24 = (double)CONCAT44(_DAT_8c11bffc,DAT_8c11bff8);
      }
      *(int *)((int)puVar17 + -0x20) = iVar16;
      if (in_FPSCR_PR == 0) {
        dVar24 = (double)((ulonglong)(uint)((float)((ulonglong)dVar24 >> 0x20) / SUB84(in_dr2,0)) <<
                         0x20);
      }
      else {
        dVar24 = dVar24 / in_dr2;
      }
      *(undefined4 *)((int)puVar17 + -0x14) = *(undefined4 *)(ar4 + 0x30);
      *(double **)((int)puVar17 + -0x24) = (double *)((int)a6 + (int)pdVar15);
      pdVar11 = pdVar15;
      if (pdVar15 < (double *)((int)a6 + (int)pdVar15)) {
        do {
          pdVar13 = *(double **)((int)puVar17 + -0x20);
          *(int *)((int)puVar17 + -0x20) = (int)pdVar13 + 4;
          if (in_FPSCR_SZ == 0) {
            in_dr4 = (double)CONCAT44(*(undefined4 *)pdVar13,SUB84(in_dr4,0));
          }
          else {
            in_dr4 = *pdVar13;
          }
          if (in_FPSCR_SZ == 0) {
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)pdVar11);
          }
          else {
            in_xd4 = *pdVar11;
          }
          uVar5 = ((uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & DAT_8c11bff4;
          uVar8 = (uVar5 & 0x80000) >> 0x13;
          cVar34 = (char)uVar8;
          uVar5 = uVar5 >> 0x14;
          cVar1 = (char)uVar5;
          if (cVar34 == '\0') {
            in_dr4 = (double)CONCAT44((float)((ulonglong)in_dr4 >> 0x20) - SUB84(in_dr4,0),
                                      SUB84(in_dr4,0));
          }
          else {
            in_dr4 = in_dr4 - in_dr4;
          }
          if (cVar34 == '\0' && SUB84(in_dr4,0) < (float)((ulonglong)in_dr4 >> 0x20)) {
            if (cVar1 == '\0') {
              in_dr4 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(in_dr4,0));
            }
            else {
              in_dr4 = *pdVar11;
            }
          }
          dVar23 = in_dr4;
          if (cVar1 == '\0') {
            dVar23 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(in_dr0,0));
          }
          uVar8 = (uVar8 << 0x13 | uVar5 << 0x14) & DAT_8c11bff4;
          if (cVar1 == '\0') {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)pdVar11);
          }
          else {
            in_xd2 = *pdVar11;
          }
          bVar30 = 0;
          bVar31 = 0;
          bVar32 = (byte)((uVar8 & 0x80000) >> 0x13);
          bVar33 = (byte)(uVar8 >> 0x14);
          if (bVar32 == 0) {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                      (float)((ulonglong)dVar23 >> 0x20) *
                                      (float)((ulonglong)dVar24 >> 0x20) + SUB84(in_dr2,0));
          }
          if (bVar33 == 0) {
            *(int *)pdVar11 = SUB84(in_dr2,0);
          }
          else {
            *pdVar11 = in_xd2;
          }
          iVar6 = *(int *)((int)puVar17 + -0x14);
          *(int *)((int)puVar17 + -0x14) = iVar6 + 4;
          *(int *)((int)puVar17 + -0x28) = iVar6;
          if (bVar33 == 0) {
            in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
            pdVar11 = (double *)((int)pdVar11 + 4);
          }
          else {
            in_dr4 = *pdVar11;
            pdVar11 = pdVar11 + 1;
          }
          (*(code *)puVar3)(uVar7,uVar10,pdVar9,ar7);
          uVar18 = SUB84(in_dr4,0);
          uVar8 = ((uint)bVar30 << 0xc | (uint)bVar31 << 0x12 | (uint)bVar32 << 0x13 |
                  (uint)bVar33 << 0x14) & DAT_8c11bff4;
          in_FPSCR_CAUSE = 0;
          in_FPSCR_DN = 0;
          in_FPSCR_PR = (byte)((uVar8 & 0x80000) >> 0x13);
          in_FPSCR_SZ = (byte)((uVar8 & 0x100000) >> 0x14);
          if (in_FPSCR_PR == 0) {
            in_dr0 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) * SUB84(dVar25,0),
                                      SUB84(dVar23,0));
          }
          else {
            in_dr0 = dVar23 * dVar25;
          }
          if (in_FPSCR_SZ == 0) {
            *(int *)*(double **)((int)puVar17 + -0x28) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            **(double **)((int)puVar17 + -0x28) = in_dr0;
          }
        } while (pdVar11 < *(double **)((int)puVar17 + -0x24));
      }
    }
  }
  else {
    uVar14 = 0;
  }
  if (in_FPSCR_SZ == 0) {
    dVar24 = (double)CONCAT44(DAT_8c11bff8,uVar18);
  }
  else {
    dVar24 = (double)CONCAT44(_DAT_8c11bffc,DAT_8c11bff8);
  }
  if (*(short *)((int)puVar17 + -0x1c) != 0) {
    uVar10 = (undefined4)((ulonglong)dVar24 >> 0x20);
    dVar23 = dVar24;
    if (in_FPSCR_SZ == 0) {
      dVar23 = (double)CONCAT44(uVar10,SUB84(in_dr6,0));
    }
    uVar7 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c11bff4;
    pdVar9 = *(double **)(ar4 + 0x34);
    in_FPSCR_PR = (byte)((uVar7 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)((uVar7 & 0x100000) >> 0x14);
    pdVar11 = (double *)((int)a6 + (int)pdVar9);
    if (in_FPSCR_SZ == 0) {
      dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*(undefined4 *)(ar4 + 0x68));
    }
    fVar19 = (float)((ulonglong)dVar25 >> 0x20);
    if (in_FPSCR_PR == 0) {
      in_dr6 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) - fVar19,SUB84(dVar23,0));
    }
    else {
      in_dr6 = dVar23 - dVar25;
    }
    pdVar13 = *(double **)(ar4 + 0x50);
    puVar12 = *(ulonglong **)(ar4 + 0x38);
    for (; pdVar9 < pdVar11; pdVar9 = (double *)((int)pdVar9 + 4)) {
      uVar18 = SUB84(in_dr2,0);
      dVar23 = dVar24;
      if (in_FPSCR_SZ == 0) {
        dVar23 = in_xd2;
        uVar18 = uVar10;
      }
      uVar7 = ((uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & DAT_8c11bff4;
      if (in_FPSCR_SZ == 0) {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar13,SUB84(in_dr0,0));
        pdVar13 = (double *)((int)pdVar13 + 4);
        uVar20 = CONCAT44((int)*puVar12,uVar18);
        puVar12 = (ulonglong *)((int)puVar12 + 4);
      }
      else {
        in_dr0 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        uVar20 = *puVar12;
        puVar12 = puVar12 + 1;
      }
      in_FPSCR_PR = (byte)((uVar7 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)(uVar7 >> 0x14);
      if (in_FPSCR_PR == 0) {
        uVar20 = (ulonglong)
                 (uint)((float)((ulonglong)in_dr0 >> 0x20) * (float)(uVar20 >> 0x20) + (float)uVar20
                       );
      }
      in_dr2 = dVar25;
      if (in_FPSCR_SZ == 0) {
        in_dr2 = (double)CONCAT44(fVar19,(int)uVar20);
      }
      if (in_FPSCR_PR == 0) {
        in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) * SUB84(in_dr2,0),
                                  SUB84(in_dr2,0));
      }
      else {
        in_dr2 = in_dr2 * in_dr2;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)pdVar9 = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *pdVar9 = in_dr2;
      }
      in_xd2 = dVar23;
    }
    pdVar9 = *(double **)(ar4 + 0x38);
    ar7 = *(double **)((int)puVar17 + -0x18);
    pdVar11 = (double *)((int)a6 + (int)pdVar9);
    if (in_FPSCR_SZ == 0) {
      dVar24 = (double)CONCAT44(uVar10,_DAT_8c11bffc);
    }
    else {
      in_xd4 = (double)CONCAT44(_DAT_8c11c000,_DAT_8c11bffc);
    }
    for (; pdVar9 < pdVar11; pdVar9 = (double *)((int)pdVar9 + 4)) {
      if (in_FPSCR_SZ == 0) {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)ar7);
        ar7 = (double *)((int)ar7 + 4);
      }
      else {
        in_xd2 = *ar7;
        ar7 = ar7 + 1;
      }
      uVar7 = ((uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & DAT_8c11bff4;
      in_FPSCR_PR = (byte)((uVar7 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)(uVar7 >> 0x14);
      if (in_FPSCR_PR == 0) {
        fVar19 = SUB84(in_dr2,0) + SUB84(dVar24,0);
      }
      else {
        fVar19 = SUB84(in_dr2 + dVar24,0);
      }
      if (in_FPSCR_SZ == 0) {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar15,SUB84(in_dr0,0));
        pdVar15 = (double *)((int)pdVar15 + 4);
        in_dr2 = (double)CONCAT44(fVar19,SUB84(dVar24,0));
      }
      else {
        in_dr0 = *pdVar15;
        pdVar15 = pdVar15 + 1;
        in_dr2 = in_xd2;
        in_xd2 = in_xd4;
      }
      if (in_FPSCR_PR == 0) {
        fVar19 = (float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr6,0) + SUB84(in_dr2,0);
        in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) / fVar19,fVar19);
      }
      else {
        in_dr2 = in_dr2 / in_dr2;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)pdVar9 = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *pdVar9 = in_dr2;
      }
    }
    pdVar15 = *(double **)(ar4 + 0x34);
    pdVar11 = (double *)((int)a6 + (int)pdVar15);
    pdVar9 = *(double **)(ar4 + 0x38);
    while( true ) {
      in_FPSCR_DN = 0;
      in_FPSCR_CAUSE = 0;
      if (pdVar11 <= pdVar15) break;
      if (in_FPSCR_SZ == 0) {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr0,0));
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      else {
        in_dr0 = *pdVar9;
        pdVar9 = pdVar9 + 1;
      }
      uVar7 = ((uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14) & DAT_8c11bff4;
      if (in_FPSCR_SZ == 0) {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)pdVar15);
      }
      else {
        in_xd2 = *pdVar15;
      }
      in_FPSCR_PR = (byte)((uVar7 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)(uVar7 >> 0x14);
      if (in_FPSCR_PR == 0) {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                  (float)((ulonglong)in_dr0 >> 0x20) *
                                  (float)((ulonglong)in_dr6 >> 0x20) + SUB84(in_dr2,0));
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)pdVar15 = SUB84(in_dr2,0);
      }
      else {
        *pdVar15 = in_xd2;
      }
      pdVar15 = (double *)((int)pdVar15 + 4);
    }
  }
  if (*(short *)((int)puVar17 + -0x1c) == 0) {
    pdVar15 = *(double **)(ar4 + 0x50);
    pdVar11 = (double *)((int)a6 + (int)pdVar15);
    for (; pdVar15 < pdVar11; pdVar15 = (double *)((int)pdVar15 + 4)) {
      if (in_FPSCR_SZ == 0) {
        *(int *)pdVar15 = (int)((ulonglong)dVar24 >> 0x20);
      }
      else {
        *pdVar15 = dVar24;
      }
    }
  }
  else {
    pdVar15 = *(double **)(ar4 + 0x34);
    if (in_FPSCR_SZ == 0) {
      dVar23 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x6c),SUB84(in_dr6,0));
    }
    else {
      dVar23 = *(double *)(ar4 + 0x6c);
    }
    pdVar9 = (double *)((int)a6 + (int)pdVar15);
    pdVar11 = *(double **)(ar4 + 0x50);
    while (pdVar15 < pdVar9) {
      if (in_FPSCR_SZ == 0) {
        dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)pdVar15);
      }
      else {
        in_xd4 = *pdVar15;
      }
      uVar8 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & DAT_8c11bff4;
      uVar7 = (uVar8 & 0x80000) >> 0x13;
      cVar34 = (char)uVar7;
      uVar8 = (uVar8 & 0x100000) >> 0x14;
      cVar1 = (char)uVar8;
      fVar19 = (float)((ulonglong)dVar24 >> 0x20);
      dVar26 = in_xd2;
      if (cVar34 != '\0' || SUB84(dVar24,0) <= fVar19) {
        if (cVar1 == '\0') {
          dVar24 = (double)CONCAT44(fVar19,_DAT_8c11c000);
          dVar28 = in_xd4;
        }
        else {
          dVar28 = (double)CONCAT44(uRam8c11c004,_DAT_8c11c000);
        }
      }
      else {
        dVar26 = dVar24;
        if (cVar1 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar19);
          dVar26 = in_xd2;
        }
        if (cVar34 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                    SUB84(in_dr2,0) / SUB84(dVar24,0));
        }
        else {
          in_dr2 = in_dr2 / dVar24;
        }
        dVar28 = dVar24;
        if (cVar1 == '\0') {
          dVar24 = (double)CONCAT44(fVar19,fVar19);
          dVar28 = in_xd4;
        }
        if (cVar34 == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                    SUB84(dVar24,0) - SUB84(in_dr2,0));
        }
        else {
          dVar24 = dVar24 - in_dr2;
        }
      }
      dVar27 = dVar28;
      if (cVar1 == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(dVar24,0));
        dVar27 = dVar26;
      }
      uVar7 = (uVar7 << 0x13 | uVar8 << 0x14) & DAT_8c11bff4;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar7 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)(uVar7 >> 0x14);
      fVar19 = (float)((ulonglong)dVar23 >> 0x20);
      if (in_FPSCR_PR == 0) {
        fVar22 = SUB84(dVar24,0) * SUB84(in_dr2,0);
        dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),fVar22);
        bVar29 = fVar19 < fVar22;
      }
      else {
        dVar24 = dVar24 * in_dr2;
        fVar22 = SUB84(dVar24,0);
        bVar29 = dVar23 < dVar24;
      }
      uVar10 = (undefined4)((ulonglong)in_dr2 >> 0x20);
      if (bVar29) {
        in_xd2 = dVar28;
        if (in_FPSCR_SZ == 0) {
          in_dr2 = (double)CONCAT44(uVar10,fVar22);
          in_xd2 = dVar27;
        }
      }
      else {
        in_xd2 = dVar23;
        if (in_FPSCR_SZ == 0) {
          in_dr2 = (double)CONCAT44(uVar10,fVar19);
          in_xd2 = dVar27;
        }
      }
      pdVar15 = (double *)((int)pdVar15 + 4);
      if (in_FPSCR_SZ == 0) {
        *(int *)pdVar11 = SUB84(in_dr2,0);
      }
      else {
        *pdVar11 = in_xd2;
      }
      pdVar11 = (double *)((int)pdVar11 + 4);
      in_xd4 = dVar28;
    }
  }
  uVar7 = *(uint *)((int)puVar17 + -0x10);
  *(uint *)((int)puVar17 + -0x20) = (uint)*(ushort *)(ar4 + 0x58) * 4 + uVar7;
  *(undefined4 *)((int)puVar17 + -0x24) = *(undefined4 *)((int)puVar17 + -0x18);
  if (uVar7 < *(uint *)((int)puVar17 + -0x20)) {
    do {
      *(uint *)((int)puVar17 + -0x28) = uVar7;
      uVar7 = uVar7 + 4;
      *(int *)((int)puVar17 + -0x24) = *(int *)((int)puVar17 + -0x24) + 4;
      uVar8 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & DAT_8c11c1f0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = (byte)((uVar8 & 0x80000) >> 0x13);
      bVar33 = (byte)((uVar8 & 0x100000) >> 0x14);
      (*(code *)puVar3)(pdVar15,pdVar11,pdVar9,ar7);
      uVar8 = ((uint)bVar30 << 0xc | (uint)bVar31 << 0x12 | (uint)bVar32 << 0x13 |
              (uint)bVar33 << 0x14) & DAT_8c11c1f0;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar8 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar8 & 0x100000) >> 0x14);
      if (in_FPSCR_PR == 0) {
        in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar25,0),
                                  SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 * dVar25;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)*(double **)((int)puVar17 + -0x28) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        **(double **)((int)puVar17 + -0x28) = in_dr0;
      }
    } while (uVar7 < *(uint *)((int)puVar17 + -0x20));
  }
  *(int *)((int)puVar17 + -0x18) = *(int *)((int)puVar17 + -0x10) + (int)a6;
  if (uVar7 < (uint)(*(int *)((int)puVar17 + -0x10) + (int)a6)) {
    do {
      *(int *)((int)puVar17 + -0x24) = *(int *)((int)puVar17 + -0x24) + 4;
      *(uint *)((int)puVar17 + -0x28) = uVar7;
      uVar8 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & DAT_8c11c1f0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = (byte)((uVar8 & 0x80000) >> 0x13);
      bVar33 = (byte)((uVar8 & 0x100000) >> 0x14);
      uVar7 = uVar7 + 4;
      (*(code *)puVar3)(pdVar15,pdVar11,pdVar9,ar7);
      uVar8 = ((uint)bVar30 << 0xc | (uint)bVar31 << 0x12 | (uint)bVar32 << 0x13 |
              (uint)bVar33 << 0x14) & DAT_8c11c1f0;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar8 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar8 & 0x100000) >> 0x14);
      if (in_FPSCR_PR == 0) {
        in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar25,0),
                                  SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 * dVar25;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)*(double **)((int)puVar17 + -0x28) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        **(double **)((int)puVar17 + -0x28) = in_dr0;
      }
    } while (uVar7 < *(uint *)((int)puVar17 + -0x18));
  }
  *(undefined4 *)((int)puVar17 + -0x28) = *(undefined4 *)((int)puVar17 + 0x2c);
  cVar34 = (char)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
                   (uint)in_FPSCR_SZ << 0x14) & DAT_8c11c1f0 & 0x100000) >> 0x14);
  (*(code *)puVar3)(pdVar15,pdVar11,pdVar9,ar7);
  if (cVar34 == '\0') {
    *(int *)*(double **)((int)puVar17 + -0x28) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    **(double **)((int)puVar17 + -0x28) = in_dr0;
  }
  *(undefined2 *)(ar4 + 0x4c) = *(undefined2 *)((int)puVar17 + -0xc);
  *(undefined2 *)(ar4 + 0x2a) = *(undefined2 *)((int)puVar17 + -0x1c);
  *(ushort *)(ar4 + 0x28) = uVar14;
  *(int *)(ar4 + 0x44) = iVar16;
  return 0x44;
}



/* FUN_8c11c0e4 @ 8c11c0e4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11c0e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 a7;
  int *piVar5;
  undefined4 uVar6;
  
  if ((*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') &&
     (uVar2 = (*(code *)PTR_FUN_8c11c1f4)(*(undefined4 *)(ar4 + 0xc),2,ar6,ar7), (uVar2 & 0xff) != 0
     )) {
    pcVar3 = (char *)(*(code *)PTR_FUN_8c11c1f8)
                               (*(undefined4 *)(*(int *)(ar4 + 0xc) + 8),
                                *(undefined4 *)(*(int *)(ar4 + 0xc) + 0xc),ar6,ar7);
    uVar6 = (*(undefined4 **)(ar4 + 0xc))[1];
    uVar4 = (*(code *)PTR_FUN_8c11c1f8)(**(undefined4 **)(ar4 + 0xc),uVar6,ar6,ar7);
    puVar1 = PTR_FUN_8c11c1fc;
    (*(code *)PTR_FUN_8c11c1fc)(**(undefined4 **)(ar4 + 0x10),uVar6,ar6,ar7);
    a7 = (*(code *)puVar1)(*(undefined4 *)(*(int *)(ar4 + 0x10) + 4),uVar6,ar6,ar7);
    uVar6 = (*(code *)puVar1)(*(undefined4 *)(*(int *)(ar4 + 0x10) + 8),uVar6,ar6,ar7);
    FUN_8c11bd6c(ar4,(int)*pcVar3,uVar4,a7);
    (*(code *)PTR_memmove_8c11c200)(uVar6,*(undefined4 *)(ar4 + 0x30),*(int *)(ar4 + 0x54) << 2,a7);
  }
  piVar5 = *(int **)(ar4 + 0xc);
  if ((*(int *)(piVar5[1] * 4 + *(int *)(*piVar5 + 0x40)) == *(int *)(*piVar5 + 0x3c)) ||
     (*(int *)(*(int *)(piVar5[2] + 0x40) + piVar5[3] * 4) == *(int *)(piVar5[2] + 0x3c))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* FUN_8c11c1d8 @ 8c11c1d8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11c1d8(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c11c1ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*ar4 + 0x18))(*ar4,ar4[0xf]);
  return uVar1;
}



/* FUN_8c11c210 @ 8c11c210 callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11c210(undefined4 ar4,undefined4 ar5,int ar6,int *ar7)

{
  int in_r0;
  int unaff_r14;
  char in_T;
  
  if (in_T == '\x01') {
    if (ar6 != 0) {
      FUN_8c11bcb8(unaff_r14,*ar7 + ar6,ar6,ar7);
    }
    *ar7 = *ar7 + ((*(ushort *)(unaff_r14 + 0x4c) + 4) * *(int *)(unaff_r14 + 0x54) + 4) * 4;
  }
  else if (in_r0 == 2) {
    if (ar6 == 0) {
      FUN_8c11bb94(unaff_r14,ar5,0,ar7);
    }
    else {
      FUN_8c11bbd4(unaff_r14,*ar7 + ar6,ar6,ar7);
      *ar7 = *ar7 + ((*(ushort *)(unaff_r14 + 0x4c) + 4) * *(int *)(unaff_r14 + 0x54) + 4) * 4;
    }
  }
  else {
    if (in_r0 != DAT_8c11c2a4) {
      return 0;
    }
    FUN_8c11c1d8(unaff_r14,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c11c2ac)(unaff_r14,ar5,ar6,ar7);
  }
  return 1;
}



/* FUN_8c11c2b8 @ 8c11c2b8 callers=0 callees=2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11c2b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *unaff_r14;
  undefined4 extraout_fr1;
  undefined4 extraout_fr1_00;
  undefined4 extraout_fr1_01;
  undefined4 extraout_fr1_02;
  undefined4 extraout_fr1_03;
  undefined4 extraout_fr1_04;
  undefined4 extraout_fr1_05;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  int extraout_fr0_02;
  int extraout_fr0_03;
  int extraout_fr0_04;
  int extraout_fr0_05;
  int a5;
  short sVar9;
  byte in_FPSCR_CAUSE;
  byte bVar10;
  byte in_FPSCR_DN;
  byte bVar11;
  byte bVar12;
  byte in_FPSCR_PR;
  byte bVar13;
  byte bVar14;
  byte in_FPSCR_SZ;
  char cVar15;
  
  puVar1 = PTR_FUN_8c11c434;
  iVar7 = *unaff_r14;
  (*(code *)PTR_FUN_8c11c434)(ar4,8,ar6,ar7);
  uVar8 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c11c438._4_4_;
  bVar10 = 0;
  bVar11 = 0;
  bVar13 = (byte)((uVar8 & 0x80000) >> 0x13);
  bVar12 = (byte)((uVar8 & 0x100000) >> 0x14);
  if (bVar13 == 0) {
    uVar8 = (uint)extraout_fr0;
  }
  else {
    uVar8 = (uint)(double)CONCAT44(extraout_fr0,extraout_fr1);
  }
  uVar8 = uVar8 & 0xffff;
  unaff_r14[0x15] = uVar8;
  *(undefined2 *)(*(int *)unaff_r14[4] + 0xc) = 4;
  uVar2 = (undefined2)(uVar8 << 2);
  *(undefined2 *)(*(int *)(unaff_r14[4] + 4) + 0xc) = uVar2;
  *(undefined2 *)(*(int *)(unaff_r14[4] + 8) + 0xc) = uVar2;
  (*(code *)puVar1)(unaff_r14,6,ar6,ar7);
  uVar4 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar13 << 0x13 | (uint)bVar12 << 0x14)
          & DAT_8c11c438._4_4_;
  bVar10 = 0;
  bVar11 = 0;
  bVar13 = (byte)((uVar4 & 0x80000) >> 0x13);
  bVar12 = (byte)((uVar4 & 0x100000) >> 0x14);
  if (bVar13 == 0) {
    sVar9 = (short)(int)extraout_fr0_00;
  }
  else {
    sVar9 = (short)(int)(double)CONCAT44(extraout_fr0_00,extraout_fr1_00);
  }
  *(short *)(unaff_r14 + 0x16) = sVar9 + (short)DAT_8c11c440._4_4_;
  (*(code *)puVar1)(unaff_r14,1,ar6,ar7);
  uVar4 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar13 << 0x13 | (uint)bVar12 << 0x14)
          & DAT_8c11c438._4_4_;
  bVar10 = 0;
  bVar11 = (byte)((uVar4 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar4 & 0x100000) >> 0x14);
  if (bVar11 == 0) {
    uVar2 = (undefined2)(int)extraout_fr0_01;
  }
  else {
    uVar2 = (undefined2)(int)(double)CONCAT44(extraout_fr0_01,extraout_fr1_01);
  }
  *(undefined2 *)(unaff_r14 + 0x13) = uVar2;
  (*(code *)puVar1)(unaff_r14,2,ar6,ar7);
  uVar4 = DAT_8c11c438._4_4_;
  if (bVar13 == 0) {
    unaff_r14[0x1b] = extraout_fr0_02;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x1b) = CONCAT44(extraout_fr0_02,extraout_fr1_02);
  }
  bVar12 = 0;
  bVar14 = 0;
  bVar10 = (byte)((((uint)bVar10 << 0x12 | (uint)bVar11 << 0x13 | (uint)bVar13 << 0x14) & uVar4 &
                  0x100000) >> 0x14);
  (*(code *)puVar1)(unaff_r14,3,ar6,ar7);
  uVar4 = DAT_8c11c438._4_4_;
  if (bVar10 == 0) {
    unaff_r14[0x1a] = extraout_fr0_03;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x1a) = CONCAT44(extraout_fr0_03,extraout_fr1_03);
  }
  bVar11 = 0;
  bVar13 = 0;
  bVar10 = (byte)((((uint)bVar12 << 0x12 | (uint)bVar14 << 0x13 | (uint)bVar10 << 0x14) & uVar4 &
                  0x100000) >> 0x14);
  (*(code *)puVar1)(unaff_r14,4,ar6,ar7);
  uVar4 = DAT_8c11c438._4_4_;
  if (bVar10 == 0) {
    unaff_r14[0x18] = extraout_fr0_04;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x18) = CONCAT44(extraout_fr0_04,extraout_fr1_04);
  }
  cVar15 = (char)((((uint)bVar11 << 0x12 | (uint)bVar13 << 0x13 | (uint)bVar10 << 0x14) & uVar4 &
                  0x100000) >> 0x14);
  (*(code *)puVar1)(unaff_r14,7,ar6,ar7);
  if (cVar15 == '\0') {
    unaff_r14[0x17] = extraout_fr0_05;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x17) = CONCAT44(extraout_fr0_05,extraout_fr1_05);
  }
  uVar6 = 4;
  a5 = uVar8 * (*(ushort *)(unaff_r14 + 0x13) + 6);
  iVar7 = (**(code **)(iVar7 + 0x14))(iVar7,a5,4,ar7);
  unaff_r14[0xf] = iVar7;
  unaff_r14[0x11] = iVar7;
  iVar5 = uVar8 * 4;
  iVar7 = uVar8 * (*(ushort *)(unaff_r14 + 0x13) + 1) * 4 + unaff_r14[0xf];
  unaff_r14[0x10] = iVar7;
  unaff_r14[0xb] = iVar7;
  iVar3 = iVar7 + iVar5 + iVar5;
  unaff_r14[0xc] = iVar7 + iVar5;
  iVar7 = iVar3 + iVar5;
  unaff_r14[0xd] = iVar3;
  unaff_r14[0xe] = iVar7;
  unaff_r14[0x14] = iVar5 + iVar7;
  if (unaff_r14[0xf] != 0) {
    FUN_8c11bb94(unaff_r14,a5,uVar6,ar7);
    return 0;
  }
  uVar6 = (*(code *)PTR_FUN_8c11c458)(0x66);
  return uVar6;
}



/* FUN_8c11c412 @ 8c11c412 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11c412(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c11c468)(ar4,ar5,2,3);
  return uVar1;
}



/* FUN_8c11c47c @ 8c11c47c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11c47c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  undefined2 in_r3;
  byte unaff_r12;
  int unaff_r14;
  
  *(undefined2 *)(in_r0 + unaff_r14) = in_r3;
  *(ushort *)(unaff_r14 + 0x58) = (ushort)(byte)ar6;
  if (unaff_r12 == 0) {
LAB_8c11c4a6:
    if ((byte)ar6 != 0) {
      uVar1 = FUN_8c11c972(ar4,(uint)(byte)ar6,4,ar7);
      *(undefined4 *)(unaff_r14 + 0x5c) = uVar1;
      if (*(int *)(unaff_r14 + 0x5c) == 0) goto LAB_8c11c4ca;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_8c11c972(ar4,(uint)unaff_r12,8,ar7);
    *(undefined4 *)(unaff_r14 + 0x54) = uVar1;
    if (*(int *)(unaff_r14 + 0x54) != 0) goto LAB_8c11c4a6;
LAB_8c11c4ca:
    uVar1 = 1;
  }
  return uVar1;
}



/* FUN_8c11c5e4 @ 8c11c5e4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c11c5e4(int ar4,undefined4 *ar5,int ar6,int ar7)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int a6;
  int a7;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  char in_stack_00000000;
  
  iVar7 = 0;
  iVar5 = **(int **)(DAT_8c11c6ae + ar4);
  a6 = ar6;
  a7 = ar7;
  piVar1 = (int *)(**(code **)(*(int *)(DAT_8c11c6b0 + ar4) + 0x14))(0xc,DAT_8c11c6a8 + ar4,ar6,ar7)
  ;
  *ar5 = piVar1;
  puVar2 = (undefined4 *)(int)DAT_8c11c6b2;
  if (*(uint *)(ar4 + 0x78) < *(uint *)((int)puVar2 + ar4)) {
    piVar1[2] = 2;
  }
  else {
    piVar1[2] = 0;
  }
  if (ar6 == 0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  else {
    bVar10 = true;
    iVar9 = ar6;
    while (bVar10) {
      iVar9 = *(int *)(iVar9 + 0x10);
      bVar10 = iVar9 != 0;
      iVar7 = iVar7 + 1;
    }
    piVar3 = (int *)(**(code **)(*(int *)(DAT_8c11c6b0 + ar4) + 0x14))
                              (iVar7 * 0x18,DAT_8c11c6a8 + ar4,a6,a7);
    *piVar1 = iVar7;
    piVar1[1] = (int)piVar3;
    puVar2 = (undefined4 *)(uint)(ar7 == 0);
    for (; ar6 != 0; ar6 = *(int *)(ar6 + 0x10)) {
      piVar1 = *(int **)(ar6 + 0xc);
      iVar7 = 0;
      uVar6 = iVar5 * 0x6e;
      if (in_stack_00000000 == '\0') {
        uVar6 = 0;
      }
      for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {
        if (((undefined4 *)(uint)(ar7 == 0) != (undefined4 *)0x0) ||
           (*(int *)(*piVar1 * 8 + ar7) != -1)) {
          iVar7 = iVar7 + 1;
        }
      }
      puVar2 = (undefined4 *)
               (**(code **)(*(int *)(DAT_8c11c7b0 + ar4) + 0x14))
                         (iVar7 << 4,DAT_8c11c7b2 + ar4,a6,a7);
      *piVar3 = iVar7;
      piVar3[1] = *(int *)(ar6 + 4);
      piVar3[2] = *(int *)(ar6 + 8);
      piVar3[3] = -1;
      piVar3[5] = (int)puVar2;
      puVar8 = puVar2;
      for (piVar1 = *(int **)(ar6 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {
        if (in_stack_00000000 == '\0') {
          uVar11 = (uint)*(ushort *)(piVar1 + 5);
        }
        else {
          uVar11 = ((uint)*(ushort *)(piVar1 + 5) + iVar5) * 0x6e;
        }
        if ((ar7 == 0) ||
           (puVar2 = *(undefined4 **)(*piVar1 * 8 + ar7), puVar2 != (undefined4 *)0xffffffff)) {
          piVar4 = (int *)(**(code **)(*(int *)(DAT_8c11c7b0 + ar4) + 0x14))
                                    (0xc,DAT_8c11c7b2 + ar4,a6,a7);
          puVar2 = (undefined4 *)piVar3[3];
          if (puVar2 == (undefined4 *)0xffffffff) {
            piVar3[3] = uVar6;
          }
          *puVar8 = 1;
          puVar8[1] = uVar6;
          puVar8[2] = uVar11;
          puVar8[3] = piVar4;
          *piVar4 = piVar1[1];
          piVar4[1] = piVar1[2];
          if (ar7 == 0) {
            piVar4[2] = *piVar1;
          }
          else {
            piVar4[2] = *(int *)(*piVar1 * 8 + ar7);
          }
          puVar8 = puVar8 + 4;
        }
        uVar6 = uVar11;
      }
      piVar3[4] = uVar6;
      piVar3 = piVar3 + 6;
    }
  }
  return puVar2;
}



/* FUN_8c11c7b8 @ 8c11c7b8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11c7b8(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)ar5[1];
  iVar2 = 0;
  if (0 < *ar5) {
    do {
      iVar3 = piVar5[5];
      iVar4 = 0;
      if (0 < *piVar5) {
        do {
          (**(code **)(*(int *)(DAT_8c11c8fc + ar4) + 0x18))
                    (*(undefined4 *)(iVar3 + 0xc),DAT_8c11c8fe + ar4);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar4 < *piVar5);
      }
      (**(code **)(*(int *)(DAT_8c11c8fc + ar4) + 0x18))(piVar5[5],DAT_8c11c8fe + ar4);
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar2 < *ar5);
  }
  if (iVar2 != 0) {
    (**(code **)(*(int *)(DAT_8c11c8fc + ar4) + 0x18))(ar5[1],DAT_8c11c8fe + ar4);
  }
                    /* WARNING: Could not recover jumptable at 0x8c11c85e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(int *)(DAT_8c11c8fc + ar4) + 0x18))(ar5,DAT_8c11c8fe + ar4);
  return uVar1;
}



/* FUN_8c11c7cc @ 8c11c7cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11c7cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int unaff_r8;
  int iVar2;
  int *unaff_r10;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_r14;
  
  piVar5 = (int *)unaff_r10[1];
  iVar2 = unaff_r8;
  if (0 < *unaff_r10) {
    do {
      iVar3 = piVar5[5];
      iVar4 = unaff_r8;
      if (0 < *piVar5) {
        do {
          (**(code **)(*(int *)(DAT_8c11c8fc + unaff_r14) + 0x18))
                    (*(undefined4 *)(iVar3 + 0xc),DAT_8c11c8fe + unaff_r14,ar6,ar7);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar4 < *piVar5);
      }
      (**(code **)(*(int *)(DAT_8c11c8fc + unaff_r14) + 0x18))
                (piVar5[5],DAT_8c11c8fe + unaff_r14,ar6,ar7);
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar2 < *unaff_r10);
  }
  if (iVar2 != 0) {
    (**(code **)(*(int *)(DAT_8c11c8fc + unaff_r14) + 0x18))
              (unaff_r10[1],DAT_8c11c8fe + unaff_r14,ar6,ar7);
  }
                    /* WARNING: Could not recover jumptable at 0x8c11c85e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(int *)(DAT_8c11c8fc + unaff_r14) + 0x18))(DAT_8c11c8fe + unaff_r14);
  return uVar1;
}



/* FUN_8c11c86c @ 8c11c86c callers=0 callees=2 */

/* WARNING: Unknown calling convention */

int FUN_8c11c86c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = ar7;
  FUN_8c11c5e4(ar4,&uStack_10,ar7,in_stack_00000000);
  uVar1 = (**(code **)(DAT_8c11c902 + ar4))(uStack_10,DAT_8c11c8fe + ar4,ar7,in_stack_00000000);
  uStack_c = CONCAT31(uStack_c._1_3_,(char)uVar1);
  FUN_8c11c7b8(ar4,uStack_10,ar7,in_stack_00000000);
  return (int)(char)uStack_c;
}



/* FUN_8c11c914 @ 8c11c914 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c11c914(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int a4;
  
  a4 = (**(code **)(ar4 + 0x14))(ar5 * ar6,ar7,ar6,ar7);
  if (a4 != 0) {
    (*(code *)PTR_memset_8c11ca40)(a4,0,ar5 * ar6,ar7);
  }
  return a4;
}



/* FUN_8c11c972 @ 8c11c972 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11c972(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c11c914(*(undefined4 *)(DAT_8c11ca36 + ar4),ar5,ar6,DAT_8c11ca38 + ar4);
  return uVar1;
}



/* FUN_8c11c99a @ 8c11c99a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11c99a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(short *)(ar4 + 0x3e) != (short)ar5) {
    *(short *)(ar4 + 0x3e) = (short)ar5;
    if (*(int *)(DAT_8c11ca3a + ar4) != 0) {
      uVar1 = (**(code **)(DAT_8c11ca3a + ar4))((short)ar5,DAT_8c11ca38 + ar4);
    }
  }
  return uVar1;
}



/* FUN_8c11c9a0 @ 8c11c9a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11c9a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  int unaff_r14;
  
  uVar1 = 0;
  if ((uint)*(ushort *)(in_r0 + unaff_r14) != (uint)(ushort)ar5) {
    *(ushort *)(in_r0 + unaff_r14) = (ushort)ar5;
    if (*(int *)(DAT_8c11ca3a + unaff_r14) != 0) {
      uVar1 = (**(code **)(DAT_8c11ca3a + unaff_r14))
                        ((uint)(ushort)ar5,DAT_8c11ca38 + unaff_r14,ar6,ar7);
    }
  }
  return uVar1;
}



/* FUN_8c11c9d2 @ 8c11c9d2 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11c9d2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(ar4 + 0x38) != DAT_8c11ca44) {
    return 0x12;
  }
  iVar1 = (**(code **)(ar4 + 0x1c))(ar4 + 8);
  if (*(int *)(ar4 + 4) != iVar1) {
    uVar2 = FUN_8c11cd02(ar4,2,ar6,ar7);
    return uVar2;
  }
  return 0;
}



/* FUN_8c11c9d6 @ 8c11c9d6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11c9d6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r14;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(unaff_r14 + 0x38) != DAT_8c11ca44) {
    return 0x12;
  }
  iVar1 = (**(code **)(unaff_r14 + 0x1c))(unaff_r14 + 8,ar5,ar6,ar7);
  if (*(int *)(unaff_r14 + 4) != iVar1) {
    uVar2 = FUN_8c11cd02(unaff_r14,2,ar6,ar7);
    return uVar2;
  }
  return 0;
}



/* FUN_8c11ca24 @ 8c11ca24 callers=7 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11ca24(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(DAT_8c11cb3c + ar4) == DAT_8c11cb48) {
    iVar1 = FUN_8c11c9d2(*(undefined4 *)(DAT_8c11cb3e + ar4),ar5,ar6,ar7);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(*(int *)(DAT_8c11cb3e + ar4) + 0x1c))(DAT_8c11cb40 + ar4);
    if ((*(int *)(DAT_8c11cb42 + ar4) == iVar1) &&
       (iVar1 = (**(code **)(*(int *)(DAT_8c11cb3e + ar4) + 0x20))(DAT_8c11cb40 + ar4),
       *(int *)(DAT_8c11cb44 + ar4) == iVar1)) {
      return 0;
    }
    ar5_00 = 2;
    uVar2 = *(undefined4 *)(DAT_8c11cb3e + ar4);
  }
  else {
    ar5_00 = 0xb;
    uVar2 = *(undefined4 *)(DAT_8c11cb3e + ar4);
  }
  uVar2 = FUN_8c11cd02(uVar2,ar5_00,ar6,ar7);
  return uVar2;
}



/* FUN_8c11ca28 @ 8c11ca28 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11ca28(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  int unaff_r14;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(DAT_8c11cb3c + unaff_r14) == DAT_8c11cb48) {
    iVar1 = FUN_8c11c9d2(*(undefined4 *)(DAT_8c11cb3e + unaff_r14),ar5,ar6,ar7);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(*(int *)(DAT_8c11cb3e + unaff_r14) + 0x1c))
                      (DAT_8c11cb40 + unaff_r14,ar5,ar6,ar7);
    if ((*(int *)(DAT_8c11cb42 + unaff_r14) == iVar1) &&
       (iVar1 = (**(code **)(*(int *)(DAT_8c11cb3e + unaff_r14) + 0x20))
                          (DAT_8c11cb40 + unaff_r14,ar5,ar6,ar7),
       *(int *)(DAT_8c11cb44 + unaff_r14) == iVar1)) {
      return 0;
    }
    ar5_00 = 2;
    uVar2 = *(undefined4 *)(DAT_8c11cb3e + unaff_r14);
  }
  else {
    ar5_00 = 0xb;
    uVar2 = *(undefined4 *)(DAT_8c11cb3e + unaff_r14);
  }
  uVar2 = FUN_8c11cd02(uVar2,ar5_00,ar6,ar7);
  return uVar2;
}



/* FUN_8c11cad4 @ 8c11cad4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11cad4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar4_00;
  
  if (ar4 == 0) {
    uVar1 = 6;
  }
  else if (*(int *)(ar4 + 0x18) == DAT_8c11cb50) {
    ar4_00 = *(int *)(ar4 + 0x14);
    iVar2 = (**(code **)(ar4_00 + 0x1c))(ar4_00 + 8);
    if ((*(int *)(ar4 + 0xc) != iVar2) ||
       (iVar2 = (**(code **)(ar4_00 + 0x20))(ar4_00 + 8), *(int *)(ar4 + 0x10) != iVar2)) {
      uVar1 = FUN_8c11cd02(ar4_00,0xf,ar6,ar7);
      return uVar1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe;
  }
  return uVar1;
}



/* FUN_8c11cada @ 8c11cada callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11cada(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r13;
  int ar4_00;
  
  if (unaff_r13 == 0) {
    uVar1 = 6;
  }
  else if (*(int *)(unaff_r13 + 0x18) == DAT_8c11cb50) {
    ar4_00 = *(int *)(unaff_r13 + 0x14);
    iVar2 = (**(code **)(ar4_00 + 0x1c))(ar4_00 + 8,ar5,ar6,ar7);
    if ((*(int *)(unaff_r13 + 0xc) != iVar2) ||
       (iVar2 = (**(code **)(ar4_00 + 0x20))(ar4_00 + 8,ar5,ar6,ar7),
       *(int *)(unaff_r13 + 0x10) != iVar2)) {
      uVar1 = FUN_8c11cd02(ar4_00,0xf,ar6,ar7);
      return uVar1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe;
  }
  return uVar1;
}



/* FUN_8c11cb54 @ 8c11cb54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11cb54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar4_00;
  
  if (ar4 == 0) {
    uVar1 = 6;
  }
  else if (*(int *)(ar4 + 0x18) == DAT_8c11cc18) {
    ar4_00 = *(int *)(ar4 + 0x14);
    iVar2 = (**(code **)(ar4_00 + 0x1c))(ar4_00 + 8);
    if ((*(int *)(ar4 + 0xc) != iVar2) ||
       (iVar2 = (**(code **)(ar4_00 + 0x20))(ar4_00 + 8), *(int *)(ar4 + 0x10) != iVar2)) {
      uVar1 = FUN_8c11cd02(ar4_00,0x11,ar6,ar7);
      return uVar1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0x10;
  }
  return uVar1;
}



/* FUN_8c11cb5a @ 8c11cb5a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11cb5a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r13;
  int ar4_00;
  
  if (unaff_r13 == 0) {
    uVar1 = 6;
  }
  else if (*(int *)(unaff_r13 + 0x18) == DAT_8c11cc18) {
    ar4_00 = *(int *)(unaff_r13 + 0x14);
    iVar2 = (**(code **)(ar4_00 + 0x1c))(ar4_00 + 8,ar5,ar6,ar7);
    if ((*(int *)(unaff_r13 + 0xc) != iVar2) ||
       (iVar2 = (**(code **)(ar4_00 + 0x20))(ar4_00 + 8,ar5,ar6,ar7),
       *(int *)(unaff_r13 + 0x10) != iVar2)) {
      uVar1 = FUN_8c11cd02(ar4_00,0x11,ar6,ar7);
      return uVar1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0x10;
  }
  return uVar1;
}



/* FUN_8c11cbbc @ 8c11cbbc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c11cbbc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = PTR_DAT_8c11cc24;
  if ((byte)ar6 != 0) {
    puVar2 = PTR_DAT_8c11cc20;
  }
  uVar1 = (*(code *)PTR_FUN_8c11cc28)(ar4 + 0x48,(int)(char)puVar2[ar5],ar5,(uint)(byte)ar6);
  bVar3 = (uVar1 & 0xff) == 0;
  if (bVar3) {
    *(byte *)(ar5 + DAT_8c11cc14 + ar4) = (byte)ar6;
  }
  return (uint)!bVar3;
}



/* FUN_8c11cc2c @ 8c11cc2c callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11cc2c(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int a4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)(DAT_8c11cd3c + ar4) != 0) {
    a4 = *(int *)(DAT_8c11cd3c + ar4);
    uVar4 = ar5;
    uVar1 = (**(code **)(a4 + 0x3c))(a4,ar5,ar6,ar7);
    puVar2 = (uint *)(**(code **)(*(int *)(DAT_8c11cd3c + ar4) + 0x6c))
                               (*(int *)(DAT_8c11cd3c + ar4),uVar4,ar6,ar7);
    uVar4 = 0;
    puVar3 = puVar2;
    if (uVar1 != 0) {
      do {
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 | *puVar3;
        puVar3 = puVar3 + 2;
      } while (uVar4 < uVar1);
    }
    if (((ar5 & uVar5) == 0) || ((ar5 != 0xffffffff && ((~uVar5 & ar5) != 0)))) {
      return 1;
    }
    uVar5 = 0;
    do {
      uVar4 = (uint)((puVar2[uVar5 * 2] & ar5) != 0);
      if ((uVar4 != *(byte *)(DAT_8c11cd3e + ar4 + uVar5)) &&
         (uVar4 = FUN_8c11cbbc(ar4,uVar5,uVar4,ar7), (uVar4 & 0xff) != 0)) {
        return 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 3);
  }
  return 0;
}



/* FUN_8c11cd02 @ 8c11cd02 callers=10 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11cd02(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)ar4[0xb])(ar4[4],ar4 + 2,ar6,ar7);
  if (*ar4 == 0) {
    *ar4 = ar5;
  }
  (*(code *)ar4[0xc])(ar4[4],ar4 + 2,ar6,ar7);
  return 1;
}



/* FUN_8c11cd44 @ 8c11cd44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11cd44(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80000000;
  iVar2 = ar5;
  if ((ar5 == 0) || (iVar1 = FUN_8c11ca24(ar5,ar5,ar6,ar7), iVar1 != 0)) {
    iVar2 = FUN_8c11c9d2(ar4,iVar2,ar6,ar7);
    if (iVar2 == 0) {
      uVar3 = 0x12;
    }
    else {
      (*(code *)ar4[0xb])(ar4[4],ar4 + 2,uVar3);
      uVar3 = *ar4;
      *ar4 = 0;
      (*(code *)ar4[0xc])(ar4[4],ar4 + 2);
    }
  }
  else {
    uVar3 = *(undefined4 *)(ar5 + 0x40);
    *(undefined4 *)(ar5 + 0x40) = 0;
  }
  return uVar3;
}



/* FUN_8c11cd4e @ 8c11cd4e callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11cd4e(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  undefined4 uVar2;
  int unaff_r13;
  
  if ((unaff_r12 == 0) || (iVar1 = FUN_8c11ca24(unaff_r12,ar5,ar6,ar7), iVar1 != 0)) {
    iVar1 = FUN_8c11c9d2(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      uVar2 = 0x12;
    }
    else {
      (*(code *)ar4[0xb])(ar4[4],ar4 + 2,ar6,ar7);
      uVar2 = *ar4;
      *ar4 = 0;
      (*(code *)ar4[0xc])(ar4[4],ar4 + 2,ar6,ar7);
    }
  }
  else {
    uVar2 = *(undefined4 *)(unaff_r13 + 0x40);
    *(undefined4 *)(unaff_r13 + 0x40) = 0;
  }
  return uVar2;
}



/* FUN_8c11cdb6 @ 8c11cdb6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11cdb6(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *a5;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  a5 = &uStack_14;
  if (ar4 != (undefined4 *)0x0) {
    uStack_10 = 0;
    uStack_14 = ar5;
    puVar1 = (undefined4 *)(*(code *)*ar4)(0x3c,&uStack_14,ar6,ar7);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[5] = *ar4;
      puVar1[6] = ar4[1];
      puVar1[7] = ar4[3];
      puVar1[8] = ar4[4];
      puVar1[9] = ar4[5];
      puVar1[10] = ar4[6];
      puVar1[0xb] = ar4[7];
      uVar2 = DAT_8c11cef4;
      puVar1[0xc] = ar4[8];
      puVar1[0xe] = uVar2;
      puVar1[2] = uStack_14;
      puVar1[3] = uStack_10;
      uVar2 = (*(code *)puVar1[9])(&uStack_14,a5,ar6,ar7);
      puVar1[4] = uVar2;
      uVar2 = (*(code *)puVar1[7])(&uStack_14,a5,ar6,ar7);
      puVar1[1] = uVar2;
      return puVar1;
    }
  }
  return 0;
}



/* FUN_8c11ce44 @ 8c11ce44 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11ce44(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c11c9d2(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 1;
  }
  (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x10),ar4 + 8,ar6,ar7);
  *(undefined4 *)(ar4 + 0x38) = 0;
  (**(code **)(ar4 + 0x18))(ar4,ar4 + 8,ar6,ar7);
  return 0;
}



/* FUN_8c11ce88 @ 8c11ce88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11ce88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *DAT_8c11cef8;
}



/* FUN_8c11ce8e @ 8c11ce8e callers=0 callees=4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11ce8e(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *a6;
  int iVar8;
  undefined *a7;
  undefined4 extraout_fr3;
  undefined8 in_xd2;
  byte in_FPSCR_DN;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte in_FPSCR_PR;
  byte bVar12;
  byte bVar13;
  byte in_FPSCR_SZ;
  char cVar14;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_28 = *(undefined4 *)PTR_PTR_8c11cefc;
  uStack_24 = *(undefined4 *)(PTR_PTR_8c11cefc + 4);
  uStack_20 = *(undefined4 *)(PTR_PTR_8c11cefc + 8);
  uStack_1c = *(undefined4 *)(PTR_PTR_8c11cefc + 0xc);
  uStack_18 = *(undefined4 *)(PTR_PTR_8c11cefc + 0x10);
  uStack_14 = *(undefined4 *)(PTR_PTR_8c11cefc + 0x14);
  uStack_34 = *(undefined4 *)PTR_PTR_8c11cf00;
  uStack_30 = *(undefined4 *)(PTR_PTR_8c11cf00 + 4);
  uStack_2c = *(undefined4 *)(PTR_PTR_8c11cf00 + 8);
  uVar4 = ar6;
  iVar2 = FUN_8c11c9d2(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    if (ar5 == (undefined4 *)0x0) {
      FUN_8c11cd02(ar4,0x13,uVar4,ar7);
    }
    else {
      iVar7 = (int)DAT_8c11cfb0;
      iVar8 = ar4 + 8;
      bVar9 = 0;
      bVar11 = 0;
      bVar13 = (byte)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
                       (uint)in_FPSCR_SZ << 0x14) & DAT_8c11cfb8 & 0x100000) >> 0x14);
      iVar2 = FUN_8c11c914(ar4,1,iVar7,iVar8);
      if (iVar2 == 0) {
        FUN_8c11cd02(ar4,2,iVar7,iVar8);
      }
      else {
        iVar7 = (int)DAT_8c11cfb2;
        *(int *)(iVar2 + 0x48) = iVar2;
        puVar5 = (undefined4 *)(iVar7 + iVar2);
        *(undefined1 *)(iVar2 + 0x4c) = 0;
        *puVar5 = *ar5;
        puVar5[1] = ar5[1];
        puVar5[2] = ar5[2];
        puVar5[3] = ar5[3];
        puVar5[4] = ar5[4];
        puVar5[5] = ar5[5];
        *(undefined4 *)(DAT_8c11cfb4 + iVar2) = *(undefined4 *)(ar4 + 8);
        *(int *)(DAT_8c11cfb6 + iVar2) = ar4;
        a6 = &uStack_34;
        puVar5 = &uStack_28;
        bVar10 = 0;
        bVar12 = 0;
        bVar9 = (byte)((((uint)bVar9 << 0x12 | (uint)bVar11 << 0x13 | (uint)bVar13 << 0x14) &
                        DAT_8c11cfb8 & 0x100000) >> 0x14);
        a7 = PTR_PTR_8c11cfcc;
        uVar3 = (*(code *)PTR_FUN_8c11cfd0)(iVar2,puVar5,a6,PTR_PTR_8c11cfcc);
        if ((uVar3 & 0xff) == 0) {
          bVar11 = 0;
          bVar13 = 0;
          bVar9 = (byte)((((uint)bVar10 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar9 << 0x14) &
                          DAT_8c11d118 & 0x100000) >> 0x14);
          uVar4 = (**(code **)(ar4 + 0x1c))(ar4 + 8,puVar5,a6,a7);
          *(undefined4 *)(DAT_8c11d100 + iVar2) = uVar4;
          bVar10 = 0;
          bVar12 = 0;
          bVar9 = (byte)((((uint)bVar11 << 0x12 | (uint)bVar13 << 0x13 | (uint)bVar9 << 0x14) &
                          DAT_8c11d118 & 0x100000) >> 0x14);
          uVar4 = (**(code **)(ar4 + 0x20))(ar4 + 8,puVar5,a6,a7);
          *(undefined4 *)(DAT_8c11d102 + iVar2) = uVar4;
          *(undefined4 *)(iVar2 + 0x60) = 0;
          *(undefined4 *)(iVar2 + 100) = **(undefined4 **)(iVar2 + 0x5c);
          *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
          *(undefined4 *)(iVar2 + 0x70) = **(undefined4 **)(iVar2 + 0x54);
          puVar1 = PTR_LAB_8c11d11c;
          *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(*(int *)(iVar2 + 0x54) + 4);
          iVar7 = (int)DAT_8c11d104;
          *(undefined4 *)(iVar7 + iVar2) = 0;
          *(undefined4 *)(iVar7 + 4 + iVar2) = 0;
          *(undefined1 *)(DAT_8c11d106 + iVar2) = 0;
          uVar3 = DAT_8c11d118;
          iVar7 = (int)DAT_8c11d108;
          *(undefined **)(iVar7 + iVar2) = puVar1;
          *(undefined2 *)(iVar7 + 100 + iVar2) = 0;
          *(undefined4 *)(iVar7 + 0x68 + iVar2) = 4;
          cVar14 = (char)((((uint)bVar10 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar9 << 0x14) &
                           uVar3 & 0x100000) >> 0x14);
          uVar4 = (**(code **)(ar4 + 0x14))(0x28,ar4 + 8,a6,a7);
          *(undefined4 *)(DAT_8c11d10a + iVar2) = uVar4;
          if (*(int *)(DAT_8c11d10a + iVar2) == 0) {
            FUN_8c11cd02(ar4,2,a6,a7);
          }
          else {
            iVar7 = (int)DAT_8c11d10e;
            **(undefined4 **)(DAT_8c11d10a + iVar2) = 0;
            puVar1 = PTR_FUN_8c11d124;
            a7 = (undefined *)0x0;
            uVar4 = _DAT_8c11d120;
            if (cVar14 != '\0') {
              in_xd2 = CONCAT44(PTR_FUN_8c11d124,_DAT_8c11d120);
              uVar4 = extraout_fr3;
            }
            a6 = (undefined4 *)(iVar7 + iVar2);
            if (cVar14 == '\0') {
              *(undefined4 *)(DAT_8c11d10c + iVar2) = uVar4;
            }
            else {
              *(undefined8 *)(DAT_8c11d10c + iVar2) = in_xd2;
            }
            uVar3 = (*(code *)puVar1)(iVar2 + 0x48,4,a6,0);
            if ((uVar3 & 0xff) == 0) {
              a7 = (undefined *)0x0;
              a6 = (undefined4 *)(DAT_8c11d110 + iVar2);
              uVar4 = 0x29;
              uVar3 = (*(code *)PTR_FUN_8c11d124)(iVar2 + 0x48,0x29,a6,0);
              if (((uVar3 & 0xff) == 0) &&
                 (uVar3 = FUN_8c11d8fc(iVar2,uVar4,a6,a7), uVar4 = DAT_8c11d128, (uVar3 & 0xff) == 0
                 )) {
                iVar7 = (int)DAT_8c11d112;
                iVar8 = (int)DAT_8c11d114;
                uVar3 = 0;
                *(undefined4 *)(iVar7 + iVar2) = ar6;
                puVar6 = (undefined1 *)(iVar8 + iVar2);
                *(undefined4 *)(iVar7 + -8 + iVar2) = uVar4;
                do {
                  *puVar6 = 1;
                  puVar6[1] = 1;
                  uVar3 = uVar3 + 3;
                  puVar6[2] = 1;
                  puVar6 = puVar6 + 3;
                } while (uVar3 < 3);
                return iVar2;
              }
            }
          }
        }
        else {
          FUN_8c11cd02(*(undefined4 *)(DAT_8c11cfb6 + iVar2),*(undefined4 *)(iVar2 + 0x40),a6,a7);
        }
        (**(code **)(ar4 + 0x18))(iVar2,ar4 + 8,a6,a7);
      }
    }
  }
  return 0;
}



/* FUN_8c11d14c @ 8c11d14c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11d14c(int ar4,undefined4 *ar5,int *ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 a6;
  int *a7;
  int iStack_20;
  undefined4 *puStack_1c;
  int *piStack_18;
  int iStack_14;
  
  a7 = &iStack_20;
  a6 = 0;
  iStack_20 = 0;
  iStack_14 = *(int *)(DAT_8c11d252 + ar4);
  puStack_1c = ar5;
  piStack_18 = ar6;
  uVar1 = (*(code *)PTR_FUN_8c11d260)(ar4 + 0x48,0x27,0,&iStack_20);
  if ((uVar1 & 0xff) == 0) {
    iStack_20 = iStack_20 + DAT_8c11d254;
    puVar2 = (undefined4 *)(**(code **)(iStack_14 + 0x14))(iStack_20,DAT_8c11d256 + ar4,a6,a7);
    iVar3 = (int)DAT_8c11d25a;
    puVar2[1] = iStack_20;
    *puVar2 = 4;
    (*(code *)PTR_memmove_8c11d264)(puVar2 + 2,**(int **)(iVar3 + ar4) + 8,(int)DAT_8c11d258,a7);
    iStack_20 = 0;
    uVar1 = (*(code *)PTR_FUN_8c11d260)
                      (ar4 + 0x48,0x27,(int)(puVar2 + 2) + (int)DAT_8c11d258,&iStack_20);
    if ((uVar1 & 0xff) == 0) {
      *piStack_18 = iStack_20 + DAT_8c11d254;
      *puStack_1c = puVar2;
      return 0;
    }
  }
  return 1;
}



/* FUN_8c11d200 @ 8c11d200 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11d200(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  iVar3 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar3 == 0) {
    iVar3 = *(int *)(DAT_8c11d252 + ar4);
    sVar1 = *(short *)(ar4 + 0x3e);
    if (((sVar1 != 0) && (sVar1 != 1)) && (sVar1 != 2)) {
      uVar4 = (*(code *)PTR_FUN_8c11d268)(ar4 + 0x48,7);
      return uVar4 & 0xff;
    }
    iVar5 = (int)DAT_8c11d384;
    if (*(int *)(iVar5 + ar4) != 0) {
      iVar7 = (int)DAT_8c11d386;
      *(int *)(*(int *)(iVar5 + ar4) + 4) = *(int *)(*(int *)(iVar5 + ar4) + 4) + -1;
      (**(code **)(iVar3 + 0x18))(*(undefined4 *)(iVar5 + 8 + ar4),iVar7 + ar4);
      *(undefined4 *)(DAT_8c11d388 + ar4) = 0;
    }
    iVar5 = 0;
    if (*(int *)(DAT_8c11d38a + ar4) != 0) {
      iVar7 = *(int *)(DAT_8c11d38a + ar4);
      *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + -1;
    }
    piVar6 = (int *)(DAT_8c11d38c + ar4);
    piVar8 = piVar6;
    do {
      if (*piVar6 != 0) {
        (**(code **)(iVar3 + 0x18))(*piVar8,DAT_8c11d386 + ar4);
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < 3);
    if (**(int **)(DAT_8c11d38e + ar4) != 0) {
      (**(code **)(iVar3 + 0x18))(**(undefined4 **)(DAT_8c11d38e + ar4),DAT_8c11d386 + ar4);
    }
    (**(code **)(iVar3 + 0x18))(*(undefined4 *)(DAT_8c11d38e + ar4),DAT_8c11d386 + ar4);
    (**(code **)(iVar3 + 0x18))(*(undefined4 *)(ar4 + 0x54),DAT_8c11d386 + ar4);
    (**(code **)(iVar3 + 0x18))(*(undefined4 *)(ar4 + 0x5c),DAT_8c11d386 + ar4);
    cVar2 = (*(code *)PTR_FUN_8c11d398)(ar4);
    if (cVar2 == '\0') {
      iVar5 = (int)DAT_8c11d386;
      *(undefined4 *)(DAT_8c11d390 + ar4) = 0;
      (**(code **)(iVar3 + 0x18))(ar4,iVar5 + ar4);
      return 0;
    }
  }
  return 1;
}



/* FUN_8c11d20e @ 8c11d20e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11d20e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int unaff_r9;
  int *piVar7;
  
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    iVar2 = *(int *)(DAT_8c11d252 + ar4);
    sVar1 = *(short *)(unaff_r9 + 0x3e);
    if (((sVar1 != 0) && (sVar1 != 1)) && (sVar1 != 2)) {
      uVar3 = (*(code *)PTR_FUN_8c11d268)(ar4 + 0x48,7,ar6,ar7);
      return uVar3 & 0xff;
    }
    iVar4 = (int)DAT_8c11d384;
    if (*(int *)(iVar4 + ar4) != 0) {
      iVar6 = (int)DAT_8c11d386;
      *(int *)(*(int *)(iVar4 + ar4) + 4) = *(int *)(*(int *)(iVar4 + ar4) + 4) + -1;
      (**(code **)(iVar2 + 0x18))(*(undefined4 *)(iVar4 + 8 + ar4),iVar6 + ar4,ar6,ar7);
      *(undefined4 *)(DAT_8c11d388 + ar4) = 0;
    }
    iVar4 = 0;
    if (*(int *)(DAT_8c11d38a + ar4) != 0) {
      iVar6 = *(int *)(DAT_8c11d38a + ar4);
      *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + -1;
    }
    piVar5 = (int *)(DAT_8c11d38c + ar4);
    piVar7 = piVar5;
    do {
      if (*piVar5 != 0) {
        (**(code **)(iVar2 + 0x18))(*piVar7,DAT_8c11d386 + ar4,ar6,ar7);
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < 3);
    if (**(int **)(DAT_8c11d38e + ar4) != 0) {
      (**(code **)(iVar2 + 0x18))(**(undefined4 **)(DAT_8c11d38e + ar4),DAT_8c11d386 + ar4,ar6,ar7);
    }
    (**(code **)(iVar2 + 0x18))(*(undefined4 *)(DAT_8c11d38e + ar4),DAT_8c11d386 + ar4,ar6,ar7);
    (**(code **)(iVar2 + 0x18))(*(undefined4 *)(ar4 + 0x54),DAT_8c11d386 + ar4,ar6,ar7);
    iVar4 = DAT_8c11d386 + ar4;
    (**(code **)(iVar2 + 0x18))(*(undefined4 *)(ar4 + 0x5c),iVar4,ar6,ar7);
    uVar3 = (*(code *)PTR_FUN_8c11d398)(unaff_r9,iVar4,ar6,ar7);
    if ((uVar3 & 0xff) == 0) {
      iVar4 = (int)DAT_8c11d386;
      *(undefined4 *)(DAT_8c11d390 + ar4) = 0;
      (**(code **)(iVar2 + 0x18))(ar4,iVar4 + ar4,ar6,ar7);
      return 0;
    }
  }
  return 1;
}



/* FUN_8c11d370 @ 8c11d370 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c11d370(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar3 == 0) {
    if (*(short *)(ar4 + 0x3e) == 2) {
      iVar3 = (int)DAT_8c11d470;
      *(undefined4 *)(iVar3 + 0xc + ar4) = *(undefined4 *)(iVar3 + ar4);
      *(undefined4 *)(iVar3 + 0x24 + ar4) = 0;
      *(undefined4 *)(iVar3 + 0x28 + ar4) = 0;
      *(undefined2 *)(iVar3 + 0x2c + ar4) = 0;
      puVar1 = PTR_FUN_8c11d480;
      iVar3 = (int)DAT_8c11d472;
      *(undefined2 *)(iVar3 + ar4) = 0;
      *(undefined2 *)(iVar3 + 0x1a + ar4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0;
      *(undefined4 *)(DAT_8c11d474 + ar4) = 3;
      cVar2 = (*(code *)puVar1)(ar4 + 0x48,1,0);
      if ((cVar2 == '\0') && (*(int *)(DAT_8c11d476 + ar4) == 0)) {
        (*(code *)PTR_FUN_8c11d480)(ar4 + 0x48,2,0);
      }
      uVar4 = *(uint *)(ar4 + 0x40);
    }
    else {
      uVar4 = (*(code *)PTR_FUN_8c11d47c)(ar4 + 0x48,7);
      uVar4 = uVar4 & 0xff;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* FUN_8c11d374 @ 8c11d374 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c11d374(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_r14;
  
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    if (*(short *)(ar4 + 0x3e) == 2) {
      iVar2 = (int)DAT_8c11d470;
      *(undefined4 *)(iVar2 + 0xc + unaff_r14) = *(undefined4 *)(iVar2 + unaff_r14);
      *(undefined4 *)(iVar2 + 0x24 + unaff_r14) = 0;
      *(undefined4 *)(iVar2 + 0x28 + unaff_r14) = 0;
      *(undefined2 *)(iVar2 + 0x2c + unaff_r14) = 0;
      puVar1 = PTR_FUN_8c11d480;
      iVar2 = (int)DAT_8c11d472;
      *(undefined2 *)(iVar2 + unaff_r14) = 0;
      *(undefined2 *)(iVar2 + 0x1a + unaff_r14) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0;
      *(undefined4 *)(DAT_8c11d474 + unaff_r14) = 3;
      uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48,1,0,0);
      if (((uVar3 & 0xff) == 0) && (*(int *)(DAT_8c11d476 + unaff_r14) == 0)) {
        (*(code *)PTR_FUN_8c11d480)(unaff_r14 + 0x48,2,0,0);
      }
      uVar3 = *(uint *)(ar4 + 0x40);
    }
    else {
      uVar3 = (*(code *)PTR_FUN_8c11d47c)(unaff_r14 + 0x48,7,ar6,ar7);
      uVar3 = uVar3 & 0xff;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* FUN_8c11d432 @ 8c11d432 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c11d432(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 *puStack_c;
  
  if (ar5 == 0) {
    a5 = 6;
    puStack_c = *(undefined4 **)(ar4 + 0x54);
    a6 = puStack_c[1];
  }
  else {
    puStack_c = *(undefined4 **)(ar4 + 0x54);
    a6 = puStack_c[1];
    a5 = 5;
  }
  uVar1 = (*(code *)PTR_FUN_8c11d484)(*puStack_c,a5,a6,0);
  return (uint)((uVar1 & 0xff) == 0);
}



/* FUN_8c11d488 @ 8c11d488 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11d488(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  ushort uVar1;
  int a5;
  int a4;
  undefined4 uVar2;
  int a6;
  int iVar3;
  int iVar4;
  int iVar5;
  int a4_00;
  uint uVar6;
  int a5_00;
  int a4_01;
  int iVar7;
  
  a4_00 = *(int *)(ar4 + 0x70);
  iVar7 = ar5 * 4;
  iVar5 = (int)DAT_8c11d5ba;
  iVar4 = *(int *)(DAT_8c11d5b8 + ar4);
  do {
    a5 = (*(code *)PTR_FUN_8c11d5c8)(a4_00,*(undefined4 *)(ar4 + 0x74),ar6,ar7);
    if (a5 == 0) {
      return 0;
    }
    a4_01 = *(int *)(DAT_8c11d5bc + ar4 + iVar7);
    uVar6 = a4_01 + (uint)*(ushort *)(a4_00 + 0xc);
    if (*(uint *)(DAT_8c11d5be + ar4 + iVar7) < uVar6) {
      a5_00 = *(int *)(DAT_8c11d5c0 + ar4 + iVar7);
      a6 = *(int *)(DAT_8c11d5be + ar4 + iVar7) - a5_00;
      a4 = (**(code **)(iVar4 + 0x14))(a6 + iVar5,DAT_8c11d5c2 + ar4,ar6,ar7);
      if (a4 == 0) {
        uVar2 = (*(code *)PTR_FUN_8c11d5cc)(ar4 + 0x48,2);
        return uVar2;
      }
      if (a5_00 != 0) {
        iVar3 = a6;
        (*(code *)PTR_memmove_8c11d5d0)(a4,a5_00,a6,ar7);
        (**(code **)(iVar4 + 0x18))(a5_00,DAT_8c11d5c2 + ar4,iVar3,ar7);
      }
      iVar3 = (int)DAT_8c11d5be;
      a4_01 = (a4_01 - a5_00) + a4;
      uVar1 = *(ushort *)(a4_00 + 0xc);
      *(int *)(DAT_8c11d5c0 + ar4 + iVar7) = a4;
      *(int *)(iVar3 + ar4 + iVar7) = a4 + a6 + iVar5;
      uVar6 = a4_01 + (uint)uVar1;
    }
    ar6 = (uint)*(ushort *)(a4_00 + 0xc);
    (*(code *)PTR_memmove_8c11d5d0)(a4_01,a5,ar6,ar7);
    *(uint *)(DAT_8c11d5bc + ar4 + iVar7) = uVar6;
  } while( true );
}



/* FUN_8c11d5d4 @ 8c11d5d4 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11d5d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 a4;
  uint a5;
  int iVar4;
  undefined4 uVar5;
  undefined4 a7;
  
  sVar1 = *(short *)(ar4 + 0x3e);
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 0;
    if (((sVar1 != 3) && (sVar1 != 4)) && (sVar1 != 7)) {
      return 0;
    }
    a7 = 0;
    uVar5 = 0;
    uVar3 = (*(code *)PTR_FUN_8c11d6e0)(ar4 + 0x48,3,0,0);
    if (((uVar3 & 0xff) == 0) &&
       (uVar3 = (*(code *)PTR_FUN_8c11d6e4)(ar4,0,uVar5,a7), (uVar3 & 0xff) == 0)) {
      a5 = (uint)*(ushort *)(DAT_8c11d6d4 + ar4);
      uVar3 = FUN_8c11d488(ar4,a5,uVar5,a7);
      if (((uVar3 & 0xff) == 0) &&
         (((*(short *)(DAT_8c11d6d6 + ar4) == 0 ||
           (((*(short *)(DAT_8c11d6d6 + ar4) != 1 ||
             (uVar3 = (*(code *)PTR_FUN_8c11d6e8)(ar4,a5,uVar5,a7), (uVar3 & 0xff) == 0)) &&
            ((*(short *)(DAT_8c11d6d6 + ar4) != 2 ||
             (uVar3 = (*(code *)PTR_FUN_8c11d6ec)(ar4,a5,uVar5,a7), (uVar3 & 0xff) == 0)))))) &&
          (*(int *)(DAT_8c11d6d8 + ar4) != 4)))) {
        iVar2 = (int)DAT_8c11d6d8;
        iVar4 = (int)DAT_8c11d6da;
        a4 = *(undefined4 *)(iVar2 + ar4);
        *(undefined4 *)(iVar2 + ar4) = 4;
        uVar3 = (**(code **)(iVar2 + -0x7c + ar4))(a4,iVar4 + ar4,uVar5,a7);
        if ((uVar3 & 0xff) != 0) goto LAB_8c11d6c2;
      }
    }
    uVar5 = *(undefined4 *)(ar4 + 0x40);
  }
  else {
LAB_8c11d6c2:
    uVar5 = 1;
  }
  return uVar5;
}



/* FUN_8c11d6f0 @ 8c11d6f0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c11d6f0(int ar4,uint *ar5,uint ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 a5;
  uint uVar6;
  undefined4 auStack_64 [2];
  code *pcStack_5c;
  code *pcStack_58;
  
  puVar5 = ar5;
  uVar3 = ar6;
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  puVar1 = PTR_FUN_8c11d800;
  if (iVar2 == 0) {
    if ((ar5 == (uint *)0x0) && (ar6 != 0)) {
      a5 = 0x13;
override_prt_8c11d780_7a4d7f16:
      uVar3 = (*(code *)puVar1)(ar4 + 0x48,a5,uVar3,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c11d808)(auStack_64,puVar5,uVar3,ar7);
      auStack_64[0] = **(undefined4 **)(DAT_8c11d7fc + ar4);
      iVar2 = (*pcStack_5c)(auStack_64,puVar5,uVar3,ar7);
      iVar4 = (*pcStack_58)(auStack_64,puVar5,uVar3,ar7);
      uVar6 = 0;
      uVar3 = iVar2 + iVar4;
      puVar5 = ar5;
      if (ar6 != 0) {
        do {
          if (uVar3 <= *puVar5) {
            a5 = 0x19;
            goto override_prt_8c11d780_7a4d7f16;
          }
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 < ar6);
      }
      uVar3 = (*(code *)PTR_FUN_8c11d80c)(ar4 + 0x48,0x19,ar5,ar6);
    }
    uVar3 = uVar3 & 0xff;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* FUN_8c11d7b8 @ 8c11d7b8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11d7b8(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *a7;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uStack_2c;
  int iStack_28;
  int *piStack_24;
  int *piStack_20;
  int iStack_1c;
  
  a7 = &uStack_2c;
  iVar7 = 0;
  iVar8 = 0;
  piStack_24 = ar5;
  piStack_20 = ar6;
  iVar3 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  puVar2 = PTR_FUN_8c11d8f4;
  if (iVar3 == 0) {
    if ((piStack_24 == (int *)0x0) || (piStack_20 == (int *)0x0)) {
      uVar4 = (*(code *)PTR_FUN_8c11d800)(ar4 + 0x48,0x13,ar6,ar7);
      return uVar4 & 0xff;
    }
    iStack_1c = *(int *)(DAT_8c11d8ea + ar4);
    *(undefined4 *)(ar4 + 0x40) = 0;
    piVar6 = &iStack_28;
    uVar4 = (*(code *)puVar2)(ar4 + 0x48,0x1a,piVar6,&uStack_2c);
    puVar2 = PTR_FUN_8c11d8f8;
    if ((uVar4 & 0xff) == 0) {
      uVar9 = (uint)DAT_8c11d8ec;
      uVar4 = 0;
      if (uStack_2c != 0) {
        do {
          piVar6 = (int *)(int)(char)*(byte *)(iStack_28 + uVar4);
          uVar5 = uVar9;
          do {
            if (((uint)*(byte *)(iStack_28 + uVar4) & uVar5 & 0xff) != 0) {
              iVar8 = iVar8 + 1;
            }
            uVar5 = (uVar5 & 0xff) >> 1;
          } while (uVar5 != 0);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uStack_2c);
      }
      if (iVar8 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)(**(code **)(iStack_1c + 0x14))(iVar8 << 2,DAT_8c11d8ee + ar4,piVar6,a7);
      }
      *piStack_20 = iVar8;
      *piStack_24 = (int)piVar6;
      uVar4 = 0;
      if (uStack_2c != 0) {
        do {
          bVar1 = *(byte *)(iStack_28 + uVar4);
          uVar5 = uVar9;
          do {
            if (((uint)bVar1 & uVar5 & 0xff) != 0) {
              *piVar6 = iVar7;
              piVar6 = piVar6 + 1;
            }
            uVar5 = (uVar5 & 0xff) >> 1;
            iVar7 = iVar7 + 1;
          } while (uVar5 != 0);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uStack_2c);
      }
      return 0;
    }
    *(undefined4 *)(ar4 + 0x40) = 0;
    (*(code *)puVar2)(ar4 + 0x48,7,piVar6,a7);
  }
  return 1;
}



/* FUN_8c11d8fc @ 8c11d8fc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11d8fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_FUN_8c11da14;
  *(undefined4 *)(ar4 + 0x78) = 0;
  cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x46,ar4 + 0x7c,0);
  if ((((cVar2 == '\0') &&
       (cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x47,DAT_8c11da06 + ar4,0), cVar2 == '\0')) &&
      (cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x48,DAT_8c11da08 + ar4,0), cVar2 == '\0')) &&
     (cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x49,DAT_8c11da0a + ar4,0), cVar2 == '\0')) {
    uVar3 = (*(code *)puVar1)(ar4 + 0x48,0x4a,DAT_8c11da0c + ar4,0);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* FUN_8c11d904 @ 8c11d904 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11d904(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_r14;
  
  puVar1 = PTR_FUN_8c11da14;
  *(undefined4 *)(unaff_r14 + 0x78) = 0;
  uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48,0x46,ar6 + 0x7c,0);
  if (((((uVar2 & 0xff) == 0) &&
       (uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48,0x47,DAT_8c11da06 + unaff_r14,0),
       (uVar2 & 0xff) == 0)) &&
      (uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48,0x48,DAT_8c11da08 + unaff_r14,0),
      (uVar2 & 0xff) == 0)) &&
     (uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48,0x49,DAT_8c11da0a + unaff_r14,0),
     (uVar2 & 0xff) == 0)) {
    uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48,0x4a,DAT_8c11da0c + unaff_r14,0);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* FUN_8c11d996 @ 8c11d996 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c11d996(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *ar6_00;
  
  ar6_00 = ar6;
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    if ((ar5 == (int *)0x0) || (ar6 == (undefined4 *)0x0)) {
      uVar3 = (*(code *)PTR_FUN_8c11da1c)(ar4 + 0x48,0x13);
      uVar3 = uVar3 & 0xff;
    }
    else {
      puVar4 = (undefined4 *)
               (**(code **)(*(int *)(DAT_8c11da0e + ar4) + 0x14))(0x38,DAT_8c11da10 + ar4);
      puVar1 = PTR_libgcc_divide_helper_01051c_8c11db44;
      if (puVar4 == (undefined4 *)0x0) {
        *ar5 = 0;
        iVar2 = (int)DAT_8c11da0e;
        *ar6 = 0;
        uVar5 = FUN_8c11cd02(*(undefined4 *)(iVar2 + ar4),2,ar6_00,ar7);
        return uVar5;
      }
      *ar6 = 0x38;
      *ar5 = (int)puVar4;
      uVar5 = (*(code *)puVar1)();
      puVar4[3] = uVar5;
      puVar4[9] = *(undefined4 *)(ar4 + 0x7c);
      puVar4[0xc] = *(undefined4 *)(ar4 + 0x80);
      puVar4[1] = *(undefined4 *)(ar4 + 0x88);
      puVar4[2] = *(int *)(ar4 + 0x90) * 10;
      puVar4[7] = *(undefined4 *)(ar4 + 0x94);
      puVar4[8] = *(int *)(ar4 + 0x98) * 10;
      puVar4[0xd] = *(undefined4 *)(ar4 + 0x9c);
      puVar4[6] = 0x32 - *(short *)(ar4 + 0xa0);
      puVar4[5] = 0x32 - *(short *)(ar4 + 0xa2);
      puVar4[4] = *(undefined4 *)(ar4 + 0xa4);
      puVar4[10] = *(undefined4 *)(ar4 + 0xac);
      *puVar4 = *(undefined4 *)(ar4 + 0xb0);
      uVar3 = 0;
      puVar4[0xb] = *(undefined4 *)(ar4 + 0xbc);
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* FUN_8c11d9a0 @ 8c11d9a0 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

uint FUN_8c11d9a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *a4;
  undefined4 uVar4;
  int *unaff_r12;
  undefined4 *unaff_r13;
  
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    if ((unaff_r12 == (int *)0x0) || (unaff_r13 == (undefined4 *)0x0)) {
      uVar3 = (*(code *)PTR_FUN_8c11da1c)(ar4 + 0x48,0x13,ar6,ar7);
      uVar3 = uVar3 & 0xff;
    }
    else {
      iVar2 = DAT_8c11da10 + ar4;
      a4 = (undefined4 *)(**(code **)(*(int *)(DAT_8c11da0e + ar4) + 0x14))(0x38,iVar2,ar6,ar7);
      puVar1 = PTR_libgcc_divide_helper_01051c_8c11db44;
      if (a4 == (undefined4 *)0x0) {
        *unaff_r12 = 0;
        iVar2 = (int)DAT_8c11da0e;
        *unaff_r13 = 0;
        uVar4 = FUN_8c11cd02(*(undefined4 *)(iVar2 + ar4),2,ar6,ar7);
        return uVar4;
      }
      *unaff_r13 = 0x38;
      *unaff_r12 = (int)a4;
      uVar4 = (*(code *)puVar1)(a4,iVar2,ar6,ar7);
      a4[3] = uVar4;
      a4[9] = *(undefined4 *)(ar4 + 0x7c);
      a4[0xc] = *(undefined4 *)(ar4 + 0x80);
      a4[1] = *(undefined4 *)(ar4 + 0x88);
      a4[2] = *(int *)(ar4 + 0x90) * 10;
      a4[7] = *(undefined4 *)(ar4 + 0x94);
      a4[8] = *(int *)(ar4 + 0x98) * 10;
      a4[0xd] = *(undefined4 *)(ar4 + 0x9c);
      a4[6] = 0x32 - *(short *)(ar4 + 0xa0);
      a4[5] = 0x32 - *(short *)(ar4 + 0xa2);
      a4[4] = *(undefined4 *)(ar4 + 0xa4);
      a4[10] = *(undefined4 *)(ar4 + 0xac);
      *a4 = *(undefined4 *)(ar4 + 0xb0);
      uVar3 = 0;
      a4[0xb] = *(undefined4 *)(ar4 + 0xbc);
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* FUN_8c11daa4 @ 8c11daa4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c11daa4(int ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 a4;
  undefined4 uVar7;
  
  iVar6 = ar6;
  iVar3 = (*(code *)PTR_FUN_8c11db48)(ar4,ar5,ar6,ar7);
  puVar2 = PTR_FUN_8c11db4c;
  if (iVar3 != 0) {
    return 1;
  }
  if (ar5 == (undefined4 *)0x0) {
    uVar7 = 0x13;
  }
  else if (ar6 == 0x38) {
    sVar1 = *(short *)(ar4 + 0x3e);
    if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
      uVar7 = ar5[0xd];
      iVar3 = FUN_8c11cc2c(ar4,uVar7,iVar6,ar7);
      if (iVar3 == 0) {
        a4 = 10;
        *(int *)(ar4 + 0x78) = ar5[3] * 100;
        *(undefined4 *)(ar4 + 0x7c) = ar5[9];
        *(undefined4 *)(ar4 + 0x80) = ar5[0xc];
        *(undefined4 *)(ar4 + 0x84) = 0;
        *(undefined4 *)(ar4 + 0x88) = ar5[1];
        *(undefined4 *)(ar4 + 0x8c) = *ar5;
        uVar5 = (*(code *)PTR_libgcc_divide_helper_01051c_8c11dca8)(10,uVar7,iVar6,ar7);
        *(undefined4 *)(DAT_8c11dc98 + ar4) = uVar5;
        *(undefined4 *)(DAT_8c11dc9a + ar4) = ar5[7];
        uVar7 = (*(code *)PTR_libgcc_divide_helper_01051c_8c11dca8)(a4,uVar7,iVar6,ar7);
        *(undefined4 *)(DAT_8c11dc9c + ar4) = uVar7;
        iVar6 = (int)DAT_8c11dc9e;
        *(undefined4 *)(iVar6 + ar4) = ar5[0xd];
        *(short *)(iVar6 + 4 + ar4) = 0x32 - (short)ar5[6];
        *(short *)(iVar6 + 6 + ar4) = 0x32 - (short)ar5[5];
        *(undefined4 *)(iVar6 + 8 + ar4) = ar5[4];
        *(undefined4 *)(iVar6 + 0x10 + ar4) = ar5[10];
        *(undefined4 *)(iVar6 + 0x14 + ar4) = *ar5;
        *(undefined4 *)(iVar6 + 0x18 + ar4) = ar5[2] << 1;
        *(undefined4 *)(iVar6 + 0x20 + ar4) = ar5[0xb];
        puVar2 = PTR_FUN_8c11dcac;
        uVar4 = (*(code *)PTR_FUN_8c11dcac)(ar4 + 0x48,0x50,ar4 + 0x7c,0);
        if ((uVar4 & 0xff) != 0) {
          return 1;
        }
        uVar4 = (*(code *)puVar2)(ar4 + 0x48,0x51,DAT_8c11dca0 + ar4,0);
        if ((uVar4 & 0xff) != 0) {
          return 1;
        }
        uVar4 = (*(code *)puVar2)(ar4 + 0x48,0x52,DAT_8c11dc9e + ar4,0);
        if ((uVar4 & 0xff) != 0) {
          return 1;
        }
        uVar4 = (*(code *)puVar2)(ar4 + 0x48,0x53,DAT_8c11dca2 + ar4,0);
        if ((uVar4 & 0xff) != 0) {
          return 1;
        }
        uVar4 = (*(code *)puVar2)(ar4 + 0x48,0x54,DAT_8c11dca4 + ar4,0);
        goto LAB_8c11dc70;
      }
      uVar7 = 0x14;
    }
    else {
      uVar7 = 7;
    }
  }
  else {
    uVar7 = 0x17;
  }
  uVar4 = (*(code *)puVar2)(ar4 + 0x48,uVar7,iVar6,ar7);
LAB_8c11dc70:
  return uVar4 & 0xff;
}



/* FUN_8c11dc7e @ 8c11dc7e callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11dc7e(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *a6;
  
  iVar4 = ar4;
  uVar5 = ar5;
  a6 = ar6;
  iVar2 = (*(code *)PTR_FUN_8c11dcb4)(ar4,ar5,ar6,ar7);
  if (iVar2 != 0) {
    return 1;
  }
  if (ar6 == (int *)0x0) {
    uVar5 = 0x13;
LAB_8c11dd8c:
    uVar3 = (*(code *)PTR_FUN_8c11de18)(ar4 + 0x48,uVar5,a6,ar7);
    return uVar3 & 0xff;
  }
  switch(ar5) {
  case 1:
    *ar6 = *(int *)(DAT_8c11ddf8 + ar4);
    return 0;
  case 2:
    sVar1 = DAT_8c11ddfa;
    goto LAB_8c11dd50;
  case 3:
    iVar4 = (int)DAT_8c11ddfc;
    goto LAB_8c11dd6a;
  case 4:
    iVar4 = *(int *)(DAT_8c11ddfe + ar4) * 10;
    break;
  case 5:
    iVar4 = (*(code *)PTR_libgcc_divide_helper_01051c_8c11de10)(iVar4,uVar5,a6,ar7);
    *ar6 = iVar4;
    return 0;
  case 6:
    iVar4 = (int)DAT_8c11de00;
    goto LAB_8c11dd6a;
  case 7:
    iVar4 = 0x32 - *(short *)(DAT_8c11de02 + ar4);
    break;
  case 8:
    iVar4 = 0x32 - *(short *)(DAT_8c11de04 + ar4);
    goto LAB_8c11dd7a;
  case 9:
    sVar1 = DAT_8c11de06;
LAB_8c11dd50:
    iVar4 = *(int *)(sVar1 + ar4);
    break;
  case 10:
    iVar4 = *(int *)(DAT_8c11de08 + ar4) * 10;
    goto LAB_8c11dd7a;
  case 0xb:
    iVar4 = *(int *)(ar4 + 0x7c);
    break;
  case 0xc:
    iVar4 = *(int *)(DAT_8c11de0c + ar4);
    break;
  case 0xd:
    iVar4 = (int)DAT_8c11de0a;
LAB_8c11dd6a:
    iVar4 = *(int *)(iVar4 + ar4);
LAB_8c11dd7a:
    *ar6 = iVar4;
    return 0;
  case 0xe:
    iVar4 = *(int *)(DAT_8c11de0e + ar4);
    goto LAB_8c11dd7a;
  default:
    uVar5 = 10;
    goto LAB_8c11dd8c;
  }
  *ar6 = iVar4;
  return 0;
}



/* FUN_8c11dda2 @ 8c11dda2 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11dda2(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = ar6;
  iVar3 = (*(code *)PTR_FUN_8c11de1c)(ar4,ar5,ar6,ar7);
  puVar2 = PTR_FUN_8c11de54;
  puVar1 = PTR_FUN_8c11de18;
  if (iVar3 != 0) {
    return 1;
  }
  uVar4 = (uint)*(ushort *)(ar4 + 0x3e);
  if ((((uVar4 != 0) && (uVar4 != 1)) && (uVar4 != 2)) && (uVar4 != 5)) {
    uVar6 = 7;
override_prt_8c11e12a_7a4d7f16:
    uVar4 = (*(code *)puVar1)(ar4 + 0x48,uVar6,iVar7,ar7);
    return uVar4 & 0xff;
  }
  *(undefined4 *)(ar4 + 0x40) = 0;
  iVar7 = 10;
  uVar6 = (*(code *)PTR_libgcc_divide_helper_01051c_8c11de58)
                    (uVar4,(int)(short)*(ushort *)(ar4 + 0x3e),10,ar7);
  uVar5 = (undefined2)(0x32 - ar6);
  switch(ar5) {
  case 1:
    iVar7 = (int)DAT_8c11dfa4;
    iVar3 = (int)DAT_8c11dfa6;
    *(int *)(iVar7 + ar4) = ar6;
    *(int *)(iVar7 + 0x24 + ar4) = ar6;
    uVar4 = (*(code *)puVar2)(ar4 + 0x48,0x51,iVar3 + ar4,0);
    if ((uVar4 & 0xff) == 0) {
      (*(code *)puVar2)(ar4 + 0x48,0x54,DAT_8c11dfa8 + ar4,0);
    }
    break;
  case 2:
    iVar7 = (int)DAT_8c11dfa6;
    *(int *)(iVar7 + ar4) = ar6;
    (*(code *)puVar2)(ar4 + 0x48,0x51,iVar7 + ar4,0);
    break;
  case 3:
    iVar7 = (int)DAT_8c11dfa8;
    *(int *)(DAT_8c11dfaa + ar4) = ar6;
    (*(code *)puVar2)(ar4 + 0x48,0x54,iVar7 + ar4,0);
    break;
  case 4:
    *(undefined4 *)(DAT_8c11dfac + ar4) = uVar6;
    uVar6 = (*(code *)PTR_libgcc_divide_helper_01051c_8c11dfb4)(uVar6,0x32 - ar6,iVar7,ar7);
    iVar7 = (int)DAT_8c11dfa6;
    *(undefined4 *)(DAT_8c11dfae + ar4) = uVar6;
    uVar4 = (*(code *)puVar2)(ar4 + 0x48,0x51,iVar7 + ar4,0);
    if ((uVar4 & 0xff) == 0) {
      (*(code *)puVar2)(ar4 + 0x48,0x54,DAT_8c11dfa8 + ar4,0);
    }
    break;
  case 5:
    *(int *)(ar4 + 0x78) = ar6 * 100;
    break;
  case 6:
    iVar7 = (int)DAT_8c11dfa8;
    *(int *)(iVar7 + ar4) = ar6;
    (*(code *)puVar2)(ar4 + 0x48,0x54,iVar7 + ar4,0);
    break;
  case 7:
    iVar7 = (int)DAT_8c11e0c2;
    *(undefined2 *)(DAT_8c11e0c0 + ar4) = uVar5;
    (*(code *)puVar2)(ar4 + 0x48,0x53,iVar7 + ar4,0);
    break;
  case 8:
    iVar7 = (int)DAT_8c11e0c2;
    *(undefined2 *)(iVar7 + ar4) = uVar5;
    (*(code *)puVar2)(ar4 + 0x48,0x53,iVar7 + ar4,0);
    break;
  case 9:
    iVar7 = (int)DAT_8c11e0c6;
    *(int *)(DAT_8c11e0c4 + ar4) = ar6;
    (*(code *)puVar2)(ar4 + 0x48,0x51,iVar7 + ar4,0);
    break;
  case 10:
    iVar7 = (int)DAT_8c11e0c6;
    *(undefined4 *)(DAT_8c11e0c8 + ar4) = uVar6;
    (*(code *)puVar2)(ar4 + 0x48,0x51,iVar7 + ar4,0);
    break;
  case 0xb:
    *(int *)(ar4 + 0x7c) = ar6;
    (*(code *)puVar2)(ar4 + 0x48,0x50,ar4 + 0x7c,0);
    break;
  case 0xc:
    *(int *)(DAT_8c11e0ce + ar4) = ar6;
    (*(code *)puVar2)(ar4 + 0x48,0x50,ar4 + 0x7c,0);
    break;
  case 0xd:
    iVar7 = (int)DAT_8c11e0cc;
    *(int *)(DAT_8c11e0ca + ar4) = ar6;
    (*(code *)puVar2)(ar4 + 0x48,0x54,iVar7 + ar4,0);
    break;
  case 0xe:
    iVar3 = (*(code *)PTR_FUN_8c11e1fc)(ar4,ar6,iVar7,ar7);
    if (iVar3 != 0) {
      uVar6 = 0x14;
      goto override_prt_8c11e12a_7a4d7f16;
    }
    iVar7 = (int)DAT_8c11e1f0;
    *(int *)(iVar7 + ar4) = ar6;
    (*(code *)puVar2)(ar4 + 0x48,0x52,iVar7 + ar4,0);
    break;
  default:
    uVar6 = 10;
    goto override_prt_8c11e12a_7a4d7f16;
  }
  return *(undefined4 *)(ar4 + 0x40);
}



/* FUN_8c11e146 @ 8c11e146 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11e146(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c11e200)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 1;
  }
  *(undefined4 *)(ar4 + 0x40) = 0;
  (*(code *)PTR_FUN_8c11e204)(ar4 + 0x48,0x35,ar5 & 0xffff,0);
  return *(undefined4 *)(ar4 + 0x40);
}



/* FUN_8c11e190 @ 8c11e190 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11e190(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(DAT_8c11e1f2 + ar4) != DAT_8c11e208) {
    uVar1 = (*(code *)PTR_FUN_8c11e20c)(*(undefined4 *)(DAT_8c11e1f4 + ar4),0xb);
    return uVar1;
  }
  if (ar5 == (uint *)0x0) {
    uVar2 = (*(code *)PTR_FUN_8c11e210)(ar4 + 0x48,0x13);
    return uVar2 & 0xff;
  }
  *ar5 = (uint)*(ushort *)(ar4 + 0x3e);
  return 0;
}



/* FUN_8c11e194 @ 8c11e194 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11e194(undefined4 ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r14;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(DAT_8c11e1f2 + unaff_r14) != DAT_8c11e208) {
    uVar1 = (*(code *)PTR_FUN_8c11e20c)(*(undefined4 *)(DAT_8c11e1f4 + unaff_r14),0xb);
    return uVar1;
  }
  if (ar5 == (uint *)0x0) {
    uVar2 = (*(code *)PTR_FUN_8c11e210)(unaff_r14 + 0x48,0x13,ar6,ar7);
    return uVar2 & 0xff;
  }
  *ar5 = (uint)*(ushort *)(unaff_r14 + 0x3e);
  return 0;
}



/* FUN_8c11e214 @ 8c11e214 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11e214(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(DAT_8c11e30e + ar4) != DAT_8c11e314) {
    uVar1 = (*(code *)PTR_FUN_8c11e31c)(*(undefined4 *)(DAT_8c11e310 + ar4),0xb);
    return uVar1;
  }
  if (ar5 == (undefined2 *)0x0) {
    uVar2 = (*(code *)PTR_FUN_8c11e320)(ar4 + 0x48,0x13);
    return uVar2 & 0xff;
  }
  *ar5 = **(undefined2 **)(DAT_8c11e312 + ar4);
  return 0;
}



/* FUN_8c11e218 @ 8c11e218 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11e218(undefined4 ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r14;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(DAT_8c11e30e + unaff_r14) != DAT_8c11e314) {
    uVar1 = (*(code *)PTR_FUN_8c11e31c)(*(undefined4 *)(DAT_8c11e310 + unaff_r14),0xb);
    return uVar1;
  }
  if (ar5 == (undefined2 *)0x0) {
    uVar2 = (*(code *)PTR_FUN_8c11e320)(unaff_r14 + 0x48,0x13,ar6,ar7);
    return uVar2 & 0xff;
  }
  *ar5 = **(undefined2 **)(DAT_8c11e312 + unaff_r14);
  return 0;
}



/* FUN_8c11e274 @ 8c11e274 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11e274(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c11e324)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 1;
  }
  if (ar5 == 0) {
    uVar2 = (*(code *)PTR_FUN_8c11e320)(ar4 + 0x48,0x13,ar6,ar7);
    return uVar2 & 0xff;
  }
  *(undefined4 *)(ar4 + 0x40) = 0;
  (*(code *)PTR_FUN_8c11e328)(ar4 + 0x48,5,ar5,0);
  return *(undefined4 *)(ar4 + 0x40);
}



/* FUN_8c11e2de @ 8c11e2de callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11e2de(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = ar6;
  iVar1 = (*(code *)PTR_FUN_8c11e32c)(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if (ar5 == 0) {
      (*(code *)PTR_FUN_8c11e31c)(ar4,0x13,iVar5,ar7);
    }
    else {
      iVar1 = ar5;
      if (ar6 == 0) {
        iVar1 = (**(code **)(ar4 + 0x14))(*(undefined4 *)(ar5 + 4),ar4 + 8,iVar5,ar7);
        if (iVar1 == 0) {
          (*(code *)PTR_FUN_8c11e4cc)(ar4,0x71,iVar5,ar7);
          return 0;
        }
        iVar5 = *(int *)(ar5 + 4);
        (*(code *)PTR_memmove_8c11e4d0)(iVar1,ar5,iVar5,ar7);
      }
      iVar4 = ar4 + 8;
      piVar2 = (int *)(**(code **)(ar4 + 0x14))(0x1c,iVar4,iVar5,ar7);
      if (piVar2 != (int *)0x0) {
        piVar2[1] = 0;
        piVar2[2] = (uint)(ar6 == 0);
        iVar3 = (**(code **)(ar4 + 0x1c))(ar4 + 8,iVar4,iVar5,ar7);
        piVar2[3] = iVar3;
        iVar4 = (**(code **)(ar4 + 0x20))(ar4 + 8,iVar4,iVar5,ar7);
        iVar5 = DAT_8c11e4d4;
        piVar2[4] = iVar4;
        piVar2[6] = iVar5;
        *piVar2 = iVar1;
        piVar2[5] = ar4;
        return piVar2;
      }
      (*(code *)PTR_FUN_8c11e4cc)(ar4,0x71,iVar5,ar7);
    }
  }
  return 0;
}



/* FUN_8c11e3ea @ 8c11e3ea callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c11e3ea(int ar4,int ar5,undefined4 *ar6,undefined4 *ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 a5;
  undefined4 *a6;
  undefined4 *a7;
  
  a6 = ar6;
  a7 = ar7;
  iVar2 = (*(code *)PTR_FUN_8c11e4d8)(ar4,ar5,ar6,ar7);
  puVar1 = PTR_FUN_8c11e4dc;
  if (iVar2 == 0) {
    if ((ar6 == (undefined4 *)0x0) || (ar7 == (undefined4 *)0x0)) {
      a5 = 0x13;
    }
    else if (ar5 == 4) {
      if ((*(short *)(ar4 + 0x3e) == 2) || (*(short *)(ar4 + 0x3e) == 1)) {
        uVar3 = (*(code *)PTR_FUN_8c11e4e0)(ar4,ar6,ar7,a7);
        if ((uVar3 & 0xff) == 0) {
          return 0;
        }
        goto LAB_8c11e476;
      }
      a5 = 7;
      *ar6 = 0;
      *ar7 = 0;
    }
    else {
      a5 = 0xd;
      *ar6 = 0;
      *ar7 = 0;
    }
    uVar3 = (*(code *)puVar1)(ar4 + 0x48,a5,a6,a7);
    uVar3 = uVar3 & 0xff;
  }
  else {
LAB_8c11e476:
    uVar3 = 1;
  }
  return uVar3;
}



/* FUN_8c11e48a @ 8c11e48a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c11e48a(int ar4,undefined4 *ar5,uint *ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *a6;
  
  a6 = ar6;
  iVar1 = (*(code *)PTR_FUN_8c11e4d8)(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if ((ar5 == (undefined4 *)0x0) || (ar6 == (uint *)0x0)) {
      uVar2 = (*(code *)PTR_FUN_8c11e4dc)(ar4 + 0x48,0x13,a6,ar7);
      uVar2 = uVar2 & 0xff;
    }
    else {
      iVar1 = *(int *)(DAT_8c11e5ea + ar4);
      uVar2 = (uint)(*(int *)(DAT_8c11e5ec + ar4) != 0);
      *ar6 = uVar2;
      if (uVar2 == 0) {
        *ar5 = 0;
      }
      else {
        puVar3 = (undefined4 *)(**(code **)(iVar1 + 0x14))(8,DAT_8c11e5ee + ar4,a6,ar7);
        *ar5 = puVar3;
        if (*(int *)(DAT_8c11e5ec + ar4) != 0) {
          *puVar3 = *(undefined4 *)(DAT_8c11e5ec + ar4);
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c11e534 @ 8c11e534 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11e534(int *ar4,int *ar5,int ar6,undefined1 *ar7)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int *a5;
  undefined4 uVar5;
  int iVar6;
  uint *a7;
  int iVar7;
  uint uStack_2c;
  int *piStack_28;
  undefined4 auStack_24 [2];
  
  a7 = &uStack_2c;
  iVar7 = *(int *)((int)DAT_8c11e5ea + (int)ar4);
  uStack_2c = 0;
  a5 = ar5;
  piStack_28 = ar4;
  iVar3 = (*(code *)PTR_FUN_8c11e5f8)(ar4,ar5,ar6,ar7);
  puVar2 = PTR_FUN_8c11e5fc;
  if (iVar3 != 0) {
    return 1;
  }
  sVar1 = *(short *)((int)piStack_28 + 0x3e);
  if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
    if (ar5 == (int *)0x0) {
      iVar3 = (int)DAT_8c11e5ec;
      if (*(int *)(iVar3 + (int)ar4) == 0) {
        return 0;
      }
      iVar6 = (int)DAT_8c11e5ee;
      *(int *)(*(int *)(iVar3 + (int)ar4) + 4) = *(int *)(*(int *)(iVar3 + (int)ar4) + 4) + -1;
      *(undefined4 *)(iVar3 + (int)ar4) = 0;
      (**(code **)(iVar7 + 0x18))(*(undefined4 *)(iVar3 + 8 + (int)ar4),iVar6 + (int)ar4,ar6,ar7);
      iVar3 = (int)DAT_8c11e5f0;
      *(undefined4 *)(iVar3 + (int)ar4) = 0;
      if ((*(int *)(iVar3 + -4 + (int)ar4) != 0) &&
         (iVar3 = FUN_8c11ea3c(ar4,0,ar6,ar7), iVar3 != 0)) {
        return 1;
      }
      uVar4 = (*(code *)PTR_FUN_8c11e600)(ar4,0,ar6,ar7);
      goto LAB_8c11e7fa;
    }
    iVar3 = (*(code *)PTR_FUN_8c11e6f4)(ar5,a5,ar6,ar7);
    if (iVar3 != 0) {
      return 1;
    }
    if (*(int *)*ar5 == 4) {
      auStack_24[0] = 0;
      if (*(int *)(*ar5 + 4) == 8) {
        iVar3 = 0;
LAB_8c11e7c4:
        uVar4 = (*(code *)PTR_FUN_8c11e828)(ar4 + 0x12,0x26,iVar3,auStack_24);
        if ((uVar4 & 0xff) != 0) {
          return 1;
        }
        return 0;
      }
      iVar3 = *ar5 + 8;
      piStack_28 = *(int **)((int)DAT_8c11e816 + (int)ar4);
      if (piStack_28 != (int *)0x0) {
        ar6 = (int)DAT_8c11e818;
        iVar7 = (*(code *)PTR_FUN_8c11e820)(iVar3,*piStack_28 + 8,ar6,ar7);
        if (iVar7 == 0) {
          iVar3 = iVar3 + DAT_8c11e818;
          goto LAB_8c11e7c4;
        }
      }
      uVar5 = (*(code *)PTR_FUN_8c11e824)(*(undefined4 *)((int)DAT_8c11e81a + (int)ar4),0xc,ar6,ar7)
      ;
      return uVar5;
    }
    if (*(int *)*ar5 != 10) {
      uVar4 = (*(code *)puVar2)(ar4 + 0x12,0xd,ar6,ar7);
      goto LAB_8c11e7fa;
    }
    if (*(int *)((int)DAT_8c11e6e6 + (int)ar4) == 0) {
      iVar3 = (int)DAT_8c11e6e8 + (int)ar4;
      uVar5 = (**(code **)(iVar7 + 0x14))((int)DAT_8c11e6ea,iVar3,ar6,ar7);
      *(undefined4 *)((int)DAT_8c11e6ec + (int)ar4) = uVar5;
      if (*(int *)((int)DAT_8c11e6ec + (int)ar4) == 0) {
        return 1;
      }
      (*(code *)PTR_FUN_8c11e6f8)(*(undefined4 *)((int)DAT_8c11e6ec + (int)ar4),iVar3,ar6,ar7);
    }
    else {
      iVar3 = *(int *)((int)DAT_8c11e6e6 + (int)ar4);
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
    }
    iVar3 = (int)DAT_8c11e6ec;
    **(int **)(iVar3 + (int)ar4) = *ar5;
    if ((*(int *)(iVar3 + -4 + (int)ar4) != 0) && (iVar3 = FUN_8c11ea3c(ar4,0,ar6,ar7), iVar3 != 0))
    {
      return 1;
    }
    ar6 = *(int *)((int)DAT_8c11e6ec + (int)ar4);
    uVar4 = (*(code *)PTR_FUN_8c11e6fc)(ar4 + 0x12,0x25,ar6,&uStack_2c);
    if ((uVar4 & 0xff) != 0) {
      return 1;
    }
    uVar5 = *(undefined4 *)((int)DAT_8c11e6ee + (int)ar4);
    iVar3 = (*(code *)PTR_FUN_8c11e700)(ar4,uVar5,ar6,a7);
    if (iVar3 == 0) {
      piStack_28 = *(int **)((int)DAT_8c11e810 + (int)ar4);
      uVar4 = (**(code **)((int)piStack_28 + 8))(piStack_28,uVar5,ar6,a7);
      uStack_2c = 0;
      if ((uVar4 & 0xffff) != 0) {
        do {
          uVar5 = (**(code **)((int)DAT_8c11e812 + *(int *)((int)DAT_8c11e810 + (int)ar4)))
                            (*(int *)((int)DAT_8c11e810 + (int)ar4),uStack_2c,ar6,a7);
          iVar3 = (int)DAT_8c11e814;
          iVar7 = uStack_2c * 4;
          iVar6 = *(int *)((int)DAT_8c11e810 + (int)ar4);
          uVar5 = (**(code **)(DAT_8c11e810 + -0x44 + iVar6))(iVar6,uVar5,ar6,a7);
          *(undefined4 *)((int)ar4 + iVar7 + iVar3) = uVar5;
          uStack_2c = uStack_2c + 1;
        } while (uStack_2c < (uVar4 & 0xffff));
      }
      *(int **)((int)DAT_8c11e816 + (int)ar4) = ar5;
      ar5[1] = ar5[1] + 1;
      return 0;
    }
    uVar5 = 0x14;
  }
  else {
    uVar5 = 7;
    a7 = (uint *)ar7;
  }
  uVar4 = (*(code *)puVar2)(ar4 + 0x12,uVar5,ar6,a7);
LAB_8c11e7fa:
  return uVar4 & 0xff;
}



/* FUN_8c11e82c @ 8c11e82c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11e82c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c11ea20)(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = ar4[5];
    if (ar4[1] != 0) {
      uVar2 = (*(code *)PTR_FUN_8c11ea28)(iVar1,9);
      return uVar2;
    }
    ar4[6] = 0;
    if (ar4[2] != 0) {
      (**(code **)(iVar1 + 0x18))(*ar4,iVar1 + 8,ar6,ar7);
    }
    (**(code **)(iVar1 + 0x18))(ar4,iVar1 + 8,ar6,ar7);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c11e896 @ 8c11e896 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c11e896(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  
  a4 = (**(code **)(ar4 + 0x14))(*(undefined4 *)(ar5 + 4),ar4 + 8,ar6,ar7);
  if (a4 != 0) {
    (*(code *)PTR_memmove_8c11ea2c)(a4,ar5,*(undefined4 *)(ar5 + 4),ar7);
  }
  return a4;
}



/* FUN_8c11e8d6 @ 8c11e8d6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11e8d6(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int a6;
  
  a6 = ar6;
  iVar1 = (*(code *)PTR_FUN_8c11ea30)(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if (ar5 == (int *)0x0) {
      (*(code *)PTR_FUN_8c11ea28)(ar4,0x13,a6,ar7);
    }
    else if (*ar5 == 2) {
      if ((ar6 != 0) || (ar5 = (int *)FUN_8c11e896(ar4,ar5,a6,ar7), ar5 != (int *)0x0)) {
        iVar1 = ar4 + 8;
        puVar2 = (undefined4 *)(**(code **)(ar4 + 0x14))(0x1c,iVar1,a6,ar7);
        if (puVar2 != (undefined4 *)0x0) {
          puVar2[1] = 0;
          puVar2[2] = (uint)(ar6 == 0);
          uVar3 = (**(code **)(ar4 + 0x1c))(ar4 + 8,iVar1,a6,ar7);
          puVar2[3] = uVar3;
          uVar4 = (**(code **)(ar4 + 0x20))(ar4 + 8,iVar1,a6,ar7);
          uVar3 = DAT_8c11ea34;
          puVar2[4] = uVar4;
          puVar2[6] = uVar3;
          *puVar2 = ar5;
          puVar2[5] = ar4;
          return puVar2;
        }
        (*(code *)PTR_FUN_8c11ea28)(ar4,0x71,a6,ar7);
      }
    }
    else {
      (*(code *)PTR_FUN_8c11ea28)(ar4,0xd,a6,ar7);
    }
  }
  return 0;
}



/* FUN_8c11e9b4 @ 8c11e9b4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11e9b4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c11ea38)(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = ar4[5];
    if (ar4[1] != 0) {
      uVar2 = (*(code *)PTR_FUN_8c11ea28)(iVar1,5);
      return uVar2;
    }
    ar4[6] = 0;
    if (ar4[2] != 0) {
      (**(code **)(iVar1 + 0x18))(*ar4,iVar1 + 8,ar6,ar7);
    }
    (**(code **)(iVar1 + 0x18))(ar4,iVar1 + 8,ar6,ar7);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c11ea3c @ 8c11ea3c callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11ea3c(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 a5;
  int *a5_00;
  int aiStack_5c [20];
  undefined4 uStack_c;
  
  uStack_c = 0;
  a5_00 = ar5;
  iVar2 = (*(code *)PTR_FUN_8c11eb4c)(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    if ((*(short *)(ar4 + 0x3e) != 2) && (*(short *)(ar4 + 0x3e) != 1)) {
      a5 = 7;
      uVar4 = *(undefined4 *)(DAT_8c11eb42 + ar4);
LAB_8c11eaae:
      uVar4 = (*(code *)PTR_FUN_8c11eb58)(uVar4,a5,ar6,ar7);
      return uVar4;
    }
    *(undefined4 *)(ar4 + 0x40) = 0;
    if (ar5 != (int *)0x0) {
      ar6 = (int)DAT_8c11eb44;
      a5_00 = (int *)(**(int **)(DAT_8c11eb46 + ar4) + 8);
      iVar2 = (*(code *)PTR_FUN_8c11eb54)(*ar5 + 8,a5_00,ar6,ar7);
      if (iVar2 != 0) {
        a5 = 0xc;
        uVar4 = *(undefined4 *)(DAT_8c11eb42 + ar4);
        goto LAB_8c11eaae;
      }
    }
    iVar2 = (int)DAT_8c11eb48;
    if (*(int *)(iVar2 + ar4) != 0) {
      *(int *)(*(int *)(iVar2 + ar4) + 4) = *(int *)(*(int *)(iVar2 + ar4) + 4) + -1;
    }
    puVar1 = PTR_FUN_8c11eb5c;
    if (ar5 == (int *)0x0) {
      *(undefined4 *)(iVar2 + ar4) = 0;
      uVar3 = (*(code *)puVar1)(ar4,1,ar6,ar7);
      return uVar3 & 0xff;
    }
    iVar2 = (*(code *)PTR_FUN_8c11eb60)(ar5,a5_00,ar6,ar7);
    if (iVar2 == 0) {
      (*(code *)PTR_FUN_8c11eb64)(aiStack_5c,a5_00,ar6,ar7);
      aiStack_5c[0] = *ar5;
      uVar3 = (*(code *)PTR_FUN_8c11eb68)(ar4 + 0x48,0x24,aiStack_5c,0);
      if ((uVar3 & 0xff) == 0) {
        iVar2 = (int)DAT_8c11eb48;
        ar5[1] = ar5[1] + 1;
        *(int **)(iVar2 + ar4) = ar5;
        return *(undefined4 *)(ar4 + 0x40);
      }
    }
  }
  return 1;
}



/* FUN_8c11eb6c @ 8c11eb6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11eb6c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c11ec60)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0;
  }
  return *(undefined4 *)(DAT_8c11ec5c + ar4);
}



/* FUN_8c11eb8c @ 8c11eb8c callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11eb8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 a6;
  undefined4 uVar4;
  undefined4 auStack_c [2];
  
  uVar4 = 0;
  uVar1 = (*(code *)PTR_FUN_8c11ec64)(ar4 + 0x48,0x11,0,0);
  if (((uVar1 & 0xff) == 0) && (iVar2 = FUN_8c11dc7e(ar4,1,auStack_c,uVar4), iVar2 == 0)) {
    a6 = 0;
    uVar3 = 1;
    iVar2 = FUN_8c11dda2(ar4,1,0,uVar4);
    if ((iVar2 == 0) &&
       (uVar1 = (*(code *)PTR_FUN_8c11ec6c)(ar4,uVar3,a6,uVar4), (uVar1 & 0xff) == 0)) {
      uVar3 = 0;
      uVar1 = (*(code *)PTR_FUN_8c11ec74)(ar4,PTR_DAT_8c11ec70,0,uVar4);
      if (((uVar1 & 0xff) == 0) &&
         (uVar1 = (*(code *)PTR_FUN_8c11ec78)(ar4,PTR_DAT_8c11ec70,uVar3,uVar4), (uVar1 & 0xff) == 0
         )) {
        uVar4 = 0;
        uVar1 = (*(code *)PTR_FUN_8c11ec64)(ar4 + 0x48,0x15,0,0);
        if (((uVar1 & 0xff) == 0) && (iVar2 = FUN_8c11dda2(ar4,1,auStack_c[0],uVar4), iVar2 == 0)) {
          *(undefined2 *)(DAT_8c11ec5e + ar4) = 0;
          return 0;
        }
      }
    }
  }
  return 1;
}



/* FUN_8c11ec7c @ 8c11ec7c callers=1 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c11ef10) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11ec7c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  ushort uVar2;
  int a4;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int a5;
  undefined1 *a6;
  undefined1 *a7;
  undefined4 a7_00;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  double in_dr4;
  double dVar14;
  float fVar15;
  undefined8 in_dr12;
  double dVar16;
  undefined8 in_dr14;
  double dVar17;
  double in_xd2;
  undefined8 in_xd14;
  bool bVar18;
  undefined4 in_PR;
  uint uVar19;
  byte in_FPSCR_CAUSE;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  undefined1 auStack_3c [16];
  undefined8 uStack_2c;
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == 0) {
    uStack_24 = CONCAT44((int)in_dr14,(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar11 = &uStack_2c;
    uStack_2c = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar11 = (undefined8 *)auStack_3c;
    uStack_24 = in_xd14;
    uStack_2c = in_dr14;
  }
  *(undefined4 *)((int)puVar11 + -4) = in_PR;
  iVar9 = *(int *)(DAT_8c11ecda + ar4);
  *(undefined4 *)((int)puVar11 + -0x14) = 0x1e;
  *(int *)((int)puVar11 + -8) = ar4;
  if (*(int *)(DAT_8c11ecdc + ar4) == 0) {
LAB_8c11f120:
    uVar4 = 0;
  }
  else {
    uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c11ece0;
    bVar20 = 0;
    bVar22 = 0;
    bVar21 = (byte)((uVar5 & 0x80000) >> 0x13);
    bVar23 = (byte)((uVar5 & 0x100000) >> 0x14);
    a4 = (**(code **)(iVar9 + 0x14))(0x78,DAT_8c11ecde + ar4,ar6,ar7);
    uVar4 = (undefined4)in_dr14;
    if (a4 == 0) {
      uVar4 = (*(code *)PTR_FUN_8c11ece4)(iVar9,1,ar6,ar7);
      return uVar4;
    }
    iVar6 = *(int *)(DAT_8c11ee52 + ar4);
    iVar8 = *(int *)(iVar6 + 0xc);
    uVar5 = ((uint)bVar20 << 0xc | (uint)bVar22 << 0x12 | (uint)bVar21 << 0x13 |
            (uint)bVar23 << 0x14) & DAT_8c11ee58;
    uVar2 = *(ushort *)(iVar8 + 0x14);
    *(undefined4 *)((int)puVar11 + -0x20) = *(undefined4 *)(iVar6 + 0x10);
    uVar10 = (uint)uVar2;
    iVar3 = (int)DAT_8c11ee52;
    *(undefined4 *)(iVar6 + 0x10) = 0;
    *(undefined4 *)((int)puVar11 + -0x30) = 0;
    bVar21 = 0;
    bVar20 = 0;
    bVar22 = (byte)((uVar5 & 0x80000) >> 0x13);
    bVar23 = (byte)((uVar5 & 0x100000) >> 0x14);
    (*(code *)PTR_FUN_8c11ee5c)
              (ar4,(undefined1 *)((int)puVar11 + -0x1c),*(undefined4 *)(iVar3 + ar4),0);
    a7 = (undefined1 *)0x0;
    *(undefined4 *)(*(int *)(DAT_8c11ee52 + ar4) + 0x10) = *(undefined4 *)((int)puVar11 + -0x20);
    *(undefined4 *)((int)puVar11 + -0x20) =
         *(undefined4 *)(*(int *)(*(int *)((int)puVar11 + -0x1c) + 4) + 0x14);
    uVar5 = ((uint)bVar21 << 0xc | (uint)bVar20 << 0x12 | (uint)bVar22 << 0x13 |
            (uint)bVar23 << 0x14) & DAT_8c11ee58;
    bVar22 = 0;
    bVar20 = 0;
    bVar23 = (byte)((uVar5 & 0x80000) >> 0x13);
    bVar21 = (byte)((uVar5 & 0x100000) >> 0x14);
    uVar5 = (*(code *)PTR_FUN_8c11ee60)(ar4 + 0x48,0x11,0,0);
    if ((uVar5 & 0xff) == 0) {
      uVar5 = ((uint)bVar22 << 0xc | (uint)bVar20 << 0x12 | (uint)bVar23 << 0x13 |
              (uint)bVar21 << 0x14) & DAT_8c11ee58;
      bVar20 = 0;
      bVar23 = 0;
      bVar21 = (byte)((uVar5 & 0x80000) >> 0x13);
      bVar22 = (byte)((uVar5 & 0x100000) >> 0x14);
      iVar3 = (*(code *)PTR_FUN_8c11ee64)(ar4,1,(undefined1 *)((int)puVar11 + -0xc),a7);
      if (iVar3 == 0) {
        a6 = (undefined1 *)0x0;
        uVar5 = ((uint)bVar20 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar21 << 0x13 |
                (uint)bVar22 << 0x14) & DAT_8c11ee58;
        bVar20 = 0;
        bVar23 = 0;
        bVar22 = (byte)((uVar5 & 0x80000) >> 0x13);
        bVar21 = (byte)((uVar5 & 0x100000) >> 0x14);
        iVar3 = FUN_8c11dda2(ar4,1,0,a7);
        if (iVar3 == 0) {
          iVar3 = 0;
          uVar5 = ((uint)bVar20 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar22 << 0x13 |
                  (uint)bVar21 << 0x14) & DAT_8c11ee58;
          bVar20 = 0;
          bVar23 = 0;
          bVar21 = (byte)((uVar5 & 0x80000) >> 0x13);
          bVar22 = (byte)((uVar5 & 0x100000) >> 0x14);
          uVar5 = (*(code *)PTR_FUN_8c11ee68)(ar4,0,a6,a7);
          if ((uVar5 & 0xff) == 0) {
            if (bVar22 == 0) {
              dVar16 = (double)CONCAT44((undefined4)DAT_8c11ee6c,DAT_8c11ee6c._4_4_);
              dVar17 = (double)CONCAT44(DAT_8c11ee74,uVar4);
            }
            else {
              dVar16 = (double)CONCAT44(DAT_8c11ee6c._4_4_,(undefined4)DAT_8c11ee6c);
              dVar17 = (double)CONCAT44(PTR_FUN_8c11ee78,DAT_8c11ee74);
            }
            while( true ) {
              *(int *)((int)puVar11 + -0x20) = *(int *)((int)puVar11 + -0x20) + 0x10;
              iVar8 = *(int *)(iVar8 + 0x10);
              if (*(int *)(iVar8 + 0x10) == 0) break;
              uVar5 = ((uint)bVar20 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar21 << 0x13 |
                      (uint)bVar22 << 0x14) & DAT_8c11ee58;
              *(uint *)((int)puVar11 + -0x18) = (uint)*(ushort *)(iVar8 + 0x14);
              bVar20 = 0;
              bVar23 = 0;
              bVar21 = (byte)((uVar5 & 0x80000) >> 0x13);
              bVar22 = (byte)((uVar5 & 0x100000) >> 0x14);
              uVar5 = (*(code *)PTR_FUN_8c11ee78)(ar4,iVar3,a6,a7);
              if ((uVar5 & 0xff) != 0) goto LAB_8c11f0fa;
              *(undefined4 *)((int)puVar11 + -0x30) = *(undefined4 *)((int)puVar11 + -0x18);
              uVar5 = ((uint)bVar20 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar21 << 0x13 |
                      (uint)bVar22 << 0x14) & DAT_8c11ee58;
              bVar21 = 0;
              bVar23 = 0;
              bVar22 = (byte)((uVar5 & 0x80000) >> 0x13);
              bVar20 = (byte)((uVar5 & 0x100000) >> 0x14);
              uVar5 = (*(code *)PTR_FUN_8c11ee80)(ar4,PTR_DAT_8c11ee7c,0,uVar10);
              if ((uVar5 & 0xff) != 0) goto LAB_8c11f0fa;
              uVar5 = ((uint)bVar21 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar22 << 0x13 |
                      (uint)bVar20 << 0x14) & DAT_8c11ee58;
              a6 = (undefined1 *)((int)puVar11 + -0x28);
              bVar23 = 0;
              bVar20 = 0;
              bVar22 = (byte)((uVar5 & 0x80000) >> 0x13);
              bVar21 = (byte)((uVar5 & 0x100000) >> 0x14);
              a7 = (undefined1 *)((int)puVar11 + -0x2c);
              uVar5 = (*(code *)PTR_FUN_8c11ee60)
                                (ar4 + 0x48,0x20,a6,(undefined1 *)((int)puVar11 + -0x2c));
              if ((uVar5 & 0xff) != 0) goto LAB_8c11f0fa;
              uVar5 = ((uint)bVar23 << 0xc | (uint)bVar20 << 0x12 | (uint)bVar22 << 0x13 |
                      (uint)bVar21 << 0x14) & DAT_8c11ee58;
              bVar22 = 0;
              bVar20 = 0;
              bVar23 = (byte)((uVar5 & 0x80000) >> 0x13);
              bVar21 = (byte)((uVar5 & 0x100000) >> 0x14);
              uVar5 = (*(code *)PTR_FUN_8c11ee84)
                                (*(undefined4 *)((int)puVar11 + -8),PTR_DAT_8c11ee7c,a6,a7);
              if ((uVar5 & 0xff) != 0) goto LAB_8c11f0fa;
              iVar3 = DAT_8c11ee54 + ar4;
              uVar5 = ((uint)bVar22 << 0xc | (uint)bVar20 << 0x12 | (uint)bVar23 << 0x13 |
                      (uint)bVar21 << 0x14) & DAT_8c11ee58;
              bVar20 = 0;
              bVar23 = 0;
              bVar21 = (byte)((uVar5 & 0x80000) >> 0x13);
              bVar22 = (byte)((uVar5 & 0x100000) >> 0x14);
              (**(code **)(iVar9 + 0x18))
                        (*(undefined4 *)(*(int *)((int)puVar11 + -0x20) + 0xc),iVar3,a6,a7);
              **(undefined4 **)((int)puVar11 + -0x20) = *(undefined4 *)((int)puVar11 + -0x2c);
              if (*(int *)((int)puVar11 + -0x2c) != 0) {
                a5 = DAT_8c11efae + ar4;
                iVar7 = *(int *)((int)puVar11 + -0x20);
                iVar6 = *(int *)((int)puVar11 + -0x2c) * 0xc;
                uVar5 = ((uint)bVar20 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar21 << 0x13 |
                        (uint)bVar22 << 0x14) & DAT_8c11efb0;
                bVar20 = 0;
                bVar23 = 0;
                bVar21 = (byte)((uVar5 & 0x80000) >> 0x13);
                bVar22 = (byte)((uVar5 & 0x100000) >> 0x14);
                iVar3 = (**(code **)(iVar9 + 0x14))(iVar6,a5,a6,a7);
                *(int *)(iVar7 + 0xc) = iVar3;
                if (*(uint *)((int)puVar11 + -0x14) < *(uint *)((int)puVar11 + -0x2c)) {
                  *(undefined4 *)((int)puVar11 + -0x14) = *(undefined4 *)((int)puVar11 + -0x2c);
                  uVar5 = ((uint)bVar20 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar21 << 0x13 |
                          (uint)bVar22 << 0x14) & DAT_8c11efb0;
                  bVar20 = 0;
                  bVar22 = 0;
                  bVar23 = (byte)((uVar5 & 0x80000) >> 0x13);
                  bVar21 = (byte)((uVar5 & 0x100000) >> 0x14);
                  (**(code **)(iVar9 + 0x18))(a4,DAT_8c11efae + ar4,a6,a7);
                  iVar6 = *(int *)((int)puVar11 + -0x14) << 2;
                  uVar5 = ((uint)bVar20 << 0xc | (uint)bVar22 << 0x12 | (uint)bVar23 << 0x13 |
                          (uint)bVar21 << 0x14) & DAT_8c11efb0;
                  a5 = DAT_8c11efae + ar4;
                  bVar20 = 0;
                  bVar23 = 0;
                  bVar21 = (byte)((uVar5 & 0x80000) >> 0x13);
                  bVar22 = (byte)((uVar5 & 0x100000) >> 0x14);
                  a4 = (**(code **)(iVar9 + 0x14))(iVar6,a5,a6,a7);
                }
                if (bVar22 == 0) {
                  dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                            (int)((ulonglong)dVar16 >> 0x20));
                }
                uVar5 = 0;
                if (*(int *)((int)puVar11 + -0x2c) != 0) {
                  do {
                    *(uint *)((int)puVar11 + -0x10) = uVar5 * 4;
                    *(uint *)((int)puVar11 + -0x30) = uVar5 * 4 + a4;
                    uVar19 = ((uint)bVar20 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar21 << 0x13 |
                             (uint)bVar22 << 0x14) & DAT_8c11efb0 & 0x180000 |
                             DAT_8c11efb4 & 0x3fffff;
                    uVar10 = (uVar19 & 0x80000) >> 0x13;
                    uVar19 = (uVar19 & 0x100000) >> 0x14;
                    cVar1 = (char)uVar19;
                    dVar13 = (double)-(int)*(short *)(*(int *)(*(int *)((int)puVar11 + -0x10) +
                                                              *(int *)((int)puVar11 + -0x28)) + 2);
                    if (cVar1 == '\0') {
                      dVar12 = (double)CONCAT44(DAT_8c11efb8,DAT_8c11efbc);
                    }
                    else {
                      dVar12 = (double)CONCAT44(DAT_8c11efbc,DAT_8c11efb8);
                    }
                    if ((char)uVar10 == '\0') {
                      dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) /
                                                (float)((ulonglong)dVar12 >> 0x20),SUB84(dVar13,0));
                    }
                    else {
                      dVar13 = dVar13 / dVar12;
                    }
                    dVar13 = (double)(ulonglong)(uint)(float)dVar13;
                    dVar14 = in_xd2;
                    if (cVar1 == '\0') {
                      dVar14 = (double)((ulonglong)in_dr4 & 0xffffffff);
                    }
                    in_dr4 = dVar14;
                    uVar10 = (uVar10 << 0x13 | uVar19 << 0x14) & DAT_8c11efb0;
                    bVar20 = 0;
                    bVar23 = 0;
                    bVar21 = (byte)((uVar10 & 0x80000) >> 0x13);
                    bVar22 = (byte)(uVar10 >> 0x14);
                    (*(code *)PTR_thunk_FUN_8c013cd8_8c11efc0)(iVar6,a5,a6,a7);
                    uVar5 = uVar5 + 1;
                    fVar15 = (float)((ulonglong)dVar12 >> 0x20);
                    if (bVar22 == 0) {
                      *(float *)*(double **)((int)puVar11 + -0x30) = fVar15;
                    }
                    else {
                      **(double **)((int)puVar11 + -0x30) = dVar12;
                    }
                    uVar10 = ((uint)bVar20 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar21 << 0x13 |
                             (uint)bVar22 << 0x14) & DAT_8c11efb0;
                    bVar20 = 0;
                    bVar23 = 0;
                    bVar21 = (byte)((uVar10 & 0x80000) >> 0x13);
                    bVar22 = (byte)((uVar10 & 0x100000) >> 0x14);
                    if (bVar21 == 0) {
                      dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                                SUB84(dVar17,0) + fVar15);
                    }
                    else {
                      dVar17 = dVar17 + dVar12;
                    }
                  } while (uVar5 < *(uint *)((int)puVar11 + -0x2c));
                  uVar5 = 0;
                  if (*(int *)((int)puVar11 + -0x2c) != 0) {
                    do {
                      if (bVar22 == 0) {
                        dVar13 = (double)(ulonglong)*(uint *)(uVar5 * 4 + a4);
                      }
                      else {
                        in_xd2 = *(double *)(uVar5 * 4 + a4);
                      }
                      uVar10 = ((uint)bVar21 << 0x13 | (uint)bVar22 << 0x14) & DAT_8c11efb0;
                      dVar14 = in_xd2;
                      if (bVar22 == 0) {
                        dVar14 = (double)CONCAT44(SUB84(dVar13,0),SUB84(in_dr4,0));
                      }
                      bVar20 = 0;
                      bVar23 = 0;
                      bVar21 = (byte)((uVar10 & 0x80000) >> 0x13);
                      bVar22 = (byte)(uVar10 >> 0x14);
                      if (bVar21 == 0) {
                        fVar15 = (float)((ulonglong)dVar14 >> 0x20) / SUB84(dVar17,0);
                        in_dr4 = (double)CONCAT44(fVar15,SUB84(dVar14,0));
                        bVar18 = (float)((ulonglong)dVar17 >> 0x20) < fVar15;
                      }
                      else {
                        in_dr4 = dVar14 / dVar17;
                        bVar18 = dVar17 < in_dr4;
                      }
                      if (bVar18) {
                        *(uint *)((int)puVar11 + -0x30) = uVar5 * 0xc + iVar3;
                        (*(code *)PTR_thunk_FUN_8c013dfc_8c11efc4)(iVar6,a5,a6,a7);
                        uVar19 = ((uint)bVar20 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar21 << 0x13
                                 | (uint)bVar22 << 0x14) & DAT_8c11efb0;
                        uVar10 = (uVar19 & 0x80000) >> 0x13;
                        cVar1 = (char)uVar10;
                        if (cVar1 == '\0') {
                          dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) *
                                                    SUB84(dVar16,0),SUB84(dVar12,0));
                        }
                        else {
                          dVar12 = dVar12 * dVar16;
                        }
                        if (cVar1 == '\0') {
                          fVar15 = -(float)((ulonglong)dVar12 >> 0x20);
                        }
                        else {
                          fVar15 = (float)((ulonglong)-dVar12 >> 0x20);
                        }
                        uVar10 = uVar10 << 0x13 | uVar19 & 0x100000 | DAT_8c11efb4 & 0x3fffff;
                        bVar21 = (byte)((uVar10 & 0x80000) >> 0x13);
                        bVar22 = (byte)((uVar10 & 0x100000) >> 0x14);
                        dVar13 = (double)fVar15;
                        if (bVar22 == 0) {
                          dVar12 = (double)CONCAT44(DAT_8c11efc8,DAT_8c11efbc);
                        }
                        else {
                          dVar12 = (double)CONCAT44(uRam8c11efcc,DAT_8c11efc8);
                        }
                        if (bVar21 == 0) {
                          fVar15 = (float)((ulonglong)dVar13 >> 0x20) +
                                   (float)((ulonglong)dVar12 >> 0x20);
                          dVar13 = (double)CONCAT44(fVar15,SUB84(dVar13,0));
                          iVar6 = (int)fVar15;
                        }
                        else {
                          dVar13 = dVar13 + dVar12;
                          iVar6 = (int)dVar13;
                        }
                        **(int **)((int)puVar11 + -0x30) = iVar6;
                      }
                      else {
                        *(int *)(uVar5 * 0xc + iVar3) = (int)DAT_8c11f0fe;
                      }
                      bVar23 = 0;
                      bVar20 = 0;
                      iVar6 = uVar5 * 4;
                      a5 = uVar5 * 0xc + iVar3;
                      *(int *)(a5 + 4) =
                           (int)*(short *)(*(int *)(*(int *)((int)puVar11 + -0x28) + iVar6) + 2);
                      *(undefined2 *)((int)puVar11 + -0x24) =
                           *(undefined2 *)
                            (*(int *)(*(int *)(*(int *)((int)puVar11 + -0x28) + iVar6) + 0xc) + 2);
                      *(undefined2 *)((int)puVar11 + -0x22) =
                           *(undefined2 *)
                            (*(int *)(*(int *)(*(int *)((int)puVar11 + -0x28) + iVar6) + 0xc) + 4);
                      uVar5 = uVar5 + 1;
                      *(undefined4 *)(a5 + 8) = *(undefined4 *)((int)puVar11 + -0x24);
                    } while (uVar5 < *(uint *)((int)puVar11 + -0x2c));
                  }
                }
                iVar3 = DAT_8c11f100 + ar4;
                uVar5 = ((uint)bVar20 << 0xc | (uint)bVar23 << 0x12 | (uint)bVar21 << 0x13 |
                        (uint)bVar22 << 0x14) & DAT_8c11f104;
                bVar20 = 0;
                bVar23 = 0;
                bVar21 = (byte)((uVar5 & 0x80000) >> 0x13);
                bVar22 = (byte)((uVar5 & 0x100000) >> 0x14);
                (**(code **)(iVar9 + 0x18))(*(undefined4 *)((int)puVar11 + -0x28),iVar3,a6,a7);
                uVar10 = *(uint *)((int)puVar11 + -0x18);
              }
            }
            a7_00 = 0;
            uVar4 = 0;
            uVar5 = (*(code *)PTR_FUN_8c11f108)(ar4 + 0x48,0x20,0,0);
            if (((uVar5 & 0xff) == 0) &&
               (uVar5 = (*(code *)PTR_FUN_8c11f10c)(ar4,1,uVar4,a7_00), (uVar5 & 0xff) == 0)) {
              uVar5 = (**(code **)(DAT_8c11f102 + ar4))
                                (*(undefined4 *)((int)puVar11 + -0x1c),DAT_8c11f100 + ar4,uVar4,
                                 a7_00);
              (*(code *)PTR_FUN_8c11f110)(ar4,*(undefined4 *)((int)puVar11 + -0x1c),uVar4,a7_00);
              if ((uVar5 & 0xff) != 0) {
                return uVar5;
              }
              (**(code **)(iVar9 + 0x18))(a4,DAT_8c11f100 + ar4,uVar4,a7_00);
              uVar5 = (*(code *)PTR_FUN_8c11f114)(ar4,2,uVar4,a7_00);
              if ((uVar5 & 0xff) == 0) {
                uVar4 = 0;
                uVar5 = (*(code *)PTR_FUN_8c11f108)(ar4 + 0x48,0x15,0,0);
                if (((uVar5 & 0xff) == 0) &&
                   (iVar9 = (*(code *)PTR_FUN_8c11f118)
                                      (ar4,1,*(undefined4 *)((int)puVar11 + -0xc),uVar4), iVar9 == 0
                   )) {
                  *(undefined2 *)(DAT_8c11f1fe + ar4) = 0;
                  goto LAB_8c11f120;
                }
              }
            }
          }
        }
      }
    }
LAB_8c11f0fa:
    uVar4 = 1;
  }
  return uVar4;
}



/* FUN_8c11f13e @ 8c11f13e callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11f13e(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_FUN_8c11f208;
  *(int *)(DAT_8c11f200 + ar4) = ar5;
  puVar3 = PTR_DAT_8c11f210;
  puVar2 = PTR_DAT_8c11f20c;
  if (ar5 == 0) {
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 100);
    *(undefined4 *)(DAT_8c11f202 + ar4) = 0;
    if ((*(int *)(DAT_8c11f204 + ar4) == 0) || (*(char *)(DAT_8c11f206 + ar4) != '\0')) {
      cVar4 = (*(code *)puVar1)(ar4 + 0x48,0x34,0);
    }
    else {
      cVar4 = (*(code *)puVar1)(ar4 + 0x48,0x33,0);
    }
  }
  else if (ar5 == 1) {
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 0x68);
    *(undefined **)(DAT_8c11f202 + ar4) = puVar2;
    cVar4 = (*(code *)puVar1)(ar4 + 0x48,0x2b,0);
  }
  else {
    if (ar5 != 2) {
      return 0x18;
    }
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 0x6c);
    *(undefined **)(DAT_8c11f202 + ar4) = puVar3;
    cVar4 = (*(code *)puVar1)(ar4 + 0x48,0x2c,0);
  }
  if ((cVar4 == '\0') &&
     (((*(int *)(DAT_8c11f2fc + ar4) == 0 || (ar5 == 0)) ||
      (cVar4 = (*(code *)puVar1)(ar4 + 0x48,2,0), cVar4 == '\0')))) {
    *(uint *)(DAT_8c11f2fe + ar4) = (uint)*(ushort *)(*(int *)(ar4 + 0x60) + 0xc);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



/* FUN_8c11f14a @ 8c11f14a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11f14a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int in_r0;
  uint uVar4;
  undefined4 uVar5;
  int unaff_r12;
  int unaff_r14;
  
  puVar1 = PTR_FUN_8c11f208;
  *(undefined4 *)(in_r0 + unaff_r14) = ar5;
  puVar3 = PTR_DAT_8c11f210;
  puVar2 = PTR_DAT_8c11f20c;
  if (unaff_r12 == 0) {
    *(undefined4 *)(unaff_r14 + 0x60) = *(undefined4 *)(unaff_r14 + 100);
    *(undefined4 *)(DAT_8c11f202 + unaff_r14) = 0;
    if ((*(int *)(DAT_8c11f204 + unaff_r14) == 0) || (*(char *)(DAT_8c11f206 + unaff_r14) != '\0'))
    {
      uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48,0x34,0,0);
    }
    else {
      uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48,0x33,0,0);
    }
  }
  else if (unaff_r12 == 1) {
    *(undefined4 *)(unaff_r14 + 0x60) = *(undefined4 *)(unaff_r14 + 0x68);
    *(undefined **)(DAT_8c11f202 + unaff_r14) = puVar2;
    uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48,0x2b,0,0);
  }
  else {
    if (unaff_r12 != 2) {
      return 0x18;
    }
    *(undefined4 *)(unaff_r14 + 0x60) = *(undefined4 *)(unaff_r14 + 0x6c);
    *(undefined **)(DAT_8c11f202 + unaff_r14) = puVar3;
    uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48,0x2c,0,0);
  }
  if (((uVar4 & 0xff) == 0) &&
     (((*(int *)(DAT_8c11f2fc + unaff_r14) == 0 || (unaff_r12 == 0)) ||
      (uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48,2,0,0), (uVar4 & 0xff) == 0)))) {
    *(uint *)(DAT_8c11f2fe + unaff_r14) = (uint)*(ushort *)(*(int *)(unaff_r14 + 0x60) + 0xc);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



/* FUN_8c11f258 @ 8c11f258 callers=0 callees=3 */

/* WARNING: Unknown calling convention */

uint FUN_8c11f258(int ar4,uint ar5,undefined1 *ar6,int ar7)

{
  undefined1 uVar1;
  short sVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  
  puVar10 = ar6;
  iVar9 = ar7;
  iVar5 = (*(code *)PTR_FUN_8c11f308)(ar4,ar5,ar6,ar7);
  if (iVar5 == 0) {
    if (ar6 == (undefined1 *)0x0) {
      uVar11 = 0x13;
    }
    else {
      sVar2 = *(short *)(ar4 + 0x3e);
      uVar8 = (uint)sVar2;
      if (((sVar2 == 3) || (sVar2 == 4)) || (sVar2 == 7)) {
        if (*(int *)(DAT_8c11f300 + ar4) == 3) {
          uVar6 = FUN_8c11f13e(ar4,ar5,puVar10,iVar9);
          uVar8 = ar5;
          if ((uVar6 & 0xff) != 0) {
            return uVar6 & 0xff;
          }
        }
        else if (ar5 != *(uint *)(DAT_8c11f300 + ar4)) {
          uVar11 = 1;
          goto override_prt_8c11f2f4_7a4d7f16;
        }
        puVar4 = PTR_FUN_8c11f3bc;
        *(undefined4 *)(ar4 + 0x40) = 0;
        uVar13 = *(uint *)(DAT_8c11f3b2 + ar4);
        for (uVar6 = ar7 + (uint)*(ushort *)(DAT_8c11f3b4 + ar4); uVar13 <= uVar6;
            uVar6 = uVar6 - uVar13) {
          if (*(short *)(DAT_8c11f3b4 + ar4) == 0) {
            puVar10 = (undefined1 *)0x1;
            uVar8 = (*(code *)PTR_FUN_8c11f4a0)(*(undefined4 *)(ar4 + 0x60),ar6,1,iVar9);
            if ((uVar8 & 0xff) == 0) goto LAB_8c11f57e;
            if (*(int *)(DAT_8c11f492 + ar4) == 2) {
              puVar10 = (undefined1 *)0x1;
              uVar8 = (*(code *)PTR_FUN_8c11f4a0)(*(undefined4 *)(ar4 + 0x70),ar6,1,iVar9);
              if ((uVar8 & 0xff) == 0) goto LAB_8c11f57e;
            }
            ar6 = ar6 + uVar13;
          }
          else {
            iVar5 = (*(code *)PTR_FUN_8c11f3c4)(*(undefined4 *)(ar4 + 0x60),uVar8,puVar10,iVar9);
            (*(code *)PTR_memmove_8c11f3c8)
                      (iVar5,DAT_8c11f3b6 + ar4,(uint)*(ushort *)(DAT_8c11f3b4 + ar4),iVar9);
            puVar10 = (undefined1 *)(uVar13 - *(ushort *)(DAT_8c11f3b4 + ar4));
            (*(code *)PTR_memmove_8c11f3c8)
                      (iVar5 + (uint)*(ushort *)(DAT_8c11f3b4 + ar4),ar6,puVar10,iVar9);
            uVar3 = *(ushort *)(DAT_8c11f3b4 + ar4);
            *(undefined2 *)(DAT_8c11f3b4 + ar4) = 0;
            ar6 = ar6 + (uVar13 - uVar3);
            if (*(int *)(DAT_8c11f3b8 + ar4) == 2) {
              puVar10 = (undefined1 *)0x1;
              uVar8 = (*(code *)PTR_FUN_8c11f3cc)(*(undefined4 *)(ar4 + 0x70),iVar5,1,iVar9);
              if ((uVar8 & 0xff) == 0) goto LAB_8c11f57e;
            }
          }
          iVar5 = (int)DAT_8c11f494;
          *(int *)(iVar5 + ar4) = *(int *)(iVar5 + ar4) + 1;
          uVar8 = (*(code *)puVar4)(ar4,*(undefined4 *)(iVar5 + -0x28 + ar4),puVar10,iVar9);
          if ((uVar8 & 0xff) != 0) goto LAB_8c11f5ba;
          uVar8 = (uint)*(ushort *)(DAT_8c11f496 + ar4);
          uVar7 = (*(code *)PTR_FUN_8c11f4a4)(ar4,uVar8,puVar10,iVar9);
          if ((uVar7 & 0xff) != 0) goto LAB_8c11f504;
          if (*(int *)(DAT_8c11f498 + ar4) != 0) {
            uVar8 = (*(code *)puVar4)(ar4,*(undefined4 *)(DAT_8c11f49a + ar4),puVar10,iVar9);
            if ((uVar8 & 0xff) != 0) goto LAB_8c11f5ba;
            uVar8 = (uint)*(ushort *)(DAT_8c11f496 + ar4);
            uVar6 = (*(code *)PTR_FUN_8c11f4a4)(ar4,uVar8,puVar10,iVar9);
joined_r0x8c11f48c:
            if ((uVar6 & 0xff) != 0) {
LAB_8c11f504:
              return *(undefined4 *)(ar4 + 0x40);
            }
            uVar6 = 0;
            break;
          }
          if ((*(uint *)(ar4 + 0x78) != 0) &&
             (*(uint *)(ar4 + 0x78) < *(uint *)(DAT_8c11f582 + ar4))) {
            iVar9 = 0;
            puVar10 = (undefined1 *)0x0;
            uVar8 = (*(code *)PTR_FUN_8c11f594)(ar4 + 0x48,3,0,0);
            if (((uVar8 & 0xff) == 0) &&
               (uVar8 = (*(code *)puVar4)(ar4,*(undefined4 *)(DAT_8c11f584 + ar4),puVar10,iVar9),
               (uVar8 & 0xff) == 0)) {
              uVar8 = (uint)*(ushort *)(DAT_8c11f586 + ar4);
              uVar6 = (*(code *)PTR_FUN_8c11f598)(ar4,uVar8,puVar10,iVar9);
              goto joined_r0x8c11f48c;
            }
            goto LAB_8c11f5ba;
          }
        }
        if ((*(short *)(DAT_8c11f588 + ar4) != 0) &&
           (((*(short *)(DAT_8c11f588 + ar4) == 1 &&
             (uVar13 = FUN_8c11eb8c(ar4,uVar8,puVar10,iVar9), (uVar13 & 0xff) != 0)) ||
            ((*(short *)(DAT_8c11f588 + ar4) == 2 &&
             (uVar8 = FUN_8c11ec7c(ar4,uVar8,puVar10,iVar9), (uVar8 & 0xff) != 0)))))) {
LAB_8c11f5ba:
          return *(undefined4 *)(ar4 + 0x40);
        }
        if (*(int *)(DAT_8c11f58a + ar4) == 4) {
          iVar9 = (int)DAT_8c11f69e;
          uVar8 = (uint)*(ushort *)(iVar9 + ar4);
          puVar10 = (undefined1 *)(DAT_8c11f6a0 + ar4 + uVar8);
          for (; uVar8 < uVar6; uVar8 = uVar8 + 1) {
            uVar1 = *ar6;
            ar6 = ar6 + 1;
            *puVar10 = uVar1;
            puVar10 = puVar10 + 1;
          }
          *(short *)(iVar9 + ar4) = (short)uVar6;
          goto LAB_8c11f5ba;
        }
        iVar5 = (int)DAT_8c11f58a;
        iVar12 = (int)DAT_8c11f58c;
        uVar11 = *(undefined4 *)(iVar5 + ar4);
        *(undefined4 *)(iVar5 + ar4) = 4;
        uVar8 = (**(code **)(iVar5 + -0x7c + ar4))(uVar11,iVar12 + ar4,puVar10,iVar9);
        if ((uVar8 & 0xff) == 0) goto LAB_8c11f5ba;
        goto LAB_8c11f57e;
      }
      uVar11 = 7;
    }
override_prt_8c11f2f4_7a4d7f16:
    uVar8 = (*(code *)PTR_FUN_8c11f30c)(ar4 + 0x48,uVar11,puVar10,iVar9);
    uVar8 = uVar8 & 0xff;
  }
  else {
LAB_8c11f57e:
    uVar8 = 1;
  }
  return uVar8;
}



/* FUN_8c11f5d2 @ 8c11f5d2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11f5d2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 a4;
  int iVar4;
  
  iVar2 = (*(code *)PTR_FUN_8c11f6a8)(ar4,ar5,ar6,ar7);
  if (iVar2 != 0) {
    return 1;
  }
  sVar1 = *(short *)(ar4 + 0x3e);
  if (((sVar1 != 6) && (sVar1 != 8)) && (sVar1 != 9)) {
    uVar3 = (*(code *)PTR_FUN_8c11f6b0)(ar4 + 0x48,7,ar6,ar7);
    return uVar3 & 0xff;
  }
  uVar3 = (*(code *)PTR_FUN_8c11f6b4)(ar4,ar5,ar6,ar7);
  if (*(int *)(DAT_8c11f6a2 + ar4) != 4) {
    iVar2 = (int)DAT_8c11f6a2;
    iVar4 = (int)DAT_8c11f6a4;
    a4 = *(undefined4 *)(iVar2 + ar4);
    *(undefined4 *)(iVar2 + ar4) = 4;
    uVar3 = (**(code **)(iVar2 + -0x7c + ar4))(a4,iVar4 + ar4,ar6,ar7);
  }
  return uVar3 & 0xff;
}



/* FUN_8c11f66a @ 8c11f66a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c11f66a(int ar4,int ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 a5;
  
  iVar5 = ar6;
  iVar3 = (*(code *)PTR_FUN_8c11f6a8)(ar4,ar5,ar6,ar7);
  puVar2 = PTR_FUN_8c11f6b0;
  if (iVar3 != 0) {
    return 1;
  }
  if ((ar5 == 0) || (ar6 == 0)) {
    a5 = 0x13;
  }
  else {
    sVar1 = *(short *)(ar4 + 0x3e);
    if ((sVar1 == 1) || (sVar1 == 2)) {
      iVar3 = (**(code **)(*(int *)(DAT_8c11f7a8 + ar4) + 0x50))
                        (*(int *)(DAT_8c11f7a8 + ar4),(int)sVar1,iVar5,ar7);
      if (iVar3 == 0) {
        a5 = 0x15;
      }
      else {
        if (*(int *)(DAT_8c11f7aa + ar4) == 0) {
          if ((*(int *)(DAT_8c11f7ac + ar4) != 0) &&
             (iVar5 = FUN_8c11ea3c(ar4,0,iVar5,ar7), iVar5 != 0)) {
            return *(undefined4 *)(ar4 + 0x40);
          }
          iVar5 = 0;
          iVar3 = 0;
          do {
            iVar3 = iVar3 + 3;
            iVar6 = (int)DAT_8c11f7b0;
            *(undefined4 *)(DAT_8c11f7ae + ar4 + iVar5) =
                 *(undefined4 *)(DAT_8c11f7b0 + ar4 + iVar5);
            iVar7 = (int)DAT_8c11f7b0;
            *(undefined4 *)(DAT_8c11f7ae + ar4 + iVar5 + 4) =
                 *(undefined4 *)(iVar6 + ar4 + iVar5 + 4);
            *(undefined4 *)(DAT_8c11f7ae + ar4 + iVar5 + 8) =
                 *(undefined4 *)(iVar7 + ar4 + iVar5 + 8);
            iVar5 = iVar5 + 0xc;
          } while (iVar3 < 3);
          *(undefined4 *)(DAT_8c11f7b2 + ar4) = 4;
          uVar4 = (*(code *)PTR_FUN_8c11f7b8)(ar4,3,ar5,ar6);
          goto LAB_8c11f79a;
        }
        a5 = 0x16;
      }
    }
    else {
      a5 = 7;
    }
  }
  uVar4 = (*(code *)puVar2)(ar4 + 0x48,a5,iVar5,ar7);
LAB_8c11f79a:
  return uVar4 & 0xff;
}



/* FUN_8c11f7bc @ 8c11f7bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c11f7bc(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar5 = *(int *)(DAT_8c11f888 + ar4);
  iVar1 = (int)DAT_8c11f88a;
  piVar6 = (int *)(ar5 * 0xc + *(int *)(iVar1 + ar4) + ar6 * 4);
  if ((ar5 == 0) && (ar6 == 0)) {
    uVar4 = 0;
    iVar7 = 0;
    piVar2 = (int *)(DAT_8c11f88c + ar4);
    do {
      uVar4 = uVar4 + 3;
      iVar7 = iVar7 + *piVar2 + piVar2[2] + piVar2[4] + 6;
      piVar2 = piVar2 + 6;
    } while (uVar4 < 3);
    if (**(int **)(iVar1 + ar4) != 0) {
      (**(code **)(iVar5 + 0x18))(**(undefined4 **)(iVar1 + ar4),DAT_8c11f88e + ar4,0);
    }
    piVar2 = *(int **)(DAT_8c11f88a + ar4);
    iVar1 = (**(code **)(iVar5 + 0x14))(iVar7 * 6,DAT_8c11f88e + ar4);
    *piVar2 = iVar1;
  }
  puVar3 = (undefined2 *)*piVar6;
  if (ar7 == 0) {
    *puVar3 = (short)DAT_8c11f894;
  }
  else {
    for (; ar7 != 0; ar7 = *(int *)(ar7 + 4)) {
      *puVar3 = (short)*(undefined4 *)(ar7 + 0x14);
      puVar3 = puVar3 + 1;
    }
  }
  piVar6[1] = (int)puVar3;
  return iVar1;
}



/* FUN_8c11f7d6 @ 8c11f7d6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c11f7d6(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 a6;
  int iVar5;
  int unaff_r11;
  int *piVar6;
  int iVar7;
  int unaff_r13;
  int unaff_r14;
  
  iVar5 = *(int *)(in_r0 + unaff_r13);
  iVar1 = (int)DAT_8c11f88a;
  piVar6 = (int *)(unaff_r11 * 4 + *(int *)(iVar1 + unaff_r13) + ar6 * 4);
  if ((ar5 == 0) && (ar6 == 0)) {
    uVar4 = 0;
    iVar7 = 0;
    a6 = 3;
    piVar2 = (int *)(DAT_8c11f88c + unaff_r13);
    do {
      uVar4 = uVar4 + 3;
      iVar7 = iVar7 + *piVar2 + piVar2[2] + piVar2[4] + 6;
      piVar2 = piVar2 + 6;
    } while (uVar4 < 3);
    if (**(int **)(iVar1 + unaff_r13) != 0) {
      (**(code **)(iVar5 + 0x18))
                (**(undefined4 **)(iVar1 + unaff_r13),DAT_8c11f88e + unaff_r13,3,ar7);
    }
    piVar2 = *(int **)(DAT_8c11f88a + unaff_r13);
    iVar1 = (**(code **)(iVar5 + 0x14))(iVar7 * 6,DAT_8c11f88e + unaff_r13,a6,ar7);
    *piVar2 = iVar1;
  }
  puVar3 = (undefined2 *)*piVar6;
  if (unaff_r14 == 0) {
    *puVar3 = (short)DAT_8c11f894;
  }
  else {
    for (; unaff_r14 != 0; unaff_r14 = *(int *)(unaff_r14 + 4)) {
      *puVar3 = (short)*(undefined4 *)(unaff_r14 + 0x14);
      puVar3 = puVar3 + 1;
    }
  }
  piVar6[1] = (int)puVar3;
  return iVar1;
}



/* FUN_8c11f898 @ 8c11f898 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c11f898(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  float in_fr3;
  undefined4 in_fr2;
  float fVar5;
  double dVar6;
  bool bVar7;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  pdVar4 = *(double **)(ar4 + 0x2c);
  if (in_FPSCR_SZ == 0) {
    dVar6 = (double)CONCAT44(*(float *)pdVar4,*(float *)pdVar4);
  }
  else {
    dVar6 = *pdVar4;
  }
  while( true ) {
    pdVar4 = (double *)((int)pdVar4 + 4);
    fVar5 = (float)((ulonglong)dVar6 >> 0x20);
    if (*(double **)(ar4 + 0x30) <= pdVar4) break;
    if (in_FPSCR_SZ == 0) {
      in_fr3 = *(float *)pdVar4;
    }
    uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c11f9fc;
    uVar3 = (uVar2 & 0x80000) >> 0x13;
    uVar2 = (uVar2 & 0x100000) >> 0x14;
    cVar1 = (char)uVar2;
    if ((char)uVar3 == '\0') {
      bVar7 = in_fr3 < fVar5;
    }
    else {
      bVar7 = (double)CONCAT44(in_fr2,in_fr3) < dVar6;
    }
    if (cVar1 == '\0') {
      in_fr3 = *(float *)pdVar4;
    }
    if (bVar7) {
      if (cVar1 == '\0') {
        dVar6 = (double)CONCAT44(*(float *)pdVar4,SUB84(dVar6,0));
      }
      else {
        dVar6 = *pdVar4;
      }
    }
    uVar3 = (uVar3 << 0x13 | uVar2 << 0x14) & DAT_8c11f9fc;
    in_FPSCR_PR = (byte)((uVar3 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)(uVar3 >> 0x14);
    if (in_FPSCR_PR == 0) {
      bVar7 = SUB84(dVar6,0) < in_fr3;
    }
    else {
      bVar7 = dVar6 < (double)CONCAT44(in_fr2,in_fr3);
    }
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    if ((bVar7) && (in_FPSCR_CAUSE = 0, in_FPSCR_DN = 0, in_FPSCR_SZ == 0)) {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(float *)pdVar4);
    }
  }
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c11f9fc;
  cVar1 = (char)((uVar3 & 0x80000) >> 0x13);
  if (cVar1 == '\0') {
    dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) - fVar5);
  }
  else {
    dVar6 = dVar6 - dVar6;
  }
  if ((char)((uVar3 & 0x100000) >> 0x14) == '\0') {
    in_fr3 = *(float *)(ar4 + 0x38);
  }
  if (cVar1 == '\0') {
    bVar7 = SUB84(dVar6,0) < in_fr3;
  }
  else {
    bVar7 = dVar6 < (double)CONCAT44(in_fr2,in_fr3);
  }
  return (uint)bVar7;
}



/* FUN_8c11f8de @ 8c11f8de callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11f8de(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar3;
  undefined8 *puVar4;
  double *pdVar5;
  uint uVar6;
  undefined4 *puVar7;
  double *pdVar8;
  int *piVar9;
  undefined4 a5;
  double in_dr2;
  double dVar10;
  undefined4 in_fr5;
  double dVar11;
  float fVar12;
  undefined8 in_xd2;
  bool bVar13;
  undefined4 in_PR;
  byte in_FPSCR_CAUSE;
  byte bVar14;
  byte in_FPSCR_DN;
  byte bVar15;
  byte in_FPSCR_PR;
  byte bVar16;
  byte in_FPSCR_SZ;
  byte bVar17;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  char cVar2;
  
  if (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') {
    uVar3 = (*(code *)PTR_FUN_8c11fa00)(*(undefined4 *)(ar4 + 0xc),2,ar6,ar7);
    if ((uVar3 & 0xff) == 0) {
      return 0;
    }
    uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & DAT_8c11f9fc;
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = (byte)((uVar3 & 0x80000) >> 0x13);
    bVar17 = (byte)((uVar3 & 0x100000) >> 0x14);
    puVar4 = (undefined8 *)
             (*(code *)PTR_FUN_8c11fa04)
                       (**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6,ar7);
    if (bVar17 == 0) {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)puVar4);
    }
    else {
      in_xd2 = *puVar4;
    }
    uVar3 = ((uint)bVar14 << 0xc | (uint)bVar15 << 0x12 | (uint)bVar16 << 0x13 |
            (uint)bVar17 << 0x14) & DAT_8c11f9fc;
    if (bVar17 == 0) {
      uStack_c = SUB84(in_dr2,0);
      uStack_8 = in_PR;
    }
    else {
      uStack_c = (undefined4)in_xd2;
      uStack_8 = (undefined4)((ulonglong)in_xd2 >> 0x20);
    }
    a5 = *(undefined4 *)(*(int *)(ar4 + 0xc) + 0xc);
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = (byte)((uVar3 & 0x80000) >> 0x13);
    bVar17 = (byte)((uVar3 & 0x100000) >> 0x14);
    puVar4 = (undefined8 *)
             (*(code *)PTR_FUN_8c11fa04)(*(undefined4 *)(*(int *)(ar4 + 0xc) + 8),a5,ar6,ar7);
    if (bVar17 == 0) {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)puVar4);
    }
    else {
      in_xd2 = *puVar4;
    }
    uVar3 = ((uint)bVar14 << 0xc | (uint)bVar15 << 0x12 | (uint)bVar16 << 0x13 |
            (uint)bVar17 << 0x14) & DAT_8c11f9fc;
    if (bVar17 == 0) {
      uStack_10 = SUB84(in_dr2,0);
    }
    else {
      uStack_10 = (undefined4)in_xd2;
      uStack_c = (undefined4)((ulonglong)in_xd2 >> 0x20);
    }
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = (byte)((uVar3 & 0x80000) >> 0x13);
    bVar17 = (byte)((uVar3 & 0x100000) >> 0x14);
    pdVar5 = (double *)(*(code *)PTR_FUN_8c11fa08)(**(undefined4 **)(ar4 + 0x10),a5,ar6,ar7);
    puVar7 = *(undefined4 **)(ar4 + 0x34);
    *(undefined4 **)(ar4 + 0x34) = puVar7 + 1;
    if (bVar17 == 0) {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uStack_c);
      *puVar7 = uStack_c;
    }
    else {
      *(ulonglong *)(puVar7 + -1) = CONCAT44(uStack_8,uStack_c);
    }
    if (*(int *)(ar4 + 0x34) == *(int *)(ar4 + 0x30)) {
      *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(ar4 + 0x2c);
    }
    uVar3 = ((uint)bVar14 << 0xc | (uint)bVar15 << 0x12 | (uint)bVar16 << 0x13 |
            (uint)bVar17 << 0x14) & DAT_8c11f9fc;
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = (byte)((uVar3 & 0x80000) >> 0x13);
    bVar17 = (byte)((uVar3 & 0x100000) >> 0x14);
    uVar3 = FUN_8c11f898(ar4,a5,ar6,ar7);
    pdVar8 = *(double **)(ar4 + 0x44);
    if (bVar17 == 0) {
      dVar11 = (double)CONCAT44(*(undefined4 *)pdVar8,in_fr5);
      pdVar8 = (double *)((int)pdVar8 + 4);
    }
    else {
      dVar11 = *pdVar8;
      pdVar8 = pdVar8 + 1;
    }
    *(double **)(ar4 + 0x44) = pdVar8;
    if (bVar17 == 0) {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uStack_10);
      *(undefined4 *)((int)pdVar8 + -4) = uStack_10;
    }
    else {
      pdVar8[-1] = (double)CONCAT44(uStack_c,uStack_10);
    }
    if (*(int *)(ar4 + 0x44) == *(int *)(ar4 + 0x40)) {
      *(undefined4 *)(ar4 + 0x44) = *(undefined4 *)(ar4 + 0x3c);
    }
    if (bVar17 == 0) {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c11fa0c);
    }
    uVar6 = ((uint)bVar14 << 0xc | (uint)bVar15 << 0x12 | (uint)bVar16 << 0x13 |
            (uint)bVar17 << 0x14) & DAT_8c11f9fc;
    cVar1 = (char)((uVar6 & 0x80000) >> 0x13);
    cVar2 = (char)((uVar6 & 0x100000) >> 0x14);
    fVar12 = (float)((ulonglong)dVar11 >> 0x20);
    if (cVar1 == '\0') {
      bVar13 = SUB84(in_dr2,0) < fVar12;
    }
    else {
      bVar13 = in_dr2 < dVar11;
    }
    if ((bVar13) && ((uVar3 & 0xff) == 0)) {
      if (cVar2 == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c11fa10,SUB84(in_dr2,0));
      }
      else {
        dVar10 = (double)CONCAT44(_LAB_8c11fa14,DAT_8c11fa10);
      }
      if (cVar1 == '\0') {
        dVar11 = (double)CONCAT44(fVar12 * (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 * dVar10;
      }
    }
    if (cVar2 == '\0') {
      *(int *)pdVar5 = (int)((ulonglong)dVar11 >> 0x20);
    }
    else {
      *pdVar5 = dVar11;
    }
  }
  piVar9 = *(int **)(ar4 + 0xc);
  if ((*(int *)(piVar9[1] * 4 + *(int *)(*piVar9 + 0x40)) != *(int *)(*piVar9 + 0x3c)) &&
     (*(int *)(*(int *)(piVar9[2] + 0x40) + piVar9[3] * 4) != *(int *)(piVar9[2] + 0x3c))) {
    return 1;
  }
  return 0;
}



/* FUN_8c11fa1e @ 8c11fa1e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c11fa1e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int in_r1;
  int a5;
  int *unaff_r13;
  int a4;
  
  a4 = *unaff_r13;
  if (in_r0 == in_r1) {
    (**(code **)(a4 + 0x18))(a4,unaff_r13[0xb],ar6,ar7);
    a5 = unaff_r13[0xf];
    (**(code **)(a4 + 0x18))(a4,a5,ar6,ar7);
    (*(code *)PTR_FUN_8c11fb50)(unaff_r13,a5,ar6,ar7);
  }
  return (uint)(in_r0 == in_r1);
}



/* FUN_8c11fa64 @ 8c11fa64 callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c11faac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11fa64(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined2 in_r0;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *unaff_r14;
  undefined4 extraout_fr1;
  undefined4 extraout_fr1_00;
  float extraout_fr0;
  float extraout_fr0_00;
  undefined4 in_fr5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 in_xd2;
  short sVar8;
  byte in_FPSCR_CAUSE;
  byte bVar9;
  byte in_FPSCR_DN;
  byte bVar10;
  byte in_FPSCR_PR;
  byte bVar11;
  byte in_FPSCR_SZ;
  byte bVar12;
  char cVar13;
  
  puVar1 = PTR_FUN_8c11fb58;
  iVar5 = *unaff_r14;
  *(undefined2 *)(*(int *)unaff_r14[4] + 0xc) = in_r0;
  uVar3 = DAT_8c11fb54;
  if (in_FPSCR_SZ == 0) {
    uVar3 = in_fr5;
  }
  (*(code *)puVar1)(unaff_r14,1,ar6,ar7);
  puVar1 = PTR_FUN_8c11fb58;
  uVar4 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & DAT_8c11fb4c;
  bVar9 = 0;
  bVar10 = 0;
  bVar11 = (byte)((uVar4 & 0x80000) >> 0x13);
  bVar12 = (byte)((uVar4 & 0x100000) >> 0x14);
  if (bVar11 == 0) {
    uVar4 = (uint)extraout_fr0;
  }
  else {
    uVar4 = (uint)(double)CONCAT44(extraout_fr0,extraout_fr1);
  }
  unaff_r14[10] = uVar4 & 0xff;
  uVar6 = DAT_8c11fb54;
  if (bVar12 == 0) {
    uVar6 = uVar3;
  }
  (*(code *)puVar1)(unaff_r14,2,ar6,ar7);
  uVar4 = ((uint)bVar9 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar11 << 0x13 | (uint)bVar12 << 0x14)
          & DAT_8c11fb4c;
  bVar9 = 0;
  bVar10 = (byte)((uVar4 & 0x80000) >> 0x13);
  bVar11 = (byte)((uVar4 & 0x100000) >> 0x14);
  if (bVar10 == 0) {
    sVar8 = (short)(int)extraout_fr0_00;
  }
  else {
    sVar8 = (short)(int)(double)CONCAT44(extraout_fr0_00,extraout_fr1_00);
  }
  if (bVar11 == 0) {
    unaff_r14[0xe] = (int)(float)(int)sVar8;
  }
  else {
    *(undefined8 *)(unaff_r14 + 0xe) = in_xd2;
  }
  iVar2 = (**(code **)(iVar5 + 0x14))(iVar5,unaff_r14[10] * 2 + 1,4,ar7);
  uVar4 = DAT_8c11fb4c;
  unaff_r14[0xb] = iVar2;
  cVar13 = (char)((((uint)bVar9 << 0x12 | (uint)bVar10 << 0x13 | (uint)bVar11 << 0x14) & uVar4 &
                  0x100000) >> 0x14);
  iVar5 = (**(code **)(iVar5 + 0x14))(iVar5,unaff_r14[10],4,ar7);
  unaff_r14[0xf] = iVar5;
  if ((unaff_r14[0xb] != 0) && (unaff_r14[0xf] != 0)) {
    uVar4 = 0;
    if (cVar13 == '\0') {
      uVar7 = CONCAT44(DAT_8c11fb60,uVar6);
    }
    else {
      uVar7 = CONCAT44(_FUN_8c11fb64,DAT_8c11fb60);
    }
    if (unaff_r14[10] * 2 != -1) {
      do {
        iVar5 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        if (cVar13 == '\0') {
          *(int *)(unaff_r14[0xb] + iVar5) = (int)((ulonglong)uVar7 >> 0x20);
        }
        else {
          *(undefined8 *)(unaff_r14[0xb] + iVar5) = uVar7;
        }
      } while (uVar4 < unaff_r14[10] * 2 + 1U);
    }
    unaff_r14[0xc] = unaff_r14[10] * 8 + unaff_r14[0xb] + 4;
    unaff_r14[0xd] = unaff_r14[0xb];
    unaff_r14[0x10] = unaff_r14[10] * 4 + unaff_r14[0xf];
    unaff_r14[0x11] = unaff_r14[0xf];
    return 0;
  }
  uVar3 = (*(code *)PTR_FUN_8c11fb5c)(2);
  return uVar3;
}



/* FUN_8c11fb64 @ 8c11fb64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11fb64(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c11fb94)(ar4,ar5,2,1);
  return uVar1;
}



/* thunk_FUN_8c013dfc @ 8c11fb98 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c013dfc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c11fbc8)();
  return uVar1;
}



/* thunk_FUN_8c013cd8 @ 8c11fb9e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c013cd8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c11fbcc)();
  return uVar1;
}



/* thunk_FUN_8c013d28 @ 8c11fba4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c013d28(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c11fbd0)();
  return uVar1;
}



/* thunk_FUN_8c013be8 @ 8c11fbaa callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c013be8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c11fbd4)();
  return uVar1;
}



/* thunk_FUN_8c014064 @ 8c11fbb0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c014064(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c11fbd8)();
  return uVar1;
}



/* FUN_8c11fbb6 @ 8c11fbb6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11fbb6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* thunk_FUN_8c0142e4 @ 8c11fbbc callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c0142e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c11fbdc)();
  return uVar1;
}



/* thunk_FUN_8c013c88 @ 8c11fbc2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c013c88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c11fbe0)();
  return uVar1;
}



/* FUN_8c11fbe4 @ 8c11fbe4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11fbe4(int ar4,int ar5,int ar6,int ar7)

{
  uint uVar1;
  char cVar2;
  
  *(int *)(*(int *)(ar6 + 0x34) + ar7 * 4) = ar5;
  if (ar5 == 0) {
    uVar1 = (**(code **)(ar4 + 0x24))(ar4,ar6,ar7,ar7);
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
  }
  else {
    cVar2 = '\0';
    if (*(char *)(ar5 + 8) != '\0') {
      do {
        if (*(int *)(cVar2 * 8 + *(int *)(ar5 + 0xc)) == 0) {
          *(int *)(*(int *)(ar5 + 0xc) + cVar2 * 8) = ar6;
          *(int *)(cVar2 * 8 + *(int *)(ar5 + 0xc) + 4) = ar7;
          return 0;
        }
        cVar2 = cVar2 + '\x01';
      } while ((int)cVar2 < (int)(uint)*(byte *)(ar5 + 8));
    }
  }
  return 0;
}



/* FUN_8c11fc5e @ 8c11fc5e callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11fc5e(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  char cVar2;
  
  if (ar5 == 0) {
    uVar1 = (**(code **)(ar4 + 0x28))(ar4,ar6,ar6,ar7);
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
  }
  else {
    cVar2 = '\0';
    if (*(char *)(ar5 + 9) != '\0') {
      do {
        if (*(int *)(cVar2 * 4 + *(int *)(ar5 + 0x10)) == 0) {
          *(undefined4 *)(cVar2 * 4 + *(int *)(ar5 + 0x10)) = ar6;
          return 0;
        }
        cVar2 = cVar2 + '\x01';
      } while ((int)cVar2 < (int)(uint)*(byte *)(ar5 + 9));
    }
  }
  return 0;
}



/* FUN_8c11fcc4 @ 8c11fcc4 callers=1 callees=2 */

/* WARNING: Removing unreachable block (ram,0x8c11fe4a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11fcc4(ushort *ar4,byte *ar5,byte *ar6,byte *ar7)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  char *a5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  byte *a6;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  uVar14 = (uint)DAT_8c11fde2;
  iVar13 = 0;
  iVar12 = 0;
  bVar1 = *ar5;
  pbVar8 = ar5;
  while (bVar1 != uVar14) {
    pbVar8 = pbVar8 + 8;
    iVar13 = iVar13 + 1;
    bVar1 = *pbVar8;
  }
  bVar1 = *ar6;
  uVar10 = uVar14;
  pbVar8 = ar6;
  while (bVar1 != uVar14) {
    if ((uVar10 & 0xff) != (uint)*pbVar8) {
      uVar10 = (uint)(char)*pbVar8;
      iVar12 = iVar12 + 1;
    }
    pbVar8 = pbVar8 + 2;
    bVar1 = *pbVar8;
  }
  ar4[1] = (ushort)ar5[8];
  ar4[5] = (ushort)*ar6;
  pbVar9 = ar6;
  pbVar8 = ar7;
  iVar5 = (**(code **)(ar4 + 8))(ar4,iVar13 << 2,ar6,ar7);
  *(int *)(ar4 + 2) = iVar5;
  if (iVar5 != 0) {
    iVar5 = (**(code **)(ar4 + 8))(ar4,iVar12 << 2,pbVar9,pbVar8);
    *(int *)(ar4 + 6) = iVar5;
    if (iVar5 != 0) {
      a6 = (byte *)0x1;
      a5 = (char *)(**(code **)(ar4 + 10))(ar4,iVar13 * 2 + iVar12,1,pbVar8);
      pcVar7 = a5 + iVar13;
      bVar1 = *ar6;
      pbVar9 = ar6;
      while (bVar1 != uVar14) {
        pbVar3 = pbVar9 + 1;
        pbVar9 = pbVar9 + 2;
        a5[*pbVar3] = a5[*pbVar3] + '\x01';
        bVar1 = *pbVar9;
      }
      bVar1 = *ar7;
      pbVar9 = ar7;
      while (bVar1 != uVar14) {
        pcVar7[((uint)*pbVar9 - (uint)ar4[5]) + iVar13] =
             pcVar7[((uint)*pbVar9 - (uint)ar4[5]) + iVar13] + '\x01';
        pbVar3 = pbVar9 + 1;
        pbVar9 = pbVar9 + 2;
        pcVar7[*pbVar3] = pcVar7[*pbVar3] + '\x01';
        bVar1 = *pbVar9;
      }
      *ar4 = 0;
      for (pbVar9 = ar5; *pbVar9 != uVar14; pbVar9 = pbVar9 + 8) {
        if (*(int *)(pbVar9 + 4) == 0) {
          if (*pbVar9 == 0) {
            a6 = (byte *)(int)*a5;
            uVar10 = (**(code **)(ar4 + 0x10))(ar4,(int)*pcVar7,a6,pbVar8);
            if ((uVar10 & 0xff) != 0) {
              return 1;
            }
          }
        }
        else {
          ar5 = (byte *)(**(code **)(pbVar9 + 4))(ar4,(int)(char)*pbVar9,a6,pbVar8);
          if (ar5 == (byte *)0x0) {
            return 1;
          }
          if (ar5[8] != pcVar7[*pbVar9]) {
            return 1;
          }
          if (ar5[9] != a5[*pbVar9]) {
            return 1;
          }
          uVar4 = *ar4;
          *ar4 = uVar4 + 1;
          *(byte **)(*(int *)(ar4 + 2) + (uint)uVar4 * 4) = ar5;
          if (*ar4 != (ushort)*pbVar9) {
            return 1;
          }
        }
      }
      ar4[4] = 0;
      uVar10 = uVar14;
      for (; *ar6 != uVar14; ar6 = ar6 + 2) {
        if (ar6[1] == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(*(int *)(ar4 + 2) + ((uint)ar6[1] - (uint)ar4[1]) * 4);
        }
        if ((uVar10 & 0xff) != (uint)*ar6) {
          ar5 = (byte *)(*(code *)PTR_FUN_8c11ffa4)
                                  (ar4,(int)(char)*ar6,
                                   (uint)(byte)pcVar7[((uint)*ar6 - (uint)ar4[5]) + iVar13],pbVar8);
          if (ar5 == (byte *)0x0) {
            return 1;
          }
          uVar4 = ar4[4];
          ar4[4] = uVar4 + 1;
          *(byte **)((uint)uVar4 * 4 + *(int *)(ar4 + 6)) = ar5;
          uVar10 = (uint)(char)*ar6;
        }
        a6 = ar5;
        uVar6 = FUN_8c11fc5e(ar4,uVar11,ar5,pbVar8);
        if ((uVar6 & 0xff) != 0) {
          return 1;
        }
      }
      bVar1 = *ar7;
      while( true ) {
        if (bVar1 == uVar14) {
          (**(code **)(ar4 + 0xc))(ar4,a5,a6,pbVar8);
          return 0;
        }
        uVar4 = ar4[5];
        bVar1 = *ar7;
        if (ar7[1] == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(*(int *)(ar4 + 2) + ((uint)ar7[1] - (uint)ar4[1]) * 4);
        }
        uVar10 = (int)(char)bVar1 - (int)(short)uVar4 & 0xff;
        cVar2 = pcVar7[uVar10 + iVar13];
        pcVar7[uVar10 + iVar13] = cVar2 - 1U;
        pbVar8 = (byte *)(uint)(byte)(cVar2 - 1U);
        a6 = *(byte **)(*(int *)(ar4 + 6) + ((int)(char)bVar1 - (int)(short)uVar4 & 0xffU) * 4);
        uVar10 = FUN_8c11fbe4(ar4,uVar11,a6,pbVar8);
        if ((uVar10 & 0xff) != 0) break;
        ar7 = ar7 + 2;
        bVar1 = *ar7;
      }
    }
  }
  return 1;
}



/* FUN_8c11ffa8 @ 8c11ffa8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c11ffa8(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  iVar5 = (int)DAT_8c12006e;
  iVar4 = 0;
  if (*ar4 != 0) {
    do {
      iVar6 = *(int *)(*(int *)(ar4 + 2) + iVar4 * 4);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) != 0)) {
        cVar2 = (**(code **)(iVar6 + 0x1c))(iVar6,iVar5,0);
        uVar3 = uVar3 | cVar2 == '\0';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*ar4);
  }
  puVar1 = PTR_FUN_8c120074;
  iVar4 = 0;
  if (ar4[4] != 0) {
    do {
      if (*(int *)(*(int *)(ar4 + 6) + iVar4 * 4) != 0) {
        cVar2 = (*(code *)puVar1)(iVar5,0);
        uVar3 = uVar3 | cVar2 == '\0';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)ar4[4]);
  }
  (**(code **)(ar4 + 0xc))(ar4,*(undefined4 *)(ar4 + 2));
  (**(code **)(ar4 + 0xc))(ar4,*(undefined4 *)(ar4 + 6));
  return uVar3;
}



/* FUN_8c11ffb8 @ 8c11ffb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c11ffb8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  uint unaff_r9;
  uint uVar3;
  uint uVar4;
  int a5;
  int iVar5;
  ushort *unaff_r14;
  
  a5 = (int)DAT_8c12006e;
  uVar3 = unaff_r9;
  uVar4 = unaff_r9;
  if (*unaff_r14 != 0) {
    do {
      iVar5 = *(int *)(*(int *)(unaff_r14 + 2) + uVar4 * 4);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) != 0)) {
        ar7 = 0;
        ar6 = 0;
        uVar2 = (**(code **)(iVar5 + 0x1c))(iVar5,a5,0,0);
        uVar3 = uVar3 | (uVar2 & 0xff) == 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)*unaff_r14);
  }
  puVar1 = PTR_FUN_8c120074;
  if (unaff_r14[4] != 0) {
    do {
      iVar5 = *(int *)(*(int *)(unaff_r14 + 6) + unaff_r9 * 4);
      if (iVar5 != 0) {
        ar7 = 0;
        ar6 = 0;
        uVar4 = (*(code *)puVar1)(iVar5,a5,0,0);
        uVar3 = uVar3 | (uVar4 & 0xff) == 0;
      }
      unaff_r9 = unaff_r9 + 1;
    } while ((int)unaff_r9 < (int)(uint)unaff_r14[4]);
  }
  (**(code **)(unaff_r14 + 0xc))(unaff_r14,*(undefined4 *)(unaff_r14 + 2),ar6,ar7);
  (**(code **)(unaff_r14 + 0xc))(unaff_r14,*(undefined4 *)(unaff_r14 + 6),ar6,ar7);
  return uVar3;
}


