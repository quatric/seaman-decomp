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

uint FUN_8c010120(int ar4,code *ar5,code *ar6,int ar7,uint s0)

{
  int iVar1;
  undefined4 uStackY_1c;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = ar4;
  for (uStackY_1c = 0; uStackY_1c < s0; uStackY_1c = uStackY_1c + 1) {
    (*ar5)(iVar1,1,uVar2);
    iVar1 = iVar1 + ar7;
  }
  if ((uStackY_1c < s0) && (s0 = 0, ar6 != (code *)0x0)) {
    iVar1 = ar7 * uStackY_1c + ar4;
    for (; s0 = 0, uStackY_1c != 0; uStackY_1c = uStackY_1c - 1) {
      iVar1 = iVar1 - ar7;
      (*ar6)(iVar1,0xffffffff);
    }
  }
  return s0;
}



/* FUN_8c01012c @ 8c01012c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c01012c(int ar4,code *ar5,code *ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
                 undefined4 s8,undefined4 s12,undefined4 s16,uint s20)

{
  code *a6;
  int unaff_r11;
  int iVar1;
  undefined4 uStack_8;
  
  a6 = ar6;
  iVar1 = ar4;
  for (uStack_8 = 0; uStack_8 < s20; uStack_8 = uStack_8 + 1) {
    (*ar5)(iVar1,1,a6,ar7);
    iVar1 = iVar1 + unaff_r11;
  }
  if ((uStack_8 < s20) && (s20 = 0, ar6 != (code *)0x0)) {
    iVar1 = unaff_r11 * uStack_8 + ar4;
    for (; s20 = 0, uStack_8 != 0; uStack_8 = uStack_8 - 1) {
      iVar1 = iVar1 - unaff_r11;
      (*ar6)(iVar1,0xffffffff,a6,ar7);
    }
  }
  return s20;
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

int FUN_8c010af8(char *ar4,int ar5,int ar6,undefined4 ar7,int ain0)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = (byte *)(ar6 + -1 + ar5);
  pbVar1 = (byte *)(ar4 + ar6 + -1);
  iVar3 = 0;
  if (ar4 <= pbVar1) {
    do {
      iVar3 = (uint)*pbVar1 + (uint)*pbVar2 + iVar3;
      *pbVar1 = (byte)iVar3;
      ain0 = libgcc_divide_helper_010468(iVar3,0x100);
      pbVar1 = pbVar1 + -1;
      pbVar2 = pbVar2 + -1;
      iVar3 = ain0;
    } while (ar4 <= pbVar1);
  }
  return ain0;
}



/* FUN_8c010b08 @ 8c010b08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c010b08(char *ar4,int ar5,char *ar6,undefined4 ar7,int ain0)

{
  byte *pbVar1;
  undefined4 unaff_r13;
  int iVar2;
  
  pbVar1 = (byte *)(ar4 + ar5);
  iVar2 = 0;
  if (ar4 <= pbVar1) {
    do {
      iVar2 = (uint)*pbVar1 + (uint)(byte)*ar6 + iVar2;
      *pbVar1 = (byte)iVar2;
      ain0 = libgcc_divide_helper_010468(iVar2,unaff_r13);
      pbVar1 = pbVar1 + -1;
      ar6 = ar6 + -1;
      iVar2 = ain0;
    } while (ar4 <= pbVar1);
  }
  return ain0;
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
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 auStackY_8028 [8];
  undefined1 auStackY_8020 [32748];
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  undefined1 auStack_20 [16];
  
  puVar5 = &stack0xffffffcc;
  puVar8 = &stack0xffffffcc;
  uVar4 = CONCAT22((short)((uint)in_stack_ffffffd0 >> 0x10),(undefined2)ar4);
  puVar6 = auStack_20;
  if (ar6 < 1) {
    FUN_8c012b1c(-ar6,&stack0xffffffcc,auStack_20,ar7);
    iVar2 = (int)(short)uVar4;
    FUN_8c0129b4(&stack0xffffffcc,auStack_20,iVar2,ar5);
  }
  else {
    FUN_8c012b1c(ar6,&stack0xffffffcc,auStack_20,ar7);
    iVar2 = (int)(short)uVar4;
    FUN_8c010c60(&stack0xffffffcc,auStack_20,iVar2,ar5);
    puVar8 = puVar5;
  }
  iVar9 = 0x3f - (short)in_stack_ffffffcc;
  iVar3 = FUN_8c0105c4(puVar8,puVar6,iVar2,ar5,in_stack_ffffffcc,uVar4);
  FUN_8c012e00(auStack_20,9,0x42 - (short)iVar9,ar5);
  iVar7 = (int)(short)iVar3;
  iVar2 = 8;
  if (iVar7 < 9) {
    do {
      sVar1 = (short)iVar2;
      auStack_20[sVar1] = auStack_20[sVar1 - iVar7];
      iVar2 = sVar1 + -1;
    } while (iVar7 <= (short)iVar2);
  }
  sVar1 = (short)iVar2;
  puVar8 = auStack_20 + sVar1 + 1;
  while (-1 < sVar1) {
    iVar2 = iVar2 + -1;
    puVar8 = puVar8 + -1;
    *puVar8 = 0;
    sVar1 = (short)iVar2;
  }
  iVar9 = iVar9 + iVar3 * -8;
  FUN_8c012da8(auStack_20,9,iVar9,ar5,in_stack_ffffffcc);
  FUN_8c012c70(auStack_20,0x40,iVar9,ar5);
  uVar4 = memmove(ar7,auStack_20,8,ar5);
  return uVar4;
}



/* FUN_8c010c60 @ 8c010c60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c010c60(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *a6;
  int iVar3;
  char *ain0;
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
  
  uVar2 = ar7;
  memset(&cStack_2c,0,4,ar7);
  memmove(&cStack_28,uVar2,8,ar7);
  memset(auStack_38,0,4,ar7);
  memmove(auStack_34,ar5,8,ar7);
  a6 = (undefined1 *)0x10;
  memset(auStack_48,0,0x10,ar7);
  ain0 = &cStack_3d;
  for (iVar3 = 0x42; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_8c012854(auStack_48,0xc,a6,ar7);
    ar7 = 0xc;
    a6 = auStack_38;
    iVar1 = FUN_8c012eac(0,&cStack_2c,auStack_38,0xc);
    if (iVar1 < 0) {
      a6 = (undefined1 *)0xc;
      FUN_8c010af8(&cStack_2c,auStack_38,0xc,ar7,ain0);
    }
    else {
      *ain0 = *ain0 + '\x01';
    }
    FUN_8c012854(&cStack_2c,0xc,a6,ar7);
  }
  for (iVar3 = 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_8c012d5c(auStack_48,0x10,a6,ar7);
  }
  if (((((cStack_2c != '\0') || (cStack_2b != '\0')) || (cStack_2a != '\0')) ||
      (((cStack_29 != '\0' || (cStack_28 != '\0')) ||
       ((cStack_27 != '\0' || ((cStack_26 != '\0' || (cStack_25 != '\0')))))))) ||
     ((cStack_24 != '\0' || (((cStack_23 != '\0' || (cStack_22 != '\0')) || (cStack_21 != '\0'))))))
  {
    bStack_3c = bStack_3c | 0x20;
  }
  *ar4 = (short)ar6 - *ar4;
  if ((((bStack_44 != 0) || (cStack_43 != '\0')) ||
      (((cStack_42 != '\0' || ((cStack_41 != '\0' || (cStack_40 != '\0')))) || (cStack_3f != '\0')))
      ) || (((cStack_3e != '\0' || (*ain0 != '\0')) || (bStack_3c != 0)))) {
    while ((bStack_44 & 0x80) == 0) {
      FUN_8c012854(&bStack_44,9,a6,ar7);
      *ar4 = *ar4 + -1;
    }
  }
  uVar2 = memmove(ar5,&bStack_44,9,ar7);
  return uVar2;
}



/* FUN_8c010df4 @ 8c010df4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c010e00) */
/* WARNING: Removing unreachable block (ram,0x8c010e02) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c010df4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_fr5;
  uint in_fr4;
  
  if ((in_fr4 & 0x7ff00000) != 0x7ff00000) {
    return 0;
  }
  if (((in_fr4 & 0xfffff) == 0) && (in_fr5 == 0)) {
    return 2;
  }
  return 1;
}



/* FUN_8c010e38 @ 8c010e38 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c010e38) */
/* WARNING: Removing unreachable block (ram,0x8c010e66) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c010e38(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint in_fr4;
  
  if ((in_fr4 & 0x7f800000) == 0x7f800000) {
    if ((in_fr4 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return ain0;
}



/* FUN_8c010e84 @ 8c010e84 callers=0 callees=4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c010e84(int ar4,byte *ar5,int *ar6,byte *ar7)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  byte *a7;
  byte *pbVar8;
  byte *pbVar9;
  uint in_stack_00000000;
  byte *pbStack_f0;
  byte *pbStack_ec;
  undefined1 auStack_e8 [4];
  byte *pbStack_e4;
  byte *pbStack_e0;
  byte abStack_dc [128];
  byte abStack_5c [4];
  int iStack_58;
  byte *pbStack_54;
  int iStack_50;
  byte *pbStack_4c;
  byte *pbStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  byte *pbStack_24;
  
  abStack_5c[1] = 0;
  abStack_5c[2] = 0;
  abStack_5c[3] = 0;
  iStack_58 = 0;
  pbStack_54 = (byte *)0x0;
  pbStack_4c = (byte *)0x0;
  pbStack_48 = (byte *)0x0;
  uStack_44 = 0;
  iStack_40 = 0;
  iStack_3c = 0;
  iStack_38 = 0;
  iStack_34 = 0;
  a7 = ar7;
  if (ar4 == 0) {
    if (ar6 == (int *)0x0) {
      _DAT_8c2787a8 = 0x452;
      return 0xffffffff;
    }
    if ((*(byte *)(ar6 + 4) & 7) == 0) {
      _DAT_8c2787a8 = 0x514;
      return 0xffffffff;
    }
    a7 = (byte *)(int)(char)ar6[4];
    pbStack_24 = ar5;
    if ((((uint)a7 & 4) == 0) && (((uint)a7 & 1) != 0)) {
      _DAT_8c2787a8 = 0x516;
      return 0xffffffff;
    }
  }
  uStack_28 = 0;
  abStack_5c[0] = 0;
  auStack_e8[0] = 0x30;
  iStack_30 = ar4;
  piStack_2c = ar6;
  iVar2 = FUN_8c011836(&iStack_30,ar5,ar6,a7);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  pbStack_e0 = abStack_dc;
  do {
    while( true ) {
      if (((*ar7 == 0) || (iVar2 = FUN_8c011836(&iStack_30,ar5,ar6,a7), iVar2 != 0)) ||
         ((abStack_5c[0] & 1) != 0)) {
        FUN_8c011826(&iStack_30,ar5,ar6,a7);
        return uStack_28;
      }
      pbStack_f0 = ar7;
      if (*ar7 == 0x25) break;
      for (; (*pbStack_f0 != 0 && (*pbStack_f0 != 0x25)); pbStack_f0 = pbStack_f0 + 1) {
      }
      ar5 = pbStack_f0 + -(int)ar7;
      ar6 = &iStack_30;
      FUN_8c0117ce(ar7,ar5,&iStack_30,a7);
      ar7 = pbStack_f0;
    }
    abStack_5c[0] = 0;
    uStack_44 = 0;
    iStack_40 = 0;
    iStack_3c = 0;
    iStack_38 = 0;
    iStack_34 = 0;
    while( true ) {
      pbVar8 = ar7 + 1;
      bVar1 = *pbVar8;
      if (((bVar1 != 0x2d) && (bVar1 != 0x2b)) && ((bVar1 != 0x20 && (bVar1 != 0x23)))) break;
      bVar1 = *pbVar8;
      ar7 = pbVar8;
      if (bVar1 == 0x2d) {
        abStack_5c[0] = abStack_5c[0] | 2;
      }
      else if (bVar1 == 0x2b) {
        abStack_5c[0] = abStack_5c[0] | 8;
      }
      else if (bVar1 == 0x20) {
        if ((abStack_5c[0] & 8) == 0) {
          abStack_5c[0] = abStack_5c[0] | 0x10;
        }
      }
      else if (bVar1 == 0x23) {
        abStack_5c[0] = abStack_5c[0] | 4;
      }
    }
    abStack_5c[1] = 0x20;
    if (*pbVar8 == 0x30) {
      pbVar8 = ar7 + 2;
      abStack_5c[1] = 0x30;
    }
    iStack_58 = 0;
    if (*pbVar8 == 0x2a) {
      uVar3 = in_stack_00000000 + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = in_stack_00000000 + 8;
      }
      ar5 = (byte *)(uVar3 - 4);
      pbVar9 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar9 = (byte *)(uVar3 - 8);
      }
      iStack_58 = *(int *)pbVar9;
      if (iStack_58 < 0) {
        abStack_5c[0] = abStack_5c[0] | 2;
        iStack_58 = -iStack_58;
      }
      pbVar8 = pbVar8 + 1;
      in_stack_00000000 = uVar3;
      if (0x200 < iStack_58) {
        abStack_5c[0] = abStack_5c[0] | 1;
        _DAT_8c2787a8 = 0x518;
      }
    }
    pbStack_4c = abStack_dc;
    pbStack_48 = abStack_dc;
    if (((&DAT_8c125470)[*pbVar8] & 4) != 0) {
      iStack_58 = 0;
      while (((&DAT_8c125470)[*pbVar8] & 4) != 0) {
        iVar6 = (char)*pbVar8 + -0x30;
        iVar2 = libgcc_divide_helper_010468(0x200 - iVar6,10);
        pbVar8 = pbVar8 + 1;
        if (iVar2 < iStack_58) {
          abStack_5c[0] = abStack_5c[0] | 1;
          _DAT_8c2787a8 = 0x518;
        }
        else {
          iStack_58 = iStack_58 * 10 + iVar6;
        }
      }
    }
    pbStack_54 = (byte *)0xffffffff;
    pbVar9 = pbVar8;
    if (*pbVar8 == 0x2e) {
      pbVar9 = pbVar8 + 1;
      if (*pbVar9 == 0x2a) {
        uVar3 = in_stack_00000000 + 4;
        if ((uVar3 & 3) != 0) {
          uVar3 = in_stack_00000000 + 8;
        }
        ar5 = (byte *)(uVar3 - 4);
        pbStack_54 = ar5;
        if (((uint)ar5 & 3) != 0) {
          pbStack_54 = (byte *)(uVar3 - 8);
        }
        pbStack_54 = *(byte **)pbStack_54;
        if ((int)pbStack_54 < 0) {
          pbStack_54 = (byte *)0xffffffff;
        }
        pbVar9 = pbVar8 + 2;
        in_stack_00000000 = uVar3;
        if (0x200 < (int)pbStack_54) {
          abStack_5c[0] = abStack_5c[0] | 1;
          _DAT_8c2787a8 = 0x518;
        }
      }
      if (((&DAT_8c125470)[*pbVar9] & 4) != 0) {
        pbStack_54 = (byte *)0x0;
        while (((&DAT_8c125470)[*pbVar9] & 4) != 0) {
          iVar6 = (char)*pbVar9 + -0x30;
          iVar2 = libgcc_divide_helper_010468(0x200 - iVar6,10);
          pbVar9 = pbVar9 + 1;
          if (iVar2 < (int)pbStack_54) {
            abStack_5c[0] = abStack_5c[0] | 1;
            _DAT_8c2787a8 = 0x518;
          }
          else {
            pbStack_54 = (byte *)((int)pbStack_54 * 10 + iVar6);
          }
        }
      }
    }
    iStack_50 = 0x20;
    bVar1 = *pbVar9;
    if (((bVar1 == 0x68) || (bVar1 == 0x6c)) || (bVar1 == 0x4c)) {
      iStack_50 = (int)(char)*pbVar9;
      pbVar9 = pbVar9 + 1;
    }
    bVar1 = *pbVar9;
    if (((((bVar1 == 100) || (bVar1 == 0x69)) || (bVar1 == 0x6f)) ||
        ((bVar1 == 0x75 || (bVar1 == 0x78)))) || (bVar1 == 0x58)) {
      if (iStack_50 == 0x6c) {
        uVar7 = in_stack_00000000 + 4;
        if ((uVar7 & 3) != 0) {
          uVar7 = in_stack_00000000 + 8;
        }
        puVar5 = (uint *)(uVar7 - 4);
        if (((uint)puVar5 & 3) != 0) {
          puVar5 = (uint *)(uVar7 - 8);
        }
        uVar3 = *puVar5;
        in_stack_00000000 = uVar7;
      }
      else if (iStack_50 == 0x68) {
        bVar1 = *pbVar9;
        if ((((bVar1 == 0x75) || (bVar1 == 0x58)) || (bVar1 == 0x78)) || (bVar1 == 0x6f)) {
          uVar7 = in_stack_00000000 + 4;
          if ((uVar7 & 3) != 0) {
            uVar7 = in_stack_00000000 + 8;
          }
          puVar5 = (uint *)(uVar7 - 4);
          if (((uint)puVar5 & 3) != 0) {
            puVar5 = (uint *)(uVar7 - 8);
          }
          uVar3 = *puVar5 & 0xffff;
          in_stack_00000000 = uVar7;
        }
        else {
          uVar7 = in_stack_00000000 + 4;
          if ((uVar7 & 3) != 0) {
            uVar7 = in_stack_00000000 + 8;
          }
          puVar4 = (undefined4 *)(uVar7 - 4);
          if (((uint)puVar4 & 3) != 0) {
            puVar4 = (undefined4 *)(uVar7 - 8);
          }
          uVar3 = (uint)(short)*puVar4;
          in_stack_00000000 = uVar7;
        }
      }
      else {
        bVar1 = *pbVar9;
        if (((bVar1 == 0x75) || (bVar1 == 0x58)) || ((bVar1 == 0x78 || (bVar1 == 0x6f)))) {
          uVar3 = in_stack_00000000 + 4;
          if ((uVar3 & 3) != 0) {
            uVar3 = in_stack_00000000 + 8;
          }
          puVar5 = (uint *)(uVar3 - 4);
          in_stack_00000000 = uVar3;
          if (((uint)puVar5 & 3) != 0) {
            puVar5 = (uint *)(uVar3 - 8);
          }
        }
        else {
          uVar3 = in_stack_00000000 + 4;
          if ((uVar3 & 3) != 0) {
            uVar3 = in_stack_00000000 + 8;
          }
          puVar5 = (uint *)(uVar3 - 4);
          in_stack_00000000 = uVar3;
          if (((uint)puVar5 & 3) != 0) {
            puVar5 = (uint *)(uVar3 - 8);
          }
        }
        uVar3 = *puVar5;
      }
      if (pbStack_54 == (byte *)0xffffffff) {
        pbStack_54 = (byte *)0x1;
      }
      ar6 = (int *)(int)(char)*pbVar9;
      ar5 = abStack_dc;
      a7 = abStack_5c;
      FUN_8c0115c4(uVar3,abStack_dc,ar6,abStack_5c);
      pbStack_e4 = (byte *)log_message(abStack_dc,ar5,ar6,a7);
      pbStack_ec = abStack_dc;
    }
    else if (((bVar1 == 0x66) || (bVar1 == 0x65)) ||
            ((bVar1 == 0x45 || ((bVar1 == 0x67 || (bVar1 == 0x47)))))) {
      ar6 = (int *)(int)(char)*pbVar9;
      ar5 = abStack_dc;
      a7 = abStack_5c;
      FUN_8c013374(&stack0x00000000,abStack_dc,ar6,abStack_5c);
      pbStack_e4 = (byte *)log_message(abStack_dc,ar5,ar6,a7);
      pbStack_ec = abStack_dc;
    }
    else if (bVar1 == 99) {
      uVar3 = in_stack_00000000 + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = in_stack_00000000 + 8;
      }
      ar5 = (byte *)(uVar3 - 4);
      pbVar8 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar8 = (byte *)(uVar3 - 8);
      }
      *pbStack_e0 = (byte)*(undefined4 *)pbVar8;
      in_stack_00000000 = uVar3;
LAB_8c011442:
      pbStack_e4 = (byte *)0x1;
      iStack_3c = 0;
      iStack_34 = iStack_58 + -1;
      pbStack_ec = abStack_dc;
      pbStack_48 = abStack_dc;
    }
    else if (bVar1 == 0x73) {
      uVar3 = in_stack_00000000 + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = in_stack_00000000 + 8;
      }
      ar5 = (byte *)(uVar3 - 4);
      pbVar8 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar8 = (byte *)(uVar3 - 8);
      }
      pbStack_ec = *(byte **)pbVar8;
      in_stack_00000000 = uVar3;
      pbStack_e4 = (byte *)log_message(pbStack_ec,ar5,ar6,a7);
      if ((pbStack_54 != (byte *)0xffffffff) && ((int)pbStack_54 < (int)pbStack_e4)) {
        pbStack_e4 = pbStack_54;
      }
      iStack_3c = 0;
      iStack_34 = iStack_58 - (int)pbStack_e4;
      pbStack_48 = abStack_dc;
    }
    else if (bVar1 == 0x70) {
      uVar3 = in_stack_00000000 + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = in_stack_00000000 + 8;
      }
      puVar4 = (undefined4 *)(uVar3 - 4);
      if (((uint)puVar4 & 3) != 0) {
        puVar4 = (undefined4 *)(uVar3 - 8);
      }
      if (pbStack_54 == (byte *)0xffffffff) {
        pbStack_54 = (byte *)0x1;
      }
      ar6 = (int *)0x78;
      ar5 = abStack_dc;
      a7 = abStack_5c;
      in_stack_00000000 = uVar3;
      FUN_8c0115c4(*puVar4,abStack_dc,0x78,abStack_5c);
      pbStack_e4 = (byte *)log_message(abStack_dc,ar5,ar6,a7);
      pbStack_ec = abStack_dc;
    }
    else if (bVar1 == 0x6e) {
      uVar3 = in_stack_00000000 + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = in_stack_00000000 + 8;
      }
      ar5 = (byte *)(uVar3 - 4);
      pbVar8 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar8 = (byte *)(uVar3 - 8);
      }
      **(undefined4 **)pbVar8 = uStack_28;
      in_stack_00000000 = uVar3;
    }
    else {
      if (bVar1 == 0x25) {
        *pbStack_e0 = 0x25;
        goto LAB_8c011442;
      }
      _DAT_8c2787a8 = 0x518;
      abStack_5c[0] = abStack_5c[0] | 1;
    }
    if ((*pbVar9 != 0x6e) && ((abStack_5c[0] & 1) == 0)) {
      if (((abStack_5c[0] & 2) == 0) && (0 < iStack_34)) {
        for (; 0 < iStack_34; iStack_34 = iStack_34 + -1) {
          FUN_8c0117ce(abStack_5c + 1,1,&iStack_30,a7);
        }
      }
      if (((iStack_40 == 0) && (iStack_3c == 0)) && (iStack_38 == 0)) {
        ar5 = pbStack_e4;
        ar6 = &iStack_30;
        FUN_8c0117ce(pbStack_ec,pbStack_e4,&iStack_30,a7);
      }
      else {
        iVar2 = (int)pbStack_4c - (int)pbStack_ec;
        if (0 < iVar2) {
          FUN_8c0117ce(pbStack_ec,iVar2,&iStack_30,a7);
        }
        for (; 0 < iStack_40; iStack_40 = iStack_40 + -1) {
          FUN_8c0117ce(auStack_e8,1,&iStack_30,a7);
        }
        iVar6 = (int)pbStack_48 - (int)pbStack_4c;
        if (0 < iVar6) {
          FUN_8c0117ce(pbStack_4c,iVar6,&iStack_30,a7);
        }
        for (; 0 < iStack_3c; iStack_3c = iStack_3c + -1) {
          FUN_8c0117ce(auStack_e8,1,&iStack_30,a7);
        }
        ar5 = pbStack_e4 + -(iVar2 + iVar6);
        ar6 = &iStack_30;
        FUN_8c0117ce(pbStack_48,ar5,&iStack_30,a7);
        for (; 0 < iStack_38; iStack_38 = iStack_38 + -1) {
          ar5 = (byte *)0x1;
          ar6 = &iStack_30;
          FUN_8c0117ce(auStack_e8,1,&iStack_30,a7);
        }
      }
      if (((abStack_5c[0] & 2) != 0) && (0 < iStack_34)) {
        for (; 0 < iStack_34; iStack_34 = iStack_34 + -1) {
          ar5 = (byte *)0x1;
          ar6 = &iStack_30;
          FUN_8c0117ce(abStack_5c + 1,1,&iStack_30,a7);
        }
      }
    }
    ar7 = pbVar9 + 1;
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
  char *pcVar5;
  undefined4 unaff_r8;
  int iVar6;
  int iVar7;
  char acStack_2d [17];
  
  *ar5 = '\0';
  if (((ar6 == 100) || (ar6 == 0x69)) || (ar6 == 0x75)) {
    unaff_r8 = 10;
  }
  else if (ar6 == 0x6f) {
    unaff_r8 = 8;
  }
  else if ((ar6 == 0x78) || (ar6 == 0x58)) {
    unaff_r8 = 0x10;
  }
  iVar3 = ar4;
  if (((ar6 == 100) || (ar6 == 0x69)) && (ar4 < 0)) {
    iVar3 = -ar4;
  }
  iVar7 = 0;
  iVar6 = 0;
  pcVar5 = ar5;
  if ((iVar3 == 0) && (*(int *)(ar7 + 8) != 0)) {
    acStack_2d[1] = 0x30;
    iVar7 = 1;
  }
  else {
    while (iVar3 != 0) {
      uVar2 = libgcc_divide_helper_0106dc(iVar3,unaff_r8);
      *extraout_r2 = (char)uVar2;
      if (acStack_2d[iVar7 + 1] < '\n') {
        acStack_2d[iVar7 + 1] = acStack_2d[iVar7 + 1] + '0';
      }
      else {
        pcVar4 = acStack_2d + iVar7 + 1;
        if (ar6 == 0x78) {
          *pcVar4 = *pcVar4 + 'W';
        }
        else {
          *pcVar4 = *pcVar4 + '7';
        }
      }
      iVar3 = libgcc_divide_helper_01051c(iVar3,unaff_r8);
      iVar7 = iVar7 + 1;
    }
  }
  if ((*ar7 & 4) != 0) {
    if (ar6 == 0x6f) {
      if (ar4 != 0) {
        acStack_2d[iVar7 + 1] = '0';
        iVar7 = iVar7 + 1;
      }
    }
    else if (((ar6 == 0x78) || (ar6 == 0x58)) && (ar4 != 0)) {
      *pcVar5 = '0';
      pcVar5[1] = (char)ar6;
      iVar6 = 2;
      pcVar5 = pcVar5 + 2;
    }
  }
  iVar6 = iVar6 + iVar7;
  if (((ar6 == 100) || (ar6 == 0x69)) && ((*(int *)(ar7 + 8) != 0 || (ar4 != 0)))) {
    if (ar4 < 0) {
      *pcVar5 = '-';
    }
    else {
      if ((*ar7 & 8) == 0) {
        if ((*ar7 & 0x10) != 0) {
          *pcVar5 = ' ';
          iVar6 = iVar6 + 1;
          pcVar5 = pcVar5 + 1;
        }
        goto LAB_8c011706;
      }
      *pcVar5 = '+';
    }
    iVar6 = iVar6 + 1;
    pcVar5 = pcVar5 + 1;
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
  if (iVar6 < *(int *)(ar7 + 8)) {
    *(int *)(ar7 + 0x20) = *(int *)(ar7 + 8) - iVar6;
    iVar6 = *(int *)(ar7 + 8);
  }
  else {
    ar7[0x20] = 0;
    ar7[0x21] = 0;
    ar7[0x22] = 0;
    ar7[0x23] = 0;
  }
  iVar3 = (int)*ar5;
  if (((iVar3 == 0x2b) || (iVar3 == 0x2d)) || (iVar3 == 0x20)) {
    if (iVar6 < *(int *)(ar7 + 4)) {
      iVar3 = (int)(char)ar7[1];
      if (iVar3 == 0x30) {
        *(int *)(ar7 + 0x20) = *(int *)(ar7 + 0x20) + (*(int *)(ar7 + 4) - iVar6);
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
    if (iVar6 < *(int *)(ar7 + 4)) {
      *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar6;
      goto joined_r0x8c0117a8;
    }
  }
  ar7[0x28] = 0;
  ar7[0x29] = 0;
  ar7[0x2a] = 0;
  ar7[0x2b] = 0;
joined_r0x8c0117a8:
  while (iVar6 = iVar7 + -1, -1 < iVar6) {
    *pcVar5 = acStack_2d[iVar7];
    pcVar5 = pcVar5 + 1;
    iVar3 = iVar6;
    iVar7 = iVar6;
  }
  *pcVar5 = '\0';
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

/* WARNING: Removing unreachable block (ram,0x8c0118ae) */
/* WARNING: Removing unreachable block (ram,0x8c011920) */
/* WARNING: Removing unreachable block (ram,0x8c01191c) */
/* WARNING: Removing unreachable block (ram,0x8c011918) */
/* WARNING: Removing unreachable block (ram,0x8c011914) */
/* WARNING: Removing unreachable block (ram,0x8c011910) */
/* WARNING: Removing unreachable block (ram,0x8c01190a) */
/* WARNING: Removing unreachable block (ram,0x8c011906) */
/* WARNING: Removing unreachable block (ram,0x8c011902) */
/* WARNING: Removing unreachable block (ram,0x8c0118fe) */
/* WARNING: Removing unreachable block (ram,0x8c0118f6) */
/* WARNING: Removing unreachable block (ram,0x8c0118e2) */
/* WARNING: Removing unreachable block (ram,0x8c0118d8) */
/* WARNING: Removing unreachable block (ram,0x8c0118ce) */
/* WARNING: Removing unreachable block (ram,0x8c0118c8) */
/* WARNING: Removing unreachable block (ram,0x8c0118c4) */
/* WARNING: Removing unreachable block (ram,0x8c0118a6) */
/* WARNING: Removing unreachable block (ram,0x8c011884) */
/* WARNING: Removing unreachable block (ram,0x8c011874) */
/* WARNING: Removing unreachable block (ram,0x8c01186c) */
/* WARNING: Removing unreachable block (ram,0x8c011876) */
/* WARNING: Removing unreachable block (ram,0x8c0118a2) */
/* WARNING: Removing unreachable block (ram,0x8c0118bc) */
/* WARNING: Removing unreachable block (ram,0x8c0118c6) */
/* WARNING: Removing unreachable block (ram,0x8c0118cc) */
/* WARNING: Removing unreachable block (ram,0x8c0118d0) */
/* WARNING: Removing unreachable block (ram,0x8c0118e6) */
/* WARNING: Removing unreachable block (ram,0x8c0118f4) */
/* WARNING: Removing unreachable block (ram,0x8c0118f8) */
/* WARNING: Removing unreachable block (ram,0x8c011900) */
/* WARNING: Removing unreachable block (ram,0x8c011904) */
/* WARNING: Removing unreachable block (ram,0x8c011908) */
/* WARNING: Removing unreachable block (ram,0x8c01190c) */
/* WARNING: Removing unreachable block (ram,0x8c011912) */
/* WARNING: Removing unreachable block (ram,0x8c011916) */
/* WARNING: Removing unreachable block (ram,0x8c01191a) */
/* WARNING: Removing unreachable block (ram,0x8c01191e) */
/* WARNING: Removing unreachable block (ram,0x8c011924) */
/* WARNING: Removing unreachable block (ram,0x8c0118b4) */
/* WARNING: Removing unreachable block (ram,0x8c0118ee) */
/* WARNING: Removing unreachable block (ram,0x8c0118fc) */
/* WARNING: Removing unreachable block (ram,0x8c0118d4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c01186c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar4_00;
  undefined4 *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float ain0;
  ulonglong in_dr4;
  
  uVar1 = 4;
  ain0 = (float)(in_dr4 >> 0x20);
  ar4_00 = 0;
  if ((longlong)in_dr4 < 0) {
    ar4_00 = 8;
  }
  ar7_00 = 4;
  ar6_00 = 1;
  if (ain0 == 0.0) {
    ar4_00 = ar4_00 | 4;
  }
  else if (ABS(ain0) == INFINITY) {
    uVar1 = 2;
    ar4_00 = ar4_00 | 2;
  }
  ar5_00 = &DAT_8c1257f8;
  if ((in_dr4 & 0x8000000000000000) != 0) {
    ain0 = -ain0;
  }
  if (((ain0 <= 1.0) && (ain0 != 1.0)) && ((ar4_00 & 4) == 0)) {
    FUN_8c011960(ar4_00,&DAT_8c1257f8,1,4);
    uVar1 = FUN_8c011d50(1,ar5_00,ar6_00,ar7_00,ain0);
  }
  return uVar1;
}



/* FUN_8c011960 @ 8c011960 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c011a12) */
/* WARNING: Removing unreachable block (ram,0x8c011a32) */
/* WARNING: Removing unreachable block (ram,0x8c011a26) */
/* WARNING: Removing unreachable block (ram,0x8c011a22) */
/* WARNING: Removing unreachable block (ram,0x8c011a1a) */
/* WARNING: Removing unreachable block (ram,0x8c011a0a) */
/* WARNING: Removing unreachable block (ram,0x8c011a04) */
/* WARNING: Removing unreachable block (ram,0x8c0119fc) */
/* WARNING: Removing unreachable block (ram,0x8c0119f6) */
/* WARNING: Removing unreachable block (ram,0x8c0119f0) */
/* WARNING: Removing unreachable block (ram,0x8c0119d0) */
/* WARNING: Removing unreachable block (ram,0x8c0119b8) */
/* WARNING: Removing unreachable block (ram,0x8c0119b4) */
/* WARNING: Removing unreachable block (ram,0x8c0119a4) */
/* WARNING: Removing unreachable block (ram,0x8c011982) */
/* WARNING: Removing unreachable block (ram,0x8c011972) */
/* WARNING: Removing unreachable block (ram,0x8c011968) */
/* WARNING: Removing unreachable block (ram,0x8c011964) */
/* WARNING: Removing unreachable block (ram,0x8c011966) */
/* WARNING: Removing unreachable block (ram,0x8c01196a) */
/* WARNING: Removing unreachable block (ram,0x8c011974) */
/* WARNING: Removing unreachable block (ram,0x8c0119a0) */
/* WARNING: Removing unreachable block (ram,0x8c0119aa) */
/* WARNING: Removing unreachable block (ram,0x8c0119b6) */
/* WARNING: Removing unreachable block (ram,0x8c0119e0) */
/* WARNING: Removing unreachable block (ram,0x8c0119e8) */
/* WARNING: Removing unreachable block (ram,0x8c0119c0) */
/* WARNING: Removing unreachable block (ram,0x8c0119f8) */
/* WARNING: Removing unreachable block (ram,0x8c0119fe) */
/* WARNING: Removing unreachable block (ram,0x8c011a1e) */
/* WARNING: Removing unreachable block (ram,0x8c011a20) */
/* WARNING: Removing unreachable block (ram,0x8c011a24) */
/* WARNING: Removing unreachable block (ram,0x8c011a06) */
/* WARNING: Removing unreachable block (ram,0x8c011a30) */
/* WARNING: Removing unreachable block (ram,0x8c011ade) */
/* WARNING: Removing unreachable block (ram,0x8c011a14) */
/* WARNING: Removing unreachable block (ram,0x8c011a1c) */
/* WARNING: Removing unreachable block (ram,0x8c0119be) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c011960(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  int *ar4_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float ain0;
  ulonglong in_dr4;
  undefined8 in_dr12;
  undefined8 in_dr14;
  int iStack_24;
  float fStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)in_dr14;
  uStack_10 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_14 = (undefined4)in_dr12;
  uStack_18 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  fStack_20 = (float)(in_dr4 >> 0x20);
  ar5_00 = 0;
  if ((longlong)in_dr4 < 0) {
    ar5_00 = 8;
  }
  ar7_00 = 4;
  ar6_00 = 1;
  if (fStack_20 == 0.0) {
    ar5_00 = ar5_00 | 4;
  }
  else if (ABS(fStack_20) == INFINITY) {
    ar5_00 = ar5_00 | 2;
  }
  ain0 = fStack_20;
  if ((in_dr4 & 0x8000000000000000) != 0) {
    ain0 = -fStack_20;
  }
  uVar1 = 0x20;
  if (((((int)((uint)ain0 & 0x7f800000) >> 0x17) + -0x7f < 0x20) && ((ar5_00 & 4) == 0)) &&
     ((ain0 < 1.0 || (ain0 != 1.0)))) {
    ar4_00 = &iStack_24;
    FUN_8c011c5c(ar4_00,ar5_00,1,4,ain0);
    if (iStack_24 != 0) {
      if ((iStack_24 == 1) || (iStack_24 == 2)) {
        ar4_00 = (int *)0xfffffffe;
        FUN_8c011d50(0xfffffffe,ar5_00,ar6_00,ar7_00,ain0);
      }
      else if ((iStack_24 == 3) || (iStack_24 == 4)) {
        ar4_00 = (int *)0xffffffff;
        FUN_8c011d50(0xffffffff,ar5_00,ar6_00,ar7_00,ain0);
      }
      else if ((((iStack_24 != 5) && (iStack_24 != 6)) && (iStack_24 != 7)) && (iStack_24 != 8)) {
        return iStack_24;
      }
    }
    uVar1 = FUN_8c010a90(ar4_00,ar5_00,ar6_00,ar7_00);
  }
  return uVar1;
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

/* WARNING: Removing unreachable block (ram,0x8c011be2) */
/* WARNING: Removing unreachable block (ram,0x8c011bde) */
/* WARNING: Removing unreachable block (ram,0x8c011bd6) */
/* WARNING: Removing unreachable block (ram,0x8c011bc0) */
/* WARNING: Removing unreachable block (ram,0x8c011bb8) */
/* WARNING: Removing unreachable block (ram,0x8c011ba2) */
/* WARNING: Removing unreachable block (ram,0x8c011baa) */
/* WARNING: Removing unreachable block (ram,0x8c011bbe) */
/* WARNING: Removing unreachable block (ram,0x8c011bd0) */
/* WARNING: Removing unreachable block (ram,0x8c011bd8) */
/* WARNING: Removing unreachable block (ram,0x8c011be0) */
/* WARNING: Removing unreachable block (ram,0x8c011be4) */
/* WARNING: Unknown calling convention */

int FUN_8c011b9c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  ulonglong in_dr4;
  float fVar1;
  
  fVar1 = (float)(in_dr4 >> 0x20);
  if (((uint)fVar1 & 0x7f800000) < 0x4b000000) {
    ain0 = (int)fVar1;
  }
  if ((in_dr4 & 0x8000000000000000) == 0) {
    ain0 = 4;
  }
  return ain0;
}



