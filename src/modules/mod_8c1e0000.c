/* Seaman (USA) region 0x8c1e0000-0x8c1f0000 (Ghidra decompiler) */

/* crt0_start @ 8c1ef400 callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 crt0_start(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *a4;
  undefined4 *a5;
  
  a5 = DAT_8c1ef4a8;
  uVar1 = DAT_8c1ef4a4;
  a4 = DAT_8c1ef4a0;
  do {
    *a4 = uVar1;
    a4 = a4 + 1;
  } while (a4 < a5);
  FUN_8c1ef440(a4,a5,uVar1,ar7);
  FUN_8c1ef430(a4,a5,uVar1,ar7);
  (*(code *)PTR_main_8c1ef4ac)(a4,a5,uVar1,ar7);
  uVar1 = FUN_8c1ef438(a4,a5,uVar1,ar7);
  return uVar1;
}



/* FUN_8c1ef430 @ 8c1ef430 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ef430(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1ef4b4)(*(undefined4 *)PTR_PTR_8c1ef4b0);
  return uVar1;
}



/* FUN_8c1ef438 @ 8c1ef438 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ef438(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1ef4b8)(*(undefined4 *)PTR_PTR_8c1ef4b0);
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
  
  puVar2 = PTR_DAT_8c1ef4bc;
  for (puVar4 = *(undefined4 **)PTR_DAT_8c1ef4c0; puVar3 = PTR_PTR_8c1ef4c4,
      puVar4 < *(undefined4 **)puVar2; puVar4 = puVar4 + 1) {
    *puVar4 = 0;
  }
  puVar6 = *(undefined1 **)PTR_PTR_8c1ef4cc;
  for (puVar5 = *(undefined1 **)PTR_PTR_8c1ef4c8; puVar2 = PTR_DAT_8c1ef4d0,
      puVar5 < *(undefined1 **)puVar3; puVar5 = puVar5 + 1) {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar5 = uVar1;
  }
  for (puVar5 = *(undefined1 **)PTR_DAT_8c1ef4d4; puVar3 = PTR_DAT_8c1ef4d8,
      puVar5 < *(undefined1 **)puVar2; puVar5 = puVar5 + 1) {
    *puVar5 = 0;
  }
  puVar6 = *(undefined1 **)PTR_PTR_8c1ef4e0;
  for (puVar5 = *(undefined1 **)PTR_DAT_8c1ef4dc; puVar5 < *(undefined1 **)puVar3;
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
  
  if (*DAT_8c1ef614 != 0) {
    iVar4 = *DAT_8c1ef614 + -1;
    iVar2 = (int)DAT_8c1ef5f8;
    uVar3 = (DAT_8c1ef61c & DAT_8c1ef618) + 0x20;
    *(uint *)(DAT_8c1ef620 | uVar3) = iVar4 * 0x10000 | DAT_8c1ef624;
    piVar1 = DAT_8c1ef628;
    *DAT_8c1ef604 = 1;
    *(uint *)(*(int *)(iVar2 + *piVar1) + 4) = uVar3;
    *(undefined4 *)(*(int *)(iVar2 + *piVar1) + 0x18) = 1;
    auStack_10[0] = 1;
    in_r0 = (*(code *)PTR_FUN_8c1ef62c)(iVar4 * 6,9,auStack_10,1,0,0);
    *DAT_8c1ef630 = *DAT_8c1ef614;
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
  puVar2 = (undefined1 *)(*DAT_8c1ef734 + 0x28);
  puVar3 = DAT_8c1ef730;
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
  
  puVar3 = DAT_8c1ef740;
  puVar2 = PTR_FUN_8c1ef73c;
  puVar1 = PTR_DAT_8c1ef738;
  uVar7 = (*(code *)PTR_FUN_8c1ef73c)
                    ((int)DAT_8c1ef726,PTR_LAB_8c1ef744,*(undefined4 *)PTR_DAT_8c1ef738,0,0x8c4727c4
                    );
  puVar4 = PTR_LAB_8c1ef748;
  iVar8 = (int)DAT_8c1ef728;
  *puVar3 = uVar7;
  uVar7 = (*(code *)puVar2)(iVar8,puVar4,*(undefined4 *)(puVar1 + 4),0);
  puVar4 = PTR_LAB_8c1ef74c;
  iVar8 = (int)DAT_8c1ef728;
  puVar3[1] = uVar7;
  uVar7 = (*(code *)puVar2)(iVar8,puVar4,*(undefined4 *)(puVar1 + 8),0);
  puVar4 = PTR_LAB_8c1ef750;
  iVar8 = (int)DAT_8c1ef72a;
  puVar3[2] = uVar7;
  uVar7 = (*(code *)puVar2)(iVar8,puVar4,*(undefined4 *)(puVar1 + 0xc),0);
  puVar5 = DAT_8c1ef754;
  puVar3[3] = uVar7;
  puVar6 = DAT_8c1ef75c;
  puVar3 = DAT_8c1ef758;
  *puVar5 = 0;
  *puVar3 = 0;
  *puVar6 = 0;
  puVar1 = PTR_memset_8c1ef77c;
  *DAT_8c1ef760 = 0;
  *DAT_8c1ef764 = 0;
  *DAT_8c1ef768 = 0;
  *DAT_8c1ef76c = 0xffffffff;
  *DAT_8c1ef770 = 0;
  *DAT_8c1ef774 = 0;
  *DAT_8c1ef778 = 0;
  (*(code *)puVar1)(DAT_8c1ef780,0,0x38);
  (*(code *)puVar1)(DAT_8c1ef730,0,(int)DAT_8c1ef72c);
  (*(code *)puVar1)(DAT_8c1ef784,0,(int)DAT_8c1ef72c);
  uVar7 = (*(code *)puVar1)(DAT_8c1ef788,0,(int)DAT_8c1ef72e);
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
  
  puVar3 = DAT_8c1ef740;
  puVar2 = PTR_FUN_8c1ef73c;
  puVar1 = PTR_DAT_8c1ef738;
  uVar7 = (*(code *)PTR_FUN_8c1ef73c)
                    ((int)DAT_8c1ef726,PTR_LAB_8c1ef744,*(undefined4 *)PTR_DAT_8c1ef738,ar7);
  puVar4 = PTR_LAB_8c1ef748;
  iVar8 = (int)DAT_8c1ef728;
  *puVar3 = uVar7;
  uVar7 = (*(code *)puVar2)(iVar8,puVar4,*(undefined4 *)(puVar1 + 4),0);
  puVar4 = PTR_LAB_8c1ef74c;
  iVar8 = (int)DAT_8c1ef728;
  puVar3[1] = uVar7;
  uVar7 = (*(code *)puVar2)(iVar8,puVar4,*(undefined4 *)(puVar1 + 8),0);
  puVar4 = PTR_LAB_8c1ef750;
  a7 = 0;
  iVar8 = (int)DAT_8c1ef72a;
  puVar3[2] = uVar7;
  uVar7 = (*(code *)puVar2)(iVar8,puVar4,*(undefined4 *)(puVar1 + 0xc),0);
  puVar5 = DAT_8c1ef754;
  puVar3[3] = uVar7;
  puVar6 = DAT_8c1ef75c;
  puVar3 = DAT_8c1ef758;
  *puVar5 = 0;
  *puVar3 = 0;
  *puVar6 = 0;
  puVar1 = PTR_memset_8c1ef77c;
  *DAT_8c1ef760 = 0;
  *DAT_8c1ef764 = 0;
  *DAT_8c1ef768 = 0;
  *DAT_8c1ef76c = 0xffffffff;
  *DAT_8c1ef770 = 0;
  *DAT_8c1ef774 = 0;
  *DAT_8c1ef778 = 0;
  (*(code *)puVar1)(DAT_8c1ef780,0,0x38,a7);
  (*(code *)puVar1)(DAT_8c1ef730,0,(int)DAT_8c1ef72c,a7);
  (*(code *)puVar1)(DAT_8c1ef784,0,(int)DAT_8c1ef72c,a7);
  uVar7 = (*(code *)puVar1)(DAT_8c1ef788,0,(int)DAT_8c1ef72e,a7);
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
  
  a4 = PTR_PTR_8c1ef860;
  *(uint *)PTR_PTR_8c1ef860 = *(uint *)PTR_PTR_8c1ef860 | DAT_8c1ef864;
  FUN_8c1ef682(a4,ar5,ar6,ar7);
  a5 = DAT_8c1ef868;
  a7 = DAT_8c1ef868;
  uVar1 = (*(code *)PTR_FUN_8c1ef86c)(ar5,DAT_8c1ef868,ar4,DAT_8c1ef868);
  FUN_8c1ef640(ar5,a5,ar4,a7);
  *DAT_8c1ef870 = 1;
  return uVar1;
}



/* FUN_8c1ef7e6 @ 8c1ef7e6 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ef7e6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a4;
  undefined4 uVar1;
  
  a4 = PTR_PTR_8c1ef860;
  *(uint *)PTR_PTR_8c1ef860 = *(uint *)PTR_PTR_8c1ef860 | DAT_8c1ef864;
  FUN_8c1ef682(a4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c1ef874)(ar4,ar5,ar6,ar7);
  FUN_8c1ef640(ar4,ar5,ar6,ar7);
  *DAT_8c1ef870 = 1;
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
  
  ar6_00 = DAT_8c1ef980;
  piVar6 = DAT_8c1ef978;
  uVar1 = DAT_8c1ef96a;
  if (*in_r2 == 0) {
    a7 = 0;
  }
  else {
    uVar7 = (uint)(short)DAT_8c1ef96a;
    *DAT_8c1ef97c = *DAT_8c1ef978 + -1;
    *piVar6 = 0;
    puVar3 = DAT_8c1ef988;
    puVar2 = DAT_8c1ef984;
    if (*ar6_00 != 0) {
      *DAT_8c1ef988 = *DAT_8c1ef984 & uVar7;
      puVar3[1] = (int)(short)((ushort)(*puVar2 >> 0x10) & uVar1);
      ar5 = puVar2;
    }
    piVar6 = DAT_8c1ef98c;
    *ar6_00 = 0;
    if (*piVar6 != 0) {
      *DAT_8c1ef994 = *DAT_8c1ef990;
      *DAT_8c1ef998 = *DAT_8c1ef998 & 0xfffffff7;
      *piVar6 = 0;
    }
    piVar5 = DAT_8c1ef9a4;
    piVar4 = DAT_8c1ef9a0;
    puVar2 = DAT_8c1ef99c;
    if ((*DAT_8c1ef99c & (int)DAT_8c1ef96c) == 0) {
      a7 = (*(code *)PTR_FUN_8c1efab8)(piVar6,ar5,ar6_00,ar7);
      a4 = DAT_8c1efac0;
      if (a7 < 0) {
        pvr_1efaf4(piVar6,ar5,ar6_00,ar7);
        piVar5[4] = piVar5[4] + 1;
        if (*piVar4 != 0) {
          (*(code *)*piVar4)(1,0xfffffff9,piVar5[2],a7);
        }
      }
      else {
        *DAT_8c1efabc = 0;
        *(undefined2 *)((int)piVar5 + *a4 * 2 + 0x34) = 0;
        *(ushort *)((int)piVar5 + *a4 * 2 + 0x2c) = (ushort)*DAT_8c1efac4 & uVar1;
        FUN_8c1ef640(a4,ar5,ar6_00,ar7);
        *piVar5 = *piVar5 + 1;
      }
    }
    else {
      if (((*DAT_8c1ef99c & (int)DAT_8c1ef96e) != 0) &&
         (DAT_8c1ef9a4[7] = DAT_8c1ef9a4[7] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)piVar5[2];
        ar5 = (uint *)0xfffffffe;
        piVar6 = (int *)0x1;
        (*(code *)*piVar4)(1,0xfffffffe,ar6_00,ar7);
      }
      if (((*puVar2 & (int)DAT_8c1ef970) != 0) && (piVar5[8] = piVar5[8] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)piVar5[2];
        ar5 = (uint *)0xfffffffd;
        piVar6 = (int *)0x1;
        (*(code *)*piVar4)(1,0xfffffffd,ar6_00,ar7);
      }
      if (((*puVar2 & (int)DAT_8c1ef972) != 0) && (piVar5[9] = piVar5[9] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)piVar5[2];
        ar5 = (uint *)0xfffffffc;
        piVar6 = (int *)0x1;
        (*(code *)*piVar4)(1,0xfffffffc,ar6_00,ar7);
      }
      if (((*puVar2 & (int)DAT_8c1ef974) != 0) && (piVar5[10] = piVar5[10] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)piVar5[2];
        ar5 = (uint *)0xfffffffb;
        piVar6 = (int *)0x1;
        (*(code *)*piVar4)(1,0xfffffffb,ar6_00,ar7);
      }
      *puVar2 = (int)DAT_8c1ef96c;
      pvr_1efaf4(piVar6,ar5,ar6_00,ar7);
      a7 = (*(code *)PTR_FUN_8c1ef9a8)(piVar6,ar5,ar6_00,ar7);
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
  
  iVar3 = DAT_8c1efad0;
  iVar2 = DAT_8c1efacc;
  bVar1 = *(byte *)((int)DAT_8c1efab6 + *DAT_8c1efac8);
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
      pbVar7 = PTR_DAT_8c1efad4 + uVar8;
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
  
  iVar2 = DAT_8c1efbe4;
  piVar1 = DAT_8c1efbe0;
  a7 = (*(code *)PTR_FUN_8c1efbe8)(ar4,ar5,ar6,ar7);
  if (a7 == -2) {
    *(undefined4 *)((int)DAT_8c1efbda + *piVar1) = 1;
  }
  else if (a7 < 0) {
    if ((code *)*DAT_8c1efd54 != (code *)0x0) {
      (*(code *)*DAT_8c1efd54)(2,0xfffffff8,*(undefined4 *)(iVar2 + 8),a7);
    }
  }
  else {
    (*(code *)PTR_FUN_8c1efbec)(ar4,ar5,ar6,ar7);
    a5 = (int)(short)DAT_8c1efbdc;
    iVar7 = *DAT_8c1efbf0 * 2;
    *(ushort *)(iVar2 + 0x30 + iVar7) =
         ((ushort)*DAT_8c1efbf4 & DAT_8c1efbdc) +
         *(short *)(iVar2 + 0x34 + iVar7) * ((ushort)*DAT_8c1efbf8 & DAT_8c1efbdc);
    FUN_8c1ef640(iVar7,a5,ar6,ar7);
    (*(code *)PTR_FUN_8c1efbfc)(iVar7,a5,ar6,ar7);
    iVar5 = (*(code *)PTR_FUN_8c1efc00)(iVar7,a5,ar6,ar7);
    if (iVar5 != 0) {
      if (((code *)*DAT_8c1efc04 == (code *)0x0) ||
         (iVar5 = (*(code *)*DAT_8c1efc04)(iVar7,a5,ar6,ar7), iVar5 != 0)) {
        iVar5 = FUN_8c1efa2a(iVar7,a5,ar6,ar7);
        *DAT_8c1efc08 = iVar5;
      }
      puVar8 = DAT_8c1efc0c;
      if ((*(int *)((int)DAT_8c1efbde + *piVar1) != 0) && (*DAT_8c1efc08 != 0)) {
        *DAT_8c1efc10 = *DAT_8c1efc0c;
        *puVar8 = *(undefined4 *)(*piVar1 + (int)DAT_8c1efbde);
        *DAT_8c1efc14 = *DAT_8c1efc14 | 8;
        piVar3 = DAT_8c1efc1c;
        *DAT_8c1efc18 = 1;
        *piVar3 = *piVar3 + 1;
      }
    }
    puVar8 = DAT_8c1efc20;
    for (iVar5 = 0; puVar4 = DAT_8c1efd50, iVar5 < 0x30; iVar5 = iVar5 + 1) {
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
    *(undefined4 *)((int)DAT_8c1efd48 + *piVar1) = 0;
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
  *DAT_8c1efd58 = *DAT_8c1efd58 & (int)DAT_8c1efd4c;
  iVar2 = DAT_8c1efd60;
  puVar1 = PTR_FUN_8c1efd5c;
  (*(code *)PTR_FUN_8c1efd5c)(*(undefined4 *)(DAT_8c1efd60 + 0xc),ar5,ar6,ar7);
  (*(code *)puVar1)(*(undefined4 *)(iVar2 + 0x10),ar5,ar6,ar7);
  (*(code *)puVar1)(*(undefined4 *)(iVar2 + 8),ar5,ar6,ar7);
  ar4_00 = *(undefined4 *)(iVar2 + 4);
  (*(code *)puVar1)(ar4_00,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c1efd64)(ar4_00,ar5,ar6,ar7);
  (*(code *)PTR_memset_8c1efd6c)(DAT_8c1efd68,0,(int)DAT_8c1efd4e,ar7);
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)extraout_T | (uint)extraout_S << 1 | (uint)bVar7 << 4 | (uint)extraout_Q << 8 |
          (uint)extraout_M << 9 | (uint)bVar6 << 0xf | (uint)bVar5 << 0x1c | (uint)bVar4 << 0x1d |
         (uint)bVar3 << 0x1e) & (int)DAT_8c1efd4a;
}



/* FUN_8c1efd14 @ 8c1efd14 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1efd14(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 * 0x18 + DAT_8c1efd68;
}



/* FUN_8c1efd26 @ 8c1efd26 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efd26(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1efd70)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c1efd34 @ 8c1efd34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efd34(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1efd74)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* thunk_FUN_8c1f461c @ 8c1efd42 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c1f461c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1efd78)();
  return uVar1;
}



/* FUN_8c1efd7c @ 8c1efd7c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efd7c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1efe64)(ar4,ar5,ar6,ar7);
  if (*(int *)((int)DAT_8c1efe60 + *DAT_8c1efe68) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efda2 @ 8c1efda2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efda2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1efe6c)(ar4,ar5,ar6,ar7);
  if (*(int *)((int)DAT_8c1efe60 + *DAT_8c1efe68) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efdc8 @ 8c1efdc8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efdc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1efe70)(ar4,ar5,ar6,ar7);
  if (*(int *)((int)DAT_8c1efe60 + *DAT_8c1efe68) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efdee @ 8c1efdee callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efdee(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1efe74)(ar4,ar5,ar6,ar7);
  if (*(int *)((int)DAT_8c1efe60 + *DAT_8c1efe68) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efe14 @ 8c1efe14 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efe14(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1efe78)(ar4,ar5,ar6,ar7);
  if (*(int *)((int)DAT_8c1efe60 + *DAT_8c1efe68) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efe3a @ 8c1efe3a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efe3a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1efe7c)(ar4,ar5,ar6,ar7);
  if (*(int *)((int)DAT_8c1efe60 + *DAT_8c1efe68) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efe80 @ 8c1efe80 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efe80(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1eff80)(ar4,ar5,ar6,ar7);
  if (*(int *)((int)DAT_8c1eff7e + *DAT_8c1eff84) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efeac @ 8c1efeac callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efeac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1eff88)(ar4,ar5,ar6,ar7);
  if (*(int *)((int)DAT_8c1eff7e + *DAT_8c1eff84) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1efee0 @ 8c1efee0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1efee0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1eff8c)(ar4,ar5,ar6,ar7);
  if (*(int *)((int)DAT_8c1eff7e + *DAT_8c1eff84) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1eff0c @ 8c1eff0c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1eff0c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1eff90)(ar4,ar5,ar6,ar7);
  if (*(int *)((int)DAT_8c1eff7e + *DAT_8c1eff84) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1eff32 @ 8c1eff32 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1eff32(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1eff94)(ar4,ar5,ar6,ar7);
  if (*(int *)((int)DAT_8c1eff7e + *DAT_8c1eff84) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1eff58 @ 8c1eff58 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1eff58(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1eff98)(ar4,ar5,ar6,ar7);
  if (*(int *)((int)DAT_8c1eff7e + *DAT_8c1eff84) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1eff9c @ 8c1eff9c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1eff9c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1f00dc)(ar4,ar5,ar6,ar7);
  if (*(int *)((int)DAT_8c1f00d8 + *DAT_8c1f00e0) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1effc2 @ 8c1effc2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1effc2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_thunk_FUN_8c1f4ec6_8c1f00e4)(ar4,ar5,ar6,ar7);
  if (*(int *)((int)DAT_8c1f00d8 + *DAT_8c1f00e0) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* thunk_FUN_8c1f4636 @ 8c1effee callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c1f4636(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1f00ec)();
  return uVar1;
}



/* thunk_FUN_8c1f4646 @ 8c1efff4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c1f4646(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1f00f0)();
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
  uVar3 = DAT_8c1f00f4;
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


