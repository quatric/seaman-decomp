/* Seaman (USA) region 0x8c1e0000-0x8c1f0000 (Ghidra decompiler) */

/* crt0_start @ 8c1ef400 callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 crt0_start(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *a4;
  undefined4 *a5;
  
  a5 = 0x8c00f400;
  uVar1 = 0x41474553;
  a4 = 0x8c00c000;
  do {
    *a4 = uVar1;
    a4 = a4 + 1;
  } while (a4 < a5);
  FUN_8c1ef440(a4,a5,uVar1,ar7);
  FUN_8c1ef430(a4,a5,uVar1,ar7);
  main(a4,a5,uVar1,ar7);
  uVar1 = FUN_8c1ef438(a4,a5,uVar1,ar7);
  return uVar1;
}



/* FUN_8c1ef430 @ 8c1ef430 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ef430(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f5c9e(*(undefined4 *)(&DATA_8c26be70));
  return uVar1;
}



/* FUN_8c1ef438 @ 8c1ef438 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ef438(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f5cf6(*(undefined4 *)(&DATA_8c26be70));
  return uVar1;
}



/* FUN_8c1ef440 @ 8c1ef440 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ef440(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 in_r0;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar2 = (&DATA_8c125404);
  for (puVar4 = *(undefined4 **)(&DATA_8c1253f8); puVar3 = (&DATA_8c1253f4),
      puVar4 < *(undefined4 **)puVar2; puVar4 = puVar4 + 1) {
    *puVar4 = 0;
  }
  puVar6 = *(undefined1 **)(&DATA_8c1253e0);
  for (puVar5 = *(undefined1 **)(&DATA_8c1253e8); puVar2 = (&DATA_8c26bea4),
      puVar5 < *(undefined1 **)puVar3; puVar5 = puVar5 + 1) {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar5 = uVar1;
  }
  for (puVar5 = *(undefined1 **)(&DATA_8c26be98); puVar3 = (&DATA_8c26be94),
      puVar5 < *(undefined1 **)puVar2; puVar5 = puVar5 + 1) {
    *puVar5 = 0;
  }
  puVar6 = *(undefined1 **)(&DATA_8c26be80);
  for (puVar5 = *(undefined1 **)(&DATA_8c26be88); puVar5 < *(undefined1 **)puVar3;
      puVar5 = puVar5 + 1) {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar5 = uVar1;
  }
  return in_r0;
}



/* FUN_8c1ef4fa @ 8c1ef4fa callers=0 callees=2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c1ef4fa(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  uint uVar1;
  uint in_r3;
  undefined1 *puVar2;
  undefined1 *a5;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 in_PR;
  
  uVar1 = ain0 & in_r3 | 0xf0;
  puVar2 = &DAT_8c470e90;
  if (_DAT_8c470e90 == 0) {
    _DAT_8c470bec = _DAT_8c470bec + 1;
    pvr_1efaf4(&DAT_8c470e90,ar5,ar6,ar7);
    uVar1 = FUN_8c1ef558(puVar2,ar5,ar6,ar7,in_PR);
    a5 = &DAT_8c470920;
    piVar4 = (int *)&DAT_8c470920;
    puVar2 = &DAT_8c470920;
    puVar3 = (undefined4 *)&DAT_8c470920;
    do {
      if (*piVar4 != 0) {
        uVar1 = (*(code *)*puVar3)(puVar2,a5,ar6,ar7);
      }
      piVar4 = piVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (piVar4 < &DAT_8c4709a0);
  }
  else {
    _DAT_8c470e90 = 0;
    _DAT_8c470e94 = _DAT_8c470e94 + 1;
  }
  return uVar1;
}



/* FUN_8c1ef558 @ 8c1ef558 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ef558(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 in_r0;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 auStack_10 [2];
  
  if (*0x8c470e70 != 0) {
    iVar4 = *0x8c470e70 + -1;
    iVar2 = (int)0x10f4;
    uVar3 = (0x8c470e98 & 0x1fffffe0) + 0x20;
    *(uint *)(0xa0000000 | uVar3) = iVar4 * 0x10000 | 0x80000200;
    piVar1 = 0x8c4727b4;
    *0x8c470e90 = 1;
    *(uint *)(*(int *)(iVar2 + *piVar1) + 4) = uVar3;
    *(undefined4 *)(*(int *)(iVar2 + *piVar1) + 0x18) = 1;
    auStack_10[0] = 1;
    in_r0 = FUN_8c1f4cb8(iVar4 * 6,9,auStack_10,1,0,0);
    *0x8c470e78 = *0x8c470e70;
  }
  return in_r0;
}



/* FUN_8c1ef640 @ 8c1ef640 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1ef640(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar2 = (undefined1 *)(*0x8c4727b4 + 0x28);
  puVar3 = 0x8c4709a0;
  do {
    iVar4 = iVar4 + 1;
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    puVar3[3] = puVar2[3];
    *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(puVar2 + 0x10);
    puVar3[4] = puVar2[8];
    puVar3[5] = puVar2[9];
    puVar3[6] = puVar2[10];
    cVar1 = puVar2[0xb];
    puVar3[7] = cVar1;
    *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(puVar2 + 0x14);
    puVar3 = puVar3 + 0x18;
    puVar2 = puVar2 + 0x2c;
  } while (iVar4 < 0x18);
  return (int)cVar1;
}



/* FUN_8c1ef682 @ 8c1ef682 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ef682(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  
  puVar3 = 0x8c470910;
  puVar2 = (&FUN_8c1fa244);
  puVar1 = (&DATA_8c26bf98);
  uVar7 = (*(code *)(&FUN_8c1fa244))
                    ((int)0x900,(&DATA_8c1ef4e4),*(undefined4 *)(&DATA_8c26bf98),0,0x8c4727c4
                    );
  puVar4 = (&DATA_8c1ef4f0);
  iVar8 = (int)0xa00;
  *puVar3 = uVar7;
  uVar7 = (*(code *)puVar2)(iVar8,puVar4,*(undefined4 *)(puVar1 + 4),0);
  puVar4 = (&DATA_8c1ef5ca);
  iVar8 = (int)0xa00;
  puVar3[1] = uVar7;
  uVar7 = (*(code *)puVar2)(iVar8,puVar4,*(undefined4 *)(puVar1 + 8),0);
  puVar4 = (&DATA_8c1ef5d2);
  iVar8 = (int)0xa20;
  puVar3[2] = uVar7;
  uVar7 = (*(code *)puVar2)(iVar8,puVar4,*(undefined4 *)(puVar1 + 0xc),0);
  puVar5 = 0x8c470c18;
  puVar3[3] = uVar7;
  puVar6 = 0x8c470e68;
  puVar3 = 0x8c470e64;
  *puVar5 = 0;
  *puVar3 = 0;
  *puVar6 = 0;
  puVar1 = (&memset);
  *0x8c470e6c = 0;
  *0x8c470e70 = 0;
  *0x8c470e78 = 0;
  *0x8c470e74 = 0xffffffff;
  *0x8c470e8c = 0;
  *0x8c470e90 = 0;
  *0x8c470e94 = 0;
  (*(code *)puVar1)(0x8c470be0,0,0x38);
  (*(code *)puVar1)(0x8c4709a0,0,(int)0x240);
  (*(code *)puVar1)(0x8c470c20,0,(int)0x240);
  uVar7 = (*(code *)puVar1)(0x8c470920,0,(int)0x80);
  return uVar7;
}



/* FUN_8c1ef686 @ 8c1ef686 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ef686(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 a7;
  
  puVar3 = 0x8c470910;
  puVar2 = (&FUN_8c1fa244);
  puVar1 = (&DATA_8c26bf98);
  uVar7 = (*(code *)(&FUN_8c1fa244))
                    ((int)0x900,(&DATA_8c1ef4e4),*(undefined4 *)(&DATA_8c26bf98),ar7);
  puVar4 = (&DATA_8c1ef4f0);
  iVar8 = (int)0xa00;
  *puVar3 = uVar7;
  uVar7 = (*(code *)puVar2)(iVar8,puVar4,*(undefined4 *)(puVar1 + 4),0);
  puVar4 = (&DATA_8c1ef5ca);
  iVar8 = (int)0xa00;
  puVar3[1] = uVar7;
  uVar7 = (*(code *)puVar2)(iVar8,puVar4,*(undefined4 *)(puVar1 + 8),0);
  puVar4 = (&DATA_8c1ef5d2);
  a7 = 0;
  iVar8 = (int)0xa20;
  puVar3[2] = uVar7;
  uVar7 = (*(code *)puVar2)(iVar8,puVar4,*(undefined4 *)(puVar1 + 0xc),0);
  puVar5 = 0x8c470c18;
  puVar3[3] = uVar7;
  puVar6 = 0x8c470e68;
  puVar3 = 0x8c470e64;
  *puVar5 = 0;
  *puVar3 = 0;
  *puVar6 = 0;
  puVar1 = (&memset);
  *0x8c470e6c = 0;
  *0x8c470e70 = 0;
  *0x8c470e78 = 0;
  *0x8c470e74 = 0xffffffff;
  *0x8c470e8c = 0;
  *0x8c470e90 = 0;
  *0x8c470e94 = 0;
  (*(code *)puVar1)(0x8c470be0,0,0x38,a7);
  (*(code *)puVar1)(0x8c4709a0,0,(int)0x240,a7);
  (*(code *)puVar1)(0x8c470c20,0,(int)0x240,a7);
  uVar7 = (*(code *)puVar1)(0x8c470920,0,(int)0x80,a7);
  return uVar7;
}



/* FUN_8c1ef78c @ 8c1ef78c callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ef78c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a4;
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a7;
  
  a4 = (&DATA_8c1f5a28);
  *(uint *)(&DATA_8c1f5a28) = *(uint *)(&DATA_8c1f5a28) | 0xa0000000;
  FUN_8c1ef682(a4,ar5,ar6,ar7);
  a5 = 0xc000;
  a7 = 0xc000;
  uVar1 = FUN_8c1f3dd8(ar5,0xc000,ar4,0xc000);
  FUN_8c1ef640(ar5,a5,ar4,a7);
  *0x8c470e60 = 1;
  return uVar1;
}



/* FUN_8c1ef7e6 @ 8c1ef7e6 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ef7e6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a4;
  undefined4 uVar1;
  
  a4 = (&DATA_8c1f5a28);
  *(uint *)(&DATA_8c1f5a28) = *(uint *)(&DATA_8c1f5a28) | 0xa0000000;
  FUN_8c1ef682(a4,ar5,ar6,ar7);
  uVar1 = FUN_8c1f3ef4(ar4,ar5,ar6,ar7);
  FUN_8c1ef640(ar4,ar5,ar6,ar7);
  *0x8c470e60 = 1;
  return uVar1;
}



/* pvr_1ef84c @ 8c1ef84c callers=0 callees=2 */