/* FUN_8c011bfc @ 8c011bfc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c011c42) */
/* WARNING: Removing unreachable block (ram,0x8c011c3e) */
/* WARNING: Removing unreachable block (ram,0x8c011c36) */
/* WARNING: Removing unreachable block (ram,0x8c011c20) */
/* WARNING: Removing unreachable block (ram,0x8c011c18) */
/* WARNING: Removing unreachable block (ram,0x8c011c02) */
/* WARNING: Removing unreachable block (ram,0x8c011c0a) */
/* WARNING: Removing unreachable block (ram,0x8c011c1e) */
/* WARNING: Removing unreachable block (ram,0x8c011c30) */
/* WARNING: Removing unreachable block (ram,0x8c011c38) */
/* WARNING: Removing unreachable block (ram,0x8c011c40) */
/* WARNING: Removing unreachable block (ram,0x8c011c44) */
/* WARNING: Unknown calling convention */

int FUN_8c011bfc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  ulonglong in_dr4;
  float fVar1;
  
  fVar1 = (float)(in_dr4 >> 0x20);
  if (((uint)fVar1 & 0x7f800000) < 0x4b000000) {
    ain0 = (int)fVar1;
  }
  if ((in_dr4 & 0x8000000000000000) != 0) {
    ain0 = 4;
  }
  return ain0;
}



/* FUN_8c011c5c @ 8c011c5c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c011d1e) */
/* WARNING: Removing unreachable block (ram,0x8c011d1a) */
/* WARNING: Removing unreachable block (ram,0x8c011d16) */
/* WARNING: Removing unreachable block (ram,0x8c011d0e) */
/* WARNING: Removing unreachable block (ram,0x8c011d08) */
/* WARNING: Removing unreachable block (ram,0x8c011d04) */
/* WARNING: Removing unreachable block (ram,0x8c011cfc) */
/* WARNING: Removing unreachable block (ram,0x8c011cec) */
/* WARNING: Removing unreachable block (ram,0x8c011ce2) */
/* WARNING: Removing unreachable block (ram,0x8c011ccc) */
/* WARNING: Removing unreachable block (ram,0x8c011cc8) */
/* WARNING: Removing unreachable block (ram,0x8c011c9a) */
/* WARNING: Removing unreachable block (ram,0x8c011c90) */
/* WARNING: Removing unreachable block (ram,0x8c011c6c) */
/* WARNING: Removing unreachable block (ram,0x8c011c6a) */
/* WARNING: Removing unreachable block (ram,0x8c011c8e) */
/* WARNING: Removing unreachable block (ram,0x8c011c9c) */
/* WARNING: Removing unreachable block (ram,0x8c011cac) */
/* WARNING: Removing unreachable block (ram,0x8c011cca) */
/* WARNING: Removing unreachable block (ram,0x8c011cce) */
/* WARNING: Removing unreachable block (ram,0x8c011cea) */
/* WARNING: Removing unreachable block (ram,0x8c011cf8) */
/* WARNING: Removing unreachable block (ram,0x8c011cfe) */
/* WARNING: Removing unreachable block (ram,0x8c011d06) */
/* WARNING: Removing unreachable block (ram,0x8c011d0c) */
/* WARNING: Removing unreachable block (ram,0x8c011d10) */
/* WARNING: Removing unreachable block (ram,0x8c011d18) */
/* WARNING: Removing unreachable block (ram,0x8c011d1c) */
/* WARNING: Removing unreachable block (ram,0x8c011d28) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c011c5c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 *ain0)

{
  uint uVar1;
  float fVar2;
  ulonglong in_dr4;
  float fVar3;
  float fStack_14;
  
  fVar3 = (float)(in_dr4 >> 0x20);
  fVar2 = (float)in_dr4;
  if ((((uint)fVar3 & 0x7f800000) == 0x7f800000) ||
     (((((uint)fVar2 & 0x7f800000) == 0x7f800000 && ((in_dr4 & 0x7fffff) != 0)) ||
      (ain0 = (undefined4 *)0x14, fVar2 == 0.0)))) {
    *ar4 = 0;
  }
  else if (((uint)fVar2 & 0x7f800000) == 0x7f800000) {
    *ar4 = 0;
  }
  else {
    fStack_14 = ABS(fVar3) / ABS(fVar2);
    uVar1 = (uint)fStack_14 & 0x80000000;
    if (((uint)fStack_14 & 0x7f800000) < 0x4b000000) {
      fStack_14 = (float)(int)fStack_14;
    }
    fStack_14 = (float)((uint)fStack_14 | uVar1);
    ain0 = &DAT_8c011d48;
    if (2.1474836e+09 < fStack_14) {
      ain0 = &DAT_8c011d4c;
      fStack_14 = fStack_14 + -4.2949673e+09;
    }
    *ar4 = (int)fStack_14;
  }
  return ain0;
}



/* FUN_8c011d50 @ 8c011d50 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c011de6) */
/* WARNING: Removing unreachable block (ram,0x8c011dba) */
/* WARNING: Removing unreachable block (ram,0x8c011dc6) */
/* WARNING: Removing unreachable block (ram,0x8c011d9c) */
/* WARNING: Removing unreachable block (ram,0x8c011d8c) */
/* WARNING: Removing unreachable block (ram,0x8c011d62) */
/* WARNING: Removing unreachable block (ram,0x8c011d5e) */
/* WARNING: Removing unreachable block (ram,0x8c011d6a) */
/* WARNING: Removing unreachable block (ram,0x8c011d8e) */
/* WARNING: Removing unreachable block (ram,0x8c011dce) */
/* WARNING: Removing unreachable block (ram,0x8c011db2) */
/* WARNING: Removing unreachable block (ram,0x8c011ddc) */
/* WARNING: Removing unreachable block (ram,0x8c011d7e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c011d50(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint uVar1;
  int iVar2;
  ulonglong in_dr4;
  
  uVar1 = (uint)(in_dr4 >> 0x20) & 0x7f800000;
  if (uVar1 != 0x7f800000) {
    if ((in_dr4 & 0x7f80000000000000) != 0) {
      iVar2 = ((int)uVar1 >> 0x17) + ar4;
      if ((0 < iVar2) && (iVar2 < 0xff)) {
        return ain0;
      }
      if (-1 < ar4) goto joined_r0x8c011d76;
    }
    if ((in_dr4 & 0x8000000000000000) != 0) {
      return ain0;
    }
    return ain0;
  }
  ain0 = 0x7fffff;
  if ((in_dr4 & 0x7fffff00000000) != 0) {
    return ain0;
  }
joined_r0x8c011d76:
  if ((in_dr4 & 0x8000000000000000) != 0) {
    return ain0;
  }
  return ain0;
}



/* FUN_8c011e10 @ 8c011e10 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c011ede) */
/* WARNING: Removing unreachable block (ram,0x8c011e64) */
/* WARNING: Removing unreachable block (ram,0x8c011e44) */
/* WARNING: Removing unreachable block (ram,0x8c011e1a) */
/* WARNING: Removing unreachable block (ram,0x8c011e16) */
/* WARNING: Removing unreachable block (ram,0x8c011e28) */
/* WARNING: Removing unreachable block (ram,0x8c011e48) */
/* WARNING: Removing unreachable block (ram,0x8c011e6c) */
/* WARNING: Removing unreachable block (ram,0x8c011e56) */
/* WARNING: Unknown calling convention */

uint FUN_8c011e10(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *ar4_00;
  undefined4 ar5_00;
  double in_dr0;
  float extraout_fr3;
  float fVar3;
  undefined4 extraout_fr2;
  undefined4 uVar4;
  longlong in_dr4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint in_stack_fffffff4;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar4_00 = &stack0xfffffff4;
  fVar3 = (float)((ulonglong)in_dr4 >> 0x20);
  uVar2 = 0;
  ar5_00 = 8;
  if (in_dr4 < 0) {
    uVar2 = 8;
  }
  if (fVar3 == 0.0) {
    uVar2 = uVar2 | 4;
  }
  else if (ABS(fVar3) == INFINITY) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar2 & 3) != 0) {
    return uVar2;
  }
  uVar4 = 0x3f490fdb;
  uVar1 = FUN_8c011c5c(&stack0xfffffff4,8,ar6,ar7,in_stack_fffffff4);
  fVar3 = extraout_fr3;
  if (cVar7 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uVar4);
    fVar3 = 0.7853982;
  }
  if (cVar6 == '\0') {
    bVar5 = fVar3 < (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    bVar5 = (double)CONCAT44(extraout_fr2,fVar3) < in_dr0;
  }
  if (bVar5) {
    return uVar1;
  }
  uVar2 = in_stack_fffffff4 & 7;
  if ((uVar2 == 0) || (uVar2 == 7)) {
    uVar2 = FUN_8c010ab4(ar4_00,ar5_00,ar6,ar7,uVar2);
  }
  else if ((uVar2 == 1) || (uVar2 == 2)) {
    uVar2 = FUN_8c010ad4(ar4_00,ar5_00,ar6,ar7,uVar2);
  }
  else if ((uVar2 == 3) || (uVar2 == 4)) {
    uVar2 = FUN_8c010ab4(ar4_00,ar5_00,ar6,ar7,uVar2);
  }
  else if ((uVar2 == 5) || (uVar2 == 6)) {
    uVar2 = FUN_8c010ad4(ar4_00,ar5_00,ar6,ar7,uVar2);
  }
  return uVar2;
}



/* FUN_8c011f18 @ 8c011f18 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c01204c) */
/* WARNING: Removing unreachable block (ram,0x8c01203a) */
/* WARNING: Removing unreachable block (ram,0x8c012026) */
/* WARNING: Removing unreachable block (ram,0x8c012022) */
/* WARNING: Removing unreachable block (ram,0x8c01201a) */
/* WARNING: Removing unreachable block (ram,0x8c012012) */
/* WARNING: Removing unreachable block (ram,0x8c012010) */
/* WARNING: Removing unreachable block (ram,0x8c012002) */
/* WARNING: Removing unreachable block (ram,0x8c011fe8) */
/* WARNING: Removing unreachable block (ram,0x8c011fde) */
/* WARNING: Removing unreachable block (ram,0x8c011fda) */
/* WARNING: Removing unreachable block (ram,0x8c011fcc) */
/* WARNING: Removing unreachable block (ram,0x8c011fc2) */
/* WARNING: Removing unreachable block (ram,0x8c011fb2) */
/* WARNING: Removing unreachable block (ram,0x8c011fae) */
/* WARNING: Removing unreachable block (ram,0x8c011f82) */
/* WARNING: Removing unreachable block (ram,0x8c011f52) */
/* WARNING: Removing unreachable block (ram,0x8c011f26) */
/* WARNING: Removing unreachable block (ram,0x8c011f20) */
/* WARNING: Removing unreachable block (ram,0x8c011f34) */
/* WARNING: Removing unreachable block (ram,0x8c011f56) */
/* WARNING: Removing unreachable block (ram,0x8c011f90) */
/* WARNING: Removing unreachable block (ram,0x8c011faa) */
/* WARNING: Removing unreachable block (ram,0x8c011fb6) */
/* WARNING: Removing unreachable block (ram,0x8c011fca) */
/* WARNING: Removing unreachable block (ram,0x8c011fd2) */
/* WARNING: Removing unreachable block (ram,0x8c011fdc) */
/* WARNING: Removing unreachable block (ram,0x8c011fe0) */
/* WARNING: Removing unreachable block (ram,0x8c012000) */
/* WARNING: Removing unreachable block (ram,0x8c012004) */
/* WARNING: Removing unreachable block (ram,0x8c01200e) */
/* WARNING: Removing unreachable block (ram,0x8c012014) */
/* WARNING: Removing unreachable block (ram,0x8c01201e) */
/* WARNING: Removing unreachable block (ram,0x8c012024) */
/* WARNING: Removing unreachable block (ram,0x8c01202a) */
/* WARNING: Removing unreachable block (ram,0x8c012038) */
/* WARNING: Removing unreachable block (ram,0x8c01203e) */
/* WARNING: Removing unreachable block (ram,0x8c01204a) */
/* WARNING: Removing unreachable block (ram,0x8c011f6c) */
/* WARNING: Removing unreachable block (ram,0x8c012044) */
/* WARNING: Removing unreachable block (ram,0x8c011ffe) */
/* WARNING: Removing unreachable block (ram,0x8c012030) */
/* WARNING: Removing unreachable block (ram,0x8c011f9c) */
/* WARNING: Removing unreachable block (ram,0x8c011f5e) */
/* WARNING: Unknown calling convention */

uint FUN_8c011f18(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int ar6_00;
  float fVar4;
  longlong in_dr4;
  int ar4_00;
  float fStack_c;
  
  fVar4 = (float)((ulonglong)in_dr4 >> 0x20);
  uVar2 = 0;
  if (in_dr4 < 0) {
    uVar2 = 8;
  }
  if (fVar4 == 0.0) {
    uVar2 = uVar2 | 4;
  }
  else if (ABS(fVar4) == INFINITY) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar2 & 4) != 0) {
    return uVar2;
  }
  if (((int)((uint)fVar4 & 0x7f800000) >> 0x17) + -0x7f < 0xf) {
    fVar4 = fVar4 * 1.4426951;
    fStack_c = fVar4;
    if (((uint)fVar4 & 0x7f800000) < 0x4b000000) {
      fStack_c = (float)(int)fVar4;
    }
    fStack_c = (float)((uint)fStack_c | (uint)fVar4 & 0x80000000);
    fVar4 = fVar4 - fStack_c;
    ar4_00 = (int)fStack_c;
    if (-2 < ((int)((uint)fVar4 & 0x7f800000) >> 0x17) + -0x7f) {
      if (((uint)fVar4 & 0x80000000) == 0) {
        ar4_00 = ar4_00 + 1;
        fVar4 = fVar4 + -1.0;
      }
      else {
        fVar4 = fVar4 + 1.0;
        ar4_00 = ar4_00 + -1;
      }
    }
    iVar3 = 6;
    do {
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    iVar3 = 6;
    ar6_00 = -0x73edaa58;
    do {
      ar6_00 = ar6_00 + 4;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    uVar1 = FUN_8c011d50(ar4_00,iVar3,ar6_00,6,fVar4);
    return uVar1;
  }
  if ((uVar2 & 8) == 0) {
    return (uint)&DAT_8c125800;
  }
  return uVar2;
}



/* FUN_8c0121bc @ 8c0121bc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0122dc) */
/* WARNING: Removing unreachable block (ram,0x8c0122d0) */
/* WARNING: Removing unreachable block (ram,0x8c012296) */
/* WARNING: Removing unreachable block (ram,0x8c012286) */
/* WARNING: Removing unreachable block (ram,0x8c01227c) */
/* WARNING: Removing unreachable block (ram,0x8c01226a) */
/* WARNING: Removing unreachable block (ram,0x8c01225c) */
/* WARNING: Removing unreachable block (ram,0x8c01223c) */
/* WARNING: Removing unreachable block (ram,0x8c01222c) */
/* WARNING: Removing unreachable block (ram,0x8c012206) */
/* WARNING: Removing unreachable block (ram,0x8c012200) */
/* WARNING: Removing unreachable block (ram,0x8c0121de) */
/* WARNING: Removing unreachable block (ram,0x8c0121d0) */
/* WARNING: Removing unreachable block (ram,0x8c0121c4) */
/* WARNING: Removing unreachable block (ram,0x8c0121c2) */
/* WARNING: Removing unreachable block (ram,0x8c0121ca) */
/* WARNING: Removing unreachable block (ram,0x8c0121d4) */
/* WARNING: Removing unreachable block (ram,0x8c0121fc) */
/* WARNING: Removing unreachable block (ram,0x8c012202) */
/* WARNING: Removing unreachable block (ram,0x8c012214) */
/* WARNING: Removing unreachable block (ram,0x8c012230) */
/* WARNING: Removing unreachable block (ram,0x8c01224c) */
/* WARNING: Removing unreachable block (ram,0x8c012268) */
/* WARNING: Removing unreachable block (ram,0x8c012276) */
/* WARNING: Removing unreachable block (ram,0x8c01227e) */
/* WARNING: Removing unreachable block (ram,0x8c012288) */
/* WARNING: Removing unreachable block (ram,0x8c012294) */
/* WARNING: Removing unreachable block (ram,0x8c0122c4) */
/* WARNING: Removing unreachable block (ram,0x8c0122e2) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0121bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint ar4_00;
  uint ar4_01;
  undefined4 ar5_00;
  uint ar5_01;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar1;
  float fVar2;
  longlong in_dr4;
  
  fVar2 = (float)in_dr4;
  ar6_00 = 8;
  ar7_00 = 1;
  ar5_00 = 4;
  ar4_00 = 0;
  if ((int)fVar2 < 0) {
    ar4_00 = 8;
  }
  if (fVar2 == 0.0) {
    ar4_00 = ar4_00 | 4;
  }
  else if (ABS(fVar2) == INFINITY) {
    ar4_00 = ar4_00 | 2;
  }
  if ((float)((ulonglong)in_dr4 >> 0x20) == 0.0) {
    ain0 = 0xc;
    if ((ar4_00 & 0xc) != 0) {
      ain0 = 0xc;
    }
  }
  else if ((ar4_00 & 4) == 0) {
    if (in_dr4 < 0) {
      ar5_01 = (uint)fVar2 & 0x80000000;
      ar4_01 = (uint)fVar2 & 0x7f800000;
      fVar1 = fVar2;
      if (ar4_01 < 0x4b000000) {
        fVar1 = (float)(int)fVar2;
      }
      fVar1 = (float)((uint)fVar1 | ar5_01);
      if ((fVar2 == fVar1) && ((ar4_00 & 2) == 0)) {
        FUN_8c012090(ar4_01,ar5_01,8,1);
        FUN_8c011f18(ar4_01,ar5_01,ar6_00,ar7_00);
        ain0 = FUN_8c011d50(0xffffffff,ar5_01,ar6_00,ar7_00,fVar1);
      }
    }
    else {
      FUN_8c012090(ar4_00,4,8,1);
      ain0 = FUN_8c011f18(ar4_00,ar5_00,ar6_00,ar7_00);
    }
  }
  return ain0;
}



/* FUN_8c012328 @ 8c012328 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c01240a) */
/* WARNING: Removing unreachable block (ram,0x8c01238c) */
/* WARNING: Removing unreachable block (ram,0x8c012368) */
/* WARNING: Removing unreachable block (ram,0x8c012346) */
/* WARNING: Removing unreachable block (ram,0x8c012332) */
/* WARNING: Removing unreachable block (ram,0x8c012336) */
/* WARNING: Removing unreachable block (ram,0x8c012364) */
/* WARNING: Removing unreachable block (ram,0x8c01237e) */
/* WARNING: Removing unreachable block (ram,0x8c012404) */
/* WARNING: Removing unreachable block (ram,0x8c012374) */
/* WARNING: Unknown calling convention */

uint FUN_8c012328(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ain0;
  undefined1 *ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  double in_dr0;
  float extraout_fr3;
  float fVar1;
  undefined4 extraout_fr2;
  undefined4 uVar2;
  undefined8 in_dr4;
  bool bVar3;
  char cVar4;
  char cVar5;
  uint in_stack_ffffffec;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar4_00 = &stack0xffffffec;
  ain0 = 4;
  fVar1 = (float)((ulonglong)in_dr4 >> 0x20);
  ar6_00 = 0;
  ar5_00 = 8;
  bVar3 = false;
  if (fVar1 == 0.0) {
    bVar3 = false;
  }
  else if (ABS(fVar1) == INFINITY) {
    ain0 = 2;
    bVar3 = true;
  }
  if (!bVar3) {
    uVar2 = 0x3f490fdb;
    ain0 = FUN_8c011c5c(&stack0xffffffec,8,0,ar7,in_stack_ffffffec);
    fVar1 = extraout_fr3;
    if (cVar5 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uVar2);
      fVar1 = 0.7853982;
    }
    if (cVar4 == '\0') {
      bVar3 = fVar1 < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar3 = (double)CONCAT44(extraout_fr2,fVar1) < in_dr0;
    }
    if (!bVar3) {
      ain0 = in_stack_ffffffec & 7;
      if ((ain0 == 0) || (ain0 == 7)) {
        ain0 = FUN_8c010ad4(ar4_00,ar5_00,ar6_00,ar7,ain0);
      }
      else if ((ain0 == 1) || (ain0 == 2)) {
        ain0 = FUN_8c010ab4(ar4_00,ar5_00,ar6_00,ar7,ain0);
      }
      else if ((ain0 == 3) || (ain0 == 4)) {
        ain0 = FUN_8c010ad4(ar4_00,ar5_00,ar6_00,ar7,ain0);
      }
      else if ((ain0 == 5) || (ain0 == 6)) {
        ain0 = FUN_8c010ab4(ar4_00,ar5_00,ar6_00,ar7,ain0);
      }
    }
  }
  return ain0;
}



/* FUN_8c01243c @ 8c01243c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01243c(undefined4 ar4,char *ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int ar6_00;
  int iVar6;
  int ain0;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  undefined *puStack_38;
  int iStack_34;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [4];
  
  iStack_34 = 1;
  pcVar5 = ar5 + ar6;
  *pcVar5 = '\0';
  iVar2 = memmove(auStack_28,ar4,8,ar7);
  iStack_48 = ar6 + -1;
  puStack_38 = &DAT_8c1255f0 + iStack_48 * 8;
  iStack_3c = ar6;
  do {
    if (iStack_48 < 0) {
      return iVar2;
    }
    iVar2 = libgcc_divide_helper_010468(iStack_3c,5);
    iVar1 = (iVar2 + 1) * -2;
    iVar6 = iVar1 + 8;
    ar6_00 = 8 - iVar6;
    memmove(auStack_28 + iVar1,puStack_38 + iVar6,ar6_00,ar7);
    iVar4 = 8;
    iStack_44 = 0;
    ain0 = 0;
    do {
      iVar2 = FUN_8c012f24(auStack_28 + iVar6,auStack_28 + iVar1,ar6_00,ar7);
      if (-1 < iVar2) {
        ar7 = ar6_00;
        iVar2 = FUN_8c012eac(0,auStack_28 + iVar6,auStack_28 + iVar1,ar6_00);
        iStack_44 = iStack_44 + iVar4;
        iStack_34 = iVar2;
      }
      iVar4 = iVar4 >> 1;
      if (iVar4 == 0) break;
      iVar2 = FUN_8c012da8(auStack_28 + iVar1,ar6_00,1,ar7,ain0);
      ain0 = ain0 + 1;
    } while (ain0 < 4);
    cVar3 = (char)iStack_44 + '0';
    if (iStack_34 == 0) {
      pcVar5 = pcVar5 + -1;
      *pcVar5 = cVar3;
      while (pcVar5 = pcVar5 + -1, ar5 <= pcVar5) {
        *pcVar5 = '0';
      }
      return iVar2;
    }
    pcVar5 = pcVar5 + -1;
    *pcVar5 = cVar3;
    iStack_48 = iStack_48 + -1;
    puStack_38 = puStack_38 + -8;
    iStack_3c = iStack_3c + -1;
  } while( true );
}



/* FUN_8c01256c @ 8c01256c callers=0 callees=2 */

/* WARNING: Removing unreachable block (ram,0x8c012596) */
/* WARNING: Removing unreachable block (ram,0x8c01258a) */
/* WARNING: Removing unreachable block (ram,0x8c0125ac) */
/* WARNING: Unknown calling convention */

int FUN_8c01256c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  char cVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 auStack_8 [2];
  
  FUN_8c0125b6(auStack_8,ar5,ar6,ar7);
  cVar2 = '\0';
  FUN_8c012734(&uStack_10,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    dVar1 = (double)CONCAT44(uStack_c,uStack_10);
  }
  else {
    dVar1 = (double)CONCAT44(auStack_8[0],uStack_c);
  }
  return (int)dVar1;
}



/* FUN_8c0125b6 @ 8c0125b6 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0125dc) */
/* WARNING: Removing unreachable block (ram,0x8c0125d6) */
/* WARNING: Removing unreachable block (ram,0x8c0125d8) */
/* WARNING: Removing unreachable block (ram,0x8c012624) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0125b6(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_PR;
  char cVar4;
  undefined1 uStack_30;
  byte abStack_2f [3];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined2 uStack_24;
  ushort uStack_22;
  undefined4 uStack_20;
  
  cVar4 = '\0';
  uStack_24 = (undefined2)in_fr4;
  uStack_22 = (ushort)((uint)in_fr4 >> 0x10);
  uStack_28 = in_fr5;
  uStack_20 = in_PR;
  iVar1 = FUN_8c010df4(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if (cVar4 == '\0') {
      dVar3 = 0.0;
      dVar2 = (double)CONCAT44(CONCAT22(uStack_22,uStack_24),uStack_28);
    }
    else {
      dVar3 = -7.491824698174533e-251;
      dVar2 = (double)CONCAT44(uStack_20,CONCAT22(uStack_22,uStack_24));
    }
    if (dVar2 == dVar3) {
      *ar4 = 0;
      return &DAT_8c0126c0;
    }
    iVar1 = (uStack_22 >> 4 & 0x7ff) - 0x3fe;
    *ar4 = iVar1;
    if (iVar1 == -0x3fe) {
      *ar4 = *ar4 + 1;
      uStack_22 = uStack_22 & 0x800f;
      FUN_8c012a24(&uStack_30,&uStack_24,ar6,ar7);
      FUN_8c012a24(auStack_2c,&uStack_28,ar6,ar7);
      while ((abStack_2f[0] & 0x10) == 0) {
        FUN_8c012854(abStack_2f,7,ar6,ar7);
        *ar4 = *ar4 + -1;
      }
      FUN_8c012a24(&uStack_24,&uStack_30,ar6,ar7);
      FUN_8c012a24(&uStack_28,auStack_2c,ar6,ar7);
    }
  }
  else {
    if (iVar1 == 1) {
      _DAT_8c2787a8 = 0x4b8;
    }
    if (iVar1 == 2) {
      _DAT_8c2787a8 = 0x44c;
    }
  }
  return 0x18;
}



/* FUN_8c012734 @ 8c012734 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c01281e) */
/* WARNING: Removing unreachable block (ram,0x8c01274a) */
/* WARNING: Removing unreachable block (ram,0x8c012746) */
/* WARNING: Removing unreachable block (ram,0x8c012748) */
/* WARNING: Removing unreachable block (ram,0x8c0127be) */
/* WARNING: Removing unreachable block (ram,0x8c012830) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c012734(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 in_fr5;
  uint in_fr4;
  undefined8 in_xd2;
  undefined4 in_PR;
  char cVar3;
  undefined2 uStack_10;
  undefined1 uStack_e;
  undefined1 uStack_d;
  
  cVar3 = '\0';
  uStack_10 = (undefined2)in_fr4;
  uStack_e = (undefined1)(in_fr4 >> 0x10);
  uStack_d = (undefined1)(in_fr4 >> 0x18);
  iVar1 = FUN_8c010df4(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if ((int)((in_fr4 >> 0x14 & 0x7ff) - 0x3ff) < 0) {
      if (cVar3 == '\0') {
        ar4[1] = 0;
        *ar4 = 0;
      }
      else {
        *(undefined8 *)(ar4 + 1) = 0x7001600700000000;
        *(undefined8 *)(ar4 + -1) = 0x7001600700000000;
      }
    }
    else {
      if (cVar3 == '\0') {
        uVar2 = CONCAT44(in_fr4,in_fr5);
      }
      else {
        in_xd2 = CONCAT17(uStack_d,CONCAT16(uStack_e,CONCAT24(uStack_10,in_fr5)));
        uVar2 = CONCAT44(in_PR,in_fr4);
      }
      if (cVar3 == '\0') {
        ar4[1] = (int)((ulonglong)uVar2 >> 0x20);
        *ar4 = (int)uVar2;
      }
      else {
        *(undefined8 *)(ar4 + 1) = uVar2;
        *(undefined8 *)(ar4 + -1) = in_xd2;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      _DAT_8c2787a8 = 0x4b8;
    }
    if (iVar1 == 2) {
      _DAT_8c2787a8 = 0x44c;
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
  int ar6_00;
  undefined4 in_stack_ffffffc4;
  byte abStack_34 [24];
  
  memset(ar6,0,0x10,ar7);
  sVar2 = 7;
  do {
    iVar4 = (int)sVar2;
    if (*(char *)(iVar4 + ar5) != '\0') {
      memset(abStack_34,0,0x10,ar7);
      sVar3 = 7;
      do {
        iVar1 = iVar4 + sVar3;
        ar6_00 = (uint)*(byte *)(ar4 + sVar3) * (uint)*(byte *)(ar5 + iVar4);
        in_stack_ffffffc4 =
             CONCAT22((short)((uint)in_stack_ffffffc4 >> 0x10),
                      (ushort)abStack_34[iVar1 + 1] + (short)ar6_00);
        FUN_8c012a40(abStack_34 + iVar1,&stack0xffffffc4,ar6_00,ar7);
        sVar3 = sVar3 + -1;
      } while (-1 < sVar3);
      if (sVar2 == 7) {
        iVar4 = memmove(ar6 + 7,abStack_34 + 7,9,ar7);
      }
      else {
        iVar4 = FUN_8c010af8(iVar4 + ar6,abStack_34 + iVar4,9,ar7,in_stack_ffffffc4);
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
  byte *ar6_00;
  byte abStack_1c [8];
  byte bStack_14;
  
  puVar1 = PTR_FUN_8c012a14;
  *ar4 = (short)ar6 + *ar4;
  ar6_00 = abStack_1c;
  (*(code *)puVar1)(ar5,ar7,abStack_1c,ar7);
  if ((abStack_1c[0] & 0x80) == 0) {
    (*(code *)PTR_FUN_8c012a18)(abStack_1c,0x10,ar6_00,ar7);
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
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int ar6_00;
  byte *ar4_00;
  byte abStack_1c [12];
  
  *ar5 = (short)ar4 + 0x3f;
  FUN_8c012af8(ar4,abStack_1c,ar6,ar7);
  memset(ar6,0,8,ar7);
  iVar3 = 0;
  ar6_00 = 0;
  for (ar4_00 = abStack_1c; *ar4_00 == 0; ar4_00 = ar4_00 + 1) {
    iVar3 = iVar3 + 1;
    *ar5 = *ar5 + -8;
  }
  for (uVar2 = 0x80; (*ar4_00 & uVar2) == 0; uVar2 = uVar2 >> 1) {
    ar6_00 = ar6_00 + 1;
  }
  FUN_8c01289c(ar4_00,8 - iVar3,ar6_00,ar7,ar6);
  *ar5 = *ar5 - (short)ar6_00;
  uVar1 = memmove(ar6,ar4_00,8 - iVar3,ar7);
  return uVar1;
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
  undefined *ar7_00;
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
  uVar1 = libgcc_divide_helper_010468(ar4,0x1b);
  iVar2 = libgcc_divide_helper_010614(ar4,iVar4);
  if ((uVar6 == 1) && (iVar2 != 0)) {
    iVar2 = iVar4 - iVar2;
    asStack_48[0] = -0x5a;
    memmove(abStack_2c,&DAT_8c125798,8,ar7);
    uStack_24 = 0;
  }
  else {
    memset(abStack_2c,0,9,ar7);
    abStack_2c[0] = abStack_2c[0] | 0x80;
    asStack_48[0] = 0;
  }
  iVar4 = 0;
  psVar7 = &DAT_8c1257d8 + uVar6 * 8;
  ar7_00 = &DAT_8c125758 + uVar6 * 0x40;
  pbStack_44 = abStack_2c;
  do {
    if ((uVar1 & 1) != 0) {
      iVar5 = (int)*psVar7;
      ar7 = ar7_00;
      FUN_8c0129b4(asStack_48,abStack_2c,iVar5,ar7_00);
      iVar5 = FUN_8c012c70(abStack_2c,0x40,iVar5,ar7);
      if (iVar5 != 0) {
        asStack_48[0] = asStack_48[0] + 1;
        *pbStack_44 = *pbStack_44 | 0x80;
      }
    }
    iVar4 = iVar4 + 1;
    uVar1 = (int)uVar1 >> 1;
    psVar7 = psVar7 + 1;
    ar7_00 = ar7_00 + 8;
  } while (iVar4 < 8);
  if (iVar2 != 0) {
    FUN_8c012a60(iVar2,psStack_40,puStack_3c,ar7);
    iVar2 = (int)*psStack_40;
    ar7 = puStack_3c;
    FUN_8c0129b4(asStack_48,abStack_2c,iVar2,puStack_3c);
    iVar2 = FUN_8c012c70(abStack_2c,0x40,iVar2,ar7);
    if (iVar2 == 1) {
      asStack_48[0] = asStack_48[0] + 1;
      *pbStack_44 = *pbStack_44 | 0x80;
    }
  }
  *psStack_40 = asStack_48[0];
  uVar3 = memmove(puStack_3c,abStack_2c,8,ar7);
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
  undefined4 d;
  uint uVar7;
  byte *pbVar8;
  
  d = 8;
  bVar2 = false;
  iVar3 = libgcc_divide_helper_010468(ar5,8);
  pbVar8 = ar4 + iVar3;
  if ((int)ar5 < 0) {
    uVar4 = ~(~ar5 + 1 & 7) + 1;
  }
  else {
    uVar4 = ar5 & 7;
  }
  uVar4 = -uVar4;
  if ((int)uVar4 < 0) {
    uVar4 = 0x80 >> (~uVar4 & 0x1f) + 1;
  }
  else {
    uVar4 = 0x80 << (uVar4 & 0x1f);
  }
  uVar4 = uVar4 & 0xff;
  uVar7 = ar5 - 1;
  iVar3 = libgcc_divide_helper_010468(uVar7,d);
  pbVar6 = ar4 + iVar3;
  if ((int)uVar7 < 0) {
    uVar7 = ~(~uVar7 + 1 & 7) + 1;
  }
  else {
    uVar7 = uVar7 & 7;
  }
  uVar7 = -uVar7;
  if ((int)uVar7 < 0) {
    uVar7 = 0x80 >> (~uVar7 & 0x1f) + 1;
  }
  else {
    uVar7 = 0x80 << (uVar7 & 0x1f);
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
  
  iVar1 = libgcc_divide_helper_010468(ar6,8);
  pbVar6 = (byte *)(iVar1 + ar4);
  if ((int)ar6 < 0) {
    uVar2 = ~(~ar6 + 1 & 7) + 1;
  }
  else {
    uVar2 = ar6 & 7;
  }
  uVar2 = -uVar2;
  if ((int)uVar2 < 0) {
    uVar5 = 0x80 >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar5 = 0x80 << (uVar2 & 0x1f);
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
  undefined4 in_r0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  iVar1 = libgcc_divide_helper_010468(ar6,in_r0);
  pbVar6 = (byte *)(iVar1 + ar4);
  if ((int)ar6 < 0) {
    uVar2 = ~(~ar6 + 1 & 7) + 1;
  }
  else {
    uVar2 = ar6 & 7;
  }
  uVar2 = -uVar2;
  if ((int)uVar2 < 0) {
    uVar5 = 0x80 >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar5 = 0x80 << (uVar2 & 0x1f);
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

/* WARNING: Removing unreachable block (ram,0x8c012f78) */
/* WARNING: Removing unreachable block (ram,0x8c012f76) */
/* WARNING: Removing unreachable block (ram,0x8c012fa0) */
/* WARNING: Unknown calling convention */

uint FUN_8c012f58(undefined1 *ar4,ushort *ar5,byte *ar6,undefined4 ar7)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 ar6_00;
  undefined4 in_fr4;
  undefined4 in_stack_ffffffe0;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [2];
  ushort uStack_16;
  
  uStack_16 = (ushort)((uint)in_fr4 >> 0x10);
  if ((uStack_16 & 0x8000) == 0x8000) {
    uVar2 = 0xff;
  }
  else {
    uVar2 = 1;
  }
  *ar4 = uVar2;
  *ar5 = uStack_16;
  *ar5 = (short)(*ar5 & 0x7ff0) >> 4;
  FUN_8c012a24(&stack0xffffffe0,auStack_18,ar6,ar7);
  ar6_00 = 3;
  memmove(ar6,&stack0xffffffe1,3,ar7);
  FUN_8c012a24(&stack0xffffffe0,auStack_1c,ar6_00,ar7);
  memmove(ar6 + 3,&stack0xffffffe0,4,ar7);
  FUN_8c01289c(ar6,7,3,ar7,in_stack_ffffffe0);
  if ((short)*ar5 < 1) {
    *ar5 = *ar5 + 1;
    uVar1 = (int)(char)*ar6 & 0x7f;
    *ar6 = (byte)uVar1;
    while ((*ar6 & 0x80) == 0) {
      uVar1 = FUN_8c01289c(ar6,7,1,ar7);
      *ar5 = *ar5 - 1;
    }
  }
  else {
    uVar1 = (int)(char)*ar6 | 0x80;
    *ar6 = (byte)uVar1;
  }
  return uVar1;
}



