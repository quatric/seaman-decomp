/* Seaman (USA) region 0x8c020000-0x8c030000 (Ghidra decompiler) */

/* FUN_8c02000c @ 8c02000c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c02000c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 a6;
  undefined4 a7;
  int iVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  
  a6 = ar6;
  a7 = ar7;
  puVar1 = (undefined4 *)(*(code *)PTR_malloc_thunk_8c020094)(DAT_8c020090,ar5,ar6,ar7);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = ar5;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    (*(code *)PTR_strcpy_8c020098)(puVar1 + 4,ar6,a6,a7);
    (*(code *)PTR_strcpy_8c020098)(puVar1 + 0xc,ar7,a6,a7);
    puVar1[0x14] = in_stack_00000000;
    puVar1[0x15] = in_stack_00000004;
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
  int *a5;
  
  ar4[1] = 0;
  *ar4 = 0;
  iVar1 = 0;
  if (ar4[8] != 0) {
    for (a5 = (int *)ar4[8]; a5[1] != 0; a5 = (int *)a5[1]) {
    }
    iVar1 = (*(code *)PTR_FUN_8c020138)(ar4,a5 + 0xc,ar6,ar7);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_FUN_8c02013c)(ar4,a5,ar6,ar7);
    }
    else {
      iVar1 = *a5;
      if (iVar1 == 0xb) {
        iVar1 = (*(code *)PTR_FUN_8c020140)(ar4,a5,ar6,ar7);
      }
      else if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0xe)) {
        iVar1 = 1;
      }
      else {
        iVar1 = (*(code *)PTR_FUN_8c020144)(ar4,a5,ar6,ar7);
      }
      if (iVar1 == 1) {
        ar4[1] = a5;
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
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0202c0(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [36];
  
  ar5[2] = 0;
  *ar4 = 0;
  (*(code *)PTR_strcpy_8c0203f8)(auStack_30,ar5 + 4,ar6,ar7);
  uVar3 = 0;
  iVar1 = (*(code *)PTR_FUN_8c0203fc)(auStack_30,0,ar6,ar7);
  *ar4 = iVar1;
  if (*ar4 == 0) {
    (*(code *)PTR_FUN_8c020400)(ar4,ar5,ar6,ar7);
    uVar3 = 0;
  }
  else {
    uVar2 = (*(code *)PTR_s_E9040829_adxf_is_NULL_ADXF_G_262646_8c020404)(*ar4,uVar3,ar6,ar7);
    ar5[3] = uVar2;
    iVar1 = ar5[3] + DAT_8c020408 >> 0xb;
    if (ar5[0x15] != 0) {
      iVar1 = ar5[0x15];
      ar5[3] = iVar1 << 0xb;
      ar6 = 0;
      uVar3 = ar5[0x14];
      (*(code *)PTR_FUN_8c02040c)(*ar4,uVar3,0,ar7);
    }
    switch(*ar5) {
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
      ar5[2] = ar4[4];
      break;
    default:
      uVar3 = (*(code *)PTR_malloc_thunk_8c020414)(ar5[3] + DAT_8c020410,uVar3,ar6,ar7);
      ar5[2] = uVar3;
      if (ar5[2] == 0) {
        (*(code *)PTR_FUN_8c020400)(ar4,ar5,ar6,ar7);
        return 0;
      }
    }
    uVar3 = ar5[2];
    iVar1 = (*(code *)PTR_s_E9040816_adxf_is_NULL_ADXF_R_26231a_8c020418)(*ar4,iVar1,uVar3,ar7);
    if (iVar1 < 0) {
      (*(code *)PTR_FUN_8c020400)(ar4,ar5,uVar3,ar7);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
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
  int a6;
  int iVar1;
  
  if (ar6 == 0) {
    a6 = 0;
  }
  else {
    do {
      a6 = ar6;
      if (a6 == 0) {
        return 0;
      }
      ar6 = *(int *)(a6 + 4);
      iVar1 = (*(code *)PTR_FUN_8c020584)(ar4,ar5,a6,ar7);
    } while (iVar1 != 1);
  }
  return a6;
}



/* FUN_8c020588 @ 8c020588 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020588(undefined4 ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *a6;
  undefined4 in_stack_00000000;
  
  if (*ar6 == ar5) {
    a6 = ar6;
    iVar2 = (*(code *)PTR_FUN_8c0205e4)(ar6 + 4,ar7,ar6,ar7);
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_FUN_8c0205e4)(ar6 + 0xc,in_stack_00000000,a6,ar7);
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
  int a6;
  int iVar1;
  int iVar2;
  int iVar3;
  
  a6 = *ar6;
  if (a6 == 0) {
    a6 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c0206b4)(ar4,ar5,a6,ar7);
    if (iVar1 == 1) {
      *ar6 = *(int *)(a6 + 4);
    }
    else if (*(int *)(a6 + 4) == 0) {
      a6 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(a6 + 4) + 4);
      iVar1 = a6;
      a6 = *(int *)(a6 + 4);
      while (iVar2 = (*(code *)PTR_FUN_8c0206b4)(ar4,ar5,a6,ar7), iVar2 != 1) {
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = *(int *)(*(int *)(a6 + 4) + 4);
        iVar1 = a6;
        a6 = *(int *)(a6 + 4);
      }
      *(int *)(iVar1 + 4) = iVar3;
    }
  }
  return a6;
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

undefined4 FUN_8c02077c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000000;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 in_stack_00000014;
  
  uVar2 = ar7;
  iVar1 = (*(code *)PTR_FUN_8c0208d4)(ar4,ar5,*(undefined4 *)(ar4 + 0x20),ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c0208d4)(ar4,ar5,*(undefined4 *)(ar4 + 0x24),ar7);
    if (iVar1 == 0) {
      uVar2 = ar7;
      iVar1 = (*(code *)PTR_FUN_8c0208d4)(ar4,ar5,ar6,ar7);
      if (iVar1 == 0) {
        if (((ar5 == 0xc) || (ar5 == 0xd)) || (ar5 == 0xe)) {
          iVar1 = (*(code *)PTR_FUN_8c0208e0)(ar4,ar5,ar7,in_stack_00000000);
          if (iVar1 == 0) {
            return 0;
          }
          *(undefined4 *)(iVar1 + 8) = *in_stack_00000004;
          (*(code *)PTR_FUN_8c0208e4)(ar4,ar4 + 0x20,iVar1,in_stack_00000000);
        }
        else {
          iVar1 = (*(code *)PTR_FUN_8c0208e8)(ar4,ar5,ar7,in_stack_00000000);
          if (iVar1 == 0) {
            return 0;
          }
        }
        uVar2 = 2;
      }
      else {
        (*(code *)PTR_FUN_8c0208d8)(ar4,iVar1,in_stack_00000014,uVar2);
        *in_stack_00000004 = *(undefined4 *)(iVar1 + 8);
        *in_stack_00000008 = *(undefined4 *)(iVar1 + 0xc);
        uVar2 = 1;
      }
    }
    else {
      (*(code *)PTR_FUN_8c0208dc)(ar4,ar5,ar4 + 0x24,ar7);
      uVar2 = 0;
    }
  }
  else {
    (*(code *)PTR_FUN_8c0208d8)(ar4,iVar1,in_stack_00000014,uVar2);
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_8c0208ec @ 8c0208ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0208ec(undefined4 ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a7;
  undefined4 in_stack_00000004;
  
  a7 = ar7;
  iVar1 = (*(code *)PTR_FUN_8c0209a0)(ar4,ar5,*ar6,ar7);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (((ar5 == 0xc) || (ar5 == 0xd)) || (ar5 == 0xe)) {
      (*(code *)PTR_FUN_8c0209a4)(ar4,ar5,ar6,ar7);
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c0209a8)(ar4,iVar1,in_stack_00000004,a7);
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
  
  uVar1 = (*(code *)PTR_FUN_8c0209f8)(ar4,0,*(undefined4 *)(ar4 + 0x28),ar5);
  return uVar1;
}



/* FUN_8c0209fc @ 8c0209fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0209fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  while( true ) {
    a5 = ar5;
    a6 = ar6;
    a7 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c020a68)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c020a6c)(ar4,a5,a6,a7);
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
  
  uVar1 = (*(code *)PTR_FUN_8c020aa4)(ar4,0,ar4 + 0x28,ar5);
  return uVar1;
}



/* FUN_8c020aa8 @ 8c020aa8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020aa8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c020af0)(ar4,2,*(undefined4 *)(ar4 + 0x28),ar5);
  return uVar1;
}



/* FUN_8c020af4 @ 8c020af4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020af4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  while( true ) {
    a5 = ar5;
    a6 = ar6;
    a7 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c020b60)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c020b64)(ar4,a5,a6,a7);
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
  
  uVar1 = (*(code *)PTR_FUN_8c020b9c)(ar4,2,ar4 + 0x28,ar5);
  return uVar1;
}



/* FUN_8c020ba0 @ 8c020ba0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020ba0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c020be8)(ar4,5,*(undefined4 *)(ar4 + 0x28),ar5);
  return uVar1;
}



/* FUN_8c020bec @ 8c020bec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020bec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  while( true ) {
    a5 = ar5;
    a6 = ar6;
    a7 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c020c58)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c020c5c)(ar4,a5,a6,a7);
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
  
  uVar1 = (*(code *)PTR_FUN_8c020c94)(ar4,5,ar4 + 0x28,ar5);
  return uVar1;
}



/* FUN_8c020c98 @ 8c020c98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020c98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c020ce0)(ar4,8,*(undefined4 *)(ar4 + 0x28),ar5);
  return uVar1;
}



/* FUN_8c020ce4 @ 8c020ce4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020ce4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  while( true ) {
    a5 = ar5;
    a6 = ar6;
    a7 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c020d50)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c020d54)(ar4,a5,a6,a7);
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
  
  uVar1 = (*(code *)PTR_FUN_8c020d8c)(ar4,8,ar4 + 0x28,ar5);
  return uVar1;
}



/* FUN_8c020d90 @ 8c020d90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020d90(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c020dd8)(ar4,0xb,*(undefined4 *)(ar4 + 0x28),ar5);
  return uVar1;
}



/* FUN_8c020ddc @ 8c020ddc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020ddc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  while( true ) {
    a5 = ar5;
    a6 = ar6;
    a7 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c020e40)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c020e44)(ar4,a5,a6,a7);
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
  
  uVar1 = (*(code *)PTR_FUN_8c020e7c)(ar4,0xb,ar4 + 0x28,ar5);
  return uVar1;
}



/* FUN_8c020e80 @ 8c020e80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c020e80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a7;
  
  a7 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c020ee8)(ar4,0xc,*(undefined4 *)(ar4 + 0x2c),ar5);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c020eec)(ar4,ar5,ar6,a7);
  }
  return iVar1;
}



/* FUN_8c020ef0 @ 8c020ef0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c020ef0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  while( true ) {
    a5 = ar5;
    a6 = ar6;
    a7 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c020f54)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c020f58)(ar4,a5,a6,a7);
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
  
  uVar1 = (*(code *)PTR_FUN_8c020f8c)(ar4,0xc,ar4 + 0x2c,ar5);
  return uVar1;
}



/* FUN_8c020f90 @ 8c020f90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c020f90(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c021004)(ar4,0xe,*(undefined4 *)(ar4 + 0x2c),ar5);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c021008)(ar4,0xe,ar4 + 0x2c,ar5);
  }
  return iVar1;
}



/* FUN_8c02100c @ 8c02100c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02100c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  while( true ) {
    a5 = ar5;
    a6 = ar6;
    a7 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c021070)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c021074)(ar4,a5,a6,a7);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



/* s_CDCGD_ReadPVMFileReq_021082 @ 8c021078 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_CDCGD_ReadPVMFileReq_021082(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a6;
  undefined4 a7;
  undefined4 in_stack_00000000;
  undefined4 uStack_1c;
  
  a6 = *(undefined4 *)(ar4 + 0x34);
  a7 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c021124)(ar4,0x10,a6,ar5);
  if (iVar1 == 1) {
    iVar2 = (*(code *)PTR_FUN_8c021128)(uStack_1c,ar7,a6,a7);
    if (iVar2 == 1) {
      (*(code *)PTR_FUN_8c02112c)(ar4,ar5,ar6,in_stack_00000000);
    }
    else {
      (*(code *)PTR_FUN_8c02112c)(ar4,ar5,ar6,in_stack_00000000);
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
  
  uVar1 = (*(code *)PTR_FUN_8c02116c)(ar4,0x10,ar4 + 0x34,ar5);
  return uVar1;
}



/* FUN_8c021170 @ 8c021170 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021170(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0211b4)(ar4,0xf,*(undefined4 *)(ar4 + 0x30),ar5);
  return uVar1;
}



/* file_load_to_buffer @ 8c0211b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 file_load_to_buffer(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  while( true ) {
    a5 = ar5;
    a6 = ar6;
    a7 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c02122c)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c021230)(ar4,a5,a6,a7);
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
  
  uVar1 = (*(code *)PTR_FUN_8c021268)(ar4,0xf,ar4 + 0x30,ar5);
  return uVar1;
}



/* FUN_8c02126c @ 8c02126c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02126c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0212b4)(ar4,0x10,*(undefined4 *)(ar4 + 0x34),ar5);
  return uVar1;
}



/* file_load_into_object_buffer @ 8c0212b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 file_load_into_object_buffer(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  while( true ) {
    a5 = ar5;
    a6 = ar6;
    a7 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c021330)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c021334)(ar4,a5,a6,a7);
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
  
  uVar1 = (*(code *)PTR_FUN_8c02136c)(ar4,0x10,ar4 + 0x34,ar5);
  return uVar1;
}



/* FUN_8c021370 @ 8c021370 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c021370(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0213b8)(ar4,0x10,*(undefined4 *)(ar4 + 0x34),ar5);
  return uVar1;
}



/* FUN_8c0213bc @ 8c0213bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0213bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  while( true ) {
    a5 = ar5;
    a6 = ar6;
    a7 = ar7;
    iVar1 = (*(code *)PTR_FUN_8c021420)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_FUN_8c021424)(ar4,a5,a6,a7);
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
  
  uVar1 = (*(code *)PTR_FUN_8c021458)(ar4,0x10,ar4 + 0x34,ar5);
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
  undefined4 a5;
  
  if (ar4 != 0) {
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_022198_8c021518)(ar4 + 4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c02151c)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* pack_open @ 8c021520 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 pack_open(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  
  *ar4 = 0;
  iVar1 = (*(code *)PTR_FUN_8c0215bc)(ar4 + 1,ar5,ar6,in_stack_00000004);
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
                        (DAT_8c0215c8,in_stack_00000000,PTR_s_SeamanSound_mlt_8c0215c4 + 0x34,
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

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02174c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 unaff_r11;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar3;
  uint in_fr1;
  double dVar4;
  undefined4 in_fr5;
  float in_fr4;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd4;
  bool bVar5;
  undefined4 in_PR;
  int iVar6;
  int iVar7;
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
  *(undefined4 *)(puVar3 + -8) = unaff_r13;
  *(undefined4 *)(puVar3 + -0xc) = 0;
  *(undefined4 *)(puVar3 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar3 + -0x14) = in_PR;
  *(undefined4 *)(puVar3 + -0x34) = ar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar3 + -0x30) = in_fr5;
    in_fr15 = in_fr4;
  }
  else {
    *(undefined8 *)(puVar3 + -0x30) = in_xd4;
  }
  if (*ar4 == 0) {
    uVar1 = 0;
  }
  else {
    if (in_FPSCR_PR == '\0') {
      iVar6 = (int)in_fr15;
    }
    else {
      iVar6 = (int)(double)CONCAT44(in_fr14,in_fr15);
    }
    uVar1 = (*(code *)PTR_FUN_8c0218ec)(iVar6,ar5,ar6,ar7);
    *(undefined4 *)(puVar3 + -0x18) = uVar1;
    uVar1 = DAT_8c0218f0;
    uVar2 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c0218f4)
                      (*(undefined4 *)(puVar3 + -0x18),DAT_8c0218f0,ar6,ar7);
    *(undefined4 *)(puVar3 + -0x24) = uVar2;
    switch(*(undefined4 *)(puVar3 + -0x24)) {
    case 0:
      iVar6 = 0;
      break;
    case 1:
      iVar6 = 0x10;
      break;
    case 2:
      iVar6 = 0x20;
      break;
    case 3:
      iVar6 = 0x30;
      break;
    case 4:
      iVar6 = 0x40;
      break;
    case 5:
      iVar6 = 0x50;
      break;
    case 6:
      iVar6 = 0x60;
      break;
    case 7:
      iVar6 = 0x70;
      break;
    default:
      iVar6 = 0x7f;
    }
    if (in_FPSCR_PR == '\0') {
      bVar5 = in_fr15 < 0.0;
    }
    else {
      bVar5 = (double)CONCAT44(in_fr14,in_fr15) < (double)(ulonglong)in_fr1;
    }
    if (bVar5) {
      *(int *)(puVar3 + -0x28) = iVar6;
      iVar6 = -*(int *)(puVar3 + -0x28);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(puVar3 + -0x30),in_fr1);
    }
    else {
      dVar4 = *(double *)(puVar3 + -0x30);
    }
    if (in_FPSCR_PR == '\0') {
      iVar7 = (int)(float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      iVar7 = (int)dVar4;
    }
    uVar1 = (*(code *)PTR_FUN_8c0218ec)(iVar7,uVar1,ar6,ar7);
    *(undefined4 *)(puVar3 + -0x1c) = uVar1;
    uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c0218f4)
                      (*(undefined4 *)(puVar3 + -0x1c),DAT_8c0218f0,ar6,ar7);
    *(undefined4 *)(puVar3 + -0x2c) = uVar1;
    switch(*(undefined4 *)(puVar3 + -0x2c)) {
    case 0:
      uVar2 = 0x7f;
      break;
    case 1:
      uVar2 = 0x1e;
      break;
    case 2:
      uVar2 = 0x14;
      break;
    case 3:
      uVar2 = 7;
      break;
    case 4:
      uVar2 = 0;
      break;
    case 5:
      uVar2 = 0xfffffff9;
      break;
    case 6:
      uVar2 = 0xfffffff4;
      break;
    case 7:
      uVar2 = 0xffffffe7;
      break;
    case 8:
      uVar2 = 0xffffffe2;
      break;
    default:
      uVar2 = 0xffffff81;
    }
    uVar1 = (*(code *)PTR_FUN_8c0218f8)(ar4 + 1,2,*(undefined4 *)(puVar3 + -0x34),ar7);
    *(undefined4 *)(puVar3 + -0x20) = uVar1;
    iVar7 = *(int *)(puVar3 + -0x20);
    if (-1 < iVar7) {
      (*(code *)PTR_FUN_8c0218fc)(ar4 + 1,iVar7,iVar6,ar7);
      (*(code *)PTR_FUN_8c021900)(ar4 + 1,iVar7,uVar2,ar7);
      (*(code *)PTR_FUN_8c021904)(ar4 + 1,iVar7,uVar2,ar7);
      uVar1 = (*(code *)PTR_FUN_8c021908)(ar4 + 1,iVar7,uVar2,ar7);
    }
  }
  return uVar1;
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
  int a5;
  int iVar1;
  
  if (*ar4 == 0) {
    a5 = -1;
  }
  else {
    a5 = (*(code *)PTR_handle_slot_alloc_8c021b98)(ar4 + 1,ar5,ar6,ar7);
    if (a5 == -1) {
      a5 = -1;
    }
    else {
      iVar1 = (*(code *)PTR_pack_find_entry_by_name_8c021b9c)(ar4,ar5,ar6,ar7);
      if (iVar1 == -1) {
        (*(code *)PTR_handle_slot_free_8c021ba0)(ar4 + 1,a5,ar6,ar7);
        a5 = -1;
      }
      else {
        *(int *)((int)ar4 + DAT_8c021ba4 + a5 * 8) = a5;
        *(int *)((int)ar4 + DAT_8c021ba8 + a5 * 8) = iVar1;
      }
    }
  }
  return a5;
}



/* pack_find_entry_by_name @ 8c021bac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 pack_find_entry_by_name(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  char acStack_8c [132];
  
  (*(code *)PTR_strcpy_8c021c6c)(acStack_8c,PTR_s_SeamanSound_mlt_8c021c68 + 0x34,ar6,ar7);
  (*(code *)PTR_strcpy_8c021c6c)(acStack_8c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c021c70)(acStack_8c,PTR_s_SeamanSound_mlt_8c021c68 + 0x35,ar6,ar7);
  iVar2 = 0;
  while( true ) {
    if ((DAT_8c021c7c <= iVar2) || (*(char *)(*(int *)(DAT_8c021c74 + ar4) + iVar2 * 0x28) == '\0'))
    {
      return 0xffffffff;
    }
    if ((*(char *)(*(int *)(DAT_8c021c74 + ar4) + iVar2 * 0x28) == acStack_8c[0]) &&
       (iVar1 = (*(code *)PTR_FUN_8c021c78)
                          (iVar2 * 0x28 + *(int *)(DAT_8c021c74 + ar4),acStack_8c,ar6,ar7),
       iVar1 == 0)) break;
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
  int a5;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    (*(code *)PTR_FUN_8c021d88)(ar4 + 1,ar5,ar6,ar7);
    for (a5 = 0; uVar1 = 3, a5 < 3; a5 = a5 + 1) {
      (*(code *)PTR_FUN_8c021d8c)(ar4 + 1,a5,ar6,ar7);
    }
  }
  return uVar1;
}



/* FUN_8c021d90 @ 8c021d90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c021d90(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  undefined4 uVar2;
  
  iVar1 = *ar4;
  if (((iVar1 != 0) && (-1 < ar5)) && (iVar1 = 3, ar5 < 3)) {
    uVar2 = ar6;
    a6 = (*(code *)PTR_FUN_8c021e00)(ar4,ar7,ar6,ar7);
    uVar2 = (*(code *)PTR_FUN_8c021e04)(ar4,ar6,uVar2,ar7);
    (*(code *)PTR_FUN_8c021e08)(ar4 + 1,ar5,uVar2,ar7);
    iVar1 = (*(code *)PTR_FUN_8c021e0c)(ar4 + 1,ar5,a6,ar7);
  }
  return iVar1;
}



/* FUN_8c021e10 @ 8c021e10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c021e10(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_FUN_8c021ebc)(ar5,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c021ec4)(uVar1,DAT_8c021ec0,ar6,ar7);
  switch(uVar1) {
  case 0:
    iVar2 = 0;
    break;
  case 1:
    iVar2 = 1;
    break;
  case 2:
    iVar2 = 2;
    break;
  case 3:
    iVar2 = 3;
    break;
  case 4:
    iVar2 = 4;
    break;
  case 5:
    iVar2 = 5;
    break;
  case 6:
    iVar2 = 6;
    break;
  case 7:
    iVar2 = 7;
    break;
  case 8:
    iVar2 = 8;
    break;
  default:
    iVar2 = 0xf;
  }
  if (ar5 < 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
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
  undefined1 auStack_c [4];
  undefined1 auStack_8 [8];
  
  uVar1 = (*(code *)PTR_FUN_8c021f48)(ar4,ar5,auStack_8,auStack_c);
  return uVar1;
}



/* FUN_8c021f4c @ 8c021f4c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c021fe2) */
/* WARNING: Removing unreachable block (ram,0x8c021ff4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c021f4c(int *ar4,int ar5,int *ar6,int *ar7)

{
  undefined4 uVar1;
  ushort *a6;
  int *a7;
  int *in_stack_00000000;
  ushort auStack_18 [2];
  int iStack_14;
  undefined1 *puStack_c;
  
  puStack_c = &DAT_8c4366c0;
  if (*ar4 == 0) {
    uVar1 = 2;
  }
  else if ((ar5 < 0) || (2 < ar5)) {
    uVar1 = 2;
  }
  else {
    a6 = auStack_18;
    a7 = ar7;
    iStack_14 = (*(code *)PTR_FUN_8c022054)(ar4 + 1,ar5,a6,ar7);
    if (iStack_14 == 1) {
      (*(code *)PTR_pack_release_entry_handle_8c022058)(ar4,ar5,a6,a7);
      uVar1 = 1;
    }
    else if (iStack_14 == 2) {
      uVar1 = 3;
    }
    else if (iStack_14 == 3) {
      *ar6 = (int)(auStack_18[0] & DAT_8c02205c) >> 4;
      *ar7 = (int)(auStack_18[0] & DAT_8c022060) >> 8;
      *in_stack_00000000 = (int)(auStack_18[0] & DAT_8c022064) >> 0xc;
      switch(auStack_18[0] & 0xf) {
      case 0:
        uVar1 = 5;
        break;
      case 1:
      case 2:
      case 3:
        uVar1 = 6;
        break;
      case 4:
      case 5:
      case 6:
        uVar1 = 7;
        break;
      default:
        uVar1 = 8;
      }
    }
    else {
      uVar1 = 2;
    }
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
    *(undefined1 *)(DAT_8c0220b0 + (int)ar4) = 0;
    (*(code *)PTR_strcpy_8c0220b4)((int)ar4 + DAT_8c0220b0,ar5,ar6,ar7);
    uVar1 = (*(code *)PTR_pack_find_entry_by_name_8c0220b8)(ar4,(int)ar4 + DAT_8c0220b0,ar6,ar7);
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
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c0221c4)(ar4,ar5,ar6,ar7);
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
  undefined *a6;
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
    a6 = PTR_DAT_8c02234c;
    iVar4 = (*(code *)PTR_FUN_8c022350)(ar4,ar5,PTR_DAT_8c02234c,uVar1);
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      (*(code *)PTR_FUN_8c022354)(aiStack_10,ar5,a6,uVar1);
      if (aiStack_10[0] == 0) {
        (*(code *)PTR_FUN_8c02235c)(DAT_8c022358,ar5,a6,uVar1);
      }
      else {
        (*(code *)PTR_FUN_8c02235c)(DAT_8c022360,ar5,a6,uVar1);
      }
      (*(code *)PTR_FUN_8c022364)(1,ar5,a6,uVar1);
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
  undefined *a6;
  undefined4 *a7;
  undefined4 auStack_8 [2];
  
  a7 = auStack_8;
  a6 = PTR_DAT_8c0223f0;
  iVar1 = (*(code *)PTR_file_load_to_buffer_8c0223f8)
                    (DAT_8c0223f4,PTR_DAT_8c0223f0 + 1,PTR_DAT_8c0223f0,a7);
  if (iVar1 != 0) {
    (*(code *)PTR_aica_driver_upload_8c0223fc)(ar4,auStack_8[0],a6,a7);
    (*(code *)PTR_FUN_8c022400)(DAT_8c0223f4,PTR_DAT_8c0223f0 + 1,PTR_DAT_8c0223f0,1);
  }
  return (uint)(iVar1 != 0);
}



/* aica_driver_upload @ 8c022404 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int aica_driver_upload(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 a6;
  int aiStack_10 [2];
  
  aiStack_10[0] = 0;
  a6 = 0;
  a5 = 0;
  iVar1 = (*(code *)PTR_FUN_8c022480)(0,0,0,ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c022484)(aiStack_10,a5,a6,ar7);
    if (iVar1 == 0) {
      ar7 = 0xffffffff;
      a6 = 0;
      iVar1 = (*(code *)PTR_FUN_8c022488)(aiStack_10[0],ar5,0,0xffffffff);
      a5 = ar5;
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_FUN_8c02248c)(aiStack_10[0],ar5,a6,ar7);
        a5 = ar5;
      }
    }
  }
  if (aiStack_10[0] != 0) {
    (*(code *)PTR_FUN_8c022490)(aiStack_10[0],a5,a6,ar7);
  }
  return iVar1;
}



/* FUN_8c022494 @ 8c022494 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c022494(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  undefined4 *a7;
  undefined4 auStack_10 [2];
  
  a7 = auStack_10;
  a6 = ar6;
  iVar1 = (*(code *)PTR_file_load_to_buffer_8c0224f8)(DAT_8c0224f4,ar5,ar6,a7);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c0224fc)(ar4,auStack_10[0],a6,a7);
    (*(code *)PTR_FUN_8c022500)(DAT_8c0224f4,ar5,ar6,1);
  }
  return (uint)(iVar1 != 0);
}



/* FUN_8c022504 @ 8c022504 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c022504(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  int aiStack_10 [2];
  
  aiStack_10[0] = 0;
  a5 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c02256c)(aiStack_10,ar5,ar6,ar7);
  if (iVar1 == 0) {
    ar7 = 0xffffffff;
    ar6 = 0;
    iVar1 = (*(code *)PTR_FUN_8c022570)(aiStack_10[0],ar5,0,0xffffffff);
    a5 = ar5;
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_FUN_8c022574)(aiStack_10[0],ar5,ar6,ar7);
      a5 = ar5;
    }
  }
  if (aiStack_10[0] != 0) {
    (*(code *)PTR_FUN_8c022578)(aiStack_10[0],a5,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c02257c @ 8c02257c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02257c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a7;
  undefined4 auStack_8 [2];
  
  iVar1 = (*(code *)PTR_FUN_8c0225e0)(auStack_8,ar5,ar6,ar7);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c0225e4)(auStack_8[0],0,0,ar7);
    (*(code *)PTR_FUN_8c0225e8)(auStack_8[0],0x7f,0,ar7);
    a7 = 0;
    iVar1 = (*(code *)PTR_FUN_8c0225ec)(auStack_8[0],ar5,ar6,0);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_FUN_8c0225f0)(auStack_8[0],ar5,ar6,a7);
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c0225f0)(auStack_8[0],ar5,ar6,a7);
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
  
  uVar1 = (*(code *)PTR_FUN_8c0228e0)(ar4,ar4 + ar5 * DAT_8c0228d8 + DAT_8c0228dc,ar6,ar7);
  return uVar1;
}



/* FUN_8c0228e4 @ 8c0228e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0228e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c022914)(ar4,ar4 + 0x70,ar5,0);
  return uVar1;
}



/* FUN_8c022918 @ 8c022918 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c022918(undefined4 ar4,int *ar5,undefined4 ar6,int ar7)

{
  undefined4 uVar1;
  int in_stack_00000000;
  
  if ((*ar5 == 1) || (*ar5 == 3)) {
    (*(code *)PTR_s_E8101202_can_t_open_d_d_ADXT_26440a_8c022968)(ar5[1],0,ar6,ar7);
    *ar5 = 2;
    ar5[2] = ar7;
    ar5[3] = in_stack_00000000;
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
  int *a6;
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
            a6 = aiStack_14;
            (*(code *)PTR_FUN_8c022b60)(piVar3[1],&uStack_18,a6,ar7);
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
                 (*(code *)PTR_libgcc_divide_helper_0101e4_8c022b64)(aiStack_14[0],0x1e,a6,ar7);
            aiStack_14[0] = aiStack_14[0] * 5;
            iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c022b64)
                              (uStack_18,aiStack_14[0],a6,ar7);
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

/* WARNING: Unknown calling convention */

ulonglong * Vec3_ctor_zero(ulonglong *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  *(undefined **)((int)ar4 + 0xc) = PTR_DAT_8c022c84;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 1) = 0;
    *(undefined4 *)((int)ar4 + 4) = 0;
    *(undefined4 *)ar4 = 0;
  }
  else {
    ar4[1] = (ulonglong)in_fr1;
    *(ulonglong *)((int)ar4 + 4) = (ulonglong)in_fr1;
    *ar4 = (ulonglong)in_fr1;
  }
  return ar4;
}



/* Vec3_ctor_copy @ 8c022c88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * Vec3_ctor_copy(undefined8 *ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  *(undefined4 *)((int)ar4 + 0xc) = DAT_8c022cac;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = *(undefined4 *)ar5;
    *(undefined4 *)((int)ar4 + 4) = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 1) = *(undefined4 *)(ar5 + 1);
  }
  else {
    *ar4 = *ar5;
    *(undefined8 *)((int)ar4 + 4) = *(undefined8 *)((int)ar5 + 4);
    ar4[1] = ar5[1];
  }
  return ar4;
}



/* Vec3_dtor @ 8c022cb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Vec3_dtor(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (*(undefined **)(ar4 + 0xc) = PTR_DAT_8c022ce0, 0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c022ce4)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* Vec3_ctor_xyz @ 8c022ce8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * Vec3_ctor_xyz(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  *(undefined4 *)((int)ar4 + 0xc) = DAT_8c022d00;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = in_fr4;
    *(undefined4 *)((int)ar4 + 4) = in_fr5;
    *(undefined4 *)(ar4 + 1) = in_fr6;
  }
  else {
    *ar4 = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)((int)ar4 + 4) = in_xd4;
    ar4[1] = CONCAT44(in_fr6,in_fr7);
  }
  return ar4;
}



/* FUN_8c022d04 @ 8c022d04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c022d04(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = in_fr4;
    *(undefined4 *)((int)ar4 + 4) = in_fr5;
    *(undefined4 *)(ar4 + 1) = in_fr6;
  }
  else {
    *ar4 = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)((int)ar4 + 4) = in_xd4;
    ar4[1] = CONCAT44(in_fr6,in_fr7);
  }
  return (int)ar4 + 4;
}



/* FUN_8c022d14 @ 8c022d14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c022d14(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return ar5 + 4;
}



/* FUN_8c022d3c @ 8c022d3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c022d3c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c022da8)(in_stack_00000000,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c022dac @ 8c022dac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c022dac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  undefined8 in_dr0;
  double dVar3;
  undefined8 uVar4;
  undefined8 in_dr14;
  double dVar5;
  undefined8 in_xd14;
  bool bVar6;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [4];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar2 = auStack_c;
  }
  else {
    puVar2 = auStack_18;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)(puVar2 + -4) = unaff_r14;
  *(undefined4 *)(puVar2 + -8) = unaff_r13;
  *(undefined4 *)(puVar2 + -0xc) = in_PR;
  a5 = ar5;
  (*(code *)PTR_FUN_8c022e48)(ar4,ar5,ar6,ar7);
  uVar1 = (undefined4)in_dr14;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x10) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar2 + -0x10) = in_dr0;
  }
  (*(code *)PTR_Vec3_length_sq_8c022e4c)(ar4,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x14) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar2 + -0x14) = in_dr0;
  }
  (*(code *)PTR_Vec3_length_sq_8c022e4c)(ar5,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x18) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar5 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0x14),uVar1);
  }
  else {
    *(undefined8 *)(puVar2 + -0x18) = in_dr0;
    dVar5 = *(double *)(puVar2 + -0x14);
  }
  uVar1 = 8;
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0x18),(int)in_dr0);
  }
  else {
    dVar3 = *(double *)(puVar2 + -0x18);
  }
  if (in_FPSCR_PR == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * (float)((ulonglong)dVar3 >> 0x20),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 * dVar3;
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = 0.0 < (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    bVar6 = (double)((ulonglong)dVar3 & 0xffffffff) < dVar5;
  }
  if (bVar6) {
    if (in_FPSCR_SZ == '\0') {
      uVar4 = CONCAT44(DAT_8c022e50,SUB84(dVar3,0));
    }
    else {
      uVar4 = CONCAT44(PTR_FUN_8c022e54,DAT_8c022e50);
    }
    (*(code *)PTR_FUN_8c022e54)(ar5,a5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar2 + -0x1c) = (int)((ulonglong)uVar4 >> 0x20);
    }
    else {
      *(undefined8 *)(puVar2 + -0x1c) = uVar4;
    }
    (*(code *)PTR_FUN_8c022e58)(ar5,a5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar2 + -0x20) = (int)((ulonglong)uVar4 >> 0x20);
    }
    else {
      *(undefined8 *)(puVar2 + -0x20) = uVar4;
    }
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
  (*(code *)PTR_FUN_8c022ebc)(ar4,ar5,ar6,ar7);
  return 0;
}



/* Vec3_normalize @ 8c022ec0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c022ee6) */
/* WARNING: Unknown calling convention */

undefined4 Vec3_normalize(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r14;
  undefined1 *puVar1;
  undefined8 in_dr0;
  double dVar2;
  float in_fr15;
  undefined4 in_fr14;
  undefined4 in_PR;
  char in_FPSCR_PR;
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
  (*(code *)PTR_Vec3_ctor_zero_8c022f40)(puVar1 + -0x18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_length_sq_8c022f44)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x1c) = (int)((ulonglong)in_dr0 >> 0x20);
    in_fr15 = *(float *)(puVar1 + -0x1c);
  }
  else {
    *(undefined8 *)(puVar1 + -0x1c) = in_dr0;
  }
  if (in_fr15 == 0.0) {
    (*(code *)PTR_Vec3_assign_8c022f48)(puVar1 + -0x18,ar4,ar6,ar7);
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar2 = (double)CONCAT44(*(undefined4 *)ar4,(int)in_dr0);
    }
    else {
      dVar2 = *ar4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / (double)CONCAT44(in_fr14,in_fr15);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar1 + -0x18) = (int)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),SUB84(dVar2,0));
    }
    else {
      *(double *)(puVar1 + -0x18) = dVar2;
      dVar2 = *(double *)((int)ar4 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / (double)CONCAT44(in_fr14,in_fr15);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar1 + -0x14) = (int)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),SUB84(dVar2,0));
    }
    else {
      *(double *)(puVar1 + -0x14) = dVar2;
      dVar2 = ar4[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / (double)CONCAT44(in_fr14,in_fr15);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar1 + -0x10) = (int)((ulonglong)dVar2 >> 0x20);
    }
    else {
      *(double *)(puVar1 + -0x10) = dVar2;
    }
  }
  (*(code *)PTR_Vec3_ctor_copy_8c022f4c)(*(undefined4 *)(puVar1 + 4),puVar1 + -0x18,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c022f50)(puVar1 + -0x18,0xffffffff,ar6,ar7);
  return 0;
}



/* Vec3_length @ 8c022f54 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c022f7c) */
/* WARNING: Unknown calling convention */

undefined4 Vec3_length(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r14;
  undefined1 *puVar1;
  undefined8 in_dr0;
  ulonglong uVar2;
  double dVar3;
  float in_fr15;
  undefined4 in_fr14;
  undefined4 in_PR;
  char in_FPSCR_PR;
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
  (*(code *)PTR_Vec3_length_sq_8c022fbc)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0xc) = (int)((ulonglong)in_dr0 >> 0x20);
    *(undefined4 *)(puVar1 + -0x10) = *(undefined4 *)(puVar1 + -0xc);
    in_fr15 = *(float *)(puVar1 + -0x10);
    uVar2 = (ulonglong)*(uint *)(puVar1 + -0x10);
  }
  else {
    *(undefined8 *)(puVar1 + -0xc) = in_dr0;
    uVar2 = *(ulonglong *)(puVar1 + -0xc);
    *(ulonglong *)(puVar1 + -0x10) = uVar2;
  }
  if ((float)uVar2 != 0.0) {
    *(undefined4 *)(puVar1 + -0x14) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)*(double **)(puVar1 + -0x14),(float)uVar2);
    }
    else {
      dVar3 = **(double **)(puVar1 + -0x14);
    }
    if (in_FPSCR_PR == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) / in_fr15,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 / (double)CONCAT44(in_fr14,in_fr15);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)*(double **)(puVar1 + -0x14) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      **(double **)(puVar1 + -0x14) = dVar3;
    }
    *(undefined4 *)(puVar1 + -0x18) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar1 + -0x18) + 4),SUB84(dVar3,0));
    }
    else {
      dVar3 = *(double *)(*(int *)(puVar1 + -0x18) + 4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) / in_fr15,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 / (double)CONCAT44(in_fr14,in_fr15);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)(puVar1 + -0x18) + 4) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(*(int *)(puVar1 + -0x18) + 4) = dVar3;
    }
    *(undefined4 *)(puVar1 + -0x1c) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar1 + -0x1c) + 8),SUB84(dVar3,0));
    }
    else {
      dVar3 = *(double *)(*(int *)(puVar1 + -0x1c) + 8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) / in_fr15,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 / (double)CONCAT44(in_fr14,in_fr15);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)(puVar1 + -0x1c) + 8) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(*(int *)(puVar1 + -0x1c) + 8) = dVar3;
    }
  }
  return ar4;
}



/* FUN_8c022fc0 @ 8c022fc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c022fc0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined1 *puVar1;
  ulonglong in_dr0;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd14;
  bool bVar2;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar1 = auStack_4;
  }
  else {
    puVar1 = auStack_8;
  }
  *(undefined4 *)(puVar1 + -4) = in_PR;
  *(undefined4 *)(puVar1 + -0x34) = ar4;
  *(undefined4 *)(puVar1 + -0x30) = ar5;
  *(undefined1 **)(puVar1 + -0x38) = puVar1 + -0x24;
  (*(code *)PTR_Vec3_sub_8c023030)
            (*(undefined4 *)(puVar1 + -0x30),*(undefined4 *)(puVar1 + -0x34),ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c023034)(puVar1 + -0x14,puVar1 + -0x24,ar6,ar7);
  a5 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c023038)(puVar1 + -0x24,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_length_sq_8c02303c)(puVar1 + -0x14,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x2c) = (int)(in_dr0 >> 0x20);
    in_fr15 = *(float *)(puVar1 + -0x2c);
  }
  else {
    *(ulonglong *)(puVar1 + -0x2c) = in_dr0;
    in_xd14 = *(undefined8 *)(puVar1 + -0x2c);
  }
  if (in_FPSCR_PR == '\0') {
    bVar2 = in_fr15 < 0.0;
  }
  else {
    bVar2 = (double)CONCAT44(in_fr14,in_fr15) < (double)(in_dr0 & 0xffffffff);
  }
  if (bVar2) {
    in_fr15 = 0.0;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(puVar1 + -0x28) = in_fr15;
  }
  else {
    *(undefined8 *)(puVar1 + -0x28) = in_xd14;
  }
  (*(code *)PTR_Vec3_dtor_8c023038)(puVar1 + -0x14,0xffffffff,ar6,ar7);
  return 0xc;
}



/* FUN_8c023040 @ 8c023040 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023040(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined1 *puVar1;
  ulonglong in_dr0;
  undefined8 in_dr4;
  undefined8 in_dr6;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd4;
  undefined8 in_xd14;
  bool bVar2;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar1 = auStack_4;
  }
  else {
    puVar1 = auStack_8;
  }
  *(undefined4 *)(puVar1 + -4) = in_PR;
  *(undefined4 *)(puVar1 + -0x4c) = ar4;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x48) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)(puVar1 + -0x44) = (int)in_dr4;
    *(int *)(puVar1 + -0x40) = (int)((ulonglong)in_dr6 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar1 + -0x48) = in_dr4;
    *(undefined8 *)(puVar1 + -0x44) = in_xd4;
    *(undefined8 *)(puVar1 + -0x40) = in_dr6;
  }
  (*(code *)PTR_Vec3_ctor_xyz_8c0230dc)(puVar1 + -0x14,ar5,ar6,ar7);
  *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x34;
  (*(code *)PTR_Vec3_sub_8c0230e0)(puVar1 + -0x14,*(undefined4 *)(puVar1 + -0x4c),ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c0230e4)(puVar1 + -0x24,puVar1 + -0x34,ar6,ar7);
  a5 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0230e8)(puVar1 + -0x34,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_length_sq_8c0230ec)(puVar1 + -0x24,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x3c) = (int)(in_dr0 >> 0x20);
    in_fr15 = *(float *)(puVar1 + -0x3c);
  }
  else {
    *(ulonglong *)(puVar1 + -0x3c) = in_dr0;
    in_xd14 = *(undefined8 *)(puVar1 + -0x3c);
  }
  if (in_FPSCR_PR == '\0') {
    bVar2 = in_fr15 < 0.0;
  }
  else {
    bVar2 = (double)CONCAT44(in_fr14,in_fr15) < (double)(in_dr0 & 0xffffffff);
  }
  if (bVar2) {
    in_fr15 = 0.0;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(puVar1 + -0x38) = in_fr15;
  }
  else {
    *(undefined8 *)(puVar1 + -0x38) = in_xd14;
  }
  (*(code *)PTR_Vec3_dtor_8c0230e8)(puVar1 + -0x24,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0230e8)(puVar1 + -0x14,0xffffffff,ar6,ar7);
  return 0x14;
}



/* FUN_8c0230f0 @ 8c0230f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0230f0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_00000000;
  undefined1 auStack_18 [20];
  
  (*(code *)PTR_Vec3_ctor_xyz_8c02312c)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c023130)(in_stack_00000000,auStack_18,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c023134)(auStack_18,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c023138 @ 8c023138 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023138(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_00000000;
  undefined1 auStack_18 [20];
  
  (*(code *)PTR_Vec3_ctor_xyz_8c023174)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c023178)(in_stack_00000000,auStack_18,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c02317c)(auStack_18,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c023180 @ 8c023180 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023180(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_00000000;
  undefined1 auStack_18 [20];
  
  (*(code *)PTR_Vec3_ctor_xyz_8c0231bc)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c0231c0)(in_stack_00000000,auStack_18,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0231c4)(auStack_18,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c0231c8 @ 8c0231c8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0231f6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0231c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 a5;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  float fVar3;
  ulonglong in_dr0;
  ulonglong uVar4;
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
  *(undefined1 **)(puVar2 + -0x38) = puVar2 + -0x18;
  (*(code *)PTR_FUN_8c023264)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_length_sq_8c023268)(puVar2 + -0x18,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x30) = (int)(in_dr0 >> 0x20);
    in_dr0 = (ulonglong)*(uint *)(puVar2 + -0x30);
  }
  else {
    *(ulonglong *)(puVar2 + -0x30) = in_dr0;
  }
  uVar4 = in_dr0 & 0xffffffff;
  *(uint *)(puVar2 + -0x2c) = (uint)((float)in_dr0 == 0.0);
  a5 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c02326c)(puVar2 + -0x18,0xffffffff,ar6,ar7);
  if (*(int *)(puVar2 + -0x2c) == 0) {
    *(undefined1 **)(puVar2 + -0x38) = puVar2 + -0x28;
    (*(code *)PTR_FUN_8c023264)(ar4,a5,ar6,ar7);
    (*(code *)PTR_FUN_8c023274)(ar4,puVar2 + -0x28,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar2 + -0x34) = (int)(uVar4 >> 0x20);
    }
    else {
      *(ulonglong *)(puVar2 + -0x34) = uVar4;
    }
    puVar1 = (undefined4 *)(*(code *)PTR_Vec3_dtor_8c02326c)(puVar2 + -0x28,0xffffffff,ar6,ar7);
  }
  else {
    puVar1 = (undefined4 *)&DAT_8c023270;
  }
  fVar3 = (float)uVar4;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + 4);
  }
  if (in_FPSCR_PR == '\0' && 0.0 < fVar3) {
    puVar1 = &DAT_8c023278;
  }
  return puVar1;
}



/* FUN_8c02327c @ 8c02327c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c02327c(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  float fVar3;
  undefined8 in_dr0;
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
  *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x18;
  (*(code *)PTR_FUN_8c0232d4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0232dc)(PTR_DAT_8c0232d8,puVar2 + -0x18,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x1c) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar2 + -0x1c) = in_dr0;
  }
  puVar1 = (undefined4 *)(*(code *)PTR_Vec3_dtor_8c0232e0)(puVar2 + -0x18,0xffffffff,ar6,ar7);
  fVar3 = (float)in_dr0;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *ar4;
  }
  if (in_FPSCR_PR == '\0' && fVar3 < 0.0) {
    puVar1 = &DAT_8c0232e4;
  }
  return puVar1;
}



/* FUN_8c0232e8 @ 8c0232e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0232e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r14;
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 extraout_fr1;
  undefined4 extraout_fr1_00;
  undefined4 extraout_fr0;
  undefined4 extraout_fr0_00;
  undefined4 uVar3;
  undefined8 in_dr14;
  undefined8 uVar4;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar2 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar2 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar2 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar2 + -8) = in_PR;
  *(undefined4 *)((int)puVar2 + -0x18) = ar4;
  *(undefined4 *)((int)puVar2 + -0x14) = ar5;
  uVar1 = 2;
  (*(code *)PTR_FUN_8c023330)(*(undefined4 *)((int)puVar2 + -0x14),ar5,ar6,ar7);
  uVar3 = (undefined4)in_dr14;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar2 + -0xc) = extraout_fr0;
    uVar3 = *(undefined4 *)((int)puVar2 + -0xc);
  }
  else {
    *(ulonglong *)((int)puVar2 + -0xc) = CONCAT44(extraout_fr0,extraout_fr1);
  }
  (*(code *)PTR_FUN_8c023330)(*(undefined4 *)((int)puVar2 + -0x18),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar2 + -0x10) = extraout_fr0_00;
    uVar4 = CONCAT44(*(undefined4 *)((int)puVar2 + -0x10),uVar3);
  }
  else {
    *(ulonglong *)((int)puVar2 + -0x10) = CONCAT44(extraout_fr0_00,extraout_fr1_00);
    uVar4 = *(undefined8 *)((int)puVar2 + -0x10);
  }
  if (in_FPSCR_PR == '\0' && (float)uVar4 < (float)((ulonglong)uVar4 >> 0x20)) {
    uVar1 = 1;
  }
  return uVar1;
}



/* FUN_8c023334 @ 8c023334 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c023334(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 in_dr0;
  undefined *puVar3;
  undefined *puVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined *apuStack_6c [4];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  puVar3 = (undefined *)((ulonglong)in_dr0 >> 0x20);
  uStack_c = 1;
  uVar1 = ar5;
  (*(code *)PTR_FUN_8c02345c)(ar5,ar5,ar6,ar7);
  puVar2 = puVar3;
  if (in_FPSCR_SZ == '\0') {
    puVar2 = apuStack_6c[0];
  }
  apuStack_6c[0] = puVar2;
  (*(code *)PTR_FUN_8c02345c)(ar4,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c023460)(ar4,uVar1,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c023464)(auStack_20,auStack_40,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c023468)(auStack_40,0xffffffff,ar6,ar7);
  (*(code *)PTR_FUN_8c023460)(ar5,uVar1,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c023464)(auStack_30,auStack_50,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c023468)(auStack_50,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_set_xyz_8c023470)(auStack_5c,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c023474)(auStack_20,auStack_5c,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c023478)(auStack_20,apuStack_6c,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c023468)(apuStack_6c,0xffffffff,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c02347c)(auStack_5c,0xffffffff,ar6,ar7);
  (*(code *)PTR_FUN_8c023480)(auStack_20,auStack_30,ar6,ar7);
  puVar2 = _DAT_8c02346c;
  puVar4 = PTR_Vec3_set_xyz_8c023470;
  if (in_FPSCR_SZ == '\0') {
    puVar2 = puVar3;
    puVar4 = _DAT_8c02346c;
  }
  if (in_FPSCR_PR == '\0' && (float)puVar4 < (float)puVar2) {
    uVar1 = 4;
  }
  else {
    uVar1 = 3;
  }
  (*(code *)PTR_Vec3_dtor_8c023468)(auStack_30,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c023468)(auStack_20,0xffffffff,ar6,ar7);
  return uVar1;
}



/* FUN_8c023484 @ 8c023484 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023484(undefined8 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *a5;
  undefined1 *a6;
  float fVar1;
  double dVar2;
  int a7;
  int a6_00;
  int a5_00;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  undefined1 auStack_74 [12];
  undefined4 uStack_68;
  undefined1 auStack_64 [12];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 auStack_4c [17];
  
  a5 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c023550)(auStack_74,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
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
  (*(code *)PTR_FUN_8c023554)(auStack_4c,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c023558,ar5[2]);
  }
  else {
    dVar2 = (double)CONCAT44(DAT_8c02355c,DAT_8c023558);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c02355c,fVar1);
  }
  else {
    dVar2 = (double)CONCAT44(PTR_FUN_8c023560,DAT_8c02355c);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    a7 = (int)(dVar2 / dVar2);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c023558,ar5[1]);
  }
  else {
    dVar2 = (double)CONCAT44(DAT_8c02355c,DAT_8c023558);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c02355c,fVar1);
  }
  else {
    dVar2 = (double)CONCAT44(PTR_FUN_8c023560,DAT_8c02355c);
  }
  if (in_FPSCR_PR == '\0') {
    a6_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    a6_00 = (int)(dVar2 / dVar2);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c023558,*ar5);
  }
  else {
    dVar2 = (double)CONCAT44(DAT_8c02355c,DAT_8c023558);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c02355c,fVar1);
  }
  else {
    dVar2 = (double)CONCAT44(PTR_FUN_8c023560,DAT_8c02355c);
  }
  if (in_FPSCR_PR == '\0') {
    a5_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    a5_00 = (int)(dVar2 / dVar2);
  }
  (*(code *)PTR_FUN_8c023560)(auStack_4c,a5_00,a6_00,a7);
  a6 = auStack_64;
  (*(code *)PTR_FUN_8c023564)(auStack_4c,&uStack_58,a6,a7);
  if (in_FPSCR_SZ != '\0') {
    uStack_68 = uStack_58;
  }
  (*(code *)PTR_Vec3_ctor_copy_8c023568)(in_stack_00000000,auStack_74,a6,a7);
  (*(code *)PTR_Vec3_dtor_8c02356c)(auStack_74,0xffffffff,a6,a7);
  return 0;
}



/* FUN_8c023570 @ 8c023570 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023570(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *a6;
  float fVar1;
  double dVar2;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_xf4;
  int a7;
  int a6_00;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [12];
  undefined4 uStack_64;
  undefined1 auStack_60 [12];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [17];
  
  uStack_7c = in_fr5;
  uStack_78 = in_xf4;
  uStack_74 = in_fr7;
  if (in_FPSCR_SZ == '\0') {
    uStack_7c = in_fr4;
    uStack_78 = in_fr5;
    uStack_74 = in_fr6;
  }
  (*(code *)PTR_Vec3_ctor_zero_8c023648)(auStack_70,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
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
  (*(code *)PTR_FUN_8c02364c)(auStack_48,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c023650,uStack_74);
  }
  else {
    dVar2 = (double)CONCAT44(DAT_8c023654,DAT_8c023650);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c023654,fVar1);
  }
  else {
    dVar2 = (double)CONCAT44(PTR_FUN_8c023658,DAT_8c023654);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    a7 = (int)(dVar2 / dVar2);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c023650,uStack_78);
  }
  else {
    dVar2 = (double)CONCAT44(DAT_8c023654,DAT_8c023650);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c023654,fVar1);
  }
  else {
    dVar2 = (double)CONCAT44(PTR_FUN_8c023658,DAT_8c023654);
  }
  if (in_FPSCR_PR == '\0') {
    a6_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    a6_00 = (int)(dVar2 / dVar2);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c023650,uStack_7c);
  }
  else {
    dVar2 = (double)CONCAT44(DAT_8c023654,DAT_8c023650);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c023654,fVar1);
  }
  else {
    dVar2 = (double)CONCAT44(PTR_FUN_8c023658,DAT_8c023654);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    a5 = (int)(dVar2 / dVar2);
  }
  (*(code *)PTR_FUN_8c023658)(auStack_48,a5,a6_00,a7);
  a6 = auStack_60;
  (*(code *)PTR_FUN_8c02365c)(auStack_48,&uStack_54,a6,a7);
  if (in_FPSCR_SZ != '\0') {
    uStack_64 = uStack_54;
  }
  (*(code *)PTR_Vec3_ctor_copy_8c023660)(in_stack_00000000,auStack_70,a6,a7);
  (*(code *)PTR_Vec3_dtor_8c023664)(auStack_70,0xffffffff,a6,a7);
  return 0;
}



/* FUN_8c023668 @ 8c023668 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023668(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *a6;
  float fVar2;
  double dVar3;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_xf4;
  int a7;
  int a6_00;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [17];
  
  if (in_FPSCR_SZ == '\0') {
    uStack_54 = *(undefined4 *)ar4;
    uStack_50 = *(undefined4 *)((int)ar4 + 4);
    uStack_4c = *(undefined4 *)(ar4 + 1);
    uStack_70 = in_fr4;
    uStack_6c = in_fr5;
    uStack_68 = in_fr6;
  }
  else {
    uStack_54 = (undefined4)*ar4;
    uStack_50 = (undefined4)*(undefined8 *)((int)ar4 + 4);
    uStack_4c = (undefined4)ar4[1];
    auStack_48[0] = (undefined4)((ulonglong)ar4[1] >> 0x20);
    uStack_70 = in_fr5;
    uStack_6c = in_xf4;
    uStack_68 = in_fr7;
  }
  (*(code *)PTR_FUN_8c023734)(auStack_48,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c023738,uStack_68);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c02373c,DAT_8c023738);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c02373c,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c023740,DAT_8c02373c);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a7 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c023738,uStack_6c);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c02373c,DAT_8c023738);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c02373c,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c023740,DAT_8c02373c);
  }
  if (in_FPSCR_PR == '\0') {
    a6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a6_00 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c023738,uStack_70);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c02373c,DAT_8c023738);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c02373c,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c023740,DAT_8c02373c);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  (*(code *)PTR_FUN_8c023740)(auStack_48,a5,a6_00,a7);
  a6 = &uStack_60;
  (*(code *)PTR_FUN_8c023744)(auStack_48,&uStack_54,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = uStack_60;
    *(undefined4 *)((int)ar4 + 4) = uStack_5c;
    *(undefined4 *)(ar4 + 1) = uStack_58;
  }
  else {
    *ar4 = CONCAT44(uStack_5c,uStack_60);
    *(ulonglong *)((int)ar4 + 4) = CONCAT44(uStack_58,uStack_5c);
    ar4[1] = CONCAT44(uStack_54,uStack_58);
  }
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c023748)(in_stack_00000000,ar4,a6,a7);
  return uVar1;
}



/* FUN_8c02374c @ 8c02374c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02374c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 a7;
  undefined4 unaff_r14;
  undefined8 *puVar3;
  float fVar4;
  ulonglong in_dr0;
  double dVar5;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 uVar7;
  undefined8 in_dr14;
  double dVar8;
  undefined8 in_xd14;
  undefined4 in_PR;
  int iVar9;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  float fVar6;
  
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
  *(undefined4 *)((int)puVar3 + -8) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar3 + -0x80) = in_fr4;
  }
  else {
    *(ulonglong *)((int)puVar3 + -0x80) = CONCAT44(in_fr4,in_fr5);
  }
  (*(code *)PTR_FUN_8c023880)(ar4,ar5,ar6,ar7);
  uVar7 = (undefined4)in_dr14;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x74) = (int)(in_dr0 >> 0x20);
    uVar7 = *(undefined4 *)((int)puVar3 + -0x74);
  }
  else {
    *(ulonglong *)((int)puVar3 + -0x74) = in_dr0;
  }
  (*(code *)PTR_FUN_8c023884)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x78) = (int)(in_dr0 >> 0x20);
    dVar8 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + -0x78),uVar7);
  }
  else {
    *(ulonglong *)((int)puVar3 + -0x78) = in_dr0;
    dVar8 = *(double *)((int)puVar3 + -0x78);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar3 + -0x54) = 0;
  }
  else {
    *(ulonglong *)((int)puVar3 + -0x54) = in_dr0 & 0xffffffff;
  }
  in_dr0 = in_dr0 & 0xffffffff;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar3 + -0x50) = 0;
  }
  else {
    *(ulonglong *)((int)puVar3 + -0x50) = in_dr0;
  }
  (*(code *)PTR_Vec3_length_sq_8c023888)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x7c) = (int)(in_dr0 >> 0x20);
    *(undefined4 *)((int)puVar3 + -0x4c) = *(undefined4 *)((int)puVar3 + -0x7c);
  }
  else {
    *(ulonglong *)((int)puVar3 + -0x7c) = in_dr0;
    *(undefined8 *)((int)puVar3 + -0x4c) = *(undefined8 *)((int)puVar3 + -0x7c);
  }
  (*(code *)PTR_FUN_8c02388c)((undefined1 *)((int)puVar3 + -0x48),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c023890,*(undefined4 *)((int)puVar3 + -0x80));
  }
  else {
    dVar5 = (double)CONCAT44(DAT_8c023894,DAT_8c023890);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c023894,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(PTR_FUN_8c023898,DAT_8c023894);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = (float)((ulonglong)dVar5 >> 0x20);
    fVar4 = SUB84(dVar5,0) / fVar6;
    dVar5 = (double)CONCAT44(fVar6,fVar4);
    iVar9 = (int)fVar4;
  }
  else {
    dVar5 = dVar5 / dVar5;
    iVar9 = (int)dVar5;
  }
  uVar7 = SUB84(dVar5,0);
  (*(code *)PTR_FUN_8c023898)((undefined1 *)((int)puVar3 + -0x48),iVar9,ar6,ar7);
  puVar2 = (undefined1 *)((int)puVar3 + -0x60);
  puVar1 = (undefined1 *)((int)puVar3 + -0x54);
  (*(code *)PTR_FUN_8c02389c)((undefined1 *)((int)puVar3 + -0x48),puVar1,puVar2,ar7);
  *(undefined4 *)((int)puVar3 + -0x54) = *(undefined4 *)((int)puVar3 + -0x60);
  *(undefined4 *)((int)puVar3 + -0x50) = *(undefined4 *)((int)puVar3 + -0x5c);
  *(undefined4 *)((int)puVar3 + -0x4c) = *(undefined4 *)((int)puVar3 + -0x58);
  (*(code *)PTR_FUN_8c02388c)((undefined1 *)((int)puVar3 + -0x48),puVar1,puVar2,ar7);
  a7 = 0;
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c023890,uVar7);
  }
  else {
    dVar5 = (double)CONCAT44(DAT_8c023894,DAT_8c023890);
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) * (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c023894,SUB84(dVar5,0));
  }
  else {
    dVar5 = (double)CONCAT44(PTR_FUN_8c023898,DAT_8c023894);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = (float)((ulonglong)dVar8 >> 0x20) / (float)((ulonglong)dVar5 >> 0x20);
    dVar8 = (double)CONCAT44(fVar4,SUB84(dVar8,0));
    iVar9 = (int)fVar4;
  }
  else {
    dVar8 = dVar8 / dVar5;
    fVar4 = (float)((ulonglong)dVar8 >> 0x20);
    iVar9 = (int)dVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c023890,SUB84(dVar5,0));
  }
  else {
    dVar5 = (double)CONCAT44(DAT_8c023894,DAT_8c023890);
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44(fVar4,SUB84(dVar8,0) * (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    dVar8 = dVar8 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c023894,SUB84(dVar5,0));
  }
  else {
    dVar5 = (double)CONCAT44(PTR_FUN_8c023898,DAT_8c023894);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar8,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    a5 = (int)(dVar8 / dVar5);
  }
  (*(code *)PTR_FUN_8c0238a0)((undefined1 *)((int)puVar3 + -0x48),a5,iVar9,0);
  puVar2 = (undefined1 *)((int)puVar3 + -0x60);
  puVar1 = (undefined1 *)((int)puVar3 + -0x54);
  (*(code *)PTR_FUN_8c02389c)((undefined1 *)((int)puVar3 + -0x48),puVar1,puVar2,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c0238a4)((undefined1 *)((int)puVar3 + -0x70),puVar1,puVar2,a7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar3 + -0x70) = *(undefined4 *)((int)puVar3 + -0x60);
    *(undefined4 *)((int)puVar3 + -0x6c) = *(undefined4 *)((int)puVar3 + -0x5c);
    *(undefined4 *)((int)puVar3 + -0x68) = *(undefined4 *)((int)puVar3 + -0x58);
  }
  else {
    *(undefined8 *)((int)puVar3 + -0x70) = *(undefined8 *)((int)puVar3 + -0x60);
    *(undefined8 *)((int)puVar3 + -0x6c) = *(undefined8 *)((int)puVar3 + -0x5c);
    *(undefined8 *)((int)puVar3 + -0x68) = *(undefined8 *)((int)puVar3 + -0x58);
  }
  (*(code *)PTR_Vec3_ctor_copy_8c0238ac)
            (*(undefined4 *)((int)puVar3 + DAT_8c0238a8 + -0x80),(undefined1 *)((int)puVar3 + -0x70)
             ,puVar2,a7);
  (*(code *)PTR_Vec3_dtor_8c0238b0)((undefined1 *)((int)puVar3 + -0x70),0xffffffff,puVar2,a7);
  return 0;
}



/* FUN_8c0238b4 @ 8c0238b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0238b4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *a5;
  undefined4 *a6;
  float fVar2;
  undefined8 in_dr0;
  undefined4 uVar4;
  double dVar3;
  undefined4 in_fr5;
  undefined4 in_fr4;
  int a7;
  int a6_00;
  int iVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 auStack_88 [4];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  auStack_88[0] = in_fr5;
  if (in_FPSCR_SZ == '\0') {
    auStack_88[0] = in_fr4;
  }
  (*(code *)PTR_Vec3_set_zero_8c0239dc)(&uStack_14,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0239e0)(ar4,ar5,ar6,ar7);
  uStack_14 = (undefined4)in_dr0;
  uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uVar1 = uVar4;
  if (in_FPSCR_SZ == '\0') {
    uVar1 = auStack_88[3];
    uStack_14 = uVar4;
    uVar4 = uStack_10;
  }
  uStack_10 = uVar4;
  auStack_88[3] = uVar1;
  auStack_88[2] = uStack_14;
  (*(code *)PTR_FUN_8c0239e4)(ar4,ar5,ar6,ar7);
  uStack_58 = (undefined4)in_dr0;
  auStack_88[1] = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_60 = 0;
    uStack_58 = 0x3f800000;
  }
  else {
    auStack_54[0] = 0x3f800000;
    uStack_60 = uStack_58;
    auStack_88[2] = auStack_88[1];
    auStack_88[1] = uStack_58;
    uStack_c = auStack_88[1];
  }
  uStack_5c = uStack_60;
  uStack_10 = auStack_88[1];
  (*(code *)PTR_FUN_8c0239e8)(auStack_54,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0239ec,uStack_c);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0239f0,DAT_8c0239ec);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0239f0,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0239f4,DAT_8c0239f0);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a7 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0239ec,uStack_10);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0239f0,DAT_8c0239ec);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0239f0,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0239f4,DAT_8c0239f0);
  }
  if (in_FPSCR_PR == '\0') {
    a6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a6_00 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0239ec,uStack_14);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0239f0,DAT_8c0239ec);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0239f0,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0239f4,DAT_8c0239f0);
  }
  if (in_FPSCR_PR == '\0') {
    iVar5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    iVar5 = (int)(dVar3 / dVar3);
  }
  (*(code *)PTR_FUN_8c0239f4)(auStack_54,iVar5,a6_00,a7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0239ec,auStack_88[0]);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0239f0,DAT_8c0239ec);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0239f0,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0239f4,DAT_8c0239f0);
  }
  if (in_FPSCR_PR == '\0') {
    iVar5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    iVar5 = (int)(dVar3 / dVar3);
  }
  (*(code *)PTR_FUN_8c0239f8)(auStack_54,iVar5,a6_00,a7);
  a6 = &uStack_6c;
  a5 = &uStack_60;
  (*(code *)PTR_FUN_8c0239fc)(auStack_54,a5,a6,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c023a00)(auStack_88 + 3,a5,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    auStack_88[3] = uStack_6c;
    uStack_78 = uStack_68;
    uStack_74 = uStack_64;
  }
  else {
    uStack_70 = uStack_60;
  }
  (*(code *)PTR_Vec3_ctor_copy_8c023a08)
            (*(undefined4 *)((int)auStack_88 + DAT_8c023a04),auStack_88 + 3,a6,a7);
  (*(code *)PTR_Vec3_dtor_8c023a0c)(auStack_88 + 3,0xffffffff,a6,a7);
  (*(code *)PTR_object_dtor_delete_8c023a10)(&uStack_14,0xffffffff,a6,a7);
  return 0;
}



/* Vec3_assign @ 8c023a14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * Vec3_assign(undefined8 *ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = *(undefined4 *)ar5;
    *(undefined4 *)((int)ar4 + 4) = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 1) = *(undefined4 *)(ar5 + 1);
  }
  else {
    *ar4 = *ar5;
    *(undefined8 *)((int)ar4 + 4) = *(undefined8 *)((int)ar5 + 4);
    ar4[1] = ar5[1];
  }
  return ar4;
}



/* Vec3_add @ 8c023a34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Vec3_add(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  (*(code *)PTR_Vec3_ctor_zero_8c023a94)(&fStack_1c,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fStack_1c = SUB84(dVar1,0) + (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar1 + dVar1,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),*(undefined4 *)((int)ar4 + 4));
  }
  else {
    fStack_1c = (float)in_xd0;
    in_xd0 = *(undefined8 *)((int)ar4 + 4);
    dVar1 = *(double *)((int)ar5 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_18 = SUB84(dVar1,0) + (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_18 = SUB84(dVar1 + dVar1,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)(ar4 + 1));
  }
  else {
    fStack_18 = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = ar5[1];
  }
  if (in_FPSCR_PR == '\0') {
    fStack_14 = SUB84(dVar1,0) + (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_14 = SUB84(dVar1 + dVar1,0);
  }
  if (in_FPSCR_SZ != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (*(code *)PTR_Vec3_ctor_copy_8c023a98)(in_stack_00000000,&fStack_1c,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c023a9c)(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c023aa0 @ 8c023aa0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

float * FUN_8c023aa0(float *ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)ar5,*ar4);
  }
  else {
    in_xd0 = *(undefined8 *)ar4;
    dVar2 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *ar4 = fVar1;
    dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),ar4[1]);
  }
  else {
    *(undefined8 *)ar4 = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 1);
    dVar2 = *(double *)((int)ar5 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[1] = fVar1;
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),ar4[2]);
  }
  else {
    *(undefined8 *)(ar4 + 1) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 2);
    dVar2 = ar5[1];
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[2] = fVar1;
  }
  else {
    *(undefined8 *)(ar4 + 2) = in_xd0;
  }
  return ar4;
}



/* Vec3_sub @ 8c023ae0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Vec3_sub(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  (*(code *)PTR_Vec3_ctor_zero_8c023b40)(&fStack_1c,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fStack_1c = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar1 - dVar1,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),*(undefined4 *)((int)ar4 + 4));
  }
  else {
    fStack_1c = (float)in_xd0;
    in_xd0 = *(undefined8 *)((int)ar4 + 4);
    dVar1 = *(double *)((int)ar5 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_18 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_18 = SUB84(dVar1 - dVar1,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)(ar4 + 1));
  }
  else {
    fStack_18 = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = ar5[1];
  }
  if (in_FPSCR_PR == '\0') {
    fStack_14 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_14 = SUB84(dVar1 - dVar1,0);
  }
  if (in_FPSCR_SZ != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (*(code *)PTR_Vec3_ctor_copy_8c023b44)(in_stack_00000000,&fStack_1c,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c023b48)(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c023b4c @ 8c023b4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

float * FUN_8c023b4c(float *ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)ar5,*ar4);
  }
  else {
    in_xd0 = *(undefined8 *)ar4;
    dVar2 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) - (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 - dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *ar4 = fVar1;
    dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),ar4[1]);
  }
  else {
    *(undefined8 *)ar4 = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 1);
    dVar2 = *(double *)((int)ar5 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) - (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 - dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[1] = fVar1;
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),ar4[2]);
  }
  else {
    *(undefined8 *)(ar4 + 1) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 2);
    dVar2 = ar5[1];
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) - (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 - dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[2] = fVar1;
  }
  else {
    *(undefined8 *)(ar4 + 2) = in_xd0;
  }
  return ar4;
}



/* Vec3_scale @ 8c023b8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Vec3_scale(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  (*(code *)PTR_Vec3_ctor_zero_8c023be8)(&fStack_1c,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fStack_1c = SUB84(dVar1,0) * (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar1 * dVar1,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar4 + 4));
  }
  else {
    fStack_1c = (float)in_xd0;
    in_xd0 = *(undefined8 *)((int)ar4 + 4);
    dVar1 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fStack_18 = SUB84(dVar1,0) * (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_18 = SUB84(dVar1 * dVar1,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar4 + 1));
  }
  else {
    fStack_18 = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fStack_14 = SUB84(dVar1,0) * (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_14 = SUB84(dVar1 * dVar1,0);
  }
  if (in_FPSCR_SZ != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (*(code *)PTR_Vec3_ctor_copy_8c023bec)(in_stack_00000000,&fStack_1c,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c023bf0)(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c023bf4 @ 8c023bf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

float * FUN_8c023bf4(float *ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)ar5,*ar4);
  }
  else {
    in_xd0 = *(undefined8 *)ar4;
    dVar2 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *ar4 = fVar1;
    dVar2 = (double)CONCAT44(*(undefined4 *)ar5,ar4[1]);
  }
  else {
    *(undefined8 *)ar4 = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 1);
    dVar2 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[1] = fVar1;
    dVar2 = (double)CONCAT44(*(undefined4 *)ar5,ar4[2]);
  }
  else {
    *(undefined8 *)(ar4 + 1) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 2);
    dVar2 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[2] = fVar1;
  }
  else {
    *(undefined8 *)(ar4 + 2) = in_xd0;
  }
  return ar4;
}



/* FUN_8c023c30 @ 8c023c30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023c30(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  (*(code *)PTR_Vec3_ctor_zero_8c023c8c)(&fStack_1c,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fStack_1c = SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar1 / dVar1,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar4 + 4));
  }
  else {
    fStack_1c = (float)in_xd0;
    in_xd0 = *(undefined8 *)((int)ar4 + 4);
    dVar1 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fStack_18 = SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_18 = SUB84(dVar1 / dVar1,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar4 + 1));
  }
  else {
    fStack_18 = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fStack_14 = SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_14 = SUB84(dVar1 / dVar1,0);
  }
  if (in_FPSCR_SZ != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (*(code *)PTR_Vec3_ctor_copy_8c023c90)(in_stack_00000000,&fStack_1c,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c023c94)(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c023c98 @ 8c023c98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

float * FUN_8c023c98(float *ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)ar5,*ar4);
  }
  else {
    in_xd0 = *(undefined8 *)ar4;
    dVar2 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 / dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *ar4 = fVar1;
    dVar2 = (double)CONCAT44(*(undefined4 *)ar5,ar4[1]);
  }
  else {
    *(undefined8 *)ar4 = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 1);
    dVar2 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 / dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[1] = fVar1;
    dVar2 = (double)CONCAT44(*(undefined4 *)ar5,ar4[2]);
  }
  else {
    *(undefined8 *)(ar4 + 1) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 2);
    dVar2 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 / dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[2] = fVar1;
  }
  else {
    *(undefined8 *)(ar4 + 2) = in_xd0;
  }
  return ar4;
}



/* FUN_8c023cd4 @ 8c023cd4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023ce8) */
/* WARNING: Removing unreachable block (ram,0x8c023cd8) */
/* WARNING: Removing unreachable block (ram,0x8c023cf4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c023cd4(undefined4 *ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    uVar1 = CONCAT44(*(undefined4 *)ar5,*ar4);
  }
  else {
    uVar1 = *ar5;
  }
  if ((float)uVar1 == (float)((ulonglong)uVar1 >> 0x20)) {
    if (in_FPSCR_SZ == '\0') {
      uVar1 = CONCAT44(*(undefined4 *)((int)ar5 + 4),ar4[1]);
    }
    else {
      uVar1 = *(undefined8 *)((int)ar5 + 4);
    }
    if ((float)uVar1 == (float)((ulonglong)uVar1 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        uVar1 = CONCAT44(*(undefined4 *)(ar5 + 1),ar4[2]);
      }
      else {
        uVar1 = ar5[1];
      }
      if ((float)uVar1 == (float)((ulonglong)uVar1 >> 0x20)) {
        return 1;
      }
    }
  }
  return 0;
}



/* FUN_8c023d04 @ 8c023d04 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c023d18) */
/* WARNING: Removing unreachable block (ram,0x8c023d08) */
/* WARNING: Removing unreachable block (ram,0x8c023d24) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c023d04(undefined4 *ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    uVar1 = CONCAT44(*(undefined4 *)ar5,*ar4);
  }
  else {
    uVar1 = *ar5;
  }
  if ((float)uVar1 == (float)((ulonglong)uVar1 >> 0x20)) {
    if (in_FPSCR_SZ == '\0') {
      uVar1 = CONCAT44(*(undefined4 *)((int)ar5 + 4),ar4[1]);
    }
    else {
      uVar1 = *(undefined8 *)((int)ar5 + 4);
    }
    if ((float)uVar1 == (float)((ulonglong)uVar1 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        uVar1 = CONCAT44(*(undefined4 *)(ar5 + 1),ar4[2]);
      }
      else {
        uVar1 = ar5[1];
      }
      if ((float)uVar1 == (float)((ulonglong)uVar1 >> 0x20)) {
        return 0;
      }
    }
  }
  return 1;
}



/* Vec3_set_zero @ 8c023d34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

ulonglong * Vec3_set_zero(ulonglong *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 1) = 0;
    *(undefined4 *)((int)ar4 + 4) = 0;
    *(undefined4 *)ar4 = 0;
  }
  else {
    ar4[1] = (ulonglong)in_fr1;
    *(ulonglong *)((int)ar4 + 4) = (ulonglong)in_fr1;
    *ar4 = (ulonglong)in_fr1;
  }
  return ar4;
}



/* Vec3_set_xyz @ 8c023d68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * Vec3_set_xyz(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = in_fr4;
    *(undefined4 *)((int)ar4 + 4) = in_fr5;
    *(undefined4 *)(ar4 + 1) = in_fr6;
  }
  else {
    *ar4 = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)((int)ar4 + 4) = in_xd4;
    ar4[1] = CONCAT44(in_fr6,in_fr7);
  }
  return ar4;
}



/* FUN_8c023d7c @ 8c023d7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c023d7c(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = in_fr4;
    *(undefined4 *)((int)ar4 + 4) = in_fr5;
    *(undefined4 *)(ar4 + 1) = in_fr6;
  }
  else {
    *ar4 = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)((int)ar4 + 4) = in_xd4;
    ar4[1] = CONCAT44(in_fr6,in_fr7);
  }
  return (int)ar4 + 4;
}



/* vec3_copy_8c023d8c @ 8c023d8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * vec3_copy_8c023d8c(undefined8 *ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = *(undefined4 *)ar5;
    *(undefined4 *)((int)ar4 + 4) = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 1) = *(undefined4 *)(ar5 + 1);
  }
  else {
    *ar4 = *ar5;
    *(undefined8 *)((int)ar4 + 4) = *(undefined8 *)((int)ar5 + 4);
    ar4[1] = ar5[1];
  }
  return ar4;
}



/* FUN_8c023dac @ 8c023dac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c023dac(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 1) = 0x3f800000;
    *(undefined4 *)((int)ar4 + 4) = 0x3f800000;
    *(undefined4 *)ar4 = 0x3f800000;
  }
  else {
    ar4[1] = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)((int)ar4 + 4) = CONCAT44(0x3f800000,in_fr1);
    *ar4 = CONCAT44(0x3f800000,in_fr1);
  }
  return ar4;
}



/* FUN_8c023de0 @ 8c023de0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c023de0(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = in_fr4;
    *(undefined4 *)((int)ar4 + 4) = in_fr5;
    *(undefined4 *)(ar4 + 1) = in_fr6;
  }
  else {
    *ar4 = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)((int)ar4 + 4) = in_xd4;
    ar4[1] = CONCAT44(in_fr6,in_fr7);
  }
  return ar4;
}



/* FUN_8c023df4 @ 8c023df4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c023df4(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = in_fr4;
    *(undefined4 *)((int)ar4 + 4) = in_fr5;
    *(undefined4 *)(ar4 + 1) = in_fr6;
  }
  else {
    *ar4 = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)((int)ar4 + 4) = in_xd4;
    ar4[1] = CONCAT44(in_fr6,in_fr7);
  }
  return (int)ar4 + 4;
}



/* FUN_8c023e04 @ 8c023e04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c023e04(undefined8 *ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = *(undefined4 *)ar5;
    *(undefined4 *)((int)ar4 + 4) = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 1) = *(undefined4 *)(ar5 + 1);
  }
  else {
    *ar4 = *ar5;
    *(undefined8 *)((int)ar4 + 4) = *(undefined8 *)((int)ar5 + 4);
    ar4[1] = ar5[1];
  }
  return ar4;
}



/* FUN_8c023e24 @ 8c023e24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c023e24(undefined8 *ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = *(undefined4 *)ar5;
    *(undefined4 *)((int)ar4 + 4) = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 1) = *(undefined4 *)(ar5 + 1);
  }
  else {
    *ar4 = *ar5;
    *(undefined8 *)((int)ar4 + 4) = *(undefined8 *)((int)ar5 + 4);
    ar4[1] = ar5[1];
  }
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
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c023e78)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c023e7c @ 8c023e7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023e7c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c023e94)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c023e98 @ 8c023e98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023e98(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c023eb8)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c023ebc @ 8c023ebc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023ebc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined4 in_fr4;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c023eec,in_fr4);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c023ef0,DAT_8c023eec);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c023ef0,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c023ef4,DAT_8c023ef0);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  uVar1 = (*(code *)PTR_FUN_8c023ef4)(ar4,a5,ar6,ar7);
  return uVar1;
}



/* FUN_8c023ef8 @ 8c023ef8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023ef8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined4 in_fr4;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c023f28,in_fr4);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c023f2c,DAT_8c023f28);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c023f2c,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c023f30,DAT_8c023f2c);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  uVar1 = (*(code *)PTR_FUN_8c023f30)(ar4,a5,ar6,ar7);
  return uVar1;
}



/* FUN_8c023f34 @ 8c023f34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023f34(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined4 in_fr4;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c023f64,in_fr4);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c023f68,DAT_8c023f64);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c023f68,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c023f6c,DAT_8c023f68);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  uVar1 = (*(code *)PTR_FUN_8c023f6c)(ar4,a5,ar6,ar7);
  return uVar1;
}



/* FUN_8c023f70 @ 8c023f70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023f70(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
    dVar3 = (double)CONCAT44(DAT_8c023fd0,in_fr6);
    uStack_10 = in_fr4;
    uStack_c = in_fr5;
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c023fd4,DAT_8c023fd0);
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
    dVar3 = (double)CONCAT44(DAT_8c023fd4,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c023fd8,DAT_8c023fd4);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a7 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c023fd0,uStack_c);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c023fd4,DAT_8c023fd0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c023fd4,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c023fd8,DAT_8c023fd4);
  }
  if (in_FPSCR_PR == '\0') {
    a6 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a6 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c023fd0,uStack_10);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c023fd4,DAT_8c023fd0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c023fd4,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c023fd8,DAT_8c023fd4);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  uVar1 = (*(code *)PTR_FUN_8c023fd8)(ar4,a5,a6,a7);
  return uVar1;
}



/* FUN_8c023fdc @ 8c023fdc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023fdc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c02400c)(ar4,ar5,ar6,ar7);
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

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0240bc(double *ar4,double *ar5,double *ar6,undefined4 ar7)

{
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar1;
  undefined4 in_fr1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined4 in_fr3;
  undefined8 in_dr12;
  undefined8 in_dr14;
  double dVar6;
  undefined4 uVar7;
  double in_xd0;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar1 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar1 = (undefined8 *)auStack_20;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar1 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar1 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar1 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar1 + -0x10) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)ar5,(int)in_dr14);
    dVar4 = (double)CONCAT44(*(undefined4 *)ar6,in_fr1);
  }
  else {
    dVar6 = *ar5;
    dVar4 = *ar6;
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * (float)((ulonglong)dVar4 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 * dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar6 + 4),*(undefined4 *)((int)ar5 + 4));
  }
  else {
    in_xd0 = *(double *)((int)ar5 + 4);
    dVar4 = *(double *)((int)ar6 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                             SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar4 * dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar6 + 1),*(undefined4 *)(ar5 + 1));
  }
  else {
    in_xd0 = ar5[1];
    dVar4 = ar6[1];
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = (float)((ulonglong)dVar4 >> 0x20);
    fVar2 = SUB84(dVar4,0) * fVar3;
    dVar4 = (double)CONCAT44(fVar3,fVar2);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + fVar2,SUB84(dVar6,0));
  }
  else {
    dVar4 = dVar4 * dVar4;
    dVar6 = dVar6 + dVar4;
  }
  uVar7 = SUB84(dVar4,0);
  (*(code *)PTR_Vec3_ctor_zero_8c0241b8)((undefined1 *)((int)puVar1 + -0x20),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)ar5,in_fr3);
    dVar5 = (double)CONCAT44(*(undefined4 *)ar4,uVar7);
  }
  else {
    dVar4 = *ar5;
    dVar5 = *ar4;
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),*(undefined4 *)((int)ar5 + 4));
  }
  else {
    in_xd0 = *(double *)((int)ar5 + 4);
    dVar5 = *(double *)((int)ar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) +
                             SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + dVar5 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),*(undefined4 *)(ar5 + 1));
  }
  else {
    in_xd0 = ar5[1];
    dVar5 = ar4[1];
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) -
                             ((float)((ulonglong)dVar4 >> 0x20) + fVar2),SUB84(dVar6,0));
  }
  else {
    fVar2 = SUB84(dVar5 * dVar5,0);
    dVar6 = dVar6 - (dVar4 + dVar5 * dVar5);
  }
  uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)ar5,uVar7);
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 2),fVar2);
  }
  else {
    dVar4 = *ar5;
    dVar5 = ar4[2];
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x14),*(undefined4 *)((int)ar5 + 4));
  }
  else {
    in_xd0 = *(double *)((int)ar5 + 4);
    dVar5 = *(double *)((int)ar4 + 0x14);
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) +
                             SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + dVar5 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 3),*(undefined4 *)(ar5 + 1));
  }
  else {
    in_xd0 = ar5[1];
    dVar5 = ar4[3];
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = (float)((ulonglong)dVar5 >> 0x20);
    fVar2 = SUB84(dVar5,0) * fVar3;
    dVar5 = (double)CONCAT44(fVar3,fVar2);
    fVar2 = SUB84(dVar4,0) / ((float)((ulonglong)dVar4 >> 0x20) + fVar2);
  }
  else {
    dVar5 = dVar5 * dVar5;
    fVar2 = SUB84((dVar4 + dVar5) / (dVar4 + dVar5),0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(uVar7,fVar2);
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),*(undefined4 *)(ar4 + 2));
  }
  else {
    in_xd0 = ar4[2];
  }
  fVar2 = SUB84(dVar6,0);
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar5,0) * fVar2;
  }
  else {
    fVar3 = SUB84(dVar5 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)ar4,fVar3);
  }
  else {
    dVar4 = *ar4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = (float)((ulonglong)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
  }
  else {
    dVar4 = dVar4 + dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar1 + -0x20) = SUB84(dVar4,0);
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)((int)ar4 + 0x14));
  }
  else {
    *(double *)((int)puVar1 + -0x20) = in_xd0;
    in_xd0 = *(double *)((int)ar4 + 0x14);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) * fVar2;
  }
  else {
    fVar3 = SUB84(dVar4 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),fVar3);
  }
  else {
    dVar4 = *(double *)((int)ar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = (float)((ulonglong)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
  }
  else {
    dVar4 = dVar4 + dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar1 + -0x1c) = SUB84(dVar4,0);
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 3));
  }
  else {
    *(double *)((int)puVar1 + -0x1c) = in_xd0;
    in_xd0 = ar4[3];
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar4,0) * fVar2;
  }
  else {
    fVar2 = SUB84(dVar4 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),fVar2);
  }
  else {
    dVar6 = ar4[1];
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar6 + dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)puVar1 + -0x18) = fVar2;
  }
  else {
    *(double *)((int)puVar1 + -0x18) = in_xd0;
  }
  (*(code *)PTR_Vec3_ctor_copy_8c0241bc)
            (*(undefined4 *)((int)puVar1 + 0x10),(undefined1 *)((int)puVar1 + -0x20),ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0241c0)((undefined1 *)((int)puVar1 + -0x20),0xffffffff,ar6,ar7);
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

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0242e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c024304)(DAT_8c024300,ar5,ar6,ar7);
  *DAT_8c024308 = 0;
  return 0;
}



/* FUN_8c02430c @ 8c02430c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02430c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c02433c)(*DAT_8c024334 * 0x40 + DAT_8c024338,ar4,ar6,ar7);
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
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0243fc)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c024400)(ar4 + 0x4c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c024408)(ar4 + DAT_8c024404,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c024410)(ar4 + DAT_8c02440c,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c024414 + ar4) = 1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c024418) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c024418) = CONCAT44(0x3f800000,extraout_fr1);
  }
  return ar4;
}



/* FUN_8c02441c @ 8c02441c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02441c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c02446c)(ar4 + 0x38,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c024470)(ar4 + 0x2c,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c024474)(ar4 + 0x1c,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c024478)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c02447c @ 8c02447c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c02447c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_Vec3_set_zero_8c0244f8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0244f8)(ar4 + 0xc,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0244f8)(ar4 + 0x18,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x24) = 0;
    *(undefined4 *)(ar4 + 0x28) = DAT_8c0244fc;
    *(undefined4 *)(ar4 + 0xc) = DAT_8c024500;
    *(undefined4 *)(ar4 + 0x10) = DAT_8c024500;
    *(undefined4 *)(ar4 + 0x14) = DAT_8c024500;
    *(undefined4 *)(ar4 + 0x18) = DAT_8c024504;
    *(undefined4 *)(ar4 + 0x1c) = DAT_8c024504;
    *(undefined4 *)(ar4 + 0x20) = DAT_8c024504;
  }
  else {
    *(ulonglong *)(ar4 + 0x24) = (ulonglong)in_fr1;
    *(ulonglong *)(ar4 + 0x28) = CONCAT44(DAT_8c024500,DAT_8c0244fc);
    *(ulonglong *)(ar4 + 0xc) = CONCAT44(DAT_8c024504,DAT_8c024500);
    *(ulonglong *)(ar4 + 0x10) = CONCAT44(DAT_8c024504,DAT_8c024500);
    *(ulonglong *)(ar4 + 0x14) = CONCAT44(DAT_8c024504,DAT_8c024500);
    *(ulonglong *)(ar4 + 0x18) = CONCAT44(_LAB_8c024508,DAT_8c024504);
    *(ulonglong *)(ar4 + 0x1c) = CONCAT44(_LAB_8c024508,DAT_8c024504);
    *(ulonglong *)(ar4 + 0x20) = CONCAT44(_LAB_8c024508,DAT_8c024504);
  }
  return ar4;
}



/* FUN_8c02452c @ 8c02452c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c02452c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 in_fr1;
  undefined8 uVar4;
  ulonglong uVar5;
  char in_FPSCR_SZ;
  undefined8 uStack_14;
  
  (*(code *)PTR_FUN_8c0246d0)
            (ar4 + 8,PTR_LAB_8c0246cc,PTR_free_if_nonnull_wrap_0247e0_8c0246c8,0x14);
  (*(code *)PTR_FUN_8c0246d0)
            (ar4 + 0x12,PTR_LAB_8c0246cc,PTR_free_if_nonnull_wrap_0247e0_8c0246c8,0x14);
  uVar3 = 4;
  puVar1 = PTR_FUN_8c0246d8;
  puVar2 = PTR_free_if_nonnull_wrap_016bfc_8c0246d4;
  (*(code *)PTR_FUN_8c0246d0)
            (ar4 + 0x1c,PTR_FUN_8c0246d8,PTR_free_if_nonnull_wrap_016bfc_8c0246d4,4);
  (*(code *)PTR_FUN_8c0246d8)(ar4 + 0x1d,puVar1,puVar2,uVar3);
  (*(code *)PTR_FUN_8c0246d0)
            (ar4 + 0x1e,PTR_FUN_8c0246e0,PTR_free_if_nonnull_wrap_0153e4_8c0246dc,8);
  uVar3 = 8;
  puVar1 = PTR_FUN_8c0246e0;
  puVar2 = PTR_free_if_nonnull_wrap_0153e4_8c0246dc;
  (*(code *)PTR_FUN_8c0246d0)
            ((int)ar4 + DAT_8c0246e4,PTR_FUN_8c0246e0,PTR_free_if_nonnull_wrap_0153e4_8c0246dc,8);
  (*(code *)PTR_FUN_8c0246e0)((int)ar4 + DAT_8c0246e8,puVar1,puVar2,uVar3);
  (*(code *)PTR_FUN_8c0246f0)((int)ar4 + DAT_8c0246ec,puVar1,puVar2,uVar3);
  (*(code *)PTR_Vec3_ctor_zero_8c0246f8)((int)ar4 + DAT_8c0246f4,puVar1,puVar2,uVar3);
  (*(code *)PTR_FUN_8c024700)((int)ar4 + DAT_8c0246fc,puVar1,puVar2,uVar3);
  *ar4 = 0;
  ar4[2] = 0;
  ar4[1] = 0;
  ar4[3] = 0;
  ar4[5] = 0;
  ar4[4] = 0;
  ar4[6] = 0;
  ar4[7] = 0;
  *(undefined4 *)(DAT_8c024704 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c024708 + (int)ar4) = 0;
  *(undefined2 *)(DAT_8c02470c + (int)ar4) = 0;
  *(undefined2 *)(DAT_8c024710 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c024714 + (int)ar4) = 0;
  uStack_14 = CONCAT44(0x3f800000,in_fr1);
  if (in_FPSCR_SZ == '\0') {
    uStack_14 = 0x3f800000;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c024718) = (undefined4)uStack_14;
    uVar4 = CONCAT44((undefined4)uStack_14,in_fr1);
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c024718) = uStack_14;
    uVar4 = uStack_14;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c02471c) = (undefined4)uStack_14;
    uStack_14 = CONCAT44((undefined4)uStack_14,(int)uVar4);
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c02471c) = uStack_14;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(DAT_8c024724,(int)uStack_14);
    *(undefined4 *)((int)ar4 + DAT_8c024720) = DAT_8c024724;
  }
  else {
    uVar4 = CONCAT44(DAT_8c024728,DAT_8c024724);
    *(undefined8 *)((int)ar4 + DAT_8c024720) = uVar4;
  }
  *(undefined2 *)(DAT_8c024728 + (int)ar4) = 0;
  uVar3 = (undefined4)uVar4;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c02472c) = 0x3f800000;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c02472c) = CONCAT44(0x3f800000,uVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c024730) = 0x3f800000;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c024730) = CONCAT44(0x3f800000,uVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c024734) = 0x3f800000;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c024734) = CONCAT44(0x3f800000,uVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar5 = CONCAT44(DAT_8c02473c,uVar3);
    *(undefined4 *)((int)ar4 + DAT_8c024738) = DAT_8c02473c;
  }
  else {
    uVar5 = CONCAT44(DAT_8c024740,DAT_8c02473c);
    *(ulonglong *)((int)ar4 + DAT_8c024738) = uVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c024740) = 0;
  }
  else {
    *(ulonglong *)((int)ar4 + DAT_8c024740) = uVar5 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c024744) = 0x3f800000;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c024744) = CONCAT44(0x3f800000,(int)uVar5);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c024748) = DAT_8c02474c;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c024748) = CONCAT44(DAT_8c024750,DAT_8c02474c);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c024750) = DAT_8c024754;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c024750) = CONCAT44(_FUN_8c024758,DAT_8c024754);
  }
  return ar4;
}



/* FUN_8c024758 @ 8c024758 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c024758(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_object_dtor_delete_8c0247a8)(ar4 + 0x18,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c0247a8)(ar4 + 0xc,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c0247a8)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0247ac)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_0247b0 @ 8c0247b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0247b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c0247dc)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* free_if_nonnull_wrap_0247e0 @ 8c0247e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0247e0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c02480c)(ar4,ar5,ar6,ar7);
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

/* WARNING: Unknown calling convention */

int s_GRAPHICS_COMMON_02496e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 a7;
  undefined8 *puVar5;
  char in_FPSCR_SZ;
  
  *DAT_8c024cb0 = PTR_DAT_8c024cb4;
  DAT_8c024cb0[1] = DAT_8c024cb8;
  DAT_8c024cb0[2] = PTR_DAT_8c024cbc;
  DAT_8c024cb0[3] = 6;
  DAT_8c024cb0[4] = PTR_DAT_8c024cc0;
  DAT_8c024cb0[5] = 0x10;
  DAT_8c024cb0[6] = PTR_DAT_8c024cc4;
  DAT_8c024cb0[7] = 6;
  DAT_8c024cb0[8] = PTR_DAT_8c024cc8;
  DAT_8c024cb0[9] = 0x10;
  DAT_8c024cb0[10] = PTR_DAT_8c024ccc;
  DAT_8c024cb0[0xb] = 6;
  DAT_8c024cb0[0xc] = PTR_DAT_8c024cd0;
  DAT_8c024cb0[0xd] = 0x10;
  DAT_8c024cb0[0xe] = PTR_DAT_8c024cd4;
  DAT_8c024cb0[0xf] = 8;
  DAT_8c024cb0[0x10] = PTR_DAT_8c024cd8;
  DAT_8c024cb0[0x11] = DAT_8c024cdc;
  DAT_8c024cb0[0x12] = PTR_DAT_8c024ce0;
  DAT_8c024cb0[0x13] = PTR_DAT_8c024ce4;
  DAT_8c024cb0[0x14] = PTR_DAT_8c024ce8;
  *(undefined2 *)(DAT_8c024cec + (int)DAT_8c024cb0) = 10;
  *(undefined2 *)(DAT_8c024cf0 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024cf4 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024cf8 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024cfc + (int)DAT_8c024cb0) = 5;
  DAT_8c024cb0[0x15] = PTR_DAT_8c024d00;
  DAT_8c024cb0[0x16] = PTR_DAT_8c024d04;
  DAT_8c024cb0[0x17] = PTR_DAT_8c024d08;
  DAT_8c024cb0[0x18] = PTR_DAT_8c024d0c;
  DAT_8c024cb0[0x19] = PTR_DAT_8c024d10;
  *(undefined2 *)(DAT_8c024d14 + (int)DAT_8c024cb0) = 10;
  *(undefined2 *)(DAT_8c024d18 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024d1c + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024d20 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024d24 + (int)DAT_8c024cb0) = 5;
  DAT_8c024cb0[0x1a] = PTR_DAT_8c024d28;
  DAT_8c024cb0[0x1b] = PTR_DAT_8c024d2c;
  DAT_8c024cb0[0x1c] = PTR_DAT_8c024d30;
  DAT_8c024cb0[0x1d] = PTR_DAT_8c024d28;
  DAT_8c024cb0[0x1e] = PTR_DAT_8c024d34;
  *(undefined2 *)(DAT_8c024d38 + (int)DAT_8c024cb0) = 0x1e;
  *(undefined2 *)(DAT_8c024d3c + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024d40 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024d44 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024d48 + (int)DAT_8c024cb0) = 5;
  DAT_8c024cb0[0x1f] = PTR_DAT_8c024d4c;
  *(undefined **)(DAT_8c024d50 + (int)DAT_8c024cb0) = PTR_DAT_8c024d54;
  *(undefined **)(DAT_8c024d58 + (int)DAT_8c024cb0) = PTR_DAT_8c024d5c;
  *(undefined **)(DAT_8c024d60 + (int)DAT_8c024cb0) = PTR_DAT_8c024d4c;
  *(undefined **)(DAT_8c024d64 + (int)DAT_8c024cb0) = PTR_DAT_8c024d68;
  *(undefined2 *)(DAT_8c024d6c + (int)DAT_8c024cb0) = 0xf;
  *(undefined2 *)(DAT_8c024d70 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024d74 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024d78 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024d7c + (int)DAT_8c024cb0) = 5;
  *(undefined **)(DAT_8c024d80 + (int)DAT_8c024cb0) = PTR_DAT_8c024d84;
  *(undefined **)(DAT_8c024d88 + (int)DAT_8c024cb0) = PTR_DAT_8c024d84;
  *(undefined **)(DAT_8c024d8c + (int)DAT_8c024cb0) = PTR_DAT_8c024d90;
  *(undefined **)(DAT_8c024d94 + (int)DAT_8c024cb0) = PTR_DAT_8c024d98;
  *(undefined **)(DAT_8c024d9c + (int)DAT_8c024cb0) = PTR_DAT_8c024da0;
  *(undefined2 *)(DAT_8c024da4 + (int)DAT_8c024cb0) = 10;
  *(undefined2 *)(DAT_8c024da8 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024dac + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024db0 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024db4 + (int)DAT_8c024cb0) = 5;
  *(undefined **)(DAT_8c024db8 + (int)DAT_8c024cb0) = PTR_DAT_8c024dbc;
  *(undefined **)(DAT_8c024dc0 + (int)DAT_8c024cb0) = PTR_DAT_8c024dc4;
  *(undefined **)(DAT_8c024dc8 + (int)DAT_8c024cb0) = PTR_DAT_8c024dcc;
  *(undefined **)(DAT_8c024dd0 + (int)DAT_8c024cb0) = PTR_DAT_8c024dbc;
  *(undefined **)(DAT_8c024dd4 + (int)DAT_8c024cb0) = PTR_DAT_8c024dd8;
  *(undefined2 *)(DAT_8c024ddc + (int)DAT_8c024cb0) = 0xf;
  *(undefined2 *)(DAT_8c024de0 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024de4 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024de8 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024dec + (int)DAT_8c024cb0) = 5;
  *(undefined **)(DAT_8c024df0 + (int)DAT_8c024cb0) = PTR_DAT_8c024df4;
  *(undefined **)(DAT_8c024df8 + (int)DAT_8c024cb0) = PTR_DAT_8c024dfc;
  *(undefined **)(DAT_8c024e00 + (int)DAT_8c024cb0) = PTR_DAT_8c024e04;
  *(undefined **)(DAT_8c024e08 + (int)DAT_8c024cb0) = PTR_DAT_8c024e0c;
  *(undefined **)(DAT_8c024e10 + (int)DAT_8c024cb0) = PTR_DAT_8c024e14;
  *(undefined2 *)(DAT_8c024e18 + (int)DAT_8c024cb0) = 0x1e;
  *(undefined2 *)(DAT_8c024e1c + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024e20 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024e24 + (int)DAT_8c024cb0) = 5;
  *(undefined2 *)(DAT_8c024e28 + (int)DAT_8c024cb0) = 5;
  *(undefined **)(DAT_8c024e2c + (int)DAT_8c024cb0) = PTR_DAT_8c024e30;
  *(undefined **)(DAT_8c024e34 + (int)DAT_8c024cb0) = PTR_DAT_8c024e38;
  *(undefined **)(DAT_8c024e3c + (int)DAT_8c024cb0) = PTR_DAT_8c024e40;
  *(undefined **)(DAT_8c024e44 + (int)DAT_8c024cb0) = PTR_DAT_8c024e48;
  *(undefined **)(DAT_8c024e4c + (int)DAT_8c024cb0) = PTR_DAT_8c024e50;
  *(undefined2 *)(DAT_8c024e54 + (int)DAT_8c024cb0) = 10;
  *(undefined2 *)(DAT_8c025184 + DAT_8c025180) = 5;
  *(undefined2 *)(DAT_8c025188 + DAT_8c025180) = 5;
  *(undefined2 *)(DAT_8c02518c + DAT_8c025180) = 5;
  *(undefined2 *)(DAT_8c025190 + DAT_8c025180) = 5;
  *(undefined **)(DAT_8c025194 + DAT_8c025180) = PTR_DAT_8c025198;
  *(undefined **)(DAT_8c02519c + DAT_8c025180) = PTR_DAT_8c025198;
  *(undefined **)(DAT_8c0251a0 + DAT_8c025180) = PTR_DAT_8c0251a4;
  *(undefined **)(DAT_8c0251a8 + DAT_8c025180) = PTR_DAT_8c0251ac;
  *(undefined **)(DAT_8c0251b0 + DAT_8c025180) = PTR_DAT_8c0251b4;
  *(undefined2 *)(DAT_8c0251b8 + DAT_8c025180) = 0xf;
  *(undefined2 *)(DAT_8c0251bc + DAT_8c025180) = 5;
  a7 = 5;
  *(undefined2 *)(DAT_8c0251c0 + DAT_8c025180) = 5;
  iVar1 = DAT_8c025180;
  *(undefined2 *)(DAT_8c0251c4 + DAT_8c025180) = 5;
  *(undefined2 *)(DAT_8c0251c8 + DAT_8c025180) = 5;
  *(undefined **)(DAT_8c0251cc + DAT_8c025180) = PTR_DAT_8c0251d0;
  *(undefined **)(DAT_8c0251d4 + DAT_8c025180) = PTR_DAT_8c0251d8;
  *(undefined **)(DAT_8c0251dc + DAT_8c025180) = PTR_DAT_8c0251e0;
  *(undefined **)(DAT_8c0251e4 + DAT_8c025180) = PTR_DAT_8c0251e8;
  *(undefined **)(DAT_8c0251ec + DAT_8c025180) = PTR_DAT_8c0251f0;
  *(undefined2 *)(DAT_8c0251f4 + DAT_8c025180) = 0xf;
  *(undefined2 *)(DAT_8c0251f8 + DAT_8c025180) = 5;
  *(undefined2 *)(DAT_8c0251fc + DAT_8c025180) = 5;
  *(undefined2 *)(DAT_8c025200 + DAT_8c025180) = 5;
  *(undefined2 *)(DAT_8c025204 + DAT_8c025180) = 5;
  *(undefined **)(DAT_8c025208 + DAT_8c025180) = PTR_DAT_8c02520c;
  *(undefined **)(DAT_8c025210 + DAT_8c025180) = PTR_DAT_8c025214;
  *(undefined **)(DAT_8c025218 + DAT_8c025180) = PTR_DAT_8c02521c;
  *(undefined **)(DAT_8c025220 + DAT_8c025180) = PTR_DAT_8c025224;
  *(undefined2 *)(DAT_8c025228 + DAT_8c025180) = 10;
  *(undefined2 *)(DAT_8c02522c + DAT_8c025180) = 8;
  *(undefined2 *)(DAT_8c025230 + DAT_8c025180) = 8;
  *(undefined2 *)(DAT_8c025234 + DAT_8c025180) = 8;
  *(undefined **)(DAT_8c025238 + DAT_8c025180) = PTR_DAT_8c02523c;
  *(undefined2 *)(DAT_8c025240 + DAT_8c025180) = 10;
  *(undefined **)(DAT_8c025244 + DAT_8c025180) = PTR_DAT_8c025248;
  *(undefined2 *)(DAT_8c02524c + DAT_8c025180) = 0x1e;
  *(undefined **)(DAT_8c025250 + DAT_8c025180) = PTR_DAT_8c025254;
  *(undefined **)(DAT_8c025258 + DAT_8c025180) = PTR_DAT_8c02525c;
  *(undefined2 *)(DAT_8c025260 + DAT_8c025180) = 3;
  *(undefined2 *)(DAT_8c025264 + DAT_8c025180) = 3;
  *(undefined **)(DAT_8c025268 + DAT_8c025180) = PTR_DAT_8c025254;
  *(undefined **)(DAT_8c02526c + DAT_8c025180) = PTR_DAT_8c02525c;
  *(undefined2 *)(DAT_8c025270 + DAT_8c025180) = 8;
  *(undefined2 *)(DAT_8c025274 + DAT_8c025180) = 8;
  *(undefined **)(DAT_8c025278 + DAT_8c025180) = PTR_DAT_8c02527c;
  *(undefined **)(DAT_8c025280 + DAT_8c025180) = PTR_DAT_8c025284;
  *(undefined2 *)(DAT_8c025288 + DAT_8c025180) = 3;
  *(undefined2 *)(DAT_8c02528c + DAT_8c025180) = 3;
  *(undefined **)(DAT_8c025290 + DAT_8c025180) = PTR_DAT_8c02527c;
  *(undefined **)(DAT_8c025294 + DAT_8c025180) = PTR_DAT_8c025284;
  *(undefined2 *)(DAT_8c025298 + DAT_8c025180) = 8;
  *(undefined2 *)(DAT_8c02529c + DAT_8c025180) = 8;
  *(undefined **)(DAT_8c0252a0 + DAT_8c025180) = PTR_DAT_8c0252a4;
  *(undefined **)(DAT_8c0252a8 + DAT_8c025180) = PTR_DAT_8c0251d0;
  *(undefined2 *)(DAT_8c0252ac + DAT_8c025180) = 3;
  *(undefined2 *)(DAT_8c0252b0 + DAT_8c025180) = 3;
  *(undefined **)(DAT_8c0252b4 + DAT_8c025180) = PTR_DAT_8c0252a4;
  *(undefined **)(DAT_8c0252b8 + DAT_8c025180) = PTR_DAT_8c0251d0;
  *(undefined2 *)(DAT_8c0252bc + DAT_8c025180) = 8;
  *(undefined2 *)(DAT_8c0252c0 + DAT_8c025180) = 8;
  *(undefined **)(DAT_8c0252c4 + DAT_8c025180) = PTR_DAT_8c0252c8;
  *(undefined **)(DAT_8c0252cc + DAT_8c025180) = PTR_DAT_8c02525c;
  *(undefined2 *)(DAT_8c0252d0 + DAT_8c025180) = 4;
  *(undefined2 *)(DAT_8c0252d4 + DAT_8c025180) = 4;
  (*(code *)PTR_FUN_8c0252e0)(DAT_8c025180 + DAT_8c0252dc,PTR_DAT_8c0252d8,iVar1,5);
  *DAT_8c0252e4 = (**(uint **)(DAT_8c025180 + 0x40) >> 0x10) + 2;
  iVar1 = *(int *)(DAT_8c025180 + 0x40);
  uVar3 = 8;
  (*(code *)PTR_FUN_8c0252ec)(DAT_8c0252e8,iVar1,8,a7);
  puVar2 = (undefined8 *)((*DAT_8c0252e4 + -1) * 4 + DAT_8c0252e8);
  puVar5 = (undefined8 *)(iVar1 + (*DAT_8c0252e4 + -1) * 4);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)puVar2 = *(undefined4 *)puVar5;
  }
  else {
    *puVar2 = *puVar5;
  }
  (*(code *)PTR_FUN_8c0252e0)(DAT_8c025180 + DAT_8c0252f4,PTR_PTR_8c0252f0,uVar3,a7);
  (*(code *)PTR_FUN_8c025300)(DAT_8c025180 + DAT_8c0252fc,PTR_DAT_8c0252f8,uVar3,a7);
  (*(code *)PTR_Class_129920_m0_015248_8c02530c)
            (DAT_8c025180 + DAT_8c025308,PTR_PTR_8c025304,uVar3,a7);
  puVar4 = PTR_PTR_8c025310;
  (*(code *)PTR_Class_129920_m0_015248_8c02530c)
            (DAT_8c025180 + DAT_8c025314,PTR_PTR_8c025310,uVar3,a7);
  uVar3 = (*(code *)PTR_get_field_4_0253e4_8c0253d0)(DAT_8c0253c8 + DAT_8c0253cc,puVar4,uVar3,a7);
  puVar4 = PTR_s_GRAPHICS_COMMON_8c0253d4;
  iVar1 = (*(code *)PTR_FUN_8c0253d8)
                    (ar4,PTR_s_GRAPHICS_COMMON_8c0253d4 + 0x10,PTR_s_GRAPHICS_COMMON_8c0253d4,uVar3)
  ;
  if (iVar1 == 0) {
    uVar3 = 2;
    puVar4 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0253dc)
              (PTR_s_GRAPHICS_COMMON_8c0253d4 + 0x1b,PTR_s_GRAPHICS_COMMON_8c0253d4 + 0x38,0,2);
  }
  uVar3 = (*(code *)PTR_get_field_4_0253e4_8c0253d0)
                    (DAT_8c0253c8 + DAT_8c0253e0,DAT_8c0253c8 + DAT_8c0253e0,puVar4,uVar3);
  iVar1 = (*(code *)PTR_FUN_8c0253d8)
                    (ar4,PTR_s_GRAPHICS_COMMON_8c0253d4 + 0x39,PTR_s_GRAPHICS_COMMON_8c0253d4,uVar3)
  ;
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_report_error_message_8c0253dc)
                      (PTR_s_GRAPHICS_COMMON_8c0253d4 + 0x45,PTR_s_GRAPHICS_COMMON_8c0253d4 + 0x38,0
                       ,2);
  }
  return iVar1;
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
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_object_dtor_delete_8c025480)(ar4 + DAT_8c02547c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c025488)(ar4 + DAT_8c025484,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c025480)(ar4 + 0x6c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c025488)(ar4 + 0x5c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c025488)(ar4 + 0x4c,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c025480)(ar4 + 0x40,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c025488)(ar4 + 0x30,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c025488)(ar4 + 0x20,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c02548c)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c025490 @ 8c025490 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c025490(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0254c8)(ar4 + 4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0254cc)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0254d0 @ 8c0254d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0254d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a7;
  undefined8 *puVar2;
  undefined4 a5;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  iVar3 = ar4;
  (*(code *)PTR_FUN_8c025618)(ar4,ar5,ar6,in_stack_00000000);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c02561c;
  uVar1 = (*(code *)PTR_rand_8c025620)(iVar3,ar5,ar6,in_stack_00000000);
  a7 = (*(code *)PTR_libgcc_divide_helper_01031c_8c025624)(uVar1,2,ar6,in_stack_00000000);
  a5 = 0;
  uVar1 = ar7;
  (*(code *)PTR_FUN_8c02562c)(ar4 + DAT_8c025628,0,ar7,a7);
  uVar1 = (*(code *)PTR_FUN_8c025630)(ar4 + DAT_8c025628,a5,uVar1,a7);
  iVar3 = (int)(short)uVar1;
  (*(code *)PTR_FUN_8c025638)(ar4 + DAT_8c025634,iVar3,ar7,a7);
  (*(code *)PTR_FUN_8c025640)(ar4 + DAT_8c02563c,iVar3,ar7,a7);
  (*(code *)PTR_Vec3_set_zero_8c025648)(ar4 + DAT_8c025644,iVar3,ar7,a7);
  (*(code *)PTR_FUN_8c025650)(ar4 + DAT_8c02564c,iVar3,ar7,a7);
  (*(code *)PTR_FUN_8c025658)(ar4 + DAT_8c025654,iVar3,ar7,a7);
  (*(code *)PTR_FUN_8c02565c)(ar4,iVar3,ar7,a7);
  *(undefined4 *)(DAT_8c025660 + ar4) = in_stack_00000008;
  *(undefined4 *)(DAT_8c025664 + ar4) = in_stack_0000000c;
  *(undefined4 *)(DAT_8c025668 + ar4) = in_stack_00000010;
  puVar2 = (undefined8 *)(*(int *)(DAT_8c025660 + ar4) + DAT_8c025670);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c02566c) = *(undefined4 *)puVar2;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c02566c) = *puVar2;
  }
  puVar2 = (undefined8 *)(*(int *)(DAT_8c025660 + ar4) + DAT_8c025674);
  if (in_FPSCR_SZ == '\0') {
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
  puVar2 = (undefined8 *)(*(int *)(DAT_8c025660 + ar4) + DAT_8c02567c);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x60),*(undefined4 *)puVar2);
  }
  else {
    in_xd0 = *puVar2;
    dVar6 = *(double *)(ar4 + 0x60);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c025678) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c025678) = in_xd0;
  }
  puVar2 = (undefined8 *)(*(int *)(DAT_8c025660 + ar4) + DAT_8c025684);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)puVar2);
  }
  else {
    in_xd0 = *puVar2;
    dVar6 = *(double *)(ar4 + 0x5c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c025680) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c025680) = in_xd0;
  }
  return ar4;
}



/* CAnimal_m0_025688 @ 8c025688 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int CAnimal_m0_025688(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c025708;
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c025710)(ar4 + DAT_8c02570c,0xffffffff,ar6,ar7);
    (*(code *)PTR_FUN_8c025718)(ar4 + DAT_8c025714,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c025720)(ar4 + DAT_8c02571c,0xffffffff,ar6,ar7);
    (*(code *)PTR_FUN_8c025728)(ar4 + DAT_8c025724,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_034d08_8c025730)(ar4 + DAT_8c02572c,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_Class_12c1f0_m0_0f4108_8c025734)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c025738)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* CAnimal_m2_02573c @ 8c02573c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02599e) */
/* WARNING: Unknown calling convention */

undefined4 CAnimal_m2_02573c(int ar4,uint ar5,int *ar6,int *ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *a7;
  int a7_00;
  uint a5;
  int *a6;
  float fVar6;
  ulonglong in_dr0;
  double dVar7;
  undefined4 in_fr3;
  double dVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int *piStack_168;
  char cStack_164;
  char cStack_163;
  short sStack_162;
  undefined2 uStack_160;
  short sStack_15e;
  short sStack_15c;
  undefined2 uStack_15a;
  undefined2 uStack_158;
  short sStack_156;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int *piStack_13c;
  int iStack_138;
  int *piStack_134;
  int iStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined8 uStack_124;
  undefined4 uStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [4];
  undefined8 uStack_f4;
  undefined1 auStack_ec [208];
  float fVar8;
  
  uVar4 = ar5;
  a7 = ar7;
  piStack_168 = ar6;
  (*(code *)PTR_FUN_8c025864)((int)&piStack_168 + DAT_8c025860,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c02586c)((int)&piStack_168 + DAT_8c025868,uVar4,ar6,a7);
  uVar1 = (*(code *)PTR_FUN_8c025874)(ar4 + DAT_8c025870,uVar4,ar6,a7);
  sStack_156 = (short)uVar1;
  a6 = (int *)(int)sStack_156;
  (*(code *)PTR_FUN_8c025878)(auStack_ec,uVar4,ar6,a7);
  uVar2 = (*(code *)PTR_FUN_8c02587c)(ar5,uVar4,ar6,a7);
  a5 = uVar2 & 0xffff;
  uStack_158 = (short)uVar2;
  iVar3 = (*(code *)PTR_get_field_24_026024_8c025880)(ar7,uVar4,ar6,a7);
  iStack_110 = iVar3;
  if ((iVar3 != 2) && (*(int *)(DAT_8c025884 + ar4) == 0)) {
    uVar4 = (*(code *)PTR_FUN_8c02588c)(*(undefined4 *)(DAT_8c025888 + ar5),uVar4,ar6,a7);
    uStack_15a = (undefined2)uVar4;
    (*(code *)PTR_FUN_8c025894)(ar4 + DAT_8c025890,uVar4 & 0xffff,ar6,a7);
    uVar4 = a5;
    ar6 = ar7;
    (*(code *)PTR_FUN_8c025898)(ar4 + DAT_8c025870,a5,ar7,a7);
  }
  iStack_114 = (*(code *)PTR_FUN_8c02589c)(ar4 + DAT_8c025870,uVar4,ar6,a7);
  if (iStack_114 == 1) {
    (*(code *)PTR_FUN_8c0258a0)(ar4,uVar4,ar6,a7);
  }
  uVar1 = (*(code *)PTR_FUN_8c0258a4)(ar4 + DAT_8c025870,uVar4,ar6,a7);
  sStack_15c = (short)uVar1;
  if (sStack_15c == 1) {
    if (*(int *)(ar4 + 0x24) == 3) {
      uVar4 = 2;
      iStack_118 = (**(code **)(DAT_8c0258a8 + *ar7))(ar7,2,ar6,a7);
      if (iStack_118 != 0) {
        uVar4 = 0;
        (*(code *)PTR_FUN_8c0258b0)(ar4 + DAT_8c0258ac,0,ar6,a7);
        goto LAB_8c02590e;
      }
    }
    uVar1 = (*(code *)PTR_FUN_8c0259d0)(ar4 + DAT_8c0259cc,uVar4,ar6,a7);
    sStack_15e = (short)uVar1;
    a6 = (int *)(int)sStack_15e;
    if (a6 != (int *)0x0) {
      (**(code **)(DAT_8c0259d8 + *(int *)(ar4 + 8)))(ar4,DAT_8c0259d4,(int)a6 + -1,a7);
      (**(code **)(DAT_8c0259dc + *(int *)(ar4 + 8)))(ar4,DAT_8c0259d4,a6,a7);
      uVar4 = ar5;
      ar6 = a6;
      (**(code **)(**(int **)(DAT_8c0259e0 + ar4) + 0x18))(*(int **)(DAT_8c0259e0 + ar4),ar5,a6,a7);
      (**(code **)(*(int *)(ar4 + 8) + 0x5c))(ar4,uVar4,ar6,a7);
    }
  }
LAB_8c02590e:
  if ((a5 != *(ushort *)(DAT_8c0259e4 + ar4)) &&
     (piStack_134 = a6,
     *(short *)(DAT_8c0259f0 + *(int *)(DAT_8c0259e8 + ar4) + (int)a6 * DAT_8c0259ec) != 0)) {
    uVar4 = (uint)*(ushort *)(DAT_8c0259f0 + *(int *)(DAT_8c0259e8 + ar4) + (int)a6 * DAT_8c0259ec);
    piStack_13c = a6;
    iStack_138 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0259f4)(a5,uVar4,ar6,a7);
    if (iStack_138 == 0) {
      (*(code *)PTR_FUN_8c0259f8)(ar4,uVar4,ar6,a7);
    }
    *(short *)(DAT_8c0259e4 + ar4) = (short)uVar2;
  }
  if ((((*(int *)(DAT_8c0259fc + ar4) != 0) || (*(int *)(DAT_8c025a00 + ar4) != 0)) ||
      (*(int *)(DAT_8c025a04 + ar4) != 0)) || (*(int *)(DAT_8c025a08 + ar4) != 0)) {
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c025a0c),in_fr3);
    }
    else {
      dVar9 = *(double *)(ar4 + DAT_8c025a0c);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c025a14,(float)(int)*(char *)(DAT_8c025a10 + ar4));
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c025a18,DAT_8c025a14);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c025a18,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(uRam8c025a1c,DAT_8c025a18);
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = (float)((ulonglong)dVar7 >> 0x20);
      fVar6 = SUB84(dVar7,0) * fVar8;
      dVar7 = (double)CONCAT44(fVar8,fVar6);
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) + fVar6,SUB84(dVar9,0));
    }
    else {
      dVar7 = dVar7 * dVar7;
      dVar9 = dVar9 + dVar7;
    }
    fVar6 = SUB84(dVar7,0);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c025a0c) = (int)((ulonglong)dVar9 >> 0x20);
    }
    else {
      *(double *)(ar4 + DAT_8c025a0c) = dVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(ar4 + DAT_8c025a0c);
    }
    iStack_140 = ar4;
    if (in_FPSCR_PR != '\0' || fVar6 <= 1.0) {
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(ar4 + DAT_8c025c38);
      }
      in_dr0 = (ulonglong)(uint)fVar6;
      if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
        in_dr0 = (ulonglong)(uint)fVar6;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c025c38) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c025c38) = in_dr0;
        }
      }
    }
    else {
      in_dr0 = CONCAT44(0x3f800000,fVar6);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c025a0c) = 0x3f800000;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c025a0c) = in_dr0;
      }
    }
  }
  if (iVar3 != 2) {
    *(int *)((int)&piStack_168 + DAT_8c025c3c) = ar4;
    *(int *)((int)&piStack_168 + DAT_8c025c44) = ar4 + DAT_8c025c40;
    *(undefined4 *)((int)&piStack_168 + DAT_8c025c4c) = *(undefined4 *)(DAT_8c025c48 + ar4);
    *(undefined4 *)((int)&piStack_168 + DAT_8c025c54) = *(undefined4 *)(DAT_8c025c50 + ar4);
    *(int *)((int)&piStack_168 + DAT_8c025c5c) = ar4 + DAT_8c025c58;
    *(int **)((int)&piStack_168 + DAT_8c025c60) = piStack_168;
    *(int **)((int)&piStack_168 + DAT_8c025c64) = ar7;
    *(uint *)((int)&piStack_168 + DAT_8c025c68) = ar5;
    uStack_11c = (**(code **)(DAT_8c025c6c + *ar7))(ar7,uVar4,ar6,a7);
    *(undefined4 *)((int)&piStack_168 + DAT_8c025c70) = uStack_11c;
    uVar4 = (*(code *)PTR_FUN_8c025c74)(ar5,uVar4,ar6,a7);
    uStack_160 = (undefined2)uVar4;
    ar6 = (int *)((int)&piStack_168 + DAT_8c025c64);
    uVar4 = uVar4 & 0xffff;
    (*(code *)PTR_FUN_8c025c78)(ar4 + DAT_8c025c58,uVar4,ar6,a7);
  }
  *(int *)((int)&piStack_168 + DAT_8c025c7c) = ar4;
  *(int *)((int)&piStack_168 + DAT_8c025c80) = ar4 + DAT_8c025c40;
  *(undefined4 *)((int)&piStack_168 + DAT_8c025c84) = *(undefined4 *)(DAT_8c025c48 + ar4);
  *(int **)((int)&piStack_168 + DAT_8c025c88) = piStack_168;
  *(uint *)((int)&piStack_168 + DAT_8c025c8c) = ar5;
  uStack_124._4_4_ = (**(code **)(DAT_8c025c6c + *ar7))(ar7,uVar4,ar6,a7);
  *(undefined4 *)((int)&piStack_168 + DAT_8c025c90) = uStack_124._4_4_;
  *(int *)((int)&piStack_168 + DAT_8c025c94) = ar4 + DAT_8c025c58;
  (**(code **)(**(int **)(DAT_8c025c50 + ar4) + 0xc))
            (*(int **)(DAT_8c025c50 + ar4),ar7,(int)&piStack_168 + DAT_8c025c7c,a7);
  *(int *)((int)&piStack_168 + DAT_8c025c98) = ar4 + 0x30;
  *(int *)((int)&piStack_168 + DAT_8c025c9c) = ar4 + 0x50;
  *(int *)((int)&piStack_168 + DAT_8c025ca0) = ar4 + 0x5c;
  a7_00 = (int)&piStack_168 + DAT_8c025ca4;
  iVar5 = (int)&piStack_168 + DAT_8c025ca8;
  iVar3 = (int)&piStack_168 + DAT_8c025cac;
  (**(code **)(DAT_8c025c5c + *ar7))(ar7,iVar3,iVar5,a7_00);
  (**(code **)(DAT_8c025cb0 + *ar7))(ar7,iVar3,iVar5,a7_00);
  uVar1 = (undefined4)(in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_124 = CONCAT44(uStack_124._4_4_,uVar1);
    *(undefined4 *)((int)&piStack_168 + DAT_8c025cb4) = uVar1;
  }
  else {
    uStack_124 = in_dr0;
    *(ulonglong *)((int)&piStack_168 + DAT_8c025cb4) = in_dr0;
  }
  *(undefined4 *)((int)&piStack_168 + DAT_8c025cb8) = *(undefined4 *)(DAT_8c025c50 + ar4);
  *(int *)((int)&piStack_168 + DAT_8c025cbc) = (int)&piStack_168 + DAT_8c025c98;
  uStack_128 = (*(code *)PTR_get_field_140_025f70_8c025cc0)(ar4 + DAT_8c025c40,iVar3,iVar5,a7_00);
  *(undefined4 *)((int)&piStack_168 + DAT_8c025cc4) = uStack_128;
  *(int **)((int)&piStack_168 + DAT_8c025cc8) = ar7;
  *(int *)((int)&piStack_168 + DAT_8c025ccc) = (int)&piStack_168 + DAT_8c025cac;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)&piStack_168 + DAT_8c025cd4) = *(undefined4 *)(ar4 + DAT_8c025cd0);
  }
  else {
    *(undefined8 *)((int)&piStack_168 + DAT_8c025cd4) = *(undefined8 *)(ar4 + DAT_8c025cd0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)&piStack_168 + DAT_8c025cdc) = *(undefined4 *)(ar4 + DAT_8c025cd8);
  }
  else {
    *(undefined8 *)((int)&piStack_168 + DAT_8c025cdc) = *(undefined8 *)(ar4 + DAT_8c025cd8);
  }
  *(undefined1 *)((int)&piStack_168 + DAT_8c025ce0) = 1;
  *(uint *)((int)&piStack_168 + DAT_8c025ce4) = ((*(uint *)(ar4 + 0x74) & 0x70) >> 4) - 1;
  (*(code *)PTR_FUN_8c025ce8)(auStack_f8,iVar3,iVar5,a7_00);
  iStack_12c = (*(code *)PTR_get_field_24_026024_8c025cec)(ar7,iVar3,iVar5,a7_00);
  if (iStack_12c == 0) {
    if (in_FPSCR_SZ == '\0') {
      uStack_f4 = CONCAT44(uStack_f4._4_4_,*(undefined4 *)((int)&piStack_168 + DAT_8c025cb4));
    }
    else {
      uStack_f4 = *(undefined8 *)((int)&piStack_168 + DAT_8c025cb4);
    }
  }
  *(undefined1 **)((int)&piStack_168 + DAT_8c025cf0) = auStack_f8;
  uVar1 = (*(code *)PTR_FUN_8c025cf8)(ar4 + DAT_8c025cf4,iVar3,iVar5,a7_00);
  cStack_163 = (char)uVar1;
  if (cStack_163 == '\0') {
    *(undefined4 *)((int)&piStack_168 + DAT_8c025e24) = 0;
  }
  else {
    *(undefined4 *)((int)&piStack_168 + DAT_8c025cfc) = 1;
  }
  iVar3 = (int)&piStack_168 + DAT_8c025e28;
  (**(code **)(**(int **)(DAT_8c025e2c + ar4) + 0xc))
            (*(int **)(DAT_8c025e2c + ar4),iVar3,iVar5,a7_00);
  (*(code *)PTR_FUN_8c025e30)(*(undefined4 *)(DAT_8c025e2c + ar4),iVar3,iVar5,a7_00);
  (*(code *)PTR_FUN_8c025e34)(ar4 + 0x30,auStack_108,iVar5,a7_00);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c025e38)(auStack_108,0xffffffff,iVar5,a7_00);
  (*(code *)PTR_FUN_8c025e3c)(auStack_ec,uVar1,iVar5,a7_00);
  (*(code *)PTR_FUN_8c025e40)(auStack_ec,uVar1,iVar5,a7_00);
  (*(code *)PTR_FUN_8c025e44)(auStack_ec,uVar1,iVar5,a7_00);
  uVar1 = (*(code *)PTR_FUN_8c025e4c)(ar4 + DAT_8c025e48,uVar1,iVar5,a7_00);
  sStack_162 = (short)uVar1;
  iStack_144 = (int)sStack_162;
  iVar5 = *(int *)(DAT_8c025e50 + ar4) + iStack_144 * DAT_8c025e54 + DAT_8c025e58;
  iVar3 = ar4 + DAT_8c025e5c;
  (*(code *)PTR_FUN_8c025e60)(auStack_ec,iVar3,iVar5,a7_00);
  (**(code **)(DAT_8c025e64 + *(int *)(ar4 + 8)))(ar4,iVar3,iVar5,a7_00);
  (*(code *)PTR_FUN_8c025e6c)(ar4 + DAT_8c025e68,iVar3,iVar5,a7_00);
  uVar1 = (*(code *)PTR_FUN_8c025e74)(ar4 + DAT_8c025e70,iVar3,iVar5,a7_00);
  cStack_164 = (char)uVar1;
  if (cStack_164 == '\0') {
    iVar3 = *(int *)(DAT_8c025f28 + ar4) + -1;
    *(int *)(DAT_8c025f28 + ar4) = iVar3;
    iStack_154 = iVar3;
    iStack_150 = ar4;
    if (iVar3 < 1) {
      *(undefined4 *)(DAT_8c025f28 + ar4) = 0;
    }
  }
  else {
    iStack_14c = *(int *)(DAT_8c025e78 + ar4);
    *(int *)(DAT_8c025e78 + ar4) = iStack_14c + 1;
    iStack_148 = ar4;
    if (DAT_8c025e7c <= iStack_14c + 1) {
      *(int *)(DAT_8c025e78 + ar4) = DAT_8c025e7c;
    }
  }
  iStack_130 = (**(code **)(DAT_8c025f2c + *(int *)(ar4 + 8)))(ar4,iVar3,iVar5,a7_00);
  if (iStack_130 == 0) {
    (**(code **)(*(int *)(ar4 + 8) + 0x4c))(ar4,iVar3,iVar5,a7_00);
  }
  *(undefined4 *)(DAT_8c025f30 + ar4) = 0;
  uStack_10c = 1;
  (*(code *)PTR_free_if_nonnull_wrap_102790_8c025f34)(auStack_f8,0xffffffff,iVar5,a7_00);
  (*(code *)PTR_free_if_nonnull_wrap_023e4c_8c025f38)(auStack_ec,0xffffffff,iVar5,a7_00);
  (*(code *)PTR_FUN_8c025f40)((int)&piStack_168 + DAT_8c025f3c,0xffffffff,iVar5,a7_00);
  return uStack_10c;
}



/* FUN_8c025f44 @ 8c025f44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c025f44(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c025f64)(in_stack_00000000,ar4 + 4,ar6,ar7);
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

/* WARNING: Unknown calling convention */

int FUN_8c025f7c(int ar4,undefined8 *ar5,undefined8 *ar6,undefined8 *ar7)

{
  int iVar1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = *(undefined4 *)(ar4 + DAT_8c025f9c);
  }
  else {
    *ar5 = *(undefined8 *)(ar4 + DAT_8c025f9c);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar6 = *(undefined4 *)(ar4 + DAT_8c025fa0);
  }
  else {
    *ar6 = *(undefined8 *)(ar4 + DAT_8c025fa0);
  }
  iVar1 = DAT_8c025fa4;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar7 = *(undefined4 *)(ar4 + DAT_8c025fa4);
  }
  else {
    *ar7 = *(undefined8 *)(ar4 + DAT_8c025fa4);
  }
  return iVar1;
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
  undefined4 a5;
  
  if (ar4 != 0) {
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c026070)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c026074)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* CAnimal_m3_026078 @ 8c026078 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02621e) */
/* WARNING: Unknown calling convention */

undefined4 CAnimal_m3_026078(int ar4,uint ar5,int *ar6,int *ar7)

{
  undefined4 uVar1;
  uint uVar2;
  uint a5;
  int iVar3;
  uint uVar4;
  undefined4 *a5_00;
  undefined4 a5_01;
  int a6;
  int *a7;
  int a7_00;
  int *a6_00;
  float fVar5;
  ulonglong in_dr0;
  double dVar6;
  undefined4 in_fr3;
  double dVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int *piStack_11c;
  char cStack_118;
  undefined2 uStack_116;
  short sStack_114;
  short sStack_112;
  undefined2 uStack_110;
  short sStack_10e;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int *piStack_f8;
  int iStack_f4;
  int *piStack_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [4];
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  float fVar7;
  
  uVar4 = ar5;
  a7 = ar7;
  piStack_11c = ar6;
  (*(code *)PTR_FUN_8c026250)((int)&piStack_11c + DAT_8c02624c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c026254)(&uStack_ac,uVar4,ar6,a7);
  uVar1 = (*(code *)PTR_FUN_8c02625c)(ar4 + DAT_8c026258,uVar4,ar6,a7);
  sStack_10e = (short)uVar1;
  a6_00 = (int *)(int)sStack_10e;
  uVar2 = (*(code *)PTR_FUN_8c026260)(ar5,uVar4,ar6,a7);
  a5 = uVar2 & 0xffff;
  uStack_110 = (short)uVar2;
  iVar3 = (*(code *)PTR_get_field_24_026024_8c026264)(ar7,uVar4,ar6,a7);
  iStack_d0 = iVar3;
  if ((iVar3 != 2) && (*(int *)(DAT_8c026268 + ar4) == 0)) {
    uVar4 = a5;
    ar6 = ar7;
    (*(code *)PTR_FUN_8c02626c)(ar4 + DAT_8c026258,a5,ar7,a7);
  }
  iStack_d4 = (*(code *)PTR_FUN_8c026270)(ar4 + DAT_8c026258,uVar4,ar6,a7);
  if (iStack_d4 == 1) {
    (*(code *)PTR_FUN_8c026274)(ar4,uVar4,ar6,a7);
  }
  uVar1 = (*(code *)PTR_FUN_8c026278)(ar4 + DAT_8c026258,uVar4,ar6,a7);
  sStack_112 = (short)uVar1;
  if (sStack_112 == 1) {
    uVar1 = (*(code *)PTR_FUN_8c02625c)(ar4 + DAT_8c026258,uVar4,ar6,a7);
    sStack_114 = (short)uVar1;
    a6_00 = (int *)(int)sStack_114;
    if (a6_00 != (int *)0x0) {
      (**(code **)(DAT_8c026280 + *(int *)(ar4 + 8)))(ar4,DAT_8c02627c,(int)a6_00 + -1,a7);
      (**(code **)(DAT_8c02624c + *(int *)(ar4 + 8)))(ar4,DAT_8c02627c,a6_00,a7);
      uVar4 = ar5;
      ar6 = a6_00;
      (**(code **)(**(int **)(DAT_8c026284 + ar4) + 0x18))
                (*(int **)(DAT_8c026284 + ar4),ar5,a6_00,a7);
      (**(code **)(*(int *)(ar4 + 8) + 0x5c))(ar4,uVar4,ar6,a7);
    }
  }
  if ((a5 != *(ushort *)(DAT_8c026288 + ar4)) &&
     (piStack_f0 = a6_00,
     *(short *)(DAT_8c026294 + *(int *)(DAT_8c02628c + ar4) + (int)a6_00 * DAT_8c026290) != 0)) {
    uVar4 = (uint)*(ushort *)
                   (DAT_8c026294 + *(int *)(DAT_8c02628c + ar4) + (int)a6_00 * DAT_8c026290);
    piStack_f8 = a6_00;
    iStack_f4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c026298)(a5,uVar4,ar6,a7);
    if (iStack_f4 == 0) {
      (*(code *)PTR_FUN_8c02629c)(ar4,uVar4,ar6,a7);
    }
    *(short *)(DAT_8c026288 + ar4) = (short)uVar2;
  }
  if ((((*(int *)(DAT_8c0262a0 + ar4) != 0) || (*(int *)(DAT_8c0262a4 + ar4) != 0)) ||
      (*(int *)(DAT_8c0262a8 + ar4) != 0)) || (*(int *)(DAT_8c0262ac + ar4) != 0)) {
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0262b0),in_fr3);
    }
    else {
      dVar8 = *(double *)(ar4 + DAT_8c0262b0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0262b8,(float)(int)*(char *)(DAT_8c0262b4 + ar4));
    }
    else {
      dVar6 = (double)CONCAT44(DAT_8c0262bc,DAT_8c0262b8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0262bc,fVar5);
    }
    else {
      dVar6 = (double)CONCAT44(uRam8c0262c0,DAT_8c0262bc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = (float)((ulonglong)dVar6 >> 0x20);
      fVar5 = SUB84(dVar6,0) * fVar7;
      dVar6 = (double)CONCAT44(fVar7,fVar5);
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) + fVar5,SUB84(dVar8,0));
    }
    else {
      dVar6 = dVar6 * dVar6;
      dVar8 = dVar8 + dVar6;
    }
    fVar5 = SUB84(dVar6,0);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c0262b0) = (int)((ulonglong)dVar8 >> 0x20);
    }
    else {
      *(double *)(ar4 + DAT_8c0262b0) = dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(ar4 + DAT_8c0262b0);
    }
    iStack_fc = ar4;
    if (in_FPSCR_PR != '\0' || fVar5 <= 1.0) {
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)(ar4 + DAT_8c026558);
      }
      in_dr0 = (ulonglong)(uint)fVar5;
      if (in_FPSCR_PR == '\0' && fVar5 < 0.0) {
        in_dr0 = (ulonglong)(uint)fVar5;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c026558) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c026558) = in_dr0;
        }
      }
    }
    else {
      in_dr0 = CONCAT44(0x3f800000,fVar5);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0262b0) = 0x3f800000;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0262b0) = in_dr0;
      }
    }
  }
  if (iVar3 != 2) {
    *(int *)((int)&piStack_11c + DAT_8c02655c) = ar4;
    *(int *)((int)&piStack_11c + DAT_8c026564) = ar4 + DAT_8c026560;
    *(undefined4 *)((int)&piStack_11c + DAT_8c02656c) = *(undefined4 *)(DAT_8c026568 + ar4);
    *(undefined4 *)((int)&piStack_11c + DAT_8c026574) = *(undefined4 *)(DAT_8c026570 + ar4);
    *(int *)((int)&piStack_11c + DAT_8c02657c) = ar4 + DAT_8c026578;
    *(int **)((int)&piStack_11c + DAT_8c026580) = piStack_11c;
    *(int **)((int)&piStack_11c + DAT_8c026584) = ar7;
    *(uint *)((int)&piStack_11c + DAT_8c026588) = ar5;
    uStack_d8 = (**(code **)(DAT_8c02658c + *ar7))(ar7,uVar4,ar6,a7);
    *(undefined4 *)((int)&piStack_11c + DAT_8c026590) = uStack_d8;
    uVar1 = 1;
    (*(code *)PTR_FUN_8c026594)(ar4 + DAT_8c026578,1,ar6,a7);
    uVar4 = (*(code *)PTR_FUN_8c026598)(ar5,uVar1,ar6,a7);
    uStack_116 = (undefined2)uVar4;
    ar6 = (int *)((int)&piStack_11c + DAT_8c026584);
    uVar4 = uVar4 & 0xffff;
    (*(code *)PTR_FUN_8c02659c)(ar4 + DAT_8c026578,uVar4,ar6,a7);
  }
  *(int *)((int)&piStack_11c + DAT_8c0265a0) = ar4;
  *(int *)((int)&piStack_11c + DAT_8c0265a4) = ar4 + DAT_8c026560;
  *(undefined4 *)((int)&piStack_11c + DAT_8c0265a8) = *(undefined4 *)(DAT_8c026568 + ar4);
  *(int **)((int)&piStack_11c + DAT_8c0265ac) = piStack_11c;
  *(uint *)((int)&piStack_11c + DAT_8c0265b0) = ar5;
  uStack_e0._4_4_ = (**(code **)(DAT_8c02658c + *ar7))(ar7,uVar4,ar6,a7);
  *(undefined4 *)((int)&piStack_11c + DAT_8c0265b4) = uStack_e0._4_4_;
  *(int *)((int)&piStack_11c + DAT_8c0265b8) = ar4 + DAT_8c026578;
  (**(code **)(**(int **)(DAT_8c026570 + ar4) + 0x10))
            (*(int **)(DAT_8c026570 + ar4),ar7,(int)&piStack_11c + DAT_8c0265a0,a7);
  *(int *)((int)&piStack_11c + DAT_8c0265bc) = ar4 + 0x30;
  *(int *)((int)&piStack_11c + DAT_8c0265c0) = ar4 + 0x50;
  *(int *)((int)&piStack_11c + DAT_8c0265c4) = ar4 + 0x5c;
  a7_00 = (int)&piStack_11c + DAT_8c0265c8;
  a6 = (int)&piStack_11c + DAT_8c0265cc;
  iVar3 = (int)&piStack_11c + DAT_8c0265d0;
  (**(code **)(DAT_8c0265d4 + *ar7))(ar7,iVar3,a6,a7_00);
  (**(code **)(DAT_8c0265d8 + *ar7))(ar7,iVar3,a6,a7_00);
  uVar1 = (undefined4)(in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar1);
    *(undefined4 *)((int)&piStack_11c + DAT_8c0265dc) = uVar1;
  }
  else {
    uStack_e0 = in_dr0;
    *(ulonglong *)((int)&piStack_11c + DAT_8c0265dc) = in_dr0;
  }
  uStack_ac = *(undefined4 *)(DAT_8c026570 + ar4);
  iStack_a8 = (int)&piStack_11c + DAT_8c0265bc;
  uStack_e4 = (*(code *)PTR_get_field_140_025f70_8c0265e0)(ar4 + DAT_8c026560,iVar3,a6,a7_00);
  uStack_a4 = uStack_e4;
  *(int **)((int)&piStack_11c + DAT_8c0265e4) = ar7;
  *(int *)((int)&piStack_11c + DAT_8c0265e8) = (int)&piStack_11c + DAT_8c0265d0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)&piStack_11c + DAT_8c0265f0) = *(undefined4 *)(ar4 + DAT_8c0265ec);
  }
  else {
    *(undefined8 *)((int)&piStack_11c + DAT_8c0265f0) = *(undefined8 *)(ar4 + DAT_8c0265ec);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)&piStack_11c + DAT_8c0265f8) = *(undefined4 *)(ar4 + DAT_8c0265f4);
  }
  else {
    *(undefined8 *)((int)&piStack_11c + DAT_8c0265f8) = *(undefined8 *)(ar4 + DAT_8c0265f4);
  }
  *(undefined1 *)((int)&piStack_11c + DAT_8c0265fc) = 0;
  *(uint *)((int)&piStack_11c + DAT_8c026600) = ((*(uint *)(ar4 + 0x74) & 0x70) >> 4) - 1;
  (*(code *)PTR_FUN_8c026604)(auStack_b8,iVar3,a6,a7_00);
  iStack_e8 = (*(code *)PTR_get_field_24_026024_8c026608)(ar7,iVar3,a6,a7_00);
  if (iStack_e8 == 0) {
    if (in_FPSCR_SZ == '\0') {
      uStack_b4 = CONCAT44(uStack_b4._4_4_,*(undefined4 *)((int)&piStack_11c + DAT_8c0265dc));
    }
    else {
      uStack_b4 = *(undefined8 *)((int)&piStack_11c + DAT_8c0265dc);
    }
  }
  puStack_a0 = auStack_b8;
  a5_00 = &uStack_ac;
  (**(code **)(**(int **)(DAT_8c026568 + ar4) + 0xc))(*(int **)(DAT_8c026568 + ar4),a5_00,a6,a7_00);
  (*(code *)PTR_FUN_8c02660c)(*(undefined4 *)(DAT_8c026568 + ar4),a5_00,a6,a7_00);
  (*(code *)PTR_FUN_8c026610)(ar4 + 0x30,auStack_c8,a6,a7_00);
  a5_01 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c026614)(auStack_c8,0xffffffff,a6,a7_00);
  (**(code **)(DAT_8c0265c4 + *(int *)(ar4 + 8)))(ar4,a5_01,a6,a7_00);
  (*(code *)PTR_FUN_8c026618)(ar4 + DAT_8c0265a0,a5_01,a6,a7_00);
  uVar1 = (*(code *)PTR_FUN_8c026620)(ar4 + DAT_8c02661c,a5_01,a6,a7_00);
  cStack_118 = (char)uVar1;
  if (cStack_118 == '\0') {
    iStack_10c = *(int *)(DAT_8c0266bc + ar4) + -1;
    *(int *)(DAT_8c0266bc + ar4) = iStack_10c;
    iStack_108 = ar4;
    if (iStack_10c < 1) {
      *(undefined4 *)(DAT_8c0266bc + ar4) = 0;
    }
  }
  else {
    iStack_104 = *(int *)(DAT_8c026624 + ar4);
    *(int *)(DAT_8c026624 + ar4) = iStack_104 + 1;
    iStack_100 = ar4;
    if (DAT_8c026628 <= iStack_104 + 1) {
      *(int *)(DAT_8c026624 + ar4) = DAT_8c026628;
    }
  }
  iStack_ec = (**(code **)(DAT_8c0266c0 + *(int *)(ar4 + 8)))(ar4,a5_01,a6,a7_00);
  if (iStack_ec == 0) {
    (**(code **)(*(int *)(ar4 + 8) + 0x4c))(ar4,a5_01,a6,a7_00);
  }
  *(undefined4 *)(DAT_8c0266c4 + ar4) = 0;
  uStack_cc = 1;
  (*(code *)PTR_free_if_nonnull_wrap_102790_8c0266c8)(auStack_b8,0xffffffff,a6,a7_00);
  (*(code *)PTR_FUN_8c0266d0)((int)&piStack_11c + DAT_8c0266cc,0xffffffff,a6,a7_00);
  return uStack_cc;
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

/* WARNING: Unknown calling convention */

int FUN_8c026968(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 a6;
  int iVar5;
  float fVar6;
  double dVar7;
  int iVar9;
  int iVar10;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  short asStack_dc [2];
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 *puStack_a0;
  int iStack_9c;
  undefined8 uStack_98;
  int iStack_90;
  undefined1 auStack_8c [132];
  float fVar8;
  
  (*(code *)PTR_FUN_8c026cd4)(ar4 + DAT_8c026cd0,ar5,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c026cdc)(ar4 + DAT_8c026cd8,ar5,ar6,ar7);
  asStack_dc[0] = (short)uVar2;
  iStack_c0 = (int)asStack_dc[0];
  iVar5 = *(int *)(DAT_8c026ce0 + ar4) + iStack_c0 * DAT_8c026ce4;
  (*(code *)PTR_FUN_8c026cec)((int)asStack_dc + DAT_8c026ce8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c026cec)(auStack_8c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c026cf4)(*(undefined4 *)(DAT_8c026cf0 + ar4),ar5,ar6,ar7);
  iStack_c4 = *DAT_8c026cf8 + 1;
  iStack_c8 = *DAT_8c026cf8;
  uVar2 = 0x40;
  iVar3 = iStack_c8 * 0x40 + DAT_8c026cfc;
  (*(code *)PTR_FUN_8c026d00)(iStack_c4 * 0x40 + DAT_8c026cfc,iVar3,0x40,ar7);
  *DAT_8c026cf8 = *DAT_8c026cf8 + 1;
  (*(code *)PTR_FUN_8c026d04)(auStack_8c,iVar3,uVar2,ar7);
  puVar4 = auStack_8c;
  (*(code *)PTR_FUN_8c026d08)((int)asStack_dc + DAT_8c026ce8,puVar4,uVar2,ar7);
  (*(code *)PTR_FUN_8c026cec)(auStack_8c,puVar4,uVar2,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c026d0c,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c026d10,DAT_8c026d0c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c026d10,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c026d14,DAT_8c026d10);
  }
  if (in_FPSCR_PR == '\0') {
    iVar3 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar7 / dVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c026d0c,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c026d10,DAT_8c026d0c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c026d10,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c026d14,DAT_8c026d10);
  }
  if (in_FPSCR_PR == '\0') {
    iVar9 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar9 = (int)(dVar7 / dVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c026d0c,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c026d10,DAT_8c026d0c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c026d10,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c026d14,DAT_8c026d10);
  }
  if (in_FPSCR_PR == '\0') {
    iVar10 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar10 = (int)(dVar7 / dVar7);
  }
  (*(code *)PTR_FUN_8c026d14)(auStack_8c,iVar10,iVar9,iVar3);
  puVar4 = auStack_8c;
  (*(code *)PTR_FUN_8c026d08)((int)asStack_dc + DAT_8c026ce8,puVar4,iVar9,iVar3);
  (*(code *)PTR_FUN_8c026cec)(auStack_8c,puVar4,iVar9,iVar3);
  (*(code *)PTR_FUN_8c026d18)(auStack_8c,puVar4,iVar9,iVar3);
  puVar4 = auStack_8c;
  (*(code *)PTR_FUN_8c026d08)((int)asStack_dc + DAT_8c026ce8,puVar4,iVar9,iVar3);
  (*(code *)PTR_FUN_8c026cec)(auStack_8c,puVar4,iVar9,iVar3);
  (*(code *)PTR_FUN_8c026d18)(auStack_8c,puVar4,iVar9,iVar3);
  puVar4 = auStack_8c;
  (*(code *)PTR_FUN_8c026d08)((int)asStack_dc + DAT_8c026ce8,puVar4,iVar9,iVar3);
  (*(code *)PTR_FUN_8c026d28)((int)asStack_dc + DAT_8c026ce8,puVar4,iVar9,iVar3);
  (*(code *)PTR_FUN_8c026d2c)(0,puVar4,iVar9,iVar3);
  (*(code *)PTR_FUN_8c026d04)(0,puVar4,iVar9,iVar3);
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c026d0c,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c026d10,DAT_8c026d0c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c026d10,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c026d14,DAT_8c026d10);
  }
  if (in_FPSCR_PR == '\0') {
    iVar3 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar7 / dVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c026d0c,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c026d10,DAT_8c026d0c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c026d10,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c026d14,DAT_8c026d10);
  }
  if (in_FPSCR_PR == '\0') {
    iVar9 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar9 = (int)(dVar7 / dVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c026d0c,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c026d10,DAT_8c026d0c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c026d10,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c026d14,DAT_8c026d10);
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = (float)((ulonglong)dVar7 >> 0x20);
    fVar6 = SUB84(dVar7,0) / fVar8;
    dVar7 = (double)CONCAT44(fVar8,fVar6);
    iVar10 = (int)fVar6;
  }
  else {
    dVar7 = dVar7 / dVar7;
    iVar10 = (int)dVar7;
  }
  (*(code *)PTR_FUN_8c026d14)(0,iVar10,iVar9,iVar3);
  (*(code *)PTR_FUN_8c026d18)(0,iVar10,iVar9,iVar3);
  iStack_cc = (*(code *)PTR_FUN_8c026d34)(*(undefined4 *)(DAT_8c026d30 + ar4),iVar10,iVar9,iVar3);
  iStack_90 = iStack_cc;
  uStack_98._4_4_ =
       (*(code *)PTR_deref_u32_8c026d3c)
                 (*(int *)(DAT_8c026d38 + iVar5) + iStack_cc * 4,iVar10,iVar9,iVar3);
  (*(code *)PTR_FUN_8c026d40)(*(undefined4 *)(DAT_8c026d30 + ar4),iVar10,iVar9,iVar3);
  dVar1 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    uStack_98 = (double)CONCAT44(uStack_98._4_4_,(int)((ulonglong)dVar7 >> 0x20));
    dVar1 = uStack_98;
  }
  uStack_98 = dVar1;
  (*(code *)PTR_FUN_8c026d44)(uStack_98._4_4_,iVar10,iVar9,iVar3);
  iStack_d0 = (*(code *)PTR_FUN_8c026d34)(*(undefined4 *)(DAT_8c026d30 + ar4),iVar10,iVar9,iVar3);
  iStack_9c = iStack_d0;
  puStack_a0 = (undefined4 *)
               (*(code *)PTR_deref_u32_8c026d3c)
                         (*(int *)(DAT_8c026d38 + iVar5) + iStack_d0 * 4,iVar10,iVar9,iVar3);
  *(undefined4 *)(DAT_8c026d48 + ar4) = *puStack_a0;
  iStack_d4 = (*(code *)PTR_FUN_8c026d34)(*(undefined4 *)(DAT_8c026d30 + ar4),iVar10,iVar9,iVar3);
  iStack_a4 = iStack_d4;
  iStack_a8 = (*(code *)PTR_FUN_8c026d50)
                        (*(int *)(DAT_8c026d4c + iVar5) + iStack_d4 * 4,iVar10,iVar9,iVar3);
  if (iStack_a8 == 0) {
    uVar2 = (*(code *)PTR_FUN_8c026d58)(iVar5 + 0x70,iVar10,iVar9,iVar3);
    a6 = 0;
    uStack_bc = uVar2;
    (*(code *)PTR_FUN_8c026d60)(ar4,uVar2,0,iVar3);
  }
  else {
    iStack_d8 = (*(code *)PTR_FUN_8c026d34)(*(undefined4 *)(DAT_8c026d30 + ar4),iVar10,iVar9,iVar3);
    iStack_ac = iStack_d8;
    uStack_b4._4_4_ =
         (*(code *)PTR_FUN_8c026d50)
                   (*(int *)(DAT_8c026d4c + iVar5) + iStack_d8 * 4,iVar10,iVar9,iVar3);
    (*(code *)PTR_FUN_8c026d40)(*(undefined4 *)(DAT_8c026d30 + ar4),iVar10,iVar9,iVar3);
    if (in_FPSCR_SZ == '\0') {
      uStack_b4 = (double)CONCAT44(uStack_b4._4_4_,(int)((ulonglong)dVar7 >> 0x20));
      dVar7 = uStack_b4;
    }
    uStack_b4 = dVar7;
    uVar2 = 0x29;
    (*(code *)PTR_FUN_8c026d54)(uStack_b4._4_4_,0x29,iVar9,iVar3);
    uVar2 = (*(code *)PTR_FUN_8c026d58)(iVar5 + 0x70,uVar2,iVar9,iVar3);
    a6 = 0;
    uStack_b8 = uVar2;
    (*(code *)PTR_FUN_8c026d5c)(ar4,uVar2,0,iVar3);
  }
  (*(code *)PTR_FUN_8c026d64)(1,uVar2,a6,iVar3);
  *DAT_8c026cf8 = *DAT_8c026cf8 + -1;
  (*(code *)PTR_FUN_8c026cd4)(PTR_DAT_8c026d68,uVar2,a6,iVar3);
  iVar5 = *(int *)(DAT_8c026d6c + ar4);
  if (iVar5 == 1) {
    iVar5 = (*(code *)PTR_FUN_8c026d70)(ar4,uVar2,a6,iVar3);
  }
  return iVar5;
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
  (*(code *)PTR_CAnimBody_GetCurFrame_8c026da4)(ar4 + DAT_8c026da0,ar5,ar6,ar7);
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
  char in_FPSCR_SZ;
  undefined4 uStack_30;
  undefined4 uStack_14;
  
  uVar1 = (*(code *)PTR_FUN_8c026f34)(ar4 + DAT_8c026f30,ar5,ar6,ar7);
  iVar4 = *(int *)(DAT_8c026f38 + ar4) + (short)uVar1 * DAT_8c026f3c;
  (*(code *)PTR_FUN_8c026f44)(*(undefined4 *)(DAT_8c026f40 + ar4),ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c026f4c)(*(undefined4 *)(DAT_8c026f48 + ar4),ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_deref_u32_8c026f54)(*(int *)(DAT_8c026f50 + iVar4) + iVar2 * 4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c026f58)(*(undefined4 *)(DAT_8c026f48 + ar4),ar5,ar6,ar7);
  uStack_14 = extraout_fr0;
  if (in_FPSCR_SZ == '\0') {
    uStack_14 = uVar1;
  }
  (*(code *)PTR_FUN_8c026f5c)(uStack_14,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c026f4c)(*(undefined4 *)(DAT_8c026f48 + ar4),ar5,ar6,ar7);
  puVar3 = (undefined4 *)
           (*(code *)PTR_deref_u32_8c026f54)(*(int *)(DAT_8c026f50 + iVar4) + iVar2 * 4,ar5,ar6,ar7)
  ;
  *(undefined4 *)(DAT_8c026f60 + ar4) = *puVar3;
  iVar2 = (*(code *)PTR_FUN_8c026f4c)(*(undefined4 *)(DAT_8c026f48 + ar4),ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c026f68)(*(int *)(DAT_8c026f64 + iVar4) + iVar2 * 4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    uVar1 = (*(code *)PTR_FUN_8c026f70)(iVar4 + 0x70,ar5,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c026f78)(ar4,uVar1,0,ar7);
  }
  else {
    iVar2 = (*(code *)PTR_FUN_8c026f4c)(*(undefined4 *)(DAT_8c026f48 + ar4),ar5,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c026f68)(*(int *)(DAT_8c026f64 + iVar4) + iVar2 * 4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c026f58)(*(undefined4 *)(DAT_8c026f48 + ar4),ar5,ar6,ar7);
    uStack_30 = extraout_fr0_00;
    if (in_FPSCR_SZ == '\0') {
      uStack_30 = uVar1;
    }
    uVar1 = 0x29;
    (*(code *)PTR_FUN_8c026f6c)(uStack_30,0x29,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c026f70)(iVar4 + 0x70,uVar1,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c026f74)(ar4,uVar1,0,ar7);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02702c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int a5;
  undefined4 uVar4;
  int a6;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  uVar2 = (*(code *)PTR_FUN_8c0271d0)(ar4 + DAT_8c0271cc,ar5,ar6,ar7);
  sVar1 = (short)uVar2;
  iVar5 = *(int *)(DAT_8c0271d4 + ar4) + sVar1 * DAT_8c0271d8;
  uVar2 = *(undefined4 *)(DAT_8c0271dc + iVar5);
  a6 = (int)*(short *)(DAT_8c0271e0 + iVar5);
  (*(code *)PTR_FUN_8c0271ec)
            (*(undefined4 *)(DAT_8c0271e8 + ar4),*(undefined4 *)(DAT_8c0271e4 + iVar5),a6,uVar2);
  if ((*(uint *)(ar4 + 0x74) & 0x70) == 0x20) {
    (*(code *)PTR_FUN_8c0271f0)(*(undefined4 *)(DAT_8c0271e8 + ar4),1,a6,uVar2);
  }
  a5 = (int)sVar1;
  (**(code **)(**(int **)(DAT_8c0271e8 + ar4) + 0x20))(*(int **)(DAT_8c0271e8 + ar4),a5,a6,uVar2);
  (**(code **)(**(int **)(DAT_8c0271e8 + ar4) + 0x2c))(*(int **)(DAT_8c0271e8 + ar4),a5,a6,uVar2);
  *(undefined4 *)(DAT_8c0271e4 + ar4) = *(undefined4 *)(DAT_8c0271f4 + iVar5);
  uVar4 = *(undefined4 *)(DAT_8c0271e4 + ar4);
  (**(code **)(**(int **)(DAT_8c0271e0 + ar4) + 0x24))(*(int **)(DAT_8c0271e0 + ar4),uVar4,a6,uVar2)
  ;
  (*(code *)PTR_FUN_8c0271f8)(*(undefined4 *)(DAT_8c0271e8 + ar4),uVar4,a6,uVar2);
  (**(code **)(*(int *)(ar4 + DAT_8c0271dc) + 0x28))
            ((int *)(ar4 + DAT_8c0271dc),ar4 + 0x30,a6,uVar2);
  puVar3 = (undefined8 *)(*(int *)(DAT_8c0271d4 + ar4) + sVar1 * DAT_8c0271d8 + DAT_8c027204);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + _DAT_8c027200) = *(undefined4 *)puVar3;
  }
  else {
    *(undefined8 *)(ar4 + _DAT_8c027200) = *puVar3;
  }
  puVar3 = (undefined8 *)(*(int *)(DAT_8c0271d4 + ar4) + sVar1 * DAT_8c0271d8 + DAT_8c027208);
  if (in_FPSCR_SZ == '\0') {
    uVar4 = *(undefined4 *)puVar3;
    *(undefined4 *)(ar4 + 100) = uVar4;
    *(undefined4 *)(ar4 + 0x60) = uVar4;
    *(undefined4 *)(ar4 + 0x5c) = uVar4;
  }
  else {
    uVar7 = *puVar3;
    *(undefined8 *)(ar4 + 100) = uVar7;
    *(undefined8 *)(ar4 + 0x60) = uVar7;
    *(undefined8 *)(ar4 + 0x5c) = uVar7;
  }
  puVar3 = (undefined8 *)(*(int *)(DAT_8c0271d4 + ar4) + sVar1 * DAT_8c0271d8 + DAT_8c027210);
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)puVar3);
  }
  else {
    in_xd0 = *puVar3;
    dVar8 = *(double *)(ar4 + 0x5c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c02720c) = fVar6;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c02720c) = in_xd0;
  }
  puVar3 = (undefined8 *)(*(int *)(DAT_8c0271d4 + ar4) + sVar1 * DAT_8c0271d8 + DAT_8c027218);
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x60),*(undefined4 *)puVar3);
  }
  else {
    in_xd0 = *puVar3;
    dVar8 = *(double *)(ar4 + 0x60);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c027214) = fVar6;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c027214) = in_xd0;
  }
  uVar2 = (*(code *)PTR_s_CAnimal_ChangeBodyTexture_02af96_8c027220)
                    (ar4,*(undefined4 *)(DAT_8c02721c + ar4),a6,uVar2);
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
  
  uVar1 = (*(code *)PTR_FUN_8c027260)(ar4 + DAT_8c02725c,ar5,ar6,ar7);
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
  int a6;
  undefined4 uVar2;
  
  uVar2 = 1;
  (*(code *)PTR_FUN_8c02730c)(ar4 + DAT_8c027308,1,ar6,ar7);
  uVar1 = (*(code *)PTR_get_field_138_02737c_8c027310)(ar4 + DAT_8c027308,uVar2,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c027314)(ar4 + DAT_8c027308,uVar2,ar6,ar7);
  a6 = (int)(short)uVar2;
  uVar1 = (*(code *)PTR_FUN_8c027318)(ar4,uVar1,a6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c027320)(DAT_8c02731c,uVar1,a6,ar7);
  (*(code *)PTR_FUN_8c027328)(ar4 + DAT_8c027324,uVar1,a6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c027330)(*(undefined4 *)(DAT_8c02732c + ar4),uVar1,a6,ar7);
  (*(code *)PTR_FUN_8c027334)(ar4 + DAT_8c027324,uVar1,a6,ar7);
  uVar1 = 1;
  (*(code *)PTR_FUN_8c02733c)(ar4 + DAT_8c027338,1,a6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c027340)(*(undefined4 *)(DAT_8c02732c + ar4),uVar1,a6,ar7);
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
  ushort *a5;
  int iVar4;
  
  a5 = ar5;
  iVar1 = (*(code *)PTR_get_field_138_02737c_8c027694)(ar4 + DAT_8c027690,ar5,ar6,ar7);
  if (iVar1 != 1) {
    iVar1 = (*(code *)PTR_get_field_138_02737c_8c027694)(ar4 + DAT_8c027690,a5,ar6,ar7);
    if (iVar1 != 2) goto LAB_8c027550;
  }
  uVar2 = (*(code *)PTR_get_field_138_02737c_8c027694)(ar4 + DAT_8c027690,a5,ar6,ar7);
  uVar3 = (*(code *)PTR_FUN_8c027698)(ar4 + DAT_8c027690,a5,ar6,ar7);
  ar6 = (int)(short)uVar3;
  uVar2 = (*(code *)PTR_FUN_8c02769c)(ar4,uVar2,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c0276a4)(DAT_8c0276a0,uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0276ac)(ar4 + DAT_8c0276a8,uVar2,ar6,ar7);
  a5 = (ushort *)(*(code *)PTR_FUN_8c0276b4)(*(undefined4 *)(DAT_8c0276b0 + ar4),uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0276b8)(ar4 + DAT_8c0276a8,a5,ar6,ar7);
LAB_8c027550:
  iVar1 = (*(code *)PTR_FUN_8c0276bc)(DAT_8c0276a0,a5,ar6,ar7);
  iVar4 = (**(code **)(**(int **)(DAT_8c0276b0 + ar4) + 0x40))
                    (*(int **)(DAT_8c0276b0 + ar4),a5,ar6,ar7);
  if (iVar1 == iVar4) {
    iVar1 = (**(code **)(**(int **)(DAT_8c0276b0 + ar4) + 0x40))
                      (*(int **)(DAT_8c0276b0 + ar4),a5,ar6,ar7);
    if (0 < iVar1) {
      a5 = (ushort *)0x1;
      (*(code *)PTR_FUN_8c0276c0)(ar4,1,ar6,ar7);
    }
  }
  if (*ar5 == 0) {
    if ((*ar5 == 0) && (7 < ar5[1])) {
      if (ar5[1] < 0x18) {
        a5 = (ushort *)(*(code *)PTR_libgcc_divide_helper_0101e4_8c0276cc)((uint)ar5[1],8,ar6,ar7);
        (*(code *)PTR_FUN_8c0276c4)(ar4 + DAT_8c027690,a5,ar6,ar7);
      }
      else {
        a5 = (ushort *)
             (*(code *)PTR_libgcc_divide_helper_0101e4_8c0276cc)((uint)ar5[1],0x18,ar6,ar7);
        (*(code *)PTR_FUN_8c0276c4)(ar4 + DAT_8c027690,a5,ar6,ar7);
      }
      (*(code *)PTR_FUN_8c0276c8)(*(undefined4 *)(DAT_8c0276b0 + ar4),a5,ar6,ar7);
    }
  }
  else {
    a5 = (ushort *)(uint)*ar5;
    (*(code *)PTR_FUN_8c0276c4)(ar4 + DAT_8c027690,a5,ar6,ar7);
    (*(code *)PTR_FUN_8c0276c8)(*(undefined4 *)(DAT_8c0276b0 + ar4),a5,ar6,ar7);
  }
  iVar1 = (*(code *)PTR_FUN_8c0276d0)(ar4 + DAT_8c027690,a5,ar6,ar7);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c0276d4)(ar4,a5,ar6,ar7);
  }
  uVar2 = (*(code *)PTR_FUN_8c0276dc)(ar4 + DAT_8c0276d8,a5,ar6,ar7);
  if ((char)uVar2 != '\0') {
    (*(code *)PTR_FUN_8c0276e0)(ar4,a5,ar6,ar7);
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
  if (ar5 == 1) {
    switch((undefined2)ar6) {
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
  if (ar5 == 2) {
    switch((undefined2)ar6) {
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
  int iVar3;
  undefined4 uVar4;
  undefined *a7;
  undefined4 uVar5;
  int iVar6;
  int iStack_b4;
  int aiStack_b0 [4];
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_38;
  
  *(undefined4 *)((int)aiStack_b0 + DAT_8c027ae4) = 0;
  *(undefined4 *)((int)aiStack_b0 + DAT_8c027ae8) = 0;
  uVar5 = 0;
  iVar6 = ar6 * DAT_8c027af0;
  iVar1 = *(int *)(DAT_8c027aec + ar4) + iVar6;
  iStack_b4 = ar4 + ar6;
  iStack_78 = ar6;
  *(undefined4 *)((int)aiStack_b0 + DAT_8c027af4) = 0;
  iVar2 = *(int *)(DAT_8c027af8 + ar4);
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
    a7 = (&switchD_8c027ae0::switchdataD_8c027afc)[iVar2];
    iVar3 = ar5;
    switch(iVar2) {
    case 0:
      *(undefined2 *)(DAT_8c027b3c + ar4) = 0;
      *(undefined4 *)(DAT_8c027b40 + ar4) = 1;
      break;
    case 1:
      if (*(int *)(iVar1 + 0x18) == 0) {
        *(undefined4 *)(DAT_8c027b54 + ar4) = 2;
      }
      else {
        uVar4 = (*(code *)PTR_FUN_8c027b8c)
                          (ar5,*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(DAT_8c027b88 + ar4),
                           iStack_b4);
        *(undefined4 *)((int)aiStack_b0 + DAT_8c027b90) = uVar4;
        iStack_7c = *(int *)((int)aiStack_b0 + DAT_8c027b90);
        if (iStack_7c == 1) {
          *(undefined4 *)(DAT_8c027b94 + ar4) = 2;
        }
        else if (iStack_7c == 0) {
          iStack_b4 = 5;
          (*(code *)PTR_report_error_message_8c027bc8)
                    (*(undefined4 *)(iVar1 + 0x18),PTR_s_GRAPHICS_COMMON_8c027bc0 + DAT_8c027bc4,0,2
                    );
        }
      }
      break;
    case 2:
      if (*(int *)(iVar1 + 4) == 0) {
        *(undefined4 *)(DAT_8c027bdc + ar4) = 3;
      }
      else {
        iStack_80 = (int)*(short *)(DAT_8c027c58 + ar4);
        iStack_84 = (int)*(short *)(DAT_8c027c58 + ar4);
        iStack_b4 = 0;
        iVar1 = (*(code *)PTR_s_Failed_to_Read_CAnimal_LoadM_02839e_8c027c68)
                          (ar4,*(undefined4 *)(iStack_80 * 4 + *(int *)(iVar1 + 4)),
                           *(undefined4 *)(DAT_8c027c64 + ar4),
                           *(int *)(DAT_8c027c60 + iVar1) + iStack_84 * 4);
        if (iVar1 == 1) {
          *(undefined2 *)(DAT_8c027c58 + ar4) = 0;
          *(undefined4 *)(DAT_8c027c6c + ar4) = 3;
        }
      }
      break;
    case 3:
      if (*(int *)(iVar1 + 0x1c) == 0) {
        *(undefined4 *)(DAT_8c027c80 + ar4) = 4;
      }
      else {
        iVar2 = (int)&iStack_b4 + DAT_8c027ccc;
        uVar4 = *(undefined4 *)(DAT_8c027cd0 + ar4);
        iStack_38 = (*(code *)PTR_FUN_8c027cd4)(ar5,*(undefined4 *)(iVar1 + 0x1c),uVar4,iVar2);
        iStack_88 = iStack_38;
        if (iStack_38 == 1) {
          (*(code *)PTR_FUN_8c027ce0)
                    (iVar1 + DAT_8c027cdc,*(undefined4 *)((int)aiStack_b0 + DAT_8c027cd8),uVar4,
                     iVar2);
          *(undefined4 *)(DAT_8c027ce4 + ar4) = 4;
        }
        else if (iStack_38 == 0) {
          iStack_b4 = 5;
          (*(code *)PTR_report_error_message_8c027d1c)
                    (*(undefined4 *)(iVar1 + 0x18),PTR_s_GRAPHICS_COMMON_8c027d14 + DAT_8c027d18,0,2
                    );
        }
      }
      break;
    case 4:
      if (*(int *)(iVar1 + 8) == 0) {
        *(undefined4 *)(DAT_8c027d30 + ar4) = 5;
      }
      else {
        iStack_8c = (int)*(short *)(DAT_8c027da0 + ar4);
        iStack_90 = (int)*(short *)(DAT_8c027da0 + ar4);
        iStack_b4 = 1;
        iVar1 = (*(code *)PTR_s_Failed_to_Read_CAnimal_LoadM_02839e_8c027db0)
                          (ar4,*(undefined4 *)(iStack_8c * 4 + *(int *)(iVar1 + 8)),
                           *(undefined4 *)(DAT_8c027dac + ar4),
                           *(int *)(DAT_8c027da8 + iVar1) + iStack_90 * 4);
        if (iVar1 == 1) {
          *(undefined2 *)(DAT_8c027da0 + ar4) = 0;
          *(undefined4 *)(DAT_8c027db4 + ar4) = 5;
        }
      }
      break;
    case 5:
      iVar2 = (int)&iStack_b4 + DAT_8c027e00;
      uVar4 = *(undefined4 *)(DAT_8c027e04 + ar4);
      iStack_40 = (*(code *)PTR_FUN_8c027e08)(ar5,*(undefined4 *)(iVar1 + 0xc),uVar4,iVar2);
      iStack_94 = iStack_40;
      if (iStack_40 == 1) {
        (*(code *)PTR_FUN_8c027e10)
                  (iVar1 + 0x70,*(undefined4 *)((int)aiStack_b0 + DAT_8c027e0c),uVar4,iVar2);
        *(undefined4 *)(DAT_8c027e14 + ar4) = 6;
      }
      else if (iStack_40 == 0) {
        iStack_b4 = 5;
        (*(code *)PTR_report_error_message_8c027e44)
                  (*(undefined4 *)(iVar1 + 0xc),PTR_s_GRAPHICS_COMMON_8c027e3c + DAT_8c027e40,0,2);
      }
      break;
    case 6:
      if (*(int *)(iVar1 + 0x20) == 0) {
        iVar2 = (int)&iStack_b4 + DAT_8c027ec4;
        uVar4 = *(undefined4 *)(DAT_8c027ec8 + ar4);
        iStack_44 = (*(code *)PTR_FUN_8c027ecc)(ar5,*(undefined4 *)(iVar1 + 0xc),uVar4,iVar2);
        iStack_98 = iStack_44;
        if (iStack_44 == 1) {
          (**(code **)(*(int *)(iVar1 + 0x78) + 8))
                    ((int *)(iVar1 + 0x78),*(undefined4 *)((int)aiStack_b0 + DAT_8c027ed0),uVar4,
                     iVar2);
          *(undefined4 *)(DAT_8c027ed4 + ar4) = 7;
        }
        else if (iStack_44 == 0) {
          iStack_b4 = 5;
          (*(code *)PTR_report_error_message_8c027f04)
                    (*(undefined4 *)(iVar1 + 0xc),PTR_s_GRAPHICS_COMMON_8c027efc + DAT_8c027f00,0,2)
          ;
        }
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 + 0xc);
        (*(code *)PTR_s_CAnimal_SetPVMTexture_s_029404_8c027e78)(ar4,iVar1 + 0x20,uVar4,a7);
        (**(code **)(*(int *)(iVar1 + 0x78) + 8))((int *)(iVar1 + 0x78),iVar1 + 0x28,uVar4,a7);
        *(undefined4 *)(DAT_8c027e7c + ar4) = 7;
      }
      break;
    case 7:
      if (*(int *)(iVar1 + 0x20) == 0) {
        uStack_50 = (*(code *)PTR_get_field_4_0253e4_8c027ff4)(iVar1 + 0x78,ar5,iVar6,a7);
        iVar2 = (*(code *)PTR_FUN_8c027ffc)
                          (ar5,*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(DAT_8c027ff8 + ar4),
                           uStack_50);
        if (iVar2 == 0) {
          iStack_b4 = 5;
          iStack_a0 = iVar2;
          iStack_54 = iVar2;
          (*(code *)PTR_report_error_message_8c028008)
                    (*(undefined4 *)(iVar1 + 0x14),PTR_s_GRAPHICS_COMMON_8c028000 + DAT_8c028004,0,2
                    );
        }
      }
      else {
        uStack_48 = (*(code *)PTR_get_field_4_0253e4_8c027f6c)(iVar1 + 0x78,ar5,iVar6,a7);
        iVar2 = (*(code *)PTR_s_CDCGD_ReadPVMFileReq_021082_8c027f74)
                          (ar5,*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(DAT_8c027f70 + ar4),
                           uStack_48);
        if (iVar2 == 0) {
          iStack_b4 = 5;
          iStack_9c = iVar2;
          iStack_4c = iVar2;
          (*(code *)PTR_report_error_message_8c027f84)
                    (PTR_s_GRAPHICS_COMMON_8c027f78 + DAT_8c027f80,
                     PTR_s_GRAPHICS_COMMON_8c027f78 + DAT_8c027f7c,0,2);
        }
      }
      if (iVar2 == 1) {
        if (*(int *)(iVar1 + 0x34) == 0) {
          *(undefined4 *)(DAT_8c02801c + ar4) = 8;
        }
        else {
          *(undefined4 *)(DAT_8c02800c + ar4) = 9;
        }
      }
      break;
    case 8:
      if (*(int *)(iVar1 + 0x10) == 0) {
        *(undefined4 *)(DAT_8c028104 + ar4) = 0;
        uVar5 = 1;
      }
      else {
        if (*(int *)(iVar1 + 0x48) == 0) {
          uStack_68 = (*(code *)PTR_get_field_4_0253e4_8c02824c)
                                (iVar1 + DAT_8c028248,PTR_get_field_4_0253e4_8c02824c,iVar6,a7);
          iVar2 = (*(code *)PTR_FUN_8c028254)
                            (ar5,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(DAT_8c028250 + ar4),
                             uStack_68);
          if (iVar2 == 0) {
            iStack_b4 = 5;
            aiStack_b0[1] = iVar2;
            iStack_6c = iVar2;
            (*(code *)PTR_report_error_message_8c028260)
                      (*(undefined4 *)(iVar1 + 0x10),PTR_s_GRAPHICS_COMMON_8c028258 + DAT_8c02825c,0
                       ,2);
          }
        }
        else {
          (*(code *)PTR_s_CAnimal_SetPVMTexture_s_029404_8c0281a4)
                    (ar4,iVar1 + 0x48,*(undefined4 *)(iVar1 + 0xc),a7);
          iVar3 = iVar1 + 0x50;
          iVar2 = DAT_8c0281a8;
          iVar6 = iVar3;
          (**(code **)(*(int *)(iVar1 + DAT_8c0281a8) + 8))
                    ((int *)(iVar1 + DAT_8c0281a8),iVar3,DAT_8c0281a8,iVar3);
          uStack_60 = (*(code *)PTR_get_field_4_0253e4_8c0281ac)
                                (iVar1 + DAT_8c0281a8,iVar3,iVar2,iVar6);
          iVar2 = (*(code *)PTR_s_CDCGD_ReadPVMFileReq_021082_8c0281b4)
                            (ar5,*(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(DAT_8c0281b0 + ar4),
                             uStack_60);
          if (iVar2 == 0) {
            iStack_b4 = 5;
            aiStack_b0[2] = iVar2;
            iStack_64 = iVar2;
            (*(code *)PTR_report_error_message_8c0281c4)
                      (PTR_s_GRAPHICS_COMMON_8c0281b8 + DAT_8c0281c0,
                       PTR_s_GRAPHICS_COMMON_8c0281b8 + DAT_8c0281bc,0,2);
          }
        }
        if (iVar2 == 1) {
          if (*(int *)(iVar1 + 0x5c) == 0) {
            *(undefined4 *)(DAT_8c028278 + ar4) = 0;
            uVar5 = 1;
          }
          else {
            *(undefined4 *)(DAT_8c028264 + ar4) = 0xb;
          }
        }
      }
      break;
    case 9:
      iVar6 = *(int *)(iVar1 + 0xc);
      (*(code *)PTR_s_CAnimal_SetPVMTexture_s_029404_8c0280c8)(ar4,iVar1 + 0x34,iVar6,a7);
      iVar3 = iVar1 + 0x3c;
      (**(code **)(*(int *)(iVar1 + DAT_8c0280cc) + 8))
                ((int *)(iVar1 + DAT_8c0280cc),iVar3,iVar6,a7);
      *(undefined4 *)(DAT_8c0280d0 + ar4) = 10;
    case 10:
      uStack_58 = (*(code *)PTR_get_field_4_0253e4_8c0280d4)(iVar1 + DAT_8c0280cc,iVar3,iVar6,a7);
      iVar1 = (*(code *)PTR_s_CDCGD_ReadPVMFileReq_021082_8c0280dc)
                        (ar5,*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(DAT_8c0280d8 + ar4),
                         uStack_58);
      if (iVar1 == 0) {
        iStack_b4 = 5;
        aiStack_b0[3] = iVar1;
        iStack_5c = iVar1;
        (*(code *)PTR_report_error_message_8c0280ec)
                  (PTR_s_GRAPHICS_COMMON_8c0280e0 + DAT_8c0280e8,
                   PTR_s_GRAPHICS_COMMON_8c0280e0 + DAT_8c0280e4,0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(DAT_8c0280d0 + ar4) = 8;
      }
      break;
    case 0xb:
      uVar4 = *(undefined4 *)(iVar1 + 0xc);
      iVar6 = iVar1 + 0x5c;
      (*(code *)PTR_s_CAnimal_SetPVMTexture_s_029404_8c02831c)(ar4,iVar6,uVar4,iVar6);
      iVar2 = iVar1 + 100;
      (**(code **)(*(int *)(iVar1 + DAT_8c028320) + 8))
                ((int *)(iVar1 + DAT_8c028320),iVar2,uVar4,iVar6);
      uStack_70 = (*(code *)PTR_get_field_4_0253e4_8c028324)(iVar1 + DAT_8c028320,iVar2,uVar4,iVar6)
      ;
      iVar1 = (*(code *)PTR_s_CDCGD_ReadPVMFileReq_021082_8c02832c)
                        (ar5,*(undefined4 *)(iVar1 + 0x5c),*(undefined4 *)(DAT_8c028328 + ar4),
                         uStack_70);
      if (iVar1 == 0) {
        iStack_b4 = 5;
        aiStack_b0[0] = iVar1;
        iStack_74 = iVar1;
        (*(code *)PTR_report_error_message_8c02833c)
                  (PTR_s_GRAPHICS_COMMON_8c028330 + DAT_8c028338,
                   PTR_s_GRAPHICS_COMMON_8c028330 + DAT_8c028334,0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(DAT_8c028340 + ar4) = 0;
        uVar5 = 1;
      }
    }
  }
  else {
    iStack_b4 = 5;
    (*(code *)PTR_report_error_message_8c02838c)
              (PTR_s_GRAPHICS_COMMON_8c028380 + DAT_8c028388,
               PTR_s_GRAPHICS_COMMON_8c028380 + DAT_8c028384,0,2);
  }
  return uVar5;
}



/* s_Failed_to_Read_CAnimal_LoadM_02839e @ 8c028390 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_Failed_to_Read_CAnimal_LoadM_02839e(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 *ar7)

{
  undefined4 *a7;
  undefined4 uVar1;
  int iVar2;
  short *in_stack_00000000;
  short in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_00000010;
  undefined4 auStack_24 [2];
  
  uVar1 = 0;
  iVar2 = 2;
  auStack_24[0] = 0;
  if (in_stack_00000010 == 0) {
    a7 = auStack_24;
    iVar2 = (*(code *)PTR_FUN_8c028490)(in_stack_00000008,ar5,ar6,a7);
  }
  else {
    a7 = ar7;
    if (in_stack_00000010 == 1) {
      if (*ar5 == '\0') {
        iVar2 = 1;
      }
      else {
        a7 = auStack_24;
        iVar2 = (*(code *)PTR_FUN_8c028494)(in_stack_00000008,ar5,ar6,a7);
      }
    }
  }
  if (iVar2 == 1) {
    if (in_stack_00000010 == 0) {
      (*(code *)PTR_FUN_8c028498)(ar7,auStack_24[0],ar6,a7);
    }
    else if (in_stack_00000010 == 1) {
      (*(code *)PTR_FUN_8c02849c)(ar7,auStack_24[0],ar6,a7);
    }
    *in_stack_00000000 = *in_stack_00000000 + 1;
    if (*in_stack_00000000 == in_stack_00000004) {
      uVar1 = 1;
    }
  }
  else if (iVar2 == 0) {
    (*(code *)PTR_report_error_message_8c0284a8)
              (ar5,PTR_s_GRAPHICS_COMMON_8c0284a0 + DAT_8c0284a4,1,2);
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
  undefined4 *a7;
  undefined4 *a7_00;
  int iVar5;
  undefined4 uStack_24;
  undefined4 auStack_20 [2];
  
  iVar5 = *(int *)(DAT_8c028740 + ar4) + ar6 * DAT_8c028744;
  auStack_20[0] = 0;
  uStack_24 = 0;
  a7_00 = (undefined4 *)(ar4 + ar6);
  iVar3 = ar6;
  if (*(int *)(iVar5 + 0x18) != 0) {
    iVar3 = *(int *)(DAT_8c028748 + ar4);
    ar7 = a7_00;
    iVar1 = (*(code *)PTR_FUN_8c02874c)(ar5,*(undefined4 *)(iVar5 + 0x18),iVar3,a7_00);
    if (iVar1 == 0) {
      ar7 = (undefined4 *)0x2;
      iVar3 = 0;
      (*(code *)PTR_report_error_message_8c028758)
                (*(undefined4 *)(iVar5 + 0x18),PTR_s_GRAPHICS_COMMON_8c028750 + DAT_8c028754,0,2);
    }
  }
  for (iVar1 = 0; iVar1 < *(short *)(DAT_8c028774 + iVar5); iVar1 = iVar1 + 1) {
    if (**(char **)(iVar1 * 4 + *(int *)(iVar5 + 4)) == '\0') {
      ar7 = (undefined4 *)0x2;
      iVar3 = 0;
      (*(code *)PTR_report_error_message_8c028758)
                (PTR_s_GRAPHICS_COMMON_8c028750 + DAT_8c028768,
                 PTR_s_GRAPHICS_COMMON_8c028750 + DAT_8c028764,0,2);
      auStack_20[0] = 0;
    }
    else {
      ar7 = auStack_20;
      iVar3 = *(int *)(DAT_8c028748 + ar4);
      iVar2 = (*(code *)PTR_FUN_8c02875c)
                        (ar5,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 4)),iVar3,ar7);
      if (iVar2 == 0) {
        ar7 = (undefined4 *)0x2;
        iVar3 = 0;
        (*(code *)PTR_report_error_message_8c028758)
                  (*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 4)),
                   PTR_s_GRAPHICS_COMMON_8c028750 + DAT_8c028760,0,2);
      }
    }
    (*(code *)PTR_FUN_8c028770)(*(int *)(DAT_8c02876c + iVar5) + iVar1 * 4,auStack_20[0],iVar3,ar7);
  }
  if (*(int *)(iVar5 + 0x1c) != 0) {
    ar7 = auStack_20;
    iVar3 = *(int *)(DAT_8c028748 + ar4);
    iVar1 = (*(code *)PTR_FUN_8c02875c)(ar5,*(undefined4 *)(iVar5 + 0x1c),iVar3,ar7);
    if (iVar1 == 1) {
      (*(code *)PTR_FUN_8c028770)(iVar5 + DAT_8c028778,auStack_20[0],iVar3,ar7);
    }
    else {
      ar7 = (undefined4 *)0x2;
      iVar3 = 0;
      (*(code *)PTR_report_error_message_8c028758)
                (*(undefined4 *)(iVar5 + 0x1c),PTR_s_GRAPHICS_COMMON_8c028750 + DAT_8c02877c,0,2);
    }
  }
  for (iVar1 = 0; iVar1 < *(short *)(DAT_8c028790 + iVar5); iVar1 = iVar1 + 1) {
    if (**(char **)(iVar1 * 4 + *(int *)(iVar5 + 8)) == '\0') {
      auStack_20[0] = 0;
    }
    else {
      ar7 = auStack_20;
      iVar3 = *(int *)(DAT_8c028748 + ar4);
      iVar2 = (*(code *)PTR_FUN_8c028780)
                        (ar5,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 8)),iVar3,ar7);
      if (iVar2 == 0) {
        ar7 = (undefined4 *)0x2;
        iVar3 = 0;
        (*(code *)PTR_report_error_message_8c028758)
                  (*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 8)),
                   PTR_s_GRAPHICS_COMMON_8c028750 + DAT_8c028784,0,2);
      }
      (*(code *)PTR_FUN_8c02878c)
                (*(int *)(DAT_8c028788 + *(int *)(DAT_8c028740 + ar4) + ar6 * DAT_8c028744) +
                 iVar1 * 4,auStack_20[0],iVar3,ar7);
    }
    (*(code *)PTR_FUN_8c02878c)(*(int *)(DAT_8c028788 + iVar5) + iVar1 * 4,auStack_20[0],iVar3,ar7);
  }
  a7 = &uStack_24;
  uVar4 = *(undefined4 *)(DAT_8c028748 + ar4);
  iVar3 = (*(code *)PTR_FUN_8c028794)(ar5,*(undefined4 *)(iVar5 + 0xc),uVar4,a7);
  if (iVar3 == 0) {
    a7 = (undefined4 *)0x2;
    uVar4 = 0;
    (*(code *)PTR_report_error_message_8c028758)
              (*(undefined4 *)(iVar5 + 0xc),PTR_s_GRAPHICS_COMMON_8c028750 + DAT_8c028798,0,2);
  }
  (*(code *)PTR_FUN_8c02879c)(iVar5 + 0x70,uStack_24,uVar4,a7);
  (*(code *)PTR_s_CAnimal_LoadGResourceWait_0287ac_8c0287a0)(ar4,ar5,0,a7_00);
  uVar4 = 0;
  if (*(int *)(iVar5 + 0x34) != 0) {
    uVar4 = (*(code *)PTR_s_CAnimal_LoadGResourceWait_0287ac_8c0287a0)(ar4,ar5,1,a7_00);
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
  undefined *a5;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *a7;
  undefined4 auStack_18 [2];
  
  iVar1 = (**(code **)(DAT_8c028a78 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7);
  if (*(int *)(ar6 * 0x14 + iVar1 + 0x20) == 0) {
    auStack_18[0] = 0;
    a7 = auStack_18;
    uVar4 = *(undefined4 *)(DAT_8c028a84 + ar4);
    iVar3 = (*(code *)PTR_FUN_8c028a9c)(ar5,*(undefined4 *)(iVar1 + 0xc),uVar4,a7);
    if (iVar3 == 0) {
      a7 = (undefined4 *)0x2;
      uVar4 = 0;
      (*(code *)PTR_report_error_message_8c028a98)
                (*(undefined4 *)(iVar1 + 0xc),PTR_s_GRAPHICS_COMMON_8c028a8c + DAT_8c028aa0,0,2);
    }
    piVar2 = (int *)(iVar1 + ar6 * 8 + 0x78);
    uVar5 = auStack_18[0];
    (**(code **)(*piVar2 + 8))(piVar2,auStack_18[0],uVar4,a7);
    uVar4 = (*(code *)PTR_get_field_4_0253e4_8c028a80)(iVar1 + ar6 * 8 + 0x78,uVar5,uVar4,a7);
    uVar5 = *(undefined4 *)(DAT_8c028a84 + ar4);
    a5 = *(undefined **)(iVar1 + 0x14);
    iVar3 = (*(code *)PTR_FUN_8c028aa4)(ar5,a5,uVar5,uVar4);
    if (iVar3 == 0) {
      uVar4 = 2;
      uVar5 = 0;
      a5 = PTR_s_GRAPHICS_COMMON_8c028a8c + DAT_8c028aa8;
      (*(code *)PTR_report_error_message_8c028a98)(*(undefined4 *)(iVar1 + 0x14),a5,0,2);
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
    a5 = *(undefined **)(ar6 * 0x14 + iVar1 + 0x20);
    iVar3 = (*(code *)PTR_FUN_8c028a88)(ar5,a5,uVar5,uVar4);
    if (iVar3 == 0) {
      uVar4 = 2;
      uVar5 = 0;
      a5 = PTR_s_GRAPHICS_COMMON_8c028a8c + DAT_8c028a90;
      (*(code *)PTR_report_error_message_8c028a98)
                (PTR_s_GRAPHICS_COMMON_8c028a8c + DAT_8c028a94,a5,0,2);
    }
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
    iVar3 = 0;
  }
  else if (*(int *)(ar6 * 0x14 + iVar1 + 0x48) == 0) {
    uVar4 = (*(code *)PTR_get_field_4_0253e4_8c028a80)
                      (iVar1 + ar6 * 8 + DAT_8c028aac,a5,uVar5,uVar4);
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
  int a7;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_8c028bf0 + ar4) + ar6 * DAT_8c028bf4;
  a7 = ar4 + ar6;
  for (iVar3 = 0; iVar3 < *(short *)(DAT_8c028c04 + iVar2); iVar3 = iVar3 + 1) {
    if (**(char **)(iVar3 * 4 + *(int *)(iVar2 + 4)) != '\0') {
      (*(code *)PTR_FUN_8c028bfc)
                (ar5,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar2 + 4)),
                 *(undefined4 *)(DAT_8c028bf8 + ar4),a7);
    }
    if (**(char **)(iVar3 * 4 + *(int *)(iVar2 + 8)) != '\0') {
      (*(code *)PTR_FUN_8c028c00)
                (ar5,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar2 + 8)),
                 *(undefined4 *)(DAT_8c028bf8 + ar4),a7);
    }
  }
  iVar3 = a7;
  (*(code *)PTR_FUN_8c028c08)
            (ar5,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(DAT_8c028bf8 + ar4),a7);
  if (*(int *)(iVar2 + 0x20) == 0) {
    iVar3 = a7;
    (*(code *)PTR_FUN_8c028c0c)
              (ar5,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(DAT_8c028bf8 + ar4),a7);
  }
  if (*(int *)(iVar2 + 0x18) != 0) {
    (*(code *)PTR_FUN_8c028c10)
              (ar5,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(DAT_8c028bf8 + ar4),a7);
    iVar3 = a7;
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

int FUN_8c028ccc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c028d68)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c028d70)(ar4 + DAT_8c028d6c,ar5 + 0x4c,ar6,ar7);
  iVar1 = ar5 + DAT_8c028d74;
  (*(code *)PTR_FUN_8c028d7c)(ar4 + DAT_8c028d78,iVar1,ar6,ar7);
  iVar1 = (*(code *)PTR_get_field_13c_028d9c_8c028d80)(ar4 + DAT_8c028d6c,iVar1,ar6,ar7);
  if (iVar1 == 2) {
    (**(code **)(**(int **)(DAT_8c028d88 + ar4) + 0x2c))
              (*(int **)(DAT_8c028d88 + ar4),ar5 + DAT_8c028d84,2,ar7);
  }
  else {
    (**(code **)(**(int **)(DAT_8c028d88 + ar4) + 0x24))
              (*(int **)(DAT_8c028d88 + ar4),ar5 + DAT_8c028d84,ar6,ar7);
  }
  *(undefined4 *)(DAT_8c028d8c + ar4) = *(undefined4 *)(DAT_8c028d90 + ar5);
  iVar1 = DAT_8c028d98;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c028d94) = *(undefined4 *)(ar5 + DAT_8c028d98);
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c028d94) = *(undefined8 *)(ar5 + DAT_8c028d98);
  }
  return iVar1;
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
  undefined4 uVar2;
  
  uVar1 = (*(code *)PTR_FUN_8c028e9c)(ar5,ar5,ar6,ar7);
  uVar1 = uVar1 & 0xffff;
  (*(code *)PTR_FUN_8c028ea4)(ar4 + DAT_8c028ea0,uVar1,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c028ea8)(ar5,uVar1,ar6,ar7);
  uVar1 = uVar1 & 0xffff;
  (*(code *)PTR_FUN_8c028eac)(ar4 + DAT_8c028ea0,uVar1,ar6,ar7);
  uVar2 = (*(code *)PTR_get_field_13c_028d9c_8c028eb4)(ar4 + DAT_8c028eb0,uVar1,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c028ebc)(ar4 + DAT_8c028eb8,uVar2,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c028ec4)(*(undefined4 *)(DAT_8c028ec0 + ar4),uVar2,ar6,ar7);
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

/* WARNING: Unknown calling convention */

int FUN_8c028ef0(int ar4,float *ar5,float *ar6,float *ar7)

{
  int iVar1;
  undefined4 in_fr1;
  float fVar2;
  double dVar3;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(undefined4 *)(ar4 + 0x30);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x30);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c028f28),in_fr1);
  }
  else {
    dVar3 = *(double *)(ar4 + DAT_8c028f28);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *ar5 = fVar2;
    fVar2 = *(float *)(ar4 + 0x34);
  }
  else {
    *(undefined8 *)ar5 = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x34);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c028f2c),fVar2);
  }
  else {
    dVar3 = *(double *)(ar4 + DAT_8c028f2c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *ar6 = fVar2;
    fVar2 = *(float *)(ar4 + 0x38);
  }
  else {
    *(undefined8 *)ar6 = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x38);
  }
  iVar1 = DAT_8c028f30;
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c028f30),fVar2);
  }
  else {
    dVar3 = *(double *)(ar4 + DAT_8c028f30);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *ar7 = fVar2;
  }
  else {
    *(undefined8 *)ar7 = in_xd0;
  }
  return iVar1;
}



/* FUN_8c028f34 @ 8c028f34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c028f34(int ar4,undefined8 *ar5,undefined8 *ar6,undefined8 *ar7)

{
  int iVar1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = *(undefined4 *)(ar4 + DAT_8c028f54);
  }
  else {
    *ar5 = *(undefined8 *)(ar4 + DAT_8c028f54);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar6 = *(undefined4 *)(ar4 + DAT_8c028f58);
  }
  else {
    *ar6 = *(undefined8 *)(ar4 + DAT_8c028f58);
  }
  iVar1 = DAT_8c028f5c;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar7 = *(undefined4 *)(ar4 + DAT_8c028f5c);
  }
  else {
    *ar7 = *(undefined8 *)(ar4 + DAT_8c028f5c);
  }
  return iVar1;
}



/* FUN_8c028f60 @ 8c028f60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c028f60(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  int a5;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c029008)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c029010)(ar4 + DAT_8c02900c,ar5 + 0x4c,ar6,ar7);
  a5 = ar5 + DAT_8c029014;
  (*(code *)PTR_FUN_8c02901c)(ar4 + DAT_8c029018,a5,ar6,ar7);
  iVar1 = (*(code *)PTR_get_field_13c_028d9c_8c029020)(ar4 + DAT_8c02900c,a5,ar6,ar7);
  if (iVar1 == 2) {
    a6 = (*(code *)PTR_get_field_13c_028d9c_8c029020)(ar4 + DAT_8c02900c,a5,ar6,ar7);
    (**(code **)(**(int **)(DAT_8c029028 + ar4) + 0x30))
              (*(int **)(DAT_8c029028 + ar4),ar5 + DAT_8c029024,a6,ar7);
  }
  else {
    (**(code **)(**(int **)(DAT_8c029028 + ar4) + 0x28))
              (*(int **)(DAT_8c029028 + ar4),ar5 + DAT_8c029024,ar6,ar7);
  }
  *(undefined4 *)(DAT_8c02902c + ar5) = *(undefined4 *)(DAT_8c029030 + ar4);
  iVar1 = DAT_8c029038;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar5 + DAT_8c029034) = *(undefined4 *)(ar4 + DAT_8c029038);
  }
  else {
    *(undefined8 *)(ar5 + DAT_8c029034) = *(undefined8 *)(ar4 + DAT_8c029038);
  }
  return iVar1;
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
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_FUN_8c029108)(ar4 + DAT_8c029104,ar5,ar6,ar7);
  puVar2 = (undefined8 *)(*(int *)(DAT_8c02910c + ar4) + (short)uVar1 * DAT_8c029110 + DAT_8c029114)
  ;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = *(undefined4 *)puVar2;
  }
  else {
    *ar5 = *puVar2;
  }
  return DAT_8c029118;
}



/* FUN_8c02911c @ 8c02911c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02911c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_fr1;
  undefined8 uVar2;
  undefined4 uVar4;
  ulonglong uVar3;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(DAT_8c02930c + ar4) = 0;
  *(undefined4 *)(DAT_8c029310 + ar4) = 0;
  *(undefined4 *)(DAT_8c029314 + ar4) = 0;
  *(undefined4 *)(DAT_8c029318 + ar4) = 0;
  *(undefined4 *)(DAT_8c02931c + ar4) = 0;
  *(undefined4 *)(DAT_8c029320 + ar4) = 1;
  *(undefined4 *)(DAT_8c029324 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c029328) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c029328) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c02932c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c02932c) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c029330) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c029330) = CONCAT44(0x3f800000,in_fr1);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c029334) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c029334) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c029338) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c029338) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c02933c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c02933c) = CONCAT44(0x3f800000,in_fr1);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44(DAT_8c029344,in_fr1);
    *(undefined4 *)(ar4 + DAT_8c029340) = DAT_8c029344;
  }
  else {
    uVar3 = CONCAT44(DAT_8c029348,DAT_8c029344);
    *(ulonglong *)(ar4 + DAT_8c029340) = uVar3;
  }
  (*(code *)PTR_FUN_8c02934c)(ar4 + DAT_8c029348,ar5,ar6,ar7);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c029350) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c029350) = uVar3 & 0xffffffff;
  }
  *(undefined4 *)(DAT_8c029354 + ar4) = 0;
  *(undefined4 *)(DAT_8c029358 + ar4) = 0;
  *(undefined4 *)(DAT_8c02935c + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c029360) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c029360) = uVar3 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c029364) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c029364) = CONCAT44(0x3f800000,(int)uVar3);
  }
  *(undefined4 *)(DAT_8c029368 + ar4) = 0;
  *(undefined2 *)(DAT_8c02936c + ar4) = 0;
  *(undefined4 *)(DAT_8c029370 + ar4) = 0;
  *(undefined4 *)(DAT_8c029374 + ar4) = 0;
  *(undefined2 *)(DAT_8c029378 + ar4) = 0;
  *(undefined4 *)(DAT_8c02937c + ar4) = 0;
  *(undefined4 *)(DAT_8c029380 + ar4) = 0;
  *(undefined4 *)(DAT_8c029384 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar2 = CONCAT44(*(undefined4 *)PTR_DAT_8c02938c,(int)uVar3);
    *(undefined4 *)(ar4 + DAT_8c029388) = *(undefined4 *)PTR_DAT_8c02938c;
  }
  else {
    uVar2 = *(undefined8 *)PTR_DAT_8c02938c;
    *(undefined8 *)(ar4 + DAT_8c029388) = uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = *(undefined4 *)(PTR_DAT_8c02938c + 4);
    uVar2 = CONCAT44(uVar4,(int)uVar2);
    *(undefined4 *)(ar4 + DAT_8c029390) = uVar4;
  }
  else {
    uVar2 = *(undefined8 *)(PTR_DAT_8c02938c + 4);
    *(undefined8 *)(ar4 + DAT_8c029390) = uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = *(undefined4 *)(PTR_DAT_8c02938c + 8);
    uVar2 = CONCAT44(uVar4,(int)uVar2);
    *(undefined4 *)(ar4 + DAT_8c029394) = uVar4;
  }
  else {
    uVar2 = *(undefined8 *)(PTR_DAT_8c02938c + 8);
    *(undefined8 *)(ar4 + DAT_8c029394) = uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = *(undefined4 *)(PTR_DAT_8c02938c + 0xc);
    uVar2 = CONCAT44(uVar4,(int)uVar2);
    *(undefined4 *)(ar4 + DAT_8c029398) = uVar4;
  }
  else {
    uVar2 = *(undefined8 *)(PTR_DAT_8c02938c + 0xc);
    *(undefined8 *)(ar4 + DAT_8c029398) = uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar2 = CONCAT44(*(undefined4 *)PTR_DAT_8c02938c,(int)uVar2);
    *(undefined4 *)(ar4 + DAT_8c02939c) = *(undefined4 *)PTR_DAT_8c02938c;
  }
  else {
    uVar2 = *(undefined8 *)PTR_DAT_8c02938c;
    *(undefined8 *)(ar4 + DAT_8c02939c) = uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = *(undefined4 *)(PTR_DAT_8c02938c + 4);
    uVar2 = CONCAT44(uVar4,(int)uVar2);
    *(undefined4 *)(ar4 + DAT_8c0293a0) = uVar4;
  }
  else {
    uVar2 = *(undefined8 *)(PTR_DAT_8c02938c + 4);
    *(undefined8 *)(ar4 + DAT_8c0293a0) = uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = *(undefined4 *)(PTR_DAT_8c02938c + 8);
    uVar2 = CONCAT44(uVar4,(int)uVar2);
    *(undefined4 *)(ar4 + DAT_8c0293a4) = uVar4;
  }
  else {
    uVar2 = *(undefined8 *)(PTR_DAT_8c02938c + 8);
    *(undefined8 *)(ar4 + DAT_8c0293a4) = uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = (undefined4)*(ulonglong *)(PTR_DAT_8c02938c + 0xc);
    uVar3 = CONCAT44(uVar4,(int)uVar2);
    *(undefined4 *)(ar4 + DAT_8c0293a8) = uVar4;
  }
  else {
    uVar3 = *(ulonglong *)(PTR_DAT_8c02938c + 0xc);
    *(ulonglong *)(ar4 + DAT_8c0293a8) = uVar3;
  }
  *(undefined2 *)(DAT_8c0293ac + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0293b0) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0293b0) = uVar3 & 0xffffffff;
  }
  *(undefined1 *)(DAT_8c0293b4 + ar4) = 1;
  *(undefined4 *)(DAT_8c0293b8 + ar4) = 0;
  *(undefined4 *)(DAT_8c0293bc + ar4) = 0;
  *(undefined4 *)(DAT_8c0293c0 + ar4) = 0;
  *(undefined4 *)(DAT_8c0293c4 + ar4) = 0;
  uVar4 = (*(code *)PTR_rand_8c0293c8)(ar4,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0293cc)(uVar4,100,ar6,ar7);
  if (iVar1 < 0x14) {
    *(undefined4 *)(DAT_8c0293d0 + ar4) = 0;
  }
  else if (iVar1 < 0x5a) {
    *(undefined4 *)(DAT_8c0293d0 + ar4) = 1;
  }
  else {
    *(undefined4 *)(DAT_8c0293d0 + ar4) = 2;
  }
  return 1;
}



/* FUN_8c0293d4 @ 8c0293d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0293d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0293f4)(ar4 + DAT_8c0293f0,1,ar6,ar7);
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
  undefined1 *a5;
  undefined1 auStack_10c [260];
  
  a5 = ar5;
  if (*(int *)(ar5 + 0x10) == 0) {
    (*(code *)PTR_FUN_8c0294a8)(auStack_10c,ar5,ar6,ar7);
    ar7 = 2;
    ar6 = 0;
    a5 = auStack_10c;
    (*(code *)PTR_report_error_message_8c0294b0)
              (PTR_s_GRAPHICS_COMMON_8c0294a0 + DAT_8c0294ac,a5,0,2);
  }
  if (*(int *)(ar5 + 4) == 0) {
    (*(code *)PTR_FUN_8c0294a8)(auStack_10c,a5,ar6,ar7);
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

/* WARNING: Unknown calling convention */

undefined4 FUN_8c029510(int ar4,int ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  int a6;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  int *piVar4;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar5;
  double dVar6;
  undefined4 in_fr15;
  double in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar5 = auStack_4;
  }
  else {
    puVar5 = auStack_8;
  }
  *(undefined4 *)(puVar5 + -4) = unaff_r14;
  *(undefined4 *)(puVar5 + -8) = unaff_r13;
  *(undefined4 *)(puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar5 + -0x14) = in_PR;
  uVar1 = (*(code *)PTR_FUN_8c029724)(ar4 + DAT_8c029720,ar5,ar6,ar7);
  *(short *)(puVar5 + -0x28) = (short)uVar1;
  *(int *)(puVar5 + -0x1c) = (int)*(short *)(puVar5 + -0x28);
  piVar4 = (int *)(*(int *)(DAT_8c029728 + ar4) + *(int *)(puVar5 + -0x1c) * DAT_8c02972c);
  *(int *)(puVar5 + -0x20) = *DAT_8c029730 + 1;
  *(int *)(puVar5 + -0x24) = *DAT_8c029730;
  uVar1 = 0x40;
  iVar3 = *(int *)(puVar5 + -0x24) * 0x40 + DAT_8c029734;
  (*(code *)PTR_FUN_8c029738)(*(int *)(puVar5 + -0x20) * 0x40 + DAT_8c029734,iVar3,0x40,ar7);
  *DAT_8c029730 = *DAT_8c029730 + 1;
  (*(code *)PTR_FUN_8c02973c)(0,iVar3,uVar1,ar7);
  iVar3 = ar5;
  a6 = ar6;
  (*(code *)PTR_FUN_8c029740)(ar4,ar5,ar6,ar7);
  if (*(int *)(ar5 + 4) != 0) {
    pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
    if (in_FPSCR_SZ == '\0') {
      in_fr15 = *(undefined4 *)pdVar2;
    }
    else {
      in_xd14 = *pdVar2;
    }
    pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
    dVar6 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(in_fr15,*(undefined4 *)(ar4 + 0x5c));
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * SUB84(dVar6,0),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 * dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)pdVar2 = (int)((ulonglong)dVar6 >> 0x20);
    }
    else {
      *pdVar2 = dVar6;
    }
    if (*(int *)(DAT_8c029744 + ar4) == ar5) {
      iVar3 = ar5;
      (*(code *)PTR_FUN_8c029748)(ar4,ar5,a6,ar7);
    }
    else if (*(int *)(DAT_8c02974c + ar4) == ar5) {
      ar7 = ar4 + DAT_8c029750;
      a6 = ar4 + DAT_8c029754;
      iVar3 = ar4 + DAT_8c029758;
      (*(code *)PTR_FUN_8c02975c)(ar4,iVar3,a6,ar7);
      (*(code *)PTR_FUN_8c029764)(*piVar4 + DAT_8c029760,iVar3,a6,ar7);
      iVar3 = ar4 + DAT_8c029750;
      (*(code *)PTR_FUN_8c029768)(ar4,iVar3,a6,ar7);
      (*(code *)PTR_FUN_8c029764)(*(undefined4 *)(DAT_8c02976c + ar4),iVar3,a6,ar7);
    }
    else if (*(int *)(DAT_8c029770 + ar4) == ar5) {
      ar7 = ar4 + DAT_8c029774;
      a6 = ar4 + DAT_8c029778;
      iVar3 = ar4 + DAT_8c02977c;
      (*(code *)PTR_FUN_8c02975c)(ar4,iVar3,a6,ar7);
      (*(code *)PTR_FUN_8c029764)(*piVar4 + DAT_8c029760,iVar3,a6,ar7);
      iVar3 = ar4 + DAT_8c029774;
      (*(code *)PTR_FUN_8c029768)(ar4,iVar3,a6,ar7);
      (*(code *)PTR_FUN_8c029764)(*(undefined4 *)(DAT_8c02976c + ar4),iVar3,a6,ar7);
    }
    else if ((((*(int *)(DAT_8c029780 + ar4) == ar5) || (*(int *)(DAT_8c029784 + ar4) == ar5)) ||
             (*(int *)(DAT_8c029788 + ar4) == ar5)) || (*(int *)(DAT_8c02978c + ar4) == ar5)) {
      iVar3 = ar5;
      (**(code **)(DAT_8c029790 + *(int *)(ar4 + 8)))(ar4,ar5,a6,ar7);
    }
    else {
      iVar3 = *(int *)(ar5 + 4);
      (*(code *)PTR_FUN_8c029794)(ar4,iVar3,a6,ar7);
    }
    pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)pdVar2 = in_fr15;
    }
    else {
      *pdVar2 = in_xd14;
    }
  }
  if (*(int *)(DAT_8c029798 + ar4) == ar5) {
    (*(code *)PTR_FUN_8c029764)(*piVar4 + DAT_8c02979c,iVar3,a6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c0297a8)(DAT_8c0297a0 + DAT_8c0297a4,iVar3,a6,ar7);
    *(undefined4 *)(puVar5 + -0x18) = uVar1;
    iVar3 = *(int *)(puVar5 + -0x18);
    a6 = ar6;
    (*(code *)PTR_FUN_8c0297ac)(ar4,iVar3,ar6,ar7);
    (*(code *)PTR_FUN_8c029764)(*(undefined4 *)(DAT_8c02976c + ar4),iVar3,a6,ar7);
  }
  if (*(int *)(ar5 + 0x2c) != 0) {
    iVar3 = *(int *)(ar5 + 0x2c);
    a6 = ar6;
    (*(code *)PTR_FUN_8c0297b0)(ar4,iVar3,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c0297b4)(1,iVar3,a6,ar7);
  *DAT_8c029730 = *DAT_8c029730 + -1;
  uVar1 = 0;
  if (*(int *)(ar5 + 0x30) != 0) {
    uVar1 = (*(code *)PTR_FUN_8c0297b0)(ar4,*(undefined4 *)(ar5 + 0x30),ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0297b8 @ 8c0297b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0297b8(int ar4,uint *ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *a5;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int *piVar4;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar5;
  double dVar6;
  undefined4 in_fr15;
  double in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar5 = auStack_4;
  }
  else {
    puVar5 = auStack_8;
  }
  *(undefined4 *)(puVar5 + -4) = unaff_r14;
  *(undefined4 *)(puVar5 + -8) = unaff_r13;
  *(undefined4 *)(puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar5 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar5 + -0x18) = in_PR;
  uVar1 = (*(code *)PTR_FUN_8c029a48)(ar4 + DAT_8c029a44,ar5,ar6,ar7);
  *(short *)(puVar5 + -0x30) = (short)uVar1;
  *(int *)(puVar5 + -0x24) = (int)*(short *)(puVar5 + -0x30);
  piVar4 = (int *)(*(int *)(DAT_8c029a4c + ar4) + *(int *)(puVar5 + -0x24) * DAT_8c029a50);
  *(int *)(puVar5 + -0x28) = *DAT_8c029a54 + 1;
  *(int *)(puVar5 + -0x2c) = *DAT_8c029a54;
  uVar1 = 0x40;
  iVar2 = *(int *)(puVar5 + -0x2c) * 0x40 + DAT_8c029a58;
  (*(code *)PTR_FUN_8c029a5c)(*(int *)(puVar5 + -0x28) * 0x40 + DAT_8c029a58,iVar2,0x40,ar7);
  *DAT_8c029a54 = *DAT_8c029a54 + 1;
  (*(code *)PTR_FUN_8c029a60)(0,iVar2,uVar1,ar7);
  a5 = ar5;
  iVar2 = ar6;
  (*(code *)PTR_FUN_8c029a64)(ar4,ar5,ar6,ar7);
  if (ar5[1] != 0) {
    unaff_r10 = *(undefined4 *)ar5[1];
  }
  if ((*ar5 & DAT_8c029a68) == 0) {
    a5 = DAT_8c029a6c;
    iVar2 = ar6;
    uVar1 = (*(code *)PTR_FUN_8c029a70)(ar5,DAT_8c029a6c,ar6,ar7);
    *(undefined4 *)(puVar5 + -0x1c) = uVar1;
    if (*(int *)(puVar5 + -0x1c) == 1) {
      *(uint **)ar5[1] = DAT_8c029a6c;
    }
  }
  if (ar5[1] != 0) {
    if (in_FPSCR_SZ == '\0') {
      in_fr15 = *(undefined4 *)(ar5[1] + 0x14);
    }
    else {
      in_xd14 = *(double *)(ar5[1] + 0x14);
    }
    dVar6 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(in_fr15,*(undefined4 *)(ar4 + 0x5c));
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * SUB84(dVar6,0),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 * dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar5[1] + 0x14) = (int)((ulonglong)dVar6 >> 0x20);
    }
    else {
      *(double *)(ar5[1] + 0x14) = dVar6;
    }
    if (*(uint **)(DAT_8c029a74 + ar4) == ar5) {
      a5 = ar5;
      (*(code *)PTR_FUN_8c029a78)(ar4,ar5,iVar2,ar7);
    }
    else if (*(uint **)(DAT_8c029a7c + ar4) == ar5) {
      (*(code *)PTR_FUN_8c029a80)(ar4,a5,iVar2,ar7);
      ar7 = ar4 + DAT_8c029a84;
      iVar2 = ar4 + DAT_8c029a88;
      iVar3 = ar4 + DAT_8c029a8c;
      (*(code *)PTR_FUN_8c029a90)(ar4,iVar3,iVar2,ar7);
      (*(code *)PTR_FUN_8c029a98)(*piVar4 + DAT_8c029a94,iVar3,iVar2,ar7);
      a5 = (uint *)(ar4 + DAT_8c029a84);
      (*(code *)PTR_FUN_8c029a9c)(ar4,a5,iVar2,ar7);
      (*(code *)PTR_FUN_8c029a98)(*(undefined4 *)(DAT_8c029aa0 + ar4),a5,iVar2,ar7);
      (*(code *)PTR_FUN_8c029aa4)(ar4,a5,iVar2,ar7);
    }
    else if (*(uint **)(DAT_8c029aa8 + ar4) == ar5) {
      (*(code *)PTR_FUN_8c029a80)(ar4,a5,iVar2,ar7);
      ar7 = ar4 + DAT_8c029aac;
      iVar2 = ar4 + DAT_8c029ab0;
      iVar3 = ar4 + DAT_8c029ab4;
      (*(code *)PTR_FUN_8c029a90)(ar4,iVar3,iVar2,ar7);
      (*(code *)PTR_FUN_8c029a98)(*piVar4 + DAT_8c029a94,iVar3,iVar2,ar7);
      a5 = (uint *)(ar4 + DAT_8c029aac);
      (*(code *)PTR_FUN_8c029a9c)(ar4,a5,iVar2,ar7);
      (*(code *)PTR_FUN_8c029a98)(*(undefined4 *)(DAT_8c029aa0 + ar4),a5,iVar2,ar7);
      (*(code *)PTR_FUN_8c029aa4)(ar4,a5,iVar2,ar7);
    }
    else if ((((*(uint **)(DAT_8c029ab8 + ar4) == ar5) || (*(uint **)(DAT_8c029abc + ar4) == ar5))
             || (*(uint **)(DAT_8c029ac0 + ar4) == ar5)) || (*(uint **)(DAT_8c029ac4 + ar4) == ar5))
    {
      a5 = ar5;
      (**(code **)(DAT_8c029ac8 + *(int *)(ar4 + 8)))(ar4,ar5,iVar2,ar7);
      *(undefined4 *)ar5[1] = unaff_r10;
    }
    else {
      a5 = (uint *)ar5[1];
      (*(code *)PTR_FUN_8c029acc)(ar4,a5,iVar2,ar7);
      *(undefined4 *)ar5[1] = unaff_r10;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar5[1] + 0x14) = in_fr15;
    }
    else {
      *(double *)(ar5[1] + 0x14) = in_xd14;
    }
  }
  if (*(uint **)(DAT_8c029ad0 + ar4) == ar5) {
    (*(code *)PTR_FUN_8c029a80)(ar4,a5,iVar2,ar7);
    (*(code *)PTR_FUN_8c029a98)(*piVar4 + DAT_8c029ad4,a5,iVar2,ar7);
    uVar1 = (*(code *)PTR_FUN_8c029ae0)(DAT_8c029ad8 + DAT_8c029adc,a5,iVar2,ar7);
    *(undefined4 *)(puVar5 + -0x20) = uVar1;
    a5 = *(uint **)(puVar5 + -0x20);
    iVar2 = ar6;
    (*(code *)PTR_FUN_8c029ae4)(ar4,a5,ar6,ar7);
    (*(code *)PTR_FUN_8c029a98)(*(undefined4 *)(DAT_8c029aa0 + ar4),a5,iVar2,ar7);
    (*(code *)PTR_FUN_8c029aa4)(ar4,a5,iVar2,ar7);
  }
  if (ar5[0xb] != 0) {
    a5 = (uint *)ar5[0xb];
    iVar2 = ar6;
    (*(code *)PTR_FUN_8c029ae8)(ar4,a5,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c029aec)(1,a5,iVar2,ar7);
  *DAT_8c029a54 = *DAT_8c029a54 + -1;
  uVar1 = 0;
  if (ar5[0xc] != 0) {
    uVar1 = (*(code *)PTR_FUN_8c029ae8)(ar4,ar5[0xc],ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c029af0 @ 8c029af0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c029af0(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a4;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_PR;
  char in_FPSCR_SZ;
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
  undefined4 uStack_10;
  
  iVar3 = ar6;
  uStack_10 = in_PR;
  if (**(int **)(DAT_8c029c80 + ar4) == 0) {
    iVar2 = ar5;
    if (in_FPSCR_SZ == '\0') {
      uStack_1c = *(undefined4 *)(ar5 + 8);
      uStack_18 = *(undefined4 *)(ar5 + 0xc);
      uStack_14 = *(undefined4 *)(ar5 + 0x10);
    }
    else {
      uStack_1c = (undefined4)*(undefined8 *)(ar5 + 8);
      uStack_18 = (undefined4)*(undefined8 *)(ar5 + 0xc);
      uStack_14 = (undefined4)*(undefined8 *)(ar5 + 0x10);
      uStack_10 = (undefined4)((ulonglong)*(undefined8 *)(ar5 + 0x10) >> 0x20);
    }
  }
  else {
    iVar2 = ar6;
    (*(code *)PTR_FUN_8c029c84)(&uStack_1c,ar6,ar6,ar7);
  }
  if (*(int *)(*(int *)(DAT_8c029c80 + ar4) + 4) == 0) {
    uStack_34 = *(undefined4 *)(ar5 + 0x14);
    uStack_30 = *(undefined4 *)(ar5 + 0x18);
    uStack_2c = *(undefined4 *)(ar5 + 0x1c);
  }
  else {
    iVar2 = ar6;
    (*(code *)PTR_FUN_8c029c88)(&uStack_34,ar6,iVar3,ar7);
  }
  if (*(int *)(*(int *)(DAT_8c029c80 + ar4) + 8) == 0) {
    if (in_FPSCR_SZ == '\0') {
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
    (*(code *)PTR_FUN_8c029c8c)(&uStack_28,ar6,iVar3,ar7);
    iVar2 = ar6;
  }
  (*(code *)PTR_FUN_8c029c90)(0,iVar2,iVar3,ar7);
  uVar1 = uStack_34;
  uVar4 = uStack_30;
  uVar5 = uStack_2c;
  (*(code *)PTR_FUN_8c029c94)(0,uStack_34,uStack_30,uStack_2c);
  a4 = 0;
  (*(code *)PTR_FUN_8c029c98)(0,uVar1,uVar4,uVar5);
  (*(code *)PTR_FUN_8c029c9c)(a4,uVar1,uVar4,uVar5);
  *(int *)(DAT_8c029c80 + ar4) = *(int *)(DAT_8c029c80 + ar4) + 0x18;
  (*(code *)PTR_FUN_8c029ca0)(auStack_74,uVar1,uVar4,uVar5);
  (*(code *)PTR_FUN_8c029c90)(auStack_74,uVar1,uVar4,uVar5);
  (*(code *)PTR_FUN_8c029ca4)(auStack_74,uVar1,uVar4,uVar5);
  (*(code *)PTR_FUN_8c029ca0)(auStack_74,uVar1,uVar4,uVar5);
  uVar1 = uStack_34;
  uVar4 = uStack_30;
  uVar5 = uStack_2c;
  (*(code *)PTR_FUN_8c029c94)(auStack_74,uStack_34,uStack_30,uStack_2c);
  (*(code *)PTR_FUN_8c029ca4)(auStack_74,uVar1,uVar4,uVar5);
  (*(code *)PTR_FUN_8c029ca0)(auStack_74,uVar1,uVar4,uVar5);
  (*(code *)PTR_FUN_8c029c98)(auStack_74,uVar1,uVar4,uVar5);
  uVar1 = (*(code *)PTR_FUN_8c029ca4)(auStack_74,uVar1,uVar4,uVar5);
  return uVar1;
}



/* FUN_8c029ca8 @ 8c029ca8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c029ca8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (*(code *)PTR_FUN_8c029d38)(ar4 + DAT_8c029d34,ar5,ar6,ar7);
  iVar2 = *(int *)(DAT_8c029d3c + ar4);
  iVar3 = (short)uVar1 * DAT_8c029d40;
  uVar1 = 0;
  (*(code *)PTR_FUN_8c029d44)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c029d48)(uVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c029d50)(uVar1,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c029d58)(*(int *)(iVar2 + iVar3) + DAT_8c029d54,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c029d5c)(ar4,uVar1,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c029d60)(1,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c029d64 @ 8c029d64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c029d64(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined4 a5;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar3;
  double dVar4;
  undefined4 in_fr15;
  double in_xd14;
  undefined4 in_PR;
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
  *(undefined4 *)(puVar3 + -8) = unaff_r13;
  *(undefined4 *)(puVar3 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar3 + -0x10) = in_PR;
  pdVar1 = (double *)(*(int *)(ar5 + 4) + 0x14);
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = *(undefined4 *)pdVar1;
  }
  else {
    in_xd14 = *pdVar1;
  }
  (*(code *)PTR_FUN_8c029dd8)(0,ar5,ar6,ar7);
  uVar2 = ar6;
  (*(code *)PTR_FUN_8c029ddc)(ar4,ar5,ar6,ar7);
  pdVar1 = (double *)(*(int *)(ar5 + 4) + 0x14);
  dVar4 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(in_fr15,*(undefined4 *)(ar4 + 0x5c));
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * SUB84(dVar4,0),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar1 = (int)((ulonglong)dVar4 >> 0x20);
  }
  else {
    *pdVar1 = dVar4;
  }
  a5 = *(undefined4 *)(ar5 + 4);
  (*(code *)PTR_FUN_8c029de0)(ar4,a5,uVar2,ar7);
  pdVar1 = (double *)(*(int *)(ar5 + 4) + 0x14);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar1 = in_fr15;
  }
  else {
    *pdVar1 = in_xd14;
  }
  if (*(int *)(ar5 + 0x2c) != 0) {
    a5 = *(undefined4 *)(ar5 + 0x2c);
    (*(code *)PTR_FUN_8c029de4)(ar4,a5,ar6,ar7);
    uVar2 = ar6;
  }
  uVar2 = (*(code *)PTR_FUN_8c029de8)(1,a5,uVar2,ar7);
  return uVar2;
}



/* FUN_8c029dec @ 8c029dec callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c029dec(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r8;
  int iVar2;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int *piVar5;
  undefined4 unaff_r14;
  undefined8 *puVar6;
  float fVar7;
  double dVar8;
  undefined4 uVar9;
  double in_dr14;
  double dVar10;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar11;
  undefined4 in_PR;
  int iVar12;
  int a6;
  int iVar13;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
    puVar6 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar6 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar6 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar6 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar6 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar6 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar6 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar6 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar6 + -0x1c) = unaff_r8;
  *(undefined4 *)((int)puVar6 + -0x20) = in_PR;
  iVar12 = ar5;
  uVar1 = (*(code *)PTR_FUN_8c029e54)(ar4 + DAT_8c029e50,ar5,ar6,ar7);
  *(short *)((int)puVar6 + -0x5c) = (short)uVar1;
  *(int *)((int)puVar6 + -0x28) = (int)*(short *)((int)puVar6 + -0x5c);
  iVar2 = *(int *)(DAT_8c029e58 + ar4);
  if (*(int *)(DAT_8c029e60 + ar4) == *(int *)(DAT_8c029e64 + ar4)) {
    *(undefined4 *)((int)puVar6 + -0x2c) = *(undefined4 *)(DAT_8c029ec8 + ar4);
    **(undefined4 **)(ar5 + 4) =
         *(undefined4 *)
          (*(int *)(iVar2 + *(int *)((int)puVar6 + -0x28) * DAT_8c029e5c) +
           *(int *)((int)puVar6 + -0x2c) * 4 + 0x40);
  }
  else {
    ar6 = (int)*(short *)(DAT_8c029e68 + ar4);
    iVar12 = DAT_8c029e6c;
    (*(code *)PTR_FUN_8c029e70)(ar4,DAT_8c029e6c,ar6,ar7);
    **(int **)(ar5 + 4) = DAT_8c029e6c;
  }
  (*(code *)PTR_FUN_8c029ecc)(ar4,iVar12,ar6,ar7);
  (*(code *)PTR_FUN_8c029ed4)(*(undefined4 *)(DAT_8c029ed0 + ar4),iVar12,ar6,ar7);
  iVar2 = 0;
  uVar1 = (*(code *)PTR_get_field_4_0253e4_8c029ed8)
                    (*(undefined4 *)(DAT_8c029ed0 + ar4),iVar12,ar6,ar7);
  *(undefined4 *)((int)puVar6 + -0x24) = uVar1;
  piVar5 = *(int **)((int)puVar6 + -0x24);
  if (*(int *)(DAT_8c029edc + ar4) != 0) {
    if (*(int *)(DAT_8c029edc + ar4) != 2) goto LAB_8c029f42;
    iVar2 = 2;
  }
  iVar2 = iVar2 + 6;
  for (iVar12 = 0; iVar12 < 2; iVar12 = iVar12 + 1) {
    *(int *)((int)puVar6 + -0x30) = iVar12;
    uVar1 = *(undefined4 *)
             ((*(int *)((int)puVar6 + -0x30) * 2 + *(int *)((int)puVar6 + -0x30)) * 4 + *piVar5 + 8)
    ;
    *(int *)((int)puVar6 + -0x34) = iVar12;
    *(int *)((int)puVar6 + -0x38) = iVar2 + iVar12;
    *(undefined4 *)
     ((*(int *)((int)puVar6 + -0x34) * 2 + *(int *)((int)puVar6 + -0x34)) * 4 + *piVar5 + 8) =
         *(undefined4 *)
          ((*(int *)((int)puVar6 + -0x38) * 2 + *(int *)((int)puVar6 + -0x38)) * 4 + *piVar5 + 8);
    *(int *)((int)puVar6 + -0x3c) = iVar2 + iVar12;
    *(undefined4 *)
     ((*(int *)((int)puVar6 + -0x3c) * 2 + *(int *)((int)puVar6 + -0x3c)) * 4 + *piVar5 + 8) = uVar1
    ;
  }
LAB_8c029f42:
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c02a030,*(undefined4 *)(ar4 + DAT_8c02a02c));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c02a02c);
    dVar8 = (double)CONCAT44(DAT_8c02a034,DAT_8c02a030);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c02a034,fVar7);
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c02a038,DAT_8c02a034);
  }
  if (in_FPSCR_PR == '\0') {
    iVar12 = (int)(SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20));
  }
  else {
    iVar12 = (int)(dVar8 / dVar8);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c02a030,*(undefined4 *)(ar4 + DAT_8c02a038));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c02a038);
    dVar8 = (double)CONCAT44(DAT_8c02a034,DAT_8c02a030);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c02a034,fVar7);
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c02a038,DAT_8c02a034);
  }
  if (in_FPSCR_PR == '\0') {
    a6 = (int)(SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20));
  }
  else {
    a6 = (int)(dVar8 / dVar8);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c02a030,*(undefined4 *)(ar4 + DAT_8c02a03c));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c02a03c);
    dVar8 = (double)CONCAT44(DAT_8c02a034,DAT_8c02a030);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c02a034,fVar7);
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c02a038,DAT_8c02a034);
  }
  if (in_FPSCR_PR == '\0') {
    iVar13 = (int)(SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20));
  }
  else {
    iVar13 = (int)(dVar8 / dVar8);
  }
  (*(code *)PTR_FUN_8c02a040)(0,iVar13,a6,iVar12);
  *(int *)((int)puVar6 + -0x40) = ar4;
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c02a044,
                             *(undefined4 *)(*(int *)((int)puVar6 + -0x40) + DAT_8c02a03c));
  }
  else {
    in_xd0 = *(undefined8 *)(*(int *)((int)puVar6 + -0x40) + DAT_8c02a03c);
    dVar8 = (double)CONCAT44(_DAT_8c02a048,DAT_8c02a044);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(*(int *)((int)puVar6 + -0x40) + DAT_8c02a03c) = fVar7;
  }
  else {
    *(undefined8 *)(*(int *)((int)puVar6 + -0x40) + DAT_8c02a03c) = in_xd0;
  }
  *(int *)((int)puVar6 + -0x44) = ar4;
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c02a044,
                             *(undefined4 *)(*(int *)((int)puVar6 + -0x44) + DAT_8c02a038));
  }
  else {
    in_xd0 = *(undefined8 *)(*(int *)((int)puVar6 + -0x44) + DAT_8c02a038);
    dVar8 = (double)CONCAT44(_DAT_8c02a048,DAT_8c02a044);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(*(int *)((int)puVar6 + -0x44) + DAT_8c02a038) = fVar7;
  }
  else {
    *(undefined8 *)(*(int *)((int)puVar6 + -0x44) + DAT_8c02a038) = in_xd0;
  }
  *(int *)((int)puVar6 + -0x48) = ar4;
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c02a044,
                             *(undefined4 *)(*(int *)((int)puVar6 + -0x48) + DAT_8c02a02c));
  }
  else {
    in_xd0 = *(undefined8 *)(*(int *)((int)puVar6 + -0x48) + DAT_8c02a02c);
    dVar8 = (double)CONCAT44(_DAT_8c02a048,DAT_8c02a044);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(*(int *)((int)puVar6 + -0x48) + DAT_8c02a02c) = fVar7;
  }
  else {
    *(undefined8 *)(*(int *)((int)puVar6 + -0x48) + DAT_8c02a02c) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + DAT_8c02a03c)
                              );
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c02a038),fVar7);
  }
  else {
    dVar8 = *(double *)(ar4 + DAT_8c02a038);
  }
  if (in_FPSCR_PR == '\0') {
    dVar10 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                              SUB84(in_dr14,0) + (float)((ulonglong)dVar8 >> 0x20));
  }
  else {
    dVar10 = in_dr14 + dVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c02a02c),SUB84(dVar8,0));
  }
  else {
    dVar8 = *(double *)(ar4 + DAT_8c02a02c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                              SUB84(dVar10,0) + (float)((ulonglong)dVar8 >> 0x20));
  }
  else {
    dVar10 = dVar10 + dVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(_DAT_8c02a048,SUB84(dVar8,0));
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c02a04c,_DAT_8c02a048);
  }
  if (in_FPSCR_PR == '\0') {
    bVar11 = SUB84(dVar10,0) < (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    bVar11 = dVar10 < dVar8;
  }
  if (bVar11) {
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c02a04c,SUB84(dVar8,0));
    }
    else {
      dVar8 = (double)CONCAT44(PTR_FUN_8c02a050,DAT_8c02a04c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar11 = (float)((ulonglong)dVar8 >> 0x20) < SUB84(dVar10,0);
    }
    else {
      bVar11 = dVar8 < dVar10;
    }
    if (bVar11) {
      (*(code *)PTR_FUN_8c02a050)(ar4 + DAT_8c02a03c,iVar13,a6,iVar12);
    }
  }
  uVar4 = SUB84(dVar8,0);
  uVar9 = SUB84(dVar10,0);
  uVar1 = *(undefined4 *)(ar5 + 4);
  (*(code *)PTR_FUN_8c02a054)(ar4,uVar1,a6,iVar12);
  if (*(int *)(DAT_8c02a058 + ar4) != 1) {
    for (iVar13 = 0; iVar13 < 2; iVar13 = iVar13 + 1) {
      *(int *)((int)puVar6 + -0x4c) = iVar2 + iVar13;
      uVar3 = *(undefined4 *)
               ((*(int *)((int)puVar6 + -0x4c) * 2 + *(int *)((int)puVar6 + -0x4c)) * 4 + *piVar5 +
               8);
      *(int *)((int)puVar6 + -0x50) = iVar2 + iVar13;
      *(int *)((int)puVar6 + -0x54) = iVar13;
      *(undefined4 *)
       ((*(int *)((int)puVar6 + -0x50) * 2 + *(int *)((int)puVar6 + -0x50)) * 4 + *piVar5 + 8) =
           *(undefined4 *)
            ((*(int *)((int)puVar6 + -0x54) * 2 + *(int *)((int)puVar6 + -0x54)) * 4 + *piVar5 + 8);
      *(int *)((int)puVar6 + -0x58) = iVar13;
      *(undefined4 *)
       ((*(int *)((int)puVar6 + -0x58) * 2 + *(int *)((int)puVar6 + -0x58)) * 4 + *piVar5 + 8) =
           uVar3;
    }
  }
  if (*(int *)(DAT_8c02a1b0 + ar4) != 0) {
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)*(int *)(DAT_8c02a1b0 + ar4),uVar9);
    }
    else {
      dVar8 = (double)*(int *)(DAT_8c02a1b0 + ar4);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(DAT_8c02a1b4,uVar4);
    }
    else {
      dVar10 = (double)CONCAT44(DAT_8c02a1b8,DAT_8c02a1b4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) /
                               (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 / dVar10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - 1.0,SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - (double)CONCAT44(0x3f800000,SUB84(dVar10,0));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c02a1b8) = (int)((ulonglong)dVar8 >> 0x20);
    }
    else {
      *(double *)(ar4 + DAT_8c02a1b8) = dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c02a1bc) = *(undefined4 *)(ar4 + DAT_8c02a1c0);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c02a1bc) = *(undefined8 *)(ar4 + DAT_8c02a1c0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c02a1c4) = *(undefined4 *)(ar4 + DAT_8c02a1c8);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c02a1c4) = *(undefined8 *)(ar4 + DAT_8c02a1c8);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c02a1cc) = *(undefined4 *)(ar4 + DAT_8c02a1d0);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c02a1cc) = *(undefined8 *)(ar4 + DAT_8c02a1d0);
    }
    (*(code *)PTR_FUN_8c02a1d4)(ar4 + DAT_8c02a1b8,uVar1,a6,iVar12);
    uVar4 = *(undefined4 *)(*piVar5 + 8);
    *(undefined4 *)(*piVar5 + 8) = *(undefined4 *)(*piVar5 + 0x44);
    *(undefined4 *)(*piVar5 + 0x44) = uVar4;
    (*(code *)PTR_FUN_8c02a1d8)(0,uVar1,a6,iVar12);
    (*(code *)PTR_FUN_8c02a1e0)(0,uVar1,a6,iVar12);
    uVar1 = *(undefined4 *)(ar5 + 4);
    (*(code *)PTR_FUN_8c02a1e4)(ar4,uVar1,a6,iVar12);
    (*(code *)PTR_FUN_8c02a1e8)(1,uVar1,a6,iVar12);
    uVar4 = *(undefined4 *)(*piVar5 + 0x44);
    *(undefined4 *)(*piVar5 + 0x44) = *(undefined4 *)(*piVar5 + 8);
    *(undefined4 *)(*piVar5 + 8) = uVar4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c02a1b8) = *(undefined4 *)(ar4 + DAT_8c02a1ec);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c02a1b8) = *(undefined8 *)(ar4 + DAT_8c02a1ec);
    }
    (*(code *)PTR_FUN_8c02a1d4)(ar4 + DAT_8c02a1b8,uVar1,a6,iVar12);
  }
  (*(code *)PTR_FUN_8c02a1f4)(*(undefined4 *)(DAT_8c02a1f0 + ar4),uVar1,a6,iVar12);
  uVar1 = (*(code *)PTR_FUN_8c02a1f8)(ar4,uVar1,a6,iVar12);
  return uVar1;
}



/* FUN_8c02a1fc @ 8c02a1fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a1fc(ulonglong *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 1) = 0;
    uStack_8 = 0;
    *(undefined4 *)((int)ar4 + 4) = 0;
  }
  else {
    ar4[1] = (ulonglong)in_fr1;
    *(ulonglong *)((int)ar4 + 4) = (ulonglong)in_fr1;
    uStack_8 = in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(uint *)ar4 = uStack_8;
  }
  else {
    *ar4 = (ulonglong)uStack_8;
  }
  return 0;
}



/* FUN_8c02a230 @ 8c02a230 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

double * FUN_8c02a230(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  double dVar3;
  undefined4 in_fr15;
  double in_xd14;
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
  *(undefined4 *)(puVar2 + -8) = unaff_r13;
  *(undefined4 *)(puVar2 + -0xc) = in_PR;
  pdVar1 = (double *)(*(int *)(ar5 + 4) + 0x14);
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = *(undefined4 *)pdVar1;
  }
  else {
    in_xd14 = *pdVar1;
  }
  pdVar1 = (double *)(*(int *)(ar5 + 4) + 0x14);
  dVar3 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(in_fr15,*(undefined4 *)(ar4 + DAT_8c02a290));
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * SUB84(dVar3,0),SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar1 = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *pdVar1 = dVar3;
  }
  (*(code *)PTR_FUN_8c02a294)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c02a298)(ar4,*(undefined4 *)(ar5 + 4),ar6,ar7);
  pdVar1 = (double *)(*(int *)(ar5 + 4) + 0x14);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar1 = in_fr15;
  }
  else {
    *pdVar1 = in_xd14;
  }
  return pdVar1;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a2b8(int ar4,undefined4 ar5,undefined4 ar6,double *ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *a6;
  double *a7;
  float fVar3;
  ulonglong uVar4;
  double dVar5;
  float fVar8;
  double dVar6;
  double dVar7;
  double in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_7c;
  undefined4 auStack_74 [4];
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
  undefined1 auStack_2c [16];
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = ar5;
  uVar2 = ar6;
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c02a504)(&fStack_1c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c02a504)(auStack_2c,uVar1,uVar2,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c02a504)(&uStack_3c,uVar1,uVar2,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c02a504)(&uStack_4c,uVar1,uVar2,a7);
  (*(code *)PTR_Vec3_set_zero_8c02a508)(&uStack_58,uVar1,uVar2,a7);
  (*(code *)PTR_Vec3_set_zero_8c02a508)(&uStack_64,uVar1,uVar2,a7);
  (*(code *)PTR_FUN_8c02a510)(*(undefined4 *)(DAT_8c02a50c + ar4),uVar1,uVar2,a7);
  (*(code *)PTR_Vec3_assign_8c02a514)(&uStack_3c,auStack_74,uVar2,a7);
  (*(code *)PTR_Vec3_dtor_8c02a518)(auStack_74,0xffffffff,uVar2,a7);
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(DAT_8c02a51c,uStack_3c);
  }
  else {
    in_xd0 = (double)CONCAT44(uStack_38,uStack_3c);
    uVar4 = CONCAT44(PTR_object_dtor_delete_8c02a520,DAT_8c02a51c);
  }
  if ((float)uVar4 == (float)(uVar4 >> 0x20)) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)ar7 = 0.0;
    }
    else {
      *ar7 = (double)(uVar4 & 0xffffffff);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)ar7 + 4) = 0.0;
    }
    else {
      *(ulonglong *)((int)ar7 + 4) = uVar4 & 0xffffffff;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar7 + 1) = 0.0;
    }
    else {
      ar7[1] = (double)(uVar4 & 0xffffffff);
    }
    (*(code *)PTR_object_dtor_delete_8c02a520)(&uStack_64,0xffffffff,uVar2,a7);
    (*(code *)PTR_object_dtor_delete_8c02a520)(&uStack_58,0xffffffff,uVar2,a7);
    (*(code *)PTR_Vec3_dtor_8c02a518)(&uStack_4c,0xffffffff,uVar2,a7);
    (*(code *)PTR_Vec3_dtor_8c02a518)(&uStack_3c,0xffffffff,uVar2,a7);
    (*(code *)PTR_Vec3_dtor_8c02a518)(auStack_2c,0xffffffff,uVar2,a7);
    uVar1 = (*(code *)PTR_Vec3_dtor_8c02a518)(&fStack_1c,0xffffffff,uVar2,a7);
  }
  else {
    (*(code *)PTR_FUN_8c02a524)(ar4,ar6,&uStack_4c,a7);
    a6 = auStack_2c;
    (*(code *)PTR_FUN_8c02a528)(ar4,ar5,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(uStack_4c,uStack_3c);
    }
    else {
      in_xd0 = (double)CONCAT44(uStack_38,uStack_3c);
      dVar5 = (double)CONCAT44(uStack_48,uStack_4c);
    }
    if (in_FPSCR_PR == '\0') {
      fStack_1c = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fStack_1c = SUB84(dVar5 - dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(uStack_48,uStack_38);
    }
    else {
      fStack_1c = SUB84(in_xd0,0);
      in_xd0 = (double)CONCAT44(uStack_34,uStack_38);
      dVar5 = (double)CONCAT44(uStack_44,uStack_48);
    }
    if (in_FPSCR_PR == '\0') {
      fStack_18 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fStack_18 = SUB84(dVar5 - dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(uStack_44,uStack_34);
    }
    else {
      fStack_18 = SUB84(in_xd0,0);
      in_xd0 = (double)CONCAT44(uStack_30,uStack_34);
      dVar5 = (double)CONCAT44(uStack_40,uStack_44);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = (float)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) - fVar3);
    }
    else {
      dVar5 = dVar5 - dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      uStack_14 = SUB84(dVar5,0);
    }
    else {
      uStack_14 = SUB84(in_xd0,0);
      uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    (*(code *)PTR_FUN_8c02a52c)(auStack_2c,ar5,a6,a7);
    uStack_58 = SUB84(dVar5,0);
    uVar2 = (undefined4)((ulonglong)dVar5 >> 0x20);
    uVar1 = uVar2;
    if (in_FPSCR_SZ == '\0') {
      uVar1 = auStack_74[0];
      uStack_58 = uVar2;
      uVar2 = uStack_54;
    }
    uStack_54 = uVar2;
    auStack_74[0] = uVar1;
    (*(code *)PTR_FUN_8c02a52c)(&fStack_1c,ar5,a6,a7);
    uStack_64 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(uStack_58,uStack_64);
      dVar5 = in_xd0;
    }
    else {
      uStack_7c = SUB84(dVar5,0);
      dVar6 = (double)CONCAT44(uStack_54,uStack_58);
      uStack_64 = uStack_7c;
      uStack_60 = uStack_64;
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 - dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)ar7 = fVar3;
      fVar3 = *(float *)ar7;
      fVar8 = DAT_8c02a530;
    }
    else {
      *ar7 = dVar5;
      dVar5 = *ar7;
      fVar3 = DAT_8c02a530;
      fVar8 = _DAT_8c02a534;
    }
    if (in_FPSCR_PR != '\0' || fVar8 <= fVar3) {
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(_DAT_8c02a534,*(float *)ar7);
      }
      else {
        dVar5 = *ar7;
        dVar6 = (double)CONCAT44(PTR_FUN_8c02a538,_DAT_8c02a534);
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar6 >> 0x20) < SUB84(dVar6,0)) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(_DAT_8c02a534,SUB84(dVar6,0));
          *(float *)ar7 = _DAT_8c02a534;
        }
        else {
          dVar6 = (double)CONCAT44(PTR_FUN_8c02a538,_DAT_8c02a534);
          *ar7 = dVar6;
        }
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c02a530,fVar3);
      *(float *)ar7 = DAT_8c02a530;
    }
    else {
      dVar6 = (double)CONCAT44(_DAT_8c02a534,DAT_8c02a530);
      *ar7 = dVar6;
    }
    (*(code *)PTR_FUN_8c02a538)(auStack_2c,ar5,a6,a7);
    uStack_54 = SUB84(dVar6,0);
    uVar1 = (undefined4)((ulonglong)dVar6 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      uStack_54 = uVar1;
      uVar1 = uStack_50;
    }
    uStack_50 = uVar1;
    (*(code *)PTR_FUN_8c02a538)(&fStack_1c,ar5,a6,a7);
    uVar1 = (undefined4)((ulonglong)dVar6 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(uStack_54,uVar1);
      dVar6 = dVar5;
      uStack_60 = uVar1;
    }
    else {
      uStack_60 = SUB84(dVar6,0);
      dVar7 = (double)CONCAT44(uStack_50,uStack_54);
      uStack_5c = uVar1;
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)ar7 + 4) = fVar3;
      fVar3 = *(float *)((int)ar7 + 4);
      fVar8 = DAT_8c02a53c;
    }
    else {
      *(double *)((int)ar7 + 4) = dVar6;
      fVar3 = DAT_8c02a53c;
      fVar8 = _DAT_8c02a540;
    }
    if (in_FPSCR_PR != '\0' || fVar8 <= fVar3) {
      fVar3 = _DAT_8c02a540;
      fVar8 = _FUN_8c02a544;
      if (in_FPSCR_SZ == '\0') {
        fVar3 = *(float *)((int)ar7 + 4);
        fVar8 = _DAT_8c02a540;
      }
      if (in_FPSCR_PR == '\0' && fVar8 < fVar3) {
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)ar7 + 4) = _DAT_8c02a540;
        }
        else {
          *(ulonglong *)((int)ar7 + 4) = CONCAT44(_FUN_8c02a544,_DAT_8c02a540);
        }
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      *(float *)((int)ar7 + 4) = DAT_8c02a53c;
    }
    else {
      *(ulonglong *)((int)ar7 + 4) = CONCAT44(_DAT_8c02a540,DAT_8c02a53c);
    }
    (*(code *)PTR_object_dtor_delete_8c02a520)(&uStack_64,0xffffffff,a6,a7);
    (*(code *)PTR_object_dtor_delete_8c02a520)(&uStack_58,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c02a518)(&uStack_4c,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c02a518)(&uStack_3c,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c02a518)(auStack_2c,0xffffffff,a6,a7);
    uVar1 = (*(code *)PTR_Vec3_dtor_8c02a518)(&fStack_1c,0xffffffff,a6,a7);
  }
  return uVar1;
}



/* FUN_8c02a544 @ 8c02a544 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a544(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c02a564)(in_stack_00000000,ar4 + 0x70,ar6,ar7);
  return uVar1;
}



/* FUN_8c02a568 @ 8c02a568 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a568(undefined4 ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 auStack_4c [17];
  
  if (in_FPSCR_SZ == '\0') {
    uStack_58 = *(undefined4 *)ar5;
    uStack_54 = *(undefined4 *)((int)ar5 + 4);
    uStack_50 = *(undefined4 *)(ar5 + 1);
  }
  else {
    uStack_58 = (undefined4)*ar5;
    uStack_54 = (undefined4)*(undefined8 *)((int)ar5 + 4);
    uStack_50 = (undefined4)ar5[1];
    auStack_4c[0] = (undefined4)((ulonglong)ar5[1] >> 0x20);
  }
  (*(code *)PTR_FUN_8c02a5cc)(auStack_4c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c02a5d0)(auStack_4c,&uStack_58,&uStack_64,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar6 = uStack_64;
    *(undefined4 *)((int)ar6 + 4) = uStack_60;
  }
  else {
    *ar6 = CONCAT44(uStack_60,uStack_64);
    *(ulonglong *)((int)ar6 + 4) = CONCAT44(uStack_5c,uStack_60);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar6 + 1) = uStack_5c;
  }
  else {
    ar6[1] = CONCAT44(uStack_58,uStack_5c);
  }
  return 8;
}



/* FUN_8c02a5d4 @ 8c02a5d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a5d4(undefined4 ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  undefined8 uVar1;
  char in_FPSCR_SZ;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 auStack_4c [12];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_58 = *(undefined4 *)ar5;
    uStack_54 = *(undefined4 *)((int)ar5 + 4);
    uStack_50 = *(undefined4 *)(ar5 + 1);
    uVar1 = CONCAT44(uStack_50,in_fr1);
  }
  else {
    uStack_58 = (undefined4)*ar5;
    uStack_54 = (undefined4)*(undefined8 *)((int)ar5 + 4);
    uVar1 = ar5[1];
    uStack_50 = (undefined4)uVar1;
    auStack_4c[0] = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  uStack_1c = (undefined4)uVar1;
  (*(code *)PTR_FUN_8c02a660)(auStack_4c,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_1c = 0;
  }
  else {
    uStack_64 = 0;
    uStack_10 = 0;
  }
  uStack_14 = 0;
  uStack_18 = 0;
  (*(code *)PTR_FUN_8c02a664)(auStack_4c,&uStack_58,&uStack_64,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar6 = uStack_64;
    *(undefined4 *)((int)ar6 + 4) = uStack_60;
  }
  else {
    *ar6 = CONCAT44(uStack_60,uStack_64);
    *(ulonglong *)((int)ar6 + 4) = CONCAT44(uStack_5c,uStack_60);
  }
  if (in_FPSCR_SZ == '\0') {
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
  (*(code *)PTR_FUN_8c02a6c4)(*(undefined4 *)(DAT_8c02a6c0 + ar4),a5,ar5,ar6);
  (*(code *)PTR_FUN_8c02a6c8)(ar4 + 0x30,auStack_18,ar5,ar6);
  (*(code *)PTR_Vec3_dtor_8c02a6cc)(auStack_18,0xffffffff,ar5,ar6);
  return 1;
}



/* FUN_8c02a6d0 @ 8c02a6d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a6d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c02a6f4)(in_stack_00000000,ar4 + DAT_8c02a6f0,ar6,ar7);
  return uVar1;
}



/* FUN_8c02a6f8 @ 8c02a6f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02a6f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  (*(code *)PTR_FUN_8c02a750)(ar4 + DAT_8c02a74c,ar5,ar6,ar7);
  a5 = (*(code *)PTR_FUN_8c02a750)(ar4 + DAT_8c02a74c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c02a754)(ar4 + DAT_8c02a74c,a5,ar6,ar7);
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

/* WARNING: Unknown calling convention */

int FUN_8c02a788(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *a6;
  undefined1 auStack_1c [20];
  
  uVar2 = (*(code *)PTR_FUN_8c02aa50)(ar4 + DAT_8c02aa4c,ar5,ar6,ar7);
  sVar1 = (short)uVar2;
  if (*(short *)(DAT_8c02aa58 + ar4) < *(short *)(DAT_8c02aa54 + ar4)) {
    *(undefined2 *)(DAT_8c02aa54 + ar4) = 0;
    *(undefined2 *)(DAT_8c02aa58 + ar4) = 1;
    if (*(int *)(DAT_8c02aa5c + ar4) == 0) {
      *(undefined4 *)(DAT_8c02aa78 + ar4) = *(undefined4 *)(DAT_8c02aa7c + ar4);
    }
    else if (*(int *)(DAT_8c02aa5c + ar4) == 1) {
      *(short *)(DAT_8c02aa60 + ar4) = *(short *)(DAT_8c02aa60 + ar4) + 1;
      if (*(int *)(*(short *)(DAT_8c02aa60 + ar4) * 4 + **(int **)(DAT_8c02aa64 + ar4)) == 0x50) {
        ar5 = *(undefined4 *)(DAT_8c02aa68 + ar4);
        (*(code *)PTR_FUN_8c02aa70)(*(undefined4 *)(DAT_8c02aa6c + ar4),ar5,ar6,ar7);
        *(undefined2 *)(DAT_8c02aa60 + ar4) = 0;
        *(undefined4 *)(DAT_8c02aa5c + ar4) = 0;
        *(undefined4 *)(DAT_8c02aa64 + ar4) = 0;
        *(undefined4 *)(DAT_8c02aa74 + ar4) = 0;
      }
      else {
        *(undefined4 *)(DAT_8c02aa68 + ar4) =
             *(undefined4 *)(*(short *)(DAT_8c02aa60 + ar4) * 4 + **(int **)(DAT_8c02aa64 + ar4));
      }
    }
  }
  if (*(int *)(DAT_8c02aa74 + ar4) == 0) {
    uVar2 = (*(code *)PTR_get_field_94_02aaa4_8c02aa80)
                      (*(undefined4 *)(DAT_8c02aa6c + ar4),ar5,ar6,ar7);
    *(undefined4 *)(DAT_8c02aa68 + ar4) = uVar2;
    (*(code *)PTR_FUN_8c02aa84)(*(undefined4 *)(DAT_8c02aa6c + ar4),ar5,ar6,ar7);
    a6 = auStack_1c;
    uVar2 = (*(code *)PTR_FUN_8c02aa8c)
                      (ar4 + DAT_8c02aa88,*(undefined4 *)(DAT_8c02aa68 + ar4),a6,ar7);
    *(undefined4 *)(DAT_8c02aa68 + ar4) = uVar2;
    (*(code *)PTR_Vec3_dtor_8c02aa90)(auStack_1c,0xffffffff,a6,ar7);
  }
  else {
    *(undefined4 *)(DAT_8c02aa68 + ar4) =
         *(undefined4 *)(*(short *)(DAT_8c02aa60 + ar4) * 4 + **(int **)(DAT_8c02aa64 + ar4));
  }
  if (*(int *)(DAT_8c02aa68 + ar4) != *(int *)(DAT_8c02aa94 + ar4)) {
    *(undefined2 *)(DAT_8c02aa54 + ar4) = 0;
    switch(*(undefined4 *)(DAT_8c02aa68 + ar4)) {
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
      *(int *)(DAT_8c02aa64 + ar4) =
           *(int *)(sVar1 * DAT_8c02aa9c + *(int *)(DAT_8c02aa98 + ar4)) +
           (*(int *)(DAT_8c02aa68 + ar4) + -0x47) * 8;
      *(undefined4 *)(DAT_8c02aa68 + ar4) =
           *(undefined4 *)(*(short *)(DAT_8c02aa60 + ar4) * 4 + **(int **)(DAT_8c02aa64 + ar4));
      *(undefined4 *)(DAT_8c02aa5c + ar4) = 1;
      *(undefined4 *)(DAT_8c02aa74 + ar4) = 1;
    }
    *(undefined4 *)(DAT_8c02aa7c + ar4) =
         *(undefined4 *)
          (*(int *)(sVar1 * DAT_8c02aa9c + *(int *)(DAT_8c02aa98 + ar4)) +
           *(int *)(DAT_8c02aa68 + ar4) * 4 + 0x40);
    *(undefined4 *)(DAT_8c02aa78 + ar4) =
         *(undefined4 *)
          (*(int *)(sVar1 * DAT_8c02aa9c + *(int *)(DAT_8c02aa98 + ar4)) +
           *(int *)(DAT_8c02aa94 + ar4) * 4 + 0x40);
    *(undefined2 *)(DAT_8c02aa58 + ar4) =
         *(undefined2 *)
          (DAT_8c02aaa0 +
          *(int *)(sVar1 * DAT_8c02aa9c + *(int *)(DAT_8c02aa98 + ar4)) +
          *(int *)(DAT_8c02aa68 + ar4) * 2);
  }
  if (*(int *)(DAT_8c02aa78 + ar4) != *(int *)(DAT_8c02aa7c + ar4)) {
    *(short *)(DAT_8c02aa54 + ar4) = *(short *)(DAT_8c02aa54 + ar4) + 1;
  }
  if (((*(int *)(DAT_8c02aa78 + ar4) == *(int *)(DAT_8c02aa7c + ar4)) &&
      (*(short *)(DAT_8c02aa54 + ar4) < *(short *)(DAT_8c02aa58 + ar4))) &&
     (*(int *)(DAT_8c02aa74 + ar4) == 1)) {
    *(short *)(DAT_8c02aa54 + ar4) = *(short *)(DAT_8c02aa58 + ar4) + 1;
  }
  iVar3 = DAT_8c02aa94;
  *(undefined4 *)(DAT_8c02aa94 + ar4) = *(undefined4 *)(DAT_8c02aa68 + ar4);
  return iVar3;
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

/* WARNING: Unknown calling convention */

uint FUN_8c02ab24(int ar4,int ar5,int ar6,undefined4 ar7)

{
  double *pdVar1;
  undefined4 unaff_r14;
  uint uVar2;
  undefined1 *puVar3;
  double in_dr0;
  double dVar4;
  double dVar5;
  float fVar6;
  double in_dr14;
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
  for (uVar2 = 2; uVar2 < *DAT_8c02ab9c - 1U; uVar2 = uVar2 + 1) {
    *(uint *)(puVar3 + -8) = uVar2;
    *(uint *)(puVar3 + -0xc) = uVar2;
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)
                                  (*(int *)(DAT_8c02ab90 + ar4) + *(int *)(puVar3 + -8) * 4));
    }
    pdVar1 = (double *)(*(int *)(DAT_8c02ab94 + ar4) + *(int *)(puVar3 + -0xc) * 4);
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(in_dr0,0));
    }
    else {
      dVar4 = *pdVar1;
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)ar6,SUB84(dVar4,0));
      dVar4 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               (SUB84(in_dr14,0) - (float)((ulonglong)dVar4 >> 0x20)) * (float)ar6);
    }
    else {
      dVar5 = (double)ar6;
      dVar4 = (in_dr14 - dVar4) * dVar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = (float)(int)*(short *)(DAT_8c02ab98 + ar4);
      dVar5 = (double)CONCAT44(fVar6,SUB84(dVar5,0));
      in_dr14 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),SUB84(dVar4,0) / fVar6);
    }
    else {
      dVar5 = (double)(int)*(short *)(DAT_8c02ab98 + ar4);
      in_dr14 = dVar4 / dVar5;
    }
    *(uint *)(puVar3 + -0x10) = uVar2;
    *(uint *)(puVar3 + -0x14) = uVar2;
    pdVar1 = (double *)(*(int *)(DAT_8c02ab94 + ar4) + *(int *)(puVar3 + -0x14) * 4);
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(dVar5,0));
    }
    else {
      dVar4 = *pdVar1;
    }
    if (in_FPSCR_PR == '\0') {
      in_dr0 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + SUB84(in_dr14,0),SUB84(dVar4,0))
      ;
    }
    else {
      in_dr0 = dVar4 + in_dr14;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar5 + *(int *)(puVar3 + -0x10) * 4) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)(ar5 + *(int *)(puVar3 + -0x10) * 4) = in_dr0;
    }
  }
  return *DAT_8c02ab9c - 1U;
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
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_4c;
  undefined4 auStack_48 [4];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  a7 = ar4 + 0x5c;
  iVar3 = ar4 + 0x50;
  iVar1 = ar4 + 0x30;
  (**(code **)(**(int **)(DAT_8c02acbc + ar4) + 0x10))(*(int **)(DAT_8c02acbc + ar4),iVar1,iVar3,a7)
  ;
  (*(code *)PTR_FUN_8c02acc4)(*(undefined4 *)(DAT_8c02acc0 + ar4),iVar1,iVar3,a7);
  (*(code *)PTR_FUN_8c02acc8)(*(undefined4 *)(DAT_8c02acc0 + ar4),iVar1,iVar3,a7);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c02accc,(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    dVar4 = (double)CONCAT44(PTR_Vec3_scale_8c02acd0,DAT_8c02accc);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_4c = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fStack_4c = SUB84(dVar4 * dVar4,0);
  }
  if (in_FPSCR_SZ != '\0') {
    fStack_4c = (float)in_dr0;
    auStack_48[0] = (undefined4)((ulonglong)in_dr0 >> 0x20);
  }
  (*(code *)PTR_Vec3_scale_8c02acd0)(auStack_28,&fStack_4c,iVar3,a7);
  (*(code *)PTR_Vec3_add_8c02acd4)(ar4 + 0x30,auStack_38,iVar3,a7);
  (*(code *)PTR_Vec3_ctor_copy_8c02acd8)(auStack_18,auStack_48,iVar3,a7);
  (*(code *)PTR_Vec3_dtor_8c02acdc)(auStack_48,0xffffffff,iVar3,a7);
  (*(code *)PTR_Vec3_dtor_8c02acdc)(auStack_38,0xffffffff,iVar3,a7);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c02acdc)(auStack_28,0xffffffff,iVar3,a7);
  (*(code *)PTR_FUN_8c02acc8)(*(undefined4 *)(DAT_8c02acc0 + ar4),uVar2,iVar3,a7);
  (**(code **)(*(int *)(ar4 + DAT_8c02ace0) + 0x28))
            ((int *)(ar4 + DAT_8c02ace0),ar4 + 0x30,iVar3,a7);
  iVar3 = ar4 + 0x5c;
  iVar1 = ar4 + 0x50;
  (**(code **)(*(int *)(ar4 + DAT_8c02ace0) + 0x10))
            ((int *)(ar4 + DAT_8c02ace0),auStack_18,iVar1,iVar3);
  uVar2 = (*(code *)PTR_Vec3_dtor_8c02acdc)(auStack_18,0xffffffff,iVar1,iVar3);
  return uVar2;
}



/* FUN_8c02ace4 @ 8c02ace4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ace4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c02ad08)(in_stack_00000000,ar4 + DAT_8c02ad04,ar6,ar7);
  return uVar1;
}



/* FUN_8c02ad0c @ 8c02ad0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ad0c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_00000000;
  
  (*(code *)PTR_FUN_8c02ad34)(*(undefined4 *)(DAT_8c02ad30 + ar4),ar5,ar6,ar7);
  return in_stack_00000000;
}



/* FUN_8c02ad38 @ 8c02ad38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ad38(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_00000000;
  
  (*(code *)PTR_Vec3_normalize_8c02ad58)(ar4 + 4,ar5,ar6,ar7);
  return in_stack_00000000;
}



/* FUN_8c02ad5c @ 8c02ad5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02ad5c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_00000000;
  
  (*(code *)PTR_FUN_8c02ad84)(*(undefined4 *)(DAT_8c02ad80 + ar4),ar5,ar6,ar7);
  return in_stack_00000000;
}



/* FUN_8c02ad88 @ 8c02ad88 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02ad92) */
/* WARNING: Unknown calling convention */

int FUN_8c02ad88(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_fr1;
  double dVar3;
  float fVar4;
  undefined8 in_dr14;
  undefined4 uVar6;
  double dVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined4 uStack_4;
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = &uStack_4;
    _auStack_8 = CONCAT44((int)in_dr14,auStack_8);
  }
  else {
    puVar2 = (undefined4 *)auStack_8;
  }
  uVar6 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c02ae18,in_fr1);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c02ae1c,DAT_8c02ae18);
  }
  if (in_FPSCR_PR == '\0') {
    dVar5 = (double)CONCAT44(uVar6,(float)*(int *)(DAT_8c02ae14 + ar4) /
                                   (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    dVar5 = (double)CONCAT44(uVar6,(float)*(int *)(DAT_8c02ae14 + ar4)) / dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c02ae20,SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)PTR_DAT_8c02ae20;
  }
  fVar4 = SUB84(dVar5,0);
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c02ae1c) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c02ae1c) = dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c02ae20 + 4),SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)(PTR_DAT_8c02ae20 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c02ae24) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c02ae24) = dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c02ae20 + 8),SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)(PTR_DAT_8c02ae20 + 8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c02ae28) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c02ae28) = dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c02ae20 + 0xc),SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)(PTR_DAT_8c02ae20 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c02ae2c) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c02ae2c) = dVar3;
  }
  *(int *)((int)puVar2 + -4) = ar4;
  *(undefined4 *)((int)puVar2 + -8) = *(undefined4 *)(DAT_8c02ae14 + *(int *)((int)puVar2 + -4));
  *(int *)(DAT_8c02ae14 + *(int *)((int)puVar2 + -4)) = *(int *)((int)puVar2 + -8) + 1;
  iVar1 = DAT_8c02ae30;
  if (DAT_8c02ae30 < *(int *)((int)puVar2 + -8) + 1) {
    *(undefined4 *)(DAT_8c02ae14 + ar4) = 0;
    *(int *)((int)puVar2 + -0xc) = ar4;
    iVar1 = 0x74;
    *(uint *)(*(int *)((int)puVar2 + -0xc) + 0x74) =
         *(uint *)(*(int *)((int)puVar2 + -0xc) + 0x74) & DAT_8c02ae34;
  }
  return iVar1;
}



/* FUN_8c02ae38 @ 8c02ae38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02ae38(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  ulonglong uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_18;
  int iStack_14;
  
  uVar1 = (*(code *)PTR_FUN_8c02af44)(ar4 + DAT_8c02af40,ar5,ar6,ar7);
  iVar3 = *(int *)(DAT_8c02af48 + ar4) + (short)uVar1 * DAT_8c02af4c;
  if (in_FPSCR_SZ == '\0') {
    uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(ar4 + DAT_8c02af50));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c02af50);
    uVar5 = *(ulonglong *)(ar4 + 0x5c);
  }
  if (in_FPSCR_PR != '\0' || (float)uVar5 <= (float)(uVar5 >> 0x20)) {
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(ar4 + DAT_8c02af50));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c02af50);
      uVar7 = *(undefined8 *)(ar4 + 0x5c);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar7 < (float)((ulonglong)uVar7 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        uVar1 = *(undefined4 *)(ar4 + DAT_8c02af50);
        *(undefined4 *)(ar4 + 100) = uVar1;
        *(undefined4 *)(ar4 + 0x60) = uVar1;
        *(undefined4 *)(ar4 + 0x5c) = uVar1;
      }
      else {
        uVar7 = *(undefined8 *)(ar4 + DAT_8c02af50);
        *(undefined8 *)(ar4 + 100) = uVar7;
        *(undefined8 *)(ar4 + 0x60) = uVar7;
        *(undefined8 *)(ar4 + 0x5c) = uVar7;
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      uVar5 = (ulonglong)*(uint *)(ar4 + 100);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 100);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(iVar3 + DAT_8c02af54),(int)uVar5);
    }
    else {
      dVar6 = *(double *)(iVar3 + DAT_8c02af54);
    }
    if (in_FPSCR_PR == '\0') {
      fStack_18 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fStack_18 = SUB84(dVar6 + dVar6,0);
    }
    iStack_14 = ar4;
    if (in_FPSCR_SZ != '\0') {
      fStack_18 = (float)in_xd0;
      iStack_14 = (int)((ulonglong)in_xd0 >> 0x20);
    }
    if (in_FPSCR_SZ == '\0') {
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
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x60),*(undefined4 *)(iVar3 + DAT_8c02af5c));
  }
  else {
    in_xd0 = *(undefined8 *)(iVar3 + DAT_8c02af5c);
    dVar6 = *(double *)(ar4 + 0x60);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c02af58) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c02af58) = in_xd0;
  }
  iVar2 = DAT_8c02af64;
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(iVar3 + DAT_8c02af64));
  }
  else {
    in_xd0 = *(undefined8 *)(iVar3 + DAT_8c02af64);
    dVar6 = *(double *)(ar4 + 0x5c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c02af60) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c02af60) = in_xd0;
  }
  return iVar2;
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

/* WARNING: Removing unreachable block (ram,0x8c02b080) */
/* WARNING: Unknown calling convention */

int FUN_8c02b058(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r13;
  undefined4 a5;
  undefined4 unaff_r14;
  undefined8 *puVar3;
  undefined4 in_fr1;
  double dVar4;
  float fVar5;
  undefined8 in_dr14;
  double dVar6;
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
  uVar1 = (**(code **)(DAT_8c02b160 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0x14) = uVar1;
  *(undefined4 *)((int)puVar3 + -0x10) = *(undefined4 *)((int)puVar3 + -0x14);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c02b168,in_fr1);
  }
  else {
    dVar4 = (double)CONCAT44(DAT_8c02b16c,DAT_8c02b168);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = (float)*(int *)(DAT_8c02b164 + ar4) / (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar5 = SUB84((double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   (float)*(int *)(DAT_8c02b164 + ar4)) / dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c02b16c),fVar5);
  }
  else {
    dVar6 = *(double *)(ar4 + DAT_8c02b16c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0) - 1.0);
  }
  else {
    dVar6 = dVar6 - (double)CONCAT44(0x3f800000,SUB84(dVar4,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c02b16c) = SUB84(dVar6,0);
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c02b16c) = in_xd14;
  }
  a5 = *(undefined4 *)(DAT_8c02b170 + ar4);
  uVar1 = *(undefined4 *)(DAT_8c02b174 + ar4);
  (*(code *)PTR_s_CAnimal_ChangeBodyTexture_02af96_8c02b178)(ar4,uVar1,ar6,ar7);
  *(int *)((int)puVar3 + -0x18) = ar4;
  *(int *)(DAT_8c02b17c + *(int *)((int)puVar3 + -0x18)) =
       *(int *)(DAT_8c02b17c + *(int *)((int)puVar3 + -0x18)) + 1;
  (*(code *)PTR_FUN_8c02b188)(ar4 + DAT_8c02b184,uVar1,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 8) + 0x34))(ar4,uVar1,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c02b16c) = (int)((ulonglong)dVar6 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c02b16c) = dVar6;
  }
  (*(code *)PTR_s_CAnimal_ChangeBodyTexture_02af96_8c02b178)(ar4,a5,ar6,ar7);
  *(int *)((int)puVar3 + -0x1c) = ar4;
  *(undefined4 *)((int)puVar3 + -0x20) =
       *(undefined4 *)(DAT_8c02b164 + *(int *)((int)puVar3 + -0x1c));
  *(int *)(DAT_8c02b164 + *(int *)((int)puVar3 + -0x1c)) = *(int *)((int)puVar3 + -0x20) + 1;
  iVar2 = DAT_8c02b17c;
  if (*(int *)((int)puVar3 + -0x20) < DAT_8c02b18c) {
    *(int *)((int)puVar3 + -0x24) = ar4;
    *(int *)(DAT_8c02b17c + *(int *)((int)puVar3 + -0x24)) =
         *(int *)(DAT_8c02b17c + *(int *)((int)puVar3 + -0x24)) + -1;
  }
  else {
    (*(code *)PTR_FUN_8c02b188)(ar4 + DAT_8c02b184,a5,ar6,ar7);
    *(undefined4 *)(DAT_8c02b164 + ar4) = 0;
    *(undefined4 *)(DAT_8c02b17c + ar4) = 0;
    iVar2 = (*(code *)PTR_s_CAnimal_ChangeBodyTexture_02af96_8c02b178)
                      (ar4,*(undefined4 *)(DAT_8c02b174 + ar4),ar6,ar7);
  }
  return iVar2;
}



/* FUN_8c02b190 @ 8c02b190 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02b190(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_fr1;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(DAT_8c02b1a4 + ar4) = DAT_8c02b1a8;
  iVar1 = DAT_8c02b1ac;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c02b1ac) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c02b1ac) = (ulonglong)in_fr1;
  }
  return iVar1;
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
/* WARNING: Removing unreachable block (ram,0x8c02b258) */
/* WARNING: Removing unreachable block (ram,0x8c02b24e) */
/* WARNING: Removing unreachable block (ram,0x8c02b26c) */
/* WARNING: Removing unreachable block (ram,0x8c02b2b0) */
/* WARNING: Removing unreachable block (ram,0x8c02b2d4) */
/* WARNING: Removing unreachable block (ram,0x8c02b300) */
/* WARNING: Removing unreachable block (ram,0x8c02b2ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b208(short *ar4,int ar5,float *ar6,undefined4 ar7)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  char in_FPSCR_SZ;
  
  bVar1 = false;
  if (((ar5 != 0) && (ar5 != 0x2d)) && (ar5 != 0x1e)) {
    *ar4 = 0;
    uVar2 = (*(code *)PTR_FUN_8c02b338)(ar4,ar5,ar6,ar7);
    ar4[1] = (short)uVar2;
    return ar5;
  }
  fVar4 = DAT_8c02b33c;
  fVar5 = _FUN_8c02b340;
  if (in_FPSCR_SZ == '\0') {
    fVar4 = *(float *)(ar4 + 2);
    fVar5 = DAT_8c02b33c;
  }
  if (fVar4 == fVar5) {
    fVar4 = DAT_8c02b33c;
    fVar5 = _FUN_8c02b340;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *ar6;
      fVar5 = DAT_8c02b33c;
    }
    if (fVar4 != fVar5) {
      bVar1 = true;
      goto LAB_8c02b27c;
    }
  }
  fVar4 = DAT_8c02b33c;
  fVar5 = _FUN_8c02b340;
  if (in_FPSCR_SZ == '\0') {
    fVar4 = *(float *)(ar4 + 2);
    fVar5 = DAT_8c02b33c;
  }
  if (fVar4 != fVar5) {
    fVar4 = DAT_8c02b33c;
    fVar5 = _FUN_8c02b340;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *ar6;
      fVar5 = DAT_8c02b33c;
    }
    if (fVar4 == fVar5) {
      bVar1 = true;
    }
  }
LAB_8c02b27c:
  *ar4 = *ar4 + 1;
  if (ar4[1] < *ar4) {
    bVar1 = true;
  }
  iVar3 = ar5;
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
    else if (ar5 == 0x1e) {
      if ((int)((uint)*(byte *)(ar4 + 10) << 0x1e) < 0) {
        iVar3 = 0x4c;
      }
      else {
        iVar3 = 0x4d;
      }
    }
    *ar4 = 0;
    uVar2 = (*(code *)PTR_FUN_8c02b338)(ar4,ar5,ar6,ar7);
    ar4[1] = (short)uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 2) = *ar6;
  }
  else {
    *(undefined8 *)(ar4 + 2) = *(undefined8 *)ar6;
  }
  return iVar3;
}



/* FUN_8c02b340 @ 8c02b340 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02b340(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 a5;
  
  uVar2 = (*(code *)PTR_rand_8c02b3c8)(ar4,ar5,ar6,ar7);
  a5 = 2;
  uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02b3cc)(uVar2,2,ar6,ar7);
  bVar1 = (byte)uVar2 & 1;
  *(byte *)(ar4 + 0x14) = *(byte *)(ar4 + 0x14) & 0xfe | bVar1;
  *(byte *)(ar4 + 0x14) = *(byte *)(ar4 + 0x14) & 0xfd | bVar1 << 1;
  uVar2 = (*(code *)PTR_rand_8c02b3c8)(ar4,a5,ar6,ar7);
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

undefined4 FUN_8c02b5d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_vec3_copy_8c02b5fc_8c02b5f8)(in_stack_00000000,ar4 + DAT_8c02b5f4,ar6,ar7);
  return uVar1;
}



/* vec3_copy_8c02b5fc @ 8c02b5fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * vec3_copy_8c02b5fc(undefined8 *ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = *(undefined4 *)ar5;
    *(undefined4 *)((int)ar4 + 4) = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 1) = *(undefined4 *)(ar5 + 1);
  }
  else {
    *ar4 = *ar5;
    *(undefined8 *)((int)ar4 + 4) = *(undefined8 *)((int)ar5 + 4);
    ar4[1] = ar5[1];
  }
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

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02b778(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02b818)(PTR_DAT_8c02b814,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c02b820;
  uVar2 = DAT_8c02b81c;
  (*(code *)PTR_global_list_push_8c02b824)(uVar1,PTR_Vec3_dtor_8c02b820,DAT_8c02b81c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02b818)(PTR_DAT_8c02b828,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c02b820;
  uVar2 = DAT_8c02b82c;
  (*(code *)PTR_global_list_push_8c02b824)(uVar1,PTR_Vec3_dtor_8c02b820,DAT_8c02b82c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02b818)(PTR_DAT_8c02b830,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c02b820;
  uVar2 = DAT_8c02b834;
  (*(code *)PTR_global_list_push_8c02b824)(uVar1,PTR_Vec3_dtor_8c02b820,DAT_8c02b834,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c02b818)(PTR_DAT_8c02b838,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c02b820;
  uVar2 = DAT_8c02b83c;
  (*(code *)PTR_global_list_push_8c02b824)(uVar1,PTR_Vec3_dtor_8c02b820,DAT_8c02b83c,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c02b840 = *(undefined4 *)DAT_8c02b844;
  }
  else {
    *(undefined8 *)PTR_DAT_8c02b840 = *DAT_8c02b844;
  }
  uVar2 = (*(code *)PTR_FUN_8c02b84c)(DAT_8c02b848,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c02b824)(uVar2,PTR_FUN_8c02b854,DAT_8c02b850,ar7);
  return uVar2;
}



/* FUN_8c02b858 @ 8c02b858 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02b858(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c02b8d0)(ar4 + DAT_8c02b8cc,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c02b8d0)(ar4 + DAT_8c02b8d4,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c02b8dc)(ar4 + DAT_8c02b8d8,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_02b8f0_8c02b8e4)(ar4 + DAT_8c02b8e0,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_02b8f0_8c02b8e4)(ar4 + DAT_8c02b8e8,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c02b8ec)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_02b8f0 @ 8c02b8f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_02b8f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c02b91c)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c02b920 @ 8c02b920 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02b920(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a5;
  undefined4 a6;
  undefined4 a7;
  
  a7 = 8;
  a6 = 0;
  a5 = PTR_LAB_8c02b980;
  (*(code *)PTR_FUN_8c02b984)(ar4,PTR_LAB_8c02b980,0,8);
  (*(code *)PTR_FUN_8c02b98c)(ar4 + DAT_8c02b988,a5,a6,a7);
  (*(code *)PTR_FUN_8c02b98c)(ar4 + DAT_8c02b990,a5,a6,a7);
  (*(code *)PTR_FUN_8c02b998)(ar4 + DAT_8c02b994,a5,a6,a7);
  (*(code *)PTR_FUN_8c02b9a0)(ar4 + DAT_8c02b99c,a5,a6,a7);
  (*(code *)PTR_FUN_8c02b9a0)(ar4 + DAT_8c02b9a4,a5,a6,a7);
  return ar4;
}



/* FUN_8c02b9a8 @ 8c02b9a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c02b9a8(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 a6;
  undefined *a7;
  int iVar3;
  
  (*(code *)PTR_FUN_8c02bce0)(ar4,PTR_LAB_8c02bcdc,0,0x18);
  (*(code *)PTR_FUN_8c02bcf8)
            (ar4 + DAT_8c02bcf4,*(undefined4 *)(PTR_DAT_8c02bce4 + DAT_8c02bcf0 + ar6 * 0x140),
             *(undefined4 *)(PTR_DAT_8c02bce4 + DAT_8c02bcec + ar6 * 0x140),
             *(undefined4 *)(PTR_DAT_8c02bce4 + DAT_8c02bce8 + ar6 * 0x140));
  a7 = PTR_DAT_8c02bce4 + ar6 * 0x140 + 0xe;
  (*(code *)PTR_FUN_8c02bd00)
            (ar4 + DAT_8c02bcfc,*(undefined4 *)(PTR_DAT_8c02bce4 + ar6 * 0x140 + 8),
             (int)*(short *)(PTR_DAT_8c02bce4 + ar6 * 0x140 + 0xc),a7);
  a6 = *(undefined4 *)(PTR_DAT_8c02bce4 + ar6 * 0x140 + 0x28);
  uVar2 = *(undefined4 *)(PTR_DAT_8c02bce4 + ar6 * 0x140 + 0x24);
  (*(code *)PTR_FUN_8c02bd08)(ar4 + DAT_8c02bd04,uVar2,a6,a7);
  puVar1 = PTR_DAT_8c02bce4;
  *(undefined4 *)(DAT_8c02bcf0 + ar4) = ar5;
  *(int *)(DAT_8c02bcec + ar4) = ar6;
  uVar2 = (*(code *)PTR_FUN_8c02bd0c)(ar4,uVar2,a6,a7);
  *(int *)(DAT_8c02bce8 + ar4) = (int)(short)uVar2;
  *(undefined1 *)(DAT_8c02bd10 + ar4) = 0;
  *(undefined1 *)(DAT_8c02bd14 + ar4) = 0;
  *(undefined4 *)(DAT_8c02bd18 + ar4) = 0;
  *(undefined4 *)(DAT_8c02bd1c + ar4) = 0;
  for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
    *(undefined4 *)(DAT_8c02bd20 + ar4 + iVar3 * 4) = 0;
  }
  (*(code *)PTR_FUN_8c02bd24)(ar4,(int)(char)puVar1[ar6 * 0x140 + 0x2c],a6,a7);
  (*(code *)PTR_FUN_8c02bd28)(ar4,puVar1 + ar6 * 0x140 + 0x30,a6,a7);
  (*(code *)PTR_FUN_8c02bd2c)(ar4,puVar1 + ar6 * 0x140 + 0x44,a6,a7);
  (*(code *)PTR_FUN_8c02bd24)(ar4 + 0x18,(int)(char)puVar1[ar6 * 0x140 + 0x58],a6,a7);
  (*(code *)PTR_FUN_8c02bd28)(ar4 + 0x18,puVar1 + ar6 * 0x140 + 0x5c,a6,a7);
  (*(code *)PTR_FUN_8c02bd2c)(ar4 + 0x18,puVar1 + ar6 * 0x140 + 0x70,a6,a7);
  (*(code *)PTR_FUN_8c02bd24)(ar4 + 0x30,(int)(char)puVar1[DAT_8c02bd30 + ar6 * 0x140],a6,a7);
  (*(code *)PTR_FUN_8c02bd28)(ar4 + 0x30,puVar1 + DAT_8c02bd34 + ar6 * 0x140,a6,a7);
  (*(code *)PTR_FUN_8c02bd2c)(ar4 + 0x30,puVar1 + DAT_8c02bd38 + ar6 * 0x140,a6,a7);
  (*(code *)PTR_FUN_8c02bd24)(ar4 + 0x48,(int)(char)puVar1[DAT_8c02bd3c + ar6 * 0x140],a6,a7);
  (*(code *)PTR_FUN_8c02bd28)(ar4 + 0x48,puVar1 + DAT_8c02bd40 + ar6 * 0x140,a6,a7);
  (*(code *)PTR_FUN_8c02bd2c)(ar4 + 0x48,puVar1 + DAT_8c02bd44 + ar6 * 0x140,a6,a7);
  (*(code *)PTR_FUN_8c02bd24)(ar4 + 0x60,(int)(char)puVar1[DAT_8c02bd48 + ar6 * 0x140],a6,a7);
  (*(code *)PTR_FUN_8c02bd28)(ar4 + 0x60,puVar1 + DAT_8c02bd4c + ar6 * 0x140,a6,a7);
  (*(code *)PTR_FUN_8c02bd2c)(ar4 + 0x60,puVar1 + DAT_8c02bd50 + ar6 * 0x140,a6,a7);
  (*(code *)PTR_FUN_8c02bd24)(ar4 + 0x78,(int)(char)puVar1[DAT_8c02bd54 + ar6 * 0x140],a6,a7);
  (*(code *)PTR_FUN_8c02bd28)(ar4 + 0x78,puVar1 + DAT_8c02bd58 + ar6 * 0x140,a6,a7);
  (*(code *)PTR_FUN_8c02bd2c)(ar4 + 0x78,puVar1 + DAT_8c02bd5c + ar6 * 0x140,a6,a7);
  (*(code *)PTR_FUN_8c02bd60)(ar4 + DAT_8c02bcfc,0,(int)*(short *)(puVar1 + ar6 * 0x140 + 0xe),a7);
  (*(code *)PTR_FUN_8c02bd60)(ar4 + DAT_8c02bcfc,1,(int)*(short *)(puVar1 + ar6 * 0x140 + 0x10),a7);
  (*(code *)PTR_FUN_8c02bd60)(ar4 + DAT_8c02bcfc,2,(int)*(short *)(puVar1 + ar6 * 0x140 + 0x12),a7);
  (*(code *)PTR_FUN_8c02bd60)(ar4 + DAT_8c02bcfc,3,(int)*(short *)(puVar1 + ar6 * 0x140 + 0x14),a7);
  (*(code *)PTR_FUN_8c02bd60)(ar4 + DAT_8c02bcfc,4,(int)*(short *)(puVar1 + ar6 * 0x140 + 0x16),a7);
  iVar3 = (int)*(short *)(puVar1 + ar6 * 0x140 + 0x18);
  (*(code *)PTR_FUN_8c02bd60)(ar4 + DAT_8c02bcfc,5,iVar3,a7);
  (*(code *)PTR_FUN_8c02bd64)(ar4 + DAT_8c02bcfc,*(undefined4 *)(puVar1 + ar6 * 0x140 + 4),iVar3,a7)
  ;
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

/* WARNING: Unknown calling convention */

int FUN_8c02c030(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *a6;
  int *a5;
  undefined4 uVar3;
  undefined4 a6_00;
  int a5_00;
  
  a5 = ar5;
  a6 = ar6;
  iVar1 = (*(code *)PTR_get_field_24_026024_8c02c298)(ar6,ar5,ar6,ar7);
  if (*(char *)(DAT_8c02c29c + ar4) == '\x01') {
    (*(code *)PTR_FUN_8c02c2a4)(ar4 + DAT_8c02c2a0,(int)*(char *)(DAT_8c02c29c + ar4),a6,ar7);
    (*(code *)PTR_FUN_8c02c2a8)(ar4,(int)*(char *)(DAT_8c02c29c + ar4),a6,ar7);
    (*(code *)PTR_FUN_8c02c2a8)(ar4 + 0x18,(int)*(char *)(DAT_8c02c29c + ar4),a6,ar7);
    if (iVar1 == 0) {
      (*(code *)PTR_FUN_8c02c2a8)(ar4 + 0x30,(int)*(char *)(DAT_8c02c29c + ar4),a6,ar7);
    }
    if (iVar1 == 1) {
      (*(code *)PTR_FUN_8c02c2a8)(ar4 + 0x48,(int)*(char *)(DAT_8c02c29c + ar4),a6,ar7);
    }
    (*(code *)PTR_FUN_8c02c2a8)(ar4 + 0x60,(int)*(char *)(DAT_8c02c29c + ar4),a6,ar7);
    a5 = (int *)(int)*(char *)(DAT_8c02c29c + ar4);
    (*(code *)PTR_FUN_8c02c2a8)(ar4 + 0x78,a5,a6,ar7);
  }
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c02c2ac)(ar4,ar6,a6,ar7);
    (*(code *)PTR_FUN_8c02c2ac)(ar4 + 0x18,ar6,a6,ar7);
    (*(code *)PTR_FUN_8c02c2ac)(ar4 + 0x30,ar6,a6,ar7);
    a5 = ar6;
    (*(code *)PTR_FUN_8c02c2ac)(ar4 + 0x48,ar6,a6,ar7);
    uVar2 = (*(code *)PTR_FUN_8c02c2b0)(ar4 + 0x78,a5,a6,ar7);
    if ((char)uVar2 == '\x01') {
      a5 = ar6;
      (*(code *)PTR_FUN_8c02c2ac)(ar4 + 0x78,ar6,a6,ar7);
    }
  }
  if (ar5 != *(int **)(DAT_8c02c2b4 + ar4)) {
    ar7 = (*(code *)PTR_FUN_8c02c2b8)(ar4,a5,a6,ar7);
    a5 = ar6;
    a6 = ar5;
    (*(code *)PTR_FUN_8c02c2c0)(ar4 + DAT_8c02c2bc,ar6,ar5,ar7);
  }
  iVar1 = (*(code *)PTR_FUN_8c02c2c4)(ar4 + DAT_8c02c2bc,a5,a6,ar7);
  if ((iVar1 == 0) && (ar5 != *(int **)(DAT_8c02c2b4 + ar4))) {
    if (ar5 != *(int **)(DAT_8c02c2b4 + ar4)) {
      a6 = (int *)(*(code *)PTR_FUN_8c02c2b8)(ar4,a5,a6,ar7);
      a5 = ar5;
      (*(code *)PTR_FUN_8c02c2cc)(ar4 + DAT_8c02c2c8,ar5,a6,ar7);
    }
    iVar1 = (*(code *)PTR_FUN_8c02c2d0)(ar4 + DAT_8c02c2c8,a5,a6,ar7);
    uVar3 = 0xd;
    uVar2 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02c2d4)(iVar1 + -0x32,0xd,a6,ar7);
    a5_00 = (int)(char)uVar2;
    iVar1 = (*(code *)PTR_FUN_8c02c2d0)(ar4 + DAT_8c02c2c8,uVar3,a6,ar7);
    if ((iVar1 == 100) && (a5_00 = 5, *DAT_8c02c2d8 == 1)) {
      a5_00 = 4;
    }
    (*(code *)PTR_FUN_8c02c2dc)(ar4 + 0x60,a5_00,a6,ar7);
    iVar1 = (*(code *)PTR_FUN_8c02c2e0)(ar4 + DAT_8c02c2c8,a5_00,a6,ar7);
    if (iVar1 == 1) {
      (*(code *)PTR_FUN_8c02c2e4)(ar4 + 0x60,1,a6,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c02c2e4)(ar4 + 0x60,0,a6,ar7);
    }
    a5 = ar6;
    (*(code *)PTR_FUN_8c02c2ac)(ar4 + 0x60,ar6,a6,ar7);
  }
  uVar2 = (*(code *)PTR_FUN_8c02c2b8)(ar4,a5,a6,ar7);
  (*(code *)PTR_FUN_8c02c2e8)(ar4 + DAT_8c02c2a0,uVar2,a6,ar7);
  uVar3 = (**(code **)(DAT_8c02c2b4 + *ar6))(ar6,uVar2,a6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c02c2ec)(ar4,uVar2,a6,ar7);
  a6_00 = *(undefined4 *)(DAT_8c02c2f0 + ar4);
  uVar2 = (*(code *)PTR_FUN_8c02c2f4)(uVar3,(int)(short)uVar2,a6_00,ar7);
  (*(code *)PTR_FUN_8c02c2f8)(ar4 + DAT_8c02c2a0,(int)(char)uVar2,a6_00,ar7);
  uVar2 = *(undefined4 *)(DAT_8c02c2fc + ar4);
  (*(code *)PTR_FUN_8c02c300)(ar4 + DAT_8c02c2a0,uVar2,a6_00,ar7);
  *(undefined1 *)(DAT_8c02c29c + ar4) = 0;
  (*(code *)PTR_FUN_8c02c304)(ar4,uVar2,a6_00,ar7);
  iVar1 = DAT_8c02c2b4;
  *(int **)(DAT_8c02c2b4 + ar4) = ar5;
  return iVar1;
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
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_8c02ca2c;
  iVar4 = ar5;
  iVar2 = (*(code *)PTR_get_field_34_02cbdc_8c02ca34)(ar4 + DAT_8c02ca30,ar5,ar6,ar7);
  if (iVar2 != 0x13) {
    (*(code *)PTR_FUN_8c02ca38)(ar4 + DAT_8c02ca30,0,ar6,ar7);
    iVar4 = 0;
    (*(code *)PTR_FUN_8c02ca40)(ar4 + DAT_8c02ca3c,0,ar6,ar7);
  }
  *(undefined1 *)(DAT_8c02ca44 + ar4) = 0;
  *(undefined1 *)(DAT_8c02ca48 + ar4) = 0;
  *(int *)(DAT_8c02ca4c + ar4) = ar5;
  uVar3 = (*(code *)PTR_FUN_8c02ca50)(ar4,iVar4,ar6,ar7);
  *(int *)(DAT_8c02ca54 + ar4) = (int)(short)uVar3;
  (*(code *)PTR_FUN_8c02ca58)(ar4,(int)(char)puVar1[ar5 * 0x140 + 0x2c],ar6,ar7);
  (*(code *)PTR_FUN_8c02ca5c)(ar4,puVar1 + ar5 * 0x140 + 0x30,ar6,ar7);
  (*(code *)PTR_FUN_8c02ca60)(ar4,puVar1 + ar5 * 0x140 + 0x44,ar6,ar7);
  (*(code *)PTR_FUN_8c02ca58)(ar4 + 0x18,(int)(char)puVar1[ar5 * 0x140 + 0x58],ar6,ar7);
  (*(code *)PTR_FUN_8c02ca5c)(ar4 + 0x18,puVar1 + ar5 * 0x140 + 0x5c,ar6,ar7);
  (*(code *)PTR_FUN_8c02ca60)(ar4 + 0x18,puVar1 + ar5 * 0x140 + 0x70,ar6,ar7);
  (*(code *)PTR_FUN_8c02ca58)(ar4 + 0x30,(int)(char)puVar1[DAT_8c02ca64 + ar5 * 0x140],ar6,ar7);
  (*(code *)PTR_FUN_8c02ca5c)(ar4 + 0x30,puVar1 + DAT_8c02ca68 + ar5 * 0x140,ar6,ar7);
  (*(code *)PTR_FUN_8c02ca60)(ar4 + 0x30,puVar1 + DAT_8c02ca6c + ar5 * 0x140,ar6,ar7);
  (*(code *)PTR_FUN_8c02ca58)(ar4 + 0x48,(int)(char)puVar1[DAT_8c02ca70 + ar5 * 0x140],ar6,ar7);
  (*(code *)PTR_FUN_8c02ca5c)(ar4 + 0x48,puVar1 + DAT_8c02ca74 + ar5 * 0x140,ar6,ar7);
  (*(code *)PTR_FUN_8c02ca60)(ar4 + 0x48,puVar1 + DAT_8c02ca78 + ar5 * 0x140,ar6,ar7);
  (*(code *)PTR_FUN_8c02ca58)(ar4 + 0x60,(int)(char)puVar1[DAT_8c02ca7c + ar5 * 0x140],ar6,ar7);
  (*(code *)PTR_FUN_8c02ca5c)(ar4 + 0x60,puVar1 + DAT_8c02ca80 + ar5 * 0x140,ar6,ar7);
  (*(code *)PTR_FUN_8c02ca60)(ar4 + 0x60,puVar1 + DAT_8c02ca84 + ar5 * 0x140,ar6,ar7);
  (*(code *)PTR_FUN_8c02ca58)(ar4 + 0x78,(int)(char)puVar1[DAT_8c02ca88 + ar5 * 0x140],ar6,ar7);
  (*(code *)PTR_FUN_8c02ca5c)(ar4 + 0x78,puVar1 + DAT_8c02ca8c + ar5 * 0x140,ar6,ar7);
  (*(code *)PTR_FUN_8c02ca60)(ar4 + 0x78,puVar1 + DAT_8c02ca90 + ar5 * 0x140,ar6,ar7);
  (*(code *)PTR_FUN_8c02ca98)
            (ar4 + DAT_8c02ca3c,*(undefined4 *)(puVar1 + DAT_8c02ca94 + ar5 * 0x140),ar6,ar7);
  (*(code *)PTR_FUN_8c02ca9c)
            (ar4 + DAT_8c02ca3c,*(undefined4 *)(puVar1 + DAT_8c02ca4c + ar5 * 0x140),ar6,ar7);
  (*(code *)PTR_FUN_8c02caa0)
            (ar4 + DAT_8c02ca3c,*(undefined4 *)(puVar1 + DAT_8c02ca54 + ar5 * 0x140),ar6,ar7);
  (*(code *)PTR_FUN_8c02caa4)(ar4 + DAT_8c02ca30,*(undefined4 *)(puVar1 + ar5 * 0x140 + 8),ar6,ar7);
  (*(code *)PTR_FUN_8c02caa8)
            (ar4 + DAT_8c02ca30,(int)*(short *)(puVar1 + ar5 * 0x140 + 0xc),ar6,ar7);
  (*(code *)PTR_FUN_8c02caac)(ar4 + DAT_8c02ca30,0,(int)*(short *)(puVar1 + ar5 * 0x140 + 0xe),ar7);
  (*(code *)PTR_FUN_8c02caac)(ar4 + DAT_8c02ca30,1,(int)*(short *)(puVar1 + ar5 * 0x140 + 0x10),ar7)
  ;
  (*(code *)PTR_FUN_8c02caac)(ar4 + DAT_8c02ca30,2,(int)*(short *)(puVar1 + ar5 * 0x140 + 0x12),ar7)
  ;
  (*(code *)PTR_FUN_8c02caac)(ar4 + DAT_8c02ca30,3,(int)*(short *)(puVar1 + ar5 * 0x140 + 0x14),ar7)
  ;
  (*(code *)PTR_FUN_8c02caac)(ar4 + DAT_8c02ca30,4,(int)*(short *)(puVar1 + ar5 * 0x140 + 0x16),ar7)
  ;
  iVar4 = (int)*(short *)(puVar1 + ar5 * 0x140 + 0x18);
  (*(code *)PTR_FUN_8c02caac)(ar4 + DAT_8c02ca30,5,iVar4,ar7);
  (*(code *)PTR_FUN_8c02cab0)
            (ar4 + DAT_8c02ca30,*(undefined4 *)(puVar1 + ar5 * 0x140 + 0x1c),iVar4,ar7);
  (*(code *)PTR_FUN_8c02cab4)
            (ar4 + DAT_8c02ca30,*(undefined4 *)(puVar1 + ar5 * 0x140 + 0x20),iVar4,ar7);
  (*(code *)PTR_FUN_8c02cab8)
            (ar4 + DAT_8c02ca30,*(undefined4 *)(puVar1 + ar5 * 0x140 + 4),iVar4,ar7);
  (*(code *)PTR_FUN_8c02cabc)(ar4 + DAT_8c02ca30,0,iVar4,ar7);
  (*(code *)PTR_FUN_8c02cac0)(ar4 + DAT_8c02ca30,0,iVar4,ar7);
  (*(code *)PTR_FUN_8c02cac4)(ar4 + DAT_8c02ca30,0,iVar4,ar7);
  (*(code *)PTR_FUN_8c02cac8)(ar4 + DAT_8c02ca30,0,iVar4,ar7);
  (*(code *)PTR_FUN_8c02cacc)(ar4 + DAT_8c02ca30,0,iVar4,ar7);
  (*(code *)PTR_FUN_8c02cad4)
            (ar4 + DAT_8c02cad0,*(undefined4 *)(puVar1 + ar5 * 0x140 + 0x24),iVar4,ar7);
  uVar3 = (*(code *)PTR_FUN_8c02cad8)
                    (ar4 + DAT_8c02cad0,*(undefined4 *)(puVar1 + ar5 * 0x140 + 0x28),iVar4,ar7);
  return uVar3;
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
  int iVar2;
  
  (*(code *)PTR_FUN_8c02cd9c)(ar4,*ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c02cda0)(ar4,ar5[1],ar6,ar7);
  (*(code *)PTR_FUN_8c02cda4)(ar4,ar5[2],ar6,ar7);
  (*(code *)PTR_FUN_8c02cda8)(ar4,ar5[3],ar6,ar7);
  (*(code *)PTR_FUN_8c02cdb0)(ar4 + DAT_8c02cdac,ar5[4],ar6,ar7);
  (*(code *)PTR_FUN_8c02cdb4)(ar4 + DAT_8c02cdac,ar5[5],ar6,ar7);
  (*(code *)PTR_FUN_8c02cdbc)(ar4 + DAT_8c02cdb8,(int)*(char *)(ar5 + 6),ar6,ar7);
  (*(code *)PTR_FUN_8c02cdc0)(ar4 + DAT_8c02cdb8,(int)*(char *)((int)ar5 + 0x19),ar6,ar7);
  (*(code *)PTR_FUN_8c02cdc4)(ar4 + DAT_8c02cdb8,ar5[7],ar6,ar7);
  (*(code *)PTR_FUN_8c02cdc8)(ar4 + DAT_8c02cdb8,ar5[8],ar6,ar7);
  (*(code *)PTR_FUN_8c02cdcc)(ar4 + DAT_8c02cdb8,ar5[9],ar6,ar7);
  (*(code *)PTR_FUN_8c02cdd0)(ar4 + DAT_8c02cdb8,(int)*(short *)(ar5 + 10),ar6,ar7);
  (*(code *)PTR_FUN_8c02cdd4)(ar4 + DAT_8c02cdb8,(int)*(short *)((int)ar5 + 0x2a),ar6,ar7);
  (*(code *)PTR_FUN_8c02cdd8)(ar4 + DAT_8c02cdb8,ar5[0xb],ar6,ar7);
  (*(code *)PTR_FUN_8c02cde0)(ar4 + DAT_8c02cddc,ar5[0xc],ar6,ar7);
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    (*(code *)PTR_FUN_8c02cde4)(iVar2 * 0x18 + ar4,(int)*(char *)(ar5 + iVar2 * 3 + 0xd),ar6,ar7);
    (*(code *)PTR_FUN_8c02cde8)
              (iVar2 * 0x18 + ar4,(int)*(char *)((int)ar5 + iVar2 * 0xc + 0x35),ar6,ar7);
    (*(code *)PTR_FUN_8c02cdec)(iVar2 * 0x18 + ar4,(int)*(char *)(ar5 + iVar2 * 3 + 0xf),ar6,ar7);
    (*(code *)PTR_FUN_8c02cdf0)(iVar2 * 0x18 + ar4,ar5[iVar2 * 3 + 0xe],ar6,ar7);
  }
  (*(code *)PTR_FUN_8c02cdf4)(ar4 + 0x78,(int)*(char *)(ar5 + 0x1e),ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c02cdec)(ar4 + 0x78,0,ar6,ar7);
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
  
  (*(code *)PTR_FUN_8c02cef4)(ar4,*ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c02cef8)(ar4,ar5[1],ar6,ar7);
  (*(code *)PTR_FUN_8c02cefc)(ar4,ar5[2],ar6,ar7);
  (*(code *)PTR_FUN_8c02cf00)(ar4,ar5[3],ar6,ar7);
  (*(code *)PTR_FUN_8c02cf08)(ar4 + DAT_8c02cf04,ar5[4],ar6,ar7);
  (*(code *)PTR_FUN_8c02cf0c)(ar4 + DAT_8c02cf04,ar5[5],ar6,ar7);
  (*(code *)PTR_FUN_8c02cf10)(ar4 + DAT_8c02cf04,ar5[6],ar6,ar7);
  (*(code *)PTR_FUN_8c02cf14)(ar4 + DAT_8c02cf04,(int)*(short *)(ar5 + 7),ar6,ar7);
  (*(code *)PTR_FUN_8c02cf18)(ar4 + DAT_8c02cf04,(int)*(short *)((int)ar5 + 0x1e),ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c02cf1c)(ar4 + DAT_8c02cf04,ar5[8],ar6,ar7);
  return uVar1;
}



/* FUN_8c02cf20 @ 8c02cf20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02cf20(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *a5;
  int iVar2;
  
  a5 = ar5;
  uVar1 = (*(code *)PTR_get_field_134_02d1e8_8c02d138)(ar4,ar5,ar6,ar7);
  *ar5 = uVar1;
  uVar1 = (*(code *)PTR_get_field_138_02737c_8c02d13c)(ar4,a5,ar6,ar7);
  ar5[1] = uVar1;
  uVar1 = (*(code *)PTR_get_field_13c_028d9c_8c02d140)(ar4,a5,ar6,ar7);
  ar5[2] = uVar1;
  uVar1 = (*(code *)PTR_get_field_140_025f70_8c02d144)(ar4,a5,ar6,ar7);
  ar5[3] = uVar1;
  uVar1 = (*(code *)PTR_get_field_4_02d1e0_8c02d14c)(ar4 + DAT_8c02d148,a5,ar6,ar7);
  ar5[4] = uVar1;
  uVar1 = (*(code *)PTR_get_field_8_02d1d8_8c02d150)(ar4 + DAT_8c02d148,a5,ar6,ar7);
  ar5[5] = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02d158)(ar4 + DAT_8c02d154,a5,ar6,ar7);
  *(char *)(ar5 + 6) = (char)uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02d15c)(ar4 + DAT_8c02d154,a5,ar6,ar7);
  *(char *)((int)ar5 + 0x19) = (char)uVar1;
  uVar1 = (*(code *)PTR_get_field_8_02d1c0_8c02d160)(ar4 + DAT_8c02d154,a5,ar6,ar7);
  ar5[7] = uVar1;
  uVar1 = (*(code *)PTR_get_field_c_02d1b8_8c02d164)(ar4 + DAT_8c02d154,a5,ar6,ar7);
  ar5[8] = uVar1;
  uVar1 = (*(code *)PTR_get_field_10_02d1b0_8c02d168)(ar4 + DAT_8c02d154,a5,ar6,ar7);
  ar5[9] = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02d16c)(ar4 + DAT_8c02d154,a5,ar6,ar7);
  *(short *)(ar5 + 10) = (short)uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02d170)(ar4 + DAT_8c02d154,a5,ar6,ar7);
  *(short *)((int)ar5 + 0x2a) = (short)uVar1;
  uVar1 = (*(code *)PTR_get_field_18_02d1a0_8c02d174)(ar4 + DAT_8c02d154,a5,ar6,ar7);
  ar5[0xb] = uVar1;
  uVar1 = (*(code *)PTR_get_field_10_02d198_8c02d17c)(ar4 + DAT_8c02d178,a5,ar6,ar7);
  ar5[0xc] = uVar1;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(char *)(ar5 + iVar2 * 3 + 0xd) = (char)iVar2;
    uVar1 = (*(code *)PTR_FUN_8c02d180)(iVar2 * 0x18 + ar4,a5,ar6,ar7);
    *(char *)((int)ar5 + iVar2 * 0xc + 0x35) = (char)uVar1;
    uVar1 = (*(code *)PTR_get_field_4_02be9c_8c02d184)(iVar2 * 0x18 + ar4,a5,ar6,ar7);
    ar5[iVar2 * 3 + 0xe] = uVar1;
    uVar1 = (*(code *)PTR_FUN_8c02d188)(iVar2 * 0x18 + ar4,a5,ar6,ar7);
    *(char *)(ar5 + iVar2 * 3 + 0xf) = (char)uVar1;
  }
  uVar1 = (*(code *)PTR_FUN_8c02d18c)(ar4 + 0x78,a5,ar6,ar7);
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
  undefined4 *a5;
  
  a5 = ar5;
  uVar1 = (*(code *)PTR_get_field_134_02d1e8_8c02d2b4)(ar4,ar5,ar6,ar7);
  *ar5 = uVar1;
  uVar1 = (*(code *)PTR_get_field_138_02737c_8c02d2b8)(ar4,a5,ar6,ar7);
  ar5[1] = uVar1;
  uVar1 = (*(code *)PTR_get_field_13c_028d9c_8c02d2bc)(ar4,a5,ar6,ar7);
  ar5[2] = uVar1;
  uVar1 = (*(code *)PTR_get_field_140_025f70_8c02d2c0)(ar4,a5,ar6,ar7);
  ar5[3] = uVar1;
  uVar1 = (*(code *)PTR_get_field_8_02d1c0_8c02d2c8)(ar4 + DAT_8c02d2c4,a5,ar6,ar7);
  ar5[4] = uVar1;
  uVar1 = (*(code *)PTR_get_field_c_02d1b8_8c02d2cc)(ar4 + DAT_8c02d2c4,a5,ar6,ar7);
  ar5[5] = uVar1;
  uVar1 = (*(code *)PTR_get_field_10_02d1b0_8c02d2d0)(ar4 + DAT_8c02d2c4,a5,ar6,ar7);
  ar5[6] = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02d2d4)(ar4 + DAT_8c02d2c4,a5,ar6,ar7);
  *(short *)(ar5 + 7) = (short)uVar1;
  uVar1 = (*(code *)PTR_FUN_8c02d2d8)(ar4 + DAT_8c02d2c4,a5,ar6,ar7);
  *(short *)((int)ar5 + 0x1e) = (short)uVar1;
  uVar1 = (*(code *)PTR_get_field_18_02d1a0_8c02d2dc)(ar4 + DAT_8c02d2c4,a5,ar6,ar7);
  ar5[8] = uVar1;
  return uVar1;
}



/* FUN_8c02d2e0 @ 8c02d2e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02d2e0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  int iVar2;
  
  a5 = ar5;
  (*(code *)PTR_FUN_8c02d3b4)(ar4 + DAT_8c02d3b0,ar5,ar6,ar7);
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    a5 = ar5;
    (*(code *)PTR_FUN_8c02d3b8)(iVar2 * 0x18 + ar4,ar5,ar6,ar7);
  }
  if ((6 < ar5) && ((*(int *)(DAT_8c02d3bc + ar4) == 2 || (*(int *)(DAT_8c02d3bc + ar4) == 6)))) {
    a5 = DAT_8c02d3c0;
    (*(code *)PTR_FUN_8c02d3c4)(ar4 + 0x18,DAT_8c02d3c0,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_FUN_8c02d3c8)(ar4 + DAT_8c02d3b0,a5,ar6,ar7);
  if ((char)uVar1 == '\0') {
    uVar1 = (*(code *)PTR_FUN_8c02d3cc)(ar4,a5,ar6,ar7);
    (*(code *)PTR_FUN_8c02d3d4)(ar4 + DAT_8c02d3d0,uVar1,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c02d3d8)
                      (ar4 + DAT_8c02d3d0,ar5,*(undefined4 *)(DAT_8c02d3bc + ar4),ar7);
  }
  else {
    (*(code *)PTR_FUN_8c02d3c4)(ar4 + 0x60,DAT_8c02d3c0,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c02d3dc)(ar4 + 0x60,1,ar6,ar7);
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
  uint a4;
  undefined4 uVar4;
  
  cVar1 = (char)ar6;
  uVar3 = 0;
  if (*(int *)(ar4 + 0x14) != 0) {
    uVar4 = *(undefined4 *)(ar4 + 0x14);
    a4 = ar5;
    iVar2 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c02d8e8)(ar5,uVar4,ar6,ar7);
    if ((iVar2 == 0) && (*(int *)(ar4 + 4) < *(int *)(ar4 + 0xc))) {
      *(int *)(ar4 + 4) = *(int *)(ar4 + 4) + 1;
    }
    uVar3 = *(uint *)(ar4 + 8);
    if (((*(uint *)(ar4 + 8) == 1) && (uVar3 = (int)cVar1, (int)cVar1 == 0xffffffff)) &&
       (uVar3 = DAT_8c02d8ec, DAT_8c02d8ec < ar5)) {
      uVar4 = (*(code *)PTR_rand_8c02d8f0)(a4,uVar4,ar6,ar7);
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

int FUN_8c02d944(undefined1 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  
  if ((0 < ar5) && (in_r0 = 0, *(int *)(ar4 + 0x14) != 0)) {
    iVar1 = *(int *)(ar4 + 0xc) - *(int *)(ar4 + 4);
    switch(ar5) {
    case 0:
      break;
    case 1:
      iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02d9f0)(iVar1,2,ar6,ar7);
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      break;
    case 2:
      iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02d9f0)(iVar1,0x10,ar6,ar7);
      break;
    case 3:
      iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02d9f0)(iVar1,0x10,ar6,ar7);
      break;
    case 4:
      iVar1 = 0;
      break;
    default:
      iVar1 = 0;
    }
    if (iVar1 == 0) {
      *ar4 = 1;
    }
    in_r0 = *(int *)(ar4 + 0xc) - iVar1;
    *(int *)(ar4 + 4) = in_r0;
  }
  return in_r0;
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

int FUN_8c02da5c(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  
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
  *(undefined4 *)(ar4 + 0x34) = in_stack_00000000;
  *(undefined4 *)(ar4 + 0x30) = in_stack_00000004;
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
  int a5;
  int iVar4;
  
  iVar3 = ar4;
  a5 = ar5;
  (*(code *)PTR_noop_02da0c_8c02dc78)(ar4,ar5,ar6,ar7);
  *(undefined2 *)(ar4 + 0x1e) = 0;
  if (*(char *)(ar4 + 0x4c) == '\x01') {
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + 1;
    iVar1 = *(int *)(PTR_DAT_8c02dc7c + ar5 * 0x140 + 8);
    iVar4 = *(int *)(ar4 + 0x10) - iVar1;
    if (2 < iVar4) {
      *(undefined1 *)(ar4 + 0x1c) = 0;
    }
    if (*(int *)(ar4 + 0x10) == iVar1) {
      uVar2 = (*(code *)PTR_rand_8c02dc80)(iVar3,a5,ar6,ar7);
      iVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02dc84)(uVar2,100,ar6,ar7);
      if (iVar3 < 0x32) {
        *(undefined1 *)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar4 == 1) {
      uVar2 = (*(code *)PTR_rand_8c02dc80)(iVar3,a5,ar6,ar7);
      iVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02dc84)(uVar2,100,ar6,ar7);
      if (iVar3 < 0x4b) {
        *(undefined1 *)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar4 == 2) {
      *(undefined1 *)(ar4 + 0x1c) = 0;
    }
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + 1;
    (*(code *)PTR_FUN_8c02dc88)(ar4,ar5,ar6,ar7);
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
  if ((*(int *)(ar4 + 0x48) == -1) || (iVar1 = *(int *)(ar4 + 0x48), iVar1 == 4)) {
    switch(*(undefined2 *)(ar4 + 0x14)) {
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
    case 4:
      break;
    default:
      *(undefined4 *)(ar4 + 0x44) = 1;
      break;
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
    iVar1 = *(int *)(ar4 + 0x44);
    if (((iVar1 == 1) && (iVar1 = (int)cVar2, iVar1 == 1)) &&
       (iVar1 = *(int *)(ar4 + 0x18), *(short *)(ar4 + *(short *)(ar4 + 0x16) * 2 + 0x22) <= iVar1))
    {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c02dfa0(char *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 a4;
  int iVar2;
  int *a4_00;
  int *piVar3;
  char cVar4;
  float fVar5;
  ulonglong in_dr0;
  float fVar7;
  uint uVar8;
  double dVar6;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int aiStack_98 [3];
  char *pcStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_74;
  char *pcStack_70;
  int iStack_6c;
  int iStack_68;
  char *pcStack_60;
  int iStack_5c;
  int iStack_58;
  undefined8 uStack_54;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  switch(ar4[0xb]) {
  case '\0':
    *ar4 = '\0';
    piVar3 = ar5;
    for (cVar4 = '\0'; cVar4 < '\x05'; cVar4 = cVar4 + '\x01') {
      iStack_58 = (int)cVar4;
      if (*(int *)(iStack_58 * 4 + *(int *)(ar4 + 0xc)) != -1) {
        (**(code **)(DAT_8c02e0ac + *ar5))(ar5,piVar3,ar6,ar7);
        fVar5 = (float)(in_dr0 >> 0x20);
        fStack_28 = fVar5;
        if (in_FPSCR_SZ != '\0') {
          fStack_28 = (float)in_dr0;
          fStack_24 = fVar5;
        }
        iStack_5c = (int)cVar4;
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44(fStack_28,(float)*(int *)(iStack_5c * 4 + *(int *)(ar4 + 0xc)));
        }
        else {
          in_dr0 = CONCAT44(fStack_24,fStack_28);
        }
        if (in_FPSCR_PR != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) {
          ar4[8] = cVar4;
          *ar4 = '\x01';
        }
      }
    }
    (**(code **)(DAT_8c02e0ac + *ar5))(ar5,piVar3,ar6,ar7);
    fVar5 = (float)(in_dr0 >> 0x20);
    fStack_2c = fVar5;
    fVar7 = DAT_8c02e0b0;
    if (in_FPSCR_SZ != '\0') {
      fStack_2c = (float)in_dr0;
      fStack_28 = fVar5;
      fVar5 = DAT_8c02e0b0;
      fVar7 = _DAT_8c02e0b4;
    }
    if ((in_FPSCR_PR != '\0' || fVar7 <= fVar5) &&
       (*(int *)(ar4 + 0x14) = *(int *)(ar4 + 0x14) + 1,
       (uint)_DAT_8c02e0b4 < (uint)*(float *)(ar4 + 0x14))) {
      pcStack_60 = ar4;
      uStack_30 = (*(code *)PTR_rand_8c02e0b8)(ar5,piVar3,ar6,ar7);
      iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02e0c0)(uStack_30,DAT_8c02e0bc,ar6,ar7);
      if (iVar2 == 4) {
        *(undefined4 *)(ar4 + 4) = DAT_8c02e0c4;
      }
    }
    break;
  case '\x01':
    *ar4 = '\0';
    piVar3 = ar5;
    for (cVar4 = '\0'; cVar4 < '\x05'; cVar4 = cVar4 + '\x01') {
      iStack_68 = (int)cVar4;
      if (*(int *)(iStack_68 * 4 + *(int *)(ar4 + 0xc)) != -1) {
        (**(code **)(DAT_8c02e1f8 + *ar5))(ar5,piVar3,ar6,ar7);
        uVar8 = (uint)(in_dr0 >> 0x20);
        uStack_34 = uVar8;
        if (in_FPSCR_SZ != '\0') {
          uStack_34 = (uint)in_dr0;
          uStack_30 = uVar8;
        }
        iStack_6c = (int)cVar4;
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44(uStack_34,(float)*(int *)(iStack_6c * 4 + *(int *)(ar4 + 0xc)));
        }
        else {
          in_dr0 = CONCAT44(uStack_30,uStack_34);
        }
        if (in_FPSCR_PR == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
          ar4[8] = cVar4;
          *ar4 = '\x01';
        }
      }
    }
    a4_00 = ar5;
    (**(code **)(DAT_8c02e1f8 + *ar5))(ar5,piVar3,ar6,ar7);
    uVar8 = (uint)(in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (ulonglong)uVar8;
      uStack_38 = uVar8;
    }
    else {
      uStack_38 = (uint)in_dr0;
      uStack_34 = uVar8;
    }
    dVar6 = (double)(in_dr0 & 0xffffffff);
    if (((float)in_dr0 == 0.0) &&
       (*(int *)(ar4 + 0x14) = *(int *)(ar4 + 0x14) + 1, pcStack_70 = ar4,
       DAT_8c02e1fc < *(uint *)(ar4 + 0x14))) {
      uStack_3c = (*(code *)PTR_rand_8c02e200)(a4_00,piVar3,ar6,ar7);
      piVar3 = DAT_8c02e204;
      iStack_74 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02e208)
                            (uStack_3c,DAT_8c02e204,ar6,ar7);
      if (iStack_74 == 4) {
        *(undefined4 *)(ar4 + 4) = DAT_8c02e20c;
      }
    }
    iStack_40 = (*(code *)PTR_FUN_8c02e210)(ar4,piVar3,ar6,ar7);
    if (iStack_40 < 1) {
      (**(code **)(DAT_8c02e1f8 + *ar5))(ar5,piVar3,ar6,ar7);
      if (in_FPSCR_PR == '\0') {
        iVar2 = (int)(float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        iVar2 = (int)dVar6;
      }
      *(int *)((int)aiStack_98 + DAT_8c02e214) = iVar2;
      *(undefined4 *)((int)aiStack_98 + DAT_8c02e218) =
           *(undefined4 *)(ar4[8] * 4 + *(int *)(ar4 + 0xc));
    }
    break;
  case '\x02':
    *ar4 = '\0';
    piVar3 = ar5;
    for (cVar4 = '\0'; cVar4 < '\x05'; cVar4 = cVar4 + '\x01') {
      iStack_84 = (int)cVar4;
      if (*(int *)(iStack_84 * 4 + *(int *)(ar4 + 0xc)) != -1) {
        (**(code **)(DAT_8c02e2cc + *ar5))(ar5,piVar3,ar6,ar7);
        uVar8 = (uint)(in_dr0 >> 0x20);
        uStack_48 = uVar8;
        if (in_FPSCR_SZ != '\0') {
          uStack_48 = (uint)in_dr0;
          uStack_44 = uVar8;
        }
        iStack_88 = (int)cVar4;
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44(uStack_48,(float)*(int *)(iStack_88 * 4 + *(int *)(ar4 + 0xc)));
        }
        else {
          in_dr0 = CONCAT44(uStack_44,uStack_48);
        }
        if (in_FPSCR_PR == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
          ar4[8] = cVar4;
          *ar4 = '\x01';
        }
      }
    }
    (**(code **)(DAT_8c02e2cc + *ar5))(ar5,piVar3,ar6,ar7);
    uVar8 = (uint)(in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (ulonglong)uVar8;
      uStack_4c = uVar8;
    }
    else {
      uStack_4c = (uint)in_dr0;
      uStack_48 = uVar8;
    }
    if (((float)in_dr0 == 0.0) &&
       (*(int *)(ar4 + 0x14) = *(int *)(ar4 + 0x14) + 1, DAT_8c02e2d0 < *(uint *)(ar4 + 0x14))) {
      pcStack_8c = ar4;
      a4 = (*(code *)PTR_rand_8c02e2d4)(ar5,piVar3,ar6,ar7);
      uStack_54 = CONCAT44(a4,(undefined4)uStack_54);
      iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02e2dc)(a4,DAT_8c02e2d8,ar6,ar7);
      if (iVar2 == 4) {
        *(undefined4 *)(ar4 + 4) = DAT_8c02e2e0;
      }
    }
    break;
  case '\x03':
    *ar4 = '\0';
    piVar3 = ar5;
    for (cVar4 = '\0'; cVar4 < '\x05'; cVar4 = cVar4 + '\x01') {
      aiStack_98[1] = (int)cVar4;
      if (*(int *)(aiStack_98[1] * 4 + *(int *)(ar4 + 0xc)) != -1) {
        (**(code **)(DAT_8c02e340 + *ar5))(ar5,piVar3,ar6,ar7);
        uVar1 = in_dr0;
        if (in_FPSCR_SZ == '\0') {
          uStack_54 = CONCAT44(uStack_54._4_4_,(int)(in_dr0 >> 0x20));
          uVar1 = uStack_54;
        }
        uStack_54 = uVar1;
        aiStack_98[0] = (int)cVar4;
        in_dr0 = uStack_54;
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44((undefined4)uStack_54,
                            (float)*(int *)(aiStack_98[0] * 4 + *(int *)(ar4 + 0xc)));
        }
        if (in_FPSCR_PR == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
          ar4[8] = cVar4;
          *ar4 = '\x01';
        }
      }
    }
    break;
  case '\x04':
    if ((*ar4 == '\x01') && (ar4[8] == '\x05')) {
      *(undefined4 *)(ar4 + 4) = DAT_8c02e35c;
    }
    break;
  case '\x05':
    if (*ar4 == '\x01') {
      ar4[8] = '\x02' - (char)*(undefined4 *)(ar4 + 4);
    }
  }
  iVar2 = (int)*ar4;
  if (iVar2 == 0) {
    iVar2 = 0;
    ar4[4] = '\0';
    ar4[5] = '\0';
    ar4[6] = '\0';
    ar4[7] = '\0';
  }
  return iVar2;
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
  undefined4 a6;
  
  *ar4 = 0;
  ar4[1] = 1;
  a6 = ar6;
  (*(code *)PTR_FUN_8c02e4c4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c02e4c8)(ar4,ar6,a6,ar7);
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
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  int iVar8;
  int *a5;
  char cVar9;
  char cVar10;
  byte bStack_48;
  undefined1 auStack_40 [36];
  
  iVar2 = DAT_8c02e534;
  iVar1 = DAT_8c02e530;
  puVar5 = auStack_40;
  iVar8 = 0x10;
  puVar7 = PTR_DAT_8c02e53c;
  do {
    puVar6 = puVar7 + 1;
    *puVar5 = *puVar7;
    puVar7 = puVar7 + 2;
    puVar5[1] = *puVar6;
    puVar5 = puVar5 + 2;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  ar4[0xd] = 0;
  if (ar6 < DAT_8c02e540) {
    ar4[5] = 0;
  }
  uVar3 = DAT_8c02e71c;
  switch(ar4[7]) {
  case 0:
  case 1:
    uVar3 = DAT_8c02e56c;
    break;
  case 2:
  case 3:
    uVar3 = DAT_8c02e578;
    break;
  case 4:
    uVar3 = DAT_8c02e584;
    break;
  case 5:
  case 6:
  case 7:
    uVar3 = DAT_8c02e590;
  }
  if (ar4[2] * ar4[3] == 0) {
    uVar4 = 0;
  }
  else {
    cVar9 = (char)ar7;
    if (*ar4 == 0) {
      if (ar4[5] != ar4[0xe]) {
        ar4[0xe] = ar4[5];
        ar4[6] = ar4[6] + 1;
        if ((ar4[5] == 0) || (cVar9 != -1)) {
          ar4[6] = 0;
        }
      }
      if (cVar9 != -1) {
        ar4[6] = 0;
        ar4[9] = 0;
      }
      ar4[0xb] = 5;
      a5 = ar5;
      if ((ar4[9] == 1) && (cVar9 == -1)) {
        ar4[8] = ar4[8] + 1;
        (**(code **)(DAT_8c02e720 + *ar5))(ar5,ar5,ar6,ar7);
        *(byte *)(ar4 + 0xc) = (byte)(((uint)bStack_48 << 0x1e) >> 0x1f);
        a5 = (int *)0xffffffe1;
        *(char *)(ar4 + 0xc) = (char)ar4[0xc] - (char)((int)((uint)bStack_48 << 0x1f) >> 0x1f);
        if ((iVar2 < (int)ar4[8]) || ((char)ar4[0xc] < '\x02')) {
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
      uVar4 = ar4[6];
      if (uVar3 <= uVar4) {
        if (ar4[9] == 1) {
          uVar4 = 1;
        }
        else {
          uVar4 = (uint)cVar9;
          if (uVar4 == 0xffffffff) {
            (**(code **)(DAT_8c02e720 + *ar5))(ar5,a5,ar6,ar7);
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
            uVar4 = 0;
            ar4[8] = 0;
          }
        }
      }
    }
    else {
      ar4[6] = 0;
      ar4[8] = ar4[8] + 1;
      (**(code **)(DAT_8c02e798 + *ar5))(ar5,ar5,ar6,ar7);
      cVar10 = -(char)((int)((uint)bStack_48 << 0x1f) >> 0x1f) -
               (char)((int)((uint)bStack_48 << 0x1e) >> 0x1f);
      if (ar4[0xb] == 5) {
        if ((char)ar4[0xc] < cVar10) {
          ar4[0xb] = 3;
          ar4[8] = 0;
        }
        else {
          *(char *)(ar4 + 0xc) = cVar10;
        }
        if ((((cVar9 == '\0') || (cVar9 == '\x01')) || (cVar9 == '\x02')) || (cVar9 == '\x03')) {
          ar4[0xb] = 0;
        }
      }
      uVar3 = ar4[0xb];
      if (uVar3 == 0) {
        *ar4 = 0;
      }
      else if (uVar3 == 1) {
        *ar4 = 0;
      }
      else if (uVar3 == 2) {
        *ar4 = 0;
      }
      else if (uVar3 == 3) {
        if (5 < (int)ar4[8]) {
          *ar4 = 0;
        }
      }
      else if (iVar1 < (int)ar4[8]) {
        *ar4 = 0;
        ar4[0xb] = 5;
      }
      uVar4 = *ar4;
      if (uVar4 == 0) {
        *(undefined1 *)(ar4 + 0xc) = 0xff;
        ar4[1] = 100;
        ar4[9] = 0;
        ar4[0xd] = 0;
        uVar4 = 0;
        ar4[8] = 0;
      }
    }
  }
  return uVar4;
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
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c02eb18)(ar4,ar5,ar6,ar7);
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

int FUN_8c02eb2c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  switch(ar5) {
  case 1:
    iVar1 = 1;
    break;
  case 2:
    iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02ebf8)
                      (*(int *)(ar4 + 0x10) + -0x46,6,ar6,ar7);
    break;
  case 3:
    iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02ebf8)
                      (*(int *)(ar4 + 0x14) + -0x50,4,ar6,ar7);
    break;
  case 4:
    iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02ebf8)
                      (*(int *)(ar4 + 0x18) + -0x50,4,ar6,ar7);
    break;
  case 5:
    iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02ebf8)
                      (*(int *)(ar4 + 0x24) + -0x3c,8,ar6,ar7);
    break;
  case 6:
    iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02ebf8)
                      (*(int *)(ar4 + 0x20) + -0x32,0xd,ar6,ar7);
    iVar1 = iVar1 + 1;
    break;
  case 7:
    iVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c02ebf8)
                      (*(int *)(ar4 + 0x1c) + -0x32,0xd,ar6,ar7);
    break;
  default:
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
  int a5;
  
  iVar4 = ar6;
  iVar1 = (*(code *)PTR_FUN_8c02ef4c)(ar4,ar5,ar6,ar7);
  uVar2 = (*(code *)PTR_rand_8c02ef50)(ar4,ar5,iVar4,ar7);
  a5 = 0x65 - *(int *)(PTR_DAT_8c02ef54 + iVar1 * 0x18 + 0xc);
  iVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c02ef58)(uVar2,a5,iVar4,ar7);
  if (ar6 - *(int *)(PTR_DAT_8c02ef54 + iVar1 * 0x18 + 0xc) < iVar3) {
    iVar4 = 0;
  }
  else {
    uVar2 = (*(code *)PTR_rand_8c02ef50)(uVar2,a5,iVar4,ar7);
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

undefined4 FUN_8c02ef60(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
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
  default:
    return 0xffffffff;
  }
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
  char in_FPSCR_SZ;
  
  *ar4 = PTR_DAT_8c02f16c;
  (*(code *)PTR_Vec3_ctor_zero_8c02f170)(ar4 + 10,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c02f174)(ar4 + 0x11,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c02f170)(ar4 + 0x1c,ar5,ar6,ar7);
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
  *(undefined1 *)(DAT_8c02f178 + (int)ar4) = 0;
  ar4[0x10] = 0;
  *(undefined4 *)(DAT_8c02f17c + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c02f180 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c02f184 + (int)ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    ar4[10] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 10) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[0xb] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xb) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[0xc] = 0;
    ar4[0x1c] = DAT_8c02f188;
    ar4[0x1d] = DAT_8c02f188;
    ar4[0x1e] = DAT_8c02f188;
  }
  else {
    *(ulonglong *)(ar4 + 0xc) = (ulonglong)in_fr1;
    *(ulonglong *)(ar4 + 0x1c) = CONCAT44(DAT_8c02f18c,DAT_8c02f188);
    *(ulonglong *)(ar4 + 0x1d) = CONCAT44(DAT_8c02f18c,DAT_8c02f188);
    *(ulonglong *)(ar4 + 0x1e) = CONCAT44(DAT_8c02f18c,DAT_8c02f188);
  }
  *(undefined4 *)(DAT_8c02f18c + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c02f190 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c02f194 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c02f198 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c02f19c + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c02f1a0 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c02f1a4 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c02f1a8 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c02f1ac + (int)ar4) = 4;
  *(undefined1 *)(DAT_8c02f1b0 + (int)ar4) = 2;
  *(undefined1 *)(DAT_8c02f1b4 + (int)ar4) = 0;
  return ar4;
}



/* Class_129c70_m0_02f1b8 @ 8c02f1b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_129c70_m0_02f1b8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c02f200;
    (*(code *)PTR_Vec3_dtor_8c02f204)(ar4 + 0x1c,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c02f204)(ar4 + 10,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c02f208)(ar4,a5,ar6,ar7);
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

/* WARNING: Removing unreachable block (ram,0x8c02f5d4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02f474(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *a5;
  undefined4 *a6;
  undefined4 a7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar3;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined4 *a6_00;
  undefined1 *puVar4;
  uint in_fr1;
  double dVar5;
  double dVar6;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar7;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar4 = auStack_4;
  }
  else {
    puVar4 = auStack_8;
  }
  *(undefined4 *)(puVar4 + -4) = unaff_r14;
  *(undefined4 *)(puVar4 + -8) = unaff_r13;
  *(undefined4 *)(puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar4 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar4 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar4 + -0x1c) = in_PR;
  uVar3 = 0;
  a5 = ar5;
  a6 = ar6;
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c02f648)(puVar4 + -0x2c,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = DAT_8c02f64c;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar4 + -0x98) = 0;
    *(undefined4 *)(puVar4 + -0x24) = *(undefined4 *)(puVar4 + -0x98);
    *(undefined4 *)(puVar4 + -0x9c) = *(undefined4 *)(puVar4 + -0x98);
    *(undefined4 *)(puVar4 + -0x28) = *(undefined4 *)(puVar4 + -0x9c);
    dVar5 = (double)CONCAT44(*(undefined4 *)(puVar4 + -0x9c),in_fr1);
    *(undefined4 *)(puVar4 + -0x2c) = *(undefined4 *)(puVar4 + -0x9c);
  }
  else {
    *(ulonglong *)(puVar4 + -0x98) = (ulonglong)in_fr1;
    *(undefined8 *)(puVar4 + -0x24) = *(undefined8 *)(puVar4 + -0x98);
    *(undefined8 *)(puVar4 + -0x9c) = *(undefined8 *)(puVar4 + -0x98);
    *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)(puVar4 + -0x9c);
    dVar5 = *(double *)(puVar4 + -0x9c);
    *(double *)(puVar4 + -0x2c) = dVar5;
  }
  if (*(int *)(ar4 + 0x6c) != 0) {
    *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x3c;
    (*(code *)PTR_FUN_8c02f650)(*(undefined4 *)(ar4 + 0x6c),a5,a6,a7);
    (*(code *)PTR_Vec3_length_sq_8c02f654)(puVar4 + -0x3c,a5,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0x74) = (int)((ulonglong)dVar5 >> 0x20);
      in_fr15 = *(float *)(puVar4 + -0x74);
    }
    else {
      *(double *)(puVar4 + -0x74) = dVar5;
    }
    (*(code *)PTR_Vec3_dtor_8c02f658)(puVar4 + -0x3c,0xffffffff,a6,a7);
    uVar3 = *(undefined4 *)(ar4 + 0x6c);
  }
  a6_00 = (undefined4 *)0x0;
  while( true ) {
    uVar2 = (**(code **)(DAT_8c02f66c + *ar5))(ar5,ar7,a6,a7);
    *(undefined4 *)(puVar4 + -0x94) = uVar2;
    if (*(int *)(puVar4 + -0x94) <= (int)a6_00) break;
    uVar2 = ar7;
    a6 = a6_00;
    uVar1 = (**(code **)(DAT_8c02f65c + *ar5))(ar5,ar7,a6_00,a7);
    *(undefined4 *)(puVar4 + -0x78) = uVar1;
    uVar1 = (*(code *)PTR_get_field_6c_02f46c_8c02f660)(*(undefined4 *)(puVar4 + -0x78),uVar2,a6,a7)
    ;
    *(undefined4 *)(puVar4 + -0x7c) = uVar1;
    if (*(int *)(puVar4 + -0x7c) != 0) {
      *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x4c;
      (*(code *)PTR_FUN_8c02f650)(*ar6,uVar2,a6,a7);
      uVar2 = ar7;
      a6 = a6_00;
      uVar1 = (**(code **)(DAT_8c02f65c + *ar5))(ar5,ar7,a6_00,a7);
      *(undefined4 *)(puVar4 + -0x80) = uVar1;
      *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x5c;
      (*(code *)PTR_FUN_8c02f650)(*(undefined4 *)(puVar4 + -0x80),uVar2,a6,a7);
      *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x6c;
      (*(code *)PTR_Vec3_sub_8c02f664)(puVar4 + -0x4c,puVar4 + -0x5c,a6,a7);
      (*(code *)PTR_Vec3_assign_8c02f668)(puVar4 + -0x2c,puVar4 + -0x6c,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c02f658)(puVar4 + -0x6c,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c02f658)(puVar4 + -0x5c,0xffffffff,a6,a7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c02f658)(puVar4 + -0x4c,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_length_sq_8c02f654)(puVar4 + -0x2c,uVar2,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar4 + -0x84) = (int)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(*(undefined4 *)(puVar4 + -0x84),SUB84(dVar5,0));
      }
      else {
        *(double *)(puVar4 + -0x84) = dVar5;
        dVar5 = *(double *)(puVar4 + -0x84);
      }
      if (in_FPSCR_PR == '\0') {
        bVar7 = (float)((ulonglong)dVar5 >> 0x20) < in_fr15;
      }
      else {
        bVar7 = dVar5 < (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar7) {
        (*(code *)PTR_Vec3_length_sq_8c02f654)(puVar4 + -0x2c,uVar2,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar4 + -0x88) = (int)((ulonglong)dVar5 >> 0x20);
          dVar6 = (double)(ulonglong)*(uint *)(puVar4 + -0x88);
        }
        else {
          *(double *)(puVar4 + -0x88) = dVar5;
          dVar6 = dVar5;
        }
        dVar5 = (double)((ulonglong)dVar6 & 0xffffffff);
        if (SUB84(dVar6,0) != 0.0) {
          (*(code *)PTR_Vec3_length_sq_8c02f654)(puVar4 + -0x2c,uVar2,a6,a7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar4 + -0x8c) = (int)((ulonglong)dVar5 >> 0x20);
            in_fr15 = *(float *)(puVar4 + -0x8c);
          }
          else {
            *(double *)(puVar4 + -0x8c) = dVar5;
          }
          a6 = a6_00;
          uVar3 = (**(code **)(DAT_8c02f65c + *ar5))(ar5,ar7,a6_00,a7);
          *(undefined4 *)(puVar4 + -0x90) = uVar3;
          uVar3 = *(undefined4 *)(puVar4 + -0x90);
        }
      }
    }
    a6_00 = (undefined4 *)((int)a6_00 + 1);
  }
  *(undefined4 *)(puVar4 + -0x70) = uVar3;
  (*(code *)PTR_Vec3_dtor_8c02f658)(puVar4 + -0x2c,0xffffffff,a6,a7);
  return *(undefined4 *)(puVar4 + -0x70);
}



/* FUN_8c02f670 @ 8c02f670 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c02f670(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c02f690)(in_stack_00000000,ar4 + 0x30,ar6,ar7);
  return uVar1;
}



/* FUN_8c02f694 @ 8c02f694 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02f7da) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02f694(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *a5;
  undefined4 *a6;
  undefined4 a7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int iVar3;
  undefined4 unaff_r11;
  undefined4 uVar4;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined4 *a6_00;
  undefined1 *puVar5;
  double in_dr0;
  double dVar6;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar7;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar5 = auStack_4;
  }
  else {
    puVar5 = auStack_8;
  }
  *(undefined4 *)(puVar5 + -4) = unaff_r14;
  *(undefined4 *)(puVar5 + -8) = unaff_r13;
  *(undefined4 *)(puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar5 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar5 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar5 + -0x1c) = unaff_r8;
  *(undefined4 *)(puVar5 + -0x20) = in_PR;
  iVar3 = *(int *)(puVar5 + DAT_8c02f84c + -0x98);
  uVar4 = 0;
  a5 = ar5;
  a6 = ar6;
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c02f850)(puVar5 + -0x30,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = DAT_8c02f854;
  }
  if (*(int *)(ar4 + 0x6c) != 0) {
    *(undefined1 **)(puVar5 + -0x9c) = puVar5 + -0x40;
    (*(code *)PTR_FUN_8c02f858)(*(undefined4 *)(ar4 + 0x6c),a5,a6,a7);
    (*(code *)PTR_Vec3_length_sq_8c02f85c)(puVar5 + -0x40,a5,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar5 + -0x78) = (int)((ulonglong)in_dr0 >> 0x20);
      in_fr15 = *(float *)(puVar5 + -0x78);
    }
    else {
      *(double *)(puVar5 + -0x78) = in_dr0;
    }
    (*(code *)PTR_Vec3_dtor_8c02f860)(puVar5 + -0x40,0xffffffff,a6,a7);
    uVar4 = *(undefined4 *)(ar4 + 0x6c);
  }
  a6_00 = (undefined4 *)0x0;
  while( true ) {
    uVar2 = (**(code **)(DAT_8c02f874 + *ar5))(ar5,ar7,a6,a7);
    *(undefined4 *)(puVar5 + -0x98) = uVar2;
    if (*(int *)(puVar5 + -0x98) <= (int)a6_00) break;
    uVar2 = ar7;
    a6 = a6_00;
    uVar1 = (**(code **)(DAT_8c02f864 + *ar5))(ar5,ar7,a6_00,a7);
    *(undefined4 *)(puVar5 + -0x7c) = uVar1;
    uVar1 = (**(code **)(DAT_8c02f868 + *(int *)(*(int *)(puVar5 + -0x7c) + 8)))
                      (*(int *)(puVar5 + -0x7c),uVar2,a6,a7);
    *(undefined4 *)(puVar5 + -0x80) = uVar1;
    if (iVar3 == *(int *)(puVar5 + -0x80)) {
      *(undefined1 **)(puVar5 + -0x9c) = puVar5 + -0x50;
      (*(code *)PTR_FUN_8c02f858)(*ar6,uVar2,a6,a7);
      uVar2 = ar7;
      a6 = a6_00;
      uVar1 = (**(code **)(DAT_8c02f864 + *ar5))(ar5,ar7,a6_00,a7);
      *(undefined4 *)(puVar5 + -0x84) = uVar1;
      *(undefined1 **)(puVar5 + -0x9c) = puVar5 + -0x60;
      (*(code *)PTR_FUN_8c02f858)(*(undefined4 *)(puVar5 + -0x84),uVar2,a6,a7);
      *(undefined1 **)(puVar5 + -0x9c) = puVar5 + -0x70;
      (*(code *)PTR_Vec3_sub_8c02f86c)(puVar5 + -0x50,puVar5 + -0x60,a6,a7);
      (*(code *)PTR_Vec3_assign_8c02f870)(puVar5 + -0x30,puVar5 + -0x70,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c02f860)(puVar5 + -0x70,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c02f860)(puVar5 + -0x60,0xffffffff,a6,a7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c02f860)(puVar5 + -0x50,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_length_sq_8c02f85c)(puVar5 + -0x30,uVar2,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar5 + -0x88) = (int)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = (double)CONCAT44(*(undefined4 *)(puVar5 + -0x88),SUB84(in_dr0,0));
      }
      else {
        *(double *)(puVar5 + -0x88) = in_dr0;
        in_dr0 = *(double *)(puVar5 + -0x88);
      }
      if (in_FPSCR_PR == '\0') {
        bVar7 = (float)((ulonglong)in_dr0 >> 0x20) < in_fr15;
      }
      else {
        bVar7 = in_dr0 < (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar7) {
        (*(code *)PTR_Vec3_length_sq_8c02f85c)(puVar5 + -0x30,uVar2,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar5 + -0x8c) = (int)((ulonglong)in_dr0 >> 0x20);
          dVar6 = (double)(ulonglong)*(uint *)(puVar5 + -0x8c);
        }
        else {
          *(double *)(puVar5 + -0x8c) = in_dr0;
          dVar6 = in_dr0;
        }
        in_dr0 = (double)((ulonglong)dVar6 & 0xffffffff);
        if (SUB84(dVar6,0) != 0.0) {
          (*(code *)PTR_Vec3_length_sq_8c02f85c)(puVar5 + -0x30,uVar2,a6,a7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar5 + -0x90) = (int)((ulonglong)in_dr0 >> 0x20);
            in_fr15 = *(float *)(puVar5 + -0x90);
          }
          else {
            *(double *)(puVar5 + -0x90) = in_dr0;
          }
          a6 = a6_00;
          uVar4 = (**(code **)(DAT_8c02f864 + *ar5))(ar5,ar7,a6_00,a7);
          *(undefined4 *)(puVar5 + -0x94) = uVar4;
          uVar4 = *(undefined4 *)(puVar5 + -0x94);
        }
      }
    }
    a6_00 = (undefined4 *)((int)a6_00 + 1);
  }
  *(undefined4 *)(puVar5 + -0x74) = uVar4;
  (*(code *)PTR_Vec3_dtor_8c02f860)(puVar5 + -0x30,0xffffffff,a6,a7);
  return *(undefined4 *)(puVar5 + -0x74);
}



/* ret_const_1b_02f878 @ 8c02f878 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1b_02f878(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0x1b;
}



/* FUN_8c02f880 @ 8c02f880 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02fbda) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c02f880(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int iVar4;
  undefined4 unaff_r10;
  undefined4 uVar5;
  undefined4 unaff_r11;
  int iVar6;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int iVar7;
  undefined1 *puVar8;
  uint in_fr1;
  double dVar9;
  double dVar10;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar11;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar8 = auStack_4;
  }
  else {
    puVar8 = auStack_8;
  }
  *(undefined4 *)(puVar8 + -4) = unaff_r14;
  *(undefined4 *)(puVar8 + -8) = unaff_r13;
  *(undefined4 *)(puVar8 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar8 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar8 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar8 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar8 + -0x1c) = unaff_r8;
  *(undefined4 *)(puVar8 + -0x20) = in_PR;
  *(undefined4 *)(puVar8 + -0xe4) = ar4;
  *(int *)(puVar8 + -0xe0) = ar6;
  iVar6 = *(int *)(puVar8 + DAT_8c02f8fc + -0xe4);
  uVar5 = 0;
  uVar3 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c02f904)(puVar8 + DAT_8c02f900 + -0xe4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = (float)DAT_8c02f908;
  }
  iVar4 = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar8 + -0xd8) = 0;
    *(undefined4 *)(puVar8 + DAT_8c02f908._4_4_ + -0xe4) = *(undefined4 *)(puVar8 + -0xd8);
    *(undefined4 *)(puVar8 + -0xdc) = *(undefined4 *)(puVar8 + -0xd8);
    *(undefined4 *)(puVar8 + DAT_8c02f910 + -0xe4) = *(undefined4 *)(puVar8 + -0xdc);
    dVar9 = (double)CONCAT44(*(undefined4 *)(puVar8 + -0xdc),in_fr1);
    *(undefined4 *)(puVar8 + DAT_8c02f900 + -0xe4) = *(undefined4 *)(puVar8 + -0xdc);
  }
  else {
    *(ulonglong *)(puVar8 + -0xd8) = (ulonglong)in_fr1;
    *(undefined8 *)(puVar8 + DAT_8c02f908._4_4_ + -0xe4) = *(undefined8 *)(puVar8 + -0xd8);
    *(undefined8 *)(puVar8 + -0xdc) = *(undefined8 *)(puVar8 + -0xd8);
    *(undefined8 *)(puVar8 + DAT_8c02f910 + -0xe4) = *(undefined8 *)(puVar8 + -0xdc);
    dVar9 = *(double *)(puVar8 + -0xdc);
    *(double *)(puVar8 + DAT_8c02f900 + -0xe4) = dVar9;
  }
  uVar1 = (**(code **)(DAT_8c02f914 + *ar5))(ar5,ar7,ar6,uVar3);
  *(undefined4 *)(puVar8 + -0x7c) = uVar1;
  iVar7 = 0;
  while( true ) {
    uVar1 = ar7;
    uVar2 = (**(code **)(DAT_8c02fa18 + *ar5))(ar5,ar7,ar6,uVar3);
    *(undefined4 *)(puVar8 + -0x98) = uVar2;
    if (*(int *)(puVar8 + -0x98) <= iVar7) break;
    uVar1 = ar7;
    ar6 = iVar7;
    uVar2 = (**(code **)(DAT_8c02fa08 + *ar5))(ar5,ar7,iVar7,uVar3);
    *(undefined4 *)(puVar8 + -0x80) = uVar2;
    uVar1 = (**(code **)(DAT_8c02fa0c + *(int *)(*(int *)(puVar8 + -0x80) + 8)))
                      (*(int *)(puVar8 + -0x80),uVar1,ar6,uVar3);
    *(undefined4 *)(puVar8 + -0x84) = uVar1;
    if (iVar6 == *(int *)(puVar8 + -0x84)) {
      uVar1 = ar7;
      ar6 = iVar7;
      uVar2 = (**(code **)(DAT_8c02fa08 + *ar5))(ar5,ar7,iVar7,uVar3);
      *(undefined4 *)(puVar8 + -0x88) = uVar2;
      uVar1 = (**(code **)(DAT_8c02fa10 + *(int *)(*(int *)(puVar8 + -0x88) + 8)))
                        (*(int *)(puVar8 + -0x88),uVar1,ar6,uVar3);
      *(undefined4 *)(puVar8 + -0x8c) = uVar1;
      if (*(int *)(puVar8 + -0x8c) == 1) {
        uVar1 = ar7;
        ar6 = iVar7;
        uVar2 = (**(code **)(DAT_8c02fa08 + *ar5))(ar5,ar7,iVar7,uVar3);
        *(undefined4 *)(puVar8 + -0x90) = uVar2;
        uVar1 = (**(code **)(DAT_8c02fa14 + *(int *)(*(int *)(puVar8 + -0x90) + 8)))
                          (*(int *)(puVar8 + -0x90),uVar1,ar6,uVar3);
        *(undefined4 *)(puVar8 + -0x94) = uVar1;
        if (*(int *)(puVar8 + -0x94) == 0) {
          iVar4 = iVar4 + 1;
        }
      }
    }
    iVar7 = iVar7 + 1;
  }
  if (*(short *)(puVar8 + DAT_8c02fa1c + -0xe4) < iVar4) {
    if (*(int *)(*(int *)(puVar8 + -0xe4) + 0x6c) != 0) {
      *(undefined1 **)(puVar8 + -0xe8) = puVar8 + DAT_8c02fa6c + -0xe4;
      (*(code *)PTR_FUN_8c02fa70)(*(undefined4 *)(*(int *)(puVar8 + -0xe4) + 0x6c),uVar1,ar6,uVar3);
      (*(code *)PTR_Vec3_length_sq_8c02fa74)(puVar8 + DAT_8c02fa6c + -0xe4,uVar1,ar6,uVar3);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar8 + -0x9c) = (int)((ulonglong)dVar9 >> 0x20);
        in_fr15 = *(float *)(puVar8 + -0x9c);
      }
      else {
        *(double *)(puVar8 + -0x9c) = dVar9;
      }
      (*(code *)PTR_Vec3_dtor_8c02fa78)(puVar8 + DAT_8c02fa6c + -0xe4,0xffffffff,ar6,uVar3);
      uVar5 = *(undefined4 *)(*(int *)(puVar8 + -0xe4) + 0x6c);
    }
    iVar4 = 0;
    while( true ) {
      uVar1 = (**(code **)(DAT_8c02fc88 + *ar5))(ar5,ar7,ar6,uVar3);
      *(undefined4 *)(puVar8 + -0xd4) = uVar1;
      if (*(int *)(puVar8 + -0xd4) <= iVar4) break;
      uVar1 = ar7;
      iVar7 = iVar4;
      uVar2 = (**(code **)(DAT_8c02fc54 + *ar5))(ar5,ar7,iVar4,uVar3);
      *(undefined4 *)(puVar8 + -0xa0) = uVar2;
      uVar1 = (**(code **)(DAT_8c02fc58 + *(int *)(*(int *)(puVar8 + -0xa0) + 8)))
                        (*(int *)(puVar8 + -0xa0),uVar1,iVar7,uVar3);
      *(undefined4 *)(puVar8 + -0xa4) = uVar1;
      uVar1 = ar7;
      ar6 = iVar4;
      uVar2 = (**(code **)(DAT_8c02fc54 + *ar5))(ar5,ar7,iVar4,uVar3);
      *(undefined4 *)(puVar8 + -0xa8) = uVar2;
      uVar1 = (**(code **)(DAT_8c02fc58 + *(int *)(*(int *)(puVar8 + -0xa8) + 8)))
                        (*(int *)(puVar8 + -0xa8),uVar1,ar6,uVar3);
      *(undefined4 *)(puVar8 + -0xac) = uVar1;
      if (iVar6 == *(int *)(puVar8 + -0xac)) {
        uVar1 = ar7;
        ar6 = iVar4;
        uVar2 = (**(code **)(DAT_8c02fc54 + *ar5))(ar5,ar7,iVar4,uVar3);
        *(undefined4 *)(puVar8 + -0xb0) = uVar2;
        uVar1 = (**(code **)(DAT_8c02fc5c + *(int *)(*(int *)(puVar8 + -0xb0) + 8)))
                          (*(int *)(puVar8 + -0xb0),uVar1,ar6,uVar3);
        *(undefined4 *)(puVar8 + -0xb4) = uVar1;
        if (*(int *)(puVar8 + -0xb4) == 1) {
          uVar1 = ar7;
          ar6 = iVar4;
          uVar2 = (**(code **)(DAT_8c02fc54 + *ar5))(ar5,ar7,iVar4,uVar3);
          *(undefined4 *)(puVar8 + -0xb8) = uVar2;
          uVar2 = (**(code **)(DAT_8c02fc60 + *(int *)(*(int *)(puVar8 + -0xb8) + 8)))
                            (*(int *)(puVar8 + -0xb8),uVar1,ar6,uVar3);
          *(undefined4 *)(puVar8 + -0xbc) = uVar2;
          if (*(int *)(puVar8 + -0xbc) == 0) {
            *(undefined1 **)(puVar8 + -0xe8) = puVar8 + DAT_8c02fc64 + -0xe4;
            (*(code *)PTR_FUN_8c02fc68)(**(undefined4 **)(puVar8 + -0xe0),uVar1,ar6,uVar3);
            uVar1 = ar7;
            ar6 = iVar4;
            uVar2 = (**(code **)(DAT_8c02fc54 + *ar5))(ar5,ar7,iVar4,uVar3);
            *(undefined4 *)(puVar8 + -0xc0) = uVar2;
            *(undefined1 **)(puVar8 + -0xe8) = puVar8 + DAT_8c02fc6c + -0xe4;
            (*(code *)PTR_FUN_8c02fc68)(*(undefined4 *)(puVar8 + -0xc0),uVar1,ar6,uVar3);
            *(undefined1 **)(puVar8 + -0xe8) = puVar8 + -0x70;
            (*(code *)PTR_Vec3_sub_8c02fc78)
                      (puVar8 + DAT_8c02fc74 + -0xe8,puVar8 + DAT_8c02fc70 + -0xe8,ar6,uVar3);
            (*(code *)PTR_Vec3_assign_8c02fc7c)
                      (puVar8 + DAT_8c02fc5c + -0xe4,puVar8 + -0x70,ar6,uVar3);
            (*(code *)PTR_Vec3_dtor_8c02fc80)(puVar8 + -0x70,0xffffffff,ar6,uVar3);
            (*(code *)PTR_Vec3_dtor_8c02fc80)(puVar8 + DAT_8c02fc6c + -0xe4,0xffffffff,ar6,uVar3);
            uVar1 = 0xffffffff;
            (*(code *)PTR_Vec3_dtor_8c02fc80)(puVar8 + DAT_8c02fc64 + -0xe4,0xffffffff,ar6,uVar3);
            (*(code *)PTR_Vec3_length_sq_8c02fc84)(puVar8 + DAT_8c02fc5c + -0xe4,uVar1,ar6,uVar3);
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar8 + -0xc4) = (int)((ulonglong)dVar9 >> 0x20);
              dVar9 = (double)CONCAT44(*(undefined4 *)(puVar8 + -0xc4),SUB84(dVar9,0));
            }
            else {
              *(double *)(puVar8 + -0xc4) = dVar9;
              dVar9 = *(double *)(puVar8 + -0xc4);
            }
            if (in_FPSCR_PR == '\0') {
              bVar11 = (float)((ulonglong)dVar9 >> 0x20) < in_fr15;
            }
            else {
              bVar11 = dVar9 < (double)CONCAT44(in_fr14,in_fr15);
            }
            if (bVar11) {
              (*(code *)PTR_Vec3_length_sq_8c02fc84)(puVar8 + DAT_8c02fc5c + -0xe4,uVar1,ar6,uVar3);
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar8 + -200) = (int)((ulonglong)dVar9 >> 0x20);
                dVar10 = (double)(ulonglong)*(uint *)(puVar8 + -200);
              }
              else {
                *(double *)(puVar8 + -200) = dVar9;
                dVar10 = dVar9;
              }
              dVar9 = (double)((ulonglong)dVar10 & 0xffffffff);
              if (SUB84(dVar10,0) != 0.0) {
                (*(code *)PTR_Vec3_length_sq_8c02fc84)
                          (puVar8 + DAT_8c02fc5c + -0xe4,uVar1,ar6,uVar3);
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(puVar8 + -0xcc) = (int)((ulonglong)dVar9 >> 0x20);
                  in_fr15 = *(float *)(puVar8 + -0xcc);
                }
                else {
                  *(double *)(puVar8 + -0xcc) = dVar9;
                }
                ar6 = iVar4;
                uVar5 = (**(code **)(DAT_8c02fc54 + *ar5))(ar5,ar7,iVar4,uVar3);
                *(undefined4 *)(puVar8 + -0xd0) = uVar5;
                uVar5 = *(undefined4 *)(puVar8 + -0xd0);
              }
            }
          }
        }
      }
      iVar4 = iVar4 + 1;
    }
    *(undefined4 *)(puVar8 + -0x78) = uVar5;
    (*(code *)PTR_Vec3_dtor_8c02fc80)(puVar8 + DAT_8c02fc5c + -0xe4,0xffffffff,ar6,uVar3);
    uVar3 = *(undefined4 *)(puVar8 + -0x78);
  }
  else {
    *(undefined4 *)(puVar8 + -0x74) = 0;
    (*(code *)PTR_Vec3_dtor_8c02fa20)(puVar8 + DAT_8c02fa10 + -0xe4,0xffffffff,ar6,uVar3);
    uVar3 = *(undefined4 *)(puVar8 + -0x74);
  }
  return uVar3;
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
  undefined4 *a5;
  float *a6;
  float fVar2;
  float fVar3;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_3c;
  float fStack_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  
  a5 = ar5;
  uVar1 = (*(code *)PTR_FUN_8c02fdb0)(*(undefined4 *)(DAT_8c02fdac + ar5[6]),ar5,ar6,ar7);
  if ((ushort)uVar1 < 5) {
    (*(code *)PTR_FUN_8c02fdb4)(*ar5,a5,ar6,ar7);
    (*(code *)PTR_Vec3_ctor_copy_8c02fdb8)(auStack_24,auStack_34,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c02fdbc)(auStack_34,0xffffffff,ar6,ar7);
    a6 = &fStack_3c;
    (*(code *)PTR_FUN_8c02fdc0)(0,auStack_14,a6,ar7);
    fVar2 = DAT_8c02fdc4;
    fVar3 = DAT_8c02fdc8;
    if (in_FPSCR_SZ == '\0') {
      fVar2 = fStack_3c;
      fVar3 = DAT_8c02fdc4;
    }
    if (in_FPSCR_PR == '\0' && fVar3 < fVar2) {
      fVar2 = DAT_8c02fdc8;
      fVar3 = DAT_8c02fdcc;
      if (in_FPSCR_SZ == '\0') {
        fVar2 = fStack_3c;
        fVar3 = DAT_8c02fdc8;
      }
      if (in_FPSCR_PR == '\0' && fVar2 < fVar3) {
        fVar2 = DAT_8c02fdcc;
        fVar3 = DAT_8c02fdd0;
        if (in_FPSCR_SZ == '\0') {
          fVar2 = fStack_38;
          fVar3 = DAT_8c02fdcc;
        }
        if (in_FPSCR_PR == '\0' && fVar3 < fVar2) {
          fVar2 = DAT_8c02fdd0;
          fVar3 = DAT_8c02fdd4;
          if (in_FPSCR_SZ == '\0') {
            fVar2 = fStack_38;
            fVar3 = DAT_8c02fdd0;
          }
          if (in_FPSCR_PR == '\0' && fVar2 < fVar3) {
            (*(code *)PTR_Vec3_dtor_8c02fdbc)(auStack_24,0xffffffff,a6,ar7);
            return 1;
          }
        }
      }
    }
    (*(code *)PTR_Vec3_dtor_8c02fdbc)(auStack_24,0xffffffff,a6,ar7);
  }
  return (uint)(*(char *)((int)DAT_8c02fdd4 + ar4) == '\x01');
}



/* FUN_8c02fdd8 @ 8c02fdd8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c02fe2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

double * FUN_8c02fdd8(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  undefined1 *a5;
  float *a6;
  float *a7;
  float fVar2;
  float fVar4;
  undefined4 in_fr3;
  undefined4 uVar5;
  double dVar6;
  bool bVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_10 [8];
  double dVar3;
  
  a7 = &fStack_18;
  a6 = &fStack_14;
  a5 = auStack_10;
  (**(code **)(DAT_8c02fea8 + *ar5))(ar5,a5,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(fStack_18,in_fr3);
    dVar3 = (double)CONCAT44(DAT_8c02feac,fStack_14);
  }
  else {
    dVar6 = (double)CONCAT44(fStack_14,fStack_18);
    dVar3 = (double)CONCAT44(DAT_8c02feb0,DAT_8c02feac);
  }
  if (in_FPSCR_PR == '\0') {
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
  if (in_FPSCR_SZ != '\0') {
    fStack_18 = SUB84(dVar6,0);
    fStack_14 = fVar2;
  }
  (**(code **)(DAT_8c02feb0 + *ar5))(ar5,a5,a6,a7);
  uVar5 = SUB84(dVar6,0);
  fVar2 = (float)((ulonglong)dVar3 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)(ulonglong)*DAT_8c02feb4;
    fStack_1c = fVar2;
  }
  else {
    fStack_1c = SUB84(dVar3,0);
    fStack_18 = fVar2;
  }
  pdVar1 = (double *)0x8;
  fVar2 = fStack_1c;
  fVar4 = fStack_18;
  if (in_FPSCR_SZ == '\0') {
    fVar2 = SUB84(dVar3,0);
    fVar4 = fStack_1c;
  }
  if (fVar2 != fVar4) {
    (**(code **)(DAT_8c02feb0 + *ar5))(ar5,a5,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(fStack_18,uVar5);
      dVar3 = (double)CONCAT44(DAT_8c02feb8,fVar4);
    }
    else {
      dVar6 = (double)CONCAT44(fStack_14,fStack_18);
      dVar3 = (double)CONCAT44(DAT_8c02febc,DAT_8c02feb8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) *
                               (SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20)),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 * (dVar3 / dVar3);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c02febc,fStack_14);
    }
    else {
      dVar3 = (double)CONCAT44(_ret_const_0_02fec0,DAT_8c02febc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - fVar2,SUB84(dVar6,0));
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
      dVar6 = dVar6 - dVar3 / dVar3;
    }
    pdVar1 = (double *)(ar4 + 0x2c);
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)pdVar1,fVar2);
    }
    else {
      dVar3 = *pdVar1;
    }
    if (in_FPSCR_PR == '\0') {
      bVar7 = (float)((ulonglong)dVar3 >> 0x20) < (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar7 = dVar3 < dVar6;
    }
    if (!bVar7) {
      (**(code **)(DAT_8c02feb0 + *ar5))(ar5,a5,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(fStack_18,SUB84(dVar6,0));
        dVar3 = (double)CONCAT44(DAT_8c02feb8,(int)((ulonglong)dVar3 >> 0x20));
      }
      else {
        dVar6 = (double)CONCAT44(fStack_14,fStack_18);
        dVar3 = (double)CONCAT44(DAT_8c02febc,DAT_8c02feb8);
      }
      if (in_FPSCR_PR == '\0') {
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
      if (in_FPSCR_SZ == '\0') {
        fVar2 = fStack_14;
      }
      pdVar1 = (double *)&DAT_8c02febc;
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(DAT_8c02febc,fVar2);
      }
      else {
        dVar3 = (double)CONCAT44(_ret_const_0_02fec0,DAT_8c02febc);
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) -
                                 SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar3 / dVar3;
      }
      if (in_FPSCR_SZ == '\0') {
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
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c02ffcc;
    a5 = 0;
    (*(code *)PTR_Class_129c70_m0_02f1b8_8c02ffd0)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c02ffd4)(ar4,a5,ar6,ar7);
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

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c02ffec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c030074)(PTR_DAT_8c030070,ar5,ar6,ar7);
  puVar4 = PTR_Vec3_dtor_8c03007c;
  uVar2 = DAT_8c030078;
  (*(code *)PTR_global_list_push_8c030080)(uVar1,PTR_Vec3_dtor_8c03007c,DAT_8c030078,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c030074)(PTR_DAT_8c030084,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c03007c;
  uVar2 = DAT_8c030088;
  (*(code *)PTR_global_list_push_8c030080)(uVar1,PTR_Vec3_dtor_8c03007c,DAT_8c030088,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c030074)(PTR_DAT_8c03008c,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c03007c;
  uVar2 = DAT_8c030090;
  (*(code *)PTR_global_list_push_8c030080)(uVar1,PTR_Vec3_dtor_8c03007c,DAT_8c030090,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c030074)(PTR_DAT_8c030094,puVar4,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c030080)(uVar2,PTR_Vec3_dtor_8c03007c,DAT_8c030098,ar7);
  puVar3 = DAT_8c0300a0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c03009c = *(undefined4 *)DAT_8c0300a0;
  }
  else {
    *(undefined8 *)PTR_DAT_8c03009c = *DAT_8c0300a0;
  }
  return puVar3;
}