/* WARNING: Unknown calling convention */

int pvr_1ef84c(undefined4 ar4,uint *ar5,undefined4 ar6,uint ar7)

{
  ushort uVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  int *a4;
  int a7;
  int *in_r2;
  int *piVar6;
  int *ar6_00;
  uint uVar7;
  
  ar6_00 = 0x8c470e70;
  piVar6 = 0x8c470e78;
  uVar1 = 0x3ff;
  if (*in_r2 == 0) {
    a7 = 0;
  }
  else {
    uVar7 = (uint)(short)0x3ff;
    *0x8c470e74 = *0x8c470e78 + -1;
    *piVar6 = 0;
    puVar3 = 0x8c470e7c;
    puVar2 = 0xa05f80c4;
    if (*ar6_00 != 0) {
      *0x8c470e7c = *0xa05f80c4 & uVar7;
      puVar3[1] = (int)(short)((ushort)(*puVar2 >> 0x10) & uVar1);
      ar5 = puVar2;
    }
    piVar6 = 0x8c470e6c;
    *ar6_00 = 0;
    if (*piVar6 != 0) {
      *0xa05f8040 = *0x8c470e68;
      *0xa05f80e8 = *0xa05f80e8 & 0xfffffff7;
      *piVar6 = 0;
    }
    piVar5 = 0x8c470be0;
    piVar4 = 0x8c470c18;
    puVar2 = 0xa05f6908;
    if ((*0xa05f6908 & (int)0xf00) == 0) {
      a7 = FUN_8c1f4202(piVar6,ar5,ar6_00,ar7);
      a4 = 0x8c470e64;
      if (a7 < 0) {
        pvr_1efaf4(piVar6,ar5,ar6_00,ar7);
        piVar5[4] = piVar5[4] + 1;
        if (*piVar4 != 0) {
          (*(code *)*piVar4)(1,0xfffffff9,piVar5[2],a7);
        }
      }
      else {
        *0x8c470e90 = 0;
        *(undefined2 *)((int)piVar5 + *a4 * 2 + 0x34) = 0;
        *(ushort *)((int)piVar5 + *a4 * 2 + 0x2c) = (ushort)*0xa05f810c & uVar1;
        FUN_8c1ef640(a4,ar5,ar6_00,ar7);
        *piVar5 = *piVar5 + 1;
      }
    }
    else {
      if (((*0xa05f6908 & (int)0x800) != 0) &&
         (0x8c470be0[7] = 0x8c470be0[7] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)piVar5[2];
        ar5 = (uint *)0xfffffffe;
        piVar6 = (int *)0x1;
        (*(code *)*piVar4)(1,0xfffffffe,ar6_00,ar7);
      }
      if (((*puVar2 & (int)0x400) != 0) && (piVar5[8] = piVar5[8] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)piVar5[2];
        ar5 = (uint *)0xfffffffd;
        piVar6 = (int *)0x1;
        (*(code *)*piVar4)(1,0xfffffffd,ar6_00,ar7);
      }
      if (((*puVar2 & (int)0x200) != 0) && (piVar5[9] = piVar5[9] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)piVar5[2];
        ar5 = (uint *)0xfffffffc;
        piVar6 = (int *)0x1;
        (*(code *)*piVar4)(1,0xfffffffc,ar6_00,ar7);
      }
      if (((*puVar2 & (int)0x100) != 0) && (piVar5[10] = piVar5[10] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)piVar5[2];
        ar5 = (uint *)0xfffffffb;
        piVar6 = (int *)0x1;
        (*(code *)*piVar4)(1,0xfffffffb,ar6_00,ar7);
      }
      *puVar2 = (int)0xf00;
      pvr_1efaf4(piVar6,ar5,ar6_00,ar7);
      a7 = FUN_8c1f4202(piVar6,ar5,ar6_00,ar7);
      if (a7 < 0) {
        if (*piVar4 != 0) {
          (*(code *)*piVar4)(1,0xfffffffa,piVar5[2],a7);
        }
      }
      else {
        FUN_8c1ef640(piVar6,ar5,ar6_00,ar7);
      }
    }
  }
  return a7;
}



