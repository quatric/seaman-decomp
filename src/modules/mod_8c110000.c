/* Seaman (USA) region 0x8c110000-0x8c120000 (Ghidra decompiler) */

/* FUN_8c110060 @ 8c110060 callers=0 callees=2 */

/* WARNING: Removing unreachable block (ram,0x8c1100ac) */
/* WARNING: Removing unreachable block (ram,0x8c1100ae) */
/* WARNING: Removing unreachable block (ram,0x8c1100b0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c110060(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int unaff_r14;
  
  iVar1 = *(int *)(unaff_r14 + 0x28);
  if (iVar1 == 0) {
    if (*(int *)(unaff_r14 + 0x48) == *(int *)(unaff_r14 + 0x7c)) {
      FUN_8c10fe04(unaff_r14,ar5,ar6,ar7);
    }
    if (*(uint *)(unaff_r14 + 0x48) < *(uint *)(unaff_r14 + 0x7c)) {
      FUN_8c10fc96(unaff_r14,ar5,ar6,ar7);
    }
    if ((float)*(int *)(unaff_r14 + 0x8c) < *(float *)(unaff_r14 + 0x4c)) {
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
  
  uVar1 = (*(code *)PTR_FUN_8c110188)
                    (ar4,ar5,4,1,PTR_LAB_8c110184,PTR_LAB_8c110180,PTR_FUN_8c11017c,
                     (int)DAT_8c11017a);
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

/* WARNING: Removing unreachable block (ram,0x8c110716) */
/* WARNING: Removing unreachable block (ram,0x8c1106da) */
/* WARNING: Removing unreachable block (ram,0x8c1106d6) */
/* WARNING: Removing unreachable block (ram,0x8c1106d2) */
/* WARNING: Removing unreachable block (ram,0x8c1106ca) */
/* WARNING: Removing unreachable block (ram,0x8c1106d4) */
/* WARNING: Removing unreachable block (ram,0x8c1106d8) */
/* WARNING: Removing unreachable block (ram,0x8c1106dc) */
/* WARNING: Removing unreachable block (ram,0x8c11075a) */
/* WARNING: Removing unreachable block (ram,0x8c1106c8) */
/* WARNING: Unknown calling convention */

uint FUN_8c110680(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  
  cVar6 = '\0';
  if ((*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') ||
     (*(uint *)(ar4 + 0x48) < *(uint *)(ar4 + 0x2c))) {
    uVar4 = (*(undefined4 **)(ar4 + 0xc))[1];
    pfVar1 = (float *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),uVar4,ar6,ar7);
    if (pfVar1 == (float *)0x0) {
      if (*(char *)(ar4 + 0x28) != '\0') {
        iVar3 = *(int *)(ar4 + 0x48);
        while (iVar3 != 0) {
          cVar6 = '\0';
          iVar3 = FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),uVar4,ar6,ar7);
          if (iVar3 == 0) break;
          if (cVar6 == '\0') {
            uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x44),*(undefined4 *)(ar4 + 0x34));
          }
          else {
            uVar5 = *(undefined8 *)(ar4 + 0x44);
          }
          *(bool *)iVar3 = (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20);
          iVar3 = *(int *)(ar4 + 0x48) + -1;
          *(int *)(ar4 + 0x48) = iVar3;
        }
        if (*(int *)(ar4 + 0x48) == 0) {
          *(undefined1 *)(ar4 + 0x28) = 0;
        }
        return (int)*(char *)(ar4 + 0x28);
      }
    }
    else {
      if (cVar6 == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x44),**(undefined4 **)(ar4 + 0x3c));
      }
      else {
        uVar5 = *(undefined8 *)(ar4 + 0x44);
      }
      *(float *)(ar4 + 0x44) = (float)((ulonglong)uVar5 >> 0x20) - (float)uVar5;
      pfVar2 = *(float **)(ar4 + 0x3c);
      *(float **)(ar4 + 0x3c) = pfVar2 + 1;
      *pfVar2 = *pfVar1;
      *(float *)(ar4 + 0x44) = *(float *)(ar4 + 0x44) + *pfVar1;
      if (*(int *)(ar4 + 0x3c) == *(int *)(ar4 + 0x40)) {
        *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar4 + 0x38);
      }
      if (*(int *)(ar4 + 0x48) == *(int *)(ar4 + 0x2c)) {
        cVar6 = '\0';
        uVar4 = FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),uVar4,ar6,ar7);
        if (cVar6 == '\0') {
          uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x44),*(undefined4 *)(ar4 + 0x34));
        }
        else {
          uVar5 = *(undefined8 *)(ar4 + 0x44);
        }
        *(bool *)uVar4 = (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20);
      }
      else {
        *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + 1;
      }
    }
  }
  iVar3 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar3 + 0x40)) == *(int *)(iVar3 + 0x3c)
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
/* WARNING: Removing unreachable block (ram,0x8c110854) */
/* WARNING: Removing unreachable block (ram,0x8c11083a) */
/* WARNING: Removing unreachable block (ram,0x8c11081c) */
/* WARNING: Removing unreachable block (ram,0x8c110832) */
/* WARNING: Removing unreachable block (ram,0x8c11084c) */
/* WARNING: Removing unreachable block (ram,0x8c110866) */
/* WARNING: Removing unreachable block (ram,0x8c110870) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c110818(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *unaff_r14;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  char cVar2;
  
  iVar1 = *unaff_r14;
  FUN_8c120550(ar4,1,ar6,ar7);
  unaff_r14[0xb] = (int)extraout_fr0 & 0xffff;
  FUN_8c120550(unaff_r14,2,ar6,ar7);
  unaff_r14[0xc] = (int)extraout_fr0_00 & 0xffff;
  FUN_8c120550(unaff_r14,3,ar6,ar7);
  cVar2 = '\0';
  unaff_r14[0xd] = (int)(float)(int)(short)(int)extraout_fr0_01;
  *(undefined2 *)(*(int *)unaff_r14[4] + 0xc) = 1;
  iVar1 = (**(code **)(iVar1 + 0x14))(iVar1,unaff_r14[0xc],4,ar7);
  unaff_r14[0xe] = iVar1;
  unaff_r14[0xf] = iVar1;
  unaff_r14[0x10] = unaff_r14[0xc] * 4 + unaff_r14[0xe];
  if (cVar2 == '\0') {
    unaff_r14[0x11] = 0;
  }
  else {
    unaff_r14[0x11] = 0;
    unaff_r14[0x12] = 0x41700000;
  }
  unaff_r14[0x12] = 0;
  return 0;
}



/* FUN_8c1108b0 @ 8c1108b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1108b0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1108fc)
                    (ar4,ar5,1,1,PTR_FUN_8c1108f8,PTR_LAB_8c1108f4,PTR_FUN_8c1108f0,0x4c);
  return uVar1;
}



/* FUN_8c110908 @ 8c110908 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c110996) */
/* WARNING: Removing unreachable block (ram,0x8c110934) */
/* WARNING: Removing unreachable block (ram,0x8c11092a) */
/* WARNING: Removing unreachable block (ram,0x8c110908) */
/* WARNING: Removing unreachable block (ram,0x8c11090a) */
/* WARNING: Removing unreachable block (ram,0x8c110932) */
/* WARNING: Removing unreachable block (ram,0x8c11096e) */
/* WARNING: Removing unreachable block (ram,0x8c110998) */
/* WARNING: Removing unreachable block (ram,0x8c110970) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c110908(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain1)

{
  byte bVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  uint ar5_00;
  int iVar6;
  undefined4 ar6_00;
  int unaff_r14;
  float extraout_fr3;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  char cVar10;
  
  cVar10 = '\0';
  bVar1 = *(byte *)(unaff_r14 + 8);
  iVar4 = *(int *)(unaff_r14 + 0xc);
  if (*(char *)(**(int **)(unaff_r14 + 0x10) + ain1) != '\x01') {
    ar6_00 = *(undefined4 *)(unaff_r14 + 0x28);
    ar5_00 = (uint)*(byte *)(unaff_r14 + 8);
    uVar9 = 0;
    uVar2 = FUN_8c112074(*(undefined4 *)(unaff_r14 + 0xc),ar5_00,ar6_00,ar7);
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
    if (cVar10 == '\0') {
      fVar8 = 1.0;
    }
    else {
      fVar8 = -NAN;
    }
    uVar2 = 0;
    fVar7 = extraout_fr3;
    if (*(char *)(unaff_r14 + 8) != '\0') {
      do {
        if (*(int *)(*(int *)(unaff_r14 + 0x28) + uVar2 * 4) != 0) {
          if (cVar10 == '\0') {
            fVar7 = **(float **)(*(int *)(unaff_r14 + 0x28) + uVar2 * 4);
          }
          cVar10 = '\0';
          uVar9 = CONCAT44((float)((ulonglong)uVar9 >> 0x20) + fVar8,(float)uVar9 + fVar7);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(byte *)(unaff_r14 + 8));
    }
    pfVar3 = (float *)FUN_8c111dfe(**(undefined4 **)(unaff_r14 + 0x10),ar5_00,ar6_00,ar7);
    *pfVar3 = (float)uVar9 / (float)((ulonglong)uVar9 >> 0x20);
  }
  piVar5 = *(int **)(unaff_r14 + 0xc);
  while( true ) {
    if ((int *)((uint)bVar1 * 8 + iVar4) <= piVar5) {
      return 1;
    }
    iVar6 = *piVar5;
    if ((*(int *)(*(int *)(iVar6 + 0x2c) + piVar5[1] * 4) != 0) &&
       (*(int *)(*(int *)(iVar6 + 0x40) + piVar5[1] * 4) == *(int *)(iVar6 + 0x3c))) break;
    piVar5 = piVar5 + 2;
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
  
  uVar1 = (*(code *)PTR_FUN_8c110a8c)
                    (ar4,ar5,3,1,PTR_LAB_8c110a88,PTR_FUN_8c110a84,PTR_FUN_8c110a80,0x2c);
  return uVar1;
}



/* FUN_8c110a90 @ 8c110a90 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c110acc) */
/* WARNING: Removing unreachable block (ram,0x8c110aa8) */
/* WARNING: Removing unreachable block (ram,0x8c110aa0) */
/* WARNING: Removing unreachable block (ram,0x8c110ac6) */
/* WARNING: Removing unreachable block (ram,0x8c110aca) */
/* WARNING: Removing unreachable block (ram,0x8c110ad4) */
/* WARNING: Unknown calling convention */

undefined8 * FUN_8c110a90(int ar4,int ar5,float *ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  
  uVar6 = 0;
  puVar1 = &DAT_8c110bd0;
  if (*(int *)(ar4 + 0x28) != 0) {
    do {
      iVar2 = uVar6 * 4;
      *ar6 = 10.0;
      pfVar3 = *(float **)(*(int *)(ar4 + 0x2c) + iVar2);
      puVar1 = *(undefined8 **)(ar4 + 0x30);
      pfVar5 = pfVar3 + *(int *)(*(int *)(ar4 + 0x34) + iVar2);
      pfVar4 = (float *)(*(int *)((int)puVar1 + iVar2) * 4 + ar5);
      for (; pfVar3 < pfVar5; pfVar3 = pfVar3 + 1) {
        fVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        *ar6 = fVar7 * *pfVar3 + *ar6;
      }
      uVar6 = uVar6 + 1;
      ar6 = ar6 + 1;
    } while (uVar6 < *(uint *)(ar4 + 0x28));
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

uint FUN_8c110bec(undefined4 ar4,undefined4 ar5,int ar6,uint *ar7,int ain0)

{
  uint uVar1;
  int a6;
  uint *a7;
  uint uVar2;
  undefined4 unaff_r14;
  char in_T;
  undefined4 in_PR;
  
  uVar2 = 1;
  if (in_T == '\x01') {
    a6 = ar6;
    a7 = ar7;
    FUN_8c110b58(unaff_r14,ar5,ar6,ar7,in_PR);
    uVar1 = (**(code **)(ar6 + 0x3c))(ar6,ar5,a6,a7);
    if (*ar7 < uVar1) {
      (**(code **)(ar6 + 0x6c))(ar6,ar5,a6,a7);
      uVar2 = FUN_8c110c80(unaff_r14,ar5,a6,a7);
      uVar2 = (uint)((uVar2 & 0xff) == 0);
      *ar7 = *ar7 + 1;
    }
  }
  else if (ain0 == 0xff) {
    FUN_8c110b58(unaff_r14,ar5,ar6,ar7,in_PR);
    FUN_8c120668(unaff_r14,ar5,ar6,ar7);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c110c80 @ 8c110c80 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c111004) */
/* WARNING: Removing unreachable block (ram,0x8c110f64) */
/* WARNING: Removing unreachable block (ram,0x8c11100c) */
/* WARNING: Removing unreachable block (ram,0x8c11105c) */
/* WARNING: Removing unreachable block (ram,0x8c11110e) */
/* WARNING: Removing unreachable block (ram,0x8c110fd2) */
/* WARNING: Removing unreachable block (ram,0x8c11110a) */
/* WARNING: Removing unreachable block (ram,0x8c111058) */
/* WARNING: Removing unreachable block (ram,0x8c110f68) */
/* WARNING: Removing unreachable block (ram,0x8c111102) */
/* WARNING: Removing unreachable block (ram,0x8c11106c) */
/* WARNING: Removing unreachable block (ram,0x8c111054) */
/* WARNING: Removing unreachable block (ram,0x8c111026) */
/* WARNING: Removing unreachable block (ram,0x8c11100a) */
/* WARNING: Removing unreachable block (ram,0x8c110fde) */
/* WARNING: Removing unreachable block (ram,0x8c110f5e) */
/* WARNING: Removing unreachable block (ram,0x8c110f5a) */
/* WARNING: Removing unreachable block (ram,0x8c110ea0) */
/* WARNING: Removing unreachable block (ram,0x8c110e7e) */
/* WARNING: Removing unreachable block (ram,0x8c110e7a) */
/* WARNING: Removing unreachable block (ram,0x8c110e72) */
/* WARNING: Removing unreachable block (ram,0x8c110e6a) */
/* WARNING: Removing unreachable block (ram,0x8c110e5c) */
/* WARNING: Removing unreachable block (ram,0x8c110e52) */
/* WARNING: Removing unreachable block (ram,0x8c110e3e) */
/* WARNING: Removing unreachable block (ram,0x8c110e32) */
/* WARNING: Removing unreachable block (ram,0x8c110e1a) */
/* WARNING: Removing unreachable block (ram,0x8c110e16) */
/* WARNING: Removing unreachable block (ram,0x8c110e0e) */
/* WARNING: Removing unreachable block (ram,0x8c110e08) */
/* WARNING: Removing unreachable block (ram,0x8c110e02) */
/* WARNING: Removing unreachable block (ram,0x8c110de8) */
/* WARNING: Removing unreachable block (ram,0x8c110dd4) */
/* WARNING: Removing unreachable block (ram,0x8c110dc8) */
/* WARNING: Removing unreachable block (ram,0x8c110dd2) */
/* WARNING: Removing unreachable block (ram,0x8c110db2) */
/* WARNING: Removing unreachable block (ram,0x8c110da8) */
/* WARNING: Removing unreachable block (ram,0x8c110d96) */
/* WARNING: Removing unreachable block (ram,0x8c110d90) */
/* WARNING: Removing unreachable block (ram,0x8c110d8c) */
/* WARNING: Removing unreachable block (ram,0x8c110d82) */
/* WARNING: Removing unreachable block (ram,0x8c110d70) */
/* WARNING: Removing unreachable block (ram,0x8c110d6c) */
/* WARNING: Removing unreachable block (ram,0x8c110d68) */
/* WARNING: Removing unreachable block (ram,0x8c110d58) */
/* WARNING: Removing unreachable block (ram,0x8c110d54) */
/* WARNING: Removing unreachable block (ram,0x8c110d4c) */
/* WARNING: Removing unreachable block (ram,0x8c110d3e) */
/* WARNING: Removing unreachable block (ram,0x8c110d34) */
/* WARNING: Removing unreachable block (ram,0x8c110d2e) */
/* WARNING: Removing unreachable block (ram,0x8c110d28) */
/* WARNING: Removing unreachable block (ram,0x8c110d1c) */
/* WARNING: Removing unreachable block (ram,0x8c110cc8) */
/* WARNING: Removing unreachable block (ram,0x8c110c9c) */
/* WARNING: Removing unreachable block (ram,0x8c110c92) */
/* WARNING: Removing unreachable block (ram,0x8c110c8e) */
/* WARNING: Removing unreachable block (ram,0x8c110c90) */
/* WARNING: Removing unreachable block (ram,0x8c110c94) */
/* WARNING: Removing unreachable block (ram,0x8c110ca0) */
/* WARNING: Removing unreachable block (ram,0x8c110cca) */
/* WARNING: Removing unreachable block (ram,0x8c110d26) */
/* WARNING: Removing unreachable block (ram,0x8c110d2a) */
/* WARNING: Removing unreachable block (ram,0x8c110d32) */
/* WARNING: Removing unreachable block (ram,0x8c110d3a) */
/* WARNING: Removing unreachable block (ram,0x8c110d46) */
/* WARNING: Removing unreachable block (ram,0x8c110d4e) */
/* WARNING: Removing unreachable block (ram,0x8c110d56) */
/* WARNING: Removing unreachable block (ram,0x8c110d62) */
/* WARNING: Removing unreachable block (ram,0x8c110d6a) */
/* WARNING: Removing unreachable block (ram,0x8c110d6e) */
/* WARNING: Removing unreachable block (ram,0x8c110d7c) */
/* WARNING: Removing unreachable block (ram,0x8c110d8a) */
/* WARNING: Removing unreachable block (ram,0x8c110d8e) */
/* WARNING: Removing unreachable block (ram,0x8c110d92) */
/* WARNING: Removing unreachable block (ram,0x8c110d9a) */
/* WARNING: Removing unreachable block (ram,0x8c110dae) */
/* WARNING: Removing unreachable block (ram,0x8c110dc6) */
/* WARNING: Removing unreachable block (ram,0x8c110dcc) */
/* WARNING: Removing unreachable block (ram,0x8c110dda) */
/* WARNING: Removing unreachable block (ram,0x8c110ddc) */
/* WARNING: Removing unreachable block (ram,0x8c110dce) */
/* WARNING: Removing unreachable block (ram,0x8c110dfc) */
/* WARNING: Removing unreachable block (ram,0x8c110e06) */
/* WARNING: Removing unreachable block (ram,0x8c110e0c) */
/* WARNING: Removing unreachable block (ram,0x8c110e12) */
/* WARNING: Removing unreachable block (ram,0x8c110e18) */
/* WARNING: Removing unreachable block (ram,0x8c110e2e) */
/* WARNING: Removing unreachable block (ram,0x8c110e36) */
/* WARNING: Removing unreachable block (ram,0x8c110e50) */
/* WARNING: Removing unreachable block (ram,0x8c110e56) */
/* WARNING: Removing unreachable block (ram,0x8c110e62) */
/* WARNING: Removing unreachable block (ram,0x8c110e70) */
/* WARNING: Removing unreachable block (ram,0x8c110e76) */
/* WARNING: Removing unreachable block (ram,0x8c110e7c) */
/* WARNING: Removing unreachable block (ram,0x8c110e8e) */
/* WARNING: Removing unreachable block (ram,0x8c110f58) */
/* WARNING: Removing unreachable block (ram,0x8c110f5c) */
/* WARNING: Removing unreachable block (ram,0x8c110fb4) */
/* WARNING: Removing unreachable block (ram,0x8c111000) */
/* WARNING: Removing unreachable block (ram,0x8c111014) */
/* WARNING: Removing unreachable block (ram,0x8c11104c) */
/* WARNING: Removing unreachable block (ram,0x8c11105a) */
/* WARNING: Removing unreachable block (ram,0x8c111076) */
/* WARNING: Removing unreachable block (ram,0x8c11111a) */
/* WARNING: Removing unreachable block (ram,0x8c110fc8) */
/* WARNING: Removing unreachable block (ram,0x8c11107a) */
/* WARNING: Removing unreachable block (ram,0x8c110f66) */
/* WARNING: Removing unreachable block (ram,0x8c11106a) */
/* WARNING: Removing unreachable block (ram,0x8c110ff2) */
/* WARNING: Removing unreachable block (ram,0x8c111110) */
/* WARNING: Removing unreachable block (ram,0x8c111078) */
/* WARNING: Removing unreachable block (ram,0x8c111072) */
/* WARNING: Removing unreachable block (ram,0x8c110fd4) */
/* WARNING: Removing unreachable block (ram,0x8c11104e) */
/* WARNING: Removing unreachable block (ram,0x8c11106e) */
/* WARNING: Removing unreachable block (ram,0x8c11103c) */
/* WARNING: Removing unreachable block (ram,0x8c110dd8) */
/* WARNING: Removing unreachable block (ram,0x8c110d20) */
/* WARNING: Removing unreachable block (ram,0x8c111024) */
/* WARNING: Removing unreachable block (ram,0x8c111050) */
/* WARNING: Removing unreachable block (ram,0x8c111108) */
/* WARNING: Removing unreachable block (ram,0x8c111114) */
/* WARNING: Removing unreachable block (ram,0x8c111056) */
/* WARNING: Removing unreachable block (ram,0x8c111118) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffb8 : 0x8c11105a */
/* WARNING: Removing unreachable block (ram,0x8c111074) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c110c80(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *a5;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int a4;
  float fVar10;
  undefined8 in_dr0;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  double dVar14;
  undefined8 in_dr4;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  char cVar21;
  
  fVar13 = (float)((ulonglong)in_dr0 >> 0x20);
  fVar16 = (float)((ulonglong)in_dr4 >> 0x20);
  a4 = *ar4;
  FUN_8c120550(ar4,2,ar6,ar7);
  fVar18 = fVar13;
  FUN_8c120550(ar4,3,ar6,ar7);
  ar4[0xe] = (int)fVar16;
  uVar3 = ((int)fVar13 & 0xffffU) >> 1;
  uVar9 = uVar3 + 1;
  iVar5 = uVar9 * 4;
  iVar1 = a4;
  a5 = (float *)(**(code **)(a4 + 0x10))(a4,iVar5,ar6,ar7);
  if (a5 == (float *)0x0) {
LAB_8c1110d4:
    FUN_8c1204c4(ar4,100,ar6,ar7);
  }
  else {
    fVar10 = fVar18 / (float)uVar3;
    fVar19 = 1000.0;
    fVar17 = fVar18;
    if (1000.0 < fVar18) {
      fVar17 = 1000.0;
    }
    fVar20 = 0.0;
    pfVar6 = a5;
    if (0.0 < fVar17) {
      do {
        *pfVar6 = fVar20 / (fVar16 * 100.0);
        fVar20 = fVar20 + fVar10;
        pfVar6 = pfVar6 + 1;
      } while (fVar20 < fVar17);
    }
    fVar15 = fVar10 / 2.0 + fVar18;
    fVar17 = 5.0;
    for (; fVar20 < fVar15; fVar20 = fVar20 + fVar10) {
      cVar21 = '\0';
      fVar12 = fVar16 * 1000.0;
      thunk_FUN_8c013dfc(iVar1,iVar5,ar6,ar7);
      if (cVar21 == '\0') {
        fVar12 = 0.69314694;
      }
      *pfVar6 = fVar17 * (fVar13 / fVar12) + 10.0;
      pfVar6 = pfVar6 + 1;
      fVar13 = fVar17;
    }
    if (fVar19 <= fVar18) {
      fVar13 = 4.4765625;
      thunk_FUN_8c013dfc(iVar1,iVar5,ar6,ar7);
      dVar11 = (double)((fVar13 * fVar17) / 0.69314694 + 10.0) + -0.95;
      dVar14 = dVar11;
      if (2147483648.0 <= dVar11) {
        dVar11 = dVar11 - 4294967296.0;
        dVar14 = dVar11;
      }
    }
    else {
      dVar14 = (double)fVar18 / 100.0 + -0.95;
      dVar11 = 2147483648.0;
      if (2147483648.0 <= dVar14) {
        dVar11 = 4294967296.0;
        dVar14 = dVar14 - 4294967296.0;
      }
    }
    fVar13 = (float)((ulonglong)dVar11 >> 0x20);
    ar4[10] = (int)dVar14;
    FUN_8c120550(ar4,4,ar6,ar7);
    if (ar4[10] == ((int)fVar13 & 0xffffU)) {
      iVar1 = (**(code **)(a4 + 0x14))(a4,ar4[10],4,ar7);
      ar4[0xb] = iVar1;
      iVar1 = (**(code **)(a4 + 0x14))(a4,ar4[10],4,ar7);
      ar4[0xc] = iVar1;
      iVar1 = (**(code **)(a4 + 0x14))(a4,ar4[10],4,ar7);
      ar4[0xd] = iVar1;
      ar6 = 4;
      pfVar6 = (float *)ar4[10];
      iVar1 = (**(code **)(a4 + 0x14))(a4,pfVar6,4,ar7);
      if ((((ar4[0xb] != 0) && (ar4[0xc] != 0)) && (ar4[0xd] != 0)) && (iVar1 != 0)) {
        uVar3 = 0;
        if (ar4[10] != 0) {
          do {
            iVar5 = uVar3 * 4;
            *(undefined4 *)(ar4[0xd] + iVar5) = 0;
            *(undefined4 *)(ar4[0xc] + iVar5) = 0xffffffff;
            fVar13 = (float)(int)(uVar3 + 1);
            if (fVar13 < 0.0) {
              fVar13 = fVar13 + 4.2949673e+09;
            }
            if (uVar3 < 10) {
              *(float *)(iVar1 + uVar3 * 4) = fVar13 * 100.0;
            }
            else {
              fVar18 = -2.0;
              thunk_FUN_8c014064(iVar5,pfVar6,ar6,ar7);
              *(float *)(iVar1 + uVar3 * 4) = fVar18 * fVar19;
            }
            uVar4 = 1;
            iVar5 = uVar3 * 4;
            if (1 < uVar9) {
              do {
                if ((a5[uVar4] <= fVar13 + -1.0) || (fVar13 + 1.0 <= a5[uVar4])) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = 1;
                }
                *(int *)(ar4[0xd] + iVar5) = *(int *)(ar4[0xd] + iVar5) + iVar7;
                if ((iVar7 != 0) && (*(int *)(ar4[0xc] + iVar5) == -1)) {
                  *(uint *)(ar4[0xc] + iVar5) = uVar4;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < uVar9);
            }
            iVar7 = ar4[0xb];
            ar6 = 4;
            cVar21 = '\0';
            uVar2 = (**(code **)(a4 + 0x14))(a4,*(undefined4 *)(ar4[0xd] + iVar5),4,ar7);
            *(undefined4 *)(iVar7 + iVar5) = uVar2;
            if (*(int *)(ar4[0xb] + iVar5) == 0) goto LAB_8c1110d4;
            pfVar6 = *(float **)(ar4[0xb] + iVar5);
            uVar4 = 0;
            pfVar8 = pfVar6;
            if (*(int *)(ar4[0xd] + iVar5) != 0) {
              do {
                iVar7 = *(int *)(ar4[0xc] + iVar5) + uVar4;
                if (cVar21 == '\0') {
                  fVar18 = a5[iVar7];
                }
                else {
                  fVar18 = (float)((ulonglong)*(undefined8 *)(a5 + iVar7) >> 0x20);
                }
                cVar21 = '\0';
                pfVar6 = pfVar8 + 1;
                if (fVar13 <= fVar18) {
                  fVar18 = fVar13 - fVar18;
                }
                else {
                  fVar18 = fVar18 - fVar13;
                }
                uVar4 = uVar4 + 1;
                *pfVar8 = fVar18 + 1.0;
                pfVar8 = pfVar6;
              } while (uVar4 < *(uint *)(ar4[0xd] + iVar5));
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)ar4[10]);
        }
        (**(code **)(a4 + 0x18))(a4,iVar1,ar6,ar7);
        (**(code **)(a4 + 0x18))(a4,a5,ar6,ar7);
        return 0;
      }
      FUN_8c1204c4(ar4,100,ar6,ar7);
    }
  }
  return 1;
}



/* FUN_8c11116e @ 8c11116e callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c111178) */
/* WARNING: Removing unreachable block (ram,0x8c11118a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11116e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float extraout_fr0;
  
  FUN_8c120550(ar4,4,ar6,ar7);
  *(short *)(**(int **)(ar4 + 0x10) + 0xc) = (short)((int)extraout_fr0 << 2);
  return 0;
}



/* FUN_8c1111a0 @ 8c1111a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1111a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c111204)
                    (ar4,ar5,1,1,PTR_FUN_8c111200,PTR_FUN_8c1111fc,PTR_LAB_8c1111f8,0x3c);
  return uVar1;
}



/* FUN_8c111208 @ 8c111208 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c111208(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int a5;
  int ar7_00;
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
    ar7_00 = *(int *)(*(int *)(a5 + 8) + iVar4);
    if (-1 < ar7_00) {
      iVar2 = ar7_00;
      if ((ar6 == 0) && (ar7_00 == 0)) {
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
        (*(code *)PTR_FUN_8c1113cc)(iVar3,*(undefined4 *)(ar4[0xd] + iVar4),iVar2,ar7_00);
        if (*(int *)(a5 + 4) == 0) {
          iVar3 = *(int *)(a5 + 0x10);
          if (iVar1 == 0) {
            ar4[0xe] = iVar3;
          }
          else {
            *(int *)(iVar1 + 0x10) = iVar3;
          }
          (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)(a5 + 8),iVar2,ar7_00);
          (**(code **)(*ar4 + 0x18))(*ar4,a5,iVar2,ar7_00);
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

uint FUN_8c1113d0(int *ar4,undefined4 ar5,int ar6,int ar7)

{
  bool bVar1;
  int *piVar2;
  int *extraout_r2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 in_stack_ffffffdc;
  
  uVar7 = 1;
  uVar10 = 1;
  iVar8 = ar6 * 4;
  if ((char)ar5 == '\x01') {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar3 * 4;
        uVar3 = uVar3 + 1;
        *(int *)(ar4[0xb] + iVar8) = ar4[9];
        *(undefined4 *)(ar4[0x10] + iVar8) = 0;
      } while (uVar3 < (uint)ar4[5]);
    }
  }
  else if ((char)ar5 == '\x02') {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar10 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        *(int *)(ar4[0xb] + iVar8) = ar4[9];
        *(undefined4 *)(ar4[0x10] + iVar8) = 0;
      } while (uVar10 < (uint)ar4[5]);
    }
    uVar10 = FUN_8c1117e4(ar4,(uint)*(ushort *)((int)ar4 + 0xe),1,ar7);
  }
  else if ((char)ar5 == '\x03') {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar10 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        *(int *)(ar4[0xb] + iVar8) = ar4[9];
        *(undefined4 *)(ar4[0x10] + iVar8) = 0;
      } while (uVar10 < (uint)ar4[5]);
    }
    uVar10 = FUN_8c1117e4(ar4,ar6,1,ar7);
  }
  else if ((char)ar5 == '\x04') {
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar3 * 4;
        uVar3 = uVar3 + 1;
        *(int *)(ar4[0xb] + iVar8) = ar4[9];
        *(int *)(ar4[0x10] + iVar8) = ar4[0xf];
      } while (uVar3 < (uint)ar4[5]);
    }
    ar4[10] = ar4[9];
    *(undefined1 *)(ar4 + 0xc) = 0;
    ar4[6] = 0;
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        uVar4 = uVar3 + 1;
        *(undefined4 *)(uVar3 * 4 + ar4[0xb]) = 0;
        uVar3 = uVar4;
      } while (uVar4 < (uint)ar4[5]);
    }
    iVar8 = ar4[0xe];
    while (iVar8 != 0) {
      if (*(int *)(iVar8 + 0xc) != ar6) {
        uVar3 = FUN_8c120948(*(undefined4 *)(iVar8 + 0xc),*ar4,uVar7,ar7);
        uVar10 = uVar10 | uVar3;
      }
      iVar9 = *(int *)(iVar8 + 0x10);
      (**(code **)(*ar4 + 0x18))(*ar4,iVar8,uVar7,ar7);
      iVar8 = iVar9;
    }
    ar4[0xe] = 0;
  }
  else if ((char)ar5 == '\x05') {
    if (*(int *)(ar4[0xb] + iVar8) == 0) {
      *(int *)(ar4[0xb] + iVar8) = ar4[9];
      *(int *)(ar4[0x10] + iVar8) = ar4[0xf];
      if (ar4[6] == 0) {
        ar4[10] = ar4[9];
      }
      ar4[6] = ar4[6] + 1;
    }
  }
  else if ((char)ar5 == '\x06') {
    if ((*(int *)(ar4[0xb] + iVar8) != 0) && (ar4[0xe] == 0)) {
      iVar5 = *(int *)(ar4[0xb] + iVar8);
      *(int *)(ar4[0xb] + iVar8) = 0;
      iVar9 = ar4[6];
      ar4[6] = iVar9 + -1;
      if (iVar9 + -1 == 0) {
        ar4[10] = ar4[9];
      }
      else if (iVar5 == ar4[10]) {
        FUN_8c111342(ar4,iVar5,1,ar7,in_stack_ffffffdc);
      }
      *(int *)(ar4[0x10] + iVar8) = ar4[0xf];
    }
  }
  else if ((char)ar5 == '\a') {
    if (*(int *)(ar4[0xb] + iVar8) == 0) {
      *(int *)(ar4[0xb] + iVar8) = ar4[9];
      *(int *)(ar4[0x10] + iVar8) = ar4[0xf];
      ar4[6] = ar4[6] + 1;
    }
    uVar10 = FUN_8c11189a(ar4,ar6,ar7,ar7);
  }
  else if ((char)ar5 == -8) {
    if ((*(char *)((int)ar4 + 0x31) != '\0') && (ar4[6] != 0)) {
      bVar1 = false;
      iVar9 = ar4[0xe];
      iVar8 = 0;
      while (iVar5 = iVar9, iVar5 != 0) {
        if (*(int *)(iVar5 + 0xc) == ar6) {
          bVar1 = true;
        }
        iVar8 = iVar5;
        iVar9 = *(int *)(iVar5 + 0x10);
      }
      if (!bVar1) {
        *(int *)(ar6 + 4) = *(int *)(ar6 + 4) + 1;
        iVar9 = ar7;
        iVar5 = (**(code **)(*ar4 + 0x10))(*ar4,0x14,1,ar7);
        uVar7 = (**(code **)(*ar4 + 0x10))(*ar4,ar4[5] << 2,uVar7,iVar9);
        uVar6 = 0x80000000;
        *(undefined4 *)(iVar5 + 8) = uVar7;
        uVar3 = 0;
        if (ar4[5] != 0) {
          do {
            if (*(int *)(uVar3 * 4 + ar4[0xb]) == 0) {
              *(undefined4 *)(*(int *)(iVar5 + 8) + uVar3 * 4) = uVar6;
            }
            else if ((*(int *)(ar4[0xb] + uVar3 * 4) == ar4[9]) &&
                    (*(int *)(ar4[0x10] + uVar3 * 4) != ar4[0xf])) {
              *(int *)(*(int *)(iVar5 + 8) + uVar3 * 4) = ar4[2] + ar7;
            }
            else {
              if ((uint)ar4[9] < *(uint *)(ar4[0xb] + uVar3 * 4)) {
                iVar9 = libgcc_divide_helper_010468
                                  ((ar4[9] + ar4[4]) - *(int *)(ar4[0xb] + uVar3 * 4),
                                   (uint)*(ushort *)(ar4 + 3));
                piVar2 = extraout_r2;
              }
              else {
                piVar2 = (int *)(*(int *)(iVar5 + 8) + uVar3 * 4);
                iVar9 = libgcc_divide_helper_010468
                                  (ar4[9] - *(int *)(ar4[0xb] + uVar3 * 4),
                                   (uint)*(ushort *)(ar4 + 3));
              }
              *piVar2 = iVar9 + ar7;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)ar4[5]);
        }
        *(int *)(iVar5 + 4) = ar4[6];
        *(int *)(iVar5 + 0xc) = ar6;
        *(undefined4 *)(iVar5 + 0x10) = 0;
        if (iVar8 == 0) {
          ar4[0xe] = iVar5;
        }
        else {
          *(int *)(iVar8 + 0x10) = iVar5;
        }
      }
    }
  }
  else if ((char)ar5 == -1) {
    iVar8 = ar4[0xe];
    if (ar4[7] != 0) {
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[7],1,ar7);
    }
    if (ar4[0xb] != 0) {
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[0xb],uVar7,ar7);
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[0xd],uVar7,ar7);
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[0x10],uVar7,ar7);
    }
    while (iVar8 != 0) {
      iVar9 = *(int *)(iVar8 + 0x10);
      (**(code **)(*ar4 + 0x18))(*ar4,iVar8,uVar7,ar7);
      iVar8 = iVar9;
    }
    (**(code **)(*ar4 + 0x18))(*ar4,ar4,uVar7,ar7);
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}



/* FUN_8c1117e4 @ 8c1117e4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1117e4(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(uint *)(ar4 + 0x24) < *(uint *)(ar4 + 0x28)) {
    uVar3 = libgcc_divide_helper_010468
                      (*(int *)(ar4 + 0x28) - *(uint *)(ar4 + 0x24),(uint)*(ushort *)(ar4 + 0xc));
  }
  else {
    iVar1 = libgcc_divide_helper_01051c
                      (*(int *)(ar4 + 0x24) - *(int *)(ar4 + 0x28),(uint)*(ushort *)(ar4 + 0xc));
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
  int *ain0;
  int iVar3;
  uint ar6_00;
  
  if (ar6 != 0) {
    iVar3 = ar5 * 4;
    ar6_00 = ar6 * (uint)*(ushort *)(ar4 + 0xc);
    uVar2 = *(int *)(ar4 + 0x24) - *(int *)(*(int *)(ar4 + 0x2c) + iVar3);
    if (0x7fffffff < uVar2) {
      uVar2 = uVar2 + *(int *)(ar4 + 0x10);
    }
    if ((uVar2 == 0) && (*(int *)(*(int *)(ar4 + 0x40) + iVar3) == *(int *)(ar4 + 0x3c))) {
      uVar2 = *(uint *)(ar4 + 0x10);
    }
    if (uVar2 < ar6_00) {
      return 0;
    }
    if (ar6_00 == uVar2) {
      *(undefined1 *)(ar4 + 0x30) = 1;
    }
    ain0 = (int *)(*(int *)(ar4 + 0x2c) + iVar3);
    iVar1 = *(int *)(ar4 + 0x1c);
    uVar2 = (*ain0 - iVar1) - ar6_00;
    if (0x7fffffff < uVar2) {
      iVar1 = *(int *)(ar4 + 0x20);
    }
    *ain0 = iVar1 + uVar2;
    *(int *)(*(int *)(ar4 + 0x40) + iVar3) = *(int *)(*(int *)(ar4 + 0x40) + iVar3) - ar6;
    if (*(int *)(ar4 + 0x14) == 1) {
      *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar3);
    }
    else {
      FUN_8c111342(ar4,uVar2,ar6_00,ar6,ain0);
    }
  }
  return 1;
}



/* FUN_8c11194c @ 8c11194c callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c111aaa) */
/* WARNING: Removing unreachable block (ram,0x8c111a92) */
/* WARNING: Removing unreachable block (ram,0x8c1119aa) */
/* WARNING: Removing unreachable block (ram,0x8c111996) */
/* WARNING: Removing unreachable block (ram,0x8c111984) */
/* WARNING: Removing unreachable block (ram,0x8c111980) */
/* WARNING: Removing unreachable block (ram,0x8c111978) */
/* WARNING: Removing unreachable block (ram,0x8c111960) */
/* WARNING: Removing unreachable block (ram,0x8c111956) */
/* WARNING: Removing unreachable block (ram,0x8c111964) */
/* WARNING: Removing unreachable block (ram,0x8c11197e) */
/* WARNING: Removing unreachable block (ram,0x8c111982) */
/* WARNING: Removing unreachable block (ram,0x8c111988) */
/* WARNING: Removing unreachable block (ram,0x8c111998) */
/* WARNING: Removing unreachable block (ram,0x8c111a5e) */
/* WARNING: Removing unreachable block (ram,0x8c111aa8) */
/* WARNING: Removing unreachable block (ram,0x8c111ac0) */
/* WARNING: Unknown calling convention */

int * FUN_8c11194c(int *ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int a5;
  undefined8 in_dr0;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  
  fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar8 = '\0';
  FUN_8c120550(ar4,1,ar6,ar7);
  if (cVar8 == '\0') {
    fVar5 = 2.1474836e+09;
  }
  else {
    fVar5 = -NAN;
  }
  fVar4 = fVar3;
  if (fVar5 < fVar3) {
    fVar4 = fVar3 + -4.2949673e+09;
  }
  a5 = 2;
  iVar6 = (int)fVar4;
  FUN_8c120550(ar4,2,ar6,ar7);
  uVar7 = (uint)fVar3;
  if ((uVar7 & 0xffff) == 0xffff) {
    uVar7 = (uint)(short)ar4[3];
  }
  if (ar4[7] != 0) {
    a5 = ar4[7];
    (**(code **)(*ar4 + 0x18))(*ar4,a5,ar6,ar7);
  }
  if ((uVar7 & 0xffff) == 0) {
    ar4[7] = 0;
  }
  else {
    ar6 = uVar7 & 0xffff;
    a5 = iVar6;
    iVar1 = (**(code **)(*ar4 + 0x14))(*ar4,iVar6,ar6,ar7);
    ar4[7] = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*ar4 + 0x18))(*ar4,ar4,ar6,ar7);
      FUN_8c1204c4(ar4,2,ar6,ar7);
      return (int *)0;
    }
  }
  ar4[2] = iVar6;
  iVar6 = (uVar7 & 0xffff) * iVar6;
  *(short *)(ar4 + 3) = (short)uVar7;
  ar4[4] = iVar6;
  ar4[8] = ar4[7] + iVar6;
  FUN_8c112234(ar4,a5,ar6,ar7);
  FUN_8c120550(ar4,3,ar6,ar7);
  if (((int)fVar3 & 0xffU) == 0) {
    ar4[6] = 0;
    uVar7 = 0;
    if (ar4[5] != 0) {
      do {
        uVar2 = uVar7 + 1;
        *(undefined4 *)(uVar7 * 4 + ar4[0xb]) = 0;
        uVar7 = uVar2;
      } while (uVar2 < (uint)ar4[5]);
    }
  }
  else {
    ar4[6] = ar4[5];
  }
  FUN_8c120550(ar4,4,ar6,ar7);
  *(ushort *)((int)ar4 + 0xe) = (ushort)(int)fVar3 & 0xff;
  FUN_8c120550(ar4,5,ar6,ar7);
  *(char *)((int)ar4 + 0x31) = (char)(int)fVar3;
  return ar4;
}