/* FUN_8c013060 @ 8c013060 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c013084) */
/* WARNING: Removing unreachable block (ram,0x8c01308c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c013060(int ar4,undefined1 *ar5,int *ar6,char *ar7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  char *ar4_00;
  char *ar4_01;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *ar6_00;
  char *ar7_00;
  ulonglong in_dr4;
  undefined4 in_stack_ffffffa4;
  undefined4 ain0;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [7];
  undefined1 uStack_29;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar6 = &stack0xffffffa4;
  ar4_01 = (char *)&uStack_28;
  uStack_28 = (undefined4)in_dr4;
  uStack_24 = (uint)(in_dr4 >> 0x20);
  bVar1 = false;
  ar7_00 = ar7;
  if (((in_dr4 & 0x7f00000000000000) == 0) && (iVar2 = FUN_8c010b40(ar4_01,7,ar6,ar7), iVar2 != 0))
  {
    puVar6 = ar5 + 8;
    for (; ar5 < puVar6; ar5 = ar5 + 1) {
      *ar5 = 0;
    }
    *ar6 = 0;
    if ((uStack_24 & 0x80000000) == 0) {
      *ar7 = '\x01';
    }
    else {
      *ar7 = -1;
    }
  }
  else {
    ar4_00 = ar7;
    ar6_00 = auStack_30;
    FUN_8c012f58(ar7,&stack0xffffffa4,auStack_30,ar7_00);
    if (*ar7 == -1) {
      uStack_24 = uStack_24 & 0x7fffffff;
    }
    if ((short)in_stack_ffffffa4 == 0x7ff) {
      if (uStack_24._2_1_ != -0x10) {
        return 2;
      }
      puVar6 = (undefined1 *)0x6;
      iVar2 = FUN_8c010b40(ar4_01,6,ar6_00,ar7_00);
      if (iVar2 == 0) {
        return 2;
      }
      if (*ar7 == '\x01') {
        return 1;
      }
      ar4_00 = ar4_01;
      if (*ar7 == -1) {
        return 0xffffffff;
      }
    }
    sVar4 = (short)in_stack_ffffffa4 + -0x3ff;
    ain0 = CONCAT22((short)((uint)in_stack_ffffffa4 >> 0x10),sVar4);
    if (sVar4 < 0) {
      iVar2 = FUN_8c01256c(ar4_00,puVar6,ar6_00,ar7_00);
      iVar2 = iVar2 + -1;
    }
    else {
      iVar2 = FUN_8c01256c(ar4_00,puVar6,ar6_00,ar7_00);
    }
    uStack_29 = 0;
    *ar6 = (iVar2 - ar4) + 1;
    FUN_8c012af8(ar4,auStack_38,ar6_00,ar7_00);
    iVar3 = libgcc_divide_helper_010468(ar4,8);
    iVar5 = 0;
    iVar2 = iVar5;
    if (0 < 8 - iVar3) {
      do {
        iVar5 = iVar2 + 1;
        auStack_38[iVar2] = auStack_38[iVar2 + iVar3];
        iVar2 = iVar5;
      } while (iVar5 < 8 - iVar3);
    }
    for (puVar6 = auStack_38 + iVar5; puVar6 < auStack_30; puVar6 = puVar6 + 1) {
      *puVar6 = 0;
    }
    iVar2 = ar4 + iVar3 * -8;
    FUN_8c01289c(auStack_38,8,iVar2,ar7_00,ain0);
    FUN_8c012af8(ar4 + -1,auStack_40,iVar2,ar7_00);
    iVar3 = libgcc_divide_helper_010468(ar4 + -1,8);
    iVar5 = 0;
    iVar2 = iVar5;
    if (0 < 8 - iVar3) {
      do {
        iVar5 = iVar2 + 1;
        auStack_40[iVar2] = auStack_40[iVar3 + iVar2];
        iVar2 = iVar5;
      } while (iVar5 < 8 - iVar3);
    }
    for (puVar6 = auStack_40 + iVar5; puVar6 < auStack_38; puVar6 = puVar6 + 1) {
      *puVar6 = 0;
    }
    FUN_8c01289c(auStack_40,8,ar4 + iVar3 * -8 + -1,ar7_00,ain0);
    while( true ) {
      while( true ) {
        puVar6 = ar5;
        FUN_8c010b60((int)(short)ain0,auStack_30,*ar6,ar5);
        memmove(auStack_48,ar5,8,puVar6);
        iVar2 = FUN_8c013ec0(auStack_48,auStack_38,8,puVar6);
        if (iVar2 < 1) break;
        bVar1 = true;
        *ar6 = *ar6 + 1;
      }
      memmove(auStack_48,ar5,8,puVar6);
      iVar2 = FUN_8c013ec0(auStack_48,auStack_38,8,puVar6);
      if (iVar2 == 0) break;
      memmove(auStack_48,ar5,8,puVar6);
      iVar2 = FUN_8c013ec0(auStack_48,auStack_40,8,puVar6);
      if (-1 < iVar2) {
        return 0;
      }
      if (bVar1) {
        return 0;
      }
      *ar6 = *ar6 + -1;
    }
    iVar2 = *ar6;
    *ar6 = iVar2 + 1;
    FUN_8c010b60((int)(short)ain0,auStack_30,iVar2 + 1,ar5);
  }
  return 0;
}



/* FUN_8c013374 @ 8c013374 callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c0133ba) */
/* WARNING: Removing unreachable block (ram,0x8c0133f0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

int FUN_8c013374(uint *ar4,char *ar5,int ar6,byte *ar7)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char cVar6;
  float *pfVar7;
  int iVar8;
  char *pcVar9;
  char *ar4_00;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  float fVar14;
  bool bVar15;
  byte in_FPSCR_DN;
  int in_stack_ffffffa0;
  int iStack_58;
  char acStack_4c [4];
  char acStack_48 [32];
  undefined1 auStack_28 [12];
  
  pcVar13 = (char *)*ar4;
  uVar11 = 3;
  pcVar5 = pcVar13 + 4;
  if (((uint)pcVar5 & 3) != 0) {
    pcVar5 = pcVar13 + 8;
  }
  *ar4 = (uint)pcVar5;
  pfVar7 = (float *)(pcVar5 + -4);
  if (((uint)pfVar7 & 3) != 0) {
    pfVar7 = (float *)(pcVar5 + -8);
  }
  fVar14 = *pfVar7;
  if (*(int *)(ar7 + 8) == -1) {
    ar7[8] = 6;
    ar7[9] = 0;
    ar7[10] = 0;
    ar7[0xb] = 0;
  }
  acStack_48[0] = '0';
  if ((char)((in_FPSCR_DN & 4) >> 2) == '\0') {
    fVar2 = 0.0;
  }
  else {
    fVar2 = -INFINITY;
  }
  if (fVar14 == fVar2) {
    acStack_4c[0] = '\x01';
    acStack_48[1] = 0;
  }
  else {
    pcVar13 = acStack_4c;
    iVar3 = FUN_8c013060(0x11,auStack_28,&stack0xffffffa0,pcVar13);
    if (iVar3 != 0) {
      *ar5 = '\0';
      if (*(int *)(ar7 + 4) < *(int *)(ar7 + 8)) {
        *(undefined4 *)(ar7 + 0x28) = *(undefined4 *)(ar7 + 8);
      }
      else {
        *(undefined4 *)(ar7 + 0x28) = *(undefined4 *)(ar7 + 4);
      }
      if (iVar3 == 1) {
        uVar11 = 0x2b;
      }
      else if (iVar3 == -1) {
        uVar11 = 0x2d;
      }
      else {
        uVar11 = 0x2a;
      }
      ar7[1] = (byte)uVar11;
      return uVar11;
    }
    pcVar5 = acStack_48 + 1;
    uVar11 = 0x11;
    FUN_8c01243c(auStack_28,pcVar5,0x11,pcVar13);
  }
  for (iVar3 = 1; acStack_48[iVar3] == '0'; iVar3 = iVar3 + 1) {
  }
  if (1 < iVar3) {
    pcVar5 = (char *)log_message(acStack_48 + iVar3,pcVar5,uVar11,pcVar13);
    iVar8 = 1;
    in_stack_ffffffa0 = in_stack_ffffffa0 + iVar3 + -1;
    if (0 < (int)pcVar5) {
      do {
        acStack_48[iVar8] = acStack_48[iVar3];
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar8 <= (int)pcVar5);
    }
    acStack_48[iVar8] = '\0';
  }
  ar4_00 = acStack_48 + 1;
  iVar3 = log_message(ar4_00,pcVar5,uVar11,pcVar13);
  iVar8 = (int)(iVar3 + (uint)(iVar3 < 0)) >> 1;
  pcVar9 = ar4_00 + iVar3;
  iVar12 = 0;
  pcVar5 = ar4_00;
  if (0 < iVar8) {
    do {
      pcVar9 = pcVar9 + -1;
      cVar6 = *pcVar5;
      pcVar13 = (char *)(int)cVar6;
      iVar12 = iVar12 + 1;
      *pcVar5 = *pcVar9;
      *pcVar9 = cVar6;
      pcVar5 = pcVar5 + 1;
    } while (iVar12 < iVar8);
  }
  if (iVar3 == 0) {
    iVar3 = 1;
    acStack_48[1] = 0x30;
    in_stack_ffffffa0 = 0;
  }
  if ((ar6 == 0x67) || (iStack_58 = ar6, ar6 == 0x47)) {
    *ar7 = *ar7 | 0x20;
    iVar8 = in_stack_ffffffa0 + iVar3 + -1;
    if ((iVar8 < -4) || (*(int *)(ar7 + 8) < iVar8)) {
      iStack_58 = ar6 + -2;
    }
    else {
      iStack_58 = 0x66;
    }
  }
  if (acStack_4c[0] == '\x01') {
    if ((*ar7 & 0x18) == 8) {
      cVar6 = '+';
    }
    else {
      pcVar5 = ar5;
      if ((*ar7 & 0x18) != 0x10) goto LAB_8c013572;
      cVar6 = ' ';
    }
    *ar5 = cVar6;
    pcVar5 = ar5 + 1;
  }
  else {
    *ar5 = '-';
    pcVar5 = ar5 + 1;
  }
LAB_8c013572:
  pcVar9 = ar5 + 1;
  if (iStack_58 == 0x66) {
    if (in_stack_ffffffa0 < 0) {
      in_stack_ffffffa0 = in_stack_ffffffa0 + iVar3;
      iVar8 = in_stack_ffffffa0 + *(int *)(ar7 + 8);
      if ((iVar8 < iVar3) && (-1 < iVar8)) {
        FUN_8c013a72(acStack_48,iVar8 + 1,iVar12,pcVar13,in_stack_ffffffa0);
      }
      if (in_stack_ffffffa0 < 1) {
        bVar15 = acStack_48[0] != '0';
        if (bVar15) {
          iVar3 = iVar3 + 1;
          in_stack_ffffffa0 = in_stack_ffffffa0 + 1;
        }
        uVar10 = (uint)!bVar15;
        if (in_stack_ffffffa0 < 1) {
          *pcVar5 = '0';
        }
        else {
          uVar10 = 1;
          *pcVar5 = acStack_48[0];
        }
        pcVar5[1] = '.';
        iVar8 = 2;
        pcVar5 = pcVar5 + 2;
        if (in_stack_ffffffa0 < 0) {
          *(char **)(ar7 + 0x14) = pcVar5;
          if (-in_stack_ffffffa0 < *(int *)(ar7 + 8)) {
            *(int *)(ar7 + 0x20) = -in_stack_ffffffa0;
            iVar8 = -in_stack_ffffffa0;
          }
          else {
            *(undefined4 *)(ar7 + 0x20) = *(undefined4 *)(ar7 + 8);
            iVar8 = *(int *)(ar7 + 8);
          }
          iVar8 = iVar8 + 2;
          *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + in_stack_ffffffa0;
        }
        while (((int)(uVar10 - !bVar15) < iVar3 && (0 < *(int *)(ar7 + 8)))) {
          iVar8 = iVar8 + 1;
          *pcVar5 = acStack_48[uVar10];
          uVar10 = uVar10 + 1;
          pcVar5 = pcVar5 + 1;
          *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + -1;
        }
        bVar1 = *ar7;
        if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
          if (0 < *(int *)(ar7 + 8)) {
            *(char **)(ar7 + 0x18) = pcVar5;
            *(undefined4 *)(ar7 + 0x24) = *(undefined4 *)(ar7 + 8);
            iVar8 = iVar8 + *(int *)(ar7 + 8);
          }
        }
        else if (pcVar5[-1] == '0') {
          for (; pcVar5[-1] == '0'; pcVar5 = pcVar5 + -1) {
            iVar8 = iVar8 + -1;
          }
        }
        if ((((*ar7 & 4) == 0) && (pcVar5[-1] == '.')) &&
           (((*(int *)(ar7 + 0x20) == 0 && (*(int *)(ar7 + 0x24) == 0)) || ((*ar7 & 0x20) != 0)))) {
          iVar12 = *(int *)(ar7 + 0x20);
          iVar3 = *(int *)(ar7 + 0x24);
          pcVar5 = pcVar5 + -1;
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
          iVar8 = ((iVar8 - iVar12) - iVar3) + -1;
        }
        iVar12 = (int)*ar5;
        if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
           ((iVar8 < *(int *)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
          *(char **)(ar7 + 0x10) = pcVar9;
          *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar8;
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        else if (iVar8 < *(int *)(ar7 + 4)) {
          *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar8;
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
        bVar15 = acStack_48[0] != '0';
        iVar8 = 0;
        if (bVar15) {
          iVar3 = iVar3 + 1;
          in_stack_ffffffa0 = in_stack_ffffffa0 + 1;
        }
        uVar10 = (uint)!bVar15;
        for (; 0 < in_stack_ffffffa0; in_stack_ffffffa0 = in_stack_ffffffa0 + -1) {
          iVar8 = iVar8 + 1;
          *pcVar5 = acStack_48[uVar10];
          uVar10 = uVar10 + 1;
          pcVar5 = pcVar5 + 1;
        }
        *pcVar5 = '.';
        pcVar13 = pcVar5;
        while( true ) {
          pcVar5 = pcVar13 + 1;
          iVar8 = iVar8 + 1;
          if ((iVar3 <= (int)(uVar10 - !bVar15)) || (*(int *)(ar7 + 8) < 1)) break;
          pcVar13 = acStack_48 + uVar10;
          uVar10 = uVar10 + 1;
          *pcVar5 = *pcVar13;
          *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + -1;
          pcVar13 = pcVar5;
        }
        bVar1 = *ar7;
        if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
          *(char **)(ar7 + 0x14) = pcVar5;
          iVar8 = iVar8 + *(int *)(ar7 + 8);
          *(undefined4 *)(ar7 + 0x20) = *(undefined4 *)(ar7 + 8);
        }
        else if (*pcVar13 == '0') {
          for (; pcVar5[-1] == '0'; pcVar5 = pcVar5 + -1) {
            iVar8 = iVar8 + -1;
          }
        }
        if ((((*ar7 & 4) == 0) && (pcVar5[-1] == '.')) &&
           ((*(int *)(ar7 + 0x20) == 0 || ((*ar7 & 0x20) != 0)))) {
          iVar3 = *(int *)(ar7 + 0x20);
          ar7[0x20] = 0;
          ar7[0x21] = 0;
          ar7[0x22] = 0;
          ar7[0x23] = 0;
          pcVar5 = pcVar5 + -1;
          *(char **)(ar7 + 0x14) = ar5;
          iVar8 = (iVar8 - iVar3) + -1;
        }
        iVar12 = (int)*ar5;
        if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
           ((iVar8 < *(int *)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
          *(char **)(ar7 + 0x10) = pcVar9;
          *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar8;
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        else if (iVar8 < *(int *)(ar7 + 4)) {
          *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar8;
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
      iVar8 = 0;
      if (0 < iVar3) {
        do {
          cVar6 = *ar4_00;
          ar4_00 = ar4_00 + 1;
          iVar8 = iVar8 + 1;
          *pcVar5 = cVar6;
          pcVar5 = pcVar5 + 1;
        } while (iVar8 < iVar3);
      }
      *(char **)(ar7 + 0x14) = pcVar5;
      *(int *)(ar7 + 0x20) = in_stack_ffffffa0;
      iVar8 = 0;
      if ((((*ar7 & 0x20) == 0) && (0 < *(int *)(ar7 + 8))) || ((*ar7 & 4) != 0)) {
        *pcVar5 = '.';
        iVar8 = 1;
        pcVar5 = pcVar5 + 1;
      }
      bVar1 = *ar7;
      if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
        *(char **)(ar7 + 0x18) = pcVar5;
        *(undefined4 *)(ar7 + 0x24) = *(undefined4 *)(ar7 + 8);
        iVar8 = iVar8 + *(int *)(ar7 + 8);
      }
      iVar12 = (int)*ar5;
      iVar3 = iVar8 + in_stack_ffffffa0 + iVar3;
      if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
         ((iVar3 < *(int *)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
        *(char **)(ar7 + 0x10) = pcVar9;
        *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar3;
        ar7[0x28] = 0;
        ar7[0x29] = 0;
        ar7[0x2a] = 0;
        ar7[0x2b] = 0;
      }
      else if (iVar3 < *(int *)(ar7 + 4)) {
        *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar3;
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
    if (*(int *)(ar7 + 8) + 1 < iVar3) {
      FUN_8c013a72(acStack_48,*(int *)(ar7 + 8) + 2,iVar12,pcVar13,in_stack_ffffffa0);
    }
    if (acStack_48[0] != '0') {
      iVar3 = iVar3 + 1;
      in_stack_ffffffa0 = in_stack_ffffffa0 + -1;
    }
    uVar10 = (uint)(acStack_48[0] == '0');
    in_stack_ffffffa0 = in_stack_ffffffa0 + (iVar3 - uVar10);
    iVar8 = 1;
    *pcVar5 = acStack_48[uVar10];
    pcVar5[1] = '.';
    pcVar5 = pcVar5 + 1;
    while( true ) {
      pcVar13 = pcVar5 + 1;
      uVar10 = uVar10 + 1;
      iVar8 = iVar8 + 1;
      if ((iVar3 < (int)uVar10) || (*(int *)(ar7 + 8) < 1)) break;
      *pcVar13 = acStack_48[uVar10];
      *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + -1;
      pcVar5 = pcVar13;
    }
    bVar1 = *ar7;
    if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
      *(char **)(ar7 + 0x14) = pcVar13;
      *(undefined4 *)(ar7 + 0x20) = *(undefined4 *)(ar7 + 8);
      iVar8 = iVar8 + *(int *)(ar7 + 8);
    }
    else if (*pcVar5 == '0') {
      for (; pcVar13[-1] == '0'; pcVar13 = pcVar13 + -1) {
        iVar8 = iVar8 + -1;
      }
    }
    if ((((*ar7 & 4) == 0) && (pcVar13[-1] == '.')) &&
       ((*(int *)(ar7 + 0x20) == 0 || ((*ar7 & 0x20) != 0)))) {
      iVar3 = *(int *)(ar7 + 0x20);
      *(char **)(ar7 + 0x14) = ar5;
      pcVar13 = pcVar13 + -1;
      ar7[0x20] = 0;
      ar7[0x21] = 0;
      ar7[0x22] = 0;
      ar7[0x23] = 0;
      iVar8 = (iVar8 - iVar3) + -1;
    }
    if (iStack_58 == 0x65) {
      cVar6 = 'e';
    }
    else {
      cVar6 = 'E';
    }
    *pcVar13 = cVar6;
    if (in_stack_ffffffa0 < 0) {
      pcVar13[1] = '-';
      in_stack_ffffffa0 = -in_stack_ffffffa0;
    }
    else {
      pcVar13[1] = '+';
    }
    if (in_stack_ffffffa0 < 100) {
      pcVar13[2] = '0';
      pcVar13 = pcVar13 + 3;
      iVar8 = iVar8 + 4;
      *pcVar13 = '0';
    }
    else {
      pcVar13 = pcVar13 + 4;
      iVar8 = iVar8 + 5;
    }
    pcVar5 = pcVar13 + 1;
    uVar11 = 10;
    for (; 0 < in_stack_ffffffa0;
        in_stack_ffffffa0 = libgcc_divide_helper_010468(in_stack_ffffffa0,uVar11)) {
      uVar4 = libgcc_divide_helper_010614(in_stack_ffffffa0,uVar11);
      *pcVar13 = (char)uVar4 + '0';
      pcVar13 = pcVar13 + -1;
    }
    iVar12 = (int)*ar5;
    if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
       ((iVar8 < *(int *)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
      *(char **)(ar7 + 0x10) = pcVar9;
      *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar8;
      ar7[0x28] = 0;
      ar7[0x29] = 0;
      ar7[0x2a] = 0;
      ar7[0x2b] = 0;
    }
    else if (iVar8 < *(int *)(ar7 + 4)) {
      *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar8;
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
  *pcVar5 = '\0';
  return iVar12;
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c013aec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011850(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}



/* FUN_8c013b3c @ 8c013b3c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c013b3c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011850(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}



/* FUN_8c013b8c @ 8c013b8c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c013b8c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011b44(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c013be8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  undefined4 in_stack_fffffff8;
  uint uVar3;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011b9c(ar4,ar5,ar6,ar7,in_stack_fffffff8);
  if (cVar2 == '\0') {
    uVar3 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar3 = (uint)in_dr0;
  }
  if ((uVar3 & 0x7f800000) == 0x7f800000) {
    if ((uVar3 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}



/* FUN_8c013c38 @ 8c013c38 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c013c38(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011e10(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}



/* FUN_8c013c88 @ 8c013c88 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c013c88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011e10(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}



/* FUN_8c013cd8 @ 8c013cd8 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c013cd8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011f18(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}



/* FUN_8c013d28 @ 8c013d28 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c013d28(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  undefined4 in_stack_fffffff8;
  uint uVar3;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011bfc(ar4,ar5,ar6,ar7,in_stack_fffffff8);
  if (cVar2 == '\0') {
    uVar3 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar3 = (uint)in_dr0;
  }
  if ((uVar3 & 0x7f800000) == 0x7f800000) {
    if ((uVar3 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}



/* FUN_8c013d78 @ 8c013d78 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c013db8) */
/* WARNING: Removing unreachable block (ram,0x8c013d82) */
/* WARNING: Removing unreachable block (ram,0x8c013d7c) */
/* WARNING: Removing unreachable block (ram,0x8c013dae) */
/* WARNING: Removing unreachable block (ram,0x8c013dcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c013d78(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  float in_fr4;
  
  if (in_fr4 == 0.0) {
    *ar4 = 0;
  }
  else {
    if (((uint)in_fr4 & 0x7f800000) != 0x7f800000) {
      *ar4 = ((int)((uint)in_fr4 & 0x7f800000) >> 0x17) + -0x7e;
      return ain0;
    }
    if (((uint)in_fr4 & 0x7fffff) == 0) {
      ain0 = 0x44c;
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return ain0;
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c013dfc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c012090(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c014064(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  undefined4 in_stack_fffffff8;
  uint uVar3;
  
  cVar2 = '\0';
  uVar1 = FUN_8c0121bc(ar4,ar5,ar6,ar7,in_stack_fffffff8);
  if (cVar2 == '\0') {
    uVar3 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar3 = (uint)in_dr0;
  }
  if ((uVar3 & 0x7f800000) == 0x7f800000) {
    if ((uVar3 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}



/* FUN_8c0140b4 @ 8c0140b4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0140b4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0140cc(1,ar5,&stack0xfffffff0,ar7,ar4);
  return uVar1;
}



/* FUN_8c0140cc @ 8c0140cc callers=2 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c0140cc(uint ar4,uint ar5,int *ar6,int ar7,int ain0)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *a6;
  uint ain0_00;
  int a5;
  uint ar5_00;
  uint uVar4;
  uint ar4_00;
  int iVar5;
  
  a6 = ar6;
  do {
    while( true ) {
      ain0_00 = (ar5 - ar4 >> 1) + ar4;
      a5 = (ain0_00 - 1) * ar6[1] + *ar6;
      ar5_00 = ar5;
      ar4_00 = ar4;
      while ((ar4_00 != 0 && (ar4_00 <= ar5_00))) {
        while (iVar2 = (*(code *)ar6[2])((ar4_00 - 1) * ar6[1] + *ar6,a5,a6,ar7), uVar4 = ar5_00,
              iVar2 < 0) {
          ar4_00 = ar4_00 + 1;
        }
        while (ain0 = (*(code *)ar6[2])(a5,(uVar4 - 1) * ar6[1] + *ar6,a6,ar7), ain0 < 0) {
          uVar4 = uVar4 - 1;
        }
        ar5_00 = uVar4;
        if (ar4_00 <= uVar4) {
          ar5_00 = uVar4 - 1;
          for (uVar3 = 0; uVar3 < (uint)ar6[1]; uVar3 = uVar3 + 1) {
            iVar2 = *ar6;
            iVar5 = (ar4_00 - 1) * ar6[1];
            ain0 = iVar5 + iVar2;
            cVar1 = *(char *)(ain0 + uVar3);
            ar7 = (int)cVar1;
            a6 = (int *)(ar5_00 * ar6[1] + iVar2 + uVar3);
            *(char *)(iVar5 + iVar2 + uVar3) = (char)*a6;
            *(char *)(ar5_00 * ar6[1] + *ar6 + uVar3) = cVar1;
          }
          if (ar4_00 == ain0_00) {
            a5 = ar5_00 * ar6[1] + *ar6;
          }
          else if (uVar4 == ain0_00) {
            a5 = (ar4_00 - 1) * ar6[1] + *ar6;
          }
          ar4_00 = ar4_00 + 1;
        }
      }
      if (ar5 - ar4_00 <= ar5_00 - ar4) break;
      if (ar4 < ar5_00) {
        a6 = ar6;
        ain0 = FUN_8c0140cc(ar4,ar5_00,ar6,ar7,ain0_00);
      }
      ar4 = ar4_00;
      if (ar5 <= ar4_00) {
        return ain0;
      }
    }
    if (ar4_00 < ar5) {
      a6 = ar6;
      ain0 = FUN_8c0140cc(ar4_00,ar5,ar6,ar7,ain0_00);
    }
    ar5 = ar5_00;
  } while (ar4 < ar5_00);
  return ain0;
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

/* WARNING: Removing unreachable block (ram,0x8c014286) */
/* WARNING: Removing unreachable block (ram,0x8c014282) */
/* WARNING: Removing unreachable block (ram,0x8c01427e) */
/* WARNING: Removing unreachable block (ram,0x8c01427a) */
/* WARNING: Removing unreachable block (ram,0x8c014276) */
/* WARNING: Removing unreachable block (ram,0x8c014272) */
/* WARNING: Removing unreachable block (ram,0x8c01426e) */
/* WARNING: Removing unreachable block (ram,0x8c01426a) */
/* WARNING: Removing unreachable block (ram,0x8c01426c) */
/* WARNING: Removing unreachable block (ram,0x8c014270) */
/* WARNING: Removing unreachable block (ram,0x8c014274) */
/* WARNING: Removing unreachable block (ram,0x8c014278) */
/* WARNING: Removing unreachable block (ram,0x8c01427c) */
/* WARNING: Removing unreachable block (ram,0x8c014280) */
/* WARNING: Removing unreachable block (ram,0x8c014284) */
/* WARNING: Removing unreachable block (ram,0x8c014288) */
/* WARNING: Unknown calling convention */

undefined4
FUN_8c01422c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0,undefined4 ain1)

{
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
  *(undefined4 *)(ar4 + 0x3c) = ain1;
  *(undefined4 *)(ar4 + 0x40) = ain0;
  *(undefined4 *)(ar4 + 0x44) = in_MACH;
  *(undefined4 *)(ar4 + 0x48) = in_MACL;
  *(undefined4 *)(ar4 + 0x4c) = in_GBR;
  *(uint *)(ar4 + 0x94) =
       (uint)in_FPSCR_RM | (uint)in_FPSCR_FLAG << 2 | (uint)in_FPSCR_ENABLE << 7 |
       (uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_FR << 0x15;
  *(undefined4 *)(ar4 + 0x90) = in_FPUL;
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
  return 0;
}



/* FUN_8c014294 @ 8c014294 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c014294(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c012328(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}



/* FUN_8c0142e4 @ 8c0142e4 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0142e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c012328(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}



/* FUN_8c014334 @ 8c014334 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c014346) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c014334(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c01436c)(1,0,ar4,s0);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0143f0(byte *ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uStack_34;
  uint uStack_30;
  
  uStack_34 = 0;
  uStack_30 = 0;
  iVar6 = ar6;
  pbVar7 = ar4;
  while (((&DAT_8c125470)[*pbVar7] & 0x40) != 0) {
    pbVar7 = pbVar7 + 1;
    iVar4 = FUN_8c012e84(pbVar7,ar4,iVar6,ar7);
    if (iVar4 != 0) {
      return 0;
    }
  }
  if ((*pbVar7 == 0x2b) || (*pbVar7 == 0x2d)) {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    uStack_30 = (uint)(bVar1 == 0x2d);
    iVar4 = FUN_8c012e84(pbVar7,ar4,iVar6,ar7);
    if (iVar4 != 0) {
      return 0;
    }
  }
  pbVar8 = pbVar7;
  if (ar6 == 0) {
    if (*pbVar7 == 0x30) {
      pbVar8 = pbVar7 + 1;
      iVar4 = FUN_8c012e84(pbVar8,ar4,iVar6,ar7);
      if (iVar4 != 0) {
        return 0;
      }
      iVar4 = (int)(char)*pbVar8;
      if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 == 0x78) {
        iVar4 = FUN_8c012e84(pbVar7 + 2,ar4,iVar6,ar7);
        if (iVar4 != 0) {
          return 0;
        }
        ar6 = 0x10;
        pbVar8 = pbVar7 + 2;
      }
      else {
        ar6 = 8;
      }
    }
    else {
      ar6 = 10;
    }
  }
  else if ((ar6 == 0x10) && (*pbVar7 == 0x30)) {
    pbVar8 = pbVar7 + 1;
    iVar4 = (int)(char)*pbVar8;
    if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    if (iVar4 == 0x78) {
      pbVar8 = pbVar7 + 2;
    }
    iVar4 = FUN_8c012e84(pbVar8,ar4,iVar6,ar7);
    if (iVar4 != 0) {
      return 0;
    }
  }
  if ((ar6 < 2) || (0x24 < ar6)) {
    _DAT_8c2787a8 = 0x4b0;
  }
  else {
    if (ar6 < 0xb) {
      cVar3 = (char)ar6 + '/';
    }
    else {
      cVar3 = (char)ar6 + 'V';
    }
    iVar4 = (int)(char)*pbVar8;
    if (((&DAT_8c125470)[*pbVar8] & 7) != 0) {
      if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 <= cVar3) {
        while (*pbVar8 == 0x30) {
          pbVar8 = pbVar8 + 1;
          iVar4 = FUN_8c012e84(pbVar8,ar4,iVar6,ar7);
          if (iVar4 != 0) {
            return 0;
          }
        }
        bVar2 = false;
        uStack_34 = 0;
        while( true ) {
          iVar4 = (int)(char)*pbVar8;
          if (((&DAT_8c125470)[*pbVar8] & 7) == 0) break;
          if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
            iVar4 = iVar4 + 0x20;
          }
          if (cVar3 < iVar4) break;
          if (!bVar2) {
            if (((&DAT_8c125470)[*pbVar8] & 4) == 0) {
              iVar4 = (int)(char)*pbVar8;
              if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
                iVar4 = iVar4 + 0x20;
              }
              iVar4 = iVar4 + -0x57;
            }
            else {
              iVar4 = (char)*pbVar8 + -0x30;
            }
            uVar5 = libgcc_divide_helper_01051c((uStack_30 - iVar4) + 0x7fffffff,ar6);
            if (uVar5 < uStack_34) {
              bVar2 = true;
            }
            else {
              uStack_34 = ar6 * uStack_34 + iVar4;
            }
          }
          pbVar8 = pbVar8 + 1;
          iVar4 = FUN_8c012e84(pbVar8,ar4,iVar6,ar7);
          if (iVar4 != 0) {
            return 0;
          }
        }
        if (bVar2) {
          _DAT_8c2787a8 = 0x44c;
          if (uStack_30 == 0) {
            uStack_34 = 0x7fffffff;
          }
          else {
            uStack_34 = 0x80000000;
          }
        }
        else if (uStack_30 != 0) {
          uStack_34 = -uStack_34;
        }
      }
    }
    iVar4 = (int)(char)*pbVar8;
    if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    pbVar7 = pbVar8;
    if (iVar4 == 0x75) {
      pbVar7 = pbVar8 + 1;
      iVar4 = (int)(char)*pbVar7;
      if (((&DAT_8c125470)[*pbVar7] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 == 0x6c) {
        pbVar7 = pbVar8 + 2;
      }
    }
    iVar4 = (int)(char)*pbVar7;
    if (((&DAT_8c125470)[*pbVar7] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    pbVar8 = pbVar7;
    if (iVar4 == 0x6c) {
      pbVar8 = pbVar7 + 1;
      iVar4 = (int)(char)*pbVar8;
      if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 == 0x75) {
        pbVar8 = pbVar7 + 2;
      }
    }
    iVar6 = FUN_8c012e84(pbVar8,ar4,iVar6,ar7);
    if (iVar6 != 0) {
      return 0;
    }
  }
  if (ar5 != (undefined4 *)0x0) {
    *ar5 = pbVar8;
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
/* WARNING: Removing unreachable block (ram,0x8c0147c6) */
/* WARNING: Removing unreachable block (ram,0x8c0147be) */
/* WARNING: Removing unreachable block (ram,0x8c0147b6) */
/* WARNING: Removing unreachable block (ram,0x8c0147ae) */
/* WARNING: Removing unreachable block (ram,0x8c0147b2) */
/* WARNING: Removing unreachable block (ram,0x8c0147ba) */
/* WARNING: Removing unreachable block (ram,0x8c0147c2) */
/* WARNING: Removing unreachable block (ram,0x8c0147ca) */
/* WARNING: Removing unreachable block (ram,0x8c014806) */
/* WARNING: Removing unreachable block (ram,0x8c014852) */
/* WARNING: Unknown calling convention */

undefined4
Class_129808_m0_0147a4
          (int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

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
  char cVar6;
  char cVar7;
  undefined4 uStack_1c;
  
  cVar7 = '\0';
  cVar6 = '\0';
  iVar2 = ar4;
  iVar1 = rand(ar4,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(in_fr5,in_fr3);
  }
  else {
    dVar5 = (double)CONCAT44(in_fr6,in_fr5);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(in_fr4,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(in_fr5,in_fr4);
  }
  if (cVar6 == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + (float)((ulonglong)dVar4 >> 0x20),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(int *)(ar4 + 4) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 4) = dVar5;
  }
  iVar1 = rand(iVar2,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(in_fr7,SUB84(dVar5,0));
  }
  else {
    dVar5 = (double)CONCAT44(in_fr8,in_fr7);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(in_fr6,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(in_fr7,in_fr6);
  }
  if (cVar6 == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + (float)((ulonglong)dVar4 >> 0x20),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(int *)(ar4 + 8) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 8) = dVar5;
  }
  iVar1 = rand(iVar2,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(in_fr9,SUB84(dVar5,0));
  }
  else {
    dVar5 = (double)CONCAT44(in_fr10,in_fr9);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(in_fr8,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(in_fr9,in_fr8);
  }
  if (cVar6 == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + (float)((ulonglong)dVar4 >> 0x20),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(int *)(ar4 + 0xc) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0xc) = dVar5;
  }
  iVar2 = rand(iVar2,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(in_fr11,SUB84(dVar5,0));
  }
  else {
    dVar5 = (double)CONCAT44(uStack_1c,in_fr11);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(in_fr10,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(in_fr11,in_fr10);
  }
  if (cVar6 == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + (float)((ulonglong)dVar4 >> 0x20),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(int *)(ar4 + 0x24) = (int)((ulonglong)dVar5 >> 0x20);
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x18));
  }
  else {
    *(double *)(ar4 + 0x24) = dVar5;
    in_xd0 = *(undefined8 *)(ar4 + 0x18);
    dVar5 = *(double *)(ar4 + 0x24);
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar7 == '\0') {
    *(float *)(ar4 + 0x18) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x18) = in_xd0;
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(ar4 + 0x14) = s0;
  }
  else {
    *(undefined8 *)(ar4 + 0x14) = CONCAT44(s4,s0);
  }
  return 0x3c;
}



/* Class_129808_m1_014894 @ 8c014894 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c01489e) */
/* WARNING: Unknown calling convention */

undefined4 Class_129808_m1_014894(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *ar5_00;
  float in_fr1;
  float fVar2;
  float in_fr4;
  float in_PR;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  ar5_00 = ar4 + 5;
  FUN_8c023aa0(ar4 + 1,ar5_00,ar6,ar7);
  if (cVar4 == '\0') {
    in_fr1 = (float)ar4[2];
  }
  uVar1 = 0;
  fVar2 = in_fr4;
  if (cVar4 == '\0') {
    fVar2 = in_fr1;
    in_PR = in_fr4;
  }
  if (cVar3 == '\0' && fVar2 < in_PR) {
    uVar1 = (**(code **)(*ar4 + 0x14))(ar4,ar5_00,ar6,ar7);
  }
  return uVar1;
}



/* Class_129808_m2_0148d8 @ 8c0148d8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c014940) */
/* WARNING: Removing unreachable block (ram,0x8c01493c) */
/* WARNING: Removing unreachable block (ram,0x8c014932) */
/* WARNING: Removing unreachable block (ram,0x8c014928) */
/* WARNING: Removing unreachable block (ram,0x8c014924) */
/* WARNING: Removing unreachable block (ram,0x8c01491a) */
/* WARNING: Removing unreachable block (ram,0x8c014910) */
/* WARNING: Removing unreachable block (ram,0x8c01490c) */
/* WARNING: Removing unreachable block (ram,0x8c014902) */
/* WARNING: Removing unreachable block (ram,0x8c0148f8) */
/* WARNING: Removing unreachable block (ram,0x8c0148ee) */
/* WARNING: Removing unreachable block (ram,0x8c0148e4) */
/* WARNING: Removing unreachable block (ram,0x8c0148e8) */
/* WARNING: Removing unreachable block (ram,0x8c0148f2) */
/* WARNING: Removing unreachable block (ram,0x8c0148fc) */
/* WARNING: Removing unreachable block (ram,0x8c014908) */
/* WARNING: Removing unreachable block (ram,0x8c01490e) */
/* WARNING: Removing unreachable block (ram,0x8c014914) */
/* WARNING: Removing unreachable block (ram,0x8c014920) */
/* WARNING: Removing unreachable block (ram,0x8c014926) */
/* WARNING: Removing unreachable block (ram,0x8c01492c) */
/* WARNING: Removing unreachable block (ram,0x8c014938) */
/* WARNING: Removing unreachable block (ram,0x8c01493e) */
/* WARNING: Removing unreachable block (ram,0x8c014944) */
/* WARNING: Unknown calling convention */

undefined4 Class_129808_m2_0148d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  undefined4 uVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  ar5_00 = &uStack_20;
  uStack_20 = *(undefined4 *)(ar4 + 4);
  uStack_1c = *(undefined4 *)(ar4 + 8);
  uStack_18 = *(undefined4 *)(ar4 + 0xc);
  fStack_14 = *(float *)(ar4 + 4) - *(float *)(ar4 + 0x14) * 3.0;
  fStack_10 = *(float *)(ar4 + 8) - *(float *)(ar4 + 0x18) * 3.0;
  fStack_c = *(float *)(ar4 + 0xc) - *(float *)(ar4 + 0x1c) * 3.0;
  uVar1 = 2;
  ar6_00 = &DAT_8c27882c;
  FUN_8c016464(*(undefined4 *)(ar4 + 0x28),&uStack_20,&DAT_8c27882c,2);
  uVar1 = FUN_8c016504(*(undefined4 *)(ar4 + 0x28),ar5_00,ar6_00,uVar1);
  return uVar1;
}



/* Class_129808_m3_014978 @ 8c014978 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0149b0) */
/* WARNING: Removing unreachable block (ram,0x8c0149a6) */
/* WARNING: Removing unreachable block (ram,0x8c01499c) */
/* WARNING: Removing unreachable block (ram,0x8c014990) */
/* WARNING: Removing unreachable block (ram,0x8c014982) */
/* WARNING: Removing unreachable block (ram,0x8c014986) */
/* WARNING: Removing unreachable block (ram,0x8c014992) */
/* WARNING: Removing unreachable block (ram,0x8c01499e) */
/* WARNING: Removing unreachable block (ram,0x8c0149ae) */
/* WARNING: Removing unreachable block (ram,0x8c0149b8) */
/* WARNING: Unknown calling convention */