/* FUN_8c1efa2a @ 8c1efa2a callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efa2a(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  iVar3 = 0x8c470ed8;
  iVar2 = 0x8c470edc;
  bVar1 = *(byte *)((int)0xfb0 + *0x8c4727b4);
  uVar8 = 0;
  do {
    if (3 < (int)uVar8) {
      return 0;
    }
    if ((int)uVar8 < 0) {
      uVar6 = 1 >> (~uVar8 & 0x1f) + 1;
    }
    else {
      uVar6 = 1 << (uVar8 & 0x1f);
    }
    if ((uVar6 & bVar1) != 0) {
      pbVar7 = (&DATA_8c26bfac) + uVar8;
      iVar4 = FUN_8c1efd14((uint)*pbVar7,ar5,ar6,ar7);
      puVar5 = (uint *)FUN_8c1efd26((uint)*pbVar7,ar5,ar6,ar7);
      *(undefined1 *)(uVar8 + iVar3) = *(undefined1 *)(uVar8 + iVar2);
      if ((((*puVar5 & 0x80) != 0) && (*(char *)(iVar4 + 2) == '\0')) &&
         (*(char *)(iVar4 + 4) == '\b')) {
        uVar6 = (int)*(char *)(*(int *)(iVar4 + 8) + 8) & 4;
        *(char *)(uVar8 + iVar2) = (char)uVar6;
        ar5 = (int)*(char *)(uVar8 + iVar3) ^ uVar6;
        if ((uVar6 == 0) && (ar5 = ar5 & 0xff, ar5 != 0)) {
          return uVar8 + 1;
        }
      }
    }
    uVar8 = uVar8 + 1;
  } while( true );
}



/* pvr_1efaf4 @ 8c1efaf4 callers=28 callees=5 */