/* FUN_8c111adc @ 8c111adc callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c111c78) */
/* WARNING: Removing unreachable block (ram,0x8c111b58) */
/* WARNING: Removing unreachable block (ram,0x8c111b32) */
/* WARNING: Removing unreachable block (ram,0x8c111b24) */
/* WARNING: Removing unreachable block (ram,0x8c111b20) */
/* WARNING: Removing unreachable block (ram,0x8c111b18) */
/* WARNING: Removing unreachable block (ram,0x8c111afa) */
/* WARNING: Removing unreachable block (ram,0x8c111ae8) */
/* WARNING: Removing unreachable block (ram,0x8c111b04) */
/* WARNING: Removing unreachable block (ram,0x8c111b1e) */
/* WARNING: Removing unreachable block (ram,0x8c111b22) */
/* WARNING: Removing unreachable block (ram,0x8c111b28) */
/* WARNING: Removing unreachable block (ram,0x8c111b46) */
/* WARNING: Removing unreachable block (ram,0x8c111c1e) */
/* WARNING: Removing unreachable block (ram,0x8c111cae) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c111adc(int *ar4,int ar5,uint ar6,uint ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint a6;
  uint a7;
  int a5;
  undefined8 in_dr0;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  short in_stack_00000000;
  char in_stack_00000004;
  
  fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar7 = '\0';
  a6 = ar6;
  a7 = ar7;
  a5 = ar5;
  if (ar5 == 0) {
    ar5 = 1;
    FUN_8c120550(ar4,1,ar6,ar7);
    if (cVar7 == '\0') {
      fVar6 = 2.1474836e+09;
    }
    else {
      fVar6 = -NAN;
    }
    fVar5 = fVar4;
    if (fVar6 < fVar4) {
      fVar5 = fVar4 + -4.2949673e+09;
    }
    a5 = (int)fVar5;
  }
  if (ar6 == 0) {
    ar5 = 2;
    FUN_8c120550(ar4,2,a6,a7);
    ar6 = (uint)fVar4;
  }
  if (ar4[7] != 0) {
    ar5 = ar4[7];
    (**(code **)(*ar4 + 0x18))(*ar4,ar5,a6,a7);
  }
  if ((ar6 & 0xffff) == 0) {
    ar4[7] = 0;
  }
  else {
    a6 = ar6 & 0xffff;
    ar5 = a5;
    iVar1 = (**(code **)(*ar4 + 0x14))(*ar4,a5,a6,a7);
    ar4[7] = iVar1;
    if (iVar1 == 0) {
      FUN_8c1204c4(ar4,2,a6,a7);
      return 0;
    }
  }
  ar4[2] = a5;
  *(short *)(ar4 + 3) = (short)ar6;
  ar4[4] = (ar6 & 0xffff) * a5;
  ar4[9] = ar4[7];
  ar4[8] = ar4[7] + ar4[4];
  FUN_8c112234(ar4,ar5,a6,a7);
  if ((ar7 & 0xff) == 0xff) {
    FUN_8c120550(ar4,3,a6,a7);
    ar7 = (uint)fVar4;
  }
  if ((ar7 & 0xff) == 0) {
    ar4[6] = 0;
    uVar2 = 0;
    if (ar4[5] != 0) {
      do {
        uVar3 = uVar2 + 1;
        *(undefined4 *)(uVar2 * 4 + ar4[0xb]) = 0;
        uVar2 = uVar3;
      } while (uVar3 < (uint)ar4[5]);
    }
  }
  else {
    ar4[6] = ar4[5];
  }
  if (in_stack_00000000 == -1) {
    FUN_8c120550(ar4,4,a6,a7);
    in_stack_00000000 = (short)(int)fVar4;
  }
  *(short *)((int)ar4 + 0xe) = in_stack_00000000;
  if (in_stack_00000004 == -1) {
    FUN_8c120550(ar4,5,a6,a7);
    *(char *)((int)ar4 + 0x31) = (char)(int)fVar4;
  }
  else {
    *(char *)((int)ar4 + 0x31) = in_stack_00000004;
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
  int ar6_00;
  uint ar5_00;
  int iVar5;
  
  iVar4 = ar5 * 4;
  ar5_00 = *(uint *)(*(int *)(ar4 + 0x2c) + iVar4);
  if (*(int *)(*(int *)(ar4 + 0x40) + iVar4) == *(int *)(ar4 + 0x3c)) {
    if ((*(int *)(ar4 + 0x38) != 0) && (ar5_00 != 0)) {
      FUN_8c111208(ar4,ar5,0,ar7);
    }
  }
  else if (ar7 <= *(uint *)(ar4 + 8)) {
    iVar5 = ar7 * *(ushort *)(ar4 + 0xc);
    uVar1 = ar5_00;
    iVar2 = iVar5;
    uVar3 = ar7;
    if (ar5_00 < *(uint *)(ar4 + 0x24)) {
      if (iVar5 + ar5_00 <= *(uint *)(ar4 + 0x24)) {
        memmove(ar6,ar5_00,iVar5,ar7);
        *(int *)(*(int *)(ar4 + 0x2c) + iVar4) = *(int *)(*(int *)(ar4 + 0x2c) + iVar4) + iVar5;
LAB_8c111f76:
        *(uint *)(*(int *)(ar4 + 0x40) + iVar4) = *(int *)(*(int *)(ar4 + 0x40) + iVar4) + ar7;
        if (*(uint *)(ar4 + 0x28) == ar5_00) {
          FUN_8c111342(ar4,uVar1,iVar2,uVar3,ar5);
        }
        if (*(int *)(ar4 + 0x38) != 0) {
          FUN_8c111208(ar4,ar5,ar7,uVar3);
        }
        return 1;
      }
    }
    else if ((ar5_00 + iVar5) - *(int *)(ar4 + 0x10) <= *(uint *)(ar4 + 0x24)) {
      if (*(uint *)(ar4 + 0x20) < iVar5 + ar5_00) {
        ar6_00 = *(int *)(ar4 + 0x20) - ar5_00;
        memmove(ar6,ar5_00,ar6_00,ar7);
        iVar5 = iVar5 - ar6_00;
        uVar1 = *(uint *)(ar4 + 0x1c);
        iVar2 = iVar5;
        memmove(ar6 + ar6_00,uVar1,iVar5,uVar3);
        *(int *)(*(int *)(ar4 + 0x2c) + iVar4) = iVar5 + *(int *)(ar4 + 0x1c);
      }
      else {
        memmove(ar6,ar5_00,iVar5,ar7);
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

/* WARNING: Unknown calling convention */

