/* Seaman (USA) region 0x8c260000-0x8c270000 (Ghidra decompiler) */

/* FUN_8c260000 @ 8c260000 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c260000(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 8);
  (*(code *)PTR_FUN_8c260138)
            (uVar1,*(undefined4 *)(ar4 + 0x50),ar5,*(int *)(ar4 + 100) + *(int *)(ar4 + 0x70) * 2);
  uVar1 = (*(code *)PTR_FUN_8c26013c)(uVar1);
  return uVar1;
}



/* FUN_8c260006 @ 8c260006 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c260006(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 8);
  (*(code *)PTR_FUN_8c260138)
            (uVar1,*(undefined4 *)(ar4 + 0x50),ar5,*(int *)(ar6 + 0x14) + *(int *)(ar6 + 0x20) * 2);
  uVar1 = (*(code *)PTR_FUN_8c26013c)(uVar1);
  return uVar1;
}



/* FUN_8c26002c @ 8c26002c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26002c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 8);
  (*(code *)PTR_FUN_8c260140)
            (uVar1,*(undefined4 *)(ar4 + 0x50),ar5 << 1,
             *(int *)(ar4 + 0x6c) * 2 + *(int *)(ar4 + 100) + *(int *)(ar4 + 0x70) * 2);
  uVar1 = (*(code *)PTR_FUN_8c26013c)(uVar1);
  return uVar1;
}



/* FUN_8c260030 @ 8c260030 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c260030(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int ar7_00;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 8);
  ar7_00 = *(int *)(ar6 + 100) + *(int *)(ar6 + 0x70) * 2;
  (*(code *)PTR_FUN_8c260140)
            (uVar1,*(undefined4 *)(ar4 + 0x50),ar5 << 1,ar7_00,*(int *)(ar6 + 0x6c) * 2 + ar7_00);
  uVar1 = (*(code *)PTR_FUN_8c26013c)(uVar1);
  return uVar1;
}



/* FUN_8c260062 @ 8c260062 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c260062(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int n;
  
  iVar4 = ar4 + 0x50;
  ar5_00 = libgcc_divide_helper_010468(*(undefined4 *)(ar4 + 0x54),*(undefined4 *)(ar4 + 0x58));
  iVar8 = *(int *)(iVar4 + 0x28);
  iVar5 = *(int *)(iVar4 + 0x10);
  iVar9 = *(int *)(iVar4 + 0x20);
  iVar3 = iVar8 + iVar5 + -1;
  n = *(int *)(iVar4 + 0x24);
  iVar6 = *(int *)(iVar4 + 0x18);
  iVar1 = libgcc_divide_helper_010468(iVar3,iVar5);
  iVar3 = libgcc_divide_helper_010614(iVar3,iVar5);
  iVar7 = (iVar5 - iVar3) + -1;
  iVar3 = libgcc_divide_helper_010468((iVar6 - iVar9) + iVar5 + -1,iVar5);
  if ((iVar1 < iVar3) && ((iVar3 * iVar5 - iVar7) + iVar9 < *(int *)(iVar4 + 0x18))) {
    iVar3 = iVar3 + 1;
  }
  if (iVar8 < n) {
    n = n + iVar7;
  }
  iVar5 = libgcc_divide_helper_010468(n,iVar5);
  if (iVar5 < ar5_00) {
    ar5_00 = iVar5;
  }
  if (iVar1 < ar5_00) {
    ar5_00 = iVar1;
  }
  if (iVar3 < ar5_00) {
    ar5_00 = iVar3;
  }
  if (*(int *)(iVar4 + 8) == 2) {
    uVar2 = FUN_8c26002c(ar4,ar5_00,iVar5,iVar3);
    return uVar2;
  }
  uVar2 = FUN_8c260000(ar4,ar5_00,iVar5,iVar3);
  return uVar2;
}



/* FUN_8c26011e @ 8c26011e callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26011e(undefined2 *ar4,undefined2 *ar5,int ar6,undefined4 ar7)

{
  undefined2 uVar1;
  undefined4 in_r0;
  
  for (; 0 < ar6; ar6 = ar6 + -1) {
    uVar1 = *ar5;
    ar5 = ar5 + 1;
    *ar4 = uVar1;
    ar4 = ar4 + 1;
  }
  return in_r0;
}



/* FUN_8c26014c @ 8c26014c callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26014c(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 ain0;
  undefined4 uVar1;
  
  uVar1 = ar7;
  ain0 = FUN_8c26011e(ar4,ar5 * 2 + ar4,ar7,ar7,ar6);
  uVar1 = FUN_8c26011e(ar6 * 2 + ar4,(ar5 + ar6) * 2 + ar4,ar7,uVar1,ain0);
  return uVar1;
}



/* FUN_8c260180 @ 8c260180 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c260180(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c26011e(ar4,ar5 * 2 + ar4,ar7,ar7);
  return uVar1;
}



/* FUN_8c260198 @ 8c260198 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c260198(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 ar4_00;
  int ar5_00;
  int d;
  int iVar7;
  
  d = *(int *)(ar4 + 0x60);
  iVar4 = *(int *)(ar4 + 0x5c);
  ar5_00 = *(int *)(ar4 + 0x40);
  iVar5 = d + *(int *)(ar4 + 0x78) + -1;
  iVar7 = *(int *)(ar4 + 0x70);
  ar4_00 = *(undefined4 *)(ar4 + 100);
  uVar6 = *(undefined4 *)(ar4 + 0x44);
  iVar1 = libgcc_divide_helper_010468(iVar5,d);
  iVar2 = libgcc_divide_helper_010614(iVar5,d);
  iVar5 = get_field_10_264ff8(*(undefined4 *)(ar4 + 8),iVar5,ar6,ar7);
  iVar3 = libgcc_divide_helper_010468(d * iVar5,*(undefined4 *)(ar4 + 0x58));
  if (iVar1 <= iVar5) {
    iVar3 = iVar3 - ((d - iVar2) + -1);
  }
  iVar7 = iVar7 + iVar3;
  *(int *)(ar4 + 0xa0) = iVar3;
  *(int *)(ar4 + 0xa4) = iVar4 * iVar5;
  if (ar5_00 <= iVar7) {
    iVar7 = iVar7 - ar5_00;
    if (*(int *)(ar4 + 0x58) == 2) {
      uVar6 = FUN_8c26014c(ar4_00,ar5_00,uVar6,iVar7);
      return uVar6;
    }
    uVar6 = FUN_8c260180(ar4_00,ar5_00,uVar6,iVar7);
    return uVar6;
  }
  return 0xa4;
}



/* FUN_8c260284 @ 8c260284 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

int FUN_8c260284(undefined4 ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  int unaff_r13;
  int unaff_r14;
  
  if ((*(int *)(unaff_r14 + 4) == 1) &&
     (iVar1 = (*(code *)PTR_get_field_c_264f82_8c260370)(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7)
     , iVar1 == 0)) {
    ar5 = unaff_r13 + 0x70;
    ar7 = unaff_r13 + 0x78;
    ar6 = unaff_r13 + 0x74;
    (**(code **)(DAT_8c260364 + unaff_r14))
              (*(undefined4 *)(DAT_8c260364 + 4 + unaff_r14),ar5,ar6,ar7);
    FUN_8c260062(unaff_r14,ar5,ar6,ar7);
    *(undefined4 *)(unaff_r14 + 4) = 2;
  }
  iVar1 = *(int *)(unaff_r14 + 4);
  if (iVar1 == 2) {
    (*(code *)PTR_FUN_8c260374)(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7);
    iVar1 = (*(code *)PTR_get_field_c_264f82_8c260370)(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7);
    if (iVar1 == 3) {
      FUN_8c260198(unaff_r14,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c260378)(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7);
      iVar1 = (int)DAT_8c260366;
      iVar1 = (**(code **)(iVar1 + unaff_r14))
                        (*(undefined4 *)(iVar1 + 4 + unaff_r14),
                         *(undefined4 *)(iVar1 + 0x14 + unaff_r14),
                         *(undefined4 *)(iVar1 + 0x10 + unaff_r14),ar7);
      *(undefined4 *)(unaff_r14 + 4) = 3;
    }
  }
  return iVar1;
}



/* FUN_8c2602f4 @ 8c2602f4 callers=1 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2602f4(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(DAT_8c260368 + ar4) == 0) {
    if ((*(int *)(ar4 + 4) == 1) &&
       (iVar1 = (*(code *)PTR_get_field_c_264f82_8c260370)(*(undefined4 *)(ar4 + 8)), iVar1 == 0)) {
      ar5 = ar4 + 0x70;
      ar7 = ar4 + 0x78;
      ar6 = ar4 + 0x74;
      (**(code **)(DAT_8c260364 + ar4))(*(undefined4 *)(DAT_8c260364 + 4 + ar4));
      FUN_8c260062(ar4,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 4) = 2;
    }
    iVar1 = *(int *)(ar4 + 4);
    if (iVar1 == 2) {
      (*(code *)PTR_FUN_8c260374)(*(undefined4 *)(ar4 + 8));
      iVar1 = (*(code *)PTR_get_field_c_264f82_8c260370)(*(undefined4 *)(ar4 + 8));
      if (iVar1 == 3) {
        FUN_8c260198(ar4,ar5,ar6,ar7);
        (*(code *)PTR_FUN_8c260378)(*(undefined4 *)(ar4 + 8));
        iVar1 = (int)DAT_8c260366;
        iVar1 = (**(code **)(iVar1 + ar4))
                          (*(undefined4 *)(iVar1 + 4 + ar4),*(undefined4 *)(iVar1 + 0x14 + ar4),
                           *(undefined4 *)(iVar1 + 0x10 + ar4));
        *(undefined4 *)(ar4 + 4) = 3;
      }
    }
    return iVar1;
  }
  if (*(short *)(DAT_8c260368 + ar4) == 2) {
    uVar2 = (*(code *)PTR_FUN_8c26037c)();
    return uVar2;
  }
  if (*(short *)(DAT_8c260368 + ar4) == 3) {
    uVar2 = (*(code *)PTR_FUN_8c260380)();
    return uVar2;
  }
  if (*(short *)(DAT_8c260368 + ar4) == 4) {
    uVar2 = (*(code *)PTR_FUN_8c260384)();
    return uVar2;
  }
  if (*(short *)(DAT_8c260368 + ar4) == 1) {
    uVar2 = (*(code *)PTR_FUN_8c260388)();
    return uVar2;
  }
  return (int)*(short *)(DAT_8c260368 + ar4);
}



/* FUN_8c260340 @ 8c260340 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c260340(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  short *psVar2;
  int iVar3;
  
  iVar3 = (int)DAT_8c26036a;
  psVar2 = (short *)(unaff_r12 + (int)ar4);
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c2602f4(ar4,ar5,ar6,ar7);
    }
    ar4 = (short *)((int)ar4 + iVar3);
  } while (ar4 < psVar2);
  return iVar1;
}



/* FUN_8c260390 @ 8c260390 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c260390(int ar4,undefined4 ar5,short *ar6,undefined1 *ar7,undefined1 *s0,char *s4,char *s8,
            uint *s12,int *s16,undefined4 *s20,undefined2 *s24)

{
  char cVar1;
  int *piVar2;
  
  *ar6 = (ushort)*(byte *)(ar4 + 7) << 4;
  *s8 = (*(byte *)(ar4 + 9) & 3) + 1;
  *s12 = (uint)*(ushort *)(ar4 + 0x2a);
  cVar1 = *(char *)(ar4 + 8);
  piVar2 = (int *)(ar4 + 0xc);
  if (cVar1 == '\0') {
    *s0 = 0x10;
    *s4 = *s8 << 1;
    *s20 = 1;
    *s16 = (int)(*piVar2 + (uint)(*piVar2 < 0)) >> 1;
    *s24 = 0;
  }
  else if (cVar1 == '\x01') {
    *s0 = 8;
    *s4 = *s8;
    *s20 = 1;
    *s16 = *piVar2;
    *s24 = 1;
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    *s0 = 4;
    *s4 = *s8;
    *s20 = 2;
    *s16 = *piVar2 << 1;
    *s24 = 2;
  }
  *s4 = '\x02';
  *s20 = 1;
  *s16 = (int)(*piVar2 + (uint)(*piVar2 < 0)) >> 1;
  *s0 = 0x10;
  *ar7 = 0xff;
  return 0;
}



/* FUN_8c26045c @ 8c26045c callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c26045c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a7;
  short asStack_18 [2];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  a7 = ar4 + 0xc;
  *(undefined2 *)(ar4 + 2) = 1;
  uStack_14 = ar5;
  uStack_10 = ar6;
  iVar1 = FUN_8c260390(ar5,ar6,asStack_18,a7);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    *(undefined2 *)(ar4 + 0x1c) = 0;
    *(undefined2 *)(ar4 + 0x4a) = 0;
    *(undefined2 *)(ar4 + 0x48) = 0;
    *(undefined2 *)(ar4 + 0x26) = 0;
    *(undefined2 *)(ar4 + 0x24) = 0;
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined4 *)(ar4 + 0x30) = 0;
    *(undefined4 *)(ar4 + 0x2c) = 0;
    *(undefined4 *)(ar4 + 0x28) = 0;
    *(undefined4 *)(ar4 + 0x20) = 0;
    *(int *)(ar4 + 0x58) = (int)*(char *)(ar4 + 0xe);
    *(int *)(ar4 + 0x5c) = (int)*(char *)(ar4 + 0xf);
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 0x10);
    *(undefined4 *)(ar4 + 100) = *(undefined4 *)(ar4 + 0x3c);
    *(undefined4 *)(ar4 + 0x68) = *(undefined4 *)(ar4 + 0x40);
    *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)(ar4 + 0x44);
    *(undefined2 *)(ar4 + 0x7c) = *(undefined2 *)(ar4 + 0x48);
    *(undefined2 *)(ar4 + 0x7e) = *(undefined2 *)(ar4 + 0x4a);
    *(int *)(ar4 + 0x80) = ar4 + 0x4c;
    *(undefined4 *)(ar4 + 0x9c) = 0;
    *(undefined4 *)(ar4 + 0x98) = 0;
    *(undefined2 *)(ar4 + 0xa8) = 2;
    (*(code *)PTR_memset_8c2605dc)(ar4 + 0x4c,0,4,a7);
    iVar1 = (int)asStack_18[0];
  }
  return iVar1;
}



/* FUN_8c260540 @ 8c260540 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c260540(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = *(int *)(ar4 + 0x50);
  if ((*(int *)(ar4 + 4) == 1) &&
     (iVar1 = (*(code *)PTR_get_field_c_264f82_8c2605e0)(*(undefined4 *)(ar4 + 8),&DAT_8c4b9828),
     iVar1 == 0)) {
    (**(code **)(DAT_8c2605d8 + ar4))
              (*(undefined4 *)(DAT_8c2605d8 + 4 + ar4),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78);
    iVar1 = *(int *)(ar4 + 0x68) - *(int *)(ar4 + 0x70);
    if (*(int *)(ar4 + 0x74) < iVar1) {
      iVar1 = *(int *)(ar4 + 0x74);
    }
    iVar5 = *(int *)(ar4 + 100);
    if (*(int *)(ar4 + 0x54) < iVar1) {
      iVar1 = *(int *)(ar4 + 0x54);
    }
    iVar8 = *(int *)(ar4 + 0x70) * 2 + iVar5;
    if (*(char *)(ar4 + 0xe) == '\x02') {
      iVar2 = *(int *)(ar4 + 0x6c);
      iVar3 = *(int *)(ar4 + 0x70);
      iVar10 = 0;
      iVar6 = 0;
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          iVar10 = iVar10 + 1;
          *(undefined2 *)(iVar7 + iVar8) = *(undefined2 *)(iVar6 * 2 + iVar9);
          iVar4 = iVar6 + 1;
          iVar6 = iVar6 + 2;
          *(undefined2 *)(iVar7 + (iVar2 + iVar3) * 2 + iVar5) = *(undefined2 *)(iVar4 * 2 + iVar9);
          iVar7 = iVar7 + 2;
        } while (iVar10 < iVar1);
      }
    }
    else {
      iVar2 = 0;
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = iVar2 + 1;
          *(undefined2 *)(iVar5 + iVar8) = *(undefined2 *)(iVar5 + iVar9);
          iVar5 = iVar5 + 2;
        } while (iVar2 < iVar1);
      }
    }
    *(int *)(DAT_8c26064a + ar4) = iVar1;
    *(int *)(DAT_8c26064c + ar4) = iVar1 * *(char *)(ar4 + 0xe) * 2;
    *(undefined4 *)(ar4 + 4) = 2;
  }
  iVar9 = *(int *)(ar4 + 4);
  if (iVar9 == 2) {
    iVar9 = (int)DAT_8c26064e;
    iVar9 = (**(code **)(iVar9 + ar4))
                      (*(undefined4 *)(iVar9 + 4 + ar4),*(undefined4 *)(iVar9 + 0x14 + ar4),
                       *(undefined4 *)(iVar9 + 0x10 + ar4));
    *(undefined4 *)(ar4 + 4) = 3;
  }
  return iVar9;
}



/* FUN_8c26054c @ 8c26054c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26054c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *unaff_r13;
  int iVar10;
  int unaff_r14;
  
  iVar9 = *unaff_r13;
  if ((*(int *)(unaff_r14 + 4) == 1) &&
     (iVar1 = (*(code *)PTR_get_field_c_264f82_8c2605e0)(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7)
     , iVar1 == 0)) {
    (**(code **)(DAT_8c2605d8 + unaff_r14))
              (*(undefined4 *)(DAT_8c2605d8 + 4 + unaff_r14),unaff_r13 + 8,unaff_r13 + 9,
               unaff_r13 + 10);
    iVar1 = unaff_r13[6] - unaff_r13[8];
    if (unaff_r13[9] < iVar1) {
      iVar1 = unaff_r13[9];
    }
    iVar5 = unaff_r13[5];
    if (unaff_r13[1] < iVar1) {
      iVar1 = unaff_r13[1];
    }
    iVar8 = unaff_r13[8] * 2 + iVar5;
    ar7 = 0;
    if (*(char *)(unaff_r14 + 0xe) == '\x02') {
      iVar2 = unaff_r13[7];
      iVar3 = unaff_r13[8];
      iVar10 = 0;
      iVar6 = 0;
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          iVar10 = iVar10 + 1;
          *(undefined2 *)(iVar7 + iVar8) = *(undefined2 *)(iVar6 * 2 + iVar9);
          iVar4 = iVar6 + 1;
          iVar6 = iVar6 + 2;
          *(undefined2 *)(iVar7 + (iVar2 + iVar3) * 2 + iVar5) = *(undefined2 *)(iVar4 * 2 + iVar9);
          iVar7 = iVar7 + 2;
        } while (iVar10 < iVar1);
      }
    }
    else {
      iVar2 = 0;
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = iVar2 + 1;
          *(undefined2 *)(iVar5 + iVar8) = *(undefined2 *)(iVar5 + iVar9);
          iVar5 = iVar5 + 2;
        } while (iVar2 < iVar1);
      }
    }
    *(int *)(DAT_8c26064a + unaff_r14) = iVar1;
    *(int *)(DAT_8c26064c + unaff_r14) = iVar1 * *(char *)(unaff_r14 + 0xe) * 2;
    *(undefined4 *)(unaff_r14 + 4) = 2;
  }
  iVar9 = *(int *)(unaff_r14 + 4);
  if (iVar9 == 2) {
    iVar9 = (int)DAT_8c26064e;
    iVar9 = (**(code **)(iVar9 + unaff_r14))
                      (*(undefined4 *)(iVar9 + 4 + unaff_r14),
                       *(undefined4 *)(iVar9 + 0x14 + unaff_r14),
                       *(undefined4 *)(iVar9 + 0x10 + unaff_r14),ar7);
    *(undefined4 *)(unaff_r14 + 4) = 3;
  }
  return iVar9;
}



/* FUN_8c260636 @ 8c260636 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c260636(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c013ec0(ar4,&DAT_8c272048,4,ar7);
  return (uint)(iVar1 == 0);
}



/* FUN_8c260658 @ 8c260658 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c260658(int ar4,uint ar5,short *ar6,undefined1 *ar7,char *s0,char *s4,char *s8,uint *s12,
            undefined4 s16,undefined4 *s20,undefined2 *s24)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *extraout_r2;
  undefined4 *extraout_r3;
  byte *pbVar8;
  undefined1 *a7;
  ushort *puVar9;
  uint uVar10;
  
  uVar10 = 0;
  a7 = ar7;
  if (0 < (int)ar5) {
    do {
      iVar5 = FUN_8c013ec0(uVar10 + ar4,PTR_DAT_8c277fa0,4,a7);
      if (iVar5 == 0) break;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)ar5);
  }
  if (uVar10 != ar5) {
    if ((int)uVar10 < 0) {
      uVar6 = ~(~uVar10 + 1 & 3) + 1;
    }
    else {
      uVar6 = uVar10 & 3;
    }
    if ((uVar6 == 0) && (puVar9 = (ushort *)(uVar10 + 8 + ar4), *puVar9 < 2)) {
      uVar10 = 0;
      if (0 < (int)ar5) {
        do {
          iVar5 = FUN_8c013ec0(uVar10 + ar4,PTR_DAT_8c277fa8,4,a7);
          if (iVar5 == 0) break;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)ar5);
      }
      if (uVar10 != ar5) {
        pbVar8 = (byte *)(uVar10 + 4 + ar4);
        bVar2 = pbVar8[1];
        bVar1 = *pbVar8;
        bVar3 = pbVar8[2];
        bVar4 = pbVar8[3];
        *ar6 = (short)uVar10 + 8;
        uVar10 = (uint)bVar2 << 8 | (uint)bVar3 << 0x10 | (uint)bVar4 << 0x18 | (uint)bVar1;
        *ar7 = 0xff;
        *s12 = (uint)*(byte *)((int)puVar9 + 5) << 8 | (uint)(byte)puVar9[3] << 0x10 |
               (uint)*(byte *)((int)puVar9 + 7) << 0x18 | (uint)(byte)puVar9[2];
        *s8 = (char)puVar9[1];
        *s0 = (char)puVar9[7];
        *s4 = (char)puVar9[6];
        uVar7 = libgcc_divide_helper_010468(uVar10,(int)*s4);
        *extraout_r3 = uVar7;
        *s20 = 1;
        if (*s0 == '\x10') {
          *s24 = 0;
        }
        else if (*s0 == '\b') {
          *s24 = 1;
        }
        else if (*s0 == '\x04') {
          *s4 = *s8 << 1;
          *s20 = 4;
          uVar7 = libgcc_divide_helper_01051c(uVar10 >> 1,(int)*s8);
          *extraout_r2 = uVar7;
          *s0 = '\x10';
          *s24 = 2;
        }
        if ((((*s0 != '\0') && (*s4 != '\0')) && ('\0' < *s8)) && ((*s8 < '\x03' && (*s12 != 0)))) {
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}



/* FUN_8c260810 @ 8c260810 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c260810(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a7;
  short asStack_18 [2];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  a7 = ar4 + 0xc;
  *(undefined2 *)(ar4 + 2) = 1;
  uStack_14 = ar5;
  uStack_10 = ar6;
  iVar1 = FUN_8c260658(ar5,ar6,asStack_18,a7);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    *(undefined2 *)(ar4 + 0x1c) = 0;
    *(undefined2 *)(ar4 + 0x4a) = 0;
    *(undefined2 *)(ar4 + 0x48) = 0;
    *(undefined2 *)(ar4 + 0x26) = 0;
    *(undefined2 *)(ar4 + 0x24) = 0;
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined4 *)(ar4 + 0x30) = 0;
    *(undefined4 *)(ar4 + 0x2c) = 0;
    *(undefined4 *)(ar4 + 0x28) = 0;
    *(undefined4 *)(ar4 + 0x20) = 0;
    *(int *)(ar4 + 0x58) = (int)*(char *)(ar4 + 0xe);
    *(int *)(ar4 + 0x5c) = (int)*(char *)(ar4 + 0xf);
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 0x10);
    *(undefined4 *)(ar4 + 100) = *(undefined4 *)(ar4 + 0x3c);
    *(undefined4 *)(ar4 + 0x68) = *(undefined4 *)(ar4 + 0x40);
    *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)(ar4 + 0x44);
    *(undefined2 *)(ar4 + 0x7c) = *(undefined2 *)(ar4 + 0x48);
    *(undefined2 *)(ar4 + 0x7e) = *(undefined2 *)(ar4 + 0x4a);
    *(int *)(ar4 + 0x80) = ar4 + 0x4c;
    *(undefined4 *)(ar4 + 0x9c) = 0;
    *(undefined4 *)(ar4 + 0x98) = 0;
    *(undefined2 *)(ar4 + 0xa8) = 1;
    (*(code *)PTR_memset_8c2608f4)(ar4 + 0x4c,0,4,a7);
    iVar1 = (int)asStack_18[0];
  }
  return iVar1;
}



/* FUN_8c2608f8 @ 8c2608f8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2608f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = *(int *)(ar4 + 0x50);
  if ((*(int *)(ar4 + 4) == 1) &&
     (iVar1 = (*(code *)PTR_get_field_c_264f82_8c2609ec)(*(undefined4 *)(ar4 + 8),&DAT_8c4b9828),
     iVar1 == 0)) {
    (**(code **)(DAT_8c2609e2 + ar4))
              (*(undefined4 *)(DAT_8c2609e2 + 4 + ar4),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78);
    iVar1 = *(int *)(ar4 + 0x68) - *(int *)(ar4 + 0x70);
    if (*(int *)(ar4 + 0x74) < iVar1) {
      iVar1 = *(int *)(ar4 + 0x74);
    }
    iVar5 = *(int *)(ar4 + 100);
    if (*(int *)(ar4 + 0x54) < iVar1) {
      iVar1 = *(int *)(ar4 + 0x54);
    }
    iVar8 = *(int *)(ar4 + 0x70) * 2 + iVar5;
    if (*(char *)(ar4 + 0xe) == '\x02') {
      iVar2 = *(int *)(ar4 + 0x6c);
      iVar3 = *(int *)(ar4 + 0x70);
      iVar10 = 0;
      iVar6 = 0;
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          iVar10 = iVar10 + 1;
          *(undefined2 *)(iVar7 + iVar8) = *(undefined2 *)(iVar6 * 2 + iVar9);
          iVar4 = iVar6 + 1;
          iVar6 = iVar6 + 2;
          *(undefined2 *)(iVar7 + (iVar2 + iVar3) * 2 + iVar5) = *(undefined2 *)(iVar4 * 2 + iVar9);
          iVar7 = iVar7 + 2;
        } while (iVar10 < iVar1);
      }
    }
    else {
      iVar2 = 0;
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = iVar2 + 1;
          *(undefined2 *)(iVar5 + iVar8) = *(undefined2 *)(iVar5 + iVar9);
          iVar5 = iVar5 + 2;
        } while (iVar2 < iVar1);
      }
    }
    *(int *)(DAT_8c2609e4 + ar4) = iVar1;
    *(int *)(DAT_8c2609e6 + ar4) = iVar1 * *(char *)(ar4 + 0xe) * 2;
    *(undefined4 *)(ar4 + 4) = 2;
  }
  iVar9 = *(int *)(ar4 + 4);
  if (iVar9 == 2) {
    iVar9 = (int)DAT_8c2609e8;
    iVar9 = (**(code **)(iVar9 + ar4))
                      (*(undefined4 *)(iVar9 + 4 + ar4),*(undefined4 *)(iVar9 + 0x14 + ar4),
                       *(undefined4 *)(iVar9 + 0x10 + ar4));
    *(undefined4 *)(ar4 + 4) = 3;
  }
  return iVar9;
}



/* FUN_8c260904 @ 8c260904 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c260904(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *unaff_r13;
  int iVar10;
  int unaff_r14;
  
  iVar9 = *unaff_r13;
  if ((*(int *)(unaff_r14 + 4) == 1) &&
     (iVar1 = (*(code *)PTR_get_field_c_264f82_8c2609ec)(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7)
     , iVar1 == 0)) {
    (**(code **)(DAT_8c2609e2 + unaff_r14))
              (*(undefined4 *)(DAT_8c2609e2 + 4 + unaff_r14),unaff_r13 + 8,unaff_r13 + 9,
               unaff_r13 + 10);
    iVar1 = unaff_r13[6] - unaff_r13[8];
    if (unaff_r13[9] < iVar1) {
      iVar1 = unaff_r13[9];
    }
    iVar5 = unaff_r13[5];
    if (unaff_r13[1] < iVar1) {
      iVar1 = unaff_r13[1];
    }
    iVar8 = unaff_r13[8] * 2 + iVar5;
    ar7 = 0;
    if (*(char *)(unaff_r14 + 0xe) == '\x02') {
      iVar2 = unaff_r13[7];
      iVar3 = unaff_r13[8];
      iVar10 = 0;
      iVar6 = 0;
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          iVar10 = iVar10 + 1;
          *(undefined2 *)(iVar7 + iVar8) = *(undefined2 *)(iVar6 * 2 + iVar9);
          iVar4 = iVar6 + 1;
          iVar6 = iVar6 + 2;
          *(undefined2 *)(iVar7 + (iVar2 + iVar3) * 2 + iVar5) = *(undefined2 *)(iVar4 * 2 + iVar9);
          iVar7 = iVar7 + 2;
        } while (iVar10 < iVar1);
      }
    }
    else {
      iVar2 = 0;
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = iVar2 + 1;
          *(undefined2 *)(iVar5 + iVar8) = *(undefined2 *)(iVar5 + iVar9);
          iVar5 = iVar5 + 2;
        } while (iVar2 < iVar1);
      }
    }
    *(int *)(DAT_8c2609e4 + unaff_r14) = iVar1;
    *(int *)(DAT_8c2609e6 + unaff_r14) = iVar1 * *(char *)(unaff_r14 + 0xe) * 2;
    *(undefined4 *)(unaff_r14 + 4) = 2;
  }
  iVar9 = *(int *)(unaff_r14 + 4);
  if (iVar9 == 2) {
    iVar9 = (int)DAT_8c2609e8;
    iVar9 = (**(code **)(iVar9 + unaff_r14))
                      (*(undefined4 *)(iVar9 + 4 + unaff_r14),
                       *(undefined4 *)(iVar9 + 0x14 + unaff_r14),
                       *(undefined4 *)(iVar9 + 0x10 + unaff_r14),ar7);
    *(undefined4 *)(unaff_r14 + 4) = 3;
  }
  return iVar9;
}



/* FUN_8c2609f0 @ 8c2609f0 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2609f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  byte *pbVar11;
  
  pbVar11 = *(byte **)(ar4 + 0x50);
  if ((*(int *)(ar4 + 4) == 1) &&
     (iVar2 = (*(code *)PTR_get_field_c_264f82_8c260af8)(*(undefined4 *)(ar4 + 8),&DAT_8c4b9828),
     iVar2 == 0)) {
    (**(code **)(DAT_8c260af0 + ar4))
              (*(undefined4 *)(DAT_8c260af0 + 4 + ar4),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78);
    iVar2 = *(int *)(ar4 + 0x68) - *(int *)(ar4 + 0x70);
    if (*(int *)(ar4 + 0x74) < iVar2) {
      iVar2 = *(int *)(ar4 + 0x74);
    }
    iVar6 = *(int *)(ar4 + 100);
    if (*(int *)(ar4 + 0x54) < iVar2) {
      iVar2 = *(int *)(ar4 + 0x54);
    }
    psVar10 = (short *)(*(int *)(ar4 + 0x70) * 2 + iVar6);
    if (*(char *)(ar4 + 0xe) == '\x02') {
      iVar3 = *(int *)(ar4 + 0x6c);
      iVar9 = 0;
      iVar4 = *(int *)(ar4 + 0x70);
      iVar7 = 0;
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          *(ushort *)((int)psVar10 + iVar8) = (pbVar11[iVar7] - 0x80) * 0x100;
          iVar5 = iVar7 + 1;
          iVar9 = iVar9 + 1;
          iVar7 = iVar7 + 2;
          *(ushort *)(iVar8 + (iVar3 + iVar4) * 2 + iVar6) = (pbVar11[iVar5] - 0x80) * 0x100;
          iVar8 = iVar8 + 2;
        } while (iVar9 < iVar2);
      }
    }
    else {
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          bVar1 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          iVar6 = iVar6 + 1;
          *psVar10 = (bVar1 - 0x80) * 0x100;
          psVar10 = psVar10 + 1;
        } while (iVar6 < iVar2);
      }
    }
    *(int *)(DAT_8c260af2 + ar4) = iVar2;
    *(int *)(DAT_8c260af4 + ar4) = iVar2 * *(char *)(ar4 + 0xe);
    *(undefined4 *)(ar4 + 4) = 2;
  }
  iVar2 = *(int *)(ar4 + 4);
  if (iVar2 == 2) {
    iVar2 = (int)DAT_8c260af6;
    iVar2 = (**(code **)(iVar2 + ar4))
                      (*(undefined4 *)(iVar2 + 4 + ar4),*(undefined4 *)(iVar2 + 0x14 + ar4),
                       *(undefined4 *)(iVar2 + 0x10 + ar4));
    *(undefined4 *)(ar4 + 4) = 3;
  }
  return iVar2;
}



/* FUN_8c2609fc @ 8c2609fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2609fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  byte *pbVar10;
  undefined4 *unaff_r13;
  int unaff_r14;
  
  pbVar10 = (byte *)*unaff_r13;
  if ((*(int *)(unaff_r14 + 4) == 1) &&
     (iVar2 = (*(code *)PTR_get_field_c_264f82_8c260af8)(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7)
     , iVar2 == 0)) {
    (**(code **)(DAT_8c260af0 + unaff_r14))
              (*(undefined4 *)(DAT_8c260af0 + 4 + unaff_r14),unaff_r13 + 8,unaff_r13 + 9,
               unaff_r13 + 10);
    iVar2 = unaff_r13[6] - unaff_r13[8];
    if ((int)unaff_r13[9] < iVar2) {
      iVar2 = unaff_r13[9];
    }
    iVar6 = unaff_r13[5];
    if ((int)unaff_r13[1] < iVar2) {
      iVar2 = unaff_r13[1];
    }
    psVar9 = (short *)(unaff_r13[8] * 2 + iVar6);
    if (*(char *)(unaff_r14 + 0xe) == '\x02') {
      iVar3 = unaff_r13[7];
      ar7 = 0;
      iVar4 = unaff_r13[8];
      iVar7 = 0;
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          *(ushort *)((int)psVar9 + iVar8) = (pbVar10[iVar7] - 0x80) * 0x100;
          iVar5 = iVar7 + 1;
          ar7 = ar7 + 1;
          iVar7 = iVar7 + 2;
          *(ushort *)(iVar8 + (iVar3 + iVar4) * 2 + iVar6) = (pbVar10[iVar5] - 0x80) * 0x100;
          iVar8 = iVar8 + 2;
        } while (ar7 < iVar2);
      }
    }
    else {
      ar7 = 0;
      if (0 < iVar2) {
        do {
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          ar7 = ar7 + 1;
          *psVar9 = (bVar1 - 0x80) * 0x100;
          psVar9 = psVar9 + 1;
        } while (ar7 < iVar2);
      }
    }
    *(int *)(DAT_8c260af2 + unaff_r14) = iVar2;
    *(int *)(DAT_8c260af4 + unaff_r14) = iVar2 * *(char *)(unaff_r14 + 0xe);
    *(undefined4 *)(unaff_r14 + 4) = 2;
  }
  iVar2 = *(int *)(unaff_r14 + 4);
  if (iVar2 == 2) {
    iVar2 = (int)DAT_8c260af6;
    iVar2 = (**(code **)(iVar2 + unaff_r14))
                      (*(undefined4 *)(iVar2 + 4 + unaff_r14),
                       *(undefined4 *)(iVar2 + 0x14 + unaff_r14),
                       *(undefined4 *)(iVar2 + 0x10 + unaff_r14),ar7);
    *(undefined4 *)(unaff_r14 + 4) = 3;
  }
  return iVar2;
}



/* FUN_8c260afc @ 8c260afc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c260afc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = *(int *)(ar4 + 0x50);
  if ((*(int *)(ar4 + 4) == 1) &&
     (iVar2 = (*(code *)PTR_get_field_c_264f82_8c260c28)(*(undefined4 *)(ar4 + 8),&DAT_8c4b9828),
     iVar2 == 0)) {
    (**(code **)(DAT_8c260c1e + ar4))
              (*(undefined4 *)(DAT_8c260c1e + 4 + ar4),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78);
    iVar2 = *(int *)(ar4 + 0x68) - *(int *)(ar4 + 0x70);
    if (*(int *)(ar4 + 0x74) < iVar2) {
      iVar2 = *(int *)(ar4 + 0x74);
    }
    iVar6 = *(int *)(ar4 + 100);
    if (*(int *)(ar4 + 0x54) < iVar2) {
      iVar2 = *(int *)(ar4 + 0x54);
    }
    puVar10 = (undefined2 *)(*(int *)(ar4 + 0x70) * 2 + iVar6);
    if (*(char *)(ar4 + 0xe) == '\x02') {
      iVar9 = *(int *)(ar4 + 0x6c);
      iVar4 = *(int *)(ar4 + 0x70);
      iVar12 = 0;
      iVar7 = 0;
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          *(ushort *)((int)puVar10 + iVar8) =
               CONCAT11(*(undefined1 *)(iVar7 + 2 + iVar11),*(undefined1 *)(iVar11 + iVar7));
          iVar5 = iVar7 + 3;
          iVar3 = iVar7 + 1;
          iVar12 = iVar12 + 1;
          iVar7 = iVar7 + 4;
          *(ushort *)(iVar8 + (iVar9 + iVar4) * 2 + iVar6) =
               CONCAT11(*(undefined1 *)(iVar5 + iVar11),*(undefined1 *)(iVar3 + iVar11));
          iVar8 = iVar8 + 2;
        } while (iVar12 < iVar2);
      }
    }
    else {
      iVar4 = 0;
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          iVar7 = iVar6 + 1;
          iVar4 = iVar4 + 1;
          puVar1 = (undefined1 *)(iVar6 + iVar11);
          iVar6 = iVar6 + 2;
          *puVar10 = CONCAT11(*(undefined1 *)(iVar7 + iVar11),*puVar1);
          puVar10 = puVar10 + 1;
        } while (iVar4 < iVar2);
      }
    }
    *(int *)(DAT_8c260c20 + ar4) = iVar2;
    *(int *)(DAT_8c260c22 + ar4) = iVar2 * *(char *)(ar4 + 0xe) * 2;
    *(undefined4 *)(ar4 + 4) = 2;
  }
  iVar11 = *(int *)(ar4 + 4);
  if (iVar11 == 2) {
    iVar11 = (int)DAT_8c260c24;
    iVar11 = (**(code **)(iVar11 + ar4))
                       (*(undefined4 *)(iVar11 + 4 + ar4),*(undefined4 *)(iVar11 + 0x14 + ar4),
                        *(undefined4 *)(iVar11 + 0x10 + ar4));
    *(undefined4 *)(ar4 + 4) = 3;
  }
  return iVar11;
}



/* FUN_8c260b08 @ 8c260b08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c260b08(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  int *unaff_r13;
  int iVar12;
  int unaff_r14;
  
  iVar11 = *unaff_r13;
  if ((*(int *)(unaff_r14 + 4) == 1) &&
     (iVar2 = (*(code *)PTR_get_field_c_264f82_8c260c28)(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7)
     , iVar2 == 0)) {
    (**(code **)(DAT_8c260c1e + unaff_r14))
              (*(undefined4 *)(DAT_8c260c1e + 4 + unaff_r14),unaff_r13 + 8,unaff_r13 + 9,
               unaff_r13 + 10);
    iVar2 = unaff_r13[6] - unaff_r13[8];
    if (unaff_r13[9] < iVar2) {
      iVar2 = unaff_r13[9];
    }
    iVar6 = unaff_r13[5];
    if (unaff_r13[1] < iVar2) {
      iVar2 = unaff_r13[1];
    }
    puVar10 = (undefined2 *)(unaff_r13[8] * 2 + iVar6);
    ar7 = 0;
    if (*(char *)(unaff_r14 + 0xe) == '\x02') {
      iVar9 = unaff_r13[7];
      iVar4 = unaff_r13[8];
      iVar12 = 0;
      iVar7 = 0;
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          *(ushort *)((int)puVar10 + iVar8) =
               CONCAT11(*(undefined1 *)(iVar7 + 2 + iVar11),*(undefined1 *)(iVar11 + iVar7));
          iVar5 = iVar7 + 3;
          iVar3 = iVar7 + 1;
          iVar12 = iVar12 + 1;
          iVar7 = iVar7 + 4;
          *(ushort *)(iVar8 + (iVar9 + iVar4) * 2 + iVar6) =
               CONCAT11(*(undefined1 *)(iVar5 + iVar11),*(undefined1 *)(iVar3 + iVar11));
          iVar8 = iVar8 + 2;
        } while (iVar12 < iVar2);
      }
    }
    else {
      iVar4 = 0;
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          iVar7 = iVar6 + 1;
          iVar4 = iVar4 + 1;
          puVar1 = (undefined1 *)(iVar6 + iVar11);
          iVar6 = iVar6 + 2;
          *puVar10 = CONCAT11(*(undefined1 *)(iVar7 + iVar11),*puVar1);
          puVar10 = puVar10 + 1;
        } while (iVar4 < iVar2);
      }
    }
    *(int *)(DAT_8c260c20 + unaff_r14) = iVar2;
    *(int *)(DAT_8c260c22 + unaff_r14) = iVar2 * *(char *)(unaff_r14 + 0xe) * 2;
    *(undefined4 *)(unaff_r14 + 4) = 2;
  }
  iVar11 = *(int *)(unaff_r14 + 4);
  if (iVar11 == 2) {
    iVar11 = (int)DAT_8c260c24;
    iVar11 = (**(code **)(iVar11 + unaff_r14))
                       (*(undefined4 *)(iVar11 + 4 + unaff_r14),
                        *(undefined4 *)(iVar11 + 0x14 + unaff_r14),
                        *(undefined4 *)(iVar11 + 0x10 + unaff_r14),ar7);
    *(undefined4 *)(unaff_r14 + 4) = 3;
  }
  return iVar11;
}



/* FUN_8c260c2c @ 8c260c2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c260c2c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c013ec0(ar4,&DAT_8c272050,4,ar7);
  if ((iVar1 == 0) && (iVar1 = FUN_8c013ec0(ar4 + 8,&DAT_8c272060,4,ar7), iVar1 == 0)) {
    return 1;
  }
  return 0;
}



/* FUN_8c260c60 @ 8c260c60 callers=1 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c260c60(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(short *)(DAT_8c260c88 + ar4) == 2) {
    uVar1 = FUN_8c260afc(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  if (*(short *)(DAT_8c260c88 + ar4) == 1) {
    uVar1 = FUN_8c2609f0(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  if (*(short *)(DAT_8c260c88 + ar4) == 0) {
    uVar1 = FUN_8c2608f8(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return (int)DAT_8c260c88;
}



/* FUN_8c260c98 @ 8c260c98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c260c98(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  DAT_8c277fb0 = 0;
  return ain0;
}



/* FUN_8c260ca0 @ 8c260ca0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c260ca0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  
  if (DAT_8c277fb0 == 0) {
    DAT_8c277fb4 = (((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
    ain0 = ((uint)in_S << 1 | 1 | (uint)in_IMASK << 4) & 0xffffff0f | (uint)in_Q << 8 |
           (uint)in_M << 9 | (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d |
           (uint)in_MD << 0x1e | 0xf0;
  }
  DAT_8c277fb0 = DAT_8c277fb0 + 1;
  return ain0;
}



/* FUN_8c260cc8 @ 8c260cc8 callers=12 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c260cc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  
  DAT_8c277fb0 = DAT_8c277fb0 + -1;
  if (DAT_8c277fb0 == 0) {
    ain0 = (DAT_8c277fb4 & 0xf) << 4 |
           ((uint)in_S << 1 | 1 | (uint)in_IMASK << 4) & 0xffffff0f | (uint)in_Q << 8 |
           (uint)in_M << 9 | (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d |
           (uint)in_MD << 0x1e;
  }
  return ain0;
}



/* FUN_8c260cf8 @ 8c260cf8 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c260d24) */
/* WARNING: Removing unreachable block (ram,0x8c260d20) */
/* WARNING: Removing unreachable block (ram,0x8c260d1c) */
/* WARNING: Removing unreachable block (ram,0x8c260d10) */
/* WARNING: Removing unreachable block (ram,0x8c260d00) */
/* WARNING: Removing unreachable block (ram,0x8c260cf8) */
/* WARNING: Removing unreachable block (ram,0x8c260d0a) */
/* WARNING: Removing unreachable block (ram,0x8c260d16) */
/* WARNING: Removing unreachable block (ram,0x8c260d1e) */
/* WARNING: Removing unreachable block (ram,0x8c260d22) */
/* WARNING: Removing unreachable block (ram,0x8c260d6c) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c260cf8(int ar4,int ar5,undefined2 *ar6,undefined2 *ar7)

{
  float fVar1;
  float fVar2;
  float fVar4;
  double dVar3;
  double dVar5;
  undefined4 in_fr13;
  double dVar6;
  undefined4 uVar7;
  double in_xd2;
  undefined2 uVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  dVar3 = (double)CONCAT44((float)ar5,0x40c90fdb);
  fVar4 = (float)ar4 * 6.2831855;
  dVar6 = (double)CONCAT44(0x3fb504f3,in_fr13);
  FUN_8c013c38(ar4,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    fVar4 = 2.0;
  }
  else {
    fVar4 = SUB84((double)CONCAT44(fVar4,0x3f800000) + (double)CONCAT44(fVar4,0x3f800000),0);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - (float)((ulonglong)dVar3 >> 0x20),
                             SUB84(dVar6,0));
    dVar3 = (double)CONCAT44(0xbf800000,SQRT(fVar4));
  }
  else {
    dVar6 = dVar6 - dVar3;
    dVar3 = SQRT(-(double)CONCAT44(0x3f800000,fVar4));
  }
  uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(uVar7,uVar7);
    in_xd2 = (double)CONCAT44(SUB84(dVar3,0),uVar7);
  }
  fVar4 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar9 == '\0') {
    in_xd2 = (double)CONCAT44((float)((ulonglong)in_xd2 >> 0x20) + fVar4,SUB84(in_xd2,0));
  }
  else {
    in_xd2 = in_xd2 + dVar3;
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44(fVar4,uVar7);
  }
  fVar4 = (float)((ulonglong)in_xd2 >> 0x20);
  if (cVar9 == '\0') {
    fVar1 = SUB84(dVar6,0) - fVar4;
    fVar2 = SQRT((SUB84(dVar3,0) + fVar4) * fVar1);
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),fVar2);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - fVar2,fVar1);
  }
  else {
    dVar3 = SQRT((dVar3 + in_xd2) * (dVar6 - in_xd2));
    dVar6 = (dVar6 - in_xd2) - dVar3;
  }
  uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar5 = dVar6;
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),fVar4);
    dVar5 = (double)CONCAT44(uVar7,SUB84(in_xd2,0));
  }
  if (cVar9 == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar3,0),SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 / dVar3;
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),0x46000000);
  }
  fVar4 = (float)((ulonglong)dVar5 >> 0x20);
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(uVar7,fVar4);
  }
  if (cVar9 == '\0') {
    fVar1 = SUB84(dVar6,0) * SUB84(dVar3,0);
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar1);
    uVar8 = (undefined2)(int)fVar1;
  }
  else {
    dVar6 = dVar6 * dVar3;
    uVar8 = (undefined2)(int)dVar6;
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar4);
  }
  if (cVar9 == '\0') {
    fVar4 = SUB84(dVar6,0) * fVar4;
  }
  else {
    fVar4 = SUB84(dVar6 * dVar5,0);
  }
  *ar6 = uVar8;
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x45800000,fVar4);
  }
  else {
    dVar6 = 1.38524461322914e-309;
  }
  if (cVar9 == '\0') {
    fVar4 = (float)((ulonglong)dVar6 >> 0x20);
    dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) * fVar4);
  }
  else {
    dVar6 = dVar6 * dVar6;
  }
  if (cVar9 == '\0') {
    uVar8 = (undefined2)(int)-SUB84(dVar6,0);
  }
  else {
    uVar8 = (undefined2)(int)(double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),-SUB84(dVar6,0));
  }
  *ar7 = uVar8;
  return &DAT_8c260e88;
}



/* FUN_8c260d7c @ 8c260d7c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c260e10) */
/* WARNING: Removing unreachable block (ram,0x8c260d9e) */
/* WARNING: Removing unreachable block (ram,0x8c260dc2) */
/* WARNING: Removing unreachable block (ram,0x8c260e40) */
/* WARNING: Unknown calling convention */

undefined4
FUN_8c260d7c(ushort *ar4,int ar5,short *ar6,undefined1 *ar7,undefined1 *s0,undefined1 *s4,
            undefined1 *s8,uint *s12,uint *s16)

{
  undefined4 uVar1;
  undefined4 *extraout_r3;
  uint uVar2;
  
  if (ar5 < 0x10) {
    return 0xffffffff;
  }
  if (((int)(uint)*ar4 >> 8 | (*ar4 & 0xff) << 8) == 0x8000) {
    *ar6 = (ar4[1] >> 8 | ar4[1] << 8) + 4;
    *ar7 = (char)ar4[2];
    *s4 = *(undefined1 *)((int)ar4 + 5);
    *s0 = (char)ar4[3];
    *s8 = *(undefined1 *)((int)ar4 + 7);
    uVar2 = *(uint *)(ar4 + 4);
    *s12 = uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)(ar4 + 6);
    *s16 = uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar1 = libgcc_divide_helper_010468(((char)*s4 + -2) * 8,(int)(char)*s0);
    *extraout_r3 = uVar1;
    return 0;
  }
  return 0xfffffffe;
}



/* FUN_8c260e9c @ 8c260e9c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c260ed2) */
/* WARNING: Removing unreachable block (ram,0x8c260eae) */
/* WARNING: Removing unreachable block (ram,0x8c260eec) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c260e9c(ushort *ar4,int ar5,ushort *ar6,undefined4 ar7)

{
  if (0x11 < ar5) {
    if (((int)(uint)*ar4 >> 8 | (uint)*ar4 << 8 & DAT_8c260f88 & 0xffff) != DAT_8c260f8c) {
      return 0xfffffffe;
    }
    if (0xd < (int)((int)(short)ar4[1] >> 8 & 0xffU | (int)(short)ar4[1] << 8 & DAT_8c260f88)) {
      *ar6 = ar4[8] >> 8 | ar4[8] << 8 & DAT_8c260f86;
      return 0;
    }
  }
  return 0xffffffff;
}



/* FUN_8c260f02 @ 8c260f02 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c261008) */
/* WARNING: Removing unreachable block (ram,0x8c260fb4) */
/* WARNING: Removing unreachable block (ram,0x8c260f6c) */
/* WARNING: Removing unreachable block (ram,0x8c260f38) */
/* WARNING: Removing unreachable block (ram,0x8c260f1c) */
/* WARNING: Removing unreachable block (ram,0x8c260f58) */
/* WARNING: Removing unreachable block (ram,0x8c260f9a) */
/* WARNING: Removing unreachable block (ram,0x8c260fde) */
/* WARNING: Removing unreachable block (ram,0x8c261032) */
/* WARNING: Unknown calling convention */

undefined4
FUN_8c260f02(ushort *ar4,int ar5,uint *ar6,ushort *ar7,ushort *s0,uint *s4,uint *s8,uint *s12,
            uint *s16)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *ar7 = 0;
  uVar2 = DAT_8c260f88;
  if (ar5 < 0x30) {
    return 0xffffffff;
  }
  if ((ushort)(*ar4 >> 8 | *ar4 << 8 & (ushort)DAT_8c260f88) == DAT_8c260f8c) {
    if ((int)((int)(short)ar4[1] >> 8 & 0xffU | (int)(short)ar4[1] << 8 & DAT_8c260f88) < 0x2c) {
      return 0xffffffff;
    }
    *ar6 = (int)(short)ar4[10] >> 8 & 0xffU | (int)(short)ar4[10] << 8 & DAT_8c260f88;
    uVar1 = DAT_8c260f86;
    *ar7 = ar4[0xb] >> 8 | ar4[0xb] << 8 & DAT_8c260f86;
    uVar3 = DAT_8c261054;
    if (*ar7 == 1) {
      *s0 = ar4[0xd] >> 8 | ar4[0xd] << 8 & uVar1;
      uVar4 = *(uint *)(ar4 + 0xe);
      *s4 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      uVar4 = *(uint *)(ar4 + 0x10);
      *s8 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      uVar4 = *(uint *)(ar4 + 0x12);
      *s12 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      uVar4 = *(uint *)(ar4 + 0x14);
      *s16 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      return 0;
    }
  }
  return 0xfffffffe;
}



/* FUN_8c261058 @ 8c261058 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c261136) */
/* WARNING: Removing unreachable block (ram,0x8c2610ee) */
/* WARNING: Removing unreachable block (ram,0x8c2610fc) */
/* WARNING: Removing unreachable block (ram,0x8c261116) */
/* WARNING: Removing unreachable block (ram,0x8c2610f8) */
/* WARNING: Removing unreachable block (ram,0x8c2610e4) */
/* WARNING: Removing unreachable block (ram,0x8c2610da) */
/* WARNING: Removing unreachable block (ram,0x8c2610a4) */
/* WARNING: Removing unreachable block (ram,0x8c2610a0) */
/* WARNING: Removing unreachable block (ram,0x8c26109c) */
/* WARNING: Removing unreachable block (ram,0x8c261092) */
/* WARNING: Removing unreachable block (ram,0x8c261086) */
/* WARNING: Removing unreachable block (ram,0x8c261078) */
/* WARNING: Removing unreachable block (ram,0x8c26107a) */
/* WARNING: Removing unreachable block (ram,0x8c261088) */
/* WARNING: Removing unreachable block (ram,0x8c261094) */
/* WARNING: Removing unreachable block (ram,0x8c26109e) */
/* WARNING: Removing unreachable block (ram,0x8c2610a2) */
/* WARNING: Removing unreachable block (ram,0x8c2610bc) */
/* WARNING: Removing unreachable block (ram,0x8c2610de) */
/* WARNING: Removing unreachable block (ram,0x8c2610f2) */
/* WARNING: Removing unreachable block (ram,0x8c2610fe) */
/* WARNING: Removing unreachable block (ram,0x8c261112) */
/* WARNING: Removing unreachable block (ram,0x8c2610dc) */
/* WARNING: Removing unreachable block (ram,0x8c261100) */
/* WARNING: Removing unreachable block (ram,0x8c2610e0) */
/* WARNING: Removing unreachable block (ram,0x8c261118) */
/* WARNING: Removing unreachable block (ram,0x8c26110a) */
/* WARNING: Removing unreachable block (ram,0x8c26113c) */
/* WARNING: Removing unreachable block (ram,0x8c26111a) */
/* WARNING: Removing unreachable block (ram,0x8c2610f4) */
/* WARNING: Removing unreachable block (ram,0x8c261102) */
/* WARNING: Removing unreachable block (ram,0x8c261104) */
/* WARNING: Unknown calling convention */

int FUN_8c261058(ushort *ar4,int ar5,undefined2 *ar6,short *ar7,undefined4 s0,undefined4 s4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iStack_20;
  
  fVar5 = (float)((int)*ar7 << 0x10);
  fVar6 = (float)((int)ar7[1] << 0x10);
  fVar8 = (float)((int)(short)s0 << 4) / 65536.0;
  fVar9 = (float)((int)(short)s4 << 4) / 65536.0;
  iVar4 = 0;
  while( true ) {
    if (ar5 <= iVar4) {
      *ar7 = (short)((uint)(int)fVar5 >> 0x10);
      ar7[1] = (short)((uint)(int)fVar6 >> 0x10);
      return ar5;
    }
    uVar2 = (uint)(short)(*ar4 >> 8 | *ar4 << 8);
    if ((uVar2 & 0x8000) != 0) break;
    iStack_20 = 0;
    ar4 = ar4 + 1;
    fVar7 = (float)((uVar2 & 0x1fff) + 1);
    do {
      uVar1 = *ar4;
      ar4 = (ushort *)((int)ar4 + 1);
      iVar3 = (uint)(byte)uVar1 * 4;
      fVar6 = fVar7 * *(float *)(&DAT_8c272730 + iVar3) + fVar8 * fVar5 + fVar9 * fVar6;
      *ar6 = (short)((uint)(int)fVar6 >> 0x10);
      fVar5 = fVar7 * *(float *)(&DAT_8c272b30 + iVar3) + fVar8 * fVar6 + fVar9 * fVar5;
      ar6[1] = (short)((uint)(int)fVar5 >> 0x10);
      ar6 = ar6 + 2;
      iStack_20 = iStack_20 + 2;
    } while (iStack_20 < 0x20);
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}



/* FUN_8c261170 @ 8c261170 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c261336) */
/* WARNING: Removing unreachable block (ram,0x8c261328) */
/* WARNING: Removing unreachable block (ram,0x8c261256) */
/* WARNING: Removing unreachable block (ram,0x8c2612be) */
/* WARNING: Removing unreachable block (ram,0x8c2612f4) */
/* WARNING: Removing unreachable block (ram,0x8c261250) */
/* WARNING: Removing unreachable block (ram,0x8c2612dc) */
/* WARNING: Removing unreachable block (ram,0x8c26124e) */
/* WARNING: Removing unreachable block (ram,0x8c2612f0) */
/* WARNING: Removing unreachable block (ram,0x8c2612ba) */
/* WARNING: Removing unreachable block (ram,0x8c261248) */
/* WARNING: Removing unreachable block (ram,0x8c2612f8) */
/* WARNING: Removing unreachable block (ram,0x8c2612da) */
/* WARNING: Removing unreachable block (ram,0x8c2612b8) */
/* WARNING: Removing unreachable block (ram,0x8c26125e) */
/* WARNING: Removing unreachable block (ram,0x8c26124a) */
/* WARNING: Removing unreachable block (ram,0x8c26123e) */
/* WARNING: Removing unreachable block (ram,0x8c26122a) */
/* WARNING: Removing unreachable block (ram,0x8c2611fc) */
/* WARNING: Removing unreachable block (ram,0x8c2611ee) */
/* WARNING: Removing unreachable block (ram,0x8c2611e6) */
/* WARNING: Removing unreachable block (ram,0x8c2611d2) */
/* WARNING: Removing unreachable block (ram,0x8c2611ba) */
/* WARNING: Removing unreachable block (ram,0x8c2611b2) */
/* WARNING: Removing unreachable block (ram,0x8c2611ac) */
/* WARNING: Removing unreachable block (ram,0x8c26119c) */
/* WARNING: Removing unreachable block (ram,0x8c261192) */
/* WARNING: Removing unreachable block (ram,0x8c26119e) */
/* WARNING: Removing unreachable block (ram,0x8c2611ae) */
/* WARNING: Removing unreachable block (ram,0x8c2611b8) */
/* WARNING: Removing unreachable block (ram,0x8c2611bc) */
/* WARNING: Removing unreachable block (ram,0x8c2611e4) */
/* WARNING: Removing unreachable block (ram,0x8c2611e8) */
/* WARNING: Removing unreachable block (ram,0x8c2611f0) */
/* WARNING: Removing unreachable block (ram,0x8c261226) */
/* WARNING: Removing unreachable block (ram,0x8c261230) */
/* WARNING: Removing unreachable block (ram,0x8c261244) */
/* WARNING: Removing unreachable block (ram,0x8c261264) */
/* WARNING: Removing unreachable block (ram,0x8c2612d0) */
/* WARNING: Removing unreachable block (ram,0x8c2612f6) */
/* WARNING: Removing unreachable block (ram,0x8c26124c) */
/* WARNING: Removing unreachable block (ram,0x8c2612cc) */
/* WARNING: Removing unreachable block (ram,0x8c261228) */
/* WARNING: Removing unreachable block (ram,0x8c2612bc) */
/* WARNING: Removing unreachable block (ram,0x8c261240) */
/* WARNING: Removing unreachable block (ram,0x8c2612e8) */
/* WARNING: Removing unreachable block (ram,0x8c2612d2) */
/* WARNING: Removing unreachable block (ram,0x8c26132e) */
/* WARNING: Removing unreachable block (ram,0x8c261340) */
/* WARNING: Removing unreachable block (ram,0x8c26123a) */
/* WARNING: Removing unreachable block (ram,0x8c2612e0) */
/* WARNING: Removing unreachable block (ram,0x8c261266) */
/* WARNING: Removing unreachable block (ram,0x8c26122c) */
/* WARNING: Removing unreachable block (ram,0x8c2612c2) */
/* WARNING: Removing unreachable block (ram,0x8c2612d6) */
/* WARNING: Removing unreachable block (ram,0x8c261262) */
/* WARNING: Removing unreachable block (ram,0x8c2612e2) */
/* WARNING: Removing unreachable block (ram,0x8c26127e) */
/* WARNING: Removing unreachable block (ram,0x8c2612de) */
/* WARNING: Unknown calling convention */

int FUN_8c261170(ushort *ar4,int ar5,undefined2 *ar6,short *ar7,undefined2 *s0,short *s4,
                undefined4 s8,undefined4 s12)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  fVar7 = (float)((int)*ar7 << 0x10);
  fVar8 = (float)((int)ar7[1] << 0x10);
  fVar9 = (float)((int)*s4 << 0x10);
  fVar10 = (float)((int)s4[1] << 0x10);
  iStack_30 = 0;
  iStack_28 = 1;
  iStack_2c = 0;
  fVar12 = (float)((int)(short)s8 << 4) / 65536.0;
  fVar13 = (float)((int)(short)s12 << 4) / 65536.0;
  while( true ) {
    if ((int)(ar5 + (uint)(ar5 < 0)) >> 1 <= iStack_30) {
      *ar7 = (short)((uint)(int)fVar7 >> 0x10);
      ar7[1] = (short)((uint)(int)fVar8 >> 0x10);
      *s4 = (short)((uint)(int)fVar9 >> 0x10);
      s4[1] = (short)((uint)(int)fVar10 >> 0x10);
      return ar5;
    }
    uVar3 = *ar4 >> 8 | *ar4 << 8;
    if (((int)(short)uVar3 & 0x8000U) != 0) break;
    iVar2 = 0;
    fVar11 = (float)(((int)(short)uVar3 & 0x1fffU) + 1);
    puVar1 = ar4 + 1;
    do {
      puVar6 = puVar1;
      iVar4 = (uint)(byte)*puVar6 * 4;
      fVar8 = fVar11 * *(float *)(&DAT_8c272730 + iVar4) + fVar12 * fVar7 + fVar13 * fVar8;
      *ar6 = (short)((uint)(int)fVar8 >> 0x10);
      fVar7 = fVar11 * *(float *)(&DAT_8c272b30 + iVar4) + fVar12 * fVar8 + fVar13 * fVar7;
      iVar2 = iVar2 + 2;
      ar6[1] = (short)((uint)(int)fVar7 >> 0x10);
      ar6 = ar6 + 2;
      puVar1 = (ushort *)((int)puVar6 + 1);
    } while (iVar2 < 0x20);
    uVar3 = *(ushort *)((int)puVar6 + 1);
    uVar5 = (uint)(short)(uVar3 >> 8 | uVar3 << 8);
    if ((uVar5 & 0x8000) != 0) {
      return iStack_28;
    }
    iVar2 = 0;
    ar4 = (ushort *)((int)puVar6 + 3);
    fVar11 = (float)((uVar5 & 0x1fff) + 1);
    do {
      uVar3 = *ar4;
      ar4 = (ushort *)((int)ar4 + 1);
      iVar4 = (uint)(byte)uVar3 * 4;
      fVar10 = fVar11 * *(float *)(&DAT_8c272730 + iVar4) + fVar12 * fVar9 + fVar13 * fVar10;
      *s0 = (short)((uint)(int)fVar10 >> 0x10);
      fVar9 = fVar11 * *(float *)(&DAT_8c272b30 + iVar4) + fVar12 * fVar10 + fVar13 * fVar9;
      iVar2 = iVar2 + 2;
      s0[1] = (short)((uint)(int)fVar9 >> 0x10);
      s0 = s0 + 2;
    } while (iVar2 < 0x20);
    iStack_30 = iStack_30 + 1;
    iStack_28 = iStack_28 + 2;
    iStack_2c = iStack_2c + 2;
  }
  return iStack_2c;
}



/* FUN_8c261370 @ 8c261370 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c261370(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int *unaff_r14;
  
  if (*unaff_r14 == 0) {
    in_r0 = (*(code *)PTR_memset_8c2614a0)(DAT_8c26149c,0,(int)DAT_8c261494,ar7);
  }
  *unaff_r14 = *unaff_r14 + 1;
  return in_r0;
}



/* FUN_8c2613aa @ 8c2613aa callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c2613aa(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int ar4_00;
  int ar5_00;
  int ar6_00;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  iVar2 = 0;
  do {
    if (*(char *)(iVar2 * 0x30 + -0x73b4c660) == '\0') break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  if (iVar2 == 8) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    ar6_00 = ar6;
    FUN_8c260ca0(8,ar5,ar6,ar7,ar5);
    iVar2 = iVar2 * 0x30;
    ar5_00 = 0;
    puVar1 = (undefined1 *)(iVar2 + -0x73b4c660);
    *(char *)(iVar2 + -0x73b4c65e) = (char)ar4;
    ar4_00 = 0;
    if (0 < ar4) {
      do {
        ar5_00 = ar5_00 + 1;
        *(undefined4 *)(iVar2 + -0x73b4c65c + ar4_00) = *(undefined4 *)(ar5 + ar4_00);
        *(undefined4 *)(iVar2 + -0x73b4c654 + ar4_00) = *(undefined4 *)(ar6 + ar4_00);
        *(undefined4 *)(iVar2 + -0x73b4c64c + ar4_00) = 0;
        ar4_00 = ar4_00 + 4;
      } while (ar5_00 < ar4);
    }
    *(undefined1 *)(iVar2 + -0x73b4c65f) = 0;
    *(undefined4 *)(iVar2 + -0x73b4c634) = 0;
    *(int *)(iVar2 + -0x73b4c644) = ar4;
    *(undefined4 *)(iVar2 + -0x73b4c640) = 0xac44;
    if (cVar3 == '\0') {
      *(undefined4 *)(iVar2 + -0x73b4c63c) = 0x3dcccccd;
      *(undefined4 *)(iVar2 + -0x73b4c638) = 0x3dcccccd;
    }
    else {
      *(undefined8 *)(iVar2 + -0x73b4c63c) = 0x8c260cc83dcccccd;
      *(undefined8 *)(iVar2 + -0x73b4c638) = 0x8c260cc83dcccccd;
    }
    *puVar1 = 1;
    FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar7,ar5);
  }
  return puVar1;
}



/* FUN_8c26145e @ 8c26145e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26145e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  if (ar4 != 0) {
    FUN_8c260ca0(ar4,ar5,ar6,ar7,ar4);
    ar5_00 = 0;
    ar6_00 = 0x30;
    uVar1 = memset(ar4,0,0x30,ar7);
    uVar1 = FUN_8c260cc8(ar4,ar5_00,ar6_00,ar7,uVar1);
    return uVar1;
  }
  return ain0;
}



/* FUN_8c2614d6 @ 8c2614d6 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c2614f6) */
/* WARNING: Removing unreachable block (ram,0x8c2614f2) */
/* WARNING: Removing unreachable block (ram,0x8c2614f4) */
/* WARNING: Removing unreachable block (ram,0x8c2614f8) */
/* WARNING: Unknown calling convention */

uint FUN_8c2614d6(int ar4,undefined4 ar5,int **ar6,int **ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short **a7;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int d;
  int iStack_3c;
  int *piStack_30;
  int iStack_2c;
  short *psStack_28;
  uint uStack_24;
  
  uVar1 = 0x24;
  d = (int)((float)*(int *)(ar4 + 0x20) * *(float *)(ar4 + 0x24));
  iVar11 = 0;
  do {
    if (*(int *)(ar4 + 0x1c) <= iVar11) {
      return uVar1;
    }
    iVar7 = iVar11 * 4;
    piVar9 = *(int **)(ar4 + 4 + iVar7);
    uVar1 = (**(code **)(*piVar9 + 0x24))(piVar9,1,ar6,ar7);
    uVar2 = libgcc_divide_helper_010468(uVar1 >> 1,d);
    piVar9 = *(int **)(ar4 + 0xc + iVar7);
    uVar1 = (**(code **)(*piVar9 + 0x24))(piVar9,0,ar6,ar7);
    uVar3 = uVar1 >> 4;
    if ((int)uVar2 < (int)uVar3) {
      uVar3 = uVar2;
    }
    for (iVar10 = 0; iVar10 < (int)uVar3; iVar10 = iVar10 + 1) {
      iStack_3c = 0;
      for (iVar8 = 0; iVar8 < d; iVar8 = iVar8 + uVar1) {
        piVar9 = *(int **)(ar4 + 4 + iVar7);
        a7 = &psStack_28;
        (**(code **)(*piVar9 + 0x18))(piVar9,1,(d - iVar8) * 2,a7);
        uVar1 = uStack_24 >> 1;
        iVar5 = 0;
        psVar6 = psStack_28;
        if (uVar1 != 0) {
          do {
            iVar4 = (int)*psVar6;
            if (iVar4 < 0) {
              iVar4 = -iVar4;
            }
            psVar6 = psVar6 + 1;
            if (iStack_3c < iVar4) {
              iStack_3c = iVar4;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)uVar1);
        }
        piVar9 = *(int **)(ar4 + 4 + iVar7);
        (**(code **)(*piVar9 + 0x20))(piVar9,0,&psStack_28,a7);
      }
      piVar9 = *(int **)(ar4 + 0xc + iVar7);
      ar7 = &piStack_30;
      (**(code **)(*piVar9 + 0x18))(piVar9,0,0x10,ar7);
      if (iStack_2c == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *piStack_30 = iStack_3c;
      piStack_30[1] = *(int *)(ar4 + 0x14 + iVar7);
      ar6 = &piStack_30;
      piStack_30[2] = *(int *)(ar4 + 0x20);
      piStack_30[3] = d;
      piVar9 = *(int **)(ar4 + 0xc + iVar7);
      uVar1 = (**(code **)(*piVar9 + 0x20))(piVar9,1,ar6,ar7);
      piVar9 = (int *)(ar4 + 0x14 + iVar7);
      *piVar9 = *piVar9 + d;
      *(int *)(ar4 + 0x2c) = *(int *)(ar4 + 0x2c) + 1;
    }
    iVar11 = iVar11 + 1;
  } while( true );
}



/* FUN_8c261640 @ 8c261640 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c261640(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(char *)(ar4 + 1) == 2) {
    uVar1 = FUN_8c2614d6(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return (int)*(char *)(ar4 + 1);
}



/* FUN_8c26165c @ 8c26165c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c26165c(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r13;
  char *pcVar2;
  
  pcVar2 = ar4 + unaff_r13;
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c261640(ar4,ar5,ar6,ar7);
    }
    ar4 = ar4 + 0x30;
  } while (ar4 < pcVar2);
  return iVar1;
}



/* FUN_8c261680 @ 8c261680 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c261680(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x20) = ar5;
  return in_r0;
}



/* FUN_8c2616a8 @ 8c2616a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2616a8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
                    /* WARNING: Could not recover jumptable at 0x8c2616ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(DAT_8c2616d0 | 0x8c2616d4))
                    ((short)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4));
  return uVar1;
}



/* FUN_8c26175c @ 8c26175c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c26175c(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint uVar2;
  
  (*(code *)PTR_FUN_8c2617bc)(ar4,ar5,ar6,ar7);
  puVar1 = DAT_8c2617c0;
  *DAT_8c2617c0 = ar4 & (int)DAT_8c2617b8 | (int)DAT_8c2617ba;
  uVar2 = *puVar1 & 0xfffffff7 | 8;
  *puVar1 = uVar2;
  return uVar2;
}



/* FUN_8c261786 @ 8c261786 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c261798 */
/* WARNING: Switch with 1 destination removed at 0x8c2617a8 */
/* WARNING: Switch with 1 destination removed at 0x8c2617e6 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c261786(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  byte in_IMASK;
  byte in_S;
  
  if (ar5 != 0) {
    uVar3 = DAT_8c2617c8 & ar4;
    if (DAT_8c2617cc <= ar5) {
                    /* WARNING: Could not recover jumptable at 0x8c26180e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(DAT_8c261814 | 0x8c261818))
                        ((short)((((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4));
      return uVar1;
    }
    uVar2 = (ar4 & 0x1f) + ar5 + 0x1f >> 5;
    do {
      CacheBlockInvalidate(uVar3);
      uVar2 = uVar2 - 1;
      uVar3 = uVar3 + 0x20;
    } while (uVar2 != 0);
  }
  return in_r0;
}



/* FUN_8c2619b4 @ 8c2619b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c2619b4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = PTR_memset_8c261a30;
  (*(code *)PTR_memset_8c261a30)(DAT_8c261a34,0,(int)DAT_8c261a26,ar7);
  (*(code *)puVar1)(DAT_8c261a38,0,(int)DAT_8c261a28,ar7);
  (*(code *)puVar1)(DAT_8c261a3c,(int)DAT_8c261a2c,(int)DAT_8c261a2a,ar7);
  (*(code *)puVar1)(DAT_8c261a40,0,0x20,ar7);
  puVar2 = DAT_8c261a48;
  *DAT_8c261a44 = 0;
  *puVar2 = 0;
  return puVar2;
}



/* FUN_8c2619ee @ 8c2619ee callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2619ee(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = DAT_8c261a44;
  uVar3 = DAT_8c261a40;
  puVar1 = PTR_memset_8c261a30;
  *DAT_8c261a48 = 0;
  *puVar2 = 0;
  (*(code *)puVar1)(uVar3,0,0x20);
  (*(code *)puVar1)(DAT_8c261a3c,(int)DAT_8c261a2c,(int)DAT_8c261a2a);
  (*(code *)puVar1)(DAT_8c261a38,0,(int)DAT_8c261a28);
  uVar3 = (*(code *)puVar1)(DAT_8c261a34,0,(int)DAT_8c261a26);
  return uVar3;
}



/* FUN_8c2619f8 @ 8c2619f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2619f8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *in_r0;
  undefined4 uVar2;
  undefined4 *in_r2;
  undefined4 in_r3;
  
  uVar2 = DAT_8c261a40;
  puVar1 = PTR_memset_8c261a30;
  *in_r2 = in_r3;
  *in_r0 = in_r3;
  (*(code *)puVar1)(uVar2,ar5,0x20,ar7);
  (*(code *)puVar1)(DAT_8c261a3c,(int)DAT_8c261a2c,(int)DAT_8c261a2a,ar7);
  (*(code *)puVar1)(DAT_8c261a38,0,(int)DAT_8c261a28,ar7);
  uVar2 = (*(code *)puVar1)(DAT_8c261a34,0,(int)DAT_8c261a26,ar7);
  return uVar2;
}



/* FUN_8c261a4c @ 8c261a4c callers=6 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c261a4c(int ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  puVar1 = DAT_8c261b30;
  uVar4 = *DAT_8c261b30;
  if ((int)uVar4 < 0) {
    uVar4 = ~(~uVar4 + 1 & (int)DAT_8c261b2a) + 1;
  }
  else {
    uVar4 = uVar4 & (int)DAT_8c261b2a;
  }
  *DAT_8c261b30 = uVar4;
  iVar3 = ar4 * 2;
  puVar5 = (undefined1 *)(uVar4 * 0x10 + DAT_8c261b34);
  if (ar5 == 0) {
    *(short *)(DAT_8c261b38 + iVar3) = *(short *)(DAT_8c261b38 + iVar3) + 1;
  }
  *puVar5 = (char)ar4;
  puVar5[1] = (char)ar5;
  iVar2 = DAT_8c261b38;
  *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(DAT_8c261b38 + iVar3);
  *(undefined4 *)(puVar5 + 4) = ar6;
  *(undefined4 *)(puVar5 + 8) = ar7;
  *(undefined4 *)(puVar5 + 0xc) = s0;
  *puVar1 = *puVar1 + 1;
  return iVar2;
}



/* FUN_8c261aa8 @ 8c261aa8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c261aa8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  iVar1 = DAT_8c261b3c;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return in_r0;
}



/* s_E9040801_ptid_is_range_outsi_261ab2 @ 8c261ab2 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E9040801_ptid_is_range_outsi_261ab2(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  char *s0;
  
  if ((ar4 < 0) || (0xff < ar4)) {
    s0 = s_E9040801__ptid__is_range_outside_8c27207c;
  }
  else {
    if (ar5 != 0) {
      return 0;
    }
    s0 = s_E9040802__ptinfo__is_NULL__adxf__8c2720b0;
  }
  FUN_8c25ece6(ar4,ar5,ar6,ar7,s0,in_PR);
  return 0xfffffffd;
}



/* FUN_8c261ae2 @ 8c261ae2 callers=2 callees=5 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c261ae2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  undefined4 uVar2;
  undefined4 a5;
  int iVar3;
  
  iVar3 = 0;
  do {
    a5 = ar5;
    uVar2 = ar6;
    ar5 = a5;
    a4 = s_E9040816_adxf_is_NULL_ADXF_R_26231a(ar4,a5,ar6,ar7);
    if (0 < a4) break;
    FUN_8c1f39f0(a4,a5,uVar2,ar7);
    FUN_8c26371e(a4,a5,uVar2,ar7);
    FUN_8c262524(a4,a5,uVar2,ar7);
    FUN_8c261aa8(a4,a5,uVar2,ar7,ar5);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10000);
  if (iVar3 == 10000) {
    return 0;
  }
  iVar3 = 0;
  do {
    FUN_8c1f39f0(a4,a5,uVar2,ar7);
    FUN_8c26371e(a4,a5,uVar2,ar7);
    FUN_8c262524(a4,a5,uVar2,ar7);
    a4 = ar4;
    iVar1 = s_E9040832_adxf_is_NULL_ADXF_G_2626b4(ar4,a5,uVar2,ar7);
    if (iVar1 == 3) break;
    FUN_8c261aa8(a4,a5,uVar2,ar7,ar5);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10000);
  uVar2 = s_E9040831_adxf_is_NULL_ADXF_G_262696(ar4,a5,uVar2,ar7);
  return uVar2;
}



/* s_E9040804_can_t_open_s_ADXF_L_261ba4 @ 8c261b96 callers=0 callees=4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int s_E9040804_can_t_open_s_ADXF_L_261ba4(int ar4,undefined4 ar5,undefined4 *ar6,int ar7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *s0;
  undefined2 *extraout_r2;
  undefined2 *extraout_r2_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *ar5_00;
  undefined4 uVar7;
  int iVar8;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  int iStack_24;
  
  puVar5 = ar6;
  iStack_30 = ar7;
  iVar2 = s_E9040801_ptid_is_range_outsi_261ab2(ar4,ar6,ar6,ar7);
  if (-1 < iVar2) {
    puVar6 = &uStack_3c;
    uVar7 = ar5;
    iVar2 = FUN_8c2637ca(ar5,puVar6,puVar5,ar7);
    if (iVar2 < 0) {
      s0 = s_E9040803_can_t_get_FAD_of___s____8c2720dc;
    }
    else {
      puVar6 = &uStack_2c;
      uVar7 = ar5;
      puStack_34 = (undefined4 *)FUN_8c26201c(ar5,puVar6,puVar5,ar7);
      if (puStack_34 != (undefined4 *)0x0) {
        ar5_00 = (int *)0x0;
        iVar8 = -1;
        uVar7 = 0x18;
        puVar5 = ar6;
        memset(ar6,0,0x18,ar7);
        *(undefined4 **)(ar4 * 4 + -0x73b4c1e0) = ar6;
        iVar2 = 0;
        *ar6 = 0;
        ar6[2] = uStack_3c;
        puStack_38 = ar6 + 5;
        *(undefined1 *)((int)ar6 + 0x12) = 0;
        iStack_24 = (int)ar6 + 0x16;
        iStack_40 = 0;
        ar6[3] = 0;
        puStack_28 = (undefined4 *)&DAT_8c4b5268;
LAB_8c261d02:
        do {
          puVar6 = (undefined4 *)0x3;
          if (2 < iVar2) {
            puVar6 = puVar5;
            if (iVar2 == 3) {
              FUN_8c25ece6(puVar5,ar5_00,uVar7,ar7,s_E9040805_read_error__s___ADXF_Lo_8c272144,ar5);
              puVar6 = puVar5;
            }
LAB_8c261d1a:
            if (iVar8 == -4) {
              FUN_8c25ece6(puVar6,ar5_00,uVar7,ar7,s_E9040806___s__is_broken__ADXF_Lo_8c272174,ar5);
            }
            FUN_8c262168(puStack_34,ar5_00,uVar7,ar7);
            return iVar8;
          }
          ar5_00 = (int *)0x1;
          puVar5 = puStack_34;
          uVar7 = 0x8c4b5260;
          iVar3 = FUN_8c261ae2(puStack_34,1,0x8c4b5260,ar7);
          if (0 < iVar3) {
            uVar7 = 0x800;
            if (ar6[3] == 0) {
              if (0x10000 < _DAT_8c4b5264) {
                _DAT_8c4b5264 = 0x10000;
                puVar6 = (undefined4 *)0xfffffffc;
                iVar8 = -4;
                goto LAB_8c261d1a;
              }
              if (iStack_30 < _DAT_8c4b5264) {
                uVar1 = (ushort)iStack_30;
              }
              else {
                uVar1 = (ushort)_DAT_8c4b5264;
              }
              *(ushort *)(ar6 + 4) = uVar1;
              ar6[3] = (uint)uVar1;
              ar6[1] = (uVar1 + 1) * 2 + 0x16 & 0xfffffffc;
              uVar4 = libgcc_divide_helper_010468(*puStack_28,0x800);
              *extraout_r2 = (short)uVar4;
            }
            else {
              puVar6 = (undefined4 *)0x1;
            }
            ar7 = 0x200;
            ar5_00 = (int *)((int)puVar6 * 4 + -0x73b4ada0);
            if (puVar6 < (undefined4 *)0x200) {
              do {
                iStack_40 = iStack_40 + 1;
                uVar4 = libgcc_divide_helper_010468(*ar5_00 + 0x7ff,uVar7);
                *extraout_r2_00 = (short)uVar4;
                if ((int)ar6[3] <= iStack_40) {
                  iVar8 = 0;
                  goto LAB_8c261d1a;
                }
                puVar6 = (undefined4 *)((int)puVar6 + 2);
                ar5_00 = ar5_00 + 2;
              } while ((int)puVar6 < ar7);
            }
            iVar2 = 0;
            puVar5 = puVar6;
            goto LAB_8c261d02;
          }
          iVar2 = iVar2 + 1;
        } while( true );
      }
      s0 = s_E9040804_can_t_open___s___ADXF_L_8c272114;
      puStack_34 = (undefined4 *)0x0;
    }
    FUN_8c25ece6(uVar7,puVar6,puVar5,ar7,s0,ar5);
    iVar2 = -1;
  }
  return iVar2;
}



/* s_E9040807_can_t_find_s_ADXF_A_261d54 @ 8c261d46 callers=0 callees=4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int s_E9040807_can_t_find_s_ADXF_A_261d54(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *s0;
  int *piVar4;
  uint ar4_00;
  int *ar5_00;
  int *ar6_00;
  int iVar5;
  int iVar6;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  
  ar6_00 = ar6;
  iStack_30 = ar7;
  iVar1 = s_E9040801_ptid_is_range_outsi_261ab2(ar4,ar6,ar6,ar7);
  if (-1 < iVar1) {
    ar5_00 = &iStack_38;
    uVar3 = ar5;
    iVar1 = FUN_8c2637ca(ar5,ar5_00,ar6_00,ar7);
    if (iVar1 < 0) {
      s0 = s_E9040807_can_t_find___s___ADXF_A_8c2721a4;
    }
    else {
      ar5_00 = &iStack_28;
      uVar3 = ar5;
      iStack_34 = FUN_8c26201c(ar5,ar5_00,ar6_00,ar7);
      if (iStack_34 != 0) {
        iVar6 = -1;
        piVar4 = (int *)(ar4 * 4 + -0x73b4c1e0);
        *ar6 = *piVar4;
        *piVar4 = (int)ar6;
        iVar5 = 0;
        iVar1 = 0;
        ar6[2] = iStack_38;
        *(undefined1 *)((int)ar6 + 0x12) = 1;
        piStack_24 = ar6 + 5;
        iStack_2c = 0;
        ar6[3] = 0;
LAB_8c261ebe:
        do {
          ar4_00 = 3;
          if (2 < iVar1) {
            if (iVar1 == 3) {
              FUN_8c25ece6(3,ar5_00,ar6_00,ar7,s_E9040809_read_error__s___ADXF_Lo_8c272204,ar5);
            }
LAB_8c261ed6:
            if (iVar6 == -4) {
              FUN_8c25ece6(ar4_00,ar5_00,ar6_00,ar7,s_E9040810___s__is_broken__ADXF_Lo_8c272234,ar5)
              ;
            }
            *(undefined2 *)(ar6 + 4) = (undefined2)iStack_2c;
            ar6[1] = (uint)*(ushort *)(ar6 + 4) * 8 + *(int *)(*ar6 + 4) + 0x14;
            FUN_8c262168(iStack_34,ar5_00,ar6_00,ar7);
            return iVar6;
          }
          ar5_00 = (int *)0x1;
          ar6_00 = (int *)0x8c4b72e0;
          iVar2 = FUN_8c261ae2(iStack_34,1,0x8c4b72e0,ar7);
          if (0 < iVar2) {
            ar4_00 = 0;
            if (ar6[3] == 0) {
              if (0x10000 < _DAT_8c4b72e4) {
                _DAT_8c4b72e4 = 0x10000;
                ar4_00 = 0xfffffffc;
                iVar6 = -4;
                goto LAB_8c261ed6;
              }
              iVar1 = _DAT_8c4b72e4;
              if (iStack_30 < _DAT_8c4b72e4) {
                iVar1 = iStack_30;
              }
              ar6[3] = iVar1;
              ar4_00 = 2;
            }
            ar5_00 = (int *)0x200;
            if (ar4_00 < 0x200) {
              do {
                if (*(int *)(ar4_00 * 4 + -0x73b48d20) == 0) {
                  ar4_00 = ar4_00 + 2;
                }
                else {
                  ar7 = 0x7ff;
                  ar5_00 = piStack_24 + iStack_2c * 2;
                  *(short *)ar5_00 = (short)iVar5;
                  ar6_00 = (int *)0x800;
                  iVar2 = ar4_00 + 1;
                  iStack_2c = iStack_2c + 1;
                  iVar1 = libgcc_divide_helper_010468
                                    (*(int *)(ar4_00 * 4 + -0x73b48d20) + 0x7ff,0x800);
                  ar5_00[1] = iVar1;
                  ar4_00 = iVar2 + 1;
                  uVar3 = libgcc_divide_helper_010468
                                    (*(int *)(iVar2 * 4 + -0x73b48d20) + ar7,ar6_00);
                  *(short *)((int)ar5_00 + 2) = (short)uVar3;
                }
                iVar5 = iVar5 + 1;
                if (ar6[3] <= iVar5) {
                  iVar6 = 0;
                  goto LAB_8c261ed6;
                }
              } while ((int)ar4_00 < 0x200);
            }
            iVar1 = 0;
            goto LAB_8c261ebe;
          }
          iVar1 = iVar1 + 1;
        } while( true );
      }
      s0 = s_E9040808_cannot_open___s___ADXF__8c2721d4;
      iStack_34 = 0;
    }
    FUN_8c25ece6(uVar3,ar5_00,ar6_00,ar7,s0,ar5);
    iVar1 = -1;
  }
  return iVar1;
}



/* FUN_8c261f22 @ 8c261f22 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

char * FUN_8c261f22(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = DAT_8c261fd0;
  for (pcVar1 = DAT_8c261fd0;
      (pcVar3 = (char *)0x0, pcVar1 < DAT_8c261fd0 + DAT_8c261fbe &&
      (pcVar3 = pcVar2, *pcVar1 != '\0')); pcVar1 = pcVar1 + 0x30) {
    pcVar2 = pcVar2 + 0x30;
  }
  return pcVar3;
}



/* FUN_8c261f48 @ 8c261f48 callers=2 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c261f48(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_8c261f22(ar4,ar5,ar6,ar7);
  if (puVar1 == (undefined1 *)0x0) {
    return 0;
  }
  puVar1[1] = 1;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x24) = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *puVar1 = 1;
  return puVar1;
}



/* s_E9040901_can_t_find_s_ADXF_O_261f82 @ 8c261f7a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int s_E9040901_can_t_find_s_ADXF_O_261f82(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 a4;
  undefined4 *ar5_00;
  undefined4 *a5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 auStack_18 [2];
  
  a5 = &uStack_20;
  ar5_00 = auStack_18;
  a4 = ar5;
  iVar2 = (*(code *)PTR_FUN_8c261fd4)(ar5,ar5_00,ar6,ar7);
  puVar1 = PTR_FUN_8c261fc4;
  if (-1 < iVar2) {
    ar5_00 = &uStack_1c;
    a4 = ar5;
    iVar2 = (*(code *)PTR_FUN_8c261fdc)(ar5,ar5_00,ar6,ar7);
    if (-1 < iVar2) {
      iVar2 = (*(code *)PTR_FUN_8c2621b8)(ar5,&uStack_20,ar6,ar7);
      if (iVar2 < 0) {
        (*(code *)puVar1)(ar5,a5,ar6,ar7);
        return iVar2;
      }
      *(undefined4 *)(ar4 + 0xc) = auStack_18[0];
      *(undefined4 *)(ar4 + 0x10) = uStack_1c;
      *(undefined4 *)(ar4 + 0x14) = uStack_20;
      return 0;
    }
  }
  (*(code *)puVar1)(a4,ar5_00,ar6,ar7);
  return iVar2;
}



/* FUN_8c26201c @ 8c26201c callers=2 callees=4 */

/* WARNING: Unknown calling convention */

int FUN_8c26201c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar1;
  undefined4 ain0;
  
  ar5_00 = 0;
  ar4_00 = 1;
  ar6_00 = ar4;
  ain0 = ar5;
  FUN_8c261a4c(1,0,ar4,ar5);
  FUN_8c260ca0(ar4_00,ar5_00,ar6_00,ar5,ain0);
  a4 = FUN_8c261f48(ar4_00,ar5_00,ar6_00,ar5);
  iVar1 = a4;
  if ((a4 != 0) &&
     (ar5_00 = ar4, ar4_00 = s_E9040901_can_t_find_s_ADXF_O_261f82(a4,ar4,ar6_00,ar5), ar4_00 < 0))
  {
    FUN_8c262168(a4,ar5_00,ar6_00,ar5);
    iVar1 = 0;
    ar4_00 = a4;
  }
  FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar5,ain0);
  FUN_8c261a4c(1,1,ar4,ain0);
  return iVar1;
}



/* FUN_8c262078 @ 8c262078 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262078(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = ar5;
  uStack_c = ar6;
  iVar1 = FUN_8c26270c(ar5,ar6,&uStack_14,&iStack_18);
  if (iVar1 < 0) {
    return 0xfffffffd;
  }
  *(undefined4 *)(ar4 + 0xc) = uStack_14;
  *(int *)(ar4 + 0x10) = iStack_18;
  *(int *)(ar4 + 0x14) = iStack_18 << 0xb;
  return 0;
}



/* FUN_8c2620c8 @ 8c2620c8 callers=0 callees=4 */

/* WARNING: Unknown calling convention */

int FUN_8c2620c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int iVar1;
  undefined4 in_PR;
  
  ar5_00 = 0;
  ar4_00 = 2;
  ar6_00 = unaff_r12;
  ar7_00 = unaff_r13;
  FUN_8c261a4c(2,0,unaff_r12,unaff_r13);
  FUN_8c260ca0(ar4_00,ar5_00,ar6_00,ar7_00,in_PR);
  a4 = FUN_8c261f48(ar4_00,ar5_00,ar6_00,ar7_00);
  iVar1 = a4;
  if ((a4 != 0) &&
     (ar5_00 = unaff_r12, ar6_00 = unaff_r13, ar4_00 = FUN_8c262078(a4,unaff_r12,unaff_r13,ar7_00),
     ar4_00 < 0)) {
    FUN_8c262168(a4,ar5_00,ar6_00,ar7_00);
    iVar1 = 0;
    ar4_00 = a4;
  }
  FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar7_00,in_PR);
  FUN_8c261a4c(2,1,unaff_r12,unaff_r13);
  return iVar1;
}



/* FUN_8c26211c @ 8c26211c callers=2 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c26211c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  undefined4 in_stack_fffffff4;
  
  if (*(int *)(ar4 + 4) != 0) {
    ain0 = FUN_8c263446(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7,in_stack_fffffff4);
    *(undefined4 *)(ar4 + 4) = 0;
  }
  if ((*(int *)(ar4 + 8) != 0) && (ain0 = (int)*(char *)(ar4 + 2), ain0 == 0)) {
    if (_DAT_8c4b4220 == 1) {
      ar5 = *(undefined4 *)(ar4 + 0x2c);
      FUN_8c261786(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7,in_stack_fffffff4);
    }
    ain0 = (**(code **)(**(int **)(ar4 + 8) + 0xc))(*(int **)(ar4 + 8),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 8) = 0;
  }
  return ain0;
}



/* FUN_8c262168 @ 8c262168 callers=5 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262168(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int ar6_00;
  undefined4 ar7_00;
  
  ar5_00 = 0;
  ar7_00 = 0xffffffff;
  ar6_00 = ar4;
  uVar1 = FUN_8c261a4c(3,0,ar4,0xffffffff,0xffffffff);
  if (ar4 != 0) {
    (*(code *)PTR_FUN_8c2621c0)();
    if (*(char *)(ar4 + 1) == '\x02') {
      s_E9040822_adxf_is_NULL_ADXF_S_262408(ar4,ar5_00,ar6_00,ar7_00);
    }
    (*(code *)PTR_memset_8c2621d4)(ar4,0,0x30);
    (*(code *)PTR_FUN_8c2621c4)();
    uVar1 = FUN_8c261a4c(3,1,ar4,0xffffffff,0xffffffff);
  }
  return uVar1;
}



/* FUN_8c26216c @ 8c26216c callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26216c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined4 in_PR;
  
  ar5_00 = 0;
  uVar2 = 3;
  iVar3 = ar4;
  uVar1 = FUN_8c261a4c(3,0,ar4,in_r3);
  if (ar4 != 0) {
    FUN_8c260ca0(uVar2,ar5_00,iVar3,in_r3,in_PR);
    if (*(char *)(ar4 + 1) == '\x02') {
      s_E9040822_adxf_is_NULL_ADXF_S_262408(ar4,ar5_00,iVar3,in_r3);
    }
    uVar1 = 0;
    uVar2 = 0x30;
    iVar3 = ar4;
    memset(ar4,0,0x30,in_r3);
    FUN_8c260cc8(iVar3,uVar1,uVar2,in_r3,in_PR);
    uVar1 = FUN_8c261a4c(3,1,ar4,0xffffffff);
  }
  return uVar1;
}



/* FUN_8c2621e2 @ 8c2621e2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c2621e2(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  char *pcVar2;
  char *a4;
  char *pcVar3;
  
  pcVar2 = ar5 + unaff_r12;
  a4 = ar5;
  pcVar3 = ar5;
  do {
    iVar1 = (int)*pcVar3;
    if (iVar1 == 1) {
      iVar1 = FUN_8c262168(a4,ar5,ar6,ar7);
    }
    pcVar3 = pcVar3 + 0x30;
    a4 = a4 + 0x30;
  } while (pcVar3 < pcVar2);
  return iVar1;
}



/* s_E9040811_adxf_is_NULL_adxf_r_26220e @ 8c262208 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E9040811_adxf_is_NULL_adxf_r_26220e(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 ar4_00;
  undefined4 ar5_00;
  undefined4 uVar3;
  
  if ((ar4 == 0) || (ar5 < 0)) {
    FUN_8c25ece6(ar4,ar5,ar6,ar7);
  }
  else {
    if (ar6 != 0) {
      if (*(char *)(ar4 + 1) == '\x02') {
        return 0;
      }
      if (*(int *)(ar4 + 4) != 0) {
        FUN_8c25ece6(ar4,ar5,ar6,ar7);
        return 0xffffffff;
      }
      FUN_8c260ca0(ar4,ar5,ar6,ar7,ar6);
      *(int *)(ar4 + 0x1c) = *(int *)(ar4 + 0xc) + *(int *)(ar4 + 0x18);
      iVar2 = *(int *)(ar4 + 0x10) - *(int *)(ar4 + 0x18);
      if (ar5 < iVar2) {
        iVar2 = ar5;
      }
      *(int *)(ar4 + 0x20) = iVar2;
      *(undefined4 *)(ar4 + 0x24) = 0;
      ar5_00 = *(undefined4 *)(ar4 + 0x20);
      iVar2 = ar6;
      iVar1 = s_E8101212_can_t_open_fad_d_ns_26338a(*(undefined4 *)(ar4 + 0x1c),ar5_00,ar6,ar7);
      if (iVar1 == 0) {
        uVar3 = 0xffffffff;
        ar4_00 = 0;
      }
      else {
        *(int *)(ar4 + 4) = iVar1;
        *(undefined1 *)(ar4 + 1) = 2;
        ar4_00 = *(undefined4 *)(ar4 + 4);
        FUN_8c26346e(ar4_00,ar5_00,ar6,ar7);
        uVar3 = *(undefined4 *)(ar4 + 0x20);
      }
      FUN_8c260cc8(ar4_00,ar5_00,ar6,ar7,iVar2);
      return uVar3;
    }
    FUN_8c25ece6(ar4,ar5,0,ar7);
  }
  return 0xfffffffd;
}



/* FUN_8c2622e4 @ 8c2622e4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2622e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ain0;
  int ar4_00;
  
  FUN_8c260ca0(ar4,ar5,ar6,ar7,ar6);
  ar4_00 = ar4;
  ain0 = s_E9040811_adxf_is_NULL_adxf_r_26220e(ar4,ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 2) = 1;
  FUN_8c260cc8(ar4_00,ar5,ar6,ar7,ain0);
  return ain0;
}



/* s_E9040816_adxf_is_NULL_ADXF_R_26231a @ 8c262312 callers=1 callees=2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_E9040816_adxf_is_NULL_ADXF_R_26231a(int *ar4,int ar5,uint ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  uint ar4_00;
  int *ar4_01;
  undefined4 a5;
  int iVar3;
  int iVar4;
  int *a6;
  int ar7_00;
  
  a5 = 0;
  uVar2 = 4;
  piVar1 = ar4;
  ar7_00 = ar5;
  FUN_8c261a4c(4,0,ar4,ar5);
  if ((ar4 == (int *)0x0) || (ar5 < 0)) {
    FUN_8c25ece6(uVar2,a5,piVar1,ar7_00);
  }
  else if (ar6 == 0) {
    FUN_8c25ece6(uVar2,a5,piVar1,ar7_00);
  }
  else {
    if ((ar6 & 0x1f) == 0) {
      if (*(char *)((int)ar4 + 1) == '\x02') {
        return 0;
      }
      if (ar4[2] != 0) {
        FUN_8c25ece6(ar6,a5,piVar1,ar7_00);
        return 0xffffffff;
      }
      iVar3 = ar5 << 0xb;
      uVar2 = 0;
      ar4_00 = ar6;
      iVar4 = iVar3;
      piVar1 = (int *)FUN_8c26b564(ar6,iVar3,0,ar7_00);
      if (piVar1 == (int *)0x0) {
        return 0xfffffffe;
      }
      ar4[10] = ar6;
      ar4[0xb] = iVar4;
      if (_DAT_8c4b4220 == 1) {
        iVar3 = ar4[0xb];
        ar4_00 = ar4[10];
        FUN_8c261786(ar4_00,iVar3,uVar2,ar7_00,iVar4);
      }
      FUN_8c260ca0(ar4_00,iVar3,uVar2,ar7_00,iVar4);
      ar4_01 = ar4;
      iVar4 = ar5;
      a6 = piVar1;
      iVar3 = s_E9040811_adxf_is_NULL_adxf_r_26220e(ar4,ar5,piVar1,ar7_00);
      if (iVar3 < 1) {
        (**(code **)(*piVar1 + 0xc))(piVar1,iVar4,a6,ar7_00);
        ar4_01 = piVar1;
      }
      else {
        ar4[2] = (int)piVar1;
      }
      *(undefined1 *)((int)ar4 + 2) = 0;
      FUN_8c260cc8(ar4_01,iVar4,a6,ar7_00,iVar3);
      FUN_8c261a4c(4,1,ar4,ar5);
      return iVar3;
    }
    FUN_8c25ece6(ar6,a5,piVar1,ar7_00);
  }
  return 0xfffffffd;
}



/* s_E9040822_adxf_is_NULL_ADXF_S_262408 @ 8c262406 callers=2 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_E9040822_adxf_is_NULL_ADXF_S_262408(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int ar4_01;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  
  ar5_01 = &stack0xfffffff4;
  ar5_00 = 0;
  ar7_00 = 0xffffffff;
  ar4_00 = 5;
  ar6_00 = ar4;
  FUN_8c261a4c(5,0,ar4,0xffffffff);
  if (ar4 == 0) {
    FUN_8c25ece6(ar4_00,ar5_00,ar6_00,ar7_00,"E9040822:\'adxf\' is NULL.(ADXF_Stop)\n",
                 in_stack_fffffff4);
    return 0xfffffffd;
  }
  if (*(char *)(ar4 + 1) != '\x01') {
    if (*(char *)(ar4 + 1) == '\x03') {
      *(undefined1 *)(ar4 + 1) = 1;
    }
    else {
      if (*(int *)(ar4 + 4) == 0) {
        FUN_8c25ece6(ar4_00,ar5_00,ar6_00,ar7_00,"E9040823:\'adxf->stm\' is NULL.(ADXF_Stop)\n",
                     in_stack_fffffff4);
        return 0xffffffff;
      }
      FUN_8c260ca0(ar4_00,ar5_00,ar6_00,ar7_00,in_stack_fffffff4);
      FUN_8c263498(*(undefined4 *)(ar4 + 4),ar5_00,ar6_00,ar7_00);
      FUN_8c263768(*(undefined4 *)(ar4 + 4),&stack0xfffffff4,ar6_00,ar7_00);
      *(undefined4 *)(ar4 + 0x24) = in_stack_fffffff4;
      ar4_01 = ar4;
      FUN_8c26211c(ar4,ar5_01,ar6_00,ar7_00,in_stack_fffffff4);
      *(undefined1 *)(ar4 + 1) = 1;
      FUN_8c260cc8(ar4_01,ar5_01,ar6_00,ar7_00,in_stack_fffffff4);
      FUN_8c261a4c(5,1,ar4,0xffffffff);
    }
  }
  return *(undefined4 *)(ar4 + 0x18);
}



/* FUN_8c2624a0 @ 8c2624a0 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c2624a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined4 in_stack_fffffff4;
  
  ar5_00 = &stack0xfffffff4;
  iVar1 = (int)*(char *)(ar4 + 1);
  if (iVar1 == 2) {
    uVar2 = FUN_8c263746(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
    *(char *)(ar4 + 1) = (char)uVar2;
    FUN_8c263768(*(undefined4 *)(ar4 + 4),&stack0xfffffff4,ar6,ar7);
    *(undefined4 *)(ar4 + 0x24) = in_stack_fffffff4;
    iVar1 = (int)*(char *)(ar4 + 1);
    if ((iVar1 == 3) || (iVar1 == 4)) {
      *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + *(int *)(ar4 + 0x24);
      iVar1 = FUN_8c26211c(ar4,ar5_00,ar6,ar7,in_stack_fffffff4);
    }
  }
  return iVar1;
}



/* FUN_8c262524 @ 8c262524 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262524(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ain0;
  undefined4 uVar1;
  char *ar4_00;
  char *a4;
  undefined4 in_PR;
  
  FUN_8c260ca0(ar4,ar5,ar6,ar7,in_PR);
  a4 = &DAT_8c4b3b20;
  do {
    ain0 = (int)*a4;
    ar4_00 = a4;
    if (ain0 == 1) {
      ain0 = FUN_8c2624a0(a4,ar5,ar6,ar7);
    }
    a4 = a4 + 0x30;
  } while (a4 < (char *)0x8c4b3e20);
  uVar1 = FUN_8c260cc8(ar4_00,ar5,ar6,ar7,ain0);
  return uVar1;
}



/* FUN_8c262554 @ 8c262554 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262554(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 uVar1;
  int ar6_00;
  int ar7_00;
  undefined4 in_PR;
  
  uVar1 = 0;
  ar4_00 = 6;
  ar6_00 = ar4;
  ar7_00 = ar5;
  FUN_8c261a4c(6,0,ar4,ar5,ar6);
  if (ar4 == 0) {
    FUN_8c25ece6(ar4_00,uVar1,ar6_00,ar7_00,s_E9040825__adxf__is_NULL__ADXF_Se_8c2724ec,in_PR);
LAB_8c2625b4:
    uVar1 = 0xfffffffd;
  }
  else {
    if (*(char *)(ar4 + 1) == '\x02') {
      ar4_00 = ar4;
      s_E9040822_adxf_is_NULL_ADXF_S_262408(ar4,uVar1,ar6_00,ar7_00);
    }
    if (ar6 == 0) {
      *(int *)(ar4 + 0x18) = ar5;
    }
    else if (ar6 == 1) {
      *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + ar5;
    }
    else {
      if (ar6 != 2) {
        FUN_8c25ece6(ar4_00,uVar1,ar6_00,ar7_00,s_E9040826__type__is_illigal__ADXF_8c272514,in_PR);
        goto LAB_8c2625b4;
      }
      *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x10) + ar5;
    }
    if (*(int *)(ar4 + 0x18) < 0) {
      *(undefined4 *)(ar4 + 0x18) = 0;
    }
    else if (*(int *)(ar4 + 0x10) < *(int *)(ar4 + 0x18)) {
      *(undefined4 *)(ar4 + 0x18) = *(undefined4 *)(ar4 + 0x10);
    }
    FUN_8c261a4c(6,1,ar4,ar5,ar6);
    uVar1 = *(undefined4 *)(ar4 + 0x18);
  }
  return uVar1;
}



/* s_E9040825_adxf_is_NULL_ADXF_S_262560 @ 8c262560 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_E9040825_adxf_is_NULL_ADXF_S_262560(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 uVar1;
  int a6;
  int a7;
  int unaff_r12;
  int unaff_r13;
  int unaff_r14;
  undefined4 in_PR;
  
  uVar1 = 0;
  ar4_00 = 6;
  a6 = unaff_r14;
  a7 = unaff_r12;
  FUN_8c261a4c(6,0,unaff_r14,unaff_r12);
  if (unaff_r14 == 0) {
    FUN_8c25ece6(ar4_00,uVar1,a6,a7,s_E9040825__adxf__is_NULL__ADXF_Se_8c2724ec,in_PR);
LAB_8c2625b4:
    uVar1 = 0xfffffffd;
  }
  else {
    if (*(char *)(unaff_r14 + 1) == '\x02') {
      ar4_00 = unaff_r14;
      s_E9040822_adxf_is_NULL_ADXF_S_262408(unaff_r14,uVar1,a6,a7);
    }
    if (unaff_r13 == 0) {
      *(int *)(unaff_r14 + 0x18) = unaff_r12;
    }
    else if (unaff_r13 == 1) {
      *(int *)(unaff_r14 + 0x18) = *(int *)(unaff_r14 + 0x18) + unaff_r12;
    }
    else {
      if (unaff_r13 != 2) {
        FUN_8c25ece6(ar4_00,uVar1,a6,a7,s_E9040826__type__is_illigal__ADXF_8c272514,in_PR);
        goto LAB_8c2625b4;
      }
      *(int *)(unaff_r14 + 0x18) = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    }
    if (*(int *)(unaff_r14 + 0x18) < 0) {
      *(undefined4 *)(unaff_r14 + 0x18) = 0;
    }
    else if (*(int *)(unaff_r14 + 0x10) < *(int *)(unaff_r14 + 0x18)) {
      *(undefined4 *)(unaff_r14 + 0x18) = *(undefined4 *)(unaff_r14 + 0x10);
    }
    FUN_8c261a4c(6,1,unaff_r14,unaff_r12);
    uVar1 = *(undefined4 *)(unaff_r14 + 0x18);
  }
  return uVar1;
}



/* s_E9040827_adxf_is_NULL_ADXF_T_2625ec @ 8c2625ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E9040827_adxf_is_NULL_ADXF_T_2625ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040827__adxf__is_NULL__ADXF_Te_8c27253c,in_PR);
    return 0xfffffffd;
  }
  return *(undefined4 *)(ar4 + 0x18);
}



/* s_E9040828_adxf_is_NULL_ADXF_G_262628 @ 8c262628 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E9040828_adxf_is_NULL_ADXF_G_262628(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040828__adxf__is_NULL__ADXF_Ge_8c272564,in_PR);
    return 0xfffffffd;
  }
  return *(undefined4 *)(ar4 + 0x10);
}



/* s_E9040829_adxf_is_NULL_ADXF_G_262646 @ 8c262646 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E9040829_adxf_is_NULL_ADXF_G_262646(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040829__adxf__is_NULL__ADXF_Ge_8c272590,in_PR);
    return 0xfffffffd;
  }
  return *(undefined4 *)(ar4 + 0x14);
}



/* s_E9040830_adxf_is_NULL_ADXF_G_262664 @ 8c262664 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E9040830_adxf_is_NULL_ADXF_G_262664(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040830__adxf__is_NULL__ADXF_Ge_8c2725c0,ar5);
    *ar5 = 0;
    return 0xfffffffd;
  }
  *ar5 = *(undefined4 *)(ar4 + 0x1c);
  return *(undefined4 *)(ar4 + 0x20);
}



/* s_E9040831_adxf_is_NULL_ADXF_G_262696 @ 8c262696 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E9040831_adxf_is_NULL_ADXF_G_262696(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040831__adxf__is_NULL__ADXF_Ge_8c2725f0,in_PR);
    return 0xfffffffd;
  }
  return *(undefined4 *)(ar4 + 0x24);
}



/* s_E9040832_adxf_is_NULL_ADXF_G_2626b4 @ 8c2626b4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E9040832_adxf_is_NULL_ADXF_G_2626b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040832__adxf__is_NULL__ADXF_Ge_8c272620,in_PR);
    return 0xfffffffd;
  }
  return (int)*(char *)(ar4 + 1);
}



/* s_E9040828_ptid_is_range_outsi_2626d2 @ 8c2626d2 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E9040828_ptid_is_range_outsi_2626d2(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  char *s0;
  undefined4 in_PR;
  
  if ((ar4 < 0) || (0xff < ar4)) {
    s0 = s_E9040828__ptid__is_range_outside_8c272648;
  }
  else {
    ar4 = *(int *)(ar4 * 4 + -0x73b4c1e0);
    if ((-1 < ar5) && (ar5 < *(int *)(ar4 + 0xc))) {
      return 0;
    }
    s0 = s_E9040828__flid__is_range_outside_8c272680;
  }
  FUN_8c25ece6(ar4,ar5,ar6,ar7,s0,in_PR);
  return 0xfffffffd;
}



/* FUN_8c26270c @ 8c26270c callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c26270c(int ar4,uint ar5,int *ar6,uint *ar7)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = s_E9040828_ptid_is_range_outsi_2626d2(ar4,ar5,ar6,ar7);
  if (iVar2 < 0) {
    *ar6 = -1;
    *ar7 = 0xffffffff;
  }
  else {
    for (piVar4 = *(int **)(DAT_8c2627e8 + ar4 * 4); iVar5 = 0, *piVar4 != 0;
        piVar4 = (int *)*piVar4) {
      for (; iVar5 < (int)(uint)*(ushort *)(piVar4 + 4); iVar5 = iVar5 + 1) {
        puVar3 = (ushort *)(piVar4 + iVar5 * 2 + 5);
        if (*puVar3 == ar5) {
          *ar6 = piVar4[2] + *(int *)(puVar3 + 2);
          *ar7 = (uint)puVar3[1];
          return iVar2;
        }
      }
    }
    iVar5 = 0;
    uVar6 = (uint)*(ushort *)(piVar4 + 5);
    puVar3 = (ushort *)((int)piVar4 + 0x16);
    if (0 < (int)ar5) {
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + 1;
        uVar6 = uVar6 + uVar1;
      } while (iVar5 < (int)ar5);
    }
    *ar6 = uVar6 + piVar4[2];
    *ar7 = (uint)((ushort *)((int)piVar4 + 0x16))[ar5];
  }
  return iVar2;
}



/* FUN_8c2627f6 @ 8c2627f6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2627f6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c25ece6(ar4,ar5,ar6,ar7,&DAT_8c2726e8,ar5);
  return uVar1;
}



/* FUN_8c262810 @ 8c262810 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262810(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int ain0_00;
  undefined1 *ar4_00;
  code *ar5_00;
  
  if (DAT_8c278478 == 0) {
    uVar1 = FUN_8c260c98(ar4,ar5,ar6,ar7,ain0);
    uVar1 = FUN_8c260ca0(ar4,ar5,ar6,ar7,uVar1);
    uVar1 = FUN_8c26b992(ar4,ar5,ar6,ar7,uVar1);
    uVar1 = FUN_8c26b526(ar4,ar5,ar6,ar7,uVar1);
    FUN_8c26b212(ar4,ar5,ar6,ar7,uVar1);
    FUN_8c25eca8(ar4,ar5,ar6,ar7);
    FUN_8c263244(ar4,ar5,ar6,ar7);
    FUN_8c262ac4(ar4,ar5,ar6,ar7);
    FUN_8c2619b4(ar4,ar5,ar6,ar7);
    thunk_FUN_8c2689c8(ar4,ar5,ar6,ar7);
    thunk_FUN_8c26a130(FUN_8c2627f6,0,ar6,ar7);
    ar4_00 = &DAT_8c277fd0;
    uVar1 = 0x4a0;
    ar5_00 = (code *)0x0;
    memset(&DAT_8c277fd0,0,0x4a0,ar7);
    ain0_00 = DAT_8c278474;
    if (DAT_8c278474 == 1) {
      ar4_00 = (undefined1 *)0x900;
      ar7 = 0;
      ar5_00 = FUN_8c264010;
      uVar1 = 0x70;
      ain0_00 = FUN_8c1fa244(0x900,FUN_8c264010,0x70,0);
      DAT_8c278470 = ain0_00;
    }
    ain0 = FUN_8c260cc8(ar4_00,ar5_00,uVar1,ar7,ain0_00);
  }
  DAT_8c278478 = DAT_8c278478 + 1;
  return ain0;
}



/* FUN_8c262814 @ 8c262814 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262814(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined1 *ar4_00;
  code *ar5_00;
  undefined4 ar6_00;
  int *unaff_r14;
  undefined4 in_PR;
  
  if (*unaff_r14 == 0) {
    FUN_8c260c98(ar4,ar5,ar6,ar7,in_PR);
    FUN_8c260ca0(ar4,ar5,ar6,ar7,in_PR);
    FUN_8c26b992(ar4,ar5,ar6,ar7,in_PR);
    FUN_8c26b526(ar4,ar5,ar6,ar7,in_PR);
    FUN_8c26b212(ar4,ar5,ar6,ar7,in_PR);
    FUN_8c25eca8(ar4,ar5,ar6,ar7);
    FUN_8c263244(ar4,ar5,ar6,ar7);
    FUN_8c262ac4(ar4,ar5,ar6,ar7);
    FUN_8c2619b4(ar4,ar5,ar6,ar7);
    thunk_FUN_8c2689c8(ar4,ar5,ar6,ar7);
    thunk_FUN_8c26a130(FUN_8c2627f6,0,ar6,ar7);
    ar4_00 = &DAT_8c277fd0;
    ar6_00 = 0x4a0;
    ar5_00 = (code *)0x0;
    memset(&DAT_8c277fd0,0,0x4a0,ar7);
    if (DAT_8c278474 == 1) {
      ar4_00 = (undefined1 *)0x900;
      ar7 = 0;
      ar5_00 = FUN_8c264010;
      ar6_00 = 0x70;
      DAT_8c278470 = FUN_8c1fa244(0x900,FUN_8c264010,0x70,0);
    }
    ain0 = FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar7,in_PR);
  }
  *unaff_r14 = *unaff_r14 + 1;
  return ain0;
}



/* FUN_8c2628fa @ 8c2628fa callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2628fa(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_PR;
  
  iVar2 = *ar4;
  *ar4 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    FUN_8c260ca0(ar4,ar5,ar6,ar7,in_PR);
    iVar2 = DAT_8c278470;
    if (DAT_8c278470 != 0) {
      FUN_8c1fa54c(DAT_8c278470,ar5,ar6,ar7);
      DAT_8c278470 = 0;
    }
    FUN_8c260cc8(iVar2,ar5,ar6,ar7,in_PR);
    thunk_FUN_8c268a24(iVar2,ar5,ar6,ar7);
    FUN_8c260ca0(iVar2,ar5,ar6,ar7,in_PR);
    FUN_8c2619ee(iVar2,ar5,ar6,ar7);
    FUN_8c262ad8(iVar2,ar5,ar6,ar7);
    noop_26325a(iVar2,ar5,ar6,ar7,in_PR);
    FUN_8c25ecc2(iVar2,ar5,ar6,ar7);
    FUN_8c26b234(iVar2,ar5,ar6,ar7,in_PR);
    FUN_8c26b548(iVar2,ar5,ar6,ar7,in_PR);
    uVar1 = FUN_8c26b9b4(iVar2,ar5,ar6,ar7,in_PR);
    uVar1 = FUN_8c260cc8(iVar2,ar5,ar6,ar7,uVar1);
    return uVar1;
  }
  return ain0;
}



/* thunk_FUN_8c2689c8 @ 8c2629a0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c2689c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c262a60)();
  return uVar1;
}



/* thunk_FUN_8c268a24 @ 8c2629a6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c268a24(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c262a64)();
  return uVar1;
}



/* s_E1201_mwRnaCreate_Illigal_pa_268b7a @ 8c2629ac callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1201_mwRnaCreate_Illigal_pa_268b7a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_E1201_mwRnaCreate_Illigal_pa_268b7a_8c262a68)();
  return uVar1;
}



/* FUN_8c2629b2 @ 8c2629b2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2629b2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_268d66_8c262a6c)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_268c80_8c262a70)(ar4);
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_2690dc @ 8c2629d0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_2690dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_2690dc_8c262a78)();
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_2691ba @ 8c2629d6 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_2691ba(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_2691ba_8c262a7c)();
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_2699d4 @ 8c2629dc callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_2699d4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_2699d4_8c262a80)();
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269aa8 @ 8c2629e2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269aa8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_269aa8_8c262a84)();
  return uVar1;
}



/* ret_const_7fffffff_2629e8 @ 8c2629e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_7fffffff_2629e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c262a88;
}



/* thunk_FUN_8c2695e4 @ 8c2629f4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c2695e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c262a90)();
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269aec @ 8c262a00 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269aec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_269aec_8c262a98)();
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269c06 @ 8c262a06 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269c06(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_269c06_8c262a9c)();
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269c42 @ 8c262a0c callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269c42(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_269c42_8c262aa0)();
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269b92 @ 8c262a18 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269b92(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_269b92_8c262aa8)();
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269816 @ 8c262a36 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269816(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_269816_8c262abc)();
  return uVar1;
}



/* noop_262a44 @ 8c262a44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_262a44(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c262a4c @ 8c262a4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262a4c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 auStack_8 [2];
  
  (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_269fcc_8c262ac0)(ar4,ar5,auStack_8,ar7);
  return auStack_8[0];
}



/* FUN_8c262ac4 @ 8c262ac4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262ac4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c262bdc)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_memset_8c262be4)(DAT_8c262be0,0,(int)DAT_8c262bd6);
  return uVar1;
}



/* FUN_8c262ad8 @ 8c262ad8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262ad8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_memset_8c262be4)(DAT_8c262be0,0,(int)DAT_8c262bd6);
  return uVar1;
}



/* FUN_8c262ae2 @ 8c262ae2 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262ae2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = DAT_8c262be8;
  *(undefined4 *)(DAT_8c262bd8 + ar4) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x38) = uVar1;
  *(undefined4 *)(ar4 + 0x3c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0;
  *(undefined1 *)(ar4 + 3) = 0;
  return 0;
}



/* FUN_8c262b04 @ 8c262b04 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262b04(undefined4 ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined *ar5_00;
  undefined *puVar1;
  undefined4 ar5_01;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int a5;
  undefined4 uVar6;
  undefined1 *a6;
  undefined4 ar4_00;
  undefined1 *ar6_00;
  
  iVar5 = (int)DAT_8c262bda;
  uVar6 = 8;
  iVar4 = 0;
  ar4_00 = *ar6;
  do {
    if (*(char *)(iVar4 * iVar5 + DAT_8c262be0) == '\0') break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  if (iVar4 != 8) {
    ar6_00 = (undefined1 *)(iVar4 * iVar5 + DAT_8c262be0);
    iVar4 = DAT_8c262be0;
    ar5_01 = (*(code *)PTR_get_field_1c_26b94e_8c262bec)(ar4_00,iVar5,8,DAT_8c262be0);
    uVar2 = (*(code *)PTR_get_field_20_26b952_8c262bf0)(ar4_00,iVar5,uVar6,iVar4);
    uVar3 = (*(code *)PTR_get_field_24_26b956_8c262bf4)(ar4_00,iVar5,uVar6,iVar4);
    iVar4 = (uVar2 >> 1) + (uVar3 >> 1);
    uVar6 = (*(code *)PTR_FUN_8c262bf8)(ar5,ar5_01,uVar2 >> 1,iVar4);
    puVar1 = PTR_FUN_8c262c00;
    ar5_00 = PTR_FUN_8c262bfc;
    *(undefined4 *)(ar6_00 + 4) = uVar6;
    a6 = ar6_00;
    (*(code *)puVar1)(uVar6,ar5_00,ar6_00,iVar4);
    if (*(int *)(ar6_00 + 4) != 0) {
      a5 = 0;
      *(undefined4 *)(ar6_00 + 8) = ar4;
      ar6_00[2] = (char)ar5;
      iVar5 = 0;
      if (0 < ar5) {
        do {
          a5 = a5 + 1;
          *(undefined4 *)(ar6_00 + iVar5 + 0xc) = *(undefined4 *)(iVar5 + (int)ar6);
          iVar5 = iVar5 + 4;
        } while (a5 < ar5);
      }
      ar6_00[1] = 0;
      FUN_8c262ae2(ar6_00,a5,a6,iVar4);
      *(undefined4 *)(ar6_00 + 0x48) = 0;
      *(undefined4 *)(ar6_00 + 0x4c) = 0;
      *(undefined4 *)(ar6_00 + 0x50) = 0;
      *(undefined4 *)(ar6_00 + 0x54) = 0;
      *ar6_00 = 1;
      return ar6_00;
    }
  }
  return 0;
}



/* FUN_8c262c04 @ 8c262c04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262c04(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  if (ar4 != 0) {
    if (*(int *)(ar4 + 4) != 0) {
      (*(code *)PTR_FUN_8c262d04)(*(undefined4 *)(ar4 + 4));
    }
    (*(code *)PTR_FUN_8c262d08)();
    (*(code *)PTR_memset_8c262d0c)(ar4,0,(int)DAT_8c262cfc);
    uVar1 = (*(code *)PTR_FUN_8c262d10)();
    return uVar1;
  }
  return in_r0;
}



/* FUN_8c262c08 @ 8c262c08 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262c08(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int unaff_r14;
  undefined4 in_PR;
  
  if (unaff_r14 != 0) {
    if (*(int *)(unaff_r14 + 4) != 0) {
      ar4 = *(undefined4 *)(unaff_r14 + 4);
      FUN_8c25fc5c(ar4,ar5,ar6,ar7,in_PR);
    }
    FUN_8c260ca0(ar4,ar5,ar6,ar7,in_PR);
    ar5_00 = 0;
    ar6_00 = 0x9c;
    uVar1 = memset(unaff_r14,0,0x9c,ar7);
    uVar1 = FUN_8c260cc8(unaff_r14,ar5_00,ar6_00,ar7,uVar1);
    return uVar1;
  }
  return ain0;
}



/* FUN_8c262c38 @ 8c262c38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c262c38(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 1);
}



/* FUN_8c262c3c @ 8c262c3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262c3c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 8) = ar5;
  return in_r0;
}



/* FUN_8c262c4c @ 8c262c4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262c4c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x38) = ar5;
  return in_r0;
}



/* FUN_8c262c50 @ 8c262c50 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262c50(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c262ae2(ar4,ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 1) = 1;
  return 1;
}



/* FUN_8c262c66 @ 8c262c66 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262c66(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c262d14)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 1) = 0;
  return 0;
}



/* FUN_8c262c80 @ 8c262c80 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262c80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int ar5_00;
  int iVar2;
  int iVar3;
  undefined4 ar5_01;
  undefined4 *a7;
  undefined1 *ar7_00;
  undefined4 uVar4;
  int *a4;
  undefined1 auStack_24 [8];
  undefined4 uStack_1c;
  int iStack_18;
  
  a4 = *(int **)(ar4 + 8);
  uVar4 = *(undefined4 *)(ar4 + 4);
  a7 = &uStack_1c;
  (**(code **)(*a4 + 0x18))(a4,1,(int)DAT_8c262cfe,a7);
  if (((iStack_18 < 0x10) ||
      (ar5_01 = uStack_1c, iVar3 = iStack_18,
      ar5_00 = (*(code *)PTR_FUN_8c262d18)(uVar4,uStack_1c,iStack_18,a7), puVar1 = PTR_FUN_8c262d1c,
      ar5_00 == 0)) || (iStack_18 < ar5_00)) {
    uVar4 = (**(code **)(*a4 + 0x1c))(a4,1,&uStack_1c,a7);
  }
  else {
    *(int *)(DAT_8c262d00 + ar4) = ar5_00;
    iVar2 = (*(code *)puVar1)(uVar4,ar5_01,iVar3,a7);
    if (iVar2 == 4) {
      *(undefined1 *)(ar4 + 3) = 1;
    }
    iVar3 = (*(code *)PTR_FUN_8c262d1c)(uVar4,ar5_01,iVar3,a7);
    if (iVar3 == 2) {
      if (0x3f < iStack_18) {
        iStack_18 = 0x40;
      }
      (*(code *)PTR_memmove_8c262e3c)(ar4 + 0x58,uStack_1c,iStack_18,a7);
    }
    ar7_00 = auStack_24;
    (*(code *)PTR_FUN_8c262e40)(&uStack_1c,ar5_00,&uStack_1c,ar7_00);
    (**(code **)(*a4 + 0x20))(a4,0,&uStack_1c,ar7_00);
    (**(code **)(*a4 + 0x1c))(a4,1,auStack_24,ar7_00);
    uVar4 = 2;
    *(undefined1 *)(ar4 + 1) = 2;
  }
  return uVar4;
}



/* FUN_8c262d6c @ 8c262d6c callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c262e0c */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c262d6c(int ar4,uint *ar5,uint *ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 ar4_00;
  uint uVar3;
  uint *a5;
  uint uVar4;
  uint *a6;
  int *a7;
  uint *a6_00;
  int *a4;
  int iVar5;
  
  puVar1 = PTR_FUN_8c262e44;
  a6_00 = (uint *)(int)DAT_8c262e3a;
  ar4_00 = *(undefined4 *)(ar4 + 0xc);
  a5 = ar5;
  a6 = ar6;
  a7 = ar7;
  for (iVar5 = 0; iVar2 = (*(code *)puVar1)(*(undefined4 *)(ar4 + 4),a5,a6,a7), iVar5 < iVar2;
      iVar5 = iVar5 + 1) {
    a4 = *(int **)(iVar5 * 4 + ar4 + 0xc);
    a5 = (uint *)0x0;
    a7 = (int *)(iVar5 * 8 + ar4 + 0x1c);
    a6 = a6_00;
    (**(code **)(*a4 + 0x18))(a4,0,a6_00,a7);
  }
  iVar5 = (*(code *)PTR_get_field_1c_26b94e_8c262e48)(ar4_00,a5,a6,a7);
  *ar5 = (uint)(*(int *)(ar4 + 0x1c) - iVar5) >> 1;
  uVar4 = *(uint *)(ar4 + 0x38);
  uVar3 = *(uint *)(ar4 + 0x20) >> 1;
  if ((int)uVar3 < (int)uVar4) {
    uVar4 = uVar3;
  }
  *ar6 = uVar4;
  if (*(int *)(ar4 + 0x3c) < 0) {
    *ar7 = DAT_8c262e4c;
  }
  else {
    *ar7 = *(int *)(ar4 + 0x3c) - *(int *)(ar4 + 0x40);
  }
  return *(undefined4 *)(*(int *)(ar4 + 4) + 0x3c);
}



/* FUN_8c262e10 @ 8c262e10 callers=1 callees=3 */

/* WARNING: Removing unreachable block (ram,0x8c262e7e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c262e10(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int a7;
  undefined4 uVar3;
  int *a4;
  
  uVar3 = *(undefined4 *)(ar4 + 4);
  a4 = *(int **)(ar4 + 8);
  if ((*(char *)(ar4 + 3) == '\x01') &&
     (iVar1 = (**(code **)(*a4 + 0x24))(a4,1,ar6,ar7), iVar1 == 0)) {
    *(undefined1 *)(ar4 + 1) = 3;
    return 3;
  }
  ar5_00 = 1;
  a7 = ar4 + 0x14;
  ar6_00 = DAT_8c263094;
  (**(code **)(*a4 + 0x18))(a4,1,DAT_8c263094,a7);
  iVar1 = (*(code *)PTR_FUN_8c263098)(uVar3,ar5_00,ar6_00,a7);
  if ((((iVar1 == 0) && (1 < *(int *)(ar4 + 0x18))) &&
      (((int)**(short **)(ar4 + 0x14) >> 8 & 0xffU |
       (int)**(short **)(ar4 + 0x14) << 8 & DAT_8c26309c & 0xffff) == DAT_8c2630a0)) ||
     (iVar1 = FUN_8c263186(ar4,ar5_00,ar6_00,a7), iVar1 <= *(int *)(ar4 + 0x34))) {
    *(undefined1 *)(ar4 + 1) = 3;
  }
  else {
    iVar1 = FUN_8c26316e(ar4,ar5_00,ar6_00,a7);
    uVar2 = (**(code **)(**(int **)(ar4 + 0xc) + 0x24))(*(int **)(ar4 + 0xc),0,ar6_00,a7);
    if (iVar1 <= (int)(uVar2 >> 1)) {
      (*(code *)PTR_FUN_8c2630a4)(uVar3,*(undefined4 *)(ar4 + 0x14),*(undefined4 *)(ar4 + 0x18),a7);
      uVar3 = (*(code *)PTR_FUN_8c2630a8)(uVar3);
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x8c262ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*a4 + 0x1c))(a4,1,ar4 + 0x14);
  return uVar3;
}



/* FUN_8c262f02 @ 8c262f02 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262f02(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int ar5_00;
  int iVar3;
  int iVar4;
  undefined4 ar5_01;
  undefined1 *a6;
  undefined1 *ar7_00;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined1 *puStack_24;
  
  piVar6 = *(int **)(ar4 + 8);
  uVar5 = *(undefined4 *)(ar4 + 4);
  iVar2 = (*(code *)PTR_get_field_18_25ff16_8c2630ac)(uVar5,ar5,ar6,ar7);
  ar5_00 = (*(code *)PTR_get_field_a000a4_25fff0_8c2630b0)(uVar5,ar5,ar6,ar7);
  iVar3 = (*(code *)PTR_get_field_a0_25fff6_8c2630b4)(uVar5,ar5,ar6,ar7);
  puVar1 = PTR_FUN_8c2630b8;
  iVar2 = iVar2 - *(int *)(ar4 + 0x34);
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  ar7_00 = auStack_30;
  (*(code *)PTR_FUN_8c2630b8)(ar4 + 0x14,ar5_00,&uStack_28,ar7_00);
  (**(code **)(*piVar6 + 0x20))(piVar6,0,&uStack_28,ar7_00);
  ar5_01 = 1;
  a6 = auStack_30;
  (**(code **)(*piVar6 + 0x1c))(piVar6,1,a6,ar7_00);
  for (iVar3 = 0; iVar4 = (*(code *)PTR_FUN_8c2630bc)(*(undefined4 *)(ar4 + 4),ar5_01,a6,ar7_00),
      iVar3 < iVar4; iVar3 = iVar3 + 1) {
    ar7_00 = auStack_30;
    (*(code *)puVar1)(iVar3 * 8 + ar4 + 0x1c,iVar2 << 1,&uStack_28,ar7_00);
    if (*(int *)(ar4 + 0x50) != 0) {
      ar7_00 = puStack_24;
      (**(code **)(ar4 + 0x50))(*(undefined4 *)(ar4 + 0x54),iVar3,uStack_28,puStack_24);
    }
    piVar6 = *(int **)(iVar3 * 4 + ar4 + 0xc);
    (**(code **)(*piVar6 + 0x20))(piVar6,1,&uStack_28,ar7_00);
    piVar6 = *(int **)(ar4 + 0xc + iVar3 * 4);
    ar5_01 = 0;
    a6 = auStack_30;
    (**(code **)(*piVar6 + 0x1c))(piVar6,0,a6,ar7_00);
  }
  *(int *)(ar4 + 0x2c) = *(int *)(ar4 + 0x2c) + iVar2;
  *(int *)(ar4 + 0x30) = *(int *)(ar4 + 0x30) + ar5_00;
  *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + iVar2;
  *(int *)(ar4 + 0x40) = *(int *)(ar4 + 0x40) + iVar2;
  *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + ar5_00;
  if (((-1 < *(int *)(ar4 + 0x3c)) && (*(int *)(ar4 + 0x3c) <= *(int *)(ar4 + 0x40))) &&
     (*(int *)(ar4 + 0x48) != 0)) {
    (**(code **)(ar4 + 0x48))(*(undefined4 *)(ar4 + 0x4c),ar5_01,a6,ar7_00);
  }
  uVar5 = (*(code *)PTR_FUN_8c2630c0)(uVar5,ar5_01,a6,ar7_00);
  return uVar5;
}



/* FUN_8c26304a @ 8c26304a callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26304a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r13;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(unaff_r13 + 4);
  iVar1 = (*(code *)PTR_get_field_4_25ff38_8c2630c4)(uVar2,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c262e10(unaff_r13,ar5,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c2630c8)(uVar2,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_get_field_4_25ff38_8c2630c4)(uVar2,ar5,ar6,ar7);
  if (iVar1 == 3) {
    uVar2 = FUN_8c262f02(unaff_r13,ar5,ar6,ar7);
    return uVar2;
  }
  return iVar1;
}



/* FUN_8c26307e @ 8c26307e callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26307e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(ar4 + 1) != '\x02') {
    if (*(char *)(ar4 + 1) == 1) {
      uVar2 = FUN_8c262c80(ar4,ar5,ar6,ar7);
      return uVar2;
    }
    return (int)*(char *)(ar4 + 1);
  }
  uVar2 = *(undefined4 *)(ar4 + 4);
  iVar1 = (*(code *)PTR_get_field_4_25ff38_8c2630c4)(uVar2);
  if (iVar1 == 0) {
    FUN_8c262e10(ar4,ar5,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c2630c8)(uVar2);
  iVar1 = (*(code *)PTR_get_field_4_25ff38_8c2630c4)(uVar2);
  if (iVar1 == 3) {
    uVar2 = FUN_8c262f02(ar4,ar5,ar6,ar7);
    return uVar2;
  }
  return iVar1;
}



/* FUN_8c2630cc @ 8c2630cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2630cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *ar4_00;
  
  iVar3 = (int)DAT_8c2631fe;
  pcVar2 = DAT_8c263204 + DAT_8c263200;
  ar4_00 = DAT_8c263204;
  do {
    iVar1 = (int)*ar4_00;
    if (iVar1 == 1) {
      iVar1 = FUN_8c26307e(ar4_00,ar5,ar6,ar7);
    }
    ar4_00 = ar4_00 + iVar3;
  } while (ar4_00 < pcVar2);
  return iVar1;
}



/* FUN_8c2630d6 @ 8c2630d6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c2630d6(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  char *pcVar2;
  int iVar3;
  
  iVar3 = (int)DAT_8c2631fe;
  pcVar2 = ar4 + unaff_r12;
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c26307e(ar4,ar5,ar6,ar7);
    }
    ar4 = ar4 + iVar3;
  } while (ar4 < pcVar2);
  return iVar1;
}



/* get_field_2c_2630fe @ 8c2630fe callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_2c_2630fe(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x2c);
}



/* FUN_8c263102 @ 8c263102 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263102(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x34) = ar5;
  return in_r0;
}



/* FUN_8c263114 @ 8c263114 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263114(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x48) = ar5;
  *(undefined4 *)(ar4 + 0x4c) = ar6;
  return 0x4c;
}



/* FUN_8c26311e @ 8c26311e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26311e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x3c) = ar5;
  return in_r0;
}



/* FUN_8c263126 @ 8c263126 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263126(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x40) = ar5;
  return 0x40;
}



/* FUN_8c263132 @ 8c263132 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263132(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x44) = ar5;
  return 0x44;
}



/* FUN_8c26313e @ 8c26313e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26313e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c263208)(*(undefined4 *)(ar4 + 4));
  return uVar1;
}



/* FUN_8c26314a @ 8c26314a callers=1 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c263152 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c26314a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(int *)(ar4 + 4) + 0x14);
}



/* FUN_8c263156 @ 8c263156 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263156(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c263210)(*(undefined4 *)(ar4 + 4));
  return uVar1;
}



/* FUN_8c263162 @ 8c263162 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263162(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c263214)(*(undefined4 *)(ar4 + 4));
  return uVar1;
}



/* FUN_8c26316e @ 8c26316e callers=1 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c263176 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c26316e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(int *)(ar4 + 4) + 0x10);
}



/* FUN_8c263186 @ 8c263186 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263186(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_18_25ff16_8c263220)(*(undefined4 *)(ar4 + 4));
  return uVar1;
}



/* FUN_8c26319e @ 8c26319e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26319e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c263228)(*(undefined4 *)(ar4 + 4));
  return uVar1;
}



/* FUN_8c2631b6 @ 8c2631b6 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c2631be */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2631b6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(int *)(ar4 + 4) + 0x28);
}



/* FUN_8c2631c2 @ 8c2631c2 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c2631ca */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2631c2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(int *)(ar4 + 4) + 0x2c);
}



/* FUN_8c2631ce @ 8c2631ce callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c2631d6 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2631ce(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(int *)(ar4 + 4) + 0x30);
}



/* FUN_8c2631da @ 8c2631da callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c2631e2 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2631da(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(int *)(ar4 + 4) + 0x34);
}



/* FUN_8c2631f8 @ 8c2631f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2631f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 0x58;
}



/* FUN_8c263244 @ 8c263244 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263244(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_memset_8c263364)(DAT_8c263360,0,(int)DAT_8c26335a,ar7);
  return 1;
}



/* noop_26325a @ 8c26325a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_26325a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c26325e @ 8c26325e callers=3 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c2632c0) */
/* WARNING: Unknown calling convention */

undefined1 * FUN_8c26325e(undefined4 ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = DAT_8c263368;
  iVar3 = 0;
  do {
    if (*(char *)(iVar3 * 100 + DAT_8c263360) == '\0') break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  if (iVar3 == 0x20) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = (undefined1 *)(iVar3 * 100 + DAT_8c263360);
    puVar1[1] = 1;
    puVar1[2] = 0;
    *(int **)(puVar1 + 4) = ar7;
    *(undefined4 *)(puVar1 + 8) = ar4;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0x10) = ar5;
    *(undefined4 *)(puVar1 + 0x14) = ar6;
    *(undefined4 *)(puVar1 + 0x2c) = uVar2;
    iVar3 = *(int *)(puVar1 + 0x14) + (int)DAT_8c26335c;
    if (iVar3 < 0) {
      iVar3 = iVar3 + DAT_8c26335c;
    }
    *(int *)(puVar1 + 0x30) = iVar3 >> 0xb;
    *puVar1 = 1;
    uVar2 = (**(code **)(*ar7 + 0x24))(ar7,0);
    *(undefined4 *)(puVar1 + 0x18) = uVar2;
    *(undefined4 *)(puVar1 + 0x1c) = uVar2;
  }
  return puVar1;
}



/* FUN_8c26326e @ 8c26326e callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c2632c0) */
/* WARNING: Unknown calling convention */

undefined1 * FUN_8c26326e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r10;
  int *unaff_r11;
  int unaff_r14;
  
  uVar2 = DAT_8c263368;
  iVar3 = unaff_r10;
  do {
    if (*(char *)(iVar3 * unaff_r14 + DAT_8c263360) == '\0') break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < in_r0);
  if (iVar3 == 0x20) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = (undefined1 *)(iVar3 * unaff_r14 + DAT_8c263360);
    puVar1[1] = 1;
    puVar1[2] = (char)unaff_r10;
    *(int **)(puVar1 + 4) = unaff_r11;
    *(undefined4 *)(puVar1 + 8) = ar4;
    *(int *)(puVar1 + 0xc) = unaff_r10;
    *(undefined4 *)(puVar1 + 0x10) = ar5;
    *(undefined4 *)(puVar1 + 0x14) = ar6;
    *(undefined4 *)(puVar1 + 0x2c) = uVar2;
    iVar3 = *(int *)(puVar1 + 0x14) + (int)DAT_8c26335c;
    if (iVar3 < 0) {
      iVar3 = iVar3 + DAT_8c26335c;
    }
    *(int *)(puVar1 + 0x30) = iVar3 >> 0xb;
    *puVar1 = 1;
    uVar2 = (**(code **)(*unaff_r11 + 0x24))(unaff_r11,0,ar6,1);
    *(undefined4 *)(puVar1 + 0x18) = uVar2;
    *(undefined4 *)(puVar1 + 0x1c) = uVar2;
  }
  return puVar1;
}



/* FUN_8c2632e2 @ 8c2632e2 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2632e2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_memset_8c263364)(0,100);
  return uVar1;
}



/* s_E8101210_can_t_open_s_ADXSTM_2632ee @ 8c2632ea callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E8101210_can_t_open_s_ADXSTM_2632ee(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 ar4_00;
  int ar4_01;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  undefined4 in_stack_ffffffec;
  
  ar5_01 = &stack0xffffffec;
  ar5_00 = 0;
  ar4_00 = ar4;
  iVar1 = FUN_8c1f397e(ar4,0,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c25ece6(ar4_00,ar5_00,ar6,ar7,"E8101210: can\'t open \'%s\' (ADXSTM_OpenFname)",ar4);
  }
  else {
    ar4_01 = iVar1;
    iVar2 = FUN_8c1f30d4(iVar1,&stack0xffffffec,ar6,ar7);
    if (iVar2 != 0) {
      iVar1 = FUN_8c26325e(iVar1,0,in_stack_ffffffec,ar5);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_8c0143c0(iVar1 + 0x40,ar4,0x20,ar5);
      return iVar1;
    }
    FUN_8c25ece6(ar4_01,ar5_01,ar6,ar7,"E8101211: can\'t GetFileSize (ADXSTM_OpenFname)",
                 in_stack_ffffffec);
    FUN_8c1f309c(iVar1,ar5_01,ar6,ar7,in_stack_ffffffec);
  }
  return 0;
}



/* s_E8101212_can_t_open_fad_d_ns_26338a @ 8c263388 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E8101212_can_t_open_fad_d_ns_26338a(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  undefined4 ar6_00;
  
  iVar1 = ar5;
  ar6_00 = ar6;
  a4 = FUN_8c1f39ac(ar4,ar5,ar6,ar7);
  if (a4 == 0) {
    FUN_8c25ece6(0,iVar1,ar6_00,ar7,s_E8101212__can_t_open_fad__d__nsc_8c272f90,ar4);
    return 0;
  }
  iVar1 = FUN_8c26325e(a4,0,ar5 << 0xb,ar6);
  if (iVar1 != 0) {
    FUN_8c0143c0(iVar1 + 0x40,s_OpenRange_8c272fc8,0x20,ar6);
  }
  return iVar1;
}



/* s_E8101213_can_t_open_s_ADXSTM_2633ea @ 8c2633e6 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

int s_E8101213_can_t_open_s_ADXSTM_2633ea(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  
  ar5_00 = 0;
  iVar1 = ar6;
  uVar2 = ar7;
  a4 = FUN_8c1f397e(ar4,0,ar6,ar7);
  if (a4 == 0) {
    FUN_8c25ece6(0,ar5_00,iVar1,uVar2,s_E8101213__can_t_open___s__ADXSTM_8c272fd4,ar4);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_8c26325e(a4,ar5,ar6 << 0xb,ar7);
    if (iVar1 != 0) {
      uVar2 = 0x20;
      FUN_8c0143c0(iVar1 + 0x40,ar4,0x20,ar7);
      FUN_8c263534(iVar1,0,uVar2,ar7);
    }
  }
  return iVar1;
}



/* FUN_8c263446 @ 8c263446 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263446(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  if (ar4 != 0) {
    FUN_8c263498(ar4,ar5,ar6,ar7);
    if (*(int *)(ar4 + 8) != 0) {
      (*(code *)PTR_FUN_8c26351c)(*(undefined4 *)(ar4 + 8));
    }
    uVar1 = FUN_8c2632e2(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return in_r0;
}



/* FUN_8c26344a @ 8c26344a callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26344a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int unaff_r14;
  undefined4 in_PR;
  
  if (unaff_r14 != 0) {
    FUN_8c263498(ar4,ar5,ar6,ar7);
    if (*(int *)(unaff_r14 + 8) != 0) {
      FUN_8c1f309c(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7,in_PR);
    }
    uVar1 = FUN_8c2632e2(unaff_r14,ar5,ar6,ar7);
    return uVar1;
  }
  return ain0;
}



/* FUN_8c26346e @ 8c26346e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26346e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(ar4 + 0x14) == 0) {
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined1 *)(ar4 + 1) = 3;
  }
  else {
    *(undefined1 *)(ar4 + 1) = 2;
    *(undefined4 *)(ar4 + 0x34) = 0;
    uVar1 = FUN_8c2634dc(ar4,0,ar6,ar7);
    *(undefined4 *)(ar4 + 0xc) = uVar1;
  }
  return 1;
}



/* FUN_8c263472 @ 8c263472 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263472(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int unaff_r14;
  
  if (*(int *)(unaff_r14 + 0x14) == 0) {
    *(undefined4 *)(unaff_r14 + 0x34) = 0;
    *(undefined4 *)(unaff_r14 + 0xc) = 0;
    *(undefined1 *)(unaff_r14 + 1) = 3;
  }
  else {
    *(undefined1 *)(unaff_r14 + 1) = 2;
    *(undefined4 *)(unaff_r14 + 0x34) = 0;
    uVar1 = FUN_8c2634dc(ar4,0,ar6,ar7);
    *(undefined4 *)(unaff_r14 + 0xc) = uVar1;
  }
  return 1;
}



/* FUN_8c263498 @ 8c263498 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263498(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((*(char *)(ar4 + 2) == '\x01') && (*(int *)(ar4 + 8) != 0)) {
    uVar1 = (*(code *)PTR_sh4_tmu_1f88e6_8c263520)(ar4,ar5,ar6,ar7);
    uVar2 = *(undefined4 *)(ar4 + 8);
    (*(code *)PTR_FUN_8c263524)(uVar2,ar5,ar6,ar7);
    uVar2 = (*(code *)PTR_sh4_tmu_1f88e6_8c263520)(uVar2,ar5,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c263528)(uVar1,uVar2,ar6,ar7);
    *(undefined4 *)PTR_DAT_8c26352c = uVar1;
    *(undefined1 *)(ar4 + 2) = 0;
  }
  *(undefined1 *)(ar4 + 1) = 1;
  return 1;
}



/* FUN_8c2634dc @ 8c2634dc callers=4 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2634dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(ar4 + 8) != 0) {
    iVar1 = (*(code *)PTR_FUN_8c263530)(*(undefined4 *)(ar4 + 8));
    return iVar1 - *(int *)(ar4 + 0x10);
  }
  return 0;
}



/* FUN_8c2634e0 @ 8c2634e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2634e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r14;
  
  if (*(int *)(unaff_r14 + 8) != 0) {
    iVar1 = (*(code *)PTR_FUN_8c263530)(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7);
    return iVar1 - *(int *)(unaff_r14 + 0x10);
  }
  return 0;
}



/* FUN_8c263534 @ 8c263534 callers=2 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c26354e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c263534(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(ar4 + 0x14) + (int)DAT_8c26363c;
  if (iVar1 < 0) {
    iVar1 = iVar1 + DAT_8c26363c;
  }
  iVar1 = iVar1 >> 0xb;
  if (ar5 <= iVar1) {
    iVar1 = ar5;
  }
  uVar2 = 0;
  iVar1 = *(int *)(ar4 + 0x10) + iVar1;
  (*(code *)PTR_FUN_8c263640)(*(undefined4 *)(ar4 + 8),iVar1,0,ar7);
  uVar2 = FUN_8c2634dc(ar4,iVar1,uVar2,ar7);
  return uVar2;
}



/* FUN_8c263574 @ 8c263574 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263574(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x38) = ar5;
  *(undefined4 *)(ar4 + 0x3c) = ar6;
  return in_r0;
}



/* FUN_8c26357a @ 8c26357a callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c263592) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c26357a(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  if (ar5 < 0) {
    iVar1 = *(int *)(ar4 + 0x14) + (int)DAT_8c26363c;
    if (iVar1 < 0) {
      iVar1 = iVar1 + DAT_8c26363c;
    }
    *(int *)(ar4 + 0x30) = iVar1 >> 0xb;
  }
  else {
    *(int *)(ar4 + 0x30) = ar5;
  }
  return in_r0;
}



/* FUN_8c26359a @ 8c26359a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26359a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(int *)PTR_DAT_8c263644 = *(int *)PTR_DAT_8c263644 + 1;
  return in_r0;
}



/* s_E8101214_GDFS_error_adxstmf__2635aa @ 8c2635a4 callers=1 callees=2 */

/* WARNING: Removing unreachable block (ram,0x8c263630) */
/* WARNING: Removing unreachable block (ram,0x8c2636b0) */
/* WARNING: Unknown calling convention */

int s_E8101214_GDFS_error_adxstmf__2635aa(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 a6;
  int iVar6;
  int *a4;
  undefined4 in_stack_ffffffdc;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [12];
  undefined4 uStack_c;
  
  uStack_c = 1;
  a4 = *(int **)(ar4 + 4);
  iVar1 = ar4;
  if (*(char *)(ar4 + 2) == '\x01') {
    iVar1 = FUN_8c1f364c(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
    if (iVar1 == 1) {
      iVar6 = *(int *)(ar4 + 0x20) * 0x800;
      ar7 = auStack_20;
      FUN_8c26be30(ar4 + 0x24,iVar6,auStack_18,ar7);
      (**(code **)(*a4 + 0x20))(a4,1,auStack_18,ar7);
      uVar5 = 0;
      ar6 = auStack_20;
      (**(code **)(*a4 + 0x1c))(a4,0,ar6,ar7);
      iVar1 = FUN_8c2634dc(ar4,uVar5,ar6,ar7);
      if ((iVar1 == *(int *)(ar4 + 0x30)) && (*(int *)(ar4 + 0x38) != 0)) {
        (**(code **)(ar4 + 0x38))(*(undefined4 *)(ar4 + 0x3c),uVar5,ar6,ar7);
      }
      *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + iVar6;
      *(undefined1 *)(ar4 + 2) = 0;
      iVar1 = FUN_8c2634dc(ar4,uVar5,ar6,ar7);
      iVar6 = *(int *)(ar4 + 0x14) + 0x7ff;
      if (iVar6 < 0) {
        iVar6 = *(int *)(ar4 + 0x14) + 0xffe;
      }
      ar5 = iVar6 >> 0xb;
      if (ar5 <= iVar1) {
        *(undefined1 *)(ar4 + 1) = 3;
      }
    }
    else if (iVar1 == 5) {
      FUN_8c25ece6(5,ar5,ar6,ar7,"E8101214: GDFS error (adxstmf_stat_exec)\n",in_stack_ffffffdc);
      *(undefined1 *)(ar4 + 1) = 4;
      *(undefined1 *)(ar4 + 2) = 0;
    }
  }
  iVar6 = (int)*(char *)(ar4 + 2);
  if (iVar6 == 0) {
    if ((a4 == (int *)0x0) || (*a4 == 0)) {
      iVar6 = FUN_8c26359a(iVar1,ar5,ar6,ar7,in_stack_ffffffdc);
    }
    else {
      iVar6 = (**(code **)(*a4 + 0x24))(a4,1,ar6,ar7);
      if (iVar6 < *(int *)(ar4 + 0x1c)) {
        a6 = *(undefined4 *)(ar4 + 0x18);
        uVar5 = 0;
        iVar1 = ar4 + 0x24;
        (**(code **)(*a4 + 0x18))(a4,0,a6,iVar1);
        iVar6 = *(int *)(ar4 + 0x28);
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0x7ff;
        }
        iVar3 = *(int *)(ar4 + 0x30);
        iVar2 = FUN_8c2634dc(ar4,uVar5,a6,iVar1);
        iVar4 = iVar3 - iVar2;
        if (iVar6 >> 0xb < iVar3 - iVar2) {
          iVar4 = iVar6 >> 0xb;
        }
        iVar6 = *(int *)(ar4 + 0x2c);
        if (iVar4 < *(int *)(ar4 + 0x2c)) {
          iVar6 = iVar4;
        }
        if (iVar6 != 0) {
          iVar6 = FUN_8c1f332c(*(undefined4 *)(ar4 + 8),iVar6,*(undefined4 *)(ar4 + 0x24),iVar1);
          *(int *)(ar4 + 0x20) = iVar6;
          if (0 < iVar6) {
            *(undefined1 *)(ar4 + 2) = 1;
            return 1;
          }
        }
        iVar6 = (**(code **)(*a4 + 0x1c))(a4,0,ar4 + 0x24,iVar1);
      }
    }
  }
  return iVar6;
}



/* FUN_8c263702 @ 8c263702 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263702(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ain0;
  undefined4 uVar1;
  int a4;
  
  a4 = ar4;
  FUN_8c260ca0(ar4,ar5,ar6,ar7,ar4);
  ain0 = (int)*(char *)(a4 + 1);
  if (ain0 == 2) {
    ain0 = s_E8101214_GDFS_error_adxstmf__2635aa(a4,ar5,ar6,ar7);
    ar4 = a4;
  }
  uVar1 = FUN_8c260cc8(ar4,ar5,ar6,ar7,ain0);
  return uVar1;
}



/* FUN_8c26371e @ 8c26371e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26371e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *pcVar2;
  char *ar4_00;
  
  pcVar2 = DAT_8c263764 + DAT_8c26374c;
  ar4_00 = DAT_8c263764;
  do {
    iVar1 = (int)*ar4_00;
    if (iVar1 == 1) {
      iVar1 = FUN_8c263702(ar4_00,ar5,ar6,ar7);
    }
    ar4_00 = ar4_00 + 100;
  } while (ar4_00 < pcVar2);
  return iVar1;
}



/* FUN_8c263726 @ 8c263726 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c263726(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r13;
  char *pcVar2;
  
  pcVar2 = ar4 + unaff_r13;
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c263702(ar4,ar5,ar6,ar7);
    }
    ar4 = ar4 + 100;
  } while (ar4 < pcVar2);
  return iVar1;
}



/* FUN_8c263746 @ 8c263746 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c263746(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 1);
}



/* FUN_8c263768 @ 8c263768 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263768(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c2634dc(ar4,ar5,ar6,ar7);
  *ar5 = iVar1 - *(int *)(ar4 + 0xc);
  return 1;
}



/* FUN_8c263798 @ 8c263798 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263798(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x1c) = ar5;
  *(undefined4 *)(ar4 + 0x18) = ar6;
  return 1;
}



/* FUN_8c2637ae @ 8c2637ae callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2637ae(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c263838)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  *ar5 = uVar1;
  return uVar1;
}



/* FUN_8c2637ca @ 8c2637ca callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2637ca(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 auStack_10 [4];
  
  uVar1 = (*(code *)PTR_FUN_8c26383c)(ar4,auStack_10,ar6,ar7);
  *ar5 = auStack_10[0];
  return uVar1;
}



/* FUN_8c2637e8 @ 8c2637e8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c26380a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2637e8(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  int iStack_c;
  
  uVar1 = (*(code *)PTR_FUN_8c26383c)(ar4,auStack_10,ar6,ar7);
  iStack_c = iStack_c + DAT_8c263834;
  if (iStack_c < 0) {
    iStack_c = iStack_c + DAT_8c263834;
  }
  *ar5 = iStack_c >> 0xb;
  return uVar1;
}



/* FUN_8c263816 @ 8c263816 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263816(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  uVar1 = (*(code *)PTR_FUN_8c26383c)(ar4,auStack_10,ar6,ar7);
  *ar5 = uStack_c;
  return uVar1;
}



/* FUN_8c263840 @ 8c263840 callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c263986) */
/* WARNING: Removing unreachable block (ram,0x8c263996) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c263840(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int a6;
  uint uVar8;
  undefined1 *ar4_00;
  code *pcVar10;
  double dVar9;
  undefined2 uVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar8 = ar5 + 0x1fU & 0xffffffe0;
  iVar7 = ar6 - (uVar8 - ar5);
  iVar4 = 0;
  do {
    if ((&DAT_8c277fd0)[iVar4 * 0x94] == '\0') break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  if (iVar4 != 8) {
    iVar4 = iVar4 * 0x94;
    ar4_00 = &DAT_8c277fd0 + iVar4;
    memset(ar4_00,0,0x94,ar7);
    *(char *)(iVar4 + -0x73d8802d) = (char)ar4;
    *(uint *)(iVar4 + -0x73d88010) = ar4 * 0x4040 + uVar8;
    *(uint *)(iVar4 + -0x73d8800c) = (iVar7 + ar4 * -0x4040) - 0x24U & 0xfffff800;
    *(undefined4 *)(iVar4 + -0x73d88008) = 0x24;
    *(uint *)(iVar4 + -0x73d88004) = uVar8;
    *(undefined4 *)(iVar4 + -0x73d88000) = 0x2000;
    *(undefined4 *)(iVar4 + -0x73d87ffc) = 0x2020;
    a6 = *(int *)(iVar4 + -0x73d88008);
    iVar6 = *(int *)(iVar4 + -0x73d8800c);
    iVar1 = FUN_8c26b564(*(undefined4 *)(iVar4 + -0x73d88010),iVar6,a6,ar7);
    *(int *)(iVar4 + -0x73d88020) = iVar1;
    *(int *)(iVar4 + -0x73d8801c) = iVar1;
    if (iVar1 != 0) {
      iVar1 = 0;
      if (0 < ar4) {
        do {
          iVar7 = iVar1 * 4;
          puVar3 = (undefined4 *)(iVar7 + iVar4 + -0x73d88018);
          a6 = (*(int *)(iVar4 + -0x73d87ffc) - *(int *)(iVar4 + -0x73d88000)) * 2;
          iVar6 = *(int *)(iVar4 + -0x73d88000) << 1;
          uVar2 = FUN_8c26b564(*(int *)(iVar4 + -0x73d87ffc) * iVar1 * 2 +
                               *(int *)(iVar4 + -0x73d88004),iVar6,a6,ar7);
          *puVar3 = uVar2;
          if (*(int *)(iVar4 + -0x73d88018 + iVar7) == 0) goto override_prt_8c26394e_7a4d7f16;
          iVar1 = iVar1 + 1;
        } while (iVar1 < ar4);
      }
      a6 = iVar4 + -0x73d88018;
      iVar6 = ar4;
      iVar1 = FUN_8c262b04(*(undefined4 *)(iVar4 + -0x73d8801c),ar4,a6,ar7);
      *(int *)(iVar4 + -0x73d8802c) = iVar1;
      if (iVar1 != 0) {
        iVar6 = ar4;
        iVar1 = s_E1201_mwRnaCreate_Illigal_pa_268b7a(iVar4 + -0x73d88018,ar4,a6,ar7);
        *(int *)(iVar4 + -0x73d88024) = iVar1;
        if (iVar1 != 0) {
          *(undefined4 *)(iVar4 + -0x73d87ff8) = 0x3c;
          iVar7 = *(int *)(iVar4 + -0x73d8800c);
          if (iVar7 < 0) {
            iVar7 = iVar7 + 0x7ff;
          }
          iVar6 = 0;
          *(short *)(iVar4 + -0x73d87ff4) = (short)(iVar7 >> 0xb);
          if (cVar13 == '\0') {
            pcVar10 = (code *)0x3f59999a;
          }
          else {
            pcVar10 = FUN_8c2629b2;
          }
          dVar9 = (double)CONCAT44(pcVar10,(float)(int)*(short *)(iVar4 + -0x73d87ff4));
          if (cVar12 == '\0') {
            uVar11 = (undefined2)(int)((float)(int)*(short *)(iVar4 + -0x73d87ff4) * (float)pcVar10)
            ;
          }
          else {
            uVar11 = (undefined2)(int)(dVar9 * dVar9);
          }
          *(undefined2 *)(iVar4 + -0x73d87ff2) = uVar11;
          *(undefined2 *)(iVar4 + -0x73d87ff0) = 0;
          puVar5 = (undefined2 *)(iVar4 + -0x73d87fee);
          if (0 < ar4) {
            do {
              iVar6 = iVar6 + 1;
              *puVar5 = 0xff80;
              puVar5 = puVar5 + 1;
            } while (iVar6 < ar4);
          }
          *(undefined1 *)(iVar4 + -0x73d87fc4) = 1;
          *(undefined4 *)(iVar4 + -0x73d87fdc) = 0;
          *(undefined4 *)(iVar4 + -0x73d87fd8) = 0;
          *(undefined4 *)(iVar4 + -0x73d87fd4) = 0;
          *(undefined2 *)(iVar4 + -0x73d87fd0) = 0;
          *(undefined4 *)(iVar4 + -0x73d87fcc) = 0;
          *(undefined2 *)(iVar4 + -0x73d87fc8) = 0;
          *(undefined2 *)(iVar4 + -0x73d87fc6) = 0;
          *(undefined1 *)(iVar4 + -0x73d87fc3) = 1;
          *(undefined1 *)(iVar4 + -0x73d87fbe) = 0;
          *(undefined4 *)(iVar4 + -0x73d87fa8) = 0;
          *ar4_00 = 1;
          return ar4_00;
        }
      }
    }
override_prt_8c26394e_7a4d7f16:
    FUN_8c2639fa(ar4_00,iVar6,a6,ar7,iVar7);
  }
  return 0;
}



/* FUN_8c2639fa @ 8c2639fa callers=2 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c2639fa(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar3;
  int iVar4;
  int *in_stack_ffffffe8;
  
  if (ar4 != (undefined1 *)0x0) {
    puVar2 = ar4;
    FUN_8c263c64(ar4,ar5,ar6,ar7);
    if (*(int *)(ar4 + 0xc) != 0) {
      puVar2 = *(undefined1 **)(ar4 + 0xc);
      FUN_8c2629b2(puVar2,ar5,ar6,ar7);
    }
    if (*(int *)(ar4 + 4) != 0) {
      puVar2 = *(undefined1 **)(ar4 + 4);
      FUN_8c262c04(puVar2,ar5,ar6,ar7,in_stack_ffffffe8);
    }
    if (*(int *)(ar4 + 8) != 0) {
      puVar2 = *(undefined1 **)(ar4 + 8);
      FUN_8c263446(puVar2,ar5,ar6,ar7,in_stack_ffffffe8);
    }
    FUN_8c260ca0(puVar2,ar5,ar6,ar7,in_stack_ffffffe8);
    if (*(int *)(ar4 + 0x10) != 0) {
      in_stack_ffffffe8 = *(int **)(ar4 + 0x10);
      (**(code **)(*in_stack_ffffffe8 + 0xc))(in_stack_ffffffe8,ar5,ar6,ar7);
    }
    for (iVar3 = 0; iVar3 < (char)ar4[3]; iVar3 = iVar3 + 1) {
      iVar4 = iVar3 * 4;
      if (*(int *)(ar4 + iVar4 + 0x18) != 0) {
        (**(code **)(**(int **)(ar4 + iVar4 + 0x18) + 0xc))
                  (*(int **)(ar4 + iVar4 + 0x18),ar5,ar6,ar7);
      }
      if (*(int *)(ar4 + iVar4 + 0x78) != 0) {
        (**(code **)(**(int **)(ar4 + iVar4 + 0x78) + 0xc))
                  (*(int **)(ar4 + iVar4 + 0x78),ar5,ar6,ar7);
      }
      if (*(int *)(ar4 + iVar4 + 0x80) != 0) {
        (**(code **)(**(int **)(ar4 + iVar4 + 0x80) + 0xc))
                  (*(int **)(ar4 + iVar4 + 0x80),ar5,ar6,ar7);
      }
    }
    if (*(int *)(ar4 + 0x74) != 0) {
      FUN_8c26145e(*(undefined4 *)(ar4 + 0x74),ar5,ar6,ar7,in_stack_ffffffe8);
    }
    ar5_00 = 0;
    ar6_00 = 0x94;
    puVar2 = ar4;
    uVar1 = memset(ar4,0,0x94,ar7);
    *ar4 = 0;
    uVar1 = FUN_8c260cc8(puVar2,ar5_00,ar6_00,ar7,uVar1);
    return uVar1;
  }
  return ain0;
}



/* FUN_8c263b0c @ 8c263b0c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c263b0c(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  char *pcVar2;
  undefined4 in_PR;
  
  pcVar2 = ar4 + unaff_r12;
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c2639fa(ar4,ar5,ar6,ar7,in_PR);
    }
    ar4 = ar4 + 0x94;
  } while (ar4 < pcVar2);
  return iVar1;
}



/* FUN_8c263b34 @ 8c263b34 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263b34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  int *a4;
  int iVar1;
  undefined4 uVar2;
  
  ar5_00 = ar5;
  for (iVar1 = 0; iVar1 < *(char *)(ar4 + 3); iVar1 = iVar1 + 1) {
    a4 = *(int **)(iVar1 * 4 + ar4 + 0x18);
    (**(code **)(*a4 + 0x14))(a4,ar5,ar6,ar7);
  }
  uVar2 = ar5_00;
  FUN_8c262c3c(*(undefined4 *)(ar4 + 4),ar5_00,ar6,ar7,ar5_00);
  *(undefined4 *)(ar4 + 0x14) = uVar2;
  FUN_8c262c50(*(undefined4 *)(ar4 + 4),ar5_00,ar6,ar7);
  *(undefined1 *)(ar4 + 1) = 1;
  *(undefined4 *)(ar4 + 0x4c) = 0;
  *(undefined1 *)(ar4 + 0x71) = 0;
  *(undefined4 *)(ar4 + 0x8c) = 0x7fffffff;
  *(undefined4 *)(ar4 + 0x90) = 0xffffffff;
  return 0x90;
}



/* FUN_8c263bc0 @ 8c263bc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263bc0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ain0;
  undefined4 ar5_00;
  int ar6_00;
  
  ar6_00 = (int)*(short *)(ar4 + 0x3c) << 0xb;
  ain0 = FUN_8c263798(*(undefined4 *)(ar4 + 8),(int)*(short *)(ar4 + 0x3e) << 0xb,ar6_00,ar7);
  ar5_00 = 0x19;
  FUN_8c26357a(*(undefined4 *)(ar4 + 8),0x19,ar6_00,ar7,ain0);
  FUN_8c26346e(*(undefined4 *)(ar4 + 8),ar5_00,ar6_00,ar7);
  FUN_8c263b34(ar4,*(undefined4 *)(ar4 + 0x10),ar6_00,ar7);
  *(undefined1 *)(ar4 + 2) = 0;
  return 0;
}



/* FUN_8c263bc8 @ 8c263bc8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263bc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  code *in_r3;
  undefined4 ar5_00;
  int ar6_00;
  int unaff_r14;
  undefined4 in_PR;
  
  ar6_00 = (int)*(short *)(ain0 + unaff_r14) << 0xb;
  (*in_r3)(*(undefined4 *)(unaff_r14 + 8),(int)*(short *)(unaff_r14 + 0x3e) << 0xb,ar6_00,ar7);
  ar5_00 = 0x19;
  FUN_8c26357a(*(undefined4 *)(unaff_r14 + 8),0x19,ar6_00,ar7,in_PR);
  FUN_8c26346e(*(undefined4 *)(unaff_r14 + 8),ar5_00,ar6_00,ar7);
  FUN_8c263b34(unaff_r14,*(undefined4 *)(unaff_r14 + 0x10),ar6_00,ar7);
  *(undefined1 *)(unaff_r14 + 2) = 0;
  return 0;
}



/* FUN_8c263bfe @ 8c263bfe callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263bfe(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *a4;
  int iVar3;
  
  iVar3 = ar4;
  uVar1 = ar5;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  FUN_8c260ca0(iVar3,ar5,ar6,ar7,uVar1);
  for (iVar3 = 0; iVar3 < *(char *)(ar4 + 3); iVar3 = iVar3 + 1) {
    a4 = *(int **)(iVar3 * 4 + ar4 + 0x18);
    (**(code **)(*a4 + 0x14))(a4,ar5,ar6,ar7);
  }
  uVar2 = uVar1;
  FUN_8c262c3c(*(undefined4 *)(ar4 + 4),uVar1,ar6,ar7,uVar1);
  *(undefined4 *)(ar4 + 0x14) = uVar2;
  uVar2 = *(undefined4 *)(ar4 + 4);
  FUN_8c262c50(uVar2,uVar1,ar6,ar7);
  *(undefined1 *)(ar4 + 1) = 1;
  *(undefined1 *)(ar4 + 2) = 3;
  *(undefined4 *)(ar4 + 0x4c) = 0;
  uVar1 = FUN_8c260cc8(uVar2,uVar1,ar6,ar7,0x4c);
  return uVar1;
}



/* FUN_8c263c64 @ 8c263c64 callers=3 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263c64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar4_00;
  undefined4 uVar1;
  undefined4 in_stack_fffffff0;
  
  FUN_8c260ca0(ar4,ar5,ar6,ar7,in_stack_fffffff0);
  s_E1205_Illigal_parameter_MWRN_2690dc(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  uVar1 = 0;
  s_E1205_Illigal_parameter_MWRN_2691ba(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  ar4_00 = *(int **)(ar4 + 4);
  FUN_8c262c66(ar4_00,uVar1,ar6,ar7);
  if (*(int *)(ar4 + 8) != 0) {
    FUN_8c263498(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7);
    FUN_8c263446(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7,in_stack_fffffff0);
    ar4_00 = *(int **)(ar4 + 0x14);
    (**(code **)(*ar4_00 + 0x14))(ar4_00,uVar1,ar6,ar7);
    *(undefined4 *)(ar4 + 8) = 0;
  }
  if ((*(char *)(ar4 + 2) == '\x02') && (*(int *)(ar4 + 0x14) != 0)) {
    ar4_00 = *(int **)(ar4 + 0x14);
    (**(code **)(*ar4_00 + 0xc))(ar4_00,uVar1,ar6,ar7);
  }
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined1 *)(ar4 + 1) = 0;
  uVar1 = FUN_8c260cc8(ar4_00,uVar1,ar6,ar7,0);
  return uVar1;
}



/* FUN_8c263cd4 @ 8c263cd4 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c263cd4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 1);
}



/* FUN_8c263cd8 @ 8c263cd8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263cd8(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *ar6_00;
  
  if ((*(char *)(ar4 + 1) == '\x03') || (*(char *)(ar4 + 1) == '\x04')) {
    s_E1205_Illigal_parameter_MWRN_2699d4(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7);
  }
  else if (*(char *)(ar4 + 1) == '\x05') {
    ar5_00 = ar5;
    ar6_00 = ar6;
    iVar1 = FUN_8c263186(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
    *ar5 = iVar1;
    uVar2 = FUN_8c26314a(*(undefined4 *)(ar4 + 4),ar5_00,ar6_00,ar7);
    *ar6 = uVar2;
    uVar2 = FUN_8c263162(*(undefined4 *)(ar4 + 4),ar5_00,ar6_00,ar7);
    iVar1 = libgcc_divide_helper_010468(0x10,uVar2);
    *ar5 = *ar5 * iVar1;
  }
  else {
    *ar5 = 0;
    *ar6 = 1;
  }
  *ar5 = *ar5 + *(int *)(ar4 + 0x88);
  return 0x88;
}



/* FUN_8c263ce4 @ 8c263ce4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263ce4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_r12;
  int *unaff_r13;
  int unaff_r14;
  
  if ((*(char *)(unaff_r14 + 1) == '\x03') || (*(char *)(unaff_r14 + 1) == '\x04')) {
    s_E1205_Illigal_parameter_MWRN_2699d4(*(undefined4 *)(unaff_r14 + 0xc),unaff_r13,unaff_r12,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x05') {
    iVar1 = FUN_8c263186(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7);
    *unaff_r13 = iVar1;
    uVar2 = FUN_8c26314a(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7);
    *unaff_r12 = uVar2;
    uVar2 = FUN_8c263162(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7);
    iVar1 = libgcc_divide_helper_010468(0x10,uVar2);
    *unaff_r13 = *unaff_r13 * iVar1;
  }
  else {
    *unaff_r13 = 0;
    *unaff_r12 = 1;
  }
  *unaff_r13 = *unaff_r13 + *(int *)(unaff_r14 + 0x88);
  return 0x88;
}



/* FUN_8c263d90 @ 8c263d90 callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c263da4) */
/* WARNING: Unknown calling convention */

int FUN_8c263d90(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  int iStack_c;
  int aiStack_8 [2];
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c263cd8(ar4,&iStack_c,aiStack_8,ar7);
  if (cVar4 == '\0') {
    fVar1 = (float)iStack_c / (float)aiStack_8[0];
  }
  else {
    fVar1 = SUB84((double)aiStack_8[0] / (double)aiStack_8[0],0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x42c80000,fVar1);
  }
  else {
    dVar2 = -3.874703964122394e-250;
  }
  if (cVar4 == '\0') {
    iVar3 = (int)(SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar2 * dVar2);
  }
  return iVar3;
}



/* FUN_8c263dd8 @ 8c263dd8 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263dd8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ('\x01' < *(char *)(ar4 + 1)) {
    uVar1 = (*(code *)PTR_FUN_8c263eb4)(*(undefined4 *)(ar4 + 4));
    return uVar1;
  }
  return 0;
}



/* FUN_8c263df6 @ 8c263df6 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263df6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ('\x01' < *(char *)(ar4 + 1)) {
    uVar1 = (*(code *)PTR_FUN_8c263eb8)(*(undefined4 *)(ar4 + 4));
    return uVar1;
  }
  return 0;
}



/* FUN_8c263e50 @ 8c263e50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263e50(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  *(short *)(ar5 * 2 + ar4 + 0x42) = (short)ar6;
  if (ar5 < *(char *)(ar4 + 3)) {
    uVar1 = (*(code *)&SUB_8c262a12)(*(undefined4 *)(ar4 + 0xc));
    return uVar1;
  }
  uVar1 = FUN_8c25ece6(ar4,ar5,ar6,ar7,s_E8101208__parameter_error__ADXT__8c273038,in_PR);
  return uVar1;
}



/* s_E8101208_parameter_error_ADX_263e5c @ 8c263e5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E8101208_parameter_error_ADX_263e5c(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int in_r2;
  int in_r3;
  int unaff_r14;
  undefined4 in_PR;
  
  *(short *)(in_r3 + in_r2) = (short)ar6;
  if (ar5 < *(char *)(unaff_r14 + 3)) {
    uVar1 = (*(code *)&SUB_8c262a12)(*(undefined4 *)(unaff_r14 + 0xc));
    return uVar1;
  }
  uVar1 = FUN_8c25ece6(ar4,ar5,ar6,ar7,s_E8101208__parameter_error__ADXT__8c273038,in_PR);
  return uVar1;
}



/* FUN_8c263e8e @ 8c263e8e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263e8e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined2 *)(ar4 + 0x40) = (undefined2)ar5;
  uVar1 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_269c42_8c263ed0)(*(undefined4 *)(ar4 + 0xc));
  return uVar1;
}



/* FUN_8c263f1a @ 8c263f1a callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c263f46) */
/* WARNING: Unknown calling convention */

int FUN_8c263f1a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(ar4 + 0x14) == 0) {
    return 0;
  }
  iVar1 = (**(code **)(**(int **)(ar4 + 0x14) + 0x24))(*(int **)(ar4 + 0x14),1,ar6,ar7);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7ff;
  }
  return iVar1 >> 0xb;
}



/* FUN_8c263f54 @ 8c263f54 callers=0 callees=3 */

/* WARNING: Removing unreachable block (ram,0x8c263f8e) */
/* WARNING: Removing unreachable block (ram,0x8c263fa8) */
/* WARNING: Unknown calling convention */

int FUN_8c263f54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *a4;
  undefined4 a5;
  undefined1 *puVar3;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = auStack_8;
  }
  else {
    puVar3 = auStack_c;
  }
  *(undefined4 *)(puVar3 + -4) = in_PR;
  iVar1 = FUN_8c263cd4(ar4,ar5,ar6,ar7);
  if ((1 < iVar1) && (*(int *)(ar4 + 0x14) != 0)) {
    a4 = *(int **)(ar4 + 0x14);
    a5 = 1;
    *(int **)(puVar3 + -0xc) = a4;
    uVar2 = (**(code **)(*a4 + 0x24))(a4,1,ar6,ar7);
    *(undefined4 *)(puVar3 + -0xc) = uVar2;
    uVar2 = FUN_8c263df6(ar4,a5,ar6,ar7);
    *(undefined4 *)(puVar3 + -8) = uVar2;
    FUN_8c263dd8(ar4,a5,ar6,ar7);
    iVar1 = libgcc_divide_helper_010468(*(undefined4 *)(puVar3 + -0xc),*(int *)(puVar3 + -8) * 0x12)
    ;
    iVar1 = iVar1 << 5;
  }
  return iVar1;
}



/* FUN_8c263fba @ 8c263fba callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263fba(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(ar4 + 0x14) != 0) {
    iVar1 = (**(code **)(**(int **)(ar4 + 0x14) + 0x24))(*(int **)(ar4 + 0x14),1,ar6,ar7);
    if ((int)*(short *)(ar4 + 0x3e) << 0xb <= iVar1) {
      return 1;
    }
  }
  return 0;
}



/* FUN_8c263ffa @ 8c263ffa callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263ffa(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x6d) = (undefined1)ar5;
  return 0x6d;
}



/* FUN_8c264010 @ 8c264010 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c264010(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *ar4_01;
  char *a4;
  
  ar4_00 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  FUN_8c2630cc(ar4,ar5,ar6,ar7);
  uVar1 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  uVar3 = ar4_00;
  uVar2 = uVar1;
  DAT_8c27848c = FUN_8c1f88f0(ar4_00,uVar1,ar6,ar7);
  thunk_FUN_8c2695e4(uVar3,uVar2,ar6,ar7);
  uVar2 = sh4_tmu_1f88e6(uVar3,uVar2,ar6,ar7);
  uVar3 = uVar2;
  DAT_8c278490 = FUN_8c1f88f0(uVar1,uVar2,ar6,ar7);
  FUN_8c262524(uVar1,uVar3,ar6,ar7);
  uVar1 = sh4_tmu_1f88e6(uVar1,uVar3,ar6,ar7);
  uVar3 = uVar1;
  DAT_8c278494 = FUN_8c1f88f0(uVar2,uVar1,ar6,ar7);
  FUN_8c26371e(uVar2,uVar3,ar6,ar7);
  uVar2 = sh4_tmu_1f88e6(uVar2,uVar3,ar6,ar7);
  uVar3 = uVar2;
  DAT_8c278498 = FUN_8c1f88f0(uVar1,uVar2,ar6,ar7);
  a4 = &DAT_8c277fd0;
  do {
    ar4_01 = a4;
    if (*a4 == '\x01') {
      FUN_8c264e84(a4,uVar3,ar6,ar7);
    }
    a4 = a4 + 0x94;
  } while (a4 < &DAT_8c278470);
  uVar3 = sh4_tmu_1f88e6(ar4_01,uVar3,ar6,ar7);
  DAT_8c27849c = FUN_8c1f88f0(uVar2,uVar3,ar6,ar7);
  DAT_8c278488 = FUN_8c1f88f0(ar4_00,uVar3,ar6,ar7);
  return DAT_8c278488;
}



/* FUN_8c264104 @ 8c264104 callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c264104(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c263cd4(ar4,ar5,ar6,ar7);
  *(char *)(ar4 + 0x72) = (char)ar5;
  if ((iVar1 != 3) && (iVar1 != 4)) {
    return iVar1;
  }
  if (ar5 == 1) {
    (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_2691ba_8c264184)
              (*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
    iVar1 = DAT_8c264188;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    uVar2 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_26973a_8c26418c)
                      (*(undefined4 *)(ar4 + 0xc));
    return uVar2;
  }
  uVar2 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_2691ba_8c2642d4)
                    (*(undefined4 *)(ar4 + 0xc),1);
  return uVar2;
}



/* thunk_FUN_8c25ecdc @ 8c2641e2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c25ecdc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c2642f0)();
  return uVar1;
}



/* FUN_8c2641ee @ 8c2641ee callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2641ee(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar4_00;
  
  if (*(char *)(ar4 + 0x72) == '\0') {
    return 0;
  }
  ar4_00 = *(undefined4 *)(ar4 + 0xc);
  uVar1 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_269816_8c2642f4)(ar4_00,ar5,ar6,ar7);
  FUN_8c264010(ar4_00,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c264222 @ 8c264222 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c264236) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c264222(ushort *ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  short asStack_28 [2];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [8];
  int *piStack_8;
  
  if (((1 < ar5) &&
      (((int)(uint)*ar4 >> 8 | (uint)*ar4 << 8 & DAT_8c2642f8 & 0xffff) == DAT_8c2642fc)) &&
     (piStack_8 = ar6,
     iVar1 = (*(code *)PTR_FUN_8c264300)
                       (ar4,ar5,asStack_28,auStack_24,auStack_20,auStack_1c,auStack_18,auStack_14,
                        auStack_10), -1 < iVar1)) {
    *piStack_8 = (int)asStack_28[0];
    return 1;
  }
  return 0;
}



/* FUN_8c264308 @ 8c264308 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c264328) */
/* WARNING: Unknown calling convention */

int FUN_8c264308(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *a7;
  undefined1 *a7_00;
  int d;
  int *a4;
  int iVar3;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  a7 = auStack_28;
  a7_00 = auStack_28;
  a4 = *(int **)(ar4 + 0x14);
  if (ar6 < 0) {
    ar6 = ar6 + 0x1f;
  }
  d = ar5 * 0x12;
  iVar3 = (ar6 >> 5) * d;
  puVar2 = &uStack_20;
  (**(code **)(*a4 + 0x18))(a4,0,iVar3,puVar2);
  iVar1 = libgcc_divide_helper_010468(uStack_1c,d);
  iVar1 = iVar1 * d;
  memset(uStack_20,0,iVar1,puVar2);
  FUN_8c26be30(&uStack_20,iVar1,&uStack_20,auStack_28);
  (**(code **)(*a4 + 0x20))(a4,1,&uStack_20,a7);
  (**(code **)(*a4 + 0x1c))(a4,0,auStack_28,a7);
  puVar2 = &uStack_20;
  (**(code **)(*a4 + 0x18))(a4,0,iVar3 - iVar1,puVar2);
  iVar3 = libgcc_divide_helper_010468(uStack_1c,d);
  iVar3 = iVar3 * d;
  memset(uStack_20,0,iVar3,puVar2);
  FUN_8c26be30(&uStack_20,iVar3,&uStack_20,auStack_28);
  (**(code **)(*a4 + 0x20))(a4,1,&uStack_20,a7_00);
  (**(code **)(*a4 + 0x1c))(a4,0,auStack_28,a7_00);
  iVar1 = libgcc_divide_helper_010468(iVar1 + iVar3,d);
  return iVar1 << 5;
}



/* s_E8101202_can_t_open_d_d_ADXT_26440a @ 8c264408 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E8101202_can_t_open_d_d_ADXT_26440a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar7_00;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = ar4;
  uStack_10 = ar5;
  uStack_c = ar6;
  (*(code *)PTR_FUN_8c2645d0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c2645d4)(iVar1,ar5,ar6,ar7);
  ar7_00 = &uStack_14;
  (*(code *)PTR_FUN_8c2645d8)(uStack_10,uStack_c,&iStack_18,ar7_00);
  uVar2 = *(undefined4 *)(ar4 + 0x10);
  iVar1 = (*(code *)PTR_s_E8101212_can_t_open_fad_d_ns_26338a_8c2645dc)
                    (iStack_18,uStack_14,uVar2,ar7_00);
  *(int *)(ar4 + 8) = iVar1;
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c2645e0)(iStack_18,uStack_14,uVar2,ar7_00);
    (*(code *)PTR_FUN_8c2645e8)
              (iStack_18,uStack_14,uVar2,ar7_00,PTR_s_E8101202__can_t_open__d___d__ADX_8c2645e4,
               uStack_10);
  }
  else {
    (*(code *)PTR_FUN_8c2645ec)(ar4,uStack_14,uVar2,ar7_00);
    iStack_18 = ar4;
  }
  uVar2 = (*(code *)PTR_FUN_8c2645e0)(iStack_18,uStack_14,uVar2,ar7_00);
  return uVar2;
}



/* s_E8101205_can_t_open_s_ADXT_S_26446e @ 8c26446c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 s_E8101205_can_t_open_s_ADXT_S_26446e(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ain0;
  int iVar2;
  int ain0_00;
  undefined4 uVar3;
  
  iVar2 = ar4;
  ain0_00 = ar5;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  FUN_8c260ca0(iVar2,ar5,ar6,ar7,ain0_00);
  uVar3 = *(undefined4 *)(ar4 + 0x10);
  iVar2 = ain0_00;
  iVar1 = s_E8101210_can_t_open_s_ADXSTM_2632ee(ain0_00,uVar3,ar6,ar7);
  *(int *)(ar4 + 8) = iVar1;
  if (iVar1 == 0) {
    FUN_8c260cc8(ain0_00,uVar3,ar6,ar7,iVar2);
    ain0 = FUN_8c25ece6(ain0_00,uVar3,ar6,ar7,"E8101205: can\'t open \'%s\' (ADXT_StartFname)",iVar2
                       );
    ar4 = ain0_00;
  }
  else {
    ain0 = FUN_8c263bc0(ar4,uVar3,ar6,ar7);
  }
  uVar3 = FUN_8c260cc8(ar4,uVar3,ar6,ar7,ain0);
  return uVar3;
}



/* s_E8101207_can_t_create_sj_ADX_2644ba @ 8c2644b8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 s_E8101207_can_t_create_sj_ADX_2644ba(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 ain0;
  undefined4 uVar1;
  int iVar2;
  int ain0_00;
  
  iVar2 = ar4;
  uVar1 = ar6;
  ain0_00 = ar5;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  FUN_8c260ca0(iVar2,ar5,uVar1,ar7,ain0_00);
  iVar2 = ain0_00;
  ar5_00 = FUN_8c26b250(ain0_00,ar6,uVar1,ar7);
  if (ar5_00 == 0) {
    FUN_8c260cc8(ain0_00,0,uVar1,ar7,iVar2);
    ain0 = FUN_8c25ece6(ain0_00,ar5_00,uVar1,ar7,"E8101207: can\'t create sj (ADXT_StartMem)\n",
                        iVar2);
  }
  else {
    ain0_00 = ar4;
    FUN_8c263b34(ar4,ar5_00,uVar1,ar7);
    ain0 = 2;
    *(undefined1 *)(ar4 + 2) = 2;
  }
  uVar1 = FUN_8c260cc8(ain0_00,ar5_00,uVar1,ar7,ain0);
  return uVar1;
}



/* s_E8101207_can_t_create_sj_ADX_26450a @ 8c264504 callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c26452a) */
/* WARNING: Removing unreachable block (ram,0x8c26456c) */
/* WARNING: Unknown calling convention */

undefined4 s_E8101207_can_t_create_sj_ADX_26450a(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int ar6_00;
  int ain0;
  
  iVar3 = ar5;
  ar6_00 = ar6;
  ain0 = ar5;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  uVar2 = *(uint *)(ar5 + 4);
  if ((ar6 < (int)(uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
                  )) && (-1 < ar6)) {
    FUN_8c260ca0(uVar2,iVar3,ar6_00,ar7,ain0);
    uVar2 = *(uint *)((ar6 + 1) * 8 + ar5);
    iVar3 = (uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
            ain0;
    ar5_00 = FUN_8c26b250(iVar3,0x40000000,ar6_00,ar7);
    if (ar5_00 == 0) {
      FUN_8c260cc8(iVar3,0,ar6_00,ar7,ain0);
      uVar1 = FUN_8c25ece6(iVar3,ar5_00,ar6_00,ar7,"E8101207: can\'t create sj (ADXT_StartMemIdx)",
                           ain0);
    }
    else {
      iVar3 = ar4;
      FUN_8c263b34(ar4,ar5_00,ar6_00,ar7);
      uVar1 = 2;
      *(undefined1 *)(ar4 + 2) = 2;
    }
    uVar1 = FUN_8c260cc8(iVar3,ar5_00,ar6_00,ar7,uVar1);
    return uVar1;
  }
  return 0xff00;
}



/* s_E8101201_not_enough_data_adx_26461e @ 8c264614 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E8101201_not_enough_data_adx_26461e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 uVar1;
  int s4;
  int *ar4_00;
  undefined4 ar5_01;
  undefined4 a6;
  undefined1 *a6_00;
  undefined1 *puVar2;
  undefined4 ar4_01;
  int *a4;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  a4 = *(int **)(ar4 + 0x14);
  ar4_01 = *(undefined4 *)(ar4 + 4);
  ar5_00 = FUN_8c2631b6(ar4_01,ar5,ar6,ar7);
  uVar1 = FUN_8c2631c2(ar4_01,ar5,ar6,ar7);
  s4 = FUN_8c2631ce(ar4_01,ar5,ar6,ar7);
  FUN_8c2631da(ar4_01,ar5,ar6,ar7);
  if ((*(int *)(ar4 + 8) == 0) && (*(char *)(ar4 + 0x6c) == '\0')) {
    uVar1 = FUN_8c26311e(*(undefined4 *)(ar4 + 4),0xffffffff,ar6,ar7,s4);
  }
  else {
    a6 = *(undefined4 *)(ar4 + 0x50);
    ar5_01 = 1;
    puVar2 = auStack_20;
    ar4_00 = a4;
    (**(code **)(*a4 + 0x18))(a4,1,a6,puVar2);
    if (iStack_1c < *(int *)(ar4 + 0x50)) {
      FUN_8c25ece6(ar4_00,ar5_01,a6,puVar2,"E8101201: not enough data (adxt_trap_entry)\n",s4);
    }
    a6_00 = auStack_20;
    (**(code **)(*a4 + 0x20))(a4,0,a6_00,puVar2);
    FUN_8c263126(ar4_01,0,a6_00,puVar2);
    *(int *)(ar4 + 0x90) = s4 - ar5_00;
    FUN_8c26311e(ar4_01,s4 - ar5_00,a6_00,puVar2,s4);
    FUN_8c263132(ar4_01,uVar1,a6_00,puVar2);
    FUN_8c263102(ar4_01,ar5_00,a6_00,puVar2,s4);
    if (*(char *)(ar4 + 2) == '\x02') {
      (**(code **)(*a4 + 0x14))(a4,ar5_00,a6_00,puVar2);
      puVar2 = auStack_20;
      (**(code **)(*a4 + 0x18))(a4,1,uVar1,puVar2);
      (**(code **)(*a4 + 0x20))(a4,0,auStack_20,puVar2);
    }
    uVar1 = 0x4c;
    *(int *)(ar4 + 0x4c) = *(int *)(ar4 + 0x4c) + 1;
  }
  return uVar1;
}



/* FUN_8c2646fe @ 8c2646fe callers=0 callees=2 */

/* WARNING: Removing unreachable block (ram,0x8c26473e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2646fe(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ain0;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 8);
  ain0 = FUN_8c2631c2(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  if (*(char *)(ar4 + 0x6c) != '\0') {
    if (ain0 < 0) {
      ain0 = ain0 + 0x7ff;
    }
    uVar1 = FUN_8c263534(uVar1,ain0 >> 0xb,ar6,ar7);
    return uVar1;
  }
  uVar1 = FUN_8c26311e(*(undefined4 *)(ar4 + 4),0xffffffff,ar6,ar7,ain0);
  uVar1 = FUN_8c26357a(*(undefined4 *)(ar4 + 8),0x7fffffff,ar6,ar7,uVar1);
  return uVar1;
}



/* FUN_8c264784 @ 8c264784 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c264784(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*(code *)PTR_FUN_8c264870)(*(undefined4 *)(ar4 + 4));
  puVar1 = PTR_SUB_8c264874;
  if (iVar2 == 1) {
    if (*(short *)(ar4 + 0x42) == -0x80) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(short *)(ar4 + 0x42);
    }
    uVar3 = (*(code *)PTR_SUB_8c264874)(*(undefined4 *)(ar4 + 0xc),0,iVar2);
  }
  else {
    if (*(short *)(ar4 + 0x42) == -0x80) {
      iVar2 = -0xf;
    }
    else {
      iVar2 = (int)*(short *)(ar4 + 0x42);
    }
    (*(code *)PTR_SUB_8c264874)(*(undefined4 *)(ar4 + 0xc),0,iVar2);
    if (*(short *)(ar4 + 0x44) == -0x80) {
      iVar2 = 0xf;
    }
    else {
      iVar2 = (int)*(short *)(ar4 + 0x44);
    }
    uVar3 = (*(code *)puVar1)(*(undefined4 *)(ar4 + 0xc),1,iVar2);
  }
  return uVar3;
}



/* FUN_8c264788 @ 8c264788 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c264788(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r14;
  
  iVar2 = (*(code *)PTR_FUN_8c264870)(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7);
  puVar1 = PTR_SUB_8c264874;
  if (iVar2 == 1) {
    if (*(short *)(unaff_r14 + 0x42) == -0x80) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(short *)(unaff_r14 + 0x42);
    }
    uVar3 = (*(code *)PTR_SUB_8c264874)(*(undefined4 *)(unaff_r14 + 0xc),0,iVar2,ar7);
  }
  else {
    if (*(short *)(unaff_r14 + 0x42) == -0x80) {
      iVar2 = -0xf;
    }
    else {
      iVar2 = (int)*(short *)(unaff_r14 + 0x42);
    }
    (*(code *)PTR_SUB_8c264874)(*(undefined4 *)(unaff_r14 + 0xc),0,iVar2,ar7);
    if (*(short *)(unaff_r14 + 0x44) == -0x80) {
      iVar2 = 0xf;
    }
    else {
      iVar2 = (int)*(short *)(unaff_r14 + 0x44);
    }
    uVar3 = (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0xc),1,iVar2,ar7);
  }
  return uVar3;
}



/* s_E9081001_can_t_play_d_ch_dat_2647fe @ 8c2647f4 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

int s_E9081001_can_t_play_d_ch_dat_2647fe(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 ar5_00;
  undefined4 ar5_01;
  undefined4 *extraout_r3;
  code *ar5_02;
  undefined4 uVar5;
  undefined4 in_stack_ffffffe0;
  
  uVar5 = *(undefined4 *)(ar4 + 4);
  iVar1 = FUN_8c262c38(uVar5,ar5,ar6,ar7);
  if (iVar1 == 2) {
    iVar1 = FUN_8c263156(uVar5,ar5,ar6,ar7);
    if (*(char *)(ar4 + 3) < iVar1) {
      FUN_8c25ece6(iVar1,ar5,ar6,ar7,s_E9081001__can_t_play__d_ch_data___8c273180,iVar1);
      uVar5 = FUN_8c263c64(ar4,ar5,ar6,ar7);
      return uVar5;
    }
    uVar2 = FUN_8c26314a(uVar5,ar5,ar6,ar7);
    iVar1 = FUN_8c26319e(uVar5,ar5,ar6,ar7);
    if (iVar1 < 1) {
      iVar3 = libgcc_divide_helper_010468(uVar2,*(undefined4 *)(ar4 + 0x38));
      iVar3 = (int)(iVar3 * 3 + (uint)(iVar3 * 3 < 0)) >> 1;
    }
    else {
      iVar3 = libgcc_divide_helper_010468(uVar2,*(undefined4 *)(ar4 + 0x38));
      iVar3 = iVar3 * 3;
    }
    *(int *)(ar4 + 0x48) = iVar3;
    iVar3 = FUN_8c26316e(uVar5,ar5,ar6,ar7);
    iVar3 = iVar3 * 2;
    iVar4 = libgcc_divide_helper_010468(*(int *)(ar4 + 0x48) + iVar3,iVar3);
    *(int *)(ar4 + 0x48) = iVar4 * iVar3;
    ar5_02 = *(code **)(ar4 + 0x48);
    FUN_8c262c4c(uVar5,ar5_02,ar6,ar7,in_stack_ffffffe0);
    if (iVar1 < 1) {
      if (*(int *)(ar4 + 8) != 0) {
        ar5_02 = (code *)0x7fffffff;
        FUN_8c26357a(*(undefined4 *)(ar4 + 8),0x7fffffff,ar6,ar7,in_stack_ffffffe0);
      }
    }
    else {
      if (*(char *)(ar4 + 2) == '\x02') {
        *(undefined4 *)(ar4 + 0x50) = 0;
      }
      else {
        iVar1 = FUN_8c2631da(uVar5,ar5_02,ar6,ar7);
        iVar3 = libgcc_divide_helper_010614(iVar1,0x800);
        *(int *)(ar4 + 0x50) = 0x800 - iVar3;
        uVar2 = libgcc_divide_helper_010614(*(undefined4 *)(ar4 + 0x50),0x800);
        *extraout_r3 = uVar2;
        uVar2 = libgcc_divide_helper_010468(iVar1 + 0x7ff,0x800);
        *(undefined4 *)(ar4 + 0x8c) = uVar2;
        FUN_8c26357a(*(undefined4 *)(ar4 + 8),uVar2,ar6,ar7,in_stack_ffffffe0);
        ar5_02 = FUN_8c2646fe;
        ar6 = ar4;
        FUN_8c263574(*(undefined4 *)(ar4 + 8),FUN_8c2646fe,ar4,ar7,in_stack_ffffffe0);
      }
      uVar2 = FUN_8c2631ce(uVar5,ar5_02,ar6,ar7);
      *(undefined4 *)(ar4 + 0x90) = uVar2;
      FUN_8c26311e(uVar5,uVar2,ar6,ar7,in_stack_ffffffe0);
      FUN_8c263132(uVar5,0,ar6,ar7);
      FUN_8c263126(uVar5,0,ar6,ar7);
      ar5_02 = s_E8101201_not_enough_data_adx_26461e;
      ar6 = ar4;
      FUN_8c263114(uVar5,s_E8101201_not_enough_data_adx_26461e,ar4,ar7);
    }
    iVar3 = FUN_8c26314a(uVar5,ar5_02,ar6,ar7);
    uVar2 = FUN_8c263156(uVar5,ar5_02,ar6,ar7);
    ar5_00 = FUN_8c263186(uVar5,ar5_02,ar6,ar7);
    ar5_01 = FUN_8c263162(uVar5,ar5_02,ar6,ar7);
    s_E1205_Illigal_parameter_MWRN_269b92(*(undefined4 *)(ar4 + 0xc),ar5_01,ar6,ar7);
    s_E1205_Illigal_parameter_MWRN_269c06(*(undefined4 *)(ar4 + 0xc),iVar3,ar6,ar7);
    s_E1205_Illigal_parameter_MWRN_269aec(*(undefined4 *)(ar4 + 0xc),uVar2,ar6,ar7);
    noop_262a44(*(undefined4 *)(ar4 + 0xc),ar5_00,ar6,ar7,ar5_00);
    iVar1 = (int)*(short *)(ar4 + 0x40);
    s_E1205_Illigal_parameter_MWRN_269c42(*(undefined4 *)(ar4 + 0xc),iVar1,ar6,ar7);
    FUN_8c264784(ar4,iVar1,ar6,ar7);
    if (*(int *)(ar4 + 0x74) != 0) {
      FUN_8c261680(*(undefined4 *)(ar4 + 0x74),iVar3,ar6,ar7,ar5_00);
      iVar1 = iVar3;
    }
    iVar3 = FUN_8c26313e(uVar5,iVar1,ar6,ar7);
    if (iVar3 == 2) {
      uVar5 = FUN_8c2631f8(uVar5,iVar1,ar6,ar7);
      FUN_8c262a4c(*(undefined4 *)(ar4 + 0xc),uVar5,ar6,ar7);
    }
    s_E1205_Illigal_parameter_MWRN_2690dc(*(undefined4 *)(ar4 + 0xc),1,ar6,ar7);
    iVar1 = 2;
    *(undefined1 *)(ar4 + 1) = 2;
  }
  return iVar1;
}



/* FUN_8c264a42 @ 8c264a42 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c264a42(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 ar4_00;
  undefined4 *a7;
  int iVar4;
  undefined4 *puVar5;
  undefined4 ar4_01;
  int iVar6;
  int *a4;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  ar4_00 = *(undefined4 *)(ar4 + 4);
  ar4_01 = *(undefined4 *)(ar4 + 0xc);
  iVar2 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_269aa8_8c264c24)(ar4_01,ar5,ar6,ar7);
  iVar3 = (*(code *)PTR_ret_const_7fffffff_2629e8_8c264c28)(ar4_01,ar5,ar6,ar7);
  if (((*(int *)(ar4 + 0x48) <= iVar2) ||
      (iVar2 = (*(code *)PTR_FUN_8c264c2c)(ar4_00,ar5,ar6,ar7), iVar3 <= iVar2)) ||
     (iVar2 = (*(code *)PTR_FUN_8c264c30)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7), iVar2 == 3)) {
    if (*(char *)(ar4 + 0x70) == '\0') {
      if (*(char *)(ar4 + 0x72) == '\0') {
        ar5 = 1;
        (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_2691ba_8c264c34)(ar4_01,1,ar6,ar7);
      }
      *(undefined1 *)(ar4 + 1) = 3;
    }
    *(undefined1 *)(ar4 + 0x71) = 1;
  }
  iVar2 = (*(code *)PTR_FUN_8c264c30)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  if (iVar2 == 3) {
    iVar3 = (*(code *)PTR_FUN_8c264c38)(ar4,ar5,ar6,ar7);
    puVar1 = PTR_memset_8c264c3c;
    iVar2 = 0x48;
    iVar4 = *(int *)(ar4 + 0x48);
    iVar6 = 0;
    puVar5 = (undefined4 *)(ar4 + 0x18);
    if (0 < iVar3) {
      do {
        a4 = (int *)*puVar5;
        puVar5 = puVar5 + 1;
        a7 = &uStack_24;
        (**(code **)(*a4 + 0x18))(a4,0,iVar4 * iVar3 * 2,a7);
        (*(code *)puVar1)(uStack_24,0,uStack_20,a7);
        iVar2 = (**(code **)(*a4 + 0x20))(a4,1,&uStack_24,a7);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
  }
  return iVar2;
}



/* FUN_8c264b14 @ 8c264b14 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c264b14(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = (*(code *)PTR_FUN_8c264c30)(*(undefined4 *)(ar4 + 4),&DAT_8c278064);
  if (iVar1 == 3) {
    iVar2 = (*(code *)PTR_FUN_8c264bf0)(*(undefined4 *)(ar4 + 4));
    iVar4 = 0;
    iVar1 = iVar2;
    if (0 < iVar2) {
      do {
        piVar3 = *(int **)(iVar4 * 4 + ar4 + 0x18);
        iVar1 = (**(code **)(*piVar3 + 0x24))(piVar3,1);
        if (0x1f < iVar1) break;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (iVar4 == iVar2) {
      (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_2690dc_8c264c20)(*(undefined4 *)(ar4 + 0xc),0);
      iVar1 = 4;
      *(undefined1 *)(ar4 + 1) = 4;
    }
  }
  return iVar1;
}



/* FUN_8c264b1a @ 8c264b1a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c264b1a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *a4;
  int unaff_r13;
  int iVar3;
  
  iVar1 = (*(code *)PTR_FUN_8c264c30)(*(undefined4 *)(unaff_r13 + 4),ar5,ar6,ar7);
  if (iVar1 == 3) {
    iVar2 = (*(code *)PTR_FUN_8c264bf0)(*(undefined4 *)(unaff_r13 + 4),ar5,ar6,ar7);
    iVar3 = 0;
    iVar1 = iVar2;
    if (0 < iVar2) {
      do {
        a4 = *(int **)(iVar3 * 4 + unaff_r13 + 0x18);
        iVar1 = (**(code **)(*a4 + 0x24))(a4,1,ar6,ar7);
        if (0x1f < iVar1) break;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (iVar3 == iVar2) {
      (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_2690dc_8c264c20)
                (*(undefined4 *)(unaff_r13 + 0xc),0,ar6,ar7);
      iVar1 = 4;
      *(undefined1 *)(unaff_r13 + 1) = 4;
    }
  }
  return iVar1;
}



/* FUN_8c264b7a @ 8c264b7a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c264b7a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_269aa8_8c264c24)(*(undefined4 *)(ar4 + 0xc));
  if (iVar1 < 1) {
    (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_2691ba_8c264c34)(*(undefined4 *)(ar4 + 0xc),0);
    iVar1 = 5;
    *(undefined1 *)(ar4 + 1) = 5;
  }
  return iVar1;
}



/* FUN_8c264b7e @ 8c264b7e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c264b7e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r14;
  
  iVar1 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_269aa8_8c264c24)
                    (*(undefined4 *)(unaff_r14 + 0xc),ar5,ar6,ar7);
  if (iVar1 < 1) {
    (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_2691ba_8c264c34)
              (*(undefined4 *)(unaff_r14 + 0xc),0,ar6,ar7);
    iVar1 = 5;
    *(undefined1 *)(unaff_r14 + 1) = 5;
  }
  return iVar1;
}



/* noop_264b9c @ 8c264b9c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_264b9c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c264ba0 @ 8c264ba0 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c264ba0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int *a4;
  int iVar2;
  undefined4 in_stack_ffffffec;
  
  FUN_8c260ca0(ar4,ar5,ar6,ar7,in_stack_ffffffec);
  s_E1205_Illigal_parameter_MWRN_2690dc(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  uVar1 = 0;
  s_E1205_Illigal_parameter_MWRN_2691ba(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  FUN_8c262c66(*(undefined4 *)(ar4 + 4),uVar1,ar6,ar7);
  if (*(int *)(ar4 + 8) != 0) {
    FUN_8c263498(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7);
    (**(code **)(**(int **)(ar4 + 0x14) + 0x14))(*(int **)(ar4 + 0x14),uVar1,ar6,ar7);
  }
  for (iVar2 = 0; iVar2 < *(char *)(ar4 + 3); iVar2 = iVar2 + 1) {
    a4 = *(int **)(iVar2 * 4 + ar4 + 0x18);
    (**(code **)(*a4 + 0x14))(a4,uVar1,ar6,ar7);
  }
  if (*(int *)(ar4 + 8) != 0) {
    uVar1 = 0;
    FUN_8c263534(*(undefined4 *)(ar4 + 8),0,ar6,ar7);
    FUN_8c26346e(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7);
  }
  ar5_00 = *(undefined4 *)(ar4 + 0x14);
  uVar1 = FUN_8c263b34(ar4,ar5_00,ar6,ar7);
  uVar1 = FUN_8c260cc8(ar4,ar5_00,ar6,ar7,uVar1);
  return uVar1;
}



/* FUN_8c264c92 @ 8c264c92 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c264c92(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 ar5_00;
  undefined4 ar4_00;
  int iVar2;
  int iVar3;
  undefined4 ar5_01;
  
  cVar1 = *(char *)(ar4 + 1);
  ar5_00 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  ar5_01 = ar5_00;
  ar4_00 = FUN_8c1f88f0(DAT_8c2784a0,ar5_00,ar6,ar7);
  iVar2 = FUN_8c1f88f6(ar4_00,ar5_01,ar6,ar7);
  iVar3 = libgcc_divide_helper_010468(1000000,*(undefined4 *)(ar4 + 0x38));
  iVar3 = libgcc_divide_helper_010468(iVar3 << 3,10);
  if (iVar2 < iVar3) {
    return iVar3;
  }
  DAT_8c2784a0 = ar5_00;
  if (((cVar1 == '\x03') && (*(char *)(ar4 + 0x72) == '\0')) &&
     (iVar2 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),ar5_01,ar6,ar7), iVar2 != 3)) {
    iVar2 = get_field_2c_2630fe(*(undefined4 *)(ar4 + 4),ar5_01,ar6,ar7);
    if (*(int *)(ar4 + 100) == iVar2) {
      *(short *)(ar4 + 0x68) = *(short *)(ar4 + 0x68) + 1;
      if (*(int *)(ar4 + 0x38) * 5 < (int)*(short *)(ar4 + 0x68)) {
        *(undefined2 *)(ar4 + 0x60) = 0xfffe;
      }
    }
    else {
      *(undefined2 *)(ar4 + 0x68) = 0;
    }
    *(int *)(ar4 + 100) = iVar2;
    if (*(short *)(ar4 + 0x60) != 0) {
      if ((*(char *)(ar4 + 0x6d) == '\x01') || (*(char *)(ar4 + 0x6d) == '\x02')) {
        FUN_8c263c64(ar4,ar5_01,ar6,ar7);
      }
      if (*(char *)(ar4 + 0x6d) != '\0') {
        *(undefined2 *)(ar4 + 0x60) = 0;
        goto LAB_8c264d58;
      }
    }
  }
  else {
LAB_8c264d58:
    *(undefined2 *)(ar4 + 0x68) = 0;
  }
  if ((('\0' < cVar1) && (cVar1 < '\x04')) &&
     ((*(char *)(ar4 + 0x72) == '\0' &&
      (iVar2 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),ar5_01,ar6,ar7), iVar2 != 3)))) {
    if (*(int *)(ar4 + 0x14) == 0) {
      iVar2 = 0;
    }
    else {
      ar5_01 = 1;
      iVar2 = (**(code **)(**(int **)(ar4 + 0x14) + 0x24))(*(int **)(ar4 + 0x14),1,ar6,ar7);
    }
    if (iVar2 < 0x40) {
      *(short *)(ar4 + 0x6a) = *(short *)(ar4 + 0x6a) + 1;
      if (cVar1 == '\x03') {
        if (*(int *)(ar4 + 0x38) * 5 < (int)*(short *)(ar4 + 0x6a)) {
LAB_8c264dce:
          *(undefined2 *)(ar4 + 0x60) = 0xffff;
        }
      }
      else if (*(int *)(ar4 + 0x38) * 0x14 < (int)*(short *)(ar4 + 0x6a)) goto LAB_8c264dce;
      iVar2 = 0x60;
      if (*(short *)(ar4 + 0x60) == 0) goto LAB_8c264e04;
      if (*(char *)(ar4 + 0x6d) == '\x01') {
        FUN_8c263c64(ar4,ar5_01,ar6,ar7);
      }
      else if (*(char *)(ar4 + 0x6d) == '\x02') {
        FUN_8c264ba0(ar4,ar5_01,ar6,ar7);
      }
      iVar2 = 0x6d;
      if (*(char *)(ar4 + 0x6d) == '\0') goto LAB_8c264e04;
      *(undefined2 *)(ar4 + 0x60) = 0;
    }
  }
  iVar2 = 0x6a;
  *(undefined2 *)(ar4 + 0x6a) = 0;
LAB_8c264e04:
  if ((*(int *)(ar4 + 8) != 0) &&
     (iVar2 = FUN_8c263746(*(undefined4 *)(ar4 + 8),ar5_01,ar6,ar7), iVar2 == 4)) {
    if (*(char *)(ar4 + 0x6d) == '\x01') {
      FUN_8c263c64(ar4,ar5_01,ar6,ar7);
    }
    else if (*(char *)(ar4 + 0x6d) == '\x02') {
      FUN_8c264ba0(ar4,ar5_01,ar6,ar7);
    }
    iVar2 = 0x6d;
    if (*(char *)(ar4 + 0x6d) != '\0') {
      *(undefined2 *)(ar4 + 0x60) = 0;
      iVar2 = 0x6a;
      *(undefined2 *)(ar4 + 0x6a) = 0;
    }
  }
  return iVar2;
}



/* FUN_8c264e84 @ 8c264e84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c264e84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 ar5_00;
  undefined4 ar4_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 ar5_01;
  
  if (*(char *)(ar4 + 1) == '\x03') {
    FUN_8c264b14(ar4,ar5,ar6,ar7);
  }
  else if (*(char *)(ar4 + 1) == '\x01') {
    s_E9081001_can_t_play_d_ch_dat_2647fe(ar4,ar5,ar6,ar7);
  }
  else if (*(char *)(ar4 + 1) == '\x02') {
    FUN_8c264a42(ar4,ar5,ar6,ar7);
  }
  else if (*(char *)(ar4 + 1) == '\x04') {
    FUN_8c264b7a(ar4,ar5,ar6,ar7);
  }
  else if (*(char *)(ar4 + 1) == '\x05') {
    noop_264b9c(ar4,ar5,ar6,ar7,5);
  }
  cVar1 = *(char *)(ar4 + 1);
  ar5_00 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  ar5_01 = ar5_00;
  ar4_00 = FUN_8c1f88f0(DAT_8c2784a0,ar5_00,ar6,ar7);
  iVar2 = FUN_8c1f88f6(ar4_00,ar5_01,ar6,ar7);
  iVar3 = libgcc_divide_helper_010468(1000000,*(undefined4 *)(ar4 + 0x38));
  iVar3 = libgcc_divide_helper_010468(iVar3 << 3,10);
  if (iVar2 < iVar3) {
    return iVar3;
  }
  DAT_8c2784a0 = ar5_00;
  if (((cVar1 == '\x03') && (*(char *)(ar4 + 0x72) == '\0')) &&
     (iVar2 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),ar5_01,ar6,ar7), iVar2 != 3)) {
    iVar2 = get_field_2c_2630fe(*(undefined4 *)(ar4 + 4),ar5_01,ar6,ar7);
    if (*(int *)(ar4 + 100) == iVar2) {
      *(short *)(ar4 + 0x68) = *(short *)(ar4 + 0x68) + 1;
      if (*(int *)(ar4 + 0x38) * 5 < (int)*(short *)(ar4 + 0x68)) {
        *(undefined2 *)(ar4 + 0x60) = 0xfffe;
      }
    }
    else {
      *(undefined2 *)(ar4 + 0x68) = 0;
    }
    *(int *)(ar4 + 100) = iVar2;
    if (*(short *)(ar4 + 0x60) != 0) {
      if ((*(char *)(ar4 + 0x6d) == '\x01') || (*(char *)(ar4 + 0x6d) == '\x02')) {
        FUN_8c263c64(ar4,ar5_01,ar6,ar7);
      }
      if (*(char *)(ar4 + 0x6d) != '\0') {
        *(undefined2 *)(ar4 + 0x60) = 0;
        goto LAB_8c264d58;
      }
    }
  }
  else {
LAB_8c264d58:
    *(undefined2 *)(ar4 + 0x68) = 0;
  }
  if ((('\0' < cVar1) && (cVar1 < '\x04')) &&
     ((*(char *)(ar4 + 0x72) == '\0' &&
      (iVar2 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),ar5_01,ar6,ar7), iVar2 != 3)))) {
    if (*(int *)(ar4 + 0x14) == 0) {
      iVar2 = 0;
    }
    else {
      piVar4 = *(int **)(ar4 + 0x14);
      ar5_01 = 1;
      iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4,piVar4);
    }
    if (iVar2 < 0x40) {
      *(short *)(ar4 + 0x6a) = *(short *)(ar4 + 0x6a) + 1;
      if (cVar1 == '\x03') {
        if (*(int *)(ar4 + 0x38) * 5 < (int)*(short *)(ar4 + 0x6a)) {
LAB_8c264dce:
          *(undefined2 *)(ar4 + 0x60) = 0xffff;
        }
      }
      else if (*(int *)(ar4 + 0x38) * 0x14 < (int)*(short *)(ar4 + 0x6a)) goto LAB_8c264dce;
      iVar2 = 0x60;
      if (*(short *)(ar4 + 0x60) == 0) goto LAB_8c264e04;
      if (*(char *)(ar4 + 0x6d) == '\x01') {
        FUN_8c263c64(ar4,ar5_01,ar6,ar7);
      }
      else if (*(char *)(ar4 + 0x6d) == '\x02') {
        FUN_8c264ba0(ar4,ar5_01,ar6,ar7);
      }
      iVar2 = 0x6d;
      if (*(char *)(ar4 + 0x6d) == '\0') goto LAB_8c264e04;
      *(undefined2 *)(ar4 + 0x60) = 0;
    }
  }
  iVar2 = 0x6a;
  *(undefined2 *)(ar4 + 0x6a) = 0;
LAB_8c264e04:
  if ((*(int *)(ar4 + 8) != 0) &&
     (iVar2 = FUN_8c263746(*(undefined4 *)(ar4 + 8),ar5_01,ar6,ar7), iVar2 == 4)) {
    if (*(char *)(ar4 + 0x6d) == '\x01') {
      FUN_8c263c64(ar4,ar5_01,ar6,ar7);
    }
    else if (*(char *)(ar4 + 0x6d) == '\x02') {
      FUN_8c264ba0(ar4,ar5_01,ar6,ar7);
    }
    iVar2 = 0x6d;
    if (*(char *)(ar4 + 0x6d) != '\0') {
      *(undefined2 *)(ar4 + 0x60) = 0;
      iVar2 = 0x6a;
      *(undefined2 *)(ar4 + 0x6a) = 0;
    }
  }
  return iVar2;
}



/* FUN_8c264e88 @ 8c264e88 callers=0 callees=5 */

/* WARNING: Unknown calling convention */

int FUN_8c264e88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 ar5_00;
  undefined4 ar4_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 ar5_01;
  int unaff_r14;
  undefined4 in_PR;
  
  if (*(char *)(unaff_r14 + 1) == '\x03') {
    FUN_8c264b14(unaff_r14,ar5,ar6,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x01') {
    s_E9081001_can_t_play_d_ch_dat_2647fe(unaff_r14,ar5,ar6,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x02') {
    FUN_8c264a42(unaff_r14,ar5,ar6,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x04') {
    FUN_8c264b7a(unaff_r14,ar5,ar6,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x05') {
    noop_264b9c(unaff_r14,ar5,ar6,ar7,in_PR);
  }
  cVar1 = *(char *)(unaff_r14 + 1);
  ar5_00 = sh4_tmu_1f88e6(unaff_r14,ar5,ar6,ar7);
  ar5_01 = ar5_00;
  ar4_00 = FUN_8c1f88f0(DAT_8c2784a0,ar5_00,ar6,ar7);
  iVar2 = FUN_8c1f88f6(ar4_00,ar5_01,ar6,ar7);
  iVar3 = libgcc_divide_helper_010468(1000000,*(undefined4 *)(unaff_r14 + 0x38));
  iVar3 = libgcc_divide_helper_010468(iVar3 << 3,10);
  if (iVar2 < iVar3) {
    return iVar3;
  }
  DAT_8c2784a0 = ar5_00;
  if (((cVar1 == '\x03') && (*(char *)(unaff_r14 + 0x72) == '\0')) &&
     (iVar2 = FUN_8c262c38(*(undefined4 *)(unaff_r14 + 4),ar5_01,ar6,ar7), iVar2 != 3)) {
    iVar2 = get_field_2c_2630fe(*(undefined4 *)(unaff_r14 + 4),ar5_01,ar6,ar7);
    if (*(int *)(unaff_r14 + 100) == iVar2) {
      *(short *)(unaff_r14 + 0x68) = *(short *)(unaff_r14 + 0x68) + 1;
      if (*(int *)(unaff_r14 + 0x38) * 5 < (int)*(short *)(unaff_r14 + 0x68)) {
        *(undefined2 *)(unaff_r14 + 0x60) = 0xfffe;
      }
    }
    else {
      *(undefined2 *)(unaff_r14 + 0x68) = 0;
    }
    *(int *)(unaff_r14 + 100) = iVar2;
    if (*(short *)(unaff_r14 + 0x60) != 0) {
      if ((*(char *)(unaff_r14 + 0x6d) == '\x01') || (*(char *)(unaff_r14 + 0x6d) == '\x02')) {
        FUN_8c263c64(unaff_r14,ar5_01,ar6,ar7);
      }
      if (*(char *)(unaff_r14 + 0x6d) != '\0') {
        *(undefined2 *)(unaff_r14 + 0x60) = 0;
        goto LAB_8c264d58;
      }
    }
  }
  else {
LAB_8c264d58:
    *(undefined2 *)(unaff_r14 + 0x68) = 0;
  }
  if ((('\0' < cVar1) && (cVar1 < '\x04')) &&
     ((*(char *)(unaff_r14 + 0x72) == '\0' &&
      (iVar2 = FUN_8c262c38(*(undefined4 *)(unaff_r14 + 4),ar5_01,ar6,ar7), iVar2 != 3)))) {
    if (*(int *)(unaff_r14 + 0x14) == 0) {
      iVar2 = 0;
    }
    else {
      piVar4 = *(int **)(unaff_r14 + 0x14);
      ar5_01 = 1;
      iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4,piVar4);
    }
    if (iVar2 < 0x40) {
      *(short *)(unaff_r14 + 0x6a) = *(short *)(unaff_r14 + 0x6a) + 1;
      if (cVar1 == '\x03') {
        if (*(int *)(unaff_r14 + 0x38) * 5 < (int)*(short *)(unaff_r14 + 0x6a)) {
LAB_8c264dce:
          *(undefined2 *)(unaff_r14 + 0x60) = 0xffff;
        }
      }
      else if (*(int *)(unaff_r14 + 0x38) * 0x14 < (int)*(short *)(unaff_r14 + 0x6a))
      goto LAB_8c264dce;
      iVar2 = 0x60;
      if (*(short *)(unaff_r14 + 0x60) == 0) goto LAB_8c264e04;
      if (*(char *)(unaff_r14 + 0x6d) == '\x01') {
        FUN_8c263c64(unaff_r14,ar5_01,ar6,ar7);
      }
      else if (*(char *)(unaff_r14 + 0x6d) == '\x02') {
        FUN_8c264ba0(unaff_r14,ar5_01,ar6,ar7);
      }
      iVar2 = 0x6d;
      if (*(char *)(unaff_r14 + 0x6d) == '\0') goto LAB_8c264e04;
      *(undefined2 *)(unaff_r14 + 0x60) = 0;
    }
  }
  iVar2 = 0x6a;
  *(undefined2 *)(unaff_r14 + 0x6a) = 0;
LAB_8c264e04:
  if ((*(int *)(unaff_r14 + 8) != 0) &&
     (iVar2 = FUN_8c263746(*(undefined4 *)(unaff_r14 + 8),ar5_01,ar6,ar7), iVar2 == 4)) {
    if (*(char *)(unaff_r14 + 0x6d) == '\x01') {
      FUN_8c263c64(unaff_r14,ar5_01,ar6,ar7);
    }
    else if (*(char *)(unaff_r14 + 0x6d) == '\x02') {
      FUN_8c264ba0(unaff_r14,ar5_01,ar6,ar7);
    }
    iVar2 = 0x6d;
    if (*(char *)(unaff_r14 + 0x6d) != '\0') {
      *(undefined2 *)(unaff_r14 + 0x60) = 0;
      iVar2 = 0x6a;
      *(undefined2 *)(unaff_r14 + 0x6a) = 0;
    }
  }
  return iVar2;
}



/* FUN_8c264ed0 @ 8c264ed0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c264ed0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_memset_8c26500c)(DAT_8c265008,0,(int)DAT_8c265004);
  return uVar1;
}



/* FUN_8c264eda @ 8c264eda callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c264eda(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 *ar4_00;
  int ar4_01;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(iVar1 * 0x34 + DAT_8c265008) == 0) break;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  if (iVar1 == 8) {
    ar4_00 = (undefined4 *)0x0;
  }
  else {
    ar4_00 = (undefined4 *)(iVar1 * 0x34 + DAT_8c265008);
    (*(code *)PTR_memset_8c26500c)(ar4_00,0,0x34,ar7);
    *ar4_00 = 1;
    ar5_00 = DAT_8c265010;
    ar4_01 = (int)DAT_8c265006;
    ar4_00[1] = iVar1;
    ar4_00[2] = 0;
    ar4_00[3] = 0;
    iVar1 = (int)ar4_00 + 0x32;
    (*(code *)PTR_FUN_8c265014)(ar4_01,ar5_00,ar4_00 + 0xc,iVar1);
    (*(code *)PTR_memset_8c26500c)(ar4_00 + 10,0,8,iVar1);
  }
  return ar4_00;
}



/* FUN_8c264f52 @ 8c264f52 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c264f52(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c265014)(ar6,ar4 + 0x30,ar4 + 0x32);
  return uVar1;
}



/* FUN_8c264f6a @ 8c264f6a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c264f6a(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  undefined4 uVar2;
  
  puVar1 = PTR_memset_8c26500c;
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = 0;
    uVar2 = (*(code *)puVar1)(0,0x34);
    return uVar2;
  }
  return in_r0;
}



/* get_field_c_264f82 @ 8c264f82 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_c_264f82(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0xc);
}



/* FUN_8c264f86 @ 8c264f86 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c264f86(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0xc) == 0) {
    *(undefined4 *)(ar4 + 0x14) = 1;
    *(undefined4 *)(ar4 + 0x18) = ar5;
    *(undefined4 *)(ar4 + 0x1c) = ar6;
    *(undefined4 *)(ar4 + 0x20) = ar7;
    *(undefined4 *)(ar4 + 0x24) = 0;
    return 1;
  }
  return 0;
}



/* FUN_8c264fa4 @ 8c264fa4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c264fa4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  if (*(int *)(ar4 + 0xc) == 0) {
    *(undefined4 *)(ar4 + 0x14) = 2;
    *(undefined4 *)(ar4 + 0x18) = ar5;
    *(undefined4 *)(ar4 + 0x1c) = ar6;
    *(undefined4 *)(ar4 + 0x20) = ar7;
    *(undefined4 *)(ar4 + 0x24) = s0;
    return 1;
  }
  return 0;
}



/* FUN_8c264fc2 @ 8c264fc2 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c264fc2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if (*(int *)(ar4 + 0xc) == 0) {
    *(undefined4 *)(ar4 + 0x10) = 0;
    *(undefined4 *)(ar4 + 0xc) = 1;
  }
  return in_r0;
}



/* FUN_8c264fd4 @ 8c264fd4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c264fd4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0xc) = 0;
  uVar1 = (*(code *)PTR_memset_8c26500c)(ar4 + 0x28,0,8);
  return uVar1;
}



/* FUN_8c264fea @ 8c264fea callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c264fea(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0xc);
  if (iVar1 == 3) {
    *(undefined4 *)(ar4 + 0xc) = 0;
  }
  return iVar1;
}



/* get_field_10_264ff8 @ 8c264ff8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_10_264ff8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x10);
}



/* FUN_8c264ffc @ 8c264ffc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c264ffc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)PTR_DAT_8c265018 = 1;
  return in_r0;
}



/* FUN_8c26501c @ 8c26501c callers=1 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c26501c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int ar7_00;
  undefined4 ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int ain0;
  
  if (*(int *)(ar4 + 0xc) == 1) {
    *(undefined4 *)(ar4 + 0xc) = 2;
  }
  uVar1 = *(uint *)(ar4 + 0xc);
  if (uVar1 == 2) {
    if (*(int *)(ar4 + 0x14) == 1) {
      uVar1 = FUN_8c261058(*(undefined4 *)(ar4 + 0x18),*(undefined4 *)(ar4 + 0x1c),
                           *(undefined4 *)(ar4 + 0x20),ar4 + 0x28,(int)*(short *)(ar4 + 0x30),
                           (int)*(short *)(ar4 + 0x32));
      *(uint *)(ar4 + 0x10) = uVar1;
    }
    else {
      ar7_00 = ar4 + 0x28;
      ar5_00 = *(undefined4 *)(ar4 + 0x1c);
      ar6_00 = *(undefined4 *)(ar4 + 0x20);
      ar4_00 = *(undefined4 *)(ar4 + 0x18);
      ain0 = ar7_00;
      uVar1 = FUN_8c261170(ar4_00,ar5_00,ar6_00,ar7_00,*(undefined4 *)(ar4 + 0x24),ar4 + 0x2c,
                           (int)*(short *)(ar4 + 0x30),(int)*(short *)(ar4 + 0x32));
      *(uint *)(ar4 + 0x10) = uVar1;
      if ((int)uVar1 < 0) {
        uVar1 = ~(~uVar1 + 1 & 1) + 1;
      }
      else {
        uVar1 = uVar1 & 1;
      }
      if (uVar1 == 1) {
        uVar1 = FUN_8c264ffc(ar4_00,ar5_00,ar6_00,ar7_00,ain0);
      }
    }
    *(undefined4 *)(ar4 + 0xc) = 3;
  }
  return uVar1;
}



/* FUN_8c2650be @ 8c2650be callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c2650be(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r13;
  int *piVar2;
  
  piVar2 = (int *)(unaff_r13 + (int)ar4);
  do {
    iVar1 = *ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c26501c(ar4,ar5,ar6,ar7);
    }
    ar4 = ar4 + 0xd;
  } while (ar4 < piVar2);
  return iVar1;
}



/* FUN_8c2650ec @ 8c2650ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2650ec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int ar5_00;
  uint ar4_00;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_8c265158;
  ar5_00 = (int)DAT_8c265152;
  *(uint *)PTR_DAT_8c265158 = DAT_8c26515c & 0xffffffe0;
  ar4_00 = DAT_8c265160 & 0xffffffe0;
  (*(code *)PTR_FUN_8c265168)(DAT_8c265164,0x40,ar6,ar7);
  uVar2 = 0x40;
  (*(code *)PTR_FUN_8c265170)(DAT_8c26516c,0x40,ar6,ar7);
  (*(code *)PTR_FUN_8c265174)(ar4_00,uVar2,ar6,ar7);
  uVar2 = DAT_8c265178;
  (*(code *)PTR_FUN_8c26517c)(DAT_8c265178,ar5_00,ar6,ar7);
  (*(code *)PTR_FUN_8c265180)(uVar2,ar5_00,ar6,ar7);
  *(undefined4 *)((int)DAT_8c265154 + *(int *)puVar1) = 0;
  (*(code *)PTR_FUN_8c265184)(*(int *)puVar1 + (int)DAT_8c265156,0,ar6,ar7);
  *DAT_8c265188 = *(undefined4 *)((int)DAT_8c265156 + *(int *)puVar1);
  return 0;
}



/* FUN_8c26518c @ 8c26518c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26518c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined1 *ar5_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int ar5_01;
  undefined4 in_stack_ffffffdc;
  
  iVar1 = DAT_8c2784c0;
  ar5_00 = &stack0xffffffdc;
  if (DAT_8c2784c0 == 0) {
    ar5_01 = 0xd000001;
  }
  else {
    if (*(int *)(DAT_8c2784c0 + 0x160) != 1) {
      iVar2 = *(int *)(DAT_8c2784c0 + 0x1bc);
      FUN_8c26870c(iVar2,&stack0xffffffdc,ar6,ar7);
      if ((char)in_stack_ffffffdc == '\0') {
        iVar4 = 0;
        iVar5 = *(int *)(DAT_8c2784c0 + 0x168);
        iVar3 = 0;
        if (0 < iVar5) {
          do {
            iVar2 = *(int *)(iVar1 + 0x174);
            *(int *)(iVar1 + 0x174) = iVar2 + 1;
            iVar2 = iVar2 * 0x1c + *(int *)(iVar1 + 0x164);
            if (*(int *)(iVar1 + 0x174) == iVar5) {
              *(undefined4 *)(iVar1 + 0x174) = 0;
            }
            if (*(int *)(iVar2 + 0x14) == 1) {
              ar5_01 = FUN_8c266c48(iVar2,ar5_00,ar6,ar7);
              if (ar5_01 != 0) goto LAB_8c26522c;
              iVar4 = iVar4 + 1;
              if ((iVar4 == 0x20) || (*(int *)(DAT_8c2784c0 + 0x16c) == 0)) break;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar5);
        }
        ar5_01 = FUN_8c266b08(iVar2,ar5_00,ar6,ar7);
        goto LAB_8c26522c;
      }
    }
    ar5_01 = 0xb000003;
  }
LAB_8c26522c:
  if (ar5_01 != 0) {
    FUN_8c2688a0(FUN_8c26518c,ar5_01,ar6,ar7,in_stack_ffffffdc);
  }
  return ar5_01;
}



/* aica_reg_265278 @ 8c265278 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 aica_reg_265278(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *ar4_00;
  undefined4 ar5_00;
  int iVar1;
  
  (*(code *)PTR_FUN_8c2652ec)(DAT_8c2652e8,DAT_8c2652e4,4,1,1,1);
  ar5_00 = DAT_8c2652e8;
  ar4_00 = DAT_8c2652e4;
  *DAT_8c2652e4 = *DAT_8c2652e4 | 1;
  (*(code *)PTR_FUN_8c2652f0)(ar4_00,ar5_00,4,1,1,1);
  iVar1 = (int)DAT_8c2652e2;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}



/* aica_reg_2652f4 @ 8c2652f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 aica_reg_2652f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *ar4_00;
  undefined4 ar5_00;
  int iVar1;
  
  (*(code *)PTR_FUN_8c26536c)(DAT_8c265368,PTR_DAT_8c265364,4,1,1,1);
  ar5_00 = DAT_8c265368;
  ar4_00 = PTR_DAT_8c265364;
  *(uint *)PTR_DAT_8c265364 = *(uint *)PTR_DAT_8c265364 & 0xfffffffe;
  (*(code *)PTR_FUN_8c265370)(ar4_00,ar5_00,4,1,1,1);
  iVar1 = (int)DAT_8c265360;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}



/* FUN_8c265374 @ 8c265374 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265374(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined1 *ar6_00;
  int *ar7_00;
  int in_stack_ffffffe4;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  char cStack_c;
  
  ar6_00 = &stack0xffffffe4;
  ar7_00 = &iStack_18;
  uStack_14 = ar4;
  uStack_10 = ar5;
  cStack_c = (char)ar6;
  ar5_00 = FUN_8c2684f0(ar5,(int)(char)ar6,&stack0xffffffe4,ar7_00);
  if (ar5_00 == 0) {
    if ((in_stack_ffffffe4 == 0) || (iStack_18 < 1)) {
      ar5_00 = 0x7fffffff;
    }
    else {
      ar5_00 = FUN_8c265ff4(uStack_14,in_stack_ffffffe4,ar6_00,ar7_00);
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265374,ar5_00,ar6_00,ar7_00,in_stack_ffffffe4);
  }
  return ar5_00;
}



/* FUN_8c2653e0 @ 8c2653e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2653e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = PTR_FUN_8c2654e4;
  puVar1 = PTR_DAT_8c2654dc;
  iVar4 = *(int *)PTR_DAT_8c2654dc;
  iVar3 = DAT_8c2654e0;
  if (iVar4 != 0) {
    iVar3 = (int)DAT_8c2654ba;
    iVar5 = *(int *)(DAT_8c2654b8 + iVar4);
    iVar6 = iVar5 + 0x20;
    *(int *)(DAT_8c2654b8 + -0x1c + iVar4) = iVar6;
    (*(code *)puVar2)(iVar6,*(int *)puVar1 + iVar3);
    (*(code *)puVar2)(iVar5 + 0x21,*(int *)puVar1 + (int)DAT_8c2654bc);
    if ((*(char *)(*(int *)puVar1 + (int)DAT_8c2654ba) == '\x01') &&
       (*(char *)((int)DAT_8c2654bc + *(int *)puVar1) == '\0')) {
      iVar5 = iVar5 + 0x23;
    }
    else {
      iVar5 = iVar5 + 0x22;
    }
    (*(code *)puVar2)(iVar5,(int)DAT_8c2654be + *(int *)puVar1);
    iVar3 = (int)DAT_8c2654c4;
    *(undefined1 *)((int)DAT_8c2654c0 + *(int *)puVar1) = 0;
    puVar2 = PTR_aica_ram_268618_8c2654e8;
    (*(code *)PTR_aica_ram_268618_8c2654e8)(iVar3 + iVar6,*(int *)puVar1 + (int)DAT_8c2654c2);
    (*(code *)puVar2)(DAT_8c2654c8 + iVar6,*(int *)puVar1 + (int)DAT_8c2654c6);
    (*(code *)puVar2)(DAT_8c2654cc + iVar6,*(int *)puVar1 + (int)DAT_8c2654ca);
    (*(code *)puVar2)(DAT_8c2654d0 + iVar6,*(int *)puVar1 + (int)DAT_8c2654ce);
    (*(code *)puVar2)(DAT_8c2654d4 + iVar6,*(int *)puVar1 + (int)DAT_8c2654d2);
    (*(code *)puVar2)(DAT_8c2654d8 + iVar6,*(int *)puVar1 + (int)DAT_8c2654d6);
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    (*(code *)PTR_FUN_8c2654f0)(PTR_FUN_8c2654ec,iVar3);
  }
  return iVar3;
}



/* FUN_8c2653e8 @ 8c2653e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2653e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  int iVar2;
  int *unaff_r14;
  undefined4 in_PR;
  
  iVar1 = *unaff_r14;
  ar5_00 = 0;
  if (iVar1 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x1cc);
    *(int *)(iVar1 + 0x1b0) = iVar2 + 0x20;
    FUN_8c268650(iVar2 + 0x20,*unaff_r14 + 0x1d0,ar6,ar7);
    FUN_8c268650(iVar2 + 0x21,*unaff_r14 + 0x1d1,ar6,ar7);
    if ((*(char *)(*unaff_r14 + 0x1d0) == '\x01') && (*(char *)(*unaff_r14 + 0x1d1) == '\0')) {
      iVar1 = iVar2 + 0x23;
    }
    else {
      iVar1 = iVar2 + 0x22;
    }
    FUN_8c268650(iVar1,*unaff_r14 + 0x1d2,ar6,ar7);
    *(undefined1 *)(*unaff_r14 + 0x1d3) = 0;
    aica_ram_268618(iVar2 + 0xc0,*unaff_r14 + 0x1b4,ar6,ar7);
    aica_ram_268618(iVar2 + 0xc4,*unaff_r14 + 0x1b8,ar6,ar7);
    aica_ram_268618(iVar2 + 200,*unaff_r14 + 0x1bc,ar6,ar7);
    aica_ram_268618(iVar2 + 0xcc,*unaff_r14 + 0x1c0,ar6,ar7);
    aica_ram_268618(iVar2 + 0xd0,*unaff_r14 + 0x1c4,ar6,ar7);
    aica_ram_268618(iVar2 + 0xd4,*unaff_r14 + 0x1c8,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2653e0,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c2654f4 @ 8c2654f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2654f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = DAT_8c2655ac;
  if ((((ar4 != 0) && (piVar3 = *(int **)(ar4 + 8), iVar2 = DAT_8c2655b4, *piVar3 == DAT_8c2655b0))
      && (iVar2 = DAT_8c2655b8, (char)piVar3[1] == '\x01')) && (*(char *)((int)piVar3 + 5) < '\x02')
     ) {
    (*(code *)PTR_aica_reg_265278_8c2655bc)();
    (*(code *)PTR_aica_ram_2684b8_8c2655c0)();
    (*(code *)PTR_FUN_8c2655c8)(PTR_DAT_8c2655c4);
    (*(code *)PTR_FUN_8c2655cc)(*(undefined4 *)PTR_DAT_8c2655c4,piVar3 + 8,piVar3[2],0xffffffff,0);
    (*(code *)PTR_FUN_8c2655d0)(*(undefined4 *)PTR_DAT_8c2655c4,0);
    (*(code *)PTR_aica_reg_2652f4_8c2655d4)();
    puVar1 = PTR_FUN_8c2655e0;
    for (iVar2 = DAT_8c2655d8; iVar2 != 0; iVar2 = iVar2 + -1) {
    }
    *(undefined4 *)PTR_DAT_8c2655dc = 1;
    (*(code *)puVar1)();
    (*(code *)PTR_FUN_8c2655e4)(ar4);
    iVar2 = 0;
  }
  if (*(int *)PTR_DAT_8c2655c4 != 0) {
    (*(code *)PTR_FUN_8c2655e8)(*(undefined4 *)PTR_DAT_8c2655c4);
  }
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_8c2655f0)(PTR_FUN_8c2655ec,iVar2);
  }
  return iVar2;
}



/* FUN_8c2654fc @ 8c2654fc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c26558c) */
/* WARNING: Unknown calling convention */

int FUN_8c2654fc(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  undefined4 ar5_00;
  int unaff_r12;
  int *piVar2;
  int ar5_01;
  undefined4 in_PR;
  
  ar5_01 = 0;
  if (unaff_r12 == 0) {
    ar5_01 = 0x7000103;
  }
  else {
    piVar2 = *(int **)(unaff_r12 + 8);
    if (*piVar2 == 0x56524453) {
      if (((char)piVar2[1] == '\x01') && (*(char *)((int)piVar2 + 5) < '\x02')) {
        aica_reg_265278(ar4,ar5,ar6,ar7);
        aica_ram_2684b8(ar4,ar5,ar6,ar7);
        FUN_8c265704(&DAT_8c2784b8,ar5,ar6,ar7);
        ar7 = 0xffffffff;
        ar6 = piVar2[2];
        FUN_8c265ea0(0,piVar2 + 8,ar6,0xffffffff,0);
        ar5_00 = 0;
        ar4_00 = 0;
        FUN_8c265ff4(0,0,ar6,ar7);
        aica_reg_2652f4(ar4_00,ar5_00,ar6,ar7);
        for (iVar1 = 0x200000; iVar1 != 0; iVar1 = iVar1 + -1) {
        }
        DAT_8c2784c4 = 1;
        FUN_8c2653e0(0,ar5_00,ar6,ar7);
        FUN_8c2659dc(unaff_r12,ar5_00,ar6,ar7);
      }
      else {
        ar5_01 = 0xb000002;
      }
    }
    else {
      ar5_01 = 0x9000001;
    }
  }
  if (ar5_01 != 0) {
    FUN_8c2688a0(FUN_8c2654f4,ar5_01,ar6,ar7,in_PR);
  }
  return ar5_01;
}



/* FUN_8c2655f4 @ 8c2655f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2655f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_PR;
  
  ar5_00 = FUN_8c2650ec(0,ar5,ar6,ar7);
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2655f4,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c265620 @ 8c265620 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265620(int ar4,undefined4 ar5,undefined4 ar6,code *ar7)

{
  int ar5_00;
  int in_stack_ffffffe0;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c265a2c(ar4,&stack0xffffffe0,ar6,ar7);
    if (in_stack_ffffffe0 == 2) {
      ar5_00 = 0x6000001;
    }
    else {
      *(undefined4 *)(ar4 + 0x18) = 0;
      ar5_00 = FUN_8c265f74(ar4,2,ar6,ar7);
      if (ar5_00 == 0) {
        ar7 = FUN_8c26592c;
        *(int *)(DAT_8c2784c0 + 400) = ar4;
        *(int *)(DAT_8c2784c0 + 0x188) = *(int *)(DAT_8c2784c0 + 0x188) + 1;
        ar6 = *(undefined4 *)(ar4 + 0xc);
        ar5_00 = aica_ram_266970(*(undefined4 *)(ar4 + 8),ar5,ar6,FUN_8c26592c,ar4);
      }
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265620,ar5_00,ar6,ar7,in_stack_ffffffe0);
  }
  return ar5_00;
}



/* FUN_8c265704 @ 8c265704 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265704(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ain0;
  int *dst;
  int ar6_00;
  int ar5_00;
  
  ar5_00 = 0;
  ain0 = 0x17c;
  dst = *(int **)(DAT_8c2784c0 + 0x17c);
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
    ar6_00 = 0;
  }
  else {
    ar7 = 0x40;
    ar6_00 = 0;
    do {
      if (*dst != 1) {
        FUN_8c010794(0x20,dst,&DAT_8c2784d0);
        ain0 = 0x184;
        *ar4 = dst;
        *(int *)(DAT_8c2784c0 + 0x184) = *(int *)(DAT_8c2784c0 + 0x184) + 1;
        goto LAB_8c26574e;
      }
      ar6_00 = ar6_00 + 1;
      dst = dst + 8;
    } while (ar6_00 < 0x40);
    ar5_00 = 0x7000101;
    *ar4 = 0;
    ain0 = 1;
  }
LAB_8c26574e:
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265704,ar5_00,ar6_00,ar7,ain0);
  }
  return ar5_00;
}



/* FUN_8c26570c @ 8c26570c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26570c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain1)

{
  int *in_r3;
  int *dst;
  int ar6_00;
  int unaff_r14;
  undefined4 in_PR;
  
  dst = *(int **)(*in_r3 + 0x17c);
  if (*in_r3 == 0) {
    unaff_r14 = 0xd000001;
    ar6_00 = 0;
  }
  else {
    ar7 = 0x40;
    ar6_00 = ain1;
    do {
      if (*dst != 1) {
        FUN_8c010794(0x20,dst,&DAT_8c2784d0);
        *ar4 = (int)dst;
        *(int *)(DAT_8c2784c0 + 0x184) = *(int *)(DAT_8c2784c0 + 0x184) + 1;
        goto LAB_8c26574e;
      }
      ar6_00 = ar6_00 + 1;
      dst = dst + 8;
    } while (ar6_00 < 0x40);
    unaff_r14 = 0x7000101;
    *ar4 = ain1;
  }
LAB_8c26574e:
  if (unaff_r14 != 0) {
    FUN_8c2688a0(FUN_8c265704,unaff_r14,ar6_00,ar7,in_PR);
  }
  return unaff_r14;
}



/* FUN_8c265784 @ 8c265784 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265784(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_8c2657d8;
  iVar2 = DAT_8c2657dc;
  if (((*(int *)PTR_DAT_8c2657d8 != 0) && (iVar2 = DAT_8c2657e0, ar4 != (int *)0x0)) && (*ar4 == 1))
  {
    iVar2 = (int)DAT_8c2657d4;
    *ar4 = 0;
    *(int *)(iVar2 + *(int *)puVar1) = *(int *)(iVar2 + *(int *)puVar1) + -1;
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_8c2657e8)(PTR_FUN_8c2657e4,iVar2);
  }
  return iVar2;
}



/* FUN_8c26578c @ 8c26578c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26578c(int *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *in_r2;
  int unaff_r14;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    unaff_r14 = 0xd000001;
  }
  else {
    ar7 = 0x7000102;
    if (ar4 == (int *)0x0) {
      unaff_r14 = 0x7000102;
    }
    else if (*ar4 == 1) {
      *ar4 = ar6;
      *(int *)(DAT_8c2784c0 + 0x184) = *(int *)(DAT_8c2784c0 + 0x184) + -1;
    }
    else {
      unaff_r14 = 0x7000102;
    }
  }
  if (unaff_r14 != 0) {
    FUN_8c2688a0(FUN_8c265784,unaff_r14,ar6,ar7,in_PR);
  }
  return unaff_r14;
}



/* aica_ram_2657ec @ 8c2657ec callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int aica_ram_2657ec(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int iVar2;
  int in_stack_ffffffdc;
  
  if (DAT_8c2784c0 == 0) {
    iVar2 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar2 = 0x7000103;
  }
  else {
    FUN_8c265a2c(ar4,&stack0xffffffdc,ar6,ar7);
    if (in_stack_ffffffdc == 2) {
      iVar2 = 0x6000001;
    }
    else {
      _DAT_8c4bd404 = 0;
      *(undefined4 *)(ar4 + 0x18) = 0;
      iVar2 = ar5 + -0x5f800000;
      ar7 = *(undefined4 *)(ar4 + 0xc);
      ar6 = *(undefined4 *)(ar4 + 8);
      uVar1 = *(undefined4 *)(DAT_8c2784c0 + 0x1ac);
      _DAT_8c4bd404 = FUN_8c1f900c(uVar1,iVar2,ar6,ar7,0,1,1,FUN_8c26592c,ar4);
      if (_DAT_8c4bd404 != 0) {
        FUN_8c2658e2(uVar1,iVar2,ar6,ar7,in_stack_ffffffdc);
      }
      iVar2 = FUN_8c265f74(ar4,2,ar6,ar7);
      if (iVar2 == 0) {
        ar5_00 = 0;
        *(int *)(DAT_8c2784c0 + 400) = ar4;
        *(int *)(DAT_8c2784c0 + 0x188) = *(int *)(DAT_8c2784c0 + 0x188) + 1;
        uVar1 = *(undefined4 *)(DAT_8c2784c0 + 0x1ac);
        _DAT_8c4bd404 = FUN_8c1f9194(uVar1,0,ar6,ar7);
        if (_DAT_8c4bd404 != 0) {
          FUN_8c2658e2(uVar1,ar5_00,ar6,ar7,in_stack_ffffffdc);
        }
      }
    }
  }
  if (iVar2 != 0) {
    FUN_8c2688a0(aica_ram_2657ec,iVar2,ar6,ar7,in_stack_ffffffdc);
  }
  return iVar2;
}



/* noop_2658de @ 8c2658de callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_2658de(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c2658e2 @ 8c2658e2 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2658e2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(int *)PTR_DAT_8c265928 = *(int *)PTR_DAT_8c265928 + 1;
  return in_r0;
}



/* FUN_8c26592c @ 8c26592c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c26592c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  byte in_MD;
  byte bVar3;
  byte in_RB;
  byte bVar4;
  byte in_BL;
  byte bVar5;
  byte in_FD;
  byte bVar6;
  byte in_M;
  byte extraout_M;
  byte extraout_M_00;
  byte extraout_M_01;
  byte extraout_M_02;
  byte bVar7;
  byte in_Q;
  byte extraout_Q;
  byte extraout_Q_00;
  byte extraout_Q_01;
  byte extraout_Q_02;
  byte bVar8;
  byte in_IMASK;
  byte bVar9;
  byte in_S;
  byte extraout_S;
  byte extraout_S_00;
  byte extraout_S_01;
  byte extraout_S_02;
  byte bVar10;
  byte in_T;
  byte extraout_T;
  byte extraout_T_00;
  byte bVar11;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  uint uStack_c;
  
  puVar1 = PTR_FUN_8c2659c4;
  uStack_c = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  bVar5 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar3 = bVar5 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar9 = (byte)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  bVar6 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar5 = (bVar5 & 0x10) >> 4;
  bVar4 = (bVar3 & 0x20) >> 5;
  bVar3 = ((bVar3 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  *(undefined4 *)(ar4 + 4) = 1;
  (*(code *)puVar1)(ar4,ar5,ar6,ar7);
  puVar1 = PTR_DAT_8c2659c8;
  *(undefined4 *)((int)DAT_8c2659bc + *(int *)PTR_DAT_8c2659c8) = 0;
  iVar2 = *(int *)puVar1;
  *(int *)(DAT_8c2659be + iVar2) = *(int *)(DAT_8c2659be + iVar2) + 1;
  (*(code *)PTR_FUN_8c2659cc)(&iStack_10,ar5,ar6,ar7);
  bVar11 = 0;
  bVar7 = extraout_M;
  bVar8 = extraout_Q;
  bVar10 = extraout_S;
  if (0 < iStack_10) {
    (*(code *)PTR_FUN_8c2659d0)(&uStack_18,&uStack_14,ar6,ar7);
    iVar2 = *(int *)(*(int *)puVar1 + (int)DAT_8c2659c0);
    if (iVar2 == 0) {
      (*(code *)PTR_FUN_8c2659d4)(uStack_18,uStack_14,ar6,ar7);
      bVar7 = extraout_M_01;
      bVar8 = extraout_Q_01;
      bVar10 = extraout_S_01;
      bVar11 = extraout_T;
    }
    else if (iVar2 == 1) {
      (*(code *)PTR_aica_ram_2657ec_8c2659d8)(uStack_18,uStack_14,ar6,ar7);
      bVar7 = extraout_M_02;
      bVar8 = extraout_Q_02;
      bVar10 = extraout_S_02;
      bVar11 = extraout_T_00;
    }
    else {
      bVar11 = 0;
      bVar7 = extraout_M_00;
      bVar8 = extraout_Q_00;
      bVar10 = extraout_S_00;
    }
  }
  return (uStack_c & 0xf) << 4 |
         ((uint)bVar11 | (uint)bVar10 << 1 | (uint)bVar9 << 4 | (uint)bVar8 << 8 | (uint)bVar7 << 9
          | (uint)bVar6 << 0xf | (uint)bVar5 << 0x1c | (uint)bVar4 << 0x1d | (uint)bVar3 << 0x1e) &
         (int)DAT_8c2659ba;
}



/* FUN_8c2659dc @ 8c2659dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2659dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = DAT_8c265a20;
  if ((ar4 != 0) && (iVar2 = iVar1, *(int *)(ar4 + 0x10) != 0)) {
    if (*(int *)(ar4 + 0x10) == -1) {
      *(undefined4 *)(ar4 + 0x18) = 1;
    }
    else {
      (**(code **)(ar4 + 0x10))(*(undefined4 *)(ar4 + 0x14));
    }
  }
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_8c265a28)(PTR_FUN_8c265a24,iVar2);
  }
  return iVar2;
}



/* FUN_8c2659e4 @ 8c2659e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2659e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int unaff_r13;
  char in_T;
  undefined4 in_PR;
  
  if (in_T == '\0') {
    if (*(int *)(ar4 + 0x10) != 0) {
      if (*(int *)(ar4 + 0x10) == -1) {
        *(undefined4 *)(ar4 + 0x18) = 1;
      }
      else {
        (**(code **)(ar4 + 0x10))(*(undefined4 *)(ar4 + 0x14),ar5,ar6,ar7);
      }
    }
  }
  else {
    unaff_r13 = 0x7000103;
  }
  if (unaff_r13 != 0) {
    FUN_8c2688a0(FUN_8c2659dc,unaff_r13,ar6,ar7,in_PR);
  }
  return unaff_r13;
}



/* FUN_8c265a2c @ 8c265a2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265a2c(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  
  ar5_00 = 0;
  FUN_8c265e08(ar4,ar5,ar6,ar7);
  if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar5 == (undefined4 *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    *ar5 = *(undefined4 *)(ar4 + 4);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265a2c,ar5_00,ar6,ar7,ar5);
  }
  return ar5_00;
}



/* FUN_8c265ab0 @ 8c265ab0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c265ab0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)PTR_DAT_8c265ac4 != 0) {
    *ar4 = *(undefined4 *)((int)DAT_8c265ac2 + *(int *)PTR_DAT_8c265ac4);
  }
  return 0;
}



/* FUN_8c265ac8 @ 8c265ac8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c265ac8(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  int *ar6_00;
  undefined4 ar7_00;
  int iVar2;
  int ar5_00;
  
  ar7_00 = 0;
  ar6_00 = &DAT_8c2784c0;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *(undefined4 *)(DAT_8c2784c0 + 0x17c) = ar4;
    iVar2 = 0;
    *(int *)(DAT_8c2784c0 + 0x180) = ar5;
    *(undefined4 *)(DAT_8c2784c0 + 0x184) = 0;
    *(undefined4 *)(DAT_8c2784c0 + 0x188) = 0;
    *(undefined4 *)(DAT_8c2784c0 + 0x18c) = 0;
    in_r0 = 400;
    *(undefined4 *)(DAT_8c2784c0 + 400) = 0;
    _DAT_8c4bd408 = DAT_8c2784c0 + 0x17c;
    iVar1 = 0;
    if (0 < ar5) {
      do {
        in_r0 = FUN_8c010794(0x20,*(int *)(*ar6_00 + 0x17c) + iVar1,&DAT_8c2784f8);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x20;
      } while (iVar2 < ar5);
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265ac8,ar5_00,ar6_00,ar7_00,in_r0);
  }
  return ar5_00;
}



/* FUN_8c265ace @ 8c265ace callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c265ace(undefined4 ar4,int ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_PR;
  
  iVar2 = ar7;
  if (*ar6 == 0) {
    ar7 = 0xd000001;
  }
  else {
    *(undefined4 *)(*ar6 + 0x17c) = ar4;
    *(int *)(*ar6 + 0x180) = ar5;
    *(int *)(*ar6 + 0x184) = ar7;
    *(int *)(*ar6 + 0x188) = ar7;
    *(int *)(*ar6 + 0x18c) = ar7;
    *(int *)(*ar6 + 400) = ar7;
    _DAT_8c4bd408 = *ar6 + 0x17c;
    iVar1 = ar7;
    iVar3 = ar7;
    if (0 < ar5) {
      do {
        FUN_8c010794(0x20,*(int *)(*ar6 + 0x17c) + iVar1,&DAT_8c2784f8);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x20;
      } while (iVar3 < ar5);
    }
  }
  if (ar7 != 0) {
    FUN_8c2688a0(FUN_8c265ac8,ar7,ar6,iVar2,in_PR);
  }
  return ar7;
}



/* FUN_8c265b68 @ 8c265b68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265b68(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int ar5_00;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    in_r0 = 0x1a4;
    *ar4 = *(undefined4 *)(DAT_8c2784c0 + 0x1a4);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265b68,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}



/* FUN_8c265b6a @ 8c265b6a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265b6a(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r3;
  int ar5_00;
  undefined4 in_PR;
  
  ar5_00 = 0;
  if (*in_r3 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *ar4 = *(undefined4 *)(*in_r3 + 0x1a4);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265b68,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c265ba8 @ 8c265ba8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c265ba8(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  int *ar6_00;
  undefined4 ar7_00;
  int ar5_00;
  int iVar2;
  
  ar7_00 = 0;
  ar6_00 = &DAT_8c2784c0;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *(undefined4 *)(DAT_8c2784c0 + 0x194) = ar4;
    iVar2 = 0;
    *(int *)(DAT_8c2784c0 + 0x198) = ar5;
    *(undefined4 *)(DAT_8c2784c0 + 0x19c) = 0;
    *(undefined4 *)(DAT_8c2784c0 + 0x1a0) = 0;
    in_r0 = 0x1a4;
    *(undefined4 *)(DAT_8c2784c0 + 0x1a4) = 0;
    _DAT_8c4bd418 = DAT_8c2784c0 + 0x194;
    iVar1 = 0;
    _DAT_8c4bd410 = ar4;
    _DAT_8c4bd414 = ar5;
    if (0 < ar5) {
      do {
        in_r0 = FUN_8c010794(8,*(int *)(*ar6_00 + 0x194) + iVar1,&DAT_8c278518);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar2 < ar5);
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265ba8,ar5_00,ar6_00,ar7_00,in_r0);
  }
  return ar5_00;
}



/* FUN_8c265bae @ 8c265bae callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c265bae(undefined4 ar4,int ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_PR;
  
  iVar2 = ar7;
  if (*ar6 == 0) {
    ar7 = 0xd000001;
  }
  else {
    *(undefined4 *)(*ar6 + 0x194) = ar4;
    *(int *)(*ar6 + 0x198) = ar5;
    *(int *)(*ar6 + 0x19c) = ar7;
    *(int *)(*ar6 + 0x1a0) = ar7;
    *(int *)(*ar6 + 0x1a4) = ar7;
    _DAT_8c4bd418 = *ar6 + 0x194;
    iVar1 = ar7;
    iVar3 = ar7;
    _DAT_8c4bd410 = ar4;
    _DAT_8c4bd414 = ar5;
    if (0 < ar5) {
      do {
        FUN_8c010794(8,*(int *)(*ar6 + 0x194) + iVar1,&DAT_8c278518);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar3 < ar5);
    }
  }
  if (ar7 != 0) {
    FUN_8c2688a0(FUN_8c265ba8,ar7,ar6,iVar2,in_PR);
  }
  return ar7;
}



/* FUN_8c265c50 @ 8c265c50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265c50(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar7_00;
  int ar5_00;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  ar7_00 = DAT_8c2784c0;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *ar4 = *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x1a0) * 8 + *(int *)(DAT_8c2784c0 + 0x194));
    *ar5 = *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x1a0) * 8 + *(int *)(DAT_8c2784c0 + 0x194) + 4);
    *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x1a0) * 8 + *(int *)(DAT_8c2784c0 + 0x194)) = 0;
    *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x1a0) * 8 + *(int *)(DAT_8c2784c0 + 0x194) + 4) = 0;
    *(int *)(DAT_8c2784c0 + 0x1a0) = *(int *)(DAT_8c2784c0 + 0x1a0) + 1;
    if (*(int *)(DAT_8c2784c0 + 0x1a0) == *(int *)(DAT_8c2784c0 + 0x198)) {
      *(undefined4 *)(DAT_8c2784c0 + 0x1a0) = 0;
    }
    *(int *)(DAT_8c2784c0 + 0x1a4) = *(int *)(DAT_8c2784c0 + 0x1a4) + -1;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265c50,ar5_00,&DAT_8c2784c0,ar7_00,
                 (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  }
  return ar5_00;
}



/* FUN_8c265d38 @ 8c265d38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265d38(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar7_00;
  int ar5_00;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  ar7_00 = DAT_8c2784c0;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (*(int *)(DAT_8c2784c0 + 0x1a4) < *(int *)(DAT_8c2784c0 + 0x198)) {
    *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x19c) * 8 + *(int *)(DAT_8c2784c0 + 0x194)) = ar4;
    *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x19c) * 8 + *(int *)(DAT_8c2784c0 + 0x194) + 4) = ar5;
    *(int *)(DAT_8c2784c0 + 0x19c) = *(int *)(DAT_8c2784c0 + 0x19c) + 1;
    if (*(int *)(DAT_8c2784c0 + 0x19c) == *(int *)(DAT_8c2784c0 + 0x198)) {
      *(undefined4 *)(DAT_8c2784c0 + 0x19c) = 0;
    }
    *(int *)(DAT_8c2784c0 + 0x1a4) = *(int *)(DAT_8c2784c0 + 0x1a4) + 1;
  }
  else {
    ar5_00 = 0x5000101;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265d38,ar5_00,&DAT_8c2784c0,ar7_00,
                 (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  }
  return ar5_00;
}



/* FUN_8c265e08 @ 8c265e08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c265e08(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar5_00;
  char in_IMASK;
  char in_S;
  byte in_T;
  int aiStack_10 [2];
  
  ar5_00 = aiStack_10;
  if ((((*(int *)PTR_DAT_8c265e74 != 0) &&
       ((byte)((in_T | in_S << 1) & 0xf0 | in_IMASK << 4) == 0xf0)) &&
      ((*(code *)PTR_FUN_8c265e78)
                 (*(undefined4 *)((int)DAT_8c265e6e + *(int *)PTR_DAT_8c265e74),aiStack_10,ar6,ar7),
      aiStack_10[0] == 0)) && (*(int *)((int)DAT_8c265e70 + *(int *)PTR_DAT_8c265e74) != 0)) {
    (*(code *)PTR_FUN_8c265e7c)
              (*(undefined4 *)((int)DAT_8c265e6e + *(int *)PTR_DAT_8c265e74),ar5_00,ar6,ar7);
  }
  return 0;
}



/* FUN_8c265e80 @ 8c265e80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c265e80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 8) = ar5;
  return 0;
}



/* FUN_8c265e88 @ 8c265e88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c265e88(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = DAT_8c265e9c;
  if (ar4 != 0) {
    *(undefined4 *)(ar4 + 0x10) = ar5;
    *(undefined4 *)(ar4 + 0x14) = ar6;
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c265ea0 @ 8c265ea0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265ea0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  int in_stack_ffffffe0;
  
  ar5_00 = 0;
  uVar1 = ar6;
  uVar2 = ar7;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c265a2c(ar4,&stack0xffffffe0,ar6,ar7);
    if (in_stack_ffffffe0 == 2) {
      ar5_00 = 0x6000001;
    }
    else {
      FUN_8c265f74(ar4,0,uVar1,uVar2);
      FUN_8c265e80(ar4,ar5,uVar1,uVar2);
      FUN_8c265f7c(ar4,ar6,uVar1,uVar2);
      FUN_8c265e88(ar4,ar7,s0,uVar2);
      FUN_8c265f74(ar4,0,s0,uVar2);
      uVar1 = s0;
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265ea0,ar5_00,uVar1,uVar2,in_stack_ffffffe0);
  }
  return ar5_00;
}



/* FUN_8c265f74 @ 8c265f74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c265f74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = ar5;
  return 0;
}



/* FUN_8c265f7c @ 8c265f7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c265f7c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0xc) = ar5;
  return 0;
}



/* FUN_8c265f84 @ 8c265f84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c265f84(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 a4;
  
  puVar2 = PTR_FUN_8c265ff0;
  puVar1 = PTR_DAT_8c265fec;
  a4 = ar4;
  if (*(int *)PTR_DAT_8c265fec != 0) {
    while (*(int *)((int)DAT_8c265fe6 + *(int *)puVar1) != 0) {
      (*(code *)puVar2)(a4,ar5,ar6,ar7);
    }
    *(undefined4 *)((int)DAT_8c265fe8 + *(int *)puVar1) = ar4;
  }
  return 0;
}



/* FUN_8c265ff4 @ 8c265ff4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c265ff4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  int ar5_00;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  undefined4 in_stack_ffffffd4;
  undefined4 uVar1;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  ar5_00 = 0;
  uStack_1c = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  uVar1 = in_stack_ffffffd4;
  uStack_20 = ar5;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c265a2c(ar4,&iStack_24,ar6,ar7);
    uVar1 = in_stack_ffffffd4;
    if (iStack_24 == 2) {
      ar5_00 = 0x6000001;
    }
    else {
      _DAT_8c4bd404 = 0;
      *(undefined4 *)(ar4 + 0x18) = 0;
      if (*(int *)(DAT_8c2784c0 + 0x1a8) == 0) {
        ar5_00 = FUN_8c265620(ar4,uStack_20,ar6,ar7);
        uVar1 = in_stack_ffffffd4;
        if (ar5_00 == 0) {
          return 0;
        }
      }
      else if (((*(int *)(DAT_8c2784c0 + 0x1a8) == 1) &&
               (ar5_00 = FUN_8c265d38(ar4,uStack_20,ar6,ar7), uVar1 = in_stack_ffffffd4, ar5_00 == 0
               )) && (*(int *)(DAT_8c2784c0 + 400) == 0)) {
        FUN_8c265c50(&stack0xffffffd4,&uStack_28,ar6,ar7);
        uVar1 = in_stack_ffffffd4;
        ar5_00 = aica_ram_2657ec(in_stack_ffffffd4,uStack_28,ar6,ar7);
        if ((ar5_00 == 0) && (a5 = uStack_28, *(int *)(ar4 + 0x10) == -1)) {
          while (*(int *)(ar4 + 0x18) != 1) {
            FUN_8c2688e0(in_stack_ffffffd4,a5,ar6,ar7);
            noop_2658de(in_stack_ffffffd4,a5,ar6,ar7);
          }
        }
      }
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265ff4,ar5_00,ar6,ar7,uVar1);
  }
  return ar5_00;
}



/* FUN_8c266134 @ 8c266134 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266134(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    aica_ram_268618(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 0x18,
                    &stack0xfffffff0,ar6,ar7);
    *ar5 = in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266134,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c2661a4 @ 8c2661a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2661a4(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c268650(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 0x11,&stack0xfffffff0,
                 ar6,ar7);
    *ar5 = (char)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(&LAB_8c2664c4,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c266214 @ 8c266214 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266214(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  uint in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c26868c(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 0x1c,&stack0xfffffff0,
                 ar6,ar7);
    *ar5 = in_stack_fffffff0 & 0xffff;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266214,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c266288 @ 8c266288 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266288(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  uint in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c26870c(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8),&stack0xfffffff0,ar6,ar7
                );
    *ar5 = in_stack_fffffff0 & 0xff;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266288,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c2662f8 @ 8c2662f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2662f8(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c268650(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 0x10,&stack0xfffffff0,
                 ar6,ar7);
    *ar5 = (char)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2662f8,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c266368 @ 8c266368 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266368(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c268650(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 2,&stack0xfffffff0,ar6
                 ,ar7);
    *ar5 = (char)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266368,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c2663d8 @ 8c2663d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2663d8(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    aica_ram_268618(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 8,&stack0xfffffff0,
                    ar6,ar7);
    *ar5 = (short)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2663d8,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return 0;
}



/* FUN_8c266448 @ 8c266448 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266448(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  int in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    aica_ram_268618(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 4,&stack0xfffffff0,
                    ar6,ar7);
    iVar1 = in_stack_fffffff0;
    if (in_stack_fffffff0 < 0) {
      iVar1 = in_stack_fffffff0 + 3;
    }
    *ar5 = (short)(iVar1 >> 2);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266448,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c2664d4 @ 8c2664d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2664d4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int unaff_r11;
  int unaff_r13;
  undefined1 *unaff_r14;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    unaff_r11 = 0xd000001;
  }
  else if (unaff_r13 == 0) {
    unaff_r11 = 0x7000103;
  }
  else {
    FUN_8c266214(unaff_r13,unaff_r14 + 0x14,ar6,ar7);
    FUN_8c266288(unaff_r13,unaff_r14 + 0x18,ar6,ar7);
    *unaff_r14 = (char)unaff_r11;
    unaff_r14[1] = (char)unaff_r11;
    FUN_8c266620(unaff_r13,unaff_r14 + 2,ar6,ar7);
    FUN_8c266368(unaff_r13,unaff_r14 + 3,ar6,ar7);
    FUN_8c2663d8(unaff_r13,unaff_r14 + 6,ar6,ar7);
    FUN_8c266448(unaff_r13,unaff_r14 + 8,ar6,ar7);
    FUN_8c2662f8(unaff_r13,unaff_r14 + 4,ar6,ar7);
    FUN_8c2661a4(unaff_r13,unaff_r14 + 5,ar6,ar7);
    FUN_8c266134(unaff_r13,unaff_r14 + 0x10,ar6,ar7);
    FUN_8c2665b0(unaff_r13,unaff_r14 + 0xc,ar6,ar7);
  }
  if (unaff_r11 != 0) {
    FUN_8c2688a0(&LAB_8c2664c4,unaff_r11,ar6,ar7,in_PR);
  }
  return unaff_r11;
}



/* FUN_8c2665b0 @ 8c2665b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2665b0(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    aica_ram_2686d4(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 0x14,
                    &stack0xfffffff0,ar6,ar7);
    *ar5 = in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2665b0,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c266620 @ 8c266620 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266620(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c268650(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 1,&stack0xfffffff0,ar6
                 ,ar7);
    *ar5 = (char)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266620,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c266690 @ 8c266690 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266690(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c2666bc;
  if ((ar4 != 0) && (iVar1 = 0, *(int *)(ar4 + 4) != 1)) {
    iVar1 = DAT_8c2666c0;
  }
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c2666c8)(PTR_FUN_8c2666c4,iVar1);
  }
  return iVar1;
}



/* FUN_8c266694 @ 8c266694 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266694(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  char in_T;
  undefined4 in_PR;
  
  ar5_00 = 0;
  if (in_T == '\0') {
    if (*(int *)(ar4 + 4) != 1) {
      ar5_00 = 0x7000102;
    }
  }
  else {
    ar5_00 = 0x7000103;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266690,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c2666cc @ 8c2666cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2666cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  
  ar5_00 = FUN_8c266690(ar4,ar5,ar6,ar7);
  if (ar5_00 == 0) {
    *(undefined4 *)(ar4 + 4) = 0;
  }
  else {
    FUN_8c2688a0(FUN_8c2666cc,ar5_00,ar6,ar7,ar4);
  }
  return ar5_00;
}



/* FUN_8c266708 @ 8c266708 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266708(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_8c2667c0;
  iVar3 = *(int *)PTR_DAT_8c2667b8;
  if (ar5 == 1) {
    iVar2 = 0;
    iVar3 = iVar3 + 8;
    do {
      if (*(int *)(iVar3 + 4) != 1) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < 8);
joined_r0x8c266742:
    if (iVar2 == 8) {
LAB_8c266782:
      iVar3 = 0;
    }
  }
  else {
    if (ar5 == 2) {
      iVar2 = 0;
      iVar3 = iVar3 + 0x48;
      do {
        if (*(int *)(iVar3 + 4) != 1) break;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 8;
      } while (iVar2 < 8);
      goto joined_r0x8c266742;
    }
    iVar2 = DAT_8c2667bc;
    if (ar5 != 3) goto LAB_8c2667a0;
    iVar2 = 0;
    iVar3 = DAT_8c2667b6 + iVar3;
    do {
      if (*(int *)(iVar3 + 4) != 1) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < 4);
    if (iVar2 == 4) goto LAB_8c266782;
  }
  if (iVar3 == 0) {
    *ar4 = 0;
    iVar2 = iVar1;
  }
  else {
    *ar4 = iVar3;
    *(undefined4 *)(iVar3 + 4) = 1;
    iVar2 = 0;
  }
LAB_8c2667a0:
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_8c2667c8)(PTR_FUN_8c2667c4,iVar2);
  }
  return iVar2;
}



/* FUN_8c266710 @ 8c266710 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266710(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  int ar6_00;
  int iVar2;
  int unaff_r13;
  undefined4 in_PR;
  
  ar6_00 = 8;
  iVar2 = unaff_r13;
  if (ain0 == 1) {
    iVar1 = DAT_8c2784c0 + 8;
    do {
      if (*(int *)(iVar1 + 4) != 1) break;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 8;
    } while (iVar2 < 8);
joined_r0x8c266742:
    if (iVar2 == 8) {
LAB_8c266782:
      iVar1 = unaff_r13;
    }
  }
  else {
    if (ain0 == 2) {
      iVar1 = DAT_8c2784c0 + 0x48;
      do {
        if (*(int *)(iVar1 + 4) != 1) break;
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar2 < 8);
      goto joined_r0x8c266742;
    }
    if (ain0 != 3) {
      iVar2 = DAT_8c2784c0;
      iVar1 = 0x7fffffff;
      goto LAB_8c2667a0;
    }
    iVar1 = DAT_8c2784c0 + 0x88;
    iVar2 = 4;
    ar6_00 = unaff_r13;
    do {
      if (*(int *)(iVar1 + 4) != 1) break;
      ar6_00 = ar6_00 + 1;
      iVar1 = iVar1 + 8;
    } while (ar6_00 < 4);
    if (ar6_00 == 4) goto LAB_8c266782;
  }
  if (iVar1 == 0) {
    iVar1 = 0x7000101;
    *ar4 = unaff_r13;
  }
  else {
    *ar4 = iVar1;
    *(undefined4 *)(iVar1 + 4) = 1;
    iVar1 = unaff_r13;
  }
LAB_8c2667a0:
  if (iVar1 != 0) {
    FUN_8c2688a0(FUN_8c266708,iVar1,ar6_00,iVar2,in_PR);
  }
  return iVar1;
}



/* FUN_8c2667cc @ 8c2667cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2667cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_8c2668e4;
  uVar4 = (uint)DAT_8c2668e0;
  uVar3 = 0;
  do {
    *(undefined1 *)(*(int *)puVar1 + uVar3 + 1) = 0;
    iVar2 = *(int *)puVar1 + uVar3;
    uVar3 = uVar3 + 8;
    *(undefined4 *)(iVar2 + 4) = 0;
  } while (uVar3 < uVar4);
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    *(char *)(*(int *)puVar1 + uVar3 * 8 + 9) = (char)uVar3;
    *(undefined1 *)(uVar3 * 8 + *(int *)puVar1 + 8) = 1;
    uVar3 = uVar4;
  } while (uVar4 < 8);
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    *(char *)(*(int *)puVar1 + uVar3 * 8 + 0x49) = (char)uVar3;
    *(undefined1 *)(uVar3 * 8 + *(int *)puVar1 + 0x48) = 2;
    uVar3 = uVar4;
  } while (uVar4 < 8);
  uVar3 = 0;
  do {
    iVar5 = uVar3 * 8;
    iVar2 = (int)DAT_8c2668e2;
    *(char *)((int)DAT_8c2668e2 + *(int *)puVar1 + iVar5 + 1) = (char)uVar3;
    uVar3 = uVar3 + 1;
    *(undefined1 *)(iVar5 + iVar2 + *(int *)puVar1) = 3;
  } while (uVar3 < 4);
  *(undefined1 *)(*(int *)puVar1 + 1) = 0;
  **(undefined1 **)puVar1 = 9;
  return 0;
}



/* FUN_8c26686e @ 8c26686e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26686e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_PR;
  
  ar5_00 = 0;
  if ((ar4 < 0) || (0x20 < ar4)) {
    ar5_00 = 0x3000001;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(&LAB_8c26686a,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c266892 @ 8c266892 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266892(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)ar5;
  if ((cVar1 < '\0') || ('\x10' < cVar1)) {
    iVar2 = 0x3000001;
  }
  else {
    iVar2 = FUN_8c266690(ar4,ar5,ar6,ar7);
    iVar2 = -((iVar2 == 0) - 1);
    if (iVar2 == 0) {
      return 0;
    }
    *(char *)(ar4 + 2) = cVar1;
  }
  if (iVar2 != 0) {
    FUN_8c2688a0(FUN_8c266892,iVar2,ar6,ar7,ar4);
  }
  return iVar2;
}



/* aica_ram_2668fc @ 8c2668fc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int aica_ram_2668fc(int ar4,uint ar5,uint ar6,int ar7)

{
  uint ar6_00;
  int iVar1;
  int ar5_00;
  
  ar5_00 = 0;
  if (((ar5 & 3) == 0) && ((ar6 & 3) == 0)) {
    iVar1 = ar6 + 3;
    if (iVar1 < 0) {
      iVar1 = ar6 + 6;
    }
    ar7 = iVar1 >> 2;
    ar6_00 = 4;
    _DAT_8c4bd404 = FUN_8c1f92c0(ar4 + -0x5f800000,ar5,4,ar7,1,1);
  }
  else {
    ar5_00 = 0x7fffffff;
    ar6_00 = ar6;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(aica_ram_2668fc,ar5_00,ar6_00,ar7,ar6);
  }
  return ar5_00;
}



/* aica_ram_266970 @ 8c266970 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int aica_ram_266970(uint ar4,int ar5,uint ar6,code *ar7,undefined4 s0)

{
  int ar5_00;
  uint uVar1;
  code *ar7_00;
  int ar5_01;
  
  ar5_01 = 0;
  if (((ar4 & 3) == 0) && ((ar6 & 3) == 0)) {
    uVar1 = ar6;
    if ((int)ar6 < 0) {
      uVar1 = ar6 + 3;
    }
    ar7_00 = (code *)((int)uVar1 >> 2);
    ar5_00 = ar5 + -0x5f800000;
    uVar1 = 4;
    _DAT_8c4bd404 = FUN_8c1f9610(ar4,ar5_00,4,ar7_00,1,1);
    if ((ar7 != (code *)0x0) && (ar7 != (code *)0xffffffff)) {
      (*ar7)(s0,ar5_00,uVar1,ar7_00);
    }
  }
  else {
    ar5_01 = 0x7fffffff;
    uVar1 = ar6;
    ar7_00 = ar7;
  }
  if (ar5_01 != 0) {
    FUN_8c2688a0(aica_ram_266970,ar5_01,uVar1,ar7_00,ar6);
  }
  return ar5_01;
}



/* FUN_8c2669f4 @ 8c2669f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2669f4(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  int *piVar4;
  int ar4_00;
  
  ar4_00 = 0;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    piVar3 = *(int **)(ar4 + 8);
    if (*piVar3 == 0x544c4d53) {
      FUN_8c265704(&stack0xffffffdc,ar5,ar6,ar7);
      iVar1 = piVar3[2];
      piVar4 = piVar3 + 8;
      if ((char)piVar3[1] < '\x01') {
        if (piVar3[4] != -1) {
          piVar4 = piVar3 + 4;
        }
        ar5_00 = 0x9000002;
      }
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          if (-1 < piVar4[3]) {
            ar5 = piVar4[1];
            ar7 = piVar4[3];
            ar6 = piVar4[2];
            ar5_00 = FUN_8c268320(*piVar4,ar5,ar6,ar7);
            if (ar5_00 != 0) break;
          }
          if (0 < piVar4[5]) {
            ar7 = -1;
            ar6 = piVar4[5];
            ar5 = piVar4[4] + (int)piVar3;
            ar5_00 = FUN_8c265ea0(ar4_00,ar5,ar6,0xffffffff,0);
            if (ar5_00 != 0) break;
            ar5 = *piVar4;
            ar6 = piVar4[1];
            ar5_00 = FUN_8c265374(ar4_00,ar5,ar6,ar7);
            if (ar5_00 != 0) break;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 8;
        } while (iVar2 < iVar1);
      }
    }
    else {
      ar5_00 = 0x9000001;
    }
  }
  if (ar4_00 != 0) {
    FUN_8c265784(ar4_00,ar5,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2669f4,ar5_00,ar6,ar7,ar4_00);
  }
  return ar5_00;
}



/* FUN_8c266b08 @ 8c266b08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c266b08(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar6_00;
  undefined *ar7_00;
  
  if (*(int *)(DAT_8c2784c0 + 0x15c) != 0) {
    *(undefined4 *)(DAT_8c2784c0 + 0x160) = 1;
    if ((*(uint *)(DAT_8c2784c0 + 0x15c) & 1) != 0) {
      *(int *)(DAT_8c2784c0 + 0x15c) = *(int *)(DAT_8c2784c0 + 0x15c) + 1;
    }
    ar7_00 = (undefined *)0x8c266b70;
    ar6_00 = *(int *)(DAT_8c2784c0 + 0x15c) << 4;
    FUN_8c265ea0(*(undefined4 *)(DAT_8c2784c0 + 0x178),*(undefined4 *)(DAT_8c2784c0 + 0x158),ar6_00,
                 (undefined *)0x8c266b70,DAT_8c2784c0 + 0x158);
    FUN_8c265ff4(*(undefined4 *)(DAT_8c2784c0 + 0x178),*(undefined4 *)(DAT_8c2784c0 + 0x1c4),ar6_00,
                 ar7_00);
  }
  return 0;
}



/* FUN_8c266b0e @ 8c266b0e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c266b0e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int ar6_00;
  undefined *ar7_00;
  int *unaff_r14;
  
  if (*(int *)(in_r0 + *unaff_r14) != 0) {
    iVar1 = (int)DAT_8c266bb6;
    *(undefined4 *)(iVar1 + *unaff_r14) = 1;
    if ((*(uint *)(iVar1 + -4 + *unaff_r14) & 1) != 0) {
      *(int *)((int)DAT_8c266bb4 + *unaff_r14) = *(int *)((int)DAT_8c266bb4 + *unaff_r14) + 1;
    }
    iVar1 = (int)DAT_8c266bb4;
    ar6_00 = *(int *)(iVar1 + *unaff_r14) << 4;
    ar7_00 = PTR_LAB_8c266bc4;
    (*(code *)PTR_FUN_8c266bc8)
              (*(undefined4 *)(iVar1 + 0x1c + *unaff_r14),*(undefined4 *)(iVar1 + -4 + *unaff_r14),
               ar6_00,PTR_LAB_8c266bc4,(int)DAT_8c266bb8 + *unaff_r14);
    (*(code *)PTR_FUN_8c266bcc)
              (*(undefined4 *)(DAT_8c266bba + -0x4c + *unaff_r14),
               *(undefined4 *)((int)DAT_8c266bba + *unaff_r14),ar6_00,ar7_00);
  }
  return 0;
}



/* FUN_8c266b76 @ 8c266b76 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266b76(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *unaff_r14;
  
  (*(code *)PTR_FUN_8c266bd0)(*(undefined4 *)((int)DAT_8c266bbc + *unaff_r14),ar5,ar6,ar7);
  for (iVar2 = 0; iVar1 = (int)DAT_8c266bb4, iVar2 < *(int *)(iVar1 + *unaff_r14); iVar2 = iVar2 + 1
      ) {
    *(undefined1 *)(iVar2 * 0x10 + *(int *)((int)DAT_8c266bb8 + *unaff_r14)) = 0;
  }
  *(undefined4 *)(iVar1 + *unaff_r14) = 0;
  *(undefined4 *)(iVar1 + 4 + *unaff_r14) = 0;
  return iVar1 + 4;
}



/* FUN_8c266bd4 @ 8c266bd4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266bd4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = PTR_memset_8c266c38;
  puVar2 = DAT_8c266c34;
  puVar1 = PTR_DAT_8c266c2c;
  iVar4 = DAT_8c266c30;
  if (*(int *)PTR_DAT_8c266c2c != 0) {
    iVar4 = (int)DAT_8c266c26;
    *(undefined4 *)((int)DAT_8c266c24 + *(int *)PTR_DAT_8c266c2c) = ar4;
    *puVar2 = ar4;
    (*(code *)puVar3)(0,iVar4);
    *(undefined4 *)((int)DAT_8c266c28 + *(int *)puVar1) = 0;
    iVar4 = (*(code *)PTR_FUN_8c266c3c)(*(int *)puVar1 + (int)DAT_8c266c2a);
  }
  if (iVar4 != 0) {
    (*(code *)PTR_FUN_8c266c44)(PTR_FUN_8c266c40,iVar4);
  }
  return iVar4;
}



/* FUN_8c266bda @ 8c266bda callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c266bda(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  int *unaff_r13;
  int ar5_01;
  undefined4 in_PR;
  
  if (*unaff_r13 == 0) {
    ar5_01 = 0xd000001;
  }
  else {
    ar6 = 0x200;
    *(undefined4 *)(*unaff_r13 + 0x158) = ar4;
    ar5_00 = 0;
    _DAT_8c4bd420 = ar4;
    memset(ar4,0,0x200,ar7);
    *(undefined4 *)(*unaff_r13 + 0x160) = 0;
    ar5_01 = FUN_8c265704(*unaff_r13 + 0x178,ar5_00,ar6,ar7);
  }
  if (ar5_01 != 0) {
    FUN_8c2688a0(FUN_8c266bd4,ar5_01,ar6,ar7,in_PR);
  }
  return ar5_01;
}



/* FUN_8c266c48 @ 8c266c48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266c48(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar2 = (int)DAT_8c266cb4;
  iVar3 = *(int *)PTR_DAT_8c266cb8;
  iVar4 = DAT_8c266cbc;
  if (*(int *)(iVar2 + iVar3) < 0x20) {
    iVar4 = *(int *)(iVar2 + iVar3);
    *(int *)(iVar2 + iVar3) = iVar4 + 1;
    puVar1 = PTR_memmove_8c266cc0;
    puVar5 = (undefined1 *)(iVar4 * 0x10 + *(int *)(iVar2 + -4 + iVar3));
    *puVar5 = (char)*ar4;
    (*(code *)puVar1)(puVar5 + 2,ar4 + 1,0xe,0);
    puVar1 = PTR_DAT_8c266cb8;
    iVar4 = (int)DAT_8c266cb6;
    ar4[5] = 0;
    *(int *)(iVar4 + *(int *)puVar1) = *(int *)(iVar4 + *(int *)puVar1) + -1;
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    (*(code *)PTR_FUN_8c266cc8)(PTR_FUN_8c266cc4,iVar4);
  }
  return iVar4;
}



/* FUN_8c266c54 @ 8c266c54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266c54(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int in_r2;
  int *in_r3;
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *unaff_r13;
  int ar5_00;
  undefined4 in_PR;
  
  iVar1 = *in_r3;
  ar5_00 = 0;
  if (*(int *)(ain0 + iVar1) < in_r2) {
    iVar2 = *(int *)(ain0 + iVar1);
    *(int *)(ain0 + iVar1) = iVar2 + 1;
    puVar3 = (undefined1 *)(iVar2 * 0x10 + *(int *)(ain0 + -4 + iVar1));
    *puVar3 = (char)*unaff_r13;
    ar6 = 0xe;
    memmove(puVar3 + 2,unaff_r13 + 1,0xe,ar7);
    unaff_r13[5] = 0;
    *(int *)(DAT_8c2784c0 + 0x16c) = *(int *)(DAT_8c2784c0 + 0x16c) + -1;
  }
  else {
    ar5_00 = 0xa000001;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266c48,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c266ccc @ 8c266ccc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266ccc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    in_r0 = FUN_8c2666cc(ar4,ar5,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266ccc,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}



/* FUN_8c266cce @ 8c266cce callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266cce(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    ar5_00 = FUN_8c2666cc(ar4,ar5,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266ccc,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* thunk_FUN_8c266ccc @ 8c266d1c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c266ccc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c266d24)();
  return uVar1;
}



/* FUN_8c266d28 @ 8c266d28 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266d28(int ar4,undefined4 ar5,int *ar6,undefined1 *ar7)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int ar5_00;
  int in_stack_ffffffd8;
  int iStack_1c;
  undefined1 auStack_18 [8];
  
  ar5_00 = 0;
  piVar2 = ar6;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (int *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    piVar3 = (int *)((short)*(char *)(ar4 + 1) * 0x2c + DAT_8c2784c0 + 0xa8);
    aica_ram_268618(*(int *)(DAT_8c2784c0 + 0x1b8) + *(char *)(ar4 + 1) * 0x40 + (char)ar5 * 0x20 +
                    0x418,&stack0xffffffd8,ar6,ar7);
    ar7 = auStack_18;
    piVar2 = &iStack_1c;
    FUN_8c2684f0(0x52535053,(int)*(char *)((int)piVar3 + (char)ar5 + 7),piVar2,ar7);
    iVar1 = *piVar3;
    if (iVar1 == 1) {
      in_stack_ffffffd8 = in_stack_ffffffd8 * 2;
    }
    else if ((iVar1 != 0) && (iVar1 == 2)) {
      in_stack_ffffffd8 = (int)(in_stack_ffffffd8 + (uint)(in_stack_ffffffd8 < 0)) >> 1;
    }
    *ar6 = in_stack_ffffffd8;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266d28,ar5_00,piVar2,ar7,in_stack_ffffffd8);
  }
  return ar5_00;
}



/* thunk_FUN_8c266d28 @ 8c266e20 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c266d28(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c266e28)();
  return uVar1;
}



/* FUN_8c266e2c @ 8c266e2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c266e2c(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int ar6_00;
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  undefined1 *puStack_c;
  
  ar6_00 = *(int *)PTR_DAT_8c266e94;
  uVar1 = DAT_8c266e98;
  if (((ar6_00 != 0) && (uVar1 = DAT_8c266e9c, ar4 != 0)) &&
     (uVar1 = DAT_8c266ea0, ar6 != (undefined1 *)0x0)) {
    puStack_c = ar6;
    (*(code *)PTR_FUN_8c266ea4)
              (*(char *)(ar4 + 1) * 0x40 + (int)DAT_8c266e92 + *(int *)(DAT_8c266e90 + ar6_00) +
               (char)ar5 * 0x20 + 0x11,auStack_10,ar6_00,ar7);
    *puStack_c = auStack_10[0];
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c266ea8 @ 8c266ea8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266ea8(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  iVar1 = DAT_8c2784c0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (undefined4 *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    aica_ram_2686d4(*(char *)(ar4 + 1) * 0x40 + *(int *)(DAT_8c2784c0 + 0x1b8) + (char)ar5 * 0x20 +
                    0x41c,&stack0xfffffff0,DAT_8c2784c0,ar7);
    *ar6 = in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266ea8,ar5_00,iVar1,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c266f38 @ 8c266f38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266f38(int ar4,undefined4 ar5,uint *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  uint in_stack_fffffff0;
  
  ar5_00 = 0;
  iVar1 = DAT_8c2784c0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (uint *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    FUN_8c26870c(*(char *)(ar4 + 1) * 0x40 + *(int *)(DAT_8c2784c0 + 0x1b8) + 0x400 +
                 (char)ar5 * 0x20,&stack0xfffffff0,DAT_8c2784c0,ar7);
    *ar6 = in_stack_fffffff0 & 0xff;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266f38,ar5_00,iVar1,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c266fc8 @ 8c266fc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266fc8(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  iVar1 = DAT_8c2784c0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (undefined1 *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    FUN_8c268650(*(char *)(ar4 + 1) * 0x40 + *(int *)(DAT_8c2784c0 + 0x1b8) + (char)ar5 * 0x20 +
                 0x410,&stack0xfffffff0,DAT_8c2784c0,ar7);
    *ar6 = (char)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266fc8,ar5_00,iVar1,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c267058 @ 8c267058 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267058(int ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int ar5_00;
  undefined4 in_stack_ffffffe0;
  
  ar5_00 = 0;
  pcVar4 = ar6;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (char *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    iVar2 = (short)*(char *)(ar4 + 1) * 0x2c + DAT_8c2784c0;
    FUN_8c268650(*(int *)(DAT_8c2784c0 + 0x1b8) + *(char *)(ar4 + 1) * 0x40 + (char)ar5 * 0x20 +
                 0x402,&stack0xffffffe0,ar6,ar7);
    cVar3 = (char)in_stack_ffffffe0;
    cVar1 = *(char *)(iVar2 + 0xad);
    if ((cVar1 != '\x01') && (cVar1 == '\x02')) {
      if ((char)ar5 == '\0') {
        cVar3 = cVar3 + '@';
      }
      else if ((char)ar5 == '\x01') {
        if (cVar3 == '\0') {
          cVar3 = -1;
        }
        cVar3 = cVar3 + -0x40;
      }
      cVar3 = cVar3 * '\x02';
    }
    *ar6 = cVar3;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267058,ar5_00,pcVar4,ar7,in_stack_ffffffe0);
  }
  return ar5_00;
}



/* FUN_8c267130 @ 8c267130 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267130(int ar4,undefined4 ar5,undefined2 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  iVar1 = DAT_8c2784c0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (undefined2 *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    aica_ram_268618(*(char *)(ar4 + 1) * 0x40 + *(int *)(DAT_8c2784c0 + 0x1b8) + (char)ar5 * 0x20 +
                    0x408,&stack0xfffffff0,DAT_8c2784c0,ar7);
    *ar6 = (short)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267130,ar5_00,iVar1,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c2671c0 @ 8c2671c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2671c0(int ar4,undefined4 ar5,undefined2 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  iVar1 = DAT_8c2784c0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (undefined2 *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    aica_ram_268618(*(char *)(ar4 + 1) * 0x40 + *(int *)(DAT_8c2784c0 + 0x1b8) + (char)ar5 * 0x20 +
                    0x404,&stack0xfffffff0,DAT_8c2784c0,ar7);
    *ar6 = (short)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2671c0,ar5_00,iVar1,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c267250 @ 8c267250 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267250(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = DAT_8c26731c;
  if ((*(int *)PTR_DAT_8c267318 != 0) && (iVar2 = DAT_8c267320, ar4 != 0)) {
    (*(code *)PTR_FUN_8c267324)(ar4,ar5,ar6 + 0x14);
    (*(code *)PTR_FUN_8c267328)(ar4,ar5,ar6 + 0x18);
    puVar1 = PTR_FUN_8c26732c;
    *ar6 = 0;
    ar6[1] = 0;
    (*(code *)puVar1)(ar4,ar5,ar6 + 2);
    (*(code *)PTR_FUN_8c267330)(ar4,ar5,ar6 + 3);
    (*(code *)PTR_FUN_8c267334)(ar4,ar5,ar6 + 6);
    (*(code *)PTR_FUN_8c267338)(ar4,ar5,ar6 + 8);
    (*(code *)PTR_FUN_8c26733c)(ar4,ar5,ar6 + 4);
    (*(code *)PTR_FUN_8c267340)(ar4,ar5,ar6 + 5);
    (*(code *)PTR_FUN_8c267344)(ar4,ar5,ar6 + 0x10);
    (*(code *)PTR_FUN_8c267348)(ar4,ar5,ar6 + 0xc);
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_8c267350)(PTR_LAB_8c26734c,iVar2);
  }
  return iVar2;
}



/* FUN_8c267264 @ 8c267264 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267264(undefined4 ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int *in_r2;
  int unaff_r10;
  undefined4 unaff_r12;
  int unaff_r13;
  undefined1 *unaff_r14;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    unaff_r10 = 0xd000001;
  }
  else if (unaff_r13 == 0) {
    unaff_r10 = 0x7000103;
  }
  else {
    FUN_8c266ea8(unaff_r13,unaff_r12,unaff_r14 + 0x14,ar7);
    FUN_8c266f38(unaff_r13,unaff_r12,unaff_r14 + 0x18,ar7);
    *unaff_r14 = (char)unaff_r10;
    unaff_r14[1] = (char)unaff_r10;
    FUN_8c2673f0(unaff_r13,unaff_r12,unaff_r14 + 2,ar7);
    FUN_8c267058(unaff_r13,unaff_r12,unaff_r14 + 3,ar7);
    FUN_8c267130(unaff_r13,unaff_r12,unaff_r14 + 6,ar7);
    FUN_8c2671c0(unaff_r13,unaff_r12,unaff_r14 + 8,ar7);
    FUN_8c266fc8(unaff_r13,unaff_r12,unaff_r14 + 4,ar7);
    FUN_8c266e2c(unaff_r13,unaff_r12,unaff_r14 + 5,ar7);
    FUN_8c266d28(unaff_r13,unaff_r12,unaff_r14 + 0x10,ar7);
    ar6 = unaff_r14 + 0xc;
    FUN_8c267360(unaff_r13,unaff_r12,ar6,ar7);
  }
  if (unaff_r10 != 0) {
    FUN_8c2688a0(&LAB_8c2664c4,unaff_r10,ar6,ar7,in_PR);
  }
  return unaff_r10;
}



/* thunk_FUN_8c267250 @ 8c267354 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c267250(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c26735c)();
  return uVar1;
}



/* FUN_8c267360 @ 8c267360 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267360(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  iVar1 = DAT_8c2784c0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (undefined4 *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    aica_ram_2686d4(*(char *)(ar4 + 1) * 0x40 + *(int *)(DAT_8c2784c0 + 0x1b8) + (char)ar5 * 0x20 +
                    0x414,&stack0xfffffff0,DAT_8c2784c0,ar7);
    *ar6 = in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267360,ar5_00,iVar1,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c2673f0 @ 8c2673f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2673f0(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  iVar1 = DAT_8c2784c0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c268650(*(char *)(ar4 + 1) * 0x40 + *(int *)(DAT_8c2784c0 + 0x1b8) + (char)ar5 * 0x20 +
                 0x401,&stack0xfffffff0,DAT_8c2784c0,ar7);
    *ar6 = (char)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2673f0,ar5_00,iVar1,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}



/* FUN_8c267470 @ 8c267470 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267470(int *ar4,undefined4 ar5,int ar6,int ar7,undefined4 s0,undefined4 s4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int ar5_00;
  undefined4 *puVar4;
  undefined1 auStackY_a0 [128];
  undefined4 in_stack_ffffffe0;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (((char)s0 < '\x01') || ('\x02' < (char)s0)) {
LAB_8c2674f6:
    ar5_00 = 0x3000001;
  }
  else {
    if (((int)&s0 + 1U & 3) == 0) {
      puVar4 = (undefined4 *)((int)&s0 + 1);
    }
    else {
      puVar4 = &s4;
    }
    for (ar6 = 0; ar6 < (char)s0; ar6 = ar6 + 1) {
      puVar1 = puVar4 + 1;
      if (((uint)puVar1 & 3) != 0) {
        puVar1 = puVar4 + 2;
      }
      puVar4 = puVar1 + -1;
      if (((uint)puVar4 & 3) != 0) {
        puVar4 = puVar1 + -2;
      }
      (&stack0xffffffe0)[ar6] = (char)*puVar4;
      ar7 = (int)(char)(&stack0xffffffe0)[ar6];
      if ((ar7 < 0) || (0xf < ar7)) goto LAB_8c2674f6;
      puVar4 = puVar1;
    }
    puVar2 = &stack0xffffffe0 + (char)s0;
    if (puVar2 < &stack0xffffffe2) {
      ar6 = -1;
      do {
        *puVar2 = 0xff;
        puVar2 = puVar2 + 1;
      } while (puVar2 < &stack0xffffffe2);
    }
    ar5_00 = FUN_8c266708(ar4,3,ar6,ar7);
    if (ar5_00 == 0) {
      puVar4 = (undefined4 *)(DAT_8c2784c0 + 0xa8 + (short)*(char *)(*ar4 + 1) * 0x2c);
      *puVar4 = 1;
      *(char *)(puVar4 + 1) = (char)s0;
      FUN_8c267d88(*ar4,(int)(char)s0,ar6,ar7);
      FUN_8c267924(*ar4,0,ar6,ar7);
      for (iVar3 = 0; iVar3 < (char)s0; iVar3 = iVar3 + 1) {
        *(undefined1 *)((int)puVar4 + iVar3 + 7) = (&stack0xffffffe0)[iVar3];
        puVar4[iVar3 + 3] = 1;
        puVar4[iVar3 + 5] = 0;
        puVar4[iVar3 + 9] = 0;
      }
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267470,ar5_00,ar6,ar7,in_stack_ffffffe0);
  }
  return ar5_00;
}



/* FUN_8c2675d8 @ 8c2675d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2675d8(int *ar4,undefined4 ar5,int ar6,int ar7,undefined4 s0,undefined4 s4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int ar5_00;
  undefined4 *puVar4;
  undefined1 auStackY_a0 [128];
  undefined4 in_stack_ffffffe0;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (((char)s0 < '\x01') || ('\x02' < (char)s0)) {
LAB_8c26765e:
    ar5_00 = 0x3000001;
  }
  else {
    if (((int)&s0 + 1U & 3) == 0) {
      puVar4 = (undefined4 *)((int)&s0 + 1);
    }
    else {
      puVar4 = &s4;
    }
    for (ar6 = 0; ar6 < (char)s0; ar6 = ar6 + 1) {
      puVar1 = puVar4 + 1;
      if (((uint)puVar1 & 3) != 0) {
        puVar1 = puVar4 + 2;
      }
      puVar4 = puVar1 + -1;
      if (((uint)puVar4 & 3) != 0) {
        puVar4 = puVar1 + -2;
      }
      (&stack0xffffffe0)[ar6] = (char)*puVar4;
      ar7 = (int)(char)(&stack0xffffffe0)[ar6];
      if ((ar7 < 0) || (0xf < ar7)) goto LAB_8c26765e;
      puVar4 = puVar1;
    }
    puVar2 = &stack0xffffffe0 + (char)s0;
    if (puVar2 < &stack0xffffffe2) {
      ar6 = -1;
      do {
        *puVar2 = 0xff;
        puVar2 = puVar2 + 1;
      } while (puVar2 < &stack0xffffffe2);
    }
    ar5_00 = FUN_8c266708(ar4,3,ar6,ar7);
    if (ar5_00 == 0) {
      puVar4 = (undefined4 *)(DAT_8c2784c0 + 0xa8 + (short)*(char *)(*ar4 + 1) * 0x2c);
      *puVar4 = 1;
      *(char *)(puVar4 + 1) = (char)s0;
      FUN_8c267d88(*ar4,(int)(char)s0,ar6,ar7);
      FUN_8c267924(*ar4,0,ar6,ar7);
      for (iVar3 = 0; iVar3 < (char)s0; iVar3 = iVar3 + 1) {
        *(undefined1 *)((int)puVar4 + iVar3 + 7) = (&stack0xffffffe0)[iVar3];
        puVar4[iVar3 + 3] = 1;
        puVar4[iVar3 + 5] = 0;
        puVar4[iVar3 + 9] = 0;
      }
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267470,ar5_00,ar6,ar7,in_stack_ffffffe0);
  }
  return ar5_00;
}



/* FUN_8c267740 @ 8c267740 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267740(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  byte bVar10;
  
  iVar7 = DAT_8c267824;
  if (((*(int *)PTR_DAT_8c267820 != 0) && (iVar7 = DAT_8c267828, ar4 != 0)) &&
     (iVar7 = DAT_8c26783c, ((byte)ar7 & 0xf0) == 0)) {
    bVar1 = *(byte *)(ar4 + 1);
    piVar6 = (int *)((short)(char)bVar1 * 0x2c + (int)DAT_8c26781a + *(int *)PTR_DAT_8c267820);
    *piVar6 = ar5;
    pbVar9 = DAT_8c267830;
    puVar2 = DAT_8c26782c;
    iVar7 = DAT_8c26783c;
    if (*(char *)((int)piVar6 + 5) == '\x01') {
      bVar10 = 0;
    }
    else {
      if (*(char *)((int)piVar6 + 5) != '\x02') goto LAB_8c267802;
      bVar10 = (byte)DAT_8c26781c;
    }
    iVar5 = *piVar6;
    if (iVar5 == 1) {
      bVar8 = 0;
    }
    else if (iVar5 == 0) {
      bVar8 = 0x10;
    }
    else {
      if (iVar5 != 2) goto LAB_8c267802;
      bVar8 = 0x30;
    }
    piVar6[3] = 0;
    piVar6[4] = 0;
    *puVar2 = 0x21;
    puVar3 = DAT_8c267834;
    *pbVar9 = bVar1 | bVar10 | bVar8;
    *puVar3 = *(undefined1 *)((int)piVar6 + 6);
    *(char *)((int)puVar2 + 6) = (char)ar6;
    pcVar4 = DAT_8c267838;
    pbVar9[3] = (byte)((uint)ar6 >> 8);
    *pcVar4 = (byte)ar7 << 3;
    pbVar9 = (byte *)((int)piVar6 + 7);
    for (iVar7 = 5; iVar7 < 7; iVar7 = iVar7 + 1) {
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      DAT_8c267830[iVar7] = bVar1;
    }
    iVar7 = (*(code *)PTR_FUN_8c267840)(DAT_8c26782c,FUN_8c267740);
  }
LAB_8c267802:
  if (iVar7 != 0) {
    (*(code *)PTR_FUN_8c267848)(PTR_FUN_8c267844,iVar7);
  }
  return iVar7;
}



/* FUN_8c267744 @ 8c267744 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c267744(int ar4,int ar5,undefined1 *ar6,uint ar7)

{
  undefined1 uVar1;
  byte bVar2;
  int *in_r3;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_PR;
  
  if (*in_r3 == 0) {
    iVar6 = 0xd000001;
    goto LAB_8c267802;
  }
  if (ar4 == 0) {
    iVar6 = 0x7000103;
    goto LAB_8c267802;
  }
  if ((ar7 & 0xf0) == 0) {
    bVar2 = *(byte *)(ar4 + 1);
    piVar3 = (int *)((short)(char)bVar2 * 0x2c + *in_r3 + 0xa8);
    *piVar3 = ar5;
    if (*(char *)((int)piVar3 + 5) == '\x01') {
      bVar5 = 0;
    }
    else {
      if (*(char *)((int)piVar3 + 5) != '\x02') goto LAB_8c2677e6;
      bVar5 = 0x80;
    }
    iVar6 = *piVar3;
    if (iVar6 == 1) {
      bVar4 = 0;
    }
    else if (iVar6 == 0) {
      bVar4 = 0x10;
    }
    else {
      if (iVar6 != 2) goto LAB_8c2677e6;
      bVar4 = 0x30;
    }
    DAT_8c4bd42c = bVar2 | bVar5 | bVar4;
    piVar3[3] = 0;
    piVar3[4] = 0;
    _DAT_8c4bd428 = 0x21;
    DAT_8c4bd42d = *(undefined1 *)((int)piVar3 + 6);
    ar7 = (int)(char)ar7 << 3;
    DAT_8c4bd42e = SUB41(ar6,0);
    DAT_8c4bd42f = (undefined1)((uint)ar6 >> 8);
    DAT_8c4bd430 = (undefined1)ar7;
    ar6 = (undefined1 *)((int)piVar3 + 7);
    for (iVar6 = 5; iVar6 < 7; iVar6 = iVar6 + 1) {
      uVar1 = *ar6;
      ar6 = ar6 + 1;
      (&DAT_8c4bd42c)[iVar6] = uVar1;
    }
    iVar6 = FUN_8c267fe8(&DAT_8c4bd428,7,ar6,ar7);
  }
  else {
LAB_8c2677e6:
    iVar6 = 0x3000001;
  }
LAB_8c267802:
  if (iVar6 != 0) {
    FUN_8c2688a0(FUN_8c267740,iVar6,ar6,ar7,in_PR);
  }
  return iVar6;
}



/* FUN_8c26784c @ 8c26784c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26784c(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  int ar5_00;
  uint *puVar1;
  undefined4 in_PR;
  
  puVar1 = &DAT_8c278520;
  do {
    if ((int)*puVar1 < 1) {
      ar5_00 = 0x3000001;
LAB_8c267878:
      if (ar5_00 != 0) {
        FUN_8c2688a0(FUN_8c26784c,ar5_00,ar6,ar7,in_PR);
      }
      return ar5_00;
    }
    if ((ar6 & 0xffff) == *puVar1) {
      ar6 = (uint)(short)puVar1[1];
      ar5_00 = FUN_8c267740(ar4,ar5,ar6,ar7);
      goto LAB_8c267878;
    }
    puVar1 = puVar1 + 2;
  } while( true );
}



/* FUN_8c2678a4 @ 8c2678a4 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c2678a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd440 = 0x2e;
    DAT_8c4bd444 = *(undefined1 *)(ar4 + 1);
    in_r0 = FUN_8c267fe8(&DAT_8c4bd440,ar5,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2678a4,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}



/* FUN_8c2678a6 @ 8c2678a6 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c2678a6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd440 = 0x2e;
    DAT_8c4bd444 = *(undefined1 *)(ar4 + 1);
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd440,ar5,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2678a4,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* thunk_FUN_8c2678a4 @ 8c267908 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c2678a4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c267910)();
  return uVar1;
}



/* FUN_8c267914 @ 8c267914 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c267914(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c267920)((int)(char)ar6);
  return uVar1;
}



/* FUN_8c267924 @ 8c267924 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267924(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar6_00;
  int in_r0;
  int ar7_00;
  int ar5_00;
  
  ar6_00 = DAT_8c2784c0;
  ar7_00 = 0xd000001;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    ar7_00 = (int)*(char *)(ar4 + 1);
    if ((char)ar5 == '\x7f') {
      in_r0 = 0;
    }
    else {
      in_r0 = ar5 * -2 + -1;
    }
    *(char *)((short)*(char *)(ar4 + 1) * 0x2c + DAT_8c2784c0 + 0xae) = (char)in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267924,ar5_00,ar6_00,ar7_00,in_r0);
  }
  return ar5_00;
}



/* FUN_8c267926 @ 8c267926 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267926(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int *in_r3;
  int ar6_00;
  int ar7_00;
  int ar5_00;
  undefined4 in_PR;
  
  ar6_00 = *in_r3;
  ar7_00 = 0xd000001;
  ar5_00 = 0;
  if (ar6_00 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6_00 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    ar7_00 = (int)*(char *)(ar4 + 1);
    if ((char)ar5 == '\x7f') {
      cVar1 = '\0';
    }
    else {
      cVar1 = (char)ar5 * -2 + -1;
    }
    *(char *)((short)*(char *)(ar4 + 1) * 0x2c + ar6_00 + 0xae) = cVar1;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267924,ar5_00,ar6_00,ar7_00,in_PR);
  }
  return ar5_00;
}



/* FUN_8c2679a0 @ 8c2679a0 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c2679a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd458 = 0x2b;
    DAT_8c4bd45c = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd45d = (undefined1)((char)ar5 + 0x80);
    in_r0 = FUN_8c267fe8(&DAT_8c4bd458,(char)ar5 + 0x80,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2679a0,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}



/* FUN_8c2679a2 @ 8c2679a2 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c2679a2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd458 = 0x2b;
    DAT_8c4bd45c = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd45d = (undefined1)((char)ar5 + 0x80);
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd458,(char)ar5 + 0x80,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2679a0,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c267a10 @ 8c267a10 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c267a10(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c267a1c)((int)(char)ar6);
  return uVar1;
}



/* FUN_8c267a20 @ 8c267a20 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c267a20(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    ar6 = (char)ar6 + 0x80;
    _DAT_8c4bd470 = 0x29;
    DAT_8c4bd474 = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd475 = (undefined1)ar5;
    DAT_8c4bd476 = (undefined1)ar6;
    in_r0 = FUN_8c267fe8(&DAT_8c4bd470,ar5,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267a20,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}



/* FUN_8c267a22 @ 8c267a22 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c267a22(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    ar6 = (char)ar6 + 0x80;
    _DAT_8c4bd470 = 0x29;
    DAT_8c4bd474 = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd475 = (undefined1)ar5;
    DAT_8c4bd476 = (undefined1)ar6;
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd470,ar5,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267a20,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c267a98 @ 8c267a98 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c267a98(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c267aac)((int)(char)ar6,(int)(char)ar7);
  return uVar1;
}



/* FUN_8c267ab0 @ 8c267ab0 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c267ab0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd488 = 0x2a;
    DAT_8c4bd48c = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd48d = (undefined1)((char)ar5 + 0x80);
    in_r0 = FUN_8c267fe8(&DAT_8c4bd488,(char)ar5 + 0x80,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267ab0,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}



/* FUN_8c267ab2 @ 8c267ab2 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c267ab2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd488 = 0x2a;
    DAT_8c4bd48c = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd48d = (undefined1)((char)ar5 + 0x80);
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd488,(char)ar5 + 0x80,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267ab0,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c267b20 @ 8c267b20 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c267b20(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c267b2c)((int)(char)ar6);
  return uVar1;
}



/* FUN_8c267b30 @ 8c267b30 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c267c16) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c267b30(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int in_stack_ffffffe4;
  int iStack_18;
  
  if (DAT_8c2784c0 == 0) {
    iVar5 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar5 = 0x7000103;
  }
  else {
    bVar1 = *(byte *)(ar4 + 1);
    cVar2 = (char)ar6;
    ar6 = 0;
    iVar6 = DAT_8c2784c0 + 0xa8 + (short)(char)bVar1 * 0x2c;
    *(int *)((char)ar5 * 4 + iVar6 + 0x1c) = (int)cVar2;
    for (iVar5 = 0; iVar5 < *(char *)(iVar6 + 5); iVar5 = iVar5 + 1) {
      *(int *)(&stack0xffffffe4 + iVar5 * 4) = (int)cVar2;
    }
    uVar3 = (uint)(char)ar5;
    if ((*(char *)(iVar6 + 5) != '\x01') && (*(char *)(iVar6 + 5) == '\x02')) {
      if (uVar3 == 0) {
        in_stack_ffffffe4 = in_stack_ffffffe4 + 0x80;
      }
      else if ((uVar3 == 1) && (iStack_18 = iStack_18 + -0x80, -2 < iStack_18)) {
        iStack_18 = -2;
      }
      for (iVar5 = 0; iVar5 < *(char *)(iVar6 + 5); iVar5 = iVar5 + 1) {
        *(int *)(&stack0xffffffe4 + iVar5 * 4) =
             (int)(*(int *)(&stack0xffffffe4 + iVar5 * 4) +
                  (uint)(*(int *)(&stack0xffffffe4 + iVar5 * 4) < 0)) >> 1;
      }
    }
    for (iVar5 = 0; iVar5 < *(char *)(iVar6 + 5); iVar5 = iVar5 + 1) {
      *(int *)(&stack0xffffffe4 + iVar5 * 4) = *(int *)(&stack0xffffffe4 + iVar5 * 4) + 0x80;
    }
    _DAT_8c4bd4a0 = 0x26;
    DAT_8c4bd4a4 = (&DAT_8c278588)[uVar3 & 3] | bVar1;
    uVar4 = (undefined1)((uint)ar7 >> 8);
    if (uVar3 == 0) {
      DAT_8c4bd4a5 = (undefined1)in_stack_ffffffe4;
      DAT_8c4bd4a9 = 0;
      DAT_8c4bd4aa = 0;
      DAT_8c4bd4ab = 0;
      DAT_8c4bd4a6 = (char)ar7;
      DAT_8c4bd4a7 = uVar4;
    }
    else if (uVar3 == 1) {
      DAT_8c4bd4a5 = 0;
      DAT_8c4bd4a6 = 0;
      DAT_8c4bd4a7 = 0;
      DAT_8c4bd4a9 = (undefined1)iStack_18;
      DAT_8c4bd4aa = (char)ar7;
      DAT_8c4bd4ab = uVar4;
    }
    iVar5 = FUN_8c267fe8(&DAT_8c4bd4a0,&DAT_8c4bd4a5,0,ar7);
  }
  if (iVar5 != 0) {
    FUN_8c2688a0(FUN_8c267b30,iVar5,ar6,ar7,in_stack_ffffffe4);
  }
  return iVar5;
}



/* thunk_FUN_8c267b30 @ 8c267cc0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c267b30(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c267cc8)();
  return uVar1;
}



/* FUN_8c267ccc @ 8c267ccc callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c267d14) */
/* WARNING: Removing unreachable block (ram,0x8c267d22) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c267ccc(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int iVar2;
  
  iVar1 = ar6;
  if (DAT_8c2784c0 == 0) {
    iVar2 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar2 = 0x7000103;
  }
  else {
    iVar2 = (int)(short)ar5;
    if ((iVar2 < -0x18ff) || (0x18ff < iVar2)) {
      iVar2 = 0x3000001;
    }
    else {
      _DAT_8c4bd4b8 = 0x28;
      DAT_8c4bd4bc = *(undefined1 *)(ar4 + 1);
      iVar2 = iVar2 + 0x8000;
      DAT_8c4bd4be = (undefined1)iVar2;
      DAT_8c4bd4bf = (undefined1)((uint)iVar2 >> 8);
      DAT_8c4bd4c0 = (undefined1)ar6;
      iVar1 = ar6 >> 8;
      DAT_8c4bd4c1 = (undefined1)((uint)ar6 >> 8);
      in_r0 = FUN_8c267fe8(&DAT_8c4bd4b8,iVar2 >> 8,iVar1,ar7);
      iVar2 = in_r0;
    }
  }
  if (iVar2 != 0) {
    FUN_8c2688a0(FUN_8c267ccc,iVar2,iVar1,ar7,in_r0);
  }
  return iVar2;
}



/* FUN_8c267cce @ 8c267cce callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c267d14) */
/* WARNING: Removing unreachable block (ram,0x8c267d22) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c267cce(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *in_r2;
  int iVar1;
  int iVar2;
  undefined4 in_PR;
  
  iVar1 = ar6;
  if (*in_r2 == 0) {
    iVar2 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar2 = 0x7000103;
  }
  else {
    iVar2 = (int)(short)ar5;
    if ((iVar2 < -0x18ff) || (0x18ff < iVar2)) {
      iVar2 = 0x3000001;
    }
    else {
      _DAT_8c4bd4b8 = 0x28;
      DAT_8c4bd4bc = *(undefined1 *)(ar4 + 1);
      iVar2 = iVar2 + 0x8000;
      DAT_8c4bd4be = (undefined1)iVar2;
      DAT_8c4bd4bf = (undefined1)((uint)iVar2 >> 8);
      DAT_8c4bd4c0 = (undefined1)ar6;
      iVar1 = ar6 >> 8;
      DAT_8c4bd4c1 = (undefined1)((uint)ar6 >> 8);
      iVar2 = FUN_8c267fe8(&DAT_8c4bd4b8,iVar2 >> 8,iVar1,ar7);
    }
  }
  if (iVar2 != 0) {
    FUN_8c2688a0(FUN_8c267ccc,iVar2,iVar1,ar7,in_PR);
  }
  return iVar2;
}



/* FUN_8c267d74 @ 8c267d74 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c267d74(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c267d84)((int)(short)ar6,ar7);
  return uVar1;
}



/* FUN_8c267d88 @ 8c267d88 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267d88(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_8c267e30;
  if ((((*(int *)PTR_DAT_8c267e2c != 0) && (iVar4 = DAT_8c267e34, ar4 != 0)) &&
      (iVar3 = (int)(char)ar5, iVar4 = DAT_8c267e38, 0 < iVar3)) &&
     (((iVar3 < 3 &&
       (iVar2 = (short)*(char *)(ar4 + 1) * 0x2c + (int)DAT_8c267e28 + *(int *)PTR_DAT_8c267e2c,
       -1 < iVar3)) && (iVar3 <= *(char *)(iVar2 + 4))))) {
    *(char *)(iVar2 + 5) = (char)ar5;
    puVar1 = PTR_FUN_8c267e3c;
    iVar5 = 0;
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)puVar1)(ar4,iVar5,*(undefined4 *)(iVar5 * 4 + iVar2 + 0x1c),0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
  }
  if (iVar4 != 0) {
    (*(code *)PTR_FUN_8c267e44)(PTR_FUN_8c267e40,iVar4);
  }
  return iVar4;
}



/* FUN_8c267d98 @ 8c267d98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267d98(undefined4 ar4,undefined4 ar5,int ar6,int ar7)

{
  int *in_r3;
  int iVar1;
  int unaff_r10;
  int iVar2;
  int iVar3;
  int ar5_00;
  undefined4 in_PR;
  
  iVar1 = ar7;
  if (*in_r3 == 0) {
    ar7 = 0xd000001;
  }
  else if (unaff_r10 == 0) {
    ar7 = 0x7000103;
  }
  else {
    iVar3 = (int)(char)ar5;
    if ((0 < iVar3) && (iVar3 < 3)) {
      ar6 = (int)*(char *)(unaff_r10 + 1);
      iVar2 = (short)*(char *)(unaff_r10 + 1) * 0x2c + *in_r3 + 0xa8;
      if ((-1 < iVar3) && (iVar3 <= *(char *)(iVar2 + 4))) {
        *(char *)(iVar2 + 5) = (char)ar5;
        ar5_00 = ar7;
        if (0 < iVar3) {
          do {
            ar6 = *(int *)(ar5_00 * 4 + iVar2 + 0x1c);
            iVar1 = 0;
            FUN_8c267b30(unaff_r10,ar5_00,ar6,0);
            ar5_00 = ar5_00 + 1;
          } while (ar5_00 < iVar3);
        }
        goto LAB_8c267e0a;
      }
    }
    ar7 = 0x3000001;
  }
LAB_8c267e0a:
  if (ar7 != 0) {
    FUN_8c2688a0(FUN_8c267d88,ar7,ar6,iVar1,in_PR);
  }
  return ar7;
}



/* thunk_FUN_8c267d88 @ 8c267e48 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c267d88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c267e50)();
  return uVar1;
}



/* FUN_8c267e54 @ 8c267e54 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c267e98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c267e54(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int in_r0;
  undefined1 uVar1;
  uint uVar2;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    uVar2 = (uint)(char)ar5;
    ar6 = (char)ar6 + 0x80;
    _DAT_8c4bd4d0 = 0x25;
    DAT_8c4bd4d4 = (&DAT_8c278590)[uVar2 & 3] | *(byte *)(ar4 + 1);
    uVar1 = (undefined1)((uint)ar7 >> 8);
    if ((uVar2 == 0) || (uVar2 == 0xffffffff)) {
      DAT_8c4bd4d5 = (char)ar6;
      DAT_8c4bd4d6 = (char)ar7;
      DAT_8c4bd4d7 = uVar1;
    }
    if ((uVar2 == 1) || (uVar2 == 0xffffffff)) {
      DAT_8c4bd4d9 = (char)ar6;
      DAT_8c4bd4da = (char)ar7;
      DAT_8c4bd4db = uVar1;
    }
    in_r0 = FUN_8c267fe8(&DAT_8c4bd4d0,ar7,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267e54,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}



/* FUN_8c267e56 @ 8c267e56 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c267e98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c267e56(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *in_r3;
  undefined1 uVar1;
  int ar5_00;
  uint uVar2;
  undefined4 in_PR;
  
  if (*in_r3 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    uVar2 = (uint)(char)ar5;
    ar6 = (char)ar6 + 0x80;
    _DAT_8c4bd4d0 = 0x25;
    DAT_8c4bd4d4 = (&DAT_8c278590)[uVar2 & 3] | *(byte *)(ar4 + 1);
    uVar1 = (undefined1)((uint)ar7 >> 8);
    if ((uVar2 == 0) || (uVar2 == 0xffffffff)) {
      DAT_8c4bd4d5 = (char)ar6;
      DAT_8c4bd4d6 = (char)ar7;
      DAT_8c4bd4d7 = uVar1;
    }
    if ((uVar2 == 1) || (uVar2 == 0xffffffff)) {
      DAT_8c4bd4d9 = (char)ar6;
      DAT_8c4bd4da = (char)ar7;
      DAT_8c4bd4db = uVar1;
    }
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd4d0,ar7,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267e54,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* thunk_FUN_8c267e54 @ 8c267f20 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c267e54(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c267f28)();
  return uVar1;
}



/* FUN_8c267f2c @ 8c267f2c callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c267f2c(int ar4,undefined4 ar5,int ar6,int ar7)

{
  char cVar1;
  int iVar2;
  undefined4 in_stack_fffffff0;
  
  if (DAT_8c2784c0 == 0) {
    iVar2 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar2 = 0x7000103;
  }
  else {
    DAT_8c4bd4ec = *(char *)(ar4 + 1);
    ar7 = 0;
    ar6 = (short)DAT_8c4bd4ec * 0x2c + DAT_8c2784c0 + 0xa8;
    cVar1 = *(char *)(ar6 + 4);
    in_stack_fffffff0 = CONCAT31((int3)((uint)in_stack_fffffff0 >> 8),cVar1);
    iVar2 = 0;
    if (0 < cVar1) {
      do {
        *(undefined4 *)(ar6 + 0xc + iVar2) = 1;
        ar7 = ar7 + 1;
        *(undefined4 *)(ar6 + 0x14 + iVar2) = 0;
        *(undefined4 *)(ar6 + 0x24 + iVar2) = 0;
        iVar2 = iVar2 + 4;
      } while (ar7 < cVar1);
    }
    _DAT_8c4bd4e8 = 0x22;
    iVar2 = FUN_8c267fe8(&DAT_8c4bd4e8,0,ar6,ar7);
  }
  if (iVar2 != 0) {
    FUN_8c2688a0(FUN_8c267f2c,iVar2,ar6,ar7,in_stack_fffffff0);
  }
  return iVar2;
}



/* thunk_FUN_8c267f2c @ 8c267fdc callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c267f2c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c267fe4)();
  return uVar1;
}



/* FUN_8c267fe8 @ 8c267fe8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267fe8(undefined4 ar4,undefined4 ar5,int ar6,int ar7)

{
  int iVar1;
  uint ain0;
  int iVar2;
  int iVar3;
  int ar5_00;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  iVar1 = DAT_8c2784c0;
  ar5_00 = 0;
  ain0 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    iVar2 = DAT_8c2784c0 + 0x158;
    ar7 = *(int *)(DAT_8c2784c0 + 0x168);
    if (*(int *)(DAT_8c2784c0 + 0x16c) == 0x100) {
      ar5_00 = 0xa000001;
      ar6 = 0x100;
    }
    else {
      iVar3 = *(int *)(DAT_8c2784c0 + 0x170);
      *(int *)(DAT_8c2784c0 + 0x170) = iVar3 + 1;
      ar6 = iVar3 * 0x1c + *(int *)(iVar1 + 0x164);
      if (*(int *)(iVar1 + 0x170) == ar7) {
        *(undefined4 *)(iVar1 + 0x170) = 0;
      }
      *(undefined4 *)(ar6 + 0x14) = 1;
      FUN_8c0107a0(0x14,ar6,ar4);
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267fe8,ar5_00,ar6,ar7,ain0);
  }
  return ar5_00;
}



/* FUN_8c26809c @ 8c26809c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26809c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    in_r0 = FUN_8c2666cc(ar4,ar5,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c26809c,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}



/* FUN_8c26809e @ 8c26809e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26809e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    ar5_00 = FUN_8c2666cc(ar4,ar5,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c26809c,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c2680ec @ 8c2680ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2680ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    in_r0 = FUN_8c266708(ar4,2,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2680ec,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}



/* FUN_8c2680ee @ 8c2680ee callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2680ee(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    ar5_00 = FUN_8c266708(ar4,2,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2680ec,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c26813c @ 8c26813c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c26813c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  
  if (DAT_8c2784c0 == 0) {
    iVar1 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar1 = 0x7000103;
  }
  else {
    iVar1 = (int)(char)ar7;
    if ((iVar1 < 0) || (0x1f < iVar1)) {
      iVar1 = 0x3000001;
    }
    else {
      _DAT_8c4bd500 = 0x11;
      DAT_8c4bd504 = *(undefined1 *)(ar4 + 1);
      DAT_8c4bd505 = (undefined1)ar5;
      DAT_8c4bd506 = (undefined1)ar6;
      DAT_8c4bd507 = (undefined1)(iVar1 << 3);
      in_r0 = FUN_8c267fe8(&DAT_8c4bd500,ar5,ar6,ar7);
      iVar1 = in_r0;
    }
  }
  if (iVar1 != 0) {
    FUN_8c2688a0(FUN_8c26813c,iVar1,ar6,ar7,in_r0);
  }
  return iVar1;
}



/* FUN_8c26813e @ 8c26813e callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c26813e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int iVar1;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    iVar1 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar1 = 0x7000103;
  }
  else {
    iVar1 = (int)(char)ar7;
    if ((iVar1 < 0) || (0x1f < iVar1)) {
      iVar1 = 0x3000001;
    }
    else {
      _DAT_8c4bd500 = 0x11;
      DAT_8c4bd504 = *(undefined1 *)(ar4 + 1);
      DAT_8c4bd505 = (undefined1)ar5;
      DAT_8c4bd506 = (undefined1)ar6;
      DAT_8c4bd507 = (undefined1)(iVar1 << 3);
      iVar1 = FUN_8c267fe8(&DAT_8c4bd500,ar5,ar6,ar7);
    }
  }
  if (iVar1 != 0) {
    FUN_8c2688a0(FUN_8c26813c,iVar1,ar6,ar7,in_PR);
  }
  return iVar1;
}



/* FUN_8c2681d0 @ 8c2681d0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c26820a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c2681d0(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int ar5_00;
  
  iVar1 = ar6;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd518 = 0x16;
    DAT_8c4bd51c = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd51d = (undefined1)((char)ar5 + 0x80);
    DAT_8c4bd51e = (undefined1)ar6;
    iVar1 = ar6 >> 8;
    DAT_8c4bd51f = (undefined1)((uint)ar6 >> 8);
    in_r0 = FUN_8c267fe8(&DAT_8c4bd518,(char)ar5 + 0x80,iVar1,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2681d0,ar5_00,iVar1,ar7,in_r0);
  }
  return ar5_00;
}



/* FUN_8c2681d2 @ 8c2681d2 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c26820a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c2681d2(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *in_r2;
  int iVar1;
  int ar5_00;
  undefined4 in_PR;
  
  iVar1 = ar6;
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd518 = 0x16;
    DAT_8c4bd51c = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd51d = (undefined1)((char)ar5 + 0x80);
    DAT_8c4bd51e = (undefined1)ar6;
    iVar1 = ar6 >> 8;
    DAT_8c4bd51f = (undefined1)((uint)ar6 >> 8);
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd518,(char)ar5 + 0x80,iVar1,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2681d0,ar5_00,iVar1,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c268250 @ 8c268250 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c26827c) */
/* WARNING: Unknown calling convention */

int FUN_8c268250(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  int iVar7;
  
  puVar4 = DAT_8c2682a8;
  puVar2 = DAT_8c2682a4;
  iVar7 = DAT_8c2682a0;
  if (ar4 != 0) {
    cVar1 = (char)DAT_8c26829c;
    *DAT_8c2682a4 = 0x15;
    puVar5 = DAT_8c2682ac;
    *puVar4 = *(undefined1 *)(ar4 + 1);
    puVar4[1] = (char)ar5 + cVar1;
    *puVar5 = (char)ar6;
    puVar6 = PTR_FUN_8c2682b0;
    puVar3 = DAT_8c2682a4;
    *(char *)((int)puVar2 + 7) = (char)((uint)ar6 >> 8);
    iVar7 = (*(code *)puVar6)(puVar3);
  }
  if (iVar7 != 0) {
    (*(code *)PTR_FUN_8c2682b8)(PTR_FUN_8c2682b4,iVar7);
  }
  return iVar7;
}



/* FUN_8c268254 @ 8c268254 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c26827c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c268254(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int ar6_00;
  int ar5_00;
  char in_T;
  undefined4 in_PR;
  
  if (in_T == '\0') {
    _DAT_8c4bd530 = 0x15;
    DAT_8c4bd534 = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd535 = (undefined1)((char)ar5 + 0x80);
    DAT_8c4bd536 = (undefined1)ar6;
    ar6_00 = ar6 >> 8;
    DAT_8c4bd537 = (undefined1)((uint)ar6 >> 8);
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd530,(char)ar5 + 0x80,ar6_00,ar7);
  }
  else {
    ar5_00 = 0x7000103;
    ar6_00 = ar6;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c268250,ar5_00,ar6_00,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c2682bc @ 8c2682bc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c2682bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd548 = 0x12;
    DAT_8c4bd54c = *(undefined1 *)(ar4 + 1);
    in_r0 = FUN_8c267fe8(&DAT_8c4bd548,ar5,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2682bc,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}



/* FUN_8c2682be @ 8c2682be callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c2682be(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd548 = 0x12;
    DAT_8c4bd54c = *(undefined1 *)(ar4 + 1);
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd548,ar5,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2682bc,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c268320 @ 8c268320 callers=0 callees=0 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c268320(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar6_00;
  int ar7_00;
  int iVar1;
  int ar4_00;
  int iVar2;
  undefined4 *puVar3;
  
  ar6_00 = *(int *)PTR_DAT_8c2683cc;
  if (ar6_00 == 0) {
    return DAT_8c2683d0;
  }
  ar7_00 = (int)(char)ar5;
  if (ar7_00 < 0) {
    return DAT_8c2684ac;
  }
  iVar1 = (char)ar5 * 8;
  if (ar4 == DAT_8c2683d4) {
    if (0xf < ar7_00) {
      return DAT_8c2684ac;
    }
    iVar2 = (int)DAT_8c2683c4;
    ar4_00 = *(int *)(DAT_8c2683c2 + ar6_00) + iVar1;
  }
  else if (ar4 == DAT_8c2683d8) {
    if (0xf < ar7_00) {
      return DAT_8c2684ac;
    }
    iVar2 = (int)DAT_8c2683c8;
    ar4_00 = *(int *)(DAT_8c2683c2 + ar6_00) + (int)DAT_8c2683c6 + iVar1;
  }
  else if (ar4 == DAT_8c2683dc) {
    if (0xf < ar7_00) {
      return DAT_8c2684ac;
    }
    iVar2 = (int)DAT_8c268498;
    ar4_00 = *(int *)(DAT_8c268494 + ar6_00) + (int)DAT_8c268496 + iVar1;
  }
  else {
    if (ar4 != DAT_8c2683e0) {
      if (ar4 == DAT_8c2683e4) {
        if (0 < ar7_00) {
          return DAT_8c2684ac;
        }
        iVar1 = (int)DAT_8c2684a0;
        ar4_00 = *(int *)(DAT_8c268494 + ar6_00) + (int)DAT_8c26849e;
      }
      else if (ar4 == DAT_8c2683e8) {
        if (0 < ar7_00) {
          return DAT_8c2684ac;
        }
        iVar1 = (int)DAT_8c2684a4;
        ar4_00 = *(int *)(DAT_8c268494 + ar6_00) + (int)DAT_8c2684a2;
      }
      else {
        if (ar4 != DAT_8c2683ec) {
          return DAT_8c2684b0;
        }
        if (0 < ar7_00) {
          return DAT_8c2684ac;
        }
        iVar1 = (int)DAT_8c2684a8;
        ar4_00 = *(int *)(DAT_8c268494 + ar6_00) + (int)DAT_8c2684a6;
      }
      puVar3 = (undefined4 *)(iVar1 + ar6_00);
      goto LAB_8c26846a;
    }
    if (0xf < ar7_00) {
      return DAT_8c2684ac;
    }
    iVar2 = (int)DAT_8c26849c;
    ar4_00 = *(int *)(DAT_8c268494 + ar6_00) + (int)DAT_8c26849a + iVar1;
  }
  puVar3 = (undefined4 *)(iVar2 + ar6_00 + iVar1);
LAB_8c26846a:
  (*(code *)PTR_aica_ram_268748_8c2684b4)(ar4_00,ar6,ar6_00,ar7_00);
  (*(code *)PTR_aica_ram_268748_8c2684b4)(ar4_00 + 4,ar7,ar6_00,ar7_00);
  *puVar3 = ar6;
  puVar3[1] = ar7;
  return 0;
}



/* aica_ram_2684b8 @ 8c2684b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 aica_ram_2684b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_aica_reg_265278_8c2684dc)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c2684ec)(PTR_DAT_8c2684e8,DAT_8c2684e4,4,DAT_8c2684e0,0,1);
  return 0;
}



/* FUN_8c2684f0 @ 8c2684f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2684f0(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 *ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)PTR_DAT_8c268598;
  uVar3 = 0;
  if (iVar4 == 0) {
    return DAT_8c26859c;
  }
  if (ar6 == (undefined4 *)0x0) {
    return DAT_8c2685a0;
  }
  if (ar7 == (undefined4 *)0x0) {
    return DAT_8c2685a0;
  }
  if ((char)ar5 < '\0') {
    return DAT_8c268610;
  }
  if (ar4 == DAT_8c2685a4) {
    if ('\x0f' < (char)ar5) {
      return DAT_8c268610;
    }
    iVar1 = (int)DAT_8c26858e;
  }
  else if (ar4 == DAT_8c2685a8) {
    if ('\x0f' < (char)ar5) {
      return DAT_8c268610;
    }
    iVar1 = (int)DAT_8c268590;
  }
  else if (ar4 == DAT_8c2685ac) {
    if ('\x0f' < (char)ar5) {
      return DAT_8c268610;
    }
    iVar1 = (int)DAT_8c268592;
  }
  else {
    if (ar4 != DAT_8c2685b0) {
      if (ar4 == DAT_8c2685b4) {
        if ((char)ar5 != '\0') {
          return DAT_8c268610;
        }
        iVar1 = (int)DAT_8c268596;
      }
      else if (ar4 == DAT_8c2685b8) {
        if ((char)ar5 != '\0') {
          return DAT_8c268610;
        }
        iVar1 = (int)DAT_8c26860a;
      }
      else {
        if (ar4 != DAT_8c2685bc) {
          puVar2 = (undefined4 *)0x0;
          uVar3 = DAT_8c268614;
          goto LAB_8c2685de;
        }
        if ((char)ar5 != '\0') {
          return DAT_8c268610;
        }
        iVar1 = (int)DAT_8c26860c;
      }
      puVar2 = (undefined4 *)(iVar1 + iVar4);
      goto LAB_8c2685de;
    }
    if ('\x0f' < (char)ar5) {
      return DAT_8c268610;
    }
    iVar1 = (int)DAT_8c268594;
  }
  puVar2 = (undefined4 *)(iVar1 + iVar4 + (char)ar5 * 8);
LAB_8c2685de:
  if (puVar2 == (undefined4 *)0x0) {
    if (ar6 != (undefined4 *)0x0) {
      *ar6 = 0;
    }
    if (ar7 != (undefined4 *)0x0) {
      *ar7 = 0xffffffff;
    }
  }
  else {
    *ar6 = *puVar2;
    *ar7 = puVar2[1];
  }
  return uVar3;
}



/* aica_ram_268618 @ 8c268618 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 aica_ram_268618(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 < DAT_8c268644) {
    (*(code *)PTR_FUN_8c26864c)(ar4 + DAT_8c268648,ar5,4,1,0,0);
  }
  return 0;
}



/* FUN_8c268650 @ 8c268650 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c268650(uint ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 auStack_8 [8];
  
  if ((int)ar4 < DAT_8c268684) {
    (*(code *)PTR_aica_ram_2686d4_8c268688)(ar4 & 0xfffffffc,auStack_8,ar6,ar7);
    *ar5 = auStack_8[ar4 & 3];
  }
  return 0;
}



/* FUN_8c26868c @ 8c26868c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26868c(uint ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 auStack_c [4];
  
  if ((int)ar4 < DAT_8c2686cc) {
    (*(code *)PTR_aica_ram_2686d4_8c2686d0)(ar4 & 0xfffffffc,auStack_c,ar6,ar7);
    *ar5 = *(undefined2 *)((int)auStack_c + (ar4 & 2));
  }
  return 0;
}



/* aica_ram_2686d4 @ 8c2686d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 aica_ram_2686d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 < DAT_8c268700) {
    (*(code *)PTR_FUN_8c268708)(ar4 + DAT_8c268704,ar5,4,1,0,0);
  }
  return 0;
}



/* FUN_8c26870c @ 8c26870c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26870c(uint ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 auStack_8 [8];
  
  if ((int)ar4 < DAT_8c268740) {
    (*(code *)PTR_aica_ram_2686d4_8c268744)(ar4 & 0xfffffffc,auStack_8,ar6,ar7);
    *ar5 = auStack_8[ar4 & 3];
  }
  return 0;
}



/* aica_ram_268748 @ 8c268748 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 aica_ram_268748(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 auStack_8 [2];
  
  if (ar4 < DAT_8c26877c) {
    auStack_8[0] = ar5;
    (*(code *)PTR_FUN_8c268784)(auStack_8,ar4 + DAT_8c268780,4,1,0,0);
  }
  return 0;
}



/* aica_ram_268788 @ 8c268788 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 aica_ram_268788(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 auStack_8 [2];
  
  if (ar4 < DAT_8c2687bc) {
    auStack_8[0] = ar5;
    (*(code *)PTR_FUN_8c2687c4)(auStack_8,ar4 + DAT_8c2687c0,4,1,0,0);
  }
  return 0;
}



/* FUN_8c2687c8 @ 8c2687c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2687c8(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 auStack_10 [2];
  
  if ((int)ar4 < DAT_8c26880c) {
    (*(code *)PTR_aica_ram_2686d4_8c268810)(ar4 & 0xfffffffc,auStack_10,ar6,ar7);
    *(undefined1 *)((ar4 & 3) + (int)auStack_10) = (undefined1)ar5;
    (*(code *)PTR_aica_ram_268788_8c268814)(ar4 & 0xfffffffc,auStack_10[0],ar6,ar7);
  }
  return 0;
}



/* FUN_8c268818 @ 8c268818 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c268818(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar4 = in_r0;
    ar5_00 = 0xd000001;
  }
  else {
    _DAT_8c4bd560 = 0x8a;
    if (ar4 == 0x4f4e4f4d) {
      DAT_8c4bd564 = 0xff;
    }
    else {
      if (ar4 != 0x4f525453) {
        ar5_00 = 0x3000001;
        goto LAB_8c268860;
      }
      DAT_8c4bd564 = 0;
    }
    ar4 = FUN_8c267fe8(&DAT_8c4bd560,&DAT_8c4bd564,ar6,ar7);
    ar5_00 = ar4;
  }
LAB_8c268860:
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c268818,ar5_00,ar6,ar7,ar4);
  }
  return ar5_00;
}



/* FUN_8c26881a @ 8c26881a callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c26881a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    _DAT_8c4bd560 = 0x8a;
    if (ar4 == 0x4f4e4f4d) {
      DAT_8c4bd564 = 0xff;
    }
    else {
      if (ar4 != 0x4f525453) {
        ar5_00 = 0x3000001;
        goto LAB_8c268860;
      }
      DAT_8c4bd564 = 0;
    }
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd560,&DAT_8c4bd564,ar6,ar7);
  }
LAB_8c268860:
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c268818,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c2688a0 @ 8c2688a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2688a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  
  puVar1 = PTR_DAT_8c2688b0;
  *DAT_8c2688ac = ar4;
  *(undefined4 *)puVar1 = ar5;
  return in_r0;
}



/* FUN_8c2688b4 @ 8c2688b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2688b4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_PR;
  
  ar5_00 = FUN_8c26518c(ar4,ar5,ar6,ar7);
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2688b4,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}



/* FUN_8c2688e0 @ 8c2688e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2688e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  
  ar4_00 = DAT_8c2784c0;
  if (((DAT_8c2784c0 != 0) && (DAT_8c2784c4 == 1)) && (0 < *(int *)(DAT_8c2784c0 + 0x16c))) {
    FUN_8c26518c(DAT_8c2784c0,ar5,ar6,ar7);
  }
  FUN_8c265e08(ar4_00,ar5,ar6,ar7);
  return 0;
}



/* FUN_8c2688e2 @ 8c2688e2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2688e2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r3;
  int ar4_00;
  
  ar4_00 = *in_r3;
  if (((ar4_00 != 0) && (*(int *)PTR_DAT_8c268914 == 1)) && (0 < *(int *)(DAT_8c26890c + ar4_00))) {
    (*(code *)PTR_FUN_8c268918)(ar4_00,ar5,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c26891c)(ar4_00,ar5,ar6,ar7);
  return 0;
}



/* FUN_8c268920 @ 8c268920 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c268920(undefined4 ar4,uint ar5,undefined *ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  uint uVar2;
  int ar5_00;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *(undefined4 *)(DAT_8c2784c0 + 0x164) = ar4;
    *(uint *)(DAT_8c2784c0 + 0x168) = ar5;
    *(undefined4 *)(DAT_8c2784c0 + 0x174) = 0;
    *(undefined4 *)(DAT_8c2784c0 + 0x170) = 0;
    _DAT_8c4bd578 = ar4;
    in_r0 = memset(ar4,0,ar5 * 0x1c,ar7);
    ar6 = &DAT_8c2785a8;
    uVar2 = 0;
    iVar1 = 0;
    if (ar5 != 0) {
      do {
        in_r0 = FUN_8c0107a0(0x1c,*(int *)(DAT_8c2784c0 + 0x164) + iVar1,ar6);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x1c;
      } while (uVar2 < ar5);
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c268920,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}



/* FUN_8c26892c @ 8c26892c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c26892c(undefined4 ar4,undefined4 ar5,undefined *ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r12;
  uint unaff_r13;
  int *unaff_r14;
  undefined4 in_PR;
  
  if (*unaff_r14 == 0) {
    unaff_r13 = 0xd000001;
  }
  else {
    *(undefined4 *)(*unaff_r14 + 0x164) = ar4;
    *(uint *)(*unaff_r14 + 0x168) = unaff_r12;
    *(uint *)(*unaff_r14 + 0x174) = unaff_r13;
    *(uint *)(*unaff_r14 + 0x170) = unaff_r13;
    _DAT_8c4bd578 = ar4;
    memset(ar4,0,unaff_r12 * 0x1c,ar7);
    ar6 = &DAT_8c2785a8;
    uVar1 = unaff_r13;
    uVar2 = unaff_r13;
    if (unaff_r12 != 0) {
      do {
        FUN_8c0107a0(0x1c,*(int *)(*unaff_r14 + 0x164) + uVar1,ar6);
        uVar2 = uVar2 + 1;
        uVar1 = uVar1 + 0x1c;
      } while (uVar2 < unaff_r12);
    }
  }
  if (unaff_r13 != 0) {
    FUN_8c2688a0(FUN_8c268920,unaff_r13,ar6,ar7,in_PR);
  }
  return unaff_r13;
}



/* noop_2689c4 @ 8c2689c4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_2689c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c2689c8 @ 8c2689c8 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2689c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 ar4_01;
  undefined4 uVar1;
  undefined4 *ar6_00;
  undefined4 a7;
  undefined4 in_PR;
  
  noop_26a0f8(ar4,ar5,ar6,ar7,in_PR);
  memset(&DAT_8c4bd580,0,0x480,ar7);
  memset(0x8c4bda00,0,0x820,ar7);
  uVar1 = 0x80808080;
  ar4_00 = 0;
  a7 = 0x200;
  ar6_00 = (undefined4 *)&DAT_8c4be220;
  do {
    ar4_00 = ar4_00 + 1;
    *ar6_00 = 0x80808080;
    ar6_00 = ar6_00 + 1;
  } while (ar4_00 < 0x200);
  if (DAT_8c2785cc == 0) {
    DAT_8c2785cc = ret_const_8c2785e8_26b1ca(ar4_00,0x80808080,ar6_00,0x200);
  }
  ar4_01 = 0;
  (**(code **)(DAT_8c2785cc + 0xc))(0,uVar1,ar6_00,a7);
  noop_2689c4(ar4_01,uVar1,ar6_00,a7,in_PR);
  uVar1 = FUN_8c26a130(0,0,ar6_00,a7);
  return uVar1;
}



/* FUN_8c268a24 @ 8c268a24 callers=1 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c268ab4 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c268a24(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  
  pcVar1 = DAT_8c268ad4;
  iVar5 = (int)DAT_8c268ac2;
  iVar8 = (int)DAT_8c268ac8;
  pcVar4 = DAT_8c268ad4 + iVar5;
  pcVar6 = DAT_8c268ad4;
  pcVar7 = DAT_8c268ad4;
  do {
    if (*pcVar7 == '\x01') {
      s_E1205_Illigal_parameter_MWRN_268d66(pcVar6,ar5,ar6,ar7);
    }
    pcVar7 = pcVar7 + iVar8;
    pcVar6 = pcVar6 + iVar8;
  } while (pcVar7 < pcVar4);
  pcVar6 = pcVar1;
  pcVar7 = pcVar1;
  pcVar4 = pcVar1;
  do {
    if (*pcVar4 == '\x01') {
      s_E1205_Illigal_parameter_MWRN_268c80(pcVar7,pcVar6,ar6,ar7);
    }
    pcVar4 = pcVar4 + iVar8;
    pcVar7 = pcVar7 + iVar8;
  } while (pcVar4 < pcVar1 + iVar5);
  (*(code *)PTR_memset_8c268ad8)(pcVar1,0,iVar5);
  (*(code *)PTR_memset_8c268ad8)(DAT_8c268adc,0,(int)DAT_8c268ac4);
  uVar2 = DAT_8c268ae4;
  iVar5 = 0;
  iVar8 = (int)DAT_8c268ac6;
  puVar3 = DAT_8c268ae0;
  do {
    iVar5 = iVar5 + 1;
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
  } while (iVar5 < iVar8);
  uVar2 = (**(code **)(*(int *)PTR_DAT_8c268ae8 + 0x10))();
  return uVar2;
}



/* FUN_8c268a36 @ 8c268a36 callers=0 callees=2 */

/* WARNING: Switch with 1 destination removed at 0x8c268ab4 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c268a36(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a6;
  undefined4 *a7;
  int unaff_r9;
  int unaff_r10;
  char *unaff_r11;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = (int)DAT_8c268ac8;
  pcVar2 = unaff_r11;
  pcVar3 = unaff_r11;
  do {
    if (*pcVar3 == '\x01') {
      s_E1205_Illigal_parameter_MWRN_268d66(pcVar2,ar5,ar6,ar7);
    }
    pcVar3 = pcVar3 + iVar5;
    pcVar2 = pcVar2 + iVar5;
  } while (pcVar3 < (char *)(unaff_r9 + unaff_r10));
  pcVar2 = unaff_r11;
  pcVar3 = unaff_r11;
  pcVar4 = unaff_r11;
  do {
    if (*pcVar4 == '\x01') {
      s_E1205_Illigal_parameter_MWRN_268c80(pcVar3,pcVar2,ar6,ar7);
    }
    pcVar4 = pcVar4 + iVar5;
    pcVar3 = pcVar3 + iVar5;
  } while (pcVar4 < unaff_r11 + unaff_r10);
  (*(code *)PTR_memset_8c268ad8)(unaff_r11,0,unaff_r10,ar7);
  (*(code *)PTR_memset_8c268ad8)(DAT_8c268adc,0,(int)DAT_8c268ac4,ar7);
  uVar1 = DAT_8c268ae4;
  iVar5 = 0;
  a6 = (int)DAT_8c268ac6;
  a7 = DAT_8c268ae0;
  do {
    iVar5 = iVar5 + 1;
    *a7 = uVar1;
    a7 = a7 + 1;
  } while (iVar5 < a6);
  uVar1 = (**(code **)(*(int *)PTR_DAT_8c268ae8 + 0x10))(iVar5,uVar1,a6,a7);
  return uVar1;
}



/* FUN_8c268afc @ 8c268afc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c268afc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)DAT_8c268bdc;
  *(undefined1 *)(ar4 + 1) = 0;
  *(undefined1 *)(ar4 + 4) = 0;
  *(undefined1 *)(ar4 + 5) = 0;
  *(undefined1 *)(ar4 + 6) = 0;
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(int *)(ar4 + 0x40) = iVar1;
  *(int *)(ar4 + 0x44) = iVar1;
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x70) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0;
  *(undefined4 *)(ar4 + 0x78) = 0;
  *(undefined4 *)(ar4 + 0x7c) = 0;
  *(undefined4 *)(ar4 + 0x80) = 0;
  *(undefined4 *)(ar4 + 0x8c) = 0;
  *(undefined1 *)(ar4 + 7) = 0;
  iVar1 = (int)DAT_8c268bde;
  *(undefined4 *)(iVar1 + ar4) = 0;
  return iVar1;
}



/* FUN_8c268b48 @ 8c268b48 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

char * FUN_8c268b48(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = DAT_8c268be4;
  for (pcVar1 = DAT_8c268be4;
      (pcVar3 = (char *)0x0, pcVar1 < DAT_8c268be4 + DAT_8c268be0 &&
      (pcVar3 = pcVar2, *pcVar1 != '\0')); pcVar1 = pcVar1 + DAT_8c268be2) {
    pcVar2 = pcVar2 + DAT_8c268be2;
  }
  return pcVar3;
}



/* s_E1201_mwRnaCreate_Illigal_pa_268b7a @ 8c268b70 callers=1 callees=5 */

/* WARNING: Unknown calling convention */

undefined4 s_E1201_mwRnaCreate_Illigal_pa_268b7a(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined1 *a4;
  undefined4 uVar2;
  int *a4_00;
  undefined1 *a4_01;
  int iVar3;
  uint ar5_00;
  undefined1 auStack_20 [4];
  int *piStack_1c;
  
  puVar1 = PTR_debug_printf_8c268be8;
  a4_01 = auStack_20;
  if (((int)ar5 < 1) || (2 < (int)ar5)) {
    (*(code *)PTR_debug_printf_8c268be8)(ar4,ar5,ar6,ar7);
  }
  else {
    a4_00 = ar4;
    ar5_00 = ar5;
    if (ar4 != (int *)0x0) {
      ar5_00 = 0;
      if (0 < (int)ar5) {
        do {
          if (*a4_00 == 0) goto LAB_8c268bae;
          ar5_00 = ar5_00 + 1;
          a4_00 = a4_00 + 1;
        } while ((int)ar5_00 < (int)ar5);
      }
      (*(code *)PTR_FUN_8c268bf4)(auStack_20,ar5_00,ar6,ar7);
      a4 = (undefined1 *)FUN_8c268b48(a4_01,ar5_00,ar6,ar7);
      if (a4 == (undefined1 *)0x0) {
        (*(code *)puVar1)(a4_01,ar5_00,ar6,ar7);
      }
      else {
        ar5_00 = 0;
        a4[3] = (char)ar5;
        a4[2] = (char)ar5;
        iVar3 = 0;
        if (0 < (int)ar5) {
          do {
            ar5_00 = ar5_00 + 1;
            *(undefined4 *)(a4 + iVar3 + 0x10) = *(undefined4 *)(iVar3 + (int)ar4);
            iVar3 = iVar3 + 4;
          } while ((int)ar5_00 < (int)ar5);
        }
        iVar3 = (**(code **)(*(int *)PTR_DAT_8c268d10 + 0x14))(ar5,ar5_00,ar6,ar7);
        *(int *)(a4 + 0x38) = iVar3;
        if (iVar3 == 0) {
          (*(code *)puVar1)(ar5,ar5_00,ar6,ar7);
          a4 = (undefined1 *)0x0;
        }
        else {
          FUN_8c268afc(a4,ar5_00,ar6,ar7);
          s_E1205_Illigal_parameter_MWRN_269b92(a4,0x10,ar6,ar7);
          s_E1205_Illigal_parameter_MWRN_269c06(a4,DAT_8c268d18,ar6,ar7);
          ar5_00 = (uint)(byte)a4[3];
          s_E1205_Illigal_parameter_MWRN_269aec(a4,ar5_00,ar6,ar7);
          piStack_1c = *(int **)(a4 + 0x38);
          uVar2 = (**(code **)(*piStack_1c + 0x18))(piStack_1c,ar5_00,ar6,ar7);
          *(undefined4 *)(a4 + 0x28) = uVar2;
          *a4 = 1;
        }
      }
      (*(code *)PTR_FUN_8c268d1c)(auStack_20,ar5_00,ar6,ar7);
      return a4;
    }
LAB_8c268bae:
    (*(code *)PTR_debug_printf_8c268be8)(a4_00,ar5_00,ar6,ar7);
  }
  return 0;
}



/* s_E1205_Illigal_parameter_MWRN_268c80 @ 8c268c7e callers=2 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_268c80(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == (undefined1 *)0x0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff0
                        );
    return uVar1;
  }
  FUN_8c26a100(&stack0xfffffff0,ar5,ar6,ar7);
  if (ar4[1] != '\0') {
    s_E1205_Illigal_parameter_MWRN_268d66(ar4,ar5,ar6,ar7);
  }
  *ar4 = 0;
  for (iVar2 = 0; iVar2 < (int)(uint)(byte)ar4[2]; iVar2 = iVar2 + 1) {
    *(undefined4 *)(ar4 + iVar2 * 4 + 0x10) = 0;
  }
  (**(code **)(**(int **)(ar4 + 0x38) + 0xc))(*(int **)(ar4 + 0x38),0,ar6,ar7);
  uVar1 = 0;
  ar6_00 = 0x90;
  memset(ar4,0,0x90,ar7);
  uVar1 = FUN_8c26a118(&stack0xfffffff0,uVar1,ar6_00,ar7);
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_268cf0 @ 8c268cee callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_268cf0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff4
                        );
    return uVar1;
  }
  FUN_8c26a100(&stack0xfffffff4,ar5,ar6,ar7);
  if (*(char *)(ar4 + 1) != '\0') {
    s_E1205_Illigal_parameter_MWRN_268d66(ar4,ar5,ar6,ar7);
  }
  *(undefined1 *)(ar4 + 1) = 4;
  uVar1 = 1;
  *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(ar4 + 0x44);
  s_E1205_Illigal_parameter_MWRN_2690dc(ar4,1,ar6,ar7);
  uVar1 = FUN_8c26a118(&stack0xfffffff4,uVar1,ar6,ar7);
  return uVar1;
}



/* noop_268d60 @ 8c268d60 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_268d60(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* s_E1205_Illigal_parameter_MWRN_268d66 @ 8c268d64 callers=3 callees=3 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_268d66(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,"E1205:Illigal parameter (MWRNA=NULL)",in_stack_fffffff4);
    return uVar1;
  }
  uVar1 = 0;
  if (*(char *)(ar4 + 1) != '\0') {
    FUN_8c26a100(&stack0xfffffff4,ar5,ar6,ar7);
    s_E1205_Illigal_parameter_MWRN_2691ba(ar4,0,ar6,ar7);
    uVar1 = 0;
    s_E1205_Illigal_parameter_MWRN_2690dc(ar4,0,ar6,ar7);
    noop_268d60(ar4,uVar1,ar6,ar7,in_stack_fffffff4);
    *(undefined1 *)(ar4 + 7) = 0;
    *(undefined1 *)(ar4 + 1) = 0;
    uVar1 = FUN_8c26a118(&stack0xfffffff4,uVar1,ar6,ar7);
  }
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_268db4 @ 8c268db4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_268db4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return uVar1;
  }
  if (*(char *)(ar4 + 6) != '\x01') {
    *(undefined1 *)(ar4 + 6) = 1;
  }
  return 1;
}



/* FUN_8c268ddc @ 8c268ddc callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c268ddc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int s0)

{
  if (s0 < 1) {
    return 0;
  }
  (**(code **)(**(int **)(ar4 + 0x38) + 0x4c))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x5c) = 1;
  return s0;
}



/* FUN_8c268e1a @ 8c268e1a callers=2 callees=0 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

int FUN_8c268e1a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a5;
  int aiStack_24 [3];
  
  if (*(int *)(ar4 + 0x5c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
    aiStack_24[1] = 1;
    aiStack_24[0] = 1;
    for (a5 = 0; a5 < (int)(uint)*(byte *)(ar4 + 3); a5 = a5 + 1) {
      iVar2 = (**(code **)(**(int **)(ar4 + 0x38) + 0x50))(*(int **)(ar4 + 0x38),a5,ar6,ar7);
      if (iVar2 != 1) {
        aiStack_24[a5] = 0;
      }
    }
    if ((aiStack_24[0] == 0) || (aiStack_24[1] == 0)) {
      iVar1 = 0;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(ar4 + 0x5c) = 0;
    }
  }
  return iVar1;
}



/* FUN_8c268ea8 @ 8c268ea8 callers=3 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c268ea8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_1c [4];
  int *piStack_18;
  
  FUN_8c26a100(auStack_1c,ar5,ar6,ar7);
  piStack_18 = *(int **)(ar4 + 0x38);
  iVar4 = *(int *)(ar4 + 0x30);
  uVar1 = (**(code **)(*piStack_18 + 0x20))(piStack_18,0,ar6,ar7);
  iVar2 = libgcc_divide_helper_010468(0x20,*(undefined4 *)(ar4 + 8));
  iVar2 = iVar2 << 3;
  iVar3 = libgcc_divide_helper_010468(uVar1,iVar2);
  iVar5 = iVar3 * iVar2 - iVar4;
  *(int *)(ar4 + 0x30) = iVar3 * iVar2;
  if (iVar5 < 0) {
    iVar5 = iVar5 + *(int *)(ar4 + 0x28);
  }
  iVar2 = *(int *)(ar4 + 0x34) - iVar5;
  if (iVar2 < 0) {
    *(undefined1 *)(ar4 + 4) = 1;
    iVar2 = 0;
    iVar5 = *(int *)(ar4 + 0x2c) - iVar4;
  }
  if ((*(char *)(ar4 + 4) == '\x01') &&
     (iVar3 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,uVar1,ar6,ar7), iVar3 == 1)) {
    *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar4 + 0x30);
    *(undefined1 *)(ar4 + 4) = 0;
  }
  *(int *)(ar4 + 0x34) = iVar2;
  *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + iVar5;
  uVar1 = FUN_8c26a118(auStack_1c,uVar1,ar6,ar7);
  return uVar1;
}



/* s_E1213_mwlRnaAddWrPos_rna_sj__268f4c @ 8c268f3e callers=4 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(int ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar2 = auStack_3c;
  FUN_8c26a100(auStack_3c,ar5,ar6,ar7);
  for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(ar4 + 3); iVar4 = iVar4 + 1) {
    if (*(int *)(iVar4 * 4 + ar4 + 0x10) == 0) {
      debug_printf(puVar2,ar5,ar6,ar7);
    }
  }
  for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(ar4 + 3); iVar4 = iVar4 + 1) {
    uStack_28 = *(undefined4 *)(ar4 + 0x18 + iVar4 * 8);
    uStack_24 = *(undefined4 *)(iVar4 * 8 + ar4 + 0x1c);
    puVar2 = auStack_30;
    ar7 = auStack_38;
    uVar1 = libgcc_divide_helper_010468(*(int *)(ar4 + 0x3c) * *(int *)(ar4 + 8),8);
    FUN_8c26be30(&uStack_28,uVar1,puVar2,ar7);
    piVar3 = *(int **)(ar4 + 0x10 + iVar4 * 4);
    (**(code **)(*piVar3 + 0x20))(piVar3,0,auStack_30,ar7);
    piVar3 = *(int **)(ar4 + 0x10 + iVar4 * 4);
    ar5 = 1;
    ar6 = auStack_38;
    (**(code **)(*piVar3 + 0x1c))(piVar3,1,ar6,ar7);
  }
  uVar1 = libgcc_divide_helper_010614
                    (*(int *)(ar4 + 0x2c) + *(int *)(ar4 + 0x3c),*(undefined4 *)(ar4 + 0x28));
  *(undefined4 *)(ar4 + 0x2c) = uVar1;
  *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + *(int *)(ar4 + 0x3c);
  *(int *)(ar4 + 0x4c) = *(int *)(ar4 + 0x4c) + *(int *)(ar4 + 0x3c);
  *(undefined4 *)(ar4 + 0x3c) = 0;
  uVar1 = FUN_8c26a118(auStack_3c,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c269056 @ 8c269056 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c269056(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = libgcc_divide_helper_010614
                    (*(int *)(ar4 + 0x50) + *(int *)(ar4 + 0x58),*(undefined4 *)(ar4 + 0x28));
  *(undefined4 *)(ar4 + 0x50) = uVar1;
  *(int *)(ar4 + 0x54) = *(int *)(ar4 + 0x54) + *(int *)(ar4 + 0x58);
  *(undefined4 *)(ar4 + 0x58) = 0;
  return 0x58;
}



/* FUN_8c26905a @ 8c26905a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26905a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *in_r2;
  
  uVar1 = (*in_r2)();
  *(undefined4 *)(ar4 + 0x50) = uVar1;
  *(int *)(ar4 + 0x54) = *(int *)(ar4 + 0x54) + *(int *)(ar4 + 0x58);
  *(undefined4 *)(ar4 + 0x58) = 0;
  return 0x58;
}



/* s_E1209_mwRnaPause_Time_out_of_26908e @ 8c269086 callers=3 callees=1 */

/* WARNING: Unknown calling convention */

int s_E1209_mwRnaPause_Time_out_of_26908e
              (undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  undefined4 ar4_00;
  int iVar2;
  undefined4 s4;
  
  DAT_8c2785d4 = 0;
  for (iVar2 = 0; ar4_00 = 0, s4 = ar4, iVar2 < 200; iVar2 = iVar2 + 1) {
    ain0 = FUN_8c268e1a(ar4,ar5,ar6,ar7);
    ar4_00 = ar4;
    if (ain0 == 1) break;
    iVar1 = 5000;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    DAT_8c2785d4 = DAT_8c2785d4 + 1;
    ar4 = s4;
  }
  if (iVar2 == 200) {
    ain0 = debug_printf(ar4_00,ar5,ar6,ar7,s_E1209_mwRnaPause_Time_out_of_wai_8c2732ec,s4);
  }
  return ain0;
}



/* s_E1205_Illigal_parameter_MWRN_2690dc @ 8c2690d8 callers=4 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_2690dc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int a5;
  undefined4 in_stack_ffffffec;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,"E1205:Illigal parameter (MWRNA=NULL)",in_stack_ffffffec);
  }
  else {
    *(undefined4 *)(ar4 + 0x8c) = 1;
    a5 = ar5;
    if (*(char *)(ar4 + 5) == '\x01') {
      s_E1209_mwRnaPause_Time_out_of_26908e(ar4,ar5,ar6,ar7,in_stack_ffffffec);
      iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,a5,ar6,ar7);
      if (iVar2 == 1) {
        s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,a5,ar6,ar7);
      }
      else {
        FUN_8c269056(ar4,a5,ar6,ar7);
      }
      *(undefined1 *)(ar4 + 5) = 0;
    }
    FUN_8c26a100(&stack0xffffffec,a5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x8c) = 0;
    if (ar5 == 0) {
      iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,a5,ar6,ar7);
      if (iVar2 != 0) {
        *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar4 + 0x2c);
        *(undefined4 *)(ar4 + 0x54) = 0;
        *(undefined4 *)(ar4 + 0x58) = 0;
        *(byte *)(ar4 + 1) = *(byte *)(ar4 + 1) & 6;
      }
    }
    else if ((ar5 == 1) &&
            (iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,a5,ar6,ar7), iVar2 != 1)) {
      *(undefined4 *)(ar4 + 0x2c) = 0;
      *(undefined4 *)(ar4 + 0x30) = 0;
      *(undefined4 *)(ar4 + 0x34) = 0;
      *(undefined1 *)(ar4 + 6) = 0;
      *(undefined4 *)(ar4 + 0x5c) = 0;
      *(undefined4 *)(ar4 + 0x48) = 0;
      *(undefined4 *)(ar4 + 0x4c) = 0;
      *(undefined4 *)(ar4 + 0x3c) = 0;
      *(undefined1 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar4 + 0x2c);
      *(undefined4 *)(ar4 + 0x54) = 0;
      *(byte *)(ar4 + 1) = *(byte *)(ar4 + 1) | 1;
    }
    uVar1 = FUN_8c26a118(&stack0xffffffec,a5,ar6,ar7);
  }
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_2691ba @ 8c2691b8 callers=5 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_2691ba(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_c [8];
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar5);
    return uVar1;
  }
  iVar2 = ar5;
  FUN_8c26a100(auStack_c,ar5,ar6,ar7);
  if (iVar2 == 0) {
    iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
    if (iVar2 != 0) {
      (**(code **)(**(int **)(ar4 + 0x38) + 0x14))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
      *(byte *)(ar4 + 1) = *(byte *)(ar4 + 1) & 5;
    }
  }
  else if ((iVar2 == 1) &&
          (iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7), iVar2 != 1)) {
    (**(code **)(**(int **)(ar4 + 0x38) + 0x10))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
    *(byte *)(ar4 + 1) = *(byte *)(ar4 + 1) | 2;
  }
  uVar1 = FUN_8c26a118(auStack_c,ar5,ar6,ar7);
  return uVar1;
}



/* s_E1212_mwlRnaStartTrans_rna_s_269252 @ 8c269244 callers=1 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int * s_E1212_mwlRnaStartTrans_rna_s_269252
                (undefined1 *ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  int iVar2;
  undefined1 *a7;
  int *piVar3;
  undefined1 *puVar4;
  int *a5;
  undefined1 *a6;
  int *piVar5;
  int iVar6;
  
  iVar1 = libgcc_divide_helper_010468(0x20,*(undefined4 *)(ar4 + 8));
  iVar1 = iVar1 * 8;
  piVar3 = (int *)(*(int *)(ar4 + 0x28) - *(int *)(ar4 + 0x34));
  iVar2 = libgcc_divide_helper_010468(piVar3,iVar1);
  piVar5 = (int *)(iVar2 * iVar1);
  for (iVar2 = 0; iVar2 < (int)(uint)(byte)ar4[3]; iVar2 = iVar2 + 1) {
    if (*(int *)(ar4 + iVar2 * 4 + 0x10) == 0) {
      debug_printf(piVar3,ar5,ar6,ar7);
    }
    piVar3 = *(int **)(ar4 + iVar2 * 4 + 0x10);
    iVar6 = (int)piVar5 * *(int *)(ar4 + 8);
    ar7 = ar4 + iVar2 * 8 + 0x18;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 7;
    }
    ar5 = 1;
    ar6 = (undefined1 *)(iVar6 >> 3);
    (**(code **)(*piVar3 + 0x18))(piVar3,1,ar6,ar7);
  }
  if (ar4[3] == '\x01') {
    puVar4 = *(undefined1 **)(ar4 + 0x1c);
  }
  else {
    ar6 = *(undefined1 **)(ar4 + 0x1c);
    ar7 = *(undefined1 **)(ar4 + 0x24);
    puVar4 = ar7;
    if ((int)ar6 < (int)ar7) {
      puVar4 = ar6;
    }
  }
  iVar2 = libgcc_divide_helper_010468(puVar4,*(undefined4 *)(ar4 + 8));
  piVar3 = (int *)(iVar2 << 3);
  if ((int)piVar5 <= iVar2 << 3) {
    piVar3 = piVar5;
  }
  a5 = (int *)(*(int *)(ar4 + 0x28) - *(int *)(ar4 + 0x2c));
  if ((int)a5 <= (int)piVar3) {
    piVar3 = a5;
  }
  iVar2 = libgcc_divide_helper_010468(piVar3,iVar1);
  if (iVar2 * iVar1 < 1) {
    for (iVar1 = 0; iVar1 < (int)(uint)(byte)ar4[3]; iVar1 = iVar1 + 1) {
      if (*(int *)(ar4 + iVar1 * 4 + 0x10) == 0) {
        debug_printf(piVar3,a5,ar6,ar7);
      }
      piVar3 = *(int **)(ar4 + iVar1 * 4 + 0x10);
      a5 = (int *)0x1;
      ar6 = ar4 + iVar1 * 8 + 0x18;
      (**(code **)(*piVar3 + 0x1c))(piVar3,1,ar6,ar7);
    }
    piVar5 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_8c4bea40;
    for (piVar3 = (int *)0x0; (int)piVar3 < (int)(uint)(byte)ar4[3];
        piVar3 = (int *)((int)piVar3 + 1)) {
      a7 = *(undefined1 **)(ar4 + (int)piVar3 * 8 + 0x18);
      a6 = *(undefined1 **)(ar4 + 0x2c);
      _DAT_8c4bea40 = sh4_tmu_1f88e6(puVar4,a5,ar6,ar7);
      puVar4 = ar4;
      a5 = piVar3;
      piVar5 = (int *)FUN_8c268ddc(ar4,piVar3,a6,a7);
      _DAT_8c4bea44 = sh4_tmu_1f88e6(puVar4,a5,a6,a7);
      ar6 = a6;
      ar7 = a7;
    }
    *(int **)(ar4 + 0x3c) = piVar5;
  }
  return piVar5;
}



/* FUN_8c2693ce @ 8c2693ce callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c2693ce(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 d;
  int iVar4;
  undefined1 *a7;
  
  iVar3 = *(int *)(ar4 + 0x28);
  d = *(undefined4 *)(ar4 + 8);
  iVar4 = (iVar3 - *(int *)(ar4 + 0x34)) - *(int *)(ar4 + 0x54);
  iVar1 = libgcc_divide_helper_010468(0x20,d);
  iVar1 = iVar1 << 3;
  iVar4 = libgcc_divide_helper_010468(iVar4,iVar1);
  iVar3 = iVar3 - *(int *)(ar4 + 0x50);
  if (iVar4 * iVar1 < iVar3) {
    iVar3 = iVar4 * iVar1;
  }
  iVar4 = libgcc_divide_helper_010468(0x800,d);
  if (iVar4 << 3 <= iVar3) {
    iVar3 = iVar4 << 3;
  }
  iVar3 = libgcc_divide_helper_010468(iVar3,iVar1);
  if (iVar3 * iVar1 < 1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    if (*(int *)(ar4 + 8) == 4) {
      puVar2 = &DAT_8c4be220;
    }
    else {
      puVar2 = (undefined1 *)0x8c4bda00;
    }
    a7 = puVar2 + 0x20;
    for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(ar4 + 3); iVar3 = iVar3 + 1) {
      puVar2 = (undefined1 *)FUN_8c268ddc(ar4,iVar3,*(undefined4 *)(ar4 + 0x50),a7);
    }
    *(undefined1 **)(ar4 + 0x58) = puVar2;
  }
  return puVar2;
}



/* FUN_8c2694a4 @ 8c2694a4 callers=1 callees=11 */

/* WARNING: Unknown calling convention */

uint FUN_8c2694a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(DAT_8c2694e6 + ar4) == 1) {
    return 1;
  }
  iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
  puVar1 = PTR_DAT_8c2694f4;
  if ((iVar2 == 1) && (*(char *)(ar4 + 5) == '\x01')) {
    iVar2 = FUN_8c268e1a(ar4,ar5,ar6,ar7);
    if (iVar2 == 1) {
      s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,ar5,ar6,ar7);
      *(undefined1 *)(ar4 + 5) = 0;
      *(undefined4 *)puVar1 = 0;
    }
    else {
      *(int *)puVar1 = *(int *)puVar1 + 1;
    }
  }
  if ((*(char *)(ar4 + 6) == '\x01') && (*(char *)(ar4 + 5) == '\0')) {
    ar5 = 1;
    iVar2 = (**(code **)(**(int **)(ar4 + 0x10) + 0x24))(*(int **)(ar4 + 0x10),1,ar6,ar7);
    if (iVar2 < 0x20) {
      ar5 = 0;
      s_E1205_Illigal_parameter_MWRN_2690dc(ar4,0,ar6,ar7);
      *(undefined1 *)(ar4 + 6) = 0;
    }
  }
  iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
  if (iVar2 == 1) {
    FUN_8c268ea8(ar4,ar5,ar6,ar7);
  }
  iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
  if (iVar2 == 1) {
    if (*(char *)(ar4 + 5) != '\0') goto LAB_8c26958c;
    iVar2 = s_E1212_mwlRnaStartTrans_rna_s_269252(ar4,ar5,ar6,ar7);
  }
  else {
    iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
    if ((iVar2 != 1) || (*(int *)(ar4 + 0x28) <= *(int *)(ar4 + 0x54))) goto LAB_8c26958c;
    if ((*(char *)(ar4 + 5) == '\x01') && (iVar2 = FUN_8c268e1a(ar4,ar5,ar6,ar7), iVar2 == 1)) {
      FUN_8c269056(ar4,ar5,ar6,ar7);
      *(undefined1 *)(ar4 + 5) = 0;
    }
    if (*(char *)(ar4 + 5) != '\0') goto LAB_8c26958c;
    iVar2 = FUN_8c2693ce(ar4,ar5,ar6,ar7);
  }
  if (0 < iVar2) {
    *(undefined1 *)(ar4 + 5) = 1;
  }
LAB_8c26958c:
  if (((*(char *)(ar4 + 1) == '\x05') && (*(int *)(ar4 + 0x40) <= *(int *)(ar4 + 0x34))) &&
     (*(char *)(ar4 + 7) == '\0')) {
    s_E1205_Illigal_parameter_MWRN_2691ba(ar4,1,ar6,ar7);
    *(undefined4 *)(ar4 + 0x40) = DAT_8c2695e0;
  }
  if ((*(byte *)(ar4 + 1) == 6) && (*(int *)(ar4 + 0x34) == 0)) {
    uVar3 = 0;
    s_E1205_Illigal_parameter_MWRN_2691ba(ar4,0,ar6,ar7);
    uVar3 = noop_268d60(ar4,uVar3,ar6,ar7);
    return uVar3;
  }
  return (uint)*(byte *)(ar4 + 1);
}



/* FUN_8c2695e4 @ 8c2695e4 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2695e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char *a5;
  char *pcVar2;
  int iVar3;
  char *a4;
  char *pcVar4;
  undefined1 auStack_18 [8];
  
  (*(code *)PTR_FUN_8c2696d0)(auStack_18,ar5,ar6,ar7);
  iVar3 = (int)DAT_8c2696c8;
  pcVar2 = DAT_8c2696d4 + DAT_8c2696ca;
  a5 = DAT_8c2696d4;
  a4 = DAT_8c2696d4;
  pcVar4 = DAT_8c2696d4;
  do {
    if (*pcVar4 == '\x01') {
      FUN_8c2694a4(a4,a5,ar6,ar7);
    }
    pcVar4 = pcVar4 + iVar3;
    a4 = a4 + iVar3;
  } while (pcVar4 < pcVar2);
  uVar1 = (*(code *)PTR_FUN_8c2696d8)(auStack_18,a5,ar6,ar7);
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269630 @ 8c26962c callers=0 callees=6 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269630(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,"E1205:Illigal parameter (MWRNA=NULL)",in_stack_fffffff0);
  }
  else {
    FUN_8c26a100(&stack0xfffffff0,ar5,ar6,ar7);
    if (*(char *)(ar4 + 7) == '\0') {
      iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
      uVar3 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
      *(uint *)(ar4 + 0x88) = iVar2 << 1 | uVar3;
      FUN_8c268ea8(ar4,ar5,ar6,ar7);
      ar5 = 0;
      s_E1205_Illigal_parameter_MWRN_2691ba(ar4,0,ar6,ar7);
      *(undefined1 *)(ar4 + 7) = 1;
      if (*(char *)(ar4 + 5) == '\x01') {
        *(undefined4 *)(ar4 + 0x8c) = 1;
        FUN_8c26a118(&stack0xfffffff0,ar5,ar6,ar7);
        s_E1209_mwRnaPause_Time_out_of_26908e(ar4,ar5,ar6,ar7,in_stack_fffffff0);
        FUN_8c26a100(&stack0xfffffff0,ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 0x8c) = 0;
      }
      s_E1205_Illigal_parameter_MWRN_26973a(ar4,ar5,ar6,ar7);
    }
    uVar1 = FUN_8c26a118(&stack0xfffffff0,ar5,ar6,ar7);
  }
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_2696ac @ 8c2696aa callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_2696ac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff4
                        );
    return uVar1;
  }
  FUN_8c26a100(&stack0xfffffff4,ar5,ar6,ar7);
  if (*(char *)(ar4 + 7) == '\x01') {
    if ((*(int *)(ar4 + 0x88) != 0) && (*(int *)(ar4 + 0x88) != 1)) {
      ar5 = 1;
      s_E1205_Illigal_parameter_MWRN_2691ba(ar4,1,ar6,ar7);
    }
    *(undefined1 *)(ar4 + 7) = 0;
  }
  uVar1 = FUN_8c26a118(&stack0xfffffff4,ar5,ar6,ar7);
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269718 @ 8c269718 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269718(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0;
  }
  return (uint)*(byte *)(ar4 + 7);
}



/* s_E1205_Illigal_parameter_MWRN_26973a @ 8c269738 callers=2 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_26973a(int ar4,int ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int in_stack_ffffffec;
  undefined1 auStack_10 [4];
  int *piStack_c;
  
  puVar3 = &stack0xffffffec;
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_ffffffec
                        );
    return uVar1;
  }
  FUN_8c26a100(auStack_10,ar5,ar6,ar7);
  if (*(char *)(ar4 + 5) == '\x01') {
    iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
    if (iVar2 == 1) {
      s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,ar5,ar6,ar7);
    }
    else {
      FUN_8c269056(ar4,ar5,ar6,ar7);
    }
    *(undefined1 *)(ar4 + 5) = 0;
  }
  if ((*(int *)(ar4 + 0x30) != 0) && (0 < *(int *)(ar4 + 0x34))) {
    piStack_c = *(int **)(ar4 + 0x38);
    iVar2 = (**(code **)(*piStack_c + 0x54))
                      (piStack_c,*(undefined4 *)(ar4 + 0x30),&stack0xffffffec,ar7);
    ar6 = puVar3;
    if (*(int *)(ar4 + 0x88) == 2) {
      uVar1 = libgcc_divide_helper_010614
                        ((*(int *)(ar4 + 0x50) + *(int *)(ar4 + 0x28)) - in_stack_ffffffec,
                         *(int *)(ar4 + 0x28));
      *(undefined4 *)(ar4 + 0x50) = uVar1;
      ar6 = puVar3;
    }
    ar5 = *(int *)(ar4 + 0x28);
    uVar1 = libgcc_divide_helper_010614((*(int *)(ar4 + 0x2c) + ar5) - in_stack_ffffffec,ar5);
    *(undefined4 *)(ar4 + 0x2c) = uVar1;
    *(int *)(ar4 + 0x30) = (*(int *)(ar4 + 0x30) + iVar2) - in_stack_ffffffec;
    *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) - iVar2;
  }
  uVar1 = FUN_8c26a118(auStack_10,ar5,ar6,ar7);
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269816 @ 8c269808 callers=1 callees=5 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_269816(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *s0;
  undefined1 *a5;
  int *piVar5;
  undefined1 *ar5_00;
  undefined1 auStack_4c [4];
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [4];
  undefined1 *puStack_2c;
  undefined1 auStack_28 [4];
  undefined1 *puStack_24;
  
  iVar2 = ar4;
  iVar3 = ar5;
  if (ar4 == 0) {
    s0 = s_E1205_Illigal_parameter__MWRNA_N_8c2732a0;
  }
  else {
    iVar1 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
    if (iVar1 != 1) {
      if (iVar3 < 1) {
        return 0;
      }
      *(undefined4 *)(ar4 + 0x8c) = 1;
      if (*(char *)(ar4 + 5) == '\x01') {
        s_E1209_mwRnaPause_Time_out_of_26908e(ar4,ar5,ar6,ar7,iVar3);
        iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
        if (iVar2 == 1) {
          s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,ar5,ar6,ar7);
        }
        else {
          FUN_8c269056(ar4,ar5,ar6,ar7);
        }
        *(undefined1 *)(ar4 + 5) = 0;
      }
      FUN_8c26a100(auStack_4c,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x8c) = 0;
      iVar2 = libgcc_divide_helper_010468(0x20,*(undefined4 *)(ar4 + 8));
      iVar2 = iVar2 << 3;
      iVar3 = libgcc_divide_helper_010468(iVar3,iVar2);
      iVar3 = iVar3 * iVar2;
      if (*(int *)(ar4 + 0x34) < iVar3) {
        iVar2 = (iVar3 - *(int *)(ar4 + 0x34)) * *(int *)(ar4 + 8);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 7;
        }
        ar6 = (undefined1 *)(iVar2 >> 3);
        (**(code **)(**(int **)(ar4 + 0x10) + 0x18))(*(int **)(ar4 + 0x10),1,ar6,auStack_30);
        a5 = (undefined1 *)0x1;
        ar7 = auStack_28;
        (**(code **)(**(int **)(ar4 + 0x14) + 0x18))(*(int **)(ar4 + 0x14),1,ar6,ar7);
        ar5_00 = puStack_2c;
        if ((*(char *)(ar4 + 3) != '\x01') &&
           (puStack_48 = auStack_28, a5 = puStack_24, ar6 = puStack_2c, ar5_00 = puStack_24,
           puStack_44 = auStack_30, (int)puStack_2c < (int)puStack_24)) {
          ar5_00 = puStack_2c;
        }
        for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(ar4 + 3); iVar2 = iVar2 + 1) {
          ar7 = auStack_40;
          FUN_8c26be30(auStack_30 + iVar2 * 8,ar5_00,auStack_38,ar7);
          piVar5 = *(int **)(ar4 + 0x10 + iVar2 * 4);
          (**(code **)(*piVar5 + 0x20))(piVar5,0,auStack_38,ar7);
          piVar5 = *(int **)(ar4 + 0x10 + iVar2 * 4);
          a5 = (undefined1 *)0x1;
          ar6 = auStack_40;
          (**(code **)(*piVar5 + 0x1c))(piVar5,1,ar6,ar7);
        }
        *(undefined4 *)(ar4 + 0x2c) = 0;
        *(undefined4 *)(ar4 + 0x34) = 0;
        iVar2 = libgcc_divide_helper_010468(ar5_00,*(undefined4 *)(ar4 + 8));
        iVar2 = iVar2 * 8 + *(int *)(ar4 + 0x28);
      }
      else {
        a5 = (undefined1 *)
             libgcc_divide_helper_010614(*(int *)(ar4 + 0x30) + iVar3,*(undefined4 *)(ar4 + 0x28));
        iVar2 = (**(code **)(**(int **)(ar4 + 0x38) + 0x58))(*(int **)(ar4 + 0x38),a5,ar6,ar7);
        iVar3 = *(int *)(ar4 + 0x34) - iVar2;
        *(int *)(ar4 + 0x34) = iVar3;
        uVar4 = libgcc_divide_helper_010614(iVar3,*(undefined4 *)(ar4 + 0x28));
        *(undefined4 *)(ar4 + 0x2c) = uVar4;
      }
      *(undefined4 *)(ar4 + 0x30) = 0;
      FUN_8c26a118(auStack_4c,a5,ar6,ar7);
      return iVar2;
    }
    s0 = s_E1210_mwRnaDiscardData_Play_Swit_8c273344;
  }
  debug_printf(iVar2,ar5,ar6,ar7,s0,iVar3);
  return 0;
}



/* s_E1205_Illigal_parameter_MWRN_2699d4 @ 8c2699d0 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_2699d4(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *a5;
  undefined4 *puVar2;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar6);
  }
  else {
    a5 = ar5;
    puVar2 = ar6;
    FUN_8c268ea8(ar4,ar5,ar6,ar7);
    *ar5 = *(int *)(ar4 + 0x4c) - *(int *)(ar4 + 0x34);
    uVar1 = s_E1205_Illigal_parameter_MWRN_269e36(ar4,a5,ar6,ar7);
    *puVar2 = uVar1;
  }
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269a10 @ 8c269a10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269a10(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return (uint)*(byte *)(ar4 + 1);
}



/* s_E1205_Illigal_parameter_MWRN_269a30 @ 8c269a30 callers=6 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269a30(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(byte *)(ar4 + 1) & 1;
}



/* s_E1205_Illigal_parameter_MWRN_269a56 @ 8c269a56 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269a56(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return (int)(*(byte *)(ar4 + 1) & 2) >> 1;
}



/* s_E1205_Illigal_parameter_MWRN_269a7e @ 8c269a7e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269a7e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return (int)(*(byte *)(ar4 + 1) & 4) >> 2;
}



/* s_E1205_Illigal_parameter_MWRN_269aa8 @ 8c269aa8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269aa8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 + 0x34);
}



/* s_E1205_Illigal_parameter_MWRN_269ac6 @ 8c269ac6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269ac6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(int *)(ar4 + 0x28) - *(int *)(ar4 + 0x34);
}



/* s_E1205_Illigal_parameter_MWRN_269aec @ 8c269ae8 callers=2 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_269aec(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char *s0;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == 0) {
    s0 = s_E1205_Illigal_parameter__MWRNA_N_8c2732a0;
  }
  else {
    if (ar5 <= (int)(uint)*(byte *)(ar4 + 2)) {
      *(char *)(ar4 + 3) = (char)ar5;
      (**(code **)(**(int **)(ar4 + 0x38) + 0x1c))(*(int **)(ar4 + 0x38),(int)(char)ar5,ar6,ar7);
      if (ar5 == 1) {
        *(undefined4 *)(ar4 + 100) = 0;
        *(undefined4 *)(ar4 + 0x68) = 0;
      }
      else {
        *(undefined4 *)(ar4 + 100) = 0xfffffff1;
        *(undefined4 *)(ar4 + 0x68) = 0xf;
      }
      s_E1205_Illigal_parameter_MWRN_269c8c(ar4,0,*(undefined4 *)(ar4 + 100),ar7);
      uVar1 = s_E1205_Illigal_parameter_MWRN_269c8c(ar4,1,*(undefined4 *)(ar4 + 0x68),ar7);
      return uVar1;
    }
    s0 = s_E1211_mwRnaSetNumChan_Illigal_pa_8c273370;
  }
  uVar1 = debug_printf(ar4,ar5,ar6,ar7,s0,in_stack_fffffff0);
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269b6e @ 8c269b6e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269b6e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return uVar1;
  }
  *(undefined4 *)(ar4 + 0x44) = ar5;
  return 0x44;
}



/* s_E1205_Illigal_parameter_MWRN_269b92 @ 8c269b8e callers=3 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269b92(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff0
                        );
  }
  else {
    iVar2 = *(int *)(ar4 + 0x28) * *(int *)(ar4 + 8);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    iVar2 = libgcc_divide_helper_010468(iVar2 >> 3,ar5);
    *(int *)(ar4 + 0x28) = iVar2 << 3;
    uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x2c))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 8) = ar5;
  }
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269c06 @ 8c269c04 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269c06(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar5);
    return uVar1;
  }
  uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x24))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0xc) = ar5;
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269c42 @ 8c269c3e callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_269c42(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff0
                        );
  }
  else {
    if (ar5 < 0) {
      if (ar5 < -0x3e6) {
        ar5 = -999;
      }
    }
    else {
      ar5 = 0;
    }
    (**(code **)(**(int **)(ar4 + 0x38) + 0x34))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
    uVar1 = 0x60;
    *(int *)(ar4 + 0x60) = ar5;
  }
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269c8c @ 8c269c88 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_269c8c(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar5);
  }
  else {
    iVar2 = -0xf;
    if ((ar6 < -0xf) || (iVar2 = 0xf, 0xf < ar6)) {
      ar6 = iVar2;
    }
    uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x3c))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
    *(int *)(ar5 * 4 + ar4 + 100) = ar6;
  }
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269cf2 @ 8c269cec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_269cf2(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char *s0;
  undefined4 in_stack_ffffffec;
  
  if (ar4 == 0) {
    s0 = s_E1205_Illigal_parameter__MWRNA_N_8c2732a0;
  }
  else {
    if ((-1 < ar5) && (ar5 < 0x11)) {
      if (ar6 < -0x2d) {
        ar6 = -0x2d;
      }
      else if (0 < ar6) {
        ar6 = 0;
      }
      (**(code **)(**(int **)(ar4 + 0x38) + 0x44))(*(int **)(ar4 + 0x38),0,ar5,ar6);
      *(int *)(ar4 + 0x6c) = ar5;
      *(int *)(ar4 + 0x70) = ar6;
      return 0x70;
    }
    s0 = s_E1207_mwRnaSetFx_Illigal_paramet_8c2733a4;
  }
  uVar1 = debug_printf(ar4,ar5,ar6,ar7,s0,in_stack_ffffffec);
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269d5a @ 8c269d58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269d5a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_ffffffe4;
  undefined4 uStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = ar5;
  uStack_c = ar6;
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_ffffffe4
                        );
    return uVar1;
  }
  piStack_14 = *(int **)(ar4 + 0x38);
  (**(code **)(*piStack_14 + 0x44))(piStack_14,1,ar5,ar6);
  piStack_14 = *(int **)(ar4 + 0x38);
  (**(code **)(*piStack_14 + 0x48))(piStack_14,1,&stack0xffffffe4,&uStack_18);
  *(undefined4 *)(ar4 + 0x74) = in_stack_ffffffe4;
  *(undefined4 *)(ar4 + 0x78) = uStack_18;
  return 0x78;
}



/* s_E1205_Illigal_parameter_MWRN_269dbc @ 8c269db8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_269dbc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff0
                        );
  }
  else {
    if (ar5 < -0x2d) {
      ar5 = -0x2d;
    }
    else if (0 < ar5) {
      ar5 = 0;
    }
    (**(code **)(**(int **)(ar4 + 0x38) + 0x44))(*(int **)(ar4 + 0x38),2,ar5,0);
    uVar1 = 0x84;
    *(int *)(ar4 + 0x84) = ar5;
  }
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269e18 @ 8c269e18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269e18(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 + 8);
}



/* s_E1205_Illigal_parameter_MWRN_269e36 @ 8c269e36 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269e36(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 + 0xc);
}



/* s_E1205_Illigal_parameter_MWRN_269e54 @ 8c269e54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269e54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 + 0x60);
}



/* s_E1205_Illigal_parameter_MWRN_269e74 @ 8c269e74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_269e74(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar5 * 4 + ar4 + 100);
}



/* s_E1205_Illigal_parameter_MWRN_269e9a @ 8c269e9a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269e9a(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar6);
    *ar5 = 0xffffffff;
    *ar6 = 0xffffffff;
    return uVar1;
  }
  *ar5 = *(undefined4 *)(ar4 + 0x6c);
  *ar6 = *(undefined4 *)(ar4 + 0x70);
  return 0x70;
}



/* s_E1205_Illigal_parameter_MWRN_269eda @ 8c269eda callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269eda(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar6);
    *ar5 = 0xffffffff;
    *ar6 = 0xffffffff;
    return uVar1;
  }
  *ar5 = *(undefined4 *)(ar4 + 0x74);
  *ar6 = *(undefined4 *)(ar4 + 0x78);
  return 0x78;
}



/* s_E1205_Illigal_parameter_MWRN_269f1a @ 8c269f1a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269f1a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 + 0x84);
}



/* thunk_FUN_8c26a130 @ 8c269f3a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c26a130(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c269f4c)();
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269f52 @ 8c269f50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269f52(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar6);
    return uVar1;
  }
  *(undefined4 *)(ar4 + 0x7c) = ar5;
  *(undefined4 *)(ar4 + 0x80) = ar6;
                    /* WARNING: Could not recover jumptable at 0x8c269f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x44))(*(int **)(ar4 + 0x38),3,ar5,ar6);
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269fa0 @ 8c269fa0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269fa0(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return uVar1;
  }
  *ar5 = *(undefined4 *)(ar4 + 0x7c);
  *ar6 = *(undefined4 *)(ar4 + 0x80);
  return 0x80;
}



/* s_E1205_Illigal_parameter_MWRN_269fcc @ 8c269fc8 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_269fcc(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *a6;
  undefined1 *a7;
  undefined4 *a7_00;
  int *piVar3;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  int *piStack_20;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 auStack_10 [2];
  
  puStack_24 = (undefined4 *)ar5;
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar6);
  }
  else {
    (**(code **)(**(int **)(ar4 + 0x38) + 0x44))(*(int **)(ar4 + 0x38),4,ar5,0);
    uVar2 = 4;
    a7 = auStack_1c;
    piVar3 = ar6;
    uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x48))(*(int **)(ar4 + 0x38),4,ar6,a7);
    if (0 < *piVar3) {
      uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x30))(*(int **)(ar4 + 0x38),uVar2,ar6,a7);
      uStack_18 = (**(code **)(**(int **)(ar4 + 0x38) + 0x28))(*(int **)(ar4 + 0x38),uVar2,ar6,a7);
      uVar2 = (**(code **)(**(int **)(ar4 + 0x38) + 0x38))(*(int **)(ar4 + 0x38),uVar2,ar6,a7);
      puStack_24 = &uStack_14;
      piStack_20 = *(int **)(ar4 + 0x38);
      uStack_14 = (**(code **)(*piStack_20 + 0x40))(piStack_20,0,ar6,a7);
      piStack_20 = auStack_10;
      auStack_10[0] = (**(code **)(**(int **)(ar4 + 0x38) + 0x40))(*(int **)(ar4 + 0x38),1,ar6,a7);
      (**(code **)(**(int **)(ar4 + 0x38) + 0x48))(*(int **)(ar4 + 0x38),0,&uStack_2c,&uStack_28);
      a6 = &uStack_34;
      a7_00 = &uStack_30;
      (**(code **)(**(int **)(ar4 + 0x38) + 0x48))(*(int **)(ar4 + 0x38),3,a6,a7_00);
      s_E1205_Illigal_parameter_MWRN_269b92(ar4,uVar1,a6,a7_00);
      s_E1205_Illigal_parameter_MWRN_269c06(ar4,uStack_18,a6,a7_00);
      *(undefined4 *)(ar4 + 0x60) = uVar2;
      *(undefined4 *)(ar4 + 100) = *puStack_24;
      *(int *)(ar4 + 0x68) = *piStack_20;
      *(undefined4 *)(ar4 + 0x6c) = uStack_2c;
      *(undefined4 *)(ar4 + 0x70) = uStack_28;
      *(undefined4 *)(ar4 + 0x7c) = uStack_34;
      uVar1 = 0x80;
      *(undefined4 *)(ar4 + 0x80) = uStack_30;
    }
  }
  return uVar1;
}



/* noop_26a0f8 @ 8c26a0f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_26a0f8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c26a100 @ 8c26a100 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c26a100(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  uVar1 = (uint)DAT_8c26a12e;
  *ar4 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         uVar1 | 0xf0;
}



/* FUN_8c26a118 @ 8c26a118 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c26a118(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (*ar4 & 0xf) << 4 |
         ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         (int)DAT_8c26a12e;
}



/* FUN_8c26a130 @ 8c26a130 callers=2 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26a130(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_8c26a194;
  if (ar4 == 0) {
    *(undefined4 *)PTR_DAT_8c26a190 = 0;
    *(undefined4 *)puVar1 = 0;
  }
  else {
    *(int *)PTR_DAT_8c26a190 = ar4;
    *(undefined4 *)puVar1 = ar5;
  }
  uVar2 = (*(code *)PTR_memset_8c26a19c)(DAT_8c26a198,0,(int)DAT_8c26a18c);
  return uVar2;
}



/* debug_printf @ 8c26a14e callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c26a15e) */
/* WARNING: Unknown calling convention */

undefined4
debug_printf(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            )

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vsprintf_like_8c26a1a0)(DAT_8c26a198,s0,&s4);
  if (*(code **)PTR_DAT_8c26a190 != (code *)0x0) {
    uVar1 = (**(code **)PTR_DAT_8c26a190)(*(undefined4 *)PTR_DAT_8c26a194,DAT_8c26a198);
  }
  return uVar1;
}



/* FUN_8c26a152 @ 8c26a152 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c26a152(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
            undefined4 s8,undefined4 s12)

{
  undefined4 uVar1;
  undefined4 *ar6_00;
  
  if ((ar5 & (uint)&s8) == 0) {
    ar6_00 = &s8;
  }
  else {
    ar6_00 = &s12;
  }
  uVar1 = (*(code *)PTR_vsprintf_like_8c26a1a0)(DAT_8c26a198,s4,ar6_00,ar7);
  if (*(code **)PTR_DAT_8c26a190 != (code *)0x0) {
    uVar1 = (**(code **)PTR_DAT_8c26a190)(*(undefined4 *)PTR_DAT_8c26a194,DAT_8c26a198,ar6_00,ar7);
  }
  return uVar1;
}



/* FUN_8c26a1a4 @ 8c26a1a4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26a1a4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (*(code *)PTR_memset_8c26a200)(DAT_8c26a1fc,0,0x40,ar7);
  iVar3 = 0xf;
  uVar4 = DAT_8c26a1fc + 0x40;
  uVar2 = DAT_8c26a1fc;
  do {
    *(int *)(uVar2 + 4) = iVar3;
    uVar2 = uVar2 + 8;
    iVar3 = iVar3 + -1;
  } while (uVar2 < uVar4);
  return uVar1;
}



/* FUN_8c26a1ca @ 8c26a1ca callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26a1ca(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_8c26a1fc;
  piVar2 = DAT_8c26a1fc;
  while( true ) {
    if (DAT_8c26a1fc + 0x10 <= piVar1) {
      return 0;
    }
    if (*piVar1 == 0) break;
    piVar1 = piVar1 + 2;
    piVar2 = piVar2 + 2;
  }
  *piVar2 = 1;
  return piVar2;
}



/* FUN_8c26a1f2 @ 8c26a1f2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26a1f2(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = 0;
  return in_r0;
}



/* get_field_4_26a1f8 @ 8c26a1f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_4_26a1f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}



/* FUN_8c26a204 @ 8c26a204 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26a204(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_memset_8c26a2d0)(DAT_8c26a2cc,0,(int)DAT_8c26a2ca,ar7);
  uVar1 = (*(code *)PTR_FUN_8c26a2d4)();
  return uVar1;
}



/* FUN_8c26a220 @ 8c26a220 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c26a220(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = DAT_8c26a2cc;
  for (uVar1 = DAT_8c26a2cc;
      (uVar3 = 0, uVar1 < DAT_8c26a2cc + (int)DAT_8c26a2ca &&
      (uVar3 = uVar2, *(int *)(uVar1 + 4) != 0)); uVar1 = uVar1 + 0x54) {
    uVar2 = uVar2 + 0x54;
  }
  return uVar3;
}



/* s_E1221_Illigal_parameter_NCH__26a254 @ 8c26a246 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 s_E1221_Illigal_parameter_NCH__26a254(int ar4,int ar5,int ar6,int ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 a7;
  int iVar10;
  int *piVar11;
  undefined4 *puStack_40;
  int *piStack_3c;
  undefined4 *puStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [3];
  
  puVar1 = PTR_debug_printf_8c26a2d8;
  iVar6 = ar4;
  if (((ar4 < 1) || (2 < ar4)) ||
     (puVar5 = (undefined4 *)FUN_8c26a220(ar4,ar5,ar6,ar7), puVar5 == (undefined4 *)0x0)) {
    (*(code *)puVar1)(iVar6,ar5,ar6,ar7);
  }
  else {
    *puVar5 = PTR_DAT_8c26a2e4;
    for (iVar10 = 0; puVar2 = PTR_FUN_8c26a400, iVar10 < ar4; iVar10 = iVar10 + 1) {
      puVar8 = puVar5 + iVar10 + 6;
      uVar9 = (*(code *)PTR_FUN_8c26a2e8)(iVar6,ar5,ar6,ar7);
      *puVar8 = uVar9;
      if (puVar5[iVar10 + 6] == 0) {
        (*(code *)puVar1)(iVar6,ar5,ar6,ar7);
        iVar6 = 0;
        puVar5 = puVar5 + 6;
        if (iVar10 < 1) {
          return 0;
        }
        do {
          uVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          (*(code *)puVar2)(uVar9,ar5,ar6,ar7);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar10);
        return 0;
      }
      piVar11 = aiStack_28 + iVar10;
      iVar6 = puVar5[iVar10 + 6];
      iVar7 = (*(code *)PTR_get_field_4_26a1f8_8c26a3fc)(iVar6,ar5,ar6,ar7);
      *piVar11 = iVar7;
    }
    puStack_40 = (undefined4 *)0x0;
    piVar11 = puVar5 + 0xe;
    piStack_3c = aiStack_28;
    if (0 < ar4) {
      do {
        ar7 = (int)DAT_8c26a3f8;
        ar5 = *piStack_3c;
        iVar10 = (0x10 - ar5) * -0x4040 + DAT_8c26a404;
        ar6 = iVar10;
        iVar6 = (*(code *)PTR_FUN_8c26a40c)(DAT_8c26a408,ar5,iVar10,ar7);
        if (iVar6 != 0) {
          (*(code *)puVar1)(iVar6,ar5,ar6,ar7);
        }
        *piVar11 = iVar10;
        puStack_40 = (undefined4 *)((int)puStack_40 + 1);
        piVar11 = piVar11 + 1;
        piStack_3c = piStack_3c + 1;
      } while ((int)puStack_40 < ar4);
    }
    puVar5[0x10] = (int)DAT_8c26a3f8;
    for (puStack_40 = (undefined4 *)0x0; puVar3 = PTR_FUN_8c26a41c, (int)puStack_40 < ar4;
        puStack_40 = (undefined4 *)((int)puStack_40 + 1)) {
      iVar6 = (*(code *)PTR_FUN_8c26a414)(&uStack_30,ar5,ar6,ar7);
      if (iVar6 != 0) {
        (*(code *)puVar1)(iVar6,ar5,ar6,ar7);
        piStack_3c = puVar5 + 8;
        puStack_38 = (undefined4 *)0x0;
        if (0 < (int)puStack_40) {
          do {
            iVar6 = (*(code *)puVar3)(*piStack_3c,ar5,ar6,ar7);
            if (iVar6 != 0) {
              (*(code *)puVar1)(iVar6,ar5,ar6,ar7);
            }
            puStack_38 = (undefined4 *)((int)puStack_38 + 1);
            piStack_3c = piStack_3c + 1;
          } while ((int)puStack_38 < (int)puStack_40);
        }
        iVar6 = 0;
        puVar5 = puVar5 + 6;
        if (ar4 < 1) {
          return 0;
        }
        do {
          uVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          (*(code *)puVar2)(uVar9,ar5,ar6,ar7);
          iVar6 = iVar6 + 1;
        } while (iVar6 < ar4);
        return 0;
      }
      puVar5[(int)puStack_40 + 8] = uStack_30;
    }
    for (puStack_40 = (undefined4 *)0x0; (int)puStack_40 < ar4;
        puStack_40 = (undefined4 *)((int)puStack_40 + 1)) {
      puVar8 = &uStack_30;
      iVar6 = (*(code *)PTR_FUN_8c26a654)(puVar8,ar5,ar6,ar7);
      if (iVar6 != 0) {
        (*(code *)puVar1)(puVar8,ar5,ar6,ar7);
        puStack_38 = puVar5 + 10;
        iStack_34 = 0;
        if (0 < (int)puStack_40) {
          do {
            uVar9 = *puStack_38;
            (*(code *)puVar3)(uVar9,ar5,ar6,ar7);
            if (iVar6 != 0) {
              (*(code *)puVar1)(uVar9,ar5,ar6,ar7);
            }
            iStack_34 = iStack_34 + 1;
            puStack_38 = puStack_38 + 1;
          } while (iStack_34 < (int)puStack_40);
        }
        puStack_40 = puVar5 + 8;
        puStack_38 = (undefined4 *)0x0;
        if (0 < ar4) {
          do {
            uVar9 = *puStack_40;
            (*(code *)puVar3)(uVar9,ar5,ar6,ar7);
            if (iVar6 != 0) {
              (*(code *)puVar1)(uVar9,ar5,ar6,ar7);
            }
            puStack_38 = (undefined4 *)((int)puStack_38 + 1);
            puStack_40 = puStack_40 + 1;
          } while ((int)puStack_38 < ar4);
        }
        iVar6 = 0;
        puVar5 = puVar5 + 6;
        if (ar4 < 1) {
          return 0;
        }
        do {
          uVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          (*(code *)puVar2)(uVar9,ar5,ar6,ar7);
          iVar6 = iVar6 + 1;
        } while (iVar6 < ar4);
        return 0;
      }
      puVar5[(int)puStack_40 + 10] = uStack_30;
    }
    if (ar4 == 1) {
      puVar8 = &uStack_2c;
      iVar6 = (*(code *)PTR_FUN_8c26a65c)(puVar8,ar5,ar6,ar7,1,(int)(char)aiStack_28[0]);
    }
    else {
      puVar8 = &uStack_2c;
      iVar6 = (*(code *)PTR_FUN_8c26a65c)(puVar8,ar5,ar6,ar7,ar4,(int)(char)aiStack_28[0]);
    }
    puVar4 = PTR_thunk_FUN_8c2678a4_8c26a664;
    if (iVar6 == 0) {
      puVar5[0xc] = uStack_2c;
      puVar5[3] = ar4;
      puVar5[2] = ar4;
      for (iVar6 = 0; puVar2 = PTR_FUN_8c26a66c, iVar6 < (int)puVar5[2]; iVar6 = iVar6 + 1) {
        iVar10 = iVar6;
        iVar7 = (*(code *)puVar4)(puVar5[0xc],iVar6,ar6,ar7);
        if (iVar7 != 0) {
          (*(code *)puVar1)(iVar7,iVar10,ar6,ar7);
        }
      }
      for (iVar6 = 0; iVar6 < (int)puVar5[2]; iVar6 = iVar6 + 1) {
        uVar9 = 0x7f;
        a7 = 0;
        iVar10 = iVar6;
        iVar7 = (*(code *)puVar2)(puVar5[0xc],iVar6,0x7f,0);
        if (iVar7 != 0) {
          (*(code *)puVar1)(iVar7,iVar10,uVar9,a7);
        }
      }
      puVar5[0x12] = 0xffffffff;
      puVar5[0x11] = 0;
      puVar5[1] = 1;
      return puVar5;
    }
    (*(code *)puVar1)(puVar8,ar5,ar6,ar7);
    piStack_3c = puVar5 + 8;
    iStack_34 = 0;
    if (0 < ar4) {
      do {
        uVar9 = *piStack_3c;
        (*(code *)puVar3)(uVar9,ar5,ar6,ar7);
        if (iVar6 != 0) {
          (*(code *)puVar1)(uVar9,ar5,ar6,ar7);
        }
        (*(code *)puVar2)(puVar5[(int)puStack_40 + 6],ar5,ar6,ar7);
        iStack_34 = iStack_34 + 1;
        piStack_3c = piStack_3c + 1;
      } while (iStack_34 < ar4);
    }
  }
  return 0;
}



/* s_E1230_sdMemBlkDestroy_return_26a5e8 @ 8c26a5de callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1230_sdMemBlkDestroy_return_26a5e8
          (undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int iVar1;
  int iVar2;
  int unaff_r14;
  char in_T;
  undefined4 in_PR;
  
  if (in_T != '\x01') {
    for (iVar2 = 0; iVar2 < *(int *)(unaff_r14 + 8); iVar2 = iVar2 + 1) {
      FUN_8c26a1f2(*(undefined4 *)(unaff_r14 + 0x18 + iVar2 * 4),ar5,ar6,ar7,in_PR);
      iVar1 = FUN_8c265784(*(undefined4 *)(unaff_r14 + 0x20 + iVar2 * 4),ar5,ar6,ar7);
      if (iVar1 != 0) {
        debug_printf(iVar1,ar5,ar6,ar7);
      }
    }
    for (iVar2 = 0; iVar2 < *(int *)(unaff_r14 + 8); iVar2 = iVar2 + 1) {
      iVar1 = FUN_8c265784(*(undefined4 *)(iVar2 * 4 + unaff_r14 + 0x28),ar5,ar6,ar7);
      if (iVar1 != 0) {
        debug_printf(iVar1,ar5,ar6,ar7);
      }
    }
    for (iVar2 = 0; iVar2 < *(int *)(unaff_r14 + 8); iVar2 = iVar2 + 1) {
      ar5 = iVar2;
      iVar1 = thunk_FUN_8c2678a4(*(undefined4 *)(unaff_r14 + 0x30),iVar2,ar6,ar7);
      if (iVar1 != 0) {
        debug_printf(iVar1,ar5,ar6,ar7);
      }
    }
    iVar2 = thunk_FUN_8c266ccc(*(undefined4 *)(unaff_r14 + 0x30),ar5,ar6,ar7);
    if (iVar2 != 0) {
      debug_printf(iVar2,ar5,ar6,ar7);
    }
    *(undefined4 *)(unaff_r14 + 8) = 0;
    *(undefined4 *)(unaff_r14 + 0xc) = 0;
    ain0 = memset(unaff_r14,0,0x54,ar7);
    *(undefined4 *)(unaff_r14 + 4) = 0;
  }
  return ain0;
}



/* s_E1241_sdSysFlushHostCmd_retu_26a6d8 @ 8c26a6d8 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int s_E1241_sdSysFlushHostCmd_retu_26a6d8
              (undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 in_PR;
  
  ar4_00 = FUN_8c2688b4(ar4,ar5,ar6,ar7);
  if ((ar4_00 != 0) && (ar4_00 != 0xb000003)) {
    ar4_00 = debug_printf(ar4_00,ar5,ar6,ar7,s_E1241_sdSysFlushHostCmd_return_e_8c273678,in_PR);
  }
  return ar4_00;
}



/* s_E1233_sdPstmPlay_return_erro_26a6fe @ 8c26a6fc callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1233_sdPstmPlay_return_erro_26a6fe(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar7_00;
  undefined4 s4;
  
  iVar2 = *(int *)(ar4 + 0x10);
  uVar1 = *(undefined4 *)(ar4 + 0x14);
  if (iVar2 == 0x10) {
    ar5 = 1;
  }
  else if (iVar2 == 8) {
    ar5 = 0;
  }
  else if (iVar2 == 4) {
    ar5 = 2;
  }
  ar7_00 = 0;
  *(int *)(ar4 + 0x10) = iVar2;
  s4 = uVar1;
  iVar2 = FUN_8c26784c(*(undefined4 *)(ar4 + 0x30),ar5,uVar1,0);
  if (iVar2 != 0) {
    debug_printf(iVar2,ar5,uVar1,ar7_00,s_E1233_sdPstmPlay_return_error_in_8c2736b4,s4);
  }
  uVar1 = s_E1241_sdSysFlushHostCmd_retu_26a6d8(ar4,1,uVar1,ar7_00);
  return uVar1;
}



/* s_E1234_sdPstmStop_return_erro_26a750 @ 8c26a750 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1234_sdPstmStop_return_erro_26a750(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 uVar1;
  int unaff_r14;
  undefined4 in_PR;
  
  ar4_00 = thunk_FUN_8c267f2c(*(undefined4 *)(unaff_r14 + 0x30),ar5,ar6,ar7);
  if (ar4_00 != 0) {
    debug_printf(ar4_00,ar5,ar6,ar7,s_E1234_sdPstmStop_return_error_in_8c2736e0,in_PR);
  }
  uVar1 = s_E1241_sdSysFlushHostCmd_retu_26a6d8(unaff_r14,0,ar6,ar7);
  return uVar1;
}



/* FUN_8c26a776 @ 8c26a776 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26a776(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  code *in_r3;
  
  iVar1 = (*in_r3)();
  return iVar1 << 3;
}



/* s_E1240_sdPstmSetUseCh_return__26a788 @ 8c26a786 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1240_sdPstmSetUseCh_return__26a788(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 uVar1;
  undefined4 s4;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  s4 = ar5;
  ar4_00 = thunk_FUN_8c267d88(*(undefined4 *)(ar4 + 0x30),ar5,ar6,ar7);
  uVar1 = 0;
  if (ar4_00 != 0) {
    uVar1 = debug_printf(ar4_00,ar5,ar6,ar7,s_E1240_sdPstmSetUseCh_return_erro_8c27370c,s4);
  }
  return uVar1;
}



/* s_E1236_sdPstmGetCurAdr_return_26a7b6 @ 8c26a7b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_E1236_sdPstmGetCurAdr_return_26a7b6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 *ar6_00;
  uint s4;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  s4 = 1;
  uStack_c = ar5;
  FUN_8c266f38(*(undefined4 *)(ar4 + 0x30),0,&stack0xffffffec,ar7);
  if ((s4 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    ar6_00 = &uStack_10;
    ar5_00 = uStack_c;
    iVar1 = thunk_FUN_8c266d28(*(undefined4 *)(ar4 + 0x30),uStack_c,ar6_00,ar7);
    if (iVar1 != 0) {
      debug_printf(iVar1,ar5_00,ar6_00,ar7,s_E1236_sdPstmGetCurAdr_return_err_8c273744,s4);
    }
    iVar1 = libgcc_divide_helper_010468(uStack_10,*(undefined4 *)(ar4 + 0x10));
    iVar1 = iVar1 << 3;
  }
  return iVar1;
}



/* s_E1237_sdPstmSetVol_return_er_26a870 @ 8c26a870 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_E1237_sdPstmSetVol_return_er_26a870(int ar4,int ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  int a4;
  int a5;
  int iVar2;
  int a6;
  undefined4 uVar3;
  int unaff_r12;
  
  iVar2 = -0x7f;
  if (ar4 < ar5) {
    if (-1 < ar5) {
      iVar1 = 0x7f;
      goto LAB_8c26a8aa;
    }
    iVar1 = libgcc_divide_helper_010468(ar5 * -0xff + 0x80,ar4);
    ain0 = libgcc_divide_helper_010468(iVar1 * 10,0x12);
    iVar1 = ain0;
    if (iVar2 <= ain0) goto LAB_8c26a8aa;
  }
  iVar1 = iVar2;
LAB_8c26a8aa:
  iVar2 = 0;
  while( true ) {
    if (*(int *)(unaff_r12 + 0xc) <= iVar2) {
      return ain0;
    }
    uVar3 = 0;
    a5 = iVar2;
    a6 = iVar1;
    a4 = thunk_FUN_8c267e54(*(undefined4 *)(unaff_r12 + 0x30),iVar2,iVar1,0);
    if (a4 != 0) break;
    iVar2 = iVar2 + 1;
    ain0 = 0;
  }
  uVar3 = debug_printf(a4,a5,a6,uVar3);
  return uVar3;
}



/* FUN_8c26a8e4 @ 8c26a8e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26a8e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_20 [2];
  char cStack_1e;
  
  thunk_FUN_8c267250(*(undefined4 *)(ar4 + 0x30),0,auStack_20,ar7);
  uVar1 = libgcc_divide_helper_010468(cStack_1e * -0x77e + 0x80,0xff);
  return uVar1;
}



/* s_E1238_sdPstmSetPan_return_er_26a914 @ 8c26a914 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1238_sdPstmSetPan_return_er_26a914(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  int ar4_00;
  undefined4 uVar1;
  undefined4 ar7_00;
  undefined4 s4;
  
  ar6_00 = libgcc_divide_helper_010468(ar6 * 0x7f,0xf);
  ar7_00 = 0;
  s4 = ar5;
  ar4_00 = thunk_FUN_8c267b30(*(undefined4 *)(ar4 + 0x30),ar5,ar6_00,0);
  uVar1 = 0;
  if (ar4_00 != 0) {
    uVar1 = debug_printf(ar4_00,ar5,ar6_00,ar7_00,s_E1238_sdPstmSetPan_return_error_i_8c2737ac,s4);
  }
  return uVar1;
}



/* FUN_8c26a956 @ 8c26a956 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26a956(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_20 [3];
  char cStack_1d;
  
  thunk_FUN_8c267250(*(undefined4 *)(ar4 + 0x30),ar5,auStack_20,ar7);
  uVar1 = libgcc_divide_helper_010468(cStack_1d * 0xf,0x7f);
  return uVar1;
}



/* s_E1245_sdPstmSetFxCh_return_e_26a9bc @ 8c26a9b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1245_sdPstmSetFxCh_return_e_26a9bc(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int unaff_r10;
  int a6;
  int iVar7;
  char in_T;
  
  puVar2 = PTR_FUN_8c26abd0;
  puVar1 = PTR_debug_printf_8c26abc8;
  if (in_T == '\x01') {
    if (ar6 < 0) {
      a6 = ar6 * 2 + ((int)(ar6 + (uint)(ar6 < 0)) >> 1);
    }
    else {
      a6 = 0x7f;
    }
  }
  else {
    a6 = -0x7f;
  }
  if (*(int *)(ar4 + 0x48) != unaff_r10) {
    for (iVar7 = 0; iVar7 < *(int *)(ar4 + 0xc); iVar7 = iVar7 + 1) {
      ar7 = 0x7f;
      iVar5 = iVar7;
      iVar6 = unaff_r10;
      iVar3 = (*(code *)puVar2)(*(undefined4 *)(ar4 + 0x30),iVar7,unaff_r10,0x7f);
      if (iVar3 != 0) {
        (*(code *)puVar1)(iVar3,iVar5,iVar6,ar7);
      }
    }
    *(int *)(ar4 + 0x48) = unaff_r10;
  }
  puVar2 = PTR_FUN_8c26abd8;
  uVar4 = 0x48;
  for (iVar7 = 0; iVar7 < *(int *)(ar4 + 0xc); iVar7 = iVar7 + 1) {
    iVar5 = iVar7;
    iVar6 = a6;
    iVar3 = (*(code *)puVar2)(*(undefined4 *)(ar4 + 0x30),iVar7,a6,ar7);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = (*(code *)puVar1)(iVar3,iVar5,iVar6,ar7);
    }
  }
  return uVar4;
}



/* FUN_8c26aa48 @ 8c26aa48 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c26aa48(undefined4 ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7,undefined4 ain0)

{
  *ar5 = 0;
  *ar6 = 0;
  return ain0;
}



/* s_E1239_sdPstmSetPitch_return__26aa62 @ 8c26aa5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_E1239_sdPstmSetPitch_return__26aa62(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  int a5;
  int a6;
  undefined4 a7;
  int a5_00;
  int unaff_r14;
  char in_T;
  
  if (in_T != '\0') {
    ar5 = ar4;
  }
  if (ar5 < -0x17) {
    ar5 = -0x18;
  }
  *(int *)(unaff_r14 + 0x4c) = ar5;
  iVar2 = ar5 << 8;
  if (0x62 < ar6) {
    ar6 = 99;
  }
  if (ar6 < -0x62) {
    ar6 = -99;
  }
  *(int *)(unaff_r14 + 0x50) = ar6;
  iVar1 = libgcc_divide_helper_010468(ar6 << 8,100);
  iVar2 = iVar2 + iVar1;
  for (a5_00 = 0; a5_00 < *(int *)(unaff_r14 + 0xc); a5_00 = a5_00 + 1) {
    a7 = 0;
    a5 = a5_00;
    a6 = iVar2;
    a4 = FUN_8c267d74(*(undefined4 *)(unaff_r14 + 0x30),a5_00,iVar2,0);
    iVar1 = 0;
    if (a4 != 0) {
      iVar1 = debug_printf(a4,a5,a6,a7);
    }
  }
  return iVar1;
}



/* FUN_8c26aad4 @ 8c26aad4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26aad4(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x4c);
  *ar6 = *(undefined4 *)(ar4 + 0x50);
  return 0x50;
}



/* s_E1247_sdPstmSetDrctLev_retur_26aaf2 @ 8c26aaea callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1247_sdPstmSetDrctLev_retur_26aaf2(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 in_r0;
  int a4;
  int a5;
  int a6;
  int a6_00;
  int a5_00;
  char in_T;
  
  puVar2 = PTR_FUN_8c26abe8;
  puVar1 = PTR_debug_printf_8c26abc8;
  if (in_T == '\x01') {
    if (ar5 < 0) {
      a6_00 = ar5 * 3;
    }
    else {
      a6_00 = 0x7f;
    }
  }
  else {
    a6_00 = -0x7f;
  }
  for (a5_00 = 0; a5_00 < *(int *)(ar4 + 0xc); a5_00 = a5_00 + 1) {
    a5 = a5_00;
    a6 = a6_00;
    a4 = (*(code *)puVar2)(*(undefined4 *)(ar4 + 0x30),a5_00,a6_00,ar7);
    in_r0 = 0;
    if (a4 != 0) {
      in_r0 = (*(code *)puVar1)(a4,a5,a6,ar7);
    }
  }
  return in_r0;
}



/* ret_const_0_26ab42 @ 8c26ab42 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_26ab42(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c26ab86 @ 8c26ab86 callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26ab86(undefined4 ar4,int ar5,undefined4 ar6,undefined4 *ar7)

{
  undefined4 uVar1;
  int *unaff_r14;
  char in_T;
  
  if (in_T != '\0') {
    uVar1 = FUN_8c26aa48(ar4,unaff_r14,ar7,ar7);
    return uVar1;
  }
  if (ar5 == 1) {
    uVar1 = FUN_8c26aad4(ar4,unaff_r14,ar7,ar7);
    return uVar1;
  }
  if (ar5 == 2) {
    ar5 = ret_const_0_26ab42(ar4,2,ar6,ar7);
    *unaff_r14 = ar5;
  }
  else {
    *unaff_r14 = 0;
  }
  *ar7 = 0;
  return ar5;
}



/* s_E1242_sdMemBlkSetPrm_return__26abf6 @ 8c26abf0 callers=3 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_E1242_sdMemBlkSetPrm_return__26abf6(int ar4,int ar5,int ar6,undefined4 ar7,int s0)

{
  int iVar1;
  int ar5_00;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = s0 * *(int *)(ar4 + 0x10);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 7;
  }
  iVar4 = iVar4 >> 3;
  _DAT_8c4bf028 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  uVar3 = 0;
  iVar2 = ar5 * 4;
  iVar5 = iVar4;
  iVar1 = FUN_8c265ea0(*(undefined4 *)(iVar2 + ar4 + 0x20),ar7,iVar4,0,0);
  if (iVar1 == 0) {
    iVar5 = ar6 * *(int *)(ar4 + 0x10);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 7;
    }
    ar5_00 = (iVar5 >> 3) + *(int *)(ar4 + 0x38 + iVar2);
    _DAT_8c4bf02c = sh4_tmu_1f88e6(0,ar7,iVar4,uVar3);
    iVar5 = ar5_00;
    iVar1 = FUN_8c265ff4(*(undefined4 *)(ar4 + 0x20 + iVar2),ar5_00,iVar4,uVar3);
    if (iVar1 != 0) {
      debug_printf(iVar1,ar5_00,iVar4,uVar3,s_E1243_sdMemBlkTransfer_return_er_8c2738e0,iVar5);
    }
    uVar3 = sh4_tmu_1f88e6(iVar1,ar5_00,iVar4,uVar3);
    _DAT_8c4bf030 = uVar3;
  }
  else {
    uVar3 = debug_printf(iVar1,ar7,iVar4,uVar3,s_E1242_sdMemBlkSetPrm_return_erro_8c2738b0,iVar5);
  }
  return uVar3;
}



/* s_E1242_sdMemBlkSetPrm_return__26acaa @ 8c26aca8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1242_sdMemBlkSetPrm_return__26acaa(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int s4;
  int ar5_00;
  undefined4 uVar3;
  undefined4 ar7_00;
  
  ar7_00 = 0;
  uVar3 = 0x20;
  s4 = ar5 * 4;
  iVar1 = FUN_8c265ea0(*(undefined4 *)(s4 + ar4 + 0x28),ar7,0x20,0,0);
  if (iVar1 != 0) {
    uVar3 = debug_printf(iVar1,ar7,uVar3,ar7_00,s_E1242_sdMemBlkSetPrm_return_erro_8c2738b0,s4);
    return uVar3;
  }
  iVar1 = ar6 * *(int *)(ar4 + 0x10);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  ar5_00 = *(int *)(ar4 + 0x38 + s4) + (iVar1 >> 3);
  iVar1 = FUN_8c265ff4(*(undefined4 *)(ar4 + 0x28 + s4),ar5_00,uVar3,ar7_00);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = debug_printf(iVar1,ar5_00,uVar3,ar7_00,s_E1243_sdMemBlkTransfer_return_er_8c2738e0,s4);
  }
  return uVar2;
}



/* FUN_8c26ad32 @ 8c26ad32 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26ad32(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,ar6,ar7);
  if (ar6 == 0) {
    iVar2 = libgcc_divide_helper_010468(*(undefined4 *)(ar4 + 0x40),*(undefined4 *)(ar4 + 0x10));
    uVar1 = s_E1242_sdMemBlkSetPrm_return__26acaa(ar4,ar5,iVar2 * 8,ar7);
    return uVar1;
  }
  return uVar1;
}



/* s_E1244_sdMemBlkGetStat_return_26ada4 @ 8c26ada4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1244_sdMemBlkGetStat_return_26ada4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined1 *ar5_00;
  undefined4 in_stack_ffffffec;
  
  ar5_00 = &stack0xffffffec;
  FUN_8c265e08(ar4,ar5,ar6,ar7);
  ar4_00 = FUN_8c265a2c(*(undefined4 *)(ar5 * 4 + ar4 + 0x20),&stack0xffffffec,ar6,ar7);
  if (ar4_00 != 0) {
    debug_printf(ar4_00,ar5_00,ar6,ar7,s_E1244_sdMemBlkGetStat_return_err_8c273914,in_stack_ffffffec
                );
  }
  return in_stack_ffffffec;
}



/* s_E1227_sdMoveSndMemToWrkMem_r_26ae04 @ 8c26ae04 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1227_sdMoveSndMemToWrkMem_r_26ae04(int ar4,int ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 ar6_00;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000000;
  undefined4 s4;
  
  uVar3 = 8;
  iVar2 = *(int *)(ar4 + 0x10);
  iVar1 = libgcc_divide_helper_010468(ar7 * iVar2,8);
  iVar1 = *(int *)(ar5 * 4 + ar4 + 0x38) + iVar1;
  ar6_00 = libgcc_divide_helper_010468(in_stack_00000000 * iVar2,uVar3);
  s4 = ar6;
  iVar1 = aica_ram_2668fc(iVar1,ar6,ar6_00,ar7);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = debug_printf(iVar1,ar6,ar6_00,ar7,s_E1227_sdMoveSndMemToWrkMem_retur_8c27394c,s4);
  }
  return uVar3;
}



/* FUN_8c26ae54 @ 8c26ae54 callers=0 callees=2 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

int FUN_8c26ae54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a7;
  int iVar2;
  int a6;
  int iVar3;
  int iStack_34;
  
  iVar1 = libgcc_divide_helper_010468(0x100,*(undefined4 *)(ar4 + 0x10));
  iVar1 = iVar1 * 8;
  a7 = libgcc_divide_helper_010614(ar6,iVar1);
  if (0 < a7) {
    a6 = 0;
    s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,0x8c4bee28,0);
    iStack_34 = 0;
    iVar2 = iVar1 - a7;
    do {
      iVar3 = iVar1;
      if (iStack_34 == 0x3f) {
        iVar3 = iVar2;
      }
      s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,iVar1 + -0x73b411d8,a7);
      s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,a6,iVar1 + -0x73b411d8);
      a6 = a6 + iVar3;
      iStack_34 = iStack_34 + 1;
      a7 = a7 + iVar3;
    } while (iStack_34 < 0x40);
    a7 = s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,a6,0x8c4bee28);
  }
  return a7;
}



/* FUN_8c26af42 @ 8c26af42 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26af42(undefined4 ar4,int ar5,int *ar6,undefined4 ar7,int ain0)

{
  int d;
  int iVar1;
  
  if (ar5 == 0) {
    *ar6 = 0;
    return ain0;
  }
  *ar6 = 1;
  iVar1 = 0x40;
  d = 2;
  while ((*ar6 <= iVar1 && (ain0 = libgcc_divide_helper_010614(ar5,d), ain0 == 0))) {
    d = d * 2;
    *ar6 = *ar6 << 1;
  }
  return ain0;
}



/* FUN_8c26af7a @ 8c26af7a callers=2 callees=2 */

/* WARNING: Unknown calling convention */

int FUN_8c26af7a(int ar4,undefined4 ar5,uint ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_2c = 0x100;
  iVar1 = libgcc_divide_helper_010468(0x100,*(undefined4 *)(ar4 + 0x10));
  uStack_30 = -0x73b411d8;
  uStack_2c = uStack_2c + -0x73b411d8;
  uStack_40 = 0;
  iVar2 = libgcc_divide_helper_010468(0x40,ar7);
  iVar3 = iVar2;
  uStack_38 = ar6;
  for (; uStack_40 < ar7; uStack_40 = uStack_40 + 1) {
    if ((int)uStack_38 < 0) {
      uStack_28 = ~(~uStack_38 + 1 & 0x3f) + 1;
    }
    else {
      uStack_28 = uStack_38 & 0x3f;
    }
    iVar3 = s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,uStack_30,uStack_28 * iVar1 * 8);
    uStack_48 = 0;
    if (0 < iVar2) {
      do {
        iVar5 = uStack_30;
        uStack_28 = (uStack_28 - ar6) + 0x40;
        if ((int)uStack_28 < 0) {
          uStack_28 = ~(~uStack_28 + 1 & 0x3f) + 1;
        }
        else {
          uStack_28 = uStack_28 & 0x3f;
        }
        iVar3 = uStack_28 * iVar1 * 8;
        s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,uStack_2c,iVar3);
        iVar3 = s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,iVar3,uStack_30);
        iVar4 = uStack_2c;
        uStack_30 = uStack_2c;
        uStack_2c = iVar5;
        uStack_48 = uStack_48 + 1;
      } while (uStack_48 < iVar2);
    }
    uStack_38 = uStack_38 + 1;
  }
  return iVar3;
}



/* FUN_8c26b092 @ 8c26b092 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b092(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int ar5_00;
  int iVar3;
  undefined4 in_stack_ffffffd8;
  undefined4 uStack_24;
  int *piStack_20;
  
  ar5_00 = ar5;
  piStack_20 = ar6;
  FUN_8c265ab0(&uStack_24,ar5,ar6,ar7);
  FUN_8c265f84(0,ar5_00,ar6,ar7);
  iVar1 = libgcc_divide_helper_010468(0x100,*(undefined4 *)(ar4 + 0x10));
  iVar1 = iVar1 << 3;
  piVar2 = (int *)libgcc_divide_helper_010468(ar5,iVar1);
  iVar3 = libgcc_divide_helper_010614(ar5,iVar1);
  iVar1 = libgcc_divide_helper_010614(iVar1 - iVar3,iVar1);
  for (iVar3 = 0; iVar3 < *(int *)(ar4 + 0xc); iVar3 = iVar3 + 1) {
    *(int *)(ar4 + 0x44) = iVar1;
    ar6 = piVar2;
    if (0 < iVar1) {
      ar6 = (int *)((int)piVar2 + 1);
    }
    FUN_8c26af42(ar5,ar6,&stack0xffffffd8,ar7,in_stack_ffffffd8);
    ar7 = in_stack_ffffffd8;
    ar5_00 = iVar3;
    in_stack_ffffffd8 = ar7;
    FUN_8c26af7a(ar4,iVar3,ar6,ar7);
  }
  FUN_8c265f84(uStack_24,ar5_00,ar6,ar7);
  *piStack_20 = ar5 + *(int *)(ar4 + 0x44);
  return *(undefined4 *)(ar4 + 0x44);
}



/* FUN_8c26b132 @ 8c26b132 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

int FUN_8c26b132(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *ar5_00;
  int iVar2;
  undefined1 *ar5_01;
  undefined1 *ar6_00;
  undefined1 *a5;
  undefined4 in_stack_ffffffe4;
  undefined4 uVar3;
  undefined4 auStack_18 [2];
  
  ar6_00 = &stack0xffffffe4;
  iVar1 = libgcc_divide_helper_010468(0x100,*(undefined4 *)(ar4 + 0x10));
  iVar1 = iVar1 * 8;
  ar5_00 = (undefined1 *)libgcc_divide_helper_010468(ar5,iVar1);
  if ((int)ar5_00 < 1) {
    iVar1 = 0;
  }
  else {
    iVar2 = libgcc_divide_helper_010614(ar5,iVar1);
    *(int *)(ar4 + 0x44) = iVar1 - iVar2;
    ar5_01 = ar5_00;
    FUN_8c26af42(ar5,ar5_00,&stack0xffffffe4,ar7,in_stack_ffffffe4);
    FUN_8c265ab0(auStack_18,ar5_01,ar6_00,ar7);
    FUN_8c265f84(0,ar5_01,ar6_00,ar7);
    for (a5 = (undefined1 *)0x0; (int)a5 < *(int *)(ar4 + 0xc); a5 = a5 + 1) {
      ar5_01 = a5;
      ar6_00 = ar5_00;
      uVar3 = in_stack_ffffffe4;
      FUN_8c26af7a(ar4,a5,ar5_00,in_stack_ffffffe4);
      ar7 = in_stack_ffffffe4;
      in_stack_ffffffe4 = uVar3;
    }
    FUN_8c265f84(auStack_18[0],ar5_01,ar6_00,ar7);
    iVar1 = (int)ar5_00 * iVar1;
  }
  return iVar1;
}



/* ret_const_8c2785e8_26b1ca @ 8c26b1ca callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_8c2785e8_26b1ca(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c26b1dc;
}



/* FUN_8c26b1e0 @ 8c26b1e0 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c26b1e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
}



/* FUN_8c26b1f8 @ 8c26b1f8 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c26b1f8(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (ar5 & 0xf) << 4 |
         ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         (int)DAT_8c26b2f8;
}



/* FUN_8c26b212 @ 8c26b212 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b212(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  
  puVar1 = PTR_DAT_8c26b2fc;
  if (*(int *)PTR_DAT_8c26b2fc == 0) {
    in_r0 = (*(code *)PTR_memset_8c26b304)(DAT_8c26b300,0,(int)DAT_8c26b2fa);
  }
  *(int *)puVar1 = *(int *)puVar1 + 1;
  return in_r0;
}



/* FUN_8c26b216 @ 8c26b216 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b216(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int *unaff_r14;
  
  if (*unaff_r14 == 0) {
    in_r0 = (*(code *)PTR_memset_8c26b304)(DAT_8c26b300,0,(int)DAT_8c26b2fa,ar7);
  }
  *unaff_r14 = *unaff_r14 + 1;
  return in_r0;
}



/* FUN_8c26b234 @ 8c26b234 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b234(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)PTR_DAT_8c26b2fc;
  *(int *)PTR_DAT_8c26b2fc = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    uVar1 = (*(code *)PTR_memset_8c26b304)(DAT_8c26b300,0,(int)DAT_8c26b2fa);
    return uVar1;
  }
  return in_r0;
}



/* FUN_8c26b250 @ 8c26b250 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b250(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar6_00;
  undefined4 *ar4_00;
  
  ar6_00 = 0;
  do {
    if (*(int *)(ar6_00 * 0x24 + -0x73b40fc4) == 0) break;
    ar6_00 = ar6_00 + 1;
  } while (ar6_00 < 0x20);
  if (ar6_00 == 0x20) {
    return 0;
  }
  iVar1 = ar6_00 * 0x24;
  ar4_00 = (undefined4 *)(iVar1 + -0x73b40fc8);
  *(undefined4 *)(iVar1 + -0x73b40fc4) = 1;
  *ar4_00 = &DAT_8c278660;
  *(undefined4 *)(iVar1 + -0x73b40fb4) = ar4;
  *(undefined4 *)(iVar1 + -0x73b40fb0) = ar5;
  *(undefined **)(iVar1 + -0x73b40fc0) = &DAT_8c273978;
  *(undefined **)(iVar1 + -0x73b40fac) = &DAT_8c26b20e;
  *(undefined4 **)(iVar1 + -0x73b40fa8) = ar4_00;
  FUN_8c26b2da(ar4_00,ar5,ar6_00,0x8c4bf038,ar6_00);
  return ar4_00;
}



/* FUN_8c26b254 @ 8c26b254 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b254(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar6_00;
  int unaff_r14;
  undefined4 *ar4_00;
  undefined4 in_PR;
  
  ar6_00 = 0;
  do {
    if (*(int *)(ar6_00 * 0x24 + -0x73b40fc4) == 0) break;
    ar6_00 = ar6_00 + 1;
  } while (ar6_00 < unaff_r14);
  if (ar6_00 == 0x20) {
    return 0;
  }
  iVar1 = ar6_00 * 0x24;
  ar4_00 = (undefined4 *)(iVar1 + -0x73b40fc8);
  *(undefined4 *)(iVar1 + -0x73b40fc4) = 1;
  *ar4_00 = &DAT_8c278660;
  *(undefined4 *)(iVar1 + -0x73b40fb4) = ar4;
  *(undefined4 *)(iVar1 + -0x73b40fb0) = ar5;
  *(undefined **)(iVar1 + -0x73b40fc0) = &DAT_8c273978;
  *(undefined **)(iVar1 + -0x73b40fac) = &DAT_8c26b20e;
  *(undefined4 **)(iVar1 + -0x73b40fa8) = ar4_00;
  FUN_8c26b2da(ar4_00,ar5,ar6_00,0x8c4bf038,in_PR);
  return ar4_00;
}



/* FUN_8c26b2b6 @ 8c26b2b6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b2b6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r14;
  
  if (unaff_r14 != 0) {
    in_r0 = (*(code *)PTR_memset_8c26b304)(unaff_r14,0,0x24,ar7);
    *(undefined4 *)(unaff_r14 + 4) = 0;
  }
  return in_r0;
}



/* FUN_8c26b2da @ 8c26b2da callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b2da(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = *(undefined4 *)(ar4 + 0x18);
  *(undefined4 *)(ar4 + 0x10) = 0;
  return in_r0;
}



/* FUN_8c26b2e8 @ 8c26b2e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b2e8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  
  if (in_r0 == 1) {
    return *(undefined4 *)(ar4 + 0xc);
  }
  if ((ar5 != 0) && (*(int *)(ar4 + 0x1c) != 0)) {
    (**(code **)(ar4 + 0x1c))(*(undefined4 *)(ar4 + 0x20),0xfffffffd,ar6,ar7);
  }
  return 0;
}



/* FUN_8c26b32e @ 8c26b32e callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b32e(int ar4,int ar5,int ar6,int *ar7)

{
  undefined4 uVar1;
  int a6;
  int *a7;
  
  a6 = ar6;
  a7 = ar7;
  uVar1 = FUN_8c26b1e0(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    ar7[1] = 0;
    *ar7 = 0;
  }
  else if (ar5 == 1) {
    if (*(int *)(ar4 + 0xc) < ar6) {
      ar6 = *(int *)(ar4 + 0xc);
    }
    ar7[1] = ar6;
    *ar7 = *(int *)(ar4 + 0x14) + *(int *)(ar4 + 0x10);
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + ar7[1];
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) - ar7[1];
  }
  else {
    ar7[1] = 0;
    *ar7 = 0;
    if (*(int *)(ar4 + 0x1c) != 0) {
      (**(code **)(ar4 + 0x1c))(*(undefined4 *)(ar4 + 0x20),0xfffffffd,a6,a7);
    }
  }
  uVar1 = FUN_8c26b1f8(ar4,uVar1,a6,a7);
  return uVar1;
}



/* FUN_8c26b3a0 @ 8c26b3a0 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b3a0(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int *a6;
  
  if ((0 < ar6[1]) && (*ar6 != 0)) {
    a6 = ar6;
    uVar1 = FUN_8c26b1e0(ar4,ar5,ar6,ar7);
    if ((ar5 != 0) && (ar5 != 1)) {
      ar6[1] = 0;
      *ar6 = 0;
      if (*(int *)(ar4 + 0x1c) != 0) {
        (**(code **)(ar4 + 0x1c))(*(undefined4 *)(ar4 + 0x20),0xfffffffd,a6,ar7);
      }
    }
    uVar1 = FUN_8c26b1f8(ar4,uVar1,a6,ar7);
    return uVar1;
  }
  return in_r0;
}



/* FUN_8c26b3f8 @ 8c26b3f8 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b3f8(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *a6;
  
  if ((ar6[1] < 1) || (*ar6 == 0)) {
    return in_r0;
  }
  a6 = ar6;
  uVar1 = FUN_8c26b1e0(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    iVar2 = *(int *)(ar4 + 0x1c);
  }
  else if (ar5 == 1) {
    iVar2 = *(int *)(ar4 + 0x10) - ar6[1];
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    *(int *)(ar4 + 0x10) = iVar2;
    a6 = *(int **)(ar4 + 0x18);
    piVar3 = (int *)(*(int *)(ar4 + 0xc) + ar6[1]);
    if ((int)a6 < (int)piVar3) {
      piVar3 = a6;
    }
    *(int **)(ar4 + 0xc) = piVar3;
    if (iVar2 == *ar6 - *(int *)(ar4 + 0x14)) goto LAB_8c26b478;
    iVar2 = *(int *)(ar4 + 0x1c);
  }
  else {
    ar6[1] = 0;
    *ar6 = 0;
    iVar2 = *(int *)(ar4 + 0x1c);
  }
  if (iVar2 != 0) {
    (**(code **)(ar4 + 0x1c))(*(undefined4 *)(ar4 + 0x20),0xfffffffd,a6,ar7);
  }
LAB_8c26b478:
  uVar1 = FUN_8c26b1f8(ar4,uVar1,a6,ar7);
  return uVar1;
}



/* FUN_8c26b490 @ 8c26b490 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

uint FUN_8c26b490(int ar4,int ar5,int ar6,int *ar7)

{
  undefined4 a5;
  int iVar1;
  int a6;
  int *a7;
  int iVar2;
  
  a6 = ar6;
  a7 = ar7;
  a5 = FUN_8c26b1e0(ar4,ar5,ar6,ar7);
  iVar1 = 0;
  if (ar5 != 0) {
    if (ar5 != 1) {
      iVar2 = 0;
      if (*(int *)(ar4 + 0x1c) != 0) {
        (**(code **)(ar4 + 0x1c))(*(undefined4 *)(ar4 + 0x20),0xfffffffd,a6,a7);
      }
      goto LAB_8c26b4d2;
    }
    iVar1 = *(int *)(ar4 + 0xc);
    iVar2 = ar6;
    if (ar6 <= iVar1) goto LAB_8c26b4d2;
  }
  iVar2 = iVar1;
LAB_8c26b4d2:
  *ar7 = iVar2;
  FUN_8c26b1f8(ar4,a5,a6,a7);
  return (uint)(iVar2 == ar6);
}



/* FUN_8c26b4f4 @ 8c26b4f4 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c26b4f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
}



/* FUN_8c26b50c @ 8c26b50c callers=4 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c26b50c(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (ar5 & 0xf) << 4 |
         ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         (int)DAT_8c26b61c;
}



/* FUN_8c26b526 @ 8c26b526 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b526(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  
  puVar1 = PTR_DAT_8c26b620;
  if (*(int *)PTR_DAT_8c26b620 == 0) {
    in_r0 = (*(code *)PTR_memset_8c26b628)(DAT_8c26b624,0,(int)DAT_8c26b61e);
  }
  *(int *)puVar1 = *(int *)puVar1 + 1;
  return in_r0;
}



/* FUN_8c26b52a @ 8c26b52a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b52a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int *unaff_r14;
  
  if (*unaff_r14 == 0) {
    in_r0 = (*(code *)PTR_memset_8c26b628)(DAT_8c26b624,0,(int)DAT_8c26b61e,ar7);
  }
  *unaff_r14 = *unaff_r14 + 1;
  return in_r0;
}



/* FUN_8c26b548 @ 8c26b548 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b548(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)PTR_DAT_8c26b620;
  *(int *)PTR_DAT_8c26b620 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    uVar1 = (*(code *)PTR_memset_8c26b628)(DAT_8c26b624,0,(int)DAT_8c26b61e);
    return uVar1;
  }
  return in_r0;
}



/* FUN_8c26b564 @ 8c26b564 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b564(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ain0;
  int ar7_00;
  undefined4 *ar4_00;
  
  ain0 = 0;
  do {
    if (*(int *)(ain0 * 0x30 + -0x73b40b44) == 0) break;
    ain0 = ain0 + 1;
  } while (ain0 < 0x40);
  if (ain0 == 0x40) {
    return 0;
  }
  ar7_00 = ain0 * 0x30;
  ar4_00 = (undefined4 *)(ar7_00 + -0x73b40b48);
  *(undefined4 *)(ar7_00 + -0x73b40b44) = 1;
  *ar4_00 = &DAT_8c27869c;
  *(undefined4 *)(ar7_00 + -0x73b40b2c) = ar4;
  *(undefined4 *)(ar7_00 + -0x73b40b28) = ar5;
  *(undefined4 *)(ar7_00 + -0x73b40b24) = ar6;
  *(undefined **)(ar7_00 + -0x73b40b40) = &DAT_8c273988;
  *(undefined **)(ar7_00 + -0x73b40b20) = &DAT_8c26b522;
  *(undefined4 **)(ar7_00 + -0x73b40b1c) = ar4_00;
  FUN_8c26b5ee(ar4_00,ar5,ar6,ar7_00,ain0);
  return ar4_00;
}



/* FUN_8c26b568 @ 8c26b568 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b568(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  undefined4 *ar4_00;
  undefined4 in_PR;
  
  iVar1 = 0;
  do {
    if (*(int *)(iVar1 * 0x30 + -0x73b40b44) == 0) break;
    iVar1 = iVar1 + 1;
  } while (iVar1 < ain0);
  if (iVar1 == 0x40) {
    return 0;
  }
  iVar1 = iVar1 * 0x30;
  ar4_00 = (undefined4 *)(iVar1 + -0x73b40b48);
  *(undefined4 *)(iVar1 + -0x73b40b44) = 1;
  *ar4_00 = &DAT_8c27869c;
  *(undefined4 *)(iVar1 + -0x73b40b2c) = ar4;
  *(undefined4 *)(iVar1 + -0x73b40b28) = ar5;
  *(undefined4 *)(iVar1 + -0x73b40b24) = ar6;
  *(undefined **)(iVar1 + -0x73b40b40) = &DAT_8c273988;
  *(undefined **)(iVar1 + -0x73b40b20) = &DAT_8c26b522;
  *(undefined4 **)(iVar1 + -0x73b40b1c) = ar4_00;
  FUN_8c26b5ee(ar4_00,ar5,ar6,iVar1,in_PR);
  return ar4_00;
}



/* FUN_8c26b5ca @ 8c26b5ca callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b5ca(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r14;
  
  if (unaff_r14 != 0) {
    in_r0 = (*(code *)PTR_memset_8c26b628)(unaff_r14,0,0x30,ar7);
    *(undefined4 *)(unaff_r14 + 4) = 0;
  }
  return in_r0;
}



/* FUN_8c26b5ee @ 8c26b5ee callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b5ee(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = *(undefined4 *)(ar4 + 0x20);
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  return in_r0;
}



/* FUN_8c26b600 @ 8c26b600 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b600(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  
  if (in_r0 == 1) {
    return *(undefined4 *)(ar4 + 0xc);
  }
  if (ar5 == 0) {
    return *(undefined4 *)(ar4 + 0x10);
  }
  if (*(int *)(ar4 + 0x28) != 0) {
    (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,ar6,ar7);
  }
  return 0;
}



/* FUN_8c26b64e @ 8c26b64e callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b64e(int ar4,int ar5,int ar6,int *ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int a6;
  int *a7;
  
  a6 = ar6;
  a7 = ar7;
  uVar1 = FUN_8c26b4f4(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    iVar3 = (*(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x14)) + *(int *)(ar4 + 0x24);
    if (*(int *)(ar4 + 0x10) < iVar3) {
      iVar3 = *(int *)(ar4 + 0x10);
    }
    ar7[1] = iVar3;
    if (iVar3 < ar6) {
      ar6 = iVar3;
    }
    ar7[1] = ar6;
    *ar7 = *(int *)(ar4 + 0x1c) + *(int *)(ar4 + 0x14);
    uVar2 = libgcc_divide_helper_010614(*(int *)(ar4 + 0x14) + ar7[1],*(undefined4 *)(ar4 + 0x20));
    *(undefined4 *)(ar4 + 0x14) = uVar2;
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) - ar7[1];
  }
  else if (ar5 == 1) {
    iVar3 = (*(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x18)) + *(int *)(ar4 + 0x24);
    if (*(int *)(ar4 + 0xc) < iVar3) {
      iVar3 = *(int *)(ar4 + 0xc);
    }
    ar7[1] = iVar3;
    if (iVar3 < ar6) {
      ar6 = iVar3;
    }
    ar7[1] = ar6;
    *ar7 = *(int *)(ar4 + 0x1c) + *(int *)(ar4 + 0x18);
    uVar2 = libgcc_divide_helper_010614(*(int *)(ar4 + 0x18) + ar7[1],*(undefined4 *)(ar4 + 0x20));
    *(undefined4 *)(ar4 + 0x18) = uVar2;
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) - ar7[1];
  }
  else {
    ar7[1] = 0;
    *ar7 = 0;
    if (*(int *)(ar4 + 0x28) != 0) {
      (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,a7);
    }
  }
  uVar1 = FUN_8c26b50c(ar4,uVar1,a6,a7);
  return uVar1;
}



/* FUN_8c26b720 @ 8c26b720 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b720(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int *a6;
  int iVar2;
  
  if ((0 < ar6[1]) && (*ar6 != 0)) {
    a6 = ar6;
    uVar1 = FUN_8c26b4f4(ar4,ar5,ar6,ar7);
    if (ar5 == 1) {
      *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + ar6[1];
      iVar2 = *ar6 - *(int *)(ar4 + 0x1c);
      if (iVar2 < *(int *)(ar4 + 0x24)) {
        a6 = (int *)(*(int *)(ar4 + 0x24) - iVar2);
        if (ar6[1] < (int)a6) {
          a6 = (int *)ar6[1];
        }
        (*(code *)PTR_memmove_8c26b858)
                  (*(int *)(ar4 + 0x20) + iVar2 + *(int *)(ar4 + 0x1c),*ar6,a6,ar7);
      }
      iVar2 = (*ar6 - *(int *)(ar4 + 0x1c)) + ar6[1];
      if (*(int *)(ar4 + 0x20) < iVar2) {
        a6 = (int *)(iVar2 - *(int *)(ar4 + 0x20));
        if (ar6[1] < (int)a6) {
          a6 = (int *)ar6[1];
        }
        (*(code *)PTR_memmove_8c26b858)
                  (*(int *)(ar4 + 0x1c),*(int *)(ar4 + 0x1c) + (iVar2 - (int)a6),a6,ar7);
      }
    }
    else if (ar5 == 0) {
      *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + ar6[1];
    }
    else {
      ar6[1] = 0;
      *ar6 = 0;
      if (*(int *)(ar4 + 0x28) != 0) {
        (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,ar7);
      }
    }
    uVar1 = FUN_8c26b50c(ar4,uVar1,a6,ar7);
    return uVar1;
  }
  return in_r0;
}



/* FUN_8c26b7f4 @ 8c26b7f4 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b7f4(int ar4,int ar5,int *ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *a6;
  
  if ((ar6[1] < 1) || (*ar6 == 0)) {
    return ain0;
  }
  a6 = ar6;
  uVar1 = FUN_8c26b4f4(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    iVar3 = *(int *)(ar4 + 0x20);
    iVar2 = libgcc_divide_helper_010614((*(int *)(ar4 + 0x14) + iVar3) - ar6[1],iVar3);
    iVar3 = libgcc_divide_helper_010614(*ar6 - *(int *)(ar4 + 0x1c),iVar3);
    if (iVar2 == iVar3) {
      *(int *)(ar4 + 0x14) = iVar2;
      *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + ar6[1];
      goto LAB_8c26b8b0;
    }
    iVar2 = *(int *)(ar4 + 0x28);
  }
  else if (ar5 == 1) {
    iVar3 = *(int *)(ar4 + 0x20);
    iVar2 = libgcc_divide_helper_010614((*(int *)(ar4 + 0x18) + iVar3) - ar6[1],iVar3);
    iVar3 = libgcc_divide_helper_010614(*ar6 - *(int *)(ar4 + 0x1c),iVar3);
    if (iVar2 == iVar3) {
      *(int *)(ar4 + 0x18) = iVar2;
      *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + ar6[1];
      goto LAB_8c26b8b0;
    }
    iVar2 = *(int *)(ar4 + 0x28);
  }
  else {
    ar6[1] = 0;
    *ar6 = 0;
    iVar2 = *(int *)(ar4 + 0x28);
  }
  if (iVar2 != 0) {
    (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,ar7);
  }
LAB_8c26b8b0:
  uVar1 = FUN_8c26b50c(ar4,uVar1,a6,ar7);
  return uVar1;
}



/* FUN_8c26b8c8 @ 8c26b8c8 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

uint FUN_8c26b8c8(int ar4,int ar5,int ar6,int *ar7)

{
  undefined4 a5;
  int iVar1;
  int a6;
  int *a7;
  int iVar2;
  
  a6 = ar6;
  a7 = ar7;
  a5 = FUN_8c26b4f4(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    a6 = *(int *)(ar4 + 0x10);
    iVar1 = (*(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x14)) + *(int *)(ar4 + 0x24);
    if (a6 < iVar1) {
      iVar1 = a6;
    }
  }
  else {
    if (ar5 != 1) {
      iVar2 = 0;
      if (*(int *)(ar4 + 0x28) != 0) {
        (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,a7);
      }
      goto LAB_8c26b934;
    }
    a6 = (*(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x18)) + *(int *)(ar4 + 0x24);
    iVar1 = a6;
    if (*(int *)(ar4 + 0xc) < a6) {
      iVar1 = *(int *)(ar4 + 0xc);
    }
  }
  iVar2 = ar6;
  if (iVar1 < ar6) {
    iVar2 = iVar1;
  }
LAB_8c26b934:
  *ar7 = iVar2;
  FUN_8c26b50c(ar4,a5,a6,a7);
  return (uint)(iVar2 == ar6);
}



/* get_field_1c_26b94e @ 8c26b94e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_1c_26b94e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x1c);
}



/* get_field_20_26b952 @ 8c26b952 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_20_26b952(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x20);
}



/* get_field_24_26b956 @ 8c26b956 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_24_26b956(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x24);
}



/* FUN_8c26b960 @ 8c26b960 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c26b960(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
}



/* FUN_8c26b978 @ 8c26b978 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c26b978(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (ar5 & 0xf) << 4 |
         ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         (int)DAT_8c26ba6e;
}



/* FUN_8c26b992 @ 8c26b992 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b992(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  
  puVar1 = PTR_DAT_8c26ba74;
  if (*(int *)PTR_DAT_8c26ba74 == 0) {
    in_r0 = (*(code *)PTR_memset_8c26ba7c)(DAT_8c26ba78,0,(int)DAT_8c26ba70);
  }
  *(int *)puVar1 = *(int *)puVar1 + 1;
  return in_r0;
}



/* FUN_8c26b996 @ 8c26b996 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b996(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int *unaff_r14;
  
  if (*unaff_r14 == 0) {
    in_r0 = (*(code *)PTR_memset_8c26ba7c)(DAT_8c26ba78,0,(int)DAT_8c26ba70,ar7);
  }
  *unaff_r14 = *unaff_r14 + 1;
  return in_r0;
}



/* FUN_8c26b9b4 @ 8c26b9b4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b9b4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)PTR_DAT_8c26ba74;
  *(int *)PTR_DAT_8c26ba74 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    uVar1 = (*(code *)PTR_memset_8c26ba7c)(DAT_8c26ba78,0,(int)DAT_8c26ba70);
    return uVar1;
  }
  return in_r0;
}



/* FUN_8c26b9d4 @ 8c26b9d4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b9d4(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7,int ain1)

{
  int iVar1;
  undefined4 *a4;
  
  iVar1 = 0;
  do {
    if (*(char *)(iVar1 * 0x30 + -0x73b3ff44) == '\0') break;
    iVar1 = iVar1 + 1;
  } while (iVar1 < ain1);
  if (iVar1 == 0x40) {
    return 0;
  }
  iVar1 = iVar1 * 0x30;
  a4 = (undefined4 *)(iVar1 + -0x73b3ff48);
  *(undefined1 *)(iVar1 + -0x73b3ff44) = 1;
  *(undefined1 *)(iVar1 + -0x73b3ff43) = (undefined1)ar4;
  *a4 = &DAT_8c2786d0;
  *(undefined1 *)(iVar1 + -0x73b3ff43) = (undefined1)ar4;
  *(undefined **)(iVar1 + -0x73b3ff40) = &DAT_8c2739c8;
  *(undefined4 *)(iVar1 + -0x73b3ff3c) = ar5;
  *(uint *)(iVar1 + -0x73b3ff38) = ar6 >> 4;
  *(undefined **)(iVar1 + -0x73b3ff20) = &DAT_8c26b98e;
  *(undefined4 **)(iVar1 + -0x73b3ff1c) = a4;
  FUN_8c26ba62(a4,ar5,ar6 >> 4,iVar1);
  return a4;
}



/* FUN_8c26ba3e @ 8c26ba3e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26ba3e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r14;
  
  if (unaff_r14 != 0) {
    (*(code *)PTR_memset_8c26ba7c)(unaff_r14,0,0x30,ar7);
    in_r0 = 0;
    *(undefined1 *)(unaff_r14 + 4) = 0;
  }
  return in_r0;
}



/* FUN_8c26ba62 @ 8c26ba62 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c26ba62(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(ar4 + 0xc);
  *(int *)(ar4 + 0x14) = iVar5;
  for (iVar3 = 0; iVar3 < *(int *)(ar4 + 0x10) + -1; iVar3 = iVar3 + 1) {
    piVar1 = (int *)(iVar3 * 0x10 + iVar5);
    *piVar1 = (iVar3 + 1) * 0x10 + iVar5;
    piVar1[2] = 0;
    piVar1[3] = 0;
  }
  puVar2 = (undefined4 *)(iVar3 * 0x10 + iVar5);
  puVar4 = (undefined4 *)(ar4 + 0x18);
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  } while (puVar4 < (undefined4 *)(ar4 + 0x28));
  return puVar2;
}



/* FUN_8c26bad4 @ 8c26bad4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26bad4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  char in_T;
  
  if ((in_T != '\0') && (ar5 < 4)) {
    iVar2 = 0;
    piVar1 = (int *)(ar5 * 4 + ar4 + 0x18);
    while (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0) {
      iVar2 = iVar2 + piVar1[3];
    }
    return iVar2;
  }
  if (*(int *)(ar4 + 0x28) != 0) {
    (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,ar6,ar7);
  }
  return 0;
}



/* FUN_8c26bb16 @ 8c26bb16 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26bb16(int ar4,int ar5,undefined1 *ar6,undefined4 *ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *ar6_00;
  undefined4 *ar7_00;
  undefined4 *puVar3;
  undefined4 auStack_24 [2];
  undefined1 auStack_1c [4];
  int iStack_18;
  
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
      ain0 = (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,ar6,ar7);
    }
    *ar7 = 0;
    ar7[1] = 0;
    return ain0;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  uVar1 = FUN_8c26b960(ar4,ar5,ar6,ar7);
  iVar2 = ar5 * 4;
  puVar3 = *(undefined4 **)(ar4 + 0x18 + iVar2);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_8c010794(8,auStack_1c,puVar3 + 2);
    if (iStack_18 <= (int)ar6) {
      FUN_8c010794(8,ar7,auStack_1c);
      *(undefined4 *)(iVar2 + ar4 + 0x18) = *puVar3;
      *puVar3 = *(undefined4 *)(ar4 + 0x14);
      *(undefined4 **)(ar4 + 0x14) = puVar3;
      goto LAB_8c26bbce;
    }
    if (*(char *)(ar4 + 5) == '\x01') {
      ar7_00 = auStack_24;
      ar6_00 = auStack_1c;
      FUN_8c26be30(auStack_1c,ar6,ar6_00,ar7_00);
      FUN_8c010794(8,ar7,auStack_1c);
      FUN_8c010794(8,puVar3 + 2,auStack_24);
      goto LAB_8c26bbce;
    }
  }
  *ar7 = 0;
  ar7[1] = 0;
LAB_8c26bbce:
  uVar1 = FUN_8c26b978(ar4,uVar1,ar6_00,ar7_00);
  return uVar1;
}



/* FUN_8c26bbe2 @ 8c26bbe2 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26bbe2(int ar4,int ar5,int *ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *a6;
  undefined4 ar7_00;
  
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x8c26bc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd);
      return uVar1;
    }
  }
  else if ((0 < ar6[1]) && (*ar6 != 0)) {
    a6 = ar6;
    uVar1 = FUN_8c26b960(ar4,ar5,ar6,ar7);
    ar7_00 = 0;
    piVar2 = (int *)(ar5 * 4 + ar4 + 0x18);
    piVar3 = (int *)0x0;
    while (*piVar2 != 0) {
      piVar2 = (int *)*piVar2;
      piVar3 = piVar2;
      a6 = piVar2;
    }
    if (((*(char *)(ar4 + 5) == '\x01') && (piVar3 != (int *)0x0)) &&
       (piVar3[2] + piVar3[3] == *ar6)) {
      piVar3[3] = piVar3[3] + ar6[1];
    }
    else {
      puVar4 = *(undefined4 **)(ar4 + 0x14);
      if (puVar4 == (undefined4 *)0x0) {
        if (*(int *)(ar4 + 0x28) != 0) {
          (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,0);
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x14) = *puVar4;
        *puVar4 = 0;
        FUN_8c010794(8,puVar4 + 2,ar6);
        *piVar2 = (int)puVar4;
      }
    }
    uVar1 = FUN_8c26b978(ar4,uVar1,a6,ar7_00);
    return uVar1;
  }
  return ain0;
}



/* FUN_8c26bcaa @ 8c26bcaa callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26bcaa(int ar4,int ar5,int *ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *a6;
  
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x8c26bcd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd);
      return uVar1;
    }
  }
  else if ((0 < ar6[1]) && (*ar6 != 0)) {
    a6 = ar6;
    uVar1 = FUN_8c26b960(ar4,ar5,ar6,ar7);
    iVar2 = ar5 * 4;
    iVar3 = *(int *)(iVar2 + ar4 + 0x18);
    if (((*(char *)(ar4 + 5) == '\x01') && (iVar3 != 0)) && (*ar6 + ar6[1] == *(int *)(iVar3 + 8)))
    {
      *(int *)(iVar3 + 8) = *ar6;
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + ar6[1];
    }
    else {
      puVar4 = *(undefined4 **)(ar4 + 0x14);
      if (puVar4 == (undefined4 *)0x0) {
        if (*(int *)(ar4 + 0x28) != 0) {
          (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,ar7);
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x14) = *puVar4;
        *puVar4 = 0;
        FUN_8c010794(8,puVar4 + 2,ar6);
        *puVar4 = *(undefined4 *)(ar4 + 0x18 + iVar2);
        *(undefined4 **)(ar4 + 0x18 + iVar2) = puVar4;
      }
    }
    uVar1 = FUN_8c26b978(ar4,uVar1,a6,ar7);
    return uVar1;
  }
  return ain0;
}



/* FUN_8c26bd86 @ 8c26bd86 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26bd86(int ar4,int ar5,int ar6,undefined4 *ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_10 [12];
  
  puVar2 = auStack_10;
  *ar7 = 0;
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
      (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,ar6,ar7);
    }
  }
  else {
    iVar1 = *(int *)(ar5 * 4 + ar4 + 0x18);
    if (iVar1 != 0) {
      FUN_8c010794(8,auStack_10,iVar1 + 8);
      *ar7 = *(undefined4 *)(puVar2 + 4);
      if (*(char *)(ar4 + 5) == '\x01') {
        if (ar6 <= *(int *)(puVar2 + 4)) {
          return 1;
        }
      }
      else if (*(int *)(puVar2 + 4) == ar6) {
        return 1;
      }
    }
  }
  return 0;
}



/* FUN_8c26be30 @ 8c26be30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26be30(undefined4 ar4,int ar5,int *ar6,int *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_8c010794(8,ar6,ar4);
  ar7[1] = ar6[1];
  if (ar5 < ar6[1]) {
    ar6[1] = ar5;
  }
  iVar2 = ar7[1];
  iVar3 = ar6[1];
  ar7[1] = iVar2 - iVar3;
  if (iVar2 - iVar3 == 0) {
    *ar7 = 0;
  }
  else {
    *ar7 = *ar6 + ar6[1];
  }
  return uVar1;
}


