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
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 8);
  (*(code *)PTR_FUN_8c260140)
            (uVar1,*(undefined4 *)(ar4 + 0x50),ar5 << 1,
             *(int *)(ar6 + 100) + *(int *)(ar6 + 0x70) * 2);
  uVar1 = (*(code *)PTR_FUN_8c26013c)(uVar1);
  return uVar1;
}



/* FUN_8c260062 @ 8c260062 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c260062(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int a5;
  int a6;
  int iVar4;
  int iVar5;
  
  a5 = ar4 + 0x50;
  ar5_00 = (*(code *)PTR_libgcc_divide_helper_010468_8c260144)(ar4,a5,ar6,ar7);
  a6 = *(int *)(a5 + 0x10);
  iVar5 = *(int *)(a5 + 0x20);
  iVar4 = *(int *)(a5 + 0x18);
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c260144)(ar4,a5,a6,iVar4);
  iVar2 = (*(code *)PTR_libgcc_divide_helper_010614_8c260148)(ar4,a5,a6,iVar4);
  iVar2 = a6 - iVar2;
  iVar4 = (*(code *)PTR_libgcc_divide_helper_010468_8c260144)(ar4,a5,a6,iVar4 - iVar5);
  if ((iVar1 < iVar4) && ((iVar4 * a6 - (iVar2 + -1)) + iVar5 < *(int *)(a5 + 0x18))) {
    iVar4 = iVar4 + 1;
  }
  iVar2 = (*(code *)PTR_libgcc_divide_helper_010468_8c260144)(ar4,a5,a6,iVar4);
  if (iVar2 < ar5_00) {
    ar5_00 = iVar2;
  }
  if (iVar1 < ar5_00) {
    ar5_00 = iVar1;
  }
  if (iVar4 < ar5_00) {
    ar5_00 = iVar4;
  }
  if (*(int *)(a5 + 8) == 2) {
    uVar3 = FUN_8c26002c(ar4,ar5_00,iVar2,iVar4);
    return uVar3;
  }
  uVar3 = FUN_8c260000(ar4,ar5_00,iVar2,iVar4);
  return uVar3;
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
  undefined4 uVar1;
  
  uVar1 = ar7;
  FUN_8c26011e(ar4,ar5 * 2 + ar4,ar7,ar7);
  uVar1 = FUN_8c26011e(ar6 * 2 + ar4,(ar5 + ar6) * 2 + ar4,ar7,uVar1);
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
  undefined4 uVar5;
  int iVar6;
  undefined4 ar6_00;
  undefined4 ar4_00;
  int ar5_00;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(ar4 + 0x60);
  iVar3 = *(int *)(ar4 + 0x5c);
  iVar4 = *(int *)(ar4 + 0x78);
  ar5_00 = *(int *)(ar4 + 0x40);
  iVar6 = iVar7 + iVar4 + -1;
  iVar8 = *(int *)(ar4 + 0x70);
  ar4_00 = *(undefined4 *)(ar4 + 100);
  ar6_00 = *(undefined4 *)(ar4 + 0x44);
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c260270)(iVar4,iVar6,ar6,ar7);
  iVar4 = (*(code *)PTR_libgcc_divide_helper_010614_8c260274)(iVar4,iVar6,ar6,ar7);
  uVar5 = *(undefined4 *)(ar4 + 8);
  iVar6 = (*(code *)PTR_get_field_10_264ff8_8c260278)(uVar5,iVar6,ar6,ar7);
  iVar2 = (*(code *)PTR_libgcc_divide_helper_010468_8c260270)(uVar5,iVar6,ar6,ar7);
  if (iVar1 <= iVar6) {
    iVar2 = iVar2 - ((iVar7 - iVar4) + -1);
  }
  iVar8 = iVar8 + iVar2;
  *(int *)(DAT_8c26026a + ar4) = iVar2;
  iVar1 = (int)DAT_8c26026c;
  *(int *)(iVar1 + ar4) = iVar3 * iVar6;
  if (ar5_00 <= iVar8) {
    iVar8 = iVar8 - ar5_00;
    if (*(int *)(ar4 + 0x58) == 2) {
      uVar5 = FUN_8c26014c(ar4_00,ar5_00,ar6_00,iVar8);
      return uVar5;
    }
    uVar5 = FUN_8c260180(ar4_00,ar5_00,ar6_00,iVar8);
    return uVar5;
  }
  return iVar1;
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

undefined4 FUN_8c260390(int ar4,undefined4 ar5,short *ar6,undefined1 *ar7)

{
  char cVar1;
  int *piVar2;
  undefined1 *in_stack_00000000;
  char *in_stack_00000004;
  char *in_stack_00000008;
  uint *in_stack_0000000c;
  int *in_stack_00000010;
  undefined4 *in_stack_00000014;
  undefined2 *in_stack_00000018;
  
  *ar6 = (ushort)*(byte *)(ar4 + 7) << 4;
  *in_stack_00000008 = (*(byte *)(ar4 + 9) & 3) + 1;
  *in_stack_0000000c = (uint)*(ushort *)(ar4 + 0x2a);
  cVar1 = *(char *)(ar4 + 8);
  piVar2 = (int *)(ar4 + 0xc);
  if (cVar1 == '\0') {
    *in_stack_00000000 = 0x10;
    *in_stack_00000004 = *in_stack_00000008 << 1;
    *in_stack_00000014 = 1;
    *in_stack_00000010 = (int)(*piVar2 + (uint)(*piVar2 < 0)) >> 1;
    *in_stack_00000018 = 0;
  }
  else if (cVar1 == '\x01') {
    *in_stack_00000000 = 8;
    *in_stack_00000004 = *in_stack_00000008;
    *in_stack_00000014 = 1;
    *in_stack_00000010 = *piVar2;
    *in_stack_00000018 = 1;
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    *in_stack_00000000 = 4;
    *in_stack_00000004 = *in_stack_00000008;
    *in_stack_00000014 = 2;
    *in_stack_00000010 = *piVar2 << 1;
    *in_stack_00000018 = 2;
  }
  *in_stack_00000004 = '\x02';
  *in_stack_00000014 = 1;
  *in_stack_00000010 = (int)(*piVar2 + (uint)(*piVar2 < 0)) >> 1;
  *in_stack_00000000 = 0x10;
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
  
  iVar1 = (*(code *)PTR_FUN_8c260654)(ar4,PTR_DAT_8c260650,4,ar7);
  return (uint)(iVar1 == 0);
}



/* FUN_8c260658 @ 8c260658 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c260658(int ar4,uint ar5,short *ar6,undefined1 *ar7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *extraout_r2;
  undefined4 *extraout_r3;
  byte *pbVar10;
  ushort *a4;
  short *a6;
  undefined1 *a7;
  ushort *puVar11;
  uint uVar12;
  char *in_stack_00000000;
  char *in_stack_00000004;
  char *in_stack_00000008;
  uint *in_stack_0000000c;
  undefined4 *in_stack_00000014;
  undefined2 *in_stack_00000018;
  
  puVar6 = PTR_PTR_8c260800;
  puVar5 = PTR_FUN_8c2607fc;
  uVar12 = 0;
  a6 = ar6;
  a7 = ar7;
  if (0 < (int)ar5) {
    do {
      a6 = (short *)0x4;
      iVar7 = (*(code *)puVar5)(uVar12 + ar4,*(undefined4 *)puVar6,4,a7);
      if (iVar7 == 0) break;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)ar5);
  }
  if (uVar12 != ar5) {
    if ((int)uVar12 < 0) {
      uVar8 = ~(~uVar12 + 1 & 3) + 1;
    }
    else {
      uVar8 = uVar12 & 3;
    }
    if ((uVar8 == 0) && (puVar11 = (ushort *)(uVar12 + 8 + ar4), *puVar11 < 2)) {
      uVar12 = 0;
      if (0 < (int)ar5) {
        do {
          a6 = (short *)0x4;
          iVar7 = (*(code *)puVar5)(uVar12 + ar4,*(undefined4 *)PTR_PTR_8c260804,4,a7);
          if (iVar7 == 0) break;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)ar5);
      }
      if (uVar12 != ar5) {
        pbVar10 = (byte *)(uVar12 + 4 + ar4);
        bVar2 = pbVar10[1];
        bVar1 = *pbVar10;
        bVar3 = pbVar10[2];
        bVar4 = pbVar10[3];
        a4 = puVar11 + 2;
        *ar6 = (short)uVar12 + 8;
        uVar12 = (uint)bVar2 << 8 | (uint)bVar3 << 0x10 | (uint)bVar4 << 0x18 | (uint)bVar1;
        *ar7 = 0xff;
        *in_stack_0000000c =
             (uint)*(byte *)((int)puVar11 + 5) << 8 | (uint)(byte)puVar11[3] << 0x10 |
             (uint)*(byte *)((int)puVar11 + 7) << 0x18 | (uint)(byte)*a4;
        *in_stack_00000008 = (char)puVar11[1];
        *in_stack_00000000 = (char)puVar11[7];
        *in_stack_00000004 = (char)puVar11[6];
        uVar9 = (*(code *)PTR_libgcc_divide_helper_010468_8c260808)(a4,uVar12,a6,a7);
        *extraout_r3 = uVar9;
        *in_stack_00000014 = 1;
        if (*in_stack_00000000 == '\x10') {
          *in_stack_00000018 = 0;
        }
        else if (*in_stack_00000000 == '\b') {
          *in_stack_00000018 = 1;
        }
        else if (*in_stack_00000000 == '\x04') {
          *in_stack_00000004 = *in_stack_00000008 << 1;
          *in_stack_00000014 = 4;
          uVar9 = (*(code *)PTR_libgcc_divide_helper_01051c_8c26080c)(a4,uVar12 >> 1,a6,a7);
          *extraout_r2 = uVar9;
          *in_stack_00000000 = '\x10';
          *in_stack_00000018 = 2;
        }
        if ((((*in_stack_00000000 != '\0') && (*in_stack_00000004 != '\0')) &&
            ('\0' < *in_stack_00000008)) &&
           ((*in_stack_00000008 < '\x03' && (*in_stack_0000000c != 0)))) {
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
  
  iVar1 = (*(code *)PTR_FUN_8c260c90)(ar4,PTR_DAT_8c260c8c,4,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = (*(code *)PTR_FUN_8c260c90)(ar4 + 8,PTR_DAT_8c260c94,4,ar7), iVar1 == 0)) {
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

undefined4 FUN_8c260c98(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)PTR_DAT_8c260cf0 = 0;
  return in_r0;
}



/* FUN_8c260ca0 @ 8c260ca0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c260ca0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint in_r0;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  
  puVar1 = PTR_DAT_8c260cf0;
  if (*(int *)PTR_DAT_8c260cf0 == 0) {
    in_r0 = ((uint)in_S << 1 | 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
             (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
            (int)DAT_8c260cee | 0xf0;
    *(uint *)PTR_DAT_8c260cf4 = (((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  }
  *(int *)puVar1 = *(int *)puVar1 + 1;
  return in_r0;
}



/* FUN_8c260cc8 @ 8c260cc8 callers=12 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c260cc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_r0;
  int iVar1;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  
  iVar1 = *(int *)PTR_DAT_8c260cf0;
  *(int *)PTR_DAT_8c260cf0 = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    in_r0 = (*(uint *)PTR_DAT_8c260cf4 & 0xf) << 4 |
            ((uint)in_S << 1 | 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
             (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
            (int)DAT_8c260cee;
  }
  return in_r0;
}



/* FUN_8c260cf8 @ 8c260cf8 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c260d6c) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c260cf8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  float in_fr1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr2;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 in_dr12;
  double dVar9;
  double in_xd2;
  undefined4 in_PR;
  undefined2 uVar10;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar1 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_8);
  }
  else {
    puVar1 = &uStack_8;
    uStack_8 = in_dr12;
  }
  *(undefined4 *)((int)puVar1 + -4) = in_PR;
  uVar4 = (undefined4)((ulonglong)in_dr2 >> 0x20);
  dVar6 = (double)CONCAT44(uVar4,0x3f800000);
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44(uVar4,0x40000000);
  }
  else {
    dVar6 = dVar6 + dVar6;
  }
  *(undefined4 *)((int)puVar1 + -8) = ar4;
  *(undefined4 *)((int)puVar1 + -0xc) = ar5;
  *(undefined4 *)((int)puVar1 + -0x10) = ar6;
  if (in_FPSCR_PR == '\0') {
    fVar3 = SQRT(SUB84(dVar6,0));
  }
  else {
    fVar3 = SUB84(SQRT(dVar6),0);
  }
  *(undefined4 *)((int)puVar1 + -0x14) = ar7;
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = DAT_8c260e7c;
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)*(int *)((int)puVar1 + -0xc),in_fr1);
    dVar7 = (double)CONCAT44((float)*(int *)((int)puVar1 + -8) * in_fr1,fVar3);
  }
  else {
    dVar6 = (double)*(int *)((int)puVar1 + -0xc);
    dVar7 = (double)*(int *)((int)puVar1 + -8) * dVar6;
  }
  dVar9 = in_xd2;
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(SUB84(dVar7,0),(int)in_dr12);
  }
  (*(code *)PTR_FUN_8c260e80)(ar4,ar5,ar6,ar7);
  dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),0x3f800000);
  if (in_FPSCR_PR == '\0') {
    uVar4 = 0x40000000;
  }
  else {
    uVar4 = SUB84(dVar7 + dVar7,0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) - (float)((ulonglong)dVar6 >> 0x20),
                             SUB84(dVar9,0));
    dVar6 = (double)CONCAT44(0xbf800000,uVar4);
  }
  else {
    dVar9 = dVar9 - dVar6;
    dVar6 = -(double)CONCAT44(0x3f800000,uVar4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SQRT(SUB84(dVar6,0)));
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  uVar4 = (undefined4)((ulonglong)dVar9 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(uVar4,uVar4);
    in_xd2 = (double)CONCAT44(SUB84(dVar6,0),uVar4);
  }
  fVar3 = (float)((ulonglong)dVar6 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((float)((ulonglong)in_xd2 >> 0x20) + fVar3,SUB84(in_xd2,0));
  }
  else {
    dVar7 = in_xd2 + dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(fVar3,uVar4);
  }
  fVar3 = (float)((ulonglong)dVar7 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar9,0) - fVar3;
    fVar5 = SQRT((SUB84(dVar6,0) + fVar3) * fVar2);
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar5);
    dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) - fVar5,fVar2);
  }
  else {
    dVar6 = SQRT((dVar6 + dVar7) * (dVar9 - dVar7));
    dVar9 = (dVar9 - dVar7) - dVar6;
  }
  uVar4 = (undefined4)((ulonglong)dVar9 >> 0x20);
  dVar8 = dVar9;
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar3);
    dVar8 = (double)CONCAT44(uVar4,SUB84(dVar7,0));
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) / SUB84(dVar6,0),SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 / dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),DAT_8c260e84);
  }
  fVar3 = (float)((ulonglong)dVar8 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(uVar4,fVar3);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar9,0) * SUB84(dVar6,0);
    dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),fVar2);
    uVar10 = (undefined2)(int)fVar2;
  }
  else {
    dVar9 = dVar9 * dVar6;
    uVar10 = (undefined2)(int)dVar9;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),fVar3);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar9,0) * fVar3;
  }
  else {
    fVar3 = SUB84(dVar9 * dVar8,0);
  }
  **(undefined2 **)((int)puVar1 + -0x10) = uVar10;
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c260e88,fVar3);
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c260e8c,DAT_8c260e88);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = (float)((ulonglong)dVar6 >> 0x20);
    dVar6 = (double)CONCAT44(fVar3,SUB84(dVar6,0) * fVar3);
  }
  else {
    dVar6 = dVar6 * dVar6;
  }
  if (in_FPSCR_PR == '\0') {
    uVar10 = (undefined2)(int)-SUB84(dVar6,0);
  }
  else {
    uVar10 = (undefined2)(int)(double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),-SUB84(dVar6,0));
  }
  **(undefined2 **)((int)puVar1 + -0x14) = uVar10;
  return &DAT_8c260e88;
}



/* FUN_8c260d7c @ 8c260d7c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c260e10) */
/* WARNING: Removing unreachable block (ram,0x8c260d9e) */
/* WARNING: Removing unreachable block (ram,0x8c260dc2) */
/* WARNING: Removing unreachable block (ram,0x8c260e40) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c260d7c(ushort *ar4,int ar5,short *ar6,undefined1 *ar7)

{
  uint a5;
  uint a7;
  undefined4 uVar1;
  undefined4 *extraout_r3;
  uint uVar2;
  undefined1 *in_stack_00000000;
  undefined1 *in_stack_00000004;
  undefined1 *in_stack_00000008;
  uint *in_stack_0000000c;
  uint *in_stack_00000010;
  
  a5 = DAT_8c260e8c;
  if (ar5 < 0x10) {
    return 0xffffffff;
  }
  if (((int)(uint)*ar4 >> 8 | (uint)*ar4 << 8 & DAT_8c260e8c & 0xffff) == DAT_8c260e90) {
    *ar6 = (ar4[1] >> 8 | ar4[1] << 8 & DAT_8c260e7a) + 4;
    *ar7 = (char)ar4[2];
    *in_stack_00000004 = *(undefined1 *)((int)ar4 + 5);
    *in_stack_00000000 = (char)ar4[3];
    *in_stack_00000008 = *(undefined1 *)((int)ar4 + 7);
    a7 = DAT_8c260e94;
    uVar2 = *(uint *)(ar4 + 4);
    *in_stack_0000000c =
         uVar2 >> 0x18 | (int)uVar2 >> 8 & a5 | uVar2 << 8 & DAT_8c260e94 | uVar2 << 0x18;
    uVar2 = *(uint *)(ar4 + 6);
    *in_stack_00000010 = uVar2 >> 0x18 | (int)uVar2 >> 8 & a5 | uVar2 << 8 & a7 | uVar2 << 0x18;
    uVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c260e98)(0xc,a5,uVar2,a7);
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

undefined4 FUN_8c260f02(ushort *ar4,int ar5,uint *ar6,ushort *ar7)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort *in_stack_00000000;
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  uint *in_stack_00000010;
  
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
      *in_stack_00000000 = ar4[0xd] >> 8 | ar4[0xd] << 8 & uVar1;
      uVar4 = *(uint *)(ar4 + 0xe);
      *in_stack_00000004 =
           uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      uVar4 = *(uint *)(ar4 + 0x10);
      *in_stack_00000008 =
           uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      uVar4 = *(uint *)(ar4 + 0x12);
      *in_stack_0000000c =
           uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      uVar4 = *(uint *)(ar4 + 0x14);
      *in_stack_00000010 =
           uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      return 0;
    }
  }
  return 0xfffffffe;
}



/* FUN_8c261058 @ 8c261058 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c2610a0) */
/* WARNING: Removing unreachable block (ram,0x8c261088) */
/* WARNING: Removing unreachable block (ram,0x8c261078) */
/* WARNING: Removing unreachable block (ram,0x8c261094) */
/* WARNING: Removing unreachable block (ram,0x8c2610bc) */
/* WARNING: Removing unreachable block (ram,0x8c2610da) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c261058(ushort *ar4,int ar5,undefined2 *ar6,short *ar7)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  float fVar8;
  undefined8 in_dr2;
  double dVar9;
  undefined4 in_fr5;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined4 in_fr7;
  double dVar14;
  float fVar15;
  double in_dr8;
  double dVar16;
  undefined4 uVar17;
  double in_xd2;
  double in_xd8;
  double dVar18;
  undefined2 uVar19;
  short sVar20;
  short sVar21;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  short in_stack_00000000;
  short in_stack_00000004;
  int iStack_20;
  
  uVar2 = DAT_8c26115c;
  uVar1 = DAT_8c26115a;
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(DAT_8c261160,in_fr5);
  }
  else {
    dVar10 = (double)CONCAT44(_DAT_8c261164,DAT_8c261160);
  }
  dVar13 = in_xd2;
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44((float)((int)*ar7 << 0x10),in_fr7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),(float)((int)ar7[1] << 0x10));
  }
  dVar18 = in_xd2;
  if (in_FPSCR_SZ == '\0') {
    in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),(float)((int)in_stack_00000000 << 4))
    ;
    dVar18 = in_xd8;
  }
  fVar8 = (float)((ulonglong)dVar10 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar15 = SUB84(in_dr8,0) / fVar8;
  }
  else {
    fVar15 = SUB84(in_dr8 / dVar10,0);
  }
  dVar9 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),(float)((int)in_stack_00000004 << 4));
  dVar16 = in_xd2;
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44((float)((int)in_stack_00000004 << 4),fVar15);
  }
  if (in_FPSCR_PR == '\0') {
    dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) / fVar8,SUB84(dVar16,0));
  }
  else {
    dVar16 = dVar16 / dVar10;
  }
  iVar6 = 0;
  while( true ) {
    if (ar5 <= iVar6) {
      if (in_FPSCR_PR == '\0') {
        sVar20 = (short)((uint)(int)(float)((ulonglong)dVar13 >> 0x20) >> 0x10);
        sVar21 = (short)((uint)(int)SUB84(dVar13,0) >> 0x10);
      }
      else {
        sVar20 = (short)((uint)(int)dVar13 >> 0x10);
        sVar21 = (short)((uint)(int)dVar13 >> 0x10);
      }
      *ar7 = sVar20;
      ar7[1] = sVar21;
      return ar5;
    }
    uVar4 = *ar4 >> 8 | *ar4 << 8 & uVar1;
    if ((_DAT_8c261164 & (int)(short)uVar4) != 0) break;
    iStack_20 = 0;
    ar4 = ar4 + 1;
    fVar8 = (float)((short)(uVar4 & uVar2) + 1);
    dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),fVar8);
    dVar10 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)((ulonglong)(uint)fVar8 << 0x20);
    }
    do {
      puVar3 = PTR_DAT_8c26116c;
      fVar8 = (float)((ulonglong)dVar10 >> 0x20);
      uVar17 = (undefined4)((ulonglong)dVar16 >> 0x20);
      dVar14 = dVar16;
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),uVar17);
        dVar14 = in_xd2;
      }
      if (in_FPSCR_PR == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),SUB84(dVar9,0) * SUB84(dVar13,0));
      }
      else {
        dVar9 = dVar9 * dVar13;
      }
      uVar4 = *ar4;
      ar4 = (ushort *)((int)ar4 + 1);
      dVar11 = dVar18;
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)((longlong)dVar16 << 0x20);
      }
      fVar15 = (float)((ulonglong)dVar13 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                                 (float)((ulonglong)dVar11 >> 0x20) * fVar15 + SUB84(dVar9,0));
      }
      iVar5 = (uint)(byte)uVar4 * 4;
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c261168 + iVar5),fVar15);
      }
      else {
        dVar11 = *(double *)(PTR_DAT_8c261168 + iVar5);
      }
      if (in_FPSCR_PR == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                                 fVar8 * (float)((ulonglong)dVar11 >> 0x20) + SUB84(dVar9,0));
      }
      dVar7 = dVar18;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(SUB84(dVar16,0),SUB84(dVar9,0));
      }
      if (in_FPSCR_PR == '\0') {
        uVar19 = (undefined2)((uint)(int)SUB84(dVar7,0) >> 0x10);
      }
      else {
        uVar19 = (undefined2)((uint)(int)dVar7 >> 0x10);
      }
      in_xd2 = dVar16;
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),uVar17);
        in_xd2 = dVar14;
      }
      if (in_FPSCR_PR == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),SUB84(dVar9,0) * SUB84(dVar11,0));
      }
      else {
        dVar9 = dVar9 * dVar11;
      }
      dVar14 = dVar13;
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)((ulonglong)dVar7 & 0xffffffff);
      }
      if (in_FPSCR_PR == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                                 (float)((ulonglong)dVar7 >> 0x20) * SUB84(dVar7,0) + SUB84(dVar9,0)
                                );
      }
      *ar6 = uVar19;
      if (in_FPSCR_SZ == '\0') {
        uVar12 = CONCAT44(*(undefined4 *)(puVar3 + iVar5),SUB84(dVar11,0));
      }
      else {
        uVar12 = *(undefined8 *)(puVar3 + iVar5);
      }
      if (in_FPSCR_PR == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                                 fVar8 * (float)((ulonglong)uVar12 >> 0x20) + SUB84(dVar9,0));
      }
      dVar13 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(SUB84(dVar9,0),(int)uVar12);
      }
      if (in_FPSCR_PR == '\0') {
        uVar19 = (undefined2)((uint)(int)(float)((ulonglong)dVar13 >> 0x20) >> 0x10);
      }
      else {
        uVar19 = (undefined2)((uint)(int)dVar13 >> 0x10);
      }
      dVar13 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(SUB84(dVar9,0),SUB84(dVar14,0));
      }
      ar6[1] = uVar19;
      ar6 = ar6 + 2;
      iStack_20 = iStack_20 + 2;
    } while (iStack_20 < 0x20);
    iVar6 = iVar6 + 1;
  }
  return iVar6;
}



/* FUN_8c261170 @ 8c261170 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c26127e) */
/* WARNING: Removing unreachable block (ram,0x8c2611e6) */
/* WARNING: Removing unreachable block (ram,0x8c2611ba) */
/* WARNING: Removing unreachable block (ram,0x8c26119e) */
/* WARNING: Removing unreachable block (ram,0x8c261192) */
/* WARNING: Removing unreachable block (ram,0x8c2611ae) */
/* WARNING: Removing unreachable block (ram,0x8c2611d2) */
/* WARNING: Removing unreachable block (ram,0x8c2611fc) */
/* WARNING: Removing unreachable block (ram,0x8c261226) */
/* WARNING: Removing unreachable block (ram,0x8c2612b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c261170(ushort *ar4,int ar5,undefined2 *ar6,short *ar7)

{
  undefined *puVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined4 in_fr5;
  double dVar13;
  undefined8 uVar14;
  double in_dr6;
  double dVar15;
  uint uVar16;
  float in_fr9;
  double dVar17;
  undefined4 uVar18;
  undefined4 in_fr11;
  double in_xd0;
  double dVar19;
  double in_xd2;
  double in_xd6;
  double dVar20;
  undefined2 uVar21;
  short sVar22;
  short sVar23;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined2 *in_stack_00000000;
  short *in_stack_00000004;
  short in_stack_00000008;
  short in_stack_0000000c;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  if (in_FPSCR_SZ == '\0') {
    in_fr9 = (float)((int)*ar7 << 0x10);
  }
  fVar9 = (float)((int)ar7[1] << 0x10);
  if (in_FPSCR_SZ != '\0') {
    fVar9 = (float)((ulonglong)in_xd2 >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(DAT_8c26129c,in_fr5);
    dVar8 = (double)CONCAT44((float)((int)*in_stack_00000004 << 0x10),in_fr11);
  }
  else {
    dVar11 = (double)CONCAT44(_DAT_8c2612a0,DAT_8c26129c);
    dVar8 = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),
                             (float)((int)in_stack_00000004[1] << 0x10));
  }
  iStack_30 = 0;
  iStack_28 = 1;
  iStack_2c = 0;
  dVar20 = in_xd2;
  if (in_FPSCR_SZ == '\0') {
    in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),(float)((int)in_stack_00000008 << 4))
    ;
    dVar20 = in_xd6;
  }
  dVar12 = (double)CONCAT44(fVar9,(float)((int)in_stack_0000000c << 4));
  fVar9 = (float)((ulonglong)dVar11 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)(ulonglong)(uint)(SUB84(in_dr6,0) / fVar9);
  }
  else {
    dVar15 = in_dr6 / dVar11;
  }
  dVar17 = in_xd2;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44((float)((int)in_stack_0000000c << 4),in_fr9);
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) / fVar9,SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 / dVar11;
  }
  while( true ) {
    fVar9 = (float)((ulonglong)dVar12 >> 0x20);
    if ((int)(ar5 + (uint)(ar5 < 0)) >> 1 <= iStack_30) {
      if (in_FPSCR_PR == '\0') {
        sVar22 = (short)((uint)(int)SUB84(dVar17,0) >> 0x10);
        sVar23 = (short)((uint)(int)fVar9 >> 0x10);
      }
      else {
        sVar22 = (short)((uint)(int)dVar17 >> 0x10);
        sVar23 = (short)((uint)(int)dVar12 >> 0x10);
      }
      *ar7 = sVar22;
      if (in_FPSCR_PR == '\0') {
        sVar22 = (short)((uint)(int)(float)((ulonglong)dVar8 >> 0x20) >> 0x10);
      }
      else {
        sVar22 = (short)((uint)(int)dVar8 >> 0x10);
      }
      ar7[1] = sVar23;
      if (in_FPSCR_PR == '\0') {
        sVar23 = (short)((uint)(int)SUB84(dVar8,0) >> 0x10);
      }
      else {
        sVar23 = (short)((uint)(int)dVar8 >> 0x10);
      }
      *in_stack_00000004 = sVar22;
      in_stack_00000004[1] = sVar23;
      return ar5;
    }
    uVar4 = *ar4 >> 8 | *ar4 << 8 & DAT_8c261298;
    if (((int)(short)uVar4 & _DAT_8c2612a0) != 0) break;
    iVar3 = 0;
    fVar10 = (float)((short)(uVar4 & DAT_8c26129a) + 1);
    dVar11 = (double)CONCAT44(fVar9,fVar10);
    puVar2 = ar4 + 1;
    dVar7 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(fVar10,SUB84(dVar15,0));
    }
    do {
      puVar6 = puVar2;
      puVar1 = PTR_DAT_8c2612a8;
      uVar18 = (undefined4)((ulonglong)dVar17 >> 0x20);
      dVar12 = dVar17;
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),uVar18);
        dVar12 = in_xd2;
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = (float)((ulonglong)dVar11 >> 0x20);
        dVar11 = (double)CONCAT44(fVar9,SUB84(dVar11,0) * fVar9);
      }
      else {
        dVar11 = dVar11 * dVar11;
      }
      dVar15 = dVar20;
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)((longlong)dVar7 << 0x20);
      }
      if (in_FPSCR_PR == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                  (float)((ulonglong)dVar15 >> 0x20) * SUB84(dVar17,0) +
                                  SUB84(dVar11,0));
      }
      iVar5 = (uint)(byte)*puVar6 * 4;
      uVar16 = (uint)((ulonglong)dVar7 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c2612a4 + iVar5),SUB84(dVar17,0));
        dVar15 = (double)((ulonglong)uVar16 << 0x20);
      }
      else {
        dVar13 = *(double *)(PTR_DAT_8c2612a4 + iVar5);
        dVar15 = dVar7;
      }
      if (in_FPSCR_PR == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                  (float)((ulonglong)dVar15 >> 0x20) *
                                  (float)((ulonglong)dVar13 >> 0x20) + SUB84(dVar11,0));
      }
      dVar15 = dVar20;
      dVar19 = dVar12;
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(SUB84(dVar7,0),SUB84(dVar11,0));
        dVar19 = in_xd0;
      }
      fVar9 = SUB84(dVar15,0);
      if (in_FPSCR_PR == '\0') {
        uVar21 = (undefined2)((uint)(int)fVar9 >> 0x10);
      }
      else {
        uVar21 = (undefined2)((uint)(int)dVar15 >> 0x10);
      }
      in_xd2 = dVar17;
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),uVar18);
        in_xd2 = dVar12;
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = SUB84(dVar11,0) * SUB84(dVar13,0);
      }
      else {
        fVar10 = SUB84(dVar11 * dVar13,0);
      }
      dVar11 = dVar19;
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(fVar9,fVar10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                  (float)((ulonglong)dVar15 >> 0x20) * fVar9 + SUB84(dVar11,0));
      }
      dVar12 = dVar7;
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(uVar16,fVar9);
      }
      *ar6 = uVar21;
      if (in_FPSCR_SZ == '\0') {
        uVar14 = CONCAT44(*(undefined4 *)(puVar1 + iVar5),SUB84(dVar13,0));
      }
      else {
        uVar14 = *(undefined8 *)(puVar1 + iVar5);
      }
      if (in_FPSCR_PR == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                  (float)((ulonglong)dVar12 >> 0x20) *
                                  (float)((ulonglong)uVar14 >> 0x20) + SUB84(dVar11,0));
      }
      dVar12 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(SUB84(dVar11,0),(int)uVar14);
      }
      if (in_FPSCR_PR == '\0') {
        uVar21 = (undefined2)((uint)(int)(float)((ulonglong)dVar12 >> 0x20) >> 0x10);
      }
      else {
        uVar21 = (undefined2)((uint)(int)dVar12 >> 0x10);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(uVar18,SUB84(dVar11,0));
      }
      iVar3 = iVar3 + 2;
      ar6[1] = uVar21;
      ar6 = ar6 + 2;
      puVar2 = (ushort *)((int)puVar6 + 1);
      in_xd0 = dVar19;
    } while (iVar3 < 0x20);
    uVar4 = *(ushort *)((int)puVar6 + 1);
    uVar4 = uVar4 >> 8 | uVar4 << 8 & DAT_8c261298;
    if ((_DAT_8c2612a0 & (int)(short)uVar4) != 0) {
      return iStack_28;
    }
    iVar3 = 0;
    ar4 = (ushort *)((int)puVar6 + 3);
    fVar9 = (float)((short)(uVar4 & DAT_8c261360) + 1);
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),fVar9);
    dVar15 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(fVar9,SUB84(dVar7,0));
    }
    do {
      puVar1 = PTR_DAT_8c261368;
      uVar18 = (undefined4)((ulonglong)dVar17 >> 0x20);
      dVar11 = dVar17;
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),uVar18);
        dVar11 = in_xd2;
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),SUB84(dVar12,0) * SUB84(dVar8,0))
        ;
      }
      else {
        dVar12 = dVar12 * dVar8;
      }
      uVar4 = *ar4;
      ar4 = (ushort *)((int)ar4 + 1);
      dVar7 = dVar20;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)((longlong)dVar15 << 0x20);
      }
      fVar9 = (float)((ulonglong)dVar8 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                                  (float)((ulonglong)dVar7 >> 0x20) * fVar9 + SUB84(dVar12,0));
      }
      iVar5 = (uint)(byte)uVar4 * 4;
      uVar16 = (uint)((ulonglong)dVar15 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c261364 + iVar5),fVar9);
        dVar7 = (double)((ulonglong)uVar16 << 0x20);
      }
      else {
        dVar13 = *(double *)(PTR_DAT_8c261364 + iVar5);
        dVar7 = dVar15;
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                                  (float)((ulonglong)dVar7 >> 0x20) *
                                  (float)((ulonglong)dVar13 >> 0x20) + SUB84(dVar12,0));
      }
      dVar7 = dVar20;
      in_xd0 = dVar11;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(SUB84(dVar15,0),SUB84(dVar12,0));
        in_xd0 = dVar19;
      }
      fVar9 = SUB84(dVar7,0);
      if (in_FPSCR_PR == '\0') {
        uVar21 = (undefined2)((uint)(int)fVar9 >> 0x10);
      }
      else {
        uVar21 = (undefined2)((uint)(int)dVar7 >> 0x10);
      }
      in_xd2 = dVar17;
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),uVar18);
        in_xd2 = dVar11;
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),SUB84(dVar12,0) * SUB84(dVar13,0)
                                 );
      }
      else {
        dVar12 = dVar12 * dVar13;
      }
      dVar11 = dVar8;
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)((ulonglong)dVar7 & 0xffffffff);
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                                  (float)((ulonglong)dVar7 >> 0x20) * fVar9 + SUB84(dVar12,0));
      }
      dVar8 = dVar15;
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(uVar16,fVar9);
      }
      *in_stack_00000000 = uVar21;
      if (in_FPSCR_SZ == '\0') {
        uVar14 = CONCAT44(*(undefined4 *)(puVar1 + iVar5),SUB84(dVar13,0));
      }
      else {
        uVar14 = *(undefined8 *)(puVar1 + iVar5);
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                                  (float)((ulonglong)dVar8 >> 0x20) *
                                  (float)((ulonglong)uVar14 >> 0x20) + SUB84(dVar12,0));
      }
      dVar8 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(SUB84(dVar12,0),(int)uVar14);
      }
      if (in_FPSCR_PR == '\0') {
        uVar21 = (undefined2)((uint)(int)(float)((ulonglong)dVar8 >> 0x20) >> 0x10);
      }
      else {
        uVar21 = (undefined2)((uint)(int)dVar8 >> 0x10);
      }
      dVar8 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(SUB84(dVar12,0),SUB84(dVar11,0));
      }
      iVar3 = iVar3 + 2;
      in_stack_00000000[1] = uVar21;
      in_stack_00000000 = in_stack_00000000 + 2;
      dVar19 = in_xd0;
    } while (iVar3 < 0x20);
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
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int a5;
  int a6;
  int iVar6;
  char in_FPSCR_SZ;
  
  iVar5 = DAT_8c26149c;
  iVar6 = 0;
  do {
    if (*(char *)(iVar6 * 0x30 + DAT_8c26149c) == '\0') break;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  if (iVar6 == 8) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    a6 = ar6;
    (*(code *)PTR_FUN_8c2614a4)(8,ar5,ar6,ar7);
    a5 = 0;
    puVar4 = (undefined1 *)(iVar6 * 0x30 + iVar5);
    puVar4[2] = (char)ar4;
    iVar5 = 0;
    if (0 < ar4) {
      do {
        a5 = a5 + 1;
        *(undefined4 *)(puVar4 + iVar5 + 4) = *(undefined4 *)(ar5 + iVar5);
        *(undefined4 *)(puVar4 + iVar5 + 0xc) = *(undefined4 *)(ar6 + iVar5);
        *(undefined4 *)(puVar4 + iVar5 + 0x14) = 0;
        iVar5 = iVar5 + 4;
      } while (a5 < ar4);
    }
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 0x2c) = 0;
    puVar3 = PTR_FUN_8c2614b0;
    uVar2 = DAT_8c2614a8;
    *(int *)(puVar4 + 0x1c) = ar4;
    *(undefined4 *)(puVar4 + 0x20) = uVar2;
    uVar2 = DAT_8c2614ac;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar4 + 0x24) = DAT_8c2614ac;
      *(undefined4 *)(puVar4 + 0x28) = uVar2;
    }
    else {
      uVar1 = CONCAT44(PTR_FUN_8c2614b0,DAT_8c2614ac);
      *(undefined8 *)(puVar4 + 0x24) = uVar1;
      *(undefined8 *)(puVar4 + 0x28) = uVar1;
    }
    *puVar4 = 1;
    (*(code *)puVar3)(iVar5,a5,a6,ar7);
  }
  return puVar4;
}



/* FUN_8c26145e @ 8c26145e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26145e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  if (ar4 != 0) {
    (*(code *)PTR_FUN_8c2614a4)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_memset_8c2614a0)(ar4,0,0x30,ar7);
    uVar1 = (*(code *)PTR_FUN_8c2614b0)();
    return uVar1;
  }
  return in_r0;
}



/* FUN_8c2614d6 @ 8c2614d6 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c2614f4) */
/* WARNING: Unknown calling convention */

uint FUN_8c2614d6(int ar4,undefined4 ar5,int **ar6,int **ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 a5;
  int iVar5;
  short *psVar6;
  short **a7;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  float fVar13;
  double dVar12;
  int iVar14;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int iStack_3c;
  int *piStack_30;
  int iStack_2c;
  short *psStack_28;
  uint uStack_24;
  
  uVar1 = 0x24;
  if (in_FPSCR_SZ == '\0') {
    fVar13 = *(float *)(ar4 + 0x24);
  }
  else {
    fVar13 = (float)((ulonglong)*(undefined8 *)(ar4 + 0x24) >> 0x20);
  }
  dVar12 = (double)CONCAT44(fVar13,(float)*(int *)(ar4 + 0x20));
  if (in_FPSCR_PR == '\0') {
    iVar14 = (int)((float)*(int *)(ar4 + 0x20) * fVar13);
  }
  else {
    iVar14 = (int)(dVar12 * dVar12);
  }
  iVar11 = 0;
  do {
    if (*(int *)(ar4 + 0x1c) <= iVar11) {
      return uVar1;
    }
    iVar7 = iVar11 * 4;
    piVar9 = *(int **)(ar4 + 4 + iVar7);
    a5 = 1;
    uVar1 = (**(code **)(*piVar9 + 0x24))(piVar9,1,ar6,ar7);
    uVar2 = (*(code *)PTR_libgcc_divide_helper_010468_8c261650)(uVar1 >> 1,a5,ar6,ar7);
    piVar9 = *(int **)(ar4 + 0xc + iVar7);
    uVar1 = (**(code **)(*piVar9 + 0x24))(piVar9,0,ar6,ar7);
    uVar3 = uVar1 >> 4;
    if ((int)uVar2 < (int)uVar3) {
      uVar3 = uVar2;
    }
    for (iVar10 = 0; iVar10 < (int)uVar3; iVar10 = iVar10 + 1) {
      iStack_3c = 0;
      for (iVar8 = 0; iVar8 < iVar14; iVar8 = iVar8 + uVar1) {
        piVar9 = *(int **)(ar4 + 4 + iVar7);
        a7 = &psStack_28;
        (**(code **)(*piVar9 + 0x18))(piVar9,1,(iVar14 - iVar8) * 2,a7);
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
      piStack_30[3] = iVar14;
      piVar9 = *(int **)(ar4 + 0xc + iVar7);
      uVar1 = (**(code **)(*piVar9 + 0x20))(piVar9,1,ar6,ar7);
      piVar9 = (int *)(ar4 + 0x14 + iVar7);
      *piVar9 = *piVar9 + iVar14;
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

int FUN_8c261a4c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 in_stack_00000000;
  
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
  *(undefined4 *)(puVar5 + 0xc) = in_stack_00000000;
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
  if (((-1 < ar4) && (ar4 < DAT_8c261b2c)) && (ar5 != 0)) {
    return 0;
  }
  (*(code *)PTR_FUN_8c261b48)(ar4,ar5,ar6,ar7);
  return 0xfffffffd;
}



/* FUN_8c261ae2 @ 8c261ae2 callers=2 callees=5 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c261ae2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int a4;
  int iVar3;
  undefined4 uVar4;
  undefined4 a6;
  int iVar5;
  int iVar6;
  
  puVar2 = PTR_FUN_8c261b50;
  puVar1 = PTR_FUN_8c261b4c;
  iVar5 = 0;
  iVar6 = (int)DAT_8c261b2e;
  do {
    uVar4 = ar5;
    a6 = ar6;
    a4 = s_E9040816_adxf_is_NULL_ADXF_R_26231a(ar4,ar5,ar6,ar7);
    if (0 < a4) break;
    (*(code *)puVar2)(a4,uVar4,a6,ar7);
    (*(code *)puVar1)(a4,uVar4,a6,ar7);
    FUN_8c262524(a4,uVar4,a6,ar7);
    FUN_8c261aa8(a4,uVar4,a6,ar7);
    iVar5 = iVar5 + 1;
  } while (iVar5 < iVar6);
  if (iVar5 == iVar6) {
    return 0;
  }
  iVar5 = 0;
  do {
    (*(code *)puVar2)(a4,uVar4,a6,ar7);
    (*(code *)puVar1)(a4,uVar4,a6,ar7);
    FUN_8c262524(a4,uVar4,a6,ar7);
    a4 = ar4;
    iVar3 = s_E9040832_adxf_is_NULL_ADXF_G_2626b4(ar4,uVar4,a6,ar7);
    if (iVar3 == 3) break;
    FUN_8c261aa8(a4,uVar4,a6,ar7);
    iVar5 = iVar5 + 1;
  } while (iVar5 < iVar6);
  uVar4 = s_E9040831_adxf_is_NULL_ADXF_G_262696(ar4,uVar4,a6,ar7);
  return uVar4;
}



/* s_E9040804_can_t_open_s_ADXF_L_261ba4 @ 8c261b96 callers=0 callees=4 */

/* WARNING: Unknown calling convention */

int s_E9040804_can_t_open_s_ADXF_L_261ba4(int ar4,undefined4 ar5,undefined4 *ar6,int ar7)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined2 *extraout_r2;
  undefined2 *extraout_r2_00;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint a6;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  puVar7 = ar6;
  iStack_30 = ar7;
  iVar3 = s_E9040801_ptid_is_range_outsi_261ab2(ar4,ar6,ar6,ar7);
  if (-1 < iVar3) {
    puVar8 = &uStack_3c;
    uVar5 = ar5;
    iVar3 = (*(code *)PTR_FUN_8c261c64)(ar5,puVar8,puVar7,ar7);
    if (-1 < iVar3) {
      puVar8 = &uStack_2c;
      puStack_34 = (undefined4 *)FUN_8c26201c(ar5,puVar8,puVar7,ar7);
      if (puStack_34 != (undefined4 *)0x0) {
        iVar3 = 0;
        iVar11 = -1;
        a6 = 0x18;
        puVar7 = ar6;
        (*(code *)PTR_memset_8c261c74)(ar6,0,0x18,ar7);
        uVar9 = DAT_8c261c7c;
        *(undefined4 **)(DAT_8c261c78 + ar4 * 4) = ar6;
        iVar10 = 0;
        *ar6 = 0;
        ar6[2] = uStack_3c;
        puStack_38 = ar6 + 5;
        *(undefined1 *)((int)ar6 + 0x12) = 0;
        iStack_24 = (int)ar6 + 0x16;
        iStack_40 = 0;
        uVar9 = uVar9 & 0xffffffe0;
        ar6[3] = 0;
        piVar6 = (int *)(uVar9 + 4);
        iStack_28 = uVar9 + 8;
LAB_8c261d02:
        do {
          puVar8 = (undefined4 *)0x3;
          if (2 < iVar10) {
            puVar8 = puVar7;
            if (iVar10 == 3) {
              (*(code *)PTR_FUN_8c261d94)(puVar7,iVar3,a6,ar7);
              puVar8 = puVar7;
            }
LAB_8c261d1a:
            if (iVar11 == -4) {
              (*(code *)PTR_FUN_8c261d94)(puVar8,iVar3,a6,ar7);
            }
            FUN_8c262168(puStack_34,iVar3,a6,ar7);
            return iVar11;
          }
          iVar3 = 1;
          puVar7 = puStack_34;
          a6 = uVar9;
          iVar4 = FUN_8c261ae2(puStack_34,1,uVar9,ar7);
          if (0 < iVar4) {
            a6 = (uint)DAT_8c261c60;
            if (ar6[3] == 0) {
              if (DAT_8c261c80 < *piVar6) {
                *piVar6 = DAT_8c261c80;
                puVar8 = (undefined4 *)0xfffffffc;
                iVar11 = -4;
                goto LAB_8c261d1a;
              }
              iVar10 = *piVar6;
              if (iStack_30 < iVar10) {
                uVar2 = (ushort)iStack_30;
              }
              else {
                uVar2 = (ushort)iVar10;
              }
              *(ushort *)(ar6 + 4) = uVar2;
              puVar1 = PTR_libgcc_divide_helper_010468_8c261d8c;
              ar6[3] = (uint)uVar2;
              ar6[1] = (uVar2 + 1) * 2 + 0x16 & 0xfffffffc;
              uVar5 = (*(code *)puVar1)(iVar10,iVar3,a6,ar7);
              *extraout_r2 = (short)uVar5;
            }
            else {
              puVar8 = (undefined4 *)0x1;
            }
            ar7 = (int)DAT_8c261d86;
            iVar3 = (int)puVar8 * 4 + uVar9;
            if ((int)puVar8 < ar7) {
              do {
                iStack_40 = iStack_40 + 1;
                uVar5 = (*(code *)PTR_libgcc_divide_helper_010468_8c261d8c)(puVar8,iVar3,a6,ar7);
                *extraout_r2_00 = (short)uVar5;
                if ((int)ar6[3] <= iStack_40) {
                  iVar11 = 0;
                  goto LAB_8c261d1a;
                }
                puVar8 = (undefined4 *)((int)puVar8 + 2);
                iVar3 = iVar3 + 8;
              } while ((int)puVar8 < ar7);
            }
            iVar10 = 0;
            puVar7 = puVar8;
            goto LAB_8c261d02;
          }
          iVar10 = iVar10 + 1;
        } while( true );
      }
      puStack_34 = (undefined4 *)0x0;
      uVar5 = ar5;
    }
    (*(code *)PTR_FUN_8c261c70)(uVar5,puVar8,puVar7,ar7);
    iVar3 = -1;
  }
  return iVar3;
}



/* s_E9040807_can_t_find_s_ADXF_A_261d54 @ 8c261d46 callers=0 callees=4 */

/* WARNING: Unknown calling convention */

int s_E9040807_can_t_find_s_ADXF_A_261d54(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *a5;
  int *piVar7;
  int *a6;
  int iVar8;
  int iVar9;
  int *a6_00;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  
  a6 = ar6;
  iStack_30 = ar7;
  iVar3 = s_E9040801_ptid_is_range_outsi_261ab2(ar4,ar6,ar6,ar7);
  if (-1 < iVar3) {
    a5 = &iStack_38;
    uVar4 = ar5;
    iVar3 = (*(code *)PTR_FUN_8c261d9c)(ar5,a5,a6,ar7);
    if (-1 < iVar3) {
      a5 = &iStack_28;
      iStack_34 = FUN_8c26201c(ar5,a5,a6,ar7);
      uVar2 = DAT_8c261eb0;
      if (iStack_34 != 0) {
        iVar9 = -1;
        piVar5 = (int *)(ar4 * 4 + DAT_8c261eac);
        *ar6 = *piVar5;
        *piVar5 = (int)ar6;
        iVar3 = 0;
        iVar8 = 0;
        ar6[2] = iStack_38;
        *(undefined1 *)((int)ar6 + 0x12) = 1;
        a6_00 = (int *)(uVar2 & 0xffffffe0);
        piStack_24 = ar6 + 5;
        piVar5 = a6_00 + 1;
        iStack_2c = 0;
        ar6[3] = 0;
LAB_8c261ebe:
        do {
          iVar6 = 3;
          if (2 < iVar8) {
            if (iVar8 == 3) {
              (*(code *)PTR_FUN_8c261fc4)(3,a5,a6,ar7);
            }
LAB_8c261ed6:
            if (iVar9 == -4) {
              (*(code *)PTR_FUN_8c261fc4)(iVar6,a5,a6,ar7);
            }
            *(undefined2 *)(ar6 + 4) = (undefined2)iStack_2c;
            ar6[1] = (uint)*(ushort *)(ar6 + 4) * 8 + *(int *)(*ar6 + 4) + 0x14;
            FUN_8c262168(iStack_34,a5,a6,ar7);
            return iVar9;
          }
          a5 = (int *)0x1;
          a6 = a6_00;
          iVar6 = FUN_8c261ae2(iStack_34,1,a6_00,ar7);
          if (0 < iVar6) {
            iVar6 = 0;
            if (ar6[3] == 0) {
              if (DAT_8c261eb4 < *piVar5) {
                *piVar5 = DAT_8c261eb4;
                iVar6 = -4;
                iVar9 = -4;
                goto LAB_8c261ed6;
              }
              iVar8 = *piVar5;
              if (iStack_30 < iVar8) {
                iVar8 = iStack_30;
              }
              ar6[3] = iVar8;
              iVar6 = 2;
            }
            piVar7 = (int *)(int)DAT_8c261e9e;
            a5 = piVar7;
            pcVar1 = (code *)PTR_libgcc_divide_helper_010468_8c261eb8;
            iVar8 = iStack_2c;
            while (PTR_libgcc_divide_helper_010468_8c261eb8 = pcVar1, iStack_2c = iVar8,
                  iVar6 < (int)piVar7) {
              if (a6_00[iVar6] == 0) {
                iVar6 = iVar6 + 2;
              }
              else {
                ar7 = (int)DAT_8c261ea0;
                iStack_2c = iVar8 + 1;
                a5 = piStack_24 + iVar8 * 2;
                *(short *)a5 = (short)iVar3;
                a6 = (int *)(ar7 + 1);
                iVar6 = iVar6 + 1;
                iVar8 = (*pcVar1)(iVar6,a5,a6,ar7);
                a5[1] = iVar8;
                iVar6 = iVar6 + 1;
                uVar4 = (*(code *)PTR_libgcc_divide_helper_010468_8c261eb8)(iVar6,a5,a6,ar7);
                *(short *)((int)a5 + 2) = (short)uVar4;
              }
              iVar3 = iVar3 + 1;
              pcVar1 = (code *)PTR_libgcc_divide_helper_010468_8c261eb8;
              iVar8 = iStack_2c;
              if (ar6[3] <= iVar3) {
                iVar9 = 0;
                goto LAB_8c261ed6;
              }
            }
            iVar8 = 0;
            goto LAB_8c261ebe;
          }
          iVar8 = iVar8 + 1;
        } while( true );
      }
      iStack_34 = 0;
      uVar4 = ar5;
    }
    (*(code *)PTR_FUN_8c261ea8)(uVar4,a5,a6,ar7);
    iVar3 = -1;
  }
  return iVar3;
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
  undefined4 *a5;
  undefined4 *a5_00;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 auStack_18 [2];
  
  a5_00 = &uStack_20;
  a5 = auStack_18;
  a4 = ar5;
  iVar2 = (*(code *)PTR_FUN_8c261fd4)(ar5,a5,ar6,ar7);
  puVar1 = PTR_FUN_8c261fc4;
  if (-1 < iVar2) {
    a5 = &uStack_1c;
    a4 = ar5;
    iVar2 = (*(code *)PTR_FUN_8c261fdc)(ar5,a5,ar6,ar7);
    if (-1 < iVar2) {
      iVar2 = (*(code *)PTR_FUN_8c2621b8)(ar5,&uStack_20,ar6,ar7);
      if (iVar2 < 0) {
        (*(code *)puVar1)(ar5,a5_00,ar6,ar7);
        return iVar2;
      }
      *(undefined4 *)(ar4 + 0xc) = auStack_18[0];
      *(undefined4 *)(ar4 + 0x10) = uStack_1c;
      *(undefined4 *)(ar4 + 0x14) = uStack_20;
      return 0;
    }
  }
  (*(code *)puVar1)(a4,a5,ar6,ar7);
  return iVar2;
}



/* FUN_8c26201c @ 8c26201c callers=2 callees=4 */

/* WARNING: Unknown calling convention */

int FUN_8c26201c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int a4_00;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  int iVar1;
  
  a5 = 0;
  a4_00 = 1;
  a6 = ar4;
  a7 = ar5;
  FUN_8c261a4c(1,0,ar4,ar5);
  (*(code *)PTR_FUN_8c2621c0)(a4_00,a5,a6,a7);
  a4 = FUN_8c261f48(a4_00,a5,a6,a7);
  iVar1 = a4;
  if ((a4 != 0) &&
     (a5 = ar4, a4_00 = s_E9040901_can_t_find_s_ADXF_O_261f82(a4,ar4,a6,a7), a4_00 < 0)) {
    FUN_8c262168(a4,a5,a6,a7);
    iVar1 = 0;
    a4_00 = a4;
  }
  (*(code *)PTR_FUN_8c2621c4)(a4_00,a5,a6,a7);
  FUN_8c261a4c(1,1,ar4,ar5);
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
  int a4_00;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int iVar1;
  
  a5 = 0;
  a4_00 = 2;
  a6 = unaff_r12;
  a7 = unaff_r13;
  FUN_8c261a4c(2,0,unaff_r12,unaff_r13);
  (*(code *)PTR_FUN_8c2621c0)(a4_00,a5,a6,a7);
  a4 = FUN_8c261f48(a4_00,a5,a6,a7);
  iVar1 = a4;
  if ((a4 != 0) &&
     (a5 = unaff_r12, a6 = unaff_r13, a4_00 = FUN_8c262078(a4,unaff_r12,unaff_r13,a7), a4_00 < 0)) {
    FUN_8c262168(a4,a5,a6,a7);
    iVar1 = 0;
    a4_00 = a4;
  }
  (*(code *)PTR_FUN_8c2621c4)(a4_00,a5,a6,a7);
  FUN_8c261a4c(2,1,unaff_r12,unaff_r13);
  return iVar1;
}



/* FUN_8c26211c @ 8c26211c callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26211c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  
  if (*(int *)(ar4 + 4) != 0) {
    in_r0 = (*(code *)PTR_FUN_8c2621c8)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 4) = 0;
  }
  if ((*(int *)(ar4 + 8) != 0) && (in_r0 = (int)*(char *)(ar4 + 2), in_r0 == 0)) {
    if (*DAT_8c2621cc == 1) {
      ar5 = *(undefined4 *)(ar4 + 0x2c);
      (*(code *)PTR_FUN_8c2621d0)(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
    }
    in_r0 = (**(code **)(**(int **)(ar4 + 8) + 0xc))(*(int **)(ar4 + 8),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 8) = 0;
  }
  return in_r0;
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
  uVar1 = FUN_8c261a4c(3,0,ar4,0xffffffff);
  if (ar4 != 0) {
    (*(code *)PTR_FUN_8c2621c0)();
    if (*(char *)(ar4 + 1) == '\x02') {
      s_E9040822_adxf_is_NULL_ADXF_S_262408(ar4,ar5_00,ar6_00,ar7_00);
    }
    (*(code *)PTR_memset_8c2621d4)(ar4,0,0x30);
    (*(code *)PTR_FUN_8c2621c4)();
    uVar1 = FUN_8c261a4c(3,1,ar4,0xffffffff);
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
  undefined4 a5;
  
  a5 = 0;
  uVar2 = 3;
  iVar3 = ar4;
  uVar1 = FUN_8c261a4c(3,0,ar4,in_r3);
  if (ar4 != 0) {
    (*(code *)PTR_FUN_8c2621c0)(uVar2,a5,iVar3,in_r3);
    if (*(char *)(ar4 + 1) == '\x02') {
      s_E9040822_adxf_is_NULL_ADXF_S_262408(ar4,a5,iVar3,in_r3);
    }
    uVar1 = 0;
    uVar2 = 0x30;
    iVar3 = ar4;
    (*(code *)PTR_memset_8c2621d4)(ar4,0,0x30,in_r3);
    (*(code *)PTR_FUN_8c2621c4)(iVar3,uVar1,uVar2,in_r3);
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
  undefined *puVar1;
  int iVar2;
  undefined4 a4;
  undefined4 a5;
  undefined4 uVar3;
  
  if ((ar4 == 0) || (ar5 < 0)) {
    (*(code *)PTR_FUN_8c2622c0)(ar4,ar5,ar6,ar7);
  }
  else {
    if (ar6 != 0) {
      if (*(char *)(ar4 + 1) == '\x02') {
        return 0;
      }
      if (*(int *)(ar4 + 4) != 0) {
        (*(code *)PTR_FUN_8c2622c0)(ar4,ar5,ar6,ar7);
        return 0xffffffff;
      }
      (*(code *)PTR_FUN_8c2622d4)(ar4,ar5,ar6,ar7);
      *(int *)(ar4 + 0x1c) = *(int *)(ar4 + 0xc) + *(int *)(ar4 + 0x18);
      iVar2 = *(int *)(ar4 + 0x10) - *(int *)(ar4 + 0x18);
      if (ar5 < iVar2) {
        iVar2 = ar5;
      }
      *(int *)(ar4 + 0x20) = iVar2;
      puVar1 = PTR_s_E8101212_can_t_open_fad_d_ns_26338a_8c2622d8;
      *(undefined4 *)(ar4 + 0x24) = 0;
      a5 = *(undefined4 *)(ar4 + 0x20);
      iVar2 = (*(code *)puVar1)(*(undefined4 *)(ar4 + 0x1c),a5,ar6,ar7);
      puVar1 = PTR_FUN_8c2622dc;
      if (iVar2 == 0) {
        uVar3 = 0xffffffff;
        a4 = 0;
      }
      else {
        *(int *)(ar4 + 4) = iVar2;
        *(undefined1 *)(ar4 + 1) = 2;
        a4 = *(undefined4 *)(ar4 + 4);
        (*(code *)puVar1)(a4,a5,ar6,ar7);
        uVar3 = *(undefined4 *)(ar4 + 0x20);
      }
      (*(code *)PTR_FUN_8c2622e0)(a4,a5,ar6,ar7);
      return uVar3;
    }
    (*(code *)PTR_FUN_8c2622c0)(ar4,ar5,0,ar7);
  }
  return 0xfffffffd;
}



/* FUN_8c2622e4 @ 8c2622e4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2622e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a4;
  
  (*(code *)PTR_FUN_8c2624e4)(ar4,ar5,ar6,ar7);
  a4 = ar4;
  uVar1 = s_E9040811_adxf_is_NULL_adxf_r_26220e(ar4,ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 2) = 1;
  (*(code *)PTR_FUN_8c2624e8)(a4,ar5,ar6,ar7);
  return uVar1;
}



/* s_E9040816_adxf_is_NULL_ADXF_R_26231a @ 8c262312 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 s_E9040816_adxf_is_NULL_ADXF_R_26231a(int *ar4,int ar5,uint ar6,undefined4 ar7)

{
  undefined *puVar1;
  int *a6;
  undefined4 uVar2;
  uint a4;
  int *piVar3;
  undefined4 a5;
  int iVar4;
  int iVar5;
  int *a6_00;
  int a7;
  
  a5 = 0;
  uVar2 = 4;
  piVar3 = ar4;
  a7 = ar5;
  FUN_8c261a4c(4,0,ar4,ar5);
  if ((ar4 == (int *)0x0) || (ar5 < 0)) {
    (*(code *)PTR_FUN_8c2624ec)(uVar2,a5,piVar3,a7);
  }
  else if (ar6 == 0) {
    (*(code *)PTR_FUN_8c2624ec)(uVar2,a5,piVar3,a7);
  }
  else {
    if ((ar6 & 0x1f) == 0) {
      if (*(char *)((int)ar4 + 1) == '\x02') {
        return 0;
      }
      if (ar4[2] != 0) {
        (*(code *)PTR_FUN_8c2624ec)(ar6,a5,piVar3,a7);
        return 0xffffffff;
      }
      iVar4 = ar5 << 0xb;
      uVar2 = 0;
      a4 = ar6;
      iVar5 = iVar4;
      a6 = (int *)(*(code *)PTR_FUN_8c262504)(ar6,iVar4,0,a7);
      piVar3 = DAT_8c262508;
      if (a6 == (int *)0x0) {
        return 0xfffffffe;
      }
      ar4[10] = ar6;
      ar4[0xb] = iVar4;
      if (*piVar3 == 1) {
        iVar5 = ar4[0xb];
        a4 = ar4[10];
        (*(code *)PTR_FUN_8c26250c)(a4,iVar5,uVar2,a7);
      }
      (*(code *)PTR_FUN_8c2624e4)(a4,iVar5,uVar2,a7);
      piVar3 = ar4;
      iVar5 = ar5;
      a6_00 = a6;
      iVar4 = s_E9040811_adxf_is_NULL_adxf_r_26220e(ar4,ar5,a6,a7);
      if (iVar4 < 1) {
        (**(code **)(*a6 + 0xc))(a6,iVar5,a6_00,a7);
        piVar3 = a6;
      }
      else {
        ar4[2] = (int)a6;
      }
      puVar1 = PTR_FUN_8c2624e8;
      *(undefined1 *)((int)ar4 + 2) = 0;
      (*(code *)puVar1)(piVar3,iVar5,a6_00,a7);
      FUN_8c261a4c(4,1,ar4,ar5);
      return iVar4;
    }
    (*(code *)PTR_FUN_8c2624ec)(ar6,a5,piVar3,a7);
  }
  return 0xfffffffd;
}



/* s_E9040822_adxf_is_NULL_ADXF_S_262408 @ 8c262406 callers=2 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_E9040822_adxf_is_NULL_ADXF_S_262408(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 a4;
  int a4_00;
  undefined4 a5;
  undefined4 *a5_00;
  int a6;
  undefined4 a7;
  undefined4 auStack_c [2];
  
  a5_00 = auStack_c;
  a5 = 0;
  a7 = 0xffffffff;
  a4 = 5;
  a6 = ar4;
  FUN_8c261a4c(5,0,ar4,0xffffffff);
  if (ar4 == 0) {
    (*(code *)PTR_FUN_8c2624ec)(a4,a5,a6,a7);
    return 0xfffffffd;
  }
  if (*(char *)(ar4 + 1) != '\x01') {
    if (*(char *)(ar4 + 1) == '\x03') {
      *(undefined1 *)(ar4 + 1) = 1;
    }
    else {
      if (*(int *)(ar4 + 4) == 0) {
        (*(code *)PTR_FUN_8c2624ec)(a4,a5,a6,a7);
        return 0xffffffff;
      }
      (*(code *)PTR_FUN_8c2624e4)(a4,a5,a6,a7);
      (*(code *)PTR_FUN_8c262518)(*(undefined4 *)(ar4 + 4),a5,a6,a7);
      (*(code *)PTR_FUN_8c26251c)(*(undefined4 *)(ar4 + 4),auStack_c,a6,a7);
      *(undefined4 *)(ar4 + 0x24) = auStack_c[0];
      a4_00 = ar4;
      FUN_8c26211c(ar4,a5_00,a6,a7);
      puVar1 = PTR_FUN_8c2624e8;
      *(undefined1 *)(ar4 + 1) = 1;
      (*(code *)puVar1)(a4_00,a5_00,a6,a7);
      FUN_8c261a4c(5,1,ar4,0xffffffff);
    }
  }
  return *(undefined4 *)(ar4 + 0x18);
}



/* FUN_8c2624a0 @ 8c2624a0 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c2624a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *a5;
  undefined4 auStack_c [2];
  
  a5 = auStack_c;
  iVar2 = (int)*(char *)(ar4 + 1);
  if (iVar2 == 2) {
    uVar3 = (*(code *)PTR_FUN_8c262520)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
    puVar1 = PTR_FUN_8c26251c;
    *(char *)(ar4 + 1) = (char)uVar3;
    (*(code *)puVar1)(*(undefined4 *)(ar4 + 4),auStack_c,ar6,ar7);
    *(undefined4 *)(ar4 + 0x24) = auStack_c[0];
    iVar2 = (int)*(char *)(ar4 + 1);
    if ((iVar2 == 3) || (iVar2 == 4)) {
      *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + *(int *)(ar4 + 0x24);
      iVar2 = FUN_8c26211c(ar4,a5,ar6,ar7);
    }
  }
  return iVar2;
}



/* FUN_8c262524 @ 8c262524 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262524(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char *pcVar2;
  char *a4;
  
  (*(code *)PTR_FUN_8c26260c)(ar4,ar5,ar6,ar7);
  pcVar2 = DAT_8c262610 + DAT_8c26260a;
  a4 = DAT_8c262610;
  do {
    if (*a4 == '\x01') {
      FUN_8c2624a0(a4,ar5,ar6,ar7);
    }
    a4 = a4 + 0x30;
  } while (a4 < pcVar2);
  uVar1 = (*(code *)PTR_FUN_8c262614)();
  return uVar1;
}



/* FUN_8c262554 @ 8c262554 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262554(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar6_00;
  int ar7_00;
  
  uVar1 = 0;
  ar6_00 = ar4;
  ar7_00 = ar5;
  FUN_8c261a4c(6,0,ar4,ar5);
  if (ar4 == 0) {
    (*(code *)PTR_FUN_8c26261c)(PTR_s_E9040825__adxf__is_NULL__ADXF_Se_8c262618);
LAB_8c2625b4:
    uVar1 = 0xfffffffd;
  }
  else {
    if (*(char *)(ar4 + 1) == '\x02') {
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
        (*(code *)PTR_FUN_8c26261c)(PTR_s_E9040826__type__is_illigal__ADXF_8c262620);
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
    FUN_8c261a4c(6,1,ar4,ar5);
    uVar1 = *(undefined4 *)(ar4 + 0x18);
  }
  return uVar1;
}



/* s_E9040825_adxf_is_NULL_ADXF_S_262560 @ 8c262560 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_E9040825_adxf_is_NULL_ADXF_S_262560(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  undefined4 uVar1;
  int a6;
  int a7;
  int unaff_r12;
  int unaff_r13;
  int unaff_r14;
  
  uVar1 = 0;
  a4 = 6;
  a6 = unaff_r14;
  a7 = unaff_r12;
  FUN_8c261a4c(6,0,unaff_r14,unaff_r12);
  if (unaff_r14 == 0) {
    (*(code *)PTR_FUN_8c26261c)(a4,uVar1,a6,a7);
LAB_8c2625b4:
    uVar1 = 0xfffffffd;
  }
  else {
    if (*(char *)(unaff_r14 + 1) == '\x02') {
      a4 = unaff_r14;
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
        (*(code *)PTR_FUN_8c26261c)(a4,uVar1,a6,a7);
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
  if (ar4 == 0) {
    (*(code *)PTR_FUN_8c26261c)(0,ar5,ar6,ar7);
    return 0xfffffffd;
  }
  return *(undefined4 *)(ar4 + 0x18);
}



/* s_E9040828_adxf_is_NULL_ADXF_G_262628 @ 8c262628 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E9040828_adxf_is_NULL_ADXF_G_262628(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    (*(code *)PTR_FUN_8c262738)(0,ar5,ar6,ar7);
    return 0xfffffffd;
  }
  return *(undefined4 *)(ar4 + 0x10);
}



/* s_E9040829_adxf_is_NULL_ADXF_G_262646 @ 8c262646 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E9040829_adxf_is_NULL_ADXF_G_262646(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    (*(code *)PTR_FUN_8c262738)(0,ar5,ar6,ar7);
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
    (*(code *)PTR_FUN_8c262738)(0,ar5,ar6,ar7);
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
  if (ar4 == 0) {
    (*(code *)PTR_FUN_8c262738)(0,ar5,ar6,ar7);
    return 0xfffffffd;
  }
  return *(undefined4 *)(ar4 + 0x24);
}



/* s_E9040832_adxf_is_NULL_ADXF_G_2626b4 @ 8c2626b4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E9040832_adxf_is_NULL_ADXF_G_2626b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    (*(code *)PTR_FUN_8c262738)(0,ar5,ar6,ar7);
    return 0xfffffffd;
  }
  return (int)*(char *)(ar4 + 1);
}



/* s_E9040828_ptid_is_range_outsi_2626d2 @ 8c2626d2 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E9040828_ptid_is_range_outsi_2626d2(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if ((((-1 < ar4) && (ar4 < DAT_8c262730)) && (ar4 = *(int *)(DAT_8c262750 + ar4 * 4), -1 < ar5))
     && (ar5 < *(int *)(ar4 + 0xc))) {
    return 0;
  }
  (*(code *)PTR_FUN_8c262738)(ar4,ar5,ar6,ar7);
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
  
  uVar1 = (*(code *)PTR_FUN_8c2628a8)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c262810 @ 8c262810 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262810(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_8c2628ac;
  if (*(int *)PTR_DAT_8c2628ac == 0) {
    (*(code *)PTR_FUN_8c2628b0)();
    (*(code *)PTR_FUN_8c2628b4)();
    (*(code *)PTR_FUN_8c2628b8)();
    (*(code *)PTR_FUN_8c2628bc)();
    (*(code *)PTR_FUN_8c2628c0)();
    (*(code *)PTR_FUN_8c2628c4)();
    (*(code *)PTR_FUN_8c2628c8)();
    (*(code *)PTR_FUN_8c2628cc)();
    (*(code *)PTR_FUN_8c2628d0)();
    (*(code *)PTR_LAB_8c2628d4)();
    (*(code *)PTR_LAB_8c2628dc)(PTR_FUN_8c2628d8,0);
    (*(code *)PTR_memset_8c2628e4)(PTR_DAT_8c2628e0,0,(int)DAT_8c26289c);
    if (*(int *)PTR_DAT_8c2628a0 == 1) {
      uVar2 = (*(code *)PTR_FUN_8c2628ec)((int)DAT_8c26289e,PTR_FUN_8c2628e8,0x70,0);
      *(undefined4 *)PTR_DAT_8c2628f0 = uVar2;
    }
    in_r0 = (*(code *)PTR_FUN_8c2628f4)();
  }
  *(int *)puVar1 = *(int *)puVar1 + 1;
  return in_r0;
}



/* FUN_8c262814 @ 8c262814 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262814(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined *a4;
  undefined *a5;
  int a6;
  int *unaff_r14;
  
  if (*unaff_r14 == 0) {
    (*(code *)PTR_FUN_8c2628b0)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c2628b4)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c2628b8)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c2628bc)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c2628c0)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c2628c4)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c2628c8)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c2628cc)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c2628d0)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_LAB_8c2628d4)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_LAB_8c2628dc)(PTR_FUN_8c2628d8,0,ar6,ar7);
    a6 = (int)DAT_8c26289c;
    a5 = (undefined *)0x0;
    a4 = PTR_DAT_8c2628e0;
    (*(code *)PTR_memset_8c2628e4)(PTR_DAT_8c2628e0,0,a6,ar7);
    if (*(int *)PTR_DAT_8c2628a0 == 1) {
      a4 = (undefined *)(int)DAT_8c26289e;
      ar7 = 0;
      a6 = 0x70;
      a5 = PTR_FUN_8c2628e8;
      uVar1 = (*(code *)PTR_FUN_8c2628ec)(a4,PTR_FUN_8c2628e8,0x70,0);
      *(undefined4 *)PTR_DAT_8c2628f0 = uVar1;
    }
    in_r0 = (*(code *)PTR_FUN_8c2628f4)(a4,a5,a6,ar7);
  }
  *unaff_r14 = *unaff_r14 + 1;
  return in_r0;
}



/* FUN_8c2628fa @ 8c2628fa callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2628fa(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  *ar4 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    (*(code *)PTR_FUN_8c262970)(ar4,ar5,ar6,ar7);
    iVar2 = *(int *)PTR_DAT_8c262974;
    if (iVar2 != 0) {
      (*(code *)PTR_FUN_8c262978)(iVar2,ar5,ar6,ar7);
      *(undefined4 *)PTR_DAT_8c262974 = 0;
    }
    (*(code *)PTR_FUN_8c26297c)(iVar2,ar5,ar6,ar7);
    (*(code *)PTR_LAB_8c262980)(iVar2,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c262970)(iVar2,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c262984)(iVar2,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c262988)(iVar2,ar5,ar6,ar7);
    (*(code *)PTR_noop_26325a_8c26298c)(iVar2,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c262990)(iVar2,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c262994)(iVar2,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c262998)(iVar2,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c26299c)(iVar2,ar5,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c26297c)();
    return uVar1;
  }
  return in_r0;
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



/* ret_const_7fffffff_2629e8 @ 8c2629e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_7fffffff_2629e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c262a88;
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
  undefined *a5;
  undefined *puVar1;
  undefined4 a5_00;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int a5_01;
  undefined4 uVar6;
  undefined1 *a6;
  undefined4 a4;
  undefined1 *a6_00;
  
  iVar5 = (int)DAT_8c262bda;
  uVar6 = 8;
  iVar4 = 0;
  a4 = *ar6;
  do {
    if (*(char *)(iVar4 * iVar5 + DAT_8c262be0) == '\0') break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  if (iVar4 != 8) {
    a6_00 = (undefined1 *)(iVar4 * iVar5 + DAT_8c262be0);
    iVar4 = DAT_8c262be0;
    a5_00 = (*(code *)PTR_get_field_1c_26b94e_8c262bec)(a4,iVar5,8,DAT_8c262be0);
    uVar2 = (*(code *)PTR_get_field_20_26b952_8c262bf0)(a4,iVar5,uVar6,iVar4);
    uVar3 = (*(code *)PTR_get_field_24_26b956_8c262bf4)(a4,iVar5,uVar6,iVar4);
    iVar4 = (uVar2 >> 1) + (uVar3 >> 1);
    uVar6 = (*(code *)PTR_FUN_8c262bf8)(ar5,a5_00,uVar2 >> 1,iVar4);
    puVar1 = PTR_FUN_8c262c00;
    a5 = PTR_FUN_8c262bfc;
    *(undefined4 *)(a6_00 + 4) = uVar6;
    a6 = a6_00;
    (*(code *)puVar1)(uVar6,a5,a6_00,iVar4);
    if (*(int *)(a6_00 + 4) != 0) {
      a5_01 = 0;
      *(undefined4 *)(a6_00 + 8) = ar4;
      a6_00[2] = (char)ar5;
      iVar5 = 0;
      if (0 < ar5) {
        do {
          a5_01 = a5_01 + 1;
          *(undefined4 *)(a6_00 + iVar5 + 0xc) = *(undefined4 *)(iVar5 + (int)ar6);
          iVar5 = iVar5 + 4;
        } while (a5_01 < ar5);
      }
      a6_00[1] = 0;
      FUN_8c262ae2(a6_00,a5_01,a6,iVar4);
      *(undefined4 *)(a6_00 + 0x48) = 0;
      *(undefined4 *)(a6_00 + 0x4c) = 0;
      *(undefined4 *)(a6_00 + 0x50) = 0;
      *(undefined4 *)(a6_00 + 0x54) = 0;
      *a6_00 = 1;
      return a6_00;
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

undefined4 FUN_8c262c08(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int unaff_r14;
  
  if (unaff_r14 != 0) {
    if (*(int *)(unaff_r14 + 4) != 0) {
      ar4 = *(undefined4 *)(unaff_r14 + 4);
      (*(code *)PTR_FUN_8c262d04)(ar4,ar5,ar6,ar7);
    }
    (*(code *)PTR_FUN_8c262d08)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_memset_8c262d0c)(unaff_r14,0,(int)DAT_8c262cfc,ar7);
    uVar1 = (*(code *)PTR_FUN_8c262d10)();
    return uVar1;
  }
  return in_r0;
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
  int a5;
  int iVar2;
  int iVar3;
  undefined4 a5_00;
  undefined4 *a7;
  undefined1 *a7_00;
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
      (a5_00 = uStack_1c, iVar3 = iStack_18,
      a5 = (*(code *)PTR_FUN_8c262d18)(uVar4,uStack_1c,iStack_18,a7), puVar1 = PTR_FUN_8c262d1c,
      a5 == 0)) || (iStack_18 < a5)) {
    uVar4 = (**(code **)(*a4 + 0x1c))(a4,1,&uStack_1c,a7);
  }
  else {
    *(int *)(DAT_8c262d00 + ar4) = a5;
    iVar2 = (*(code *)puVar1)(uVar4,a5_00,iVar3,a7);
    if (iVar2 == 4) {
      *(undefined1 *)(ar4 + 3) = 1;
    }
    iVar3 = (*(code *)PTR_FUN_8c262d1c)(uVar4,a5_00,iVar3,a7);
    if (iVar3 == 2) {
      if (0x3f < iStack_18) {
        iStack_18 = 0x40;
      }
      (*(code *)PTR_memmove_8c262e3c)(ar4 + 0x58,uStack_1c,iStack_18,a7);
    }
    a7_00 = auStack_24;
    (*(code *)PTR_FUN_8c262e40)(&uStack_1c,a5,&uStack_1c,a7_00);
    (**(code **)(*a4 + 0x20))(a4,0,&uStack_1c,a7_00);
    (**(code **)(*a4 + 0x1c))(a4,1,auStack_24,a7_00);
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
  undefined4 a4;
  uint uVar3;
  uint *a5;
  uint uVar4;
  uint *a6;
  int *a7;
  uint *a6_00;
  int *a4_00;
  int iVar5;
  
  puVar1 = PTR_FUN_8c262e44;
  a6_00 = (uint *)(int)DAT_8c262e3a;
  a4 = *(undefined4 *)(ar4 + 0xc);
  a5 = ar5;
  a6 = ar6;
  a7 = ar7;
  for (iVar5 = 0; iVar2 = (*(code *)puVar1)(*(undefined4 *)(ar4 + 4),a5,a6,a7), iVar5 < iVar2;
      iVar5 = iVar5 + 1) {
    a4_00 = *(int **)(iVar5 * 4 + ar4 + 0xc);
    a5 = (uint *)0x0;
    a7 = (int *)(iVar5 * 8 + ar4 + 0x1c);
    a6 = a6_00;
    (**(code **)(*a4_00 + 0x18))(a4_00,0,a6_00,a7);
  }
  iVar5 = (*(code *)PTR_get_field_1c_26b94e_8c262e48)(a4,a5,a6,a7);
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
  undefined4 a5;
  undefined4 a6;
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
  a5 = 1;
  a7 = ar4 + 0x14;
  a6 = DAT_8c263094;
  (**(code **)(*a4 + 0x18))(a4,1,DAT_8c263094,a7);
  iVar1 = (*(code *)PTR_FUN_8c263098)(uVar3,a5,a6,a7);
  if ((((iVar1 == 0) && (1 < *(int *)(ar4 + 0x18))) &&
      (((int)**(short **)(ar4 + 0x14) >> 8 & 0xffU |
       (int)**(short **)(ar4 + 0x14) << 8 & DAT_8c26309c & 0xffff) == DAT_8c2630a0)) ||
     (iVar1 = FUN_8c263186(ar4,a5,a6,a7), iVar1 <= *(int *)(ar4 + 0x34))) {
    *(undefined1 *)(ar4 + 1) = 3;
  }
  else {
    iVar1 = FUN_8c26316e(ar4,a5,a6,a7);
    uVar2 = (**(code **)(**(int **)(ar4 + 0xc) + 0x24))(*(int **)(ar4 + 0xc),0,a6,a7);
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
  int a5;
  int iVar3;
  int iVar4;
  undefined4 a5_00;
  undefined1 *a6;
  undefined1 *a7;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined1 *puStack_24;
  
  piVar6 = *(int **)(ar4 + 8);
  uVar5 = *(undefined4 *)(ar4 + 4);
  iVar2 = (*(code *)PTR_get_field_18_25ff16_8c2630ac)(uVar5,ar5,ar6,ar7);
  a5 = (*(code *)PTR_get_field_a000a4_25fff0_8c2630b0)(uVar5,ar5,ar6,ar7);
  iVar3 = (*(code *)PTR_get_field_a0_25fff6_8c2630b4)(uVar5,ar5,ar6,ar7);
  puVar1 = PTR_FUN_8c2630b8;
  iVar2 = iVar2 - *(int *)(ar4 + 0x34);
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  a7 = auStack_30;
  (*(code *)PTR_FUN_8c2630b8)(ar4 + 0x14,a5,&uStack_28,a7);
  (**(code **)(*piVar6 + 0x20))(piVar6,0,&uStack_28,a7);
  a5_00 = 1;
  a6 = auStack_30;
  (**(code **)(*piVar6 + 0x1c))(piVar6,1,a6,a7);
  for (iVar3 = 0; iVar4 = (*(code *)PTR_FUN_8c2630bc)(*(undefined4 *)(ar4 + 4),a5_00,a6,a7),
      iVar3 < iVar4; iVar3 = iVar3 + 1) {
    a7 = auStack_30;
    (*(code *)puVar1)(iVar3 * 8 + ar4 + 0x1c,iVar2 << 1,&uStack_28,a7);
    if (*(int *)(ar4 + 0x50) != 0) {
      a7 = puStack_24;
      (**(code **)(ar4 + 0x50))(*(undefined4 *)(ar4 + 0x54),iVar3,uStack_28,puStack_24);
    }
    piVar6 = *(int **)(iVar3 * 4 + ar4 + 0xc);
    (**(code **)(*piVar6 + 0x20))(piVar6,1,&uStack_28,a7);
    piVar6 = *(int **)(ar4 + 0xc + iVar3 * 4);
    a5_00 = 0;
    a6 = auStack_30;
    (**(code **)(*piVar6 + 0x1c))(piVar6,0,a6,a7);
  }
  *(int *)(ar4 + 0x2c) = *(int *)(ar4 + 0x2c) + iVar2;
  *(int *)(ar4 + 0x30) = *(int *)(ar4 + 0x30) + a5;
  *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + iVar2;
  *(int *)(ar4 + 0x40) = *(int *)(ar4 + 0x40) + iVar2;
  *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + a5;
  if (((-1 < *(int *)(ar4 + 0x3c)) && (*(int *)(ar4 + 0x3c) <= *(int *)(ar4 + 0x40))) &&
     (*(int *)(ar4 + 0x48) != 0)) {
    (**(code **)(ar4 + 0x48))(*(undefined4 *)(ar4 + 0x4c),a5_00,a6,a7);
  }
  uVar5 = (*(code *)PTR_FUN_8c2630c0)(uVar5,a5_00,a6,a7);
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
  undefined4 uVar3;
  int a4;
  undefined4 a5;
  undefined4 *a5_00;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  a5_00 = &uStack_14;
  a5 = 0;
  uVar3 = ar4;
  uStack_10 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c26336c)(ar4,0,ar6,ar7);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c263374)(uVar3,a5,ar6,ar7);
  }
  else {
    a4 = iVar1;
    iVar2 = (*(code *)PTR_FUN_8c263378)(iVar1,&uStack_14,ar6,ar7);
    if (iVar2 != 0) {
      uVar3 = uStack_10;
      iVar1 = FUN_8c26325e(iVar1,0,uStack_14,uStack_10);
      if (iVar1 == 0) {
        return 0;
      }
      (*(code *)PTR_FUN_8c263384)(iVar1 + 0x40,ar4,0x20,uVar3);
      return iVar1;
    }
    (*(code *)PTR_FUN_8c263374)(a4,a5_00,ar6,ar7);
    (*(code *)PTR_FUN_8c263380)(iVar1,a5_00,ar6,ar7);
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
  undefined4 a6;
  
  iVar1 = ar5;
  a6 = ar6;
  a4 = (*(code *)PTR_FUN_8c263500)(ar4,ar5,ar6,ar7);
  if (a4 == 0) {
    (*(code *)PTR_FUN_8c263508)(0,iVar1,a6,ar7);
    return 0;
  }
  iVar1 = FUN_8c26325e(a4,0,ar5 << 0xb,ar6);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c263510)(iVar1 + 0x40,PTR_s_OpenRange_8c26350c,0x20,ar6);
  }
  return iVar1;
}



/* s_E8101213_can_t_open_s_ADXSTM_2633ea @ 8c2633e6 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

int s_E8101213_can_t_open_s_ADXSTM_2633ea(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  undefined4 a5;
  undefined4 uVar2;
  
  a5 = 0;
  iVar1 = ar6;
  uVar2 = ar7;
  a4 = (*(code *)PTR_FUN_8c263514)(ar4,0,ar6,ar7);
  if (a4 == 0) {
    (*(code *)PTR_FUN_8c263508)(0,a5,iVar1,uVar2);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_8c26325e(a4,ar5,ar6 << 0xb,ar7);
    if (iVar1 != 0) {
      uVar2 = 0x20;
      (*(code *)PTR_FUN_8c263510)(iVar1 + 0x40,ar4,0x20,ar7);
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

undefined4 FUN_8c26344a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int unaff_r14;
  
  if (unaff_r14 != 0) {
    FUN_8c263498(ar4,ar5,ar6,ar7);
    if (*(int *)(unaff_r14 + 8) != 0) {
      (*(code *)PTR_FUN_8c26351c)(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7);
    }
    uVar1 = FUN_8c2632e2(unaff_r14,ar5,ar6,ar7);
    return uVar1;
  }
  return in_r0;
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
  undefined4 uVar4;
  undefined4 a6;
  int iVar5;
  int *a4;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [12];
  undefined4 uStack_c;
  
  uStack_c = 1;
  a4 = *(int **)(ar4 + 4);
  iVar1 = ar4;
  if (*(char *)(ar4 + 2) == '\x01') {
    iVar1 = (*(code *)PTR_FUN_8c263648)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
    if (iVar1 == 1) {
      iVar5 = *(int *)(ar4 + 0x20) * 0x800;
      ar7 = auStack_20;
      (*(code *)PTR_FUN_8c26364c)(ar4 + 0x24,iVar5,auStack_18,ar7);
      (**(code **)(*a4 + 0x20))(a4,1,auStack_18,ar7);
      uVar4 = 0;
      ar6 = auStack_20;
      (**(code **)(*a4 + 0x1c))(a4,0,ar6,ar7);
      iVar1 = FUN_8c2634dc(ar4,uVar4,ar6,ar7);
      if ((iVar1 == *(int *)(ar4 + 0x30)) && (*(int *)(ar4 + 0x38) != 0)) {
        (**(code **)(ar4 + 0x38))(*(undefined4 *)(ar4 + 0x3c),uVar4,ar6,ar7);
      }
      *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + iVar5;
      *(undefined1 *)(ar4 + 2) = 0;
      iVar1 = FUN_8c2634dc(ar4,uVar4,ar6,ar7);
      iVar5 = *(int *)(ar4 + 0x14) + (int)DAT_8c26363c;
      if (iVar5 < 0) {
        iVar5 = iVar5 + DAT_8c26363c;
      }
      ar5 = iVar5 >> 0xb;
      if (ar5 <= iVar1) {
        *(undefined1 *)(ar4 + 1) = 3;
      }
    }
    else if (iVar1 == 5) {
      (*(code *)PTR_FUN_8c263754)(5,ar5,ar6,ar7);
      *(undefined1 *)(ar4 + 1) = 4;
      *(undefined1 *)(ar4 + 2) = 0;
    }
  }
  iVar5 = (int)*(char *)(ar4 + 2);
  if (iVar5 == 0) {
    if ((a4 == (int *)0x0) || (*a4 == 0)) {
      iVar5 = FUN_8c26359a(iVar1,ar5,ar6,ar7);
    }
    else {
      iVar5 = (**(code **)(*a4 + 0x24))(a4,1,ar6,ar7);
      if (iVar5 < *(int *)(ar4 + 0x1c)) {
        a6 = *(undefined4 *)(ar4 + 0x18);
        uVar4 = 0;
        iVar1 = ar4 + 0x24;
        (**(code **)(*a4 + 0x18))(a4,0,a6,iVar1);
        iVar5 = *(int *)(ar4 + 0x28);
        if (iVar5 < 0) {
          iVar5 = iVar5 + DAT_8c26374a;
        }
        iVar3 = *(int *)(ar4 + 0x30);
        iVar2 = FUN_8c2634dc(ar4,uVar4,a6,iVar1);
        iVar3 = iVar3 - iVar2;
        if (iVar5 >> 0xb < iVar3) {
          iVar3 = iVar5 >> 0xb;
        }
        iVar5 = *(int *)(ar4 + 0x2c);
        if (iVar3 < *(int *)(ar4 + 0x2c)) {
          iVar5 = iVar3;
        }
        if (iVar5 != 0) {
          iVar5 = (*(code *)PTR_FUN_8c263758)
                            (*(undefined4 *)(ar4 + 8),iVar5,*(undefined4 *)(ar4 + 0x24),iVar1);
          *(int *)(ar4 + 0x20) = iVar5;
          if (0 < iVar5) {
            *(undefined1 *)(ar4 + 2) = 1;
            return 1;
          }
        }
        iVar5 = (**(code **)(*a4 + 0x1c))(a4,0,ar4 + 0x24,iVar1);
      }
    }
  }
  return iVar5;
}



/* FUN_8c263702 @ 8c263702 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263702(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c26375c)(ar4,ar5,ar6,ar7);
  if (*(char *)(ar4 + 1) == '\x02') {
    s_E8101214_GDFS_error_adxstmf__2635aa(ar4,ar5,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_FUN_8c263760)();
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
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 *a6;
  int iVar4;
  uint uVar5;
  undefined1 *a4;
  undefined *puVar7;
  double dVar6;
  undefined2 uVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar4 = (int)DAT_8c263956;
  uVar5 = ar5 + 0x1fU & 0xffffffe0;
  iVar2 = 0;
  do {
    if (PTR_DAT_8c26395c[iVar2 * iVar4] == '\0') break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  if (iVar2 != 8) {
    a4 = PTR_DAT_8c26395c + iVar2 * iVar4;
    (*(code *)PTR_memset_8c263960)(a4,0,iVar4,ar7);
    puVar7 = PTR_FUN_8c263964;
    a4[3] = (char)ar4;
    *(uint *)(a4 + 0x20) = ar4 * 0x4040 + uVar5;
    iVar2 = (int)DAT_8c26395a;
    *(uint *)(a4 + 0x24) = ((ar6 - (uVar5 - ar5)) + ar4 * -0x4040) - 0x24 & 0xfffff800;
    iVar4 = (int)DAT_8c263958;
    *(undefined4 *)(a4 + 0x28) = 0x24;
    *(uint *)(a4 + 0x2c) = uVar5;
    *(int *)(a4 + 0x30) = iVar4;
    *(int *)(a4 + 0x34) = iVar2;
    a6 = *(undefined1 **)(a4 + 0x28);
    iVar2 = *(int *)(a4 + 0x24);
    iVar4 = (*(code *)puVar7)(*(undefined4 *)(a4 + 0x20),iVar2,a6,ar7);
    *(int *)(a4 + 0x10) = iVar4;
    *(int *)(a4 + 0x14) = iVar4;
    if (iVar4 != 0) {
      iVar4 = 0;
      if (0 < ar4) {
        do {
          a6 = (undefined1 *)((*(int *)(a4 + 0x34) - *(int *)(a4 + 0x30)) * 2);
          iVar2 = *(int *)(a4 + 0x30) << 1;
          uVar1 = (*(code *)puVar7)(*(int *)(a4 + 0x34) * iVar4 * 2 + *(int *)(a4 + 0x2c),iVar2,a6,
                                    ar7);
          *(undefined4 *)(a4 + iVar4 * 4 + 0x18) = uVar1;
          if (*(int *)(a4 + iVar4 * 4 + 0x18) == 0) goto override_prt_8c26394e_7a4d7f16;
          iVar4 = iVar4 + 1;
        } while (iVar4 < ar4);
      }
      a6 = a4 + 0x18;
      iVar2 = ar4;
      iVar4 = (*(code *)PTR_FUN_8c263968)(*(undefined4 *)(a4 + 0x14),ar4,a6,ar7);
      *(int *)(a4 + 4) = iVar4;
      if (iVar4 != 0) {
        iVar2 = ar4;
        iVar4 = (*(code *)PTR_LAB_8c26396c)(a4 + 0x18,ar4,a6,ar7);
        *(int *)(a4 + 0xc) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)(a4 + 0x38) = 0x3c;
          iVar2 = *(int *)(a4 + 0x24);
          if (iVar2 < 0) {
            iVar2 = iVar2 + DAT_8c263a50;
          }
          iVar4 = 0;
          *(short *)(a4 + 0x3c) = (short)(iVar2 >> 0xb);
          puVar7 = PTR_FUN_8c263a58;
          if (in_FPSCR_SZ == '\0') {
            puVar7 = DAT_8c263a54;
          }
          dVar6 = (double)CONCAT44(puVar7,(float)(int)*(short *)(a4 + 0x3c));
          if (in_FPSCR_PR == '\0') {
            uVar8 = (undefined2)(int)((float)(int)*(short *)(a4 + 0x3c) * (float)puVar7);
          }
          else {
            uVar8 = (undefined2)(int)(dVar6 * dVar6);
          }
          *(undefined2 *)(a4 + 0x3e) = uVar8;
          *(undefined2 *)(a4 + 0x40) = 0;
          puVar3 = (undefined2 *)(a4 + 0x42);
          if (0 < ar4) {
            do {
              iVar4 = iVar4 + 1;
              *puVar3 = 0xff80;
              puVar3 = puVar3 + 1;
            } while (iVar4 < ar4);
          }
          a4[0x6c] = 1;
          *(undefined4 *)(a4 + 0x54) = 0;
          *(undefined4 *)(a4 + 0x58) = 0;
          *(undefined4 *)(a4 + 0x5c) = 0;
          *(undefined2 *)(a4 + 0x60) = 0;
          *(undefined4 *)(a4 + 100) = 0;
          *(undefined2 *)(a4 + 0x68) = 0;
          *(undefined2 *)(a4 + 0x6a) = 0;
          a4[0x6d] = 1;
          a4[0x72] = 0;
          *(undefined4 *)(a4 + 0x88) = 0;
          *a4 = 1;
          return a4;
        }
      }
    }
override_prt_8c26394e_7a4d7f16:
    FUN_8c2639fa(a4,iVar2,a6,ar7);
  }
  return 0;
}



/* FUN_8c2639fa @ 8c2639fa callers=2 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2639fa(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined1 *a4;
  int iVar2;
  int iVar3;
  
  if (ar4 != (undefined1 *)0x0) {
    a4 = ar4;
    FUN_8c263c64(ar4,ar5,ar6,ar7);
    if (*(int *)(ar4 + 0xc) != 0) {
      a4 = *(undefined1 **)(ar4 + 0xc);
      (*(code *)PTR_FUN_8c263a58)(a4,ar5,ar6,ar7);
    }
    if (*(int *)(ar4 + 4) != 0) {
      a4 = *(undefined1 **)(ar4 + 4);
      (*(code *)PTR_FUN_8c263a5c)(a4,ar5,ar6,ar7);
    }
    if (*(int *)(ar4 + 8) != 0) {
      a4 = *(undefined1 **)(ar4 + 8);
      (*(code *)PTR_FUN_8c263a60)(a4,ar5,ar6,ar7);
    }
    (*(code *)PTR_FUN_8c263a64)(a4,ar5,ar6,ar7);
    if (*(int *)(ar4 + 0x10) != 0) {
      (**(code **)(**(int **)(ar4 + 0x10) + 0xc))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
    }
    for (iVar2 = 0; iVar2 < (char)ar4[3]; iVar2 = iVar2 + 1) {
      iVar3 = iVar2 * 4;
      if (*(int *)(ar4 + iVar3 + 0x18) != 0) {
        (**(code **)(**(int **)(ar4 + iVar3 + 0x18) + 0xc))
                  (*(int **)(ar4 + iVar3 + 0x18),ar5,ar6,ar7);
      }
      if (*(int *)(ar4 + iVar3 + 0x78) != 0) {
        (**(code **)(**(int **)(ar4 + iVar3 + 0x78) + 0xc))
                  (*(int **)(ar4 + iVar3 + 0x78),ar5,ar6,ar7);
      }
      if (*(int *)(ar4 + iVar3 + DAT_8c263b9e) != 0) {
        (**(code **)(**(int **)(ar4 + iVar3 + DAT_8c263b9e) + 0xc))
                  (*(int **)(ar4 + iVar3 + DAT_8c263b9e),ar5,ar6,ar7);
      }
    }
    if (*(int *)(ar4 + 0x74) != 0) {
      (*(code *)PTR_FUN_8c263ba4)(*(undefined4 *)(ar4 + 0x74),ar5,ar6,ar7);
    }
    (*(code *)PTR_memset_8c263ba8)(ar4,0,(int)DAT_8c263ba0,ar7);
    *ar4 = 0;
    uVar1 = (*(code *)PTR_FUN_8c263bac)();
    return uVar1;
  }
  return in_r0;
}



/* FUN_8c263b0c @ 8c263b0c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c263b0c(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  char *pcVar2;
  int iVar3;
  
  iVar3 = (int)DAT_8c263ba0;
  pcVar2 = ar4 + unaff_r12;
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c2639fa(ar4,ar5,ar6,ar7);
    }
    ar4 = ar4 + iVar3;
  } while (ar4 < pcVar2);
  return iVar1;
}



/* FUN_8c263b34 @ 8c263b34 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263b34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *a4;
  int iVar3;
  
  uVar2 = ar5;
  for (iVar3 = 0; iVar3 < *(char *)(ar4 + 3); iVar3 = iVar3 + 1) {
    a4 = *(int **)(iVar3 * 4 + ar4 + 0x18);
    (**(code **)(*a4 + 0x14))(a4,uVar2,ar6,ar7);
  }
  uVar2 = ar5;
  (*(code *)PTR_FUN_8c263bb4)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  puVar1 = PTR_FUN_8c263bb8;
  *(undefined4 *)(ar4 + 0x14) = ar5;
  (*(code *)puVar1)(*(undefined4 *)(ar4 + 4),uVar2,ar6,ar7);
  uVar2 = DAT_8c263bbc;
  *(undefined1 *)(ar4 + 1) = 1;
  *(undefined4 *)(ar4 + 0x4c) = 0;
  *(undefined1 *)(ar4 + 0x71) = 0;
  *(undefined4 *)(ar4 + 0x8c) = uVar2;
  *(undefined4 *)(ar4 + 0x90) = 0xffffffff;
  return 0x90;
}



/* FUN_8c263bc0 @ 8c263bc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263bc0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar6_00;
  
  ar6_00 = (int)*(short *)(ar4 + 0x3c) << 0xb;
  (*(code *)PTR_FUN_8c263d30)(*(undefined4 *)(ar4 + 8),(int)*(short *)(ar4 + 0x3e) << 0xb);
  (*(code *)PTR_FUN_8c263d34)(*(undefined4 *)(ar4 + 8),0x19);
  (*(code *)PTR_FUN_8c263d38)(*(undefined4 *)(ar4 + 8));
  FUN_8c263b34(ar4,*(undefined4 *)(ar4 + 0x10),ar6_00,ar7);
  *(undefined1 *)(ar4 + 2) = 0;
  return 0;
}



/* FUN_8c263bc8 @ 8c263bc8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263bc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  code *in_r3;
  undefined4 a5;
  int a6;
  int unaff_r14;
  
  a6 = (int)*(short *)(in_r0 + unaff_r14) << 0xb;
  (*in_r3)(*(undefined4 *)(unaff_r14 + 8),(int)*(short *)(unaff_r14 + 0x3e) << 0xb,a6,ar7);
  a5 = 0x19;
  (*(code *)PTR_FUN_8c263d34)(*(undefined4 *)(unaff_r14 + 8),0x19,a6,ar7);
  (*(code *)PTR_FUN_8c263d38)(*(undefined4 *)(unaff_r14 + 8),a5,a6,ar7);
  FUN_8c263b34(unaff_r14,*(undefined4 *)(unaff_r14 + 0x10),a6,ar7);
  *(undefined1 *)(unaff_r14 + 2) = 0;
  return 0;
}



/* FUN_8c263bfe @ 8c263bfe callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263bfe(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *a4;
  int iVar3;
  
  iVar3 = ar4;
  uVar2 = ar5;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c263d3c)(iVar3,uVar2,ar6,ar7);
  for (iVar3 = 0; iVar3 < *(char *)(ar4 + 3); iVar3 = iVar3 + 1) {
    a4 = *(int **)(iVar3 * 4 + ar4 + 0x18);
    (**(code **)(*a4 + 0x14))(a4,uVar2,ar6,ar7);
  }
  uVar2 = ar5;
  (*(code *)PTR_FUN_8c263d40)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  puVar1 = PTR_FUN_8c263d44;
  *(undefined4 *)(ar4 + 0x14) = ar5;
  (*(code *)puVar1)(*(undefined4 *)(ar4 + 4),uVar2,ar6,ar7);
  *(undefined1 *)(ar4 + 1) = 1;
  *(undefined1 *)(ar4 + 2) = 3;
  *(undefined4 *)(ar4 + 0x4c) = 0;
  uVar2 = (*(code *)PTR_FUN_8c263d48)();
  return uVar2;
}



/* FUN_8c263c64 @ 8c263c64 callers=3 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263c64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c263d3c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_LAB_8c263d4c)(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  uVar1 = 0;
  (*(code *)PTR_SUB_8c263d50)(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  (*(code *)PTR_FUN_8c263d54)(*(undefined4 *)(ar4 + 4),uVar1,ar6,ar7);
  if (*(int *)(ar4 + 8) != 0) {
    (*(code *)PTR_FUN_8c263d58)(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7);
    (*(code *)PTR_FUN_8c263d5c)(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7);
    (**(code **)(**(int **)(ar4 + 0x14) + 0x14))(*(int **)(ar4 + 0x14),uVar1,ar6,ar7);
    *(undefined4 *)(ar4 + 8) = 0;
  }
  if ((*(char *)(ar4 + 2) == '\x02') && (*(int *)(ar4 + 0x14) != 0)) {
    (**(code **)(**(int **)(ar4 + 0x14) + 0xc))(*(int **)(ar4 + 0x14),uVar1,ar6,ar7);
  }
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined1 *)(ar4 + 1) = 0;
  uVar1 = (*(code *)PTR_FUN_8c263d48)();
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

int FUN_8c263cd8(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*(char *)(ar4 + 1) == '\x03') || (*(char *)(ar4 + 1) == '\x04')) {
    (*(code *)PTR_LAB_8c263d60)(*(undefined4 *)(ar4 + 0xc),ar5,ar6);
  }
  else if (*(char *)(ar4 + 1) == '\x05') {
    iVar3 = (*(code *)PTR_FUN_8c263d64)(*(undefined4 *)(ar4 + 4));
    puVar1 = PTR_FUN_8c263d68;
    *ar5 = iVar3;
    uVar2 = (*(code *)puVar1)(*(undefined4 *)(ar4 + 4));
    puVar1 = PTR_FUN_8c263d6c;
    *ar6 = uVar2;
    (*(code *)puVar1)(*(undefined4 *)(ar4 + 4));
    iVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c263d70)();
    *ar5 = *ar5 * iVar3;
  }
  else {
    *ar5 = 0;
    *ar6 = 1;
  }
  iVar3 = (int)DAT_8c263eaa;
  *ar5 = *ar5 + *(int *)(iVar3 + ar4);
  return iVar3;
}



/* FUN_8c263ce4 @ 8c263ce4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c263ce4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_r12;
  int *unaff_r13;
  int unaff_r14;
  
  if ((*(char *)(unaff_r14 + 1) == '\x03') || (*(char *)(unaff_r14 + 1) == '\x04')) {
    (*(code *)PTR_LAB_8c263d60)(*(undefined4 *)(unaff_r14 + 0xc),unaff_r13,unaff_r12,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x05') {
    iVar3 = (*(code *)PTR_FUN_8c263d64)(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7);
    puVar1 = PTR_FUN_8c263d68;
    *unaff_r13 = iVar3;
    uVar2 = (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7);
    puVar1 = PTR_FUN_8c263d6c;
    *unaff_r12 = uVar2;
    uVar2 = *(undefined4 *)(unaff_r14 + 4);
    (*(code *)puVar1)(uVar2,ar5,ar6,ar7);
    iVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c263d70)(uVar2,ar5,ar6,ar7);
    *unaff_r13 = *unaff_r13 * iVar3;
  }
  else {
    *unaff_r13 = 0;
    *unaff_r12 = 1;
  }
  iVar3 = (int)DAT_8c263eaa;
  *unaff_r13 = *unaff_r13 + *(int *)(iVar3 + unaff_r14);
  return iVar3;
}



/* FUN_8c263d90 @ 8c263d90 callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c263da4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c263d90(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  int iVar3;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int iStack_c;
  int aiStack_8 [2];
  
  FUN_8c263cd8(ar4,&iStack_c,aiStack_8,ar7);
  if (in_FPSCR_PR == '\0') {
    fVar1 = (float)iStack_c / (float)aiStack_8[0];
  }
  else {
    fVar1 = SUB84((double)aiStack_8[0] / (double)aiStack_8[0],0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c263eac,fVar1);
  }
  else {
    dVar2 = (double)CONCAT44(_UNK_8c263eb0,DAT_8c263eac);
  }
  if (in_FPSCR_PR == '\0') {
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
  
  *(undefined2 *)(ar5 * 2 + ar4 + 0x42) = (undefined2)ar6;
  if (ar5 < *(char *)(ar4 + 3)) {
    uVar1 = (*(code *)PTR_SUB_8c263ec4)(*(undefined4 *)(ar4 + 0xc));
    return uVar1;
  }
  uVar1 = (*(code *)PTR_FUN_8c263ecc)(PTR_s_E8101208__parameter_error__ADXT__8c263ec8);
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
  
  *(short *)(in_r3 + in_r2) = (short)ar6;
  if (ar5 < *(char *)(unaff_r14 + 3)) {
    uVar1 = (*(code *)PTR_SUB_8c263ec4)(*(undefined4 *)(unaff_r14 + 0xc));
    return uVar1;
  }
  uVar1 = (*(code *)PTR_FUN_8c263ecc)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c263e8e @ 8c263e8e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c263e8e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined2 *)(ar4 + 0x40) = (undefined2)ar5;
  uVar1 = (*(code *)PTR_SUB_8c263ed0)(*(undefined4 *)(ar4 + 0xc));
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
    iVar1 = iVar1 + DAT_8c26400a;
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
    iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c26400c)(ar4,a5,ar6,ar7);
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
  undefined *puVar1;
  undefined *puVar2;
  undefined4 a4;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *a4_00;
  char *pcVar7;
  int iVar8;
  char *a4_01;
  
  a4 = (*(code *)PTR_sh4_tmu_1f88e6_8c26414c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c264150)(ar4,ar5,ar6,ar7);
  uVar3 = (*(code *)PTR_sh4_tmu_1f88e6_8c26414c)(ar4,ar5,ar6,ar7);
  puVar1 = PTR_FUN_8c264154;
  uVar6 = a4;
  uVar5 = uVar3;
  uVar4 = (*(code *)PTR_FUN_8c264154)(a4,uVar3,ar6,ar7);
  puVar2 = PTR_LAB_8c26415c;
  *(undefined4 *)PTR_DAT_8c264158 = uVar4;
  (*(code *)puVar2)(uVar6,uVar5,ar6,ar7);
  uVar5 = (*(code *)PTR_sh4_tmu_1f88e6_8c26414c)(uVar6,uVar5,ar6,ar7);
  uVar6 = uVar5;
  uVar4 = (*(code *)puVar1)(uVar3,uVar5,ar6,ar7);
  puVar2 = PTR_FUN_8c264164;
  *(undefined4 *)PTR_DAT_8c264160 = uVar4;
  (*(code *)puVar2)(uVar3,uVar6,ar6,ar7);
  uVar3 = (*(code *)PTR_sh4_tmu_1f88e6_8c26414c)(uVar3,uVar6,ar6,ar7);
  uVar6 = uVar3;
  uVar4 = (*(code *)puVar1)(uVar5,uVar3,ar6,ar7);
  puVar2 = PTR_FUN_8c26416c;
  *(undefined4 *)PTR_DAT_8c264168 = uVar4;
  (*(code *)puVar2)(uVar5,uVar6,ar6,ar7);
  uVar5 = (*(code *)PTR_sh4_tmu_1f88e6_8c26414c)(uVar5,uVar6,ar6,ar7);
  uVar6 = uVar5;
  uVar3 = (*(code *)puVar1)(uVar3,uVar5,ar6,ar7);
  puVar2 = PTR_FUN_8c264178;
  a4_01 = PTR_DAT_8c264174;
  iVar8 = (int)DAT_8c264146;
  pcVar7 = PTR_DAT_8c264174 + DAT_8c264148;
  *(undefined4 *)PTR_DAT_8c264170 = uVar3;
  do {
    a4_00 = a4_01;
    if (*a4_01 == '\x01') {
      (*(code *)puVar2)(a4_01,uVar6,ar6,ar7);
    }
    a4_01 = a4_01 + iVar8;
  } while (a4_01 < pcVar7);
  uVar6 = (*(code *)PTR_sh4_tmu_1f88e6_8c26414c)(a4_00,uVar6,ar6,ar7);
  uVar5 = (*(code *)puVar1)(uVar5,uVar6,ar6,ar7);
  *(undefined4 *)PTR_DAT_8c26417c = uVar5;
  uVar6 = (*(code *)puVar1)(a4,uVar6,ar6,ar7);
  *(undefined4 *)PTR_DAT_8c264180 = uVar6;
  return uVar6;
}



/* FUN_8c264104 @ 8c264104 callers=0 callees=2 */

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
    (*(code *)PTR_SUB_8c264184)(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
    iVar1 = DAT_8c264188;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    uVar2 = (*(code *)PTR_s_E1205_Illigal_parameter_MWRN_26973a_8c26418c)
                      (*(undefined4 *)(ar4 + 0xc));
    return uVar2;
  }
  uVar2 = (*(code *)PTR_SUB_8c2642d4)(*(undefined4 *)(ar4 + 0xc),1);
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
  undefined4 a4;
  
  if (*(char *)(ar4 + 0x72) == '\0') {
    return 0;
  }
  a4 = *(undefined4 *)(ar4 + 0xc);
  uVar1 = (*(code *)PTR_LAB_8c2642f4)(a4,ar5,ar6,ar7);
  FUN_8c264010(a4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c264222 @ 8c264222 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c264236) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c264222(ushort *ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  short asStack_28 [2];
  undefined1 auStack_24 [28];
  int *piStack_8;
  
  if (((1 < ar5) &&
      (((int)(uint)*ar4 >> 8 | (uint)*ar4 << 8 & DAT_8c2642f8 & 0xffff) == DAT_8c2642fc)) &&
     (piStack_8 = ar6, iVar1 = (*(code *)PTR_FUN_8c264300)(ar4,ar5,asStack_28,auStack_24),
     -1 < iVar1)) {
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
  int *piVar2;
  undefined4 uVar3;
  undefined1 *a6;
  undefined4 *puVar4;
  undefined1 *a7;
  undefined1 *a7_00;
  int iVar5;
  int *a4;
  int iVar6;
  undefined1 auStack_28 [8];
  undefined4 auStack_20 [3];
  
  a7 = auStack_28;
  a7_00 = auStack_28;
  a6 = auStack_28;
  a4 = *(int **)(ar4 + 0x14);
  if (ar6 < 0) {
    ar6 = ar6 + 0x1f;
  }
  iVar5 = ar5 * 0x12;
  iVar6 = (ar6 >> 5) * iVar5;
  uVar3 = 0;
  puVar4 = auStack_20;
  piVar2 = a4;
  iVar1 = iVar6;
  (**(code **)(*a4 + 0x18))(a4,0,iVar6,puVar4);
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c2643fc)(piVar2,uVar3,iVar1,puVar4);
  iVar1 = iVar1 * iVar5;
  (*(code *)PTR_memset_8c264400)(auStack_20[0],0,iVar1,puVar4);
  (*(code *)PTR_FUN_8c264404)(auStack_20,iVar1,auStack_20,auStack_28);
  (**(code **)(*a4 + 0x20))(a4,1,auStack_20,a7);
  (**(code **)(*a4 + 0x1c))(a4,0,auStack_28,a7);
  iVar6 = iVar6 - iVar1;
  uVar3 = 0;
  puVar4 = auStack_20;
  piVar2 = a4;
  (**(code **)(*a4 + 0x18))(a4,0,iVar6,puVar4);
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c2643fc)(piVar2,uVar3,iVar6,puVar4);
  (*(code *)PTR_memset_8c264400)(auStack_20[0],0,iVar1 * iVar5,puVar4);
  (*(code *)PTR_FUN_8c264404)(auStack_20,iVar1 * iVar5,auStack_20,auStack_28);
  (**(code **)(*a4 + 0x20))(a4,1,auStack_20,a7_00);
  uVar3 = 0;
  (**(code **)(*a4 + 0x1c))(a4,0,auStack_28,a7_00);
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c2643fc)(a4,uVar3,a6,a7_00);
  return iVar1 << 5;
}



/* s_E8101202_can_t_open_d_d_ADXT_26440a @ 8c264408 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E8101202_can_t_open_d_d_ADXT_26440a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *a7;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = ar4;
  uStack_10 = ar5;
  uStack_c = ar6;
  (*(code *)PTR_FUN_8c2645d0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c2645d4)(iVar1,ar5,ar6,ar7);
  a7 = &uStack_14;
  (*(code *)PTR_FUN_8c2645d8)(uStack_10,uStack_c,&iStack_18,a7);
  uVar2 = *(undefined4 *)(ar4 + 0x10);
  iVar1 = (*(code *)PTR_s_E8101212_can_t_open_fad_d_ns_26338a_8c2645dc)
                    (iStack_18,uStack_14,uVar2,a7);
  *(int *)(ar4 + 8) = iVar1;
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c2645e0)(iStack_18,uStack_14,uVar2,a7);
    (*(code *)PTR_FUN_8c2645e8)(iStack_18,uStack_14,uVar2,a7);
  }
  else {
    (*(code *)PTR_FUN_8c2645ec)(ar4,uStack_14,uVar2,a7);
    iStack_18 = ar4;
  }
  uVar2 = (*(code *)PTR_FUN_8c2645e0)(iStack_18,uStack_14,uVar2,a7);
  return uVar2;
}



/* s_E8101205_can_t_open_s_ADXT_S_26446e @ 8c26446c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E8101205_can_t_open_s_ADXT_S_26446e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ar4;
  uVar2 = ar5;
  (*(code *)PTR_FUN_8c2645d0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c2645d4)(iVar1,uVar2,ar6,ar7);
  uVar2 = *(undefined4 *)(ar4 + 0x10);
  iVar1 = (*(code *)PTR_s_E8101210_can_t_open_s_ADXSTM_2632ee_8c2645f0)(ar5,uVar2,ar6,ar7);
  *(int *)(ar4 + 8) = iVar1;
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c2645e0)(ar5,uVar2,ar6,ar7);
    (*(code *)PTR_FUN_8c2645e8)(ar5,uVar2,ar6,ar7);
  }
  else {
    (*(code *)PTR_FUN_8c2645ec)(ar4,uVar2,ar6,ar7);
  }
  uVar2 = (*(code *)PTR_FUN_8c2645e0)();
  return uVar2;
}



/* s_E8101207_can_t_create_sj_ADX_2644ba @ 8c2644b8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E8101207_can_t_create_sj_ADX_2644ba(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a6;
  
  iVar1 = ar4;
  uVar2 = ar5;
  a6 = ar6;
  (*(code *)PTR_FUN_8c2645d0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c2645d4)(iVar1,uVar2,a6,ar7);
  iVar1 = (*(code *)PTR_FUN_8c2645fc)(ar5,ar6,a6,ar7);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c2645e0)(ar5,0,a6,ar7);
    (*(code *)PTR_FUN_8c2645e8)(ar5,iVar1,a6,ar7);
  }
  else {
    (*(code *)PTR_FUN_8c264604)(ar4,iVar1,a6,ar7);
    *(undefined1 *)(ar4 + 2) = 2;
  }
  uVar2 = (*(code *)PTR_FUN_8c2645e0)();
  return uVar2;
}



/* s_E8101207_can_t_create_sj_ADX_26450a @ 8c264504 callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c26452a) */
/* WARNING: Removing unreachable block (ram,0x8c26456c) */
/* WARNING: Unknown calling convention */

undefined4 s_E8101207_can_t_create_sj_ADX_26450a(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int a4;
  int a6;
  
  iVar1 = ar5;
  a6 = ar6;
  (*(code *)PTR_FUN_8c2645d0)(ar4,ar5,ar6,ar7);
  uVar3 = *(uint *)(ar5 + 4);
  if ((ar6 < (int)(uVar3 >> 0x18 | (int)uVar3 >> 8 & DAT_8c264608 | uVar3 << 8 & DAT_8c26460c |
                  uVar3 << 0x18)) && (-1 < ar6)) {
    (*(code *)PTR_FUN_8c2645d4)(uVar3,iVar1,a6,ar7);
    uVar3 = *(uint *)((ar6 + 1) * 8 + ar5);
    a4 = (uVar3 >> 0x18 | (int)uVar3 >> 8 & DAT_8c264608 | uVar3 << 8 & DAT_8c26460c | uVar3 << 0x18
         ) + ar5;
    iVar1 = (*(code *)PTR_FUN_8c2645fc)(a4,DAT_8c2645f8,a6,ar7);
    if (iVar1 == 0) {
      (*(code *)PTR_FUN_8c2645e0)(a4,0,a6,ar7);
      (*(code *)PTR_FUN_8c2645e8)(a4,iVar1,a6,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c264604)(ar4,iVar1,a6,ar7);
      *(undefined1 *)(ar4 + 2) = 2;
    }
    uVar2 = (*(code *)PTR_FUN_8c2645e0)();
    return uVar2;
  }
  return DAT_8c264608;
}



/* s_E8101201_not_enough_data_adx_26461e @ 8c264614 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E8101201_not_enough_data_adx_26461e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int a5;
  undefined4 uVar2;
  int iVar3;
  int *a4;
  undefined4 a5_00;
  undefined4 a6;
  undefined1 *a6_00;
  undefined1 *puVar4;
  undefined4 a4_00;
  int *a4_01;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  a4_01 = *(int **)(ar4 + 0x14);
  a4_00 = *(undefined4 *)(ar4 + 4);
  a5 = (*(code *)PTR_FUN_8c264750)(a4_00,ar5,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c264754)(a4_00,ar5,ar6,ar7);
  iVar3 = (*(code *)PTR_FUN_8c264758)(a4_00,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c26475c)(a4_00,ar5,ar6,ar7);
  if ((*(int *)(ar4 + 8) == 0) && (*(char *)(ar4 + 0x6c) == '\0')) {
    uVar2 = (*(code *)PTR_FUN_8c264760)(*(undefined4 *)(ar4 + 4),0xffffffff,ar6,ar7);
  }
  else {
    a6 = *(undefined4 *)(ar4 + 0x50);
    a5_00 = 1;
    puVar4 = auStack_20;
    a4 = a4_01;
    (**(code **)(*a4_01 + 0x18))(a4_01,1,a6,puVar4);
    if (iStack_1c < *(int *)(ar4 + 0x50)) {
      (*(code *)PTR_FUN_8c264768)(a4,a5_00,a6,puVar4);
    }
    a6_00 = auStack_20;
    (**(code **)(*a4_01 + 0x20))(a4_01,0,a6_00,puVar4);
    (*(code *)PTR_FUN_8c26476c)(a4_00,0,a6_00,puVar4);
    puVar1 = PTR_FUN_8c264760;
    *(int *)(DAT_8c26474a + ar4) = iVar3 - a5;
    (*(code *)puVar1)(a4_00,iVar3 - a5,a6_00,puVar4);
    (*(code *)PTR_FUN_8c264770)(a4_00,uVar2,a6_00,puVar4);
    (*(code *)PTR_FUN_8c264774)(a4_00,a5,a6_00,puVar4);
    if (*(char *)(ar4 + 2) == '\x02') {
      (**(code **)(*a4_01 + 0x14))(a4_01,a5,a6_00,puVar4);
      puVar4 = auStack_20;
      (**(code **)(*a4_01 + 0x18))(a4_01,1,uVar2,puVar4);
      (**(code **)(*a4_01 + 0x20))(a4_01,0,auStack_20,puVar4);
    }
    uVar2 = 0x4c;
    *(int *)(ar4 + 0x4c) = *(int *)(ar4 + 0x4c) + 1;
  }
  return uVar2;
}



/* FUN_8c2646fe @ 8c2646fe callers=0 callees=2 */

/* WARNING: Removing unreachable block (ram,0x8c26473e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2646fe(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(ar4 + 8);
  iVar1 = (*(code *)PTR_FUN_8c264754)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  if (*(char *)(ar4 + 0x6c) != '\0') {
    if (iVar1 < 0) {
      iVar1 = iVar1 + DAT_8c26474c;
    }
    uVar2 = (*(code *)PTR_FUN_8c264780)(uVar2,iVar1 >> 0xb);
    return uVar2;
  }
  (*(code *)PTR_FUN_8c264760)(*(undefined4 *)(ar4 + 4),0xffffffff,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c26477c)(*(undefined4 *)(ar4 + 8),DAT_8c264778);
  return uVar2;
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
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 a5;
  undefined4 *extraout_r3;
  undefined *a5_00;
  int iVar7;
  undefined4 uVar8;
  
  iVar7 = (int)DAT_8c26486e;
  uVar8 = *(undefined4 *)(ar4 + 4);
  iVar2 = (*(code *)PTR_FUN_8c264878)(uVar8,ar5,ar6,ar7);
  if (iVar2 == 2) {
    iVar2 = (*(code *)PTR_FUN_8c264870)(uVar8,ar5,ar6,ar7);
    if (*(char *)(ar4 + 3) < iVar2) {
      (*(code *)PTR_FUN_8c264880)(iVar2,ar5,ar6,ar7);
      uVar8 = (*(code *)PTR_FUN_8c264884)(ar4);
      return uVar8;
    }
    (*(code *)PTR_FUN_8c264888)(uVar8,ar5,ar6,ar7);
    uVar5 = uVar8;
    iVar2 = (*(code *)PTR_FUN_8c26488c)(uVar8,ar5,ar6,ar7);
    if (iVar2 < 1) {
      iVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c26496c)(uVar5,ar5,ar6,ar7);
      iVar3 = (int)(iVar3 * 3 + (uint)(iVar3 * 3 < 0)) >> 1;
    }
    else {
      iVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c264890)(uVar5,ar5,ar6,ar7);
      iVar3 = iVar3 * 3;
    }
    puVar1 = PTR_FUN_8c264970;
    *(int *)(ar4 + 0x48) = iVar3;
    iVar3 = (*(code *)puVar1)(uVar8,ar5,ar6,ar7);
    iVar3 = iVar3 << 1;
    iVar4 = (*(code *)PTR_libgcc_divide_helper_010468_8c26496c)(iVar3,ar5,ar6,ar7);
    puVar1 = PTR_FUN_8c264974;
    *(int *)(ar4 + 0x48) = iVar4 * iVar3;
    a5_00 = *(undefined **)(ar4 + 0x48);
    (*(code *)puVar1)(uVar8,a5_00,ar6,ar7);
    if (iVar2 < 1) {
      if (*(int *)(ar4 + 8) != 0) {
        a5_00 = DAT_8c264be4;
        (*(code *)PTR_FUN_8c264be8)(*(undefined4 *)(ar4 + 8),DAT_8c264be4,ar6,ar7);
      }
    }
    else {
      if (*(char *)(ar4 + 2) == '\x02') {
        *(undefined4 *)(ar4 + 0x50) = 0;
      }
      else {
        uVar5 = (*(code *)PTR_FUN_8c264978)(uVar8,a5_00,ar6,ar7);
        iVar2 = (*(code *)PTR_libgcc_divide_helper_010614_8c26497c)(uVar5,a5_00,ar6,ar7);
        *(int *)(ar4 + 0x50) = iVar7 - iVar2;
        uVar6 = (*(code *)PTR_libgcc_divide_helper_010614_8c26497c)(uVar5,a5_00,ar6,ar7);
        *extraout_r3 = uVar6;
        uVar5 = (*(code *)PTR_libgcc_divide_helper_010468_8c26496c)(uVar5,a5_00,ar6,ar7);
        puVar1 = PTR_FUN_8c264980;
        *(undefined4 *)(DAT_8c264966 + ar4) = uVar5;
        (*(code *)puVar1)(*(undefined4 *)(ar4 + 8),uVar5,ar6,ar7);
        a5_00 = PTR_FUN_8c264984;
        ar6 = ar4;
        (*(code *)PTR_FUN_8c264988)(*(undefined4 *)(ar4 + 8),PTR_FUN_8c264984,ar4,ar7);
      }
      uVar5 = (*(code *)PTR_FUN_8c26498c)(uVar8,a5_00,ar6,ar7);
      puVar1 = PTR_FUN_8c264990;
      *(undefined4 *)(DAT_8c264968 + ar4) = uVar5;
      (*(code *)puVar1)(uVar8,uVar5,ar6,ar7);
      (*(code *)PTR_FUN_8c264994)(uVar8,0,ar6,ar7);
      (*(code *)PTR_FUN_8c264998)(uVar8,0,ar6,ar7);
      a5_00 = PTR_s_E8101201_not_enough_data_adx_26461e_8c26499c;
      ar6 = ar4;
      (*(code *)PTR_FUN_8c2649a0)(uVar8,PTR_s_E8101201_not_enough_data_adx_26461e_8c26499c,ar4,ar7);
    }
    iVar7 = (*(code *)PTR_FUN_8c264bec)(uVar8,a5_00,ar6,ar7);
    uVar5 = (*(code *)PTR_FUN_8c264bf0)(uVar8,a5_00,ar6,ar7);
    uVar6 = (*(code *)PTR_FUN_8c264bf4)(uVar8,a5_00,ar6,ar7);
    a5 = (*(code *)PTR_FUN_8c264bf8)(uVar8,a5_00,ar6,ar7);
    (*(code *)PTR_LAB_8c264bfc)(*(undefined4 *)(ar4 + 0xc),a5,ar6,ar7);
    (*(code *)PTR_LAB_8c264c00)(*(undefined4 *)(ar4 + 0xc),iVar7,ar6,ar7);
    (*(code *)PTR_LAB_8c264c04)(*(undefined4 *)(ar4 + 0xc),uVar5,ar6,ar7);
    (*(code *)PTR_noop_262a44_8c264c08)(*(undefined4 *)(ar4 + 0xc),uVar6,ar6,ar7);
    iVar2 = (int)*(short *)(ar4 + 0x40);
    (*(code *)PTR_SUB_8c264c0c)(*(undefined4 *)(ar4 + 0xc),iVar2,ar6,ar7);
    FUN_8c264784(ar4,iVar2,ar6,ar7);
    if (*(int *)(ar4 + 0x74) != 0) {
      (*(code *)PTR_FUN_8c264c10)(*(undefined4 *)(ar4 + 0x74),iVar7,ar6,ar7);
      iVar2 = iVar7;
    }
    iVar7 = (*(code *)PTR_FUN_8c264c14)(uVar8,iVar2,ar6,ar7);
    if (iVar7 == 2) {
      uVar8 = (*(code *)PTR_FUN_8c264c18)(uVar8,iVar2,ar6,ar7);
      (*(code *)PTR_FUN_8c264c1c)(*(undefined4 *)(ar4 + 0xc),uVar8,ar6,ar7);
    }
    (*(code *)PTR_LAB_8c264c20)(*(undefined4 *)(ar4 + 0xc),1,ar6,ar7);
    iVar2 = 2;
    *(undefined1 *)(ar4 + 1) = 2;
  }
  return iVar2;
}



/* FUN_8c264a42 @ 8c264a42 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c264a42(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 a4;
  undefined4 *a7;
  int iVar4;
  undefined4 *puVar5;
  undefined4 a4_00;
  int iVar6;
  int *a4_01;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  a4 = *(undefined4 *)(ar4 + 4);
  a4_00 = *(undefined4 *)(ar4 + 0xc);
  iVar2 = (*(code *)PTR_LAB_8c264c24)(a4_00,ar5,ar6,ar7);
  iVar3 = (*(code *)PTR_ret_const_7fffffff_2629e8_8c264c28)(a4_00,ar5,ar6,ar7);
  if (((*(int *)(ar4 + 0x48) <= iVar2) ||
      (iVar2 = (*(code *)PTR_FUN_8c264c2c)(a4,ar5,ar6,ar7), iVar3 <= iVar2)) ||
     (iVar2 = (*(code *)PTR_FUN_8c264c30)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7), iVar2 == 3)) {
    if (*(char *)(ar4 + 0x70) == '\0') {
      if (*(char *)(ar4 + 0x72) == '\0') {
        ar5 = 1;
        (*(code *)PTR_SUB_8c264c34)(a4_00,1,ar6,ar7);
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
        a4_01 = (int *)*puVar5;
        puVar5 = puVar5 + 1;
        a7 = &uStack_24;
        (**(code **)(*a4_01 + 0x18))(a4_01,0,iVar4 * iVar3 * 2,a7);
        (*(code *)puVar1)(uStack_24,0,uStack_20,a7);
        iVar2 = (**(code **)(*a4_01 + 0x20))(a4_01,1,&uStack_24,a7);
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
      (*(code *)PTR_LAB_8c264c20)(*(undefined4 *)(ar4 + 0xc),0);
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
      (*(code *)PTR_LAB_8c264c20)(*(undefined4 *)(unaff_r13 + 0xc),0,ar6,ar7);
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
  
  iVar1 = (*(code *)PTR_LAB_8c264c24)(*(undefined4 *)(ar4 + 0xc));
  if (iVar1 < 1) {
    (*(code *)PTR_SUB_8c264c34)(*(undefined4 *)(ar4 + 0xc),0);
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
  
  iVar1 = (*(code *)PTR_LAB_8c264c24)(*(undefined4 *)(unaff_r14 + 0xc),ar5,ar6,ar7);
  if (iVar1 < 1) {
    (*(code *)PTR_SUB_8c264c34)(*(undefined4 *)(unaff_r14 + 0xc),0,ar6,ar7);
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
  int *a4;
  int iVar2;
  
  (*(code *)PTR_FUN_8c264c40)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_LAB_8c264c20)(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  uVar1 = 0;
  (*(code *)PTR_SUB_8c264c34)(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  (*(code *)PTR_FUN_8c264c44)(*(undefined4 *)(ar4 + 4),uVar1,ar6,ar7);
  if (*(int *)(ar4 + 8) != 0) {
    (*(code *)PTR_FUN_8c264c48)(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7);
    (**(code **)(**(int **)(ar4 + 0x14) + 0x14))(*(int **)(ar4 + 0x14),uVar1,ar6,ar7);
  }
  for (iVar2 = 0; iVar2 < *(char *)(ar4 + 3); iVar2 = iVar2 + 1) {
    a4 = *(int **)(iVar2 * 4 + ar4 + 0x18);
    (**(code **)(*a4 + 0x14))(a4,uVar1,ar6,ar7);
  }
  if (*(int *)(ar4 + 8) != 0) {
    uVar1 = 0;
    (*(code *)PTR_FUN_8c264e4c)(*(undefined4 *)(ar4 + 8),0,ar6,ar7);
    (*(code *)PTR_FUN_8c264e50)(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c264e54)(ar4,*(undefined4 *)(ar4 + 0x14),ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c264e58)();
  return uVar1;
}



/* FUN_8c264c92 @ 8c264c92 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c264c92(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  undefined4 a5;
  undefined4 a4;
  int iVar3;
  int iVar4;
  undefined4 a5_00;
  
  puVar2 = PTR_FUN_8c264e5c;
  cVar1 = *(char *)(ar4 + 1);
  a5 = (*(code *)PTR_sh4_tmu_1f88e6_8c264e60)(ar4,ar5,ar6,ar7);
  a5_00 = a5;
  a4 = (*(code *)PTR_FUN_8c264e68)(*(undefined4 *)PTR_DAT_8c264e64,a5,ar6,ar7);
  iVar3 = (*(code *)PTR_FUN_8c264e6c)(a4,a5_00,ar6,ar7);
  (*(code *)PTR_libgcc_divide_helper_010468_8c264e74)(iVar3,a5_00,ar6,ar7);
  iVar4 = (*(code *)PTR_libgcc_divide_helper_010468_8c264e74)(iVar3,a5_00,ar6,ar7);
  if (iVar3 < iVar4) {
    return iVar4;
  }
  *(undefined4 *)PTR_DAT_8c264e64 = a5;
  if (((cVar1 == '\x03') && (*(char *)(ar4 + 0x72) == '\0')) &&
     (iVar3 = (*(code *)PTR_FUN_8c264e78)(*(undefined4 *)(ar4 + 4),a5_00,ar6,ar7), iVar3 != 3)) {
    iVar3 = (*(code *)PTR_get_field_2c_2630fe_8c264e7c)(*(undefined4 *)(ar4 + 4),a5_00,ar6,ar7);
    if (*(int *)(ar4 + 100) == iVar3) {
      *(short *)(ar4 + 0x68) = *(short *)(ar4 + 0x68) + 1;
      if (*(int *)(ar4 + 0x38) * 5 < (int)*(short *)(ar4 + 0x68)) {
        *(undefined2 *)(ar4 + 0x60) = 0xfffe;
      }
    }
    else {
      *(undefined2 *)(ar4 + 0x68) = 0;
    }
    *(int *)(ar4 + 100) = iVar3;
    if (*(short *)(ar4 + 0x60) != 0) {
      if ((*(char *)(ar4 + 0x6d) == '\x01') || (*(char *)(ar4 + 0x6d) == '\x02')) {
        (*(code *)puVar2)(ar4,a5_00,ar6,ar7);
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
      (iVar3 = (*(code *)PTR_FUN_8c264e78)(*(undefined4 *)(ar4 + 4),a5_00,ar6,ar7), iVar3 != 3)))) {
    if (*(int *)(ar4 + 0x14) == 0) {
      iVar3 = 0;
    }
    else {
      a5_00 = 1;
      iVar3 = (**(code **)(**(int **)(ar4 + 0x14) + 0x24))(*(int **)(ar4 + 0x14),1,ar6,ar7);
    }
    if (iVar3 < 0x40) {
      *(short *)(ar4 + 0x6a) = *(short *)(ar4 + 0x6a) + 1;
      if (cVar1 == '\x03') {
        if (*(int *)(ar4 + 0x38) * 5 < (int)*(short *)(ar4 + 0x6a)) {
LAB_8c264dce:
          *(undefined2 *)(ar4 + 0x60) = 0xffff;
        }
      }
      else if (*(int *)(ar4 + 0x38) * 0x14 < (int)*(short *)(ar4 + 0x6a)) goto LAB_8c264dce;
      iVar3 = 0x60;
      if (*(short *)(ar4 + 0x60) == 0) goto LAB_8c264e04;
      if (*(char *)(ar4 + 0x6d) == '\x01') {
        (*(code *)puVar2)(ar4,a5_00,ar6,ar7);
      }
      else if (*(char *)(ar4 + 0x6d) == '\x02') {
        FUN_8c264ba0(ar4,a5_00,ar6,ar7);
      }
      iVar3 = 0x6d;
      if (*(char *)(ar4 + 0x6d) == '\0') goto LAB_8c264e04;
      *(undefined2 *)(ar4 + 0x60) = 0;
    }
  }
  iVar3 = 0x6a;
  *(undefined2 *)(ar4 + 0x6a) = 0;
LAB_8c264e04:
  if ((*(int *)(ar4 + 8) != 0) &&
     (iVar3 = (*(code *)PTR_FUN_8c264e80)(*(undefined4 *)(ar4 + 8),a5_00,ar6,ar7), iVar3 == 4)) {
    if (*(char *)(ar4 + 0x6d) == '\x01') {
      (*(code *)puVar2)(ar4,a5_00,ar6,ar7);
    }
    else if (*(char *)(ar4 + 0x6d) == '\x02') {
      FUN_8c264ba0(ar4,a5_00,ar6,ar7);
    }
    iVar3 = 0x6d;
    if (*(char *)(ar4 + 0x6d) != '\0') {
      *(undefined2 *)(ar4 + 0x60) = 0;
      iVar3 = 0x6a;
      *(undefined2 *)(ar4 + 0x6a) = 0;
    }
  }
  return iVar3;
}



/* FUN_8c264e84 @ 8c264e84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c264e84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 ar5_00;
  undefined4 unaff_r14;
  undefined4 in_PR;
  
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
    noop_264b9c(ar4,ar5,ar6,ar7);
  }
  puVar2 = PTR_FUN_8c264e5c;
  cVar1 = *(char *)(ar4 + 1);
  uVar3 = (*(code *)PTR_sh4_tmu_1f88e6_8c264e60)(in_PR,&DAT_8c278064,unaff_r14);
  ar5_00 = uVar3;
  uVar4 = (*(code *)PTR_FUN_8c264e68)(*(undefined4 *)PTR_DAT_8c264e64);
  iVar5 = (*(code *)PTR_FUN_8c264e6c)(uVar4);
  (*(code *)PTR_libgcc_divide_helper_010468_8c264e74)();
  iVar6 = (*(code *)PTR_libgcc_divide_helper_010468_8c264e74)();
  if (iVar5 < iVar6) {
    return iVar6;
  }
  *(undefined4 *)PTR_DAT_8c264e64 = uVar3;
  if (((cVar1 == '\x03') && (*(char *)(ar4 + 0x72) == '\0')) &&
     (iVar5 = (*(code *)PTR_FUN_8c264e78)(*(undefined4 *)(ar4 + 4)), iVar5 != 3)) {
    iVar5 = (*(code *)PTR_get_field_2c_2630fe_8c264e7c)(*(undefined4 *)(ar4 + 4));
    if (*(int *)(ar4 + 100) == iVar5) {
      *(short *)(ar4 + 0x68) = *(short *)(ar4 + 0x68) + 1;
      if (*(int *)(ar4 + 0x38) * 5 < (int)*(short *)(ar4 + 0x68)) {
        *(undefined2 *)(ar4 + 0x60) = 0xfffe;
      }
    }
    else {
      *(undefined2 *)(ar4 + 0x68) = 0;
    }
    *(int *)(ar4 + 100) = iVar5;
    if (*(short *)(ar4 + 0x60) != 0) {
      if ((*(char *)(ar4 + 0x6d) == '\x01') || (*(char *)(ar4 + 0x6d) == '\x02')) {
        (*(code *)puVar2)(ar4);
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
      (iVar5 = (*(code *)PTR_FUN_8c264e78)(*(undefined4 *)(ar4 + 4)), iVar5 != 3)))) {
    if (*(int *)(ar4 + 0x14) == 0) {
      iVar5 = 0;
    }
    else {
      piVar7 = *(int **)(ar4 + 0x14);
      ar5_00 = 1;
      iVar5 = (**(code **)(*piVar7 + 0x24))(piVar7,piVar7);
    }
    if (iVar5 < 0x40) {
      *(short *)(ar4 + 0x6a) = *(short *)(ar4 + 0x6a) + 1;
      if (cVar1 == '\x03') {
        if (*(int *)(ar4 + 0x38) * 5 < (int)*(short *)(ar4 + 0x6a)) {
LAB_8c264dce:
          *(undefined2 *)(ar4 + 0x60) = 0xffff;
        }
      }
      else if (*(int *)(ar4 + 0x38) * 0x14 < (int)*(short *)(ar4 + 0x6a)) goto LAB_8c264dce;
      iVar5 = 0x60;
      if (*(short *)(ar4 + 0x60) == 0) goto LAB_8c264e04;
      if (*(char *)(ar4 + 0x6d) == '\x01') {
        (*(code *)puVar2)(ar4);
      }
      else if (*(char *)(ar4 + 0x6d) == '\x02') {
        FUN_8c264ba0(ar4,ar5_00,ar6,ar7);
      }
      iVar5 = 0x6d;
      if (*(char *)(ar4 + 0x6d) == '\0') goto LAB_8c264e04;
      *(undefined2 *)(ar4 + 0x60) = 0;
    }
  }
  iVar5 = 0x6a;
  *(undefined2 *)(ar4 + 0x6a) = 0;
LAB_8c264e04:
  if ((*(int *)(ar4 + 8) != 0) &&
     (iVar5 = (*(code *)PTR_FUN_8c264e80)(*(undefined4 *)(ar4 + 8)), iVar5 == 4)) {
    if (*(char *)(ar4 + 0x6d) == '\x01') {
      (*(code *)puVar2)(ar4);
    }
    else if (*(char *)(ar4 + 0x6d) == '\x02') {
      FUN_8c264ba0(ar4,ar5_00,ar6,ar7);
    }
    iVar5 = 0x6d;
    if (*(char *)(ar4 + 0x6d) != '\0') {
      *(undefined2 *)(ar4 + 0x60) = 0;
      iVar5 = 0x6a;
      *(undefined2 *)(ar4 + 0x6a) = 0;
    }
  }
  return iVar5;
}



/* FUN_8c264e88 @ 8c264e88 callers=0 callees=5 */

/* WARNING: Unknown calling convention */

int FUN_8c264e88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 ar5_00;
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
    noop_264b9c(unaff_r14,ar5,ar6,ar7);
  }
  puVar2 = PTR_FUN_8c264e5c;
  cVar1 = *(char *)(unaff_r14 + 1);
  uVar3 = (*(code *)PTR_sh4_tmu_1f88e6_8c264e60)(in_PR);
  ar5_00 = uVar3;
  uVar4 = (*(code *)PTR_FUN_8c264e68)(*(undefined4 *)PTR_DAT_8c264e64);
  iVar5 = (*(code *)PTR_FUN_8c264e6c)(uVar4);
  (*(code *)PTR_libgcc_divide_helper_010468_8c264e74)();
  iVar6 = (*(code *)PTR_libgcc_divide_helper_010468_8c264e74)();
  if (iVar5 < iVar6) {
    return iVar6;
  }
  *(undefined4 *)PTR_DAT_8c264e64 = uVar3;
  if (((cVar1 == '\x03') && (*(char *)(unaff_r14 + 0x72) == '\0')) &&
     (iVar5 = (*(code *)PTR_FUN_8c264e78)(*(undefined4 *)(unaff_r14 + 4)), iVar5 != 3)) {
    iVar5 = (*(code *)PTR_get_field_2c_2630fe_8c264e7c)(*(undefined4 *)(unaff_r14 + 4));
    if (*(int *)(unaff_r14 + 100) == iVar5) {
      *(short *)(unaff_r14 + 0x68) = *(short *)(unaff_r14 + 0x68) + 1;
      if (*(int *)(unaff_r14 + 0x38) * 5 < (int)*(short *)(unaff_r14 + 0x68)) {
        *(undefined2 *)(unaff_r14 + 0x60) = 0xfffe;
      }
    }
    else {
      *(undefined2 *)(unaff_r14 + 0x68) = 0;
    }
    *(int *)(unaff_r14 + 100) = iVar5;
    if (*(short *)(unaff_r14 + 0x60) != 0) {
      if ((*(char *)(unaff_r14 + 0x6d) == '\x01') || (*(char *)(unaff_r14 + 0x6d) == '\x02')) {
        (*(code *)puVar2)();
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
      (iVar5 = (*(code *)PTR_FUN_8c264e78)(*(undefined4 *)(unaff_r14 + 4)), iVar5 != 3)))) {
    if (*(int *)(unaff_r14 + 0x14) == 0) {
      iVar5 = 0;
    }
    else {
      piVar7 = *(int **)(unaff_r14 + 0x14);
      ar5_00 = 1;
      iVar5 = (**(code **)(*piVar7 + 0x24))(piVar7,piVar7);
    }
    if (iVar5 < 0x40) {
      *(short *)(unaff_r14 + 0x6a) = *(short *)(unaff_r14 + 0x6a) + 1;
      if (cVar1 == '\x03') {
        if (*(int *)(unaff_r14 + 0x38) * 5 < (int)*(short *)(unaff_r14 + 0x6a)) {
LAB_8c264dce:
          *(undefined2 *)(unaff_r14 + 0x60) = 0xffff;
        }
      }
      else if (*(int *)(unaff_r14 + 0x38) * 0x14 < (int)*(short *)(unaff_r14 + 0x6a))
      goto LAB_8c264dce;
      iVar5 = 0x60;
      if (*(short *)(unaff_r14 + 0x60) == 0) goto LAB_8c264e04;
      if (*(char *)(unaff_r14 + 0x6d) == '\x01') {
        (*(code *)puVar2)();
      }
      else if (*(char *)(unaff_r14 + 0x6d) == '\x02') {
        FUN_8c264ba0(unaff_r14,ar5_00,ar6,ar7);
      }
      iVar5 = 0x6d;
      if (*(char *)(unaff_r14 + 0x6d) == '\0') goto LAB_8c264e04;
      *(undefined2 *)(unaff_r14 + 0x60) = 0;
    }
  }
  iVar5 = 0x6a;
  *(undefined2 *)(unaff_r14 + 0x6a) = 0;
LAB_8c264e04:
  if ((*(int *)(unaff_r14 + 8) != 0) &&
     (iVar5 = (*(code *)PTR_FUN_8c264e80)(*(undefined4 *)(unaff_r14 + 8)), iVar5 == 4)) {
    if (*(char *)(unaff_r14 + 0x6d) == '\x01') {
      (*(code *)puVar2)();
    }
    else if (*(char *)(unaff_r14 + 0x6d) == '\x02') {
      FUN_8c264ba0(unaff_r14,ar5_00,ar6,ar7);
    }
    iVar5 = 0x6d;
    if (*(char *)(unaff_r14 + 0x6d) != '\0') {
      *(undefined2 *)(unaff_r14 + 0x60) = 0;
      iVar5 = 0x6a;
      *(undefined2 *)(unaff_r14 + 0x6a) = 0;
    }
  }
  return iVar5;
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
  undefined4 a5;
  undefined4 *a4;
  int a4_00;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(iVar1 * 0x34 + DAT_8c265008) == 0) break;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  if (iVar1 == 8) {
    a4 = (undefined4 *)0x0;
  }
  else {
    a4 = (undefined4 *)(iVar1 * 0x34 + DAT_8c265008);
    (*(code *)PTR_memset_8c26500c)(a4,0,0x34,ar7);
    *a4 = 1;
    a5 = DAT_8c265010;
    a4_00 = (int)DAT_8c265006;
    a4[1] = iVar1;
    a4[2] = 0;
    a4[3] = 0;
    iVar1 = (int)a4 + 0x32;
    (*(code *)PTR_FUN_8c265014)(a4_00,a5,a4 + 0xc,iVar1);
    (*(code *)PTR_memset_8c26500c)(a4 + 10,0,8,iVar1);
  }
  return a4;
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

undefined4 FUN_8c264fa4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_00000000;
  
  if (*(int *)(ar4 + 0xc) == 0) {
    *(undefined4 *)(ar4 + 0x14) = 2;
    *(undefined4 *)(ar4 + 0x18) = ar5;
    *(undefined4 *)(ar4 + 0x1c) = ar6;
    *(undefined4 *)(ar4 + 0x20) = ar7;
    *(undefined4 *)(ar4 + 0x24) = in_stack_00000000;
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
  int a7;
  undefined4 a4;
  undefined4 a5;
  undefined4 a6;
  
  if (*(int *)(ar4 + 0xc) == 1) {
    *(undefined4 *)(ar4 + 0xc) = 2;
  }
  uVar1 = *(uint *)(ar4 + 0xc);
  if (uVar1 == 2) {
    if (*(int *)(ar4 + 0x14) == 1) {
      uVar1 = (*(code *)PTR_FUN_8c2650e0)
                        (*(undefined4 *)(ar4 + 0x18),*(undefined4 *)(ar4 + 0x1c),
                         *(undefined4 *)(ar4 + 0x20),ar4 + 0x28);
      *(uint *)(ar4 + 0x10) = uVar1;
    }
    else {
      a7 = ar4 + 0x28;
      a5 = *(undefined4 *)(ar4 + 0x1c);
      a6 = *(undefined4 *)(ar4 + 0x20);
      a4 = *(undefined4 *)(ar4 + 0x18);
      uVar1 = (*(code *)PTR_FUN_8c2650e4)(a4,a5,a6,a7);
      *(uint *)(ar4 + 0x10) = uVar1;
      if ((int)uVar1 < 0) {
        uVar1 = ~(~uVar1 + 1 & 1) + 1;
      }
      else {
        uVar1 = uVar1 & 1;
      }
      if (uVar1 == 1) {
        uVar1 = FUN_8c264ffc(a4,a5,a6,a7);
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
  int a5;
  uint a4;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_8c265158;
  a5 = (int)DAT_8c265152;
  *(uint *)PTR_DAT_8c265158 = DAT_8c26515c & 0xffffffe0;
  a4 = DAT_8c265160 & 0xffffffe0;
  (*(code *)PTR_FUN_8c265168)(DAT_8c265164,0x40,ar6,ar7);
  uVar2 = 0x40;
  (*(code *)PTR_FUN_8c265170)(DAT_8c26516c,0x40,ar6,ar7);
  (*(code *)PTR_FUN_8c265174)(a4,uVar2,ar6,ar7);
  uVar2 = DAT_8c265178;
  (*(code *)PTR_FUN_8c26517c)(DAT_8c265178,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c265180)(uVar2,a5,ar6,ar7);
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
  char *a5;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char acStack_24 [8];
  
  a5 = acStack_24;
  iVar6 = *(int *)PTR_DAT_8c265258;
  iVar1 = DAT_8c26525c;
  if ((iVar6 != 0) && (iVar5 = DAT_8c26524e + iVar6, iVar1 = DAT_8c265264, *(int *)(iVar5 + 8) != 1)
     ) {
    iVar6 = *(int *)(DAT_8c265250 + iVar6);
    (*(code *)PTR_FUN_8c265260)(iVar6,acStack_24,ar6,ar7);
    iVar1 = DAT_8c265264;
    if (acStack_24[0] == '\0') {
      iVar3 = 0;
      iVar4 = *(int *)((int)DAT_8c265252 + *(int *)PTR_DAT_8c265258);
      iVar2 = 0;
      if (0 < iVar4) {
        do {
          iVar1 = *(int *)(iVar5 + 0x1c);
          *(int *)(iVar5 + 0x1c) = iVar1 + 1;
          iVar6 = iVar1 * 0x1c + *(int *)(iVar5 + 0xc);
          if (*(int *)(iVar5 + 0x1c) == iVar4) {
            *(undefined4 *)(iVar5 + 0x1c) = 0;
          }
          if (*(int *)(iVar6 + 0x14) == 1) {
            iVar1 = (*(code *)PTR_FUN_8c265268)(iVar6,a5,ar6,ar7);
            if (iVar1 != 0) goto LAB_8c26522c;
            iVar3 = iVar3 + 1;
            if ((iVar3 == 0x20) || (*(int *)((int)DAT_8c265254 + *(int *)PTR_DAT_8c265258) == 0))
            break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar4);
      }
      iVar1 = (*(code *)PTR_FUN_8c26526c)(iVar6,a5,ar6,ar7);
    }
  }
LAB_8c26522c:
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c265274)(PTR_FUN_8c265270,iVar1,ar6,ar7);
  }
  return iVar1;
}



/* aica_reg_265278 @ 8c265278 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 aica_reg_265278(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *a4;
  undefined4 a5;
  int iVar1;
  
  (*(code *)PTR_FUN_8c2652ec)(DAT_8c2652e8,DAT_8c2652e4,4,1);
  a5 = DAT_8c2652e8;
  a4 = DAT_8c2652e4;
  *DAT_8c2652e4 = *DAT_8c2652e4 | 1;
  (*(code *)PTR_FUN_8c2652f0)(a4,a5,4,1);
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
  undefined *a4;
  undefined4 a5;
  int iVar1;
  
  (*(code *)PTR_FUN_8c26536c)(DAT_8c265368,PTR_DAT_8c265364,4,1);
  a5 = DAT_8c265368;
  a4 = PTR_DAT_8c265364;
  *(uint *)PTR_DAT_8c265364 = *(uint *)PTR_DAT_8c265364 & 0xfffffffe;
  (*(code *)PTR_FUN_8c265370)(a4,a5,4,1);
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
  int a5;
  int *a6;
  int *a7;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  char cStack_c;
  
  a6 = &iStack_1c;
  a7 = &iStack_18;
  uStack_14 = ar4;
  uStack_10 = ar5;
  cStack_c = (char)ar6;
  a5 = (*(code *)PTR_FUN_8c2653cc)(ar5,(int)(char)ar6,&iStack_1c,a7);
  if (((a5 == 0) && (a5 = DAT_8c2653d0, iStack_1c != 0)) && (0 < iStack_18)) {
    a5 = (*(code *)PTR_FUN_8c2653d4)(uStack_14,iStack_1c,a6,a7);
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c2653dc)(PTR_FUN_8c2653d8,a5,a6,a7);
  }
  return a5;
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
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int a4;
  int *unaff_r14;
  
  puVar1 = PTR_FUN_8c2654e4;
  iVar3 = *unaff_r14;
  iVar2 = DAT_8c2654e0;
  if (iVar3 != 0) {
    iVar2 = (int)DAT_8c2654ba;
    iVar4 = *(int *)(DAT_8c2654b8 + iVar3);
    a4 = iVar4 + 0x20;
    *(int *)(DAT_8c2654b8 + -0x1c + iVar3) = a4;
    (*(code *)puVar1)(a4,*unaff_r14 + iVar2,ar6,ar7);
    (*(code *)puVar1)(iVar4 + 0x21,*unaff_r14 + (int)DAT_8c2654bc,ar6,ar7);
    if ((*(char *)(*unaff_r14 + (int)DAT_8c2654ba) == '\x01') &&
       (*(char *)((int)DAT_8c2654bc + *unaff_r14) == '\0')) {
      iVar4 = iVar4 + 0x23;
    }
    else {
      iVar4 = iVar4 + 0x22;
    }
    (*(code *)puVar1)(iVar4,(int)DAT_8c2654be + *unaff_r14,ar6,ar7);
    iVar2 = (int)DAT_8c2654c4;
    *(undefined1 *)((int)DAT_8c2654c0 + *unaff_r14) = 0;
    puVar1 = PTR_aica_ram_268618_8c2654e8;
    (*(code *)PTR_aica_ram_268618_8c2654e8)(iVar2 + a4,*unaff_r14 + (int)DAT_8c2654c2,ar6,ar7);
    (*(code *)puVar1)(DAT_8c2654c8 + a4,*unaff_r14 + (int)DAT_8c2654c6,ar6,ar7);
    (*(code *)puVar1)(DAT_8c2654cc + a4,*unaff_r14 + (int)DAT_8c2654ca,ar6,ar7);
    (*(code *)puVar1)(DAT_8c2654d0 + a4,*unaff_r14 + (int)DAT_8c2654ce,ar6,ar7);
    (*(code *)puVar1)(DAT_8c2654d4 + a4,*unaff_r14 + (int)DAT_8c2654d2,ar6,ar7);
    (*(code *)puVar1)(DAT_8c2654d8 + a4,*unaff_r14 + (int)DAT_8c2654d6,ar6,ar7);
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_8c2654f0)(PTR_FUN_8c2654ec,iVar2,ar6,ar7);
  }
  return iVar2;
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

/* WARNING: Unknown calling convention */

int FUN_8c2654fc(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 a4;
  int iVar2;
  int unaff_r12;
  int *piVar3;
  
  iVar2 = DAT_8c2655ac;
  if ((((unaff_r12 != 0) &&
       (piVar3 = *(int **)(unaff_r12 + 8), iVar2 = DAT_8c2655b4, *piVar3 == DAT_8c2655b0)) &&
      (iVar2 = DAT_8c2655b8, (char)piVar3[1] == '\x01')) && (*(char *)((int)piVar3 + 5) < '\x02')) {
    (*(code *)PTR_aica_reg_265278_8c2655bc)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_aica_ram_2684b8_8c2655c0)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c2655c8)(PTR_DAT_8c2655c4,ar5,ar6,ar7);
    ar7 = 0xffffffff;
    ar6 = piVar3[2];
    (*(code *)PTR_FUN_8c2655cc)(*(undefined4 *)PTR_DAT_8c2655c4,piVar3 + 8,ar6,0xffffffff);
    ar5 = 0;
    a4 = *(undefined4 *)PTR_DAT_8c2655c4;
    (*(code *)PTR_FUN_8c2655d0)(a4,0,ar6,ar7);
    (*(code *)PTR_aica_reg_2652f4_8c2655d4)(a4,ar5,ar6,ar7);
    puVar1 = PTR_FUN_8c2655e0;
    for (iVar2 = DAT_8c2655d8; iVar2 != 0; iVar2 = iVar2 + -1) {
    }
    *(undefined4 *)PTR_DAT_8c2655dc = 1;
    (*(code *)puVar1)(0,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c2655e4)(unaff_r12,ar5,ar6,ar7);
    iVar2 = 0;
  }
  if (*(int *)PTR_DAT_8c2655c4 != 0) {
    (*(code *)PTR_FUN_8c2655e8)(*(undefined4 *)PTR_DAT_8c2655c4,ar5,ar6,ar7);
  }
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_8c2655f0)(PTR_FUN_8c2655ec,iVar2,ar6,ar7);
  }
  return iVar2;
}



/* FUN_8c2655f4 @ 8c2655f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2655f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  
  a5 = (*(code *)PTR_FUN_8c265614)(0,ar5,ar6,ar7);
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c26561c)(PTR_FUN_8c265618,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c265620 @ 8c265620 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265620(int ar4,undefined4 ar5,undefined4 ar6,undefined *ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  int iStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  
  puVar1 = PTR_DAT_8c2656dc;
  uStack_18 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  iVar2 = DAT_8c2656e0;
  uStack_1c = ar5;
  if (((*(int *)PTR_DAT_8c2656dc != 0) && (iVar2 = DAT_8c2656e4, ar4 != 0)) &&
     ((*(code *)PTR_FUN_8c2656e8)(ar4,&iStack_20,ar6,ar7), puVar4 = PTR_FUN_8c2656f0,
     iVar2 = DAT_8c2656ec, iStack_20 != 2)) {
    *(undefined4 *)(ar4 + 0x18) = 0;
    iVar2 = (*(code *)puVar4)(ar4,2,ar6,ar7);
    puVar4 = PTR_FUN_8c2656f4;
    if (iVar2 == 0) {
      iVar2 = (int)DAT_8c2656d8;
      *(int *)(iVar2 + *(int *)puVar1) = ar4;
      iVar2 = iVar2 + -8;
      iVar3 = *(int *)puVar1;
      *(int *)(iVar2 + iVar3) = *(int *)(iVar2 + iVar3) + 1;
      ar6 = *(undefined4 *)(ar4 + 0xc);
      iVar2 = (*(code *)PTR_aica_ram_266970_8c2656f8)(*(undefined4 *)(ar4 + 8),uStack_1c,ar6,puVar4)
      ;
      ar7 = puVar4;
    }
  }
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_8c265700)(PTR_FUN_8c2656fc,iVar2,ar6,ar7);
  }
  return iVar2;
}



/* FUN_8c265704 @ 8c265704 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265704(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = DAT_8c265770;
  piVar3 = *(int **)((int)DAT_8c265762 + *(int *)PTR_DAT_8c265768);
  iVar4 = DAT_8c26576c;
  if (*(int *)PTR_DAT_8c265768 != 0) {
    iVar4 = 0;
    do {
      if (*piVar3 != 1) {
        (*(code *)PTR_FUN_8c265778)();
        puVar1 = PTR_DAT_8c265768;
        iVar2 = (int)DAT_8c265764;
        *ar4 = piVar3;
        *(int *)(iVar2 + *(int *)puVar1) = *(int *)(iVar2 + *(int *)puVar1) + 1;
        iVar4 = 0;
        goto LAB_8c26574e;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 8;
    } while (iVar4 < 0x40);
    *ar4 = 0;
    iVar4 = iVar2;
  }
LAB_8c26574e:
  if (iVar4 != 0) {
    (*(code *)PTR_FUN_8c265780)(PTR_FUN_8c26577c,iVar4);
  }
  return iVar4;
}



/* FUN_8c26570c @ 8c26570c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26570c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int in_r1;
  int *in_r3;
  int *a5;
  int a6;
  int unaff_r14;
  
  iVar2 = DAT_8c265770;
  a5 = *(int **)((int)DAT_8c265762 + *in_r3);
  if (*in_r3 == 0) {
    a6 = 0;
    iVar2 = DAT_8c26576c;
  }
  else {
    ar7 = 0x40;
    a6 = in_r1;
    do {
      if (*a5 != 1) {
        (*(code *)PTR_FUN_8c265778)(ar4,a5,a6,0x40);
        puVar1 = PTR_DAT_8c265768;
        iVar2 = (int)DAT_8c265764;
        *ar4 = (int)a5;
        *(int *)(iVar2 + *(int *)puVar1) = *(int *)(iVar2 + *(int *)puVar1) + 1;
        iVar2 = unaff_r14;
        goto LAB_8c26574e;
      }
      a6 = a6 + 1;
      a5 = a5 + 8;
    } while (a6 < 0x40);
    *ar4 = in_r1;
  }
LAB_8c26574e:
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_8c265780)(PTR_FUN_8c26577c,iVar2,a6,ar7);
  }
  return iVar2;
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

int FUN_8c26578c(int *ar4,undefined4 ar5,int ar6,int ar7)

{
  undefined *puVar1;
  int iVar2;
  int *in_r2;
  int unaff_r14;
  int a5;
  
  iVar2 = DAT_8c2657e0;
  puVar1 = PTR_DAT_8c2657d8;
  a5 = DAT_8c2657dc;
  if (((*in_r2 != 0) && (ar7 = iVar2, a5 = DAT_8c2657e0, ar4 != (int *)0x0)) && (*ar4 == 1)) {
    iVar2 = (int)DAT_8c2657d4;
    *ar4 = ar6;
    *(int *)(iVar2 + *(int *)puVar1) = *(int *)(iVar2 + *(int *)puVar1) + -1;
    a5 = unaff_r14;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c2657e8)(PTR_FUN_8c2657e4,a5,ar6,ar7);
  }
  return a5;
}



/* aica_ram_2657ec @ 8c2657ec callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int aica_ram_2657ec(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 a5;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  int iStack_24;
  uint uStack_20;
  int iStack_1c;
  
  puVar1 = PTR_DAT_8c2658f4;
  uStack_20 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  iVar3 = DAT_8c2658f8;
  iStack_1c = ar5;
  if (((*(int *)PTR_DAT_8c2658f4 != 0) && (iVar3 = DAT_8c2658fc, ar4 != 0)) &&
     ((*(code *)PTR_FUN_8c265900)(ar4,&iStack_24,ar6,ar7), iVar5 = DAT_8c265910,
     piVar2 = DAT_8c265908, iVar3 = DAT_8c265904, iStack_24 != 2)) {
    iVar3 = (int)DAT_8c2658ee;
    *DAT_8c265908 = 0;
    *(undefined4 *)(ar4 + 0x18) = 0;
    iVar5 = iStack_1c + iVar5;
    ar7 = *(undefined4 *)(ar4 + 0xc);
    ar6 = *(undefined4 *)(ar4 + 8);
    uVar4 = *(undefined4 *)(iVar3 + *(int *)puVar1);
    iVar3 = (*(code *)PTR_FUN_8c265914)(uVar4,iVar5,ar6,ar7);
    *piVar2 = iVar3;
    if (iVar3 != 0) {
      FUN_8c2658e2(uVar4,iVar5,ar6,ar7);
    }
    iVar3 = (*(code *)PTR_FUN_8c265918)(ar4,2,ar6,ar7);
    if (iVar3 == 0) {
      iVar5 = (int)DAT_8c2658f0;
      a5 = 0;
      *(int *)(iVar5 + *(int *)puVar1) = ar4;
      *(int *)(iVar5 + -8 + *(int *)puVar1) = *(int *)(iVar5 + -8 + *(int *)puVar1) + 1;
      uVar4 = *(undefined4 *)(iVar5 + 0x1c + *(int *)puVar1);
      iVar5 = (*(code *)PTR_FUN_8c26591c)(uVar4,0,ar6,ar7);
      *piVar2 = iVar5;
      if (iVar5 != 0) {
        FUN_8c2658e2(uVar4,a5,ar6,ar7);
      }
    }
  }
  if (iVar3 != 0) {
    (*(code *)PTR_FUN_8c265924)(PTR_aica_ram_2657ec_8c265920,iVar3,ar6,ar7);
  }
  return iVar3;
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
  int a5;
  char in_T;
  
  a5 = DAT_8c265a20;
  if ((in_T == '\0') && (a5 = unaff_r13, *(int *)(ar4 + 0x10) != 0)) {
    if (*(int *)(ar4 + 0x10) == -1) {
      *(undefined4 *)(ar4 + 0x18) = 1;
    }
    else {
      (**(code **)(ar4 + 0x10))(*(undefined4 *)(ar4 + 0x14),ar5,ar6,ar7);
    }
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c265a28)(PTR_FUN_8c265a24,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c265a2c @ 8c265a2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265a2c(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  
  (*(code *)PTR_FUN_8c265a9c)(ar4,ar5,ar6,ar7);
  a5 = DAT_8c265aa0;
  if ((ar4 != 0) && (a5 = DAT_8c265aa4, ar5 != (undefined4 *)0x0)) {
    *ar5 = *(undefined4 *)(ar4 + 4);
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c265aac)(PTR_FUN_8c265aa8,a5,ar6,ar7);
  }
  return a5;
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

/* WARNING: Unknown calling convention */

int FUN_8c265ac8(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_8c265b4c;
  iVar2 = DAT_8c265b50;
  if (*(int *)PTR_DAT_8c265b4c != 0) {
    iVar2 = (int)DAT_8c265b48;
    iVar3 = (int)DAT_8c265b48;
    *(undefined4 *)(iVar2 + *(int *)PTR_DAT_8c265b4c) = ar4;
    iVar4 = 0;
    *(int *)(iVar2 + 4 + *(int *)puVar1) = ar5;
    *(undefined4 *)(iVar2 + 8 + *(int *)puVar1) = 0;
    *(undefined4 *)(iVar2 + 0xc + *(int *)puVar1) = 0;
    *(undefined4 *)(iVar2 + 0x10 + *(int *)puVar1) = 0;
    *(undefined4 *)(iVar2 + 0x14 + *(int *)puVar1) = 0;
    *DAT_8c265b54 = iVar3 + *(int *)puVar1;
    iVar3 = 0;
    iVar2 = 0;
    if (0 < ar5) {
      do {
        (*(code *)PTR_FUN_8c265b5c)(iVar3);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x20;
      } while (iVar4 < ar5);
    }
  }
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_8c265b64)(PTR_FUN_8c265b60,iVar2);
  }
  return iVar2;
}



/* FUN_8c265ace @ 8c265ace callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265ace(undefined4 ar4,int ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int a7;
  int iVar3;
  
  a7 = ar7;
  iVar1 = DAT_8c265b50;
  if (*ar6 != 0) {
    iVar1 = (int)DAT_8c265b48;
    iVar2 = (int)DAT_8c265b48;
    *(undefined4 *)(iVar1 + *ar6) = ar4;
    *(int *)(iVar1 + 4 + *ar6) = ar5;
    *(int *)(iVar1 + 8 + *ar6) = ar7;
    *(int *)(iVar1 + 0xc + *ar6) = ar7;
    *(int *)(iVar1 + 0x10 + *ar6) = ar7;
    *(int *)(iVar1 + 0x14 + *ar6) = ar7;
    *DAT_8c265b54 = iVar2 + *ar6;
    iVar2 = ar7;
    iVar3 = ar7;
    iVar1 = ar7;
    if (0 < ar5) {
      do {
        (*(code *)PTR_FUN_8c265b5c)(iVar2,ar5,ar6,a7);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x20;
      } while (iVar3 < ar5);
    }
  }
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c265b64)(PTR_FUN_8c265b60,iVar1,ar6,a7);
  }
  return iVar1;
}



/* FUN_8c265b68 @ 8c265b68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265b68(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c265b9c;
  if (*DAT_8c265b98 != 0) {
    *ar4 = *(undefined4 *)((int)DAT_8c265b96 + *DAT_8c265b98);
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c265ba4)(PTR_FUN_8c265ba0,iVar1);
  }
  return iVar1;
}



/* FUN_8c265b6a @ 8c265b6a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265b6a(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r3;
  int a5;
  
  a5 = DAT_8c265b9c;
  if (*in_r3 != 0) {
    *ar4 = *(undefined4 *)((int)DAT_8c265b96 + *in_r3);
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c265ba4)(PTR_FUN_8c265ba0,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c265ba8 @ 8c265ba8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265ba8(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_8c265c2c;
  iVar4 = DAT_8c265c30;
  if (*(int *)PTR_DAT_8c265c2c != 0) {
    iVar4 = (int)DAT_8c265c2a;
    iVar5 = (int)DAT_8c265c2a;
    *(undefined4 *)(iVar4 + *(int *)PTR_DAT_8c265c2c) = ar4;
    puVar2 = DAT_8c265c38;
    iVar6 = 0;
    *(int *)(iVar4 + 4 + *(int *)puVar1) = ar5;
    *(undefined4 *)(iVar4 + 8 + *(int *)puVar1) = 0;
    *(undefined4 *)(iVar4 + 0xc + *(int *)puVar1) = 0;
    *(undefined4 *)(iVar4 + 0x10 + *(int *)puVar1) = 0;
    *DAT_8c265c34 = iVar5 + *(int *)puVar1;
    piVar3 = DAT_8c265c3c;
    *puVar2 = ar4;
    *piVar3 = ar5;
    iVar5 = 0;
    iVar4 = 0;
    if (0 < ar5) {
      do {
        (*(code *)PTR_FUN_8c265c44)(iVar5);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 8;
      } while (iVar6 < ar5);
    }
  }
  if (iVar4 != 0) {
    (*(code *)PTR_FUN_8c265c4c)(PTR_FUN_8c265c48,iVar4);
  }
  return iVar4;
}



/* FUN_8c265bae @ 8c265bae callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265bae(undefined4 ar4,int ar5,int *ar6,int ar7)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int a7;
  int iVar5;
  
  a7 = ar7;
  iVar3 = DAT_8c265c30;
  if (*ar6 != 0) {
    iVar3 = (int)DAT_8c265c2a;
    iVar4 = (int)DAT_8c265c2a;
    *(undefined4 *)(iVar3 + *ar6) = ar4;
    puVar1 = DAT_8c265c38;
    *(int *)(iVar3 + 4 + *ar6) = ar5;
    *(int *)(iVar3 + 8 + *ar6) = ar7;
    *(int *)(iVar3 + 0xc + *ar6) = ar7;
    *(int *)(iVar3 + 0x10 + *ar6) = ar7;
    *DAT_8c265c34 = iVar4 + *ar6;
    piVar2 = DAT_8c265c3c;
    *puVar1 = ar4;
    *piVar2 = ar5;
    iVar4 = ar7;
    iVar3 = ar7;
    iVar5 = ar7;
    if (0 < ar5) {
      do {
        (*(code *)PTR_FUN_8c265c44)(iVar4,ar5,ar6,a7);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 8;
      } while (iVar5 < ar5);
    }
  }
  if (iVar3 != 0) {
    (*(code *)PTR_FUN_8c265c4c)(PTR_FUN_8c265c48,iVar3,ar6,a7);
  }
  return iVar3;
}



/* FUN_8c265c50 @ 8c265c50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265c50(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a6;
  int iVar1;
  int a7;
  
  a6 = PTR_DAT_8c265d28;
  a7 = *(int *)PTR_DAT_8c265d28;
  iVar1 = DAT_8c265d2c;
  if (a7 != 0) {
    iVar1 = (int)DAT_8c265d24;
    *ar4 = *(undefined4 *)(*(int *)(iVar1 + a7) * 8 + *(int *)(iVar1 + -0xc + a7));
    *ar5 = *(undefined4 *)
            (*(int *)(iVar1 + *(int *)a6) * 8 + *(int *)(iVar1 + -0xc + *(int *)a6) + 4);
    *(undefined4 *)(*(int *)(iVar1 + *(int *)a6) * 8 + *(int *)(iVar1 + -0xc + *(int *)a6)) = 0;
    *(undefined4 *)(*(int *)(iVar1 + *(int *)a6) * 8 + *(int *)(iVar1 + -0xc + *(int *)a6) + 4) = 0;
    *(int *)(iVar1 + *(int *)a6) = *(int *)(iVar1 + *(int *)a6) + 1;
    if (*(int *)(iVar1 + *(int *)a6) == *(int *)(iVar1 + -8 + *(int *)a6)) {
      *(undefined4 *)((int)DAT_8c265d24 + *(int *)a6) = 0;
    }
    *(int *)((int)DAT_8c265d26 + *(int *)a6) = *(int *)((int)DAT_8c265d26 + *(int *)a6) + -1;
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c265d34)(PTR_FUN_8c265d30,iVar1,a6,a7);
  }
  return iVar1;
}



/* FUN_8c265d38 @ 8c265d38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c265d38(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a6;
  int iVar1;
  int a7;
  
  a6 = PTR_DAT_8c265df4;
  a7 = *(int *)PTR_DAT_8c265df4;
  iVar1 = DAT_8c265df8;
  if ((a7 != 0) &&
     (iVar1 = DAT_8c265dfc, *(int *)(DAT_8c265dee + a7) < *(int *)(DAT_8c265dee + -0xc + a7))) {
    iVar1 = (int)DAT_8c265df0;
    *(undefined4 *)(*(int *)(iVar1 + a7) * 8 + *(int *)(iVar1 + -8 + a7)) = ar4;
    *(undefined4 *)(*(int *)(iVar1 + *(int *)a6) * 8 + *(int *)(iVar1 + -8 + *(int *)a6) + 4) = ar5;
    *(int *)(iVar1 + *(int *)a6) = *(int *)(iVar1 + *(int *)a6) + 1;
    if (*(int *)(iVar1 + *(int *)a6) == *(int *)(iVar1 + -4 + *(int *)a6)) {
      *(undefined4 *)((int)DAT_8c265df0 + *(int *)a6) = 0;
    }
    *(int *)((int)DAT_8c265dee + *(int *)a6) = *(int *)((int)DAT_8c265dee + *(int *)a6) + 1;
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c265e04)(PTR_FUN_8c265e00,iVar1,a6,a7);
  }
  return iVar1;
}



/* FUN_8c265e08 @ 8c265e08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c265e08(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *a5;
  char in_IMASK;
  char in_S;
  byte in_T;
  int aiStack_10 [2];
  
  a5 = aiStack_10;
  if ((((*(int *)PTR_DAT_8c265e74 != 0) &&
       ((byte)((in_T | in_S << 1) & 0xf0 | in_IMASK << 4) == 0xf0)) &&
      ((*(code *)PTR_FUN_8c265e78)
                 (*(undefined4 *)((int)DAT_8c265e6e + *(int *)PTR_DAT_8c265e74),aiStack_10,ar6,ar7),
      aiStack_10[0] == 0)) && (*(int *)((int)DAT_8c265e70 + *(int *)PTR_DAT_8c265e74) != 0)) {
    (*(code *)PTR_FUN_8c265e7c)
              (*(undefined4 *)((int)DAT_8c265e6e + *(int *)PTR_DAT_8c265e74),a5,ar6,ar7);
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

int FUN_8c265ea0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  undefined4 in_stack_00000000;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  
  uStack_10 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  a5 = DAT_8c265f4c;
  uStack_1c = ar6;
  uStack_18 = ar7;
  uStack_14 = ar5;
  if (((*(int *)PTR_DAT_8c265f48 != 0) && (a5 = DAT_8c265f50, ar4 != 0)) &&
     ((*(code *)PTR_FUN_8c265f54)(ar4,&iStack_20,ar6,ar7), a5 = DAT_8c265f58, iStack_20 != 2)) {
    (*(code *)PTR_FUN_8c265f5c)(ar4,0,ar6,ar7);
    (*(code *)PTR_FUN_8c265f60)(ar4,uStack_14,ar6,ar7);
    (*(code *)PTR_FUN_8c265f64)(ar4,uStack_1c,ar6,ar7);
    (*(code *)PTR_FUN_8c265f68)(ar4,uStack_18,in_stack_00000000,ar7);
    (*(code *)PTR_FUN_8c265f5c)(ar4,0,in_stack_00000000,ar7);
    ar6 = in_stack_00000000;
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c265f70)(PTR_FUN_8c265f6c,a5,ar6,ar7);
  }
  return a5;
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

/* WARNING: Unknown calling convention */

int FUN_8c265ff4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 a4;
  undefined4 a5;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  puVar1 = PTR_DAT_8c2660bc;
  uStack_1c = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  iVar4 = DAT_8c2660c0;
  uStack_20 = ar5;
  if (((*(int *)PTR_DAT_8c2660bc != 0) && (iVar4 = DAT_8c2660c4, ar4 != 0)) &&
     ((*(code *)PTR_FUN_8c2660c8)(ar4,&iStack_24,ar6,ar7), iVar4 = DAT_8c2660cc, iStack_24 != 2)) {
    iVar4 = (int)DAT_8c2660b8;
    *DAT_8c2660d0 = 0;
    *(undefined4 *)(ar4 + 0x18) = 0;
    iVar3 = *(int *)(*(int *)puVar1 + iVar4);
    if (iVar3 == 0) {
      iVar4 = (*(code *)PTR_FUN_8c2660d4)(ar4,uStack_20,ar6,ar7);
      if (iVar4 == 0) {
        return 0;
      }
    }
    else {
      iVar4 = 0;
      if (((iVar3 == 1) && (iVar4 = (*(code *)PTR_FUN_8c2660d8)(ar4,uStack_20,ar6,ar7), iVar4 == 0))
         && (*(int *)((int)DAT_8c2660ba + *(int *)puVar1) == 0)) {
        (*(code *)PTR_FUN_8c2660dc)(&uStack_2c,&uStack_28,ar6,ar7);
        iVar4 = (*(code *)PTR_aica_ram_2657ec_8c2660e0)(uStack_2c,uStack_28,ar6,ar7);
        puVar2 = PTR_noop_2658de_8c2660e8;
        puVar1 = PTR_FUN_8c2660e4;
        if ((iVar4 == 0) && (a4 = uStack_2c, a5 = uStack_28, *(int *)(ar4 + 0x10) == -1)) {
          while (*(int *)(ar4 + 0x18) != 1) {
            (*(code *)puVar1)(a4,a5,ar6,ar7);
            (*(code *)puVar2)(a4,a5,ar6,ar7);
          }
        }
      }
    }
  }
  if (iVar4 != 0) {
    (*(code *)PTR_FUN_8c266130)(PTR_FUN_8c26612c,iVar4,ar6,ar7);
  }
  return iVar4;
}



/* FUN_8c266134 @ 8c266134 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266134(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  
  a5 = DAT_8c266190;
  puStack_c = ar5;
  if ((*(int *)PTR_DAT_8c26618c != 0) && (a5 = DAT_8c266194, ar4 != 0)) {
    (*(code *)PTR_aica_ram_268618_8c266198)
              (*(char *)(ar4 + 1) * 0x20 + *(int *)((int)DAT_8c26618a + *(int *)PTR_DAT_8c26618c) +
               0x18,&uStack_10,ar6,ar7);
    *puStack_c = uStack_10;
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c2661a0)(PTR_FUN_8c26619c,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c2661a4 @ 8c2661a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2661a4(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  undefined1 auStack_10 [4];
  undefined1 *puStack_c;
  
  a5 = DAT_8c266200;
  puStack_c = ar5;
  if ((*(int *)PTR_DAT_8c2661fc != 0) && (a5 = DAT_8c266204, ar4 != 0)) {
    (*(code *)PTR_FUN_8c266208)
              (*(char *)(ar4 + 1) * 0x20 + *(int *)((int)DAT_8c2661fa + *(int *)PTR_DAT_8c2661fc) +
               0x11,auStack_10,ar6,ar7);
    *puStack_c = auStack_10[0];
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c266210)(PTR_LAB_8c26620c,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c266214 @ 8c266214 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266214(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  ushort auStack_10 [2];
  uint *puStack_c;
  
  a5 = DAT_8c266274;
  puStack_c = ar5;
  if ((*(int *)PTR_DAT_8c266270 != 0) && (a5 = DAT_8c266278, ar4 != 0)) {
    (*(code *)PTR_FUN_8c26627c)
              (*(char *)(ar4 + 1) * 0x20 + *(int *)((int)DAT_8c26626c + *(int *)PTR_DAT_8c266270) +
               0x1c,auStack_10,ar6,ar7);
    *puStack_c = (uint)auStack_10[0];
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c266284)(PTR_FUN_8c266280,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c266288 @ 8c266288 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266288(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  byte abStack_10 [4];
  uint *puStack_c;
  
  a5 = DAT_8c2662e4;
  puStack_c = ar5;
  if ((*(int *)PTR_DAT_8c2662e0 != 0) && (a5 = DAT_8c2662e8, ar4 != 0)) {
    (*(code *)PTR_FUN_8c2662ec)
              (*(char *)(ar4 + 1) * 0x20 + *(int *)((int)DAT_8c2662de + *(int *)PTR_DAT_8c2662e0),
               abStack_10,ar6,ar7);
    *puStack_c = (uint)abStack_10[0];
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c2662f4)(PTR_FUN_8c2662f0,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c2662f8 @ 8c2662f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2662f8(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  undefined1 auStack_10 [4];
  undefined1 *puStack_c;
  
  a5 = DAT_8c266354;
  puStack_c = ar5;
  if ((*(int *)PTR_DAT_8c266350 != 0) && (a5 = DAT_8c266358, ar4 != 0)) {
    (*(code *)PTR_FUN_8c26635c)
              (*(char *)(ar4 + 1) * 0x20 + *(int *)((int)DAT_8c26634e + *(int *)PTR_DAT_8c266350) +
               0x10,auStack_10,ar6,ar7);
    *puStack_c = auStack_10[0];
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c266364)(PTR_FUN_8c266360,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c266368 @ 8c266368 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266368(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  undefined1 auStack_10 [4];
  undefined1 *puStack_c;
  
  a5 = DAT_8c2663c4;
  puStack_c = ar5;
  if ((*(int *)PTR_DAT_8c2663c0 != 0) && (a5 = DAT_8c2663c8, ar4 != 0)) {
    (*(code *)PTR_FUN_8c2663cc)
              (*(char *)(ar4 + 1) * 0x20 + *(int *)((int)DAT_8c2663be + *(int *)PTR_DAT_8c2663c0) +
               2,auStack_10,ar6,ar7);
    *puStack_c = auStack_10[0];
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c2663d4)(PTR_FUN_8c2663d0,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c2663d8 @ 8c2663d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2663d8(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  undefined2 auStack_10 [2];
  undefined2 *puStack_c;
  
  a5 = DAT_8c266434;
  puStack_c = ar5;
  if ((*(int *)PTR_DAT_8c266430 != 0) && (a5 = DAT_8c266438, ar4 != 0)) {
    (*(code *)PTR_aica_ram_268618_8c26643c)
              (*(char *)(ar4 + 1) * 0x20 + *(int *)((int)DAT_8c26642e + *(int *)PTR_DAT_8c266430) +
               8,auStack_10,ar6,ar7);
    *puStack_c = auStack_10[0];
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c266444)(PTR_FUN_8c266440,a5,ar6,ar7);
  }
  return 0;
}



/* FUN_8c266448 @ 8c266448 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266448(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  int iStack_10;
  undefined2 *puStack_c;
  
  a5 = DAT_8c2664b0;
  puStack_c = ar5;
  if ((*(int *)PTR_DAT_8c2664ac != 0) && (a5 = DAT_8c2664b4, ar4 != 0)) {
    (*(code *)PTR_aica_ram_268618_8c2664b8)
              (*(char *)(ar4 + 1) * 0x20 + *(int *)((int)DAT_8c2664a8 + *(int *)PTR_DAT_8c2664ac) +
               4,&iStack_10,ar6,ar7);
    if (iStack_10 < 0) {
      iStack_10 = iStack_10 + 3;
    }
    *puStack_c = (short)(iStack_10 >> 2);
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c2664c0)(PTR_FUN_8c2664bc,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c2664d4 @ 8c2664d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2664d4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int *in_r2;
  int unaff_r11;
  int a5;
  int unaff_r13;
  undefined1 *unaff_r14;
  
  a5 = DAT_8c266578;
  if ((*in_r2 != 0) && (a5 = DAT_8c26657c, unaff_r13 != 0)) {
    (*(code *)PTR_FUN_8c266580)(unaff_r13,unaff_r14 + 0x14,ar6,ar7);
    (*(code *)PTR_FUN_8c266584)(unaff_r13,unaff_r14 + 0x18,ar6,ar7);
    puVar1 = PTR_FUN_8c266588;
    *unaff_r14 = (char)unaff_r11;
    unaff_r14[1] = (char)unaff_r11;
    (*(code *)puVar1)(unaff_r13,unaff_r14 + 2,ar6,ar7);
    (*(code *)PTR_FUN_8c26658c)(unaff_r13,unaff_r14 + 3,ar6,ar7);
    (*(code *)PTR_FUN_8c266590)(unaff_r13,unaff_r14 + 6,ar6,ar7);
    (*(code *)PTR_FUN_8c266594)(unaff_r13,unaff_r14 + 8,ar6,ar7);
    (*(code *)PTR_FUN_8c266598)(unaff_r13,unaff_r14 + 4,ar6,ar7);
    (*(code *)PTR_FUN_8c26659c)(unaff_r13,unaff_r14 + 5,ar6,ar7);
    (*(code *)PTR_FUN_8c2665a0)(unaff_r13,unaff_r14 + 0x10,ar6,ar7);
    (*(code *)PTR_FUN_8c2665a4)(unaff_r13,unaff_r14 + 0xc,ar6,ar7);
    a5 = unaff_r11;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c2665ac)(PTR_LAB_8c2665a8,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c2665b0 @ 8c2665b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2665b0(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  
  a5 = DAT_8c26660c;
  puStack_c = ar5;
  if ((*(int *)PTR_DAT_8c266608 != 0) && (a5 = DAT_8c266610, ar4 != 0)) {
    (*(code *)PTR_aica_ram_2686d4_8c266614)
              (*(char *)(ar4 + 1) * 0x20 + *(int *)((int)DAT_8c266606 + *(int *)PTR_DAT_8c266608) +
               0x14,&uStack_10,ar6,ar7);
    *puStack_c = uStack_10;
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c26661c)(PTR_FUN_8c266618,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c266620 @ 8c266620 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266620(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  undefined1 auStack_10 [4];
  undefined1 *puStack_c;
  
  a5 = DAT_8c26667c;
  puStack_c = ar5;
  if ((*(int *)PTR_DAT_8c266678 != 0) && (a5 = DAT_8c266680, ar4 != 0)) {
    (*(code *)PTR_FUN_8c266684)
              (*(char *)(ar4 + 1) * 0x20 + *(int *)((int)DAT_8c266676 + *(int *)PTR_DAT_8c266678) +
               1,auStack_10,ar6,ar7);
    *puStack_c = auStack_10[0];
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c26668c)(PTR_FUN_8c266688,a5,ar6,ar7);
  }
  return a5;
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
  int a5;
  char in_T;
  
  a5 = DAT_8c2666bc;
  if ((in_T == '\0') && (a5 = 0, *(int *)(ar4 + 4) != 1)) {
    a5 = DAT_8c2666c0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c2666c8)(PTR_FUN_8c2666c4,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c2666cc @ 8c2666cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2666cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  
  a5 = (*(code *)PTR_FUN_8c2666fc)(ar4,ar5,ar6,ar7);
  if (a5 == 0) {
    *(undefined4 *)(ar4 + 4) = 0;
  }
  else {
    (*(code *)PTR_FUN_8c266704)(PTR_FUN_8c266700,a5,ar6,ar7);
  }
  return a5;
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

int FUN_8c266710(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int in_r0;
  int iVar2;
  int a6;
  int a7;
  int unaff_r13;
  
  iVar1 = DAT_8c2667c0;
  a6 = 8;
  a7 = *(int *)PTR_DAT_8c2667b8;
  if (in_r0 == 1) {
    iVar2 = a7 + 8;
    a7 = unaff_r13;
    do {
      if (*(int *)(iVar2 + 4) != 1) break;
      a7 = a7 + 1;
      iVar2 = iVar2 + 8;
    } while (a7 < 8);
joined_r0x8c266742:
    if (a7 == 8) {
LAB_8c266782:
      iVar2 = unaff_r13;
    }
  }
  else {
    if (in_r0 == 2) {
      iVar2 = a7 + 0x48;
      a7 = unaff_r13;
      do {
        if (*(int *)(iVar2 + 4) != 1) break;
        a7 = a7 + 1;
        iVar2 = iVar2 + 8;
      } while (a7 < 8);
      goto joined_r0x8c266742;
    }
    iVar2 = DAT_8c2667bc;
    if (in_r0 != 3) goto LAB_8c2667a0;
    iVar2 = DAT_8c2667b6 + a7;
    a7 = 4;
    a6 = unaff_r13;
    do {
      if (*(int *)(iVar2 + 4) != 1) break;
      a6 = a6 + 1;
      iVar2 = iVar2 + 8;
    } while (a6 < 4);
    if (a6 == 4) goto LAB_8c266782;
  }
  if (iVar2 == 0) {
    *ar4 = unaff_r13;
    iVar2 = iVar1;
  }
  else {
    *ar4 = iVar2;
    *(undefined4 *)(iVar2 + 4) = 1;
    iVar2 = unaff_r13;
  }
LAB_8c2667a0:
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_8c2667c8)(PTR_FUN_8c2667c4,iVar2,a6,a7);
  }
  return iVar2;
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
  int a5;
  
  if ((ar4 < 0) || (a5 = 0, 0x20 < ar4)) {
    a5 = DAT_8c2668e8;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c2668f0)(PTR_LAB_8c2668ec,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c266892 @ 8c266892 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266892(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)ar5;
  iVar2 = DAT_8c2668e8;
  if ((-1 < cVar1) && (cVar1 < '\x11')) {
    iVar2 = (*(code *)PTR_FUN_8c2668f4)(ar4,ar5,ar6,ar7);
    iVar2 = -((iVar2 == 0) - 1);
    if (iVar2 == 0) {
      return 0;
    }
    *(char *)(ar4 + 2) = cVar1;
  }
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_8c2668f0)(PTR_FUN_8c2668f8,iVar2,ar6,ar7);
  }
  return iVar2;
}



/* aica_ram_2668fc @ 8c2668fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int aica_ram_2668fc(int ar4,uint ar5,uint ar6,int ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_8c266958;
  if (((ar5 & 3) == 0) && ((ar6 & 3) == 0)) {
    iVar2 = ar6 + 3;
    if (iVar2 < 0) {
      iVar2 = ar6 + 6;
    }
    ar7 = iVar2 >> 2;
    ar6 = 4;
    uVar1 = (*(code *)PTR_FUN_8c266960)(ar4 + DAT_8c26695c,ar5,4,ar7);
    *DAT_8c266964 = uVar1;
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_8c26696c)(PTR_aica_ram_2668fc_8c266968,iVar2,ar6,ar7);
  }
  return iVar2;
}



/* aica_ram_266970 @ 8c266970 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int aica_ram_266970(uint ar4,int ar5,uint ar6,code *ar7)

{
  undefined4 uVar1;
  int a5;
  code *a7;
  int iVar2;
  int a5_00;
  undefined4 in_stack_00000000;
  
  iVar2 = 0;
  a7 = ar7;
  a5_00 = DAT_8c2669dc;
  if (((ar4 & 3) == 0) && ((ar6 & 3) == 0)) {
    if ((int)ar6 < 0) {
      ar6 = ar6 + 3;
    }
    a7 = (code *)((int)ar6 >> 2);
    a5 = ar5 + DAT_8c2669e0;
    ar6 = 4;
    uVar1 = (*(code *)PTR_FUN_8c2669e4)(ar4,a5,4,a7);
    *DAT_8c2669e8 = uVar1;
    a5_00 = iVar2;
    if ((ar7 != (code *)0x0) && (ar7 != (code *)0xffffffff)) {
      (*ar7)(in_stack_00000000,a5,ar6,a7);
    }
  }
  if (a5_00 != 0) {
    (*(code *)PTR_FUN_8c2669f0)(PTR_aica_ram_266970_8c2669ec,a5_00,ar6,a7);
  }
  return a5_00;
}



/* FUN_8c2669f4 @ 8c2669f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2669f4(int ar4,int ar5,int ar6,int ar7)

{
  undefined *puVar1;
  int a5;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_24 [2];
  
  aiStack_24[0] = 0;
  a5 = DAT_8c266ad8;
  if (((*(int *)PTR_DAT_8c266ad4 != 0) && (a5 = DAT_8c266adc, ar4 != 0)) &&
     (piVar4 = *(int **)(ar4 + 8), a5 = DAT_8c266ae4, *piVar4 == DAT_8c266ae0)) {
    (*(code *)PTR_FUN_8c266ae8)(aiStack_24,ar5,ar6,ar7);
    puVar1 = PTR_FUN_8c266af0;
    iVar2 = piVar4[2];
    piVar5 = piVar4 + 8;
    a5 = 0;
    if (((char)piVar4[1] < '\x01') && (a5 = DAT_8c266aec, piVar4[4] != -1)) {
      piVar5 = piVar4 + 4;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        if (-1 < piVar5[3]) {
          ar5 = piVar5[1];
          ar7 = piVar5[3];
          ar6 = piVar5[2];
          a5 = (*(code *)PTR_FUN_8c266af4)(*piVar5,ar5,ar6,ar7);
          if (a5 != 0) break;
        }
        if (0 < piVar5[5]) {
          ar7 = -1;
          ar6 = piVar5[5];
          ar5 = piVar5[4] + (int)piVar4;
          a5 = (*(code *)PTR_FUN_8c266af8)(aiStack_24[0],ar5,ar6,0xffffffff);
          if (a5 != 0) break;
          ar5 = *piVar5;
          ar6 = piVar5[1];
          a5 = (*(code *)puVar1)(aiStack_24[0],ar5,ar6,ar7);
          if (a5 != 0) break;
        }
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 8;
      } while (iVar3 < iVar2);
    }
  }
  if (aiStack_24[0] != 0) {
    (*(code *)PTR_FUN_8c266afc)(aiStack_24[0],ar5,ar6,ar7);
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c266b04)(PTR_FUN_8c266b00,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c266b08 @ 8c266b08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c266b08(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_8c266bc0;
  if (*(int *)((int)DAT_8c266bb4 + *(int *)PTR_DAT_8c266bc0) != 0) {
    iVar2 = (int)DAT_8c266bb6;
    *(undefined4 *)(iVar2 + *(int *)PTR_DAT_8c266bc0) = 1;
    if ((*(uint *)(iVar2 + -4 + *(int *)puVar1) & 1) != 0) {
      *(int *)((int)DAT_8c266bb4 + *(int *)puVar1) =
           *(int *)((int)DAT_8c266bb4 + *(int *)puVar1) + 1;
    }
    iVar2 = (int)DAT_8c266bb4;
    (*(code *)PTR_FUN_8c266bc8)
              (*(undefined4 *)(iVar2 + 0x1c + *(int *)puVar1),
               *(undefined4 *)(iVar2 + -4 + *(int *)puVar1),*(int *)(iVar2 + *(int *)puVar1) << 4,
               PTR_LAB_8c266bc4,(int)DAT_8c266bb8 + *(int *)puVar1);
    (*(code *)PTR_FUN_8c266bcc)
              (*(undefined4 *)(DAT_8c266bba + -0x4c + *(int *)puVar1),
               *(undefined4 *)((int)DAT_8c266bba + *(int *)puVar1));
  }
  return 0;
}



/* FUN_8c266b0e @ 8c266b0e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c266b0e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int a6;
  undefined *a7;
  int *unaff_r14;
  
  if (*(int *)(in_r0 + *unaff_r14) != 0) {
    iVar1 = (int)DAT_8c266bb6;
    *(undefined4 *)(iVar1 + *unaff_r14) = 1;
    if ((*(uint *)(iVar1 + -4 + *unaff_r14) & 1) != 0) {
      *(int *)((int)DAT_8c266bb4 + *unaff_r14) = *(int *)((int)DAT_8c266bb4 + *unaff_r14) + 1;
    }
    iVar1 = (int)DAT_8c266bb4;
    a6 = *(int *)(iVar1 + *unaff_r14) << 4;
    a7 = PTR_LAB_8c266bc4;
    (*(code *)PTR_FUN_8c266bc8)
              (*(undefined4 *)(iVar1 + 0x1c + *unaff_r14),*(undefined4 *)(iVar1 + -4 + *unaff_r14),
               a6,PTR_LAB_8c266bc4);
    (*(code *)PTR_FUN_8c266bcc)
              (*(undefined4 *)(DAT_8c266bba + -0x4c + *unaff_r14),
               *(undefined4 *)((int)DAT_8c266bba + *unaff_r14),a6,a7);
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

/* WARNING: Unknown calling convention */

int FUN_8c266bda(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int a5;
  undefined4 a5_00;
  int *unaff_r13;
  
  puVar2 = PTR_memset_8c266c38;
  puVar1 = DAT_8c266c34;
  a5 = DAT_8c266c30;
  if (*unaff_r13 != 0) {
    ar6 = (int)DAT_8c266c26;
    *(undefined4 *)((int)DAT_8c266c24 + *unaff_r13) = ar4;
    *puVar1 = ar4;
    a5_00 = 0;
    (*(code *)puVar2)(ar4,0,ar6,ar7);
    *(undefined4 *)((int)DAT_8c266c28 + *unaff_r13) = 0;
    a5 = (*(code *)PTR_FUN_8c266c3c)(*unaff_r13 + (int)DAT_8c266c2a,a5_00,ar6,ar7);
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c266c44)(PTR_FUN_8c266c40,a5,ar6,ar7);
  }
  return a5;
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

int FUN_8c266c54(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r0;
  int in_r2;
  int *in_r3;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *unaff_r13;
  
  iVar2 = *in_r3;
  iVar3 = DAT_8c266cbc;
  if (*(int *)(in_r0 + iVar2) < in_r2) {
    iVar3 = *(int *)(in_r0 + iVar2);
    *(int *)(in_r0 + iVar2) = iVar3 + 1;
    puVar1 = PTR_memmove_8c266cc0;
    puVar4 = (undefined1 *)(iVar3 * 0x10 + *(int *)(in_r0 + -4 + iVar2));
    *puVar4 = (char)*unaff_r13;
    ar6 = 0xe;
    (*(code *)puVar1)(puVar4 + 2,unaff_r13 + 1,0xe,ar7);
    puVar1 = PTR_DAT_8c266cb8;
    iVar3 = (int)DAT_8c266cb6;
    unaff_r13[5] = 0;
    *(int *)(iVar3 + *(int *)puVar1) = *(int *)(iVar3 + *(int *)puVar1) + -1;
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    (*(code *)PTR_FUN_8c266cc8)(PTR_FUN_8c266cc4,iVar3,ar6,ar7);
  }
  return iVar3;
}



/* FUN_8c266ccc @ 8c266ccc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266ccc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c266d08;
  if ((*(int *)PTR_DAT_8c266d04 != 0) && (iVar1 = DAT_8c266d0c, ar4 != 0)) {
    iVar1 = (*(code *)PTR_FUN_8c266d10)();
  }
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c266d18)(PTR_FUN_8c266d14,iVar1);
  }
  return iVar1;
}



/* FUN_8c266cce @ 8c266cce callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266cce(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  int *in_r2;
  
  a5 = DAT_8c266d08;
  if ((*in_r2 != 0) && (a5 = DAT_8c266d0c, ar4 != 0)) {
    a5 = (*(code *)PTR_FUN_8c266d10)(ar4,ar5,ar6,ar7);
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c266d18)(PTR_FUN_8c266d14,a5,ar6,ar7);
  }
  return a5;
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
  int iVar3;
  int iStack_28;
  char cStack_24;
  int *piStack_20;
  int iStack_1c;
  undefined1 auStack_18 [8];
  
  iVar3 = *(int *)PTR_DAT_8c266dfc;
  iVar1 = DAT_8c266e00;
  cStack_24 = (char)ar5;
  piStack_20 = ar6;
  if (((iVar3 != 0) && (iVar1 = DAT_8c266e04, ar4 != 0)) &&
     (iVar1 = DAT_8c266e08, ar6 != (int *)0x0)) {
    piVar2 = (int *)((short)*(char *)(ar4 + 1) * 0x2c + DAT_8c266df6 + iVar3);
    (*(code *)PTR_aica_ram_268618_8c266e0c)
              (*(int *)(DAT_8c266df8 + iVar3) + (int)DAT_8c266dfa + *(char *)(ar4 + 1) * 0x40 +
               (char)ar5 * 0x20 + 0x18,&iStack_28,ar6,ar7);
    ar7 = auStack_18;
    ar6 = &iStack_1c;
    (*(code *)PTR_FUN_8c266e14)(DAT_8c266e10,(int)*(char *)((int)piVar2 + cStack_24 + 7),ar6,ar7);
    iVar1 = *piVar2;
    if (iVar1 == 1) {
      iStack_28 = iStack_28 * 2;
    }
    else if ((iVar1 != 0) && (iVar1 == 2)) {
      iStack_28 = (int)(iStack_28 + (uint)(iStack_28 < 0)) >> 1;
    }
    *piStack_20 = iStack_28;
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c266e1c)(PTR_FUN_8c266e18,iVar1,ar6,ar7);
  }
  return iVar1;
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
  int a6;
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  undefined1 *puStack_c;
  
  a6 = *(int *)PTR_DAT_8c266e94;
  uVar1 = DAT_8c266e98;
  if (((a6 != 0) && (uVar1 = DAT_8c266e9c, ar4 != 0)) &&
     (uVar1 = DAT_8c266ea0, ar6 != (undefined1 *)0x0)) {
    puStack_c = ar6;
    (*(code *)PTR_FUN_8c266ea4)
              (*(char *)(ar4 + 1) * 0x40 + (int)DAT_8c266e92 + *(int *)(DAT_8c266e90 + a6) +
               (char)ar5 * 0x20 + 0x11,auStack_10,a6,ar7);
    *puStack_c = auStack_10[0];
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c266ea8 @ 8c266ea8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266ea8(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  int a6;
  int a5;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  
  a6 = *(int *)PTR_DAT_8c266f1c;
  a5 = DAT_8c266f20;
  puStack_c = ar6;
  if (((a6 != 0) && (a5 = DAT_8c266f24, ar4 != 0)) && (a5 = DAT_8c266f28, ar6 != (undefined4 *)0x0))
  {
    (*(code *)PTR_aica_ram_2686d4_8c266f2c)
              (*(char *)(ar4 + 1) * 0x40 + (int)DAT_8c266f1a + *(int *)(DAT_8c266f18 + a6) +
               (char)ar5 * 0x20 + 0x1c,&uStack_10,a6,ar7);
    *puStack_c = uStack_10;
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c266f34)(PTR_FUN_8c266f30,a5,a6,ar7);
  }
  return a5;
}



/* FUN_8c266f38 @ 8c266f38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266f38(int ar4,undefined4 ar5,uint *ar6,undefined4 ar7)

{
  int a6;
  int a5;
  byte abStack_10 [4];
  uint *puStack_c;
  
  a6 = *(int *)PTR_DAT_8c266fac;
  a5 = DAT_8c266fb0;
  puStack_c = ar6;
  if (((a6 != 0) && (a5 = DAT_8c266fb4, ar4 != 0)) && (a5 = DAT_8c266fb8, ar6 != (uint *)0x0)) {
    (*(code *)PTR_FUN_8c266fbc)
              (*(char *)(ar4 + 1) * 0x40 + (int)DAT_8c266faa + *(int *)(DAT_8c266fa8 + a6) +
               (char)ar5 * 0x20,abStack_10,a6,ar7);
    *puStack_c = (uint)abStack_10[0];
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c266fc4)(PTR_FUN_8c266fc0,a5,a6,ar7);
  }
  return a5;
}



/* FUN_8c266fc8 @ 8c266fc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c266fc8(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int a6;
  int a5;
  undefined1 auStack_10 [4];
  undefined1 *puStack_c;
  
  a6 = *(int *)PTR_DAT_8c26703c;
  a5 = DAT_8c267040;
  puStack_c = ar6;
  if (((a6 != 0) && (a5 = DAT_8c267044, ar4 != 0)) && (a5 = DAT_8c267048, ar6 != (undefined1 *)0x0))
  {
    (*(code *)PTR_FUN_8c26704c)
              (*(char *)(ar4 + 1) * 0x40 + (int)DAT_8c26703a + *(int *)(DAT_8c267038 + a6) +
               (char)ar5 * 0x20 + 0x10,auStack_10,a6,ar7);
    *puStack_c = auStack_10[0];
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c267054)(PTR_FUN_8c267050,a5,a6,ar7);
  }
  return a5;
}



/* FUN_8c267058 @ 8c267058 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267058(int ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  int iVar1;
  int a5;
  char acStack_20 [4];
  char *pcStack_1c;
  char cStack_18;
  int iStack_14;
  
  iVar1 = *(int *)PTR_DAT_8c267114;
  a5 = DAT_8c267118;
  pcStack_1c = ar6;
  cStack_18 = (char)ar5;
  if (((iVar1 != 0) && (a5 = DAT_8c26711c, ar4 != 0)) && (a5 = DAT_8c267120, ar6 != (char *)0x0)) {
    iStack_14 = (short)*(char *)(ar4 + 1) * 0x2c + DAT_8c26710e + iVar1;
    (*(code *)PTR_FUN_8c267124)
              (*(int *)(DAT_8c267110 + iVar1) + (int)DAT_8c267112 + *(char *)(ar4 + 1) * 0x40 +
               (char)ar5 * 0x20 + 2,acStack_20,ar6,ar7);
    if ((*(char *)(iStack_14 + 5) != '\x01') && (*(char *)(iStack_14 + 5) == '\x02')) {
      if (cStack_18 == '\0') {
        acStack_20[0] = acStack_20[0] + '@';
      }
      else if (cStack_18 == '\x01') {
        if (acStack_20[0] == '\0') {
          acStack_20[0] = -1;
        }
        acStack_20[0] = acStack_20[0] + -0x40;
      }
      acStack_20[0] = acStack_20[0] * '\x02';
    }
    *pcStack_1c = acStack_20[0];
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c26712c)(PTR_FUN_8c267128,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c267130 @ 8c267130 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267130(int ar4,undefined4 ar5,undefined2 *ar6,undefined4 ar7)

{
  int a6;
  int a5;
  undefined2 auStack_10 [2];
  undefined2 *puStack_c;
  
  a6 = *(int *)PTR_DAT_8c2671a4;
  a5 = DAT_8c2671a8;
  puStack_c = ar6;
  if (((a6 != 0) && (a5 = DAT_8c2671ac, ar4 != 0)) && (a5 = DAT_8c2671b0, ar6 != (undefined2 *)0x0))
  {
    (*(code *)PTR_aica_ram_268618_8c2671b4)
              (*(char *)(ar4 + 1) * 0x40 + (int)DAT_8c2671a2 + *(int *)(DAT_8c2671a0 + a6) +
               (char)ar5 * 0x20 + 8,auStack_10,a6,ar7);
    *puStack_c = auStack_10[0];
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c2671bc)(PTR_FUN_8c2671b8,a5,a6,ar7);
  }
  return a5;
}



/* FUN_8c2671c0 @ 8c2671c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2671c0(int ar4,undefined4 ar5,undefined2 *ar6,undefined4 ar7)

{
  int a6;
  int a5;
  undefined2 auStack_10 [2];
  undefined2 *puStack_c;
  
  a6 = *(int *)PTR_DAT_8c267234;
  a5 = DAT_8c267238;
  puStack_c = ar6;
  if (((a6 != 0) && (a5 = DAT_8c26723c, ar4 != 0)) && (a5 = DAT_8c267240, ar6 != (undefined2 *)0x0))
  {
    (*(code *)PTR_aica_ram_268618_8c267244)
              (*(char *)(ar4 + 1) * 0x40 + (int)DAT_8c267232 + *(int *)(DAT_8c267230 + a6) +
               (char)ar5 * 0x20 + 4,auStack_10,a6,ar7);
    *puStack_c = auStack_10[0];
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c26724c)(PTR_FUN_8c267248,a5,a6,ar7);
  }
  return a5;
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
  undefined *puVar1;
  int *in_r2;
  int unaff_r10;
  int a5;
  undefined4 unaff_r12;
  int unaff_r13;
  undefined1 *unaff_r14;
  
  a5 = DAT_8c26731c;
  if ((*in_r2 != 0) && (a5 = DAT_8c267320, unaff_r13 != 0)) {
    (*(code *)PTR_FUN_8c267324)(unaff_r13,unaff_r12,unaff_r14 + 0x14,ar7);
    (*(code *)PTR_FUN_8c267328)(unaff_r13,unaff_r12,unaff_r14 + 0x18,ar7);
    puVar1 = PTR_FUN_8c26732c;
    *unaff_r14 = (char)unaff_r10;
    unaff_r14[1] = (char)unaff_r10;
    (*(code *)puVar1)(unaff_r13,unaff_r12,unaff_r14 + 2,ar7);
    (*(code *)PTR_FUN_8c267330)(unaff_r13,unaff_r12,unaff_r14 + 3,ar7);
    (*(code *)PTR_FUN_8c267334)(unaff_r13,unaff_r12,unaff_r14 + 6,ar7);
    (*(code *)PTR_FUN_8c267338)(unaff_r13,unaff_r12,unaff_r14 + 8,ar7);
    (*(code *)PTR_FUN_8c26733c)(unaff_r13,unaff_r12,unaff_r14 + 4,ar7);
    (*(code *)PTR_FUN_8c267340)(unaff_r13,unaff_r12,unaff_r14 + 5,ar7);
    (*(code *)PTR_FUN_8c267344)(unaff_r13,unaff_r12,unaff_r14 + 0x10,ar7);
    ar6 = unaff_r14 + 0xc;
    (*(code *)PTR_FUN_8c267348)(unaff_r13,unaff_r12,ar6,ar7);
    a5 = unaff_r10;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c267350)(PTR_LAB_8c26734c,a5,ar6,ar7);
  }
  return a5;
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
  int a6;
  int a5;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  
  a6 = *(int *)PTR_DAT_8c2673d4;
  a5 = DAT_8c2673d8;
  puStack_c = ar6;
  if (((a6 != 0) && (a5 = DAT_8c2673dc, ar4 != 0)) && (a5 = DAT_8c2673e0, ar6 != (undefined4 *)0x0))
  {
    (*(code *)PTR_aica_ram_2686d4_8c2673e4)
              (*(char *)(ar4 + 1) * 0x40 + (int)DAT_8c2673d2 + *(int *)(DAT_8c2673d0 + a6) +
               (char)ar5 * 0x20 + 0x14,&uStack_10,a6,ar7);
    *puStack_c = uStack_10;
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c2673ec)(PTR_FUN_8c2673e8,a5,a6,ar7);
  }
  return a5;
}



/* FUN_8c2673f0 @ 8c2673f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2673f0(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int a6;
  int a5;
  undefined1 auStack_10 [4];
  undefined1 *puStack_c;
  
  a6 = *(int *)PTR_DAT_8c267458;
  a5 = DAT_8c26745c;
  puStack_c = ar6;
  if ((a6 != 0) && (a5 = DAT_8c267460, ar4 != 0)) {
    (*(code *)PTR_FUN_8c267464)
              (*(char *)(ar4 + 1) * 0x40 + (int)DAT_8c267456 + *(int *)(DAT_8c267454 + a6) +
               (char)ar5 * 0x20 + 1,auStack_10,a6,ar7);
    *puStack_c = auStack_10[0];
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c26746c)(PTR_FUN_8c267468,a5,a6,ar7);
  }
  return a5;
}



/* FUN_8c267470 @ 8c267470 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267470(int *ar4,undefined4 ar5,int ar6,int ar7)

{
  undefined *puVar1;
  int a5;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  char in_stack_00000000;
  char acStack_20 [8];
  
  a5 = DAT_8c267568;
  if (((*(int *)PTR_DAT_8c267564 != 0) && (a5 = DAT_8c26756c, '\0' < in_stack_00000000)) &&
     (in_stack_00000000 < '\x03')) {
    if (((uint)&stack0x00000001 & 3) == 0) {
      puVar2 = &stack0x00000001;
    }
    else {
      puVar2 = &stack0x00000004;
    }
    for (ar6 = 0; ar6 < in_stack_00000000; ar6 = ar6 + 1) {
      puVar5 = puVar2 + 4;
      if (((uint)puVar5 & 3) != 0) {
        puVar5 = puVar2 + 8;
      }
      puVar6 = (undefined4 *)(puVar5 + -4);
      if (((uint)puVar6 & 3) != 0) {
        puVar6 = (undefined4 *)(puVar5 + -8);
      }
      acStack_20[ar6] = (char)*puVar6;
      ar7 = (int)acStack_20[ar6];
      if ((ar7 < 0) || (0xf < ar7)) goto LAB_8c2675ae;
      puVar2 = puVar5;
    }
    pcVar3 = acStack_20 + in_stack_00000000;
    if (pcVar3 < acStack_20 + 2) {
      ar6 = -1;
      do {
        *pcVar3 = -1;
        pcVar3 = pcVar3 + 1;
      } while (pcVar3 < acStack_20 + 2);
    }
    a5 = (*(code *)PTR_FUN_8c267570)(ar4,3,ar6,ar7);
    puVar1 = PTR_FUN_8c267574;
    if (a5 == 0) {
      puVar6 = (undefined4 *)
               (*(int *)PTR_DAT_8c267564 + (int)DAT_8c267562 + (short)*(char *)(*ar4 + 1) * 0x2c);
      *puVar6 = 1;
      *(char *)(puVar6 + 1) = in_stack_00000000;
      (*(code *)puVar1)(*ar4,(int)in_stack_00000000,ar6,ar7);
      (*(code *)PTR_FUN_8c267578)(*ar4,0,ar6,ar7);
      for (iVar4 = 0; iVar4 < in_stack_00000000; iVar4 = iVar4 + 1) {
        *(char *)((int)puVar6 + iVar4 + 7) = acStack_20[iVar4];
        puVar6[iVar4 + 3] = 1;
        puVar6[iVar4 + 5] = 0;
        puVar6[iVar4 + 9] = 0;
      }
    }
  }
LAB_8c2675ae:
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c2675d4)(PTR_FUN_8c2675d0,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c2675d8 @ 8c2675d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2675d8(int *ar4,undefined4 ar5,int ar6,int ar7)

{
  undefined *puVar1;
  int a5;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  char in_stack_00000000;
  char acStack_20 [8];
  
  a5 = DAT_8c2676d0;
  if (((*(int *)PTR_DAT_8c2676cc != 0) && (a5 = DAT_8c2676d4, '\0' < in_stack_00000000)) &&
     (in_stack_00000000 < '\x03')) {
    if (((uint)&stack0x00000001 & 3) == 0) {
      puVar2 = &stack0x00000001;
    }
    else {
      puVar2 = &stack0x00000004;
    }
    for (ar6 = 0; ar6 < in_stack_00000000; ar6 = ar6 + 1) {
      puVar5 = puVar2 + 4;
      if (((uint)puVar5 & 3) != 0) {
        puVar5 = puVar2 + 8;
      }
      puVar6 = (undefined4 *)(puVar5 + -4);
      if (((uint)puVar6 & 3) != 0) {
        puVar6 = (undefined4 *)(puVar5 + -8);
      }
      acStack_20[ar6] = (char)*puVar6;
      ar7 = (int)acStack_20[ar6];
      if ((ar7 < 0) || (0xf < ar7)) goto LAB_8c267716;
      puVar2 = puVar5;
    }
    pcVar3 = acStack_20 + in_stack_00000000;
    if (pcVar3 < acStack_20 + 2) {
      ar6 = -1;
      do {
        *pcVar3 = -1;
        pcVar3 = pcVar3 + 1;
      } while (pcVar3 < acStack_20 + 2);
    }
    a5 = (*(code *)PTR_FUN_8c2676d8)(ar4,3,ar6,ar7);
    puVar1 = PTR_FUN_8c2676dc;
    if (a5 == 0) {
      puVar6 = (undefined4 *)
               (*(int *)PTR_DAT_8c2676cc + (int)DAT_8c2676ca + (short)*(char *)(*ar4 + 1) * 0x2c);
      *puVar6 = 1;
      *(char *)(puVar6 + 1) = in_stack_00000000;
      (*(code *)puVar1)(*ar4,(int)in_stack_00000000,ar6,ar7);
      (*(code *)PTR_FUN_8c2676e0)(*ar4,0,ar6,ar7);
      for (iVar4 = 0; iVar4 < in_stack_00000000; iVar4 = iVar4 + 1) {
        *(char *)((int)puVar6 + iVar4 + 7) = acStack_20[iVar4];
        puVar6[iVar4 + 3] = 1;
        puVar6[iVar4 + 5] = 0;
        puVar6[iVar4 + 9] = 0;
      }
    }
  }
LAB_8c267716:
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c26773c)(PTR_FUN_8c267738,a5,ar6,ar7);
  }
  return a5;
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

/* WARNING: Unknown calling convention */

int FUN_8c267744(int ar4,int ar5,byte *ar6,uint ar7)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  int iVar5;
  int *in_r3;
  int *piVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  
  iVar7 = DAT_8c267824;
  if (((*in_r3 != 0) && (iVar7 = DAT_8c267828, ar4 != 0)) &&
     (iVar7 = DAT_8c26783c, (ar7 & 0xf0) == 0)) {
    bVar1 = *(byte *)(ar4 + 1);
    piVar6 = (int *)((short)(char)bVar1 * 0x2c + (int)DAT_8c26781a + *in_r3);
    *piVar6 = ar5;
    pbVar3 = DAT_8c267830;
    puVar2 = DAT_8c26782c;
    iVar7 = DAT_8c26783c;
    if (*(char *)((int)piVar6 + 5) == '\x01') {
      bVar9 = 0;
    }
    else {
      if (*(char *)((int)piVar6 + 5) != '\x02') goto LAB_8c267802;
      bVar9 = (byte)DAT_8c26781c;
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
    puVar4 = DAT_8c267834;
    *pbVar3 = bVar1 | bVar9 | bVar8;
    ar7 = (int)(char)ar7 << 3;
    *puVar4 = *(undefined1 *)((int)piVar6 + 6);
    *(char *)((int)puVar2 + 6) = (char)ar6;
    puVar4 = DAT_8c267838;
    pbVar3[3] = (byte)((uint)ar6 >> 8);
    *puVar4 = (char)ar7;
    ar6 = (byte *)((int)piVar6 + 7);
    for (iVar7 = 5; iVar7 < 7; iVar7 = iVar7 + 1) {
      bVar1 = *ar6;
      ar6 = ar6 + 1;
      DAT_8c267830[iVar7] = bVar1;
    }
    iVar7 = (*(code *)PTR_FUN_8c267840)(DAT_8c26782c,7,ar6,ar7);
  }
LAB_8c267802:
  if (iVar7 != 0) {
    (*(code *)PTR_FUN_8c267848)(PTR_FUN_8c267844,iVar7,ar6,ar7);
  }
  return iVar7;
}



/* FUN_8c26784c @ 8c26784c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26784c(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  int a5;
  uint *puVar1;
  
  puVar1 = (uint *)PTR_DAT_8c267894;
  do {
    a5 = DAT_8c267898;
    if ((int)*puVar1 < 1) {
LAB_8c267878:
      if (a5 != 0) {
        (*(code *)PTR_FUN_8c2678a0)(PTR_FUN_8c26789c,a5,ar6,ar7);
      }
      return a5;
    }
    if ((ar6 & 0xffff) == *puVar1) {
      ar6 = (uint)(short)puVar1[1];
      a5 = (*(code *)PTR_FUN_8c267890)(ar4,ar5,ar6,ar7);
      goto LAB_8c267878;
    }
    puVar1 = puVar1 + 2;
  } while( true );
}



/* FUN_8c2678a4 @ 8c2678a4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2678a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar2 = DAT_8c2678f8;
  puVar1 = DAT_8c2678f4;
  iVar4 = DAT_8c2678ec;
  if ((*(int *)PTR_DAT_8c2678e8 != 0) && (iVar4 = DAT_8c2678f0, ar4 != 0)) {
    *DAT_8c2678f4 = 0x2e;
    puVar3 = PTR_FUN_8c2678fc;
    *puVar2 = *(undefined1 *)(ar4 + 1);
    iVar4 = (*(code *)puVar3)(puVar1);
  }
  if (iVar4 != 0) {
    (*(code *)PTR_FUN_8c267904)(PTR_FUN_8c267900,iVar4);
  }
  return iVar4;
}



/* FUN_8c2678a6 @ 8c2678a6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2678a6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *a4;
  undefined1 *puVar1;
  undefined *puVar2;
  int a5;
  int *in_r2;
  
  puVar1 = DAT_8c2678f8;
  a4 = DAT_8c2678f4;
  a5 = DAT_8c2678ec;
  if ((*in_r2 != 0) && (a5 = DAT_8c2678f0, ar4 != 0)) {
    *DAT_8c2678f4 = 0x2e;
    puVar2 = PTR_FUN_8c2678fc;
    *puVar1 = *(undefined1 *)(ar4 + 1);
    a5 = (*(code *)puVar2)(a4,ar5,ar6,ar7);
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c267904)(PTR_FUN_8c267900,a5,ar6,ar7);
  }
  return a5;
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

int FUN_8c267924(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *DAT_8c267990;
  iVar3 = DAT_8c26798c;
  if (((iVar2 != 0) && (iVar3 = DAT_8c267994, ar4 != 0)) && (iVar3 = DAT_8c26798c, iVar2 != 0)) {
    if ((char)ar5 == '\x7f') {
      cVar1 = '\0';
    }
    else {
      cVar1 = (char)ar5 * -2 + -1;
    }
    *(char *)((short)*(char *)(ar4 + 1) * 0x2c + DAT_8c267988 + iVar2 + 6) = cVar1;
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    (*(code *)PTR_FUN_8c26799c)(PTR_FUN_8c267998,iVar3);
  }
  return iVar3;
}



/* FUN_8c267926 @ 8c267926 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267926(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  int *in_r3;
  int a6;
  int a7;
  int a5;
  
  a6 = *in_r3;
  a7 = DAT_8c26798c;
  a5 = DAT_8c26798c;
  if (((a6 != 0) && (a5 = DAT_8c267994, ar4 != 0)) && (a5 = DAT_8c26798c, a6 != 0)) {
    cVar1 = *(char *)(ar4 + 1);
    if ((char)ar5 == '\x7f') {
      cVar2 = '\0';
    }
    else {
      cVar2 = (char)ar5 * -2 + -1;
    }
    *(char *)((short)cVar1 * 0x2c + DAT_8c267988 + a6 + 6) = cVar2;
    a7 = (int)cVar1;
    a5 = 0;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c26799c)(PTR_FUN_8c267998,a5,a6,a7);
  }
  return a5;
}



/* FUN_8c2679a0 @ 8c2679a0 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2679a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  
  puVar3 = DAT_8c267a00;
  puVar2 = DAT_8c2679fc;
  iVar5 = DAT_8c2679f4;
  if ((*(int *)PTR_DAT_8c2679f0 != 0) && (iVar5 = DAT_8c2679f8, ar4 != 0)) {
    cVar1 = (char)DAT_8c2679ee;
    *DAT_8c2679fc = 0x2b;
    puVar4 = PTR_FUN_8c267a04;
    *puVar3 = *(undefined1 *)(ar4 + 1);
    puVar3[1] = (char)ar5 + cVar1;
    iVar5 = (*(code *)puVar4)(puVar2);
  }
  if (iVar5 != 0) {
    (*(code *)PTR_FUN_8c267a0c)(PTR_FUN_8c267a08,iVar5);
  }
  return iVar5;
}



/* FUN_8c2679a2 @ 8c2679a2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2679a2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *a4;
  undefined1 *puVar1;
  undefined *puVar2;
  int *in_r2;
  int iVar3;
  
  puVar1 = DAT_8c267a00;
  a4 = DAT_8c2679fc;
  iVar3 = DAT_8c2679f4;
  if ((*in_r2 != 0) && (iVar3 = DAT_8c2679f8, ar4 != 0)) {
    iVar3 = (int)DAT_8c2679ee;
    *DAT_8c2679fc = 0x2b;
    puVar2 = PTR_FUN_8c267a04;
    *puVar1 = *(undefined1 *)(ar4 + 1);
    puVar1[1] = (char)((char)ar5 + iVar3);
    iVar3 = (*(code *)puVar2)(a4,(char)ar5 + iVar3,ar6,ar7);
  }
  if (iVar3 != 0) {
    (*(code *)PTR_FUN_8c267a0c)(PTR_FUN_8c267a08,iVar3,ar6,ar7);
  }
  return iVar3;
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

/* WARNING: Unknown calling convention */

int FUN_8c267a20(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  
  puVar3 = DAT_8c267a84;
  puVar2 = DAT_8c267a80;
  iVar6 = DAT_8c267a78;
  if ((*(int *)PTR_DAT_8c267a74 != 0) && (iVar6 = DAT_8c267a7c, ar4 != 0)) {
    cVar1 = (char)DAT_8c267a72;
    *DAT_8c267a80 = 0x29;
    puVar5 = PTR_FUN_8c267a8c;
    *puVar3 = *(undefined1 *)(ar4 + 1);
    pcVar4 = DAT_8c267a88;
    puVar3[1] = (undefined1)ar5;
    *pcVar4 = (char)ar6 + cVar1;
    iVar6 = (*(code *)puVar5)(puVar2);
  }
  if (iVar6 != 0) {
    (*(code *)PTR_FUN_8c267a94)(PTR_FUN_8c267a90,iVar6);
  }
  return iVar6;
}



/* FUN_8c267a22 @ 8c267a22 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267a22(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 *a4;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int a5;
  int *in_r2;
  
  puVar1 = DAT_8c267a84;
  a4 = DAT_8c267a80;
  a5 = DAT_8c267a78;
  if ((*in_r2 != 0) && (a5 = DAT_8c267a7c, ar4 != 0)) {
    ar6 = (int)(char)ar6 + (int)DAT_8c267a72;
    *DAT_8c267a80 = 0x29;
    puVar3 = PTR_FUN_8c267a8c;
    *puVar1 = *(undefined1 *)(ar4 + 1);
    puVar2 = DAT_8c267a88;
    puVar1[1] = (char)ar5;
    *puVar2 = (char)ar6;
    a5 = (*(code *)puVar3)(a4,ar5,ar6,ar7);
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c267a94)(PTR_FUN_8c267a90,a5,ar6,ar7);
  }
  return a5;
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

/* WARNING: Unknown calling convention */

int FUN_8c267ab0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  
  puVar3 = DAT_8c267b10;
  puVar2 = DAT_8c267b0c;
  iVar5 = DAT_8c267b04;
  if ((*(int *)PTR_DAT_8c267b00 != 0) && (iVar5 = DAT_8c267b08, ar4 != 0)) {
    cVar1 = (char)DAT_8c267afe;
    *DAT_8c267b0c = 0x2a;
    puVar4 = PTR_FUN_8c267b14;
    *puVar3 = *(undefined1 *)(ar4 + 1);
    puVar3[1] = (char)ar5 + cVar1;
    iVar5 = (*(code *)puVar4)(puVar2);
  }
  if (iVar5 != 0) {
    (*(code *)PTR_FUN_8c267b1c)(PTR_FUN_8c267b18,iVar5);
  }
  return iVar5;
}



/* FUN_8c267ab2 @ 8c267ab2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c267ab2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *a4;
  undefined1 *puVar1;
  undefined *puVar2;
  int *in_r2;
  int iVar3;
  
  puVar1 = DAT_8c267b10;
  a4 = DAT_8c267b0c;
  iVar3 = DAT_8c267b04;
  if ((*in_r2 != 0) && (iVar3 = DAT_8c267b08, ar4 != 0)) {
    iVar3 = (int)DAT_8c267afe;
    *DAT_8c267b0c = 0x2a;
    puVar2 = PTR_FUN_8c267b14;
    *puVar1 = *(undefined1 *)(ar4 + 1);
    puVar1[1] = (char)((char)ar5 + iVar3);
    iVar3 = (*(code *)puVar2)(a4,(char)ar5 + iVar3,ar6,ar7);
  }
  if (iVar3 != 0) {
    (*(code *)PTR_FUN_8c267b1c)(PTR_FUN_8c267b18,iVar3,ar6,ar7);
  }
  return iVar3;
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
/* WARNING: Unknown calling convention */

int FUN_8c267b30(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 *a5;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  int aiStack_1c [3];
  
  iVar11 = DAT_8c267c2c;
  if ((*(int *)PTR_DAT_8c267c28 != 0) && (iVar11 = DAT_8c267c30, ar4 != 0)) {
    bVar1 = *(byte *)(ar4 + 1);
    cVar8 = (char)ar6;
    ar6 = 0;
    iVar12 = *(int *)PTR_DAT_8c267c28 + (int)DAT_8c267c22 + (short)(char)bVar1 * 0x2c;
    *(int *)((char)ar5 * 4 + iVar12 + 0x1c) = (int)cVar8;
    puVar2 = PTR_DAT_8c267c3c;
    for (iVar11 = 0; iVar11 < *(char *)(iVar12 + 5); iVar11 = iVar11 + 1) {
      aiStack_1c[iVar11] = (int)cVar8;
    }
    iVar11 = (int)DAT_8c267c24;
    uVar9 = (uint)(char)ar5;
    if ((*(char *)(iVar12 + 5) != '\x01') && (*(char *)(iVar12 + 5) == '\x02')) {
      if (uVar9 == 0) {
        aiStack_1c[0] = aiStack_1c[0] + iVar11;
      }
      else if ((uVar9 == 1) && (aiStack_1c[1] = aiStack_1c[1] - iVar11, -2 < aiStack_1c[1])) {
        aiStack_1c[1] = -2;
      }
      for (iVar7 = 0; iVar7 < *(char *)(iVar12 + 5); iVar7 = iVar7 + 1) {
        aiStack_1c[iVar7] = (int)(aiStack_1c[iVar7] + (uint)(aiStack_1c[iVar7] < 0)) >> 1;
      }
    }
    for (iVar7 = 0; iVar7 < *(char *)(iVar12 + 5); iVar7 = iVar7 + 1) {
      aiStack_1c[iVar7] = aiStack_1c[iVar7] + iVar11;
    }
    *DAT_8c267c34 = 0x26;
    a5 = DAT_8c267c40;
    *DAT_8c267c38 = puVar2[uVar9 & 3] | bVar1;
    puVar6 = DAT_8c267ca8;
    puVar5 = DAT_8c267ca4;
    puVar4 = DAT_8c267ca0;
    puVar3 = DAT_8c267c9c;
    uVar10 = (undefined1)((uint)ar7 >> 8);
    if (uVar9 == 0) {
      *a5 = (char)aiStack_1c[0];
      puVar5 = DAT_8c267ca4;
      puVar4 = DAT_8c267ca0;
      *puVar3 = (char)ar7;
      *puVar4 = uVar10;
      *puVar5 = 0;
      puVar3[4] = 0;
      puVar4[4] = 0;
    }
    else if (uVar9 == 1) {
      *a5 = 0;
      *puVar3 = 0;
      *puVar4 = 0;
      *puVar5 = (char)aiStack_1c[1];
      puVar3 = DAT_8c267cac;
      *puVar6 = (char)ar7;
      *puVar3 = uVar10;
    }
    iVar11 = (*(code *)PTR_FUN_8c267cb4)(DAT_8c267cb0,a5,0,ar7);
  }
  if (iVar11 != 0) {
    (*(code *)PTR_FUN_8c267cbc)(PTR_FUN_8c267cb8,iVar11,ar6,ar7);
  }
  return iVar11;
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
/* WARNING: Unknown calling convention */

int FUN_8c267ccc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = DAT_8c267d5c;
  puVar1 = DAT_8c267d58;
  iVar5 = DAT_8c267d48;
  if ((((*(int *)PTR_DAT_8c267d44 != 0) && (iVar5 = DAT_8c267d4c, ar4 != 0)) &&
      (iVar6 = (int)(short)ar5, iVar5 = DAT_8c267d50, DAT_8c267d40 <= iVar6)) &&
     (iVar6 <= DAT_8c267d42)) {
    *DAT_8c267d58 = 0x28;
    puVar3 = DAT_8c267d60;
    iVar6 = DAT_8c267d54 + iVar6;
    *puVar2 = *(undefined1 *)(ar4 + 1);
    *puVar3 = (char)iVar6;
    puVar2 = DAT_8c267d64;
    *(char *)((int)puVar1 + 7) = (char)((uint)iVar6 >> 8);
    puVar1 = DAT_8c267d58;
    *puVar2 = (char)ar6;
    puVar4 = PTR_FUN_8c267d68;
    puVar3[3] = (char)((uint)ar6 >> 8);
    iVar5 = (*(code *)puVar4)(puVar1);
  }
  if (iVar5 != 0) {
    (*(code *)PTR_FUN_8c267d70)(PTR_FUN_8c267d6c,iVar5);
  }
  return iVar5;
}



/* FUN_8c267cce @ 8c267cce callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c267d14) */
/* WARNING: Removing unreachable block (ram,0x8c267d22) */
/* WARNING: Unknown calling convention */

int FUN_8c267cce(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int a5;
  int *in_r2;
  int a6;
  int iVar5;
  
  puVar2 = DAT_8c267d5c;
  puVar1 = DAT_8c267d58;
  a5 = DAT_8c267d48;
  if ((((*in_r2 != 0) && (a5 = DAT_8c267d4c, ar4 != 0)) &&
      (iVar5 = (int)(short)ar5, a5 = DAT_8c267d50, DAT_8c267d40 <= iVar5)) &&
     (iVar5 <= DAT_8c267d42)) {
    *DAT_8c267d58 = 0x28;
    puVar3 = DAT_8c267d60;
    iVar5 = DAT_8c267d54 + iVar5;
    *puVar2 = *(undefined1 *)(ar4 + 1);
    *puVar3 = (char)iVar5;
    puVar2 = DAT_8c267d64;
    *(char *)((int)puVar1 + 7) = (char)((uint)iVar5 >> 8);
    puVar1 = DAT_8c267d58;
    *puVar2 = (char)ar6;
    puVar4 = PTR_FUN_8c267d68;
    a6 = ar6 >> 8;
    puVar3[3] = (char)((uint)ar6 >> 8);
    a5 = (*(code *)puVar4)(puVar1,iVar5 >> 8,a6,ar7);
    ar6 = a6;
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c267d70)(PTR_FUN_8c267d6c,a5,ar6,ar7);
  }
  return a5;
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
  undefined *puVar1;
  int *in_r3;
  int a7;
  int unaff_r10;
  int iVar2;
  int iVar3;
  int a5;
  int a5_00;
  
  a7 = ar7;
  a5 = DAT_8c267e30;
  if ((((*in_r3 != 0) && (a5 = DAT_8c267e34, unaff_r10 != 0)) &&
      (iVar3 = (int)(char)ar5, a5 = DAT_8c267e38, 0 < iVar3)) && (iVar3 < 3)) {
    ar6 = (int)*(char *)(unaff_r10 + 1);
    iVar2 = (short)*(char *)(unaff_r10 + 1) * 0x2c + (int)DAT_8c267e28 + *in_r3;
    if (((-1 < iVar3) && (iVar3 <= *(char *)(iVar2 + 4))) &&
       (*(char *)(iVar2 + 5) = (char)ar5, puVar1 = PTR_FUN_8c267e3c, a5 = ar7, a5_00 = ar7,
       0 < iVar3)) {
      do {
        ar6 = *(int *)(a5_00 * 4 + iVar2 + 0x1c);
        a7 = 0;
        (*(code *)puVar1)(unaff_r10,a5_00,ar6,0);
        a5_00 = a5_00 + 1;
      } while (a5_00 < iVar3);
    }
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c267e44)(PTR_FUN_8c267e40,a5,ar6,a7);
  }
  return a5;
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
/* WARNING: Unknown calling convention */

int FUN_8c267e54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  
  puVar3 = PTR_DAT_8c267ef8;
  puVar2 = DAT_8c267ef4;
  iVar6 = DAT_8c267eec;
  if ((*(int *)PTR_DAT_8c267ee8 != 0) && (iVar6 = DAT_8c267ef0, ar4 != 0)) {
    bVar1 = *(byte *)(ar4 + 1);
    uVar9 = (uint)(char)ar5;
    cVar8 = (char)ar6 + (char)DAT_8c267ee4;
    *DAT_8c267ef4 = 0x25;
    *(byte *)(puVar2 + 1) = puVar3[uVar9 & 3] | bVar1;
    puVar5 = DAT_8c267f04;
    puVar4 = DAT_8c267f00;
    uVar7 = (undefined1)((uint)ar7 >> 8);
    if ((uVar9 == 0) || (uVar9 == 0xffffffff)) {
      *DAT_8c267efc = cVar8;
      *puVar4 = (char)ar7;
      *puVar5 = uVar7;
    }
    puVar5 = DAT_8c267f10;
    puVar4 = DAT_8c267f0c;
    if ((uVar9 == 1) || (uVar9 == 0xffffffff)) {
      *DAT_8c267f08 = cVar8;
      *puVar4 = (char)ar7;
      *puVar5 = uVar7;
    }
    iVar6 = (*(code *)PTR_FUN_8c267f14)(DAT_8c267ef4);
  }
  if (iVar6 != 0) {
    (*(code *)PTR_FUN_8c267f1c)(PTR_FUN_8c267f18,iVar6);
  }
  return iVar6;
}



/* FUN_8c267e56 @ 8c267e56 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c267e98) */
/* WARNING: Unknown calling convention */

int FUN_8c267e56(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int a5;
  int *in_r3;
  undefined1 uVar6;
  uint uVar7;
  
  puVar3 = PTR_DAT_8c267ef8;
  puVar2 = DAT_8c267ef4;
  a5 = DAT_8c267eec;
  if ((*in_r3 != 0) && (a5 = DAT_8c267ef0, ar4 != 0)) {
    bVar1 = *(byte *)(ar4 + 1);
    uVar7 = (uint)(char)ar5;
    ar6 = (int)(char)ar6 + (int)DAT_8c267ee4;
    *DAT_8c267ef4 = 0x25;
    *(byte *)(puVar2 + 1) = puVar3[uVar7 & 3] | bVar1;
    puVar5 = DAT_8c267f04;
    puVar4 = DAT_8c267f00;
    uVar6 = (undefined1)((uint)ar7 >> 8);
    if ((uVar7 == 0) || (uVar7 == 0xffffffff)) {
      *DAT_8c267efc = (char)ar6;
      *puVar4 = (char)ar7;
      *puVar5 = uVar6;
    }
    puVar5 = DAT_8c267f10;
    puVar4 = DAT_8c267f0c;
    if ((uVar7 == 1) || (uVar7 == 0xffffffff)) {
      *DAT_8c267f08 = (char)ar6;
      *puVar4 = (char)ar7;
      *puVar5 = uVar6;
    }
    a5 = (*(code *)PTR_FUN_8c267f14)(DAT_8c267ef4,ar7,ar6,ar7);
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c267f1c)(PTR_FUN_8c267f18,a5,ar6,ar7);
  }
  return a5;
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

/* WARNING: Unknown calling convention */

int FUN_8c267f2c(int ar4,undefined4 ar5,int ar6,int ar7)

{
  char cVar1;
  char cVar2;
  undefined4 *a4;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar5 = DAT_8c267fc0;
  if ((*(int *)PTR_DAT_8c267fbc != 0) && (iVar5 = DAT_8c267fc4, ar4 != 0)) {
    cVar1 = *(char *)(ar4 + 1);
    ar7 = 0;
    ar6 = (short)cVar1 * 0x2c + (int)DAT_8c267fba + *(int *)PTR_DAT_8c267fbc;
    cVar2 = *(char *)(ar6 + 4);
    iVar5 = 0;
    if (0 < cVar2) {
      do {
        *(undefined4 *)(ar6 + 0xc + iVar5) = 1;
        ar7 = ar7 + 1;
        *(undefined4 *)(ar6 + 0x14 + iVar5) = 0;
        *(undefined4 *)(ar6 + 0x24 + iVar5) = 0;
        iVar5 = iVar5 + 4;
      } while (ar7 < cVar2);
    }
    pcVar3 = DAT_8c267fcc;
    a4 = DAT_8c267fc8;
    *DAT_8c267fc8 = 0x22;
    puVar4 = PTR_FUN_8c267fd0;
    *pcVar3 = cVar1;
    iVar5 = (*(code *)puVar4)(a4,0,ar6,ar7);
  }
  if (iVar5 != 0) {
    (*(code *)PTR_FUN_8c267fd8)(PTR_FUN_8c267fd4,iVar5,ar6,ar7);
  }
  return iVar5;
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
  int a5;
  int iVar1;
  
  iVar1 = DAT_8c268088;
  if (*(int *)PTR_DAT_8c268084 != 0) {
    a5 = *(int *)PTR_DAT_8c268084 + (int)DAT_8c26807e;
    ar6 = *(int *)(a5 + 0x14);
    ar7 = *(int *)(a5 + 0x10);
    iVar1 = DAT_8c26808c;
    if (ar6 != DAT_8c268080) {
      iVar1 = *(int *)(a5 + 0x18);
      *(int *)(a5 + 0x18) = iVar1 + 1;
      ar6 = iVar1 * 0x1c + *(int *)(a5 + 0xc);
      if (*(int *)(a5 + 0x18) == ar7) {
        *(undefined4 *)(a5 + 0x18) = 0;
      }
      *(undefined4 *)(ar6 + 0x14) = 1;
      (*(code *)PTR_FUN_8c268090)(ar4,a5,ar6,ar7);
      *(int *)(a5 + 0x14) = *(int *)(a5 + 0x14) + 1;
      iVar1 = 0;
    }
  }
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c268098)(PTR_FUN_8c268094,iVar1,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c26809c @ 8c26809c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26809c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c2680d8;
  if ((*DAT_8c2680d4 != 0) && (iVar1 = DAT_8c2680dc, ar4 != 0)) {
    iVar1 = (*(code *)PTR_FUN_8c2680e0)();
  }
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c2680e8)(PTR_FUN_8c2680e4,iVar1);
  }
  return iVar1;
}



/* FUN_8c26809e @ 8c26809e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26809e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  int *in_r2;
  
  a5 = DAT_8c2680d8;
  if ((*in_r2 != 0) && (a5 = DAT_8c2680dc, ar4 != 0)) {
    a5 = (*(code *)PTR_FUN_8c2680e0)(ar4,ar5,ar6,ar7);
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c2680e8)(PTR_FUN_8c2680e4,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c2680ec @ 8c2680ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2680ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c268128;
  if ((*DAT_8c268124 != 0) && (iVar1 = DAT_8c26812c, ar4 != 0)) {
    iVar1 = (*(code *)PTR_FUN_8c268130)(2);
  }
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c268138)(PTR_FUN_8c268134,iVar1);
  }
  return iVar1;
}



/* FUN_8c2680ee @ 8c2680ee callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2680ee(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  int *in_r2;
  
  a5 = DAT_8c268128;
  if ((*in_r2 != 0) && (a5 = DAT_8c26812c, ar4 != 0)) {
    a5 = (*(code *)PTR_FUN_8c268130)(ar4,2,ar6,ar7);
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c268138)(PTR_FUN_8c268134,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c26813c @ 8c26813c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26813c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  puVar3 = DAT_8c2681bc;
  puVar1 = DAT_8c2681b8;
  iVar5 = DAT_8c2681ac;
  if ((((*DAT_8c2681a8 != 0) && (iVar5 = DAT_8c2681b0, ar4 != 0)) &&
      (iVar6 = (int)(char)ar7, iVar5 = DAT_8c2681b4, -1 < iVar6)) && (iVar6 < 0x20)) {
    *DAT_8c2681b8 = 0x11;
    puVar4 = DAT_8c2681c0;
    puVar2 = DAT_8c2681b8;
    *puVar3 = *(undefined1 *)(ar4 + 1);
    *puVar4 = (undefined1)ar5;
    *(undefined1 *)((int)puVar1 + 6) = (undefined1)ar6;
    puVar3[3] = (char)(iVar6 << 3);
    iVar5 = (*(code *)PTR_FUN_8c2681c4)(puVar2);
  }
  if (iVar5 != 0) {
    (*(code *)PTR_FUN_8c2681cc)(PTR_FUN_8c2681c8,iVar5);
  }
  return iVar5;
}



/* FUN_8c26813e @ 8c26813e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26813e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *a4;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int a5;
  int *in_r2;
  int iVar4;
  
  puVar2 = DAT_8c2681bc;
  puVar1 = DAT_8c2681b8;
  a5 = DAT_8c2681ac;
  if ((((*in_r2 != 0) && (a5 = DAT_8c2681b0, ar4 != 0)) &&
      (iVar4 = (int)(char)ar7, a5 = DAT_8c2681b4, -1 < iVar4)) && (iVar4 < 0x20)) {
    *DAT_8c2681b8 = 0x11;
    puVar3 = DAT_8c2681c0;
    a4 = DAT_8c2681b8;
    *puVar2 = *(undefined1 *)(ar4 + 1);
    *puVar3 = (char)ar5;
    *(char *)((int)puVar1 + 6) = (char)ar6;
    puVar2[3] = (char)(iVar4 << 3);
    a5 = (*(code *)PTR_FUN_8c2681c4)(a4,ar5,ar6,ar7);
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c2681cc)(PTR_FUN_8c2681c8,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c2681d0 @ 8c2681d0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c26820a) */
/* WARNING: Unknown calling convention */

int FUN_8c2681d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  int iVar7;
  
  puVar4 = DAT_8c26823c;
  puVar2 = DAT_8c268238;
  iVar7 = DAT_8c268230;
  if ((*DAT_8c26822c != 0) && (iVar7 = DAT_8c268234, ar4 != 0)) {
    cVar1 = (char)DAT_8c26822a;
    *DAT_8c268238 = 0x16;
    puVar5 = DAT_8c268240;
    *puVar4 = *(undefined1 *)(ar4 + 1);
    puVar4[1] = (char)ar5 + cVar1;
    *puVar5 = (char)ar6;
    puVar6 = PTR_FUN_8c268244;
    puVar3 = DAT_8c268238;
    *(char *)((int)puVar2 + 7) = (char)((uint)ar6 >> 8);
    iVar7 = (*(code *)puVar6)(puVar3);
  }
  if (iVar7 != 0) {
    (*(code *)PTR_FUN_8c26824c)(PTR_FUN_8c268248,iVar7);
  }
  return iVar7;
}



/* FUN_8c2681d2 @ 8c2681d2 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c26820a) */
/* WARNING: Unknown calling convention */

int FUN_8c2681d2(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *a4;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int *in_r2;
  int iVar5;
  int a6;
  
  puVar2 = DAT_8c26823c;
  puVar1 = DAT_8c268238;
  iVar5 = DAT_8c268230;
  if ((*in_r2 != 0) && (iVar5 = DAT_8c268234, ar4 != 0)) {
    iVar5 = (int)DAT_8c26822a;
    *DAT_8c268238 = 0x16;
    puVar3 = DAT_8c268240;
    *puVar2 = *(undefined1 *)(ar4 + 1);
    puVar2[1] = (char)((char)ar5 + iVar5);
    *puVar3 = (char)ar6;
    puVar4 = PTR_FUN_8c268244;
    a4 = DAT_8c268238;
    a6 = ar6 >> 8;
    *(char *)((int)puVar1 + 7) = (char)((uint)ar6 >> 8);
    iVar5 = (*(code *)puVar4)(a4,(char)ar5 + iVar5,a6,ar7);
    ar6 = a6;
  }
  if (iVar5 != 0) {
    (*(code *)PTR_FUN_8c26824c)(PTR_FUN_8c268248,iVar5,ar6,ar7);
  }
  return iVar5;
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
/* WARNING: Unknown calling convention */

int FUN_8c268254(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *a4;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  int a6;
  char in_T;
  
  puVar2 = DAT_8c2682a8;
  puVar1 = DAT_8c2682a4;
  iVar5 = DAT_8c2682a0;
  if (in_T == '\0') {
    iVar5 = (int)DAT_8c26829c;
    *DAT_8c2682a4 = 0x15;
    puVar3 = DAT_8c2682ac;
    *puVar2 = *(undefined1 *)(ar4 + 1);
    puVar2[1] = (char)((char)ar5 + iVar5);
    *puVar3 = (char)ar6;
    puVar4 = PTR_FUN_8c2682b0;
    a4 = DAT_8c2682a4;
    a6 = ar6 >> 8;
    *(char *)((int)puVar1 + 7) = (char)((uint)ar6 >> 8);
    iVar5 = (*(code *)puVar4)(a4,(char)ar5 + iVar5,a6,ar7);
    ar6 = a6;
  }
  if (iVar5 != 0) {
    (*(code *)PTR_FUN_8c2682b8)(PTR_FUN_8c2682b4,iVar5,ar6,ar7);
  }
  return iVar5;
}



/* FUN_8c2682bc @ 8c2682bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2682bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar2 = DAT_8c268310;
  puVar1 = DAT_8c26830c;
  iVar4 = DAT_8c268304;
  if ((*DAT_8c268300 != 0) && (iVar4 = DAT_8c268308, ar4 != 0)) {
    *DAT_8c26830c = 0x12;
    puVar3 = PTR_FUN_8c268314;
    *puVar2 = *(undefined1 *)(ar4 + 1);
    iVar4 = (*(code *)puVar3)(puVar1);
  }
  if (iVar4 != 0) {
    (*(code *)PTR_FUN_8c26831c)(PTR_FUN_8c268318,iVar4);
  }
  return iVar4;
}



/* FUN_8c2682be @ 8c2682be callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2682be(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *a4;
  undefined1 *puVar1;
  undefined *puVar2;
  int a5;
  int *in_r2;
  
  puVar1 = DAT_8c268310;
  a4 = DAT_8c26830c;
  a5 = DAT_8c268304;
  if ((*in_r2 != 0) && (a5 = DAT_8c268308, ar4 != 0)) {
    *DAT_8c26830c = 0x12;
    puVar2 = PTR_FUN_8c268314;
    *puVar1 = *(undefined1 *)(ar4 + 1);
    a5 = (*(code *)puVar2)(a4,ar5,ar6,ar7);
  }
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c26831c)(PTR_FUN_8c268318,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c268320 @ 8c268320 callers=0 callees=0 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c268320(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a6;
  int a7;
  int iVar1;
  int a4;
  int iVar2;
  undefined4 *puVar3;
  
  a6 = *(int *)PTR_DAT_8c2683cc;
  if (a6 == 0) {
    return DAT_8c2683d0;
  }
  a7 = (int)(char)ar5;
  if (a7 < 0) {
    return DAT_8c2684ac;
  }
  iVar1 = (char)ar5 * 8;
  if (ar4 == DAT_8c2683d4) {
    if (0xf < a7) {
      return DAT_8c2684ac;
    }
    iVar2 = (int)DAT_8c2683c4;
    a4 = *(int *)(DAT_8c2683c2 + a6) + iVar1;
  }
  else if (ar4 == DAT_8c2683d8) {
    if (0xf < a7) {
      return DAT_8c2684ac;
    }
    iVar2 = (int)DAT_8c2683c8;
    a4 = *(int *)(DAT_8c2683c2 + a6) + (int)DAT_8c2683c6 + iVar1;
  }
  else if (ar4 == DAT_8c2683dc) {
    if (0xf < a7) {
      return DAT_8c2684ac;
    }
    iVar2 = (int)DAT_8c268498;
    a4 = *(int *)(DAT_8c268494 + a6) + (int)DAT_8c268496 + iVar1;
  }
  else {
    if (ar4 != DAT_8c2683e0) {
      if (ar4 == DAT_8c2683e4) {
        if (0 < a7) {
          return DAT_8c2684ac;
        }
        iVar1 = (int)DAT_8c2684a0;
        a4 = *(int *)(DAT_8c268494 + a6) + (int)DAT_8c26849e;
      }
      else if (ar4 == DAT_8c2683e8) {
        if (0 < a7) {
          return DAT_8c2684ac;
        }
        iVar1 = (int)DAT_8c2684a4;
        a4 = *(int *)(DAT_8c268494 + a6) + (int)DAT_8c2684a2;
      }
      else {
        if (ar4 != DAT_8c2683ec) {
          return DAT_8c2684b0;
        }
        if (0 < a7) {
          return DAT_8c2684ac;
        }
        iVar1 = (int)DAT_8c2684a8;
        a4 = *(int *)(DAT_8c268494 + a6) + (int)DAT_8c2684a6;
      }
      puVar3 = (undefined4 *)(iVar1 + a6);
      goto LAB_8c26846a;
    }
    if (0xf < a7) {
      return DAT_8c2684ac;
    }
    iVar2 = (int)DAT_8c26849c;
    a4 = *(int *)(DAT_8c268494 + a6) + (int)DAT_8c26849a + iVar1;
  }
  puVar3 = (undefined4 *)(iVar2 + a6 + iVar1);
LAB_8c26846a:
  (*(code *)PTR_aica_ram_268748_8c2684b4)(a4,ar6,a6,a7);
  (*(code *)PTR_aica_ram_268748_8c2684b4)(a4 + 4,ar7,a6,a7);
  *puVar3 = ar6;
  puVar3[1] = ar7;
  return 0;
}



/* aica_ram_2684b8 @ 8c2684b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 aica_ram_2684b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_aica_reg_265278_8c2684dc)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c2684ec)(PTR_DAT_8c2684e8,DAT_8c2684e4,4,DAT_8c2684e0);
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
    (*(code *)PTR_FUN_8c26864c)(ar4 + DAT_8c268648,ar5,4,1);
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
    (*(code *)PTR_FUN_8c268708)(ar4 + DAT_8c268704,ar5,4,1);
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
    (*(code *)PTR_FUN_8c268784)(auStack_8,ar4 + DAT_8c268780,4,1);
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
    (*(code *)PTR_FUN_8c2687c4)(auStack_8,ar4 + DAT_8c2687c0,4,1);
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

/* WARNING: Unknown calling convention */

int FUN_8c268818(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  puVar1 = DAT_8c268884;
  iVar2 = DAT_8c26887c;
  if (*DAT_8c268878 != 0) {
    bVar3 = ar4 == DAT_8c268888;
    *DAT_8c268880 = (int)DAT_8c268874;
    if (bVar3) {
      *puVar1 = (char)DAT_8c268876;
    }
    else {
      iVar2 = DAT_8c268890;
      if (ar4 != DAT_8c26888c) goto LAB_8c268860;
      *puVar1 = 0;
    }
    iVar2 = (*(code *)PTR_FUN_8c268894)(DAT_8c268880);
  }
LAB_8c268860:
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_8c26889c)(PTR_FUN_8c268898,iVar2);
  }
  return iVar2;
}



/* FUN_8c26881a @ 8c26881a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26881a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *a5;
  int a5_00;
  int *in_r2;
  bool bVar1;
  
  a5 = DAT_8c268884;
  a5_00 = DAT_8c26887c;
  if (*in_r2 != 0) {
    bVar1 = ar4 == DAT_8c268888;
    *DAT_8c268880 = (int)DAT_8c268874;
    if (bVar1) {
      *a5 = (char)DAT_8c268876;
    }
    else {
      a5_00 = DAT_8c268890;
      if (ar4 != DAT_8c26888c) goto LAB_8c268860;
      *a5 = 0;
    }
    a5_00 = (*(code *)PTR_FUN_8c268894)(DAT_8c268880,a5,ar6,ar7);
  }
LAB_8c268860:
  if (a5_00 != 0) {
    (*(code *)PTR_FUN_8c26889c)(PTR_FUN_8c268898,a5_00,ar6,ar7);
  }
  return a5_00;
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
  int a5;
  
  a5 = (*(code *)PTR_FUN_8c2688d4)(ar4,ar5,ar6,ar7);
  if (a5 != 0) {
    (*(code *)PTR_FUN_8c2688dc)(PTR_FUN_8c2688d8,a5,ar6,ar7);
  }
  return a5;
}



/* FUN_8c2688e0 @ 8c2688e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2688e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (((*DAT_8c268910 != 0) && (*(int *)PTR_DAT_8c268914 == 1)) &&
     (0 < *(int *)((int)DAT_8c26890c + *DAT_8c268910))) {
    (*(code *)PTR_FUN_8c268918)();
  }
  (*(code *)PTR_FUN_8c26891c)();
  return 0;
}



/* FUN_8c2688e2 @ 8c2688e2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2688e2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r3;
  int a4;
  
  a4 = *in_r3;
  if (((a4 != 0) && (*(int *)PTR_DAT_8c268914 == 1)) && (0 < *(int *)(DAT_8c26890c + a4))) {
    (*(code *)PTR_FUN_8c268918)(a4,ar5,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c26891c)(a4,ar5,ar6,ar7);
  return 0;
}



/* FUN_8c268920 @ 8c268920 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c268920(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = PTR_DAT_8c2689a4;
  iVar3 = DAT_8c2689a8;
  if (*(int *)PTR_DAT_8c2689a4 != 0) {
    iVar3 = (int)DAT_8c2689a2;
    *(undefined4 *)(iVar3 + *(int *)PTR_DAT_8c2689a4) = ar4;
    puVar2 = PTR_memset_8c2689b0;
    *(uint *)(iVar3 + 4 + *(int *)puVar1) = ar5;
    *(undefined4 *)(iVar3 + 0x10 + *(int *)puVar1) = 0;
    *(undefined4 *)(iVar3 + 0xc + *(int *)puVar1) = 0;
    *DAT_8c2689ac = ar4;
    (*(code *)puVar2)(0,ar5 * 0x1c);
    uVar5 = 0;
    iVar4 = 0;
    iVar3 = 0;
    if (ar5 != 0) {
      do {
        (*(code *)PTR_FUN_8c2689b8)(iVar4);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x1c;
      } while (uVar5 < ar5);
    }
  }
  if (iVar3 != 0) {
    (*(code *)PTR_FUN_8c2689c0)(PTR_FUN_8c2689bc,iVar3);
  }
  return iVar3;
}



/* FUN_8c26892c @ 8c26892c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c26892c(undefined4 ar4,undefined4 ar5,undefined *ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint a4;
  uint a5;
  uint a5_00;
  uint unaff_r12;
  uint unaff_r13;
  int *unaff_r14;
  
  a5_00 = DAT_8c2689a8;
  if (*unaff_r14 != 0) {
    iVar2 = (int)DAT_8c2689a2;
    *(undefined4 *)(iVar2 + *unaff_r14) = ar4;
    puVar1 = PTR_memset_8c2689b0;
    *(uint *)(iVar2 + 4 + *unaff_r14) = unaff_r12;
    *(uint *)(iVar2 + 0x10 + *unaff_r14) = unaff_r13;
    *(uint *)(iVar2 + 0xc + *unaff_r14) = unaff_r13;
    *DAT_8c2689ac = ar4;
    (*(code *)puVar1)(ar4,0,unaff_r12 * 0x1c,ar7);
    a4 = unaff_r13;
    a5 = unaff_r13;
    ar6 = PTR_DAT_8c2689b4;
    a5_00 = unaff_r13;
    if (unaff_r12 != 0) {
      do {
        (*(code *)PTR_FUN_8c2689b8)(a4,a5,ar6,ar7);
        a5 = a5 + 1;
        a4 = a4 + 0x1c;
      } while (a5 < unaff_r12);
    }
  }
  if (a5_00 != 0) {
    (*(code *)PTR_FUN_8c2689c0)(PTR_FUN_8c2689bc,a5_00,ar6,ar7);
  }
  return a5_00;
}



/* noop_2689c4 @ 8c2689c4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_2689c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c2689c8 @ 8c2689c8 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2689c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int a4;
  undefined4 *a6;
  int a7;
  
  (*(code *)PTR_noop_26a0f8_8c268ad0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_memset_8c268ad8)(DAT_8c268ad4,0,(int)DAT_8c268ac2,ar7);
  (*(code *)PTR_memset_8c268ad8)(DAT_8c268adc,0,(int)DAT_8c268ac4,ar7);
  uVar3 = DAT_8c268ae4;
  a4 = 0;
  a7 = (int)DAT_8c268ac6;
  a6 = DAT_8c268ae0;
  do {
    a4 = a4 + 1;
    *a6 = uVar3;
    puVar1 = PTR_DAT_8c268ae8;
    a6 = a6 + 1;
  } while (a4 < a7);
  if (*(int *)PTR_DAT_8c268ae8 == 0) {
    uVar2 = (*(code *)PTR_ret_const_8c2785e8_26b1ca_8c268aec)(a4,uVar3,a6,a7);
    *(undefined4 *)puVar1 = uVar2;
  }
  uVar2 = *(undefined4 *)PTR_DAT_8c268af0;
  (**(code **)(*(int *)puVar1 + 0xc))(uVar2,uVar3,a6,a7);
  noop_2689c4(uVar2,uVar3,a6,a7);
  uVar3 = (*(code *)PTR_FUN_8c268af4)(0);
  return uVar3;
}



/* FUN_8c268a24 @ 8c268a24 callers=0 callees=0 */

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



/* s_E1201_mwRnaCreate_Illigal_pa_268b7a @ 8c268b70 callers=0 callees=5 */

/* WARNING: Unknown calling convention */

undefined4 s_E1201_mwRnaCreate_Illigal_pa_268b7a(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined1 *a4;
  undefined4 uVar2;
  int *a4_00;
  undefined1 *a4_01;
  int iVar3;
  uint a5;
  undefined1 auStack_20 [4];
  int *piStack_1c;
  
  puVar1 = PTR_debug_printf_8c268be8;
  a4_01 = auStack_20;
  if (((int)ar5 < 1) || (2 < (int)ar5)) {
    (*(code *)PTR_debug_printf_8c268be8)(ar4,ar5,ar6,ar7);
  }
  else {
    a4_00 = ar4;
    a5 = ar5;
    if (ar4 != (int *)0x0) {
      a5 = 0;
      if (0 < (int)ar5) {
        do {
          if (*a4_00 == 0) goto LAB_8c268bae;
          a5 = a5 + 1;
          a4_00 = a4_00 + 1;
        } while ((int)a5 < (int)ar5);
      }
      (*(code *)PTR_FUN_8c268bf4)(auStack_20,a5,ar6,ar7);
      a4 = (undefined1 *)FUN_8c268b48(a4_01,a5,ar6,ar7);
      if (a4 == (undefined1 *)0x0) {
        (*(code *)puVar1)(a4_01,a5,ar6,ar7);
      }
      else {
        a5 = 0;
        a4[3] = (char)ar5;
        a4[2] = (char)ar5;
        iVar3 = 0;
        if (0 < (int)ar5) {
          do {
            a5 = a5 + 1;
            *(undefined4 *)(a4 + iVar3 + 0x10) = *(undefined4 *)(iVar3 + (int)ar4);
            iVar3 = iVar3 + 4;
          } while ((int)a5 < (int)ar5);
        }
        iVar3 = (**(code **)(*(int *)PTR_DAT_8c268d10 + 0x14))(ar5,a5,ar6,ar7);
        *(int *)(a4 + 0x38) = iVar3;
        if (iVar3 == 0) {
          (*(code *)puVar1)(ar5,a5,ar6,ar7);
          a4 = (undefined1 *)0x0;
        }
        else {
          FUN_8c268afc(a4,a5,ar6,ar7);
          s_E1205_Illigal_parameter_MWRN_269b92(a4,0x10,ar6,ar7);
          s_E1205_Illigal_parameter_MWRN_269c06(a4,DAT_8c268d18,ar6,ar7);
          a5 = (uint)(byte)a4[3];
          s_E1205_Illigal_parameter_MWRN_269aec(a4,a5,ar6,ar7);
          piStack_1c = *(int **)(a4 + 0x38);
          uVar2 = (**(code **)(*piStack_1c + 0x18))(piStack_1c,a5,ar6,ar7);
          *(undefined4 *)(a4 + 0x28) = uVar2;
          *a4 = 1;
        }
      }
      (*(code *)PTR_FUN_8c268d1c)(auStack_20,a5,ar6,ar7);
      return a4;
    }
LAB_8c268bae:
    (*(code *)PTR_debug_printf_8c268be8)(a4_00,a5,ar6,ar7);
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
  undefined1 auStack_10 [4];
  int *piStack_c;
  
  if (ar4 == (undefined1 *)0x0) {
    uVar1 = (*(code *)PTR_debug_printf_8c268d24)(0,ar5,ar6,ar7);
    return uVar1;
  }
  (*(code *)PTR_FUN_8c268d28)(auStack_10,ar5,ar6,ar7);
  if (ar4[1] != '\0') {
    s_E1205_Illigal_parameter_MWRN_268d66(ar4,ar5,ar6,ar7);
  }
  *ar4 = 0;
  for (iVar2 = 0; iVar2 < (int)(uint)(byte)ar4[2]; iVar2 = iVar2 + 1) {
    *(undefined4 *)(ar4 + iVar2 * 4 + 0x10) = 0;
  }
  piStack_c = *(int **)(ar4 + 0x38);
  (**(code **)(*piStack_c + 0xc))(piStack_c,0,ar6,ar7);
  uVar1 = 0;
  iVar2 = (int)DAT_8c268d0c;
  (*(code *)PTR_memset_8c268d2c)(ar4,0,iVar2,ar7);
  uVar1 = (*(code *)PTR_FUN_8c268d1c)(auStack_10,uVar1,iVar2,ar7);
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_268cf0 @ 8c268cee callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_268cf0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_c [8];
  
  if (ar4 == 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c268d24)(0,ar5,ar6,ar7);
    return uVar1;
  }
  (*(code *)PTR_FUN_8c268f8c)(auStack_c,ar5,ar6,ar7);
  if (*(char *)(ar4 + 1) != '\0') {
    s_E1205_Illigal_parameter_MWRN_268d66(ar4,ar5,ar6,ar7);
  }
  *(undefined1 *)(ar4 + 1) = 4;
  uVar1 = 1;
  *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(ar4 + 0x44);
  s_E1205_Illigal_parameter_MWRN_2690dc(ar4,1,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c268f90)(auStack_c,uVar1,ar6,ar7);
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
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 auStack_c [8];
  
  if (ar4 == 0) {
    uVar2 = (*(code *)PTR_debug_printf_8c268f98)(0,ar5,ar6,ar7);
    return uVar2;
  }
  uVar2 = 0;
  if (*(char *)(ar4 + 1) != '\0') {
    (*(code *)PTR_FUN_8c268f8c)(auStack_c,ar5,ar6,ar7);
    s_E1205_Illigal_parameter_MWRN_2691ba(ar4,0,ar6,ar7);
    uVar2 = 0;
    s_E1205_Illigal_parameter_MWRN_2690dc(ar4,0,ar6,ar7);
    noop_268d60(ar4,uVar2,ar6,ar7);
    puVar1 = PTR_FUN_8c268f90;
    *(undefined1 *)(ar4 + 7) = 0;
    *(undefined1 *)(ar4 + 1) = 0;
    uVar2 = (*(code *)puVar1)(auStack_c,uVar2,ar6,ar7);
  }
  return uVar2;
}



/* s_E1205_Illigal_parameter_MWRN_268db4 @ 8c268db4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_268db4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c268f98)(0,ar5,ar6,ar7);
    return uVar1;
  }
  if (*(char *)(ar4 + 6) != '\x01') {
    *(undefined1 *)(ar4 + 6) = 1;
  }
  return 1;
}



/* FUN_8c268ddc @ 8c268ddc callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c268ddc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_stack_00000000;
  
  if (in_stack_00000000 < 1) {
    return 0;
  }
  (**(code **)(**(int **)(ar4 + 0x38) + 0x4c))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x5c) = 1;
  return in_stack_00000000;
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
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *a4;
  int iVar5;
  int iVar6;
  undefined1 auStack_1c [4];
  int *piStack_18;
  
  (*(code *)PTR_FUN_8c268f8c)(auStack_1c,ar5,ar6,ar7);
  a4 = *(int **)(ar4 + 0x38);
  iVar5 = *(int *)(ar4 + 0x30);
  piStack_18 = a4;
  uVar2 = (**(code **)(*a4 + 0x20))(a4,0,ar6,ar7);
  iVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c268f9c)(a4,uVar2,ar6,ar7);
  iVar3 = iVar3 << 3;
  iVar4 = (*(code *)PTR_libgcc_divide_helper_010468_8c268f9c)(iVar3,uVar2,ar6,ar7);
  iVar6 = iVar4 * iVar3 - iVar5;
  *(int *)(ar4 + 0x30) = iVar4 * iVar3;
  if (iVar6 < 0) {
    iVar6 = iVar6 + *(int *)(ar4 + 0x28);
  }
  iVar3 = *(int *)(ar4 + 0x34) - iVar6;
  if (iVar3 < 0) {
    *(undefined1 *)(ar4 + 4) = 1;
    iVar3 = 0;
    iVar6 = *(int *)(ar4 + 0x2c) - iVar5;
  }
  if ((*(char *)(ar4 + 4) == '\x01') &&
     (iVar4 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,uVar2,ar6,ar7), iVar4 == 1)) {
    *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar4 + 0x30);
    *(undefined1 *)(ar4 + 4) = 0;
  }
  puVar1 = PTR_FUN_8c268f90;
  *(int *)(ar4 + 0x34) = iVar3;
  *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + iVar6;
  uVar2 = (*(code *)puVar1)(auStack_1c,uVar2,ar6,ar7);
  return uVar2;
}



/* s_E1213_mwlRnaAddWrPos_rna_sj__268f4c @ 8c268f3e callers=4 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(int ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int a4;
  undefined1 *a6;
  int *piVar4;
  int iVar5;
  int iStack_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piVar4 = &iStack_3c;
  (*(code *)PTR_FUN_8c268f8c)(&iStack_3c,ar5,ar6,ar7);
  puVar1 = PTR_debug_printf_8c268f98;
  for (iVar5 = 0; puVar2 = PTR_FUN_8c268fa4, iVar5 < (int)(uint)*(byte *)(ar4 + 3);
      iVar5 = iVar5 + 1) {
    if (*(int *)(iVar5 * 4 + ar4 + 0x10) == 0) {
      (*(code *)puVar1)(piVar4,ar5,ar6,ar7);
    }
  }
  for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(ar4 + 3); iVar5 = iVar5 + 1) {
    uStack_28 = *(undefined4 *)(ar4 + 0x18 + iVar5 * 8);
    a4 = iVar5 * 8 + ar4 + 0x18;
    uStack_24 = *(undefined4 *)(a4 + 4);
    a6 = auStack_30;
    ar7 = auStack_38;
    uVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c2690f8)(a4,ar5,a6,ar7);
    (*(code *)puVar2)(&uStack_28,uVar3,a6,ar7);
    piVar4 = *(int **)(ar4 + 0x10 + iVar5 * 4);
    (**(code **)(*piVar4 + 0x20))(piVar4,0,auStack_30,ar7);
    piVar4 = *(int **)(ar4 + 0x10 + iVar5 * 4);
    ar5 = 1;
    ar6 = auStack_38;
    (**(code **)(*piVar4 + 0x1c))(piVar4,1,ar6,ar7);
  }
  uVar3 = (*(code *)PTR_libgcc_divide_helper_010614_8c2690fc)(piVar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x2c) = uVar3;
  *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + *(int *)(ar4 + 0x3c);
  puVar1 = PTR_FUN_8c269100;
  *(int *)(ar4 + 0x4c) = *(int *)(ar4 + 0x4c) + *(int *)(ar4 + 0x3c);
  *(undefined4 *)(ar4 + 0x3c) = 0;
  uVar3 = (*(code *)puVar1)(&iStack_3c,ar5,ar6,ar7);
  return uVar3;
}



/* FUN_8c269056 @ 8c269056 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c269056(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_libgcc_divide_helper_010614_8c2690fc)();
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
  
  uVar1 = (*in_r2)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x50) = uVar1;
  *(int *)(ar4 + 0x54) = *(int *)(ar4 + 0x54) + *(int *)(ar4 + 0x58);
  *(undefined4 *)(ar4 + 0x58) = 0;
  return 0x58;
}



/* s_E1209_mwRnaPause_Time_out_of_26908e @ 8c269086 callers=3 callees=1 */

/* WARNING: Unknown calling convention */

int s_E1209_mwRnaPause_Time_out_of_26908e
              (undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r0;
  undefined4 a4;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_8c269104;
  iVar3 = (int)DAT_8c2690f4;
  iVar4 = (int)DAT_8c2690f6;
  *(undefined4 *)PTR_DAT_8c269104 = 0;
  iVar5 = 0;
  while ((a4 = 0, iVar5 < iVar4 &&
         (a4 = ar4, in_r0 = FUN_8c268e1a(ar4,ar5,ar6,ar7), iVar2 = iVar3, in_r0 != 1))) {
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar5 = iVar5 + 1;
    *(int *)puVar1 = *(int *)puVar1 + 1;
  }
  if (iVar5 == iVar4) {
    in_r0 = (*(code *)PTR_debug_printf_8c26910c)(a4,ar5,ar6,ar7);
  }
  return in_r0;
}



/* s_E1205_Illigal_parameter_MWRN_2690dc @ 8c2690d8 callers=3 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_2690dc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_14 [4];
  int iStack_10;
  
  iStack_10 = ar5;
  if (ar4 == 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c26910c)(0,ar5,ar6,ar7);
  }
  else {
    *(undefined4 *)(DAT_8c269202 + ar4) = 1;
    if (*(char *)(ar4 + 5) == '\x01') {
      s_E1209_mwRnaPause_Time_out_of_26908e(ar4,ar5,ar6,ar7);
      iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
      if (iVar2 == 1) {
        s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,ar5,ar6,ar7);
      }
      else {
        FUN_8c269056(ar4,ar5,ar6,ar7);
      }
      *(undefined1 *)(ar4 + 5) = 0;
    }
    (*(code *)PTR_FUN_8c269204)(auStack_14,ar5,ar6,ar7);
    *(undefined4 *)(DAT_8c269202 + ar4) = 0;
    if (iStack_10 == 0) {
      iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
      if (iVar2 != 0) {
        *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar4 + 0x2c);
        *(undefined4 *)(ar4 + 0x54) = 0;
        *(undefined4 *)(ar4 + 0x58) = 0;
        *(byte *)(ar4 + 1) = *(byte *)(ar4 + 1) & 6;
      }
    }
    else if ((iStack_10 == 1) &&
            (iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7), iVar2 != 1)) {
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
    uVar1 = (*(code *)PTR_FUN_8c269208)(auStack_14,ar5,ar6,ar7);
  }
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_2691ba @ 8c2691b8 callers=4 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_2691ba(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int a5;
  undefined1 auStack_c [8];
  
  if (ar4 == 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c269210)(0,ar5,ar6,ar7);
    return uVar1;
  }
  a5 = ar5;
  (*(code *)PTR_FUN_8c269204)(auStack_c,ar5,ar6,ar7);
  if (ar5 == 0) {
    iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,a5,ar6,ar7);
    if (iVar2 != 0) {
      (**(code **)(**(int **)(ar4 + 0x38) + 0x14))(*(int **)(ar4 + 0x38),a5,ar6,ar7);
      *(byte *)(ar4 + 1) = *(byte *)(ar4 + 1) & 5;
    }
  }
  else if ((ar5 == 1) && (iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,a5,ar6,ar7), iVar2 != 1)
          ) {
    (**(code **)(**(int **)(ar4 + 0x38) + 0x10))(*(int **)(ar4 + 0x38),a5,ar6,ar7);
    *(byte *)(ar4 + 1) = *(byte *)(ar4 + 1) | 2;
  }
  uVar1 = (*(code *)PTR_FUN_8c269418)(auStack_c,a5,ar6,ar7);
  return uVar1;
}



/* s_E1212_mwlRnaStartTrans_rna_s_269252 @ 8c269244 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int * s_E1212_mwlRnaStartTrans_rna_s_269252
                (undefined4 *ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *a7;
  int *piVar7;
  undefined4 *a4;
  int *a5;
  undefined4 *a6;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  
  iVar4 = (*(code *)PTR_libgcc_divide_helper_010468_8c26941c)(ar4,ar5,ar6,ar7);
  piVar7 = (int *)(ar4[10] - ar4[0xd]);
  iVar5 = (*(code *)PTR_libgcc_divide_helper_010468_8c26941c)(piVar7,ar5,ar6,ar7);
  puVar1 = PTR_debug_printf_8c269420;
  piVar9 = (int *)(iVar5 * iVar4 * 8);
  for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)((int)ar4 + 3); iVar5 = iVar5 + 1) {
    if (ar4[iVar5 + 4] == 0) {
      (*(code *)puVar1)(piVar7,ar5,ar6,ar7);
    }
    piVar7 = (int *)ar4[iVar5 + 4];
    iVar10 = (int)piVar9 * ar4[2];
    ar7 = ar4 + iVar5 * 2 + 6;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 7;
    }
    ar5 = (undefined4 *)0x1;
    ar6 = (undefined4 *)(iVar10 >> 3);
    (**(code **)(*piVar7 + 0x18))(piVar7,1,ar6,ar7);
  }
  if (*(char *)((int)ar4 + 3) != '\x01') {
    ar5 = ar4 + 6;
    ar6 = (undefined4 *)ar4[7];
    ar7 = (undefined4 *)ar4[9];
  }
  iVar5 = (*(code *)PTR_libgcc_divide_helper_010468_8c26941c)(piVar7,ar5,ar6,ar7);
  piVar7 = (int *)(iVar5 << 3);
  if ((int)piVar9 <= iVar5 << 3) {
    piVar7 = piVar9;
  }
  a5 = (int *)(ar4[10] - ar4[0xb]);
  if ((int)a5 <= (int)piVar7) {
    piVar7 = a5;
  }
  iVar5 = (*(code *)PTR_libgcc_divide_helper_010468_8c26941c)(piVar7,a5,ar6,ar7);
  puVar3 = PTR_sh4_tmu_1f88e6_8c26942c;
  puVar2 = DAT_8c269428;
  if (iVar5 * iVar4 * 8 < 1) {
    for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)((int)ar4 + 3); iVar4 = iVar4 + 1) {
      if (ar4[iVar4 + 4] == 0) {
        (*(code *)puVar1)(piVar7,a5,ar6,ar7);
      }
      piVar7 = (int *)ar4[iVar4 + 4];
      a5 = (int *)0x1;
      ar6 = ar4 + iVar4 * 2 + 6;
      (**(code **)(*piVar7 + 0x1c))(piVar7,1,ar6,ar7);
    }
    piVar9 = (int *)0x0;
  }
  else {
    puVar8 = DAT_8c269428 + 1;
    a4 = DAT_8c269428;
    for (piVar7 = (int *)0x0; (int)piVar7 < (int)(uint)*(byte *)((int)ar4 + 3);
        piVar7 = (int *)((int)piVar7 + 1)) {
      a7 = (undefined4 *)ar4[(int)piVar7 * 2 + 6];
      a6 = (undefined4 *)ar4[0xb];
      uVar6 = (*(code *)puVar3)(a4,a5,ar6,ar7);
      *puVar2 = uVar6;
      a4 = ar4;
      a5 = piVar7;
      piVar9 = (int *)FUN_8c268ddc(ar4,piVar7,a6,a7);
      uVar6 = (*(code *)puVar3)(a4,a5,a6,a7);
      *puVar8 = uVar6;
      ar6 = a6;
      ar7 = a7;
    }
    ar4[0xf] = piVar9;
  }
  return piVar9;
}



/* FUN_8c2693ce @ 8c2693ce callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c2693ce(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a6;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(ar4 + 0x28);
  a6 = *(undefined4 *)(ar4 + 8);
  iVar3 = (iVar2 - *(int *)(ar4 + 0x34)) - *(int *)(ar4 + 0x54);
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c26941c)(ar4,iVar2,a6,iVar3);
  iVar1 = iVar1 << 3;
  iVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c26941c)(iVar1,iVar2,a6,iVar3);
  iVar3 = iVar3 * iVar1;
  iVar2 = iVar2 - *(int *)(ar4 + 0x50);
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  iVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c2694e8)(iVar1,iVar2,a6,iVar3);
  iVar3 = iVar3 << 3;
  if (iVar3 <= iVar2) {
    iVar2 = iVar3;
  }
  iVar2 = (*(code *)PTR_libgcc_divide_helper_010468_8c2694e8)(iVar1,iVar2,a6,iVar3);
  if (iVar2 * iVar1 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_8c2694f0;
    if (*(int *)(ar4 + 8) == 4) {
      iVar2 = DAT_8c2694ec;
    }
    uVar4 = iVar2 + 0x20;
    for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(ar4 + 3); iVar1 = iVar1 + 1) {
      iVar2 = FUN_8c268ddc(ar4,iVar1,*(undefined4 *)(ar4 + 0x50),uVar4 & 0xffffffe0);
    }
    *(int *)(ar4 + 0x58) = iVar2;
  }
  return iVar2;
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



/* FUN_8c2695e4 @ 8c2695e4 callers=0 callees=1 */

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
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_10 [8];
  
  if (ar4 == 0) {
    uVar2 = (*(code *)PTR_debug_printf_8c2696e0)(0,ar5,ar6,ar7);
  }
  else {
    (*(code *)PTR_FUN_8c2696d0)(auStack_10,ar5,ar6,ar7);
    if (*(char *)(ar4 + 7) == '\0') {
      iVar3 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
      uVar4 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
      *(uint *)(DAT_8c2696cc + ar4) = iVar3 << 1 | uVar4;
      FUN_8c268ea8(ar4,ar5,ar6,ar7);
      ar5 = 0;
      s_E1205_Illigal_parameter_MWRN_2691ba(ar4,0,ar6,ar7);
      *(undefined1 *)(ar4 + 7) = 1;
      puVar1 = PTR_FUN_8c2696d8;
      if (*(char *)(ar4 + 5) == '\x01') {
        *(undefined4 *)(DAT_8c2696ce + ar4) = 1;
        (*(code *)puVar1)(auStack_10,ar5,ar6,ar7);
        s_E1209_mwRnaPause_Time_out_of_26908e(ar4,ar5,ar6,ar7);
        (*(code *)PTR_FUN_8c2696d0)(auStack_10,ar5,ar6,ar7);
        *(undefined4 *)(DAT_8c2696ce + ar4) = 0;
      }
      s_E1205_Illigal_parameter_MWRN_26973a(ar4,ar5,ar6,ar7);
    }
    uVar2 = (*(code *)PTR_FUN_8c2696d8)(auStack_10,ar5,ar6,ar7);
  }
  return uVar2;
}



/* s_E1205_Illigal_parameter_MWRN_2696ac @ 8c2696aa callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_2696ac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_c [8];
  
  if (ar4 == 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c2696e0)(0,ar5,ar6,ar7);
    return uVar1;
  }
  (*(code *)PTR_FUN_8c2697f4)(auStack_c,ar5,ar6,ar7);
  if (*(char *)(ar4 + 7) == '\x01') {
    if ((*(int *)(DAT_8c2697f0 + ar4) != 0) && (*(int *)(DAT_8c2697f0 + ar4) != 1)) {
      ar5 = 1;
      s_E1205_Illigal_parameter_MWRN_2691ba(ar4,1,ar6,ar7);
    }
    *(undefined1 *)(ar4 + 7) = 0;
  }
  uVar1 = (*(code *)PTR_FUN_8c2697f8)(auStack_c,ar5,ar6,ar7);
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269718 @ 8c269718 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269718(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    (*(code *)PTR_debug_printf_8c269800)(0,ar5,ar6,ar7);
    return 0;
  }
  return (uint)*(byte *)(ar4 + 7);
}



/* s_E1205_Illigal_parameter_MWRN_26973a @ 8c269738 callers=2 callees=3 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_26973a(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *a6;
  int iStack_14;
  undefined1 auStack_10 [4];
  int *piStack_c;
  
  a6 = &iStack_14;
  if (ar4 == 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c269800)(0,ar5,ar6,ar7);
    return uVar1;
  }
  (*(code *)PTR_FUN_8c2697f4)(auStack_10,ar5,ar6,ar7);
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
    iVar2 = (**(code **)(*piStack_c + 0x54))(piStack_c,*(undefined4 *)(ar4 + 0x30),&iStack_14,ar7);
    ar6 = (undefined1 *)a6;
    if (*(int *)(DAT_8c2697f0 + ar4) == 2) {
      uVar1 = (*(code *)PTR_libgcc_divide_helper_010614_8c269804)
                        (iVar2,*(undefined4 *)(ar4 + 0x28),a6,ar7);
      *(undefined4 *)(ar4 + 0x50) = uVar1;
      ar6 = (undefined1 *)a6;
    }
    ar5 = *(undefined4 *)(ar4 + 0x28);
    uVar1 = (*(code *)PTR_libgcc_divide_helper_010614_8c269804)(iVar2,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x2c) = uVar1;
    *(int *)(ar4 + 0x30) = (*(int *)(ar4 + 0x30) + iVar2) - iStack_14;
    *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) - iVar2;
  }
  uVar1 = (*(code *)PTR_FUN_8c2697f8)(auStack_10,ar5,ar6,ar7);
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269816 @ 8c269808 callers=0 callees=5 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_269816(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int a5;
  undefined1 *puVar5;
  int *piVar6;
  undefined1 *a5_00;
  undefined1 auStack_4c [4];
  undefined1 *puStack_48;
  int *piStack_44;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 auStack_28 [4];
  undefined1 *puStack_24;
  
  iVar3 = ar4;
  a5 = ar5;
  if ((ar4 == 0) || (iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7), iVar2 == 1)) {
    (*(code *)PTR_debug_printf_8c269910)(iVar3,a5,ar6,ar7);
  }
  else if (0 < ar5) {
    *(undefined4 *)(DAT_8c269906 + ar4) = 1;
    if (*(char *)(ar4 + 5) == '\x01') {
      s_E1209_mwRnaPause_Time_out_of_26908e(ar4,a5,ar6,ar7);
      iVar3 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,a5,ar6,ar7);
      if (iVar3 == 1) {
        s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,a5,ar6,ar7);
      }
      else {
        FUN_8c269056(ar4,a5,ar6,ar7);
      }
      *(undefined1 *)(ar4 + 5) = 0;
    }
    puVar5 = auStack_4c;
    (*(code *)PTR_FUN_8c269914)(puVar5,a5,ar6,ar7);
    puVar1 = PTR_libgcc_divide_helper_010468_8c269918;
    *(undefined4 *)(DAT_8c269906 + ar4) = 0;
    iVar3 = (*(code *)puVar1)(puVar5,a5,ar6,ar7);
    iVar3 = iVar3 << 3;
    iVar2 = (*(code *)PTR_libgcc_divide_helper_010468_8c269918)(iVar3,a5,ar6,ar7);
    iVar2 = iVar2 * iVar3;
    if (*(int *)(ar4 + 0x34) < iVar2) {
      iVar3 = (iVar2 - *(int *)(ar4 + 0x34)) * *(int *)(ar4 + 8);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 7;
      }
      ar6 = (undefined1 *)(iVar3 >> 3);
      (**(code **)(**(int **)(ar4 + 0x10) + 0x18))(*(int **)(ar4 + 0x10),1,ar6,&iStack_30);
      puVar5 = (undefined1 *)0x1;
      ar7 = auStack_28;
      (**(code **)(**(int **)(ar4 + 0x14) + 0x18))(*(int **)(ar4 + 0x14),1,ar6,ar7);
      a5_00 = puStack_2c;
      if ((*(char *)(ar4 + 3) != '\x01') &&
         (puStack_48 = auStack_28, puVar5 = puStack_24, ar6 = puStack_2c, a5_00 = puStack_24,
         piStack_44 = &iStack_30, (int)puStack_2c < (int)puStack_24)) {
        a5_00 = puStack_2c;
      }
      piVar6 = &iStack_30;
      for (iVar3 = 0; puVar1 = PTR_libgcc_divide_helper_010468_8c269bb0,
          iVar3 < (int)(uint)*(byte *)(ar4 + 3); iVar3 = iVar3 + 1) {
        ar7 = auStack_40;
        (*(code *)PTR_FUN_8c269bac)(&iStack_30 + iVar3 * 2,a5_00,auStack_38,ar7);
        piVar6 = *(int **)(ar4 + 0x10 + iVar3 * 4);
        (**(code **)(*piVar6 + 0x20))(piVar6,0,auStack_38,ar7);
        piVar6 = *(int **)(ar4 + 0x10 + iVar3 * 4);
        puVar5 = (undefined1 *)0x1;
        ar6 = auStack_40;
        (**(code **)(*piVar6 + 0x1c))(piVar6,1,ar6,ar7);
      }
      *(undefined4 *)(ar4 + 0x2c) = 0;
      *(undefined4 *)(ar4 + 0x34) = 0;
      iVar3 = (*(code *)puVar1)(piVar6,puVar5,ar6,ar7);
      iVar3 = iVar3 * 8 + *(int *)(ar4 + 0x28);
    }
    else {
      puVar5 = (undefined1 *)(*(code *)PTR_libgcc_divide_helper_010614_8c269bb4)(iVar2,a5,ar6,ar7);
      piVar6 = *(int **)(ar4 + 0x38);
      iVar3 = (**(code **)(*piVar6 + 0x58))(piVar6,puVar5,ar6,ar7);
      puVar1 = PTR_libgcc_divide_helper_010614_8c269bb4;
      *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) - iVar3;
      uVar4 = (*(code *)puVar1)(piVar6,puVar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x2c) = uVar4;
    }
    puVar1 = PTR_FUN_8c269bb8;
    *(undefined4 *)(ar4 + 0x30) = 0;
    (*(code *)puVar1)(auStack_4c,puVar5,ar6,ar7);
    return iVar3;
  }
  return 0;
}



/* s_E1205_Illigal_parameter_MWRN_2699d4 @ 8c2699d0 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_2699d4(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *a5;
  undefined4 *a6;
  
  if (ar4 == 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c269bc0)(0,ar5,ar6,ar7);
  }
  else {
    a5 = ar5;
    a6 = ar6;
    FUN_8c268ea8(ar4,ar5,ar6,ar7);
    *ar5 = *(int *)(ar4 + 0x4c) - *(int *)(ar4 + 0x34);
    uVar1 = s_E1205_Illigal_parameter_MWRN_269e36(ar4,a5,a6,ar7);
    *ar6 = uVar1;
  }
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269a10 @ 8c269a10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269a10(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    (*(code *)PTR_debug_printf_8c269bc0)(0,ar5,ar6,ar7);
    return 0xffffffff;
  }
  return (uint)*(byte *)(ar4 + 1);
}



/* s_E1205_Illigal_parameter_MWRN_269a30 @ 8c269a30 callers=6 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269a30(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    (*(code *)PTR_debug_printf_8c269bc0)(0,ar5,ar6,ar7);
    return 0xffffffff;
  }
  return *(byte *)(ar4 + 1) & 1;
}



/* s_E1205_Illigal_parameter_MWRN_269a56 @ 8c269a56 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269a56(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    (*(code *)PTR_debug_printf_8c269bc0)(0,ar5,ar6,ar7);
    return 0xffffffff;
  }
  return (int)(*(byte *)(ar4 + 1) & 2) >> 1;
}



/* s_E1205_Illigal_parameter_MWRN_269a7e @ 8c269a7e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269a7e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    (*(code *)PTR_debug_printf_8c269bc0)(0,ar5,ar6,ar7);
    return 0xffffffff;
  }
  return (int)(*(byte *)(ar4 + 1) & 4) >> 2;
}



/* s_E1205_Illigal_parameter_MWRN_269aa8 @ 8c269aa8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269aa8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    (*(code *)PTR_debug_printf_8c269bc0)(0,ar5,ar6,ar7);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 + 0x34);
}



/* s_E1205_Illigal_parameter_MWRN_269ac6 @ 8c269ac6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269ac6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    (*(code *)PTR_debug_printf_8c269bc0)(0,ar5,ar6,ar7);
    return 0xffffffff;
  }
  return *(int *)(ar4 + 0x28) - *(int *)(ar4 + 0x34);
}



/* s_E1205_Illigal_parameter_MWRN_269aec @ 8c269ae8 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_269aec(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((ar4 != 0) && (ar5 <= (int)(uint)*(byte *)(ar4 + 2))) {
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
  uVar1 = (*(code *)PTR_debug_printf_8c269bc0)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269b6e @ 8c269b6e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269b6e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c269bc0)(0,ar5,ar6,ar7);
    return uVar1;
  }
  *(undefined4 *)(ar4 + 0x44) = ar5;
  return 0x44;
}



/* s_E1205_Illigal_parameter_MWRN_269b92 @ 8c269b8e callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269b92(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (ar4 == 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c269bc0)(0,ar5,ar6,ar7);
  }
  else {
    iVar2 = *(int *)(ar4 + 0x28) * *(int *)(ar4 + 8);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    iVar2 = (*(code *)PTR_libgcc_divide_helper_010468_8c269ce0)(iVar2 >> 3,ar5,ar6,ar7);
    *(int *)(ar4 + 0x28) = iVar2 << 3;
    uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x2c))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 8) = ar5;
  }
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269c06 @ 8c269c04 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269c06(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c269ce8)(0,ar5,ar6,ar7);
    return uVar1;
  }
  uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x24))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0xc) = ar5;
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269c42 @ 8c269c3e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_269c42(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c269ce8)(0,ar5,ar6,ar7);
  }
  else {
    if (ar5 < 0) {
      if (ar5 <= DAT_8c269cdc) {
        ar5 = (int)DAT_8c269cdc;
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
    uVar1 = (*(code *)PTR_debug_printf_8c269ce8)(0,ar5,ar6,ar7);
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
  
  if (((ar4 == 0) || (ar5 < 0)) || (0x10 < ar5)) {
    uVar1 = (*(code *)PTR_debug_printf_8c269e14)(ar4,ar5,ar6,ar7);
  }
  else {
    if (ar6 < -0x2d) {
      ar6 = -0x2d;
    }
    else if (0 < ar6) {
      ar6 = 0;
    }
    (**(code **)(**(int **)(ar4 + 0x38) + 0x44))(*(int **)(ar4 + 0x38),0,ar5,ar6);
    *(int *)(ar4 + 0x6c) = ar5;
    uVar1 = 0x70;
    *(int *)(ar4 + 0x70) = ar6;
  }
  return uVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269d5a @ 8c269d58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269d5a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = ar5;
  uStack_c = ar6;
  if (ar4 == 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c269e14)(0,ar5,ar6,ar7);
    return uVar1;
  }
  piStack_14 = *(int **)(ar4 + 0x38);
  (**(code **)(*piStack_14 + 0x44))(piStack_14,1,ar5,ar6);
  piStack_14 = *(int **)(ar4 + 0x38);
  (**(code **)(*piStack_14 + 0x48))(piStack_14,1,&uStack_1c,&uStack_18);
  *(undefined4 *)(ar4 + 0x74) = uStack_1c;
  *(undefined4 *)(ar4 + 0x78) = uStack_18;
  return 0x78;
}



/* s_E1205_Illigal_parameter_MWRN_269dbc @ 8c269db8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_E1205_Illigal_parameter_MWRN_269dbc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (ar4 == 0) {
    iVar1 = (*(code *)PTR_debug_printf_8c269e14)(0,ar5,ar6,ar7);
  }
  else {
    if (ar5 < -0x2d) {
      ar5 = -0x2d;
    }
    else if (0 < ar5) {
      ar5 = 0;
    }
    (**(code **)(**(int **)(ar4 + 0x38) + 0x44))(*(int **)(ar4 + 0x38),2,ar5,0);
    iVar1 = (int)DAT_8c269e08;
    *(int *)(iVar1 + ar4) = ar5;
  }
  return iVar1;
}



/* s_E1205_Illigal_parameter_MWRN_269e18 @ 8c269e18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269e18(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    (*(code *)PTR_debug_printf_8c269f48)(0,ar5,ar6,ar7);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 + 8);
}



/* s_E1205_Illigal_parameter_MWRN_269e36 @ 8c269e36 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269e36(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    (*(code *)PTR_debug_printf_8c269f48)(0,ar5,ar6,ar7);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 + 0xc);
}



/* s_E1205_Illigal_parameter_MWRN_269e54 @ 8c269e54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269e54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    (*(code *)PTR_debug_printf_8c269f48)(0,ar5,ar6,ar7);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 + 0x60);
}



/* s_E1205_Illigal_parameter_MWRN_269e74 @ 8c269e74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1205_Illigal_parameter_MWRN_269e74(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    (*(code *)PTR_debug_printf_8c269f48)(0,ar5,ar6,ar7);
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
    uVar1 = (*(code *)PTR_debug_printf_8c269f48)(0,ar5,ar6,ar7);
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
    uVar1 = (*(code *)PTR_debug_printf_8c269f48)(0,ar5,ar6,ar7);
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
  if (ar4 == 0) {
    (*(code *)PTR_debug_printf_8c269f48)(0,ar5,ar6,ar7);
    return 0xffffffff;
  }
  return *(undefined4 *)(DAT_8c269f40 + ar4);
}



/* s_E1205_Illigal_parameter_MWRN_269f52 @ 8c269f50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1205_Illigal_parameter_MWRN_269f52(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c269fec)(0,ar5,ar6,ar7);
    return uVar1;
  }
  *(undefined4 *)(ar4 + 0x7c) = ar5;
  *(undefined4 *)(DAT_8c269fe6 + ar4) = ar6;
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
  
  if (ar4 == 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c269fec)(0,ar5,ar6,ar7);
    return uVar1;
  }
  *ar5 = *(undefined4 *)(ar4 + 0x7c);
  *ar6 = *(undefined4 *)(ar4 + 0x80);
  return 0x80;
}



/* s_E1205_Illigal_parameter_MWRN_269fcc @ 8c269fc8 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

int s_E1205_Illigal_parameter_MWRN_269fcc(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 uVar2;
  int *a6;
  undefined4 *a6_00;
  undefined1 *a7;
  undefined4 *a7_00;
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
    iVar1 = (*(code *)PTR_debug_printf_8c269fec)(0,ar5,ar6,ar7);
  }
  else {
    (**(code **)(**(int **)(ar4 + 0x38) + 0x44))(*(int **)(ar4 + 0x38),4,ar5,0);
    uVar2 = 4;
    a7 = auStack_1c;
    a6 = ar6;
    iVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x48))(*(int **)(ar4 + 0x38),4,ar6,a7);
    if (0 < *ar6) {
      a5 = (**(code **)(**(int **)(ar4 + 0x38) + 0x30))(*(int **)(ar4 + 0x38),uVar2,a6,a7);
      uStack_18 = (**(code **)(**(int **)(ar4 + 0x38) + 0x28))(*(int **)(ar4 + 0x38),uVar2,a6,a7);
      uVar2 = (**(code **)(**(int **)(ar4 + 0x38) + 0x38))(*(int **)(ar4 + 0x38),uVar2,a6,a7);
      puStack_24 = &uStack_14;
      piStack_20 = *(int **)(ar4 + 0x38);
      uStack_14 = (**(code **)(*piStack_20 + 0x40))(piStack_20,0,a6,a7);
      piStack_20 = auStack_10;
      auStack_10[0] = (**(code **)(**(int **)(ar4 + 0x38) + 0x40))(*(int **)(ar4 + 0x38),1,a6,a7);
      (**(code **)(**(int **)(ar4 + 0x38) + 0x48))(*(int **)(ar4 + 0x38),0,&uStack_2c,&uStack_28);
      a6_00 = &uStack_34;
      a7_00 = &uStack_30;
      (**(code **)(**(int **)(ar4 + 0x38) + 0x48))(*(int **)(ar4 + 0x38),3,a6_00,a7_00);
      s_E1205_Illigal_parameter_MWRN_269b92(ar4,a5,a6_00,a7_00);
      s_E1205_Illigal_parameter_MWRN_269c06(ar4,uStack_18,a6_00,a7_00);
      *(undefined4 *)(ar4 + 0x60) = uVar2;
      *(undefined4 *)(ar4 + 100) = *puStack_24;
      *(int *)(ar4 + 0x68) = *piStack_20;
      *(undefined4 *)(ar4 + 0x6c) = uStack_2c;
      *(undefined4 *)(ar4 + 0x70) = uStack_28;
      *(undefined4 *)(ar4 + 0x7c) = uStack_34;
      iVar1 = (int)DAT_8c26a0f6;
      *(undefined4 *)(iVar1 + ar4) = uStack_30;
    }
  }
  return iVar1;
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



/* FUN_8c26a130 @ 8c26a130 callers=1 callees=1 */

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

undefined4 debug_printf(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_vsprintf_like_8c26a1a0)(DAT_8c26a198,in_stack_00000000,&stack0x00000004);
  if (*(code **)PTR_DAT_8c26a190 != (code *)0x0) {
    uVar1 = (**(code **)PTR_DAT_8c26a190)(*(undefined4 *)PTR_DAT_8c26a194,DAT_8c26a198);
  }
  return uVar1;
}



/* FUN_8c26a152 @ 8c26a152 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26a152(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *a6;
  undefined4 in_stack_00000004;
  
  if ((ar5 & (uint)&stack0x00000008) == 0) {
    a6 = &stack0x00000008;
  }
  else {
    a6 = &stack0x0000000c;
  }
  uVar1 = (*(code *)PTR_vsprintf_like_8c26a1a0)(DAT_8c26a198,in_stack_00000004,a6,ar7);
  if (*(code **)PTR_DAT_8c26a190 != (code *)0x0) {
    uVar1 = (**(code **)PTR_DAT_8c26a190)(*(undefined4 *)PTR_DAT_8c26a194,DAT_8c26a198,a6,ar7);
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
      uVar9 = (*(code *)PTR_FUN_8c26a2e8)(iVar6,ar5,ar6,ar7);
      puVar5[iVar10 + 6] = uVar9;
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
      iVar6 = puVar5[iVar10 + 6];
      iVar7 = (*(code *)PTR_get_field_4_26a1f8_8c26a3fc)(iVar6,ar5,ar6,ar7);
      aiStack_28[iVar10] = iVar7;
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
      iVar6 = (*(code *)PTR_FUN_8c26a65c)(puVar8,ar5,ar6,ar7);
    }
    else {
      puVar8 = &uStack_2c;
      iVar6 = (*(code *)PTR_FUN_8c26a65c)(puVar8,ar5,ar6,ar7);
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
s_E1230_sdMemBlkDestroy_return_26a5e8(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 in_r0;
  int iVar4;
  int iVar5;
  int unaff_r14;
  char in_T;
  
  puVar3 = PTR_debug_printf_8c26a67c;
  puVar2 = PTR_FUN_8c26a674;
  if (in_T != '\x01') {
    for (iVar5 = 0; iVar5 < *(int *)(unaff_r14 + 8); iVar5 = iVar5 + 1) {
      (*(code *)PTR_FUN_8c26a680)(*(undefined4 *)(unaff_r14 + 0x18 + iVar5 * 4),ar5,ar6,ar7);
      iVar4 = (*(code *)puVar2)(*(undefined4 *)(unaff_r14 + 0x20 + iVar5 * 4),ar5,ar6,ar7);
      if (iVar4 != 0) {
        (*(code *)puVar3)(iVar4,ar5,ar6,ar7);
      }
    }
    for (iVar5 = 0; puVar1 = PTR_thunk_FUN_8c2678a4_8c26a664, iVar5 < *(int *)(unaff_r14 + 8);
        iVar5 = iVar5 + 1) {
      iVar4 = (*(code *)puVar2)(*(undefined4 *)(iVar5 * 4 + unaff_r14 + 0x28),ar5,ar6,ar7);
      if (iVar4 != 0) {
        (*(code *)puVar3)(iVar4,ar5,ar6,ar7);
      }
    }
    for (iVar5 = 0; iVar5 < *(int *)(unaff_r14 + 8); iVar5 = iVar5 + 1) {
      ar5 = iVar5;
      iVar4 = (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x30),iVar5,ar6,ar7);
      if (iVar4 != 0) {
        (*(code *)puVar3)(iVar4,ar5,ar6,ar7);
      }
    }
    iVar5 = (*(code *)PTR_thunk_FUN_8c266ccc_8c26a81c)
                      (*(undefined4 *)(unaff_r14 + 0x30),ar5,ar6,ar7);
    if (iVar5 != 0) {
      (*(code *)puVar3)(iVar5,ar5,ar6,ar7);
    }
    puVar2 = PTR_memset_8c26a824;
    *(undefined4 *)(unaff_r14 + 8) = 0;
    *(undefined4 *)(unaff_r14 + 0xc) = 0;
    in_r0 = (*(code *)puVar2)(unaff_r14,0,0x54,ar7);
    *(undefined4 *)(unaff_r14 + 4) = 0;
  }
  return in_r0;
}



/* s_E1241_sdSysFlushHostCmd_retu_26a6d8 @ 8c26a6d8 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int s_E1241_sdSysFlushHostCmd_retu_26a6d8
              (undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  
  a4 = (*(code *)PTR_FUN_8c26a828)(ar4,ar5,ar6,ar7);
  if ((a4 != 0) && (a4 != DAT_8c26a82c)) {
    a4 = (*(code *)PTR_debug_printf_8c26a834)(a4,ar5,ar6,ar7);
  }
  return a4;
}



/* s_E1233_sdPstmPlay_return_erro_26a6fe @ 8c26a6fc callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1233_sdPstmPlay_return_erro_26a6fe(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 a7;
  
  puVar1 = PTR_FUN_8c26a838;
  iVar3 = *(int *)(ar4 + 0x10);
  uVar2 = *(undefined4 *)(ar4 + 0x14);
  if (iVar3 == 0x10) {
    ar5 = 1;
  }
  else if (iVar3 == 8) {
    ar5 = 0;
  }
  else if (iVar3 == 4) {
    ar5 = 2;
  }
  a7 = 0;
  *(int *)(ar4 + 0x10) = iVar3;
  iVar3 = (*(code *)puVar1)(*(undefined4 *)(ar4 + 0x30),ar5,uVar2,0);
  if (iVar3 != 0) {
    (*(code *)PTR_debug_printf_8c26a834)(iVar3,ar5,uVar2,a7);
  }
  uVar2 = s_E1241_sdSysFlushHostCmd_retu_26a6d8(ar4,1,uVar2,a7);
  return uVar2;
}



/* s_E1234_sdPstmStop_return_erro_26a750 @ 8c26a750 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_E1234_sdPstmStop_return_erro_26a750(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  undefined4 uVar1;
  int unaff_r14;
  
  a4 = (*(code *)PTR_thunk_FUN_8c267f2c_8c26a840)(*(undefined4 *)(unaff_r14 + 0x30),ar5,ar6,ar7);
  if (a4 != 0) {
    (*(code *)PTR_debug_printf_8c26a834)(a4,ar5,ar6,ar7);
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
  
  iVar1 = (*in_r3)(ar4,ar5,ar6,ar7);
  return iVar1 << 3;
}



/* s_E1240_sdPstmSetUseCh_return__26a788 @ 8c26a786 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1240_sdPstmSetUseCh_return__26a788(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  a4 = (*(code *)PTR_thunk_FUN_8c267d88_8c26a84c)(*(undefined4 *)(ar4 + 0x30),ar5,ar6,ar7);
  uVar1 = 0;
  if (a4 != 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c26a834)(a4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* s_E1236_sdPstmGetCurAdr_return_26a7b6 @ 8c26a7b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_E1236_sdPstmGetCurAdr_return_26a7b6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined1 *a6;
  uint uStack_14;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  uStack_14 = 1;
  uStack_c = ar5;
  (*(code *)PTR_FUN_8c26a854)(*(undefined4 *)(ar4 + 0x30),0,&uStack_14,ar7);
  if ((uStack_14 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    a6 = auStack_10;
    a5 = uStack_c;
    iVar1 = (*(code *)PTR_thunk_FUN_8c266d28_8c26a858)(*(undefined4 *)(ar4 + 0x30),uStack_c,a6,ar7);
    if (iVar1 != 0) {
      (*(code *)PTR_debug_printf_8c26a834)(iVar1,a5,a6,ar7);
    }
    iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c26a848)(iVar1,a5,a6,ar7);
    iVar1 = iVar1 << 3;
  }
  return iVar1;
}



/* s_E1237_sdPstmSetVol_return_er_26a870 @ 8c26a870 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_E1237_sdPstmSetVol_return_er_26a870(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int in_r0;
  int a4;
  int iVar3;
  int a5;
  int iVar4;
  int a6;
  undefined4 uVar5;
  int unaff_r12;
  
  iVar4 = -0x7f;
  if (ar4 < ar5) {
    if (-1 < ar5) {
      iVar3 = 0x7f;
      goto LAB_8c26a8aa;
    }
    iVar3 = ar5 * 0xff;
    uVar5 = (*(code *)PTR_libgcc_divide_helper_010468_8c26a98c)(ar4,iVar3,0xffffff81,ar7);
    in_r0 = (*(code *)PTR_libgcc_divide_helper_010468_8c26a98c)(uVar5,iVar3,iVar4,ar7);
    iVar3 = in_r0;
    if (iVar4 <= in_r0) goto LAB_8c26a8aa;
  }
  iVar3 = iVar4;
LAB_8c26a8aa:
  puVar2 = PTR_thunk_FUN_8c267e54_8c26a998;
  puVar1 = PTR_debug_printf_8c26a994;
  iVar4 = 0;
  while( true ) {
    if (*(int *)(unaff_r12 + 0xc) <= iVar4) {
      return in_r0;
    }
    uVar5 = 0;
    a5 = iVar4;
    a6 = iVar3;
    a4 = (*(code *)puVar2)(*(undefined4 *)(unaff_r12 + 0x30),iVar4,iVar3,0);
    if (a4 != 0) break;
    iVar4 = iVar4 + 1;
    in_r0 = 0;
  }
  uVar5 = (*(code *)puVar1)(a4,a5,a6,uVar5);
  return uVar5;
}



/* FUN_8c26a8e4 @ 8c26a8e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26a8e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *a6;
  undefined1 auStack_20 [2];
  char cStack_1e;
  
  uVar1 = 0;
  a6 = auStack_20;
  (*(code *)PTR_thunk_FUN_8c267250_8c26a99c)(*(undefined4 *)(ar4 + 0x30),0,a6,ar7);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c26a98c)
                    (cStack_1e * 2 * (int)DAT_8c26a988,uVar1,a6,ar7);
  return uVar1;
}



/* s_E1238_sdPstmSetPan_return_er_26a914 @ 8c26a914 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E1238_sdPstmSetPan_return_er_26a914(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a6;
  int a4;
  undefined4 uVar1;
  undefined4 a7;
  
  a6 = (*(code *)PTR_libgcc_divide_helper_010468_8c26a98c)(ar4,ar5,ar6,ar7);
  a7 = 0;
  a4 = (*(code *)PTR_thunk_FUN_8c267b30_8c26a9a0)(*(undefined4 *)(ar4 + 0x30),ar5,a6,0);
  uVar1 = 0;
  if (a4 != 0) {
    uVar1 = (*(code *)PTR_debug_printf_8c26a994)(a4,ar5,a6,a7);
  }
  return uVar1;
}



/* FUN_8c26a956 @ 8c26a956 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26a956(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *a6;
  undefined1 auStack_20 [32];
  
  a6 = auStack_20;
  uVar1 = *(undefined4 *)(ar4 + 0x30);
  (*(code *)PTR_thunk_FUN_8c267250_8c26a99c)(uVar1,ar5,a6,ar7);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c26a98c)(uVar1,ar5,a6,ar7);
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

undefined4 FUN_8c26aa48(undefined4 ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar5 = 0;
  *ar6 = 0;
  return in_r0;
}



/* s_E1239_sdPstmSetPitch_return__26aa62 @ 8c26aa5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_E1239_sdPstmSetPitch_return__26aa62(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int a4;
  int iVar4;
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
  puVar1 = PTR_libgcc_divide_helper_010468_8c26abdc;
  iVar4 = ar5 << 8;
  if (0x62 < ar6) {
    ar6 = 99;
  }
  if (ar6 < -0x62) {
    ar6 = -99;
  }
  *(int *)(unaff_r14 + 0x50) = ar6;
  iVar3 = (*(code *)puVar1)(iVar4,0xffffff9d,ar6,ar7);
  puVar2 = PTR_FUN_8c26abe4;
  puVar1 = PTR_debug_printf_8c26abc8;
  iVar4 = iVar4 + iVar3;
  for (a5_00 = 0; a5_00 < *(int *)(unaff_r14 + 0xc); a5_00 = a5_00 + 1) {
    a7 = 0;
    a5 = a5_00;
    a6 = iVar4;
    a4 = (*(code *)puVar2)(*(undefined4 *)(unaff_r14 + 0x30),a5_00,iVar4,0);
    iVar3 = 0;
    if (a4 != 0) {
      iVar3 = (*(code *)puVar1)(a4,a5,a6,a7);
    }
  }
  return iVar3;
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

/* WARNING: Unknown calling convention */

undefined4 s_E1242_sdMemBlkSetPrm_return__26abf6(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int a5;
  int iVar6;
  undefined4 a7;
  int iVar7;
  int in_stack_00000000;
  
  puVar2 = PTR_sh4_tmu_1f88e6_8c26ad88;
  puVar1 = DAT_8c26ad84;
  iVar7 = in_stack_00000000 * *(int *)(ar4 + 0x10);
  if (iVar7 < 0) {
    iVar7 = iVar7 + 7;
  }
  iVar7 = iVar7 >> 3;
  uVar4 = (*(code *)PTR_sh4_tmu_1f88e6_8c26ad88)(ar4,ar5,ar6,ar7);
  puVar3 = PTR_FUN_8c26ad8c;
  a7 = 0;
  *puVar1 = uVar4;
  iVar6 = ar5 * 4;
  iVar5 = (*(code *)puVar3)(*(undefined4 *)(iVar6 + ar4 + 0x20),ar7,iVar7,0);
  if (iVar5 == 0) {
    iVar5 = ar6 * *(int *)(ar4 + 0x10);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 7;
    }
    a5 = (iVar5 >> 3) + *(int *)(ar4 + 0x38 + iVar6);
    uVar4 = (*(code *)puVar2)(0,ar7,iVar7,a7);
    puVar3 = PTR_FUN_8c26ad98;
    puVar1[1] = uVar4;
    iVar5 = (*(code *)puVar3)(*(undefined4 *)(ar4 + 0x20 + iVar6),a5,iVar7,a7);
    if (iVar5 != 0) {
      (*(code *)PTR_debug_printf_8c26ad94)(iVar5,a5,iVar7,a7);
    }
    uVar4 = (*(code *)puVar2)(iVar5,a5,iVar7,a7);
    puVar1[2] = uVar4;
  }
  else {
    uVar4 = (*(code *)PTR_debug_printf_8c26ad94)(iVar5,ar7,iVar7,a7);
  }
  return uVar4;
}



/* s_E1242_sdMemBlkSetPrm_return__26acaa @ 8c26aca8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1242_sdMemBlkSetPrm_return__26acaa(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int a5;
  undefined4 uVar4;
  undefined4 a7;
  
  a7 = 0;
  uVar4 = 0x20;
  iVar3 = ar5 * 4;
  iVar1 = (*(code *)PTR_FUN_8c26ad8c)(*(undefined4 *)(iVar3 + ar4 + 0x28),ar7,0x20,0);
  if (iVar1 != 0) {
    uVar4 = (*(code *)PTR_debug_printf_8c26ad94)(iVar1,ar7,uVar4,a7);
    return uVar4;
  }
  iVar1 = ar6 * *(int *)(ar4 + 0x10);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  a5 = *(int *)(ar4 + 0x38 + iVar3) + (iVar1 >> 3);
  iVar1 = (*(code *)PTR_FUN_8c26ad98)(*(undefined4 *)(ar4 + 0x28 + iVar3),a5,uVar4,a7);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_debug_printf_8c26ad94)(iVar1,a5,uVar4,a7);
  }
  return uVar2;
}



/* FUN_8c26ad32 @ 8c26ad32 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26ad32(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 a5;
  undefined4 a7;
  
  uVar3 = ar4;
  a5 = ar5;
  iVar2 = ar6;
  a7 = ar7;
  uVar1 = s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,ar6,ar7);
  if (ar6 == 0) {
    iVar2 = (*(code *)PTR_libgcc_divide_helper_010468_8c26ada0)(uVar3,a5,iVar2,a7);
    uVar3 = s_E1242_sdMemBlkSetPrm_return__26acaa(ar4,ar5,iVar2 * 8,ar7);
    return uVar3;
  }
  return uVar1;
}



/* s_E1244_sdMemBlkGetStat_return_26ada4 @ 8c26ada4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1244_sdMemBlkGetStat_return_26ada4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  undefined4 *a5;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  a5 = &uStack_14;
  uStack_8 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  iStack_10 = ar5;
  iStack_c = ar4;
  (*(code *)PTR_FUN_8c26aecc)(ar4,ar5,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c26aed0)
                 (*(undefined4 *)(iStack_10 * 4 + iStack_c + 0x20),&uStack_14,ar6,ar7);
  if (a4 != 0) {
    (*(code *)PTR_debug_printf_8c26aed8)(a4,a5,ar6,ar7);
  }
  return uStack_14;
}



/* s_E1227_sdMoveSndMemToWrkMem_r_26ae04 @ 8c26ae04 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_E1227_sdMoveSndMemToWrkMem_r_26ae04(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  int *a5;
  undefined4 uVar2;
  
  uVar2 = 8;
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c26aedc)(ar4,ar5,8,ar7);
  a5 = (int *)(ar5 * 4 + ar4 + 0x38);
  iVar1 = *a5 + iVar1;
  a6 = (*(code *)PTR_libgcc_divide_helper_010468_8c26aedc)(iVar1,a5,uVar2,ar7);
  iVar1 = (*(code *)PTR_aica_ram_2668fc_8c26aee0)(iVar1,ar6,a6,ar7);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_debug_printf_8c26aed8)(iVar1,ar6,a6,ar7);
  }
  return uVar2;
}



/* FUN_8c26ae54 @ 8c26ae54 callers=0 callees=2 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

int FUN_8c26ae54(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a7;
  int iVar1;
  int a7_00;
  int a6;
  int iVar2;
  undefined4 a4;
  undefined4 a5;
  int a6_00;
  int iVar3;
  int iStack_34;
  
  a4 = ar4;
  a5 = ar5;
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c26aedc)(ar4,ar5,ar6,ar7);
  iVar1 = iVar1 * 8;
  a7_00 = (*(code *)PTR_libgcc_divide_helper_010614_8c26aee8)(a4,a5,ar6,ar7);
  a7 = DAT_8c26aeec;
  if (0 < a7_00) {
    a6_00 = 0;
    s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,DAT_8c26aeec,0);
    a6 = a7 + iVar1;
    iStack_34 = 0;
    iVar2 = iVar1 - a7_00;
    do {
      iVar3 = iVar1;
      if (iStack_34 == 0x3f) {
        iVar3 = iVar2;
      }
      s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,a6,a7_00);
      s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,a6_00,a6);
      a6_00 = a6_00 + iVar3;
      iStack_34 = iStack_34 + 1;
      a7_00 = a7_00 + iVar3;
    } while (iStack_34 < 0x40);
    a7_00 = s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,a6_00,a7);
  }
  return a7_00;
}



/* FUN_8c26af42 @ 8c26af42 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26af42(undefined4 ar4,int ar5,int *ar6,undefined4 ar7)

{
  int in_r0;
  int a4;
  int a7;
  
  if (ar5 == 0) {
    *ar6 = 0;
    return in_r0;
  }
  *ar6 = 1;
  a7 = 0x40;
  a4 = 2;
  while ((*ar6 <= a7 &&
         (in_r0 = (*(code *)PTR_libgcc_divide_helper_010614_8c26b018)(a4,ar5,ar6,a7), in_r0 == 0)))
  {
    a4 = a4 * 2;
    *ar6 = *ar6 << 1;
  }
  return in_r0;
}



/* FUN_8c26af7a @ 8c26af7a callers=2 callees=2 */

/* WARNING: Unknown calling convention */

int FUN_8c26af7a(undefined4 ar4,undefined4 ar5,uint ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_48;
  int iStack_40;
  uint uStack_38;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  iVar5 = (int)DAT_8c26b016;
  iVar2 = ar7;
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c26b01c)(ar4,iVar5,ar6,ar7);
  iStack_30 = DAT_8c26b020;
  iStack_2c = DAT_8c26b020 + iVar5;
  iStack_40 = 0;
  iVar5 = (*(code *)PTR_libgcc_divide_helper_010468_8c26b01c)(&uStack_28,iVar5,&iStack_30,iVar2);
  iVar2 = iVar5;
  uStack_38 = ar6;
  for (; iStack_40 < ar7; iStack_40 = iStack_40 + 1) {
    if ((int)uStack_38 < 0) {
      uStack_28 = ~(~uStack_38 + 1 & 0x3f) + 1;
    }
    else {
      uStack_28 = uStack_38 & 0x3f;
    }
    iVar2 = s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,iStack_30,uStack_28 * iVar1 * 8);
    iStack_48 = 0;
    if (0 < iVar5) {
      do {
        uStack_24 = (uStack_28 - ar6) + 0x40;
        if ((int)uStack_24 < 0) {
          uStack_24 = ~(~uStack_24 + 1 & 0x3f) + 1;
        }
        else {
          uStack_24 = uStack_24 & 0x3f;
        }
        iVar2 = uStack_24 * iVar1 * 8;
        s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,iStack_2c,iVar2);
        iVar2 = s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,iVar2,iStack_30);
        iVar4 = iStack_30;
        uStack_28 = uStack_24;
        iVar3 = iStack_2c;
        iStack_30 = iStack_2c;
        iStack_2c = iVar4;
        iStack_48 = iStack_48 + 1;
      } while (iStack_48 < iVar5);
    }
    uStack_38 = uStack_38 + 1;
  }
  return iVar2;
}



/* FUN_8c26b092 @ 8c26b092 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b092(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  undefined4 a4;
  int a5;
  int a5_00;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  
  a5 = ar5;
  piStack_20 = ar6;
  (*(code *)PTR_FUN_8c26b164)(&uStack_24,ar5,ar6,ar7);
  a4 = 0;
  (*(code *)PTR_FUN_8c26b168)(0,a5,ar6,ar7);
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c26b16c)(a4,a5,ar6,ar7);
  iVar1 = iVar1 << 3;
  piVar2 = (int *)(*(code *)PTR_libgcc_divide_helper_010468_8c26b16c)(iVar1,a5,ar6,ar7);
  (*(code *)PTR_libgcc_divide_helper_010614_8c26b170)(iVar1,a5,ar6,ar7);
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010614_8c26b170)(iVar1,a5,ar6,ar7);
  for (a5_00 = 0; a5_00 < *(int *)(ar4 + 0xc); a5_00 = a5_00 + 1) {
    *(int *)(ar4 + 0x44) = iVar1;
    ar6 = piVar2;
    if (0 < iVar1) {
      ar6 = (int *)((int)piVar2 + 1);
    }
    FUN_8c26af42(ar5,ar6,&uStack_28,ar7);
    a5 = a5_00;
    ar7 = uStack_28;
    FUN_8c26af7a(ar4,a5_00,ar6,uStack_28);
  }
  (*(code *)PTR_FUN_8c26b168)(uStack_24,a5,ar6,ar7);
  *piStack_20 = ar5 + *(int *)(ar4 + 0x44);
  return *(undefined4 *)(ar4 + 0x44);
}



/* FUN_8c26b132 @ 8c26b132 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

int FUN_8c26b132(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *a5;
  int iVar2;
  undefined4 a5_00;
  undefined1 *a5_01;
  undefined4 *a6;
  undefined1 *a5_02;
  undefined4 uStack_1c;
  undefined4 auStack_18 [2];
  
  a6 = &uStack_1c;
  iVar2 = ar4;
  a5_00 = ar5;
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c26b16c)(ar4,ar5,ar6,ar7);
  a5 = (undefined1 *)(*(code *)PTR_libgcc_divide_helper_010468_8c26b16c)(iVar2,a5_00,ar6,ar7);
  if ((int)a5 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(code *)PTR_libgcc_divide_helper_010614_8c26b1d0)(iVar2,a5_00,ar6,ar7);
    *(int *)(ar4 + 0x44) = iVar1 * 8 - iVar2;
    a5_01 = a5;
    FUN_8c26af42(ar5,a5,&uStack_1c,ar7);
    (*(code *)PTR_FUN_8c26b1d4)(auStack_18,a5_01,a6,ar7);
    (*(code *)PTR_FUN_8c26b1d8)(0,a5_01,a6,ar7);
    for (a5_02 = (undefined1 *)0x0; (int)a5_02 < *(int *)(ar4 + 0xc); a5_02 = a5_02 + 1) {
      a5_01 = a5_02;
      a6 = (undefined4 *)a5;
      ar7 = uStack_1c;
      FUN_8c26af7a(ar4,a5_02,a5,uStack_1c);
    }
    (*(code *)PTR_FUN_8c26b1d8)(auStack_18[0],a5_01,a6,ar7);
    iVar2 = (int)a5 * iVar1 * 8;
  }
  return iVar2;
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
  int ar7_00;
  undefined *puVar1;
  undefined *puVar2;
  int ar6_00;
  undefined4 *ar4_00;
  
  puVar1 = PTR_DAT_8c26b308;
  ar7_00 = DAT_8c26b300;
  ar6_00 = 0;
  do {
    if (*(int *)(ar6_00 * 0x24 + DAT_8c26b300 + 4) == 0) break;
    ar6_00 = ar6_00 + 1;
  } while (ar6_00 < 0x20);
  if (ar6_00 == 0x20) {
    return 0;
  }
  ar4_00 = (undefined4 *)(ar6_00 * 0x24 + DAT_8c26b300);
  ar4_00[1] = 1;
  *ar4_00 = puVar1;
  puVar2 = PTR_DAT_8c26b310;
  puVar1 = PTR_DAT_8c26b30c;
  ar4_00[5] = ar4;
  ar4_00[6] = ar5;
  ar4_00[2] = puVar1;
  ar4_00[7] = puVar2;
  ar4_00[8] = ar4_00;
  FUN_8c26b2da(ar4_00,ar5,ar6_00,ar7_00);
  return ar4_00;
}



/* FUN_8c26b254 @ 8c26b254 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b254(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a7;
  undefined *puVar1;
  undefined *puVar2;
  int a6;
  int unaff_r14;
  undefined4 *a4;
  
  puVar1 = PTR_DAT_8c26b308;
  a7 = DAT_8c26b300;
  a6 = 0;
  do {
    if (*(int *)(a6 * 0x24 + DAT_8c26b300 + 4) == 0) break;
    a6 = a6 + 1;
  } while (a6 < unaff_r14);
  if (a6 == 0x20) {
    return 0;
  }
  a4 = (undefined4 *)(a6 * 0x24 + DAT_8c26b300);
  a4[1] = 1;
  *a4 = puVar1;
  puVar2 = PTR_DAT_8c26b310;
  puVar1 = PTR_DAT_8c26b30c;
  a4[5] = ar4;
  a4[6] = ar5;
  a4[2] = puVar1;
  a4[7] = puVar2;
  a4[8] = a4;
  FUN_8c26b2da(a4,ar5,a6,a7);
  return a4;
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
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *ar4_00;
  
  puVar1 = PTR_DAT_8c26b62c;
  iVar3 = 0;
  do {
    if (*(int *)(iVar3 * 0x30 + DAT_8c26b624 + 4) == 0) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40);
  if (iVar3 == 0x40) {
    return 0;
  }
  ar4_00 = (undefined4 *)(DAT_8c26b624 + iVar3 * 0x30);
  ar4_00[1] = 1;
  *ar4_00 = puVar1;
  puVar2 = PTR_DAT_8c26b634;
  puVar1 = PTR_DAT_8c26b630;
  ar4_00[7] = ar4;
  ar4_00[8] = ar5;
  ar4_00[9] = ar6;
  ar4_00[2] = puVar1;
  ar4_00[10] = puVar2;
  ar4_00[0xb] = ar4_00;
  FUN_8c26b5ee(ar4_00,ar5,ar6,iVar3 * 0x30);
  return ar4_00;
}



/* FUN_8c26b568 @ 8c26b568 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b568(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int in_r0;
  int iVar3;
  undefined4 *a4;
  
  puVar1 = PTR_DAT_8c26b62c;
  iVar3 = 0;
  do {
    if (*(int *)(iVar3 * 0x30 + DAT_8c26b624 + 4) == 0) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < in_r0);
  if (iVar3 == 0x40) {
    return 0;
  }
  a4 = (undefined4 *)(DAT_8c26b624 + iVar3 * 0x30);
  a4[1] = 1;
  *a4 = puVar1;
  puVar2 = PTR_DAT_8c26b634;
  puVar1 = PTR_DAT_8c26b630;
  a4[7] = ar4;
  a4[8] = ar5;
  a4[9] = ar6;
  a4[2] = puVar1;
  a4[10] = puVar2;
  a4[0xb] = a4;
  FUN_8c26b5ee(a4,ar5,ar6,iVar3 * 0x30);
  return a4;
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
  int iVar4;
  int a6;
  int *a7;
  
  a6 = ar6;
  a7 = ar7;
  uVar1 = FUN_8c26b4f4(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    iVar4 = *(int *)(ar4 + 0x10);
    iVar3 = (*(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x14)) + *(int *)(ar4 + 0x24);
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
    ar7[1] = iVar3;
    if (iVar3 < ar6) {
      ar6 = iVar3;
    }
    ar7[1] = ar6;
    *ar7 = *(int *)(ar4 + 0x1c) + *(int *)(ar4 + 0x14);
    uVar2 = (*(code *)PTR_libgcc_divide_helper_010614_8c26b854)(iVar3,iVar4,a6,a7);
    *(undefined4 *)(ar4 + 0x14) = uVar2;
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) - ar7[1];
  }
  else if (ar5 == 1) {
    iVar4 = (*(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x18)) + *(int *)(ar4 + 0x24);
    iVar3 = iVar4;
    if (*(int *)(ar4 + 0xc) < iVar4) {
      iVar3 = *(int *)(ar4 + 0xc);
    }
    ar7[1] = iVar3;
    if (iVar3 < ar6) {
      ar6 = iVar3;
    }
    ar7[1] = ar6;
    *ar7 = *(int *)(ar4 + 0x1c) + *(int *)(ar4 + 0x18);
    uVar2 = (*(code *)PTR_libgcc_divide_helper_010614_8c26b854)(iVar3,iVar4,a6,a7);
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

undefined4 FUN_8c26b7f4(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *a6;
  
  if ((ar6[1] < 1) || (*ar6 == 0)) {
    return in_r0;
  }
  iVar2 = ar4;
  a6 = ar6;
  uVar1 = FUN_8c26b4f4(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    uVar4 = *(undefined4 *)(ar4 + 0x20);
    iVar2 = (*(code *)PTR_libgcc_divide_helper_010614_8c26b854)(iVar2,uVar4,a6,ar7);
    iVar3 = (*(code *)PTR_libgcc_divide_helper_010614_8c26b854)(iVar2,uVar4,a6,ar7);
    if (iVar2 == iVar3) {
      *(int *)(ar4 + 0x14) = iVar2;
      *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + ar6[1];
      goto LAB_8c26b8b0;
    }
    iVar2 = *(int *)(ar4 + 0x28);
  }
  else if (ar5 == 1) {
    uVar4 = *(undefined4 *)(ar4 + 0x20);
    iVar2 = (*(code *)PTR_libgcc_divide_helper_010614_8c26b95c)(iVar2,uVar4,a6,ar7);
    iVar3 = (*(code *)PTR_libgcc_divide_helper_010614_8c26b95c)(iVar2,uVar4,a6,ar7);
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

undefined4 FUN_8c26b9d4(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r1;
  int iVar2;
  undefined4 *a4;
  
  puVar1 = PTR_DAT_8c26ba80;
  iVar2 = 0;
  do {
    if (*(char *)(iVar2 * 0x30 + DAT_8c26ba78 + 4) == '\0') break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < in_r1);
  if (iVar2 == 0x40) {
    return 0;
  }
  a4 = (undefined4 *)(DAT_8c26ba78 + iVar2 * 0x30);
  *(undefined1 *)(a4 + 1) = 1;
  *(undefined1 *)((int)a4 + 5) = (undefined1)ar4;
  *a4 = puVar1;
  puVar1 = PTR_DAT_8c26ba84;
  *(undefined1 *)((int)a4 + 5) = (undefined1)ar4;
  a4[2] = puVar1;
  puVar1 = PTR_DAT_8c26ba88;
  a4[3] = ar5;
  a4[4] = ar6 >> 4;
  a4[10] = puVar1;
  a4[0xb] = a4;
  FUN_8c26ba62(a4,ar5,ar6 >> 4,iVar2 * 0x30);
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

undefined4 FUN_8c26bb16(int ar4,int ar5,undefined1 *ar6,undefined4 *ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int a4;
  undefined1 *a4_00;
  int a5;
  undefined1 *a6;
  undefined4 *a7;
  undefined4 *puVar2;
  undefined4 auStack_24 [2];
  undefined1 auStack_1c [4];
  int iStack_18;
  
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
      in_r0 = (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,ar6,ar7);
    }
    *ar7 = 0;
    ar7[1] = 0;
    return in_r0;
  }
  a5 = ar5;
  a6 = ar6;
  a7 = ar7;
  uVar1 = FUN_8c26b960(ar4,ar5,ar6,ar7);
  a4 = ar5 * 4;
  puVar2 = *(undefined4 **)(ar4 + 0x18 + a4);
  if (puVar2 != (undefined4 *)0x0) {
    (*(code *)PTR_FUN_8c26bcdc)(a4,a5,a6,a7);
    if (iStack_18 <= (int)ar6) {
      (*(code *)PTR_FUN_8c26bcdc)(a4,a5,a6,a7);
      *(undefined4 *)(a4 + ar4 + 0x18) = *puVar2;
      *puVar2 = *(undefined4 *)(ar4 + 0x14);
      *(undefined4 **)(ar4 + 0x14) = puVar2;
      goto LAB_8c26bbce;
    }
    if (*(char *)(ar4 + 5) == '\x01') {
      a7 = auStack_24;
      a6 = auStack_1c;
      a4_00 = auStack_1c;
      (*(code *)PTR_FUN_8c26bce0)(a4_00,ar6,a6,a7);
      (*(code *)PTR_FUN_8c26bcdc)(a4_00,ar6,a6,a7);
      (*(code *)PTR_FUN_8c26bcdc)(a4_00,ar6,a6,a7);
      goto LAB_8c26bbce;
    }
  }
  *ar7 = 0;
  ar7[1] = 0;
LAB_8c26bbce:
  uVar1 = FUN_8c26b978(ar4,uVar1,a6,a7);
  return uVar1;
}



/* FUN_8c26bbe2 @ 8c26bbe2 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26bbe2(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  undefined4 uVar2;
  int *a4;
  int *piVar3;
  undefined4 *a5;
  int *a6;
  undefined4 ar7_00;
  
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x8c26bc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd);
      return uVar2;
    }
  }
  else if ((0 < ar6[1]) && (*ar6 != 0)) {
    a6 = ar6;
    uVar2 = FUN_8c26b960(ar4,ar5,ar6,ar7);
    ar7_00 = 0;
    a4 = (int *)(ar5 * 4 + ar4 + 0x18);
    piVar3 = (int *)0x0;
    while (*a4 != 0) {
      a4 = (int *)*a4;
      piVar3 = a4;
      a6 = a4;
    }
    if (((*(char *)(ar4 + 5) == '\x01') && (piVar3 != (int *)0x0)) &&
       (piVar3[2] + piVar3[3] == *ar6)) {
      piVar3[3] = piVar3[3] + ar6[1];
    }
    else {
      a5 = *(undefined4 **)(ar4 + 0x14);
      if (a5 == (undefined4 *)0x0) {
        if (*(int *)(ar4 + 0x28) != 0) {
          (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,0);
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x14) = *a5;
        puVar1 = PTR_FUN_8c26bcdc;
        *a5 = 0;
        (*(code *)puVar1)(a4,a5,a6,0);
        *a4 = (int)a5;
      }
    }
    uVar2 = FUN_8c26b978(ar4,uVar2,a6,ar7_00);
    return uVar2;
  }
  return in_r0;
}



/* FUN_8c26bcaa @ 8c26bcaa callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26bcaa(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *a4;
  int a5;
  int *a6;
  
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x8c26bcd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd);
      return uVar2;
    }
  }
  else if ((0 < ar6[1]) && (*ar6 != 0)) {
    a5 = ar5;
    a6 = ar6;
    uVar2 = FUN_8c26b960(ar4,ar5,ar6,ar7);
    iVar3 = ar5 * 4;
    iVar4 = *(int *)(iVar3 + ar4 + 0x18);
    if (((*(char *)(ar4 + 5) == '\x01') && (iVar4 != 0)) && (*ar6 + ar6[1] == *(int *)(iVar4 + 8)))
    {
      *(int *)(iVar4 + 8) = *ar6;
      *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + ar6[1];
    }
    else {
      a4 = *(undefined4 **)(ar4 + 0x14);
      if (a4 == (undefined4 *)0x0) {
        if (*(int *)(ar4 + 0x28) != 0) {
          (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,ar7);
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x14) = *a4;
        puVar1 = PTR_FUN_8c26be2c;
        *a4 = 0;
        (*(code *)puVar1)(a4,a5,a6,ar7);
        *a4 = *(undefined4 *)(ar4 + 0x18 + iVar3);
        *(undefined4 **)(ar4 + 0x18 + iVar3) = a4;
      }
    }
    uVar2 = FUN_8c26b978(ar4,uVar2,a6,ar7);
    return uVar2;
  }
  return in_r0;
}



/* FUN_8c26bd86 @ 8c26bd86 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26bd86(int ar4,int ar5,int ar6,undefined4 *ar7)

{
  int a4;
  undefined1 *puVar1;
  undefined1 auStack_10 [12];
  
  puVar1 = auStack_10;
  *ar7 = 0;
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
      (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,ar6,ar7);
    }
  }
  else {
    a4 = *(int *)(ar5 * 4 + ar4 + 0x18);
    if (a4 != 0) {
      (*(code *)PTR_FUN_8c26be2c)(a4,auStack_10,ar6,ar7);
      *ar7 = *(undefined4 *)(puVar1 + 4);
      if (*(char *)(ar4 + 5) == '\x01') {
        if (ar6 <= *(int *)(puVar1 + 4)) {
          return 1;
        }
      }
      else if (*(int *)(puVar1 + 4) == ar6) {
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
  
  uVar1 = (*(code *)PTR_FUN_8c26be6c)(ar4,ar5,ar6,ar7);
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