undefined4 Class_129808_m3_014978(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x24) = in_fr4;
  *(undefined4 *)(ar4 + 8) = in_fr5;
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0xbf800000;
  *(undefined4 *)(ar4 + 0x1c) = 0;
  uVar1 = FUN_8c0149d4(ar4,ar5,ar6,ar7);
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
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
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
  uint uVar1;
  undefined4 ar5_00;
  int iVar2;
  uint uVar3;
  undefined8 in_dr0;
  undefined8 uVar4;
  uint in_PR;
  char cVar5;
  uint uStack_10;
  uint uStack_c;
  
  cVar5 = '\0';
  *ar4 = 0x8c1297f4;
  Vec3_ctor_zero(ar4 + 0x15,ar5,ar6,ar7);
  ar4[0x1f] = 0;
  ar4[0x20] = 0xffffffff;
  ar4[0x21] = FUN_8c014f74;
  ar4[0x22] = 0;
  ar4[0x23] = 0xffffffff;
  ar4[0x24] = FUN_8c014fd0;
  ar4[0x25] = 0;
  ar4[0x26] = 0xffffffff;
  ar4[0x27] = FUN_8c015054;
  ar4[0x28] = 0;
  ar4[0x29] = 0xffffffff;
  ar4[0x2a] = FUN_8c015098;
  uStack_c = in_PR;
  for (iVar2 = 0; uVar3 = (uint)in_dr0, iVar2 < 5; iVar2 = iVar2 + 1) {
    if (cVar5 == '\0') {
      uStack_10 = 0;
    }
    else {
      uStack_c = 0;
      uStack_10 = uVar3;
    }
    uVar1 = uStack_10;
    if (cVar5 == '\0') {
      ar4[iVar2 * 3 + 3] = uStack_10;
    }
    else {
      *(ulonglong *)(ar4 + iVar2 * 3 + 3) = CONCAT44(uStack_c,uStack_10);
      uStack_10 = uStack_c;
      uVar3 = uVar1;
    }
    if (cVar5 == '\0') {
      uVar4 = CONCAT44(uVar1,uVar3);
      ar4[iVar2 * 3 + 2] = uVar1;
    }
    else {
      uVar4 = CONCAT44(uStack_10,uVar1);
      *(undefined8 *)(ar4 + iVar2 * 3 + 2) = uVar4;
    }
    if (cVar5 == '\0') {
      in_dr0 = CONCAT44(uVar1,(int)uVar4);
      ar4[iVar2 * 3 + 1] = uVar1;
    }
    else {
      in_dr0 = CONCAT44(uStack_10,uVar1);
      *(undefined8 *)(ar4 + iVar2 * 3 + 1) = in_dr0;
    }
  }
  ar5_00 = 0xffffffff;
  FUN_8c014ef8(ar4,0xffffffff,ar6,ar7);
  ar4[0x1a] = 0;
  *(undefined1 *)(ar4 + 0x1e) = 1;
  if (cVar5 == '\0') {
    ar4[0x1d] = 0;
    ar4[0x1c] = 0x3ca3d70a;
  }
  else {
    *(ulonglong *)(ar4 + 0x1d) = (ulonglong)uVar3;
    *(undefined8 *)(ar4 + 0x1c) = 0x8c014d903ca3d70a;
  }
  FUN_8c014d90(ar4,ar5_00,ar6,ar7);
  return ar4;
}



/* FUN_8c014be4 @ 8c014be4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c014c44) */
/* WARNING: Removing unreachable block (ram,0x8c014c06) */
/* WARNING: Removing unreachable block (ram,0x8c014bfe) */
/* WARNING: Removing unreachable block (ram,0x8c014bf6) */
/* WARNING: Removing unreachable block (ram,0x8c014bf2) */
/* WARNING: Removing unreachable block (ram,0x8c014bfa) */
/* WARNING: Removing unreachable block (ram,0x8c014c02) */
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
  char cVar7;
  char cVar8;
  undefined4 uStack_20;
  
  cVar8 = '\0';
  cVar7 = '\0';
  iVar2 = ar4;
  uVar3 = ar5;
  iVar1 = rand(ar4,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(in_fr5,in_fr3);
  }
  else {
    dVar6 = (double)CONCAT44(in_fr6,in_fr5);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar5 = -7.554616947321253e-251;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * fVar4,SUB84(dVar6,0));
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
    dVar6 = dVar6 * (dVar5 / dVar5);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(in_fr4,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(in_fr5,in_fr4);
  }
  if (cVar7 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5;
  }
  if (cVar8 == '\0') {
    *(int *)(ar4 + 4) = (int)((ulonglong)dVar6 >> 0x20);
  }
  else {
    *(double *)(ar4 + 4) = dVar6;
  }
  iVar1 = rand(iVar2,uVar3,ar6,ar7);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(in_fr7,SUB84(dVar6,0));
  }
  else {
    dVar6 = (double)CONCAT44(in_fr8,in_fr7);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar5 = -7.554616947321253e-251;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * fVar4,SUB84(dVar6,0));
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
    dVar6 = dVar6 * (dVar5 / dVar5);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(in_fr6,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(in_fr7,in_fr6);
  }
  if (cVar7 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5;
  }
  if (cVar8 == '\0') {
    *(int *)(ar4 + 8) = (int)((ulonglong)dVar6 >> 0x20);
  }
  else {
    *(double *)(ar4 + 8) = dVar6;
  }
  iVar2 = rand(iVar2,uVar3,ar6,ar7);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(in_fr9,SUB84(dVar6,0));
  }
  else {
    dVar6 = (double)CONCAT44(uStack_20,in_fr9);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47000000,(float)iVar2);
  }
  else {
    dVar5 = -7.554616947321253e-251;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * fVar4,SUB84(dVar6,0));
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
    dVar6 = dVar6 * (dVar5 / dVar5);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(in_fr8,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(in_fr9,in_fr8);
  }
  if (cVar7 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5;
  }
  if (cVar8 == '\0') {
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
  uVar3 = FUN_8c014ef8(ar4,ar5,ar6,ar7);
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

/* WARNING: Removing unreachable block (ram,0x8c014cfa) */
/* WARNING: Unknown calling convention */

undefined4 Class_1297f4_m0_014cf0(float ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr1;
  float fVar2;
  float fVar3;
  float in_fr4;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  pure_virtual_stub(ar4,ar5,ar6,ar7);
  *(short *)((int)ar4 + 0x6c) = *(short *)((int)ar4 + 0x6c) + 1;
  if (cVar5 == '\0') {
    in_fr1 = *(float *)((int)ar4 + 8);
  }
  uVar1 = 0;
  fVar2 = in_fr4;
  fVar3 = ar4;
  if (cVar5 == '\0') {
    fVar2 = in_fr1;
    fVar3 = in_fr4;
  }
  if (cVar4 == '\0' && fVar2 < fVar3) {
    uVar1 = FUN_8c014d90(ar4,ar5,ar6,ar7);
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

/* WARNING: Removing unreachable block (ram,0x8c014dd8) */
/* WARNING: Removing unreachable block (ram,0x8c014dee) */
/* WARNING: Removing unreachable block (ram,0x8c014dc6) */
/* WARNING: Removing unreachable block (ram,0x8c014daa) */
/* WARNING: Removing unreachable block (ram,0x8c014dbe) */
/* WARNING: Removing unreachable block (ram,0x8c014dda) */
/* WARNING: Removing unreachable block (ram,0x8c014dbc) */
/* WARNING: Removing unreachable block (ram,0x8c014dc2) */
/* WARNING: Removing unreachable block (ram,0x8c014dec) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c014d90(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 0xc + ar4 + 0xc) = 0;
    *(undefined4 *)(iVar1 * 0xc + ar4 + 8) = 0;
    *(undefined4 *)(iVar1 * 0xc + ar4 + 4) = 0;
  }
  *(undefined4 *)(ar4 + 100) = 0;
  vec3_clear(ar4 + 0x54,ar5,ar6,ar7);
  *(undefined2 *)(ar4 + 0x6c) = 0;
  return 0x6c;
}



/* vec3_clear @ 8c014e20 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c014e2a) */
/* WARNING: Removing unreachable block (ram,0x8c014e22) */
/* WARNING: Removing unreachable block (ram,0x8c014e30) */
/* WARNING: Unknown calling convention */

undefined4 * vec3_clear(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  return ar4 + 1;
}



/* FUN_8c014e38 @ 8c014e38 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c014e84) */
/* WARNING: Removing unreachable block (ram,0x8c014e7e) */
/* WARNING: Removing unreachable block (ram,0x8c014e70) */
/* WARNING: Removing unreachable block (ram,0x8c014e6a) */
/* WARNING: Removing unreachable block (ram,0x8c014e5c) */
/* WARNING: Removing unreachable block (ram,0x8c014e56) */
/* WARNING: Removing unreachable block (ram,0x8c014e46) */
/* WARNING: Removing unreachable block (ram,0x8c014e42) */
/* WARNING: Removing unreachable block (ram,0x8c014e4a) */
/* WARNING: Removing unreachable block (ram,0x8c014e5a) */
/* WARNING: Removing unreachable block (ram,0x8c014e5e) */
/* WARNING: Removing unreachable block (ram,0x8c014e6e) */
/* WARNING: Removing unreachable block (ram,0x8c014e72) */
/* WARNING: Removing unreachable block (ram,0x8c014e82) */
/* WARNING: Removing unreachable block (ram,0x8c014e86) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c014e38(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr5;
  float in_fr4;
  float in_fr6;
  
  *(float *)(ar4 + 0x54) = *(float *)(ar4 + 0x54) + in_fr4;
  *(float *)(ar4 + 0x58) = *(float *)(ar4 + 0x58) + in_fr5;
  *(float *)(ar4 + 0x5c) = *(float *)(ar4 + 0x5c) + in_fr6;
  uVar1 = FUN_8c014ea0(ar4,ar5,ar6,ar7);
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

undefined4 FUN_8c014eac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 auStack_18 [20];
  
  (*(code *)PTR_Vec3_ctor_xyz_8c014eec)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c014ef0)(s0,auStack_18,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c014ef4)(auStack_18,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c014ef8 @ 8c014ef8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c014f20) */
/* WARNING: Removing unreachable block (ram,0x8c014f36) */
/* WARNING: Removing unreachable block (ram,0x8c014ef8) */
/* WARNING: Removing unreachable block (ram,0x8c014f1e) */
/* WARNING: Removing unreachable block (ram,0x8c014f3a) */
/* WARNING: Removing unreachable block (ram,0x8c014f68) */
/* WARNING: Removing unreachable block (ram,0x8c014f38) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c014ef8(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined4 uStack_c;
  
  fVar3 = 1.0;
  if (*(int *)(ar4 + 0x68) == 1) {
    for (iVar2 = 0; uVar1 = 5, iVar2 < 5; iVar2 = iVar2 + 1) {
      fVar3 = fVar3 - 0.2;
      uStack_c = CONCAT13((char)(int)((float)(ar5 >> 0x18) * fVar3),(int3)ar5);
      *(undefined4 *)(ar4 + iVar2 * 4 + 0x40) = uStack_c;
    }
  }
  else {
    uVar1 = 0x40;
    *(uint *)(ar4 + 0x40) = ar5;
  }
  return uVar1;
}



/* FUN_8c014f74 @ 8c014f74 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c014fc8) */
/* WARNING: Removing unreachable block (ram,0x8c014fc2) */
/* WARNING: Removing unreachable block (ram,0x8c014fb4) */
/* WARNING: Removing unreachable block (ram,0x8c014fac) */
/* WARNING: Removing unreachable block (ram,0x8c014f9e) */
/* WARNING: Removing unreachable block (ram,0x8c014f96) */
/* WARNING: Removing unreachable block (ram,0x8c014f88) */
/* WARNING: Removing unreachable block (ram,0x8c014f80) */
/* WARNING: Removing unreachable block (ram,0x8c014f86) */
/* WARNING: Removing unreachable block (ram,0x8c014f8a) */
/* WARNING: Removing unreachable block (ram,0x8c014f9c) */
/* WARNING: Removing unreachable block (ram,0x8c014fa0) */
/* WARNING: Removing unreachable block (ram,0x8c014fb2) */
/* WARNING: Removing unreachable block (ram,0x8c014fb6) */
/* WARNING: Removing unreachable block (ram,0x8c014fc6) */
/* WARNING: Removing unreachable block (ram,0x8c014fca) */
/* WARNING: Unknown calling convention */

float * FUN_8c014f74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(float *)(ar4 + 4) = *(float *)(ar4 + 4) + *(float *)(ar4 + 0x54);
  *(float *)(ar4 + 8) = *(float *)(ar4 + 8) + *(float *)(ar4 + 0x58);
  *(float *)(ar4 + 0xc) = *(float *)(ar4 + 0xc) + *(float *)(ar4 + 0x5c);
  *(float *)(ar4 + 0x58) = *(float *)(ar4 + 0x58) - *(float *)(ar4 + 0x70);
  return (float *)(ar4 + 0x58);
}



/* FUN_8c014fd0 @ 8c014fd0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c014fd0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar5_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  ar5_00 = (uint)*(byte *)(ar4 + 0x78);
  iVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c01504c)
                    ((uint)*(ushort *)(ar4 + 0x6c),ar5_00,ar6,ar7);
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
  uVar2 = (*(code *)PTR_FUN_8c015050)(ar4,ar5_00,ar6,ar7);
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
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* thunk_FUN_8c0151e8 @ 8c0151d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c0151e8(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
  
  uVar1 = (*(code *)PTR_thunk_FUN_8c0151e8_8c015220)(ar4,0x17,ar6,ar7);
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
    (*(code *)PTR_FUN_8c015304)
              (auStack_108,ar5,ar6,ar7,PTR_s_Failed_to_load_texture___8c015300 + 0x2a);
    (*(code *)PTR_report_error_message_8c015308)
              (auStack_108,PTR_s_Failed_to_load_texture___8c015300 + 0x45,1,2);
    uVar2 = 1;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c01530c)(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
    if (iVar1 == -1) {
      (*(code *)PTR_FUN_8c015304)
                (auStack_108,ar5,ar6,ar7,PTR_s_Failed_to_load_texture___8c015300 + 0x5f);
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
    (*(code *)PTR_FUN_8c015380)
              (auStack_108,ar5,ar6,ar7,PTR_s_Failed_to_load_texture___8c01537c + 0x7e);
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
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = &DAT_8c129920, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
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
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129908;
    ar5_00 = 0;
    free_if_nonnull_wrap_0153e4(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c015470 @ 8c015470 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015470(int ar4,undefined4 ar5,uint ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  undefined4 uVar1;
  
  FUN_8c257188(ar4 + 0x10,ar5,ar6 | 0x900,ar7,s0,ar5);
  uVar1 = FUN_8c257196(ar4 + 0x3c,ar4 + 0x10,s4,0x40800000,ar5);
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
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = &DAT_8c1298b8, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
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
  undefined4 in_PR;
  
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_PR);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}



/* Class_1298b8_m3_0155e8 @ 8c0155e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m3_0155e8(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar6_00;
  float fVar2;
  double dVar3;
  undefined4 in_PR;
  int ar7_00;
  int ar6_01;
  int ar5_00;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6_00,ar7,in_PR);
  FUN_8c25b5d0(0,ar5,ar6_00,ar7,in_PR);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,ar6[2]);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,ar6[1]);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_01 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_01 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*ar6);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar3 / dVar3);
  }
  FUN_8c256b0c(0,ar5_00,ar6_01,ar7_00,in_PR);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5_00,ar6_01,ar7_00);
  uVar1 = FUN_8c256210(1,ar5_00,ar6_01,ar7_00);
  return uVar1;
}



/* Class_1298b8_m4_0156a0 @ 8c0156a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m4_0156a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_PR);
  FUN_8c256fec(0,ar5,ar6,ar7,in_PR);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}



/* Class_1298b8_m5_015720 @ 8c015720 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m5_015720(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar6_00;
  float fVar2;
  double dVar3;
  undefined4 in_PR;
  int ar7_00;
  int ar6_01;
  int ar5_00;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6_00,ar7,in_PR);
  FUN_8c25b5d0(0,ar5,ar6_00,ar7,in_PR);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,ar6[2]);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,ar6[1]);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_01 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_01 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*ar6);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar3 / dVar3);
  }
  FUN_8c256b0c(0,ar5_00,ar6_01,ar7_00,in_PR);
  FUN_8c256fec(0,ar5_00,ar6_01,ar7_00,in_PR);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5_00,ar6_01,ar7_00);
  uVar1 = FUN_8c256210(1,ar5_00,ar6_01,ar7_00);
  return uVar1;
}



/* Class_1298b8_m6_0157f8 @ 8c0157f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m6_0157f8(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  float fVar2;
  double dVar3;
  undefined4 in_PR;
  int ar7_00;
  int ar6_00;
  int ar5_01;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar5_00 = ar5;
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  FUN_8c256328(0,ar5_00,ar6,ar7,in_PR);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,ar5[2]);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,ar5[1]);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*ar5);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_01 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar5_01 = (int)(dVar3 / dVar3);
  }
  FUN_8c256b0c(0,ar5_01,ar6_00,ar7_00,in_PR);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5_01,ar6_00,ar7_00);
  uVar1 = FUN_8c256210(1,ar5_01,ar6_00,ar7_00);
  return uVar1;
}



/* Class_1298b8_m7_015890 @ 8c015890 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m7_015890(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  float fVar2;
  double dVar3;
  undefined4 in_PR;
  int ar7_00;
  int ar6_00;
  int ar5_01;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar5_00 = ar5;
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  FUN_8c256328(0,ar5_00,ar6,ar7,in_PR);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,ar5[2]);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,ar5[1]);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*ar5);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_01 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar5_01 = (int)(dVar3 / dVar3);
  }
  FUN_8c256b0c(0,ar5_01,ar6_00,ar7_00,in_PR);
  FUN_8c256fec(0,ar5_01,ar6_00,ar7_00,in_PR);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5_01,ar6_00,ar7_00);
  uVar1 = FUN_8c256210(1,ar5_01,ar6_00,ar7_00);
  return uVar1;
}



/* Class_1298b8_m8_015948 @ 8c015948 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_1298b8_m8_015948(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c256fec(0,ar5,ar6,ar7,in_PR);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
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
  undefined4 *ar6_00;
  float fVar2;
  double dVar3;
  int ar7_00;
  int ar6_01;
  int ar5_00;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  FUN_8c256328(0,ar5,ar6,ar7,ar4);
  FUN_8c25b5d0(0,ar5,ar6_00,ar7,ar4);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,ar6[2]);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,ar6[1]);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_01 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_01 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*ar6);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar3 / dVar3);
  }
  FUN_8c256b0c(0,ar5_00,ar6_01,ar7_00,ar4);
  FUN_8c256fec(0,ar5_00,ar6_01,ar7_00,ar4);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5_00,ar6_01,ar7_00);
  uVar1 = FUN_8c256210(1,ar5_00,ar6_01,ar7_00);
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
  
  uVar1 = deref_u32(ar5,ar5,ar6,ar7);
  uVar1 = FUN_8c21ba62(*ar4,uVar1,ar6,ar7,ar4);
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
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = &DAT_8c1298ac, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
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
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = &DAT_8c12988c, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
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
  (*(code *)PTR_FUN_8c015d68)
            (auStack_10c,ar5,ar6,ar7,PTR_s_Failed_to_load_texture___8c015d60 + DAT_8c015d64);
  (*(code *)PTR_report_error_message_8c015d70)
            (auStack_10c,PTR_s_Failed_to_load_texture___8c015d60 + DAT_8c015d6c,1,2);
  return 0;
}



/* FUN_8c015d74 @ 8c015d74 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c015d9e) */
/* WARNING: Removing unreachable block (ram,0x8c015d92) */
/* WARNING: Removing unreachable block (ram,0x8c015d86) */
/* WARNING: Removing unreachable block (ram,0x8c015d7e) */
/* WARNING: Removing unreachable block (ram,0x8c015d82) */
/* WARNING: Removing unreachable block (ram,0x8c015d90) */
/* WARNING: Removing unreachable block (ram,0x8c015d9c) */
/* WARNING: Removing unreachable block (ram,0x8c015da4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c015d74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr4;
  
  *(int *)(ar4 + 4) = (int)((ulonglong)in_dr4 >> 0x20);
  *(int *)(ar4 + 8) = (int)in_dr4;
  uVar1 = FUN_8c25748c(ar4 + 4,*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28),ar7);
  return uVar1;
}



/* FUN_8c015dc0 @ 8c015dc0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c015dde) */
/* WARNING: Removing unreachable block (ram,0x8c015dce) */
/* WARNING: Removing unreachable block (ram,0x8c015dc6) */
/* WARNING: Removing unreachable block (ram,0x8c015dd6) */
/* WARNING: Removing unreachable block (ram,0x8c015de4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c015dc0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x18) = ar5;
  *(undefined4 *)(ar4 + 0x10) = in_fr4;
  *(undefined4 *)(ar4 + 0x14) = in_fr5;
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

/* WARNING: Removing unreachable block (ram,0x8c015edc) */
/* WARNING: Removing unreachable block (ram,0x8c015ed2) */
/* WARNING: Removing unreachable block (ram,0x8c015eca) */
/* WARNING: Removing unreachable block (ram,0x8c015ec2) */
/* WARNING: Removing unreachable block (ram,0x8c015eb0) */
/* WARNING: Removing unreachable block (ram,0x8c015ea6) */
/* WARNING: Removing unreachable block (ram,0x8c015e9e) */
/* WARNING: Removing unreachable block (ram,0x8c015e96) */
/* WARNING: Removing unreachable block (ram,0x8c015e88) */
/* WARNING: Removing unreachable block (ram,0x8c015e7e) */
/* WARNING: Removing unreachable block (ram,0x8c015e76) */
/* WARNING: Removing unreachable block (ram,0x8c015e6e) */
/* WARNING: Removing unreachable block (ram,0x8c015e60) */
/* WARNING: Removing unreachable block (ram,0x8c015e56) */
/* WARNING: Removing unreachable block (ram,0x8c015e4e) */
/* WARNING: Removing unreachable block (ram,0x8c015e46) */
/* WARNING: Removing unreachable block (ram,0x8c015e4a) */
/* WARNING: Removing unreachable block (ram,0x8c015e52) */
/* WARNING: Removing unreachable block (ram,0x8c015e5a) */
/* WARNING: Removing unreachable block (ram,0x8c015e66) */
/* WARNING: Removing unreachable block (ram,0x8c015e72) */
/* WARNING: Removing unreachable block (ram,0x8c015e7a) */
/* WARNING: Removing unreachable block (ram,0x8c015e82) */
/* WARNING: Removing unreachable block (ram,0x8c015e8e) */
/* WARNING: Removing unreachable block (ram,0x8c015e9a) */
/* WARNING: Removing unreachable block (ram,0x8c015ea2) */
/* WARNING: Removing unreachable block (ram,0x8c015eaa) */
/* WARNING: Removing unreachable block (ram,0x8c015eb6) */
/* WARNING: Removing unreachable block (ram,0x8c015ec6) */
/* WARNING: Removing unreachable block (ram,0x8c015ece) */
/* WARNING: Removing unreachable block (ram,0x8c015ed6) */
/* WARNING: Removing unreachable block (ram,0x8c015ee2) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c015e40(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
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
  
  uStack_64 = 0x42c80000;
  uStack_60 = 0x42c80000;
  uStack_5c = 0x3f000000;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0xffffffff;
  uStack_4c = 0x42c80000;
  uStack_48 = 0x43960000;
  uStack_44 = 0x3f000000;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  uStack_38 = 0xffffffff;
  uStack_34 = 0x43960000;
  uStack_30 = 0x42c80000;
  uStack_2c = 0x3f000000;
  uStack_28 = 0x3f800000;
  uStack_24 = 0;
  uStack_20 = 0xffffffff;
  uStack_1c = 0x43960000;
  uStack_18 = 0x43960000;
  uStack_14 = 0x3f000000;
  uStack_10 = 0x3f800000;
  uStack_c = 0x3f800000;
  uStack_8 = 0xffffffff;
  uVar1 = FUN_8c234bc0(&uStack_64,4,10000,0);
  return uVar1;
}



/* s_Error_015f22 @ 8c015f18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Error_015f22(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_ffffffdc;
  
  sVar1 = **(short **)(ar4 + 0x20);
  sVar2 = *(short *)(*(int *)(ar4 + 0x20) + 2);
  uVar3 = malloc_thunk(0x2000,ar5,ar6,ar7);
  FUN_8c257188(ar4 + 0x2c,uVar3,0xb01,(int)sVar1,(int)sVar2,in_stack_ffffffdc);
  ar7_00 = 0x40800000;
  ar6_00 = 10000;
  ar5_00 = ar4 + 0x2c;
  FUN_8c257196(**(undefined4 **)(ar4 + 0x1c),ar5_00,10000,0x40800000,in_stack_ffffffdc);
  iVar4 = FUN_8c25b3a2(*(undefined4 *)(ar4 + 0x1c),ar5_00,ar6_00,ar7_00);
  if (iVar4 == -1) {
    ar7_00 = 0xd;
    ar6_00 = 0;
    ar5_00 = 0;
    noop_102824("Error",0,0,0xd,0xffffffff);
  }
  FUN_8c25b100((int)**(short **)(ar4 + 0x20),ar5_00,ar6_00,ar7_00);
  uVar3 = FUN_8c1fb57c(uVar3,ar5_00,ar6_00,ar7_00);
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

/* WARNING: Removing unreachable block (ram,0x8c016048) */
/* WARNING: Removing unreachable block (ram,0x8c01603c) */
/* WARNING: Removing unreachable block (ram,0x8c016030) */
/* WARNING: Removing unreachable block (ram,0x8c016022) */
/* WARNING: Removing unreachable block (ram,0x8c01601e) */
/* WARNING: Removing unreachable block (ram,0x8c016026) */
/* WARNING: Removing unreachable block (ram,0x8c016032) */
/* WARNING: Removing unreachable block (ram,0x8c01603e) */
/* WARNING: Removing unreachable block (ram,0x8c01604a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c016014(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 4) = in_fr4;
  *(undefined4 *)(ar4 + 8) = in_fr5;
  *(undefined4 *)(ar4 + 0xc) = in_fr6;
  uVar1 = FUN_8c25754c(ar4 + 4,*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28),ar7);
  return uVar1;
}



/* FUN_8c016068 @ 8c016068 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c01609e) */
/* WARNING: Removing unreachable block (ram,0x8c016092) */
/* WARNING: Removing unreachable block (ram,0x8c016086) */
/* WARNING: Removing unreachable block (ram,0x8c016076) */
/* WARNING: Removing unreachable block (ram,0x8c016072) */
/* WARNING: Removing unreachable block (ram,0x8c01607a) */
/* WARNING: Removing unreachable block (ram,0x8c016088) */
/* WARNING: Removing unreachable block (ram,0x8c016094) */
/* WARNING: Removing unreachable block (ram,0x8c0160a0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c016068(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 4) = in_fr4;
  *(undefined4 *)(ar4 + 8) = in_fr5;
  *(undefined4 *)(ar4 + 0xc) = in_fr6;
  *(undefined4 *)(ar4 + 0x24) = ar5;
  uVar1 = FUN_8c25754c(ar4 + 4,*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28),ar7);
  return uVar1;
}



/* s_C3DRenderPly_SetMem_0160d0 @ 8c0160c4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c01614c) */
/* WARNING: Removing unreachable block (ram,0x8c01614a) */
/* WARNING: Removing unreachable block (ram,0x8c016102) */
/* WARNING: Removing unreachable block (ram,0x8c016126) */
/* WARNING: Removing unreachable block (ram,0x8c016104) */
/* WARNING: Removing unreachable block (ram,0x8c016128) */
/* WARNING: Unknown calling convention */

undefined4 s_C3DRenderPly_SetMem_0160d0(int ar4,int ar5,int ar6,short *ar7,undefined4 s0,int s4)

{
  int ar5_00;
  int ar5_01;
  undefined4 ar7_00;
  uint uVar1;
  undefined4 in_stack_ffffffb4;
  
  *(undefined4 *)(ar4 + 0x10) = 4;
  for (uVar1 = 0; uVar1 < *(uint *)(ar4 + 0x10); uVar1 = uVar1 + 1) {
    *(undefined4 *)(uVar1 * 0xc + *(int *)(ar4 + 4)) = *(undefined4 *)(ar5 + uVar1 * 0x10);
    *(undefined4 *)(uVar1 * 0xc + *(int *)(ar4 + 4) + 4) = *(undefined4 *)(ar5 + uVar1 * 0x10 + 4);
    *(undefined4 *)(uVar1 * 0xc + *(int *)(ar4 + 4) + 8) = *(undefined4 *)(ar5 + uVar1 * 0x10 + 8);
    *(undefined4 *)(uVar1 * 4 + *(int *)(ar4 + 8)) = *(undefined4 *)(uVar1 * 4 + ar6);
  }
  *(undefined4 *)(ar4 + 0x90) = 1;
  **(undefined2 **)(ar4 + 0xc) = 0;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 2) = 0;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 4) = 0;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 6) = 0xff;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 8) = 0xff;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 10) = 0;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 0xc) = 0xff;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 0xe) = 0xff;
  ar5_00 = FUN_8c1fb4b8((int)*ar7 * (int)ar7[1] * s4,ar5,ar6,ar7);
  if (ar5_00 == 0) {
    report_error_message("Lack of memory!","C3DRenderPly::SetMem()",1,2);
  }
  FUN_8c257188(ar4 + 0xa0,ar5_00,0xb01,(int)*ar7,(int)ar7[1],in_stack_ffffffb4);
  ar7_00 = 0x40800000;
  ar5_01 = ar4 + 0xa0;
  FUN_8c257196(*(undefined4 *)(ar4 + 0x8c),ar5_01,s0,0x40800000,in_stack_ffffffb4);
  FUN_8c25b3a2(ar4 + 0x8c,ar5_01,s0,ar7_00);
  FUN_8c25b100((int)*ar7,ar5_01,s0,ar7_00);
  FUN_8c1fb586(ar5_00,ar5_01,s0,ar7_00);
  *(uint *)(ar4 + 0xcc) = *(uint *)(ar4 + 0xcc) | 0x80000000;
  *(uint *)(ar4 + 0xcc) = *(uint *)(ar4 + 0xcc) | 0x20;
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

/* WARNING: Removing unreachable block (ram,0x8c0163e0) */
/* WARNING: Removing unreachable block (ram,0x8c0163da) */
/* WARNING: Removing unreachable block (ram,0x8c0163d0) */
/* WARNING: Removing unreachable block (ram,0x8c0163c8) */
/* WARNING: Removing unreachable block (ram,0x8c0163c2) */
/* WARNING: Removing unreachable block (ram,0x8c0163b8) */
/* WARNING: Removing unreachable block (ram,0x8c0163b0) */
/* WARNING: Removing unreachable block (ram,0x8c0163aa) */
/* WARNING: Removing unreachable block (ram,0x8c0163a0) */
/* WARNING: Removing unreachable block (ram,0x8c016398) */
/* WARNING: Removing unreachable block (ram,0x8c016392) */
/* WARNING: Removing unreachable block (ram,0x8c016388) */
/* WARNING: Removing unreachable block (ram,0x8c016380) */
/* WARNING: Removing unreachable block (ram,0x8c01637a) */
/* WARNING: Removing unreachable block (ram,0x8c01636c) */
/* WARNING: Removing unreachable block (ram,0x8c01636e) */
/* WARNING: Removing unreachable block (ram,0x8c01637c) */
/* WARNING: Removing unreachable block (ram,0x8c016386) */
/* WARNING: Removing unreachable block (ram,0x8c01638c) */
/* WARNING: Removing unreachable block (ram,0x8c016394) */
/* WARNING: Removing unreachable block (ram,0x8c01639e) */
/* WARNING: Removing unreachable block (ram,0x8c0163a4) */
/* WARNING: Removing unreachable block (ram,0x8c0163ac) */
/* WARNING: Removing unreachable block (ram,0x8c0163b6) */
/* WARNING: Removing unreachable block (ram,0x8c0163bc) */
/* WARNING: Removing unreachable block (ram,0x8c0163c4) */
/* WARNING: Removing unreachable block (ram,0x8c0163ce) */
/* WARNING: Removing unreachable block (ram,0x8c0163d4) */
/* WARNING: Removing unreachable block (ram,0x8c0163dc) */
/* WARNING: Removing unreachable block (ram,0x8c0163ee) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c01636c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 in_dr4;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  fStack_1c = (float)((ulonglong)in_dr4 >> 0x20);
  fStack_18 = (float)in_dr4;
  fStack_34 = *(float *)*ar4 + fStack_1c;
  fStack_30 = *(float *)(*ar4 + 4) + fStack_18;
  fStack_2c = *(float *)(*ar4 + 8) + fStack_1c;
  fStack_28 = *(float *)(*ar4 + 0xc) + fStack_18;
  fStack_24 = *(float *)(*ar4 + 0x10) + fStack_1c;
  fStack_20 = *(float *)(*ar4 + 0x14) + fStack_18;
  fStack_1c = *(float *)(*ar4 + 0x18) + fStack_1c;
  fStack_18 = *(float *)(*ar4 + 0x1c) + fStack_18;
  iVar2 = *ar4;
  *ar4 = (int)&fStack_34;
  uVar1 = FUN_8c235b6c(ar4,ar4[3],ar4[4],ar7);
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

/* WARNING: Removing unreachable block (ram,0x8c0165e2) */
/* WARNING: Removing unreachable block (ram,0x8c0165d8) */
/* WARNING: Removing unreachable block (ram,0x8c0165cc) */
/* WARNING: Removing unreachable block (ram,0x8c0165bc) */
/* WARNING: Removing unreachable block (ram,0x8c0165b0) */
/* WARNING: Removing unreachable block (ram,0x8c0165a4) */
/* WARNING: Removing unreachable block (ram,0x8c01659c) */
/* WARNING: Removing unreachable block (ram,0x8c016590) */
/* WARNING: Removing unreachable block (ram,0x8c01659a) */
/* WARNING: Removing unreachable block (ram,0x8c0165a0) */
/* WARNING: Removing unreachable block (ram,0x8c0165ae) */
/* WARNING: Removing unreachable block (ram,0x8c0165ba) */
/* WARNING: Removing unreachable block (ram,0x8c0165c2) */
/* WARNING: Removing unreachable block (ram,0x8c0165ce) */
/* WARNING: Removing unreachable block (ram,0x8c0165da) */
/* WARNING: Removing unreachable block (ram,0x8c0165e4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c016584(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  ar4[8] = 0;
  ar4[7] = 0;
  ar4[6] = 0;
  ar4[0xb] = 0;
  ar4[9] = 0;
  ar4[10] = 0x42c80000;
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
  uVar1 = FUN_8c016658(ar4,ar5,ar6,ar7);
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
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
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

/* WARNING: Removing unreachable block (ram,0x8c0166ce) */
/* WARNING: Removing unreachable block (ram,0x8c0166c8) */
/* WARNING: Removing unreachable block (ram,0x8c0166b8) */
/* WARNING: Removing unreachable block (ram,0x8c0166b4) */
/* WARNING: Removing unreachable block (ram,0x8c0166b6) */
/* WARNING: Removing unreachable block (ram,0x8c0166ba) */
/* WARNING: Removing unreachable block (ram,0x8c0166ca) */
/* WARNING: Removing unreachable block (ram,0x8c0166d2) */
/* WARNING: Unknown calling convention */

undefined4 Class_129808_m6_0166b4(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *ar5_00;
  int iVar2;
  int ar5_01;
  undefined1 auStack_64 [20];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [36];
  
  iVar2 = ar5;
  ar5_01 = ar6;
  FUN_8c0162f8(auStack_64,ar5,ar6,ar7);
  FUN_8c01688c(ar4,iVar2,ar6,ar7);
  FUN_8c015198(auStack_64,ar5_01,ar6,ar7,ar5_01);
  for (iVar2 = 0; *(char *)(iVar2 + ar5) != '\0'; iVar2 = iVar2 + 1) {
    FUN_8c01679c(ar4,(int)*(char *)(iVar2 + ar5),auStack_50,ar7);
    FUN_8c0168b4(ar4,iVar2,auStack_40,ar7);
    ar7 = 4;
    ar6 = ar4 + 0x1c;
    FUN_8c016318(auStack_64,auStack_40,ar6,4,ar5_01);
    ar5_00 = auStack_50;
    FUN_8c016324(auStack_64,ar5_00,ar6,ar7);
    FUN_8c016340(auStack_64,ar5_00,ar6,ar7);
  }
  uVar1 = free_if_nonnull_wrap_0151a0(auStack_64,0xffffffff,ar6,ar7);
  return uVar1;
}



/* FUN_8c01679c @ 8c01679c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c01679c(int ar4,undefined4 ar5,short *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  short *ar6_00;
  int iVar2;
  
  iVar2 = (char)ar5 + -0x20;
  ar6_00 = ar6;
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c016884)(iVar2,0x10,ar6,ar7);
  *ar6 = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c016888)(iVar2,0x10,ar6_00,ar7);
  ar6[1] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x18) + (short)*(undefined4 *)(ar4 + 0x18);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c016884)(iVar2,0x10,ar6_00,ar7);
  ar6[2] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c016888)(iVar2,0x10,ar6_00,ar7);
  ar6[3] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x18);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c016884)(iVar2,0x10,ar6_00,ar7);
  ar6[4] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14) + (short)*(undefined4 *)(ar4 + 0x14);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c016888)(iVar2,0x10,ar6_00,ar7);
  ar6[5] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x18);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c016884)(iVar2,0x10,ar6_00,ar7);
  ar6[6] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14) + (short)*(undefined4 *)(ar4 + 0x14);
  iVar2 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c016888)(iVar2,0x10,ar6_00,ar7);
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

/* WARNING: Removing unreachable block (ram,0x8c016942) */
/* WARNING: Removing unreachable block (ram,0x8c01693e) */
/* WARNING: Removing unreachable block (ram,0x8c016934) */
/* WARNING: Removing unreachable block (ram,0x8c016930) */
/* WARNING: Removing unreachable block (ram,0x8c016928) */
/* WARNING: Removing unreachable block (ram,0x8c016922) */
/* WARNING: Removing unreachable block (ram,0x8c016916) */
/* WARNING: Removing unreachable block (ram,0x8c01690e) */
/* WARNING: Removing unreachable block (ram,0x8c01690a) */
/* WARNING: Removing unreachable block (ram,0x8c016902) */
/* WARNING: Removing unreachable block (ram,0x8c0168fc) */
/* WARNING: Removing unreachable block (ram,0x8c0168f0) */
/* WARNING: Removing unreachable block (ram,0x8c0168e8) */
/* WARNING: Removing unreachable block (ram,0x8c0168e4) */
/* WARNING: Removing unreachable block (ram,0x8c0168de) */
/* WARNING: Removing unreachable block (ram,0x8c0168d2) */
/* WARNING: Removing unreachable block (ram,0x8c0168ce) */
/* WARNING: Removing unreachable block (ram,0x8c0168c2) */
/* WARNING: Removing unreachable block (ram,0x8c0168be) */
/* WARNING: Removing unreachable block (ram,0x8c0168b8) */
/* WARNING: Removing unreachable block (ram,0x8c0168ba) */
/* WARNING: Removing unreachable block (ram,0x8c0168c0) */
/* WARNING: Removing unreachable block (ram,0x8c0168c4) */
/* WARNING: Removing unreachable block (ram,0x8c0168d0) */
/* WARNING: Removing unreachable block (ram,0x8c0168d4) */
/* WARNING: Removing unreachable block (ram,0x8c0168e0) */
/* WARNING: Removing unreachable block (ram,0x8c0168e6) */
/* WARNING: Removing unreachable block (ram,0x8c0168ea) */
/* WARNING: Removing unreachable block (ram,0x8c0168fa) */
/* WARNING: Removing unreachable block (ram,0x8c016900) */
/* WARNING: Removing unreachable block (ram,0x8c016904) */
/* WARNING: Removing unreachable block (ram,0x8c01690c) */
/* WARNING: Removing unreachable block (ram,0x8c016910) */
/* WARNING: Removing unreachable block (ram,0x8c016920) */
/* WARNING: Removing unreachable block (ram,0x8c016926) */
/* WARNING: Removing unreachable block (ram,0x8c01692a) */
/* WARNING: Removing unreachable block (ram,0x8c016932) */
/* WARNING: Removing unreachable block (ram,0x8c016936) */
/* WARNING: Removing unreachable block (ram,0x8c016940) */
/* WARNING: Removing unreachable block (ram,0x8c016944) */
/* WARNING: Unknown calling convention */