int * FUN_8c112410(int *ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  ulonglong *puVar2;
  uint uVar3;
  uint in_fr5;
  ulonglong uVar4;
  uint uVar5;
  char cVar6;
  
  cVar6 = '\0';
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
    puVar2 = (ulonglong *)ar4[3];
    if (cVar6 == '\0') {
      uVar4 = (ulonglong)in_fr5;
    }
    else {
      uVar4 = 0x8c1129e400000000;
    }
    if (uVar5 != 0) {
      do {
        uVar3 = uVar3 + 1;
        if (cVar6 == '\0') {
          *(int *)puVar2 = (int)(uVar4 >> 0x20);
        }
        else {
          *puVar2 = uVar4;
        }
        puVar2 = (ulonglong *)((int)puVar2 + 4);
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
  int iVar1;
  int unaff_r12;
  int *unaff_r13;
  int *unaff_r14;
  undefined4 in_PR;
  
  *unaff_r14 = *unaff_r13;
  unaff_r14[1] = unaff_r13[1];
  unaff_r14[2] = *unaff_r13 * unaff_r13[1];
  iVar1 = (**(code **)(unaff_r12 + 0x10))(unaff_r12,*unaff_r14 * unaff_r14[1] * 4,ar6,ar7);
  unaff_r14[3] = iVar1;
  if (iVar1 == 0) {
    (**(code **)(unaff_r12 + 0x18))(unaff_r12,unaff_r14,ar6,ar7);
    unaff_r14 = (int *)0x0;
  }
  else {
    *(undefined1 *)(unaff_r14 + 5) = 1;
    unaff_r14[4] = *unaff_r14 * unaff_r14[1] * 4 + unaff_r14[3];
    FUN_8c1129e4(unaff_r14,unaff_r13,ar6,ar7,in_PR);
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

/* WARNING: Removing unreachable block (ram,0x8c112674) */
/* WARNING: Removing unreachable block (ram,0x8c112668) */
/* WARNING: Removing unreachable block (ram,0x8c112660) */
/* WARNING: Removing unreachable block (ram,0x8c11266e) */
/* WARNING: Removing unreachable block (ram,0x8c11267c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c112658(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *(float **)(ar4 + 0xc);
  uVar1 = 1;
  fVar3 = *pfVar2;
  if (1 < *(uint *)(ar4 + 8)) {
    do {
      pfVar2 = pfVar2 + 1;
      uVar1 = uVar1 + 1;
      if (fVar3 < *pfVar2) {
        fVar3 = *pfVar2;
      }
    } while (uVar1 < *(uint *)(ar4 + 8));
  }
  return ain0;
}



/* FUN_8c112680 @ 8c112680 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c11271a) */
/* WARNING: Removing unreachable block (ram,0x8c11270e) */
/* WARNING: Removing unreachable block (ram,0x8c1126de) */
/* WARNING: Removing unreachable block (ram,0x8c1126d2) */
/* WARNING: Removing unreachable block (ram,0x8c1126c2) */
/* WARNING: Removing unreachable block (ram,0x8c1126b6) */
/* WARNING: Removing unreachable block (ram,0x8c112698) */
/* WARNING: Removing unreachable block (ram,0x8c11268a) */
/* WARNING: Removing unreachable block (ram,0x8c1126ac) */
/* WARNING: Removing unreachable block (ram,0x8c1126ba) */
/* WARNING: Removing unreachable block (ram,0x8c1126ce) */
/* WARNING: Removing unreachable block (ram,0x8c1126d6) */
/* WARNING: Removing unreachable block (ram,0x8c1126ee) */
/* WARNING: Removing unreachable block (ram,0x8c11271c) */
/* WARNING: Removing unreachable block (ram,0x8c112726) */
/* WARNING: Unknown calling convention */

undefined8 * FUN_8c112680(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  float *a5;
  uint uVar5;
  float *pfVar6;
  undefined8 uVar7;
  double dVar8;
  float fVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  
  uVar5 = 0;
  puVar2 = &DAT_8c112824;
  iVar4 = ar4[1];
  iVar3 = *ar4;
  a5 = (float *)ar4[3];
  pfVar6 = a5;
  if (iVar3 * iVar4 != 0) {
    do {
      uVar7 = 0x4000000000000000;
      thunk_FUN_8c013cd8(ar4,a5,ar6,ar7);
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      thunk_FUN_8c013dfc(ar4,a5,ar6,ar7);
      uVar5 = uVar5 + 1;
      cVar1 = (char)((((uint)bVar10 << 0x12 | (uint)bVar11 << 0x13 | (uint)bVar12 << 0x14) &
                     0x100000) >> 0x14);
      if (cVar1 == '\0') {
        dVar8 = (double)CONCAT44(0x3fe00000,(int)uVar7);
      }
      else {
        dVar8 = -1.5698269832574723e-250;
      }
      puVar2 = (undefined8 *)&DAT_8c112830;
      if (cVar1 == '\0') {
        dVar8 = (double)((ulonglong)dVar8 & 0xffffffff00000000);
      }
      if (cVar1 == '\0') {
        fVar9 = *pfVar6;
      }
      else {
        fVar9 = (float)((ulonglong)*(undefined8 *)pfVar6 >> 0x20);
      }
      *pfVar6 = fVar9 - (float)((double)(float)((ulonglong)uVar7 >> 0x20) * dVar8);
      pfVar6 = pfVar6 + 1;
    } while (uVar5 < (uint)(iVar3 * iVar4));
  }
  return puVar2;
}



/* FUN_8c112734 @ 8c112734 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c11292e) */
/* WARNING: Removing unreachable block (ram,0x8c1127de) */
/* WARNING: Removing unreachable block (ram,0x8c1127e4) */
/* WARNING: Removing unreachable block (ram,0x8c112846) */
/* WARNING: Removing unreachable block (ram,0x8c1127dc) */
/* WARNING: Removing unreachable block (ram,0x8c112812) */
/* WARNING: Removing unreachable block (ram,0x8c1128c2) */
/* WARNING: Removing unreachable block (ram,0x8c1127c6) */
/* WARNING: Removing unreachable block (ram,0x8c112896) */
/* WARNING: Removing unreachable block (ram,0x8c1127cc) */
/* WARNING: Removing unreachable block (ram,0x8c1128ee) */
/* WARNING: Removing unreachable block (ram,0x8c112878) */
/* WARNING: Removing unreachable block (ram,0x8c1127b4) */
/* WARNING: Removing unreachable block (ram,0x8c1128fc) */
/* WARNING: Removing unreachable block (ram,0x8c1128be) */
/* WARNING: Removing unreachable block (ram,0x8c112886) */
/* WARNING: Removing unreachable block (ram,0x8c11284a) */
/* WARNING: Removing unreachable block (ram,0x8c1127ca) */
/* WARNING: Removing unreachable block (ram,0x8c1127b2) */
/* WARNING: Removing unreachable block (ram,0x8c1127a4) */
/* WARNING: Removing unreachable block (ram,0x8c11278a) */
/* WARNING: Removing unreachable block (ram,0x8c112748) */
/* WARNING: Removing unreachable block (ram,0x8c112744) */
/* WARNING: Removing unreachable block (ram,0x8c112742) */
/* WARNING: Removing unreachable block (ram,0x8c112746) */
/* WARNING: Removing unreachable block (ram,0x8c112774) */
/* WARNING: Removing unreachable block (ram,0x8c11279a) */
/* WARNING: Removing unreachable block (ram,0x8c1127aa) */
/* WARNING: Removing unreachable block (ram,0x8c1127bc) */
/* WARNING: Removing unreachable block (ram,0x8c112840) */
/* WARNING: Removing unreachable block (ram,0x8c11286a) */
/* WARNING: Removing unreachable block (ram,0x8c1128ac) */
/* WARNING: Removing unreachable block (ram,0x8c1128ea) */
/* WARNING: Removing unreachable block (ram,0x8c1127ae) */
/* WARNING: Removing unreachable block (ram,0x8c1127da) */
/* WARNING: Removing unreachable block (ram,0x8c1128b2) */
/* WARNING: Removing unreachable block (ram,0x8c1127c2) */
/* WARNING: Removing unreachable block (ram,0x8c112894) */
/* WARNING: Removing unreachable block (ram,0x8c112842) */
/* WARNING: Removing unreachable block (ram,0x8c1127d6) */
/* WARNING: Removing unreachable block (ram,0x8c112904) */
/* WARNING: Removing unreachable block (ram,0x8c1128f0) */
/* WARNING: Removing unreachable block (ram,0x8c1128c0) */
/* WARNING: Removing unreachable block (ram,0x8c1128b4) */
/* WARNING: Removing unreachable block (ram,0x8c11292a) */
/* WARNING: Removing unreachable block (ram,0x8c11292c) */
/* WARNING: Removing unreachable block (ram,0x8c112930) */
/* WARNING: Removing unreachable block (ram,0x8c112898) */
/* WARNING: Removing unreachable block (ram,0x8c1127e0) */
/* WARNING: Removing unreachable block (ram,0x8c11284c) */
/* WARNING: Removing unreachable block (ram,0x8c1128ba) */
/* WARNING: Removing unreachable block (ram,0x8c112844) */
/* WARNING: Removing unreachable block (ram,0x8c112880) */
/* WARNING: Removing unreachable block (ram,0x8c1128f4) */
/* WARNING: Removing unreachable block (ram,0x8c1128c6) */
/* WARNING: Removing unreachable block (ram,0x8c1128f6) */
/* WARNING: Removing unreachable block (ram,0x8c1127e6) */
/* WARNING: Removing unreachable block (ram,0x8c112900) */
/* WARNING: Removing unreachable block (ram,0x8c112804) */
/* WARNING: Removing unreachable block (ram,0x8c1128c8) */
/* WARNING: Removing unreachable block (ram,0x8c11289a) */
/* WARNING: Removing unreachable block (ram,0x8c1128b8) */
/* WARNING: Removing unreachable block (ram,0x8c1128bc) */
/* WARNING: Removing unreachable block (ram,0x8c1128f8) */
/* WARNING: Removing unreachable block (ram,0x8c1128fa) */
/* WARNING: Removing unreachable block (ram,0x8c112902) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c112734(float *ar4,float *ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  float fVar2;
  float *ain0;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *ar5_00;
  float ar6_00;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar15;
  undefined8 in_xd2;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar14;
  
  fVar3 = ar4[1];
  fVar2 = *ar4;
  ar6_00 = (float)(ar6 + 1);
  fVar4 = ar4[3];
  ain0 = (float *)((int)ar5[2] * 4 + (int)ar5[3]);
  pfVar5 = ar4;
  ar5_00 = ar5;
  fVar8 = ar6_00;
  if ((uint)ar6_00 < (uint)ar4[1]) {
    do {
      pfVar7 = (float *)((int)fVar8 * (int)*ar4 * 4 + (int)ar4[3]);
      pfVar9 = pfVar7 + (int)fVar8;
      fVar15 = *pfVar9;
      pfVar6 = pfVar7 + -(int)*ar4;
      fVar13 = pfVar9[-1];
      uVar14 = CONCAT44(fVar15,fVar13);
      fVar11 = fVar13;
      if (fVar13 <= 0.0) {
        fVar11 = -fVar13;
      }
      fVar10 = fVar15;
      if (fVar15 <= 0.0) {
        fVar10 = -fVar15;
      }
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      if (fVar10 <= fVar11) {
        fVar13 = -fVar15 / fVar13;
        fVar11 = fVar13;
        FUN_8c11fbb6(pfVar5,ar5_00,ar6_00,ar7,ain0);
        cVar1 = (char)((((uint)bVar16 << 0x12 | (uint)bVar17 << 0x13 | (uint)bVar18 << 0x14) &
                       0x100000) >> 0x14);
        if (cVar1 == '\0') {
          fVar15 = 1.0;
        }
        else {
          fVar15 = 0.0;
        }
        uVar12 = in_xd2;
        if (cVar1 == '\0') {
          uVar12 = CONCAT44(fVar15 / fVar13,fVar15 / fVar13);
        }
        fVar13 = (float)((ulonglong)uVar12 >> 0x20);
        fVar11 = (float)uVar12 * fVar11;
      }
      else {
        fVar15 = -fVar13 / fVar15;
        fVar13 = fVar15;
        FUN_8c11fbb6(pfVar5,ar5_00,ar6_00,ar7,ain0);
        cVar1 = (char)((((uint)bVar16 << 0x12 | (uint)bVar17 << 0x13 | (uint)bVar18 << 0x14) &
                       0x100000) >> 0x14);
        if (cVar1 == '\0') {
          fVar11 = 1.0;
        }
        else {
          fVar11 = -INFINITY;
        }
        uVar12 = in_xd2;
        if (cVar1 == '\0') {
          uVar12 = CONCAT44(fVar11 / fVar15,fVar11 / fVar15);
        }
        fVar11 = (float)uVar12;
        fVar13 = (float)((ulonglong)uVar12 >> 0x20) * fVar13;
      }
      fVar15 = 1.4013e-45;
      if (1 < (uint)fVar8) {
        do {
          fVar10 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          fVar15 = (float)((int)fVar15 + 1);
          *pfVar6 = fVar10;
          pfVar6 = pfVar6 + 1;
        } while ((uint)fVar15 < (uint)fVar8);
      }
      *pfVar6 = (float)uVar14 * fVar13 - (float)((ulonglong)uVar14 >> 0x20) * fVar11;
      for (pfVar5 = pfVar9 + -1 + (int)*ar4;
          pfVar5 < (float *)((int)fVar2 * (int)fVar3 * 4 + (int)fVar4); pfVar5 = pfVar5 + (int)*ar4)
      {
        fVar15 = *pfVar5;
        *pfVar5 = (float)*(undefined8 *)pfVar5 * fVar13 -
                  (float)((ulonglong)*(undefined8 *)pfVar5 >> 0x20) * fVar11;
        pfVar5[1] = fVar11 * fVar15 + pfVar5[1] * fVar13;
      }
      for (pfVar5 = (float *)((int)fVar8 * 4 + (int)ar5[3]); pfVar5 < ain0;
          pfVar5 = pfVar5 + (int)*ar5) {
        ar5_00 = pfVar5 + -1;
        fVar15 = *ar5_00;
        *ar5_00 = fVar15 * fVar13 - *pfVar5 * fVar11;
        *pfVar5 = fVar11 * fVar15 + *pfVar5 * fVar13;
      }
      fVar8 = (float)((int)fVar8 + 1);
    } while ((uint)fVar8 < (uint)ar4[1]);
  }
  ar4[1] = (float)((int)ar4[1] + -1);
  return 0;
}



/* FUN_8c112958 @ 8c112958 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1129a6) */
/* WARNING: Removing unreachable block (ram,0x8c1129a4) */
/* WARNING: Removing unreachable block (ram,0x8c1129be) */
/* WARNING: Removing unreachable block (ram,0x8c11299a) */
/* WARNING: Removing unreachable block (ram,0x8c11296c) */
/* WARNING: Removing unreachable block (ram,0x8c112984) */
/* WARNING: Removing unreachable block (ram,0x8c1129a8) */
/* WARNING: Removing unreachable block (ram,0x8c1129c8) */
/* WARNING: Removing unreachable block (ram,0x8c1129c4) */
/* WARNING: Removing unreachable block (ram,0x8c112988) */
/* WARNING: Removing unreachable block (ram,0x8c1129c2) */
/* WARNING: Removing unreachable block (ram,0x8c1129aa) */
/* WARNING: Removing unreachable block (ram,0x8c1129ba) */
/* WARNING: Removing unreachable block (ram,0x8c1129c6) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c112958(uint *ar4,int ar5,int ar6,undefined4 ar7)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  
  pfVar8 = (float *)ar4[3];
  pfVar5 = *(float **)(ar5 + 0xc);
  uVar4 = 0;
  pfVar3 = *(float **)(ar6 + 0xc);
  while (bVar12 = uVar4 < ar4[1], uVar4 = uVar4 + 1, bVar12) {
    fVar11 = *pfVar3;
    pfVar7 = pfVar3 + 1;
    pfVar8 = pfVar8 + uVar4;
    pfVar1 = pfVar7;
    uVar2 = uVar4;
    pfVar6 = pfVar8;
    if (uVar4 < *ar4) {
      do {
        uVar2 = uVar2 + 1;
        fVar9 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        fVar10 = *pfVar1;
        pfVar1 = pfVar1 + 1;
        fVar11 = fVar9 * fVar10 + fVar11;
      } while (uVar2 < *ar4);
    }
    fVar9 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    *pfVar3 = *pfVar3 - fVar11 * fVar9;
    uVar2 = uVar4;
    pfVar3 = pfVar7;
    if (uVar4 < *ar4) {
      do {
        uVar2 = uVar2 + 1;
        fVar10 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        *pfVar7 = *pfVar7 - fVar11 * fVar9 * fVar10;
        pfVar7 = pfVar7 + 1;
      } while (uVar2 < *ar4);
    }
  }
  return 0;
}



/* FUN_8c1129e4 @ 8c1129e4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1129f2) */
/* WARNING: Removing unreachable block (ram,0x8c1129f8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1129e4(int ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  uVar3 = *(uint *)(ar4 + 8);
  puVar4 = *(undefined4 **)(ar4 + 0xc);
  uVar1 = 0;
  puVar2 = *(undefined4 **)(ar5 + 0xc);
  if (uVar3 != 0) {
    do {
      uVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      uVar1 = uVar1 + 1;
      *puVar4 = uVar5;
      puVar4 = puVar4 + 1;
    } while (uVar1 < uVar3);
  }
  return ain0;
}



/* FUN_8c112a02 @ 8c112a02 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c112a10) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c112a02(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 in_fr4;
  
  uVar2 = *(uint *)(ar4 + 8);
  puVar3 = *(undefined4 **)(ar4 + 0xc);
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      uVar1 = uVar1 + 1;
      *puVar3 = in_fr4;
      puVar3 = puVar3 + 1;
    } while (uVar1 < uVar2);
  }
  return ain0;
}



/* FUN_8c112a20 @ 8c112a20 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c112a2a) */
/* WARNING: Removing unreachable block (ram,0x8c112a46) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c112a20(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float extraout_fr0;
  
  FUN_8c120550(ar4,0x10,ar6,ar7);
  *(uint *)(ar4 + 0x138) = ar5;
  *(uint *)(ar4 + 0x140) = ar5;
  uVar1 = (int)extraout_fr0 & 0xffff;
  if (*(char *)(ar4 + 0xf9) == '\0') {
    if (uVar1 < ar5) {
      uVar1 = ar5;
    }
    *(uint *)(ar4 + 0x13c) = uVar1;
  }
  else {
    *(undefined4 *)(ar4 + 0x13c) = 1;
  }
  if ((ar5 < 2) && (*(char *)(ar4 + 0xf8) == '\0')) {
    if (*(code **)(ar4 + 0x130) == FUN_8c117bac) {
      return 0;
    }
    *(code **)(ar4 + 0x130) = FUN_8c117bac;
    *(undefined4 *)(ar4 + 0x134) = *(undefined4 *)(ar4 + 0x130);
    if (*(int *)(ar4 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(ar4 + 0xb0) != 0) {
      return 0;
    }
    uVar1 = FUN_8c115732(ar4,1,ar6,ar7);
  }
  else {
    if (*(code **)(ar4 + 0x130) == FUN_8c11617a) {
      return 0;
    }
    *(code **)(ar4 + 0x130) = FUN_8c11617a;
    *(undefined4 *)(ar4 + 0x134) = *(undefined4 *)(ar4 + 0x130);
    if (*(int *)(ar4 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(ar4 + 0xa8) != 0) {
      return 0;
    }
    uVar1 = FUN_8c1155a0(ar4,1,ar6,ar7);
  }
  if ((uVar1 & 0xff) == 0) {
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
  int ar6_00;
  uint uVar5;
  int iVar6;
  int a4;
  
  iVar6 = ar4[0x17];
  a4 = *ar4;
  iVar2 = (**(code **)(a4 + 0x10))(a4,(iVar6 + 1) * 4,ar6,ar7);
  if (iVar2 != 0) {
    if (iVar6 != 0) {
      ar6_00 = iVar6 << 2;
      (*(code *)PTR_memmove_8c112c1c)(iVar2,ar4[0x16],ar6_00,ar7);
      (**(code **)(a4 + 0x18))(a4,ar4[0x16],ar6_00,ar7);
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
  int iVar1;
  int iVar2;
  int iVar3;
  code *extraout_r3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = ar4[0x22];
  iVar6 = *ar4;
  iVar1 = (**(code **)(iVar6 + 0x10))(iVar6,(iVar5 + 1) * 4,ar6,ar7);
  if (iVar1 != 0) {
    if (iVar5 != 0) {
      ar6 = iVar5 << 2;
      memmove(iVar1,ar4[0x21],ar6,ar7);
      (**(code **)(iVar6 + 0x18))(iVar6,ar4[0x21],ar6,ar7);
    }
    ar4[0x21] = iVar1;
    iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0x18);
    iVar1 = (*extraout_r3)(iVar6,iVar1 * 0x18,ar6,ar7);
    if (iVar1 != 0) {
      iVar6 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0x18);
      if (ar5 == 0) {
        ar4[0x23] = iVar1;
        ar4[0x20] = 0;
      }
      else {
        *(int *)(ar5 + 0x10) = iVar1;
      }
      uVar4 = 0;
      if (iVar6 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(iVar2 + iVar1 + 0x10) = iVar3 * 0x18 + iVar1;
        } while (uVar4 < iVar6 - 1U);
      }
      *(undefined4 *)(uVar4 * 0x18 + iVar1 + 0x10) = 0;
      *(int *)(ar4[0x21] + iVar5 * 4) = iVar1;
      ar4[0x22] = iVar5 + 1;
      return iVar1;
    }
  }
  FUN_8c1204c4(ar4,2,ar6,ar7);
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
  iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x1e4),0x18);
  uVar7 = uVar4;
  if (uVar4 < *(uint *)(ar4 + 0x88)) {
    do {
      iVar5 = *(int *)(*(int *)(ar4 + 0x84) + uVar7 * 4);
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
    } while (uVar7 < *(uint *)(ar4 + 0x88));
  }
  if (uVar4 != 0) {
    *(uint *)(uVar4 + 0x10) = uVar6;
  }
  *(undefined4 *)(ar4 + 0x8c) = **(undefined4 **)(ar4 + 0x84);
  *(uint *)(ar4 + 0x80) = uVar6;
  return 0;
}



/* FUN_8c112f48 @ 8c112f48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112f48(int ar4,uint ar5,undefined4 ar6,uint ar7)

{
  int in_r0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(in_r0 + ar4),0x18);
  uVar6 = ar5;
  if (ar5 < *(uint *)(ar4 + 0x88)) {
    do {
      iVar5 = *(int *)(*(int *)(ar4 + 0x84) + uVar6 * 4);
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
    } while (uVar6 < *(uint *)(ar4 + 0x88));
  }
  if (ar5 != 0) {
    *(uint *)(ar5 + 0x10) = ar7;
  }
  *(undefined4 *)(ar4 + 0x8c) = **(undefined4 **)(ar4 + 0x84);
  *(uint *)(ar4 + 0x80) = ar7;
  return 0;
}



/* FUN_8c112fd8 @ 8c112fd8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c112fd8(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *extraout_r3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = ar4[0x44];
  iVar6 = *ar4;
  iVar1 = (**(code **)(iVar6 + 0x10))(iVar6,(iVar5 + 1) * 4,ar6,ar7);
  if (iVar1 != 0) {
    if (iVar5 != 0) {
      ar6 = iVar5 << 2;
      memmove(iVar1,ar4[0x43],ar6,ar7);
      (**(code **)(iVar6 + 0x18))(iVar6,ar4[0x43],ar6,ar7);
    }
    ar4[0x43] = iVar1;
    iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0x18);
    iVar1 = (*extraout_r3)(iVar6,iVar1 * 0x18,ar6,ar7);
    if (iVar1 != 0) {
      if (ar5 != 0) {
        iVar6 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0x18);
        *(int *)(ar5 + 4) = iVar1;
        uVar4 = 0;
        if (iVar6 != 1) {
          do {
            iVar3 = uVar4 + 1;
            iVar2 = uVar4 * 0x18;
            uVar4 = uVar4 + 1;
            *(int *)(iVar2 + iVar1 + 4) = iVar3 * 0x18 + iVar1;
          } while (uVar4 < iVar6 - 1U);
        }
        *(undefined4 *)(uVar4 * 0x18 + iVar1 + 4) = 0;
      }
      *(int *)(ar4[0x43] + iVar5 * 4) = iVar1;
      ar4[0x44] = iVar5 + 1;
      return iVar1;
    }
  }
  FUN_8c1204c4(ar4,2,ar6,ar7);
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

undefined4 FUN_8c11318e(int *ar4,int *ar5,int ar6,undefined4 ar7)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  code *extraout_r3;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = *(ushort *)(ar4 + 0x47);
  iVar9 = *ar4;
  uVar8 = (uint)uVar1;
  iVar3 = (**(code **)(iVar9 + 0x10))(iVar9,(uVar8 + 1) * 4,0);
  if (iVar3 != 0) {
    if (uVar8 != 0) {
      ar6 = uVar8 << 2;
      memmove(iVar3,ar4[0x46],ar6,ar7);
      (**(code **)(iVar9 + 0x18))(iVar9,ar4[0x46]);
    }
    ar4[0x46] = iVar3;
    iVar3 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0xc);
    piVar4 = (int *)(*extraout_r3)(iVar9,iVar3 * 0xc);
    if (piVar4 != (int *)0x0) {
      iVar3 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0xc);
      uVar7 = iVar3 - 1;
      if (ar5 != (int *)0x0) {
        *ar5 = (int)piVar4;
        piVar4[1] = (int)ar5;
      }
      uVar10 = 0;
      piVar6 = piVar4;
      piVar2 = piVar4;
      if (uVar7 != 0) {
        do {
          uVar10 = uVar10 + 1;
          *piVar6 = (int)(piVar2 + 3);
          piVar2[4] = (int)piVar6;
          piVar6 = piVar6 + 3;
          piVar2 = piVar2 + 3;
        } while (uVar10 < uVar7);
      }
      piVar4[uVar7 * 3] = 0;
      *(int **)(ar4[0x46] + uVar8 * 4) = piVar4;
      *(ushort *)(ar4 + 0x47) = uVar1 + 1;
      if (ar4[0x49] == 0) {
        ar4[0x49] = (int)piVar4;
      }
      ar4[0x48] = (int)(piVar4 + uVar7 * 3);
      return 0x120;
    }
  }
  uVar5 = FUN_8c1204c4(ar4,2,ar6,ar7);
  return uVar5;
}



/* FUN_8c11319e @ 8c11319e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11319e(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7,int ain0)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  code *extraout_r3;
  int *piVar6;
  uint uVar7;
  int *unaff_r10;
  uint uVar8;
  int a4;
  uint uVar9;
  int *unaff_r14;
  
  uVar1 = *(ushort *)(ain0 + (int)unaff_r14);
  a4 = *unaff_r14;
  uVar8 = (uint)uVar1;
  iVar3 = (**(code **)(a4 + 0x10))(a4,(uVar8 + 1) * 4,ar6,ar7);
  if (iVar3 != 0) {
    if (uVar8 != 0) {
      ar6 = uVar8 << 2;
      memmove(iVar3,unaff_r14[0x46],ar6,ar7);
      (**(code **)(a4 + 0x18))(a4,unaff_r14[0x46],ar6,ar7);
    }
    unaff_r14[0x46] = iVar3;
    iVar3 = libgcc_divide_helper_01051c((uint)*(ushort *)(unaff_r14 + 0x79),0xc);
    piVar4 = (int *)(*extraout_r3)(a4,iVar3 * 0xc,ar6,ar7);
    if (piVar4 != (int *)0x0) {
      iVar3 = libgcc_divide_helper_01051c((uint)*(ushort *)(unaff_r14 + 0x79),0xc);
      uVar7 = iVar3 - 1;
      if (unaff_r10 != (int *)0x0) {
        *unaff_r10 = (int)piVar4;
        piVar4[1] = (int)unaff_r10;
      }
      uVar9 = 0;
      piVar6 = piVar4;
      piVar2 = piVar4;
      if (uVar7 != 0) {
        do {
          uVar9 = uVar9 + 1;
          *piVar6 = (int)(piVar2 + 3);
          piVar2[4] = (int)piVar6;
          piVar6 = piVar6 + 3;
          piVar2 = piVar2 + 3;
        } while (uVar9 < uVar7);
      }
      piVar4[uVar7 * 3] = 0;
      *(int **)(unaff_r14[0x46] + uVar8 * 4) = piVar4;
      *(ushort *)(unaff_r14 + 0x47) = uVar1 + 1;
      if (unaff_r14[0x49] == 0) {
        unaff_r14[0x49] = (int)piVar4;
      }
      unaff_r14[0x48] = (int)(piVar4 + uVar7 * 3);
      return 0x120;
    }
  }
  uVar5 = FUN_8c1204c4(unaff_r14,2,ar6,ar7);
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
  iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x1e4),0x18);
  uVar8 = uVar4;
  if (uVar4 < *(uint *)(ar4 + 0x110)) {
    do {
      iVar7 = *(int *)(*(int *)(ar4 + 0x10c) + uVar8 * 4);
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
    } while (uVar8 < *(uint *)(ar4 + 0x110));
  }
  if (uVar4 != 0) {
    *(uint *)(uVar4 + 4) = uVar6;
  }
  puVar5 = (uint *)**(undefined4 **)(ar4 + 0x10c);
  puVar5[3] = uVar6;
  puVar5[5] = uVar6;
  *puVar5 = uVar6;
  puVar5[2] = uVar6;
  puVar5[4] = uVar6;
  *(uint *)(ar4 + 0x114) = puVar5[1];
  return puVar5;
}



/* FUN_8c11335c @ 8c11335c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint * FUN_8c11335c(int ar4,uint ar5,uint ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(in_r0 + ar4),0x18);
  uVar7 = ar5;
  if (ar5 < *(uint *)(ar4 + 0x110)) {
    do {
      iVar6 = *(int *)(*(int *)(ar4 + 0x10c) + uVar7 * 4);
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
    } while (uVar7 < *(uint *)(ar4 + 0x110));
  }
  if (ar5 != 0) {
    *(uint *)(ar5 + 4) = ar6;
  }
  puVar5 = (uint *)**(undefined4 **)(ar4 + 0x10c);
  puVar5[3] = ar6;
  puVar5[5] = ar6;
  *puVar5 = ar6;
  puVar5[2] = ar6;
  puVar5[4] = ar6;
  *(uint *)(ar4 + 0x114) = puVar5[1];
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

int FUN_8c113d68(int *ar4,int *ar5,int *ar6,undefined4 ar7,ushort *s0,ushort *s4,int s8)

{
  short sVar1;
  int in_r0;
  int iVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  short sStack_1a;
  
  puVar3 = (ushort *)*ar6;
  piVar4 = (int *)*ar4;
  psVar6 = (short *)((uint)*s0 * 2 + s8);
  while (s0 < s4) {
    s0 = s0 + 1;
    *piVar4 = *ar5;
    piVar4 = piVar4 + 1;
    iVar5 = (uint)*s0 * 2 + s8;
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

int FUN_8c113dfa(int *ar4,int *ar5,int *ar6,int ar7,undefined4 s0)

{
  ushort uVar1;
  int a6;
  int a4;
  undefined4 *puVar2;
  
  uVar1 = *(ushort *)(ar4 + 1);
  a4 = *ar6;
  a6 = (uint)uVar1 * 2;
  (*(code *)PTR_memmove_8c113e94)(a4,*ar4 * 2 + ar7,a6,ar7);
  puVar2 = (undefined4 *)(a4 + a6);
  *(ushort *)((int)puVar2 + -2) = *(ushort *)((int)puVar2 + -2) | 1;
  *puVar2 = s0;
  *ar5 = *ar5 + uVar1 + 2;
  *ar6 = (int)(puVar2 + 1);
  return (int)s0._2_2_;
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
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  short *psVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  ushort *puVar19;
  int *ar7_00;
  int *piVar20;
  int a4;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  uint *puStack_8c;
  short *psStack_88;
  int *piStack_84;
  int *piStack_7c;
  int *piStack_74;
  int *piStack_70;
  int iStack_6c;
  int *piStack_68;
  int *piStack_64;
  int iStack_60;
  ushort *puStack_5c;
  int *piStack_58;
  uint *puStack_54;
  int *piStack_50;
  int iStack_4c;
  int iStack_48;
  short *psStack_44;
  int iStack_40;
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  
  puStack_5c = (ushort *)ar4[0x41];
  iVar21 = 0;
  uVar22 = 0;
  piVar20 = (int *)ar4[0x11];
  puStack_54 = (uint *)*piVar20;
  a4 = *ar4;
  iStack_34 = 0;
  iStack_40 = 0;
  iStack_38 = ar4[0x3b];
  iVar12 = ar4[0x3c];
  iStack_4c = 0;
  iStack_60 = 0;
  piStack_30 = (int *)ar4[0x12];
  uVar8 = 1;
  uVar7 = 0;
  for (iVar17 = ar5; iVar17 != 0; iVar17 = *(int *)(iVar17 + 0x10)) {
    iStack_34 = iStack_34 + 1;
    for (piVar16 = *(int **)(iVar17 + 0xc); piVar16 != (int *)0x0; piVar16 = (int *)piVar16[4]) {
      iVar13 = piVar20[*piVar16 + 1] - piVar20[*piVar16];
      if (iVar13 < 0) {
        iVar13 = iVar13 + 3;
      }
      uVar14 = iVar13 >> 2;
      iVar21 = iVar21 + uVar14;
      if (uVar22 < uVar14) {
        uVar22 = uVar14;
      }
    }
  }
  iVar13 = (**(code **)(a4 + 0x10))(a4,(iVar21 + 1) * 0xc,0,ar7);
  iVar21 = (**(code **)(a4 + 0x10))(a4,iVar21 * uVar22 * 6,iVar17,ar7);
  *(undefined2 *)(iVar13 + 8) = 0xffff;
  do {
    if (ar5 == 0) {
      for (uVar5 = *(ushort *)(iVar13 + 8); uVar5 != 0xffff;
          uVar5 = *(ushort *)((uint)uVar5 * 6 + iVar21 + 2)) {
        iStack_40 = iStack_40 + 1;
      }
      piVar10 = (int *)(uVar8 - 1);
      piStack_50 = (int *)(iVar13 + 0xc);
      iStack_6c = (uint)uVar7 - iStack_40;
      piVar15 = piStack_50;
      piVar16 = piStack_50;
      piVar20 = piVar10;
      piStack_84 = piVar10;
      for (piVar24 = (int *)0x1; piVar24 <= piVar10; piVar24 = (int *)((int)piVar24 + 1)) {
        uVar22 = (uint)*(ushort *)(piVar16 + 2);
        if (uVar22 != 0) {
          iStack_4c = iStack_4c + (uint)puStack_5c[piVar15[1] * 6 + 2];
          uVar7 = puStack_5c[piVar15[1] * 6 + 4];
          while (uVar22 != 0xffff) {
            uVar8 = puStack_5c
                    [*(int *)((uint)*(ushort *)(uVar22 * 6 + iVar21) * 0xc + iVar13 + 4) * 6 + 3] +
                    uVar7 * (short)ar4[0x3d];
            puVar19 = (ushort *)((uint)uVar8 * 2 + iVar12);
            iVar17 = (uint)*(ushort *)((uint)puVar19[1] * 2 + iVar12) -
                     (uint)*(ushort *)((uint)*puVar19 * 2 + iVar12);
            if (iVar17 == 0) {
              uVar8 = 0xffff;
            }
            else {
              iStack_4c = iStack_4c + iVar17;
              piStack_84 = (int *)((int)piStack_84 + 1);
              iStack_6c = iStack_6c + 1;
              puVar19 = (ushort *)((uint)uVar8 * 2 + iVar12);
              piVar20 = (int *)((int)piVar20 + ((uint)puVar19[1] - (uint)*puVar19));
            }
            iVar17 = uVar22 * 6 + iVar21;
            *(ushort *)(iVar17 + 4) = uVar8;
            uVar22 = (uint)*(ushort *)(iVar17 + 2);
          }
        }
        piVar16 = piVar16 + 3;
        piVar15 = piVar15 + 3;
      }
      piStack_64 = piVar10;
      piStack_74 = (int *)(**(code **)(a4 + 0x10))(a4,((int)piStack_84 + 1U) * 4,piVar15,piVar16);
      piStack_2c = piStack_74;
      puStack_54 = (uint *)(**(code **)(a4 + 0x10))(a4,iStack_6c << 2,piVar15,piVar16);
      puVar19 = (ushort *)0x2;
      psStack_88 = (short *)(**(code **)(a4 + 0x14))(a4,piStack_84,2,piVar16);
      psStack_44 = psStack_88;
      iVar17 = (**(code **)(a4 + 0x10))(a4,(int)piStack_84 << 1,puVar19,piVar16);
      ar4[0x70] = iVar17;
      piStack_70 = (int *)(**(code **)(a4 + 0x10))
                                    (a4,((int)piStack_84 + (int)piVar20 + 2) * 4,puVar19,piVar16);
      piStack_68 = piStack_70 + (int)piStack_84 + 1;
      piStack_58 = piStack_70;
      iStack_48 = (**(code **)(a4 + 0x10))(a4,((int)piVar20 * 2 + iStack_4c) * 2,puVar19,piVar16);
      iStack_24 = iStack_48;
      piVar20 = (int *)(**(code **)(a4 + 0x10))(a4,iStack_40 << 2,puVar19,piVar16);
      piStack_28 = piVar20;
      piVar15 = (int *)(**(code **)(a4 + 0x10))(a4,(int)piStack_84 << 3,puVar19,piVar16);
      ar4[0x40] = (int)piVar15;
      iStack_60 = 0;
      uVar7 = *(ushort *)(iVar13 + 8);
      while (uVar7 != 0xffff) {
        puVar19 = (ushort *)((uint)uVar7 * 6 + iVar21);
        piVar16 = (int *)(uint)*puVar19;
        *piVar20 = (int)piVar16 + -1;
        psStack_88[(int)piVar16 + -1] = 1;
        piVar20 = piVar20 + 1;
        uVar7 = puVar19[1];
      }
      puStack_8c = puStack_54;
      piVar20 = piStack_50;
      for (piStack_3c = (int *)0x1; piStack_3c <= piVar10; piStack_3c = (int *)((int)piStack_3c + 1)
          ) {
        iStack_4c = CONCAT22(iStack_4c._2_2_,*(undefined2 *)(ar4[0x30] + *piVar20 * 2));
        uVar7 = *(ushort *)(piVar20 + 2);
        *piVar15 = *piVar20;
        uVar22 = (uint)uVar7;
        piVar15[1] = piVar20[1];
        piVar15 = piVar15 + 2;
        *piStack_74 = (int)puStack_8c;
        *piStack_68 = iStack_60;
        *piStack_70 = (int)piStack_68;
        puVar19 = (ushort *)&iStack_48;
        piVar16 = piStack_30;
        piStack_68 = piStack_68 + 1;
        FUN_8c113dfa(puStack_5c + piVar20[1] * 6,&iStack_60,puVar19,piStack_30);
        if (uVar22 != 0) {
          if (uVar22 == 0xffff) {
            *psStack_88 = 2;
          }
          else if (*psStack_88 != 1) {
            *psStack_88 = (short)iStack_4c;
          }
          psStack_88 = psStack_88 + 1;
          piVar24 = piStack_64;
          for (; piStack_64 = piVar24, uVar22 != 0xffff;
              uVar22 = (uint)*(ushort *)(uVar22 * 6 + iVar21 + 2)) {
            if (*(short *)(uVar22 * 6 + iVar21 + 4) == -1) {
              *puStack_8c = *(ushort *)(uVar22 * 6 + iVar21) - 1;
            }
            else {
              piStack_64 = (int *)((int)piVar24 + 1);
              *puStack_8c = (uint)piVar24;
            }
            puStack_8c = puStack_8c + 1;
            piVar24 = piStack_64;
          }
        }
        piVar20 = piVar20 + 3;
        piStack_74 = piStack_74 + 1;
        piStack_70 = piStack_70 + 1;
      }
      *piStack_74 = (int)puStack_8c;
      *piStack_70 = (int)piStack_68;
      piVar24 = piStack_50;
      piStack_74 = piStack_74 + 1;
      piStack_70 = piStack_70 + 1;
      piStack_64 = piVar10;
      for (piStack_7c = (int *)0x1; piStack_7c <= piVar10; piStack_7c = (int *)((int)piStack_7c + 1)
          ) {
        uVar22 = (uint)*(ushort *)(piVar24 + 2);
        puVar1 = puStack_8c;
        piVar2 = piStack_74;
        piVar3 = piStack_70;
        ar7_00 = piStack_64;
        if (uVar22 != 0) {
          for (; puStack_8c = puVar1, piStack_74 = piVar2, piStack_70 = piVar3, piStack_64 = ar7_00,
              uVar22 != 0xffff; uVar22 = (uint)*(ushort *)(uVar22 * 6 + iVar21 + 2)) {
            uVar7 = *(ushort *)(uVar22 * 6 + iVar21 + 4);
            piVar20 = (int *)CONCAT22((short)((uint)piVar20 >> 0x10),uVar7);
            if (uVar7 != 0xffff) {
              *piVar15 = -1;
              piVar15[1] = -1;
              piVar15 = piVar15 + 2;
              puStack_5c = (ushort *)((uint)uVar7 * 2 + iVar12);
              puVar19 = (ushort *)&iStack_48;
              piStack_64 = (int *)((int)ar7_00 + 1);
              FUN_8c113d68(&piStack_68,&iStack_60,puVar19,ar7_00,(uint)*puStack_5c * 2 + iVar12,
                           (uint)puStack_5c[1] * 2 + iVar12,iStack_38,piVar20);
              piStack_70 = piVar3 + 1;
              *piVar3 = (int)piStack_68;
              puStack_8c = puVar1 + 1;
              *puVar1 = *(ushort *)(uVar22 * 6 + iVar21) - 1;
              piStack_74 = piVar2 + 1;
              *piVar2 = (int)puStack_8c;
              piVar16 = ar7_00;
            }
            puVar1 = puStack_8c;
            piVar2 = piStack_74;
            piVar3 = piStack_70;
            ar7_00 = piStack_64;
          }
        }
        piVar24 = piVar24 + 3;
      }
      *piStack_68 = iStack_60;
      uVar22 = ar4[0x56];
      if (uVar22 < (uint)(iStack_34 * 0x14)) {
        uVar22 = iStack_34 * 0x14;
      }
      ar4[0x56] = uVar22;
      ar4[0x42] = (int)piVar10;
      ar4[0x51] = iStack_40;
      ar4[0xe] = (int)piStack_84;
      ar4[0x11] = (int)piStack_58;
      ar4[0x12] = iStack_24;
      ar4[0x30] = (int)psStack_44;
      ar4[0x26] = (int)piStack_2c;
      ar4[0x27] = (int)puStack_54;
      ar4[0x2d] = iStack_6c;
      piStack_68 = piStack_68 + 1;
      FUN_8c112b1c(ar4,(int)*(short *)((int)ar4 + 0x1be),puVar19,piVar16);
      ar4[0x52] = (int)piStack_28;
      (**(code **)(a4 + 0x18))(a4,iVar13,puVar19,piVar16);
      (**(code **)(a4 + 0x18))(a4,iVar21,puVar19,piVar16);
      if ((((code *)ar4[0x4c] == FUN_8c11617a) &&
          (uVar22 = FUN_8c1155a0(ar4,iVar21,puVar19,piVar16), (uVar22 & 0xff) != 0)) ||
         (((code *)ar4[0x4c] == FUN_8c117bac &&
          (uVar22 = FUN_8c115732(ar4,iVar21,puVar19,piVar16), (uVar22 & 0xff) != 0)))) {
        uVar11 = 1;
      }
      else {
        *(undefined1 *)(ar4 + 0x1f) = 1;
        uVar11 = 0;
      }
      return uVar11;
    }
    piStack_70 = (int *)0x0;
    piStack_84 = (int *)0x0;
    piVar16 = *(int **)(ar5 + 0xc);
    uVar22 = 0;
    if (piVar16 != (int *)0x0) {
      do {
        if (piVar16 == (int *)0x0) break;
        piStack_84 = (int *)*piVar16;
        uVar5 = *(ushort *)(uVar22 * 0xc + iVar13 + 8);
        iVar17 = piVar20[(int)piStack_84] - (int)puStack_54;
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        piStack_70 = (int *)(iVar17 >> 2);
        while (uVar14 = (uint)uVar5, uVar14 != 0xffff) {
          if ((int *)*(int *)((uint)*(ushort *)(uVar14 * 6 + iVar21) * 0xc + iVar13 + 4) ==
              piStack_70) {
            uVar22 = (uint)*(ushort *)(uVar14 * 6 + iVar21);
            piVar16 = (int *)piVar16[4];
            goto LAB_8c11405a;
          }
          uVar5 = *(ushort *)(uVar14 * 6 + iVar21 + 2);
        }
        if (uVar22 == 0) {
          ar7 = 1;
        }
        else {
          iVar17 = piVar20[*(int *)(uVar22 * 0xc + iVar13) + 1] -
                   piVar20[*(int *)(uVar22 * 0xc + iVar13)];
          if (iVar17 < 0) {
            iVar17 = iVar17 + 3;
          }
          ar7 = iVar17 >> 2;
        }
LAB_8c11405a:
      } while (uVar14 != 0xffff);
      uVar5 = *(ushort *)(uVar22 * 0xc + iVar13 + 8);
      uVar14 = ar7;
      while( true ) {
        iVar17 = piVar20[(int)piStack_84 + 1] - piVar20[(int)piStack_84];
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        ar7 = iVar17 >> 2;
        psStack_44 = (short *)(ar7 - 1);
        piStack_58 = (int *)(uint)uVar8;
        uVar18 = 0;
        uVar4 = uVar7;
        if (ar7 != 0) {
          do {
            psVar9 = (short *)((uint)uVar4 * 6 + iVar21);
            uVar7 = uVar5;
            for (piStack_7c = (int *)0x0; piStack_7c < uVar14;
                piStack_7c = (int *)((int)piStack_7c + 1)) {
              *psVar9 = uVar8 + (short)uVar18;
              uVar6 = uVar7;
              if (uVar5 == 0xffff) {
                uVar6 = 0xffff;
              }
              psVar9[1] = uVar6;
              uVar7 = uVar7 + 1;
              psVar9 = psVar9 + 3;
            }
            if ((short *)uVar18 == psStack_44) {
              for (uVar23 = 0; uVar23 < uVar14; uVar23 = uVar23 + 1) {
                *(ushort *)((uVar23 + uVar22) * 0xc + iVar13 + 8) = uVar4 + (short)uVar23;
              }
            }
            uVar7 = uVar4 + (short)uVar14;
            piVar15 = (int *)(((int)piStack_58 + uVar18) * 0xc + iVar13);
            piVar15[1] = (int)piStack_70 + uVar18;
            uVar18 = uVar18 + 1;
            *piVar15 = (int)piStack_84;
            uVar5 = uVar4;
            uVar4 = uVar7;
          } while (uVar18 < ar7);
        }
        psStack_88._0_2_ = (short)ar7;
        uVar8 = (short)psStack_88 + uVar8;
        piVar16 = (int *)piVar16[4];
        if (piVar16 == (int *)0x0) break;
        piStack_84 = (int *)*piVar16;
        iVar17 = piVar20[(int)piStack_84] - (int)puStack_54;
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        piStack_70 = (int *)(iVar17 >> 2);
        uVar5 = 0xffff;
        uVar22 = (uint)piStack_58;
        uVar14 = ar7;
      }
      uVar14 = 0;
      uVar22 = (uint)piStack_58;
      if (ar7 != 0) {
        do {
          iVar17 = uVar22 * 0xc;
          uVar22 = uVar22 + 1;
          uVar14 = uVar14 + 1;
          *(undefined2 *)(iVar17 + iVar13 + 8) = 0xffff;
        } while (uVar14 < ar7);
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
  ushort *ar4_00;
  int *a6;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int a5;
  int ar6_00;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int a4;
  
  a4 = *ar4;
  iVar8 = 0;
  puVar7 = *(undefined4 **)((int)DAT_8c1148aa + (int)ar4);
  ar4_00 = (ushort *)(**(code **)(a4 + 0x14))(a4,ar4[0xe] << 1,1,ar7);
  ar6_00 = ar4[0xe] << 1;
  (*(code *)PTR_memmove_8c1148b8)(ar4_00,*(undefined4 *)((int)DAT_8c1148ac + (int)ar4),ar6_00,ar7);
  uVar1 = *ar4_00;
  while ((uVar1 & 1) == 0) {
    iVar8 = iVar8 + 1;
    uVar1 = ar4_00[iVar8];
  }
  ar4_00[iVar8] = ar4_00[iVar8] & (ushort)DAT_8c1148bc;
  iVar3 = iVar8 * 4;
  uVar4 = *(undefined4 *)(*(int *)((int)DAT_8c1148aa + (int)ar4) + iVar3);
  uVar9 = *(int *)((iVar8 + 1) * 4 + *(int *)((int)DAT_8c1148ae + (int)ar4)) -
          *(int *)(iVar3 + *(int *)((int)DAT_8c1148ae + (int)ar4));
  a5 = uVar9 * 4;
  a6 = (int *)(**(code **)(a4 + 0x10))(a4,a5,ar6_00,ar7);
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
      ar4_00[a5] = ar4_00[a5] | 3;
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
  *(ushort **)(iVar8 + (int)ar4) = ar4_00;
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

/* WARNING: Removing unreachable block (ram,0x8c114b62) */
/* WARNING: Removing unreachable block (ram,0x8c114b48) */
/* WARNING: Removing unreachable block (ram,0x8c114b18) */
/* WARNING: Removing unreachable block (ram,0x8c114afe) */
/* WARNING: Removing unreachable block (ram,0x8c114abe) */
/* WARNING: Removing unreachable block (ram,0x8c114aba) */
/* WARNING: Removing unreachable block (ram,0x8c114ab2) */
/* WARNING: Removing unreachable block (ram,0x8c114a98) */
/* WARNING: Removing unreachable block (ram,0x8c114a76) */
/* WARNING: Removing unreachable block (ram,0x8c114a1a) */
/* WARNING: Removing unreachable block (ram,0x8c1149ae) */
/* WARNING: Removing unreachable block (ram,0x8c114996) */
/* WARNING: Removing unreachable block (ram,0x8c114984) */
/* WARNING: Removing unreachable block (ram,0x8c114980) */
/* WARNING: Removing unreachable block (ram,0x8c114964) */
/* WARNING: Removing unreachable block (ram,0x8c11497a) */
/* WARNING: Removing unreachable block (ram,0x8c114982) */
/* WARNING: Removing unreachable block (ram,0x8c114988) */
/* WARNING: Removing unreachable block (ram,0x8c11499e) */
/* WARNING: Removing unreachable block (ram,0x8c114a0a) */
/* WARNING: Removing unreachable block (ram,0x8c114a52) */
/* WARNING: Removing unreachable block (ram,0x8c114a8e) */
/* WARNING: Removing unreachable block (ram,0x8c114ab0) */
/* WARNING: Removing unreachable block (ram,0x8c114ab4) */
/* WARNING: Removing unreachable block (ram,0x8c114abc) */
/* WARNING: Removing unreachable block (ram,0x8c114af0) */
/* WARNING: Removing unreachable block (ram,0x8c114b06) */
/* WARNING: Removing unreachable block (ram,0x8c114b20) */
/* WARNING: Removing unreachable block (ram,0x8c114b50) */
/* WARNING: Removing unreachable block (ram,0x8c114b98) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11495c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_r10;
  int iVar3;
  int *unaff_r14;
  undefined4 extraout_fr1;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  float extraout_fr0_02;
  float extraout_fr0_03;
  float extraout_fr0_04;
  float extraout_fr0_05;
  int extraout_fr0_06;
  float extraout_fr0_07;
  float extraout_fr0_08;
  float extraout_fr0_09;
  float in_fr3;
  float fVar4;
  char cVar5;
  
  cVar5 = '\0';
  iVar3 = *unaff_r14;
  *(undefined4 *)(ain0 + (int)unaff_r14) = unaff_r10;
  FUN_8c120550(unaff_r14,ar5,ar6,ar7);
  if (cVar5 == '\0') {
    in_fr3 = 2.1474836e+09;
  }
  fVar4 = extraout_fr0;
  if (in_fr3 < extraout_fr0) {
    fVar4 = extraout_fr0 + -4.2949673e+09;
  }
  unaff_r14[0x53] = (int)fVar4;
  FUN_8c120550(unaff_r14,0x16,ar6,ar7);
  *(char *)((int)unaff_r14 + 0x1e6) = (char)(int)extraout_fr0_00;
  if (*(char *)((int)unaff_r14 + 0x1e6) == '\0') {
    *(char *)(unaff_r14 + 0x1f) = (char)unaff_r10;
  }
  else {
    *(undefined1 *)(unaff_r14 + 0x1f) = 0;
  }
  unaff_r14[10] = *(int *)unaff_r14[3];
  unaff_r14[0xb] = *(int *)unaff_r14[4];
  FUN_8c120550(unaff_r14,0x10,ar6,ar7);
  uVar1 = FUN_8c112a20(unaff_r14,(int)extraout_fr0_01 & 0xffff,ar6,ar7);
  if ((uVar1 & 0xff) == 0) {
    *(char *)(unaff_r14 + 0x55) = (char)unaff_r10;
    FUN_8c120550(unaff_r14,0x11,ar6,ar7);
    *(short *)(unaff_r14 + 0x79) = (short)(int)extraout_fr0_02;
    if (*(ushort *)(unaff_r14 + 0x79) < 0xfde9) {
      if (*(ushort *)(unaff_r14 + 0x79) < 200) {
        *(undefined2 *)(unaff_r14 + 0x79) = 200;
      }
    }
    else {
      *(undefined2 *)(unaff_r14 + 0x79) = 65000;
    }
    FUN_8c120550(unaff_r14,8,ar6,ar7);
    cVar5 = '\0';
    unaff_r14[0x56] = (int)extraout_fr0_03 & 0xffff;
    FUN_8c120550(unaff_r14,5,ar6,ar7);
    if (cVar5 == '\0') {
      fVar4 = 128.0;
    }
    fVar4 = extraout_fr0_04 * fVar4;
    if (2.1474836e+09 < fVar4) {
      fVar4 = fVar4 + -4.2949673e+09;
    }
    unaff_r14[0x5b] = (int)fVar4;
    FUN_8c120550(unaff_r14,6,ar6,ar7);
    cVar5 = '\0';
    *(short *)(unaff_r14 + 0x58) = (short)(int)extraout_fr0_05;
    FUN_8c120550(unaff_r14,7,ar6,ar7);
    if (cVar5 == '\0') {
      unaff_r14[0x59] = extraout_fr0_06;
    }
    else {
      *(ulonglong *)(unaff_r14 + 0x59) = CONCAT44(extraout_fr0_06,extraout_fr1);
    }
    FUN_8c120550(unaff_r14,10,ar6,ar7);
    *(short *)(unaff_r14 + 0x68) = (short)(int)extraout_fr0_07;
    FUN_8c120550(unaff_r14,0xf,ar6,ar7);
    *(short *)((int)unaff_r14 + 0x1be) = (short)(int)extraout_fr0_08;
    iVar3 = (**(code **)(iVar3 + 0x10))(iVar3,0x3c,ar6,ar7);
    unaff_r14[0x3f] = iVar3;
    unaff_r14[0x20] = 0;
    unaff_r14[0x13] = 0;
    FUN_8c120550(unaff_r14,0x18,ar6,ar7);
    *(short *)(unaff_r14 + 0x7a) = (short)(int)extraout_fr0_09;
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c114bd8 @ 8c114bd8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c114cb4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c114bd8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float extraout_fr0;
  
  uVar1 = (**(code **)(ar5 + 0x2c))(ar5);
  *(undefined2 *)(ar4 + 0xdc) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x30))(ar5);
  *(undefined2 *)(ar4 + 0xde) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x34))(ar5);
  *(undefined2 *)(ar4 + 0xe0) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x38))(ar5);
  *(undefined2 *)(ar4 + 0xe2) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x34))(ar5);
  *(undefined2 *)(ar4 + 0x1c6) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x20))(ar5);
  *(undefined2 *)(ar4 + 0xe4) = uVar1;
  uVar2 = (**(code **)(ar5 + 0x44))(ar5);
  *(undefined4 *)(ar4 + 0xf4) = uVar2;
  uVar1 = (**(code **)(ar5 + 0x48))(ar5);
  *(undefined2 *)(ar4 + 0xe6) = uVar1;
  uVar2 = (**(code **)(ar5 + 0x88))(ar5);
  *(undefined4 *)(ar4 + 0xe8) = uVar2;
  FUN_8c120550(ar4,0x15,ar6,ar7);
  *(char *)(ar4 + 0xf8) = (char)(int)extraout_fr0;
  if (*(char *)(ar4 + 0xf8) != '\0') {
    uVar2 = (**(code **)(ar5 + 0x8c))(ar5);
    uVar3 = (**(code **)(ar5 + 0xcc))(uVar2);
    *(undefined4 *)(ar4 + 0xec) = uVar3;
    uVar2 = (**(code **)(ar5 + 0xd0))(uVar2);
    *(undefined4 *)(ar4 + 0xf0) = uVar2;
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

/* WARNING: Removing unreachable block (ram,0x8c115348) */
/* WARNING: Removing unreachable block (ram,0x8c11545e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c114e80(int *ar4,int ar5,undefined4 ar6,short *ar7)

{
  ushort uVar1;
  short sVar2;
  undefined4 *puVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  int *a6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  ushort *puVar14;
  ushort *puVar15;
  int *a5;
  int *piVar16;
  int *piVar17;
  int *a7;
  int iVar18;
  short *psVar19;
  short *psVar20;
  int a4;
  float extraout_fr0;
  float extraout_fr0_00;
  float fVar21;
  bool bVar22;
  undefined4 uStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined4 *puStack_44;
  ushort *puStack_40;
  int *piStack_2c;
  
  a4 = *ar4;
  iVar18 = ar4[0x3a];
  uVar5 = (short)ar4[0x37] << 2 | 1;
  iVar12 = ar5;
  iVar6 = (**(code **)(ar5 + 0x10))(ar5,ar5,ar6,ar7);
  a6 = (int *)(**(code **)(ar5 + 0x14))(ar5,iVar12,ar6,ar7);
  iVar7 = (**(code **)(ar5 + 0x1c))(ar5,iVar12,ar6,ar7);
  ar4[0x51] = iVar7;
  iVar7 = (**(code **)(ar5 + 8))(ar5,iVar12,ar6,ar7);
  ar4[0x32] = iVar7;
  iVar7 = (**(code **)(ar5 + 8))(ar5,iVar12,ar6,ar7);
  iVar8 = (**(code **)(ar5 + 0xc))(ar5,iVar12,ar6,ar7);
  ar4[0xe] = iVar8 + iVar7;
  ar4[0xf] = ((iVar8 + iVar7) - 1U >> 3) + 1;
  ar4[0x2f] = iVar6 + (int)a6;
  ar4[0x42] = ar4[0xe];
  uVar9 = FUN_8c1133f6(ar4,iVar12,ar6,ar7);
  if ((uVar9 & 0xff) != 0) {
    return 1;
  }
  puVar10 = (ushort *)(**(code **)(ar5 + 0x34))(ar5,iVar12,ar6,ar7);
  ar4[0x33] = (int)puVar10;
  iVar7 = (**(code **)(ar5 + 0x38))(ar5,iVar12,ar6,ar7);
  ar4[0x34] = iVar7;
  iVar7 = (**(code **)(ar5 + 0x3c))(ar5,iVar12,ar6,ar7);
  ar4[0x35] = iVar7;
  iVar7 = (**(code **)(ar5 + 0x40))(ar5,iVar12,ar6,ar7);
  ar4[0x36] = iVar7;
  iVar7 = (**(code **)(ar5 + 0x28))(ar5,iVar12,ar6,ar7);
  piVar11 = (int *)(**(code **)(ar5 + 0x24))(ar5,iVar12,ar6,ar7);
  piVar17 = (int *)0x0;
  if (piVar11 != (int *)0x0) {
    do {
      uVar1 = *puVar10;
      puVar10 = puVar10 + 1;
      piVar17 = (int *)((int)piVar17 + 1);
      iVar7 = iVar7 + (*(int *)((uVar1 + 1) * 4 + iVar18) - *(int *)((uint)uVar1 * 4 + iVar18));
    } while (piVar17 < piVar11);
  }
  ar4[0x10] = iVar7 + (int)piVar11 * -2 + ar4[0x2f] * 3;
  iVar12 = (**(code **)(a4 + 0x10))(a4,ar4[0x51] << 2,piVar17,ar7);
  ar4[0x52] = iVar12;
  iVar12 = (**(code **)(a4 + 0x10))(a4,ar4[0xe] << 1,piVar17,ar7);
  ar4[0x70] = iVar12;
  iVar12 = (**(code **)(a4 + 0x10))(a4,(ar4[0xe] + ar4[0x2f] + 2) * 4,piVar17,ar7);
  ar4[0x11] = iVar12;
  iVar12 = (**(code **)(a4 + 0x10))(a4,ar4[0x10] << 1,piVar17,ar7);
  ar4[0x12] = iVar12;
  if ((((ar4[0x52] != 0) && (ar4[0x70] != 0)) && (ar4[0x11] != 0)) && (ar4[0x12] != 0)) {
    iVar12 = 0;
    puVar10 = (ushort *)ar4[0x12];
    uStack_54 = -1;
    bVar4 = false;
    puVar14 = (ushort *)ar4[0x33];
    a5 = (int *)ar4[0x34];
    a7 = a5 + *a5;
    puVar3 = (undefined4 *)ar4[0x11];
    piVar16 = (undefined4 *)ar4[0x11] + ar4[0xe] + 1;
    puStack_40 = puVar14;
    piStack_50 = a5;
    piStack_2c = a7;
    iVar7 = uStack_54;
    for (puVar15 = puVar14; uStack_54 = iVar7, piStack_4c = piVar16, puStack_44 = puVar3,
        puVar15 < puVar14 + (int)piVar11; puVar15 = puVar15 + 1) {
      if (puVar15 == puStack_40) {
        if (bVar4) {
          if (*(char *)((int)ar4 + 0x1e6) == '\0') {
            puVar10[-1] = puVar10[-1] | 1;
          }
          else {
            *puVar10 = uVar5;
            puVar10 = puVar10 + 1;
            iVar12 = iVar12 + 1;
          }
          uStack_54._0_2_ = (ushort)iVar7;
          *puVar10 = (ushort)uStack_54;
          uStack_54._2_2_ = (ushort)((uint)iVar7 >> 0x10);
          puVar10[1] = uStack_54._2_2_;
          puVar10 = puVar10 + 2;
          iVar12 = iVar12 + 2;
        }
        else {
          bVar4 = true;
        }
        bVar22 = a7 == piStack_2c;
        a7 = a7 + 1;
        if (bVar22) {
          piStack_50 = piStack_50 + 1;
          uStack_54 = iVar7 + 1;
          piStack_2c = (int *)(*piStack_50 * 4 + ar4[0x34]);
          puStack_44 = puVar3 + 1;
          *puVar3 = piVar16;
        }
        puStack_40 = puVar14 + *a7;
        piStack_4c = piVar16 + 1;
        *piVar16 = iVar12;
      }
      piVar16 = (int *)((uint)*puVar15 * 4 + iVar18);
      piVar17 = (int *)(piVar16[1] * 2 + iVar18);
      for (a5 = (int *)(*piVar16 * 2 + iVar18 + 4); a5 < piVar17; a5 = (int *)((int)a5 + 2)) {
        iVar12 = iVar12 + 1;
        *puVar10 = (short)*a5 << 2;
        puVar10 = puVar10 + 1;
      }
      puVar3 = puStack_44;
      piVar16 = piStack_4c;
      iVar7 = uStack_54;
    }
    psVar19 = (short *)ar4[0x35];
    iVar7 = (**(code **)(ar5 + 0x28))(ar5,a5,piVar17,a7);
    ar7 = psVar19 + iVar7;
    piVar11 = (int *)ar4[0x36];
    piVar16 = piVar11 + *piVar11;
    piVar17 = piVar16;
    psVar20 = psVar19;
    puStack_40 = (ushort *)psVar19;
    do {
      if ((ushort *)psVar20 == puStack_40) {
        if (bVar4) {
          if (*(char *)((int)ar4 + 0x1e6) == '\0') {
            puVar10[-1] = puVar10[-1] | 1;
          }
          else {
            *puVar10 = uVar5;
            puVar10 = puVar10 + 1;
            iVar12 = iVar12 + 1;
          }
          *puVar10 = (ushort)uStack_54;
          puVar10[1] = uStack_54._2_2_;
          puVar10 = puVar10 + 2;
          iVar12 = iVar12 + 2;
        }
        else {
          bVar4 = true;
        }
        bVar22 = piVar16 == piVar17;
        piVar16 = piVar16 + 1;
        if (bVar22) {
          piVar11 = piVar11 + 1;
          uStack_54 = uStack_54 + 1;
          piVar17 = (int *)(*piVar11 * 4 + ar4[0x36]);
          *puStack_44 = piStack_4c;
          puStack_44 = puStack_44 + 1;
        }
        puStack_40 = (ushort *)(psVar19 + *piVar16);
        *piStack_4c = iVar12;
        piStack_4c = piStack_4c + 1;
        if (psVar20 == ar7) goto LAB_8c115274;
      }
      sVar2 = *psVar20;
      psVar20 = psVar20 + 1;
      iVar12 = iVar12 + 1;
      *puVar10 = sVar2 << 2;
      puVar10 = puVar10 + 1;
    } while( true );
  }
LAB_8c115402:
  uVar13 = FUN_8c1204c4(ar4,0x71,piVar17,ar7);
  return uVar13;
LAB_8c115274:
  iVar12 = (**(code **)(a4 + 0x10))(a4,ar4[0x2f] * 0xc,piVar17,ar7);
  ar4[0x41] = iVar12;
  FUN_8c114d30(ar4,iVar6,a6,ar7);
  iVar12 = (**(code **)(ar5 + 0x48))(ar5,iVar6,a6,ar7);
  ar4[0x24] = iVar12;
  iVar12 = (**(code **)(ar5 + 0x44))(ar5,iVar6,a6,ar7);
  ar4[0x30] = iVar12;
  *(undefined1 *)(ar4 + 0x31) = 0;
  uVar13 = (**(code **)(ar5 + 0x30))(ar5,iVar6,a6,ar7);
  *(char *)((int)ar4 + 0xf9) = (char)uVar13;
  if (*(char *)((int)ar4 + 0xf9) == '\0') {
    FUN_8c120550(ar4,0xf,a6,ar7);
    piVar17 = a6;
    fVar21 = extraout_fr0;
  }
  else {
    FUN_8c120550(ar4,0x17,a6,ar7);
    piVar17 = a6;
    fVar21 = extraout_fr0_00;
  }
  FUN_8c112b1c(ar4,(int)fVar21,piVar17,ar7);
  iVar12 = 0;
  uVar9 = 0;
  if (ar4[0xe] != 0) {
    do {
      if ((*(ushort *)(uVar9 * 2 + ar4[0x30]) & 1) != 0) {
        iVar6 = iVar12 * 4;
        iVar12 = iVar12 + 1;
        *(uint *)(ar4[0x52] + iVar6) = uVar9;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)ar4[0xe]);
  }
  iVar12 = (**(code **)(a4 + 0x10))(a4,(ar4[0xe] + 1) * 4,piVar17,ar7);
  ar4[0x26] = iVar12;
  iVar12 = (**(code **)(a4 + 0x10))(a4,ar4[0xf],piVar17,ar7);
  ar4[0x25] = iVar12;
  iVar12 = (**(code **)(a4 + 0x10))
                     (a4,(((int *)ar4[0x24])[ar4[0xe]] - *(int *)ar4[0x24]) * 4,piVar17,ar7);
  ar4[0x27] = iVar12;
  if (((ar4[0x26] != 0) && (ar4[0x25] != 0)) && (ar4[0x27] != 0)) {
    uVar9 = 0;
    if (ar4[0xf] != 1) {
      do {
        *(undefined1 *)(ar4[0x25] + uVar9) = 0xff;
        uVar9 = uVar9 + 1;
      } while (uVar9 < ar4[0xf] - 1U);
    }
    uVar13 = 7;
    iVar6 = 0xff << (8 - (ar4[0xe] & 7U) & 7);
    *(char *)(ar4[0x25] + uVar9) = (char)iVar6;
    FUN_8c113ac8(ar4,iVar6,7,ar7);
    iVar12 = ((int *)ar4[0x26])[ar4[0xe]] - *(int *)ar4[0x26];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 3;
    }
    ar4[0x2d] = iVar12 >> 2;
    if ((((code *)ar4[0x4c] != FUN_8c11617a) ||
        (uVar9 = FUN_8c1155a0(ar4,iVar6,uVar13,ar7), (uVar9 & 0xff) == 0)) &&
       (((code *)ar4[0x4c] != FUN_8c117bac ||
        (uVar9 = FUN_8c115732(ar4,iVar6,uVar13,ar7), (uVar9 & 0xff) == 0)))) {
      iVar12 = ar4[0x50];
      uVar9 = FUN_8c112a20(ar4,iVar12,uVar13,ar7);
      if (((uVar9 & 0xff) == 0) &&
         (uVar9 = FUN_8c11372e(ar4,iVar12,uVar13,ar7), (uVar9 & 0xff) == 0)) {
        if (*(char *)((int)ar4 + 0xf9) == '\0') {
          if ((char)ar4[0x3e] == '\0') {
            ar4[0x69] = (int)FUN_8c11abf0;
            *(undefined1 *)(ar4 + 0x76) = 1;
          }
          else {
            ar4[0x69] = (int)FUN_8c11ac4c;
            *(undefined1 *)(ar4 + 0x76) = 0;
            FUN_8c113b54(ar4,iVar12,uVar13,ar7);
          }
        }
        else {
          ar4[0x69] = (int)FUN_8c11ad68;
          *(undefined1 *)(ar4 + 0x76) = 1;
          FUN_8c113b54(ar4,iVar12,uVar13,ar7);
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
  int ar5_00;
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
      ar5_00 = 0;
      iStack_34 = 0;
      iVar10 = *(int *)(ar4 + 0x54);
      uStack_38 = 0;
      iVar4 = ar5_00;
      if (uVar9 != 0) {
        do {
          ar5_00 = iVar10;
          *(uint *)(ar5_00 + 0xc) = (uint)puStack_30[uStack_38];
          if (iVar4 != 0) {
            *(int *)(iVar4 + 0x10) = ar5_00;
          }
          uVar3 = uVar1;
          if (uStack_38 == 0) {
            uVar3 = 0;
          }
          *(undefined2 *)(ar5_00 + 2) = uVar3;
          *(int **)(ar5_00 + 8) = piVar6;
          *(int **)(ar5_00 + 4) = piVar6;
          if (*(int *)(ar5_00 + 0x18) == 0) {
            iVar10 = (*(code *)PTR_FUN_8c115c28)(ar4,ar5_00,ar6,ar7);
          }
          else {
            iVar10 = *(int *)(ar5_00 + 0x18);
          }
          iStack_34 = iStack_34 + 1;
          uStack_38 = uStack_38 + 1;
          iVar4 = ar5_00;
        } while (uStack_38 < uVar9);
      }
      uStack_38 = 0;
      iVar4 = ar5_00;
      if (uVar8 != 0) {
        do {
          ar5_00 = iVar10;
          *(uint *)(ar5_00 + 0xc) = (uint)*puStack_24;
          if (iVar4 != 0) {
            *(int *)(iVar4 + 0x10) = ar5_00;
          }
          *(undefined2 *)(ar5_00 + 2) = uVar1;
          *(int **)(ar5_00 + 8) = piVar6;
          *(int **)(ar5_00 + 4) = piVar6;
          if (*(int *)(ar5_00 + 0x18) == 0) {
            iVar10 = (*(code *)PTR_FUN_8c115c28)(ar4,ar5_00,ar6,ar7);
          }
          else {
            iVar10 = *(int *)(ar5_00 + 0x18);
          }
          iStack_34 = iStack_34 + 1;
          uStack_38 = uStack_38 + 1;
          iVar4 = ar5_00;
          puStack_24 = puStack_24 + 1;
        } while (uStack_38 < uVar8);
      }
      uStack_38 = 0;
      iVar4 = ar5_00;
      iVar7 = iVar10;
      if (uVar9 != 0) {
        do {
          ar5_00 = iVar7;
          *(uint *)(ar5_00 + 0xc) = (uint)*puStack_30;
          if (iVar4 != 0) {
            *(int *)(iVar4 + 0x10) = ar5_00;
          }
          *(undefined2 *)(ar5_00 + 2) = uVar1;
          *(int **)(ar5_00 + 8) = piVar6;
          *(int **)(ar5_00 + 4) = piVar6;
          if (*(int *)(ar5_00 + 0x18) == 0) {
            iVar7 = (*(code *)PTR_FUN_8c115ce8)(ar4,ar5_00,ar6,ar7);
          }
          else {
            iVar7 = *(int *)(ar5_00 + 0x18);
          }
          iStack_34 = iStack_34 + 1;
          uStack_38 = uStack_38 + 1;
          iVar4 = ar5_00;
          puStack_30 = puStack_30 + 1;
        } while (uStack_38 < uVar9);
      }
      if (uVar9 < 2) {
        *(int *)(ar5_00 + 0x10) = ar5_00;
      }
      else {
        *(int *)(ar5_00 + 0x10) = iVar10;
      }
      if (uVar9 == 0) {
        *(undefined2 *)(*(int *)(ar4 + 0x54) + 2) = 0;
      }
      *piVar6 = iStack_34;
      *(int *)(ar4 + 0x60) = ar5_00;
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
  int *ar5_00;
  int *piVar5;
  
  ar5_00 = (int *)**(int **)(DAT_8c115fde + ar4);
  if (ar5_00 == *(int **)(DAT_8c115fde + -4 + ar4)) {
    (*(code *)PTR_FUN_8c115fe4)(ar4,ar5_00,ar6,ar7);
  }
  iVar2 = (int)DAT_8c115fde;
  ar5_00[2] = ar5;
  if (ar5_00 != *(int **)(iVar2 + ar4)) {
    do {
      piVar4 = (int *)ar5_00[2];
      ar5_00 = (int *)ar5_00[1];
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
              ar5_00 = (int *)*ar5_00;
              if (ar5_00 == (int *)*(int *)(DAT_8c115fe0 + ar4)) {
                (*(code *)PTR_FUN_8c115fe4)(ar4,ar5_00,ar6,ar7);
              }
              ar5_00[2] = piVar1[2];
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
    } while (ar5_00 != *(int **)(iVar2 + ar4));
  }
  return iVar2;
}



/* FUN_8c115fec @ 8c115fec callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c116044) */
/* WARNING: Removing unreachable block (ram,0x8c116034) */
/* WARNING: Removing unreachable block (ram,0x8c116094) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c115fec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined4 uVar2;
  int extraout_r3;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint d;
  
  iVar4 = 0;
  if (*(char *)(ar4 + 0x15c) == '\0') {
    if ((10 < *(uint *)(ar4 + 300)) || (*(uint *)(ar4 + 0x158) >> 2 < (uint)*(ushort *)(ar4 + 0x50))
       ) {
      *(undefined1 *)(ar4 + 0x15c) = 1;
    }
  }
  else {
    d = 1;
    iVar3 = 0;
    uVar5 = 0;
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 + *(int *)(ar4 + 0x170 + iVar3);
      d = d + *(int *)(ar4 + 0x184 + iVar3);
      iVar3 = iVar3 + 4;
    } while (iVar6 < 5);
    if (uVar5 < 0x2000000) {
      uVar2 = libgcc_divide_helper_01051c(uVar5 * 0x80,d);
    }
    else {
      uVar2 = libgcc_divide_helper_01051c(uVar5,d >> 7);
    }
    *(undefined4 *)(ar4 + 0x168) = uVar2;
    iVar3 = *(int *)(ar4 + 0x158) - (uint)*(ushort *)(ar4 + 0x50);
    iVar6 = iVar3 * *(int *)(ar4 + 0x16c) * *(int *)(ar4 + 0x168);
    if (iVar3 < 1) {
      iVar3 = -0x1fffc000;
      if ((iVar6 < 1) && (iVar3 = iVar6, iVar6 < -0x1fffc000)) {
        iVar3 = -0x1fffc000;
      }
    }
    else {
      iVar3 = 0x1fffc000;
      if ((-1 < iVar6) && (iVar3 = iVar6, 0x1fffc000 < iVar6)) {
        iVar3 = 0x1fffc000;
      }
    }
    uVar1 = *(ushort *)(ar4 + 0x15e);
    iVar3 = (iVar3 >> 0xe) + (uint)uVar1;
    if ((int)(uint)*(ushort *)(ar4 + 0x160) < iVar3) {
      *(undefined2 *)(ar4 + 0x15e) = *(undefined2 *)(ar4 + 0x160);
    }
    else {
      *(short *)(ar4 + 0x15e) = (short)iVar3;
    }
    uVar2 = 3;
    uVar5 = libgcc_divide_helper_010468((uint)uVar1,3);
    if (extraout_r3 < (int)(uVar5 & 0xffff)) {
      uVar2 = libgcc_divide_helper_010468((uint)uVar1,uVar2);
      *(short *)(ar4 + 0x15e) = (short)uVar2;
    }
  }
  uVar2 = 0x15c;
  if (*(char *)(ar4 + 0x15c) != '\0') {
    iVar6 = (uint)*(byte *)(ar4 + 0x198) * 4;
    iVar3 = *(byte *)(ar4 + 0x198) + 1;
    *(uint *)(ar4 + 0x170 + iVar6) =
         (uint)*(ushort *)(ar4 + 0x50) * (uint)*(ushort *)(ar4 + 0x15e) >> 3;
    *(uint *)(iVar6 + ar4 + 0x184) =
         (uint)*(ushort *)(ar4 + 0x50) * (uint)*(ushort *)(ar4 + 0x50) >> 3;
    if (iVar3 == 5) {
      iVar3 = iVar4;
    }
    uVar2 = 0x198;
    *(char *)(ar4 + 0x198) = (char)iVar3;
  }
  return uVar2;
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
  uint *ar6_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *a6;
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
  ar6_00 = (uint *)(**(code **)(a4 + 0x10))(a4,(ar5 - 1) * 2 + 8,ar6,ar7);
  *ar6_00 = ar5;
  iVar3 = ar5 - 1;
  for (iVar4 = *(int *)(iVar4 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
    if ((*(int *)(iVar4 + 0x10) != 0) &&
       (iVar1 = *(int *)(iVar4 + 0x10) - unaff_r14[0x12],
       (uint)((int)(iVar1 + (uint)(iVar1 < 0)) >> 1) < uVar2)) {
      iVar1 = iVar3 * 2;
      iVar3 = iVar3 + -1;
      *(undefined2 *)((int)ar6_00 + iVar1 + 4) = **(undefined2 **)(iVar4 + 0x10);
    }
  }
  a7 = 1;
  a6 = ar6_00;
  uVar2 = (*(code *)PTR_FUN_8c11931c)(unaff_r14,0xc,ar6_00,1);
  bVar5 = (uVar2 & 0xff) == 0;
  if (bVar5) {
    (**(code **)(a4 + 0x18))(a4,ar6_00,a6,a7);
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
  short *ar7_00;
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
  ar7_00 = *(short **)(ar4 + 0x54);
  iVar9 = (int)ar7_00[1];
  psVar4 = *(short **)(ar7_00 + 0xc);
  if (1 < uVar8 + *(int *)(DAT_8c11944c + ar4) * -2) {
    do {
      if ((int)*psVar4 < (int)(short)iVar9) {
        iVar9 = (int)*psVar4;
        ar7_00 = psVar4;
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
  psVar12 = ar7_00;
  if (*psVar4 < sStack_2c) {
    sStack_2c = *psVar4;
    psVar12 = psVar4;
  }
  for (; uVar7 < uVar8 - 1; uVar7 = uVar7 + 1) {
    psVar4 = *(short **)(psVar4 + 0xc);
  }
  iVar1 = iVar9;
  psStack_24 = ar7_00;
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
    uVar2 = (*(code *)PTR_FUN_8c119588)(ar4,piVar10,iVar9,ar7_00);
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
          (*(code *)PTR_FUN_8c11958c)(ar4,piVar3,iVar9,ar7_00);
        }
      }
      psVar4 = *(short **)(psVar4 + 0xc);
      uStack_30 = uStack_30 + 1;
    } while (uStack_30 < uVar8 + *(int *)(DAT_8c119580 + ar4) * -2);
  }
  iVar1 = *piVar10;
  *piVar10 = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    (*(code *)PTR_FUN_8c11958c)(ar4,piVar10,iVar9,ar7_00);
  }
  if (sStack_2c < psVar4[1]) {
    psVar4[1] = sStack_2c;
    piVar10 = *(int **)(DAT_8c11957a + ar4);
    piVar3 = *(int **)(psVar12 + 2);
    if (piVar10[1] == 0) {
      uVar2 = (*(code *)PTR_FUN_8c119588)(ar4,piVar10,iVar9,ar7_00);
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
      (*(code *)PTR_FUN_8c1196d0)(ar4,piVar3,iVar9,ar7_00);
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
            (*(code *)PTR_FUN_8c1196d0)(ar4,piVar10,iVar9,ar7_00);
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
        (*(code *)PTR_FUN_8c1196d0)(ar4,piVar10,iVar9,ar7_00);
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
            (*(code *)PTR_FUN_8c1197c8)(ar4,piVar10,iVar9,ar7_00);
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

/* WARNING: Removing unreachable block (ram,0x8c11978e) */
/* WARNING: Removing unreachable block (ram,0x8c119782) */
/* WARNING: Removing unreachable block (ram,0x8c119772) */
/* WARNING: Removing unreachable block (ram,0x8c11977c) */
/* WARNING: Removing unreachable block (ram,0x8c11978c) */
/* WARNING: Removing unreachable block (ram,0x8c119796) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c119706(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  iStack_10 = FUN_8c11b5a0(ar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x1b4) == 0) {
    iStack_18 = 0;
    iStack_14 = *(int *)(ar4 + 300) + 1;
    iStack_24 = (int)*(short *)(ar4 + 0x1b0) + *(int *)(ar4 + 0x1ac);
  }
  else {
    iStack_14 = *(int *)(iStack_10 + 0x14);
    iVar3 = iStack_10;
    for (iVar2 = iStack_10; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if ((*(uint *)(ar4 + 0x1b8) == (*(uint *)(iVar2 + 0x10) & 0xffff)) &&
         (*(int *)(iVar2 + 4) != 0)) {
        iVar3 = iVar2;
      }
    }
    iStack_18 = *(int *)(iVar3 + 0x14);
    iStack_24 = *(int *)(iStack_10 + 0xc) - *(int *)(iVar3 + 0xc);
  }
  iStack_20 = iStack_14 - iStack_18;
  fStack_1c = (float)iStack_24;
  if (iStack_24 < 0) {
    fStack_1c = fStack_1c + 4.2949673e+09;
  }
  fVar4 = (float)iStack_20;
  if (iStack_20 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  fStack_1c = fStack_1c / fVar4;
  iStack_28 = (int)*(short *)(ar4 + 0x1b0) + *(int *)(ar4 + 0x1ac);
  uVar1 = FUN_8c120348(ar4,0xc,&iStack_28,2);
  return uVar1;
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
  int ar6_00;
  int ar7_00;
  int *piVar9;
  uint uVar10;
  short *psVar11;
  int *piVar12;
  uint uStack_30;
  
  sVar7 = DAT_8c1198c0;
  ar6_00 = (int)DAT_8c1198c0;
  psVar11 = (short *)0x0;
  ar7_00 = (int)DAT_8c1198bc;
  psVar8 = *(short **)(ar4 + 0x54);
  sVar1 = *(short *)(DAT_8c1198be + ar4);
  iVar2 = DAT_8c1198be + 0x12;
  *(int *)(iVar2 + ar4) = *(int *)(iVar2 + ar4) + (int)sVar1;
  uVar6 = (uint)*(ushort *)(ar4 + 0x50);
  uVar10 = 0;
  if (uVar6 != 0) {
    do {
      iVar2 = (int)psVar8[1];
      if (iVar2 < ar6_00) {
        iVar2 = iVar2 - sVar1;
        *psVar8 = (short)iVar2;
        iVar2 = iVar2 + *(short *)(ar5 + *(int *)(psVar8 + 6) * 2);
        psVar8[1] = (short)iVar2;
      }
      else {
        *psVar8 = sVar7;
      }
      if (iVar2 < (short)ar7_00) {
        ar7_00 = iVar2;
      }
      **(int **)(psVar8 + 4) = **(int **)(psVar8 + 4) + 1;
      uVar10 = uVar10 + 1;
      *(undefined4 *)(psVar8 + 2) = *(undefined4 *)(psVar8 + 4);
      psVar8 = *(short **)(psVar8 + 0xc);
    } while (uVar10 < uVar6);
  }
  *(short *)(DAT_8c1198be + ar4) = (short)ar7_00;
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
          uVar3 = (*(code *)PTR_FUN_8c1198cc)(ar4,piVar9,ar6_00,ar7_00);
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
            (*(code *)PTR_FUN_8c119978)(ar4,piVar12,ar6_00,ar7_00);
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
              uVar3 = (*(code *)PTR_FUN_8c11997c)(ar4,piVar12,ar6_00,ar7_00);
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
              (*(code *)PTR_FUN_8c119aa8)(ar4,piVar9,ar6_00,ar7_00);
            }
          }
        }
      }
      iVar2 = **(int **)(psVar11 + 2) + -1;
      **(int **)(psVar11 + 2) = iVar2;
      if (iVar2 < 1) {
        (*(code *)PTR_FUN_8c119aa8)(ar4,*(undefined4 *)(psVar11 + 2),ar6_00,ar7_00);
      }
      uStack_30 = uStack_30 + 1;
      psVar8 = *(short **)(psVar11 + 0xc);
    } while (uStack_30 < uVar6);
  }
  *(short *)(DAT_8c119aa0 + ar4) = psVar11[1];
  return 0;
}



/* FUN_8c119a18 @ 8c119a18 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c119b0c) */
/* WARNING: Removing unreachable block (ram,0x8c119b08) */
/* WARNING: Removing unreachable block (ram,0x8c119af8) */
/* WARNING: Removing unreachable block (ram,0x8c119af0) */
/* WARNING: Removing unreachable block (ram,0x8c119adc) */
/* WARNING: Removing unreachable block (ram,0x8c119ad8) */
/* WARNING: Removing unreachable block (ram,0x8c119a96) */
/* WARNING: Removing unreachable block (ram,0x8c119a92) */
/* WARNING: Removing unreachable block (ram,0x8c119a88) */
/* WARNING: Removing unreachable block (ram,0x8c119a80) */
/* WARNING: Removing unreachable block (ram,0x8c119a7c) */
/* WARNING: Removing unreachable block (ram,0x8c119a68) */
/* WARNING: Removing unreachable block (ram,0x8c119a5e) */
/* WARNING: Removing unreachable block (ram,0x8c119a5a) */
/* WARNING: Removing unreachable block (ram,0x8c119a54) */
/* WARNING: Removing unreachable block (ram,0x8c119a4e) */
/* WARNING: Removing unreachable block (ram,0x8c119a42) */
/* WARNING: Removing unreachable block (ram,0x8c119a3a) */
/* WARNING: Removing unreachable block (ram,0x8c119a2a) */
/* WARNING: Removing unreachable block (ram,0x8c119a18) */
/* WARNING: Removing unreachable block (ram,0x8c119a20) */
/* WARNING: Removing unreachable block (ram,0x8c119a30) */
/* WARNING: Removing unreachable block (ram,0x8c119a3c) */
/* WARNING: Removing unreachable block (ram,0x8c119a4c) */
/* WARNING: Removing unreachable block (ram,0x8c119a50) */
/* WARNING: Removing unreachable block (ram,0x8c119a58) */
/* WARNING: Removing unreachable block (ram,0x8c119a5c) */
/* WARNING: Removing unreachable block (ram,0x8c119a66) */
/* WARNING: Removing unreachable block (ram,0x8c119a6a) */
/* WARNING: Removing unreachable block (ram,0x8c119a7e) */
/* WARNING: Removing unreachable block (ram,0x8c119a86) */
/* WARNING: Removing unreachable block (ram,0x8c119a8e) */
/* WARNING: Removing unreachable block (ram,0x8c119a94) */
/* WARNING: Removing unreachable block (ram,0x8c119a98) */
/* WARNING: Removing unreachable block (ram,0x8c119ada) */
/* WARNING: Removing unreachable block (ram,0x8c119aee) */
/* WARNING: Removing unreachable block (ram,0x8c119af2) */
/* WARNING: Removing unreachable block (ram,0x8c119b04) */
/* WARNING: Removing unreachable block (ram,0x8c119b0a) */
/* WARNING: Removing unreachable block (ram,0x8c119b12) */
/* WARNING: Unknown calling convention */

int FUN_8c119a18(int ar4,int ar5,int ar6,undefined4 ar7)

{
  float extraout_fr0;
  float extraout_fr0_00;
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  
  cVar4 = '\0';
  fVar1 = (float)ar5;
  if (ar5 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)ar6;
  if (ar6 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = (float)ar4;
  if (ar4 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar3 = (fVar1 - fVar2) / fVar3;
  fVar1 = 0.08544444;
  if (-26.0 <= fVar3) {
    if (78.0 < fVar3) {
      fVar1 = -4.4671087;
      thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
      if (cVar4 == '\0') {
        fVar1 = 1.0;
      }
      fVar1 = 10000.0 / (extraout_fr0_00 + fVar1);
    }
    else {
      fVar1 = (91.0 - fVar3) * 76.899994;
    }
  }
  else {
    thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
    if (cVar4 == '\0') {
      fVar1 = 1.0;
    }
    fVar1 = 10000.0 / (extraout_fr0 + fVar1);
  }
  if (2.1474836e+09 <= fVar1) {
    fVar1 = fVar1 - 4.2949673e+09;
  }
  return (int)fVar1;
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

/* WARNING: Removing unreachable block (ram,0x8c119c64) */
/* WARNING: Removing unreachable block (ram,0x8c119c56) */
/* WARNING: Removing unreachable block (ram,0x8c119c50) */
/* WARNING: Removing unreachable block (ram,0x8c119c4a) */
/* WARNING: Removing unreachable block (ram,0x8c119c32) */
/* WARNING: Removing unreachable block (ram,0x8c119c2e) */
/* WARNING: Removing unreachable block (ram,0x8c119c1a) */
/* WARNING: Removing unreachable block (ram,0x8c119bd8) */
/* WARNING: Removing unreachable block (ram,0x8c119bd4) */
/* WARNING: Removing unreachable block (ram,0x8c119bc6) */
/* WARNING: Removing unreachable block (ram,0x8c119bc0) */
/* WARNING: Removing unreachable block (ram,0x8c119bbc) */
/* WARNING: Removing unreachable block (ram,0x8c119ba8) */
/* WARNING: Removing unreachable block (ram,0x8c119b9c) */
/* WARNING: Removing unreachable block (ram,0x8c119b98) */
/* WARNING: Removing unreachable block (ram,0x8c119b90) */
/* WARNING: Removing unreachable block (ram,0x8c119b8c) */
/* WARNING: Removing unreachable block (ram,0x8c119b7c) */
/* WARNING: Removing unreachable block (ram,0x8c119b6c) */
/* WARNING: Removing unreachable block (ram,0x8c119b5c) */
/* WARNING: Removing unreachable block (ram,0x8c119b40) */
/* WARNING: Removing unreachable block (ram,0x8c119b16) */
/* WARNING: Removing unreachable block (ram,0x8c119b36) */
/* WARNING: Removing unreachable block (ram,0x8c119b52) */
/* WARNING: Removing unreachable block (ram,0x8c119b64) */
/* WARNING: Removing unreachable block (ram,0x8c119b76) */
/* WARNING: Removing unreachable block (ram,0x8c119b82) */
/* WARNING: Removing unreachable block (ram,0x8c119b8e) */
/* WARNING: Removing unreachable block (ram,0x8c119b94) */
/* WARNING: Removing unreachable block (ram,0x8c119b9a) */
/* WARNING: Removing unreachable block (ram,0x8c119b9e) */
/* WARNING: Removing unreachable block (ram,0x8c119baa) */
/* WARNING: Removing unreachable block (ram,0x8c119bbe) */
/* WARNING: Removing unreachable block (ram,0x8c119bc8) */
/* WARNING: Removing unreachable block (ram,0x8c119bd2) */
/* WARNING: Removing unreachable block (ram,0x8c119bd6) */
/* WARNING: Removing unreachable block (ram,0x8c119c18) */
/* WARNING: Removing unreachable block (ram,0x8c119c1c) */
/* WARNING: Removing unreachable block (ram,0x8c119c30) */
/* WARNING: Removing unreachable block (ram,0x8c119c44) */
/* WARNING: Removing unreachable block (ram,0x8c119c4c) */
/* WARNING: Removing unreachable block (ram,0x8c119c54) */
/* WARNING: Removing unreachable block (ram,0x8c119c58) */
/* WARNING: Removing unreachable block (ram,0x8c119b26) */
/* WARNING: Removing unreachable block (ram,0x8c119ba6) */
/* WARNING: Removing unreachable block (ram,0x8c119bce) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c119b16(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  undefined8 in_dr0;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  
  fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
  if (ar6 != ar7) {
    cVar7 = '\0';
    fVar2 = (float)ar5;
    if (ar5 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    iVar1 = *(int *)(*(int *)(ar4 + 0x1cc) + ar6 * 4);
    fVar3 = (float)iVar1;
    if (iVar1 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    iVar1 = *(int *)(*(int *)(ar4 + 0x1cc) + ar7 * 4);
    fVar4 = (float)iVar1;
    if (iVar1 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    fVar5 = (float)(ar6 - ar7);
    if (ar6 - ar7 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    fVar5 = ((fVar2 - fVar3) + fVar4) / fVar5;
    fVar2 = 0.08544444;
    if (-26.0 <= fVar5) {
      if (78.0 < fVar5) {
        fVar2 = -4.4671087;
        thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
        if (cVar7 == '\0') {
          fVar2 = 1.0;
        }
        fVar6 = 10000.0 / (fVar6 + fVar2);
      }
      else {
        fVar6 = (91.0 - fVar5) * 76.899994;
      }
    }
    else {
      thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
      if (cVar7 == '\0') {
        fVar2 = 1.0;
      }
      fVar6 = 10000.0 / (fVar6 + fVar2);
    }
    fVar6 = fVar6 + 0.5;
    if (2.1474836e+09 <= fVar6) {
      fVar6 = fVar6 - 4.2949673e+09;
    }
    return (int)fVar6;
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
  int *ar5_00;
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
  ar5_00 = *(int **)(DAT_8c119d5c + ar4);
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
      if (ar5_00[4] == 0) {
        piVar3 = (int *)(*(code *)PTR_FUN_8c119ea4)(ar4,ar5_00,ar6,ar7);
      }
      else {
        piVar3 = (int *)ar5_00[4];
      }
      ar5_00[4] = (int)piStack_78;
      piStack_78 = ar5_00;
      ar5_00[3] = 0;
      *ar5_00 = uStack_84;
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
        *(undefined2 *)(ar5_00 + 5) = puStack_7c._0_2_;
        iVar4 = (iStack_68 - iVar4) - iStack_64;
        ar5_00[2] = iVar4;
        ar7 = puStack_80;
        iVar4 = FUN_8c119b16(ar4,iVar4,puStack_7c,puStack_80);
        ar5_00[1] = iVar4;
        ar6 = puStack_7c;
      }
      else {
        ar6 = (uint *)puVar6[4];
        uVar2 = (*(code *)PTR_FUN_8c119ea8)(ar4,uStack_84,ar6,ar7);
        *(short *)((int)ar5_00 + 0x16) = (short)uVar2;
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
      ar5_00 = piVar3;
      if (puVar9 == (undefined4 *)0x0) break;
      puVar6 = puVar9;
      iVar4 = puVar9[4];
    }
  }
  if (piStack_78 == (int *)0x0) {
    piVar10 = (int *)0x0;
    piVar3 = ar5_00;
  }
  else {
    if (ar5_00[4] == 0) {
      piVar3 = (int *)(*(code *)PTR_FUN_8c119fac)(ar4,ar5_00,ar6,ar7);
    }
    else {
      piVar3 = (int *)ar5_00[4];
    }
    ar5_00[3] = (int)piStack_78;
    if ((uint)*(ushort *)(piStack_78 + 5) < *puStack_48) {
      *puStack_48 = (uint)*(ushort *)(piStack_78 + 5);
      **(int **)((int)&uStack_84 + (int)DAT_8c11a0d6) = piStack_78[2];
    }
    piVar10 = ar5_00;
    if (cStack_6c == '\0') {
      ar5_00[2] = iStack_54;
      ar5_00[1] = iStack_50;
      *(short *)(ar5_00 + 5) = (short)puStack_60;
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
  undefined4 *ar5_00;
  char in_T;
  
  puVar3 = *(undefined4 **)(in_r0 + unaff_r12);
  if (in_T != '\x01') {
    do {
      ar5_00 = *(undefined4 **)(DAT_8c11a0dc + unaff_r12);
      if (ar5_00[1] == 0) {
        uVar1 = (*(code *)PTR_FUN_8c11a0e4)(unaff_r12,ar5_00,ar6,ar7);
        *(undefined4 *)(DAT_8c11a0dc + unaff_r12) = uVar1;
      }
      else {
        *(undefined4 *)(DAT_8c11a0dc + unaff_r12) = ar5_00[1];
      }
      ar5_00[4] = *(undefined4 *)(unaff_r13 + 0x10);
      *ar5_00 = 1;
      ar5_00[3] = *(undefined4 *)(unaff_r13 + 0xc);
      ar5_00[5] = *(undefined4 *)(unaff_r13 + 0x14);
      piVar2 = *(int **)(unaff_r13 + 4);
      ar5_00[1] = piVar2;
      *piVar2 = *piVar2 + 1;
      ar5_00[2] = unaff_r10;
      if (unaff_r11 != (undefined4 *)0x0) {
        unaff_r11[2] = ar5_00;
      }
      unaff_r13 = *(int *)(unaff_r13 + 8);
      unaff_r11 = ar5_00;
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
  int *ar5_00;
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
  ar5_00 = *(int **)(DAT_8c11a1dc + ar4);
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
          ar5_00 = (int *)*ar5_00;
          if (ar5_00 == *(int **)(DAT_8c11a41c + ar4)) {
            a5_00 = ar5_00;
            (*(code *)PTR_FUN_8c11a424)(ar4,ar5_00,ar6,ar7);
          }
          ar5_00[2] = (int)piVar7;
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
  *(int *)(iVar3 + ar4) = *ar5_00;
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
  for (; ar5_00 != piVar9; ar5_00 = (int *)ar5_00[1]) {
    piVar7 = (int *)ar5_00[2];
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
  int ar5_00;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  iVar3 = ar4[0x15];
  ar5_00 = 0;
  uVar4 = 0;
  if ((short)ar4[0x14] != 0) {
    do {
      if (((**(ushort **)(iVar3 + 0xc) & 1) != 0) &&
         (uStack_28 = CONCAT22(*(undefined2 *)(*(int *)(iVar3 + 0xc) + 4),
                               *(undefined2 *)(*(int *)(iVar3 + 0xc) + 2)),
         (*(ushort *)(*(int *)((int)DAT_8c11a74c + (int)ar4) + uStack_28 * 2) & 2) != 0)) {
        ar5_00 = ar5_00 + 1;
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(iVar3 + 0x18);
    } while (uVar4 < *(ushort *)(ar4 + 0x14));
  }
  if (ar5_00 == 0) {
    *ar5 = 0;
  }
  else {
    uVar1 = (**(code **)(*ar4 + 0x10))(*ar4,ar5_00 << 2,ar6,ar7);
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
    (*(code *)PTR_FUN_8c11a888)(*ar5,ar5_00,4,PTR_LAB_8c11a884);
    uVar1 = FUN_8c11a588(ar4,*ar5,ar5_00,a7);
    *(short *)((int)DAT_8c11a876 + (int)ar4) = (short)uVar1;
  }
  return ar5_00;
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
  undefined4 *ar4_00;
  undefined4 *ar4_01;
  int iVar1;
  int iVar2;
  
  ar4_00 = (undefined4 *)
           (**(code **)(*ar4 + 0x10))
                     (*ar4,(*(int *)((int)DAT_8c11afae + (int)ar4) + (int)DAT_8c11afac) * 4,ar6,ar7)
  ;
  ar4_01 = (undefined4 *)
           (**(code **)(*ar4 + 0x10))
                     (*ar4,(*(int *)((int)DAT_8c11afae + (int)ar4) + (int)DAT_8c11afac) * 4,ar6,ar7)
  ;
  iVar1 = (int)DAT_8c11afae;
  if (*(int *)(iVar1 + (int)ar4) == 0) {
    *ar4_00 = 0;
    *ar4_01 = 0;
  }
  else {
    iVar2 = (*(int *)(iVar1 + (int)ar4) + 1) * 4;
    (*(code *)PTR_memmove_8c11afbc)(ar4_00,*(undefined4 *)(iVar1 + -8 + (int)ar4),iVar2,ar7);
    (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)DAT_8c11afb0 + (int)ar4),iVar2,ar7);
    iVar1 = (*(int *)((int)DAT_8c11afae + (int)ar4) + 1) * 4;
    (*(code *)PTR_memmove_8c11afbc)(ar4_01,*(undefined4 *)(DAT_8c11afae + -4 + (int)ar4),iVar1,ar7);
    (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)DAT_8c11afb2 + (int)ar4),iVar1,ar7);
  }
  iVar1 = (int)DAT_8c11afb0;
  iVar2 = (int)DAT_8c11afb4;
  *(undefined4 **)(iVar1 + (int)ar4) = ar4_00;
  *(undefined4 **)(iVar1 + 4 + (int)ar4) = ar4_01;
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
  uint ar5_00;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 ar6_00;
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
        ar6_00 = 7;
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
        uVar11 = (*(code *)PTR_FUN_8c11b324)(ar4,uVar8,ar6_00,ar6);
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
          ar5_00 = ar6[5];
          uVar6 = ar6[7];
          if (*(uint *)((int)DAT_8c11b42a + (int)ar4) != uVar11) {
            iVar2 = (int)DAT_8c11b42c;
            *(undefined1 *)(iVar2 + (int)ar4) = 1;
            *(uint *)(iVar2 + 4 + (int)ar4) = uVar11;
          }
          *(uint *)((int)DAT_8c11b42e + (int)ar4) = uVar5;
          uVar11 = (*(code *)PTR_FUN_8c11b43c)(ar4,uVar10,ar6,ar7);
          if ((uVar11 & 0xff) == 0) {
            if ((int)*(short *)((int)DAT_8c11b430 + (int)ar4) != ar5_00) {
              (*(code *)PTR_FUN_8c11b440)(ar4,ar5_00,ar6,ar7);
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
  int *ar5_00;
  
  iVar6 = *(int *)(ar4 + 0x54);
  uVar4 = 1;
  if (1 < *(ushort *)(ar4 + 0x50)) {
    do {
      uVar4 = uVar4 + 1;
      iVar6 = *(int *)(iVar6 + 0x18);
    } while (uVar4 < *(ushort *)(ar4 + 0x50));
  }
  piVar5 = *(int **)(iVar6 + 8);
  ar5_00 = piVar5;
  if (*(int *)(DAT_8c11b602 + ar4) == 0) {
    sVar1 = *(short *)(DAT_8c11b604 + ar4);
    ar5_00 = *(int **)(DAT_8c11b606 + ar4);
    if (ar5_00[1] == 0) {
      uVar2 = (*(code *)PTR_FUN_8c11b620)(ar4,ar5_00,ar6,ar7);
      *(undefined4 *)(DAT_8c11b606 + ar4) = uVar2;
    }
    else {
      *(int *)(DAT_8c11b606 + ar4) = ar5_00[1];
    }
    iVar3 = (int)DAT_8c11b69c;
    ar5_00[1] = (int)piVar5;
    *piVar5 = *piVar5 + 1;
    ar5_00[4] = *(int *)(iVar6 + 0xc);
    *ar5_00 = 0;
    iVar6 = (int)DAT_8c11b69e;
    ar5_00[5] = *(int *)(iVar3 + ar4);
    ar5_00[3] = (int)sVar1 + *(int *)(iVar6 + ar4);
    ar5_00[5] = ar5_00[5] + 1;
  }
  return ar5_00;
}



/* FUN_8c11b666 @ 8c11b666 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c11b666(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c11b6b0)
                    (ar4,ar5,ar7,ar7,PTR_FUN_8c11b6ac,PTR_LAB_8c11b6a8,PTR_FUN_8c11b6a4,
                     (int)DAT_8c11b6a0);
  if (iVar1 != 0) {
    iVar2 = (int)DAT_8c11b6a2;
    *(undefined **)(iVar2 + iVar1) = PTR_FUN_8c11b6b4;
    *(undefined4 *)(iVar2 + -4 + iVar1) = 0;
  }
  return iVar1;
}



/* FUN_8c11b6b8 @ 8c11b6b8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c11b7b6) */
/* WARNING: Removing unreachable block (ram,0x8c11b7b0) */
/* WARNING: Removing unreachable block (ram,0x8c11b7aa) */
/* WARNING: Removing unreachable block (ram,0x8c11b798) */
/* WARNING: Removing unreachable block (ram,0x8c11b78c) */
/* WARNING: Removing unreachable block (ram,0x8c11b6d0) */
/* WARNING: Removing unreachable block (ram,0x8c11b782) */
/* WARNING: Removing unreachable block (ram,0x8c11b792) */
/* WARNING: Removing unreachable block (ram,0x8c11b7a4) */
/* WARNING: Removing unreachable block (ram,0x8c11b7ac) */
/* WARNING: Removing unreachable block (ram,0x8c11b7b4) */
/* WARNING: Removing unreachable block (ram,0x8c11b7b8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11b6b8(int ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int ar5_00;
  float fVar9;
  float in_fr4;
  
  uVar5 = 1;
  uVar7 = 0x1c;
  piVar1 = (int *)(**(code **)(ar4 + 0x14))(ar4,1,0x1c,ar7);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_8c112350(ar4,uVar5,uVar7,ar7);
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      uVar8 = (uint)*(ushort *)((int)ar6 + 6);
      uVar5 = *ar6;
      uVar6 = (uint)*(ushort *)(ar6 + 1);
      FUN_8c112642(*piVar1,uVar6,uVar8,uVar5,ar5);
      iVar2 = FUN_8c112350(ar4,uVar6,uVar8,uVar5);
      piVar1[1] = iVar2;
      if (iVar2 != 0) {
        uVar8 = (uint)*(ushort *)((int)ar6 + 0xe);
        uVar5 = ar6[2];
        uVar6 = (uint)*(ushort *)(ar6 + 3);
        FUN_8c112642(piVar1[1],uVar6,uVar8,uVar5);
        iVar2 = FUN_8c112350(ar4,uVar6,uVar8,uVar5);
        piVar1[3] = iVar2;
        if (iVar2 != 0) {
          uVar8 = (uint)*(ushort *)((int)ar6 + 0x16);
          uVar5 = ar6[4];
          uVar6 = (uint)*(ushort *)(ar6 + 5);
          FUN_8c112642(piVar1[3],uVar6,uVar8,uVar5);
          fVar9 = (float)(ar5 + -1);
          if (ar5 + -1 < 0) {
            fVar9 = fVar9 + 4.2949673e+09;
          }
          fVar9 = fVar9 / in_fr4 + 0.5;
          if (2.1474836e+09 <= fVar9) {
            fVar9 = fVar9 - 4.2949673e+09;
          }
          iVar2 = FUN_8c112350(ar4,uVar6,uVar8,uVar5);
          piVar1[4] = iVar2;
          if (iVar2 != 0) {
            uVar7 = 0;
            uVar5 = 1;
            FUN_8c112642(piVar1[4],ar5,1,0);
            iVar2 = FUN_8c112350(ar4,ar5,uVar5,uVar7);
            piVar1[5] = iVar2;
            if (iVar2 != 0) {
              uVar5 = 1;
              ar5_00 = (int)fVar9 + 2;
              iVar2 = ar5_00;
              iVar4 = ar4;
              iVar3 = FUN_8c112410(piVar1[5],ar5_00,1,ar4);
              if (iVar3 != 0) {
                iVar2 = FUN_8c1123b0(ar4,iVar2,uVar5,iVar4);
                piVar1[6] = iVar2;
                if (iVar2 != 0) {
                  uVar5 = 1;
                  iVar2 = ar4;
                  iVar4 = FUN_8c112482(piVar1[6],1,ar5_00,ar4);
                  if (iVar4 != 0) {
                    iVar4 = FUN_8c112350(ar4,uVar5,ar5_00,iVar2);
                    piVar1[2] = iVar4;
                    if ((iVar4 != 0) &&
                       (iVar2 = FUN_8c1124de(piVar1[2],piVar1[1],ar4,iVar2), iVar2 != 0)) {
                      return piVar1;
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

/* WARNING: Removing unreachable block (ram,0x8c11ba32) */
/* WARNING: Removing unreachable block (ram,0x8c11ba52) */
/* WARNING: Removing unreachable block (ram,0x8c11ba30) */
/* WARNING: Removing unreachable block (ram,0x8c11bb00) */
/* WARNING: Removing unreachable block (ram,0x8c11ba54) */
/* WARNING: Removing unreachable block (ram,0x8c11ba34) */
/* WARNING: Removing unreachable block (ram,0x8c11ba36) */
/* WARNING: Removing unreachable block (ram,0x8c11ba4e) */
/* WARNING: Removing unreachable block (ram,0x8c11ba50) */
/* WARNING: Removing unreachable block (ram,0x8c11ba56) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11b93c(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ain0;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint *ar7_00;
  undefined4 *puVar7;
  uint uVar8;
  float *pfVar9;
  int *piVar10;
  int ar4_00;
  int *piVar11;
  int *ar4_01;
  int *ar4_02;
  float fVar12;
  ulonglong in_dr2;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 in_xd2;
  char cVar16;
  
  uVar3 = ar4[1];
  piVar10 = (int *)*ar4;
  ain0 = ar4[3];
  ar4_02 = (int *)ar4[2];
  ar4_00 = ar4[6];
  piVar11 = (int *)ar4[5];
  ar4_01 = (int *)ar4[4];
  FUN_8c1129e4(ar4_02,uVar3,ar6,ar7,ain0);
  ar4_01[3] = ar5;
  ar4_01[4] = ar4_01[2] * 4 + ar5;
  FUN_8c112658(ar4_01,uVar3,ar6,ar7,ain0);
  FUN_8c112680(ar4_01,uVar3,ar6,ar7);
  cVar16 = '\0';
  iVar2 = FUN_8c112958(ar4_02,ain0,ar4_01,ar7);
  if (iVar2 == 0) {
    iVar2 = *(int *)(ar4_00 + 4);
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)(*(int *)(ar4_00 + 0xc) + iVar2 * 4) = iVar2;
    }
    do {
      uVar8 = ar4_02[1];
      pfVar5 = (float *)(*piVar11 * 4 + piVar11[3]);
      pfVar6 = (float *)(*ar4_02 * uVar8 * 4 + ar4_02[3]);
      ar7_00 = (uint *)(*ar4_01 * 4 + ar4_01[3] + (*ar4_01 - uVar8) * -4);
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        ar7_00 = ar7_00 + -1;
        if (cVar16 == '\0') {
          in_dr2 = (ulonglong)*ar7_00;
        }
        else {
          in_xd2 = *(undefined8 *)ar7_00;
        }
        pfVar4 = (float *)((uVar8 - 1) * *ar4_02 * 4 + ar4_02[3] + uVar8 * 4 + -4);
        if (cVar16 == '\0') {
          fVar15 = *pfVar4;
          pfVar5 = pfVar5 + -1;
          *pfVar5 = (float)in_dr2;
        }
        else {
          fVar15 = (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20);
          pfVar5 = pfVar5 + -2;
          *(undefined8 *)pfVar5 = in_xd2;
        }
        pfVar9 = pfVar5;
        for (pfVar4 = pfVar4 + *ar4_02; fVar12 = (float)in_dr2, pfVar4 < pfVar6;
            pfVar4 = pfVar4 + *ar4_02) {
          pfVar9 = pfVar9 + 1;
          if (cVar16 == '\0') {
            uVar13 = CONCAT44(*pfVar4,*pfVar9);
          }
          else {
            in_xd2 = *(undefined8 *)pfVar9;
            uVar13 = *(undefined8 *)pfVar4;
          }
          cVar16 = '\0';
          fVar14 = (float)((ulonglong)uVar13 >> 0x20) * (float)uVar13;
          fVar12 = *pfVar5 - fVar14;
          in_dr2 = CONCAT44(fVar14,fVar12);
          *pfVar5 = fVar12;
        }
        if (cVar16 == '\0') {
          fVar12 = *pfVar5;
        }
        else {
          in_xd2 = *(undefined8 *)pfVar5;
        }
        cVar16 = '\0';
        *pfVar5 = fVar12 / fVar15;
        in_dr2 = 0;
        if ((0.0 < *pfVar5) && (2 < uVar8)) break;
        cVar16 = '\0';
      }
      if (uVar8 != 0) {
        pfVar5 = (float *)(uVar8 - 1);
        pfVar6 = pfVar5;
        iVar2 = FUN_8c112734(ar4_02,ar4_01,pfVar5,ar7_00);
        if (iVar2 != 0) goto LAB_8c11ba88;
        *piVar11 = *piVar11 + -1;
        cVar16 = '\0';
        FUN_8c1125e8(ar4_00,pfVar5,pfVar6,ar7_00,ain0);
      }
    } while (2 < uVar8);
    cVar16 = '\0';
    FUN_8c112a02(ar4_01,pfVar5,pfVar6,ar7_00,ain0);
    pfVar5 = (float *)piVar11[3];
    pfVar6 = pfVar5 + *piVar11;
    piVar1 = *(int **)(ar4_00 + 0xc);
    for (; pfVar5 < pfVar6; pfVar5 = pfVar5 + 1) {
      pfVar4 = (float *)ar4_01[3];
      puVar7 = (undefined4 *)(*piVar10 * *piVar1 * 4 + piVar10[3]);
      uVar8 = 0;
      if (ar4_01[2] != 0) {
        do {
          uVar8 = uVar8 + 1;
          if (cVar16 == '\0') {
            fVar15 = *pfVar5;
            uVar3 = *puVar7;
            puVar7 = puVar7 + 1;
            uVar13 = CONCAT44(*pfVar4,uVar3);
          }
          else {
            fVar15 = (float)((ulonglong)*(undefined8 *)pfVar5 >> 0x20);
            puVar7 = puVar7 + 2;
            uVar13 = *(undefined8 *)pfVar4;
          }
          cVar16 = '\0';
          *pfVar4 = fVar15 * (float)uVar13 + (float)((ulonglong)uVar13 >> 0x20);
          pfVar4 = pfVar4 + 1;
        } while (uVar8 < (uint)ar4_01[2]);
      }
      piVar1 = piVar1 + 1;
    }
    iVar2 = piVar10[1];
    uVar3 = 0;
    ar4_02[1] = iVar2;
    *piVar11 = iVar2;
    *(int *)(ar4_00 + 4) = iVar2;
  }
  else {
LAB_8c11ba88:
    uVar3 = 1;
  }
  return uVar3;
}



/* FUN_8c11bb54 @ 8c11bb54 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c11bb6a) */
/* WARNING: Removing unreachable block (ram,0x8c11bb66) */
/* WARNING: Removing unreachable block (ram,0x8c11bb80) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11bb54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(ar4 + 0x38);
  iVar2 = *(int *)(ar4 + 0x54);
  if (puVar1 < puVar1 + iVar2) {
    do {
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 1;
    } while (puVar1 < (undefined4 *)(*(int *)(ar4 + 0x38) + iVar2 * 4));
  }
  puVar1 = *(undefined4 **)(ar4 + 0x34);
  if (puVar1 < puVar1 + iVar2) {
    do {
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 1;
    } while (puVar1 < (undefined4 *)(*(int *)(ar4 + 0x34) + iVar2 * 4));
  }
  *(undefined2 *)(ar4 + 0x28) = 0;
  return 0x28;
}



/* FUN_8c11bb94 @ 8c11bb94 callers=2 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c11bb9c) */
/* WARNING: Removing unreachable block (ram,0x8c11bbb2) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11bb94(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  int ar7_00;
  
  ar5_00 = *(undefined4 **)(ar4 + 0x2c);
  ar7_00 = *(int *)(ar4 + 0x54);
  if (ar5_00 < ar5_00 + ar7_00 + *(int *)(ar4 + 0x54)) {
    do {
      *ar5_00 = 0x3f800000;
      ar5_00 = ar5_00 + 1;
    } while (ar5_00 < (undefined4 *)(*(int *)(ar4 + 0x2c) + ar7_00 * 4 + *(int *)(ar4 + 0x54) * 4));
  }
  *(undefined2 *)(ar4 + 0x2a) = 0;
  uVar1 = FUN_8c11bb54(ar4,ar5_00,ar7_00 * 4,ar7_00);
  return uVar1;
}



/* FUN_8c11bbd4 @ 8c11bbd4 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c11bbee) */
/* WARNING: Removing unreachable block (ram,0x8c11bc66) */
/* WARNING: Removing unreachable block (ram,0x8c11bc68) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11bbd4(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int ar6_00;
  int iVar6;
  undefined4 *ar5_00;
  int *piVar7;
  longlong in_dr0;
  float fVar8;
  float in_fr15;
  char cVar9;
  
  puVar3 = ar5 + 2;
  uVar5 = *(uint *)(ar4 + 0x54);
  *(short *)(ar4 + 0x28) = (short)*ar5;
  ar6_00 = uVar5 * 4;
  *(short *)(ar4 + 0x2a) = (short)ar5[1];
  memmove(*(undefined4 *)(ar4 + 0x2c),puVar3,ar6_00,ar7);
  memmove(*(undefined4 *)(ar4 + 0x34),puVar3 + uVar5,ar6_00,ar7);
  ar5_00 = puVar3 + uVar5 + uVar5;
  cVar9 = '\0';
  puVar3 = ar5_00;
  memmove(*(undefined4 *)(ar4 + 0x38),ar5_00,ar6_00,ar7);
  uVar2 = 0;
  piVar7 = ar5_00 + uVar5;
  uVar4 = 0;
  iVar6 = 0;
  if (cVar9 == '\0') {
    in_fr15 = 0.5;
  }
  if (uVar5 != 0) {
    do {
      fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
      iVar1 = *(int *)(ar4 + 0x30);
      thunk_FUN_8c013dfc(uVar2,puVar3,ar6_00,ar7);
      uVar4 = uVar4 + 1;
      in_dr0 = (ulonglong)(uint)(fVar8 * in_fr15) << 0x20;
      *(float *)(iVar1 + iVar6) = fVar8 * in_fr15;
      iVar6 = iVar6 + 4;
    } while (uVar4 < uVar5);
  }
  *(int *)(ar4 + 0x44) = *piVar7 * 4 + *(int *)(ar4 + 0x3c);
  *(int *)(ar4 + 0x48) = piVar7[1] * 4 + *(int *)(ar4 + 0x3c);
  uVar2 = memmove(*(undefined4 *)(ar4 + 0x3c),piVar7 + 2,uVar5 * (*(ushort *)(ar4 + 0x4c) + 1) * 4,
                  ar7);
  return uVar2;
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
  int ar6_00;
  int unaff_r13;
  int a4;
  int *piVar5;
  int unaff_r14;
  
  puVar1 = PTR_memmove_8c11bdf4;
  iVar4 = *(int *)(in_r0 + unaff_r14);
  ar6_00 = iVar4 * 4;
  *ar4 = (uint)*(ushort *)(unaff_r14 + 0x28);
  ar4[1] = (uint)*(ushort *)(unaff_r14 + 0x2a);
  (*(code *)puVar1)(unaff_r13,*(undefined4 *)(unaff_r14 + 0x2c),ar6_00,ar7);
  (*(code *)puVar1)(unaff_r13 + ar6_00,*(undefined4 *)(unaff_r14 + 0x34),ar6_00,ar7);
  a4 = unaff_r13 + ar6_00 + ar6_00;
  (*(code *)puVar1)(a4,*(undefined4 *)(unaff_r14 + 0x38),ar6_00,ar7);
  iVar3 = *(int *)(unaff_r14 + 0x44) - *(int *)(unaff_r14 + 0x3c);
  piVar5 = (int *)(a4 + ar6_00);
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

/* WARNING: Removing unreachable block (ram,0x8c11c092) */
/* WARNING: Removing unreachable block (ram,0x8c11c046) */
/* WARNING: Removing unreachable block (ram,0x8c11c008) */
/* WARNING: Removing unreachable block (ram,0x8c11bfec) */
/* WARNING: Removing unreachable block (ram,0x8c11c004) */
/* WARNING: Removing unreachable block (ram,0x8c11bfde) */
/* WARNING: Removing unreachable block (ram,0x8c11bf8c) */
/* WARNING: Removing unreachable block (ram,0x8c11bf68) */
/* WARNING: Removing unreachable block (ram,0x8c11bf60) */
/* WARNING: Removing unreachable block (ram,0x8c11bf58) */
/* WARNING: Removing unreachable block (ram,0x8c11bf38) */
/* WARNING: Removing unreachable block (ram,0x8c11bf36) */
/* WARNING: Removing unreachable block (ram,0x8c11bf2a) */
/* WARNING: Removing unreachable block (ram,0x8c11bf1a) */
/* WARNING: Removing unreachable block (ram,0x8c11bee2) */
/* WARNING: Removing unreachable block (ram,0x8c11bec6) */
/* WARNING: Removing unreachable block (ram,0x8c11bec0) */
/* WARNING: Removing unreachable block (ram,0x8c11beb6) */
/* WARNING: Removing unreachable block (ram,0x8c11be98) */
/* WARNING: Removing unreachable block (ram,0x8c11be84) */
/* WARNING: Removing unreachable block (ram,0x8c11be7e) */
/* WARNING: Removing unreachable block (ram,0x8c11bdc0) */
/* WARNING: Removing unreachable block (ram,0x8c11bdb6) */
/* WARNING: Removing unreachable block (ram,0x8c11bd7e) */
/* WARNING: Removing unreachable block (ram,0x8c11bd7a) */
/* WARNING: Removing unreachable block (ram,0x8c11bd7c) */
/* WARNING: Removing unreachable block (ram,0x8c11bd80) */
/* WARNING: Removing unreachable block (ram,0x8c11bdba) */
/* WARNING: Removing unreachable block (ram,0x8c11be48) */
/* WARNING: Removing unreachable block (ram,0x8c11be80) */
/* WARNING: Removing unreachable block (ram,0x8c11be92) */
/* WARNING: Removing unreachable block (ram,0x8c11be9c) */
/* WARNING: Removing unreachable block (ram,0x8c11beba) */
/* WARNING: Removing unreachable block (ram,0x8c11bec2) */
/* WARNING: Removing unreachable block (ram,0x8c11bed0) */
/* WARNING: Removing unreachable block (ram,0x8c11becc) */
/* WARNING: Removing unreachable block (ram,0x8c11bf1c) */
/* WARNING: Removing unreachable block (ram,0x8c11bf2e) */
/* WARNING: Removing unreachable block (ram,0x8c11bf30) */
/* WARNING: Removing unreachable block (ram,0x8c11bf3a) */
/* WARNING: Removing unreachable block (ram,0x8c11bf50) */
/* WARNING: Removing unreachable block (ram,0x8c11bf5e) */
/* WARNING: Removing unreachable block (ram,0x8c11bf62) */
/* WARNING: Removing unreachable block (ram,0x8c11bf64) */
/* WARNING: Removing unreachable block (ram,0x8c11bf82) */
/* WARNING: Removing unreachable block (ram,0x8c11bf86) */
/* WARNING: Removing unreachable block (ram,0x8c11bfce) */
/* WARNING: Removing unreachable block (ram,0x8c11bfea) */
/* WARNING: Removing unreachable block (ram,0x8c11bfd2) */
/* WARNING: Removing unreachable block (ram,0x8c11bfd4) */
/* WARNING: Removing unreachable block (ram,0x8c11bff0) */
/* WARNING: Removing unreachable block (ram,0x8c11c07e) */
/* WARNING: Removing unreachable block (ram,0x8c11c080) */
/* WARNING: Removing unreachable block (ram,0x8c11c054) */
/* WARNING: Removing unreachable block (ram,0x8c11bfd8) */
/* WARNING: Removing unreachable block (ram,0x8c11bf6a) */
/* WARNING: Removing unreachable block (ram,0x8c11be4a) */
/* WARNING: Removing unreachable block (ram,0x8c11bed6) */
/* WARNING: Removing unreachable block (ram,0x8c11bfd6) */
/* WARNING: Removing unreachable block (ram,0x8c11bfe4) */
/* WARNING: Removing unreachable block (ram,0x8c11c090) */
/* WARNING: Removing unreachable block (ram,0x8c11bef0) */
/* WARNING: Removing unreachable block (ram,0x8c11c056) */
/* WARNING: Removing unreachable block (ram,0x8c11bef2) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11bd6c(int ar4,undefined4 ar5,float *ar6,float *ar7)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int a4;
  uint a4_00;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  ushort uVar11;
  float *pfVar12;
  int ar4_00;
  float *pfVar13;
  float *pfVar14;
  undefined4 uVar15;
  undefined8 in_dr0;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong in_dr4;
  longlong lVar19;
  float fVar20;
  float in_fr15;
  float fVar21;
  char cVar22;
  undefined8 *in_stack_00000000;
  ushort uStack_48;
  
  cVar22 = '\0';
  iVar5 = *(int *)(ar4 + 0x54);
  ar4_00 = *(int *)(ar4 + 0x44);
  pfVar6 = *(float **)(ar4 + 0x40);
  pfVar4 = *(float **)(ar4 + 0x3c);
  uVar1 = *(ushort *)(ar4 + 0x4c);
  uStack_48 = *(ushort *)(ar4 + 0x2a);
  uVar11 = *(ushort *)(ar4 + 0x28);
  fVar21 = *(float *)(ar4 + 0x5c);
  lVar19 = (ulonglong)*(uint *)(ar4 + 0x60) << 0x20;
  pfVar12 = *(float **)(ar4 + 0x2c);
  pfVar14 = (float *)(iVar5 * 4);
  a4 = ar4_00;
  pfVar9 = ar6;
  pfVar10 = pfVar14;
  pfVar8 = ar7;
  memmove(ar4_00,ar6,pfVar14,ar7);
  fVar17 = (float)((ulonglong)lVar19 >> 0x20);
  fVar20 = (float)in_dr4;
  pfVar13 = (float *)(ar4_00 + (int)pfVar14);
  if ((float *)(ar4_00 + (int)pfVar14) == pfVar6) {
    pfVar13 = pfVar4;
  }
  if (cVar22 == '\0') {
    in_fr15 = 0.5;
  }
  if ((char)ar5 == '\0') {
    if (uStack_48 == 0) {
      pfVar6 = *(float **)(ar4 + 0x30);
      pfVar7 = ar6;
      for (pfVar4 = pfVar12; pfVar4 < (float *)((int)pfVar14 + (int)pfVar12); pfVar4 = pfVar4 + 1) {
        if (cVar22 == '\0') {
          *pfVar4 = *pfVar7;
          in_dr4 = in_dr4 & 0xffffffff;
        }
        else {
          *(ulonglong *)pfVar4 = *(ulonglong *)pfVar7;
          in_dr4 = *(ulonglong *)pfVar7;
        }
        thunk_FUN_8c013dfc(a4,pfVar9,pfVar10,pfVar8);
        fVar17 = (float)((ulonglong)lVar19 >> 0x20);
        fVar20 = (float)in_dr4;
        cVar22 = '\0';
        fVar16 = (float)((ulonglong)in_dr0 >> 0x20) * in_fr15;
        in_dr0 = CONCAT44(fVar16,(int)in_dr0);
        *pfVar6 = fVar16;
        pfVar7 = pfVar7 + 1;
        pfVar6 = pfVar6 + 1;
      }
    }
    if ((uint)uVar11 <= (uint)uVar1) {
      uVar11 = uVar11 + 1;
    }
    a4_00 = uVar1 + 1;
    if (uVar11 == a4_00) {
      if ((float)uStack_48 < fVar17) {
        uStack_48 = uStack_48 + 1;
        fVar17 = (float)uStack_48;
      }
      lVar19 = (ulonglong)(uint)(1.0 / fVar17) << 0x20;
      pfVar6 = *(float **)(ar4 + 0x30);
      pfVar7 = pfVar13;
      for (pfVar4 = pfVar12; cVar22 = '\0', pfVar4 < (float *)((int)pfVar14 + (int)pfVar12);
          pfVar4 = pfVar4 + 1) {
        fVar20 = *pfVar4;
        fVar17 = *pfVar7 - fVar20;
        if (fVar20 < fVar17) {
          fVar17 = *pfVar4;
        }
        uVar15 = (undefined4)in_dr0;
        *pfVar4 = fVar17 * (float)((ulonglong)lVar19 >> 0x20) + *pfVar4;
        thunk_FUN_8c013dfc(a4_00,pfVar9,pfVar10,pfVar8);
        in_dr0 = CONCAT44(fVar17 * in_fr15,uVar15);
        *pfVar6 = fVar17 * in_fr15;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 1;
      }
    }
  }
  else {
    uVar11 = 0;
  }
  if (cVar22 == '\0') {
    lVar19 = CONCAT44(0x3f800000,fVar20);
  }
  else {
    lVar19 = 0x358637bd3f800000;
  }
  if (uStack_48 != 0) {
    fVar17 = (float)((ulonglong)lVar19 >> 0x20);
    if (cVar22 == '\0') {
      lVar19 = (ulonglong)(uint)fVar17 << 0x20;
    }
    pfVar8 = *(float **)(ar4 + 0x34);
    pfVar4 = (float *)((int)pfVar14 + (int)pfVar8);
    uVar3 = (ulonglong)lVar19 >> 0x20;
    fVar20 = *(float *)(ar4 + 0x68);
    pfVar10 = *(float **)(ar4 + 0x50);
    pfVar9 = *(float **)(ar4 + 0x38);
    for (; pfVar8 < pfVar4; pfVar8 = pfVar8 + 1) {
      fVar16 = *pfVar10;
      in_dr0 = CONCAT44(fVar16,(int)in_dr0);
      pfVar10 = pfVar10 + 1;
      fVar18 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      *pfVar8 = fVar21 * (fVar16 * fVar18 + fVar17);
    }
    pfVar10 = *(float **)(ar4 + 0x38);
    pfVar9 = (float *)((int)pfVar14 + (int)pfVar10);
    lVar19 = CONCAT44(fVar17,0x358637bd);
    pfVar8 = ar6;
    for (; pfVar10 < pfVar9; pfVar10 = pfVar10 + 1) {
      fVar16 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      fVar17 = *pfVar12;
      in_dr0 = CONCAT44(fVar17,(int)in_dr0);
      pfVar12 = pfVar12 + 1;
      *pfVar10 = (fVar16 + 1e-06) / (fVar17 * fVar20 + 1e-06);
    }
    pfVar12 = *(float **)(ar4 + 0x34);
    pfVar9 = (float *)((int)pfVar14 + (int)pfVar12);
    pfVar10 = *(float **)(ar4 + 0x38);
    for (; cVar22 = '\0', pfVar12 < pfVar9; pfVar12 = pfVar12 + 1) {
      fVar17 = *pfVar10;
      in_dr0 = CONCAT44(fVar17,(int)in_dr0);
      pfVar10 = pfVar10 + 1;
      *pfVar12 = fVar17 * ((float)uVar3 - fVar21) + *pfVar12;
    }
  }
  if (uStack_48 == 0) {
    pfVar12 = *(float **)(ar4 + 0x50);
    pfVar14 = (float *)((int)pfVar14 + (int)pfVar12);
    for (; pfVar12 < pfVar14; pfVar12 = pfVar12 + 1) {
      if (cVar22 == '\0') {
        *pfVar12 = (float)((ulonglong)lVar19 >> 0x20);
      }
      else {
        *(longlong *)pfVar12 = lVar19;
      }
    }
  }
  else {
    pfVar12 = *(float **)(ar4 + 0x34);
    if (cVar22 == '\0') {
      fVar17 = *(float *)(ar4 + 0x6c);
    }
    else {
      fVar17 = (float)((ulonglong)*(undefined8 *)(ar4 + 0x6c) >> 0x20);
    }
    pfVar10 = (float *)((int)pfVar14 + (int)pfVar12);
    pfVar14 = *(float **)(ar4 + 0x50);
    for (; pfVar12 < pfVar10; pfVar12 = pfVar12 + 1) {
      if (cVar22 == '\0') {
        lVar19 = CONCAT44((int)((ulonglong)lVar19 >> 0x20),*pfVar12);
      }
      fVar20 = (float)((ulonglong)lVar19 >> 0x20);
      if ((float)lVar19 <= fVar20) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = fVar20 - fVar20 / (float)lVar19;
      }
      cVar22 = '\0';
      fVar21 = fVar21 * fVar21;
      lVar19 = CONCAT44(fVar20,fVar21);
      fVar20 = fVar17;
      if (fVar17 < fVar21) {
        fVar20 = fVar21;
      }
      *pfVar14 = fVar20;
      pfVar14 = pfVar14 + 1;
    }
  }
  uVar2 = *(ushort *)(ar4 + 0x58);
  for (pfVar9 = ar7; pfVar9 < ar7 + uVar2; pfVar9 = pfVar9 + 1) {
    thunk_FUN_8c013dfc(pfVar12,pfVar14,pfVar10,pfVar8);
    fVar17 = (float)((ulonglong)in_dr0 >> 0x20) * in_fr15;
    in_dr0 = CONCAT44(fVar17,(int)in_dr0);
    *pfVar9 = fVar17;
  }
  for (; pfVar9 < ar7 + iVar5; pfVar9 = pfVar9 + 1) {
    thunk_FUN_8c013dfc(pfVar12,pfVar14,pfVar10,pfVar8);
    fVar17 = (float)((ulonglong)in_dr0 >> 0x20) * in_fr15;
    in_dr0 = CONCAT44(fVar17,(int)in_dr0);
    *pfVar9 = fVar17;
  }
  cVar22 = '\0';
  thunk_FUN_8c013dfc(pfVar12,pfVar14,pfVar10,pfVar8);
  if (cVar22 == '\0') {
    *(int *)in_stack_00000000 = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *in_stack_00000000 = in_dr0;
  }
  *(ushort *)(ar4 + 0x4c) = uVar1;
  *(ushort *)(ar4 + 0x2a) = uStack_48;
  *(ushort *)(ar4 + 0x28) = uVar11;
  *(float **)(ar4 + 0x44) = pfVar13;
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

/* WARNING: Removing unreachable block (ram,0x8c11c32a) */
/* WARNING: Removing unreachable block (ram,0x8c11c30e) */
/* WARNING: Removing unreachable block (ram,0x8c11c2d2) */
/* WARNING: Removing unreachable block (ram,0x8c11c2be) */
/* WARNING: Removing unreachable block (ram,0x8c11c2fa) */
/* WARNING: Removing unreachable block (ram,0x8c11c318) */
/* WARNING: Removing unreachable block (ram,0x8c11c332) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11c2b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *unaff_r14;
  undefined4 extraout_fr1;
  undefined4 extraout_fr1_00;
  undefined4 extraout_fr1_01;
  undefined4 extraout_fr1_02;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  int extraout_fr0_02;
  int extraout_fr0_03;
  int extraout_fr0_04;
  int extraout_fr0_05;
  int a5;
  char cVar7;
  
  iVar5 = *unaff_r14;
  FUN_8c120550(ar4,8,ar6,ar7);
  uVar6 = (int)extraout_fr0 & 0xffff;
  unaff_r14[0x15] = uVar6;
  *(undefined2 *)(*(int *)unaff_r14[4] + 0xc) = 4;
  uVar1 = (undefined2)(uVar6 << 2);
  *(undefined2 *)(*(int *)(unaff_r14[4] + 4) + 0xc) = uVar1;
  *(undefined2 *)(*(int *)(unaff_r14[4] + 8) + 0xc) = uVar1;
  FUN_8c120550(unaff_r14,6,ar6,ar7);
  *(short *)(unaff_r14 + 0x16) = (short)(int)extraout_fr0_00 + -1;
  FUN_8c120550(unaff_r14,1,ar6,ar7);
  cVar7 = '\0';
  *(short *)(unaff_r14 + 0x13) = (short)(int)extraout_fr0_01;
  FUN_8c120550(unaff_r14,2,ar6,ar7);
  if (cVar7 == '\0') {
    unaff_r14[0x1b] = extraout_fr0_02;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x1b) = CONCAT44(extraout_fr0_02,extraout_fr1);
  }
  cVar7 = '\0';
  FUN_8c120550(unaff_r14,3,ar6,ar7);
  if (cVar7 == '\0') {
    unaff_r14[0x1a] = extraout_fr0_03;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x1a) = CONCAT44(extraout_fr0_03,extraout_fr1_00);
  }
  cVar7 = '\0';
  FUN_8c120550(unaff_r14,4,ar6,ar7);
  if (cVar7 == '\0') {
    unaff_r14[0x18] = extraout_fr0_04;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x18) = CONCAT44(extraout_fr0_04,extraout_fr1_01);
  }
  cVar7 = '\0';
  FUN_8c120550(unaff_r14,7,ar6,ar7);
  if (cVar7 == '\0') {
    unaff_r14[0x17] = extraout_fr0_05;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x17) = CONCAT44(extraout_fr0_05,extraout_fr1_02);
  }
  uVar4 = 4;
  a5 = uVar6 * (*(ushort *)(unaff_r14 + 0x13) + 6);
  iVar5 = (**(code **)(iVar5 + 0x14))(iVar5,a5,4,ar7);
  unaff_r14[0xf] = iVar5;
  unaff_r14[0x11] = iVar5;
  iVar3 = uVar6 * 4;
  iVar5 = uVar6 * (*(ushort *)(unaff_r14 + 0x13) + 1) * 4 + unaff_r14[0xf];
  unaff_r14[0x10] = iVar5;
  unaff_r14[0xb] = iVar5;
  iVar2 = iVar5 + iVar3 + iVar3;
  unaff_r14[0xc] = iVar5 + iVar3;
  iVar5 = iVar2 + iVar3;
  unaff_r14[0xd] = iVar2;
  unaff_r14[0xe] = iVar5;
  unaff_r14[0x14] = iVar3 + iVar5;
  if (unaff_r14[0xf] != 0) {
    FUN_8c11bb94(unaff_r14,a5,uVar4,ar7);
    return 0;
  }
  uVar4 = FUN_8c1204c4(unaff_r14,0x66,uVar4,ar7);
  return uVar4;
}



/* FUN_8c11c412 @ 8c11c412 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11c412(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c11c468)
                    (ar4,ar5,2,3,PTR_FUN_8c11c464,PTR_LAB_8c11c460,PTR_LAB_8c11c45c,0x70);
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

undefined4 * FUN_8c11c5e4(int ar4,undefined4 *ar5,int ar6,int ar7,undefined4 s0)

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
      if ((char)s0 == '\0') {
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
        if ((char)s0 == '\0') {
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

int FUN_8c11c86c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = ar7;
  FUN_8c11c5e4(ar4,&uStack_10,ar7,s0);
  uVar1 = (**(code **)(DAT_8c11c902 + ar4))(uStack_10,DAT_8c11c8fe + ar4,ar7,s0);
  uStack_c = CONCAT31(uStack_c._1_3_,(char)uVar1);
  FUN_8c11c7b8(ar4,uStack_10,ar7,s0);
  return (int)(char)uStack_c;
}



/* FUN_8c11c914 @ 8c11c914 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c11c914(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int ar4_00;
  
  ar4_00 = (**(code **)(ar4 + 0x14))(ar5 * ar6,ar7,ar6,ar7);
  if (ar4_00 != 0) {
    (*(code *)PTR_memset_8c11ca40)(ar4_00,0,ar5 * ar6,ar7);
  }
  return ar4_00;
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
  undefined *s8;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *ar6_00;
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
        puVar1 = PTR_PTR_8c11cfbc;
        *(undefined4 *)(DAT_8c11cfb4 + iVar2) = *(undefined4 *)(ar4 + 8);
        s8 = PTR_DAT_8c11cfc0;
        *(int *)(DAT_8c11cfb6 + iVar2) = ar4;
        ar6_00 = &uStack_34;
        puVar5 = &uStack_28;
        bVar10 = 0;
        bVar12 = 0;
        bVar9 = (byte)((((uint)bVar9 << 0x12 | (uint)bVar11 << 0x13 | (uint)bVar13 << 0x14) &
                        DAT_8c11cfb8 & 0x100000) >> 0x14);
        a7 = PTR_PTR_8c11cfcc;
        uVar3 = (*(code *)PTR_FUN_8c11cfd0)
                          (iVar2,puVar5,ar6_00,PTR_PTR_8c11cfcc,PTR_DAT_8c11cfc8,PTR_DAT_8c11cfc4,s8
                           ,puVar1,0,0);
        if ((uVar3 & 0xff) == 0) {
          bVar11 = 0;
          bVar13 = 0;
          bVar9 = (byte)((((uint)bVar10 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar9 << 0x14) &
                          DAT_8c11d118 & 0x100000) >> 0x14);
          uVar4 = (**(code **)(ar4 + 0x1c))(ar4 + 8,puVar5,ar6_00,a7);
          *(undefined4 *)(DAT_8c11d100 + iVar2) = uVar4;
          bVar10 = 0;
          bVar12 = 0;
          bVar9 = (byte)((((uint)bVar11 << 0x12 | (uint)bVar13 << 0x13 | (uint)bVar9 << 0x14) &
                          DAT_8c11d118 & 0x100000) >> 0x14);
          uVar4 = (**(code **)(ar4 + 0x20))(ar4 + 8,puVar5,ar6_00,a7);
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
          uVar4 = (**(code **)(ar4 + 0x14))(0x28,ar4 + 8,ar6_00,a7);
          *(undefined4 *)(DAT_8c11d10a + iVar2) = uVar4;
          if (*(int *)(DAT_8c11d10a + iVar2) == 0) {
            FUN_8c11cd02(ar4,2,ar6_00,a7);
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
            ar6_00 = (undefined4 *)(iVar7 + iVar2);
            if (cVar14 == '\0') {
              *(undefined4 *)(DAT_8c11d10c + iVar2) = uVar4;
            }
            else {
              *(undefined8 *)(DAT_8c11d10c + iVar2) = in_xd2;
            }
            uVar3 = (*(code *)puVar1)(iVar2 + 0x48,4,ar6_00,0);
            if ((uVar3 & 0xff) == 0) {
              a7 = (undefined *)0x0;
              ar6_00 = (undefined4 *)(DAT_8c11d110 + iVar2);
              uVar4 = 0x29;
              uVar3 = (*(code *)PTR_FUN_8c11d124)(iVar2 + 0x48,0x29,ar6_00,0);
              if (((uVar3 & 0xff) == 0) &&
                 (uVar3 = FUN_8c11d8fc(iVar2,uVar4,ar6_00,a7), uVar4 = DAT_8c11d128,
                 (uVar3 & 0xff) == 0)) {
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
          FUN_8c11cd02(*(undefined4 *)(DAT_8c11cfb6 + iVar2),*(undefined4 *)(iVar2 + 0x40),ar6_00,a7
                      );
        }
        (**(code **)(ar4 + 0x18))(iVar2,ar4 + 8,ar6_00,a7);
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
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 *puStack_c;
  
  if (ar5 == 0) {
    ar5_00 = 6;
    puStack_c = *(undefined4 **)(ar4 + 0x54);
    ar6_00 = puStack_c[1];
  }
  else {
    puStack_c = *(undefined4 **)(ar4 + 0x54);
    ar6_00 = puStack_c[1];
    ar5_00 = 5;
  }
  uVar1 = (*(code *)PTR_FUN_8c11d484)(*puStack_c,ar5_00,ar6_00,0);
  return (uint)((uVar1 & 0xff) == 0);
}



/* FUN_8c11d488 @ 8c11d488 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11d488(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  ushort uVar1;
  int ar5_00;
  int ar4_00;
  undefined4 uVar2;
  int ar6_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int ar4_01;
  uint uVar6;
  int ar5_01;
  int ar4_02;
  int iVar7;
  
  ar4_01 = *(int *)(ar4 + 0x70);
  iVar7 = ar5 * 4;
  iVar5 = (int)DAT_8c11d5ba;
  iVar4 = *(int *)(DAT_8c11d5b8 + ar4);
  do {
    ar5_00 = (*(code *)PTR_FUN_8c11d5c8)(ar4_01,*(undefined4 *)(ar4 + 0x74),ar6,ar7);
    if (ar5_00 == 0) {
      return 0;
    }
    ar4_02 = *(int *)(DAT_8c11d5bc + ar4 + iVar7);
    uVar6 = ar4_02 + (uint)*(ushort *)(ar4_01 + 0xc);
    if (*(uint *)(DAT_8c11d5be + ar4 + iVar7) < uVar6) {
      ar5_01 = *(int *)(DAT_8c11d5c0 + ar4 + iVar7);
      ar6_00 = *(int *)(DAT_8c11d5be + ar4 + iVar7) - ar5_01;
      ar4_00 = (**(code **)(iVar4 + 0x14))(ar6_00 + iVar5,DAT_8c11d5c2 + ar4,ar6,ar7);
      if (ar4_00 == 0) {
        uVar2 = (*(code *)PTR_FUN_8c11d5cc)(ar4 + 0x48,2);
        return uVar2;
      }
      if (ar5_01 != 0) {
        iVar3 = ar6_00;
        (*(code *)PTR_memmove_8c11d5d0)(ar4_00,ar5_01,ar6_00,ar7);
        (**(code **)(iVar4 + 0x18))(ar5_01,DAT_8c11d5c2 + ar4,iVar3,ar7);
      }
      iVar3 = (int)DAT_8c11d5be;
      ar4_02 = (ar4_02 - ar5_01) + ar4_00;
      uVar1 = *(ushort *)(ar4_01 + 0xc);
      *(int *)(DAT_8c11d5c0 + ar4 + iVar7) = ar4_00;
      *(int *)(iVar3 + ar4 + iVar7) = ar4_00 + ar6_00 + iVar5;
      uVar6 = ar4_02 + (uint)uVar1;
    }
    ar6 = (uint)*(ushort *)(ar4_01 + 0xc);
    (*(code *)PTR_memmove_8c11d5d0)(ar4_02,ar5_00,ar6,ar7);
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
  undefined4 ar7_00;
  
  sVar1 = *(short *)(ar4 + 0x3e);
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 0;
    if (((sVar1 != 3) && (sVar1 != 4)) && (sVar1 != 7)) {
      return 0;
    }
    ar7_00 = 0;
    uVar5 = 0;
    uVar3 = (*(code *)PTR_FUN_8c11d6e0)(ar4 + 0x48,3,0,0);
    if (((uVar3 & 0xff) == 0) &&
       (uVar3 = (*(code *)PTR_FUN_8c11d6e4)(ar4,0,uVar5,ar7_00), (uVar3 & 0xff) == 0)) {
      a5 = (uint)*(ushort *)(DAT_8c11d6d4 + ar4);
      uVar3 = FUN_8c11d488(ar4,a5,uVar5,ar7_00);
      if (((uVar3 & 0xff) == 0) &&
         (((*(short *)(DAT_8c11d6d6 + ar4) == 0 ||
           (((*(short *)(DAT_8c11d6d6 + ar4) != 1 ||
             (uVar3 = (*(code *)PTR_FUN_8c11d6e8)(ar4,a5,uVar5,ar7_00), (uVar3 & 0xff) == 0)) &&
            ((*(short *)(DAT_8c11d6d6 + ar4) != 2 ||
             (uVar3 = (*(code *)PTR_FUN_8c11d6ec)(ar4,a5,uVar5,ar7_00), (uVar3 & 0xff) == 0)))))) &&
          (*(int *)(DAT_8c11d6d8 + ar4) != 4)))) {
        iVar2 = (int)DAT_8c11d6d8;
        iVar4 = (int)DAT_8c11d6da;
        a4 = *(undefined4 *)(iVar2 + ar4);
        *(undefined4 *)(iVar2 + ar4) = 4;
        uVar3 = (**(code **)(iVar2 + -0x7c + ar4))(a4,iVar4 + ar4,uVar5,ar7_00);
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
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *ar6_00;
  
  ar6_00 = ar6;
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if ((ar5 == (int *)0x0) || (ar6 == (undefined4 *)0x0)) {
      uVar2 = FUN_8c1204c4(ar4 + 0x48,0x13,ar6_00,ar7);
      uVar2 = uVar2 & 0xff;
    }
    else {
      puVar3 = (undefined4 *)(**(code **)(*(int *)(ar4 + 0xfc) + 0x14))(0x38,ar4 + 0xf4);
      if (puVar3 == (undefined4 *)0x0) {
        *ar5 = 0;
        *ar6 = 0;
        uVar4 = FUN_8c11cd02(*(undefined4 *)(ar4 + 0xfc),2,ar6_00,ar7);
        return uVar4;
      }
      *ar6 = 0x38;
      *ar5 = (int)puVar3;
      uVar4 = libgcc_divide_helper_01051c(*(undefined4 *)(ar4 + 0x78),100);
      puVar3[3] = uVar4;
      puVar3[9] = *(undefined4 *)(ar4 + 0x7c);
      puVar3[0xc] = *(undefined4 *)(ar4 + 0x80);
      puVar3[1] = *(undefined4 *)(ar4 + 0x88);
      puVar3[2] = *(int *)(ar4 + 0x90) * 10;
      puVar3[7] = *(undefined4 *)(ar4 + 0x94);
      puVar3[8] = *(int *)(ar4 + 0x98) * 10;
      puVar3[0xd] = *(undefined4 *)(ar4 + 0x9c);
      puVar3[6] = 0x32 - *(short *)(ar4 + 0xa0);
      puVar3[5] = 0x32 - *(short *)(ar4 + 0xa2);
      puVar3[4] = *(undefined4 *)(ar4 + 0xa4);
      puVar3[10] = *(undefined4 *)(ar4 + 0xac);
      *puVar3 = *(undefined4 *)(ar4 + 0xb0);
      uVar2 = 0;
      puVar3[0xb] = *(undefined4 *)(ar4 + 0xbc);
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c11d9a0 @ 8c11d9a0 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

uint FUN_8c11d9a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_r12;
  undefined4 *unaff_r13;
  
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if ((unaff_r12 == (int *)0x0) || (unaff_r13 == (undefined4 *)0x0)) {
      uVar2 = FUN_8c1204c4(ar4 + 0x48,0x13,ar6,ar7);
      uVar2 = uVar2 & 0xff;
    }
    else {
      puVar3 = (undefined4 *)(**(code **)(*(int *)(ar4 + 0xfc) + 0x14))(0x38,ar4 + 0xf4,ar6,ar7);
      if (puVar3 == (undefined4 *)0x0) {
        *unaff_r12 = 0;
        *unaff_r13 = 0;
        uVar4 = FUN_8c11cd02(*(undefined4 *)(ar4 + 0xfc),2,ar6,ar7);
        return uVar4;
      }
      *unaff_r13 = 0x38;
      *unaff_r12 = (int)puVar3;
      uVar4 = libgcc_divide_helper_01051c(*(undefined4 *)(ar4 + 0x78),100);
      puVar3[3] = uVar4;
      puVar3[9] = *(undefined4 *)(ar4 + 0x7c);
      puVar3[0xc] = *(undefined4 *)(ar4 + 0x80);
      puVar3[1] = *(undefined4 *)(ar4 + 0x88);
      puVar3[2] = *(int *)(ar4 + 0x90) * 10;
      puVar3[7] = *(undefined4 *)(ar4 + 0x94);
      puVar3[8] = *(int *)(ar4 + 0x98) * 10;
      puVar3[0xd] = *(undefined4 *)(ar4 + 0x9c);
      puVar3[6] = 0x32 - *(short *)(ar4 + 0xa0);
      puVar3[5] = 0x32 - *(short *)(ar4 + 0xa2);
      puVar3[4] = *(undefined4 *)(ar4 + 0xa4);
      puVar3[10] = *(undefined4 *)(ar4 + 0xac);
      *puVar3 = *(undefined4 *)(ar4 + 0xb0);
      uVar2 = 0;
      puVar3[0xb] = *(undefined4 *)(ar4 + 0xbc);
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c11daa4 @ 8c11daa4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c11daa4(int ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 d;
  undefined4 uVar4;
  int a6;
  
  a6 = ar6;
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 != 0) {
    return 1;
  }
  if (ar5 == (undefined4 *)0x0) {
    uVar4 = 0x13;
  }
  else if (ar6 == 0x38) {
    sVar1 = *(short *)(ar4 + 0x3e);
    if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
      iVar2 = FUN_8c11cc2c(ar4,ar5[0xd],a6,ar7);
      if (iVar2 == 0) {
        d = 10;
        *(int *)(ar4 + 0x78) = ar5[3] * 100;
        *(undefined4 *)(ar4 + 0x7c) = ar5[9];
        *(undefined4 *)(ar4 + 0x80) = ar5[0xc];
        *(undefined4 *)(ar4 + 0x84) = 0;
        *(undefined4 *)(ar4 + 0x88) = ar5[1];
        *(undefined4 *)(ar4 + 0x8c) = *ar5;
        uVar4 = libgcc_divide_helper_01051c(ar5[2],10);
        *(undefined4 *)(ar4 + 0x90) = uVar4;
        *(undefined4 *)(ar4 + 0x94) = ar5[7];
        uVar4 = libgcc_divide_helper_01051c(ar5[8],d);
        *(undefined4 *)(ar4 + 0x98) = uVar4;
        *(undefined4 *)(ar4 + 0x9c) = ar5[0xd];
        *(short *)(ar4 + 0xa0) = 0x32 - (short)ar5[6];
        *(short *)(ar4 + 0xa2) = 0x32 - (short)ar5[5];
        *(undefined4 *)(ar4 + 0xa4) = ar5[4];
        *(undefined4 *)(ar4 + 0xac) = ar5[10];
        *(undefined4 *)(ar4 + 0xb0) = *ar5;
        *(undefined4 *)(ar4 + 0xb4) = ar5[2] << 1;
        *(undefined4 *)(ar4 + 0xbc) = ar5[0xb];
        uVar3 = FUN_8c120348(ar4 + 0x48,0x50,ar4 + 0x7c,0);
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = FUN_8c120348(ar4 + 0x48,0x52,ar4 + 0x9c,0);
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = FUN_8c120348(ar4 + 0x48,0x53,ar4 + 0xa0,0);
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
        goto LAB_8c11dc70;
      }
      uVar4 = 0x14;
    }
    else {
      uVar4 = 7;
    }
  }
  else {
    uVar4 = 0x17;
  }
  uVar3 = FUN_8c1204c4(ar4 + 0x48,uVar4,a6,ar7);
LAB_8c11dc70:
  return uVar3 & 0xff;
}



/* FUN_8c11dc7e @ 8c11dc7e callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11dc7e(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 ar5_00;
  int *ar6_00;
  
  ar6_00 = ar6;
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 1;
  }
  if (ar6 == (int *)0x0) {
    ar5_00 = 0x13;
LAB_8c11dd8c:
    uVar2 = FUN_8c1204c4(ar4 + 0x48,ar5_00,ar6_00,ar7);
    return uVar2 & 0xff;
  }
  switch(ar5) {
  case 1:
    *ar6 = *(int *)(ar4 + 0x8c);
    return 0;
  case 2:
    iVar1 = 0x88;
    goto LAB_8c11dd50;
  case 3:
    iVar1 = 0xbc;
    goto LAB_8c11dd6a;
  case 4:
    iVar1 = *(int *)(ar4 + 0x90) * 10;
    break;
  case 5:
    iVar1 = libgcc_divide_helper_01051c(*(undefined4 *)(ar4 + 0x78),100);
    *ar6 = iVar1;
    return 0;
  case 6:
    iVar1 = 0xa4;
    goto LAB_8c11dd6a;
  case 7:
    iVar1 = 0x32 - *(short *)(ar4 + 0xa2);
    break;
  case 8:
    iVar1 = 0x32 - *(short *)(ar4 + 0xa0);
    goto LAB_8c11dd7a;
  case 9:
    iVar1 = 0x94;
LAB_8c11dd50:
    iVar1 = *(int *)(iVar1 + ar4);
    break;
  case 10:
    iVar1 = *(int *)(ar4 + 0x98) * 10;
    goto LAB_8c11dd7a;
  case 0xb:
    iVar1 = *(int *)(ar4 + 0x7c);
    break;
  case 0xc:
    iVar1 = *(int *)(ar4 + 0x80);
    break;
  case 0xd:
    iVar1 = 0xac;
LAB_8c11dd6a:
    iVar1 = *(int *)(iVar1 + ar4);
LAB_8c11dd7a:
    *ar6 = iVar1;
    return 0;
  case 0xe:
    iVar1 = *(int *)(ar4 + 0x9c);
    goto LAB_8c11dd7a;
  default:
    ar5_00 = 10;
    goto LAB_8c11dd8c;
  }
  *ar6 = iVar1;
  return 0;
}



/* FUN_8c11dda2 @ 8c11dda2 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11dda2(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  undefined4 uVar4;
  int ar6_00;
  
  ar6_00 = ar6;
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 1;
  }
  sVar3 = *(short *)(ar4 + 0x3e);
  if ((((sVar3 != 0) && (sVar3 != 1)) && (sVar3 != 2)) && (sVar3 != 5)) {
    uVar4 = 7;
override_prt_8c11e12a_7a4d7f16:
    uVar2 = FUN_8c1204c4(ar4 + 0x48,uVar4,ar6_00,ar7);
    return uVar2 & 0xff;
  }
  *(undefined4 *)(ar4 + 0x40) = 0;
  ar6_00 = 10;
  uVar4 = libgcc_divide_helper_01051c(ar6,10);
  sVar3 = 0x32 - (short)ar6;
  switch(ar5) {
  case 1:
    *(int *)(ar4 + 0x8c) = ar6;
    *(int *)(ar4 + 0xb0) = ar6;
    uVar2 = FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
    if ((uVar2 & 0xff) == 0) {
      FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
    }
    break;
  case 2:
    *(int *)(ar4 + 0x88) = ar6;
    FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
    break;
  case 3:
    *(int *)(ar4 + 0xbc) = ar6;
    FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
    break;
  case 4:
    *(undefined4 *)(ar4 + 0x90) = uVar4;
    uVar4 = libgcc_divide_helper_01051c(ar6 << 1,ar6_00);
    *(undefined4 *)(ar4 + 0xb4) = uVar4;
    uVar2 = FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
    if ((uVar2 & 0xff) == 0) {
      FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
    }
    break;
  case 5:
    *(int *)(ar4 + 0x78) = ar6 * 100;
    break;
  case 6:
    *(int *)(ar4 + 0xa4) = ar6;
    FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
    break;
  case 7:
    *(short *)(ar4 + 0xa2) = sVar3;
    FUN_8c120348(ar4 + 0x48,0x53,ar4 + 0xa0,0);
    break;
  case 8:
    *(short *)(ar4 + 0xa0) = sVar3;
    FUN_8c120348(ar4 + 0x48,0x53,ar4 + 0xa0,0);
    break;
  case 9:
    *(int *)(ar4 + 0x94) = ar6;
    FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
    break;
  case 10:
    *(undefined4 *)(ar4 + 0x98) = uVar4;
    FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
    break;
  case 0xb:
    *(int *)(ar4 + 0x7c) = ar6;
    FUN_8c120348(ar4 + 0x48,0x50,ar4 + 0x7c,0);
    break;
  case 0xc:
    *(int *)(ar4 + 0x80) = ar6;
    FUN_8c120348(ar4 + 0x48,0x50,ar4 + 0x7c,0);
    break;
  case 0xd:
    *(int *)(ar4 + 0xac) = ar6;
    FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
    break;
  case 0xe:
    iVar1 = FUN_8c11cc2c(ar4,ar6,ar6_00,ar7);
    if (iVar1 != 0) {
      uVar4 = 0x14;
      goto override_prt_8c11e12a_7a4d7f16;
    }
    *(int *)(ar4 + 0x9c) = ar6;
    FUN_8c120348(ar4 + 0x48,0x52,ar4 + 0x9c,0);
    break;
  default:
    uVar4 = 10;
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
  undefined4 *ar7_00;
  
  a6 = ar6;
  ar7_00 = ar7;
  iVar2 = (*(code *)PTR_FUN_8c11e4d8)(ar4,ar5,ar6,ar7);
  puVar1 = PTR_FUN_8c11e4dc;
  if (iVar2 == 0) {
    if ((ar6 == (undefined4 *)0x0) || (ar7 == (undefined4 *)0x0)) {
      a5 = 0x13;
    }
    else if (ar5 == 4) {
      if ((*(short *)(ar4 + 0x3e) == 2) || (*(short *)(ar4 + 0x3e) == 1)) {
        uVar3 = (*(code *)PTR_FUN_8c11e4e0)(ar4,ar6,ar7,ar7_00);
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
    uVar3 = (*(code *)puVar1)(ar4 + 0x48,a5,a6,ar7_00);
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
  int *ar5_00;
  undefined4 uVar5;
  int iVar6;
  uint *ar7_00;
  int iVar7;
  uint uStack_2c;
  int *piStack_28;
  undefined4 auStack_24 [2];
  
  ar7_00 = &uStack_2c;
  iVar7 = *(int *)((int)DAT_8c11e5ea + (int)ar4);
  uStack_2c = 0;
  ar5_00 = ar5;
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
    iVar3 = (*(code *)PTR_FUN_8c11e6f4)(ar5,ar5_00,ar6,ar7);
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
    iVar3 = (*(code *)PTR_FUN_8c11e700)(ar4,uVar5,ar6,ar7_00);
    if (iVar3 == 0) {
      piStack_28 = *(int **)((int)DAT_8c11e810 + (int)ar4);
      uVar4 = (**(code **)((int)piStack_28 + 8))(piStack_28,uVar5,ar6,ar7_00);
      uStack_2c = 0;
      if ((uVar4 & 0xffff) != 0) {
        do {
          uVar5 = (**(code **)((int)DAT_8c11e812 + *(int *)((int)DAT_8c11e810 + (int)ar4)))
                            (*(int *)((int)DAT_8c11e810 + (int)ar4),uStack_2c,ar6,ar7_00);
          iVar3 = (int)DAT_8c11e814;
          iVar7 = uStack_2c * 4;
          iVar6 = *(int *)((int)DAT_8c11e810 + (int)ar4);
          uVar5 = (**(code **)(DAT_8c11e810 + -0x44 + iVar6))(iVar6,uVar5,ar6,ar7_00);
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
    ar7_00 = (uint *)ar7;
  }
  uVar4 = (*(code *)puVar2)(ar4 + 0x12,uVar5,ar6,ar7_00);
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
  int ar4_00;
  
  ar4_00 = (**(code **)(ar4 + 0x14))(*(undefined4 *)(ar5 + 4),ar4 + 8,ar6,ar7);
  if (ar4_00 != 0) {
    (*(code *)PTR_memmove_8c11ea2c)(ar4_00,ar5,*(undefined4 *)(ar5 + 4),ar7);
  }
  return ar4_00;
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
  undefined4 ar5_00;
  int *ar5_01;
  int aiStack_5c [20];
  undefined4 uStack_c;
  
  uStack_c = 0;
  ar5_01 = ar5;
  iVar2 = (*(code *)PTR_FUN_8c11eb4c)(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    if ((*(short *)(ar4 + 0x3e) != 2) && (*(short *)(ar4 + 0x3e) != 1)) {
      ar5_00 = 7;
      uVar4 = *(undefined4 *)(DAT_8c11eb42 + ar4);
LAB_8c11eaae:
      uVar4 = (*(code *)PTR_FUN_8c11eb58)(uVar4,ar5_00,ar6,ar7);
      return uVar4;
    }
    *(undefined4 *)(ar4 + 0x40) = 0;
    if (ar5 != (int *)0x0) {
      ar6 = (int)DAT_8c11eb44;
      ar5_01 = (int *)(**(int **)(DAT_8c11eb46 + ar4) + 8);
      iVar2 = (*(code *)PTR_FUN_8c11eb54)(*ar5 + 8,ar5_01,ar6,ar7);
      if (iVar2 != 0) {
        ar5_00 = 0xc;
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
    iVar2 = (*(code *)PTR_FUN_8c11eb60)(ar5,ar5_01,ar6,ar7);
    if (iVar2 == 0) {
      (*(code *)PTR_FUN_8c11eb64)(aiStack_5c,ar5_01,ar6,ar7);
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
  undefined4 ar6_00;
  undefined4 uVar4;
  undefined4 auStack_c [2];
  
  uVar4 = 0;
  uVar1 = (*(code *)PTR_FUN_8c11ec64)(ar4 + 0x48,0x11,0,0);
  if (((uVar1 & 0xff) == 0) && (iVar2 = FUN_8c11dc7e(ar4,1,auStack_c,uVar4), iVar2 == 0)) {
    ar6_00 = 0;
    uVar3 = 1;
    iVar2 = FUN_8c11dda2(ar4,1,0,uVar4);
    if ((iVar2 == 0) &&
       (uVar1 = (*(code *)PTR_FUN_8c11ec6c)(ar4,uVar3,ar6_00,uVar4), (uVar1 & 0xff) == 0)) {
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

/* WARNING: Removing unreachable block (ram,0x8c11efa2) */
/* WARNING: Removing unreachable block (ram,0x8c11ef10) */
/* WARNING: Removing unreachable block (ram,0x8c11ec8e) */
/* WARNING: Removing unreachable block (ram,0x8c11ec8a) */
/* WARNING: Removing unreachable block (ram,0x8c11ec8c) */
/* WARNING: Removing unreachable block (ram,0x8c11ec90) */
/* WARNING: Removing unreachable block (ram,0x8c11ef60) */
/* WARNING: Removing unreachable block (ram,0x8c11ef1e) */
/* WARNING: Removing unreachable block (ram,0x8c11ef6a) */
/* WARNING: Removing unreachable block (ram,0x8c11ef22) */
/* WARNING: Removing unreachable block (ram,0x8c11ef26) */
/* WARNING: Removing unreachable block (ram,0x8c11ef94) */
/* WARNING: Removing unreachable block (ram,0x8c11ef2c) */
/* WARNING: Removing unreachable block (ram,0x8c11ef48) */
/* WARNING: Removing unreachable block (ram,0x8c11ef64) */
/* WARNING: Removing unreachable block (ram,0x8c11ef68) */
/* WARNING: Removing unreachable block (ram,0x8c11ef90) */
/* WARNING: Removing unreachable block (ram,0x8c11ef9e) */
/* WARNING: Removing unreachable block (ram,0x8c11efa4) */
/* WARNING: Removing unreachable block (ram,0x8c11efa6) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11ec7c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint *puVar2;
  int a4;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int a5;
  int *ar6_00;
  uint *ar7_00;
  undefined4 ar7_01;
  int iVar9;
  int iVar10;
  float fVar12;
  undefined8 uVar11;
  undefined8 in_dr12;
  undefined8 uVar13;
  float fVar14;
  undefined8 in_dr14;
  code *pcVar15;
  char cVar16;
  uint uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  uint *puStack_4c;
  int iStack_48;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_20 = (undefined4)in_dr14;
  uStack_24 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_28 = (undefined4)in_dr12;
  uStack_2c = (undefined4)((ulonglong)in_dr12 >> 0x20);
  iVar10 = *(int *)(ar4 + 0xfc);
  uStack_40 = 0x1e;
  if (*(int *)(ar4 + 0x14c) == 0) {
LAB_8c11f120:
    uVar5 = 0;
  }
  else {
    iStack_34 = ar4;
    a4 = (**(code **)(iVar10 + 0x14))(0x78,ar4 + 0xf4,ar6,ar7);
    fVar14 = (float)in_dr14;
    if (a4 == 0) {
      uVar5 = FUN_8c11cd02(iVar10,1,ar6,ar7);
      return uVar5;
    }
    iVar8 = *(int *)(ar4 + 0x14c);
    iVar9 = *(int *)(iVar8 + 0xc);
    puStack_4c = *(uint **)(iVar8 + 0x10);
    uVar1 = *(ushort *)(iVar9 + 0x14);
    *(undefined4 *)(iVar8 + 0x10) = 0;
    FUN_8c11c5e4(ar4,&iStack_48,*(undefined4 *)(ar4 + 0x14c),0,0);
    ar7_00 = (uint *)0x0;
    *(uint **)(*(int *)(ar4 + 0x14c) + 0x10) = puStack_4c;
    puStack_4c = *(uint **)(*(int *)(iStack_48 + 4) + 0x14);
    uVar3 = FUN_8c120348(ar4 + 0x48,0x11,0,0);
    if (((uVar3 & 0xff) == 0) && (iVar8 = FUN_8c11dc7e(ar4,1,&uStack_38,ar7_00), iVar8 == 0)) {
      ar6_00 = (int *)0x0;
      iVar8 = FUN_8c11dda2(ar4,1,0,ar7_00);
      if (iVar8 == 0) {
        iVar8 = 0;
        cVar16 = '\0';
        uVar3 = FUN_8c11d432(ar4,0,ar6_00,ar7_00);
        if ((uVar3 & 0xff) == 0) {
          uVar3 = (uint)uVar1;
          if (cVar16 == '\0') {
            uVar13 = 0x445925b1;
            pcVar15 = (code *)0x3a83126e;
          }
          else {
            uVar13 = 0x445925b100000000;
            fVar14 = 0.0009999999;
            pcVar15 = FUN_8c12212e;
          }
          while( true ) {
            puStack_4c = puStack_4c + 4;
            iVar9 = *(int *)(iVar9 + 0x10);
            if (*(int *)(iVar9 + 0x10) == 0) break;
            uStack_44 = (uint)*(ushort *)(iVar9 + 0x14);
            uVar4 = FUN_8c12212e(ar4,iVar8,ar6_00,ar7_00);
            if (((uVar4 & 0xff) != 0) ||
               (uVar4 = FUN_8c12215c(ar4,&DAT_8c127c1d,0,uVar3,uStack_44), (uVar4 & 0xff) != 0))
            goto LAB_8c11f0fa;
            ar6_00 = &iStack_54;
            ar7_00 = &uStack_58;
            uVar4 = FUN_8c120348(ar4 + 0x48,0x20,ar6_00,&uStack_58);
            if (((uVar4 & 0xff) != 0) ||
               (uVar4 = FUN_8c120284(iStack_34,&DAT_8c127c1d,ar6_00,ar7_00), (uVar4 & 0xff) != 0))
            goto LAB_8c11f0fa;
            iVar8 = ar4 + 0xf4;
            (**(code **)(iVar10 + 0x18))(puStack_4c[3],iVar8,ar6_00,ar7_00);
            puVar2 = puStack_4c;
            *puStack_4c = uStack_58;
            if (uStack_58 != 0) {
              a5 = ar4 + 0xf4;
              iVar8 = uStack_58 * 0xc;
              cVar16 = '\0';
              uVar3 = (**(code **)(iVar10 + 0x14))(iVar8,a5,ar6_00,ar7_00);
              puVar2[3] = uVar3;
              if (uStack_40 < uStack_58) {
                uStack_40 = uStack_58;
                (**(code **)(iVar10 + 0x18))(a4,ar4 + 0xf4,ar6_00,ar7_00);
                iVar8 = uStack_40 << 2;
                a5 = ar4 + 0xf4;
                cVar16 = '\0';
                a4 = (**(code **)(iVar10 + 0x14))(iVar8,a5,ar6_00,ar7_00);
              }
              if (cVar16 == '\0') {
                fVar14 = (float)((ulonglong)uVar13 >> 0x20);
              }
              uVar4 = 0;
              if (uStack_58 != 0) {
                do {
                  iStack_3c = uVar4 * 4;
                  pfVar7 = (float *)(iStack_3c + a4);
                  uVar11 = 0x408f400000000000;
                  cVar16 = '\0';
                  thunk_FUN_8c013cd8(iVar8,a5,ar6_00,ar7_00);
                  uVar4 = uVar4 + 1;
                  fVar12 = (float)((ulonglong)uVar11 >> 0x20);
                  if (cVar16 == '\0') {
                    *pfVar7 = fVar12;
                  }
                  else {
                    *(undefined8 *)pfVar7 = uVar11;
                  }
                  fVar14 = fVar14 + fVar12;
                } while (uVar4 < uStack_58);
                uVar4 = 0;
                if (uStack_58 != 0) {
                  do {
                    fVar12 = (float)((ulonglong)uVar11 >> 0x20);
                    if (*(float *)(uVar4 * 4 + a4) / fVar14 <= (float)pcVar15) {
                      *(undefined4 *)(uVar4 * 0xc + uVar3) = 6000;
                    }
                    else {
                      piVar6 = (int *)(uVar4 * 0xc + uVar3);
                      thunk_FUN_8c013dfc(iVar8,a5,ar6_00,ar7_00);
                      uVar11 = 0x3fe0000000000000;
                      *piVar6 = (int)(-(fVar12 * (float)uVar13) + 0.5);
                    }
                    iVar8 = uVar4 * 4;
                    a5 = uVar4 * 0xc + uVar3;
                    *(int *)(a5 + 4) = (int)*(short *)(*(int *)(iStack_54 + iVar8) + 2);
                    uStack_50 = CONCAT22(*(undefined2 *)
                                          (*(int *)(*(int *)(iStack_54 + iVar8) + 0xc) + 4),
                                         *(undefined2 *)
                                          (*(int *)(*(int *)(iStack_54 + iVar8) + 0xc) + 2));
                    uVar4 = uVar4 + 1;
                    *(undefined4 *)(a5 + 8) = uStack_50;
                  } while (uVar4 < uStack_58);
                }
              }
              iVar8 = ar4 + 0xf4;
              (**(code **)(iVar10 + 0x18))(iStack_54,iVar8,ar6_00,ar7_00);
              uVar3 = uStack_44;
            }
          }
          ar7_01 = 0;
          uVar5 = 0;
          uVar3 = FUN_8c120348(ar4 + 0x48,0x20,0,0);
          if (((uVar3 & 0xff) == 0) &&
             (uVar3 = FUN_8c11d432(ar4,1,uVar5,ar7_01), (uVar3 & 0xff) == 0)) {
            uVar3 = (**(code **)(ar4 + 0xc4))(iStack_48,ar4 + 0xf4,uVar5,ar7_01);
            FUN_8c11c7b8(ar4,iStack_48,uVar5,ar7_01);
            if ((uVar3 & 0xff) != 0) {
              return uVar3;
            }
            (**(code **)(iVar10 + 0x18))(a4,ar4 + 0xf4,uVar5,ar7_01);
            uVar3 = FUN_8c11c99a(ar4,2,uVar5,ar7_01);
            if ((uVar3 & 0xff) == 0) {
              uVar5 = 0;
              uVar3 = FUN_8c120348(ar4 + 0x48,0x15,0,0);
              if (((uVar3 & 0xff) == 0) &&
                 (iVar10 = FUN_8c11dda2(ar4,1,uStack_38,uVar5), iVar10 == 0)) {
                *(undefined2 *)(ar4 + 0x144) = 0;
                goto LAB_8c11f120;
              }
            }
          }
        }
      }
    }
LAB_8c11f0fa:
    uVar5 = 1;
  }
  return uVar5;
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

/* WARNING: Removing unreachable block (ram,0x8c11f8d6) */
/* WARNING: Removing unreachable block (ram,0x8c11f8b0) */
/* WARNING: Removing unreachable block (ram,0x8c11f8b4) */
/* WARNING: Removing unreachable block (ram,0x8c11f8a8) */
/* WARNING: Removing unreachable block (ram,0x8c11f89e) */
/* WARNING: Removing unreachable block (ram,0x8c11f89c) */
/* WARNING: Removing unreachable block (ram,0x8c11f8a0) */
/* WARNING: Removing unreachable block (ram,0x8c11f8ae) */
/* WARNING: Removing unreachable block (ram,0x8c11f8be) */
/* WARNING: Removing unreachable block (ram,0x8c11f8d4) */
/* WARNING: Removing unreachable block (ram,0x8c11f8d8) */
/* WARNING: Removing unreachable block (ram,0x8c11f8c2) */
/* WARNING: Unknown calling convention */

uint FUN_8c11f898(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = *(float **)(ar4 + 0x2c);
  fVar3 = *pfVar1;
  fVar2 = fVar3;
  while (pfVar1 = pfVar1 + 1, pfVar1 < *(float **)(ar4 + 0x30)) {
    if (*pfVar1 < fVar2) {
      fVar2 = *pfVar1;
    }
    if (fVar3 < *pfVar1) {
      fVar3 = *pfVar1;
    }
  }
  return (uint)(fVar3 - fVar2 < *(float *)(ar4 + 0x38));
}



/* FUN_8c11f8de @ 8c11f8de callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c11f9b6) */
/* WARNING: Removing unreachable block (ram,0x8c11f9a8) */
/* WARNING: Removing unreachable block (ram,0x8c11f9b4) */
/* WARNING: Removing unreachable block (ram,0x8c11f9ba) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11f8de(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  undefined4 ar5_00;
  float in_fr3;
  float fVar5;
  undefined4 in_PR;
  char cVar6;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  
  if (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') {
    uVar1 = FUN_8c112170(*(undefined4 *)(ar4 + 0xc),2,ar6,ar7);
    if ((uVar1 & 0xff) == 0) {
      return 0;
    }
    cVar6 = '\0';
    pfVar2 = (float *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6
                                   ,ar7);
    if (cVar6 == '\0') {
      fStack_c = *pfVar2;
      uStack_8 = in_PR;
      in_fr3 = fStack_c;
    }
    else {
      fStack_c = (float)*(undefined8 *)pfVar2;
      uStack_8 = (undefined4)((ulonglong)*(undefined8 *)pfVar2 >> 0x20);
    }
    ar5_00 = *(undefined4 *)(*(int *)(ar4 + 0xc) + 0xc);
    cVar6 = '\0';
    pfVar2 = (float *)FUN_8c111fbe(*(undefined4 *)(*(int *)(ar4 + 0xc) + 8),ar5_00,ar6,ar7);
    if (cVar6 == '\0') {
      fStack_10 = *pfVar2;
      in_fr3 = fStack_10;
    }
    else {
      fStack_10 = (float)*(undefined8 *)pfVar2;
      fStack_c = (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20);
    }
    cVar6 = '\0';
    pfVar2 = (float *)FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),ar5_00,ar6,ar7);
    pfVar3 = *(float **)(ar4 + 0x34);
    *(float **)(ar4 + 0x34) = pfVar3 + 1;
    if (cVar6 == '\0') {
      *pfVar3 = fStack_c;
      in_fr3 = fStack_c;
    }
    else {
      *(ulonglong *)(pfVar3 + -1) = CONCAT44(uStack_8,fStack_c);
    }
    if (*(int *)(ar4 + 0x34) == *(int *)(ar4 + 0x30)) {
      *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(ar4 + 0x2c);
    }
    cVar6 = '\0';
    uVar1 = FUN_8c11f898(ar4,ar5_00,ar6,ar7);
    pfVar3 = *(float **)(ar4 + 0x44);
    if (cVar6 == '\0') {
      fVar5 = *pfVar3;
      pfVar3 = pfVar3 + 1;
    }
    else {
      fVar5 = (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20);
      pfVar3 = pfVar3 + 2;
    }
    *(float **)(ar4 + 0x44) = pfVar3;
    if (cVar6 == '\0') {
      pfVar3[-1] = fStack_10;
      in_fr3 = fStack_10;
    }
    else {
      *(ulonglong *)(pfVar3 + -2) = CONCAT44(fStack_c,fStack_10);
    }
    if (*(int *)(ar4 + 0x44) == *(int *)(ar4 + 0x40)) {
      *(undefined4 *)(ar4 + 0x44) = *(undefined4 *)(ar4 + 0x3c);
    }
    if (cVar6 == '\0') {
      in_fr3 = 0.0;
    }
    if ((in_fr3 < fVar5) && ((uVar1 & 0xff) == 0)) {
      fVar5 = fVar5 * 0.099999994;
    }
    *pfVar2 = fVar5;
  }
  piVar4 = *(int **)(ar4 + 0xc);
  if ((*(int *)(piVar4[1] * 4 + *(int *)(*piVar4 + 0x40)) != *(int *)(*piVar4 + 0x3c)) &&
     (*(int *)(*(int *)(piVar4[2] + 0x40) + piVar4[3] * 4) != *(int *)(piVar4[2] + 0x3c))) {
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
/* WARNING: Removing unreachable block (ram,0x8c11fa92) */
/* WARNING: Removing unreachable block (ram,0x8c11fa76) */
/* WARNING: Removing unreachable block (ram,0x8c11fa8a) */
/* WARNING: Removing unreachable block (ram,0x8c11faa4) */
/* WARNING: Removing unreachable block (ram,0x8c11faae) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c11fa64(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int a4;
  int *unaff_r14;
  float extraout_fr0;
  float extraout_fr0_00;
  uint in_fr5;
  ulonglong uVar4;
  char cVar5;
  
  a4 = *unaff_r14;
  *(undefined2 *)(*(int *)unaff_r14[4] + 0xc) = (undefined2)ain0;
  FUN_8c120550(unaff_r14,1,ar6,ar7);
  unaff_r14[10] = (int)extraout_fr0 & 0xff;
  FUN_8c120550(unaff_r14,2,ar6,ar7);
  unaff_r14[0xe] = (int)(float)(int)(short)(int)extraout_fr0_00;
  iVar1 = (**(code **)(a4 + 0x14))(a4,unaff_r14[10] * 2 + 1,4,ar7);
  unaff_r14[0xb] = iVar1;
  uVar3 = 4;
  cVar5 = '\0';
  iVar1 = (**(code **)(a4 + 0x14))(a4,unaff_r14[10],4,ar7);
  unaff_r14[0xf] = iVar1;
  if ((unaff_r14[0xb] != 0) && (unaff_r14[0xf] != 0)) {
    uVar2 = 0;
    if (cVar5 == '\0') {
      uVar4 = (ulonglong)in_fr5;
    }
    else {
      uVar4 = 0xd2084f2200000000;
    }
    if (unaff_r14[10] * 2 != -1) {
      do {
        iVar1 = uVar2 * 4;
        uVar2 = uVar2 + 1;
        if (cVar5 == '\0') {
          *(int *)(unaff_r14[0xb] + iVar1) = (int)(uVar4 >> 0x20);
        }
        else {
          *(ulonglong *)(unaff_r14[0xb] + iVar1) = uVar4;
        }
      } while (uVar2 < unaff_r14[10] * 2 + 1U);
    }
    unaff_r14[0xc] = unaff_r14[10] * 8 + unaff_r14[0xb] + 4;
    unaff_r14[0xd] = unaff_r14[0xb];
    unaff_r14[0x10] = unaff_r14[10] * 4 + unaff_r14[0xf];
    unaff_r14[0x11] = unaff_r14[0xf];
    return 0;
  }
  uVar3 = FUN_8c1204c4(unaff_r14,2,uVar3,ar7);
  return uVar3;
}



/* FUN_8c11fb64 @ 8c11fb64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c11fb64(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c11fb94)
                    (ar4,ar5,2,1,PTR_FUN_8c11fb90,PTR_LAB_8c11fb8c,PTR_LAB_8c11fb88,0x48);
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