/* WARNING: Unknown calling convention */

int pvr_1efaf4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int a7;
  int iVar5;
  undefined4 a7_00;
  code *pcVar6;
  int iVar7;
  int a5;
  undefined4 a5_00;
  undefined4 *puVar8;
  
  iVar2 = 0x8c470be0;
  piVar1 = 0x8c4727b4;
  a7 = FUN_8c1f43d2(ar4,ar5,ar6,ar7);
  if (a7 == -2) {
    *(undefined4 *)((int)0x10e8 + *piVar1) = 1;
  }
  else if (a7 < 0) {
    if ((code *)*0x8c470c18 != (code *)0x0) {
      (*(code *)*0x8c470c18)(2,0xfffffff8,*(undefined4 *)(iVar2 + 8),a7);
    }
  }
  else {
    FUN_8c1f442a(ar4,ar5,ar6,ar7);
    a5 = (int)(short)0x3ff;
    iVar7 = *0x8c470e64 * 2;
    *(ushort *)(iVar2 + 0x30 + iVar7) =
         ((ushort)*0xa05f810c & 0x3ff) +
         *(short *)(iVar2 + 0x34 + iVar7) * ((ushort)*0xa05f80dc & 0x3ff);
    FUN_8c1ef640(iVar7,a5,ar6,ar7);
    FUN_8c1f4414(iVar7,a5,ar6,ar7);
    iVar5 = FUN_8c1f4734(iVar7,a5,ar6,ar7);
    if (iVar5 != 0) {
      if (((code *)*0x8c470c1c == (code *)0x0) ||
         (iVar5 = (*(code *)*0x8c470c1c)(iVar7,a5,ar6,ar7), iVar5 != 0)) {
        iVar5 = FUN_8c1efa2a(iVar7,a5,ar6,ar7);
        *0x8c470e70 = iVar5;
      }
      puVar8 = 0xa05f8040;
      if ((*(int *)((int)0xfbc + *piVar1) != 0) && (*0x8c470e70 != 0)) {
        *0x8c470e68 = *0xa05f8040;
        *puVar8 = *(undefined4 *)(*piVar1 + (int)0xfbc);
        *0xa05f80e8 = *0xa05f80e8 | 8;
        piVar3 = 0x8c470e8c;
        *0x8c470e6c = 1;
        *piVar3 = *piVar3 + 1;
      }
    }
    puVar8 = 0x8c470c20;
    for (iVar5 = 0; puVar4 = 0x8c470e64, iVar5 < 0x30; iVar5 = iVar5 + 1) {
      a7_00 = ar7;
      if (puVar8[2] != 0) {
        a5_00 = puVar8[1];
        iVar7 = thunk_FUN_8c1f461c(*puVar8,a5_00,ar6,ar7);
        a7_00 = ar7;
        if (iVar7 != 0) {
          pcVar6 = (code *)puVar8[2];
          puVar8[2] = 0;
          a7_00 = FUN_8c1efd26(*puVar8,a5_00,ar6,ar7);
          ar6 = FUN_8c1efd14(*puVar8,a5_00,ar6,ar7);
          (*pcVar6)(*puVar8,puVar8[1],ar6,a7_00);
        }
      }
      puVar8 = puVar8 + 3;
      ar7 = a7_00;
    }
    *(undefined4 *)((int)0x10e8 + *piVar1) = 0;
    *puVar4 = *puVar4 ^ 1;
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  return a7;
}