int FUN_8c0168b4(int ar4,int ar5,float *ar6,undefined4 ar7)

{
  int iVar1;
  float in_fr5;
  float in_fr4;
  float in_fr6;
  
  *ar6 = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4;
  ar6[1] = (float)*(int *)(ar4 + 0x10) * in_fr6 + in_fr5;
  ar6[2] = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4;
  ar6[3] = in_fr5;
  ar6[4] = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4 +
           (float)*(int *)(ar4 + 0xc) * in_fr6;
  ar6[5] = in_fr5;
  ar6[6] = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4 +
           (float)*(int *)(ar4 + 0xc) * in_fr6;
  iVar1 = *(int *)(ar4 + 0x10);
  ar6[7] = (float)iVar1 * in_fr6 + in_fr5;
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

/* WARNING: Removing unreachable block (ram,0x8c016a72) */
/* WARNING: Removing unreachable block (ram,0x8c016a6c) */
/* WARNING: Removing unreachable block (ram,0x8c016a68) */
/* WARNING: Removing unreachable block (ram,0x8c016a64) */
/* WARNING: Removing unreachable block (ram,0x8c016a5c) */
/* WARNING: Removing unreachable block (ram,0x8c016a58) */
/* WARNING: Removing unreachable block (ram,0x8c016a52) */
/* WARNING: Removing unreachable block (ram,0x8c016a4a) */
/* WARNING: Removing unreachable block (ram,0x8c016a42) */
/* WARNING: Removing unreachable block (ram,0x8c016a3a) */
/* WARNING: Removing unreachable block (ram,0x8c016a36) */
/* WARNING: Removing unreachable block (ram,0x8c016a2a) */
/* WARNING: Removing unreachable block (ram,0x8c016a20) */
/* WARNING: Removing unreachable block (ram,0x8c016a26) */
/* WARNING: Removing unreachable block (ram,0x8c016a34) */
/* WARNING: Removing unreachable block (ram,0x8c016a38) */
/* WARNING: Removing unreachable block (ram,0x8c016a3c) */
/* WARNING: Removing unreachable block (ram,0x8c016a48) */
/* WARNING: Removing unreachable block (ram,0x8c016a4c) */
/* WARNING: Removing unreachable block (ram,0x8c016a56) */
/* WARNING: Removing unreachable block (ram,0x8c016a5a) */
/* WARNING: Removing unreachable block (ram,0x8c016a5e) */
/* WARNING: Removing unreachable block (ram,0x8c016a66) */
/* WARNING: Removing unreachable block (ram,0x8c016a6a) */
/* WARNING: Removing unreachable block (ram,0x8c016a70) */
/* WARNING: Removing unreachable block (ram,0x8c016a74) */
/* WARNING: Unknown calling convention */

int FUN_8c016a20(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(float *)(ar4 + 4) == 0.0) {
    *(undefined4 *)(ar4 + 4) = 0x38d1b717;
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
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* Class_1299b0_m0_016af4 @ 8c016af4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_1299b0_m0_016af4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c1299b0;
    free_if_nonnull_wrap_016ac4(ar4 + 8,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 5,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 1,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
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

/* WARNING: Removing unreachable block (ram,0x8c016b64) */
/* WARNING: Removing unreachable block (ram,0x8c016b6e) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c016b64(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  undefined4 in_fr4;
  undefined8 in_xd14;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c016a7c(ar4,ar5,ar6,ar7);
  *ar4 = &DAT_8c129974;
  FUN_8c015ab8(ar4 + 0x10,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    ar4[0xc] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xc) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xd] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xd) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xe] = 0;
    ar4[0xf] = in_fr4;
    ar4[10] = in_fr4;
    ar4[9] = in_fr4;
    ar4[8] = in_fr4;
  }
  else {
    *(ulonglong *)(ar4 + 0xe) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0xf) = in_xd14;
    *(undefined8 *)(ar4 + 10) = in_xd14;
    *(undefined8 *)(ar4 + 9) = in_xd14;
    *(undefined8 *)(ar4 + 8) = in_xd14;
  }
  FUN_8c016fa4(ar4,ar5,ar6,ar7);
  return ar4;
}



/* free_if_nonnull_wrap_016bfc @ 8c016bfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_016bfc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* Class_129974_m0_016c2c @ 8c016c2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_129974_m0_016c2c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129974;
    free_if_nonnull_wrap_016bfc(ar4 + 0x10,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_1299b0_m0_016af4(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c016c84 @ 8c016c84 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c016ce0) */
/* WARNING: Removing unreachable block (ram,0x8c016cd8) */
/* WARNING: Removing unreachable block (ram,0x8c016cca) */
/* WARNING: Removing unreachable block (ram,0x8c016cc4) */
/* WARNING: Removing unreachable block (ram,0x8c016cb8) */
/* WARNING: Removing unreachable block (ram,0x8c016caa) */
/* WARNING: Removing unreachable block (ram,0x8c016ca4) */
/* WARNING: Removing unreachable block (ram,0x8c016c98) */
/* WARNING: Removing unreachable block (ram,0x8c016c8a) */
/* WARNING: Removing unreachable block (ram,0x8c016c8e) */
/* WARNING: Removing unreachable block (ram,0x8c016c9a) */
/* WARNING: Removing unreachable block (ram,0x8c016ca6) */
/* WARNING: Removing unreachable block (ram,0x8c016cae) */
/* WARNING: Removing unreachable block (ram,0x8c016cba) */
/* WARNING: Removing unreachable block (ram,0x8c016cc6) */
/* WARNING: Removing unreachable block (ram,0x8c016cce) */
/* WARNING: Removing unreachable block (ram,0x8c016cda) */
/* WARNING: Removing unreachable block (ram,0x8c016ce2) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c016c84(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *ar5;
  *(undefined4 *)(ar4 + 0x30) = uVar1;
  *(undefined4 *)(ar4 + 4) = uVar1;
  uVar1 = ar5[1];
  *(undefined4 *)(ar4 + 0x34) = uVar1;
  *(undefined4 *)(ar4 + 8) = uVar1;
  uVar1 = ar5[2];
  *(undefined4 *)(ar4 + 0x38) = uVar1;
  *(undefined4 *)(ar4 + 0xc) = uVar1;
  return 0;
}



/* FUN_8c016cec @ 8c016cec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

float * FUN_8c016cec(int ar4,undefined8 *ar5,undefined4 ar6,undefined8 *ar7,int *s0)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 in_xd0;
  undefined4 in_PR;
  char cVar6;
  char cVar7;
  undefined1 auStack_20 [12];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uVar5;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uStack_10 = in_PR;
  (**(code **)(*s0 + 0x34))(s0,auStack_20,ar6,ar7);
  if (cVar7 == '\0') {
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
  if (cVar6 == '\0') {
    fVar2 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar7 == '\0') {
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
  undefined4 in_PR;
  
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_PR);
  FUN_8c256fec(0,ar5,ar6,ar7,in_PR);
  FUN_8c015af8(ar4 + 0x40,ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
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

/* WARNING: Removing unreachable block (ram,0x8c016e90) */
/* WARNING: Removing unreachable block (ram,0x8c016e88) */
/* WARNING: Removing unreachable block (ram,0x8c016e7c) */
/* WARNING: Removing unreachable block (ram,0x8c016e74) */
/* WARNING: Removing unreachable block (ram,0x8c016e76) */
/* WARNING: Removing unreachable block (ram,0x8c016e7e) */
/* WARNING: Removing unreachable block (ram,0x8c016e8a) */
/* WARNING: Removing unreachable block (ram,0x8c016e92) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c016e6c(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ar5[3] = *(undefined4 *)(ar4 + 0x3c);
  *ar5 = *(undefined4 *)(ar4 + 0x30);
  ar5[1] = *(undefined4 *)(ar4 + 0x34);
  ar5[2] = *(undefined4 *)(ar4 + 0x38);
  return (undefined4 *)(ar4 + 0x34);
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

/* WARNING: Removing unreachable block (ram,0x8c016f3e) */
/* WARNING: Removing unreachable block (ram,0x8c016f3c) */
/* WARNING: Removing unreachable block (ram,0x8c016ef4) */
/* WARNING: Removing unreachable block (ram,0x8c016f18) */
/* WARNING: Removing unreachable block (ram,0x8c016ef6) */
/* WARNING: Removing unreachable block (ram,0x8c016f1a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c016ecc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 0xc + ar5) = *(undefined4 *)(iVar1 * 0xc + ar4 + 0x30);
    *(undefined4 *)(iVar1 * 0xc + ar5 + 4) = *(undefined4 *)(iVar1 * 0xc + ar4 + 0x34);
    *(undefined4 *)(iVar1 * 0xc + ar5 + 8) = *(undefined4 *)(iVar1 * 0xc + ar4 + 0x38);
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
  undefined4 in_PR;
  
  FUN_8c015ad4(ar4 + 0x40,&DAT_8c12f1b8,ar6,ar7,in_PR);
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

int * FUN_8c017010(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
                  ,undefined4 s8,undefined4 s12,undefined4 s16)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (*(code *)PTR_FUN_8c017070)(ar4,ar5,ar6,ar7);
  *ar4 = (int)PTR_DAT_8c017074;
  (*(code *)PTR_FUN_8c01707c)((int)ar4 + DAT_8c017078,ar5_00,ar6_00,ar7_00);
  (**(code **)(*ar4 + 0x2c))(ar4,ar5,ar6,ar7,s0,s4,s8,s12,s16);
  (*(code *)PTR_FUN_8c017080)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* Class_129938_m0_017084 @ 8c017084 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_129938_m0_017084(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129938;
    free_if_nonnull_wrap_016bfc(ar4 + 0x24,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_1299b0_m0_016af4(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_129938_m1_0170e0 @ 8c0170e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129938_m1_0170e0(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  undefined4 ar6_00;
  float fVar1;
  double dVar2;
  int ar7_00;
  int iVar3;
  int ar5_00;
  char cVar4;
  char cVar5;
  undefined1 auStack_ac [64];
  undefined1 auStack_6c [100];
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  (**(code **)(*ar7 + 0x38))(ar7,auStack_6c,ar6,ar7);
  Vec3_assign(ar4 + 4,ar5,ar6_00,ar7);
  vec3_copy_8c023d8c(ar4 + 0x14,ar6,ar6_00,ar7);
  FUN_8c25cddc(auStack_ac,ar6,ar6_00,ar7,ar5);
  FUN_8c25b5d0(auStack_ac,ar6,ar6_00,ar7,ar5);
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x1c));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x18));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    iVar3 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar2 / dVar2);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x14));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar2 / dVar2);
  }
  FUN_8c256b0c(auStack_ac,ar5_00,iVar3,ar7_00,ar5);
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    FUN_8c212740(auStack_ac,auStack_6c + iVar3 * 0xc,iVar3 * 0xc + ar4 + 0x30,ar7_00,ar5);
  }
  return 8;
}



/* Class_129938_m2_0171f4 @ 8c0171f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129938_m2_0171f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar1;
  double dVar2;
  int ar7_01;
  int iVar3;
  int ar5_00;
  char cVar4;
  char cVar5;
  int *in_stack_00000000;
  undefined1 auStack_ac [64];
  undefined1 auStack_6c [100];
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  (**(code **)(*in_stack_00000000 + 0x38))(in_stack_00000000,auStack_6c,ar6,ar7);
  Vec3_assign(ar4 + 4,ar5,ar6_00,ar7_00);
  vec3_copy_8c023d8c(ar4 + 0x14,ar6,ar6_00,ar7_00);
  FUN_8c023e04(ar4 + 0x20,ar7,ar6_00,ar7_00);
  FUN_8c25cddc(auStack_ac,ar7,ar6_00,ar7_00,ar5);
  FUN_8c25b5d0(auStack_ac,ar7,ar6_00,ar7_00,ar5);
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x1c));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_01 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar7_01 = (int)(dVar2 / dVar2);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x18));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    iVar3 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar2 / dVar2);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x14));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar2 / dVar2);
  }
  FUN_8c256b0c(auStack_ac,ar5_00,iVar3,ar7_01,ar5);
  FUN_8c256fec(auStack_ac,ar5_00,iVar3,ar7_01,ar5);
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    FUN_8c212740(auStack_ac,auStack_6c + iVar3 * 0xc,iVar3 * 0xc + ar4 + 0x30,ar7_01,ar5);
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
  char cVar6;
  
  cVar6 = '\0';
  iVar1 = FUN_8c015bb8(ar4 + 0x90,ar5,ar6,ar7);
  iVar1 = **(int **)(iVar1 + 4) + 8;
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    puVar4 = (undefined8 *)(iVar5 * 0x18 + iVar1);
    puVar3 = (undefined8 *)(iVar5 * 0xc + ar4 + 0x30);
    if (cVar6 == '\0') {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
    }
    else {
      *puVar4 = *puVar3;
    }
    puVar4 = (undefined8 *)(iVar5 * 0x18 + iVar1 + 4);
    puVar3 = (undefined8 *)(iVar5 * 0xc + ar4 + 0x34);
    if (cVar6 == '\0') {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
    }
    else {
      *puVar4 = *puVar3;
    }
    puVar4 = (undefined8 *)(iVar5 * 0x18 + iVar1 + 8);
    puVar3 = (undefined8 *)(iVar5 * 0xc + ar4 + 0x38);
    if (cVar6 == '\0') {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
    }
    else {
      *puVar4 = *puVar3;
    }
  }
  uVar2 = FUN_8c015af8(ar4 + 0x90,ar5,ar6,ar7);
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

/* WARNING: Removing unreachable block (ram,0x8c0175b8) */
/* WARNING: Removing unreachable block (ram,0x8c0175ac) */
/* WARNING: Removing unreachable block (ram,0x8c01759e) */
/* WARNING: Removing unreachable block (ram,0x8c017594) */
/* WARNING: Removing unreachable block (ram,0x8c017588) */
/* WARNING: Removing unreachable block (ram,0x8c01757c) */
/* WARNING: Removing unreachable block (ram,0x8c017574) */
/* WARNING: Removing unreachable block (ram,0x8c017568) */
/* WARNING: Removing unreachable block (ram,0x8c01755c) */
/* WARNING: Removing unreachable block (ram,0x8c017552) */
/* WARNING: Removing unreachable block (ram,0x8c017546) */
/* WARNING: Removing unreachable block (ram,0x8c01753a) */
/* WARNING: Removing unreachable block (ram,0x8c017532) */
/* WARNING: Removing unreachable block (ram,0x8c017526) */
/* WARNING: Removing unreachable block (ram,0x8c01751a) */
/* WARNING: Removing unreachable block (ram,0x8c017512) */
/* WARNING: Removing unreachable block (ram,0x8c017506) */
/* WARNING: Removing unreachable block (ram,0x8c0174fa) */
/* WARNING: Removing unreachable block (ram,0x8c0174f0) */
/* WARNING: Removing unreachable block (ram,0x8c0174e4) */
/* WARNING: Removing unreachable block (ram,0x8c0174d8) */
/* WARNING: Removing unreachable block (ram,0x8c0174d0) */
/* WARNING: Removing unreachable block (ram,0x8c0174c4) */
/* WARNING: Removing unreachable block (ram,0x8c0174b8) */
/* WARNING: Removing unreachable block (ram,0x8c0174ba) */
/* WARNING: Removing unreachable block (ram,0x8c0174c6) */
/* WARNING: Removing unreachable block (ram,0x8c0174d2) */
/* WARNING: Removing unreachable block (ram,0x8c0174da) */
/* WARNING: Removing unreachable block (ram,0x8c0174e6) */
/* WARNING: Removing unreachable block (ram,0x8c0174f2) */
/* WARNING: Removing unreachable block (ram,0x8c0174fc) */
/* WARNING: Removing unreachable block (ram,0x8c017508) */
/* WARNING: Removing unreachable block (ram,0x8c017514) */
/* WARNING: Removing unreachable block (ram,0x8c01751c) */
/* WARNING: Removing unreachable block (ram,0x8c017528) */
/* WARNING: Removing unreachable block (ram,0x8c017534) */
/* WARNING: Removing unreachable block (ram,0x8c01753c) */
/* WARNING: Removing unreachable block (ram,0x8c017548) */
/* WARNING: Removing unreachable block (ram,0x8c017554) */
/* WARNING: Removing unreachable block (ram,0x8c01755e) */
/* WARNING: Removing unreachable block (ram,0x8c01756a) */
/* WARNING: Removing unreachable block (ram,0x8c017576) */
/* WARNING: Removing unreachable block (ram,0x8c01757e) */
/* WARNING: Removing unreachable block (ram,0x8c01758a) */
/* WARNING: Removing unreachable block (ram,0x8c017596) */
/* WARNING: Removing unreachable block (ram,0x8c0175a0) */
/* WARNING: Removing unreachable block (ram,0x8c0175ae) */
/* WARNING: Removing unreachable block (ram,0x8c0175ba) */
/* WARNING: Unknown calling convention */

undefined4
FUN_8c017490(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7,undefined4 *s0,undefined4 *s4,
            undefined4 *s8,undefined4 *s12,undefined4 *s16)

{
  undefined4 *ar6_00;
  undefined4 in_fr1;
  undefined4 uVar2;
  undefined8 uVar1;
  char cVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  cVar3 = '\0';
  *(undefined4 *)(ar4 + 0x30) = *ar5;
  *(undefined4 *)(ar4 + 0x34) = ar5[1];
  *(undefined4 *)(ar4 + 0x38) = ar5[2];
  *(undefined4 *)(ar4 + 0x3c) = *ar6;
  *(undefined4 *)(ar4 + 0x40) = ar6[1];
  *(undefined4 *)(ar4 + 0x44) = ar6[2];
  *(undefined4 *)(ar4 + 0x48) = *ar7;
  *(undefined4 *)(ar4 + 0x4c) = ar7[1];
  *(undefined4 *)(ar4 + 0x50) = ar7[2];
  *(undefined4 *)(ar4 + 0x54) = *s0;
  *(undefined4 *)(ar4 + 0x58) = s0[1];
  *(undefined4 *)(ar4 + 0x5c) = s0[2];
  *(undefined4 *)(ar4 + 0x60) = *s4;
  *(undefined4 *)(ar4 + 100) = s4[1];
  *(undefined4 *)(ar4 + 0x68) = s4[2];
  *(undefined4 *)(ar4 + 0x6c) = *s8;
  *(undefined4 *)(ar4 + 0x70) = s8[1];
  *(undefined4 *)(ar4 + 0x74) = s8[2];
  *(undefined4 *)(ar4 + 0x78) = *s12;
  *(undefined4 *)(ar4 + 0x7c) = s12[1];
  *(undefined4 *)(ar4 + 0x80) = s12[2];
  *(undefined4 *)(ar4 + 0x84) = *s16;
  *(undefined4 *)(ar4 + 0x88) = s16[1];
  uVar2 = s16[2];
  *(undefined4 *)(ar4 + 0x8c) = uVar2;
  ar6_00 = ar6;
  FUN_8c022fc0(ar5,s0,ar6,ar7);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x20) = uVar2;
  }
  else {
    *(ulonglong *)(ar4 + 0x20) = CONCAT44(uVar2,in_fr1);
  }
  uVar1 = CONCAT44(uVar2,in_fr1);
  FUN_8c022fc0(ar5,s4,ar6_00,ar7);
  uStack_28 = (undefined4)uVar1;
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = uVar2;
    uStack_28 = uVar2;
  }
  else {
    *(undefined8 *)(ar4 + 0x24) = uVar1;
  }
  FUN_8c022fc0(ar5,ar6,ar6_00,ar7);
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_2c = uVar2;
  if (cVar3 != '\0') {
    uStack_2c = (undefined4)uVar1;
    uStack_28 = uVar2;
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x28) = uStack_2c;
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = CONCAT44(uStack_28,uStack_2c);
  }
  return 4;
}



