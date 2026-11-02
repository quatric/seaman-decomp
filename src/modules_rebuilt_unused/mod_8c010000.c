/* Seaman (USA) region 0x8c010000-0x8c020000 (Ghidra decompiler) */

/* FUN_8c010080 @ 8c010080 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c010080(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  while( true ) {
    puVar1 = (undefined4 *)*DAT_8c0100ac;
    if (puVar1 == (undefined4 *)0x0) break;
    *DAT_8c0100ac = *puVar1;
    (*(code *)puVar1[1])(puVar1[2],0xffffffff,ar6,ar7);
  }
  return DAT_8c0100ac;
}



/* FUN_8c0100b0 @ 8c0100b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0100b0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)PTR_PTR_8c0100d8;
  if (PTR_PTR_8c0100d8 != (undefined *)0x0) {
    while( true ) {
      in_r0 = 0;
      if ((code *)*puVar1 == (code *)0x0) break;
      (*(code *)*puVar1)();
      puVar1 = puVar1 + 1;
    }
  }
  return in_r0;
}



/* FUN_8c0100b6 @ 8c0100b6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0100b6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 *unaff_r13;
  
  if (unaff_r13 != (undefined4 *)0x0) {
    while( true ) {
      in_r0 = 0;
      if ((code *)*unaff_r13 == (code *)0x0) break;
      (*(code *)*unaff_r13)(ar4,ar5,ar6,ar7);
      unaff_r13 = unaff_r13 + 1;
    }
  }
  return in_r0;
}



/* vec_delete_array @ 8c0100dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 vec_delete_array(int ar4,code *ar5,int ar6,int ar7)

{
  undefined4 in_r0;
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = ar6 * ar7 + ar4;
  for (; ar7 != 0; ar7 = ar7 + -1) {
    iVar1 = iVar1 - ar6;
    in_r0 = (*ar5)(iVar1,0xffffffff,uVar2);
  }
  return in_r0;
}



/* FUN_8c0100ec @ 8c0100ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0100ec(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r10;
  int unaff_r11;
  int a4;
  
  a4 = unaff_r10 * unaff_r11 + ar4;
  for (; unaff_r11 != 0; unaff_r11 = unaff_r11 + -1) {
    a4 = a4 - unaff_r10;
    in_r0 = (*ar5)(a4,0xffffffff,ar6,ar7);
  }
  return in_r0;
}



/* FUN_8c010120 @ 8c010120 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c010120(int ar4,code *ar5,code *ar6,int ar7)

{
  int iVar1;
  uint in_stack_00000000;
  undefined4 uStackY_1c;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = ar4;
  for (uStackY_1c = 0; uStackY_1c < in_stack_00000000; uStackY_1c = uStackY_1c + 1) {
    (*ar5)(iVar1,1,uVar2);
    iVar1 = iVar1 + ar7;
  }
  if ((uStackY_1c < in_stack_00000000) && (in_stack_00000000 = 0, ar6 != (code *)0x0)) {
    iVar1 = ar7 * uStackY_1c + ar4;
    for (; in_stack_00000000 = 0, uStackY_1c != 0; uStackY_1c = uStackY_1c - 1) {
      iVar1 = iVar1 - ar7;
      (*ar6)(iVar1,0xffffffff);
    }
  }
  return in_stack_00000000;
}



/* FUN_8c01012c @ 8c01012c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c01012c(int ar4,code *ar5,code *ar6,undefined4 ar7)

{
  code *a6;
  int unaff_r11;
  int iVar1;
  uint in_stack_00000014;
  undefined4 uStack_8;
  
  a6 = ar6;
  iVar1 = ar4;
  for (uStack_8 = 0; uStack_8 < in_stack_00000014; uStack_8 = uStack_8 + 1) {
    (*ar5)(iVar1,1,a6,ar7);
    iVar1 = iVar1 + unaff_r11;
  }
  if ((uStack_8 < in_stack_00000014) && (in_stack_00000014 = 0, ar6 != (code *)0x0)) {
    iVar1 = unaff_r11 * uStack_8 + ar4;
    for (; in_stack_00000014 = 0, uStack_8 != 0; uStack_8 = uStack_8 - 1) {
      iVar1 = iVar1 - unaff_r11;
      (*ar6)(iVar1,0xffffffff,a6,ar7);
    }
  }
  return in_stack_00000014;
}



/* global_list_push @ 8c0101a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 global_list_push(undefined4 ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_8c0101b8;
  *ar6 = *DAT_8c0101b8;
  ar6[1] = ar5;
  ar6[2] = ar4;
  *puVar1 = ar6;
  return ar4;
}



/* pure_virtual_stub @ 8c0101bc callers=0 callees=0 */

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Unknown calling convention */

undefined4 pure_virtual_stub(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}



/* strcpy @ 8c0101d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 strcpy(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 in_r0;
  
  do {
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    *ar4 = cVar1;
    ar4 = ar4 + 1;
  } while (cVar1 != '\0');
  return in_r0;
}



/* libgcc_divide_helper_0101e4 @ 8c0101e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int libgcc_divide_helper_0101e4(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar7;
  
  if (ar5 == 0) {
    return ar4;
  }
  uVar2 = (uint)((ar4 & 0x80000000) != 0);
  uVar3 = ar4 - (uVar2 != 0);
  bVar5 = (-uVar2 & 0x80000000) != 0;
  bVar4 = (ar5 & 0x80000000) != 0;
  uVar1 = uVar3 * 2;
  bVar6 = (-uVar2 & 0x80000000) == 0;
  uVar2 = uVar2 * -2 | (uint)((uVar3 & 0x80000000) != 0);
  if (bVar5 || bVar4) {
    if (!bVar5 && bVar4) {
      uVar3 = uVar2 + ar5;
      bVar7 = uVar3 < uVar2;
      if (bVar6) {
        bVar7 = !bVar7;
      }
    }
    else if (bVar5 && !bVar4) {
      uVar3 = uVar2 + ar5;
      bVar7 = uVar3 < uVar2;
      if (!bVar6) {
        bVar7 = !bVar7;
      }
    }
    else {
      uVar3 = uVar2 - ar5;
      bVar7 = uVar2 < uVar3;
      if (bVar6) {
        bVar7 = !bVar7;
      }
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar7 = uVar2 < uVar3;
    if (!bVar6) {
      bVar7 = !bVar7;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x80000000) != 0);
  if (bVar7 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar8 = uVar2 < uVar3;
    if (!bVar6) {
      bVar8 = !bVar8;
    }
  }
  else if (bVar7 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar8 = uVar3 < uVar2;
    if (bVar6) {
      bVar8 = !bVar8;
    }
  }
  else if (bVar7 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar8 = uVar3 < uVar2;
    if (!bVar6) {
      bVar8 = !bVar8;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar8 = uVar2 < uVar3;
    if (bVar6) {
      bVar8 = !bVar8;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x40000000) != 0);
  if (bVar8 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar9 = uVar2 < uVar3;
    if (!bVar6) {
      bVar9 = !bVar9;
    }
  }
  else if (bVar8 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar9 = uVar3 < uVar2;
    if (bVar6) {
      bVar9 = !bVar9;
    }
  }
  else if (bVar8 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar9 = uVar3 < uVar2;
    if (!bVar6) {
      bVar9 = !bVar9;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar9 = uVar2 < uVar3;
    if (bVar6) {
      bVar9 = !bVar9;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x20000000) != 0);
  if (bVar9 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar10 = uVar2 < uVar3;
    if (!bVar6) {
      bVar10 = !bVar10;
    }
  }
  else if (bVar9 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar10 = uVar3 < uVar2;
    if (bVar6) {
      bVar10 = !bVar10;
    }
  }
  else if (bVar9 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar10 = uVar3 < uVar2;
    if (!bVar6) {
      bVar10 = !bVar10;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar10 = uVar2 < uVar3;
    if (bVar6) {
      bVar10 = !bVar10;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x10000000) != 0);
  if (bVar10 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar11 = uVar2 < uVar3;
    if (!bVar6) {
      bVar11 = !bVar11;
    }
  }
  else if (bVar10 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar11 = uVar3 < uVar2;
    if (bVar6) {
      bVar11 = !bVar11;
    }
  }
  else if (bVar10 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar11 = uVar3 < uVar2;
    if (!bVar6) {
      bVar11 = !bVar11;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar11 = uVar2 < uVar3;
    if (bVar6) {
      bVar11 = !bVar11;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x8000000) != 0);
  if (bVar11 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar12 = uVar2 < uVar3;
    if (!bVar6) {
      bVar12 = !bVar12;
    }
  }
  else if (bVar11 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar12 = uVar3 < uVar2;
    if (bVar6) {
      bVar12 = !bVar12;
    }
  }
  else if (bVar11 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar12 = uVar3 < uVar2;
    if (!bVar6) {
      bVar12 = !bVar12;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar12 = uVar2 < uVar3;
    if (bVar6) {
      bVar12 = !bVar12;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x4000000) != 0);
  if (bVar12 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar13 = uVar2 < uVar3;
    if (!bVar6) {
      bVar13 = !bVar13;
    }
  }
  else if (bVar12 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar13 = uVar3 < uVar2;
    if (bVar6) {
      bVar13 = !bVar13;
    }
  }
  else if (bVar12 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar13 = uVar3 < uVar2;
    if (!bVar6) {
      bVar13 = !bVar13;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar13 = uVar2 < uVar3;
    if (bVar6) {
      bVar13 = !bVar13;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x2000000) != 0);
  if (bVar13 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar14 = uVar2 < uVar3;
    if (!bVar6) {
      bVar14 = !bVar14;
    }
  }
  else if (bVar13 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar14 = uVar3 < uVar2;
    if (bVar6) {
      bVar14 = !bVar14;
    }
  }
  else if (bVar13 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar14 = uVar3 < uVar2;
    if (!bVar6) {
      bVar14 = !bVar14;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar14 = uVar2 < uVar3;
    if (bVar6) {
      bVar14 = !bVar14;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x1000000) != 0);
  if (bVar14 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar15 = uVar2 < uVar3;
    if (!bVar6) {
      bVar15 = !bVar15;
    }
  }
  else if (bVar14 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar15 = uVar3 < uVar2;
    if (bVar6) {
      bVar15 = !bVar15;
    }
  }
  else if (bVar14 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar15 = uVar3 < uVar2;
    if (!bVar6) {
      bVar15 = !bVar15;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar15 = uVar2 < uVar3;
    if (bVar6) {
      bVar15 = !bVar15;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x800000) != 0);
  if (bVar15 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar16 = uVar2 < uVar3;
    if (!bVar6) {
      bVar16 = !bVar16;
    }
  }
  else if (bVar15 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar16 = uVar3 < uVar2;
    if (bVar6) {
      bVar16 = !bVar16;
    }
  }
  else if (bVar15 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar16 = uVar3 < uVar2;
    if (!bVar6) {
      bVar16 = !bVar16;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar16 = uVar2 < uVar3;
    if (bVar6) {
      bVar16 = !bVar16;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x400000) != 0);
  if (bVar16 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar17 = uVar2 < uVar3;
    if (!bVar6) {
      bVar17 = !bVar17;
    }
  }
  else if (bVar16 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar17 = uVar3 < uVar2;
    if (bVar6) {
      bVar17 = !bVar17;
    }
  }
  else if (bVar16 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar17 = uVar3 < uVar2;
    if (!bVar6) {
      bVar17 = !bVar17;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar17 = uVar2 < uVar3;
    if (bVar6) {
      bVar17 = !bVar17;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x200000) != 0);
  if (bVar17 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar18 = uVar2 < uVar3;
    if (!bVar6) {
      bVar18 = !bVar18;
    }
  }
  else if (bVar17 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar18 = uVar3 < uVar2;
    if (bVar6) {
      bVar18 = !bVar18;
    }
  }
  else if (bVar17 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar18 = uVar3 < uVar2;
    if (!bVar6) {
      bVar18 = !bVar18;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar18 = uVar2 < uVar3;
    if (bVar6) {
      bVar18 = !bVar18;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x100000) != 0);
  if (bVar18 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar19 = uVar2 < uVar3;
    if (!bVar6) {
      bVar19 = !bVar19;
    }
  }
  else if (bVar18 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar19 = uVar3 < uVar2;
    if (bVar6) {
      bVar19 = !bVar19;
    }
  }
  else if (bVar18 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar19 = uVar3 < uVar2;
    if (!bVar6) {
      bVar19 = !bVar19;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar19 = uVar2 < uVar3;
    if (bVar6) {
      bVar19 = !bVar19;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x80000) != 0);
  if (bVar19 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar20 = uVar2 < uVar3;
    if (!bVar6) {
      bVar20 = !bVar20;
    }
  }
  else if (bVar19 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar20 = uVar3 < uVar2;
    if (bVar6) {
      bVar20 = !bVar20;
    }
  }
  else if (bVar19 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar20 = uVar3 < uVar2;
    if (!bVar6) {
      bVar20 = !bVar20;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar20 = uVar2 < uVar3;
    if (bVar6) {
      bVar20 = !bVar20;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x40000) != 0);
  if (bVar20 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar21 = uVar2 < uVar3;
    if (!bVar6) {
      bVar21 = !bVar21;
    }
  }
  else if (bVar20 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar21 = uVar3 < uVar2;
    if (bVar6) {
      bVar21 = !bVar21;
    }
  }
  else if (bVar20 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar21 = uVar3 < uVar2;
    if (!bVar6) {
      bVar21 = !bVar21;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar21 = uVar2 < uVar3;
    if (bVar6) {
      bVar21 = !bVar21;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x20000) != 0);
  if (bVar21 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar22 = uVar2 < uVar3;
    if (!bVar6) {
      bVar22 = !bVar22;
    }
  }
  else if (bVar21 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar22 = uVar3 < uVar2;
    if (bVar6) {
      bVar22 = !bVar22;
    }
  }
  else if (bVar21 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar22 = uVar3 < uVar2;
    if (!bVar6) {
      bVar22 = !bVar22;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar22 = uVar2 < uVar3;
    if (bVar6) {
      bVar22 = !bVar22;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x10000) != 0);
  if (bVar22 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar23 = uVar2 < uVar3;
    if (!bVar6) {
      bVar23 = !bVar23;
    }
  }
  else if (bVar22 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar23 = uVar3 < uVar2;
    if (bVar6) {
      bVar23 = !bVar23;
    }
  }
  else if (bVar22 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar23 = uVar3 < uVar2;
    if (!bVar6) {
      bVar23 = !bVar23;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar23 = uVar2 < uVar3;
    if (bVar6) {
      bVar23 = !bVar23;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x8000) != 0);
  if (bVar23 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar24 = uVar2 < uVar3;
    if (!bVar6) {
      bVar24 = !bVar24;
    }
  }
  else if (bVar23 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar24 = uVar3 < uVar2;
    if (bVar6) {
      bVar24 = !bVar24;
    }
  }
  else if (bVar23 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar24 = uVar3 < uVar2;
    if (!bVar6) {
      bVar24 = !bVar24;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar24 = uVar2 < uVar3;
    if (bVar6) {
      bVar24 = !bVar24;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x4000) != 0);
  if (bVar24 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar25 = uVar2 < uVar3;
    if (!bVar6) {
      bVar25 = !bVar25;
    }
  }
  else if (bVar24 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar25 = uVar3 < uVar2;
    if (bVar6) {
      bVar25 = !bVar25;
    }
  }
  else if (bVar24 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar25 = uVar3 < uVar2;
    if (!bVar6) {
      bVar25 = !bVar25;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar25 = uVar2 < uVar3;
    if (bVar6) {
      bVar25 = !bVar25;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x2000) != 0);
  if (bVar25 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar26 = uVar2 < uVar3;
    if (!bVar6) {
      bVar26 = !bVar26;
    }
  }
  else if (bVar25 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar26 = uVar3 < uVar2;
    if (bVar6) {
      bVar26 = !bVar26;
    }
  }
  else if (bVar25 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar26 = uVar3 < uVar2;
    if (!bVar6) {
      bVar26 = !bVar26;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar26 = uVar2 < uVar3;
    if (bVar6) {
      bVar26 = !bVar26;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x1000) != 0);
  if (bVar26 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar27 = uVar2 < uVar3;
    if (!bVar6) {
      bVar27 = !bVar27;
    }
  }
  else if (bVar26 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar27 = uVar3 < uVar2;
    if (bVar6) {
      bVar27 = !bVar27;
    }
  }
  else if (bVar26 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar27 = uVar3 < uVar2;
    if (!bVar6) {
      bVar27 = !bVar27;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar27 = uVar2 < uVar3;
    if (bVar6) {
      bVar27 = !bVar27;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x800) != 0);
  if (bVar27 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar28 = uVar2 < uVar3;
    if (!bVar6) {
      bVar28 = !bVar28;
    }
  }
  else if (bVar27 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar28 = uVar3 < uVar2;
    if (bVar6) {
      bVar28 = !bVar28;
    }
  }
  else if (bVar27 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar28 = uVar3 < uVar2;
    if (!bVar6) {
      bVar28 = !bVar28;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar28 = uVar2 < uVar3;
    if (bVar6) {
      bVar28 = !bVar28;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x400) != 0);
  if (bVar28 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar29 = uVar2 < uVar3;
    if (!bVar6) {
      bVar29 = !bVar29;
    }
  }
  else if (bVar28 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar29 = uVar3 < uVar2;
    if (bVar6) {
      bVar29 = !bVar29;
    }
  }
  else if (bVar28 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar29 = uVar3 < uVar2;
    if (!bVar6) {
      bVar29 = !bVar29;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar29 = uVar2 < uVar3;
    if (bVar6) {
      bVar29 = !bVar29;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x200) != 0);
  if (bVar29 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar30 = uVar2 < uVar3;
    if (!bVar6) {
      bVar30 = !bVar30;
    }
  }
  else if (bVar29 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar30 = uVar3 < uVar2;
    if (bVar6) {
      bVar30 = !bVar30;
    }
  }
  else if (bVar29 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar30 = uVar3 < uVar2;
    if (!bVar6) {
      bVar30 = !bVar30;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar30 = uVar2 < uVar3;
    if (bVar6) {
      bVar30 = !bVar30;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x100) != 0);
  if (bVar30 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar31 = uVar2 < uVar3;
    if (!bVar6) {
      bVar31 = !bVar31;
    }
  }
  else if (bVar30 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar31 = uVar3 < uVar2;
    if (bVar6) {
      bVar31 = !bVar31;
    }
  }
  else if (bVar30 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar31 = uVar3 < uVar2;
    if (!bVar6) {
      bVar31 = !bVar31;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar31 = uVar2 < uVar3;
    if (bVar6) {
      bVar31 = !bVar31;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x80) != 0);
  if (bVar31 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar32 = uVar2 < uVar3;
    if (!bVar6) {
      bVar32 = !bVar32;
    }
  }
  else if (bVar31 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar32 = uVar3 < uVar2;
    if (bVar6) {
      bVar32 = !bVar32;
    }
  }
  else if (bVar31 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar32 = uVar3 < uVar2;
    if (!bVar6) {
      bVar32 = !bVar32;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar32 = uVar2 < uVar3;
    if (bVar6) {
      bVar32 = !bVar32;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x40) != 0);
  if (bVar32 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar33 = uVar2 < uVar3;
    if (!bVar6) {
      bVar33 = !bVar33;
    }
  }
  else if (bVar32 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar33 = uVar3 < uVar2;
    if (bVar6) {
      bVar33 = !bVar33;
    }
  }
  else if (bVar32 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar33 = uVar3 < uVar2;
    if (!bVar6) {
      bVar33 = !bVar33;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar33 = uVar2 < uVar3;
    if (bVar6) {
      bVar33 = !bVar33;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x20) != 0);
  if (bVar33 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar34 = uVar2 < uVar3;
    if (!bVar6) {
      bVar34 = !bVar34;
    }
  }
  else if (bVar33 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar34 = uVar3 < uVar2;
    if (bVar6) {
      bVar34 = !bVar34;
    }
  }
  else if (bVar33 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar34 = uVar3 < uVar2;
    if (!bVar6) {
      bVar34 = !bVar34;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar34 = uVar2 < uVar3;
    if (bVar6) {
      bVar34 = !bVar34;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x10) != 0);
  if (bVar34 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar35 = uVar2 < uVar3;
    if (!bVar6) {
      bVar35 = !bVar35;
    }
  }
  else if (bVar34 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar35 = uVar3 < uVar2;
    if (bVar6) {
      bVar35 = !bVar35;
    }
  }
  else if (bVar34 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar35 = uVar3 < uVar2;
    if (!bVar6) {
      bVar35 = !bVar35;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar35 = uVar2 < uVar3;
    if (bVar6) {
      bVar35 = !bVar35;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 8) != 0);
  if (bVar35 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar36 = uVar2 < uVar3;
    if (!bVar6) {
      bVar36 = !bVar36;
    }
  }
  else if (bVar35 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar36 = uVar3 < uVar2;
    if (bVar6) {
      bVar36 = !bVar36;
    }
  }
  else if (bVar35 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar36 = uVar3 < uVar2;
    if (!bVar6) {
      bVar36 = !bVar36;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar36 = uVar2 < uVar3;
    if (bVar6) {
      bVar36 = !bVar36;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 4) != 0);
  if (bVar36 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar37 = uVar2 < uVar3;
    if (!bVar6) {
      bVar37 = !bVar37;
    }
  }
  else if (bVar36 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar37 = uVar3 < uVar2;
    if (bVar6) {
      bVar37 = !bVar37;
    }
  }
  else if (bVar36 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar37 = uVar3 < uVar2;
    if (!bVar6) {
      bVar37 = !bVar37;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar37 = uVar2 < uVar3;
    if (bVar6) {
      bVar37 = !bVar37;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 2) != 0);
  if (bVar37 == false && !bVar4) {
    bVar38 = uVar2 < uVar2 - ar5;
    if (!bVar6) {
      bVar38 = !bVar38;
    }
  }
  else if (bVar37 == false && bVar4) {
    bVar38 = uVar2 + ar5 < uVar2;
    if (bVar6) {
      bVar38 = !bVar38;
    }
  }
  else if (bVar37 == true && !bVar4) {
    bVar38 = uVar2 + ar5 < uVar2;
    if (!bVar6) {
      bVar38 = !bVar38;
    }
  }
  else {
    bVar38 = uVar2 < uVar2 - ar5;
    if (bVar6) {
      bVar38 = !bVar38;
    }
  }
  return ((((((((((((((((((((((((((((((((uint)(bVar7 == bVar4) << 1 | (uint)(bVar8 == bVar4)) << 1 |
                                      (uint)(bVar9 == bVar4)) << 1 | (uint)(bVar10 == bVar4)) << 1 |
                                    (uint)(bVar11 == bVar4)) << 1 | (uint)(bVar12 == bVar4)) << 1 |
                                  (uint)(bVar13 == bVar4)) << 1 | (uint)(bVar14 == bVar4)) << 1 |
                                (uint)(bVar15 == bVar4)) << 1 | (uint)(bVar16 == bVar4)) << 1 |
                              (uint)(bVar17 == bVar4)) << 1 | (uint)(bVar18 == bVar4)) << 1 |
                            (uint)(bVar19 == bVar4)) << 1 | (uint)(bVar20 == bVar4)) << 1 |
                          (uint)(bVar21 == bVar4)) << 1 | (uint)(bVar22 == bVar4)) << 1 |
                        (uint)(bVar23 == bVar4)) << 1 | (uint)(bVar24 == bVar4)) << 1 |
                      (uint)(bVar25 == bVar4)) << 1 | (uint)(bVar26 == bVar4)) << 1 |
                    (uint)(bVar27 == bVar4)) << 1 | (uint)(bVar28 == bVar4)) << 1 |
                  (uint)(bVar29 == bVar4)) << 1 | (uint)(bVar30 == bVar4)) << 1 |
                (uint)(bVar31 == bVar4)) << 1 | (uint)(bVar32 == bVar4)) << 1 |
              (uint)(bVar33 == bVar4)) << 1 | (uint)(bVar34 == bVar4)) << 1 |
            (uint)(bVar35 == bVar4)) << 1 | (uint)(bVar36 == bVar4)) << 1 | (uint)(bVar37 == bVar4))
          << 1 | (uint)(bVar38 == bVar4)) + (uint)(bVar4 != bVar5);
}



/* libgcc_divide_helper_010284 @ 8c010284 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c01030a) */
/* WARNING: Removing unreachable block (ram,0x8c010302) */
/* WARNING: Removing unreachable block (ram,0x8c0102fa) */
/* WARNING: Removing unreachable block (ram,0x8c0102f2) */
/* WARNING: Removing unreachable block (ram,0x8c0102ea) */
/* WARNING: Removing unreachable block (ram,0x8c0102e2) */
/* WARNING: Removing unreachable block (ram,0x8c0102da) */
/* WARNING: Removing unreachable block (ram,0x8c0102d2) */
/* WARNING: Removing unreachable block (ram,0x8c0102ca) */
/* WARNING: Removing unreachable block (ram,0x8c0102c2) */
/* WARNING: Removing unreachable block (ram,0x8c0102ba) */
/* WARNING: Removing unreachable block (ram,0x8c0102b2) */
/* WARNING: Removing unreachable block (ram,0x8c0102aa) */
/* WARNING: Removing unreachable block (ram,0x8c0102a2) */
/* WARNING: Removing unreachable block (ram,0x8c01029a) */
/* WARNING: Removing unreachable block (ram,0x8c010292) */
/* WARNING: Removing unreachable block (ram,0x8c010296) */
/* WARNING: Removing unreachable block (ram,0x8c01029e) */
/* WARNING: Removing unreachable block (ram,0x8c0102a6) */
/* WARNING: Removing unreachable block (ram,0x8c0102ae) */
/* WARNING: Removing unreachable block (ram,0x8c0102b6) */
/* WARNING: Removing unreachable block (ram,0x8c0102be) */
/* WARNING: Removing unreachable block (ram,0x8c0102c6) */
/* WARNING: Removing unreachable block (ram,0x8c0102ce) */
/* WARNING: Removing unreachable block (ram,0x8c0102d6) */
/* WARNING: Removing unreachable block (ram,0x8c0102de) */
/* WARNING: Removing unreachable block (ram,0x8c0102e6) */
/* WARNING: Removing unreachable block (ram,0x8c0102ee) */
/* WARNING: Removing unreachable block (ram,0x8c0102f6) */
/* WARNING: Removing unreachable block (ram,0x8c0102fe) */
/* WARNING: Removing unreachable block (ram,0x8c010306) */
/* WARNING: Removing unreachable block (ram,0x8c01030e) */
/* WARNING: Unknown calling convention */

uint libgcc_divide_helper_010284(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar6;
  
  if (ar5 == 0) {
    return ar4;
  }
  uVar3 = (uint)((ar4 & 0x80000000) != 0);
  uVar1 = uVar3 - ar5;
  bVar4 = uVar3 < uVar1;
  uVar3 = ar4 << 2;
  bVar5 = (uVar1 & 0x80000000) == 0;
  uVar1 = uVar1 * 2 | (uint)((ar4 & 0x40000000) != 0);
  if (bVar4) {
    if (bVar4) {
      uVar2 = uVar1 + ar5;
      bVar6 = uVar2 < uVar1;
      if (!bVar5) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar5) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar6 = uVar1 < uVar2;
    if (!bVar5) {
      bVar6 = !bVar6;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x80000000) != 0);
  if (bVar6) {
    if (bVar6) {
      uVar2 = uVar1 + ar5;
      bVar7 = uVar2 < uVar1;
      if (!bVar5) {
        bVar7 = !bVar7;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar7 = uVar1 < uVar2;
      if (bVar5) {
        bVar7 = !bVar7;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar7 = uVar1 < uVar2;
    if (!bVar5) {
      bVar7 = !bVar7;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x40000000) != 0);
  if (bVar7) {
    if (bVar7) {
      uVar2 = uVar1 + ar5;
      bVar8 = uVar2 < uVar1;
      if (!bVar5) {
        bVar8 = !bVar8;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar8 = uVar1 < uVar2;
      if (bVar5) {
        bVar8 = !bVar8;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar8 = uVar1 < uVar2;
    if (!bVar5) {
      bVar8 = !bVar8;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x20000000) != 0);
  if (bVar8) {
    if (bVar8) {
      uVar2 = uVar1 + ar5;
      bVar9 = uVar2 < uVar1;
      if (!bVar5) {
        bVar9 = !bVar9;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar9 = uVar1 < uVar2;
      if (bVar5) {
        bVar9 = !bVar9;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar9 = uVar1 < uVar2;
    if (!bVar5) {
      bVar9 = !bVar9;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x10000000) != 0);
  if (bVar9) {
    if (bVar9) {
      uVar2 = uVar1 + ar5;
      bVar10 = uVar2 < uVar1;
      if (!bVar5) {
        bVar10 = !bVar10;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar10 = uVar1 < uVar2;
      if (bVar5) {
        bVar10 = !bVar10;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar10 = uVar1 < uVar2;
    if (!bVar5) {
      bVar10 = !bVar10;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x8000000) != 0);
  if (bVar10) {
    if (bVar10) {
      uVar2 = uVar1 + ar5;
      bVar11 = uVar2 < uVar1;
      if (!bVar5) {
        bVar11 = !bVar11;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar11 = uVar1 < uVar2;
      if (bVar5) {
        bVar11 = !bVar11;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar11 = uVar1 < uVar2;
    if (!bVar5) {
      bVar11 = !bVar11;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x4000000) != 0);
  if (bVar11) {
    if (bVar11) {
      uVar2 = uVar1 + ar5;
      bVar12 = uVar2 < uVar1;
      if (!bVar5) {
        bVar12 = !bVar12;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar12 = uVar1 < uVar2;
      if (bVar5) {
        bVar12 = !bVar12;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar12 = uVar1 < uVar2;
    if (!bVar5) {
      bVar12 = !bVar12;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x2000000) != 0);
  if (bVar12) {
    if (bVar12) {
      uVar2 = uVar1 + ar5;
      bVar13 = uVar2 < uVar1;
      if (!bVar5) {
        bVar13 = !bVar13;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar13 = uVar1 < uVar2;
      if (bVar5) {
        bVar13 = !bVar13;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar13 = uVar1 < uVar2;
    if (!bVar5) {
      bVar13 = !bVar13;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x1000000) != 0);
  if (bVar13) {
    if (bVar13) {
      uVar2 = uVar1 + ar5;
      bVar14 = uVar2 < uVar1;
      if (!bVar5) {
        bVar14 = !bVar14;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar14 = uVar1 < uVar2;
      if (bVar5) {
        bVar14 = !bVar14;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar14 = uVar1 < uVar2;
    if (!bVar5) {
      bVar14 = !bVar14;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x800000) != 0);
  if (bVar14) {
    if (bVar14) {
      uVar2 = uVar1 + ar5;
      bVar15 = uVar2 < uVar1;
      if (!bVar5) {
        bVar15 = !bVar15;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar15 = uVar1 < uVar2;
      if (bVar5) {
        bVar15 = !bVar15;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar15 = uVar1 < uVar2;
    if (!bVar5) {
      bVar15 = !bVar15;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x400000) != 0);
  if (bVar15) {
    if (bVar15) {
      uVar2 = uVar1 + ar5;
      bVar16 = uVar2 < uVar1;
      if (!bVar5) {
        bVar16 = !bVar16;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar16 = uVar1 < uVar2;
      if (bVar5) {
        bVar16 = !bVar16;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar16 = uVar1 < uVar2;
    if (!bVar5) {
      bVar16 = !bVar16;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x200000) != 0);
  if (bVar16) {
    if (bVar16) {
      uVar2 = uVar1 + ar5;
      bVar17 = uVar2 < uVar1;
      if (!bVar5) {
        bVar17 = !bVar17;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar17 = uVar1 < uVar2;
      if (bVar5) {
        bVar17 = !bVar17;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar17 = uVar1 < uVar2;
    if (!bVar5) {
      bVar17 = !bVar17;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x100000) != 0);
  if (bVar17) {
    if (bVar17) {
      uVar2 = uVar1 + ar5;
      bVar18 = uVar2 < uVar1;
      if (!bVar5) {
        bVar18 = !bVar18;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar18 = uVar1 < uVar2;
      if (bVar5) {
        bVar18 = !bVar18;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar18 = uVar1 < uVar2;
    if (!bVar5) {
      bVar18 = !bVar18;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x80000) != 0);
  if (bVar18) {
    if (bVar18) {
      uVar2 = uVar1 + ar5;
      bVar19 = uVar2 < uVar1;
      if (!bVar5) {
        bVar19 = !bVar19;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar19 = uVar1 < uVar2;
      if (bVar5) {
        bVar19 = !bVar19;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar19 = uVar1 < uVar2;
    if (!bVar5) {
      bVar19 = !bVar19;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x40000) != 0);
  if (bVar19) {
    if (bVar19) {
      uVar2 = uVar1 + ar5;
      bVar20 = uVar2 < uVar1;
      if (!bVar5) {
        bVar20 = !bVar20;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar20 = uVar1 < uVar2;
      if (bVar5) {
        bVar20 = !bVar20;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar20 = uVar1 < uVar2;
    if (!bVar5) {
      bVar20 = !bVar20;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x20000) != 0);
  if (bVar20) {
    if (bVar20) {
      uVar2 = uVar1 + ar5;
      bVar21 = uVar2 < uVar1;
      if (!bVar5) {
        bVar21 = !bVar21;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar21 = uVar1 < uVar2;
      if (bVar5) {
        bVar21 = !bVar21;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar21 = uVar1 < uVar2;
    if (!bVar5) {
      bVar21 = !bVar21;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x10000) != 0);
  if (bVar21) {
    if (bVar21) {
      uVar2 = uVar1 + ar5;
      bVar22 = uVar2 < uVar1;
      if (!bVar5) {
        bVar22 = !bVar22;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar22 = uVar1 < uVar2;
      if (bVar5) {
        bVar22 = !bVar22;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar22 = uVar1 < uVar2;
    if (!bVar5) {
      bVar22 = !bVar22;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x8000) != 0);
  if (bVar22) {
    if (bVar22) {
      uVar2 = uVar1 + ar5;
      bVar23 = uVar2 < uVar1;
      if (!bVar5) {
        bVar23 = !bVar23;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar23 = uVar1 < uVar2;
      if (bVar5) {
        bVar23 = !bVar23;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar23 = uVar1 < uVar2;
    if (!bVar5) {
      bVar23 = !bVar23;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x4000) != 0);
  if (bVar23) {
    if (bVar23) {
      uVar2 = uVar1 + ar5;
      bVar24 = uVar2 < uVar1;
      if (!bVar5) {
        bVar24 = !bVar24;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar24 = uVar1 < uVar2;
      if (bVar5) {
        bVar24 = !bVar24;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar24 = uVar1 < uVar2;
    if (!bVar5) {
      bVar24 = !bVar24;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x2000) != 0);
  if (bVar24) {
    if (bVar24) {
      uVar2 = uVar1 + ar5;
      bVar25 = uVar2 < uVar1;
      if (!bVar5) {
        bVar25 = !bVar25;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar25 = uVar1 < uVar2;
      if (bVar5) {
        bVar25 = !bVar25;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar25 = uVar1 < uVar2;
    if (!bVar5) {
      bVar25 = !bVar25;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x1000) != 0);
  if (bVar25) {
    if (bVar25) {
      uVar2 = uVar1 + ar5;
      bVar26 = uVar2 < uVar1;
      if (!bVar5) {
        bVar26 = !bVar26;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar26 = uVar1 < uVar2;
      if (bVar5) {
        bVar26 = !bVar26;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar26 = uVar1 < uVar2;
    if (!bVar5) {
      bVar26 = !bVar26;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x800) != 0);
  if (bVar26) {
    if (bVar26) {
      uVar2 = uVar1 + ar5;
      bVar27 = uVar2 < uVar1;
      if (!bVar5) {
        bVar27 = !bVar27;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar27 = uVar1 < uVar2;
      if (bVar5) {
        bVar27 = !bVar27;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar27 = uVar1 < uVar2;
    if (!bVar5) {
      bVar27 = !bVar27;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x400) != 0);
  if (bVar27) {
    if (bVar27) {
      uVar2 = uVar1 + ar5;
      bVar28 = uVar2 < uVar1;
      if (!bVar5) {
        bVar28 = !bVar28;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar28 = uVar1 < uVar2;
      if (bVar5) {
        bVar28 = !bVar28;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar28 = uVar1 < uVar2;
    if (!bVar5) {
      bVar28 = !bVar28;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x200) != 0);
  if (bVar28) {
    if (bVar28) {
      uVar2 = uVar1 + ar5;
      bVar29 = uVar2 < uVar1;
      if (!bVar5) {
        bVar29 = !bVar29;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar29 = uVar1 < uVar2;
      if (bVar5) {
        bVar29 = !bVar29;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar29 = uVar1 < uVar2;
    if (!bVar5) {
      bVar29 = !bVar29;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x100) != 0);
  if (bVar29) {
    if (bVar29) {
      uVar2 = uVar1 + ar5;
      bVar30 = uVar2 < uVar1;
      if (!bVar5) {
        bVar30 = !bVar30;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar30 = uVar1 < uVar2;
      if (bVar5) {
        bVar30 = !bVar30;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar30 = uVar1 < uVar2;
    if (!bVar5) {
      bVar30 = !bVar30;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x80) != 0);
  if (bVar30) {
    if (bVar30) {
      uVar2 = uVar1 + ar5;
      bVar31 = uVar2 < uVar1;
      if (!bVar5) {
        bVar31 = !bVar31;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar31 = uVar1 < uVar2;
      if (bVar5) {
        bVar31 = !bVar31;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar31 = uVar1 < uVar2;
    if (!bVar5) {
      bVar31 = !bVar31;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x40) != 0);
  if (bVar31) {
    if (bVar31) {
      uVar2 = uVar1 + ar5;
      bVar32 = uVar2 < uVar1;
      if (!bVar5) {
        bVar32 = !bVar32;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar32 = uVar1 < uVar2;
      if (bVar5) {
        bVar32 = !bVar32;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar32 = uVar1 < uVar2;
    if (!bVar5) {
      bVar32 = !bVar32;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x20) != 0);
  if (bVar32) {
    if (bVar32) {
      uVar2 = uVar1 + ar5;
      bVar33 = uVar2 < uVar1;
      if (!bVar5) {
        bVar33 = !bVar33;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar33 = uVar1 < uVar2;
      if (bVar5) {
        bVar33 = !bVar33;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar33 = uVar1 < uVar2;
    if (!bVar5) {
      bVar33 = !bVar33;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x10) != 0);
  if (bVar33) {
    if (bVar33) {
      uVar2 = uVar1 + ar5;
      bVar34 = uVar2 < uVar1;
      if (!bVar5) {
        bVar34 = !bVar34;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar34 = uVar1 < uVar2;
      if (bVar5) {
        bVar34 = !bVar34;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar34 = uVar1 < uVar2;
    if (!bVar5) {
      bVar34 = !bVar34;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 8) != 0);
  if (bVar34) {
    if (bVar34) {
      uVar2 = uVar1 + ar5;
      bVar35 = uVar2 < uVar1;
      if (!bVar5) {
        bVar35 = !bVar35;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar35 = uVar1 < uVar2;
      if (bVar5) {
        bVar35 = !bVar35;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar35 = uVar1 < uVar2;
    if (!bVar5) {
      bVar35 = !bVar35;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 4) != 0);
  if (bVar35) {
    if (bVar35) {
      bVar36 = uVar1 + ar5 < uVar1;
      if (!bVar5) {
        bVar36 = !bVar36;
      }
    }
    else {
      bVar36 = uVar1 < uVar1 - ar5;
      if (bVar5) {
        bVar36 = !bVar36;
      }
    }
  }
  else {
    bVar36 = uVar1 < uVar1 - ar5;
    if (!bVar5) {
      bVar36 = !bVar36;
    }
  }
  return (((((((((((((((((((((((((((((((uint)!bVar4 << 1 | (uint)!bVar6) << 1 | (uint)!bVar7) << 1 |
                                    (uint)!bVar8) << 1 | (uint)!bVar9) << 1 | (uint)!bVar10) << 1 |
                                 (uint)!bVar11) << 1 | (uint)!bVar12) << 1 | (uint)!bVar13) << 1 |
                              (uint)!bVar14) << 1 | (uint)!bVar15) << 1 | (uint)!bVar16) << 1 |
                           (uint)!bVar17) << 1 | (uint)!bVar18) << 1 | (uint)!bVar19) << 1 |
                        (uint)!bVar20) << 1 | (uint)!bVar21) << 1 | (uint)!bVar22) << 1 |
                     (uint)!bVar23) << 1 | (uint)!bVar24) << 1 | (uint)!bVar25) << 1 | (uint)!bVar26
                  ) << 1 | (uint)!bVar27) << 1 | (uint)!bVar28) << 1 | (uint)!bVar29) << 1 |
              (uint)!bVar30) << 1 | (uint)!bVar31) << 1 | (uint)!bVar32) << 1 | (uint)!bVar33) << 1
          | (uint)!bVar34) << 1 | (uint)!bVar35) << 1 | (uint)!bVar36;
}



/* libgcc_divide_helper_01031c @ 8c01031c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int libgcc_divide_helper_01031c(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 in_r0;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  if (ar5 == 0) {
    return in_r0;
  }
  bVar5 = (ar4 & 0x80000000) != 0;
  uVar2 = (uint)bVar5;
  uVar3 = ar4 - (uVar2 != 0);
  bVar6 = (-uVar2 & 0x80000000) != 0;
  bVar4 = (ar5 & 0x80000000) != 0;
  bVar7 = (-uVar2 & 0x80000000) == 0;
  uVar2 = uVar2 * -2 | (uint)((uVar3 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 2 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 4 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 8 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x10 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x20 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x40 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x80 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x100 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x200 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x400 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x800 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x1000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x2000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x4000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x8000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x10000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x20000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x40000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x80000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x100000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x200000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x400000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x800000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x1000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x2000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x4000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x8000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x10000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x20000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x40000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  uVar2 = uVar1 << 1 | (uint)((uVar3 & 1) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar2 = uVar2 + ar5;
    }
    else if (bVar6 && !bVar4) {
      uVar2 = uVar2 + ar5;
    }
    else {
      uVar2 = uVar2 - ar5;
    }
  }
  else {
    uVar2 = uVar2 - ar5;
  }
  if (((uVar2 & 0x80000000) != 0) != bVar5) {
    bVar6 = (uVar2 & 0x80000000) != 0;
    bVar4 = (ar5 & 0x80000000) != 0;
    uVar2 = ((int)uVar2 >> 1) << 1 | (uint)((uVar2 & 1) != 0);
    if (bVar6 || bVar4) {
      if (!bVar6 && bVar4) {
        uVar2 = uVar2 + ar5;
      }
      else if (bVar6 && !bVar4) {
        uVar2 = uVar2 + ar5;
      }
      else {
        uVar2 = uVar2 - ar5;
      }
    }
    else {
      uVar2 = uVar2 - ar5;
    }
  }
  return uVar2 + bVar5;
}



/* libgcc_divide_helper_0103d0 @ 8c0103d0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c010456) */
/* WARNING: Removing unreachable block (ram,0x8c01044e) */
/* WARNING: Removing unreachable block (ram,0x8c010446) */
/* WARNING: Removing unreachable block (ram,0x8c01043e) */
/* WARNING: Removing unreachable block (ram,0x8c010436) */
/* WARNING: Removing unreachable block (ram,0x8c01042e) */
/* WARNING: Removing unreachable block (ram,0x8c010426) */
/* WARNING: Removing unreachable block (ram,0x8c01041e) */
/* WARNING: Removing unreachable block (ram,0x8c010416) */
/* WARNING: Removing unreachable block (ram,0x8c01040e) */
/* WARNING: Removing unreachable block (ram,0x8c010406) */
/* WARNING: Removing unreachable block (ram,0x8c0103fe) */
/* WARNING: Removing unreachable block (ram,0x8c0103f6) */
/* WARNING: Removing unreachable block (ram,0x8c0103ee) */
/* WARNING: Removing unreachable block (ram,0x8c0103e6) */
/* WARNING: Removing unreachable block (ram,0x8c0103de) */
/* WARNING: Removing unreachable block (ram,0x8c0103e2) */
/* WARNING: Removing unreachable block (ram,0x8c0103ea) */
/* WARNING: Removing unreachable block (ram,0x8c0103f2) */
/* WARNING: Removing unreachable block (ram,0x8c0103fa) */
/* WARNING: Removing unreachable block (ram,0x8c010402) */
/* WARNING: Removing unreachable block (ram,0x8c01040a) */
/* WARNING: Removing unreachable block (ram,0x8c010412) */
/* WARNING: Removing unreachable block (ram,0x8c01041a) */
/* WARNING: Removing unreachable block (ram,0x8c010422) */
/* WARNING: Removing unreachable block (ram,0x8c01042a) */
/* WARNING: Removing unreachable block (ram,0x8c010432) */
/* WARNING: Removing unreachable block (ram,0x8c01043a) */
/* WARNING: Removing unreachable block (ram,0x8c010442) */
/* WARNING: Removing unreachable block (ram,0x8c01044a) */
/* WARNING: Removing unreachable block (ram,0x8c010452) */
/* WARNING: Removing unreachable block (ram,0x8c01045a) */
/* WARNING: Unknown calling convention */

uint libgcc_divide_helper_0103d0(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_r0;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if (ar5 == 0) {
    return in_r0;
  }
  uVar2 = (uint)((ar4 & 0x80000000) != 0);
  uVar1 = uVar2 - ar5;
  bVar4 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 * 2 | (uint)((ar4 & 0x40000000) != 0);
  if (uVar2 < uVar1) {
    if (uVar2 < uVar1) {
      uVar1 = uVar3 + ar5;
      bVar5 = uVar1 < uVar3;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar1 = uVar3 - ar5;
      bVar5 = uVar3 < uVar1;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar1 = uVar3 - ar5;
    bVar5 = uVar3 < uVar1;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar1 & 0x80000000) == 0;
  uVar1 = uVar1 << 1 | (uint)((ar4 & 0x20000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x10000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x8000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x4000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x2000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x1000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x800000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x400000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x200000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x100000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x80000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x40000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x20000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x10000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x8000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x4000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x2000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x1000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x800) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x400) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x200) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x100) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x80) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x40) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x20) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x10) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 8) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 4) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 2) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 1) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  if (bVar5) {
    uVar3 = uVar3 + ar5;
  }
  return uVar3;
}



/* libgcc_divide_helper_010468 @ 8c010468 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int libgcc_divide_helper_010468(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint in_r0;
  uint in_r1;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar7;
  
  if (in_r0 == 0) {
    *DAT_8c010514 = DAT_8c010518;
    return 0;
  }
  uVar2 = (uint)((in_r1 & 0x80000000) != 0);
  uVar3 = in_r1 - (uVar2 != 0);
  bVar5 = (-uVar2 & 0x80000000) != 0;
  bVar4 = (in_r0 & 0x80000000) != 0;
  uVar1 = uVar3 * 2;
  bVar6 = (-uVar2 & 0x80000000) == 0;
  uVar2 = uVar2 * -2 | (uint)((uVar3 & 0x80000000) != 0);
  if (bVar5 || bVar4) {
    if (!bVar5 && bVar4) {
      uVar3 = uVar2 + in_r0;
      bVar7 = uVar3 < uVar2;
      if (bVar6) {
        bVar7 = !bVar7;
      }
    }
    else if (bVar5 && !bVar4) {
      uVar3 = uVar2 + in_r0;
      bVar7 = uVar3 < uVar2;
      if (!bVar6) {
        bVar7 = !bVar7;
      }
    }
    else {
      uVar3 = uVar2 - in_r0;
      bVar7 = uVar2 < uVar3;
      if (bVar6) {
        bVar7 = !bVar7;
      }
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar7 = uVar2 < uVar3;
    if (!bVar6) {
      bVar7 = !bVar7;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x80000000) != 0);
  if (bVar7 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar8 = uVar2 < uVar3;
    if (!bVar6) {
      bVar8 = !bVar8;
    }
  }
  else if (bVar7 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar8 = uVar3 < uVar2;
    if (bVar6) {
      bVar8 = !bVar8;
    }
  }
  else if (bVar7 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar8 = uVar3 < uVar2;
    if (!bVar6) {
      bVar8 = !bVar8;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar8 = uVar2 < uVar3;
    if (bVar6) {
      bVar8 = !bVar8;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x40000000) != 0);
  if (bVar8 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar9 = uVar2 < uVar3;
    if (!bVar6) {
      bVar9 = !bVar9;
    }
  }
  else if (bVar8 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar9 = uVar3 < uVar2;
    if (bVar6) {
      bVar9 = !bVar9;
    }
  }
  else if (bVar8 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar9 = uVar3 < uVar2;
    if (!bVar6) {
      bVar9 = !bVar9;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar9 = uVar2 < uVar3;
    if (bVar6) {
      bVar9 = !bVar9;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x20000000) != 0);
  if (bVar9 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar10 = uVar2 < uVar3;
    if (!bVar6) {
      bVar10 = !bVar10;
    }
  }
  else if (bVar9 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar10 = uVar3 < uVar2;
    if (bVar6) {
      bVar10 = !bVar10;
    }
  }
  else if (bVar9 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar10 = uVar3 < uVar2;
    if (!bVar6) {
      bVar10 = !bVar10;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar10 = uVar2 < uVar3;
    if (bVar6) {
      bVar10 = !bVar10;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x10000000) != 0);
  if (bVar10 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar11 = uVar2 < uVar3;
    if (!bVar6) {
      bVar11 = !bVar11;
    }
  }
  else if (bVar10 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar11 = uVar3 < uVar2;
    if (bVar6) {
      bVar11 = !bVar11;
    }
  }
  else if (bVar10 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar11 = uVar3 < uVar2;
    if (!bVar6) {
      bVar11 = !bVar11;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar11 = uVar2 < uVar3;
    if (bVar6) {
      bVar11 = !bVar11;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x8000000) != 0);
  if (bVar11 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar12 = uVar2 < uVar3;
    if (!bVar6) {
      bVar12 = !bVar12;
    }
  }
  else if (bVar11 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar12 = uVar3 < uVar2;
    if (bVar6) {
      bVar12 = !bVar12;
    }
  }
  else if (bVar11 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar12 = uVar3 < uVar2;
    if (!bVar6) {
      bVar12 = !bVar12;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar12 = uVar2 < uVar3;
    if (bVar6) {
      bVar12 = !bVar12;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x4000000) != 0);
  if (bVar12 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar13 = uVar2 < uVar3;
    if (!bVar6) {
      bVar13 = !bVar13;
    }
  }
  else if (bVar12 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar13 = uVar3 < uVar2;
    if (bVar6) {
      bVar13 = !bVar13;
    }
  }
  else if (bVar12 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar13 = uVar3 < uVar2;
    if (!bVar6) {
      bVar13 = !bVar13;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar13 = uVar2 < uVar3;
    if (bVar6) {
      bVar13 = !bVar13;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x2000000) != 0);
  if (bVar13 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar14 = uVar2 < uVar3;
    if (!bVar6) {
      bVar14 = !bVar14;
    }
  }
  else if (bVar13 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar14 = uVar3 < uVar2;
    if (bVar6) {
      bVar14 = !bVar14;
    }
  }
  else if (bVar13 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar14 = uVar3 < uVar2;
    if (!bVar6) {
      bVar14 = !bVar14;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar14 = uVar2 < uVar3;
    if (bVar6) {
      bVar14 = !bVar14;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x1000000) != 0);
  if (bVar14 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar15 = uVar2 < uVar3;
    if (!bVar6) {
      bVar15 = !bVar15;
    }
  }
  else if (bVar14 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar15 = uVar3 < uVar2;
    if (bVar6) {
      bVar15 = !bVar15;
    }
  }
  else if (bVar14 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar15 = uVar3 < uVar2;
    if (!bVar6) {
      bVar15 = !bVar15;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar15 = uVar2 < uVar3;
    if (bVar6) {
      bVar15 = !bVar15;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x800000) != 0);
  if (bVar15 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar16 = uVar2 < uVar3;
    if (!bVar6) {
      bVar16 = !bVar16;
    }
  }
  else if (bVar15 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar16 = uVar3 < uVar2;
    if (bVar6) {
      bVar16 = !bVar16;
    }
  }
  else if (bVar15 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar16 = uVar3 < uVar2;
    if (!bVar6) {
      bVar16 = !bVar16;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar16 = uVar2 < uVar3;
    if (bVar6) {
      bVar16 = !bVar16;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x400000) != 0);
  if (bVar16 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar17 = uVar2 < uVar3;
    if (!bVar6) {
      bVar17 = !bVar17;
    }
  }
  else if (bVar16 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar17 = uVar3 < uVar2;
    if (bVar6) {
      bVar17 = !bVar17;
    }
  }
  else if (bVar16 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar17 = uVar3 < uVar2;
    if (!bVar6) {
      bVar17 = !bVar17;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar17 = uVar2 < uVar3;
    if (bVar6) {
      bVar17 = !bVar17;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x200000) != 0);
  if (bVar17 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar18 = uVar2 < uVar3;
    if (!bVar6) {
      bVar18 = !bVar18;
    }
  }
  else if (bVar17 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar18 = uVar3 < uVar2;
    if (bVar6) {
      bVar18 = !bVar18;
    }
  }
  else if (bVar17 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar18 = uVar3 < uVar2;
    if (!bVar6) {
      bVar18 = !bVar18;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar18 = uVar2 < uVar3;
    if (bVar6) {
      bVar18 = !bVar18;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x100000) != 0);
  if (bVar18 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar19 = uVar2 < uVar3;
    if (!bVar6) {
      bVar19 = !bVar19;
    }
  }
  else if (bVar18 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar19 = uVar3 < uVar2;
    if (bVar6) {
      bVar19 = !bVar19;
    }
  }
  else if (bVar18 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar19 = uVar3 < uVar2;
    if (!bVar6) {
      bVar19 = !bVar19;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar19 = uVar2 < uVar3;
    if (bVar6) {
      bVar19 = !bVar19;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x80000) != 0);
  if (bVar19 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar20 = uVar2 < uVar3;
    if (!bVar6) {
      bVar20 = !bVar20;
    }
  }
  else if (bVar19 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar20 = uVar3 < uVar2;
    if (bVar6) {
      bVar20 = !bVar20;
    }
  }
  else if (bVar19 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar20 = uVar3 < uVar2;
    if (!bVar6) {
      bVar20 = !bVar20;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar20 = uVar2 < uVar3;
    if (bVar6) {
      bVar20 = !bVar20;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x40000) != 0);
  if (bVar20 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar21 = uVar2 < uVar3;
    if (!bVar6) {
      bVar21 = !bVar21;
    }
  }
  else if (bVar20 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar21 = uVar3 < uVar2;
    if (bVar6) {
      bVar21 = !bVar21;
    }
  }
  else if (bVar20 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar21 = uVar3 < uVar2;
    if (!bVar6) {
      bVar21 = !bVar21;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar21 = uVar2 < uVar3;
    if (bVar6) {
      bVar21 = !bVar21;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x20000) != 0);
  if (bVar21 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar22 = uVar2 < uVar3;
    if (!bVar6) {
      bVar22 = !bVar22;
    }
  }
  else if (bVar21 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar22 = uVar3 < uVar2;
    if (bVar6) {
      bVar22 = !bVar22;
    }
  }
  else if (bVar21 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar22 = uVar3 < uVar2;
    if (!bVar6) {
      bVar22 = !bVar22;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar22 = uVar2 < uVar3;
    if (bVar6) {
      bVar22 = !bVar22;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x10000) != 0);
  if (bVar22 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar23 = uVar2 < uVar3;
    if (!bVar6) {
      bVar23 = !bVar23;
    }
  }
  else if (bVar22 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar23 = uVar3 < uVar2;
    if (bVar6) {
      bVar23 = !bVar23;
    }
  }
  else if (bVar22 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar23 = uVar3 < uVar2;
    if (!bVar6) {
      bVar23 = !bVar23;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar23 = uVar2 < uVar3;
    if (bVar6) {
      bVar23 = !bVar23;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x8000) != 0);
  if (bVar23 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar24 = uVar2 < uVar3;
    if (!bVar6) {
      bVar24 = !bVar24;
    }
  }
  else if (bVar23 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar24 = uVar3 < uVar2;
    if (bVar6) {
      bVar24 = !bVar24;
    }
  }
  else if (bVar23 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar24 = uVar3 < uVar2;
    if (!bVar6) {
      bVar24 = !bVar24;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar24 = uVar2 < uVar3;
    if (bVar6) {
      bVar24 = !bVar24;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x4000) != 0);
  if (bVar24 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar25 = uVar2 < uVar3;
    if (!bVar6) {
      bVar25 = !bVar25;
    }
  }
  else if (bVar24 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar25 = uVar3 < uVar2;
    if (bVar6) {
      bVar25 = !bVar25;
    }
  }
  else if (bVar24 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar25 = uVar3 < uVar2;
    if (!bVar6) {
      bVar25 = !bVar25;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar25 = uVar2 < uVar3;
    if (bVar6) {
      bVar25 = !bVar25;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x2000) != 0);
  if (bVar25 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar26 = uVar2 < uVar3;
    if (!bVar6) {
      bVar26 = !bVar26;
    }
  }
  else if (bVar25 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar26 = uVar3 < uVar2;
    if (bVar6) {
      bVar26 = !bVar26;
    }
  }
  else if (bVar25 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar26 = uVar3 < uVar2;
    if (!bVar6) {
      bVar26 = !bVar26;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar26 = uVar2 < uVar3;
    if (bVar6) {
      bVar26 = !bVar26;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x1000) != 0);
  if (bVar26 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar27 = uVar2 < uVar3;
    if (!bVar6) {
      bVar27 = !bVar27;
    }
  }
  else if (bVar26 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar27 = uVar3 < uVar2;
    if (bVar6) {
      bVar27 = !bVar27;
    }
  }
  else if (bVar26 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar27 = uVar3 < uVar2;
    if (!bVar6) {
      bVar27 = !bVar27;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar27 = uVar2 < uVar3;
    if (bVar6) {
      bVar27 = !bVar27;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x800) != 0);
  if (bVar27 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar28 = uVar2 < uVar3;
    if (!bVar6) {
      bVar28 = !bVar28;
    }
  }
  else if (bVar27 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar28 = uVar3 < uVar2;
    if (bVar6) {
      bVar28 = !bVar28;
    }
  }
  else if (bVar27 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar28 = uVar3 < uVar2;
    if (!bVar6) {
      bVar28 = !bVar28;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar28 = uVar2 < uVar3;
    if (bVar6) {
      bVar28 = !bVar28;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x400) != 0);
  if (bVar28 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar29 = uVar2 < uVar3;
    if (!bVar6) {
      bVar29 = !bVar29;
    }
  }
  else if (bVar28 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar29 = uVar3 < uVar2;
    if (bVar6) {
      bVar29 = !bVar29;
    }
  }
  else if (bVar28 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar29 = uVar3 < uVar2;
    if (!bVar6) {
      bVar29 = !bVar29;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar29 = uVar2 < uVar3;
    if (bVar6) {
      bVar29 = !bVar29;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x200) != 0);
  if (bVar29 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar30 = uVar2 < uVar3;
    if (!bVar6) {
      bVar30 = !bVar30;
    }
  }
  else if (bVar29 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar30 = uVar3 < uVar2;
    if (bVar6) {
      bVar30 = !bVar30;
    }
  }
  else if (bVar29 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar30 = uVar3 < uVar2;
    if (!bVar6) {
      bVar30 = !bVar30;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar30 = uVar2 < uVar3;
    if (bVar6) {
      bVar30 = !bVar30;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x100) != 0);
  if (bVar30 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar31 = uVar2 < uVar3;
    if (!bVar6) {
      bVar31 = !bVar31;
    }
  }
  else if (bVar30 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar31 = uVar3 < uVar2;
    if (bVar6) {
      bVar31 = !bVar31;
    }
  }
  else if (bVar30 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar31 = uVar3 < uVar2;
    if (!bVar6) {
      bVar31 = !bVar31;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar31 = uVar2 < uVar3;
    if (bVar6) {
      bVar31 = !bVar31;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x80) != 0);
  if (bVar31 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar32 = uVar2 < uVar3;
    if (!bVar6) {
      bVar32 = !bVar32;
    }
  }
  else if (bVar31 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar32 = uVar3 < uVar2;
    if (bVar6) {
      bVar32 = !bVar32;
    }
  }
  else if (bVar31 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar32 = uVar3 < uVar2;
    if (!bVar6) {
      bVar32 = !bVar32;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar32 = uVar2 < uVar3;
    if (bVar6) {
      bVar32 = !bVar32;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x40) != 0);
  if (bVar32 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar33 = uVar2 < uVar3;
    if (!bVar6) {
      bVar33 = !bVar33;
    }
  }
  else if (bVar32 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar33 = uVar3 < uVar2;
    if (bVar6) {
      bVar33 = !bVar33;
    }
  }
  else if (bVar32 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar33 = uVar3 < uVar2;
    if (!bVar6) {
      bVar33 = !bVar33;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar33 = uVar2 < uVar3;
    if (bVar6) {
      bVar33 = !bVar33;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x20) != 0);
  if (bVar33 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar34 = uVar2 < uVar3;
    if (!bVar6) {
      bVar34 = !bVar34;
    }
  }
  else if (bVar33 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar34 = uVar3 < uVar2;
    if (bVar6) {
      bVar34 = !bVar34;
    }
  }
  else if (bVar33 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar34 = uVar3 < uVar2;
    if (!bVar6) {
      bVar34 = !bVar34;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar34 = uVar2 < uVar3;
    if (bVar6) {
      bVar34 = !bVar34;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x10) != 0);
  if (bVar34 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar35 = uVar2 < uVar3;
    if (!bVar6) {
      bVar35 = !bVar35;
    }
  }
  else if (bVar34 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar35 = uVar3 < uVar2;
    if (bVar6) {
      bVar35 = !bVar35;
    }
  }
  else if (bVar34 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar35 = uVar3 < uVar2;
    if (!bVar6) {
      bVar35 = !bVar35;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar35 = uVar2 < uVar3;
    if (bVar6) {
      bVar35 = !bVar35;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 8) != 0);
  if (bVar35 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar36 = uVar2 < uVar3;
    if (!bVar6) {
      bVar36 = !bVar36;
    }
  }
  else if (bVar35 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar36 = uVar3 < uVar2;
    if (bVar6) {
      bVar36 = !bVar36;
    }
  }
  else if (bVar35 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar36 = uVar3 < uVar2;
    if (!bVar6) {
      bVar36 = !bVar36;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar36 = uVar2 < uVar3;
    if (bVar6) {
      bVar36 = !bVar36;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 4) != 0);
  if (bVar36 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar37 = uVar2 < uVar3;
    if (!bVar6) {
      bVar37 = !bVar37;
    }
  }
  else if (bVar36 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar37 = uVar3 < uVar2;
    if (bVar6) {
      bVar37 = !bVar37;
    }
  }
  else if (bVar36 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar37 = uVar3 < uVar2;
    if (!bVar6) {
      bVar37 = !bVar37;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar37 = uVar2 < uVar3;
    if (bVar6) {
      bVar37 = !bVar37;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 2) != 0);
  if (bVar37 == false && !bVar4) {
    bVar38 = uVar2 < uVar2 - in_r0;
    if (!bVar6) {
      bVar38 = !bVar38;
    }
  }
  else if (bVar37 == false && bVar4) {
    bVar38 = uVar2 + in_r0 < uVar2;
    if (bVar6) {
      bVar38 = !bVar38;
    }
  }
  else if (bVar37 == true && !bVar4) {
    bVar38 = uVar2 + in_r0 < uVar2;
    if (!bVar6) {
      bVar38 = !bVar38;
    }
  }
  else {
    bVar38 = uVar2 < uVar2 - in_r0;
    if (bVar6) {
      bVar38 = !bVar38;
    }
  }
  return ((((((((((((((((((((((((((((((((uint)(bVar7 == bVar4) << 1 | (uint)(bVar8 == bVar4)) << 1 |
                                      (uint)(bVar9 == bVar4)) << 1 | (uint)(bVar10 == bVar4)) << 1 |
                                    (uint)(bVar11 == bVar4)) << 1 | (uint)(bVar12 == bVar4)) << 1 |
                                  (uint)(bVar13 == bVar4)) << 1 | (uint)(bVar14 == bVar4)) << 1 |
                                (uint)(bVar15 == bVar4)) << 1 | (uint)(bVar16 == bVar4)) << 1 |
                              (uint)(bVar17 == bVar4)) << 1 | (uint)(bVar18 == bVar4)) << 1 |
                            (uint)(bVar19 == bVar4)) << 1 | (uint)(bVar20 == bVar4)) << 1 |
                          (uint)(bVar21 == bVar4)) << 1 | (uint)(bVar22 == bVar4)) << 1 |
                        (uint)(bVar23 == bVar4)) << 1 | (uint)(bVar24 == bVar4)) << 1 |
                      (uint)(bVar25 == bVar4)) << 1 | (uint)(bVar26 == bVar4)) << 1 |
                    (uint)(bVar27 == bVar4)) << 1 | (uint)(bVar28 == bVar4)) << 1 |
                  (uint)(bVar29 == bVar4)) << 1 | (uint)(bVar30 == bVar4)) << 1 |
                (uint)(bVar31 == bVar4)) << 1 | (uint)(bVar32 == bVar4)) << 1 |
              (uint)(bVar33 == bVar4)) << 1 | (uint)(bVar34 == bVar4)) << 1 |
            (uint)(bVar35 == bVar4)) << 1 | (uint)(bVar36 == bVar4)) << 1 | (uint)(bVar37 == bVar4))
          << 1 | (uint)(bVar38 == bVar4)) + (uint)(bVar4 != bVar5);
}



/* libgcc_divide_helper_01051c @ 8c01051c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0105a0) */
/* WARNING: Removing unreachable block (ram,0x8c010598) */
/* WARNING: Removing unreachable block (ram,0x8c010590) */
/* WARNING: Removing unreachable block (ram,0x8c010588) */
/* WARNING: Removing unreachable block (ram,0x8c010580) */
/* WARNING: Removing unreachable block (ram,0x8c010578) */
/* WARNING: Removing unreachable block (ram,0x8c010570) */
/* WARNING: Removing unreachable block (ram,0x8c010568) */
/* WARNING: Removing unreachable block (ram,0x8c010560) */
/* WARNING: Removing unreachable block (ram,0x8c010558) */
/* WARNING: Removing unreachable block (ram,0x8c010550) */
/* WARNING: Removing unreachable block (ram,0x8c010548) */
/* WARNING: Removing unreachable block (ram,0x8c010540) */
/* WARNING: Removing unreachable block (ram,0x8c010538) */
/* WARNING: Removing unreachable block (ram,0x8c010530) */
/* WARNING: Removing unreachable block (ram,0x8c010528) */
/* WARNING: Removing unreachable block (ram,0x8c01052c) */
/* WARNING: Removing unreachable block (ram,0x8c010534) */
/* WARNING: Removing unreachable block (ram,0x8c01053c) */
/* WARNING: Removing unreachable block (ram,0x8c010544) */
/* WARNING: Removing unreachable block (ram,0x8c01054c) */
/* WARNING: Removing unreachable block (ram,0x8c010554) */
/* WARNING: Removing unreachable block (ram,0x8c01055c) */
/* WARNING: Removing unreachable block (ram,0x8c010564) */
/* WARNING: Removing unreachable block (ram,0x8c01056c) */
/* WARNING: Removing unreachable block (ram,0x8c010574) */
/* WARNING: Removing unreachable block (ram,0x8c01057c) */
/* WARNING: Removing unreachable block (ram,0x8c010584) */
/* WARNING: Removing unreachable block (ram,0x8c01058c) */
/* WARNING: Removing unreachable block (ram,0x8c010594) */
/* WARNING: Removing unreachable block (ram,0x8c01059c) */
/* WARNING: Removing unreachable block (ram,0x8c0105a4) */
/* WARNING: Unknown calling convention */

uint libgcc_divide_helper_01051c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int in_r0;
  uint in_r1;
  bool bVar5;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar6;
  
  if (in_r0 == 0) {
    *DAT_8c0105bc = DAT_8c0105c0;
    return 0;
  }
  uVar3 = (uint)((in_r1 & 0x80000000) != 0);
  uVar1 = uVar3 - in_r0;
  bVar4 = uVar3 < uVar1;
  uVar3 = in_r1 << 2;
  bVar5 = (uVar1 & 0x80000000) == 0;
  uVar1 = uVar1 * 2 | (uint)((in_r1 & 0x40000000) != 0);
  if (bVar4) {
    if (bVar4) {
      uVar2 = uVar1 + in_r0;
      bVar6 = uVar2 < uVar1;
      if (!bVar5) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar6 = uVar1 < uVar2;
      if (bVar5) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar6 = uVar1 < uVar2;
    if (!bVar5) {
      bVar6 = !bVar6;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x80000000) != 0);
  if (bVar6) {
    if (bVar6) {
      uVar2 = uVar1 + in_r0;
      bVar7 = uVar2 < uVar1;
      if (!bVar5) {
        bVar7 = !bVar7;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar7 = uVar1 < uVar2;
      if (bVar5) {
        bVar7 = !bVar7;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar7 = uVar1 < uVar2;
    if (!bVar5) {
      bVar7 = !bVar7;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x40000000) != 0);
  if (bVar7) {
    if (bVar7) {
      uVar2 = uVar1 + in_r0;
      bVar8 = uVar2 < uVar1;
      if (!bVar5) {
        bVar8 = !bVar8;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar8 = uVar1 < uVar2;
      if (bVar5) {
        bVar8 = !bVar8;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar8 = uVar1 < uVar2;
    if (!bVar5) {
      bVar8 = !bVar8;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x20000000) != 0);
  if (bVar8) {
    if (bVar8) {
      uVar2 = uVar1 + in_r0;
      bVar9 = uVar2 < uVar1;
      if (!bVar5) {
        bVar9 = !bVar9;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar9 = uVar1 < uVar2;
      if (bVar5) {
        bVar9 = !bVar9;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar9 = uVar1 < uVar2;
    if (!bVar5) {
      bVar9 = !bVar9;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x10000000) != 0);
  if (bVar9) {
    if (bVar9) {
      uVar2 = uVar1 + in_r0;
      bVar10 = uVar2 < uVar1;
      if (!bVar5) {
        bVar10 = !bVar10;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar10 = uVar1 < uVar2;
      if (bVar5) {
        bVar10 = !bVar10;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar10 = uVar1 < uVar2;
    if (!bVar5) {
      bVar10 = !bVar10;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x8000000) != 0);
  if (bVar10) {
    if (bVar10) {
      uVar2 = uVar1 + in_r0;
      bVar11 = uVar2 < uVar1;
      if (!bVar5) {
        bVar11 = !bVar11;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar11 = uVar1 < uVar2;
      if (bVar5) {
        bVar11 = !bVar11;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar11 = uVar1 < uVar2;
    if (!bVar5) {
      bVar11 = !bVar11;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x4000000) != 0);
  if (bVar11) {
    if (bVar11) {
      uVar2 = uVar1 + in_r0;
      bVar12 = uVar2 < uVar1;
      if (!bVar5) {
        bVar12 = !bVar12;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar12 = uVar1 < uVar2;
      if (bVar5) {
        bVar12 = !bVar12;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar12 = uVar1 < uVar2;
    if (!bVar5) {
      bVar12 = !bVar12;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x2000000) != 0);
  if (bVar12) {
    if (bVar12) {
      uVar2 = uVar1 + in_r0;
      bVar13 = uVar2 < uVar1;
      if (!bVar5) {
        bVar13 = !bVar13;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar13 = uVar1 < uVar2;
      if (bVar5) {
        bVar13 = !bVar13;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar13 = uVar1 < uVar2;
    if (!bVar5) {
      bVar13 = !bVar13;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x1000000) != 0);
  if (bVar13) {
    if (bVar13) {
      uVar2 = uVar1 + in_r0;
      bVar14 = uVar2 < uVar1;
      if (!bVar5) {
        bVar14 = !bVar14;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar14 = uVar1 < uVar2;
      if (bVar5) {
        bVar14 = !bVar14;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar14 = uVar1 < uVar2;
    if (!bVar5) {
      bVar14 = !bVar14;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x800000) != 0);
  if (bVar14) {
    if (bVar14) {
      uVar2 = uVar1 + in_r0;
      bVar15 = uVar2 < uVar1;
      if (!bVar5) {
        bVar15 = !bVar15;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar15 = uVar1 < uVar2;
      if (bVar5) {
        bVar15 = !bVar15;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar15 = uVar1 < uVar2;
    if (!bVar5) {
      bVar15 = !bVar15;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x400000) != 0);
  if (bVar15) {
    if (bVar15) {
      uVar2 = uVar1 + in_r0;
      bVar16 = uVar2 < uVar1;
      if (!bVar5) {
        bVar16 = !bVar16;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar16 = uVar1 < uVar2;
      if (bVar5) {
        bVar16 = !bVar16;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar16 = uVar1 < uVar2;
    if (!bVar5) {
      bVar16 = !bVar16;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x200000) != 0);
  if (bVar16) {
    if (bVar16) {
      uVar2 = uVar1 + in_r0;
      bVar17 = uVar2 < uVar1;
      if (!bVar5) {
        bVar17 = !bVar17;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar17 = uVar1 < uVar2;
      if (bVar5) {
        bVar17 = !bVar17;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar17 = uVar1 < uVar2;
    if (!bVar5) {
      bVar17 = !bVar17;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x100000) != 0);
  if (bVar17) {
    if (bVar17) {
      uVar2 = uVar1 + in_r0;
      bVar18 = uVar2 < uVar1;
      if (!bVar5) {
        bVar18 = !bVar18;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar18 = uVar1 < uVar2;
      if (bVar5) {
        bVar18 = !bVar18;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar18 = uVar1 < uVar2;
    if (!bVar5) {
      bVar18 = !bVar18;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x80000) != 0);
  if (bVar18) {
    if (bVar18) {
      uVar2 = uVar1 + in_r0;
      bVar19 = uVar2 < uVar1;
      if (!bVar5) {
        bVar19 = !bVar19;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar19 = uVar1 < uVar2;
      if (bVar5) {
        bVar19 = !bVar19;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar19 = uVar1 < uVar2;
    if (!bVar5) {
      bVar19 = !bVar19;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x40000) != 0);
  if (bVar19) {
    if (bVar19) {
      uVar2 = uVar1 + in_r0;
      bVar20 = uVar2 < uVar1;
      if (!bVar5) {
        bVar20 = !bVar20;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar20 = uVar1 < uVar2;
      if (bVar5) {
        bVar20 = !bVar20;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar20 = uVar1 < uVar2;
    if (!bVar5) {
      bVar20 = !bVar20;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x20000) != 0);
  if (bVar20) {
    if (bVar20) {
      uVar2 = uVar1 + in_r0;
      bVar21 = uVar2 < uVar1;
      if (!bVar5) {
        bVar21 = !bVar21;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar21 = uVar1 < uVar2;
      if (bVar5) {
        bVar21 = !bVar21;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar21 = uVar1 < uVar2;
    if (!bVar5) {
      bVar21 = !bVar21;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x10000) != 0);
  if (bVar21) {
    if (bVar21) {
      uVar2 = uVar1 + in_r0;
      bVar22 = uVar2 < uVar1;
      if (!bVar5) {
        bVar22 = !bVar22;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar22 = uVar1 < uVar2;
      if (bVar5) {
        bVar22 = !bVar22;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar22 = uVar1 < uVar2;
    if (!bVar5) {
      bVar22 = !bVar22;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x8000) != 0);
  if (bVar22) {
    if (bVar22) {
      uVar2 = uVar1 + in_r0;
      bVar23 = uVar2 < uVar1;
      if (!bVar5) {
        bVar23 = !bVar23;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar23 = uVar1 < uVar2;
      if (bVar5) {
        bVar23 = !bVar23;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar23 = uVar1 < uVar2;
    if (!bVar5) {
      bVar23 = !bVar23;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x4000) != 0);
  if (bVar23) {
    if (bVar23) {
      uVar2 = uVar1 + in_r0;
      bVar24 = uVar2 < uVar1;
      if (!bVar5) {
        bVar24 = !bVar24;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar24 = uVar1 < uVar2;
      if (bVar5) {
        bVar24 = !bVar24;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar24 = uVar1 < uVar2;
    if (!bVar5) {
      bVar24 = !bVar24;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x2000) != 0);
  if (bVar24) {
    if (bVar24) {
      uVar2 = uVar1 + in_r0;
      bVar25 = uVar2 < uVar1;
      if (!bVar5) {
        bVar25 = !bVar25;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar25 = uVar1 < uVar2;
      if (bVar5) {
        bVar25 = !bVar25;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar25 = uVar1 < uVar2;
    if (!bVar5) {
      bVar25 = !bVar25;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x1000) != 0);
  if (bVar25) {
    if (bVar25) {
      uVar2 = uVar1 + in_r0;
      bVar26 = uVar2 < uVar1;
      if (!bVar5) {
        bVar26 = !bVar26;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar26 = uVar1 < uVar2;
      if (bVar5) {
        bVar26 = !bVar26;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar26 = uVar1 < uVar2;
    if (!bVar5) {
      bVar26 = !bVar26;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x800) != 0);
  if (bVar26) {
    if (bVar26) {
      uVar2 = uVar1 + in_r0;
      bVar27 = uVar2 < uVar1;
      if (!bVar5) {
        bVar27 = !bVar27;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar27 = uVar1 < uVar2;
      if (bVar5) {
        bVar27 = !bVar27;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar27 = uVar1 < uVar2;
    if (!bVar5) {
      bVar27 = !bVar27;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x400) != 0);
  if (bVar27) {
    if (bVar27) {
      uVar2 = uVar1 + in_r0;
      bVar28 = uVar2 < uVar1;
      if (!bVar5) {
        bVar28 = !bVar28;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar28 = uVar1 < uVar2;
      if (bVar5) {
        bVar28 = !bVar28;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar28 = uVar1 < uVar2;
    if (!bVar5) {
      bVar28 = !bVar28;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x200) != 0);
  if (bVar28) {
    if (bVar28) {
      uVar2 = uVar1 + in_r0;
      bVar29 = uVar2 < uVar1;
      if (!bVar5) {
        bVar29 = !bVar29;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar29 = uVar1 < uVar2;
      if (bVar5) {
        bVar29 = !bVar29;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar29 = uVar1 < uVar2;
    if (!bVar5) {
      bVar29 = !bVar29;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x100) != 0);
  if (bVar29) {
    if (bVar29) {
      uVar2 = uVar1 + in_r0;
      bVar30 = uVar2 < uVar1;
      if (!bVar5) {
        bVar30 = !bVar30;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar30 = uVar1 < uVar2;
      if (bVar5) {
        bVar30 = !bVar30;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar30 = uVar1 < uVar2;
    if (!bVar5) {
      bVar30 = !bVar30;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x80) != 0);
  if (bVar30) {
    if (bVar30) {
      uVar2 = uVar1 + in_r0;
      bVar31 = uVar2 < uVar1;
      if (!bVar5) {
        bVar31 = !bVar31;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar31 = uVar1 < uVar2;
      if (bVar5) {
        bVar31 = !bVar31;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar31 = uVar1 < uVar2;
    if (!bVar5) {
      bVar31 = !bVar31;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x40) != 0);
  if (bVar31) {
    if (bVar31) {
      uVar2 = uVar1 + in_r0;
      bVar32 = uVar2 < uVar1;
      if (!bVar5) {
        bVar32 = !bVar32;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar32 = uVar1 < uVar2;
      if (bVar5) {
        bVar32 = !bVar32;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar32 = uVar1 < uVar2;
    if (!bVar5) {
      bVar32 = !bVar32;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x20) != 0);
  if (bVar32) {
    if (bVar32) {
      uVar2 = uVar1 + in_r0;
      bVar33 = uVar2 < uVar1;
      if (!bVar5) {
        bVar33 = !bVar33;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar33 = uVar1 < uVar2;
      if (bVar5) {
        bVar33 = !bVar33;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar33 = uVar1 < uVar2;
    if (!bVar5) {
      bVar33 = !bVar33;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x10) != 0);
  if (bVar33) {
    if (bVar33) {
      uVar2 = uVar1 + in_r0;
      bVar34 = uVar2 < uVar1;
      if (!bVar5) {
        bVar34 = !bVar34;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar34 = uVar1 < uVar2;
      if (bVar5) {
        bVar34 = !bVar34;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar34 = uVar1 < uVar2;
    if (!bVar5) {
      bVar34 = !bVar34;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 8) != 0);
  if (bVar34) {
    if (bVar34) {
      uVar2 = uVar1 + in_r0;
      bVar35 = uVar2 < uVar1;
      if (!bVar5) {
        bVar35 = !bVar35;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar35 = uVar1 < uVar2;
      if (bVar5) {
        bVar35 = !bVar35;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar35 = uVar1 < uVar2;
    if (!bVar5) {
      bVar35 = !bVar35;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 4) != 0);
  if (bVar35) {
    if (bVar35) {
      bVar36 = uVar1 + in_r0 < uVar1;
      if (!bVar5) {
        bVar36 = !bVar36;
      }
    }
    else {
      bVar36 = uVar1 < uVar1 - in_r0;
      if (bVar5) {
        bVar36 = !bVar36;
      }
    }
  }
  else {
    bVar36 = uVar1 < uVar1 - in_r0;
    if (!bVar5) {
      bVar36 = !bVar36;
    }
  }
  return (((((((((((((((((((((((((((((((uint)!bVar4 << 1 | (uint)!bVar6) << 1 | (uint)!bVar7) << 1 |
                                    (uint)!bVar8) << 1 | (uint)!bVar9) << 1 | (uint)!bVar10) << 1 |
                                 (uint)!bVar11) << 1 | (uint)!bVar12) << 1 | (uint)!bVar13) << 1 |
                              (uint)!bVar14) << 1 | (uint)!bVar15) << 1 | (uint)!bVar16) << 1 |
                           (uint)!bVar17) << 1 | (uint)!bVar18) << 1 | (uint)!bVar19) << 1 |
                        (uint)!bVar20) << 1 | (uint)!bVar21) << 1 | (uint)!bVar22) << 1 |
                     (uint)!bVar23) << 1 | (uint)!bVar24) << 1 | (uint)!bVar25) << 1 | (uint)!bVar26
                  ) << 1 | (uint)!bVar27) << 1 | (uint)!bVar28) << 1 | (uint)!bVar29) << 1 |
              (uint)!bVar30) << 1 | (uint)!bVar31) << 1 | (uint)!bVar32) << 1 | (uint)!bVar33) << 1
          | (uint)!bVar34) << 1 | (uint)!bVar35) << 1 | (uint)!bVar36;
}



/* FUN_8c0105c4 @ 8c0105c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0105c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  short in_r0;
  int iVar2;
  uint uVar3;
  short in_r1;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  iVar2 = (int)in_r0;
  if (iVar2 == 0) {
    *DAT_8c01060c = DAT_8c010610;
    return 0;
  }
  uVar4 = (int)in_r1 - (uint)(((int)in_r1 & 0x80000000U) != 0);
  uVar3 = iVar2 * 0x10000;
  bVar6 = (uVar4 & 0x80000000) != 0;
  bVar5 = (uVar3 & 0x80000000) != 0;
  bVar7 = (uVar4 & 0x80000000) == 0;
  uVar4 = uVar4 * 2 | (uint)(bVar5 != bVar6);
  if (bVar6 || bVar5) {
    if (!bVar6 && bVar5) {
      uVar1 = uVar4 + uVar3;
      bVar6 = uVar1 < uVar4;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar5) {
      uVar1 = uVar4 + uVar3;
      bVar6 = uVar1 < uVar4;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar4 + iVar2 * -0x10000;
      bVar6 = uVar4 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar3 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar3;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar3 = uVar4 + uVar3;
    bVar6 = uVar3 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar3 = uVar4 + uVar3;
    bVar6 = uVar3 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar3 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar3;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  return ((int)(short)uVar3 << 1 | (uint)(bVar6 == bVar5)) +
         (uint)(((int)(short)uVar3 & 0x80000000U) != 0);
}



/* libgcc_divide_helper_010614 @ 8c010614 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int libgcc_divide_helper_010614(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint in_r0;
  uint in_r1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  if (in_r0 == 0) {
    *DAT_8c0106d4 = DAT_8c0106d8;
    return 0;
  }
  bVar5 = (in_r1 & 0x80000000) != 0;
  uVar3 = (uint)bVar5;
  uVar2 = in_r1 - (uVar3 != 0);
  bVar6 = (-uVar3 & 0x80000000) != 0;
  bVar4 = (in_r0 & 0x80000000) != 0;
  bVar7 = (-uVar3 & 0x80000000) == 0;
  uVar3 = uVar3 * -2 | (uint)((uVar2 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 2 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 4 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 8 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x10 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x20 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x40 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x80 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x100 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x200 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x400 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x800 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x1000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x2000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x4000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x8000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x10000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x20000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x40000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x80000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x100000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x200000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x400000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x800000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x1000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x2000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x4000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x8000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x10000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x20000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x40000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  uVar3 = uVar1 << 1 | (uint)((uVar2 & 1) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar3 = uVar3 + in_r0;
    }
    else if (bVar6 && !bVar4) {
      uVar3 = uVar3 + in_r0;
    }
    else {
      uVar3 = uVar3 - in_r0;
    }
  }
  else {
    uVar3 = uVar3 - in_r0;
  }
  if (((uVar3 & 0x80000000) != 0) != bVar5) {
    bVar6 = (uVar3 & 0x80000000) != 0;
    bVar4 = (in_r0 & 0x80000000) != 0;
    uVar3 = ((int)uVar3 >> 1) << 1 | (uint)((uVar3 & 1) != 0);
    if (bVar6 || bVar4) {
      if (!bVar6 && bVar4) {
        uVar3 = uVar3 + in_r0;
      }
      else if (bVar6 && !bVar4) {
        uVar3 = uVar3 + in_r0;
      }
      else {
        uVar3 = uVar3 - in_r0;
      }
    }
    else {
      uVar3 = uVar3 - in_r0;
    }
  }
  return uVar3 + bVar5;
}



/* libgcc_divide_helper_0106dc @ 8c0106dc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c010764) */
/* WARNING: Removing unreachable block (ram,0x8c01075c) */
/* WARNING: Removing unreachable block (ram,0x8c010754) */
/* WARNING: Removing unreachable block (ram,0x8c01074c) */
/* WARNING: Removing unreachable block (ram,0x8c010744) */
/* WARNING: Removing unreachable block (ram,0x8c01073c) */
/* WARNING: Removing unreachable block (ram,0x8c010734) */
/* WARNING: Removing unreachable block (ram,0x8c01072c) */
/* WARNING: Removing unreachable block (ram,0x8c010724) */
/* WARNING: Removing unreachable block (ram,0x8c01071c) */
/* WARNING: Removing unreachable block (ram,0x8c010714) */
/* WARNING: Removing unreachable block (ram,0x8c01070c) */
/* WARNING: Removing unreachable block (ram,0x8c010704) */
/* WARNING: Removing unreachable block (ram,0x8c0106fc) */
/* WARNING: Removing unreachable block (ram,0x8c0106f4) */
/* WARNING: Removing unreachable block (ram,0x8c0106ec) */
/* WARNING: Removing unreachable block (ram,0x8c0106f0) */
/* WARNING: Removing unreachable block (ram,0x8c0106f8) */
/* WARNING: Removing unreachable block (ram,0x8c010700) */
/* WARNING: Removing unreachable block (ram,0x8c010708) */
/* WARNING: Removing unreachable block (ram,0x8c010710) */
/* WARNING: Removing unreachable block (ram,0x8c010718) */
/* WARNING: Removing unreachable block (ram,0x8c010720) */
/* WARNING: Removing unreachable block (ram,0x8c010728) */
/* WARNING: Removing unreachable block (ram,0x8c010730) */
/* WARNING: Removing unreachable block (ram,0x8c010738) */
/* WARNING: Removing unreachable block (ram,0x8c010740) */
/* WARNING: Removing unreachable block (ram,0x8c010748) */
/* WARNING: Removing unreachable block (ram,0x8c010750) */
/* WARNING: Removing unreachable block (ram,0x8c010758) */
/* WARNING: Removing unreachable block (ram,0x8c010760) */
/* WARNING: Removing unreachable block (ram,0x8c010768) */
/* WARNING: Unknown calling convention */

uint libgcc_divide_helper_0106dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_r0;
  uint in_r1;
  bool bVar4;
  bool bVar5;
  
  if (in_r0 == 0) {
    *DAT_8c01078c = DAT_8c010790;
    return 0;
  }
  uVar3 = (uint)((in_r1 & 0x80000000) != 0);
  uVar1 = uVar3 - in_r0;
  bVar4 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 * 2 | (uint)((in_r1 & 0x40000000) != 0);
  if (uVar3 < uVar1) {
    if (uVar3 < uVar1) {
      uVar1 = uVar2 + in_r0;
      bVar5 = uVar1 < uVar2;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar1 = uVar2 - in_r0;
      bVar5 = uVar2 < uVar1;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar1 = uVar2 - in_r0;
    bVar5 = uVar2 < uVar1;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar1 & 0x80000000) == 0;
  uVar1 = uVar1 << 1 | (uint)((in_r1 & 0x20000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x10000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x8000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x4000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x2000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x1000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x800000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x400000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x200000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x100000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x80000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x40000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x20000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x10000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x8000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x4000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x2000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x1000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x800) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x400) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x200) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x100) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x80) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x40) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x20) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x10) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 8) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 4) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 2) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 1) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  if (!bVar5) {
    return uVar2;
  }
  return in_r0 + uVar2;
}



/* FUN_8c010794 @ 8c010794 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c010794(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c01079c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_8c0107ac + in_r0))();
  return uVar1;
}



/* FUN_8c0107a0 @ 8c0107a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0107a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c0107a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_8c0107ac + in_r0))();
  return uVar1;
}



/* FUN_8c010838 @ 8c010838 callers=0 callees=0 */

/* WARNING: Unknown calling convention */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_8c010838(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 *in_r1;
  undefined4 *in_r2;
  undefined4 *puVar2;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(in_r0) {
  case 0:
    return in_r0;
  default:
    puVar2 = (undefined4 *)((int)in_r2 + in_r0);
  }
  while( true ) {
    if (puVar2 < in_r2 + 1) {
      return *in_r2;
    }
    *in_r1 = *in_r2;
    uVar1 = in_r2[1];
    in_r2 = in_r2 + 2;
    if (puVar2 < in_r2) break;
    in_r1[1] = uVar1;
    in_r1 = in_r1 + 2;
  }
  return uVar1;
}



/* FUN_8c0108f8 @ 8c0108f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint * FUN_8c0108f8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  uint *in_r0;
  uint *puVar2;
  uint *in_r1;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *in_r1;
  puVar2 = in_r0;
  do {
    puVar3 = in_r1 + 1;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) {
LAB_8c010934:
      uVar4 = puVar3[-1];
      *(char *)puVar2 = (char)uVar4;
      if ((char)uVar4 != '\0') {
        cVar1 = *(char *)((int)puVar3 + -3);
        *(char *)((int)puVar2 + 1) = cVar1;
        if (cVar1 != '\0') {
          cVar1 = *(char *)((int)puVar3 + -2);
          *(char *)((int)puVar2 + 2) = cVar1;
          if (cVar1 != '\0') {
            *(char *)((int)puVar2 + 3) = *(char *)((int)puVar3 + -1);
          }
        }
      }
      return in_r0;
    }
    uVar5 = *puVar3;
    puVar3 = in_r1 + 2;
    *puVar2 = uVar4;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) {
      puVar2 = puVar2 + 1;
      goto LAB_8c010934;
    }
    uVar4 = *puVar3;
    puVar3 = in_r1 + 3;
    puVar2[1] = uVar5;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) {
      puVar2 = puVar2 + 2;
      goto LAB_8c010934;
    }
    uVar5 = *puVar3;
    puVar3 = in_r1 + 4;
    puVar2[2] = uVar4;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) {
      puVar2 = puVar2 + 3;
      goto LAB_8c010934;
    }
    uVar4 = *puVar3;
    puVar2[3] = uVar5;
    puVar2 = puVar2 + 4;
    in_r1 = puVar3;
  } while( true );
}



/* FUN_8c010960 @ 8c010960 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c010960(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int in_r0;
  int iVar2;
  char *in_r1;
  char *in_r2;
  char *pcVar3;
  
  iVar2 = 0;
  if (in_r0 != 0) {
    pcVar3 = in_r2 + in_r0;
    do {
      cVar1 = *in_r2;
      *in_r1 = cVar1;
      if (pcVar3 <= in_r2 + 1) {
        return (int)cVar1;
      }
      cVar1 = in_r2[1];
      in_r1[1] = cVar1;
      if (pcVar3 <= in_r2 + 2) {
        return (int)cVar1;
      }
      cVar1 = in_r2[2];
      in_r1[2] = cVar1;
      if (pcVar3 <= in_r2 + 3) {
        return (int)cVar1;
      }
      cVar1 = in_r2[3];
      iVar2 = (int)cVar1;
      in_r2 = in_r2 + 4;
      in_r1[3] = cVar1;
      in_r1 = in_r1 + 4;
    } while (in_r2 < pcVar3);
  }
  return iVar2;
}



/* FUN_8c010998 @ 8c010998 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

char * FUN_8c010998(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char *in_r0;
  undefined4 uVar2;
  char *in_r1;
  char *pcVar3;
  
  if (((uint)in_r1 & 3) == 0 && ((uint)in_r0 & 3) == 0) {
    uVar2 = (*(code *)PTR_SUB_8c0109e4)(ar4);
    return (char *)uVar2;
  }
  cVar1 = *in_r1;
  pcVar3 = in_r0;
  while( true ) {
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return in_r0;
    }
    cVar1 = in_r1[1];
    pcVar3[1] = cVar1;
    if (cVar1 == '\0') {
      return in_r0;
    }
    cVar1 = in_r1[2];
    pcVar3[2] = cVar1;
    if (cVar1 == '\0') {
      return in_r0;
    }
    cVar1 = in_r1[3];
    in_r1 = in_r1 + 4;
    pcVar3[3] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = *in_r1;
    pcVar3 = pcVar3 + 4;
  }
  return in_r0;
}



/* FUN_8c0109e8 @ 8c0109e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0109e8(uint *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  if ((((uint)ar4 | (uint)ar5) & 3) != 0) {
    while( true ) {
      iVar1 = (int)(char)*ar4;
      iVar3 = (int)(char)*ar5;
      if ((iVar1 == 0) || (iVar3 != iVar1)) break;
      iVar1 = (int)*(char *)((int)ar4 + 1);
      iVar3 = (int)*(char *)((int)ar5 + 1);
      if ((iVar1 == 0) || (iVar3 != iVar1)) break;
      iVar1 = (int)*(char *)((int)ar4 + 2);
      iVar3 = (int)*(char *)((int)ar5 + 2);
      if ((iVar1 == 0) || (iVar3 != iVar1)) break;
      iVar1 = (int)*(char *)((int)ar4 + 3);
      ar4 = ar4 + 1;
      iVar3 = (int)*(char *)((int)ar5 + 3);
      ar5 = ar5 + 1;
      if ((iVar1 == 0) || (iVar3 != iVar1)) break;
    }
    return iVar1 - iVar3;
  }
  uVar4 = *ar5;
  puVar7 = ar5 + 1;
  do {
    puVar6 = ar4 + 1;
    puVar8 = puVar7;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) goto LAB_8c010a26;
    uVar2 = *puVar7;
    puVar8 = puVar7 + 1;
    if (uVar4 != *ar4) break;
    uVar4 = *puVar6;
    puVar6 = ar4 + 2;
    if (((uVar2 >> 0x18 == 0 || (uVar2 & 0xff0000) == 0) || (uVar2 & 0xff00) == 0) ||
        (uVar2 & 0xff) == 0) goto LAB_8c010a26;
    uVar5 = *puVar8;
    puVar8 = puVar7 + 2;
    if (uVar2 != uVar4) break;
    uVar4 = *puVar6;
    puVar6 = ar4 + 3;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) goto LAB_8c010a26;
    uVar2 = *puVar8;
    puVar8 = puVar7 + 3;
    if (uVar5 != uVar4) break;
    uVar5 = *puVar6;
    puVar6 = ar4 + 4;
    if (((uVar2 >> 0x18 == 0 || (uVar2 & 0xff0000) == 0) || (uVar2 & 0xff00) == 0) ||
        (uVar2 & 0xff) == 0) goto LAB_8c010a26;
    uVar4 = *puVar8;
    puVar7 = puVar7 + 4;
    ar4 = puVar6;
    puVar8 = puVar7;
  } while (uVar2 == uVar5);
  puVar8 = puVar8 + -1;
LAB_8c010a26:
  iVar3 = (int)(char)puVar8[-1];
  iVar1 = (int)(char)puVar6[-1];
  if ((iVar3 != 0) && (iVar3 == iVar1)) {
    iVar3 = (int)*(char *)((int)puVar8 + -3);
    iVar1 = (int)*(char *)((int)puVar6 + -3);
    if ((iVar3 != 0) && (iVar3 == iVar1)) {
      iVar3 = (int)*(char *)((int)puVar8 + -2);
      iVar1 = (int)*(char *)((int)puVar6 + -2);
      if ((iVar3 != 0) && (iVar3 == iVar1)) {
        iVar1 = (int)*(char *)((int)puVar6 + -1);
        iVar3 = (int)*(char *)((int)puVar8 + -1);
      }
    }
  }
  return iVar1 - iVar3;
}



/* FUN_8c010a90 @ 8c010a90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c010a90(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  iVar1 = 5;
  do {
    iVar1 = iVar1 + -1;
  } while (0 < iVar1);
  return in_r0;
}



/* FUN_8c010ab4 @ 8c010ab4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c010ab4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  iVar1 = 6;
  do {
    iVar1 = iVar1 + -1;
  } while (0 < iVar1);
  return in_r0;
}



/* FUN_8c010ad4 @ 8c010ad4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c010ad4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  iVar1 = 6;
  do {
    iVar1 = iVar1 + -1;
  } while (0 < iVar1);
  return in_r0;
}



/* FUN_8c010af8 @ 8c010af8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c010af8(char *ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(ar6 + -1 + ar5);
  pcVar2 = ar4 + ar6 + -1;
  uVar4 = 0;
  if (ar4 <= pcVar2) {
    do {
      puVar1 = PTR_libgcc_divide_helper_010468_8c010b3c;
      *pcVar2 = *pcVar2 + *pcVar3 + (char)uVar4;
      in_r0 = (*(code *)puVar1)();
      pcVar2 = pcVar2 + -1;
      pcVar3 = pcVar3 + -1;
      uVar4 = in_r0;
    } while (ar4 <= pcVar2);
  }
  return in_r0;
}



/* FUN_8c010b08 @ 8c010b08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c010b08(char *ar4,int ar5,char *ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  char *a5;
  undefined4 a7;
  
  a5 = ar4 + ar5;
  a7 = 0;
  if (ar4 <= a5) {
    do {
      puVar1 = PTR_libgcc_divide_helper_010468_8c010b3c;
      *a5 = *a5 + *ar6 + (char)a7;
      in_r0 = (*(code *)puVar1)(ar4,a5,ar6,a7);
      a5 = a5 + -1;
      ar6 = ar6 + -1;
      a7 = in_r0;
    } while (ar4 <= a5);
  }
  return in_r0;
}



/* FUN_8c010b40 @ 8c010b40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c010b40(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < ar5) {
    do {
      if (*ar4 != '\0') {
        return 0;
      }
      iVar1 = iVar1 + 1;
      ar4 = ar4 + 1;
    } while (iVar1 < ar5);
  }
  return 1;
}



/* FUN_8c010b60 @ 8c010b60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c010b60(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  short *a4;
  int iVar6;
  undefined1 *puVar7;
  undefined1 auStack_8028 [8];
  undefined1 auStack_8020 [32748];
  short asStack_34 [2];
  short sStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 auStack_20 [16];
  
  psVar5 = asStack_34;
  a4 = asStack_34;
  uStack_24 = 8;
  puVar7 = auStack_20;
  sStack_30 = (short)ar4;
  uStack_2c = ar5;
  uStack_28 = ar7;
  if (ar6 < 1) {
    (*(code *)PTR_FUN_8c010c40)(-ar6,asStack_34,auStack_20,ar7);
    iVar2 = (int)sStack_30;
    uVar4 = uStack_2c;
    (*(code *)PTR_FUN_8c010c48)(asStack_34,auStack_20,iVar2,uStack_2c);
  }
  else {
    (*(code *)PTR_FUN_8c010c40)(ar6,asStack_34,auStack_20,ar7);
    iVar2 = (int)sStack_30;
    uVar4 = uStack_2c;
    (*(code *)PTR_FUN_8c010c44)(asStack_34,auStack_20,iVar2,uStack_2c);
    a4 = psVar5;
  }
  iVar3 = (*(code *)PTR_FUN_8c010c4c)(a4,puVar7,iVar2,uVar4);
  (*(code *)PTR_FUN_8c010c50)(auStack_20,9,0x42 - (short)(0x3f - asStack_34[0]),uVar4);
  iVar6 = (int)(short)iVar3;
  iVar2 = 8;
  if (iVar6 < 9) {
    do {
      sVar1 = (short)iVar2;
      auStack_20[sVar1] = auStack_20[sVar1 - iVar6];
      iVar2 = sVar1 + -1;
    } while (iVar6 <= (short)iVar2);
  }
  sVar1 = (short)iVar2;
  puVar7 = auStack_20 + sVar1 + 1;
  while (-1 < sVar1) {
    iVar2 = iVar2 + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = 0;
    sVar1 = (short)iVar2;
  }
  iVar2 = (0x3f - asStack_34[0]) + iVar3 * -8;
  (*(code *)PTR_FUN_8c010c54)(auStack_20,9,iVar2,uVar4);
  asStack_34[0] = 0x3f;
  (*(code *)PTR_FUN_8c010c58)(auStack_20,0x40,iVar2,uVar4);
  uVar4 = (*(code *)PTR_memmove_8c010c5c)(uStack_28,auStack_20,8,uVar4);
  return uVar4;
}



/* FUN_8c010c60 @ 8c010c60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c010c60(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *a6;
  int iVar7;
  undefined1 auStack_48 [4];
  byte bStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  byte bStack_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [8];
  char cStack_2c;
  char cStack_2b;
  char cStack_2a;
  char cStack_29;
  char cStack_28;
  char cStack_27;
  char cStack_26;
  char cStack_25;
  char cStack_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;
  
  puVar1 = PTR_memset_8c010d04;
  uVar6 = ar7;
  (*(code *)PTR_memset_8c010d04)(&cStack_2c,0,4,ar7);
  puVar2 = PTR_memmove_8c010d08;
  (*(code *)PTR_memmove_8c010d08)(&cStack_28,ar7,8,uVar6);
  (*(code *)puVar1)(auStack_38,0,4,uVar6);
  (*(code *)puVar2)(auStack_34,ar5,8,uVar6);
  a6 = (undefined1 *)0x10;
  (*(code *)puVar1)(auStack_48,0,0x10,uVar6);
  puVar1 = PTR_FUN_8c010d0c;
  for (iVar7 = 0x42; puVar3 = PTR_FUN_8c010d18, iVar7 != 0; iVar7 = iVar7 + -1) {
    (*(code *)puVar1)(auStack_48,0xc,a6,uVar6);
    uVar6 = 0xc;
    a6 = auStack_38;
    iVar5 = (*(code *)PTR_FUN_8c010d10)(0,&cStack_2c,auStack_38,0xc);
    if (iVar5 < 0) {
      a6 = (undefined1 *)0xc;
      (*(code *)PTR_FUN_8c010d14)(&cStack_2c,auStack_38,0xc,uVar6);
    }
    else {
      cStack_3d = cStack_3d + '\x01';
    }
    (*(code *)puVar1)(&cStack_2c,0xc,a6,uVar6);
  }
  for (iVar7 = 2; iVar7 != 0; iVar7 = iVar7 + -1) {
    (*(code *)puVar3)(auStack_48,0x10,a6,uVar6);
  }
  if (((((cStack_2c != '\0') || (cStack_2b != '\0')) || (cStack_2a != '\0')) ||
      (((cStack_29 != '\0' || (cStack_28 != '\0')) ||
       ((cStack_27 != '\0' || ((cStack_26 != '\0' || (cStack_25 != '\0')))))))) ||
     ((cStack_24 != '\0' || (((cStack_23 != '\0' || (cStack_22 != '\0')) || (cStack_21 != '\0'))))))
  {
    bStack_3c = bStack_3c | 0x20;
  }
  *ar4 = (short)ar6 - *ar4;
  uVar4 = DAT_8c010df2;
  if ((((bStack_44 != 0) || (cStack_43 != '\0')) ||
      (((cStack_42 != '\0' || ((cStack_41 != '\0' || (cStack_40 != '\0')))) || (cStack_3f != '\0')))
      ) || (((cStack_3e != '\0' || (cStack_3d != '\0')) || (bStack_3c != 0)))) {
    while ((bStack_44 & uVar4) == 0) {
      (*(code *)puVar1)(&bStack_44,9,a6,uVar6);
      *ar4 = *ar4 + -1;
    }
  }
  uVar6 = (*(code *)puVar2)(ar5,&bStack_44,9,uVar6);
  return uVar6;
}



/* FUN_8c010df4 @ 8c010df4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c010df4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr5;
  uint in_fr4;
  uint in_xf4;
  char in_FPSCR_SZ;
  uint uStack_8;
  uint uStack_4;
  
  uStack_8 = in_xf4;
  uStack_4 = in_fr5;
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = in_fr5;
    uStack_4 = in_fr4;
  }
  if ((uStack_4 & DAT_8c010e30) != DAT_8c010e30) {
    return 0;
  }
  if (((uStack_4 & DAT_8c010e34) == 0) && (uStack_8 == 0)) {
    return 2;
  }
  return 1;
}



/* FUN_8c010e38 @ 8c010e38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c010e38(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  uint uVar1;
  uint *puVar2;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = (uint *)auStack_4;
  }
  else {
    puVar2 = (uint *)auStack_8;
  }
  uVar1 = *puVar2 & DAT_8c010e70;
  if (DAT_8c010e74 == (DAT_8c010e74 & uVar1)) {
    if ((DAT_8c010e78 & uVar1) == 0) {
      *DAT_8c010e6c = DAT_8c010e80;
    }
    else {
      uVar1 = (uVar1 & DAT_8c010e74) + 1;
      *DAT_8c010e6c = DAT_8c010e7c;
    }
  }
  *puVar2 = uVar1;
  return in_r0;
}



/* FUN_8c010e84 @ 8c010e84 callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c010e84(int ar4,byte *ar5,int *ar6,byte *ar7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  byte *a7;
  byte *a5;
  int *a4;
  byte *pbVar11;
  byte *pbVar12;
  byte *a7_00;
  byte abStack_10020 [65536];
  undefined4 uStack_20;
  byte abStack_c [4];
  
  abStack_c[0] = 0;
  abStack_c[1] = 0;
  abStack_c[2] = 0;
  abStack_c[3] = 0;
  iVar2 = (int)DAT_8c010f64;
  a7_00 = (byte *)((int)&uStack_20 + DAT_8c010f68 + iVar2);
  a4 = (int *)((int)&uStack_20 + DAT_8c010f66 + iVar2);
  *a4 = 0;
  a4[1] = 0;
  a4[2] = 0;
  *a7_00 = 0;
  a7_00[1] = 0;
  a7_00[2] = 0;
  a7_00[3] = 0;
  a7_00[4] = 0;
  a7_00[5] = 0;
  a7_00[6] = 0;
  a7_00[7] = 0;
  a7_00[8] = 0;
  a7_00[9] = 0;
  a7_00[10] = 0;
  a7_00[0xb] = 0;
  a7_00[0x10] = 0;
  a7_00[0x11] = 0;
  a7_00[0x12] = 0;
  a7_00[0x13] = 0;
  a7_00[0x14] = 0;
  a7_00[0x15] = 0;
  a7_00[0x16] = 0;
  a7_00[0x17] = 0;
  a7_00[0x18] = 0;
  a7_00[0x19] = 0;
  a7_00[0x1a] = 0;
  a7_00[0x1b] = 0;
  a7_00[0x1c] = 0;
  a7_00[0x1d] = 0;
  a7_00[0x1e] = 0;
  a7_00[0x1f] = 0;
  a7_00[0x20] = 0;
  a7_00[0x21] = 0;
  a7_00[0x22] = 0;
  a7_00[0x23] = 0;
  a7_00[0x24] = 0;
  a7_00[0x25] = 0;
  a7_00[0x26] = 0;
  a7_00[0x27] = 0;
  a7_00[0x28] = 0;
  a7_00[0x29] = 0;
  a7_00[0x2a] = 0;
  a7_00[0x2b] = 0;
  a7 = ar7;
  if (ar4 == 0) {
    if (ar6 == (int *)0x0) {
      *DAT_8c010f74 = (int)DAT_8c010f6a;
      return 0xffffffff;
    }
    if ((*(byte *)(ar6 + 4) & 7) == 0) {
      *DAT_8c010f74 = (int)DAT_8c010f6c;
      return 0xffffffff;
    }
    a7 = (byte *)(int)(char)ar6[4];
    if ((((uint)a7 & 4) == 0) && (((uint)a7 & 1) != 0)) {
      *DAT_8c010f74 = (int)DAT_8c010f6e;
      return 0xffffffff;
    }
    a4[3] = (int)ar5;
  }
  *a4 = ar4;
  a4[1] = (int)ar6;
  a4[2] = 0;
  *a7_00 = 0;
  (&stack0xffffffe8)[iVar2] = 0x30;
  iVar3 = FUN_8c011836(a4,ar5,ar6,a7);
  if (iVar3 != 0) {
    return 0xffffffff;
  }
  a5 = abStack_c + iVar2;
  iVar3 = (int)DAT_8c010f70;
  *(byte **)(&stack0xfffffff0 + iVar2) = a5;
  do {
    while( true ) {
      if (((*ar7 == 0) || (iVar5 = FUN_8c011836(a4,ar5,ar6,a7), iVar5 != 0)) || ((*a7_00 & 1) != 0))
      {
        FUN_8c011826(a4,ar5,ar6,a7);
        return a4[2];
      }
      if (*ar7 == 0x25) break;
      *(byte **)((int)&uStack_20 + iVar2) = ar7;
      while ((**(char **)((int)&uStack_20 + iVar2) != '\0' &&
             (**(char **)((int)&uStack_20 + iVar2) != '%'))) {
        *(int *)((int)&uStack_20 + iVar2) = *(int *)((int)&uStack_20 + iVar2) + 1;
      }
      ar5 = (byte *)(*(int *)((int)&uStack_20 + iVar2) - (int)ar7);
      ar6 = a4;
      FUN_8c0117ce(ar7,ar5,a4,a7);
      ar7 = *(byte **)((int)&uStack_20 + iVar2);
    }
    *a7_00 = 0;
    *(byte **)(a7_00 + 0x10) = a5;
    *(byte **)(a7_00 + 0x14) = a5;
    a7_00[0x18] = 0;
    a7_00[0x19] = 0;
    a7_00[0x1a] = 0;
    a7_00[0x1b] = 0;
    a7_00[0x1c] = 0;
    a7_00[0x1d] = 0;
    a7_00[0x1e] = 0;
    a7_00[0x1f] = 0;
    a7_00[0x20] = 0;
    a7_00[0x21] = 0;
    a7_00[0x22] = 0;
    a7_00[0x23] = 0;
    a7_00[0x24] = 0;
    a7_00[0x25] = 0;
    a7_00[0x26] = 0;
    a7_00[0x27] = 0;
    a7_00[0x28] = 0;
    a7_00[0x29] = 0;
    a7_00[0x2a] = 0;
    a7_00[0x2b] = 0;
    while( true ) {
      pbVar11 = ar7 + 1;
      bVar1 = *pbVar11;
      if (((bVar1 != 0x2d) && (bVar1 != 0x2b)) && ((bVar1 != 0x20 && (bVar1 != 0x23)))) break;
      bVar1 = *pbVar11;
      ar7 = pbVar11;
      if (bVar1 == 0x2d) {
        bVar1 = *a7_00 | 2;
LAB_8c010f8a:
        *a7_00 = bVar1;
      }
      else {
        if (bVar1 == 0x2b) {
          bVar1 = *a7_00 | 8;
          goto LAB_8c010f8a;
        }
        if (bVar1 == 0x20) {
          if ((*a7_00 & 8) == 0) {
            *a7_00 = *a7_00 | 0x10;
          }
        }
        else if (bVar1 == 0x23) {
          bVar1 = *a7_00 | 4;
          goto LAB_8c010f8a;
        }
      }
    }
    a7_00[1] = 0x20;
    if (*pbVar11 == 0x30) {
      pbVar11 = ar7 + 2;
      a7_00[1] = 0x30;
    }
    a7_00[4] = 0;
    a7_00[5] = 0;
    a7_00[6] = 0;
    a7_00[7] = 0;
    if (*pbVar11 == 0x2a) {
      uVar7 = *(int *)((int)&uStack_20 + DAT_8c01104e + iVar2) + 4;
      if ((uVar7 & 3) != 0) {
        uVar7 = *(int *)((int)&uStack_20 + DAT_8c01104e + iVar2) + 8;
      }
      ar5 = (byte *)(uVar7 - 4);
      *(uint *)((int)&uStack_20 + DAT_8c01104e + iVar2) = uVar7;
      pbVar12 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar12 = (byte *)(uVar7 - 8);
      }
      iVar5 = *(int *)pbVar12;
      *(int *)(a7_00 + 4) = iVar5;
      if (iVar5 < 0) {
        *a7_00 = *a7_00 | 2;
        *(int *)(a7_00 + 4) = -*(int *)(a7_00 + 4);
      }
      pbVar11 = pbVar11 + 1;
      if ((int)DAT_8c011050 < *(int *)(a7_00 + 4)) {
        *a7_00 = *a7_00 | 1;
        *DAT_8c011054 = iVar3;
      }
    }
    if ((PTR_DAT_8c011058[*pbVar11] & 4) != 0) {
      a7_00[4] = 0;
      a7_00[5] = 0;
      a7_00[6] = 0;
      a7_00[7] = 0;
      while ((PTR_DAT_8c011118[*pbVar11] & 4) != 0) {
        iVar8 = (char)*pbVar11 + -0x30;
        iVar5 = (*(code *)PTR_libgcc_divide_helper_010468_8c01105c)(iVar8,ar5,ar6,a7);
        pbVar11 = pbVar11 + 1;
        if (iVar5 < *(int *)(a7_00 + 4)) {
          *a7_00 = *a7_00 | 1;
          *DAT_8c011114 = iVar3;
        }
        else {
          *(int *)(a7_00 + 4) = *(int *)(a7_00 + 4) * 10 + iVar8;
        }
      }
    }
    a7_00[8] = 0xff;
    a7_00[9] = 0xff;
    a7_00[10] = 0xff;
    a7_00[0xb] = 0xff;
    pbVar12 = pbVar11;
    if (*pbVar11 == 0x2e) {
      pbVar12 = pbVar11 + 1;
      if (*pbVar12 == 0x2a) {
        uVar7 = *(int *)((int)&uStack_20 + DAT_8c011110 + iVar2) + 4;
        if ((uVar7 & 3) != 0) {
          uVar7 = *(int *)((int)&uStack_20 + DAT_8c011110 + iVar2) + 8;
        }
        ar5 = (byte *)(uVar7 - 4);
        *(uint *)((int)&uStack_20 + DAT_8c011110 + iVar2) = uVar7;
        pbVar12 = ar5;
        if (((uint)ar5 & 3) != 0) {
          pbVar12 = (byte *)(uVar7 - 8);
        }
        iVar5 = *(int *)pbVar12;
        *(int *)(a7_00 + 8) = iVar5;
        if (iVar5 < 0) {
          a7_00[8] = 0xff;
          a7_00[9] = 0xff;
          a7_00[10] = 0xff;
          a7_00[0xb] = 0xff;
        }
        pbVar12 = pbVar11 + 2;
        if ((int)DAT_8c011112 < *(int *)(a7_00 + 8)) {
          *a7_00 = *a7_00 | 1;
          *DAT_8c011114 = iVar3;
        }
      }
      if ((PTR_DAT_8c011118[*pbVar12] & 4) != 0) {
        a7_00[8] = 0;
        a7_00[9] = 0;
        a7_00[10] = 0;
        a7_00[0xb] = 0;
        while ((PTR_DAT_8c0111f8[*pbVar12] & 4) != 0) {
          iVar8 = (char)*pbVar12 + -0x30;
          iVar5 = (*(code *)PTR_libgcc_divide_helper_010468_8c01111c)(iVar8,ar5,ar6,a7);
          pbVar12 = pbVar12 + 1;
          if (iVar5 < *(int *)(a7_00 + 8)) {
            *a7_00 = *a7_00 | 1;
            *DAT_8c0111f4 = iVar3;
          }
          else {
            *(int *)(a7_00 + 8) = *(int *)(a7_00 + 8) * 10 + iVar8;
          }
        }
      }
    }
    a7_00[0xc] = 0x20;
    a7_00[0xd] = 0;
    a7_00[0xe] = 0;
    a7_00[0xf] = 0;
    bVar1 = *pbVar12;
    if (((bVar1 == 0x68) || (bVar1 == 0x6c)) || (bVar1 == 0x4c)) {
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      *(int *)(a7_00 + 0xc) = (int)(char)bVar1;
    }
    bVar1 = *pbVar12;
    if (((((bVar1 == 100) || (bVar1 == 0x69)) || (bVar1 == 0x6f)) ||
        ((bVar1 == 0x75 || (bVar1 == 0x78)))) || (bVar1 == 0x58)) {
      if (*(int *)(a7_00 + 0xc) == 0x6c) {
        uVar7 = *(int *)((int)&uStack_20 + DAT_8c0111f2 + iVar2) + 4;
        if ((uVar7 & 3) != 0) {
          uVar7 = *(int *)((int)&uStack_20 + DAT_8c0111f2 + iVar2) + 8;
        }
        puVar10 = (uint *)(uVar7 - 4);
        *(uint *)((int)&uStack_20 + DAT_8c0111f2 + iVar2) = uVar7;
        if (((uint)puVar10 & 3) != 0) {
          puVar10 = (uint *)(*(int *)((int)&uStack_20 + DAT_8c0111f2 + iVar2) + -8);
        }
        uVar7 = *puVar10;
      }
      else if (*(int *)(a7_00 + 0xc) == 0x68) {
        bVar1 = *pbVar12;
        if ((((bVar1 == 0x75) || (bVar1 == 0x58)) || (bVar1 == 0x78)) || (bVar1 == 0x6f)) {
          uVar7 = *(int *)((int)&uStack_20 + DAT_8c0112b8 + iVar2) + 4;
          if ((uVar7 & 3) != 0) {
            uVar7 = *(int *)((int)&uStack_20 + DAT_8c0112b8 + iVar2) + 8;
          }
          puVar10 = (uint *)(uVar7 - 4);
          *(uint *)((int)&uStack_20 + DAT_8c0112b8 + iVar2) = uVar7;
          if (((uint)puVar10 & 3) != 0) {
            puVar10 = (uint *)(*(int *)((int)&uStack_20 + DAT_8c0112b8 + iVar2) + -8);
          }
          uVar7 = *puVar10 & 0xffff;
        }
        else {
          uVar7 = *(int *)((int)&uStack_20 + DAT_8c0112b8 + iVar2) + 4;
          if ((uVar7 & 3) != 0) {
            uVar7 = *(int *)((int)&uStack_20 + DAT_8c0112b8 + iVar2) + 8;
          }
          puVar9 = (undefined4 *)(uVar7 - 4);
          *(uint *)((int)&uStack_20 + DAT_8c0112b8 + iVar2) = uVar7;
          if (((uint)puVar9 & 3) != 0) {
            puVar9 = (undefined4 *)(*(int *)((int)&uStack_20 + DAT_8c0112b8 + iVar2) + -8);
          }
          uVar7 = (uint)(short)*puVar9;
        }
      }
      else {
        bVar1 = *pbVar12;
        if (((bVar1 == 0x75) || (bVar1 == 0x58)) || ((bVar1 == 0x78 || (bVar1 == 0x6f)))) {
          uVar7 = *(int *)((int)&uStack_20 + DAT_8c0112b8 + iVar2) + 4;
          if ((uVar7 & 3) != 0) {
            uVar7 = *(int *)((int)&uStack_20 + DAT_8c0112b8 + iVar2) + 8;
          }
          puVar10 = (uint *)(uVar7 - 4);
          *(uint *)((int)&uStack_20 + DAT_8c0112b8 + iVar2) = uVar7;
          if (((uint)puVar10 & 3) != 0) {
            puVar10 = (uint *)(*(int *)((int)&uStack_20 + DAT_8c0112b8 + iVar2) + -8);
          }
        }
        else {
          uVar7 = *(int *)((int)&uStack_20 + DAT_8c0113c0 + iVar2) + 4;
          if ((uVar7 & 3) != 0) {
            uVar7 = *(int *)((int)&uStack_20 + DAT_8c0113c0 + iVar2) + 8;
          }
          puVar10 = (uint *)(uVar7 - 4);
          *(uint *)((int)&uStack_20 + DAT_8c0113c0 + iVar2) = uVar7;
          if (((uint)puVar10 & 3) != 0) {
            puVar10 = (uint *)(*(int *)((int)&uStack_20 + DAT_8c0113c0 + iVar2) + -8);
          }
        }
        uVar7 = *puVar10;
      }
      if (*(int *)(a7_00 + 8) == -1) {
        a7_00[8] = 1;
        a7_00[9] = 0;
        a7_00[10] = 0;
        a7_00[0xb] = 0;
      }
      ar6 = (int *)(int)(char)*pbVar12;
      ar5 = a5;
      a7 = a7_00;
      FUN_8c0115c4(uVar7,a5,ar6,a7_00);
      *(byte **)(&stack0xffffffe4 + iVar2) = a5;
      uVar4 = (*(code *)PTR_log_message_8c0113c4)(a5,ar5,ar6,a7);
LAB_8c011404:
      *(undefined4 *)(&stack0xffffffec + iVar2) = uVar4;
    }
    else {
      if (((bVar1 == 0x66) || (bVar1 == 0x65)) ||
         ((bVar1 == 0x45 || ((bVar1 == 0x67 || (bVar1 == 0x47)))))) {
        ar6 = (int *)(int)(char)*pbVar12;
        ar5 = a5;
        a7 = a7_00;
        (*(code *)PTR_FUN_8c0113c8)((int)&uStack_20 + DAT_8c0113c0 + iVar2,a5,ar6,a7_00);
        *(byte **)(&stack0xffffffe4 + iVar2) = a5;
        uVar4 = (*(code *)PTR_log_message_8c0113c4)(a5,ar5,ar6,a7);
        goto LAB_8c011404;
      }
      if (bVar1 == 99) {
        puVar6 = *(undefined1 **)(&stack0xfffffff0 + iVar2);
        uVar7 = *(int *)((int)&uStack_20 + DAT_8c0113c0 + iVar2) + 4;
        if ((uVar7 & 3) != 0) {
          uVar7 = *(int *)((int)&uStack_20 + DAT_8c0113c0 + iVar2) + 8;
        }
        ar5 = (byte *)(uVar7 - 4);
        *(uint *)((int)&uStack_20 + DAT_8c0113c0 + iVar2) = uVar7;
        pbVar11 = ar5;
        if (((uint)ar5 & 3) != 0) {
          pbVar11 = (byte *)(uVar7 - 8);
        }
        *puVar6 = (char)*(int *)pbVar11;
LAB_8c011442:
        *(byte **)(&stack0xffffffe4 + iVar2) = a5;
        *(undefined4 *)(&stack0xffffffec + iVar2) = 1;
        *(byte **)(a7_00 + 0x14) = a5;
        a7_00[0x20] = 0;
        a7_00[0x21] = 0;
        a7_00[0x22] = 0;
        a7_00[0x23] = 0;
        *(int *)(a7_00 + 0x28) = *(int *)(a7_00 + 4) + -1;
      }
      else if (bVar1 == 0x73) {
        uVar7 = *(int *)((int)&uStack_20 + DAT_8c0113c0 + iVar2) + 4;
        if ((uVar7 & 3) != 0) {
          uVar7 = *(int *)((int)&uStack_20 + DAT_8c0113c0 + iVar2) + 8;
        }
        ar5 = (byte *)(uVar7 - 4);
        *(uint *)((int)&uStack_20 + DAT_8c0113c0 + iVar2) = uVar7;
        pbVar11 = ar5;
        if (((uint)ar5 & 3) != 0) {
          pbVar11 = (byte *)(uVar7 - 8);
        }
        iVar5 = *(int *)pbVar11;
        *(int *)(&stack0xffffffe4 + iVar2) = iVar5;
        uVar4 = (*(code *)PTR_log_message_8c0113c4)(iVar5,ar5,ar6,a7);
        *(undefined4 *)(&stack0xffffffec + iVar2) = uVar4;
        if ((*(int *)(a7_00 + 8) != -1) &&
           (*(int *)(a7_00 + 8) < *(int *)(&stack0xffffffec + iVar2))) {
          *(undefined4 *)(&stack0xffffffec + iVar2) = *(undefined4 *)(a7_00 + 8);
        }
        *(byte **)(a7_00 + 0x14) = a5;
        a7_00[0x20] = 0;
        a7_00[0x21] = 0;
        a7_00[0x22] = 0;
        a7_00[0x23] = 0;
        *(int *)(a7_00 + 0x28) = *(int *)(a7_00 + 4) - *(int *)(&stack0xffffffec + iVar2);
      }
      else {
        if (bVar1 == 0x70) {
          uVar7 = *(int *)((int)&uStack_20 + DAT_8c0113c0 + iVar2) + 4;
          if ((uVar7 & 3) != 0) {
            uVar7 = *(int *)((int)&uStack_20 + DAT_8c0113c0 + iVar2) + 8;
          }
          puVar9 = (undefined4 *)(uVar7 - 4);
          *(uint *)((int)&uStack_20 + DAT_8c0114c8 + iVar2) = uVar7;
          if (((uint)puVar9 & 3) != 0) {
            puVar9 = (undefined4 *)(uVar7 - 8);
          }
          uVar4 = *puVar9;
          if (*(int *)(a7_00 + 8) == -1) {
            a7_00[8] = 1;
            a7_00[9] = 0;
            a7_00[10] = 0;
            a7_00[0xb] = 0;
          }
          ar6 = (int *)0x78;
          ar5 = a5;
          a7 = a7_00;
          FUN_8c0115c4(uVar4,a5,0x78,a7_00);
          *(byte **)(&stack0xffffffe4 + iVar2) = a5;
          uVar4 = (*(code *)PTR_log_message_8c0114cc)(a5,ar5,ar6,a7);
          goto LAB_8c011404;
        }
        if (bVar1 == 0x6e) {
          uVar7 = *(int *)((int)&uStack_20 + DAT_8c0114c8 + iVar2) + 4;
          if ((uVar7 & 3) != 0) {
            uVar7 = *(int *)((int)&uStack_20 + DAT_8c0114c8 + iVar2) + 8;
          }
          ar5 = (byte *)(uVar7 - 4);
          *(uint *)((int)&uStack_20 + DAT_8c0114c8 + iVar2) = uVar7;
          pbVar11 = ar5;
          if (((uint)ar5 & 3) != 0) {
            pbVar11 = (byte *)(uVar7 - 8);
          }
          **(int **)pbVar11 = a4[2];
        }
        else {
          if (bVar1 == 0x25) {
            **(undefined1 **)(&stack0xfffffff0 + iVar2) = 0x25;
            goto LAB_8c011442;
          }
          *DAT_8c0114d0 = iVar3;
          *a7_00 = *a7_00 | 1;
        }
      }
    }
    if ((*pbVar12 != 0x6e) && ((*a7_00 & 1) == 0)) {
      if (((*a7_00 & 2) == 0) && (0 < *(int *)(a7_00 + 0x28))) {
        while (0 < *(int *)(a7_00 + 0x28)) {
          FUN_8c0117ce(a7_00 + 1,1,a4,a7);
          *(int *)(a7_00 + 0x28) = *(int *)(a7_00 + 0x28) + -1;
        }
      }
      if (((*(int *)(a7_00 + 0x1c) == 0) && (*(int *)(a7_00 + 0x20) == 0)) &&
         (*(int *)(a7_00 + 0x24) == 0)) {
        ar5 = *(byte **)(&stack0xffffffec + iVar2);
        ar6 = a4;
        FUN_8c0117ce(*(undefined4 *)(&stack0xffffffe4 + iVar2),ar5,a4,a7);
      }
      else {
        iVar5 = *(int *)(a7_00 + 0x10) - *(int *)(&stack0xffffffe4 + iVar2);
        *(int *)((int)&uStack_20 + iVar2) = iVar5;
        if (0 < iVar5) {
          FUN_8c0117ce(*(int *)(&stack0xffffffe4 + iVar2),iVar5,a4,a7);
        }
        while (0 < *(int *)(a7_00 + 0x1c)) {
          FUN_8c0117ce(&stack0xffffffe8 + iVar2,1,a4,a7);
          *(int *)(a7_00 + 0x1c) = *(int *)(a7_00 + 0x1c) + -1;
        }
        iVar5 = *(int *)(a7_00 + 0x14) - *(int *)(a7_00 + 0x10);
        *(int *)((int)&uStack_20 + iVar2) = *(int *)((int)&uStack_20 + iVar2) + iVar5;
        if (0 < iVar5) {
          FUN_8c0117ce(*(undefined4 *)(a7_00 + 0x10),iVar5,a4,a7);
        }
        while (0 < *(int *)(a7_00 + 0x20)) {
          FUN_8c0117ce(&stack0xffffffe8 + iVar2,1,a4,a7);
          *(int *)(a7_00 + 0x20) = *(int *)(a7_00 + 0x20) + -1;
        }
        ar5 = (byte *)(*(int *)(&stack0xffffffec + iVar2) - *(int *)((int)&uStack_20 + iVar2));
        ar6 = a4;
        FUN_8c0117ce(*(undefined4 *)(a7_00 + 0x14),ar5,a4,a7);
        while (0 < *(int *)(a7_00 + 0x24)) {
          ar5 = (byte *)0x1;
          ar6 = a4;
          FUN_8c0117ce(&stack0xffffffe8 + iVar2,1,a4,a7);
          *(int *)(a7_00 + 0x24) = *(int *)(a7_00 + 0x24) + -1;
        }
      }
      if (((*a7_00 & 2) != 0) && (0 < *(int *)(a7_00 + 0x28))) {
        while (0 < *(int *)(a7_00 + 0x28)) {
          ar5 = (byte *)0x1;
          ar6 = a4;
          FUN_8c0117ce(a7_00 + 1,1,a4,a7);
          *(int *)(a7_00 + 0x28) = *(int *)(a7_00 + 0x28) + -1;
        }
      }
    }
    ar7 = pbVar12 + 1;
  } while( true );
}



/* FUN_8c0115c4 @ 8c0115c4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0115c4(int ar4,char *ar5,int ar6,byte *ar7)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *extraout_r2;
  char *a5;
  int iVar5;
  int iVar6;
  char acStack_2d [17];
  
  *ar5 = '\0';
  iVar3 = ar4;
  if (((ar6 == 100) || (ar6 == 0x69)) && (ar4 < 0)) {
    iVar3 = -ar4;
  }
  iVar6 = 0;
  iVar5 = 0;
  a5 = ar5;
  if ((iVar3 == 0) && (*(int *)(ar7 + 8) != 0)) {
    acStack_2d[1] = 0x30;
    iVar6 = 1;
  }
  else {
    while (iVar3 != 0) {
      uVar2 = (*(code *)PTR_libgcc_divide_helper_0106dc_8c011758)(ar4,a5,ar6,ar7);
      *extraout_r2 = (char)uVar2;
      if (acStack_2d[iVar6 + 1] < '\n') {
        acStack_2d[iVar6 + 1] = acStack_2d[iVar6 + 1] + '0';
      }
      else {
        pcVar4 = acStack_2d + iVar6 + 1;
        if (ar6 == 0x78) {
          *pcVar4 = *pcVar4 + 'W';
        }
        else {
          *pcVar4 = *pcVar4 + '7';
        }
      }
      iVar3 = (*(code *)PTR_libgcc_divide_helper_01051c_8c01175c)(ar4,a5,ar6,ar7);
      iVar6 = iVar6 + 1;
    }
  }
  if ((*ar7 & 4) != 0) {
    if (ar6 == 0x6f) {
      if (ar4 != 0) {
        acStack_2d[iVar6 + 1] = '0';
        iVar6 = iVar6 + 1;
      }
    }
    else if (((ar6 == 0x78) || (ar6 == 0x58)) && (ar4 != 0)) {
      *a5 = '0';
      a5[1] = (char)ar6;
      iVar5 = 2;
      a5 = a5 + 2;
    }
  }
  iVar5 = iVar5 + iVar6;
  if (((ar6 == 100) || (ar6 == 0x69)) && ((*(int *)(ar7 + 8) != 0 || (ar4 != 0)))) {
    if (ar4 < 0) {
      *a5 = '-';
    }
    else {
      if ((*ar7 & 8) == 0) {
        if ((*ar7 & 0x10) != 0) {
          *a5 = ' ';
          iVar5 = iVar5 + 1;
          a5 = a5 + 1;
        }
        goto LAB_8c011706;
      }
      *a5 = '+';
    }
    iVar5 = iVar5 + 1;
    a5 = a5 + 1;
  }
LAB_8c011706:
  cVar1 = *ar5;
  if (((cVar1 == '+') || (cVar1 == '-')) || (cVar1 == ' ')) {
    *(char **)(ar7 + 0x14) = ar5 + 1;
  }
  else if ((*ar7 & 4) == 0) {
    *(char **)(ar7 + 0x14) = ar5;
  }
  else if ((ar6 == 0x58) || (ar6 == 0x78)) {
    *(char **)(ar7 + 0x14) = ar5 + 2;
  }
  else if (ar6 == 0x6f) {
    *(char **)(ar7 + 0x14) = ar5 + 1;
  }
  if (iVar5 < *(int *)(ar7 + 8)) {
    *(int *)(ar7 + 0x20) = *(int *)(ar7 + 8) - iVar5;
    iVar5 = *(int *)(ar7 + 8);
  }
  else {
    ar7[0x20] = 0;
    ar7[0x21] = 0;
    ar7[0x22] = 0;
    ar7[0x23] = 0;
  }
  iVar3 = (int)*ar5;
  if (((iVar3 == 0x2b) || (iVar3 == 0x2d)) || (iVar3 == 0x20)) {
    if (iVar5 < *(int *)(ar7 + 4)) {
      iVar3 = (int)(char)ar7[1];
      if (iVar3 == 0x30) {
        *(int *)(ar7 + 0x20) = *(int *)(ar7 + 0x20) + (*(int *)(ar7 + 4) - iVar5);
        ar7[0x28] = 0;
        ar7[0x29] = 0;
        ar7[0x2a] = 0;
        ar7[0x2b] = 0;
        goto joined_r0x8c0117a8;
      }
      goto LAB_8c011792;
    }
  }
  else {
LAB_8c011792:
    if (iVar5 < *(int *)(ar7 + 4)) {
      *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar5;
      goto joined_r0x8c0117a8;
    }
  }
  ar7[0x28] = 0;
  ar7[0x29] = 0;
  ar7[0x2a] = 0;
  ar7[0x2b] = 0;
joined_r0x8c0117a8:
  while (iVar5 = iVar6 + -1, -1 < iVar5) {
    *a5 = acStack_2d[iVar6];
    a5 = a5 + 1;
    iVar3 = iVar5;
    iVar6 = iVar5;
  }
  *a5 = '\0';
  return iVar3;
}



/* FUN_8c0117ce @ 8c0117ce callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0117ce(char *ar4,int ar5,int *ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *ar6;
  if (iVar2 == 1) {
    iVar2 = (*(code *)PTR_memmove_8c01184c)(ar6[1],ar4,ar5);
    ar6[1] = ar6[1] + ar5;
    ar6[2] = ar6[2] + ar5;
  }
  else {
    iVar3 = 0;
    if (0 < ar5) {
      do {
        cVar1 = *ar4;
        ar4 = ar4 + 1;
        iVar2 = (*(code *)ar6[3])((int)cVar1,ar6[1]);
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        iVar3 = iVar3 + 1;
        ar6[2] = ar6[2] + 1;
      } while (iVar3 < ar5);
    }
  }
  return iVar2;
}



/* FUN_8c0117da @ 8c0117da callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0117da(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  char *unaff_r11;
  int iVar3;
  int *unaff_r14;
  
  iVar2 = *unaff_r14;
  if (iVar2 == 1) {
    iVar2 = (*(code *)PTR_memmove_8c01184c)(unaff_r14[1],unaff_r11,ar5,ar7);
    unaff_r14[1] = unaff_r14[1] + ar5;
    unaff_r14[2] = unaff_r14[2] + ar5;
  }
  else {
    iVar3 = 0;
    if (0 < ar5) {
      do {
        cVar1 = *unaff_r11;
        unaff_r11 = unaff_r11 + 1;
        iVar2 = (*(code *)unaff_r14[3])((int)cVar1,unaff_r14[1],ar6,ar7);
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        iVar3 = iVar3 + 1;
        unaff_r14[2] = unaff_r14[2] + 1;
      } while (iVar3 < ar5);
    }
  }
  return iVar2;
}



/* FUN_8c011826 @ 8c011826 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c011826(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar4;
  if (iVar1 == 1) {
    *(undefined1 *)ar4[1] = 0;
  }
  return iVar1;
}



/* FUN_8c011836 @ 8c011836 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c011836(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*ar4 == 1) {
    return 0;
  }
  return (int)*(char *)(ar4[1] + 0x10) & 0x40;
}



/* FUN_8c011850 @ 8c011850 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c011850(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c011864)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c01186c @ 8c01186c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0118d8) */
/* WARNING: Removing unreachable block (ram,0x8c0118a6) */
/* WARNING: Removing unreachable block (ram,0x8c011884) */
/* WARNING: Removing unreachable block (ram,0x8c0118a2) */
/* WARNING: Removing unreachable block (ram,0x8c0118c6) */
/* WARNING: Removing unreachable block (ram,0x8c0118e6) */
/* WARNING: Removing unreachable block (ram,0x8c0118ae) */
/* WARNING: Removing unreachable block (ram,0x8c0118b4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c01186c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint a4;
  undefined *a5;
  undefined4 a6;
  undefined4 a7;
  undefined1 *puVar2;
  float fVar3;
  ulonglong in_dr2;
  double dVar4;
  double in_dr4;
  undefined4 uVar5;
  undefined8 in_xd2;
  bool bVar6;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = auStack_4;
  }
  else {
    puVar2 = auStack_8;
  }
  *(undefined4 *)(puVar2 + -4) = in_PR;
  uVar1 = 4;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = (float)((ulonglong)in_dr4 >> 0x20);
    in_dr4 = (double)CONCAT44(fVar3,fVar3);
    *(float *)(puVar2 + -8) = fVar3;
  }
  else {
    fVar3 = SUB84(in_dr4,0);
    *(double *)(puVar2 + -8) = in_dr4;
  }
  a4 = 0;
  if (*(int *)(puVar2 + -8) < 0) {
    a4 = 8;
  }
  dVar4 = (double)(in_dr2 & 0xffffffff00000000);
  a7 = 4;
  a6 = 1;
  if (fVar3 == 0.0) {
    a4 = a4 | 4;
  }
  else if ((*(uint *)(puVar2 + -8) & DAT_8c01193c) == DAT_8c011940) {
    uVar1 = 2;
    a4 = a4 | 2;
  }
  uVar5 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar2 + -0xc) = uVar5;
  }
  else {
    *(double *)(puVar2 + -0xc) = in_dr4;
  }
  if ((*(uint *)(puVar2 + -0xc) & DAT_8c011948) != 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44((int)(in_dr2 >> 0x20),*(undefined4 *)(puVar2 + -0xc));
    }
    else {
      in_xd2 = *(undefined8 *)(puVar2 + -0xc);
    }
    fVar3 = SUB84(dVar4,0);
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),-fVar3);
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar2 + -0xc) = -fVar3;
    }
    else {
      *(undefined8 *)(puVar2 + -0xc) = in_xd2;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(puVar2 + -0xc));
    in_dr4 = (double)CONCAT44(uVar5,*(undefined4 *)PTR_DAT_8c01194c);
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = SUB84(in_dr4,0) < SUB84(dVar4,0);
  }
  else {
    bVar6 = in_dr4 < dVar4;
  }
  if (((!bVar6) && (SUB84(dVar4,0) != SUB84(in_dr4,0))) && ((a4 & 4) == 0)) {
    a5 = PTR_DAT_8c011944;
    (*(code *)PTR_FUN_8c011958)(a4,PTR_DAT_8c011944,1,4);
    uVar1 = (*(code *)PTR_FUN_8c01195c)(1,a5,a6,a7);
  }
  return uVar1;
}



/* FUN_8c011960 @ 8c011960 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c011a0a) */
/* WARNING: Removing unreachable block (ram,0x8c0119d0) */
/* WARNING: Removing unreachable block (ram,0x8c0119a4) */
/* WARNING: Removing unreachable block (ram,0x8c011982) */
/* WARNING: Removing unreachable block (ram,0x8c0119a0) */
/* WARNING: Removing unreachable block (ram,0x8c0119b6) */
/* WARNING: Removing unreachable block (ram,0x8c0119e8) */
/* WARNING: Removing unreachable block (ram,0x8c011ade) */
/* WARNING: Removing unreachable block (ram,0x8c0119be) */
/* WARNING: Removing unreachable block (ram,0x8c0119c0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c011960(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint a5;
  undefined1 *a4;
  undefined4 a6;
  undefined4 a7;
  undefined8 *puVar4;
  float fVar5;
  ulonglong in_dr2;
  double dVar6;
  double in_dr4;
  undefined4 uVar7;
  undefined8 in_dr12;
  undefined8 in_dr14;
  undefined8 in_xd2;
  undefined8 in_xd14;
  bool bVar8;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_28 [16];
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_10 = CONCAT44((int)in_dr14,(undefined4)uStack_10);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_10._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar4 = &uStack_18;
    uStack_18 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar4 = (undefined8 *)auStack_28;
    uStack_10 = in_xd14;
    uStack_18 = in_dr14;
  }
  *(undefined4 *)((int)puVar4 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    fVar5 = (float)((ulonglong)in_dr4 >> 0x20);
    in_dr4 = (double)CONCAT44(fVar5,fVar5);
    *(float *)((int)puVar4 + -8) = fVar5;
  }
  else {
    fVar5 = SUB84(in_dr4,0);
    *(double *)((int)puVar4 + -8) = in_dr4;
  }
  a5 = 0;
  if (*(int *)((int)puVar4 + -8) < 0) {
    a5 = 8;
  }
  dVar6 = (double)(in_dr2 & 0xffffffff00000000);
  a7 = 4;
  a6 = 1;
  if (fVar5 == 0.0) {
    a5 = a5 | 4;
  }
  else if ((*(uint *)((int)puVar4 + -8) & DAT_8c011af4) == DAT_8c011af8) {
    a5 = a5 | 2;
  }
  uVar7 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar4 + -0x10) = uVar7;
  }
  else {
    *(double *)((int)puVar4 + -0x10) = in_dr4;
  }
  if ((*(uint *)((int)puVar4 + -0x10) & DAT_8c011afc) != 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44((int)(in_dr2 >> 0x20),*(undefined4 *)((int)puVar4 + -0x10));
    }
    else {
      in_xd2 = *(undefined8 *)((int)puVar4 + -0x10);
    }
    fVar5 = SUB84(dVar6,0);
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),-fVar5);
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0x10) = -fVar5;
    }
    else {
      *(undefined8 *)((int)puVar4 + -0x10) = in_xd2;
    }
  }
  uVar2 = 0x20;
  if ((((int)(*(uint *)((int)puVar4 + -0x10) & DAT_8c011af8) >> 0x17) + -0x7f < 0x20) &&
     ((a5 & 4) == 0)) {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)((int)puVar4 + -0x10))
      ;
      in_dr4 = (double)CONCAT44(uVar7,*(undefined4 *)PTR_DAT_8c011b08);
    }
    fVar5 = SUB84(in_dr4,0);
    if (in_FPSCR_PR == '\0') {
      bVar8 = SUB84(dVar6,0) < fVar5;
    }
    else {
      bVar8 = dVar6 < in_dr4;
    }
    if (in_FPSCR_SZ != '\0') {
      fVar5 = (float)*(undefined8 *)PTR_DAT_8c011b0c;
    }
    if ((bVar8) || (fVar5 != SUB84(dVar6,0))) {
      a4 = (undefined1 *)((int)puVar4 + -0xc);
      (*(code *)PTR_FUN_8c011b1c)(a4,a5,1,4);
      puVar1 = PTR_FUN_8c011b20;
      iVar3 = *(int *)((int)puVar4 + -0xc);
      if (iVar3 != 0) {
        if ((iVar3 == 1) || (iVar3 == 2)) {
          a4 = (undefined1 *)0xfffffffe;
          (*(code *)PTR_FUN_8c011b2c)(0xfffffffe,a5,a6,a7);
        }
        else if ((iVar3 == 3) || (iVar3 == 4)) {
          a4 = (undefined1 *)0xffffffff;
          (*(code *)PTR_FUN_8c011b2c)(0xffffffff,a5,a6,a7);
        }
        else if ((((iVar3 != 5) && (iVar3 != 6)) && (iVar3 != 7)) && (iVar3 != 8)) {
          return iVar3;
        }
      }
      uVar2 = (*(code *)puVar1)(a4,a5,a6,a7);
    }
  }
  return uVar2;
}



/* FUN_8c011b44 @ 8c011b44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c011b44(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c011b8c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c011b9c @ 8c011b9c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c011bbe) */
/* WARNING: Removing unreachable block (ram,0x8c011bd8) */
/* WARNING: Unknown calling convention */

int FUN_8c011b9c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  double in_dr4;
  float fVar1;
  undefined8 in_xd2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_8;
  float fStack_4;
  
  fVar1 = (float)((ulonglong)in_dr4 >> 0x20);
  fStack_4 = SUB84(in_dr4,0);
  fStack_8 = fStack_4;
  if (in_FPSCR_SZ == '\0') {
    fStack_8 = fVar1;
  }
  fStack_4 = fVar1;
  if ((int)((uint)fStack_8 & DAT_8c011bf0) < DAT_8c011bf4) {
    if (in_FPSCR_PR == '\0') {
      in_r0 = (int)fVar1;
    }
    else {
      in_r0 = (int)in_dr4;
    }
    if (in_FPSCR_SZ != '\0') {
      fStack_4 = (float)((ulonglong)in_xd2 >> 0x20);
    }
  }
  if ((DAT_8c011bec & (uint)fStack_4) == 0) {
    in_r0 = 4;
  }
  return in_r0;
}



/* FUN_8c011bfc @ 8c011bfc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c011c1e) */
/* WARNING: Removing unreachable block (ram,0x8c011c38) */
/* WARNING: Unknown calling convention */

int FUN_8c011bfc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  double in_dr4;
  float fVar1;
  undefined8 in_xd2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_8;
  float fStack_4;
  
  fVar1 = (float)((ulonglong)in_dr4 >> 0x20);
  fStack_4 = SUB84(in_dr4,0);
  fStack_8 = fStack_4;
  if (in_FPSCR_SZ == '\0') {
    fStack_8 = fVar1;
  }
  fStack_4 = fVar1;
  if ((int)((uint)fStack_8 & DAT_8c011c50) < DAT_8c011c54) {
    if (in_FPSCR_PR == '\0') {
      in_r0 = (int)fVar1;
    }
    else {
      in_r0 = (int)in_dr4;
    }
    if (in_FPSCR_SZ != '\0') {
      fStack_4 = (float)((ulonglong)in_xd2 >> 0x20);
    }
  }
  if ((DAT_8c011c4c & (uint)fStack_4) != 0) {
    in_r0 = 4;
  }
  return in_r0;
}



/* FUN_8c011c5c @ 8c011c5c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c011c90) */
/* WARNING: Removing unreachable block (ram,0x8c011cea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c011c5c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 *puVar1;
  uint uVar2;
  uint unaff_r14;
  undefined4 in_fr1;
  float fVar4;
  float fVar5;
  double dVar3;
  undefined8 in_dr4;
  double dVar6;
  undefined8 in_xd2;
  undefined8 in_xd4;
  bool bVar7;
  int iVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_14;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uVar2 = (uint)((ulonglong)in_dr4 >> 0x20);
  uStack_c = (uint)in_dr4;
  uStack_8 = uVar2;
  if (in_FPSCR_SZ != '\0') {
    uStack_c = (uint)in_xd4;
    uStack_8 = (uint)((ulonglong)in_xd4 >> 0x20);
    unaff_r14 = uVar2;
  }
  if (((uStack_8 & DAT_8c011d30) != DAT_8c011d30) &&
     (((uStack_c & DAT_8c011d30) != DAT_8c011d30 || ((uStack_c & DAT_8c011d34) == 0)))) {
    in_r0 = 0x14;
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)((ulonglong)uStack_c << 0x20);
    }
    else {
      dVar3 = (double)CONCAT44(uStack_8,uStack_c);
    }
    fVar4 = (float)((ulonglong)dVar3 >> 0x20);
    if (fVar4 != SUB84(dVar3,0)) {
      if ((uStack_c & DAT_8c011d30) == DAT_8c011d30) {
        *ar4 = 0;
        return 0x14;
      }
      uStack_8 = uStack_8 & DAT_8c011d40;
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(fVar4,uStack_c & DAT_8c011d40);
        dVar6 = (double)CONCAT44(uStack_8,(uint)in_dr4);
      }
      else {
        in_xd2 = CONCAT44(uStack_8,uStack_c & DAT_8c011d40);
        dVar6 = (double)CONCAT44(unaff_r14,uStack_8);
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) / SUB84(dVar3,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 / dVar3;
      }
      fVar4 = (float)((ulonglong)dVar6 >> 0x20);
      fStack_14 = fVar4;
      if (in_FPSCR_SZ != '\0') {
        fStack_14 = SUB84(dVar6,0);
        fStack_10 = fVar4;
      }
      uVar2 = (uint)fStack_14 & DAT_8c011d3c;
      if ((int)(DAT_8c011d30 & (uint)fStack_14) < DAT_8c011d44) {
        if (in_FPSCR_PR == '\0') {
          iVar8 = (int)fVar4;
        }
        else {
          iVar8 = (int)dVar6;
        }
        fStack_14 = (float)iVar8;
        dVar3 = (double)(ulonglong)(uint)fStack_14;
        if (in_FPSCR_SZ != '\0') {
          fStack_14 = (float)in_xd2;
          fStack_10 = (float)((ulonglong)in_xd2 >> 0x20);
        }
      }
      uVar2 = (uint)fStack_14 | uVar2;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(uVar2,in_fr1);
      }
      else {
        dVar6 = (double)CONCAT44(fStack_10,uVar2);
      }
      puVar1 = &DAT_8c011d48;
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(DAT_8c011d48,SUB84(dVar3,0));
      }
      else {
        dVar3 = (double)CONCAT44(DAT_8c011d4c,DAT_8c011d48);
      }
      fVar4 = (float)((ulonglong)dVar6 >> 0x20);
      fVar5 = (float)((ulonglong)dVar3 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar7 = fVar5 < fVar4;
      }
      else {
        bVar7 = dVar3 < dVar6;
      }
      if (bVar7) {
        puVar1 = &DAT_8c011d4c;
        if (in_FPSCR_SZ == '\0') {
          dVar3 = (double)CONCAT44(fVar5,fVar4);
          dVar6 = (double)CONCAT44(fVar4,DAT_8c011d4c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),SUB84(dVar3,0) + SUB84(dVar6,0));
        }
        else {
          dVar3 = dVar3 + dVar6;
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(fVar5,fVar4);
      }
      if (in_FPSCR_PR == '\0') {
        iVar8 = (int)SUB84(dVar3,0);
      }
      else {
        iVar8 = (int)dVar3;
      }
      *ar4 = iVar8;
      return puVar1;
    }
  }
  *ar4 = 0;
  return in_r0;
}



/* FUN_8c011d50 @ 8c011d50 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c011d9c) */
/* WARNING: Removing unreachable block (ram,0x8c011ddc) */
/* WARNING: Unknown calling convention */

uint FUN_8c011d50(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_r0;
  uint uVar1;
  int iVar2;
  undefined8 in_dr4;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr4 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr4;
  }
  uVar1 = uStack_8 & DAT_8c011df0;
  if (uVar1 != DAT_8c011df0) {
    if (0 < (int)uVar1) {
      iVar2 = ((int)uVar1 >> 0x17) + ar4;
      if ((0 < iVar2) && (iVar2 < DAT_8c011dee)) {
        return in_r0;
      }
      if (-1 < ar4) goto joined_r0x8c011d76;
    }
    if ((DAT_8c011df4 & uStack_8) != 0) {
      return in_r0;
    }
    return in_r0;
  }
  in_r0 = DAT_8c011e00;
  if ((DAT_8c011e00 & uStack_8) != 0) {
    return DAT_8c011e00;
  }
joined_r0x8c011d76:
  if ((DAT_8c011df4 & uStack_8) != 0) {
    return in_r0;
  }
  return in_r0;
}



/* FUN_8c011e10 @ 8c011e10 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c011e48) */
/* WARNING: Removing unreachable block (ram,0x8c011e28) */
/* WARNING: Removing unreachable block (ram,0x8c011e44) */
/* WARNING: Removing unreachable block (ram,0x8c011ede) */
/* WARNING: Unknown calling convention */

uint FUN_8c011e10(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  uint *a4;
  undefined4 uVar3;
  double in_dr0;
  float extraout_fr3;
  float fVar4;
  undefined4 extraout_fr2;
  undefined4 uVar5;
  double in_dr4;
  double in_xd4;
  bool bVar6;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  uint uStack_c;
  undefined8 uStack_8;
  
  a4 = &uStack_c;
  uStack_8 = in_dr4;
  if (in_FPSCR_SZ == '\0') {
    uVar3 = (undefined4)((ulonglong)in_dr4 >> 0x20);
    in_dr4 = (double)CONCAT44(uVar3,uVar3);
    uStack_8 = in_xd4;
  }
  uVar2 = 0;
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (double)CONCAT44(in_PR,SUB84(in_dr4,0));
  }
  uVar3 = 8;
  if ((int)(uint)uStack_8 < 0) {
    uVar2 = 8;
  }
  if (SUB84(in_dr4,0) == 0.0) {
    uVar2 = uVar2 | 4;
  }
  else if (((uint)uStack_8 & DAT_8c011ef4) == DAT_8c011ef8) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar2 & 3) == 0) {
    if ((uVar2 & 8) != 0) {
      if (in_FPSCR_PR == '\0') {
        in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
      }
      else {
        in_dr4 = -in_dr4;
      }
    }
    uVar5 = SUB84(in_dr4,0);
    if (in_FPSCR_SZ == '\0') {
      uVar5 = *(undefined4 *)PTR_DAT_8c011f00;
    }
    uVar1 = (*(code *)PTR_FUN_8c011f04)(&uStack_c,8,ar6,ar7);
    fVar4 = extraout_fr3;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uVar5);
      fVar4 = *(float *)PTR_DAT_8c011f00;
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = fVar4 < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar6 = (double)CONCAT44(extraout_fr2,fVar4) < in_dr0;
    }
    if (bVar6) {
      return uVar1;
    }
    uStack_c = uStack_c & 7;
    if ((uStack_c == 0) || (uStack_c == 7)) {
      uStack_c = (*(code *)PTR_FUN_8c011f10)(a4,uVar3,ar6,ar7);
    }
    else if ((uStack_c == 1) || (uStack_c == 2)) {
      uStack_c = (*(code *)PTR_FUN_8c011f14)(a4,uVar3,ar6,ar7);
    }
    else if ((uStack_c == 3) || (uStack_c == 4)) {
      uStack_c = (*(code *)PTR_FUN_8c011f10)(a4,uVar3,ar6,ar7);
    }
    else if ((uStack_c == 5) || (uStack_c == 6)) {
      uStack_c = (*(code *)PTR_FUN_8c011f14)(a4,uVar3,ar6,ar7);
    }
    return uStack_c;
  }
  return uVar2;
}



/* FUN_8c011f18 @ 8c011f18 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c011f82) */
/* WARNING: Removing unreachable block (ram,0x8c011f34) */
/* WARNING: Removing unreachable block (ram,0x8c011f56) */
/* WARNING: Removing unreachable block (ram,0x8c011fe8) */
/* WARNING: Removing unreachable block (ram,0x8c011f5e) */
/* WARNING: Unknown calling convention */

uint FUN_8c011f18(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined *a6;
  double in_dr0;
  double dVar4;
  ulonglong in_dr2;
  double dVar5;
  float fVar6;
  undefined8 in_dr4;
  float fVar7;
  undefined8 in_xd0;
  undefined8 in_xd2;
  float in_PR;
  int a4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fVar7 = (float)((ulonglong)in_dr4 >> 0x20);
  fStack_8 = (float)in_dr4;
  fStack_c = fStack_8;
  fStack_4 = fVar7;
  if (in_FPSCR_SZ == '\0') {
    fStack_8 = fVar7;
    fStack_4 = in_PR;
  }
  uVar2 = 0;
  fVar6 = fVar7;
  if (in_FPSCR_SZ == '\0') {
    fStack_c = fVar7;
    fVar6 = fStack_8;
  }
  fStack_8 = fVar6;
  if ((int)fStack_c < 0) {
    uVar2 = 8;
  }
  dVar5 = (double)(in_dr2 & 0xffffffff00000000);
  if (fVar7 == 0.0) {
    uVar2 = uVar2 | 4;
  }
  else if (((uint)fStack_c & DAT_8c01205c) == DAT_8c012058) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar2 & 4) != 0) {
    return uVar2;
  }
  if (((int)((uint)fStack_8 & DAT_8c012058) >> 0x17) + -0x7f < 0xf) {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fStack_8);
      dVar5 = (double)CONCAT44((int)(in_dr2 >> 0x20),*(undefined4 *)PTR_DAT_8c012070);
    }
    else {
      in_xd0 = CONCAT44(fStack_4,fStack_8);
      in_xd2 = *(undefined8 *)PTR_DAT_8c012070;
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) * SUB84(dVar5,0));
    }
    else {
      dVar4 = in_dr0 * dVar5;
    }
    fVar7 = SUB84(dVar4,0);
    fStack_c = fVar7;
    if (in_FPSCR_SZ != '\0') {
      fStack_c = (float)in_xd0;
      fStack_8 = (float)((ulonglong)in_xd0 >> 0x20);
    }
    uVar2 = DAT_8c012074 & (uint)fStack_c;
    if ((int)((uint)fStack_c & DAT_8c012058) < DAT_8c012078) {
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)(int)fVar7,SUB84(dVar5,0));
      }
      else {
        dVar5 = (double)(int)dVar4;
      }
      fVar6 = (float)((ulonglong)dVar5 >> 0x20);
      fStack_c = fVar6;
      if (in_FPSCR_SZ != '\0') {
        fStack_c = SUB84(dVar5,0);
        fStack_8 = fVar6;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),fVar7);
      in_xd0 = in_xd2;
    }
    uVar2 = (uint)fStack_c | uVar2;
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(uVar2,fVar7);
    }
    else {
      dVar4 = (double)CONCAT44(fStack_8,uVar2);
    }
    fVar7 = (float)((ulonglong)dVar4 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fStack_10 = SUB84(dVar5,0) - fVar7;
      a4 = (int)fVar7;
    }
    else {
      fStack_10 = SUB84(dVar5 - dVar4,0);
      a4 = (int)dVar4;
    }
    if (in_FPSCR_SZ != '\0') {
      fStack_10 = (float)in_xd0;
    }
    if (-2 < ((int)(DAT_8c012058 & (uint)fStack_10) >> 0x17) + -0x7f) {
      if (((uint)fStack_10 & DAT_8c012074) == 0) {
        a4 = a4 + 1;
      }
      else {
        a4 = a4 + -1;
      }
    }
    iVar3 = 6;
    do {
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    iVar3 = 6;
    if (in_FPSCR_SZ == '\0') {
      a6 = PTR_DAT_8c012088 + 4;
    }
    else {
      a6 = PTR_DAT_8c012088 + 8;
    }
    do {
      if (in_FPSCR_SZ == '\0') {
        a6 = a6 + 4;
      }
      else {
        a6 = a6 + 8;
      }
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    uVar1 = (*(code *)PTR_FUN_8c01208c)(a4,iVar3,a6,6);
    return uVar1;
  }
  if ((uVar2 & 8) == 0) {
    return (uint)PTR_DAT_8c01206c;
  }
  return uVar2;
}



/* FUN_8c0121bc @ 8c0121bc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0122c4) */
/* WARNING: Removing unreachable block (ram,0x8c01227c) */
/* WARNING: Removing unreachable block (ram,0x8c012214) */
/* WARNING: Removing unreachable block (ram,0x8c0121de) */
/* WARNING: Removing unreachable block (ram,0x8c012200) */
/* WARNING: Removing unreachable block (ram,0x8c012230) */
/* WARNING: Removing unreachable block (ram,0x8c012288) */
/* WARNING: Removing unreachable block (ram,0x8c0122d0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0121bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  undefined4 in_r0;
  int iVar4;
  uint uVar5;
  uint a4;
  undefined4 a5;
  uint a5_00;
  undefined4 a6;
  undefined4 a7;
  undefined8 *puVar6;
  double in_dr0;
  undefined4 uVar7;
  double in_dr4;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 in_dr14;
  double dVar11;
  undefined8 in_xd2;
  double in_xd4;
  double in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_1c [8];
  undefined8 uStack_14;
  
  uVar3 = DAT_8c012300;
  if (in_FPSCR_SZ == '\0') {
    uStack_14 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_14);
    puVar6 = &uStack_14;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_14._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar6 = (undefined8 *)auStack_1c;
    uStack_14 = in_xd14;
  }
  *(undefined4 *)((int)puVar6 + -4) = in_PR;
  fVar9 = (float)((ulonglong)in_dr4 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)puVar6 + -8) = fVar9;
  }
  else {
    *(double *)((int)puVar6 + -8) = in_dr4;
  }
  iVar4 = *(int *)((int)puVar6 + -8);
  dVar11 = in_dr4;
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(fVar9,(int)in_dr14);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(in_dr4,0));
    in_xd4 = in_xd14;
  }
  a6 = 8;
  a7 = 1;
  a5 = 4;
  fVar10 = SUB84(dVar11,0);
  fVar8 = (float)((ulonglong)in_xd4 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)puVar6 + -8) = fVar10;
    fVar1 = fVar10;
    dVar2 = (double)CONCAT44(fVar10,SUB84(in_dr4,0));
  }
  else {
    *(double *)((int)puVar6 + -8) = in_xd4;
    fVar1 = fVar8;
    dVar2 = in_xd4;
  }
  uVar5 = 0;
  if (*(int *)((int)puVar6 + -8) < 0) {
    uVar5 = 8;
  }
  if (fVar1 == 0.0) {
    uVar5 = uVar5 | 4;
  }
  else if ((*(uint *)((int)puVar6 + -8) & DAT_8c012304) == DAT_8c012300) {
    uVar5 = uVar5 | 2;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = SUB84(dVar2,0);
  }
  else {
    uVar7 = (undefined4)*(undefined8 *)PTR_DAT_8c012308;
  }
  if (fVar9 == 0.0) {
    in_r0 = 0xc;
    if ((uVar5 & 0xc) != 0) {
      in_r0 = 0xc;
    }
  }
  else if ((uVar5 & 4) == 0) {
    if (iVar4 < 0) {
      if (in_FPSCR_SZ == '\0') {
        in_xd4 = (double)CONCAT44(fVar10,uVar7);
        *(float *)((int)puVar6 + -8) = fVar10;
        fVar8 = fVar10;
      }
      else {
        *(double *)((int)puVar6 + -8) = in_xd4;
      }
      a5_00 = DAT_8c012314 & *(uint *)((int)puVar6 + -8);
      a4 = *(uint *)((int)puVar6 + -8) & DAT_8c012300;
      if ((int)a4 < DAT_8c012318) {
        if (in_FPSCR_PR == '\0') {
          iVar4 = (int)fVar8;
        }
        else {
          iVar4 = (int)in_xd4;
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)puVar6 + -8) = (float)iVar4;
        }
        else {
          *(undefined8 *)((int)puVar6 + -8) = in_xd2;
        }
      }
      *(uint *)((int)puVar6 + -8) = *(uint *)((int)puVar6 + -8) | a5_00;
      if (in_FPSCR_SZ == '\0') {
        fVar9 = *(float *)((int)puVar6 + -8);
      }
      else {
        fVar9 = (float)((ulonglong)*(undefined8 *)((int)puVar6 + -8) >> 0x20);
      }
      if ((fVar10 == fVar9) && ((uVar5 & 2) == 0)) {
        if (in_FPSCR_PR != '\0') {
          fVar10 = SUB84(-dVar11,0);
        }
        (*(code *)PTR_FUN_8c01231c)(a4,a5_00,8,1);
        (*(code *)PTR_FUN_8c012320)(a4,a5_00,a6,a7);
        dVar11 = in_dr0;
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar10);
        }
        in_r0 = (*(code *)PTR_FUN_8c012324)(0xffffffff,a5_00,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          fVar9 = (float)((ulonglong)in_dr0 >> 0x20);
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),fVar9);
          *(float *)((int)puVar6 + -8) = fVar9;
        }
        else {
          fVar9 = SUB84(dVar11,0);
          *(double *)((int)puVar6 + -8) = in_dr0;
        }
        uVar5 = *(uint *)((int)puVar6 + -8);
        if ((int)(uVar5 & uVar3) < DAT_8c012318) {
          if (in_FPSCR_PR == '\0') {
            iVar4 = (int)fVar9;
          }
          else {
            iVar4 = (int)dVar11;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar6 + -8) = (float)iVar4;
          }
          else {
            *(undefined8 *)((int)puVar6 + -8) = in_xd2;
          }
        }
        *(uint *)((int)puVar6 + -8) = *(uint *)((int)puVar6 + -8) | DAT_8c012314 & uVar5;
      }
    }
    else {
      (*(code *)PTR_FUN_8c01231c)(uVar5,4,8,1);
      in_r0 = (*(code *)PTR_FUN_8c012320)(uVar5,a5,a6,a7);
    }
  }
  return in_r0;
}



/* FUN_8c012328 @ 8c012328 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c012404) */
/* WARNING: Removing unreachable block (ram,0x8c012364) */
/* WARNING: Removing unreachable block (ram,0x8c012346) */
/* WARNING: Removing unreachable block (ram,0x8c012368) */
/* WARNING: Removing unreachable block (ram,0x8c01240a) */
/* WARNING: Unknown calling convention */

uint FUN_8c012328(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint *a4;
  undefined4 a5;
  undefined4 uVar2;
  double in_dr0;
  float extraout_fr3;
  float fVar3;
  undefined4 extraout_fr2;
  undefined4 uVar4;
  double in_dr4;
  double in_xd4;
  bool bVar5;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  uint uStack_14;
  undefined8 uStack_10;
  
  a4 = &uStack_14;
  uVar1 = 4;
  uStack_10 = in_dr4;
  if (in_FPSCR_SZ == '\0') {
    uVar2 = (undefined4)((ulonglong)in_dr4 >> 0x20);
    in_dr4 = (double)CONCAT44(uVar2,uVar2);
    uStack_10 = in_xd4;
  }
  uVar2 = 0;
  if (in_FPSCR_SZ == '\0') {
    uStack_10 = (double)CONCAT44(in_PR,SUB84(in_dr4,0));
  }
  a5 = 8;
  bVar5 = false;
  if (SUB84(in_dr4,0) == 0.0) {
    bVar5 = false;
  }
  else if (((uint)uStack_10 & DAT_8c012418) == DAT_8c01241c) {
    uVar1 = 2;
    bVar5 = true;
  }
  if (!bVar5) {
    if ((int)(uint)uStack_10 < 0) {
      if (in_FPSCR_PR == '\0') {
        in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
      }
      else {
        in_dr4 = -in_dr4;
      }
    }
    uVar4 = SUB84(in_dr4,0);
    if (in_FPSCR_SZ == '\0') {
      uVar4 = *(undefined4 *)PTR_DAT_8c012424;
    }
    uVar1 = (*(code *)PTR_FUN_8c012428)(&uStack_14,8,0,ar7);
    fVar3 = extraout_fr3;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uVar4);
      fVar3 = *(float *)PTR_DAT_8c012424;
    }
    if (in_FPSCR_PR == '\0') {
      bVar5 = fVar3 < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar5 = (double)CONCAT44(extraout_fr2,fVar3) < in_dr0;
    }
    if (!bVar5) {
      uVar1 = uStack_14 & 7;
      uStack_14 = uVar1;
      if ((uVar1 == 0) || (uVar1 == 7)) {
        uVar1 = (*(code *)PTR_FUN_8c012434)(a4,a5,uVar2,ar7);
      }
      else if ((uVar1 == 1) || (uVar1 == 2)) {
        uVar1 = (*(code *)PTR_FUN_8c012438)(a4,a5,uVar2,ar7);
      }
      else if ((uVar1 == 3) || (uVar1 == 4)) {
        uVar1 = (*(code *)PTR_FUN_8c012434)(a4,a5,uVar2,ar7);
      }
      else if ((uVar1 == 5) || (uVar1 == 6)) {
        uVar1 = (*(code *)PTR_FUN_8c012438)(a4,a5,uVar2,ar7);
      }
    }
  }
  return uVar1;
}



/* FUN_8c01243c @ 8c01243c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01243c(undefined1 *ar4,undefined1 *ar5,int ar6,undefined1 *ar7)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 *a6;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined *puStack_38;
  int iStack_34;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [4];
  
  puVar2 = PTR_memmove_8c012554;
  iStack_34 = 1;
  a6 = (undefined1 *)0x8;
  puVar5 = ar5 + ar6;
  *puVar5 = 0;
  puVar6 = auStack_28;
  iVar3 = (*(code *)puVar2)(auStack_28,ar4,8,ar7);
  iStack_48 = ar6 + -1;
  puStack_38 = PTR_DAT_8c012558 + iStack_48 * 8;
  do {
    if (iStack_48 < 0) {
      return iVar3;
    }
    iVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c01255c)(puVar6,ar4,a6,ar7);
    iVar1 = (iVar3 + 1) * -2;
    iVar7 = iVar1 + 8;
    puVar6 = (undefined1 *)(8 - iVar7);
    (*(code *)PTR_memmove_8c012554)(auStack_28 + iVar1,puStack_38 + iVar7,puVar6,ar7);
    iVar4 = 8;
    iStack_44 = 0;
    iStack_4c = 0;
    do {
      ar4 = auStack_28 + iVar1;
      a6 = puVar6;
      iVar3 = (*(code *)PTR_FUN_8c012560)(auStack_28 + iVar7,ar4,puVar6,ar7);
      if (-1 < iVar3) {
        ar4 = auStack_28 + iVar7;
        a6 = auStack_28 + iVar1;
        ar7 = puVar6;
        iVar3 = (*(code *)PTR_FUN_8c012564)(0,ar4,a6,puVar6);
        iStack_44 = iStack_44 + iVar4;
        iStack_34 = iVar3;
      }
      iVar4 = iVar4 >> 1;
      if (iVar4 == 0) break;
      a6 = (undefined1 *)0x1;
      ar4 = puVar6;
      iVar3 = (*(code *)PTR_FUN_8c012568)(auStack_28 + iVar1,puVar6,1,ar7);
      iStack_4c = iStack_4c + 1;
    } while (iStack_4c < 4);
    puVar6 = (undefined1 *)(iStack_44 + 0x30);
    if (iStack_34 == 0) {
      puVar5 = puVar5 + -1;
      *puVar5 = (char)puVar6;
      while (puVar5 = puVar5 + -1, ar5 <= puVar5) {
        *puVar5 = 0x30;
      }
      return iVar3;
    }
    puVar5 = puVar5 + -1;
    *puVar5 = (char)puVar6;
    iStack_48 = iStack_48 + -1;
    puStack_38 = puStack_38 + -8;
  } while( true );
}



/* FUN_8c01256c @ 8c01256c callers=0 callees=2 */

/* WARNING: Unknown calling convention */

int FUN_8c01256c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_fr3;
  double dVar3;
  int iVar4;
  byte in_FPSCR_CAUSE;
  byte bVar5;
  byte in_FPSCR_DN;
  byte bVar6;
  byte in_FPSCR_PR;
  byte bVar7;
  byte in_FPSCR_SZ;
  char cVar8;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int aiStack_8 [2];
  
  FUN_8c0125b6(aiStack_8,ar5,ar6,ar7);
  uVar2 = (uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14 | DAT_8c0126a4;
  uVar1 = (uVar2 & 0x80000) >> 0x13;
  if ((char)uVar1 != '\0') {
    in_fr3 = SUB84((double)aiStack_8[0],0);
  }
  uVar1 = (uVar1 << 0x13 | uVar2 & 0x100000) & DAT_8c0126b0;
  bVar5 = 0;
  bVar6 = 0;
  bVar7 = (byte)((uVar1 & 0x80000) >> 0x13);
  cVar8 = (char)(uVar1 >> 0x14);
  FUN_8c012734(&uStack_10,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(uStack_c,in_fr3);
  }
  else {
    dVar3 = (double)CONCAT44(aiStack_8[0],uStack_c);
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),uStack_10);
  }
  if ((char)((((uint)bVar5 << 0xc | (uint)bVar6 << 0x12 | (uint)bVar7 << 0x13 | DAT_8c0126a4) &
             0x80000) >> 0x13) == '\0') {
    iVar4 = (int)(float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    iVar4 = (int)dVar3;
  }
  return iVar4;
}



/* FUN_8c0125b6 @ 8c0125b6 callers=1 callees=0 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0125b6(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 in_fr1;
  double dVar5;
  undefined4 in_fr3;
  double dVar6;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_xf4;
  bool bVar8;
  undefined4 in_PR;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 uStack_30;
  byte abStack_2f [3];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined2 uStack_24;
  ushort uStack_22;
  undefined4 uStack_20;
  undefined4 uVar7;
  
  uVar1 = DAT_8c0126b4;
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = (undefined2)in_fr4;
    uStack_22 = (ushort)((uint)in_fr4 >> 0x10);
    uStack_28 = in_fr5;
    uStack_20 = in_PR;
  }
  else {
    uStack_24 = (undefined2)in_fr5;
    uStack_22 = (ushort)((uint)in_fr5 >> 0x10);
    uStack_28 = in_xf4;
    uStack_20 = in_fr4;
  }
  iVar3 = (*(code *)PTR_FUN_8c0126b8)(ar4,ar5,ar6,ar7);
  if (iVar3 == 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0126c0,in_fr3);
    }
    else {
      dVar6 = (double)CONCAT44(PTR_FUN_8c0126c4,DAT_8c0126c0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
      dVar6 = (double)CONCAT44(uVar7,uVar7);
      in_fr1 = uStack_28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(CONCAT22(uStack_22,uStack_24),in_fr1);
    }
    else {
      dVar5 = (double)CONCAT44(uStack_20,CONCAT22(uStack_22,uStack_24));
    }
    if ((char)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13
                | DAT_8c0126a4) & 0x80000) >> 0x13) == '\0') {
      bVar8 = (float)((ulonglong)dVar5 >> 0x20) == (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar8 = dVar5 == dVar6;
    }
    if (bVar8) {
      *ar4 = 0;
      return &DAT_8c0126c0;
    }
    iVar3 = (int)DAT_8c0126a0;
    iVar4 = ((uint)(uStack_22 >> 4) & (int)DAT_8c01269c) + (int)DAT_8c01269e;
    *ar4 = iVar4;
    puVar2 = PTR_FUN_8c0126c4;
    if (iVar4 + iVar3 == 0) {
      *ar4 = *ar4 + 1;
      uStack_22 = uStack_22 & (ushort)uVar1;
      (*(code *)puVar2)(&uStack_30,&uStack_24,ar6,ar7);
      (*(code *)puVar2)(auStack_2c,&uStack_28,ar6,ar7);
      while ((abStack_2f[0] & 0x10) == 0) {
        (*(code *)PTR_FUN_8c0127e4)(abStack_2f,7,ar6,ar7);
        *ar4 = *ar4 + -1;
      }
      (*(code *)puVar2)(&uStack_24,&uStack_30,ar6,ar7);
      (*(code *)puVar2)(&uStack_28,auStack_2c,ar6,ar7);
    }
  }
  else {
    if (iVar3 == 1) {
      *DAT_8c0126bc = (int)DAT_8c012698;
    }
    if (iVar3 == 2) {
      *DAT_8c0126bc = (int)DAT_8c01269a;
    }
  }
  return 0x18;
}



/* FUN_8c012734 @ 8c012734 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0127be) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c012734(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined8 in_xd2;
  undefined4 in_xf4;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined4 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_10 = (undefined2)in_fr4;
    uStack_e = (undefined1)((uint)in_fr4 >> 0x10);
    uStack_d = (undefined1)((uint)in_fr4 >> 0x18);
    uStack_14 = in_fr5;
    uStack_c = in_PR;
  }
  else {
    uStack_10 = (undefined2)in_fr5;
    uStack_e = (undefined1)((uint)in_fr5 >> 0x10);
    uStack_d = (undefined1)((uint)in_fr5 >> 0x18);
    uStack_14 = in_xf4;
    uStack_c = in_fr4;
  }
  iVar2 = (*(code *)PTR_FUN_8c0127e8)(ar4,ar5,ar6,ar7);
  uVar1 = DAT_8c0127f0;
  if (iVar2 == 0) {
    if ((int)(((uint)(ushort)(CONCAT11(uStack_d,uStack_e) >> 4) & (int)DAT_8c0127dc) +
             (int)DAT_8c0127de) < 0) {
      if (in_FPSCR_SZ == '\0') {
        ar4[1] = DAT_8c0127f0;
        *ar4 = uVar1;
      }
      else {
        uVar3 = CONCAT44(uRam8c0127f4,DAT_8c0127f0);
        *(undefined8 *)(ar4 + 1) = uVar3;
        *(undefined8 *)(ar4 + -1) = uVar3;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        uVar3 = CONCAT44(CONCAT13(uStack_d,CONCAT12(uStack_e,uStack_10)),uStack_14);
      }
      else {
        in_xd2 = CONCAT17(uStack_d,CONCAT16(uStack_e,CONCAT24(uStack_10,uStack_14)));
        uVar3 = CONCAT44(uStack_c,CONCAT13(uStack_d,CONCAT12(uStack_e,uStack_10)));
      }
      if (in_FPSCR_SZ == '\0') {
        ar4[1] = (int)((ulonglong)uVar3 >> 0x20);
        *ar4 = (int)uVar3;
      }
      else {
        *(undefined8 *)(ar4 + 1) = uVar3;
        *(undefined8 *)(ar4 + -1) = in_xd2;
      }
    }
  }
  else {
    if (iVar2 == 1) {
      *DAT_8c0127ec = (int)DAT_8c0127d8;
    }
    if (iVar2 == 2) {
      *DAT_8c0127ec = (int)DAT_8c0127da;
    }
  }
  return 4;
}



/* FUN_8c012854 @ 8c012854 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c012854(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  ushort uVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  
  uVar1 = DAT_8c012898;
  uVar2 = 0;
  pbVar3 = ar4 + ar5 + -1;
  pbVar4 = pbVar3;
  for (; ar4 <= pbVar3; pbVar3 = pbVar3 + -1) {
    bVar5 = uVar2 != 0;
    uVar2 = *pbVar3 & uVar1;
    *pbVar3 = *pbVar3 << 1;
    if (bVar5) {
      *pbVar4 = *pbVar4 | 1;
    }
    pbVar4 = pbVar4 + -1;
  }
  if (uVar2 == 0) {
    return 0;
  }
  return 1;
}



/* FUN_8c01289c @ 8c01289c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01289c(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 in_r0;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = (uint)(short)(8 - (short)ar6);
  if (uVar7 != 0) {
    pbVar5 = ar4 + ar5 + -1;
    if ((int)uVar7 < 0) {
      uVar2 = (int)DAT_8c0128e6 >> (~uVar7 & 0x1f) + 1;
    }
    else {
      uVar2 = (int)DAT_8c0128e6 << (uVar7 & 0x1f);
    }
    uVar6 = 0;
    while (ar4 <= pbVar5) {
      uVar4 = (uint)(short)ar6;
      bVar1 = *pbVar5;
      if ((int)uVar4 < 0) {
        bVar3 = (byte)((uint)(int)(char)*pbVar5 >> (~uVar4 & 0x1f) + 1);
      }
      else {
        bVar3 = (byte)((int)(char)*pbVar5 << (uVar4 & 0x1f));
      }
      *pbVar5 = bVar3;
      *pbVar5 = *pbVar5 | (byte)uVar6;
      pbVar5 = pbVar5 + -1;
      uVar6 = (int)(char)bVar1 & uVar2 & 0xff;
      uVar4 = -uVar7;
      if ((int)uVar4 < 0) {
        uVar6 = uVar6 >> (~uVar4 & 0x1f) + 1;
      }
      else {
        uVar6 = uVar6 << (uVar4 & 0x1f);
      }
    }
    if ((uVar6 & 0xff) != 0) {
      return 1;
    }
    in_r0 = 0;
  }
  return in_r0;
}



/* FUN_8c0128e8 @ 8c0128e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0128e8(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int a6;
  short asStack_3c [2];
  int iStack_38;
  byte abStack_34 [24];
  
  iStack_38 = ar4;
  (*(code *)PTR_memset_8c0129a4)(ar6,0,0x10,ar7);
  sVar2 = 7;
  do {
    iVar4 = (int)sVar2;
    if (*(char *)(iVar4 + ar5) != '\0') {
      (*(code *)PTR_memset_8c0129a4)(abStack_34,0,0x10,ar7);
      sVar3 = 7;
      do {
        iVar1 = iVar4 + sVar3;
        a6 = (uint)*(byte *)(iStack_38 + sVar3) * (uint)*(byte *)(ar5 + iVar4);
        asStack_3c[0] = (ushort)abStack_34[iVar1 + 1] + (short)a6;
        (*(code *)PTR_FUN_8c0129a8)(abStack_34 + iVar1,asStack_3c,a6,ar7);
        sVar3 = sVar3 + -1;
      } while (-1 < sVar3);
      if (sVar2 == 7) {
        iVar4 = (*(code *)PTR_memmove_8c0129ac)(ar6 + 7,abStack_34 + 7,9,ar7);
      }
      else {
        iVar4 = (*(code *)PTR_FUN_8c0129b0)(iVar4 + ar6,abStack_34 + iVar4,9,ar7);
      }
    }
    sVar2 = sVar2 + -1;
  } while (-1 < sVar2);
  return iVar4;
}



/* FUN_8c0129b4 @ 8c0129b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0129b4(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte *a6;
  byte abStack_1c [8];
  byte bStack_14;
  
  puVar1 = PTR_FUN_8c012a14;
  *ar4 = (short)ar6 + *ar4;
  a6 = abStack_1c;
  (*(code *)puVar1)(ar5,ar7,abStack_1c,ar7);
  if ((abStack_1c[0] & 0x80) == 0) {
    (*(code *)PTR_FUN_8c012a18)(abStack_1c,0x10,a6,ar7);
  }
  else {
    *ar4 = *ar4 + 1;
  }
  (*(code *)PTR_FUN_8c012a1c)(abStack_1c,0x10,0x42,ar7);
  bStack_14 = bStack_14 & 0xe0;
  uVar2 = (*(code *)PTR_memmove_8c012a20)(ar5,abStack_1c,9,ar7);
  return uVar2;
}



/* FUN_8c012a24 @ 8c012a24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c012a24(undefined1 *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = ar4 + 4;
  iVar4 = 0x18;
  do {
    uVar3 = -iVar4;
    if ((int)uVar3 < 0) {
      uVar2 = (undefined1)(*ar5 >> (~uVar3 & 0x1f) + 1);
    }
    else {
      uVar2 = (undefined1)(*ar5 << (uVar3 & 0x1f));
    }
    *ar4 = uVar2;
    ar4 = ar4 + 1;
    iVar4 = iVar4 + -8;
  } while (ar4 < puVar1);
  return puVar1;
}



/* FUN_8c012a40 @ 8c012a40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

char * FUN_8c012a40(char *ar4,ushort *ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  pcVar1 = ar4 + 2;
  iVar4 = 8;
  do {
    uVar2 = -iVar4;
    if ((int)uVar2 < 0) {
      cVar3 = (char)(*ar5 >> (~uVar2 & 0x1f) + 1);
    }
    else {
      cVar3 = (char)*ar5 << (uVar2 & 0x1f);
    }
    *ar4 = cVar3;
    ar4 = ar4 + 1;
    iVar4 = iVar4 + -8;
  } while (ar4 < pcVar1);
  return pcVar1;
}



/* FUN_8c012a60 @ 8c012a60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c012a60(undefined4 ar4,short *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int a6;
  byte *a4;
  byte abStack_1c [12];
  
  puVar1 = PTR_FUN_8c012ae8;
  *ar5 = (short)ar4 + 0x3f;
  (*(code *)puVar1)(ar4,abStack_1c,ar6,ar7);
  (*(code *)PTR_memset_8c012aec)(ar6,0,8,ar7);
  iVar4 = 0;
  a6 = 0;
  for (a4 = abStack_1c; *a4 == 0; a4 = a4 + 1) {
    iVar4 = iVar4 + 1;
    *ar5 = *ar5 + -8;
  }
  for (uVar3 = (uint)DAT_8c012ae4; ((uint)*a4 & uVar3 & 0xff) == 0; uVar3 = (uVar3 & 0xff) >> 1) {
    a6 = a6 + 1;
  }
  (*(code *)PTR_FUN_8c012af0)(a4,8 - iVar4,a6,ar7);
  puVar1 = PTR_memmove_8c012af4;
  *ar5 = *ar5 - (short)a6;
  uVar2 = (*(code *)puVar1)(ar6,a4,8 - iVar4,ar7);
  return uVar2;
}



/* FUN_8c012af8 @ 8c012af8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c012af8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_memmove_8c012b18)(ar5,PTR_DAT_8c012b14 + ar4 * 8,8);
  return uVar1;
}



/* FUN_8c012b1c @ 8c012b1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c012b1c(int ar4,short *ar5,undefined *ar6,undefined *ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *a7;
  short *psVar7;
  bool bVar8;
  short asStack_48 [2];
  byte *pbStack_44;
  short *psStack_40;
  undefined *puStack_3c;
  byte abStack_2c [8];
  undefined1 uStack_24;
  
  bVar8 = ar4 < 0;
  if (bVar8) {
    ar4 = -ar4;
  }
  uVar6 = (uint)bVar8;
  iVar4 = 0x1b;
  psStack_40 = ar5;
  puStack_3c = ar6;
  uVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c012c44)(ar4,0x1b,ar6,ar7);
  iVar2 = (*(code *)PTR_libgcc_divide_helper_010614_8c012c48)(ar4,iVar4,ar6,ar7);
  if ((uVar6 == 1) && (iVar2 != 0)) {
    iVar2 = iVar4 - iVar2;
    asStack_48[0] = *(short *)PTR_DAT_8c012c4c;
    (*(code *)PTR_memmove_8c012c54)(abStack_2c,PTR_DAT_8c012c50,8,ar7);
    uStack_24 = 0;
  }
  else {
    (*(code *)PTR_memset_8c012c58)(abStack_2c,0,9,ar7);
    abStack_2c[0] = abStack_2c[0] | 0x80;
    asStack_48[0] = 0;
  }
  iVar4 = 0;
  psVar7 = (short *)(PTR_DAT_8c012c5c + uVar6 * 0x10);
  a7 = PTR_DAT_8c012c60 + uVar6 * 0x40;
  pbStack_44 = abStack_2c;
  do {
    if ((uVar1 & 1) != 0) {
      iVar5 = (int)*psVar7;
      ar7 = a7;
      (*(code *)PTR_FUN_8c012c64)(asStack_48,abStack_2c,iVar5,a7);
      iVar5 = (*(code *)PTR_FUN_8c012c68)(abStack_2c,0x40,iVar5,ar7);
      if (iVar5 != 0) {
        asStack_48[0] = asStack_48[0] + 1;
        *pbStack_44 = *pbStack_44 | 0x80;
      }
    }
    iVar4 = iVar4 + 1;
    uVar1 = (int)uVar1 >> 1;
    psVar7 = psVar7 + 1;
    a7 = a7 + 8;
  } while (iVar4 < 8);
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_8c012c6c)(iVar2,psStack_40,puStack_3c,ar7);
    iVar2 = (int)*psStack_40;
    ar7 = puStack_3c;
    (*(code *)PTR_FUN_8c012c64)(asStack_48,abStack_2c,iVar2,puStack_3c);
    iVar2 = (*(code *)PTR_FUN_8c012c68)(abStack_2c,0x40,iVar2,ar7);
    if (iVar2 == 1) {
      asStack_48[0] = asStack_48[0] + 1;
      *pbStack_44 = *pbStack_44 | 0x80;
    }
  }
  *psStack_40 = asStack_48[0];
  uVar3 = (*(code *)PTR_memmove_8c012c54)(puStack_3c,abStack_2c,8,ar7);
  return uVar3;
}



/* FUN_8c012c70 @ 8c012c70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c012c70(byte *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 a6;
  uint uVar7;
  byte *pbVar8;
  
  a6 = 8;
  bVar2 = false;
  iVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c012d58)(ar4,ar5,8,ar7);
  pbVar8 = ar4 + iVar3;
  if ((int)ar5 < 0) {
    uVar4 = ~(~ar5 + 1 & 7) + 1;
  }
  else {
    uVar4 = ar5 & 7;
  }
  uVar4 = -uVar4;
  if ((int)uVar4 < 0) {
    uVar4 = (int)DAT_8c012d54 >> (~uVar4 & 0x1f) + 1;
  }
  else {
    uVar4 = (int)DAT_8c012d54 << (uVar4 & 0x1f);
  }
  uVar4 = uVar4 & 0xff;
  uVar7 = ar5 - 1;
  iVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c012d58)(ar4,ar5,a6,uVar7);
  pbVar6 = ar4 + iVar3;
  if ((int)uVar7 < 0) {
    uVar7 = ~(~uVar7 + 1 & 7) + 1;
  }
  else {
    uVar7 = uVar7 & 7;
  }
  uVar7 = -uVar7;
  if ((int)uVar7 < 0) {
    uVar7 = (int)DAT_8c012d54 >> (~uVar7 & 0x1f) + 1;
  }
  else {
    uVar7 = (int)DAT_8c012d54 << (uVar7 & 0x1f);
  }
  if ((*pbVar8 & uVar4) != 0) {
    uVar5 = (uint)*pbVar8;
    if (((uVar5 & (int)uVar4 >> 1) == 0) && (((int)uVar4 >> 2 & uVar5) == 0)) {
      if (((uint)*pbVar6 & uVar7 & 0xff) != 0) {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
  }
  if (bVar2) {
    while ((bVar1 = (byte)uVar7, ((uint)*pbVar6 & uVar7 & 0xff) != 0 && (ar4 <= pbVar6))) {
      uVar7 = uVar7 << 1;
      *pbVar6 = *pbVar6 & ~bVar1;
      if ((uVar7 & 0xff) == 0) {
        uVar7 = 1;
        pbVar6 = pbVar6 + -1;
      }
    }
    if (pbVar6 < ar4) {
      return 1;
    }
    *pbVar6 = *pbVar6 | bVar1;
  }
  return 0;
}



/* FUN_8c012d5c @ 8c012d5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c012d5c(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = 0;
  iVar3 = 0;
  pbVar1 = ar4;
  if (0 < ar5) {
    do {
      bVar4 = uVar2 != 0;
      uVar2 = *ar4 & 1;
      *ar4 = *ar4 >> 1;
      if (bVar4) {
        *pbVar1 = *pbVar1 | 0x80;
      }
      iVar3 = iVar3 + 1;
      pbVar1 = pbVar1 + 1;
      ar4 = ar4 + 1;
    } while (iVar3 < ar5);
  }
  return uVar2;
}



/* FUN_8c012da8 @ 8c012da8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c012da8(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 in_r0;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = (uint)(short)(8 - (short)ar6);
  if (uVar6 != 0) {
    uVar3 = -uVar6;
    uVar5 = 0;
    if ((int)uVar3 < 0) {
      uVar3 = (int)DAT_8c012dfc >> (~uVar3 & 0x1f) + 1;
    }
    else {
      uVar3 = (int)DAT_8c012dfc << (uVar3 & 0x1f);
    }
    iVar7 = 0;
    if (0 < ar5) {
      do {
        bVar1 = *ar4;
        uVar4 = -(int)(short)ar6;
        iVar7 = iVar7 + 1;
        if ((int)uVar4 < 0) {
          bVar2 = *ar4 >> (~uVar4 & 0x1f) + 1;
        }
        else {
          bVar2 = *ar4 << (uVar4 & 0x1f);
        }
        *ar4 = bVar2;
        uVar4 = (int)(char)bVar1 & uVar3 & 0xff;
        *ar4 = *ar4 | (byte)uVar5;
        if ((int)uVar6 < 0) {
          uVar5 = uVar4 >> (~uVar6 & 0x1f) + 1;
        }
        else {
          uVar5 = uVar4 << (uVar6 & 0x1f);
        }
        ar4 = ar4 + 1;
      } while (iVar7 < ar5);
    }
    if ((uVar5 & 0xff) == 0) {
      in_r0 = 0;
    }
    else {
      in_r0 = 1;
    }
  }
  return in_r0;
}



/* FUN_8c012e00 @ 8c012e00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c012e00(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c012e80)();
  pbVar6 = (byte *)(iVar1 + ar4);
  if ((int)ar6 < 0) {
    uVar2 = ~(~ar6 + 1 & 7) + 1;
  }
  else {
    uVar2 = ar6 & 7;
  }
  uVar2 = -uVar2;
  if ((int)uVar2 < 0) {
    uVar5 = (int)DAT_8c012e7c >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar5 = (int)DAT_8c012e7c << (uVar2 & 0x1f);
  }
  if (((uint)*pbVar6 & uVar5 & 0xff) == 0) {
    uVar2 = 0;
    for (uVar3 = uVar5; (uVar3 & 0xff) != 0; uVar3 = (uVar3 & 0xff) >> 1) {
      uVar2 = uVar2 | uVar3;
    }
    uVar2 = uVar2 & 0xff;
    if ((*pbVar6 & uVar2) == 0) {
      pbVar4 = pbVar6;
      do {
        pbVar4 = pbVar4 + 1;
        if ((byte *)(ar4 + ar5) <= pbVar4) {
          return uVar2;
        }
      } while (*pbVar4 == 0);
      *pbVar6 = *pbVar6 | (byte)uVar5;
    }
    else {
      *pbVar6 = *pbVar6 | (byte)uVar5;
    }
  }
  return uVar2;
}



/* FUN_8c012e04 @ 8c012e04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c012e04(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c012e80)(ar4,ar5,ar6,ar7);
  pbVar6 = (byte *)(iVar1 + ar4);
  if ((int)ar6 < 0) {
    uVar2 = ~(~ar6 + 1 & 7) + 1;
  }
  else {
    uVar2 = ar6 & 7;
  }
  uVar2 = -uVar2;
  if ((int)uVar2 < 0) {
    uVar5 = (int)DAT_8c012e7c >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar5 = (int)DAT_8c012e7c << (uVar2 & 0x1f);
  }
  if (((uint)*pbVar6 & uVar5 & 0xff) == 0) {
    uVar2 = 0;
    for (uVar3 = uVar5; (uVar3 & 0xff) != 0; uVar3 = (uVar3 & 0xff) >> 1) {
      uVar2 = uVar2 | uVar3;
    }
    uVar2 = uVar2 & 0xff;
    if ((*pbVar6 & uVar2) == 0) {
      pbVar4 = pbVar6;
      do {
        pbVar4 = pbVar4 + 1;
        if ((byte *)(ar4 + ar5) <= pbVar4) {
          return uVar2;
        }
      } while (*pbVar4 == 0);
      *pbVar6 = *pbVar6 | (byte)uVar5;
    }
    else {
      *pbVar6 = *pbVar6 | (byte)uVar5;
    }
  }
  return uVar2;
}



/* FUN_8c012e84 @ 8c012e84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c012e84(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*ar4 != '\0') && ((int)DAT_8c012ea2 <= (int)ar4 - ar5)) {
    *DAT_8c012ea8 = (int)DAT_8c012ea4;
    return 1;
  }
  return 0;
}



/* FUN_8c012eac @ 8c012eac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c012eac(int ar4,byte *ar5,int ar6,int ar7)

{
  bool bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  int iStack_14;
  
  pbVar5 = (byte *)(ar7 + -1 + ar6);
  pbVar3 = ar5 + ar7 + -1;
  uVar6 = 0;
  bVar1 = true;
  pbVar4 = pbVar3 + 1;
  for (; ar5 <= pbVar3; pbVar3 = pbVar3 + -1) {
    iStack_14 = ((uint)*pbVar3 - (uint)*pbVar5) - uVar6;
    bVar7 = iStack_14 < 0;
    if (bVar7) {
      iStack_14 = DAT_8c012f22 + iStack_14;
    }
    uVar6 = (uint)bVar7;
    if (iStack_14 != 0) {
      bVar1 = false;
    }
    pbVar4 = pbVar4 + -1;
    *pbVar4 = (byte)iStack_14;
    pbVar5 = pbVar5 + -1;
  }
  if ((uVar6 == 1) && (ar4 == 0)) {
    uVar2 = 0xffffffff;
  }
  else if (bVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c012f24 @ 8c012f24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c012f24(char *ar4,char *ar5,uint ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  if (ar6 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (ar6 != 0) {
    do {
      cVar1 = *ar5;
      ar5 = ar5 + 1;
      cVar2 = *ar4;
      ar4 = ar4 + 1;
      if (cVar2 != cVar1) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < ar6);
  }
  return (uint)(byte)ar4[-1] - (uint)(byte)ar5[-1];
}



/* FUN_8c012f58 @ 8c012f58 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c012fa0) */
/* WARNING: Unknown calling convention */

uint FUN_8c012f58(undefined1 *ar4,ushort *ar5,byte *ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 a6;
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_SZ;
  undefined1 uStack_20;
  undefined1 auStack_1f [3];
  undefined1 auStack_1c [4];
  undefined2 uStack_18;
  ushort uStack_16;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_18 = (undefined2)in_fr4;
    uStack_16 = (ushort)((uint)in_fr4 >> 0x10);
  }
  else {
    uStack_18 = (undefined2)in_fr5;
    uStack_16 = (ushort)((uint)in_fr5 >> 0x10);
  }
  if ((uStack_16 & DAT_8c01304c) == DAT_8c01304c) {
    uVar4 = 0xff;
  }
  else {
    uVar4 = 1;
  }
  *ar4 = uVar4;
  uVar1 = DAT_8c013048;
  *ar5 = uStack_16;
  *ar5 = (short)(*ar5 & uVar1) >> 4;
  (*(code *)PTR_FUN_8c013054)(&uStack_20,&uStack_18,ar6,ar7);
  a6 = 3;
  (*(code *)PTR_memmove_8c013058)(ar6,auStack_1f,3,ar7);
  (*(code *)PTR_FUN_8c013054)(&uStack_20,auStack_1c,a6,ar7);
  (*(code *)PTR_memmove_8c013058)(ar6 + 3,&uStack_20,4,ar7);
  puVar2 = PTR_FUN_8c01305c;
  (*(code *)PTR_FUN_8c01305c)(ar6,7,3,ar7);
  uVar1 = DAT_8c01304a;
  if ((short)*ar5 < 1) {
    *ar5 = *ar5 + 1;
    uVar3 = (int)(char)*ar6 & 0x7f;
    *ar6 = (byte)uVar3;
    while ((*ar6 & uVar1) == 0) {
      uVar3 = (*(code *)puVar2)(ar6,7,1,ar7);
      *ar5 = *ar5 - 1;
    }
  }
  else {
    uVar3 = (int)(char)*ar6 | 0x80;
    *ar6 = (byte)uVar3;
  }
  return uVar3;
}



/* FUN_8c013060 @ 8c013060 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c013060(int ar4,undefined1 *ar5,int *ar6,char *ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  char *a4;
  char *a4_00;
  int iVar4;
  undefined1 *puVar5;
  short *a5;
  undefined1 *a5_00;
  char *a7;
  undefined8 in_dr4;
  undefined4 in_xf4;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  short asStack_5c [2];
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  short sStack_4c;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [7];
  undefined1 uStack_29;
  undefined4 uStack_28;
  undefined2 uStack_24;
  byte bStack_22;
  byte bStack_21;
  undefined4 uStack_20;
  
  a5 = asStack_5c;
  a4_00 = (char *)&uStack_28;
  uStack_20 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_28 = (undefined4)in_dr4;
    uStack_24 = (undefined2)((ulonglong)in_dr4 >> 0x20);
    bStack_22 = (byte)((ulonglong)in_dr4 >> 0x30);
    bStack_21 = (byte)((ulonglong)in_dr4 >> 0x38);
    uStack_20 = in_PR;
  }
  else {
    uStack_24 = (undefined2)in_dr4;
    bStack_22 = (byte)((ulonglong)in_dr4 >> 0x10);
    bStack_21 = (byte)((ulonglong)in_dr4 >> 0x18);
    uStack_28 = in_xf4;
  }
  uStack_54 = 8;
  sStack_4c = 0;
  a7 = ar7;
  if (((bStack_21 & 0x7f) == 0) &&
     (iVar2 = (*(code *)PTR_FUN_8c013144)(a4_00,7,ar6,ar7), iVar2 != 0)) {
    puVar5 = ar5 + 8;
    for (; ar5 < puVar5; ar5 = ar5 + 1) {
      *ar5 = 0;
    }
    *ar6 = 0;
    if ((bStack_21 & 0x80) == 0) {
      *ar7 = '\x01';
    }
    else {
      *ar7 = -1;
    }
  }
  else {
    a4 = ar7;
    puVar5 = auStack_30;
    (*(code *)PTR_FUN_8c01314c)(ar7,asStack_5c,auStack_30,a7);
    if (*ar7 == -1) {
      bStack_21 = bStack_21 & 0x7f;
    }
    if (asStack_5c[0] == DAT_8c01313e) {
      if (bStack_22 != DAT_8c013140) {
        return 2;
      }
      a5 = (short *)0x6;
      iVar2 = (*(code *)PTR_FUN_8c013144)(a4_00,6,puVar5,a7);
      if (iVar2 == 0) {
        return 2;
      }
      if (*ar7 == '\x01') {
        return 1;
      }
      a4 = a4_00;
      if (*ar7 == -1) {
        return 0xffffffff;
      }
    }
    asStack_5c[0] = asStack_5c[0] - DAT_8c013178;
    if (asStack_5c[0] < 0) {
      iVar2 = (*(code *)PTR_FUN_8c013358)(a4,a5,puVar5,a7);
      iVar2 = iVar2 + -1;
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c013180)(a4,a5,puVar5,a7);
    }
    puVar1 = PTR_FUN_8c01335c;
    uStack_29 = 0;
    *ar6 = (iVar2 - ar4) + 1;
    iVar2 = ar4;
    a5_00 = auStack_38;
    (*(code *)puVar1)(ar4,auStack_38,puVar5,a7);
    iVar3 = (*(code *)PTR_libgcc_divide_helper_010468_8c013360)(iVar2,a5_00,puVar5,a7);
    iVar4 = 0;
    iVar2 = iVar4;
    if (0 < 8 - iVar3) {
      do {
        iVar4 = iVar2 + 1;
        auStack_38[iVar2] = auStack_38[iVar2 + iVar3];
        iVar2 = iVar4;
      } while (iVar4 < 8 - iVar3);
    }
    for (puVar5 = auStack_38 + iVar4; puVar5 < auStack_30; puVar5 = puVar5 + 1) {
      *puVar5 = 0;
    }
    iVar3 = ar4 + iVar3 * -8;
    (*(code *)PTR_FUN_8c013364)(auStack_38,8,iVar3,a7);
    iVar2 = ar4 + -1;
    puVar5 = auStack_40;
    iStack_50 = iVar2;
    (*(code *)PTR_FUN_8c01335c)(iVar2,auStack_40,iVar3,a7);
    iStack_58 = (*(code *)PTR_libgcc_divide_helper_010468_8c013360)(iVar2,puVar5,iVar3,a7);
    iVar3 = 0;
    iVar2 = iVar3;
    if (0 < 8 - iStack_58) {
      do {
        iVar3 = iVar2 + 1;
        auStack_40[iVar2] = auStack_40[iStack_58 + iVar2];
        iVar2 = iVar3;
      } while (iVar3 < 8 - iStack_58);
    }
    for (puVar5 = auStack_40 + iVar3; puVar5 < auStack_38; puVar5 = puVar5 + 1) {
      *puVar5 = 0;
    }
    (*(code *)PTR_FUN_8c013364)(auStack_40,8,ar4 + iStack_58 * -8 + -1,a7);
    while( true ) {
      while( true ) {
        puVar5 = ar5;
        (*(code *)PTR_FUN_8c013368)((int)asStack_5c[0],auStack_30,*ar6,ar5);
        (*(code *)PTR_memmove_8c01336c)(auStack_48,ar5,8,puVar5);
        puVar1 = PTR_FUN_8c013370;
        iVar2 = (*(code *)PTR_FUN_8c013370)(auStack_48,auStack_38,8,puVar5);
        if (iVar2 < 1) break;
        sStack_4c = 1;
        *ar6 = *ar6 + 1;
      }
      (*(code *)PTR_memmove_8c01336c)(auStack_48,ar5,8,puVar5);
      iVar2 = (*(code *)puVar1)(auStack_48,auStack_38,8,puVar5);
      if (iVar2 == 0) break;
      (*(code *)PTR_memmove_8c01336c)(auStack_48,ar5,8,puVar5);
      iVar2 = (*(code *)puVar1)(auStack_48,auStack_40,8,puVar5);
      if (-1 < iVar2) {
        return 0;
      }
      if (sStack_4c != 0) {
        return 0;
      }
      *ar6 = *ar6 + -1;
    }
    iVar2 = *ar6;
    *ar6 = iVar2 + 1;
    (*(code *)PTR_FUN_8c013368)((int)asStack_5c[0],auStack_30,iVar2 + 1,ar5);
  }
  return 0;
}



/* FUN_8c013374 @ 8c013374 callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c013374(uint *ar4,char *ar5,int ar6,byte *ar7)

{
  byte bVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  char *pcVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  int iVar13;
  char *pcVar14;
  float in_fr3;
  bool bVar15;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  int iStack_60;
  float *pfStack_5c;
  int iStack_58;
  char *pcStack_54;
  char *pcStack_50;
  char acStack_4c [4];
  char acStack_48 [32];
  undefined1 auStack_28 [12];
  
  pcVar14 = (char *)*ar4;
  uVar12 = 3;
  pcVar7 = pcVar14 + 4;
  if (((uint)pcVar7 & 3) != 0) {
    pcVar7 = pcVar14 + 8;
  }
  *ar4 = (uint)pcVar7;
  pfStack_5c = (float *)(pcVar7 + -4);
  pfVar6 = pfStack_5c;
  if (((uint)pfStack_5c & 3) != 0) {
    pfVar6 = (float *)(pcVar7 + -8);
  }
  if (in_FPSCR_SZ == 0) {
    in_fr3 = *pfVar6;
  }
  uVar9 = (uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14 | DAT_8c013554;
  if (*(int *)(ar7 + 8) == -1) {
    ar7[8] = 6;
    ar7[9] = 0;
    ar7[10] = 0;
    ar7[0xb] = 0;
  }
  acStack_48[0] = '0';
  fVar2 = _DAT_8c01355c;
  if ((char)((uVar9 & 0x100000) >> 0x14) == '\0') {
    fVar2 = DAT_8c013558;
  }
  if ((char)((uVar9 & 0x80000 | DAT_8c013554 & 0x80000) >> 0x13) == '\0') {
    bVar15 = (float)((ulonglong)(double)in_fr3 >> 0x20) == fVar2;
  }
  else {
    bVar15 = (double)in_fr3 == (double)CONCAT44(fVar2,DAT_8c013558);
  }
  iStack_58 = ar6;
  pcStack_54 = acStack_48;
  if (bVar15) {
    acStack_4c[0] = '\x01';
    acStack_48[1] = 0;
  }
  else {
    pcVar14 = acStack_4c;
    iVar4 = (*(code *)PTR_FUN_8c013560)(0x11,auStack_28,&iStack_60,pcVar14);
    if (iVar4 != 0) {
      *ar5 = '\0';
      if (*(int *)(ar7 + 4) < *(int *)(ar7 + 8)) {
        *(undefined4 *)(ar7 + 0x28) = *(undefined4 *)(ar7 + 8);
      }
      else {
        *(undefined4 *)(ar7 + 0x28) = *(undefined4 *)(ar7 + 4);
      }
      if (iVar4 == 1) {
        uVar12 = 0x2b;
      }
      else if (iVar4 == -1) {
        uVar12 = 0x2d;
      }
      else {
        uVar12 = 0x2a;
      }
      ar7[1] = (byte)uVar12;
      return uVar12;
    }
    pcVar7 = acStack_48 + 1;
    uVar12 = 0x11;
    (*(code *)PTR_FUN_8c013564)(auStack_28,pcVar7,0x11,pcVar14);
  }
  for (iVar4 = 1; acStack_48[iVar4] == '0'; iVar4 = iVar4 + 1) {
  }
  if (1 < iVar4) {
    pcVar7 = (char *)(*(code *)PTR_log_message_8c013568)(acStack_48 + iVar4,pcVar7,uVar12,pcVar14);
    iVar10 = 1;
    iStack_60 = iStack_60 + iVar4 + -1;
    if (0 < (int)pcVar7) {
      do {
        acStack_48[iVar10] = acStack_48[iVar4];
        iVar10 = iVar10 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar10 <= (int)pcVar7);
    }
    acStack_48[iVar10] = '\0';
  }
  pcStack_50 = acStack_48 + 1;
  iVar4 = (*(code *)PTR_log_message_8c013568)(pcStack_50,pcVar7,uVar12,pcVar14);
  iVar10 = (int)(iVar4 + (uint)(iVar4 < 0)) >> 1;
  pcVar11 = pcStack_50 + iVar4;
  iVar13 = 0;
  pcVar7 = pcStack_50;
  if (0 < iVar10) {
    do {
      pcVar11 = pcVar11 + -1;
      cVar8 = *pcVar7;
      pcVar14 = (char *)(int)cVar8;
      iVar13 = iVar13 + 1;
      *pcVar7 = *pcVar11;
      *pcVar11 = cVar8;
      pcVar7 = pcVar7 + 1;
    } while (iVar13 < iVar10);
  }
  if (iVar4 == 0) {
    iVar4 = 1;
    *pcStack_50 = '0';
    iStack_60 = 0;
  }
  if ((iStack_58 == 0x67) || (iStack_58 == 0x47)) {
    *ar7 = *ar7 | 0x20;
    iVar10 = iStack_60 + iVar4 + -1;
    if ((iVar10 < -4) || (*(int *)(ar7 + 8) < iVar10)) {
      iStack_58 = iStack_58 + -2;
    }
    else {
      iStack_58 = 0x66;
    }
  }
  if (acStack_4c[0] == '\x01') {
    if ((*ar7 & 0x18) == 8) {
      cVar8 = '+';
    }
    else {
      pcVar7 = ar5;
      if ((*ar7 & 0x18) != 0x10) goto LAB_8c013572;
      cVar8 = ' ';
    }
    *ar5 = cVar8;
    pcVar7 = ar5 + 1;
  }
  else {
    *ar5 = '-';
    pcVar7 = ar5 + 1;
  }
LAB_8c013572:
  pfStack_5c = (float *)(ar5 + 1);
  if (iStack_58 == 0x66) {
    if (iStack_60 < 0) {
      iStack_60 = iStack_60 + iVar4;
      iStack_58 = iStack_60 + *(int *)(ar7 + 8);
      if ((iStack_58 < iVar4) && (-1 < iStack_58)) {
        FUN_8c013a72(acStack_48,iStack_58 + 1,iVar13,pcVar14);
      }
      if (iStack_60 < 1) {
        bVar15 = *pcStack_54 != '0';
        if (bVar15) {
          iVar4 = iVar4 + 1;
          iStack_60 = iStack_60 + 1;
        }
        uVar9 = (uint)!bVar15;
        if (iStack_60 < 1) {
          *pcVar7 = '0';
        }
        else {
          uVar9 = 1;
          *pcVar7 = *pcStack_54;
        }
        pcVar7[1] = '.';
        iVar10 = 2;
        pcVar7 = pcVar7 + 2;
        if (iStack_60 < 0) {
          *(char **)(ar7 + 0x14) = pcVar7;
          if (-iStack_60 < *(int *)(ar7 + 8)) {
            *(int *)(ar7 + 0x20) = -iStack_60;
            iVar10 = -iStack_60;
          }
          else {
            *(undefined4 *)(ar7 + 0x20) = *(undefined4 *)(ar7 + 8);
            iVar10 = *(int *)(ar7 + 8);
          }
          iVar10 = iVar10 + 2;
          *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + iStack_60;
        }
        while (((int)(uVar9 - !bVar15) < iVar4 && (0 < *(int *)(ar7 + 8)))) {
          iVar10 = iVar10 + 1;
          *pcVar7 = acStack_48[uVar9];
          uVar9 = uVar9 + 1;
          pcVar7 = pcVar7 + 1;
          *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + -1;
        }
        bVar1 = *ar7;
        if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
          if (0 < *(int *)(ar7 + 8)) {
            *(char **)(ar7 + 0x18) = pcVar7;
            *(undefined4 *)(ar7 + 0x24) = *(undefined4 *)(ar7 + 8);
            iVar10 = iVar10 + *(int *)(ar7 + 8);
          }
        }
        else if (pcVar7[-1] == '0') {
          for (; pcVar7[-1] == '0'; pcVar7 = pcVar7 + -1) {
            iVar10 = iVar10 + -1;
          }
        }
        if ((((*ar7 & 4) == 0) && (pcVar7[-1] == '.')) &&
           (((*(int *)(ar7 + 0x20) == 0 && (*(int *)(ar7 + 0x24) == 0)) || ((*ar7 & 0x20) != 0)))) {
          iVar13 = *(int *)(ar7 + 0x20);
          iVar4 = *(int *)(ar7 + 0x24);
          pcVar7 = pcVar7 + -1;
          ar7[0x24] = 0;
          ar7[0x25] = 0;
          ar7[0x26] = 0;
          ar7[0x27] = 0;
          ar7[0x20] = 0;
          ar7[0x21] = 0;
          ar7[0x22] = 0;
          ar7[0x23] = 0;
          *(char **)(ar7 + 0x14) = ar5;
          ar7[0x18] = 0;
          ar7[0x19] = 0;
          ar7[0x1a] = 0;
          ar7[0x1b] = 0;
          iVar10 = ((iVar10 - iVar13) - iVar4) + -1;
        }
        iVar13 = (int)*ar5;
        if ((((iVar13 == 0x2b) || (iVar13 == 0x2d)) || (iVar13 == 0x20)) &&
           ((iVar10 < *(int *)(ar7 + 4) && (iVar13 = (int)(char)ar7[1], iVar13 == 0x30)))) {
          *(float **)(ar7 + 0x10) = pfStack_5c;
          *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar10;
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        else if (iVar10 < *(int *)(ar7 + 4)) {
          *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar10;
        }
        else {
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        if (*(char **)(ar7 + 0x14) == ar5) {
          *(undefined4 *)(ar7 + 0x14) = *(undefined4 *)(ar7 + 0x10);
        }
      }
      else {
        bVar15 = *pcStack_54 != '0';
        iVar10 = 0;
        if (bVar15) {
          iVar4 = iVar4 + 1;
          iStack_60 = iStack_60 + 1;
        }
        uVar9 = (uint)!bVar15;
        for (; 0 < iStack_60; iStack_60 = iStack_60 + -1) {
          iVar10 = iVar10 + 1;
          *pcVar7 = acStack_48[uVar9];
          uVar9 = uVar9 + 1;
          pcVar7 = pcVar7 + 1;
        }
        *pcVar7 = '.';
        pcVar14 = pcVar7;
        while( true ) {
          pcVar7 = pcVar14 + 1;
          iVar10 = iVar10 + 1;
          if ((iVar4 <= (int)(uVar9 - !bVar15)) || (*(int *)(ar7 + 8) < 1)) break;
          pcVar14 = acStack_48 + uVar9;
          uVar9 = uVar9 + 1;
          *pcVar7 = *pcVar14;
          *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + -1;
          pcVar14 = pcVar7;
        }
        bVar1 = *ar7;
        if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
          *(char **)(ar7 + 0x14) = pcVar7;
          iVar10 = iVar10 + *(int *)(ar7 + 8);
          *(undefined4 *)(ar7 + 0x20) = *(undefined4 *)(ar7 + 8);
        }
        else if (*pcVar14 == '0') {
          for (; pcVar7[-1] == '0'; pcVar7 = pcVar7 + -1) {
            iVar10 = iVar10 + -1;
          }
        }
        if ((((*ar7 & 4) == 0) && (pcVar7[-1] == '.')) &&
           ((*(int *)(ar7 + 0x20) == 0 || ((*ar7 & 0x20) != 0)))) {
          iVar4 = *(int *)(ar7 + 0x20);
          ar7[0x20] = 0;
          ar7[0x21] = 0;
          ar7[0x22] = 0;
          ar7[0x23] = 0;
          pcVar7 = pcVar7 + -1;
          *(char **)(ar7 + 0x14) = ar5;
          iVar10 = (iVar10 - iVar4) + -1;
        }
        iVar13 = (int)*ar5;
        if ((((iVar13 == 0x2b) || (iVar13 == 0x2d)) || (iVar13 == 0x20)) &&
           ((iVar10 < *(int *)(ar7 + 4) && (iVar13 = (int)(char)ar7[1], iVar13 == 0x30)))) {
          *(float **)(ar7 + 0x10) = pfStack_5c;
          *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar10;
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        else if (iVar10 < *(int *)(ar7 + 4)) {
          *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar10;
        }
        else {
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        if (*(char **)(ar7 + 0x14) == ar5) {
          *(undefined4 *)(ar7 + 0x14) = *(undefined4 *)(ar7 + 0x10);
        }
      }
    }
    else {
      iVar10 = 0;
      if (0 < iVar4) {
        do {
          cVar8 = *pcStack_50;
          pcStack_50 = pcStack_50 + 1;
          iVar10 = iVar10 + 1;
          *pcVar7 = cVar8;
          pcVar7 = pcVar7 + 1;
        } while (iVar10 < iVar4);
      }
      *(char **)(ar7 + 0x14) = pcVar7;
      *(int *)(ar7 + 0x20) = iStack_60;
      iVar10 = 0;
      if ((((*ar7 & 0x20) == 0) && (0 < *(int *)(ar7 + 8))) || ((*ar7 & 4) != 0)) {
        *pcVar7 = '.';
        iVar10 = 1;
        pcVar7 = pcVar7 + 1;
      }
      bVar1 = *ar7;
      if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
        *(char **)(ar7 + 0x18) = pcVar7;
        *(undefined4 *)(ar7 + 0x24) = *(undefined4 *)(ar7 + 8);
        iVar10 = iVar10 + *(int *)(ar7 + 8);
      }
      iVar13 = (int)*ar5;
      iVar4 = iVar10 + iStack_60 + iVar4;
      if ((((iVar13 == 0x2b) || (iVar13 == 0x2d)) || (iVar13 == 0x20)) &&
         ((iVar4 < *(int *)(ar7 + 4) && (iVar13 = (int)(char)ar7[1], iVar13 == 0x30)))) {
        *(float **)(ar7 + 0x10) = pfStack_5c;
        *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar4;
        ar7[0x28] = 0;
        ar7[0x29] = 0;
        ar7[0x2a] = 0;
        ar7[0x2b] = 0;
      }
      else if (iVar4 < *(int *)(ar7 + 4)) {
        *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar4;
      }
      else {
        ar7[0x28] = 0;
        ar7[0x29] = 0;
        ar7[0x2a] = 0;
        ar7[0x2b] = 0;
      }
    }
  }
  else {
    if (*(int *)(ar7 + 8) + 1 < iVar4) {
      FUN_8c013a72(acStack_48,*(int *)(ar7 + 8) + 2,iVar13,pcVar14);
    }
    if (*pcStack_54 != '0') {
      iVar4 = iVar4 + 1;
      iStack_60 = iStack_60 + -1;
    }
    uVar9 = (uint)(*pcStack_54 == '0');
    iStack_60 = iStack_60 + (iVar4 - uVar9);
    iVar10 = 1;
    *pcVar7 = acStack_48[uVar9];
    pcVar7[1] = '.';
    pcVar7 = pcVar7 + 1;
    while( true ) {
      pcVar11 = pcVar7 + 1;
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 1;
      if ((iVar4 < (int)uVar9) || (*(int *)(ar7 + 8) < 1)) break;
      *pcVar11 = acStack_48[uVar9];
      *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + -1;
      pcVar7 = pcVar11;
    }
    bVar1 = *ar7;
    if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
      *(char **)(ar7 + 0x14) = pcVar11;
      *(undefined4 *)(ar7 + 0x20) = *(undefined4 *)(ar7 + 8);
      iVar10 = iVar10 + *(int *)(ar7 + 8);
    }
    else if (*pcVar7 == '0') {
      for (; pcVar11[-1] == '0'; pcVar11 = pcVar11 + -1) {
        iVar10 = iVar10 + -1;
      }
    }
    if ((((*ar7 & 4) == 0) && (pcVar11[-1] == '.')) &&
       ((*(int *)(ar7 + 0x20) == 0 || ((*ar7 & 0x20) != 0)))) {
      iVar4 = *(int *)(ar7 + 0x20);
      *(char **)(ar7 + 0x14) = ar5;
      pcVar11 = pcVar11 + -1;
      ar7[0x20] = 0;
      ar7[0x21] = 0;
      ar7[0x22] = 0;
      ar7[0x23] = 0;
      iVar10 = (iVar10 - iVar4) + -1;
    }
    if (iStack_58 == 0x65) {
      cVar8 = 'e';
    }
    else {
      cVar8 = 'E';
    }
    *pcVar11 = cVar8;
    if (iStack_60 < 0) {
      pcVar11[1] = '-';
      iStack_60 = -iStack_60;
    }
    else {
      pcVar11[1] = '+';
    }
    if (iStack_60 < 100) {
      pcVar11[2] = '0';
      pcVar11 = pcVar11 + 3;
      iVar10 = iVar10 + 4;
      *pcVar11 = '0';
    }
    else {
      pcVar11 = pcVar11 + 4;
      iVar10 = iVar10 + 5;
    }
    pcVar7 = pcVar11 + 1;
    uVar12 = 10;
    while (0 < iStack_60) {
      uVar5 = (*(code *)PTR_libgcc_divide_helper_010614_8c013ad4)(iVar10,uVar12,pcVar7,pcVar14);
      puVar3 = PTR_libgcc_divide_helper_010468_8c013ad8;
      *pcVar11 = (char)uVar5 + '0';
      pcVar11 = pcVar11 + -1;
      iStack_60 = (*(code *)puVar3)(iVar10,uVar12,pcVar7,pcVar14);
    }
    iVar13 = (int)*ar5;
    if ((((iVar13 == 0x2b) || (iVar13 == 0x2d)) || (iVar13 == 0x20)) &&
       ((iVar10 < *(int *)(ar7 + 4) && (iVar13 = (int)(char)ar7[1], iVar13 == 0x30)))) {
      *(float **)(ar7 + 0x10) = pfStack_5c;
      *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar10;
      ar7[0x28] = 0;
      ar7[0x29] = 0;
      ar7[0x2a] = 0;
      ar7[0x2b] = 0;
    }
    else if (iVar10 < *(int *)(ar7 + 4)) {
      *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar10;
    }
    else {
      ar7[0x28] = 0;
      ar7[0x29] = 0;
      ar7[0x2a] = 0;
      ar7[0x2b] = 0;
    }
    if (*(char **)(ar7 + 0x14) == ar5) {
      *(undefined4 *)(ar7 + 0x14) = *(undefined4 *)(ar7 + 0x10);
    }
  }
  *pcVar7 = '\0';
  return iVar13;
}



/* FUN_8c013a72 @ 8c013a72 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c013a72(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  char *pcVar1;
  char *pcVar2;
  
  if ('4' < ar4[ar5]) {
    pcVar1 = ar4 + ar5 + -1;
    ar4[ar5] = '0';
    *pcVar1 = *pcVar1 + '\x01';
    pcVar2 = pcVar1;
    for (; ar4 < pcVar1; pcVar1 = pcVar1 + -1) {
      if ('9' < *pcVar1) {
        *pcVar2 = *pcVar2 + -10;
        pcVar2[-1] = pcVar2[-1] + '\x01';
      }
      pcVar2 = pcVar2 + -1;
    }
    pcVar1 = ar4 + 1;
    if ('9' < *pcVar1) {
      *pcVar1 = *pcVar1 + -10;
      *ar4 = *ar4 + '\x01';
    }
  }
  return in_r0;
}



/* FUN_8c013adc @ 8c013adc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c013adc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (0 < ar4) {
    return ar4;
  }
  return -ar4;
}



/* FUN_8c013aec @ 8c013aec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c013aec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  iVar1 = (*(code *)PTR_FUN_8c013b2c)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & DAT_8c013b30) == DAT_8c013b30) {
    if ((uStack_8 & DAT_8c013b34) == 0) {
      *DAT_8c013b38 = (int)DAT_8c013b28;
    }
    else {
      iVar1 = (int)DAT_8c013b26;
      *DAT_8c013b38 = iVar1;
    }
  }
  return iVar1;
}



/* FUN_8c013b3c @ 8c013b3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c013b3c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  iVar1 = (*(code *)PTR_FUN_8c013b7c)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & DAT_8c013b80) == DAT_8c013b80) {
    if ((uStack_8 & DAT_8c013b84) == 0) {
      *DAT_8c013b88 = (int)DAT_8c013b78;
    }
    else {
      iVar1 = (int)DAT_8c013b76;
      *DAT_8c013b88 = iVar1;
    }
  }
  return iVar1;
}



/* FUN_8c013b8c @ 8c013b8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c013b8c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  iVar1 = (*(code *)PTR_FUN_8c013bcc)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & DAT_8c013bd0) == DAT_8c013bd0) {
    if ((uStack_8 & DAT_8c013bd4) == 0) {
      *DAT_8c013bd8 = (int)DAT_8c013bc8;
    }
    else {
      iVar1 = (int)DAT_8c013bc6;
      *DAT_8c013bd8 = iVar1;
    }
  }
  return iVar1;
}



/* FUN_8c013bdc @ 8c013bdc callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c013bdc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c013be4)(0,10);
  return uVar1;
}



/* FUN_8c013be8 @ 8c013be8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c013be8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  iVar1 = (*(code *)PTR_FUN_8c013c28)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & DAT_8c013c2c) == DAT_8c013c2c) {
    if ((uStack_8 & DAT_8c013c30) == 0) {
      *DAT_8c013c34 = (int)DAT_8c013c24;
    }
    else {
      iVar1 = (int)DAT_8c013c22;
      *DAT_8c013c34 = iVar1;
    }
  }
  return iVar1;
}



/* FUN_8c013c38 @ 8c013c38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c013c38(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  iVar1 = (*(code *)PTR_FUN_8c013c78)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & DAT_8c013c7c) == DAT_8c013c7c) {
    if ((uStack_8 & DAT_8c013c80) == 0) {
      *DAT_8c013c84 = (int)DAT_8c013c74;
    }
    else {
      iVar1 = (int)DAT_8c013c72;
      *DAT_8c013c84 = iVar1;
    }
  }
  return iVar1;
}



/* FUN_8c013c88 @ 8c013c88 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c013c88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  iVar1 = (*(code *)PTR_FUN_8c013cc8)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & DAT_8c013ccc) == DAT_8c013ccc) {
    if ((uStack_8 & DAT_8c013cd0) == 0) {
      *DAT_8c013cd4 = (int)DAT_8c013cc4;
    }
    else {
      iVar1 = (int)DAT_8c013cc2;
      *DAT_8c013cd4 = iVar1;
    }
  }
  return iVar1;
}



/* FUN_8c013cd8 @ 8c013cd8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c013cd8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  iVar1 = (*(code *)PTR_FUN_8c013d18)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & DAT_8c013d1c) == DAT_8c013d1c) {
    if ((uStack_8 & DAT_8c013d20) == 0) {
      *DAT_8c013d24 = (int)DAT_8c013d14;
    }
    else {
      iVar1 = (int)DAT_8c013d12;
      *DAT_8c013d24 = iVar1;
    }
  }
  return iVar1;
}



/* FUN_8c013d28 @ 8c013d28 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c013d28(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  iVar1 = (*(code *)PTR_FUN_8c013d68)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & DAT_8c013d6c) == DAT_8c013d6c) {
    if ((uStack_8 & DAT_8c013d70) == 0) {
      *DAT_8c013d74 = (int)DAT_8c013d64;
    }
    else {
      iVar1 = (int)DAT_8c013d62;
      *DAT_8c013d74 = iVar1;
    }
  }
  return iVar1;
}



/* FUN_8c013d78 @ 8c013d78 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c013d7c) */
/* WARNING: Removing unreachable block (ram,0x8c013db8) */
/* WARNING: Unknown calling convention */

int FUN_8c013d78(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  float in_fr5;
  float in_fr4;
  char in_FPSCR_SZ;
  float fStack_4;
  
  fStack_4 = in_fr5;
  if (in_FPSCR_SZ == '\0') {
    fStack_4 = in_fr4;
  }
  if (in_fr4 == 0.0) {
    *ar4 = 0;
  }
  else {
    if (((uint)fStack_4 & DAT_8c013dd8) != DAT_8c013dd8) {
      *ar4 = ((int)((uint)fStack_4 & DAT_8c013dd8) >> 0x17) + -0x7e;
      return in_r0;
    }
    if ((DAT_8c013ddc & (uint)fStack_4) == 0) {
      in_r0 = (int)DAT_8c013dd2;
      *DAT_8c013de0 = in_r0;
    }
    else {
      *DAT_8c013de0 = (int)DAT_8c013dd4;
    }
  }
  return in_r0;
}



/* FUN_8c013dec @ 8c013dec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c013dec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (0 < ar4) {
    return ar4;
  }
  return -ar4;
}



/* FUN_8c013dfc @ 8c013dfc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c013dfc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  iVar1 = (*(code *)PTR_FUN_8c013e3c)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & DAT_8c013e40) == DAT_8c013e40) {
    if ((uStack_8 & DAT_8c013e44) == 0) {
      *DAT_8c013e48 = (int)DAT_8c013e38;
    }
    else {
      iVar1 = (int)DAT_8c013e36;
      *DAT_8c013e48 = iVar1;
    }
  }
  return iVar1;
}



/* FUN_8c013e4c @ 8c013e4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c013e4c(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *DAT_8c013ebc = ar5;
  iVar1 = *DAT_8c013ebc;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}



/* FUN_8c013ec0 @ 8c013ec0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c013ec0(char *ar4,char *ar5,uint ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  if (ar6 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (ar6 != 0) {
    do {
      cVar1 = *ar5;
      ar5 = ar5 + 1;
      cVar2 = *ar4;
      ar4 = ar4 + 1;
      if (cVar2 != cVar1) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < ar6);
  }
  return (uint)(byte)ar4[-1] - (uint)(byte)ar5[-1];
}



/* memmove @ 8c013ef4 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * memmove(undefined4 *ar4,undefined4 *ar5,uint ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if ((ar4 != ar5) && (ar6 != 0)) {
    uVar6 = ar6 >> 1;
    uVar5 = (uint)ar4 | (uint)ar5 | ar6;
    uVar7 = ar6 >> 2;
    if (ar4 < ar5) {
      puVar3 = ar4;
      if ((uVar5 & 1) == 0) {
        if ((uVar5 & 3) == 0) {
          do {
            uVar4 = *ar5;
            ar5 = ar5 + 1;
            uVar7 = uVar7 - 1;
            *puVar3 = uVar4;
            puVar3 = puVar3 + 1;
          } while (uVar7 != 0);
        }
        else {
          do {
            uVar2 = *(undefined2 *)ar5;
            ar5 = (undefined4 *)((int)ar5 + 2);
            uVar6 = uVar6 - 1;
            *(undefined2 *)puVar3 = uVar2;
            puVar3 = (undefined4 *)((int)puVar3 + 2);
          } while (uVar6 != 0);
        }
      }
      else {
        do {
          uVar1 = *(undefined1 *)ar5;
          ar5 = (undefined4 *)((int)ar5 + 1);
          ar6 = ar6 - 1;
          *(undefined1 *)puVar3 = uVar1;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        } while (ar6 != 0);
      }
    }
    else {
      puVar3 = (undefined4 *)((int)ar4 + ar6);
      puVar8 = (undefined4 *)((int)ar5 + ar6);
      if ((uVar5 & 1) == 0) {
        if ((uVar5 & 3) == 0) {
          do {
            puVar8 = puVar8 + -1;
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + -1;
            *puVar3 = *puVar8;
          } while (uVar7 != 0);
        }
        else {
          do {
            puVar8 = (undefined4 *)((int)puVar8 + -2);
            uVar6 = uVar6 - 1;
            puVar3 = (undefined4 *)((int)puVar3 + -2);
            *(undefined2 *)puVar3 = *(undefined2 *)puVar8;
          } while (uVar6 != 0);
        }
      }
      else {
        do {
          puVar8 = (undefined4 *)((int)puVar8 + -1);
          ar6 = ar6 - 1;
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          *(undefined1 *)puVar3 = *(undefined1 *)puVar8;
        } while (ar6 != 0);
      }
    }
  }
  return ar4;
}



/* FUN_8c013fb4 @ 8c013fb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c013fb4(undefined1 *ar4,undefined1 *ar5,uint ar6,undefined4 ar7)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  if (ar4 != ar5) {
    if (ar4 < ar5) {
      uVar2 = 0;
      puVar3 = ar4;
      if (ar6 != 0) {
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          uVar2 = uVar2 + 1;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
        } while (uVar2 < ar6);
      }
    }
    else {
      uVar2 = 0;
      puVar4 = ar4 + ar6;
      puVar3 = ar5 + ar6;
      if (ar6 != 0) {
        do {
          puVar3 = puVar3 + -1;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + -1;
          *puVar4 = *puVar3;
        } while (uVar2 < ar6);
      }
    }
  }
  return ar4;
}



/* memset @ 8c013ff8 callers=13 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * memset(undefined1 *ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = ar4;
  if (ar6 != 0) {
    do {
      uVar2 = uVar2 + 1;
      *puVar1 = (undefined1)ar5;
      puVar1 = puVar1 + 1;
    } while (uVar2 < ar6);
  }
  return ar4;
}



/* free_if_nonnull @ 8c014010 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 free_if_nonnull(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if (ar4 != 0) {
    in_r0 = (*(code *)PTR_FUN_8c014024)(ar4,ar5,ar6,ar7);
  }
  return in_r0;
}



/* FUN_8c014028 @ 8c014028 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c014028(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_FUN_8c014060;
  puVar1 = PTR_DAT_8c01405c;
  while ((iVar3 = (*(code *)puVar2)(ar4,ar5,ar6,ar7), iVar3 == 0 && (*(int *)PTR_DAT_8c01405c != 0))
        ) {
    (**(code **)puVar1)(0,ar5,ar6,ar7);
  }
  return iVar3;
}



/* FUN_8c014064 @ 8c014064 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c014064(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  iVar1 = (*(code *)PTR_FUN_8c0140a4)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & DAT_8c0140a8) == DAT_8c0140a8) {
    if ((uStack_8 & DAT_8c0140ac) == 0) {
      *DAT_8c0140b0 = (int)DAT_8c0140a0;
    }
    else {
      iVar1 = (int)DAT_8c01409e;
      *DAT_8c0140b0 = iVar1;
    }
  }
  return iVar1;
}



/* FUN_8c0140b4 @ 8c0140b4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0140b4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = ar4;
  uStack_c = ar6;
  uStack_8 = ar7;
  uVar1 = FUN_8c0140cc(1,ar5,&uStack_10,ar7);
  return uVar1;
}



/* FUN_8c0140cc @ 8c0140cc callers=2 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c0140cc(uint ar4,uint ar5,int *ar6,int ar7)

{
  char cVar1;
  int in_r0;
  int iVar2;
  uint uVar3;
  int *a6;
  uint uVar4;
  int a5;
  uint a5_00;
  uint uVar5;
  uint a4;
  int iVar6;
  
  a6 = ar6;
  do {
    while( true ) {
      uVar4 = (ar5 - ar4 >> 1) + ar4;
      a5 = (uVar4 - 1) * ar6[1] + *ar6;
      a5_00 = ar5;
      a4 = ar4;
      while ((a4 != 0 && (a4 <= a5_00))) {
        while (iVar2 = (*(code *)ar6[2])((a4 - 1) * ar6[1] + *ar6,a5,a6,ar7), uVar5 = a5_00,
              iVar2 < 0) {
          a4 = a4 + 1;
        }
        while (in_r0 = (*(code *)ar6[2])(a5,(uVar5 - 1) * ar6[1] + *ar6,a6,ar7), in_r0 < 0) {
          uVar5 = uVar5 - 1;
        }
        a5_00 = uVar5;
        if (a4 <= uVar5) {
          a5_00 = uVar5 - 1;
          for (uVar3 = 0; uVar3 < (uint)ar6[1]; uVar3 = uVar3 + 1) {
            iVar2 = *ar6;
            iVar6 = (a4 - 1) * ar6[1];
            in_r0 = iVar6 + iVar2;
            cVar1 = *(char *)(in_r0 + uVar3);
            ar7 = (int)cVar1;
            a6 = (int *)(a5_00 * ar6[1] + iVar2 + uVar3);
            *(char *)(iVar6 + iVar2 + uVar3) = (char)*a6;
            *(char *)(a5_00 * ar6[1] + *ar6 + uVar3) = cVar1;
          }
          if (a4 == uVar4) {
            a5 = a5_00 * ar6[1] + *ar6;
          }
          else if (uVar5 == uVar4) {
            a5 = (a4 - 1) * ar6[1] + *ar6;
          }
          a4 = a4 + 1;
        }
      }
      if (ar5 - a4 <= a5_00 - ar4) break;
      if (ar4 < a5_00) {
        a6 = ar6;
        in_r0 = FUN_8c0140cc(ar4,a5_00,ar6,ar7);
      }
      ar4 = a4;
      if (ar5 <= a4) {
        return in_r0;
      }
    }
    if (a4 < ar5) {
      a6 = ar6;
      in_r0 = FUN_8c0140cc(a4,ar5,ar6,ar7);
    }
    ar5 = a5_00;
  } while (ar4 < a5_00);
  return in_r0;
}



/* rand @ 8c014200 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint rand(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)DAT_8c014220;
  uVar2 = *(int *)PTR_DAT_8c014224 * DAT_8c014228 + (int)DAT_8c01421e;
  *(uint *)PTR_DAT_8c014224 = uVar2;
  return uVar2 >> 0x10 & uVar1;
}



/* FUN_8c01422c @ 8c01422c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01422c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined4 in_fr1;
  undefined4 in_fr0;
  undefined4 in_fr3;
  undefined4 in_fr2;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 in_fr11;
  undefined4 in_fr10;
  undefined4 in_fr13;
  undefined4 in_fr12;
  undefined4 in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  undefined8 in_xd2;
  undefined8 in_xd4;
  undefined8 in_xd6;
  undefined8 in_xd8;
  undefined8 in_xd10;
  undefined8 in_xd12;
  undefined8 in_xd14;
  undefined4 in_GBR;
  undefined4 in_MACH;
  undefined4 in_MACL;
  undefined4 in_PR;
  undefined4 in_FPUL;
  byte in_FPSCR_RM;
  byte in_FPSCR_FLAG;
  byte in_FPSCR_ENABLE;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  byte in_FPSCR_FR;
  
  *(BADSPACEBASE **)ar4 = register0x0000003c;
  *(undefined4 *)(ar4 + 4) = unaff_r14;
  *(undefined4 *)(ar4 + 8) = in_PR;
  *(undefined4 *)(ar4 + 0xc) = unaff_r13;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = unaff_r11;
  *(undefined4 *)(ar4 + 0x18) = unaff_r10;
  *(undefined4 *)(ar4 + 0x1c) = unaff_r9;
  *(undefined4 *)(ar4 + 0x20) = unaff_r8;
  *(undefined4 *)(ar4 + 0x24) = ar7;
  *(undefined4 *)(ar4 + 0x28) = ar6;
  *(undefined4 *)(ar4 + 0x2c) = ar5;
  *(int *)(ar4 + 0x30) = ar4;
  *(undefined4 *)(ar4 + 0x34) = in_r3;
  *(undefined4 *)(ar4 + 0x38) = in_r2;
  *(undefined4 *)(ar4 + 0x3c) = in_r1;
  *(undefined4 *)(ar4 + 0x40) = in_r0;
  *(undefined4 *)(ar4 + 0x44) = in_MACH;
  *(undefined4 *)(ar4 + 0x48) = in_MACL;
  *(undefined4 *)(ar4 + 0x4c) = in_GBR;
  *(uint *)(ar4 + 0x94) =
       (uint)in_FPSCR_RM | (uint)in_FPSCR_FLAG << 2 | (uint)in_FPSCR_ENABLE << 7 |
       (uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
       (uint)in_FPSCR_SZ << 0x14 | (uint)in_FPSCR_FR << 0x15;
  *(undefined4 *)(ar4 + 0x90) = in_FPUL;
  if (in_FPSCR_SZ == 0) {
    *(undefined4 *)(ar4 + 0x8c) = in_fr15;
    *(undefined4 *)(ar4 + 0x88) = in_fr14;
    *(undefined4 *)(ar4 + 0x84) = in_fr13;
    *(undefined4 *)(ar4 + 0x80) = in_fr12;
    *(undefined4 *)(ar4 + 0x7c) = in_fr11;
    *(undefined4 *)(ar4 + 0x78) = in_fr10;
    *(undefined4 *)(ar4 + 0x74) = in_fr9;
    *(undefined4 *)(ar4 + 0x70) = in_fr8;
    *(undefined4 *)(ar4 + 0x6c) = in_fr7;
    *(undefined4 *)(ar4 + 0x68) = in_fr6;
    *(undefined4 *)(ar4 + 100) = in_fr5;
    *(undefined4 *)(ar4 + 0x60) = in_fr4;
    *(undefined4 *)(ar4 + 0x5c) = in_fr3;
    *(undefined4 *)(ar4 + 0x58) = in_fr2;
    *(undefined4 *)(ar4 + 0x54) = in_fr1;
    *(undefined4 *)(ar4 + 0x50) = in_fr0;
  }
  else {
    *(undefined8 *)(ar4 + 0x8c) = in_xd14;
    *(ulonglong *)(ar4 + 0x84) = CONCAT44(in_fr14,in_fr15);
    *(undefined8 *)(ar4 + 0x7c) = in_xd12;
    *(ulonglong *)(ar4 + 0x74) = CONCAT44(in_fr12,in_fr13);
    *(undefined8 *)(ar4 + 0x6c) = in_xd10;
    *(ulonglong *)(ar4 + 100) = CONCAT44(in_fr10,in_fr11);
    *(undefined8 *)(ar4 + 0x5c) = in_xd8;
    *(ulonglong *)(ar4 + 0x54) = CONCAT44(in_fr8,in_fr9);
    *(undefined8 *)(ar4 + 0x4c) = in_xd6;
    *(ulonglong *)(ar4 + 0x44) = CONCAT44(in_fr6,in_fr7);
    *(undefined8 *)(ar4 + 0x3c) = in_xd4;
    *(ulonglong *)(ar4 + 0x34) = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)(ar4 + 0x2c) = in_xd2;
    *(ulonglong *)(ar4 + 0x24) = CONCAT44(in_fr2,in_fr3);
    *(undefined8 *)(ar4 + 0x1c) = in_xd0;
    *(ulonglong *)(ar4 + 0x14) = CONCAT44(in_fr0,in_fr1);
  }
  return 0;
}



/* FUN_8c014294 @ 8c014294 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c014294(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  iVar1 = (*(code *)PTR_FUN_8c0142d4)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & DAT_8c0142d8) == DAT_8c0142d8) {
    if ((uStack_8 & DAT_8c0142dc) == 0) {
      *DAT_8c0142e0 = (int)DAT_8c0142d0;
    }
    else {
      iVar1 = (int)DAT_8c0142ce;
      *DAT_8c0142e0 = iVar1;
    }
  }
  return iVar1;
}



/* FUN_8c0142e4 @ 8c0142e4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0142e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  iVar1 = (*(code *)PTR_FUN_8c014324)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & DAT_8c014328) == DAT_8c014328) {
    if ((uStack_8 & DAT_8c01432c) == 0) {
      *DAT_8c014330 = (int)DAT_8c014320;
    }
    else {
      iVar1 = (int)DAT_8c01431e;
      *DAT_8c014330 = iVar1;
    }
  }
  return iVar1;
}



/* FUN_8c014334 @ 8c014334 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c014346) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c014334(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_FUN_8c01436c)(1,0,ar4,in_stack_00000000);
  return uVar1;
}



/* FUN_8c014370 @ 8c014370 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c014370(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)PTR_DAT_8c014378 = ar4;
  return in_r0;
}



/* FUN_8c01437c @ 8c01437c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

char * FUN_8c01437c(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char *pcVar2;
  
  for (pcVar2 = ar4; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
  }
  do {
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return ar4;
}



/* FUN_8c01439c @ 8c01439c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01439c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0143ac)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* log_message @ 8c0143b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int log_message(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while (cVar1 = *ar4, ar4 = ar4 + 1, cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



/* FUN_8c0143c0 @ 8c0143c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

char * FUN_8c0143c0(char *ar4,char *ar5,uint ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  pcVar3 = ar4;
  while( true ) {
    if (ar6 <= uVar2) {
      return ar4;
    }
    if (*ar5 == '\0') break;
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    uVar2 = uVar2 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  }
  for (; uVar2 < ar6; uVar2 = uVar2 + 1) {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
  }
  return ar4;
}



/* FUN_8c0143f0 @ 8c0143f0 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0143f0(byte *ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  uint uStack_34;
  
  puVar4 = PTR_DAT_8c0145e0;
  puVar3 = PTR_FUN_8c0145dc;
  uStack_34 = 0;
  bVar12 = false;
  iVar7 = ar6;
  pbVar10 = ar4;
  while ((puVar4[*pbVar10] & 0x40) != 0) {
    pbVar10 = pbVar10 + 1;
    iVar6 = (*(code *)puVar3)(pbVar10,ar4,iVar7,ar7);
    if (iVar6 != 0) {
      return 0;
    }
  }
  if ((*pbVar10 == 0x2b) || (*pbVar10 == 0x2d)) {
    bVar12 = *pbVar10 == 0x2d;
    pbVar10 = pbVar10 + 1;
    iVar6 = (*(code *)puVar3)(pbVar10,ar4,iVar7,ar7);
    if (iVar6 != 0) {
      return 0;
    }
  }
  pbVar11 = pbVar10;
  if (ar6 == 0) {
    if (*pbVar10 == 0x30) {
      pbVar11 = pbVar10 + 1;
      iVar6 = (*(code *)puVar3)(pbVar11,ar4,iVar7,ar7);
      if (iVar6 != 0) {
        return 0;
      }
      iVar6 = (int)(char)*pbVar11;
      if ((puVar4[*pbVar11] & 1) != 0) {
        iVar6 = iVar6 + 0x20;
      }
      if (iVar6 == 0x78) {
        iVar6 = (*(code *)puVar3)(pbVar10 + 2,ar4,iVar7,ar7);
        if (iVar6 != 0) {
          return 0;
        }
        ar6 = 0x10;
        pbVar11 = pbVar10 + 2;
      }
      else {
        ar6 = 8;
      }
    }
    else {
      ar6 = 10;
    }
  }
  else if ((ar6 == 0x10) && (*pbVar10 == 0x30)) {
    pbVar11 = pbVar10 + 1;
    iVar6 = (int)(char)*pbVar11;
    if ((puVar4[*pbVar11] & 1) != 0) {
      iVar6 = iVar6 + 0x20;
    }
    if (iVar6 == 0x78) {
      pbVar11 = pbVar10 + 2;
    }
    iVar6 = (*(code *)puVar3)(pbVar11,ar4,iVar7,ar7);
    if (iVar6 != 0) {
      return 0;
    }
  }
  if ((ar6 < 2) || (0x24 < ar6)) {
    *DAT_8c0146a8 = (int)DAT_8c0146a4;
  }
  else {
    if (ar6 < 0xb) {
      cVar5 = (char)ar6 + '/';
    }
    else {
      cVar5 = (char)ar6 + 'V';
    }
    iVar6 = (int)(char)*pbVar11;
    if ((puVar4[*pbVar11] & 7) != 0) {
      if ((puVar4[*pbVar11] & 1) != 0) {
        iVar6 = iVar6 + 0x20;
      }
      if (iVar6 <= cVar5) {
        while (*pbVar11 == 0x30) {
          pbVar11 = pbVar11 + 1;
          iVar6 = (*(code *)puVar3)(pbVar11,ar4,iVar7,ar7);
          if (iVar6 != 0) {
            return 0;
          }
        }
        bVar2 = false;
        uStack_34 = 0;
        while( true ) {
          iVar6 = (int)(char)*pbVar11;
          bVar1 = puVar4[*pbVar11];
          uVar9 = (uint)bVar1;
          if ((bVar1 & 7) == 0) break;
          if ((bVar1 & 1) != 0) {
            iVar6 = iVar6 + 0x20;
          }
          if (cVar5 < iVar6) break;
          if (!bVar2) {
            if ((puVar4[*pbVar11] & 4) == 0) {
              uVar9 = (uint)(char)*pbVar11;
              uVar8 = uVar9;
              if ((puVar4[*pbVar11] & 1) != 0) {
                uVar8 = uVar9 + 0x20;
              }
              iVar6 = uVar8 - 0x57;
            }
            else {
              iVar6 = (char)*pbVar11 + -0x30;
            }
            uVar9 = (*(code *)PTR_libgcc_divide_helper_01051c_8c0145e8)(iVar6,uVar9,iVar7,ar7);
            if (uVar9 < uStack_34) {
              bVar2 = true;
            }
            else {
              uStack_34 = ar6 * uStack_34 + iVar6;
            }
          }
          pbVar11 = pbVar11 + 1;
          iVar6 = (*(code *)puVar3)(pbVar11,ar4,iVar7,ar7);
          if (iVar6 != 0) {
            return 0;
          }
        }
        if (bVar2) {
          *DAT_8c0146a8 = (int)DAT_8c0146a2;
          if (bVar12) {
            uStack_34 = DAT_8c0146b0;
          }
          else {
            uStack_34 = DAT_8c0146ac;
          }
        }
        else if (bVar12) {
          uStack_34 = -uStack_34;
        }
      }
    }
    iVar6 = (int)(char)*pbVar11;
    if ((puVar4[*pbVar11] & 1) != 0) {
      iVar6 = iVar6 + 0x20;
    }
    pbVar10 = pbVar11;
    if (iVar6 == 0x75) {
      pbVar10 = pbVar11 + 1;
      iVar6 = (int)(char)*pbVar10;
      if ((puVar4[*pbVar10] & 1) != 0) {
        iVar6 = iVar6 + 0x20;
      }
      if (iVar6 == 0x6c) {
        pbVar10 = pbVar11 + 2;
      }
    }
    iVar6 = (int)(char)*pbVar10;
    if ((puVar4[*pbVar10] & 1) != 0) {
      iVar6 = iVar6 + 0x20;
    }
    pbVar11 = pbVar10;
    if (iVar6 == 0x6c) {
      pbVar11 = pbVar10 + 1;
      iVar6 = (int)(char)*pbVar11;
      if ((puVar4[*pbVar11] & 1) != 0) {
        iVar6 = iVar6 + 0x20;
      }
      if (iVar6 == 0x75) {
        pbVar11 = pbVar10 + 2;
      }
    }
    iVar7 = (*(code *)puVar3)(pbVar11,ar4,iVar7,ar7);
    if (iVar7 != 0) {
      return 0;
    }
  }
  if (ar5 != (undefined4 *)0x0) {
    *ar5 = pbVar11;
    return uStack_34;
  }
  return uStack_34;
}



/* FUN_8c0146b4 @ 8c0146b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0146b4(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((PTR_DAT_8c0146cc[ar4 & 0xff] & 2) != 0) {
    return ar4 - 0x20;
  }
  return ar4;
}



/* vsprintf_like @ 8c0146d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 vsprintf_like(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0146f4)(1,0,ar4,ar5);
  return uVar1;
}



/* FUN_8c0146f8 @ 8c0146f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int * FUN_8c0146f8(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (int)PTR_DAT_8c014748;
  (*(code *)PTR_Vec3_ctor_zero_8c01474c)(ar4 + 1,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c01474c)(ar4 + 5,ar5,ar6,ar7);
  ar4[10] = DAT_8c014750;
  *DAT_8c014754 = DAT_8c014758;
  DAT_8c014754[1] = DAT_8c01475c;
  (*(code *)PTR_FUN_8c014760)(ar4[10],ar5,ar6,ar7);
  (**(code **)(*ar4 + 0x14))(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c014764 @ 8c014764 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c014764(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) | 0x40;
  uVar1 = (*(code *)PTR_FUN_8c01478c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c014790 @ 8c014790 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c014790(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(uint *)(ar4 + 0x14) | 0x20;
  *(uint *)(ar4 + 0x14) = uVar1;
  return uVar1;
}



/* Class_129808_m0_0147a4 @ 8c0147a4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c01482c) */
/* WARNING: Removing unreachable block (ram,0x8c0147e0) */
/* WARNING: Removing unreachable block (ram,0x8c014806) */
/* WARNING: Removing unreachable block (ram,0x8c014852) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 Class_129808_m0_0147a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined4 in_fr3;
  double dVar5;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 in_fr11;
  undefined4 in_fr10;
  undefined8 in_xd0;
  undefined4 in_xf4;
  undefined4 in_xf6;
  undefined4 in_xf8;
  undefined8 in_xd10;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_3c = in_fr4;
  uStack_38 = in_fr5;
  uStack_34 = in_fr6;
  uStack_30 = in_fr7;
  uStack_2c = in_fr8;
  uStack_28 = in_fr9;
  uStack_24 = in_fr10;
  uStack_20 = in_fr11;
  if (in_FPSCR_SZ != '\0') {
    uStack_20 = (undefined4)in_xd10;
    uStack_1c = (undefined4)((ulonglong)in_xd10 >> 0x20);
    uStack_3c = in_fr5;
    uStack_38 = in_xf4;
    uStack_34 = in_fr7;
    uStack_30 = in_xf6;
    uStack_2c = in_fr9;
    uStack_28 = in_xf8;
    uStack_24 = in_fr11;
  }
  iVar2 = ar4;
  iVar1 = (*(code *)PTR_rand_8c01488c)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(uStack_38,in_fr3);
  }
  else {
    dVar5 = (double)CONCAT44(uStack_34,uStack_38);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c014890,(float)iVar1);
  }
  else {
    dVar4 = (double)CONCAT44(_Class_129808_m1_014894,DAT_8c014890);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(uStack_3c,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(uStack_38,uStack_3c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + (float)((ulonglong)dVar4 >> 0x20),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 4) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 4) = dVar5;
  }
  iVar1 = (*(code *)PTR_rand_8c01488c)(iVar2,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(uStack_30,SUB84(dVar5,0));
  }
  else {
    dVar5 = (double)CONCAT44(uStack_2c,uStack_30);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c014890,(float)iVar1);
  }
  else {
    dVar4 = (double)CONCAT44(_Class_129808_m1_014894,DAT_8c014890);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(uStack_34,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(uStack_30,uStack_34);
  }
  if (in_FPSCR_PR == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + (float)((ulonglong)dVar4 >> 0x20),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 8) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 8) = dVar5;
  }
  iVar1 = (*(code *)PTR_rand_8c01488c)(iVar2,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(uStack_28,SUB84(dVar5,0));
  }
  else {
    dVar5 = (double)CONCAT44(uStack_24,uStack_28);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c014890,(float)iVar1);
  }
  else {
    dVar4 = (double)CONCAT44(_Class_129808_m1_014894,DAT_8c014890);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(uStack_2c,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(uStack_28,uStack_2c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + (float)((ulonglong)dVar4 >> 0x20),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0xc) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0xc) = dVar5;
  }
  iVar2 = (*(code *)PTR_rand_8c01488c)(iVar2,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(uStack_20,SUB84(dVar5,0));
  }
  else {
    dVar5 = (double)CONCAT44(uStack_1c,uStack_20);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c014890,(float)iVar2);
  }
  else {
    dVar4 = (double)CONCAT44(_Class_129808_m1_014894,DAT_8c014890);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(uStack_24,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(uStack_20,uStack_24);
  }
  if (in_FPSCR_PR == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + (float)((ulonglong)dVar4 >> 0x20),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x24) = (int)((ulonglong)dVar5 >> 0x20);
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x18));
  }
  else {
    *(double *)(ar4 + 0x24) = dVar5;
    in_xd0 = *(undefined8 *)(ar4 + 0x18);
    dVar5 = *(double *)(ar4 + 0x24);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x18) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x18) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x14) = in_stack_00000000;
  }
  else {
    *(undefined8 *)(ar4 + 0x14) = CONCAT44(in_stack_00000004,in_stack_00000000);
  }
  return 0x3c;
}



/* Class_129808_m1_014894 @ 8c014894 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129808_m1_014894(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *a5;
  float in_fr1;
  float fVar2;
  float in_fr5;
  float in_fr4;
  float in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_c;
  float fStack_8;
  
  fStack_c = in_fr5;
  fStack_8 = in_fr4;
  if (in_FPSCR_SZ == '\0') {
    fStack_c = in_fr4;
    fStack_8 = in_PR;
  }
  a5 = ar4 + 5;
  (*(code *)PTR_FUN_8c0148d4)(ar4 + 1,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = (float)ar4[2];
  }
  uVar1 = 0;
  fVar2 = fStack_c;
  if (in_FPSCR_SZ == '\0') {
    fVar2 = in_fr1;
    fStack_8 = fStack_c;
  }
  if (in_FPSCR_PR == '\0' && fVar2 < fStack_8) {
    uVar1 = (**(code **)(*ar4 + 0x14))(ar4,a5,ar6,ar7);
  }
  return uVar1;
}



/* Class_129808_m2_0148d8 @ 8c0148d8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 Class_129808_m2_0148d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *a5;
  undefined4 a7;
  double dVar2;
  undefined4 in_fr3;
  double dVar3;
  double dVar4;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  a5 = &uStack_20;
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = *(undefined4 *)(ar4 + 4);
    uStack_1c = *(undefined4 *)(ar4 + 8);
    uStack_18 = *(undefined4 *)(ar4 + 0xc);
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),in_fr3);
    dVar4 = (double)CONCAT44(DAT_8c014968,*(undefined4 *)(ar4 + 0x14));
  }
  else {
    uStack_20 = (undefined4)*(undefined8 *)(ar4 + 4);
    uStack_1c = (undefined4)*(undefined8 *)(ar4 + 8);
    uStack_18 = (undefined4)*(undefined8 *)(ar4 + 0xc);
    dVar3 = *(double *)(ar4 + 4);
    dVar4 = (double)CONCAT44(_DAT_8c01496c,DAT_8c014968);
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) -
                             SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 - dVar4 * dVar4;
  }
  uStack_14 = SUB84(dVar3,0);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),uStack_14);
    dVar2 = (double)CONCAT44(DAT_8c014968,*(undefined4 *)(ar4 + 0x18));
    uStack_14 = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    dVar4 = *(double *)(ar4 + 8);
    dVar2 = (double)CONCAT44(_DAT_8c01496c,DAT_8c014968);
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) -
                             SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 - dVar2 * dVar2;
  }
  uStack_10 = SUB84(dVar4,0);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xc),uStack_10);
    dVar2 = (double)CONCAT44(DAT_8c014968,*(undefined4 *)(ar4 + 0x1c));
    uStack_10 = (int)((ulonglong)dVar4 >> 0x20);
  }
  else {
    dVar3 = *(double *)(ar4 + 0xc);
    dVar2 = (double)CONCAT44(_DAT_8c01496c,DAT_8c014968);
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) -
                             SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20),SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 - dVar2 * dVar2;
  }
  uVar1 = (undefined4)((ulonglong)dVar3 >> 0x20);
  uStack_c = uVar1;
  uStack_8 = in_PR;
  if (in_FPSCR_SZ != '\0') {
    uStack_c = SUB84(dVar3,0);
    uStack_8 = uVar1;
  }
  a7 = 2;
  uVar1 = _DAT_8c01496c;
  (*(code *)PTR_FUN_8c014970)(*(undefined4 *)(ar4 + 0x28),&uStack_20,_DAT_8c01496c,2);
  uVar1 = (*(code *)PTR_FUN_8c014974)(*(undefined4 *)(ar4 + 0x28),a5,uVar1,a7);
  return uVar1;
}



/* Class_129808_m3_014978 @ 8c014978 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129808_m3_014978(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  ulonglong uVar2;
  undefined4 in_fr5;
  undefined4 in_fr4;
  ulonglong in_xd4;
  char in_FPSCR_SZ;
  undefined4 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x24) = in_fr4;
    in_xd4 = CONCAT44(in_fr5,in_fr1);
    *(undefined4 *)(ar4 + 8) = in_fr5;
  }
  else {
    uStack_c = (undefined4)in_xd4;
    *(ulonglong *)(ar4 + 0x24) = CONCAT44(uStack_c,in_fr5);
    *(ulonglong *)(ar4 + 8) = in_xd4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x14) = 0;
    uVar2 = CONCAT44(DAT_8c0149cc,(int)in_xd4);
    *(undefined4 *)(ar4 + 0x18) = DAT_8c0149cc;
  }
  else {
    *(ulonglong *)(ar4 + 0x14) = in_xd4 & 0xffffffff;
    uVar2 = CONCAT44(PTR_FUN_8c0149d0,DAT_8c0149cc);
    *(ulonglong *)(ar4 + 0x18) = uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x1c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x1c) = uVar2 & 0xffffffff;
  }
  uVar1 = (*(code *)PTR_FUN_8c0149d0)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0149d4 @ 8c0149d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0149d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x2c) = 0;
  return 0;
}



/* FUN_8c0149dc @ 8c0149dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0149dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *DAT_8c014a04 = ar5;
  DAT_8c014a04[1] = ar6;
  uVar1 = (*(code *)PTR_FUN_8c014a08)(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c014a0c @ 8c014a0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c014a0c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(uint *)(ar4 + 0x28) | 0x20;
  *(uint *)(ar4 + 0x28) = uVar1;
  return uVar1;
}



/* FUN_8c014a20 @ 8c014a20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c014a20(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(uint *)(ar4 + 0x28) | 0x10;
  *(uint *)(ar4 + 0x28) = uVar1;
  return uVar1;
}



/* object_dtor_delete @ 8c014a34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int object_dtor_delete(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c014a60)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c014a64 @ 8c014a64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c014a64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) | DAT_8c014a8c;
  uVar1 = (*(code *)PTR_FUN_8c014a90)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c014a94 @ 8c014a94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c014a94(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c014aac)(ar5,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c014ab0 @ 8c014ab0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c014ab0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 in_dr0;
  undefined8 uVar7;
  uint in_PR;
  char in_FPSCR_SZ;
  uint uStack_10;
  uint uStack_c;
  
  *ar4 = DAT_8c014bb4;
  (*(code *)PTR_Vec3_ctor_zero_8c014bb8)(ar4 + 0x15,ar5,ar6,ar7);
  puVar1 = PTR_DAT_8c014bbc;
  uVar3 = *(undefined4 *)(PTR_DAT_8c014bbc + 4);
  ar4[0x1f] = *(undefined4 *)PTR_DAT_8c014bbc;
  ar4[0x20] = uVar3;
  ar4[0x21] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c014bc4;
  puVar4 = (undefined4 *)((int)ar4 + DAT_8c014bc0);
  uVar3 = *(undefined4 *)(PTR_DAT_8c014bc4 + 4);
  *puVar4 = *(undefined4 *)PTR_DAT_8c014bc4;
  puVar4[1] = uVar3;
  puVar4[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c014bcc;
  puVar4 = (undefined4 *)((int)ar4 + DAT_8c014bc8);
  uVar3 = *(undefined4 *)(PTR_DAT_8c014bcc + 4);
  *puVar4 = *(undefined4 *)PTR_DAT_8c014bcc;
  puVar4[1] = uVar3;
  puVar4[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c014bd4;
  puVar4 = (undefined4 *)((int)ar4 + DAT_8c014bd0);
  uVar3 = *(undefined4 *)(PTR_DAT_8c014bd4 + 4);
  *puVar4 = *(undefined4 *)PTR_DAT_8c014bd4;
  puVar4[1] = uVar3;
  puVar4[2] = *(undefined4 *)(puVar1 + 8);
  uStack_c = in_PR;
  for (iVar5 = 0; uVar6 = (uint)in_dr0, iVar5 < 5; iVar5 = iVar5 + 1) {
    if (in_FPSCR_SZ == '\0') {
      uStack_10 = 0;
    }
    else {
      uStack_c = 0;
      uStack_10 = uVar6;
    }
    uVar2 = uStack_10;
    if (in_FPSCR_SZ == '\0') {
      ar4[iVar5 * 3 + 3] = uStack_10;
    }
    else {
      *(ulonglong *)(ar4 + iVar5 * 3 + 3) = CONCAT44(uStack_c,uStack_10);
      uStack_10 = uStack_c;
      uVar6 = uVar2;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44(uVar2,uVar6);
      ar4[iVar5 * 3 + 2] = uVar2;
    }
    else {
      uVar7 = CONCAT44(uStack_10,uVar2);
      *(undefined8 *)(ar4 + iVar5 * 3 + 2) = uVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(uVar2,(int)uVar7);
      ar4[iVar5 * 3 + 1] = uVar2;
    }
    else {
      in_dr0 = CONCAT44(uStack_10,uVar2);
      *(undefined8 *)(ar4 + iVar5 * 3 + 1) = in_dr0;
    }
  }
  uVar3 = 0xffffffff;
  (*(code *)PTR_FUN_8c014bd8)(ar4,0xffffffff,ar6,ar7);
  ar4[0x1a] = 0;
  *(undefined1 *)(ar4 + 0x1e) = 1;
  if (in_FPSCR_SZ == '\0') {
    ar4[0x1d] = 0;
    ar4[0x1c] = DAT_8c014bdc;
  }
  else {
    *(ulonglong *)(ar4 + 0x1d) = (ulonglong)uVar6;
    *(ulonglong *)(ar4 + 0x1c) = CONCAT44(PTR_FUN_8c014be0,DAT_8c014bdc);
  }
  (*(code *)PTR_FUN_8c014be0)(ar4,uVar3,ar6,ar7);
  return ar4;
}



/* FUN_8c014be4 @ 8c014be4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c014c44) */
/* WARNING: Removing unreachable block (ram,0x8c014c1e) */
/* WARNING: Removing unreachable block (ram,0x8c014c6a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c014be4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined4 in_fr3;
  double dVar6;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 in_xf4;
  undefined4 in_xf6;
  undefined8 in_xd8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_38 = in_fr4;
  uStack_34 = in_fr5;
  uStack_30 = in_fr6;
  uStack_2c = in_fr7;
  uStack_28 = in_fr8;
  uStack_24 = in_fr9;
  if (in_FPSCR_SZ != '\0') {
    uStack_24 = (undefined4)in_xd8;
    uStack_20 = (undefined4)((ulonglong)in_xd8 >> 0x20);
    uStack_38 = in_fr5;
    uStack_34 = in_xf4;
    uStack_30 = in_fr7;
    uStack_2c = in_xf6;
    uStack_28 = in_fr9;
  }
  iVar2 = ar4;
  uVar3 = ar5;
  iVar1 = (*(code *)PTR_rand_8c014cc8)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(uStack_34,in_fr3);
  }
  else {
    dVar6 = (double)CONCAT44(uStack_30,uStack_34);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c014ccc,(float)iVar1);
  }
  else {
    dVar5 = (double)CONCAT44(PTR_FUN_8c014cd0,DAT_8c014ccc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * fVar4,SUB84(dVar6,0));
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
    dVar6 = dVar6 * (dVar5 / dVar5);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(uStack_38,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(uStack_34,uStack_38);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 4) = (int)((ulonglong)dVar6 >> 0x20);
  }
  else {
    *(double *)(ar4 + 4) = dVar6;
  }
  iVar1 = (*(code *)PTR_rand_8c014cc8)(iVar2,uVar3,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(uStack_2c,SUB84(dVar6,0));
  }
  else {
    dVar6 = (double)CONCAT44(uStack_28,uStack_2c);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c014ccc,(float)iVar1);
  }
  else {
    dVar5 = (double)CONCAT44(PTR_FUN_8c014cd0,DAT_8c014ccc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * fVar4,SUB84(dVar6,0));
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
    dVar6 = dVar6 * (dVar5 / dVar5);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(uStack_30,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(uStack_2c,uStack_30);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 8) = (int)((ulonglong)dVar6 >> 0x20);
  }
  else {
    *(double *)(ar4 + 8) = dVar6;
  }
  iVar2 = (*(code *)PTR_rand_8c014cc8)(iVar2,uVar3,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(uStack_24,SUB84(dVar6,0));
  }
  else {
    dVar6 = (double)CONCAT44(uStack_20,uStack_24);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c014ccc,(float)iVar2);
  }
  else {
    dVar5 = (double)CONCAT44(PTR_FUN_8c014cd0,DAT_8c014ccc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * fVar4,SUB84(dVar6,0));
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
    dVar6 = dVar6 * (dVar5 / dVar5);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(uStack_28,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(uStack_24,uStack_28);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0xc) = (int)((ulonglong)dVar6 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0xc) = dVar6;
  }
  *(undefined4 *)(ar4 + 0x40) = ar5;
  for (iVar2 = 1; iVar2 < 5; iVar2 = iVar2 + 1) {
    iVar1 = iVar2 * 0xc + ar4;
    uVar3 = *(undefined4 *)(ar4 + 8);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(ar4 + 4);
    *(undefined4 *)(iVar1 + 8) = uVar3;
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(ar4 + 0xc);
  }
  uVar3 = (*(code *)PTR_FUN_8c014cd0)(ar4,ar5,ar6,ar7);
  return uVar3;
}



/* FUN_8c014cd4 @ 8c014cd4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c014cd4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c014cec)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* Class_1297f4_m0_014cf0 @ 8c014cf0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1297f4_m0_014cf0(float ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr1;
  float fVar2;
  float fVar3;
  float in_fr5;
  float in_fr4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    in_fr5 = in_fr4;
  }
  (*(code *)PTR_pure_virtual_stub_8c014d4c)(ar4,ar5,ar6,ar7);
  *(short *)((int)ar4 + 0x6c) = *(short *)((int)ar4 + 0x6c) + 1;
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(float *)((int)ar4 + 8);
  }
  uVar1 = 0;
  fVar2 = in_fr5;
  fVar3 = ar4;
  if (in_FPSCR_SZ == '\0') {
    fVar2 = in_fr1;
    fVar3 = in_fr5;
  }
  if (in_FPSCR_PR == '\0' && fVar2 < fVar3) {
    uVar1 = (*(code *)PTR_FUN_8c014d50)(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c014d54 @ 8c014d54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c014d54(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_pure_virtual_stub_8c014d8c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c014d90 @ 8c014d90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c014d90(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 in_dr0;
  undefined8 uVar5;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = in_PR;
  for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
    if (in_FPSCR_SZ == '\0') {
      uStack_10 = 0;
    }
    else {
      uStack_c = 0;
      uStack_10 = (int)in_dr0;
    }
    uVar2 = uStack_10;
    puVar3 = (undefined8 *)(iVar4 * 0xc + ar4 + 0xc);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar3 = uStack_10;
      uVar1 = (int)in_dr0;
    }
    else {
      *puVar3 = CONCAT44(uStack_c,uStack_10);
      uStack_10 = uStack_c;
      uVar1 = uVar2;
    }
    puVar3 = (undefined8 *)(iVar4 * 0xc + ar4 + 8);
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(uVar2,uVar1);
      *(undefined4 *)puVar3 = uVar2;
    }
    else {
      uVar5 = CONCAT44(uStack_10,uVar2);
      *puVar3 = uVar5;
    }
    puVar3 = (undefined8 *)(iVar4 * 0xc + ar4 + 4);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(uVar2,(int)uVar5);
      *(undefined4 *)puVar3 = uVar2;
    }
    else {
      in_dr0 = CONCAT44(uStack_10,uVar2);
      *puVar3 = in_dr0;
    }
  }
  *(undefined4 *)(ar4 + 100) = 0;
  (*(code *)PTR_vec3_clear_8c014e1c)(ar4 + 0x54,ar5,ar6,ar7);
  *(undefined2 *)(ar4 + 0x6c) = 0;
  return 0x6c;
}



/* vec3_clear @ 8c014e20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * vec3_clear(ulonglong *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = 0;
    *(undefined4 *)((int)ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 1) = 0;
  }
  else {
    *ar4 = (ulonglong)in_fr1;
    *(ulonglong *)((int)ar4 + 4) = (ulonglong)in_fr1;
    ar4[1] = (ulonglong)in_fr1;
  }
  return (undefined4 *)((int)ar4 + 4);
}



/* FUN_8c014e38 @ 8c014e38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c014e38(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_xd0;
  undefined4 in_xf4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(in_fr4,*(undefined4 *)(ar4 + 0x54));
    in_xf4 = in_fr5;
    in_fr7 = in_fr6;
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x54);
    dVar3 = (double)CONCAT44(in_xf4,in_fr5);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x54) = fVar2;
    dVar3 = (double)CONCAT44(in_xf4,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    *(undefined8 *)(ar4 + 0x54) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x58);
    dVar3 = (double)CONCAT44(in_fr7,in_xf4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x58) = fVar2;
    dVar3 = (double)CONCAT44(in_fr7,*(undefined4 *)(ar4 + 0x5c));
  }
  else {
    *(undefined8 *)(ar4 + 0x58) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x5c);
    dVar3 = (double)CONCAT44(ar4,in_fr7);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x5c) = fVar2;
  }
  else {
    *(undefined8 *)(ar4 + 0x5c) = in_xd0;
  }
  uVar1 = (*(code *)PTR_FUN_8c014e9c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c014ea0 @ 8c014ea0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c014ea0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 100) = 1;
  return 100;
}



/* FUN_8c014eac @ 8c014eac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c014eac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_00000000;
  undefined1 auStack_18 [20];
  
  (*(code *)PTR_Vec3_ctor_xyz_8c014eec)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c014ef0)(in_stack_00000000,auStack_18,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c014ef4)(auStack_18,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c014ef8 @ 8c014ef8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c014ef8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r14;
  int iVar2;
  undefined1 *puVar3;
  double in_dr0;
  double dVar4;
  float fVar5;
  undefined8 in_dr14;
  double dVar6;
  undefined1 uVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = auStack_4;
  }
  else {
    puVar3 = auStack_8;
  }
  *(undefined4 *)(puVar3 + -4) = unaff_r14;
  *(undefined4 *)(puVar3 + -0xc) = *(undefined4 *)PTR_DAT_8c014f6c;
  *(undefined4 *)(puVar3 + -0xc) = ar5;
  dVar6 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),0x3f800000);
  if (*(int *)(ar4 + 0x68) == 1) {
    for (iVar2 = 0; uVar1 = 5, iVar2 < 5; iVar2 = iVar2 + 1) {
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c014f70,SUB84(in_dr0,0));
      }
      else {
        dVar4 = (double)CONCAT44(_FUN_8c014f74,DAT_8c014f70);
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                                 SUB84(dVar6,0) - (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        dVar6 = dVar6 - dVar4;
      }
      *(undefined4 *)(puVar3 + -8) = *(undefined4 *)(puVar3 + -0xc);
      if (in_FPSCR_PR == '\0') {
        fVar5 = (float)(byte)puVar3[-9] * SUB84(dVar6,0);
        in_dr0 = (double)CONCAT44(fVar5,SUB84(dVar4,0));
        uVar7 = (undefined1)(int)fVar5;
      }
      else {
        in_dr0 = (double)(byte)puVar3[-9] * dVar6;
        uVar7 = (undefined1)(int)in_dr0;
      }
      puVar3[-5] = uVar7;
      *(int *)(puVar3 + -0x10) = iVar2;
      *(undefined4 *)(ar4 + *(int *)(puVar3 + -0x10) * 4 + 0x40) = *(undefined4 *)(puVar3 + -8);
    }
  }
  else {
    uVar1 = 0x40;
    *(undefined4 *)(ar4 + 0x40) = ar5;
  }
  return uVar1;
}



/* FUN_8c014f74 @ 8c014f74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c014f74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x54),*(undefined4 *)(ar4 + 4));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 4);
    dVar2 = *(double *)(ar4 + 0x54);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 4) = fVar1;
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x58),*(undefined4 *)(ar4 + 8));
  }
  else {
    *(undefined8 *)(ar4 + 4) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 8);
    dVar2 = *(double *)(ar4 + 0x58);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 8) = fVar1;
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(ar4 + 0xc));
  }
  else {
    *(undefined8 *)(ar4 + 8) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0xc);
    dVar2 = *(double *)(ar4 + 0x5c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0xc) = fVar1;
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x70),*(undefined4 *)(ar4 + 0x58));
  }
  else {
    *(undefined8 *)(ar4 + 0xc) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x58);
    dVar2 = *(double *)(ar4 + 0x70);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) - (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 - dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x58) = fVar1;
  }
  else {
    *(undefined8 *)(ar4 + 0x58) = in_xd0;
  }
  return ar4 + 0x58;
}



/* FUN_8c014fd0 @ 8c014fd0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c014fd0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint a5;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  a5 = (uint)*(byte *)(ar4 + 0x78);
  iVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c01504c)
                    ((uint)*(ushort *)(ar4 + 0x6c),a5,ar6,ar7);
  if (iVar1 == 0) {
    for (iVar1 = 4; 0 < iVar1; iVar1 = iVar1 + -1) {
      iVar4 = iVar1 * 0xc + ar4;
      iVar3 = (iVar1 + -1) * 0xc + ar4;
      uVar2 = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
      *(undefined4 *)(iVar4 + 8) = uVar2;
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    }
  }
  uVar2 = (*(code *)PTR_FUN_8c015050)(ar4,a5,ar6,ar7);
  return uVar2;
}



/* FUN_8c015054 @ 8c015054 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015054(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(PTR_DAT_8c015090 + 8);
  uStack_c = *(undefined4 *)(PTR_DAT_8c015090 + 0xc);
  iStack_18 = ar4 + 4;
  iStack_14 = ar4 + 0x40;
  uVar1 = (*(code *)PTR_FUN_8c015094)(&iStack_18,1,0x40,ar7);
  return uVar1;
}



/* FUN_8c015098 @ 8c015098 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015098(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(PTR_DAT_8c0150d4 + 8);
  uStack_c = *(undefined4 *)(PTR_DAT_8c0150d4 + 0xc);
  iStack_18 = ar4 + 4;
  iStack_14 = ar4 + 0x40;
  uVar1 = (*(code *)PTR_FUN_8c0150d8)(&iStack_18,4,0x42,ar7);
  return uVar1;
}



/* noop_0150dc @ 8c0150dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0150dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0150e0 @ 8c0150e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0150e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c015168)(PTR_DAT_8c015164,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c015170;
  uVar2 = DAT_8c01516c;
  (*(code *)PTR_global_list_push_8c015174)(uVar1,PTR_Vec3_dtor_8c015170,DAT_8c01516c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c015168)(PTR_DAT_8c015178,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c015170;
  uVar2 = DAT_8c01517c;
  (*(code *)PTR_global_list_push_8c015174)(uVar1,PTR_Vec3_dtor_8c015170,DAT_8c01517c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c015168)(PTR_DAT_8c015180,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c015170;
  uVar2 = DAT_8c015184;
  (*(code *)PTR_global_list_push_8c015174)(uVar1,PTR_Vec3_dtor_8c015170,DAT_8c015184,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c015168)(PTR_DAT_8c015188,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c015170;
  uVar2 = DAT_8c01518c;
  (*(code *)PTR_global_list_push_8c015174)(uVar1,PTR_Vec3_dtor_8c015170,DAT_8c01518c,ar7);
  uVar2 = (*(code *)PTR_FUN_8c015194)(DAT_8c015190,puVar3,uVar2,ar7);
  return uVar2;
}



/* FUN_8c015198 @ 8c015198 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015198(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x10) = ar5;
  return in_r0;
}



/* free_if_nonnull_wrap_0151a0 @ 8c0151a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0151a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c0151cc)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c0151e8 @ 8c0151e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0151e8(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  while( true ) {
    if (*ar4 == DAT_8c0151f8) {
      return 0;
    }
    if ((char)*ar4 == (char)ar5) break;
    ar4 = ar4 + 1;
  }
  return ar4;
}



/* FUN_8c0151fc @ 8c0151fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0151fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_LAB_8c015220)(ar4,0x17,ar6,ar7);
  return uVar1;
}



/* FUN_8c015224 @ 8c015224 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c015224(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = PTR_DAT_8c015240;
  (*(code *)PTR_FUN_8c015244)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* Class_129920_m0_015248 @ 8c015248 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129920_m0_015248(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 4) = ar5;
  return in_r0;
}



/* s_Failed_to_set_texture_s_015252 @ 8c015250 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_to_set_texture_s_015252(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_108 [260];
  
  iVar1 = (*(code *)PTR_FUN_8c0152fc)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  if (iVar1 == -1) {
    (*(code *)PTR_FUN_8c015304)(auStack_108,ar5,ar6,ar7);
    (*(code *)PTR_report_error_message_8c015308)
              (auStack_108,PTR_s_Failed_to_load_texture___8c015300 + 0x45,1,2);
    uVar2 = 1;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c01530c)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
    if (iVar1 == -1) {
      (*(code *)PTR_FUN_8c015304)(auStack_108,ar5,ar6,ar7);
      (*(code *)PTR_report_error_message_8c015308)
                (auStack_108,PTR_s_Failed_to_load_texture___8c015300 + 0x45,1,2);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* s_Failed_s_015312 @ 8c015310 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint s_Failed_s_015312(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 auStack_108 [260];
  
  iVar1 = (*(code *)PTR_FUN_8c015378)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  if (iVar1 == -1) {
    (*(code *)PTR_FUN_8c015380)(auStack_108,ar5,ar6,ar7);
    (*(code *)PTR_report_error_message_8c015388)
              (auStack_108,PTR_s_Failed_to_load_texture___8c01537c + DAT_8c015384,1,2);
  }
  return (uint)(iVar1 == -1);
}



/* FUN_8c01538c @ 8c01538c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01538c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0153ac)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0153b0 @ 8c0153b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0153b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = 0;
  return 0;
}



/* FUN_8c0153b8 @ 8c0153b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0153b8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0153dc)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c0153e0;
  ar4[1] = ar4 + 2;
  return ar4;
}



/* free_if_nonnull_wrap_0153e4 @ 8c0153e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 *
free_if_nonnull_wrap_0153e4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = PTR_DAT_8c015414, 0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c015418)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c01541c @ 8c01541c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01541c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  **(undefined4 **)(ar4 + 4) = ar5;
  iVar1 = *(int *)(ar4 + 4);
  *(undefined4 *)(iVar1 + 4) = ar6;
  return iVar1;
}



/* FUN_8c015428 @ 8c015428 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c015428(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c015464;
    a5 = 0;
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c015468)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c01546c)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c015470 @ 8c015470 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015470(int ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000004;
  
  (*(code *)PTR_FUN_8c0154b8)(ar4 + 0x10,ar5,ar6 | DAT_8c0154b4,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0154c0)(ar4 + 0x3c,ar4 + 0x10,in_stack_00000004,DAT_8c0154bc);
  return uVar1;
}



/* FUN_8c0154c4 @ 8c0154c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0154c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0154e4)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0154e8)(0,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0154ec @ 8c0154ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0154ec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c015504)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c015508 @ 8c015508 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015508(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  return in_r0;
}



/* FUN_8c015510 @ 8c015510 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015510(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}



/* FUN_8c015518 @ 8c015518 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015518(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  return 0;
}



/* FUN_8c015520 @ 8c015520 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int * FUN_8c015520(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (int)PTR_DAT_8c015540;
  (**(code **)(*ar4 + 0xc))(ar4,ar5,ar6,ar7);
  return ar4;
}



/* free_if_nonnull_wrap_015544 @ 8c015544 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 *
free_if_nonnull_wrap_015544(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = PTR_DAT_8c015574, 0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c015578)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* Class_1298b8_m1_01557c @ 8c01557c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m1_01557c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  return 0;
}



/* Class_1298b8_m2_015588 @ 8c015588 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m2_015588(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0155d4)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0155d8)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0155dc)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0155e0)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0155e4)(1,ar5,ar6,ar7);
  return uVar1;
}



/* Class_1298b8_m3_0155e8 @ 8c0155e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m3_0155e8(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *a6;
  float fVar2;
  double dVar3;
  int a7;
  int a6_00;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  a6 = ar6;
  (*(code *)PTR_FUN_8c015680)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c015684)(0,ar5,a6,ar7);
  (*(code *)PTR_FUN_8c015688)(0,ar5,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c01568c,ar6[2]);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c015690,DAT_8c01568c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015690,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c015694,DAT_8c015690);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a7 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c01568c,ar6[1]);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c015690,DAT_8c01568c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015690,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c015694,DAT_8c015690);
  }
  if (in_FPSCR_PR == '\0') {
    a6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a6_00 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c01568c,*ar6);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c015690,DAT_8c01568c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015690,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c015694,DAT_8c015690);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  (*(code *)PTR_FUN_8c015694)(0,a5,a6_00,a7);
  (*(code *)PTR_FUN_8c015698)(*(undefined4 *)(ar4 + 4),a5,a6_00,a7);
  uVar1 = (*(code *)PTR_FUN_8c01569c)(1,a5,a6_00,a7);
  return uVar1;
}



/* Class_1298b8_m4_0156a0 @ 8c0156a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m4_0156a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c015708)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c01570c)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c015710)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c015714)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c015718)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c01571c)(1,ar5,ar6,ar7);
  return uVar1;
}



/* Class_1298b8_m5_015720 @ 8c015720 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m5_015720(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *a6;
  float fVar2;
  double dVar3;
  int a7;
  int a6_00;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  a6 = ar6;
  (*(code *)PTR_FUN_8c0157d4)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0157d8)(0,ar5,a6,ar7);
  (*(code *)PTR_FUN_8c0157dc)(0,ar5,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0157e0,ar6[2]);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0157e4,DAT_8c0157e0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0157e4,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0157e8,DAT_8c0157e4);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a7 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0157e0,ar6[1]);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0157e4,DAT_8c0157e0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0157e4,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0157e8,DAT_8c0157e4);
  }
  if (in_FPSCR_PR == '\0') {
    a6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a6_00 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0157e0,*ar6);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0157e4,DAT_8c0157e0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0157e4,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0157e8,DAT_8c0157e4);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  (*(code *)PTR_FUN_8c0157e8)(0,a5,a6_00,a7);
  (*(code *)PTR_FUN_8c0157ec)(0,a5,a6_00,a7);
  (*(code *)PTR_FUN_8c0157f0)(*(undefined4 *)(ar4 + 4),a5,a6_00,a7);
  uVar1 = (*(code *)PTR_FUN_8c0157f4)(1,a5,a6_00,a7);
  return uVar1;
}



/* Class_1298b8_m6_0157f8 @ 8c0157f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m6_0157f8(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *a5;
  float fVar2;
  double dVar3;
  int a7;
  int a6;
  int a5_00;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  a5 = ar5;
  (*(code *)PTR_FUN_8c015874)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c015878)(0,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c01587c,ar5[2]);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c015880,DAT_8c01587c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015880,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c015884,DAT_8c015880);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a7 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c01587c,ar5[1]);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c015880,DAT_8c01587c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015880,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c015884,DAT_8c015880);
  }
  if (in_FPSCR_PR == '\0') {
    a6 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a6 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c01587c,*ar5);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c015880,DAT_8c01587c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015880,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c015884,DAT_8c015880);
  }
  if (in_FPSCR_PR == '\0') {
    a5_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5_00 = (int)(dVar3 / dVar3);
  }
  (*(code *)PTR_FUN_8c015884)(0,a5_00,a6,a7);
  (*(code *)PTR_FUN_8c015888)(*(undefined4 *)(ar4 + 4),a5_00,a6,a7);
  uVar1 = (*(code *)PTR_FUN_8c01588c)(1,a5_00,a6,a7);
  return uVar1;
}



/* Class_1298b8_m7_015890 @ 8c015890 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m7_015890(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *a5;
  float fVar2;
  double dVar3;
  int a7;
  int a6;
  int a5_00;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  a5 = ar5;
  (*(code *)PTR_FUN_8c015928)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c01592c)(0,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015930,ar5[2]);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c015934,DAT_8c015930);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015934,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c015938,DAT_8c015934);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a7 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015930,ar5[1]);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c015934,DAT_8c015930);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015934,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c015938,DAT_8c015934);
  }
  if (in_FPSCR_PR == '\0') {
    a6 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a6 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015930,*ar5);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c015934,DAT_8c015930);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015934,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c015938,DAT_8c015934);
  }
  if (in_FPSCR_PR == '\0') {
    a5_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5_00 = (int)(dVar3 / dVar3);
  }
  (*(code *)PTR_FUN_8c015938)(0,a5_00,a6,a7);
  (*(code *)PTR_FUN_8c01593c)(0,a5_00,a6,a7);
  (*(code *)PTR_FUN_8c015940)(*(undefined4 *)(ar4 + 4),a5_00,a6,a7);
  uVar1 = (*(code *)PTR_FUN_8c015944)(1,a5_00,a6,a7);
  return uVar1;
}



/* Class_1298b8_m8_015948 @ 8c015948 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m8_015948(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c015994)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c015998)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c01599c)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0159a0)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0159a4)(1,ar5,ar6,ar7);
  return uVar1;
}



/* Class_1298b8_m9_0159a8 @ 8c0159a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m9_0159a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0159c8)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0159cc)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  return uVar1;
}



/* Class_1298b8_m10_0159d0 @ 8c0159d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m10_0159d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0159e8)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  return uVar1;
}



/* Class_1298b8_m11_0159ec @ 8c0159ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m11_0159ec(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *a6;
  float fVar2;
  double dVar3;
  int a7;
  int a6_00;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  a6 = ar6;
  (*(code *)PTR_FUN_8c015a98)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c015a9c)(0,ar5,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015aa0,ar6[2]);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c015aa4,DAT_8c015aa0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015aa4,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c015aa8,DAT_8c015aa4);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a7 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015aa0,ar6[1]);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c015aa4,DAT_8c015aa0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015aa4,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c015aa8,DAT_8c015aa4);
  }
  if (in_FPSCR_PR == '\0') {
    a6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a6_00 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015aa0,*ar6);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c015aa4,DAT_8c015aa0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c015aa4,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c015aa8,DAT_8c015aa4);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  (*(code *)PTR_FUN_8c015aa8)(0,a5,a6_00,a7);
  (*(code *)PTR_FUN_8c015aac)(0,a5,a6_00,a7);
  (*(code *)PTR_FUN_8c015ab0)(*(undefined4 *)(ar4 + 4),a5,a6_00,a7);
  uVar1 = (*(code *)PTR_FUN_8c015ab4)(1,a5,a6_00,a7);
  return uVar1;
}



/* FUN_8c015ab8 @ 8c015ab8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015ab8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c015ad0)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c015ad4 @ 8c015ad4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015ad4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  return in_r0;
}



/* FUN_8c015adc @ 8c015adc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015adc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c015af4)(*ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c015af8 @ 8c015af8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015af8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c015b10)(*ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c015b14 @ 8c015b14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015b14(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c015b2c)(*ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c015b30 @ 8c015b30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015b30(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c015b48)(*ar4,ar5,ar6,ar7);
  return uVar1;
}



/* deref_u32 @ 8c015b4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 deref_u32(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}



/* FUN_8c015b54 @ 8c015b54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015b54(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_deref_u32_8c015b84)(ar5,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c015b88)(*ar4,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c015b8c @ 8c015b8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015b8c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  return 0;
}



/* FUN_8c015b94 @ 8c015b94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015b94(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c015bac)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c015bb0 @ 8c015bb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015bb0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  return in_r0;
}



/* FUN_8c015bb8 @ 8c015bb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015bb8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}



/* FUN_8c015bc0 @ 8c015bc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015bc0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  return 0;
}



/* FUN_8c015bc8 @ 8c015bc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015bc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c015be0)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c015be4 @ 8c015be4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015be4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  return in_r0;
}



/* FUN_8c015bec @ 8c015bec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015bec(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  return 0;
}



/* free_if_nonnull_wrap_015bf4 @ 8c015bf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 *
free_if_nonnull_wrap_015bf4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = PTR_DAT_8c015c24, 0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c015c28)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c015c2c @ 8c015c2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c015c2c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = PTR_DAT_8c015c50;
  (*(code *)PTR_FUN_8c015c54)(ar4,0,ar6,ar7);
  return ar4;
}



/* FUN_8c015c58 @ 8c015c58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c015c58(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = PTR_DAT_8c015c8c;
  (*(code *)PTR_FUN_8c015c90)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* free_if_nonnull_wrap_015c94 @ 8c015c94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 *
free_if_nonnull_wrap_015c94(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = PTR_DAT_8c015cc4, 0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c015cc8)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c015ccc @ 8c015ccc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015ccc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x1c) = ar5;
  return in_r0;
}



/* FUN_8c015cd4 @ 8c015cd4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015cd4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x20) = ar5;
  return in_r0;
}



/* s_Can_t_Find_File_s_015ce0 @ 8c015cdc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Can_t_Find_File_s_015ce0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_10c [260];
  
  uVar2 = 0;
  while( true ) {
    if (*(uint *)(*(int *)(ar4 + 0x1c) + 4) <= uVar2) {
      return 1;
    }
    iVar1 = (*(code *)PTR_FUN_8c015d5c)(*(undefined4 *)(ar4 + 0x1c),ar5,ar6,ar7);
    if (iVar1 == -1) break;
    uVar2 = uVar2 + 1;
  }
  (*(code *)PTR_FUN_8c015d68)(auStack_10c,ar5,ar6,ar7);
  (*(code *)PTR_report_error_message_8c015d70)
            (auStack_10c,PTR_s_Failed_to_load_texture___8c015d60 + DAT_8c015d6c,1,2);
  return 0;
}



/* FUN_8c015d74 @ 8c015d74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015d74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr4;
  undefined4 in_fr7;
  undefined4 in_xf4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 4) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)(ar4 + 8) = (int)in_dr4;
  }
  else {
    *(ulonglong *)(ar4 + 4) = CONCAT44(in_xf4,(int)in_dr4);
    *(ulonglong *)(ar4 + 8) = CONCAT44(in_fr7,in_xf4);
  }
  uVar1 = (*(code *)PTR_FUN_8c015dbc)
                    (ar4 + 4,*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28),ar7);
  return uVar1;
}



/* FUN_8c015dc0 @ 8c015dc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015dc0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 8) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 4) = (ulonglong)in_fr1;
    *(ulonglong *)(ar4 + 8) = (ulonglong)in_fr1;
    *(ulonglong *)(ar4 + 0xc) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(ar4 + 0x18) = ar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x10) = in_fr4;
    *(undefined4 *)(ar4 + 0x14) = in_fr5;
  }
  else {
    *(undefined8 *)(ar4 + 0x10) = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)(ar4 + 0x14) = in_xd4;
  }
  *(undefined4 *)(ar4 + 0x1c) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x24) = 0;
  *(undefined4 *)(ar4 + 0x28) = 1;
  return 1;
}



/* s_Err_wrap_015dfc @ 8c015dfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Err_wrap_015dfc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Error_015f22_8c015e14)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c015e18 @ 8c015e18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015e18(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c015e38)(*(undefined4 *)(ar4 + 0x1c),ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c015e3c)(0,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c015e40 @ 8c015e40 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c015e40(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_fr1;
  char in_FPSCR_SZ;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uVar2 = DAT_8c015f08;
  if (in_FPSCR_SZ == '\0') {
    uVar2 = in_fr1;
  }
  uStack_5c = DAT_8c015f08;
  uStack_64 = DAT_8c015f04;
  uStack_54 = uVar2;
  if (in_FPSCR_SZ == '\0') {
    uStack_54 = 0;
  }
  uStack_50 = 0xffffffff;
  uVar1 = DAT_8c015f08;
  if (in_FPSCR_SZ == '\0') {
    uVar1 = uVar2;
  }
  uStack_44 = DAT_8c015f08;
  uStack_48 = _DAT_8c015f0c;
  uStack_4c = DAT_8c015f04;
  uStack_3c = uVar1;
  uStack_40 = uVar1;
  if (in_FPSCR_SZ == '\0') {
    uStack_40 = 0;
    uStack_3c = 0x3f800000;
  }
  uStack_38 = 0xffffffff;
  uVar2 = DAT_8c015f08;
  if (in_FPSCR_SZ == '\0') {
    uVar2 = uVar1;
  }
  uStack_2c = DAT_8c015f08;
  uStack_30 = DAT_8c015f04;
  uStack_34 = _DAT_8c015f0c;
  uStack_24 = uVar2;
  uStack_28 = uVar2;
  if (in_FPSCR_SZ == '\0') {
    uStack_28 = 0x3f800000;
    uStack_24 = 0;
  }
  uStack_20 = 0xffffffff;
  uStack_c = DAT_8c015f08;
  if (in_FPSCR_SZ == '\0') {
    uStack_c = uVar2;
  }
  uStack_14 = DAT_8c015f08;
  uStack_1c = _DAT_8c015f0c;
  if (in_FPSCR_SZ == '\0') {
    uStack_c = 0x3f800000;
  }
  uStack_8 = 0xffffffff;
  uStack_60 = uStack_64;
  uStack_58 = uStack_54;
  uStack_18 = uStack_1c;
  uStack_10 = uStack_c;
  uVar2 = (*(code *)PTR_FUN_8c015f14)(&uStack_64,4,_DAT_8c015f10,0);
  return uVar2;
}



/* s_Error_015f22 @ 8c015f18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Error_015f22(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 a5;
  int iVar2;
  int a5_00;
  undefined4 uVar3;
  undefined4 a7;
  
  sVar1 = **(short **)(ar4 + 0x20);
  a5 = (*(code *)PTR_malloc_thunk_8c015fc0)(DAT_8c015fbc,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c015fc8)(ar4 + 0x2c,a5,DAT_8c015fc4,(int)sVar1);
  a5_00 = ar4 + 0x2c;
  uVar3 = DAT_8c015fd0;
  a7 = DAT_8c015fcc;
  (*(code *)PTR_FUN_8c015fd4)(**(undefined4 **)(ar4 + 0x1c),a5_00,DAT_8c015fd0,DAT_8c015fcc);
  iVar2 = (*(code *)PTR_FUN_8c015fd8)(*(undefined4 *)(ar4 + 0x1c),a5_00,uVar3,a7);
  if (iVar2 == -1) {
    a7 = 0xd;
    uVar3 = 0;
    a5_00 = 0;
    (*(code *)PTR_noop_102824_8c015fe4)
              (PTR_s_Failed_to_load_texture___8c015fdc + DAT_8c015fe0,0,0,0xd);
  }
  (*(code *)PTR_FUN_8c015fe8)((int)**(short **)(ar4 + 0x20),a5_00,uVar3,a7);
  uVar3 = (*(code *)PTR_FUN_8c015fec)(a5,a5_00,uVar3,a7);
  return uVar3;
}



/* FUN_8c015ff0 @ 8c015ff0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c015ff0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c01600c)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c016010;
  return ar4;
}



/* FUN_8c016014 @ 8c016014 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016014(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_xf4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 4) = in_fr4;
    *(undefined4 *)(ar4 + 8) = in_fr5;
    *(undefined4 *)(ar4 + 0xc) = in_fr6;
  }
  else {
    *(ulonglong *)(ar4 + 4) = CONCAT44(in_xf4,in_fr5);
    *(ulonglong *)(ar4 + 8) = CONCAT44(in_fr7,in_xf4);
    *(ulonglong *)(ar4 + 0xc) = CONCAT44(in_fr6,in_fr7);
  }
  uVar1 = (*(code *)PTR_FUN_8c016064)
                    (ar4 + 4,*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28),ar7);
  return uVar1;
}



/* FUN_8c016068 @ 8c016068 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016068(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_xf4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 4) = in_fr4;
    *(undefined4 *)(ar4 + 8) = in_fr5;
    *(undefined4 *)(ar4 + 0xc) = in_fr6;
  }
  else {
    *(ulonglong *)(ar4 + 4) = CONCAT44(in_xf4,in_fr5);
    *(ulonglong *)(ar4 + 8) = CONCAT44(in_fr7,in_xf4);
    *(ulonglong *)(ar4 + 0xc) = CONCAT44(ar5,in_fr7);
  }
  *(undefined4 *)(ar4 + 0x24) = ar5;
  uVar1 = (*(code *)PTR_FUN_8c0160c0)
                    (ar4 + 4,*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28),ar7);
  return uVar1;
}



/* s_C3DRenderPly_SetMem_0160d0 @ 8c0160c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_C3DRenderPly_SetMem_0160d0(int ar4,int ar5,int ar6,short *ar7)

{
  int a5;
  undefined8 *puVar1;
  undefined8 *puVar2;
  int a5_00;
  undefined4 a7;
  uint uVar3;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  
  *(undefined4 *)(ar4 + 0x10) = 4;
  for (uVar3 = 0; uVar3 < *(uint *)(ar4 + 0x10); uVar3 = uVar3 + 1) {
    puVar1 = (undefined8 *)(uVar3 * 0xc + *(int *)(ar4 + 4));
    puVar2 = (undefined8 *)(ar5 + uVar3 * 0x10);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = *(undefined4 *)puVar2;
    }
    else {
      *puVar1 = *puVar2;
    }
    puVar1 = (undefined8 *)(uVar3 * 0xc + *(int *)(ar4 + 4) + 4);
    puVar2 = (undefined8 *)(ar5 + uVar3 * 0x10 + 4);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = *(undefined4 *)puVar2;
    }
    else {
      *puVar1 = *puVar2;
    }
    puVar1 = (undefined8 *)(uVar3 * 0xc + *(int *)(ar4 + 4) + 8);
    puVar2 = (undefined8 *)(ar5 + uVar3 * 0x10 + 8);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = *(undefined4 *)puVar2;
    }
    else {
      *puVar1 = *puVar2;
    }
    *(undefined4 *)(uVar3 * 4 + *(int *)(ar4 + 8)) = *(undefined4 *)(uVar3 * 4 + ar6);
  }
  *(undefined4 *)(DAT_8c016274 + ar4) = 1;
  **(undefined2 **)(ar4 + 0xc) = 0;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 2) = 0;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 4) = 0;
  *(short *)(*(int *)(ar4 + 0xc) + 6) = (short)DAT_8c016278;
  *(short *)(*(int *)(ar4 + 0xc) + 8) = (short)DAT_8c016278;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 10) = 0;
  *(short *)(*(int *)(ar4 + 0xc) + 0xc) = (short)DAT_8c016278;
  *(short *)(*(int *)(ar4 + 0xc) + 0xe) = (short)DAT_8c016278;
  a5 = (*(code *)PTR_FUN_8c01627c)((int)*ar7 * (int)ar7[1] * in_stack_00000004,ar5,ar6,ar7);
  if (a5 == 0) {
    (*(code *)PTR_report_error_message_8c01628c)
              (PTR_s_Failed_to_load_texture___8c016280 + DAT_8c016288,
               PTR_s_Failed_to_load_texture___8c016280 + DAT_8c016284,1,2);
  }
  (*(code *)PTR_FUN_8c016298)(ar4 + DAT_8c016294,a5,DAT_8c016290,(int)*ar7);
  a5_00 = ar4 + DAT_8c016294;
  a7 = DAT_8c01629c;
  (*(code *)PTR_FUN_8c0162a4)
            (*(undefined4 *)(DAT_8c0162a0 + ar4),a5_00,in_stack_00000000,DAT_8c01629c);
  (*(code *)PTR_FUN_8c0162a8)(ar4 + DAT_8c0162a0,a5_00,in_stack_00000000,a7);
  (*(code *)PTR_FUN_8c0162ac)((int)*ar7,a5_00,in_stack_00000000,a7);
  (*(code *)PTR_FUN_8c0162b0)(a5,a5_00,in_stack_00000000,a7);
  *(uint *)(DAT_8c0162b4 + ar4) = *(uint *)(DAT_8c0162b4 + ar4) | DAT_8c0162b8;
  *(uint *)(DAT_8c0162b4 + ar4) = *(uint *)(DAT_8c0162b4 + ar4) | 0x20;
  return 1;
}



/* Class_129808_m10_0162bc @ 8c0162bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129808_m10_0162bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0162ec)(ar4 + DAT_8c0162e8,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0162f4)
                    (ar4 + 4,*(undefined4 *)(ar4 + 0x10),*(undefined4 *)(DAT_8c0162f0 + ar4),ar7);
  return uVar1;
}



/* FUN_8c0162f8 @ 8c0162f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0162f8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[4] = 0;
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[4] = 0;
  return ar4;
}



/* FUN_8c016318 @ 8c016318 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016318(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  ar4[1] = ar6;
  ar4[3] = ar7;
  return in_r0;
}



/* FUN_8c016324 @ 8c016324 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c016324(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  *(undefined4 *)(ar4 + 8) = ar5;
  uVar1 = DAT_8c01633c;
  *(uint *)(ar4 + 0x10) = *(uint *)(ar4 + 0x10) | DAT_8c01633c;
  return uVar1;
}



/* FUN_8c016340 @ 8c016340 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016340(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c016368)
                    (ar4,*(undefined4 *)(ar4 + 0xc),*(undefined4 *)(ar4 + 0x10),ar7);
  return uVar1;
}



/* FUN_8c01636c @ 8c01636c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01636c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r13;
  int iVar2;
  undefined4 unaff_r14;
  undefined8 *puVar3;
  undefined4 in_fr1;
  double dVar4;
  double in_dr4;
  float fVar5;
  undefined4 in_fr7;
  undefined4 in_fr6;
  float fVar6;
  undefined8 in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar3 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar3 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar3 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar3 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar3 + -0xc) = in_PR;
  fVar5 = (float)((ulonglong)in_dr4 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar3 + -0x30) = in_fr6;
  }
  else {
    *(ulonglong *)((int)puVar3 + -0x30) = CONCAT44(in_fr6,in_fr7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)*ar4,in_fr1);
  }
  else {
    dVar4 = *(double *)*ar4;
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar5,SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + in_dr4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x2c) = (int)((ulonglong)dVar4 >> 0x20);
  }
  else {
    *(double *)((int)puVar3 + -0x2c) = dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(*ar4 + 4),SUB84(dVar4,0));
  }
  else {
    dVar4 = *(double *)(*ar4 + 4);
  }
  fVar6 = SUB84(in_dr4,0);
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + in_dr4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x28) = (int)((ulonglong)dVar4 >> 0x20);
  }
  else {
    *(double *)((int)puVar3 + -0x28) = dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(*ar4 + 8),SUB84(dVar4,0));
  }
  else {
    dVar4 = *(double *)(*ar4 + 8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar5,SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + in_dr4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x24) = (int)((ulonglong)dVar4 >> 0x20);
  }
  else {
    *(double *)((int)puVar3 + -0x24) = dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(*ar4 + 0xc),SUB84(dVar4,0));
  }
  else {
    dVar4 = *(double *)(*ar4 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + in_dr4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x20) = (int)((ulonglong)dVar4 >> 0x20);
  }
  else {
    *(double *)((int)puVar3 + -0x20) = dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(*ar4 + 0x10),SUB84(dVar4,0));
  }
  else {
    dVar4 = *(double *)(*ar4 + 0x10);
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar5,SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + in_dr4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x1c) = (int)((ulonglong)dVar4 >> 0x20);
  }
  else {
    *(double *)((int)puVar3 + -0x1c) = dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(*ar4 + 0x14),SUB84(dVar4,0));
  }
  else {
    dVar4 = *(double *)(*ar4 + 0x14);
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + in_dr4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x18) = (int)((ulonglong)dVar4 >> 0x20);
  }
  else {
    *(double *)((int)puVar3 + -0x18) = dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(*ar4 + 0x18),SUB84(dVar4,0));
  }
  else {
    dVar4 = *(double *)(*ar4 + 0x18);
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar5,SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + in_dr4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x14) = (int)((ulonglong)dVar4 >> 0x20);
  }
  else {
    *(double *)((int)puVar3 + -0x14) = dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(*ar4 + 0x1c),SUB84(dVar4,0));
  }
  else {
    dVar4 = *(double *)(*ar4 + 0x1c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + in_dr4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x10) = (int)((ulonglong)dVar4 >> 0x20);
  }
  else {
    *(double *)((int)puVar3 + -0x10) = dVar4;
  }
  iVar2 = *ar4;
  *ar4 = (int)((int)puVar3 + -0x2c);
  uVar1 = (*(code *)PTR_FUN_8c01640c)(ar4,ar4[3],ar4[4],ar7);
  *ar4 = iVar2;
  return uVar1;
}



/* FUN_8c016410 @ 8c016410 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016410(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c016428)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c01642c @ 8c01642c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01642c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c01645c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c016460)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c016464 @ 8c016464 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016464(int *ar4,undefined4 *ar5,undefined4 *ar6,int ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  ar4[4] = ar7;
  if (ar4[4] == 1) {
    puVar2 = (undefined4 *)*ar4;
    uVar1 = ar5[1];
    *puVar2 = *ar5;
    puVar2[1] = uVar1;
    puVar2[2] = ar5[2];
    uVar1 = *ar6;
    *(undefined4 *)ar4[1] = uVar1;
    return uVar1;
  }
  if (ar4[4] == 2) {
    puVar2 = (undefined4 *)*ar4;
    uVar1 = ar5[1];
    *puVar2 = *ar5;
    puVar2[1] = uVar1;
    puVar2[2] = ar5[2];
    iVar3 = *ar4;
    uVar1 = ar5[4];
    *(undefined4 *)(iVar3 + 0xc) = ar5[3];
    *(undefined4 *)(iVar3 + 0x10) = uVar1;
    *(undefined4 *)(iVar3 + 0x14) = ar5[5];
    *(undefined4 *)ar4[1] = *ar6;
    uVar1 = ar6[1];
    *(undefined4 *)(ar4[1] + 4) = uVar1;
    return uVar1;
  }
  *ar4 = (int)ar5;
  ar4[1] = (int)ar6;
  return ar4[4];
}



/* FUN_8c0164c8 @ 8c0164c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0164c8(int ar4,undefined2 *ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  
  if (ar6 == 1) {
    puVar2 = *(undefined2 **)(ar4 + 8);
    *puVar2 = *ar5;
    sVar1 = ar5[1];
    puVar2[1] = sVar1;
    return (int)sVar1;
  }
  if (ar6 == 2) {
    puVar2 = *(undefined2 **)(ar4 + 8);
    *puVar2 = *ar5;
    puVar2[1] = ar5[1];
    iVar3 = *(int *)(ar4 + 8);
    *(undefined2 *)(iVar3 + 4) = ar5[2];
    sVar1 = ar5[3];
    *(short *)(iVar3 + 6) = sVar1;
    return (int)sVar1;
  }
  *(undefined2 **)(ar4 + 8) = ar5;
  return ar6;
}



/* FUN_8c016504 @ 8c016504 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016504(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c016520)
                    (ar4,*(undefined4 *)(ar4 + 0x10),*(undefined4 *)(ar4 + 0x14),ar7);
  return uVar1;
}



/* FUN_8c016524 @ 8c016524 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016524(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c016540)
                    (ar4,*(undefined4 *)(ar4 + 0x10),*(undefined4 *)(ar4 + 0x14),ar7);
  return uVar1;
}



/* FUN_8c016544 @ 8c016544 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016544(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = ar5;
  (*(code *)PTR_FUN_8c016578)(*(undefined4 *)(ar4 + 0x40),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c01657c)(ar5,uVar1,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c016580)
                    (ar4,*(undefined4 *)(ar4 + 0x10),*(undefined4 *)(ar4 + 0x14),ar7);
  return uVar1;
}



/* FUN_8c016584 @ 8c016584 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016584(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    ar4[8] = 0;
    ar4[7] = 0;
    ar4[6] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 8) = (ulonglong)in_fr1;
    *(ulonglong *)(ar4 + 7) = (ulonglong)in_fr1;
    *(ulonglong *)(ar4 + 6) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[0xb] = 0;
    ar4[9] = 0;
    ar4[10] = DAT_8c016650;
  }
  else {
    *(ulonglong *)(ar4 + 0xb) = (ulonglong)in_fr1;
    *(ulonglong *)(ar4 + 9) = (ulonglong)in_fr1;
    *(ulonglong *)(ar4 + 10) = CONCAT44(PTR_FUN_8c016654,DAT_8c016650);
  }
  ar4[0xd] = -1;
  ar4[0xc] = -1;
  *(undefined2 *)((int)ar4 + 0x3e) = 0;
  *(undefined2 *)(ar4 + 0xf) = 0;
  *(undefined2 *)((int)ar4 + 0x3a) = 0;
  *(undefined2 *)(ar4 + 0xe) = 0;
  *ar4 = (int)(ar4 + 6);
  ar4[1] = (int)(ar4 + 0xc);
  ar4[2] = (int)(ar4 + 0xe);
  ar4[4] = 2;
  uVar1 = (*(code *)PTR_FUN_8c016654)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c016658 @ 8c016658 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016658(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x14) = 0;
  return 0;
}



/* free_if_nonnull_wrap_016660 @ 8c016660 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_016660(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c01668c)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c016690 @ 8c016690 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016690(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0166b0)(ar4,0,0,ar7);
  return uVar1;
}



/* Class_129808_m6_0166b4 @ 8c0166b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129808_m6_0166b4(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *a5;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int iVar2;
  undefined8 *puVar3;
  undefined8 in_dr12;
  undefined8 in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar3 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar3 = (undefined8 *)auStack_20;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar3 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar3 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar3 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar3 + -0x10) = in_PR;
  *(int *)((int)puVar3 + -0x58) = ar6;
  iVar2 = ar5;
  (*(code *)PTR_FUN_8c016778)((undefined1 *)((int)puVar3 + -0x54),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c01677c)(ar4,iVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c016780)
            ((undefined1 *)((int)puVar3 + -0x54),*(undefined4 *)((int)puVar3 + -0x58),ar6,ar7);
  for (iVar2 = 0; *(char *)(iVar2 + ar5) != '\0'; iVar2 = iVar2 + 1) {
    (*(code *)PTR_FUN_8c016784)
              (ar4,(int)*(char *)(iVar2 + ar5),(undefined1 *)((int)puVar3 + -0x40),ar7);
    (*(code *)PTR_FUN_8c016788)(ar4,iVar2,(undefined1 *)((int)puVar3 + -0x30),ar7);
    ar7 = 4;
    ar6 = ar4 + 0x1c;
    (*(code *)PTR_FUN_8c01678c)
              ((undefined1 *)((int)puVar3 + -0x54),(undefined1 *)((int)puVar3 + -0x30),ar6,4);
    a5 = (undefined1 *)((int)puVar3 + -0x40);
    (*(code *)PTR_FUN_8c016790)((undefined1 *)((int)puVar3 + -0x54),a5,ar6,ar7);
    (*(code *)PTR_FUN_8c016794)((undefined1 *)((int)puVar3 + -0x54),a5,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_free_if_nonnull_wrap_0151a0_8c016798)
                    ((undefined1 *)((int)puVar3 + -0x54),0xffffffff,ar6,ar7);
  return uVar1;
}



/* FUN_8c01679c @ 8c01679c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01679c(int ar4,undefined4 ar5,short *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  short *a6;
  int iVar2;
  
  iVar2 = (char)ar5 + -0x20;
  a6 = ar6;
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c016884)(iVar2,0x10,ar6,ar7);
  *ar6 = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c016888)(iVar2,0x10,a6,ar7);
  ar6[1] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x18) + (short)*(undefined4 *)(ar4 + 0x18);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c016884)(iVar2,0x10,a6,ar7);
  ar6[2] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c016888)(iVar2,0x10,a6,ar7);
  ar6[3] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x18);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c016884)(iVar2,0x10,a6,ar7);
  ar6[4] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14) + (short)*(undefined4 *)(ar4 + 0x14);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c016888)(iVar2,0x10,a6,ar7);
  ar6[5] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x18);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c016884)(iVar2,0x10,a6,ar7);
  ar6[6] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14) + (short)*(undefined4 *)(ar4 + 0x14);
  iVar2 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c016888)(iVar2,0x10,a6,ar7);
  iVar2 = iVar2 * *(int *)(ar4 + 0x18) + *(int *)(ar4 + 0x18);
  ar6[7] = (short)iVar2;
  return iVar2;
}



/* FUN_8c01688c @ 8c01688c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01688c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0168ac)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0168b0)(*(undefined4 *)(ar4 + 4),*(undefined4 *)(ar4 + 8),ar6,ar7);
  return uVar1;
}



/* FUN_8c0168b4 @ 8c0168b4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0168fa) */
/* WARNING: Removing unreachable block (ram,0x8c0168b8) */
/* WARNING: Removing unreachable block (ram,0x8c0168de) */
/* WARNING: Removing unreachable block (ram,0x8c016920) */
/* WARNING: Unknown calling convention */

int FUN_8c0168b4(int ar4,int ar5,float *ar6,undefined4 ar7)

{
  int iVar1;
  float fVar2;
  double dVar3;
  float in_fr5;
  float in_fr4;
  undefined4 in_fr7;
  float in_fr6;
  undefined8 in_xd0;
  undefined8 in_xd4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_PR == '\0') {
    fVar2 = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4;
  }
  else {
    fVar2 = SUB84((double)ar5 * (double)ar5 + (double)CONCAT44(in_fr4,in_fr5),0);
  }
  if (in_FPSCR_SZ == '\0') {
    *ar6 = fVar2;
  }
  else {
    *(undefined8 *)ar6 = in_xd0;
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)*(int *)(ar4 + 0x10) * in_fr6 + in_fr5,fVar2);
  }
  else {
    dVar3 = (double)*(int *)(ar4 + 0x10) * (double)CONCAT44(in_fr6,in_fr7) +
            (double)CONCAT44(in_fr4,in_fr5);
  }
  if (in_FPSCR_SZ == '\0') {
    ar6[1] = (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar6 + 1) = dVar3;
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4;
  }
  else {
    fVar2 = SUB84((double)ar5 * (double)ar5 + (double)CONCAT44(in_fr4,in_fr5),0);
  }
  if (in_FPSCR_SZ == '\0') {
    ar6[2] = fVar2;
    ar6[3] = in_fr5;
  }
  else {
    *(undefined8 *)(ar6 + 2) = in_xd0;
    *(undefined8 *)(ar6 + 3) = in_xd4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4;
  }
  else {
    fVar2 = SUB84((double)ar5 * (double)ar5 + (double)CONCAT44(in_fr4,in_fr5),0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = fVar2 + (float)*(int *)(ar4 + 0xc) * in_fr6;
  }
  else {
    dVar3 = (double)*(int *)(ar4 + 0xc) * (double)CONCAT44(in_fr6,in_fr7);
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    ar6[4] = fVar2;
    ar6[5] = in_fr5;
  }
  else {
    *(undefined8 *)(ar6 + 4) = in_xd0;
    *(undefined8 *)(ar6 + 5) = in_xd4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4;
  }
  else {
    fVar2 = SUB84((double)ar5 * (double)ar5 + (double)CONCAT44(in_fr4,in_fr5),0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = fVar2 + (float)*(int *)(ar4 + 0xc) * in_fr6;
  }
  else {
    dVar3 = (double)*(int *)(ar4 + 0xc) * (double)CONCAT44(in_fr6,in_fr7);
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    ar6[6] = fVar2;
  }
  else {
    *(undefined8 *)(ar6 + 6) = in_xd0;
  }
  iVar1 = *(int *)(ar4 + 0x10);
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)iVar1 * in_fr6 + in_fr5,fVar2);
  }
  else {
    dVar3 = (double)iVar1 * (double)CONCAT44(in_fr6,in_fr7) + (double)CONCAT44(in_fr4,in_fr5);
  }
  if (in_FPSCR_SZ == '\0') {
    ar6[7] = (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar6 + 7) = dVar3;
  }
  return iVar1;
}



/* ret_const_1_01694c @ 8c01694c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_01694c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* noop_016954 @ 8c016954 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_016954(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_016958 @ 8c016958 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_016958(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_01695c @ 8c01695c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_01695c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_016960 @ 8c016960 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_016960(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_016964 @ 8c016964 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_016964(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_016968 @ 8c016968 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_016968(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_01696c @ 8c01696c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_01696c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_016970 @ 8c016970 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_016970(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_016974 @ 8c016974 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_016974(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c016978 @ 8c016978 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016978(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0169f8)(PTR_DAT_8c0169f4,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c016a00;
  uVar2 = DAT_8c0169fc;
  (*(code *)PTR_global_list_push_8c016a04)(uVar1,PTR_Vec3_dtor_8c016a00,DAT_8c0169fc,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0169f8)(PTR_DAT_8c016a08,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c016a00;
  uVar2 = DAT_8c016a0c;
  (*(code *)PTR_global_list_push_8c016a04)(uVar1,PTR_Vec3_dtor_8c016a00,DAT_8c016a0c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0169f8)(PTR_DAT_8c016a10,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c016a00;
  uVar2 = DAT_8c016a14;
  (*(code *)PTR_global_list_push_8c016a04)(uVar1,PTR_Vec3_dtor_8c016a00,DAT_8c016a14,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0169f8)(PTR_DAT_8c016a18,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c016a04)(uVar2,PTR_Vec3_dtor_8c016a00,DAT_8c016a1c,ar7);
  return uVar2;
}



/* FUN_8c016a20 @ 8c016a20 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c016a2a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c016a20(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(float *)(ar4 + 4);
  }
  if (in_fr1 == 0.0) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 4) = DAT_8c016a78;
    }
    else {
      *(undefined8 *)(ar4 + 4) = CONCAT44(_FUN_8c016a7c,DAT_8c016a78);
    }
  }
  return ar4 + 8;
}



/* FUN_8c016a7c @ 8c016a7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c016a7c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = PTR_DAT_8c016ab4;
  (*(code *)PTR_Vec3_ctor_zero_8c016ab8)(ar4 + 1,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c016abc)(ar4 + 5,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c016ac0)(ar4 + 8,ar5,ar6,ar7);
  ar4[0xb] = 2;
  return ar4;
}



/* free_if_nonnull_wrap_016ac4 @ 8c016ac4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_016ac4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c016af0)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* Class_1299b0_m0_016af4 @ 8c016af4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_1299b0_m0_016af4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c016b48;
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c016b4c)(ar4 + 8,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c016b50)(ar4 + 5,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c016b54)(ar4 + 1,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c016b58)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* noop_016b5c @ 8c016b5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_016b5c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_016b60 @ 8c016b60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_016b60(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c016b64 @ 8c016b64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c016b64(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r14;
  undefined1 *puVar1;
  uint in_fr1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr15;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar1 = auStack_4;
  }
  else {
    puVar1 = auStack_8;
  }
  *(undefined4 *)(puVar1 + -4) = unaff_r14;
  *(undefined4 *)(puVar1 + -8) = in_PR;
  if (in_FPSCR_SZ != '\0') {
    in_xd14 = CONCAT44(in_fr4,in_fr5);
    in_fr4 = in_fr15;
  }
  (*(code *)PTR_FUN_8c016bec)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c016bf0;
  (*(code *)PTR_FUN_8c016bf4)(ar4 + 0x10,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    ar4[0xc] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xc) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[0xd] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xd) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[0xe] = 0;
    ar4[0xf] = in_fr4;
    *(undefined4 *)(puVar1 + -0xc) = in_fr4;
    ar4[10] = *(undefined4 *)(puVar1 + -0xc);
    *(undefined4 *)(puVar1 + -0x10) = *(undefined4 *)(puVar1 + -0xc);
    ar4[9] = *(undefined4 *)(puVar1 + -0x10);
    ar4[8] = *(undefined4 *)(puVar1 + -0x10);
  }
  else {
    *(ulonglong *)(ar4 + 0xe) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0xf) = in_xd14;
    *(undefined8 *)(puVar1 + -0xc) = in_xd14;
    *(undefined8 *)(ar4 + 10) = *(undefined8 *)(puVar1 + -0xc);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0xc);
    *(undefined8 *)(ar4 + 9) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(ar4 + 8) = *(undefined8 *)(puVar1 + -0x10);
  }
  (*(code *)PTR_FUN_8c016bf8)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* free_if_nonnull_wrap_016bfc @ 8c016bfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_016bfc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c016c28)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* Class_129974_m0_016c2c @ 8c016c2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_129974_m0_016c2c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c016c74;
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c016c78)(ar4 + 0x10,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_Class_1299b0_m0_016af4_8c016c7c)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c016c80)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c016c84 @ 8c016c84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016c84(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  char in_FPSCR_SZ;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uVar2;
  
  if (in_FPSCR_SZ == '\0') {
    uVar2 = *(undefined4 *)ar5;
    *(undefined4 *)(ar4 + 0x30) = uVar2;
    *(undefined4 *)(ar4 + 4) = uVar2;
    uStack_c = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 0x34) = uStack_c;
    *(undefined4 *)(ar4 + 8) = uStack_c;
    uStack_10 = *(undefined4 *)(ar5 + 1);
    *(undefined4 *)(ar4 + 0x38) = uStack_10;
  }
  else {
    uVar1 = *ar5;
    *(undefined8 *)(ar4 + 0x30) = uVar1;
    *(undefined8 *)(ar4 + 4) = uVar1;
    uVar1 = *(undefined8 *)((int)ar5 + 4);
    *(undefined8 *)(ar4 + 0x34) = uVar1;
    *(undefined8 *)(ar4 + 8) = uVar1;
    uVar1 = ar5[1];
    uStack_10 = (undefined4)uVar1;
    uStack_c = (undefined4)((ulonglong)uVar1 >> 0x20);
    *(undefined8 *)(ar4 + 0x38) = uVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0xc) = uStack_10;
  }
  else {
    *(undefined8 *)(ar4 + 0xc) = CONCAT44(uStack_c,uStack_10);
  }
  return 0;
}



/* FUN_8c016cec @ 8c016cec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

float * FUN_8c016cec(int ar4,undefined8 *ar5,undefined4 ar6,undefined8 *ar7)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 in_xd0;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int *in_stack_00000000;
  undefined1 auStack_20 [12];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uVar5;
  
  uStack_10 = in_PR;
  (**(code **)(*in_stack_00000000 + 0x34))(in_stack_00000000,auStack_20,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uVar5 = *(undefined4 *)ar5;
    *(undefined4 *)(ar4 + 0x30) = uVar5;
    *(undefined4 *)(ar4 + 4) = uVar5;
    uVar5 = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 0x34) = uVar5;
    *(undefined4 *)(ar4 + 8) = uVar5;
    uVar5 = *(undefined4 *)(ar5 + 1);
    *(undefined4 *)(ar4 + 0x38) = uVar5;
    *(undefined4 *)(ar4 + 0xc) = uVar5;
    *(undefined4 *)(ar4 + 0x20) = *(undefined4 *)ar7;
    *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)((int)ar7 + 4);
    *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar7 + 1);
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),uStack_14);
  }
  else {
    uVar3 = *ar5;
    *(undefined8 *)(ar4 + 0x30) = uVar3;
    *(undefined8 *)(ar4 + 4) = uVar3;
    uVar3 = *(undefined8 *)((int)ar5 + 4);
    *(undefined8 *)(ar4 + 0x34) = uVar3;
    *(undefined8 *)(ar4 + 8) = uVar3;
    uVar3 = ar5[1];
    *(undefined8 *)(ar4 + 0x38) = uVar3;
    *(undefined8 *)(ar4 + 0xc) = uVar3;
    *(undefined8 *)(ar4 + 0x20) = *ar7;
    *(undefined8 *)(ar4 + 0x24) = *(undefined8 *)((int)ar7 + 4);
    *(undefined8 *)(ar4 + 0x28) = ar7[1];
    in_xd0 = CONCAT44(uStack_10,uStack_14);
    dVar4 = *(double *)(ar4 + 0x28);
  }
  pfVar1 = (float *)(ar4 + 0x3c);
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar4 * dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *pfVar1 = fVar2;
  }
  else {
    *(undefined8 *)pfVar1 = in_xd0;
  }
  return pfVar1;
}



/* FUN_8c016da8 @ 8c016da8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016da8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c016e04)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c016e08)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c016e0c)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c016e10)(ar4 + 0x40,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c016e14)(1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c016e18 @ 8c016e18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016e18(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*ar5 + 0x18))(ar5,ar4,ar6,ar7);
  return uVar1;
}



/* FUN_8c016e38 @ 8c016e38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016e38(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_14 [20];
  
  (**(code **)(*ar5 + 0x34))(ar5,auStack_14,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c016e68)(ar4 + 0x30,auStack_14,ar6,ar7);
  return uVar1;
}



/* FUN_8c016e6c @ 8c016e6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c016e6c(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar5 + 0xc) = *(undefined4 *)(ar4 + 0x3c);
    *(undefined4 *)ar5 = *(undefined4 *)(ar4 + 0x30);
    *(undefined4 *)((int)ar5 + 4) = *(undefined4 *)(ar4 + 0x34);
    *(undefined4 *)(ar5 + 1) = *(undefined4 *)(ar4 + 0x38);
  }
  else {
    *(undefined8 *)((int)ar5 + 0xc) = *(undefined8 *)(ar4 + 0x3c);
    *ar5 = *(undefined8 *)(ar4 + 0x30);
    *(undefined8 *)((int)ar5 + 4) = *(undefined8 *)(ar4 + 0x34);
    ar5[1] = *(undefined8 *)(ar4 + 0x38);
  }
  return ar4 + 0x34;
}



/* FUN_8c016e98 @ 8c016e98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016e98(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_64 [100];
  
  (**(code **)(*ar5 + 0x38))(ar5,auStack_64,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c016ec8)(auStack_64,ar4 + 0x30,ar6,ar7);
  return uVar1;
}



/* FUN_8c016ecc @ 8c016ecc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016ecc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  char in_FPSCR_SZ;
  
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    puVar2 = (undefined8 *)(iVar3 * 0xc + ar5);
    puVar1 = (undefined8 *)(iVar3 * 0xc + ar4 + 0x30);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
    }
    else {
      *puVar2 = *puVar1;
    }
    puVar2 = (undefined8 *)(iVar3 * 0xc + ar5 + 4);
    puVar1 = (undefined8 *)(iVar3 * 0xc + ar4 + 0x34);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
    }
    else {
      *puVar2 = *puVar1;
    }
    puVar2 = (undefined8 *)(iVar3 * 0xc + ar5 + 8);
    puVar1 = (undefined8 *)(iVar3 * 0xc + ar4 + 0x38);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
    }
    else {
      *puVar2 = *puVar1;
    }
  }
  return 8;
}



/* FUN_8c016f50 @ 8c016f50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016f50(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (**(code **)(*ar5 + 0x34))(ar5,ar4 + 0x30,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c016f80)(ar5,ar4 + 0x20,ar6,ar7);
  return uVar1;
}



/* FUN_8c016f84 @ 8c016f84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016f84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c016fa0)(ar5,ar4 + 0x20,ar6,ar7);
  return uVar1;
}



/* FUN_8c016fa4 @ 8c016fa4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016fa4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c016fc8)(ar4 + 0x40,PTR_DAT_8c016fc4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x2c) = 0;
  return 0;
}



/* FUN_8c016fcc @ 8c016fcc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c016fcc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c016ffc)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c017000;
  (*(code *)PTR_FUN_8c017008)((int)ar4 + DAT_8c017004,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c01700c)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c017010 @ 8c017010 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int * FUN_8c017010(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  a5 = ar5;
  a6 = ar6;
  a7 = ar7;
  (*(code *)PTR_FUN_8c017070)(ar4,ar5,ar6,ar7);
  *ar4 = (int)PTR_DAT_8c017074;
  (*(code *)PTR_FUN_8c01707c)((int)ar4 + DAT_8c017078,a5,a6,a7);
  (**(code **)(*ar4 + 0x2c))(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c017080)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* Class_129938_m0_017084 @ 8c017084 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_129938_m0_017084(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0170cc;
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0170d4)((int)ar4 + DAT_8c0170d0,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_Class_1299b0_m0_016af4_8c0170d8)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0170dc)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_129938_m1_0170e0 @ 8c0170e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129938_m1_0170e0(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  undefined4 a6;
  float fVar1;
  double dVar2;
  int a7;
  int iVar3;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_ac [64];
  undefined1 auStack_6c [100];
  
  a6 = ar6;
  (**(code **)(*ar7 + 0x38))(ar7,auStack_6c,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c0171d4)(ar4 + 4,ar5,a6,ar7);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0171d8)(ar4 + 0x14,ar6,a6,ar7);
  (*(code *)PTR_FUN_8c0171dc)(auStack_ac,ar6,a6,ar7);
  (*(code *)PTR_FUN_8c0171e0)(auStack_ac,ar6,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c0171e4,*(undefined4 *)(ar4 + 0x1c));
  }
  else {
    dVar2 = (double)CONCAT44(DAT_8c0171e8,DAT_8c0171e4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c0171e8,fVar1);
  }
  else {
    dVar2 = (double)CONCAT44(PTR_FUN_8c0171ec,DAT_8c0171e8);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    a7 = (int)(dVar2 / dVar2);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c0171e4,*(undefined4 *)(ar4 + 0x18));
  }
  else {
    dVar2 = (double)CONCAT44(DAT_8c0171e8,DAT_8c0171e4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c0171e8,fVar1);
  }
  else {
    dVar2 = (double)CONCAT44(PTR_FUN_8c0171ec,DAT_8c0171e8);
  }
  if (in_FPSCR_PR == '\0') {
    iVar3 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar2 / dVar2);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c0171e4,*(undefined4 *)(ar4 + 0x14));
  }
  else {
    dVar2 = (double)CONCAT44(DAT_8c0171e8,DAT_8c0171e4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c0171e8,fVar1);
  }
  else {
    dVar2 = (double)CONCAT44(PTR_FUN_8c0171ec,DAT_8c0171e8);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    a5 = (int)(dVar2 / dVar2);
  }
  (*(code *)PTR_FUN_8c0171ec)(auStack_ac,a5,iVar3,a7);
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    (*(code *)PTR_FUN_8c0171f0)(auStack_ac,auStack_6c + iVar3 * 0xc,iVar3 * 0xc + ar4 + 0x30,a7);
  }
  return 8;
}



/* Class_129938_m2_0171f4 @ 8c0171f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129938_m2_0171f4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int aiStack_c0 [4];
  int iStack_b0;
  undefined1 auStack_ac [64];
  undefined1 auStack_6c [100];
  
  aiStack_c0[0] = ar5;
  aiStack_c0[1] = ar6;
  aiStack_c0[2] = ar7;
  (**(code **)(**(int **)((int)aiStack_c0 + DAT_8c017310) + 0x38))
            (*(int **)((int)aiStack_c0 + DAT_8c017310),auStack_6c,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c017314)(ar4 + 4,aiStack_c0[0],ar6,ar7);
  (*(code *)PTR_vec3_copy_8c023d8c_8c017318)(ar4 + 0x14,aiStack_c0[1],ar6,ar7);
  iVar3 = aiStack_c0[2];
  (*(code *)PTR_FUN_8c01731c)(ar4 + 0x20,aiStack_c0[2],ar6,ar7);
  (*(code *)PTR_FUN_8c017320)(auStack_ac,iVar3,ar6,ar7);
  (*(code *)PTR_FUN_8c017324)(auStack_ac,iVar3,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c017328,*(undefined4 *)(ar4 + 0x1c));
  }
  else {
    dVar2 = (double)CONCAT44(DAT_8c01732c,DAT_8c017328);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c01732c,fVar1);
  }
  else {
    dVar2 = (double)CONCAT44(PTR_FUN_8c017330,DAT_8c01732c);
  }
  if (in_FPSCR_PR == '\0') {
    iVar3 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar2 / dVar2);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c017328,*(undefined4 *)(ar4 + 0x18));
  }
  else {
    dVar2 = (double)CONCAT44(DAT_8c01732c,DAT_8c017328);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c01732c,fVar1);
  }
  else {
    dVar2 = (double)CONCAT44(PTR_FUN_8c017330,DAT_8c01732c);
  }
  if (in_FPSCR_PR == '\0') {
    iVar4 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar2 / dVar2);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c017328,*(undefined4 *)(ar4 + 0x14));
  }
  else {
    dVar2 = (double)CONCAT44(DAT_8c01732c,DAT_8c017328);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c01732c,fVar1);
  }
  else {
    dVar2 = (double)CONCAT44(PTR_FUN_8c017330,DAT_8c01732c);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    a5 = (int)(dVar2 / dVar2);
  }
  (*(code *)PTR_FUN_8c017330)(auStack_ac,a5,iVar4,iVar3);
  (*(code *)PTR_FUN_8c017334)(auStack_ac,a5,iVar4,iVar3);
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    aiStack_c0[3] = iVar4;
    iStack_b0 = iVar4;
    (*(code *)PTR_FUN_8c017338)(auStack_ac,auStack_6c + iVar4 * 0xc,iVar4 * 0xc + ar4 + 0x30,iVar3);
  }
  return 8;
}



/* Class_129938_m6_01733c @ 8c01733c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129938_m6_01733c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  char in_FPSCR_SZ;
  
  iVar1 = (*(code *)PTR_FUN_8c017400)(ar4 + DAT_8c0173fc,ar5,ar6,ar7);
  iVar1 = **(int **)(iVar1 + 4) + 8;
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    puVar4 = (undefined8 *)(iVar5 * 0x18 + iVar1);
    puVar3 = (undefined8 *)(iVar5 * 0xc + ar4 + 0x30);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
    }
    else {
      *puVar4 = *puVar3;
    }
    puVar4 = (undefined8 *)(iVar5 * 0x18 + iVar1 + 4);
    puVar3 = (undefined8 *)(iVar5 * 0xc + ar4 + 0x34);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
    }
    else {
      *puVar4 = *puVar3;
    }
    puVar4 = (undefined8 *)(iVar5 * 0x18 + iVar1 + 8);
    puVar3 = (undefined8 *)(iVar5 * 0xc + ar4 + 0x38);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
    }
    else {
      *puVar4 = *puVar3;
    }
  }
  uVar2 = (*(code *)PTR_FUN_8c017404)(ar4 + DAT_8c0173fc,ar5,ar6,ar7);
  return uVar2;
}



/* Class_129938_m3_017408 @ 8c017408 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129938_m3_017408(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*ar5 + 0x1c))(ar5,ar4,ar6,ar7);
  return uVar1;
}



/* Class_129938_m4_017428 @ 8c017428 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129938_m4_017428(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_14 [20];
  
  (**(code **)(*ar5 + 0x34))(ar5,auStack_14,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c017458)(ar4 + 0x30,auStack_14,ar6,ar7);
  return uVar1;
}



/* Class_129938_m5_01745c @ 8c01745c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129938_m5_01745c(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_64 [100];
  
  (**(code **)(*ar5 + 0x38))(ar5,auStack_64,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c01748c)(ar4 + 0x30,auStack_64,ar6,ar7);
  return uVar1;
}



/* FUN_8c017490 @ 8c017490 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c017490(int ar4,undefined8 *ar5,undefined8 *ar6,undefined8 *ar7)

{
  undefined8 *a6;
  undefined4 in_fr1;
  undefined8 uVar1;
  undefined4 uVar2;
  char in_FPSCR_SZ;
  undefined8 *in_stack_00000000;
  undefined8 *in_stack_00000004;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_0000000c;
  undefined8 *in_stack_00000010;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)ar5;
    *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 0x38) = *(undefined4 *)(ar5 + 1);
    *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)ar6;
    *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)((int)ar6 + 4);
    *(undefined4 *)(ar4 + 0x44) = *(undefined4 *)(ar6 + 1);
    *(undefined4 *)(ar4 + 0x48) = *(undefined4 *)ar7;
    *(undefined4 *)(ar4 + 0x4c) = *(undefined4 *)((int)ar7 + 4);
    *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar7 + 1);
    *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)in_stack_00000000;
    *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)((int)in_stack_00000000 + 4);
    *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(in_stack_00000000 + 1);
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)in_stack_00000004;
    *(undefined4 *)(ar4 + 100) = *(undefined4 *)((int)in_stack_00000004 + 4);
    *(undefined4 *)(ar4 + 0x68) = *(undefined4 *)(in_stack_00000004 + 1);
    *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)in_stack_00000008;
    *(undefined4 *)(ar4 + 0x70) = *(undefined4 *)((int)in_stack_00000008 + 4);
    *(undefined4 *)(ar4 + 0x74) = *(undefined4 *)(in_stack_00000008 + 1);
    *(undefined4 *)(ar4 + 0x78) = *(undefined4 *)in_stack_0000000c;
    uVar1 = CONCAT44(*(undefined4 *)((int)in_stack_0000000c + 4),in_fr1);
    *(undefined4 *)(ar4 + 0x7c) = *(undefined4 *)((int)in_stack_0000000c + 4);
  }
  else {
    *(undefined8 *)(ar4 + 0x30) = *ar5;
    *(undefined8 *)(ar4 + 0x34) = *(undefined8 *)((int)ar5 + 4);
    *(undefined8 *)(ar4 + 0x38) = ar5[1];
    *(undefined8 *)(ar4 + 0x3c) = *ar6;
    *(undefined8 *)(ar4 + 0x40) = *(undefined8 *)((int)ar6 + 4);
    *(undefined8 *)(ar4 + 0x44) = ar6[1];
    *(undefined8 *)(ar4 + 0x48) = *ar7;
    *(undefined8 *)(ar4 + 0x4c) = *(undefined8 *)((int)ar7 + 4);
    *(undefined8 *)(ar4 + 0x50) = ar7[1];
    *(undefined8 *)(ar4 + 0x54) = *in_stack_00000000;
    *(undefined8 *)(ar4 + 0x58) = *(undefined8 *)((int)in_stack_00000000 + 4);
    *(undefined8 *)(ar4 + 0x5c) = in_stack_00000000[1];
    *(undefined8 *)(ar4 + 0x60) = *in_stack_00000004;
    *(undefined8 *)(ar4 + 100) = *(undefined8 *)((int)in_stack_00000004 + 4);
    *(undefined8 *)(ar4 + 0x68) = in_stack_00000004[1];
    *(undefined8 *)(ar4 + 0x6c) = *in_stack_00000008;
    *(undefined8 *)(ar4 + 0x70) = *(undefined8 *)((int)in_stack_00000008 + 4);
    *(undefined8 *)(ar4 + 0x74) = in_stack_00000008[1];
    *(undefined8 *)(ar4 + 0x78) = *in_stack_0000000c;
    uVar1 = *(undefined8 *)((int)in_stack_0000000c + 4);
    *(undefined8 *)(ar4 + 0x7c) = uVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar2 = *(undefined4 *)(in_stack_0000000c + 1);
    uVar1 = CONCAT44(uVar2,(int)uVar1);
    *(undefined4 *)(ar4 + DAT_8c01761c) = uVar2;
  }
  else {
    uVar1 = in_stack_0000000c[1];
    *(undefined8 *)(ar4 + DAT_8c01761c) = uVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar1 = CONCAT44(*(undefined4 *)in_stack_00000010,(int)uVar1);
    *(undefined4 *)(ar4 + DAT_8c017620) = *(undefined4 *)in_stack_00000010;
  }
  else {
    uVar1 = *in_stack_00000010;
    *(undefined8 *)(ar4 + DAT_8c017620) = uVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar2 = *(undefined4 *)((int)in_stack_00000010 + 4);
    uVar1 = CONCAT44(uVar2,(int)uVar1);
    *(undefined4 *)(ar4 + DAT_8c017624) = uVar2;
  }
  else {
    uVar1 = *(undefined8 *)((int)in_stack_00000010 + 4);
    *(undefined8 *)(ar4 + DAT_8c017624) = uVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar2 = *(undefined4 *)(in_stack_00000010 + 1);
    uVar1 = CONCAT44(uVar2,(int)uVar1);
    *(undefined4 *)(ar4 + DAT_8c017628) = uVar2;
  }
  else {
    uVar1 = in_stack_00000010[1];
    *(undefined8 *)(ar4 + DAT_8c017628) = uVar1;
  }
  a6 = ar6;
  (*(code *)PTR_FUN_8c01762c)(ar5,in_stack_00000000,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x20) = (int)((ulonglong)uVar1 >> 0x20);
  }
  else {
    *(undefined8 *)(ar4 + 0x20) = uVar1;
  }
  (*(code *)PTR_FUN_8c01762c)(ar5,in_stack_00000004,a6,ar7);
  uStack_28 = (undefined4)uVar1;
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x24) = uVar2;
    uStack_28 = uVar2;
  }
  else {
    *(undefined8 *)(ar4 + 0x24) = uVar1;
  }
  (*(code *)PTR_FUN_8c01762c)(ar5,ar6,a6,ar7);
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_2c = uVar2;
  if (in_FPSCR_SZ != '\0') {
    uStack_2c = (undefined4)uVar1;
    uStack_28 = uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x28) = uStack_2c;
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = CONCAT44(uStack_28,uStack_2c);
  }
  return 4;
}



/* FUN_8c017630 @ 8c017630 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c017630(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  undefined8 uVar1;
  undefined4 uVar2;
  char in_FPSCR_SZ;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)ar5;
    *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 0x38) = *(undefined4 *)(ar5 + 1);
    *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar5 + 2);
    *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)((int)ar5 + 0x14);
    *(undefined4 *)(ar4 + 0x44) = *(undefined4 *)(ar5 + 3);
    *(undefined4 *)(ar4 + 0x48) = *(undefined4 *)(ar5 + 4);
    *(undefined4 *)(ar4 + 0x4c) = *(undefined4 *)((int)ar5 + 0x24);
    *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar5 + 5);
    *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)(ar5 + 6);
    *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)((int)ar5 + 0x34);
    *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar5 + 7);
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar5 + 8);
    *(undefined4 *)(ar4 + 100) = *(undefined4 *)((int)ar5 + 0x44);
    *(undefined4 *)(ar4 + 0x68) = *(undefined4 *)(ar5 + 9);
    *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)(ar5 + 10);
    *(undefined4 *)(ar4 + 0x70) = *(undefined4 *)((int)ar5 + 0x54);
    *(undefined4 *)(ar4 + 0x74) = *(undefined4 *)(ar5 + 0xb);
    *(undefined4 *)(ar4 + 0x78) = *(undefined4 *)(ar5 + 0xc);
    uVar1 = CONCAT44(*(undefined4 *)((int)ar5 + 100),in_fr1);
    *(undefined4 *)(ar4 + 0x7c) = *(undefined4 *)((int)ar5 + 100);
  }
  else {
    *(undefined8 *)(ar4 + 0x30) = *ar5;
    *(undefined8 *)(ar4 + 0x34) = *(undefined8 *)((int)ar5 + 4);
    *(undefined8 *)(ar4 + 0x38) = ar5[1];
    *(undefined8 *)(ar4 + 0x3c) = ar5[2];
    *(undefined8 *)(ar4 + 0x40) = *(undefined8 *)((int)ar5 + 0x14);
    *(undefined8 *)(ar4 + 0x44) = ar5[3];
    *(undefined8 *)(ar4 + 0x48) = ar5[4];
    *(undefined8 *)(ar4 + 0x4c) = *(undefined8 *)((int)ar5 + 0x24);
    *(undefined8 *)(ar4 + 0x50) = ar5[5];
    *(undefined8 *)(ar4 + 0x54) = ar5[6];
    *(undefined8 *)(ar4 + 0x58) = *(undefined8 *)((int)ar5 + 0x34);
    *(undefined8 *)(ar4 + 0x5c) = ar5[7];
    *(undefined8 *)(ar4 + 0x60) = ar5[8];
    *(undefined8 *)(ar4 + 100) = *(undefined8 *)((int)ar5 + 0x44);
    *(undefined8 *)(ar4 + 0x68) = ar5[9];
    *(undefined8 *)(ar4 + 0x6c) = ar5[10];
    *(undefined8 *)(ar4 + 0x70) = *(undefined8 *)((int)ar5 + 0x54);
    *(undefined8 *)(ar4 + 0x74) = ar5[0xb];
    *(undefined8 *)(ar4 + 0x78) = ar5[0xc];
    uVar1 = *(undefined8 *)((int)ar5 + 100);
    *(undefined8 *)(ar4 + 0x7c) = uVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar2 = *(undefined4 *)(ar5 + 0xd);
    uVar1 = CONCAT44(uVar2,(int)uVar1);
    *(undefined4 *)(ar4 + DAT_8c0177bc) = uVar2;
  }
  else {
    uVar1 = ar5[0xd];
    *(undefined8 *)(ar4 + DAT_8c0177bc) = uVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar2 = *(undefined4 *)(ar5 + 0xe);
    uVar1 = CONCAT44(uVar2,(int)uVar1);
    *(undefined4 *)(ar4 + DAT_8c0177c0) = uVar2;
  }
  else {
    uVar1 = ar5[0xe];
    *(undefined8 *)(ar4 + DAT_8c0177c0) = uVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar2 = *(undefined4 *)((int)ar5 + 0x74);
    uVar1 = CONCAT44(uVar2,(int)uVar1);
    *(undefined4 *)(ar4 + DAT_8c0177c4) = uVar2;
  }
  else {
    uVar1 = *(undefined8 *)((int)ar5 + 0x74);
    *(undefined8 *)(ar4 + DAT_8c0177c4) = uVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar2 = *(undefined4 *)(ar5 + 0xf);
    uVar1 = CONCAT44(uVar2,(int)uVar1);
    *(undefined4 *)(ar4 + DAT_8c0177c8) = uVar2;
  }
  else {
    uVar1 = ar5[0xf];
    *(undefined8 *)(ar4 + DAT_8c0177c8) = uVar1;
  }
  (*(code *)PTR_FUN_8c0177cc)(ar5,ar5 + 6,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x20) = (int)((ulonglong)uVar1 >> 0x20);
  }
  else {
    *(undefined8 *)(ar4 + 0x20) = uVar1;
  }
  (*(code *)PTR_FUN_8c0177cc)(ar5,ar5 + 8,ar6,ar7);
  uStack_14 = (undefined4)uVar1;
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x24) = uVar2;
    uStack_14 = uVar2;
  }
  else {
    *(undefined8 *)(ar4 + 0x24) = uVar1;
  }
  (*(code *)PTR_FUN_8c0177cc)(ar5,ar5 + 2,ar6,ar7);
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_18 = uVar2;
  if (in_FPSCR_SZ != '\0') {
    uStack_18 = (undefined4)uVar1;
    uStack_14 = uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x28) = uStack_18;
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = CONCAT44(uStack_14,uStack_18);
  }
  return 0;
}



/* Class_129938_m7_0177d0 @ 8c0177d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129938_m7_0177d0(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (**(code **)(*ar5 + 0x38))(ar5,ar4 + 0x30,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c017800)(ar5,ar4 + 0x20,ar6,ar7);
  return uVar1;
}



/* FUN_8c017804 @ 8c017804 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c017804(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c01782c)(ar4 + DAT_8c017828,PTR_DAT_8c017824,ar6,ar7);
  *(undefined4 *)(ar4 + 0x2c) = 1;
  return 1;
}



/* FUN_8c017830 @ 8c017830 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c017830(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0178b0)(ar4 + 4,ar5,ar6,ar7);
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  if (in_FPSCR_SZ == '\0') {
    ar4[0x15] = 0;
    ar4[0x16] = 0;
    ar4[0x17] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x15) = (ulonglong)extraout_fr1;
    *(ulonglong *)(ar4 + 0x16) = (ulonglong)extraout_fr1;
    *(ulonglong *)(ar4 + 0x17) = (ulonglong)extraout_fr1;
  }
  ar4[0x1b] = ar4[0x15];
  ar4[0x1c] = ar4[0x16];
  ar4[0x1d] = ar4[0x17];
  ar4[0x18] = ar4[0x15];
  ar4[0x19] = ar4[0x16];
  ar4[0x1a] = ar4[0x17];
  ar4[0x1e] = ar4[0x15];
  ar4[0x1f] = ar4[0x16];
  ar4[0x20] = ar4[0x17];
  return ar4;
}



/* FUN_8c0178b4 @ 8c0178b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0178b4(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined2 *puVar2;
  
  *ar4 = ar5;
  for (puVar2 = *(undefined2 **)(*ar4 + 4); (char)*puVar2 != '@'; puVar2 = puVar2 + 1) {
  }
  ar4[3] = (int)(short)puVar2[2] & DAT_8c0178fc;
  ar4[1] = (int)(puVar2 + 3);
  ar4[2] = *(int *)*ar4;
  iVar1 = ar4[2];
  ar4[2] = iVar1 + 8;
  return iVar1 + 8;
}



/* FUN_8c017900 @ 8c017900 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c017900(undefined4 ar4,double *ar5,undefined8 *ar6,undefined8 *ar7)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  double *pdVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined1 *a5;
  undefined8 *a7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  short sVar10;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar11;
  undefined4 in_fr1;
  undefined4 uVar12;
  float fVar13;
  double dVar14;
  undefined8 uVar15;
  float fVar16;
  float in_fr4;
  float in_fr13;
  undefined4 in_fr12;
  double in_dr14;
  double dVar17;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar18;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [4];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar11 = auStack_c;
  }
  else {
    puVar11 = auStack_18;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)(puVar11 + -4) = unaff_r14;
  *(undefined4 *)(puVar11 + -8) = unaff_r13;
  *(undefined4 *)(puVar11 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar11 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar11 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar11 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar11 + -0x1c) = unaff_r8;
  *(undefined4 *)(puVar11 + -0x20) = in_PR;
  *(undefined4 *)(puVar11 + -0x1c8) = ar4;
  if (in_FPSCR_SZ == '\0') {
    in_fr13 = in_fr4;
  }
  puVar2 = *(undefined2 **)(*(int *)(puVar11 + -0x1c8) + 4);
  *(undefined4 *)(puVar11 + DAT_8c0179b8 + -0x1c8) = 0;
  *(undefined2 *)(puVar11 + -0x1bc) = 0;
  sVar1 = 0;
  pdVar6 = ar5;
  puVar4 = ar6;
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c0179c0)(puVar11 + DAT_8c0179bc + -0x1c8,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0179c0)(puVar11 + DAT_8c0179c4 + -0x1c8,pdVar6,puVar4,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c0179c0)(puVar11 + DAT_8c0179c8 + -0x1c8,pdVar6,puVar4,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c0179c0)(puVar11 + DAT_8c0179cc + -0x1c8,pdVar6,puVar4,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c0179c0)(puVar11 + DAT_8c0179d0 + -0x1c8,pdVar6,puVar4,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c0179c0)(puVar11 + DAT_8c0179d4 + -0x1c8,pdVar6,puVar4,a7);
  iVar3 = *(int *)(*(int *)(puVar11 + -0x1c8) + 8);
  puVar9 = (undefined4 *)(puVar11 + DAT_8c0179d8 + -0x1c8);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0179dc + 4);
  *puVar9 = *(undefined4 *)PTR_DAT_8c0179dc;
  puVar9[1] = uVar5;
  puVar9[2] = *(undefined4 *)(PTR_DAT_8c0179dc + 8);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar11 + DAT_8c0179d8 + -0x1c8) = *(undefined4 *)ar5;
    *(undefined4 *)(puVar11 + DAT_8c0179e0 + -0x1c8) = *(undefined4 *)((int)ar5 + 4);
    dVar14 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),in_fr1);
    *(undefined4 *)(puVar11 + DAT_8c0179e4 + -0x1c8) = *(undefined4 *)(ar5 + 1);
  }
  else {
    *(double *)(puVar11 + DAT_8c0179d8 + -0x1c8) = *ar5;
    *(undefined8 *)(puVar11 + DAT_8c0179e0 + -0x1c8) = *(undefined8 *)((int)ar5 + 4);
    dVar14 = ar5[1];
    *(double *)(puVar11 + DAT_8c0179e4 + -0x1c8) = dVar14;
  }
  *(undefined2 *)(puVar11 + -0x1ba) = 0;
  do {
    if (*(int *)(*(int *)(puVar11 + -0x1c8) + 0xc) <= (int)*(short *)(puVar11 + -0x1ba)) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar11 + -0x1b4) = 0;
        *(undefined4 *)(ar6 + 1) = *(undefined4 *)(puVar11 + -0x1b4);
        *(undefined4 *)(puVar11 + -0x1b8) = *(undefined4 *)(puVar11 + -0x1b4);
        *(undefined4 *)((int)ar6 + 4) = *(undefined4 *)(puVar11 + -0x1b8);
        *(undefined4 *)ar6 = *(undefined4 *)(puVar11 + -0x1b8);
      }
      else {
        *(ulonglong *)(puVar11 + -0x1b4) = (ulonglong)dVar14 & 0xffffffff;
        ar6[1] = *(undefined8 *)(puVar11 + -0x1b4);
        *(undefined8 *)(puVar11 + -0x1b8) = *(undefined8 *)(puVar11 + -0x1b4);
        *(undefined8 *)((int)ar6 + 4) = *(undefined8 *)(puVar11 + -0x1b8);
        *ar6 = *(undefined8 *)(puVar11 + -0x1b8);
      }
      *(undefined4 *)(puVar11 + DAT_8c018584 + -0x1c8) = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c01858c)(puVar11 + DAT_8c018588 + -0x1c8,0xffffffff,puVar4,a7);
      (*(code *)PTR_Vec3_dtor_8c01858c)(puVar11 + DAT_8c018590 + -0x1c8,0xffffffff,puVar4,a7);
      (*(code *)PTR_Vec3_dtor_8c01858c)(puVar11 + DAT_8c018594 + -0x1c8,0xffffffff,puVar4,a7);
      (*(code *)PTR_Vec3_dtor_8c01858c)(puVar11 + DAT_8c018598 + -0x1c8,0xffffffff,puVar4,a7);
      (*(code *)PTR_Vec3_dtor_8c01858c)(puVar11 + DAT_8c01859c + -0x1c8,0xffffffff,puVar4,a7);
      (*(code *)PTR_Vec3_dtor_8c01858c)(puVar11 + DAT_8c0185a0 + -0x1c8,0xffffffff,puVar4,a7);
      return *(undefined4 *)(puVar11 + DAT_8c018584 + -0x1c8);
    }
    *(undefined2 *)(puVar11 + -0x1bc) = *puVar2;
    if (*(short *)(puVar11 + -0x1bc) < 0) {
      *(int *)(puVar11 + DAT_8c017a0c + -0x1c8) = (int)*(short *)(puVar11 + -0x1bc);
      *(short *)(puVar11 + -0x1bc) = -(short)*(undefined4 *)(puVar11 + DAT_8c017a0c + -0x1c8);
      *(undefined2 *)(puVar11 + -0x1c4) = 1;
    }
    else {
      *(undefined2 *)(puVar11 + -0x1c4) = 0;
    }
    puVar2 = puVar2 + 1;
    *(undefined2 **)(puVar11 + DAT_8c017a24 + -0x1c8) = puVar2;
    while( true ) {
      uVar5 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c018580)
                        ((int)puVar2 - *(int *)(puVar11 + DAT_8c01857c + -0x1c8),2,puVar4,a7);
      uVar12 = SUB84(dVar14,0);
      *(undefined4 *)(puVar11 + -0x1b0) = uVar5;
      if ((int)*(short *)(puVar11 + -0x1bc) <= *(int *)(puVar11 + -0x1b0)) break;
      if (puVar2 == *(undefined2 **)(puVar11 + DAT_8c017a54 + -0x1c8)) {
        *(undefined2 *)(puVar11 + -0x1c2) = *puVar2;
        *(undefined2 *)(puVar11 + -0x1c0) = puVar2[1];
        *(undefined2 *)(puVar11 + -0x1be) = puVar2[2];
        puVar2 = puVar2 + 3;
      }
      else {
        *(undefined2 *)(puVar11 + -0x1c2) = *(undefined2 *)(puVar11 + -0x1c0);
        *(undefined2 *)(puVar11 + -0x1c0) = *(undefined2 *)(puVar11 + -0x1be);
        *(undefined2 *)(puVar11 + -0x1be) = *puVar2;
        puVar2 = puVar2 + 1;
      }
      *(int *)(puVar11 + DAT_8c017d70 + -0x1c8) = (int)*(short *)(puVar11 + -0x1be);
      *(int *)(puVar11 + DAT_8c017d74 + -0x1c8) = (int)*(short *)(puVar11 + -0x1c2);
      *(int *)(puVar11 + DAT_8c017d78 + -0x1c8) = (int)*(short *)(puVar11 + -0x1c0);
      puVar4 = (undefined8 *)
               ((*(int *)(puVar11 + DAT_8c017d74 + -0x1c8) * 2 +
                *(int *)(puVar11 + DAT_8c017d74 + -0x1c8)) * 8 + iVar3);
      if (in_FPSCR_SZ == '\0') {
        uVar12 = *(undefined4 *)puVar4;
      }
      else {
        in_xd0 = *puVar4;
      }
      pdVar6 = (double *)
               ((*(int *)(puVar11 + DAT_8c017d78 + -0x1c8) * 2 +
                *(int *)(puVar11 + DAT_8c017d78 + -0x1c8)) * 8 + iVar3);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,uVar12);
      }
      else {
        dVar14 = *pdVar6;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      pdVar6 = (double *)
               ((*(int *)(puVar11 + DAT_8c017d70 + -0x1c8) * 2 +
                *(int *)(puVar11 + DAT_8c017d70 + -0x1c8)) * 8 + iVar3);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
      }
      else {
        dVar14 = *pdVar6;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(DAT_8c017d7c,fVar13);
      }
      else {
        dVar14 = (double)CONCAT44(DAT_8c017d80,DAT_8c017d7c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) / (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar11 + DAT_8c017d80 + -0x1c8) = fVar13;
      }
      else {
        *(undefined8 *)(puVar11 + DAT_8c017d80 + -0x1c8) = in_xd0;
      }
      *(int *)(puVar11 + DAT_8c017d84 + -0x1c8) = (int)*(short *)(puVar11 + -0x1be);
      *(int *)(puVar11 + DAT_8c017d88 + -0x1c8) = (int)*(short *)(puVar11 + -0x1c2);
      *(int *)(puVar11 + DAT_8c017d8c + -0x1c8) = (int)*(short *)(puVar11 + -0x1c0);
      pfVar7 = (float *)((*(int *)(puVar11 + DAT_8c017d88 + -0x1c8) * 2 +
                         *(int *)(puVar11 + DAT_8c017d88 + -0x1c8)) * 8 + iVar3 + 4);
      if (in_FPSCR_SZ == '\0') {
        fVar13 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)
               ((*(int *)(puVar11 + DAT_8c017d8c + -0x1c8) * 2 +
                *(int *)(puVar11 + DAT_8c017d8c + -0x1c8)) * 8 + iVar3 + 4);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
      }
      else {
        dVar14 = *pdVar6;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      pdVar6 = (double *)
               ((*(int *)(puVar11 + DAT_8c017d84 + -0x1c8) * 2 +
                *(int *)(puVar11 + DAT_8c017d84 + -0x1c8)) * 8 + iVar3 + 4);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
      }
      else {
        dVar14 = *pdVar6;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(DAT_8c017d7c,fVar13);
      }
      else {
        dVar14 = (double)CONCAT44(DAT_8c017d80,DAT_8c017d7c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) / (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar11 + DAT_8c017d90 + -0x1c8) = fVar13;
      }
      else {
        *(undefined8 *)(puVar11 + DAT_8c017d90 + -0x1c8) = in_xd0;
      }
      *(int *)(puVar11 + DAT_8c017d94 + -0x1c8) = (int)*(short *)(puVar11 + -0x1be);
      *(int *)(puVar11 + DAT_8c017d98 + -0x1c8) = (int)*(short *)(puVar11 + -0x1c2);
      *(int *)(puVar11 + DAT_8c017d9c + -0x1c8) = (int)*(short *)(puVar11 + -0x1c0);
      pfVar7 = (float *)((*(int *)(puVar11 + DAT_8c017d98 + -0x1c8) * 2 +
                         *(int *)(puVar11 + DAT_8c017d98 + -0x1c8)) * 8 + iVar3 + 8);
      if (in_FPSCR_SZ == '\0') {
        fVar13 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)
               ((*(int *)(puVar11 + DAT_8c017d9c + -0x1c8) * 2 +
                *(int *)(puVar11 + DAT_8c017d9c + -0x1c8)) * 8 + iVar3 + 8);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
      }
      else {
        dVar14 = *pdVar6;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      pdVar6 = (double *)
               ((*(int *)(puVar11 + DAT_8c017d94 + -0x1c8) * 2 +
                *(int *)(puVar11 + DAT_8c017d94 + -0x1c8)) * 8 + iVar3 + 8);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
      }
      else {
        dVar14 = *pdVar6;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(DAT_8c017d7c,fVar13);
      }
      else {
        dVar14 = (double)CONCAT44(DAT_8c017d80,DAT_8c017d7c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) / (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar11 + DAT_8c017da0 + -0x1c8) = fVar13;
      }
      else {
        *(undefined8 *)(puVar11 + DAT_8c017da0 + -0x1c8) = in_xd0;
      }
      *(int *)(puVar11 + DAT_8c017da4 + -0x1c8) = (int)*(short *)(puVar11 + -0x1be);
      *(int *)(puVar11 + DAT_8c017da8 + -0x1c8) = (int)*(short *)(puVar11 + -0x1c2);
      *(int *)(puVar11 + DAT_8c017dac + -0x1c8) = (int)*(short *)(puVar11 + -0x1c0);
      pfVar7 = (float *)((*(int *)(puVar11 + DAT_8c017da8 + -0x1c8) * 2 +
                         *(int *)(puVar11 + DAT_8c017da8 + -0x1c8)) * 8 + iVar3 + 0xc);
      if (in_FPSCR_SZ == '\0') {
        fVar13 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)
               ((*(int *)(puVar11 + DAT_8c017dac + -0x1c8) * 2 +
                *(int *)(puVar11 + DAT_8c017dac + -0x1c8)) * 8 + iVar3 + 0xc);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
      }
      else {
        dVar14 = *pdVar6;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      pdVar6 = (double *)
               ((*(int *)(puVar11 + DAT_8c017da4 + -0x1c8) * 2 +
                *(int *)(puVar11 + DAT_8c017da4 + -0x1c8)) * 8 + iVar3 + 0xc);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
      }
      else {
        dVar14 = *pdVar6;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(DAT_8c017d7c,fVar13);
      }
      else {
        dVar14 = (double)CONCAT44(DAT_8c017d80,DAT_8c017d7c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) / (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar11 + DAT_8c017db0 + -0x1c8) = fVar13;
      }
      else {
        *(undefined8 *)(puVar11 + DAT_8c017db0 + -0x1c8) = in_xd0;
      }
      *(int *)(puVar11 + DAT_8c017db4 + -0x1c8) = (int)*(short *)(puVar11 + -0x1be);
      *(int *)(puVar11 + DAT_8c017db8 + -0x1c8) = (int)*(short *)(puVar11 + -0x1c2);
      *(int *)(puVar11 + DAT_8c017dbc + -0x1c8) = (int)*(short *)(puVar11 + -0x1c0);
      pfVar7 = (float *)((*(int *)(puVar11 + DAT_8c017db8 + -0x1c8) * 2 +
                         *(int *)(puVar11 + DAT_8c017db8 + -0x1c8)) * 8 + iVar3 + 0x10);
      if (in_FPSCR_SZ == '\0') {
        fVar13 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)
               ((*(int *)(puVar11 + DAT_8c017dbc + -0x1c8) * 2 +
                *(int *)(puVar11 + DAT_8c017dbc + -0x1c8)) * 8 + iVar3 + 0x10);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
      }
      else {
        dVar14 = *pdVar6;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      pdVar6 = (double *)
               ((*(int *)(puVar11 + DAT_8c017db4 + -0x1c8) * 2 +
                *(int *)(puVar11 + DAT_8c017db4 + -0x1c8)) * 8 + iVar3 + 0x10);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
      }
      else {
        dVar14 = *pdVar6;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(DAT_8c017d7c,fVar13);
      }
      else {
        dVar14 = (double)CONCAT44(DAT_8c017d80,DAT_8c017d7c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) / (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar11 + DAT_8c017dc0 + -0x1c8) = fVar13;
      }
      else {
        *(undefined8 *)(puVar11 + DAT_8c017dc0 + -0x1c8) = in_xd0;
      }
      *(int *)(puVar11 + DAT_8c017dc4 + -0x1c8) = (int)*(short *)(puVar11 + -0x1be);
      *(int *)(puVar11 + DAT_8c017dc8 + -0x1c8) = (int)*(short *)(puVar11 + -0x1c2);
      *(int *)(puVar11 + DAT_8c017dcc + -0x1c8) = (int)*(short *)(puVar11 + -0x1c0);
      pfVar7 = (float *)((*(int *)(puVar11 + DAT_8c017dc8 + -0x1c8) * 2 +
                         *(int *)(puVar11 + DAT_8c017dc8 + -0x1c8)) * 8 + iVar3 + 0x14);
      if (in_FPSCR_SZ == '\0') {
        fVar13 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)
               ((*(int *)(puVar11 + DAT_8c017dcc + -0x1c8) * 2 +
                *(int *)(puVar11 + DAT_8c017dcc + -0x1c8)) * 8 + iVar3 + 0x14);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
      }
      else {
        dVar14 = *pdVar6;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      pdVar6 = (double *)
               ((*(int *)(puVar11 + DAT_8c017dc4 + -0x1c8) * 2 +
                *(int *)(puVar11 + DAT_8c017dc4 + -0x1c8)) * 8 + iVar3 + 0x14);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
      }
      else {
        dVar14 = *pdVar6;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(DAT_8c017d7c,fVar13);
      }
      else {
        dVar14 = (double)CONCAT44(DAT_8c017d80,DAT_8c017d7c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = (float)((ulonglong)dVar14 >> 0x20);
        dVar14 = (double)CONCAT44(fVar13,SUB84(dVar14,0) / fVar13);
      }
      else {
        dVar14 = dVar14 / dVar14;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar11 + DAT_8c017dd0 + -0x1c8) = SUB84(dVar14,0);
      }
      else {
        *(undefined8 *)(puVar11 + DAT_8c017dd0 + -0x1c8) = in_xd0;
      }
      puVar4 = (undefined8 *)0x0;
      a5 = puVar11 + DAT_8c017d80 + -0x1c8;
      (*(code *)PTR_FUN_8c017dd8)(puVar11 + DAT_8c017dd4 + -0x1c8,a5,0,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar11 + DAT_8c017ddc + -0x1c8) = (int)((ulonglong)dVar14 >> 0x20);
        dVar14 = (double)CONCAT44(*(undefined4 *)(puVar11 + DAT_8c017ddc + -0x1c8),SUB84(dVar14,0));
      }
      else {
        *(double *)(puVar11 + DAT_8c017ddc + -0x1c8) = dVar14;
        dVar14 = *(double *)(puVar11 + DAT_8c017ddc + -0x1c8);
      }
      if (in_FPSCR_PR == '\0') {
        bVar18 = in_fr13 < (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        bVar18 = (double)CONCAT44(in_fr12,in_fr13) < dVar14;
      }
      if (!bVar18) {
        sVar10 = 0;
        while( true ) {
          uVar5 = SUB84(in_dr14,0);
          fVar13 = SUB84(dVar14,0);
          if (2 < sVar10) break;
          if (sVar10 == 0) {
            *(int *)(puVar11 + DAT_8c017ee8 + -0x1c8) = (int)*(short *)(puVar11 + -0x1c0);
            *(int *)(puVar11 + DAT_8c017eec + -0x1c8) = (int)*(short *)(puVar11 + -0x1c2);
            pfVar7 = (float *)((*(int *)(puVar11 + DAT_8c017ee8 + -0x1c8) * 2 +
                               *(int *)(puVar11 + DAT_8c017ee8 + -0x1c8)) * 8 + iVar3);
            if (in_FPSCR_SZ == '\0') {
              fVar13 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar6 = (double *)
                     ((*(int *)(puVar11 + DAT_8c017eec + -0x1c8) * 2 +
                      *(int *)(puVar11 + DAT_8c017eec + -0x1c8)) * 8 + iVar3);
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
            }
            else {
              dVar14 = *pdVar6;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 - dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + DAT_8c017ef0 + -0x1c8) = fVar13;
            }
            else {
              *(undefined8 *)(puVar11 + DAT_8c017ef0 + -0x1c8) = in_xd0;
            }
            *(int *)(puVar11 + DAT_8c017ef4 + -0x1c8) = (int)*(short *)(puVar11 + -0x1c0);
            *(int *)(puVar11 + DAT_8c017ef8 + -0x1c8) = (int)*(short *)(puVar11 + -0x1c2);
            pfVar7 = (float *)((*(int *)(puVar11 + DAT_8c017ef4 + -0x1c8) * 2 +
                               *(int *)(puVar11 + DAT_8c017ef4 + -0x1c8)) * 8 + iVar3 + 4);
            if (in_FPSCR_SZ == '\0') {
              fVar13 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar6 = (double *)
                     ((*(int *)(puVar11 + DAT_8c017ef8 + -0x1c8) * 2 +
                      *(int *)(puVar11 + DAT_8c017ef8 + -0x1c8)) * 8 + iVar3 + 4);
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
            }
            else {
              dVar14 = *pdVar6;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 - dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + DAT_8c017efc + -0x1c8) = fVar13;
            }
            else {
              *(undefined8 *)(puVar11 + DAT_8c017efc + -0x1c8) = in_xd0;
            }
            *(int *)(puVar11 + DAT_8c017f00 + -0x1c8) = (int)*(short *)(puVar11 + -0x1c0);
            *(int *)(puVar11 + DAT_8c017f04 + -0x1c8) = (int)*(short *)(puVar11 + -0x1c2);
            pfVar7 = (float *)((*(int *)(puVar11 + DAT_8c017f00 + -0x1c8) * 2 +
                               *(int *)(puVar11 + DAT_8c017f00 + -0x1c8)) * 8 + iVar3 + 8);
            if (in_FPSCR_SZ == '\0') {
              fVar13 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar6 = (double *)
                     ((*(int *)(puVar11 + DAT_8c017f04 + -0x1c8) * 2 +
                      *(int *)(puVar11 + DAT_8c017f04 + -0x1c8)) * 8 + iVar3 + 8);
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
            }
            else {
              dVar14 = *pdVar6;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 - dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + DAT_8c017f08 + -0x1c8) = fVar13;
            }
            else {
              *(undefined8 *)(puVar11 + DAT_8c017f08 + -0x1c8) = in_xd0;
            }
          }
          else if (sVar10 == 1) {
            *(int *)(puVar11 + DAT_8c017ffc + -0x1c8) = (int)*(short *)(puVar11 + -0x1be);
            *(int *)(puVar11 + DAT_8c018000 + -0x1c8) = (int)*(short *)(puVar11 + -0x1c0);
            a5 = *(undefined1 **)(puVar11 + DAT_8c017ffc + -0x1c8);
            pfVar7 = (float *)((int)(a5 + *(int *)(puVar11 + DAT_8c017ffc + -0x1c8) * 2) * 8 + iVar3
                              );
            if (in_FPSCR_SZ == '\0') {
              fVar13 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar6 = (double *)
                     ((*(int *)(puVar11 + DAT_8c018000 + -0x1c8) * 2 +
                      *(int *)(puVar11 + DAT_8c018000 + -0x1c8)) * 8 + iVar3);
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
            }
            else {
              dVar14 = *pdVar6;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 - dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + DAT_8c018004 + -0x1c8) = fVar13;
            }
            else {
              *(undefined8 *)(puVar11 + DAT_8c018004 + -0x1c8) = in_xd0;
            }
            *(int *)(puVar11 + DAT_8c018008 + -0x1c8) = (int)*(short *)(puVar11 + -0x1be);
            *(int *)(puVar11 + DAT_8c01800c + -0x1c8) = (int)*(short *)(puVar11 + -0x1c0);
            pfVar7 = (float *)((*(int *)(puVar11 + DAT_8c018008 + -0x1c8) * 2 +
                               *(int *)(puVar11 + DAT_8c018008 + -0x1c8)) * 8 + iVar3 + 4);
            if (in_FPSCR_SZ == '\0') {
              fVar13 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar6 = (double *)
                     ((*(int *)(puVar11 + DAT_8c01800c + -0x1c8) * 2 +
                      *(int *)(puVar11 + DAT_8c01800c + -0x1c8)) * 8 + iVar3 + 4);
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
            }
            else {
              dVar14 = *pdVar6;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 - dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + DAT_8c018010 + -0x1c8) = fVar13;
            }
            else {
              *(undefined8 *)(puVar11 + DAT_8c018010 + -0x1c8) = in_xd0;
            }
            *(int *)(puVar11 + -0x14c) = (int)*(short *)(puVar11 + -0x1be);
            *(int *)(puVar11 + -0x150) = (int)*(short *)(puVar11 + -0x1c0);
            pfVar7 = (float *)((*(int *)(puVar11 + -0x14c) * 2 + *(int *)(puVar11 + -0x14c)) * 8 +
                               iVar3 + 8);
            if (in_FPSCR_SZ == '\0') {
              fVar13 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar6 = (double *)
                     ((*(int *)(puVar11 + -0x150) * 2 + *(int *)(puVar11 + -0x150)) * 8 + iVar3 + 8)
            ;
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
            }
            else {
              dVar14 = *pdVar6;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 - dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + DAT_8c018014 + -0x1c8) = fVar13;
            }
            else {
              *(undefined8 *)(puVar11 + DAT_8c018014 + -0x1c8) = in_xd0;
            }
          }
          else if (sVar10 == 2) {
            *(int *)(puVar11 + -0x154) = (int)*(short *)(puVar11 + -0x1c2);
            *(int *)(puVar11 + -0x158) = (int)*(short *)(puVar11 + -0x1be);
            pfVar7 = (float *)((*(int *)(puVar11 + -0x154) * 2 + *(int *)(puVar11 + -0x154)) * 8 +
                              iVar3);
            if (in_FPSCR_SZ == '\0') {
              fVar13 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar6 = (double *)
                     ((*(int *)(puVar11 + -0x158) * 2 + *(int *)(puVar11 + -0x158)) * 8 + iVar3);
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
            }
            else {
              dVar14 = *pdVar6;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 - dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + DAT_8c01823c + -0x1c8) = fVar13;
            }
            else {
              *(undefined8 *)(puVar11 + DAT_8c01823c + -0x1c8) = in_xd0;
            }
            *(int *)(puVar11 + -0x15c) = (int)*(short *)(puVar11 + -0x1c2);
            *(int *)(puVar11 + -0x160) = (int)*(short *)(puVar11 + -0x1be);
            pfVar7 = (float *)((*(int *)(puVar11 + -0x15c) * 2 + *(int *)(puVar11 + -0x15c)) * 8 +
                               iVar3 + 4);
            if (in_FPSCR_SZ == '\0') {
              fVar13 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar6 = (double *)
                     ((*(int *)(puVar11 + -0x160) * 2 + *(int *)(puVar11 + -0x160)) * 8 + iVar3 + 4)
            ;
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
            }
            else {
              dVar14 = *pdVar6;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 - dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + DAT_8c018240 + -0x1c8) = fVar13;
            }
            else {
              *(undefined8 *)(puVar11 + DAT_8c018240 + -0x1c8) = in_xd0;
            }
            *(int *)(puVar11 + -0x164) = (int)*(short *)(puVar11 + -0x1c2);
            *(int *)(puVar11 + -0x168) = (int)*(short *)(puVar11 + -0x1be);
            pfVar7 = (float *)((*(int *)(puVar11 + -0x164) * 2 + *(int *)(puVar11 + -0x164)) * 8 +
                               iVar3 + 8);
            if (in_FPSCR_SZ == '\0') {
              fVar13 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar6 = (double *)
                     ((*(int *)(puVar11 + -0x168) * 2 + *(int *)(puVar11 + -0x168)) * 8 + iVar3 + 8)
            ;
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar13);
            }
            else {
              dVar14 = *pdVar6;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 - dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + DAT_8c018244 + -0x1c8) = fVar13;
            }
            else {
              *(undefined8 *)(puVar11 + DAT_8c018244 + -0x1c8) = in_xd0;
            }
          }
          (*(code *)PTR_Vec3_length_8c018248)(puVar11 + DAT_8c01823c + -0x1c8,a5,puVar4,a7);
          *(int *)(puVar11 + -0x16c) = (int)sVar10;
          *(int *)(puVar11 + -0x174) = (int)sVar10;
          *(int *)(puVar11 + -0x170) =
               (int)*(short *)(puVar11 + *(int *)(puVar11 + -0x174) * 2 + -0x1c2);
          puVar8 = (undefined8 *)
                   ((*(int *)(puVar11 + -0x170) * 2 + *(int *)(puVar11 + -0x170)) * 8 + iVar3 + 0xc)
          ;
          if (in_FPSCR_SZ == '\0') {
            uVar12 = *(undefined4 *)puVar8;
            uVar15 = CONCAT44(uVar12,fVar13);
            *(undefined4 *)(puVar11 + *(int *)(puVar11 + -0x16c) * 0x10 + DAT_8c01824c + -0x1c8) =
                 uVar12;
          }
          else {
            uVar15 = *puVar8;
            *(undefined8 *)(puVar11 + *(int *)(puVar11 + -0x16c) * 0x10 + DAT_8c01824c + -0x1c8) =
                 uVar15;
          }
          *(int *)(puVar11 + -0x178) = (int)sVar10;
          *(int *)(puVar11 + -0x180) = (int)sVar10;
          *(int *)(puVar11 + -0x17c) =
               (int)*(short *)(puVar11 + *(int *)(puVar11 + -0x180) * 2 + -0x1c2);
          puVar8 = (undefined8 *)
                   ((*(int *)(puVar11 + -0x17c) * 2 + *(int *)(puVar11 + -0x17c)) * 8 + iVar3 + 0x10
                   );
          if (in_FPSCR_SZ == '\0') {
            uVar12 = *(undefined4 *)puVar8;
            uVar15 = CONCAT44(uVar12,(int)uVar15);
            *(undefined4 *)(puVar11 + *(int *)(puVar11 + -0x178) * 0x10 + DAT_8c01824c + -0x1c4) =
                 uVar12;
          }
          else {
            uVar15 = *puVar8;
            *(undefined8 *)(puVar11 + *(int *)(puVar11 + -0x178) * 0x10 + DAT_8c01824c + -0x1c4) =
                 uVar15;
          }
          *(int *)(puVar11 + -0x184) = (int)sVar10;
          *(int *)(puVar11 + -0x18c) = (int)sVar10;
          *(int *)(puVar11 + -0x188) =
               (int)*(short *)(puVar11 + *(int *)(puVar11 + -0x18c) * 2 + -0x1c2);
          puVar8 = (undefined8 *)
                   ((*(int *)(puVar11 + -0x188) * 2 + *(int *)(puVar11 + -0x188)) * 8 + iVar3 + 0x14
                   );
          if (in_FPSCR_SZ == '\0') {
            uVar12 = *(undefined4 *)puVar8;
            uVar15 = CONCAT44(uVar12,(int)uVar15);
            *(undefined4 *)(puVar11 + *(int *)(puVar11 + -0x184) * 0x10 + DAT_8c01824c + -0x1c0) =
                 uVar12;
          }
          else {
            uVar15 = *puVar8;
            *(undefined8 *)(puVar11 + *(int *)(puVar11 + -0x184) * 0x10 + DAT_8c01824c + -0x1c0) =
                 uVar15;
          }
          uVar12 = (undefined4)uVar15;
          if (*(short *)(puVar11 + -0x1c4) == 0) {
            *(int *)(puVar11 + -400) = (int)sVar10;
            *(undefined1 **)(puVar11 + -0x1cc) = puVar11 + DAT_8c018250 + -0x1c8;
            (*(code *)PTR_FUN_8c018258)
                      (puVar11 + DAT_8c018240 + -0x1cc,
                       puVar11 + *(int *)(puVar11 + -400) * 0x10 + DAT_8c018254 + -0x1cc,puVar4,a7);
            (*(code *)PTR_Vec3_assign_8c018260)
                      (puVar11 + DAT_8c01825c + -0x1c8,puVar11 + DAT_8c018250 + -0x1c8,puVar4,a7);
            a5 = (undefined1 *)0xffffffff;
            (*(code *)PTR_Vec3_dtor_8c018264)(puVar11 + DAT_8c018250 + -0x1c8,0xffffffff,puVar4,a7);
          }
          else {
            *(int *)(puVar11 + -0x194) = (int)sVar10;
            *(undefined1 **)(puVar11 + -0x1cc) = puVar11 + DAT_8c018410 + -0x1c8;
            (*(code *)PTR_FUN_8c01841c)
                      (puVar11 + *(int *)(puVar11 + -0x194) * 0x10 + DAT_8c018418 + -0x1cc,
                       puVar11 + DAT_8c018414 + -0x1cc,puVar4,a7);
            (*(code *)PTR_Vec3_assign_8c018424)
                      (puVar11 + DAT_8c018420 + -0x1c8,puVar11 + DAT_8c018410 + -0x1c8,puVar4,a7);
            puVar4 = (undefined8 *)0xffffffff;
            a5 = (undefined1 *)0xffffffff;
            (*(code *)PTR_Vec3_dtor_8c018428)
                      (puVar11 + DAT_8c018410 + -0x1c8,0xffffffff,0xffffffff,a7);
          }
          *(int *)(puVar11 + -0x19c) = (int)sVar10;
          *(int *)(puVar11 + -0x198) =
               (int)*(short *)(puVar11 + *(int *)(puVar11 + -0x19c) * 2 + -0x1c2);
          *(int *)(puVar11 + -0x1a4) = (int)sVar10;
          *(int *)(puVar11 + -0x1a0) =
               (int)*(short *)(puVar11 + *(int *)(puVar11 + -0x1a4) * 2 + -0x1c2);
          *(int *)(puVar11 + -0x1ac) = (int)sVar10;
          *(int *)(puVar11 + -0x1a8) =
               (int)*(short *)(puVar11 + *(int *)(puVar11 + -0x1ac) * 2 + -0x1c2);
          pdVar6 = (double *)
                   ((*(int *)(puVar11 + -0x1a0) * 2 + *(int *)(puVar11 + -0x1a0)) * 8 + iVar3);
          if (in_FPSCR_SZ == '\0') {
            dVar17 = (double)CONCAT44(*(undefined4 *)pdVar6,uVar5);
            dVar14 = (double)CONCAT44(*(undefined4 *)(puVar11 + DAT_8c018420 + -0x1c8),uVar12);
          }
          else {
            dVar17 = *pdVar6;
            dVar14 = *(double *)(puVar11 + DAT_8c018420 + -0x1c8);
          }
          if (in_FPSCR_PR == '\0') {
            dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) *
                                      (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar17,0));
          }
          else {
            dVar17 = dVar17 * dVar14;
          }
          puVar8 = (undefined8 *)
                   ((*(int *)(puVar11 + -0x1a8) * 2 + *(int *)(puVar11 + -0x1a8)) * 8 + iVar3 + 4);
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)(puVar11 + DAT_8c01842c + -0x1c8),
                                      *(undefined4 *)puVar8);
          }
          else {
            in_xd0 = *puVar8;
            dVar14 = *(double *)(puVar11 + DAT_8c01842c + -0x1c8);
          }
          if (in_FPSCR_PR == '\0') {
            dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) +
                                      SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20),
                                      SUB84(dVar17,0));
          }
          else {
            dVar17 = dVar17 + dVar14 * dVar14;
          }
          puVar8 = (undefined8 *)
                   ((*(int *)(puVar11 + -0x198) * 2 + *(int *)(puVar11 + -0x198)) * 8 + iVar3 + 8);
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)(puVar11 + DAT_8c018430 + -0x1c8),
                                      *(undefined4 *)puVar8);
          }
          else {
            in_xd0 = *puVar8;
            dVar14 = *(double *)(puVar11 + DAT_8c018430 + -0x1c8);
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
            dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + fVar13,SUB84(dVar17,0));
          }
          else {
            fVar13 = SUB84(dVar14 * dVar14,0);
            dVar17 = dVar17 + dVar14 * dVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                      *(undefined4 *)(puVar11 + DAT_8c018420 + -0x1c8));
            dVar14 = (double)CONCAT44(*(undefined4 *)ar5,fVar13);
          }
          else {
            dVar14 = *ar5;
          }
          if (in_FPSCR_PR == '\0') {
            dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                      SUB84(dVar17,0) * (float)((ulonglong)dVar14 >> 0x20));
          }
          else {
            dVar17 = dVar17 * dVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),
                                      *(undefined4 *)(puVar11 + DAT_8c01842c + -0x1c8));
          }
          else {
            in_xd0 = *(undefined8 *)(puVar11 + DAT_8c01842c + -0x1c8);
            dVar14 = *(double *)((int)ar5 + 4);
          }
          if (in_FPSCR_PR == '\0') {
            dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                      SUB84(dVar17,0) +
                                      SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20));
          }
          else {
            dVar17 = dVar17 + dVar14 * dVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),
                                      *(undefined4 *)(puVar11 + DAT_8c018430 + -0x1c8));
          }
          else {
            in_xd0 = *(undefined8 *)(puVar11 + DAT_8c018430 + -0x1c8);
            dVar14 = ar5[1];
          }
          if (in_FPSCR_PR == '\0') {
            fVar16 = (float)((ulonglong)dVar14 >> 0x20);
            fVar13 = SUB84(dVar14,0) * fVar16;
            dVar14 = (double)CONCAT44(fVar16,fVar13);
            fVar16 = (float)((ulonglong)dVar17 >> 0x20);
            in_dr14 = (double)CONCAT44(fVar16,(SUB84(dVar17,0) + fVar13) - fVar16);
          }
          else {
            dVar14 = dVar14 * dVar14;
            in_dr14 = (dVar17 + dVar14) - (dVar17 + dVar14);
          }
          dVar14 = (double)((ulonglong)dVar14 & 0xffffffff);
          if (in_FPSCR_PR == '\0') {
            bVar18 = 0.0 < SUB84(in_dr14,0);
          }
          else {
            bVar18 = dVar14 < in_dr14;
          }
          if (bVar18) {
            sVar1 = 0;
            break;
          }
          sVar1 = sVar1 + 1;
          if (sVar1 == 3) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)ar6 = *(undefined4 *)(puVar11 + DAT_8c018434 + -0x1c8);
              *(undefined4 *)((int)ar6 + 4) = *(undefined4 *)(puVar11 + DAT_8c018438 + -0x1c8);
              *(undefined4 *)(ar6 + 1) = *(undefined4 *)(puVar11 + DAT_8c01843c + -0x1c8);
              *(undefined4 *)ar7 = *(undefined4 *)(puVar11 + DAT_8c018440 + -0x1c8);
            }
            else {
              *ar6 = *(undefined8 *)(puVar11 + DAT_8c018434 + -0x1c8);
              *(undefined8 *)((int)ar6 + 4) = *(undefined8 *)(puVar11 + DAT_8c018438 + -0x1c8);
              ar6[1] = *(undefined8 *)(puVar11 + DAT_8c01843c + -0x1c8);
              *ar7 = *(undefined8 *)(puVar11 + DAT_8c018440 + -0x1c8);
            }
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)((int)ar7 + 4) = *(undefined4 *)(puVar11 + DAT_8c018444 + -0x1c8);
              *(undefined4 *)(ar7 + 1) = *(undefined4 *)(puVar11 + DAT_8c018448 + -0x1c8);
            }
            else {
              *(undefined8 *)((int)ar7 + 4) = *(undefined8 *)(puVar11 + DAT_8c018444 + -0x1c8);
              ar7[1] = *(undefined8 *)(puVar11 + DAT_8c018448 + -0x1c8);
            }
            *(undefined4 *)(puVar11 + DAT_8c01844c + -0x1c8) = 1;
            (*(code *)PTR_Vec3_dtor_8c018428)(puVar11 + DAT_8c018420 + -0x1c8,0xffffffff,puVar4,a7);
            (*(code *)PTR_Vec3_dtor_8c018428)(puVar11 + DAT_8c018450 + -0x1c8,0xffffffff,puVar4,a7);
            (*(code *)PTR_Vec3_dtor_8c018428)(puVar11 + DAT_8c018454 + -0x1c8,0xffffffff,puVar4,a7);
            (*(code *)PTR_Vec3_dtor_8c018428)(puVar11 + DAT_8c018458 + -0x1c8,0xffffffff,puVar4,a7);
            (*(code *)PTR_Vec3_dtor_8c018428)(puVar11 + DAT_8c01845c + -0x1c8,0xffffffff,puVar4,a7);
            (*(code *)PTR_Vec3_dtor_8c018428)(puVar11 + DAT_8c018460 + -0x1c8,0xffffffff,puVar4,a7);
            return *(undefined4 *)(puVar11 + DAT_8c01844c + -0x1c8);
          }
          sVar10 = sVar10 + 1;
        }
        *(ushort *)(puVar11 + -0x1c4) = *(ushort *)(puVar11 + -0x1c4) ^ 1;
      }
    }
    *(short *)(puVar11 + -0x1ba) = *(short *)(puVar11 + -0x1ba) + 1;
  } while( true );
}



/* FUN_8c0185a4 @ 8c0185a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0185a4(undefined4 ar4,double *ar5,undefined8 *ar6,undefined8 *ar7)

{
  short sVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *a5;
  undefined8 *a7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  short sVar10;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar11;
  undefined4 in_fr1;
  undefined4 uVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float in_fr4;
  float in_fr13;
  undefined4 in_fr12;
  double in_dr14;
  double dVar16;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar17;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [4];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar11 = auStack_c;
  }
  else {
    puVar11 = auStack_18;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)(puVar11 + -4) = unaff_r14;
  *(undefined4 *)(puVar11 + -8) = unaff_r13;
  *(undefined4 *)(puVar11 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar11 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar11 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar11 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar11 + -0x1c) = unaff_r8;
  *(undefined4 *)(puVar11 + -0x20) = in_PR;
  *(undefined4 *)(puVar11 + -0x164) = ar4;
  if (in_FPSCR_SZ == '\0') {
    in_fr13 = in_fr4;
  }
  puVar2 = *(undefined2 **)(*(int *)(puVar11 + -0x164) + 4);
  *(undefined4 *)(puVar11 + DAT_8c018648 + -0x164) = 0;
  *(undefined2 *)(puVar11 + -0x158) = 0;
  sVar1 = 0;
  pdVar4 = ar5;
  puVar3 = ar6;
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c018650)(puVar11 + DAT_8c01864c + -0x164,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c018658)(puVar11 + DAT_8c018654 + -0x164,pdVar4,puVar3,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c018650)(puVar11 + DAT_8c01865c + -0x164,pdVar4,puVar3,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c018650)(puVar11 + DAT_8c018660 + -0x164,pdVar4,puVar3,a7);
  iVar8 = *(int *)(*(int *)(puVar11 + -0x164) + 8);
  puVar9 = (undefined4 *)(puVar11 + DAT_8c018664 + -0x164);
  uVar7 = *(undefined4 *)(PTR_DAT_8c018668 + 4);
  *puVar9 = *(undefined4 *)PTR_DAT_8c018668;
  puVar9[1] = uVar7;
  puVar9[2] = *(undefined4 *)(PTR_DAT_8c018668 + 8);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar11 + DAT_8c018664 + -0x164) = *(undefined4 *)ar5;
    *(undefined4 *)(puVar11 + DAT_8c01866c + -0x164) = *(undefined4 *)((int)ar5 + 4);
    dVar14 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),in_fr1);
    *(undefined4 *)(puVar11 + DAT_8c018670 + -0x164) = *(undefined4 *)(ar5 + 1);
  }
  else {
    *(double *)(puVar11 + DAT_8c018664 + -0x164) = *ar5;
    *(undefined8 *)(puVar11 + DAT_8c01866c + -0x164) = *(undefined8 *)((int)ar5 + 4);
    dVar14 = ar5[1];
    *(double *)(puVar11 + DAT_8c018670 + -0x164) = dVar14;
  }
  *(undefined2 *)(puVar11 + -0x156) = 0;
  do {
    if (*(int *)(*(int *)(puVar11 + -0x164) + 0xc) <= (int)*(short *)(puVar11 + -0x156)) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar11 + -0x150) = 0;
        *(undefined4 *)(ar6 + 1) = *(undefined4 *)(puVar11 + -0x150);
        *(undefined4 *)(puVar11 + -0x154) = *(undefined4 *)(puVar11 + -0x150);
        *(undefined4 *)((int)ar6 + 4) = *(undefined4 *)(puVar11 + -0x154);
        *(undefined4 *)ar6 = *(undefined4 *)(puVar11 + -0x154);
      }
      else {
        *(ulonglong *)(puVar11 + -0x150) = (ulonglong)dVar14 & 0xffffffff;
        ar6[1] = *(undefined8 *)(puVar11 + -0x150);
        *(undefined8 *)(puVar11 + -0x154) = *(undefined8 *)(puVar11 + -0x150);
        *(undefined8 *)((int)ar6 + 4) = *(undefined8 *)(puVar11 + -0x154);
        *ar6 = *(undefined8 *)(puVar11 + -0x154);
      }
      *(undefined4 *)(puVar11 + DAT_8c018f64 + -0x164) = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c018f6c)(puVar11 + DAT_8c018f68 + -0x164,0xffffffff,puVar3,a7);
      (*(code *)PTR_Vec3_dtor_8c018f6c)(puVar11 + DAT_8c018f70 + -0x164,0xffffffff,puVar3,a7);
      (*(code *)PTR_Vec3_dtor_8c018f6c)(puVar11 + DAT_8c018f74 + -0x164,0xffffffff,puVar3,a7);
      (*(code *)PTR_Vec3_dtor_8c018f6c)(puVar11 + DAT_8c018f78 + -0x164,0xffffffff,puVar3,a7);
      return *(undefined4 *)(puVar11 + DAT_8c018f64 + -0x164);
    }
    *(undefined2 *)(puVar11 + -0x158) = *puVar2;
    if (*(short *)(puVar11 + -0x158) < 0) {
      *(int *)(puVar11 + DAT_8c01869c + -0x164) = (int)*(short *)(puVar11 + -0x158);
      *(short *)(puVar11 + -0x158) = -(short)*(undefined4 *)(puVar11 + DAT_8c01869c + -0x164);
      *(undefined2 *)(puVar11 + -0x160) = 1;
    }
    else {
      *(undefined2 *)(puVar11 + -0x160) = 0;
    }
    puVar2 = puVar2 + 1;
    *(undefined2 **)(puVar11 + DAT_8c0186b4 + -0x164) = puVar2;
    while( true ) {
      uVar7 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c018f60)
                        ((int)puVar2 - *(int *)(puVar11 + DAT_8c018f5c + -0x164),2,puVar3,a7);
      uVar12 = SUB84(dVar14,0);
      *(undefined4 *)(puVar11 + -0x14c) = uVar7;
      if ((int)*(short *)(puVar11 + -0x158) <= *(int *)(puVar11 + -0x14c)) break;
      if (puVar2 == *(undefined2 **)(puVar11 + DAT_8c0186e4 + -0x164)) {
        *(undefined2 *)(puVar11 + -0x15e) = *puVar2;
        *(undefined2 *)(puVar11 + -0x15c) = puVar2[1];
        *(undefined2 *)(puVar11 + -0x15a) = puVar2[2];
        puVar2 = puVar2 + 3;
      }
      else {
        *(undefined2 *)(puVar11 + -0x15e) = *(undefined2 *)(puVar11 + -0x15c);
        *(undefined2 *)(puVar11 + -0x15c) = *(undefined2 *)(puVar11 + -0x15a);
        *(undefined2 *)(puVar11 + -0x15a) = *puVar2;
        puVar2 = puVar2 + 1;
      }
      *(int *)(puVar11 + DAT_8c0189f0 + -0x164) = (int)*(short *)(puVar11 + -0x15a);
      *(int *)(puVar11 + DAT_8c0189f4 + -0x164) = (int)*(short *)(puVar11 + -0x15e);
      *(int *)(puVar11 + DAT_8c0189f8 + -0x164) = (int)*(short *)(puVar11 + -0x15c);
      puVar3 = (undefined8 *)
               ((*(int *)(puVar11 + DAT_8c0189f4 + -0x164) * 2 +
                *(int *)(puVar11 + DAT_8c0189f4 + -0x164)) * 8 + iVar8);
      if (in_FPSCR_SZ == '\0') {
        uVar12 = *(undefined4 *)puVar3;
      }
      else {
        in_xd0 = *puVar3;
      }
      pdVar4 = (double *)
               ((*(int *)(puVar11 + DAT_8c0189f8 + -0x164) * 2 +
                *(int *)(puVar11 + DAT_8c0189f8 + -0x164)) * 8 + iVar8);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,uVar12);
      }
      else {
        dVar14 = *pdVar4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      pdVar4 = (double *)
               ((*(int *)(puVar11 + DAT_8c0189f0 + -0x164) * 2 +
                *(int *)(puVar11 + DAT_8c0189f0 + -0x164)) * 8 + iVar8);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
      }
      else {
        dVar14 = *pdVar4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(DAT_8c0189fc,fVar13);
      }
      else {
        dVar14 = (double)CONCAT44(DAT_8c018a00,DAT_8c0189fc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) / (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar11 + DAT_8c018a00 + -0x164) = fVar13;
      }
      else {
        *(undefined8 *)(puVar11 + DAT_8c018a00 + -0x164) = in_xd0;
      }
      *(int *)(puVar11 + DAT_8c018a04 + -0x164) = (int)*(short *)(puVar11 + -0x15a);
      *(int *)(puVar11 + DAT_8c018a08 + -0x164) = (int)*(short *)(puVar11 + -0x15e);
      *(int *)(puVar11 + DAT_8c018a0c + -0x164) = (int)*(short *)(puVar11 + -0x15c);
      pfVar5 = (float *)((*(int *)(puVar11 + DAT_8c018a08 + -0x164) * 2 +
                         *(int *)(puVar11 + DAT_8c018a08 + -0x164)) * 8 + iVar8 + 4);
      if (in_FPSCR_SZ == '\0') {
        fVar13 = *pfVar5;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar5;
      }
      pdVar4 = (double *)
               ((*(int *)(puVar11 + DAT_8c018a0c + -0x164) * 2 +
                *(int *)(puVar11 + DAT_8c018a0c + -0x164)) * 8 + iVar8 + 4);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
      }
      else {
        dVar14 = *pdVar4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      pdVar4 = (double *)
               ((*(int *)(puVar11 + DAT_8c018a04 + -0x164) * 2 +
                *(int *)(puVar11 + DAT_8c018a04 + -0x164)) * 8 + iVar8 + 4);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
      }
      else {
        dVar14 = *pdVar4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(DAT_8c0189fc,fVar13);
      }
      else {
        dVar14 = (double)CONCAT44(DAT_8c018a00,DAT_8c0189fc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) / (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar11 + DAT_8c018a10 + -0x164) = fVar13;
      }
      else {
        *(undefined8 *)(puVar11 + DAT_8c018a10 + -0x164) = in_xd0;
      }
      *(int *)(puVar11 + DAT_8c018a14 + -0x164) = (int)*(short *)(puVar11 + -0x15a);
      *(int *)(puVar11 + DAT_8c018a18 + -0x164) = (int)*(short *)(puVar11 + -0x15e);
      *(int *)(puVar11 + DAT_8c018a1c + -0x164) = (int)*(short *)(puVar11 + -0x15c);
      pfVar5 = (float *)((*(int *)(puVar11 + DAT_8c018a18 + -0x164) * 2 +
                         *(int *)(puVar11 + DAT_8c018a18 + -0x164)) * 8 + iVar8 + 8);
      if (in_FPSCR_SZ == '\0') {
        fVar13 = *pfVar5;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar5;
      }
      pdVar4 = (double *)
               ((*(int *)(puVar11 + DAT_8c018a1c + -0x164) * 2 +
                *(int *)(puVar11 + DAT_8c018a1c + -0x164)) * 8 + iVar8 + 8);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
      }
      else {
        dVar14 = *pdVar4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      pdVar4 = (double *)
               ((*(int *)(puVar11 + DAT_8c018a14 + -0x164) * 2 +
                *(int *)(puVar11 + DAT_8c018a14 + -0x164)) * 8 + iVar8 + 8);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
      }
      else {
        dVar14 = *pdVar4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(DAT_8c0189fc,fVar13);
      }
      else {
        dVar14 = (double)CONCAT44(DAT_8c018a00,DAT_8c0189fc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) / (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar11 + DAT_8c018a20 + -0x164) = fVar13;
      }
      else {
        *(undefined8 *)(puVar11 + DAT_8c018a20 + -0x164) = in_xd0;
      }
      *(int *)(puVar11 + DAT_8c018a24 + -0x164) = (int)*(short *)(puVar11 + -0x15a);
      *(int *)(puVar11 + DAT_8c018a28 + -0x164) = (int)*(short *)(puVar11 + -0x15e);
      *(int *)(puVar11 + -0xe8) = (int)*(short *)(puVar11 + -0x15c);
      pfVar5 = (float *)((*(int *)(puVar11 + DAT_8c018a28 + -0x164) * 2 +
                         *(int *)(puVar11 + DAT_8c018a28 + -0x164)) * 8 + iVar8 + 0xc);
      if (in_FPSCR_SZ == '\0') {
        fVar13 = *pfVar5;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar5;
      }
      pdVar4 = (double *)
               ((*(int *)(puVar11 + -0xe8) * 2 + *(int *)(puVar11 + -0xe8)) * 8 + iVar8 + 0xc);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
      }
      else {
        dVar14 = *pdVar4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      pdVar4 = (double *)
               ((*(int *)(puVar11 + DAT_8c018a24 + -0x164) * 2 +
                *(int *)(puVar11 + DAT_8c018a24 + -0x164)) * 8 + iVar8 + 0xc);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
      }
      else {
        dVar14 = *pdVar4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(DAT_8c0189fc,fVar13);
      }
      else {
        dVar14 = (double)CONCAT44(DAT_8c018a00,DAT_8c0189fc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) / (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar11 + DAT_8c018a2c + -0x164) = fVar13;
      }
      else {
        *(undefined8 *)(puVar11 + DAT_8c018a2c + -0x164) = in_xd0;
      }
      *(int *)(puVar11 + -0xec) = (int)*(short *)(puVar11 + -0x15a);
      *(int *)(puVar11 + -0xf0) = (int)*(short *)(puVar11 + -0x15e);
      *(int *)(puVar11 + -0xf4) = (int)*(short *)(puVar11 + -0x15c);
      pfVar5 = (float *)((*(int *)(puVar11 + -0xf0) * 2 + *(int *)(puVar11 + -0xf0)) * 8 + iVar8 +
                        0x10);
      if (in_FPSCR_SZ == '\0') {
        fVar13 = *pfVar5;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar5;
      }
      pdVar4 = (double *)
               ((*(int *)(puVar11 + -0xf4) * 2 + *(int *)(puVar11 + -0xf4)) * 8 + iVar8 + 0x10);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
      }
      else {
        dVar14 = *pdVar4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      pdVar4 = (double *)
               ((*(int *)(puVar11 + -0xec) * 2 + *(int *)(puVar11 + -0xec)) * 8 + iVar8 + 0x10);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
      }
      else {
        dVar14 = *pdVar4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(DAT_8c0189fc,fVar13);
      }
      else {
        dVar14 = (double)CONCAT44(DAT_8c018a00,DAT_8c0189fc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) / (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 / dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar11 + DAT_8c018a30 + -0x164) = fVar13;
      }
      else {
        *(undefined8 *)(puVar11 + DAT_8c018a30 + -0x164) = in_xd0;
      }
      *(int *)(puVar11 + -0xf8) = (int)*(short *)(puVar11 + -0x15a);
      *(int *)(puVar11 + -0xfc) = (int)*(short *)(puVar11 + -0x15e);
      *(int *)(puVar11 + -0x100) = (int)*(short *)(puVar11 + -0x15c);
      pfVar5 = (float *)((*(int *)(puVar11 + -0xfc) * 2 + *(int *)(puVar11 + -0xfc)) * 8 + iVar8 +
                        0x14);
      if (in_FPSCR_SZ == '\0') {
        fVar13 = *pfVar5;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar5;
      }
      pdVar4 = (double *)
               ((*(int *)(puVar11 + -0x100) * 2 + *(int *)(puVar11 + -0x100)) * 8 + iVar8 + 0x14);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
      }
      else {
        dVar14 = *pdVar4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      pdVar4 = (double *)
               ((*(int *)(puVar11 + -0xf8) * 2 + *(int *)(puVar11 + -0xf8)) * 8 + iVar8 + 0x14);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
      }
      else {
        dVar14 = *pdVar4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar14 + dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(DAT_8c0189fc,fVar13);
      }
      else {
        dVar14 = (double)CONCAT44(DAT_8c018a00,DAT_8c0189fc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = (float)((ulonglong)dVar14 >> 0x20);
        dVar14 = (double)CONCAT44(fVar13,SUB84(dVar14,0) / fVar13);
      }
      else {
        dVar14 = dVar14 / dVar14;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar11 + DAT_8c018a34 + -0x164) = SUB84(dVar14,0);
      }
      else {
        *(undefined8 *)(puVar11 + DAT_8c018a34 + -0x164) = in_xd0;
      }
      puVar3 = (undefined8 *)0x0;
      a5 = puVar11 + DAT_8c018a00 + -0x164;
      (*(code *)PTR_FUN_8c018a3c)(puVar11 + DAT_8c018a38 + -0x164,a5,0,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar11 + DAT_8c018a40 + -0x164) = (int)((ulonglong)dVar14 >> 0x20);
        dVar14 = (double)CONCAT44(*(undefined4 *)(puVar11 + DAT_8c018a40 + -0x164),SUB84(dVar14,0));
      }
      else {
        *(double *)(puVar11 + DAT_8c018a40 + -0x164) = dVar14;
        dVar14 = *(double *)(puVar11 + DAT_8c018a40 + -0x164);
      }
      if (in_FPSCR_PR == '\0') {
        bVar17 = in_fr13 < (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        bVar17 = (double)CONCAT44(in_fr12,in_fr13) < dVar14;
      }
      if (!bVar17) {
        sVar10 = 0;
        while( true ) {
          uVar7 = SUB84(in_dr14,0);
          fVar13 = SUB84(dVar14,0);
          if (2 < sVar10) break;
          if (sVar10 == 0) {
            *(int *)(puVar11 + -0x104) = (int)*(short *)(puVar11 + -0x15c);
            *(int *)(puVar11 + -0x108) = (int)*(short *)(puVar11 + -0x15e);
            pfVar5 = (float *)((*(int *)(puVar11 + -0x104) * 2 + *(int *)(puVar11 + -0x104)) * 8 +
                              iVar8);
            if (in_FPSCR_SZ == '\0') {
              fVar13 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar4 = (double *)
                     ((*(int *)(puVar11 + -0x108) * 2 + *(int *)(puVar11 + -0x108)) * 8 + iVar8);
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
            }
            else {
              dVar14 = *pdVar4;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 - dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + DAT_8c018af8 + -0x164) = fVar13;
            }
            else {
              *(undefined8 *)(puVar11 + DAT_8c018af8 + -0x164) = in_xd0;
            }
            *(int *)(puVar11 + -0x10c) = (int)*(short *)(puVar11 + -0x15c);
            *(int *)(puVar11 + -0x110) = (int)*(short *)(puVar11 + -0x15e);
            pfVar5 = (float *)((*(int *)(puVar11 + -0x10c) * 2 + *(int *)(puVar11 + -0x10c)) * 8 +
                               iVar8 + 8);
            if (in_FPSCR_SZ == '\0') {
              fVar13 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar4 = (double *)
                     ((*(int *)(puVar11 + -0x110) * 2 + *(int *)(puVar11 + -0x110)) * 8 + iVar8 + 8)
            ;
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
            }
            else {
              dVar14 = *pdVar4;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 - dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + DAT_8c018afc + -0x164) = fVar13;
            }
            else {
              *(undefined8 *)(puVar11 + DAT_8c018afc + -0x164) = in_xd0;
            }
          }
          else if (sVar10 == 1) {
            *(int *)(puVar11 + -0x114) = (int)*(short *)(puVar11 + -0x15a);
            *(int *)(puVar11 + -0x118) = (int)*(short *)(puVar11 + -0x15c);
            pfVar5 = (float *)((*(int *)(puVar11 + -0x114) * 2 + *(int *)(puVar11 + -0x114)) * 8 +
                              iVar8);
            if (in_FPSCR_SZ == '\0') {
              fVar13 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar4 = (double *)
                     ((*(int *)(puVar11 + -0x118) * 2 + *(int *)(puVar11 + -0x118)) * 8 + iVar8);
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
            }
            else {
              dVar14 = *pdVar4;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 - dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + DAT_8c018b98 + -0x164) = fVar13;
            }
            else {
              *(undefined8 *)(puVar11 + DAT_8c018b98 + -0x164) = in_xd0;
            }
            *(int *)(puVar11 + -0x11c) = (int)*(short *)(puVar11 + -0x15a);
            *(int *)(puVar11 + -0x120) = (int)*(short *)(puVar11 + -0x15c);
            pfVar5 = (float *)((*(int *)(puVar11 + -0x11c) * 2 + *(int *)(puVar11 + -0x11c)) * 8 +
                               iVar8 + 8);
            if (in_FPSCR_SZ == '\0') {
              fVar13 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar4 = (double *)
                     ((*(int *)(puVar11 + -0x120) * 2 + *(int *)(puVar11 + -0x120)) * 8 + iVar8 + 8)
            ;
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
            }
            else {
              dVar14 = *pdVar4;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 - dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + DAT_8c018b9c + -0x164) = fVar13;
            }
            else {
              *(undefined8 *)(puVar11 + DAT_8c018b9c + -0x164) = in_xd0;
            }
          }
          else if (sVar10 == 2) {
            *(int *)(puVar11 + -0x124) = (int)*(short *)(puVar11 + -0x15e);
            *(int *)(puVar11 + -0x128) = (int)*(short *)(puVar11 + -0x15a);
            pfVar5 = (float *)((*(int *)(puVar11 + -0x124) * 2 + *(int *)(puVar11 + -0x124)) * 8 +
                              iVar8);
            if (in_FPSCR_SZ == '\0') {
              fVar13 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar4 = (double *)
                     ((*(int *)(puVar11 + -0x128) * 2 + *(int *)(puVar11 + -0x128)) * 8 + iVar8);
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
            }
            else {
              dVar14 = *pdVar4;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 - dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + DAT_8c018c70 + -0x164) = fVar13;
            }
            else {
              *(undefined8 *)(puVar11 + DAT_8c018c70 + -0x164) = in_xd0;
            }
            *(int *)(puVar11 + -300) = (int)*(short *)(puVar11 + -0x15e);
            *(int *)(puVar11 + -0x130) = (int)*(short *)(puVar11 + -0x15a);
            pfVar5 = (float *)((*(int *)(puVar11 + -300) * 2 + *(int *)(puVar11 + -300)) * 8 + iVar8
                              + 8);
            if (in_FPSCR_SZ == '\0') {
              fVar13 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar4 = (double *)
                     ((*(int *)(puVar11 + -0x130) * 2 + *(int *)(puVar11 + -0x130)) * 8 + iVar8 + 8)
            ;
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar13);
            }
            else {
              dVar14 = *pdVar4;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar14 - dVar14,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + DAT_8c018c74 + -0x164) = fVar13;
            }
            else {
              *(undefined8 *)(puVar11 + DAT_8c018c74 + -0x164) = in_xd0;
            }
          }
          (*(code *)PTR_Vec3_length_8c018c78)(puVar11 + DAT_8c018c70 + -0x164,a5,puVar3,a7);
          if (*(short *)(puVar11 + -0x160) == 0) {
            *(undefined1 **)(puVar11 + -0x168) = puVar11 + DAT_8c018c7c + -0x164;
            (*(code *)PTR_FUN_8c018c88)
                      (puVar11 + DAT_8c018c84 + -0x168,puVar11 + DAT_8c018c80 + -0x168,puVar3,a7);
            (*(code *)PTR_Vec3_assign_8c018c90)
                      (puVar11 + DAT_8c018c8c + -0x164,puVar11 + DAT_8c018c7c + -0x164,puVar3,a7);
            a5 = (undefined1 *)0xffffffff;
            (*(code *)PTR_Vec3_dtor_8c018c94)(puVar11 + DAT_8c018c7c + -0x164,0xffffffff,puVar3,a7);
          }
          else {
            *(undefined1 **)(puVar11 + -0x168) = puVar11 + DAT_8c018e1c + -0x164;
            (*(code *)PTR_FUN_8c018e28)
                      (puVar11 + DAT_8c018e24 + -0x168,puVar11 + DAT_8c018e20 + -0x168,puVar3,a7);
            (*(code *)PTR_Vec3_assign_8c018e30)
                      (puVar11 + DAT_8c018e2c + -0x164,puVar11 + DAT_8c018e1c + -0x164,puVar3,a7);
            a5 = (undefined1 *)0xffffffff;
            (*(code *)PTR_Vec3_dtor_8c018e34)(puVar11 + DAT_8c018e1c + -0x164,0xffffffff,puVar3,a7);
          }
          *(int *)(puVar11 + -0x138) = (int)sVar10;
          *(int *)(puVar11 + -0x134) =
               (int)*(short *)(puVar11 + *(int *)(puVar11 + -0x138) * 2 + -0x15e);
          *(int *)(puVar11 + -0x140) = (int)sVar10;
          *(int *)(puVar11 + -0x13c) =
               (int)*(short *)(puVar11 + *(int *)(puVar11 + -0x140) * 2 + -0x15e);
          *(int *)(puVar11 + -0x148) = (int)sVar10;
          *(int *)(puVar11 + -0x144) =
               (int)*(short *)(puVar11 + *(int *)(puVar11 + -0x148) * 2 + -0x15e);
          pdVar4 = (double *)
                   ((*(int *)(puVar11 + -0x13c) * 2 + *(int *)(puVar11 + -0x13c)) * 8 + iVar8);
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar4,uVar7);
            dVar14 = (double)CONCAT44(*(undefined4 *)(puVar11 + DAT_8c018e2c + -0x164),fVar13);
          }
          else {
            dVar16 = *pdVar4;
            dVar14 = *(double *)(puVar11 + DAT_8c018e2c + -0x164);
          }
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) *
                                      (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 * dVar14;
          }
          puVar6 = (undefined8 *)
                   ((*(int *)(puVar11 + -0x144) * 2 + *(int *)(puVar11 + -0x144)) * 8 + iVar8 + 4);
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)(puVar11 + DAT_8c018e38 + -0x164),
                                      *(undefined4 *)puVar6);
          }
          else {
            in_xd0 = *puVar6;
            dVar14 = *(double *)(puVar11 + DAT_8c018e38 + -0x164);
          }
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) +
                                      SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20),
                                      SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar14 * dVar14;
          }
          puVar6 = (undefined8 *)
                   ((*(int *)(puVar11 + -0x134) * 2 + *(int *)(puVar11 + -0x134)) * 8 + iVar8 + 8);
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)(puVar11 + DAT_8c018e3c + -0x164),
                                      *(undefined4 *)puVar6);
          }
          else {
            in_xd0 = *puVar6;
            dVar14 = *(double *)(puVar11 + DAT_8c018e3c + -0x164);
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + fVar13,SUB84(dVar16,0));
          }
          else {
            fVar13 = SUB84(dVar14 * dVar14,0);
            dVar16 = dVar16 + dVar14 * dVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                      *(undefined4 *)(puVar11 + DAT_8c018e2c + -0x164));
            dVar14 = (double)CONCAT44(*(undefined4 *)ar5,fVar13);
          }
          else {
            dVar14 = *ar5;
          }
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                      SUB84(dVar16,0) * (float)((ulonglong)dVar14 >> 0x20));
          }
          else {
            dVar16 = dVar16 * dVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),
                                      *(undefined4 *)(puVar11 + DAT_8c018e38 + -0x164));
          }
          else {
            in_xd0 = *(undefined8 *)(puVar11 + DAT_8c018e38 + -0x164);
            dVar14 = *(double *)((int)ar5 + 4);
          }
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                      SUB84(dVar16,0) +
                                      SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20));
          }
          else {
            dVar16 = dVar16 + dVar14 * dVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),
                                      *(undefined4 *)(puVar11 + DAT_8c018e3c + -0x164));
          }
          else {
            in_xd0 = *(undefined8 *)(puVar11 + DAT_8c018e3c + -0x164);
            dVar14 = ar5[1];
          }
          if (in_FPSCR_PR == '\0') {
            fVar15 = (float)((ulonglong)dVar14 >> 0x20);
            fVar13 = SUB84(dVar14,0) * fVar15;
            dVar14 = (double)CONCAT44(fVar15,fVar13);
            fVar15 = (float)((ulonglong)dVar16 >> 0x20);
            in_dr14 = (double)CONCAT44(fVar15,(SUB84(dVar16,0) + fVar13) - fVar15);
          }
          else {
            dVar14 = dVar14 * dVar14;
            in_dr14 = (dVar16 + dVar14) - (dVar16 + dVar14);
          }
          dVar14 = (double)((ulonglong)dVar14 & 0xffffffff);
          if (in_FPSCR_PR == '\0') {
            bVar17 = 0.0 < SUB84(in_dr14,0);
          }
          else {
            bVar17 = dVar14 < in_dr14;
          }
          if (bVar17) {
            sVar1 = 0;
            break;
          }
          sVar1 = sVar1 + 1;
          if (sVar1 == 3) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)ar6 = *(undefined4 *)(puVar11 + DAT_8c018e40 + -0x164);
            }
            else {
              *ar6 = *(undefined8 *)(puVar11 + DAT_8c018e40 + -0x164);
            }
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)((int)ar6 + 4) = *(undefined4 *)(puVar11 + DAT_8c018e44 + -0x164);
            }
            else {
              *(undefined8 *)((int)ar6 + 4) = *(undefined8 *)(puVar11 + DAT_8c018e44 + -0x164);
            }
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar6 + 1) = *(undefined4 *)(puVar11 + DAT_8c018e48 + -0x164);
              *(undefined4 *)ar7 = *(undefined4 *)(puVar11 + DAT_8c018e4c + -0x164);
            }
            else {
              ar6[1] = *(undefined8 *)(puVar11 + DAT_8c018e48 + -0x164);
              *ar7 = *(undefined8 *)(puVar11 + DAT_8c018e4c + -0x164);
            }
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)((int)ar7 + 4) = *(undefined4 *)(puVar11 + DAT_8c018e50 + -0x164);
              *(undefined4 *)(ar7 + 1) = *(undefined4 *)(puVar11 + DAT_8c018e54 + -0x164);
            }
            else {
              *(undefined8 *)((int)ar7 + 4) = *(undefined8 *)(puVar11 + DAT_8c018e50 + -0x164);
              ar7[1] = *(undefined8 *)(puVar11 + DAT_8c018e54 + -0x164);
            }
            *(undefined4 *)(puVar11 + DAT_8c018e58 + -0x164) = 1;
            (*(code *)PTR_Vec3_dtor_8c018e34)(puVar11 + DAT_8c018e2c + -0x164,0xffffffff,puVar3,a7);
            (*(code *)PTR_Vec3_dtor_8c018e34)(puVar11 + DAT_8c018e5c + -0x164,0xffffffff,puVar3,a7);
            (*(code *)PTR_Vec3_dtor_8c018e34)(puVar11 + DAT_8c018e60 + -0x164,0xffffffff,puVar3,a7);
            (*(code *)PTR_Vec3_dtor_8c018e34)(puVar11 + DAT_8c018e64 + -0x164,0xffffffff,puVar3,a7);
            return *(undefined4 *)(puVar11 + DAT_8c018e58 + -0x164);
          }
          sVar10 = sVar10 + 1;
        }
        *(ushort *)(puVar11 + -0x160) = *(ushort *)(puVar11 + -0x160) ^ 1;
      }
    }
    *(short *)(puVar11 + -0x156) = *(short *)(puVar11 + -0x156) + 1;
  } while( true );
}



/* noop_018f7c @ 8c018f7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_018f7c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c018f80 @ 8c018f80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c018f80(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)ar5;
    *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 0x38) = *(undefined4 *)(ar5 + 1);
    *(undefined4 *)(ar4 + 0x3c) = in_fr4;
  }
  else {
    *(undefined8 *)(ar4 + 0x30) = *ar5;
    *(undefined8 *)(ar4 + 0x34) = *(undefined8 *)((int)ar5 + 4);
    *(undefined8 *)(ar4 + 0x38) = ar5[1];
    *(ulonglong *)(ar4 + 0x3c) = CONCAT44(in_fr4,in_fr5);
  }
  return ar4 + 0x38;
}



/* noop_018fa8 @ 8c018fa8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_018fa8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_018fac @ 8c018fac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_018fac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c018fb0 @ 8c018fb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c018fb0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c019030)(PTR_DAT_8c01902c,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c019038;
  uVar2 = DAT_8c019034;
  (*(code *)PTR_global_list_push_8c01903c)(uVar1,PTR_Vec3_dtor_8c019038,DAT_8c019034,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c019030)(PTR_DAT_8c019040,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c019038;
  uVar2 = DAT_8c019044;
  (*(code *)PTR_global_list_push_8c01903c)(uVar1,PTR_Vec3_dtor_8c019038,DAT_8c019044,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c019030)(PTR_DAT_8c019048,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c019038;
  uVar2 = DAT_8c01904c;
  (*(code *)PTR_global_list_push_8c01903c)(uVar1,PTR_Vec3_dtor_8c019038,DAT_8c01904c,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c019030)(PTR_DAT_8c019050,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c01903c)(uVar2,PTR_Vec3_dtor_8c019038,DAT_8c019054,ar7);
  return uVar2;
}



/* FUN_8c019058 @ 8c019058 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c019058(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c019084)(0,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c019088 @ 8c019088 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c019088(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  undefined4 in_xf4;
  int a7;
  int a6;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0190e4,in_fr6);
    uStack_10 = in_fr4;
    uStack_c = in_fr5;
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0190e8,DAT_8c0190e4);
    uStack_10 = in_fr5;
    uStack_c = in_xf4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0190e8,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0190ec,DAT_8c0190e8);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a7 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0190e4,uStack_c);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0190e8,DAT_8c0190e4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0190e8,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0190ec,DAT_8c0190e8);
  }
  if (in_FPSCR_PR == '\0') {
    a6 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a6 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0190e4,uStack_10);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0190e8,DAT_8c0190e4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0190e8,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0190ec,DAT_8c0190e8);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  uVar1 = (*(code *)PTR_FUN_8c0190ec)(0,a5,a6,a7);
  return uVar1;
}



/* FUN_8c0190f0 @ 8c0190f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0190f0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined4 in_fr4;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c01911c,in_fr4);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c019120,DAT_8c01911c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c019120,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c019124,DAT_8c019120);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  uVar1 = (*(code *)PTR_FUN_8c019124)(0,a5,ar6,ar7);
  return uVar1;
}



/* FUN_8c019128 @ 8c019128 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c019128(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined4 in_fr4;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c019154,in_fr4);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c019158,DAT_8c019154);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c019158,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c01915c,DAT_8c019158);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  uVar1 = (*(code *)PTR_FUN_8c01915c)(0,a5,ar6,ar7);
  return uVar1;
}



/* FUN_8c019160 @ 8c019160 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c019160(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined4 in_fr4;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c01918c,in_fr4);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c019190,DAT_8c01918c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c019190,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c019194,DAT_8c019190);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  uVar1 = (*(code *)PTR_FUN_8c019194)(0,a5,ar6,ar7);
  return uVar1;
}



/* FUN_8c019198 @ 8c019198 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c019198(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0191c4)(0,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0191c8 @ 8c0191c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0191c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0191e0)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0191e4 @ 8c0191e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0191e4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = PTR_DAT_8c019200;
  (*(code *)PTR_FUN_8c019204)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c019208 @ 8c019208 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c019208(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = PTR_DAT_8c019268;
  (*(code *)PTR_FUN_8c01926c)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* free_if_nonnull_wrap_019270 @ 8c019270 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 *
free_if_nonnull_wrap_019270(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = PTR_DAT_8c0192a0, 0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c0192a4)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c0192a8 @ 8c0192a8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined * FUN_8c0192a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x60) = 0;
    *(undefined4 *)(ar4 + 0x44) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x60) = (ulonglong)in_fr1;
    *(ulonglong *)(ar4 + 0x44) = (ulonglong)in_fr1;
  }
  uVar1 = (ulonglong)in_fr1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 100) = 0;
    *(undefined4 *)(ar4 + 0x48) = 0;
    *(undefined4 *)(ar4 + 0x68) = 0;
    *(undefined4 *)(ar4 + 0x4c) = 0;
    *(undefined4 *)(ar4 + 0x6c) = 0;
    *(undefined4 *)(ar4 + 0x50) = 0;
    *(undefined4 *)(ar4 + 0x70) = 0;
    *(undefined4 *)(ar4 + 0x54) = 0;
    uVar2 = DAT_8c01937c;
    *(undefined4 *)(ar4 + 0x74) = DAT_8c01937c;
    *(undefined4 *)(ar4 + 0x58) = uVar2;
  }
  else {
    *(ulonglong *)(ar4 + 100) = uVar1;
    *(ulonglong *)(ar4 + 0x48) = uVar1;
    *(ulonglong *)(ar4 + 0x68) = uVar1;
    *(ulonglong *)(ar4 + 0x4c) = uVar1;
    *(ulonglong *)(ar4 + 0x6c) = uVar1;
    *(ulonglong *)(ar4 + 0x50) = uVar1;
    *(ulonglong *)(ar4 + 0x70) = uVar1;
    *(ulonglong *)(ar4 + 0x54) = uVar1;
    uVar3 = _DAT_8c019380;
    uVar2 = DAT_8c01937c;
    *(ulonglong *)(ar4 + 0x74) = CONCAT44(_DAT_8c019380,DAT_8c01937c);
    *(ulonglong *)(ar4 + 0x58) = CONCAT44(uVar3,uVar2);
  }
  *(undefined4 *)(ar4 + 0x78) = 0;
  *(undefined4 *)(ar4 + 0x5c) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x7c) = _DAT_8c019380;
  }
  else {
    *(undefined8 *)(ar4 + 0x7c) = CONCAT44(_FUN_8c019384,_DAT_8c019380);
  }
  return &DAT_8c019380;
}



/* FUN_8c019384 @ 8c019384 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c019384(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined8 in_dr4;
  undefined4 uVar4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 in_fr11;
  undefined4 in_fr10;
  undefined4 in_xf4;
  undefined4 in_xf6;
  undefined4 in_xf8;
  undefined4 in_xf10;
  int iVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_28;
  
  uVar1 = (undefined4)in_dr4;
  if (in_FPSCR_SZ == '\0') {
    uVar4 = (undefined4)((ulonglong)in_dr4 >> 0x20);
    *(undefined4 *)(ar4 + 0x60) = uVar4;
    *(undefined4 *)(ar4 + 0x44) = uVar4;
    *(undefined4 *)(ar4 + 100) = uVar1;
    *(undefined4 *)(ar4 + 0x48) = uVar1;
    *(undefined4 *)(ar4 + 0x68) = in_fr6;
    *(undefined4 *)(ar4 + 0x4c) = in_fr6;
    *(undefined4 *)(ar4 + 0x6c) = in_fr7;
    *(undefined4 *)(ar4 + 0x50) = in_fr7;
    *(undefined4 *)(ar4 + 0x70) = in_fr8;
    *(undefined4 *)(ar4 + 0x54) = in_fr8;
    *(undefined4 *)(ar4 + 0x74) = in_fr9;
    *(undefined4 *)(ar4 + 0x58) = in_fr9;
    dVar3 = (double)CONCAT44(DAT_8c0194b4,in_fr10);
    uStack_28 = in_fr11;
  }
  else {
    *(ulonglong *)(ar4 + 0x60) = CONCAT44(in_xf4,uVar1);
    *(ulonglong *)(ar4 + 0x44) = CONCAT44(in_xf4,uVar1);
    *(ulonglong *)(ar4 + 100) = CONCAT44(in_fr7,in_xf4);
    *(ulonglong *)(ar4 + 0x48) = CONCAT44(in_fr7,in_xf4);
    *(ulonglong *)(ar4 + 0x68) = CONCAT44(in_xf6,in_fr7);
    *(ulonglong *)(ar4 + 0x4c) = CONCAT44(in_xf6,in_fr7);
    *(ulonglong *)(ar4 + 0x6c) = CONCAT44(in_fr9,in_xf6);
    *(ulonglong *)(ar4 + 0x50) = CONCAT44(in_fr9,in_xf6);
    *(ulonglong *)(ar4 + 0x70) = CONCAT44(in_xf8,in_fr9);
    *(ulonglong *)(ar4 + 0x54) = CONCAT44(in_xf8,in_fr9);
    *(ulonglong *)(ar4 + 0x74) = CONCAT44(in_fr11,in_xf8);
    *(ulonglong *)(ar4 + 0x58) = CONCAT44(in_fr11,in_xf8);
    dVar3 = (double)CONCAT44(DAT_8c0194b8,DAT_8c0194b4);
    uStack_28 = in_xf10;
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0194b8,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0194bc,DAT_8c0194b8);
  }
  if (in_FPSCR_PR == '\0') {
    iVar5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    iVar5 = (int)(dVar3 / dVar3);
  }
  *(int *)(ar4 + 0x78) = iVar5;
  *(int *)(ar4 + 0x5c) = iVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x7c) = uStack_28;
  }
  else {
    *(undefined8 *)(ar4 + 0x7c) = CONCAT44(iVar5,uStack_28);
  }
  uVar1 = (*(code *)PTR_FUN_8c0194bc)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0194c0 @ 8c0194c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0194c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined4 in_fr5;
  undefined4 in_fr4;
  int a4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x7c) = in_fr4;
    dVar3 = (double)CONCAT44(DAT_8c0194fc,*(undefined4 *)(ar4 + 0x7c));
  }
  else {
    *(ulonglong *)(ar4 + 0x7c) = CONCAT44(in_fr4,in_fr5);
    dVar3 = (double)CONCAT44(DAT_8c019500,DAT_8c0194fc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c019500,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c019504,DAT_8c019500);
  }
  if (in_FPSCR_PR == '\0') {
    a4 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a4 = (int)(dVar3 / dVar3);
  }
  uVar1 = (*(code *)PTR_FUN_8c019504)(a4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c019508 @ 8c019508 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c019508(undefined4 ar4,undefined8 *ar5,undefined8 *ar6,undefined8 *ar7)

{
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_14 = *(undefined4 *)ar5;
    uStack_10 = *(undefined4 *)((int)ar5 + 4);
    uStack_c = *(undefined4 *)(ar5 + 1);
    uStack_8 = in_PR;
  }
  else {
    uStack_14 = (undefined4)*ar5;
    uStack_10 = (undefined4)*(undefined8 *)((int)ar5 + 4);
    uStack_c = (undefined4)ar5[1];
    uStack_8 = (undefined4)((ulonglong)ar5[1] >> 0x20);
  }
  (*(code *)PTR_FUN_8c01955c)(0,&uStack_14,&uStack_1c,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar6 = uStack_1c;
    *(undefined4 *)ar7 = uStack_18;
  }
  else {
    *ar6 = CONCAT44(uStack_18,uStack_1c);
    *ar7 = CONCAT44(uStack_14,uStack_18);
  }
  return ar7;
}



/* FUN_8c019560 @ 8c019560 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c019560(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x44) = in_fr4;
    *(undefined4 *)(ar4 + 0x48) = in_fr5;
    *(undefined4 *)(ar4 + 0x4c) = in_fr6;
  }
  else {
    *(undefined8 *)(ar4 + 0x44) = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)(ar4 + 0x48) = in_xd4;
    *(ulonglong *)(ar4 + 0x4c) = CONCAT44(in_fr6,in_fr7);
  }
  return ar4 + 0x48;
}



/* FUN_8c019574 @ 8c019574 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c019574(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x50) = in_fr4;
    *(undefined4 *)(ar4 + 0x54) = in_fr5;
    *(undefined4 *)(ar4 + 0x58) = in_fr6;
  }
  else {
    *(undefined8 *)(ar4 + 0x50) = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)(ar4 + 0x54) = in_xd4;
    *(ulonglong *)(ar4 + 0x58) = CONCAT44(in_fr6,in_fr7);
  }
  return ar4 + 0x54;
}



/* Class_1299f8_m4_019588 @ 8c019588 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0196aa) */
/* WARNING: Removing unreachable block (ram,0x8c0196b8) */
/* WARNING: Unknown calling convention */

undefined4 Class_1299f8_m4_019588(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *a6;
  undefined4 unaff_r14;
  ulonglong *puVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined8 in_dr4;
  ulonglong in_dr6;
  undefined8 in_dr12;
  double dVar8;
  undefined4 uVar9;
  ulonglong in_dr14;
  undefined8 in_xd0;
  double in_xd4;
  undefined8 in_xd14;
  undefined4 in_PR;
  int iVar10;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  ulonglong uStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)(in_dr14 >> 0x20);
    puVar3 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar3 = (ulonglong *)auStack_20;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar3 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar3 + -8) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x15c) = (int)((ulonglong)in_dr4 >> 0x20);
    in_xd4 = (double)CONCAT44((int)in_dr4,(int)in_dr12);
    in_dr14 = in_dr6 >> 0x20;
  }
  else {
    *(undefined8 *)((int)puVar3 + -0x15c) = in_dr4;
  }
  uVar9 = (undefined4)in_dr14;
  (*(code *)PTR_Vec3_ctor_zero_8c019840)
            ((undefined1 *)((int)puVar3 + DAT_8c01983c + -0x15c),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c019848)((undefined1 *)((int)puVar3 + DAT_8c019844 + -0x15c),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c019850)((undefined1 *)((int)puVar3 + DAT_8c01984c + -0x15c),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c019858)((undefined1 *)((int)puVar3 + DAT_8c019854 + -0x15c),ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c019860)
            ((undefined1 *)((int)puVar3 + DAT_8c01985c + -0x15c),ar5,ar6,ar7);
  uVar1 = *(undefined4 *)(PTR_DAT_8c019864 + 4);
  *(undefined4 *)((int)puVar3 + -0x134) = *(undefined4 *)PTR_DAT_8c019864;
  *(undefined4 *)((int)puVar3 + -0x130) = uVar1;
  *(undefined4 *)((int)puVar3 + -300) = *(undefined4 *)(PTR_DAT_8c019864 + 8);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar3 + -0x134) = *(undefined4 *)(ar4 + 0x50);
    *(undefined4 *)((int)puVar3 + -0x130) = *(undefined4 *)(ar4 + 0x54);
    *(undefined4 *)((int)puVar3 + -300) = *(undefined4 *)(ar4 + 0x58);
  }
  else {
    *(undefined8 *)((int)puVar3 + -0x134) = *(undefined8 *)(ar4 + 0x50);
    *(undefined8 *)((int)puVar3 + -0x130) = *(undefined8 *)(ar4 + 0x54);
    *(undefined8 *)((int)puVar3 + -300) = *(undefined8 *)(ar4 + 0x58);
  }
  (*(code *)PTR_FUN_8c019868)((undefined1 *)((int)puVar3 + DAT_8c019854 + -0x15c),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c01986c)((undefined1 *)((int)puVar3 + -0xe8),ar5,ar6,ar7);
  puVar2 = (undefined1 *)((int)puVar3 + -0x128);
  (*(code *)PTR_FUN_8c01986c)(puVar2,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(DAT_8c019870 + 0xc),
                             *(undefined4 *)((int)puVar3 + -0x15c));
  }
  else {
    in_xd0 = *(undefined8 *)((int)puVar3 + -0x15c);
    dVar6 = *(double *)(DAT_8c019870 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 - dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)puVar3 + -0x15c) = fVar4;
    dVar6 = (double)CONCAT44(*(undefined4 *)(DAT_8c019870 + 0x10),fVar4);
  }
  else {
    *(undefined8 *)((int)puVar3 + -0x15c) = in_xd0;
    dVar6 = *(double *)(DAT_8c019870 + 0x10);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = (float)((ulonglong)in_xd4 >> 0x20) - (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = (float)((ulonglong)(in_xd4 - dVar6) >> 0x20);
  }
  (*(code *)PTR_FUN_8c019874)(puVar2,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x154) = (int)((ulonglong)dVar6 >> 0x20);
    dVar6 = (double)CONCAT44(DAT_8c019878,*(undefined4 *)((int)puVar3 + -0x154));
  }
  else {
    *(double *)((int)puVar3 + -0x154) = dVar6;
    in_xd0 = *(undefined8 *)((int)puVar3 + -0x154);
    dVar6 = (double)CONCAT44(DAT_8c01987c,DAT_8c019878);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c01987c,fVar5);
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c019880,DAT_8c01987c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    dVar6 = (double)CONCAT44((float)(int)fVar5,uVar9);
  }
  else {
    fVar5 = SUB84(dVar6 / dVar6,0);
    dVar6 = (double)(int)(dVar6 / dVar6);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c019880,fVar5);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c019884,DAT_8c019880);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * (float)((ulonglong)dVar7 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 * dVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c019878,SUB84(dVar7,0));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c01987c,DAT_8c019878);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) / (float)((ulonglong)dVar7 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 / dVar7;
  }
  (*(code *)PTR_FUN_8c019874)(puVar2,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x158) = (int)((ulonglong)dVar7 >> 0x20);
    dVar7 = (double)CONCAT44(DAT_8c019878,*(undefined4 *)((int)puVar3 + -0x158));
  }
  else {
    *(double *)((int)puVar3 + -0x158) = dVar7;
    in_xd0 = *(undefined8 *)((int)puVar3 + -0x158);
    dVar7 = (double)CONCAT44(DAT_8c01987c,DAT_8c019878);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c01987c,fVar5);
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c019880,DAT_8c01987c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    iVar10 = (int)fVar5;
  }
  else {
    fVar5 = SUB84(dVar7 / dVar7,0);
    iVar10 = (int)(dVar7 / dVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c019880,fVar5);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c019884,DAT_8c019880);
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44(fVar4,(float)iVar10 * (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    dVar8 = (double)CONCAT44(fVar4,(float)iVar10) * dVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c019878,SUB84(dVar7,0));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c01987c,DAT_8c019878);
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),
                             SUB84(dVar8,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    dVar8 = dVar8 / dVar7;
  }
  uVar1 = (undefined4)((ulonglong)dVar8 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c019878,SUB84(dVar7,0));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c01987c,DAT_8c019878);
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44(uVar1,-SUB84(dVar8,0) * (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    dVar8 = (double)CONCAT44(uVar1,-SUB84(dVar8,0)) * dVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c019880,SUB84(dVar7,0));
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c019884,DAT_8c019880);
  }
  if (in_FPSCR_PR == '\0') {
    iVar10 = (int)(SUB84(dVar8,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar10 = (int)(dVar8 / dVar7);
  }
  (*(code *)PTR_FUN_8c019884)((undefined1 *)((int)puVar3 + -0xe8),iVar10,ar6,ar7);
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44(-(float)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0));
  }
  else {
    dVar6 = -dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c019878,SUB84(dVar7,0));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c01987c,DAT_8c019878);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * (float)((ulonglong)dVar7 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 * dVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c019880,SUB84(dVar7,0));
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c019884,DAT_8c019880);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = (float)((ulonglong)dVar6 >> 0x20) / (float)((ulonglong)dVar7 >> 0x20);
    dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0));
    iVar10 = (int)fVar4;
  }
  else {
    dVar6 = dVar6 / dVar7;
    iVar10 = (int)dVar6;
  }
  (*(code *)PTR_FUN_8c019888)((undefined1 *)((int)puVar3 + -0x128),iVar10,ar6,ar7);
  (*(code *)PTR_FUN_8c01988c)
            ((undefined1 *)((int)puVar3 + -0xe8),(undefined1 *)((int)puVar3 + -0x128),ar6,ar7);
  a6 = (undefined1 *)((int)puVar3 + -0x140);
  puVar2 = (undefined1 *)((int)puVar3 + -0x134);
  (*(code *)PTR_FUN_8c019890)((undefined1 *)((int)puVar3 + -0xe8),puVar2,a6,ar7);
  (*(code *)PTR_FUN_8c019898)((undefined1 *)((int)puVar3 + DAT_8c019894 + -0x15c),puVar2,a6,ar7);
  (*(code *)PTR_Vec3_length_8c01989c)
            ((undefined1 *)((int)puVar3 + DAT_8c019894 + -0x15c),puVar2,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar3 + DAT_8c01984c + -0x15c) = *(undefined4 *)(ar4 + 0x44);
    *(undefined4 *)((int)puVar3 + DAT_8c0198a0 + -0x15c) = *(undefined4 *)(ar4 + 0x48);
    uVar1 = *(undefined4 *)(ar4 + 0x4c);
    *(undefined4 *)((int)puVar3 + DAT_8c0198a4 + -0x15c) = uVar1;
    dVar7 = (double)CONCAT44(uVar1,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    *(undefined8 *)((int)puVar3 + DAT_8c01984c + -0x15c) = *(undefined8 *)(ar4 + 0x44);
    *(undefined8 *)((int)puVar3 + DAT_8c0198a0 + -0x15c) = *(undefined8 *)(ar4 + 0x48);
    dVar7 = *(double *)(ar4 + 0x4c);
    *(double *)((int)puVar3 + DAT_8c0198a4 + -0x15c) = dVar7;
    in_xd0 = *(undefined8 *)(ar4 + 0x50);
  }
  fVar4 = SUB84(dVar6,0);
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar7,0) * fVar4;
  }
  else {
    fVar5 = SUB84(dVar7 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x44),fVar5);
  }
  else {
    dVar7 = *(double *)(ar4 + 0x44);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = (float)((ulonglong)dVar7 >> 0x20);
    dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) + fVar5);
  }
  else {
    dVar7 = dVar7 + dVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + DAT_8c019844 + -0x15c) = SUB84(dVar7,0);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)(ar4 + 0x54));
  }
  else {
    *(undefined8 *)((int)puVar3 + DAT_8c019844 + -0x15c) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x54);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar7,0) * fVar4;
  }
  else {
    fVar5 = SUB84(dVar7 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar5);
  }
  else {
    dVar7 = *(double *)(ar4 + 0x48);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = (float)((ulonglong)dVar7 >> 0x20);
    dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) + fVar5);
  }
  else {
    dVar7 = dVar7 + dVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + DAT_8c0198a8 + -0x15c) = SUB84(dVar7,0);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)(ar4 + 0x58));
  }
  else {
    *(undefined8 *)((int)puVar3 + DAT_8c0198a8 + -0x15c) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x58);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar7,0) * fVar4;
  }
  else {
    fVar4 = SUB84(dVar7 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x4c),fVar4);
  }
  else {
    dVar6 = *(double *)(ar4 + 0x4c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 + dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)puVar3 + DAT_8c0198ac + -0x15c) = fVar4;
    *(undefined4 *)((int)puVar3 + DAT_8c0198b0 + -0x15c) = *(undefined4 *)(ar4 + 0x50);
    *(undefined4 *)((int)puVar3 + DAT_8c0198b4 + -0x15c) = *(undefined4 *)(ar4 + 0x54);
    *(undefined4 *)((int)puVar3 + DAT_8c0198b8 + -0x15c) = *(undefined4 *)(ar4 + 0x58);
  }
  else {
    *(undefined8 *)((int)puVar3 + DAT_8c0198ac + -0x15c) = in_xd0;
    *(undefined8 *)((int)puVar3 + DAT_8c0198b0 + -0x15c) = *(undefined8 *)(ar4 + 0x50);
    *(undefined8 *)((int)puVar3 + DAT_8c0198b4 + -0x15c) = *(undefined8 *)(ar4 + 0x54);
    *(undefined8 *)((int)puVar3 + DAT_8c0198b8 + -0x15c) = *(undefined8 *)(ar4 + 0x58);
  }
  *(undefined1 **)((int)puVar3 + -0x160) = (undefined1 *)((int)puVar3 + -0x150);
  puVar2 = (undefined1 *)((int)puVar3 + DAT_8c0198a8 + -0x160);
  (*(code *)PTR_FUN_8c0198bc)
            ((undefined1 *)((int)puVar3 + DAT_8c0198a0 + -0x160),
             (undefined1 *)((int)puVar3 + DAT_8c0198b4 + -0x160),puVar2,ar7);
  (*(code *)PTR_Vec3_assign_8c0198c0)
            ((undefined1 *)((int)puVar3 + DAT_8c01983c + -0x15c),
             (undefined1 *)((int)puVar3 + -0x150),puVar2,ar7);
  (*(code *)PTR_Vec3_dtor_8c0198c4)((undefined1 *)((int)puVar3 + -0x150),0xffffffff,puVar2,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c0198cc)
            (*(undefined4 *)((int)puVar3 + DAT_8c0198c8 + -0x15c),
             (undefined1 *)((int)puVar3 + DAT_8c01983c + -0x15c),puVar2,ar7);
  (*(code *)PTR_Vec3_dtor_8c0198c4)
            ((undefined1 *)((int)puVar3 + DAT_8c01985c + -0x15c),0xffffffff,puVar2,ar7);
  (*(code *)PTR_free_if_nonnull_wrap_023e4c_8c0198d0)
            ((undefined1 *)((int)puVar3 + DAT_8c019854 + -0x15c),0xffffffff,puVar2,ar7);
  (*(code *)PTR_FUN_8c0198d4)
            ((undefined1 *)((int)puVar3 + DAT_8c01984c + -0x15c),0xffffffff,puVar2,ar7);
  (*(code *)PTR_FUN_8c0198d8)
            ((undefined1 *)((int)puVar3 + DAT_8c019844 + -0x15c),0xffffffff,puVar2,ar7);
  (*(code *)PTR_Vec3_dtor_8c0198c4)
            ((undefined1 *)((int)puVar3 + DAT_8c01983c + -0x15c),0xffffffff,puVar2,ar7);
  return 0;
}



/* FUN_8c0198dc @ 8c0198dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0198dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_Vec3_dtor_8c019920)(ar4 + 0x10,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c019920)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c019924)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c019928 @ 8c019928 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c019928(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_Vec3_dtor_8c01996c)(ar4 + 0x10,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c01996c)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c019970)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c019974 @ 8c019974 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c019974(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  char in_FPSCR_SZ;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_18 = CONCAT44(*(undefined4 *)(ar4 + 0x4c),(undefined4)uStack_18);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_18._0_4_ = *(undefined4 *)(ar4 + 0x48);
    puVar2 = (undefined8 *)((int)&uStack_20 + 4);
    uStack_20 = CONCAT44(*(undefined4 *)(ar4 + 0x44),(undefined4)uStack_20);
  }
  else {
    uStack_18 = *(undefined8 *)(ar4 + 0x4c);
    uStack_20 = *(undefined8 *)(ar4 + 0x48);
    uStack_28 = *(undefined8 *)(ar4 + 0x44);
    puVar2 = &uStack_28;
  }
  *(undefined **)((int)puVar2 + -4) = PTR_s__6_3lf__6_3lf__6_3lf__6_3lf_8c0199c4 + 0x6a;
  uStack_10 = ar5;
  uStack_c = ar6;
  (*(code *)PTR_FUN_8c0199cc)(DAT_8c0199c8,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar2 + 8) = 0xffffffff;
  uVar1 = (*(code *)PTR_noop_102824_8c0199d0)
                    (DAT_8c0199c8,*(undefined4 *)((int)puVar2 + 0xc),
                     *(undefined4 *)((int)puVar2 + 0x10),0xd);
  return uVar1;
}



/* FUN_8c0199d4 @ 8c0199d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0199d4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c019a78)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c019a7c;
  (*(code *)PTR_Vec3_ctor_zero_8c019a84)((int)ar4 + DAT_8c019a80,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c019a8c)((int)ar4 + DAT_8c019a88,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c019a8c)((int)ar4 + DAT_8c019a90,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c019a98)((int)ar4 + DAT_8c019a94,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c019a9c + (int)ar4) = 1;
  return ar4;
}



/* Class_129a24_m0_019aa0 @ 8c019aa0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_129a24_m0_019aa0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c019b14;
    (*(code *)PTR_object_dtor_delete_8c019b1c)((int)ar4 + DAT_8c019b18,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c019b24)((int)ar4 + DAT_8c019b20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c019b24)((int)ar4 + DAT_8c019b28,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c019b24)((int)ar4 + DAT_8c019b2c,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_free_if_nonnull_wrap_019270_8c019b30)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c019b34)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c019b38 @ 8c019b38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c019b38(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_SZ;
  
  iVar1 = DAT_8c019b44;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c019b44) = in_fr4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c019b44) = CONCAT44(in_fr4,in_fr5);
  }
  return iVar1;
}



/* FUN_8c019b48 @ 8c019b48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c019b48(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  double in_dr4;
  double dVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar1 = DAT_8c019b54;
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44(-(float)((ulonglong)in_dr4 >> 0x20),SUB84(in_dr4,0));
  }
  else {
    dVar2 = -in_dr4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c019b54) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c019b54) = dVar2;
  }
  return iVar1;
}



/* FUN_8c019b58 @ 8c019b58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c019b58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_SZ;
  
  iVar1 = DAT_8c019b64;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c019b64) = in_fr4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c019b64) = CONCAT44(in_fr4,in_fr5);
  }
  return iVar1;
}



/* Class_129a24_m1_019b68 @ 8c019b68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129a24_m1_019b68(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_xd0;
  int iVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_88 [33];
  
  if (in_FPSCR_SZ == '\0') {
    uStack_94 = *(undefined4 *)(ar4 + DAT_8c019ddc);
  }
  else {
    uStack_94 = (undefined4)*(undefined8 *)(ar4 + DAT_8c019ddc);
  }
  if (in_FPSCR_SZ == '\0') {
    uStack_90 = *(undefined4 *)(ar4 + DAT_8c019de0);
  }
  else {
    uStack_90 = (undefined4)*(undefined8 *)(ar4 + DAT_8c019de0);
  }
  if (in_FPSCR_SZ == '\0') {
    uStack_8c = *(undefined4 *)(ar4 + DAT_8c019de4);
  }
  else {
    uVar5 = *(undefined8 *)(ar4 + DAT_8c019de4);
    uStack_8c = (undefined4)uVar5;
    auStack_88[0] = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    uStack_a0 = *(undefined4 *)(ar4 + DAT_8c019dec);
  }
  else {
    uStack_a0 = (undefined4)*(undefined8 *)(ar4 + DAT_8c019dec);
  }
  if (in_FPSCR_SZ == '\0') {
    uStack_9c = *(undefined4 *)(ar4 + DAT_8c019df0);
  }
  else {
    uStack_9c = (undefined4)*(undefined8 *)(ar4 + DAT_8c019df0);
  }
  if (in_FPSCR_SZ == '\0') {
    uStack_98 = *(undefined4 *)(ar4 + DAT_8c019df4);
  }
  else {
    uVar5 = *(undefined8 *)(ar4 + DAT_8c019df4);
    uStack_98 = (undefined4)uVar5;
    uStack_94 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  (*(code *)PTR_FUN_8c019df8)((int)&iStack_d8 + DAT_8c019ddc,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c019df8)(auStack_88,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c019e00,*(undefined4 *)(ar4 + DAT_8c019dfc));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c019dfc);
    dVar6 = (double)CONCAT44(DAT_8c019e04,DAT_8c019e00);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c019e04,fVar4);
  }
  else {
    dVar6 = (double)CONCAT44(PTR_FUN_8c019e08,DAT_8c019e04);
  }
  if (in_FPSCR_PR == '\0') {
    iVar7 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    iVar7 = (int)(dVar6 / dVar6);
  }
  (*(code *)PTR_FUN_8c019e08)(auStack_88,iVar7,ar6,ar7);
  (*(code *)PTR_FUN_8c019e0c)((int)&iStack_d8 + DAT_8c019ddc,auStack_88,ar6,ar7);
  puVar3 = &uStack_ac;
  puVar2 = &uStack_94;
  (*(code *)PTR_FUN_8c019e10)((int)&iStack_d8 + DAT_8c019ddc,puVar2,puVar3,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(uStack_ac,*(undefined4 *)(ar4 + DAT_8c019e14));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c019e14);
    dVar6 = (double)CONCAT44(uStack_a8,uStack_ac);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x44),fVar4);
  }
  else {
    dVar6 = *(double *)(ar4 + 0x44);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 + dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x44) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x44) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(uStack_a4,*(undefined4 *)(ar4 + DAT_8c019e14));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c019e14);
    dVar6 = (double)CONCAT44(uStack_a0,uStack_a4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x4c),fVar4);
  }
  else {
    dVar6 = *(double *)(ar4 + 0x4c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 + dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x4c) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x4c) = in_xd0;
  }
  iStack_cc = ar4;
  iStack_c8 = ar4;
  (*(code *)PTR_FUN_8c019e1c)(ar4 + 4,puVar2,puVar3,ar7);
  (*(code *)PTR_FUN_8c019df8)(auStack_88,puVar2,puVar3,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c019e00,*(undefined4 *)(ar4 + DAT_8c019e20));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c019e20);
    dVar6 = (double)CONCAT44(DAT_8c019e04,DAT_8c019e00);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c019e04,fVar4);
  }
  else {
    dVar6 = (double)CONCAT44(PTR_FUN_8c019e08,DAT_8c019e04);
  }
  if (in_FPSCR_PR == '\0') {
    iVar7 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    iVar7 = (int)(dVar6 / dVar6);
  }
  (*(code *)PTR_FUN_8c019e24)(auStack_88,iVar7,puVar3,ar7);
  puVar2 = auStack_88;
  (*(code *)PTR_FUN_8c019e0c)((int)&iStack_d8 + DAT_8c019ddc,puVar2,puVar3,ar7);
  (*(code *)PTR_FUN_8c019df8)(auStack_88,puVar2,puVar3,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c019e00,*(undefined4 *)(ar4 + DAT_8c019e28));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c019e28);
    dVar6 = (double)CONCAT44(DAT_8c019e04,DAT_8c019e00);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c019e04,fVar4);
  }
  else {
    dVar6 = (double)CONCAT44(PTR_FUN_8c019e08,DAT_8c019e04);
  }
  if (in_FPSCR_PR == '\0') {
    iVar7 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    iVar7 = (int)(dVar6 / dVar6);
  }
  (*(code *)PTR_FUN_8c019e2c)(auStack_88,iVar7,puVar3,ar7);
  (*(code *)PTR_FUN_8c019e0c)((int)&iStack_d8 + DAT_8c019ddc,auStack_88,puVar3,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_94 = *(undefined4 *)(ar4 + 0x6c);
    uStack_90 = *(undefined4 *)(ar4 + 0x70);
    uStack_8c = *(undefined4 *)(ar4 + 0x74);
  }
  else {
    uStack_94 = (undefined4)*(undefined8 *)(ar4 + 0x6c);
    uStack_90 = (undefined4)*(undefined8 *)(ar4 + 0x70);
    uStack_8c = (undefined4)*(undefined8 *)(ar4 + 0x74);
    auStack_88[0] = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x74) >> 0x20);
  }
  (*(code *)PTR_FUN_8c019e10)((int)&iStack_d8 + DAT_8c019ddc,&uStack_94,&uStack_c4,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x50) = uStack_c4;
    *(undefined4 *)(ar4 + 0x54) = uStack_c0;
    *(undefined4 *)(ar4 + 0x58) = uStack_bc;
  }
  else {
    *(undefined8 *)(ar4 + 0x50) = CONCAT44(uStack_c0,uStack_c4);
    *(ulonglong *)(ar4 + 0x54) = CONCAT44(uStack_bc,uStack_c0);
    *(ulonglong *)(ar4 + 0x58) = CONCAT44(uStack_b8,uStack_bc);
  }
  puVar3 = &uStack_b8;
  puVar2 = &uStack_c4;
  (*(code *)PTR_FUN_8c019e30)(&uStack_ac,puVar2,puVar3,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(uStack_b8,*(undefined4 *)(ar4 + DAT_8c019e34));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c019e34);
    dVar6 = (double)CONCAT44(uStack_b4,uStack_b8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x44),fVar4);
  }
  else {
    dVar6 = *(double *)(ar4 + 0x44);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 + dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x44) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x44) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(uStack_b4,*(undefined4 *)(ar4 + DAT_8c019e34));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c019e34);
    dVar6 = (double)CONCAT44(uStack_b0,uStack_b4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar4);
  }
  else {
    dVar6 = *(double *)(ar4 + 0x48);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 + dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x48) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x48) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(uStack_b0,*(undefined4 *)(ar4 + DAT_8c019e34));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c019e34);
    dVar6 = (double)CONCAT44(uStack_ac,uStack_b0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x4c),fVar4);
  }
  else {
    dVar6 = *(double *)(ar4 + 0x4c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 + dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x4c) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x4c) = in_xd0;
  }
  iStack_d8 = ar4;
  iStack_d4 = ar4;
  iStack_d0 = ar4;
  (*(code *)PTR_vec3_clear_8c019e38)(ar4 + DAT_8c019e14,puVar2,puVar3,ar7);
  uVar1 = (*(code *)PTR_FUN_8c019e3c)(ar4 + 4,puVar2,puVar3,ar7);
  return uVar1;
}



/* Class_129a24_m4_019e40 @ 8c019e40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129a24_m4_019e40(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr6;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  undefined4 auStack_24 [4];
  undefined1 auStack_14 [20];
  
  uVar1 = (int)((ulonglong)in_dr6 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uVar1 = auStack_24[0];
  }
  auStack_24[0] = uVar1;
  (*(code *)PTR_Class_1299f8_m4_019588_8c019eac)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c019eb0)(auStack_14,auStack_24,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c019eb4)(auStack_24,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c019eb0)(in_stack_00000000,auStack_14,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c019eb4)(auStack_14,0xffffffff,ar6,ar7);
  return 0;
}



/* Class_1299f8_m0_019eb8 @ 8c019eb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_1299f8_m0_019eb8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c019ef4;
    a5 = 0;
    (*(code *)PTR_free_if_nonnull_wrap_019270_8c019ef8)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c019efc)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_1299f8_m3_019f00 @ 8c019f00 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 Class_1299f8_m3_019f00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar6;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = auStack_4;
  }
  else {
    puVar2 = auStack_8;
  }
  *(undefined4 *)(puVar2 + -4) = unaff_r14;
  *(undefined4 *)(puVar2 + -8) = in_PR;
  *(undefined4 *)(puVar2 + -0x78) = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c01a0a4)(puVar2 + -0x18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c01a0a4)(puVar2 + -0x28,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c01a0a8)(puVar2 + -0x38,ar5,ar6,ar7);
  fVar5 = 0.0;
  *(undefined1 **)(puVar2 + -0x7c) = puVar2 + -0x54;
  (*(code *)PTR_Vec3_sub_8c01a0ac)(*(undefined4 *)(puVar2 + -0x78),puVar2 + -0x38,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c01a0b0)(puVar2 + -0x18,puVar2 + -0x54,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c01a0b4)(puVar2 + -0x54,0xffffffff,ar6,ar7);
  *(undefined1 **)(puVar2 + -0x7c) = puVar2 + -100;
  (*(code *)PTR_FUN_8c01a0bc)(puVar2 + -0x18,ar4 + DAT_8c01a0b8,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c01a0b0)(puVar2 + -0x28,puVar2 + -100,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c01a0b4)(puVar2 + -100,0xffffffff,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0x28),*(undefined4 *)(puVar2 + -0x18));
  }
  else {
    in_xd0 = *(undefined8 *)(puVar2 + -0x18);
    dVar4 = *(double *)(puVar2 + -0x28);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(puVar2 + -0x44) = fVar3;
    dVar4 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0x24),*(undefined4 *)(puVar2 + -0x14));
  }
  else {
    *(undefined8 *)(puVar2 + -0x44) = in_xd0;
    in_xd0 = *(undefined8 *)(puVar2 + -0x14);
    dVar4 = *(double *)(puVar2 + -0x24);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(puVar2 + -0x40) = fVar3;
    dVar4 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0x20),*(undefined4 *)(puVar2 + -0x10));
  }
  else {
    *(undefined8 *)(puVar2 + -0x40) = in_xd0;
    in_xd0 = *(undefined8 *)(puVar2 + -0x10);
    dVar4 = *(double *)(puVar2 + -0x20);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = (float)((ulonglong)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) - fVar3);
  }
  else {
    dVar4 = dVar4 - dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x3c) = SUB84(dVar4,0);
  }
  else {
    *(undefined8 *)(puVar2 + -0x3c) = in_xd0;
  }
  (*(code *)PTR_FUN_8c01a0c0)(puVar2 + -0x44,uVar1,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x68) = (int)((ulonglong)dVar4 >> 0x20);
    fVar5 = *(float *)(puVar2 + -0x68);
  }
  else {
    *(double *)(puVar2 + -0x68) = dVar4;
  }
  (*(code *)PTR_FUN_8c01a0c4)(puVar2 + -0x44,uVar1,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(puVar2 + -0x44);
    *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)(puVar2 + -0x40);
    *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)(puVar2 + -0x3c);
    dVar4 = (double)CONCAT44(DAT_8c01a0c8,SUB84(dVar4,0));
  }
  else {
    *(undefined8 *)(ar4 + 0x50) = *(undefined8 *)(puVar2 + -0x44);
    *(undefined8 *)(ar4 + 0x54) = *(undefined8 *)(puVar2 + -0x40);
    *(undefined8 *)(ar4 + 0x58) = *(undefined8 *)(puVar2 + -0x3c);
    dVar4 = (double)CONCAT44(_FUN_8c01a0cc,DAT_8c01a0c8);
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = fVar5 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,fVar5) < dVar4;
  }
  if (bVar6) {
    (*(code *)PTR_Vec3_dtor_8c01a0b4)(puVar2 + -0x38,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c01a0b4)(puVar2 + -0x28,0xffffffff,ar6,ar7);
    uVar1 = (*(code *)PTR_Vec3_dtor_8c01a0b4)(puVar2 + -0x18,0xffffffff,ar6,ar7);
  }
  else {
    *(int *)(puVar2 + -0x6c) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0x28),
                               *(undefined4 *)(*(int *)(puVar2 + -0x6c) + 0x44));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)(puVar2 + -0x6c) + 0x44);
      dVar4 = *(double *)(puVar2 + -0x28);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar4 + dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)(puVar2 + -0x6c) + 0x44) = fVar5;
    }
    else {
      *(undefined8 *)(*(int *)(puVar2 + -0x6c) + 0x44) = in_xd0;
    }
    *(int *)(puVar2 + -0x70) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0x24),
                               *(undefined4 *)(*(int *)(puVar2 + -0x70) + 0x48));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)(puVar2 + -0x70) + 0x48);
      dVar4 = *(double *)(puVar2 + -0x24);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar4 + dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)(puVar2 + -0x70) + 0x48) = fVar5;
    }
    else {
      *(undefined8 *)(*(int *)(puVar2 + -0x70) + 0x48) = in_xd0;
    }
    *(int *)(puVar2 + -0x74) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0x20),
                               *(undefined4 *)(*(int *)(puVar2 + -0x74) + 0x4c));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)(puVar2 + -0x74) + 0x4c);
      dVar4 = *(double *)(puVar2 + -0x20);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar4 + dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)(puVar2 + -0x74) + 0x4c) = fVar5;
    }
    else {
      *(undefined8 *)(*(int *)(puVar2 + -0x74) + 0x4c) = in_xd0;
    }
    (*(code *)PTR_Vec3_dtor_8c01a0b4)(puVar2 + -0x38,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c01a0b4)(puVar2 + -0x28,0xffffffff,ar6,ar7);
    uVar1 = (*(code *)PTR_Vec3_dtor_8c01a0b4)(puVar2 + -0x18,0xffffffff,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c01a0cc @ 8c01a0cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c01a0cc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = PTR_DAT_8c01a0ec;
  (*(code *)PTR_Vec3_set_zero_8c01a0f4)((int)ar4 + DAT_8c01a0f0,ar5,ar6,ar7);
  return ar4;
}



/* Class_1299ec_m0_01a0f8 @ 8c01a0f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_1299ec_m0_01a0f8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c01a138;
    a5 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c01a140)((int)ar4 + DAT_8c01a13c,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c01a144)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_1299f8_m1_01a148 @ 8c01a148 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1299f8_m1_01a148(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c01a160)(ar4 + 4,ar5,ar6,ar7);
  return uVar1;
}



/* Class_1299f8_m2_01a164 @ 8c01a164 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1299f8_m2_01a164(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c01a17c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c01a180 @ 8c01a180 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01a180(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c01a198)(ar4 + 4,ar5,ar6,ar7);
  return uVar1;
}



/* noop_01a19c @ 8c01a19c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_01a19c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_01a1a0 @ 8c01a1a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_01a1a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_1_01a1a4 @ 8c01a1a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_01a1a4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c01a1ac @ 8c01a1ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01a1ac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c01a1b8;
  *(undefined4 *)(DAT_8c01a1b8 + ar4) = 0;
  return iVar1;
}



/* FUN_8c01a1bc @ 8c01a1bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01a1bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c01a1c8;
  *(undefined4 *)(DAT_8c01a1c8 + ar4) = 1;
  return iVar1;
}



/* get_field_bc_01a1cc @ 8c01a1cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_bc_01a1cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c01a1d4 + ar4);
}



/* Class_129a24_m2_01a1d8 @ 8c01a1d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_129a24_m2_01a1d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c01a218)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c01a220)(ar4 + DAT_8c01a21c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c01a228)(ar4 + DAT_8c01a224,ar5,ar6,ar7);
  iVar1 = DAT_8c01a22c;
  *(undefined4 *)(DAT_8c01a22c + ar4) = 1;
  return iVar1;
}



/* Class_129a24_m3_01a230 @ 8c01a230 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129a24_m3_01a230(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c01a25c)(ar4 + 4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c01a260 @ 8c01a260 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01a260(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c01a2e0)(PTR_DAT_8c01a2dc,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c01a2e8;
  uVar2 = DAT_8c01a2e4;
  (*(code *)PTR_global_list_push_8c01a2ec)(uVar1,PTR_Vec3_dtor_8c01a2e8,DAT_8c01a2e4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c01a2e0)(PTR_DAT_8c01a2f0,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c01a2e8;
  uVar2 = DAT_8c01a2f4;
  (*(code *)PTR_global_list_push_8c01a2ec)(uVar1,PTR_Vec3_dtor_8c01a2e8,DAT_8c01a2f4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c01a2e0)(PTR_DAT_8c01a2f8,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c01a2e8;
  uVar2 = DAT_8c01a2fc;
  (*(code *)PTR_global_list_push_8c01a2ec)(uVar1,PTR_Vec3_dtor_8c01a2e8,DAT_8c01a2fc,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c01a2e0)(PTR_DAT_8c01a300,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c01a2ec)(uVar2,PTR_Vec3_dtor_8c01a2e8,DAT_8c01a304,ar7);
  return uVar2;
}



/* FUN_8c01a308 @ 8c01a308 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c01a308(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < DAT_8c01a374; uVar1 = uVar1 + 1) {
    *(undefined4 *)((int)ar4 + DAT_8c01a370 + uVar1 * 0x28) = 0xffffffff;
  }
  *ar4 = 0xffffffff;
  *DAT_8c01a378 = 0xffffffff;
  ar4[1] = 0xffffffff;
  ar4[2] = 0xffffffff;
  *DAT_8c01a37c = 0;
  ar4[3] = 10;
  ar4[6] = 0;
  ar4[7] = 0;
  (*(code *)PTR_FUN_8c01a380)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* free_if_nonnull_wrap_01a384 @ 8c01a384 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_01a384(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c01a3b0)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c01a3b4 @ 8c01a3b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c01a3b4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_s_VM_User_Icon_VMI_01a3ec_8c01a3e0)(ar4,ar5,ar6,ar7);
  return (uint)(iVar1 == 3);
}



/* s_VM_User_Icon_VMI_01a3ec @ 8c01a3e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_VM_User_Icon_VMI_01a3ec(int *ar4,int ar5,int ar6,undefined *ar7)

{
  int iVar1;
  undefined *a5;
  undefined *a6;
  int *a7;
  uint uVar2;
  
  if ((ar5 != ar4[1]) || (*DAT_8c01a594 == 0)) {
    *DAT_8c01a594 = 0;
    ar4[1] = ar5;
    if (ar5 == 6) {
      ar5 = 4;
      *DAT_8c01a598 = 2;
      ar4[2] = 7;
    }
    else if (ar5 == 0xc) {
      ar5 = 0x10;
      *DAT_8c01a598 = 4;
      ar4[2] = 0xd;
    }
    else if (ar5 == 0x12) {
      ar5 = 0x40;
      *DAT_8c01a598 = 6;
      ar4[2] = 0x13;
    }
    else {
      ar5 = 1;
      *DAT_8c01a598 = 0;
      ar4[2] = 1;
    }
    ar6 = (int)ar4 + DAT_8c01a5a0;
    ar7 = PTR_FUN_8c01a59c;
    iVar1 = (*(code *)PTR_FUN_8c01a5a4)(0xf,ar5,ar6,PTR_FUN_8c01a59c);
    if (iVar1 != 0) {
      return *DAT_8c01a594;
    }
    uVar2 = 0;
    while ((uVar2 <= DAT_8c01a5a8 && (*DAT_8c01a594 != 1))) {
      uVar2 = uVar2 + 1;
    }
    if (DAT_8c01a5a8 <= uVar2) {
      return *DAT_8c01a594;
    }
  }
  if (*DAT_8c01a594 == 1) {
    iVar1 = (*(code *)PTR_LAB_8c01a5ac)(*DAT_8c01a598,ar5,ar6,ar7);
    if (iVar1 == 0) {
      return *DAT_8c01a594;
    }
    *DAT_8c01a594 = 2;
  }
  if (*DAT_8c01a594 == 2) {
    iVar1 = (*(code *)PTR_LAB_8c01a5b0)(*DAT_8c01a598,ar5,ar6,ar7);
    if (iVar1 != 0) {
      return *DAT_8c01a594;
    }
    *DAT_8c01a594 = 3;
  }
  if ((-1 < *ar4) && (*(int *)((int)ar4 + DAT_8c01a5b4 + *ar4 * 0x28) == 3)) {
    *(undefined4 *)((int)ar4 + DAT_8c01a5b4 + *ar4 * 0x28) = 2;
  }
  iVar1 = (*(code *)PTR_FUN_8c01a5b8)(ar4[2],ar5,ar6,ar7);
  if (iVar1 == 0) {
    ar4[5] = 0;
  }
  else if (iVar1 == 1) {
    ar4[5] = 3;
  }
  else {
    ar4[5] = 0;
  }
  a7 = ar4 + 4;
  a6 = PTR_s_VM_User_Icon_VMI_8c01a5bc + 0x11;
  a5 = PTR_s_VM_User_Icon_VMI_8c01a5bc;
  iVar1 = (*(code *)PTR_FUN_8c01a5c4)(DAT_8c01a5c0,PTR_s_VM_User_Icon_VMI_8c01a5bc,a6,a7);
  if (iVar1 == 0) {
    ar4[4] = 0;
  }
  ar4[6] = 0;
  (*(code *)PTR_FUN_8c01a5c8)(ar4,a5,a6,a7);
  return *DAT_8c01a594;
}



/* FUN_8c01a5cc @ 8c01a5cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01a5cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*DAT_8c01a620 == 3) {
    iVar2 = (*(code *)PTR_LAB_8c01a628)(*DAT_8c01a624,ar5,ar6,ar7);
    if (iVar2 == 0) {
      *DAT_8c01a620 = 1;
      uVar1 = 0;
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c01a62c)(ar4,ar5,ar6,ar7);
      if (iVar2 == 3) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c01a630 @ 8c01a630 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01a630(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *a5;
  bool bVar3;
  
  a5 = (int *)ar4[9];
  uVar1 = DAT_8c01a734;
  (*(code *)PTR_memmove_8c01a738)(ar4 + 0xb,a5,DAT_8c01a734,ar7);
  bVar3 = ar4[8] == 1;
  if (bVar3) {
    ar4[8] = 0;
  }
  if (0 < ar4[7]) {
    ar4[7] = ar4[7] + -1;
    if (ar4[7] < 1) {
      if (ar4[6] == 0) {
        bVar3 = true;
      }
    }
    else {
      a5 = (int *)ar4[10];
      uVar1 = DAT_8c01a734;
      (*(code *)PTR_memmove_8c01a738)(ar4 + 0xb,a5,DAT_8c01a734,ar7);
      bVar3 = true;
    }
  }
  if (0 < ar4[6]) {
    if ((ar4[6] == 0x1e) || (bVar3)) {
      a5 = (int *)PTR_DAT_8c01a740;
      uVar1 = DAT_8c01a73c;
      (*(code *)PTR_memmove_8c01a738)((int)ar4 + DAT_8c01a744,PTR_DAT_8c01a740,DAT_8c01a73c,ar7);
      bVar3 = true;
    }
    ar4[6] = ar4[6] + -1;
    if (ar4[6] < 1) {
      bVar3 = true;
    }
  }
  if (bVar3) {
    a5 = ar4 + 0xb;
    (*(code *)PTR_FUN_8c01a748)(ar4,a5,uVar1,ar7);
  }
  if (*ar4 < 0) {
    uVar1 = *DAT_8c01a74c;
  }
  else {
    iVar2 = *(int *)((int)ar4 + DAT_8c01a750 + *ar4 * 0x28);
    if (iVar2 == 2) {
      (*(code *)PTR_FUN_8c01a758)(ar4,a5,uVar1,ar7);
    }
    else if (iVar2 == 3) {
      (*(code *)PTR_FUN_8c01a754)(ar4,a5,uVar1,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c01a75c)(ar4,a5,uVar1,ar7);
    }
    uVar1 = *DAT_8c01a74c;
  }
  return uVar1;
}



/* FUN_8c01a760 @ 8c01a760 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01a760(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xd;
  switch(*(undefined4 *)((int)ar4 + DAT_8c01a8b8 + *ar4 * 0x28)) {
  case 0:
    uVar1 = (*(code *)PTR_FUN_8c01a8bc)(ar4,ar5,ar6,ar7);
    break;
  case 1:
    uVar1 = (*(code *)PTR_FUN_8c01a8c0)(ar4,ar5,ar6,ar7);
    break;
  case 2:
    iVar2 = (*(code *)PTR_FUN_8c01a8c4)(ar4,ar5,ar6,ar7);
    if (iVar2 == 1) {
      uVar1 = (*(code *)PTR_FUN_8c01a8c8)(ar4,ar5,ar6,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c01a8cc)(ar4,ar5,ar6,ar7);
      uVar1 = (*(code *)PTR_FUN_8c01a8d0)(ar4,ar5,ar6,ar7);
    }
    break;
  case 3:
    (*(code *)PTR_FUN_8c01a8cc)(ar4,ar5,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c01a8d4)(ar4,ar5,ar6,ar7);
    break;
  case 4:
    (*(code *)PTR_FUN_8c01a8cc)(ar4,ar5,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c01a8d8)(ar4,ar5,ar6,ar7);
    break;
  case 5:
    uVar1 = (*(code *)PTR_FUN_8c01a8dc)(ar4,ar5,ar6,ar7);
    break;
  case 6:
    uVar1 = (*(code *)PTR_FUN_8c01a8e0)(ar4,ar5,ar6,ar7);
    break;
  case 7:
    uVar1 = (*(code *)PTR_FUN_8c01a8e4)(ar4,ar5,ar6,ar7);
    break;
  case 8:
    uVar1 = (*(code *)PTR_FUN_8c01a8e8)(ar4,ar5,ar6,ar7);
    break;
  case 9:
    uVar1 = (*(code *)PTR_FUN_8c01a8ec)(ar4,ar5,ar6,ar7);
    break;
  case 10:
    uVar1 = (*(code *)PTR_FUN_8c01a8f0)(ar4,ar5,ar6,ar7);
    break;
  case 0xb:
    uVar1 = (*(code *)PTR_FUN_8c01a8f4)(ar4,ar5,ar6,ar7);
    break;
  case 0xc:
    uVar1 = (*(code *)PTR_FUN_8c01a8f8)(ar4,ar5,ar6,ar7);
    break;
  case 0xd:
    uVar1 = (*(code *)PTR_FUN_8c01a8fc)(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c01a900 @ 8c01a900 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01a900(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c01a97c)(*DAT_8c01a978,ar5,ar6,ar7);
  if (iVar1 == -1) {
    iVar1 = (*(code *)PTR_FUN_8c01a980)(ar4,ar5,ar6,ar7);
  }
  else {
    iVar2 = (*(code *)PTR_FUN_8c01a984)(*DAT_8c01a978,ar5,ar6,ar7);
    iVar1 = DAT_8c01a988;
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + DAT_8c01a988 + *ar4 * 0x28) = 1;
    }
    else {
      *(undefined4 *)((int)ar4 + DAT_8c01a988 + *ar4 * 0x28) = 0;
    }
  }
  return iVar1;
}



/* FUN_8c01a98c @ 8c01a98c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01a98c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  while( true ) {
    iVar1 = *(int *)((int)ar4 + DAT_8c01aa78 + *ar4 * 0x28);
    if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) &&
       (*(int *)((int)ar4 + DAT_8c01aa7c + *ar4 * 0x28) != 0)) {
      (*(code *)PTR_FUN_8c01aa80)
                (*(undefined4 *)((int)ar4 + DAT_8c01aa7c + *ar4 * 0x28),ar5,ar6,ar7);
    }
    iVar2 = *ar4;
    iVar1 = *(int *)((int)ar4 + DAT_8c01aa84 + *ar4 * 0x28);
    *(undefined4 *)((int)ar4 + DAT_8c01aa88 + *ar4 * 0x28) = 0xffffffff;
    *ar4 = iVar1;
    iVar1 = *(int *)((int)ar4 + DAT_8c01aa78 + *ar4 * 0x28);
    if ((iVar1 != 2) || (iVar1 = (*(code *)PTR_FUN_8c01aa8c)(ar4,ar5,ar6,ar7), iVar1 != 1)) break;
    *(undefined4 *)((int)ar4 + DAT_8c01aa90 + iVar2 * 0x28) = 1;
  }
  return iVar1;
}



/* FUN_8c01aa94 @ 8c01aa94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01aa94(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (-1 < *ar4) {
    iVar1 = *(int *)((int)ar4 + DAT_8c01ab20 + *ar4 * 0x28);
    while ((-1 < iVar1 && (*(int *)((int)ar4 + DAT_8c01ab24 + iVar1 * 0x28) != -1))) {
      if (*(int *)((int)ar4 + DAT_8c01ab28 + iVar1 * 0x28) == 2) {
        return 1;
      }
      iVar1 = *(int *)((int)ar4 + DAT_8c01ab20 + iVar1 * 0x28);
    }
  }
  return 0;
}



/* FUN_8c01ab2c @ 8c01ab2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ab2c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *a4;
  
  do {
    a4 = ar4;
    iVar1 = (*(code *)PTR_FUN_8c01ab6c)(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) break;
  } while (-1 < *ar4);
  if (0 < *DAT_8c01ab70) {
    (*(code *)PTR_FUN_8c01ab74)(a4,ar5,ar6,ar7);
  }
  *DAT_8c01ab70 = 0;
  return 1;
}



/* FUN_8c01ab78 @ 8c01ab78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c01ab78(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((uVar2 < DAT_8c01acb4 && (*(int *)((int)ar4 + DAT_8c01acb0 + uVar2 * 0x28) != -1))) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < DAT_8c01acb4) {
    if ((int)*ar4 < 0) {
      *ar4 = uVar2;
    }
    else {
      uVar1 = *ar4;
      while (-1 < *(int *)((int)ar4 + DAT_8c01acb8 + uVar1 * 0x28)) {
        uVar1 = *(uint *)((int)ar4 + DAT_8c01acb8 + uVar1 * 0x28);
      }
      *(uint *)((int)ar4 + DAT_8c01acb8 + uVar1 * 0x28) = uVar2;
    }
    (*(code *)PTR_strcpy_8c01acc0)((int)ar4 + DAT_8c01acbc + uVar2 * 0x28,ar6,ar6,ar7);
    *(undefined4 *)((int)ar4 + DAT_8c01acc4 + uVar2 * 0x28) = ar5;
    *(undefined4 *)((int)ar4 + DAT_8c01acc8 + uVar2 * 0x28) = 2;
    *(undefined4 *)((int)ar4 + DAT_8c01acb8 + uVar2 * 0x28) = 0xffffffff;
    *(uint *)((int)ar4 + DAT_8c01acb0 + uVar2 * 0x28) = ar4[3];
    if (DAT_8c01accc < (int)ar4[3]) {
      ar4[3] = 10;
    }
    else {
      ar4[3] = ar4[3] + 1;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c01acd0 @ 8c01acd0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01acd0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint *a5;
  uint uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [10];
  undefined1 auStack_16 [14];
  
  (*(code *)PTR_FUN_8c01ad74)(auStack_16,ar5,ar6,ar7);
  a5 = &uStack_24;
  (*(code *)PTR_FUN_8c01ad78)(auStack_16,a5,ar6,ar7);
  uStack_24 = uStack_24 + 10;
  while( true ) {
    (*(code *)PTR_FUN_8c01ad7c)(ar4,a5,ar6,ar7);
    (*(code *)PTR_FUN_8c01ad74)(auStack_20,a5,ar6,ar7);
    a5 = &uStack_28;
    (*(code *)PTR_FUN_8c01ad78)(auStack_20,a5,ar6,ar7);
    if (uStack_24 < uStack_28) {
      return 0;
    }
    iVar1 = *(int *)(DAT_8c01ad80 + ar5 * 0x28 + ar4);
    if ((iVar1 != 2) && (iVar1 != 3)) break;
    (*(code *)PTR_FUN_8c01ad84)(ar4,a5,ar6,ar7);
  }
  return *(undefined4 *)(DAT_8c01ad80 + ar5 * 0x28 + ar4);
}



/* FUN_8c01ad88 @ 8c01ad88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ad88(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*ar4 < 0) {
    return 0;
  }
  return 1;
}



/* FUN_8c01ad9c @ 8c01ad9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ad9c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c01ade0)(ar4,ar5,ar6,ar7);
  if (iVar1 < 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = *(undefined4 *)(DAT_8c01ade4 + iVar1 * 0x28 + ar4);
  }
  return uVar2;
}



/* FUN_8c01ade8 @ 8c01ade8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ade8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (DAT_8c01ae24 <= iVar1) {
      return 0xffffffff;
    }
    if (*(int *)(DAT_8c01ae20 + iVar1 * 0x28 + ar4) == ar5) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* FUN_8c01ae28 @ 8c01ae28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ae28(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*DAT_8c01ae8c == 3) {
    iVar2 = (*(code *)PTR_FUN_8c01ae90)(ar4,ar5,ar6,ar7);
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *(undefined4 *)(DAT_8c01ae94 + iVar2 * 0x28 + ar4);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* FUN_8c01ae98 @ 8c01ae98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ae98(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  
  if (*DAT_8c01af04 == 3) {
    a5 = (*(code *)PTR_FUN_8c01af08)(ar4,ar5,ar6,ar7);
    if (a5 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*(code *)PTR_FUN_8c01af0c)(ar4,a5,ar6,ar7);
      uVar1 = (*(code *)PTR_FUN_8c01af10)(ar4,uVar1,ar6,ar7);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c01af14 @ 8c01af14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01af14(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  uint a5;
  int a4_00;
  undefined4 uVar2;
  undefined1 *a5_00;
  undefined4 uVar3;
  undefined4 a7;
  int aiStack_a8 [4];
  int iStack_98;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined1 auStack_80 [18];
  undefined1 auStack_6e [50];
  int iStack_3c;
  int iStack_38;
  ushort uStack_34;
  ushort uStack_2c;
  
  uVar2 = 2;
  a7 = ar7;
  aiStack_a8[0] = ar5;
  aiStack_a8[1] = ar6;
  iVar1 = (*(code *)PTR_FUN_8c01b064)(ar4,2,ar5,ar7);
  uVar3 = DAT_8c01b068;
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    iStack_84 = iVar1;
    a4 = (*(code *)PTR_malloc_thunk_8c01b06c)(DAT_8c01b068,uVar2,ar5,a7);
    if (a4 == 0) {
      iVar1 = -1;
    }
    else {
      iStack_88 = a4;
      (*(code *)PTR_memset_8c01b070)(a4,0,uVar3,a7);
      (*(code *)PTR_memmove_8c01b074)(a4,aiStack_a8[1],ar7,a7);
      uVar2 = 0x60;
      (*(code *)PTR_memset_8c01b070)(auStack_80,0,0x60,a7);
      (*(code *)PTR_strcpy_8c01b07c)
                (auStack_80,*(undefined4 *)((int)aiStack_a8 + DAT_8c01b078),uVar2,a7);
      (*(code *)PTR_strcpy_8c01b07c)
                (auStack_6e,*(undefined4 *)((int)aiStack_a8 + DAT_8c01b080),uVar2,a7);
      iStack_3c = *(int *)(ar4 + 0x10) + DAT_8c01b084;
      iStack_38 = *(int *)(ar4 + 0x10) + DAT_8c01b088;
      uStack_34 = 1;
      *(int *)((int)aiStack_a8 + DAT_8c01b08c) = a4;
      *(undefined4 *)((int)aiStack_a8 + DAT_8c01b090) = uVar3;
      uVar3 = *(undefined4 *)((int)aiStack_a8 + DAT_8c01b090);
      a5 = (uint)uStack_2c;
      iStack_98 = (*(code *)PTR_FUN_8c01b094)((uint)uStack_34,a5,uVar3,a7);
      iStack_8c = iStack_98;
      a4_00 = (*(code *)PTR_malloc_thunk_8c01b06c)(iStack_98 << 9,a5,uVar3,a7);
      if (a4_00 == 0) {
        iVar1 = -1;
      }
      else {
        a5_00 = auStack_80;
        iStack_90 = a4_00;
        uVar2 = (*(code *)PTR_FUN_8c01b098)(a4_00,a5_00,uVar3,a7);
        uStack_94 = uVar2;
        (*(code *)PTR_FUN_8c01b09c)(a4,a5_00,uVar3,a7);
        *(undefined4 *)(DAT_8c01b0a0 + iVar1 * 0x28 + ar4) = uVar2;
        *(int *)(DAT_8c01b0a4 + iVar1 * 0x28 + ar4) = a4_00;
      }
    }
  }
  return iVar1;
}



/* FUN_8c01b0a8 @ 8c01b0a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01b0a8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_10;
  undefined4 auStack_c [2];
  
  if (*DAT_8c01b12c == 3) {
    iVar2 = (*(code *)PTR_file_load_to_buffer_8c01b138)
                      (DAT_8c01b134,ar5,PTR_s_VM_User_Icon_VMI_8c01b130 + 0x11,auStack_c);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      (*(code *)PTR_FUN_8c01b13c)(ar4,ar5,auStack_c[0],uStack_10);
      (*(code *)PTR_FUN_8c01b140)(DAT_8c01b134,ar5,PTR_s_VM_User_Icon_VMI_8c01b130 + 0x11,1);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c01b144 @ 8c01b144 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01b144(undefined4 ar4,undefined4 ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *a5;
  uint a7;
  int aiStack_20 [3];
  undefined4 uStack_c;
  
  uStack_c = 1;
  iVar1 = -DAT_8c01b26c;
  *(undefined4 *)((int)aiStack_20 + iVar1 + 8) = ar6;
  a7 = ar7;
  uVar2 = (*(code *)PTR_FUN_8c01b274)(*DAT_8c01b270,ar5,ar6,ar7);
  *(undefined4 *)(&stack0x00000010 + iVar1) = uVar2;
  if (DAT_8c01b278 != *(int *)(&stack0x00000010 + iVar1)) {
    if (*(int *)(&stack0x00000010 + iVar1) != 0) {
      return 0;
    }
    uVar2 = (*(code *)PTR_FUN_8c01b27c)(ar4,ar5,ar6,a7);
    *(undefined4 *)(&stack0x0000000c + iVar1) = uVar2;
    if (*(int *)(&stack0x0000000c + iVar1) == 0) {
      return 0;
    }
  }
  uVar3 = 1;
  uVar2 = (*(code *)PTR_FUN_8c01b280)(*DAT_8c01b270,1,ar6,a7);
  *(undefined4 *)(&stack0x00000008 + iVar1) = uVar2;
  *(undefined4 *)(&stack0xffffffec + iVar1) = *(undefined4 *)(&stack0x00000008 + iVar1);
  if ((int)((*(int *)(&stack0xffffffec + iVar1) * 0x200 - DAT_8c01b284) - ar7) < 0) {
    uVar2 = (*(code *)PTR_FUN_8c01b288)(ar4,uVar3,ar6,a7);
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar2;
    if (*(uint *)(&stack0x00000004 + iVar1) < ar7) {
      return 0;
    }
    a5 = &stack0x00000014 + iVar1;
    uVar2 = (*(code *)PTR_FUN_8c01b28c)(*DAT_8c01b270,a5,ar6,a7);
    *(undefined4 *)(&stack0x00000000 + iVar1) = uVar2;
    if (*(int *)(&stack0x00000000 + iVar1) != 0) {
      return 0;
    }
    do {
      uVar2 = (*(code *)PTR_FUN_8c01b290)(*DAT_8c01b270,a5,ar6,a7);
      *(undefined4 *)(&stack0xfffffffc + iVar1) = uVar2;
    } while (*(int *)(&stack0xfffffffc + iVar1) == -1);
    uVar2 = (*(code *)PTR_FUN_8c01b294)(*DAT_8c01b270,a5,ar6,a7);
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar2;
    if (*(int *)(&stack0xfffffff8 + iVar1) != 0) {
      return 0;
    }
  }
  *(undefined4 *)((int)aiStack_20 + iVar1 + 4) =
       *(undefined4 *)((int)aiStack_20 + DAT_8c01b298 + iVar1 + 8);
  *(undefined4 *)((int)aiStack_20 + iVar1) =
       *(undefined4 *)((int)aiStack_20 + DAT_8c01b298 + iVar1 + 4);
  uVar3 = *(undefined4 *)((int)aiStack_20 + iVar1 + 8);
  uVar2 = (*(code *)PTR_s_VM_App_Icon_VMI_01b2b2_8c01b29c)(ar4,ar5,uVar3,ar7);
  *(undefined4 *)((int)&stack0xfffffff4 + iVar1) = uVar2;
  if (*(int *)((int)&stack0xfffffff4 + iVar1) < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)PTR_FUN_8c01b2a0)(ar4,*(int *)((int)&stack0xfffffff4 + iVar1),uVar3,ar7);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar2;
    uVar2 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  }
  return uVar2;
}



/* s_VM_App_Icon_VMI_01b2b2 @ 8c01b2a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_VM_App_Icon_VMI_01b2b2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a4;
  undefined4 uVar3;
  int *a7;
  int unaff_r8;
  int a4_00;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  int aiStack_24 [2];
  
  a7 = aiStack_24;
  iVar1 = (*(code *)PTR_FUN_8c01b3c8)
                    (DAT_8c01b3c4,PTR_s_VM_User_Icon_VMI_8c01b3c0 + 0x12,
                     PTR_s_VM_User_Icon_VMI_8c01b3c0 + 0x11,a7);
  if (iVar1 == 0) {
    unaff_r8 = -1;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c01b3cc)(ar4,3,ar5,a7);
    if (-1 < iVar1) {
      uVar3 = ar7;
      iVar2 = (*(code *)PTR_FUN_8c01b3d0)(ar4,ar7,ar5,a7);
      a4 = (*(code *)PTR_malloc_thunk_8c01b3d4)(iVar2 << 9,uVar3,ar5,a7);
      if (a4 != 0) {
        (*(code *)PTR_memmove_8c01b3d8)(a4,ar6,ar7,a7);
        a4_00 = a4 + DAT_8c01b3dc;
        uVar3 = DAT_8c01b3e0;
        (*(code *)PTR_memset_8c01b3e4)(a4_00,0,DAT_8c01b3e0,a7);
        (*(code *)PTR_strcpy_8c01b3e8)(a4_00,in_stack_00000000,uVar3,a7);
        (*(code *)PTR_strcpy_8c01b3e8)(a4_00 + 0x10,in_stack_00000004,uVar3,a7);
        *(undefined2 *)(a4_00 + 0x40) = 1;
        *(undefined4 *)(a4_00 + 0x48) = ar7;
        (*(code *)PTR_memmove_8c01b3d8)(a4_00 + 0x60,aiStack_24[0] + DAT_8c01b3f0,DAT_8c01b3ec,a7);
        *(int *)(DAT_8c01b3f4 + iVar1 * 0x28 + ar4) = iVar2;
        *(int *)(DAT_8c01b3f8 + iVar1 * 0x28 + ar4) = a4;
        unaff_r8 = iVar1;
      }
    }
    (*(code *)PTR_FUN_8c01b3fc)
              (DAT_8c01b3c4,PTR_s_VM_User_Icon_VMI_8c01b3c0 + 0x12,
               PTR_s_VM_User_Icon_VMI_8c01b3c0 + 0x11,a7);
  }
  return unaff_r8;
}



/* FUN_8c01b400 @ 8c01b400 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01b400(int ar4,undefined4 ar5,undefined4 ar6,uint ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*DAT_8c01b46c == 3) {
    if (DAT_8c01b470 < ar7) {
      uVar1 = 0xffffffff;
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c01b474)(ar4,ar5,ar6,ar7);
      if (iVar2 < 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = *(undefined4 *)(DAT_8c01b478 + iVar2 * 0x28 + ar4);
      }
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* FUN_8c01b47c @ 8c01b47c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01b47c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  
  if (*DAT_8c01b4e0 == 3) {
    a5 = (*(code *)PTR_FUN_8c01b4e4)(ar4,ar5,ar6,ar7);
    if (a5 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*(code *)PTR_FUN_8c01b4e8)(ar4,a5,ar6,ar7);
      uVar1 = (*(code *)PTR_FUN_8c01b4ec)(ar4,uVar1,ar6,ar7);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c01b4f0 @ 8c01b4f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01b4f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a4;
  undefined4 a5;
  undefined4 a7;
  
  a7 = ar7;
  iVar1 = (*(code *)PTR_FUN_8c01b594)(ar4,4,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    a5 = ar7;
    iVar2 = (*(code *)PTR_FUN_8c01b598)(ar4,ar7,ar5,a7);
    a4 = (*(code *)PTR_malloc_thunk_8c01b59c)(iVar2 << 9,a5,ar5,a7);
    if (a4 == 0) {
      iVar1 = -1;
    }
    else {
      (*(code *)PTR_memmove_8c01b5a0)(a4,ar6,ar7,a7);
      *(int *)(DAT_8c01b5a4 + iVar1 * 0x28 + ar4) = iVar2;
      *(int *)(DAT_8c01b5a8 + iVar1 * 0x28 + ar4) = a4;
    }
  }
  return iVar1;
}



/* FUN_8c01b5ac @ 8c01b5ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01b5ac(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c01b5d8)(ar4,ar5 + DAT_8c01b5d4,ar6,ar7);
  return uVar1;
}



/* FUN_8c01b5dc @ 8c01b5dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c01b5dc(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = ar5 >> 9;
  if ((ar5 & DAT_8c01b5f4) != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* FUN_8c01b5f8 @ 8c01b5f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01b5f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  int iVar2;
  int iVar3;
  undefined4 a5_00;
  undefined4 a6;
  undefined4 a7;
  undefined1 auStack_74 [88];
  undefined4 uStack_1c;
  
  uVar1 = 1;
  if (*DAT_8c01b6e4 == 3) {
    a6 = DAT_8c01b6e8;
    a7 = ar7;
    a5 = (*(code *)PTR_FUN_8c01b6ec)(ar4,ar5,DAT_8c01b6e8,ar7);
    if (a5 < 0) {
      uVar1 = 0;
    }
    else {
      iVar3 = a5;
      iVar2 = (*(code *)PTR_FUN_8c01b6f0)(ar4,a5,a6,a7);
      if (iVar2 == 0) {
        (*(code *)PTR_FUN_8c01b6f8)(*(undefined4 *)(DAT_8c01b6f4 + a5 * 0x28 + ar4),iVar3,a6,a7);
        uVar1 = 0;
      }
      else {
        a5_00 = *(undefined4 *)(DAT_8c01b6f4 + a5 * 0x28 + ar4);
        iVar3 = (*(code *)PTR_FUN_8c01b6fc)(auStack_74,a5_00,a6,a7);
        if ((DAT_8c01b700 == iVar3) || (DAT_8c01b704 == iVar3)) {
          uVar1 = 0;
        }
        else if (iVar3 == 0) {
          (*(code *)PTR_memmove_8c01b708)(ar6,uStack_1c,ar7,a7);
          uVar1 = 1;
          a5_00 = uStack_1c;
          a6 = ar7;
        }
        (*(code *)PTR_FUN_8c01b6f8)(*(undefined4 *)(DAT_8c01b6f4 + a5 * 0x28 + ar4),a5_00,a6,a7);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c01b70c @ 8c01b70c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01b70c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (*(code *)PTR_FUN_8c01b79c)(ar4,0,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar2 = (*(code *)PTR_FUN_8c01b7a0)(ar4,ar6,ar5,ar7);
    iVar3 = (*(code *)PTR_malloc_thunk_8c01b7a4)(iVar2 << 9,ar6,ar5,ar7);
    if (iVar3 == 0) {
      iVar1 = -1;
    }
    else {
      *(int *)(DAT_8c01b7a8 + iVar1 * 0x28 + ar4) = iVar2;
      *(int *)(DAT_8c01b7ac + iVar1 * 0x28 + ar4) = iVar3;
    }
  }
  return iVar1;
}



/* FUN_8c01b7b0 @ 8c01b7b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01b7b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  int iVar2;
  int a5_00;
  undefined4 a7;
  
  if (*DAT_8c01b864 == 3) {
    uVar1 = ar7;
    a7 = ar7;
    a5 = (*(code *)PTR_FUN_8c01b868)(ar4,ar5,ar7,ar7);
    if (a5 < 0) {
      uVar1 = 0;
    }
    else {
      a5_00 = a5;
      iVar2 = (*(code *)PTR_FUN_8c01b86c)(ar4,a5,uVar1,a7);
      if (iVar2 == 0) {
        (*(code *)PTR_FUN_8c01b874)(*(undefined4 *)(DAT_8c01b870 + a5 * 0x28 + ar4),a5_00,uVar1,a7);
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(DAT_8c01b870 + a5 * 0x28 + ar4);
        (*(code *)PTR_memmove_8c01b878)(ar6,uVar1,ar7,a7);
        (*(code *)PTR_FUN_8c01b874)(*(undefined4 *)(DAT_8c01b870 + a5 * 0x28 + ar4),uVar1,ar7,a7);
        uVar1 = 1;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c01b87c @ 8c01b87c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01b87c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (*(code *)PTR_FUN_8c01b90c)(ar4,1,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar2 = (*(code *)PTR_FUN_8c01b910)(ar4,ar6,ar5,ar7);
    iVar3 = (*(code *)PTR_malloc_thunk_8c01b914)(iVar2 << 9,ar6,ar5,ar7);
    if (iVar3 == 0) {
      iVar1 = -1;
    }
    else {
      *(int *)(DAT_8c01b918 + iVar1 * 0x28 + ar4) = iVar2;
      *(int *)(DAT_8c01b91c + iVar1 * 0x28 + ar4) = iVar3;
    }
  }
  return iVar1;
}



/* FUN_8c01b920 @ 8c01b920 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01b920(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  if (*DAT_8c01b99c == 3) {
    iVar1 = (*(code *)PTR_FUN_8c01b9a0)(ar4,ar5,ar6,ar7);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c01b9a4)(ar4,iVar1,ar6,ar7);
      if (iVar2 == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = *(int *)(DAT_8c01b9a8 + iVar1 * 0x28 + ar4) * 0x200 - DAT_8c01b9ac;
      }
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* FUN_8c01b9b0 @ 8c01b9b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01b9b0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c01b9e0)(ar4,8,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* FUN_8c01b9e4 @ 8c01b9e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01b9e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  if (*DAT_8c01ba58 == 3) {
    iVar1 = (*(code *)PTR_FUN_8c01ba5c)(ar4,ar5,ar6,ar7);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c01ba60)(ar4,iVar1,ar6,ar7);
      if (iVar2 == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = *(int *)(DAT_8c01ba64 + iVar1 * 0x28 + ar4) << 9;
      }
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* FUN_8c01ba68 @ 8c01ba68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01ba68(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c01ba9c)(ar4,9,PTR_s_VM_User_Icon_VMI_8c01ba98 + 0x11,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* FUN_8c01baa0 @ 8c01baa0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01baa0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*DAT_8c01baf4 == 3) {
    iVar2 = (*(code *)PTR_FUN_8c01baf8)(ar4,ar5,ar6,ar7);
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *(undefined4 *)(DAT_8c01bafc + iVar2 * 0x28 + ar4);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* FUN_8c01bb00 @ 8c01bb00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01bb00(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  
  if (*DAT_8c01bb5c == 3) {
    a5 = (*(code *)PTR_FUN_8c01bb60)(ar4,ar5,ar6,ar7);
    if (a5 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*(code *)PTR_FUN_8c01bb64)(ar4,a5,ar6,ar7);
      uVar1 = (*(code *)PTR_FUN_8c01bb68)(ar4,uVar1,ar6,ar7);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c01bb6c @ 8c01bb6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01bb6c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c01bb9c)(ar4,5,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* FUN_8c01bba0 @ 8c01bba0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01bba0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  
  if (*DAT_8c01bbec == 3) {
    a5 = (*(code *)PTR_FUN_8c01bbf0)(ar4,ar5,ar6,ar7);
    if (a5 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*(code *)PTR_FUN_8c01bbf4)(ar4,a5,ar6,ar7);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c01bbf8 @ 8c01bbf8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01bbf8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c01bc28)(ar4,6,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* FUN_8c01bc2c @ 8c01bc2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01bc2c(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  int a5;
  undefined1 *a6;
  
  if (*DAT_8c01bcac == 3) {
    a6 = ar6;
    a5 = (*(code *)PTR_FUN_8c01bcb0)(ar4,ar5,ar6,ar7);
    if (a5 < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c01bcb4)(ar4,a5,a6,ar7);
      *ar6 = 0;
      if (iVar1 == 5) {
        (*(code *)PTR_strcpy_8c01bcbc)(ar6,a5 * 0x28 + ar4 + DAT_8c01bcb8,a6,ar7);
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* FUN_8c01bcc0 @ 8c01bcc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01bcc0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c01bcf0)(ar4,7,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* FUN_8c01bcf4 @ 8c01bcf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01bcf4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*DAT_8c01bd44 == 3) {
    iVar2 = (*(code *)PTR_FUN_8c01bd48)(ar4,ar5,ar6,ar7);
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *(undefined4 *)(DAT_8c01bd4c + iVar2 * 0x28 + ar4);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* FUN_8c01bd50 @ 8c01bd50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01bd50(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c01bd84)(ar4,10,PTR_s_VM_User_Icon_VMI_8c01bd80 + 0x11,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* FUN_8c01bd88 @ 8c01bd88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01bd88(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*DAT_8c01bdd8 == 3) {
    iVar2 = (*(code *)PTR_FUN_8c01bddc)(ar4,ar5,ar6,ar7);
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *(undefined4 *)(DAT_8c01bde0 + iVar2 * 0x28 + ar4);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* FUN_8c01bde4 @ 8c01bde4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01bde4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c01be18)(ar4,0xb,PTR_s_VM_User_Icon_VMI_8c01be14 + 0x11,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* FUN_8c01be1c @ 8c01be1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01be1c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*DAT_8c01be78 == 3) {
    if (*(int *)(ar4 + 0x18) < 1) {
      iVar2 = (*(code *)PTR_FUN_8c01be7c)(ar4,ar5,ar6,ar7);
      if (iVar2 < 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = *(undefined4 *)(DAT_8c01be80 + iVar2 * 0x28 + ar4);
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* FUN_8c01be84 @ 8c01be84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01be84(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c01beb8)(ar4,0xd,PTR_s_VM_User_Icon_VMI_8c01beb4 + 0x11,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* FUN_8c01bebc @ 8c01bebc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01bebc(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_18 [16];
  
  (*(code *)PTR_FUN_8c01bfb4)(auStack_18,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c01bfc8)
                    (*DAT_8c01bfc4,(int)ar4 + DAT_8c01bfc0 + *ar4 * 0x28,
                     *(undefined4 *)((int)ar4 + DAT_8c01bfbc + *ar4 * 0x28),
                     *(undefined4 *)((int)ar4 + DAT_8c01bfb8 + *ar4 * 0x28));
  iVar1 = DAT_8c01bfcc;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + DAT_8c01bfcc + *ar4 * 0x28) = 3;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + DAT_8c01bfcc + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



/* FUN_8c01bfd0 @ 8c01bfd0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01bfd0(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_18 [16];
  
  (*(code *)PTR_FUN_8c01c0c8)(auStack_18,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c01c0dc)
                    (*DAT_8c01c0d8,(int)ar4 + DAT_8c01c0d4 + *ar4 * 0x28,
                     *(undefined4 *)((int)ar4 + DAT_8c01c0d0 + *ar4 * 0x28),
                     *(undefined4 *)((int)ar4 + DAT_8c01c0cc + *ar4 * 0x28));
  iVar1 = DAT_8c01c0e0;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + DAT_8c01c0e0 + *ar4 * 0x28) = 3;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + DAT_8c01c0e0 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



/* FUN_8c01c0e4 @ 8c01c0e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01c0e4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(code *)PTR_FUN_8c01c19c)
                    (*DAT_8c01c198,(int)ar4 + DAT_8c01c194 + *ar4 * 0x28,
                     *(undefined4 *)((int)ar4 + DAT_8c01c190 + *ar4 * 0x28),0x11);
  iVar1 = DAT_8c01c1a0;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + DAT_8c01c1a0 + *ar4 * 0x28) = 3;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + DAT_8c01c1a0 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



/* FUN_8c01c1a4 @ 8c01c1a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01c1a4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(code *)PTR_FUN_8c01c258)
                    (*DAT_8c01c254,(int)ar4 + DAT_8c01c250 + *ar4 * 0x28,
                     *(undefined4 *)((int)ar4 + DAT_8c01c24c + *ar4 * 0x28),
                     *(undefined4 *)((int)ar4 + DAT_8c01c248 + *ar4 * 0x28));
  iVar1 = DAT_8c01c25c;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + DAT_8c01c25c + *ar4 * 0x28) = 3;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + DAT_8c01c25c + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



/* FUN_8c01c260 @ 8c01c260 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01c260(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(code *)PTR_FUN_8c01c318)
                    (*DAT_8c01c314,(int)ar4 + DAT_8c01c310 + *ar4 * 0x28,
                     *(undefined4 *)((int)ar4 + DAT_8c01c30c + *ar4 * 0x28),0x11);
  iVar1 = DAT_8c01c31c;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + DAT_8c01c31c + *ar4 * 0x28) = 3;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + DAT_8c01c31c + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



/* FUN_8c01c320 @ 8c01c320 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01c320(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*(code *)PTR_FUN_8c01c3b8)(*DAT_8c01c3b4,(int)ar4 + DAT_8c01c3b0 + *ar4 * 0x28,ar6,ar7);
  iVar1 = DAT_8c01c3bc;
  if (iVar2 < 0) {
    iVar3 = iVar2;
    if (iVar2 != -1) {
      *(undefined4 *)((int)ar4 + DAT_8c01c3bc + *ar4 * 0x28) = 0;
      iVar3 = iVar1;
    }
  }
  else {
    *(undefined4 *)((int)ar4 + DAT_8c01c3bc + *ar4 * 0x28) = 1;
    iVar3 = DAT_8c01c3c0;
    *(int *)((int)ar4 + DAT_8c01c3c0 + *ar4 * 0x28) = iVar2;
  }
  return iVar3;
}



/* FUN_8c01c3c4 @ 8c01c3c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01c3c4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*(code *)PTR_FUN_8c01c444)(*DAT_8c01c440,0,ar6,ar7);
  iVar1 = DAT_8c01c448;
  if (iVar2 < 0) {
    iVar3 = iVar2;
    if (iVar2 != -1) {
      *(undefined4 *)((int)ar4 + DAT_8c01c448 + *ar4 * 0x28) = 0;
      iVar3 = iVar1;
    }
  }
  else {
    *(undefined4 *)((int)ar4 + DAT_8c01c448 + *ar4 * 0x28) = 1;
    iVar3 = DAT_8c01c44c;
    *(int *)((int)ar4 + DAT_8c01c44c + *ar4 * 0x28) = iVar2;
  }
  return iVar3;
}



/* FUN_8c01c450 @ 8c01c450 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01c450(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(code *)PTR_FUN_8c01c4d0)(*DAT_8c01c4cc,(int)ar4 + DAT_8c01c4c8 + *ar4 * 0x28,ar6,ar7);
  iVar1 = DAT_8c01c4d4;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + DAT_8c01c4d4 + *ar4 * 0x28) = 3;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + DAT_8c01c4d4 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



/* FUN_8c01c4d8 @ 8c01c4d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01c4d8(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(code *)PTR_FUN_8c01c558)(*DAT_8c01c554,(int)ar4 + DAT_8c01c550 + *ar4 * 0x28,ar6,ar7);
  iVar1 = DAT_8c01c55c;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + DAT_8c01c55c + *ar4 * 0x28) = 1;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + DAT_8c01c55c + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



/* FUN_8c01c560 @ 8c01c560 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01c560(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  char acStack_28 [36];
  
  iVar1 = (*(code *)PTR_FUN_8c01c674)(*DAT_8c01c670,acStack_28,ar6,ar7);
  iVar2 = DAT_8c01c67c;
  if (DAT_8c01c678 == iVar1) {
    *(undefined4 *)((int)ar4 + DAT_8c01c67c + *ar4 * 0x28) = 4;
    iVar1 = iVar2;
  }
  else if (iVar1 != -1) {
    if (iVar1 == 0) {
      if (acStack_28[0] == '\0') {
        *(undefined4 *)((int)ar4 + DAT_8c01c67c + *ar4 * 0x28) = 4;
        iVar1 = iVar2;
      }
      else {
        iVar2 = (*(code *)PTR_FUN_8c01c684)
                          (acStack_28,(int)ar4 + DAT_8c01c680 + *ar4 * 0x28,ar6,ar7);
        iVar1 = DAT_8c01c67c;
        if (iVar2 == 0) {
          *(undefined4 *)((int)ar4 + DAT_8c01c67c + *ar4 * 0x28) = 1;
        }
        else {
          *(undefined4 *)((int)ar4 + DAT_8c01c67c + *ar4 * 0x28) = 5;
          iVar1 = (*(code *)PTR_strcpy_8c01c688)
                            ((int)ar4 + DAT_8c01c680 + *ar4 * 0x28,acStack_28,ar6,ar7);
        }
      }
    }
    else {
      *(undefined4 *)((int)ar4 + DAT_8c01c67c + *ar4 * 0x28) = 0;
      iVar1 = iVar2;
    }
  }
  return iVar1;
}



/* FUN_8c01c68c @ 8c01c68c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01c68c(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  
  do {
    bVar1 = *ar4;
    if (bVar1 != *ar5) {
      return (uint)bVar1 - (uint)*ar5;
    }
    ar5 = ar5 + 1;
    ar4 = ar4 + 1;
  } while (bVar1 != 0);
  return 0;
}



/* FUN_8c01c6f4 @ 8c01c6f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01c6f4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  
  uStack_18 = *PTR_DAT_8c01c768;
  uStack_17 = PTR_DAT_8c01c768[1];
  uStack_16 = PTR_DAT_8c01c768[2];
  uStack_15 = PTR_DAT_8c01c768[3];
  iVar2 = (*(code *)PTR_FUN_8c01c76c)(ar4[2],&uStack_18,ar6,ar7);
  iVar1 = DAT_8c01c770;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + DAT_8c01c770 + *ar4 * 0x28) = 1;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + DAT_8c01c770 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



/* FUN_8c01c774 @ 8c01c774 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01c774(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  
  uStack_18 = *PTR_DAT_8c01c7e8;
  uStack_17 = PTR_DAT_8c01c7e8[1];
  uStack_16 = PTR_DAT_8c01c7e8[2];
  uStack_15 = PTR_DAT_8c01c7e8[3];
  iVar2 = (*(code *)PTR_FUN_8c01c7ec)(ar4[2],&uStack_18,ar6,ar7);
  iVar1 = DAT_8c01c7f0;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + DAT_8c01c7f0 + *ar4 * 0x28) = 1;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + DAT_8c01c7f0 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



/* FUN_8c01c7f4 @ 8c01c7f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01c7f4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(code *)PTR_FUN_8c01c858)(ar4,ar4 + 0xb,ar6,ar7);
  iVar1 = DAT_8c01c85c;
  if (iVar2 == 1) {
    *(undefined4 *)((int)ar4 + DAT_8c01c85c + *ar4 * 0x28) = 1;
    iVar2 = iVar1;
  }
  else if (iVar2 != 2) {
    *(undefined4 *)((int)ar4 + DAT_8c01c85c + *ar4 * 0x28) = 0;
    iVar2 = iVar1;
  }
  return iVar2;
}



/* FUN_8c01c860 @ 8c01c860 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01c860(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(code *)PTR_FUN_8c01c8c0)(ar4,ar4[9],ar6,ar7);
  iVar1 = DAT_8c01c8c4;
  if (iVar2 == 1) {
    *(undefined4 *)((int)ar4 + DAT_8c01c8c4 + *ar4 * 0x28) = 1;
    iVar2 = iVar1;
  }
  else if (iVar2 != 2) {
    *(undefined4 *)((int)ar4 + DAT_8c01c8c4 + *ar4 * 0x28) = 0;
    iVar2 = iVar1;
  }
  return iVar2;
}



/* FUN_8c01c8c8 @ 8c01c8c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01c8c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c01c91c)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c01c920)
                      (*(undefined4 *)(ar4 + 8),ar5,*(undefined4 *)(ar4 + 0x14),ar7);
    if (iVar1 == -1) {
      uVar2 = 2;
    }
    else if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* FUN_8c01c924 @ 8c01c924 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01c924(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x18) = 0x1e;
  return 0x1e;
}



/* FUN_8c01c92c @ 8c01c92c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01c92c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x18);
  if ((-1 < iVar1) && (iVar1 = 10, *(int *)(ar4 + 0x18) < 0xb)) {
    iVar1 = 0xf;
    *(undefined4 *)(ar4 + 0x18) = 0xf;
  }
  return iVar1;
}



/* FUN_8c01c944 @ 8c01c944 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01c944(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c01c960)(ar4,PTR_DAT_8c01c95c,ar6,ar7);
  return uVar1;
}



/* FUN_8c01c964 @ 8c01c964 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01c964(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x24) = ar5;
  *(undefined4 *)(ar4 + 0x20) = 1;
  return 1;
}



/* FUN_8c01c970 @ 8c01c970 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01c970(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 0x24);
  *ar5 = uVar1;
  return uVar1;
}



/* FUN_8c01c978 @ 8c01c978 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01c978(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x28) = ar5;
  *(undefined4 *)(ar4 + 0x1c) = 0x1e;
  return 0x1e;
}



/* FUN_8c01c984 @ 8c01c984 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01c984(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c01c994)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c01c998 @ 8c01c998 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01c998(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_LAB_8c01c9bc)(PTR_LAB_8c01c9b8,ar5,ar6,ar7);
  (*(code *)PTR_LAB_8c01c9c4)(PTR_LAB_8c01c9c0,ar5,ar6,ar7);
  *DAT_8c01c9c8 = 1;
  return 1;
}



/* FUN_8c01ca24 @ 8c01ca24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c01ca24(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    *(undefined4 *)((int)ar4 + DAT_8c01cad0 + iVar1 * 0x50) = 1;
  }
  *(undefined4 *)(DAT_8c01cad4 + (int)ar4) = 0xffffffff;
  *ar4 = 0xffffffff;
  ar4[1] = 0xffffffff;
  *DAT_8c01cad8 = 0;
  *(undefined4 *)(DAT_8c01cadc + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c01cae0 + (int)ar4) = 0;
  *DAT_8c01cae4 = 0;
  *DAT_8c01cae8 = 0;
  *(undefined4 *)(DAT_8c01caec + (int)ar4) = DAT_8c01caf0;
  *DAT_8c01caf4 = DAT_8c01caf8;
  *DAT_8c01cafc = 0;
  *DAT_8c01cb00 = 0;
  *DAT_8c01cb04 = 0;
  *DAT_8c01cb08 = 0;
  *(undefined1 *)(DAT_8c01cb08 + 3) = 0;
  *DAT_8c01cb0c = 0;
  *DAT_8c01cb10 = 0;
  *DAT_8c01cb14 = 0;
  *DAT_8c01cb18 = 0;
  *DAT_8c01cb1c = 0;
  *DAT_8c01cb20 = 0;
  return ar4;
}



/* free_if_nonnull_wrap_01cb24 @ 8c01cb24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_01cb24(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c01cb50)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c01cb54 @ 8c01cb54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01cb54(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c01cbb8)(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c01cbbc)(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = (*(code *)PTR_asr_load_language_model_8c01cbc0)(ar4,ar5,ar6,ar7);
      if (iVar1 == 0) {
        (*(code *)PTR_FUN_8c01cbc4)(ar4,ar5,ar6,ar7);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



/* FUN_8c01cbc8 @ 8c01cbc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c01cbc8(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  bool bVar2;
  
  if (ar5 != ar4[1]) {
    *DAT_8c01cc68 = 0;
    ar4[1] = ar5;
    if (ar5 == 6) {
      *ar4 = 8;
      ar4[2] = 8;
    }
    else if (ar5 == 0xc) {
      *ar4 = 0xe;
      ar4[2] = 0xe;
    }
    else if (ar5 == 0x12) {
      *ar4 = 0x14;
      ar4[2] = 0x14;
    }
    else {
      *ar4 = 2;
      ar4[2] = 2;
    }
  }
  puVar1 = (uint *)(*(code *)PTR_FUN_8c01cc6c)(ar4[2],ar5,ar6,ar7);
  bVar2 = (*puVar1 & 0x10) != 0;
  if (!bVar2) {
    (*(code *)PTR_FUN_8c01cc70)(ar4,ar5,ar6,ar7);
    *ar4 = 0xffffffff;
    ar4[1] = 0xffffffff;
    *DAT_8c01cc68 = 0;
  }
  return (uint)bVar2;
}



/* FUN_8c01cc74 @ 8c01cc74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01cc74(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*DAT_8c01cd10 < 2) {
    iVar2 = (*(code *)PTR_FUN_8c01cd14)(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      uVar1 = (*(code *)PTR_FUN_8c01cd20)(*ar4,ar5,ar6,ar7);
      *DAT_8c01cd24 = uVar1;
      uVar1 = (*(code *)PTR_FUN_8c01cd28)(*DAT_8c01cd24,ar5,ar6,ar7);
      *DAT_8c01cd2c = uVar1;
      *DAT_8c01cd10 = 2;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* asr_load_language_model @ 8c01cd30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 asr_load_language_model(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined *a5;
  undefined *a6;
  int a7;
  
  if (*DAT_8c01cdd0 < 3) {
    *DAT_8c01cdd4 = 0;
    *DAT_8c01cdd8 = 0;
    *DAT_8c01cddc = 0;
    *DAT_8c01cde0 = 0;
    *DAT_8c01cde4 = 0;
    *(undefined4 *)(DAT_8c01cde8 + ar4) = 0;
    a7 = ar4 + DAT_8c01cde8;
    a6 = PTR_s_asr16v2_aev200_float_4b_lng_8c01cdec + 0x1c;
    a5 = PTR_s_asr16v2_aev200_float_4b_lng_8c01cdec;
    iVar2 = (*(code *)PTR_file_load_into_object_buffer_8c01cdf4)
                      (DAT_8c01cdf0,PTR_s_asr16v2_aev200_float_4b_lng_8c01cdec,a6,a7);
    if (iVar2 == 1) {
      iVar2 = (*(code *)PTR_asr_init_from_model_8c01cdf8)(ar4,a5,a6,a7);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        (*(code *)PTR_asr_register_strings_8c01cdfc)
                  (ar4,PTR_s_asr16v2_aev200_float_4b_lng_8c01cdec + 0x1d,
                   PTR_s_asr16v2_aev200_float_4b_lng_8c01cdec + 0x26,a7);
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* asr_init_from_model @ 8c01ce00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 asr_init_from_model(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a5;
  undefined4 *a7;
  
  iVar1 = (*(code *)PTR_asr_lib_create_engine_8c01ceb8)(PTR_PTR_8c01ceb4,0,DAT_8c01ceb0,ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_asr_lib_load_model_8c01cec4)
                      (*DAT_8c01ceb0,*(undefined4 *)(DAT_8c01cec0 + ar4),1,DAT_8c01cebc);
    if (iVar1 == 0) {
      *DAT_8c01cec8 = 3;
      uVar2 = 0;
      a7 = DAT_8c01cecc;
      iVar1 = (*(code *)PTR_asr_lib_create_recognizer_8c01ced4)
                        (*DAT_8c01ceb0,PTR_PTR_8c01ced0,0,DAT_8c01cecc);
      if (iVar1 == 0) {
        a5 = *DAT_8c01cebc;
        iVar1 = (*(code *)PTR_asr_lib_bind_recognizer_model_8c01ced8)(*DAT_8c01cecc,a5,uVar2,a7);
        if (iVar1 == 0) {
          iVar1 = (*(code *)PTR_FUN_8c01cedc)(ar4,a5,uVar2,a7);
          if (iVar1 == 0) {
            uVar2 = 0;
          }
          else {
            *DAT_8c01cec8 = 4;
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c01cee0 @ 8c01cee0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01cee0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c01cfbc)(*DAT_8c01cfb8,1,0,ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c01cfbc)(*DAT_8c01cfb8,2,0,ar7);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_FUN_8c01cfbc)(*DAT_8c01cfb8,6,DAT_8c01cfc0,ar7);
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_FUN_8c01cfbc)(*DAT_8c01cfb8,7,1,ar7);
        if (iVar1 == 0) {
          iVar1 = (*(code *)PTR_FUN_8c01cfbc)(*DAT_8c01cfb8,10,DAT_8c01cfc4,ar7);
          if (iVar1 == 0) {
            iVar1 = (*(code *)PTR_FUN_8c01cfbc)(*DAT_8c01cfb8,0xd,1,ar7);
            if (iVar1 == 0) {
              iVar1 = (*(code *)PTR_FUN_8c01cfbc)(*DAT_8c01cfb8,0xe,0xffffffff,ar7);
              if (iVar1 == 0) {
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c01cfc8 @ 8c01cfc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01cfc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a4;
  
  (*(code *)PTR_FUN_8c01cff4)(*DAT_8c01cff0,ar5,ar6,ar7);
  a4 = *DAT_8c01cff8;
  (*(code *)PTR_FUN_8c01cffc)(a4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c01d000)(a4,ar5,ar6,ar7);
  *DAT_8c01d004 = 1;
  return 1;
}



/* FUN_8c01d008 @ 8c01d008 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01d008(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*DAT_8c01d09c != 0) {
    ar5 = 0;
    (*(code *)PTR_asr_lib_bind_recognizer_model_8c01d0a0)(*DAT_8c01d09c,0,ar6,ar7);
  }
  if (*DAT_8c01d0a4 != 0) {
    (*(code *)PTR_FUN_8c01d0a8)(*DAT_8c01d0a4,ar5,ar6,ar7);
  }
  if (*DAT_8c01d0ac != 0) {
    (*(code *)PTR_FUN_8c01d0b0)(*DAT_8c01d0ac,ar5,ar6,ar7);
  }
  if (*DAT_8c01d0b4 != 0) {
    (*(code *)PTR_FUN_8c01d0b8)(*DAT_8c01d0b4,ar5,ar6,ar7);
  }
  if (*DAT_8c01d09c != 0) {
    (*(code *)PTR_FUN_8c01d0bc)(*DAT_8c01d09c,ar5,ar6,ar7);
  }
  if (*DAT_8c01d0c0 != 0) {
    (*(code *)PTR_FUN_8c01d0c4)(*DAT_8c01d0c0,ar5,ar6,ar7);
  }
  *DAT_8c01d0c0 = 0;
  *DAT_8c01d09c = 0;
  *DAT_8c01d0b4 = 0;
  *DAT_8c01d0ac = 0;
  *DAT_8c01d0c8 = 2;
  return 2;
}



/* FUN_8c01d0cc @ 8c01d0cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c01d0cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  
  if (-1 < *(int *)(DAT_8c01d144 + ar4)) {
    iVar1 = *(int *)(DAT_8c01d148 + *(int *)(DAT_8c01d144 + ar4) * 0x50 + ar4);
    if ((iVar1 == 0) || (iVar1 == 1)) {
      (*(code *)PTR_FUN_8c01d150)(ar4,ar5,ar6,ar7);
    }
    else if (iVar1 == 2) {
      (*(code *)PTR_FUN_8c01d14c)(ar4,ar5,ar6,ar7);
    }
  }
  a5 = *(undefined4 *)(ar4 + 4);
  iVar1 = (*(code *)PTR_FUN_8c01d154)(ar4,a5,ar6,ar7);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c01d158)(ar4,a5,ar6,ar7);
  }
  return (uint)(iVar1 != 0);
}



/* FUN_8c01d15c @ 8c01d15c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01d15c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 3;
  if ((2 < *DAT_8c01d2f8) &&
     (iVar2 = (*(code *)PTR_FUN_8c01d300)(*DAT_8c01d2fc,ar5,ar6,ar7), uVar1 = 0, iVar2 != 0)) {
    if (iVar2 == 1) {
      (*(code *)PTR_FUN_8c01d304)(*DAT_8c01d2fc,ar5,ar6,ar7);
    }
    else if (iVar2 == 3) {
      return 3;
    }
    iVar2 = *DAT_8c01d308;
    uVar1 = 9;
    if ((iVar2 < 10) && (uVar1 = 1, 0 < iVar2)) {
                    /* WARNING: Could not recover jumptable at 0x8c01d1d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&switchD_8c01d1d6::switchdataD_8c01d1dc)[iVar2 + -1])();
      return uVar1;
    }
  }
  return uVar1;
}



/* FUN_8c01d338 @ 8c01d338 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01d338(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  switch(*(undefined4 *)(DAT_8c01d3d8 + *(int *)(DAT_8c01d3d4 + ar4) * 0x50 + ar4)) {
  case 0:
    uVar1 = (*(code *)PTR_FUN_8c01d3dc)(ar4,ar5,ar6,ar7);
    break;
  case 1:
    uVar1 = (*(code *)PTR_FUN_8c01d3e0)(ar4,ar5,ar6,ar7);
    break;
  case 2:
    uVar1 = (*(code *)PTR_FUN_8c01d3e4)(ar4,ar5,ar6,ar7);
    break;
  case 3:
    uVar1 = (*(code *)PTR_FUN_8c01d3e8)(ar4,ar5,ar6,ar7);
    break;
  case 4:
    uVar1 = (*(code *)PTR_FUN_8c01d3ec)(ar4,ar5,ar6,ar7);
    break;
  case 5:
    uVar1 = (*(code *)PTR_s_SPEECH_01d92e_8c01d3f0)(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c01d3f4 @ 8c01d3f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01d3f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(DAT_8c01d438 + *(int *)(DAT_8c01d434 + ar4) * 0x50 + ar4);
  *(undefined4 *)(DAT_8c01d43c + *(int *)(DAT_8c01d434 + ar4) * 0x50 + ar4) = 1;
  iVar1 = DAT_8c01d434;
  *(undefined4 *)(DAT_8c01d434 + ar4) = uVar2;
  return iVar1;
}



/* FUN_8c01d440 @ 8c01d440 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01d440(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *DAT_8c01d480;
  if (iVar1 != 2) {
    if ((iVar1 != 3) && (iVar1 != 4)) goto LAB_8c01d472;
    (*(code *)PTR_FUN_8c01d484)(ar4,ar5,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c01d488)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c01d48c)(ar4,ar5,ar6,ar7);
LAB_8c01d472:
  *DAT_8c01d480 = 0;
  return 0;
}



/* FUN_8c01d490 @ 8c01d490 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01d490(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c01d4bc)(*DAT_8c01d4b8,ar5,ar6,ar7);
  if (iVar1 == 2) {
    iVar1 = (*(code *)PTR_FUN_8c01d4c0)(*DAT_8c01d4b8,ar5,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c01d4c4 @ 8c01d4c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c01d4c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a7;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((uVar2 < 0x10 && (*(int *)(DAT_8c01d604 + uVar2 * 0x50 + ar4) != 1))) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < 0x10) {
    if (*(int *)(DAT_8c01d608 + ar4) < 0) {
      *(uint *)(DAT_8c01d608 + ar4) = uVar2;
    }
    else {
      iVar1 = *(int *)(DAT_8c01d608 + ar4);
      while (-1 < *(int *)(DAT_8c01d60c + iVar1 * 0x50 + ar4)) {
        iVar1 = *(int *)(DAT_8c01d60c + iVar1 * 0x50 + ar4);
      }
      *(uint *)(DAT_8c01d60c + iVar1 * 0x50 + ar4) = uVar2;
    }
    a7 = ar7;
    (*(code *)PTR_strcpy_8c01d614)(uVar2 * 0x50 + ar4 + DAT_8c01d610,ar6,ar6,ar7);
    (*(code *)PTR_strcpy_8c01d614)(uVar2 * 0x50 + ar4 + DAT_8c01d618,ar7,ar6,a7);
    *(undefined4 *)(DAT_8c01d61c + uVar2 * 0x50 + ar4) = ar5;
    *(undefined4 *)(DAT_8c01d620 + uVar2 * 0x50 + ar4) = 2;
    *(undefined4 *)(DAT_8c01d60c + uVar2 * 0x50 + ar4) = 0xffffffff;
    *(undefined4 *)(DAT_8c01d604 + uVar2 * 0x50 + ar4) = 0;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* asr_register_strings @ 8c01d624 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 asr_register_strings(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c01d654)(ar4,0,ar5,ar6);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_8c01d658 @ 8c01d658 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01d658(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c01d680)(ar4,1,ar5,ar6);
  return uVar1;
}



/* FUN_8c01d684 @ 8c01d684 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01d684(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*DAT_8c01d6d8 == 4) {
    if (*DAT_8c01d6dc == 1) {
      *ar5 = *DAT_8c01d6e0;
      (*(code *)PTR_strcpy_8c01d6e4)(ar5 + 3,DAT_8c01d6e0 + 3,ar6,ar7);
    }
    else {
      *ar5 = 0;
      *(undefined1 *)(ar5 + 3) = 0;
    }
    *DAT_8c01d6e0 = 0;
    uVar1 = *DAT_8c01d6e8;
    ar5[2] = uVar1;
  }
  else {
    uVar1 = 0;
    *ar5 = 0;
  }
  return uVar1;
}



/* FUN_8c01d6ec @ 8c01d6ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01d6ec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *DAT_8c01d700;
  *DAT_8c01d700 = 0;
  return uVar1;
}



/* FUN_8c01d704 @ 8c01d704 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01d704(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *DAT_8c01d718;
  *DAT_8c01d718 = 0;
  return uVar1;
}



/* FUN_8c01d71c @ 8c01d71c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01d71c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c01d750)
                    (ar4,2,PTR_s_asr16v2_aev200_float_4b_lng_8c01d74c + 0x1c,
                     PTR_s_asr16v2_aev200_float_4b_lng_8c01d74c + 0x1c);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_8c01d754 @ 8c01d754 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01d754(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c01d788)
                    (ar4,4,PTR_s_asr16v2_aev200_float_4b_lng_8c01d784 + 0x1c,
                     PTR_s_asr16v2_aev200_float_4b_lng_8c01d784 + 0x1c);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_8c01d78c @ 8c01d78c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01d78c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(DAT_8c01d7c0 + *(int *)(DAT_8c01d7bc + ar4) * 0x50 + ar4) = 1;
  iVar1 = *DAT_8c01d7c4;
  if (iVar1 == 4) {
    iVar1 = 1;
    *DAT_8c01d7c8 = 1;
  }
  return iVar1;
}



/* FUN_8c01d7cc @ 8c01d7cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01d7cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(DAT_8c01d844 + *(int *)(DAT_8c01d840 + ar4) * 0x50 + ar4) = 1;
  iVar1 = *DAT_8c01d848;
  if ((iVar1 == 4) && (iVar1 = *DAT_8c01d84c, iVar1 == 0)) {
    if (*DAT_8c01d850 != 0) {
      (*(code *)PTR_FUN_8c01d854)(*DAT_8c01d850,ar5,ar6,ar7);
      *DAT_8c01d850 = 0;
      *DAT_8c01d858 = 0;
    }
    (*(code *)PTR_FUN_8c01d860)(*DAT_8c01d85c,DAT_8c01d850,DAT_8c01d858,ar7);
    *DAT_8c01d864 = 0;
    iVar1 = 1;
    *DAT_8c01d84c = 1;
  }
  return iVar1;
}



/* FUN_8c01d868 @ 8c01d868 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01d868(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c01d89c)
                    (ar4,3,PTR_s_asr16v2_aev200_float_4b_lng_8c01d898 + 0x1c,
                     PTR_s_asr16v2_aev200_float_4b_lng_8c01d898 + 0x1c);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_8c01d8a0 @ 8c01d8a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01d8a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c01d8d4)
                    (ar4,5,PTR_s_asr16v2_aev200_float_4b_lng_8c01d8d0 + 0x1c,
                     PTR_s_asr16v2_aev200_float_4b_lng_8c01d8d0 + 0x1c);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_8c01d8d8 @ 8c01d8d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01d8d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(DAT_8c01d91c + *(int *)(DAT_8c01d918 + ar4) * 0x50 + ar4) = 1;
  *DAT_8c01d920 = 0;
  *DAT_8c01d924 = 0;
  uVar1 = (*(code *)PTR_FUN_8c01d928)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* s_SPEECH_01d92e @ 8c01d92c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_SPEECH_01d92e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(DAT_8c01d974 + *(int *)(DAT_8c01d970 + ar4) * 0x50 + ar4) = 1;
  (*(code *)PTR_FUN_8c01d978)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_asr_register_strings_8c01d980)
                    (ar4,PTR_s_asr16v2_aev200_float_4b_lng_8c01d97c + 0x1d,
                     PTR_s_asr16v2_aev200_float_4b_lng_8c01d97c + 0x26,ar7);
  return uVar1;
}



/* FUN_8c01d984 @ 8c01d984 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01d984(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *DAT_8c01d9a0;
  if (iVar1 == 4) {
    iVar1 = (*(code *)PTR_FUN_8c01d9a8)(*DAT_8c01d9a4,ar5,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c01d9ac @ 8c01d9ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01d9ac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *DAT_8c01d9d0;
  if ((iVar1 == 4) && (iVar1 = 0, *DAT_8c01d9d4 != 0)) {
    iVar1 = (*(code *)PTR_FUN_8c01d9dc)(*DAT_8c01d9d8,3,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c01d9e0 @ 8c01d9e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01d9e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*DAT_8c01da3c == 2) {
    iVar1 = *DAT_8c01da40;
    if (iVar1 == 1) {
      *DAT_8c01da44 = 0;
      DAT_8c01da44[1] = 0;
      *(undefined1 *)(DAT_8c01da44 + 3) = 0;
      iVar1 = (*(code *)PTR_FUN_8c01da4c)(*DAT_8c01da48,ar5,ar6,ar7);
    }
  }
  else if (*DAT_8c01da50 == 0) {
    *DAT_8c01da58 = 0;
    iVar1 = 0;
    *DAT_8c01da5c = 0;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c01da54)(*DAT_8c01da48,1,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c01da60 @ 8c01da60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01da60(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*DAT_8c01da80 == 4) {
    (*(code *)PTR_FUN_8c01da88)(*DAT_8c01da84,ar5,ar6,ar7);
  }
  *DAT_8c01da8c = 0;
  return 0;
}



/* FUN_8c01da90 @ 8c01da90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01da90(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piStack_98;
  undefined1 auStack_94 [132];
  
  iVar2 = DAT_8c01dc58;
  if (*DAT_8c01dc50 == 4) {
    (*(code *)PTR_strcpy_8c01dc60)
              (auStack_94,*(int *)(DAT_8c01dc54 + ar4) * 0x50 + ar4 + DAT_8c01dc5c,ar6,ar7);
    (*(code *)PTR_FUN_8c01dc68)
              (auStack_94,PTR_s_asr16v2_aev200_float_4b_lng_8c01dc64 + 0x2d,ar6,ar7);
    iVar1 = (*(code *)PTR_FUN_8c01dc74)
                      (DAT_8c01dc70,auStack_94,
                       *(int *)(DAT_8c01dc54 + ar4) * 0x50 + ar4 + DAT_8c01dc6c,&piStack_98);
    iVar2 = DAT_8c01dc58;
    if (iVar1 == 0) {
      *(undefined4 *)(DAT_8c01dc58 + *(int *)(DAT_8c01dc54 + ar4) * 0x50 + ar4) = 0;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(DAT_8c01dc58 + *(int *)(DAT_8c01dc54 + ar4) * 0x50 + ar4) = 2;
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c01dc78)
                        (ar4,*(int *)(DAT_8c01dc54 + ar4) * 0x50 + ar4 + DAT_8c01dc5c,
                         *(int *)(DAT_8c01dc54 + ar4) * 0x50 + ar4 + DAT_8c01dc6c,
                         (int)piStack_98 + *piStack_98 + 0x20);
      iVar2 = DAT_8c01dc58;
      if (iVar1 == 1) {
        *(undefined4 *)(DAT_8c01dc58 + *(int *)(DAT_8c01dc54 + ar4) * 0x50 + ar4) = 1;
      }
      else {
        (*(code *)PTR_FUN_8c01dc7c)
                  (DAT_8c01dc70,auStack_94,*(int *)(DAT_8c01dc54 + ar4) * 0x50 + ar4 + DAT_8c01dc6c,
                   10);
        iVar2 = DAT_8c01dc58;
        *(undefined4 *)(DAT_8c01dc58 + *(int *)(DAT_8c01dc54 + ar4) * 0x50 + ar4) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(DAT_8c01dc58 + *(int *)(DAT_8c01dc54 + ar4) * 0x50 + ar4) = 0;
  }
  return iVar2;
}



/* FUN_8c01dc80 @ 8c01dc80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01dc80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  undefined4 uVar2;
  undefined4 *a6_00;
  undefined4 a7;
  int *a7_00;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  
  uVar2 = ar5;
  a6 = ar6;
  a7 = ar7;
  (*(code *)PTR_FUN_8c01dd98)(ar4,ar5,ar6,ar7);
  *DAT_8c01dd9c = 0;
  if (*DAT_8c01dda0 != 0) {
    (*(code *)PTR_FUN_8c01dda4)(ar4,uVar2,a6,a7);
    (*(code *)PTR_asr_init_from_model_8c01dda8)(ar4,uVar2,a6,a7);
  }
  uVar2 = 1;
  a7_00 = DAT_8c01dda0;
  (*(code *)PTR_FUN_8c01ddb0)(*DAT_8c01ddac,ar7,1,DAT_8c01dda0);
  *(undefined4 *)(DAT_8c01ddb4 + ar4) = ar7;
  *(undefined4 *)(DAT_8c01ddb8 + ar4) = in_stack_00000000;
  *(undefined4 *)(DAT_8c01ddbc + ar4) = in_stack_00000004;
  (*(code *)PTR_strcpy_8c01ddc4)(ar4 + DAT_8c01ddc0,ar5,uVar2,a7_00);
  (*(code *)PTR_strcpy_8c01ddc4)(ar4 + DAT_8c01ddc8,ar6,uVar2,a7_00);
  iVar1 = (*(code *)PTR_FUN_8c01ddcc)(ar4,ar6,uVar2,a7_00);
  if (iVar1 == 1) {
    a6_00 = DAT_8c01ddd0;
    iVar1 = (*(code *)PTR_FUN_8c01ddd4)
                      (*DAT_8c01ddac,*(undefined4 *)(DAT_8c01ddbc + ar4),DAT_8c01ddd0,a7_00);
    if ((iVar1 == 0) && (*DAT_8c01ddd8 != 0)) {
      (*(code *)PTR_FUN_8c01dde8)
                (*DAT_8c01dda0,*DAT_8c01ddd0,PTR_s_asr16v2_aev200_float_4b_lng_8c01dde4 + 0x32,
                 *DAT_8c01dde0);
      a7_00 = (int *)*DAT_8c01ddd8;
      a6_00 = (undefined4 *)(PTR_s_asr16v2_aev200_float_4b_lng_8c01dde4 + 0x32);
      (*(code *)PTR_FUN_8c01ddf0)(*DAT_8c01dda0,*DAT_8c01ddd0,a6_00,a7_00);
    }
    iVar1 = (*(code *)PTR_FUN_8c01ddf8)(*DAT_8c01ddf4,*DAT_8c01dda0,a6_00,a7_00);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c01ddfc @ 8c01ddfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ddfc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *DAT_8c01de8c = *(int *)(*(int *)(DAT_8c01de90 + ar4) + 4);
  if (*DAT_8c01de94 != 0) {
    (*(code *)PTR_FUN_8c01de98)(*DAT_8c01de94,ar5,ar6,ar7);
  }
  iVar1 = (*(code *)PTR_malloc_thunk_8c01de9c)(*DAT_8c01de8c << 2,ar5,ar6,ar7);
  *DAT_8c01de94 = iVar1;
  if (*DAT_8c01de94 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_8c01de90 + ar4) + 8;
    for (iVar4 = 0; iVar4 < *DAT_8c01de8c; iVar4 = iVar4 + 1) {
      *(int *)(iVar4 * 4 + *DAT_8c01de94) = iVar1;
      iVar3 = (*(code *)PTR_log_message_8c01dea0)(iVar1,ar5,ar6,ar7);
      iVar1 = iVar1 + iVar3 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c01dea4 @ 8c01dea4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01dea4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a5;
  int a6;
  undefined4 a7;
  undefined1 auStack_88 [132];
  
  (*(code *)PTR_strcpy_8c01df94)
            (auStack_88,*(int *)(DAT_8c01df8c + ar4) * 0x50 + ar4 + DAT_8c01df90,ar6,ar7);
  (*(code *)PTR_FUN_8c01df9c)(auStack_88,PTR_s_asr16v2_aev200_float_4b_lng_8c01df98 + 0x2d,ar6,ar7);
  a7 = 10;
  a6 = *(int *)(DAT_8c01df8c + ar4) * 0x50 + ar4 + DAT_8c01dfa0;
  (*(code *)PTR_FUN_8c01dfa8)(DAT_8c01dfa4,auStack_88,a6,10);
  *(undefined4 *)(DAT_8c01dfac + *(int *)(DAT_8c01df8c + ar4) * 0x50 + ar4) = 1;
  iVar1 = (*(code *)PTR_FUN_8c01dfb4)
                    (*(int *)(DAT_8c01df8c + ar4) * 0x50 + ar4 + DAT_8c01df90,ar4 + DAT_8c01dfb0,a6,
                     a7);
  if (iVar1 == 0) {
    a5 = ar4 + DAT_8c01dfb8;
    iVar1 = (*(code *)PTR_FUN_8c01dfb4)
                      (*(int *)(DAT_8c01df8c + ar4) * 0x50 + ar4 + DAT_8c01dfa0,a5,a6,a7);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_FUN_8c01dfbc)(ar4,a5,a6,a7);
    }
  }
  return iVar1;
}



/* FUN_8c01dfc0 @ 8c01dfc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01dfc0(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  
  do {
    bVar1 = *ar4;
    if (bVar1 != *ar5) {
      return (uint)bVar1 - (uint)*ar5;
    }
    ar5 = ar5 + 1;
    ar4 = ar4 + 1;
  } while (bVar1 != 0);
  return 0;
}



/* FUN_8c01e028 @ 8c01e028 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01e028(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar5 = 0;
  for (iVar1 = 0; iVar1 < DAT_8c01e048; iVar1 = iVar1 + 1) {
    *(undefined1 *)((int)ar5 + iVar1 + 4) = 0;
  }
  return DAT_8c01e048;
}



/* FUN_8c01e04c @ 8c01e04c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01e04c(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  *ar5 = *DAT_8c01e094;
  for (iVar2 = 0; iVar2 < DAT_8c01e098; iVar2 = iVar2 + 1) {
    *(undefined1 *)((int)ar5 + iVar2 + 4) = 0;
  }
  uVar1 = 0;
  if (*DAT_8c01e094 != 0) {
    uVar1 = (*(code *)PTR_memmove_8c01e0a0)(ar5 + 1,*DAT_8c01e09c,*DAT_8c01e094,ar7);
  }
  return uVar1;
}



/* FUN_8c01e0a4 @ 8c01e0a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01e0a4(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *a5;
  
  a5 = ar5;
  if (*DAT_8c01e110 != 0) {
    (*(code *)PTR_FUN_8c01e114)(*DAT_8c01e110,ar5,ar6,ar7);
  }
  *DAT_8c01e110 = 0;
  *DAT_8c01e118 = 0;
  iVar1 = DAT_8c01e11c;
  if (*ar5 < DAT_8c01e11c) {
    *DAT_8c01e118 = *ar5;
    iVar1 = 0;
    if (*DAT_8c01e118 != 0) {
      iVar1 = (*(code *)PTR_malloc_thunk_8c01e120)(*DAT_8c01e118,a5,ar6,ar7);
      *DAT_8c01e110 = iVar1;
      iVar1 = (*(code *)PTR_memmove_8c01e124)(*DAT_8c01e110,ar5 + 1,*DAT_8c01e118,ar7);
    }
  }
  return iVar1;
}



/* FUN_8c01e128 @ 8c01e128 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01e128(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_malloc_thunk_8c01e148)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c01e14c @ 8c01e14c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01e14c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c01e164)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c01e168 @ 8c01e168 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01e168(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  undefined4 a5;
  
  a5 = ar5;
  a4 = (*(code *)PTR_malloc_thunk_8c01e1ac)(ar5,ar5,ar6,ar7);
  if (a4 != 0) {
    a5 = ar4;
    (*(code *)PTR_memmove_8c01e1b0)(a4,ar4,ar5,ar7);
    ar6 = ar5;
  }
  (*(code *)PTR_FUN_8c01e1b4)(ar4,a5,ar6,ar7);
  return a4;
}



/* FUN_8c01e1e8 @ 8c01e1e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01e1e8(int *ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  *DAT_8c01e41c = 0;
  *DAT_8c01e420 = 0;
  if ((ar4 != (int *)0x0) && (*DAT_8c01e424 != 0)) {
    if (DAT_8c01e428[1] == 2) {
      *DAT_8c01e42c = 0;
      (*(code *)PTR_FUN_8c01e434)(*DAT_8c01e430,*DAT_8c01e42c,ar6,ar7);
      *DAT_8c01e428 = 2;
      (*(code *)PTR_strcpy_8c01e43c)
                (DAT_8c01e428 + 3,PTR_s_asr16v2_aev200_float_4b_lng_8c01e438 + 0x37,ar6,ar7);
    }
    else if (DAT_8c01e428[1] == 3) {
      *DAT_8c01e42c = *DAT_8c01e42c + 2;
      if (0x10 < *DAT_8c01e42c) {
        *DAT_8c01e42c = 0x10;
      }
      (*(code *)PTR_FUN_8c01e434)(*DAT_8c01e430,*DAT_8c01e42c,ar6,ar7);
      *DAT_8c01e428 = 3;
      (*(code *)PTR_strcpy_8c01e43c)
                (DAT_8c01e428 + 3,PTR_s_asr16v2_aev200_float_4b_lng_8c01e438 + 0x3b,ar6,ar7);
    }
    else if (*ar4 == 0) {
      *DAT_8c01e42c = 0x10;
      (*(code *)PTR_FUN_8c01e434)(*DAT_8c01e430,*DAT_8c01e42c,ar6,ar7);
    }
    else if (*(int *)(ar4[1] + 4) < DAT_8c01e440) {
      *DAT_8c01e428 = 1;
      (*(code *)PTR_strcpy_8c01e43c)
                (DAT_8c01e428 + 3,PTR_s_asr16v2_aev200_float_4b_lng_8c01e438 + 0x3b,ar6,ar7);
    }
    else if (*(int *)(ar4[1] + 4) < *DAT_8c01e444) {
      *DAT_8c01e444 = *DAT_8c01e444 - DAT_8c01e448;
      if (*DAT_8c01e444 < DAT_8c01e44c) {
        *DAT_8c01e444 = DAT_8c01e44c;
      }
      *DAT_8c01e428 = 1;
      (*(code *)PTR_strcpy_8c01e43c)
                (DAT_8c01e428 + 3,PTR_s_asr16v2_aev200_float_4b_lng_8c01e438 + 0x3b,ar6,ar7);
    }
    else {
      if ((*DAT_8c01e444 + DAT_8c01e440 < *(int *)(ar4[1] + 4)) &&
         (*DAT_8c01e444 = *DAT_8c01e444 + DAT_8c01e448, DAT_8c01e450 < *DAT_8c01e444)) {
        *DAT_8c01e444 = DAT_8c01e450;
      }
      *DAT_8c01e428 = 1;
      *(undefined1 *)(DAT_8c01e428 + 3) = 0;
      for (iVar1 = 0; iVar1 < *(int *)ar4[1]; iVar1 = iVar1 + 1) {
        uVar2 = *(uint *)(*(int *)(*(int *)(ar4[1] + 0x14) + iVar1 * 0x10 + 0xc) + 8);
        if (((*DAT_8c01e454 != 0) && (uVar2 < *DAT_8c01e458)) &&
           (**(char **)(uVar2 * 4 + *DAT_8c01e454) != '\0')) {
          (*(code *)PTR_FUN_8c01e45c)
                    (DAT_8c01e428 + 3,*(undefined4 *)(uVar2 * 4 + *DAT_8c01e454),ar6,ar7);
          ar5 = PTR_s_asr16v2_aev200_float_4b_lng_8c01e438 + 0x3f;
          (*(code *)PTR_FUN_8c01e45c)(DAT_8c01e428 + 3,ar5,ar6,ar7);
        }
      }
      if (*(char *)(DAT_8c01e428 + 3) == '\0') {
        ar5 = PTR_s_asr16v2_aev200_float_4b_lng_8c01e438 + 0x41;
        (*(code *)PTR_strcpy_8c01e43c)(DAT_8c01e428 + 3,ar5,ar6,ar7);
        *DAT_8c01e420 = 1;
      }
      iVar1 = (*(code *)PTR_log_message_8c01e460)(DAT_8c01e428 + 3,ar5,ar6,ar7);
      if ((0 < iVar1) && (*(char *)((int)DAT_8c01e428 + iVar1 + 0xb) == ' ')) {
        *(undefined1 *)((int)DAT_8c01e428 + iVar1 + 0xb) = 0;
      }
    }
  }
  return 0;
}



/* FUN_8c01e4dc @ 8c01e4dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c01e4dc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = 0;
  for (iVar1 = 0; iVar1 < DAT_8c01e500; iVar1 = iVar1 + 1) {
    *(undefined1 *)((int)ar4 + iVar1 + 4) = 0;
  }
  return ar4;
}



/* FUN_8c01e504 @ 8c01e504 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01e504(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c01e544)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c01e54c)(ar4 + DAT_8c01e548,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c01e550 + ar4) = 1;
  *(undefined4 *)(DAT_8c01e554 + ar4) = *(undefined4 *)(DAT_8c01e550 + ar4);
  *(undefined4 *)(DAT_8c01e558 + ar4) = 0;
  *(undefined4 *)(DAT_8c01e55c + ar4) = 1;
  return ar4;
}



/* FUN_8c01e560 @ 8c01e560 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01e560(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_free_if_nonnull_wrap_01cb24_8c01e5a8)(ar4 + DAT_8c01e5a4,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_01a384_8c01e5ac)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c01e5b0)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c01e5b4 @ 8c01e5b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01e5b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_input_device_select_and_reset_8c01e5d8)(ar4,ar5,ar6,ar7);
  return *(undefined4 *)(DAT_8c01e5dc + ar4);
}



/* input_device_select_and_reset @ 8c01e5e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 input_device_select_and_reset(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 auStack_24 [4];
  undefined4 uStack_14;
  
  auStack_24[0] = *(undefined4 *)PTR_DAT_8c01e754;
  auStack_24[1] = *(undefined4 *)(PTR_DAT_8c01e754 + 4);
  auStack_24[2] = *(undefined4 *)(PTR_DAT_8c01e754 + 8);
  auStack_24[3] = *(undefined4 *)(PTR_DAT_8c01e754 + 0xc);
  uStack_14 = *(undefined4 *)(PTR_DAT_8c01e754 + 0x10);
  if (*(int *)(DAT_8c01e758 + ar4) == 0) {
    return *(undefined4 *)(DAT_8c01e758 + ar4);
  }
  if (*(int *)(DAT_8c01e758 + ar4) == 1) {
    *(undefined4 *)(DAT_8c01e75c + ar4) = *(undefined4 *)PTR_DAT_8c01e754;
    *(undefined4 *)(DAT_8c01e760 + ar4) = 0;
    *(undefined4 *)(DAT_8c01e764 + ar4) = 0;
    *(undefined4 *)(DAT_8c01e768 + ar4) = 0;
    *(undefined4 *)(DAT_8c01e76c + ar4) = 0;
    *(undefined4 *)(DAT_8c01e770 + ar4) = 0;
    *(undefined4 *)(DAT_8c01e774 + ar4) = 0;
    *(undefined4 *)(DAT_8c01e778 + ar4) = 0;
    if (ar5 == 0) {
      for (iVar3 = 0; iVar3 < 1; iVar3 = iVar3 + 1) {
        iVar1 = (*(code *)PTR_FUN_8c01e77c)(auStack_24[iVar3],ar5,ar6,ar7);
        iVar2 = (*(code *)PTR_FUN_8c01e780)(auStack_24[iVar3],ar5,ar6,ar7);
        if ((iVar2 == 0) && ((**(uint **)(iVar1 + 0x30) & 1) != 0)) break;
      }
      iVar1 = 0;
      if (iVar3 != 0) {
        *(undefined4 *)(DAT_8c01e75c + ar4) = auStack_24[0];
        return 1;
      }
    }
    else {
      for (iVar1 = 3; -1 < iVar1; iVar1 = iVar1 + -1) {
        iVar3 = (*(code *)PTR_FUN_8c01e77c)(auStack_24[iVar1],ar5,ar6,ar7);
        iVar2 = (*(code *)PTR_FUN_8c01e780)(auStack_24[iVar1],ar5,ar6,ar7);
        if ((iVar2 == 0) && ((**(uint **)(iVar3 + 0x30) & 1) != 0)) break;
      }
      if (iVar1 != 3) {
        *(undefined4 *)(DAT_8c01e75c + ar4) = auStack_24[3];
        return 1;
      }
    }
    *(undefined4 *)(DAT_8c01e75c + ar4) = auStack_24[iVar1];
    *(undefined4 *)(DAT_8c01e758 + ar4) = 5;
  }
  *(undefined2 *)(DAT_8c01e784 + ar4) = 0;
  *(undefined2 *)(DAT_8c01e788 + ar4) = 0;
  (*(code *)PTR_input_update_state_gate_8c01e78c)(ar4,ar5,ar6,ar7);
  return *(undefined4 *)(DAT_8c01e758 + ar4);
}



/* input_update_state_gate @ 8c01e790 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int input_update_state_gate(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_8c01e7c4;
  if (*(int *)(DAT_8c01e7c0 + ar4) == 0) {
    iVar2 = 1;
    if (*(int *)(DAT_8c01e7c4 + ar4) != 1) {
      *(undefined4 *)(DAT_8c01e7c4 + ar4) = 0;
      iVar2 = iVar1;
    }
  }
  else {
    iVar2 = (*(code *)PTR_input_peripheral_state_machine_8c01e7c8)(ar4,ar5,ar6,ar7);
  }
  return iVar2;
}



/* input_peripheral_state_machine @ 8c01e7cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * input_peripheral_state_machine(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_8c01e938 + ar4);
  if ((iVar3 < 6) && (0 < iVar3)) {
    puVar2 = (&switchD_8c01e7f6::switchdataD_8c01e7fc)[iVar3 + -1];
    switch(iVar3) {
    case 1:
      break;
    default:
      iVar3 = (*(code *)PTR_FUN_8c01e948)(ar4,*(undefined4 *)(DAT_8c01e944 + ar4),ar6,ar7);
      puVar2 = (undefined *)(uint)(iVar3 == 1);
      iVar3 = (*(code *)PTR_FUN_8c01e950)
                        (ar4 + DAT_8c01e93c,*(undefined4 *)(DAT_8c01e944 + ar4),ar6,ar7);
      puVar1 = DAT_8c01e938;
      if (iVar3 == 1) {
        puVar2 = (undefined *)((uint)puVar2 | 2);
      }
      if (puVar2 == (undefined *)0x0) {
        *(undefined4 *)(DAT_8c01e938 + ar4) = 5;
        puVar2 = puVar1;
      }
      else if (puVar2 == (undefined *)0x1) {
        *(undefined4 *)(DAT_8c01e938 + ar4) = 4;
        puVar2 = puVar1;
      }
      else if (puVar2 == (undefined *)0x2) {
        *(undefined4 *)(DAT_8c01e938 + ar4) = 3;
        puVar2 = puVar1;
      }
      else if (puVar2 == (undefined *)0x3) {
        *(undefined4 *)(DAT_8c01e938 + ar4) = 0;
        puVar2 = puVar1;
      }
      break;
    case 3:
      iVar3 = (*(code *)PTR_FUN_8c01e940)(ar4 + DAT_8c01e93c,ar5,ar6,ar7);
      if (iVar3 == 0) {
        *(undefined4 *)(DAT_8c01e938 + ar4) = 5;
      }
      puVar2 = (undefined *)
               (*(code *)PTR_FUN_8c01e948)(ar4,*(undefined4 *)(DAT_8c01e944 + ar4),ar6,ar7);
      puVar1 = DAT_8c01e938;
      if (puVar2 == (undefined *)0x1) {
        *(undefined4 *)(DAT_8c01e938 + ar4) = 0;
        puVar2 = puVar1;
      }
      break;
    case 4:
      iVar3 = (*(code *)PTR_FUN_8c01e94c)(ar4,ar5,ar6,ar7);
      if (iVar3 == 0) {
        *(undefined4 *)(DAT_8c01e938 + ar4) = 5;
      }
      puVar2 = (undefined *)
               (*(code *)PTR_FUN_8c01e950)
                         (ar4 + DAT_8c01e93c,*(undefined4 *)(DAT_8c01e944 + ar4),ar6,ar7);
      puVar1 = DAT_8c01e938;
      if (puVar2 == (undefined *)0x1) {
        *(undefined4 *)(DAT_8c01e938 + ar4) = 0;
        puVar2 = puVar1;
      }
    }
  }
  else {
    iVar3 = (*(code *)PTR_FUN_8c01e94c)(ar4,ar5,ar6,ar7);
    if (iVar3 == 0) {
      *(undefined4 *)(DAT_8c01e938 + ar4) = 3;
    }
    puVar2 = (undefined *)(*(code *)PTR_FUN_8c01e940)(ar4 + DAT_8c01e93c,ar5,ar6,ar7);
    puVar1 = DAT_8c01e938;
    if (puVar2 == (undefined *)0x0) {
      *(undefined4 *)(DAT_8c01e938 + ar4) = 4;
      puVar2 = puVar1;
    }
  }
  return puVar2;
}



/* input_poll_device_state @ 8c01e954 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 input_poll_device_state(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c01eb14)(*(undefined4 *)(DAT_8c01eb10 + ar4),ar5,ar6,ar7);
  if ((**(uint **)(iVar1 + 0x30) & 1) == 0) {
    *(undefined4 *)(DAT_8c01eb40 + ar4) = 10;
    if (*(int *)(DAT_8c01eb3c + ar4) < 1) {
      *(undefined4 *)(DAT_8c01eb3c + ar4) = 0;
      *(undefined4 *)(DAT_8c01eb44 + ar4) = 1;
      (*(code *)PTR_input_update_state_gate_8c01eb48)(ar4,ar5,ar6,ar7);
      *(undefined4 *)(DAT_8c01eb4c + ar4) = *(undefined4 *)(DAT_8c01eb44 + ar4);
      uVar2 = *(undefined4 *)(DAT_8c01eb44 + ar4);
    }
    else {
      *(int *)(DAT_8c01eb3c + ar4) = *(int *)(DAT_8c01eb3c + ar4) + -1;
      *(undefined4 *)(DAT_8c01eb44 + ar4) = 2;
      uVar2 = *(undefined4 *)(DAT_8c01eb44 + ar4);
    }
  }
  else {
    *(undefined4 *)(DAT_8c01eb18 + ar4) = 0;
    *(undefined4 *)(DAT_8c01eb1c + ar4) = *(undefined4 *)(iVar1 + 8);
    *(uint *)(DAT_8c01eb18 + ar4) = *(uint *)(DAT_8c01eb18 + ar4) | *(uint *)(DAT_8c01eb1c + ar4);
    *(undefined4 *)(DAT_8c01eb20 + ar4) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(DAT_8c01eb24 + ar4) = *(undefined4 *)(iVar1 + 0x10);
    *(uint *)(DAT_8c01eb18 + ar4) = *(uint *)(DAT_8c01eb18 + ar4) | *(uint *)(DAT_8c01eb24 + ar4);
    *(undefined4 *)(DAT_8c01eb28 + ar4) = *(undefined4 *)(iVar1 + 0x14);
    *(uint *)(DAT_8c01eb18 + ar4) = *(uint *)(DAT_8c01eb18 + ar4) | *(uint *)(DAT_8c01eb28 + ar4);
    *(int *)(DAT_8c01eb2c + ar4) = (int)*(short *)(iVar1 + 0x1c);
    *(uint *)(DAT_8c01eb18 + ar4) = *(uint *)(DAT_8c01eb18 + ar4) | *(uint *)(DAT_8c01eb2c + ar4);
    *(int *)(DAT_8c01eb30 + ar4) = (int)*(short *)(iVar1 + 0x1e);
    *(uint *)(DAT_8c01eb18 + ar4) = *(uint *)(DAT_8c01eb18 + ar4) | *(uint *)(DAT_8c01eb30 + ar4);
    *(undefined2 *)(DAT_8c01eb34 + ar4) = *(undefined2 *)(iVar1 + 0x1a);
    *(undefined2 *)(DAT_8c01eb38 + ar4) = *(undefined2 *)(iVar1 + 0x18);
    *(undefined4 *)(DAT_8c01eb3c + ar4) = 0x5a;
    if (*(int *)(DAT_8c01eb40 + ar4) < 1) {
      *(undefined4 *)(DAT_8c01eb40 + ar4) = 0;
      (*(code *)PTR_input_update_state_gate_8c01eb48)(ar4,ar5,ar6,ar7);
      if (((*(int *)(DAT_8c01eb4c + ar4) == 0) || (*(int *)(DAT_8c01eb4c + ar4) == 4)) &&
         (*(int *)(DAT_8c01eb44 + ar4) == 5)) {
        *(undefined4 *)(DAT_8c01eb40 + ar4) = 10;
        uVar2 = 2;
      }
      else {
        *(undefined4 *)(DAT_8c01eb4c + ar4) = *(undefined4 *)(DAT_8c01eb44 + ar4);
        uVar2 = *(undefined4 *)(DAT_8c01eb44 + ar4);
      }
    }
    else {
      (*(code *)PTR_input_update_state_gate_8c01eb48)(ar4,ar5,ar6,ar7);
      *(int *)(DAT_8c01eb40 + ar4) = *(int *)(DAT_8c01eb40 + ar4) + -1;
      *(undefined4 *)(DAT_8c01eb44 + ar4) = 2;
      *(undefined4 *)(DAT_8c01eb4c + ar4) = *(undefined4 *)(DAT_8c01eb44 + ar4);
      uVar2 = 2;
    }
  }
  return uVar2;
}



/* FUN_8c01eb50 @ 8c01eb50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01eb50(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01eb8c + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01eb90)(ar4,8,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01eb94 @ 8c01eb94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01eb94(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01ebd0 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01ebd4)(ar4,8,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* input_is_mask_set_20000_01ebd8 @ 8c01ebd8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 input_is_mask_set_20000_01ebd8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01ec14 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01ec1c)(ar4,DAT_8c01ec18,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01ec20 @ 8c01ec20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ec20(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01ec5c + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01ec64)(ar4,DAT_8c01ec60,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* input_is_mask_set_10000_01ec68 @ 8c01ec68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 input_is_mask_set_10000_01ec68(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01eca4 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01ecac)(ar4,DAT_8c01eca8,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01ecb0 @ 8c01ecb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ecb0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01ecec + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01ecf4)(ar4,DAT_8c01ecf0,1,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01ecf8 @ 8c01ecf8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ecf8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01ed34 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01ed3c)(ar4,DAT_8c01ed38,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01ed40 @ 8c01ed40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ed40(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01ed7c + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01ed84)(ar4,DAT_8c01ed80,3,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01ed88 @ 8c01ed88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ed88(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01edc4 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01edc8)(ar4,4,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01edcc @ 8c01edcc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01edcc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01ee08 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01ee0c)(ar4,4,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01ee10 @ 8c01ee10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ee10(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01ee4c + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01ee50)(ar4,4,3,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01ee54 @ 8c01ee54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ee54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01ee90 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01ee94)(ar4,2,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01ee98 @ 8c01ee98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ee98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01eed4 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01eed8)(ar4,2,1,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01eedc @ 8c01eedc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01eedc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01ef18 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01ef1c)(ar4,2,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* input_is_mask_set_400_01ef20 @ 8c01ef20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 input_is_mask_set_400_01ef20(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01ef5c + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01ef64)(ar4,DAT_8c01ef60,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01ef68 @ 8c01ef68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01ef68(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01efa4 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01efac)(ar4,DAT_8c01efa8,1,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01efb0 @ 8c01efb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01efb0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01efec + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01eff4)(ar4,DAT_8c01eff0,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* input_is_mask_set_200_01eff8 @ 8c01eff8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 input_is_mask_set_200_01eff8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01f034 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01f03c)(ar4,DAT_8c01f038,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01f040 @ 8c01f040 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f040(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01f07c + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01f084)(ar4,DAT_8c01f080,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* input_is_mask_set_80_01f088 @ 8c01f088 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 input_is_mask_set_80_01f088(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01f0c4 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01f0cc)(ar4,DAT_8c01f0c8,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01f0d0 @ 8c01f0d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f0d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01f10c + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01f114)(ar4,DAT_8c01f110,1,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01f118 @ 8c01f118 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f118(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01f154 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01f15c)(ar4,DAT_8c01f158,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* input_is_mask_set_40_01f160 @ 8c01f160 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 input_is_mask_set_40_01f160(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01f19c + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01f1a0)(ar4,0x40,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01f1a4 @ 8c01f1a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f1a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01f1e0 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01f1e4)(ar4,0x40,1,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01f1e8 @ 8c01f1e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f1e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01f224 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01f228)(ar4,0x40,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* input_is_mask_set_20_01f22c @ 8c01f22c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 input_is_mask_set_20_01f22c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01f268 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01f26c)(ar4,0x20,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01f270 @ 8c01f270 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f270(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01f2ac + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01f2b0)(ar4,0x20,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* input_is_mask_set_10_01f2b4 @ 8c01f2b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 input_is_mask_set_10_01f2b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01f2f0 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01f2f4)(ar4,0x10,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01f2f8 @ 8c01f2f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f2f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01f334 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01f338)(ar4,0x10,1,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c01f33c @ 8c01f33c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f33c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c01f378 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_input_mask_test_8c01f37c)(ar4,0x10,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* input_get_word_a538 @ 8c01f380 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 input_get_word_a538(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c01f388 + ar4);
}



/* input_get_word_a53c @ 8c01f38c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 input_get_word_a53c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c01f394 + ar4);
}



/* FUN_8c01f398 @ 8c01f398 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f398(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(DAT_8c01f3ac + ar4) == 0) {
    return 0;
  }
  return 1;
}



/* input_mask_test @ 8c01f3b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 input_mask_test(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar6 == 0) {
    uVar1 = (*(code *)PTR_input_mask_test_word_8c01f448)(ar4,ar5,ar4 + DAT_8c01f444,ar7);
  }
  else if (ar6 == 1) {
    uVar1 = (*(code *)PTR_input_mask_test_word_8c01f448)(ar4,ar5,ar4 + DAT_8c01f44c,ar7);
  }
  else if (ar6 == 2) {
    uVar1 = (*(code *)PTR_input_mask_test_word_8c01f448)(ar4,ar5,ar4 + DAT_8c01f450,ar7);
  }
  else if (ar6 == 3) {
    uVar1 = (*(code *)PTR_input_mask_test_word_8c01f448)(ar4,ar5,ar4 + DAT_8c01f454,ar7);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* input_mask_test_word @ 8c01f458 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 input_mask_test_word(undefined4 ar4,uint ar5,uint *ar6,undefined4 ar7)

{
  uint uVar1;
  
  if (DAT_8c01f500 < ar5) {
    if (DAT_8c01f504 < ar5) {
      uVar1 = DAT_8c01f510;
      if (ar5 <= DAT_8c01f50c) {
        uVar1 = DAT_8c01f50c;
      }
    }
    else {
      uVar1 = DAT_8c01f508;
      if (DAT_8c01f504 <= ar5) goto LAB_8c01f4ea;
    }
    if (uVar1 != ar5) {
      return 0xffffffff;
    }
  }
  else if (ar5 < DAT_8c01f500) {
    if (ar5 < 0x11) {
      if (ar5 < 0x10) {
        if (8 < ar5) {
          return 0xffffffff;
        }
        if (ar5 < 2) {
          return 0xffffffff;
        }
        if (((ar5 != 2) && (ar5 != 4)) && (ar5 != 8)) {
          return 0xffffffff;
        }
      }
    }
    else if (ar5 < 0x21) {
      if (ar5 != 0x20) {
        return 0xffffffff;
      }
    }
    else if (ar5 != 0x40) {
      return 0xffffffff;
    }
  }
LAB_8c01f4ea:
  if ((*ar6 & ar5) == 0) {
    return 0;
  }
  return 1;
}



/* get_field_a524_01f514 @ 8c01f514 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_a524_01f514(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c01f51c + ar4);
}



/* FUN_8c01f520 @ 8c01f520 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f520(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4;
}



/* FUN_8c01f528 @ 8c01f528 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01f528(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + DAT_8c01f534;
}



/* get_field_a510_01f538 @ 8c01f538 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_a510_01f538(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c01f540 + ar4);
}



/* FUN_8c01f544 @ 8c01f544 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f544(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c01f568)(ar4 + DAT_8c01f564,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c01f56c @ 8c01f56c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f56c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c01f590)(ar4 + DAT_8c01f58c,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c01f594 @ 8c01f594 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f594(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *DAT_8c01f5c8 = 0;
  iVar1 = (*(code *)PTR_FUN_8c01f5cc)(ar4,ar5,ar6,ar7);
  if ((iVar1 == 6) || (iVar1 == 7)) {
    *DAT_8c01f5c8 = 6;
  }
  return *DAT_8c01f5c8;
}



/* FUN_8c01f5d0 @ 8c01f5d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f5d0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4;
}



/* free_if_nonnull_wrap_01f5d8 @ 8c01f5d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_01f5d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c01f604)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* s_SPEECH_01f60c @ 8c01f608 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_SPEECH_01f60c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *a4;
  undefined *a5;
  int iVar2;
  
  *ar4 = 0;
  ar4[1] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  ar4[10] = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  ar4[0xd] = 0;
  uVar1 = (*(code *)PTR_malloc_thunk_8c01f6c4)(DAT_8c01f6c0,ar5,ar6,ar7);
  ar4[4] = uVar1;
  *DAT_8c01f6c8 = 0;
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    *(undefined1 *)((int)ar4 + iVar2 * DAT_8c01f6cc + 0x38) = 0;
  }
  (*(code *)PTR_FUN_8c01f6d4)(ar4,PTR_s___8c12fbe0_0x2c_8c01f6d0,0,ar7);
  uVar1 = 2;
  (*(code *)PTR_FUN_8c01f6d4)(ar4,PTR_s___8c12fbe0_0x2c_8c01f6d0 + 2,1,ar7);
  a5 = PTR_s___8c12fbe0_0x2c_8c01f6d0 + 9;
  a4 = ar4;
  (*(code *)PTR_FUN_8c01f6d4)(ar4,a5,2,ar7);
  (*(code *)PTR_FUN_8c01f6d8)(a4,a5,uVar1,ar7);
  *(undefined1 *)(ar4 + 7) = 0;
  return 1;
}



/* FUN_8c01f6dc @ 8c01f6dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f6dc(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a6;
  
  uVar1 = 3;
  if (ar6 < 3) {
    a6 = ar6;
    (*(code *)PTR_strcpy_8c01f770)(ar4 + ar6 * DAT_8c01f76c + 0x38,ar5,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c01f778)(ar4 + ar6 * DAT_8c01f76c + 0x5c,DAT_8c01f774,a6,ar7);
    *(undefined4 *)(ar4 + ar6 * DAT_8c01f76c + 0x58) = uVar1;
    uVar1 = (*(code *)PTR_FUN_8c01f77c)
                      (ar4 + ar6 * DAT_8c01f76c + 0x38,
                       *(undefined4 *)(ar4 + ar6 * DAT_8c01f76c + 0x58),a6,ar7);
  }
  return uVar1;
}



/* FUN_8c01f780 @ 8c01f780 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f780(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x20) == 0) {
    return 0;
  }
  return 1;
}



/* FUN_8c01f794 @ 8c01f794 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f794(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(ar4 + 4) == 0) {
    (*(code *)PTR_FUN_8c01f7fc)(ar4,ar5,ar6,ar7);
  }
  else {
    iVar1 = **(int **)(ar4 + 4);
    if (iVar1 == 0xb) {
      (*(code *)PTR_FUN_8c01f804)(ar4,ar5,ar6,ar7);
    }
    else if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0xe)) {
      (*(code *)PTR_FUN_8c01f800)(ar4,ar5,ar6,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c01f808)(ar4,ar5,ar6,ar7);
    }
  }
  uVar2 = (*(code *)PTR_FUN_8c01f80c)(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c01f810 @ 8c01f810 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c01f810(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c01f838)(ar4,ar5,ar6,ar7);
  return (uint)(iVar1 == 0);
}



/* FUN_8c01f83c @ 8c01f83c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f83c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*DAT_8c01f89c == 6) {
    uVar1 = 1;
  }
  else if (*DAT_8c01f89c == 7) {
    uVar1 = 2;
  }
  else {
    *(char *)(ar4 + 0x1c) = *(char *)(ar4 + 0x1c) + '\x01';
    if (((*(int *)(ar4 + 4) == 0) && (*(int *)(ar4 + 0x20) == 0)) && (*(char *)(ar4 + 0x1c) == '\0')
       ) {
      (*(code *)PTR_FUN_8c01f8a0)(ar4,ar5,ar6,ar7);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c01f8a4 @ 8c01f8a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01f8a4(int *ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  int *a5;
  
  iVar1 = (*(code *)PTR_s_E9040832_adxf_is_NULL_ADXF_G_2626b4_8c01f9a8)(*ar4,ar5,ar6,ar7);
  if ((iVar1 == 3) || (iVar1 == 4)) {
    if (*ar4 != 0) {
      (*(code *)PTR_FUN_8c01f9ac)(*ar4,ar5,ar6,ar7);
    }
    *ar4 = 0;
    if (iVar1 == 3) {
      ar7 = ar4[1] + 0x10;
      ar6 = ar4 + 8;
      a5 = *(int **)ar4[1];
      (*(code *)PTR_FUN_8c01f9b0)(ar4,a5,ar6,ar7);
      switch(*(undefined4 *)ar4[1]) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
        a5 = (int *)ar4[1];
        (*(code *)PTR_s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e_8c01f9b4)(ar4,a5,ar6,ar7);
        break;
      case 0xf:
        ar6 = (int *)ar4[1];
        a5 = ar4 + 0xc;
        (*(code *)PTR_FUN_8c01f9b8)(ar4,a5,ar6,ar7);
        break;
      case 0x10:
        ar6 = (int *)ar4[1];
        a5 = ar4 + 0xd;
        (*(code *)PTR_FUN_8c01f9b8)(ar4,a5,ar6,ar7);
      }
    }
    else {
      a5 = (int *)ar4[1];
      (*(code *)PTR_FUN_8c01f9bc)(ar4,a5,ar6,ar7);
    }
    iVar1 = (*(code *)PTR_FUN_8c01f9c0)(ar4,a5,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c01f9c4 @ 8c01f9c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f9c4(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r13;
  
  iVar1 = **(int **)(ar4 + 4);
  if (iVar1 == 0xc) {
    iVar1 = (*(code *)PTR_FUN_8c01fa98)(*(undefined4 *)(*(int *)(ar4 + 4) + 8),ar5,ar6,ar7);
    if (iVar1 == 1) {
      unaff_r13 = 1;
    }
    else {
      unaff_r13 = -1;
    }
  }
  else if (iVar1 == 0xd) {
    iVar1 = (*(code *)PTR_FUN_8c01fa9c)
                      (*(int *)(ar4 + 4) + 0x10,*(undefined4 *)(*(int *)(ar4 + 4) + 8),ar6,ar7);
    if (iVar1 == 1) {
      unaff_r13 = 1;
    }
    else {
      unaff_r13 = -1;
    }
  }
  else if (iVar1 == 0xe) {
    iVar1 = (*(code *)PTR_FUN_8c01faa0)
                      (*(int *)(ar4 + 4) + 0x10,*(undefined4 *)(*(int *)(ar4 + 4) + 8),ar6,ar7);
    if (iVar1 == 1) {
      unaff_r13 = 1;
    }
    else {
      unaff_r13 = -1;
    }
  }
  if (unaff_r13 == 1) {
    ar7 = *(int *)(ar4 + 4) + 0x10;
    (*(code *)PTR_FUN_8c01faa4)(ar4,**(undefined4 **)(ar4 + 4),ar4 + 0x20,ar7);
    ar6 = *(undefined4 *)(ar4 + 4);
    iVar1 = ar4 + 0x2c;
    (*(code *)PTR_FUN_8c01faa8)(ar4,iVar1,ar6,ar7);
  }
  else {
    iVar1 = *(int *)(ar4 + 4);
    (*(code *)PTR_FUN_8c01faac)(ar4,iVar1,ar6,ar7);
  }
  uVar2 = (*(code *)PTR_FUN_8c01fab0)(ar4,iVar1,ar6,ar7);
  return uVar2;
}



/* FUN_8c01fab4 @ 8c01fab4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01fab4(int *ar4,int *ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = ar4[4];
  iVar1 = ar4[5];
  if (iVar1 == 1) {
    ar4[5] = 2;
    ar4[6] = ar4[6] - DAT_8c01fc4c;
    iVar2 = ar4[4];
    iVar1 = (*(code *)PTR_s_E9040816_adxf_is_NULL_ADXF_R_26231a_8c01fc50)(*ar4,1,iVar2,ar7);
    if (iVar1 < 0) {
      (*(code *)PTR_FUN_8c01fc54)(ar4,ar4[1],iVar2,ar7);
      iVar1 = 5;
      ar4[5] = 5;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = (*(code *)PTR_s_E9040832_adxf_is_NULL_ADXF_G_2626b4_8c01fc58)(*ar4,ar5,ar6,ar7);
    if (iVar1 == 3) {
      ar4[5] = 4;
      iVar1 = DAT_8c01fc4c;
      if (DAT_8c01fc4c < *(int *)(iVar2 + 0x20)) {
        ar4[5] = 3;
        uVar3 = *(int *)(iVar2 + 0x20) + DAT_8c01fc5c;
        ar4[6] = ar4[6] - uVar3;
        if (DAT_8c01fc60 < uVar3) {
          (*(code *)PTR_FUN_8c01fc54)(ar4,ar4[1],ar6,ar7);
          ar4[5] = 5;
        }
        iVar2 = ar4[4] + DAT_8c01fc4c;
        iVar1 = (*(code *)PTR_s_E9040816_adxf_is_NULL_ADXF_R_26231a_8c01fc50)
                          (*ar4,uVar3 >> 0xb,iVar2,ar7);
        if (iVar1 < 0) {
          (*(code *)PTR_FUN_8c01fc54)(ar4,ar4[1],iVar2,ar7);
          iVar1 = 5;
          ar4[5] = 5;
        }
      }
    }
    else if (iVar1 == 4) {
      (*(code *)PTR_FUN_8c01fc54)(ar4,ar4[1],ar6,ar7);
      ar4[5] = 5;
      iVar1 = 5;
    }
  }
  else if (iVar1 == 3) {
    iVar1 = (*(code *)PTR_s_E9040832_adxf_is_NULL_ADXF_G_2626b4_8c01fc58)(*ar4,ar5,ar6,ar7);
    if (iVar1 == 3) {
      ar4[5] = 4;
      iVar1 = 4;
    }
    else if (iVar1 == 4) {
      (*(code *)PTR_FUN_8c01fc54)(ar4,ar4[1],ar6,ar7);
      ar4[5] = 5;
      iVar1 = 5;
    }
  }
  else {
    if (iVar1 == 4) {
      (*(code *)PTR_FUN_8c01fc64)(ar4,ar4[1],ar6,ar7);
      if (0 < ar4[6]) {
        ar4[5] = 1;
        return 1;
      }
      ar7 = ar4[1] + 0x10;
      (*(code *)PTR_FUN_8c01fc68)(ar4,*(undefined4 *)ar4[1],ar4 + 8,ar7);
      ar6 = ar4[1];
      ar5 = ar4 + 10;
      (*(code *)PTR_FUN_8c01fc6c)(ar4,ar5,ar6,ar7);
      if (*ar4 != 0) {
        (*(code *)PTR_FUN_8c01fc70)(*ar4,ar5,ar6,ar7);
      }
      *ar4 = 0;
    }
    ar4[5] = 0;
    ar4[6] = 0;
    iVar1 = (*(code *)PTR_FUN_8c01fc74)(ar4,ar5,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c01fc78 @ 8c01fc78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01fc78(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [32];
  undefined1 auStack_bc [40];
  undefined4 auStack_94 [33];
  
  uStack_ec = *ar5;
  uStack_e8 = 0;
  (*(code *)PTR_strcpy_8c01fd00)(auStack_bc,ar5 + 0xc,ar6,ar7);
  for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
    auStack_94[iVar2] = ar5[iVar2 + 0x16];
  }
  iVar2 = *(int *)(ar4 + 0x10);
  (*(code *)PTR_strcpy_8c01fd00)(auStack_dc,iVar2,ar6,ar7);
  uStack_e0 = *(undefined4 *)(iVar2 + 0x20);
  iStack_e4 = iVar2 + 0x40;
  uVar1 = (*(code *)PTR_s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e_8c01fd04)(ar4,&uStack_ec,ar6,ar7);
  return uVar1;
}



/* s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e @ 8c01fd08 callers=0 callees=0 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

int s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *a5;
  int *a6;
  int aiStack_44 [3];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  aiStack_44[1] = 0;
  aiStack_44[0] = 0;
  aiStack_44[2] = *(int *)PTR_s_MCJNMBJNLTJNILJNACJNMDMNMILNMACN_8c01feb4;
  iStack_38 = *(int *)(PTR_s_MCJNMBJNLTJNILJNACJNMDMNMILNMACN_8c01feb4 + 4);
  iStack_34 = *(int *)(PTR_s_MCJNMBJNLTJNILJNACJNMDMNMILNMACN_8c01feb4 + 8);
  iStack_30 = *(int *)(PTR_s_MCJNMBJNLTJNILJNACJNMDMNMILNMACN_8c01feb4 + 0xc);
  iStack_2c = *(int *)(PTR_s_MCJNMBJNLTJNILJNACJNMDMNMILNMACN_8c01feb4 + 0x10);
  iStack_28 = *(int *)(PTR_s_MCJNMBJNLTJNILJNACJNMDMNMILNMACN_8c01feb4 + 0x14);
  iStack_24 = *(int *)(PTR_s_MCJNMBJNLTJNILJNACJNMDMNMILNMACN_8c01feb4 + 0x18);
  iStack_20 = *(int *)(PTR_s_MCJNMBJNLTJNILJNACJNMDMNMILNMACN_8c01feb4 + 0x1c);
  iStack_1c = *(int *)(PTR_s_MCJNMBJNLTJNILJNACJNMDMNMILNMACN_8c01feb4 + 0x20);
  iStack_18 = *(int *)(PTR_s_MCJNMBJNLTJNILJNACJNMDMNMILNMACN_8c01feb4 + 0x24);
  iStack_14 = *(int *)(PTR_s_MCJNMBJNLTJNILJNACJNMDMNMILNMACN_8c01feb4 + 0x28);
  while( true ) {
    a6 = aiStack_44;
    a5 = aiStack_44 + 1;
    iVar1 = (*(code *)PTR_FUN_8c01feb8)(ar5[2],a5,a6,ar7);
    if (iVar1 == 0) break;
    if (aiStack_44[2] == aiStack_44[0]) {
      ar7 = 0;
      (*(code *)PTR_FUN_8c01febc)(ar4,ar5,iVar1,0);
    }
    else if (iStack_38 == aiStack_44[0]) {
      ar7 = 1;
      (*(code *)PTR_FUN_8c01febc)(ar4,ar5,iVar1,1);
    }
    else if (iStack_34 == aiStack_44[0]) {
      ar7 = 2;
      (*(code *)PTR_FUN_8c01febc)(ar4,ar5,iVar1,2);
    }
    else if (iStack_30 == aiStack_44[0]) {
      ar7 = 3;
      (*(code *)PTR_FUN_8c01febc)(ar4,ar5,iVar1,3);
    }
    else if (iStack_2c == aiStack_44[0]) {
      ar7 = 4;
      (*(code *)PTR_FUN_8c01febc)(ar4,ar5,iVar1,4);
    }
    else if (iStack_28 == aiStack_44[0]) {
      ar7 = 5;
      (*(code *)PTR_FUN_8c01febc)(ar4,ar5,iVar1,5);
    }
    else if (iStack_24 == aiStack_44[0]) {
      ar7 = 6;
      (*(code *)PTR_FUN_8c01febc)(ar4,ar5,iVar1,6);
    }
    else if (iStack_20 == aiStack_44[0]) {
      ar7 = 7;
      (*(code *)PTR_FUN_8c01febc)(ar4,ar5,iVar1,7);
    }
    else if (iStack_1c == aiStack_44[0]) {
      ar7 = 8;
      (*(code *)PTR_FUN_8c01febc)(ar4,ar5,iVar1,8);
    }
    else if (iStack_18 == aiStack_44[0]) {
      ar7 = 9;
      (*(code *)PTR_FUN_8c01febc)(ar4,ar5,iVar1,9);
    }
    else if (iStack_14 == aiStack_44[0]) {
      ar7 = 10;
      (*(code *)PTR_FUN_8c01febc)(ar4,ar5,iVar1,10);
    }
    else {
      (*(code *)PTR_FUN_8c01fec0)(iVar1,a5,a6,ar7);
    }
  }
  iVar1 = *ar5;
  if (iVar1 != 0xb) {
    iVar1 = (*(code *)PTR_FUN_8c01fec0)(ar5,a5,a6,ar7);
  }
  return iVar1;
}



/* FUN_8c01fec4 @ 8c01fec4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01fec4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a6;
  int iVar3;
  int a7;
  
  iVar3 = ar5 + 0x10;
  a6 = *(undefined4 *)(ar4 + 0x28);
  uVar2 = ar7;
  iVar1 = (*(code *)PTR_FUN_8c01ff90)(ar4,ar7,a6,iVar3);
  if (iVar1 == 0) {
    a7 = ar5 + 0x30;
    iVar3 = ar5 + 0x10;
    iVar1 = (*(code *)PTR_FUN_8c01ff98)(ar4,ar7,iVar3,a7);
    if (iVar1 == 0) {
      uVar2 = (*(code *)PTR_FUN_8c01ff94)(ar6,ar7,iVar3,a7);
    }
    else {
      *(undefined4 *)(iVar1 + 8) = ar6;
      for (iVar3 = 0; iVar3 < 0x20; iVar3 = iVar3 + 1) {
        *(undefined4 *)(iVar1 + iVar3 * 4 + 0x58) = *(undefined4 *)(ar5 + iVar3 * 4 + 0x58);
      }
      uVar2 = (*(code *)PTR_FUN_8c01ff9c)(ar4,ar4 + 0x28,iVar1,a7);
    }
  }
  else {
    uVar2 = (*(code *)PTR_FUN_8c01ff94)(ar6,uVar2,a6,iVar3);
  }
  return uVar2;
}



/* FUN_8c01ffa0 @ 8c01ffa0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c01ffa0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a6;
  undefined4 in_stack_00000008;
  
  a6 = (*(code *)PTR_FUN_8c020000)(ar4,ar5,ar6,ar7);
  if (a6 != 0) {
    (*(code *)PTR_FUN_8c020004)(ar4,ar4 + 0x20,a6,ar7);
    (*(code *)PTR_FUN_8c020008)(ar4,a6,in_stack_00000008,ar7);
  }
  return (uint)(a6 != 0);
}


