/* Seaman (USA) region 0x8c020000-0x8c030000 (Ghidra decompiler) */

/* FUN_8c02000c @ 8c02000c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 *
FUN_8c02000c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            )

{
  undefined4 *puVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  ar6_00 = ar6;
  ar7_00 = ar7;
  puVar1 = (undefined4 *)malloc_thunk(0xd8,ar5,ar6,ar7);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = ar5;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    strcpy(puVar1 + 4,ar6,ar6_00,ar7_00,ar5);
    strcpy(puVar1 + 0xc,ar7,ar6_00,ar7_00,ar5);
    puVar1[0x14] = s0;
    puVar1[0x15] = s4;
    for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
      puVar1[iVar2 + 0x16] = 0;
    }
  }
  return puVar1;
}



/* FUN_8c02009c @ 8c02009c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02009c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar5_00;
  
  ar4[1] = 0;
  *ar4 = 0;
  iVar1 = 0;
  if (ar4[8] != 0) {
    for (ar5_00 = (int *)ar4[8]; ar5_00[1] != 0; ar5_00 = (int *)ar5_00[1]) {
    }
    iVar1 = (*(code *)PTR_FUN_8c020138)(ar4,ar5_00 + 0xc,ar6,ar7);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_FUN_8c02013c)(ar4,ar5_00,ar6,ar7);
    }
    else {
      iVar1 = *ar5_00;
      if (iVar1 == 0xb) {
        iVar1 = (*(code *)PTR_FUN_8c020140)(ar4,ar5_00,ar6,ar7);
      }
      else if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0xe)) {
        iVar1 = 1;
      }
      else {
        iVar1 = (*(code *)PTR_FUN_8c020144)(ar4,ar5_00,ar6,ar7);
      }
      if (iVar1 == 1) {
        ar4[1] = ar5_00;
      }
    }
  }
  return iVar1;
}



/* FUN_8c020148 @ 8c020148 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c020148(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char acStack_3c [36];
  
  if (*ar5 != '\0') {
    acStack_3c[0] = '\0';
    iVar3 = 0;
    iVar2 = 0;
    for (iVar1 = 0; iVar1 < 0x40; iVar1 = iVar1 + 1) {
      if ((ar5[iVar3] == '\\') || (ar5[iVar3] == '\0')) {
        acStack_3c[iVar2] = '\0';
        iVar1 = 0;
        while( true ) {
          if ((2 < iVar1) || (*(char *)(ar4 + iVar1 * DAT_8c02024c + 0x38) == '\0')) {
            return 0;
          }
          iVar3 = ar4 + iVar1 * DAT_8c02024c + 0x38;
          iVar2 = (*(code *)PTR_FUN_8c020250)(acStack_3c,iVar3,ar6,ar7);
          if ((iVar2 == 0) &&
             (iVar2 = (*(code *)PTR_FUN_8c020254)
                                (*(undefined4 *)(ar4 + iVar1 * DAT_8c02024c + 0x58),iVar3,ar6,ar7),
             iVar2 == 0)) break;
          iVar1 = iVar1 + 1;
        }
        return 1;
      }
      acStack_3c[iVar2] = ar5[iVar3];
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
    }
  }
  iVar1 = (*(code *)PTR_FUN_8c020254)(*(undefined4 *)(ar4 + 0x58),ar5,ar6,ar7);
  return (uint)(iVar1 == 0);
}



/* FUN_8c020258 @ 8c020258 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020258(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

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



/* FUN_8c0202c0 @ 8c0202c0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c020322) */
/* WARNING: Switch with 1 destination removed at 0x8c020362 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0202c0(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_stack_ffffffbc;
  undefined1 auStack_30 [36];
  
  ar5[2] = 0;
  *ar4 = 0;
  strcpy(auStack_30,ar5 + 4,ar6,ar7,in_stack_ffffffbc);
  iVar3 = 0;
  iVar1 = FUN_8c26201c(auStack_30,0,ar6,ar7);
  *ar4 = iVar1;
  if (*ar4 == 0) {
    FUN_8c02049c(ar4,ar5,ar6,ar7);
    uVar2 = 0;
  }
  else {
    iVar1 = s_E9040829_adxf_is_NULL_ADXF_G_262646(*ar4,iVar3,ar6,ar7);
    ar5[3] = iVar1;
    iVar1 = ar5[3] + 0x7ff >> 0xb;
    if (ar5[0x15] != 0) {
      iVar1 = ar5[0x15];
      ar5[3] = iVar1 << 0xb;
      ar6 = 0;
      iVar3 = ar5[0x14];
      FUN_8c262554(*ar4,iVar3,0,ar7);
    }
    if ((*ar5 < 0xb) && (-1 < *ar5)) {
                    /* WARNING: Switch is manually overridden */
      ar5[2] = ar4[4];
    }
    else {
      iVar3 = malloc_thunk(ar5[3] + 0x800,iVar3,ar6,ar7);
      ar5[2] = iVar3;
      if (ar5[2] == 0) {
        FUN_8c02049c(ar4,ar5,ar6,ar7);
        return 0;
      }
    }
    iVar3 = ar5[2];
    iVar1 = s_E9040816_adxf_is_NULL_ADXF_R_26231a(*ar4,iVar1,iVar3,ar7);
    if (iVar1 < 0) {
      FUN_8c02049c(ar4,ar5,iVar3,ar7);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* FUN_8c02041c @ 8c02041c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c02041c(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(ar5 + 8) = 0;
  ar4[5] = 0;
  iVar2 = ar5;
  for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
    iVar2 = 0;
    iVar1 = (*(code *)PTR_FUN_8c020490)(ar5 + 0x10,0,ar6,ar7);
    *ar4 = iVar1;
    if (*ar4 != 0) break;
  }
  iVar3 = *ar4;
  if (iVar3 != 0) {
    ar4[5] = 1;
    iVar2 = (*(code *)PTR_s_E9040829_adxf_is_NULL_ADXF_G_262646_8c020498)(*ar4,iVar2,ar6,ar7);
    ar4[6] = iVar2;
  }
  else {
    (*(code *)PTR_FUN_8c020494)(ar4,ar5,ar6,ar7);
  }
  return (uint)(iVar3 != 0);
}



/* FUN_8c02049c @ 8c02049c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02049c(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = *ar5;
  if (((iVar1 != 0xc) && (iVar1 != 0xd)) && (iVar1 != 0xe)) {
    piVar3 = ar5;
    if (*ar4 != 0) {
      (*(code *)PTR_FUN_8c02050c)(*ar4,ar5,ar6,ar7);
    }
    if (ar5[2] != 0) {
      (*(code *)PTR_FUN_8c020510)(ar5[2],piVar3,ar6,ar7);
    }
  }
  *ar4 = 0;
  ar5[2] = 0;
  piVar3 = ar5 + 4;
  (*(code *)PTR_FUN_8c020514)(ar4,*ar5,ar4 + 8,piVar3);
  uVar2 = (*(code *)PTR_FUN_8c020518)(ar4,ar4 + 9,ar5,piVar3);
  return uVar2;
}



/* FUN_8c02051c @ 8c02051c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02051c(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int ar6_00;
  int iVar1;
  undefined4 in_stack_00000000;
  
  if (ar6 == 0) {
    ar6_00 = 0;
  }
  else {
    do {
      ar6_00 = ar6;
      if (ar6_00 == 0) {
        return 0;
      }
      ar6 = *(int *)(ar6_00 + 4);
      iVar1 = (*(code *)PTR_FUN_8c020584)(ar4,ar5,ar6_00,ar7,in_stack_00000000);
    } while (iVar1 != 1);
  }
  return ar6_00;
}



/* FUN_8c020588 @ 8c020588 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020588(undefined4 ar4,int ar5,int *ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  int iVar2;
  int *ar6_00;
  
  if (*ar6 == ar5) {
    ar6_00 = ar6;
    iVar2 = (*(code *)PTR_FUN_8c0205e4)(ar6 + 4,ar7,ar6,ar7);
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_FUN_8c0205e4)(ar6 + 0xc,s0,ar6_00,ar7);
      if (iVar2 == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c0205e8 @ 8c0205e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0205e8(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*ar5 == 0) {
    *ar5 = ar6;
    return 0;
  }
  iVar1 = *ar5;
  *(int *)(ar6 + 4) = iVar1;
  *ar5 = ar6;
  return iVar1;
}



/* FUN_8c020600 @ 8c020600 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c020600(undefined4 ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int ar6_00;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_stack_00000000;
  
  ar6_00 = *ar6;
  if (ar6_00 == 0) {
    ar6_00 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c0206b4)(ar4,ar5,ar6_00,ar7,in_stack_00000000);
    if (iVar1 == 1) {
      *ar6 = *(int *)(ar6_00 + 4);
    }
    else if (*(int *)(ar6_00 + 4) == 0) {
      ar6_00 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(ar6_00 + 4) + 4);
      iVar1 = ar6_00;
      ar6_00 = *(int *)(ar6_00 + 4);
      while (iVar2 = (*(code *)PTR_FUN_8c0206b4)(ar4,ar5,ar6_00,ar7,in_stack_00000000), iVar2 != 1)
      {
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = *(int *)(*(int *)(ar6_00 + 4) + 4);
        iVar1 = ar6_00;
        ar6_00 = *(int *)(ar6_00 + 4);
      }
      *(int *)(iVar1 + 4) = iVar3;
    }
  }
  return ar6_00;
}



/* FUN_8c0206b8 @ 8c0206b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0206b8(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(ar5 + iVar2 * 4 + 0x58);
    if (iVar1 == ar6) {
      return iVar1;
    }
  }
  iVar2 = 0;
  while( true ) {
    if (0x1f < iVar2) {
      return 0x20;
    }
    if (*(int *)(ar5 + iVar2 * 4 + 0x58) == 0) break;
    iVar2 = iVar2 + 1;
  }
  *(int *)(ar5 + iVar2 * 4 + 0x58) = ar6;
  return 0x58;
}



/* FUN_8c020714 @ 8c020714 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020714(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (0x1f < iVar1) {
LAB_8c02074c:
      iVar1 = 0;
      while( true ) {
        if (0x1f < iVar1) {
          return 0;
        }
        if (*(int *)(ar5 + iVar1 * 4 + 0x58) != 0) break;
        iVar1 = iVar1 + 1;
      }
      return 1;
    }
    if (*(int *)(ar5 + iVar1 * 4 + 0x58) == ar6) {
      *(undefined4 *)(ar5 + iVar1 * 4 + 0x58) = 0;
      goto LAB_8c02074c;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}



/* FUN_8c02077c @ 8c02077c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c02077c(int ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 *s4,
            undefined4 *s8,undefined4 s12,undefined4 s16,undefined4 s20)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar7;
  iVar1 = (*(code *)PTR_FUN_8c0208d4)(ar4,ar5,*(undefined4 *)(ar4 + 0x20),ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c0208d4)(ar4,ar5,*(undefined4 *)(ar4 + 0x24),ar7);
    if (iVar1 == 0) {
      uVar2 = ar7;
      iVar1 = (*(code *)PTR_FUN_8c0208d4)(ar4,ar5,ar6,ar7);
      if (iVar1 == 0) {
        if (((ar5 == 0xc) || (ar5 == 0xd)) || (ar5 == 0xe)) {
          iVar1 = (*(code *)PTR_FUN_8c0208e0)(ar4,ar5,ar7,s0,0,0);
          if (iVar1 == 0) {
            return 0;
          }
          *(undefined4 *)(iVar1 + 8) = *s4;
          (*(code *)PTR_FUN_8c0208e4)(ar4,ar4 + 0x20,iVar1,s0);
        }
        else {
          iVar1 = (*(code *)PTR_FUN_8c0208e8)(ar4,ar5,ar7,s0,s12,s16,s20);
          if (iVar1 == 0) {
            return 0;
          }
        }
        uVar2 = 2;
      }
      else {
        (*(code *)PTR_FUN_8c0208d8)(ar4,iVar1,s20,uVar2);
        *s4 = *(undefined4 *)(iVar1 + 8);
        *s8 = *(undefined4 *)(iVar1 + 0xc);
        uVar2 = 1;
      }
    }
    else {
      (*(code *)PTR_FUN_8c0208dc)(ar4,ar5,ar4 + 0x24,ar7,s0,s20);
      uVar2 = 0;
    }
  }
  else {
    (*(code *)PTR_FUN_8c0208d8)(ar4,iVar1,s20,uVar2);
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_8c0208ec @ 8c0208ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c0208ec(undefined4 ar4,int ar5,undefined4 *ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  iVar1 = (*(code *)PTR_FUN_8c0209a0)(ar4,ar5,*ar6,ar7);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (((ar5 == 0xc) || (ar5 == 0xd)) || (ar5 == 0xe)) {
      (*(code *)PTR_FUN_8c0209a4)(ar4,ar5,ar6,ar7);
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c0209a8)(ar4,iVar1,s4,ar7_00);
      if (iVar1 == 1) {
        return 1;
      }
      iVar1 = (*(code *)PTR_FUN_8c0209a4)(ar4,ar5,ar6,ar7);
      if (*(int *)(iVar1 + 8) != 0) {
        (*(code *)PTR_FUN_8c0209ac)(*(undefined4 *)(iVar1 + 8),ar5,ar6,ar7);
      }
    }
    uVar2 = (*(code *)PTR_FUN_8c0209ac)(iVar1,ar5,ar6,ar7);
  }
  return uVar2;
}



/* FUN_8c0209b0 @ 8c0209b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0209b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_FUN_8c0209f8)
                    (ar4,0,*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7,ar4 + 8,0,0,in_stack_00000000);
  return uVar1;
}



/* FUN_8c0209fc @ 8c0209fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0209fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c020a68)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c020a6c)(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



/* FUN_8c020a70 @ 8c020a70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020a70(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c020aa4)(ar4,0,ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c020aa8 @ 8c020aa8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020aa8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_FUN_8c020af0)
                    (ar4,2,*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7,ar4 + 8,0,0,in_stack_00000000);
  return uVar1;
}



/* FUN_8c020af4 @ 8c020af4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020af4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c020b60)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c020b64)(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



/* FUN_8c020b68 @ 8c020b68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020b68(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c020b9c)(ar4,2,ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c020ba0 @ 8c020ba0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020ba0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_FUN_8c020be8)
                    (ar4,5,*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7,ar4 + 8,0,0,in_stack_00000000);
  return uVar1;
}



/* FUN_8c020bec @ 8c020bec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020bec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c020c58)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c020c5c)(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



/* FUN_8c020c60 @ 8c020c60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020c60(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c020c94)(ar4,5,ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c020c98 @ 8c020c98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020c98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_FUN_8c020ce0)
                    (ar4,8,*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7,ar4 + 8,0,0,in_stack_00000000);
  return uVar1;
}



/* FUN_8c020ce4 @ 8c020ce4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020ce4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c020d50)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c020d54)(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



/* FUN_8c020d58 @ 8c020d58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020d58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c020d8c)(ar4,8,ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c020d90 @ 8c020d90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020d90(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c020dd8)
                    (ar4,0xb,*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar4 + 0xc,ar4 + 8,0,0,ar7);
  return uVar1;
}



/* FUN_8c020ddc @ 8c020ddc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020ddc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c020e40)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c020e44)(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



/* FUN_8c020e48 @ 8c020e48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020e48(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c020e7c)(ar4,0xb,ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c020e80 @ 8c020e80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c020e80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  undefined4 uStack_1c;
  int iStack_18;
  
  ar7_00 = ar5;
  uStack_1c = ar7;
  iVar1 = (*(code *)PTR_FUN_8c020ee8)
                    (ar4,0xc,*(undefined4 *)(ar4 + 0x2c),ar5,ar6,&uStack_1c,ar4 + 8,0,0,1);
  if (iVar1 == 1) {
    iStack_18 = iVar1;
    (*(code *)PTR_FUN_8c020eec)(ar4,ar5,ar6,ar7_00);
  }
  return iVar1;
}



/* FUN_8c020ef0 @ 8c020ef0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020ef0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c020f54)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c020f58)(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



/* FUN_8c020f5c @ 8c020f5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020f5c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c020f8c)(ar4,0xc,ar4 + 0x2c,ar5,ar6,1);
  return uVar1;
}



/* FUN_8c020f90 @ 8c020f90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c020f90(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uStack_1c;
  int iStack_18;
  
  uStack_1c = ar7;
  iVar1 = (*(code *)PTR_FUN_8c021004)
                    (ar4,0xe,*(undefined4 *)(ar4 + 0x2c),ar5,ar6,&uStack_1c,ar4 + 8,0,0,1);
  if (iVar1 == 1) {
    iStack_18 = iVar1;
    (*(code *)PTR_FUN_8c021008)(ar4,0xe,ar4 + 0x2c,ar5,ar6,1);
  }
  return iVar1;
}



/* FUN_8c02100c @ 8c02100c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02100c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c021070)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c021074)(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



/* s_CDCGD_ReadPVMFileReq_021082 @ 8c021078 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_CDCGD_ReadPVMFileReq_021082
              (int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 auStack_1c [2];
  
  ar6_00 = *(undefined4 *)(ar4 + 0x34);
  ar7_00 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c021124)(ar4,0x10,ar6_00,ar5,ar6,auStack_1c,ar4 + 8,0,0,s0);
  if (iVar1 == 1) {
    iVar2 = (*(code *)PTR_FUN_8c021128)(auStack_1c[0],ar7,ar6_00,ar7_00);
    if (iVar2 == 1) {
      (*(code *)PTR_FUN_8c02112c)(ar4,ar5,ar6,s0);
    }
    else {
      (*(code *)PTR_FUN_8c02112c)(ar4,ar5,ar6,s0);
      (*(code *)PTR_report_error_message_8c021134)
                (PTR_s___8c12fbe0_0x2c_8c021130 + 0x12,PTR_s___8c12fbe0_0x2c_8c021130 + 0x27,1,2);
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* FUN_8c021138 @ 8c021138 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021138(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c02116c)(ar4,0x10,ar4 + 0x34,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c021170 @ 8c021170 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021170(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  
  uVar1 = (*(code *)PTR_FUN_8c0211b4)
                    (ar4,0xf,*(undefined4 *)(ar4 + 0x30),ar5,ar6,ar7,in_stack_00000000,0,0,
                     in_stack_00000004);
  return uVar1;
}



/* file_load_to_buffer @ 8c0211b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 file_load_to_buffer(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c02122c)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c021230)(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



/* FUN_8c021234 @ 8c021234 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021234(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c021268)(ar4,0xf,ar4 + 0x30,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c02126c @ 8c02126c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02126c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  uVar1 = (*(code *)PTR_FUN_8c0212b4)
                    (ar4,0x10,*(undefined4 *)(ar4 + 0x34),ar5,ar6,ar7,ar4 + 8,in_stack_00000000,
                     in_stack_00000004,in_stack_00000008);
  return uVar1;
}



/* file_load_into_object_buffer @ 8c0212b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 file_load_into_object_buffer(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c021330)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c021334)(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



/* FUN_8c021338 @ 8c021338 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021338(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c02136c)(ar4,0x10,ar4 + 0x34,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c021370 @ 8c021370 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021370(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0213b8)
                    (ar4,0x10,*(undefined4 *)(ar4 + 0x34),ar5,ar6,ar7,ar4 + 8,0,0,1);
  return uVar1;
}



/* FUN_8c0213bc @ 8c0213bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0213bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c021420)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c021424)(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



/* FUN_8c021428 @ 8c021428 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021428(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c021458)(ar4,0x10,ar4 + 0x34,ar5,ar6,1);
  return uVar1;
}



/* FUN_8c02145c @ 8c02145c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c02145c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0xffffffff;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[4] = 0;
  ar4[5] = 0;
  return ar4;
}



/* pack_ctor @ 8c02147c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * pack_ctor(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0214d0)(ar4 + 1,ar5,ar6,ar7);
  *ar4 = 0;
  *(undefined1 *)(DAT_8c0214d4 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0214d8 + (int)ar4) = 0xffffffff;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    *(undefined4 *)((int)ar4 + DAT_8c0214dc + iVar1 * 8) = 0xffffffff;
  }
  return ar4;
}



/* FUN_8c0214e0 @ 8c0214e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0214e0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_022198(ar4 + 4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* pack_open @ 8c021520 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
pack_open(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  undefined4 uVar2;
  
  *ar4 = 0;
  iVar1 = (*(code *)PTR_FUN_8c0215bc)(ar4 + 1,ar5,ar6,s4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_file_load_to_buffer_8c0215cc)
                      (DAT_8c0215c8,ar7,PTR_s_SeamanSound_mlt_8c0215c4 + 0x34,
                       (int)ar4 + DAT_8c0215c0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = (*(code *)PTR_file_load_to_buffer_8c0215cc)
                        (DAT_8c0215c8,s0,PTR_s_SeamanSound_mlt_8c0215c4 + 0x34,
                         (int)ar4 + DAT_8c0215d0);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        *ar4 = 1;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



/* pack_close_and_flush @ 8c0215d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 pack_close_and_flush(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*ar4 != 0) {
    (*(code *)PTR_FUN_8c0216f0)(ar4 + 1,ar5,ar6,ar7);
    iVar1 = (*(code *)PTR_FUN_8c0216f8)(DAT_8c0216f4,ar5,ar6,ar7);
    uVar2 = 1;
    if (iVar1 != 1) {
      if (-1 < *(int *)(DAT_8c0216fc + (int)ar4)) {
        (*(code *)PTR_FUN_8c021700)(ar4 + 1,*(undefined4 *)(DAT_8c0216fc + (int)ar4),ar6,ar7);
        (*(code *)PTR_FUN_8c021708)(ar4,DAT_8c021704,ar6,ar7);
        *(undefined4 *)(DAT_8c0216fc + (int)ar4) = 0xffffffff;
      }
      for (iVar1 = 0; uVar2 = 3, iVar1 < 3; iVar1 = iVar1 + 1) {
        if (-1 < *(int *)((int)ar4 + DAT_8c02170c + iVar1 * 8)) {
          (*(code *)PTR_FUN_8c02171c)
                    (ar4 + 1,*(undefined4 *)((int)ar4 + DAT_8c02170c + iVar1 * 8),
                     *(undefined4 *)((int)ar4 + DAT_8c021710 + iVar1 * 8),
                     *(int *)(DAT_8c021718 + (int)ar4) +
                     (*(uint *)(*(int *)((int)ar4 + DAT_8c021710 + iVar1 * 8) * 0x28 +
                                *(int *)(DAT_8c021714 + (int)ar4) + 0x20) & 0xfffffffe));
          *(undefined4 *)((int)ar4 + DAT_8c02170c + iVar1 * 8) = 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}



/* FUN_8c021720 @ 8c021720 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021720(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = (*(code *)PTR_FUN_8c021748)(ar4 + 1,0,ar5,ar7);
  }
  return uVar1;
}



/* FUN_8c02174c @ 8c02174c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c021762) */
/* WARNING: Removing unreachable block (ram,0x8c02174c) */
/* WARNING: Removing unreachable block (ram,0x8c02175e) */
/* WARNING: Removing unreachable block (ram,0x8c02176e) */
/* WARNING: Unknown calling convention */

int FUN_8c02174c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  uint in_fr1;
  double dVar3;
  undefined4 in_fr5;
  float in_fr4;
  undefined4 in_fr14;
  bool bVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined4 uStack_30;
  
  cVar7 = '\0';
  cVar6 = '\0';
  if (*ar4 == 0) {
    return 0;
  }
  uVar1 = FUN_8c013adc((int)in_fr4,ar5,ar6,ar7);
  ar5_00 = 0x14d;
  iVar2 = libgcc_divide_helper_0101e4(uVar1,0x14d,ar6,ar7);
  if ((iVar2 < 9) && (-1 < iVar2)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    case 0:
      iVar2 = 0;
      break;
    case 1:
      iVar2 = 0x10;
      break;
    case 2:
      iVar2 = 0x20;
      break;
    case 3:
      iVar2 = 0x30;
      break;
    case 4:
      iVar2 = 0x40;
      break;
    case 5:
      iVar2 = 0x50;
      break;
    case 6:
      iVar2 = 0x60;
      break;
    case 7:
      iVar2 = 0x70;
      break;
    case 8:
      goto switchD_8c021798_caseD_8;
    }
  }
  else {
switchD_8c021798_caseD_8:
    iVar2 = 0x7f;
  }
  if (cVar6 == '\0') {
    bVar4 = in_fr4 < 0.0;
  }
  else {
    bVar4 = (double)CONCAT44(in_fr14,in_fr4) < (double)(ulonglong)in_fr1;
  }
  if (bVar4) {
    iVar2 = -iVar2;
  }
  if (cVar7 == '\0') {
    dVar3 = (double)CONCAT44(in_fr5,in_fr1);
  }
  else {
    dVar3 = (double)CONCAT44(uStack_30,in_fr5);
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    iVar5 = (int)dVar3;
  }
  uVar1 = FUN_8c013adc(iVar5,ar5_00,ar6,ar7);
  iVar5 = libgcc_divide_helper_0101e4(uVar1,0x14d,ar6,ar7);
  if ((iVar5 < 9) && (-1 < iVar5)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar5) {
    case 0:
      uVar1 = 0x7f;
      break;
    case 1:
      uVar1 = 0x1e;
      break;
    case 2:
      uVar1 = 0x14;
      break;
    case 3:
      uVar1 = 7;
      break;
    case 4:
      uVar1 = 0;
      break;
    case 5:
      uVar1 = 0xfffffff9;
      break;
    case 6:
      uVar1 = 0xfffffff4;
      break;
    case 7:
      uVar1 = 0xffffffe7;
      break;
    case 8:
      uVar1 = 0xffffffe2;
    }
  }
  else {
    uVar1 = 0xffffff81;
  }
  iVar5 = FUN_8c0225f4(ar4 + 1,2,ar5,ar7);
  if (-1 < iVar5) {
    FUN_8c0227bc(ar4 + 1,iVar5,iVar2,ar7);
    FUN_8c022804(ar4 + 1,iVar5,uVar1,ar7);
    FUN_8c0226d8(ar4 + 1,iVar5,uVar1,ar7);
    iVar5 = FUN_8c022688(ar4 + 1,iVar5,uVar1,ar7);
  }
  return iVar5;
}



/* FUN_8c02190c @ 8c02190c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02190c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c021928)(ar4,1,ar6,ar7);
  return uVar1;
}



/* FUN_8c02192c @ 8c02192c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02192c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c021948)(ar4,3,ar6,ar7);
  return uVar1;
}



/* FUN_8c02194c @ 8c02194c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02194c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*ar4 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c021990)(ar4 + 1,ar5,0,ar7);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* FUN_8c021994 @ 8c021994 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021994(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0219b4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0219b8 @ 8c0219b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0219b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0219d8)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0219dc @ 8c0219dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0219dc(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = (*(code *)PTR_FUN_8c021a08)(ar4 + 1,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c021a0c @ 8c021a0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021a0c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c021a2c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c021a30 @ 8c021a30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021a30(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = (*(code *)PTR_FUN_8c021a5c)(ar4 + 1,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c021a60 @ 8c021a60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021a60(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = (*(code *)PTR_FUN_8c021a88)(ar4 + 1,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c021a8c @ 8c021a8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021a8c(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c021ab0)(ar4,*ar5,ar6,ar7);
  *ar5 = 0xffffffff;
  return 0xffffffff;
}



/* FUN_8c021ab4 @ 8c021ab4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021ab4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c021ad0)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c021ad4 @ 8c021ad4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021ad4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = 0x7f;
    (*(code *)PTR_FUN_8c021b08)(ar4 + 1,ar5,0x7f,ar7);
    uVar1 = (*(code *)PTR_FUN_8c021b0c)(ar4 + 1,ar5,uVar1,ar7);
  }
  return uVar1;
}



/* pack_acquire_entry_handle @ 8c021b10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int pack_acquire_entry_handle(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  int iVar1;
  
  if (*ar4 == 0) {
    ar5_00 = -1;
  }
  else {
    ar5_00 = (*(code *)PTR_handle_slot_alloc_8c021b98)(ar4 + 1,ar5,ar6,ar7);
    if (ar5_00 == -1) {
      ar5_00 = -1;
    }
    else {
      iVar1 = (*(code *)PTR_pack_find_entry_by_name_8c021b9c)(ar4,ar5,ar6,ar7);
      if (iVar1 == -1) {
        (*(code *)PTR_handle_slot_free_8c021ba0)(ar4 + 1,ar5_00,ar6,ar7);
        ar5_00 = -1;
      }
      else {
        *(int *)((int)ar4 + DAT_8c021ba4 + ar5_00 * 8) = ar5_00;
        *(int *)((int)ar4 + DAT_8c021ba8 + ar5_00 * 8) = iVar1;
      }
    }
  }
  return ar5_00;
}



/* pack_find_entry_by_name @ 8c021bac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 pack_find_entry_by_name(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  char acStack_8c [132];
  
  strcpy(acStack_8c,&DAT_8c12fc84,ar6,ar7,ar5);
  strcpy(acStack_8c,ar5,ar6,ar7,ar5);
  FUN_8c01437c(acStack_8c,&DAT_8c12fc85,ar6,ar7);
  iVar2 = 0;
  while( true ) {
    if ((0x7fff < iVar2) || (*(char *)(*(int *)(ar4 + 0x9ec0c) + iVar2 * 0x28) == '\0')) {
      return 0xffffffff;
    }
    if ((*(char *)(*(int *)(ar4 + 0x9ec0c) + iVar2 * 0x28) == acStack_8c[0]) &&
       (iVar1 = FUN_8c021c80(iVar2 * 0x28 + *(int *)(ar4 + 0x9ec0c),acStack_8c,ar6,ar7), iVar1 == 0)
       ) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



/* FUN_8c021c80 @ 8c021c80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021c80(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

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



/* pack_release_entry_handle @ 8c021ce8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int pack_release_entry_handle(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar4;
  if (((iVar1 != 0) && (-1 < ar5)) && (iVar1 = 3, ar5 < 3)) {
    *(undefined4 *)((int)ar4 + DAT_8c021d40 + ar5 * 8) = 0xffffffff;
    (*(code *)PTR_FUN_8c021d44)(ar4 + 1,ar5,ar6,ar7);
    iVar1 = (*(code *)PTR_handle_slot_free_8c021d48)(ar4 + 1,ar5,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c021d4c @ 8c021d4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021d4c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    (*(code *)PTR_FUN_8c021d88)(ar4 + 1,ar5,ar6,ar7);
    for (ar5_00 = 0; uVar1 = 3, ar5_00 < 3; ar5_00 = ar5_00 + 1) {
      (*(code *)PTR_FUN_8c021d8c)(ar4 + 1,ar5_00,ar6,ar7);
    }
  }
  return uVar1;
}



/* FUN_8c021d90 @ 8c021d90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c021d90(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  undefined4 uVar2;
  
  iVar1 = *ar4;
  if (((iVar1 != 0) && (-1 < ar5)) && (iVar1 = 3, ar5 < 3)) {
    uVar2 = ar6;
    ar6_00 = (*(code *)PTR_FUN_8c021e00)(ar4,ar7,ar6,ar7);
    uVar2 = (*(code *)PTR_FUN_8c021e04)(ar4,ar6,uVar2,ar7);
    (*(code *)PTR_FUN_8c021e08)(ar4 + 1,ar5,uVar2,ar7);
    iVar1 = (*(code *)PTR_FUN_8c021e0c)(ar4 + 1,ar5,ar6_00,ar7);
  }
  return iVar1;
}



/* FUN_8c021e10 @ 8c021e10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c021e10(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  
  ar4_00 = FUN_8c013adc(ar5,ar5,ar6,ar7);
  iVar1 = libgcc_divide_helper_0101e4(ar4_00,0x14d,ar6,ar7);
  if ((iVar1 < 9) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      iVar1 = 0;
      break;
    case 1:
      iVar1 = 1;
      break;
    case 2:
      iVar1 = 2;
      break;
    case 3:
      iVar1 = 3;
      break;
    case 4:
      iVar1 = 4;
      break;
    case 5:
      iVar1 = 5;
      break;
    case 6:
      iVar1 = 6;
      break;
    case 7:
      iVar1 = 7;
      break;
    case 8:
      iVar1 = 8;
    }
  }
  else {
    iVar1 = 0xf;
  }
  if (ar5 < 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}



/* FUN_8c021ec8 @ 8c021ec8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c021ec8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c021f0c)(ar5,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c021f14)(iVar1 * 0x78,DAT_8c021f10,ar6,ar7);
  return -iVar1;
}



/* FUN_8c021f18 @ 8c021f18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021f18(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [8];
  
  uVar1 = (*(code *)PTR_FUN_8c021f48)(ar4,ar5,auStack_8,auStack_c,auStack_10);
  return uVar1;
}



/* FUN_8c021f4c @ 8c021f4c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c021fe2) */
/* WARNING: Removing unreachable block (ram,0x8c021ff4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c021f4c(int *ar4,int ar5,int *ar6,int *ar7,int *s0)

{
  undefined4 uVar1;
  ushort *ar6_00;
  int *ar7_00;
  ushort auStack_18 [2];
  int iStack_14;
  undefined1 *puStack_c;
  
  puStack_c = &DAT_8c4366c0;
  if (*ar4 == 0) {
    return 2;
  }
  if ((ar5 < 0) || (2 < ar5)) {
    return 2;
  }
  ar6_00 = auStack_18;
  ar7_00 = ar7;
  iStack_14 = FUN_8c022a1c(ar4 + 1,ar5,ar6_00,ar7);
  if (iStack_14 == 1) {
    pack_release_entry_handle(ar4,ar5,ar6_00,ar7_00);
    return 1;
  }
  if (iStack_14 == 2) {
    return 3;
  }
  if (iStack_14 != 3) {
    return 2;
  }
  *ar6 = (int)(auStack_18[0] & 0xf0) >> 4;
  *ar7 = (int)(auStack_18[0] & 0xf00) >> 8;
  *s0 = (int)(auStack_18[0] & 0xf000) >> 0xc;
  if ((auStack_18[0] & 0xf) < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(auStack_18[0] & 0xf) {
    case 0:
      uVar1 = 5;
      break;
    default:
      uVar1 = 6;
      break;
    case 4:
    case 5:
    case 6:
      uVar1 = 7;
      break;
    case 7:
      goto switchD_8c022008_caseD_7;
    }
  }
  else {
switchD_8c022008_caseD_7:
    uVar1 = 8;
  }
  return uVar1;
}



/* pack_find_by_name_buffered @ 8c022068 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 pack_find_by_name_buffered(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*ar4 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined1 *)(ar4 + 0x27b05) = 0;
    strcpy(ar4 + 0x27b05,ar5,ar6,ar7,ar5);
    uVar1 = pack_find_entry_by_name(ar4,ar4 + 0x27b05,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0220bc @ 8c0220bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0220bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(DAT_8c0220cc + ar4) = 0xffffffff;
  iVar1 = DAT_8c0220d0;
  *(undefined1 *)(DAT_8c0220d0 + ar4) = 0;
  return iVar1;
}



/* FUN_8c0220d4 @ 8c0220d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0220d4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*ar4 == 0) {
    return 0;
  }
  if (*(char *)(DAT_8c0220fc + (int)ar4) == '\0') {
    return 0;
  }
  *(undefined4 *)(DAT_8c022100 + (int)ar4) = ar5;
  return 1;
}



/* FUN_8c022104 @ 8c022104 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c022104(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = (*(code *)PTR_FUN_8c022124)(ar4 + 1,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c022128 @ 8c022128 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c022128(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*ar4 != 0) {
    iVar1 = (*(code *)PTR_FUN_8c02217c)(ar5,ar5,ar6,ar7);
    iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c022188)
                      (iVar1 * DAT_8c022180,DAT_8c022184,ar6,ar7);
    uVar2 = (*(code *)PTR_FUN_8c02218c)(ar4 + 1,-iVar1,ar6,ar7);
  }
  return uVar2;
}



/* FUN_8c022190 @ 8c022190 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c022190(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4;
}



/* free_if_nonnull_wrap_022198 @ 8c022198 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_022198(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c0221c8 @ 8c0221c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0221c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *ar6_00;
  int iVar4;
  int aiStack_10 [2];
  
  for (iVar4 = 0; iVar4 < 7; iVar4 = iVar4 + 1) {
    *(undefined4 *)(iVar4 * 0x10 + ar4) = 0;
  }
  *(undefined4 *)(ar4 + 0x70) = 1;
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    *(undefined4 *)(DAT_8c022330 + ar4 + iVar4 * DAT_8c02232c) = 0;
  }
  (*(code *)PTR_thunk_FUN_8c25ecdc_8c022334)(ar7,0,ar6,ar7);
  iVar4 = ar4 + DAT_8c02233c;
  uVar1 = DAT_8c022338;
  (*(code *)PTR_s_E9040804_can_t_open_s_ADXF_L_261ba4_8c022340)(0,ar6,iVar4,DAT_8c022338);
  uVar3 = 0;
  (*(code *)PTR_thunk_FUN_8c25ecdc_8c022334)(PTR_LAB_8c022344,0,iVar4,uVar1);
  iVar4 = (*(code *)PTR_aica_driver_load_manatee_8c022348)(ar4,uVar3,iVar4,uVar1);
  if (iVar4 == 1) {
    ar6_00 = PTR_DAT_8c02234c;
    iVar4 = (*(code *)PTR_FUN_8c022350)(ar4,ar5,PTR_DAT_8c02234c,uVar1);
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      (*(code *)PTR_FUN_8c022354)(aiStack_10,ar5,ar6_00,uVar1);
      if (aiStack_10[0] == 0) {
        (*(code *)PTR_FUN_8c02235c)(DAT_8c022358,ar5,ar6_00,uVar1);
      }
      else {
        (*(code *)PTR_FUN_8c02235c)(DAT_8c022360,ar5,ar6_00,uVar1);
      }
      (*(code *)PTR_FUN_8c022364)(1,ar5,ar6_00,uVar1);
      uVar3 = DAT_8c022368;
      uVar2 = (*(code *)PTR_FUN_8c022370)(2,ar4 + DAT_8c02236c,DAT_8c022368,uVar1);
      *(undefined4 *)(ar4 + 0x74) = uVar2;
      (*(code *)PTR_FUN_8c022374)(*(undefined4 *)(ar4 + 0x74),2,uVar3,uVar1);
      for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
        uVar3 = DAT_8c022378;
        uVar2 = (*(code *)PTR_FUN_8c022370)
                          (2,ar4 + iVar4 * DAT_8c02232c + DAT_8c02237c,DAT_8c022378,uVar1);
        *(undefined4 *)(DAT_8c022380 + ar4 + iVar4 * DAT_8c02232c) = uVar2;
        (*(code *)PTR_FUN_8c022374)
                  (*(undefined4 *)(DAT_8c022380 + ar4 + iVar4 * DAT_8c02232c),1,uVar3,uVar1);
      }
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c022384 @ 8c022384 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c022384(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c022394)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* aica_driver_load_manatee @ 8c022398 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint aica_driver_load_manatee(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *ar6_00;
  undefined4 *ar7_00;
  undefined4 auStack_8 [2];
  
  ar7_00 = auStack_8;
  ar6_00 = PTR_DAT_8c0223f0;
  iVar1 = (*(code *)PTR_file_load_to_buffer_8c0223f8)
                    (DAT_8c0223f4,PTR_DAT_8c0223f0 + 1,PTR_DAT_8c0223f0,ar7_00);
  if (iVar1 != 0) {
    (*(code *)PTR_aica_driver_upload_8c0223fc)(ar4,auStack_8[0],ar6_00,ar7_00);
    (*(code *)PTR_FUN_8c022400)(DAT_8c0223f4,PTR_DAT_8c0223f0 + 1,PTR_DAT_8c0223f0,1);
  }
  return (uint)(iVar1 != 0);
}



/* aica_driver_upload @ 8c022404 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int aica_driver_upload(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int aiStack_10 [2];
  
  aiStack_10[0] = 0;
  ar6_00 = 0;
  ar5_00 = 0;
  iVar1 = (*(code *)PTR_FUN_8c022480)(0,0,0,ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c022484)(aiStack_10,ar5_00,ar6_00,ar7);
    if (iVar1 == 0) {
      ar7 = 0xffffffff;
      ar6_00 = 0;
      iVar1 = (*(code *)PTR_FUN_8c022488)(aiStack_10[0],ar5,0,0xffffffff,0);
      ar5_00 = ar5;
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_FUN_8c02248c)(aiStack_10[0],ar5,ar6_00,ar7);
        ar5_00 = ar5;
      }
    }
  }
  if (aiStack_10[0] != 0) {
    (*(code *)PTR_FUN_8c022490)(aiStack_10[0],ar5_00,ar6_00,ar7);
  }
  return iVar1;
}



/* FUN_8c022494 @ 8c022494 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c022494(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  undefined4 *ar7_00;
  undefined4 auStack_10 [2];
  
  ar7_00 = auStack_10;
  ar6_00 = ar6;
  iVar1 = (*(code *)PTR_file_load_to_buffer_8c0224f8)(DAT_8c0224f4,ar5,ar6,ar7_00);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c0224fc)(ar4,auStack_10[0],ar6_00,ar7_00);
    (*(code *)PTR_FUN_8c022500)(DAT_8c0224f4,ar5,ar6,1);
  }
  return (uint)(iVar1 != 0);
}



/* FUN_8c022504 @ 8c022504 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c022504(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int aiStack_10 [2];
  
  aiStack_10[0] = 0;
  ar5_00 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c02256c)(aiStack_10,ar5,ar6,ar7);
  if (iVar1 == 0) {
    ar7 = 0xffffffff;
    ar6 = 0;
    iVar1 = (*(code *)PTR_FUN_8c022570)(aiStack_10[0],ar5,0,0xffffffff,0);
    ar5_00 = ar5;
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_FUN_8c022574)(aiStack_10[0],ar5,ar6,ar7);
      ar5_00 = ar5;
    }
  }
  if (aiStack_10[0] != 0) {
    (*(code *)PTR_FUN_8c022578)(aiStack_10[0],ar5_00,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c02257c @ 8c02257c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02257c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  undefined4 auStack_8 [2];
  
  iVar1 = (*(code *)PTR_FUN_8c0225e0)(auStack_8,ar5,ar6,ar7);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c0225e4)(auStack_8[0],0,0,ar7);
    (*(code *)PTR_FUN_8c0225e8)(auStack_8[0],0x7f,0,ar7);
    ar7_00 = 0;
    iVar1 = (*(code *)PTR_FUN_8c0225ec)(auStack_8[0],ar5,ar6,0);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_FUN_8c0225f0)(auStack_8[0],ar5,ar6,ar7_00);
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c0225f0)(auStack_8[0],ar5,ar6,ar7_00);
    }
  }
  return iVar1;
}



/* FUN_8c0225f4 @ 8c0225f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0225f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0; (uVar2 < 7 && (*(int *)(uVar2 * 0x10 + ar4) != 0)); uVar2 = uVar2 + 1) {
  }
  if (uVar2 == 7) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c022684)(ar4 + uVar2 * 0x10 + 0xc,ar5,ar6,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(uVar2 * 0x10 + ar4) = 1;
      *(undefined4 *)(ar4 + uVar2 * 0x10 + 4) = ar5;
      *(undefined4 *)(ar4 + uVar2 * 0x10 + 8) = ar6;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* FUN_8c022688 @ 8c022688 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c022688(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(int *)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      (*(code *)PTR_FUN_8c0226d4)(*(undefined4 *)(ar4 + ar5 * 0x10 + 0xc),ar5,ar6,ar7);
      iVar1 = ar5 * 0x10;
      *(undefined4 *)(iVar1 + ar4) = 0;
    }
  }
  return iVar1;
}



/* FUN_8c0226d8 @ 8c0226d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0226d8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c02270c)(ar4,ar5,*(undefined4 *)(ar4 + ar5 * 0x10 + 8),ar7);
  return uVar1;
}



/* FUN_8c022710 @ 8c022710 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c022710(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(ar5 * 0x10 + ar4) == 1) {
    iVar2 = (*(code *)PTR_FUN_8c022774)
                      (*(undefined4 *)(ar4 + ar5 * 0x10 + 0xc),*(undefined4 *)(ar4 + ar5 * 0x10 + 4)
                       ,ar6,1);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c022778 @ 8c022778 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c022778(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(int *)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      iVar1 = (*(code *)PTR_FUN_8c0227b8)(*(undefined4 *)(ar4 + ar5 * 0x10 + 0xc),ar5,ar6,ar7);
    }
  }
  return iVar1;
}



/* FUN_8c0227bc @ 8c0227bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0227bc(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(int *)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      iVar1 = (*(code *)PTR_FUN_8c022800)(*(undefined4 *)(ar4 + ar5 * 0x10 + 0xc),ar6,0,ar7);
    }
  }
  return iVar1;
}



/* FUN_8c022804 @ 8c022804 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c022804(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(int *)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      iVar1 = (*(code *)PTR_FUN_8c022848)(*(undefined4 *)(ar4 + ar5 * 0x10 + 0xc),ar6,0,ar7);
    }
  }
  return iVar1;
}



/* handle_slot_alloc @ 8c02284c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 handle_slot_alloc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (2 < iVar2) {
      return 0xffffffff;
    }
    piVar1 = (int *)(ar4 + iVar2 * DAT_8c02288c + DAT_8c022890);
    if (*piVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  *piVar1 = 1;
  return iVar2;
}



/* FUN_8c022894 @ 8c022894 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c022894(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_FUN_8c0228e0)
                    (ar4,ar4 + ar5 * DAT_8c0228d8 + DAT_8c0228dc,ar6,ar7,in_stack_00000000);
  return uVar1;
}



/* FUN_8c0228e4 @ 8c0228e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0228e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c022914)(ar4,ar4 + 0x70,ar5,0,0);
  return uVar1;
}



/* FUN_8c022918 @ 8c022918 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c022918(undefined4 ar4,int *ar5,undefined4 ar6,int ar7,int s0)

{
  undefined4 uVar1;
  
  if ((*ar5 == 1) || (*ar5 == 3)) {
    (*(code *)PTR_s_E8101202_can_t_open_d_d_ADXT_26440a_8c022968)(ar5[1],0,ar6,ar7);
    *ar5 = 2;
    ar5[2] = ar7;
    ar5[3] = s0;
    ar5[4] = 0;
    ar5[5] = 0;
    ar5[6] = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c02296c @ 8c02296c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02296c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0229a4)(ar4,ar4 + ar5 * DAT_8c02299c + DAT_8c0229a0,ar6,ar7);
  return uVar1;
}



/* FUN_8c0229a8 @ 8c0229a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0229a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0229c4)(ar4,ar4 + 0x70,ar6,ar7);
  return uVar1;
}



/* FUN_8c0229c8 @ 8c0229c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0229c8(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar5;
  if (iVar1 == 2) {
    (*(code *)PTR_FUN_8c0229e8)(ar5[1],ar5,ar6,ar7);
    iVar1 = 3;
    *ar5 = 3;
  }
  return iVar1;
}



/* handle_slot_free @ 8c0229ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 handle_slot_free(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  
  piVar1 = (int *)(ar4 + ar5 * DAT_8c022a14 + DAT_8c022a18);
  if (*piVar1 != 0) {
    *piVar1 = 0;
  }
  return 0;
}



/* FUN_8c022a1c @ 8c022a1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c022a1c(int ar4,int ar5,undefined2 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar6_00;
  int *piVar3;
  uint uStack_18;
  int aiStack_14 [2];
  undefined1 *puStack_c;
  
  puStack_c = &DAT_8c4366c0;
  *ar6 = 0;
  piVar3 = (int *)(ar4 + ar5 * DAT_8c022b54 + DAT_8c022b58);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
LAB_8c022adc:
    uVar2 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        iVar1 = (*(code *)PTR_FUN_8c022b5c)(piVar3[1],ar5,ar6,ar7);
        if (iVar1 != 1) {
          if ((iVar1 == 2) || (iVar1 == 3)) {
            ar6_00 = aiStack_14;
            (*(code *)PTR_FUN_8c022b60)(piVar3[1],&uStack_18,ar6_00,ar7);
            if (0 < (int)uStack_18) {
              if ((uint)piVar3[5] < uStack_18) {
                piVar3[6] = 0;
              }
              else {
                piVar3[6] = piVar3[6] + 1;
                if (4 < (uint)piVar3[6]) {
                  piVar3[6] = 0;
                  return 1;
                }
              }
            }
            piVar3[5] = uStack_18;
            if (piVar3[3] == 0) {
              return 2;
            }
            if ((uint)piVar3[3] <= (uint)piVar3[4]) {
              return 2;
            }
            aiStack_14[0] =
                 (*(code *)PTR_libgcc_divide_helper_0101e4_8c022b64)(aiStack_14[0],0x1e,ar6_00,ar7);
            aiStack_14[0] = aiStack_14[0] * 5;
            iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c022b64)
                              (uStack_18,aiStack_14[0],ar6_00,ar7);
            if (piVar3[4] + 1U <= iVar1 + 3U) {
              *ar6 = *(undefined2 *)(piVar3[4] * 2 + piVar3[2]);
              piVar3[4] = piVar3[4] + 1;
              return 3;
            }
            return 2;
          }
          if (iVar1 != 4) {
            return 1;
          }
        }
        return 2;
      }
      if (iVar1 != 3) goto LAB_8c022adc;
    }
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_8c022b68 @ 8c022b68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c022b68(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(ar4 + ar5 * DAT_8c022ba4 + DAT_8c022ba8);
  iVar1 = *piVar2;
  if (iVar1 == 2) {
    iVar1 = (*(code *)PTR_FUN_8c022bac)(piVar2[1],0,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c022bb0 @ 8c022bb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c022bb0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c022bf4)(ar4,ar4 + ar5 * DAT_8c022bec + DAT_8c022bf0,ar6,ar7);
  return uVar1;
}



/* FUN_8c022bf8 @ 8c022bf8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c022bf8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c022c1c)(ar4,ar4 + 0x70,ar5,ar7);
  return uVar1;
}



/* FUN_8c022c20 @ 8c022c20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c022c20(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar5;
  if (iVar1 == 2) {
    iVar1 = (*(code *)PTR_FUN_8c022c44)(ar5[1],ar6,ar6,ar7);
  }
  return iVar1;
}



/* Vec3_ctor_zero @ 8c022c4c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c022c7a) */
/* WARNING: Removing unreachable block (ram,0x8c022c74) */
/* WARNING: Removing unreachable block (ram,0x8c022c66) */
/* WARNING: Removing unreachable block (ram,0x8c022c60) */
/* WARNING: Removing unreachable block (ram,0x8c022c56) */
/* WARNING: Removing unreachable block (ram,0x8c022c62) */
/* WARNING: Removing unreachable block (ram,0x8c022c6a) */
/* WARNING: Removing unreachable block (ram,0x8c022c76) */
/* WARNING: Removing unreachable block (ram,0x8c022c7c) */
/* WARNING: Unknown calling convention */

undefined4 * Vec3_ctor_zero(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[3] = &DAT_8c129a7c;
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  return ar4;
}



/* Vec3_ctor_copy @ 8c022c88 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c022ca2) */
/* WARNING: Removing unreachable block (ram,0x8c022c98) */
/* WARNING: Removing unreachable block (ram,0x8c022c8c) */
/* WARNING: Removing unreachable block (ram,0x8c022c8e) */
/* WARNING: Removing unreachable block (ram,0x8c022c9a) */
/* WARNING: Removing unreachable block (ram,0x8c022ca4) */
/* WARNING: Unknown calling convention */

undefined4 * Vec3_ctor_copy(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[3] = &DAT_8c129a7c;
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}



/* Vec3_dtor @ 8c022cb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Vec3_dtor(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (*(undefined **)(ar4 + 0xc) = &DAT_8c129a7c, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* Vec3_ctor_xyz @ 8c022ce8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c022cf2) */
/* WARNING: Removing unreachable block (ram,0x8c022cec) */
/* WARNING: Removing unreachable block (ram,0x8c022cf8) */
/* WARNING: Unknown calling convention */

undefined4 * Vec3_ctor_xyz(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  ar4[3] = &DAT_8c129a7c;
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4;
}



/* FUN_8c022d04 @ 8c022d04 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c022d0a) */
/* WARNING: Removing unreachable block (ram,0x8c022d04) */
/* WARNING: Removing unreachable block (ram,0x8c022d0e) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c022d04(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4 + 1;
}



/* FUN_8c022d14 @ 8c022d14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c022d14(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return ar5 + 4;
}



/* FUN_8c022d3c @ 8c022d3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c022d3c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c022da8)(s0,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c022dac @ 8c022dac callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c022dae) */
/* WARNING: Removing unreachable block (ram,0x8c022dac) */
/* WARNING: Removing unreachable block (ram,0x8c022db0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c022dac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined8 in_dr0;
  double dVar2;
  undefined4 in_fr15;
  double dVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar5_00 = ar5;
  FUN_8c022d14(ar4,ar5,ar6,ar7);
  uStack_1c = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 != '\0') {
    uStack_1c = (undefined4)in_dr0;
  }
  Vec3_length_sq(ar4,ar5_00,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uStack_20 = uVar1;
  if (cVar6 != '\0') {
    uStack_20 = (undefined4)in_dr0;
    uStack_1c = uVar1;
  }
  Vec3_length_sq(ar5,ar5_00,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(uStack_20,in_fr15);
    uStack_24 = uVar1;
  }
  else {
    dVar3 = (double)CONCAT44(uStack_1c,uVar1);
    uStack_24 = (int)in_dr0;
    uStack_20 = uVar1;
  }
  uVar1 = 8;
  if (cVar6 == '\0') {
    dVar2 = (double)CONCAT44(uStack_24,(int)in_dr0);
  }
  else {
    dVar2 = (double)CONCAT44(uStack_20,uStack_24);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * (float)((ulonglong)dVar2 >> 0x20),
                             SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar2;
  }
  if (cVar5 == '\0') {
    bVar4 = 0.0 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar4 = (double)((ulonglong)dVar2 & 0xffffffff) < dVar3;
  }
  if (bVar4) {
    FUN_8c013aec(ar5,ar5_00,ar6,ar7);
    FUN_8c022e5c(ar5,ar5_00,ar6,ar7);
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c022e5c @ 8c022e5c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c022e5c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0x8c022e74;
}



/* Vec3_length_sq @ 8c022e78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Vec3_length_sq(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  FUN_8c258030(ar4,ar5,ar6,ar7,in_stack_fffffff4);
  return 0;
}



/* Vec3_normalize @ 8c022ec0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c022ec0) */
/* WARNING: Removing unreachable block (ram,0x8c022ee6) */
/* WARNING: Unknown calling convention */

undefined4 Vec3_normalize(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 in_dr0;
  float fVar3;
  double dVar1;
  double dVar2;
  undefined4 uVar4;
  float in_fr15;
  undefined4 in_fr14;
  char cVar5;
  char cVar6;
  undefined4 in_stack_00000000;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar6 = '\0';
  cVar5 = '\0';
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  Vec3_length_sq(ar4,ar5,ar6,ar7);
  fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    in_fr15 = fVar3;
    fVar3 = fStack_1c;
  }
  fStack_1c = fVar3;
  if (in_fr15 == 0.0) {
    Vec3_assign(&fStack_1c,ar4,ar6,ar7);
  }
  else {
    if (cVar6 == '\0') {
      dVar1 = (double)CONCAT44(*(undefined4 *)ar4,(int)in_dr0);
    }
    else {
      dVar1 = *ar4;
    }
    if (cVar5 == '\0') {
      dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) / in_fr15,SUB84(dVar1,0));
    }
    else {
      dVar1 = dVar1 / (double)CONCAT44(in_fr14,in_fr15);
    }
    fStack_1c = SUB84(dVar1,0);
    if (cVar6 == '\0') {
      dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),fStack_1c);
      fStack_1c = (float)((ulonglong)dVar1 >> 0x20);
    }
    else {
      dVar2 = *(double *)((int)ar4 + 4);
    }
    if (cVar5 == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / (double)CONCAT44(in_fr14,in_fr15);
    }
    uStack_18 = SUB84(dVar2,0);
    if (cVar6 == '\0') {
      dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),uStack_18);
      uStack_18 = (int)((ulonglong)dVar2 >> 0x20);
    }
    else {
      dVar1 = ar4[1];
    }
    if (cVar5 == '\0') {
      dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) / in_fr15,SUB84(dVar1,0));
    }
    else {
      dVar1 = dVar1 / (double)CONCAT44(in_fr14,in_fr15);
    }
    uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    uStack_14 = uVar4;
    if (cVar6 != '\0') {
      uStack_14 = SUB84(dVar1,0);
      uStack_10 = uVar4;
    }
  }
  Vec3_ctor_copy(in_stack_00000000,&fStack_1c,ar6,ar7);
  Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}



/* Vec3_length @ 8c022f54 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c022f54) */
/* WARNING: Removing unreachable block (ram,0x8c022f7c) */
/* WARNING: Unknown calling convention */

double * Vec3_length(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  undefined8 in_dr0;
  double dVar2;
  float in_fr15;
  undefined4 in_fr14;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  Vec3_length_sq(ar4,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
    fVar1 = in_fr15;
  }
  else {
    fVar1 = (float)in_dr0;
  }
  if (fVar1 != 0.0) {
    if (cVar4 == '\0') {
      dVar2 = (double)CONCAT44(*(undefined4 *)ar4,fVar1);
    }
    else {
      dVar2 = *ar4;
    }
    if (cVar3 == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / (double)CONCAT44(in_fr14,in_fr15);
    }
    if (cVar4 == '\0') {
      *(int *)ar4 = (int)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),SUB84(dVar2,0));
    }
    else {
      *ar4 = dVar2;
      dVar2 = *(double *)((int)ar4 + 4);
    }
    if (cVar3 == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / (double)CONCAT44(in_fr14,in_fr15);
    }
    if (cVar4 == '\0') {
      *(int *)((int)ar4 + 4) = (int)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),SUB84(dVar2,0));
    }
    else {
      *(double *)((int)ar4 + 4) = dVar2;
      dVar2 = ar4[1];
    }
    if (cVar3 == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / (double)CONCAT44(in_fr14,in_fr15);
    }
    if (cVar4 == '\0') {
      *(int *)(ar4 + 1) = (int)((ulonglong)dVar2 >> 0x20);
    }
    else {
      ar4[1] = dVar2;
    }
  }
  return ar4;
}



/* FUN_8c022fc0 @ 8c022fc0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c022fc0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c022fc0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined8 in_dr0;
  undefined4 uVar1;
  char cVar2;
  undefined4 auStack_28 [4];
  undefined1 auStack_18 [24];
  
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar2 = '\0';
  Vec3_sub(ar5,ar4,ar6,ar7,auStack_28);
  Vec3_ctor_copy(auStack_18,auStack_28,ar6,ar7);
  ar5_00 = 0xffffffff;
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  Vec3_length_sq(auStack_18,ar5_00,ar6,ar7);
  if (cVar2 != '\0') {
    auStack_28[0] = uVar1;
  }
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return 0xc;
}



/* FUN_8c023040 @ 8c023040 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02305a) */
/* WARNING: Removing unreachable block (ram,0x8c023052) */
/* WARNING: Removing unreachable block (ram,0x8c02304a) */
/* WARNING: Removing unreachable block (ram,0x8c023040) */
/* WARNING: Removing unreachable block (ram,0x8c02304e) */
/* WARNING: Removing unreachable block (ram,0x8c023056) */
/* WARNING: Removing unreachable block (ram,0x8c02305e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c023040(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined8 in_dr0;
  undefined4 uVar1;
  char cVar2;
  undefined4 auStack_38 [4];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [24];
  
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar2 = '\0';
  Vec3_ctor_xyz(auStack_18,ar5,ar6,ar7);
  Vec3_sub(auStack_18,ar4,ar6,ar7,auStack_38);
  Vec3_ctor_copy(auStack_28,auStack_38,ar6,ar7);
  ar5_00 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
  Vec3_length_sq(auStack_28,ar5_00,ar6,ar7);
  if (cVar2 != '\0') {
    auStack_38[0] = uVar1;
  }
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return 0x14;
}



/* FUN_8c0230f0 @ 8c0230f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0230f0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 auStack_18 [20];
  
  (*(code *)PTR_Vec3_ctor_xyz_8c02312c)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c023130)(s0,auStack_18,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c023134)(auStack_18,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c023138 @ 8c023138 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023138(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 auStack_18 [20];
  
  (*(code *)PTR_Vec3_ctor_xyz_8c023174)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c023178)(s0,auStack_18,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c02317c)(auStack_18,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c023180 @ 8c023180 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023180(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 auStack_18 [20];
  
  (*(code *)PTR_Vec3_ctor_xyz_8c0231bc)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c0231c0)(s0,auStack_18,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0231c4)(auStack_18,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c0231c8 @ 8c0231c8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0231c8) */
/* WARNING: Removing unreachable block (ram,0x8c0231f6) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0231c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 ar5_00;
  float fVar2;
  ulonglong in_dr0;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c0230f0(ar4,ar5,ar6,ar7,auStack_1c);
  Vec3_length_sq(auStack_1c,ar5,ar6,ar7);
  if (cVar5 == '\0') {
    in_dr0 = in_dr0 >> 0x20;
  }
  fVar2 = (float)in_dr0;
  bVar3 = fVar2 == 0.0;
  ar5_00 = 0xffffffff;
  Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
  if (bVar3) {
    puVar1 = (undefined4 *)&DAT_8c023270;
  }
  else {
    FUN_8c0230f0(ar4,ar5_00,ar6,ar7,auStack_2c);
    FUN_8c022dac(ar4,auStack_2c,ar6,ar7);
    puVar1 = (undefined4 *)Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
  }
  if (cVar5 == '\0') {
    fVar2 = *(float *)(ar4 + 4);
  }
  if (cVar4 == '\0' && 0.0 < fVar2) {
    puVar1 = &DAT_8c023278;
  }
  return puVar1;
}



/* FUN_8c02327c @ 8c02327c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02327c) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c02327c(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined8 in_dr0;
  char cVar4;
  char cVar5;
  undefined8 uStack_20;
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c0230f0(ar4,ar5,ar6,ar7,(int)&uStack_20 + 4);
  FUN_8c022dac(&DAT_8c1259a8,(int)&uStack_20 + 4,ar6,ar7);
  uVar1 = in_dr0;
  if (cVar5 == '\0') {
    uStack_20 = CONCAT44(uStack_20._4_4_,(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = uStack_20;
  }
  uStack_20 = uVar1;
  puVar2 = (undefined4 *)Vec3_dtor((int)&uStack_20 + 4,0xffffffff,ar6,ar7);
  fVar3 = (float)in_dr0;
  if (cVar5 == '\0') {
    fVar3 = *ar4;
  }
  if (cVar4 == '\0' && fVar3 < 0.0) {
    puVar2 = &DAT_8c0232e4;
  }
  return puVar2;
}



/* FUN_8c0232e8 @ 8c0232e8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0232e8) */
/* WARNING: Removing unreachable block (ram,0x8c0232ea) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0232e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float extraout_fr1;
  float extraout_fr0;
  float extraout_fr0_00;
  float in_fr15;
  float fVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  uVar1 = 2;
  FUN_8c0231c8(ar5,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    in_fr15 = extraout_fr0;
  }
  FUN_8c0231c8(ar4,ar5,ar6,ar7);
  fVar2 = extraout_fr1;
  if (cVar4 == '\0') {
    fVar2 = in_fr15;
  }
  if (cVar3 == '\0' && fVar2 < extraout_fr0_00) {
    uVar1 = 1;
  }
  return uVar1;
}



/* FUN_8c023334 @ 8c023334 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023334(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 in_dr0;
  code *pcVar4;
  char cVar5;
  char cVar6;
  float afStack_6c [4];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar6 = '\0';
  cVar5 = '\0';
  uStack_c = 1;
  uVar2 = ar5;
  FUN_8c02327c(ar5,ar5,ar6,ar7);
  fVar1 = fVar3;
  if (cVar6 == '\0') {
    fVar1 = afStack_6c[0];
  }
  afStack_6c[0] = fVar1;
  FUN_8c02327c(ar4,uVar2,ar6,ar7);
  FUN_8c0230f0(ar4,uVar2,ar6,ar7,auStack_40);
  Vec3_ctor_copy(auStack_20,auStack_40,ar6,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_40,0xffffffff,ar6,ar7);
  FUN_8c0230f0(ar5,uVar2,ar6,ar7,auStack_50);
  Vec3_ctor_copy(auStack_30,auStack_50,ar6,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_50,0xffffffff,ar6,ar7);
  Vec3_set_xyz(auStack_5c,uVar2,ar6,ar7);
  FUN_8c023484(auStack_20,auStack_5c,ar6,ar7,afStack_6c);
  Vec3_assign(auStack_20,afStack_6c,ar6,ar7);
  Vec3_dtor(afStack_6c,0xffffffff,ar6,ar7);
  object_dtor_delete(auStack_5c,0xffffffff,ar6,ar7);
  FUN_8c022dac(auStack_20,auStack_30,ar6,ar7);
  if (cVar6 == '\0') {
    pcVar4 = (code *)0x42b40000;
  }
  else {
    fVar3 = 90.0;
    pcVar4 = Vec3_set_xyz;
  }
  if (cVar5 == '\0' && (float)pcVar4 < fVar3) {
    uVar2 = 4;
  }
  else {
    uVar2 = 3;
  }
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
  return uVar2;
}



/* FUN_8c023484 @ 8c023484 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023484(undefined8 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  float fVar1;
  double dVar2;
  int ar7_00;
  int ar6_01;
  int ar5_01;
  char cVar3;
  char cVar4;
  undefined4 in_stack_ffffff8c;
  undefined1 auStack_64 [12];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 auStack_4c [17];
  
  cVar4 = '\0';
  cVar3 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&stack0xffffff8c,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    uStack_58 = *(undefined4 *)ar4;
    uStack_54 = *(undefined4 *)((int)ar4 + 4);
    uStack_50 = *(undefined4 *)(ar4 + 1);
  }
  else {
    uStack_58 = (undefined4)*ar4;
    uStack_54 = (undefined4)*(undefined8 *)((int)ar4 + 4);
    uStack_50 = (undefined4)ar4[1];
    auStack_4c[0] = (undefined4)((ulonglong)ar4[1] >> 0x20);
  }
  FUN_8c25cddc(auStack_4c,ar5_00,ar6,ar7,in_stack_ffffff8c);
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,ar5[2]);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar7_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,ar5[1]);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar6_01 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar6_01 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*ar5);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar5_01 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar5_01 = (int)(dVar2 / dVar2);
  }
  FUN_8c256b0c(auStack_4c,ar5_01,ar6_01,ar7_00,in_stack_ffffff8c);
  ar6_00 = auStack_64;
  FUN_8c21279c(auStack_4c,&uStack_58,ar6_00,ar7_00,in_stack_ffffff8c);
  Vec3_ctor_copy(s0,&stack0xffffff8c,ar6_00,ar7_00);
  Vec3_dtor(&stack0xffffff8c,0xffffffff,ar6_00,ar7_00);
  return 0;
}



/* FUN_8c023570 @ 8c023570 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02357e) */
/* WARNING: Removing unreachable block (ram,0x8c02357a) */
/* WARNING: Removing unreachable block (ram,0x8c023582) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c023570(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 *ar6_00;
  float fVar1;
  double dVar2;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  int ar7_00;
  int ar6_01;
  int ar5_00;
  char cVar3;
  char cVar4;
  undefined1 auStack_70 [12];
  undefined4 uStack_64;
  undefined1 auStack_60 [12];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [17];
  
  cVar4 = '\0';
  cVar3 = '\0';
  Vec3_ctor_zero(auStack_70,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    uStack_54 = *(undefined4 *)ar4;
    uStack_50 = *(undefined4 *)((int)ar4 + 4);
    uStack_4c = *(undefined4 *)(ar4 + 1);
  }
  else {
    uStack_54 = (undefined4)*ar4;
    uStack_50 = (undefined4)*(undefined8 *)((int)ar4 + 4);
    uStack_4c = (undefined4)ar4[1];
    auStack_48[0] = (undefined4)((ulonglong)ar4[1] >> 0x20);
  }
  FUN_8c25cddc(auStack_48,ar5,ar6,ar7,in_fr4);
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,in_fr6);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar7_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,in_fr5);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar6_01 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar6_01 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,in_fr4);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar5_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar2 / dVar2);
  }
  FUN_8c256b0c(auStack_48,ar5_00,ar6_01,ar7_00,in_fr4);
  ar6_00 = auStack_60;
  FUN_8c21279c(auStack_48,&uStack_54,ar6_00,ar7_00,in_fr4);
  if (cVar4 != '\0') {
    uStack_64 = uStack_54;
  }
  Vec3_ctor_copy(s0,auStack_70,ar6_00,ar7_00);
  Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7_00);
  return 0;
}



/* FUN_8c023668 @ 8c023668 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023690) */
/* WARNING: Removing unreachable block (ram,0x8c023686) */
/* WARNING: Removing unreachable block (ram,0x8c02367c) */
/* WARNING: Removing unreachable block (ram,0x8c023676) */
/* WARNING: Removing unreachable block (ram,0x8c023672) */
/* WARNING: Removing unreachable block (ram,0x8c02367a) */
/* WARNING: Removing unreachable block (ram,0x8c023680) */
/* WARNING: Removing unreachable block (ram,0x8c02368a) */
/* WARNING: Removing unreachable block (ram,0x8c023694) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c023668(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  undefined4 *ar6_00;
  float fVar2;
  double dVar3;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  int ar7_00;
  int ar6_01;
  int ar5_00;
  char cVar4;
  char cVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [68];
  
  cVar5 = '\0';
  cVar4 = '\0';
  uStack_54 = *(undefined4 *)ar4;
  uStack_50 = *(undefined4 *)((int)ar4 + 4);
  uStack_4c = *(undefined4 *)(ar4 + 1);
  FUN_8c25cddc(auStack_48,ar5,ar6,ar7,in_fr4);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,in_fr6);
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
    dVar3 = (double)CONCAT44(0x47800000,in_fr5);
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
    dVar3 = (double)CONCAT44(0x47800000,in_fr4);
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
  FUN_8c256b0c(auStack_48,ar5_00,ar6_01,ar7_00,in_fr4);
  ar6_00 = &uStack_60;
  FUN_8c21279c(auStack_48,&uStack_54,ar6_00,ar7_00,in_fr4);
  if (cVar5 == '\0') {
    *(undefined4 *)ar4 = uStack_60;
    *(undefined4 *)((int)ar4 + 4) = uStack_5c;
    *(undefined4 *)(ar4 + 1) = uStack_58;
  }
  else {
    *ar4 = CONCAT44(uStack_5c,uStack_60);
    *(ulonglong *)((int)ar4 + 4) = CONCAT44(uStack_58,uStack_5c);
    ar4[1] = CONCAT44(uStack_54,uStack_58);
  }
  uVar1 = Vec3_ctor_copy(s0,ar4,ar6_00,ar7_00);
  return uVar1;
}



/* FUN_8c02374c @ 8c02374c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02374e) */
/* WARNING: Removing unreachable block (ram,0x8c02374c) */
/* WARNING: Removing unreachable block (ram,0x8c02375a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02374c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 ar7_00;
  float fVar3;
  undefined4 uVar4;
  double in_dr0;
  ulonglong uVar5;
  double dVar6;
  float fVar7;
  undefined4 in_fr4;
  undefined4 in_fr15;
  double dVar8;
  int iVar9;
  int ar5_00;
  char cVar10;
  char cVar11;
  undefined4 in_stack_00000000;
  undefined4 uStack_80;
  undefined4 auStack_78 [3];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 auStack_50 [17];
  
  cVar11 = '\0';
  cVar10 = '\0';
  FUN_8c0231c8(ar4,ar5,ar6,ar7);
  uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar11 == '\0') {
    in_fr15 = uVar4;
    uVar4 = auStack_78[0];
  }
  auStack_78[0] = uVar4;
  FUN_8c02327c(ar4,ar5,ar6,ar7);
  uStack_80 = SUB84(in_dr0,0);
  uStack_5c = uStack_80;
  dVar8 = in_dr0;
  if (cVar11 == '\0') {
    uStack_5c = 0;
    dVar8 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  uVar5 = (ulonglong)in_dr0 & 0xffffffff;
  if (cVar11 == '\0') {
    uStack_58 = 0;
  }
  else {
    uStack_54 = 0;
    uStack_58 = uStack_80;
  }
  Vec3_length_sq(ar4,ar5,ar6,ar7);
  uVar4 = (undefined4)(uVar5 >> 0x20);
  uStack_54 = uVar4;
  if (cVar11 != '\0') {
    uStack_54 = (undefined4)uVar5;
    auStack_50[0] = uVar4;
  }
  FUN_8c25cddc(auStack_50,ar5,ar6,ar7,in_fr4);
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,in_fr4);
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar6 = -3.7389520302648205e-250;
  }
  if (cVar10 == '\0') {
    fVar7 = (float)((ulonglong)dVar6 >> 0x20);
    fVar3 = SUB84(dVar6,0) / fVar7;
    dVar6 = (double)CONCAT44(fVar7,fVar3);
    iVar9 = (int)fVar3;
  }
  else {
    dVar6 = dVar6 / dVar6;
    iVar9 = (int)dVar6;
  }
  uVar4 = SUB84(dVar6,0);
  FUN_8c256a78(auStack_50,iVar9,ar6,ar7,in_fr4);
  puVar2 = &uStack_68;
  puVar1 = &uStack_5c;
  FUN_8c21279c(auStack_50,puVar1,puVar2,ar7,in_fr4);
  uStack_5c = uStack_68;
  uStack_58 = uStack_64;
  uStack_54 = uStack_60;
  FUN_8c25cddc(auStack_50,puVar1,puVar2,ar7,in_fr4);
  ar7_00 = 0;
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,uVar4);
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) * (float)((ulonglong)dVar6 >> 0x20),
                             SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 * dVar6;
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,SUB84(dVar6,0));
  }
  else {
    dVar6 = -3.7389520302648205e-250;
  }
  if (cVar10 == '\0') {
    fVar3 = (float)((ulonglong)dVar8 >> 0x20) / (float)((ulonglong)dVar6 >> 0x20);
    dVar8 = (double)CONCAT44(fVar3,SUB84(dVar8,0));
    iVar9 = (int)fVar3;
  }
  else {
    dVar8 = dVar8 / dVar6;
    fVar3 = (float)((ulonglong)dVar8 >> 0x20);
    iVar9 = (int)dVar8;
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,SUB84(dVar6,0));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    dVar8 = (double)CONCAT44(fVar3,SUB84(dVar8,0) * (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    dVar8 = dVar8 * dVar6;
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,SUB84(dVar6,0));
  }
  else {
    dVar6 = -3.7389520302648205e-250;
  }
  if (cVar10 == '\0') {
    ar5_00 = (int)(SUB84(dVar8,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar8 / dVar6);
  }
  FUN_8c256b0c(auStack_50,ar5_00,iVar9,0,in_fr4);
  puVar2 = &uStack_68;
  puVar1 = &uStack_5c;
  FUN_8c21279c(auStack_50,puVar1,puVar2,ar7_00,in_fr4);
  Vec3_ctor_zero(auStack_78,puVar1,puVar2,ar7_00);
  if (cVar11 != '\0') {
    uStack_6c = uStack_5c;
  }
  Vec3_ctor_copy(in_stack_00000000,auStack_78,puVar2,ar7_00);
  Vec3_dtor(auStack_78,0xffffffff,puVar2,ar7_00);
  return 0;
}



/* FUN_8c0238b4 @ 8c0238b4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0238be) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0238b4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  float fVar1;
  undefined8 in_dr0;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar2;
  undefined4 in_fr4;
  int ar7_00;
  int ar6_01;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined4 in_stack_00000000;
  undefined4 auStack_7c [3];
  undefined4 uStack_70;
  undefined1 auStack_6c [12];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar7 = '\0';
  cVar6 = '\0';
  Vec3_set_zero(&uStack_14,ar5,ar6,ar7);
  FUN_8c0231c8(ar4,ar5,ar6,ar7);
  uStack_14 = (undefined4)in_dr0;
  uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uVar4 = uVar3;
  if (cVar7 == '\0') {
    uVar4 = auStack_7c[0];
    uStack_14 = uVar3;
    uVar3 = uStack_10;
  }
  uStack_10 = uVar3;
  auStack_7c[0] = uVar4;
  FUN_8c02327c(ar4,ar5,ar6,ar7);
  uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uStack_10 = (undefined4)in_dr0;
  if (cVar7 == '\0') {
    uStack_60 = 0;
    uStack_58 = 0x3f800000;
    uStack_10 = uVar4;
  }
  else {
    auStack_54[0] = 0x3f800000;
    uStack_58 = uStack_10;
    uStack_60 = uStack_10;
    uStack_c = uVar4;
  }
  uStack_5c = uStack_60;
  FUN_8c25cddc(auStack_54,ar5,ar6,ar7,in_fr4);
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,uStack_c);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    ar7_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,uStack_10);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    ar6_01 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar6_01 = (int)(dVar2 / dVar2);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,uStack_14);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar5 = (int)(dVar2 / dVar2);
  }
  FUN_8c256b0c(auStack_54,iVar5,ar6_01,ar7_00,in_fr4);
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,in_fr4);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar5 = (int)(dVar2 / dVar2);
  }
  FUN_8c256ce0(auStack_54,iVar5,ar6_01,ar7_00,in_fr4);
  ar6_00 = auStack_6c;
  ar5_00 = &uStack_60;
  FUN_8c21279c(auStack_54,ar5_00,ar6_00,ar7_00,in_fr4);
  Vec3_ctor_zero(auStack_7c,ar5_00,ar6_00,ar7_00);
  if (cVar7 != '\0') {
    uStack_70 = uStack_60;
  }
  Vec3_ctor_copy(in_stack_00000000,auStack_7c,ar6_00,ar7_00);
  Vec3_dtor(auStack_7c,0xffffffff,ar6_00,ar7_00);
  object_dtor_delete(&uStack_14,0xffffffff,ar6_00,ar7_00);
  return 0;
}



/* Vec3_assign @ 8c023a14 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023a2a) */
/* WARNING: Removing unreachable block (ram,0x8c023a20) */
/* WARNING: Removing unreachable block (ram,0x8c023a14) */
/* WARNING: Removing unreachable block (ram,0x8c023a16) */
/* WARNING: Removing unreachable block (ram,0x8c023a22) */
/* WARNING: Removing unreachable block (ram,0x8c023a2c) */
/* WARNING: Unknown calling convention */

undefined4 * Vec3_assign(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}



/* Vec3_add @ 8c023a34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Vec3_add(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  double dVar1;
  undefined8 in_xd0;
  char cVar2;
  char cVar3;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  cVar3 = '\0';
  cVar2 = '\0';
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_1c = SUB84(dVar1,0) + (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar1 + dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),*(undefined4 *)((int)ar4 + 4));
  }
  else {
    fStack_1c = (float)in_xd0;
    in_xd0 = *(undefined8 *)((int)ar4 + 4);
    dVar1 = *(double *)((int)ar5 + 4);
  }
  if (cVar2 == '\0') {
    fStack_18 = SUB84(dVar1,0) + (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_18 = SUB84(dVar1 + dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)(ar4 + 1));
  }
  else {
    fStack_18 = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = ar5[1];
  }
  if (cVar2 == '\0') {
    fStack_14 = SUB84(dVar1,0) + (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_14 = SUB84(dVar1 + dVar1,0);
  }
  if (cVar3 != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  Vec3_ctor_copy(s0,&fStack_1c,ar6,ar7);
  Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c023aa0 @ 8c023aa0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023ad6) */
/* WARNING: Removing unreachable block (ram,0x8c023ad0) */
/* WARNING: Removing unreachable block (ram,0x8c023ac2) */
/* WARNING: Removing unreachable block (ram,0x8c023aba) */
/* WARNING: Removing unreachable block (ram,0x8c023aac) */
/* WARNING: Removing unreachable block (ram,0x8c023aa8) */
/* WARNING: Removing unreachable block (ram,0x8c023aaa) */
/* WARNING: Removing unreachable block (ram,0x8c023aae) */
/* WARNING: Removing unreachable block (ram,0x8c023ac0) */
/* WARNING: Removing unreachable block (ram,0x8c023ac4) */
/* WARNING: Removing unreachable block (ram,0x8c023ad4) */
/* WARNING: Removing unreachable block (ram,0x8c023ad8) */
/* WARNING: Unknown calling convention */

float * FUN_8c023aa0(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar4 + *ar5;
  ar4[1] = ar4[1] + ar5[1];
  ar4[2] = ar4[2] + ar5[2];
  return ar4;
}



/* Vec3_sub @ 8c023ae0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Vec3_sub(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  double dVar1;
  undefined8 in_xd0;
  char cVar2;
  char cVar3;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  cVar3 = '\0';
  cVar2 = '\0';
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_1c = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),*(undefined4 *)((int)ar4 + 4));
  }
  else {
    fStack_1c = (float)in_xd0;
    in_xd0 = *(undefined8 *)((int)ar4 + 4);
    dVar1 = *(double *)((int)ar5 + 4);
  }
  if (cVar2 == '\0') {
    fStack_18 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_18 = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)(ar4 + 1));
  }
  else {
    fStack_18 = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = ar5[1];
  }
  if (cVar2 == '\0') {
    fStack_14 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_14 = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  Vec3_ctor_copy(s0,&fStack_1c,ar6,ar7);
  Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c023b4c @ 8c023b4c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023b82) */
/* WARNING: Removing unreachable block (ram,0x8c023b7c) */
/* WARNING: Removing unreachable block (ram,0x8c023b6e) */
/* WARNING: Removing unreachable block (ram,0x8c023b66) */
/* WARNING: Removing unreachable block (ram,0x8c023b58) */
/* WARNING: Removing unreachable block (ram,0x8c023b54) */
/* WARNING: Removing unreachable block (ram,0x8c023b56) */
/* WARNING: Removing unreachable block (ram,0x8c023b5a) */
/* WARNING: Removing unreachable block (ram,0x8c023b6c) */
/* WARNING: Removing unreachable block (ram,0x8c023b70) */
/* WARNING: Removing unreachable block (ram,0x8c023b80) */
/* WARNING: Removing unreachable block (ram,0x8c023b84) */
/* WARNING: Unknown calling convention */

float * FUN_8c023b4c(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar4 - *ar5;
  ar4[1] = ar4[1] - ar5[1];
  ar4[2] = ar4[2] - ar5[2];
  return ar4;
}



/* Vec3_scale @ 8c023b8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Vec3_scale(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  double dVar1;
  undefined8 in_xd0;
  char cVar2;
  char cVar3;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  cVar3 = '\0';
  cVar2 = '\0';
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_1c = SUB84(dVar1,0) * (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar1 * dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar4 + 4));
  }
  else {
    fStack_1c = (float)in_xd0;
    in_xd0 = *(undefined8 *)((int)ar4 + 4);
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_18 = SUB84(dVar1,0) * (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_18 = SUB84(dVar1 * dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar4 + 1));
  }
  else {
    fStack_18 = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_14 = SUB84(dVar1,0) * (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_14 = SUB84(dVar1 * dVar1,0);
  }
  if (cVar3 != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  Vec3_ctor_copy(s0,&fStack_1c,ar6,ar7);
  Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c023bf4 @ 8c023bf4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023c24) */
/* WARNING: Removing unreachable block (ram,0x8c023c20) */
/* WARNING: Removing unreachable block (ram,0x8c023c12) */
/* WARNING: Removing unreachable block (ram,0x8c023c0e) */
/* WARNING: Removing unreachable block (ram,0x8c023c00) */
/* WARNING: Removing unreachable block (ram,0x8c023bfc) */
/* WARNING: Removing unreachable block (ram,0x8c023bfe) */
/* WARNING: Removing unreachable block (ram,0x8c023c02) */
/* WARNING: Removing unreachable block (ram,0x8c023c10) */
/* WARNING: Removing unreachable block (ram,0x8c023c14) */
/* WARNING: Removing unreachable block (ram,0x8c023c22) */
/* WARNING: Removing unreachable block (ram,0x8c023c26) */
/* WARNING: Unknown calling convention */

float * FUN_8c023bf4(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar4 * *ar5;
  ar4[1] = ar4[1] * *ar5;
  ar4[2] = ar4[2] * *ar5;
  return ar4;
}



/* FUN_8c023c30 @ 8c023c30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023c30(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  double dVar1;
  undefined8 in_xd0;
  char cVar2;
  char cVar3;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  cVar3 = '\0';
  cVar2 = '\0';
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_1c = SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar1 / dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar4 + 4));
  }
  else {
    fStack_1c = (float)in_xd0;
    in_xd0 = *(undefined8 *)((int)ar4 + 4);
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_18 = SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_18 = SUB84(dVar1 / dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar4 + 1));
  }
  else {
    fStack_18 = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_14 = SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_14 = SUB84(dVar1 / dVar1,0);
  }
  if (cVar3 != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  Vec3_ctor_copy(s0,&fStack_1c,ar6,ar7);
  Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c023c98 @ 8c023c98 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023cc8) */
/* WARNING: Removing unreachable block (ram,0x8c023cc4) */
/* WARNING: Removing unreachable block (ram,0x8c023cb6) */
/* WARNING: Removing unreachable block (ram,0x8c023cb2) */
/* WARNING: Removing unreachable block (ram,0x8c023ca4) */
/* WARNING: Removing unreachable block (ram,0x8c023ca0) */
/* WARNING: Removing unreachable block (ram,0x8c023ca2) */
/* WARNING: Removing unreachable block (ram,0x8c023ca6) */
/* WARNING: Removing unreachable block (ram,0x8c023cb4) */
/* WARNING: Removing unreachable block (ram,0x8c023cb8) */
/* WARNING: Removing unreachable block (ram,0x8c023cc6) */
/* WARNING: Removing unreachable block (ram,0x8c023cca) */
/* WARNING: Unknown calling convention */

float * FUN_8c023c98(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar4 / *ar5;
  ar4[1] = ar4[1] / *ar5;
  ar4[2] = ar4[2] / *ar5;
  return ar4;
}



/* FUN_8c023cd4 @ 8c023cd4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023cf2) */
/* WARNING: Removing unreachable block (ram,0x8c023ce8) */
/* WARNING: Removing unreachable block (ram,0x8c023ce0) */
/* WARNING: Removing unreachable block (ram,0x8c023cd6) */
/* WARNING: Removing unreachable block (ram,0x8c023cd4) */
/* WARNING: Removing unreachable block (ram,0x8c023cd8) */
/* WARNING: Removing unreachable block (ram,0x8c023ce6) */
/* WARNING: Removing unreachable block (ram,0x8c023cee) */
/* WARNING: Removing unreachable block (ram,0x8c023cf4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c023cd4(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  if (((*ar4 == *ar5) && (ar4[1] == ar5[1])) && (ar4[2] == ar5[2])) {
    return 1;
  }
  return 0;
}



/* FUN_8c023d04 @ 8c023d04 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023d22) */
/* WARNING: Removing unreachable block (ram,0x8c023d18) */
/* WARNING: Removing unreachable block (ram,0x8c023d10) */
/* WARNING: Removing unreachable block (ram,0x8c023d06) */
/* WARNING: Removing unreachable block (ram,0x8c023d04) */
/* WARNING: Removing unreachable block (ram,0x8c023d08) */
/* WARNING: Removing unreachable block (ram,0x8c023d16) */
/* WARNING: Removing unreachable block (ram,0x8c023d1e) */
/* WARNING: Removing unreachable block (ram,0x8c023d24) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c023d04(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  if (((*ar4 == *ar5) && (ar4[1] == ar5[1])) && (ar4[2] == ar5[2])) {
    return 0;
  }
  return 1;
}



/* Vec3_set_zero @ 8c023d34 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023d5e) */
/* WARNING: Removing unreachable block (ram,0x8c023d58) */
/* WARNING: Removing unreachable block (ram,0x8c023d4a) */
/* WARNING: Removing unreachable block (ram,0x8c023d44) */
/* WARNING: Removing unreachable block (ram,0x8c023d3a) */
/* WARNING: Removing unreachable block (ram,0x8c023d46) */
/* WARNING: Removing unreachable block (ram,0x8c023d4e) */
/* WARNING: Removing unreachable block (ram,0x8c023d5a) */
/* WARNING: Removing unreachable block (ram,0x8c023d60) */
/* WARNING: Unknown calling convention */

undefined4 * Vec3_set_zero(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  return ar4;
}



/* Vec3_set_xyz @ 8c023d68 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023d6e) */
/* WARNING: Removing unreachable block (ram,0x8c023d68) */
/* WARNING: Removing unreachable block (ram,0x8c023d74) */
/* WARNING: Unknown calling convention */

undefined4 * Vec3_set_xyz(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4;
}



/* FUN_8c023d7c @ 8c023d7c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023d82) */
/* WARNING: Removing unreachable block (ram,0x8c023d7c) */
/* WARNING: Removing unreachable block (ram,0x8c023d86) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c023d7c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4 + 1;
}



/* vec3_copy_8c023d8c @ 8c023d8c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023da2) */
/* WARNING: Removing unreachable block (ram,0x8c023d98) */
/* WARNING: Removing unreachable block (ram,0x8c023d8c) */
/* WARNING: Removing unreachable block (ram,0x8c023d8e) */
/* WARNING: Removing unreachable block (ram,0x8c023d9a) */
/* WARNING: Removing unreachable block (ram,0x8c023da4) */
/* WARNING: Unknown calling convention */

undefined4 * vec3_copy_8c023d8c(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}



/* FUN_8c023dac @ 8c023dac callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023dd6) */
/* WARNING: Removing unreachable block (ram,0x8c023dd0) */
/* WARNING: Removing unreachable block (ram,0x8c023dc2) */
/* WARNING: Removing unreachable block (ram,0x8c023dbc) */
/* WARNING: Removing unreachable block (ram,0x8c023db2) */
/* WARNING: Removing unreachable block (ram,0x8c023dbe) */
/* WARNING: Removing unreachable block (ram,0x8c023dc6) */
/* WARNING: Removing unreachable block (ram,0x8c023dd2) */
/* WARNING: Removing unreachable block (ram,0x8c023dd8) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c023dac(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[2] = 0x3f800000;
  ar4[1] = 0x3f800000;
  *ar4 = 0x3f800000;
  return ar4;
}



/* FUN_8c023de0 @ 8c023de0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023de6) */
/* WARNING: Removing unreachable block (ram,0x8c023de0) */
/* WARNING: Removing unreachable block (ram,0x8c023dec) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c023de0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4;
}



/* FUN_8c023df4 @ 8c023df4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023dfa) */
/* WARNING: Removing unreachable block (ram,0x8c023df4) */
/* WARNING: Removing unreachable block (ram,0x8c023dfe) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c023df4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4 + 1;
}



/* FUN_8c023e04 @ 8c023e04 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023e1a) */
/* WARNING: Removing unreachable block (ram,0x8c023e10) */
/* WARNING: Removing unreachable block (ram,0x8c023e04) */
/* WARNING: Removing unreachable block (ram,0x8c023e06) */
/* WARNING: Removing unreachable block (ram,0x8c023e12) */
/* WARNING: Removing unreachable block (ram,0x8c023e1c) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c023e04(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}



/* FUN_8c023e24 @ 8c023e24 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023e3a) */
/* WARNING: Removing unreachable block (ram,0x8c023e30) */
/* WARNING: Removing unreachable block (ram,0x8c023e24) */
/* WARNING: Removing unreachable block (ram,0x8c023e26) */
/* WARNING: Removing unreachable block (ram,0x8c023e32) */
/* WARNING: Removing unreachable block (ram,0x8c023e3c) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c023e24(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}



/* FUN_8c023e44 @ 8c023e44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023e44(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4;
}



/* free_if_nonnull_wrap_023e4c @ 8c023e4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_023e4c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c023e7c @ 8c023e7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023e7c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c25cddc(ar4,ar5,ar6,ar7,ar4);
  return uVar1;
}



/* FUN_8c023e98 @ 8c023e98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023e98(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c255d6c(ar4,ar5,ar6,ar7,ar5);
  return ar4;
}



/* FUN_8c023ebc @ 8c023ebc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023ed4) */
/* WARNING: Removing unreachable block (ram,0x8c023ece) */
/* WARNING: Removing unreachable block (ram,0x8c023ec8) */
/* WARNING: Removing unreachable block (ram,0x8c023ec4) */
/* WARNING: Removing unreachable block (ram,0x8c023ecc) */
/* WARNING: Removing unreachable block (ram,0x8c023ed2) */
/* WARNING: Removing unreachable block (ram,0x8c023ed6) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c023ebc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr4;
  
  uVar1 = FUN_8c256a78(ar4,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7,ar4);
  return uVar1;
}



/* FUN_8c023ef8 @ 8c023ef8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023f10) */
/* WARNING: Removing unreachable block (ram,0x8c023f0a) */
/* WARNING: Removing unreachable block (ram,0x8c023f04) */
/* WARNING: Removing unreachable block (ram,0x8c023f00) */
/* WARNING: Removing unreachable block (ram,0x8c023f08) */
/* WARNING: Removing unreachable block (ram,0x8c023f0e) */
/* WARNING: Removing unreachable block (ram,0x8c023f12) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c023ef8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr4;
  
  uVar1 = FUN_8c256ce0(ar4,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7,ar4);
  return uVar1;
}



/* FUN_8c023f34 @ 8c023f34 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023f4c) */
/* WARNING: Removing unreachable block (ram,0x8c023f46) */
/* WARNING: Removing unreachable block (ram,0x8c023f40) */
/* WARNING: Removing unreachable block (ram,0x8c023f3c) */
/* WARNING: Removing unreachable block (ram,0x8c023f44) */
/* WARNING: Removing unreachable block (ram,0x8c023f4a) */
/* WARNING: Removing unreachable block (ram,0x8c023f4e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c023f34(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr4;
  
  uVar1 = FUN_8c256d7c(ar4,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7,ar4);
  return uVar1;
}



/* FUN_8c023f70 @ 8c023f70 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023fb8) */
/* WARNING: Removing unreachable block (ram,0x8c023fb2) */
/* WARNING: Removing unreachable block (ram,0x8c023fac) */
/* WARNING: Removing unreachable block (ram,0x8c023fa4) */
/* WARNING: Removing unreachable block (ram,0x8c023f9e) */
/* WARNING: Removing unreachable block (ram,0x8c023f98) */
/* WARNING: Removing unreachable block (ram,0x8c023f90) */
/* WARNING: Removing unreachable block (ram,0x8c023f8a) */
/* WARNING: Removing unreachable block (ram,0x8c023f84) */
/* WARNING: Removing unreachable block (ram,0x8c023f7c) */
/* WARNING: Removing unreachable block (ram,0x8c023f78) */
/* WARNING: Removing unreachable block (ram,0x8c023f80) */
/* WARNING: Removing unreachable block (ram,0x8c023f88) */
/* WARNING: Removing unreachable block (ram,0x8c023f8e) */
/* WARNING: Removing unreachable block (ram,0x8c023f92) */
/* WARNING: Removing unreachable block (ram,0x8c023f9c) */
/* WARNING: Removing unreachable block (ram,0x8c023fa2) */
/* WARNING: Removing unreachable block (ram,0x8c023fa6) */
/* WARNING: Removing unreachable block (ram,0x8c023fb0) */
/* WARNING: Removing unreachable block (ram,0x8c023fb6) */
/* WARNING: Removing unreachable block (ram,0x8c023fba) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c023f70(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr5;
  float in_fr4;
  float in_fr6;
  
  uVar1 = FUN_8c256b0c(ar4,(int)((in_fr4 * 65536.0) / 360.0),(int)((in_fr5 * 65536.0) / 360.0),
                       (int)((in_fr6 * 65536.0) / 360.0),ar4);
  return uVar1;
}



/* FUN_8c023fdc @ 8c023fdc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023fdc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c256fec(ar4,ar5,ar6,ar7,ar4);
  return uVar1;
}



/* FUN_8c024088 @ 8c024088 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c024088(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_ctor_zero_8c0240b4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0240b4)(ar4 + 0x10,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0240b8)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0240bc @ 8c0240bc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0240f4) */
/* WARNING: Removing unreachable block (ram,0x8c0240ee) */
/* WARNING: Removing unreachable block (ram,0x8c0240e6) */
/* WARNING: Removing unreachable block (ram,0x8c0240de) */
/* WARNING: Removing unreachable block (ram,0x8c0240d6) */
/* WARNING: Removing unreachable block (ram,0x8c0240c2) */
/* WARNING: Removing unreachable block (ram,0x8c0240be) */
/* WARNING: Removing unreachable block (ram,0x8c0240bc) */
/* WARNING: Removing unreachable block (ram,0x8c0240c0) */
/* WARNING: Removing unreachable block (ram,0x8c0240d4) */
/* WARNING: Removing unreachable block (ram,0x8c0240d8) */
/* WARNING: Removing unreachable block (ram,0x8c0240e4) */
/* WARNING: Removing unreachable block (ram,0x8c0240e8) */
/* WARNING: Removing unreachable block (ram,0x8c0240f2) */
/* WARNING: Removing unreachable block (ram,0x8c0240f6) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0240bc(double *ar4,double *ar5,float *ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined4 in_fr3;
  double dVar4;
  undefined4 in_fr15;
  double dVar5;
  undefined4 uVar6;
  double in_xd0;
  char cVar7;
  char cVar8;
  undefined4 in_stack_00000000;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar1 = *(float *)(ar5 + 1) * ar6[2];
  dVar5 = (double)CONCAT44(*(float *)ar5 * *ar6 + *(float *)((int)ar5 + 4) * ar6[1] + fVar1,in_fr15)
  ;
  Vec3_ctor_zero(&uStack_30,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)ar5,in_fr3);
    dVar3 = (double)CONCAT44(*(undefined4 *)ar4,fVar1);
  }
  else {
    dVar4 = *ar5;
    dVar3 = *ar4;
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * (float)((ulonglong)dVar3 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),*(undefined4 *)((int)ar5 + 4));
  }
  else {
    in_xd0 = *(double *)((int)ar5 + 4);
    dVar3 = *(double *)((int)ar4 + 4);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) +
                             SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + dVar3 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),*(undefined4 *)(ar5 + 1));
  }
  else {
    in_xd0 = ar5[1];
    dVar3 = ar4[1];
  }
  if (cVar7 == '\0') {
    fVar1 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) -
                             ((float)((ulonglong)dVar4 >> 0x20) + fVar1),SUB84(dVar5,0));
  }
  else {
    fVar1 = SUB84(dVar3 * dVar3,0);
    dVar5 = dVar5 - (dVar4 + dVar3 * dVar3);
  }
  uVar6 = (undefined4)((ulonglong)dVar5 >> 0x20);
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)ar5,uVar6);
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 2),fVar1);
  }
  else {
    dVar4 = *ar5;
    dVar3 = ar4[2];
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * (float)((ulonglong)dVar3 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x14),*(undefined4 *)((int)ar5 + 4));
  }
  else {
    in_xd0 = *(double *)((int)ar5 + 4);
    dVar3 = *(double *)((int)ar4 + 0x14);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) +
                             SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + dVar3 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 3),*(undefined4 *)(ar5 + 1));
  }
  else {
    in_xd0 = ar5[1];
    dVar3 = ar4[3];
  }
  if (cVar7 == '\0') {
    fVar2 = (float)((ulonglong)dVar3 >> 0x20);
    fVar1 = SUB84(dVar3,0) * fVar2;
    dVar3 = (double)CONCAT44(fVar2,fVar1);
    fVar1 = SUB84(dVar4,0) / ((float)((ulonglong)dVar4 >> 0x20) + fVar1);
  }
  else {
    dVar3 = dVar3 * dVar3;
    fVar1 = SUB84((dVar4 + dVar3) / (dVar4 + dVar3),0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(uVar6,fVar1);
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),*(undefined4 *)(ar4 + 2));
  }
  else {
    in_xd0 = ar4[2];
  }
  fVar1 = SUB84(dVar5,0);
  if (cVar7 == '\0') {
    fVar2 = SUB84(dVar3,0) * fVar1;
  }
  else {
    fVar2 = SUB84(dVar3 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)ar4,fVar2);
  }
  else {
    dVar4 = *ar4;
  }
  if (cVar7 == '\0') {
    fVar2 = (float)((ulonglong)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44(fVar2,SUB84(dVar4,0) + fVar2);
  }
  else {
    dVar4 = dVar4 + dVar4;
  }
  if (cVar8 == '\0') {
    uStack_30 = SUB84(dVar4,0);
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)((int)ar4 + 0x14));
  }
  else {
    uStack_30 = SUB84(in_xd0,0);
    in_xd0 = *(double *)((int)ar4 + 0x14);
  }
  if (cVar7 == '\0') {
    fVar2 = SUB84(dVar4,0) * fVar1;
  }
  else {
    fVar2 = SUB84(dVar4 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),fVar2);
  }
  else {
    dVar4 = *(double *)((int)ar4 + 4);
  }
  if (cVar7 == '\0') {
    fVar2 = (float)((ulonglong)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44(fVar2,SUB84(dVar4,0) + fVar2);
  }
  else {
    dVar4 = dVar4 + dVar4;
  }
  if (cVar8 == '\0') {
    uStack_2c = SUB84(dVar4,0);
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 3));
  }
  else {
    uStack_2c = SUB84(in_xd0,0);
    in_xd0 = ar4[3];
  }
  if (cVar7 == '\0') {
    fVar1 = SUB84(dVar4,0) * fVar1;
  }
  else {
    fVar1 = SUB84(dVar4 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),fVar1);
  }
  else {
    dVar5 = ar4[1];
  }
  if (cVar7 == '\0') {
    fStack_28 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fStack_28 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 != '\0') {
    fStack_28 = SUB84(in_xd0,0);
    uStack_24 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  Vec3_ctor_copy(in_stack_00000000,&uStack_30,ar6,ar7);
  Vec3_dtor(&uStack_30,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c0241c4 @ 8c0241c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0241c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_vec3_clear_8c0241e4)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_vec3_clear_8c0241e4)(ar4 + 0x10,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0241e8 @ 8c0241e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0241e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_ctor_zero_8c024214)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c024214)(ar4 + 0x10,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c024218)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c02421c @ 8c02421c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02421c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_vec3_clear_8c02423c)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_vec3_clear_8c02423c)(ar4 + 0x10,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c024240 @ 8c024240 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c024240(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0242c0)(PTR_DAT_8c0242bc,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c0242c8;
  uVar2 = DAT_8c0242c4;
  (*(code *)PTR_global_list_push_8c0242cc)(uVar1,PTR_Vec3_dtor_8c0242c8,DAT_8c0242c4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0242c0)(PTR_DAT_8c0242d0,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0242c8;
  uVar2 = DAT_8c0242d4;
  (*(code *)PTR_global_list_push_8c0242cc)(uVar1,PTR_Vec3_dtor_8c0242c8,DAT_8c0242d4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0242c0)(PTR_DAT_8c0242d8,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0242c8;
  uVar2 = DAT_8c0242dc;
  (*(code *)PTR_global_list_push_8c0242cc)(uVar1,PTR_Vec3_dtor_8c0242c8,DAT_8c0242dc,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0242c0)(PTR_DAT_8c0242e0,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c0242cc)(uVar2,PTR_Vec3_dtor_8c0242c8,DAT_8c0242e4,ar7);
  return uVar2;
}



/* FUN_8c0242e8 @ 8c0242e8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0242e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c25cddc(0x8c27c1ec,ar5,ar6,ar7,in_PR);
  _DAT_8c27d1ec = 0;
  return 0;
}



/* FUN_8c02430c @ 8c02430c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02430c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c255d6c(_DAT_8c27d1ec * 0x40 + -0x73d83e14,ar4,ar6,ar7,ar4);
  return uVar1;
}



/* FUN_8c024340 @ 8c024340 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c024340(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c024374)(ar4,*DAT_8c02436c * 0x40 + DAT_8c024370,0x40,ar7);
  return uVar1;
}



/* FUN_8c024378 @ 8c024378 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c024378(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0243ac)(*DAT_8c0243a4 * 0x40 + DAT_8c0243a8,ar4,0x40,ar7);
  return uVar1;
}



/* FUN_8c0243b0 @ 8c0243b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0243b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c0f3e30(ar4,ar5,ar6,ar7);
  FUN_8c02d50c(ar4 + 0x4c,ar5,ar6,ar7);
  FUN_8c02ff40(ar4 + 200,ar5,ar6,ar7);
  FUN_8c036058(ar4 + 0xd8,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0xe8) = 1;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0xec) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0xec) = CONCAT44(0x3f800000,extraout_fr1);
  }
  return ar4;
}



/* FUN_8c02441c @ 8c02441c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02441c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_016ac4(ar4 + 0x38,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x2c,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 0x1c,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c02447c @ 8c02447c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02447c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char cVar1;
  
  cVar1 = '\0';
  Vec3_set_zero(ar4,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0xc,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x18,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = 0;
    *(undefined4 *)(ar4 + 0x28) = 0x43660000;
    *(undefined4 *)(ar4 + 0xc) = 0x43b40000;
    *(undefined4 *)(ar4 + 0x10) = 0x43b40000;
    *(undefined4 *)(ar4 + 0x14) = 0x43b40000;
    *(undefined4 *)(ar4 + 0x18) = 0xc3b40000;
    *(undefined4 *)(ar4 + 0x1c) = 0xc3b40000;
    *(undefined4 *)(ar4 + 0x20) = 0xc3b40000;
  }
  else {
    *(ulonglong *)(ar4 + 0x24) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x28) = 0x43b4000043660000;
    *(undefined8 *)(ar4 + 0xc) = 0xc3b4000043b40000;
    *(undefined8 *)(ar4 + 0x10) = 0xc3b4000043b40000;
    *(undefined8 *)(ar4 + 0x14) = 0xc3b4000043b40000;
    *(undefined8 *)(ar4 + 0x18) = 0x2402e000c3b40000;
    *(undefined8 *)(ar4 + 0x1c) = 0x2402e000c3b40000;
    *(undefined8 *)(ar4 + 0x20) = 0x2402e000c3b40000;
  }
  return ar4;
}



/* FUN_8c024518 @ 8c024518 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c024518(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  ar4[4] = 0;
  return ar4;
}



/* FUN_8c02452c @ 8c02452c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c02452c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint in_fr1;
  char cVar4;
  
  cVar4 = '\0';
  FUN_8c010120(ar4 + 8,FUN_8c024518,free_if_nonnull_wrap_0247e0,0x14,2);
  FUN_8c010120(ar4 + 0x12,FUN_8c024518,free_if_nonnull_wrap_0247e0,0x14,2);
  uVar3 = 4;
  pcVar2 = free_if_nonnull_wrap_016bfc;
  pcVar1 = FUN_8c015ab8;
  FUN_8c010120(ar4 + 0x1c,FUN_8c015ab8,free_if_nonnull_wrap_016bfc,4,1);
  FUN_8c015ab8(ar4 + 0x1d,pcVar1,pcVar2,uVar3);
  FUN_8c010120(ar4 + 0x1e,FUN_8c015224,free_if_nonnull_wrap_0153e4,8,2);
  uVar3 = 8;
  pcVar2 = free_if_nonnull_wrap_0153e4;
  pcVar1 = FUN_8c015224;
  FUN_8c010120(ar4 + 0x22,FUN_8c015224,free_if_nonnull_wrap_0153e4,8,2);
  FUN_8c015224(ar4 + 0x26,pcVar1,pcVar2,uVar3);
  FUN_8c015b94(ar4 + 0x2c,pcVar1,pcVar2,uVar3);
  Vec3_ctor_zero(ar4 + 0x36,pcVar1,pcVar2,uVar3);
  FUN_8c02447c(ar4 + 0x3e,pcVar1,pcVar2,uVar3);
  *ar4 = 0;
  ar4[2] = 0;
  ar4[1] = 0;
  ar4[3] = 0;
  ar4[5] = 0;
  ar4[4] = 0;
  ar4[6] = 0;
  ar4[7] = 0;
  ar4[0x28] = 0;
  ar4[0x2a] = 0;
  *(undefined2 *)(ar4 + 0x2b) = 0;
  *(undefined2 *)(ar4 + 0x29) = 0;
  ar4[0x2d] = 0;
  if (cVar4 == '\0') {
    ar4[0x2f] = 0x3f800000;
    ar4[0x2e] = 0x3f800000;
    ar4[0x30] = 0x3c23d70a;
  }
  else {
    *(ulonglong *)(ar4 + 0x2f) = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)(ar4 + 0x2e) = CONCAT44(0x3f800000,in_fr1);
    in_fr1 = 0x3c23d70a;
    *(undefined8 *)(ar4 + 0x30) = 0xc43c23d70a;
  }
  *(undefined2 *)(ar4 + 0x31) = 0;
  if (cVar4 == '\0') {
    ar4[0x32] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x32) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar4 == '\0') {
    ar4[0x33] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x33) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar4 == '\0') {
    ar4[0x34] = 0x3f800000;
    ar4[0x35] = 0x42c80000;
  }
  else {
    *(ulonglong *)(ar4 + 0x34) = CONCAT44(0x3f800000,in_fr1);
    in_fr1 = 0x42c80000;
    *(undefined8 *)(ar4 + 0x35) = 0xe842c80000;
  }
  if (cVar4 == '\0') {
    ar4[0x3a] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x3a) = (ulonglong)in_fr1;
  }
  if (cVar4 == '\0') {
    ar4[0x3b] = 0x3f800000;
    ar4[0x3c] = 0x43160000;
    ar4[0x3d] = 0x43480000;
  }
  else {
    *(ulonglong *)(ar4 + 0x3b) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(ar4 + 0x3c) = 0xf443160000;
    *(undefined8 *)(ar4 + 0x3d) = 0x4f222fe643480000;
  }
  return ar4;
}



/* FUN_8c024758 @ 8c024758 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c024758(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    object_dtor_delete(ar4 + 0x18,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0xc,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    object_dtor_delete(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_0247b0 @ 8c0247b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0247b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* free_if_nonnull_wrap_0247e0 @ 8c0247e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0247e0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c024810 @ 8c024810 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c024810(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 1;
  ar4[1] = 1;
  ar4[2] = 1;
  return ar4;
}



/* FUN_8c024824 @ 8c024824 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined2 * FUN_8c024824(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c024844)(ar4 + 2,ar5,ar6,ar7);
  *ar4 = 0;
  return ar4;
}



/* FUN_8c024848 @ 8c024848 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c024848(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_ctor_zero_8c024930)(ar4 + 8,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c024930)(ar4 + 0xc,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c024934)(ar4 + 0x10,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c024930)(ar4 + 0x13,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c024930)(ar4 + 0x17,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c024934)(ar4 + 0x1b,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c024930)((int)ar4 + DAT_8c024938,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c024934)((int)ar4 + DAT_8c02493c,ar5,ar6,ar7);
  ar4[6] = 0;
  ar4[7] = 0;
  ar4[4] = 0;
  ar4[5] = 0;
  ar4[3] = 0;
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  *(undefined4 *)(DAT_8c024940 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c024944 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c024948 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c02494c + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c024950 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c024954 + (int)ar4) = 0;
  *(undefined2 *)(DAT_8c024958 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c02495c + (int)ar4) = 0;
  *(undefined2 *)(DAT_8c024960 + (int)ar4) = 0;
  *(undefined2 *)(DAT_8c024964 + (int)ar4) = 0;
  return ar4;
}



/* s_GRAPHICS_COMMON_02496e @ 8c024968 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int s_GRAPHICS_COMMON_02496e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  undefined **ar5_00;
  undefined4 uVar4;
  char *ar6_00;
  undefined4 ar7_00;
  char cVar5;
  undefined4 in_stack_ffffffd8;
  
  cVar5 = '\0';
  _DAT_8c27d1fc = &DAT_8c12fcac;
  _DAT_8c27d200 = 300;
  _DAT_8c27d204 = &DAT_8c12fd28;
  _DAT_8c27d208 = 6;
  _DAT_8c27d20c = &DAT_8c12fd34;
  _DAT_8c27d210 = 0x10;
  _DAT_8c27d214 = &DAT_8c12fd58;
  _DAT_8c27d218 = 6;
  _DAT_8c27d21c = &DAT_8c12fd64;
  _DAT_8c27d220 = 0x10;
  _DAT_8c27d224 = &DAT_8c12fd40;
  _DAT_8c27d228 = 6;
  _DAT_8c27d22c = &DAT_8c12fd4c;
  _DAT_8c27d230 = 0x10;
  _DAT_8c27d234 = &DAT_8c12fd70;
  _DAT_8c27d238 = 8;
  _DAT_8c27d23c = &DAT_8c162858;
  _DAT_8c27d240 = 0x8c1651ec;
  _DAT_8c27d244 = &DAT_8c167b80;
  _DAT_8c27d248 = &DAT_8c16a514;
  _DAT_8c27d24c = &DAT_8c16cea8;
  _DAT_8c27d354 = 10;
  _DAT_8c27d356 = 5;
  _DAT_8c27d358 = 5;
  _DAT_8c27d35a = 5;
  _DAT_8c27d35c = 5;
  _DAT_8c27d250 = &DAT_8c16f83c;
  _DAT_8c27d254 = &DAT_8c1721d0;
  _DAT_8c27d258 = &DAT_8c174b64;
  _DAT_8c27d25c = &DAT_8c1774f8;
  _DAT_8c27d260 = &DAT_8c179e8c;
  _DAT_8c27d35e = 10;
  _DAT_8c27d360 = 5;
  _DAT_8c27d362 = 5;
  _DAT_8c27d364 = 5;
  _DAT_8c27d366 = 5;
  _DAT_8c27d264 = &DAT_8c1a0e38;
  _DAT_8c27d268 = &DAT_8c1a37cc;
  _DAT_8c27d26c = &DAT_8c1a6160;
  _DAT_8c27d270 = &DAT_8c1a0e38;
  _DAT_8c27d274 = &DAT_8c1a8af4;
  _DAT_8c27d368 = 0x1e;
  _DAT_8c27d36a = 5;
  _DAT_8c27d36c = 5;
  _DAT_8c27d36e = 5;
  _DAT_8c27d370 = 5;
  _DAT_8c27d278 = &DAT_8c1d4dc8;
  _DAT_8c27d27c = &DAT_8c1d775c;
  _DAT_8c27d280 = &DAT_8c1da0f0;
  _DAT_8c27d284 = &DAT_8c1d4dc8;
  _DAT_8c27d288 = &DAT_8c1dca84;
  _DAT_8c27d372 = 0xf;
  _DAT_8c27d374 = 5;
  _DAT_8c27d376 = 5;
  _DAT_8c27d378 = 5;
  _DAT_8c27d37a = 5;
  _DAT_8c27d28c = &DAT_8c17c820;
  _DAT_8c27d290 = &DAT_8c17c820;
  _DAT_8c27d294 = &DAT_8c17f1b4;
  _DAT_8c27d298 = &DAT_8c181b48;
  _DAT_8c27d29c = &DAT_8c1844dc;
  _DAT_8c27d37c = 10;
  _DAT_8c27d37e = 5;
  _DAT_8c27d380 = 5;
  _DAT_8c27d382 = 5;
  _DAT_8c27d384 = 5;
  _DAT_8c27d2a0 = &DAT_8c1967e8;
  _DAT_8c27d2a4 = &DAT_8c19917c;
  _DAT_8c27d2a8 = &DAT_8c19bb10;
  _DAT_8c27d2ac = &DAT_8c1967e8;
  _DAT_8c27d2b0 = &DAT_8c19e4a4;
  _DAT_8c27d386 = 0xf;
  _DAT_8c27d388 = 5;
  _DAT_8c27d38a = 5;
  _DAT_8c27d38c = 5;
  _DAT_8c27d38e = 5;
  _DAT_8c27d2b4 = &DAT_8c1c5450;
  _DAT_8c27d2b8 = &DAT_8c1ca778;
  _DAT_8c27d2bc = &DAT_8c1cd10c;
  _DAT_8c27d2c0 = &DAT_8c1cfaa0;
  _DAT_8c27d2c4 = &DAT_8c1d2434;
  _DAT_8c27d390 = 0x1e;
  _DAT_8c27d392 = 5;
  _DAT_8c27d394 = 5;
  _DAT_8c27d396 = 5;
  _DAT_8c27d398 = 5;
  _DAT_8c27d2c8 = &DAT_8c1ab488;
  _DAT_8c27d2cc = &DAT_8c1ade1c;
  _DAT_8c27d2d0 = &DAT_8c1b07b0;
  _DAT_8c27d2d4 = &DAT_8c1b3144;
  _DAT_8c27d2d8 = &DAT_8c1b5ad8;
  _DAT_8c27d39a = 10;
  _DAT_8c27d39c = 5;
  _DAT_8c27d39e = 5;
  _DAT_8c27d3a0 = 5;
  _DAT_8c27d3a2 = 5;
  _DAT_8c27d2dc = &DAT_8c1b846c;
  _DAT_8c27d2e0 = &DAT_8c1b846c;
  _DAT_8c27d2e4 = &DAT_8c1bae00;
  _DAT_8c27d2e8 = &DAT_8c1bd794;
  _DAT_8c27d2ec = &DAT_8c1c0128;
  _DAT_8c27d3a4 = 0xf;
  _DAT_8c27d3a6 = 5;
  ar7_00 = 5;
  _DAT_8c27d3a8 = 5;
  _DAT_8c27d3aa = 5;
  _DAT_8c27d3ac = 5;
  _DAT_8c27d2f0 = &DAT_8c1df418;
  _DAT_8c27d2f4 = &DAT_8c1e4740;
  _DAT_8c27d2f8 = &DAT_8c1e70d4;
  _DAT_8c27d2fc = &DAT_8c1e9a68;
  _DAT_8c27d300 = &DAT_8c1ec3fc;
  _DAT_8c27d3ae = 0xf;
  _DAT_8c27d3b0 = 5;
  _DAT_8c27d3b2 = 5;
  _DAT_8c27d3b4 = 5;
  _DAT_8c27d3b6 = 5;
  _DAT_8c27d304 = &DAT_8c189804;
  _DAT_8c27d308 = &DAT_8c18c198;
  _DAT_8c27d30c = &DAT_8c18eb2c;
  _DAT_8c27d310 = &DAT_8c1914c0;
  _DAT_8c27d3b8 = 10;
  _DAT_8c27d3ba = 8;
  _DAT_8c27d3bc = 8;
  _DAT_8c27d3be = 8;
  _DAT_8c27d314 = &DAT_8c186e70;
  _DAT_8c27d3c0 = 10;
  _DAT_8c27d318 = &DAT_8c1c2abc;
  _DAT_8c27d3c2 = 0x1e;
  _DAT_8c27d31c = &DAT_8c16a514;
  _DAT_8c27d320 = &DAT_8c162858;
  _DAT_8c27d3c4 = 3;
  _DAT_8c27d3c6 = 3;
  _DAT_8c27d324 = &DAT_8c16a514;
  _DAT_8c27d328 = &DAT_8c162858;
  _DAT_8c27d3c8 = 8;
  _DAT_8c27d3ca = 8;
  _DAT_8c27d33c = &DAT_8c1c7de4;
  _DAT_8c27d340 = &DAT_8c1c5450;
  _DAT_8c27d3d4 = 3;
  _DAT_8c27d3d6 = 3;
  _DAT_8c27d344 = &DAT_8c1c7de4;
  _DAT_8c27d348 = &DAT_8c1c5450;
  _DAT_8c27d3d8 = 8;
  _DAT_8c27d3da = 8;
  _DAT_8c27d32c = &DAT_8c1e1dac;
  _DAT_8c27d330 = &DAT_8c1df418;
  _DAT_8c27d3cc = 3;
  _DAT_8c27d3ce = 3;
  _DAT_8c27d334 = &DAT_8c1e1dac;
  _DAT_8c27d338 = &DAT_8c1df418;
  _DAT_8c27d3d0 = 8;
  _DAT_8c27d3d2 = 8;
  _DAT_8c27d34c = &DAT_8c193e54;
  _DAT_8c27d350 = &DAT_8c162858;
  _DAT_8c27d3dc = 4;
  _DAT_8c27d3de = 4;
  FUN_8c015508(0x8c27d3e0,&DAT_8c143df8,&DAT_8c27d1fc,5,in_stack_ffffffd8);
  puVar1 = _DAT_8c27d23c;
  _DAT_8c27c1e8 = (*_DAT_8c27d23c >> 0x10) + 2;
  uVar4 = 8;
  FUN_8c23c814(0x8c279308,_DAT_8c27d23c,8,ar7_00);
  iVar2 = _DAT_8c27c1e8 + -1;
  puVar3 = (uint *)((_DAT_8c27c1e8 + -1) * 4 + -0x73d86cf8);
  if (cVar5 == '\0') {
    *puVar3 = puVar1[iVar2];
  }
  else {
    *(undefined8 *)puVar3 = *(undefined8 *)(puVar1 + iVar2);
  }
  FUN_8c015508(0x8c27d3e4,&PTR_DAT_8c14442c,uVar4,ar7_00,iVar2);
  FUN_8c015ad4(0x8c27d3e8,&DAT_8c146400,uVar4,ar7_00,iVar2);
  Class_129920_m0_015248(0x8c27d3ec,&PTR_PTR_8c143e1c,uVar4,ar7_00,iVar2);
  ar5_00 = &PTR_PTR_8c1444b0;
  Class_129920_m0_015248(0x8c27d3f4,&PTR_PTR_8c1444b0,uVar4,ar7_00);
  uVar4 = get_field_4_0253e4(0x8c27d3ec,ar5_00,uVar4,ar7_00);
  ar6_00 = "GRAPHICS\\COMMON";
  iVar2 = FUN_8c020ef0(ar4,"COMMON_EYE","GRAPHICS\\COMMON",uVar4);
  if (iVar2 == 0) {
    uVar4 = 2;
    ar6_00 = (char *)0x0;
    report_error_message("Failed to load eye textuer..",&DAT_8c12fde4,0,2);
  }
  uVar4 = get_field_4_0253e4(0x8c27d3f4,0x8c27d3f4,ar6_00,uVar4);
  iVar2 = FUN_8c020ef0(ar4,"COMMON_SCSI","GRAPHICS\\COMMON",uVar4);
  if (iVar2 == 0) {
    iVar2 = report_error_message("Failed to load scsi textuer..",&DAT_8c12fde4,0,2);
  }
  return iVar2;
}



/* get_field_4_0253e4 @ 8c0253e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_4_0253e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}



/* FUN_8c0253ec @ 8c0253ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0253ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    object_dtor_delete(ar4 + 0xb8,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x84,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x6c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x5c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x4c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x40,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x30,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 0x20,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c025490 @ 8c025490 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c025490(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0254d0 @ 8c0254d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0254d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
                undefined4 s8,undefined4 s12,undefined4 s16)

{
  undefined4 uVar1;
  undefined4 ar7_00;
  undefined8 *puVar2;
  undefined4 ar5_00;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  iVar3 = ar4;
  FUN_8c0f4040(ar4,ar5,ar6,s0,s4);
  *(undefined **)(ar4 + 8) = &DAT_8c129a88;
  uVar1 = rand(iVar3,ar5,ar6,s0);
  ar7_00 = libgcc_divide_helper_01031c(uVar1,2,ar6,s0);
  ar5_00 = 0;
  uVar1 = ar7;
  FUN_8c02b9a8(ar4 + 0x174,0,ar7,ar7_00);
  uVar1 = FUN_8c02bfd8(ar4 + 0x174,ar5_00,uVar1,ar7_00);
  iVar3 = (int)(short)uVar1;
  FUN_8c034c50(ar4 + 0x2dc,iVar3,ar7,ar7_00);
  FUN_8c02b1dc(ar4 + 0x310,iVar3,ar7,ar7_00);
  Vec3_set_zero(ar4 + 0x338,iVar3,ar7,ar7_00);
  FUN_8c024848(ar4 + 0x344,iVar3,ar7,ar7_00);
  FUN_8c023dac(ar4 + 0x480,iVar3,ar7,ar7_00);
  FUN_8c02911c(ar4,iVar3,ar7,ar7_00);
  *(undefined4 *)(ar4 + 0x328) = s8;
  *(undefined4 *)(ar4 + 0x32c) = s12;
  *(undefined4 *)(ar4 + 0x410) = s16;
  puVar2 = (undefined8 *)(*(int *)(ar4 + 0x328) + 0xbc);
  if (cVar8 == '\0') {
    *(undefined4 *)(ar4 + 0x170) = *(undefined4 *)puVar2;
  }
  else {
    *(undefined8 *)(ar4 + 0x170) = *puVar2;
  }
  puVar2 = (undefined8 *)(*(int *)(ar4 + 0x328) + 0xb8);
  if (cVar8 == '\0') {
    uVar1 = *(undefined4 *)puVar2;
    *(undefined4 *)(ar4 + 100) = uVar1;
    *(undefined4 *)(ar4 + 0x60) = uVar1;
    *(undefined4 *)(ar4 + 0x5c) = uVar1;
  }
  else {
    uVar5 = *puVar2;
    *(undefined8 *)(ar4 + 100) = uVar5;
    *(undefined8 *)(ar4 + 0x60) = uVar5;
    *(undefined8 *)(ar4 + 0x5c) = uVar5;
  }
  puVar2 = (undefined8 *)(*(int *)(ar4 + 0x328) + 0xe8);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x60),*(undefined4 *)puVar2);
  }
  else {
    in_xd0 = *puVar2;
    dVar6 = *(double *)(ar4 + 0x60);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x408) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x408) = in_xd0;
  }
  puVar2 = (undefined8 *)(*(int *)(ar4 + 0x328) + 0xec);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)puVar2);
  }
  else {
    in_xd0 = *puVar2;
    dVar6 = *(double *)(ar4 + 0x5c);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x40c) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x40c) = in_xd0;
  }
  return ar4;
}



/* CAnimal_m0_025688 @ 8c025688 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int CAnimal_m0_025688(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c129a88;
    free_if_nonnull_wrap_016ac4(ar4 + 0x480,0xffffffff,ar6,ar7);
    FUN_8c0253ec(ar4 + 0x344,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x338,0xffffffff,ar6,ar7);
    FUN_8c025490(ar4 + 0x310,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_034d08(ar4 + 0x2dc,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_12c1f0_m0_0f4108(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* CAnimal_m2_02573c @ 8c02573c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02599e) */
/* WARNING: Unknown calling convention */

undefined4 CAnimal_m2_02573c(int ar4,uint ar5,int ****ar6,int ****ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *a5;
  undefined4 *a5_00;
  undefined1 *a6;
  int ****ar7_00;
  undefined1 *a7;
  uint ar5_00;
  int ****a6_00;
  float fVar8;
  ulonglong in_dr0;
  double dVar9;
  float fVar10;
  undefined4 in_fr3;
  double dVar11;
  char cVar12;
  char cVar13;
  int ****ain0;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [4];
  undefined8 uStack_f4;
  undefined1 auStack_ec [64];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  int iStack_9c;
  int ***pppiStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int ***pppiStack_68;
  uint uStack_64;
  int ***pppiStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int ***pppiStack_44;
  uint uStack_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined8 uStack_30;
  int iStack_28;
  int iStack_24;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar5 = ar5;
  ar7_00 = ar7;
  ain0 = ar6;
  FUN_8c030e10(auStack_3c,ar5,ar6,ar7);
  FUN_8c030e5c(&uStack_ac,uVar5,ar6,ar7_00);
  uVar2 = FUN_8c02bef8(ar4 + 0x174,uVar5,ar6,ar7_00);
  a6_00 = (int ****)(int)(short)uVar2;
  FUN_8c023e44(auStack_ec,uVar5,ar6,ar7_00);
  uVar3 = FUN_8c02602c(ar5,uVar5,ar6,ar7_00);
  ar5_00 = uVar3 & 0xffff;
  iVar4 = get_field_24_026024(ar7,uVar5,ar6,ar7_00);
  if ((iVar4 != 2) && (*(int *)(ar4 + 0x48c) == 0)) {
    uVar5 = FUN_8c1011b0(*(undefined4 *)(ar5 + 0x7cc),uVar5,ar6,ar7_00);
    FUN_8c02601c(ar4 + 0x26c,uVar5 & 0xffff,ar6,ar7_00,ain0);
    uVar5 = ar5_00;
    ar6 = ar7;
    FUN_8c02c030(ar4 + 0x174,ar5_00,ar7,ar7_00);
  }
  iVar6 = FUN_8c025ff4(ar4 + 0x174,uVar5,ar6,ar7_00);
  if (iVar6 == 1) {
    FUN_8c02a6f8(ar4,uVar5,ar6,ar7_00);
  }
  uVar2 = FUN_8c025fc4(ar4 + 0x174,uVar5,ar6,ar7_00);
  if ((short)uVar2 == 1) {
    if (*(int *)(ar4 + 0x24) == 3) {
      uVar5 = 2;
      iVar6 = (*(code *)(*ar7)[0x47])(ar7,2,ar6,ar7_00);
      if (iVar6 != 0) {
        uVar5 = 0;
        FUN_8c025fbc(ar4 + 0x21c,0,ar6,ar7_00);
        goto LAB_8c02590e;
      }
    }
    uVar2 = FUN_8c02bef8(ar4 + 0x174,uVar5,ar6,ar7_00);
    a6_00 = (int ****)(int)(short)uVar2;
    if (a6_00 != (int ****)0x0) {
      (**(code **)(*(int *)(ar4 + 8) + 0xec))(ar4,0x8c3eb334,(int)a6_00 + -1,ar7_00);
      (**(code **)(*(int *)(ar4 + 8) + 0xe0))(ar4,0x8c3eb334,a6_00,ar7_00);
      uVar5 = ar5;
      ar6 = a6_00;
      (**(code **)(**(int **)(ar4 + 0x308) + 0x18))(*(int **)(ar4 + 0x308),ar5,a6_00,ar7_00);
      (**(code **)(*(int *)(ar4 + 8) + 0x5c))(ar4,uVar5,ar6,ar7_00);
    }
  }
LAB_8c02590e:
  if ((ar5_00 != *(ushort *)(ar4 + 0x464)) &&
     (*(short *)(*(int *)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4) != 0)) {
    uVar5 = (uint)*(ushort *)(*(int *)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4);
    iVar6 = libgcc_divide_helper_01031c(ar5_00,uVar5,ar6,ar7_00);
    if (iVar6 == 0) {
      FUN_8c02ae38(ar4,uVar5,ar6,ar7_00);
    }
    *(short *)(ar4 + 0x464) = (short)uVar3;
  }
  if ((((*(int *)(ar4 + 0x358) != 0) || (*(int *)(ar4 + 0x354) != 0)) ||
      (*(int *)(ar4 + 0x360) != 0)) || (*(int *)(ar4 + 0x35c) != 0)) {
    if (cVar13 == '\0') {
      dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x468),in_fr3);
    }
    else {
      dVar11 = *(double *)(ar4 + 0x468);
    }
    if (cVar13 == '\0') {
      dVar9 = (double)CONCAT44(0x361b5837,(float)(int)*(char *)(ar4 + 0x46c));
    }
    else {
      dVar9 = 512.0001032005592;
    }
    if (cVar12 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar13 == '\0') {
      dVar9 = (double)CONCAT44(0x40800000,fVar8);
    }
    else {
      dVar9 = 5.441987277913441e+158;
    }
    if (cVar12 == '\0') {
      fVar10 = (float)((ulonglong)dVar9 >> 0x20);
      fVar8 = SUB84(dVar9,0) * fVar10;
      dVar9 = (double)CONCAT44(fVar10,fVar8);
      dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) + fVar8,SUB84(dVar11,0));
    }
    else {
      dVar9 = dVar9 * dVar9;
      dVar11 = dVar11 + dVar9;
    }
    fVar8 = SUB84(dVar9,0);
    if (cVar13 == '\0') {
      *(int *)(ar4 + 0x468) = (int)((ulonglong)dVar11 >> 0x20);
      fVar8 = *(float *)(ar4 + 0x468);
    }
    else {
      *(double *)(ar4 + 0x468) = dVar11;
    }
    if (cVar12 != '\0' || fVar8 <= 1.0) {
      if (cVar13 == '\0') {
        fVar8 = *(float *)(ar4 + 0x468);
      }
      in_dr0 = (ulonglong)(uint)fVar8;
      if (cVar12 == '\0' && fVar8 < 0.0) {
        in_dr0 = (ulonglong)(uint)fVar8;
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0x468) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x468) = in_dr0;
        }
      }
    }
    else {
      in_dr0 = CONCAT44(0x3f800000,fVar8);
      if (cVar13 == '\0') {
        *(undefined4 *)(ar4 + 0x468) = 0x3f800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x468) = in_dr0;
      }
    }
  }
  if (iVar4 != 2) {
    iStack_58 = ar4 + 0x174;
    uStack_54 = *(undefined4 *)(ar4 + 0x30c);
    uStack_50 = *(undefined4 *)(ar4 + 0x308);
    iStack_48 = ar4 + 0x2dc;
    pppiStack_60 = (int ***)ar7;
    iStack_5c = ar4;
    pppiStack_44 = (int ***)ain0;
    uStack_40 = ar5;
    uStack_4c = (*(code *)(*ar7)[0x52])(ar7,uVar5,ar6,ar7_00);
    uVar5 = FUN_8c02602c(ar5,uVar5,ar6,ar7_00);
    ar6 = &pppiStack_60;
    uVar5 = uVar5 & 0xffff;
    FUN_8c034d48(ar4 + 0x2dc,uVar5,ar6,ar7_00);
  }
  iStack_78 = ar4 + 0x174;
  uStack_74 = *(undefined4 *)(ar4 + 0x30c);
  iStack_7c = ar4;
  pppiStack_68 = (int ***)ain0;
  uStack_64 = ar5;
  uStack_70 = (*(code *)(*ar7)[0x52])(ar7,uVar5,ar6,ar7_00);
  iStack_6c = ar4 + 0x2dc;
  (**(code **)(**(int **)(ar4 + 0x308) + 0xc))(*(int **)(ar4 + 0x308),ar7,&iStack_7c,ar7_00);
  uStack_30._4_4_ = ar4 + 0x30;
  iStack_28 = ar4 + 0x50;
  iStack_24 = ar4 + 0x5c;
  a7 = auStack_34;
  a6 = auStack_38;
  a5 = auStack_3c;
  (*(code *)(*ar7)[0x48])(ar7,a5,a6,a7);
  (*(code *)(*ar7)[0x61])(ar7,a5,a6,a7);
  uVar1 = in_dr0;
  if (cVar13 == '\0') {
    uStack_30 = CONCAT44(uStack_30._4_4_,(int)(in_dr0 >> 0x20));
    uVar1 = uStack_30;
  }
  uStack_30 = uVar1;
  uStack_ac = *(undefined4 *)(ar4 + 0x308);
  iStack_a8 = (int)&uStack_30 + 4;
  uStack_a4 = get_field_140_025f70(ar4 + 0x174,a5,a6,a7);
  puStack_90 = auStack_3c;
  if (cVar13 == '\0') {
    uStack_8c = *(undefined4 *)(ar4 + 0x408);
    uStack_88 = *(undefined4 *)(ar4 + 0x40c);
  }
  else {
    uStack_8c = (undefined4)*(undefined8 *)(ar4 + 0x408);
    uStack_88 = (undefined4)*(undefined8 *)(ar4 + 0x40c);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x40c) >> 0x20);
  }
  uStack_84 = CONCAT31(uStack_84._1_3_,1);
  iStack_9c = ((*(uint *)(ar4 + 0x74) & 0x70) >> 4) - 1;
  pppiStack_94 = (int ***)ar7;
  FUN_8c10277c(auStack_f8,a5,a6,a7);
  iVar4 = get_field_24_026024(ar7,a5,a6,a7);
  if (iVar4 == 0) {
    if (cVar13 == '\0') {
      uStack_f4 = CONCAT44(uStack_f4._4_4_,(int)uStack_30);
    }
    else {
      uStack_f4 = uStack_30;
    }
  }
  puStack_a0 = auStack_f8;
  uVar2 = FUN_8c025f68(ar4 + 0x1ec,a5,a6,a7);
  uStack_80 = (uint)((char)uVar2 != '\0');
  a5_00 = &uStack_ac;
  (**(code **)(**(int **)(ar4 + 0x30c) + 0xc))(*(int **)(ar4 + 0x30c),a5_00,a6,a7);
  FUN_8c025f44(*(undefined4 *)(ar4 + 0x30c),a5_00,a6,a7,auStack_108);
  FUN_8c023aa0(ar4 + 0x30,auStack_108,a6,a7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_108,0xffffffff,a6,a7);
  FUN_8c023e7c(auStack_ec,uVar2,a6,a7);
  FUN_8c023f70(auStack_ec,uVar2,a6,a7);
  FUN_8c023fdc(auStack_ec,uVar2,a6,a7);
  uVar2 = FUN_8c02bef8(ar4 + 0x174,uVar2,a6,a7);
  iVar6 = *(int *)(ar4 + 0x328) + (short)uVar2 * 0x124 + 0xd8;
  iVar4 = ar4 + 0x3c8;
  FUN_8c024010(auStack_ec,iVar4,iVar6,a7);
  (**(code **)(*(int *)(ar4 + 8) + 0xf8))(ar4,iVar4,iVar6,a7);
  FUN_8c0f79b8(ar4 + 0xa0,iVar4,iVar6,a7);
  uVar2 = FUN_8c025f68(ar4 + 0x1ec,iVar4,iVar6,a7);
  if ((char)uVar2 == '\0') {
    iVar4 = *(int *)(ar4 + 0x45c) + -1;
    *(int *)(ar4 + 0x45c) = iVar4;
    if (iVar4 < 1) {
      *(undefined4 *)(ar4 + 0x45c) = 0;
    }
  }
  else {
    iVar7 = *(int *)(ar4 + 0x45c);
    *(int *)(ar4 + 0x45c) = iVar7 + 1;
    if (0x707 < iVar7 + 1) {
      *(undefined4 *)(ar4 + 0x45c) = 0x708;
    }
  }
  iVar7 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,iVar4,iVar6,a7);
  if (iVar7 == 0) {
    (**(code **)(*(int *)(ar4 + 8) + 0x4c))(ar4,iVar4,iVar6,a7);
  }
  *(undefined4 *)(ar4 + 0x48c) = 0;
  free_if_nonnull_wrap_102790(auStack_f8,0xffffffff,iVar6,a7);
  free_if_nonnull_wrap_023e4c(auStack_ec,0xffffffff,iVar6,a7);
  FUN_8c026038(auStack_3c,0xffffffff,iVar6,a7);
  return 1;
}



/* FUN_8c025f44 @ 8c025f44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c025f44(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c025f64)(s0,ar4 + 4,ar6,ar7);
  return uVar1;
}



/* FUN_8c025f68 @ 8c025f68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c025f68(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*ar4;
}



/* get_field_140_025f70 @ 8c025f70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_140_025f70(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c025f78 + ar4);
}



/* FUN_8c025f7c @ 8c025f7c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c025f94) */
/* WARNING: Removing unreachable block (ram,0x8c025f8c) */
/* WARNING: Removing unreachable block (ram,0x8c025f82) */
/* WARNING: Removing unreachable block (ram,0x8c025f84) */
/* WARNING: Removing unreachable block (ram,0x8c025f8e) */
/* WARNING: Removing unreachable block (ram,0x8c025f96) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c025f7c(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0xba8);
  *ar6 = *(undefined4 *)(ar4 + 0xbac);
  *ar7 = *(undefined4 *)(ar4 + 0xbb0);
  return 0xbb0;
}



/* FUN_8c025fa8 @ 8c025fa8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c025fa8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + DAT_8c025fb4;
}



/* noop_025fb8 @ 8c025fb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_025fb8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c025fbc @ 8c025fbc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c025fbc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(short *)(ar4 + 0x16) = (short)ar5;
  return ar5;
}



/* FUN_8c025fc4 @ 8c025fc4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c025fc4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c025fe8)(ar4 + DAT_8c025fe4,ar5,ar6,ar7);
  return (int)(short)uVar1;
}



/* FUN_8c025fec @ 8c025fec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c025fec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(short *)(ar4 + 0x1e);
}



/* FUN_8c025ff4 @ 8c025ff4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c025ff4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c026018)(ar4 + DAT_8c026014,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c02601c @ 8c02601c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02601c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x14) = ar5;
  return in_r0;
}



/* get_field_24_026024 @ 8c026024 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_24_026024(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x24);
}



/* FUN_8c02602c @ 8c02602c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02602c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(short *)(DAT_8c026034 + ar4);
}



/* FUN_8c026038 @ 8c026038 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c026038(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_102790(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* CAnimal_m3_026078 @ 8c026078 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02621e) */
/* WARNING: Unknown calling convention */

undefined4 CAnimal_m3_026078(int ar4,uint ar5,int ****ar6,int ****ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint ar5_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *a5;
  undefined4 *a5_00;
  undefined4 a5_01;
  int ****ar6_00;
  undefined1 *a6;
  int ****ar7_00;
  undefined1 *a7;
  int ****a6_00;
  float fVar7;
  ulonglong in_dr0;
  double dVar8;
  float fVar9;
  undefined4 in_fr3;
  double dVar10;
  char cVar11;
  char cVar12;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [4];
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  int iStack_9c;
  int ***pppiStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int ***pppiStack_68;
  uint uStack_64;
  int ***pppiStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int ***pppiStack_44;
  uint uStack_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined8 uStack_30;
  int iStack_28;
  int iStack_24;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c030e10(auStack_3c,ar5,ar6,ar7);
  FUN_8c030e5c(&uStack_ac,uVar6,ar6_00,ar7_00);
  uVar2 = FUN_8c02bef8(ar4 + 0x174,uVar6,ar6_00,ar7_00);
  a6_00 = (int ****)(int)(short)uVar2;
  uVar3 = FUN_8c02602c(ar5,uVar6,ar6_00,ar7_00);
  ar5_00 = uVar3 & 0xffff;
  iVar4 = get_field_24_026024(ar7,uVar6,ar6_00,ar7_00);
  if ((iVar4 != 2) && (*(int *)(ar4 + 0x48c) == 0)) {
    uVar6 = ar5_00;
    ar6_00 = ar7;
    FUN_8c02c030(ar4 + 0x174,ar5_00,ar7,ar7_00);
  }
  iVar5 = FUN_8c025ff4(ar4 + 0x174,uVar6,ar6_00,ar7_00);
  if (iVar5 == 1) {
    FUN_8c02a6f8(ar4,uVar6,ar6_00,ar7_00);
  }
  uVar2 = FUN_8c025fc4(ar4 + 0x174,uVar6,ar6_00,ar7_00);
  if ((short)uVar2 == 1) {
    uVar2 = FUN_8c02bef8(ar4 + 0x174,uVar6,ar6_00,ar7_00);
    a6_00 = (int ****)(int)(short)uVar2;
    if (a6_00 != (int ****)0x0) {
      (**(code **)(*(int *)(ar4 + 8) + 0xec))(ar4,0x8c3eb334,(int)a6_00 + -1,ar7_00);
      (**(code **)(*(int *)(ar4 + 8) + 0xe0))(ar4,0x8c3eb334,a6_00,ar7_00);
      uVar6 = ar5;
      ar6_00 = a6_00;
      (**(code **)(**(int **)(ar4 + 0x308) + 0x18))(*(int **)(ar4 + 0x308),ar5,a6_00,ar7_00);
      (**(code **)(*(int *)(ar4 + 8) + 0x5c))(ar4,uVar6,ar6_00,ar7_00);
    }
  }
  if ((ar5_00 != *(ushort *)(ar4 + 0x464)) &&
     (*(short *)(*(int *)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4) != 0)) {
    uVar6 = (uint)*(ushort *)(*(int *)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4);
    iVar5 = libgcc_divide_helper_01031c(ar5_00,uVar6,ar6_00,ar7_00);
    if (iVar5 == 0) {
      FUN_8c02ae38(ar4,uVar6,ar6_00,ar7_00);
    }
    *(short *)(ar4 + 0x464) = (short)uVar3;
  }
  if ((((*(int *)(ar4 + 0x358) != 0) || (*(int *)(ar4 + 0x354) != 0)) ||
      (*(int *)(ar4 + 0x360) != 0)) || (*(int *)(ar4 + 0x35c) != 0)) {
    if (cVar12 == '\0') {
      dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x468),in_fr3);
    }
    else {
      dVar10 = *(double *)(ar4 + 0x468);
    }
    if (cVar12 == '\0') {
      dVar8 = (double)CONCAT44(0x361b5837,(float)(int)*(char *)(ar4 + 0x46c));
    }
    else {
      dVar8 = 512.0001032005592;
    }
    if (cVar11 == '\0') {
      fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 * dVar8,0);
    }
    if (cVar12 == '\0') {
      dVar8 = (double)CONCAT44(0x40800000,fVar7);
    }
    else {
      dVar8 = 5.442117166052762e+158;
    }
    if (cVar11 == '\0') {
      fVar9 = (float)((ulonglong)dVar8 >> 0x20);
      fVar7 = SUB84(dVar8,0) * fVar9;
      dVar8 = (double)CONCAT44(fVar9,fVar7);
      dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + fVar7,SUB84(dVar10,0));
    }
    else {
      dVar8 = dVar8 * dVar8;
      dVar10 = dVar10 + dVar8;
    }
    fVar7 = SUB84(dVar8,0);
    if (cVar12 == '\0') {
      *(int *)(ar4 + 0x468) = (int)((ulonglong)dVar10 >> 0x20);
      fVar7 = *(float *)(ar4 + 0x468);
    }
    else {
      *(double *)(ar4 + 0x468) = dVar10;
    }
    if (cVar11 != '\0' || fVar7 <= 1.0) {
      if (cVar12 == '\0') {
        fVar7 = *(float *)(ar4 + 0x468);
      }
      in_dr0 = (ulonglong)(uint)fVar7;
      if (cVar11 == '\0' && fVar7 < 0.0) {
        in_dr0 = (ulonglong)(uint)fVar7;
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x468) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x468) = in_dr0;
        }
      }
    }
    else {
      in_dr0 = CONCAT44(0x3f800000,fVar7);
      if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x468) = 0x3f800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x468) = in_dr0;
      }
    }
  }
  if (iVar4 != 2) {
    iStack_58 = ar4 + 0x174;
    uStack_54 = *(undefined4 *)(ar4 + 0x30c);
    uStack_50 = *(undefined4 *)(ar4 + 0x308);
    iStack_48 = ar4 + 0x2dc;
    pppiStack_60 = (int ***)ar7;
    iStack_5c = ar4;
    pppiStack_44 = (int ***)ar6;
    uStack_40 = ar5;
    uStack_4c = (*(code *)(*ar7)[0x52])(ar7,uVar6,ar6_00,ar7_00);
    uVar2 = 1;
    FUN_8c0266d4(ar4 + 0x2dc,1,ar6_00,ar7_00);
    uVar6 = FUN_8c02602c(ar5,uVar2,ar6_00,ar7_00);
    ar6_00 = &pppiStack_60;
    uVar6 = uVar6 & 0xffff;
    FUN_8c034d48(ar4 + 0x2dc,uVar6,ar6_00,ar7_00);
  }
  iStack_78 = ar4 + 0x174;
  uStack_74 = *(undefined4 *)(ar4 + 0x30c);
  iStack_7c = ar4;
  pppiStack_68 = (int ***)ar6;
  uStack_64 = ar5;
  uStack_70 = (*(code *)(*ar7)[0x52])(ar7,uVar6,ar6_00,ar7_00);
  iStack_6c = ar4 + 0x2dc;
  (**(code **)(**(int **)(ar4 + 0x308) + 0x10))(*(int **)(ar4 + 0x308),ar7,&iStack_7c,ar7_00);
  uStack_30._4_4_ = ar4 + 0x30;
  iStack_28 = ar4 + 0x50;
  iStack_24 = ar4 + 0x5c;
  a7 = auStack_34;
  a6 = auStack_38;
  a5 = auStack_3c;
  (*(code *)(*ar7)[0x48])(ar7,a5,a6,a7);
  (*(code *)(*ar7)[0x61])(ar7,a5,a6,a7);
  uVar1 = in_dr0;
  if (cVar12 == '\0') {
    uStack_30 = CONCAT44(uStack_30._4_4_,(int)(in_dr0 >> 0x20));
    uVar1 = uStack_30;
  }
  uStack_30 = uVar1;
  uStack_ac = *(undefined4 *)(ar4 + 0x308);
  iStack_a8 = (int)&uStack_30 + 4;
  uStack_a4 = get_field_140_025f70(ar4 + 0x174,a5,a6,a7);
  puStack_90 = auStack_3c;
  if (cVar12 == '\0') {
    uStack_8c = *(undefined4 *)(ar4 + 0x408);
    uStack_88 = *(undefined4 *)(ar4 + 0x40c);
  }
  else {
    uStack_8c = (undefined4)*(undefined8 *)(ar4 + 0x408);
    uStack_88 = (undefined4)*(undefined8 *)(ar4 + 0x40c);
    uStack_84 = (uint)((ulonglong)*(undefined8 *)(ar4 + 0x40c) >> 0x20);
  }
  uStack_84 = uStack_84 & 0xffffff00;
  iStack_9c = ((*(uint *)(ar4 + 0x74) & 0x70) >> 4) - 1;
  pppiStack_94 = (int ***)ar7;
  FUN_8c10277c(auStack_b8,a5,a6,a7);
  iVar4 = get_field_24_026024(ar7,a5,a6,a7);
  if (iVar4 == 0) {
    if (cVar12 == '\0') {
      uStack_b4 = CONCAT44(uStack_b4._4_4_,(int)uStack_30);
    }
    else {
      uStack_b4 = uStack_30;
    }
  }
  puStack_a0 = auStack_b8;
  a5_00 = &uStack_ac;
  (**(code **)(**(int **)(ar4 + 0x30c) + 0xc))(*(int **)(ar4 + 0x30c),a5_00,a6,a7);
  FUN_8c025f44(*(undefined4 *)(ar4 + 0x30c),a5_00,a6,a7,auStack_c8);
  FUN_8c023aa0(ar4 + 0x30,auStack_c8,a6,a7);
  a5_01 = 0xffffffff;
  Vec3_dtor(auStack_c8,0xffffffff,a6,a7);
  (**(code **)(*(int *)(ar4 + 8) + 0xf8))(ar4,a5_01,a6,a7);
  FUN_8c0f79b8(ar4 + 0xa0,a5_01,a6,a7);
  uVar2 = FUN_8c025f68(ar4 + 0x1ec,a5_01,a6,a7);
  if ((char)uVar2 == '\0') {
    iVar4 = *(int *)(ar4 + 0x45c) + -1;
    *(int *)(ar4 + 0x45c) = iVar4;
    if (iVar4 < 1) {
      *(undefined4 *)(ar4 + 0x45c) = 0;
    }
  }
  else {
    iVar4 = *(int *)(ar4 + 0x45c);
    *(int *)(ar4 + 0x45c) = iVar4 + 1;
    if (0x707 < iVar4 + 1) {
      *(undefined4 *)(ar4 + 0x45c) = 0x708;
    }
  }
  iVar4 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,a5_01,a6,a7);
  if (iVar4 == 0) {
    (**(code **)(*(int *)(ar4 + 8) + 0x4c))(ar4,a5_01,a6,a7);
  }
  *(undefined4 *)(ar4 + 0x48c) = 0;
  free_if_nonnull_wrap_102790(auStack_b8,0xffffffff,a6,a7);
  FUN_8c026038(auStack_3c,0xffffffff,a6,a7);
  return 1;
}



/* FUN_8c0266d4 @ 8c0266d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0266d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 2) = (char)ar5;
  return ar5;
}



/* CAnimal_m4_0266dc @ 8c0266dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m4_0266dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = ar6;
  (**(code **)(**(int **)(DAT_8c026764 + ar4) + 0x14))(*(int **)(DAT_8c026764 + ar4),ar6,ar6,ar7);
  (**(code **)(**(int **)(DAT_8c026768 + ar4) + 0x1c))(*(int **)(DAT_8c026768 + ar4),ar6,uVar1,ar7);
  (*(code *)PTR_FUN_8c02676c)(ar4,ar6,uVar1,ar7);
  uVar1 = (*(code *)PTR_FUN_8c026770)(ar4,ar6,uVar1,ar7);
  return uVar1;
}



/* CAnimal_m5_026774 @ 8c026774 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m5_026774(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c02681c)(ar4 + DAT_8c026818,ar5,ar6,ar7);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  *(undefined4 *)(ar4 + 0x70) = 0;
  (**(code **)(**(int **)(DAT_8c026828 + ar4) + 0x14))(*(int **)(DAT_8c026828 + ar4),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c02682c)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c026830)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* CAnimBody_AdvanceFrame_wrapper_wrap_026834 @ 8c026834 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
CAnimBody_AdvanceFrame_wrapper_wrap_026834(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c026854)(ar4 + DAT_8c026850,ar5,ar6,ar7);
  return uVar1;
}



/* CAnimBody_AdvanceFrame_wrapper @ 8c026858 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
CAnimBody_AdvanceFrame_wrapper(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c02687c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* s_CAnimal_RunIncubator_026882 @ 8c026880 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CAnimal_RunIncubator_026882(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c026948)(ar4 + DAT_8c026944,ar5,ar6,ar7);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  (*(code *)PTR_FUN_8c026954)(ar4 + DAT_8c026944,ar5,ar6,ar7);
  if (*(int *)(DAT_8c026958 + ar4) == 0) {
    ar7 = 2;
    ar6 = 1;
    ar5 = PTR_s_GRAPHICS_COMMON_8c02695c + 0x73;
    (*(code *)PTR_report_error_message_8c026960)(PTR_s_GRAPHICS_COMMON_8c02695c + 99,ar5,1,2);
  }
  else {
    (**(code **)(**(int **)(DAT_8c026958 + ar4) + 0x14))(*(int **)(DAT_8c026958 + ar4),ar5,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_FUN_8c026964)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c026968 @ 8c026968 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c026968(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  undefined4 in_stack_ffffff24;
  undefined2 uVar15;
  undefined4 uStack_b0;
  undefined4 uStack_94;
  undefined1 auStack_8c [64];
  undefined1 auStack_4c [68];
  
  uVar15 = (undefined2)((uint)in_stack_ffffff24 >> 0x10);
  cVar14 = '\0';
  cVar13 = '\0';
  FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7);
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  uVar6 = CONCAT22(uVar15,(short)uVar1);
  iVar7 = *(int *)(ar4 + 0x328) + (short)uVar1 * 0x124;
  FUN_8c25cddc(auStack_4c,ar5,ar6,ar7,uVar6);
  FUN_8c25cddc(auStack_8c,ar5,ar6,ar7,uVar6);
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5,ar6,ar7);
  uVar1 = 0x40;
  iVar4 = _DAT_8c27d1ec * 0x40 + -0x73d83e14;
  FUN_8c013fb4((_DAT_8c27d1ec + 1) * 0x40 + -0x73d83e14,iVar4,0x40,ar7);
  _DAT_8c27d1ec = _DAT_8c27d1ec + 1;
  FUN_8c25b5d0(auStack_8c,iVar4,uVar1,ar7,uVar6);
  puVar5 = auStack_8c;
  FUN_8c255d6c(auStack_4c,puVar5,uVar1,ar7,uVar6);
  FUN_8c25cddc(auStack_8c,puVar5,uVar1,ar7,uVar6);
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar4 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar11 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar11 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar12 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar12 = (int)(dVar9 / dVar9);
  }
  FUN_8c256b0c(auStack_8c,iVar12,iVar11,iVar4,uVar6);
  puVar5 = auStack_8c;
  FUN_8c255d6c(auStack_4c,puVar5,iVar11,iVar4,uVar6);
  FUN_8c25cddc(auStack_8c,puVar5,iVar11,iVar4,uVar6);
  FUN_8c256fec(auStack_8c,puVar5,iVar11,iVar4,uVar6);
  puVar5 = auStack_8c;
  FUN_8c255d6c(auStack_4c,puVar5,iVar11,iVar4,uVar6);
  FUN_8c25cddc(auStack_8c,puVar5,iVar11,iVar4,uVar6);
  FUN_8c256fec(auStack_8c,puVar5,iVar11,iVar4,uVar6);
  puVar5 = auStack_8c;
  FUN_8c255d6c(auStack_4c,puVar5,iVar11,iVar4,uVar6);
  FUN_8c024378(auStack_4c,puVar5,iVar11,iVar4);
  FUN_8c256328(0,puVar5,iVar11,iVar4,uVar6);
  FUN_8c25b5d0(0,puVar5,iVar11,iVar4,uVar6);
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar4 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar11 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar11 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    fVar10 = (float)((ulonglong)dVar9 >> 0x20);
    fVar8 = SUB84(dVar9,0) / fVar10;
    dVar9 = (double)CONCAT44(fVar10,fVar8);
    iVar12 = (int)fVar8;
  }
  else {
    dVar9 = dVar9 / dVar9;
    iVar12 = (int)dVar9;
  }
  uStack_b0 = (undefined4)((ulonglong)dVar9 >> 0x20);
  FUN_8c256b0c(0,iVar12,iVar11,iVar4,uVar6);
  FUN_8c256fec(0,iVar12,iVar11,iVar4,uVar6);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
  uVar1 = deref_u32(*(int *)(iVar7 + 0xa0) + iVar2 * 4,iVar12,iVar11,iVar4);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
  uStack_94 = uStack_b0;
  if (cVar14 == '\0') {
    uStack_94 = uVar1;
  }
  FUN_8c2540a0(uStack_94,iVar12,iVar11,iVar4,uVar6);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
  puVar3 = (undefined4 *)deref_u32(*(int *)(iVar7 + 0xa0) + iVar2 * 4,iVar12,iVar11,iVar4);
  *(undefined4 *)(ar4 + 0x434) = *puVar3;
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
  iVar2 = FUN_8c026d74(*(int *)(iVar7 + 0xa8) + iVar2 * 4,iVar12,iVar11,iVar4);
  if (iVar2 == 0) {
    uVar1 = FUN_8c015bb8(iVar7 + 0x70,iVar12,iVar11,iVar4);
    uVar6 = 0;
    FUN_8c029510(ar4,uVar1,0,iVar4);
  }
  else {
    iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
    uVar1 = FUN_8c026d74(*(int *)(iVar7 + 0xa8) + iVar2 * 4,iVar12,iVar11,iVar4);
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
    if (cVar14 == '\0') {
      uStack_b0 = uVar1;
    }
    uVar1 = 0x29;
    FUN_8c21f200(uStack_b0,0x29,iVar11,iVar4,uVar6);
    uVar1 = FUN_8c015bb8(iVar7 + 0x70,uVar1,iVar11,iVar4);
    uVar6 = 0;
    FUN_8c0297b8(ar4,uVar1,0,iVar4);
  }
  FUN_8c256210(1,uVar1,uVar6,iVar4);
  _DAT_8c27d1ec = _DAT_8c27d1ec + -1;
  FUN_8c233dac(&DAT_8c12fd7c,uVar1,uVar6,iVar4);
  iVar7 = *(int *)(ar4 + 0x474);
  if (iVar7 == 1) {
    iVar7 = FUN_8c02b058(ar4,uVar1,uVar6,iVar4);
  }
  return iVar7;
}



/* FUN_8c026d74 @ 8c026d74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c026d74(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}



/* FUN_8c026d7c @ 8c026d7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c026d7c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7,ar4);
  return 4;
}



/* CAnimBody_GetCurFrame @ 8c026da8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimBody_GetCurFrame(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c026db0 @ 8c026db0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c026db0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_1c_026dd8_8c026dd4)(ar4 + DAT_8c026dd0,ar5,ar6,ar7);
  return uVar1;
}



/* get_field_1c_026dd8 @ 8c026dd8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_1c_026dd8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x1c);
}



/* FUN_8c026de0 @ 8c026de0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c026de0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 extraout_fr0;
  undefined4 extraout_fr0_00;
  char cVar5;
  undefined4 in_stack_ffffffac;
  undefined2 uVar6;
  undefined4 ain0;
  undefined4 uStack_30;
  undefined4 uStack_14;
  
  uVar6 = (undefined2)((uint)in_stack_ffffffac >> 0x10);
  cVar5 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  ain0 = CONCAT22(uVar6,(short)uVar1);
  iVar4 = *(int *)(ar4 + 0x328) + (short)uVar1 * 0x124;
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5,ar6,ar7);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uVar1 = deref_u32(*(int *)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uStack_14 = extraout_fr0;
  if (cVar5 == '\0') {
    uStack_14 = uVar1;
  }
  FUN_8c2540a0(uStack_14,ar5,ar6,ar7,ain0);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  puVar3 = (undefined4 *)deref_u32(*(int *)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x434) = *puVar3;
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  iVar2 = FUN_8c026d74(*(int *)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    uVar1 = FUN_8c015bb8(iVar4 + 0x70,ar5,ar6,ar7);
    uVar1 = FUN_8c029510(ar4,uVar1,0,ar7);
  }
  else {
    iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
    uVar1 = FUN_8c026d74(*(int *)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7);
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
    uStack_30 = extraout_fr0_00;
    if (cVar5 == '\0') {
      uStack_30 = uVar1;
    }
    uVar1 = 0x29;
    FUN_8c21f200(uStack_30,0x29,ar6,ar7,ain0);
    uVar1 = FUN_8c015bb8(iVar4 + 0x70,uVar1,ar6,ar7);
    uVar1 = FUN_8c0297b8(ar4,uVar1,0,ar7);
  }
  return uVar1;
}



/* FUN_8c026f7c @ 8c026f7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c026f7c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  (*(code *)PTR_FUN_8c027014)(ar4 + DAT_8c027010,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c027014)(ar4 + DAT_8c027010,ar5,ar6,ar7);
  puVar2 = (undefined4 *)
           (*(code *)PTR_FUN_8c027024)
                     (*(int *)((short)uVar1 * DAT_8c02701c + *(int *)(DAT_8c027018 + ar4)) +
                      DAT_8c027020,ar5,ar6,ar7);
  *puVar2 = *(undefined4 *)
             (*(int *)((short)uVar1 * DAT_8c02701c + *(int *)(DAT_8c027018 + ar4)) + 0x40);
  iVar3 = *(int *)(DAT_8c027028 + ar4);
  *(undefined4 **)(iVar3 + 4) = puVar2;
  return iVar3;
}



/* FUN_8c02702c @ 8c02702c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02702c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int a5;
  undefined4 a5_00;
  int ar6_00;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 in_xd0;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffffc8;
  undefined2 uVar11;
  undefined4 uVar8;
  
  uVar11 = (undefined2)((uint)in_stack_ffffffc8 >> 0x10);
  cVar10 = '\0';
  cVar9 = '\0';
  uVar2 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  sVar1 = (short)uVar2;
  uVar8 = CONCAT22(uVar11,sVar1);
  iVar4 = *(int *)(ar4 + 0x328) + sVar1 * 0x124;
  uVar2 = *(undefined4 *)(iVar4 + 0xa8);
  ar6_00 = (int)*(short *)(iVar4 + 0xa4);
  FUN_8c027234(*(undefined4 *)(ar4 + 0x30c),*(undefined4 *)(iVar4 + 0xa0),ar6_00,uVar2);
  if ((*(uint *)(ar4 + 0x74) & 0x70) == 0x20) {
    FUN_8c02722c(*(undefined4 *)(ar4 + 0x30c),1,ar6_00,uVar2);
  }
  a5 = (int)sVar1;
  (**(code **)(**(int **)(ar4 + 0x30c) + 0x20))(*(int **)(ar4 + 0x30c),a5,ar6_00,uVar2);
  (**(code **)(**(int **)(ar4 + 0x30c) + 0x2c))(*(int **)(ar4 + 0x30c),a5,ar6_00,uVar2);
  *(undefined4 *)(ar4 + 0xa0) = *(undefined4 *)(iVar4 + 0xb4);
  a5_00 = *(undefined4 *)(ar4 + 0xa0);
  (**(code **)(**(int **)(ar4 + 0xa4) + 0x24))(*(int **)(ar4 + 0xa4),a5_00,ar6_00,uVar2);
  FUN_8c027224(*(undefined4 *)(ar4 + 0x30c),a5_00,ar6_00,uVar2,uVar8);
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x28))((int *)(ar4 + 0xa8),ar4 + 0x30,ar6_00,uVar2);
  puVar3 = (undefined8 *)(*(int *)(ar4 + 0x328) + sVar1 * 0x124 + 0xbc);
  if (cVar10 == '\0') {
    *(undefined4 *)(ar4 + 0x170) = *(undefined4 *)puVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x170) = *puVar3;
  }
  puVar3 = (undefined8 *)(*(int *)(ar4 + 0x328) + sVar1 * 0x124 + 0xb8);
  if (cVar10 == '\0') {
    uVar8 = *(undefined4 *)puVar3;
    *(undefined4 *)(ar4 + 100) = uVar8;
    *(undefined4 *)(ar4 + 0x60) = uVar8;
    *(undefined4 *)(ar4 + 0x5c) = uVar8;
  }
  else {
    uVar6 = *puVar3;
    *(undefined8 *)(ar4 + 100) = uVar6;
    *(undefined8 *)(ar4 + 0x60) = uVar6;
    *(undefined8 *)(ar4 + 0x5c) = uVar6;
  }
  puVar3 = (undefined8 *)(*(int *)(ar4 + 0x328) + sVar1 * 0x124 + 0xe8);
  if (cVar10 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)puVar3);
  }
  else {
    in_xd0 = *puVar3;
    dVar7 = *(double *)(ar4 + 0x5c);
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar10 == '\0') {
    *(float *)(ar4 + 0x408) = fVar5;
  }
  else {
    *(undefined8 *)(ar4 + 0x408) = in_xd0;
  }
  puVar3 = (undefined8 *)(*(int *)(ar4 + 0x328) + sVar1 * 0x124 + 0xec);
  if (cVar10 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x60),*(undefined4 *)puVar3);
  }
  else {
    in_xd0 = *puVar3;
    dVar7 = *(double *)(ar4 + 0x60);
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar10 == '\0') {
    *(float *)(ar4 + 0x40c) = fVar5;
  }
  else {
    *(undefined8 *)(ar4 + 0x40c) = in_xd0;
  }
  uVar2 = s_CAnimal_ChangeBodyTexture_02af96(ar4,*(undefined4 *)(ar4 + 0x478),ar6_00,uVar2);
  return uVar2;
}



/* FUN_8c027224 @ 8c027224 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027224(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c02722c @ 8c02722c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02722c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 100) = ar5;
  return 100;
}



/* FUN_8c027234 @ 8c027234 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027234(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c027264(ar4 + 0xb0,ar5,ar6,ar7,ar4);
  return uVar1;
}



/* FUN_8c027264 @ 8c027264 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027264(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x14) = ar5;
  *(undefined4 *)(ar4 + 0x10) = ar6;
  *(undefined4 *)(ar4 + 0x18) = ar7;
  return in_r0;
}



/* FUN_8c027270 @ 8c027270 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027270(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar6_00;
  undefined4 uVar2;
  
  uVar2 = 1;
  (*(code *)PTR_FUN_8c02730c)(ar4 + DAT_8c027308,1,ar6,ar7);
  uVar1 = (*(code *)PTR_get_field_138_02737c_8c027310)(ar4 + DAT_8c027308,uVar2,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c027314)(ar4 + DAT_8c027308,uVar2,ar6,ar7);
  ar6_00 = (int)(short)uVar2;
  uVar1 = (*(code *)PTR_FUN_8c027318)(ar4,uVar1,ar6_00,ar7);
  uVar1 = (*(code *)PTR_FUN_8c027320)(DAT_8c02731c,uVar1,ar6_00,ar7);
  (*(code *)PTR_FUN_8c027328)(ar4 + DAT_8c027324,uVar1,ar6_00,ar7);
  uVar1 = (*(code *)PTR_FUN_8c027330)(*(undefined4 *)(DAT_8c02732c + ar4),uVar1,ar6_00,ar7);
  (*(code *)PTR_FUN_8c027334)(ar4 + DAT_8c027324,uVar1,ar6_00,ar7);
  uVar1 = 1;
  (*(code *)PTR_FUN_8c02733c)(ar4 + DAT_8c027338,1,ar6_00,ar7);
  uVar1 = (*(code *)PTR_FUN_8c027340)(*(undefined4 *)(DAT_8c02732c + ar4),uVar1,ar6_00,ar7);
  return uVar1;
}



/* FUN_8c027344 @ 8c027344 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c027344(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c027350;
  *(undefined1 *)(DAT_8c027350 + ar4) = 1;
  return iVar1;
}



/* FUN_8c027354 @ 8c027354 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027354(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x28) = (undefined1)ar5;
  return 0x28;
}



/* FUN_8c02735c @ 8c02735c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02735c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x40) = (undefined1)ar5;
  return 0x40;
}



/* FUN_8c027364 @ 8c027364 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c027364(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(DAT_8c027370 + ar4);
}



/* FUN_8c027374 @ 8c027374 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027374(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x44) = ar5;
  return 0x44;
}



/* get_field_138_02737c @ 8c02737c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_138_02737c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c027384 + ar4);
}



/* FUN_8c027388 @ 8c027388 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c027388(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c027390;
  *(undefined1 *)(DAT_8c027390 + ar4) = (undefined1)ar5;
  return iVar1;
}



/* FUN_8c027394 @ 8c027394 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027394(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0273c4)(ar4,ar5,ar6,ar7);
  (**(code **)(**(int **)(DAT_8c0273c8 + ar4) + 0x24))(*(int **)(DAT_8c0273c8 + ar4),ar5,ar6,ar7);
  uVar1 = (**(code **)(DAT_8c0273cc + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* noop_0273d0 @ 8c0273d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0273d0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0273d4 @ 8c0273d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0273d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0273f4)(*(undefined4 *)(DAT_8c0273f0 + ar4),1,ar6,ar7);
  return uVar1;
}



/* FUN_8c0273f8 @ 8c0273f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0273f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c027400;
  *(undefined1 *)(DAT_8c027400 + ar4) = (undefined1)ar5;
  return iVar1;
}



/* FUN_8c027404 @ 8c027404 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027404(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c027430)(*(undefined4 *)(DAT_8c02742c + ar4),1,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c027438)(*(undefined4 *)(DAT_8c027434 + ar4),1,ar6,ar7);
  return uVar1;
}



/* FUN_8c02743c @ 8c02743c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02743c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c027444;
  *(undefined4 *)(DAT_8c027444 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c027448 @ 8c027448 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c027448(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c027450;
  *(undefined1 *)(DAT_8c027450 + ar4) = (undefined1)ar5;
  return iVar1;
}



/* FUN_8c027454 @ 8c027454 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027454(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c027474)(*(undefined4 *)(DAT_8c027470 + ar4),1,ar6,ar7);
  return uVar1;
}



/* FUN_8c027478 @ 8c027478 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c027478(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c027480;
  *(undefined1 *)(DAT_8c027480 + ar4) = (undefined1)ar5;
  return iVar1;
}



/* noop_027484 @ 8c027484 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_027484(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_027488 @ 8c027488 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_027488(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c02748c @ 8c02748c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02748c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0274ac)(*(undefined4 *)(DAT_8c0274a8 + ar4),1,ar6,ar7);
  return uVar1;
}



/* FUN_8c0274b0 @ 8c0274b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0274b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0274b8;
  *(undefined1 *)(DAT_8c0274b8 + ar4) = (undefined1)ar5;
  return iVar1;
}



/* FUN_8c0274bc @ 8c0274bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0274bc(int ar4,ushort *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *ar5_00;
  int iVar4;
  
  ar5_00 = ar5;
  iVar1 = (*(code *)PTR_get_field_138_02737c_8c027694)(ar4 + DAT_8c027690,ar5,ar6,ar7);
  if (iVar1 != 1) {
    iVar1 = (*(code *)PTR_get_field_138_02737c_8c027694)(ar4 + DAT_8c027690,ar5_00,ar6,ar7);
    if (iVar1 != 2) goto LAB_8c027550;
  }
  uVar2 = (*(code *)PTR_get_field_138_02737c_8c027694)(ar4 + DAT_8c027690,ar5_00,ar6,ar7);
  uVar3 = (*(code *)PTR_FUN_8c027698)(ar4 + DAT_8c027690,ar5_00,ar6,ar7);
  ar6 = (int)(short)uVar3;
  uVar2 = (*(code *)PTR_FUN_8c02769c)(ar4,uVar2,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c0276a4)(DAT_8c0276a0,uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0276ac)(ar4 + DAT_8c0276a8,uVar2,ar6,ar7);
  ar5_00 = (ushort *)(*(code *)PTR_FUN_8c0276b4)(*(undefined4 *)(DAT_8c0276b0 + ar4),uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0276b8)(ar4 + DAT_8c0276a8,ar5_00,ar6,ar7);
LAB_8c027550:
  iVar1 = (*(code *)PTR_FUN_8c0276bc)(DAT_8c0276a0,ar5_00,ar6,ar7);
  iVar4 = (**(code **)(**(int **)(DAT_8c0276b0 + ar4) + 0x40))
                    (*(int **)(DAT_8c0276b0 + ar4),ar5_00,ar6,ar7);
  if (iVar1 == iVar4) {
    iVar1 = (**(code **)(**(int **)(DAT_8c0276b0 + ar4) + 0x40))
                      (*(int **)(DAT_8c0276b0 + ar4),ar5_00,ar6,ar7);
    if (0 < iVar1) {
      ar5_00 = (ushort *)0x1;
      (*(code *)PTR_FUN_8c0276c0)(ar4,1,ar6,ar7);
    }
  }
  if (*ar5 == 0) {
    if ((*ar5 == 0) && (7 < ar5[1])) {
      if (ar5[1] < 0x18) {
        ar5_00 = (ushort *)
                 (*(code *)PTR_libgcc_divide_helper_0101e4_8c0276cc)((uint)ar5[1],8,ar6,ar7);
        (*(code *)PTR_FUN_8c0276c4)(ar4 + DAT_8c027690,ar5_00,ar6,ar7);
      }
      else {
        ar5_00 = (ushort *)
                 (*(code *)PTR_libgcc_divide_helper_0101e4_8c0276cc)((uint)ar5[1],0x18,ar6,ar7);
        (*(code *)PTR_FUN_8c0276c4)(ar4 + DAT_8c027690,ar5_00,ar6,ar7);
      }
      (*(code *)PTR_FUN_8c0276c8)(*(undefined4 *)(DAT_8c0276b0 + ar4),ar5_00,ar6,ar7);
    }
  }
  else {
    ar5_00 = (ushort *)(uint)*ar5;
    (*(code *)PTR_FUN_8c0276c4)(ar4 + DAT_8c027690,ar5_00,ar6,ar7);
    (*(code *)PTR_FUN_8c0276c8)(*(undefined4 *)(DAT_8c0276b0 + ar4),ar5_00,ar6,ar7);
  }
  iVar1 = (*(code *)PTR_FUN_8c0276d0)(ar4 + DAT_8c027690,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c0276d4)(ar4,ar5_00,ar6,ar7);
  }
  uVar2 = (*(code *)PTR_FUN_8c0276dc)(ar4 + DAT_8c0276d8,ar5_00,ar6,ar7);
  if ((char)uVar2 != '\0') {
    (*(code *)PTR_FUN_8c0276e0)(ar4,ar5_00,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c0276e8)(ar4 + DAT_8c0276e4,ar4 + DAT_8c027690,ar6,ar7);
  uVar2 = (**(code **)(**(int **)(DAT_8c0276b0 + ar4) + 0x3c))
                    (*(int **)(DAT_8c0276b0 + ar4),ar4 + DAT_8c027690,ar4 + DAT_8c0276e4,ar7);
  return uVar2;
}



/* ret_const_ffffffff_0276ec @ 8c0276ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_ffffffff_0276ec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0xffffffff;
}



/* FUN_8c0276f4 @ 8c0276f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0276f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c027750)(DAT_8c02774c,ar5,ar6,ar7);
  iVar2 = (**(code **)(**(int **)(DAT_8c027754 + ar4) + 0x40))
                    (*(int **)(DAT_8c027754 + ar4),ar5,ar6,ar7);
  if (iVar1 == iVar2) {
    iVar2 = (**(code **)(**(int **)(DAT_8c027754 + ar4) + 0x40))
                      (*(int **)(DAT_8c027754 + ar4),ar5,ar6,ar7);
    if (0 < iVar2) {
      iVar2 = (*(code *)PTR_FUN_8c027758)(ar4,1,ar6,ar7);
    }
  }
  return iVar2;
}



/* FUN_8c02775c @ 8c02775c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02775c(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (((ar5 == 1) && (iVar1 = (int)(short)ar6, iVar1 < 8)) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      return 0;
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 3;
    case 4:
      return 4;
    case 5:
      return 5;
    case 6:
      return 6;
    case 7:
      return 7;
    }
  }
  if (((ar5 == 2) && (iVar1 = (int)(short)ar6, iVar1 < 5)) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      return 8;
    case 1:
      return 9;
    case 2:
      return 10;
    case 3:
      return 0xb;
    case 4:
      return 0xc;
    }
  }
  return 0xc;
}



/* FUN_8c02781c @ 8c02781c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02781c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_assign_wrap_027844_8c027840)
                    (*(undefined4 *)(DAT_8c02783c + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* Vec3_assign_wrap_027844 @ 8c027844 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Vec3_assign_wrap_027844(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_assign_8c027868)(ar4 + DAT_8c027864,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c02786c @ 8c02786c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02786c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c027890)(*(undefined4 *)(DAT_8c02788c + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c027894 @ 8c027894 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027894(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec3_copy_8c023d8c_8c0278b8)(ar4 + DAT_8c0278b4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0278bc @ 8c0278bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0278bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0278e0)(*(undefined4 *)(DAT_8c0278dc + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0278e4 @ 8c0278e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0278e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(DAT_8c027900 + ar4) + 0x1c))
                    (*(int **)(DAT_8c027900 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* noop_027904 @ 8c027904 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_027904(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c027908 @ 8c027908 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027908(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_124_027930_8c02792c)
                    (*(undefined4 *)(DAT_8c027928 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* get_field_124_027930 @ 8c027930 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_124_027930(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c027938 + ar4);
}



/* FUN_8c02793c @ 8c02793c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02793c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(uint *)(ar4 + 0x74) & 1) == 1) {
    return 1;
  }
  return 0;
}



/* FUN_8c027954 @ 8c027954 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027954(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xfffffffe;
  return 1;
}



/* FUN_8c027970 @ 8c027970 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027970(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(uint *)(ar4 + 0x74) & 2) == 2) {
    return 1;
  }
  return 0;
}



/* FUN_8c027988 @ 8c027988 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027988(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
    return 1;
  }
  return 0;
}



/* FUN_8c0279a0 @ 8c0279a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0279a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(uint *)(ar4 + 0x74) & DAT_8c0279bc) == DAT_8c0279bc) {
    return 1;
  }
  return 0;
}



/* FUN_8c0279c0 @ 8c0279c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0279c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | DAT_8c0279dc;
  return 1;
}



/* FUN_8c0279e0 @ 8c0279e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0279e0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(uint *)(ar4 + 0x74) & DAT_8c0279fc) == DAT_8c0279fc) {
    return 1;
  }
  return 0;
}



/* FUN_8c027a00 @ 8c027a00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027a00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(DAT_8c027a40 + ar4) + 0x20))
                    (*(int **)(DAT_8c027a40 + ar4),ar5,ar6,ar7);
  if ((iVar1 != 0) &&
     (iVar1 = (*(code *)PTR_get_field_214_027a4c_8c027a48)
                        (*(undefined4 *)(DAT_8c027a44 + ar4),ar5,ar6,ar7), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* get_field_214_027a4c @ 8c027a4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_214_027a4c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c027a54 + ar4);
}



/* FUN_8c027a58 @ 8c027a58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027a58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | DAT_8c027a74;
  return 1;
}



/* s_Failed_to_load_Pack_CAnimal__027a86 @ 8c027a78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_to_load_Pack_CAnimal__027a86(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a5;
  undefined4 uVar3;
  undefined *ar7_00;
  undefined4 *puVar4;
  undefined4 uVar5;
  int s0;
  int iVar6;
  undefined4 in_stack_ffffff50;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [2];
  
  auStack_24[0] = 0;
  uStack_28 = 0;
  uVar5 = 0;
  iVar6 = ar6 * 0x124;
  iVar1 = *(int *)(ar4 + 0x328) + iVar6;
  s0 = ar4 + ar6;
  uStack_2c = 0;
  iVar2 = *(int *)(ar4 + 0x418);
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
    ar7_00 = (&switchD_8c027ae0::switchdataD_8c027afc)[iVar2];
    a5 = ar5;
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    case 0:
      *(undefined2 *)(ar4 + 0x414) = 0;
      *(undefined4 *)(ar4 + 0x418) = 1;
      break;
    case 1:
      if (*(int *)(iVar1 + 0x18) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 2;
      }
      else {
        iVar2 = FUN_8c020d90(ar5,*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(ar4 + 0x410),s0);
        if (iVar2 == 1) {
          *(undefined4 *)(ar4 + 0x418) = 2;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(iVar1 + 0x18),"Failed to load Pack:CAnimal::LoadGRReq()",0,2);
        }
      }
      break;
    case 2:
      if (*(int *)(iVar1 + 4) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 3;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(undefined4 *)(*(short *)(ar4 + 0x414) * 4 + *(int *)(iVar1 + 4)),
                           *(undefined4 *)(ar4 + 0x410),
                           *(int *)(iVar1 + 0xa0) + *(short *)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(short *)(iVar1 + 0xa4),ar5,s0,0);
        if (iVar1 == 1) {
          *(undefined2 *)(ar4 + 0x414) = 0;
          *(undefined4 *)(ar4 + 0x418) = 3;
        }
      }
      break;
    case 3:
      if (*(int *)(iVar1 + 0x1c) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 4;
      }
      else {
        puVar4 = &uStack_2c;
        uVar3 = *(undefined4 *)(ar4 + 0x410);
        iVar2 = FUN_8c020ba0(ar5,*(undefined4 *)(iVar1 + 0x1c),uVar3,puVar4);
        if (iVar2 == 1) {
          FUN_8c015bb0(iVar1 + 0xb0,uStack_2c,uVar3,puVar4,in_stack_ffffff50);
          *(undefined4 *)(ar4 + 0x418) = 4;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(iVar1 + 0x18),"Failed to load Pack:CAnimal::LoadGRReq()",0,2);
        }
      }
      break;
    case 4:
      if (*(int *)(iVar1 + 8) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 5;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(undefined4 *)(*(short *)(ar4 + 0x414) * 4 + *(int *)(iVar1 + 8)),
                           *(undefined4 *)(ar4 + 0x410),
                           *(int *)(iVar1 + 0xa8) + *(short *)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(short *)(iVar1 + 0xac),ar5,s0,1);
        if (iVar1 == 1) {
          *(undefined2 *)(ar4 + 0x414) = 0;
          *(undefined4 *)(ar4 + 0x418) = 5;
        }
      }
      break;
    case 5:
      puVar4 = auStack_24;
      uVar3 = *(undefined4 *)(ar4 + 0x410);
      iVar2 = FUN_8c0209b0(ar5,*(undefined4 *)(iVar1 + 0xc),uVar3,puVar4);
      if (iVar2 == 1) {
        FUN_8c015ad4(iVar1 + 0x70,auStack_24[0],uVar3,puVar4,in_stack_ffffff50);
        *(undefined4 *)(ar4 + 0x418) = 6;
      }
      else if (iVar2 == 0) {
        report_error_message(*(undefined4 *)(iVar1 + 0xc),"Read NJCM Failed..",0,2);
      }
      break;
    case 6:
      if (*(int *)(iVar1 + 0x20) == 0) {
        puVar4 = &uStack_28;
        uVar3 = *(undefined4 *)(ar4 + 0x410);
        iVar2 = FUN_8c020aa8(ar5,*(undefined4 *)(iVar1 + 0xc),uVar3,puVar4);
        if (iVar2 == 1) {
          (**(code **)(*(int *)(iVar1 + 0x78) + 8))((int *)(iVar1 + 0x78),uStack_28,uVar3,puVar4);
          *(undefined4 *)(ar4 + 0x418) = 7;
        }
        else if (iVar2 == 0) {
          report_error_message(*(undefined4 *)(iVar1 + 0xc),"Read NJTL Failed..",0,2);
        }
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 0xc);
        s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x20,uVar3,ar7_00);
        (**(code **)(*(int *)(iVar1 + 0x78) + 8))((int *)(iVar1 + 0x78),iVar1 + 0x28,uVar3,ar7_00);
        *(undefined4 *)(ar4 + 0x418) = 7;
      }
      break;
    case 7:
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar3 = get_field_4_0253e4(iVar1 + 0x78,ar5,iVar6,ar7_00);
        iVar2 = FUN_8c020e80(ar5,*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(ar4 + 0x410),uVar3);
        if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(iVar1 + 0x14),"Failed to load tex:CAnimal::LoadTRReq()",0,2);
        }
      }
      else {
        uVar3 = get_field_4_0253e4(iVar1 + 0x78,ar5,iVar6,ar7_00);
        iVar2 = s_CDCGD_ReadPVMFileReq_021082
                          (ar5,*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(ar4 + 0x410),uVar3,s0);
        if (iVar2 == 0) {
          report_error_message
                    ("Failed to load body pvm textuer..","CAnimal::LoadTextureResourceReq()",0,2);
        }
      }
      if (iVar2 == 1) {
        if (*(int *)(iVar1 + 0x34) == 0) {
          *(undefined4 *)(ar4 + 0x418) = 8;
        }
        else {
          *(undefined4 *)(ar4 + 0x418) = 9;
        }
      }
      break;
    case 8:
      if (*(int *)(iVar1 + 0x10) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
      else {
        if (*(int *)(iVar1 + 0x48) == 0) {
          uVar3 = get_field_4_0253e4(iVar1 + 0x88,get_field_4_0253e4,iVar6,ar7_00);
          iVar2 = FUN_8c020e80(ar5,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(ar4 + 0x410),uVar3)
          ;
          if (iVar2 == 0) {
            report_error_message
                      (*(undefined4 *)(iVar1 + 0x10),"Failed to load tex:CAnimal::LoadTRReq()",0,2);
          }
        }
        else {
          s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x48,*(undefined4 *)(iVar1 + 0xc),ar7_00);
          iVar6 = iVar1 + 0x50;
          uVar3 = 0x88;
          iVar2 = iVar6;
          (**(code **)(*(int *)(iVar1 + 0x88) + 8))((int *)(iVar1 + 0x88),iVar6,0x88,iVar6);
          uVar3 = get_field_4_0253e4(iVar1 + 0x88,iVar6,uVar3,iVar2);
          iVar2 = s_CDCGD_ReadPVMFileReq_021082
                            (ar5,*(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(ar4 + 0x410),uVar3,s0
                            );
          if (iVar2 == 0) {
            report_error_message
                      ("Failed to load face pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
          }
        }
        if (iVar2 == 1) {
          if (*(int *)(iVar1 + 0x5c) == 0) {
            *(undefined4 *)(ar4 + 0x418) = 0;
            uVar5 = 1;
          }
          else {
            *(undefined4 *)(ar4 + 0x418) = 0xb;
          }
        }
      }
      break;
    case 9:
      iVar6 = *(int *)(iVar1 + 0xc);
      s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x34,iVar6,ar7_00);
      a5 = iVar1 + 0x3c;
      (**(code **)(*(int *)(iVar1 + 0x80) + 8))((int *)(iVar1 + 0x80),a5,iVar6,ar7_00);
      *(undefined4 *)(ar4 + 0x418) = 10;
    case 10:
      uVar3 = get_field_4_0253e4(iVar1 + 0x80,a5,iVar6,ar7_00);
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  ("Failed to load SPECIAL body pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 0x418) = 8;
      }
      break;
    case 0xb:
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      iVar6 = iVar1 + 0x5c;
      s_CAnimal_SetPVMTexture_s_029404(ar4,iVar6,uVar3,iVar6);
      iVar2 = iVar1 + 100;
      (**(code **)(*(int *)(iVar1 + 0x90) + 8))((int *)(iVar1 + 0x90),iVar2,uVar3,iVar6);
      uVar3 = get_field_4_0253e4(iVar1 + 0x90,iVar2,uVar3,iVar6);
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(iVar1 + 0x5c),*(undefined4 *)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  ("Failed to load SPECIAL face pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
    }
  }
  else {
    report_error_message("Invalid Load Sequence..","CAnimal::LoadGResourceReq()",0,2);
  }
  return uVar5;
}



/* s_Failed_to_Read_CAnimal_LoadM_02839e @ 8c028390 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_Failed_to_Read_CAnimal_LoadM_02839e
          (undefined4 ar4,char *ar5,undefined4 ar6,undefined4 *ar7,short *s0,undefined4 s4,
          undefined4 s8,undefined4 s12,int s16)

{
  undefined4 *ar7_00;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 auStack_24 [2];
  
  uVar1 = 0;
  iVar2 = 2;
  auStack_24[0] = 0;
  uVar3 = ar6;
  if (s16 == 0) {
    ar7_00 = auStack_24;
    iVar2 = FUN_8c020ba0(s8,ar5,ar6,ar7_00);
  }
  else {
    ar7_00 = ar7;
    if (s16 == 1) {
      if (*ar5 == '\0') {
        iVar2 = 1;
      }
      else {
        ar7_00 = auStack_24;
        iVar2 = FUN_8c020c98(s8,ar5,ar6,ar7_00);
      }
    }
  }
  if (iVar2 == 1) {
    if (s16 == 0) {
      FUN_8c015bb0(ar7,auStack_24[0],ar6,ar7_00,uVar3);
    }
    else if (s16 == 1) {
      FUN_8c015be4(ar7,auStack_24[0],ar6,ar7_00,uVar3);
    }
    *s0 = *s0 + 1;
    if (*s0 == (short)s4) {
      uVar1 = 1;
    }
  }
  else if (iVar2 == 0) {
    report_error_message(ar5,"Failed to Read ..:CAnimal::LoadMFile()",1,2);
  }
  return uVar1;
}



/* s_Failed_to_Load_CAnimal_LoadG_0284b8 @ 8c0284ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_to_Load_CAnimal_LoadG_0284b8(int ar4,undefined4 ar5,int ar6,undefined4 *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *ar7_00;
  undefined4 *ar7_01;
  int iVar5;
  int in_stack_ffffff9c;
  undefined4 uStack_24;
  undefined4 auStack_20 [2];
  
  iVar5 = *(int *)(ar4 + 0x328) + ar6 * 0x124;
  auStack_20[0] = 0;
  uStack_24 = 0;
  ar7_01 = (undefined4 *)(ar4 + ar6);
  iVar3 = ar6;
  if (*(int *)(iVar5 + 0x18) != 0) {
    iVar3 = *(int *)(ar4 + 0x410);
    ar7 = ar7_01;
    iVar1 = FUN_8c020ddc(ar5,*(undefined4 *)(iVar5 + 0x18),iVar3,ar7_01);
    if (iVar1 == 0) {
      ar7 = (undefined4 *)0x2;
      iVar3 = 0;
      report_error_message(*(undefined4 *)(iVar5 + 0x18),"Failed to Load :CAnimal::LoadGRWait",0,2);
    }
  }
  for (iVar1 = 0; iVar1 < *(short *)(iVar5 + 0xa4); iVar1 = iVar1 + 1) {
    if (**(char **)(iVar1 * 4 + *(int *)(iVar5 + 4)) == '\0') {
      ar7 = (undefined4 *)0x2;
      iVar3 = 0;
      report_error_message("Attach NULL!!",s_CAnimal__LoadGRWait___8c130008,0,2);
      auStack_20[0] = 0;
    }
    else {
      ar7 = auStack_20;
      iVar3 = *(int *)(ar4 + 0x410);
      iVar2 = FUN_8c020bec(ar5,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 4)),iVar3,ar7);
      if (iVar2 == 0) {
        ar7 = (undefined4 *)0x2;
        iVar3 = 0;
        report_error_message
                  (*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 4)),"Read NMDM Failed..",0,2);
      }
    }
    FUN_8c015bb0(*(int *)(iVar5 + 0xa0) + iVar1 * 4,auStack_20[0],iVar3,ar7,in_stack_ffffff9c);
  }
  if (*(int *)(iVar5 + 0x1c) != 0) {
    ar7 = auStack_20;
    iVar3 = *(int *)(ar4 + 0x410);
    iVar1 = FUN_8c020bec(ar5,*(undefined4 *)(iVar5 + 0x1c),iVar3,ar7);
    if (iVar1 == 1) {
      FUN_8c015bb0(iVar5 + 0xb0,auStack_20[0],iVar3,ar7,in_stack_ffffff9c);
    }
    else {
      ar7 = (undefined4 *)0x2;
      iVar3 = 0;
      report_error_message
                (*(undefined4 *)(iVar5 + 0x1c),s_Failed_to_read_Munzu_hand_motion_8c13001e,0,2);
    }
  }
  for (iVar1 = 0; iVar1 < *(short *)(iVar5 + 0xac); iVar1 = iVar1 + 1) {
    if (**(char **)(iVar1 * 4 + *(int *)(iVar5 + 8)) == '\0') {
      auStack_20[0] = 0;
    }
    else {
      ar7 = auStack_20;
      iVar3 = *(int *)(ar4 + 0x410);
      iVar2 = FUN_8c020ce4(ar5,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 8)),iVar3,ar7);
      if (iVar2 == 0) {
        ar7 = (undefined4 *)0x2;
        iVar3 = 0;
        report_error_message
                  (*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 8)),s_Read_NSSM_Failed___8c130041,0,
                   2);
      }
      FUN_8c015be4(*(int *)(*(int *)(ar4 + 0x328) + ar6 * 0x124 + 0xa8) + iVar1 * 4,auStack_20[0],
                   iVar3,ar7,in_stack_ffffff9c);
    }
    in_stack_ffffff9c = iVar1;
    FUN_8c015be4(*(int *)(iVar5 + 0xa8) + iVar1 * 4,auStack_20[0],iVar3,ar7,iVar1);
  }
  ar7_00 = &uStack_24;
  uVar4 = *(undefined4 *)(ar4 + 0x410);
  iVar3 = FUN_8c0209fc(ar5,*(undefined4 *)(iVar5 + 0xc),uVar4,ar7_00);
  if (iVar3 == 0) {
    ar7_00 = (undefined4 *)0x2;
    uVar4 = 0;
    report_error_message
              (*(undefined4 *)(iVar5 + 0xc),s_Read_NJCM_Failed___CAnimal__Load_8c130054,0,2);
  }
  FUN_8c015ad4(iVar5 + 0x70,uStack_24,uVar4,ar7_00,in_stack_ffffff9c);
  s_CAnimal_LoadGResourceWait_0287ac(ar4,ar5,0,ar7_01);
  uVar4 = 0;
  if (*(int *)(iVar5 + 0x34) != 0) {
    uVar4 = s_CAnimal_LoadGResourceWait_0287ac(ar4,ar5,1,ar7_01);
  }
  return uVar4;
}



/* s_CAnimal_LoadGResourceWait_0287ac @ 8c0287a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_CAnimal_LoadGResourceWait_0287ac(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *ar5_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *ar7_00;
  undefined4 auStack_18 [2];
  
  iVar1 = (**(code **)(DAT_8c028a78 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7);
  if (*(int *)(ar6 * 0x14 + iVar1 + 0x20) == 0) {
    auStack_18[0] = 0;
    ar7_00 = auStack_18;
    uVar4 = *(undefined4 *)(DAT_8c028a84 + ar4);
    iVar3 = (*(code *)PTR_FUN_8c028a9c)(ar5,*(undefined4 *)(iVar1 + 0xc),uVar4,ar7_00);
    if (iVar3 == 0) {
      ar7_00 = (undefined4 *)0x2;
      uVar4 = 0;
      (*(code *)PTR_report_error_message_8c028a98)
                (*(undefined4 *)(iVar1 + 0xc),PTR_s_GRAPHICS_COMMON_8c028a8c + DAT_8c028aa0,0,2);
    }
    piVar2 = (int *)(iVar1 + ar6 * 8 + 0x78);
    uVar5 = auStack_18[0];
    (**(code **)(*piVar2 + 8))(piVar2,auStack_18[0],uVar4,ar7_00);
    uVar4 = (*(code *)PTR_get_field_4_0253e4_8c028a80)(iVar1 + ar6 * 8 + 0x78,uVar5,uVar4,ar7_00);
    uVar5 = *(undefined4 *)(DAT_8c028a84 + ar4);
    ar5_00 = *(undefined **)(iVar1 + 0x14);
    iVar3 = (*(code *)PTR_FUN_8c028aa4)(ar5,ar5_00,uVar5,uVar4);
    if (iVar3 == 0) {
      uVar4 = 2;
      uVar5 = 0;
      ar5_00 = PTR_s_GRAPHICS_COMMON_8c028a8c + DAT_8c028aa8;
      (*(code *)PTR_report_error_message_8c028a98)(*(undefined4 *)(iVar1 + 0x14),ar5_00,0,2);
    }
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    (*(code *)PTR_s_CAnimal_SetPVMTexture_s_029404_8c028a7c)
              (ar4,ar6 * 0x14 + iVar1 + 0x20,uVar4,ar7);
    iVar3 = ar6 * 0x14 + iVar1 + 0x28;
    piVar2 = (int *)(iVar1 + ar6 * 8 + 0x78);
    (**(code **)(*piVar2 + 8))(piVar2,iVar3,uVar4,ar7);
    uVar4 = (*(code *)PTR_get_field_4_0253e4_8c028a80)(iVar1 + ar6 * 8 + 0x78,iVar3,uVar4,ar7);
    uVar5 = *(undefined4 *)(DAT_8c028a84 + ar4);
    ar5_00 = *(undefined **)(ar6 * 0x14 + iVar1 + 0x20);
    iVar3 = (*(code *)PTR_FUN_8c028a88)(ar5,ar5_00,uVar5,uVar4);
    if (iVar3 == 0) {
      uVar4 = 2;
      uVar5 = 0;
      ar5_00 = PTR_s_GRAPHICS_COMMON_8c028a8c + DAT_8c028a90;
      (*(code *)PTR_report_error_message_8c028a98)
                (PTR_s_GRAPHICS_COMMON_8c028a8c + DAT_8c028a94,ar5_00,0,2);
    }
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
    iVar3 = 0;
  }
  else if (*(int *)(ar6 * 0x14 + iVar1 + 0x48) == 0) {
    uVar4 = (*(code *)PTR_get_field_4_0253e4_8c028a80)
                      (iVar1 + ar6 * 8 + DAT_8c028aac,ar5_00,uVar5,uVar4);
    iVar3 = (*(code *)PTR_FUN_8c028aa4)
                      (ar5,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(DAT_8c028a84 + ar4),uVar4);
    if (iVar3 == 0) {
      iVar3 = (*(code *)PTR_report_error_message_8c028a98)
                        (*(undefined4 *)(iVar1 + 0x10),PTR_s_GRAPHICS_COMMON_8c028a8c + DAT_8c028ab4
                         ,0,2);
    }
  }
  else {
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    (*(code *)PTR_s_CAnimal_SetPVMTexture_s_029404_8c028a7c)
              (ar4,ar6 * 0x14 + iVar1 + 0x48,uVar5,uVar4);
    iVar3 = ar6 * 0x14 + iVar1 + 0x50;
    piVar2 = (int *)(iVar1 + ar6 * 8 + DAT_8c028aac);
    (**(code **)(*piVar2 + 8))(piVar2,iVar3,uVar5,uVar4);
    uVar4 = (*(code *)PTR_get_field_4_0253e4_8c028a80)
                      (iVar1 + ar6 * 8 + DAT_8c028aac,iVar3,uVar5,uVar4);
    iVar3 = (*(code *)PTR_FUN_8c028a88)
                      (ar5,*(undefined4 *)(ar6 * 0x14 + iVar1 + 0x48),
                       *(undefined4 *)(DAT_8c028a84 + ar4),uVar4);
    if (iVar3 == 0) {
      iVar3 = (*(code *)PTR_report_error_message_8c028a98)
                        (PTR_s_GRAPHICS_COMMON_8c028a8c + DAT_8c028ab0,
                         PTR_s_GRAPHICS_COMMON_8c028a8c + DAT_8c028a90,0,2);
    }
  }
  return iVar3;
}



/* FUN_8c028ab8 @ 8c028ab8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c028ab8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c028af0)(ar4 + DAT_8c028aec,ar5,ar6,ar7);
  return *(int *)(DAT_8c028af4 + ar4) + (short)uVar1 * DAT_8c028af8;
}



/* FUN_8c028afc @ 8c028afc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c028afc(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar7_00;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_8c028bf0 + ar4) + ar6 * DAT_8c028bf4;
  ar7_00 = ar4 + ar6;
  for (iVar3 = 0; iVar3 < *(short *)(DAT_8c028c04 + iVar2); iVar3 = iVar3 + 1) {
    if (**(char **)(iVar3 * 4 + *(int *)(iVar2 + 4)) != '\0') {
      (*(code *)PTR_FUN_8c028bfc)
                (ar5,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar2 + 4)),
                 *(undefined4 *)(DAT_8c028bf8 + ar4),ar7_00);
    }
    if (**(char **)(iVar3 * 4 + *(int *)(iVar2 + 8)) != '\0') {
      (*(code *)PTR_FUN_8c028c00)
                (ar5,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar2 + 8)),
                 *(undefined4 *)(DAT_8c028bf8 + ar4),ar7_00);
    }
  }
  iVar3 = ar7_00;
  (*(code *)PTR_FUN_8c028c08)
            (ar5,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(DAT_8c028bf8 + ar4),ar7_00);
  if (*(int *)(iVar2 + 0x20) == 0) {
    iVar3 = ar7_00;
    (*(code *)PTR_FUN_8c028c0c)
              (ar5,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(DAT_8c028bf8 + ar4),ar7_00);
  }
  if (*(int *)(iVar2 + 0x18) != 0) {
    (*(code *)PTR_FUN_8c028c10)
              (ar5,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(DAT_8c028bf8 + ar4),ar7_00);
    iVar3 = ar7_00;
  }
  uVar1 = (**(code **)(DAT_8c028c14 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,iVar3);
  return uVar1;
}



/* s_Failed_wrap_028c18 @ 8c028c18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_wrap_028c18(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_8c028c84 + ar4) + ar6 * DAT_8c028c88;
  (*(code *)PTR_s_Failed_s_015312_8c028c8c)(iVar2 + 0x78,ar5,ar6,ar7);
  if (*(int *)(iVar2 + 0x34) != 0) {
    (*(code *)PTR_s_Failed_s_015312_8c028c8c)(iVar2 + DAT_8c028c90,ar5,ar6,ar7);
  }
  uVar1 = 0;
  if (*(int *)(iVar2 + 0x10) != 0) {
    (*(code *)PTR_s_Failed_s_015312_8c028c8c)(iVar2 + DAT_8c028c94,ar5,ar6,ar7);
    uVar1 = 0;
    if (*(int *)(iVar2 + 0x5c) != 0) {
      uVar1 = (*(code *)PTR_s_Failed_s_015312_8c028c8c)(iVar2 + DAT_8c028c98,ar5,ar6,ar7);
    }
  }
  return uVar1;
}



/* FUN_8c028c9c @ 8c028c9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c028c9c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_6c_028cc4_8c028cc0)
                    (*(undefined4 *)(DAT_8c028cbc + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* get_field_6c_028cc4 @ 8c028cc4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_6c_028cc4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x6c);
}



/* FUN_8c028ccc @ 8c028ccc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c028ccc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  FUN_8c0f4e34(ar4,ar5,ar6,ar7);
  FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7);
  iVar1 = ar5 + 0xd8;
  FUN_8c035338(ar4 + 0x2dc,iVar1,ar6,ar7);
  iVar1 = get_field_13c_028d9c(ar4 + 0x174,iVar1,ar6,ar7);
  if (iVar1 == 2) {
    (**(code **)(**(int **)(ar4 + 0x308) + 0x2c))(*(int **)(ar4 + 0x308),ar5 + 200,2,ar7);
  }
  else {
    (**(code **)(**(int **)(ar4 + 0x308) + 0x24))(*(int **)(ar4 + 0x308),ar5 + 200,ar6,ar7);
  }
  *(undefined4 *)(ar4 + 0x460) = *(undefined4 *)(ar5 + 0xe8);
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x468) = *(undefined4 *)(ar5 + 0xec);
  }
  else {
    *(undefined8 *)(ar4 + 0x468) = *(undefined8 *)(ar5 + 0xec);
  }
  return 0xec;
}



/* get_field_13c_028d9c @ 8c028d9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_13c_028d9c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c028da4 + ar4);
}



/* FUN_8c028da8 @ 8c028da8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c028da8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c028e04)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c028e0c)(ar4 + DAT_8c028e08,ar5 + 0x24,ar6,ar7);
  (*(code *)PTR_FUN_8c028e14)(ar4 + DAT_8c028e10,ar5 + 0x58,ar6,ar7);
  (**(code **)(**(int **)(DAT_8c028e18 + ar4) + 0x24))
            (*(int **)(DAT_8c028e18 + ar4),ar5 + 0x48,ar6,ar7);
  iVar1 = DAT_8c028e1c;
  *(undefined4 *)(DAT_8c028e1c + ar4) = *(undefined4 *)(ar5 + 0x68);
  return iVar1;
}



/* FUN_8c028e20 @ 8c028e20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c028e20(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint ar5_00;
  undefined4 uVar2;
  undefined2 in_stack_ffffffe8;
  undefined2 uVar3;
  
  uVar1 = FUN_8c028ee4(ar5,ar5,ar6,ar7);
  uVar2 = CONCAT22((short)uVar1,in_stack_ffffffe8);
  uVar1 = uVar1 & 0xffff;
  FUN_8c028edc(ar4 + 0x21c,uVar1,ar6,ar7,uVar2);
  uVar3 = (undefined2)((uint)uVar2 >> 0x10);
  uVar1 = FUN_8c02602c(ar5,uVar1,ar6,ar7);
  ar5_00 = uVar1 & 0xffff;
  FUN_8c028ed4(ar4 + 0x21c,ar5_00,ar6,ar7,CONCAT22(uVar3,(short)uVar1));
  uVar2 = get_field_13c_028d9c(ar4 + 0x174,ar5_00,ar6,ar7);
  uVar2 = FUN_8c034d38(ar4 + 0x2dc,uVar2,ar6,ar7);
  uVar2 = FUN_8c028ec8(*(undefined4 *)(ar4 + 0x308),uVar2,ar6,ar7);
  return uVar2;
}



/* FUN_8c028ec8 @ 8c028ec8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c028ec8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c028ed0;
  *(undefined1 *)(DAT_8c028ed0 + ar4) = (undefined1)ar5;
  return iVar1;
}



/* FUN_8c028ed4 @ 8c028ed4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c028ed4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  return in_r0;
}



/* FUN_8c028edc @ 8c028edc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c028edc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 8) = ar5;
  return in_r0;
}



/* FUN_8c028ee4 @ 8c028ee4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c028ee4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(short *)(DAT_8c028eec + ar4);
}



/* FUN_8c028ef0 @ 8c028ef0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c028f20) */
/* WARNING: Removing unreachable block (ram,0x8c028f18) */
/* WARNING: Removing unreachable block (ram,0x8c028f10) */
/* WARNING: Removing unreachable block (ram,0x8c028f06) */
/* WARNING: Removing unreachable block (ram,0x8c028efe) */
/* WARNING: Removing unreachable block (ram,0x8c028ef4) */
/* WARNING: Removing unreachable block (ram,0x8c028efc) */
/* WARNING: Removing unreachable block (ram,0x8c028f00) */
/* WARNING: Removing unreachable block (ram,0x8c028f0e) */
/* WARNING: Removing unreachable block (ram,0x8c028f12) */
/* WARNING: Removing unreachable block (ram,0x8c028f1e) */
/* WARNING: Removing unreachable block (ram,0x8c028f22) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c028ef0(int ar4,float *ar5,float *ar6,float *ar7)

{
  *ar5 = *(float *)(ar4 + 0x30) + *(float *)(ar4 + 0x3c8);
  *ar6 = *(float *)(ar4 + 0x34) + *(float *)(ar4 + 0x3cc);
  *ar7 = *(float *)(ar4 + 0x38) + *(float *)(ar4 + 0x3d0);
  return 0x3d0;
}



/* FUN_8c028f34 @ 8c028f34 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c028f4c) */
/* WARNING: Removing unreachable block (ram,0x8c028f44) */
/* WARNING: Removing unreachable block (ram,0x8c028f3a) */
/* WARNING: Removing unreachable block (ram,0x8c028f3c) */
/* WARNING: Removing unreachable block (ram,0x8c028f46) */
/* WARNING: Removing unreachable block (ram,0x8c028f4e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c028f34(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x3c8);
  *ar6 = *(undefined4 *)(ar4 + 0x3cc);
  *ar7 = *(undefined4 *)(ar4 + 0x3d0);
  return 0x3d0;
}



/* FUN_8c028f60 @ 8c028f60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c028f60(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  int ar5_00;
  char cVar2;
  
  cVar2 = '\0';
  FUN_8c0f4f0c(ar4,ar5,ar6,ar7);
  FUN_8c02cf20(ar4 + 0x174,ar5 + 0x4c,ar6,ar7);
  ar5_00 = ar5 + 0xd8;
  FUN_8c03539c(ar4 + 0x2dc,ar5_00,ar6,ar7);
  iVar1 = get_field_13c_028d9c(ar4 + 0x174,ar5_00,ar6,ar7);
  if (iVar1 == 2) {
    a6 = get_field_13c_028d9c(ar4 + 0x174,ar5_00,ar6,ar7);
    (**(code **)(**(int **)(ar4 + 0x308) + 0x30))(*(int **)(ar4 + 0x308),ar5 + 200,a6,ar7);
  }
  else {
    (**(code **)(**(int **)(ar4 + 0x308) + 0x28))(*(int **)(ar4 + 0x308),ar5 + 200,ar6,ar7);
  }
  *(undefined4 *)(ar5 + 0xe8) = *(undefined4 *)(ar4 + 0x460);
  if (cVar2 == '\0') {
    *(undefined4 *)(ar5 + 0xec) = *(undefined4 *)(ar4 + 0x468);
  }
  else {
    *(undefined8 *)(ar5 + 0xec) = *(undefined8 *)(ar4 + 0x468);
  }
  return 0x468;
}



/* FUN_8c02903c @ 8c02903c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02903c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c02909c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0290a4)(ar4 + DAT_8c0290a0,ar5 + 0x24,ar6,ar7);
  (*(code *)PTR_FUN_8c0290ac)(ar4 + DAT_8c0290a8,ar5 + 0x58,ar6,ar7);
  (**(code **)(**(int **)(DAT_8c0290b0 + ar4) + 0x28))
            (*(int **)(DAT_8c0290b0 + ar4),ar5 + 0x48,ar6,ar7);
  *(undefined4 *)(ar5 + 0x68) = *(undefined4 *)(DAT_8c0290b4 + ar4);
  return 0x68;
}



/* FUN_8c0290b8 @ 8c0290b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0290b8(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  char cVar3;
  
  cVar3 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  puVar2 = (undefined8 *)(*(int *)(ar4 + 0x328) + (short)uVar1 * 0x124 + 0xf4);
  if (cVar3 == '\0') {
    *(undefined4 *)ar5 = *(undefined4 *)puVar2;
  }
  else {
    *ar5 = *puVar2;
  }
  return 0xf0;
}



/* FUN_8c02911c @ 8c02911c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c029194) */
/* WARNING: Removing unreachable block (ram,0x8c029180) */
/* WARNING: Removing unreachable block (ram,0x8c02916c) */
/* WARNING: Removing unreachable block (ram,0x8c029158) */
/* WARNING: Removing unreachable block (ram,0x8c029162) */
/* WARNING: Removing unreachable block (ram,0x8c029176) */
/* WARNING: Removing unreachable block (ram,0x8c02918a) */
/* WARNING: Removing unreachable block (ram,0x8c029196) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02911c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  undefined4 in_fr1;
  ulonglong uVar2;
  char cVar3;
  
  cVar3 = '\0';
  *(undefined4 *)(ar4 + 0x330) = 0;
  *(undefined4 *)(ar4 + 0x308) = 0;
  *(undefined4 *)(ar4 + 0x30c) = 0;
  *(undefined4 *)(ar4 + 0x328) = 0;
  *(undefined4 *)(ar4 + 0x32c) = 0;
  *(undefined4 *)(ar4 + 0x424) = 1;
  *(undefined4 *)(ar4 + 0x428) = 0;
  *(undefined4 *)(ar4 + 0x364) = 0;
  *(undefined4 *)(ar4 + 0x368) = 0;
  *(undefined4 *)(ar4 + 0x36c) = 0x3f800000;
  *(undefined4 *)(ar4 + 0x390) = 0;
  *(undefined4 *)(ar4 + 0x394) = 0;
  *(undefined4 *)(ar4 + 0x398) = 0x3f800000;
  uVar2 = CONCAT44(0x3e4ccccd,in_fr1);
  *(undefined4 *)(ar4 + 0x170) = 0x3e4ccccd;
  FUN_8c0293d4(ar4 + 0x174,ar5,ar6,ar7);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 1;
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x334) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x334) = uVar2 & 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x430) = 0;
  *(undefined4 *)(ar4 + 0x42c) = 0;
  *(undefined4 *)(ar4 + 0x434) = 0;
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x408) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x408) = uVar2 & 0xffffffff;
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x40c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x40c) = CONCAT44(0x3f800000,(int)uVar2);
  }
  *(undefined4 *)(ar4 + 0x410) = 0;
  *(undefined2 *)(ar4 + 0x414) = 0;
  *(undefined4 *)(ar4 + 0x418) = 0;
  *(undefined4 *)(ar4 + 0x420) = 0;
  *(undefined2 *)(ar4 + 0x41c) = 0;
  *(undefined4 *)(ar4 + 0x45c) = 0;
  *(undefined4 *)(ar4 + 0x470) = 0;
  *(undefined4 *)(ar4 + 0x458) = 0;
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x438) = 0;
    *(undefined4 *)(ar4 + 0x43c) = 0;
    *(undefined4 *)(ar4 + 0x440) = 0;
    *(undefined4 *)(ar4 + 0x444) = 0;
    *(undefined4 *)(ar4 + 0x448) = 0;
    *(undefined4 *)(ar4 + 0x44c) = 0;
    *(undefined4 *)(ar4 + 0x450) = 0;
    uVar2 = uVar2 & 0xffffffff;
    *(undefined4 *)(ar4 + 0x454) = 0;
  }
  else {
    *(undefined8 *)(ar4 + 0x438) = 0;
    *(undefined8 *)(ar4 + 0x43c) = 0;
    *(undefined8 *)(ar4 + 0x440) = 0;
    *(undefined8 *)(ar4 + 0x444) = 0x3f80000000000000;
    *(undefined8 *)(ar4 + 0x448) = 0;
    *(undefined8 *)(ar4 + 0x44c) = 0;
    *(undefined8 *)(ar4 + 0x450) = 0;
    uVar2 = 0;
    *(undefined8 *)(ar4 + 0x454) = 0x3f80000000000000;
  }
  *(undefined2 *)(ar4 + 0x464) = 0;
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x468) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x468) = uVar2;
  }
  *(undefined1 *)(ar4 + 0x46c) = 1;
  *(undefined4 *)(ar4 + 0x474) = 0;
  *(undefined4 *)(ar4 + 0x47c) = 0;
  *(undefined4 *)(ar4 + 0x478) = 0;
  *(undefined4 *)(ar4 + 0x48c) = 0;
  ar4_00 = rand(ar4,ar5,ar6,ar7);
  iVar1 = libgcc_divide_helper_01031c(ar4_00,100,ar6,ar7);
  if (iVar1 < 0x14) {
    *(undefined4 *)(ar4 + 0x460) = 0;
  }
  else if (iVar1 < 0x5a) {
    *(undefined4 *)(ar4 + 0x460) = 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x460) = 2;
  }
  return 1;
}



/* FUN_8c0293d4 @ 8c0293d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0293d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0293f8(ar4 + 0xf8,1,ar6,ar7,ar4);
  return uVar1;
}



/* FUN_8c0293f8 @ 8c0293f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0293f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 4) = ar5;
  return in_r0;
}



/* s_CAnimal_SetPVMTexture_s_029404 @ 8c029400 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 *
s_CAnimal_SetPVMTexture_s_029404(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ar5_00;
  undefined1 auStack_10c [260];
  
  ar5_00 = ar5;
  if (*(int *)(ar5 + 0x10) == 0) {
    (*(code *)PTR_FUN_8c0294a8)
              (auStack_10c,ar5,ar6,ar7,PTR_s_GRAPHICS_COMMON_8c0294a0 + DAT_8c0294a4);
    ar7 = 2;
    ar6 = 0;
    ar5_00 = auStack_10c;
    (*(code *)PTR_report_error_message_8c0294b0)
              (PTR_s_GRAPHICS_COMMON_8c0294a0 + DAT_8c0294ac,ar5_00,0,2);
  }
  if (*(int *)(ar5 + 4) == 0) {
    (*(code *)PTR_FUN_8c0294a8)
              (auStack_10c,ar5_00,ar6,ar7,PTR_s_GRAPHICS_COMMON_8c0294a0 + DAT_8c0294a4);
    (*(code *)PTR_report_error_message_8c0294b0)
              (PTR_s_GRAPHICS_COMMON_8c0294a0 + DAT_8c0294b4,auStack_10c,0,2);
  }
  (*(code *)PTR_FUN_8c0294bc)
            (ar5 + 8,*(undefined4 *)(ar5 + 0x10),DAT_8c0294b8,*(undefined4 *)(ar5 + 4));
  return ar5 + 8;
}



/* FUN_8c0294c0 @ 8c0294c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0294c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  return 0x74;
}



/* FUN_8c029510 @ 8c029510 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c029510) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c029510(int ar4,int ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  int ar6_00;
  int *piVar4;
  double dVar5;
  undefined4 in_fr15;
  double in_xd14;
  char cVar6;
  char cVar7;
  undefined4 in_stack_ffffffd4;
  undefined2 uVar8;
  undefined4 ain0;
  
  uVar8 = (undefined2)((uint)in_stack_ffffffd4 >> 0x10);
  cVar7 = '\0';
  cVar6 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  ain0 = CONCAT22(uVar8,(short)uVar1);
  piVar4 = (int *)(*(int *)(ar4 + 0x328) + (short)uVar1 * 0x124);
  uVar1 = 0x40;
  iVar3 = _DAT_8c27d1ec * 0x40 + -0x73d83e14;
  FUN_8c013fb4((_DAT_8c27d1ec + 1) * 0x40 + -0x73d83e14,iVar3,0x40,ar7);
  _DAT_8c27d1ec = _DAT_8c27d1ec + 1;
  FUN_8c256328(0,iVar3,uVar1,ar7,ain0);
  iVar3 = ar5;
  ar6_00 = ar6;
  FUN_8c029af0(ar4,ar5,ar6,ar7);
  if (*(int *)(ar5 + 4) != 0) {
    pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
    if (cVar7 == '\0') {
      in_fr15 = *(undefined4 *)pdVar2;
    }
    else {
      in_xd14 = *pdVar2;
    }
    pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
    dVar5 = in_xd14;
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(in_fr15,*(undefined4 *)(ar4 + 0x5c));
    }
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)pdVar2 = (int)((ulonglong)dVar5 >> 0x20);
    }
    else {
      *pdVar2 = dVar5;
    }
    if (*(int *)(ar4 + 0x344) == ar5) {
      iVar3 = ar5;
      FUN_8c029dec(ar4,ar5,ar6_00,ar7);
    }
    else if (*(int *)(ar4 + 0x348) == ar5) {
      ar7 = ar4 + 900;
      ar6_00 = ar4 + 0x374;
      iVar3 = ar4 + 0x364;
      FUN_8c02a2b8(ar4,iVar3,ar6_00,ar7);
      FUN_8c01538c(*piVar4 + 0x1f0,iVar3,ar6_00,ar7);
      iVar3 = ar4 + 900;
      FUN_8c029ca8(ar4,iVar3,ar6_00,ar7);
      FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),iVar3,ar6_00,ar7);
    }
    else if (*(int *)(ar4 + 0x34c) == ar5) {
      ar7 = ar4 + 0x3b0;
      ar6_00 = ar4 + 0x3a0;
      iVar3 = ar4 + 0x390;
      FUN_8c02a2b8(ar4,iVar3,ar6_00,ar7);
      FUN_8c01538c(*piVar4 + 0x1f0,iVar3,ar6_00,ar7);
      iVar3 = ar4 + 0x3b0;
      FUN_8c029ca8(ar4,iVar3,ar6_00,ar7);
      FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),iVar3,ar6_00,ar7);
    }
    else if ((((*(int *)(ar4 + 0x358) == ar5) || (*(int *)(ar4 + 0x354) == ar5)) ||
             (*(int *)(ar4 + 0x360) == ar5)) || (*(int *)(ar4 + 0x35c) == ar5)) {
      iVar3 = ar5;
      (**(code **)(*(int *)(ar4 + 8) + 0x198))(ar4,ar5,ar6_00,ar7);
    }
    else {
      iVar3 = *(int *)(ar5 + 4);
      FUN_8c02a29c(ar4,iVar3,ar6_00,ar7);
    }
    pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
    if (cVar7 == '\0') {
      *(undefined4 *)pdVar2 = in_fr15;
    }
    else {
      *pdVar2 = in_xd14;
    }
  }
  if (*(int *)(ar4 + 0x350) == ar5) {
    FUN_8c01538c(*piVar4 + 0x1f8,iVar3,ar6_00,ar7);
    iVar3 = FUN_8c015bb8(0x8c27d3e8,iVar3,ar6_00,ar7);
    ar6_00 = ar6;
    FUN_8c029d64(ar4,iVar3,ar6,ar7);
    FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),iVar3,ar6_00,ar7);
  }
  if (*(int *)(ar5 + 0x2c) != 0) {
    iVar3 = *(int *)(ar5 + 0x2c);
    ar6_00 = ar6;
    FUN_8c029510(ar4,iVar3,ar6,ar7);
  }
  FUN_8c256210(1,iVar3,ar6_00,ar7);
  _DAT_8c27d1ec = _DAT_8c27d1ec + -1;
  uVar1 = 0;
  if (*(int *)(ar5 + 0x30) != 0) {
    uVar1 = FUN_8c029510(ar4,*(undefined4 *)(ar5 + 0x30),ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0297b8 @ 8c0297b8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0297b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0297b8(int ar4,uint *ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *ar5_00;
  undefined4 unaff_r10;
  int *piVar4;
  double dVar5;
  undefined4 in_fr15;
  double in_xd14;
  char cVar6;
  char cVar7;
  undefined4 in_stack_ffffffcc;
  undefined2 uVar8;
  undefined4 ain0;
  
  uVar8 = (undefined2)((uint)in_stack_ffffffcc >> 0x10);
  cVar7 = '\0';
  cVar6 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  ain0 = CONCAT22(uVar8,(short)uVar1);
  piVar4 = (int *)(*(int *)(ar4 + 0x328) + (short)uVar1 * 0x124);
  uVar1 = 0x40;
  iVar3 = _DAT_8c27d1ec * 0x40 + -0x73d83e14;
  FUN_8c013fb4((_DAT_8c27d1ec + 1) * 0x40 + -0x73d83e14,iVar3,0x40,ar7);
  _DAT_8c27d1ec = _DAT_8c27d1ec + 1;
  FUN_8c256328(0,iVar3,uVar1,ar7,ain0);
  ar5_00 = ar5;
  iVar3 = ar6;
  FUN_8c029af0(ar4,ar5,ar6,ar7);
  if (ar5[1] != 0) {
    unaff_r10 = *(undefined4 *)ar5[1];
  }
  if ((*ar5 & 0x80) == 0) {
    ar5_00 = (uint *)0x8c42d408;
    iVar3 = ar6;
    iVar2 = FUN_8c21f27c(ar5,0x8c42d408,ar6,ar7);
    if (iVar2 == 1) {
      *(undefined4 *)ar5[1] = 0x8c42d408;
    }
  }
  if (ar5[1] != 0) {
    if (cVar7 == '\0') {
      in_fr15 = *(undefined4 *)(ar5[1] + 0x14);
    }
    else {
      in_xd14 = *(double *)(ar5[1] + 0x14);
    }
    dVar5 = in_xd14;
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(in_fr15,*(undefined4 *)(ar4 + 0x5c));
    }
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar5[1] + 0x14) = (int)((ulonglong)dVar5 >> 0x20);
    }
    else {
      *(double *)(ar5[1] + 0x14) = dVar5;
    }
    if (*(uint **)(ar4 + 0x344) == ar5) {
      ar5_00 = ar5;
      FUN_8c029dec(ar4,ar5,iVar3,ar7);
    }
    else if (*(uint **)(ar4 + 0x348) == ar5) {
      FUN_8c0f52c8(ar4,ar5_00,iVar3,ar7);
      ar7 = ar4 + 900;
      iVar3 = ar4 + 0x374;
      iVar2 = ar4 + 0x364;
      FUN_8c02a2b8(ar4,iVar2,iVar3,ar7);
      FUN_8c01538c(*piVar4 + 0x1f0,iVar2,iVar3,ar7);
      ar5_00 = (uint *)(ar4 + 900);
      FUN_8c029ca8(ar4,ar5_00,iVar3,ar7);
      FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5_00,iVar3,ar7);
      FUN_8c0f5308(ar4,ar5_00,iVar3,ar7);
    }
    else if (*(uint **)(ar4 + 0x34c) == ar5) {
      FUN_8c0f52c8(ar4,ar5_00,iVar3,ar7);
      ar7 = ar4 + 0x3b0;
      iVar3 = ar4 + 0x3a0;
      iVar2 = ar4 + 0x390;
      FUN_8c02a2b8(ar4,iVar2,iVar3,ar7);
      FUN_8c01538c(*piVar4 + 0x1f0,iVar2,iVar3,ar7);
      ar5_00 = (uint *)(ar4 + 0x3b0);
      FUN_8c029ca8(ar4,ar5_00,iVar3,ar7);
      FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5_00,iVar3,ar7);
      FUN_8c0f5308(ar4,ar5_00,iVar3,ar7);
    }
    else if ((((*(uint **)(ar4 + 0x358) == ar5) || (*(uint **)(ar4 + 0x354) == ar5)) ||
             (*(uint **)(ar4 + 0x360) == ar5)) || (*(uint **)(ar4 + 0x35c) == ar5)) {
      ar5_00 = ar5;
      (**(code **)(*(int *)(ar4 + 8) + 0x198))(ar4,ar5,iVar3,ar7);
      *(undefined4 *)ar5[1] = unaff_r10;
    }
    else {
      ar5_00 = (uint *)ar5[1];
      FUN_8c02a29c(ar4,ar5_00,iVar3,ar7);
      *(undefined4 *)ar5[1] = unaff_r10;
    }
    if (cVar7 == '\0') {
      *(undefined4 *)(ar5[1] + 0x14) = in_fr15;
    }
    else {
      *(double *)(ar5[1] + 0x14) = in_xd14;
    }
  }
  if (*(uint **)(ar4 + 0x350) == ar5) {
    FUN_8c0f52c8(ar4,ar5_00,iVar3,ar7);
    FUN_8c01538c(*piVar4 + 0x1f8,ar5_00,iVar3,ar7);
    ar5_00 = (uint *)FUN_8c015bb8(0x8c27d3e8,ar5_00,iVar3,ar7);
    iVar3 = ar6;
    FUN_8c029d64(ar4,ar5_00,ar6,ar7);
    FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5_00,iVar3,ar7);
    FUN_8c0f5308(ar4,ar5_00,iVar3,ar7);
  }
  if (ar5[0xb] != 0) {
    ar5_00 = (uint *)ar5[0xb];
    iVar3 = ar6;
    FUN_8c0297b8(ar4,ar5_00,ar6,ar7);
  }
  FUN_8c256210(1,ar5_00,iVar3,ar7);
  _DAT_8c27d1ec = _DAT_8c27d1ec + -1;
  uVar1 = 0;
  if (ar5[0xc] != 0) {
    uVar1 = FUN_8c0297b8(ar4,ar5[0xc],ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c029af0 @ 8c029af0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c029b32) */
/* WARNING: Removing unreachable block (ram,0x8c029b28) */
/* WARNING: Removing unreachable block (ram,0x8c029b1e) */
/* WARNING: Removing unreachable block (ram,0x8c029b22) */
/* WARNING: Removing unreachable block (ram,0x8c029b2c) */
/* WARNING: Removing unreachable block (ram,0x8c029b36) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c029af0(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar4_00;
  int ar5_00;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 in_stack_ffffff88;
  undefined1 auStack_74 [64];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar5 = '\0';
  iVar2 = ar6;
  if (**(int **)(ar4 + 0x434) == 0) {
    uStack_1c = *(undefined4 *)(ar5 + 8);
    uStack_18 = *(undefined4 *)(ar5 + 0xc);
    uStack_14 = *(undefined4 *)(ar5 + 0x10);
    ar5_00 = ar5;
  }
  else {
    ar5_00 = ar6;
    FUN_8c2545ec(&uStack_1c,ar6,ar6,ar7);
  }
  if (*(int *)(*(int *)(ar4 + 0x434) + 4) == 0) {
    uStack_34 = *(undefined4 *)(ar5 + 0x14);
    uStack_30 = *(undefined4 *)(ar5 + 0x18);
    uStack_2c = *(undefined4 *)(ar5 + 0x1c);
  }
  else {
    ar5_00 = ar6;
    FUN_8c254698(&uStack_34,ar6,iVar2,ar7);
  }
  if (*(int *)(*(int *)(ar4 + 0x434) + 8) == 0) {
    if (cVar5 == '\0') {
      uStack_28 = *(undefined4 *)(ar5 + 0x20);
      uStack_24 = *(undefined4 *)(ar5 + 0x24);
      uStack_20 = *(undefined4 *)(ar5 + 0x28);
    }
    else {
      uStack_28 = (undefined4)*(undefined8 *)(ar5 + 0x20);
      uStack_24 = (undefined4)*(undefined8 *)(ar5 + 0x24);
      uStack_20 = (undefined4)*(undefined8 *)(ar5 + 0x28);
      uStack_1c = (undefined4)((ulonglong)*(undefined8 *)(ar5 + 0x28) >> 0x20);
    }
  }
  else {
    FUN_8c254780(&uStack_28,ar6,iVar2,ar7);
    ar5_00 = ar6;
  }
  FUN_8c25b5d0(0,ar5_00,iVar2,ar7,in_stack_ffffff88);
  uVar1 = uStack_34;
  uVar3 = uStack_30;
  uVar4 = uStack_2c;
  FUN_8c256e18(0,uStack_34,uStack_30,uStack_2c,in_stack_ffffff88);
  ar4_00 = 0;
  FUN_8c256fec(0,uVar1,uVar3,uVar4,in_stack_ffffff88);
  FUN_8c25484c(ar4_00,uVar1,uVar3,uVar4);
  *(int *)(ar4 + 0x434) = *(int *)(ar4 + 0x434) + 0x18;
  FUN_8c25cddc(auStack_74,uVar1,uVar3,uVar4,ar4);
  FUN_8c25b5d0(auStack_74,uVar1,uVar3,uVar4,ar4);
  FUN_8c02430c(auStack_74,uVar1,uVar3,uVar4);
  FUN_8c25cddc(auStack_74,uVar1,uVar3,uVar4,ar4);
  uVar1 = uStack_34;
  uVar3 = uStack_30;
  uVar4 = uStack_2c;
  FUN_8c256e18(auStack_74,uStack_34,uStack_30,uStack_2c,ar4);
  FUN_8c02430c(auStack_74,uVar1,uVar3,uVar4);
  FUN_8c25cddc(auStack_74,uVar1,uVar3,uVar4,ar4);
  FUN_8c256fec(auStack_74,uVar1,uVar3,uVar4,ar4);
  uVar1 = FUN_8c02430c(auStack_74,uVar1,uVar3,uVar4);
  return uVar1;
}



/* FUN_8c029ca8 @ 8c029ca8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c029ca8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar4_00;
  int iVar2;
  undefined4 in_stack_ffffffe4;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((uint)in_stack_ffffffe4 >> 0x10);
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  iVar2 = *(int *)(ar4 + 0x328);
  ar4_00 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,CONCAT22(uVar3,(short)uVar1));
  FUN_8c019088(ar4_00,ar5,ar6,ar7);
  FUN_8c019198(ar4_00,ar5,ar6,ar7);
  uVar1 = FUN_8c015510(*(int *)(iVar2 + (short)uVar1 * 0x124) + 0x1e8,ar5,ar6,ar7);
  FUN_8c02a29c(ar4,uVar1,ar6,ar7);
  uVar1 = FUN_8c256210(1,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c029d64 @ 8c029d64 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c029d64) */
/* WARNING: Removing unreachable block (ram,0x8c029d78) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c029d64(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  undefined4 ar5_00;
  double dVar3;
  undefined4 uVar4;
  double in_xd14;
  undefined4 in_PR;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar4 = *(undefined4 *)(*(int *)(ar5 + 4) + 0x14);
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  uVar1 = ar6;
  FUN_8c029af0(ar4,ar5,ar6,ar7);
  pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
  dVar3 = in_xd14;
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(uVar4,*(undefined4 *)(ar4 + 0x5c));
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * SUB84(dVar3,0),SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar3;
  }
  if (cVar6 == '\0') {
    *(int *)pdVar2 = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *pdVar2 = dVar3;
  }
  ar5_00 = *(undefined4 *)(ar5 + 4);
  FUN_8c02a29c(ar4,ar5_00,uVar1,ar7);
  pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
  if (cVar6 == '\0') {
    *(undefined4 *)pdVar2 = uVar4;
  }
  else {
    *pdVar2 = in_xd14;
  }
  if (*(int *)(ar5 + 0x2c) != 0) {
    ar5_00 = *(undefined4 *)(ar5 + 0x2c);
    FUN_8c029d64(ar4,ar5_00,ar6,ar7);
    uVar1 = ar6;
  }
  uVar1 = FUN_8c256210(1,ar5_00,uVar1,ar7);
  return uVar1;
}



/* FUN_8c029dec @ 8c029dec callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c029dec) */
/* WARNING: Removing unreachable block (ram,0x8c029dee) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c029dec(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  double in_dr14;
  undefined8 in_xd0;
  bool bVar12;
  int ar6_00;
  int iVar13;
  char cVar14;
  char cVar15;
  undefined4 in_stack_ffffff9c;
  undefined2 uVar16;
  
  uVar16 = (undefined2)((uint)in_stack_ffffff9c >> 0x10);
  cVar15 = '\0';
  cVar14 = '\0';
  iVar3 = ar5;
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  uVar7 = CONCAT22(uVar16,(short)uVar1);
  if (*(int *)(ar4 + 0x3dc) == *(int *)(ar4 + 0x3d8)) {
    **(undefined4 **)(ar5 + 4) =
         *(undefined4 *)
          (*(int *)(*(int *)(ar4 + 0x328) + (short)uVar1 * 0x124) + *(int *)(ar4 + 0x3e4) * 4 + 0x40
          );
  }
  else {
    ar6 = (int)*(short *)(ar4 + 0x3fa);
    iVar3 = -0x73d86cf8;
    FUN_8c02ab24(ar4,0x8c279308,ar6,ar7);
    **(undefined4 **)(ar5 + 4) = 0x8c279308;
  }
  FUN_8c0f52c8(ar4,iVar3,ar6,ar7);
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x430),iVar3,ar6,ar7);
  iVar4 = 0;
  piVar2 = (int *)get_field_4_0253e4(*(undefined4 *)(ar4 + 0x430),iVar3,ar6,ar7);
  if (*(int *)(ar4 + 0x460) != 0) {
    if (*(int *)(ar4 + 0x460) != 2) goto LAB_8c029f42;
    iVar4 = 2;
  }
  iVar4 = iVar4 + 6;
  for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
    uVar1 = *(undefined4 *)(iVar3 * 0xc + *piVar2 + 8);
    *(undefined4 *)(iVar3 * 0xc + *piVar2 + 8) =
         *(undefined4 *)((iVar4 + iVar3) * 0xc + *piVar2 + 8);
    *(undefined4 *)((iVar4 + iVar3) * 0xc + *piVar2 + 8) = uVar1;
  }
LAB_8c029f42:
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x404));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x404);
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = 2.17348488426987e-311;
  }
  if (cVar14 == '\0') {
    iVar3 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar9 / dVar9);
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x400));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x400);
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = 2.17348488426987e-311;
  }
  if (cVar14 == '\0') {
    ar6_00 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar9 / dVar9);
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x3fc));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x3fc);
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = 2.17348488426987e-311;
  }
  if (cVar14 == '\0') {
    iVar13 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar13 = (int)(dVar9 / dVar9);
  }
  FUN_8c256b0c(0,iVar13,ar6_00,iVar3,uVar7);
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x3fc));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x3fc);
    dVar9 = 5.238690724707756e-11;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x3fc) = fVar8;
    dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x400));
  }
  else {
    *(undefined8 *)(ar4 + 0x3fc) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x400);
    dVar9 = 5.238690724707756e-11;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x400) = fVar8;
    dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x404));
  }
  else {
    *(undefined8 *)(ar4 + 0x400) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x404);
    dVar9 = 5.238690724707756e-11;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x404) = fVar8;
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x3fc));
    dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x400),fVar8);
  }
  else {
    *(undefined8 *)(ar4 + 0x404) = in_xd0;
    dVar9 = *(double *)(ar4 + 0x400);
  }
  if (cVar14 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) + (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    in_dr14 = in_dr14 + dVar9;
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x404),SUB84(dVar9,0));
  }
  else {
    dVar9 = *(double *)(ar4 + 0x404);
  }
  if (cVar14 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) + (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    in_dr14 = in_dr14 + dVar9;
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x3dcccccd,SUB84(dVar9,0));
  }
  else {
    dVar9 = -5.238690707360522e-11;
  }
  if (cVar14 == '\0') {
    bVar12 = SUB84(in_dr14,0) < (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    bVar12 = in_dr14 < dVar9;
  }
  if (bVar12) {
    if (cVar15 == '\0') {
      dVar9 = (double)CONCAT44(0xbdcccccd,SUB84(dVar9,0));
    }
    else {
      dVar9 = -8.132627400321583e-251;
    }
    if (cVar14 == '\0') {
      bVar12 = (float)((ulonglong)dVar9 >> 0x20) < SUB84(in_dr14,0);
    }
    else {
      bVar12 = dVar9 < in_dr14;
    }
    if (bVar12) {
      FUN_8c02a1fc(ar4 + 0x3fc,iVar13,ar6_00,iVar3);
    }
  }
  uVar6 = SUB84(dVar9,0);
  uVar11 = SUB84(in_dr14,0);
  uVar1 = *(undefined4 *)(ar5 + 4);
  FUN_8c02a29c(ar4,uVar1,ar6_00,iVar3);
  if (*(int *)(ar4 + 0x460) != 1) {
    for (iVar13 = 0; iVar13 < 2; iVar13 = iVar13 + 1) {
      uVar5 = *(undefined4 *)((iVar4 + iVar13) * 0xc + *piVar2 + 8);
      *(undefined4 *)((iVar4 + iVar13) * 0xc + *piVar2 + 8) =
           *(undefined4 *)(iVar13 * 0xc + *piVar2 + 8);
      *(undefined4 *)(iVar13 * 0xc + *piVar2 + 8) = uVar5;
    }
  }
  if (*(int *)(ar4 + 0x45c) != 0) {
    if (cVar14 == '\0') {
      dVar9 = (double)CONCAT44((float)*(int *)(ar4 + 0x45c),uVar11);
    }
    else {
      dVar9 = (double)*(int *)(ar4 + 0x45c);
    }
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44(0x44e10000,uVar6);
    }
    else {
      dVar10 = 2.3262783273243e-311;
    }
    if (cVar14 == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) /
                               (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 / dVar10;
    }
    if (cVar14 == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) - 1.0,SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 - (double)CONCAT44(0x3f800000,SUB84(dVar10,0));
    }
    if (cVar15 == '\0') {
      *(int *)(ar4 + 0x448) = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined4 *)(ar4 + 0x44c) = *(undefined4 *)(ar4 + 0x43c);
      *(undefined4 *)(ar4 + 0x450) = *(undefined4 *)(ar4 + 0x440);
      *(undefined4 *)(ar4 + 0x454) = *(undefined4 *)(ar4 + 0x444);
    }
    else {
      *(double *)(ar4 + 0x448) = dVar9;
      *(undefined8 *)(ar4 + 0x44c) = *(undefined8 *)(ar4 + 0x43c);
      *(undefined8 *)(ar4 + 0x450) = *(undefined8 *)(ar4 + 0x440);
      *(undefined8 *)(ar4 + 0x454) = *(undefined8 *)(ar4 + 0x444);
    }
    FUN_8c233dac(ar4 + 0x448,uVar1,ar6_00,iVar3);
    uVar6 = *(undefined4 *)(*piVar2 + 8);
    *(undefined4 *)(*piVar2 + 8) = *(undefined4 *)(*piVar2 + 0x44);
    *(undefined4 *)(*piVar2 + 0x44) = uVar6;
    FUN_8c256328(0,uVar1,ar6_00,iVar3,uVar7);
    FUN_8c256fec(0,uVar1,ar6_00,iVar3,uVar7);
    uVar1 = *(undefined4 *)(ar5 + 4);
    FUN_8c02a29c(ar4,uVar1,ar6_00,iVar3);
    FUN_8c256210(1,uVar1,ar6_00,iVar3);
    uVar7 = *(undefined4 *)(*piVar2 + 0x44);
    *(undefined4 *)(*piVar2 + 0x44) = *(undefined4 *)(*piVar2 + 8);
    *(undefined4 *)(*piVar2 + 8) = uVar7;
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x448) = *(undefined4 *)(ar4 + 0x438);
    }
    else {
      *(undefined8 *)(ar4 + 0x448) = *(undefined8 *)(ar4 + 0x438);
    }
    FUN_8c233dac(ar4 + 0x448,uVar1,ar6_00,iVar3);
  }
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),uVar1,ar6_00,iVar3);
  uVar1 = FUN_8c0f5308(ar4,uVar1,ar6_00,iVar3);
  return uVar1;
}



/* FUN_8c02a1fc @ 8c02a1fc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02a226) */
/* WARNING: Removing unreachable block (ram,0x8c02a220) */
/* WARNING: Removing unreachable block (ram,0x8c02a212) */
/* WARNING: Removing unreachable block (ram,0x8c02a20c) */
/* WARNING: Removing unreachable block (ram,0x8c02a202) */
/* WARNING: Removing unreachable block (ram,0x8c02a20e) */
/* WARNING: Removing unreachable block (ram,0x8c02a216) */
/* WARNING: Removing unreachable block (ram,0x8c02a222) */
/* WARNING: Removing unreachable block (ram,0x8c02a228) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a1fc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  return 0;
}



/* FUN_8c02a230 @ 8c02a230 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02a262) */
/* WARNING: Removing unreachable block (ram,0x8c02a252) */
/* WARNING: Removing unreachable block (ram,0x8c02a24e) */
/* WARNING: Removing unreachable block (ram,0x8c02a240) */
/* WARNING: Removing unreachable block (ram,0x8c02a230) */
/* WARNING: Removing unreachable block (ram,0x8c02a24c) */
/* WARNING: Removing unreachable block (ram,0x8c02a250) */
/* WARNING: Removing unreachable block (ram,0x8c02a25a) */
/* WARNING: Removing unreachable block (ram,0x8c02a26a) */
/* WARNING: Unknown calling convention */

float * FUN_8c02a230(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float fVar2;
  undefined8 in_xd14;
  undefined4 in_PR;
  char cVar3;
  
  cVar3 = '\0';
  fVar2 = *(float *)(*(int *)(ar5 + 4) + 0x14);
  *(float *)(*(int *)(ar5 + 4) + 0x14) = fVar2 * *(float *)(ar4 + 0x468);
  FUN_8c256fec(0,ar5,ar6,ar7,in_PR);
  FUN_8c02a29c(ar4,*(undefined4 *)(ar5 + 4),ar6,ar7);
  pfVar1 = (float *)(*(int *)(ar5 + 4) + 0x14);
  if (cVar3 == '\0') {
    *pfVar1 = fVar2;
  }
  else {
    *(undefined8 *)pfVar1 = in_xd14;
  }
  return pfVar1;
}



/* FUN_8c02a29c @ 8c02a29c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a29c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c02a2b4)(ar5,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c02a2b8 @ 8c02a2b8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02a338) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a2b8(int ar4,undefined4 ar5,undefined4 ar6,double *ar7)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  double *ar7_00;
  float *pfVar3;
  float fVar4;
  code *pcVar5;
  ulonglong uVar6;
  double dVar7;
  code *pcVar9;
  double dVar8;
  float fVar10;
  double in_xd0;
  char cVar11;
  char cVar12;
  undefined4 uStack_7c;
  undefined4 auStack_74 [4];
  undefined4 uStack_64;
  code *pcStack_60;
  code *pcStack_5c;
  undefined4 uStack_58;
  code *pcStack_54;
  code *pcStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_2c,uVar2,ar6_00,ar7_00);
  Vec3_ctor_zero(&uStack_3c,uVar2,ar6_00,ar7_00);
  Vec3_ctor_zero(&uStack_4c,uVar2,ar6_00,ar7_00);
  Vec3_set_zero(&uStack_58,uVar2,ar6_00,ar7_00);
  Vec3_set_zero(&uStack_64,uVar2,ar6_00,ar7_00);
  FUN_8c02a544(*(undefined4 *)(ar4 + 0x308),uVar2,ar6_00,ar7_00,auStack_74);
  Vec3_assign(&uStack_3c,auStack_74,ar6_00,ar7_00);
  Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7_00);
  if (cVar12 == '\0') {
    uVar6 = CONCAT44(0xc7c35000,uStack_3c);
  }
  else {
    in_xd0 = (double)CONCAT44(uStack_38,uStack_3c);
    uVar6 = 0x8c014a34c7c35000;
  }
  if ((float)uVar6 == (float)(uVar6 >> 0x20)) {
    if (cVar12 == '\0') {
      *(float *)ar7 = 0.0;
    }
    else {
      *ar7 = (double)(uVar6 & 0xffffffff);
    }
    if (cVar12 == '\0') {
      *(float *)((int)ar7 + 4) = 0.0;
    }
    else {
      *(ulonglong *)((int)ar7 + 4) = uVar6 & 0xffffffff;
    }
    if (cVar12 == '\0') {
      *(float *)(ar7 + 1) = 0.0;
    }
    else {
      ar7[1] = (double)(uVar6 & 0xffffffff);
    }
    object_dtor_delete(&uStack_64,0xffffffff,ar6_00,ar7_00);
    object_dtor_delete(&uStack_58,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(&uStack_4c,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(&uStack_3c,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7_00);
    uVar2 = Vec3_dtor(&fStack_1c,0xffffffff,ar6_00,ar7_00);
  }
  else {
    FUN_8c02a568(ar4,ar6,&uStack_4c,ar7_00);
    ar6_01 = auStack_2c;
    FUN_8c02a5d4(ar4,ar5,ar6_01,ar7_00);
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(uStack_4c,uStack_3c);
    }
    else {
      in_xd0 = (double)CONCAT44(uStack_38,uStack_3c);
      dVar7 = (double)CONCAT44(uStack_48,uStack_4c);
    }
    if (cVar11 == '\0') {
      fStack_1c = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fStack_1c = SUB84(dVar7 - dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(uStack_48,uStack_38);
    }
    else {
      fStack_1c = SUB84(in_xd0,0);
      in_xd0 = (double)CONCAT44(uStack_34,uStack_38);
      dVar7 = (double)CONCAT44(uStack_44,uStack_48);
    }
    if (cVar11 == '\0') {
      fStack_18 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fStack_18 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(uStack_44,uStack_34);
    }
    else {
      fStack_18 = SUB84(in_xd0,0);
      in_xd0 = (double)CONCAT44(uStack_30,uStack_34);
      dVar7 = (double)CONCAT44(uStack_40,uStack_44);
    }
    if (cVar11 == '\0') {
      fVar4 = (float)((ulonglong)dVar7 >> 0x20);
      dVar7 = (double)CONCAT44(fVar4,SUB84(dVar7,0) - fVar4);
    }
    else {
      dVar7 = dVar7 - dVar7;
    }
    if (cVar12 == '\0') {
      uStack_14 = SUB84(dVar7,0);
    }
    else {
      uStack_14 = SUB84(in_xd0,0);
      uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    FUN_8c0231c8(auStack_2c,ar5,ar6_01,ar7_00);
    uStack_58 = SUB84(dVar7,0);
    pcVar5 = (code *)((ulonglong)dVar7 >> 0x20);
    uVar2 = pcVar5;
    if (cVar12 == '\0') {
      uVar2 = auStack_74[0];
      uStack_58 = pcVar5;
      pcVar5 = pcStack_54;
    }
    pcStack_54 = pcVar5;
    auStack_74[0] = uVar2;
    FUN_8c0231c8(&fStack_1c,ar5,ar6_01,ar7_00);
    uStack_64 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (cVar12 == '\0') {
      dVar8 = (double)CONCAT44(uStack_58,uStack_64);
      dVar7 = in_xd0;
    }
    else {
      uStack_7c = SUB84(dVar7,0);
      dVar8 = (double)CONCAT44(pcStack_54,uStack_58);
      uStack_64 = uStack_7c;
      pcStack_60 = (code *)uStack_64;
    }
    if (cVar11 == '\0') {
      fVar4 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar12 == '\0') {
      *(float *)ar7 = fVar4;
      pcVar5 = *(code **)ar7;
      fVar4 = -20.0;
    }
    else {
      *ar7 = dVar7;
      dVar7 = *ar7;
      pcVar5 = (code *)0xc1a00000;
      fVar4 = 20.0;
    }
    if (cVar11 != '\0' || fVar4 <= (float)pcVar5) {
      if (cVar12 == '\0') {
        pcVar5 = *(code **)ar7;
        pcVar9 = (code *)0x41a00000;
      }
      else {
        dVar7 = *ar7;
        pcVar5 = (code *)0x41a00000;
        pcVar9 = FUN_8c02327c;
      }
      if (cVar11 == '\0' && (float)pcVar9 < (float)pcVar5) {
        if (cVar12 == '\0') {
          pcVar9 = (code *)0x41a00000;
          *(float *)ar7 = 20.0;
        }
        else {
          pcVar5 = (code *)0x41a00000;
          pcVar9 = FUN_8c02327c;
          *ar7 = -7.94252136586639e-251;
        }
      }
    }
    else if (cVar12 == '\0') {
      pcVar9 = (code *)0xc1a00000;
      *(float *)ar7 = -20.0;
    }
    else {
      pcVar5 = (code *)0xc1a00000;
      pcVar9 = (code *)0x41a00000;
      *ar7 = 134217824.8125;
    }
    FUN_8c02327c(auStack_2c,ar5,ar6_01,ar7_00);
    pcStack_54 = pcVar5;
    pcVar1 = pcVar9;
    if (cVar12 == '\0') {
      pcStack_54 = pcVar9;
      pcVar1 = pcStack_50;
    }
    pcStack_50 = pcVar1;
    FUN_8c02327c(&fStack_1c,ar5,ar6_01,ar7_00);
    pcStack_60 = pcVar5;
    if (cVar12 == '\0') {
      dVar8 = (double)CONCAT44(pcStack_54,pcVar9);
      pcStack_60 = pcVar9;
    }
    else {
      dVar7 = (double)CONCAT44(pcVar9,pcStack_60);
      dVar8 = (double)CONCAT44(pcStack_50,pcStack_54);
      pcStack_5c = pcVar9;
    }
    if (cVar11 == '\0') {
      fVar4 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar12 == '\0') {
      *(float *)((int)ar7 + 4) = fVar4;
      fVar4 = *(float *)((int)ar7 + 4);
      fVar10 = -40.0;
    }
    else {
      *(double *)((int)ar7 + 4) = dVar7;
      fVar4 = -40.0;
      fVar10 = 40.0;
    }
    if (cVar11 != '\0' || fVar10 <= fVar4) {
      if (cVar12 == '\0') {
        fVar4 = *(float *)((int)ar7 + 4);
        fVar10 = 40.0;
      }
      else {
        fVar4 = 40.0;
        fVar10 = NAN;
      }
      if (cVar11 == '\0' && fVar10 < fVar4) {
        pfVar3 = (float *)((int)ar7 + 4);
        if (cVar12 == '\0') {
          *pfVar3 = 40.0;
        }
        else {
          pfVar3[0] = 40.0;
          pfVar3[1] = NAN;
        }
      }
    }
    else {
      pfVar3 = (float *)((int)ar7 + 4);
      if (cVar12 == '\0') {
        *pfVar3 = -40.0;
      }
      else {
        pfVar3[0] = -40.0;
        pfVar3[1] = 40.0;
      }
    }
    object_dtor_delete(&uStack_64,0xffffffff,ar6_01,ar7_00);
    object_dtor_delete(&uStack_58,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(&uStack_4c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(&uStack_3c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_01,ar7_00);
    uVar2 = Vec3_dtor(&fStack_1c,0xffffffff,ar6_01,ar7_00);
  }
  return uVar2;
}



/* FUN_8c02a544 @ 8c02a544 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a544(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c02a564)(s0,ar4 + 0x70,ar6,ar7);
  return uVar1;
}



/* FUN_8c02a568 @ 8c02a568 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02a586) */
/* WARNING: Removing unreachable block (ram,0x8c02a57e) */
/* WARNING: Removing unreachable block (ram,0x8c02a574) */
/* WARNING: Removing unreachable block (ram,0x8c02a578) */
/* WARNING: Removing unreachable block (ram,0x8c02a582) */
/* WARNING: Removing unreachable block (ram,0x8c02a58a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a568(undefined4 ar4,undefined4 *ar5,undefined8 *ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 in_stack_ffffff9c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [68];
  
  cVar1 = '\0';
  uStack_58 = *ar5;
  uStack_54 = ar5[1];
  uStack_50 = ar5[2];
  FUN_8c024340(auStack_4c,ar5,ar6,ar7);
  FUN_8c212740(auStack_4c,&uStack_58,&stack0xffffff9c,ar7,in_stack_ffffff9c);
  if (cVar1 == '\0') {
    *(undefined4 *)ar6 = in_stack_ffffff9c;
    *(undefined4 *)((int)ar6 + 4) = uStack_60;
  }
  else {
    *ar6 = CONCAT44(uStack_60,in_stack_ffffff9c);
    *(ulonglong *)((int)ar6 + 4) = CONCAT44(uStack_5c,uStack_60);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar6 + 1) = uStack_5c;
  }
  else {
    ar6[1] = CONCAT44(uStack_58,uStack_5c);
  }
  return 8;
}



/* FUN_8c02a5d4 @ 8c02a5d4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02a5f2) */
/* WARNING: Removing unreachable block (ram,0x8c02a5ea) */
/* WARNING: Removing unreachable block (ram,0x8c02a5e0) */
/* WARNING: Removing unreachable block (ram,0x8c02a5e4) */
/* WARNING: Removing unreachable block (ram,0x8c02a5ee) */
/* WARNING: Removing unreachable block (ram,0x8c02a5f6) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a5d4(undefined4 ar4,undefined4 *ar5,undefined8 *ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  char cVar1;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [48];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar1 = '\0';
  uStack_58 = *ar5;
  uStack_54 = ar5[1];
  uStack_50 = ar5[2];
  uStack_1c = in_fr1;
  FUN_8c024340(auStack_4c,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    uStack_1c = 0;
  }
  else {
    uStack_64 = 0;
    uStack_10 = 0;
  }
  uStack_14 = 0;
  uStack_18 = 0;
  FUN_8c212740(auStack_4c,&uStack_58,&uStack_64,ar7,uStack_1c);
  if (cVar1 == '\0') {
    *(undefined4 *)ar6 = uStack_64;
    *(undefined4 *)((int)ar6 + 4) = uStack_60;
  }
  else {
    *ar6 = CONCAT44(uStack_60,uStack_64);
    *(ulonglong *)((int)ar6 + 4) = CONCAT44(uStack_5c,uStack_60);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar6 + 1) = uStack_5c;
  }
  else {
    ar6[1] = CONCAT44(uStack_58,uStack_5c);
  }
  return 0x10;
}



/* FUN_8c02a668 @ 8c02a668 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a668(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  undefined1 auStack_18 [20];
  
  a5 = ar4 + 0x30;
  (**(code **)(**(int **)(DAT_8c02a6c0 + ar4) + 0x38))(*(int **)(DAT_8c02a6c0 + ar4),a5,ar5,ar6);
  (*(code *)PTR_FUN_8c02a6c4)(*(undefined4 *)(DAT_8c02a6c0 + ar4),a5,ar5,ar6,auStack_18);
  (*(code *)PTR_FUN_8c02a6c8)(ar4 + 0x30,auStack_18,ar5,ar6);
  (*(code *)PTR_Vec3_dtor_8c02a6cc)(auStack_18,0xffffffff,ar5,ar6);
  return 1;
}



/* FUN_8c02a6d0 @ 8c02a6d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a6d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c02a6f4)(s0,ar4 + DAT_8c02a6f0,ar6,ar7);
  return uVar1;
}



/* FUN_8c02a6f8 @ 8c02a6f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a6f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  
  (*(code *)PTR_FUN_8c02a750)(ar4 + DAT_8c02a74c,ar5,ar6,ar7);
  ar5_00 = (*(code *)PTR_FUN_8c02a750)(ar4 + DAT_8c02a74c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c02a754)(ar4 + DAT_8c02a74c,ar5_00,ar6,ar7);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xfffffff7;
  return 0x74;
}



/* FUN_8c02a758 @ 8c02a758 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a758(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_30_02a780_8c02a77c)(ar4 + DAT_8c02a778,ar5,ar6,ar7);
  return uVar1;
}



/* get_field_30_02a780 @ 8c02a780 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_30_02a780(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x30);
}



/* FUN_8c02a788 @ 8c02a788 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c02a8fc */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a788(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  undefined1 auStack_1c [20];
  
  uVar2 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  sVar1 = (short)uVar2;
  if (*(short *)(ar4 + 0x3f8) < *(short *)(ar4 + 0x3fa)) {
    *(undefined2 *)(ar4 + 0x3fa) = 0;
    *(undefined2 *)(ar4 + 0x3f8) = 1;
    if (*(int *)(ar4 + 0x3f4) == 0) {
      *(undefined4 *)(ar4 + 0x3dc) = *(undefined4 *)(ar4 + 0x3d8);
    }
    else if (*(int *)(ar4 + 0x3f4) == 1) {
      *(short *)(ar4 + 0x3f0) = *(short *)(ar4 + 0x3f0) + 1;
      if (*(int *)(*(short *)(ar4 + 0x3f0) * 4 + **(int **)(ar4 + 0x3ec)) == 0x50) {
        ar5 = *(undefined4 *)(ar4 + 0x3e4);
        FUN_8c02aab0(*(undefined4 *)(ar4 + 0x308),ar5,ar6,ar7);
        *(undefined2 *)(ar4 + 0x3f0) = 0;
        *(undefined4 *)(ar4 + 0x3f4) = 0;
        *(undefined4 *)(ar4 + 0x3ec) = 0;
        *(undefined4 *)(ar4 + 0x3e0) = 0;
      }
      else {
        *(undefined4 *)(ar4 + 0x3e4) =
             *(undefined4 *)(*(short *)(ar4 + 0x3f0) * 4 + **(int **)(ar4 + 0x3ec));
      }
    }
  }
  if (*(int *)(ar4 + 0x3e0) == 0) {
    uVar2 = get_field_94_02aaa4(*(undefined4 *)(ar4 + 0x308),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x3e4) = uVar2;
    FUN_8c02a544(*(undefined4 *)(ar4 + 0x308),ar5,ar6,ar7,auStack_1c);
    ar6_00 = auStack_1c;
    uVar2 = FUN_8c02b208(ar4 + 0x310,*(undefined4 *)(ar4 + 0x3e4),ar6_00,ar7);
    *(undefined4 *)(ar4 + 0x3e4) = uVar2;
    Vec3_dtor(auStack_1c,0xffffffff,ar6_00,ar7);
  }
  else {
    *(undefined4 *)(ar4 + 0x3e4) =
         *(undefined4 *)(*(short *)(ar4 + 0x3f0) * 4 + **(int **)(ar4 + 0x3ec));
  }
  if (*(int *)(ar4 + 0x3e4) != *(int *)(ar4 + 1000)) {
    *(undefined2 *)(ar4 + 0x3fa) = 0;
    if ((*(int *)(ar4 + 0x3e4) < 0x4f) && (0x46 < *(int *)(ar4 + 0x3e4))) {
                    /* WARNING: Switch is manually overridden */
      *(int *)(ar4 + 0x3ec) =
           *(int *)(sVar1 * 0x124 + *(int *)(ar4 + 0x328)) + (*(int *)(ar4 + 0x3e4) + -0x47) * 8;
      *(undefined4 *)(ar4 + 0x3e4) =
           *(undefined4 *)(*(short *)(ar4 + 0x3f0) * 4 + **(int **)(ar4 + 0x3ec));
      *(undefined4 *)(ar4 + 0x3f4) = 1;
      *(undefined4 *)(ar4 + 0x3e0) = 1;
    }
    *(undefined4 *)(ar4 + 0x3d8) =
         *(undefined4 *)
          (*(int *)(sVar1 * 0x124 + *(int *)(ar4 + 0x328)) + *(int *)(ar4 + 0x3e4) * 4 + 0x40);
    *(undefined4 *)(ar4 + 0x3dc) =
         *(undefined4 *)
          (*(int *)(sVar1 * 0x124 + *(int *)(ar4 + 0x328)) + *(int *)(ar4 + 1000) * 4 + 0x40);
    *(undefined2 *)(ar4 + 0x3f8) =
         *(undefined2 *)
          (*(int *)(sVar1 * 0x124 + *(int *)(ar4 + 0x328)) + *(int *)(ar4 + 0x3e4) * 2 + 0x158);
  }
  if (*(int *)(ar4 + 0x3dc) != *(int *)(ar4 + 0x3d8)) {
    *(short *)(ar4 + 0x3fa) = *(short *)(ar4 + 0x3fa) + 1;
  }
  if (((*(int *)(ar4 + 0x3dc) == *(int *)(ar4 + 0x3d8)) &&
      (*(short *)(ar4 + 0x3fa) < *(short *)(ar4 + 0x3f8))) && (*(int *)(ar4 + 0x3e0) == 1)) {
    *(short *)(ar4 + 0x3fa) = *(short *)(ar4 + 0x3f8) + 1;
  }
  *(undefined4 *)(ar4 + 1000) = *(undefined4 *)(ar4 + 0x3e4);
  return 1000;
}



/* get_field_94_02aaa4 @ 8c02aaa4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_94_02aaa4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c02aaac + ar4);
}



/* FUN_8c02aab0 @ 8c02aab0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02aab0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c02aab8;
  *(undefined4 *)(DAT_8c02aab8 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c02aabc @ 8c02aabc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02aabc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_FUN_8c02ab0c)(ar4 + DAT_8c02ab08,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c02ab1c)
                    (*(int *)((short)uVar1 * DAT_8c02ab14 + *(int *)(DAT_8c02ab10 + ar4)) +
                     DAT_8c02ab18,ar5,ar6,ar7);
  iVar2 = *(int *)(DAT_8c02ab20 + ar4);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  return iVar2;
}



/* FUN_8c02ab24 @ 8c02ab24 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02ab50) */
/* WARNING: Removing unreachable block (ram,0x8c02ab5c) */
/* WARNING: Removing unreachable block (ram,0x8c02ab78) */
/* WARNING: Removing unreachable block (ram,0x8c02ab52) */
/* WARNING: Removing unreachable block (ram,0x8c02ab3e) */
/* WARNING: Removing unreachable block (ram,0x8c02ab24) */
/* WARNING: Removing unreachable block (ram,0x8c02ab4c) */
/* WARNING: Removing unreachable block (ram,0x8c02ab5e) */
/* WARNING: Removing unreachable block (ram,0x8c02ab4a) */
/* WARNING: Removing unreachable block (ram,0x8c02ab7a) */
/* WARNING: Removing unreachable block (ram,0x8c02ab8c) */
/* WARNING: Removing unreachable block (ram,0x8c02ab76) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c02ab24(int ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  
  for (uVar1 = 2; uVar1 < _DAT_8c27c1e8 - 1U; uVar1 = uVar1 + 1) {
    *(float *)(ar5 + uVar1 * 4) =
         *(float *)(*(int *)(ar4 + 0x3dc) + uVar1 * 4) +
         ((*(float *)(*(int *)(ar4 + 0x3d8) + uVar1 * 4) -
          *(float *)(*(int *)(ar4 + 0x3dc) + uVar1 * 4)) * (float)ar6) /
         (float)(int)*(short *)(ar4 + 0x3f8);
  }
  return _DAT_8c27c1e8 - 1U;
}



/* FUN_8c02aba0 @ 8c02aba0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02aba0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int a7;
  undefined8 in_dr0;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  undefined4 in_stack_ffffffac;
  float fStack_4c;
  undefined4 auStack_48 [4];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  cVar6 = '\0';
  cVar5 = '\0';
  a7 = ar4 + 0x5c;
  iVar3 = ar4 + 0x50;
  iVar1 = ar4 + 0x30;
  (**(code **)(**(int **)(ar4 + 0xa4) + 0x10))(*(int **)(ar4 + 0xa4),iVar1,iVar3,a7);
  FUN_8c02ace4(*(undefined4 *)(ar4 + 0x30c),iVar1,iVar3,a7,auStack_28);
  FUN_8c027224(*(undefined4 *)(ar4 + 0x30c),iVar1,iVar3,a7,in_stack_ffffffac);
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x40000000,(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    dVar4 = -7.957972504406915e-251;
  }
  if (cVar5 == '\0') {
    fStack_4c = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fStack_4c = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 != '\0') {
    fStack_4c = (float)in_dr0;
    auStack_48[0] = (undefined4)((ulonglong)in_dr0 >> 0x20);
  }
  Vec3_scale(auStack_28,&fStack_4c,iVar3,a7,auStack_38);
  Vec3_add(ar4 + 0x30,auStack_38,iVar3,a7,auStack_48);
  Vec3_ctor_copy(auStack_18,auStack_48,iVar3,a7);
  Vec3_dtor(auStack_48,0xffffffff,iVar3,a7);
  Vec3_dtor(auStack_38,0xffffffff,iVar3,a7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_28,0xffffffff,iVar3,a7);
  FUN_8c027224(*(undefined4 *)(ar4 + 0x30c),uVar2,iVar3,a7,in_stack_ffffffac);
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x28))((int *)(ar4 + 0xa8),ar4 + 0x30,iVar3,a7);
  iVar3 = ar4 + 0x5c;
  iVar1 = ar4 + 0x50;
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x10))((int *)(ar4 + 0xa8),auStack_18,iVar1,iVar3);
  uVar2 = Vec3_dtor(auStack_18,0xffffffff,iVar1,iVar3);
  return uVar2;
}



/* FUN_8c02ace4 @ 8c02ace4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ace4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c02ad08)(s0,ar4 + DAT_8c02ad04,ar6,ar7);
  return uVar1;
}



/* FUN_8c02ad0c @ 8c02ad0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ad0c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  (*(code *)PTR_FUN_8c02ad34)(*(undefined4 *)(DAT_8c02ad30 + ar4),ar5,ar6,ar7,s0);
  return s0;
}



/* FUN_8c02ad38 @ 8c02ad38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ad38(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  (*(code *)PTR_Vec3_normalize_8c02ad58)(ar4 + 4,ar5,ar6,ar7);
  return s0;
}



/* FUN_8c02ad5c @ 8c02ad5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ad5c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  (*(code *)PTR_FUN_8c02ad84)(*(undefined4 *)(DAT_8c02ad80 + ar4),ar5,ar6,ar7,s0);
  return s0;
}



/* FUN_8c02ad88 @ 8c02ad88 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02add6) */
/* WARNING: Removing unreachable block (ram,0x8c02add2) */
/* WARNING: Removing unreachable block (ram,0x8c02adc4) */
/* WARNING: Removing unreachable block (ram,0x8c02adb6) */
/* WARNING: Removing unreachable block (ram,0x8c02adb2) */
/* WARNING: Removing unreachable block (ram,0x8c02ada4) */
/* WARNING: Removing unreachable block (ram,0x8c02ad98) */
/* WARNING: Removing unreachable block (ram,0x8c02ad92) */
/* WARNING: Removing unreachable block (ram,0x8c02ad88) */
/* WARNING: Removing unreachable block (ram,0x8c02ad96) */
/* WARNING: Removing unreachable block (ram,0x8c02ada2) */
/* WARNING: Removing unreachable block (ram,0x8c02ada6) */
/* WARNING: Removing unreachable block (ram,0x8c02adb4) */
/* WARNING: Removing unreachable block (ram,0x8c02adc2) */
/* WARNING: Removing unreachable block (ram,0x8c02adc6) */
/* WARNING: Removing unreachable block (ram,0x8c02add4) */
/* WARNING: Removing unreachable block (ram,0x8c02ae10) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ad88(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = (float)*(int *)(ar4 + 0x458) / 5400.0;
  *(float *)(ar4 + 0x438) = fVar3 * 0.0;
  *(float *)(ar4 + 0x43c) = fVar3 * -0.84705883;
  *(float *)(ar4 + 0x440) = fVar3 * -0.84705883;
  *(float *)(ar4 + 0x444) = fVar3 * -1.0;
  iVar1 = *(int *)(ar4 + 0x458);
  *(int *)(ar4 + 0x458) = iVar1 + 1;
  uVar2 = 0x1518;
  if (0x1518 < iVar1 + 1) {
    *(undefined4 *)(ar4 + 0x458) = 0;
    uVar2 = 0x74;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0x7fffffff;
  }
  return uVar2;
}



/* FUN_8c02ae38 @ 8c02ae38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ae38(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  float fStack_18;
  int iStack_14;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  iVar2 = *(int *)(ar4 + 0x328) + (short)uVar1 * 0x124;
  if (cVar7 == '\0') {
    uVar4 = CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(ar4 + 0x170));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x170);
    uVar4 = *(undefined8 *)(ar4 + 0x5c);
  }
  if (cVar6 != '\0' || (float)uVar4 <= (float)((ulonglong)uVar4 >> 0x20)) {
    if (cVar7 == '\0') {
      uVar4 = CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(ar4 + 0x170));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x170);
      uVar4 = *(undefined8 *)(ar4 + 0x5c);
    }
    if (cVar6 == '\0' && (float)uVar4 < (float)((ulonglong)uVar4 >> 0x20)) {
      if (cVar7 == '\0') {
        uVar1 = *(undefined4 *)(ar4 + 0x170);
        *(undefined4 *)(ar4 + 100) = uVar1;
        *(undefined4 *)(ar4 + 0x60) = uVar1;
        *(undefined4 *)(ar4 + 0x5c) = uVar1;
      }
      else {
        uVar4 = *(undefined8 *)(ar4 + 0x170);
        *(undefined8 *)(ar4 + 100) = uVar4;
        *(undefined8 *)(ar4 + 0x60) = uVar4;
        *(undefined8 *)(ar4 + 0x5c) = uVar4;
      }
    }
  }
  else {
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(iVar2 + 0xc0),*(undefined4 *)(ar4 + 100));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 100);
      dVar5 = *(double *)(iVar2 + 0xc0);
    }
    if (cVar6 == '\0') {
      fStack_18 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fStack_18 = SUB84(dVar5 + dVar5,0);
    }
    iStack_14 = ar4;
    if (cVar7 != '\0') {
      fStack_18 = (float)in_xd0;
      iStack_14 = (int)((ulonglong)in_xd0 >> 0x20);
    }
    if (cVar7 == '\0') {
      *(float *)(iStack_14 + 100) = fStack_18;
      *(float *)(ar4 + 0x60) = fStack_18;
      *(float *)(ar4 + 0x5c) = fStack_18;
    }
    else {
      *(ulonglong *)(iStack_14 + 100) = CONCAT44(iStack_14,fStack_18);
      *(ulonglong *)(ar4 + 0x60) = CONCAT44(iStack_14,fStack_18);
      *(ulonglong *)(ar4 + 0x5c) = CONCAT44(iStack_14,fStack_18);
    }
  }
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x60),*(undefined4 *)(iVar2 + 0xe8));
  }
  else {
    in_xd0 = *(undefined8 *)(iVar2 + 0xe8);
    dVar5 = *(double *)(ar4 + 0x60);
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar7 == '\0') {
    *(float *)(ar4 + 0x408) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x408) = in_xd0;
  }
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(iVar2 + 0xec));
  }
  else {
    in_xd0 = *(undefined8 *)(iVar2 + 0xec);
    dVar5 = *(double *)(ar4 + 0x5c);
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar7 == '\0') {
    *(float *)(ar4 + 0x40c) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x40c) = in_xd0;
  }
  return 0xec;
}



/* FUN_8c02af68 @ 8c02af68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02af68(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_8c02af84 + ar4);
  if (iVar1 != ar5) {
    *(undefined4 *)(DAT_8c02af88 + ar4) = 1;
    *(undefined4 *)(DAT_8c02af8c + ar4) = 0;
    iVar1 = DAT_8c02af84;
    *(int *)(DAT_8c02af84 + ar4) = ar5;
  }
  return iVar1;
}



/* s_CAnimal_ChangeBodyTexture_02af96 @ 8c02af90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_CAnimal_ChangeBodyTexture_02af96(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ar5;
  iVar1 = (**(code **)(DAT_8c02b024 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_get_field_4_0253e4_8c02b028)(iVar1 + ar5 * 8 + 0x78,iVar2,ar6,ar7);
  if (iVar2 == 0) {
    iVar2 = (*(code *)PTR_report_error_message_8c02b038)
                      (PTR_s_GRAPHICS_COMMON_8c02b02c + DAT_8c02b034,
                       PTR_s_GRAPHICS_COMMON_8c02b02c + DAT_8c02b030,0,2);
  }
  else {
    *(int *)(DAT_8c02b03c + ar4) = iVar1 + ar5 * 8 + 0x78;
    *(int *)(DAT_8c02b040 + ar4) = iVar1 + ar5 * 8 + DAT_8c02b044;
    iVar2 = DAT_8c02b048;
    *(int *)(DAT_8c02b048 + ar4) = ar5;
  }
  return iVar2;
}



/* FUN_8c02b04c @ 8c02b04c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02b04c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c02b054;
  *(undefined4 *)(DAT_8c02b054 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c02b058 @ 8c02b058 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02b05a) */
/* WARNING: Removing unreachable block (ram,0x8c02b058) */
/* WARNING: Removing unreachable block (ram,0x8c02b080) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b058(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  undefined4 in_fr1;
  double dVar3;
  float fVar4;
  undefined8 in_dr14;
  double dVar5;
  undefined8 in_xd14;
  char cVar6;
  char cVar7;
  
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar7 = '\0';
  cVar6 = '\0';
  (**(code **)(*(int *)(ar4 + 8) + 0x144))(ar4,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    dVar3 = (double)CONCAT44(0x43e10000,in_fr1);
  }
  else {
    dVar3 = 2.2923181056228e-311;
  }
  if (cVar6 == '\0') {
    fVar4 = (float)*(int *)(ar4 + 0x470) / (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar4 = SUB84((double)CONCAT44(uVar2,(float)*(int *)(ar4 + 0x470)) / dVar3,0);
  }
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x438),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x438);
  }
  if (cVar6 == '\0') {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),SUB84(dVar5,0) - 1.0);
  }
  else {
    dVar5 = dVar5 - (double)CONCAT44(0x3f800000,SUB84(dVar3,0));
  }
  if (cVar7 == '\0') {
    *(int *)(ar4 + 0x438) = SUB84(dVar5,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x438) = in_xd14;
  }
  ar5_00 = *(undefined4 *)(ar4 + 0x478);
  uVar2 = *(undefined4 *)(ar4 + 0x47c);
  s_CAnimal_ChangeBodyTexture_02af96(ar4,uVar2,ar6,ar7);
  *(int *)(ar4 + 0x474) = *(int *)(ar4 + 0x474) + 1;
  FUN_8c023df4(ar4 + 0x480,uVar2,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 8) + 0x34))(ar4,uVar2,ar6,ar7);
  if (cVar7 == '\0') {
    *(int *)(ar4 + 0x438) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x438) = dVar5;
  }
  s_CAnimal_ChangeBodyTexture_02af96(ar4,ar5_00,ar6,ar7);
  iVar1 = *(int *)(ar4 + 0x470);
  *(int *)(ar4 + 0x470) = iVar1 + 1;
  if (iVar1 < 0x1c2) {
    uVar2 = 0x474;
    *(int *)(ar4 + 0x474) = *(int *)(ar4 + 0x474) + -1;
  }
  else {
    FUN_8c023df4(ar4 + 0x480,ar5_00,ar6,ar7);
    *(undefined4 *)(ar4 + 0x470) = 0;
    *(undefined4 *)(ar4 + 0x474) = 0;
    uVar2 = s_CAnimal_ChangeBodyTexture_02af96(ar4,*(undefined4 *)(ar4 + 0x47c),ar6,ar7);
  }
  return uVar2;
}



/* FUN_8c02b190 @ 8c02b190 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02b19c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b190(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x45c) = 0x708;
  *(undefined4 *)(ar4 + 0x448) = 0;
  return 0x448;
}



/* FUN_8c02b1b0 @ 8c02b1b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b1b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c02b1d8)(*(undefined4 *)(DAT_8c02b1d4 + ar4),ar5,ar6,ar7);
  return 4;
}



/* FUN_8c02b1dc @ 8c02b1dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02b1dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_ctor_zero_8c02b200)(ar4 + 4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c02b204)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c02b208 @ 8c02b208 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02b2fc) */
/* WARNING: Removing unreachable block (ram,0x8c02b2d8) */
/* WARNING: Removing unreachable block (ram,0x8c02b276) */
/* WARNING: Removing unreachable block (ram,0x8c02b270) */
/* WARNING: Removing unreachable block (ram,0x8c02b26a) */
/* WARNING: Removing unreachable block (ram,0x8c02b258) */
/* WARNING: Removing unreachable block (ram,0x8c02b252) */
/* WARNING: Removing unreachable block (ram,0x8c02b24c) */
/* WARNING: Removing unreachable block (ram,0x8c02b248) */
/* WARNING: Removing unreachable block (ram,0x8c02b24e) */
/* WARNING: Removing unreachable block (ram,0x8c02b256) */
/* WARNING: Removing unreachable block (ram,0x8c02b266) */
/* WARNING: Removing unreachable block (ram,0x8c02b26c) */
/* WARNING: Removing unreachable block (ram,0x8c02b274) */
/* WARNING: Removing unreachable block (ram,0x8c02b2b0) */
/* WARNING: Removing unreachable block (ram,0x8c02b2d4) */
/* WARNING: Removing unreachable block (ram,0x8c02b300) */
/* WARNING: Removing unreachable block (ram,0x8c02b2ac) */
/* WARNING: Unknown calling convention */

int FUN_8c02b208(short *ar4,int ar5,float *ar6,undefined4 ar7)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  
  cVar4 = '\0';
  bVar1 = false;
  if (((ar5 == 0) || (ar5 == 0x2d)) || (ar5 == 0x1e)) {
    if ((*(float *)(ar4 + 2) == -100000.0) && (*ar6 != -100000.0)) {
      bVar1 = true;
    }
    else if ((*(float *)(ar4 + 2) != -100000.0) && (*ar6 == -100000.0)) {
      bVar1 = true;
    }
    *ar4 = *ar4 + 1;
    if (ar4[1] < *ar4) {
      bVar1 = true;
    }
    if (bVar1) {
      if (ar5 == 0) {
        if ((int)((uint)*(byte *)(ar4 + 10) << 0x1e) < 0) {
          iVar3 = 0x48;
        }
        else {
          iVar3 = 0x49;
        }
      }
      else if (ar5 == 0x2d) {
        if ((int)((uint)*(byte *)(ar4 + 10) << 0x1e) < 0) {
          iVar3 = 0x4a;
        }
        else {
          iVar3 = 0x4b;
        }
      }
      else {
        iVar3 = ar5;
        if (ar5 == 0x1e) {
          if ((int)((uint)*(byte *)(ar4 + 10) << 0x1e) < 0) {
            iVar3 = 0x4c;
          }
          else {
            iVar3 = 0x4d;
          }
        }
      }
      *ar4 = 0;
      uVar2 = FUN_8c02b340(ar4,ar5,ar6,ar7);
      ar4[1] = (short)uVar2;
      ar5 = iVar3;
    }
    if (cVar4 == '\0') {
      *(float *)(ar4 + 2) = *ar6;
    }
    else {
      *(undefined8 *)(ar4 + 2) = *(undefined8 *)ar6;
    }
  }
  else {
    *ar4 = 0;
    uVar2 = FUN_8c02b340(ar4,ar5,ar6,ar7);
    ar4[1] = (short)uVar2;
  }
  return ar5;
}



/* FUN_8c02b340 @ 8c02b340 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02b340(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar5_00;
  
  uVar2 = (*(code *)PTR_rand_8c02b3c8)(ar4,ar5,ar6,ar7);
  ar5_00 = 2;
  uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02b3cc)(uVar2,2,ar6,ar7);
  bVar1 = (byte)uVar2 & 1;
  *(byte *)(ar4 + 0x14) = *(byte *)(ar4 + 0x14) & 0xfe | bVar1;
  *(byte *)(ar4 + 0x14) = *(byte *)(ar4 + 0x14) & 0xfd | bVar1 << 1;
  uVar2 = (*(code *)PTR_rand_8c02b3c8)(ar4,ar5_00,ar6,ar7);
  iVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02b3cc)(uVar2,DAT_8c02b3d0,ar6,ar7);
  return iVar3 + 0x1e;
}



/* FUN_8c02b3d4 @ 8c02b3d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b3d4(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[1] = 0;
  *ar4 = 0;
  (*(code *)PTR_FUN_8c02b440)(ar4 + 2,ar5,ar6,ar7);
  *(byte *)(ar4 + 10) = *(byte *)(ar4 + 10) & 0xfe | 1;
  *(byte *)(ar4 + 10) = *(byte *)(ar4 + 10) & 0xfd | 2;
  return 0x14;
}



/* get_field_48c_02b444 @ 8c02b444 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_48c_02b444(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c02b44c + ar4);
}



/* FUN_8c02b450 @ 8c02b450 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02b450(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c02b458;
  *(undefined4 *)(DAT_8c02b458 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c02b45c @ 8c02b45c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b45c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c02b49c)(ar4 + DAT_8c02b498,ar5,ar6,ar7);
  return DAT_8c02b4a8;
}



/* FUN_8c02b4ac @ 8c02b4ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b4ac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c02b4ec)(ar4 + DAT_8c02b4e8,ar5,ar6,ar7);
  return DAT_8c02b4f8;
}



/* FUN_8c02b4fc @ 8c02b4fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b4fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_13c_028d9c_8c02b520)(ar4 + DAT_8c02b51c,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c02b524 @ 8c02b524 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b524(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c02b564)(ar4 + DAT_8c02b560,ar5,ar6,ar7);
  return DAT_8c02b570;
}



/* FUN_8c02b574 @ 8c02b574 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b574(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c02b580;
}



/* FUN_8c02b584 @ 8c02b584 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b584(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c02b5c4)(ar4 + DAT_8c02b5c0,ar5,ar6,ar7);
  return DAT_8c02b5d0;
}



/* FUN_8c02b5d4 @ 8c02b5d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b5d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec3_copy_8c02b5fc_8c02b5f8)(s0,ar4 + DAT_8c02b5f4,ar6,ar7);
  return uVar1;
}



/* vec3_copy_8c02b5fc @ 8c02b5fc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02b612) */
/* WARNING: Removing unreachable block (ram,0x8c02b608) */
/* WARNING: Removing unreachable block (ram,0x8c02b5fc) */
/* WARNING: Removing unreachable block (ram,0x8c02b5fe) */
/* WARNING: Removing unreachable block (ram,0x8c02b60a) */
/* WARNING: Removing unreachable block (ram,0x8c02b614) */
/* WARNING: Unknown calling convention */

undefined4 * vec3_copy_8c02b5fc(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}



/* FUN_8c02b61c @ 8c02b61c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b61c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c02b660)(ar4 + DAT_8c02b65c,ar5,ar6,ar7);
  return DAT_8c02b66c;
}



/* FUN_8c02b670 @ 8c02b670 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02b670(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c02b694)(ar4 + DAT_8c02b690,ar5,ar6,ar7);
  return (int)(short)uVar1;
}



/* FUN_8c02b698 @ 8c02b698 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02b698(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c02b6bc)(ar4 + DAT_8c02b6b8,ar5,ar6,ar7);
  return (int)(short)uVar1;
}



/* FUN_8c02b6c0 @ 8c02b6c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b6c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c02b6cc;
}



/* FUN_8c02b6d0 @ 8c02b6d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b6d0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c02b6dc;
}



/* FUN_8c02b6e0 @ 8c02b6e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02b6e0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + DAT_8c02b6ec;
}



/* get_field_308_02b6f0 @ 8c02b6f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_308_02b6f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c02b6f8 + ar4);
}



/* get_field_30c_02b6fc @ 8c02b6fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_30c_02b6fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c02b704 + ar4);
}



/* noop_02b708 @ 8c02b708 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b708(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_02b70c @ 8c02b70c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b70c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_02b710 @ 8c02b710 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b710(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_02b714 @ 8c02b714 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b714(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_02b718 @ 8c02b718 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b718(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_02b71c @ 8c02b71c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b71c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_02b720 @ 8c02b720 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b720(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_02b724 @ 8c02b724 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b724(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_02b728 @ 8c02b728 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b728(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_02b72c @ 8c02b72c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b72c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_0_02b730 @ 8c02b730 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_02b730(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_02b738 @ 8c02b738 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_02b738(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_02b740 @ 8c02b740 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_02b740(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* noop_02b748 @ 8c02b748 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b748(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_02b74c @ 8c02b74c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b74c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_02b750 @ 8c02b750 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b750(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_02b754 @ 8c02b754 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b754(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_02b758 @ 8c02b758 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b758(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_0_02b75c @ 8c02b75c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_02b75c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* noop_02b764 @ 8c02b764 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02b764(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_0_02b768 @ 8c02b768 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_02b768(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_02b770 @ 8c02b770 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_02b770(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c02b778 @ 8c02b778 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b778(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1259c8,ar5,ar6,ar7);
  uVar3 = 0x8c2792d8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2792d8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1259d8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2792e4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2792e4,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1259e8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2792f0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2792f0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1259f8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2792fc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2792fc,ar7);
  if (cVar4 == '\0') {
    _DAT_8c125a08 = CONCAT44(_UNK_8c125a0c,0x800000);
                    /* WARNING: Read-only address (ram,0x8c125a0c) is written */
  }
  else {
    _DAT_8c125a08 = 0xffffffff00800000;
  }
  uVar1 = FUN_8c02b920(&DAT_8c27d1fc,pcVar2,uVar3,ar7);
  uVar1 = global_list_push(uVar1,FUN_8c02b858,0x8c27d1f0,ar7);
  return uVar1;
}



/* FUN_8c02b858 @ 8c02b858 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02b858(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_0153e4(ar4 + 0x1f8,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x1f0,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 0x1ec,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_02b8f0(ar4 + 0x1e8,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_02b8f0(ar4 + 0x1e4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_02b8f0 @ 8c02b8f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_02b8f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c02b920 @ 8c02b920 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02b920(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 8;
  ar6_00 = 0;
  ar5_00 = PTR_LAB_8c02b980;
  (*(code *)PTR_FUN_8c02b984)(ar4,PTR_LAB_8c02b980,0,8,8);
  (*(code *)PTR_FUN_8c02b98c)(ar4 + DAT_8c02b988,ar5_00,ar6_00,ar7_00);
  (*(code *)PTR_FUN_8c02b98c)(ar4 + DAT_8c02b990,ar5_00,ar6_00,ar7_00);
  (*(code *)PTR_FUN_8c02b998)(ar4 + DAT_8c02b994,ar5_00,ar6_00,ar7_00);
  (*(code *)PTR_FUN_8c02b9a0)(ar4 + DAT_8c02b99c,ar5_00,ar6_00,ar7_00);
  (*(code *)PTR_FUN_8c02b9a0)(ar4 + DAT_8c02b9a4,ar5_00,ar6_00,ar7_00);
  return ar4;
}



/* FUN_8c02b9a8 @ 8c02b9a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02b9a8(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined *ar7_00;
  int iVar2;
  int iVar3;
  
  FUN_8c010120(ar4,&LAB_8c02df08,0,0x18,6);
  FUN_8c02d7c8(ar4 + 0x90,*(undefined4 *)(&DAT_8c1305dc + ar6 * 0x140),
               *(undefined4 *)(&DAT_8c1305e4 + ar6 * 0x140),
               *(undefined4 *)(&DAT_8c1305e0 + ar6 * 0x140));
  ar7_00 = &DAT_8c1304b6 + ar6 * 0x140;
  FUN_8c02da5c(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304b0 + ar6 * 0x140),
               (int)*(short *)(&DAT_8c1304b4 + ar6 * 0x140),ar7_00,
               *(undefined4 *)(&DAT_8c1304c4 + ar6 * 0x140),
               *(undefined4 *)(&DAT_8c1304c8 + ar6 * 0x140));
  ar6_00 = *(undefined4 *)(&DAT_8c1304d0 + ar6 * 0x140);
  uVar1 = *(undefined4 *)(&DAT_8c1304cc + ar6 * 0x140);
  FUN_8c02e460(ar4 + 0xf8,uVar1,ar6_00,ar7_00);
  iVar3 = ar6 * 0x140;
  *(undefined4 *)(ar4 + 0x134) = ar5;
  *(int *)(ar4 + 0x13c) = ar6;
  uVar1 = FUN_8c02bfd8(ar4,uVar1,ar6_00,ar7_00);
  *(int *)(ar4 + 0x138) = (int)(short)uVar1;
  *(undefined1 *)(ar4 + 0x144) = 0;
  *(undefined1 *)(ar4 + 0x164) = 0;
  *(undefined4 *)(ar4 + 0x140) = 0;
  *(undefined4 *)(ar4 + 0x148) = 0;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(undefined4 *)(ar4 + iVar2 * 4 + 0x14c) = 0;
  }
  FUN_8c02bd94(ar4,(int)(char)(&DAT_8c1304d4)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4,iVar3 + -0x73ecfb28,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4,iVar3 + -0x73ecfb14,ar6_00,ar7_00,ar5);
  FUN_8c02bd94(ar4 + 0x18,(int)(char)(&DAT_8c130500)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4 + 0x18,iVar3 + -0x73ecfafc,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4 + 0x18,iVar3 + -0x73ecfae8,ar6_00,ar7_00,ar5);
  FUN_8c02bd94(ar4 + 0x30,(int)(char)(&DAT_8c13052c)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4 + 0x30,iVar3 + -0x73ecfad0,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4 + 0x30,iVar3 + -0x73ecfabc,ar6_00,ar7_00,ar5);
  FUN_8c02bd94(ar4 + 0x48,(int)(char)(&DAT_8c130558)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4 + 0x48,iVar3 + -0x73ecfaa4,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4 + 0x48,iVar3 + -0x73ecfa90,ar6_00,ar7_00,ar5);
  FUN_8c02bd94(ar4 + 0x60,(int)(char)(&DAT_8c130584)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4 + 0x60,iVar3 + -0x73ecfa78,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4 + 0x60,iVar3 + -0x73ecfa64,ar6_00,ar7_00,ar5);
  FUN_8c02bd94(ar4 + 0x78,(int)(char)(&DAT_8c1305b0)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4 + 0x78,iVar3 + -0x73ecfa4c,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4 + 0x78,iVar3 + -0x73ecfa38,ar6_00,ar7_00,ar5);
  FUN_8c02bd70(ar4 + 0xa8,0,(int)*(short *)(&DAT_8c1304b6 + iVar3),ar7_00);
  FUN_8c02bd70(ar4 + 0xa8,1,(int)*(short *)(&DAT_8c1304b8 + iVar3),ar7_00);
  FUN_8c02bd70(ar4 + 0xa8,2,(int)*(short *)(&DAT_8c1304ba + iVar3),ar7_00);
  FUN_8c02bd70(ar4 + 0xa8,3,(int)*(short *)(&DAT_8c1304bc + iVar3),ar7_00);
  FUN_8c02bd70(ar4 + 0xa8,4,(int)*(short *)(&DAT_8c1304be + iVar3),ar7_00);
  iVar2 = (int)*(short *)(&DAT_8c1304c0 + iVar3);
  FUN_8c02bd70(ar4 + 0xa8,5,iVar2,ar7_00);
  FUN_8c02bd68(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304ac + iVar3),iVar2,ar7_00);
  return ar4;
}



/* FUN_8c02bd68 @ 8c02bd68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02bd68(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(short *)(ar4 + 0x14) = (short)ar5;
  return ar5;
}



/* FUN_8c02bd70 @ 8c02bd70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02bd70(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined2 *)(ar4 + ar5 * 2 + 0x22) = (undefined2)ar6;
  return 0x22;
}



/* FUN_8c02bd84 @ 8c02bd84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02bd84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x10) = ar5;
  return in_r0;
}



/* FUN_8c02bd8c @ 8c02bd8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02bd8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  return in_r0;
}



/* FUN_8c02bd94 @ 8c02bd94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02bd94(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0xb) = (char)ar5;
  return ar5;
}



/* FUN_8c02bd9c @ 8c02bd9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02bd9c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c02be8c)(ar4,ar5,ar6,ar7);
  if ((iVar1 < 1) && (uVar2 = (*(code *)PTR_FUN_8c02be90)(ar4,ar5,ar6,ar7), (char)uVar2 == '\x01'))
  {
    return 0;
  }
  iVar1 = (*(code *)PTR_FUN_8c02be8c)(ar4 + 0x18,ar5,ar6,ar7);
  if ((iVar1 < 1) &&
     (uVar2 = (*(code *)PTR_FUN_8c02be90)(ar4 + 0x18,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 0;
  }
  iVar1 = (*(code *)PTR_FUN_8c02be8c)(ar4 + 0x30,ar5,ar6,ar7);
  if ((iVar1 < 1) &&
     (uVar2 = (*(code *)PTR_FUN_8c02be90)(ar4 + 0x30,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 0;
  }
  iVar1 = (*(code *)PTR_FUN_8c02be8c)(ar4 + 0x48,ar5,ar6,ar7);
  if ((iVar1 < 1) &&
     (uVar2 = (*(code *)PTR_FUN_8c02be90)(ar4 + 0x48,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 0;
  }
  iVar1 = (*(code *)PTR_get_field_4_02be9c_8c02be94)(ar4 + 0x60,ar5,ar6,ar7);
  if ((iVar1 == DAT_8c02be98) &&
     (uVar2 = (*(code *)PTR_FUN_8c02be90)(ar4 + 0x60,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 0;
  }
  return 1;
}



/* get_field_4_02be9c @ 8c02be9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_4_02be9c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}



/* FUN_8c02bea4 @ 8c02bea4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02bea4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(int *)(*(char *)(ar4 + 8) * 4 + *(int *)(ar4 + 0x10)) - *(int *)(ar4 + 4);
}



/* FUN_8c02bebc @ 8c02bebc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02bebc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (5 < iVar1) {
      return 0xffffffff;
    }
    if (*(int *)(DAT_8c02bef4 + ar4 + iVar1 * 4) == 2) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* FUN_8c02bef8 @ 8c02bef8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02bef8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iStack_10;
  
  uVar1 = (*(code *)PTR_FUN_8c02bf78)(ar4,ar5,ar6,ar7);
  iStack_10 = *(short *)(PTR_DAT_8c02bf7c + (short)uVar1 * 2) + -1;
  uVar1 = (*(code *)PTR_FUN_8c02bf80)(ar4,ar5,ar6,ar7);
  if ((int)*(short *)(PTR_DAT_8c02bf88 + *(int *)(DAT_8c02bf84 + ar4) * 2) + (int)(short)uVar1 <
      iStack_10) {
    uVar1 = (*(code *)PTR_FUN_8c02bf80)(ar4,ar5,ar6,ar7);
    iStack_10 = (int)*(short *)(PTR_DAT_8c02bf88 + *(int *)(DAT_8c02bf84 + ar4) * 2) +
                (int)(short)uVar1;
  }
  return iStack_10;
}



/* FUN_8c02bf8c @ 8c02bf8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02bf8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c02bfb0)(ar4 + DAT_8c02bfac,ar5,ar6,ar7);
  return (int)(short)uVar1;
}



/* FUN_8c02bfb4 @ 8c02bfb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02bfb4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(short *)(ar4 + 0x16);
}



/* FUN_8c02bfbc @ 8c02bfbc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02bfbc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(short *)(PTR_DAT_8c02bfd4 + *(int *)(DAT_8c02bfd0 + ar4) * 2);
}



/* FUN_8c02bfd8 @ 8c02bfd8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02bfd8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    if (0x11 < iVar1) {
      return 0xffffffff;
    }
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      if (*(int *)(PTR_DAT_8c02c028 + iVar2 * 4 + iVar1 * 0x10) == *(int *)(DAT_8c02c02c + ar4)) {
        return iVar1;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}



/* FUN_8c02c030 @ 8c02c030 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02c030(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar6_00;
  int *ar5_00;
  undefined4 uVar3;
  undefined4 ar6_01;
  int ar5_01;
  undefined4 in_stack_ffffffb4;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar1 = get_field_24_026024(ar6,ar5,ar6,ar7);
  if (*(char *)(ar4 + 0x144) == '\x01') {
    FUN_8c02c390(ar4 + 0xa8,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    FUN_8c02c388(ar4,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    FUN_8c02c388(ar4 + 0x18,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    if (iVar1 == 0) {
      FUN_8c02c388(ar4 + 0x30,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    }
    if (iVar1 == 1) {
      FUN_8c02c388(ar4 + 0x48,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    }
    FUN_8c02c388(ar4 + 0x60,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    ar5_00 = (int *)(int)*(char *)(ar4 + 0x144);
    FUN_8c02c388(ar4 + 0x78,ar5_00,ar6_00,ar7);
  }
  if (iVar1 == 0) {
    FUN_8c02df24(ar4,ar6,ar6_00,ar7);
    FUN_8c02df24(ar4 + 0x18,ar6,ar6_00,ar7);
    FUN_8c02df24(ar4 + 0x30,ar6,ar6_00,ar7);
    ar5_00 = ar6;
    FUN_8c02df24(ar4 + 0x48,ar6,ar6_00,ar7);
    uVar2 = FUN_8c025f68(ar4 + 0x78,ar5_00,ar6_00,ar7);
    in_stack_ffffffb4 =
         CONCAT22((short)((uint)in_stack_ffffffb4 >> 0x10),
                  CONCAT11((char)uVar2,(char)in_stack_ffffffb4));
    if ((char)uVar2 == '\x01') {
      ar5_00 = ar6;
      FUN_8c02df24(ar4 + 0x78,ar6,ar6_00,ar7);
    }
  }
  if (ar5 != *(int **)(ar4 + 0x148)) {
    ar7 = FUN_8c02c518(ar4,ar5_00,ar6_00,ar7);
    ar5_00 = ar6;
    ar6_00 = ar5;
    FUN_8c02e4cc(ar4 + 0xf8,ar6,ar5,ar7);
  }
  iVar1 = FUN_8c02c380(ar4 + 0xf8,ar5_00,ar6_00,ar7);
  if ((iVar1 == 0) && (ar5 != *(int **)(ar4 + 0x148))) {
    if (ar5 != *(int **)(ar4 + 0x148)) {
      ar6_00 = (int *)FUN_8c02c518(ar4,ar5_00,ar6_00,ar7);
      ar5_00 = ar5;
      FUN_8c02d854(ar4 + 0x90,ar5,ar6_00,ar7);
    }
    iVar1 = FUN_8c02c340(ar4 + 0x90,ar5_00,ar6_00,ar7);
    uVar3 = 0xd;
    uVar2 = libgcc_divide_helper_0101e4(iVar1 + -0x32,0xd,ar6_00,ar7);
    ar5_01 = (int)(char)uVar2;
    iVar1 = FUN_8c02c340(ar4 + 0x90,uVar3,ar6_00,ar7);
    if ((iVar1 == 100) && (ar5_01 = 5, _DAT_8c27d430 == 1)) {
      ar5_01 = 4;
    }
    FUN_8c02c338(ar4 + 0x60,ar5_01,ar6_00,ar7);
    iVar1 = FUN_8c02d8fc(ar4 + 0x90,ar5_01,ar6_00,ar7);
    if (iVar1 == 1) {
      FUN_8c02c330(ar4 + 0x60,1,ar6_00,ar7,in_stack_ffffffb4);
    }
    else {
      FUN_8c02c330(ar4 + 0x60,0,ar6_00,ar7,in_stack_ffffffb4);
    }
    ar5_00 = ar6;
    FUN_8c02df24(ar4 + 0x60,ar6,ar6_00,ar7);
  }
  uVar2 = FUN_8c02c518(ar4,ar5_00,ar6_00,ar7);
  FUN_8c02c328(ar4 + 0xa8,uVar2,ar6_00,ar7);
  uVar3 = (**(code **)(*ar6 + 0x148))(ar6,uVar2,ar6_00,ar7);
  uVar2 = FUN_8c02bfd8(ar4,uVar2,ar6_00,ar7);
  ar6_01 = *(undefined4 *)(ar4 + 0x140);
  uVar2 = FUN_8c02c310(uVar3,(int)(short)uVar2,ar6_01,ar7);
  FUN_8c02c308(ar4 + 0xa8,(int)(char)uVar2,ar6_01,ar7);
  uVar2 = *(undefined4 *)(ar4 + 0x13c);
  FUN_8c02db6c(ar4 + 0xa8,uVar2,ar6_01,ar7);
  *(undefined1 *)(ar4 + 0x144) = 0;
  FUN_8c02c5b4(ar4,uVar2,ar6_01,ar7);
  *(int **)(ar4 + 0x148) = ar5;
  return 0x148;
}



/* FUN_8c02c308 @ 8c02c308 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02c308(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 3) = (char)ar5;
  return ar5;
}



/* FUN_8c02c310 @ 8c02c310 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02c310(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + (short)ar5 * 2 + (int)(short)ar6 + 0x51);
}



/* FUN_8c02c328 @ 8c02c328 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02c328(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x48) = ar5;
  return 0x48;
}



/* FUN_8c02c330 @ 8c02c330 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02c330(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = (undefined1)ar5;
  return in_r0;
}



/* FUN_8c02c338 @ 8c02c338 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02c338(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 8) = (char)ar5;
  return ar5;
}



/* FUN_8c02c340 @ 8c02c340 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02c340(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02c37c)
                    (*(int *)(ar4 + 4) * DAT_8c02c378,*(int *)(ar4 + 0xc) * 10,ar6,ar7);
  return uVar1;
}



/* FUN_8c02c380 @ 8c02c380 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02c380(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}



/* FUN_8c02c388 @ 8c02c388 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02c388(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 10) = (char)ar5;
  return ar5;
}



/* FUN_8c02c390 @ 8c02c390 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02c390(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x4c) = (undefined1)ar5;
  return 0x4c;
}



/* FUN_8c02c398 @ 8c02c398 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02c398(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c02c3a4;
  *(undefined1 *)(DAT_8c02c3a4 + ar4) = 0;
  return iVar1;
}



/* FUN_8c02c3a8 @ 8c02c3a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02c3a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c02c4d4)(ar4 + 0x48,ar5,ar6,ar7);
  if ((iVar1 < 1) &&
     (uVar2 = (*(code *)PTR_FUN_8c02c4d8)(ar4 + 0x48,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 3;
  }
  iVar1 = (*(code *)PTR_FUN_8c02c4d4)(ar4 + 0x30,ar5,ar6,ar7);
  if ((iVar1 < 1) &&
     (uVar2 = (*(code *)PTR_FUN_8c02c4d8)(ar4 + 0x30,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 2;
  }
  iVar1 = (*(code *)PTR_FUN_8c02c4d4)(ar4,ar5,ar6,ar7);
  if ((iVar1 < 1) && (uVar2 = (*(code *)PTR_FUN_8c02c4d8)(ar4,ar5,ar6,ar7), (char)uVar2 == '\x01'))
  {
    return 0;
  }
  iVar1 = (*(code *)PTR_FUN_8c02c4d4)(ar4 + 0x18,ar5,ar6,ar7);
  if ((iVar1 < 1) &&
     (uVar2 = (*(code *)PTR_FUN_8c02c4d8)(ar4 + 0x18,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 1;
  }
  iVar1 = (*(code *)PTR_get_field_4_02be9c_8c02c4dc)(ar4 + 0x18,ar5,ar6,ar7);
  if (iVar1 == DAT_8c02c4e0) {
    uVar2 = 1;
  }
  else {
    iVar1 = (*(code *)PTR_get_field_4_02be9c_8c02c4dc)(ar4 + 0x60,ar5,ar6,ar7);
    if ((iVar1 == DAT_8c02c4e0) &&
       (uVar2 = (*(code *)PTR_FUN_8c02c4d8)(ar4 + 0x60,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
      return 4;
    }
    iVar1 = (*(code *)PTR_FUN_8c02c4e4)(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* FUN_8c02c4e8 @ 8c02c4e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02c4e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c02c50c)(ar4 + DAT_8c02c508,ar5,ar6,ar7);
  return (int)(char)uVar1;
}



/* FUN_8c02c510 @ 8c02c510 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02c510(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x1c);
}



/* FUN_8c02c518 @ 8c02c518 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02c518(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = -1;
  iVar2 = -1;
  for (iVar4 = 0; iVar4 < 6; iVar4 = iVar4 + 1) {
    uVar1 = (*(code *)PTR_FUN_8c02c5a4)(iVar4 * 0x18 + ar4,ar5,ar6,ar7);
    if (((char)uVar1 == '\x01') && (iVar4 != 5)) {
      uVar1 = (*(code *)PTR_FUN_8c02c5a8)(iVar4 * 0x18 + ar4,ar5,ar6,ar7);
      if (cVar3 < (char)uVar1) {
        iVar2 = iVar4;
        cVar3 = (char)uVar1;
      }
    }
  }
  return iVar2;
}



/* FUN_8c02c5ac @ 8c02c5ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02c5ac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 8);
}



/* FUN_8c02c5b4 @ 8c02c5b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02c5b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    uVar1 = (*(code *)PTR_FUN_8c02c660)(iVar2 * 0x18 + ar4,ar5,ar6,ar7);
    if ((char)uVar1 == '\0') {
      if (*(int *)(DAT_8c02c664 + ar4 + iVar2 * 4) == 2) {
        *(undefined4 *)(DAT_8c02c664 + ar4 + iVar2 * 4) = 0;
      }
      else if (*(int *)(DAT_8c02c664 + ar4 + iVar2 * 4) == 1) {
        *(undefined4 *)(DAT_8c02c664 + ar4 + iVar2 * 4) = 2;
      }
    }
    else {
      *(undefined4 *)(DAT_8c02c664 + ar4 + iVar2 * 4) = 1;
    }
  }
  return 6;
}



/* FUN_8c02c668 @ 8c02c668 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02c668(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = (*(code *)PTR_FUN_8c02c748)(ar4,ar5,ar6,ar7);
  if (iVar1 != -1) {
    iVar1 = (*(code *)PTR_FUN_8c02c748)(ar4,ar5,ar6,ar7);
    uVar2 = (*(code *)PTR_FUN_8c02c74c)(iVar1 * 0x18 + ar4,ar5,ar6,ar7);
    if ((char)uVar2 == '\0') {
      iVar4 = 0;
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c02c748)(ar4,ar5,ar6,ar7);
      uVar2 = (*(code *)PTR_FUN_8c02c74c)(iVar1 * 0x18 + ar4,ar5,ar6,ar7);
      iVar1 = (*(code *)PTR_FUN_8c02c748)(ar4,ar5,ar6,ar7);
      uVar3 = (*(code *)PTR_FUN_8c02c750)(iVar1 * 0x18 + ar4,ar5,ar6,ar7);
      ar5 = (int)(char)uVar2;
      iVar4 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02c754)(0x1e,ar5,ar6,ar7);
      iVar4 = iVar4 * (char)uVar3;
    }
  }
  iVar1 = (*(code *)PTR_FUN_8c02c748)(ar4,ar5,ar6,ar7);
  return iVar4 + (uint)(iVar1 != -1) * 0x46;
}



/* FUN_8c02c758 @ 8c02c758 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02c758(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_stack_ffffffe4;
  undefined2 uVar5;
  undefined4 ain0;
  
  iVar4 = ar5 * 0x140;
  iVar3 = ar5;
  iVar1 = get_field_34_02cbdc(ar4 + 0xa8,ar5,ar6,ar7);
  if (iVar1 != 0x13) {
    FUN_8c02cbd4(ar4 + 0xa8,0,ar6,ar7,in_stack_ffffffe4);
    iVar3 = 0;
    FUN_8c02cbbc(ar4 + 0x90,0,ar6,ar7);
  }
  uVar5 = (undefined2)((uint)in_stack_ffffffe4 >> 0x10);
  *(undefined1 *)(ar4 + 0x144) = 0;
  *(undefined1 *)(ar4 + 0x164) = 0;
  *(int *)(ar4 + 0x13c) = ar5;
  uVar2 = FUN_8c02bfd8(ar4,iVar3,ar6,ar7);
  ain0 = CONCAT22(uVar5,(short)uVar2);
  *(int *)(ar4 + 0x138) = (int)(short)uVar2;
  FUN_8c02bd94(ar4,(int)(char)(&DAT_8c1304d4)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4,iVar4 + -0x73ecfb28,ar6,ar7,ain0);
  FUN_8c02bd84(ar4,iVar4 + -0x73ecfb14,ar6,ar7,ain0);
  FUN_8c02bd94(ar4 + 0x18,(int)(char)(&DAT_8c130500)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4 + 0x18,iVar4 + -0x73ecfafc,ar6,ar7,ain0);
  FUN_8c02bd84(ar4 + 0x18,iVar4 + -0x73ecfae8,ar6,ar7,ain0);
  FUN_8c02bd94(ar4 + 0x30,(int)(char)(&DAT_8c13052c)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4 + 0x30,iVar4 + -0x73ecfad0,ar6,ar7,ain0);
  FUN_8c02bd84(ar4 + 0x30,iVar4 + -0x73ecfabc,ar6,ar7,ain0);
  FUN_8c02bd94(ar4 + 0x48,(int)(char)(&DAT_8c130558)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4 + 0x48,iVar4 + -0x73ecfaa4,ar6,ar7,ain0);
  FUN_8c02bd84(ar4 + 0x48,iVar4 + -0x73ecfa90,ar6,ar7,ain0);
  FUN_8c02bd94(ar4 + 0x60,(int)(char)(&DAT_8c130584)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4 + 0x60,iVar4 + -0x73ecfa78,ar6,ar7,ain0);
  FUN_8c02bd84(ar4 + 0x60,iVar4 + -0x73ecfa64,ar6,ar7,ain0);
  FUN_8c02bd94(ar4 + 0x78,(int)(char)(&DAT_8c1305b0)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4 + 0x78,iVar4 + -0x73ecfa4c,ar6,ar7,ain0);
  FUN_8c02bd84(ar4 + 0x78,iVar4 + -0x73ecfa38,ar6,ar7,ain0);
  FUN_8c02cbb4(ar4 + 0x90,*(undefined4 *)(&DAT_8c1305dc + iVar4),ar6,ar7,ain0);
  FUN_8c02cbac(ar4 + 0x90,*(undefined4 *)(&DAT_8c1305e4 + iVar4),ar6,ar7,ain0);
  FUN_8c02d81c(ar4 + 0x90,*(undefined4 *)(&DAT_8c1305e0 + iVar4),ar6,ar7);
  FUN_8c02cba4(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304b0 + iVar4),ar6,ar7,ain0);
  FUN_8c02cb9c(ar4 + 0xa8,(int)*(short *)(&DAT_8c1304b4 + iVar4),ar6,ar7);
  FUN_8c02bd70(ar4 + 0xa8,0,(int)*(short *)(&DAT_8c1304b6 + iVar4),ar7);
  FUN_8c02bd70(ar4 + 0xa8,1,(int)*(short *)(&DAT_8c1304b8 + iVar4),ar7);
  FUN_8c02bd70(ar4 + 0xa8,2,(int)*(short *)(&DAT_8c1304ba + iVar4),ar7);
  FUN_8c02bd70(ar4 + 0xa8,3,(int)*(short *)(&DAT_8c1304bc + iVar4),ar7);
  FUN_8c02bd70(ar4 + 0xa8,4,(int)*(short *)(&DAT_8c1304be + iVar4),ar7);
  iVar3 = (int)*(short *)(&DAT_8c1304c0 + iVar4);
  FUN_8c02bd70(ar4 + 0xa8,5,iVar3,ar7);
  FUN_8c02cb94(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304c4 + iVar4),iVar3,ar7,ain0);
  FUN_8c02cb8c(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304c8 + iVar4),iVar3,ar7,ain0);
  FUN_8c02bd68(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304ac + iVar4),iVar3,ar7);
  FUN_8c025fbc(ar4 + 0xa8,0,iVar3,ar7);
  FUN_8c02cb84(ar4 + 0xa8,0,iVar3,ar7,ain0);
  FUN_8c02cb7c(ar4 + 0xa8,0,iVar3,ar7,ain0);
  FUN_8c02cb74(ar4 + 0xa8,0,iVar3,ar7);
  FUN_8c02cb6c(ar4 + 0xa8,0,iVar3,ar7,ain0);
  FUN_8c02cb24(ar4 + 0xf8,*(undefined4 *)(&DAT_8c1304cc + iVar4),iVar3,ar7);
  uVar2 = FUN_8c02cadc(ar4 + 0xf8,*(undefined4 *)(&DAT_8c1304d0 + iVar4),iVar3,ar7);
  return uVar2;
}



/* FUN_8c02cadc @ 8c02cadc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cadc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02cb20)
                    (ar5 * DAT_8c02cb14 * DAT_8c02cb1c,DAT_8c02cb18,ar6,ar7);
  *(undefined4 *)(ar4 + 0xc) = uVar1;
  return uVar1;
}



/* FUN_8c02cb24 @ 8c02cb24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cb24(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02cb68)
                    (ar5 * DAT_8c02cb5c * DAT_8c02cb64,DAT_8c02cb60,ar6,ar7);
  *(undefined4 *)(ar4 + 8) = uVar1;
  return uVar1;
}



/* FUN_8c02cb6c @ 8c02cb6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cb6c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x3c) = ar5;
  return in_r0;
}



/* FUN_8c02cb74 @ 8c02cb74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cb74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 1) = (char)ar5;
  return ar5;
}



/* FUN_8c02cb7c @ 8c02cb7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cb7c(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = (undefined1)ar5;
  return in_r0;
}



/* FUN_8c02cb84 @ 8c02cb84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cb84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x18) = ar5;
  return in_r0;
}



/* FUN_8c02cb8c @ 8c02cb8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cb8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x30) = ar5;
  return in_r0;
}



/* FUN_8c02cb94 @ 8c02cb94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cb94(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x34) = ar5;
  return in_r0;
}



/* FUN_8c02cb9c @ 8c02cb9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cb9c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined2 *)(ar4 + 0x20) = (undefined2)ar5;
  return 0x20;
}



/* FUN_8c02cba4 @ 8c02cba4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cba4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x38) = ar5;
  return in_r0;
}



/* FUN_8c02cbac @ 8c02cbac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cbac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x10) = ar5;
  return in_r0;
}



/* FUN_8c02cbb4 @ 8c02cbb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cbb4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  return in_r0;
}



/* FUN_8c02cbbc @ 8c02cbbc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cbbc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0xc) - ar5;
  if (iVar1 < 1) {
    *(undefined4 *)(ar4 + 4) = *(undefined4 *)(ar4 + 0xc);
    return *(undefined4 *)(ar4 + 0xc);
  }
  *(int *)(ar4 + 4) = ar5;
  return iVar1;
}



/* FUN_8c02cbd4 @ 8c02cbd4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cbd4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x10) = ar5;
  return in_r0;
}



/* get_field_34_02cbdc @ 8c02cbdc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_34_02cbdc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x34);
}



/* FUN_8c02cbe4 @ 8c02cbe4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cbe4(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ain0;
  int in_stack_ffffffd0;
  
  FUN_8c02ce4c(ar4,*ar5,ar6,ar7);
  FUN_8c02ce40(ar4,ar5[1],ar6,ar7);
  FUN_8c02ce34(ar4,ar5[2],ar6,ar7);
  FUN_8c02ce28(ar4,ar5[3],ar6,ar7);
  FUN_8c02cbbc(ar4 + 0x90,ar5[4],ar6,ar7);
  FUN_8c02ce10(ar4 + 0x90,ar5[5],ar6,ar7);
  FUN_8c02cb7c(ar4 + 0xa8,(int)*(char *)(ar5 + 6),ar6,ar7,in_stack_ffffffd0);
  FUN_8c02cb74(ar4 + 0xa8,(int)*(char *)((int)ar5 + 0x19),ar6,ar7);
  FUN_8c028edc(ar4 + 0xa8,ar5[7],ar6,ar7,in_stack_ffffffd0);
  FUN_8c028ed4(ar4 + 0xa8,ar5[8],ar6,ar7,in_stack_ffffffd0);
  FUN_8c02cbd4(ar4 + 0xa8,ar5[9],ar6,ar7,in_stack_ffffffd0);
  FUN_8c02bd68(ar4 + 0xa8,(int)*(short *)(ar5 + 10),ar6,ar7);
  FUN_8c025fbc(ar4 + 0xa8,(int)*(short *)((int)ar5 + 0x2a),ar6,ar7);
  FUN_8c02cb84(ar4 + 0xa8,ar5[0xb],ar6,ar7,in_stack_ffffffd0);
  FUN_8c02ce08(ar4 + 0xf8,ar5[0xc],ar6,ar7,in_stack_ffffffd0);
  for (ain0 = 0; ain0 < 6; ain0 = ain0 + 1) {
    FUN_8c02bd94(ain0 * 0x18 + ar4,(int)*(char *)(ar5 + ain0 * 3 + 0xd),ar6,ar7);
    FUN_8c02c330(ain0 * 0x18 + ar4,(int)*(char *)((int)ar5 + ain0 * 0xc + 0x35),ar6,ar7,
                 in_stack_ffffffd0);
    FUN_8c02c338(ain0 * 0x18 + ar4,(int)*(char *)(ar5 + ain0 * 3 + 0xf),ar6,ar7);
    in_stack_ffffffd0 = ain0;
    FUN_8c02ce00(ain0 * 0x18 + ar4,ar5[ain0 * 3 + 0xe],ar6,ar7,ain0);
  }
  FUN_8c02cdf8(ar4 + 0x78,(int)*(char *)(ar5 + 0x1e),ar6,ar7);
  uVar1 = FUN_8c02c338(ar4 + 0x78,0,ar6,ar7);
  return uVar1;
}



/* FUN_8c02cdf8 @ 8c02cdf8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cdf8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 9) = (char)ar5;
  return ar5;
}



/* FUN_8c02ce00 @ 8c02ce00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ce00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 4) = ar5;
  return in_r0;
}



/* FUN_8c02ce08 @ 8c02ce08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ce08(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x10) = ar5;
  return in_r0;
}



/* FUN_8c02ce10 @ 8c02ce10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ce10(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x10) - ar5;
  if (iVar1 < 1) {
    *(undefined4 *)(ar4 + 8) = *(undefined4 *)(ar4 + 0x10);
    return *(undefined4 *)(ar4 + 0x10);
  }
  *(int *)(ar4 + 8) = ar5;
  return iVar1;
}



/* FUN_8c02ce28 @ 8c02ce28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02ce28(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c02ce30;
  *(undefined4 *)(DAT_8c02ce30 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c02ce34 @ 8c02ce34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02ce34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c02ce3c;
  *(undefined4 *)(DAT_8c02ce3c + ar4) = ar5;
  return iVar1;
}



/* FUN_8c02ce40 @ 8c02ce40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02ce40(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c02ce48;
  *(undefined4 *)(DAT_8c02ce48 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c02ce4c @ 8c02ce4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02ce4c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c02ce54;
  *(undefined4 *)(DAT_8c02ce54 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c02ce58 @ 8c02ce58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ce58(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_8c02ce4c(ar4,*ar5,ar6,ar7);
  FUN_8c02ce40(ar4,ar5[1],ar6,ar7);
  FUN_8c02ce34(ar4,ar5[2],ar6,ar7);
  FUN_8c02ce28(ar4,ar5[3],ar6,ar7);
  FUN_8c028edc(ar4 + 0xa8,ar5[4],ar6,ar7,uVar1);
  FUN_8c028ed4(ar4 + 0xa8,ar5[5],ar6,ar7,uVar1);
  FUN_8c02cbd4(ar4 + 0xa8,ar5[6],ar6,ar7,uVar1);
  FUN_8c02bd68(ar4 + 0xa8,(int)*(short *)(ar5 + 7),ar6,ar7);
  FUN_8c025fbc(ar4 + 0xa8,(int)*(short *)((int)ar5 + 0x1e),ar6,ar7);
  uVar1 = FUN_8c02cb84(ar4 + 0xa8,ar5[8],ar6,ar7,uVar1);
  return uVar1;
}



/* FUN_8c02cf20 @ 8c02cf20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cf20(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  int iVar2;
  
  ar5_00 = ar5;
  uVar1 = (*(code *)PTR_get_field_134_02d1e8_8c02d138)(ar4,ar5,ar6,ar7);
  *ar5 = uVar1;
  uVar1 = (*(code *)PTR_get_field_138_02737c_8c02d13c)(ar4,ar5_00,ar6,ar7);
  ar5[1] = uVar1;
  uVar1 = (*(code *)PTR_get_field_13c_028d9c_8c02d140)(ar4,ar5_00,ar6,ar7);
  ar5[2] = uVar1;
  uVar1 = (*(code *)PTR_get_field_140_025f70_8c02d144)(ar4,ar5_00,ar6,ar7);
  ar5[3] = uVar1;
  uVar1 = (*(code *)PTR_get_field_4_02d1e0_8c02d14c)(ar4 + DAT_8c02d148,ar5_00,ar6,ar7);
  ar5[4] = uVar1;
  uVar1 = (*(code *)PTR_get_field_8_02d1d8_8c02d150)(ar4 + DAT_8c02d148,ar5_00,ar6,ar7);
  ar5[5] = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02d158)(ar4 + DAT_8c02d154,ar5_00,ar6,ar7);
  *(char *)(ar5 + 6) = (char)uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02d15c)(ar4 + DAT_8c02d154,ar5_00,ar6,ar7);
  *(char *)((int)ar5 + 0x19) = (char)uVar1;
  uVar1 = (*(code *)PTR_get_field_8_02d1c0_8c02d160)(ar4 + DAT_8c02d154,ar5_00,ar6,ar7);
  ar5[7] = uVar1;
  uVar1 = (*(code *)PTR_get_field_c_02d1b8_8c02d164)(ar4 + DAT_8c02d154,ar5_00,ar6,ar7);
  ar5[8] = uVar1;
  uVar1 = (*(code *)PTR_get_field_10_02d1b0_8c02d168)(ar4 + DAT_8c02d154,ar5_00,ar6,ar7);
  ar5[9] = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02d16c)(ar4 + DAT_8c02d154,ar5_00,ar6,ar7);
  *(short *)(ar5 + 10) = (short)uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02d170)(ar4 + DAT_8c02d154,ar5_00,ar6,ar7);
  *(short *)((int)ar5 + 0x2a) = (short)uVar1;
  uVar1 = (*(code *)PTR_get_field_18_02d1a0_8c02d174)(ar4 + DAT_8c02d154,ar5_00,ar6,ar7);
  ar5[0xb] = uVar1;
  uVar1 = (*(code *)PTR_get_field_10_02d198_8c02d17c)(ar4 + DAT_8c02d178,ar5_00,ar6,ar7);
  ar5[0xc] = uVar1;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(char *)(ar5 + iVar2 * 3 + 0xd) = (char)iVar2;
    uVar1 = (*(code *)PTR_FUN_8c02d180)(iVar2 * 0x18 + ar4,ar5_00,ar6,ar7);
    *(char *)((int)ar5 + iVar2 * 0xc + 0x35) = (char)uVar1;
    uVar1 = (*(code *)PTR_get_field_4_02be9c_8c02d184)(iVar2 * 0x18 + ar4,ar5_00,ar6,ar7);
    ar5[iVar2 * 3 + 0xe] = uVar1;
    uVar1 = (*(code *)PTR_FUN_8c02d188)(iVar2 * 0x18 + ar4,ar5_00,ar6,ar7);
    *(char *)(ar5 + iVar2 * 3 + 0xf) = (char)uVar1;
  }
  uVar1 = (*(code *)PTR_FUN_8c02d18c)(ar4 + 0x78,ar5_00,ar6,ar7);
  *(char *)(ar5 + 0x1e) = (char)uVar1;
  return 0x78;
}



/* FUN_8c02d190 @ 8c02d190 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02d190(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 9);
}



/* get_field_10_02d198 @ 8c02d198 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_10_02d198(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x10);
}



/* get_field_18_02d1a0 @ 8c02d1a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_18_02d1a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x18);
}



/* FUN_8c02d1a8 @ 8c02d1a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02d1a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(short *)(ar4 + 0x14);
}



/* get_field_10_02d1b0 @ 8c02d1b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_10_02d1b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x10);
}



/* get_field_c_02d1b8 @ 8c02d1b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_c_02d1b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0xc);
}



/* get_field_8_02d1c0 @ 8c02d1c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_8_02d1c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 8);
}



/* FUN_8c02d1c8 @ 8c02d1c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02d1c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 1);
}



/* FUN_8c02d1d0 @ 8c02d1d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02d1d0(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*ar4;
}



/* get_field_8_02d1d8 @ 8c02d1d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_8_02d1d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 8);
}



/* get_field_4_02d1e0 @ 8c02d1e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_4_02d1e0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}



/* get_field_134_02d1e8 @ 8c02d1e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_134_02d1e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c02d1f0 + ar4);
}



/* FUN_8c02d1f4 @ 8c02d1f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02d1f4(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  
  ar5_00 = ar5;
  uVar1 = (*(code *)PTR_get_field_134_02d1e8_8c02d2b4)(ar4,ar5,ar6,ar7);
  *ar5 = uVar1;
  uVar1 = (*(code *)PTR_get_field_138_02737c_8c02d2b8)(ar4,ar5_00,ar6,ar7);
  ar5[1] = uVar1;
  uVar1 = (*(code *)PTR_get_field_13c_028d9c_8c02d2bc)(ar4,ar5_00,ar6,ar7);
  ar5[2] = uVar1;
  uVar1 = (*(code *)PTR_get_field_140_025f70_8c02d2c0)(ar4,ar5_00,ar6,ar7);
  ar5[3] = uVar1;
  uVar1 = (*(code *)PTR_get_field_8_02d1c0_8c02d2c8)(ar4 + DAT_8c02d2c4,ar5_00,ar6,ar7);
  ar5[4] = uVar1;
  uVar1 = (*(code *)PTR_get_field_c_02d1b8_8c02d2cc)(ar4 + DAT_8c02d2c4,ar5_00,ar6,ar7);
  ar5[5] = uVar1;
  uVar1 = (*(code *)PTR_get_field_10_02d1b0_8c02d2d0)(ar4 + DAT_8c02d2c4,ar5_00,ar6,ar7);
  ar5[6] = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02d2d4)(ar4 + DAT_8c02d2c4,ar5_00,ar6,ar7);
  *(short *)(ar5 + 7) = (short)uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02d2d8)(ar4 + DAT_8c02d2c4,ar5_00,ar6,ar7);
  *(short *)((int)ar5 + 0x1e) = (short)uVar1;
  uVar1 = (*(code *)PTR_get_field_18_02d1a0_8c02d2dc)(ar4 + DAT_8c02d2c4,ar5_00,ar6,ar7);
  ar5[8] = uVar1;
  return uVar1;
}



/* FUN_8c02d2e0 @ 8c02d2e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02d2e0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  int iVar2;
  undefined4 in_stack_ffffffe4;
  undefined4 ain0;
  
  ar5_00 = ar5;
  FUN_8c02d944(ar4 + 0x90,ar5,ar6,ar7,in_stack_ffffffe4);
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    ar5_00 = ar5;
    FUN_8c02e3cc(iVar2 * 0x18 + ar4,ar5,ar6,ar7);
  }
  if ((6 < ar5) && ((*(int *)(ar4 + 0x13c) == 2 || (*(int *)(ar4 + 0x13c) == 6)))) {
    ar5_00 = 10000;
    FUN_8c02ce00(ar4 + 0x18,10000,ar6,ar7,in_stack_ffffffe4);
  }
  uVar1 = FUN_8c02d3e0(ar4 + 0x90,ar5_00,ar6,ar7);
  ain0 = CONCAT31((int3)((uint)in_stack_ffffffe4 >> 8),(char)uVar1);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_8c02c518(ar4,ar5_00,ar6,ar7);
    FUN_8c02c328(ar4 + 0xa8,uVar1,ar6,ar7);
    uVar1 = FUN_8c02de00(ar4 + 0xa8,ar5,*(undefined4 *)(ar4 + 0x13c),ar7);
  }
  else {
    FUN_8c02ce00(ar4 + 0x60,10000,ar6,ar7,ain0);
    uVar1 = FUN_8c02c330(ar4 + 0x60,1,ar6,ar7,ain0);
  }
  return uVar1;
}



/* FUN_8c02d3e0 @ 8c02d3e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02d3e0(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*ar4;
}



/* FUN_8c02d3e8 @ 8c02d3e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02d3e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c02d40c)(ar4 + DAT_8c02d408,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c02d410 @ 8c02d410 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02d410(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c02d434)(ar4 + DAT_8c02d430,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c02d438 @ 8c02d438 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02d438(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02d474)
                    (*(int *)(ar4 + 8) * DAT_8c02d470,*(int *)(ar4 + 0x10) * 10,ar6,ar7);
  return uVar1;
}



/* FUN_8c02d478 @ 8c02d478 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02d478(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c02d4b4)(ar4 + DAT_8c02d4b0,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_get_field_4_02d4bc_8c02d4b8)(ar4 + DAT_8c02d4b0,ar5,ar6,ar7);
  return iVar1 * iVar2;
}



/* get_field_4_02d4bc @ 8c02d4bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_4_02d4bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}



/* FUN_8c02d4c4 @ 8c02d4c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02d4c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c02d504)(ar4 + DAT_8c02d500,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_get_field_4_02d4bc_8c02d508)(ar4 + DAT_8c02d500,ar5,ar6,ar7);
  return (1 - iVar1) * iVar2;
}



/* FUN_8c02d50c @ 8c02d50c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c02d50c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = 0xffffffff;
  ar4[1] = 0x13;
  ar4[2] = 0x1b;
  ar4[3] = 2;
  ar4[4] = 0;
  ar4[5] = 0;
  *(undefined1 *)(ar4 + 6) = 0;
  *(undefined1 *)((int)ar4 + 0x19) = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  *(undefined2 *)(ar4 + 10) = 0;
  *(undefined2 *)((int)ar4 + 0x2a) = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(char *)(ar4 + iVar1 * 3 + 0xd) = (char)iVar1;
    *(undefined1 *)((int)ar4 + iVar1 * 0xc + 0x35) = 0;
    ar4[iVar1 * 3 + 0xe] = 0;
    *(undefined1 *)(ar4 + iVar1 * 3 + 0xf) = 0;
  }
  return ar4;
}



/* FUN_8c02d5b8 @ 8c02d5b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c02d5b8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0xffffffff;
  ar4[1] = 0x13;
  ar4[2] = 0x1b;
  ar4[3] = 2;
  ar4[4] = 0;
  ar4[5] = 0;
  ar4[6] = 0;
  *(undefined2 *)(ar4 + 7) = 0;
  *(undefined2 *)((int)ar4 + 0x1e) = 0;
  ar4[8] = 0;
  return ar4;
}



/* FUN_8c02d5e8 @ 8c02d5e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02d5e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02d6d4)(PTR_DAT_8c02d6d0,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c02d6dc;
  uVar2 = DAT_8c02d6d8;
  (*(code *)PTR_global_list_push_8c02d6e0)(uVar1,PTR_Vec3_dtor_8c02d6dc,DAT_8c02d6d8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02d6d4)(PTR_DAT_8c02d6e4,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c02d6dc;
  uVar2 = DAT_8c02d6e8;
  (*(code *)PTR_global_list_push_8c02d6e0)(uVar1,PTR_Vec3_dtor_8c02d6dc,DAT_8c02d6e8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02d6d4)(PTR_DAT_8c02d6ec,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c02d6dc;
  uVar2 = DAT_8c02d6f0;
  (*(code *)PTR_global_list_push_8c02d6e0)(uVar1,PTR_Vec3_dtor_8c02d6dc,DAT_8c02d6f0,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c02d6d4)(PTR_DAT_8c02d6f4,puVar3,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c02d6e0)(uVar2,PTR_Vec3_dtor_8c02d6dc,DAT_8c02d6f8,ar7);
  *(undefined2 *)(PTR_DAT_8c02d6fc + 6) = *(undefined2 *)(PTR_DAT_8c02d700 + DAT_8c02d704);
  *(short *)(PTR_DAT_8c02d6fc + 8) =
       *(short *)(PTR_DAT_8c02d700 + DAT_8c02d704) + *(short *)(PTR_DAT_8c02d700 + DAT_8c02d708);
  *(undefined2 *)(PTR_DAT_8c02d6fc + 0xe) = *(undefined2 *)(PTR_DAT_8c02d700 + DAT_8c02d70c);
  *(undefined2 *)(PTR_DAT_8c02d6fc + 0x1e) = *(undefined2 *)(PTR_DAT_8c02d700 + DAT_8c02d710);
  *(short *)(PTR_DAT_8c02d6fc + 0x20) =
       *(short *)(PTR_DAT_8c02d700 + DAT_8c02d710) + *(short *)(PTR_DAT_8c02d700 + DAT_8c02d714);
  *(undefined2 *)(PTR_DAT_8c02d6fc + 0x24) = *(undefined2 *)(PTR_DAT_8c02d700 + DAT_8c02d718);
  *(short *)(PTR_DAT_8c02d6fc + 0x26) =
       *(short *)(PTR_DAT_8c02d700 + DAT_8c02d718) + *(short *)(PTR_DAT_8c02d700 + DAT_8c02d71c);
  return 0x26;
}



/* FUN_8c02d720 @ 8c02d720 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02d720(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02d7a0)(PTR_DAT_8c02d79c,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c02d7a8;
  uVar2 = DAT_8c02d7a4;
  (*(code *)PTR_global_list_push_8c02d7ac)(uVar1,PTR_Vec3_dtor_8c02d7a8,DAT_8c02d7a4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02d7a0)(PTR_DAT_8c02d7b0,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c02d7a8;
  uVar2 = DAT_8c02d7b4;
  (*(code *)PTR_global_list_push_8c02d7ac)(uVar1,PTR_Vec3_dtor_8c02d7a8,DAT_8c02d7b4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02d7a0)(PTR_DAT_8c02d7b8,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c02d7a8;
  uVar2 = DAT_8c02d7bc;
  (*(code *)PTR_global_list_push_8c02d7ac)(uVar1,PTR_Vec3_dtor_8c02d7a8,DAT_8c02d7bc,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c02d7a0)(PTR_DAT_8c02d7c0,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c02d7ac)(uVar2,PTR_Vec3_dtor_8c02d7a8,DAT_8c02d7c4,ar7);
  return uVar2;
}



/* FUN_8c02d7c8 @ 8c02d7c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c02d7c8(undefined1 *ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  *(undefined4 *)(ar4 + 0x10) = ar6;
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02d818)(ar7 * DAT_8c02d814,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x14) = uVar1;
  *ar4 = 0;
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  return ar4;
}



/* FUN_8c02d81c @ 8c02d81c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02d81c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02d850)
                    (ar5 * DAT_8c02d84c,*(undefined4 *)(ar4 + 0xc),ar6,ar7);
  *(undefined4 *)(ar4 + 0x14) = uVar1;
  return uVar1;
}



/* FUN_8c02d854 @ 8c02d854 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c02d854(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint ar4_00;
  undefined4 uVar4;
  
  cVar1 = (char)ar6;
  uVar3 = 0;
  if (*(int *)(ar4 + 0x14) != 0) {
    uVar4 = *(undefined4 *)(ar4 + 0x14);
    ar4_00 = ar5;
    iVar2 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c02d8e8)(ar5,uVar4,ar6,ar7);
    if ((iVar2 == 0) && (*(int *)(ar4 + 4) < *(int *)(ar4 + 0xc))) {
      *(int *)(ar4 + 4) = *(int *)(ar4 + 4) + 1;
    }
    uVar3 = *(uint *)(ar4 + 8);
    if (((*(uint *)(ar4 + 8) == 1) && (uVar3 = (int)cVar1, (int)cVar1 == 0xffffffff)) &&
       (uVar3 = DAT_8c02d8ec, DAT_8c02d8ec < ar5)) {
      uVar4 = (*(code *)PTR_rand_8c02d8f0)(ar4_00,uVar4,ar6,ar7);
      uVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02d8f4)(uVar4,100,ar6,ar7);
      if (uVar3 == 1) {
        uVar3 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02d8f8)
                          (*(undefined4 *)(ar4 + 0x10),10,ar6,ar7);
        *(uint *)(ar4 + 8) = uVar3 * 6;
      }
    }
  }
  return uVar3;
}



/* FUN_8c02d8fc @ 8c02d8fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c02d8fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02d92c)(*(undefined4 *)(ar4 + 0xc),2,ar6,ar7);
  return (uint)(iVar1 < *(int *)(ar4 + 4));
}



/* FUN_8c02d930 @ 8c02d930 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c02d930(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  
  bVar1 = *(int *)(ar4 + 0x14) != 0;
  if (bVar1) {
    *(undefined4 *)(ar4 + 4) = 1;
    *(undefined4 *)(ar4 + 8) = 1;
  }
  return (uint)bVar1;
}



/* FUN_8c02d944 @ 8c02d944 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02d944(undefined1 *ar4,int ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  
  if ((0 < ar5) && (ain0 = 0, *(int *)(ar4 + 0x14) != 0)) {
    iVar1 = *(int *)(ar4 + 0xc) - *(int *)(ar4 + 4);
    if ((ar5 < 5) && (-1 < ar5)) {
                    /* WARNING: Switch is manually overridden */
      switch(ar5) {
      case 1:
        iVar1 = libgcc_divide_helper_0101e4(iVar1,2,ar6,ar7);
        iVar1 = iVar1 + -1;
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        break;
      case 2:
        iVar1 = libgcc_divide_helper_0101e4(iVar1,0x10,ar6,ar7);
        break;
      case 3:
        iVar1 = libgcc_divide_helper_0101e4(iVar1,0x10,ar6,ar7);
        break;
      case 4:
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 == 0) {
      *ar4 = 1;
    }
    ain0 = *(int *)(ar4 + 0xc) - iVar1;
    *(int *)(ar4 + 4) = ain0;
  }
  return ain0;
}



/* FUN_8c02d9f4 @ 8c02d9f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c02d9f4(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[4] = 0;
  return ar4;
}



/* noop_02da0c @ 8c02da0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02da0c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c02da10 @ 8c02da10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02da10(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (((ar5 != 4) && (ar5 != 7)) && (ar5 != 0x13)) {
    *ar4 = '\0';
    return 0;
  }
  if (((ar4[3] == '\0') && (ar4[1] == '\0')) && ((ar4[4] == '\0' && (*ar4 == '\x01')))) {
    return 1;
  }
  return 0;
}



/* FUN_8c02da5c @ 8c02da5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02da5c(int ar4,undefined4 ar5,undefined4 ar6,int ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c02dafc)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined2 *)(ar4 + 0x14) = 0;
  *(undefined2 *)(ar4 + 0x16) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x3c) = 0;
  *(undefined1 *)(ar4 + 0x1c) = 1;
  *(undefined1 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x44) = 1;
  *(short *)(ar4 + 0x20) = (short)ar6;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(undefined2 *)(ar4 + iVar1 * 2 + 0x22) = *(undefined2 *)(iVar1 * 2 + ar7);
  }
  *(undefined4 *)(ar4 + 0x34) = s0;
  *(undefined4 *)(ar4 + 0x30) = s4;
  *(undefined4 *)(ar4 + 0x38) = ar5;
  *(undefined4 *)(ar4 + 0x38) = DAT_8c02db00;
  *(undefined1 *)(ar4 + 0x4c) = 0;
  return ar4;
}



/* FUN_8c02db04 @ 8c02db04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c02db04(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  bool bVar2;
  
  if (*(short *)(ar4 + 0x20) <= *(short *)(ar4 + 0x16)) {
    if ((int)*(short *)(ar4 + 0x14) != *(int *)(ar4 + 0x30)) {
      *(undefined2 *)(ar4 + 0x1e) = 1;
      return 1;
    }
    uVar1 = (*(code *)PTR_FUN_8c02db68)(ar4,ar5,ar6,ar7);
    if ((char)uVar1 == '\x01') {
      *(undefined2 *)(ar4 + 0x1e) = 1;
      return 1;
    }
  }
  bVar2 = *(int *)(ar4 + 0x3c) == 1;
  if (bVar2) {
    *(undefined2 *)(ar4 + 0x1e) = 1;
  }
  return (uint)bVar2;
}



/* FUN_8c02db6c @ 8c02db6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02db6c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ar5_00;
  int iVar4;
  undefined4 in_stack_ffffffcc;
  
  iVar3 = ar4;
  ar5_00 = ar5;
  noop_02da0c(ar4,ar5,ar6,ar7,CONCAT31((uint3)((uint)in_stack_ffffffcc >> 8) & 0xffff00,1));
  *(undefined2 *)(ar4 + 0x1e) = 0;
  if (*(char *)(ar4 + 0x4c) == '\x01') {
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + 1;
    iVar1 = *(int *)(&DAT_8c1304b0 + ar5 * 0x140);
    iVar4 = *(int *)(ar4 + 0x10) - iVar1;
    if (2 < iVar4) {
      *(undefined1 *)(ar4 + 0x1c) = 0;
    }
    if (*(int *)(ar4 + 0x10) == iVar1) {
      uVar2 = rand(iVar3,ar5_00,ar6,ar7);
      iVar3 = libgcc_divide_helper_01031c(uVar2,100,ar6,ar7);
      if (iVar3 < 0x32) {
        *(undefined1 *)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar4 == 1) {
      uVar2 = rand(iVar3,ar5_00,ar6,ar7);
      iVar3 = libgcc_divide_helper_01031c(uVar2,100,ar6,ar7);
      if (iVar3 < 0x4b) {
        *(undefined1 *)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar4 == 2) {
      *(undefined1 *)(ar4 + 0x1c) = 0;
    }
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + 1;
    FUN_8c02dc8c(ar4,ar5,ar6,ar7);
  }
  *(undefined1 *)(ar4 + 0x4c) = 0;
  return 0x4c;
}



/* FUN_8c02dc8c @ 8c02dc8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02dc8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\x01';
  if ((*(int *)(ar4 + 0x48) != -1) && (*(int *)(ar4 + 0x48) != 4)) {
    return *(int *)(ar4 + 0x48);
  }
  iVar1 = (int)*(short *)(ar4 + 0x14);
  if ((iVar1 < 8) && (1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 2:
      if ((*(short *)(ar4 + 0x16) == 2) && (*(char *)(ar4 + 0x40) < '\x01')) {
        cVar2 = '\0';
      }
      break;
    case 3:
      if ((*(short *)(ar4 + 0x16) == 0) && (*(char *)(ar4 + 0x40) < '\x02')) {
        cVar2 = '\0';
      }
      break;
    case 5:
      goto switchD_8c02dcc2_caseD_5;
    case 6:
      cVar2 = '\x01';
      if ((*(short *)(ar4 + 0x16) < 2) && (*(char *)(ar4 + 0x40) < '\x01')) {
        cVar2 = '\0';
      }
      if ((*(short *)(ar4 + 0x16) == 2) && (*(char *)(ar4 + 0x40) < '\x03')) {
        cVar2 = '\0';
      }
      break;
    case 7:
      if ((*(short *)(ar4 + 0x16) == 0) && (*(char *)(ar4 + 0x40) < '\x04')) {
        cVar2 = '\0';
      }
    }
  }
  else {
switchD_8c02dcc2_caseD_5:
    *(undefined4 *)(ar4 + 0x44) = 1;
  }
  iVar1 = *(int *)(ar4 + 0x44);
  if (((iVar1 == 1) && (iVar1 = (int)cVar2, iVar1 == 1)) &&
     (iVar1 = *(int *)(ar4 + 0x18), *(short *)(ar4 + *(short *)(ar4 + 0x16) * 2 + 0x22) <= iVar1)) {
    *(undefined2 *)(ar4 + 0x1e) = 1;
    if (*(short *)(ar4 + *(short *)(ar4 + 0x16) * 2 + 0x22) != 0) {
      *(short *)(ar4 + 0x16) = *(short *)(ar4 + 0x16) + 1;
    }
    *(undefined4 *)(ar4 + 0x18) = 0;
    iVar1 = (int)*(short *)(ar4 + 0x20);
    if (iVar1 <= *(short *)(ar4 + 0x16)) {
      if ((int)*(short *)(ar4 + 0x14) == *(int *)(ar4 + 0x30)) {
        *(undefined2 *)(ar4 + 0x1e) = 0;
        iVar1 = *(short *)(ar4 + 0x20) + -1;
        *(short *)(ar4 + 0x16) = (short)iVar1;
      }
      else {
        iVar1 = (int)*(short *)(ar4 + 0x20);
        *(short *)(ar4 + 0x16) = *(short *)(ar4 + 0x20);
      }
    }
  }
  return iVar1;
}



/* FUN_8c02de00 @ 8c02de00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02de00(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 1;
  if (0 < ar5) {
    *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + 1;
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + ar5;
    if (2 < *(int *)(ar4 + 0x10) - *(int *)(PTR_DAT_8c02def8 + ar6 * 0x140 + 8)) {
      *(undefined1 *)(ar4 + 0x1c) = 0;
    }
    iVar2 = *(int *)(ar4 + 0x10) - *(int *)(PTR_DAT_8c02def8 + ar6 * 0x140 + 8);
    iVar3 = ar6;
    if (*(int *)(ar4 + 0x10) == *(int *)(PTR_DAT_8c02def8 + ar6 * 0x140 + 8)) {
      uVar1 = (*(code *)PTR_rand_8c02defc)(ar4,ar5,ar6,ar7);
      iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02df00)(uVar1,100,iVar3,ar7);
      if (iVar2 < 0x32) {
        *(undefined1 *)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar2 == 1) {
      uVar1 = (*(code *)PTR_rand_8c02defc)(ar4,ar5,ar6,ar7);
      iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02df00)(uVar1,100,iVar3,ar7);
      if (iVar2 < 0x4b) {
        *(undefined1 *)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(ar4 + 0x1c) = 0;
    }
    *(undefined4 *)(ar4 + 0xc) = 0;
    uVar1 = (*(code *)PTR_FUN_8c02df04)(ar4,ar6,iVar3,ar7);
  }
  return uVar1;
}



/* FUN_8c02df24 @ 8c02df24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02df24(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c02df98)(ar4,ar5,ar6,ar7);
  if (*ar4 == '\x01') {
    if (ar4[10] == '\x01') {
      if (ar4[0xb] == '\x05') {
        (*(code *)PTR_FUN_8c02df9c)(ar4,1,ar6,ar7);
      }
      else {
        *(int *)(ar4 + 4) = *(int *)(ar4 + 4) + 1;
      }
    }
    if ((ar4[0xb] == '\x05') && (2 < *(int *)(ar4 + 4))) {
      *ar4 = '\0';
      ar4[4] = '\0';
      ar4[5] = '\0';
      ar4[6] = '\0';
      ar4[7] = '\0';
    }
  }
  else {
    ar4[4] = '\0';
    ar4[5] = '\0';
    ar4[6] = '\0';
    ar4[7] = '\0';
  }
  ar4[10] = '\0';
  return 0;
}



/* FUN_8c02dfa0 @ 8c02dfa0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02e102) */
/* WARNING: Removing unreachable block (ram,0x8c02e136) */
/* WARNING: Removing unreachable block (ram,0x8c02e28a) */
/* WARNING: Removing unreachable block (ram,0x8c02e256) */
/* WARNING: Removing unreachable block (ram,0x8c02e028) */
/* WARNING: Removing unreachable block (ram,0x8c02e31e) */
/* WARNING: Unknown calling convention */

int FUN_8c02dfa0(char *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  int *ar4_00;
  int *piVar4;
  char cVar5;
  float fVar6;
  ulonglong in_dr0;
  float fVar7;
  char cVar8;
  char cVar9;
  ulonglong uStack_54;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar3 = (int)ar4[0xb];
  if ((iVar3 < 6) && (-1 < iVar3)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar3) {
    case 0:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)) != -1) {
          (**(code **)(*ar5 + 0x178))(ar5,piVar4,ar6,ar7);
          uVar2 = (undefined4)(in_dr0 >> 0x20);
          uStack_28 = uVar2;
          if (cVar9 != '\0') {
            uStack_28 = (undefined4)in_dr0;
            uStack_24 = uVar2;
          }
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44(uStack_28,(float)*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)));
          }
          else {
            in_dr0 = CONCAT44(uStack_24,uStack_28);
          }
          if (cVar8 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      (**(code **)(*ar5 + 0x178))(ar5,piVar4,ar6,ar7);
      fVar6 = (float)(in_dr0 >> 0x20);
      if (cVar9 == '\0') {
        fVar7 = 35.0;
      }
      else {
        fVar6 = 35.0;
        fVar7 = 3.78351e-42;
      }
      if ((cVar8 != '\0' || fVar7 <= fVar6) &&
         (*(int *)(ar4 + 0x14) = *(int *)(ar4 + 0x14) + 1, 0xa8c < *(uint *)(ar4 + 0x14))) {
        uVar2 = rand(ar5,piVar4,ar6,ar7);
        iVar3 = libgcc_divide_helper_01031c(uVar2,1000,ar6,ar7);
        if (iVar3 == 4) {
          ar4[4] = '\x10';
          ar4[5] = '\'';
          ar4[6] = '\0';
          ar4[7] = '\0';
        }
      }
      break;
    case 1:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)) != -1) {
          (**(code **)(*ar5 + 0x178))(ar5,piVar4,ar6,ar7);
          uVar2 = (undefined4)(in_dr0 >> 0x20);
          uStack_34 = uVar2;
          if (cVar9 != '\0') {
            uStack_34 = (undefined4)in_dr0;
            uStack_30 = uVar2;
          }
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44(uStack_34,(float)*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)));
          }
          else {
            in_dr0 = CONCAT44(uStack_30,uStack_34);
          }
          if (cVar8 == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      ar4_00 = ar5;
      (**(code **)(*ar5 + 0x178))(ar5,piVar4,ar6,ar7);
      if (cVar9 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      if (((float)in_dr0 == 0.0) &&
         (*(int *)(ar4 + 0x14) = *(int *)(ar4 + 0x14) + 1, 0xa8c < *(uint *)(ar4 + 0x14))) {
        uVar2 = rand(ar4_00,piVar4,ar6,ar7);
        piVar4 = (int *)0x3e8;
        iVar3 = libgcc_divide_helper_01031c(uVar2,1000,ar6,ar7);
        if (iVar3 == 4) {
          ar4[4] = '\x10';
          ar4[5] = '\'';
          ar4[6] = '\0';
          ar4[7] = '\0';
        }
      }
      iVar3 = FUN_8c02bea4(ar4,piVar4,ar6,ar7);
      if (iVar3 < 1) {
        (**(code **)(*ar5 + 0x178))(ar5,piVar4,ar6,ar7);
      }
      break;
    case 2:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)) != -1) {
          (**(code **)(*ar5 + 0x17c))(ar5,piVar4,ar6,ar7);
          uVar2 = (undefined4)(in_dr0 >> 0x20);
          uStack_48 = uVar2;
          if (cVar9 != '\0') {
            uStack_48 = (undefined4)in_dr0;
            uStack_44 = uVar2;
          }
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44(uStack_48,(float)*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)));
          }
          else {
            in_dr0 = CONCAT44(uStack_44,uStack_48);
          }
          if (cVar8 == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      (**(code **)(*ar5 + 0x17c))(ar5,piVar4,ar6,ar7);
      if (cVar9 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      if (((float)in_dr0 == 0.0) &&
         (*(int *)(ar4 + 0x14) = *(int *)(ar4 + 0x14) + 1, 0xa8c < *(uint *)(ar4 + 0x14))) {
        uVar2 = rand(ar5,piVar4,ar6,ar7);
        iVar3 = libgcc_divide_helper_01031c(uVar2,1000,ar6,ar7);
        if (iVar3 == 4) {
          ar4[4] = '\x10';
          ar4[5] = '\'';
          ar4[6] = '\0';
          ar4[7] = '\0';
        }
      }
      break;
    case 3:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)) != -1) {
          (**(code **)(*ar5 + 0x188))(ar5,piVar4,ar6,ar7);
          uVar1 = in_dr0;
          if (cVar9 == '\0') {
            uStack_54 = CONCAT44(uStack_54._4_4_,(int)(in_dr0 >> 0x20));
            uVar1 = uStack_54;
          }
          uStack_54 = uVar1;
          in_dr0 = uStack_54;
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44((undefined4)uStack_54,(float)*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc))
                             );
          }
          if (cVar8 == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      break;
    case 4:
      if ((*ar4 == '\x01') && (ar4[8] == '\x05')) {
        ar4[4] = '\x10';
        ar4[5] = '\'';
        ar4[6] = '\0';
        ar4[7] = '\0';
      }
      break;
    case 5:
      if (*ar4 == '\x01') {
        ar4[8] = '\x02' - (char)*(undefined4 *)(ar4 + 4);
      }
    }
  }
  iVar3 = (int)*ar4;
  if (iVar3 == 0) {
    iVar3 = 0;
    ar4[4] = '\0';
    ar4[5] = '\0';
    ar4[6] = '\0';
    ar4[7] = '\0';
  }
  return iVar3;
}



/* FUN_8c02e38c @ 8c02e38c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02e38c(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 1;
  if ((0 < ar5) && (iVar1 = (int)*ar4, iVar1 == 1)) {
    if (ar5 == 1) {
      *(int *)(ar4 + 4) = *(int *)(ar4 + 4) + 1;
    }
    ar4[9] = '\0';
    iVar1 = 3;
    if (2 < *(int *)(ar4 + 4)) {
      *ar4 = '\0';
      iVar1 = 0;
      ar4[4] = '\0';
      ar4[5] = '\0';
      ar4[6] = '\0';
      ar4[7] = '\0';
    }
  }
  return iVar1;
}



/* FUN_8c02e3cc @ 8c02e3cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02e3cc(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)*ar4;
  if ((iVar1 == 1) && (iVar1 = (int)ar4[0xb], iVar1 == 5)) {
    iVar1 = (*(code *)PTR_FUN_8c02e3fc)(ar4,ar5,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c02e400 @ 8c02e400 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02e400(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = 0; (iVar2 < 5 && (*(int *)(iVar2 * 4 + *(int *)(ar4 + 0xc)) != -1));
      iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* FUN_8c02e438 @ 8c02e438 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02e438(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(char *)(ar4 + 9) < '\x01') {
    *(char *)(ar4 + 9) = *(char *)(ar4 + 9) + '\x01';
    iVar1 = *(int *)(ar4 + 4) + 1;
    *(int *)(ar4 + 4) = iVar1;
  }
  return iVar1;
}



/* FUN_8c02e460 @ 8c02e460 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c02e460(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  
  *ar4 = 0;
  ar4[1] = 1;
  ar6_00 = ar6;
  (*(code *)PTR_FUN_8c02e4c4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c02e4c8)(ar4,ar6,ar6_00,ar7);
  ar4[4] = 0;
  ar4[10] = 0;
  ar4[5] = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  ar4[6] = 0;
  *(undefined1 *)(ar4 + 0xc) = 0;
  ar4[0xd] = 0;
  ar4[0xe] = 0;
  ar4[0xb] = 5;
  return ar4;
}



/* FUN_8c02e4cc @ 8c02e4cc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02e6f2) */
/* WARNING: Removing unreachable block (ram,0x8c02e6d2) */
/* WARNING: Removing unreachable block (ram,0x8c02e644) */
/* WARNING: Removing unreachable block (ram,0x8c02e624) */
/* WARNING: Removing unreachable block (ram,0x8c02e770) */
/* WARNING: Removing unreachable block (ram,0x8c02e760) */
/* WARNING: Removing unreachable block (ram,0x8c02e764) */
/* WARNING: Removing unreachable block (ram,0x8c02e774) */
/* WARNING: Removing unreachable block (ram,0x8c02e628) */
/* WARNING: Removing unreachable block (ram,0x8c02e648) */
/* WARNING: Removing unreachable block (ram,0x8c02e6d6) */
/* WARNING: Removing unreachable block (ram,0x8c02e6f6) */
/* WARNING: Unknown calling convention */

uint FUN_8c02e4cc(uint *ar4,int *ar5,uint ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int *a5;
  char cVar6;
  char cVar7;
  byte bStack_48;
  undefined1 auStack_40 [36];
  
  puVar1 = auStack_40;
  puVar3 = &DAT_8c13252c;
  iVar5 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar1[1] = *puVar4;
    puVar1 = puVar1 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  ar4[0xd] = 0;
  if (ar6 < 0x4b0) {
    ar4[5] = 0;
  }
  uVar2 = ar4[7];
  if (((int)uVar2 < 8) && (-1 < (int)uVar2)) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar2) {
    default:
      break;
    case 2:
    case 3:
      break;
    case 4:
      break;
    case 5:
    }
  }
  if (ar4[2] * ar4[3] == 0) {
    uVar2 = 0;
  }
  else {
    cVar6 = (char)ar7;
    if (*ar4 == 0) {
      if (ar4[5] != ar4[0xe]) {
        ar4[0xe] = ar4[5];
        ar4[6] = ar4[6] + 1;
        if ((ar4[5] == 0) || (cVar6 != -1)) {
          ar4[6] = 0;
        }
      }
      if (cVar6 != -1) {
        ar4[6] = 0;
        ar4[9] = 0;
      }
      ar4[0xb] = 5;
      a5 = ar5;
      if ((ar4[9] == 1) && (cVar6 == -1)) {
        ar4[8] = ar4[8] + 1;
        (**(code **)(*ar5 + 0x198))(ar5,ar5,ar6,ar7);
        *(byte *)(ar4 + 0xc) = (byte)(((uint)bStack_48 << 0x1e) >> 0x1f);
        a5 = (int *)0xffffffe1;
        *(char *)(ar4 + 0xc) = (char)ar4[0xc] - (char)((int)((uint)bStack_48 << 0x1f) >> 0x1f);
        if ((0xb4 < (int)ar4[8]) || ((char)ar4[0xc] < '\x02')) {
          ar4[8] = 0;
          *ar4 = 1;
          ar4[1] = 0x5a;
          if ((char)ar4[0xc] < '\x02') {
            ar4[0xd] = 1;
          }
          ar4[9] = 0;
          ar4[4] = ar4[4] + 1;
        }
      }
      uVar2 = ar4[6];
      if (299 < uVar2) {
        if (ar4[9] == 1) {
          uVar2 = 1;
        }
        else {
          uVar2 = (uint)cVar6;
          if (uVar2 == 0xffffffff) {
            (**(code **)(*ar5 + 0x198))(ar5,a5,ar6,ar7);
            *(byte *)(ar4 + 0xc) = (byte)(((uint)bStack_48 << 0x1e) >> 0x1f);
            *(char *)(ar4 + 0xc) = (char)ar4[0xc] - (char)((int)((uint)bStack_48 << 0x1f) >> 0x1f);
            if ((char)ar4[0xc] < '\x02') {
              ar4[9] = 0;
              *ar4 = 1;
              ar4[1] = 0x5a;
            }
            else {
              ar4[9] = 1;
            }
            uVar2 = 0;
            ar4[8] = 0;
          }
        }
      }
    }
    else {
      ar4[6] = 0;
      ar4[8] = ar4[8] + 1;
      (**(code **)(*ar5 + 0x198))(ar5,ar5,ar6,ar7);
      cVar7 = -(char)((int)((uint)bStack_48 << 0x1f) >> 0x1f) -
              (char)((int)((uint)bStack_48 << 0x1e) >> 0x1f);
      if (ar4[0xb] == 5) {
        if ((char)ar4[0xc] < cVar7) {
          ar4[0xb] = 3;
          ar4[8] = 0;
        }
        else {
          *(char *)(ar4 + 0xc) = cVar7;
        }
        if ((((cVar6 == '\0') || (cVar6 == '\x01')) || (cVar6 == '\x02')) || (cVar6 == '\x03')) {
          ar4[0xb] = 0;
        }
      }
      uVar2 = ar4[0xb];
      if (uVar2 == 0) {
        *ar4 = 0;
      }
      else if (uVar2 == 1) {
        *ar4 = 0;
      }
      else if (uVar2 == 2) {
        *ar4 = 0;
      }
      else if (uVar2 == 3) {
        if (5 < (int)ar4[8]) {
          *ar4 = 0;
        }
      }
      else if (600 < (int)ar4[8]) {
        *ar4 = 0;
        ar4[0xb] = 5;
      }
      uVar2 = *ar4;
      if (uVar2 == 0) {
        *(undefined1 *)(ar4 + 0xc) = 0xff;
        ar4[1] = 100;
        ar4[9] = 0;
        ar4[0xd] = 0;
        uVar2 = 0;
        ar4[8] = 0;
      }
    }
  }
  return uVar2;
}



/* FUN_8c02e838 @ 8c02e838 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02e838(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02e8b8)(PTR_DAT_8c02e8b4,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c02e8c0;
  uVar2 = DAT_8c02e8bc;
  (*(code *)PTR_global_list_push_8c02e8c4)(uVar1,PTR_Vec3_dtor_8c02e8c0,DAT_8c02e8bc,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02e8b8)(PTR_DAT_8c02e8c8,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c02e8c0;
  uVar2 = DAT_8c02e8cc;
  (*(code *)PTR_global_list_push_8c02e8c4)(uVar1,PTR_Vec3_dtor_8c02e8c0,DAT_8c02e8cc,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02e8b8)(PTR_DAT_8c02e8d0,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c02e8c0;
  uVar2 = DAT_8c02e8d4;
  (*(code *)PTR_global_list_push_8c02e8c4)(uVar1,PTR_Vec3_dtor_8c02e8c0,DAT_8c02e8d4,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c02e8b8)(PTR_DAT_8c02e8d8,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c02e8c4)(uVar2,PTR_Vec3_dtor_8c02e8c0,DAT_8c02e8dc,ar7);
  return uVar2;
}



/* FUN_8c02e8e0 @ 8c02e8e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02e8e0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (ar5 == 0) {
    (*(code *)PTR_FUN_8c02e994)(ar4,0,ar6,ar7);
    (*(code *)PTR_FUN_8c02e998)(ar4,ar5,ar6,ar7);
  }
  if (*(int *)(ar4 + 0xc) != 0) {
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
  }
  if (*(int *)(ar4 + 0x14) != 0) {
    *(int *)(ar4 + 0x14) = *(int *)(ar4 + 0x14) + -1;
  }
  if (*(int *)(ar4 + 0x10) != 0) {
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + -1;
  }
  if (*(int *)(ar4 + 0x10) == 0) {
    (*(code *)PTR_FUN_8c02e994)(ar4,ar5,ar6,ar7);
  }
  if (*(int *)(ar4 + 0x18) != 0) {
    *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + -1;
  }
  if (*(int *)(ar4 + 0x20) != 0) {
    *(int *)(ar4 + 0x20) = *(int *)(ar4 + 0x20) + -1;
  }
  if (*(int *)(ar4 + 0x1c) != 0) {
    *(int *)(ar4 + 0x1c) = *(int *)(ar4 + 0x1c) + -1;
  }
  iVar1 = *(int *)(ar4 + 0x1c);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c02e998)(ar4,ar5,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c02e99c @ 8c02e99c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c02e99c(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  if (*ar4 < 3) {
    if (ar4[4] == 0) {
      ar4[3] = 0x1e;
    }
    if (ar4[5] == 0) {
      ar4[4] = DAT_8c02e9f8;
      uVar1 = DAT_8c02e9fc;
      ar4[5] = DAT_8c02e9fc;
    }
    else {
      ar4[4] = ar4[4] + DAT_8c02e9f8;
      uVar1 = DAT_8c02e9fc;
      ar4[5] = ar4[5] + DAT_8c02e9fc;
    }
  }
  else {
    uVar1 = ar4[6];
    if ((uVar1 == 0) && (uVar1 = 0, ar4[8] != 0)) {
      uVar1 = 1;
      ar4[2] = 1;
    }
  }
  return uVar1;
}



/* FUN_8c02ea00 @ 8c02ea00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ea00(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*ar4 < 3) {
    if (ar4[1] == 1) {
      (*(code *)PTR_FUN_8c02ea90)(ar4,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c02ea94)(ar4,ar5,ar6,ar7);
      *ar4 = *ar4 + 1;
      *DAT_8c02ea8c = 0;
      if (2 < *ar4) {
        *DAT_8c02ea8c = 1;
      }
    }
  }
  else if (ar4[2] == 1) {
    *DAT_8c02ea8c = 2;
    (*(code *)PTR_FUN_8c02ea90)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c02ea94)(ar4,ar5,ar6,ar7);
    if (4 < *ar4) {
      return 1;
    }
    *ar4 = *ar4 + 1;
  }
  return 0;
}



/* FUN_8c02ea98 @ 8c02ea98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ea98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  return 0;
}



/* FUN_8c02eaac @ 8c02eaac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02eaac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x1c) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  return 0;
}



/* FUN_8c02eac0 @ 8c02eac0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c02eac0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  (*(code *)PTR_FUN_8c02eae4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c02eae8)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* free_if_nonnull_wrap_02eaec @ 8c02eaec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_02eaec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c02eb1c @ 8c02eb1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02eb1c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4;
}



/* get_field_4_02eb24 @ 8c02eb24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_4_02eb24(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}



/* FUN_8c02eb2c @ 8c02eb2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02eb2c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((ar5 < 8) && (0 < ar5)) {
                    /* WARNING: Switch is manually overridden */
    switch(ar5) {
    case 1:
      iVar1 = 1;
      break;
    case 2:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x10) + -0x46,6,ar6,ar7);
      break;
    case 3:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x14) + -0x50,4,ar6,ar7);
      break;
    case 4:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x18) + -0x50,4,ar6,ar7);
      break;
    case 5:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x24) + -0x3c,8,ar6,ar7);
      break;
    case 6:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x20) + -0x32,0xd,ar6,ar7);
      iVar1 = iVar1 + 1;
      break;
    case 7:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x1c) + -0x32,0xd,ar6,ar7);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* FUN_8c02ebfc @ 8c02ebfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02ebfc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int aiStack_38 [9];
  
  iVar3 = 0;
  iVar4 = 0;
  uVar2 = ar5;
  uVar1 = (*(code *)PTR_FUN_8c02edb8)(ar5,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 8) = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02edbc)(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0xc) = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02edc0)(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x10) = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02edc4)(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x18) = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02edc8)(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x14) = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02edcc)(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x24) = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02edd0)(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x20) = uVar1;
  uVar2 = (*(code *)PTR_FUN_8c02edd4)(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x1c) = uVar2;
  if (100 < *(int *)(ar4 + 0x14)) {
    *(undefined4 *)(ar4 + 0x14) = 100;
  }
  if (100 < *(int *)(ar4 + 0x18)) {
    *(undefined4 *)(ar4 + 0x18) = 100;
  }
  iVar5 = DAT_8c02edd8;
  if ((0 < *(int *)(ar4 + 0xc)) && (*(int *)(ar4 + 8) != 0)) {
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
      aiStack_38[iVar5] = 0;
    }
    aiStack_38[2] = (*(code *)PTR_FUN_8c02eddc)(ar4,2,*(undefined4 *)(ar4 + 0x10),ar7);
    aiStack_38[3] = (*(code *)PTR_FUN_8c02eddc)(ar4,3,*(undefined4 *)(ar4 + 0x14),ar7);
    aiStack_38[4] = (*(code *)PTR_FUN_8c02eddc)(ar4,4,*(undefined4 *)(ar4 + 0x18),ar7);
    aiStack_38[5] = (*(code *)PTR_FUN_8c02eddc)(ar4,5,*(undefined4 *)(ar4 + 0x24),ar7);
    aiStack_38[6] = (*(code *)PTR_FUN_8c02eddc)(ar4,6,*(undefined4 *)(ar4 + 0x20),ar7);
    aiStack_38[7] = (*(code *)PTR_FUN_8c02eddc)(ar4,7,*(undefined4 *)(ar4 + 0x1c),ar7);
    for (iVar6 = 0; iVar5 = iVar3, iVar6 < 8; iVar6 = iVar6 + 1) {
      if (iVar4 < aiStack_38[iVar6]) {
        iVar4 = aiStack_38[iVar6];
        iVar3 = iVar6 * 100 + aiStack_38[iVar6];
      }
    }
  }
  return iVar5;
}



/* FUN_8c02ede0 @ 8c02ede0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02ede0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c02ee1c)
                    (ar4 + DAT_8c02ee18,*(undefined4 *)(DAT_8c02ee14 + ar4),ar6,ar7);
  return (char)uVar1 * 0x62;
}



/* FUN_8c02ee20 @ 8c02ee20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ee20(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c02ee44)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 4) = uVar1;
  return uVar1;
}



/* FUN_8c02ee48 @ 8c02ee48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02ee48(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int ar5_00;
  
  iVar4 = ar6;
  iVar1 = (*(code *)PTR_FUN_8c02ef4c)(ar4,ar5,ar6,ar7);
  uVar2 = (*(code *)PTR_rand_8c02ef50)(ar4,ar5,iVar4,ar7);
  ar5_00 = 0x65 - *(int *)(PTR_DAT_8c02ef54 + iVar1 * 0x18 + 0xc);
  iVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02ef58)(uVar2,ar5_00,iVar4,ar7);
  if (ar6 - *(int *)(PTR_DAT_8c02ef54 + iVar1 * 0x18 + 0xc) < iVar3) {
    iVar4 = 0;
  }
  else {
    uVar2 = (*(code *)PTR_rand_8c02ef50)(uVar2,ar5_00,iVar4,ar7);
    iVar3 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02ef5c)
                      ((ar6 - *(int *)(PTR_DAT_8c02ef54 + iVar1 * 0x18 + 0xc)) *
                       *(int *)(PTR_DAT_8c02ef54 + iVar1 * 0x18 + 8),
                       *(undefined4 *)(PTR_DAT_8c02ef54 + iVar1 * 0x18 + 4),iVar4,ar7);
    iVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02ef58)
                      (uVar2,*(undefined4 *)(PTR_DAT_8c02ef54 + iVar1 * 0x18 + 0x14),iVar4,ar7);
    iVar4 = *(int *)(PTR_DAT_8c02ef54 + iVar1 * 0x18 + 0x10) + iVar3 + iVar4;
  }
  return iVar4;
}



/* FUN_8c02ef60 @ 8c02ef60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ef60(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar5 < 8) && (1 < ar5)) {
                    /* WARNING: Switch is manually overridden */
    switch(ar5) {
    case 2:
      return 0;
    case 3:
      return 1;
    case 4:
      return 2;
    case 5:
      return 3;
    case 6:
      return 4;
    case 7:
      return 5;
    }
  }
  return 0xffffffff;
}



/* FUN_8c02efbc @ 8c02efbc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02efbc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02f03c)(PTR_DAT_8c02f038,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c02f044;
  uVar2 = DAT_8c02f040;
  (*(code *)PTR_global_list_push_8c02f048)(uVar1,PTR_Vec3_dtor_8c02f044,DAT_8c02f040,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02f03c)(PTR_DAT_8c02f04c,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c02f044;
  uVar2 = DAT_8c02f050;
  (*(code *)PTR_global_list_push_8c02f048)(uVar1,PTR_Vec3_dtor_8c02f044,DAT_8c02f050,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02f03c)(PTR_DAT_8c02f054,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c02f044;
  uVar2 = DAT_8c02f058;
  (*(code *)PTR_global_list_push_8c02f048)(uVar1,PTR_Vec3_dtor_8c02f044,DAT_8c02f058,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c02f03c)(PTR_DAT_8c02f05c,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c02f048)(uVar2,PTR_Vec3_dtor_8c02f044,DAT_8c02f060,ar7);
  return uVar2;
}



/* FUN_8c02f064 @ 8c02f064 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c02f064(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char cVar1;
  
  cVar1 = '\0';
  *ar4 = &DAT_8c129c70;
  Vec3_ctor_zero(ar4 + 10,ar5,ar6,ar7);
  FUN_8c02eb1c(ar4 + 0x11,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x1c,ar5,ar6,ar7);
  ar4[1] = 0;
  ar4[0x1b] = 0;
  ar4[3] = 0;
  ar4[0xf] = 2;
  ar4[4] = 0;
  ar4[9] = 0;
  ar4[8] = 0;
  ar4[7] = 0;
  ar4[6] = 0;
  ar4[5] = 0;
  *(undefined1 *)((int)ar4 + 0x91) = 0;
  ar4[0x10] = 0;
  ar4[0x25] = 0;
  *(undefined1 *)(ar4 + 0x26) = 0;
  *(undefined1 *)((int)ar4 + 0x99) = 0;
  if (cVar1 == '\0') {
    ar4[10] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 10) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xb] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xb) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xc] = 0;
    ar4[0x1c] = 0xc7c35000;
    ar4[0x1d] = 0xc7c35000;
    ar4[0x1e] = 0xc7c35000;
  }
  else {
    *(ulonglong *)(ar4 + 0xc) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x1c) = 0x88c7c35000;
    *(undefined8 *)(ar4 + 0x1d) = 0x88c7c35000;
    *(undefined8 *)(ar4 + 0x1e) = 0x88c7c35000;
  }
  ar4[0x22] = 0;
  ar4[0x23] = 0;
  *(undefined1 *)((int)ar4 + 0x82) = 0;
  *(undefined1 *)(ar4 + 0x21) = 0;
  *(undefined1 *)((int)ar4 + 0x85) = 0;
  *(undefined1 *)((int)ar4 + 0x87) = 0;
  *(undefined1 *)((int)ar4 + 0x86) = 0;
  *(undefined1 *)(ar4 + 0x24) = 0;
  *(undefined1 *)((int)ar4 + 0x83) = 4;
  *(undefined1 *)((int)ar4 + 0x9a) = 2;
  *(undefined1 *)((int)ar4 + 0x9b) = 0;
  return ar4;
}



/* Class_129c70_m0_02f1b8 @ 8c02f1b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_129c70_m0_02f1b8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129c70;
    Vec3_dtor(ar4 + 0x1c,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 10,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c02f20c @ 8c02f20c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02f20c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar5 + 4);
  (*(code *)PTR_FUN_8c02f27c)(ar4 + 0x44,uVar1,ar6,ar7);
  uVar1 = (*(code *)PTR_get_field_4_02eb24_8c02f280)(ar4 + 0x44,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c02f284)(ar4,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c02f288)(ar4,uVar1,ar6,ar7);
  *(undefined1 *)(DAT_8c02f28c + ar4) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x24) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x1c) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  return 0;
}



/* noop_02f290 @ 8c02f290 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02f290(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_02f294 @ 8c02f294 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02f294(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c02f298 @ 8c02f298 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02f298(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 5;
  if (*(int *)(ar4 + 0x10) < 5) {
    *(undefined4 *)(ar4 + *(int *)(ar4 + 0x10) * 4 + 0x14) = ar5;
    iVar1 = *(int *)(ar4 + 0x10) + 1;
    *(int *)(ar4 + 0x10) = iVar1;
  }
  return iVar1;
}



/* FUN_8c02f2c0 @ 8c02f2c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02f2c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x3c) = ar5;
  return in_r0;
}



/* FUN_8c02f2c8 @ 8c02f2c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02f2c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined1 *)(DAT_8c02f39c + ar4) = 0;
  uVar1 = (*(code *)PTR_FUN_8c02f3a0)(ar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 4) == 8) {
    *(undefined4 *)(ar4 + 4) = 8;
  }
  if ((*(int *)(ar4 + 0x38) == 2) || (*(int *)(ar4 + 0x38) == 0)) {
    *(undefined1 *)(DAT_8c02f39c + ar4) = 1;
    uVar2 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02f3a4)(uVar1,100,ar6,ar7);
    *(undefined4 *)(ar4 + 4) = uVar2;
    uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02f3a8)(uVar1,100,ar6,ar7);
    *(undefined4 *)(ar4 + 8) = uVar1;
    *(undefined4 *)(ar4 + 0x38) = 2;
  }
  else if (*(int *)(ar4 + 0x38) == 3) {
    iVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02f3a8)(uVar1,100,ar6,ar7);
    if (*(int *)(ar4 + 8) < iVar3) {
      uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02f3a8)(uVar1,100,ar6,ar7);
      *(undefined4 *)(ar4 + 8) = uVar2;
      iVar3 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02f3a4)(uVar1,100,ar6,ar7);
      if (*(int *)(ar4 + 4) != iVar3) {
        *(undefined1 *)(DAT_8c02f39c + ar4) = 1;
        uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02f3a4)(uVar1,100,ar6,ar7);
        *(undefined4 *)(ar4 + 4) = uVar1;
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
    }
  }
  if (*(int *)(ar4 + 4) == 8) {
    *(undefined4 *)(ar4 + 4) = 8;
  }
  return *(undefined4 *)(ar4 + 4);
}



/* FUN_8c02f3ac @ 8c02f3ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02f3ac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_8c02f400;
  for (iVar2 = 0; iVar2 < *(int *)(ar4 + 0x10); iVar2 = iVar2 + 1) {
    if ((*(int *)(ar4 + iVar2 * 4 + 0x14) < iVar1) && (*(int *)(ar4 + iVar2 * 4 + 0x14) != 0)) {
      iVar1 = *(int *)(ar4 + iVar2 * 4 + 0x14);
    }
  }
  if (iVar1 == DAT_8c02f400) {
    iVar1 = 0;
  }
  return iVar1;
}



/* FUN_8c02f404 @ 8c02f404 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02f404(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x38) = ar5;
  return in_r0;
}



/* ret_const_1_02f40c @ 8c02f40c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_02f40c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c02f414 @ 8c02f414 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02f414(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (((*(int *)(ar4 + 0x6c) != 0) &&
      (iVar1 = (*(code *)PTR_get_field_6c_02f46c_8c02f464)(*(undefined4 *)(ar4 + 0x6c),ar5,ar6,ar7),
      iVar1 != 0)) &&
     (iVar1 = (**(code **)(DAT_8c02f468 + *(int *)(*(int *)(ar4 + 0x6c) + 8)))
                        (*(int *)(ar4 + 0x6c),ar5,ar6,ar7), iVar1 == 1)) {
    return 1;
  }
  return 0;
}



/* get_field_6c_02f46c @ 8c02f46c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_6c_02f46c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x6c);
}



/* FUN_8c02f474 @ 8c02f474 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02f474) */
/* WARNING: Removing unreachable block (ram,0x8c02f5d4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02f474(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar4;
  undefined4 *a6;
  uint in_fr1;
  double dVar5;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  uint auStack_30 [5];
  double dVar6;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    in_fr15 = 1e+07;
    auStack_30[0] = 0;
  }
  else {
    auStack_30[3] = 0;
    auStack_30[0] = in_fr1;
  }
  dVar5 = (double)(ulonglong)in_fr1;
  auStack_30[2] = 0;
  auStack_30[1] = 0;
  if (*(int *)(ar4 + 0x6c) != 0) {
    FUN_8c02f670(*(undefined4 *)(ar4 + 0x6c),ar5_00,ar6_00,ar7_00,auStack_40);
    Vec3_length_sq(auStack_40,ar5_00,ar6_00,ar7_00);
    if (cVar9 == '\0') {
      in_fr15 = (float)((ulonglong)dVar5 >> 0x20);
    }
    Vec3_dtor(auStack_40,0xffffffff,ar6_00,ar7_00);
    uVar4 = *(undefined4 *)(ar4 + 0x6c);
  }
  for (a6 = (undefined4 *)0x0; iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,ar7,ar6_00,ar7_00),
      (int)a6 < iVar2; a6 = (undefined4 *)((int)a6 + 1)) {
    uVar3 = ar7;
    ar6_00 = a6;
    uVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
    iVar2 = get_field_6c_02f46c(uVar1,uVar3,ar6_00,ar7_00);
    if (iVar2 != 0) {
      FUN_8c02f670(*ar6,uVar3,ar6_00,ar7_00,auStack_50);
      uVar3 = ar7;
      ar6_00 = a6;
      uVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
      FUN_8c02f670(uVar1,uVar3,ar6_00,ar7_00,auStack_60);
      Vec3_sub(auStack_50,auStack_60,ar6_00,ar7_00,auStack_70);
      Vec3_assign(auStack_30,auStack_70,ar6_00,ar7_00);
      Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7_00);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_50,0xffffffff,ar6_00,ar7_00);
      Vec3_length_sq(auStack_30,uVar3,ar6_00,ar7_00);
      if (cVar8 == '\0') {
        bVar7 = (float)((ulonglong)dVar5 >> 0x20) < in_fr15;
      }
      else {
        bVar7 = dVar5 < (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar7) {
        Vec3_length_sq(auStack_30,uVar3,ar6_00,ar7_00);
        dVar6 = dVar5;
        if (cVar9 == '\0') {
          dVar6 = (double)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = (double)((ulonglong)dVar6 & 0xffffffff);
        if (SUB84(dVar6,0) != 0.0) {
          Vec3_length_sq(auStack_30,uVar3,ar6_00,ar7_00);
          if (cVar9 == '\0') {
            in_fr15 = (float)((ulonglong)dVar5 >> 0x20);
          }
          ar6_00 = a6;
          uVar4 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
        }
      }
    }
  }
  Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7_00);
  return uVar4;
}



/* FUN_8c02f670 @ 8c02f670 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02f670(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c02f690)(s0,ar4 + 0x30,ar6,ar7);
  return uVar1;
}



/* FUN_8c02f694 @ 8c02f694 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02f694) */
/* WARNING: Removing unreachable block (ram,0x8c02f7da) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02f694(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  int *ar5_00;
  undefined4 uVar2;
  undefined4 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  undefined4 *a6;
  double in_dr0;
  double dVar4;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar5;
  char cVar6;
  char cVar7;
  int in_stack_00000000;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_34,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    in_fr15 = 1e+07;
  }
  if (*(int *)(ar4 + 0x6c) != 0) {
    FUN_8c02f670(*(undefined4 *)(ar4 + 0x6c),ar5_00,ar6_00,ar7_00,auStack_44);
    Vec3_length_sq(auStack_44,ar5_00,ar6_00,ar7_00);
    if (cVar7 == '\0') {
      in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
    }
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
    uVar3 = *(undefined4 *)(ar4 + 0x6c);
  }
  for (a6 = (undefined4 *)0x0; iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,ar7,ar6_00,ar7_00),
      (int)a6 < iVar1; a6 = (undefined4 *)((int)a6 + 1)) {
    uVar2 = ar7;
    ar6_00 = a6;
    iVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
    iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,uVar2,ar6_00,ar7_00);
    if (in_stack_00000000 == iVar1) {
      FUN_8c02f670(*ar6,uVar2,ar6_00,ar7_00,auStack_54);
      uVar2 = ar7;
      ar6_00 = a6;
      ar4_00 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
      FUN_8c02f670(ar4_00,uVar2,ar6_00,ar7_00,auStack_64);
      Vec3_sub(auStack_54,auStack_64,ar6_00,ar7_00,auStack_74);
      Vec3_assign(auStack_34,auStack_74,ar6_00,ar7_00);
      Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7_00);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
      Vec3_length_sq(auStack_34,uVar2,ar6_00,ar7_00);
      if (cVar6 == '\0') {
        bVar5 = (float)((ulonglong)in_dr0 >> 0x20) < in_fr15;
      }
      else {
        bVar5 = in_dr0 < (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar5) {
        Vec3_length_sq(auStack_34,uVar2,ar6_00,ar7_00);
        dVar4 = in_dr0;
        if (cVar7 == '\0') {
          dVar4 = (double)((ulonglong)in_dr0 >> 0x20);
        }
        in_dr0 = (double)((ulonglong)dVar4 & 0xffffffff);
        if (SUB84(dVar4,0) != 0.0) {
          Vec3_length_sq(auStack_34,uVar2,ar6_00,ar7_00);
          if (cVar7 == '\0') {
            in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
          }
          ar6_00 = a6;
          uVar3 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
        }
      }
    }
  }
  Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7_00);
  return uVar3;
}



/* ret_const_1b_02f878 @ 8c02f878 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1b_02f878(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0x1b;
}



/* FUN_8c02f880 @ 8c02f880 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02f880) */
/* WARNING: Removing unreachable block (ram,0x8c02fbda) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02f880(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar4_00;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 a7;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint in_fr1;
  double dVar7;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar9;
  char cVar10;
  char cVar11;
  int in_stack_00000000;
  short in_stack_00000004;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  uint auStack_34 [5];
  double dVar8;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = 0;
  puVar3 = ar6;
  a7 = ar7;
  Vec3_ctor_zero(auStack_34,ar5,ar6,ar7);
  if (cVar11 == '\0') {
    in_fr15 = 1e+07;
  }
  iVar4 = 0;
  if (cVar11 == '\0') {
    auStack_34[0] = 0;
  }
  else {
    auStack_34[3] = 0;
    auStack_34[0] = in_fr1;
  }
  dVar7 = (double)(ulonglong)in_fr1;
  auStack_34[2] = 0;
  auStack_34[1] = 0;
  (**(code **)(*ar5 + 0x11c))(ar5,ar7,puVar3,a7);
  for (puVar6 = (undefined4 *)0x0; uVar2 = ar7,
      iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,ar7,puVar3,a7), (int)puVar6 < iVar1;
      puVar6 = (undefined4 *)((int)puVar6 + 1)) {
    uVar2 = ar7;
    puVar3 = puVar6;
    iVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
    iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,uVar2,puVar3,a7);
    if (in_stack_00000000 == iVar1) {
      uVar2 = ar7;
      puVar3 = puVar6;
      iVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
      iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xb4))(iVar1,uVar2,puVar3,a7);
      if (iVar1 == 1) {
        uVar2 = ar7;
        puVar3 = puVar6;
        iVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
        iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xb8))(iVar1,uVar2,puVar3,a7);
        if (iVar1 == 0) {
          iVar4 = iVar4 + 1;
        }
      }
    }
  }
  if (in_stack_00000004 < iVar4) {
    if (*(int *)(ar4 + 0x6c) != 0) {
      FUN_8c02f670(*(undefined4 *)(ar4 + 0x6c),uVar2,puVar3,a7,auStack_44);
      Vec3_length_sq(auStack_44,uVar2,puVar3,a7);
      if (cVar11 == '\0') {
        in_fr15 = (float)((ulonglong)dVar7 >> 0x20);
      }
      Vec3_dtor(auStack_44,0xffffffff,puVar3,a7);
      uVar5 = *(undefined4 *)(ar4 + 0x6c);
    }
    for (puVar6 = (undefined4 *)0x0; iVar4 = (**(code **)(*ar5 + 0x11c))(ar5,ar7,puVar3,a7),
        (int)puVar6 < iVar4; puVar6 = (undefined4 *)((int)puVar6 + 1)) {
      uVar2 = ar7;
      puVar3 = puVar6;
      iVar4 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
      (**(code **)(*(int *)(iVar4 + 8) + 0x114))(iVar4,uVar2,puVar3,a7);
      uVar2 = ar7;
      puVar3 = puVar6;
      iVar4 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
      iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0x114))(iVar4,uVar2,puVar3,a7);
      if (in_stack_00000000 == iVar4) {
        uVar2 = ar7;
        puVar3 = puVar6;
        iVar4 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
        iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0xb4))(iVar4,uVar2,puVar3,a7);
        if (iVar4 == 1) {
          uVar2 = ar7;
          puVar3 = puVar6;
          iVar4 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
          iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0xb8))(iVar4,uVar2,puVar3,a7);
          if (iVar4 == 0) {
            FUN_8c02f670(*ar6,uVar2,puVar3,a7,auStack_54);
            uVar2 = ar7;
            puVar3 = puVar6;
            ar4_00 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
            FUN_8c02f670(ar4_00,uVar2,puVar3,a7,auStack_64);
            Vec3_sub(auStack_54,auStack_64,puVar3,a7,auStack_74);
            Vec3_assign(auStack_34,auStack_74,puVar3,a7);
            Vec3_dtor(auStack_74,0xffffffff,puVar3,a7);
            Vec3_dtor(auStack_64,0xffffffff,puVar3,a7);
            uVar2 = 0xffffffff;
            Vec3_dtor(auStack_54,0xffffffff,puVar3,a7);
            Vec3_length_sq(auStack_34,uVar2,puVar3,a7);
            if (cVar10 == '\0') {
              bVar9 = (float)((ulonglong)dVar7 >> 0x20) < in_fr15;
            }
            else {
              bVar9 = dVar7 < (double)CONCAT44(in_fr14,in_fr15);
            }
            if (bVar9) {
              Vec3_length_sq(auStack_34,uVar2,puVar3,a7);
              dVar8 = dVar7;
              if (cVar11 == '\0') {
                dVar8 = (double)((ulonglong)dVar7 >> 0x20);
              }
              dVar7 = (double)((ulonglong)dVar8 & 0xffffffff);
              if (SUB84(dVar8,0) != 0.0) {
                Vec3_length_sq(auStack_34,uVar2,puVar3,a7);
                if (cVar11 == '\0') {
                  in_fr15 = (float)((ulonglong)dVar7 >> 0x20);
                }
                puVar3 = puVar6;
                uVar5 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
              }
            }
          }
        }
      }
    }
    Vec3_dtor(auStack_34,0xffffffff,puVar3,a7);
  }
  else {
    Vec3_dtor(auStack_34,0xffffffff,puVar3,a7);
    uVar5 = 0;
  }
  return uVar5;
}



/* FUN_8c02fc8c @ 8c02fc8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c02fc8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  
  bVar1 = *(int *)(ar4 + 0x6c) != 0;
  if (bVar1) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  return (uint)bVar1;
}



/* FUN_8c02fcc4 @ 8c02fcc4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c02fcc4(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  float *ar6_00;
  float fVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  float fStack_3c;
  float fStack_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar5_00 = ar5;
  uVar1 = FUN_8c1011b0(*(undefined4 *)(ar5[6] + 0x7cc),ar5,ar6,ar7);
  if ((ushort)uVar1 < 5) {
    FUN_8c02f670(*ar5,ar5_00,ar6,ar7,auStack_34);
    Vec3_ctor_copy(auStack_24,auStack_34,ar6,ar7);
    Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
    ar6_00 = &fStack_3c;
    FUN_8c256294(0,auStack_14,ar6_00,ar7);
    if (cVar5 == '\0') {
      fVar3 = 150.0;
      fVar2 = fStack_3c;
    }
    else {
      fVar2 = 150.0;
      fVar3 = 500.0;
    }
    if (cVar4 == '\0' && fVar3 < fVar2) {
      if (cVar5 == '\0') {
        fVar2 = 500.0;
      }
      else {
        fStack_3c = 500.0;
        fVar2 = 80.0;
      }
      if (cVar4 == '\0' && fStack_3c < fVar2) {
        if (cVar5 == '\0') {
          fVar3 = 80.0;
          fVar2 = fStack_38;
        }
        else {
          fVar2 = 80.0;
          fVar3 = 400.0;
        }
        if (cVar4 == '\0' && fVar3 < fVar2) {
          if (cVar5 == '\0') {
            fVar2 = 400.0;
          }
          else {
            fStack_38 = 400.0;
            fVar2 = 1.82169e-43;
          }
          if (cVar4 == '\0' && fStack_38 < fVar2) {
            Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
            return 1;
          }
        }
      }
    }
    Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  }
  return (uint)(*(char *)(ar4 + 0x82) == '\x01');
}



/* FUN_8c02fdd8 @ 8c02fdd8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02fe2c) */
/* WARNING: Unknown calling convention */

double * FUN_8c02fdd8(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  undefined1 *a5;
  float *a6;
  float *a7;
  float fVar2;
  double dVar3;
  float fVar4;
  undefined4 in_fr3;
  undefined4 uVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_10 [8];
  
  cVar9 = '\0';
  cVar8 = '\0';
  a7 = &fStack_18;
  a6 = &fStack_14;
  a5 = auStack_10;
  (**(code **)(*ar5 + 0x120))(ar5,a5,a6,a7);
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(fStack_18,in_fr3);
    dVar3 = (double)CONCAT44(0x3dcccccd,fStack_14);
  }
  else {
    dVar6 = (double)CONCAT44(fStack_14,fStack_18);
    dVar3 = 8.15358646777176e-312;
  }
  if (cVar8 == '\0') {
    fVar4 = (float)((ulonglong)dVar3 >> 0x20);
    fVar2 = SUB84(dVar3,0) * fVar4;
    dVar3 = (double)CONCAT44(fVar4,fVar2);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - fVar2,SUB84(dVar6,0));
  }
  else {
    dVar3 = dVar3 * dVar3;
    dVar6 = dVar6 - dVar3;
  }
  fVar2 = (float)((ulonglong)dVar6 >> 0x20);
  fStack_18 = fVar2;
  if (cVar9 != '\0') {
    fStack_18 = SUB84(dVar6,0);
    fStack_14 = fVar2;
  }
  (**(code **)(*ar5 + 0x180))(ar5,a5,a6,a7);
  uVar5 = SUB84(dVar6,0);
  fVar2 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar9 == '\0') {
    dVar3 = 4.14452302922905e-317;
    fStack_1c = fVar2;
  }
  else {
    fStack_1c = SUB84(dVar3,0);
    fStack_18 = fVar2;
  }
  pdVar1 = (double *)0x8;
  fVar2 = fStack_1c;
  fVar4 = fStack_18;
  if (cVar9 == '\0') {
    fVar2 = SUB84(dVar3,0);
    fVar4 = fStack_1c;
  }
  if (fVar2 != fVar4) {
    (**(code **)(*ar5 + 0x180))(ar5,a5,a6,a7);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(fStack_18,uVar5);
      dVar3 = (double)CONCAT44(0x42c80000,fVar4);
    }
    else {
      dVar6 = (double)CONCAT44(fStack_14,fStack_18);
      dVar3 = 2.0000004975590855;
    }
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) *
                               (SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20)),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 * (dVar3 / dVar3);
    }
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(0x40000000,fStack_14);
    }
    else {
      dVar3 = 1.6514225348597613e-308;
    }
    if (cVar8 == '\0') {
      fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - fVar2,SUB84(dVar6,0));
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
      dVar6 = dVar6 - dVar3 / dVar3;
    }
    pdVar1 = (double *)(ar4 + 0x2c);
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)pdVar1,fVar2);
    }
    else {
      dVar3 = *pdVar1;
    }
    if (cVar8 == '\0') {
      bVar7 = (float)((ulonglong)dVar3 >> 0x20) < (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar7 = dVar3 < dVar6;
    }
    if (!bVar7) {
      (**(code **)(*ar5 + 0x180))(ar5,a5,a6,a7);
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(fStack_18,SUB84(dVar6,0));
        dVar3 = (double)CONCAT44(0x42c80000,(int)((ulonglong)dVar3 >> 0x20));
      }
      else {
        dVar6 = (double)CONCAT44(fStack_14,fStack_18);
        dVar3 = 2.0000004975590855;
      }
      if (cVar8 == '\0') {
        fVar4 = (float)((ulonglong)dVar3 >> 0x20);
        fVar2 = SUB84(dVar3,0) / fVar4;
        dVar3 = (double)CONCAT44(fVar4,fVar2);
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * fVar2,SUB84(dVar6,0));
      }
      else {
        dVar3 = dVar3 / dVar3;
        dVar6 = dVar6 * dVar3;
      }
      fVar2 = SUB84(dVar3,0);
      if (cVar9 == '\0') {
        fVar2 = fStack_14;
      }
      pdVar1 = (double *)&DAT_8c02febc;
      if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(0x40000000,fVar2);
      }
      else {
        dVar3 = 1.6514225348597613e-308;
      }
      if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) -
                                 SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar3 / dVar3;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x2c) = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x2c) = dVar6;
      }
    }
  }
  return pdVar1;
}



/* ret_const_0_02fec0 @ 8c02fec0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_02fec0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* noop_02fec8 @ 8c02fec8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02fec8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_02fecc @ 8c02fecc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02fecc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c02fed0 @ 8c02fed0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02fed0(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined1 *)(DAT_8c02fee4 + ar4) = *ar5;
  iVar1 = DAT_8c02fee8;
  *(undefined1 *)(DAT_8c02fee8 + ar4) = ar5[1];
  return iVar1;
}



/* FUN_8c02feec @ 8c02feec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02feec(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  *(undefined4 *)(ar5 + 4) = 0;
  *ar5 = *(undefined1 *)(DAT_8c02ff00 + ar4);
  cVar1 = *(char *)(DAT_8c02ff04 + ar4);
  ar5[1] = cVar1;
  return (int)cVar1;
}



/* FUN_8c02ff08 @ 8c02ff08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02ff08(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined1 *)(DAT_8c02ff1c + ar4) = *ar5;
  iVar1 = DAT_8c02ff20;
  *(undefined1 *)(DAT_8c02ff20 + ar4) = ar5[1];
  return iVar1;
}



/* FUN_8c02ff24 @ 8c02ff24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02ff24(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  *(undefined4 *)(ar5 + 4) = 0;
  *ar5 = *(undefined1 *)(DAT_8c02ff38 + ar4);
  cVar1 = *(char *)(DAT_8c02ff3c + ar4);
  ar5[1] = cVar1;
  return (int)cVar1;
}



/* FUN_8c02ff40 @ 8c02ff40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c02ff40(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c02ff68)(ar4 + 8,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 4) = 0;
  *ar4 = 0;
  ar4[1] = 0;
  return ar4;
}



/* FUN_8c02ff6c @ 8c02ff6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c02ff6c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c02ff88)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c02ff8c;
  return ar4;
}



/* Class_129c24_m0_02ff90 @ 8c02ff90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_129c24_m0_02ff90(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129c24;
    ar5_00 = 0;
    Class_129c70_m0_02f1b8(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* noop_02ffd8 @ 8c02ffd8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_02ffd8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_0_02ffdc @ 8c02ffdc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_02ffdc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_02ffe4 @ 8c02ffe4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_02ffe4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c02ffec @ 8c02ffec callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ffec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b10,ar5,ar6,ar7);
  uVar3 = 0x8c27d4d0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27d4d0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b20,pcVar2,uVar3,ar7);
  uVar3 = 0x8c27d4dc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27d4dc,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b30,pcVar2,uVar3,ar7);
  uVar3 = 0x8c27d4e8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27d4e8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b40,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c27d4f4,ar7);
  if (cVar4 == '\0') {
    _DAT_8c125b50 = CONCAT44(_UNK_8c125b54,0x800000);
                    /* WARNING: Read-only address (ram,0x8c125b54) is written */
  }
  else {
    _DAT_8c125b50 = 0xffffffff00800000;
  }
  return 0x8c125864;
}