/* FUN_8c017630 @ 8c017630 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c01775c) */
/* WARNING: Removing unreachable block (ram,0x8c01774e) */
/* WARNING: Removing unreachable block (ram,0x8c017740) */
/* WARNING: Removing unreachable block (ram,0x8c017732) */
/* WARNING: Removing unreachable block (ram,0x8c017724) */
/* WARNING: Removing unreachable block (ram,0x8c017718) */
/* WARNING: Removing unreachable block (ram,0x8c01770c) */
/* WARNING: Removing unreachable block (ram,0x8c017700) */
/* WARNING: Removing unreachable block (ram,0x8c0176f4) */
/* WARNING: Removing unreachable block (ram,0x8c0176e8) */
/* WARNING: Removing unreachable block (ram,0x8c0176dc) */
/* WARNING: Removing unreachable block (ram,0x8c0176d0) */
/* WARNING: Removing unreachable block (ram,0x8c0176c4) */
/* WARNING: Removing unreachable block (ram,0x8c0176b8) */
/* WARNING: Removing unreachable block (ram,0x8c0176ac) */
/* WARNING: Removing unreachable block (ram,0x8c0176a0) */
/* WARNING: Removing unreachable block (ram,0x8c017694) */
/* WARNING: Removing unreachable block (ram,0x8c017688) */
/* WARNING: Removing unreachable block (ram,0x8c01767c) */
/* WARNING: Removing unreachable block (ram,0x8c017670) */
/* WARNING: Removing unreachable block (ram,0x8c017664) */
/* WARNING: Removing unreachable block (ram,0x8c017658) */
/* WARNING: Removing unreachable block (ram,0x8c01764c) */
/* WARNING: Removing unreachable block (ram,0x8c017640) */
/* WARNING: Removing unreachable block (ram,0x8c017642) */
/* WARNING: Removing unreachable block (ram,0x8c01764e) */
/* WARNING: Removing unreachable block (ram,0x8c01765a) */
/* WARNING: Removing unreachable block (ram,0x8c017666) */
/* WARNING: Removing unreachable block (ram,0x8c017672) */
/* WARNING: Removing unreachable block (ram,0x8c01767e) */
/* WARNING: Removing unreachable block (ram,0x8c01768a) */
/* WARNING: Removing unreachable block (ram,0x8c017696) */
/* WARNING: Removing unreachable block (ram,0x8c0176a2) */
/* WARNING: Removing unreachable block (ram,0x8c0176ae) */
/* WARNING: Removing unreachable block (ram,0x8c0176ba) */
/* WARNING: Removing unreachable block (ram,0x8c0176c6) */
/* WARNING: Removing unreachable block (ram,0x8c0176d2) */
/* WARNING: Removing unreachable block (ram,0x8c0176de) */
/* WARNING: Removing unreachable block (ram,0x8c0176ea) */
/* WARNING: Removing unreachable block (ram,0x8c0176f6) */
/* WARNING: Removing unreachable block (ram,0x8c017702) */
/* WARNING: Removing unreachable block (ram,0x8c01770e) */
/* WARNING: Removing unreachable block (ram,0x8c01771a) */
/* WARNING: Removing unreachable block (ram,0x8c017726) */
/* WARNING: Removing unreachable block (ram,0x8c017734) */
/* WARNING: Removing unreachable block (ram,0x8c017742) */
/* WARNING: Removing unreachable block (ram,0x8c017750) */
/* WARNING: Removing unreachable block (ram,0x8c01775e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c017630(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  undefined4 uVar2;
  undefined8 uVar1;
  char cVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar3 = '\0';
  *(undefined4 *)(ar4 + 0x30) = *ar5;
  *(undefined4 *)(ar4 + 0x34) = ar5[1];
  *(undefined4 *)(ar4 + 0x38) = ar5[2];
  *(undefined4 *)(ar4 + 0x3c) = ar5[4];
  *(undefined4 *)(ar4 + 0x40) = ar5[5];
  *(undefined4 *)(ar4 + 0x44) = ar5[6];
  *(undefined4 *)(ar4 + 0x48) = ar5[8];
  *(undefined4 *)(ar4 + 0x4c) = ar5[9];
  *(undefined4 *)(ar4 + 0x50) = ar5[10];
  *(undefined4 *)(ar4 + 0x54) = ar5[0xc];
  *(undefined4 *)(ar4 + 0x58) = ar5[0xd];
  *(undefined4 *)(ar4 + 0x5c) = ar5[0xe];
  *(undefined4 *)(ar4 + 0x60) = ar5[0x10];
  *(undefined4 *)(ar4 + 100) = ar5[0x11];
  *(undefined4 *)(ar4 + 0x68) = ar5[0x12];
  *(undefined4 *)(ar4 + 0x6c) = ar5[0x14];
  *(undefined4 *)(ar4 + 0x70) = ar5[0x15];
  *(undefined4 *)(ar4 + 0x74) = ar5[0x16];
  *(undefined4 *)(ar4 + 0x78) = ar5[0x18];
  *(undefined4 *)(ar4 + 0x7c) = ar5[0x19];
  *(undefined4 *)(ar4 + 0x80) = ar5[0x1a];
  *(undefined4 *)(ar4 + 0x84) = ar5[0x1c];
  *(undefined4 *)(ar4 + 0x88) = ar5[0x1d];
  uVar2 = ar5[0x1e];
  *(undefined4 *)(ar4 + 0x8c) = uVar2;
  FUN_8c022fc0(ar5,ar5 + 0xc,ar6,ar7);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x20) = uVar2;
  }
  else {
    *(ulonglong *)(ar4 + 0x20) = CONCAT44(uVar2,in_fr1);
  }
  uVar1 = CONCAT44(uVar2,in_fr1);
  FUN_8c022fc0(ar5,ar5 + 0x10,ar6,ar7);
  uStack_14 = (undefined4)uVar1;
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = uVar2;
    uStack_14 = uVar2;
  }
  else {
    *(undefined8 *)(ar4 + 0x24) = uVar1;
  }
  FUN_8c022fc0(ar5,ar5 + 4,ar6,ar7);
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_18 = uVar2;
  if (cVar3 != '\0') {
    uStack_18 = (undefined4)uVar1;
    uStack_14 = uVar2;
  }
  if (cVar3 == '\0') {
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
  undefined4 in_PR;
  
  FUN_8c015ad4(ar4 + 0x90,&DAT_8c12ca68,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x2c) = 1;
  return 1;
}



/* FUN_8c017830 @ 8c017830 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c017830(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c016410(ar4 + 4,ar5,ar6,ar7);
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  if (cVar1 == '\0') {
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

/* WARNING: Removing unreachable block (ram,0x8c017904) */
/* WARNING: Removing unreachable block (ram,0x8c017900) */
/* WARNING: Removing unreachable block (ram,0x8c017902) */
/* WARNING: Removing unreachable block (ram,0x8c017922) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c017900(int ar4,double *ar5,float *ar6,float *ar7)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined8 *puVar4;
  float *pfVar5;
  double *pdVar6;
  float *pfVar7;
  float *ar5_00;
  float *ar7_00;
  short sVar8;
  undefined4 in_fr1;
  undefined4 uVar9;
  float fVar10;
  double dVar11;
  undefined8 uVar12;
  float fVar14;
  float in_fr4;
  undefined4 in_fr12;
  double in_dr14;
  double dVar15;
  undefined8 in_xd0;
  bool bVar16;
  bool bVar17;
  char cVar18;
  char cVar19;
  short asStack_1ce [5];
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  float *pfStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  short *psStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [8];
  undefined8 uStack_64;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [20];
  undefined4 uVar13;
  
  cVar19 = '\0';
  cVar18 = '\0';
  psVar2 = *(short **)(ar4 + 4);
  psStack_d4 = (short *)0x0;
  asStack_1ce[3] = 0;
  sVar1 = 0;
  pdVar6 = ar5;
  pfVar7 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_3c,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_6c,pdVar6,pfVar7,ar7_00);
  Vec3_ctor_zero(auStack_5c,pdVar6,pfVar7,ar7_00);
  Vec3_ctor_zero(auStack_4c,pdVar6,pfVar7,ar7_00);
  Vec3_ctor_zero(&fStack_7c,pdVar6,pfVar7,ar7_00);
  Vec3_ctor_zero(&uStack_8c,pdVar6,pfVar7,ar7_00);
  iVar3 = *(int *)(ar4 + 8);
  if (cVar19 == '\0') {
    uStack_b0 = *(undefined4 *)ar5;
    uStack_ac = *(undefined4 *)((int)ar5 + 4);
    uStack_a8 = *(undefined4 *)(ar5 + 1);
    dVar11 = (double)CONCAT44(uStack_a8,in_fr1);
  }
  else {
    uStack_b0 = SUB84(*ar5,0);
    uStack_ac = (undefined4)*(undefined8 *)((int)ar5 + 4);
    dVar11 = ar5[1];
    uStack_a8 = SUB84(dVar11,0);
    fStack_a4 = (float)((ulonglong)dVar11 >> 0x20);
  }
  asStack_1ce[4] = 0;
  do {
    if (*(int *)(ar4 + 0xc) <= (int)asStack_1ce[4]) {
      if (cVar19 == '\0') {
        ar6[2] = 0.0;
        uStack_1c4 = 0;
        ar6[1] = 0.0;
        *ar6 = 0.0;
      }
      else {
        uStack_1c0 = SUB84(dVar11,0);
        iStack_1bc = 0;
        *(ulonglong *)(ar6 + 2) = (ulonglong)dVar11 & 0xffffffff;
        uStack_1c4 = uStack_1c0;
        *(ulonglong *)(ar6 + 1) = (ulonglong)dVar11 & 0xffffffff;
        *(ulonglong *)ar6 = (ulonglong)dVar11 & 0xffffffff;
      }
      uStack_1c0 = 0;
      uStack_e0._4_4_ = 0xffffffff;
      Vec3_dtor(&uStack_8c,0xffffffff,pfVar7,ar7_00);
      Vec3_dtor(&fStack_7c,0xffffffff,pfVar7,ar7_00);
      Vec3_dtor(auStack_4c,0xffffffff,pfVar7,ar7_00);
      Vec3_dtor(auStack_5c,0xffffffff,pfVar7,ar7_00);
      Vec3_dtor(auStack_6c,0xffffffff,pfVar7,ar7_00);
      Vec3_dtor(auStack_3c,0xffffffff,pfVar7,ar7_00);
      return uStack_e0._4_4_;
    }
    asStack_1ce[3] = *psVar2;
    bVar16 = asStack_1ce[3] < 0;
    if (bVar16) {
      iStack_e4 = (int)asStack_1ce[3];
      asStack_1ce[3] = -asStack_1ce[3];
    }
    psVar2 = psVar2 + 1;
    psStack_d4 = psVar2;
    while( true ) {
      iStack_1bc = libgcc_divide_helper_0101e4((int)psVar2 - (int)psStack_d4,2,pfVar7,ar7_00);
      uVar9 = SUB84(dVar11,0);
      if (asStack_1ce[3] <= iStack_1bc) break;
      if (psVar2 == psStack_d4) {
        asStack_1ce[0] = *psVar2;
        asStack_1ce[1] = psVar2[1];
        asStack_1ce[2] = psVar2[2];
        psVar2 = psVar2 + 3;
      }
      else {
        asStack_1ce[0] = asStack_1ce[1];
        asStack_1ce[1] = asStack_1ce[2];
        asStack_1ce[2] = *psVar2;
        psVar2 = psVar2 + 1;
      }
      iStack_e8 = (int)asStack_1ce[2];
      iStack_ec = (int)asStack_1ce[0];
      iStack_f0 = (int)asStack_1ce[1];
      puVar4 = (undefined8 *)(iStack_ec * 0x18 + iVar3);
      if (cVar19 == '\0') {
        uVar9 = *(undefined4 *)puVar4;
      }
      else {
        in_xd0 = *puVar4;
      }
      pdVar6 = (double *)(iStack_f0 * 0x18 + iVar3);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,uVar9);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_e8 * 0x18 + iVar3);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      fStack_a4 = fVar10;
      if (cVar19 != '\0') {
        fStack_a4 = (float)in_xd0;
      }
      iStack_f4 = (int)asStack_1ce[2];
      iStack_f8 = (int)asStack_1ce[0];
      iStack_fc = (int)asStack_1ce[1];
      pfVar7 = (float *)(iStack_f8 * 0x18 + iVar3 + 4);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)(iStack_fc * 0x18 + iVar3 + 4);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_f4 * 0x18 + iVar3 + 4);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      fStack_a0 = fVar10;
      if (cVar19 != '\0') {
        fStack_a0 = (float)in_xd0;
      }
      iStack_100 = (int)asStack_1ce[2];
      iStack_104 = (int)asStack_1ce[0];
      iStack_108 = (int)asStack_1ce[1];
      pfVar7 = (float *)(iStack_104 * 0x18 + iVar3 + 8);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)(iStack_108 * 0x18 + iVar3 + 8);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_100 * 0x18 + iVar3 + 8);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      fStack_9c = fVar10;
      if (cVar19 != '\0') {
        fStack_9c = (float)in_xd0;
      }
      iStack_10c = (int)asStack_1ce[2];
      iStack_110 = (int)asStack_1ce[0];
      iStack_114 = (int)asStack_1ce[1];
      pfVar7 = (float *)(iStack_110 * 0x18 + iVar3 + 0xc);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)(iStack_114 * 0x18 + iVar3 + 0xc);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_10c * 0x18 + iVar3 + 0xc);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      fStack_98 = fVar10;
      if (cVar19 != '\0') {
        fStack_98 = (float)in_xd0;
      }
      iStack_118 = (int)asStack_1ce[2];
      iStack_11c = (int)asStack_1ce[0];
      iStack_120 = (int)asStack_1ce[1];
      pfVar7 = (float *)(iStack_11c * 0x18 + iVar3 + 0x10);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)(iStack_120 * 0x18 + iVar3 + 0x10);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_118 * 0x18 + iVar3 + 0x10);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      fStack_94 = fVar10;
      if (cVar19 != '\0') {
        fStack_94 = (float)in_xd0;
      }
      iStack_124 = (int)asStack_1ce[2];
      iStack_128 = (int)asStack_1ce[0];
      iStack_12c = (int)asStack_1ce[1];
      pfVar7 = (float *)(iStack_128 * 0x18 + iVar3 + 0x14);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)(iStack_12c * 0x18 + iVar3 + 0x14);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_124 * 0x18 + iVar3 + 0x14);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = (float)((ulonglong)dVar11 >> 0x20);
        dVar11 = (double)CONCAT44(fVar10,SUB84(dVar11,0) / fVar10);
      }
      else {
        dVar11 = dVar11 / dVar11;
      }
      if (cVar19 == '\0') {
        fStack_90 = SUB84(dVar11,0);
      }
      else {
        fStack_90 = (float)in_xd0;
        uStack_8c = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      pfVar7 = (float *)0x0;
      ar5_00 = &fStack_a4;
      FUN_8c234a68(&uStack_b0,ar5_00,0,ar7_00);
      fVar10 = (float)((ulonglong)dVar11 >> 0x20);
      dVar15 = dVar11;
      if (cVar19 == '\0') {
        uStack_e0 = (double)CONCAT44(uStack_e0._4_4_,fVar10);
        dVar15 = uStack_e0;
      }
      uStack_e0 = dVar15;
      if (cVar18 == '\0') {
        bVar17 = in_fr4 < fVar10;
      }
      else {
        bVar17 = (double)CONCAT44(in_fr12,in_fr4) < dVar11;
      }
      if (!bVar17) {
        sVar8 = 0;
        while( true ) {
          uVar9 = SUB84(in_dr14,0);
          fVar10 = SUB84(dVar11,0);
          if (2 < sVar8) break;
          if (sVar8 == 0) {
            iStack_130 = (int)asStack_1ce[1];
            iStack_134 = (int)asStack_1ce[0];
            pfVar5 = (float *)(iStack_130 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_134 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_7c = fVar10;
            if (cVar19 != '\0') {
              fStack_7c = (float)in_xd0;
            }
            iStack_138 = (int)asStack_1ce[1];
            iStack_13c = (int)asStack_1ce[0];
            pfVar5 = (float *)(iStack_138 * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_13c * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_78 = fVar10;
            if (cVar19 != '\0') {
              fStack_78 = (float)in_xd0;
            }
            iStack_140 = (int)asStack_1ce[1];
            iStack_144 = (int)asStack_1ce[0];
            pfVar5 = (float *)(iStack_140 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_144 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_74 = fVar10;
            if (cVar19 != '\0') {
              fStack_74 = (float)in_xd0;
              uStack_70 = (undefined4)((ulonglong)in_xd0 >> 0x20);
            }
          }
          else if (sVar8 == 1) {
            ar5_00 = (float *)(int)asStack_1ce[2];
            iStack_14c = (int)asStack_1ce[1];
            pfVar5 = (float *)((int)ar5_00 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_14c * 0x18 + iVar3);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_7c = fVar10;
            if (cVar19 != '\0') {
              fStack_7c = (float)in_xd0;
            }
            iStack_150 = (int)asStack_1ce[2];
            iStack_154 = (int)asStack_1ce[1];
            pfVar5 = (float *)(iStack_150 * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_154 * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_78 = fVar10;
            if (cVar19 != '\0') {
              fStack_78 = (float)in_xd0;
            }
            iStack_158 = (int)asStack_1ce[2];
            iStack_15c = (int)asStack_1ce[1];
            pfVar5 = (float *)(iStack_158 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_15c * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            pfStack_148 = ar5_00;
            fStack_74 = fVar10;
            if (cVar19 != '\0') {
              fStack_74 = (float)in_xd0;
              uStack_70 = (undefined4)((ulonglong)in_xd0 >> 0x20);
            }
          }
          else if (sVar8 == 2) {
            iStack_160 = (int)asStack_1ce[0];
            iStack_164 = (int)asStack_1ce[2];
            pfVar5 = (float *)(iStack_160 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_164 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_7c = fVar10;
            if (cVar19 != '\0') {
              fStack_7c = (float)in_xd0;
            }
            iStack_168 = (int)asStack_1ce[0];
            iStack_16c = (int)asStack_1ce[2];
            pfVar5 = (float *)(iStack_168 * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_16c * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_78 = fVar10;
            if (cVar19 != '\0') {
              fStack_78 = (float)in_xd0;
            }
            iStack_170 = (int)asStack_1ce[0];
            iStack_174 = (int)asStack_1ce[2];
            pfVar5 = (float *)(iStack_170 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_174 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_74 = fVar10;
            if (cVar19 != '\0') {
              fStack_74 = (float)in_xd0;
              uStack_70 = (undefined4)((ulonglong)in_xd0 >> 0x20);
            }
          }
          Vec3_length(&fStack_7c,ar5_00,pfVar7,ar7_00);
          iStack_178 = (int)sVar8;
          iStack_180 = (int)sVar8;
          iStack_17c = (int)asStack_1ce[sVar8];
          puVar4 = (undefined8 *)(asStack_1ce[sVar8] * 0x18 + iVar3 + 0xc);
          if (cVar19 == '\0') {
            uVar13 = *(undefined4 *)puVar4;
            uVar12 = CONCAT44(uVar13,fVar10);
            *(undefined4 *)(auStack_6c + sVar8 * 0x10) = uVar13;
          }
          else {
            uVar12 = *puVar4;
            *(undefined8 *)(auStack_6c + sVar8 * 0x10) = uVar12;
          }
          iStack_184 = (int)sVar8;
          iStack_18c = (int)sVar8;
          iStack_188 = (int)asStack_1ce[sVar8];
          puVar4 = (undefined8 *)(asStack_1ce[sVar8] * 0x18 + iVar3 + 0x10);
          if (cVar19 == '\0') {
            uVar13 = *(undefined4 *)puVar4;
            uVar12 = CONCAT44(uVar13,(int)uVar12);
            *(undefined4 *)(auStack_6c + sVar8 * 0x10 + 4) = uVar13;
          }
          else {
            uVar12 = *puVar4;
            *(undefined8 *)(auStack_6c + sVar8 * 0x10 + 4) = uVar12;
          }
          iStack_190 = (int)sVar8;
          iStack_198 = (int)sVar8;
          iStack_194 = (int)asStack_1ce[sVar8];
          puVar4 = (undefined8 *)(iStack_194 * 0x18 + iVar3 + 0x14);
          if (cVar19 == '\0') {
            uVar13 = *(undefined4 *)puVar4;
            uVar12 = CONCAT44(uVar13,(int)uVar12);
            *(undefined4 *)(&uStack_64 + sVar8 * 2) = uVar13;
          }
          else {
            uVar12 = *puVar4;
            (&uStack_64)[sVar8 * 2] = uVar12;
          }
          uVar13 = (undefined4)uVar12;
          if (bVar16) {
            iStack_1a0 = (int)sVar8;
            FUN_8c022d3c(auStack_6c + iStack_1a0 * 0x10,&fStack_7c,pfVar7,ar7_00,auStack_d0);
            Vec3_assign(&uStack_8c,auStack_d0,pfVar7,ar7_00);
            pfVar7 = (float *)0xffffffff;
            ar5_00 = (float *)0xffffffff;
            Vec3_dtor(auStack_d0,0xffffffff,0xffffffff,ar7_00);
          }
          else {
            iStack_19c = (int)sVar8;
            FUN_8c022d3c(&fStack_7c,auStack_6c + iStack_19c * 0x10,pfVar7,ar7_00,auStack_c0);
            Vec3_assign(&uStack_8c,auStack_c0,pfVar7,ar7_00);
            ar5_00 = (float *)0xffffffff;
            Vec3_dtor(auStack_c0,0xffffffff,pfVar7,ar7_00);
          }
          iStack_1a8 = (int)sVar8;
          iStack_1a4 = (int)asStack_1ce[sVar8];
          iStack_1b0 = (int)sVar8;
          iStack_1ac = (int)asStack_1ce[sVar8];
          iStack_1b8 = (int)sVar8;
          iStack_1b4 = (int)asStack_1ce[sVar8];
          pdVar6 = (double *)(asStack_1ce[sVar8] * 0x18 + iVar3);
          if (cVar19 == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)pdVar6,uVar9);
            dVar11 = (double)CONCAT44(uStack_8c,uVar13);
          }
          else {
            dVar15 = *pdVar6;
            dVar11 = (double)CONCAT44(uStack_88,uStack_8c);
          }
          if (cVar18 == '\0') {
            dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) *
                                      (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar15,0));
          }
          else {
            dVar15 = dVar15 * dVar11;
          }
          puVar4 = (undefined8 *)(iStack_1b4 * 0x18 + iVar3 + 4);
          if (cVar19 == '\0') {
            dVar11 = (double)CONCAT44(uStack_88,*(undefined4 *)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar11 = (double)CONCAT44(uStack_84,uStack_88);
          }
          if (cVar18 == '\0') {
            dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) +
                                      SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20),
                                      SUB84(dVar15,0));
          }
          else {
            dVar15 = dVar15 + dVar11 * dVar11;
          }
          puVar4 = (undefined8 *)(asStack_1ce[sVar8] * 0x18 + iVar3 + 8);
          if (cVar19 == '\0') {
            dVar11 = (double)CONCAT44(uStack_84,*(undefined4 *)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar11 = (double)CONCAT44(uStack_80,uStack_84);
          }
          if (cVar18 == '\0') {
            fVar10 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
            dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + fVar10,SUB84(dVar15,0));
          }
          else {
            fVar10 = SUB84(dVar11 * dVar11,0);
            dVar15 = dVar15 + dVar11 * dVar11;
          }
          if (cVar19 == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),uStack_8c);
            dVar11 = (double)CONCAT44(*(undefined4 *)ar5,fVar10);
          }
          else {
            dVar11 = *ar5;
          }
          if (cVar18 == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      SUB84(dVar15,0) * (float)((ulonglong)dVar11 >> 0x20));
          }
          else {
            dVar15 = dVar15 * dVar11;
          }
          if (cVar19 == '\0') {
            dVar11 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),uStack_88);
          }
          else {
            in_xd0 = CONCAT44(uStack_84,uStack_88);
            dVar11 = *(double *)((int)ar5 + 4);
          }
          if (cVar18 == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      SUB84(dVar15,0) +
                                      SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20));
          }
          else {
            dVar15 = dVar15 + dVar11 * dVar11;
          }
          if (cVar19 == '\0') {
            dVar11 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),uStack_84);
          }
          else {
            in_xd0 = CONCAT44(uStack_80,uStack_84);
            dVar11 = ar5[1];
          }
          if (cVar18 == '\0') {
            fVar14 = (float)((ulonglong)dVar11 >> 0x20);
            fVar10 = SUB84(dVar11,0) * fVar14;
            dVar11 = (double)CONCAT44(fVar14,fVar10);
            fVar14 = (float)((ulonglong)dVar15 >> 0x20);
            in_dr14 = (double)CONCAT44(fVar14,(SUB84(dVar15,0) + fVar10) - fVar14);
          }
          else {
            dVar11 = dVar11 * dVar11;
            in_dr14 = (dVar15 + dVar11) - (dVar15 + dVar11);
          }
          dVar11 = (double)((ulonglong)dVar11 & 0xffffffff);
          if (cVar18 == '\0') {
            bVar17 = 0.0 < SUB84(in_dr14,0);
          }
          else {
            bVar17 = dVar11 < in_dr14;
          }
          if (bVar17) {
            sVar1 = 0;
            break;
          }
          sVar1 = sVar1 + 1;
          if (sVar1 == 3) {
            if (cVar19 == '\0') {
              *ar6 = fStack_98;
              ar6[1] = fStack_94;
              ar6[2] = fStack_90;
              *ar7 = fStack_a4;
              ar7[1] = fStack_a0;
              ar7[2] = fStack_9c;
            }
            else {
              *(ulonglong *)ar6 = CONCAT44(fStack_94,fStack_98);
              *(ulonglong *)(ar6 + 1) = CONCAT44(fStack_90,fStack_94);
              *(ulonglong *)(ar6 + 2) = CONCAT44(uStack_8c,fStack_90);
              *(ulonglong *)ar7 = CONCAT44(fStack_a0,fStack_a4);
              *(ulonglong *)(ar7 + 1) = CONCAT44(fStack_9c,fStack_a0);
              *(ulonglong *)(ar7 + 2) = CONCAT44(fStack_98,fStack_9c);
            }
            uStack_d8 = 1;
            Vec3_dtor(&uStack_8c,0xffffffff,pfVar7,ar7_00);
            Vec3_dtor(&fStack_7c,0xffffffff,pfVar7,ar7_00);
            Vec3_dtor(auStack_4c,0xffffffff,pfVar7,ar7_00);
            Vec3_dtor(auStack_5c,0xffffffff,pfVar7,ar7_00);
            Vec3_dtor(auStack_6c,0xffffffff,pfVar7,ar7_00);
            Vec3_dtor(auStack_3c,0xffffffff,pfVar7,ar7_00);
            return uStack_d8;
          }
          sVar8 = sVar8 + 1;
        }
        bVar16 = (bool)(bVar16 ^ 1);
      }
    }
    asStack_1ce[4] = asStack_1ce[4] + 1;
  } while( true );
}



/* FUN_8c0185a4 @ 8c0185a4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0185a8) */
/* WARNING: Removing unreachable block (ram,0x8c0185a4) */
/* WARNING: Removing unreachable block (ram,0x8c0185a6) */
/* WARNING: Removing unreachable block (ram,0x8c0185c4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0185a4(int ar4,double *ar5,float *ar6,float *ar7)

{
  undefined8 uVar1;
  short sVar2;
  short *psVar3;
  undefined8 *puVar4;
  double *pdVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *ar5_00;
  float *ar7_00;
  short sVar9;
  undefined4 in_fr1;
  undefined4 uVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float in_fr4;
  undefined4 in_fr12;
  double in_dr14;
  double dVar14;
  undefined8 in_xd0;
  bool bVar15;
  bool bVar16;
  char cVar17;
  char cVar18;
  short asStack_16a [5];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  short *psStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [20];
  
  cVar18 = '\0';
  cVar17 = '\0';
  psVar3 = *(short **)(ar4 + 4);
  psStack_b4 = (short *)0x0;
  asStack_16a[3] = 0;
  sVar2 = 0;
  pdVar5 = ar5;
  pfVar6 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_3c,ar5,ar6,ar7);
  Vec3_ctor_xyz(auStack_4c,pdVar5,pfVar6,ar7_00);
  Vec3_ctor_zero(&uStack_5c,pdVar5,pfVar6,ar7_00);
  Vec3_ctor_zero(&uStack_6c,pdVar5,pfVar6,ar7_00);
  iVar8 = *(int *)(ar4 + 8);
  if (cVar18 == '\0') {
    uStack_90 = *(undefined4 *)ar5;
    uStack_8c = *(undefined4 *)((int)ar5 + 4);
    uStack_88 = *(undefined4 *)(ar5 + 1);
    dVar12 = (double)CONCAT44(uStack_88,in_fr1);
  }
  else {
    uStack_90 = SUB84(*ar5,0);
    uStack_8c = (undefined4)*(undefined8 *)((int)ar5 + 4);
    dVar12 = ar5[1];
    uStack_88 = SUB84(dVar12,0);
    fStack_84 = (float)((ulonglong)dVar12 >> 0x20);
  }
  asStack_16a[4] = 0;
  do {
    if (*(int *)(ar4 + 0xc) <= (int)asStack_16a[4]) {
      if (cVar18 == '\0') {
        ar6[2] = 0.0;
        uStack_160 = 0;
        ar6[1] = 0.0;
        *ar6 = 0.0;
      }
      else {
        uStack_15c = SUB84(dVar12,0);
        iStack_158 = 0;
        *(ulonglong *)(ar6 + 2) = (ulonglong)dVar12 & 0xffffffff;
        uStack_160 = uStack_15c;
        *(ulonglong *)(ar6 + 1) = (ulonglong)dVar12 & 0xffffffff;
        *(ulonglong *)ar6 = (ulonglong)dVar12 & 0xffffffff;
      }
      uStack_15c = 0;
      uStack_c0._4_4_ = 0xffffffff;
      Vec3_dtor(&uStack_6c,0xffffffff,pfVar6,ar7_00);
      Vec3_dtor(&uStack_5c,0xffffffff,pfVar6,ar7_00);
      Vec3_dtor(auStack_4c,0xffffffff,pfVar6,ar7_00);
      Vec3_dtor(auStack_3c,0xffffffff,pfVar6,ar7_00);
      return uStack_c0._4_4_;
    }
    asStack_16a[3] = *psVar3;
    bVar15 = asStack_16a[3] < 0;
    if (bVar15) {
      iStack_c4 = (int)asStack_16a[3];
      asStack_16a[3] = -asStack_16a[3];
    }
    psVar3 = psVar3 + 1;
    psStack_b4 = psVar3;
    while( true ) {
      iStack_158 = libgcc_divide_helper_0101e4((int)psVar3 - (int)psStack_b4,2,pfVar6,ar7_00);
      uVar10 = SUB84(dVar12,0);
      if (asStack_16a[3] <= iStack_158) break;
      if (psVar3 == psStack_b4) {
        asStack_16a[0] = *psVar3;
        asStack_16a[1] = psVar3[1];
        asStack_16a[2] = psVar3[2];
        psVar3 = psVar3 + 3;
      }
      else {
        asStack_16a[0] = asStack_16a[1];
        asStack_16a[1] = asStack_16a[2];
        asStack_16a[2] = *psVar3;
        psVar3 = psVar3 + 1;
      }
      iStack_c8 = (int)asStack_16a[2];
      iStack_cc = (int)asStack_16a[0];
      iStack_d0 = (int)asStack_16a[1];
      puVar4 = (undefined8 *)(iStack_cc * 0x18 + iVar8);
      if (cVar18 == '\0') {
        uVar10 = *(undefined4 *)puVar4;
      }
      else {
        in_xd0 = *puVar4;
      }
      pdVar5 = (double *)(iStack_d0 * 0x18 + iVar8);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,uVar10);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_c8 * 0x18 + iVar8);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      fStack_84 = fVar11;
      if (cVar18 != '\0') {
        fStack_84 = (float)in_xd0;
      }
      iStack_d4 = (int)asStack_16a[2];
      iStack_d8 = (int)asStack_16a[0];
      iStack_dc = (int)asStack_16a[1];
      pfVar6 = (float *)(iStack_d8 * 0x18 + iVar8 + 4);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar6;
      }
      pdVar5 = (double *)(iStack_dc * 0x18 + iVar8 + 4);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_d4 * 0x18 + iVar8 + 4);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      fStack_80 = fVar11;
      if (cVar18 != '\0') {
        fStack_80 = (float)in_xd0;
      }
      iStack_e0 = (int)asStack_16a[2];
      iStack_e4 = (int)asStack_16a[0];
      iStack_e8 = (int)asStack_16a[1];
      pfVar6 = (float *)(iStack_e4 * 0x18 + iVar8 + 8);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar6;
      }
      pdVar5 = (double *)(iStack_e8 * 0x18 + iVar8 + 8);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_e0 * 0x18 + iVar8 + 8);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      fStack_7c = fVar11;
      if (cVar18 != '\0') {
        fStack_7c = (float)in_xd0;
      }
      iStack_ec = (int)asStack_16a[2];
      iStack_f0 = (int)asStack_16a[0];
      iStack_f4 = (int)asStack_16a[1];
      pfVar6 = (float *)(iStack_f0 * 0x18 + iVar8 + 0xc);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar6;
      }
      pdVar5 = (double *)(iStack_f4 * 0x18 + iVar8 + 0xc);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_ec * 0x18 + iVar8 + 0xc);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      fStack_78 = fVar11;
      if (cVar18 != '\0') {
        fStack_78 = (float)in_xd0;
      }
      iStack_f8 = (int)asStack_16a[2];
      iStack_fc = (int)asStack_16a[0];
      iStack_100 = (int)asStack_16a[1];
      pfVar6 = (float *)(iStack_fc * 0x18 + iVar8 + 0x10);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar6;
      }
      pdVar5 = (double *)(iStack_100 * 0x18 + iVar8 + 0x10);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_f8 * 0x18 + iVar8 + 0x10);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      fStack_74 = fVar11;
      if (cVar18 != '\0') {
        fStack_74 = (float)in_xd0;
      }
      iStack_104 = (int)asStack_16a[2];
      iStack_108 = (int)asStack_16a[0];
      iStack_10c = (int)asStack_16a[1];
      pfVar6 = (float *)(iStack_108 * 0x18 + iVar8 + 0x14);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar6;
      }
      pdVar5 = (double *)(iStack_10c * 0x18 + iVar8 + 0x14);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_104 * 0x18 + iVar8 + 0x14);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = (float)((ulonglong)dVar12 >> 0x20);
        dVar12 = (double)CONCAT44(fVar11,SUB84(dVar12,0) / fVar11);
      }
      else {
        dVar12 = dVar12 / dVar12;
      }
      if (cVar18 == '\0') {
        fStack_70 = SUB84(dVar12,0);
      }
      else {
        fStack_70 = (float)in_xd0;
        uStack_6c = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      pfVar6 = (float *)0x0;
      ar5_00 = &fStack_84;
      FUN_8c234a68(&uStack_90,ar5_00,0,ar7_00);
      fVar11 = (float)((ulonglong)dVar12 >> 0x20);
      dVar14 = dVar12;
      if (cVar18 == '\0') {
        uStack_c0 = (double)CONCAT44(uStack_c0._4_4_,fVar11);
        dVar14 = uStack_c0;
      }
      uStack_c0 = dVar14;
      if (cVar17 == '\0') {
        bVar16 = in_fr4 < fVar11;
      }
      else {
        bVar16 = (double)CONCAT44(in_fr12,in_fr4) < dVar12;
      }
      if (!bVar16) {
        sVar9 = 0;
        while( true ) {
          uVar10 = SUB84(in_dr14,0);
          fVar11 = SUB84(dVar12,0);
          if (2 < sVar9) break;
          if (sVar9 == 0) {
            iStack_110 = (int)asStack_16a[1];
            iStack_114 = (int)asStack_16a[0];
            pfVar7 = (float *)(iStack_110 * 0x18 + iVar8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar5 = (double *)(iStack_114 * 0x18 + iVar8);
            if (cVar18 == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              uStack_5c = CONCAT44(uStack_5c._4_4_,fVar11);
              uVar1 = uStack_5c;
            }
            uStack_5c = uVar1;
            iStack_118 = (int)asStack_16a[1];
            iStack_11c = (int)asStack_16a[0];
            pfVar7 = (float *)(iStack_118 * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar5 = (double *)(iStack_11c * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              uStack_54 = CONCAT44(uStack_54._4_4_,fVar11);
              uVar1 = uStack_54;
            }
          }
          else if (sVar9 == 1) {
            iStack_120 = (int)asStack_16a[2];
            iStack_124 = (int)asStack_16a[1];
            pfVar7 = (float *)(iStack_120 * 0x18 + iVar8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar5 = (double *)(iStack_124 * 0x18 + iVar8);
            if (cVar18 == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              uStack_5c = CONCAT44(uStack_5c._4_4_,fVar11);
              uVar1 = uStack_5c;
            }
            uStack_5c = uVar1;
            iStack_128 = (int)asStack_16a[2];
            iStack_12c = (int)asStack_16a[1];
            pfVar7 = (float *)(iStack_128 * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar5 = (double *)(iStack_12c * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              uStack_54 = CONCAT44(uStack_54._4_4_,fVar11);
              uVar1 = uStack_54;
            }
          }
          else {
            uVar1 = uStack_54;
            if (sVar9 == 2) {
              iStack_130 = (int)asStack_16a[0];
              iStack_134 = (int)asStack_16a[2];
              pfVar7 = (float *)(iStack_130 * 0x18 + iVar8);
              if (cVar18 == '\0') {
                fVar11 = *pfVar7;
              }
              else {
                in_xd0 = *(undefined8 *)pfVar7;
              }
              pdVar5 = (double *)(iStack_134 * 0x18 + iVar8);
              if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
              }
              else {
                dVar12 = *pdVar5;
              }
              if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
              }
              else {
                fVar11 = SUB84(dVar12 - dVar12,0);
              }
              uVar1 = in_xd0;
              if (cVar18 == '\0') {
                uStack_5c = CONCAT44(uStack_5c._4_4_,fVar11);
                uVar1 = uStack_5c;
              }
              uStack_5c = uVar1;
              iStack_138 = (int)asStack_16a[0];
              iStack_13c = (int)asStack_16a[2];
              pfVar7 = (float *)(iStack_138 * 0x18 + iVar8 + 8);
              if (cVar18 == '\0') {
                fVar11 = *pfVar7;
              }
              else {
                in_xd0 = *(undefined8 *)pfVar7;
              }
              pdVar5 = (double *)(iStack_13c * 0x18 + iVar8 + 8);
              if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
              }
              else {
                dVar12 = *pdVar5;
              }
              if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
              }
              else {
                fVar11 = SUB84(dVar12 - dVar12,0);
              }
              uVar1 = in_xd0;
              if (cVar18 == '\0') {
                uStack_54 = CONCAT44(uStack_54._4_4_,fVar11);
                uVar1 = uStack_54;
              }
            }
          }
          uStack_54 = uVar1;
          Vec3_length(&uStack_5c,ar5_00,pfVar6,ar7_00);
          if (bVar15) {
            FUN_8c022d3c(auStack_4c,&uStack_5c,pfVar6,ar7_00,auStack_b0);
            Vec3_assign(&uStack_6c,auStack_b0,pfVar6,ar7_00);
            ar5_00 = (float *)0xffffffff;
            Vec3_dtor(auStack_b0,0xffffffff,pfVar6,ar7_00);
          }
          else {
            FUN_8c022d3c(&uStack_5c,auStack_4c,pfVar6,ar7_00,auStack_a0);
            Vec3_assign(&uStack_6c,auStack_a0,pfVar6,ar7_00);
            ar5_00 = (float *)0xffffffff;
            Vec3_dtor(auStack_a0,0xffffffff,pfVar6,ar7_00);
          }
          iStack_144 = (int)sVar9;
          iStack_140 = (int)asStack_16a[sVar9];
          iStack_14c = (int)sVar9;
          iStack_148 = (int)asStack_16a[sVar9];
          iStack_154 = (int)sVar9;
          iStack_150 = (int)asStack_16a[sVar9];
          pdVar5 = (double *)(asStack_16a[sVar9] * 0x18 + iVar8);
          if (cVar18 == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)pdVar5,uVar10);
            dVar12 = (double)CONCAT44(uStack_6c,fVar11);
          }
          else {
            dVar14 = *pdVar5;
            dVar12 = (double)CONCAT44(uStack_68,uStack_6c);
          }
          if (cVar17 == '\0') {
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) *
                                      (float)((ulonglong)dVar12 >> 0x20),SUB84(dVar14,0));
          }
          else {
            dVar14 = dVar14 * dVar12;
          }
          puVar4 = (undefined8 *)(iStack_150 * 0x18 + iVar8 + 4);
          if (cVar18 == '\0') {
            dVar12 = (double)CONCAT44(uStack_68,*(undefined4 *)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar12 = (double)CONCAT44(uStack_64,uStack_68);
          }
          if (cVar17 == '\0') {
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) +
                                      SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20),
                                      SUB84(dVar14,0));
          }
          else {
            dVar14 = dVar14 + dVar12 * dVar12;
          }
          puVar4 = (undefined8 *)(asStack_16a[sVar9] * 0x18 + iVar8 + 8);
          if (cVar18 == '\0') {
            dVar12 = (double)CONCAT44(uStack_64,*(undefined4 *)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar12 = (double)CONCAT44(uStack_60,uStack_64);
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + fVar11,SUB84(dVar14,0));
          }
          else {
            fVar11 = SUB84(dVar12 * dVar12,0);
            dVar14 = dVar14 + dVar12 * dVar12;
          }
          if (cVar18 == '\0') {
            dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),uStack_6c);
            dVar12 = (double)CONCAT44(*(undefined4 *)ar5,fVar11);
          }
          else {
            dVar12 = *ar5;
          }
          if (cVar17 == '\0') {
            dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                      SUB84(dVar14,0) * (float)((ulonglong)dVar12 >> 0x20));
          }
          else {
            dVar14 = dVar14 * dVar12;
          }
          if (cVar18 == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),uStack_68);
          }
          else {
            in_xd0 = CONCAT44(uStack_64,uStack_68);
            dVar12 = *(double *)((int)ar5 + 4);
          }
          if (cVar17 == '\0') {
            dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                      SUB84(dVar14,0) +
                                      SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20));
          }
          else {
            dVar14 = dVar14 + dVar12 * dVar12;
          }
          if (cVar18 == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),uStack_64);
          }
          else {
            in_xd0 = CONCAT44(uStack_60,uStack_64);
            dVar12 = ar5[1];
          }
          if (cVar17 == '\0') {
            fVar13 = (float)((ulonglong)dVar12 >> 0x20);
            fVar11 = SUB84(dVar12,0) * fVar13;
            dVar12 = (double)CONCAT44(fVar13,fVar11);
            fVar13 = (float)((ulonglong)dVar14 >> 0x20);
            in_dr14 = (double)CONCAT44(fVar13,(SUB84(dVar14,0) + fVar11) - fVar13);
          }
          else {
            dVar12 = dVar12 * dVar12;
            in_dr14 = (dVar14 + dVar12) - (dVar14 + dVar12);
          }
          dVar12 = (double)((ulonglong)dVar12 & 0xffffffff);
          if (cVar17 == '\0') {
            bVar16 = 0.0 < SUB84(in_dr14,0);
          }
          else {
            bVar16 = dVar12 < in_dr14;
          }
          if (bVar16) {
            sVar2 = 0;
            break;
          }
          sVar2 = sVar2 + 1;
          if (sVar2 == 3) {
            if (cVar18 == '\0') {
              *ar6 = fStack_78;
              ar6[1] = fStack_74;
              ar6[2] = fStack_70;
              *ar7 = fStack_84;
              ar7[1] = fStack_80;
              ar7[2] = fStack_7c;
            }
            else {
              *(ulonglong *)ar6 = CONCAT44(fStack_74,fStack_78);
              *(ulonglong *)(ar6 + 1) = CONCAT44(fStack_70,fStack_74);
              *(ulonglong *)(ar6 + 2) = CONCAT44(uStack_6c,fStack_70);
              *(ulonglong *)ar7 = CONCAT44(fStack_80,fStack_84);
              *(ulonglong *)(ar7 + 1) = CONCAT44(fStack_7c,fStack_80);
              *(ulonglong *)(ar7 + 2) = CONCAT44(fStack_78,fStack_7c);
            }
            uStack_b8 = 1;
            Vec3_dtor(&uStack_6c,0xffffffff,pfVar6,ar7_00);
            Vec3_dtor(&uStack_5c,0xffffffff,pfVar6,ar7_00);
            Vec3_dtor(auStack_4c,0xffffffff,pfVar6,ar7_00);
            Vec3_dtor(auStack_3c,0xffffffff,pfVar6,ar7_00);
            return uStack_b8;
          }
          sVar9 = sVar9 + 1;
        }
        bVar15 = (bool)(bVar15 ^ 1);
      }
    }
    asStack_16a[4] = asStack_16a[4] + 1;
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

/* WARNING: Removing unreachable block (ram,0x8c018f9c) */
/* WARNING: Removing unreachable block (ram,0x8c018f92) */
/* WARNING: Removing unreachable block (ram,0x8c018f86) */
/* WARNING: Removing unreachable block (ram,0x8c018f84) */
/* WARNING: Removing unreachable block (ram,0x8c018f90) */
/* WARNING: Removing unreachable block (ram,0x8c018f9a) */
/* WARNING: Removing unreachable block (ram,0x8c018fa0) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c018f80(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x30) = *ar5;
  *(undefined4 *)(ar4 + 0x34) = ar5[1];
  *(undefined4 *)(ar4 + 0x38) = ar5[2];
  *(undefined4 *)(ar4 + 0x3c) = in_fr4;
  return (undefined4 *)(ar4 + 0x38);
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

/* WARNING: Removing unreachable block (ram,0x8c01906e) */
/* WARNING: Removing unreachable block (ram,0x8c019066) */
/* WARNING: Removing unreachable block (ram,0x8c01905e) */
/* WARNING: Removing unreachable block (ram,0x8c019062) */
/* WARNING: Removing unreachable block (ram,0x8c01906a) */
/* WARNING: Removing unreachable block (ram,0x8c019072) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c019058(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr4;
  
  uVar1 = FUN_8c25b5d0(0,ar5,ar6,ar7,(int)((ulonglong)in_dr4 >> 0x20));
  return uVar1;
}



/* FUN_8c019088 @ 8c019088 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0190ce) */
/* WARNING: Removing unreachable block (ram,0x8c0190c8) */
/* WARNING: Removing unreachable block (ram,0x8c0190c2) */
/* WARNING: Removing unreachable block (ram,0x8c0190ba) */
/* WARNING: Removing unreachable block (ram,0x8c0190b4) */
/* WARNING: Removing unreachable block (ram,0x8c0190ae) */
/* WARNING: Removing unreachable block (ram,0x8c0190a6) */
/* WARNING: Removing unreachable block (ram,0x8c0190a0) */
/* WARNING: Removing unreachable block (ram,0x8c01909a) */
/* WARNING: Removing unreachable block (ram,0x8c019092) */
/* WARNING: Removing unreachable block (ram,0x8c01908e) */
/* WARNING: Removing unreachable block (ram,0x8c019096) */
/* WARNING: Removing unreachable block (ram,0x8c01909e) */
/* WARNING: Removing unreachable block (ram,0x8c0190a4) */
/* WARNING: Removing unreachable block (ram,0x8c0190a8) */
/* WARNING: Removing unreachable block (ram,0x8c0190b2) */
/* WARNING: Removing unreachable block (ram,0x8c0190b8) */
/* WARNING: Removing unreachable block (ram,0x8c0190bc) */
/* WARNING: Removing unreachable block (ram,0x8c0190c6) */
/* WARNING: Removing unreachable block (ram,0x8c0190cc) */
/* WARNING: Removing unreachable block (ram,0x8c0190d0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c019088(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr5;
  float in_fr4;
  float in_fr6;
  
  uVar1 = FUN_8c256b0c(0,(int)((in_fr4 * 65536.0) / 360.0),(int)((in_fr5 * 65536.0) / 360.0),
                       (int)((in_fr6 * 65536.0) / 360.0),in_fr4);
  return uVar1;
}



/* FUN_8c0190f0 @ 8c0190f0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c019106) */
/* WARNING: Removing unreachable block (ram,0x8c019100) */
/* WARNING: Removing unreachable block (ram,0x8c0190fa) */
/* WARNING: Removing unreachable block (ram,0x8c0190f6) */
/* WARNING: Removing unreachable block (ram,0x8c0190fe) */
/* WARNING: Removing unreachable block (ram,0x8c019104) */
/* WARNING: Removing unreachable block (ram,0x8c019108) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0190f0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr4;
  
  uVar1 = FUN_8c256a78(0,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7,in_fr4);
  return uVar1;
}



/* FUN_8c019128 @ 8c019128 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c01913e) */
/* WARNING: Removing unreachable block (ram,0x8c019138) */
/* WARNING: Removing unreachable block (ram,0x8c019132) */
/* WARNING: Removing unreachable block (ram,0x8c01912e) */
/* WARNING: Removing unreachable block (ram,0x8c019136) */
/* WARNING: Removing unreachable block (ram,0x8c01913c) */
/* WARNING: Removing unreachable block (ram,0x8c019140) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c019128(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr4;
  
  uVar1 = FUN_8c256ce0(0,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7,in_fr4);
  return uVar1;
}



/* FUN_8c019160 @ 8c019160 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c019176) */
/* WARNING: Removing unreachable block (ram,0x8c019170) */
/* WARNING: Removing unreachable block (ram,0x8c01916a) */
/* WARNING: Removing unreachable block (ram,0x8c019166) */
/* WARNING: Removing unreachable block (ram,0x8c01916e) */
/* WARNING: Removing unreachable block (ram,0x8c019174) */
/* WARNING: Removing unreachable block (ram,0x8c019178) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c019160(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr4;
  
  uVar1 = FUN_8c256d7c(0,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7,in_fr4);
  return uVar1;
}



/* FUN_8c019198 @ 8c019198 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0191ae) */
/* WARNING: Removing unreachable block (ram,0x8c0191a6) */
/* WARNING: Removing unreachable block (ram,0x8c01919e) */
/* WARNING: Removing unreachable block (ram,0x8c0191a2) */
/* WARNING: Removing unreachable block (ram,0x8c0191aa) */
/* WARNING: Removing unreachable block (ram,0x8c0191b2) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c019198(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr4;
  
  uVar1 = FUN_8c256fec(0,ar5,ar6,ar7,(int)((ulonglong)in_dr4 >> 0x20));
  return uVar1;
}



/* FUN_8c0191c8 @ 8c0191c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0191c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c23617c(ar4,ar5,ar6,ar7,ar4);
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
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = &DAT_8c129a50, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c0192a8 @ 8c0192a8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c019374) */
/* WARNING: Removing unreachable block (ram,0x8c01935c) */
/* WARNING: Removing unreachable block (ram,0x8c019350) */
/* WARNING: Removing unreachable block (ram,0x8c019342) */
/* WARNING: Removing unreachable block (ram,0x8c01933c) */
/* WARNING: Removing unreachable block (ram,0x8c019330) */
/* WARNING: Removing unreachable block (ram,0x8c019320) */
/* WARNING: Removing unreachable block (ram,0x8c019314) */
/* WARNING: Removing unreachable block (ram,0x8c019308) */
/* WARNING: Removing unreachable block (ram,0x8c019300) */
/* WARNING: Removing unreachable block (ram,0x8c0192f4) */
/* WARNING: Removing unreachable block (ram,0x8c0192e4) */
/* WARNING: Removing unreachable block (ram,0x8c0192d8) */
/* WARNING: Removing unreachable block (ram,0x8c0192cc) */
/* WARNING: Removing unreachable block (ram,0x8c0192c4) */
/* WARNING: Removing unreachable block (ram,0x8c0192b8) */
/* WARNING: Removing unreachable block (ram,0x8c0192ae) */
/* WARNING: Removing unreachable block (ram,0x8c0192ba) */
/* WARNING: Removing unreachable block (ram,0x8c0192c6) */
/* WARNING: Removing unreachable block (ram,0x8c0192d6) */
/* WARNING: Removing unreachable block (ram,0x8c0192e2) */
/* WARNING: Removing unreachable block (ram,0x8c0192ea) */
/* WARNING: Removing unreachable block (ram,0x8c0192f6) */
/* WARNING: Removing unreachable block (ram,0x8c019302) */
/* WARNING: Removing unreachable block (ram,0x8c019312) */
/* WARNING: Removing unreachable block (ram,0x8c01931e) */
/* WARNING: Removing unreachable block (ram,0x8c019326) */
/* WARNING: Removing unreachable block (ram,0x8c019332) */
/* WARNING: Removing unreachable block (ram,0x8c01933e) */
/* WARNING: Removing unreachable block (ram,0x8c019346) */
/* WARNING: Removing unreachable block (ram,0x8c019352) */
/* WARNING: Removing unreachable block (ram,0x8c01935e) */
/* WARNING: Removing unreachable block (ram,0x8c019376) */
/* WARNING: Unknown calling convention */

undefined * FUN_8c0192a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0;
  *(undefined4 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  *(undefined4 *)(ar4 + 0x4c) = 0;
  *(undefined4 *)(ar4 + 0x6c) = 0;
  *(undefined4 *)(ar4 + 0x50) = 0;
  *(undefined4 *)(ar4 + 0x70) = 0;
  *(undefined4 *)(ar4 + 0x54) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0xbf800000;
  *(undefined4 *)(ar4 + 0x58) = 0xbf800000;
  *(undefined4 *)(ar4 + 0x78) = 0;
  *(undefined4 *)(ar4 + 0x5c) = 0;
  *(undefined4 *)(ar4 + 0x7c) = 0x41f00000;
  return &DAT_8c019380;
}



/* FUN_8c019384 @ 8c019384 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c019498) */
/* WARNING: Removing unreachable block (ram,0x8c01947c) */
/* WARNING: Removing unreachable block (ram,0x8c019478) */
/* WARNING: Removing unreachable block (ram,0x8c019472) */
/* WARNING: Removing unreachable block (ram,0x8c01946a) */
/* WARNING: Removing unreachable block (ram,0x8c01945e) */
/* WARNING: Removing unreachable block (ram,0x8c019452) */
/* WARNING: Removing unreachable block (ram,0x8c01944a) */
/* WARNING: Removing unreachable block (ram,0x8c01943e) */
/* WARNING: Removing unreachable block (ram,0x8c019432) */
/* WARNING: Removing unreachable block (ram,0x8c01942a) */
/* WARNING: Removing unreachable block (ram,0x8c01941e) */
/* WARNING: Removing unreachable block (ram,0x8c019412) */
/* WARNING: Removing unreachable block (ram,0x8c01940a) */
/* WARNING: Removing unreachable block (ram,0x8c0193fe) */
/* WARNING: Removing unreachable block (ram,0x8c0193f2) */
/* WARNING: Removing unreachable block (ram,0x8c0193ea) */
/* WARNING: Removing unreachable block (ram,0x8c0193de) */
/* WARNING: Removing unreachable block (ram,0x8c0193d2) */
/* WARNING: Removing unreachable block (ram,0x8c0193ca) */
/* WARNING: Removing unreachable block (ram,0x8c0193be) */
/* WARNING: Removing unreachable block (ram,0x8c0193b2) */
/* WARNING: Removing unreachable block (ram,0x8c0193aa) */
/* WARNING: Removing unreachable block (ram,0x8c0193a2) */
/* WARNING: Removing unreachable block (ram,0x8c01939a) */
/* WARNING: Removing unreachable block (ram,0x8c019392) */
/* WARNING: Removing unreachable block (ram,0x8c01938e) */
/* WARNING: Removing unreachable block (ram,0x8c019396) */
/* WARNING: Removing unreachable block (ram,0x8c01939e) */
/* WARNING: Removing unreachable block (ram,0x8c0193a6) */
/* WARNING: Removing unreachable block (ram,0x8c0193ae) */
/* WARNING: Removing unreachable block (ram,0x8c0193bc) */
/* WARNING: Removing unreachable block (ram,0x8c0193c8) */
/* WARNING: Removing unreachable block (ram,0x8c0193ce) */
/* WARNING: Removing unreachable block (ram,0x8c0193dc) */
/* WARNING: Removing unreachable block (ram,0x8c0193e8) */
/* WARNING: Removing unreachable block (ram,0x8c0193ee) */
/* WARNING: Removing unreachable block (ram,0x8c0193fc) */
/* WARNING: Removing unreachable block (ram,0x8c019408) */
/* WARNING: Removing unreachable block (ram,0x8c01940e) */
/* WARNING: Removing unreachable block (ram,0x8c01941c) */
/* WARNING: Removing unreachable block (ram,0x8c019428) */
/* WARNING: Removing unreachable block (ram,0x8c01942e) */
/* WARNING: Removing unreachable block (ram,0x8c01943c) */
/* WARNING: Removing unreachable block (ram,0x8c019448) */
/* WARNING: Removing unreachable block (ram,0x8c01944e) */
/* WARNING: Removing unreachable block (ram,0x8c01945c) */
/* WARNING: Removing unreachable block (ram,0x8c019468) */
/* WARNING: Removing unreachable block (ram,0x8c01946e) */
/* WARNING: Removing unreachable block (ram,0x8c019474) */
/* WARNING: Removing unreachable block (ram,0x8c01947a) */
/* WARNING: Removing unreachable block (ram,0x8c019496) */
/* WARNING: Removing unreachable block (ram,0x8c01949e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c019384(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 in_fr11;
  float in_fr10;
  int iVar2;
  
  uVar1 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  *(undefined4 *)(ar4 + 0x60) = uVar1;
  *(undefined4 *)(ar4 + 0x44) = uVar1;
  *(int *)(ar4 + 100) = (int)in_dr4;
  *(int *)(ar4 + 0x48) = (int)in_dr4;
  *(undefined4 *)(ar4 + 0x68) = in_fr6;
  *(undefined4 *)(ar4 + 0x4c) = in_fr6;
  *(undefined4 *)(ar4 + 0x6c) = in_fr7;
  *(undefined4 *)(ar4 + 0x50) = in_fr7;
  *(undefined4 *)(ar4 + 0x70) = in_fr8;
  *(undefined4 *)(ar4 + 0x54) = in_fr8;
  *(undefined4 *)(ar4 + 0x74) = in_fr9;
  *(undefined4 *)(ar4 + 0x58) = in_fr9;
  iVar2 = (int)((in_fr10 * 65536.0) / 360.0);
  *(int *)(ar4 + 0x78) = iVar2;
  *(int *)(ar4 + 0x5c) = iVar2;
  *(undefined4 *)(ar4 + 0x7c) = in_fr11;
  uVar1 = FUN_8c0194c0(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0194c0 @ 8c0194c0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0194e6) */
