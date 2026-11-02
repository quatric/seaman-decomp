/* Seaman (USA) region 0x8c1f0000-0x8c200000 (Ghidra decompiler) */

/* FUN_8c1f002a @ 8c1f002a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f002a(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,1,ar6,ar7);
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  *ar4 = (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 | (uint)*pbVar1 << 0x18 | (uint)pbVar1[3];
  return 0;
}



/* FUN_8c1f0074 @ 8c1f0074 callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c1f00c8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0074(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,2,ar6,ar7);
  if (pbVar1 != (byte *)0x0) {
    *ar4 = *pbVar1 + 1;
    ar4[1] = (pbVar1[1] + 1) * 0x20;
    ar4[2] = (ushort)(pbVar1[2] >> 4);
    ar4[3] = pbVar1[2] & 0xf;
    ar4[4] = (ushort)(pbVar1[3] >> 7);
    return 0;
  }
  return 0xffffffff;
}



/* FUN_8c1f00f8 @ 8c1f00f8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f00f8(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,0x10,ar6,ar7);
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  *ar4 = (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 | (uint)*pbVar1 << 0x18 | (uint)pbVar1[3];
  return 0;
}



/* FUN_8c1f0142 @ 8c1f0142 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0142(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,4,ar6,ar7);
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  *ar4 = *pbVar1 + 1;
  ar4[1] = (pbVar1[1] + 1) * 0x20;
  ar4[2] = (ushort)(pbVar1[2] >> 4);
  *(byte *)(ar4 + 3) = pbVar1[3] >> 6;
  *(byte *)((int)ar4 + 7) = pbVar1[3] >> 5 & 1;
  return 0;
}



/* FUN_8c1f01ae @ 8c1f01ae callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f01ae(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_8c1efffa(ar5,8,ar6,ar7);
  if (puVar1 == (undefined1 *)0x0) {
    return 0xffffffff;
  }
  *ar4 = *puVar1;
  ar4[1] = puVar1[1];
  ar4[2] = puVar1[2];
  ar4[3] = puVar1[3];
  return 0;
}



/* FUN_8c1f01e8 @ 8c1f01e8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f01e8(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,0x20,ar6,ar7);
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  *ar4 = (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 | (uint)*pbVar1 << 0x18 | (uint)pbVar1[3];
  return 0;
}



/* FUN_8c1f0232 @ 8c1f0232 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0232(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,(int)DAT_8c1f0268,ar6,ar7);
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  *ar4 = (uint)*pbVar1;
  ar4[1] = (uint)pbVar1[1];
  return 0;
}



/* FUN_8c1f026a @ 8c1f026a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f026a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 1) {
    (*(code *)PTR_FUN_8c1f03b8)(ar5);
  }
  else if (ar4 == 2) {
    (*(code *)PTR_FUN_8c1f03bc)(ar5);
  }
  else if (ar4 == 4) {
    (*(code *)PTR_FUN_8c1f03c0)(ar5);
  }
  else if (ar4 == 3) {
    (*(code *)PTR_FUN_8c1f03c4)(ar5);
  }
  else if (ar4 == 6) {
    (*(code *)PTR_FUN_8c1f03c8)(ar5);
  }
  else if (ar4 == 5) {
    (*(code *)PTR_FUN_8c1f03cc)(ar5);
  }
  else if (ar4 == 0) {
    (*(code *)PTR_FUN_8c1f03d0)(ar5);
  }
  else if (ar4 == 7) {
    (*(code *)PTR_FUN_8c1f03d4)(ar5);
  }
  else if (ar4 == 8) {
    (*(code *)PTR_FUN_8c1f03d8)(ar5);
  }
  else {
    if (ar4 != 9) {
      return 0xffffffff;
    }
    (*(code *)PTR_FUN_8c1f03dc)(ar5);
  }
  return 0;
}



/* FUN_8c1f026e @ 8c1f026e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f026e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  
  if (in_r0 == 1) {
    (*(code *)PTR_FUN_8c1f03b8)(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 2) {
    (*(code *)PTR_FUN_8c1f03bc)(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 4) {
    (*(code *)PTR_FUN_8c1f03c0)(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 3) {
    (*(code *)PTR_FUN_8c1f03c4)(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 6) {
    (*(code *)PTR_FUN_8c1f03c8)(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 5) {
    (*(code *)PTR_FUN_8c1f03cc)(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 0) {
    (*(code *)PTR_FUN_8c1f03d0)(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 7) {
    (*(code *)PTR_FUN_8c1f03d4)(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 8) {
    (*(code *)PTR_FUN_8c1f03d8)(ar5,ar5,ar6,ar7);
  }
  else {
    if (in_r0 != 9) {
      return 0xffffffff;
    }
    (*(code *)PTR_FUN_8c1f03dc)(ar5,ar5,ar6,ar7);
  }
  return 0;
}



/* FUN_8c1f0312 @ 8c1f0312 callers=0 callees=10 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0312(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 1) {
    uVar1 = (*(code *)PTR_FUN_8c1f03e0)();
    return uVar1;
  }
  if (ar4 == 2) {
    uVar1 = (*(code *)PTR_FUN_8c1f03e4)();
    return uVar1;
  }
  if (ar4 == 4) {
    uVar1 = (*(code *)PTR_FUN_8c1f03e8)();
    return uVar1;
  }
  if (ar4 == 3) {
    uVar1 = (*(code *)PTR_FUN_8c1f03ec)();
    return uVar1;
  }
  if (ar4 == 6) {
    uVar1 = (*(code *)PTR_FUN_8c1f03f0)();
    return uVar1;
  }
  if (ar4 == 5) {
    uVar1 = (*(code *)PTR_FUN_8c1f03f4)();
    return uVar1;
  }
  if (ar4 == 0) {
    uVar1 = (*(code *)PTR_FUN_8c1f03f8)();
    return uVar1;
  }
  if (ar4 != 7) {
    if (ar4 == 8) {
      uVar1 = (*(code *)PTR_FUN_8c1f0400)();
      return uVar1;
    }
    if (ar4 != 9) {
      return 0xffffffff;
    }
    uVar1 = (*(code *)PTR_FUN_8c1f0404)();
    return uVar1;
  }
  uVar1 = (*(code *)PTR_FUN_8c1f03fc)();
  return uVar1;
}



/* FUN_8c1f0392 @ 8c1f0392 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0392(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *DAT_8c1f0410;
}



/* FUN_8c1f0398 @ 8c1f0398 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0398(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *DAT_8c1f0414 = ar4 + 1;
  return in_r0;
}



/* FUN_8c1f03a6 @ 8c1f03a6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f03a6(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int in_r0;
  
  iVar1 = DAT_8c1f041c;
  if (ar4 < 0x20) {
    *(undefined4 *)(DAT_8c1f041c + ar4 * 4) = ar5;
    in_r0 = iVar1;
  }
  return in_r0;
}



/* FUN_8c1f0420 @ 8c1f0420 callers=12 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0420(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (ar4 * 2 + *(int *)(_DAT_8c4727b4 + 0xfc0)) * 0xc;
  *(undefined4 *)(&DAT_8c470c28 + iVar1) = ar5;
  *(undefined4 *)(&DAT_8c470c24 + iVar1) = ar6;
  *(int *)(&DAT_8c470c20 + iVar1) = ar4;
  return 0;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f0446 @ 8c1f0444 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f0446(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  undefined4 a5;
  
  bVar1 = **(byte **)PTR_PTR_8c1f0530;
  **(byte **)PTR_PTR_8c1f0530 = bVar1 | 0x80;
  if (bVar1 != 0) {
    (*(code *)PTR_FUN_8c1f0538)(ar4,ar5,ar6,ar7,PTR_s____FATAL_ERROR_Cannot_get_semaph_8c1f0534,ar4)
    ;
    return 0xfffffffe;
  }
  a5 = ar5;
  a4 = ar4;
  a6 = (*(code *)PTR_FUN_8c1f053c)(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,ar5,a6,ar7);
    ar4 = a4;
    a5 = ar5;
  }
  piVar2 = DAT_8c1f0528;
  **(undefined1 **)PTR_PTR_8c1f0530 = 0;
  if (*(int *)((int)DAT_8c1f0524 + *piVar2) != 0) {
    pvr_1efaf4(ar4,a5,ar6,ar7);
  }
  return a6;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f04a2 @ 8c1f04a0 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f04a2(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  undefined4 a5;
  
  bVar1 = **(byte **)PTR_PTR_8c1f0530;
  **(byte **)PTR_PTR_8c1f0530 = bVar1 | 0x80;
  if (bVar1 != 0) {
    (*(code *)PTR_FUN_8c1f0538)(ar4,ar5,ar6,ar7,PTR_s____FATAL_ERROR_Cannot_get_semaph_8c1f0534,ar4)
    ;
    return 0xfffffffe;
  }
  a5 = ar5;
  a4 = ar4;
  a6 = (*(code *)PTR_FUN_8c1f0540)(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,ar5,a6,ar7);
    ar4 = a4;
    a5 = ar5;
  }
  piVar2 = DAT_8c1f0528;
  **(undefined1 **)PTR_PTR_8c1f0530 = 0;
  if (*(int *)((int)DAT_8c1f0524 + *piVar2) != 0) {
    pvr_1efaf4(ar4,a5,ar6,ar7);
  }
  return a6;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f04fe @ 8c1f04fc callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f04fe(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  undefined4 a5;
  
  bVar1 = **(byte **)PTR_PTR_8c1f0530;
  **(byte **)PTR_PTR_8c1f0530 = bVar1 | 0x80;
  if (bVar1 != 0) {
    (*(code *)PTR_FUN_8c1f0538)(ar4,ar5,ar6,ar7,PTR_s____FATAL_ERROR_Cannot_get_semaph_8c1f0534,ar4)
    ;
    return 0xfffffffe;
  }
  a5 = ar5;
  a4 = ar4;
  a6 = (*(code *)PTR_FUN_8c1f0634)(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,ar5,a6,ar7);
    ar4 = a4;
    a5 = ar5;
  }
  piVar2 = DAT_8c1f063c;
  **(undefined1 **)PTR_PTR_8c1f0638 = 0;
  if (*(int *)((int)DAT_8c1f0632 + *piVar2) != 0) {
    pvr_1efaf4(ar4,a5,ar6,ar7);
  }
  return a6;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f057c @ 8c1f057a callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f057c(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  undefined4 a5;
  
  bVar1 = **(byte **)PTR_PTR_8c1f0638;
  **(byte **)PTR_PTR_8c1f0638 = bVar1 | 0x80;
  if (bVar1 != 0) {
    (*(code *)PTR_FUN_8c1f0644)(ar4,ar5,ar6,ar7,PTR_s____FATAL_ERROR_Cannot_get_semaph_8c1f0640,ar4)
    ;
    return 0xfffffffe;
  }
  a5 = ar5;
  a4 = ar4;
  a6 = (*(code *)PTR_FUN_8c1f0648)(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,ar5,a6,ar7);
    ar4 = a4;
    a5 = ar5;
  }
  piVar2 = DAT_8c1f063c;
  **(undefined1 **)PTR_PTR_8c1f0638 = 0;
  if (*(int *)((int)DAT_8c1f0632 + *piVar2) != 0) {
    pvr_1efaf4(ar4,a5,ar6,ar7);
  }
  return a6;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f05d8 @ 8c1f05d6 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 s_FATAL_ERROR_Cannot_get_semap_1f05d8(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  int a6_00;
  
  bVar1 = **(byte **)PTR_PTR_8c1f0638;
  **(byte **)PTR_PTR_8c1f0638 = bVar1 | 0x80;
  if (bVar1 != 0) {
    (*(code *)PTR_FUN_8c1f0644)(ar4,ar5,ar6,ar7,PTR_s____FATAL_ERROR_Cannot_get_semaph_8c1f0640,ar4)
    ;
    return 0xfffffffe;
  }
  a6_00 = ar6;
  a4 = ar4;
  a6 = (*(code *)PTR_FUN_8c1f064c)(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    a6_00 = a6;
    FUN_8c1f0420(a4,ar6,a6,ar7);
    ar4 = a4;
    ar5 = ar6;
  }
  piVar2 = DAT_8c1f063c;
  **(undefined1 **)PTR_PTR_8c1f0638 = 0;
  if (*(int *)((int)DAT_8c1f0632 + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,a6_00,ar7);
  }
  return a6;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f0652 @ 8c1f0650 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f0652(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  undefined4 a7;
  
  bVar1 = **(byte **)PTR_PTR_8c1f0734;
  **(byte **)PTR_PTR_8c1f0734 = bVar1 | 0x80;
  if (bVar1 != 0) {
    (*(code *)PTR_FUN_8c1f073c)(ar4,ar5,ar6,ar7,PTR_s____FATAL_ERROR_Cannot_get_semaph_8c1f0738,ar4)
    ;
    return 0xfffffffe;
  }
  a7 = ar7;
  a4 = ar4;
  a6 = (*(code *)PTR_FUN_8c1f0740)(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,ar7,a6,a7);
    ar4 = a4;
    ar5 = ar7;
  }
  piVar2 = DAT_8c1f0744;
  **(undefined1 **)PTR_PTR_8c1f0734 = 0;
  if (*(int *)((int)DAT_8c1f0730 + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,a7);
  }
  return a6;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f06ae @ 8c1f06ac callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f06ae
          (undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  
  bVar1 = **(byte **)PTR_PTR_8c1f0734;
  **(byte **)PTR_PTR_8c1f0734 = bVar1 | 0x80;
  if (bVar1 != 0) {
    (*(code *)PTR_FUN_8c1f073c)(ar4,ar5,ar6,ar7,PTR_s____FATAL_ERROR_Cannot_get_semaph_8c1f0738,ar4)
    ;
    return 0xfffffffe;
  }
  a4 = ar4;
  a6 = (*(code *)PTR_FUN_8c1f0748)(ar4,ar5,ar6,ar7,s0);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,s4,a6,ar7);
    ar4 = a4;
    ar5 = s4;
  }
  piVar2 = DAT_8c1f0744;
  **(undefined1 **)PTR_PTR_8c1f0734 = 0;
  if (*(int *)((int)DAT_8c1f0730 + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return a6;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f070e @ 8c1f070c callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f070e
          (undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
          undefined4 s8,undefined4 s12)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  
  bVar1 = **(byte **)PTR_PTR_8c1f0734;
  **(byte **)PTR_PTR_8c1f0734 = bVar1 | 0x80;
  if (bVar1 != 0) {
    (*(code *)PTR_FUN_8c1f073c)(ar4,ar5,ar6,ar7,PTR_s____FATAL_ERROR_Cannot_get_semaph_8c1f0738,ar4)
    ;
    return 0xfffffffe;
  }
  a4 = ar4;
  a6 = (*(code *)PTR_FUN_8c1f0850)(ar4,ar5,ar6,ar7,s0);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,s12,a6,ar7);
    ar4 = a4;
    ar5 = s12;
  }
  piVar2 = DAT_8c1f0858;
  **(undefined1 **)PTR_PTR_8c1f0854 = 0;
  if (*(int *)((int)DAT_8c1f084c + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return a6;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f0792 @ 8c1f0790 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f0792
          (undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  
  bVar1 = **(byte **)PTR_PTR_8c1f0854;
  **(byte **)PTR_PTR_8c1f0854 = bVar1 | 0x80;
  if (bVar1 != 0) {
    (*(code *)PTR_FUN_8c1f0860)(ar4,ar5,ar6,ar7,PTR_s____FATAL_ERROR_Cannot_get_semaph_8c1f085c,ar4)
    ;
    return 0xfffffffe;
  }
  a4 = ar4;
  a6 = (*(code *)PTR_FUN_8c1f0864)(ar4,ar5,ar6,ar7,s0);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,s4,a6,ar7);
    ar4 = a4;
    ar5 = s4;
  }
  piVar2 = DAT_8c1f0858;
  **(undefined1 **)PTR_PTR_8c1f0854 = 0;
  if (*(int *)((int)DAT_8c1f084c + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return a6;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f07f2 @ 8c1f07f0 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 s_FATAL_ERROR_Cannot_get_semap_1f07f2(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  int a6_00;
  
  bVar1 = **(byte **)PTR_PTR_8c1f0854;
  **(byte **)PTR_PTR_8c1f0854 = bVar1 | 0x80;
  if (bVar1 != 0) {
    (*(code *)PTR_FUN_8c1f0860)(ar4,ar5,ar6,ar7,PTR_s____FATAL_ERROR_Cannot_get_semaph_8c1f085c,ar4)
    ;
    return 0xfffffffe;
  }
  a6_00 = ar6;
  a4 = ar4;
  a6 = (*(code *)PTR_FUN_8c1f0868)(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    a6_00 = a6;
    FUN_8c1f0420(a4,ar6,a6,ar7);
    ar4 = a4;
    ar5 = ar6;
  }
  piVar2 = DAT_8c1f0858;
  **(undefined1 **)PTR_PTR_8c1f0854 = 0;
  if (*(int *)((int)DAT_8c1f084c + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,a6_00,ar7);
  }
  return a6;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f086e @ 8c1f086c callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 s_FATAL_ERROR_Cannot_get_semap_1f086e(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  int a6_00;
  
  bVar1 = **(byte **)PTR_PTR_8c1f0924;
  **(byte **)PTR_PTR_8c1f0924 = bVar1 | 0x80;
  if (bVar1 != 0) {
    (*(code *)PTR_FUN_8c1f092c)(ar4,ar5,ar6,ar7,PTR_s____FATAL_ERROR_Cannot_get_semaph_8c1f0928,ar4)
    ;
    return 0xfffffffe;
  }
  a6_00 = ar6;
  a4 = ar4;
  a6 = (*(code *)PTR_FUN_8c1f0930)(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    a6_00 = a6;
    FUN_8c1f0420(a4,ar6,a6,ar7);
    ar4 = a4;
    ar5 = ar6;
  }
  piVar2 = DAT_8c1f0934;
  **(undefined1 **)PTR_PTR_8c1f0924 = 0;
  if (*(int *)((int)DAT_8c1f0922 + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,a6_00,ar7);
  }
  return a6;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f08ca @ 8c1f08c8 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f08ca
          (undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  
  bVar1 = **(byte **)PTR_PTR_8c1f0924;
  **(byte **)PTR_PTR_8c1f0924 = bVar1 | 0x80;
  if (bVar1 != 0) {
    (*(code *)PTR_FUN_8c1f092c)(ar4,ar5,ar6,ar7,PTR_s____FATAL_ERROR_Cannot_get_semaph_8c1f0928,ar4)
    ;
    return 0xfffffffe;
  }
  a4 = ar4;
  a6 = (*(code *)PTR_FUN_8c1f0938)(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,s0,a6,ar7);
    ar4 = a4;
    ar5 = s0;
  }
  piVar2 = DAT_8c1f0934;
  **(undefined1 **)PTR_PTR_8c1f0924 = 0;
  if (*(int *)((int)DAT_8c1f0922 + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return a6;
}



/* FUN_8c1f094c @ 8c1f094c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f094c(char *ar4,char *ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  
  do {
    bVar3 = ar6 < 1;
    ar6 = ar6 + -1;
    if (bVar3) {
      return 1;
    }
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    cVar2 = *ar4;
    ar4 = ar4 + 1;
  } while (cVar2 == cVar1);
  return 0;
}



/* FUN_8c1f0958 @ 8c1f0958 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0958(undefined4 *ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (ar6 < 0) {
    ar6 = ar6 + 3;
  }
  iVar2 = ar6 >> 2;
  while (bVar3 = 0 < iVar2, iVar2 = iVar2 + -1, bVar3) {
    uVar1 = *ar4;
    ar4 = ar4 + 1;
    *ar5 = uVar1;
    ar5 = ar5 + 1;
  }
  return in_r0;
}



/* FUN_8c1f097e @ 8c1f097e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f097e(undefined1 *ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined4 in_r0;
  bool bVar2;
  
  while (bVar2 = 0 < ar6, ar6 = ar6 + -1, bVar2) {
    uVar1 = *ar4;
    ar4 = ar4 + 1;
    *ar5 = uVar1;
    ar5 = ar5 + 1;
  }
  return in_r0;
}



/* FUN_8c1f0988 @ 8c1f0988 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0988(undefined1 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  for (; 0 < ar5; ar5 = ar5 + -1) {
    *ar4 = 0xff;
    ar4 = ar4 + 1;
  }
  return in_r0;
}



/* FUN_8c1f099c @ 8c1f099c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f099c(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = ar5 << 6;
  do {
    if (iVar4 < 1) {
      return iVar3;
    }
    cVar2 = *ar4;
    ar4 = ar4 + 1;
    iVar1 = 8;
    do {
      if (((int)cVar2 & 0x80U) != 0) {
        return iVar3;
      }
      iVar1 = iVar1 + -1;
      cVar2 = cVar2 << 1;
      iVar3 = iVar3 + 1;
    } while (0 < iVar1);
    iVar4 = iVar4 + -1;
  } while( true );
}



/* FUN_8c1f09d4 @ 8c1f09d4 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f09d4(int ar4,undefined1 *ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = ar6 << 6; 0 < iVar2; iVar2 = iVar2 + -1) {
    if (ar4 < 8) {
      if (ar4 < 1) {
        *ar5 = 0xff;
      }
      else {
        iVar1 = 8;
        do {
          ar6 = ar6 << 1;
          if (ar4 < 1) {
            ar6 = ar6 | 1;
          }
          else {
            ar4 = ar4 + -1;
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        *ar5 = (char)ar6;
      }
    }
    else {
      *ar5 = 0;
      ar4 = ar4 + -8;
    }
    ar5 = ar5 + 1;
  }
  return 0;
}



/* FUN_8c1f0a22 @ 8c1f0a22 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0a22(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar2 = DAT_8c1f0aec;
  iVar5 = 0x3c;
  pbVar6 = ar5 + 2;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    if (bVar1 != DAT_8c1f0aec) goto LAB_8c1f0a54;
    iVar5 = iVar5 + -1;
  } while (0 < iVar5);
  sVar3 = (*(code *)PTR_FUN_8c1f0af0)(0x3e,ar5);
  if (*(short *)(ar5 + 0x3e) == sVar3) {
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ar5 = (char)uVar2;
      ar5 = ar5 + 1;
    }
    uVar4 = 1;
  }
  else {
LAB_8c1f0a54:
    uVar4 = 0;
  }
  return uVar4;
}



/* FUN_8c1f0a2a @ 8c1f0a2a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0a2a(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *unaff_r13;
  
  uVar2 = DAT_8c1f0aec;
  pbVar6 = (byte *)(ar5 + 2);
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    if (bVar1 != DAT_8c1f0aec) goto LAB_8c1f0a54;
    ar4 = ar4 + -1;
  } while (0 < ar4);
  uVar3 = (*(code *)PTR_FUN_8c1f0af0)(0x3e,unaff_r13,ar6,ar7);
  if ((uint)*(ushort *)(unaff_r13 + 0x3e) == (uVar3 & 0xffff)) {
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *unaff_r13 = (char)uVar2;
      unaff_r13 = unaff_r13 + 1;
    }
    uVar4 = 1;
  }
  else {
LAB_8c1f0a54:
    uVar4 = 0;
  }
  return uVar4;
}



/* FUN_8c1f0a72 @ 8c1f0a72 callers=2 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0a72(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 ar6_00;
  int ar5_00;
  int iVar4;
  int ar4_00;
  ushort *a5;
  
  ar5_00 = *(int *)(ar4 + 0xc);
  ar4_00 = *(int *)(ar4 + 4);
  iVar1 = syscall_1f98c4(ar4_00,ar5_00,0x40,ar7);
  if (iVar1 != -1) {
    iVar4 = (*(int *)(ar4 + 0x14) + 1) * 0x40;
    iVar1 = iVar4 + ar5_00;
    iVar3 = *(int *)(ar4 + 0x18) << 6;
    iVar4 = syscall_1f98c4(ar4_00 + iVar4,iVar1,iVar3,ar7);
    if (iVar4 != -1) {
      iVar4 = FUN_8c1f099c(iVar1,*(undefined4 *)(ar4 + 0x18),iVar3,ar7);
      *(int *)(ar4 + 0x10) = iVar4;
      if (*(short *)(ar4 + 2) != 0) {
        return 0xfffffffa;
      }
      a5 = (ushort *)(ar4 + 0x34);
      while( true ) {
        if (iVar4 < 1) {
          return 0;
        }
        ar4_00 = ar4_00 + 0x40;
        ar6_00 = 0x40;
        iVar3 = syscall_1f98c4(ar4_00,a5,0x40,ar7);
        if (iVar3 == -1) break;
        if (*a5 == 0xffff) {
          return 0;
        }
        uVar2 = FUN_8c1f109c(0x3e,a5,ar6_00,ar7);
        if (((uint)*(ushort *)(ar4 + 0x72) == (uVar2 & 0xffff)) &&
           ((int)(uint)*a5 < *(int *)(ar4 + 0x14))) {
          FUN_8c1f0958(a5,(*a5 + 1) * 0x40 + ar5_00,0x40,ar7,iVar1);
        }
        iVar4 = iVar4 + -1;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}



/* FUN_8c1f0b58 @ 8c1f0b58 callers=2 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0b58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int a4;
  int a4_00;
  ushort *ar5_00;
  
  puVar1 = PTR_syscall_1f98d8_8c1f0d54;
  iVar5 = *(int *)(ar4 + 4);
  if (*(short *)(ar4 + 2) == 0) {
    ar5_00 = *(ushort **)(ar4 + 0xc);
    uVar4 = 0x40;
    iVar2 = (*(code *)PTR_syscall_1f98d8_8c1f0d54)(iVar5,ar5_00,0x40,ar7);
    if (iVar2 == 0x40) {
      a4_00 = iVar5 + 0x40;
      a4 = 0;
      for (iVar2 = *(int *)(ar4 + 0x14); ar5_00 = ar5_00 + 0x20, 0 < iVar2; iVar2 = iVar2 + -1) {
        if ((*ar5_00 != DAT_8c1f0d4c) && (iVar3 = FUN_8c1f0a22(ar4,ar5_00,uVar4,ar7), iVar3 == 0)) {
          uVar4 = 0x40;
          iVar3 = (*(code *)puVar1)(a4_00,ar5_00,0x40,ar7);
          if (iVar3 != 0x40) goto LAB_8c1f0bf4;
          a4 = a4 + 1;
          a4_00 = a4_00 + 0x40;
        }
      }
      iVar2 = *(int *)(ar4 + 0x14);
      FUN_8c1f09d4(a4,ar5_00,*(undefined4 *)(ar4 + 0x18),ar7);
      iVar5 = (*(code *)puVar1)((iVar2 + 1) * 0x40 + iVar5,ar5_00,*(int *)(ar4 + 0x18) << 6,ar7);
      if (iVar5 == *(int *)(ar4 + 0x18) << 6) {
        *(int *)(ar4 + 0x10) = a4;
        return 0;
      }
    }
LAB_8c1f0bf4:
    uVar4 = 0xfffffffe;
  }
  else {
    uVar4 = 0xfffffffa;
  }
  return uVar4;
}



/* FUN_8c1f0c14 @ 8c1f0c14 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0c14(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *ar5_00;
  
  if (*(short *)(ar4 + 2) == 0) {
    ar5_00 = (undefined2 *)(ar4 + 0x34);
    *ar5_00 = (short)*(undefined4 *)(ar4 + 0x28);
    uVar2 = 0x3c;
    func_0x8c1f0974(*(undefined4 *)(ar4 + 0x30),ar4 + 0x36,0x3c,ar7);
    uVar2 = FUN_8c1f109c(0x3e,ar5_00,uVar2,ar7);
    *(short *)(ar4 + 0x72) = (short)uVar2;
    iVar1 = (*(int *)(ar4 + 0x28) + 1) * 0x40;
    FUN_8c1f0958(ar5_00,*(int *)(ar4 + 0xc) + iVar1,0x40,ar7,iVar1);
    if (*(int *)(ar4 + 0x10) < *(int *)(ar4 + 0x14)) {
      iVar1 = (*(int *)(ar4 + 0x14) + 1) * 0x40;
      FUN_8c1f09d4(*(int *)(ar4 + 0x10) + 1,*(int *)(ar4 + 0xc) + iVar1,*(undefined4 *)(ar4 + 0x18),
                   ar7);
      iVar1 = syscall_1f98d8(*(int *)(ar4 + 4) + iVar1,*(int *)(ar4 + 0xc) + iVar1,
                             *(int *)(ar4 + 0x18) << 6,ar7);
      if (iVar1 == *(int *)(ar4 + 0x18) << 6) {
        iVar1 = *(int *)(ar4 + 0x10);
        *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + 1;
        iVar1 = syscall_1f98d8(*(int *)(ar4 + 4) + (iVar1 + 1) * 0x40,ar5_00,0x40,ar7);
        if (iVar1 == 0x40) {
          return 0;
        }
      }
      uVar2 = 0xfffffffe;
    }
    else {
      uVar2 = 0xfffffff6;
    }
  }
  else {
    uVar2 = 0xfffffffa;
  }
  return uVar2;
}



/* FUN_8c1f0cdc @ 8c1f0cdc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0cdc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  
  if (*(short *)(ar4 + 2) == 0) {
    puVar3 = (ushort *)((*(int *)(ar4 + 0x28) + 1) * 0x40 + *(int *)(ar4 + 0xc));
    func_0x8c1f0974(puVar3 + 1,*(undefined4 *)(ar4 + 0x30),0x3c);
    if ((*puVar3 == DAT_8c1f0d4c) ||
       (uVar1 = (*(code *)PTR_FUN_8c1f0d50)(0x3e,puVar3), puVar3[0x1f] == uVar1)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffc;
    }
  }
  else {
    uVar2 = 0xfffffffa;
  }
  return uVar2;
}



/* FUN_8c1f0ce2 @ 8c1f0ce2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0ce2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_r13;
  ushort *ar5_00;
  
  if (*(short *)(unaff_r13 + 2) == 0) {
    uVar2 = 0x3c;
    ar5_00 = (ushort *)((*(int *)(unaff_r13 + 0x28) + 1) * 0x40 + *(int *)(unaff_r13 + 0xc));
    func_0x8c1f0974(ar5_00 + 1,*(undefined4 *)(unaff_r13 + 0x30),0x3c,ar7);
    if ((*ar5_00 == DAT_8c1f0d4c) ||
       (uVar1 = (*(code *)PTR_FUN_8c1f0d50)(0x3e,ar5_00,uVar2,ar7),
       (uint)ar5_00[0x1f] == (uVar1 & 0xffff))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffc;
    }
  }
  else {
    uVar2 = 0xfffffffa;
  }
  return uVar2;
}



/* FUN_8c1f0d34 @ 8c1f0d34 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0d34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(ar4 + 0x24);
  if (iVar1 == 0) {
    iVar1 = FUN_8c1f0c14(ar4,ar5,ar6,ar7);
    if (iVar1 != -10) {
      return iVar1;
    }
    uVar2 = 1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0xfffffffe;
      }
      uVar2 = FUN_8c1f0b58(ar4,ar5,ar6,ar7);
      return uVar2;
    }
    iVar1 = (*(code *)PTR_syscall_1f98ec_8c1f0e5c)(*(undefined4 *)(ar4 + 4));
    if (iVar1 == -1) {
      return 0xfffffffd;
    }
    uVar2 = 2;
  }
  *(undefined4 *)(ar4 + 0x24) = uVar2;
  return 1;
}



/* FUN_8c1f0d38 @ 8c1f0d38 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0d38(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r14;
  
  iVar1 = *(int *)(unaff_r14 + 0x24);
  if (iVar1 == 0) {
    iVar1 = FUN_8c1f0c14(unaff_r14,ar5,ar6,ar7);
    if (iVar1 != -10) {
      return iVar1;
    }
    uVar2 = 1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0xfffffffe;
      }
      uVar2 = FUN_8c1f0b58(unaff_r14,ar5,ar6,ar7);
      return uVar2;
    }
    iVar1 = (*(code *)PTR_syscall_1f98ec_8c1f0e5c)(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7);
    if (iVar1 == -1) {
      return 0xfffffffd;
    }
    uVar2 = 2;
  }
  *(undefined4 *)(unaff_r14 + 0x24) = uVar2;
  return 1;
}



/* s_KATANA_FLASH_1f0d98 @ 8c1f0d94 callers=0 callees=2 */

/* WARNING: Removing unreachable block (ram,0x8c1f0dde) */
/* WARNING: Removing unreachable block (ram,0x8c1f0dea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_KATANA_FLASH_1f0d98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((ar4 < 1) || (4 < ar4)) {
    uVar2 = 0xfffffff9;
  }
  else {
    _DAT_8c2739d8 = (short *)&DAT_8c470ee0;
    syscall_1f98b0(ar4,&uStack_14,ar6,ar7);
    *_DAT_8c2739d8 = (short)ar4;
    *(undefined4 *)(_DAT_8c2739d8 + 2) = uStack_14;
    *(undefined4 *)(_DAT_8c2739d8 + 4) = uStack_10;
    *(int *)(_DAT_8c2739d8 + 0xc) = *(int *)(_DAT_8c2739d8 + 4) + 0x7fff >> 0xf;
    *(int *)(_DAT_8c2739d8 + 10) =
         ((*(int *)(_DAT_8c2739d8 + 4) >> 6) - *(int *)(_DAT_8c2739d8 + 0xc)) + -1;
    *(undefined4 *)(_DAT_8c2739d8 + 6) = ar5;
    psVar1 = _DAT_8c2739d8;
    psVar1[0xe] = 0;
    psVar1[0xf] = 0;
    psVar1 = _DAT_8c2739d8;
    psVar1[0x10] = 0;
    psVar1[0x11] = 0;
    psVar1 = _DAT_8c2739d8;
    psVar1[0x16] = 0;
    psVar1[0x17] = 0;
    iVar3 = syscall_1f98c4(*(undefined4 *)(_DAT_8c2739d8 + 2),_DAT_8c2739d8 + 0x1a,0x40,ar7);
    psVar1 = _DAT_8c2739d8;
    if (iVar3 == -1) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0xc;
      iVar3 = func_0x8c1f093c(_DAT_8c2739d8 + 0x1a,s_KATANA_FLASH_____8c26c00c,0xc,ar7);
      if ((iVar3 != 0) && ((int)*_DAT_8c2739d8 == (int)(char)psVar1[0x22])) {
        _DAT_8c2739d8[1] = (short)*(char *)((int)psVar1 + 0x45);
        if ((_DAT_8c2739d8[1] == 0) || (_DAT_8c2739d8[1] == 1)) {
          ar5_00 = *(undefined4 *)(_DAT_8c2739d8 + 4);
          FUN_8c1f0988(*(undefined4 *)(_DAT_8c2739d8 + 6),ar5_00,uVar2,ar7,ar5);
          iVar3 = FUN_8c1f0a72(_DAT_8c2739d8,ar5_00,uVar2,ar7);
          if (iVar3 != 0) {
            return iVar3;
          }
          return 0;
        }
      }
      uVar2 = 0xfffffff8;
    }
  }
  return uVar2;
}



/* FUN_8c1f0e98 @ 8c1f0e98 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c1f0e98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  undefined4 uVar3;
  
  uVar3 = 1;
  if (_DAT_8c2739d8 == (undefined1 *)0x0) {
    iVar2 = -0xb;
  }
  else if ((ar4 == 0) || (ar4 == 1)) {
    iVar2 = syscall_1f98ec(*(undefined4 *)(_DAT_8c2739d8 + 4),ar5,ar6,ar7);
    puVar1 = _DAT_8c2739d8;
    if (iVar2 == 0) {
      ar5_01 = _DAT_8c2739d8 + 0x34;
      func_0x8c1f0974(s_KATANA_FLASH_____8c26c00c,ar5_01,0x10,uVar3);
      uVar3 = 0x12;
      *(short *)(_DAT_8c2739d8 + 2) = (short)ar4;
      puVar1[0x45] = (char)ar4;
      puVar1[0x44] = *_DAT_8c2739d8;
      iVar2 = syscall_1f98d8(*(undefined4 *)(_DAT_8c2739d8 + 4),ar5_01,0x12,ar7);
      if (iVar2 == 0x12) {
        ar5_00 = *(undefined4 *)(_DAT_8c2739d8 + 8);
        FUN_8c1f0988(*(undefined4 *)(_DAT_8c2739d8 + 0xc),ar5_00,uVar3,ar7,0x12);
        iVar2 = FUN_8c1f0a72(_DAT_8c2739d8,ar5_00,uVar3,ar7);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = -2;
      }
    }
    else {
      iVar2 = -3;
    }
  }
  else {
    iVar2 = -6;
  }
  return iVar2;
}



/* s_KATANA_FLASH_1f0ea0 @ 8c1f0e9c callers=0 callees=2 */

/* WARNING: Unknown calling convention */

int s_KATANA_FLASH_1f0ea0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int *unaff_r14;
  undefined4 in_PR;
  
  if (*unaff_r14 == 0) {
    iVar1 = -0xb;
  }
  else if ((ar4 == 0) || (ar4 == 1)) {
    iVar1 = syscall_1f98ec(*(undefined4 *)(*unaff_r14 + 4),ar5,ar6,ar7);
    if (iVar1 == 0) {
      iVar1 = *unaff_r14;
      func_0x8c1f0974("KATANA_FLASH____",iVar1 + 0x34,0x10,ar7);
      ar6_00 = 0x12;
      *(short *)(*unaff_r14 + 2) = (short)ar4;
      *(char *)(iVar1 + 0x45) = (char)ar4;
      *(undefined1 *)(iVar1 + 0x44) = *(undefined1 *)*unaff_r14;
      iVar1 = syscall_1f98d8(*(undefined4 *)(*unaff_r14 + 4),iVar1 + 0x34,0x12,ar7);
      if (iVar1 == 0x12) {
        ar5_00 = *(undefined4 *)(*unaff_r14 + 8);
        FUN_8c1f0988(*(undefined4 *)(*unaff_r14 + 0xc),ar5_00,ar6_00,ar7,in_PR);
        iVar1 = FUN_8c1f0a72(*unaff_r14,ar5_00,ar6_00,ar7);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = -2;
      }
    }
    else {
      iVar1 = -3;
    }
  }
  else {
    iVar1 = -6;
  }
  return iVar1;
}



/* FUN_8c1f0f24 @ 8c1f0f24 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0f24(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (_DAT_8c2739d8 == 0) {
    return 0xfffffff5;
  }
  if (*(int *)(_DAT_8c2739d8 + 0x1c) != 0) {
    return 0xfffffff7;
  }
  if ((-1 < ar4) && (ar4 < *(int *)(_DAT_8c2739d8 + 0x14))) {
    *(undefined4 *)(_DAT_8c2739d8 + 0x1c) = 1;
    *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 2;
    *(int *)(_DAT_8c2739d8 + 0x28) = ar4;
    *(undefined4 *)(_DAT_8c2739d8 + 0x30) = ar5;
    return 0;
  }
  return 0xfffffffb;
}



/* FUN_8c1f0f60 @ 8c1f0f60 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0f60(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (_DAT_8c2739d8 == 0) {
    return 0xfffffff5;
  }
  if (*(int *)(_DAT_8c2739d8 + 0x1c) != 0) {
    return 0xfffffff7;
  }
  if ((-1 < ar4) && (ar4 < *(int *)(_DAT_8c2739d8 + 0x14))) {
    *(undefined4 *)(_DAT_8c2739d8 + 0x1c) = 2;
    *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 2;
    *(int *)(_DAT_8c2739d8 + 0x28) = ar4;
    *(undefined4 *)(_DAT_8c2739d8 + 0x30) = ar5;
    *(undefined4 *)(_DAT_8c2739d8 + 0x24) = 0;
    return 0;
  }
  return 0xfffffffb;
}



/* FUN_8c1f0fa0 @ 8c1f0fa0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0fa0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (_DAT_8c2739d8 == 0) {
    return 0;
  }
  iVar1 = *(int *)(_DAT_8c2739d8 + 0x1c);
  if (iVar1 == 0) goto LAB_8c1f1016;
  if (iVar1 == 1) {
    iVar1 = FUN_8c1f0cdc(_DAT_8c2739d8,ar5,ar6,ar7);
    *(undefined4 *)(_DAT_8c2739d8 + 0x1c) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 1;
    }
    else {
      *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 3;
    }
  }
  else {
    if (iVar1 != 2) {
      *(undefined4 *)(_DAT_8c2739d8 + 0x1c) = 0;
      *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 0;
      goto LAB_8c1f1016;
    }
    iVar1 = FUN_8c1f0d34(_DAT_8c2739d8,ar5,ar6,ar7);
    if (iVar1 == 1) goto LAB_8c1f1016;
    *(undefined4 *)(_DAT_8c2739d8 + 0x1c) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 1;
    }
    else {
      *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 3;
    }
  }
  *(int *)(_DAT_8c2739d8 + 0x2c) = iVar1;
LAB_8c1f1016:
  return *(undefined4 *)(_DAT_8c2739d8 + 0x20);
}



/* FUN_8c1f0fa4 @ 8c1f0fa4 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f0fa4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *unaff_r14;
  
  iVar2 = *unaff_r14;
  if (iVar2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar2 + 0x1c);
  if (iVar1 == 0) goto LAB_8c1f1016;
  if (iVar1 == 1) {
    iVar2 = FUN_8c1f0cdc(iVar2,ar5,ar6,ar7);
    *(undefined4 *)(*unaff_r14 + 0x1c) = 0;
    if (iVar2 == 0) {
      *(undefined4 *)(*unaff_r14 + 0x20) = 1;
    }
    else {
      *(undefined4 *)(*unaff_r14 + 0x20) = 3;
    }
  }
  else {
    if (iVar1 != 2) {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(*unaff_r14 + 0x20) = 0;
      goto LAB_8c1f1016;
    }
    iVar2 = FUN_8c1f0d34(iVar2,ar5,ar6,ar7);
    if (iVar2 == 1) goto LAB_8c1f1016;
    *(undefined4 *)(*unaff_r14 + 0x1c) = 0;
    if (iVar2 == 0) {
      *(undefined4 *)(*unaff_r14 + 0x20) = 1;
    }
    else {
      *(undefined4 *)(*unaff_r14 + 0x20) = 3;
    }
  }
  *(int *)(*unaff_r14 + 0x2c) = iVar2;
LAB_8c1f1016:
  return *(undefined4 *)(*unaff_r14 + 0x20);
}



/* FUN_8c1f103e @ 8c1f103e callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f103e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int *ain1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*ain1 == 0) {
    return 0xfffffff5;
  }
  iVar1 = syscall_1f98ec(*(undefined4 *)(*ain1 + 4),ar5,ar6,ar7);
  if (iVar1 == -1) {
    uVar2 = 0xfffffffd;
  }
  else {
    uVar2 = FUN_8c1f0b58(_DAT_8c2739d8,ar5,ar6,ar7);
  }
  return uVar2;
}



/* FUN_8c1f1080 @ 8c1f1080 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f1080(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (_DAT_8c2739d8 == 0) {
    return 0xfffffff5;
  }
  return *(int *)(_DAT_8c2739d8 + 0x14) - *(int *)(_DAT_8c2739d8 + 0x10);
}



/* FUN_8c1f109c @ 8c1f109c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1f10ac) */
/* WARNING: Unknown calling convention */

uint FUN_8c1f109c(int ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  while (ar4 = ar4 + -1, -1 < ar4) {
    bVar1 = *ar5;
    ar5 = ar5 + 1;
    uVar2 = (uVar2 & 0xffff) << 8 ^
            (int)*(short *)(&DAT_8c26c050 + ((int)(uVar2 & 0xffff) >> 8 ^ (uint)bVar1) * 2);
  }
  return ~(uVar2 & 0xffff) & 0xffff;
}



/* syscall_1f10d8 @ 8c1f10d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 syscall_1f10d8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1f10e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c1f10e8)(0,DAT_8c1f10e4);
  return uVar1;
}



/* syscall_1f10ec @ 8c1f10ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 syscall_1f10ec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1f10f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c1f10fc)(0,DAT_8c1f10f8);
  return uVar1;
}



/* syscall_1f1100 @ 8c1f1100 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 syscall_1f1100(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1f1108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c1f1110)(0,DAT_8c1f110c);
  return uVar1;
}



/* syscall_1f1114 @ 8c1f1114 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 syscall_1f1114(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1f111c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c1f1124)(0,DAT_8c1f1120);
  return uVar1;
}



/* syscall_1f1128 @ 8c1f1128 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 syscall_1f1128(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1f1130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c1f1138)(0,DAT_8c1f1134);
  return uVar1;
}



/* syscall_1f1150 @ 8c1f1150 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 syscall_1f1150(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1f1158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c1f1160)(0,DAT_8c1f115c);
  return uVar1;
}



/* syscall_1f1164 @ 8c1f1164 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 syscall_1f1164(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1f116c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c1f1174)(0,DAT_8c1f1170);
  return uVar1;
}



/* FUN_8c1f11dc @ 8c1f11dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f11dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_syscall_1f1114_8c1f13cc)(ar4,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c1f11ea @ 8c1f11ea callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1f1238) */
/* WARNING: Unknown calling convention */

int FUN_8c1f11ea(undefined4 ar4,int ar5,uint ar6,int ar7)

{
  int iVar1;
  undefined4 ar4_00;
  uint ar6_00;
  undefined4 uStack_1c;
  int iStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = 0;
  ar6_00 = ar6 & 0x1fffffff;
  if (ar7 == 1) {
    ar4_00 = 0x11;
  }
  else {
    if (ar7 != 0) {
      return 0xffffffee;
    }
    ar4_00 = 0x10;
    ar6_00 = ar6_00 | 0xa0000000;
  }
  uStack_1c = ar4;
  iStack_18 = ar5;
  uStack_14 = ar6_00;
  iVar1 = syscall_1f10d8(ar4_00,&uStack_1c,ar6_00,ar7);
  if ((iVar1 != 0) && (((int)ar6 >> 0x1c & 0xeU) != 10)) {
    if ((ar6 & 0x1f) == 0) {
      FUN_8c1f9980(ar6,ar5 << 0xb,ar6_00,ar7,ar5);
    }
    else {
      FUN_8c1f9bde(ar6,ar5 << 0xb,ar6_00,ar7,ar5);
    }
  }
  return iVar1;
}



/* FUN_8c1f126a @ 8c1f126a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f126a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = ar4;
  uStack_c = ar5;
  uVar1 = (*(code *)PTR_syscall_1f10d8_8c1f13d8)(0x1c,&uStack_10,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f1286 @ 8c1f1286 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1f12ae) */
/* WARNING: Unknown calling convention */

int FUN_8c1f1286(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int ar6_00;
  uint ain0;
  
  ar6_00 = ar6;
  ain0 = ar5;
  iVar1 = syscall_1f1150(ar4,&stack0xffffffe8,ar6,ar7);
  if (((iVar1 == 0) && (ar6 != 0)) && (((int)ar5 >> 0x1c & 0xfU) != 10)) {
    if ((ar5 & 0x1f) == 0) {
      FUN_8c1f9980(ar5,ar6,ar6_00,ar7,ain0);
    }
    else {
      FUN_8c1f9bde(ar5,ar6,ar6_00,ar7,ain0);
    }
  }
  return iVar1;
}



/* FUN_8c1f12de @ 8c1f12de callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f12de(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = (*(code *)PTR_syscall_1f10ec_8c1f13e8)(ar4,&iStack_18,ar6,ar7);
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 == 1) {
    *ar5 = uStack_10;
    ar5[2] = uStack_c;
    return 4;
  }
  if (iVar1 == 2) {
    *ar5 = uStack_10;
    return 1;
  }
  if (iVar1 == 3) {
    return 0x41;
  }
  if (iVar1 == 4) {
    return 0x43;
  }
  if (iVar1 != -1) {
    return iVar1;
  }
  ar5[1] = uStack_14;
  if (iStack_18 == 0) {
    *ar5 = 0xffffffe5;
    return 5;
  }
  if (iStack_18 == 1) {
    uVar2 = 0xffffffe4;
LAB_8c1f1386:
    *ar5 = uVar2;
  }
  else {
    if (iStack_18 == 2) {
      uVar2 = 0xffffffe3;
    }
    else {
      if (iStack_18 == 3) {
        uVar2 = 0xffffffe2;
        goto LAB_8c1f1386;
      }
      if (iStack_18 == 4) {
        uVar2 = 0xffffffe1;
      }
      else {
        if (iStack_18 == 5) {
          uVar2 = 0xffffffe0;
          goto LAB_8c1f1386;
        }
        if (iStack_18 == 6) {
          uVar2 = 0xffffffdf;
        }
        else {
          if (iStack_18 == 7) {
            uVar2 = 0xffffffde;
            goto LAB_8c1f1386;
          }
          if (iStack_18 == 0xb) {
            uVar2 = 0xffffffdd;
          }
          else {
            if (iStack_18 == 0x10) {
              uVar2 = 0xffffffdc;
              goto LAB_8c1f1386;
            }
            uVar2 = 0xffffffe6;
          }
        }
      }
    }
    *ar5 = uVar2;
  }
  return 5;
}



/* FUN_8c1f139e @ 8c1f139e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f139e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_10 = ar4;
  uVar1 = (*(code *)PTR_syscall_1f10d8_8c1f13d8)(0x1b,&uStack_10,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f13bc @ 8c1f13bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f13bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_syscall_1f10d8_8c1f13d8)(0x18,0,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f13f0 @ 8c1f13f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f13f0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_syscall_1f1128_8c1f1524)(ar4,ar5,ar6,ar7);
  if (iVar1 == 1) {
    return 0;
  }
  return 1;
}



/* FUN_8c1f140c @ 8c1f140c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f140c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_syscall_1f1164_8c1f1528)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f141a @ 8c1f141a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f141a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_18 = ar4;
  uStack_14 = ar5;
  uStack_10 = ar6;
  uVar1 = (*(code *)PTR_syscall_1f10d8_8c1f152c)(0x14,&uStack_18,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f143c @ 8c1f143c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f143c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_18 = ar4;
  uStack_14 = ar5;
  uStack_10 = ar6;
  uVar1 = (*(code *)PTR_syscall_1f10d8_8c1f152c)(0x15,&uStack_18,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f145e @ 8c1f145e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f145e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_syscall_1f10d8_8c1f152c)(0x16,0,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f146e @ 8c1f146e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f146e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_10 = ar4;
  uVar1 = (*(code *)PTR_syscall_1f10d8_8c1f152c)(0x17,&uStack_10,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f148c @ 8c1f148c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f148c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = ar4;
  uStack_c = ar5;
  uVar1 = (*(code *)PTR_syscall_1f10d8_8c1f152c)(0x13,&uStack_10,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f14a8 @ 8c1f14a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f14a8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_18 = ar4;
  uStack_14 = ar5;
  uStack_10 = ar6;
  uVar1 = (*(code *)PTR_syscall_1f10d8_8c1f152c)(0x22,&uStack_18,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f14ca @ 8c1f14ca callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f14ca(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_syscall_1f1100_8c1f1530)(ar4,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c1f14de @ 8c1f14de callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f14de(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = ar4;
  uStack_14 = ar5;
  uStack_10 = ar6;
  uStack_c = ar7;
  uVar1 = (*(code *)PTR_syscall_1f10d8_8c1f152c)(0x24,&uStack_18,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f14fe @ 8c1f14fe callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f14fe(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_10 = ar4;
  uVar1 = (*(code *)PTR_syscall_1f10d8_8c1f152c)(0x28,&uStack_10,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f151c @ 8c1f151c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined ** FUN_8c1f151c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &PTR_FUN_8c26c250;
}



/* FUN_8c1f153c @ 8c1f153c callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1f1550) */
/* WARNING: Unknown calling convention */

uint FUN_8c1f153c(uint ar4,byte *ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  
  while (bVar2 = 0 < ar6, ar6 = ar6 + -1, bVar2) {
    bVar1 = *ar5;
    ar5 = ar5 + 1;
    ar4 = (ar4 & 0xff) << 8 ^
          (int)*(short *)(&DAT_8c26c2a0 + ((int)(ar4 & 0xffff) >> 8 ^ (uint)bVar1) * 2);
  }
  return ar4;
}



/* FUN_8c1f1576 @ 8c1f1576 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f1576(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c1f153c(0,ar4,10,ar7);
  if ((uint)(ushort)ar5 != (~uVar1 & 0xffff)) {
    return 0xffffffff;
  }
  return 0;
}



/* FUN_8c1f15a4 @ 8c1f15a4 callers=2 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1f15ac) */
/* WARNING: Unknown calling convention */

int FUN_8c1f15a4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (((int)DAT_8c1f1664 & (int)(char)ar4) >> 4) * 10 + ((int)(char)ar4 & 0xfU);
}



/* FUN_8c1f15be @ 8c1f15be callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1f15be(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_8c1f15a4((int)*ar4,ar5,ar6,ar7);
  iVar2 = FUN_8c1f15a4((int)ar4[1],ar5,ar6,ar7);
  iVar3 = FUN_8c1f15a4((int)ar4[2],ar5,ar6,ar7);
  return (iVar1 * 0x3c + iVar2) * 0x4b + iVar3;
}



/* FUN_8c1f15f4 @ 8c1f15f4 callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f15f4(char *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 a7;
  byte *pbVar8;
  byte *pbVar9;
  byte abStack_38 [28];
  
  if (*ar4 == '\0') {
    if ((int)ar4[3] + ar4[2] * 0x100 == 100) {
      a7 = 0;
      uVar1 = 0x40;
      pbVar8 = (byte *)(ar4 + 4);
      for (iVar6 = 0; iVar6 < 0xc; iVar6 = iVar6 + 1) {
        iVar5 = 7;
        abStack_38[iVar6] = 0;
        abStack_38[iVar6 + 0xc] = 0;
        do {
          pbVar9 = abStack_38 + iVar6 + 0xc;
          if (iVar5 == 7) {
            *pbVar9 = *pbVar9 | (*pbVar8 & 0x40) << 1;
          }
          else {
            uVar7 = -(6 - iVar5);
            if ((int)uVar7 < 0) {
              bVar4 = (byte)((int)((int)(char)*pbVar8 & 0x40U) >> (~uVar7 & 0x1f) + 1);
            }
            else {
              bVar4 = (byte)(((int)(char)*pbVar8 & 0x40U) << (uVar7 & 0x1f));
            }
            *pbVar9 = *pbVar9 | bVar4;
          }
          pbVar8 = pbVar8 + 1;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        if ((abStack_38[0xc] & 0xf) != 1) {
          return 0xfffffffb;
        }
      }
      uVar7 = (uint)CONCAT11(abStack_38[0x16],abStack_38[0x17]);
      iVar6 = FUN_8c1f1576(abStack_38 + 0xc,uVar7,0x40,0);
      if (iVar6 == 0) {
        uVar2 = FUN_8c1f15a4((int)(char)abStack_38[0xd],uVar7,uVar1,a7);
        *ar5 = uVar2;
        uVar2 = FUN_8c1f15a4((int)(char)abStack_38[0xf],uVar7,uVar1,a7);
        ar5[1] = uVar2;
        uVar2 = FUN_8c1f15a4((int)(char)abStack_38[0x10],uVar7,uVar1,a7);
        ar5[2] = uVar2;
        uVar2 = FUN_8c1f15a4((int)(char)abStack_38[0x11],uVar7,uVar1,a7);
        ar5[3] = uVar2;
        uVar3 = FUN_8c1f15be(abStack_38 + 0x13,uVar7,uVar1,a7);
        ar5[4] = uVar3 | (int)(char)abStack_38[0xc] << 0x18;
        uVar1 = FUN_8c1f15a4((int)(char)abStack_38[0xe],uVar7,uVar1,a7);
        ar5[5] = uVar1;
        uVar1 = 0;
      }
      else {
        uVar1 = 0xfffffffd;
      }
    }
    else {
      uVar1 = 0xfffffffe;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* FUN_8c1f1714 @ 8c1f1714 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f1714(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (uint)ar4[1] << 8 | (uint)ar4[2] << 0x10 | (uint)ar4[3] << 0x18 | (uint)*ar4;
}



/* FUN_8c1f173a @ 8c1f173a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f173a(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = &DAT_8c26c528;
  iVar2 = 0;
  do {
    ar4 = ar4 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 != *ar4) {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return 1;
}



/* FUN_8c1f175c @ 8c1f175c callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f175c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(DAT_8c2739e0 + 0x30) = ar4;
  return 1;
}



/* FUN_8c1f1766 @ 8c1f1766 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1f1766(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 a4;
  undefined4 *a5;
  ushort uVar4;
  int iVar5;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  *(undefined4 *)(DAT_8c2739e0 + 0x20) = 1;
  iVar5 = *(int *)(DAT_8c2739e0 + 0x1c);
  if (iVar5 == 0) {
    a4 = 0;
  }
  else {
    a4 = *(undefined4 *)(iVar5 + 0x3c);
  }
  a5 = &uStack_28;
  iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x10))(a4,a5,ar6,ar7);
  if (iVar5 == 0) goto LAB_8c1f19d4;
  uVar4 = (ushort)iVar2;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    sVar1 = *(short *)(iVar5 + 0x48);
    *(undefined4 *)(DAT_8c2739e0 + 0x1c) = 0;
    *(ushort *)(iVar5 + 0x50) = uVar4;
    *(undefined4 *)(iVar5 + 0x3c) = 0;
    *(undefined2 *)(iVar5 + 0x48) = 0;
    if (iVar2 != 1) goto LAB_8c1f19d4;
    if (sVar1 == 1) {
      *(undefined4 *)(iVar5 + 0x18) = uStack_28;
      *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0x1c);
      *(undefined2 *)(iVar5 + 0x4a) = 2;
      if (*(int *)(iVar5 + 0x24) != 0) {
        (**(code **)(iVar5 + 0x24))(*(undefined4 *)(iVar5 + 0x28),a5,ar6,ar7);
      }
      goto LAB_8c1f19d4;
    }
    if (sVar1 != 3) {
      if (sVar1 != 4) {
        if (sVar1 == 7) {
          iVar3 = FUN_8c1f15f4(DAT_8c2739e0 + 0x40,&uStack_40,ar6,ar7);
          if (iVar3 == 0) {
            **(undefined4 **)(iVar5 + 8) = uStack_40;
            *(undefined4 *)(*(int *)(iVar5 + 8) + 4) = uStack_3c;
            *(undefined4 *)(*(int *)(iVar5 + 8) + 8) = uStack_38;
            *(undefined4 *)(*(int *)(iVar5 + 8) + 0xc) = uStack_34;
            *(uint *)(*(int *)(iVar5 + 8) + 0x10) = uStack_30 & 0xffffff;
            goto LAB_8c1f19d4;
          }
          *(undefined2 *)(iVar5 + 0x50) = 5;
          *(undefined2 *)(iVar5 + 0x52) = 0xffed;
          *(undefined4 *)(iVar5 + 0x44) = 0;
        }
        else {
          if (sVar1 != 8) goto LAB_8c1f19d4;
          ar7 = 0x8c470f9c;
          ar6 = *(undefined4 *)(iVar5 + 4);
          iVar3 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x48))
                            (0x8c470f94,0x8c470f98,ar6,0x8c470f9c);
          if (iVar3 != 0) {
            *(int *)(iVar5 + 0x3c) = iVar3;
            *(undefined2 *)(iVar5 + 0x50) = 4;
            *(undefined2 *)(iVar5 + 0x48) = 6;
            *(int *)(DAT_8c2739e0 + 0x1c) = iVar5;
            goto LAB_8c1f19d4;
          }
          *(undefined2 *)(iVar5 + 0x50) = 5;
          *(undefined2 *)(iVar5 + 0x52) = 0xffe4;
          *(undefined4 *)(iVar5 + 0x44) = 0;
          **(undefined4 **)(iVar5 + 4) = 0;
        }
        goto LAB_8c1f1988;
      }
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x20);
      *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0x1c);
    }
    *(undefined2 *)(iVar5 + 0x4a) = 2;
  }
  else {
    if (iVar2 == 0x41) {
      iVar3 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x24))
                        (*(undefined4 *)(iVar5 + 0x3c),&iStack_44,ar6,ar7);
      if (iVar3 == 0) {
        if (iStack_44 < 1) {
          *(undefined2 *)(iVar5 + 0x4a) = 2;
        }
        else {
          *(undefined2 *)(iVar5 + 0x4a) = 0;
        }
        *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x20);
      }
      else if (iVar3 == 1) {
        *(int *)(iVar5 + 0x18) = iStack_44;
      }
      goto LAB_8c1f19d4;
    }
    if (iVar2 == 4) {
      *(undefined4 *)(iVar5 + 0x40) = uStack_20;
      if (*(short *)(iVar5 + 0x48) == 1) {
        *(undefined4 *)(iVar5 + 0x18) = uStack_28;
      }
      goto LAB_8c1f19d4;
    }
    if (iVar2 == 0x43) goto LAB_8c1f19d4;
    if ((iVar2 != 5) && (iVar2 != 0x40)) {
      *(ushort *)(iVar5 + 0x50) = uVar4 & 0xff;
      *(undefined4 *)(iVar5 + 0x3c) = 0;
      *(undefined4 *)(DAT_8c2739e0 + 0x1c) = 0;
      goto LAB_8c1f19d4;
    }
    *(ushort *)(iVar5 + 0x50) = uVar4;
    *(short *)(iVar5 + 0x52) = (short)uStack_28;
    *(undefined4 *)(iVar5 + 0x44) = uStack_24;
    *(undefined4 *)(iVar5 + 0x3c) = 0;
    *(undefined4 *)(DAT_8c2739e0 + 0x1c) = 0;
    if (*(short *)(iVar5 + 0x52) == -0x1d) {
      if (*(int *)(iVar5 + 0x44) == 0x3a) {
        iVar3 = FUN_8c1f23e0(a4,a5,ar6,ar7);
        if ((iVar3 == 6) || (iVar3 == 0)) {
          *(undefined2 *)(iVar5 + 0x52) = 0xffe9;
        }
      }
      else if (*(int *)(iVar5 + 0x44) == 0x104) {
        *(undefined2 *)(iVar5 + 0x52) = 0xffdb;
      }
    }
LAB_8c1f1988:
    if ((*(short *)(iVar5 + 0x52) == -0x17) || (*(short *)(iVar5 + 0x52) == -0x21)) {
      *(undefined4 *)(DAT_8c2739e0 + 0x34) = 1;
    }
    if (*(int *)(DAT_8c2739e0 + 0x24) != 0) {
      (**(code **)(DAT_8c2739e0 + 0x24))
                (*(undefined4 *)(DAT_8c2739e0 + 0x28),(int)*(short *)(iVar5 + 0x52),ar6,ar7);
    }
    if (*(int *)(iVar5 + 0x34) != 0) {
      (**(code **)(iVar5 + 0x34))
                (*(undefined4 *)(iVar5 + 0x38),(int)*(short *)(iVar5 + 0x52),ar6,ar7);
    }
  }
LAB_8c1f19d4:
  *(undefined4 *)(DAT_8c2739e0 + 0x20) = 0;
  return iVar2;
}



/* FUN_8c1f19ec @ 8c1f19ec callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f19ec(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 uVar1;
  int ar7_00;
  
  ar7_00 = ar5 << 0xb;
  ar4_00 = FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,ar4,ar7_00);
  if (ar4_00 == 0) {
    return 0xfffffff3;
  }
  uVar1 = FUN_8c1f31c6(ar4_00,ar5,ar6,ar7_00);
  return uVar1;
}



/* FUN_8c1f1a52 @ 8c1f1a52 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f1a52(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if ((ar4 != (int *)0x0) && (1 < *ar4)) {
    ar4[0xf] = ar4[4];
  }
  return in_r0;
}



/* FUN_8c1f1a7c @ 8c1f1a7c callers=0 callees=5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f1a7c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *a5;
  undefined4 uVar8;
  char *a6;
  undefined4 a7;
  char *ain0;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  ain0 = &DAT_8c470f66;
  if (DAT_8c2739e4 == 0) {
    DAT_8c2739e4 = FUN_8c1fa244(0x900,&LAB_8c1f1a44,0x50,DAT_8c2739e0);
  }
  if (DAT_8c2739e8 == 0) {
    DAT_8c2739e8 = FUN_8c1fa244(0xa40,&LAB_8c1f1a2a,0x10,DAT_8c2739e0);
  }
  a7 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar6 = *(undefined4 *)(DAT_8c2739e0 + 0x14);
  piVar2 = (int *)FUN_8c1f302a(uVar6,0,0,0);
  if ((piVar2 != (int *)0x0) &&
     (iVar3 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x1c))(uVar6,uVar7,uVar8,a7), iVar3 != 0))
  {
    piVar2[0xf] = iVar3;
    *(undefined2 *)(piVar2 + 0x14) = 4;
    *(int **)(*piVar2 + 0x1c) = piVar2;
    iVar3 = FUN_8c1f2f98(piVar2,uVar7,uVar8,a7);
    iVar4 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x20))(&iStack_28,uVar7,uVar8,a7);
    if (iVar4 != 0) {
      if (iVar3 != 0) {
        if (iVar3 != -0x1d) {
          return iVar3;
        }
        if (iStack_28 == 6) {
          return 0xffffffe9;
        }
        return 0xffffffe3;
      }
      if (iStack_24 != 0x80) {
        return 0xfffffffb;
      }
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      piVar2 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(DAT_8c2739e0 + 0x2c) = 0;
        iVar3 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x4c))(0x8c470f58,uVar7,uVar8,uVar6);
        if (iVar3 != 0) {
          piVar2[0xf] = iVar3;
          *(undefined2 *)(piVar2 + 0x14) = 4;
          *(int **)(*piVar2 + 0x1c) = piVar2;
          iVar3 = FUN_8c1f2f98(piVar2,uVar7,uVar8,uVar6);
          if (iVar3 == 0) {
            *(uint *)(DAT_8c2739e0 + 0x2c) =
                 *(uint *)(DAT_8c2739e0 + 0x2c) | (DAT_8c470f64 + -0x30) * 0x10000;
            *(uint *)(DAT_8c2739e0 + 0x2c) =
                 *(uint *)(DAT_8c2739e0 + 0x2c) | (*ain0 + -0x30) * 0x100;
            *(uint *)(DAT_8c2739e0 + 0x2c) =
                 *(uint *)(DAT_8c2739e0 + 0x2c) | (int)DAT_8c470f67 - 0x30U;
          }
        }
        a5 = (char *)0x1;
        a6 = (char *)(DAT_8c2739e0 + 0x40);
        iVar3 = FUN_8c1f19ec(DAT_8c26c520,1,a6,uVar6);
        if (iVar3 == 0) {
          iVar3 = FUN_8c1f173a(DAT_8c2739e0 + 0x40,a5,a6,uVar6);
          if (iVar3 == 0) {
            return 0xfffffffb;
          }
          puVar5 = (undefined4 *)(DAT_8c2739e0 + 4);
          uVar7 = FUN_8c1f1714(DAT_8c2739e0 + 0xcc,a5,a6,uVar6);
          *puVar5 = uVar7;
          *(int *)(DAT_8c2739e0 + 4) = *(int *)(DAT_8c2739e0 + 4) + 0x96;
          puVar5 = (undefined4 *)(DAT_8c2739e0 + 8);
          uVar7 = FUN_8c1f1714(DAT_8c2739e0 + 0xc4,a5,a6,uVar6);
          *puVar5 = uVar7;
          _DAT_8c470f90 = (short *)&DAT_8c470f78;
          _DAT_8c470f78 = (short)DAT_8c0080fc;
          uVar7 = uVar6;
          if (_DAT_8c470f78 == 1) {
            a5 = &DAT_8c0080f0;
            iVar3 = 0;
            _DAT_8c470f7a = (short)DAT_8c0080fd;
            _DAT_8c470f7c = 0;
            a6 = &DAT_8c470f80;
            do {
              uVar7 = uVar6;
              if (*a5 == ' ') break;
              cVar1 = *a5;
              a5 = a5 + 1;
              uVar6 = 0xc;
              uVar7 = 0xc;
              iVar3 = iVar3 + 1;
              *a6 = cVar1;
              a6 = a6 + 1;
            } while (iVar3 < 0xc);
            *a6 = '\0';
          }
          iVar3 = FUN_8c1f1714(DAT_8c2739e0 + 0xde,a5,a6,uVar7);
          uVar6 = FUN_8c1f1714(DAT_8c2739e0 + 0xe6,a5,a6,uVar7);
          *(undefined4 *)(*(int *)(DAT_8c2739e0 + 0x10) + 8) = 0;
          uVar7 = *(undefined4 *)(DAT_8c2739e0 + 0x10);
          iVar3 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x40,iVar3 + 0x96,uVar7,uVar6);
          if (iVar3 == -0xc) {
            return 0xfffffff4;
          }
          if (iVar3 == 0) {
            if (**(int **)(DAT_8c2739e0 + 0x10) == 0) {
              return 0xfffffffb;
            }
            if (*_DAT_8c470f90 != 1) {
LAB_8c1f1d54:
              *(undefined2 *)(DAT_8c2739e0 + 0x38) = 1;
              return 0;
            }
            iVar3 = FUN_8c1f2172(_DAT_8c470f90 + 4,&uStack_2c,uVar7,uVar6);
            if (iVar3 == 0) {
              uVar7 = 1;
              *(undefined4 *)(_DAT_8c470f90 + 2) = uStack_2c;
              uVar6 = *(undefined4 *)(DAT_8c2739e0 + 0x10);
              iVar3 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x40,uStack_2c,uVar6,1);
              if (iVar3 == -0xc) {
                return 0xfffffff4;
              }
              if (iVar3 == 0) {
                if (**(int **)(DAT_8c2739e0 + 0x10) == 0) {
                  return 0xfffffffb;
                }
                FUN_8c1f1a52(*(undefined4 *)(DAT_8c2739e0 + 0x10),uStack_2c,uVar6,uVar7,ain0);
                goto LAB_8c1f1d54;
              }
            }
          }
        }
        return 0xfffffffc;
      }
    }
  }
  return 0xfffffffe;
}



/* thunk_FUN_8c1f38c0 @ 8c1f1d86 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c1f38c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c1f1e34)();
  return uVar1;
}



/* FUN_8c1f1d8c @ 8c1f1d8c callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f1d8c(int ar4,int *ar5,undefined4 ar6,undefined4 ar7,int s0)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  char *ar5_00;
  undefined4 uVar9;
  undefined4 uVar10;
  byte in_IMASK;
  byte bVar11;
  byte extraout_S;
  byte extraout_S_00;
  byte extraout_T;
  byte extraout_T_00;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  uint uStack_20;
  
  if ((DAT_8c2739e0 != (int *)0x0) && ((short)DAT_8c2739e0[0xe] == 1)) {
    return 0;
  }
  if (((uint)ar5 & 0x1f) != 0) {
    return 0xfffffff2;
  }
  piVar3 = DAT_8c2739e0;
  uVar8 = ar6;
  uVar9 = ar7;
  piStack_28 = ar5;
  iStack_24 = ar4;
  puVar5 = (undefined4 *)FUN_8c1f151c(DAT_8c2739e0,ar5,ar6,ar7);
  (*(code *)*puVar5)(piVar3,ar5,uVar8,uVar9);
  uStack_20 = (((uint)extraout_T | (uint)extraout_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  bVar11 = (byte)((((uint)extraout_T | (uint)extraout_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  DAT_8c2739e0 = piStack_28;
  *(undefined2 *)(piStack_28 + 0xe) = 0;
  DAT_8c2739e0[8] = 0;
  *DAT_8c2739e0 = iStack_24;
  piVar3 = DAT_8c2739e0 + 4;
  iVar6 = FUN_8c1f3078(ar7,ar6,uVar8,uVar9);
  *piVar3 = iVar6;
  DAT_8c2739e0[3] = (int)puVar5;
  DAT_8c2739e0[7] = 0;
  *(undefined2 *)((int)DAT_8c2739e0 + 0x3a) = 0;
  DAT_8c2739e0[9] = 0;
  DAT_8c2739e0[0xd] = 0;
  DAT_8c2739e0[0xf] = s0;
  piVar3 = DAT_8c2739e0 + 0x420;
  for (iVar6 = 0; iVar6 < *DAT_8c2739e0 + 1; iVar6 = iVar6 + 1) {
    *(undefined2 *)(piVar3 + 0x13) = 0;
    *piVar3 = (int)DAT_8c2739e0;
    piVar3 = piVar3 + 0x15;
  }
  DAT_8c2739e0[5] = (int)(DAT_8c2739e0 + 0x420);
  DAT_8c2739e0[6] = (int)(DAT_8c2739e0 + 0x435);
  FUN_8c1f21bc(DAT_8c2739e0[5],0,0,0);
  uVar2 = (((uint)extraout_T_00 | (uint)extraout_S_00 << 1 | (uint)bVar11 << 4) & 0xf0) >> 4;
  if (DAT_8c2739e4 == 0) {
    DAT_8c2739e4 = FUN_8c1fa244(0x900,&LAB_8c1f1a44,0x50,DAT_8c2739e0);
  }
  if (DAT_8c2739e8 == 0) {
    DAT_8c2739e8 = FUN_8c1fa244(0xa40,&LAB_8c1f1a2a,0x10,DAT_8c2739e0);
  }
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = 0;
  piVar3 = (int *)FUN_8c1f302a(DAT_8c2739e0[5],0,0,0);
  if ((piVar3 != (int *)0x0) && (iVar6 = (**(code **)(DAT_8c2739e0[3] + 0x1c))(uVar2), iVar6 != 0))
  {
    piVar3[0xf] = iVar6;
    *(undefined2 *)(piVar3 + 0x14) = 4;
    *(int **)(*piVar3 + 0x1c) = piVar3;
    iVar6 = FUN_8c1f2f98(piVar3,uVar8,uVar9,uVar10);
    iVar4 = (**(code **)(DAT_8c2739e0[3] + 0x20))(&piStack_28);
    if (iVar4 != 0) {
      if (iVar6 != 0) {
        if (iVar6 != -0x1d) {
          return iVar6;
        }
        if (piStack_28 == (int *)0x6) {
          return 0xffffffe9;
        }
        return 0xffffffe3;
      }
      if (iStack_24 != 0x80) {
        return 0xfffffffb;
      }
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      piVar3 = (int *)FUN_8c1f302a(DAT_8c2739e0[5],0,0,0);
      if (piVar3 != (int *)0x0) {
        DAT_8c2739e0[0xb] = 0;
        iVar6 = (**(code **)(DAT_8c2739e0[3] + 0x4c))(0x8c470f58);
        if (iVar6 != 0) {
          piVar3[0xf] = iVar6;
          *(undefined2 *)(piVar3 + 0x14) = 4;
          *(int **)(*piVar3 + 0x1c) = piVar3;
          iVar6 = FUN_8c1f2f98(piVar3,uVar9,uVar10,uVar8);
          if (iVar6 == 0) {
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (DAT_8c470f64 + -0x30) * 0x10000;
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (DAT_8c470f66 + -0x30) * 0x100;
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (int)DAT_8c470f67 - 0x30U;
          }
        }
        ar5_00 = (char *)0x1;
        piVar3 = DAT_8c2739e0 + 0x10;
        iVar6 = FUN_8c1f19ec(DAT_8c26c520,1,piVar3,uVar8);
        if (iVar6 == 0) {
          iVar6 = FUN_8c1f173a(DAT_8c2739e0 + 0x10,ar5_00,piVar3,uVar8);
          if (iVar6 == 0) {
            return 0xfffffffb;
          }
          piVar7 = DAT_8c2739e0 + 1;
          iVar6 = FUN_8c1f1714(DAT_8c2739e0 + 0x33,ar5_00,piVar3,uVar8);
          *piVar7 = iVar6;
          DAT_8c2739e0[1] = DAT_8c2739e0[1] + 0x96;
          piVar7 = DAT_8c2739e0 + 2;
          iVar6 = FUN_8c1f1714(DAT_8c2739e0 + 0x31,ar5_00,piVar3,uVar8);
          *piVar7 = iVar6;
          _DAT_8c470f90 = (short *)&DAT_8c470f78;
          _DAT_8c470f78 = (short)DAT_8c0080fc;
          uVar9 = uVar8;
          if (_DAT_8c470f78 == 1) {
            ar5_00 = &DAT_8c0080f0;
            iVar6 = 0;
            _DAT_8c470f7a = (short)DAT_8c0080fd;
            _DAT_8c470f7c = 0;
            piVar3 = (int *)&DAT_8c470f80;
            do {
              uVar9 = uVar8;
              if (*ar5_00 == ' ') break;
              cVar1 = *ar5_00;
              ar5_00 = ar5_00 + 1;
              uVar8 = 0xc;
              uVar9 = 0xc;
              iVar6 = iVar6 + 1;
              *(char *)piVar3 = cVar1;
              piVar3 = (int *)((int)piVar3 + 1);
            } while (iVar6 < 0xc);
            *(char *)piVar3 = '\0';
          }
          iVar6 = FUN_8c1f1714((int)DAT_8c2739e0 + 0xde,ar5_00,piVar3,uVar9);
          uVar8 = FUN_8c1f1714((int)DAT_8c2739e0 + 0xe6,ar5_00,piVar3,uVar9);
          *(undefined4 *)(DAT_8c2739e0[4] + 8) = 0;
          iVar4 = DAT_8c2739e0[4];
          iVar6 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x10,iVar6 + 0x96,iVar4,uVar8);
          if (iVar6 == -0xc) {
            return 0xfffffff4;
          }
          if (iVar6 == 0) {
            if (*(int *)DAT_8c2739e0[4] == 0) {
              return 0xfffffffb;
            }
            if (*_DAT_8c470f90 != 1) {
LAB_8c1f1d54:
              *(undefined2 *)(DAT_8c2739e0 + 0xe) = 1;
              return 0;
            }
            iVar6 = FUN_8c1f2172(_DAT_8c470f90 + 4,&uStack_2c,iVar4,uVar8);
            if (iVar6 == 0) {
              uVar8 = 1;
              *(undefined4 *)(_DAT_8c470f90 + 2) = uStack_2c;
              iVar4 = DAT_8c2739e0[4];
              iVar6 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x10,uStack_2c,iVar4,1);
              if (iVar6 == -0xc) {
                return 0xfffffff4;
              }
              if (iVar6 == 0) {
                if (*(int *)DAT_8c2739e0[4] == 0) {
                  return 0xfffffffb;
                }
                FUN_8c1f1a52(DAT_8c2739e0[4],uStack_2c,iVar4,uVar8,0);
                goto LAB_8c1f1d54;
              }
            }
          }
        }
        return 0xfffffffc;
      }
    }
  }
  return 0xfffffffe;
}



/* FUN_8c1f1eaa @ 8c1f1eaa callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f1eaa(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *ar5_00;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  byte in_IMASK;
  byte bVar10;
  byte in_S;
  byte extraout_S;
  byte extraout_S_00;
  byte extraout_T;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (DAT_8c2739e0 == (int *)0x0) {
    return 0xffffffff;
  }
  piVar9 = DAT_8c2739e0 + 0x420;
  piVar3 = DAT_8c2739e0;
  for (iVar8 = 0; iVar8 < *DAT_8c2739e0 + 1; iVar8 = iVar8 + 1) {
    piVar3 = piVar9;
    FUN_8c1f309c(piVar9,ar5,ar6,ar7);
    piVar9 = piVar9 + 0x15;
    in_S = extraout_S;
  }
  bVar10 = (byte)((((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  (**(code **)DAT_8c2739e0[3])(piVar3,ar5,ar6,ar7);
  *(undefined2 *)(DAT_8c2739e0 + 0xe) = 0;
  DAT_8c2739e0[8] = 0;
  DAT_8c2739e0[7] = 0;
  *(undefined2 *)((int)DAT_8c2739e0 + 0x3a) = 0;
  DAT_8c2739e0[0xd] = 0;
  piVar3 = DAT_8c2739e0 + 0x420;
  for (iVar8 = 0; iVar8 < *DAT_8c2739e0 + 1; iVar8 = iVar8 + 1) {
    *(undefined2 *)(piVar3 + 0x13) = 0;
    *piVar3 = (int)DAT_8c2739e0;
    piVar3 = piVar3 + 0x15;
  }
  DAT_8c2739e0[5] = (int)(DAT_8c2739e0 + 0x420);
  DAT_8c2739e0[6] = (int)(DAT_8c2739e0 + 0x435);
  FUN_8c1f21bc(DAT_8c2739e0[5],0,0,0);
  uVar2 = (((uint)extraout_T | (uint)extraout_S_00 << 1 | (uint)bVar10 << 4) & 0xf0) >> 4;
  if (DAT_8c2739e4 == 0) {
    DAT_8c2739e4 = FUN_8c1fa244(0x900,&LAB_8c1f1a44,0x50,DAT_8c2739e0);
  }
  if (DAT_8c2739e8 == 0) {
    DAT_8c2739e8 = FUN_8c1fa244(0xa40,&LAB_8c1f1a2a,0x10,DAT_8c2739e0);
  }
  uVar7 = 0;
  uVar5 = 0;
  uVar6 = 0;
  piVar3 = (int *)FUN_8c1f302a(DAT_8c2739e0[5],0,0,0);
  if ((piVar3 != (int *)0x0) && (iVar8 = (**(code **)(DAT_8c2739e0[3] + 0x1c))(uVar2), iVar8 != 0))
  {
    piVar3[0xf] = iVar8;
    *(undefined2 *)(piVar3 + 0x14) = 4;
    *(int **)(*piVar3 + 0x1c) = piVar3;
    iVar8 = FUN_8c1f2f98(piVar3,uVar5,uVar6,uVar7);
    iVar4 = (**(code **)(DAT_8c2739e0[3] + 0x20))(&iStack_28);
    if (iVar4 != 0) {
      if (iVar8 != 0) {
        if (iVar8 != -0x1d) {
          return iVar8;
        }
        if (iStack_28 == 6) {
          return 0xffffffe9;
        }
        return 0xffffffe3;
      }
      if (iStack_24 != 0x80) {
        return 0xfffffffb;
      }
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      piVar3 = (int *)FUN_8c1f302a(DAT_8c2739e0[5],0,0,0);
      if (piVar3 != (int *)0x0) {
        DAT_8c2739e0[0xb] = 0;
        iVar8 = (**(code **)(DAT_8c2739e0[3] + 0x4c))(0x8c470f58);
        if (iVar8 != 0) {
          piVar3[0xf] = iVar8;
          *(undefined2 *)(piVar3 + 0x14) = 4;
          *(int **)(*piVar3 + 0x1c) = piVar3;
          iVar8 = FUN_8c1f2f98(piVar3,uVar6,uVar7,uVar5);
          if (iVar8 == 0) {
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (DAT_8c470f64 + -0x30) * 0x10000;
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (DAT_8c470f66 + -0x30) * 0x100;
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (int)DAT_8c470f67 - 0x30U;
          }
        }
        ar5_00 = (char *)0x1;
        piVar3 = DAT_8c2739e0 + 0x10;
        iVar8 = FUN_8c1f19ec(DAT_8c26c520,1,piVar3,uVar5);
        if (iVar8 == 0) {
          iVar8 = FUN_8c1f173a(DAT_8c2739e0 + 0x10,ar5_00,piVar3,uVar5);
          if (iVar8 == 0) {
            return 0xfffffffb;
          }
          piVar9 = DAT_8c2739e0 + 1;
          iVar8 = FUN_8c1f1714(DAT_8c2739e0 + 0x33,ar5_00,piVar3,uVar5);
          *piVar9 = iVar8;
          DAT_8c2739e0[1] = DAT_8c2739e0[1] + 0x96;
          piVar9 = DAT_8c2739e0 + 2;
          iVar8 = FUN_8c1f1714(DAT_8c2739e0 + 0x31,ar5_00,piVar3,uVar5);
          *piVar9 = iVar8;
          _DAT_8c470f90 = (short *)&DAT_8c470f78;
          _DAT_8c470f78 = (short)DAT_8c0080fc;
          uVar6 = uVar5;
          if (_DAT_8c470f78 == 1) {
            ar5_00 = &DAT_8c0080f0;
            iVar8 = 0;
            _DAT_8c470f7a = (short)DAT_8c0080fd;
            _DAT_8c470f7c = 0;
            piVar3 = (int *)&DAT_8c470f80;
            do {
              uVar6 = uVar5;
              if (*ar5_00 == ' ') break;
              cVar1 = *ar5_00;
              ar5_00 = ar5_00 + 1;
              uVar5 = 0xc;
              uVar6 = 0xc;
              iVar8 = iVar8 + 1;
              *(char *)piVar3 = cVar1;
              piVar3 = (int *)((int)piVar3 + 1);
            } while (iVar8 < 0xc);
            *(char *)piVar3 = '\0';
          }
          iVar8 = FUN_8c1f1714((int)DAT_8c2739e0 + 0xde,ar5_00,piVar3,uVar6);
          uVar5 = FUN_8c1f1714((int)DAT_8c2739e0 + 0xe6,ar5_00,piVar3,uVar6);
          *(undefined4 *)(DAT_8c2739e0[4] + 8) = 0;
          iVar4 = DAT_8c2739e0[4];
          iVar8 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x10,iVar8 + 0x96,iVar4,uVar5);
          if (iVar8 == -0xc) {
            return 0xfffffff4;
          }
          if (iVar8 == 0) {
            if (*(int *)DAT_8c2739e0[4] == 0) {
              return 0xfffffffb;
            }
            if (*_DAT_8c470f90 != 1) {
LAB_8c1f1d54:
              *(undefined2 *)(DAT_8c2739e0 + 0xe) = 1;
              return 0;
            }
            iVar8 = FUN_8c1f2172(_DAT_8c470f90 + 4,&uStack_2c,iVar4,uVar5);
            if (iVar8 == 0) {
              uVar5 = 1;
              *(undefined4 *)(_DAT_8c470f90 + 2) = uStack_2c;
              iVar4 = DAT_8c2739e0[4];
              iVar8 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x10,uStack_2c,iVar4,1);
              if (iVar8 == -0xc) {
                return 0xfffffff4;
              }
              if (iVar8 == 0) {
                if (*(int *)DAT_8c2739e0[4] == 0) {
                  return 0xfffffffb;
                }
                FUN_8c1f1a52(DAT_8c2739e0[4],uStack_2c,iVar4,uVar5,0);
                goto LAB_8c1f1d54;
              }
            }
          }
        }
        return 0xfffffffc;
      }
    }
  }
  return 0xfffffffe;
}



/* FUN_8c1f1f98 @ 8c1f1f98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f1f98(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int *ar4_00;
  int iVar1;
  
  if (DAT_8c2739e4 != 0) {
    ain0 = FUN_8c1fa54c(DAT_8c2739e4,ar5,ar6,ar7);
  }
  if (DAT_8c2739e8 != 0) {
    ain0 = FUN_8c1fa54c(DAT_8c2739e8,ar5,ar6,ar7);
  }
  DAT_8c2739e4 = 0;
  DAT_8c2739e8 = 0;
  ar4_00 = DAT_8c2739e0 + 0x420;
  for (iVar1 = 0; iVar1 < *DAT_8c2739e0 + 1; iVar1 = iVar1 + 1) {
    ain0 = FUN_8c1f309c(ar4_00,ar5,ar6,ar7,ain0);
    ar4_00 = ar4_00 + 0x15;
  }
  DAT_8c2739e0 = (int *)0x0;
  return ain0;
}



/* FUN_8c1f1fa0 @ 8c1f1fa0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c1f1fa0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0,int *ain1)

{
  int *a4;
  int iVar1;
  
  if (*ain1 != 0) {
    ain0 = FUN_8c1fa54c(*ain1,ar5,ar6,ar7);
  }
  if (DAT_8c2739e8 != 0) {
    ain0 = FUN_8c1fa54c(DAT_8c2739e8,ar5,ar6,ar7);
  }
  DAT_8c2739e4 = 0;
  DAT_8c2739e8 = 0;
  a4 = DAT_8c2739e0 + 0x420;
  for (iVar1 = 0; iVar1 < *DAT_8c2739e0 + 1; iVar1 = iVar1 + 1) {
    ain0 = FUN_8c1f309c(a4,ar5,ar6,ar7);
    a4 = a4 + 0x15;
  }
  DAT_8c2739e0 = (int *)0x0;
  return ain0;
}



/* FUN_8c1f2008 @ 8c1f2008 callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c1f2008(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  undefined4 ar6_00;
  int ar7_00;
  char *unaff_r12;
  undefined4 unaff_r13;
  char in_T;
  undefined4 in_PR;
  
  if (in_T != '\0') {
    unaff_r13 = *(undefined4 *)(DAT_8c2739e0 + 0x10);
  }
  if ((*unaff_r12 == '/') || (*unaff_r12 == '\\')) {
    if (*_DAT_8c470f90 == 1) {
      iVar1 = FUN_8c1f2e3e(DAT_8c2739e0 + 0x80,*(undefined4 *)(DAT_8c2739e0 + 4),
                           *(undefined4 *)(DAT_8c2739e0 + 8),unaff_r12,_DAT_8c470f90 + 4);
    }
    else {
      iVar1 = FUN_8c1f2d3e(DAT_8c2739e0 + 0x80,*(undefined4 *)(DAT_8c2739e0 + 4),
                           *(undefined4 *)(DAT_8c2739e0 + 8),unaff_r12);
    }
    if (iVar1 == 0) {
      return 0xfffffff8;
    }
    ar7_00 = 0x800;
  }
  else {
    iVar1 = FUN_8c1f2cce(unaff_r12,*(undefined4 *)(DAT_8c2739e0 + 0x10),0,ar7);
    if (iVar1 == 0) {
      return 0xfffffff8;
    }
    piVar3 = (int *)(*(int *)(DAT_8c2739e0 + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
    if ((*(byte *)(piVar3 + 2) & 2) == 0) {
      return 0xfffffff5;
    }
    iVar1 = *piVar3;
    ar7_00 = piVar3[1];
  }
  iVar1 = iVar1 + 0x96;
  ar5_00 = iVar1;
  ar6_00 = unaff_r13;
  iVar2 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x40,iVar1,unaff_r13,ar7_00);
  if (((*_DAT_8c470f90 == 1) && (*(int *)(_DAT_8c470f90 + 2) == iVar1)) &&
     ((iVar2 == 0 || (iVar2 == -0xc)))) {
    FUN_8c1f1a52(unaff_r13,ar5_00,ar6_00,ar7_00,in_PR);
  }
  return iVar2;
}



/* FUN_8c1f210e @ 8c1f210e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f210e(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *in_r3;
  int *ar4_00;
  int *ar5_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_PR;
  
  iVar3 = *ar4;
  piVar5 = *(int **)(*in_r3 + 0x10);
  iVar4 = piVar5[1];
  iVar2 = iVar4;
  if (iVar3 < iVar4) {
    iVar2 = iVar3;
  }
  iVar6 = 0;
  piVar5[2] = ar4[2];
  ar4_00 = ar4 + 4;
  ar5_00 = piVar5 + 4;
  if (0 < iVar2) {
    do {
      FUN_8c1f2a5c(ar4_00,ar5_00,0x2c,ar7,in_PR);
      iVar6 = iVar6 + 1;
      ar4_00 = ar4_00 + 0xb;
      ar5_00 = ar5_00 + 0xb;
    } while (iVar6 < iVar2);
  }
  *piVar5 = iVar6;
  if (iVar4 < iVar3) {
    uVar1 = 0xfffffff4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c1f2172 @ 8c1f2172 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2172(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_8c1f2cce(ar4,*(undefined4 *)(DAT_8c2739e0 + 0x10),0,ar7);
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  piVar2 = (int *)(*(int *)(DAT_8c2739e0 + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
  *ar5 = *piVar2 + 0x96;
  ar5[1] = piVar2[1];
  *(char *)(ar5 + 2) = (char)piVar2[2];
  return 0;
}



/* FUN_8c1f217a @ 8c1f217a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f217a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *in_r3;
  int *piVar2;
  int *unaff_r14;
  
  iVar1 = FUN_8c1f2cce(ar4,*(undefined4 *)(*in_r3 + 0x10),ar6,ar7);
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  piVar2 = (int *)(*(int *)(DAT_8c2739e0 + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
  *unaff_r14 = *piVar2 + 0x96;
  unaff_r14[1] = piVar2[1];
  *(char *)(unaff_r14 + 2) = (char)piVar2[2];
  return 0;
}



/* FUN_8c1f21bc @ 8c1f21bc callers=4 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1f21ec) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f21bc(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  if (*(short *)(ar4 + 0x4c) == 0) {
    *(undefined4 *)(ar4 + 4) = ar5;
    *(undefined4 *)(ar4 + 8) = ar6;
    *(int *)(ar4 + 0xc) = ar7;
    *(int *)(ar4 + 0x10) = ar7 + 0x7ff >> 0xb;
    *(undefined4 *)(ar4 + 0x14) = 0;
    *(undefined4 *)(ar4 + 0x18) = 0;
    *(undefined4 *)(ar4 + 0x1c) = 0;
    *(undefined4 *)(ar4 + 0x20) = 0;
    *(undefined4 *)(ar4 + 0x24) = 0;
    *(undefined4 *)(ar4 + 0x2c) = 0;
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined4 *)(ar4 + 0x3c) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 0x44) = 0;
    *(undefined2 *)(ar4 + 0x48) = 0;
    *(undefined2 *)(ar4 + 0x4a) = 0;
    *(undefined2 *)(ar4 + 0x4c) = 1;
    *(undefined2 *)(ar4 + 0x4e) = DAT_8c26c524;
    *(undefined2 *)(ar4 + 0x50) = 0;
    *(undefined2 *)(ar4 + 0x52) = 0;
    return ar4;
  }
  return 0;
}



/* FUN_8c1f2236 @ 8c1f2236 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2236(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  int iVar1;
  undefined4 a6;
  int unaff_r13;
  int *piVar2;
  int a4;
  char in_T;
  int iVar3;
  
  a6 = 0;
  if (in_T != '\0') {
    unaff_r13 = DAT_8c2739e0[4];
  }
  a5 = FUN_8c1f2cce(ar4,unaff_r13,0,ar7);
  if (a5 == 0) {
    FUN_8c1f175c(0xfffffff8,0,a6,ar7);
  }
  else {
    iVar3 = (a5 + -1) * 0x2c;
    a4 = DAT_8c2739e0[6];
    for (iVar1 = 0; iVar1 < *DAT_8c2739e0; iVar1 = iVar1 + 1) {
      if (*(short *)(a4 + 0x4c) == 0) {
        piVar2 = (int *)(unaff_r13 + 0x10 + iVar3);
        iVar3 = piVar2[1];
        iVar1 = *piVar2 + 0x96;
        FUN_8c1f21bc(a4,a5,iVar1,iVar3);
        FUN_8c1f175c(0,a5,iVar1,iVar3);
        return a4;
      }
      a4 = a4 + 0x54;
    }
    FUN_8c1f175c(0xfffffff7,a5,DAT_8c2739e0,iVar3);
  }
  return 0;
}



/* FUN_8c1f22b2 @ 8c1f22b2 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f22b2(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r3;
  int iVar1;
  undefined4 a5;
  int a7;
  int unaff_r13;
  int a4;
  
  if (unaff_r13 < in_r3) {
    FUN_8c1f175c(0xffffffe0,ar5,ar6,ar7);
  }
  else {
    a4 = DAT_8c2739e0[6];
    a7 = ar5 << 0xb;
    for (iVar1 = 0; iVar1 < *DAT_8c2739e0; iVar1 = iVar1 + 1) {
      if (*(short *)(a4 + 0x4c) == 0) {
        a5 = 0;
        FUN_8c1f21bc(a4,0,unaff_r13,a7);
        FUN_8c1f175c(0,a5,unaff_r13,a7);
        return a4;
      }
      a4 = a4 + 0x54;
    }
    FUN_8c1f175c(0xfffffff7,ar5,DAT_8c2739e0,ar7);
  }
  return 0;
}



/* FUN_8c1f231e @ 8c1f231e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f231e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  undefined4 uVar1;
  int *in_r2;
  
  uVar1 = (**(code **)(ain0 + *(int *)(*in_r2 + 0xc)))(ar4,ar5,ar6,ar7);
  if (*(int *)(DAT_8c2739e0 + 0x1c) != 0) {
    uVar1 = FUN_8c1f1766(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return uVar1;
}



/* FUN_8c1f2356 @ 8c1f2356 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2356(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar4_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 a7;
  
  a7 = 0;
  uVar2 = 0;
  ar4_00 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
  if (ar4_00 != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x38))(ar4,ar5,uVar2,a7);
    if (iVar1 == 0) {
      uVar2 = 0xfffffff3;
    }
    else {
      ar4_00[0xf] = iVar1;
      *(undefined2 *)(ar4_00 + 0x14) = 4;
      *(int **)(*ar4_00 + 0x1c) = ar4_00;
      uVar2 = FUN_8c1f2f98(ar4_00,ar5,uVar2,a7);
    }
    return uVar2;
  }
  return 0xfffffff3;
}



/* FUN_8c1f23e0 @ 8c1f23e0 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f23e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 auStack_c [3];
  
  iVar1 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x20))(auStack_c,ar5,ar6,ar7);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return auStack_c[0];
}



/* FUN_8c1f2418 @ 8c1f2418 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2418(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 a4;
  undefined4 a5;
  int a6;
  undefined4 a7;
  
  a7 = 0;
  piVar1 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
  if (piVar1 != (int *)0x0) {
    a5 = 0xe;
    a6 = DAT_8c2739e0 + 0x40;
    a4 = 1;
    iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x3c))(1,0xe,a6,a7);
    if (iVar2 != 0) {
      piVar1[0xf] = iVar2;
      *(undefined2 *)(piVar1 + 0x14) = 4;
      *(undefined2 *)(piVar1 + 0x12) = 10;
      *(int **)(*piVar1 + 0x1c) = piVar1;
      (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(a4,a5,a6,a7);
      return 0;
    }
  }
  return 0xfffffff3;
}



/* FUN_8c1f24e8 @ 8c1f24e8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f24e8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int a4;
  int a5;
  undefined4 a6;
  undefined4 a7;
  
  if (*_DAT_8c470f90 == 1) {
    ar5 = ar5 + _DAT_8c470f90[1] + -4;
    ar4 = ar4 + _DAT_8c470f90[1] + -4;
  }
  if (2 < ar4) {
    a7 = 0;
    piVar1 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
    if (piVar1 != (int *)0x0) {
      a4 = ar4;
      a5 = ar5;
      a6 = ar6;
      iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x28))(ar4,ar5,ar6,a7);
      if (iVar2 != 0) {
        piVar1[0xf] = iVar2;
        *(undefined2 *)(piVar1 + 0x14) = 4;
        if (*(int *)(DAT_8c2739e0 + 0x2c) < 0x10001) {
          *(undefined2 *)(piVar1 + 0x12) = 6;
        }
        else {
          a4 = 1;
          *(undefined2 *)(DAT_8c2739e0 + 0x3a) = 1;
          _DAT_8c470fa0 = 1;
          _DAT_8c470fa4 = ar4;
          _DAT_8c470fa8 = ar5;
          _DAT_8c470fac = ar6;
          piVar1[1] = (int)&DAT_8c470fb0;
          *(undefined2 *)(piVar1 + 0x12) = 8;
        }
        *(int **)(*piVar1 + 0x1c) = piVar1;
        (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(a4,a5,a6,a7);
      }
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  return 0xfffffff3;
}



/* FUN_8c1f25f4 @ 8c1f25f4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f25f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int a4;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  if (0xb05d < ar4) {
    a7 = 0;
    piVar1 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
    if (piVar1 != (int *)0x0) {
      a4 = ar4;
      a5 = ar5;
      a6 = ar6;
      iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x2c))(ar4,ar5,ar6,a7);
      if (iVar2 != 0) {
        piVar1[0xf] = iVar2;
        *(undefined2 *)(piVar1 + 0x14) = 4;
        if (*(int *)(DAT_8c2739e0 + 0x2c) < 0x10001) {
          *(undefined2 *)(piVar1 + 0x12) = 6;
        }
        else {
          *(undefined2 *)(DAT_8c2739e0 + 0x3a) = 1;
          _DAT_8c470fa0 = 2;
          _DAT_8c470fa4 = ar4;
          _DAT_8c470fa8 = ar5;
          _DAT_8c470fac = ar6;
          piVar1[1] = (int)&DAT_8c470fb0;
          *(undefined2 *)(piVar1 + 0x12) = 8;
        }
        *(int **)(*piVar1 + 0x1c) = piVar1;
        (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(a4,a5,a6,a7);
      }
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  return 0xfffffff3;
}



/* FUN_8c1f26ec @ 8c1f26ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f26ec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 ar4_00;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  a7 = 0;
  a6 = 0;
  a5 = 0;
  ar4_00 = *(undefined4 *)(DAT_8c2739e0 + 0x14);
  piVar1 = (int *)FUN_8c1f302a(ar4_00,0,0,0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x30))(ar4_00,a5,a6,a7);
    if (iVar2 != 0) {
      piVar1[0xf] = iVar2;
      *(undefined2 *)(piVar1 + 0x14) = 4;
      if ((*(short *)(DAT_8c2739e0 + 0x3a) == 0) || (*(int *)(DAT_8c2739e0 + 0x2c) < 0x10001)) {
        *(undefined2 *)(piVar1 + 0x12) = 6;
      }
      else {
        piVar1[1] = (int)&DAT_8c470fb4;
        *(undefined2 *)(piVar1 + 0x12) = 8;
      }
      *(int **)(*piVar1 + 0x1c) = piVar1;
      (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(ar4_00,a5,a6,a7);
    }
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 0xfffffff3;
}



/* FUN_8c1f2796 @ 8c1f2796 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2796(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 ar4_00;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  a7 = 0;
  a6 = 0;
  a5 = 0;
  ar4_00 = *(undefined4 *)(DAT_8c2739e0 + 0x14);
  piVar1 = (int *)FUN_8c1f302a(ar4_00,0,0,0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x30))(ar4_00,a5,a6,a7);
    if (iVar2 != 0) {
      piVar1[0xf] = iVar2;
      *(undefined2 *)(piVar1 + 0x14) = 4;
      if ((*(short *)(DAT_8c2739e0 + 0x3a) == 0) || (*(int *)(DAT_8c2739e0 + 0x2c) < 0x10001)) {
        *(undefined2 *)(piVar1 + 0x12) = 6;
      }
      else {
        piVar1[1] = (int)&DAT_8c470fb4;
        *(undefined2 *)(piVar1 + 0x12) = 8;
      }
      *(int **)(*piVar1 + 0x1c) = piVar1;
      (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(ar4_00,a5,a6,a7);
    }
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 0xfffffff3;
}



/* FUN_8c1f2852 @ 8c1f2852 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2852(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  code *pcVar3;
  
  a7 = 0;
  a6 = 0;
  a5 = 0;
  piVar1 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
  if (piVar1 == (int *)0x0) {
    return 0xfffffff3;
  }
  if ((*(short *)(DAT_8c2739e0 + 0x3a) != 0) && (_DAT_8c470fb0 != _DAT_8c470fb4)) {
    *(undefined2 *)(DAT_8c2739e0 + 0x3a) = 0;
  }
  if ((*(short *)(DAT_8c2739e0 + 0x3a) == 0) || (*(int *)(DAT_8c2739e0 + 0x2c) < 0x10001)) {
    iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x34))(ar4,a5,a6,a7);
    if (iVar2 == 0) goto LAB_8c1f2948;
    piVar1[0xf] = iVar2;
    *(undefined2 *)(piVar1 + 0x14) = 4;
    *(undefined2 *)(piVar1 + 0x12) = 6;
  }
  else {
    if (_DAT_8c470fa0 == 1) {
      pcVar3 = *(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x28);
    }
    else {
      pcVar3 = *(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x2c);
    }
    ar4 = _DAT_8c470fa4;
    a5 = _DAT_8c470fa8;
    a6 = _DAT_8c470fac;
    iVar2 = (*pcVar3)(_DAT_8c470fa4,_DAT_8c470fa8,_DAT_8c470fac,a7);
    if (iVar2 == 0) goto LAB_8c1f2948;
    piVar1[0xf] = iVar2;
    *(undefined2 *)(piVar1 + 0x14) = 4;
    piVar1[1] = (int)&DAT_8c470fb0;
    *(undefined2 *)(piVar1 + 0x12) = 8;
  }
  *(int **)(*piVar1 + 0x1c) = piVar1;
  (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(ar4,a5,a6,a7);
LAB_8c1f2948:
  if (iVar2 == 0) {
    return 0xfffffff3;
  }
  return 0;
}



/* FUN_8c1f2972 @ 8c1f2972 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2972(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 a4;
  undefined4 a5;
  int a6;
  undefined4 a7;
  
  a7 = 0;
  piVar1 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
  if (piVar1 != (int *)0x0) {
    a5 = 100;
    a6 = DAT_8c2739e0 + 0x40;
    a4 = 0;
    iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x3c))(0,100,a6,a7);
    if (iVar2 != 0) {
      piVar1[0xf] = iVar2;
      *(undefined2 *)(piVar1 + 0x14) = 4;
      *(undefined2 *)(piVar1 + 0x12) = 7;
      piVar1[2] = ar4;
      *(int **)(*piVar1 + 0x1c) = piVar1;
      (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(a4,a5,a6,a7);
      return 0;
    }
  }
  return 0xfffffff3;
}



/* FUN_8c1f2a0a @ 8c1f2a0a callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2a0a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *in_r3;
  
  if (*(int *)(*in_r3 + 0x34) != 1) {
    iVar1 = FUN_8c1f23e0(ar4,ar5,ar6,ar7);
    if (iVar1 != 6) {
      if (iVar1 == 0) {
        FUN_8c1f2418(0,ar5,ar6,ar7);
      }
      return 0;
    }
    *(undefined4 *)(DAT_8c2739e0 + 0x34) = 1;
  }
  return 1;
}



/* FUN_8c1f2a48 @ 8c1f2a48 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f2a48(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (('`' < (char)ar4) && ((char)ar4 < '{')) {
    ar4 = ar4 + -0x20;
  }
  return ar4;
}



/* FUN_8c1f2a5c @ 8c1f2a5c callers=3 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2a5c(undefined1 *ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined4 in_r0;
  
  for (; 0 < ar6; ar6 = ar6 + -1) {
    uVar1 = *ar4;
    ar4 = ar4 + 1;
    *ar5 = uVar1;
    ar5 = ar5 + 1;
  }
  return in_r0;
}



/* FUN_8c1f2a74 @ 8c1f2a74 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2a74(char *ar4,char *ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *ar5_00;
  int ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  while( true ) {
    if (ar6 < 1) {
      return 1;
    }
    if (*ar4 == '\0') break;
    cVar1 = *ar4;
    ar4 = ar4 + 1;
    uVar2 = FUN_8c1f2a48((int)cVar1,ar5_00,ar6_00,ar7);
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    uVar3 = FUN_8c1f2a48((int)cVar1,ar5_00,ar6_00,ar7);
    if ((char)uVar2 != (char)uVar3) {
      return 0;
    }
    ar6 = ar6 + -1;
  }
  if (*ar5 == '\0') {
    return 1;
  }
  return 0;
}



/* FUN_8c1f2a80 @ 8c1f2a80 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2a80(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *unaff_r13;
  int unaff_r14;
  char in_T;
  
  pcVar4 = ar5;
  if (in_T != '\0') {
    do {
      if (*unaff_r13 == '\0') {
        if (*pcVar4 == '\0') {
          return 1;
        }
        return 0;
      }
      cVar1 = *unaff_r13;
      unaff_r13 = unaff_r13 + 1;
      uVar2 = FUN_8c1f2a48((int)cVar1,ar5,ar6,ar7);
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      uVar3 = FUN_8c1f2a48((int)cVar1,ar5,ar6,ar7);
      if ((char)uVar2 != (char)uVar3) {
        return 0;
      }
      unaff_r14 = unaff_r14 + -1;
    } while (0 < unaff_r14);
  }
  return 1;
}



/* FUN_8c1f2acc @ 8c1f2acc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2acc(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  
  do {
    if (*ar4 == '\0') {
      if (*ar5 != '\0') {
        return 0;
      }
      return 1;
    }
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    cVar2 = *ar4;
    ar4 = ar4 + 1;
  } while (cVar2 == cVar1);
  return 0;
}



/* FUN_8c1f2ae2 @ 8c1f2ae2 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2ae2(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = ar5;
  do {
    if (*ar4 == '\0') {
      if (*pcVar4 != '\0') {
        return 0;
      }
      return 1;
    }
    cVar1 = *ar4;
    ar4 = ar4 + 1;
    uVar2 = FUN_8c1f2a48((int)cVar1,ar5,ar6,ar7);
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    uVar3 = FUN_8c1f2a48((int)cVar1,ar5,ar6,ar7);
  } while ((char)uVar2 == (char)uVar3);
  return 0;
}



/* FUN_8c1f2ae6 @ 8c1f2ae6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2ae6(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *unaff_r14;
  
  pcVar4 = ar5;
  do {
    if (*unaff_r14 == '\0') {
      if (*pcVar4 != '\0') {
        return 0;
      }
      return 1;
    }
    cVar1 = *unaff_r14;
    unaff_r14 = unaff_r14 + 1;
    uVar2 = FUN_8c1f2a48((int)cVar1,ar5,ar6,ar7);
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    uVar3 = FUN_8c1f2a48((int)cVar1,ar5,ar6,ar7);
  } while ((char)uVar2 == (char)uVar3);
  return 0;
}



/* FUN_8c1f2b1c @ 8c1f2b1c callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f2b1c(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    pcVar1 = ar5;
    if (*ar4 == '\0') {
      return iVar2;
    }
    for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      if (*ar4 == *pcVar1) {
        return iVar2;
      }
    }
    iVar2 = iVar2 + 1;
    ar4 = ar4 + 1;
  } while( true );
}



/* FUN_8c1f2b42 @ 8c1f2b42 callers=2 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f2b42(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_8c1f2c4e;
  for (; *ar4 != '\0'; ar4 = ar4 + 1) {
    uVar1 = FUN_8c1f2a48((int)*ar4,ar5,ar6,ar7);
    uVar2 = uVar2 + (uVar1 & 0xff);
  }
  return uVar2 >> 2 & 0xff;
}



/* FUN_8c1f2b68 @ 8c1f2b68 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f2b68(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int ar5_00;
  uint ar6_00;
  
  if (*ar4 < 0x22) {
    uVar1 = 0;
  }
  else {
    FUN_8c1f2a5c(ar4 + 2,ar5,4,ar7);
    FUN_8c1f2a5c(ar4 + 10,ar5 + 4,4,ar7);
    *(byte *)(ar5 + 8) = ar4[0x19];
    uVar1 = (uint)ar4[0x20];
    if ((*(byte *)(ar5 + 8) & 2) == 0) {
      uVar1 = uVar1 - 2;
    }
    ar5_00 = ar5 + 10;
    ar6_00 = uVar1;
    FUN_8c1f2a5c(ar4 + 0x21,ar5_00,uVar1,ar7);
    *(undefined1 *)(uVar1 + ar5 + 10) = 0;
    if ((*(byte *)(ar5 + 8) & 2) != 0) {
      ar5_00 = 0x2e;
      if (*(char *)(ar5 + 10) == '\0') {
        *(undefined1 *)(ar5 + 10) = 0x2e;
      }
      else if (*(char *)(ar5 + 10) == '\x01') {
        *(undefined1 *)(ar5 + 10) = 0x2e;
        *(undefined1 *)(ar5 + 0xb) = 0x2e;
        *(undefined1 *)(ar5 + 0xc) = 0;
      }
    }
    uVar2 = FUN_8c1f2b42(ar5 + 10,ar5_00,ar6_00,ar7);
    *(char *)(ar5 + 9) = (char)uVar2;
    uVar1 = (uint)*ar4;
  }
  return uVar1;
}



/* FUN_8c1f2b70 @ 8c1f2b70 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f2b70(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int in_r2;
  int ar5_00;
  uint a6;
  byte *unaff_r13;
  undefined4 in_PR;
  
  if ((int)(uint)*unaff_r13 < in_r2) {
    uVar1 = 0;
  }
  else {
    FUN_8c1f2a5c(unaff_r13 + 2,ar5,4,ar7,in_PR);
    FUN_8c1f2a5c(unaff_r13 + 10,ar5 + 4,4,ar7,in_PR);
    *(byte *)(ar5 + 8) = unaff_r13[0x19];
    uVar1 = (uint)unaff_r13[0x20];
    if ((*(byte *)(ar5 + 8) & 2) == 0) {
      uVar1 = uVar1 - 2;
    }
    ar5_00 = ar5 + 10;
    a6 = uVar1;
    FUN_8c1f2a5c(unaff_r13 + 0x21,ar5_00,uVar1,ar7,in_PR);
    *(undefined1 *)(uVar1 + ar5 + 10) = 0;
    if ((*(byte *)(ar5 + 8) & 2) != 0) {
      ar5_00 = 0x2e;
      if (*(char *)(ar5 + 10) == '\0') {
        *(undefined1 *)(ar5 + 10) = 0x2e;
      }
      else if (*(char *)(ar5 + 10) == '\x01') {
        *(undefined1 *)(ar5 + 10) = 0x2e;
        *(undefined1 *)(ar5 + 0xb) = 0x2e;
        *(undefined1 *)(ar5 + 0xc) = 0;
      }
    }
    uVar2 = FUN_8c1f2b42(ar5 + 10,ar5_00,a6,ar7);
    *(char *)(ar5 + 9) = (char)uVar2;
    uVar1 = (uint)*unaff_r13;
  }
  return uVar1;
}



/* FUN_8c1f2bfe @ 8c1f2bfe callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2bfe(char *ar4,int ar5,int *ar6,int ar7)

{
  int iVar1;
  char *a6;
  int iVar2;
  int iVar3;
  int iVar4;
  int *a5;
  char *unaff_r13;
  int iVar5;
  int iStack_2c;
  
  a5 = ar6 + 4;
  if (ar6[2] != ar5) {
    iVar5 = 0;
    iVar2 = (int)DAT_8c1f2c50;
    ar6[2] = ar5;
    iVar3 = ar6[1];
    iStack_2c = ar5;
    for (iVar4 = ar7; 0 < iVar4; iVar4 = iVar4 - iVar2) {
      a6 = ar4;
      iVar1 = (*(code *)PTR_FUN_8c1f2c54)(iStack_2c,1,ar4,ar7);
      if (iVar1 != 0) {
        ar6[2] = 0;
        return iVar1;
      }
      unaff_r13 = ar4;
      if (iVar3 <= iVar5) break;
      while (iVar1 = FUN_8c1f2b68(unaff_r13,a5,a6,ar7), iVar1 != 0) {
        if ((iVar5 == 0) && (a5[1] != iVar4)) {
          iVar4 = a5[1];
        }
        unaff_r13 = unaff_r13 + iVar1;
        a5 = a5 + 0xb;
        iVar5 = iVar5 + 1;
        if ((ar4 + iVar2 <= unaff_r13) || (iVar3 <= iVar5)) break;
      }
      if (iVar3 <= iVar5) break;
      iStack_2c = iStack_2c + 1;
    }
    *ar6 = iVar5;
    if (((iVar5 == iVar3) && (iVar4 != 0)) &&
       ((iVar4 != iVar2 || ((unaff_r13 < ar4 + iVar2 && (*unaff_r13 != '\0')))))) {
      ar6[2] = 0;
      return 0xfffffff4;
    }
  }
  return 0;
}



/* FUN_8c1f2cce @ 8c1f2cce callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2cce(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int a6;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = ar5 + 4;
  iVar3 = *ar5;
  a6 = ar6;
  uVar1 = FUN_8c1f2b42(ar4,ar5,ar6,ar7);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      if ((uint)*(byte *)((int)piVar5 + 9) == (uVar1 & 0xff)) {
        if (ar6 == 1) {
          iVar2 = func_0x8c1f2ac0(ar4,(int)piVar5 + 10,a6,ar7);
        }
        else {
          iVar2 = FUN_8c1f2ae2(ar4,(int)piVar5 + 10,a6,ar7);
        }
        if (iVar2 == 1) {
          return iVar4 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0xb;
    } while (iVar4 < iVar3);
  }
  return 0;
}



/* FUN_8c1f2d3e @ 8c1f2d3e callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2d3e(int ar4,int ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  ushort *ar5_00;
  int iVar2;
  uint a6;
  uint a6_00;
  uint uVar3;
  ushort *a5;
  byte *ar5_01;
  byte *ar4_00;
  byte *ain0;
  ushort auStack_34 [2];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  
  ar4_00 = (byte *)(ar4 + 0x800);
  a6_00 = 0;
  a5 = (ushort *)(ar7 + 1);
  uStack_24 = 1;
  uVar3 = 1;
  iStack_2c = 0;
  ain0 = ar4_00;
  iStack_30 = ar5;
  iStack_28 = ar6;
  do {
    if ((ain0 <= ar4_00) || (ar5_01 = ar4_00, ain0 <= ar4_00 + (uint)*ar4_00 + (*ar4_00 & 1) + 8)) {
      iVar2 = (ar4 - (int)ar4_00) + 0x800;
      ar5_01 = (byte *)(ar4 - iVar2);
      FUN_8c1f2a5c(ar4_00,ar5_01,iVar2,ar7,ain0);
      iVar2 = FUN_8c1f19ec(iStack_30,1,ar4,ar7);
      if (iVar2 != 0) {
        return 0;
      }
      iStack_30 = iStack_30 + 1;
    }
    ar5_00 = auStack_34;
    a6 = 2;
    FUN_8c1f2a5c(ar5_01 + 6,ar5_00,2,ar7,ain0);
    if ((auStack_34[0] == uStack_24) &&
       ((uVar3 == 1 ||
        ((*ar5_01 == a6_00 &&
         (ar5_00 = a5, a6 = a6_00, iVar2 = FUN_8c1f2a74(ar5_01 + 8,a5,a6_00,ar7), iVar2 != 0)))))) {
      a5 = (ushort *)((int)a5 + a6_00);
      uStack_24 = uVar3;
      if ((char)*a5 == '\0') {
        uVar1 = FUN_8c1f1714(ar5_01 + 2,ar5_00,a6,ar7);
        return uVar1;
      }
      if (uVar3 != 1) {
        a5 = (ushort *)((int)a5 + 1);
      }
      a6_00 = FUN_8c1f2b1c(a5,&DAT_8c26c560,a6,ar7);
    }
    uVar3 = uVar3 + 1;
    iVar2 = (*ar5_01 & 1) + (uint)*ar5_01 + 8;
    iStack_2c = iStack_2c + iVar2;
    ar4_00 = ar5_01 + iVar2;
  } while (iStack_2c < iStack_28);
  return 0;
}



/* FUN_8c1f2e3e @ 8c1f2e3e callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2e3e(int ar4,int ar5,int ar6,int ar7,char *s0)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *a5;
  int iVar6;
  uint a6;
  uint uVar7;
  byte *ar5_00;
  byte *pbVar8;
  byte *ar4_00;
  uint uStack_44;
  ushort auStack_3c [2];
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  
  bVar2 = true;
  uStack_44 = 0;
  pcVar5 = s0;
  while (cVar1 = *pcVar5, pcVar5 = pcVar5 + 1, cVar1 != '\0') {
    uStack_44 = uStack_44 + 1;
  }
  pcVar5 = (char *)(ar7 + 1);
  uVar7 = 1;
  uStack_24 = 1;
  iStack_34 = 0;
  pbVar8 = (byte *)(ar4 + 0x800);
  uStack_30 = 0;
  ar4_00 = pbVar8;
  iStack_38 = ar5;
  iStack_28 = ar6;
  do {
    if ((pbVar8 <= ar4_00) ||
       (ar5_00 = ar4_00, pbVar8 <= ar4_00 + (uint)*ar4_00 + (*ar4_00 & 1) + 8)) {
      iVar6 = (ar4 - (int)ar4_00) + 0x800;
      ar5_00 = (byte *)(ar4 - iVar6);
      FUN_8c1f2a5c(ar4_00,ar5_00,iVar6,ar7,ar4);
      iVar6 = FUN_8c1f19ec(iStack_38,1,ar4,ar7);
      if (iVar6 != 0) {
        return 0;
      }
      iStack_38 = iStack_38 + 1;
    }
    FUN_8c1f2a5c(ar5_00 + 6,auStack_3c,2,ar7,ar4);
    uVar3 = uStack_24;
    if ((auStack_3c[0] == uStack_24) && (uVar3 = uVar7, uVar7 != 1)) {
      if (bVar2) {
        uStack_2c = uStack_44;
        a5 = s0;
      }
      else {
        uStack_2c = uStack_30;
        a5 = pcVar5;
      }
      uVar3 = uStack_24;
      if ((*ar5_00 == uStack_2c) &&
         (a6 = uStack_2c, iVar6 = FUN_8c1f2a74(ar5_00 + 8,a5,uStack_2c,ar7), uVar3 = uStack_24,
         iVar6 != 0)) {
        if (!bVar2) {
          pcVar5 = pcVar5 + uStack_30;
        }
        if (*pcVar5 == '\0') {
          uVar4 = FUN_8c1f1714(ar5_00 + 2,a5,a6,ar7);
          return uVar4;
        }
        if (bVar2) {
          bVar2 = false;
        }
        else if (uVar7 != 1) {
          pcVar5 = pcVar5 + 1;
        }
        uStack_30 = FUN_8c1f2b1c(pcVar5,&DAT_8c26c560,a6,ar7);
        uVar3 = uVar7;
      }
    }
    uStack_24 = uVar3;
    uVar7 = uVar7 + 1;
    iVar6 = (*ar5_00 & 1) + (uint)*ar5_00 + 8;
    iStack_34 = iStack_34 + iVar6;
    ar4_00 = ar5_00 + iVar6;
    if (iStack_28 <= iStack_34) {
      return 0;
    }
  } while( true );
}



/* FUN_8c1f2f98 @ 8c1f2f98 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2f98(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  
  puVar1 = PTR_sh4_tmu_1f88e6_8c1f308c;
  pcVar8 = FUN_8c1f302a;
  iVar7 = ar4[6];
  uVar4 = (*(code *)PTR_sh4_tmu_1f88e6_8c1f308c)(FUN_8c1f302a);
  uVar3 = DAT_8c1f3094;
  puVar2 = PTR_FUN_8c1f3090;
  do {
    (**(code **)(*(int *)(*ar4 + 0x3c) + 0x48))();
    iVar5 = FUN_8c1f364c(ar4,ar5,ar6,ar7);
    if (iVar5 == 0) {
      return 0xffffffe0;
    }
    if (iVar5 == 1) {
      return 0;
    }
    if (((iVar5 != 2) && (iVar5 != 3)) && (iVar5 != 4)) {
      if ((iVar5 != 5) && (iVar5 != 0x40)) {
        return 0xffffffe7;
      }
      return (int)*(short *)((int)ar4 + 0x52);
    }
    if (iVar7 != ar4[6]) {
      uVar4 = (*(code *)puVar1)(iVar5,pcVar8);
      iVar7 = ar4[6];
    }
    ar5 = (*(code *)puVar1)();
    uVar6 = (*(code *)puVar2)(uVar4);
  } while (uVar6 <= uVar3);
  return 0xffffffeb;
}



/* FUN_8c1f2f9c @ 8c1f2f9c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f2f9c(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 a4;
  int a4_00;
  int iVar4;
  int *unaff_r14;
  
  puVar1 = PTR_sh4_tmu_1f88e6_8c1f308c;
  iVar4 = unaff_r14[6];
  a4 = (*(code *)PTR_sh4_tmu_1f88e6_8c1f308c)(ar4,ar5,ar6,ar7);
  uVar3 = DAT_8c1f3094;
  puVar2 = PTR_FUN_8c1f3090;
  do {
    (**(code **)(*(int *)(*unaff_r14 + 0x3c) + 0x48))(ar4,ar5,ar6,ar7);
    a4_00 = FUN_8c1f364c(unaff_r14,ar5,ar6,ar7);
    if (a4_00 == 0) {
      return 0xffffffe0;
    }
    if (a4_00 == 1) {
      return 0;
    }
    if (((a4_00 != 2) && (a4_00 != 3)) && (a4_00 != 4)) {
      if ((a4_00 != 5) && (a4_00 != 0x40)) {
        return 0xffffffe7;
      }
      return (int)*(short *)((int)unaff_r14 + 0x52);
    }
    if (iVar4 != unaff_r14[6]) {
      a4 = (*(code *)puVar1)(a4_00,ar5,ar6,ar7);
      iVar4 = unaff_r14[6];
    }
    ar5 = (*(code *)puVar1)(a4_00,ar5,ar6,ar7);
    ar4 = (*(code *)puVar2)(a4,ar5,ar6,ar7);
  } while (ar4 <= uVar3);
  return 0xffffffeb;
}



/* FUN_8c1f302a @ 8c1f302a callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1f304a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f302a(int *ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  
  if ((ar4 != (int *)0x0) && (*(int **)(*ar4 + 0x1c) != ar4)) {
    ar4[1] = ar5;
    iVar1 = (int)DAT_8c1f308a;
    ar4[2] = ar6;
    ar4[3] = ar7;
    ar4[4] = ar7 + iVar1 >> 0xb;
    ar4[5] = 0;
    ar4[6] = 0;
    ar4[7] = 0;
    ar4[8] = 0;
    ar4[0xf] = 0;
    ar4[0x11] = 0;
    *(undefined2 *)(ar4 + 0x12) = 0;
    *(undefined2 *)((int)ar4 + 0x4a) = 0;
    *(undefined2 *)(ar4 + 0x13) = 1;
    *(undefined2 *)(ar4 + 0x14) = 0;
    *(undefined2 *)((int)ar4 + 0x52) = 0;
    return ar4;
  }
  return 0;
}



/* FUN_8c1f3078 @ 8c1f3078 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c1f3078(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = ar5;
  ar4[2] = 0;
  return ar4;
}



/* FUN_8c1f309c @ 8c1f309c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f309c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 in_r0;
  
  if ((ar4 != 0) && (in_r0 = 0x4c, *(short *)(ar4 + 0x4c) != 0)) {
    sVar1 = *(short *)(ar4 + 0x50);
    if ((sVar1 == 2) || ((sVar1 == 3 || (sVar1 == 4)))) {
      FUN_8c1f367a(ar4,ar5,ar6,ar7);
    }
    in_r0 = 0x4c;
    *(undefined2 *)(ar4 + 0x4c) = 0;
  }
  return in_r0;
}



/* FUN_8c1f30a0 @ 8c1f30a0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f30a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 in_r0;
  int unaff_r14;
  
  if ((unaff_r14 != 0) && (in_r0 = 0x4c, *(short *)(unaff_r14 + 0x4c) != 0)) {
    sVar1 = *(short *)(unaff_r14 + 0x50);
    if ((sVar1 == 2) || ((sVar1 == 3 || (sVar1 == 4)))) {
      FUN_8c1f367a(unaff_r14,ar5,ar6,ar7);
    }
    in_r0 = 0x4c;
    *(undefined2 *)(unaff_r14 + 0x4c) = 0;
  }
  return in_r0;
}



/* FUN_8c1f30d4 @ 8c1f30d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f30d4(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (*(short *)(ar4 + 0x4c) != 0)) {
    *ar5 = *(undefined4 *)(ar4 + 0xc);
    return 1;
  }
  return 0;
}



/* FUN_8c1f30ee @ 8c1f30ee callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f30ee(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (*(short *)(ar4 + 0x4c) != 0)) {
    *ar5 = *(undefined4 *)(ar4 + 0x10);
    return 1;
  }
  return 0;
}



/* FUN_8c1f3122 @ 8c1f3122 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f3122(int ar4,int ar5,int ar6,undefined4 ar7)

{
  if ((ar4 == 0) || (*(short *)(ar4 + 0x4c) == 0)) {
    return 0xfffffff6;
  }
  if (ar6 != 0) {
    if (ar6 == 1) {
      ar5 = *(int *)(ar4 + 0x14) + ar5;
    }
    else {
      if (ar6 != 2) {
        return 0xfffffff0;
      }
      ar5 = ar5 + *(int *)(ar4 + 0x10);
    }
  }
  if ((-1 < ar5) && (ar5 <= *(int *)(ar4 + 0x10))) {
    *(int *)(ar4 + 0x14) = ar5;
    return 0;
  }
  return 0xffffffef;
}



/* FUN_8c1f316e @ 8c1f316e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f316e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (*(short *)(ar4 + 0x4c) != 0)) {
    return *(undefined4 *)(ar4 + 0x14);
  }
  return 0;
}



/* FUN_8c1f31c6 @ 8c1f31c6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f31c6(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int ar5_00;
  int iVar3;
  uint ar6_00;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_8c1f32a8;
  iVar2 = 0;
  iVar4 = (int)DAT_8c1f32a6;
  ar5_00 = ar5;
  ar6_00 = ar6;
  for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
    if ((ar6 & 0x1f) == 0) {
      ar5_00 = ar5;
      ar6_00 = ar6;
      iVar2 = FUN_8c1f332c(ar4,ar5,ar6,ar7);
    }
    else {
      ar5_00 = ar5;
      ar6_00 = ar6;
      iVar2 = FUN_8c1f3254(ar4,ar5,ar6,ar7);
    }
    if (((iVar2 != 0) || (ar5 == 0)) ||
       (iVar3 = iVar1, *(int *)(ar4 + 0x10) <= *(int *)(ar4 + 0x14))) break;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    }
    ar5_00 = 0;
  }
  if (iVar5 == iVar4) {
    iVar2 = -0x15;
  }
  else if (-1 < iVar2) {
    iVar2 = FUN_8c1f2f98(ar4,ar5_00,ar6_00,ar7);
  }
  return iVar2;
}



/* FUN_8c1f31da @ 8c1f31da callers=0 callees=3 */

/* WARNING: Unknown calling convention */

int FUN_8c1f31da(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r11;
  int unaff_r12;
  int iVar5;
  int unaff_r14;
  char in_T;
  
  iVar1 = DAT_8c1f32a8;
  iVar2 = 0;
  iVar4 = (int)DAT_8c1f32a6;
  for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
    ar5 = unaff_r12;
    ar6 = unaff_r11;
    if (in_T == '\0') {
      iVar2 = FUN_8c1f3254(unaff_r14,unaff_r12,unaff_r11,ar7);
    }
    else {
      iVar2 = FUN_8c1f332c(unaff_r14,unaff_r12,unaff_r11,ar7);
    }
    if (((iVar2 != 0) || (unaff_r12 == 0)) ||
       (iVar3 = iVar1, *(int *)(unaff_r14 + 0x10) <= *(int *)(unaff_r14 + 0x14))) break;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    }
    ar5 = 0;
  }
  if (iVar5 == iVar4) {
    iVar2 = -0x15;
  }
  else if (-1 < iVar2) {
    iVar2 = FUN_8c1f2f98(unaff_r14,ar5,ar6,ar7);
  }
  return iVar2;
}



/* FUN_8c1f3254 @ 8c1f3254 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f3254(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a7;
  int a4;
  
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    return 0xfffffff6;
  }
  if (*(int *)(*ar4 + 0x1c) == 0) {
    a4 = ar4[5] + ar4[2];
    iVar2 = ar4[2] + ar4[4];
    if (a4 < iVar2) {
      if (iVar2 < ar5 + a4) {
        ar5 = iVar2 - a4;
      }
      if (ar5 != 0) {
        a7 = 0;
        iVar2 = ar5;
        iVar1 = (**(code **)(*(int *)(*ar4 + 0xc) + 4))(a4,ar5,ar6,0);
        if (iVar1 == 0) {
          *(undefined2 *)(ar4 + 0x14) = 1;
          return 0;
        }
        ar4[0xf] = iVar1;
        ar4[7] = ar5;
        *(undefined2 *)(ar4 + 0x14) = 2;
        *(undefined2 *)((int)ar4 + 0x4a) = 1;
        *(undefined2 *)(ar4 + 0x12) = 1;
        ar4[6] = 0;
        *(int **)(*ar4 + 0x1c) = ar4;
        (**(code **)(*(int *)(*ar4 + 0xc) + 0x40))(a4,iVar2,ar6,a7);
        return ar5;
      }
    }
    ar4[6] = 0;
    *(undefined2 *)(ar4 + 0x14) = 1;
  }
  return 0;
}



/* FUN_8c1f332c @ 8c1f332c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f332c(int *ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a7;
  int a4;
  
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    return 0xfffffff6;
  }
  if (*(int *)(*ar4 + 0x1c) == 0) {
    if ((ar6 & 0x1f) != 0) {
      return 0xfffffff2;
    }
    a4 = ar4[5] + ar4[2];
    iVar2 = ar4[2] + ar4[4];
    if (a4 < iVar2) {
      if (iVar2 < ar5 + a4) {
        ar5 = iVar2 - a4;
      }
      if (ar5 == 0) {
        ar4[6] = 0;
        *(undefined2 *)(ar4 + 0x14) = 1;
        return 0;
      }
      a7 = (int)*(short *)((int)ar4 + 0x4e);
      iVar2 = ar5;
      iVar1 = (**(code **)(*(int *)(*ar4 + 0xc) + 4))(a4,ar5,ar6,a7);
      if (iVar1 != 0) {
        ar4[0xf] = iVar1;
        ar4[7] = ar5;
        *(undefined2 *)(ar4 + 0x14) = 2;
        *(undefined2 *)((int)ar4 + 0x4a) = 1;
        *(undefined2 *)(ar4 + 0x12) = 1;
        ar4[6] = 0;
        *(int **)(*ar4 + 0x1c) = ar4;
        (**(code **)(*(int *)(*ar4 + 0xc) + 0x40))(a4,iVar2,ar6,a7);
        return ar5;
      }
      *(undefined2 *)(ar4 + 0x14) = 1;
    }
    else {
      ar4[6] = 0;
      *(undefined2 *)(ar4 + 0x14) = 1;
    }
  }
  return 0;
}



/* FUN_8c1f3416 @ 8c1f3416 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f3416(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    return 0xfffffff6;
  }
  if (*(int *)(*ar4 + 0x1c) == 0) {
    a4 = ar4[5] + ar4[2];
    iVar2 = ar4[2] + ar4[4];
    if (a4 < iVar2) {
      if (iVar2 < ar5 + a4) {
        ar5 = iVar2 - a4;
      }
      if (ar5 == 0) {
        ar4[6] = 0;
        *(undefined2 *)(ar4 + 0x14) = 1;
        return 0;
      }
      iVar2 = ar5;
      iVar1 = (**(code **)(*(int *)(*ar4 + 0xc) + 8))(a4,ar5,ar6,ar7);
      if (iVar1 != 0) {
        *(int **)(*ar4 + 0x1c) = ar4;
        ar4[0xf] = iVar1;
        ar4[7] = ar5;
        *(undefined2 *)(ar4 + 0x14) = 2;
        *(undefined2 *)((int)ar4 + 0x4a) = 1;
        *(undefined2 *)(ar4 + 0x12) = 4;
        ar4[8] = 0;
        ar4[6] = 0;
        (**(code **)(*(int *)(*ar4 + 0xc) + 0x40))(a4,iVar2,ar6,ar7);
        return ar5;
      }
      *(undefined2 *)(ar4 + 0x14) = 1;
    }
    else {
      ar4[6] = 0;
      *(undefined2 *)(ar4 + 0x14) = 1;
    }
  }
  return 0;
}



/* FUN_8c1f34f4 @ 8c1f34f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f34f4(int *ar4,uint ar5,uint ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint a6;
  
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    uVar1 = 0xfffffff6;
  }
  else if ((ar6 & 0x1f) == 0) {
    if ((ar5 & 0x1f) == 0) {
      if ((short)ar4[0x12] == 4) {
        a6 = ar5;
        iVar2 = (**(code **)(*(int *)(*ar4 + 0xc) + 0xc))(ar4[0xf],ar6,ar5,ar7);
        if (iVar2 == 0) {
          *(undefined2 *)((int)ar4 + 0x4a) = 1;
          ar4[8] = ar5;
          ar4[6] = 0;
          (**(code **)(*(int *)(*ar4 + 0xc) + 0x40))(0,ar6,a6,ar7);
          uVar1 = 0;
        }
        else if (iVar2 == -1) {
          uVar1 = 0xffffffe8;
        }
        else {
          uVar1 = 0xfffffff3;
        }
      }
      else {
        uVar1 = 0xffffffec;
      }
    }
    else {
      uVar1 = 0xfffffff1;
    }
  }
  else {
    uVar1 = 0xfffffff2;
  }
  return uVar1;
}



/* FUN_8c1f35ba @ 8c1f35ba callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f35ba(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int a4;
  
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    uVar1 = 0xfffffff6;
  }
  else {
    if (*(int *)(*ar4 + 0x1c) == 0) {
      a4 = ar4[2] + ar4[5];
      iVar2 = (**(code **)(*(int *)(*ar4 + 0xc) + 0x18))(a4,ar5,ar6,ar7);
      if (iVar2 != 0) {
        ar4[0xf] = iVar2;
        *(undefined2 *)(ar4 + 0x14) = 3;
        *(undefined2 *)(ar4 + 0x12) = 2;
        *(int **)(*ar4 + 0x1c) = ar4;
        (**(code **)(*(int *)(*ar4 + 0xc) + 0x40))(a4,ar5,ar6,ar7);
        uVar1 = FUN_8c1f2f98(ar4,ar5,ar6,ar7);
        return uVar1;
      }
    }
    uVar1 = 0xfffffff3;
  }
  return uVar1;
}



/* FUN_8c1f364c @ 8c1f364c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f364c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (*(short *)(ar4 + 0x4c) != 0)) {
    return (int)*(short *)(ar4 + 0x50);
  }
  return 0xfffffff6;
}



/* FUN_8c1f367a @ 8c1f367a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f367a(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_sh4_tmu_1f88e6_8c1f37c4;
  uVar7 = 0;
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    uVar7 = 0xfffffff6;
  }
  else if (((short)ar4[0x14] == 2) || ((short)ar4[0x14] == 4)) {
    if (*(int **)(*ar4 + 0x1c) == ar4) {
      uVar3 = (*(code *)PTR_sh4_tmu_1f88e6_8c1f37c4)(0);
      while (puVar2 = PTR_FUN_8c1f37cc, ar4[0x10] != 1) {
        if (((short)ar4[0x14] != 2) && ((short)ar4[0x14] != 4)) goto LAB_8c1f36d4;
        uVar4 = (*(code *)puVar1)(uVar7);
        uVar6 = (*(code *)puVar2)(uVar3,uVar4);
        if (DAT_8c1f37c8 < uVar6) {
          return 0xffffffeb;
        }
        (**(code **)(*(int *)(*ar4 + 0x3c) + 0x48))();
      }
      uVar3 = (*(code *)puVar1)(uVar7);
      uVar6 = (uint)DAT_8c1f37c0;
      do {
        uVar4 = (*(code *)puVar1)(uVar7);
        uVar5 = (*(code *)puVar2)(uVar3,uVar4);
      } while (uVar5 < uVar6);
      uVar7 = 0xfffffff3;
      if (((short)ar4[0x14] == 2) || ((short)ar4[0x14] == 4)) {
        if (*(int **)(*ar4 + 0x1c) == ar4) {
          (**(code **)(*(int *)(*ar4 + 0xc) + 0x14))(ar4[0xf]);
          *(undefined2 *)(ar4 + 0x12) = 3;
          uVar7 = FUN_8c1f2f98(ar4,uVar7,ar6,ar7);
        }
        else {
          uVar7 = 0xfffffff3;
        }
      }
      else {
        *(undefined2 *)(ar4 + 0x14) = 0;
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 0xfffffff3;
    }
  }
  else {
LAB_8c1f36d4:
    *(undefined2 *)(ar4 + 0x14) = 0;
    uVar7 = 0;
  }
  return uVar7;
}



/* FUN_8c1f3682 @ 8c1f3682 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f3682(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint ar4_00;
  int a4;
  undefined4 a5;
  uint uVar4;
  int *unaff_r14;
  char in_T;
  
  puVar1 = PTR_sh4_tmu_1f88e6_8c1f37c4;
  if ((in_T == '\x01') || ((short)unaff_r14[0x13] == 0)) {
    uVar3 = 0xfffffff6;
  }
  else {
    ar4_00 = (uint)(short)unaff_r14[0x14];
    if ((ar4_00 == 2) || (ar4_00 == 4)) {
      if (*(int **)(*unaff_r14 + 0x1c) == unaff_r14) {
        uVar3 = (*(code *)PTR_sh4_tmu_1f88e6_8c1f37c4)(ar4_00,ar5,ar6,ar7);
        while (puVar2 = PTR_FUN_8c1f37cc, unaff_r14[0x10] != 1) {
          a4 = (int)(short)unaff_r14[0x14];
          if ((a4 != 2) && (a4 != 4)) goto LAB_8c1f36d4;
          a5 = (*(code *)puVar1)(a4,ar5,ar6,ar7);
          ar4_00 = (*(code *)puVar2)(uVar3,a5,ar6,ar7);
          if (DAT_8c1f37c8 < ar4_00) {
            return 0xffffffeb;
          }
          ar5 = DAT_8c1f37c8;
          (**(code **)(*(int *)(*unaff_r14 + 0x3c) + 0x48))(ar4_00,DAT_8c1f37c8,ar6,ar7);
        }
        uVar3 = (*(code *)puVar1)(ar4_00,ar5,ar6,ar7);
        uVar4 = (uint)DAT_8c1f37c0;
        do {
          ar5 = (*(code *)puVar1)(ar4_00,ar5,ar6,ar7);
          ar4_00 = (*(code *)puVar2)(uVar3,ar5,ar6,ar7);
        } while (ar4_00 < uVar4);
        uVar3 = 0xfffffff3;
        if (((short)unaff_r14[0x14] == 2) || ((short)unaff_r14[0x14] == 4)) {
          if (*(int **)(*unaff_r14 + 0x1c) == unaff_r14) {
            (**(code **)(*(int *)(*unaff_r14 + 0xc) + 0x14))(unaff_r14[0xf],0xfffffff3,ar6,ar7);
            *(undefined2 *)(unaff_r14 + 0x12) = 3;
            uVar3 = FUN_8c1f2f98(unaff_r14,uVar3,ar6,ar7);
          }
          else {
            uVar3 = 0xfffffff3;
          }
        }
        else {
          *(undefined2 *)(unaff_r14 + 0x14) = 0;
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0xfffffff3;
      }
    }
    else {
LAB_8c1f36d4:
      *(undefined2 *)(unaff_r14 + 0x14) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* FUN_8c1f37a8 @ 8c1f37a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f37a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (*(short *)(ar4 + 0x4c) != 0)) {
    return (int)*(short *)(ar4 + 0x52);
  }
  return 0;
}



/* FUN_8c1f38c0 @ 8c1f38c0 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f38c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  DAT_8c2739f0 = &DAT_8c26c4a4;
  uVar1 = (*(code *)PTR_FUN_8c26c4b0)(&DAT_8c26c4a4);
  return uVar1;
}



/* FUN_8c1f38ca @ 8c1f38ca callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f38ca(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int in_r2;
  undefined4 in_r3;
  undefined4 *unaff_r14;
  
  *unaff_r14 = in_r3;
  uVar1 = (**(code **)(in_r2 + 0xc))(ar4,ar5,ar6,ar7,in_r2);
  return uVar1;
}



/* FUN_8c1f38f2 @ 8c1f38f2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f38f2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  if (DAT_8c2739f0 != 0) {
    ain0 = (**(code **)(DAT_8c2739f0 + 0x14))();
    DAT_8c2739f0 = 0;
  }
  return ain0;
}



/* FUN_8c1f38f4 @ 8c1f38f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f38f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int *in_r3;
  
  if (*in_r3 != 0) {
    ain0 = (**(code **)(*in_r3 + 0x14))(ar4,ar5,ar6,ar7);
    DAT_8c2739f0 = 0;
  }
  return ain0;
}



/* FUN_8c1f3926 @ 8c1f3926 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f3926(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    /* WARNING: Could not recover jumptable at 0x8c1f3932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x20))();
    return uVar1;
  }
  return 0;
}



/* FUN_8c1f3952 @ 8c1f3952 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f3952(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    /* WARNING: Could not recover jumptable at 0x8c1f395e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x28))();
    return uVar1;
  }
  return 0;
}



/* FUN_8c1f3968 @ 8c1f3968 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f3968(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    /* WARNING: Could not recover jumptable at 0x8c1f3974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x2c))();
    return uVar1;
  }
  return 0;
}



/* FUN_8c1f397e @ 8c1f397e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f397e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    /* WARNING: Could not recover jumptable at 0x8c1f398a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x3c))();
    return uVar1;
  }
  return 0;
}



/* FUN_8c1f39ac @ 8c1f39ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f39ac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    /* WARNING: Could not recover jumptable at 0x8c1f39ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x44))();
    return uVar1;
  }
  return 0;
}



/* FUN_8c1f39f0 @ 8c1f39f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f39f0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    /* WARNING: Could not recover jumptable at 0x8c1f39fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x48))();
    return uVar1;
  }
  return ain0;
}



/* FUN_8c1f3a34 @ 8c1f3a34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f3a34(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    /* WARNING: Could not recover jumptable at 0x8c1f3a42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x54))();
    return uVar1;
  }
  return 0;
}



/* FUN_8c1f3a4c @ 8c1f3a4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f3a4c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    /* WARNING: Could not recover jumptable at 0x8c1f3a5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x58))();
    return uVar1;
  }
  return 0;
}



/* syscall_1f3b1c @ 8c1f3b1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 syscall_1f3b1c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1f3b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c1f3b2c)(DAT_8c1f3b28);
  return uVar1;
}



/* syscall_1f3b44 @ 8c1f3b44 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 syscall_1f3b44(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1f3b4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c1f3b54)(DAT_8c1f3b50);
  return uVar1;
}



/* FUN_8c1f3b5c @ 8c1f3b5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f3b5c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_8c1efd26((uint)(byte)(&DAT_8c26c69c)[ar4],ar5,ar6,ar7);
  iVar2 = FUN_8c1efd26(ar4,ar5,ar6,ar7);
  if ((((ar4 == 2) || (ar4 == 8)) || (ar4 == 0xe)) || (ar4 == 0x14)) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  return (uint)(byte)(&DAT_8c26c674)
                     [(uint)*(byte *)(iVar1 + 0x12 + iVar3) * 4 + (uint)*(byte *)(iVar2 + 0x12)];
}



/* FUN_8c1f3c78 @ 8c1f3c78 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f3c78(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1f3d28(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    FUN_8c1f3d9c((uint)(byte)(&DAT_8c26c684)[ar4] * 0xc0 + -0x73b8f048,ar5,ar6,ar7);
    iVar1 = FUN_8c1efeac(ar4,4,0,0);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* FUN_8c1f3cde @ 8c1f3cde callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f3cde(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f3d28(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  iVar1 = (*(code *)PTR_FUN_8c1f3d90)(ar4,4,0,0);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return 0;
}



/* FUN_8c1f3d28 @ 8c1f3d28 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f3d28(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar5_00;
  int iVar1;
  short sStack_10;
  ushort uStack_e;
  short sStack_c;
  char cStack_a;
  char cStack_9;
  
  ar5_00 = (int *)(*(code *)PTR_FUN_8c1f3d94)(ar4,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_FUN_8c1f3d98)(&sStack_10,ar5_00,ar6,ar7);
  if ((((-1 < iVar1) && (*ar5_00 == 0xe)) && (sStack_10 == 1)) &&
     ((((uint)uStack_e == (int)DAT_8c1f3d86 && (sStack_c == 1)) &&
      ((cStack_a == '\0' && (cStack_9 == '\0')))))) {
    return 1;
  }
  return 0;
}



/* FUN_8c1f3d9c @ 8c1f3d9c callers=1 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c1f3db0 */
/* WARNING: Switch with 1 destination removed at 0x8c1f3db6 */
/* WARNING: Switch with 1 destination removed at 0x8c1f3dbc */
/* WARNING: Switch with 1 destination removed at 0x8c1f3dc2 */
/* WARNING: Unknown calling convention */

uint FUN_8c1f3d9c(undefined1 *ar4,char *ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  if (ar6 == 1) {
    iVar4 = 0x20;
    pbVar8 = ar4 + 5;
    do {
      iVar12 = 6;
      do {
        pbVar7 = pbVar8;
        bVar9 = 0;
        bVar2 = 1;
        iVar11 = 8;
        do {
          cVar1 = *ar5;
          ar5 = ar5 + 1;
          if (((int)cVar1 & 8U) != 0) {
            bVar9 = bVar9 | bVar2;
          }
          bVar2 = bVar2 << 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        *pbVar7 = bVar9;
        iVar12 = iVar12 + -1;
        pbVar8 = pbVar7 + -1;
      } while (iVar12 != 0);
      iVar4 = iVar4 + -1;
      pbVar8 = pbVar7 + 0xb;
    } while (iVar4 != 0);
    return (int)cVar1;
  }
  if (ar6 == 2) {
    iVar4 = 0x20;
    puVar5 = ar4 + DAT_8c1f3bf6;
    do {
      iVar12 = 6;
      do {
        puVar6 = puVar5;
        uVar10 = 0;
        uVar3 = (uint)DAT_8c1f3bf8;
        iVar11 = 8;
        do {
          cVar1 = *ar5;
          ar5 = ar5 + 1;
          if (((int)cVar1 & 8U) != 0) {
            uVar10 = uVar10 | uVar3;
          }
          uVar3 = uVar3 >> 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        *puVar6 = (char)uVar10;
        iVar12 = iVar12 + -1;
        puVar5 = puVar6 + 1;
      } while (iVar12 != 0);
      iVar4 = iVar4 + -1;
      puVar5 = puVar6 + -0xb;
    } while (iVar4 != 0);
    return (int)cVar1;
  }
  if (ar6 == 3) {
    iVar4 = 0x20;
    pbVar8 = ar4 + DAT_8c1f3c50;
    do {
      iVar12 = 6;
      do {
        bVar9 = 0;
        bVar2 = 1;
        iVar11 = 8;
        do {
          cVar1 = *ar5;
          ar5 = ar5 + 1;
          if (((int)cVar1 & 8U) != 0) {
            bVar9 = bVar9 | bVar2;
          }
          iVar11 = iVar11 + -1;
          bVar2 = bVar2 << 1;
        } while (iVar11 != 0);
        pbVar8 = pbVar8 + -1;
        *pbVar8 = bVar9;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return (int)cVar1;
  }
  iVar4 = (int)DAT_8c1f3c74;
  do {
    uVar10 = 0;
    uVar3 = (uint)DAT_8c1f3c76;
    iVar12 = 8;
    do {
      cVar1 = *ar5;
      ar5 = ar5 + 1;
      if (((int)cVar1 & 8U) != 0) {
        uVar10 = uVar10 | uVar3;
      }
      uVar3 = uVar3 >> 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    *ar4 = (char)uVar10;
    iVar4 = iVar4 + -1;
    ar4 = ar4 + 1;
  } while (iVar4 != 0);
  return (int)cVar1;
}



/* FUN_8c1f3dd8 @ 8c1f3dd8 callers=0 callees=0 */

/* WARNING: Heritage AFTER dead removal. Example location: r0x8c47267c : 0x8c1f3dfc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f3dd8(uint ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 *ar4_00;
  undefined4 *ar5_00;
  undefined4 ar6_00;
  undefined4 *puVar2;
  int *piVar3;
  
  _DAT_8c4727b4 = -0x73b8e948;
  ar6_00 = 0x1f;
  uVar1 = ar4;
  if ((_DAT_8c47267c & 0x1f) != 0) {
    uVar1 = _DAT_8c47267c + 0x20 & 0xffffffe0;
  }
  _DAT_8c47267c = uVar1;
  uVar1 = ar6;
  if ((_DAT_8c472680 & 0x1f) != 0) {
    uVar1 = _DAT_8c472680 + 0x20 & 0xffffffe0;
  }
  _DAT_8c472680 = uVar1;
  _DAT_8c47267c = _DAT_8c47267c | 0xa0000000;
  _DAT_8c472680 = _DAT_8c472680 | 0xa0000000;
  g2dma_1f4794(0xa0000000,0xffffffe0,0x1f,ar7);
  ar4_00 = &DAT_8c26c728;
  ar5_00 = &DAT_8c26c728;
  puVar2 = &DAT_8c26c728;
  piVar3 = &DAT_8c26c728;
  do {
    if (*(char *)(_DAT_8c4727b4 + 0xf90 + *piVar3) != '\0') {
      ar4_00 = (undefined4 *)*puVar2;
      FUN_8c1f55e4(ar4_00,ar5_00,ar6_00,ar7);
    }
    piVar3 = piVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (piVar3 < (int *)0x8c26c738);
  FUN_8c1f59c8(ar4_00,ar5_00,ar6_00,ar7);
  *(undefined4 *)(_DAT_8c4727b4 + 0xfc0) = 1;
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x8c) = 0x6155404f;
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x10) = 0;
  *(uint *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x80) =
       *(uint *)(_DAT_8c4727b4 + 0x10c0) | *(uint *)(_DAT_8c4727b4 + 0x10d0);
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x14) = 1;
  return 0;
}



/* FUN_8c1f3de2 @ 8c1f3de2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f3de2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int in_r2;
  int in_r3;
  int iVar1;
  undefined4 *a4;
  undefined4 *a5;
  undefined4 a6;
  undefined4 *puVar2;
  int *piVar3;
  int *unaff_r14;
  
  *unaff_r14 = in_r3;
  *(undefined4 *)(ain0 + in_r2) = ar4;
  *(undefined4 *)(ain0 + 4 + *unaff_r14) = ar6;
  a6 = 0x1f;
  if ((*(uint *)(ain0 + *unaff_r14) & 0x1f) != 0) {
    *(int *)(*unaff_r14 + 0xfc4) = *(int *)(*unaff_r14 + 0xfc4) + 0x20;
    *(uint *)(*unaff_r14 + 0xfc4) = *(uint *)(*unaff_r14 + 0xfc4) & 0xffffffe0;
  }
  iVar1 = *unaff_r14;
  if ((*(uint *)(iVar1 + 0xfc8) & 0x1f) != 0) {
    *(int *)(iVar1 + 0xfc8) = *(int *)(iVar1 + 0xfc8) + 0x20;
    *(uint *)(*unaff_r14 + 0xfc8) = *(uint *)(*unaff_r14 + 0xfc8) & 0xffffffe0;
  }
  *(uint *)(*unaff_r14 + 0xfc4) = *(uint *)(*unaff_r14 + 0xfc4) | 0xa0000000;
  *(uint *)(*unaff_r14 + 0xfc8) = *(uint *)(*unaff_r14 + 0xfc8) | 0xa0000000;
  g2dma_1f4794(0xa0000000,0xffffffe0,0x1f,ar7);
  a4 = &DAT_8c26c728;
  a5 = &DAT_8c26c728;
  puVar2 = &DAT_8c26c728;
  piVar3 = &DAT_8c26c728;
  do {
    if (*(char *)(*unaff_r14 + 0xf90 + *piVar3) != '\0') {
      a4 = (undefined4 *)*puVar2;
      FUN_8c1f55e4(a4,a5,a6,ar7);
    }
    piVar3 = piVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (piVar3 < (int *)0x8c26c738);
  FUN_8c1f59c8(a4,a5,a6,ar7);
  *(undefined4 *)(*unaff_r14 + 0xfc0) = 1;
  *(undefined4 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x8c) = 0x6155404f;
  *(undefined4 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x10) = 0;
  iVar1 = *unaff_r14;
  *(uint *)(*(int *)(iVar1 + 0x10f4) + 0x80) = *(uint *)(iVar1 + 0x10c0) | *(uint *)(iVar1 + 0x10d0)
  ;
  *(undefined4 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x14) = 1;
  return 0;
}



/* FUN_8c1f3ef4 @ 8c1f3ef4 callers=0 callees=0 */

/* WARNING: Heritage AFTER dead removal. Example location: r0x8c47267c : 0x8c1f3f24 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f3ef4(int *ar4,uint *ar5,uint ar6,int ar7)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *a4;
  undefined4 *a5;
  undefined4 a6;
  undefined4 a7;
  undefined4 *puVar6;
  int *piVar7;
  uint *puStack_28;
  int *piStack_24;
  
  _DAT_8c4727b4 = -0x73b8e948;
  uVar5 = ar6;
  if ((_DAT_8c47267c & 0x1f) != 0) {
    uVar5 = _DAT_8c47267c + 0x20 & 0xffffffe0;
  }
  _DAT_8c47267c = uVar5;
  puVar1 = ar5;
  if (((uint)_DAT_8c472680 & 0x1f) != 0) {
    puVar1 = (uint *)((int)_DAT_8c472680 + 0x20U & 0xffffffe0);
  }
  _DAT_8c472680 = puVar1;
  _DAT_8c47267c = _DAT_8c47267c | 0xa0000000;
  _DAT_8c472680 = (uint *)((uint)_DAT_8c472680 | 0xa0000000);
  g2dma_1f4794(0x8c4716b8,ar5,ar6,ar7);
  uVar5 = 0;
  do {
    *(undefined4 *)(_DAT_8c4727b4 + 0xfe8 + uVar5) = 0;
    iVar3 = _DAT_8c4727b4 + uVar5;
    uVar5 = uVar5 + 4;
    *(undefined4 *)(iVar3 + 0x1048) = 0;
  } while (uVar5 < 0x60);
  iVar3 = 0;
  puStack_28 = ar5;
  piStack_24 = ar4;
  if (0 < ar7) {
    do {
      uVar5 = *puStack_28;
      if ((uVar5 & 0x1f) != 0) {
        uVar5 = uVar5 + 0x20 & 0xffffffe0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = *piStack_24;
      *(uint *)(_DAT_8c4727b4 + 0xfe8 + iVar2 * 4) = uVar5 | 0xa0000000;
      *(uint *)(iVar2 * 4 + _DAT_8c4727b4 + 0x1048) = (uVar5 | 0xa0000000) + 0x400;
      puStack_28 = puStack_28 + 1;
      piStack_24 = piStack_24 + 1;
    } while (iVar3 < ar7);
  }
  iVar3 = 0;
  *(undefined4 *)(_DAT_8c4727b4 + 0x10a8) = *(undefined4 *)(_DAT_8c4727b4 + 0xfc4);
  *(int *)(_DAT_8c4727b4 + 0x10ac) = ar7 * 0x400 + *(int *)(_DAT_8c4727b4 + 0xfc4);
  *(undefined4 *)(_DAT_8c4727b4 + 0xfcc) = *(undefined4 *)(_DAT_8c4727b4 + 0x10a8);
  do {
    puVar4 = (undefined1 *)(_DAT_8c4727b4 + 0xf90 + iVar3);
    iVar3 = iVar3 + 1;
    *puVar4 = 0;
  } while (iVar3 < 0x18);
  a7 = 0x65;
  iVar3 = 0;
  a6 = 0x72;
  if (0 < ar7) {
    do {
      iVar2 = *ar4;
      ar4 = ar4 + 1;
      if ((((iVar2 == 0) || (iVar2 == 6)) || (iVar2 == 0xc)) || (iVar2 == 0x12)) {
        *(undefined1 *)(iVar2 + _DAT_8c4727b4 + 0xf90) = 0x72;
      }
      else {
        *(undefined1 *)(iVar2 + _DAT_8c4727b4 + 0xf90) = 0x65;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < ar7);
  }
  a4 = &DAT_8c26c728;
  a5 = &DAT_8c26c728;
  puVar6 = &DAT_8c26c728;
  piVar7 = &DAT_8c26c728;
  do {
    if (*(char *)(_DAT_8c4727b4 + 0xf90 + *piVar7) != '\0') {
      a4 = (undefined4 *)*puVar6;
      FUN_8c1f55e4(a4,a5,a6,a7);
    }
    piVar7 = piVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (piVar7 < (int *)0x8c26c738);
  FUN_8c1f59c8(a4,a5,a6,a7);
  *(undefined4 *)(_DAT_8c4727b4 + 0xfc0) = 1;
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x8c) = 0x6155404f;
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x10) = 0;
  *(uint *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x80) =
       *(uint *)(_DAT_8c4727b4 + 0x10c0) | *(uint *)(_DAT_8c4727b4 + 0x10d0);
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x14) = 1;
  return 0;
}



/* FUN_8c1f4102 @ 8c1f4102 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4102(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = DAT_8c1f4154;
  iVar7 = *DAT_8c1f4154;
  iVar6 = iVar7 + 0x28;
  puVar5 = (uint *)(DAT_8c1f4140 + iVar7);
  if (0 < *(int *)(DAT_8c1f4142 + iVar7)) {
    (*(code *)PTR_FUN_8c1f4158)(*(undefined4 *)(DAT_8c1f4142 + iVar7),1);
  }
  puVar2 = PTR_FUN_8c1f4148;
  for (iVar7 = 0; iVar7 < 0x18; iVar7 = iVar7 + 1) {
    if ((*(char *)((int)DAT_8c1f4230 + *piVar3 + iVar7) != '\0') && (*(char *)(iVar6 + 6) == '\0'))
    {
      cVar1 = *(char *)(iVar6 + 4);
      if (cVar1 == '\x01') {
        (*(code *)puVar2)(iVar7);
      }
      else if (cVar1 == '\x02') {
        (*(code *)PTR_FUN_8c1f4238)(iVar7);
      }
      else if (cVar1 == '\x03') {
        (*(code *)PTR_FUN_8c1f423c)(iVar7);
      }
      else if (cVar1 == '\x04') {
        (*(code *)PTR_FUN_8c1f4240)(iVar7);
      }
      else if (cVar1 == '\t') {
        uVar4 = *puVar5;
        if ((uVar4 & 1) != 0) {
          uVar4 = 1;
        }
        (*(code *)PTR_FUN_8c1f4244)(iVar7,uVar4);
      }
    }
    puVar5 = puVar5 + 0x1e;
    iVar6 = iVar6 + 0x2c;
  }
  (*(code *)PTR_FUN_8c1f4248)();
  return 0;
}



/* FUN_8c1f4110 @ 8c1f4110 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4110(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  int in_r0;
  int *unaff_r10;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *unaff_r10;
  iVar4 = iVar5 + 0x28;
  puVar3 = (uint *)(DAT_8c1f4140 + iVar5);
  if (0 < *(int *)(in_r0 + iVar5)) {
    ar4 = *(int *)(in_r0 + iVar5);
    (*(code *)PTR_FUN_8c1f4158)(ar4,ar5,ar6,ar7);
  }
  puVar2 = PTR_FUN_8c1f4148;
  for (iVar5 = 0; iVar5 < 0x18; iVar5 = iVar5 + 1) {
    if ((*(char *)((int)DAT_8c1f4230 + *unaff_r10 + iVar5) != '\0') &&
       (*(char *)(iVar4 + 6) == '\0')) {
      cVar1 = *(char *)(iVar4 + 4);
      if (cVar1 == '\x01') {
        ar4 = iVar5;
        (*(code *)puVar2)(iVar5,ar5,ar6,ar7);
      }
      else if (cVar1 == '\x02') {
        ar4 = iVar5;
        (*(code *)PTR_FUN_8c1f4238)(iVar5,ar5,ar6,ar7);
      }
      else if (cVar1 == '\x03') {
        ar4 = iVar5;
        (*(code *)PTR_FUN_8c1f423c)(iVar5,ar5,ar6,ar7);
      }
      else if (cVar1 == '\x04') {
        ar4 = iVar5;
        (*(code *)PTR_FUN_8c1f4240)(iVar5,ar5,ar6,ar7);
      }
      else if (cVar1 == '\t') {
        ar5 = *puVar3;
        if ((ar5 & 1) != 0) {
          ar5 = 1;
        }
        ar4 = iVar5;
        (*(code *)PTR_FUN_8c1f4244)(iVar5,ar5,ar6,ar7);
      }
    }
    puVar3 = puVar3 + 0x1e;
    iVar4 = iVar4 + 0x2c;
  }
  (*(code *)PTR_FUN_8c1f4248)(ar4,ar5,ar6,ar7);
  return 0;
}



/* FUN_8c1f4202 @ 8c1f4202 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4202(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r2;
  char *pcVar4;
  int iVar5;
  undefined4 in_PR;
  
  if (*(int *)(_DAT_8c4727b4 + 0xfc0) == 1) {
    if ((*(uint *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x18) & 1) == 0) {
      bVar1 = *PTR_DAT_8c1f5a28;
      *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
      if (bVar1 == 0) {
        if (*(int *)(_DAT_8c4727b4 + 0xfb0) != *(int *)(_DAT_8c4727b4 + 0xfac)) {
          *(undefined4 *)(_DAT_8c4727b4 + 0xfb0) = *(undefined4 *)(_DAT_8c4727b4 + 0xfac);
          if (*(int *)(_DAT_8c4727b4 + 0xfac) == 0) {
            *(undefined4 *)(_DAT_8c4727b4 + 0x10c0) = 0xc3500000;
          }
          else {
            iVar3 = libgcc_divide_helper_010468(300000,0x14);
            *(int *)(extraout_r2 + 0x10c0) = iVar3 << 0x10;
          }
          *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x14) = 0;
          *(uint *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x80) =
               *(uint *)(_DAT_8c4727b4 + 0x10c0) | *(uint *)(_DAT_8c4727b4 + 0x10d0);
          *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x14) = 1;
        }
        FUN_8c1f4102(ar4,ar5,ar6,ar7);
        *(undefined4 *)(_DAT_8c4727b4 + 0x10b0) =
             *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10b8) * 4 + _DAT_8c4727b4 + 0x10a8);
        iVar3 = *(int *)(_DAT_8c4727b4 + 0x10f4);
        uVar2 = FUN_8c1f59f2(*(undefined4 *)
                              (*(int *)(_DAT_8c4727b4 + 0x10b8) * 4 + _DAT_8c4727b4 + 0x10a8),ar5,
                             ar6,ar7);
        *(undefined4 *)(iVar3 + 4) = uVar2;
        *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x18) = 1;
        *(undefined4 *)(_DAT_8c4727b4 + 0xfd8) = 0;
        *(uint *)(_DAT_8c4727b4 + 0x10b8) = *(uint *)(_DAT_8c4727b4 + 0x10b8) ^ 1;
        *(undefined4 *)(_DAT_8c4727b4 + 0xfcc) =
             *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10b8) * 4 + _DAT_8c4727b4 + 0x10a8);
        *(uint *)(_DAT_8c4727b4 + 0x10b4) = *(uint *)(_DAT_8c4727b4 + 0x10b4) ^ 1;
        *(undefined4 *)(_DAT_8c4727b4 + 0xfdc) = 0;
        iVar3 = _DAT_8c4727b4 + 0x28;
        iVar5 = 0;
        while (iVar5 < 0x18) {
          pcVar4 = (char *)(_DAT_8c4727b4 + 0xf90 + iVar5);
          iVar5 = iVar5 + 1;
          if (*pcVar4 != '\0') {
            *(undefined1 *)(iVar3 + 7) = *(undefined1 *)(iVar3 + 6);
            *(undefined1 *)(iVar3 + 6) = 0;
            *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0x18);
            *(undefined4 *)(iVar3 + 0x18) = 0;
          }
          iVar3 = iVar3 + 0x2c;
        }
        *(undefined4 *)(_DAT_8c4727b4 + 0xfc0) = 0;
        uVar2 = 0;
        *PTR_DAT_8c1f5a28 = 0;
      }
      else {
        FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6b8,in_PR);
        uVar2 = 0xfffffffe;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f4210 @ 8c1f420e callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f4210
          (undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r2;
  char *pcVar4;
  int iVar5;
  uint unaff_r12;
  int *unaff_r14;
  
  if (*(int *)(*unaff_r14 + ain1) == 1) {
    if ((*(uint *)(*(int *)(*unaff_r14 + 0x10f4) + 0x18) & unaff_r12) == 0) {
      bVar1 = *PTR_DAT_8c1f5a28;
      *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
      if (bVar1 == 0) {
        if (*(int *)(*unaff_r14 + 0xfb0) != *(int *)(*unaff_r14 + 0xfac)) {
          *(undefined4 *)(*unaff_r14 + 0xfb0) = *(undefined4 *)(*unaff_r14 + 0xfac);
          if (*(int *)(*unaff_r14 + 0xfac) == 0) {
            *(undefined4 *)(*unaff_r14 + 0x10c0) = 0xc3500000;
          }
          else {
            iVar3 = libgcc_divide_helper_010468(300000,0x14);
            *(int *)(extraout_r2 + 0x10c0) = iVar3 << 0x10;
          }
          *(undefined4 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x14) = 0;
          iVar3 = *unaff_r14;
          *(uint *)(*(int *)(iVar3 + 0x10f4) + 0x80) =
               *(uint *)(iVar3 + 0x10c0) | *(uint *)(iVar3 + 0x10d0);
          *(uint *)(*(int *)(*unaff_r14 + 0x10f4) + 0x14) = unaff_r12;
        }
        FUN_8c1f4102(ar4,ar5,ar6,ar7);
        iVar3 = *unaff_r14;
        *(undefined4 *)(iVar3 + 0x10b0) =
             *(undefined4 *)(*(int *)(iVar3 + 0x10b8) * 4 + iVar3 + 0x10a8);
        iVar3 = *unaff_r14;
        iVar5 = *(int *)(iVar3 + 0x10f4);
        uVar2 = FUN_8c1f59f2(*(undefined4 *)(*(int *)(iVar3 + 0x10b8) * 4 + iVar3 + 0x10a8),ar5,ar6,
                             ar7);
        *(undefined4 *)(iVar5 + 4) = uVar2;
        *(uint *)(*(int *)(*unaff_r14 + 0x10f4) + 0x18) = unaff_r12;
        *(undefined4 *)(*unaff_r14 + 0xfd8) = 0;
        *(uint *)(*unaff_r14 + 0x10b8) = *(uint *)(*unaff_r14 + 0x10b8) ^ unaff_r12;
        iVar3 = *unaff_r14;
        *(undefined4 *)(iVar3 + 0xfcc) =
             *(undefined4 *)(*(int *)(iVar3 + 0x10b8) * 4 + iVar3 + 0x10a8);
        *(uint *)(*unaff_r14 + 0x10b4) = *(uint *)(*unaff_r14 + 0x10b4) ^ unaff_r12;
        *(undefined4 *)(*unaff_r14 + 0xfdc) = 0;
        iVar3 = *unaff_r14 + 0x28;
        iVar5 = 0;
        while (iVar5 < 0x18) {
          pcVar4 = (char *)(*unaff_r14 + 0xf90 + iVar5);
          iVar5 = iVar5 + 1;
          if (*pcVar4 != '\0') {
            *(undefined1 *)(iVar3 + 7) = *(undefined1 *)(iVar3 + 6);
            *(undefined1 *)(iVar3 + 6) = 0;
            *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0x18);
            *(undefined4 *)(iVar3 + 0x18) = 0;
          }
          iVar3 = iVar3 + 0x2c;
        }
        *(undefined4 *)(*unaff_r14 + 0xfc0) = 0;
        uVar2 = 0;
        *PTR_DAT_8c1f5a28 = 0;
      }
      else {
        FUN_8c1f4570(ar4,ar5,ar6,ar7);
        uVar2 = 0xfffffffe;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}



/* FUN_8c1f43d2 @ 8c1f43d2 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f43d2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  int ar4_00;
  undefined4 in_PR;
  
  ar4_00 = _DAT_8c4727b4;
  if (*(int *)(_DAT_8c4727b4 + 0xfc0) != 0) {
    return 0xfffffffd;
  }
  if ((*(uint *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x18) & 1) != 0) {
    return 0xffffffff;
  }
  bVar1 = *PTR_DAT_8c1f5a28;
  *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4_00,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6b8,in_PR);
    return 0xfffffffe;
  }
  return 0;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f43d6 @ 8c1f43d6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f43d6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  int in_r0;
  int *in_r3;
  int a4;
  
  a4 = *in_r3;
  if (*(int *)(in_r0 + a4) != 0) {
    return 0xfffffffd;
  }
  if ((*(uint *)(*(int *)(DAT_8c1f44b0 + a4) + 0x18) & 1) != 0) {
    return 0xffffffff;
  }
  bVar1 = **(byte **)PTR_PTR_8c1f44b4;
  **(byte **)PTR_PTR_8c1f44b4 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(a4,ar5,ar6,ar7);
    return 0xfffffffe;
  }
  return 0;
}



/* FUN_8c1f4414 @ 8c1f4414 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4414(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)((int)DAT_8c1f44ae + *DAT_8c1f44b8) = 1;
  **(undefined1 **)PTR_PTR_8c1f44b4 = 0;
  return 0;
}



/* FUN_8c1f442a @ 8c1f442a callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f442a(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int ar4_00;
  int ar4_01;
  
  for (ar4_01 = 0; ar4_01 < 4; ar4_01 = ar4_01 + 1) {
    if (*(char *)((&DAT_8c26c728)[ar4_01] + _DAT_8c4727b4 + 0xf90) != '\0') {
      FUN_8c1f4f82(ar4_01,ar5,ar6,ar7);
      iVar1 = 0;
      iVar2 = ar4_01 * 6;
      ar4_00 = iVar2;
      do {
        if (*(char *)(_DAT_8c4727b4 + 0xf90 + iVar2) != '\0') {
          ar5 = ar4_01;
          FUN_8c1f5048(ar4_00,ar4_01,ar6,ar7);
        }
        iVar1 = iVar1 + 1;
        ar4_00 = ar4_00 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar1 < 6);
    }
  }
  return 0;
}



/* FUN_8c1f443c @ 8c1f443c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f443c(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int unaff_r8;
  int unaff_r9;
  int iVar1;
  int iVar2;
  int ar4_00;
  int ar4_01;
  
  for (ar4_01 = unaff_r8; ar4_01 < 4; ar4_01 = ar4_01 + 1) {
    if (*(char *)((&DAT_8c26c728)[ar4_01] + _DAT_8c4727b4 + 0xf90) != '\0') {
      FUN_8c1f4f82(ar4_01,ar5,ar6,ar7);
      iVar2 = ar4_01 * 6;
      iVar1 = unaff_r8;
      ar4_00 = iVar2;
      do {
        if (*(char *)(_DAT_8c4727b4 + 0xf90 + iVar2) != '\0') {
          ar5 = ar4_01;
          FUN_8c1f5048(ar4_00,ar4_01,ar6,ar7);
        }
        iVar1 = iVar1 + 1;
        ar4_00 = ar4_00 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar1 < unaff_r9);
    }
  }
  return 0;
}



/* FUN_8c1f44cc @ 8c1f44cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f44cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 a4;
  int iVar6;
  
  puVar1 = PTR_sh4_tmu_1f88e6_8c1f45f4;
  uVar4 = (*(code *)PTR_sh4_tmu_1f88e6_8c1f45f4)(ar4,ar5,ar6,ar7);
  piVar3 = DAT_8c1f4600;
  puVar2 = PTR_FUN_8c1f45fc;
  iVar5 = DAT_8c1f45f8;
  do {
    if ((*(uint *)(*(int *)((int)DAT_8c1f45e8 + *piVar3) + 0x18) & 1) == 0) break;
    ar5 = (*(code *)puVar1)(ar4,ar5,ar6,ar7);
    ar4 = uVar4;
    iVar6 = (*(code *)puVar2)(uVar4,ar5,ar6,ar7);
  } while (iVar6 <= iVar5);
  iVar5 = (int)DAT_8c1f45e8;
  uVar4 = 0;
  *(undefined4 *)(*(int *)(iVar5 + *piVar3) + 0x18) = 0;
  *(undefined4 *)(*(int *)(iVar5 + *piVar3) + 0x14) = 0;
  *(undefined4 *)(*(int *)(iVar5 + *piVar3) + 0x10) = 0;
  *(undefined4 *)((int)DAT_8c1f45ea + *(int *)(iVar5 + *piVar3)) = DAT_8c1f4604;
  *(undefined4 *)((int)DAT_8c1f45ec + *(int *)((int)DAT_8c1f45e8 + *piVar3)) = DAT_8c1f4608;
  *(undefined4 *)(*(int *)((int)DAT_8c1f45e8 + *piVar3) + 4) = DAT_8c1f460c;
  a4 = (*(code *)puVar1)(0,ar5,ar6,ar7);
  iVar5 = (int)DAT_8c1f45ee;
  do {
    if ((*(uint *)(*(int *)((int)DAT_8c1f45e8 + *piVar3) + 0x18) & 1) == 0) {
      return 0;
    }
    ar5 = (*(code *)puVar1)(uVar4,ar5,ar6,ar7);
    uVar4 = a4;
    iVar6 = (*(code *)puVar2)(a4,ar5,ar6,ar7);
  } while (iVar6 <= iVar5);
  return 0;
}



/* FUN_8c1f4570 @ 8c1f4570 callers=2 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1f458c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4
FUN_8c1f4570(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            )

{
  undefined4 uVar1;
  
  uVar1 = 0x10c8;
  if ((*(int *)(_DAT_8c4727b4 + 0x10c8) != 0) &&
     (uVar1 = vsprintf_like(0x8c4715b8,s0,&s4,ar7), DAT_8c2739f8 != (code *)0x0)) {
    uVar1 = (*DAT_8c2739f8)(0x8c4715b8);
  }
  return uVar1;
}



/* FUN_8c1f4574 @ 8c1f4574 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1f458c) */
/* WARNING: Unknown calling convention */

int FUN_8c1f4574(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0,undefined4 s0,
                undefined4 s4)

{
  int *in_r2;
  undefined4 *ar6_00;
  
  if (*(int *)(ain0 + *in_r2) != 0) {
    ar6_00 = &s4;
    ain0 = vsprintf_like(0x8c4715b8,s0,ar6_00,ar7);
    if (DAT_8c2739f8 != (code *)0x0) {
      ain0 = (*DAT_8c2739f8)(0x8c4715b8,s0,ar6_00,ar7);
    }
  }
  return ain0;
}



/* FUN_8c1f45b8 @ 8c1f45b8 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f45b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *DAT_8c1f4600 + 0x28 + ar4 * 0x2c;
}



/* FUN_8c1f45c8 @ 8c1f45c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f45c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *DAT_8c1f4600 + (int)DAT_8c1f45f2 + ar4 * 0x78;
}



/* FUN_8c1f45da @ 8c1f45da callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f45da(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *DAT_8c1f4600 + 4 + ar4 * 8;
}



/* FUN_8c1f461c @ 8c1f461c callers=1 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f461c(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f45b8(ar4,ar5,ar6,ar7);
  return (uint)(*(int *)(iVar1 + 0x20) == ar5);
}



/* FUN_8c1f4636 @ 8c1f4636 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f4636(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f45b8(ar4,ar5,ar6,ar7);
  return (uint)*(byte *)(iVar1 + 0xc);
}



/* FUN_8c1f4646 @ 8c1f4646 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4646(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f45b8(ar4,ar5,ar6,ar7);
  *(undefined1 *)(iVar1 + 0xd) = 1;
  return 1;
}



/* FUN_8c1f4656 @ 8c1f4656 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f4656(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)DAT_8c1f473e;
  *(int *)(iVar1 + *DAT_8c1f4758) = ar4 << 0x10;
  return iVar1;
}



/* FUN_8c1f4662 @ 8c1f4662 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f4662(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(uint *)(*DAT_8c1f4758 + (int)DAT_8c1f473e) >> 0x10;
}



/* FUN_8c1f4672 @ 8c1f4672 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f4672(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)DAT_8c1f4740;
  *(uint *)(iVar1 + *DAT_8c1f4758) = ar4 & 1;
  return iVar1;
}



/* FUN_8c1f4680 @ 8c1f4680 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4680(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*DAT_8c1f4758 + (int)DAT_8c1f4740);
}



/* FUN_8c1f468a @ 8c1f468a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f468a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)DAT_8c1f4742;
  *(undefined4 *)(iVar1 + *DAT_8c1f4758) = ar4;
  return iVar1;
}



/* FUN_8c1f4694 @ 8c1f4694 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4694(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*DAT_8c1f4758 + (int)DAT_8c1f4742);
}



/* FUN_8c1f469e @ 8c1f469e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f469e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)DAT_8c1f4744;
  *(undefined4 *)(iVar1 + *DAT_8c1f4758) = ar4;
  return iVar1;
}



/* FUN_8c1f46a8 @ 8c1f46a8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f46a8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*DAT_8c1f4758 + (int)DAT_8c1f4744);
}



/* FUN_8c1f46ca @ 8c1f46ca callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f46ca(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)DAT_8c1f4746;
  *(undefined4 *)(iVar1 + *DAT_8c1f4758) = ar4;
  return iVar1;
}



/* FUN_8c1f46d4 @ 8c1f46d4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f46d4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*DAT_8c1f4758 + (int)DAT_8c1f4746);
}



/* FUN_8c1f46de @ 8c1f46de callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f46de(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)DAT_8c1f4748;
  *(undefined4 *)(iVar1 + *DAT_8c1f4758) = ar4;
  return iVar1;
}



/* FUN_8c1f46e8 @ 8c1f46e8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f46e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*DAT_8c1f4758 + (int)DAT_8c1f4748);
}



/* FUN_8c1f46f2 @ 8c1f46f2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f46f2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_8c1f4758;
  iVar2 = (int)DAT_8c1f474a;
  *(undefined4 *)(iVar2 + *DAT_8c1f4758) = ar4;
  iVar2 = iVar2 + 4;
  *(undefined4 *)(iVar2 + *piVar1) = ar4;
  return iVar2;
}



/* FUN_8c1f4702 @ 8c1f4702 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4702(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*DAT_8c1f4758 + (int)DAT_8c1f474c);
}



/* FUN_8c1f4716 @ 8c1f4716 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f4716(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)DAT_8c1f4750;
  *(undefined4 *)(iVar1 + *DAT_8c1f4758) = ar4;
  return iVar1;
}



/* FUN_8c1f4720 @ 8c1f4720 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4720(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*DAT_8c1f4758 + (int)DAT_8c1f4750);
}



/* FUN_8c1f472a @ 8c1f472a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f472a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)DAT_8c1f4752;
  *(undefined4 *)(iVar1 + *DAT_8c1f4758) = ar4;
  return iVar1;
}



/* FUN_8c1f4734 @ 8c1f4734 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4734(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*DAT_8c1f4758 + (int)DAT_8c1f4754);
}



/* FUN_8c1f4764 @ 8c1f4764 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f4764(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)DAT_8c1f4778;
  *(undefined4 *)(iVar1 + *DAT_8c1f477c) = ar4;
  return iVar1;
}



/* FUN_8c1f476e @ 8c1f476e callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f476e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*DAT_8c1f477c + (int)DAT_8c1f4778);
}



/* FUN_8c1f4780 @ 8c1f4780 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4780(uint *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  do {
    uVar1 = *ar4;
    ar5 = ar5 + -1;
    *ar4 = ((uVar1 & 0xff) << 8 | (uVar1 & 0xff00) >> 8) << 0x10 | ((uVar1 & 0xff0000) >> 0x10) << 8
           | uVar1 >> 0x18;
    ar4 = ar4 + 1;
  } while (ar5 != 0);
  return 0;
}



/* g2dma_1f4794 @ 8c1f4794 callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 g2dma_1f4794(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *ar4_00;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  
  iVar5 = 0x6000;
  iVar7 = 0;
  _DAT_8c4727b4[0x42d] = 0;
  _DAT_8c4727b4[0x42e] = 0;
  uVar9 = 0;
  do {
    *(int *)((int)_DAT_8c4727b4 + uVar9 + 0xfe8) = _DAT_8c4727b4[0x3f2] + iVar7;
    uVar2 = uVar9 + 4;
    *(int *)((int)_DAT_8c4727b4 + uVar9 + 0x1048) = _DAT_8c4727b4[0x3f2] + iVar5;
    iVar5 = iVar5 + 0x400;
    iVar7 = iVar7 + 0x400;
    uVar9 = uVar2;
  } while (uVar2 < 0x60);
  _DAT_8c4727b4[0x42a] = _DAT_8c4727b4[0x3f1];
  _DAT_8c4727b4[0x42b] = _DAT_8c4727b4[0x3f1] + 0x3000;
  _DAT_8c4727b4[0x3f3] = _DAT_8c4727b4[0x42a];
  FUN_8c1f59dc(_DAT_8c4727b4 + 1,0,8,iVar7);
  uVar4 = 0;
  uVar6 = 0x108;
  FUN_8c1f59dc(_DAT_8c4727b4 + 10,0,0x108,iVar7);
  uVar9 = 0;
  do {
    FUN_8c1f5506((int)_DAT_8c4727b4 + uVar9 + 0x44c,uVar4,uVar6,iVar7);
    uVar9 = uVar9 + 0x78;
  } while (uVar9 < 0xb40);
  iVar5 = 0;
  do {
    iVar1 = iVar5 + 0xf90;
    iVar5 = iVar5 + 1;
    *(undefined1 *)((int)_DAT_8c4727b4 + iVar1) = 0;
  } while (iVar5 < 0x18);
  ar4_00 = &stack0xffffffdc;
  FUN_8c010960(ar4_00,0x18,uVar6,iVar7,in_stack_ffffffd8,in_stack_ffffffdc);
  iVar5 = 0;
  if ((_DAT_a05f689c & 0xff) < 2) {
    bVar8 = 7;
  }
  else {
    bVar8 = 0xf;
  }
  pbVar3 = ar4_00 + 4;
  uVar4 = 5;
  iVar7 = 0;
  do {
    if ((*ar4_00 & bVar8) != 0) {
      iVar10 = 0;
      *(undefined1 *)((int)_DAT_8c4727b4 + iVar7 + 0xf90) = 0x52;
      iVar1 = iVar5;
      do {
        iVar10 = iVar10 + 1;
        *(undefined1 *)((int)_DAT_8c4727b4 + iVar1 + 0xf91) = 0x45;
        iVar1 = iVar1 + 1;
      } while (iVar10 < 5);
    }
    ar4_00 = ar4_00 + 1;
    iVar5 = iVar5 + 6;
    iVar7 = iVar7 + 6;
  } while (ar4_00 < pbVar3);
  _DAT_8c4727b4[0x430] = 0xc3500000;
  _DAT_8c4727b4[0x3f7] = 0;
  _DAT_8c4727b4[0x3f6] = 0;
  _DAT_8c4727b4[0x3f8] = 1;
  _DAT_8c4727b4[0x432] = 0;
  _DAT_8c4727b4[0x43b] = 0;
  _DAT_8c4727b4[0x43a] = 0;
  _DAT_8c4727b4[0x433] = 5;
  _DAT_8c4727b4[0x434] = 0;
  _DAT_8c4727b4[0x436] = 10;
  _DAT_8c4727b4[0x437] = 5;
  _DAT_8c4727b4[0x438] = 0;
  _DAT_8c4727b4[0x439] = 0;
  _DAT_8c4727b4[0x3eb] = 0;
  _DAT_8c4727b4[0x3ec] = 0;
  _DAT_8c4727b4[0x3ef] = 0;
  *_DAT_8c4727b4 = 0x54524f50;
  _DAT_8c4727b4[9] = 0x20564544;
  _DAT_8c4727b4[0x112] = 0x4f464e49;
  _DAT_8c4727b4[0x3e3] = 0x4c424e45;
  _DAT_8c4727b4[0x3ea] = 0x54415453;
  _DAT_8c4727b4[0x3f9] = 0x52444152;
  _DAT_8c4727b4[0x42f] = 0x54554f54;
  _DAT_8c4727b4[0x435] = 0x43515244;
  _DAT_8c4727b4[0x43c] = 0x434e5546;
  _DAT_8c4727b4[0x43e] = 0x20444e45;
  uVar6 = 0;
  FUN_8c1f4672(0,ar4_00,5,iVar7);
  uVar4 = FUN_8c1f59fc(uVar6,ar4_00,uVar4,iVar7);
  return uVar4;
}



/* FUN_8c1f4a00 @ 8c1f4a00 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4a00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_8c1f4a84;
  iVar2 = (int)DAT_8c1f4a7e;
  iVar4 = *DAT_8c1f4a84;
  iVar5 = (int)DAT_8c1f4a80;
  *(int *)(iVar2 + iVar4) = *(int *)(iVar2 + iVar4) + *(int *)(iVar2 + 0xc + iVar4) * 4;
  piVar3 = *(int **)(iVar2 + *piVar1);
  iVar2 = 0;
  if (0 < ar4) {
    do {
      iVar2 = iVar2 + 1;
      *piVar3 = iVar5;
      piVar3 = piVar3 + 1;
    } while (iVar2 < ar4);
  }
  iVar2 = (int)DAT_8c1f4a82;
  *(int *)(iVar2 + *piVar1) = ar4;
  iVar2 = iVar2 + 4;
  *(int *)(iVar2 + *piVar1) = *(int *)(iVar2 + *piVar1) + ar4 * 4;
  return 0;
}



/* FUN_8c1f4a44 @ 8c1f4a44 callers=13 callees=2 */

/* WARNING: Removing unreachable block (ram,0x8c1f4aae) */
/* WARNING: Removing unreachable block (ram,0x8c1f4be0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4a44(int ar4,undefined4 ar5,uint *ar6,int ar7,uint *s0,int s4)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint a5;
  uint *a6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  
  iVar9 = ar4 * 0x2c;
  iVar5 = _DAT_8c4727b4 + 0x28 + iVar9;
  if (*(char *)(iVar5 + 6) == '\0') {
    *(byte *)(iVar5 + 6) = (byte)ar5;
    uVar7 = ar7 + s4;
    bVar1 = (&DAT_8c26c710)[ar4];
    uVar6 = (int)(char)bVar1 & 0xc0;
    a5 = (int)uVar6 >> 6;
    uVar3 = a5;
    a6 = ar6;
    iVar5 = ar7;
    if (((0 < *(int *)(_DAT_8c4727b4 + 0x10cc)) && (0 < *(int *)(_DAT_8c4727b4 + 0xfd8))) &&
       (a5 == ((int)(short)((uint)**(undefined4 **)(_DAT_8c4727b4 + 0xfcc) >> 0x10) & 3U))) {
      FUN_8c1f4a00(*(undefined4 *)(_DAT_8c4727b4 + 0x10cc),a5,ar6,ar7);
    }
    *(int *)(_DAT_8c4727b4 + 0xfcc) =
         *(int *)(_DAT_8c4727b4 + 0xfcc) + *(int *)(_DAT_8c4727b4 + 0xfd8) * 4;
    puVar8 = *(uint **)(_DAT_8c4727b4 + 0xfcc);
    *puVar8 = a5 << 0x10 | uVar7 & 0xff;
    uVar3 = FUN_8c1f59f2(*(undefined4 *)
                          (_DAT_8c4727b4 + 0xfe8 + *(int *)(_DAT_8c4727b4 + 0x10b4) * 0x60 + ar4 * 4
                          ),uVar3,a6,iVar5);
    puVar8[1] = uVar3;
    if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
      puVar8[2] = (uint)(byte)ar5 << 0x18 | (uint)bVar1 << 0x10 | uVar6 << 8 | uVar7 & 0xff;
      puVar8 = puVar8 + 3;
      iVar5 = 0;
      if (0 < ar7) {
        do {
          uVar3 = *ar6;
          ar6 = ar6 + 1;
          iVar5 = iVar5 + 1;
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
        } while (iVar5 < ar7);
      }
    }
    else {
      puVar8[2] = uVar6 << 0x10 | (uint)bVar1 << 8 | uVar7 * 0x1000000 | (uint)(byte)ar5;
      puVar8 = puVar8 + 3;
      iVar5 = 0;
      if (0 < ar7) {
        do {
          uVar3 = *ar6;
          ar6 = ar6 + 1;
          iVar5 = iVar5 + 1;
          *puVar8 = uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | (int)uVar3 >> 8 & 0xff00U |
                    uVar3 >> 0x18;
          puVar8 = puVar8 + 1;
        } while (iVar5 < ar7);
      }
    }
    if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
      iVar5 = 0;
      if (0 < s4) {
        do {
          iVar5 = iVar5 + 1;
          *puVar8 = (uint)*(byte *)((int)s0 + 1) << 0x10 | (uint)*(byte *)((int)s0 + 2) << 8 |
                    (int)(char)*s0 << 0x18 | (uint)*(byte *)((int)s0 + 3);
          puVar8 = puVar8 + 1;
          s0 = s0 + 1;
        } while (iVar5 < s4);
      }
    }
    else {
      iVar5 = 0;
      if (0 < s4) {
        do {
          uVar3 = *s0;
          s0 = s0 + 1;
          iVar5 = iVar5 + 1;
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
        } while (iVar5 < s4);
      }
    }
    *(uint *)(_DAT_8c4727b4 + 0xfd8) = uVar7 + 3;
    *(uint *)(_DAT_8c4727b4 + 0xfdc) = *(int *)(_DAT_8c4727b4 + 0xfdc) + (uVar7 + 3) * 4;
    iVar5 = _DAT_8c4727b4;
    iVar4 = *(int *)(_DAT_8c4727b4 + 0xfe0);
    *(int *)(_DAT_8c4727b4 + 0xfe0) = iVar4 + 1;
    *(int *)(iVar5 + iVar9 + 0x40) = iVar4;
    *(uint *)(_DAT_8c4727b4 + 0xfe0) = *(uint *)(_DAT_8c4727b4 + 0xfe0) & 0x7fffffff;
    if (*(int *)(_DAT_8c4727b4 + 0xfe0) == 0) {
      *(undefined4 *)(_DAT_8c4727b4 + 0xfe0) = 1;
    }
    uVar2 = *(undefined4 *)(_DAT_8c4727b4 + iVar9 + 0x40);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1f4cb8 @ 8c1f4cb8 callers=0 callees=2 */

/* WARNING: Removing unreachable block (ram,0x8c1f4d02) */
/* WARNING: Removing unreachable block (ram,0x8c1f4e2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4cb8(int ar4,undefined4 ar5,uint *ar6,int ar7,uint *s0,int s4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 a5;
  uint *a6;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  a5 = 3;
  uVar4 = ar7 + s4;
  bVar1 = (&DAT_8c26c710)[ar4];
  uVar2 = (int)(char)bVar1 & 0xc0;
  a6 = ar6;
  iVar5 = ar7;
  if (((0 < *(int *)(_DAT_8c4727b4 + 0x10cc)) && (0 < *(int *)(_DAT_8c4727b4 + 0xfd8))) &&
     ((int)uVar2 >> 6 == ((int)(short)((uint)**(undefined4 **)(_DAT_8c4727b4 + 0xfcc) >> 0x10) & 3U)
     )) {
    FUN_8c1f4a00(*(undefined4 *)(_DAT_8c4727b4 + 0x10cc),3,ar6,ar7);
  }
  *(int *)(_DAT_8c4727b4 + 0xfcc) =
       *(int *)(_DAT_8c4727b4 + 0xfcc) + *(int *)(_DAT_8c4727b4 + 0xfd8) * 4;
  puVar6 = *(uint **)(_DAT_8c4727b4 + 0xfcc);
  *puVar6 = ((int)uVar2 >> 6) << 0x10 | uVar4 & 0xff;
  uVar3 = FUN_8c1f59f2(*(undefined4 *)
                        (_DAT_8c4727b4 + 0xfe8 + *(int *)(_DAT_8c4727b4 + 0x10b4) * 0x60 + ar4 * 4),
                       a5,a6,iVar5);
  puVar6[1] = uVar3;
  if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
    puVar6[2] = (uint)(byte)ar5 << 0x18 | (uint)bVar1 << 0x10 | uVar2 << 8 | uVar4 & 0xff;
    puVar6 = puVar6 + 3;
    iVar5 = 0;
    if (0 < ar7) {
      do {
        uVar2 = *ar6;
        ar6 = ar6 + 1;
        iVar5 = iVar5 + 1;
        *puVar6 = uVar2;
        puVar6 = puVar6 + 1;
      } while (iVar5 < ar7);
    }
  }
  else {
    puVar6[2] = uVar2 << 0x10 | (uint)bVar1 << 8 | uVar4 * 0x1000000 | (uint)(byte)ar5;
    puVar6 = puVar6 + 3;
    iVar5 = 0;
    if (0 < ar7) {
      do {
        uVar2 = *ar6;
        ar6 = ar6 + 1;
        iVar5 = iVar5 + 1;
        *puVar6 = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | (int)uVar2 >> 8 & 0xff00U | uVar2 >> 0x18;
        puVar6 = puVar6 + 1;
      } while (iVar5 < ar7);
    }
  }
  if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
    iVar5 = 0;
    if (0 < s4) {
      do {
        iVar5 = iVar5 + 1;
        *puVar6 = (uint)*(byte *)((int)s0 + 1) << 0x10 | (uint)*(byte *)((int)s0 + 2) << 8 |
                  (int)(char)*s0 << 0x18 | (uint)*(byte *)((int)s0 + 3);
        puVar6 = puVar6 + 1;
        s0 = s0 + 1;
      } while (iVar5 < s4);
    }
  }
  else {
    iVar5 = 0;
    if (0 < s4) {
      do {
        uVar2 = *s0;
        s0 = s0 + 1;
        iVar5 = iVar5 + 1;
        *puVar6 = uVar2;
        puVar6 = puVar6 + 1;
      } while (iVar5 < s4);
    }
  }
  *(uint *)(_DAT_8c4727b4 + 0xfd8) = uVar4 + 3;
  *(uint *)(_DAT_8c4727b4 + 0xfdc) = *(int *)(_DAT_8c4727b4 + 0xfdc) + (uVar4 + 3) * 4;
  return 0;
}



/* FUN_8c1f4ec6 @ 8c1f4ec6 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4ec6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_8c1f4f44;
  iVar2 = (int)DAT_8c1f4f3e;
  iVar3 = *DAT_8c1f4f44;
  *(int *)(iVar2 + iVar3) = *(int *)(iVar2 + iVar3) + *(int *)(iVar2 + 0xc + iVar3) * 4;
  **(uint **)(iVar2 + *piVar1) = ar4 << 0x10 | (int)DAT_8c1f4f40;
  *(undefined4 *)(iVar2 + 0xc + *piVar1) = 1;
  *(int *)(iVar2 + 0x10 + *piVar1) = *(int *)(iVar2 + 0x10 + *piVar1) + 4;
  return 0;
}



/* FUN_8c1f4f82 @ 8c1f4f82 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f4f82(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte bVar5;
  byte bStack_3;
  byte abStack_2 [2];
  
  pbVar4 = (byte *)(_DAT_8c4727b4 + 4 + ar4 * 8);
  iVar1 = **(int **)(_DAT_8c4727b4 + 0xfe8 + (1 - *(int *)(_DAT_8c4727b4 + 0x10b4)) * 0x60 +
                    (&DAT_8c26c728)[ar4] * 4);
  if ((iVar1 == -1) || (iVar1 == -0x100)) {
    *(int *)(pbVar4 + 4) = *(int *)(pbVar4 + 4) + 1;
    if (*(uint *)(pbVar4 + 4) <= *(uint *)(_DAT_8c4727b4 + 0x10dc)) {
      return 0;
    }
    bVar5 = 0;
    uVar3 = 0xffffffff;
  }
  else {
    if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
      pbVar2 = &bStack_3;
    }
    else {
      pbVar2 = abStack_2;
    }
    bVar5 = *pbVar2;
    uVar3 = 0;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
  }
  pbVar4[1] = *pbVar4;
  *pbVar4 = bVar5;
  pbVar4[2] = (pbVar4[1] ^ *pbVar4) & *pbVar4;
  pbVar4[3] = (pbVar4[1] ^ *pbVar4) & ~*pbVar4;
  return uVar3;
}



/* FUN_8c1f5048 @ 8c1f5048 callers=0 callees=2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5048(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a5;
  undefined4 uVar2;
  undefined1 *a6;
  
  iVar1 = _DAT_8c4727b4 + 4;
  a6 = (undefined1 *)(_DAT_8c4727b4 + 0x28 + ar4 * 0x2c);
  a5 = _DAT_8c4727b4 + 0x44c + ar4 * 0x78;
  uVar2 = *(undefined4 *)
           (_DAT_8c4727b4 + 0xfe8 + (1 - *(int *)(_DAT_8c4727b4 + 0x10b4)) * 0x60 + ar4 * 4);
  a6[1] = *a6;
  a6[5] = a6[4];
  if (*(int *)(a6 + 0x1c) != 0) {
    *(undefined4 *)(a6 + 0x20) = *(undefined4 *)(a6 + 0x1c);
    *(undefined4 *)(a6 + 0x1c) = 0;
  }
  if (((int)(char)(&DAT_8c26c710)[ar4] & 0x1fU) == 0) {
    uVar2 = FUN_8c1f51ec(ar5,a5,a6,uVar2);
  }
  else {
    uVar2 = FUN_8c1f5290((int)(char)(&DAT_8c26c710)[ar4] & 0x1fU,ar5 * 8 + iVar1,a5,a6);
  }
  if (a6[7] != '\0') {
    *(undefined4 *)(a6 + 0x10) =
         *(undefined4 *)
          (ar4 * 4 + (1 - *(int *)(_DAT_8c4727b4 + 0x10b4)) * 0x60 + _DAT_8c4727b4 + 0xfe8);
  }
  if (a6[0xd] != '\0') {
    a6[0xc] = 0;
    a6[0xd] = 0;
  }
  a6[0xc] = a6[0xc] | a6[2];
  a6[0xc] = a6[0xc] | a6[3];
  return uVar2;
}



/* FUN_8c1f5146 @ 8c1f5146 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5146(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4[7] == '\x01') {
    if (ar4[8] == '\x05') {
      *ar4 = 1;
    }
    else {
      *ar4 = 0;
    }
  }
  else if (((byte)ar4[8] == DAT_8c1f517e) || ((byte)ar4[8] == 0)) {
    *ar4 = 0;
  }
  else {
    *ar4 = 1;
  }
  return 0;
}



/* FUN_8c1f518e @ 8c1f518e callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f518e(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  uVar1 = *ar5;
  uStack_4 = (undefined1)uVar1;
  uStack_3 = (undefined1)((uint)uVar1 >> 8);
  uStack_2 = (undefined1)((uint)uVar1 >> 0x10);
  uStack_1 = (undefined1)((uint)uVar1 >> 0x18);
  if (*(int *)(*DAT_8c1f5288 + (int)DAT_8c1f5280) == 1) {
    *(undefined1 *)(ar4 + 0xb) = uStack_4;
    *(undefined1 *)(ar4 + 10) = uStack_3;
    *(undefined1 *)(ar4 + 9) = uStack_2;
    *(undefined1 *)(ar4 + 8) = uStack_1;
  }
  else {
    *(undefined1 *)(ar4 + 8) = uStack_4;
    *(undefined1 *)(ar4 + 9) = uStack_3;
    *(undefined1 *)(ar4 + 10) = uStack_2;
    *(undefined1 *)(ar4 + 0xb) = uStack_1;
  }
  if (*(byte *)(ar4 + 8) == DAT_8c1f5282) {
    *(undefined4 *)(ar4 + 0x14) = 0xffffffff;
  }
  else if ((short)(ushort)*(byte *)(ar4 + 8) < DAT_8c1f5284) {
    *(undefined4 *)(ar4 + 0x14) = 0;
  }
  else {
    *(undefined4 *)(ar4 + 0x14) = ar5[1];
  }
  return 0;
}



/* FUN_8c1f51ec @ 8c1f51ec callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f51ec(undefined4 ar4,int ar5,uint *ar6,uint *ar7)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint *ar5_00;
  uint *ar6_00;
  uint *ar7_00;
  undefined4 uVar4;
  
  uVar4 = 0;
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c1f518e(ar6,ar7,ar6,ar7);
  ar5_00 = ar7;
  FUN_8c1f5146(ar6,ar7,ar6_00,ar7_00);
  iVar3 = (int)DAT_8c1f5280;
  *(byte *)((int)ar6 + 2) = (*(byte *)((int)ar6 + 1) ^ (byte)*ar6) & (byte)*ar6;
  piVar1 = DAT_8c1f5288;
  *(byte *)((int)ar6 + 3) = (*(byte *)((int)ar6 + 1) ^ (byte)*ar6) & ~(byte)*ar6;
  if (((*(int *)(*piVar1 + iVar3) == 1) && ((byte)ar6[2] != DAT_8c1f5282)) && ((byte)ar6[2] != 0)) {
    ar5_00 = (uint *)((*ar7 & 0xff) + 1);
    (*(code *)PTR_FUN_8c1f528c)(ar7,uVar4);
  }
  if ((byte)*ar6 == 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = 9;
  }
  *(byte *)(ar6 + 1) = bVar2;
  if (*(byte *)((int)ar6 + 2) != 0) {
    *(undefined1 *)(ar5 + 0x10) = 1;
    ar5_00 = ar6;
    FUN_8c1f53c2(ar5,ar6,ar7,ar7_00);
    ar6_00 = ar7;
  }
  if (*(byte *)((int)ar6 + 3) != 0) {
    FUN_8c1f5506(ar5,ar5_00,ar6_00,ar7_00);
  }
  return 0;
}



/* FUN_8c1f51f8 @ 8c1f51f8 callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f51f8(undefined4 ar4,undefined4 ar5,uint *ar6,undefined4 ar7)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint *ar5_00;
  int unaff_r12;
  uint *unaff_r13;
  uint *unaff_r14;
  
  FUN_8c1f518e(ar6,ar7,ar6,ar7);
  ar5_00 = unaff_r13;
  FUN_8c1f5146(unaff_r14,unaff_r13,ar6,ar7);
  iVar3 = (int)DAT_8c1f5280;
  *(byte *)((int)unaff_r14 + 2) =
       (*(byte *)((int)unaff_r14 + 1) ^ (byte)*unaff_r14) & (byte)*unaff_r14;
  piVar1 = DAT_8c1f5288;
  *(byte *)((int)unaff_r14 + 3) =
       (*(byte *)((int)unaff_r14 + 1) ^ (byte)*unaff_r14) & ~(byte)*unaff_r14;
  if (((*(int *)(*piVar1 + iVar3) == 1) && ((byte)unaff_r14[2] != DAT_8c1f5282)) &&
     ((byte)unaff_r14[2] != 0)) {
    ar5_00 = (uint *)((*unaff_r13 & 0xff) + 1);
    (*(code *)PTR_FUN_8c1f528c)(unaff_r13,ar5_00,ar6,ar7);
  }
  if ((byte)*unaff_r14 == 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = 9;
  }
  *(byte *)(unaff_r14 + 1) = bVar2;
  if (*(byte *)((int)unaff_r14 + 2) != 0) {
    *(undefined1 *)(unaff_r12 + 0x10) = 1;
    ar5_00 = unaff_r14;
    FUN_8c1f53c2(unaff_r12,unaff_r14,unaff_r13,ar7);
    ar6 = unaff_r13;
  }
  if (*(byte *)((int)unaff_r14 + 3) != 0) {
    FUN_8c1f5506(unaff_r12,ar5_00,ar6,ar7);
  }
  return 0;
}



/* FUN_8c1f5290 @ 8c1f5290 callers=1 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5290(undefined4 ar4,byte *ar5,int ar6,char *ar7,uint *s0)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *ar5_00;
  uint *ar6_00;
  char *ar7_00;
  
  ar7_00 = ar7;
  FUN_8c1f518e(ar7,s0,ar6,ar7);
  ar7[2] = '\0';
  ar7[3] = '\0';
  ar5_00 = (char *)(uint)(byte)ar4;
  if ((ar5[2] & (byte)ar4) != 0) {
    ar7[4] = '\x01';
    *ar7 = '\0';
    *(int *)(ar7 + 0x24) = *(int *)(ar7 + 0x24) + 1;
  }
  if ((ar5[3] & (byte)ar4) != 0) {
    ar7[4] = '\x04';
    *ar7 = '\0';
    ar7[3] = '\x01';
    ar7[0x24] = '\0';
    ar7[0x25] = '\0';
    ar7[0x26] = '\0';
    ar7[0x27] = '\0';
  }
  piVar1 = DAT_8c1f5354;
  ar6_00 = (uint *)(int)DAT_8c1f5350;
  cVar2 = (char)DAT_8c1f5350;
  if ((*ar5 & (byte)ar4) == 0) {
    ar7[4] = cVar2;
    *ar7 = '\0';
    goto LAB_8c1f535e;
  }
  if (ar7[7] == '\0') {
    cVar2 = *ar7;
joined_r0x8c1f5348:
    if (cVar2 == '\0') goto LAB_8c1f535e;
  }
  else {
    if (ar7[7] != '\x01') {
      if (ar7[7] == '\x04') {
        ar7[3] = '\x01';
        goto LAB_8c1f533a;
      }
      cVar2 = ar7[7];
      goto joined_r0x8c1f5348;
    }
    if (ar7[8] != '\x05') {
      iVar3 = (int)DAT_8c1f5352;
      *(int *)(ar7 + 0x24) = *(int *)(ar7 + 0x24) + 1;
      if (*(uint *)(ar7 + 0x24) <= *(uint *)(iVar3 + *piVar1)) {
        ar7[4] = '\x01';
        goto LAB_8c1f535e;
      }
LAB_8c1f533a:
      *ar7 = '\0';
      ar7[4] = cVar2;
      ar7[0x24] = '\0';
      ar7[0x25] = '\0';
      ar7[0x26] = '\0';
      ar7[0x27] = '\0';
      goto LAB_8c1f535e;
    }
    ar7[2] = '\x01';
    *ar7 = '\x01';
  }
  ar7[4] = '\0';
LAB_8c1f535e:
  if ((((*ar7 != '\0') && (ar7[7] != '\0')) && (*(int *)(*DAT_8c1f5460 + (int)DAT_8c1f545c) == 1))
     && ((*s0 != 0xffffffff && (*s0 != (int)DAT_8c1f545e)))) {
    ar5_00 = (char *)((*s0 & 0xff) + 1);
    (*(code *)PTR_FUN_8c1f5464)(s0,ar5_00,ar6_00,ar7_00);
  }
  if (ar7[2] != '\0') {
    *(undefined1 *)(ar6 + 0x10) = 0;
    ar5_00 = ar7;
    FUN_8c1f53c2(ar6,ar7,s0,ar7_00);
    ar6_00 = s0;
  }
  if (ar7[3] != '\0') {
    *(undefined1 *)(ar6 + 0x10) = 0;
    FUN_8c1f5506(ar6,ar5_00,ar6_00,ar7_00);
  }
  return 0;
}



/* FUN_8c1f53c2 @ 8c1f53c2 callers=2 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f53c2(uint *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint *puVar5;
  
  puVar3 = (undefined1 *)(ar6 + 8);
  *ar4 = (uint)*(byte *)(ar6 + 5) << 0x10 | (uint)*(byte *)(ar6 + 6) << 8 |
         (uint)*(byte *)(ar6 + 4) << 0x18 | (uint)*(byte *)(ar6 + 7);
  for (puVar5 = ar4 + 1; puVar5 < ar4 + 2; puVar5 = (uint *)((int)puVar5 + 1)) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)puVar5 = uVar1;
  }
  for (puVar5 = ar4 + 2; puVar5 < ar4 + 3; puVar5 = (uint *)((int)puVar5 + 1)) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)puVar5 = uVar1;
  }
  for (puVar5 = ar4 + 3; puVar5 < ar4 + 4; puVar5 = (uint *)((int)puVar5 + 1)) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)puVar5 = uVar1;
  }
  pbVar4 = puVar3 + 1;
  *(undefined1 *)((int)ar4 + 0x11) = *puVar3;
  if ((char)ar4[4] == '\0') {
    *(undefined *)((int)ar4 + 0x12) = (&DAT_8c273a00)[*pbVar4 & 0xf];
    *(undefined1 *)((int)ar4 + 0x13) = 0;
  }
  else {
    *(byte *)((int)ar4 + 0x12) = *pbVar4 & 3;
    *(byte *)((int)ar4 + 0x13) = *pbVar4 >> 2 & 3;
  }
  if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
    for (puVar5 = ar4 + 5; puVar5 < (uint *)((int)ar4 + 0x33); puVar5 = (uint *)((int)puVar5 + 1)) {
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      *(byte *)puVar5 = bVar2;
    }
  }
  else {
    for (puVar5 = ar4 + 5; pbVar4 = pbVar4 + 1, puVar5 < (uint *)((int)ar4 + 0x32);
        puVar5 = (uint *)((int)puVar5 + 1)) {
      *(byte *)puVar5 = *pbVar4;
    }
    *(undefined1 *)((int)ar4 + 0x32) = 0;
  }
  *(undefined1 *)((int)ar4 + 0x33) = 0;
  for (puVar5 = ar4 + 0xd; puVar5 < ar4 + 0x1c; puVar5 = (uint *)((int)puVar5 + 1)) {
    bVar2 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    *(byte *)puVar5 = bVar2;
  }
  *(undefined1 *)(ar4 + 0x1c) = 0;
  *(undefined2 *)(ar4 + 0x1d) = *(undefined2 *)pbVar4;
  *(undefined2 *)((int)ar4 + 0x76) = *(undefined2 *)(pbVar4 + 2);
  return 0;
}



/* FUN_8c1f5506 @ 8c1f5506 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5506(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  FUN_8c1f59dc(ar4,0,0x1e,ar7);
  *(undefined1 *)(ar4 + 0x14) = 0x28;
  *(undefined1 *)(ar4 + 0x15) = 0x6e;
  *(undefined1 *)(ar4 + 0x16) = 0x6f;
  *(undefined1 *)(ar4 + 0x17) = 0x6e;
  *(undefined1 *)(ar4 + 0x18) = 0x65;
  puVar1 = (undefined1 *)(ar4 + 0x1a);
  *(undefined1 *)(ar4 + 0x19) = 0x29;
  do {
    *puVar1 = 0x20;
    puVar1 = puVar1 + 1;
  } while (puVar1 < (undefined1 *)(ar4 + 0x33));
  *(undefined1 *)(ar4 + 0x33) = 0;
  return 0;
}



/* FUN_8c1f550a @ 8c1f550a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f550a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  FUN_8c1f59dc(ar4,0,ar6,ar7);
  *(undefined1 *)(ar4 + 0x14) = 0x28;
  *(undefined1 *)(ar4 + 0x15) = 0x6e;
  *(undefined1 *)(ar4 + 0x16) = 0x6f;
  *(undefined1 *)(ar4 + 0x17) = 0x6e;
  *(undefined1 *)(ar4 + 0x18) = 0x65;
  puVar1 = (undefined1 *)(ar4 + 0x1a);
  *(undefined1 *)(ar4 + 0x19) = 0x29;
  do {
    *puVar1 = 0x20;
    puVar1 = puVar1 + 1;
  } while (puVar1 < (undefined1 *)(ar4 + 0x33));
  *(undefined1 *)(ar4 + 0x33) = 0;
  return 0;
}



/* FUN_8c1f5556 @ 8c1f5556 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5556(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *PTR_DAT_8c1f5a28;
  *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5582(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f5558 @ 8c1f5558 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f5558(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5582(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* FUN_8c1f5582 @ 8c1f5582 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5582(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = ar5;
  uVar1 = FUN_8c1f4a44(ar4,9,auStack_8,1);
  return uVar1;
}



/* FUN_8c1f55b8 @ 8c1f55b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f55b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *PTR_DAT_8c1f5a28;
  *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f55e4(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f55ba @ 8c1f55ba callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f55ba(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f55e4(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* FUN_8c1f55e4 @ 8c1f55e4 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f55e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f4a44(ar4,1,0,0);
  return uVar1;
}



/* FUN_8c1f55fc @ 8c1f55fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f55fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *PTR_DAT_8c1f5a28;
  *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5628(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f55fe @ 8c1f55fe callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f55fe(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5628(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* FUN_8c1f5628 @ 8c1f5628 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5628(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f4a44(ar4,4,0,0);
  return uVar1;
}



/* FUN_8c1f5640 @ 8c1f5640 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5640(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *PTR_DAT_8c1f5a28;
  *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f566c(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f5642 @ 8c1f5642 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f5642(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f566c(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* FUN_8c1f566c @ 8c1f566c callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f566c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f4a44(ar4,3,0,0);
  return uVar1;
}



/* FUN_8c1f5684 @ 8c1f5684 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5684(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *PTR_DAT_8c1f5a28;
  *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f56b0(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f5686 @ 8c1f5686 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f5686(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f56b0(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* FUN_8c1f56b0 @ 8c1f56b0 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f56b0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f4a44(ar4,2,0,0);
  return uVar1;
}



/* FUN_8c1f56c8 @ 8c1f56c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f56c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *PTR_DAT_8c1f5a28;
  *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f56f4(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f56ca @ 8c1f56ca callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f56ca(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f56f4(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* FUN_8c1f56f4 @ 8c1f56f4 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f56f4(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = ar6 << 0x18;
  uStack_10 = ar5;
  uVar1 = FUN_8c1f4a44(ar4,10,&uStack_10,2);
  return uVar1;
}



/* FUN_8c1f571a @ 8c1f571a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f571a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  undefined4 in_stack_00000000;
  
  bVar1 = *PTR_DAT_8c1f5a28;
  *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f574c(ar4,ar5,ar6,ar7,in_stack_00000000);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f571c @ 8c1f571c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f571c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f574c(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* FUN_8c1f574c @ 8c1f574c callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f574c(undefined4 ar4,undefined4 ar5,int ar6,int ar7,uint s0)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = ar6 << 0x18 | ar7 << 0x10 | s0;
  uStack_10 = ar5;
  uVar1 = FUN_8c1f4a44(ar4,0xb,&uStack_10,2);
  return uVar1;
}



/* FUN_8c1f577a @ 8c1f577a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f577a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  undefined4 in_stack_00000000;
  
  bVar1 = *PTR_DAT_8c1f5a28;
  *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f57b4(ar4,ar5,ar6,ar7,in_stack_00000000);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f577c @ 8c1f577c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f577c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f57b4(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* FUN_8c1f57b4 @ 8c1f57b4 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f57b4(undefined4 ar4,undefined4 ar5,int ar6,int ar7,uint s0)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = ar6 << 0x18 | ar7 << 0x10 | s0;
  uStack_10 = ar5;
  uVar1 = FUN_8c1f4a44(ar4,0xc,&uStack_10,2);
  return uVar1;
}



/* FUN_8c1f57e4 @ 8c1f57e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f57e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  undefined4 in_stack_00000000;
  
  bVar1 = *PTR_DAT_8c1f5a28;
  *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5816(ar4,ar5,ar6,ar7,in_stack_00000000);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f57e6 @ 8c1f57e6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f57e6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5816(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* FUN_8c1f5816 @ 8c1f5816 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5816(undefined4 ar4,undefined4 ar5,int ar6,int ar7,uint s0)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = ar6 << 0x18 | ar7 << 0x10 | s0;
  uStack_10 = ar5;
  uVar1 = FUN_8c1f4a44(ar4,0xd,&uStack_10,2);
  return uVar1;
}



/* FUN_8c1f5850 @ 8c1f5850 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5850(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *PTR_DAT_8c1f5a28;
  *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f587c(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f5852 @ 8c1f5852 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f5852(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f587c(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* FUN_8c1f587c @ 8c1f587c callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f587c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f4a44(ar4,(int)DAT_8c1f5960,0,0);
  return uVar1;
}



/* FUN_8c1f5894 @ 8c1f5894 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5894(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *PTR_DAT_8c1f5a28;
  *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f58c0(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f5896 @ 8c1f5896 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f5896(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f58c0(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* FUN_8c1f58c0 @ 8c1f58c0 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f58c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = 0x20;
  uStack_8 = ar5;
  uVar1 = FUN_8c1f4a44(ar4,0x10,&uStack_c,1);
  return uVar1;
}



/* FUN_8c1f58e4 @ 8c1f58e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f58e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *PTR_DAT_8c1f5a28;
  *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5910(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f58e6 @ 8c1f58e6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f58e6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5910(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* FUN_8c1f5910 @ 8c1f5910 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5910(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = 0x10;
  uStack_8 = ar5;
  uVar1 = FUN_8c1f4a44(ar4,0xf,&uStack_c,1);
  return uVar1;
}



/* FUN_8c1f5934 @ 8c1f5934 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5934(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *PTR_DAT_8c1f5a28;
  *PTR_DAT_8c1f5a28 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5970(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f5936 @ 8c1f5936 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f5936(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5970(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* FUN_8c1f5970 @ 8c1f5970 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5970(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = ar5;
  uStack_c = ar6;
  uStack_8 = ar7;
  uVar1 = FUN_8c1f4a44(ar4,0xe,&uStack_10,1);
  return uVar1;
}



/* thunk_FUN_8c1f4ec6 @ 8c1f5994 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c1f4ec6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f4ec6(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* s_FATAL_ERROR_Cannot_get_semap_1f599e @ 8c1f599e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_FATAL_ERROR_Cannot_get_semap_1f599e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f59c8(ar4,ar5,ar6,ar7);
  *PTR_DAT_8c1f5a28 = 0;
  return uVar2;
}



/* FUN_8c1f59c8 @ 8c1f59c8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f59c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  **(uint **)((int)DAT_8c1f5a08 + *DAT_8c1f5a18) =
       **(uint **)((int)DAT_8c1f5a08 + *DAT_8c1f5a18) | DAT_8c1f5a1c;
  return 0;
}



/* FUN_8c1f59dc @ 8c1f59dc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f59dc(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < ar6) {
    do {
      iVar1 = iVar1 + 1;
      *ar4 = ar5;
      ar4 = ar4 + 1;
    } while (iVar1 < ar6);
  }
  return ar6;
}



/* FUN_8c1f59f2 @ 8c1f59f2 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f59f2(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c1f5a20 & ar4;
}



/* FUN_8c1f59fc @ 8c1f59fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f59fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)DAT_8c1f5a0a;
  *(undefined4 *)(iVar1 + *DAT_8c1f5a18) = DAT_8c1f5a24;
  return iVar1;
}



/* FUN_8c1f5a30 @ 8c1f5a30 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f5a30(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
  
  uVar1 = (uint)DAT_8c1f5b5a;
  *ar4 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         uVar1 | 0xf0;
}



/* FUN_8c1f5a48 @ 8c1f5a48 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f5a48(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
         (int)DAT_8c1f5b5a;
}



/* FUN_8c1f5a5e @ 8c1f5a5e callers=6 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c1f5a5e(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (_DAT_8c00fff0 == 0) {
    FUN_8c1f5b1a(0x8c00fc00,0x78,ar6,ar7,ar4);
  }
  iVar1 = _DAT_8c00fff0;
  *ar4 = _DAT_8c00fff4;
  return iVar1;
}



/* FUN_8c1f5a86 @ 8c1f5a86 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5a86(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_8 [8];
  
  piVar1 = (int *)FUN_8c1f5a5e(auStack_8,ar5,ar6,ar7);
  iVar2 = 0;
  while( true ) {
    if (*piVar1 <= iVar2) {
      return 0xfffffffd;
    }
    if (ar4 == piVar1[iVar2 * 2 + 2]) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



/* FUN_8c1f5ac6 @ 8c1f5ac6 callers=3 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5ac6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_18 [8];
  
  piVar2 = (int *)FUN_8c1f5a5e(auStack_18,ar5,ar6,ar7);
  puVar1 = PTR_FUN_8c1f5b68;
  iVar4 = 0;
  while( true ) {
    if (*piVar2 <= iVar4) {
      return 0xfffffffe;
    }
    iVar3 = (*(code *)puVar1)(ar4,piVar2[iVar4 * 2 + 2] + 0x10,0x10,ar7);
    if (iVar3 == 0) break;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}



/* FUN_8c1f5b1a @ 8c1f5b1a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5b1a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 in_r0;
  
  puVar1 = DAT_8c1f5b64;
  *DAT_8c1f5b5c = ar4;
  *puVar1 = ar5;
  return in_r0;
}



/* FUN_8c1f5b28 @ 8c1f5b28 callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5b28(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  int iStack_c;
  
  uStack_10 = ar4;
  FUN_8c1f5a30(auStack_18,ar5,ar6,ar7);
  iStack_c = FUN_8c1f5a5e(auStack_14,ar5,ar6,ar7);
  iVar1 = FUN_8c1f5ac6(uStack_10,ar5,ar6,ar7);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    ar5 = (undefined4 *)(iStack_c + 8 + iVar1 * 8);
    uVar2 = *ar5;
    ar5[1] = ar5[1] + 1;
  }
  FUN_8c1f5a48(auStack_18,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c1f5b7c @ 8c1f5b7c callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5b7c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  int iStack_8;
  
  uStack_c = ar4;
  FUN_8c1f5a30(auStack_14,ar5,ar6,ar7);
  iStack_8 = FUN_8c1f5a5e(auStack_10,ar5,ar6,ar7);
  iVar1 = FUN_8c1f5ac6(uStack_c,ar5,ar6,ar7);
  if (-1 < iVar1) {
    iVar1 = iVar1 * 8 + iStack_8 + 8;
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
  }
  uVar2 = FUN_8c1f5a48(auStack_14,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c1f5bb4 @ 8c1f5bb4 callers=1 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5bb4(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_14 [4];
  int iStack_10;
  undefined1 auStack_c [8];
  
  iStack_10 = ar4;
  FUN_8c1f5a30(auStack_14,ar5,ar6,ar7);
  piVar1 = (int *)FUN_8c1f5a5e(auStack_c,ar5,ar6,ar7);
  iVar2 = FUN_8c1f5ac6(iStack_10 + 0x10,ar5,ar6,ar7);
  if (iVar2 < 0) {
    iVar2 = *piVar1;
    piVar1[iVar2 * 2 + 2] = iStack_10;
    ar5 = piVar1 + iVar2 * 2 + 2;
    ar5[1] = 0;
    *piVar1 = *piVar1 + 1;
  }
  FUN_8c1f5a48(auStack_14,ar5,ar6,ar7);
  return 0;
}



/* FUN_8c1f5c04 @ 8c1f5c04 callers=1 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5c04(undefined4 ar4,undefined4 ar5,int *ar6,int *ar7)

{
  int iVar1;
  int *piVar2;
  int a5;
  undefined4 uVar3;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  uStack_c = ar4;
  FUN_8c1f5a30(auStack_14,ar5,ar6,ar7);
  piVar2 = (int *)FUN_8c1f5a5e(auStack_10,ar5,ar6,ar7);
  a5 = FUN_8c1f5a86(uStack_c,ar5,ar6,ar7);
  if (a5 < 0) {
    uVar3 = 0xfffffffe;
  }
  else {
    *piVar2 = *piVar2 + -1;
    for (; a5 < *piVar2; a5 = a5 + 1) {
      ar7 = piVar2 + 2;
      piVar2[a5 * 2 + 2] = piVar2[(a5 + 1) * 2 + 2];
      ar7[a5 * 2 + 1] = ar7[(a5 + 1) * 2 + 1];
    }
    iVar1 = a5 * 2;
    ar6 = piVar2 + a5 * 2 + 2;
    a5 = 0;
    piVar2[iVar1 + 2] = 0;
    ar6[1] = 0;
    uVar3 = 0;
  }
  FUN_8c1f5a48(auStack_14,a5,ar6,ar7);
  return uVar3;
}



/* FUN_8c1f5c9e @ 8c1f5c9e callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5c9e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *ar5_00;
  int ar4_00;
  
  iVar1 = FUN_8c013ec0(ar4 + 0x30,s_Lib_Handle_StartLib_Handle_End_o_8c26c744,0x10,ar7);
  if (iVar1 == 0) {
    iVar1 = 1;
    while( true ) {
      ar5_00 = s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10;
      ar4_00 = iVar1 * 0x20 + ar4 + 0x20;
      uVar2 = 0x10;
      iVar3 = FUN_8c013ec0(ar4_00 + 0x10,s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10,0x10,ar7
                          );
      if (iVar3 == 0) break;
      FUN_8c1f5bb4(ar4_00,ar5_00,uVar2,ar7);
      iVar1 = iVar1 + 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* s_Lib_Handle_StartLib_Handle_E_1f5cac @ 8c1f5cac callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_Lib_Handle_StartLib_Handle_E_1f5cac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *a5;
  int unaff_r10;
  int a4;
  
  iVar1 = FUN_8c013ec0(ar4 + 0x30,s_Lib_Handle_StartLib_Handle_End_o_8c26c744,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = 1;
    while( true ) {
      a5 = s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10;
      a4 = iVar1 * 0x20 + unaff_r10 + 0x20;
      uVar2 = 0x10;
      iVar3 = FUN_8c013ec0(a4 + 0x10,s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10,0x10,ar7);
      if (iVar3 == 0) break;
      FUN_8c1f5bb4(a4,a5,uVar2,ar7);
      iVar1 = iVar1 + 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1f5cf6 @ 8c1f5cf6 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5cf6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *ar5_00;
  int ar4_00;
  
  iVar1 = FUN_8c013ec0(ar4 + 0x30,s_Lib_Handle_StartLib_Handle_End_o_8c26c744,0x10,ar7);
  if (iVar1 == 0) {
    iVar1 = 1;
    while( true ) {
      ar5_00 = s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10;
      ar4_00 = iVar1 * 0x20 + ar4 + 0x20;
      uVar2 = 0x10;
      iVar3 = FUN_8c013ec0(ar4_00 + 0x10,s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10,0x10,ar7
                          );
      if (iVar3 == 0) break;
      FUN_8c1f5c04(ar4_00,ar5_00,uVar2,ar7);
      iVar1 = iVar1 + 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* s_Lib_Handle_StartLib_Handle_E_1f5d04 @ 8c1f5d04 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
s_Lib_Handle_StartLib_Handle_E_1f5d04(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *a5;
  int unaff_r10;
  int a4;
  
  iVar1 = FUN_8c013ec0(ar4 + 0x30,s_Lib_Handle_StartLib_Handle_End_o_8c26c744,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = 1;
    while( true ) {
      a5 = s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10;
      a4 = iVar1 * 0x20 + unaff_r10 + 0x20;
      uVar2 = 0x10;
      iVar3 = FUN_8c013ec0(a4 + 0x10,s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10,0x10,ar7);
      if (iVar3 == 0) break;
      FUN_8c1f5c04(a4,a5,uVar2,ar7);
      iVar1 = iVar1 + 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1f5d6c @ 8c1f5d6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5d6c(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined4 uStack_c;
  
  uStack_c = ar4;
  iVar1 = (*(code *)PTR_FUN_8c1f5dc8)(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  uStack_10 = *ar5;
  uStack_f = ar5[1];
  uStack_e = ar5[2];
  uStack_d = ar5[3];
  iVar1 = (*(code *)PTR_FUN_8c1f5dcc)(uStack_c,8,&uStack_10,1);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return 0;
}



/* FUN_8c1f5dd0 @ 8c1f5dd0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c1f5dd0(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int ar4_00;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int ar5_00;
  int ar6_00;
  int a4;
  int ar4_01;
  
  ar4_00 = DAT_8c1f5e84;
  puVar3 = DAT_8c1f5e7c;
  puVar2 = DAT_8c1f5e78;
  ar5_00 = 0;
  *DAT_8c1f5e74 = ar4;
  puVar4 = DAT_8c1f5e80;
  *puVar2 = 0;
  puVar5 = PTR_memset_8c1f5e88;
  ar6_00 = (int)DAT_8c1f5e6e;
  *puVar3 = 1;
  *puVar4 = 0;
  (*(code *)puVar5)(ar4_00,0,ar6_00,ar7);
  if ((ar6 != 0) && (ar5 != 0)) {
    *DAT_8c1f5e78 = 1;
    (*(code *)PTR_FUN_8c1f5e8c)(ar5,ar6,ar6_00,ar7);
    ar5_00 = ar6;
  }
  iVar6 = DAT_8c1f5e90;
  ar4_01 = 0;
  do {
    a4 = ar4_01 * 0x34 + ar4_00;
    uVar7 = (*(code *)PTR_FUN_8c1f5e94)(ar4_01,ar5_00,ar6_00,ar7);
    *(undefined4 *)(a4 + 0x30) = uVar7;
    s_no_device_1f5f4e(a4,ar5_00,ar6_00,ar7);
    *(undefined4 *)(ar4_01 * 4 + iVar6) = 0;
    *(undefined1 *)(DAT_8c1f5e98 + ar4_01) = 0;
    *(undefined1 *)(DAT_8c1f5e9c + ar4_01) = 0;
    puVar8 = DAT_8c1f5ea4;
    uVar1 = DAT_8c1f5e72;
    ar4_01 = ar4_01 + 1;
  } while (ar4_01 < 0x18);
  *DAT_8c1f5ea0 = (char)DAT_8c1f5e70;
  *puVar8 = (char)uVar1;
  return puVar8;
}



/* FUN_8c1f5ea8 @ 8c1f5ea8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c1f5ea8(undefined4 ar4,undefined4 ar5,int ar6,int ar7,int s0)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int ar4_00;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int ar5_00;
  int ar6_00;
  int ar7_00;
  int a4;
  int ar4_01;
  
  ar4_00 = DAT_8c1f5fd8;
  puVar3 = DAT_8c1f5fd0;
  puVar2 = DAT_8c1f5fcc;
  ar5_00 = 0;
  ar6_00 = (int)DAT_8c1f5fc2;
  *DAT_8c1f5fc8 = ar4;
  *puVar2 = 0;
  puVar4 = PTR_memset_8c1f5fdc;
  puVar2 = DAT_8c1f5fd4;
  *puVar3 = 1;
  *puVar2 = 0;
  ar7_00 = ar7;
  (*(code *)puVar4)(ar4_00,0,ar6_00,ar7);
  if ((ar7 != 0) && (ar6 != 0)) {
    *DAT_8c1f5fcc = 1;
    (*(code *)PTR_FUN_8c1f5fe0)(ar5,ar6,ar7,s0);
    ar5_00 = ar6;
    ar6_00 = ar7;
    ar7_00 = s0;
  }
  iVar5 = DAT_8c1f5fe4;
  ar4_01 = 0;
  do {
    a4 = ar4_01 * 0x34 + ar4_00;
    uVar6 = (*(code *)PTR_FUN_8c1f5fe8)(ar4_01,ar5_00,ar6_00,ar7_00);
    *(undefined4 *)(a4 + 0x30) = uVar6;
    s_no_device_1f5f4e(a4,ar5_00,ar6_00,ar7_00);
    *(undefined4 *)(DAT_8c1f5fec + ar4_01 * 4) = 0;
    *(undefined1 *)(ar4_01 + iVar5) = 0;
    *(undefined1 *)(DAT_8c1f5ff0 + ar4_01) = 0;
    puVar7 = DAT_8c1f5ff8;
    uVar1 = DAT_8c1f5fc6;
    ar4_01 = ar4_01 + 1;
  } while (ar4_01 < 0x18);
  *DAT_8c1f5ff4 = (char)DAT_8c1f5fc4;
  *puVar7 = (char)uVar1;
  return puVar7;
}



/* s_no_device_1f5f4e @ 8c1f5f4e callers=4 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_no_device_1f5f4e(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  if (_DAT_8c472d04 == 0) {
    ar4[2] = 0;
    ar4[3] = 0xffffffff;
    ar4[4] = 0;
    ar4[5] = 0;
  }
  else {
    ar4[2] = 0xffffffff;
    ar4[3] = 0;
    ar4[4] = 0xffffffff;
    ar4[5] = 0xffffffff;
  }
  *(undefined2 *)(ar4 + 6) = 0;
  *(undefined2 *)((int)ar4 + 0x1a) = 0;
  *(undefined2 *)((int)ar4 + 0x22) = 0;
  *(undefined2 *)(ar4 + 8) = 0;
  *(undefined2 *)((int)ar4 + 0x1e) = 0;
  *(undefined2 *)(ar4 + 7) = 0;
  ar4[10] = 0;
  ar4[9] = s__no_device__8c26c7c4;
  return 0;
}



/* FUN_8c1f5f8c @ 8c1f5f8c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f5f8c(int ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  
  iVar5 = *(int *)(ar5 + 8);
  pbVar8 = (byte *)(iVar5 + 0xb);
  uVar6 = *(ushort *)(iVar5 + 8) | DAT_8c1f6000;
  pcVar9 = (char *)(DAT_8c1f5fe4 + ar6);
  if (*pbVar8 < *DAT_8c1f5ff4) {
    if (*DAT_8c1f60f0 < *pbVar8) {
      if (*pcVar9 != '\0') {
        uVar6 = uVar6 & DAT_8c1f60f8;
      }
    }
    else {
      uVar6 = uVar6 | DAT_8c1f60f4;
      *pcVar9 = '\0';
    }
  }
  else {
    uVar6 = uVar6 & DAT_8c1f6004;
    *pcVar9 = '\x01';
  }
  pbVar7 = (byte *)(iVar5 + 10);
  if (*pbVar7 < *DAT_8c1f6100) {
    if (*DAT_8c1f60f0 < *pbVar7) {
      if (*(char *)(DAT_8c1f60fc + ar6) != '\0') {
        uVar6 = uVar6 & DAT_8c1f6104;
      }
      goto LAB_8c1f605e;
    }
    cVar4 = '\0';
    uVar6 = uVar6 | DAT_8c1f6108;
  }
  else {
    uVar6 = uVar6 & DAT_8c1f6104;
    cVar4 = '\x01';
  }
  *(char *)(DAT_8c1f60fc + ar6) = cVar4;
LAB_8c1f605e:
  uVar1 = DAT_8c1f6108;
  if (*DAT_8c1f610c == 0) {
    uVar6 = uVar6 ^ 0xffffffff;
  }
  *(uint *)(ar4 + 8) = uVar6;
  if ((*(uint *)(ar4 + 4) & uVar1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ushort)*pbVar7;
  }
  *(ushort *)(ar4 + 0x18) = uVar2;
  if ((*(uint *)(ar4 + 4) & DAT_8c1f60f4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ushort)*pbVar8;
  }
  *(ushort *)(ar4 + 0x1a) = uVar2;
  if ((*(uint *)(ar4 + 4) & DAT_8c1f6110) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(iVar5 + 0xc) - 0x80;
  }
  *(short *)(ar4 + 0x1c) = sVar3;
  uVar6 = DAT_8c1f6118;
  if ((*(uint *)(ar4 + 4) & DAT_8c1f6114) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(iVar5 + 0xd) - 0x80;
  }
  *(short *)(ar4 + 0x1e) = sVar3;
  uVar1 = DAT_8c1f611c;
  if ((*(uint *)(ar4 + 4) & uVar6) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(iVar5 + 0xe) - 0x80;
  }
  *(short *)(ar4 + 0x20) = sVar3;
  if ((*(uint *)(ar4 + 4) & uVar1) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(iVar5 + 0xf) - 0x80;
  }
  *(short *)(ar4 + 0x22) = sVar3;
  return 0x22;
}



/* FUN_8c1f6120 @ 8c1f6120 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f6120(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = ar4 >> 10 & DAT_8c1f61d8;
  if ((DAT_8c1f61dc & ar4) != 0) {
    uVar1 = uVar1 | (int)DAT_8c1f61d2;
  }
  if ((ar4 & DAT_8c1f61e0) != 0) {
    uVar1 = uVar1 | 0xf;
  }
  return uVar1;
}



/* FUN_8c1f6142 @ 8c1f6142 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1f6142(undefined4 *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint *ar5_00;
  undefined4 auStack_10 [2];
  
  ar5_00 = ar5;
  if (((*ar5 & 1) == 0) || (iVar1 = (*(code *)PTR_FUN_8c1f61e4)(auStack_10,ar5,ar6,ar7), -1 < iVar1)
     ) {
    iVar1 = (*(code *)PTR_FUN_8c1f61e8)(5,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = FUN_8c1f6120(auStack_10[0],ar5_00,ar6,ar7);
      ar4[1] = iVar1;
    }
    else {
      ar4[1] = auStack_10[0];
    }
    *ar4 = ar4[1];
    ar4[9] = ar5 + 5;
  }
  else {
    ar4[1] = 0;
    *ar4 = 0;
  }
  return iVar1;
}



/* FUN_8c1f6192 @ 8c1f6192 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f6192(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ushort uVar1;
  
  uVar1 = (ushort)*(byte *)(ar6 + 4);
  if (uVar1 == DAT_8c1f61d4) {
    return DAT_8c1f61ec;
  }
  if ((((uVar1 != DAT_8c1f61d6) && (uVar1 != 8)) && (uVar1 != 5)) && ((uVar1 != 6 && (uVar1 != 0))))
  {
    return DAT_8c1f61f0;
  }
  return 0;
}



/* FUN_8c1f61c6 @ 8c1f61c6 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f61c6(undefined4 ar4,uint *ar5,int ar6,undefined4 ar7,undefined4 ain0)

{
  int ar6_00;
  uint *ar5_00;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int ar4_00;
  int ar4_01;
  int iVar4;
  
  if (DAT_8c26c7c0 == 0) {
    return ain0;
  }
  ar4_00 = 0;
  do {
    ar6_00 = FUN_8c1efd14(ar4_00,ar5,ar6,ar7);
    ar5_00 = (uint *)FUN_8c1efd26(ar4_00,ar5,ar6,ar7);
    iVar4 = ar4_00 * 0x34;
    ar4_01 = iVar4 + -0x73b8d83c;
    *(uint **)(iVar4 + -0x73b8d80c) = ar5_00;
    *(undefined4 *)(iVar4 + -0x73b8d810) = *(undefined4 *)(iVar4 + -0x73b8d834);
    ar5 = ar5_00;
    ar6 = ar6_00;
    uVar1 = FUN_8c1f6192(ar4_01,ar5_00,ar6_00,ar7);
    *(undefined4 *)(&DAT_8c472ca4 + ar4_00 * 4) = uVar1;
    iVar2 = libgcc_divide_helper_010614(ar4_00,6);
    if (iVar2 == 0) {
      if ((((*ar5_00 & 0x21) == 0) || (*(char *)(ar6_00 + 2) != '\0')) ||
         (*(char *)(ar6_00 + 4) != '\b')) {
        iVar2 = s_no_device_1f5f4e(ar4_01,ar5,ar6,ar7);
      }
      else {
        FUN_8c1f6142(ar4_01,ar5_00,ar6,ar7);
        ar6 = ar4_00;
        iVar2 = FUN_8c1f5f8c(ar4_01,ar6_00,ar4_00,ar7);
      }
      *(uint *)(iVar4 + -0x73b8d830) = ~*(uint *)(iVar4 + -0x73b8d834);
      if (_DAT_8c472d04 == 0) {
        uVar3 = *(uint *)(iVar4 + -0x73b8d810) ^ *(uint *)(iVar4 + -0x73b8d834);
        ar5 = (uint *)(*(uint *)(iVar4 + -0x73b8d834) & uVar3);
        *(uint **)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 & *(uint *)(iVar4 + -0x73b8d830);
      }
      else {
        uVar3 = *(uint *)(iVar4 + -0x73b8d810) ^ *(uint *)(iVar4 + -0x73b8d834) ^ 0xffffffff;
        ar5 = (uint *)(*(uint *)(iVar4 + -0x73b8d834) | uVar3);
        *(uint **)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 | *(uint *)(iVar4 + -0x73b8d830);
      }
      *(uint *)(iVar4 + -0x73b8d828) = uVar3;
    }
    else {
      *(uint **)(iVar4 + -0x73b8d818) = ar5_00 + 5;
    }
    ar4_00 = ar4_00 + 1;
  } while (ar4_00 < 0x18);
  return iVar2;
}



/* FUN_8c1f620e @ 8c1f620e callers=0 callees=4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c1f620e(undefined4 ar4,uint *ar5,int ar6,undefined4 ar7)

{
  int a6;
  uint *a5;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  int unaff_r13;
  int a4;
  int iVar4;
  
  do {
    a6 = FUN_8c1efd14(unaff_r13,ar5,ar6,ar7);
    a5 = (uint *)FUN_8c1efd26(unaff_r13,ar5,ar6,ar7);
    iVar4 = unaff_r13 * 0x34;
    a4 = iVar4 + -0x73b8d83c;
    *(uint **)(iVar4 + -0x73b8d80c) = a5;
    *(undefined4 *)(iVar4 + -0x73b8d810) = *(undefined4 *)(iVar4 + -0x73b8d834);
    ar5 = a5;
    ar6 = a6;
    uVar1 = FUN_8c1f6192(a4,a5,a6,ar7);
    *(undefined4 *)(&DAT_8c472ca4 + unaff_r13 * 4) = uVar1;
    iVar2 = libgcc_divide_helper_010614(unaff_r13,unaff_r9);
    if (iVar2 == 0) {
      if ((((*a5 & 0x21) == 0) || (*(char *)(a6 + 2) != '\0')) || (*(char *)(a6 + 4) != '\b')) {
        iVar2 = s_no_device_1f5f4e(a4,ar5,ar6,ar7);
      }
      else {
        FUN_8c1f6142(a4,a5,ar6,ar7);
        ar6 = unaff_r13;
        iVar2 = FUN_8c1f5f8c(a4,a6,unaff_r13,ar7);
      }
      *(uint *)(iVar4 + -0x73b8d830) = ~*(uint *)(iVar4 + -0x73b8d834);
      if (_DAT_8c472d04 == 0) {
        uVar3 = *(uint *)(iVar4 + -0x73b8d810) ^ *(uint *)(iVar4 + -0x73b8d834);
        ar5 = (uint *)(*(uint *)(iVar4 + -0x73b8d834) & uVar3);
        *(uint **)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 & *(uint *)(iVar4 + -0x73b8d830);
      }
      else {
        uVar3 = *(uint *)(iVar4 + -0x73b8d810) ^ *(uint *)(iVar4 + -0x73b8d834) ^ unaff_r8;
        ar5 = (uint *)(*(uint *)(iVar4 + -0x73b8d834) | uVar3);
        *(uint **)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 | *(uint *)(iVar4 + -0x73b8d830);
      }
      *(uint *)(iVar4 + -0x73b8d828) = uVar3;
    }
    else {
      *(uint **)(iVar4 + -0x73b8d818) = a5 + 5;
    }
    unaff_r13 = unaff_r13 + 1;
  } while (unaff_r13 < unaff_r10);
  return iVar2;
}



/* FUN_8c1f62cc @ 8c1f62cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f62cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 * 0x34 + DAT_8c1f62e0;
}



/* FUN_8c1f62f0 @ 8c1f62f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f62f0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int ar6_00;
  uint uVar2;
  undefined4 *puVar3;
  uint ar4_00;
  
  if (*DAT_8c1f6410 != 0) {
    (*(code *)PTR_FUN_8c1f6414)(0x8c4594c0);
  }
  ar6_00 = (int)DAT_8c1f640e;
  ar5_00 = 0;
  (*(code *)PTR_memset_8c1f641c)(DAT_8c1f6418);
  uVar2 = (int)DAT_8c1f640e + DAT_8c1f6418;
  puVar3 = DAT_8c1f6420;
  ar4_00 = DAT_8c1f6418;
  do {
    uVar1 = s_no_device_1f5f4e(ar4_00,ar5_00,ar6_00,ar7);
    ar4_00 = ar4_00 + 0x34;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  } while (ar4_00 < uVar2);
  return uVar1;
}



/* FUN_8c1f62f6 @ 8c1f62f6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f62f6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *in_r1;
  undefined4 a5;
  int ar6_00;
  uint uVar2;
  undefined4 *puVar3;
  uint a4;
  
  if (*in_r1 != 0) {
    (*(code *)PTR_FUN_8c1f6414)(ar4,ar5,ar6,ar7);
  }
  ar6_00 = (int)DAT_8c1f640e;
  a5 = 0;
  (*(code *)PTR_memset_8c1f641c)(DAT_8c1f6418,0,ar6_00,ar7);
  uVar2 = (int)DAT_8c1f640e + DAT_8c1f6418;
  puVar3 = DAT_8c1f6420;
  a4 = DAT_8c1f6418;
  do {
    uVar1 = s_no_device_1f5f4e(a4,a5,ar6_00,ar7);
    a4 = a4 + 0x34;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  } while (a4 < uVar2);
  return uVar1;
}



/* FUN_8c1f6338 @ 8c1f6338 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f6338(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 * 4 + DAT_8c1f6420);
}



/* FUN_8c1f6342 @ 8c1f6342 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f6342(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1f6424)();
  return uVar1;
}



/* FUN_8c1f636a @ 8c1f636a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f636a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1f642c)(0,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f6386 @ 8c1f6386 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f6386(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r14;
  
  if (unaff_r14 != 0) {
    (*(code *)PTR_FUN_8c1f6428)(8,unaff_r14,ar6,ar7);
    in_r0 = (*(code *)PTR_FUN_8c1f6428)(9,0xffffffff,ar6,ar7);
    *DAT_8c1f6438 = unaff_r14;
  }
  return in_r0;
}



/* FUN_8c1f63a6 @ 8c1f63a6 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f63a6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c1f026a(8,0,ar6,ar7);
  FUN_8c1f026a(9,0,ar6,ar7);
  uVar1 = FUN_8c1f03a6(10,0,ar6,ar7,in_PR);
  _DAT_8c4727c0 = 0;
  return uVar1;
}



/* FUN_8c1f63e4 @ 8c1f63e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f63e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1f642c)(9,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f63f2 @ 8c1f63f2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f63f2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f0392(ar4,ar5,ar6,ar7);
  if (0 < iVar1) {
    iVar1 = *(int *)(&DAT_8c26c7d0 + iVar1 * 4);
  }
  return iVar1;
}



/* FUN_8c1f6454 @ 8c1f6454 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f6454(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  
  if (in_r0 == 0) {
    uVar1 = 0;
  }
  else if (in_r0 == 6) {
    uVar1 = 1;
  }
  else if (in_r0 == 0xc) {
    uVar1 = 2;
  }
  else {
    if (in_r0 != 0x12) {
      return in_r0;
    }
    uVar1 = 3;
  }
  uVar1 = (*(code *)PTR_FUN_8c1f648c)(uVar1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f6494 @ 8c1f6494 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f6494(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  int iVar1;
  undefined1 auStack_8 [8];
  
  ar5_00 = (*(code *)PTR_FUN_8c1f6554)(ar4,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_FUN_8c1f6558)(auStack_8,ar5_00,ar6,ar7);
  return (uint)(-1 < iVar1);
}



/* FUN_8c1f6516 @ 8c1f6516 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f6516(int ar4,undefined2 *ar5,code *ar6,undefined4 ar7)

{
  int iVar1;
  code *a6;
  undefined4 a7;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  iVar1 = (uint)(byte)(&DAT_8c26c80c)[ar4] * 0xc;
  *(undefined2 **)(iVar1 + -0x73b8d2c0) = ar5;
  *(undefined4 *)(iVar1 + -0x73b8d2bc) = ar7;
  *(code **)(iVar1 + -0x73b8d2b8) = ar6;
  a6 = ar6;
  a7 = ar7;
  iVar1 = FUN_8c1f6494(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = -2;
  }
  else {
    uStack_18 = *(undefined1 *)ar5;
    uStack_17 = (undefined1)((ushort)*ar5 >> 8);
    uStack_16 = *(undefined1 *)(ar5 + 1);
    uStack_15 = *(undefined1 *)((int)ar5 + 3);
    uStack_14 = *(undefined1 *)(ar5 + 2);
    uStack_13 = *(undefined1 *)((int)ar5 + 5);
    uStack_12 = *(undefined1 *)(ar5 + 3);
    uStack_11 = (&DAT_8c26c824)[*(byte *)((int)ar5 + 7) & 7];
    a6 = (code *)0x0;
    a7 = 0;
    iVar1 = s_FATAL_ERROR_Cannot_get_semap_1f070e(ar4,8,0,0,0,&uStack_18,2,&LAB_8c1f64b6);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 0;
    }
  }
  if ((iVar1 < 0) && (ar6 != (code *)0x0)) {
    (*ar6)(iVar1,ar7,a6,a7);
  }
  return 0;
}



/* FUN_8c1f667e @ 8c1f667e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f667e(int ar4,undefined4 ar5,code *ar6,undefined4 ar7)

{
  int iVar1;
  code *a6;
  undefined4 a7;
  
  iVar1 = (uint)(byte)(&DAT_8c26c80c)[ar4] * 0xc;
  *(undefined4 *)(iVar1 + -0x73b8d2c0) = ar5;
  *(undefined4 *)(iVar1 + -0x73b8d2bc) = ar7;
  *(code **)(iVar1 + -0x73b8d2b8) = ar6;
  a6 = ar6;
  a7 = ar7;
  iVar1 = FUN_8c1f6494(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = -2;
  }
  else {
    a6 = (code *)0x0;
    a7 = 0;
    iVar1 = s_FATAL_ERROR_Cannot_get_semap_1f06ae(ar4,8,0,0,0,&LAB_8c1f65e8);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 0;
    }
  }
  if ((iVar1 < 0) && (ar6 != (code *)0x0)) {
    (*ar6)(iVar1,ar7,a6,a7);
  }
  return 0;
}



/* FUN_8c1f670c @ 8c1f670c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c1f670c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (*(code *)PTR_memset_8c1f681c)(DAT_8c1f6818,0,(int)DAT_8c1f6802,ar7);
  puVar2 = DAT_8c1f6828;
  puVar1 = DAT_8c1f6824;
  *DAT_8c1f6820 = 0;
  *puVar1 = 0;
  *puVar2 = 0;
  return puVar2;
}



/* FUN_8c1f672c @ 8c1f672c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int * FUN_8c1f672c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ain0;
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int *piVar2;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  undefined4 in_PR;
  
  ain0 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  piVar2 = (int *)&DAT_8c472da0;
  iVar1 = 0;
  do {
    if (*piVar2 == 0) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x35f;
  } while (iVar1 < 2);
  if (iVar1 == 2) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[0x82] = ar4;
    piVar2[0x83] = 0;
    piVar2[0x81] = 0;
    memset(piVar2 + 0x84,0,0xb68,ar7);
    ar6_00 = 0x100;
    ar5_00 = 0;
    memset(piVar2 + 0x41,0,0x100,ar7);
    FUN_8c01422c(piVar2 + 0x41,ar5_00,ar6_00,ar7,ain0,in_PR);
    *piVar2 = 1;
    _DAT_8c4748a0 = _DAT_8c4748a0 + 1;
  }
  return piVar2;
}



/* FUN_8c1f67c2 @ 8c1f67c2 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f67c2(int ar4,int ar5,int ar6,uint ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 ar6_00;
  uint ar7_00;
  int *piVar2;
  undefined1 auStack_b0 [156];
  
  ar7_00 = ar7;
  memset(auStack_b0,0,0x98,ar7);
  if (*(int *)(ar4 + 0x20c) == *(int *)(ar4 + 0x208)) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    for (piVar2 = (int *)(ar4 + 0x210); piVar2[3] != 0; piVar2 = piVar2 + 0x49) {
      iVar1 = iVar1 + 1;
    }
    ar6_00 = 0x100;
    piVar2[2] = 0;
    piVar2[3] = 1;
    ar5_00 = ar4 + 0x104;
    piVar2[5] = *(int *)(ar4 + 0x204);
    *piVar2 = ar6;
    piVar2[1] = ar7 >> 2;
    piVar2[0x46] = 0;
    piVar2[4] = 0;
    piVar2[0x47] = 0;
    memmove(piVar2 + 6,ar5_00,0x100,ar7_00);
    FUN_8c01422c(auStack_b0,ar5_00,ar6_00,ar7_00,ar6,ar5);
    memmove(piVar2 + 6,auStack_b0,0x100,ar7_00);
    piVar2[6] = ((ar7 >> 2) - 1) * 4 + ar6;
    piVar2[8] = ar5;
  }
  return iVar1;
}



/* FUN_8c1f689e @ 8c1f689e callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f689e(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  *(int *)(DAT_8c1f6944 + ar4) = *(int *)(DAT_8c1f6944 + ar4) + -1;
  iVar1 = (int)DAT_8c1f693e;
  *(undefined4 *)(ar5 + 0xc) = 0;
  if (*(int *)(iVar1 + ar5) != 0) {
                    /* WARNING: Could not recover jumptable at 0x8c1f68b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(iVar1 + ar5))();
    return uVar2;
  }
  return iVar1;
}



/* FUN_8c1f68ca @ 8c1f68ca callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f68ca(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r12;
  int unaff_r13;
  int *a4;
  
  a4 = DAT_8c1f6958;
  do {
    if (*a4 != 0) {
      in_r0 = FUN_8c1f68ec(a4,ar5,ar6,ar7);
    }
    unaff_r13 = unaff_r13 + 1;
    a4 = (int *)((int)a4 + (int)DAT_8c1f6946);
  } while (unaff_r13 < unaff_r12);
  return in_r0;
}



/* FUN_8c1f68ec @ 8c1f68ec callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f68ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  
  ar5_00 = DAT_8c1f6948 + ar4;
  for (iVar2 = 0; iVar2 < *(int *)(DAT_8c1f694a + ar4); iVar2 = iVar2 + 1) {
    if (*(int *)(ar5_00 + 0xc) != 0) {
      FUN_8c1f689e(ar4,ar5_00,ar6,ar7);
    }
    ar5_00 = ar5_00 + DAT_8c1f693a;
  }
  uVar1 = (*(code *)PTR_memset_8c1f695c)(ar4,0,(int)DAT_8c1f6946);
  return uVar1;
}



/* FUN_8c1f68f6 @ 8c1f68f6 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f68f6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int unaff_r12;
  int unaff_r13;
  int a5;
  
  a5 = DAT_8c1f6948 + unaff_r13;
  for (; unaff_r12 < *(int *)(DAT_8c1f694a + unaff_r13); unaff_r12 = unaff_r12 + 1) {
    if (*(int *)(a5 + 0xc) != 0) {
      FUN_8c1f689e(unaff_r13,a5,ar6,ar7);
    }
    a5 = a5 + DAT_8c1f693a;
  }
  uVar1 = (*(code *)PTR_memset_8c1f695c)(0,(int)DAT_8c1f6946);
  return uVar1;
}



/* FUN_8c1f6964 @ 8c1f6964 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f6964(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = ar5 * 0x124 + ar4 + 0x210;
  if (*(int *)(iVar1 + 0xc) == 1) {
    FUN_8c1f69d6(ar4,ar5,ar6,ar7,1);
    *(undefined4 *)(iVar1 + 0xc) = 2;
    return 0;
  }
  return 0xffffffff;
}



/* FUN_8c1f696e @ 8c1f696e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f696e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r3;
  int in_MACL;
  undefined4 in_PR;
  
  if (*(int *)(in_MACL + in_r3 + 0xc) == 1) {
    FUN_8c1f69d6(ar4,ar5,ar6,ar7,in_PR);
    *(undefined4 *)(in_MACL + in_r3 + 0xc) = 2;
    return 0;
  }
  return 0xffffffff;
}



/* FUN_8c1f6992 @ 8c1f6992 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1f6992(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  int iVar1;
  
  iVar1 = DAT_8c1f6a6e + ar4;
  for (a5 = 0; a5 < *(int *)(DAT_8c1f6a70 + ar4); a5 = a5 + 1) {
    if ((*(int *)(iVar1 + 0xc) != 0) && (*(int *)(iVar1 + 0x10) <= ar5)) {
      FUN_8c1f6964(ar4,a5,ar6,ar7);
    }
    iVar1 = iVar1 + DAT_8c1f6a6c;
  }
  return (int)DAT_8c1f6a70;
}



/* FUN_8c1f69d6 @ 8c1f69d6 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f69d6(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  
  iVar1 = ar5 * DAT_8c1f6a6c + DAT_8c1f6a6e + ar4;
  if (*(int *)(iVar1 + 0xc) != 0) {
    in_r0 = (int)DAT_8c1f6a72;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(in_r0 + ar4);
  }
  return in_r0;
}



/* FUN_8c1f69f2 @ 8c1f69f2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f69f2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_FUN_8c1f6a80;
  piVar1 = DAT_8c1f6a78;
  iVar4 = DAT_8c1f6a7c;
  if (-1 < ar4) {
    iVar4 = *(int *)((int)DAT_8c1f6a72 + *DAT_8c1f6a78) + ar4;
  }
  iVar3 = (int)DAT_8c1f6a74;
  *(int *)(*(int *)((int)DAT_8c1f6a74 + *DAT_8c1f6a78) + 0x14) = iVar4;
  iVar4 = (*(code *)puVar2)(*(int *)(iVar3 + *piVar1) + 0x18);
  if (iVar4 == 0) {
    iVar4 = (*(code *)PTR_FUN_8c1f6a84)(*piVar1 + 4,1);
  }
  return iVar4;
}



/* FUN_8c1f69fa @ 8c1f69fa callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f69fa(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  int *unaff_r14;
  char in_T;
  undefined4 in_PR;
  undefined4 in_stack_00000000;
  
  if (in_T == '\0') {
    iVar1 = 0x7fffffff;
  }
  else {
    iVar1 = *(int *)(*unaff_r14 + 0x204) + ar4;
  }
  *(int *)(*(int *)(ain0 + *unaff_r14) + 0x14) = iVar1;
  iVar1 = FUN_8c01422c(*(int *)(*unaff_r14 + 0xd78) + 0x18,ar5,ar6,ar7,in_PR,in_stack_00000000);
  if (iVar1 == 0) {
    iVar1 = FUN_8c013e4c(*unaff_r14 + 4,1,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c1f6a30 @ 8c1f6a30 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1f6a0c) */
/* WARNING: Unknown calling convention */

int FUN_8c1f6a30(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_FUN_8c1f6a80;
  piVar1 = DAT_8c1f6a78;
  iVar3 = (int)DAT_8c1f6a74;
  *(int *)(*(int *)((int)DAT_8c1f6a74 + *DAT_8c1f6a78) + 0x14) =
       *(int *)((int)DAT_8c1f6a72 + *DAT_8c1f6a78) + 1;
  iVar3 = (*(code *)puVar2)(*(int *)(iVar3 + *piVar1) + 0x18);
  if (iVar3 == 0) {
    iVar3 = (*(code *)PTR_FUN_8c1f6a84)(*piVar1 + 4,1);
  }
  return iVar3;
}



/* FUN_8c1f6a34 @ 8c1f6a34 callers=1 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f6a34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a5;
  undefined4 in_PR;
  byte in_FPSCR_RM;
  byte in_FPSCR_FLAG;
  byte in_FPSCR_ENABLE;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_FR;
  
  _DAT_8c47489c = _DAT_8c474898;
  a5 = ar4 + 0x210;
  _DAT_8c474898 = ar4;
  FUN_8c01422c(ar4 + 4,ar5,ar6,ar7,
               (uint)in_FPSCR_RM | (uint)in_FPSCR_FLAG << 2 | (uint)in_FPSCR_ENABLE << 7 |
               (uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_FR << 0x15,
               in_PR);
  for (iVar2 = 0; iVar2 < *(int *)(ar4 + 0x208); iVar2 = iVar2 + 1) {
    *(int *)(ar4 + 0xd78) = a5;
    iVar1 = *(int *)(a5 + 0xc);
    if (iVar1 != 0) {
      if (iVar1 == 3) {
        FUN_8c1f689e(ar4,a5,ar6,ar7);
      }
      else if (iVar1 == 1) {
        if (*(uint *)(a5 + 0x14) <= *(uint *)(ar4 + 0x204)) {
          FUN_8c013e4c(a5 + 0x18,1,ar6,ar7);
        }
      }
      else if (iVar1 == 2) {
        *(undefined4 *)(a5 + 0xc) = 3;
        *(code **)(a5 + 0x20) = FUN_8c1f692a;
      }
    }
    a5 = a5 + 0x124;
  }
  *(int *)(ar4 + 0x204) = *(int *)(ar4 + 0x204) + 1;
  _DAT_8c474898 = _DAT_8c47489c;
  return 0x204;
}



/* FUN_8c1f6b14 @ 8c1f6b14 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f6b14(undefined4 ar4,undefined4 ar5,int ar6,uint ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint a5;
  
  iVar4 = ar6;
  uVar7 = ar7;
  iVar3 = (*(code *)PTR_s_KATANA_FLASH_1f0d98_8c1f6b90)(4,ar4,ar6,ar7);
  puVar2 = PTR_FUN_8c1f6b98;
  puVar1 = PTR_memmove_8c1f6b94;
  if (iVar3 == 0) {
    iVar3 = (int)DAT_8c1f6b8c;
    iVar9 = 0;
    do {
      iVar4 = (*(code *)puVar2)(iVar9,ar5,iVar4,uVar7);
      if (iVar4 != 0) goto LAB_8c1f6b84;
      iVar4 = 0x3c;
      (*(code *)puVar1)(iVar9 * 0x3c + ar6,ar5,0x3c,uVar7);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar3);
    iVar9 = (*(code *)PTR_s_KATANA_FLASH_1f0d98_8c1f6b90)(3,ar4,iVar4,uVar7);
    if (iVar9 == 0) {
      iVar9 = (int)DAT_8c1f6b8e;
      iVar10 = 0;
      do {
        iVar4 = (*(code *)puVar2)(iVar10,ar5,iVar4,uVar7);
        if (iVar4 != 0) {
LAB_8c1f6b84:
          *DAT_8c1f6b9c = 7;
          return 0xffffffff;
        }
        iVar4 = 0x3c;
        (*(code *)puVar1)(iVar10 * 0x3c + ar7,ar5,0x3c,uVar7);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
      iVar4 = (*(code *)PTR_s_KATANA_FLASH_1f0d98_8c1f6cb0)(4,ar4,iVar4,uVar7);
      if (iVar4 == 0) {
        iVar5 = (int)DAT_8c1f6cac;
        iVar4 = iVar9;
        uVar7 = ar7;
        uVar8 = ar5;
        iVar10 = FUN_8c1f6d3e(iVar5,iVar9,ar7,ar5);
        iVar5 = (*(code *)PTR_FUN_8c1f6cb4)(iVar5,iVar4,uVar7,uVar8);
        if ((iVar10 + 3 <= iVar5) ||
           (iVar4 = (*(code *)PTR_FUN_8c1f6cb8)(0,iVar4,uVar7,uVar8), iVar4 == 0)) {
          s_SEGA_FH01_OK_1f6ce4(2,ar5,uVar7,uVar8);
          puVar1 = PTR_FUN_8c1f6cbc;
          iVar10 = (int)DAT_8c1f6cae;
          iVar4 = (int)DAT_8c1f6cac;
          for (a5 = ar7; a5 < ar7 + iVar10; a5 = a5 + 0x3c) {
            iVar5 = (*(code *)puVar1)(iVar4,a5,uVar7,uVar8);
            if (iVar5 == -1) goto LAB_8c1f6cc2;
            iVar4 = iVar4 + 1;
          }
          s_SEGA_FH01_OK_1f6ce4(1,ar5,uVar7,uVar8);
          uVar6 = ar4;
          iVar4 = (*(code *)PTR_s_KATANA_FLASH_1f0d98_8c1f6cb0)(3,ar4,uVar7,uVar8);
          if ((iVar4 == 0) && (iVar4 = (*(code *)PTR_FUN_8c1f6cb8)(0,uVar6,uVar7,uVar8), iVar4 == 0)
             ) {
            iVar4 = 0;
            do {
              iVar10 = (*(code *)puVar1)(iVar4,iVar4 * 0x3c + ar7,uVar7,uVar8);
              if (iVar10 == -1) goto LAB_8c1f6cc2;
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar9);
            iVar4 = (*(code *)PTR_s_KATANA_FLASH_1f0d98_8c1f6cb0)(4,ar4,uVar7,uVar8);
            if (iVar4 == 0) {
              s_SEGA_FH01_OK_1f6ce4(3,ar5,uVar7,uVar8);
              uVar6 = 0;
              iVar4 = iVar3;
              iVar9 = ar6;
              uVar8 = ar5;
              iVar10 = FUN_8c1f6d3e(0,iVar3,ar6,ar5);
              iVar5 = (*(code *)PTR_FUN_8c1f6cb4)(uVar6,iVar4,iVar9,uVar8);
              if (iVar5 < iVar10 + 2) {
                iVar4 = (*(code *)PTR_FUN_8c1f6cb8)(0,iVar4,iVar9,uVar8);
                if (iVar4 != 0) goto LAB_8c1f6cc2;
                s_SEGA_FH01_OK_1f6ce4(3,ar5,iVar9,uVar8);
              }
              iVar4 = 0;
              do {
                iVar10 = (*(code *)puVar1)(iVar4,iVar4 * 0x3c + ar6,iVar9,uVar8);
                if (iVar10 == -1) goto LAB_8c1f6cc2;
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar3);
              s_SEGA_FH01_OK_1f6ce4(0,ar5,iVar9,uVar8);
              iVar4 = (*(code *)PTR_s_KATANA_FLASH_1f0d98_8c1f6cb0)(3,ar4,iVar9,uVar8);
              if (iVar4 == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
LAB_8c1f6cc2:
  *DAT_8c1f6da4 = 8;
  return 0xffffffff;
}



/* s_SEGA_FH01_OK_1f6ce4 @ 8c1f6ce2 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_SEGA_FH01_OK_1f6ce4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 in_PR;
  
  ar5_00 = 0xff;
  ar6_00 = 0x3c;
  memset(ar5,0xff,0x3c,ar7);
  if (ar4 == 0) {
    ar4_00 = "SEGA_FH01_OK";
  }
  else if (ar4 == 1) {
    ar4_00 = "SEGA_FH01_EXIST";
  }
  else if (ar4 == 2) {
    ar4_00 = "SEGA_FH01_PROCESS1";
  }
  else {
    if (ar4 != 3) {
      return 0xffffffff;
    }
    ar4_00 = "SEGA_FH01_PROCESS2";
  }
  FUN_8c010998(ar4_00,ar5_00,ar6_00,ar7,ar4,in_PR);
  iVar1 = FUN_8c1f884c(0x3fc,ar5,ar6_00,ar7);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  return iVar1;
}



/* FUN_8c1f6d3e @ 8c1f6d3e callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f6d3e(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_FUN_8c1f6dc4;
  uVar5 = 1;
  iVar3 = 0;
  iVar4 = 0;
  if (0 < ar5) {
    do {
      iVar2 = (*(code *)puVar1)(ar4,ar7,uVar5);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar2 = (*(code *)PTR_FUN_8c1f6dc8)(ar7,ar6,0x3c);
      iVar4 = iVar4 + 1;
      if (iVar2 != 0) {
        iVar3 = iVar3 + 1;
      }
      ar6 = ar6 + 0x3c;
      ar4 = ar4 + 1;
    } while (iVar4 < ar5);
  }
  return iVar3;
}



/* FUN_8c1f6d56 @ 8c1f6d56 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f6d56(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int unaff_r9;
  undefined4 unaff_r10;
  int iVar3;
  int unaff_r13;
  
  puVar1 = PTR_FUN_8c1f6dc4;
  iVar3 = ar5;
  if (0 < unaff_r9) {
    do {
      iVar2 = (*(code *)puVar1)(ar4,unaff_r10,ar6,ar7);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      ar6 = 0x3c;
      iVar2 = (*(code *)PTR_FUN_8c1f6dc8)(unaff_r10,unaff_r13,0x3c,ar7);
      iVar3 = iVar3 + 1;
      if (iVar2 != 0) {
        ar5 = ar5 + 1;
      }
      unaff_r13 = unaff_r13 + 0x3c;
      ar4 = ar4 + 1;
    } while (iVar3 < unaff_r9);
  }
  return ar5;
}



/* FUN_8c1f6dcc @ 8c1f6dcc callers=3 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f6dcc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_s_KATANA_FLASH_1f0d98_8c1f6ec8;
  puVar1 = DAT_8c1f6ec4;
  if (4 < ar4) {
    *DAT_8c1f6ebc = 2;
    return 0;
  }
  if (*DAT_8c1f6ec0 != ar4) {
    if (ar4 < 0) {
      ar4 = -ar4;
    }
    *DAT_8c1f6ec0 = ar4;
    iVar3 = (*(code *)puVar2)(ar4,*puVar1,ar6,ar7);
    if (iVar3 != 0) {
      *DAT_8c1f6ebc = iVar3;
      return 0;
    }
  }
  return 1;
}



/* FUN_8c1f6e0c @ 8c1f6e0c callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f6e0c(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 ar5_00;
  
  puVar1 = DAT_8c1f6ecc;
  ar5_00 = *DAT_8c1f6ecc;
  iVar2 = (*(code *)PTR_FUN_8c1f6ed0)(ar4,ar5_00,ar6,ar7);
  if (iVar2 != 0) {
    FUN_8c1f6dcc(0xfffffffd,ar5_00,ar6,ar7);
    iVar2 = (*(code *)PTR_FUN_8c1f6ed0)(ar4,*puVar1,ar6,ar7);
    if (iVar2 != 0) {
      *DAT_8c1f6ebc = 7;
    }
    return 0;
  }
  if (ar5 != 0) {
    (*(code *)PTR_memmove_8c1f6ed4)(ar5,*puVar1,0x3c,ar7);
  }
  return 1;
}



/* FUN_8c1f6e5e @ 8c1f6e5e callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f6e5e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 uVar4;
  
  puVar1 = DAT_8c1f6ecc;
  uVar4 = 1;
  (*(code *)PTR_memset_8c1f6ed8)(*DAT_8c1f6ecc,(int)DAT_8c1f6eba,0x3c,ar7);
  ar6_00 = 0xf;
  (*(code *)PTR_FUN_8c1f6edc)(*puVar1,ar5,0xf,ar7);
  piVar2 = DAT_8c1f6ee0;
  ar5_00 = *puVar1;
  iVar3 = (*(code *)PTR_FUN_8c1f6ee4)(ar4,ar5_00,ar6_00,ar7);
  if (iVar3 == 0) {
    *piVar2 = *piVar2 + -1;
  }
  else if (iVar3 != 3) {
    FUN_8c1f6dcc(0xfffffffd,ar5_00,ar6_00,ar7);
    iVar3 = (*(code *)PTR_FUN_8c1f6ee4)(ar4,*puVar1,ar6_00,ar7);
    if (iVar3 == 0) {
      *piVar2 = *piVar2 + -1;
    }
    else if (iVar3 != 3) {
      uVar4 = 0;
      *DAT_8c1f705c = 8;
    }
  }
  return uVar4;
}



/* FUN_8c1f6f06 @ 8c1f6f06 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f6f06(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c1f7060)(ar4,ar5,ar6,ar7);
  if (iVar1 < 0) {
    *DAT_8c1f705c = 5;
  }
  return iVar1;
}



/* FUN_8c1f6f20 @ 8c1f6f20 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c1f6f20(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar4_00;
  
  _DAT_8c4749b8 = 0xffffffff;
  uVar2 = 3;
  _DAT_8c4748ac = ar4;
  _DAT_8c4748b0 = ar5;
  _DAT_8c4748b4 = ar6;
  _DAT_8c4748b8 = ar7;
  FUN_8c1f6dcc(3,ar5,ar6,ar7);
  FUN_8c1f875c(uVar2,ar5,ar6,ar7);
  uVar2 = 1;
  if (DAT_8c273a10 == '\x02') {
    iVar1 = 1;
    DAT_8c273a10 = '\x01';
  }
  else {
    ar4_00 = 0x8c4749bc;
    DAT_8c273a10 = '\x01';
    FUN_8c1f7d04(0x8c4749bc,1,ar6,ar7);
    _DAT_8c4748bc = 0x8c4749c4;
    iVar1 = FUN_8c1f7558(ar4_00,uVar2,ar6,ar7);
    if (iVar1 == 0) {
      DAT_8c273a10 = '\0';
    }
  }
  return iVar1;
}



/* FUN_8c1f6f2a @ 8c1f6f2a callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c1f6f2a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 *ain0,
                undefined4 *ain1)

{
  int iVar1;
  undefined4 *in_r2;
  undefined4 *in_r3;
  undefined4 uVar2;
  undefined4 ar4_00;
  
  *in_r3 = ar4;
  *in_r2 = ar5;
  *ain1 = ar6;
  _DAT_8c4748b8 = ar7;
  *ain0 = 0xffffffff;
  uVar2 = 3;
  FUN_8c1f6dcc(3,ar5,ar6,ar7);
  FUN_8c1f875c(uVar2,ar5,ar6,ar7);
  uVar2 = 1;
  if (DAT_8c273a10 == '\x02') {
    iVar1 = 1;
    DAT_8c273a10 = 1;
  }
  else {
    ar4_00 = 0x8c4749bc;
    DAT_8c273a10 = 1;
    FUN_8c1f7d04(0x8c4749bc,1,ar6,ar7);
    _DAT_8c4748bc = 0x8c4749c4;
    iVar1 = FUN_8c1f7558(ar4_00,uVar2,ar6,ar7);
    if (iVar1 == 0) {
      DAT_8c273a10 = 0;
    }
  }
  return iVar1;
}



/* FUN_8c1f6fc8 @ 8c1f6fc8 callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f6fc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_98 [2];
  undefined1 auStack_96 [58];
  undefined1 auStack_5c [52];
  ushort uStack_28;
  
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = FUN_8c1f6e0c(iVar3 * 4 + 0x18,0,ar6,ar7);
      if (iVar1 == 1) {
        ar6 = 10;
        iVar1 = FUN_8c013ec0(_DAT_8c4748b0 + 2,ar4,10,ar7);
        if (iVar1 == 0) {
          ar6 = 0x3c;
          memmove(auStack_98,_DAT_8c4748b0,0x3c,ar7);
          iVar1 = FUN_8c1f6e0c(iVar3 * 4 + 0x19,0,ar6,ar7);
          if (iVar1 == 1) {
            ar6 = 0x3c;
            memmove(auStack_5c,_DAT_8c4748b0,0x3c,ar7);
            uVar2 = FUN_8c1f109c(0x6e,auStack_96,ar6,ar7);
            if ((uint)uStack_28 == (uVar2 & 0xffff)) {
              return iVar3;
            }
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return 0xffffffff;
}



/* FUN_8c1f70c0 @ 8c1f70c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f70c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  char *in_r2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = DAT_8c1f7118;
  if (*in_r2 == '\0') {
    *DAT_8c1f7118 = 5;
LAB_8c1f7102:
    uVar4 = 0;
  }
  else {
    if ((*DAT_8c1f7120 == 0) || (*DAT_8c1f7124 == 0)) {
      uVar4 = 0;
      uVar3 = 0xb;
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c1f7130)(*DAT_8c1f712c,*DAT_8c1f7128,*DAT_8c1f7120,*DAT_8c1f7124);
      if (iVar2 != 0) goto LAB_8c1f7102;
      uVar3 = 0xd;
      uVar4 = 1;
    }
    *puVar1 = uVar3;
  }
  return uVar4;
}



/* FUN_8c1f710c @ 8c1f710c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f710c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  DAT_8c273a10 = 0;
  return ain0;
}



/* FUN_8c1f7134 @ 8c1f7134 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7134(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined4 in_r0;
  
  uVar1 = *ar4;
  if ((ushort)ar5 != 0) {
    if ((uint)uVar1 < (uint)uVar1 + (uint)(ushort)ar5) {
      *ar4 = (ushort)ar5 + uVar1;
    }
    else {
      *ar4 = (ushort)DAT_8c1f7224;
    }
  }
  return in_r0;
}



/* FUN_8c1f7158 @ 8c1f7158 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7158(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if (*ar4 < DAT_8c1f7224) {
    *ar4 = *ar4 + 1;
  }
  return in_r0;
}



/* FUN_8c1f716c @ 8c1f716c callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f716c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*DAT_8c1f7228 < 2) {
    if ((*DAT_8c1f722c == 0) || (*DAT_8c1f7230 == 0)) {
      uVar1 = 0;
      *DAT_8c1f7244 = 0xb;
    }
    else {
      (*(code *)PTR_FUN_8c1f723c)(*DAT_8c1f7238,*DAT_8c1f7234,*DAT_8c1f7230);
      (*(code *)PTR_FUN_8c1f7240)(0xfffffffd);
    }
  }
  return uVar1;
}



/* FUN_8c1f7170 @ 8c1f7170 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7170(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r1;
  int in_r3;
  undefined4 ar5_00;
  int ar6_00;
  int ar7_00;
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*in_r1 < in_r3) {
    ar6_00 = *DAT_8c1f722c;
    if ((ar6_00 == 0) || (*DAT_8c1f7230 == 0)) {
      uVar1 = 0;
      *DAT_8c1f7244 = 0xb;
    }
    else {
      ar7_00 = *DAT_8c1f7230;
      ar5_00 = *DAT_8c1f7234;
      (*(code *)PTR_FUN_8c1f723c)(*DAT_8c1f7238,ar5_00,ar6_00,ar7_00);
      (*(code *)PTR_FUN_8c1f7240)(0xfffffffd,ar5_00,ar6_00,ar7_00);
    }
  }
  return uVar1;
}



/* FUN_8c1f71b6 @ 8c1f71b6 callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f71b6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int in_stack_ffffffe8;
  
  uVar1 = 1;
  FUN_8c1f8176(0x8c4749f2,ar5,ar6,ar7);
  FUN_8c1f826c(0x8c4749f2,&stack0xffffffe8,ar6,ar7);
  if (_DAT_8c474986 == -1) {
    _DAT_8c474986 = (short)in_stack_ffffffe8 - (short)_DAT_8c474a00;
  }
  else {
    FUN_8c1f7134(&DAT_8c474986,in_stack_ffffffe8 - _DAT_8c474a00,ar6,ar7,in_stack_ffffffe8);
  }
  if (1 < _DAT_8c4748c0) {
    uVar1 = FUN_8c1f6e5e(ar4 + 3,&DAT_8c474978,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1f7264 @ 8c1f7264 callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7264(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ar5_00;
  undefined4 uVar1;
  
  uVar1 = 1;
  if (_DAT_8c47497c == -1) {
    _DAT_8c47497c = _DAT_8c4749fc;
  }
  _DAT_8c474980 = _DAT_8c4749fc;
  FUN_8c1f8176(0x8c4749f2,ar5,ar6,ar7);
  ar5_00 = &DAT_8c474a00;
  FUN_8c1f826c(0x8c4749f2,&DAT_8c474a00,ar6,ar7);
  if (_DAT_8c474984 == -1) {
    _DAT_8c474984 = 1;
  }
  else {
    FUN_8c1f7158(&DAT_8c474984,ar5_00,ar6,ar7,ar4);
  }
  if (1 < _DAT_8c4748c0) {
    uVar1 = FUN_8c1f6e5e(ar4 + 3,&DAT_8c474978,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1f72d8 @ 8c1f72d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f72d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 ar6_00;
  int iVar5;
  int iStack_20;
  
  puVar2 = DAT_8c1f7360;
  ar6_00 = 0x3c;
  (*(code *)PTR_memset_8c1f7364)(*DAT_8c1f7360,(int)DAT_8c1f7338,0x3c,ar7);
  puVar3 = DAT_8c1f7368;
  puVar1 = PTR_FUN_8c1f735c;
  iVar5 = 0;
  iStack_20 = ar4;
  do {
    iVar4 = (*(code *)puVar1)(iStack_20,*puVar2,ar6_00,ar7);
    if (iVar4 == 0) {
      *puVar3 = 8;
      return 0;
    }
    iVar5 = iVar5 + 1;
    iStack_20 = iStack_20 + 1;
  } while (iVar5 < 4);
  return 1;
}



/* FUN_8c1f736c @ 8c1f736c callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f736c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar5_00;
  int iVar1;
  int ar4_00;
  undefined1 *ar5_01;
  undefined4 ar6_00;
  uint ar5_02;
  uint uVar2;
  
  iVar1 = _DAT_8c4749d8;
  _DAT_8c4749dc = _DAT_8c4749e0;
  _DAT_8c474a04 = _DAT_8c474a04 + 1;
  FUN_8c1f8176(0x8c4749f2,ar5,ar6,ar7);
  FUN_8c1f826c(0x8c4749f2,&DAT_8c4749d8,ar6,ar7);
  ar5_00 = libgcc_divide_helper_01051c(_DAT_8c4749d8 - iVar1,0x3c);
  uVar2 = (uint)DAT_8c4749ec;
  ar5_02 = 0x3c - DAT_8c4749ed;
  if (ar5_02 < ar5_00) {
    FUN_8c1f7134(uVar2 * 2 + -0x73b8b6be,ar5_02,ar6,ar7,ar4);
    uVar2 = uVar2 + 1;
    ar5_00 = ar5_00 - ar5_02;
    if (0x17 < uVar2) {
      uVar2 = 0;
    }
    while (0x3c < ar5_00) {
      FUN_8c1f7134(uVar2 * 2 + -0x73b8b6be,0x3c,ar6,ar7,ar4);
      uVar2 = uVar2 + 1;
      ar5_00 = ar5_00 - 0x3c;
      if (0x17 < (int)uVar2) {
        uVar2 = 0;
      }
    }
  }
  FUN_8c1f7134(uVar2 * 2 + -0x73b8b6be,ar5_00,ar6,ar7,ar4);
  iVar1 = ar4 + 2;
  _DAT_8c4749b2 = _DAT_8c474a04;
  ar6_00 = 10;
  memmove(0x8c4749e8,0x8c4749f2,10,ar7);
  ar4_00 = iVar1 + 1;
  iVar1 = FUN_8c1f6e5e(iVar1,0x8c47493c,ar6_00,ar7);
  if (iVar1 == 1) {
    ar5_01 = &DAT_8c474978;
    iVar1 = FUN_8c1f6e5e(ar4_00,&DAT_8c474978,ar6_00,ar7);
    if (iVar1 == 1) {
      _DAT_8c4748c0 = FUN_8c1f6f06(ar4_00,ar5_01,ar6_00,ar7);
      return 1;
    }
  }
  return 0;
}



/* FUN_8c1f74b0 @ 8c1f74b0 callers=4 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f74b0(code *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *DAT_8c1f7598;
  iVar3 = ar5;
  iVar2 = (*(code *)PTR_FUN_8c1f759c)(uVar4,ar5,ar6,ar7);
  puVar1 = DAT_8c1f75a0;
  if (iVar2 < 0) {
    *DAT_8c1f75a0 = 9;
  }
  else if ((ar5 <= *DAT_8c1f75a4) || (iVar3 = FUN_8c1f716c(uVar4,iVar3,ar6,ar7), iVar3 != 0)) {
    iVar3 = iVar2 * 4 + 0x18;
    (*(code *)PTR_FUN_8c1f75ac)(iVar3,DAT_8c1f75a8,ar6,ar7);
    if ((DAT_8c1f75b0[3] == '\0') || (*DAT_8c1f75b0 == '\0')) {
      *puVar1 = 3;
    }
    else {
      if (*DAT_8c1f75b4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x8c1f750a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*ar4)(iVar3);
        return uVar4;
      }
      *puVar1 = 4;
    }
  }
  return 0;
}



/* FUN_8c1f752a @ 8c1f752a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f752a(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < ar5) {
    do {
      bVar1 = *ar4;
      ar4 = ar4 + 1;
      ar5 = ar5 + -1;
      uVar2 = uVar2 << 8 | (uint)bVar1;
    } while (ar5 != 0);
  }
  return uVar2;
}



/* FUN_8c1f7540 @ 8c1f7540 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7540(uint ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined1 *puVar1;
  
  if (0 < ar5) {
    puVar1 = (undefined1 *)(ar6 + ar5 + -1);
    do {
      *puVar1 = (char)ar4;
      ar5 = ar5 + -1;
      puVar1 = puVar1 + -1;
      ar4 = ar4 >> 8;
    } while (ar5 != 0);
  }
  return in_r0;
}



/* FUN_8c1f7558 @ 8c1f7558 callers=0 callees=2 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7558(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int *piStack_160;
  int aiStack_140 [8];
  int aiStack_120 [4];
  int aiStack_110 [24];
  int aiStack_b0 [6];
  int aiStack_98 [24];
  int aiStack_38 [7];
  
  FUN_8c1f8176(0x8c4749e8,ar5,ar6,ar7);
  FUN_8c1f826c(0x8c4749e8,&DAT_8c4749d8,ar6,ar7);
  uVar11 = 0x8c4748c4;
  _DAT_8c474a06 = 0;
  iVar4 = FUN_8c1f7b64(_DAT_8c4748bc,0x8c4748c4,ar6,ar7);
  if (iVar4 == 0) {
    uVar11 = 0;
  }
  else {
    iVar4 = FUN_8c1f6fc8(_DAT_8c4748bc,uVar11,ar6,ar7);
    if (_DAT_8c474972 == -1) {
      _DAT_8c474972 = 0;
    }
    if (_DAT_8c474978 == -1) {
      _DAT_8c474978 = 0;
    }
    if (DAT_8c47497a == -1) {
      DAT_8c47497a = '\0';
    }
    if (DAT_8c47497b == -1) {
      DAT_8c47497b = '\0';
    }
    if (_DAT_8c474940 == -1) {
      _DAT_8c474940 = -2;
    }
    _DAT_8c4748c0 = FUN_8c1f6f06(0xffff,0xff,ar6,ar7);
    if (2 < _DAT_8c4748c0) {
      bVar1 = false;
      FUN_8c1f6e0c(0x14,aiStack_98,ar6,ar7);
      FUN_8c1f6e0c(0x15,aiStack_98 + 0xf,ar6,ar7);
      FUN_8c1f6e0c(0x16,aiStack_110,ar6,ar7);
      piVar9 = aiStack_110 + 0xf;
      FUN_8c1f6e0c(0x17,piVar9,ar6,ar7);
      piVar10 = aiStack_120;
      pbVar14 = &DAT_8c26c8c3;
      pbVar15 = &DAT_8c26c8c7;
      do {
        piVar5 = (int *)FUN_8c1f62cc((uint)*pbVar14,piVar9,ar6,ar7);
        if (piVar5 == (int *)0x0) {
          _DAT_8c4748a8 = 0xc;
          return 0;
        }
        pbVar14 = pbVar14 + 1;
        *piVar10 = *piVar5;
        piVar10 = piVar10 + 1;
      } while (pbVar14 < pbVar15);
      piVar10 = aiStack_38;
      for (iVar12 = 0; iVar12 < 4; iVar12 = iVar12 + 1) {
        piVar5 = aiStack_120 + iVar12;
        if (*piVar5 != 0) {
          iVar8 = 0;
          do {
            if (aiStack_98[iVar8] == *piVar5) break;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x18);
          piVar2 = aiStack_98;
          piVar3 = aiStack_98;
          if (iVar8 == 0x18) {
            for (; piVar9 = piVar3, piVar2 < piVar10; piVar2 = piVar2 + 1) {
              if (*piVar2 == -1) {
                *piVar9 = *piVar5;
                bVar1 = true;
                break;
              }
              piVar3 = piVar9 + 1;
            }
          }
        }
      }
      if (bVar1) {
        FUN_8c1f6e5e(0x14,aiStack_98,iVar12,piVar10);
        piVar9 = aiStack_98 + 0xf;
        FUN_8c1f6e5e(0x15,piVar9,iVar12,piVar10);
      }
      piStack_160 = aiStack_140;
      pbVar14 = &DAT_8c26c8c7;
      pbVar15 = &DAT_8c26c8cf;
      do {
        piVar5 = (int *)FUN_8c1f6342((uint)*pbVar14,piVar9,iVar12,piVar10);
        if (piVar5 == (int *)0x0) {
          _DAT_8c4748a8 = 0xc;
          return 0;
        }
        pbVar14 = pbVar14 + 1;
        *piStack_160 = *piVar5;
        piStack_160 = piStack_160 + 1;
      } while (pbVar14 < pbVar15);
      piVar9 = aiStack_b0;
      bVar1 = false;
      for (iVar12 = 0; iVar12 < 8; iVar12 = iVar12 + 1) {
        piVar10 = aiStack_140 + iVar12;
        if (*piVar10 != 0) {
          iVar8 = 0;
          do {
            if (aiStack_110[iVar8] == *piVar10) break;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x18);
          piVar5 = aiStack_110;
          piVar2 = aiStack_110;
          if (iVar8 == 0x18) {
            for (; piVar5 < piVar9; piVar5 = piVar5 + 1) {
              if (*piVar5 == -1) {
                *piVar2 = *piVar10;
                bVar1 = true;
                break;
              }
              piVar2 = piVar2 + 1;
            }
          }
        }
      }
      if (bVar1) {
        FUN_8c1f6e5e(0x16,aiStack_110,iVar12,piVar9);
        FUN_8c1f6e5e(0x17,aiStack_110 + 0xf,iVar12,piVar9);
      }
      piStack_160 = (int *)0x0;
      uVar13 = 0;
      uVar6 = FUN_8c1f752a(0x8c474936,3,iVar12,piVar9);
      uVar7 = FUN_8c1f752a(0x8c474939,3,iVar12,piVar9);
      for (iVar12 = 0; iVar12 < 0x18; iVar12 = iVar12 + 1) {
        piVar10 = aiStack_120;
        for (piVar9 = aiStack_120; piVar9 < aiStack_110; piVar9 = piVar9 + 1) {
          if ((*piVar9 != 0) && (aiStack_98[iVar12] == *piVar10)) {
            piStack_160 = (int *)((uint)piStack_160 | 1);
          }
          piVar10 = piVar10 + 1;
        }
        piStack_160 = (int *)((int)piStack_160 << 1);
        piVar9 = aiStack_110 + iVar12;
        piVar5 = aiStack_140;
        for (piVar10 = aiStack_140; piVar10 < aiStack_120; piVar10 = piVar10 + 1) {
          if ((*piVar10 != 0) && (*piVar9 == *piVar5)) {
            uVar13 = uVar13 | 1;
          }
          piVar5 = piVar5 + 1;
        }
        uVar13 = uVar13 << 1;
      }
      uVar7 = ~((int)uVar13 >> 1 | ~uVar7);
      FUN_8c1f7540(~((int)piStack_160 >> 1 | ~uVar6),3,0x8c474936,piVar9,uVar7);
      uVar11 = 0x8c474939;
      FUN_8c1f7540(uVar7,3,0x8c474939,piVar9,uVar7);
      FUN_8c1f6e5e(iVar4 * 4 + 0x19,0x8c474900,uVar11,piVar9);
    }
    uVar11 = 1;
    _DAT_8c4749e4 = 0;
    _DAT_8c4749e0 = 0;
    _DAT_8c474a04 = 0;
  }
  return uVar11;
}



/* FUN_8c1f7902 @ 8c1f7902 callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c1f7902(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (undefined1)ar6;
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
    return 0;
  }
  iVar3 = ar7;
  if ((char)ar4 == '\0') {
    iVar2 = 0xb4;
  }
  else {
    if ((char)ar4 != '\x01') goto LAB_8c1f7970;
    iVar2 = 0xae;
  }
  *(short *)(iVar2 + -0x73b8b73c) = *(short *)(iVar2 + -0x73b8b73c) + 1;
  FUN_8c1f8176(0x8c4749f2,0,ar6,ar7);
  FUN_8c1f826c(0x8c4749f2,0x8c474a08,ar6,iVar3);
LAB_8c1f7970:
  if ((char)ar4 != '\x01') {
    DAT_8c47497a = (undefined1)ar5;
    DAT_8c47497b = uVar1;
  }
  if (ar7 != 0) {
    ar6 = 0x20;
    memmove(0x8c474988,ar7,0x20,iVar3);
  }
  _DAT_8c4748a8 = 10;
  _DAT_8c4749dc = _DAT_8c4749dc + -1;
  iVar2 = _DAT_8c4748c0;
  if (((_DAT_8c4749dc == 0) && (_DAT_8c4749e0 != 0)) &&
     (iVar2 = FUN_8c1f79d8(&DAT_8c4749dc,_DAT_8c4748c0,ar6,iVar3), iVar2 == 1)) {
    iVar2 = _DAT_8c4748c0;
  }
  return iVar2;
}



/* FUN_8c1f79d8 @ 8c1f79d8 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f79d8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
  }
  else {
    uVar1 = FUN_8c1f74b0(FUN_8c1f736c,2,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1f79da @ 8c1f79da callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f79da(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *in_r2;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*in_r2 == '\0') {
    *DAT_8c1f7a3c = 5;
  }
  else {
    uVar1 = FUN_8c1f74b0(PTR_FUN_8c1f7a4c,2,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1f7a50 @ 8c1f7a50 callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7a50(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 a4;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
  }
  else {
    a4 = _DAT_8c4748bc;
    ar4_00 = FUN_8c1f6fc8(_DAT_8c4748bc,ar5,ar6,ar7);
    if (ar4_00 < 0) {
      _DAT_8c4748a8 = 9;
    }
    else {
      DAT_8c4748c5 = (undefined1)ar4;
      if (_DAT_8c4748c0 < 1) {
        FUN_8c1f716c(a4,ar5,ar6,ar7);
      }
      FUN_8c1f6e5e(ar4_00,0x8c4748c4,ar6,ar7);
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c1f7aae @ 8c1f7aae callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7aae(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *in_r2;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*in_r2 == '\0') {
    *DAT_8c1f7b4c = 5;
  }
  else {
    uVar1 = FUN_8c1f74b0(PTR_FUN_8c1f7b50,4,ar6,ar7);
    *DAT_8c1f7b54 = 1;
  }
  return uVar1;
}



/* FUN_8c1f7ad6 @ 8c1f7ad6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1f7ad6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *in_r2;
  int iVar1;
  
  iVar1 = 0;
  if (*in_r2 == '\0') {
    *DAT_8c1f7b4c = 5;
  }
  else {
    *DAT_8c1f7b58 = ar4;
    iVar1 = FUN_8c1f74b0(PTR_FUN_8c1f7b5c,1,ar6,ar7);
    if (iVar1 == 1) {
      *DAT_8c1f7b54 = 1;
    }
  }
  return iVar1;
}



/* FUN_8c1f7b06 @ 8c1f7b06 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7b06(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *in_r2;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*in_r2 == '\0') {
    *DAT_8c1f7b4c = 5;
  }
  else if (*DAT_8c1f7b54 == 1) {
    uVar1 = FUN_8c1f74b0(PTR_FUN_8c1f7b60,1,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1f7b64 @ 8c1f7b64 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7b64(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
    return 0;
  }
  if (ar4 == 0) {
    ar4 = _DAT_8c4748bc;
  }
  iVar1 = ar5;
  FUN_8c1f6dcc(3,ar5,ar6,ar7);
  iVar1 = FUN_8c1f6fc8(ar4,iVar1,ar6,ar7);
  if (iVar1 < 0) {
    _DAT_8c4748a8 = 9;
LAB_8c1f7bfa:
    uVar3 = 0;
  }
  else {
    if (ar4 == 0) {
      memmove(ar5,0x8c4748c4,0xf0,ar7);
    }
    else {
      if (DAT_8c474a2b == '\0') {
        _DAT_8c4748a8 = 3;
        goto LAB_8c1f7bfa;
      }
      if (ar5 != 0) {
        iVar4 = 0;
        iVar1 = iVar1 * 4 + 0x18;
        do {
          iVar2 = FUN_8c1f6e0c(iVar1,ar5,ar6,ar7);
          if (iVar2 != 1) {
            _DAT_8c4748a8 = 7;
            return 0;
          }
          iVar4 = iVar4 + 1;
          ar5 = ar5 + 0x3c;
          iVar1 = iVar1 + 1;
        } while (iVar4 < 4);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* FUN_8c1f7c40 @ 8c1f7c40 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7c40(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  uVar1 = 0;
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
  }
  else {
    uVar1 = 3;
    FUN_8c1f6dcc(3,ar5,ar6,ar7);
    FUN_8c1f875c(uVar1,ar5,ar6,ar7);
    uVar1 = 0x44c;
    memset(ar4,0xff,0x44c,ar7);
    if (DAT_8c474a2b == '\0') {
      iVar3 = 100;
      puVar2 = (undefined1 *)(ar4 + 10);
      do {
        iVar3 = iVar3 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + 0xb;
      } while (iVar3 != 0);
      _DAT_8c4748a8 = 3;
      uVar1 = 0;
    }
    else {
      iVar3 = 0x18;
      do {
        FUN_8c1f6e0c(iVar3,0,uVar1,ar7);
        uVar1 = 10;
        FUN_8c23c814(ar4,_DAT_8c4748b0 + 2,10,ar7);
        iVar3 = iVar3 + 4;
        *(undefined1 *)(ar4 + 10) = 0;
        ar4 = ar4 + 0xb;
      } while (iVar3 < 0x1a8);
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* FUN_8c1f7c50 @ 8c1f7c50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7c50(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int *piVar2;
  undefined *puVar3;
  char *in_r2;
  undefined4 ar4_00;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int ar4_01;
  int unaff_r13;
  undefined4 unaff_r14;
  
  if (*in_r2 == '\0') {
    *DAT_8c1f7d00 = 5;
  }
  else {
    ar4_00 = 3;
    (*(code *)PTR_FUN_8c1f7ce4)(3,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c1f7ce8)(ar4_00,ar5,ar6,ar7);
    iVar5 = (int)DAT_8c1f7cd8;
    (*(code *)PTR_memset_8c1f7cec)(unaff_r13,(int)DAT_8c1f7cda,iVar5,ar7);
    puVar3 = PTR_FUN_8c1f7cfc;
    piVar2 = DAT_8c1f7cf8;
    puVar1 = PTR_FUN_8c1f7cf4;
    if (*DAT_8c1f7cf0 == '\0') {
      iVar5 = 100;
      puVar4 = (undefined1 *)(unaff_r13 + 10);
      do {
        iVar5 = iVar5 + -1;
        *puVar4 = (char)unaff_r14;
        puVar4 = puVar4 + 0xb;
      } while (iVar5 != 0);
      *DAT_8c1f7d00 = 3;
    }
    else {
      ar4_01 = 0x18;
      iVar6 = (int)DAT_8c1f7cdc;
      do {
        (*(code *)puVar3)(ar4_01,0,iVar5,ar7);
        iVar5 = 10;
        (*(code *)puVar1)(unaff_r13,*piVar2 + 2,10,ar7);
        ar4_01 = ar4_01 + 4;
        *(char *)(unaff_r13 + 10) = (char)unaff_r14;
        unaff_r13 = unaff_r13 + 0xb;
      } while (ar4_01 < iVar6);
      unaff_r14 = 1;
    }
  }
  return unaff_r14;
}



/* FUN_8c1f7d04 @ 8c1f7d04 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7d04(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f7d30(DAT_8c1f7e38,ar4,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f7d1a @ 8c1f7d1a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7d1a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f7d30(DAT_8c1f7e3c,ar4,ar6,ar7);
  return uVar1;
}



/* FUN_8c1f7d30 @ 8c1f7d30 callers=2 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7d30(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  
  if (ar5 == (undefined4 *)0x0) {
    return 0;
  }
  iStack_c = ar4 + 0x40;
  iStack_10 = ar4 + 0x2b;
  iStack_10 = FUN_8c1f7d80(iStack_10,&uStack_18,&uStack_14,ar7);
  ar5[1] = uStack_18;
  puVar1 = PTR_memmove_8c1f7e40;
  *ar5 = uStack_14;
  (*(code *)puVar1)(ar5 + 2,iStack_c,10,ar7);
  *(undefined1 *)((int)ar5 + 0x12) = 0;
  return iStack_10;
}



/* FUN_8c1f7d80 @ 8c1f7d80 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7d80(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iStack_24;
  
  iVar2 = 0;
  iVar4 = 0;
  uVar3 = 1;
  iVar5 = 0;
  do {
    if (*(char *)(iVar2 + ar4) == '/') break;
    if ((PTR_DAT_8c1f7e44[*(byte *)(iVar2 + ar4)] & 4) == 0) {
      uVar3 = 0;
    }
    pcVar1 = (char *)(iVar2 + ar4);
    iVar2 = iVar2 + 1;
    iVar5 = (int)*pcVar1 + iVar5 * 10 + -0x30;
  } while (iVar2 < 2);
  iStack_24 = 0;
  do {
    iVar2 = iVar2 + 1;
    if (*(char *)(iVar2 + ar4) == ' ') break;
    if ((PTR_DAT_8c1f7e44[*(byte *)(iVar2 + ar4)] & 4) == 0) {
      uVar3 = 0;
    }
    iVar4 = (int)(char)*(byte *)(iVar2 + ar4) + iVar4 * 10 + -0x30;
    iStack_24 = iStack_24 + 1;
  } while (iStack_24 < 2);
  *ar5 = iVar4;
  *ar6 = iVar5;
  return uVar3;
}



/* game_shutdown_b @ 8c1f7e48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 game_shutdown_b(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*DAT_8c1f7e8c != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x8c1f7e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*DAT_8c1f7ea0)(1);
    return uVar1;
  }
  if (*DAT_8c1f7e90 == '\x01') {
    uVar1 = (*DAT_8c1f7e94)();
    return uVar1;
  }
  *DAT_8c1f7e9c = DAT_8c1f7e98;
                    /* WARNING: Could not recover jumptable at 0x8c1f7e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c1f7ea0)(3);
  return uVar1;
}



/* FUN_8c1f7e78 @ 8c1f7e78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7e78(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c1f7ea4)(ar4,ar5,ar6,ar7);
                    /* WARNING: Could not recover jumptable at 0x8c1f7e86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c1f7ea0)(2);
  return uVar1;
}



/* FUN_8c1f7ea8 @ 8c1f7ea8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f7ea8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c1f7eba(ar4,ar5,ar6,ar7);
  return uVar1 >> 8 & 3;
}



/* FUN_8c1f7eba @ 8c1f7eba callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f7eba(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (uint)*DAT_8c1f7ec8 & (int)DAT_8c1f7ec6;
}



/* FUN_8c1f7ecc @ 8c1f7ecc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7ecc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    return 0xffffffff;
  }
  DAT_8c273a18 = ar4;
  return 0;
}



/* FUN_8c1f7eea @ 8c1f7eea callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7eea(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *in_r2;
  
  if ((*in_r2 != 0) && ((ar4 == 0 || (ar4 == 1)))) {
    DAT_8c00007e = (undefined1)ar4;
    iVar1 = FUN_8c1f97b4(2,DAT_8c273a18,ar6,ar7);
    if (iVar1 != -1) {
      return 0;
    }
  }
  return 0xffffffff;
}



/* FUN_8c1f7f1e @ 8c1f7f1e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7f1e(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (((ar4 != (undefined4 *)0x0) && (*ar4 = 0, DAT_8c273a18 != 0)) &&
     (iVar1 = FUN_8c1f97b4(0,DAT_8c273a18,ar6,ar7), iVar1 != -1)) {
    if (DAT_8c00007e == '\0') {
      *ar4 = 0;
    }
    else {
      if (DAT_8c00007e != '\x01') {
        return 0xffffffff;
      }
      *ar4 = 1;
    }
    return 0;
  }
  return 0xffffffff;
}



/* FUN_8c1f7f22 @ 8c1f7f22 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7f22(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r14;
  
  if (((unaff_r14 != (undefined4 *)0x0) && (*unaff_r14 = 0, DAT_8c273a18 != 0)) &&
     (iVar1 = FUN_8c1f97b4(0,DAT_8c273a18,ar6,ar7), iVar1 != -1)) {
    if (DAT_8c00007e == '\0') {
      *unaff_r14 = 0;
    }
    else {
      if (DAT_8c00007e != '\x01') {
        return 0xffffffff;
      }
      *unaff_r14 = 1;
    }
    return 0;
  }
  return 0xffffffff;
}



/* FUN_8c1f7f70 @ 8c1f7f70 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7f70(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *unaff_r14;
  
  if (unaff_r14 != (int *)0x0) {
    *unaff_r14 = 0x30;
    iVar1 = FUN_8c1f8094(ar4,ar5,ar6,ar7);
    if (iVar1 != 0) {
      *unaff_r14 = (int)*(char *)(iVar1 + 10);
      return 0;
    }
  }
  return 0xffffffff;
}



/* FUN_8c1f7f96 @ 8c1f7f96 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f7f96(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + -0x30;
}



/* FUN_8c1f7f9c @ 8c1f7f9c callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7f9c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int aiStack_c [2];
  
  if (ar4 != (int *)0x0) {
    *ar4 = 0;
    if ((DAT_8c273a18 != 0) && (iVar1 = FUN_8c1f97b4(0,DAT_8c273a18,ar6,ar7), iVar1 != -1)) {
      iVar1 = (int)DAT_8c00007d;
      if (DAT_8c00007d == -1) {
        FUN_8c1f7ffa(aiStack_c,iVar1,ar6,ar7);
        if (aiStack_c[0] == -1) {
          *ar4 = 1;
        }
        else {
          iVar1 = FUN_8c1f7f96(aiStack_c[0],iVar1,ar6,ar7);
          *ar4 = iVar1;
        }
      }
      else {
        *ar4 = (int)DAT_8c00007d;
      }
      return 0;
    }
  }
  return 0xffffffff;
}



/* FUN_8c1f7ffa @ 8c1f7ffa callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7ffa(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (ar4 != (int *)0x0) {
    *ar4 = 0;
    iVar1 = FUN_8c1f8094(ar4,ar5,ar6,ar7);
    if (iVar1 != 0) {
      *ar4 = (int)*(char *)(iVar1 + 0xb);
      return 0;
    }
  }
  return 0xffffffff;
}



/* FUN_8c1f7ffe @ 8c1f7ffe callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f7ffe(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *unaff_r14;
  
  if (unaff_r14 != (int *)0x0) {
    *unaff_r14 = 0;
    iVar1 = FUN_8c1f8094(ar4,ar5,ar6,ar7);
    if (iVar1 != 0) {
      *unaff_r14 = (int)*(char *)(iVar1 + 0xb);
      return 0;
    }
  }
  return 0xffffffff;
}



/* FUN_8c1f8028 @ 8c1f8028 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f8028(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *unaff_r14;
  
  if (unaff_r14 != (int *)0x0) {
    *unaff_r14 = 0x30;
    iVar1 = FUN_8c1f8094(ar4,ar5,ar6,ar7);
    if (iVar1 != 0) {
      *unaff_r14 = (int)*(char *)(iVar1 + 0xc);
      return 0;
    }
  }
  return 0xffffffff;
}



/* FUN_8c1f804e @ 8c1f804e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f804e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  
  if (ar4 == 0) {
    return 0;
  }
  uVar2 = 0;
  (*(code *)PTR_syscall_1f3b1c_8c1f80c4)(0,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_syscall_1f3b44_8c1f80c8)(uVar2,ar5,ar6,ar7);
  uVar2 = 6;
  ar5_00 = iVar1 + 2;
  (*(code *)PTR_memmove_8c1f80cc)(ar4,ar5_00,6,ar7);
  iVar1 = FUN_8c1f80d0(iVar1,ar5_00,uVar2,ar7);
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c1f8094 @ 8c1f8094 callers=3 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f8094(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_syscall_1f3b1c_8c1f80c4)(0,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = (*(code *)PTR_syscall_1f3b44_8c1f80c8)();
  return uVar2;
}



/* FUN_8c1f80d0 @ 8c1f80d0 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f80d0(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = 0;
  bVar3 = 0;
  do {
    iVar1 = iVar2 + 2;
    iVar2 = iVar2 + 1;
    bVar3 = bVar3 + ar4[iVar1];
  } while (iVar2 < 6);
  if ((bVar3 == ar4[1]) && ((byte)~bVar3 == *ar4)) {
    return 1;
  }
  return 0;
}



/* FUN_8c1f8114 @ 8c1f8114 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f8114(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f84d8(ar4,ar5,ar6,ar7);
  *DAT_8c1f81c4 = uVar1;
  *DAT_8c1f81c8 = 0;
  FUN_8c1f814c(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c1f81d0)((int)DAT_8c1f81c2,PTR_FUN_8c1f81cc,0x5c,0);
  *DAT_8c1f81d4 = uVar1;
  return 0;
}



/* FUN_8c1f813e @ 8c1f813e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f813e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *DAT_8c1f81c4 = 0;
  uVar1 = (*(code *)PTR_FUN_8c1f81d8)(*DAT_8c1f81d4);
  return uVar1;
}



/* FUN_8c1f814c @ 8c1f814c callers=1 callees=2 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f814c(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  if ((*DAT_8c1f81c8 & 1) == 0) {
    ar4 = *DAT_8c1f81c4;
    uVar1 = FUN_8c1f8462(ar4,ar5,ar6,ar7);
    *DAT_8c1f81c4 = uVar1;
  }
  uVar1 = *DAT_8c1f81c8;
  if ((uVar1 & 2) != 0) {
    uVar1 = FUN_8c1f84d8(ar4,ar5,ar6,ar7);
    *DAT_8c1f81c4 = uVar1;
  }
  return uVar1;
}



/* FUN_8c1f8176 @ 8c1f8176 callers=0 callees=4 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f8176(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  undefined4 uVar2;
  int a6;
  int a5;
  
  if ((*DAT_8c1f81c8 & 1) == 1) {
    uVar2 = FUN_8c1f84d8(ar4,ar5,ar6,ar7);
    FUN_8c1f8300(uVar2,ar4,ar6,ar7);
    *DAT_8c1f81c4 = uVar2;
  }
  else {
    FUN_8c1f8300(*DAT_8c1f81c4,ar4,ar6,ar7);
  }
  a6 = (int)*(char *)((int)ar4 + 3);
  a5 = (int)(char)ar4[1];
  uVar2 = FUN_8c1f8614((int)*ar4,a5,a6,ar7);
  *(char *)((int)ar4 + 7) = (char)uVar2;
  uVar2 = FUN_8c1f8650(ar4,a5,a6,ar7);
  puVar1 = DAT_8c1f81c8;
  *(char *)(ar4 + 4) = (char)uVar2;
  return *puVar1;
}



/* FUN_8c1f81dc @ 8c1f81dc callers=0 callees=5 */

/* WARNING: Unknown calling convention */

int FUN_8c1f81dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint *a5;
  uint auStack_8 [2];
  
  a5 = auStack_8;
  FUN_8c1f826c(ar4,auStack_8,ar6,ar7);
  iVar1 = aica_reg_1f85a0(ar4,a5,ar6,ar7);
  if (((iVar1 == 0) && (iVar1 = aica_reg_1f85c8(auStack_8[0] & 0xffff,a5,ar6,ar7), iVar1 == 0)) &&
     (iVar1 = aica_reg_1f85ee(auStack_8[0] >> 0x10,a5,ar6,ar7), iVar1 == 0)) {
    uVar2 = FUN_8c1f84d8(0,a5,ar6,ar7);
    if ((uVar2 == auStack_8[0]) || (uVar2 == auStack_8[0] + 1)) {
      *DAT_8c1f82f0 = uVar2;
      iVar1 = 0;
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* FUN_8c1f823a @ 8c1f823a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f823a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = ar5;
  FUN_8c1f826c(ar4,&uStack_c,ar6,ar7);
  FUN_8c1f826c(uStack_8,&uStack_10,ar6,ar7);
  if (uStack_c == uStack_10) {
    uVar1 = 0;
  }
  else if (uStack_10 < uStack_c) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* FUN_8c1f826c @ 8c1f826c callers=3 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f826c(ushort *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int aiStack_34 [13];
  
  FUN_8c010794(0x30,aiStack_34,&DAT_8c26c964);
  uVar3 = *ar4 - 0x79c;
  iVar2 = (uVar3 >> 2) + (*ar4 - 0x79e) * 0x16d;
  if (((uVar3 & 3) == 0) && ((byte)ar4[1] < 3)) {
    iVar2 = iVar2 + -1;
  }
  uVar1 = ar4[3];
  *ar5 = (((iVar2 + aiStack_34[(byte)ar4[1] - 1] + (*(byte *)((int)ar4 + 3) - 1)) * 0x18 +
          (uint)(byte)ar4[2]) * 0x3c + (uint)*(byte *)((int)ar4 + 5)) * 0x3c + (uint)(byte)uVar1;
  return (uint)(byte)uVar1;
}



/* FUN_8c1f8300 @ 8c1f8300 callers=1 callees=2 */

/* WARNING: Removing unreachable block (ram,0x8c1f83b4) */
/* WARNING: Removing unreachable block (ram,0x8c1f8394) */
/* WARNING: Removing unreachable block (ram,0x8c1f8428) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f8300(undefined4 ar4,ushort *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int a5;
  undefined4 d;
  int extraout_r2;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_38 [52];
  
  puVar6 = auStack_38;
  FUN_8c010794(0x30,auStack_38,&DAT_8c26c994);
  uVar7 = 0x3c;
  uVar1 = libgcc_divide_helper_0106dc(ar4,0x3c);
  *(char *)(ar5 + 3) = (char)uVar1;
  uVar1 = libgcc_divide_helper_01051c(ar4,uVar7);
  uVar2 = libgcc_divide_helper_0106dc(uVar1,uVar7);
  *(char *)((int)ar5 + 5) = (char)uVar2;
  uVar1 = libgcc_divide_helper_01051c(uVar1,uVar7);
  uVar7 = 0x18;
  uVar2 = libgcc_divide_helper_0106dc(uVar1,0x18);
  *(char *)(ar5 + 2) = (char)uVar2;
  uVar1 = libgcc_divide_helper_01051c(uVar1,uVar7);
  iVar3 = libgcc_divide_helper_01051c(uVar1,0x16d);
  uVar4 = libgcc_divide_helper_0106dc(uVar1,d);
  uVar5 = iVar3 + 1U >> 2;
  if (uVar4 < uVar5) {
    *ar5 = (short)iVar3 + 0x79d;
    uVar4 = uVar4 + (extraout_r2 - uVar5);
    if ((*ar5 & 3) == 0) {
      uVar4 = uVar4 + 1;
    }
  }
  else {
    uVar4 = uVar4 - uVar5;
    *ar5 = (short)iVar3 + 0x79e;
  }
  uVar5 = 1;
  uVar1 = 0xc;
  if ((*ar5 & 3) == 0) {
    if (*(uint *)(puVar6 + 4) <= uVar4) {
      uVar5 = 2;
      do {
        if (uVar4 < *(int *)(puVar6 + uVar5 * 4) + 1U) break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0xc);
    }
  }
  else {
    uVar5 = 1;
    do {
      if (uVar4 < *(uint *)(puVar6 + uVar5 * 4)) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0xc);
  }
  *(char *)(ar5 + 1) = (char)uVar5;
  *(char *)((int)ar5 + 3) = ((char)uVar4 - (char)*(undefined4 *)(puVar6 + (uVar5 - 1) * 4)) + '\x01'
  ;
  if (((*ar5 & 3) == 0) && (2 < (byte)ar5[1])) {
    *(char *)((int)ar5 + 3) = *(char *)((int)ar5 + 3) + -1;
  }
  iVar3 = (int)*(char *)((int)ar5 + 3);
  a5 = (int)(char)ar5[1];
  uVar2 = FUN_8c1f8614((int)(short)*ar5,a5,iVar3,0xc);
  *(char *)((int)ar5 + 7) = (char)uVar2;
  uVar1 = FUN_8c1f8650(ar5,a5,iVar3,uVar1);
  *(char *)(ar5 + 4) = (char)uVar1;
  return uVar1;
}



/* FUN_8c1f8462 @ 8c1f8462 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1f8462(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *a4;
  int aiStack_24 [3];
  
  piVar3 = aiStack_24;
  piVar4 = piVar3;
  for (a4 = piVar3; a4 < aiStack_24 + 2; a4 = a4 + 1) {
    iVar2 = aica_reg_1f8544(a4,ar5,ar6,ar7);
    if (iVar2 != 0) {
      *piVar4 = ar4;
    }
    piVar4 = piVar4 + 1;
  }
  bVar1 = false;
  piVar4 = aiStack_24 + 1;
  do {
    if (aiStack_24 + 1 <= piVar3) {
LAB_8c1f84bc:
      if (!bVar1) {
        ar4 = aiStack_24[0];
      }
      return ar4;
    }
    if (*piVar3 != *piVar4) {
      bVar1 = true;
      goto LAB_8c1f84bc;
    }
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while( true );
}



/* FUN_8c1f84d8 @ 8c1f84d8 callers=4 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1f84d8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iStack_20;
  int aiStack_1c [2];
  
  bVar1 = false;
  do {
    iVar2 = aica_reg_1f8544(aiStack_1c,ar5,ar6,ar7);
    if (iVar2 == 0) {
      bVar1 = true;
    }
  } while (!bVar1);
  if (bVar1) {
    bVar1 = false;
    do {
      iVar2 = 0;
      do {
        iVar3 = aica_reg_1f8544(&iStack_20,ar5,ar6,ar7);
        if ((iVar3 != 0) || (aiStack_1c[0] != iStack_20)) break;
        iVar2 = iVar2 + 1;
        aiStack_1c[0] = iStack_20;
      } while (iVar2 < 3);
      if (iVar2 == 3) {
        bVar1 = true;
      }
    } while (!bVar1);
  }
  else {
    iStack_20 = -1;
  }
  return iStack_20;
}



/* aica_reg_1f8544 @ 8c1f8544 callers=2 callees=1 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

undefined4 aica_reg_1f8544(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar5_00;
  undefined4 a6;
  undefined4 a7;
  int iStack_10;
  uint uStack_c;
  
  ar5_00 = &iStack_10;
  a6 = 4;
  a7 = 2;
  iVar1 = (*(code *)PTR_FUN_8c1f869c)(DAT_8c1f8698,ar5_00,4,2,1,1);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  *ar4 = iStack_10 << 0x10 & DAT_8c1f86a0 | uStack_c & 0xffff;
  FUN_8c1f86e4(iStack_10,ar5_00,a6,a7);
  FUN_8c1f86e4(uStack_c,ar5_00,a6,a7);
  return 0;
}



/* aica_reg_1f85a0 @ 8c1f85a0 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 aica_reg_1f85a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 auStack_c [4];
  
  auStack_c[0] = 1;
  (*(code *)PTR_FUN_8c1f86a8)(auStack_c,DAT_8c1f86a4,4,1,0,0);
  return 0;
}



/* aica_reg_1f85c8 @ 8c1f85c8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 aica_reg_1f85c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 auStack_c [2];
  
  auStack_c[0] = ar4;
  (*(code *)PTR_FUN_8c1f86a8)(auStack_c,DAT_8c1f86ac,4,1,0,0);
  return 0;
}



/* aica_reg_1f85ee @ 8c1f85ee callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 aica_reg_1f85ee(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 auStack_c [2];
  
  auStack_c[0] = ar4;
  (*(code *)PTR_FUN_8c1f86a8)(auStack_c,DAT_8c1f8698,4,1,0,0);
  return 0;
}



/* FUN_8c1f8614 @ 8c1f8614 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f8614(uint ar4,uint ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((ar5 & 0xff) < 3) {
    ar5 = ar5 + 0xc;
    ar4 = ar4 - 1;
  }
  iVar1 = libgcc_divide_helper_010468((ar5 & 0xff) * 0xd + 8,5);
  uVar2 = libgcc_divide_helper_010614
                    (((int)(ar4 & 0xffff) >> 2) + iVar1 + (ar4 & 0xffff) + (ar6 & 0xff) + -0xf,7);
  return uVar2;
}



/* FUN_8c1f8650 @ 8c1f8650 callers=2 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f8650(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint auStack_8 [2];
  
  FUN_8c1f826c(ar4,auStack_8,ar6,ar7);
  iVar3 = 0x26ee7f;
  if (auStack_8[0] < 0x5cb417d1) {
    iVar1 = libgcc_divide_helper_0106dc(0x5cb417d1 - auStack_8[0],0x26ee7f);
    iVar3 = iVar3 - iVar1;
  }
  else {
    iVar3 = libgcc_divide_helper_0106dc(auStack_8[0] + 0xa34be82f,0x26ee7f);
  }
  uVar2 = libgcc_divide_helper_01051c(iVar3,0x15180);
  return uVar2;
}



/* FUN_8c1f86e4 @ 8c1f86e4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f86e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = DAT_8c1f8708;
  uVar2 = *DAT_8c1f8704;
  if ((uVar2 & 8) != 0) {
    if ((undefined4 *)*DAT_8c1f8708 < (undefined4 *)*DAT_8c1f870c) {
      *(undefined4 *)*DAT_8c1f8708 = ar4;
      *piVar1 = *piVar1 + 4;
    }
  }
  return uVar2;
}



/* FUN_8c1f8710 @ 8c1f8710 callers=2 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1f8738) */
/* WARNING: Unknown calling convention */

uint FUN_8c1f8710(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar2 = 0;
  pbVar4 = ar4 + 8;
  do {
    bVar1 = *ar4;
    ar4 = ar4 + 1;
    uVar3 = uVar2;
    if ((&DAT_8c26c9f0)[bVar1 & 0xf] == (&DAT_8c26c9f0)[(int)(uint)bVar1 >> 4]) {
      uVar3 = uVar2 | 1;
    }
    uVar2 = uVar3 << 1;
  } while (ar4 < pbVar4);
  return uVar3 & 0x7fffffff;
}



/* FUN_8c1f875c @ 8c1f875c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f875c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 a5;
  
  a5 = 0;
  (*(code *)PTR_FUN_8c1f87f4)(0,0,ar6,ar7);
  uVar1 = FUN_8c1f8710(*DAT_8c1f87f8,a5,ar6,ar7);
  if ((((uVar1 & 0xff) != (int)DAT_8c1f87ee) && ((uint)*(byte *)*DAT_8c1f87f8 == (int)DAT_8c1f87ee))
     && ((uVar1 & 0xff) != (uint)*(byte *)(*DAT_8c1f87f8 + 0x3b))) {
    *DAT_8c1f87fc = 1;
    return 0;
  }
  (*(code *)PTR_memmove_8c1f8804)(DAT_8c1f8800,*DAT_8c1f87f8,0x3c,ar7);
  return 1;
}



/* FUN_8c1f87ae @ 8c1f87ae callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f87ae(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_8c1f8800;
  uVar3 = FUN_8c1f8710(DAT_8c1f8800,ar5,ar6,ar7);
  puVar2 = PTR_FUN_8c1f8808;
  *(char *)(iVar1 + 0x3b) = (char)uVar3;
  uVar3 = (*(code *)puVar2)(0,iVar1);
  return uVar3;
}



/* FUN_8c1f881c @ 8c1f881c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f881c(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (*(code *)PTR_FUN_8c1f88b0)(ar4,ar5,ar6,ar7);
  puVar1 = PTR_FUN_8c1f88b4;
  if (iVar2 == 0) {
    do {
      iVar2 = (*(code *)puVar1)(ar4,ar5,ar6,ar7);
      ar4 = (uint)(iVar2 == 2);
    } while (iVar2 == 2);
    return 0;
  }
  return 0xffffffff;
}



/* FUN_8c1f884c @ 8c1f884c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f884c(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined1 auStack_48 [68];
  
  iVar2 = FUN_8c1f881c(ar4,auStack_48,ar6,ar7);
  if (iVar2 == 0) {
    ar6_00 = 0x3c;
    iVar2 = (*(code *)PTR_FUN_8c1f88b8)(auStack_48,ar5,0x3c,ar7);
    if (iVar2 == 0) {
      return 3;
    }
    iVar2 = (*(code *)PTR_FUN_8c1f88bc)(ar4,ar5,ar6_00,ar7);
    puVar1 = PTR_FUN_8c1f88b4;
    if (iVar2 == 0) {
      do {
        iVar2 = (*(code *)puVar1)(ar4,ar5,ar6_00,ar7);
        ar4 = (uint)(iVar2 == 2);
      } while (iVar2 == 2);
      return 0;
    }
  }
  return 0xffffffff;
}



/* sh4_tmu_1f88c0 @ 8c1f88c0 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint sh4_tmu_1f88c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  byte *pbVar2;
  uint uVar3;
  
  puVar1 = DAT_8c1f89e4;
  *DAT_8c1f89e4 = 0;
  pbVar2 = DAT_8c1f89e8;
  *DAT_8c1f89e8 = *DAT_8c1f89e8 & 0xfe;
  *DAT_8c1f89ec = 2;
  *DAT_8c1f89f0 = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
  uVar3 = (int)(char)*pbVar2 | 1;
  *pbVar2 = (byte)uVar3;
  return uVar3;
}



/* sh4_tmu_1f88e6 @ 8c1f88e6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int sh4_tmu_1f88e6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return -1 - *DAT_8c1f89f4;
}



/* FUN_8c1f88f0 @ 8c1f88f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f88f0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return ar5 - ar4;
}



/* FUN_8c1f88f6 @ 8c1f88f6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f88f6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int extraout_r3;
  undefined4 d;
  
  d = 100;
  iVar1 = libgcc_divide_helper_0106dc(ar4,100);
  libgcc_divide_helper_01051c(iVar1 << 7,d);
  iVar1 = libgcc_divide_helper_01051c(ar4,d);
  return iVar1 * 0x80 + extraout_r3;
}



/* FUN_8c1f892a @ 8c1f892a callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1f8936) */
/* WARNING: Removing unreachable block (ram,0x8c1f893c) */
/* WARNING: Unknown calling convention */

int FUN_8c1f892a(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ((ar4 & 0x7f) * 100 >> 7) + (ar4 >> 7) * 100;
}



/* sh4_tmu_1f8a64 @ 8c1f8a64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint sh4_tmu_1f8a64(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  *DAT_8c1f8b28 = 0;
  cVar1 = *DAT_8c1f8b0c;
  *DAT_8c1f8b0c = (char)((int)cVar1 | 4U);
  return (int)cVar1 | 4U;
}



/* sh4_tmu_1f8b34 @ 8c1f8b34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint sh4_tmu_1f8b34(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = DAT_8c1f8c14;
  if (((((ushort)ar4 != 0) && ((ushort)ar4 != 1)) && ((ushort)ar4 != 2)) &&
     (((ushort)ar4 != 3 && ((ushort)ar4 != 4)))) {
    ar4._0_2_ = 2;
  }
  cVar1 = *DAT_8c1f8c14;
  cVar2 = *DAT_8c1f8c14;
  *DAT_8c1f8c14 = (char)((int)cVar2 & 0xfbU);
  *DAT_8c1f8c18 = *DAT_8c1f8c18 & 0xfff8 | (ushort)ar4;
  *pcVar3 = cVar1;
  return (int)cVar2 & 0xfbU;
}



/* sh4_tmu_1f8b6e @ 8c1f8b6e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint sh4_tmu_1f8b6e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = DAT_8c1f8c14;
  cVar1 = *DAT_8c1f8c14;
  cVar2 = *DAT_8c1f8c14;
  *DAT_8c1f8c14 = (char)((int)cVar2 & 0xfbU);
  *DAT_8c1f8c1c = 0xffffffff;
  *DAT_8c1f8c20 = -ar4;
  *pcVar3 = cVar1;
  return (int)cVar2 & 0xfbU;
}



/* sh4_tmu_1f8b88 @ 8c1f8b88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int sh4_tmu_1f8b88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return -1 - *DAT_8c1f8c20;
}



/* FUN_8c1f8b92 @ 8c1f8b92 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f8b92(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int extraout_r3;
  int iVar2;
  undefined4 d;
  
  if ((short)ar5 == 0) {
    iVar2 = 8;
  }
  else if ((short)ar5 == 1) {
    iVar2 = 0x20;
  }
  else if ((short)ar5 == 3) {
    iVar2 = 0x200;
  }
  else if ((short)ar5 == 4) {
    iVar2 = 0x800;
  }
  else {
    iVar2 = 0x80;
  }
  d = 100;
  iVar1 = libgcc_divide_helper_0106dc(ar4,100);
  libgcc_divide_helper_01051c(iVar1 * iVar2,d);
  iVar1 = libgcc_divide_helper_01051c(ar4,d);
  return iVar1 * iVar2 + extraout_r3;
}



/* FUN_8c1f8be8 @ 8c1f8be8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1f8be8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int extraout_r3;
  undefined4 d;
  int iVar2;
  
  if ((short)ar5 == 0) {
    d = 8;
  }
  else if ((short)ar5 == 1) {
    d = 0x20;
  }
  else if ((short)ar5 == 3) {
    d = 0x200;
  }
  else if ((short)ar5 == 4) {
    d = 0x800;
  }
  else {
    d = 0x80;
  }
  iVar2 = 100;
  iVar1 = libgcc_divide_helper_0106dc(ar4,d);
  libgcc_divide_helper_01051c(iVar1 * iVar2,d);
  iVar1 = libgcc_divide_helper_01051c(ar4,d);
  return iVar1 * iVar2 + extraout_r3;
}



/* g2dma_1f8c6c @ 8c1f8c6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 g2dma_1f8c6c(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (uint)((*DAT_8c1f8c7c & 1) == 0);
  return 0;
}



/* FUN_8c1f8c80 @ 8c1f8c80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f8c80(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int aiStack_10 [2];
  
  do {
    g2dma_1f8c6c(aiStack_10,ar5,ar6,ar7);
  } while (aiStack_10[0] != 1);
  *(int *)(DAT_8c273a28 + 0x110) = *(int *)(DAT_8c273a28 + 0x110) + 1;
  return 0;
}



/* FUN_8c1f8cbc @ 8c1f8cbc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c1f8cbc(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte in_MD;
  byte bVar4;
  byte in_RB;
  byte bVar5;
  byte in_BL;
  byte bVar6;
  byte in_FD;
  byte bVar7;
  byte in_M;
  byte extraout_M;
  byte bVar8;
  byte in_Q;
  byte extraout_Q;
  byte bVar9;
  byte in_IMASK;
  byte bVar10;
  byte in_S;
  byte extraout_S;
  byte bVar11;
  byte in_T;
  byte bVar12;
  byte extraout_T;
  
  uVar3 = (uint)in_T | (uint)in_S << 1;
  uVar1 = uVar3 | (uint)in_IMASK << 4 | (uint)in_Q << 8;
  uVar2 = uVar1 | (uint)in_M << 9;
  bVar6 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar4 = bVar6 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar11 = (byte)((uVar3 & 2) >> 1);
  bVar10 = 0;
  bVar9 = (byte)(uVar1 >> 8) & 1;
  bVar8 = (byte)((uVar2 & 0x200) >> 9);
  bVar7 = (byte)(((uVar2 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar6 = (bVar6 & 0x10) >> 4;
  bVar5 = (bVar4 & 0x20) >> 5;
  bVar4 = ((bVar4 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  *(undefined4 *)(*DAT_8c273a28 + *ar4 * 0x20 + 0x14) = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 1;
  DAT_8c273a28[*ar4 + 0x3b] = DAT_8c273a28[*ar4 + 0x3b] + 1;
  uVar3 = *ar4 + 0xf;
  if ((int)uVar3 < 0) {
    _DAT_a05f6900 = 1 >> (~uVar3 & 0x1f) + 1;
  }
  else {
    _DAT_a05f6900 = 1 << (uVar3 & 0x1f);
  }
  bVar12 = ar4[7] == 0;
  if (!(bool)bVar12) {
    (*(code *)ar4[7])(ar4[8],_DAT_a05f6900,&DAT_8c273a28,ar7);
    bVar8 = extraout_M;
    bVar9 = extraout_Q;
    bVar11 = extraout_S;
    bVar12 = extraout_T;
  }
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar12 | (uint)bVar11 << 1 | (uint)bVar10 << 4) & 0xffffff0f | (uint)bVar9 << 8 |
         (uint)bVar8 << 9 | (uint)bVar7 << 0xf | (uint)bVar6 << 0x1c | (uint)bVar5 << 0x1d |
         (uint)bVar4 << 0x1e;
}



/* FUN_8c1f8d48 @ 8c1f8d48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f8d48(int *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar5 = (uint)((*(uint *)(*ar4 * 0x20 + *DAT_8c273a28 + 0x18) & 1) != 0);
  return 0;
}



/* FUN_8c1f8d98 @ 8c1f8d98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f8d98(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)(ar5 * 0x34 + DAT_8c273a28 + 4);
  if (piVar1[10] == 1) {
    uVar2 = 0x90101;
  }
  else {
    *(int *)(*piVar1 * 0x34 + DAT_8c273a28 + 4) = *piVar1;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x2c) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x30) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x34) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 8) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0xc) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x10) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x14) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x18) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x1c) = 3;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x20) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x24) = 0;
    piVar1[10] = 1;
    *ar4 = piVar1;
  }
  return uVar2;
}



/* FUN_8c1f8eb0 @ 8c1f8eb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f8eb0(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  DAT_8c273a28[*ar4 * 0xd + 1] = *ar4;
  DAT_8c273a28[*ar4 * 0xd + 0xb] = 0;
  DAT_8c273a28[*ar4 * 0xd + 0xc] = 0;
  DAT_8c273a28[*ar4 * 0xd + 0xd] = 0;
  DAT_8c273a28[*ar4 * 0xd + 2] = 0;
  DAT_8c273a28[*ar4 * 0xd + 3] = 0;
  DAT_8c273a28[*ar4 * 0xd + 4] = 0;
  DAT_8c273a28[*ar4 * 0xd + 5] = 0;
  DAT_8c273a28[*ar4 * 0xd + 6] = 0;
  DAT_8c273a28[*ar4 * 0xd + 7] = 3;
  DAT_8c273a28[*ar4 * 0xd + 8] = 0;
  DAT_8c273a28[*ar4 * 0xd + 9] = 0;
  *(undefined4 *)(*ar4 * 0x20 + *DAT_8c273a28 + 0x14) = 0;
  return 0;
}



/* FUN_8c1f8fa8 @ 8c1f8fa8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f8fa8(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(*ar4 * 0x20 + *DAT_8c273a28 + 0x1c) = 0;
  return 0;
}



/* FUN_8c1f8fc8 @ 8c1f8fc8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f8fc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_8c1f8fa8(DAT_8c273a28 + 4 + uVar1,ar5,ar6,ar7);
    uVar1 = uVar1 + 0x34;
  } while (uVar1 < 0xd0);
  _DAT_8c474bac = 0;
  return 0;
}



/* FUN_8c1f8fcc @ 8c1f8fcc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f8fcc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint unaff_r14;
  
  do {
    FUN_8c1f8fa8(DAT_8c273a28 + 4 + unaff_r14,ar5,ar6,ar7);
    unaff_r14 = unaff_r14 + 0x34;
  } while (unaff_r14 < 0xd0);
  _DAT_8c474bac = 0;
  return 0;
}



/* FUN_8c1f900c @ 8c1f900c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c1f900c(int ar4,uint ar5,uint ar6,uint ar7,uint s0,int s4,int s8,undefined4 s12,undefined4 s16)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = DAT_8c1f90a0;
  uVar1 = DAT_8c1f909c;
  uVar3 = ar6 & DAT_8c1f9098;
  *(uint *)(ar4 + 4) = ar5 & DAT_8c1f9098;
  *(uint *)(ar4 + 8) = uVar3;
  *(uint *)(ar4 + 0xc) = ar7 & uVar1 | uVar2;
  *(uint *)(ar4 + 0x10) = s0 & 1;
  if (s4 == 1) {
    *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) | 1;
  }
  else {
    *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) & 0xfffffffd;
  }
  if (s8 == 1) {
    *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) | 4;
  }
  else {
    *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) & 0xfffffffe;
  }
  *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) & 7;
  *(undefined4 *)(ar4 + 0x1c) = s12;
  *(undefined4 *)(ar4 + 0x20) = s16;
  *(undefined4 *)(ar4 + 0x30) = 0;
  return 0;
}



/* FUN_8c1f90a4 @ 8c1f90a4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f90a4(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  _DAT_a05f78bc = ((ar4 & 0x7f00000) >> 0x14) << 8 | (ar5 & 0x7f00000) >> 0x14 | 0x46590000;
  DAT_8c273a20 = _DAT_a05f78bc;
  return 0;
}



/* FUN_8c1f9108 @ 8c1f9108 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f9108(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(*ar4 * 0x20 + *DAT_8c273a28 + 0x1c) = 1;
  return 0;
}



/* FUN_8c1f9150 @ 8c1f9150 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f9150(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_8c1f9108(DAT_8c273a28 + 4 + uVar1,ar5,ar6,ar7);
    uVar1 = uVar1 + 0x34;
  } while (uVar1 < 0xd0);
  _DAT_8c474bac = 1;
  return 0;
}



/* FUN_8c1f9154 @ 8c1f9154 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f9154(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint unaff_r14;
  
  do {
    FUN_8c1f9108(DAT_8c273a28 + 4 + unaff_r14,ar5,ar6,ar7);
    unaff_r14 = unaff_r14 + 0x34;
  } while (unaff_r14 < 0xd0);
  _DAT_8c474bac = 1;
  return 0;
}



/* FUN_8c1f9194 @ 8c1f9194 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f9194(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_stack_ffffffe4;
  
  uVar2 = 0;
  piVar3 = (int *)(*DAT_8c273a28 + *ar4 * 0x20);
  FUN_8c1f8d48(ar4,&stack0xffffffe4,ar6,ar7);
  if (in_stack_ffffffe4 == 1) {
    uVar2 = 0x90180;
  }
  else {
    FUN_8c1f9e32(ar4[2] & 0x1fffffffU | 0xa0000000,ar4[3] & 0x7fffffe0,ar6,ar7,in_stack_ffffffe4);
    piVar3[5] = 0;
    *piVar3 = ar4[1];
    piVar3[1] = ar4[2];
    piVar3[2] = ar4[3];
    piVar3[3] = ar4[4];
    if (ar5 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
    piVar3[4] = uVar1 | ar4[5];
    piVar3[5] = 1;
    ar4[0xb] = 1;
    DAT_8c273a28[*ar4 + 0x37] = DAT_8c273a28[*ar4 + 0x37] + 1;
    piVar3[6] = 1;
  }
  return uVar2;
}



/* g2dma_1f9270 @ 8c1f9270 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 g2dma_1f9270(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (uint)((*DAT_8c1f9280 & 0x10) == 0);
  return 0;
}



/* FUN_8c1f9284 @ 8c1f9284 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f9284(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int aiStack_10 [2];
  
  do {
    g2dma_1f9270(aiStack_10,ar5,ar6,ar7);
  } while (aiStack_10[0] != 1);
  *(int *)(DAT_8c273a28 + 0x10c) = *(int *)(DAT_8c273a28 + 0x10c) + 1;
  return 0;
}



/* FUN_8c1f92c0 @ 8c1f92c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f92c0(undefined4 *ar4,undefined4 *ar5,undefined4 *ar6,int ar7,int s0,int s4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 *ar4_00;
  undefined4 *ar5_00;
  undefined4 *ar6_00;
  int ar7_00;
  int iVar4;
  int unaff_r13;
  
  iVar4 = 0;
  ar5_00 = (undefined4 *)0x1;
  ar4_00 = (undefined4 *)0xffffffff;
  if (s0 == 0) {
    iVar4 = 0;
  }
  else if (s0 == 1) {
    iVar4 = 1;
  }
  else if (s0 == 2) {
    iVar4 = -1;
  }
  if (s4 == 0) {
    unaff_r13 = 0;
  }
  else if (s4 == 1) {
    unaff_r13 = 1;
  }
  else if (s4 == 2) {
    unaff_r13 = -1;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  (*(code *)PTR_FUN_8c1f939c)(0xffffffff,1,ar6,ar7);
  (*(code *)PTR_FUN_8c1f93a0)(ar4_00,ar5_00,ar6_00,ar7_00);
  if (ar6 == (undefined4 *)0x1) {
    ar4_00 = (undefined4 *)0x0;
    ar5_00 = ar4;
    ar6_00 = ar5;
    if (0 < ar7) {
      do {
        uVar1 = *(undefined1 *)ar5_00;
        ar4_00 = (undefined4 *)((int)ar4_00 + 1);
        ar5_00 = (undefined4 *)((int)ar5_00 + iVar4);
        *(undefined1 *)ar6_00 = uVar1;
        ar6_00 = (undefined4 *)((int)ar6_00 + unaff_r13);
      } while ((int)ar4_00 < ar7);
    }
  }
  else if (ar6 == (undefined4 *)0x2) {
    ar7_00 = iVar4 * 2;
    ar5_00 = (undefined4 *)0x0;
    ar4_00 = ar5;
    ar6_00 = ar4;
    if (0 < ar7) {
      do {
        uVar2 = *(undefined2 *)ar6_00;
        ar5_00 = (undefined4 *)((int)ar5_00 + 1);
        ar6_00 = (undefined4 *)((int)ar6_00 + ar7_00);
        *(undefined2 *)ar4_00 = uVar2;
        ar4_00 = (undefined4 *)((int)ar4_00 + unaff_r13 * 2);
      } while ((int)ar5_00 < ar7);
    }
  }
  else if (ar6 == (undefined4 *)0x4) {
    ar7_00 = iVar4 * 4;
    ar6_00 = (undefined4 *)0x0;
    ar4_00 = ar5;
    ar5_00 = ar4;
    if (0 < ar7) {
      do {
        uVar3 = *ar4;
        ar6_00 = (undefined4 *)((int)ar6_00 + 1);
        ar4 = ar4 + iVar4;
        *ar5 = uVar3;
        ar5 = ar5 + unaff_r13;
        ar4_00 = ar5;
        ar5_00 = ar4;
      } while ((int)ar6_00 < ar7);
    }
  }
  (*(code *)PTR_FUN_8c1f9400)(ar4_00,ar5_00,ar6_00,ar7_00);
  return 0;
}



/* s_nsyG2_Ver_1_01_12_Build_Dec__1f9416 @ 8c1f9408 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4
s_nsyG2_Ver_1_01_12_Build_Dec__1f9416(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 a6;
  int iVar3;
  int iVar4;
  
  log_message(PTR_s_syG2_Ver_1_01_12_Build_Dec_06_19_8c273a30,ar5,ar6,ar7);
  a6 = 0x114;
  uVar2 = 0xff;
  DAT_8c273a28 = (undefined4 *)&DAT_8c474a80;
  memset(&DAT_8c474a80,0xff,0x114,ar7);
  *DAT_8c273a28 = 0xa05f7800;
  DAT_8c273a28[0x35] = 1;
  DAT_8c273a28[0x36] = 0;
  iVar3 = 0;
  do {
    DAT_8c273a28[iVar3 * 0xd + 1] = iVar3;
    DAT_8c273a28[iVar3 * 0xd + 0xb] = 0;
    DAT_8c273a28[iVar3 * 0xd + 0xc] = 0;
    DAT_8c273a28[iVar3 * 0xd + 0xd] = 0;
    DAT_8c273a28[iVar3 * 0xd + 2] = 0;
    DAT_8c273a28[iVar3 * 0xd + 3] = 0;
    DAT_8c273a28[iVar3 * 0xd + 4] = 0;
    DAT_8c273a28[iVar3 * 0xd + 5] = 0;
    DAT_8c273a28[iVar3 * 0xd + 6] = 0;
    DAT_8c273a28[iVar3 * 0xd + 7] = 3;
    DAT_8c273a28[iVar3 * 0xd + 8] = 0;
    DAT_8c273a28[iVar3 * 0xd + 9] = 0;
    FUN_8c1f8eb0(DAT_8c273a28 + iVar3 * 0xd + 1,uVar2,a6,ar7);
    iVar4 = iVar3 + 1;
    DAT_8c273a28[iVar3 + 0x37] = 0;
    DAT_8c273a28[iVar3 + 0x3f] = 0;
    DAT_8c273a28[iVar3 + 0x3b] = 0;
    iVar3 = iVar4;
  } while (iVar4 < 4);
  DAT_8c273a28[0x43] = 0;
  DAT_8c273a28[0x44] = 0;
  FUN_8c1f90a4(0xc000000,0xcffffff,a6,ar7);
  DAT_8c273a28[0x35] = 1;
  puVar1 = DAT_8c273a28 + 10;
  uVar2 = FUN_8c1fa244(0xa60,FUN_8c1f8cbc,0x10,DAT_8c273a28 + 1);
  *puVar1 = uVar2;
  puVar1 = DAT_8c273a28 + 0x17;
  uVar2 = FUN_8c1fa244(0xa80,FUN_8c1f8cbc,0x10,DAT_8c273a28 + 0xe);
  *puVar1 = uVar2;
  puVar1 = DAT_8c273a28 + 0x24;
  uVar2 = FUN_8c1fa244(0xaa0,FUN_8c1f8cbc,0x10,DAT_8c273a28 + 0x1b);
  *puVar1 = uVar2;
  puVar1 = DAT_8c273a28 + 0x31;
  uVar2 = FUN_8c1fa244(0xac0,FUN_8c1f8cbc,0x10,DAT_8c273a28 + 0x28);
  *puVar1 = uVar2;
  _DAT_8c474bac = 0;
  return 0;
}



/* FUN_8c1f9610 @ 8c1f9610 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f9610(undefined4 *ar4,undefined4 *ar5,int ar6,int ar7,int s0,int s4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 ar4_00;
  undefined4 ar5_00;
  int ar6_00;
  int ar7_00;
  uint uVar3;
  int unaff_r9;
  int unaff_r10;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  
  ar5_00 = 1;
  ar4_00 = 0xffffffff;
  if (s0 == 0) {
    unaff_r10 = 0;
  }
  else if (s0 == 1) {
    unaff_r10 = 1;
  }
  else if (s0 == 2) {
    unaff_r10 = -1;
  }
  if (s4 == 0) {
    unaff_r9 = 0;
  }
  else if (s4 == 1) {
    unaff_r9 = 1;
  }
  else if (s4 == 2) {
    unaff_r9 = -1;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  (*(code *)PTR_FUN_8c1f96e8)(0xffffffff,1,ar6,ar7);
  puVar1 = PTR_FUN_8c1f96ec;
  (*(code *)PTR_FUN_8c1f96ec)(ar4_00,ar5_00,ar6_00,ar7_00);
  puVar2 = PTR_FUN_8c1f96f0;
  puStack_30 = ar4;
  puStack_2c = ar5;
  if (ar6 == 1) {
    uVar3 = 0;
    if (0 < ar7) {
      do {
        if ((uVar3 & 7) == 0) {
          (*(code *)puVar1)(ar4_00,ar5_00,ar6_00,ar7_00);
          (*(code *)puVar2)(ar4_00,ar5_00,ar6_00,ar7_00);
        }
        uVar3 = uVar3 + 1;
        *(undefined1 *)puStack_2c = *(undefined1 *)puStack_30;
        puStack_30 = (undefined4 *)((int)puStack_30 + unaff_r10);
        puStack_2c = (undefined4 *)((int)puStack_2c + unaff_r9);
      } while ((int)uVar3 < ar7);
    }
  }
  else if (ar6 == 2) {
    uVar3 = 0;
    if (0 < ar7) {
      do {
        if ((uVar3 & 7) == 0) {
          (*(code *)puVar1)(ar4_00,ar5_00,ar6_00,ar7_00);
          (*(code *)puVar2)(ar4_00,ar5_00,ar6_00,ar7_00);
        }
        uVar3 = uVar3 + 1;
        *(undefined2 *)puStack_2c = *(undefined2 *)puStack_30;
        puStack_30 = (undefined4 *)((int)puStack_30 + unaff_r10 * 2);
        puStack_2c = (undefined4 *)((int)puStack_2c + unaff_r9 * 2);
      } while ((int)uVar3 < ar7);
    }
  }
  else if ((ar6 == 4) && (uVar3 = 0, 0 < ar7)) {
    do {
      if ((uVar3 & 7) == 0) {
        (*(code *)puVar1)(ar4_00,ar5_00,ar6_00,ar7_00);
        (*(code *)puVar2)(ar4_00,ar5_00,ar6_00,ar7_00);
      }
      uVar3 = uVar3 + 1;
      *puStack_2c = *puStack_30;
      puStack_30 = puStack_30 + unaff_r10;
      puStack_2c = puStack_2c + unaff_r9;
    } while ((int)uVar3 < ar7);
  }
  (*(code *)PTR_FUN_8c1f97ac)(ar4_00,ar5_00,ar6_00,ar7_00);
  return 0;
}



/* FUN_8c1f97b4 @ 8c1f97b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f97b4(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int a4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *a5;
  undefined1 *puVar7;
  undefined4 a7;
  undefined1 auStack_50 [7];
  undefined1 auStack_49 [57];
  
  puVar5 = auStack_50;
  puVar7 = auStack_50;
  a5 = auStack_50;
  iVar3 = (*(code *)PTR_s_KATANA_FLASH_1f0d98_8c1f9898)(2,ar5,ar6,ar7);
  if (iVar3 == -8) {
    iVar3 = (*(code *)PTR_FUN_8c1f989c)(0,ar5,ar6,ar7);
  }
  if ((iVar3 == 0) &&
     (iVar3 = (*(code *)PTR_FUN_8c1f98a0)(5,auStack_50,ar6,ar7), puVar2 = PTR_FUN_8c1f98a4,
     iVar3 == 0)) {
    iVar3 = 0;
    do {
      iVar3 = (*(code *)puVar2)(iVar3,puVar5,ar6,ar7);
    } while (iVar3 == 2);
    if (iVar3 == 1) {
      iVar3 = (*(code *)PTR_syscall_1f3b44_8c1f98a8)(1,puVar5,ar6,ar7);
      puVar5 = (undefined1 *)(iVar3 + 0x10);
      if (ar4 == 0) {
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          uVar1 = *puVar7;
          puVar7 = puVar7 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        }
        return 0;
      }
      puVar7 = auStack_49;
      puVar5 = (undefined1 *)(iVar3 + 0x17);
      a7 = 1;
      for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
        if (((ar4 & 1) != 0) && (*puVar7 = *puVar5, iVar3 == 4)) {
          puVar6 = puVar5 + -2;
          puVar7[-1] = puVar5[-1];
          puVar5 = puVar5 + -3;
          puVar7[-2] = *puVar6;
          puVar7 = puVar7 + -3;
          *puVar7 = *puVar5;
        }
        puVar5 = puVar5 + -1;
        ar4 = (int)ar4 >> 1;
        puVar7 = puVar7 + -1;
      }
      iVar4 = (*(code *)PTR_FUN_8c1f98ac)(5,auStack_50,iVar3,1);
      a4 = 0;
      if (iVar4 == 0) {
        do {
          a4 = (*(code *)puVar2)(a4,a5,iVar3,a7);
        } while (a4 == 2);
        if (a4 == 1) {
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}



/* syscall_1f98b0 @ 8c1f98b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 syscall_1f98b0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1f98b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c1f98c0)(DAT_8c1f98bc);
  return uVar1;
}



/* syscall_1f98c4 @ 8c1f98c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 syscall_1f98c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1f98ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c1f98d4)(DAT_8c1f98d0);
  return uVar1;
}



/* syscall_1f98d8 @ 8c1f98d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 syscall_1f98d8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1f98de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c1f98e8)(DAT_8c1f98e4);
  return uVar1;
}



/* syscall_1f98ec @ 8c1f98ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 syscall_1f98ec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1f98f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c1f98fc)(DAT_8c1f98f8);
  return uVar1;
}



/* FUN_8c1f9914 @ 8c1f9914 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f9914(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte in_MD;
  byte bVar4;
  byte in_RB;
  byte bVar5;
  byte in_BL;
  byte bVar6;
  byte in_FD;
  byte bVar7;
  byte in_M;
  byte extraout_M;
  byte in_Q;
  byte extraout_Q;
  byte in_IMASK;
  byte bVar8;
  byte in_S;
  byte extraout_S;
  byte in_T;
  byte extraout_T;
  
  bVar6 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar4 = bVar6 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar8 = (byte)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  bVar7 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar6 = (bVar6 & 0x10) >> 4;
  bVar5 = (bVar4 & 0x20) >> 5;
  bVar4 = ((bVar4 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  (*(code *)PTR_FUN_8c1f99b8)(ar4,ar5,ar6,ar7);
  puVar1 = DAT_8c1f99bc;
  uVar2 = (uint)DAT_8c1f99b6;
  *DAT_8c1f99bc = ar4;
  uVar3 = (uint)DAT_8c1f99b2;
  *puVar1 = *puVar1 & (int)DAT_8c1f99b4 | uVar2;
  *puVar1 = *puVar1 & 0xfffffff7 | 8;
  return (int)(short)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4) << 4 |
         ((uint)extraout_T | (uint)extraout_S << 1 | (uint)bVar8 << 4 | (uint)extraout_Q << 8 |
          (uint)extraout_M << 9 | (uint)bVar7 << 0xf | (uint)bVar6 << 0x1c | (uint)bVar5 << 0x1d |
         (uint)bVar4 << 0x1e) & uVar3;
}



/* FUN_8c1f9980 @ 8c1f9980 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c1f9992 */
/* WARNING: Switch with 1 destination removed at 0x8c1f99a2 */
/* WARNING: Switch with 1 destination removed at 0x8c1f99e2 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f9980(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  byte in_IMASK;
  byte in_S;
  
  if (ar5 != 0) {
    uVar3 = DAT_8c1f99c4 & ar4;
    if (DAT_8c1f99c8 <= ar5) {
                    /* WARNING: Could not recover jumptable at 0x8c1f9a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(DAT_8c1f9a10 | 0x8c1f9a14))
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



/* FUN_8c1f9bde @ 8c1f9bde callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c1f9bf0 */
/* WARNING: Switch with 1 destination removed at 0x8c1f9c00 */
/* WARNING: Switch with 1 destination removed at 0x8c1f9c36 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f9bde(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  byte in_IMASK;
  byte in_S;
  
  if (ar5 != 0) {
    uVar3 = DAT_8c1f9c18 & ar4;
    if (DAT_8c1f9c1c <= ar5) {
                    /* WARNING: Could not recover jumptable at 0x8c1f9c5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(DAT_8c1f9c64 | 0x8c1f9c68))
                        ((short)((((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4));
      return uVar1;
    }
    uVar2 = (ar4 & 0x1f) + ar5 + 0x1f >> 5;
    do {
      CacheBlockPurge(uVar3);
      uVar2 = uVar2 - 1;
      uVar3 = uVar3 + 0x20;
    } while (uVar2 != 0);
  }
  return in_r0;
}



/* FUN_8c1f9e32 @ 8c1f9e32 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c1f9e44 */
/* WARNING: Switch with 1 destination removed at 0x8c1f9e54 */
/* WARNING: Switch with 1 destination removed at 0x8c1f9e8a */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f9e32(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  byte in_IMASK;
  byte in_S;
  
  if (ar5 != 0) {
    uVar3 = DAT_8c1f9e6c & ar4;
    if (DAT_8c1f9e70 <= ar5) {
                    /* WARNING: Could not recover jumptable at 0x8c1f9eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(DAT_8c1f9eb8 | 0x8c1f9ebc))
                        ((short)((((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4),0);
      return uVar1;
    }
    uVar2 = (ar4 & 0x1f) + ar5 + 0x1f >> 5;
    do {
      CacheBlockWriteBack(uVar3);
      uVar2 = uVar2 - 1;
      uVar3 = uVar3 + 0x20;
    } while (uVar2 != 0);
  }
  return in_r0;
}



/* FUN_8c1fa0c4 @ 8c1fa0c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fa0c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
                    /* WARNING: Could not recover jumptable at 0x8c1fa0e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(DAT_8c1fa0ec | 0x8c1fa0f0))
                    ((short)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4));
  return uVar1;
}



/* FUN_8c1fa0f0 @ 8c1fa0f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1fa0f0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  bool bVar5;
  
  uVar1 = DAT_8c1fa144;
  if ((*DAT_8c1fa148 >> 5 & 1) == 1) {
    uVar4 = (uint)DAT_8c1fa13c;
    uVar3 = 0;
    do {
      uVar2 = uVar3 + 0x20;
      *(undefined4 *)(uVar3 | uVar1) = 0;
      uVar3 = uVar2;
    } while (uVar2 < uVar4);
    uVar4 = (uint)DAT_8c1fa13e;
    uVar3 = (int)DAT_8c1fa140;
    do {
      bVar5 = uVar4 <= uVar3 + 0x20;
      *(undefined4 *)(uVar3 | uVar1) = 0;
      uVar3 = uVar3 + 0x20;
    } while (!bVar5);
  }
  else {
    uVar4 = (uint)DAT_8c1fa142;
    uVar3 = 0;
    do {
      bVar5 = uVar4 <= uVar3 + 0x20;
      *(undefined4 *)(uVar3 | uVar1) = 0;
      uVar3 = uVar3 + 0x20;
    } while (!bVar5);
  }
  return ((ushort)s0 & 0xf) << 4 |
         ((uint)bVar5 | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         (int)DAT_8c1fa1e2;
}



/* FUN_8c1fa1f4 @ 8c1fa1f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1fa1f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  bool bVar10;
  
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  uVar5 = (uint)in_BL << 0x1c | (uint)in_RB << 0x1d;
  uVar8 = (int)DAT_8c1fa2f6 + DAT_8c1fa304;
  uVar6 = DAT_8c1fa304;
  do {
    *(undefined4 *)(uVar6 + 0xc) = 0;
    uVar6 = uVar6 + 0x10;
  } while (uVar6 < uVar8);
  puVar9 = (undefined4 *)((int)DAT_8c1fa2f8 + (int)DAT_8c1fa308);
  puVar7 = DAT_8c1fa308;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    bVar10 = puVar9 <= puVar7;
  } while (!bVar10);
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar10 | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
          (uVar4 | (uint)in_FD << 0xf) & 0x8000 | (uint)in_BL << 0x1c & 0x10000000 |
          uVar5 & 0x20000000 |
         (uint)((((byte)(uVar5 >> 0x18) | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) <<
         0x1e) & (int)DAT_8c1fa2f4;
}



/* FUN_8c1fa244 @ 8c1fa244 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1fa396) */
/* WARNING: Removing unreachable block (ram,0x8c1fa37e) */
/* WARNING: Removing unreachable block (ram,0x8c1fa340) */
/* WARNING: Removing unreachable block (ram,0x8c1fa27e) */
/* WARNING: Removing unreachable block (ram,0x8c1fa360) */
/* WARNING: Removing unreachable block (ram,0x8c1fa386) */
/* WARNING: Removing unreachable block (ram,0x8c1fa3ac) */
/* WARNING: Removing unreachable block (ram,0x8c1fa36e) */
/* WARNING: Unknown calling convention */

uint FUN_8c1fa244(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint ar6_00;
  uint uVar9;
  uint uVar10;
  int in_VBR;
  
  iVar2 = DAT_8c1fa308;
  iVar1 = DAT_8c1fa304;
  iVar3 = (int)(short)ar4;
  iVar4 = iVar3 >> 4;
  uVar9 = ar6 | DAT_8c1fa30c;
  iVar5 = *(int *)(iVar4 * 4 + DAT_8c1fa308);
  iVar8 = iVar5;
  while ((iVar6 = iVar5, iVar6 != 0 && (*(uint *)(iVar6 + 0xc) < uVar9))) {
    iVar8 = iVar6;
    iVar5 = *(int *)(iVar6 + 4);
  }
  ar6_00 = (uint)DAT_8c1fa2fa;
  uVar10 = 1;
  do {
    if ((*(uint *)(uVar10 * 0x10 + DAT_8c1fa304 + 0xc) & DAT_8c1fa30c) == 0) break;
    uVar10 = uVar10 + 1;
  } while (uVar10 < ar6_00);
  if (uVar10 < ar6_00) {
    if ((iVar6 == 0) && (iVar8 == 0)) {
      if (iVar3 < DAT_8c1fa2fc) {
        *(undefined **)((int)DAT_8c1fa300 + in_VBR + (DAT_8c1fa2fe + iVar3 >> 3)) = PTR_FUN_8c1fa310
        ;
      }
      else if (iVar3 == DAT_8c1fa2fc) {
        (*(code *)PTR_FUN_8c1fa318)(PTR_LAB_8c1fa314,0,ar6_00,DAT_8c1fa30c);
      }
      else if (iVar3 == DAT_8c1fa43c) {
        (*(code *)PTR_FUN_8c1fa448)(PTR_LAB_8c1fa444,0,ar6_00,DAT_8c1fa30c);
      }
      else {
        *(undefined **)(DAT_8c1fa43e + in_VBR) = PTR_LAB_8c1fa44c;
      }
      puVar7 = (undefined4 *)(uVar10 * 0x10 + iVar1);
      *(undefined4 **)(iVar4 * 4 + iVar2) = puVar7;
      puVar7[1] = 0;
      *puVar7 = ar5;
      puVar7[2] = ar7;
      puVar7[3] = uVar9;
      uVar9 = (uint)(byte)((byte)(short)ar4 >> 5);
      if (iVar3 >> 8 == 10) {
        *DAT_8c1fa450 = *DAT_8c1fa450 | 1 << uVar9 + 0xc;
      }
      else if (iVar3 >> 8 == 0xb) {
        *DAT_8c1fa454 = *DAT_8c1fa454 | 1 << uVar9;
      }
    }
    else {
      puVar7 = (undefined4 *)(uVar10 * 0x10 + DAT_8c1fa304);
      if (iVar6 == *(int *)(iVar4 * 4 + DAT_8c1fa308)) {
        puVar7[1] = iVar6;
        *(undefined4 **)(iVar4 * 4 + iVar2) = puVar7;
      }
      else {
        *(undefined4 **)(iVar8 + 4) = puVar7;
        puVar7[1] = iVar6;
      }
      *puVar7 = ar5;
      puVar7[2] = ar7;
      puVar7[3] = uVar9;
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}



/* FUN_8c1fa3f2 @ 8c1fa3f2 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1fa3fc) */
/* WARNING: Unknown calling convention */

undefined1 * FUN_8c1fa3f2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = &DAT_8c475bc8;
  for (puVar2 = *(undefined4 **)(&DAT_8c475bc8 + ((int)(short)ar4 >> 4) * 4);
      puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[1]) {
    puVar1 = (undefined1 *)(*(code *)*puVar2)(puVar2[2]);
  }
  return puVar1;
}



/* FUN_8c1fa3fa @ 8c1fa3fa callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1fa3fa(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint in_r3;
  int unaff_r14;
  int iVar1;
  undefined4 *puVar2;
  
  if ((int)in_r3 < 0) {
    iVar1 = unaff_r14 >> (~in_r3 & 0x1f) + 1;
  }
  else {
    iVar1 = unaff_r14 << (in_r3 & 0x1f);
  }
  for (puVar2 = *(undefined4 **)(in_r0 + iVar1 * 4); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    in_r0 = (*(code *)*puVar2)(puVar2[2],ar5,ar6,ar7);
  }
  return in_r0;
}



/* FUN_8c1fa41a @ 8c1fa41a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1fa41a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_r0;
  uint uVar1;
  uint in_r3;
  undefined4 *puVar2;
  
  uVar1 = in_r0 & in_r3 | 0x60;
  for (puVar2 = (undefined4 *)*DAT_8c1fa45c; puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    uVar1 = (*(code *)*puVar2)(puVar2[2],ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1fa464 @ 8c1fa464 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1fa464(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_r0;
  uint uVar1;
  uint in_r3;
  undefined4 *puVar2;
  
  uVar1 = in_r0 & in_r3 | 0x60;
  for (puVar2 = (undefined4 *)*DAT_8c1fa538; puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    uVar1 = (*(code *)*puVar2)(puVar2[2],ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c1fa496 @ 8c1fa496 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint * FUN_8c1fa496(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *in_r0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char in_T;
  
  if ((in_T != '\x01') && (in_r0 == (uint *)0x36)) {
    uVar6 = (*DAT_8c1fa540 & *DAT_8c1fa53c) >> 0xc;
    if (uVar6 == 0) {
      uVar7 = *DAT_8c1fa548;
      uVar6 = *DAT_8c1fa544;
      iVar4 = (int)DAT_8c1fa536;
      uVar3 = 0;
      while( true ) {
        if ((int)uVar3 < 0) {
          in_r0 = (uint *)(1 >> (~uVar3 & 0x1f) + 1);
        }
        else {
          in_r0 = (uint *)(1 << (uVar3 & 0x1f));
        }
        if (in_r0 == (uint *)0x10) break;
        if ((int)uVar3 < 0) {
          uVar2 = 1 >> (~uVar3 & 0x1f) + 1;
        }
        else {
          uVar2 = 1 << (uVar3 & 0x1f);
        }
        if ((uVar2 & uVar7 & uVar6) != 0) {
          FUN_8c1fa3f2(uVar3 * 0x20 + iVar4,ar5,ar6,ar7);
        }
        uVar3 = uVar3 + 1;
      }
    }
    else {
      iVar5 = (int)DAT_8c1fa534;
      iVar4 = (int)DAT_8c1fa532;
      uVar7 = 0;
      in_r0 = DAT_8c1fa540;
      while( true ) {
        if ((int)uVar7 < 0) {
          iVar1 = 1 >> (~uVar7 & 0x1f) + 1;
        }
        else {
          iVar1 = 1 << (uVar7 & 0x1f);
        }
        if (iVar1 == iVar5) break;
        if ((int)uVar7 < 0) {
          uVar3 = 1 >> (~uVar7 & 0x1f) + 1;
        }
        else {
          uVar3 = 1 << (uVar7 & 0x1f);
        }
        if ((uVar3 & uVar6) != 0) {
          in_r0 = (uint *)FUN_8c1fa3f2(uVar7 * 0x20 + iVar4,ar5,ar6,ar7);
        }
        uVar7 = uVar7 + 1;
      }
    }
  }
  return in_r0;
}



/* FUN_8c1fa54c @ 8c1fa54c callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1fa628) */
/* WARNING: Removing unreachable block (ram,0x8c1fa616) */
/* WARNING: Removing unreachable block (ram,0x8c1fa63a) */
/* WARNING: Unknown calling convention */

uint FUN_8c1fa54c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint *puVar2;
  short sVar3;
  uint uVar4;
  int *ar6_00;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int in_VBR;
  byte in_MD;
  byte bVar10;
  byte in_RB;
  byte bVar11;
  byte in_BL;
  byte bVar12;
  byte in_FD;
  byte bVar13;
  byte in_M;
  byte extraout_M;
  byte extraout_M_00;
  byte bVar14;
  byte in_Q;
  byte extraout_Q;
  byte extraout_Q_00;
  byte bVar15;
  byte in_IMASK;
  byte bVar16;
  byte in_S;
  byte extraout_S;
  byte extraout_S_00;
  byte bVar17;
  byte in_T;
  bool bVar18;
  
  puVar2 = DAT_8c1fa674;
  puVar1 = DAT_8c1fa670;
  uVar4 = (uint)in_T | (uint)in_S << 1;
  uVar6 = uVar4 | (uint)in_IMASK << 4;
  uVar9 = uVar6 | (uint)in_Q << 8;
  uVar7 = uVar9 | (uint)in_M << 9;
  bVar12 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar10 = bVar12 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar17 = (byte)((uVar4 & 2) >> 1);
  bVar16 = (byte)((uVar6 & 0xf0) >> 4);
  bVar15 = (byte)(uVar9 >> 8) & 1;
  bVar14 = (byte)((uVar7 & 0x200) >> 9);
  bVar13 = (byte)(((uVar7 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar12 = (bVar12 & 0x10) >> 4;
  bVar11 = (bVar10 & 0x20) >> 5;
  bVar10 = ((bVar10 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  iVar5 = ar4 * 0x10;
  uVar4 = 1;
  do {
    iVar8 = uVar4 * 0x10 + DAT_8c1fa668;
    if ((*(int *)(iVar8 + 4) == iVar5 + DAT_8c1fa668) &&
       ((*(uint *)(iVar8 + 0xc) & DAT_8c1fa66c) != 0)) break;
    uVar4 = uVar4 + 1;
  } while (uVar4 < (uint)(int)DAT_8c1fa65a);
  if (uVar4 == (int)DAT_8c1fa65a) {
    iVar5 = iVar5 + DAT_8c1fa668;
    uVar4 = (uint)DAT_8c1fa660;
    uVar9 = 1;
    uVar6 = (uint)DAT_8c1fa65c;
    iVar8 = (int)DAT_8c1fa65e;
    do {
      if (*(int *)(uVar9 * 4 + DAT_8c1fa678) == iVar5) {
        ar6_00 = (int *)(uVar9 * 4 + DAT_8c1fa678);
        *ar6_00 = *(int *)(iVar5 + 4);
        *(undefined4 *)(iVar5 + 0xc) = 0;
        if (*ar6_00 == 0) {
          if (uVar9 == uVar4) {
            (*(code *)PTR_FUN_8c1fa67c)(0,0,ar6_00,uVar4);
            bVar14 = extraout_M;
            bVar15 = extraout_Q;
            bVar17 = extraout_S;
          }
          else if (uVar9 == (int)DAT_8c1fa662) {
            (*(code *)PTR_FUN_8c1fa680)(0,0,ar6_00,uVar4);
            bVar14 = extraout_M_00;
            bVar15 = extraout_Q_00;
            bVar17 = extraout_S_00;
          }
          else {
            uVar7 = uVar9 * 0x10;
            sVar3 = (short)uVar7 >> 8;
            uVar4 = (uVar7 & 0xff) >> 5;
            if (sVar3 == 10) {
              *puVar2 = *puVar2 & ~(1 << uVar4 + 0xc);
            }
            else if (sVar3 == 0xb) {
              *puVar1 = *puVar1 & ~(1 << uVar4);
            }
            *(undefined **)(in_VBR + (uVar7 + (int)DAT_8c1fa664 >> 3) + iVar8) = PTR_LAB_8c1fa684;
          }
        }
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
    bVar18 = uVar9 == uVar6;
  }
  else {
    iVar5 = iVar5 + DAT_8c1fa668;
    *(undefined4 *)(uVar4 * 0x10 + DAT_8c1fa668 + 4) = *(undefined4 *)(iVar5 + 4);
    *(undefined4 *)(iVar5 + 0xc) = 0;
    bVar18 = false;
  }
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar18 | (uint)bVar17 << 1 | (uint)bVar16 << 4 | (uint)bVar15 << 8 |
          (uint)bVar14 << 9 | (uint)bVar13 << 0xf | (uint)bVar12 << 0x1c | (uint)bVar11 << 0x1d |
         (uint)bVar10 << 0x1e) & (int)DAT_8c1fa6b6;
}



/* FUN_8c1fa6b8 @ 8c1fa6b8 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fa6b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 in_PR;
  
  FUN_8c1fa758(ar4,ar5,ar6,ar7,in_PR);
  ar5_00 = 0;
  uVar1 = 0;
  FUN_8c1fae2c(0,0,ar6,ar7);
  FUN_8c1fb924(uVar1,ar5_00,ar6,ar7);
  uVar1 = 0x105;
  (*(code *)0xac1f9914)(0x105,ar5_00,ar6,ar7);
  uVar1 = sh4_tmu_1f88c0(uVar1,ar5_00,ar6,ar7);
  return uVar1;
}



/* FUN_8c1fa6e2 @ 8c1fa6e2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fa6e2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c1fa7a4)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_s_nsyG2_Ver_1_01_12_Build_Dec__1f9416_8c1fa7a8)(0);
  return uVar1;
}



/* FUN_8c1fa6f2 @ 8c1fa6f2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c1fa6f2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_MD;
  byte bVar1;
  byte in_RB;
  byte bVar2;
  byte in_BL;
  byte bVar3;
  byte in_FD;
  byte bVar4;
  byte in_M;
  byte extraout_M;
  byte in_Q;
  byte extraout_Q;
  byte in_IMASK;
  byte bVar5;
  byte in_S;
  byte extraout_S;
  byte in_T;
  byte extraout_T;
  
  bVar3 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar1 = bVar3 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar5 = (byte)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  bVar4 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar3 = (bVar3 & 0x10) >> 4;
  bVar2 = (bVar1 & 0x20) >> 5;
  bVar1 = ((bVar1 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  (*(code *)PTR_FUN_8c1fa7ac)(ar4,ar5,ar6,ar7);
  FUN_8c1fa72e(ar4,ar5,ar6,ar7);
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)extraout_T | (uint)extraout_S << 1 | (uint)bVar5 << 4 | (uint)extraout_Q << 8 |
          (uint)extraout_M << 9 | (uint)bVar4 << 0xf | (uint)bVar3 << 0x1c | (uint)bVar2 << 0x1d |
         (uint)bVar1 << 0x1e) & (int)DAT_8c1fa780;
}



/* FUN_8c1fa72e @ 8c1fa72e callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fa72e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1fa73a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)((uint)PTR_FUN_8c1fa7b0 | DAT_8c1fa794))();
  return uVar1;
}



/* FUN_8c1fa73e @ 8c1fa73e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fa73e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 in_r0;
  undefined4 *puVar3;
  
  piVar1 = DAT_8c1fa7b4;
  *DAT_8c1fa7b4 = 0;
  iVar2 = DAT_8c1fa7b8;
  puVar3 = DAT_8c1fa7bc;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 8;
  } while ((int)puVar3 < iVar2);
  *piVar1 = (int)DAT_8c1fa782;
  *piVar1 = 0;
  return in_r0;
}



/* FUN_8c1fa758 @ 8c1fa758 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fa758(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int *piVar1;
  
  _DAT_ffd00000 = 0;
  _DAT_ffd00004 = 0;
  _DAT_ffd00008 = 0;
  _DAT_ffd0000c = 0;
  for (piVar1 = &DAT_8c26cb34; *piVar1 != 0; piVar1 = piVar1 + 2) {
    *(int *)*piVar1 = piVar1[1];
  }
  return ain0;
}



/* s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de @ 8c1fa7d0 callers=0 callees=2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de(uint ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *a4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_stack_ffffffd4;
  uint ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_ffffffd4 >> 0x10),(short)ar4);
  uVar1 = ar4 & 0xffff;
  if ((((uVar1 != 0x300) && (uVar1 != 0x340)) && (uVar1 != 0x380)) && (uVar1 != 0x3c0)) {
    return uVar1;
  }
  _DAT_8c475ec8 = ar5;
  iVar2 = FUN_8c1fab8c(ar4,ar5,ar6,ar7);
  FUN_8c1fad9a(s_____ADDRESS_CHECKER_TRAP_____8c26cf24,ar5,ar6,ar7,ain0);
  FUN_8c1faa08(s_FR0_7__8c26cf48,10,8,ar7);
  FUN_8c1faa08(s_FR8_15__8c26cf54,0x12,8,ar7);
  FUN_8c1faa08(s_FR0_7_B___8c26cf60,0x1a,8,ar7);
  uVar6 = 8;
  uVar5 = 0x22;
  FUN_8c1faa08(s_FR8_15_B___8c26cf6c,0x22,8,ar7);
  FUN_8c1fad9a(s_FPUL__8c26cf78,uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x2a],uVar5,uVar6,ar7);
  FUN_8c1fad9a(s_FPSCR__8c26cf80,uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x2b],uVar5,uVar6,ar7);
  FUN_8c1faa08(s_R0_7__8c26cf8c,0x2d,8,ar7);
  uVar5 = _DAT_8c475ec8[0x3c];
  _DAT_8c475ec8[0x3c] = _DAT_8c475ec8[1];
  FUN_8c1faa08(s_R8_15__8c26cf9c,0x35,8,ar7);
  uVar6 = 8;
  _DAT_8c475ec8[0x3c] = uVar5;
  uVar5 = 2;
  FUN_8c1faa08(s_R0_7_B___8c26cfa8,2,8,ar7);
  FUN_8c1fad9a(s_MACL__8c26cfb8,uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3c],uVar5,uVar6,ar7);
  FUN_8c1fad9a(s_MACH__8c26cfc0,uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3d],uVar5,uVar6,ar7);
  FUN_8c1fad9a(s_VBR__8c26cfc8,uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3e],uVar5,uVar6,ar7);
  FUN_8c1fad9a(s_GBR__8c26cfd0,uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3f],uVar5,uVar6,ar7);
  FUN_8c1fad9a(s_DBR__8c26cfd8,uVar5,uVar6,ar7);
  FUN_8c1fadd0(*_DAT_8c475ec8,uVar5,uVar6,ar7);
  FUN_8c1fad9a(s_PR__8c26cfe0,uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x40],uVar5,uVar6,ar7);
  FUN_8c1fad9a(s_PC__8c26cfe8,uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x41],uVar5,uVar6,ar7);
  FUN_8c1fad9a(s_SR__8c26cff0,uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x42],uVar5,uVar6,ar7);
  uVar1 = 0;
  do {
    if ((int)uVar1 < 0) {
      uVar3 = ~(~uVar1 + 1 & 3) + 1;
    }
    else {
      uVar3 = uVar1 & 3;
    }
    if (uVar3 == 0) {
      FUN_8c1fad9a(&DAT_8c26cff8,uVar5,uVar6,ar7);
    }
    FUN_8c1fadd0((&DAT_8c26ce10)[uVar1],uVar5,uVar6,ar7);
    FUN_8c1fad9a(&DAT_8c26cffc,uVar5,uVar6,ar7);
    FUN_8c1fadd0(*(undefined4 *)(&DAT_8c26ce10)[uVar1],uVar5,uVar6,ar7);
    FUN_8c1fad9a(&DAT_8c26d000,uVar5,uVar6,ar7);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x45);
  FUN_8c1fad9a(&DAT_8c26cff8,uVar5,uVar6,ar7);
  if (iVar2 == 0) {
    a4 = s_Please__cancel_the_interrupt_fro_8c26d004;
  }
  else {
    a4 = s_Please__cancel_the_interrupt_fro_8c26d050;
  }
  FUN_8c1fad9a(a4,uVar5,uVar6,ar7);
  do {
    uVar4 = FUN_8c1fad0a(a4,uVar5,uVar6,ar7);
  } while ((char)uVar4 != '\r');
  _DAT_ff000024 = ain0 & 0xffff;
  uVar5 = FUN_8c1fad44(a4,uVar5,uVar6,ar7);
  return uVar5;
}



/* FUN_8c1faa08 @ 8c1faa08 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1faa08(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a6;
  int iVar2;
  int iVar3;
  int iVar4;
  
  a6 = ar6;
  iVar3 = ar5;
  FUN_8c1fad9a(ar4,ar5,ar6,ar7,ar5);
  iVar2 = iVar3 + ar6;
  iVar4 = iVar3 << 2;
  for (; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    FUN_8c1fadd0(*(undefined4 *)(_DAT_8c475ec8 + iVar4),ar5,a6,ar7);
    FUN_8c1fad9a(&DAT_8c26d000,ar5,a6,ar7);
    iVar4 = iVar4 + 4;
  }
  uVar1 = FUN_8c1fad9a(&DAT_8c26cff8,ar5,a6,ar7);
  return uVar1;
}



/* FUN_8c1fab8c @ 8c1fab8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1fab8c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *DAT_8c1fac6c = *DAT_8c1fac6c & 0xfe;
  piVar2 = DAT_8c1fac78;
  piVar1 = DAT_8c1fac74;
  for (iStack_c = 0; iStack_c < DAT_8c1fac70; iStack_c = iStack_c + 1) {
  }
  if ((*(byte *)(*DAT_8c1fac78 + 0x1c) & 4) == 0) {
    *DAT_8c1fac74 = 1;
  }
  else {
    *DAT_8c1fac74 = 0;
  }
  puVar6 = DAT_8c1fac90;
  puVar5 = DAT_8c1fac88;
  piVar4 = DAT_8c1fac80;
  iVar3 = DAT_8c1fac7c;
  if (*piVar1 == 0) {
    *DAT_8c1fac80 = DAT_8c1fac84;
    *puVar5 = 0;
    *(undefined2 *)(*piVar4 + 0x18) = 6;
    *(undefined2 *)(*piVar4 + 8) = 0;
    *(undefined2 *)*piVar4 = 0;
    *(undefined1 *)(*piVar4 + 4) = 0x28;
    for (iStack_4 = 0; iStack_4 < iVar3; iStack_4 = iStack_4 + 1) {
    }
    *(undefined2 *)(*piVar4 + 0x18) = DAT_8c1fac6a;
    *(undefined2 *)(*piVar4 + 8) = 0x30;
  }
  else {
    *piVar2 = DAT_8c1fac8c;
    *puVar6 = 0;
    *(undefined1 *)(*piVar2 + 8) = 0;
    *(undefined1 *)*piVar2 = 0;
    *(undefined1 *)(*piVar2 + 4) = 0x28;
    for (iStack_8 = 0; iStack_8 < iVar3; iStack_8 = iStack_8 + 1) {
    }
    *(undefined1 *)(*piVar2 + 8) = 0x30;
  }
  return *piVar1;
}



/* FUN_8c1fac58 @ 8c1fac58 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1fac58(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  byte *pbVar4;
  
  piVar2 = DAT_8c1fadb4;
  piVar1 = DAT_8c1fada8;
  uVar3 = *DAT_8c1fac74;
  if (uVar3 == 0) {
    do {
    } while ((*(ushort *)(*DAT_8c1fada8 + 0x10) & 0x20) != 0x20);
    *(undefined1 *)(*DAT_8c1fada8 + 0xc) = (undefined1)ar4;
    *(ushort *)(*piVar1 + 0x10) = *(ushort *)(*piVar1 + 0x10) & (ushort)DAT_8c1fadac;
    *(ushort *)(*piVar1 + 0x10) = *(ushort *)(*piVar1 + 0x10) & (ushort)DAT_8c1fadb0;
    do {
    } while ((*(ushort *)(*piVar1 + 0x10) & 0x40) != 0x40);
    uVar3 = 0x40;
  }
  else if (uVar3 == 1) {
    do {
    } while ((*(byte *)(*DAT_8c1fadb4 + 0x10) & DAT_8c1fada2) != DAT_8c1fada2);
    *(undefined1 *)(*DAT_8c1fadb4 + 0xc) = (undefined1)ar4;
    pbVar4 = (byte *)(*piVar2 + 0x10);
    *pbVar4 = *pbVar4 & 0x7f;
    do {
      uVar3 = *(byte *)(*piVar2 + 0x10) & 4;
    } while (uVar3 != 4);
  }
  return uVar3;
}



/* FUN_8c1fad0a @ 8c1fad0a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1fad0a(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (*DAT_8c1fadb8 == 0) {
    do {
    } while ((char)*(undefined2 *)(*DAT_8c1fada8 + 0x1c) == '\0');
    ar5 = (int)*(char *)(*DAT_8c1fada8 + 0x14);
  }
  else if ((*DAT_8c1fadb8 == 1) && ((*(byte *)(*DAT_8c1fadb4 + 0x1c) & 4) == 4)) {
    ar5 = 0xd;
  }
  return ar5;
}



/* FUN_8c1fad44 @ 8c1fad44 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1fad44(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = DAT_8c1fada8;
  if (*DAT_8c1fadb8 == 0) {
    *(undefined2 *)(*DAT_8c1fada8 + 8) = 0;
    *(undefined2 *)(*piVar2 + 0x18) = 6;
    *(undefined2 *)*piVar2 = 0;
    *(char *)(*piVar2 + 4) = (char)DAT_8c1fada4;
    *(undefined2 *)(*piVar2 + 8) = 0;
    *(undefined2 *)(*piVar2 + 0x10) = 0;
    *(undefined2 *)(*piVar2 + 0x18) = 0;
    *(undefined2 *)(*piVar2 + 0x20) = 0;
    *(undefined2 *)(*piVar2 + 0x24) = 0;
  }
  cVar1 = *DAT_8c1fadbc;
  *DAT_8c1fadbc = (char)((int)cVar1 | 1U);
  return (int)cVar1 | 1U;
}



/* FUN_8c1fad9a @ 8c1fad9a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fad9a(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  for (; *ar4 != '\0'; ar4 = ar4 + 1) {
    in_r0 = FUN_8c1fac58((int)*ar4,ar5,ar6,ar7);
  }
  return in_r0;
}



/* FUN_8c1fadd0 @ 8c1fadd0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fadd0(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int a4;
  
  iVar3 = 0x1c;
  do {
    uVar2 = -iVar3;
    if ((int)uVar2 < 0) {
      uVar2 = ar4 >> (~uVar2 & 0x1f) + 1;
    }
    else {
      uVar2 = ar4 << (uVar2 & 0x1f);
    }
    uVar2 = uVar2 & 0xf;
    if (uVar2 < 10) {
      a4 = uVar2 + 0x30;
    }
    else {
      a4 = uVar2 + 0x37;
    }
    uVar1 = FUN_8c1fac58(a4,ar5,ar6,ar7);
    iVar3 = iVar3 + -4;
  } while (-1 < iVar3);
  return uVar1;
}



/* FUN_8c1fae2c @ 8c1fae2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1fae2c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *in_VBR;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  puVar6 = PTR_PTR_8c1faea0;
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  uVar5 = (uint)in_BL << 0x1c | (uint)in_RB << 0x1d;
  *DAT_8c1fae9c = *DAT_8c1fae9c | (int)DAT_8c1fae9a;
  puVar10 = PTR_FUN_8c1faeb8;
  puVar9 = PTR_DAT_8c1faeb4;
  puVar8 = PTR_DAT_8c1faeb0;
  puVar7 = PTR_LAB_8c1faea8;
  puVar12 = in_VBR;
  if (ar4 == DAT_8c1faea4) {
    *(undefined **)PTR_PTR_8c1faeac = PTR_LAB_8c1faea8;
    *(undefined **)puVar6 = puVar7;
    *(undefined4 *)puVar8 = 0;
    *(undefined4 *)puVar9 = ar5;
    puVar16 = (undefined4 *)PTR_DAT_8c1faebc;
  }
  else {
    *(undefined **)PTR_PTR_8c1faeac = PTR_FUN_8c1faeb8;
    *(undefined **)puVar6 = puVar10;
    *(undefined4 *)puVar8 = 0;
    *(undefined4 *)puVar9 = 0;
    puVar16 = (undefined4 *)PTR_DAT_8c1faebc;
  }
  for (; puVar16 <= PTR_FUN_8c1faec0; puVar16 = puVar16 + 1) {
    *puVar12 = *puVar16;
    puVar12 = puVar12 + 1;
  }
  iVar13 = ((uint)((int)puVar12 - (int)in_VBR) >> 5) + 1;
  puVar12 = in_VBR;
  do {
    CacheBlockPurge(puVar12);
    iVar13 = iVar13 + -1;
    puVar12 = puVar12 + 8;
  } while (iVar13 != 0);
  puVar16 = (undefined4 *)((int)in_VBR + (int)DAT_8c1faefc);
  for (puVar12 = (undefined4 *)PTR_DAT_8c1faf04; puVar12 <= PTR_DAT_8c1faf08; puVar12 = puVar12 + 1)
  {
    *puVar16 = *puVar12;
    puVar16 = puVar16 + 1;
  }
  iVar13 = (int)in_VBR + (int)DAT_8c1faf00;
  iVar14 = ((uint)((int)puVar16 + ((int)DAT_8c1faefe - (int)in_VBR)) >> 5) + 1;
  do {
    CacheBlockPurge(iVar13);
    iVar14 = iVar14 + -1;
    iVar13 = iVar13 + 0x20;
  } while (iVar14 != 0);
  puVar16 = (undefined4 *)((int)in_VBR + (int)DAT_8c1faf44);
  for (puVar12 = (undefined4 *)PTR_DAT_8c1faf4c; puVar12 <= PTR_DAT_8c1faf50; puVar12 = puVar12 + 1)
  {
    *puVar16 = *puVar12;
    puVar16 = puVar16 + 1;
  }
  iVar13 = (int)in_VBR + (int)DAT_8c1faf48;
  iVar14 = ((uint)((int)puVar16 + ((int)DAT_8c1faf46 - (int)in_VBR)) >> 5) + 1;
  do {
    CacheBlockPurge(iVar13);
    iVar14 = iVar14 + -1;
    iVar13 = iVar13 + 0x20;
  } while (iVar14 != 0);
  puVar16 = (undefined4 *)((int)in_VBR + (int)DAT_8c1faf8c);
  for (puVar12 = (undefined4 *)PTR_DAT_8c1faf94; puVar6 = PTR_LAB_8c1fafe8,
      puVar12 <= PTR_DAT_8c1faf98; puVar12 = puVar12 + 1) {
    *puVar16 = *puVar12;
    puVar16 = puVar16 + 1;
  }
  iVar13 = (int)in_VBR + (int)DAT_8c1faf90;
  iVar14 = ((uint)((int)puVar16 + ((int)DAT_8c1faf8e - (int)in_VBR)) >> 5) + 1;
  do {
    CacheBlockPurge(iVar13);
    iVar14 = iVar14 + -1;
    iVar13 = iVar13 + 0x20;
  } while (iVar14 != 0);
  iVar14 = (int)DAT_8c1fafe4;
  iVar13 = (int)DAT_8c1fafe6;
  iVar15 = (int)DAT_8c1fafe2;
  do {
    iVar11 = iVar13 >> 3;
    iVar13 = iVar13 + 0x20;
    *(undefined **)((int)in_VBR + iVar14 + iVar11) = puVar6;
  } while (iVar15 > iVar13);
  return ((uint)(iVar15 <= iVar13) | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
          (uVar4 | (uint)in_FD << 0xf) & 0x8000 | (uint)in_BL << 0x1c & 0x10000000 |
          uVar5 & 0x20000000 |
         (uint)((((byte)(uVar5 >> 0x18) | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) <<
         0x1e) & DAT_8c1faff8;
}



/* FUN_8c1fb048 @ 8c1fb048 callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fb048(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined4 extraout_r1;
  
  (*DAT_8c1fb090)(DAT_8c1fb080,DAT_8c1fb084,ar6,ar7);
  DAT_8c1fb08c = in_r0;
  *(undefined4 *)PTR_DAT_8c1fb088 = _DAT_ff000028;
  uVar1 = (*(code *)PTR_FUN_8c1fb094)(ar4,ar5,extraout_r1);
  return uVar1;
}



/* FUN_8c1fb09c @ 8c1fb09c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fb09c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  (*DAT_8c1fb0c4)(DAT_8c1fb0bc,DAT_8c1fb0c0,ar6,ar7);
  return in_r0;
}



/* FUN_8c1fb0c8 @ 8c1fb0c8 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1fb1ca) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1c6) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1c2) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1be) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1ba) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1b6) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1b2) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1ae) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1a6) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1a2) */
/* WARNING: Removing unreachable block (ram,0x8c1fb19e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb19a) */
/* WARNING: Removing unreachable block (ram,0x8c1fb196) */
/* WARNING: Removing unreachable block (ram,0x8c1fb192) */
/* WARNING: Removing unreachable block (ram,0x8c1fb18e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb146) */
/* WARNING: Removing unreachable block (ram,0x8c1fb142) */
/* WARNING: Removing unreachable block (ram,0x8c1fb13e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb13a) */
/* WARNING: Removing unreachable block (ram,0x8c1fb136) */
/* WARNING: Removing unreachable block (ram,0x8c1fb132) */
/* WARNING: Removing unreachable block (ram,0x8c1fb12e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb12a) */
/* WARNING: Removing unreachable block (ram,0x8c1fb124) */
/* WARNING: Removing unreachable block (ram,0x8c1fb122) */
/* WARNING: Removing unreachable block (ram,0x8c1fb11e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb11a) */
/* WARNING: Removing unreachable block (ram,0x8c1fb116) */
/* WARNING: Removing unreachable block (ram,0x8c1fb112) */
/* WARNING: Removing unreachable block (ram,0x8c1fb10e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb10a) */
/* WARNING: Removing unreachable block (ram,0x8c1fb106) */
/* WARNING: Removing unreachable block (ram,0x8c1fb108) */
/* WARNING: Removing unreachable block (ram,0x8c1fb10c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb110) */
/* WARNING: Removing unreachable block (ram,0x8c1fb114) */
/* WARNING: Removing unreachable block (ram,0x8c1fb118) */
/* WARNING: Removing unreachable block (ram,0x8c1fb11c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb120) */
/* WARNING: Removing unreachable block (ram,0x8c1fb128) */
/* WARNING: Removing unreachable block (ram,0x8c1fb12c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb130) */
/* WARNING: Removing unreachable block (ram,0x8c1fb134) */
/* WARNING: Removing unreachable block (ram,0x8c1fb138) */
/* WARNING: Removing unreachable block (ram,0x8c1fb13c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb140) */
/* WARNING: Removing unreachable block (ram,0x8c1fb144) */
/* WARNING: Removing unreachable block (ram,0x8c1fb18c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb190) */
/* WARNING: Removing unreachable block (ram,0x8c1fb194) */
/* WARNING: Removing unreachable block (ram,0x8c1fb198) */
/* WARNING: Removing unreachable block (ram,0x8c1fb19c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1a0) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1a4) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1a8) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1aa) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1b0) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1b4) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1b8) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1bc) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1c0) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1c4) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1c8) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1cc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fb0c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_dr8;
  undefined8 in_dr10;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(code **)(UNRECOVERED_JUMPTABLE + (*(int *)PTR_DAT_8c1fb22c + -0x200 >> 3) + 0x200) !=
      (code *)0x0) {
    (**(code **)(UNRECOVERED_JUMPTABLE + (*(int *)PTR_DAT_8c1fb22c + -0x200 >> 3) + 0x200))();
  }
  if (*(int *)PTR_DAT_8c1fb22c < DAT_8c1fb218 << 8) {
    return in_r0;
  }
                    /* WARNING: Could not recover jumptable at 0x8c1fb214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(in_dr4,in_dr6,in_dr8,in_dr10,ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c1fb0ce @ 8c1fb0ce callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1fb1ca) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1c6) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1c2) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1be) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1ba) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1b6) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1b2) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1ae) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1a6) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1a2) */
/* WARNING: Removing unreachable block (ram,0x8c1fb19e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb19a) */
/* WARNING: Removing unreachable block (ram,0x8c1fb196) */
/* WARNING: Removing unreachable block (ram,0x8c1fb192) */
/* WARNING: Removing unreachable block (ram,0x8c1fb18e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb146) */
/* WARNING: Removing unreachable block (ram,0x8c1fb142) */
/* WARNING: Removing unreachable block (ram,0x8c1fb13e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb13a) */
/* WARNING: Removing unreachable block (ram,0x8c1fb136) */
/* WARNING: Removing unreachable block (ram,0x8c1fb132) */
/* WARNING: Removing unreachable block (ram,0x8c1fb12e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb12a) */
/* WARNING: Removing unreachable block (ram,0x8c1fb124) */
/* WARNING: Removing unreachable block (ram,0x8c1fb122) */
/* WARNING: Removing unreachable block (ram,0x8c1fb11e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb11a) */
/* WARNING: Removing unreachable block (ram,0x8c1fb116) */
/* WARNING: Removing unreachable block (ram,0x8c1fb112) */
/* WARNING: Removing unreachable block (ram,0x8c1fb10e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb10a) */
/* WARNING: Removing unreachable block (ram,0x8c1fb106) */
/* WARNING: Removing unreachable block (ram,0x8c1fb108) */
/* WARNING: Removing unreachable block (ram,0x8c1fb10c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb110) */
/* WARNING: Removing unreachable block (ram,0x8c1fb114) */
/* WARNING: Removing unreachable block (ram,0x8c1fb118) */
/* WARNING: Removing unreachable block (ram,0x8c1fb11c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb120) */
/* WARNING: Removing unreachable block (ram,0x8c1fb128) */
/* WARNING: Removing unreachable block (ram,0x8c1fb12c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb130) */
/* WARNING: Removing unreachable block (ram,0x8c1fb134) */
/* WARNING: Removing unreachable block (ram,0x8c1fb138) */
/* WARNING: Removing unreachable block (ram,0x8c1fb13c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb140) */
/* WARNING: Removing unreachable block (ram,0x8c1fb144) */
/* WARNING: Removing unreachable block (ram,0x8c1fb18c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb190) */
/* WARNING: Removing unreachable block (ram,0x8c1fb194) */
/* WARNING: Removing unreachable block (ram,0x8c1fb198) */
/* WARNING: Removing unreachable block (ram,0x8c1fb19c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1a0) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1a4) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1a8) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1aa) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1b0) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1b4) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1b8) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1bc) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1c0) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1c4) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1c8) */
/* WARNING: Removing unreachable block (ram,0x8c1fb1cc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fb0ce(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_dr8;
  undefined8 in_dr10;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(code **)(UNRECOVERED_JUMPTABLE + (*(int *)PTR_DAT_8c1fb22c + -0x200 >> 3) + 0x200) !=
      (code *)0x0) {
    (**(code **)(UNRECOVERED_JUMPTABLE + (*(int *)PTR_DAT_8c1fb22c + -0x200 >> 3) + 0x200))
              (*(int *)PTR_DAT_8c1fb22c,ar5,ar6,ar7);
  }
  if (*(int *)PTR_DAT_8c1fb22c < DAT_8c1fb218 << 8) {
    return in_r0;
  }
                    /* WARNING: Could not recover jumptable at 0x8c1fb214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(in_dr4,in_dr6,in_dr8,in_dr10,ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c1fb25a @ 8c1fb25a callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1fb360) */
/* WARNING: Removing unreachable block (ram,0x8c1fb35c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb358) */
/* WARNING: Removing unreachable block (ram,0x8c1fb354) */
/* WARNING: Removing unreachable block (ram,0x8c1fb350) */
/* WARNING: Removing unreachable block (ram,0x8c1fb34c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb348) */
/* WARNING: Removing unreachable block (ram,0x8c1fb344) */
/* WARNING: Removing unreachable block (ram,0x8c1fb33c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb338) */
/* WARNING: Removing unreachable block (ram,0x8c1fb334) */
/* WARNING: Removing unreachable block (ram,0x8c1fb330) */
/* WARNING: Removing unreachable block (ram,0x8c1fb32c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb328) */
/* WARNING: Removing unreachable block (ram,0x8c1fb324) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2d2) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2ce) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2ca) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2c6) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2c2) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2be) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2ba) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2b6) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2b0) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2ae) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2aa) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2a6) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2a2) */
/* WARNING: Removing unreachable block (ram,0x8c1fb29e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb29a) */
/* WARNING: Removing unreachable block (ram,0x8c1fb296) */
/* WARNING: Removing unreachable block (ram,0x8c1fb292) */
/* WARNING: Removing unreachable block (ram,0x8c1fb294) */
/* WARNING: Removing unreachable block (ram,0x8c1fb298) */
/* WARNING: Removing unreachable block (ram,0x8c1fb29c) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2a0) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2a4) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2a8) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2ac) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2b4) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2b8) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2bc) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2c0) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2c4) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2c8) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2cc) */
/* WARNING: Removing unreachable block (ram,0x8c1fb2d0) */
/* WARNING: Removing unreachable block (ram,0x8c1fb322) */
/* WARNING: Removing unreachable block (ram,0x8c1fb326) */
/* WARNING: Removing unreachable block (ram,0x8c1fb32a) */
/* WARNING: Removing unreachable block (ram,0x8c1fb32e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb332) */
/* WARNING: Removing unreachable block (ram,0x8c1fb336) */
/* WARNING: Removing unreachable block (ram,0x8c1fb33a) */
/* WARNING: Removing unreachable block (ram,0x8c1fb33e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb340) */
/* WARNING: Removing unreachable block (ram,0x8c1fb346) */
/* WARNING: Removing unreachable block (ram,0x8c1fb34a) */
/* WARNING: Removing unreachable block (ram,0x8c1fb34e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb352) */
/* WARNING: Removing unreachable block (ram,0x8c1fb356) */
/* WARNING: Removing unreachable block (ram,0x8c1fb35a) */
/* WARNING: Removing unreachable block (ram,0x8c1fb35e) */
/* WARNING: Removing unreachable block (ram,0x8c1fb362) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

undefined4
FUN_8c1fb25a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            ,undefined4 s8)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined4 in_r1;
  undefined4 *puVar2;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_dr8;
  undefined8 in_dr10;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(code **)(UNRECOVERED_JUMPTABLE + (DAT_8c1fb3d4 + -0x200 >> 3) + 0x200) != (code *)0x0) {
    (**(code **)(UNRECOVERED_JUMPTABLE + (DAT_8c1fb3d4 + -0x200 >> 3) + 0x200))
              (DAT_8c1fb3d4,ar5,ar6,ar7);
  }
  DAT_8c1fb3d8 = DAT_8c1fb3d8 + -1;
  puVar2 = &s8;
  if (DAT_8c1fb3d8 == 0) {
    puVar2 = (undefined4 *)DAT_8c1fb3cc;
  }
  *(undefined4 *)((int)puVar2 + -4) = in_r0;
  *(undefined4 *)((int)puVar2 + -8) = in_r1;
  if (*(int *)PTR_DAT_8c1fb3c8 < DAT_8c1fb3b4 << 8) {
    return *(undefined4 *)((int)puVar2 + -4);
  }
                    /* WARNING: Could not recover jumptable at 0x8c1fb3ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(in_dr4,in_dr6,in_dr8,in_dr10,ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c1fb3e0 @ 8c1fb3e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fb3e0(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  puVar2 = DAT_8c1fb510;
  puVar1 = DAT_8c1fb50c;
  uVar6 = 0xffffffe0;
  uVar5 = ar4 + 0x1fU & 0xffffffe0;
  *DAT_8c1fb508 = uVar5;
  *puVar1 = uVar5;
  piVar4 = DAT_8c1fb518;
  iVar3 = DAT_8c1fb514;
  *puVar2 = ar5 & 0xffffffe0;
  *piVar4 = iVar3;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(iVar3 + 4) = 0;
  FUN_8c1fb426(0,0xffffffe0,ar6,ar7);
  uVar5 = *DAT_8c1fb508;
  *(uint *)(uVar5 + 4) = ar5 >> 5;
  uVar6 = FUN_8c1fb586(uVar5 + 0x20,uVar6,ar6,ar7);
  return uVar6;
}



/* FUN_8c1fb3f4 @ 8c1fb3f4 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fb3f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  uint *in_r1;
  undefined4 *in_r2;
  undefined4 *in_r3;
  int iVar3;
  uint unaff_r14;
  
  *in_r3 = ar4;
  *in_r2 = ar4;
  piVar1 = DAT_8c1fb518;
  iVar3 = DAT_8c1fb514;
  *in_r1 = unaff_r14;
  *piVar1 = iVar3;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(iVar3 + 4) = 0;
  FUN_8c1fb426(0,ar5,ar6,ar7);
  iVar3 = *DAT_8c1fb508;
  *(uint *)(iVar3 + 4) = unaff_r14 >> 5;
  uVar2 = FUN_8c1fb586(iVar3 + 0x20,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c1fb426 @ 8c1fb426 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fb426(undefined **ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_8c475ee0;
  _DAT_8c475ee0 = ar4;
  if (ar4 == (undefined **)0x0) {
    _DAT_8c475ee0 = &PTR_FUN_8c26d0c8;
  }
  return uVar1;
}



/* noop_1fb43a @ 8c1fb43a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_1fb43a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* malloc_thunk @ 8c1fb4ae callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 malloc_thunk(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1fb4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)*DAT_8c1fb51c)();
  return uVar1;
}



/* FUN_8c1fb4b8 @ 8c1fb4b8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fb4b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1fb4be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)*DAT_8c1fb51c)();
  return uVar1;
}



/* FUN_8c1fb57c @ 8c1fb57c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fb57c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1fb582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*DAT_8c1fb640 + 4))();
  return uVar1;
}



/* FUN_8c1fb586 @ 8c1fb586 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fb586(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c1fb58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*DAT_8c1fb640 + 4))();
  return uVar1;
}



/* FUN_8c1fb590 @ 8c1fb590 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1fb590(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  bool bVar8;
  
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  uVar5 = (uint)in_BL << 0x1c | (uint)in_RB << 0x1d;
  bVar8 = ar4 == 0;
  if (!bVar8) {
    piVar7 = (int *)(ar4 + -0x20);
    for (piVar6 = (int *)*DAT_8c1fb644;
        ((piVar7 <= piVar6 || ((int *)*piVar6 <= piVar7)) &&
        ((piVar6 < (int *)*piVar6 || ((piVar7 <= piVar6 && ((int *)*piVar6 <= piVar7))))));
        piVar6 = (int *)*piVar6) {
    }
    if (piVar7 + *(int *)(ar4 + -0x1c) * 8 == (int *)*piVar6) {
      *(int *)(ar4 + -0x1c) = *(int *)(ar4 + -0x1c) + *(int *)(*piVar6 + 4);
      *piVar7 = *(int *)*piVar6;
    }
    else {
      *piVar7 = *piVar6;
    }
    bVar8 = piVar6 + piVar6[1] * 8 == piVar7;
    if (bVar8) {
      piVar6[1] = piVar6[1] + *(int *)(ar4 + -0x1c);
      *piVar6 = *piVar7;
    }
    else {
      *piVar6 = (int)piVar7;
    }
    *DAT_8c1fb644 = piVar6;
  }
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar8 | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
          (uVar4 | (uint)in_FD << 0xf) & 0x8000 | (uint)in_BL << 0x1c & 0x10000000 |
          uVar5 & 0x20000000 |
         (uint)((((byte)(uVar5 >> 0x18) | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) <<
         0x1e) & (int)DAT_8c1fb63e;
}



/* FUN_8c1fb664 @ 8c1fb664 callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c1fb664(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *unaff_r14;
  undefined4 *puVar9;
  
  uVar8 = (ar5 + 0x1fU >> 5) + 1;
  uVar7 = uVar8;
  if (*(uint *)(ar4 + -0x1c) < uVar8) {
    uVar7 = *(uint *)(ar4 + -0x1c);
  }
  FUN_8c1fb586(unaff_r14,ar5,ar6,ar7);
  puVar9 = (undefined4 *)*_DAT_8c475f04;
  puVar4 = _DAT_8c475f04;
  while( true ) {
    puVar3 = puVar9;
    if (uVar8 <= (uint)puVar3[1]) {
      if (puVar3[1] == uVar8) {
        *puVar4 = *puVar3;
      }
      else {
        iVar2 = puVar3[1] - uVar8;
        puVar3[1] = iVar2;
        puVar3 = puVar3 + iVar2 * 8;
      }
      puVar9 = puVar3 + 8;
      if (unaff_r14 != puVar9) {
        if (unaff_r14 < puVar9) {
          puVar1 = puVar3 + uVar7 * 8 + 8;
          while (puVar9 < puVar1) {
            puVar5 = puVar1 + -8;
            FUN_8c010794(0x20,puVar1,unaff_r14);
            puVar1 = puVar5;
            unaff_r14 = unaff_r14 + -8;
          }
        }
        else if (puVar9 < unaff_r14) {
          puVar5 = puVar3 + uVar7 * 8 + 8;
          puVar1 = puVar9;
          while (puVar1 < puVar5) {
            puVar6 = puVar1 + 8;
            FUN_8c010794(0x20,puVar1,unaff_r14);
            puVar1 = puVar6;
            unaff_r14 = unaff_r14 + 8;
          }
        }
      }
      puVar3[1] = uVar8;
      _DAT_8c475f04 = puVar4;
      return puVar9;
    }
    if (puVar3 == _DAT_8c475f04) break;
    puVar9 = (undefined4 *)*puVar3;
    puVar4 = puVar3;
  }
  return (undefined4 *)0;
}



/* FUN_8c1fb77a @ 8c1fb77a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1fb77a(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint a4;
  
  a4 = ar5 * ar4;
  iVar1 = FUN_8c1fb4b8(a4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar3 = 0;
    if (a4 != 0) {
      do {
        puVar2 = (undefined4 *)(iVar1 + uVar3);
        uVar3 = uVar3 + 4;
        *puVar2 = 0;
      } while (uVar3 < a4);
    }
    uVar3 = uVar3 - 4;
    puVar4 = (undefined1 *)(iVar1 + uVar3);
    for (; uVar3 < (a4 & 3); uVar3 = uVar3 + 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return iVar1;
}



/* FUN_8c1fb81c @ 8c1fb81c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1fb81c(uint ar4,uint ar5,uint ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  
  uVar1 = (uint)DAT_8c1fb8f6;
  uVar6 = *DAT_8c1fb908 >> 0x12 & 0x3f;
  while ((uVar6 < 0x40 && ((*(uint *)(uVar6 * 0x100 + DAT_8c1fb90c) & uVar1) == uVar1))) {
    uVar6 = uVar6 + 1;
  }
  if (uVar6 == 0x40) {
    uVar6 = (uint)DAT_8c1fb8f8;
  }
  else {
    cVar5 = (char)ar6;
    uVar1 = ar5 & (int)DAT_8c1fb8fa | uVar1;
    if (cVar5 == '\x01') {
      ar6 = 0;
      uVar3 = DAT_8c1fb910;
    }
    else if (cVar5 == '\x02') {
      ar6 = 0x10;
      uVar3 = DAT_8c1fb914;
    }
    else if (cVar5 == '\x03') {
      ar6 = (uint)DAT_8c1fb8fc;
      uVar3 = DAT_8c1fb918;
    }
    else {
      uVar3 = uVar1;
      if (cVar5 == '\x04') {
        ar6 = (uint)DAT_8c1fb8fe;
        uVar3 = DAT_8c1fb91c;
      }
    }
    uVar2 = (uint)DAT_8c1fb900;
    puVar4 = (uint *)(uVar6 * 0x100 + DAT_8c1fb920);
    *(uint *)(DAT_8c1fb90c + uVar6 * 0x100) = uVar1;
    *puVar4 = ar4 & uVar3 | ar6 | uVar2;
  }
  return uVar6;
}



/* FUN_8c1fb8ae @ 8c1fb8ae callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fb8ae(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  undefined4 *puVar2;
  
  if (ar4 < 0x40) {
    iVar1 = ar4 * 0x100;
    puVar2 = (undefined4 *)(iVar1 + DAT_8c1fb920);
    *(uint *)(DAT_8c1fb90c + iVar1) = *(uint *)(iVar1 + DAT_8c1fb90c) & (int)DAT_8c1fb902;
    *puVar2 = 0;
  }
  return in_r0;
}



/* FUN_8c1fb924 @ 8c1fb924 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1fb924(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = DAT_8c1fba68;
  iVar11 = DAT_8c1fba64;
  iVar3 = DAT_8c1fba60;
  puVar2 = PTR_FUN_8c1fba5c;
  uVar1 = DAT_8c1fba58;
  uVar7 = *DAT_8c1fba54 & 1;
  if (uVar7 == 1) {
    iVar12 = 0;
    iVar10 = 0;
    while (iVar5 = DAT_8c1fba78, iVar4 = DAT_8c1fba74, uVar7 = DAT_8c1fba70,
          (uint)(iVar11 + iVar12) < uVar1) {
      puVar9 = (undefined4 *)(DAT_8c1fba6c + iVar10 * 4);
      uVar8 = (*(code *)puVar2)(iVar11 + iVar12,iVar13 + iVar12,4,ar7);
      iVar10 = iVar10 + 1;
      iVar12 = iVar12 + iVar3;
      *puVar9 = uVar8;
    }
    iVar13 = 0;
    iVar11 = 0;
    while (puVar6 = DAT_8c1fba80, (uint)(iVar4 + iVar13) < uVar7) {
      puVar9 = (undefined4 *)(DAT_8c1fba7c + iVar11 * 4);
      uVar8 = (*(code *)puVar2)(iVar4 + iVar13,iVar5 + iVar13,4,ar7);
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 + iVar3;
      *puVar9 = uVar8;
    }
    uVar7 = (*(code *)puVar2)(uVar7,DAT_8c1fba84,4,ar7);
    *puVar6 = uVar7;
  }
  return uVar7;
}



/* FUN_8c1fb9d2 @ 8c1fb9d2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fb9d2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_FUN_8c1fba88;
  puVar3 = DAT_8c1fba6c + 0x10;
  for (puVar4 = DAT_8c1fba6c; puVar4 < puVar3; puVar4 = puVar4 + 1) {
    (*(code *)puVar1)(*puVar4,ar5,ar6,ar7);
  }
  puVar3 = DAT_8c1fba7c + 8;
  for (puVar4 = DAT_8c1fba7c; puVar4 < puVar3; puVar4 = puVar4 + 1) {
    (*(code *)puVar1)(*puVar4,ar5,ar6,ar7);
  }
  uVar2 = (*(code *)puVar1)(*DAT_8c1fba80,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c1fba90 @ 8c1fba90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fba90(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *DAT_8c1fbb50 = ar4;
  return ar4;
}



/* FUN_8c1fba98 @ 8c1fba98 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fba98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = ar4 * 0x148;
  iVar3 = _DAT_8c475f80;
  do {
    iVar1 = FUN_8c1fd008(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) break;
    if ((DAT_8c26d178 != 0) && (iVar1 == -0xd0)) goto LAB_8c1fbb2c;
    bVar4 = iVar3 != 0;
    *(int *)(iVar5 + -0x73b87bec) = *(int *)(iVar5 + -0x73b87bec) + 1;
    iVar3 = iVar3 + -1;
  } while ((bVar4) || (_DAT_8c475f80 == -1));
  iVar3 = *(int *)(iVar5 + -0x73b87bf0);
  *(int *)(iVar5 + -0x73b87bf0) = iVar3 + 1;
  FUN_8c1fcdc2(ar4,*(undefined4 *)(ar4 * 0x80 + -0x73b8a038),iVar3,
               *(undefined4 *)(iVar5 + -0x73b87bec));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == -0xff) {
LAB_8c1fbb2c:
    uVar2 = 0xffffff01;
  }
  else {
    uVar2 = 0xffff0000;
  }
  return uVar2;
}



/* FUN_8c1fbb6c @ 8c1fbb6c callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fbb6c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = ar4 * 0x148;
  iVar3 = _DAT_8c475f80;
  do {
    iVar1 = FUN_8c1fd1e2(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) break;
    if ((DAT_8c26d178 != 0) && (iVar1 == -0xd0)) goto LAB_8c1fbc04;
    bVar4 = iVar3 != 0;
    *(int *)(iVar5 + -0x73b87bec) = *(int *)(iVar5 + -0x73b87bec) + 1;
    iVar3 = iVar3 + -1;
  } while ((bVar4) || (_DAT_8c475f80 == -1));
  iVar3 = *(int *)(iVar5 + -0x73b87bf0);
  *(int *)(iVar5 + -0x73b87bf0) = iVar3 + 1;
  FUN_8c1fcdc2(ar4,*(undefined4 *)(ar4 * 0x80 + -0x73b8a038),iVar3,
               *(undefined4 *)(iVar5 + -0x73b87bec));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == -0xff) {
LAB_8c1fbc04:
    uVar2 = 0xffffff01;
  }
  else {
    uVar2 = 0xffff0000;
  }
  return uVar2;
}



/* FUN_8c1fbc44 @ 8c1fbc44 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fbc44(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = ar4 * 0x148;
  iVar3 = _DAT_8c475f80;
  do {
    iVar1 = FUN_8c1fd312(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) break;
    if ((DAT_8c26d178 != 0) && (iVar1 == -0xd0)) goto LAB_8c1fbce2;
    bVar4 = iVar3 != 0;
    *(int *)(iVar5 + -0x73b87bec) = *(int *)(iVar5 + -0x73b87bec) + 1;
    iVar3 = iVar3 + -1;
  } while ((bVar4) || (_DAT_8c475f80 == -1));
  iVar3 = *(int *)(iVar5 + -0x73b87bf0);
  *(int *)(iVar5 + -0x73b87bf0) = iVar3 + 1;
  FUN_8c1fcdc2(ar4,*(undefined4 *)(ar4 * 0x80 + -0x73b8a038),iVar3,
               *(undefined4 *)(iVar5 + -0x73b87bec));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == -0xff) {
LAB_8c1fbce2:
    uVar2 = 0xffffff01;
  }
  else if (iVar1 == -0xc0) {
    uVar2 = 0xffffff40;
  }
  else {
    uVar2 = 0xffff0000;
  }
  return uVar2;
}



/* FUN_8c1fbd2c @ 8c1fbd2c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c1fbd2c(undefined4 ar4,undefined4 ar5,undefined4 ar6,code *ar7)

{
  int iVar1;
  undefined4 a4;
  code *a5;
  code *ain0;
  
  _DAT_8c475f88 = 0;
  _DAT_8c475f8c = 0;
  _DAT_8c475f90 = 0;
  _DAT_8c475f94 = 0;
  _DAT_8c475f98 = ar6;
  _DAT_8c475f9c = ar5;
  ain0 = ar7;
  FUN_8c1fc9b0(ar5,ar5,ar6,ar7);
  iVar1 = FUN_8c1fd626(ar4,ar5,ar6,ar7);
  a5 = FUN_8c1fbe84;
  a4 = DAT_8c26d1e0;
  FUN_8c1f03a6(DAT_8c26d1e0,FUN_8c1fbe84,ar6,ar7,ain0);
  if ((iVar1 == 0) && (ain0 != (code *)0x0)) {
    (*ain0)(a4,a5,ar6,ar7);
  }
  DAT_8c273a44 = 1;
  return iVar1;
}



/* FUN_8c1fbdb8 @ 8c1fbdb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1fbdb8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ain0;
  byte in_MD;
  byte bVar1;
  byte in_RB;
  byte bVar2;
  byte in_BL;
  byte bVar3;
  byte in_FD;
  byte bVar4;
  byte in_M;
  byte extraout_M;
  byte in_Q;
  byte extraout_Q;
  byte in_IMASK;
  byte bVar5;
  byte in_S;
  byte extraout_S;
  byte in_T;
  byte extraout_T;
  
  ain0 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  bVar3 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar1 = bVar3 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar5 = 0;
  bVar4 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar3 = (bVar3 & 0x10) >> 4;
  bVar2 = (bVar1 & 0x20) >> 5;
  bVar1 = ((bVar1 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  FUN_8c1f03a6(0x14,0,ar6,ar7,ain0);
  return (ain0 & 0xf) << 4 |
         ((uint)extraout_T | (uint)extraout_S << 1 | (uint)bVar5 << 4) & 0xffffff0f |
         (uint)extraout_Q << 8 | (uint)extraout_M << 9 | (uint)bVar4 << 0xf | (uint)bVar3 << 0x1c |
         (uint)bVar2 << 0x1d | (uint)bVar1 << 0x1e;
}



/* FUN_8c1fbdfc @ 8c1fbdfc callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fbdfc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,code *ain1)

{
  undefined4 in_r2;
  undefined4 *in_r3;
  undefined4 uVar1;
  undefined4 in_PR;
  
  *in_r3 = in_r2;
  uVar1 = 0x14;
  (*ain1)(0x14,ar5,ar6,ar7,in_PR);
  FUN_8c1fcadc(uVar1,ar5,ar6,ar7);
  uVar1 = FUN_8c1fda04(uVar1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c1fbe12 @ 8c1fbe12 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fbe12(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  int ar4_00;
  
  ar4_00 = 0;
  do {
    iVar2 = FUN_8c1fce88(ar4_00,ar5,ar6,ar7);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    ar4_00 = ar4_00 + 1;
  } while (ar4_00 < 8);
  ar5_00 = 0;
  DAT_8c273a44 = 0;
  uVar1 = DAT_8c26d1e0;
  FUN_8c1f03a6(DAT_8c26d1e0,0,ar6,ar7,0);
  FUN_8c1fcadc(uVar1,ar5_00,ar6,ar7);
  uVar1 = FUN_8c1fda04(uVar1,ar5_00,ar6,ar7);
  return uVar1;
}



/* FUN_8c1fbe1a @ 8c1fbe1a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fbe1a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  int unaff_r13;
  int unaff_r14;
  
  do {
    iVar2 = FUN_8c1fce88(unaff_r14,ar5,ar6,ar7);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    unaff_r14 = unaff_r14 + 1;
  } while (unaff_r14 < unaff_r13);
  ar5_00 = 0;
  DAT_8c273a44 = 0;
  uVar1 = DAT_8c26d1e0;
  FUN_8c1f03a6(DAT_8c26d1e0,0,ar6,ar7,0);
  FUN_8c1fcadc(uVar1,ar5_00,ar6,ar7);
  uVar1 = FUN_8c1fda04(uVar1,ar5_00,ar6,ar7);
  return uVar1;
}



/* FUN_8c1fbe84 @ 8c1fbe84 callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c1fbe84(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (DAT_8c273a44 != 0) {
    if (_DAT_8c475f98 == 0) {
      pcVar2 = FUN_8c1fc00e;
    }
    else {
      pcVar2 = FUN_8c1fbfd2;
    }
    thunk_FUN_8c1fcfbe(ar4,ar5,ar6,ar7);
    _DAT_8c475f88 = _DAT_8c475f8c;
    _DAT_8c475f8c = FUN_8c1fda44(ar4,ar5,ar6,ar7);
    uVar3 = 0;
    iVar6 = 0;
    uVar4 = 1;
    _DAT_8c475f8c = _DAT_8c475f8c & _DAT_8c475f9c;
    do {
      iVar1 = FUN_8c1fc5c4(iVar6,ar5,ar6,ar7);
      uVar5 = uVar4;
      if (iVar1 != 0) {
        uVar5 = 0;
      }
      iVar6 = iVar6 + 1;
      uVar4 = uVar4 << 1;
      uVar3 = uVar3 | uVar5;
    } while (iVar6 < 8);
    uVar5 = 1;
    iVar6 = 0;
    uVar4 = (_DAT_8c475f88 ^ _DAT_8c475f8c) & _DAT_8c475f8c;
    ain0 = _DAT_8c475f8c;
    do {
      if ((uVar4 & uVar5) != 0) {
        if ((uVar5 & uVar3) == 0) {
          _DAT_8c475f90 = _DAT_8c475f90 | uVar5;
        }
        else {
          ain0 = (*pcVar2)(iVar6,ar5,ar6,ar7);
          _DAT_8c475f90 = _DAT_8c475f90 & ~uVar5;
        }
      }
      if (((uVar5 & uVar3) != 0) && ((_DAT_8c475f90 & uVar5) != 0)) {
        ain0 = (*pcVar2)(iVar6,ar5,ar6,ar7);
        _DAT_8c475f90 = _DAT_8c475f90 & ~uVar5;
      }
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 << 1;
    } while (iVar6 < 8);
    uVar5 = 1;
    iVar6 = 0;
    uVar4 = (_DAT_8c475f8c ^ _DAT_8c475f88) & _DAT_8c475f88;
    do {
      if ((uVar4 & uVar5) != 0) {
        if ((uVar5 & uVar3) == 0) {
          _DAT_8c475f94 = _DAT_8c475f94 | uVar5;
        }
        else {
          ain0 = FUN_8c1fcd9c(iVar6,2,0,ar7);
          _DAT_8c475f94 = _DAT_8c475f94 & ~uVar5;
        }
      }
      if (((uVar5 & uVar3) != 0) && ((_DAT_8c475f94 & uVar5) != 0)) {
        ain0 = FUN_8c1fcd9c(iVar6,2,0,ar7);
        _DAT_8c475f94 = _DAT_8c475f94 & ~uVar5;
      }
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 << 1;
    } while (iVar6 < 8);
  }
  return ain0;
}



/* thunk_FUN_8c1fce34 @ 8c1fbfb4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c1fce34(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c1fc10c)();
  return uVar1;
}



/* thunk_FUN_8c1fce50 @ 8c1fbfba callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c1fce50(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1fc110)();
  return uVar1;
}



/* thunk_FUN_8c1fda7e @ 8c1fbfcc callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c1fda7e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c1fc11c)();
  return uVar1;
}



/* FUN_8c1fbfd2 @ 8c1fbfd2 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fbfd2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,1,ar6,ar7,in_PR);
    FUN_8c1fcea8(ar4,ar4,0,0,0,0,0,in_PR);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc00e @ 8c1fc00e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc00e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0x12,ar6,ar7,in_PR);
    FUN_8c1fcea8(ar4,ar4,0,0,0,0,0,in_PR);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc04e @ 8c1fc04e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc04e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc120)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c1fc12c)(ar4);
  return uVar2;
}



/* thunk_FUN_8c1ffcc2 @ 8c1fc076 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c1ffcc2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c1fc130)();
  return uVar1;
}



/* FUN_8c1fc07c @ 8c1fc07c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc07c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 in_stack_00000000;
  
  uVar2 = ar6;
  ar7_00 = ar7;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_8c1fce98(ar4,3,uVar2,ar7_00,ar5);
  uVar2 = ar5;
  FUN_8c1fcea8(ar4,ar4,ar5,ar6,ar7,in_stack_00000000,0,ar5);
  FUN_8c1fcecc(ar4,uVar2,ar5,ar6,uVar2);
  FUN_8c1fcf6e(ar4,ar7,ar5,ar6);
  return 0;
}



/* FUN_8c1fc13c @ 8c1fc13c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc13c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc3f0)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c1fc3f4)(ar4,ar5);
  return uVar2;
}



/* FUN_8c1fc16a @ 8c1fc16a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc16a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc3f0)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c1fc3f8)(ar4,ar5);
  return uVar2;
}



/* FUN_8c1fc198 @ 8c1fc198 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc198(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc3f0)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c1fc3fc)(ar4,ar5);
  return uVar2;
}



/* FUN_8c1fc1c6 @ 8c1fc1c6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc1c6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc3f0)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c1fc400)(ar4,ar5);
  return uVar2;
}



/* FUN_8c1fc1f4 @ 8c1fc1f4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc1f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc3f0)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c1fc404)(ar4,ar5,ar6);
  return uVar2;
}



/* FUN_8c1fc226 @ 8c1fc226 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc226(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc3f0)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c1fc408)(ar4,ar5,ar6);
  return uVar2;
}



/* FUN_8c1fc258 @ 8c1fc258 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc258(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc3f0)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c1fc40c)(ar4,ar5);
  return uVar2;
}



/* FUN_8c1fc286 @ 8c1fc286 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc286(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc3f0)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c1fc410)(ar4,ar5,ar6);
  return uVar2;
}



/* FUN_8c1fc2b8 @ 8c1fc2b8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc2b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc3f0)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c1fc414)(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c1fc2ee @ 8c1fc2ee callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc2ee(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc3f0)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c1fc418)(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c1fc324 @ 8c1fc324 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc324(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc3f0)(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c1fc41c)(ar4,(int)(short)ar5,(int)(char)ar6);
  return uVar2;
}



/* FUN_8c1fc360 @ 8c1fc360 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc360(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(ar4 + 0x28);
  iVar1 = FUN_8c1fce88(uVar2,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(uVar2,4,ar6,ar7,ar4);
    FUN_8c1fcea8(uVar2,ar4,1,0,0,0,0,ar4);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc3a6 @ 8c1fc3a6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc3a6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar4_00;
  
  ar4_00 = *(undefined4 *)(ar4 + 0x28);
  uVar2 = ar6;
  iVar1 = FUN_8c1fce88(ar4_00,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4_00,5,uVar2,ar7,ar4);
    FUN_8c1fcea8(ar4_00,ar4,ar5,ar6,0,0,0,ar4);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc428 @ 8c1fc428 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc428(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar4_00;
  
  ar4_00 = *(undefined4 *)(ar4 + 0x28);
  uVar2 = ar6;
  iVar1 = FUN_8c1fce88(ar4_00,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4_00,6,uVar2,ar7,ar4);
    FUN_8c1fcea8(ar4_00,ar4,ar5,ar6,0,0,0,ar4);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc472 @ 8c1fc472 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc472(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = FUN_8c1fce98(ar4,7,ar6,ar7,0);
    ar7_00 = 0;
    FUN_8c1fcea8(ar4,ar4,ar5,0,uVar2,0,0,0);
    FUN_8c1fcef8(ar4,ar5,ar5,ar7_00);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc476 @ 8c1fc476 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc476(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r14;
  undefined4 in_PR;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(unaff_r14,7,ar6,ar7,in_PR);
    uVar2 = 0;
    FUN_8c1fcea8(unaff_r14,unaff_r14,ar5,0,0,0,0,in_PR);
    FUN_8c1fcef8(unaff_r14,ar5,ar5,uVar2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc4be @ 8c1fc4be callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc4be(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar6;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0x11,uVar2,ar7,ar5);
    FUN_8c1fcea8(ar4,ar4,ar5,ar6,0,0,0,ar5);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc504 @ 8c1fc504 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc504(undefined4 ar4,undefined4 ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_stack_ffffffe8;
  uint ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_ffffffe8 >> 0x10),(short)ar6);
  uVar3 = ar7;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,10,ar6,uVar3,ain0);
    uVar3 = ain0 & 0xffff;
    FUN_8c1fcea8(ar4,ar4,ar5,uVar3,ar7 & 0xff,0,0,ain0);
    FUN_8c1fcef8(ar4,ar5,ar5,uVar3);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc564 @ 8c1fc564 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc564(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc6c8)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c1fc6d8)(ar4,ar5);
  return uVar2;
}



/* FUN_8c1fc592 @ 8c1fc592 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc592(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc6c8)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c1fc6dc)(ar4,ar5,ar6);
  return uVar2;
}



/* FUN_8c1fc5c4 @ 8c1fc5c4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc5c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc6c8)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return 0;
}



/* FUN_8c1fc5de @ 8c1fc5de callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc5de(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc6c8)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 * 4 + DAT_8c1fc6e0);
}



/* FUN_8c1fc604 @ 8c1fc604 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc604(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar6;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,8,uVar2,ar7,ar5);
    uVar2 = ar6;
    FUN_8c1fcea8(ar4,ar4,ar5,ar6,0,0,0,ar5);
    FUN_8c1fcef8(ar4,ar5,ar6,uVar2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc654 @ 8c1fc654 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc654(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc6c8)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c1fc6e4)(ar4,ar5);
  return uVar2;
}



/* FUN_8c1fc682 @ 8c1fc682 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc682(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,9,ar6,ar7,ar5);
    FUN_8c1fcea8(ar4,ar4,ar5,0,0,0,0,ar5);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc6e8 @ 8c1fc6e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc6e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ain0;
  
  uVar2 = ar7;
  ain0 = ar6;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0xb,ar6,uVar2,ain0);
    FUN_8c1fcea8(ar4,ar4,ar5,ain0,ar7,0,0,ain0);
    FUN_8c1fcef8(ar4,ar5,ar5,ain0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc740 @ 8c1fc740 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc740(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ain0;
  undefined4 in_stack_00000004;
  
  uVar2 = ar7;
  ain0 = ar6;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0xc,ar6,uVar2,ain0);
    FUN_8c1fcea8(ar4,ar4,ar5,ain0,ar7,s0,in_stack_00000004,ain0);
    FUN_8c1fcef8(ar4,ar5,ar5,ain0);
    FUN_8c1fcf6e(ar4,s0,ar5,ain0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc79e @ 8c1fc79e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc79e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ain0;
  undefined4 in_stack_00000004;
  
  uVar2 = ar7;
  ain0 = ar6;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0xd,ar6,uVar2,ain0);
    FUN_8c1fcea8(ar4,ar4,ar5,ain0,ar7,s0,in_stack_00000004,ain0);
    FUN_8c1fcef8(ar4,ar5,ar5,ain0);
    FUN_8c1fcf6e(ar4,s0,ar5,ain0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc7fc @ 8c1fc7fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc7fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000000;
  undefined4 ain0;
  
  uVar2 = ar6;
  ain0 = ar7;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0xe,uVar2,ar7,ain0);
    FUN_8c1fcea8(ar4,ar4,ar5,ar6,ain0,in_stack_00000000,0,ain0);
    FUN_8c1fcef8(ar4,ar5,ar5,ar6);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc852 @ 8c1fc852 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc852(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000000;
  undefined4 ain0;
  
  uVar2 = ar6;
  ain0 = ar7;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0x14,uVar2,ar7,ain0);
    FUN_8c1fcea8(ar4,ar4,ar5,ar6,ain0,in_stack_00000000,0,ain0);
    FUN_8c1fcef8(ar4,ar5,ar5,ar6);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc8a8 @ 8c1fc8a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc8a8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0xf,ar6,ar7,ar5);
    FUN_8c1fcea8(ar4,ar4,ar5,0,0,0,0,ar5);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc8ec @ 8c1fc8ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc8ec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0x10,ar6,ar7,ar5);
    FUN_8c1fcea8(ar4,ar4,ar5,0,0,0,0,ar5);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* FUN_8c1fc93c @ 8c1fc93c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc93c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c1fc97c)(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = FUN_8c1fbfd2(ar4,ar5,ar6,ar7);
    return uVar2;
  }
  return iVar1;
}



/* FUN_8c1fc980 @ 8c1fc980 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc980(undefined4 *ar4,undefined4 *ar5,uint ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ar6 >> 2;
  do {
    uVar1 = *ar5;
    ar5 = ar5 + 1;
    uVar2 = uVar2 - 1;
    *ar4 = uVar1;
    ar4 = ar4 + 1;
  } while (uVar2 != 0);
  return in_r0;
}



/* FUN_8c1fc9b0 @ 8c1fc9b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc9b0(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = DAT_8c1fca2c;
  iVar5 = (int)DAT_8c1fca2a;
  *DAT_8c1fca2c = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar2 = PTR_memset_8c1fca30;
  (*(code *)PTR_memset_8c1fca30)(DAT_8c1fca34,0,iVar5,4);
  (*(code *)puVar2)(DAT_8c1fca38,0x30,iVar5);
  (*(code *)puVar2)(DAT_8c1fca3c,0x31,iVar5);
  (*(code *)puVar2)(DAT_8c1fca40,0x32,iVar5);
  (*(code *)puVar2)(DAT_8c1fca44,0x33,iVar5);
  (*(code *)puVar2)(DAT_8c1fca48,0x34,iVar5);
  (*(code *)puVar2)(DAT_8c1fca4c,0x35,iVar5);
  (*(code *)puVar2)(DAT_8c1fca50,0x36,iVar5);
  (*(code *)puVar2)(DAT_8c1fca54,0x37,iVar5);
  iVar3 = (*(code *)PTR_FUN_8c1fca58)();
  puVar2 = PTR_FUN_8c1fcb14;
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if ((ar4 & 1) != 0) {
      (*(code *)PTR_FUN_8c1fcb14)(PTR_LAB_8c1fcb1c,DAT_8c1fcb18,iVar5);
    }
    if ((ar4 & 2) != 0) {
      (*(code *)puVar2)(PTR_LAB_8c1fcb24,DAT_8c1fcb20,iVar5);
    }
    if ((ar4 & 4) != 0) {
      (*(code *)puVar2)(PTR_LAB_8c1fcb2c,DAT_8c1fcb28,iVar5);
    }
    if ((ar4 & 8) != 0) {
      (*(code *)puVar2)(PTR_LAB_8c1fcb34,DAT_8c1fcb30,iVar5);
    }
    if ((ar4 & 0x10) != 0) {
      (*(code *)puVar2)(PTR_LAB_8c1fcb3c,DAT_8c1fcb38,iVar5);
    }
    if ((ar4 & 0x20) != 0) {
      (*(code *)puVar2)(PTR_LAB_8c1fcb44,DAT_8c1fcb40,iVar5);
    }
    if ((ar4 & 0x40) != 0) {
      (*(code *)puVar2)(PTR_LAB_8c1fcb4c,DAT_8c1fcb48,iVar5);
    }
    if ((ar4 & (int)DAT_8c1fcb10) != 0) {
      (*(code *)puVar2)(PTR_LAB_8c1fcb54,DAT_8c1fcb50,iVar5);
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* FUN_8c1fc9c0 @ 8c1fc9c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fc9c0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 unaff_r11;
  uint unaff_r12;
  undefined4 unaff_r14;
  
  *ar4 = unaff_r11;
  ar4[1] = unaff_r11;
  ar4[2] = unaff_r11;
  ar4[3] = unaff_r11;
  ar4[4] = unaff_r11;
  ar4[5] = unaff_r11;
  ar4[6] = unaff_r11;
  ar4[7] = unaff_r11;
  puVar1 = PTR_memset_8c1fca30;
  (*(code *)PTR_memset_8c1fca30)(DAT_8c1fca34,unaff_r11,unaff_r14,ar7);
  (*(code *)puVar1)(DAT_8c1fca38,0x30,unaff_r14,ar7);
  (*(code *)puVar1)(DAT_8c1fca3c,0x31,unaff_r14,ar7);
  (*(code *)puVar1)(DAT_8c1fca40,0x32,unaff_r14,ar7);
  (*(code *)puVar1)(DAT_8c1fca44,0x33,unaff_r14,ar7);
  (*(code *)puVar1)(DAT_8c1fca48,0x34,unaff_r14,ar7);
  (*(code *)puVar1)(DAT_8c1fca4c,0x35,unaff_r14,ar7);
  (*(code *)puVar1)(DAT_8c1fca50,0x36,unaff_r14,ar7);
  ar5_00 = 0x37;
  uVar3 = DAT_8c1fca54;
  ar6_00 = unaff_r14;
  (*(code *)puVar1)(DAT_8c1fca54,0x37,unaff_r14,ar7);
  iVar2 = (*(code *)PTR_FUN_8c1fca58)(uVar3,ar5_00,ar6_00,ar7);
  puVar1 = PTR_FUN_8c1fcb14;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((unaff_r12 & 1) != 0) {
      (*(code *)PTR_FUN_8c1fcb14)(PTR_LAB_8c1fcb1c,DAT_8c1fcb18,unaff_r14,ar7);
    }
    if ((unaff_r12 & 2) != 0) {
      (*(code *)puVar1)(PTR_LAB_8c1fcb24,DAT_8c1fcb20,unaff_r14,ar7);
    }
    if ((unaff_r12 & 4) != 0) {
      (*(code *)puVar1)(PTR_LAB_8c1fcb2c,DAT_8c1fcb28,unaff_r14,ar7);
    }
    if ((unaff_r12 & 8) != 0) {
      (*(code *)puVar1)(PTR_LAB_8c1fcb34,DAT_8c1fcb30,unaff_r14,ar7);
    }
    if ((unaff_r12 & 0x10) != 0) {
      (*(code *)puVar1)(PTR_LAB_8c1fcb3c,DAT_8c1fcb38,unaff_r14,ar7);
    }
    if ((unaff_r12 & 0x20) != 0) {
      (*(code *)puVar1)(PTR_LAB_8c1fcb44,DAT_8c1fcb40,unaff_r14,ar7);
    }
    if ((unaff_r12 & 0x40) != 0) {
      (*(code *)puVar1)(PTR_LAB_8c1fcb4c,DAT_8c1fcb48,unaff_r14,ar7);
    }
    if ((unaff_r12 & (int)DAT_8c1fcb10) != 0) {
      (*(code *)puVar1)(PTR_LAB_8c1fcb54,DAT_8c1fcb50,unaff_r14,ar7);
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* FUN_8c1fcadc @ 8c1fcadc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fcadc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_memset_8c1fcb5c)(DAT_8c1fcb58,0,(int)DAT_8c1fcb12,ar7);
  return 0;
}



/* thunk_FUN_8c1fcfbe @ 8c1fcaee callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c1fcfbe(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c1fcb60)();
  return uVar1;
}



/* FUN_8c1fcd9c @ 8c1fcd9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fcd9c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x80 + DAT_8c1fce30;
  if (*(int *)(iVar2 + 0x74) != 0) {
                    /* WARNING: Could not recover jumptable at 0x8c1fcdba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(iVar2 + 0x74))(*(undefined4 *)(iVar2 + 0x7c));
    return uVar1;
  }
  return 0x74;
}



/* FUN_8c1fcdc2 @ 8c1fcdc2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fcdc2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x80 + DAT_8c1fce30;
  if (*(int *)(iVar2 + 0x78) != 0) {
                    /* WARNING: Could not recover jumptable at 0x8c1fcddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(iVar2 + 0x78))();
    return uVar1;
  }
  return 0x78;
}



/* FUN_8c1fce34 @ 8c1fce34 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fce34(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)DAT_8c1fcef0;
  uVar3 = DAT_8c1fcef4 + (int)DAT_8c1fcef2;
  uVar1 = DAT_8c1fcef4;
  do {
    *(undefined4 *)(uVar1 + 0x74) = ar4;
    uVar1 = uVar1 + iVar2;
  } while (uVar1 < uVar3);
  return 0x74;
}



/* FUN_8c1fce50 @ 8c1fce50 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fce50(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)DAT_8c1fcef0;
  uVar3 = DAT_8c1fcef4 + (int)DAT_8c1fcef2;
  uVar1 = DAT_8c1fcef4;
  do {
    *(undefined4 *)(uVar1 + 0x78) = ar4;
    uVar1 = uVar1 + iVar2;
  } while (uVar1 < uVar3);
  return 0x78;
}



/* FUN_8c1fce88 @ 8c1fce88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fce88(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 * 0x80 + DAT_8c1fcef4 + 4);
}



/* FUN_8c1fce98 @ 8c1fce98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fce98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 * 0x80 + DAT_8c1fcef4 + 8) = ar5;
  return in_r0;
}



/* FUN_8c1fcea8 @ 8c1fcea8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c1fcea8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
            undefined4 s8)

{
  undefined4 in_r0;
  int iVar1;
  
  iVar1 = ar4 * 0x80 + DAT_8c1fcef4;
  *(undefined4 *)(iVar1 + 0x14) = ar5;
  *(undefined4 *)(iVar1 + 0x18) = ar6;
  *(undefined4 *)(iVar1 + 0x1c) = ar7;
  *(undefined4 *)(iVar1 + 0x20) = s0;
  *(undefined4 *)(iVar1 + 0x24) = s4;
  *(undefined4 *)(iVar1 + 0x28) = s8;
  *(undefined4 *)(iVar1 + 4) = 1;
  return in_r0;
}



/* FUN_8c1fcecc @ 8c1fcecc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fcecc(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined4 in_r0;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = ar4 * 0x80 + DAT_8c1fcef4;
  puVar2 = (undefined1 *)(iVar3 + 0x4c);
  do {
    uVar1 = *ar5;
    ar5 = ar5 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (puVar2 < (undefined1 *)(iVar3 + 0x6c));
  return in_r0;
}



/* FUN_8c1fcef8 @ 8c1fcef8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fcef8(int ar4,char *ar5,char *ar6,undefined4 ar7)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = ar4 * 0x80 + DAT_8c1fcf88;
  puVar2 = (undefined1 *)(iVar5 + 0x2c);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (puVar2 < (undefined1 *)(iVar5 + 0x39));
  puVar2 = (undefined1 *)(iVar5 + 0x3c);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (puVar2 < (undefined1 *)(iVar5 + 0x49));
  pcVar4 = ar5 + 0xc;
  pcVar6 = (char *)(iVar5 + 0x2c);
  for (pcVar3 = ar5; (pcVar3 < pcVar4 && (*pcVar3 != '\0')); pcVar3 = pcVar3 + 1) {
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  }
  pcVar4 = ar6 + 0xc;
  pcVar6 = (char *)(iVar5 + 0x3c);
  for (pcVar3 = ar6; (pcVar3 < pcVar4 && (*pcVar3 != '\0')); pcVar3 = pcVar3 + 1) {
    cVar1 = *ar6;
    ar6 = ar6 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  }
  return ar5;
}



/* FUN_8c1fcf6e @ 8c1fcf6e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fcf6e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_memmove_8c1fcf8c)(ar4 * 0x80 + DAT_8c1fcf88 + 0x6c,8);
  return uVar1;
}



/* FUN_8c1fcf90 @ 8c1fcf90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fcf90(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c1fcfdc)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c1fcfe0)(8,ar5,ar6,ar7);
  *DAT_8c1fcfe4 = uVar1;
  return uVar1;
}



/* FUN_8c1fcfa6 @ 8c1fcfa6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fcfa6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1fcfe8)(*DAT_8c1fcfe4,ar4,ar5,ar6);
  return uVar1;
}



/* FUN_8c1fcfbe @ 8c1fcfbe callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fcfbe(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1fcfec)(*DAT_8c1fcfe4);
  return uVar1;
}



/* thunk_FUN_8c1f6a30 @ 8c1fcfce callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 thunk_FUN_8c1f6a30(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c1fcff4)();
  return uVar1;
}



/* FUN_8c1fcffc @ 8c1fcffc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fcffc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  DAT_8c273a48 = 0;
  return ain0;
}



/* noop_1fd004 @ 8c1fd004 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_1fd004(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c1fd008 @ 8c1fd008 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fd008(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *ar5_00;
  undefined4 uVar6;
  int a4;
  undefined4 uVar7;
  uint uStack_2c;
  ushort uStack_28;
  ushort uStack_26;
  
  uVar7 = *(undefined4 *)(&DAT_8c26d1e8 + ar4 * 4);
  ar5_00 = ar5;
  pcVar1 = (char *)FUN_8c1efd14(uVar7,ar5,ar6,ar7);
  puVar2 = (uint *)FUN_8c1efd26(uVar7,ar5_00,ar6,ar7);
  if ((*pcVar1 == '\0') || ((*puVar2 & 2) == 0)) {
override_prt_8c1fd1c8_7a4d7f16:
    thunk_FUN_8c1f6a30(puVar2,ar5_00,ar6,ar7);
  }
  else {
    thunk_FUN_8c1f4646(uVar7,ar5_00,ar6,ar7);
    do {
      while( true ) {
        FUN_8c1efd14(uVar7,ar5_00,ar6,ar7);
        ar5_00 = (uint *)0x2;
        ar6 = 0;
        uVar6 = uVar7;
        puVar2 = (uint *)FUN_8c1efe3a(uVar7,2,0,ar7);
        if (-1 < (int)puVar2) break;
        thunk_FUN_8c1f6a30(uVar6,ar5_00,ar6,ar7);
      }
      while (uVar6 = uVar7, ar5_00 = puVar2, iVar3 = thunk_FUN_8c1f461c(uVar7,puVar2,ar6,ar7),
            iVar3 == 0) {
        thunk_FUN_8c1f6a30(uVar6,ar5_00,ar6,ar7);
      }
      iVar3 = FUN_8c1efd14(uVar7,ar5_00,ar6,ar7);
      uVar6 = uVar7;
      iVar4 = thunk_FUN_8c1f4636(uVar7,ar5_00,ar6,ar7);
      if (iVar4 != 0) {
        thunk_FUN_8c1f6a30(uVar6,ar5_00,ar6,ar7);
        return 0xffffff30;
      }
      iVar4 = *(int *)(iVar3 + 8);
      a4 = iVar4 + 8;
      if (*(char *)(iVar3 + 4) == '\b') {
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,0,ar6,ar7);
        *ar5 = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,2,ar6,ar7);
        ar5[1] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,4,ar6,ar7);
        ar5[2] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,6,ar6,ar7);
        ar5[3] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,8,ar6,ar7);
        ar5[4] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,10,ar6,ar7);
        ar5[5] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,0xc,ar6,ar7);
        ar5[6] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,0x10,ar6,ar7);
        ar5[7] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,0x12,ar6,ar7);
        uVar6 = 0x14;
        ar5[8] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,0x14,ar6,ar7);
        ar5[0xd] = uVar5 & 0xffff;
        ar5[0xe] = 0x80;
        ar5[9] = (uint)*(byte *)(iVar4 + 0x16);
        ar5[10] = (uint)*(byte *)(iVar4 + 0x17);
        ar5[0xb] = 0x1ff;
        ar5_00 = (uint *)FUN_8c1efd26(uVar7,uVar6,ar6,ar7);
        puVar2 = &uStack_2c;
        iVar3 = FUN_8c1f0074(puVar2,ar5_00,ar6,ar7);
        if (-1 < iVar3) {
          uVar7 = 0x200;
          ar5[0xf] = (uint)uStack_26;
          ar5[0x10] = (uint)uStack_28;
          uVar5 = libgcc_divide_helper_010468(0x200,(uint)uStack_26);
          ar5[0x11] = uVar5;
          uVar5 = libgcc_divide_helper_010468(uVar7,(uint)uStack_28);
          ar5[0x12] = uVar5;
          return 0;
        }
        goto override_prt_8c1fd1c8_7a4d7f16;
      }
    } while (*(char *)(iVar3 + 4) == -4);
  }
  return 0xffffff01;
}



/* FUN_8c1fd1e2 @ 8c1fd1e2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fd1e2(int ar4,int ar5,int ar6,int ar7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int ar4_00;
  undefined4 ar4_01;
  int iVar6;
  int iVar7;
  
  iVar6 = ar4 * 0x148;
  iVar7 = ar4;
  ar4_00 = ar6;
  iVar2 = FUN_8c1fd550(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    thunk_FUN_8c1f6a30(iVar7,ar5,ar6,ar7);
    return 0xffffff01;
  }
  ar4_01 = *(undefined4 *)(&DAT_8c26d1e8 + ar4 * 4);
  FUN_8c1efd14(ar4_01,ar5,ar6,ar7);
  iVar7 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(&DAT_8c4783fc + iVar6) + 0x3c) <= iVar7) {
      return 0;
    }
    while( true ) {
      while( true ) {
        iVar3 = thunk_FUN_8c1f4636(ar4_01,ar5,ar6,ar7);
        if (iVar3 != 0) {
          return 0xffffff30;
        }
        ar6 = 0;
        ar5 = 2;
        uVar5 = ar4_01;
        ar7 = iVar2;
        iVar3 = FUN_8c1efe80(ar4_01,2,0,iVar2);
        if (-1 < iVar3) break;
        thunk_FUN_8c1f6a30(uVar5,ar5,ar6,ar7);
      }
      while (uVar5 = ar4_01, ar5 = iVar3, iVar4 = thunk_FUN_8c1f461c(ar4_01,iVar3,ar6,ar7),
            iVar4 == 0) {
        thunk_FUN_8c1f6a30(uVar5,ar5,ar6,ar7);
      }
      iVar3 = FUN_8c1efd14(ar4_01,ar5,ar6,ar7);
      iVar4 = thunk_FUN_8c1f4636(ar4_01,ar5,ar6,ar7);
      if (iVar4 != 0) {
        return 0xffffff30;
      }
      cVar1 = *(char *)(iVar3 + 4);
      if (cVar1 == '\b') break;
      if (cVar1 != -4) {
        if (cVar1 != -5) {
          return 0xffffff01;
        }
        return 0xffff0000;
      }
    }
    ar6 = *(int *)(*(int *)(&DAT_8c4783fc + iVar6) + 0x44);
    ar5 = *(int *)(iVar3 + 8) + 0xc;
    FUN_8c1fc980(ar4_00,ar5,ar6,ar7,iVar7);
    iVar2 = iVar2 + 1;
    ar4_00 = ar4_00 + *(int *)(*(int *)(&DAT_8c4783fc + iVar6) + 0x44);
    iVar7 = iVar7 + 1;
  } while( true );
}



/* FUN_8c1fd312 @ 8c1fd312 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fd312(int ar4,int ar5,char *ar6,undefined4 *ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int ar5_00;
  undefined4 *ar7_00;
  undefined4 ar4_00;
  char acStack_34 [4];
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  int iStack_28;
  int iStack_24;
  
  puStack_2c = &DAT_8c4783e0 + ar4 * 0x148;
  iVar2 = ar4;
  ar5_00 = ar5;
  iVar1 = FUN_8c1fd550(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    thunk_FUN_8c1f6a30(iVar2,ar5_00,ar6,ar7);
  }
  else {
    ar4_00 = *(undefined4 *)(&DAT_8c26d1e8 + ar4 * 4);
    FUN_8c1efd14(ar4_00,ar5_00,ar6,ar7);
    uVar3 = *(undefined4 *)(*(int *)(puStack_2c + 0x1c) + 0x48);
    ar7_00 = (undefined4 *)0x0;
    for (iStack_24 = 0; iStack_24 < *(int *)(*(int *)(puStack_2c + 0x1c) + 0x40);
        iStack_24 = iStack_24 + 1) {
      while( true ) {
        while( true ) {
          iVar2 = thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7);
          if (iVar2 != 0) {
            return 0xffffff30;
          }
          libgcc_divide_helper_010468(uVar3,4);
          ar5_00 = 2;
          ar6 = (char *)0x0;
          uVar4 = ar4_00;
          ar7 = ar7_00;
          iVar2 = FUN_8c1efeac(ar4_00,2,0,ar7_00);
          if (-1 < iVar2) break;
          thunk_FUN_8c1f6a30(uVar4,ar5_00,ar6,ar7);
        }
        while (uVar4 = ar4_00, ar5_00 = iVar2, iVar1 = thunk_FUN_8c1f461c(ar4_00,iVar2,ar6,ar7),
              iVar1 == 0) {
          thunk_FUN_8c1f6a30(uVar4,ar5_00,ar6,ar7);
        }
        iStack_28 = FUN_8c1efd14(ar4_00,ar5_00,ar6,ar7);
        iVar2 = thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7);
        if (iVar2 != 0) {
          return 0xffffff30;
        }
        if (*(char *)(iStack_28 + 4) == '\a') break;
        if (*(char *)(iStack_28 + 4) != -4) {
          return 0xffffff01;
        }
      }
      ar7_00 = (undefined4 *)((int)ar7_00 + 1);
    }
    do {
      while( true ) {
        iVar2 = thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7);
        if (iVar2 != 0) {
          return 0xffffff30;
        }
        ar6 = (char *)0x0;
        ar5_00 = 2;
        uVar3 = ar4_00;
        ar7 = ar7_00;
        iVar2 = FUN_8c1efee0(ar4_00,2,0,ar7_00);
        if (-1 < iVar2) break;
        thunk_FUN_8c1f6a30(uVar3,ar5_00,ar6,ar7);
      }
      while (uVar3 = ar4_00, ar5_00 = iVar2, iVar1 = thunk_FUN_8c1f461c(ar4_00,iVar2,ar6,ar7),
            iVar1 == 0) {
        thunk_FUN_8c1f6a30(uVar3,ar5_00,ar6,ar7);
      }
      iVar2 = FUN_8c1efd14(ar4_00,ar5_00,ar6,ar7);
      iVar1 = thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7);
      if (iVar1 != 0) {
        return 0xffffff30;
      }
      if (DAT_8c273a48 == (code *)0x0) {
LAB_8c1fd4ac:
        acStack_34[0] = *(char *)(iVar2 + 4);
        uStack_30 = *(undefined4 *)(iVar2 + 0xc);
      }
      else {
        ar6 = acStack_34;
        ar7 = &uStack_30;
        ar5_00 = ar5;
        iVar1 = (*DAT_8c273a48)(ar4,ar5,ar6,ar7);
        if (iVar1 == 0) goto LAB_8c1fd4ac;
      }
      if (acStack_34[0] == '\a') {
        return 0;
      }
    } while (acStack_34[0] == -4);
    if (acStack_34[0] == -5) {
      return 0xffffff40;
    }
  }
  return 0xffffff01;
}



/* FUN_8c1fd4f0 @ 8c1fd4f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fd4f0(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*ar4 != *ar5) {
      uVar2 = 0xffffffff;
    }
    ar4 = ar4 + 1;
    ar5 = ar5 + 1;
  } while (iVar1 < DAT_8c1fd59a);
  return uVar2;
}



/* FUN_8c1fd510 @ 8c1fd510 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fd510(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  uint *puVar2;
  undefined4 ar4_00;
  
  ar4_00 = *(undefined4 *)(&DAT_8c26d1e8 + ar4 * 4);
  pcVar1 = (char *)FUN_8c1efd14(ar4_00,ar5,ar6,ar7);
  puVar2 = (uint *)FUN_8c1efd26(ar4_00,ar5,ar6,ar7);
  if ((*pcVar1 != '\0') && ((*puVar2 & 2) != 0)) {
    return 1;
  }
  return 0;
}



/* FUN_8c1fd550 @ 8c1fd550 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fd550(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  undefined4 ar4_00;
  
  ar4_00 = *(undefined4 *)(&DAT_8c26d1e8 + ar4 * 4);
  pcVar1 = (char *)FUN_8c1efd14(ar4_00,ar5,ar6,ar7);
  puVar2 = (uint *)FUN_8c1efd26(ar4_00,ar5,ar6,ar7);
  if (((*pcVar1 != '\0') && (iVar3 = thunk_FUN_8c1f4636(ar4_00,ar5,ar6,ar7), iVar3 == 0)) &&
     ((*puVar2 & 2) != 0)) {
    return 1;
  }
  return 0;
}



/* FUN_8c1fd5c0 @ 8c1fd5c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c1fd5c0(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
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
  uVar1 = vsprintf_like(0x8c47e2ec,s4,ar6_00,ar7);
  if (DAT_8c273a50 != (code *)0x0) {
    uVar1 = (*DAT_8c273a50)(0x8c47e2ec,s4,ar6_00,ar7);
  }
  return uVar1;
}



/* FUN_8c1fd5f8 @ 8c1fd5f8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined * FUN_8c1fd5f8(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  piVar1 = DAT_8c1fd6ac;
  *(uint *)*DAT_8c1fd6ac = ar4 & 1;
  puVar2 = PTR_LAB_8c1fd6bc;
  puVar3 = PTR_LAB_8c1fd6b8;
  if ((ar4 & 1) == 1) {
    *(undefined **)(*piVar1 + 0xc) = PTR_LAB_8c1fd6b0;
    *(undefined **)(*piVar1 + 0x10) = PTR_LAB_8c1fd6b4;
    puVar3 = (undefined *)0x1;
  }
  else {
    *(undefined **)(*piVar1 + 0xc) = PTR_LAB_8c1fd6b8;
    *(undefined **)(*piVar1 + 0x10) = puVar2;
  }
  return puVar3;
}



/* FUN_8c1fd626 @ 8c1fd626 callers=0 callees=3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fd626(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined1 *ar4_00;
  undefined4 uVar2;
  int iVar3;
  undefined4 a6;
  uint uVar4;
  
  _DAT_8c4783dc = -0x73b87c38;
  puVar1 = (undefined4 *)&DAT_8c478e20;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 < (undefined4 *)0x8c478e40);
  memset(0x8c4783c8,0,0x14,ar7);
  a6 = 0xa40;
  uVar2 = 0;
  memset(&DAT_8c4783e0,0,0xa40,ar7);
  FUN_8c1fd5f8(0,uVar2,a6,ar7);
  iVar3 = 0;
  uVar4 = 1;
  _DAT_8c47d2e8 = 0;
  do {
    iVar3 = iVar3 + 1;
    if ((ar5 & uVar4) != 0) {
      _DAT_8c47d2e8 = _DAT_8c47d2e8 + 1;
    }
    uVar4 = uVar4 << 1;
  } while (iVar3 < 8);
  if (ar6 == 0) {
    FUN_8c1fd720(ar4,ar5,0,ar7);
    *(undefined4 *)(_DAT_8c4783dc + 8) = 1;
  }
  else {
    FUN_8c1fd75c(ar4,ar5,ar6,ar7);
    *(undefined4 *)(_DAT_8c4783dc + 8) = 0;
  }
  _DAT_8c47d2e0 = 8;
  _DAT_8c47d2e4 = 0;
  FUN_8c1fba90(10,ar5,ar6,ar7);
  ar4_00 = &DAT_8c47d0a0;
  iVar3 = _DAT_8c47d2e0 * 0x48;
  uVar2 = 0;
  memset(&DAT_8c47d0a0,0,iVar3,ar7);
  FUN_8c1fcffc(ar4_00,uVar2,iVar3,ar7,ar4);
  return 0;
}



/* FUN_8c1fd720 @ 8c1fd720 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1fd720(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_8c1fd7d8;
  if (ar4 == 0xf) {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  else {
    if (ar4 == 0x21) {
      uVar1 = 1;
    }
    else {
      if (ar4 == 0x41) {
        *(undefined4 *)(iVar2 + 4) = 2;
        return 0;
      }
      if (ar4 != 0x7a) {
        return (int)DAT_8c1fd7c2;
      }
      uVar1 = 3;
    }
    *(undefined4 *)(iVar2 + 4) = uVar1;
  }
  return 0;
}



/* FUN_8c1fd75c @ 8c1fd75c callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fd75c(int ar4,uint ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a7;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uStack_34;
  undefined2 uStack_24;
  
  a7 = _DAT_8c4783dc;
  puVar4 = (undefined2 *)&DAT_8c4783e0;
  if (ar4 == 0xf) {
    *(undefined4 *)(_DAT_8c4783dc + 4) = 0;
    uVar1 = DAT_8c273a64;
    iVar2 = DAT_8c273a54;
  }
  else {
    if (ar4 != 0x21) {
      if (ar4 == 0x41) {
        *(undefined4 *)(_DAT_8c4783dc + 4) = 2;
        uVar1 = DAT_8c273a6c;
        iVar2 = DAT_8c273a5c;
      }
      else {
        if (ar4 != 0x7a) {
          return 0xffffff00;
        }
        *(undefined4 *)(_DAT_8c4783dc + 4) = 3;
        uVar1 = DAT_8c273a70;
        iVar2 = DAT_8c273a60;
      }
      uStack_24 = (undefined2)uVar1;
      goto LAB_8c1fd7e8;
    }
    *(undefined4 *)(_DAT_8c4783dc + 4) = 1;
    uVar1 = DAT_8c273a68;
    iVar2 = DAT_8c273a58;
  }
  uStack_24 = (undefined2)uVar1;
LAB_8c1fd7e8:
  uStack_34 = 1;
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    if ((ar5 & uStack_34) != 0) {
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = (short)iVar3;
      *(int *)(puVar4 + 0xe) = iVar3 * 0x4c + -0x73b831c0;
      *(undefined1 *)(puVar4 + 5) = 0;
      *(undefined1 *)((int)puVar4 + 0xb) = 0;
      *(undefined1 *)(puVar4 + 6) = 0;
      *(int *)(puVar4 + 0x16) = ar6;
      *(int *)(puVar4 + 0x10) = ar6 + 0x20;
      *(int *)(puVar4 + 0x12) = ar6 + 0x220;
      *(int *)(puVar4 + 0x14) = (iVar2 + 1) * 0x200 + ar6 + 0x20;
      *(undefined1 *)(puVar4 + 4) = 0;
      *(undefined1 *)((int)puVar4 + 9) = 0;
      puVar4[7] = 1;
      puVar4[8] = (short)iVar2;
      puVar4[9] = uStack_24;
      puVar4[10] = 0x20;
      memset(puVar4 + 0x1c,0,0x10,a7);
      memset(puVar4 + 0x24,0,0x100,a7);
      memset(*(undefined4 *)(puVar4 + 0x16),0x47,0x20,a7);
      memset(*(undefined4 *)(puVar4 + 0x10),0x53,0x20,a7);
      memset(*(undefined4 *)(puVar4 + 0x12),0x46,0x20,a7);
      memset(*(undefined4 *)(puVar4 + 0x14),0x44,0x20,a7);
      ar6 = ar6 + ar4 * 0x200 + 0x20;
    }
    uStack_34 = uStack_34 << 1;
    puVar4 = puVar4 + 0xa4;
  }
  return 0;
}



/* FUN_8c1fd8b2 @ 8c1fd8b2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fd8b2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  
  ar4_00 = ar4 * DAT_8c1fd8ec + DAT_8c1fd8f8;
  (*(code *)PTR_memset_8c1fd8f0)(ar4_00,0,(int)DAT_8c1fd8ec,ar7);
  *(int *)(ar4_00 + 0x1c) = ar4 * 0x4c + DAT_8c1fd8f4;
  return 0;
}



/* FUN_8c1fd8fc @ 8c1fd8fc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fd8fc(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int ar7_00;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(_DAT_8c4783dc + 8) != 0) && (ar5 != 0)) {
    iVar3 = ar4 * 0x148;
    iVar1 = *(int *)(iVar3 + -0x73b87c1c);
    ar7_00 = DAT_8c273a54;
    iVar2 = DAT_8c273a64;
    if (((iVar1 == 0) ||
        (((ar7_00 = DAT_8c273a58, iVar2 = DAT_8c273a68, iVar1 == 1 ||
          (ar7_00 = DAT_8c273a5c, iVar2 = DAT_8c273a6c, iVar1 == 2)) ||
         (ar7_00 = DAT_8c273a60, iVar2 = DAT_8c273a70, iVar1 == 3)))) &&
       ((ar7_00 + iVar2 + 1) * 0x200 + 0x20 <= ar6)) {
      (&DAT_8c4783e2)[iVar3] = 1;
      *(short *)(&DAT_8c4783e0 + iVar3) = (short)ar4;
      *(int *)(&DAT_8c4783fc + iVar3) = ar4 * 0x4c + -0x73b831c0;
      (&DAT_8c4783ea)[iVar3] = 0;
      (&DAT_8c4783eb)[iVar3] = 0;
      (&DAT_8c4783ec)[iVar3] = 0;
      *(int *)(&DAT_8c47840c + iVar3) = ar5;
      *(int *)(&DAT_8c478400 + iVar3) = ar5 + 0x20;
      *(int *)(&DAT_8c478404 + iVar3) = ar5 + 0x220;
      *(int *)(&DAT_8c478408 + iVar3) = (ar7_00 + 1) * 0x200 + ar5 + 0x20;
      *(undefined2 *)(&DAT_8c4783ee + iVar3) = 1;
      *(short *)(&DAT_8c4783f0 + iVar3) = (short)ar7_00;
      *(short *)(&DAT_8c4783f2 + iVar3) = (short)iVar2;
      *(undefined2 *)(&DAT_8c4783f4 + iVar3) = 0x20;
      memset(iVar3 + -0x73b87be8,0,0x10,ar7_00);
      memset(iVar3 + -0x73b87bd8,0,0x100,ar7_00);
      memset(*(undefined4 *)(&DAT_8c47840c + iVar3),0x47,0x20,ar7_00);
      memset(*(undefined4 *)(&DAT_8c478400 + iVar3),0x53,0x20,ar7_00);
      memset(*(undefined4 *)(&DAT_8c478404 + iVar3),0x46,0x20,ar7_00);
      memset(*(undefined4 *)(&DAT_8c478408 + iVar3),0x44,0x20,ar7_00);
      *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x30) =
           *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x1c);
      (&DAT_8c4783e8)[iVar3] = 1;
      (&DAT_8c4783e9)[iVar3] = 1;
      return 0;
    }
  }
  return 0xffffff00;
}



/* FUN_8c1fda04 @ 8c1fda04 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fda04(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 in_PR;
  
  ar4_00 = &DAT_8c4783e0;
  ar6_00 = 0xa40;
  ar5_00 = 0;
  memset(&DAT_8c4783e0,0,0xa40,ar7);
  noop_1fd004(ar4_00,ar5_00,ar6_00,ar7,in_PR);
  return 0;
}



/* FUN_8c1fda44 @ 8c1fda44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1fda44(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = PTR_FUN_8c1fdb74;
  iVar5 = 0;
  uVar4 = 1;
  uVar3 = 0;
  do {
    iVar2 = (*(code *)puVar1)(iVar5);
    iVar5 = iVar5 + 1;
    if (iVar2 != 0) {
      uVar3 = uVar3 | uVar4;
    }
    uVar4 = uVar4 << 1;
  } while (iVar5 < 8);
  return uVar3;
}



/* FUN_8c1fda58 @ 8c1fda58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1fda58(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int unaff_r11;
  uint unaff_r12;
  uint unaff_r13;
  int unaff_r14;
  
  puVar1 = PTR_FUN_8c1fdb74;
  do {
    iVar2 = (*(code *)puVar1)(unaff_r14,ar5,ar6,ar7);
    unaff_r14 = unaff_r14 + 1;
    if (iVar2 != 0) {
      unaff_r12 = unaff_r12 | unaff_r13;
    }
    unaff_r13 = unaff_r13 << 1;
  } while (unaff_r14 < unaff_r11);
  return unaff_r12;
}



/* FUN_8c1fda7e @ 8c1fda7e callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fda7e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ar4 * DAT_8c1fdb70 + DAT_8c1fdb78;
  iVar1 = (*(code *)PTR_FUN_8c1fdb7c)(ar4,ar5,ar6,ar7);
  if ((iVar1 != 0) && (*(char *)(iVar2 + 8) != '\0')) {
    return 1;
  }
  return 0;
}



/* FUN_8c1fdab0 @ 8c1fdab0 callers=0 callees=2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fdab0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar6_00;
  undefined4 ar7_00;
  int iVar3;
  
  iVar3 = ar4 * 0x148;
  if (*(int *)(_DAT_8c4783dc + 8) == 1) {
    uVar1 = FUN_8c1fdc80(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  if ((&DAT_8c4783e2)[iVar3] != '\0') {
    *(undefined4 *)(iVar3 + -0x73b87bf0) = 1;
    *(undefined4 *)(iVar3 + -0x73b87bec) =
         *(undefined4 *)(&DAT_8c273a78 + *(int *)(iVar3 + -0x73b87c1c) * 0x50);
    ar6_00 = *(int *)(iVar3 + -0x73b87bf0);
    ar7_00 = *(undefined4 *)(iVar3 + -0x73b87bec);
    *(int *)(iVar3 + -0x73b87bf0) = ar6_00 + 1;
    FUN_8c1fcdc2(ar4,*(undefined4 *)(ar4 * 0x80 + -0x73b8a038),ar6_00,ar7_00);
    uVar1 = *(undefined4 *)(&DAT_8c4783fc + iVar3);
    iVar2 = FUN_8c1fba98(ar4,uVar1,ar6_00,ar7_00);
    if (-1 < iVar2) {
      iVar2 = FUN_8c200cf4(&DAT_8c4783e0 + iVar3,uVar1,ar6_00,ar7_00);
      if (iVar2 < 0) {
        return 0xffffff83;
      }
      *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x30) =
           *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x1c);
      (&DAT_8c4783e9)[iVar3] = 1;
      (&DAT_8c4783e8)[iVar3] = 1;
      (&DAT_8c4783ea)[iVar3] = 0;
      (&DAT_8c4783eb)[iVar3] = 0;
      (&DAT_8c4783ec)[iVar3] = 0;
      uVar1 = FUN_8c200a00(ar4,uVar1,ar6_00,ar7_00);
      return uVar1;
    }
    (&DAT_8c4783e9)[iVar3] = 0;
    (&DAT_8c4783e8)[iVar3] = 0;
  }
  return 0xffffff01;
}



/* FUN_8c1fdbaa @ 8c1fdbaa callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fdbaa(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  undefined4 ar7_00;
  int iVar3;
  
  iVar3 = ar4 * 0x148;
  *(int *)(&DAT_8c4783fc + iVar3) = ar4 * 0x4c + -0x73b831c0;
  *(undefined4 *)(iVar3 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar3 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273abc + *(int *)(iVar3 + -0x73b87c1c) * 0x50);
  ar7_00 = *(undefined4 *)(iVar3 + -0x73b87bec);
  ar6_00 = *(int *)(iVar3 + -0x73b87bf0);
  *(int *)(iVar3 + -0x73b87bf0) = ar6_00 + 1;
  FUN_8c1fcdc2(ar4,*(undefined4 *)(ar4 * 0x80 + -0x73b8a038),ar6_00,ar7_00);
  uVar2 = *(undefined4 *)(&DAT_8c4783fc + iVar3);
  iVar1 = FUN_8c1fba98(ar4,uVar2,ar6_00,ar7_00);
  if (iVar1 < 0) {
    (&DAT_8c4783e9)[iVar3] = 0;
    (&DAT_8c4783e8)[iVar3] = 0;
LAB_8c1fdc3a:
    uVar2 = 0xffffff01;
  }
  else {
    iVar1 = FUN_8c200cf4(&DAT_8c4783e0 + iVar3,uVar2,ar6_00,ar7_00);
    if (-1 < iVar1) {
      *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x30) =
           *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x1c);
      iVar1 = FUN_8c1fd1e2(ar4,0,0x8c47e4ec,ar7_00);
      if (iVar1 < 0) goto LAB_8c1fdc3a;
      (&DAT_8c4783e9)[iVar3] = 1;
      (&DAT_8c4783ea)[iVar3] = 0;
      (&DAT_8c4783eb)[iVar3] = 0;
      (&DAT_8c4783ec)[iVar3] = 0;
      iVar1 = *(int *)(iVar3 + -0x73b87c1c);
      if (iVar1 == 0) {
        return 0xf;
      }
      if (iVar1 == 1) {
        return 0x21;
      }
      if (iVar1 == 2) {
        return 0x41;
      }
      if (iVar1 == 3) {
        return 0x7a;
      }
    }
    uVar2 = 0xffffff83;
  }
  return uVar2;
}



/* FUN_8c1fdc80 @ 8c1fdc80 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fdc80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  iVar2 = ar4 * 0x148;
  if ((&DAT_8c4783e2)[iVar2] == '\0') {
    return 0xffffff01;
  }
  *(undefined4 *)(iVar2 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar2 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273a78 + *(int *)(iVar2 + -0x73b87c1c) * 0x50);
  ar6_00 = *(int *)(iVar2 + -0x73b87bf0);
  ar7_00 = *(undefined4 *)(iVar2 + -0x73b87bec);
  *(int *)(iVar2 + -0x73b87bf0) = ar6_00 + 1;
  uVar1 = *(undefined4 *)(ar4 * 0x80 + -0x73b8a038);
  FUN_8c1fcdc2(ar4,uVar1,ar6_00,ar7_00);
  uVar1 = FUN_8c200a00(ar4,uVar1,ar6_00,ar7_00);
  return uVar1;
}



/* FUN_8c1fdd1a @ 8c1fdd1a callers=11 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1fdd1a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = ar4 * DAT_8c1fddbe + DAT_8c1fddd8;
  if (*(char *)(iVar1 + 2) == '\0') {
    return (int)DAT_8c1fddc0;
  }
  *(undefined1 *)(iVar1 + 9) = 0;
  *(undefined1 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 10) = 0;
  *(undefined1 *)(iVar1 + 0xb) = 0;
  *(undefined1 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return 0;
}



/* FUN_8c1fdd44 @ 8c1fdd44 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1fdd44(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 ar5_00;
  int *ar6_00;
  undefined1 *ar6_01;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  undefined1 auStack_18 [8];
  int iStack_10;
  
  iVar3 = (int)DAT_8c1fddbe;
  iVar4 = ar4 * iVar3 + DAT_8c1fddd8;
  if (*(char *)(iVar4 + 2) != '\0') {
    ar5_00 = ar5;
    ar6_00 = ar6;
    iVar2 = (*(code *)PTR_FUN_8c1fdddc)(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,ar5_00,ar6_00,ar7);
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c1fdde0)(ar4,ar5_00,ar6_00,ar7);
      if ((iVar2 != 0) && (*(char *)(ar4 * iVar3 + DAT_8c1fddd8 + 8) != '\0')) {
        iVar3 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1fdde4)(ar4,ar5_00,ar6_00,ar7);
        if (iVar3 < 0) {
          return (int)DAT_8c1fddc2;
        }
        ar6_01 = auStack_38;
        iVar3 = (*(code *)PTR_FUN_8c1fdde8)(ar4,ar5,ar6_01,ar7);
        if (iVar3 < 0) {
          return (int)DAT_8c1fddc4;
        }
        iVar3 = (int)DAT_8c1fdf0a;
        *ar6 = iStack_10 * (*(int *)(*(int *)(iVar4 + 0x1c) + 0x2c) + 1);
        *(short *)(ar6 + 1) = (short)iStack_10;
        *(char *)((int)ar6 + 6) = (char)iStack_34;
        *(undefined1 *)((int)ar6 + 7) = uStack_2e;
        *(undefined2 *)(ar6 + 2) = uStack_30;
        puVar1 = PTR_FUN_8c1fdf14;
        *(bool *)((int)ar6 + 6) = iStack_34 == iVar3;
        (*(code *)puVar1)((int)ar6 + 10,auStack_18,ar6_01,ar7);
        return 0;
      }
    }
  }
  return (int)DAT_8c1fddc0;
}



/* FUN_8c1fde30 @ 8c1fde30 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fde30(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7,int s0)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined *ar5_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *a7;
  int iVar8;
  int iVar9;
  undefined1 auStack_28 [12];
  
  iVar9 = ar4 * 0x148;
  if ((&DAT_8c4783e2)[iVar9] != '\0') {
    ar5_00 = &DAT_8c273a74;
    uVar7 = ar6;
    uVar3 = ar7;
    if (s0 == 0) {
      *(undefined4 *)(iVar9 + -0x73b87bf0) = 1;
      uVar6 = libgcc_divide_helper_010468
                        (*(undefined4 *)(&DAT_8c273a80 + *(int *)(iVar9 + -0x73b87c1c) * 0x50),10);
      *(undefined4 *)(iVar9 + -0x73b87bec) = uVar6;
    }
    else {
      *(undefined4 *)(iVar9 + -0x73b87bf0) = 1;
      iVar4 = *(int *)(iVar9 + -0x73b87c1c) * 0x50;
      ar5_00 = &DAT_8c273a74 + iVar4;
      *(undefined4 *)(iVar9 + -0x73b87bec) = *(undefined4 *)(&DAT_8c273a80 + iVar4);
    }
    iVar4 = FUN_8c1fd550(ar4,ar5_00,uVar7,uVar3);
    if ((iVar4 != 0) && ((&DAT_8c4783e8)[iVar9] != '\0')) {
      iVar8 = ar4 * 0x200 + -0x73b82d14;
      memset(*(undefined4 *)(&DAT_8c478400 + iVar9),0,0x200,uVar3);
      uVar7 = *(undefined4 *)(&DAT_8c478400 + iVar9);
      iVar4 = FUN_8c1fbc44(ar4,*(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 8),uVar7,uVar3);
      if (iVar4 < 0) {
        if (iVar4 == -0xc0) {
          return 0xffffff81;
        }
      }
      else {
        uVar6 = *(undefined4 *)(&DAT_8c4783fc + iVar9);
        iVar4 = FUN_8c1fba98(ar4,uVar6,uVar7,uVar3);
        if (-1 < iVar4) {
          iVar4 = FUN_8c200cf4(&DAT_8c4783e0 + iVar9,uVar6,uVar7,uVar3);
          if (iVar4 < 0) {
            return 0xffffff83;
          }
          *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x30) =
               *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x1c);
          memset(*(undefined4 *)(&DAT_8c478400 + iVar9),0,0x200,uVar3);
          memset(*(int *)(&DAT_8c478400 + iVar9) + 0x10,0x20,0x20,uVar3);
          for (iVar4 = 0; iVar4 < 0x20; iVar4 = iVar4 + 1) {
            uVar1 = *ar5;
            ar5 = ar5 + 1;
            *(undefined1 *)(*(int *)(&DAT_8c478400 + iVar9) + iVar4 + 0x10) = uVar1;
          }
          FUN_8c200bfc(auStack_28,ar7,0x20,uVar3);
          puVar5 = (undefined1 *)(*(int *)(&DAT_8c478400 + iVar9) + 0x30);
          a7 = auStack_28;
          for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
            uVar1 = *a7;
            a7 = a7 + 1;
            *puVar5 = uVar1;
            puVar5 = puVar5 + 1;
          }
          iVar4 = *(int *)(&DAT_8c4783fc + iVar9);
          uVar7 = *(undefined4 *)(iVar4 + 0xc);
          uVar3 = *(undefined4 *)(iVar4 + 0x14);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x42,*(undefined4 *)(iVar4 + 4),a7);
          *(char *)(*(int *)(&DAT_8c478400 + iVar9) + 0x4e) = (char)ar6;
          *(undefined1 *)(*(int *)(&DAT_8c478400 + iVar9) + 0x4f) = 0;
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x40,
                     **(undefined4 **)(&DAT_8c4783fc + iVar9),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))(*(undefined4 *)(&DAT_8c478400 + iVar9),0x4a,uVar3,a7);
          (**(code **)(_DAT_8c4783dc + 0x10))(*(undefined4 *)(&DAT_8c478400 + iVar9),0x46,uVar7,a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x4c,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x18),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x48,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x10),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x50,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x1c),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x52,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x20),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x54,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x34),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x56,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x38),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x44,
                     **(undefined4 **)(&DAT_8c4783fc + iVar9),a7);
          memset(iVar8,0,0x200,a7);
          iVar4 = 0;
          while( true ) {
            if (**(int **)(&DAT_8c4783fc + iVar9) <= iVar4) {
              uVar7 = 0;
              iVar4 = *(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x18) << 9;
              memset(*(undefined4 *)(&DAT_8c478408 + iVar9),0,iVar4,a7);
              FUN_8c200226(ar4,uVar7,iVar4,a7);
              FUN_8c20099e(ar4,*(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 8),0xfffa,a7);
              for (iVar4 = 0; iVar4 < *(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x10);
                  iVar4 = iVar4 + 1) {
                FUN_8c20099e(ar4,*(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 0xc) + iVar4,0xfffa,a7);
              }
              uVar7 = 0xfffa;
              iVar4 = *(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 8);
              FUN_8c20099e(ar4,iVar4,0xfffa,a7);
              for (iVar8 = 0; iVar8 < *(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x10);
                  iVar8 = iVar8 + 1) {
                uVar7 = 0xfffa;
                iVar4 = *(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 0xc) + iVar8;
                FUN_8c20099e(ar4,iVar4,0xfffa,a7);
              }
              FUN_8c2007f0(ar4,iVar4,uVar7,a7);
              uVar7 = 0x55;
              uVar3 = 0x10;
              memset(*(undefined4 *)(&DAT_8c478400 + iVar9),0x55,0x10,a7);
              FUN_8c20065a(ar4,uVar7,uVar3,a7);
              uVar7 = 0;
              uVar3 = 0x10;
              memset(*(undefined4 *)(&DAT_8c478400 + iVar9),0,0x10,a7);
              (&DAT_8c4783eb)[iVar9] = 0;
              (&DAT_8c4783ec)[iVar9] = 0;
              (&DAT_8c4783ea)[iVar9] = 0;
              uVar7 = FUN_8c200a00(ar4,uVar7,uVar3,a7);
              return uVar7;
            }
            if (s0 == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = FUN_8c1fbc44(ar4,iVar4,iVar8,a7);
            }
            if (iVar2 == -0xff) break;
            if (iVar2 == -0xc0) {
              uVar7 = 0xffff;
            }
            else {
              uVar7 = 0xfffc;
            }
            FUN_8c20099e(ar4,iVar4,uVar7,a7);
            iVar4 = iVar4 + 1;
          }
        }
      }
    }
  }
  return 0xffffff01;
}



/* FUN_8c1fe15a @ 8c1fe15a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1fe15a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ar4 * DAT_8c1fe1c0 + DAT_8c1fe1e0;
  iVar1 = *(int *)(iVar3 + 0x1c);
  iVar2 = *(int *)(iVar1 + 8) - *(int *)(iVar1 + 0x10);
  iVar1 = FUN_8c1fe1e4(ar4,(int)(short)ar5,iVar2 - *(int *)(iVar1 + 0x18),iVar2 + -1);
  if ((iVar1 < 1) &&
     (iVar2 = *(int *)(iVar3 + 0x1c), iVar1 = *(int *)(iVar2 + 0x1c),
     iVar1 = FUN_8c1fe1e4(ar4,(int)(short)ar5,iVar1,iVar1 + *(int *)(iVar2 + 0x20) + -1), iVar1 < 1)
     ) {
    iVar1 = -1;
  }
  return iVar1;
}



/* FUN_8c1fe1e4 @ 8c1fe1e4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fe1e4(int ar4,undefined4 ar5,int ar6,int ar7)

{
  int *piVar1;
  uint uVar2;
  int a6;
  int a7;
  int iVar3;
  
  piVar1 = DAT_8c1fe2cc;
  iVar3 = ar4 * DAT_8c1fe2c0 + DAT_8c1fe2c8;
  a6 = ar6;
  a7 = ar7;
  while( true ) {
    if (ar7 < ar6) {
      return 0xffffffff;
    }
    uVar2 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(iVar3 + 0x24),ar7 << 1,a6,a7);
    if ((uVar2 & 0xffff) == (uint)(ushort)ar5) break;
    ar7 = ar7 + -1;
  }
  return ar7;
}



/* FUN_8c1fe236 @ 8c1fe236 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

int FUN_8c1fe236(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int ar5_00;
  undefined1 *puVar5;
  undefined1 *ar6_00;
  int iVar6;
  int iVar7;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [4];
  
  iVar6 = (int)DAT_8c1fe2c0;
  iVar7 = ar4 * iVar6 + DAT_8c1fe2c8;
  if (*(char *)(iVar7 + 2) != '\0') {
    ar5_00 = ar5;
    iVar2 = (*(code *)PTR_FUN_8c1fe2d0)(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,ar5_00,ar6,ar7);
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c1fe2d4)(ar4,ar5_00,ar6,ar7);
      if ((iVar2 != 0) && (*(char *)(ar4 * iVar6 + DAT_8c1fe2c8 + 8) != '\0')) {
        iVar6 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1fe2d8)(ar4,ar5_00,ar6,ar7);
        if (iVar6 < 0) {
          return (int)DAT_8c1fe2c4;
        }
        for (iVar6 = 0; iVar6 < 0x20; iVar6 = iVar6 + 1) {
          *(undefined1 *)(ar5 + iVar6) = *(undefined1 *)(*(int *)(iVar7 + 0x20) + iVar6 + 0x10);
        }
        puVar5 = (undefined1 *)(*(int *)(iVar7 + 0x20) + 0x30);
        ar6_00 = auStack_14;
        for (puVar4 = auStack_1c; puVar4 < ar6_00; puVar4 = puVar4 + 1) {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar4 = uVar1;
        }
        (*(code *)PTR_FUN_8c1fe3e4)(ar5 + 0x30,auStack_1c,ar6_00,ar7);
        *(short *)(ar5 + 0x20) = (short)**(undefined4 **)(iVar7 + 0x1c) + 1;
        *(short *)(ar5 + 0x22) = (short)*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 0x30);
        uVar3 = FUN_8c1fe350(ar4,0,ar6_00,ar7);
        *(short *)(ar5 + 0x26) = (short)uVar3;
        *(undefined2 *)(ar5 + 0x24) = *(undefined2 *)(ar5 + 0x26);
        *(short *)(ar5 + 0x28) = (short)*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 0x38);
        uVar3 = FUN_8c1fe350(ar4,1,ar6_00,ar7);
        *(short *)(ar5 + 0x2a) = (short)uVar3;
        *(short *)(ar5 + 0x2c) = (short)*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 0x2c) + 1;
        *(ushort *)(ar5 + 0x2e) = (ushort)*(byte *)(*(int *)(iVar7 + 0x20) + 0x4e);
        return 0;
      }
    }
  }
  return (int)DAT_8c1fe2c2;
}



/* FUN_8c1fe350 @ 8c1fe350 callers=2 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fe350(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = ar4 * 0x148;
  if ((&DAT_8c4783e2)[iVar5] != '\0') {
    iVar2 = ar5;
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,iVar2,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,iVar2,ar6,ar7);
      if ((iVar1 != 0) && ((&DAT_8c4783e8)[iVar5] != '\0')) {
        iVar2 = thunk_FUN_8c1ffcc2(ar4,iVar2,ar6,ar7);
        if (iVar2 < 0) {
          return 0xffffff03;
        }
        iVar2 = 0;
        if (ar5 == 1) {
          iVar2 = 0;
          while( true ) {
            if (*(int *)(*(int *)(&DAT_8c4783fc + iVar5) + 0x38) <= iVar2) {
              return iVar2;
            }
            uVar3 = FUN_8c2009d0(ar4,iVar2,ar6,ar7);
            if ((uVar3 & 0xffff) != 0xfffc) break;
            iVar2 = iVar2 + 1;
          }
          return iVar2;
        }
        if (DAT_8c26d208 != 0) {
          for (iVar1 = 0; iVar1 < *(int *)(*(int *)(&DAT_8c4783fc + iVar5) + 0x30);
              iVar1 = iVar1 + 1) {
            uVar3 = FUN_8c2009d0(ar4,iVar1,ar6,ar7);
            if (((uVar3 & 0xffff) == 0xfffc) &&
               (iVar4 = FUN_8c20093a(ar4,iVar1,ar6,ar7), -1 < iVar4)) {
              iVar2 = iVar2 + 1;
            }
          }
          return iVar2;
        }
        iVar1 = 0;
        while (iVar1 < *(int *)(*(int *)(&DAT_8c4783fc + iVar5) + 0x30)) {
          uVar3 = FUN_8c2009d0(ar4,iVar1,ar6,ar7);
          iVar1 = iVar1 + 1;
          if ((uVar3 & 0xffff) == 0xfffc) {
            iVar2 = iVar2 + 1;
          }
        }
        return iVar2;
      }
    }
  }
  return 0xffffff01;
}



/* FUN_8c1fe466 @ 8c1fe466 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1fe466(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)DAT_8c1fe4d0;
  iVar6 = ar4 * iVar5 + DAT_8c1fe4e4;
  if (*(char *)(iVar6 + 2) != '\0') {
    iVar2 = (*(code *)PTR_FUN_8c1fe4e8)(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,ar5,ar6,ar7);
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c1fe4ec)(ar4,ar5,ar6,ar7);
      if ((iVar2 != 0) && (*(char *)(ar4 * iVar5 + DAT_8c1fe4e4 + 8) != '\0')) {
        iVar5 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1fe4f0)(ar4,ar5,ar6,ar7);
        uVar1 = DAT_8c1fe4f4;
        if (iVar5 < 0) {
          return (int)DAT_8c1fe4d4;
        }
        iVar5 = 0;
        iVar2 = 0;
        while (iVar4 = *(int *)(iVar6 + 0x1c),
              iVar4 = *(int *)(iVar4 + 0x10) * (*(int *)(iVar4 + 0x2c) + 1),
              iVar2 < (int)(iVar4 + (uint)(iVar4 < 0)) >> 1) {
          uVar3 = (*(code *)PTR_FUN_8c1fe5d4)(ar4,iVar2,ar6,ar7);
          iVar2 = iVar2 + 1;
          if ((uVar3 & 0xffff) == uVar1) {
            iVar5 = iVar5 + 1;
          }
        }
        return iVar5;
      }
    }
  }
  return (int)DAT_8c1fe4d2;
}



/* FUN_8c1fe534 @ 8c1fe534 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1fe534(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *ar6_00;
  undefined1 *ar6_01;
  undefined1 auStack_40 [8];
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined4 uStack_34;
  undefined4 uStack_18;
  
  iVar1 = DAT_8c1fe5d8;
  *ar6 = 0;
  if (*(char *)(iVar1 + ar4 * DAT_8c1fe5ca) != '\0') {
    uVar3 = ar5;
    ar6_00 = ar6;
    iVar1 = (*(code *)PTR_FUN_8c1fe5dc)(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,uVar3,ar6_00,ar7);
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c1fe5e0)(ar4,uVar3,ar6_00,ar7);
      if ((iVar1 != 0) && (*(char *)(DAT_8c1fe5e4 + ar4 * DAT_8c1fe5ca) != '\0')) {
        iVar1 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1fe5e8)(ar4,uVar3,ar6_00,ar7);
        if (iVar1 < 0) {
          return (int)DAT_8c1fe5ce;
        }
        iVar1 = (*(code *)PTR_ret_const_0_200aec_8c1fe5ec)(ar4,ar5,ar6_00,ar7);
        if (-1 < iVar1) {
          uVar3 = ar5;
          iVar1 = (*(code *)PTR_FUN_8c1fe5f0)(ar4,ar5,ar6_00,ar7);
          if (iVar1 < 0) {
            return (int)DAT_8c1fe5d0;
          }
          iVar1 = (*(code *)PTR_FUN_8c1fe5f4)(ar4,uVar3,ar6_00,ar7);
          if (iVar1 != 0) {
            ar6_01 = auStack_40;
            iVar2 = (*(code *)PTR_FUN_8c1fe6ec)(ar4,ar5,ar6_01,ar7);
            *DAT_8c1fe6f0 = iVar2;
            if (iVar2 < 0) {
              (*(code *)PTR_FUN_8c1fe6f4)(iVar1,ar5,ar6_01,ar7);
              return (int)DAT_8c1fe6e2;
            }
            *(undefined4 *)(iVar1 + 4) = 0;
            *(undefined4 *)(iVar1 + 0x34) = uStack_18;
            *(undefined4 *)(iVar1 + 0x38) = uStack_34;
            *(undefined4 *)(iVar1 + 0x40) = uStack_34;
            *(int *)(iVar1 + 0x28) = ar4;
            *(undefined2 *)(iVar1 + 2) = uStack_38;
            *(undefined1 *)(iVar1 + 1) = uStack_36;
            *ar6 = iVar1;
            return 0;
          }
        }
        return (int)DAT_8c1fe5d2;
      }
    }
  }
  return (int)DAT_8c1fe5cc;
}



/* FUN_8c1fe646 @ 8c1fe646 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1fe646(int ar4,char *ar5,undefined4 ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 *ar6_00;
  int *ar7_00;
  undefined1 auStack_44 [48];
  
  iVar4 = (int)DAT_8c1fe6e4;
  iVar5 = ar4 * iVar4 + DAT_8c1fe6f8;
  *ar7 = 0;
  if (*(char *)(iVar5 + 2) != '\0') {
    pcVar6 = ar5;
    uVar7 = ar6;
    ar7_00 = ar7;
    iVar2 = (*(code *)PTR_FUN_8c1fe6fc)(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,pcVar6,uVar7,ar7_00);
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c1fe700)(ar4,pcVar6,uVar7,ar7_00);
      if ((iVar2 != 0) && (*(char *)(ar4 * iVar4 + DAT_8c1fe6f8 + 8) != '\0')) {
        iVar4 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1fe704)(ar4,pcVar6,uVar7,ar7_00);
        if (iVar4 < 0) {
          return (int)DAT_8c1fe6e8;
        }
        if ((*(int *)(*(int *)(iVar5 + 0x1c) + 0x38) != 0) &&
           (iVar4 = (*(code *)PTR_ret_const_0_200aec_8c1fe708)(ar4,ar5,uVar7,ar7_00), -1 < iVar4)) {
          ar6_00 = auStack_44;
          iVar4 = (*(code *)PTR_FUN_8c1fe6ec)(ar4,ar5,ar6_00,ar7_00);
          if (-1 < iVar4) {
            return (int)DAT_8c1fe6ea;
          }
          iVar4 = (*(code *)PTR_FUN_8c1fe810)(ar4,auStack_44,ar6_00,ar7_00);
          if (-1 < iVar4) {
            return (int)DAT_8c1fe804;
          }
          uVar7 = 0;
          uVar3 = (*(code *)PTR_FUN_8c1fe814)(ar4,0,ar6_00,ar7_00);
          if (((uVar3 & 0xffff) == DAT_8c1fe818) &&
             (iVar4 = (*(code *)PTR_FUN_8c1fe81c)(ar4,uVar7,ar6_00,ar7_00), -1 < iVar4)) {
            iVar5 = iVar4;
            (*(code *)PTR_FUN_8c1fe820)(ar4,iVar4,ar6_00,ar7_00);
            iVar5 = (*(code *)PTR_FUN_8c1fe824)(ar4,iVar5,ar6_00,ar7_00);
            uVar7 = DAT_8c1fe828;
            if (iVar5 == 0) {
              return (int)DAT_8c1fe808;
            }
            *(undefined4 *)(iVar5 + 8) = 1;
            *(undefined4 *)(iVar5 + 4) = 2;
            *(int *)(iVar5 + 0x2c) = iVar4;
            *(undefined4 *)(iVar5 + 0x38) = uVar7;
            *(undefined4 *)(iVar5 + 0x30) = 0;
            *(int *)(iVar5 + 0x28) = ar4;
            *(undefined2 *)(iVar5 + 2) = 1;
            *(undefined1 *)(iVar5 + 1) = 0;
            pcVar6 = (char *)(iVar5 + 0x10);
            for (; puVar1 = PTR_FUN_8c1fe82c, *ar5 != '\0'; ar5 = ar5 + 1) {
              *pcVar6 = *ar5;
              pcVar6 = pcVar6 + 1;
            }
            *pcVar6 = '\0';
            (*(code *)puVar1)(iVar5 + 0x20,ar6,ar6_00,ar7_00);
            *ar7 = iVar5;
            return 0;
          }
        }
        return (int)DAT_8c1fe806;
      }
    }
  }
  return (int)DAT_8c1fe6e6;
}



/* FUN_8c1fe7aa @ 8c1fe7aa callers=1 callees=2 */

/* WARNING: Unknown calling convention */

int FUN_8c1fe7aa(int ar4,char *ar5,undefined4 ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 *ar6_00;
  int *ar7_00;
  undefined1 auStack_44 [48];
  
  iVar2 = DAT_8c1fe830;
  *ar7 = 0;
  if (*(char *)(iVar2 + ar4 * DAT_8c1fe80a) != '\0') {
    pcVar4 = ar5;
    uVar5 = ar6;
    ar7_00 = ar7;
    iVar2 = (*(code *)PTR_FUN_8c1fe834)(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,pcVar4,uVar5,ar7_00);
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c1fe838)(ar4,pcVar4,uVar5,ar7_00);
      if ((iVar2 != 0) && (*(char *)(DAT_8c1fe83c + ar4 * DAT_8c1fe80a) != '\0')) {
        iVar2 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1fe93c)(ar4,pcVar4,uVar5,ar7_00);
        if (iVar2 < 0) {
          return (int)DAT_8c1fe930;
        }
        iVar2 = (*(code *)PTR_ret_const_0_200aec_8c1fe940)(ar4,ar5,uVar5,ar7_00);
        if (-1 < iVar2) {
          ar6_00 = auStack_44;
          pcVar4 = ar5;
          iVar2 = (*(code *)PTR_FUN_8c1fe944)(ar4,ar5,ar6_00,ar7_00);
          if ((-1 < iVar2) && (pcVar4 = ar5, iVar2 = FUN_8c1ff478(ar4,ar5,ar6_00,ar7_00), iVar2 < 0)
             ) {
            return iVar2;
          }
          iVar2 = (*(code *)PTR_FUN_8c1fe948)(ar4,pcVar4,ar6_00,ar7_00);
          if (-1 < iVar2) {
            iVar3 = iVar2;
            (*(code *)PTR_FUN_8c1fe94c)(ar4,iVar2,ar6_00,ar7_00);
            iVar3 = (*(code *)PTR_FUN_8c1fe950)(ar4,iVar3,ar6_00,ar7_00);
            uVar5 = DAT_8c1fe954;
            if (iVar3 == 0) {
              return (int)DAT_8c1fe934;
            }
            *(undefined4 *)(iVar3 + 8) = 0;
            *(undefined4 *)(iVar3 + 4) = 1;
            *(int *)(iVar3 + 0x2c) = iVar2;
            *(undefined4 *)(iVar3 + 0x38) = uVar5;
            *(undefined4 *)(iVar3 + 0x30) = 0;
            *(int *)(iVar3 + 0x28) = ar4;
            *(undefined2 *)(iVar3 + 2) = 0;
            *(undefined1 *)(iVar3 + 1) = 0;
            pcVar4 = (char *)(iVar3 + 0x10);
            for (; puVar1 = PTR_FUN_8c1fe958, *ar5 != '\0'; ar5 = ar5 + 1) {
              *pcVar4 = *ar5;
              pcVar4 = pcVar4 + 1;
            }
            *pcVar4 = '\0';
            (*(code *)puVar1)(iVar3 + 0x20,ar6,ar6_00,ar7_00);
            *ar7 = iVar3;
            return 0;
          }
        }
        return (int)DAT_8c1fe932;
      }
    }
  }
  return (int)DAT_8c1fe80c;
}



/* FUN_8c1fe8f2 @ 8c1fe8f2 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1fe8f2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar1 = (undefined2)ar5;
  uVar3 = (undefined1)ar6;
  if (ar4 == 0) {
    return (int)DAT_8c1fe936;
  }
  if (*(char *)(DAT_8c1fe95c + *(int *)(ar4 + 0x28) * (int)DAT_8c1fe938) != '\0') {
    iVar2 = (*(code *)PTR_FUN_8c1fe960)(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c1fea68)(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
      if ((iVar2 != 0) &&
         (*(char *)(DAT_8c1fea6c + *(int *)(ar4 + 0x28) * (int)DAT_8c1fea5e) != '\0')) {
        iVar2 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1fea70)(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
        if (iVar2 < 0) {
          return (int)DAT_8c1fea62;
        }
        *(undefined2 *)(ar4 + 2) = uVar1;
        *(undefined1 *)(ar4 + 1) = uVar3;
        return 0;
      }
    }
  }
  return (int)DAT_8c1fea60;
}



/* FUN_8c1fe9ae @ 8c1fe9ae callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c1fe9ae(int ar4,int ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *a4;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  if (ar4 == 0) {
    return 0xffffff00;
  }
  iVar6 = 0;
  iVar7 = ar5;
  if ((((&DAT_8c4783e2)[*(int *)(ar4 + 0x28) * 0x148] != '\0') &&
      (iVar1 = FUN_8c1fd550(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7), iVar1 != 0)) &&
     ((&DAT_8c4783e8)[*(int *)(ar4 + 0x28) * 0x148] != '\0')) {
    iVar1 = FUN_8c1fd510(*(undefined4 *)(ar4 + 0x28),iVar7,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(*(undefined4 *)(ar4 + 0x28),iVar7,ar6,ar7);
    }
    else {
      iVar1 = thunk_FUN_8c1ffcc2(*(undefined4 *)(ar4 + 0x28),iVar7,ar6,ar7);
      if (-1 < iVar1) {
        iVar1 = *(int *)(ar4 + 0x28);
        if (*(int *)(ar4 + 4) != 0) {
          if (ar5 != 0) {
            iVar7 = iVar1 * 0x148;
            *(undefined4 *)(iVar7 + -0x73b87bf0) = 1;
            *(undefined4 *)(iVar7 + -0x73b87bec) =
                 *(undefined4 *)(&DAT_8c273a84 + *(int *)(iVar7 + -0x73b87c1c) * 0x50);
          }
          a4 = (undefined1 *)FUN_8c200a84(iVar1,*(undefined4 *)(ar4 + 0x2c),ar6,ar7);
          if (*(int *)(ar4 + 8) == 1) {
            uVar2 = 0xcc;
          }
          else {
            uVar2 = 0x33;
          }
          *a4 = uVar2;
          a4[1] = *(undefined1 *)(ar4 + 1);
          (**(code **)(_DAT_8c4783dc + 0x10))(a4,2,*(undefined4 *)(ar4 + 0x38),ar7);
          (**(code **)(_DAT_8c4783dc + 0x10))(a4,0x18,*(undefined4 *)(ar4 + 0x30),ar7);
          (**(code **)(_DAT_8c4783dc + 0x10))(a4,0x1a,(int)*(short *)(ar4 + 2),ar7);
          puVar4 = (undefined1 *)(ar4 + 0x10);
          puVar5 = a4 + 0x10;
          for (puVar3 = a4 + 4; puVar3 < puVar5; puVar3 = puVar3 + 1) {
            uVar2 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar3 = uVar2;
          }
          puVar3 = (undefined1 *)(ar4 + 0x20);
          ar6 = a4 + 0x18;
          for (; puVar5 < ar6; puVar5 = puVar5 + 1) {
            uVar2 = *puVar3;
            puVar3 = puVar3 + 1;
            *puVar5 = uVar2;
          }
          iVar7 = *(int *)(ar4 + 0x2c);
          FUN_8c200a9c(iVar1,iVar7,ar6,ar7);
          iVar6 = FUN_8c200346(iVar1,iVar7,ar6,ar7);
          if (iVar6 < 0) goto LAB_8c1feafe;
          FUN_8c2007f0(iVar1,iVar7,ar6,ar7);
        }
        iVar6 = 0;
      }
    }
  }
LAB_8c1feafe:
  FUN_8c200ae4(ar4,iVar7,ar6,ar7);
  return iVar6;
}



/* FUN_8c1feb16 @ 8c1feb16 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1feb16(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  if (ar4 == 0) {
    iVar1 = (int)DAT_8c1feb6a;
  }
  else if (*(char *)(*(int *)(ar4 + 0x28) * (int)DAT_8c1feb6c + DAT_8c1feb88 + 2) == '\0') {
    iVar1 = (int)DAT_8c1feb6e;
  }
  else {
    pcVar4 = (code *)PTR_FUN_8c1feb8c;
    if ((*(int *)(ar4 + 4) == 1) || (pcVar4 = (code *)PTR_FUN_8c1feb90, *(int *)(ar4 + 4) == 2)) {
      iVar3 = (int)DAT_8c1fec76;
      iVar1 = DAT_8c1feb88 + *(int *)(ar4 + 0x28) * (int)DAT_8c1feb6c;
      *(undefined4 *)(iVar1 + 0x30) = 1;
      *(int *)(iVar1 + 0x34) = ar6;
      iVar1 = 0;
      if (0 < ar6) {
        do {
          iVar2 = (*pcVar4)(ar4,ar5);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
          ar5 = ar5 + iVar3;
        } while (iVar1 < ar6);
      }
      iVar1 = 0;
    }
    else {
      iVar1 = (int)DAT_8c1feb70;
    }
  }
  return iVar1;
}



/* FUN_8c1feb1e @ 8c1feb1e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1feb1e(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int unaff_r14;
  char in_T;
  int a6;
  
  if (in_T == '\0') {
    if (*(char *)(*(int *)(unaff_r14 + 0x28) * (int)DAT_8c1feb6c + DAT_8c1feb88 + 2) == '\0') {
      iVar1 = (int)DAT_8c1feb6e;
    }
    else {
      pcVar4 = (code *)PTR_FUN_8c1feb8c;
      if ((*(int *)(unaff_r14 + 4) == 1) ||
         (pcVar4 = (code *)PTR_FUN_8c1feb90, *(int *)(unaff_r14 + 4) == 2)) {
        iVar3 = (int)DAT_8c1fec76;
        a6 = *(int *)(unaff_r14 + 0x28) * (int)DAT_8c1feb6c;
        iVar1 = DAT_8c1feb88 + a6;
        *(undefined4 *)(iVar1 + 0x30) = 1;
        *(int *)(iVar1 + 0x34) = ar6;
        iVar1 = 0;
        if (0 < ar6) {
          do {
            iVar2 = (*pcVar4)(unaff_r14,ar5,a6,ar7);
            if (iVar2 < 0) {
              return iVar2;
            }
            iVar1 = iVar1 + 1;
            ar5 = ar5 + iVar3;
          } while (iVar1 < ar6);
        }
        iVar1 = 0;
      }
      else {
        iVar1 = (int)DAT_8c1feb70;
      }
    }
  }
  else {
    iVar1 = (int)DAT_8c1feb6a;
  }
  return iVar1;
}



/* FUN_8c1febd6 @ 8c1febd6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1febd6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = ar5;
  iVar3 = (*(code *)PTR_FUN_8c1fec80)(*(undefined4 *)(ar4 + 0x28),0);
  if (iVar3 == 0) {
    FUN_8c1fdd1a(*(undefined4 *)(ar4 + 0x28),uVar5,ar6,ar7);
  }
  else {
    iVar3 = (*(code *)PTR_FUN_8c1fec84)(*(undefined4 *)(ar4 + 0x28));
    if ((iVar3 != 0) && (*(char *)(DAT_8c1fec88 + *(int *)(ar4 + 0x28) * (int)DAT_8c1fec78) != '\0')
       ) {
      iVar3 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1fec8c)(*(undefined4 *)(ar4 + 0x28));
      if (iVar3 < 0) {
        return (int)DAT_8c1fec7c;
      }
      uVar5 = *(undefined4 *)(ar4 + 0x28);
      iVar3 = (*(code *)PTR_FUN_8c1fec90)(uVar5);
      puVar1 = PTR_FUN_8c1fec94;
      if (-1 < iVar3) {
        iVar4 = (*(code *)PTR_FUN_8c1fec94)(uVar5,iVar3,ar5);
        iVar2 = DAT_8c1fec98;
        if (iVar4 < 0) {
          if (iVar4 == DAT_8c1fec7a) {
            return iVar4;
          }
          do {
            (*(code *)PTR_FUN_8c1fec9c)(uVar5,iVar3,iVar2);
            iVar3 = (*(code *)PTR_FUN_8c1feca4)(uVar5,DAT_8c1feca0);
            if (iVar3 < 0) goto LAB_8c1fec70;
            iVar4 = (*(code *)puVar1)(uVar5,iVar3,ar5);
          } while (iVar4 != 0);
        }
        (*(code *)PTR_FUN_8c1fed98)(uVar5,iVar3,DAT_8c1fed94);
        if (*(int *)(ar4 + 0x38) == iVar2) {
          *(int *)(ar4 + 0x38) = (int)(short)iVar3;
        }
        else {
          (*(code *)PTR_FUN_8c1fed98)(uVar5,*(undefined4 *)(ar4 + 0x3c),iVar3);
        }
        *(int *)(ar4 + 0x3c) = (int)(short)iVar3;
        *(int *)(ar4 + 0x30) = *(int *)(ar4 + 0x30) + 1;
        return 0;
      }
LAB_8c1fec70:
      return (int)DAT_8c1fec7e;
    }
  }
  return (int)DAT_8c1fec7a;
}



/* FUN_8c1febe6 @ 8c1febe6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1febe6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int ar6_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_r9;
  undefined4 ar4_00;
  int unaff_r13;
  
  iVar2 = (*(code *)PTR_FUN_8c1fec80)(*(undefined4 *)(unaff_r13 + 0x28),ar5,ar6,ar7);
  if (iVar2 == 0) {
    FUN_8c1fdd1a(*(undefined4 *)(unaff_r13 + 0x28),ar5,ar6,ar7);
  }
  else {
    iVar2 = (*(code *)PTR_FUN_8c1fec84)(*(undefined4 *)(unaff_r13 + 0x28),ar5,ar6,ar7);
    if ((iVar2 != 0) &&
       (*(char *)(DAT_8c1fec88 + *(int *)(unaff_r13 + 0x28) * (int)DAT_8c1fec78) != '\0')) {
      iVar2 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1fec8c)
                        (*(undefined4 *)(unaff_r13 + 0x28),ar5,ar6,ar7);
      if (iVar2 < 0) {
        return (int)DAT_8c1fec7c;
      }
      ar4_00 = *(undefined4 *)(unaff_r13 + 0x28);
      iVar2 = (*(code *)PTR_FUN_8c1fec90)(ar4_00,ar5,ar6,ar7);
      puVar1 = PTR_FUN_8c1fec94;
      if (-1 < iVar2) {
        iVar3 = (*(code *)PTR_FUN_8c1fec94)(ar4_00,iVar2,unaff_r9,ar7);
        ar6_00 = DAT_8c1fec98;
        if (iVar3 < 0) {
          if (iVar3 == DAT_8c1fec7a) {
            return iVar3;
          }
          do {
            iVar3 = ar6_00;
            (*(code *)PTR_FUN_8c1fec9c)(ar4_00,iVar2,ar6_00,ar7);
            iVar2 = (*(code *)PTR_FUN_8c1feca4)(ar4_00,DAT_8c1feca0,iVar3,ar7);
            if (iVar2 < 0) goto LAB_8c1fec70;
            iVar3 = (*(code *)puVar1)(ar4_00,iVar2,unaff_r9,ar7);
          } while (iVar3 != 0);
        }
        (*(code *)PTR_FUN_8c1fed98)(ar4_00,iVar2,DAT_8c1fed94,ar7);
        if (*(int *)(unaff_r13 + 0x38) == ar6_00) {
          *(int *)(unaff_r13 + 0x38) = (int)(short)iVar2;
        }
        else {
          (*(code *)PTR_FUN_8c1fed98)(ar4_00,*(undefined4 *)(unaff_r13 + 0x3c),iVar2,ar7);
        }
        *(int *)(unaff_r13 + 0x3c) = (int)(short)iVar2;
        *(int *)(unaff_r13 + 0x30) = *(int *)(unaff_r13 + 0x30) + 1;
        return 0;
      }
LAB_8c1fec70:
      return (int)DAT_8c1fec7e;
    }
  }
  return (int)DAT_8c1fec7a;
}



/* FUN_8c1fecf2 @ 8c1fecf2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1fecf2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ar5_00;
  
  iVar3 = *(int *)(ar4 + 0x28) * (int)DAT_8c1fed8c + DAT_8c1fed9c;
  uVar4 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c1feda0)(*(int *)(ar4 + 0x28),ar5,ar6,ar7);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c1feda4)(*(undefined4 *)(ar4 + 0x28),uVar4,ar6,ar7);
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c1feda8)(*(undefined4 *)(ar4 + 0x28),uVar4,ar6,ar7);
    if ((iVar1 != 0) && (*(char *)(DAT_8c1fedac + *(int *)(ar4 + 0x28) * (int)DAT_8c1fed8c) != '\0')
       ) {
      iVar1 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1fedb0)(*(undefined4 *)(ar4 + 0x28),uVar4,ar6,ar7);
      if (iVar1 < 0) {
        return (int)DAT_8c1fed90;
      }
      ar5_00 = *(undefined4 *)(ar4 + 0x30);
      uVar4 = *(undefined4 *)(ar4 + 0x28);
      uVar2 = (*(code *)PTR_FUN_8c1fedb4)(uVar4,ar5_00,ar6,ar7);
      if (((uVar2 & 0xffff) == DAT_8c1fedb8) &&
         (*(int *)(ar4 + 0x30) < *(int *)(*(int *)(iVar3 + 0x1c) + 0x38))) {
        iVar1 = (*(code *)PTR_FUN_8c1fedbc)(uVar4,ar5_00,ar5,ar7);
        if (iVar1 < 0) {
          return iVar1;
        }
        (*(code *)PTR_FUN_8c1feebc)(uVar4,ar5_00,DAT_8c1feeb8,ar7);
        if (*(int *)(ar4 + 0x38) == DAT_8c1feec0) {
          *(int *)(ar4 + 0x38) = (int)(short)ar5_00;
        }
        else {
          (*(code *)PTR_FUN_8c1feebc)(uVar4,*(undefined4 *)(ar4 + 0x3c),ar5_00,ar7);
        }
        *(int *)(ar4 + 0x3c) = (int)(short)ar5_00;
        *(int *)(ar4 + 0x30) = *(int *)(ar4 + 0x30) + 1;
        return 0;
      }
      return (int)DAT_8c1fed92;
    }
  }
  return (int)DAT_8c1fed8e;
}



/* FUN_8c1fedfa @ 8c1fedfa callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1fedfa(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int ar6_00;
  
  if (ar4 == 0) {
    iVar1 = (int)DAT_8c1feeae;
  }
  else if (*(char *)(*(int *)(ar4 + 0x28) * (int)DAT_8c1feeb0 + DAT_8c1feec4 + 2) == '\0') {
    iVar1 = (int)DAT_8c1feeb2;
  }
  else {
    iVar3 = (int)DAT_8c1feeb4;
    ar6_00 = *(int *)(ar4 + 0x28) * (int)DAT_8c1feeb0;
    iVar1 = DAT_8c1feec4 + ar6_00;
    *(undefined4 *)(iVar1 + 0x30) = 1;
    *(int *)(iVar1 + 0x34) = ar6;
    iVar1 = 0;
    if (0 < ar6) {
      do {
        iVar2 = FUN_8c1fee6c(ar4,ar5,ar6_00,ar7);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar1 = iVar1 + 1;
        ar5 = ar5 + iVar3;
      } while (iVar1 < ar6);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* FUN_8c1fee02 @ 8c1fee02 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1fee02(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r14;
  char in_T;
  int a6;
  
  if (in_T == '\0') {
    if (*(char *)(*(int *)(unaff_r14 + 0x28) * (int)DAT_8c1feeb0 + DAT_8c1feec4 + 2) == '\0') {
      iVar1 = (int)DAT_8c1feeb2;
    }
    else {
      iVar3 = (int)DAT_8c1feeb4;
      a6 = *(int *)(unaff_r14 + 0x28) * (int)DAT_8c1feeb0;
      iVar1 = DAT_8c1feec4 + a6;
      *(undefined4 *)(iVar1 + 0x30) = 1;
      *(int *)(iVar1 + 0x34) = ar6;
      iVar1 = 0;
      if (0 < ar6) {
        do {
          iVar2 = FUN_8c1fee6c(unaff_r14,ar5,a6,ar7);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
          ar5 = ar5 + iVar3;
        } while (iVar1 < ar6);
      }
      iVar1 = 0;
    }
  }
  else {
    iVar1 = (int)DAT_8c1feeae;
  }
  return iVar1;
}



/* FUN_8c1fee6c @ 8c1fee6c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1fee6c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  
  uVar3 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c1feec8)(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c1feecc)(*(undefined4 *)(ar4 + 0x28),uVar3,ar6,ar7);
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c1feed0)(*(undefined4 *)(ar4 + 0x28),uVar3,ar6,ar7);
    if ((iVar1 != 0) && (*(char *)(DAT_8c1feed4 + *(int *)(ar4 + 0x28) * (int)DAT_8c1feeb0) != '\0')
       ) {
      iVar1 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1fefb0)(*(undefined4 *)(ar4 + 0x28),uVar3,ar6,ar7);
      if (iVar1 < 0) {
        return (int)DAT_8c1fefa8;
      }
      uVar3 = *(undefined4 *)(ar4 + 0x28);
      if (*(int *)(ar4 + 0x40) == DAT_8c1fefb4) {
        if (*(int *)(ar4 + 0x34) != 0) {
          return DAT_8c1fefb8;
        }
      }
      else if (*(int *)(ar4 + 0x34) != 0) {
        if ((*(int *)(ar4 + 0x40) != DAT_8c1fefbc) && (*(int *)(ar4 + 0x40) != DAT_8c1fefc0)) {
          ar5_00 = *(undefined4 *)(ar4 + 0x40);
          iVar1 = (*(code *)PTR_FUN_8c1fefc4)(uVar3,ar5_00,ar5,ar7);
          if (iVar1 < 0) {
            return iVar1;
          }
          uVar2 = (*(code *)PTR_FUN_8c1fefc8)(uVar3,ar5_00,ar5,ar7);
          *(uint *)(ar4 + 0x40) = uVar2 & 0xffff;
          iVar1 = *(int *)(ar4 + 0x34) + -1;
          *(int *)(ar4 + 0x34) = iVar1;
          return iVar1;
        }
        return (int)DAT_8c1fefaa;
      }
      return 0;
    }
  }
  return (int)DAT_8c1feeb2;
}



/* FUN_8c1fef5a @ 8c1fef5a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1fef5a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined1 auStack_34 [48];
  
  if (*(char *)(DAT_8c1fefcc + ar4 * DAT_8c1fefac) != '\0') {
    ar5_00 = ar5;
    iVar1 = (*(code *)PTR_FUN_8c1fefd0)(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      (*(code *)PTR_FUN_8c1fefd4)(ar4,ar5_00,ar6,ar7);
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c1fefd8)(ar4,ar5_00,ar6,ar7);
      if ((iVar1 != 0) && (*(char *)(DAT_8c1fefdc + ar4 * DAT_8c1fefac) != '\0')) {
        iVar1 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1ff0d4)(ar4,ar5_00,ar6,ar7);
        if (iVar1 < 0) {
          return (int)DAT_8c1ff0ca;
        }
        iVar1 = (*(code *)PTR_FUN_8c1ff0d8)(ar4,ar5,auStack_34,ar7);
        if (-1 < iVar1) {
          return 0;
        }
        return (int)DAT_8c1ff0cc;
      }
    }
  }
  return (int)DAT_8c1fefae;
}



/* FUN_8c1ff018 @ 8c1ff018 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1ff018(int ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = (int)DAT_8c1ff0ce;
  iVar8 = ar4 * iVar7 + DAT_8c1ff0dc;
  if (*(char *)(iVar8 + 2) != '\0') {
    pbVar5 = ar5;
    iVar4 = (*(code *)PTR_FUN_8c1ff0e0)(ar4,ar5,ar6,ar7);
    if (iVar4 == 0) {
      (*(code *)PTR_FUN_8c1ff0e4)(ar4,pbVar5,ar6,ar7);
    }
    else {
      iVar4 = (*(code *)PTR_FUN_8c1ff0e8)(ar4,pbVar5,ar6,ar7);
      if ((iVar4 != 0) && (*(char *)(ar4 * iVar7 + DAT_8c1ff0dc + 8) != '\0')) {
        iVar7 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1ff0d4)(ar4,pbVar5,ar6,ar7);
        puVar3 = PTR_FUN_8c1ff0ec;
        if (iVar7 < 0) {
          return (int)DAT_8c1ff0ca;
        }
        *(undefined4 *)(iVar8 + 0x18) = 0;
        pbVar5 = (byte *)(*(code *)puVar3)(ar4,0,ar6,ar7);
        iVar7 = 0;
        bVar2 = false;
        do {
          if (*(int *)(*(int *)(iVar8 + 0x1c) + 0x30) <= iVar7) {
LAB_8c1ff0b4:
            if (!bVar2) {
              return (int)DAT_8c1ff0cc;
            }
            pbVar5 = pbVar5 + 4;
            pbVar6 = ar5 + 0xc;
            for (; ar5 < pbVar6; ar5 = ar5 + 1) {
              bVar1 = *pbVar5;
              pbVar5 = pbVar5 + 1;
              *ar5 = bVar1;
            }
            *pbVar6 = 0;
            *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
            return 0;
          }
          if ((*pbVar5 == 0x33) || (*pbVar5 == DAT_8c1ff0d2)) {
            bVar2 = true;
            goto LAB_8c1ff0b4;
          }
          pbVar5 = pbVar5 + 0x20;
          iVar7 = iVar7 + 1;
          *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
        } while( true );
      }
    }
  }
  return (int)DAT_8c1ff0d0;
}



/* FUN_8c1ff110 @ 8c1ff110 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1ff110(int ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar5 = (int)DAT_8c1ff1d6;
  iVar6 = ar4 * iVar5 + DAT_8c1ff1e0;
  if (*(char *)(iVar6 + 2) != '\0') {
    pbVar4 = ar5;
    iVar3 = (*(code *)PTR_FUN_8c1ff1e4)(ar4,ar5,ar6,ar7);
    if (iVar3 == 0) {
      (*(code *)PTR_FUN_8c1ff1e8)(ar4,pbVar4,ar6,ar7);
    }
    else {
      iVar3 = (*(code *)PTR_FUN_8c1ff1ec)(ar4,pbVar4,ar6,ar7);
      if ((iVar3 != 0) && (*(char *)(ar4 * iVar5 + DAT_8c1ff1e0 + 8) != '\0')) {
        iVar5 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1ff1f0)(ar4,pbVar4,ar6,ar7);
        if (iVar5 < 0) {
          return (int)DAT_8c1ff1da;
        }
        pbVar4 = (byte *)(*(code *)PTR_FUN_8c1ff1f4)(ar4,*(undefined4 *)(iVar6 + 0x18),ar6,ar7);
        iVar5 = *(int *)(iVar6 + 0x18);
        bVar2 = false;
        do {
          if (*(int *)(*(int *)(iVar6 + 0x1c) + 0x30) <= iVar5) {
LAB_8c1ff1a6:
            if (!bVar2) {
              return (int)DAT_8c1ff1de;
            }
            pbVar4 = pbVar4 + 4;
            pbVar7 = ar5 + 0xc;
            for (; ar5 < pbVar7; ar5 = ar5 + 1) {
              bVar1 = *pbVar4;
              pbVar4 = pbVar4 + 1;
              *ar5 = bVar1;
            }
            *pbVar7 = 0;
            return 0;
          }
          *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
          if ((*pbVar4 == 0x33) || (*pbVar4 == DAT_8c1ff1dc)) {
            bVar2 = true;
            goto LAB_8c1ff1a6;
          }
          pbVar4 = pbVar4 + 0x20;
          iVar5 = iVar5 + 1;
        } while( true );
      }
    }
  }
  return (int)DAT_8c1ff1d8;
}



/* FUN_8c1ff1f8 @ 8c1ff1f8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1ff1f8(int ar4,byte *ar5,int *ar6,undefined4 ar7)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *ar6_00;
  byte *ar6_01;
  int iVar6;
  int iVar7;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined1 auStack_20 [8];
  int iStack_18;
  
  iVar6 = (int)DAT_8c1ff2ae;
  iVar7 = ar4 * iVar6 + DAT_8c1ff2b8;
  if (*(char *)(iVar7 + 2) != '\0') {
    pbVar4 = ar5;
    ar6_00 = ar6;
    iVar3 = (*(code *)PTR_FUN_8c1ff2bc)(ar4,ar5,ar6,ar7);
    if (iVar3 == 0) {
      (*(code *)PTR_FUN_8c1ff2c0)(ar4,pbVar4,ar6_00,ar7);
    }
    else {
      iVar3 = (*(code *)PTR_FUN_8c1ff2c4)(ar4,pbVar4,ar6_00,ar7);
      if ((iVar3 != 0) && (*(char *)(ar4 * iVar6 + DAT_8c1ff2b8 + 8) != '\0')) {
        iVar6 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1ff2c8)(ar4,pbVar4,ar6_00,ar7);
        puVar2 = PTR_FUN_8c1ff2cc;
        if (iVar6 < 0) {
          return (int)DAT_8c1ff2b2;
        }
        *(undefined4 *)(iVar7 + 0x18) = 0;
        pbVar4 = (byte *)(*(code *)puVar2)(ar4,0,ar6_00,ar7);
        iVar6 = 0;
        iVar3 = 0;
        do {
          if (*(int *)(*(int *)(iVar7 + 0x1c) + 0x30) <= iVar6) {
LAB_8c1ff298:
            if (iVar3 == 0) {
              return (int)DAT_8c1ff2b6;
            }
            ar6_01 = pbVar4 + 4;
            pbVar5 = ar5 + 0xc;
            for (; puVar2 = PTR_FUN_8c1ff3d4, ar5 < pbVar5; ar5 = ar5 + 1) {
              bVar1 = *ar6_01;
              ar6_01 = ar6_01 + 1;
              *ar5 = bVar1;
            }
            *pbVar5 = 0;
            *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + 1;
            (*(code *)puVar2)(pbVar4,auStack_40,ar6_01,iVar3);
            iVar6 = (int)DAT_8c1ff3ca;
            *ar6 = iStack_18 * (*(int *)(*(int *)(iVar7 + 0x1c) + 0x2c) + 1);
            *(short *)(ar6 + 1) = (short)iStack_18;
            *(undefined1 *)((int)ar6 + 6) = (undefined1)iStack_3c;
            *(undefined1 *)((int)ar6 + 7) = uStack_36;
            *(undefined2 *)(ar6 + 2) = uStack_38;
            puVar2 = PTR_FUN_8c1ff3d8;
            *(bool *)((int)ar6 + 6) = iStack_3c == iVar6;
            (*(code *)puVar2)((int)ar6 + 10,auStack_20,ar6_01,iVar3);
            return 0;
          }
          if ((*pbVar4 == 0x33) || (*pbVar4 == DAT_8c1ff2b4)) {
            iVar3 = 1;
            goto LAB_8c1ff298;
          }
          pbVar4 = pbVar4 + 0x20;
          iVar6 = iVar6 + 1;
          *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + 1;
        } while( true );
      }
    }
  }
  return (int)DAT_8c1ff2b0;
}



/* FUN_8c1ff336 @ 8c1ff336 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1ff336(int ar4,byte *ar5,int *ar6,int ar7)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  int *ar6_00;
  byte *ar6_01;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_44 [4];
  int iStack_40;
  undefined2 uStack_3c;
  undefined1 uStack_3a;
  undefined1 auStack_24 [8];
  int iStack_1c;
  
  iVar7 = (int)DAT_8c1ff3cc;
  iVar8 = ar4 * iVar7 + DAT_8c1ff3dc;
  if (*(char *)(iVar8 + 2) != '\0') {
    pbVar5 = ar5;
    ar6_00 = ar6;
    iVar4 = (*(code *)PTR_FUN_8c1ff3e0)(ar4,ar5,ar6,ar7);
    if (iVar4 == 0) {
      (*(code *)PTR_FUN_8c1ff3e4)(ar4,pbVar5,ar6_00,ar7);
    }
    else {
      iVar4 = (*(code *)PTR_FUN_8c1ff3e8)(ar4,pbVar5,ar6_00,ar7);
      if ((iVar4 != 0) && (*(char *)(ar4 * iVar7 + DAT_8c1ff3dc + 8) != '\0')) {
        iVar7 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1ff3ec)(ar4,pbVar5,ar6_00,ar7);
        if (iVar7 < 0) {
          return (int)DAT_8c1ff3d0;
        }
        pbVar5 = (byte *)(*(code *)PTR_FUN_8c1ff3f0)(ar4,*(undefined4 *)(iVar8 + 0x18),ar6_00,ar7);
        iVar7 = *(int *)(iVar8 + 0x18);
        bVar2 = false;
        do {
          if (*(int *)(*(int *)(iVar8 + 0x1c) + 0x30) <= iVar7) {
LAB_8c1ff400:
            if (!bVar2) {
              return (int)DAT_8c1ff504;
            }
            ar6_01 = pbVar5 + 4;
            pbVar6 = ar5 + 0xc;
            for (; puVar3 = PTR_FUN_8c1ff508, ar5 < pbVar6; ar5 = ar5 + 1) {
              bVar1 = *ar6_01;
              ar6_01 = ar6_01 + 1;
              *ar5 = bVar1;
            }
            *pbVar6 = 0;
            (*(code *)puVar3)(pbVar5,auStack_44,ar6_01,ar7);
            *ar6 = iStack_1c * (*(int *)(*(int *)(iVar8 + 0x1c) + 0x2c) + 1);
            iVar7 = (int)DAT_8c1ff506;
            *(short *)(ar6 + 1) = (short)iStack_1c;
            *(undefined1 *)((int)ar6 + 6) = (undefined1)iStack_40;
            *(undefined1 *)((int)ar6 + 7) = uStack_3a;
            *(undefined2 *)(ar6 + 2) = uStack_3c;
            puVar3 = PTR_FUN_8c1ff50c;
            *(bool *)((int)ar6 + 6) = iStack_40 == iVar7;
            (*(code *)puVar3)((int)ar6 + 10,auStack_24,ar6_01,ar7);
            return 0;
          }
          *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
          bVar1 = *pbVar5;
          ar7 = (int)(char)bVar1;
          if ((bVar1 == 0x33) || (bVar1 == DAT_8c1ff3ca)) {
            bVar2 = true;
            goto LAB_8c1ff400;
          }
          pbVar5 = pbVar5 + 0x20;
          iVar7 = iVar7 + 1;
        } while( true );
      }
    }
  }
  return (int)DAT_8c1ff3ce;
}



/* FUN_8c1ff478 @ 8c1ff478 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1ff478(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ar6_00;
  int iVar1;
  undefined4 ar4_00;
  int iVar2;
  uint uVar3;
  undefined1 *ar6_01;
  undefined4 ar6_02;
  uint ar5_00;
  undefined1 auStack_48 [12];
  uint uStack_3c;
  int iStack_20;
  
  ar6_01 = auStack_48;
  iVar1 = (*(code *)PTR_FUN_8c1ff510)(ar4,ar5,ar6_01,ar7);
  if (iVar1 < 0) {
    iVar1 = (int)DAT_8c1ff504;
  }
  else {
    ar4_00 = (*(code *)PTR_FUN_8c1ff514)(ar4,iVar1,ar6_01,ar7);
    iVar2 = (*(code *)PTR_FUN_8c1ff518)(ar4,ar5,ar6_01,ar7);
    ar6_00 = DAT_8c1ff51c;
    if (iVar2 == 0) {
      ar5_00 = uStack_3c;
      for (iVar2 = 0; iVar2 < iStack_20; iVar2 = iVar2 + 1) {
        uVar3 = (*(code *)PTR_FUN_8c1ff520)(ar4,ar5_00,ar6_01,ar7);
        ar6_01 = ar6_00;
        (*(code *)PTR_FUN_8c1ff524)(ar4,ar5_00,ar6_00,ar7);
        ar5_00 = uVar3 & 0xffff;
      }
    }
    ar6_02 = 0x20;
    (*(code *)PTR_memset_8c1ff528)(ar4_00,0,0x20,ar7);
    (*(code *)PTR_FUN_8c1ff52c)(ar4,iVar1,ar6_02,ar7);
    iVar1 = 0;
  }
  return iVar1;
}



/* FUN_8c1ff530 @ 8c1ff530 callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ff530(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = ar4 * 0x148;
  *(undefined4 *)(iVar3 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar3 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273a90 + *(int *)(iVar3 + -0x73b87c1c) * 0x50);
  if ((&DAT_8c4783e2)[iVar3] != '\0') {
    uVar2 = ar5;
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,uVar2,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,uVar2,ar6,ar7);
      if ((iVar1 != 0) && ((&DAT_8c4783e8)[iVar3] != '\0')) {
        iVar3 = thunk_FUN_8c1ffcc2(ar4,uVar2,ar6,ar7);
        if (iVar3 < 0) {
          return 0xffffff03;
        }
        iVar3 = ret_const_0_200aec(ar4,ar5,ar6,ar7);
        if (iVar3 < 0) {
          return 0xffffff0b;
        }
        iVar3 = FUN_8c1ff478(ar4,ar5,ar6,ar7);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar3 = FUN_8c200346(ar4,ar5,ar6,ar7);
        if (iVar3 < 0) {
          return iVar3;
        }
        uVar2 = FUN_8c2007f0(ar4,ar5,ar6,ar7);
        return uVar2;
      }
    }
  }
  return 0xffffff01;
}



/* FUN_8c1ff610 @ 8c1ff610 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ff610(int ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  undefined4 *ar5_00;
  int ar6_00;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = ar4 * 0x148;
  *(undefined4 *)(iVar4 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar4 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273ab8 + *(int *)(iVar4 + -0x73b87c1c) * 0x50);
  if ((&DAT_8c4783e2)[iVar4] != '\0') {
    ar5_00 = ar5;
    ar6_00 = ar6;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,ar5_00,ar6_00,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,ar5_00,ar6_00,ar7);
      if ((iVar2 != 0) && ((&DAT_8c4783e8)[iVar4] != '\0')) {
        iVar4 = thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6_00,ar7);
        if (iVar4 < 0) {
          return 0xffffff03;
        }
        iVar4 = 0;
        puVar3 = ar5;
        if (0 < ar6) {
          do {
            ar5_00 = (undefined4 *)*puVar3;
            iVar2 = ret_const_0_200aec(ar4,ar5_00,ar6_00,ar7);
            if (iVar2 < 0) {
              return 0xffffff0a;
            }
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < ar6);
        }
        iVar4 = 0;
        bVar1 = false;
        if (0 < ar6) {
          do {
            ar5_00 = (undefined4 *)*ar5;
            iVar2 = FUN_8c1ff478(ar4,ar5_00,ar6_00,ar7);
            iVar4 = iVar4 + 1;
            if (iVar2 < 0) {
              bVar1 = true;
            }
            ar5 = ar5 + 1;
          } while (iVar4 < ar6);
        }
        iVar4 = FUN_8c200346(ar4,ar5_00,ar6_00,ar7);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = FUN_8c2007f0(ar4,ar5_00,ar6_00,ar7);
        if (iVar4 < 0) {
          return iVar4;
        }
        if (bVar1) {
          return 0xffffff0a;
        }
        return 0;
      }
    }
  }
  return 0xffffff01;
}



/* FUN_8c1ff72e @ 8c1ff72e callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ff72e(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *ar6_00;
  int iVar5;
  undefined1 auStack_38 [48];
  
  iVar5 = ar4 * 0x148;
  *(undefined4 *)(iVar5 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar5 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273a94 + *(int *)(iVar5 + -0x73b87c1c) * 0x50);
  if ((&DAT_8c4783e2)[iVar5] != '\0') {
    uVar3 = ar5;
    puVar4 = ar6;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,uVar3,puVar4,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,uVar3,puVar4,ar7);
      if ((iVar2 != 0) && ((&DAT_8c4783e8)[iVar5] != '\0')) {
        iVar5 = thunk_FUN_8c1ffcc2(ar4,uVar3,puVar4,ar7);
        if (iVar5 < 0) {
          return 0xffffff03;
        }
        iVar5 = ret_const_0_200aec(ar4,ar5,puVar4,ar7);
        if (iVar5 < 0) {
          return 0xffffff0b;
        }
        iVar5 = FUN_8c200566(ar4,ar5,auStack_38,ar7);
        if (iVar5 < 0) {
          return 0xffffff05;
        }
        puVar4 = auStack_38;
        iVar2 = FUN_8c200566(ar4,ar6,puVar4,ar7);
        if (-1 < iVar2) {
          return 0xffffff06;
        }
        iVar2 = FUN_8c200a84(ar4,iVar5,puVar4,ar7);
        ar6_00 = (undefined1 *)(iVar2 + 0x10);
        for (puVar4 = (undefined1 *)(iVar2 + 4); puVar4 < ar6_00; puVar4 = puVar4 + 1) {
          uVar1 = *ar6;
          ar6 = ar6 + 1;
          *puVar4 = uVar1;
        }
        FUN_8c200a9c(ar4,iVar5,ar6_00,ar6);
        uVar3 = FUN_8c200346(ar4,iVar5,ar6_00,ar6);
        return uVar3;
      }
    }
  }
  return 0xffffff01;
}



/* FUN_8c1ff844 @ 8c1ff844 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ff844(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  int iVar6;
  undefined1 auStack_44 [44];
  undefined1 auStack_18 [12];
  
  iVar6 = ar4 * 0x148;
  *(undefined4 *)(iVar6 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar6 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273a9c + *(int *)(iVar6 + -0x73b87c1c) * 0x50);
  if ((&DAT_8c4783e2)[iVar6] != '\0') {
    uVar3 = ar5;
    ar6_00 = ar6;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,uVar3,ar6_00,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,uVar3,ar6_00,ar7);
      if ((iVar2 != 0) && ((&DAT_8c4783e8)[iVar6] != '\0')) {
        iVar6 = thunk_FUN_8c1ffcc2(ar4,uVar3,ar6_00,ar7);
        if (iVar6 < 0) {
          return 0xffffff03;
        }
        iVar6 = ret_const_0_200aec(ar4,ar5,ar6_00,ar7);
        if (iVar6 < 0) {
          return 0xffffff0b;
        }
        puVar4 = auStack_44;
        iVar6 = FUN_8c200566(ar4,ar5,puVar4,ar7);
        if (iVar6 < 0) {
          return 0xffffff05;
        }
        iVar2 = FUN_8c200a84(ar4,iVar6,puVar4,ar7);
        FUN_8c200bfc(auStack_18,ar6,puVar4,ar7);
        puVar5 = auStack_18;
        ar6_01 = (undefined1 *)(iVar2 + 0x18);
        for (puVar4 = (undefined1 *)(iVar2 + 0x10); puVar4 < ar6_01; puVar4 = puVar4 + 1) {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar4 = uVar1;
        }
        FUN_8c200a9c(ar4,iVar6,ar6_01,ar7);
        uVar3 = FUN_8c200346(ar4,iVar6,ar6_01,ar7);
        return uVar3;
      }
    }
  }
  return 0xffffff01;
}



/* FUN_8c1ff95a @ 8c1ff95a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1ff95a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [48];
  
  if (*(char *)(DAT_8c1ffa30 + ar4 * DAT_8c1ffa20) != '\0') {
    ar5_00 = ar5;
    ar6_00 = ar6;
    iVar2 = (*(code *)PTR_FUN_8c1ffa34)(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      (*(code *)PTR_FUN_8c1ffa38)(ar4,ar5_00,ar6_00,ar7);
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c1ffa3c)(ar4,ar5_00,ar6_00,ar7);
      if ((iVar2 != 0) && (*(char *)(DAT_8c1ffa40 + ar4 * DAT_8c1ffa20) != '\0')) {
        iVar2 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1ffa44)(ar4,ar5_00,ar6_00,ar7);
        if (iVar2 < 0) {
          return (int)DAT_8c1ffa24;
        }
        iVar2 = (*(code *)PTR_ret_const_0_200aec_8c1ffa48)(ar4,ar5,ar6_00,ar7);
        if (iVar2 < 0) {
          return (int)DAT_8c1ffa26;
        }
        puVar3 = auStack_34;
        iVar2 = FUN_8c200566(ar4,ar5,puVar3,ar7);
        if (iVar2 < 0) {
          return (int)DAT_8c1ffa28;
        }
        iVar2 = (*(code *)PTR_FUN_8c1ffa4c)(ar4,iVar2,puVar3,ar7);
        ar6_01 = (undefined1 *)(iVar2 + 0x10);
        for (puVar3 = auStack_3c; puVar3 < auStack_34; puVar3 = puVar3 + 1) {
          uVar1 = *ar6_01;
          ar6_01 = ar6_01 + 1;
          *puVar3 = uVar1;
        }
        (*(code *)PTR_FUN_8c1ffa50)(ar6,auStack_3c,ar6_01,ar7);
        return 0;
      }
    }
  }
  return (int)DAT_8c1ffa22;
}



/* FUN_8c1ffa54 @ 8c1ffa54 callers=0 callees=2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ffa54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *a6;
  int iVar5;
  undefined1 auStack_3c [48];
  
  iVar5 = ar4 * 0x148;
  sVar2 = (short)ar6;
  uVar1 = (undefined1)ar7;
  *(undefined4 *)(iVar5 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar5 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273a9c + *(int *)(iVar5 + -0x73b87c1c) * 0x50);
  if ((&DAT_8c4783e2)[iVar5] != '\0') {
    uVar4 = ar5;
    iVar3 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar3 == 0) {
      FUN_8c1fdd1a(ar4,uVar4,ar6,ar7);
    }
    else {
      iVar3 = FUN_8c1fd550(ar4,uVar4,ar6,ar7);
      if ((iVar3 != 0) && ((&DAT_8c4783e8)[iVar5] != '\0')) {
        iVar5 = thunk_FUN_8c1ffcc2(ar4,uVar4,ar6,ar7);
        if (iVar5 < 0) {
          return 0xffffff03;
        }
        iVar5 = ret_const_0_200aec(ar4,ar5,ar6,ar7);
        if (iVar5 < 0) {
          return 0xffffff0b;
        }
        a6 = auStack_3c;
        iVar5 = FUN_8c200566(ar4,ar5,a6,ar7);
        if (iVar5 < 0) {
          return 0xffffff05;
        }
        iVar3 = FUN_8c200a84(ar4,iVar5,a6,ar7);
        if (DAT_8c26d20c != 0) {
          a6 = (undefined1 *)(int)sVar2;
          (**(code **)(_DAT_8c4783dc + 0x10))(iVar3,0x1a,a6,ar7);
        }
        *(undefined1 *)(iVar3 + 1) = uVar1;
        FUN_8c200a9c(ar4,iVar5,a6,ar7);
        uVar4 = FUN_8c200346(ar4,iVar5,a6,ar7);
        return uVar4;
      }
    }
  }
  return 0xffffff01;
}



/* FUN_8c1ffb70 @ 8c1ffb70 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

int FUN_8c1ffb70(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined1 auStack_34 [40];
  undefined4 uStack_c;
  
  if (*(char *)(DAT_8c1ffc60 + ar4 * DAT_8c1ffc56) != '\0') {
    ar5_00 = ar5;
    iVar1 = (*(code *)PTR_FUN_8c1ffc64)(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      (*(code *)PTR_FUN_8c1ffc68)(ar4,ar5_00,ar6,ar7);
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c1ffc6c)(ar4,ar5_00,ar6,ar7);
      if ((iVar1 != 0) && (*(char *)(DAT_8c1ffc70 + ar4 * DAT_8c1ffc56) != '\0')) {
        iVar1 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1ffc74)(ar4,ar5_00,ar6,ar7);
        if (iVar1 < 0) {
          return (int)DAT_8c1ffc5a;
        }
        iVar1 = ret_const_0_200aec(ar4,ar5,ar6,ar7);
        if (iVar1 < 0) {
          return (int)DAT_8c1ffc5c;
        }
        iVar1 = FUN_8c200566(ar4,ar5,auStack_34,ar7);
        if (iVar1 < 0) {
          return (int)DAT_8c1ffc5e;
        }
        return uStack_c;
      }
    }
  }
  return (int)DAT_8c1ffc58;
}



/* FUN_8c1ffc0a @ 8c1ffc0a callers=2 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1ffc0a(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [32];
  
  if (*(char *)(DAT_8c1ffc60 + ar4 * DAT_8c1ffc56) != '\0') {
    iVar2 = ar5;
    iVar1 = (*(code *)PTR_FUN_8c1ffc64)(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      (*(code *)PTR_FUN_8c1ffc68)(ar4,iVar2,ar6,ar7);
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c1ffc6c)(ar4,iVar2,ar6,ar7);
      if ((iVar1 != 0) && (*(char *)(DAT_8c1ffc70 + ar4 * DAT_8c1ffc56) != '\0')) {
        iVar2 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1ffd54)(ar4,iVar2,ar6,ar7);
        if (iVar2 < 0) {
          return (int)DAT_8c1ffd4a;
        }
        iVar2 = FUN_8c2005d6(ar4,auStack_38,ar6,ar7);
        if (iVar2 < 0) {
          return (int)DAT_8c1ffd4c;
        }
        for (iVar2 = 0; iVar2 < 0xc; iVar2 = iVar2 + 1) {
          *(undefined1 *)(iVar2 + ar5) = auStack_28[iVar2];
        }
        *(undefined1 *)(ar5 + 0xc) = 0;
        return 0;
      }
    }
  }
  return (int)DAT_8c1ffc58;
}



/* FUN_8c1ffcc2 @ 8c1ffcc2 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1ffcc2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)DAT_8c1ffd4e;
  iVar4 = ar4 * iVar3 + DAT_8c1ffd58;
  if (*(char *)(iVar4 + 2) != '\0') {
    iVar1 = (*(code *)PTR_FUN_8c1ffd5c)(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      (*(code *)PTR_FUN_8c1ffd60)(ar4,ar5,ar6,ar7);
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c1ffd64)(ar4,ar5,ar6,ar7);
      if ((iVar1 != 0) && (*(char *)(ar4 * iVar3 + DAT_8c1ffd58 + 8) != '\0')) {
        pcVar2 = *(char **)(iVar4 + 0x20);
        iVar3 = 0;
        do {
          if (*pcVar2 != 'U') {
            *(undefined1 *)(iVar4 + 0xb) = 0;
            *(undefined1 *)(iVar4 + 0xc) = 0;
            goto LAB_8c1ffd38;
          }
          iVar3 = iVar3 + 1;
          pcVar2 = pcVar2 + 1;
        } while (iVar3 < 0x10);
        if (*(int *)(DAT_8c1ffd68 + ar4 * 4) == 0) {
          return 0;
        }
LAB_8c1ffd38:
        return (int)DAT_8c1ffd4a;
      }
    }
  }
  return (int)DAT_8c1ffd50;
}



/* FUN_8c1ffd6c @ 8c1ffd6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1ffd6c(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puStack_10;
  
  iVar3 = (int)DAT_8c1ffe58;
  iVar4 = ar4 * iVar3 + DAT_8c1ffe60;
  if (*(char *)(iVar4 + 2) != '\0') {
    puVar5 = ar5;
    iVar2 = (*(code *)PTR_FUN_8c1ffe64)(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      (*(code *)PTR_FUN_8c1ffe68)(ar4,puVar5,ar6,ar7);
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c1ffe6c)(ar4,puVar5,ar6,ar7);
      if ((iVar2 != 0) && (*(char *)(ar4 * iVar3 + DAT_8c1ffe60 + 8) != '\0')) {
        iVar3 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1ffe70)(ar4,puVar5,ar6,ar7);
        if (iVar3 < 0) {
          return (int)DAT_8c1ffe5c;
        }
        puVar5 = (undefined1 *)(*(int *)(iVar4 + 0x20) + 0x10);
        puStack_10 = ar5;
        for (iVar3 = 0; iVar3 < 0x20; iVar3 = iVar3 + 1) {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puStack_10 = uVar1;
          puStack_10 = puStack_10 + 1;
        }
        return 0;
      }
    }
  }
  return (int)DAT_8c1ffe5a;
}



/* FUN_8c1ffdfa @ 8c1ffdfa callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c1ffdfa(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 *puStack_14;
  
  iVar5 = (int)DAT_8c1ffe58;
  iVar6 = ar4 * iVar5 + DAT_8c1ffe60;
  sVar1 = DAT_8c1ffe5a;
  if (*(char *)(iVar6 + 2) != '\0') {
    puVar4 = ar5;
    iVar2 = (*(code *)PTR_FUN_8c1ffe64)(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      (*(code *)PTR_FUN_8c1ffe68)(ar4,puVar4,ar6,ar7);
      sVar1 = DAT_8c1ffe5a;
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c1ffe6c)(ar4,puVar4,ar6,ar7);
      sVar1 = DAT_8c1ffe5a;
      if (((iVar2 != 0) && (*(char *)(ar4 * iVar5 + DAT_8c1ffe60 + 8) != '\0')) &&
         (iVar5 = (*(code *)PTR_thunk_FUN_8c1ffcc2_8c1ffe70)(ar4,puVar4,ar6,ar7),
         sVar1 = DAT_8c1ffe5c, -1 < iVar5)) {
        iVar5 = 0;
        puVar4 = (undefined1 *)(*(int *)(iVar6 + 0x20) + 0x10);
        for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        puVar4 = (undefined1 *)(*(int *)(iVar6 + 0x20) + 0x10);
        puStack_14 = ar5;
        for (; iVar5 < 0x20; iVar5 = iVar5 + 1) {
          *puVar4 = *puStack_14;
          puVar4 = puVar4 + 1;
          puStack_14 = puStack_14 + 1;
        }
        uVar3 = FUN_8c20065a(ar4,puVar4,iVar5,iVar2);
        return uVar3;
      }
    }
  }
  return (int)sVar1;
}



/* FUN_8c1ffebe @ 8c1ffebe callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ffebe(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar1 = DAT_8c1fff84;
  uVar5 = 0xfffc;
  iVar3 = ar4 * DAT_8c1fff7e + DAT_8c1fff80;
  iVar4 = 0;
  while( true ) {
    if (*(int *)(*(int *)(iVar3 + 0x1c) + 0x30) <= iVar4) {
      return 0xffffffff;
    }
    uVar2 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(iVar3 + 0x24),iVar4 << 1,uVar5);
    if (((uVar2 & 0xffff) != DAT_8c1fff88) && ((uVar2 & 0xffff) != DAT_8c1fff8c)) break;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}



/* FUN_8c1ffeca @ 8c1ffeca callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ffeca(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int in_r3;
  int iVar3;
  int in_MACL;
  
  piVar1 = DAT_8c1fff84;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(*(int *)(in_MACL + in_r3 + 0x1c) + 0x30) <= iVar3) {
      return 0xffffffff;
    }
    uVar2 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(in_MACL + in_r3 + 0x24),iVar3 << 1,ar6,ar7)
    ;
    if (((uVar2 & 0xffff) != DAT_8c1fff88) && ((uVar2 & 0xffff) != DAT_8c1fff8c)) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}



/* FUN_8c1fff0c @ 8c1fff0c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1fff0c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar2 = DAT_8c1fff88;
  piVar1 = DAT_8c1fff84;
  uVar6 = 0xfffc;
  iVar4 = ar4 * DAT_8c1fff7e + DAT_8c1fff80;
  iVar5 = *(int *)(*(int *)(iVar4 + 0x1c) + 0x30);
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 < ar5) {
      return 0xffffffff;
    }
    uVar3 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(iVar4 + 0x24),iVar5 * 2,uVar6);
  } while ((uVar3 & 0xffff) != uVar2);
  return iVar5;
}



/* FUN_8c1fff20 @ 8c1fff20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c1fff20(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int in_r3;
  int unaff_r11;
  int unaff_r13;
  int iVar4;
  
  uVar2 = DAT_8c1fff88;
  piVar1 = DAT_8c1fff84;
  iVar4 = *(int *)(*(int *)(unaff_r13 + in_r3 + 0x1c) + 0x30);
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 < unaff_r11) {
      return 0xffffffff;
    }
    uVar3 = (**(code **)(*piVar1 + 0xc))
                      (*(undefined4 *)(unaff_r13 + in_r3 + 0x24),iVar4 * 2,ar6,ar7);
  } while ((uVar3 & 0xffff) != uVar2);
  return iVar4;
}



/* FUN_8c1fff5e @ 8c1fff5e callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fff5e(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *a4;
  
  piVar1 = DAT_8c1fff84;
  iVar3 = ar4 * DAT_8c1fff7e + DAT_8c1fff80;
  a4 = *(char **)(iVar3 + 0x28);
  iVar4 = 0;
  while( true ) {
    if (*(int *)(*(int *)(iVar3 + 0x1c) + 0x30) <= iVar4) {
      return 0;
    }
    if ((*a4 != '\0') &&
       (uVar2 = (**(code **)(*piVar1 + 0xc))(a4,2,ar6,ar7), (uVar2 & 0xffff) == ar5)) break;
    a4 = a4 + 0x20;
    iVar4 = iVar4 + 1;
  }
  return a4;
}



/* FUN_8c1fffca @ 8c1fffca callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fffca(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int ar5_00;
  int iVar3;
  
  iVar3 = ar4 * DAT_8c200072 + DAT_8c200074;
  ar5_00 = 0;
  do {
    if (**(int **)(iVar3 + 0x1c) + 1 <= ar5_00) {
      return 0;
    }
    uVar1 = FUN_8c2009d0(ar4,ar5_00,ar6,ar7);
    uVar1 = uVar1 & 0xffff;
    if (((uVar1 != DAT_8c200078) && (uVar1 != DAT_8c20007c)) && (uVar1 != DAT_8c200080)) {
      if (ar5_00 < *(int *)(*(int *)(iVar3 + 0x1c) + 0x30)) {
        iVar2 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x30);
      }
      else {
        iVar2 = **(int **)(iVar3 + 0x1c) + 1;
      }
      if (iVar2 <= (int)uVar1) {
        return 0xffffffff;
      }
    }
    ar5_00 = ar5_00 + 1;
  } while( true );
}



/* FUN_8c1fffd8 @ 8c1fffd8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1fffd8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int in_r3;
  int iVar2;
  undefined4 unaff_r12;
  int a5;
  int iVar3;
  int in_MACL;
  
  iVar3 = in_MACL + in_r3;
  a5 = 0;
  do {
    if (**(int **)(iVar3 + 0x1c) + 1 <= a5) {
      return 0;
    }
    uVar1 = FUN_8c2009d0(unaff_r12,a5,ar6,ar7);
    uVar1 = uVar1 & 0xffff;
    if (((uVar1 != DAT_8c200078) && (uVar1 != DAT_8c20007c)) && (uVar1 != DAT_8c200080)) {
      if (a5 < *(int *)(*(int *)(iVar3 + 0x1c) + 0x30)) {
        iVar2 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x30);
      }
      else {
        iVar2 = **(int **)(iVar3 + 0x1c) + 1;
      }
      if (iVar2 <= (int)uVar1) {
        return 0xffffffff;
      }
    }
    a5 = a5 + 1;
  } while( true );
}