/* FUN_8c1efcae @ 8c1efcae callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1efcae(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 ar4_00;
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
  byte in_Q;
  byte extraout_Q;
  byte in_IMASK;
  byte bVar7;
  byte in_S;
  byte extraout_S;
  byte in_T;
  byte extraout_T;
  
  bVar5 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar3 = bVar5 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar7 = (byte)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  bVar6 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar5 = (bVar5 & 0x10) >> 4;
  bVar4 = (bVar3 & 0x20) >> 5;
  bVar3 = ((bVar3 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  *0xa05f6920 = *0xa05f6920 & (int)(int)0xffffcfff;
  iVar2 = 0x8c470910;
  puVar1 = (&FUN_8c1fa54c);
  FUN_8c1fa54c(*(undefined4 *)(0x8c470910 + 0xc),ar5,ar6,ar7);
  (*(code *)puVar1)(*(undefined4 *)(iVar2 + 0x10),ar5,ar6,ar7);
  (*(code *)puVar1)(*(undefined4 *)(iVar2 + 8),ar5,ar6,ar7);
  ar4_00 = *(undefined4 *)(iVar2 + 4);
  (*(code *)puVar1)(ar4_00,ar5,ar6,ar7);
  FUN_8c1f44cc(ar4_00,ar5,ar6,ar7);
  memset(0x8c4709a0,0,(int)0x240,ar7);
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)extraout_T | (uint)extraout_S << 1 | (uint)bVar7 << 4 | (uint)extraout_Q << 8 |
          (uint)extraout_M << 9 | (uint)bVar6 << 0xf | (uint)bVar5 << 0x1c | (uint)bVar4 << 0x1d |
         (uint)bVar3 << 0x1e) & (int)(int)0xffffff0f;
}



/* FUN_8c1efd14 @ 8c1efd14 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1efd14(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 * 0x18 + 0x8c4709a0;
}



/* FUN_8c1efd26 @ 8c1efd26 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efd26(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f45c8(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c1efd34 @ 8c1efd34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efd34(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f45da(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* thunk_FUN_8c1f461c @ 8c1efd42 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c1f461c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f461c();
  return uVar1;
}



/* FUN_8c1efd7c @ 8c1efd7c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efd7c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f55b8(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efda2 @ 8c1efda2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efda2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f5684(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efdc8 @ 8c1efdc8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efdc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f5640(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efdee @ 8c1efdee callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efdee(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f55fc(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efe14 @ 8c1efe14 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efe14(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f5556(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efe3a @ 8c1efe3a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efe3a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f56c8(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efe80 @ 8c1efe80 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efe80(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f571a(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efeac @ 8c1efeac callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efeac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f577a(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efee0 @ 8c1efee0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efee0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f57e4(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1eff0c @ 8c1eff0c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1eff0c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f5894(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1eff32 @ 8c1eff32 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1eff32(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f58e4(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1eff58 @ 8c1eff58 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1eff58(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f5934(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1eff9c @ 8c1eff9c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1eff9c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f5850(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1effc2 @ 8c1effc2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1effc2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_8c1f4ec6(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* thunk_FUN_8c1f4636 @ 8c1effee callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c1f4636(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f4636();
  return uVar1;
}



/* thunk_FUN_8c1f4646 @ 8c1efff4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c1f4646(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f4646();
  return uVar1;
}



/* FUN_8c1efffa @ 8c1efffa callers=7 callees=0 */

/* WARNING: Unknown calling convention */

uint * FUN_8c1efffa(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar2 = ar4 + 1;
  puVar4 = ar4 + 1;
  iVar1 = 0;
  uVar3 = 0x80000000;
  do {
    if ((uVar3 & *ar4) != 0) {
      if (ar5 == uVar3) {
        return puVar4;
      }
      puVar2 = puVar2 + 1;
      puVar4 = puVar2;
    }
    iVar1 = iVar1 + 1;
    uVar3 = uVar3 >> 1;
  } while (iVar1 < 0x20);
  return (uint *)0;
}