/* WARNING: Removing unreachable block (ram,0x8c0194e0) */
/* WARNING: Removing unreachable block (ram,0x8c0194da) */
/* WARNING: Removing unreachable block (ram,0x8c0194d4) */
/* WARNING: Removing unreachable block (ram,0x8c0194ca) */
/* WARNING: Removing unreachable block (ram,0x8c0194d6) */
/* WARNING: Removing unreachable block (ram,0x8c0194de) */
/* WARNING: Removing unreachable block (ram,0x8c0194e4) */
/* WARNING: Removing unreachable block (ram,0x8c0194e8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0194c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x7c) = in_fr4;
  uVar1 = FUN_8c257148((int)((*(float *)(ar4 + 0x7c) * 65536.0) / 360.0),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c019508 @ 8c019508 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c019526) */
/* WARNING: Removing unreachable block (ram,0x8c01951e) */
/* WARNING: Removing unreachable block (ram,0x8c019514) */
/* WARNING: Removing unreachable block (ram,0x8c019518) */
/* WARNING: Removing unreachable block (ram,0x8c019522) */
/* WARNING: Removing unreachable block (ram,0x8c01952a) */
/* WARNING: Unknown calling convention */

undefined8 * FUN_8c019508(undefined4 ar4,undefined4 *ar5,undefined8 *ar6,undefined8 *ar7)

{
  char cVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar1 = '\0';
  uStack_14 = *ar5;
  uStack_10 = ar5[1];
  uStack_c = ar5[2];
  FUN_8c256294(0,&uStack_14,&uStack_1c,ar7);
  if (cVar1 == '\0') {
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

/* WARNING: Removing unreachable block (ram,0x8c01956a) */
/* WARNING: Removing unreachable block (ram,0x8c019564) */
/* WARNING: Removing unreachable block (ram,0x8c01956e) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c019560(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 0x44) = in_fr4;
  *(undefined4 *)(ar4 + 0x48) = in_fr5;
  *(undefined4 *)(ar4 + 0x4c) = in_fr6;
  return (undefined4 *)(ar4 + 0x48);
}



/* FUN_8c019574 @ 8c019574 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c01957e) */
/* WARNING: Removing unreachable block (ram,0x8c019578) */
/* WARNING: Removing unreachable block (ram,0x8c019582) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c019574(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 0x50) = in_fr4;
  *(undefined4 *)(ar4 + 0x54) = in_fr5;
  *(undefined4 *)(ar4 + 0x58) = in_fr6;
  return (undefined4 *)(ar4 + 0x54);
}



/* Class_1299f8_m4_019588 @ 8c019588 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0196aa) */
/* WARNING: Removing unreachable block (ram,0x8c0195a0) */
/* WARNING: Removing unreachable block (ram,0x8c01958e) */
/* WARNING: Removing unreachable block (ram,0x8c01958a) */
/* WARNING: Removing unreachable block (ram,0x8c019588) */
/* WARNING: Removing unreachable block (ram,0x8c01958c) */
/* WARNING: Removing unreachable block (ram,0x8c01959e) */
/* WARNING: Removing unreachable block (ram,0x8c0195a2) */
/* WARNING: Removing unreachable block (ram,0x8c0196b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 Class_1299f8_m4_019588(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined1 *ar6_00;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 in_dr4;
  undefined4 uVar8;
  undefined8 in_dr6;
  undefined4 in_fr13;
  float fVar9;
  undefined4 uVar10;
  double in_xd0;
  int iVar11;
  char cVar12;
  char cVar13;
  undefined4 in_stack_00000000;
  undefined4 uStack_168;
  undefined4 auStack_160 [4];
  undefined1 auStack_150 [12];
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 auStack_138 [16];
  undefined1 auStack_f8 [64];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [64];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [20];
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar8 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  dVar4 = (double)CONCAT44((int)in_dr4,in_fr13);
  uVar10 = (undefined4)((ulonglong)in_dr6 >> 0x20);
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  FUN_8c0241e8(&uStack_48,ar5,ar6,ar7);
  FUN_8c024088(&uStack_68,ar5,ar6,ar7);
  FUN_8c023e44(auStack_a8,ar5,ar6,ar7);
  Vec3_ctor_xyz(auStack_b8,ar5,ar6,ar7);
  if (cVar13 == '\0') {
    uStack_144 = *(undefined4 *)(ar4 + 0x50);
    uStack_140 = *(undefined4 *)(ar4 + 0x54);
    uStack_13c = *(undefined4 *)(ar4 + 0x58);
  }
  else {
    uStack_144 = (undefined4)*(undefined8 *)(ar4 + 0x50);
    uStack_140 = (undefined4)*(undefined8 *)(ar4 + 0x54);
    uStack_13c = (undefined4)*(undefined8 *)(ar4 + 0x58);
    auStack_138[0] = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x58) >> 0x20);
  }
  FUN_8c023e7c(auStack_a8,ar5,ar6,ar7);
  FUN_8c25cddc(auStack_f8,ar5,ar6,ar7,uVar8);
  puVar1 = auStack_138;
  FUN_8c25cddc(puVar1,ar5,ar6,ar7,uVar8);
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(_DAT_8c4aa4b4,uVar8);
  }
  else {
    in_xd0 = (double)CONCAT44(uStack_168,uVar8);
    dVar7 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
  }
  if (cVar12 == '\0') {
    fVar2 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar7 - dVar7,0);
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(_DAT_8c4aa4b8,fVar2);
  }
  else {
    fVar2 = SUB84(in_xd0,0);
    dVar7 = (double)CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
  }
  if (cVar12 == '\0') {
    fVar9 = (float)((ulonglong)dVar4 >> 0x20) - (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar9 = (float)((ulonglong)(dVar4 - dVar7) >> 0x20);
  }
  FUN_8c013b8c(puVar1,ar5,ar6,ar7);
  uVar8 = (undefined4)((ulonglong)dVar7 >> 0x20);
  if (cVar13 == '\0') {
    dVar4 = (double)CONCAT44(0x47800000,uVar8);
    dVar7 = in_xd0;
  }
  else {
    dVar4 = 12831.689682006836;
    auStack_160[0] = uVar8;
  }
  if (cVar12 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar4 = (double)CONCAT44(0x40c90fd8,fVar3);
  }
  else {
    dVar4 = 1.4411521590097244e+18;
  }
  if (cVar12 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44((float)(int)fVar3,uVar10);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar4 = (double)(int)(dVar4 / dVar4);
  }
  if (cVar13 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar5;
  }
  if (cVar13 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,SUB84(dVar5,0));
  }
  else {
    dVar5 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) / (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 / dVar5;
  }
  FUN_8c013b8c(puVar1,ar5,ar6,ar7);
  if (cVar13 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,(int)((ulonglong)dVar5 >> 0x20));
    dVar5 = dVar7;
  }
  else {
    dVar6 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x40c90fd8,fVar3);
  }
  else {
    dVar7 = 1.4411521590097244e+18;
  }
  if (cVar12 == '\0') {
    fVar3 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    iVar11 = (int)fVar3;
  }
  else {
    fVar3 = SUB84(dVar7 / dVar7,0);
    iVar11 = (int)(dVar7 / dVar7);
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar7 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    dVar6 = (double)CONCAT44(fVar9,(float)iVar11 * (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    dVar6 = (double)CONCAT44(fVar9,(float)iVar11) * dVar7;
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,SUB84(dVar7,0));
  }
  else {
    dVar7 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                             SUB84(dVar6,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    dVar6 = dVar6 / dVar7;
  }
  uVar8 = (undefined4)((ulonglong)dVar6 >> 0x20);
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,SUB84(dVar7,0));
  }
  else {
    dVar7 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar6 = (double)CONCAT44(uVar8,-SUB84(dVar6,0) * (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    dVar6 = (double)CONCAT44(uVar8,-SUB84(dVar6,0)) * dVar7;
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,SUB84(dVar7,0));
  }
  else {
    dVar7 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    iVar11 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar11 = (int)(dVar6 / dVar7);
  }
  FUN_8c256ce0(auStack_f8,iVar11,ar6,ar7,fVar2);
  if (cVar12 == '\0') {
    dVar4 = (double)CONCAT44(-(float)((ulonglong)dVar4 >> 0x20),SUB84(dVar4,0));
  }
  else {
    dVar4 = -dVar4;
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,SUB84(dVar7,0));
  }
  else {
    dVar7 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * (float)((ulonglong)dVar7 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar7;
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,SUB84(dVar7,0));
  }
  else {
    dVar7 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    fVar9 = (float)((ulonglong)dVar4 >> 0x20) / (float)((ulonglong)dVar7 >> 0x20);
    dVar4 = (double)CONCAT44(fVar9,SUB84(dVar4,0));
    iVar11 = (int)fVar9;
  }
  else {
    dVar4 = dVar4 / dVar7;
    iVar11 = (int)dVar4;
  }
  FUN_8c256a78(auStack_138,iVar11,ar6,ar7,fVar2);
  FUN_8c255d6c(auStack_f8,auStack_138,ar6,ar7,fVar2);
  ar6_00 = auStack_150;
  puVar1 = &uStack_144;
  FUN_8c21279c(auStack_f8,puVar1,ar6_00,ar7,fVar2);
  FUN_8c022d04(auStack_58,puVar1,ar6_00,ar7);
  Vec3_length(auStack_58,puVar1,ar6_00,ar7);
  if (cVar13 == '\0') {
    uStack_68 = *(undefined4 *)(ar4 + 0x44);
    uStack_64 = *(undefined4 *)(ar4 + 0x48);
    uStack_60 = *(undefined4 *)(ar4 + 0x4c);
    dVar7 = (double)CONCAT44(uStack_60,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    uStack_68 = (undefined4)*(undefined8 *)(ar4 + 0x44);
    uStack_64 = (undefined4)*(undefined8 *)(ar4 + 0x48);
    dVar7 = *(double *)(ar4 + 0x4c);
    uStack_60 = SUB84(dVar7,0);
    uStack_5c = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar5 = *(double *)(ar4 + 0x50);
  }
  fVar2 = SUB84(dVar4,0);
  if (cVar12 == '\0') {
    fVar9 = SUB84(dVar7,0) * fVar2;
  }
  else {
    fVar9 = SUB84(dVar7 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x44),fVar9);
  }
  else {
    dVar7 = *(double *)(ar4 + 0x44);
  }
  if (cVar12 == '\0') {
    fVar9 = (float)((ulonglong)dVar7 >> 0x20);
    dVar7 = (double)CONCAT44(fVar9,SUB84(dVar7,0) + fVar9);
  }
  else {
    dVar7 = dVar7 + dVar7;
  }
  if (cVar13 == '\0') {
    uStack_48 = SUB84(dVar7,0);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)(ar4 + 0x54));
  }
  else {
    uStack_48 = SUB84(dVar5,0);
    dVar5 = *(double *)(ar4 + 0x54);
  }
  if (cVar12 == '\0') {
    fVar9 = SUB84(dVar7,0) * fVar2;
  }
  else {
    fVar9 = SUB84(dVar7 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar9);
  }
  else {
    dVar7 = *(double *)(ar4 + 0x48);
  }
  if (cVar12 == '\0') {
    fVar9 = (float)((ulonglong)dVar7 >> 0x20);
    dVar7 = (double)CONCAT44(fVar9,SUB84(dVar7,0) + fVar9);
  }
  else {
    dVar7 = dVar7 + dVar7;
  }
  if (cVar13 == '\0') {
    uStack_44 = SUB84(dVar7,0);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)(ar4 + 0x58));
  }
  else {
    uStack_44 = SUB84(dVar5,0);
    dVar5 = *(double *)(ar4 + 0x58);
  }
  if (cVar12 == '\0') {
    fVar2 = SUB84(dVar7,0) * fVar2;
  }
  else {
    fVar2 = SUB84(dVar7 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x4c),fVar2);
  }
  else {
    dVar4 = *(double *)(ar4 + 0x4c);
  }
  if (cVar12 == '\0') {
    fStack_40 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fStack_40 = SUB84(dVar4 + dVar4,0);
  }
  if (cVar13 == '\0') {
    uStack_38 = *(undefined4 *)(ar4 + 0x50);
    uStack_34 = *(undefined4 *)(ar4 + 0x54);
    uStack_30 = *(undefined4 *)(ar4 + 0x58);
  }
  else {
    fStack_40 = SUB84(dVar5,0);
    uStack_3c = (undefined4)((ulonglong)dVar5 >> 0x20);
    uStack_38 = (undefined4)*(undefined8 *)(ar4 + 0x50);
    uStack_34 = (undefined4)*(undefined8 *)(ar4 + 0x54);
    uStack_30 = (undefined4)*(undefined8 *)(ar4 + 0x58);
    uStack_2c = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x58) >> 0x20);
  }
  puVar1 = &uStack_48;
  FUN_8c0240bc(&uStack_68,&uStack_38,puVar1,ar7);
  Vec3_assign(auStack_28,auStack_160,puVar1,ar7);
  Vec3_dtor(auStack_160,0xffffffff,puVar1,ar7);
  Vec3_ctor_copy(in_stack_00000000,auStack_28,puVar1,ar7);
  Vec3_dtor(auStack_b8,0xffffffff,puVar1,ar7);
  free_if_nonnull_wrap_023e4c(auStack_a8,0xffffffff,puVar1,ar7);
  FUN_8c0198dc(&uStack_68,0xffffffff,puVar1,ar7);
  FUN_8c019928(&uStack_48,0xffffffff,puVar1,ar7);
  Vec3_dtor(auStack_28,0xffffffff,puVar1,ar7);
  return 0;
}



/* FUN_8c0198dc @ 8c0198dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0198dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c019928 @ 8c019928 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c019928(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c019974 @ 8c019974 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c019992) */
/* WARNING: Removing unreachable block (ram,0x8c01998c) */
/* WARNING: Removing unreachable block (ram,0x8c019984) */
/* WARNING: Removing unreachable block (ram,0x8c019986) */
/* WARNING: Removing unreachable block (ram,0x8c01998e) */
/* WARNING: Removing unreachable block (ram,0x8c019994) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c019974(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c014334(0x8c279178,ar5,ar6,ar7,"x:%4.1lf y:%4.1lf z:%4.1lf");
  uVar1 = noop_102824(0x8c279178,ar5,ar6,0xd,0xffffffff);
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
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129a24;
    object_dtor_delete(ar4 + 0x2c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x28,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x24,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x20,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    free_if_nonnull_wrap_019270(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c019b38 @ 8c019b38 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c019b3c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c019b38(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x84) = in_fr4;
  return 0x84;
}



/* FUN_8c019b48 @ 8c019b48 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c019b4c) */
/* WARNING: Removing unreachable block (ram,0x8c019b4e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c019b48(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 in_dr4;
  
  *(float *)(ar4 + 0x84) = -(float)((ulonglong)in_dr4 >> 0x20);
  return 0x84;
}



/* FUN_8c019b58 @ 8c019b58 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c019b5c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c019b58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x88) = in_fr4;
  return 0x88;
}



/* Class_129a24_m1_019b68 @ 8c019b68 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c019bd8) */
/* WARNING: Removing unreachable block (ram,0x8c019bcc) */
/* WARNING: Removing unreachable block (ram,0x8c019bc0) */
/* WARNING: Removing unreachable block (ram,0x8c019ba2) */
/* WARNING: Removing unreachable block (ram,0x8c019b96) */
/* WARNING: Removing unreachable block (ram,0x8c019b8a) */
/* WARNING: Removing unreachable block (ram,0x8c019b8e) */
/* WARNING: Removing unreachable block (ram,0x8c019b9a) */
/* WARNING: Removing unreachable block (ram,0x8c019ba6) */
/* WARNING: Removing unreachable block (ram,0x8c019bc4) */
/* WARNING: Removing unreachable block (ram,0x8c019bd0) */
/* WARNING: Removing unreachable block (ram,0x8c019bdc) */
/* WARNING: Unknown calling convention */

undefined4 Class_129a24_m1_019b68(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  double dVar5;
  undefined8 in_xd0;
  int iVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffff28;
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
  undefined4 auStack_88 [16];
  undefined1 auStack_48 [68];
  
  cVar8 = '\0';
  cVar7 = '\0';
  uStack_94 = *(undefined4 *)(ar4 + 0x90);
  uStack_90 = *(undefined4 *)(ar4 + 0x94);
  uStack_8c = *(undefined4 *)(ar4 + 0x98);
  uStack_a0 = *(undefined4 *)(ar4 + 0xa0);
  uStack_9c = *(undefined4 *)(ar4 + 0xa4);
  uStack_98 = *(undefined4 *)(ar4 + 0xa8);
  FUN_8c25cddc(auStack_48,ar5,ar6,ar7,in_stack_ffffff28);
  FUN_8c25cddc(auStack_88,ar5,ar6,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0xb4));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0xb4);
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar4);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar6 = (int)(dVar5 / dVar5);
  }
  FUN_8c256ce0(auStack_88,iVar6,ar6,ar7,in_stack_ffffff28);
  FUN_8c255d6c(auStack_48,auStack_88,ar6,ar7,in_stack_ffffff28);
  puVar3 = &uStack_ac;
  puVar2 = &uStack_94;
  FUN_8c21279c(auStack_48,puVar2,puVar3,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(uStack_ac,*(undefined4 *)(ar4 + 0x80));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x80);
    dVar5 = (double)CONCAT44(uStack_a8,uStack_ac);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x44),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x44);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x44) = fVar4;
    dVar5 = (double)CONCAT44(uStack_a4,*(undefined4 *)(ar4 + 0x80));
  }
  else {
    *(undefined8 *)(ar4 + 0x44) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x80);
    dVar5 = (double)CONCAT44(uStack_a0,uStack_a4);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x4c),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x4c);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x4c) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x4c) = in_xd0;
  }
  FUN_8c235f44(ar4 + 4,puVar2,puVar3,ar7);
  FUN_8c25cddc(auStack_88,puVar2,puVar3,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0xb0));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0xb0);
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar4);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar6 = (int)(dVar5 / dVar5);
  }
  FUN_8c256a78(auStack_88,iVar6,puVar3,ar7,in_stack_ffffff28);
  puVar2 = auStack_88;
  FUN_8c255d6c(auStack_48,puVar2,puVar3,ar7,in_stack_ffffff28);
  FUN_8c25cddc(auStack_88,puVar2,puVar3,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0xb8));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0xb8);
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar4);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar6 = (int)(dVar5 / dVar5);
  }
  FUN_8c256d7c(auStack_88,iVar6,puVar3,ar7,in_stack_ffffff28);
  FUN_8c255d6c(auStack_48,auStack_88,puVar3,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
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
  FUN_8c21279c(auStack_48,&uStack_94,&uStack_c4,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
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
  FUN_8c255f40(&uStack_ac,puVar2,puVar3,ar7);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(uStack_b8,*(undefined4 *)(ar4 + 0x84));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x84);
    dVar5 = (double)CONCAT44(uStack_b4,uStack_b8);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x44),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x44);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x44) = fVar4;
    dVar5 = (double)CONCAT44(uStack_b4,*(undefined4 *)(ar4 + 0x84));
  }
  else {
    *(undefined8 *)(ar4 + 0x44) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x84);
    dVar5 = (double)CONCAT44(uStack_b0,uStack_b4);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x48);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x48) = fVar4;
    dVar5 = (double)CONCAT44(uStack_b0,*(undefined4 *)(ar4 + 0x84));
  }
  else {
    *(undefined8 *)(ar4 + 0x48) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x84);
    dVar5 = (double)CONCAT44(uStack_ac,uStack_b0);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x4c),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x4c);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x4c) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x4c) = in_xd0;
  }
  vec3_clear(ar4 + 0x80,puVar2,puVar3,ar7);
  uVar1 = FUN_8c2572ec(ar4 + 4,puVar2,puVar3,ar7);
  return uVar1;
}



/* Class_129a24_m4_019e40 @ 8c019e40 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c019e5e) */
/* WARNING: Removing unreachable block (ram,0x8c019e50) */
/* WARNING: Removing unreachable block (ram,0x8c019e48) */
/* WARNING: Removing unreachable block (ram,0x8c019e4c) */
/* WARNING: Removing unreachable block (ram,0x8c019e5a) */
/* WARNING: Removing unreachable block (ram,0x8c019e62) */
/* WARNING: Unknown calling convention */

undefined4
Class_129a24_m4_019e40(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [20];
  
  Class_1299f8_m4_019588(ar4,ar5,ar6,ar7);
  Vec3_ctor_copy(auStack_14,auStack_24,ar6,ar7);
  Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
  Vec3_ctor_copy(s0,auStack_14,ar6,ar7);
  Vec3_dtor(auStack_14,0xffffffff,ar6,ar7);
  return 0;
}



/* Class_1299f8_m0_019eb8 @ 8c019eb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_1299f8_m0_019eb8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c1299f8;
    ar5_00 = 0;
    free_if_nonnull_wrap_019270(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_1299f8_m3_019f00 @ 8c019f00 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c019f00) */
/* WARNING: Unknown calling convention */

undefined4 Class_1299f8_m3_019f00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  double dVar3;
  float fVar5;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined8 uStack_6c;
  undefined1 auStack_58 [16];
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 auStack_3c [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fVar4;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar2 = ar5;
  Vec3_ctor_zero(&uStack_1c,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_2c,ar5,ar6,ar7);
  Vec3_ctor_xyz(auStack_3c,ar5,ar6,ar7);
  fVar5 = 0.0;
  Vec3_sub(uVar2,auStack_3c,ar6,ar7,auStack_58);
  Vec3_assign(&uStack_1c,auStack_58,ar6,ar7);
  Vec3_dtor(auStack_58,0xffffffff,ar6,ar7);
  FUN_8c023c30(&uStack_1c,ar4 + 0x80,ar6,ar7,(int)&uStack_6c + 4);
  Vec3_assign(&uStack_2c,(int)&uStack_6c + 4,ar6,ar7);
  ar5_00 = 0xffffffff;
  Vec3_dtor((int)&uStack_6c + 4,0xffffffff,ar6,ar7);
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(uStack_2c,uStack_1c);
  }
  else {
    in_xd0 = CONCAT44(uStack_18,uStack_1c);
    dVar3 = (double)CONCAT44(uStack_28,uStack_2c);
  }
  if (cVar7 == '\0') {
    fStack_48 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fStack_48 = SUB84(dVar3 - dVar3,0);
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(uStack_28,uStack_18);
  }
  else {
    fStack_48 = (float)in_xd0;
    in_xd0 = CONCAT44(uStack_14,uStack_18);
    dVar3 = (double)CONCAT44(uStack_24,uStack_28);
  }
  if (cVar7 == '\0') {
    fStack_44 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fStack_44 = SUB84(dVar3 - dVar3,0);
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(uStack_24,uStack_14);
  }
  else {
    fStack_44 = (float)in_xd0;
    in_xd0 = CONCAT44(uStack_10,uStack_14);
    dVar3 = (double)CONCAT44(uStack_20,uStack_24);
  }
  if (cVar7 == '\0') {
    fVar4 = (float)((ulonglong)dVar3 >> 0x20);
    dVar3 = (double)CONCAT44(fVar4,SUB84(dVar3,0) - fVar4);
  }
  else {
    dVar3 = dVar3 - dVar3;
  }
  if (cVar8 == '\0') {
    uStack_40 = SUB84(dVar3,0);
  }
  else {
    uStack_40 = (undefined4)in_xd0;
    auStack_3c[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  FUN_8c2570d8(&fStack_48,ar5_00,ar6,ar7,uVar2);
  dVar1 = dVar3;
  if (cVar8 == '\0') {
    fVar5 = (float)((ulonglong)dVar3 >> 0x20);
    uStack_6c = (double)CONCAT44(uStack_6c._4_4_,fVar5);
    dVar1 = uStack_6c;
  }
  uStack_6c = dVar1;
  FUN_8c25ce48(&fStack_48,ar5_00,ar6,ar7,uVar2);
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x50) = fStack_48;
    *(float *)(ar4 + 0x54) = fStack_44;
    *(undefined4 *)(ar4 + 0x58) = uStack_40;
    dVar3 = (double)CONCAT44(0x43fa0000,SUB84(dVar3,0));
  }
  else {
    *(ulonglong *)(ar4 + 0x50) = CONCAT44(fStack_44,fStack_48);
    *(ulonglong *)(ar4 + 0x54) = CONCAT44(uStack_40,fStack_44);
    *(ulonglong *)(ar4 + 0x58) = CONCAT44(auStack_3c[0],uStack_40);
    dVar3 = 1.6066918595405548e+73;
  }
  if (cVar7 == '\0') {
    bVar6 = fVar5 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,fVar5) < dVar3;
  }
  if (bVar6) {
    Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7);
    Vec3_dtor(&uStack_2c,0xffffffff,ar6,ar7);
    uVar2 = Vec3_dtor(&uStack_1c,0xffffffff,ar6,ar7);
  }
  else {
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(uStack_2c,*(undefined4 *)(ar4 + 0x44));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x44);
      dVar3 = (double)CONCAT44(uStack_28,uStack_2c);
    }
    if (cVar7 == '\0') {
      fVar5 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x44) = fVar5;
      dVar3 = (double)CONCAT44(uStack_28,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(undefined8 *)(ar4 + 0x44) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar3 = (double)CONCAT44(uStack_24,uStack_28);
    }
    if (cVar7 == '\0') {
      fVar5 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x48) = fVar5;
      dVar3 = (double)CONCAT44(uStack_24,*(undefined4 *)(ar4 + 0x4c));
    }
    else {
      *(undefined8 *)(ar4 + 0x48) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x4c);
      dVar3 = (double)CONCAT44(uStack_20,uStack_24);
    }
    if (cVar7 == '\0') {
      fVar5 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x4c) = fVar5;
    }
    else {
      *(undefined8 *)(ar4 + 0x4c) = in_xd0;
    }
    Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7);
    Vec3_dtor(&uStack_2c,0xffffffff,ar6,ar7);
    uVar2 = Vec3_dtor(&uStack_1c,0xffffffff,ar6,ar7);
  }
  return uVar2;
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
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c1299ec;
    ar5_00 = 0xffffffff;
    object_dtor_delete(ar4 + 0x57,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
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
  
  uVar1 = FUN_8c23a8a4(ar4 + 4,ar5,ar6,ar7,ar4);
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
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
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
  undefined *ar5_00;
  undefined *ar6_00;
  int *ar7_00;
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
    iVar1 = (*(code *)PTR_thunk_FUN_8c1fda7e_8c01a5ac)(*DAT_8c01a598,ar5,ar6,ar7);
    if (iVar1 == 0) {
      return *DAT_8c01a594;
    }
    *DAT_8c01a594 = 2;
  }
  if (*DAT_8c01a594 == 2) {
    iVar1 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c01a5b0)(*DAT_8c01a598,ar5,ar6,ar7);
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
  ar7_00 = ar4 + 4;
  ar6_00 = PTR_s_VM_User_Icon_VMI_8c01a5bc + 0x11;
  ar5_00 = PTR_s_VM_User_Icon_VMI_8c01a5bc;
  iVar1 = (*(code *)PTR_FUN_8c01a5c4)(DAT_8c01a5c0,PTR_s_VM_User_Icon_VMI_8c01a5bc,ar6_00,ar7_00);
  if (iVar1 == 0) {
    ar4[4] = 0;
  }
  ar4[6] = 0;
  (*(code *)PTR_FUN_8c01a5c8)(ar4,ar5_00,ar6_00,ar7_00);
  return *DAT_8c01a594;
}



/* FUN_8c01a5cc @ 8c01a5cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01a5cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*DAT_8c01a620 == 3) {
    iVar2 = (*(code *)PTR_thunk_FUN_8c1fda7e_8c01a628)(*DAT_8c01a624,ar5,ar6,ar7);
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
  int *ar5_00;
  bool bVar3;
  
  ar5_00 = (int *)ar4[9];
  uVar1 = DAT_8c01a734;
  (*(code *)PTR_memmove_8c01a738)(ar4 + 0xb,ar5_00,DAT_8c01a734,ar7);
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
      ar5_00 = (int *)ar4[10];
      uVar1 = DAT_8c01a734;
      (*(code *)PTR_memmove_8c01a738)(ar4 + 0xb,ar5_00,DAT_8c01a734,ar7);
      bVar3 = true;
    }
  }
  if (0 < ar4[6]) {
    if ((ar4[6] == 0x1e) || (bVar3)) {
      ar5_00 = (int *)PTR_DAT_8c01a740;
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
    ar5_00 = ar4 + 0xb;
    (*(code *)PTR_FUN_8c01a748)(ar4,ar5_00,uVar1,ar7);
  }
  if (*ar4 < 0) {
    uVar1 = *DAT_8c01a74c;
  }
  else {
    iVar2 = *(int *)((int)ar4 + DAT_8c01a750 + *ar4 * 0x28);
    if (iVar2 == 2) {
      (*(code *)PTR_FUN_8c01a758)(ar4,ar5_00,uVar1,ar7);
    }
    else if (iVar2 == 3) {
      (*(code *)PTR_FUN_8c01a754)(ar4,ar5_00,uVar1,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c01a75c)(ar4,ar5_00,uVar1,ar7);
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
  
  iVar2 = ar4[*ar4 * 10 + 0x915];
  uVar1 = 0xd;
  if ((iVar2 < 0xe) && (-1 < iVar2)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    case 0:
      uVar1 = FUN_8c01c1a4(ar4,ar5,ar6,ar7);
      break;
    case 1:
      uVar1 = FUN_8c01c260(ar4,ar5,ar6,ar7);
      break;
    case 2:
      iVar2 = FUN_8c01aa94(ar4,ar5,ar6,ar7);
      if (iVar2 == 1) {
        uVar1 = FUN_8c01a98c(ar4,ar5,ar6,ar7);
      }
      else {
        FUN_8c01c924(ar4,ar5,ar6,ar7);
        uVar1 = FUN_8c01bebc(ar4,ar5,ar6,ar7);
      }
      break;
    case 3:
      FUN_8c01c924(ar4,ar5,ar6,ar7);
      uVar1 = FUN_8c01bfd0(ar4,ar5,ar6,ar7);
      break;
    case 4:
      FUN_8c01c924(ar4,ar5,ar6,ar7);
      uVar1 = FUN_8c01c0e4(ar4,ar5,ar6,ar7);
      break;
    case 5:
      uVar1 = FUN_8c01c450(ar4,ar5,ar6,ar7);
      break;
    case 6:
      uVar1 = FUN_8c01c4d8(ar4,ar5,ar6,ar7);
      break;
    case 7:
      uVar1 = FUN_8c01c560(ar4,ar5,ar6,ar7);
      break;
    case 8:
      uVar1 = FUN_8c01c320(ar4,ar5,ar6,ar7);
      break;
    case 9:
      uVar1 = FUN_8c01c3c4(ar4,ar5,ar6,ar7);
      break;
    case 10:
      uVar1 = FUN_8c01c6f4(ar4,ar5,ar6,ar7);
      break;
    case 0xb:
      uVar1 = FUN_8c01c774(ar4,ar5,ar6,ar7);
      break;
    case 0xc:
      uVar1 = FUN_8c01c7f4(ar4,ar5,ar6,ar7);
      break;
    case 0xd:
      uVar1 = FUN_8c01c860(ar4,ar5,ar6,ar7);
    }
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
  int *ar4_00;
  
  do {
    ar4_00 = ar4;
    iVar1 = (*(code *)PTR_FUN_8c01ab6c)(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) break;
  } while (-1 < *ar4);
  if (0 < *DAT_8c01ab70) {
    (*(code *)PTR_FUN_8c01ab74)(ar4_00,ar5,ar6,ar7);
  }
  *DAT_8c01ab70 = 0;
  return 1;
}



/* FUN_8c01ab78 @ 8c01ab78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c01ab78(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((uVar2 < 0x80 && (ar4[uVar2 * 10 + 0x913] != 0xffffffff))) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < 0x80) {
    if ((int)*ar4 < 0) {
      *ar4 = uVar2;
    }
    else {
      uVar1 = *ar4;
      while (-1 < (int)ar4[uVar1 * 10 + 0x916]) {
        uVar1 = ar4[uVar1 * 10 + 0x916];
      }
      ar4[uVar1 * 10 + 0x916] = uVar2;
    }
    strcpy(ar4 + uVar2 * 10 + 0x917,ar6,ar6,ar7,ar5);
    ar4[uVar2 * 10 + 0x915] = ar5;
    ar4[uVar2 * 10 + 0x914] = 2;
    ar4[uVar2 * 10 + 0x916] = 0xffffffff;
    ar4[uVar2 * 10 + 0x913] = ar4[3];
    if ((int)ar4[3] < 0x10000) {
      ar4[3] = ar4[3] + 1;
    }
    else {
      ar4[3] = 10;
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
  uint *ar5_00;
  uint uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [10];
  undefined1 auStack_16 [14];
  
  (*(code *)PTR_FUN_8c01ad74)(auStack_16,ar5,ar6,ar7);
  ar5_00 = &uStack_24;
  (*(code *)PTR_FUN_8c01ad78)(auStack_16,ar5_00,ar6,ar7);
  uStack_24 = uStack_24 + 10;
  while( true ) {
    (*(code *)PTR_FUN_8c01ad7c)(ar4,ar5_00,ar6,ar7);
    (*(code *)PTR_FUN_8c01ad74)(auStack_20,ar5_00,ar6,ar7);
    ar5_00 = &uStack_28;
    (*(code *)PTR_FUN_8c01ad78)(auStack_20,ar5_00,ar6,ar7);
    if (uStack_24 < uStack_28) {
      return 0;
    }
    iVar1 = *(int *)(DAT_8c01ad80 + ar5 * 0x28 + ar4);
    if ((iVar1 != 2) && (iVar1 != 3)) break;
    (*(code *)PTR_FUN_8c01ad84)(ar4,ar5_00,ar6,ar7);
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
  int ar5_00;
  
  if (*DAT_8c01af04 == 3) {
    ar5_00 = (*(code *)PTR_FUN_8c01af08)(ar4,ar5,ar6,ar7);
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*(code *)PTR_FUN_8c01af0c)(ar4,ar5_00,ar6,ar7);
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

int FUN_8c01af14(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  uint ar5_00;
  int iVar2;
  undefined4 uVar3;
  undefined1 *ar5_01;
  undefined4 uVar4;
  undefined4 ar7_00;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined1 auStack_80 [18];
  undefined1 auStack_6e [50];
  int iStack_3c;
  int iStack_38;
  undefined2 uStack_34;
  ushort uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  uVar3 = 2;
  ar7_00 = ar7;
  uVar4 = ar5;
  iVar1 = FUN_8c01ab78(ar4,2,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    ar4_00 = malloc_thunk(0x5380,uVar3,ar5,ar7_00);
    if (ar4_00 == 0) {
      iVar1 = -1;
    }
    else {
      memset(ar4_00,0,0x5380,ar7_00);
      memmove(ar4_00,ar6,ar7,ar7_00);
      uVar3 = 0x60;
      memset(auStack_80,0,0x60,ar7_00);
      strcpy(auStack_80,in_stack_00000000,uVar3,ar7_00,uVar4);
      strcpy(auStack_6e,in_stack_00000004,uVar3,ar7_00,uVar4);
      iStack_3c = *(int *)(ar4 + 0x10) + 0xa0;
      iStack_38 = *(int *)(ar4 + 0x10) + 0xc0;
      uStack_34 = 1;
      uStack_24 = 0x5380;
      uVar4 = 0x5380;
      ar5_00 = (uint)uStack_2c;
      iStack_28 = ar4_00;
      iVar2 = FUN_8c2017a8(1,ar5_00,0x5380,ar7_00);
      iVar2 = malloc_thunk(iVar2 << 9,ar5_00,uVar4,ar7_00);
      if (iVar2 == 0) {
        iVar1 = -1;
      }
      else {
        ar5_01 = auStack_80;
        uVar3 = FUN_8c2015b0(iVar2,ar5_01,uVar4,ar7_00);
        FUN_8c1fb57c(ar4_00,ar5_01,uVar4,ar7_00);
        *(undefined4 *)(iVar1 * 0x28 + ar4 + 0x246c) = uVar3;
        *(int *)(iVar1 * 0x28 + ar4 + 0x2470) = iVar2;
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
  undefined4 in_stack_ffffffe4;
  undefined4 uStack_10;
  undefined4 auStack_c [2];
  
  if (*DAT_8c01b12c == 3) {
    iVar2 = (*(code *)PTR_file_load_to_buffer_8c01b138)
                      (DAT_8c01b134,ar5,PTR_s_VM_User_Icon_VMI_8c01b130 + 0x11,auStack_c);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      (*(code *)PTR_FUN_8c01b13c)
                (ar4,ar5,auStack_c[0],uStack_10,ar6,ar7,ar4,ar6,ar7,in_stack_ffffffe4);
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

undefined4
FUN_8c01b144(undefined4 ar4,undefined4 ar5,undefined4 ar6,uint ar7,undefined4 s0,undefined4 s4,
            undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar5_00;
  uint ar7_00;
  int aiStack_20 [3];
  undefined4 uStack_c;
  
  uStack_c = 1;
  iVar1 = -DAT_8c01b26c;
  *(undefined4 *)((int)aiStack_20 + iVar1 + 8) = ar6;
  ar7_00 = ar7;
  uVar2 = (*(code *)PTR_FUN_8c01b274)(*DAT_8c01b270,ar5,ar6,ar7);
  *(undefined4 *)((int)&s16 + iVar1) = uVar2;
  if (DAT_8c01b278 != *(int *)((int)&s16 + iVar1)) {
    if (*(int *)((int)&s16 + iVar1) != 0) {
      return 0;
    }
    uVar2 = (*(code *)PTR_FUN_8c01b27c)(ar4,ar5,ar6,ar7_00);
    *(undefined4 *)((int)&s12 + iVar1) = uVar2;
    if (*(int *)((int)&s12 + iVar1) == 0) {
      return 0;
    }
  }
  uVar3 = 1;
  uVar2 = (*(code *)PTR_FUN_8c01b280)(*DAT_8c01b270,1,ar6,ar7_00);
  *(undefined4 *)((int)&s8 + iVar1) = uVar2;
  *(undefined4 *)(&stack0xffffffec + iVar1) = *(undefined4 *)((int)&s8 + iVar1);
  if ((int)((*(int *)(&stack0xffffffec + iVar1) * 0x200 - DAT_8c01b284) - ar7) < 0) {
    uVar2 = (*(code *)PTR_FUN_8c01b288)(ar4,uVar3,ar6,ar7_00);
    *(undefined4 *)((int)&s4 + iVar1) = uVar2;
    if (*(uint *)((int)&s4 + iVar1) < ar7) {
      return 0;
    }
    ar5_00 = (int)&s20 + iVar1;
    uVar2 = (*(code *)PTR_FUN_8c01b28c)(*DAT_8c01b270,ar5_00,ar6,ar7_00);
    *(undefined4 *)((int)&s0 + iVar1) = uVar2;
    if (*(int *)((int)&s0 + iVar1) != 0) {
      return 0;
    }
    do {
      uVar2 = (*(code *)PTR_FUN_8c01b290)(*DAT_8c01b270,ar5_00,ar6,ar7_00);
      *(undefined4 *)(&stack0xfffffffc + iVar1) = uVar2;
    } while (*(int *)(&stack0xfffffffc + iVar1) == -1);
    uVar2 = (*(code *)PTR_FUN_8c01b294)(*DAT_8c01b270,ar5_00,ar6,ar7_00);
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
  uVar2 = (*(code *)PTR_s_VM_App_Icon_VMI_01b2b2_8c01b29c)
                    (ar4,ar5,uVar3,ar7,*(undefined4 *)((int)aiStack_20 + iVar1),
                     *(undefined4 *)((int)aiStack_20 + iVar1 + 4));
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

int s_VM_App_Icon_VMI_01b2b2
              (int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  int iVar2;
  int ar4_00;
  undefined4 uVar3;
  int *ar7_00;
  int unaff_r8;
  undefined4 ain0;
  int aiStack_24 [2];
  
  ar7_00 = aiStack_24;
  iVar1 = FUN_8c0213bc(0x8c3eb334,"VM_App_Icon.VMI",&DAT_8c12fb29,ar7_00);
  if (iVar1 == 0) {
    unaff_r8 = -1;
  }
  else {
    ain0 = ar5;
    iVar1 = FUN_8c01ab78(ar4,3,ar5,ar7_00);
    if (-1 < iVar1) {
      uVar3 = ar7;
      iVar2 = FUN_8c01b5dc(ar4,ar7,ar5,ar7_00);
      ar4_00 = malloc_thunk(iVar2 << 9,uVar3,ar5,ar7_00);
      if (ar4_00 != 0) {
        memmove(ar4_00,ar6,ar7,ar7_00);
        uVar3 = 0x280;
        memset(ar4_00 + 0x200,0,0x280,ar7_00);
        strcpy(ar4_00 + 0x200,s0,uVar3,ar7_00,ain0);
        strcpy(ar4_00 + 0x210,s4,uVar3,ar7_00,ain0);
        *(undefined2 *)(ar4_00 + 0x240) = 1;
        *(undefined4 *)(ar4_00 + 0x248) = ar7;
        memmove(ar4_00 + 0x260,aiStack_24[0] + 0xa0,0x220,ar7_00);
        *(int *)(iVar1 * 0x28 + ar4 + 0x246c) = iVar2;
        *(int *)(iVar1 * 0x28 + ar4 + 0x2470) = ar4_00;
        unaff_r8 = iVar1;
      }
    }
    FUN_8c021428(0x8c3eb334,"VM_App_Icon.VMI",&DAT_8c12fb29,ar7_00);
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
  int ar5_00;
  
  if (*DAT_8c01b4e0 == 3) {
    ar5_00 = (*(code *)PTR_FUN_8c01b4e4)(ar4,ar5,ar6,ar7);
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*(code *)PTR_FUN_8c01b4e8)(ar4,ar5_00,ar6,ar7);
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
  int ar4_00;
  undefined4 ar5_00;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  iVar1 = (*(code *)PTR_FUN_8c01b594)(ar4,4,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    ar5_00 = ar7;
    iVar2 = (*(code *)PTR_FUN_8c01b598)(ar4,ar7,ar5,ar7_00);
    ar4_00 = (*(code *)PTR_malloc_thunk_8c01b59c)(iVar2 << 9,ar5_00,ar5,ar7_00);
    if (ar4_00 == 0) {
      iVar1 = -1;
    }
    else {
      (*(code *)PTR_memmove_8c01b5a0)(ar4_00,ar6,ar7,ar7_00);
      *(int *)(DAT_8c01b5a4 + iVar1 * 0x28 + ar4) = iVar2;
      *(int *)(DAT_8c01b5a8 + iVar1 * 0x28 + ar4) = ar4_00;
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
  int ar5_00;
  int iVar2;
  int iVar3;
  undefined4 ar5_01;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined1 auStack_74 [88];
  undefined4 uStack_1c;
  
  uVar1 = 1;
  if (*DAT_8c01b6e4 == 3) {
    ar6_00 = DAT_8c01b6e8;
    ar7_00 = ar7;
    ar5_00 = (*(code *)PTR_FUN_8c01b6ec)(ar4,ar5,DAT_8c01b6e8,ar7);
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      iVar3 = ar5_00;
      iVar2 = (*(code *)PTR_FUN_8c01b6f0)(ar4,ar5_00,ar6_00,ar7_00);
      if (iVar2 == 0) {
        (*(code *)PTR_FUN_8c01b6f8)
                  (*(undefined4 *)(DAT_8c01b6f4 + ar5_00 * 0x28 + ar4),iVar3,ar6_00,ar7_00);
        uVar1 = 0;
      }
      else {
        ar5_01 = *(undefined4 *)(DAT_8c01b6f4 + ar5_00 * 0x28 + ar4);
        iVar3 = (*(code *)PTR_FUN_8c01b6fc)(auStack_74,ar5_01,ar6_00,ar7_00);
        if ((DAT_8c01b700 == iVar3) || (DAT_8c01b704 == iVar3)) {
          uVar1 = 0;
        }
        else if (iVar3 == 0) {
          (*(code *)PTR_memmove_8c01b708)(ar6,uStack_1c,ar7,ar7_00);
          uVar1 = 1;
          ar5_01 = uStack_1c;
          ar6_00 = ar7;
        }
        (*(code *)PTR_FUN_8c01b6f8)
                  (*(undefined4 *)(DAT_8c01b6f4 + ar5_00 * 0x28 + ar4),ar5_01,ar6_00,ar7_00);
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
  int ar5_00;
  int iVar2;
  int ar5_01;
  undefined4 ar7_00;
  
  if (*DAT_8c01b864 == 3) {
    uVar1 = ar7;
    ar7_00 = ar7;
    ar5_00 = (*(code *)PTR_FUN_8c01b868)(ar4,ar5,ar7,ar7);
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      ar5_01 = ar5_00;
      iVar2 = (*(code *)PTR_FUN_8c01b86c)(ar4,ar5_00,uVar1,ar7_00);
      if (iVar2 == 0) {
        (*(code *)PTR_FUN_8c01b874)
                  (*(undefined4 *)(DAT_8c01b870 + ar5_00 * 0x28 + ar4),ar5_01,uVar1,ar7_00);
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(DAT_8c01b870 + ar5_00 * 0x28 + ar4);
        (*(code *)PTR_memmove_8c01b878)(ar6,uVar1,ar7,ar7_00);
        (*(code *)PTR_FUN_8c01b874)
                  (*(undefined4 *)(DAT_8c01b870 + ar5_00 * 0x28 + ar4),uVar1,ar7,ar7_00);
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
  int ar5_00;
  
  if (*DAT_8c01bb5c == 3) {
    ar5_00 = (*(code *)PTR_FUN_8c01bb60)(ar4,ar5,ar6,ar7);
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*(code *)PTR_FUN_8c01bb64)(ar4,ar5_00,ar6,ar7);
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
  int ar5_00;
  
  if (*DAT_8c01bbec == 3) {
    ar5_00 = (*(code *)PTR_FUN_8c01bbf0)(ar4,ar5,ar6,ar7);
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*(code *)PTR_FUN_8c01bbf4)(ar4,ar5_00,ar6,ar7);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c01bc2c(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined1 *ar6_00;
  
  if (_DAT_8c2791b0 == 3) {
    ar6_00 = ar6;
    ar5_00 = FUN_8c01bcc0(ar4,ar5,ar6,ar7);
    if (ar5_00 < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_8c01acd0(ar4,ar5_00,ar6_00,ar7);
      *ar6 = 0;
      if (iVar1 == 5) {
        strcpy(ar6,ar5_00 * 0x28 + ar4 + 0x245c,ar6_00,ar7,ar5);
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
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  (*(code *)PTR_FUN_8c01bfb4)(&uStack_18,ar5,ar6,ar7);
  uStack_38 = uStack_18;
  uStack_36 = uStack_16;
  uStack_35 = uStack_15;
  uStack_34 = uStack_14;
  uStack_33 = uStack_13;
  uStack_32 = uStack_12;
  uStack_31 = uStack_11;
  iStack_20 = *ar4;
  iStack_24 = *ar4;
  iStack_28 = *ar4;
  iVar2 = (*(code *)PTR_FUN_8c01bfc8)
                    (*DAT_8c01bfc4,(int)ar4 + DAT_8c01bfc0 + iStack_20 * 0x28,
                     *(undefined4 *)((int)ar4 + DAT_8c01bfbc + iStack_24 * 0x28),
                     *(undefined4 *)((int)ar4 + DAT_8c01bfb8 + iStack_28 * 0x28),&uStack_38);
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
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  (*(code *)PTR_FUN_8c01c0c8)(&uStack_18,ar5,ar6,ar7);
  uStack_38 = uStack_18;
  uStack_36 = uStack_16;
  uStack_35 = uStack_15;
  uStack_34 = uStack_14;
  uStack_33 = uStack_13;
  uStack_32 = uStack_12;
  uStack_31 = uStack_11;
  iStack_20 = *ar4;
  iStack_24 = *ar4;
  iStack_28 = *ar4;
  iVar2 = (*(code *)PTR_FUN_8c01c0dc)
                    (*DAT_8c01c0d8,(int)ar4 + DAT_8c01c0d4 + iStack_20 * 0x28,
                     *(undefined4 *)((int)ar4 + DAT_8c01c0d0 + iStack_24 * 0x28),
                     *(undefined4 *)((int)ar4 + DAT_8c01c0cc + iStack_28 * 0x28),&uStack_38);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c01c560(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_stack_ffffffb4;
  char acStack_28 [36];
  
  iVar1 = FUN_8c1fc258(_DAT_8c2791b4,acStack_28,ar6,ar7);
  if (iVar1 == -0xfb) {
    iVar1 = 0x2450;
    ar4[*ar4 * 10 + 0x914] = 4;
  }
  else if (iVar1 != -1) {
    if (iVar1 == 0) {
      if (acStack_28[0] == '\0') {
        iVar1 = 0x2450;
        ar4[*ar4 * 10 + 0x914] = 4;
      }
      else {
        iVar1 = FUN_8c01c68c(acStack_28,ar4 + *ar4 * 10 + 0x917,ar6,ar7);
        if (iVar1 == 0) {
          iVar1 = 0x2450;
          ar4[*ar4 * 10 + 0x914] = 1;
        }
        else {
          ar4[*ar4 * 10 + 0x914] = 5;
          iVar1 = strcpy(ar4 + *ar4 * 10 + 0x917,acStack_28,ar6,ar7,in_stack_ffffffb4);
        }
      }
    }
    else {
      iVar1 = 0x2450;
      ar4[*ar4 * 10 + 0x914] = 0;
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
  (*(code *)PTR_thunk_FUN_8c1fce34_8c01c9bc)(PTR_LAB_8c01c9b8,ar5,ar6,ar7);
  (*(code *)PTR_thunk_FUN_8c1fce50_8c01c9c4)(PTR_LAB_8c01c9c0,ar5,ar6,ar7);
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
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
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
      uVar1 = (*(code *)PTR_FUN_8c01cd20)(*ar4,ar5,ar6,ar7,0,0,DAT_8c01cd18,5,*DAT_8c01cd1c,ar4 + 3)
      ;
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
  undefined *ar5_00;
  undefined *ar6_00;
  int ar7_00;
  
  if (*DAT_8c01cdd0 < 3) {
    *DAT_8c01cdd4 = 0;
    *DAT_8c01cdd8 = 0;
    *DAT_8c01cddc = 0;
    *DAT_8c01cde0 = 0;
    *DAT_8c01cde4 = 0;
    *(undefined4 *)(DAT_8c01cde8 + ar4) = 0;
    ar7_00 = ar4 + DAT_8c01cde8;
    ar6_00 = PTR_s_asr16v2_aev200_float_4b_lng_8c01cdec + 0x1c;
    ar5_00 = PTR_s_asr16v2_aev200_float_4b_lng_8c01cdec;
    iVar2 = (*(code *)PTR_file_load_into_object_buffer_8c01cdf4)
                      (DAT_8c01cdf0,PTR_s_asr16v2_aev200_float_4b_lng_8c01cdec,ar6_00,ar7_00);
    if (iVar2 == 1) {
      iVar2 = (*(code *)PTR_asr_init_from_model_8c01cdf8)(ar4,ar5_00,ar6_00,ar7_00);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        (*(code *)PTR_asr_register_strings_8c01cdfc)
                  (ar4,PTR_s_asr16v2_aev200_float_4b_lng_8c01cdec + 0x1d,
                   PTR_s_asr16v2_aev200_float_4b_lng_8c01cdec + 0x26,ar7_00);
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
  undefined4 ar5_00;
  undefined4 *ar7_00;
  
  iVar1 = (*(code *)PTR_asr_lib_create_engine_8c01ceb8)(PTR_PTR_8c01ceb4,0,DAT_8c01ceb0,ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_asr_lib_load_model_8c01cec4)
                      (*DAT_8c01ceb0,*(undefined4 *)(DAT_8c01cec0 + ar4),1,DAT_8c01cebc);
    if (iVar1 == 0) {
      *DAT_8c01cec8 = 3;
      uVar2 = 0;
      ar7_00 = DAT_8c01cecc;
      iVar1 = (*(code *)PTR_asr_lib_create_recognizer_8c01ced4)
                        (*DAT_8c01ceb0,PTR_PTR_8c01ced0,0,DAT_8c01cecc);
      if (iVar1 == 0) {
        ar5_00 = *DAT_8c01cebc;
        iVar1 = (*(code *)PTR_asr_lib_bind_recognizer_model_8c01ced8)
                          (*DAT_8c01cecc,ar5_00,uVar2,ar7_00);
        if (iVar1 == 0) {
          iVar1 = (*(code *)PTR_FUN_8c01cedc)(ar4,ar5_00,uVar2,ar7_00);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c01cfc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  undefined4 in_PR;
  
  FUN_8c201c82(_DAT_8c279270,ar5,ar6,ar7,in_PR);
  ar4_00 = _DAT_8c27926c;
  FUN_8c201b04(_DAT_8c27926c,ar5,ar6,ar7,in_PR);
  FUN_8c2019e0(ar4_00,ar5,ar6,ar7);
  _DAT_8c2791b8 = 1;
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
  undefined4 ar5_00;
  
  if (-1 < *(int *)(DAT_8c01d144 + ar4)) {
    iVar1 = *(int *)(DAT_8c01d148 + *(int *)(DAT_8c01d144 + ar4) * 0x50 + ar4);
    if ((iVar1 == 0) || (iVar1 == 1)) {
      (*(code *)PTR_FUN_8c01d150)(ar4,ar5,ar6,ar7);
    }
    else if (iVar1 == 2) {
      (*(code *)PTR_FUN_8c01d14c)(ar4,ar5,ar6,ar7);
    }
  }
  ar5_00 = *(undefined4 *)(ar4 + 4);
  iVar1 = (*(code *)PTR_FUN_8c01d154)(ar4,ar5_00,ar6,ar7);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c01d158)(ar4,ar5_00,ar6,ar7);
  }
  return (uint)(iVar1 != 0);
}



/* FUN_8c01d15c @ 8c01d15c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined * FUN_8c01d15c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined *)0x3;
  if ((2 < _DAT_8c2791b8) &&
     (iVar2 = FUN_8c201ba2(_DAT_8c27926c,ar5,ar6,ar7), puVar1 = (undefined *)0x0, iVar2 != 0)) {
    if (iVar2 == 1) {
      FUN_8c201b92(_DAT_8c27926c,ar5,ar6,ar7);
    }
    else if (iVar2 == 3) {
      return (undefined *)3;
    }
    puVar1 = (undefined *)0x9;
    if ((_DAT_8c279248 < 10) && (puVar1 = (undefined *)0x1, 0 < _DAT_8c279248)) {
      puVar1 = (&switchD_8c01d1d6::switchdataD_8c01d1dc)[_DAT_8c279248 + -1];
                    /* WARNING: Switch is manually overridden */
      switch(_DAT_8c279248) {
      case 1:
        puVar1 = _DAT_8c279284;
        if (_DAT_8c279284 != (undefined *)0x0) {
          puVar1 = (undefined *)0x0;
          _DAT_8c279284 = (undefined *)0x0;
        }
        break;
      case 5:
        break;
      case 6:
        if (_DAT_8c279284 == (undefined *)0x0) {
          return (undefined *)0;
        }
        _DAT_8c279284 = (undefined *)0x1;
      case 2:
        uVar3 = FUN_8c201c92(_DAT_8c279270,ar5,ar6,ar7);
        puVar1 = (undefined *)FUN_8c201da0(_DAT_8c279270,uVar3,ar6,ar7);
        break;
      case 7:
        if (_DAT_8c279284 == (undefined *)0x0) {
          return (undefined *)0;
        }
        _DAT_8c279284 = (undefined *)0x1;
      default:
        uVar3 = 0x113a;
        iVar2 = FUN_8c201e14(_DAT_8c279270,ar4 + 0x5b86,0x113a,ar7);
        FUN_8c201da0(_DAT_8c279270,iVar2,uVar3,ar7);
        puVar1 = (undefined *)FUN_8c10b698(_DAT_8c27925c,0,ar4 + 0x5b86,iVar2 << 1);
        break;
      case 8:
        puVar1 = _DAT_8c279284;
        if (_DAT_8c279284 != (undefined *)0x0) {
          _DAT_8c279298 = _DAT_8c279298 + 1;
          _DAT_8c279284 = (undefined *)0x2;
          if (2 < _DAT_8c279298) {
            _DAT_8c279284 = (undefined *)0x1;
          }
          puVar1 = (undefined *)FUN_8c1225fc(_DAT_8c27925c,1,ar6,ar7);
        }
        break;
      case 9:
        puVar1 = _DAT_8c279284;
        if (_DAT_8c279284 != (undefined *)0x0) {
          _DAT_8c279284 = (undefined *)0x3;
          puVar1 = (undefined *)FUN_8c1225fc(_DAT_8c27925c,1,ar6,ar7);
        }
      }
    }
  }
  return puVar1;
}



/* FUN_8c01d338 @ 8c01d338 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01d338(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x563c);
  uVar1 = 5;
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    case 0:
      uVar1 = FUN_8c01da90(ar4,ar5,ar6,ar7);
      break;
    case 1:
      uVar1 = FUN_8c01dea4(ar4,ar5,ar6,ar7);
      break;
    case 2:
      uVar1 = FUN_8c01d78c(ar4,ar5,ar6,ar7);
      break;
    case 3:
      uVar1 = FUN_8c01d8d8(ar4,ar5,ar6,ar7);
      break;
    case 4:
      uVar1 = FUN_8c01d7cc(ar4,ar5,ar6,ar7);
      break;
    case 5:
      uVar1 = s_SPEECH_01d92e(ar4,ar5,ar6,ar7);
    }
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
  undefined4 ar7_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((uVar2 < 0x10 && (*(int *)(uVar2 * 0x50 + ar4 + 0x5634) != 1))) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < 0x10) {
    if (*(int *)(ar4 + 0x5630) < 0) {
      *(uint *)(ar4 + 0x5630) = uVar2;
    }
    else {
      iVar1 = *(int *)(ar4 + 0x5630);
      while (-1 < *(int *)(iVar1 * 0x50 + ar4 + 0x5640)) {
        iVar1 = *(int *)(iVar1 * 0x50 + ar4 + 0x5640);
      }
      *(uint *)(iVar1 * 0x50 + ar4 + 0x5640) = uVar2;
    }
    ar7_00 = ar7;
    strcpy(uVar2 * 0x50 + ar4 + 0x5644,ar6,ar6,ar7,ar5);
    strcpy(uVar2 * 0x50 + ar4 + 0x5664,ar7,ar6,ar7_00,ar5);
    *(undefined4 *)(uVar2 * 0x50 + ar4 + 0x563c) = ar5;
    *(undefined4 *)(uVar2 * 0x50 + ar4 + 0x5638) = 2;
    *(undefined4 *)(uVar2 * 0x50 + ar4 + 0x5640) = 0xffffffff;
    *(undefined4 *)(uVar2 * 0x50 + ar4 + 0x5634) = 0;
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c01d684(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (_DAT_8c2791b8 == 4) {
    if (_DAT_8c27924c == 1) {
      *ar5 = _DAT_8c2791bc;
      strcpy(ar5 + 3,&DAT_8c2791c8,ar6,ar7,in_PR);
    }
    else {
      *ar5 = 0;
      *(undefined1 *)(ar5 + 3) = 0;
    }
    uVar1 = _DAT_8c279284;
    _DAT_8c2791bc = 0;
    ar5[2] = _DAT_8c279284;
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c01da90(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_stack_ffffff38;
  int *piStack_98;
  undefined1 auStack_94 [132];
  
  if (_DAT_8c2791b8 == 4) {
    strcpy(auStack_94,*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,ar6,ar7,in_stack_ffffff38);
    FUN_8c01437c(auStack_94,&DAT_8c12fba9,ar6,ar7);
    iVar1 = FUN_8c02126c(0x8c3eb334,auStack_94,*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,
                         &piStack_98);
    if (iVar1 == 0) {
      *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 0;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 2;
    }
    else {
      iVar1 = FUN_8c01dc80(ar4,*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,
                           *(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,
                           (int)piStack_98 + *piStack_98 + 0x20,
                           (int)piStack_98 + piStack_98[2] + 0x20,
                           (int)piStack_98 + piStack_98[1] + 0x20);
      if (iVar1 == 1) {
        *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 1;
      }
      else {
        FUN_8c021338(0x8c3eb334,auStack_94,*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,10);
        *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 0;
  }
  return 0x5638;
}



/* FUN_8c01dc80 @ 8c01dc80 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4
FUN_8c01dc80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *ar6_00;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  undefined4 ar5_00;
  
  uVar2 = ar6;
  ar7_00 = ar7;
  ar5_00 = ar5;
  FUN_8c01d984(ar4,ar5,ar6,ar7);
  _DAT_8c2791bc = 0;
  if (_DAT_8c279264 != 0) {
    FUN_8c01d008(ar4,ar5,uVar2,ar7_00);
    asr_init_from_model(ar4,ar5,uVar2,ar7_00);
  }
  ar7_01 = &DAT_8c279264;
  uVar2 = 1;
  FUN_8c10be9c(_DAT_8c279258,ar7,1,&DAT_8c279264);
  *(undefined4 *)(ar4 + 0x5b38) = ar7;
  *(undefined4 *)(ar4 + 0x5b3c) = s0;
  *(undefined4 *)(ar4 + 0x5b40) = s4;
  strcpy(ar4 + 0x5b44,ar5_00,uVar2,ar7_01,ar5_00);
  strcpy(ar4 + 0x5b65,ar6,uVar2,ar7_01,ar5_00);
  iVar1 = FUN_8c01ddfc(ar4,ar6,uVar2,ar7_01);
  if (iVar1 == 1) {
    ar6_00 = &DAT_8c279268;
    iVar1 = FUN_8c10c3de(_DAT_8c279258,*(undefined4 *)(ar4 + 0x5b40),&DAT_8c279268,ar7_01);
    if ((iVar1 == 0) && (_DAT_8c279288 != (undefined1 *)0x0)) {
      FUN_8c122e7c(_DAT_8c279264,_DAT_8c279268,&DAT_8c12fbae,_DAT_8c279290,_DAT_8c279294);
      ar6_00 = &DAT_8c12fbae;
      ar7_01 = _DAT_8c279288;
      FUN_8c122664(_DAT_8c279264,_DAT_8c279268,&DAT_8c12fbae,_DAT_8c279288,_DAT_8c27928c,
                   &DAT_8c279290,&DAT_8c279294);
    }
    iVar1 = FUN_8c10b6cc(_DAT_8c27925c,_DAT_8c279264,ar6_00,ar7_01);
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
  int ar5_00;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_ffffff5c;
  undefined1 auStack_88 [132];
  
  strcpy(auStack_88,*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,ar6,ar7,in_stack_ffffff5c);
  FUN_8c01437c(auStack_88,&DAT_8c12fba9,ar6,ar7);
  ar7_00 = 10;
  ar6_00 = *(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664;
  FUN_8c021338(0x8c3eb334,auStack_88,ar6_00,10);
  *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 1;
  iVar1 = FUN_8c01dfc0(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,ar4 + 0x5b44,ar6_00,ar7_00);
  if (iVar1 == 0) {
    ar5_00 = ar4 + 0x5b65;
    iVar1 = FUN_8c01dfc0(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      iVar1 = FUN_8c01d984(ar4,ar5_00,ar6_00,ar7_00);
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
  int *ar5_00;
  
  ar5_00 = ar5;
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
      iVar1 = (*(code *)PTR_malloc_thunk_8c01e120)(*DAT_8c01e118,ar5_00,ar6,ar7);
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
  int ar4_00;
  undefined4 ar5_00;
  
  ar5_00 = ar5;
  ar4_00 = (*(code *)PTR_malloc_thunk_8c01e1ac)(ar5,ar5,ar6,ar7);
  if (ar4_00 != 0) {
    ar5_00 = ar4;
    (*(code *)PTR_memmove_8c01e1b0)(ar4_00,ar4,ar5,ar7);
    ar6 = ar5;
  }
  (*(code *)PTR_FUN_8c01e1b4)(ar4,ar5_00,ar6,ar7);
  return ar4_00;
}



/* FUN_8c01e1e8 @ 8c01e1e8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c01e1e8(int *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint in_stack_ffffffe0;
  
  _DAT_8c279278 = 0;
  _DAT_8c27927c = 0;
  if ((ar4 != (int *)0x0) && (_DAT_8c27924c != 0)) {
    if (_DAT_8c2791c0 == 2) {
      _DAT_8c279274 = 0;
      FUN_8c201c28(_DAT_8c27926c,0,ar6,ar7);
      _DAT_8c2791bc = 2;
      strcpy(&DAT_8c2791c8,&DAT_8c12fbb3,ar6,ar7,in_stack_ffffffe0);
    }
    else if (_DAT_8c2791c0 == 3) {
      _DAT_8c279274 = _DAT_8c279274 + 2;
      if (0x10 < _DAT_8c279274) {
        _DAT_8c279274 = 0x10;
      }
      FUN_8c201c28(_DAT_8c27926c,_DAT_8c279274,ar6,ar7);
      _DAT_8c2791bc = 3;
      strcpy(&DAT_8c2791c8,&DAT_8c12fbb7,ar6,ar7,in_stack_ffffffe0);
    }
    else if (*ar4 == 0) {
      _DAT_8c279274 = 0x10;
      FUN_8c201c28(_DAT_8c27926c,0x10,ar6,ar7);
    }
    else if (*(int *)(ar4[1] + 4) < 1000) {
      _DAT_8c2791bc = 1;
      strcpy(&DAT_8c2791c8,&DAT_8c12fbb7,ar6,ar7,in_stack_ffffffe0);
    }
    else if (*(int *)(ar4[1] + 4) < _DAT_8c279280) {
      _DAT_8c279280 = _DAT_8c279280 + -500;
      if (_DAT_8c279280 < 3000) {
        _DAT_8c279280 = 3000;
      }
      _DAT_8c2791bc = 1;
      strcpy(&DAT_8c2791c8,&DAT_8c12fbb7,ar6,ar7,in_stack_ffffffe0);
    }
    else {
      if ((_DAT_8c279280 + 1000 < *(int *)(ar4[1] + 4)) &&
         (_DAT_8c279280 = _DAT_8c279280 + 500, 8000 < _DAT_8c279280)) {
        _DAT_8c279280 = 8000;
      }
      _DAT_8c2791bc = 1;
      DAT_8c2791c8 = '\0';
      for (iVar1 = 0; iVar1 < *(int *)ar4[1]; iVar1 = iVar1 + 1) {
        uVar2 = *(uint *)(*(int *)(*(int *)(ar4[1] + 0x14) + iVar1 * 0x10 + 0xc) + 8);
        if (((_DAT_8c279250 != 0) && (uVar2 < _DAT_8c279254)) &&
           (**(char **)(uVar2 * 4 + _DAT_8c279250) != '\0')) {
          FUN_8c01437c(&DAT_8c2791c8,*(undefined4 *)(uVar2 * 4 + _DAT_8c279250),ar6,ar7);
          ar5 = " ";
          FUN_8c01437c(&DAT_8c2791c8,&DAT_8c12fbbb,ar6,ar7);
          in_stack_ffffffe0 = uVar2;
        }
      }
      if (DAT_8c2791c8 == '\0') {
        ar5 = "@NAME";
        strcpy(&DAT_8c2791c8,"@NAME",ar6,ar7,in_stack_ffffffe0);
        _DAT_8c27927c = 1;
      }
      iVar1 = log_message(&DAT_8c2791c8,ar5,ar6,ar7);
      if ((0 < iVar1) && (*(char *)(iVar1 + -0x73d86e39) == ' ')) {
        *(undefined1 *)(iVar1 + -0x73d86e39) = 0;
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
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_01cb24(ar4 + 0x384c,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_01a384(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
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
  int iVar2;
  
  iVar2 = *(int *)(ar4 + 0xa510);
  if ((iVar2 < 6) && (0 < iVar2)) {
    puVar1 = (&switchD_8c01e7f6::switchdataD_8c01e7fc)[iVar2 + -1];
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    case 2:
      iVar2 = FUN_8c01a3b4(ar4,*(undefined4 *)(ar4 + 0xa524),ar6,ar7);
      puVar1 = (undefined *)(uint)(iVar2 == 1);
      iVar2 = FUN_8c01cb54(ar4 + 0x384c,*(undefined4 *)(ar4 + 0xa524),ar6,ar7);
      if (iVar2 == 1) {
        puVar1 = (undefined *)((uint)puVar1 | 2);
      }
      if (puVar1 == (undefined *)0x0) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 5;
      }
      else if (puVar1 == (undefined *)0x1) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 4;
      }
      else if (puVar1 == (undefined *)0x2) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 3;
      }
      else if (puVar1 == (undefined *)0x3) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 0;
      }
      break;
    case 3:
      iVar2 = FUN_8c01d0cc(ar4 + 0x384c,ar5,ar6,ar7);
      if (iVar2 == 0) {
        *(undefined4 *)(ar4 + 0xa510) = 5;
      }
      puVar1 = (undefined *)FUN_8c01a3b4(ar4,*(undefined4 *)(ar4 + 0xa524),ar6,ar7);
      if (puVar1 == (undefined *)0x1) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 0;
      }
      break;
    case 4:
      iVar2 = FUN_8c01a5cc(ar4,ar5,ar6,ar7);
      if (iVar2 == 0) {
        *(undefined4 *)(ar4 + 0xa510) = 5;
      }
      puVar1 = (undefined *)FUN_8c01cb54(ar4 + 0x384c,*(undefined4 *)(ar4 + 0xa524),ar6,ar7);
      if (puVar1 == (undefined *)0x1) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 0;
      }
    }
  }
  else {
    iVar2 = FUN_8c01a5cc(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0xa510) = 3;
    }
    puVar1 = (undefined *)FUN_8c01d0cc(ar4 + 0x384c,ar5,ar6,ar7);
    if (puVar1 == (undefined *)0x0) {
      puVar1 = (undefined *)0xa510;
      *(undefined4 *)(ar4 + 0xa510) = 4;
    }
  }
  return puVar1;
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
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* s_SPEECH_01f60c @ 8c01f608 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_SPEECH_01f60c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar4_00;
  char *ar5_00;
  int iVar2;
  undefined4 ar6_00;
  
  *ar4 = 0;
  ar4[1] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  ar4[10] = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  ar4[0xd] = 0;
  uVar1 = malloc_thunk(0x4b800,ar5,ar6,ar7);
  ar4[4] = uVar1;
  _DAT_8c2792a0 = 0;
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    *(undefined1 *)(ar4 + iVar2 * 0x580d + 0xe) = 0;
  }
  FUN_8c01f6dc(ar4,"\\",0,ar7);
  ar6_00 = 2;
  FUN_8c01f6dc(ar4,"SPEECH",1,ar7);
  ar5_00 = "GRAPHICS";
  ar4_00 = ar4;
  uVar1 = ar6_00;
  FUN_8c01f6dc(ar4,"GRAPHICS",2,ar7);
  FUN_8c262810(ar4_00,ar5_00,ar6_00,ar7,uVar1);
  *(undefined1 *)(ar4 + 7) = 0;
  return 1;
}



/* FUN_8c01f6dc @ 8c01f6dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01f6dc(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar6_00;
  
  uVar1 = 3;
  if (ar6 < 3) {
    ar6_00 = ar6;
    strcpy(ar4 + ar6 * 0x16034 + 0x38,ar5,ar6,ar7,ar5);
    uVar1 = FUN_8c1f3078(ar4 + ar6 * 0x16034 + 0x5c,0x800,ar6_00,ar7);
    *(undefined4 *)(ar4 + ar6 * 0x16034 + 0x58) = uVar1;
    uVar1 = FUN_8c1f3926(ar4 + ar6 * 0x16034 + 0x38,*(undefined4 *)(ar4 + ar6 * 0x16034 + 0x58),
                         ar6_00,ar7);
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
  int *ar5_00;
  
  iVar1 = s_E9040832_adxf_is_NULL_ADXF_G_2626b4(*ar4,ar5,ar6,ar7);
  if ((iVar1 == 3) || (iVar1 == 4)) {
    if (*ar4 != 0) {
      FUN_8c262168(*ar4,ar5,ar6,ar7);
    }
    *ar4 = 0;
    if (iVar1 == 3) {
      ar7 = ar4[1] + 0x10;
      ar6 = ar4 + 8;
      ar5_00 = *(int **)ar4[1];
      FUN_8c020600(ar4,ar5_00,ar6,ar7);
      iVar1 = *(int *)ar4[1];
      if ((iVar1 < 0x11) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
        switch(iVar1) {
        default:
          ar5_00 = (int *)ar4[1];
          s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e(ar4,ar5_00,ar6,ar7);
          break;
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
          break;
        case 0xf:
          ar6 = (int *)ar4[1];
          ar5_00 = ar4 + 0xc;
          FUN_8c0205e8(ar4,ar5_00,ar6,ar7);
          break;
        case 0x10:
          ar6 = (int *)ar4[1];
          ar5_00 = ar4 + 0xd;
          FUN_8c0205e8(ar4,ar5_00,ar6,ar7);
        }
      }
    }
    else {
      ar5_00 = (int *)ar4[1];
      FUN_8c02049c(ar4,ar5_00,ar6,ar7);
    }
    iVar1 = FUN_8c02009c(ar4,ar5_00,ar6,ar7);
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
  int iVar3;
  int in_stack_ffffff0c;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [32];
  undefined1 auStack_bc [40];
  undefined4 auStack_94 [33];
  
  uStack_ec = *ar5;
  uStack_e8 = 0;
  strcpy(auStack_bc,ar5 + 0xc,ar6,ar7,in_stack_ffffff0c);
  iVar2 = 0;
  while (iVar3 = iVar2, iVar3 < 0x20) {
    auStack_94[iVar3] = ar5[iVar3 + 0x16];
    in_stack_ffffff0c = iVar3;
    iVar2 = iVar3 + 1;
  }
  iVar2 = *(int *)(ar4 + 0x10);
  strcpy(auStack_dc,iVar2,ar6,ar7,in_stack_ffffff0c);
  uStack_e0 = *(undefined4 *)(iVar2 + 0x20);
  iStack_e4 = iVar2 + 0x40;
  uVar1 = s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e(ar4,&uStack_ec,ar6,ar7);
  return uVar1;
}



/* s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e @ 8c01fd08 callers=0 callees=0 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

int s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar5_00;
  int *ar6_00;
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
    ar6_00 = aiStack_44;
    ar5_00 = aiStack_44 + 1;
    iVar1 = (*(code *)PTR_FUN_8c01feb8)(ar5[2],ar5_00,ar6_00,ar7);
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
      (*(code *)PTR_FUN_8c01fec0)(iVar1,ar5_00,ar6_00,ar7);
    }
  }
  iVar1 = *ar5;
  if (iVar1 != 0xb) {
    iVar1 = (*(code *)PTR_FUN_8c01fec0)(ar5,ar5_00,ar6_00,ar7);
  }
  return iVar1;
}



/* FUN_8c01fec4 @ 8c01fec4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c01fec4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  int iVar3;
  int ar7_00;
  
  iVar3 = ar5 + 0x10;
  ar6_00 = *(undefined4 *)(ar4 + 0x28);
  uVar2 = ar7;
  iVar1 = (*(code *)PTR_FUN_8c01ff90)(ar4,ar7,ar6_00,iVar3);
  if (iVar1 == 0) {
    ar7_00 = ar5 + 0x30;
    iVar3 = ar5 + 0x10;
    iVar1 = (*(code *)PTR_FUN_8c01ff98)
                      (ar4,ar7,iVar3,ar7_00,*(undefined4 *)(ar5 + 0x50),*(undefined4 *)(ar5 + 0x54))
    ;
    if (iVar1 == 0) {
      uVar2 = (*(code *)PTR_FUN_8c01ff94)(ar6,ar7,iVar3,ar7_00);
    }
    else {
      *(undefined4 *)(iVar1 + 8) = ar6;
      for (iVar3 = 0; iVar3 < 0x20; iVar3 = iVar3 + 1) {
        *(undefined4 *)(iVar1 + iVar3 * 4 + 0x58) = *(undefined4 *)(ar5 + iVar3 * 4 + 0x58);
      }
      uVar2 = (*(code *)PTR_FUN_8c01ff9c)(ar4,ar4 + 0x28,iVar1,ar7_00);
    }
  }
  else {
    uVar2 = (*(code *)PTR_FUN_8c01ff94)(ar6,uVar2,ar6_00,iVar3);
  }
  return uVar2;
}



/* FUN_8c01ffa0 @ 8c01ffa0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c01ffa0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
                 undefined4 s8)

{
  int ar6_00;
  
  ar6_00 = (*(code *)PTR_FUN_8c020000)(ar4,ar5,ar6,ar7,s0,s4);
  if (ar6_00 != 0) {
    (*(code *)PTR_FUN_8c020004)(ar4,ar4 + 0x20,ar6_00,ar7);
    (*(code *)PTR_FUN_8c020008)(ar4,ar6_00,s8,ar7);
  }
  return (uint)(ar6_00 != 0);
}


