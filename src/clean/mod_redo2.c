
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



/* FUN_8c0140b4 @ 8c0140b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0140b4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0140cc(1,ar5,&stack0xfffffff0,ar7,ar4);
  return uVar1;
}



/* FUN_8c0140cc @ 8c0140cc callers=0 callees=0 */

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



/* FUN_8c015b54 @ 8c015b54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c015b54(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = deref_u32(ar5,ar5,ar6,ar7);
  uVar1 = FUN_8c21ba62(*ar4,uVar1,ar6,ar7,ar4);
  return uVar1;
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



/* FUN_8c016fa4 @ 8c016fa4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c016fa4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c015ad4(ar4 + 0x40,&DAT_8c12f1b8,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x2c) = 0;
  return 0;
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



/* FUN_8c017804 @ 8c017804 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c017804(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c015ad4(ar4 + 0x90,&DAT_8c12ca68,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x2c) = 1;
  return 1;
}



/* FUN_8c0191c8 @ 8c0191c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0191c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c23617c(ar4,ar5,ar6,ar7,ar4);
  return uVar1;
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



/* Class_129a24_m3_01a230 @ 8c01a230 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129a24_m3_01a230(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c23a8a4(ar4 + 4,ar5,ar6,ar7,ar4);
  return uVar1;
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



/* Vec3_length_sq @ 8c022e78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Vec3_length_sq(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  FUN_8c258030(ar4,ar5,ar6,ar7,in_stack_fffffff4);
  return 0;
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



/* FUN_8c023fdc @ 8c023fdc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c023fdc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c256fec(ar4,ar5,ar6,ar7,ar4);
  return uVar1;
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



/* FUN_8c026d7c @ 8c026d7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c026d7c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7,ar4);
  return 4;
}



/* FUN_8c027234 @ 8c027234 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c027234(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c027264(ar4 + 0xb0,ar5,ar6,ar7,ar4);
  return uVar1;
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



/* FUN_8c0293d4 @ 8c0293d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0293d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0293f8(ar4 + 0xf8,1,ar6,ar7,ar4);
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



/* s_STATUS_FORMAT_030306 @ 8c030304 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_STATUS_FORMAT_030306(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [36];
  
  puVar5 = auStack_28;
  puVar3 = &DAT_8c13292c;
  iVar2 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar5[1] = *puVar4;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar1 = CONCAT13(DAT_8c13294f,CONCAT12(DAT_8c13294e,CONCAT11(DAT_8c13294d,DAT_8c13294c)));
  strcpy(auStack_28,ar4 + 0x2c8,ar6,ar7,uVar1);
  uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),(char)uVar1 + *(char *)(ar4 + 0x728));
  FUN_8c01437c(auStack_28,&stack0xffffffd4,ar6,ar7);
  strcpy(ar4,auStack_28,ar6,ar7,uVar1);
  *(undefined4 *)(ar4 + 0x2ec) = 4;
  strcpy(ar4 + 0x20,s_STATUS_FORMAT_8c132a14,ar6,ar7,uVar1);
  uVar1 = strcpy(ar4 + 0x40,&DAT_8c132a22,ar6,ar7,uVar1);
  return uVar1;
}



/* FUN_8c0303b8 @ 8c0303b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0303b8(int ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_34 [36];
  
  puVar7 = auStack_34;
  puVar5 = &DAT_8c132950;
  iVar4 = 0x10;
  do {
    puVar6 = puVar5 + 1;
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar7[1] = *puVar6;
    puVar7 = puVar7 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar8 = CONCAT13(DAT_8c132973,CONCAT12(DAT_8c132972,CONCAT11(DAT_8c132971,DAT_8c132970)));
  iVar4 = ar6;
  uVar3 = ar7;
  if (0 < ar6) {
    iVar4 = 0;
    FUN_8c030550(ar4,ar5,0,ar7);
  }
  if ((((*(int *)(ar4 + 0x2e8) == -1) && (iVar1 = FUN_8c030538(ar4,ar5,iVar4,uVar3), iVar1 == 0)) &&
      (*(int *)(ar4 + 0x770) == 0)) &&
     ((*(int *)(ar4 + 0x778) == 0 && (*(int *)(ar4 + 0x60) <= ar6)))) {
    uVar2 = s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,uVar3);
    *(undefined4 *)(ar4 + 0x2ec) = uVar2;
    *(undefined4 *)(ar4 + 0x72c) = ar5;
    *(undefined4 *)(ar4 + 0x770) = 1;
    *(int *)(ar4 + 0x60) = ar6;
    strcpy(auStack_34,ar4 + 0x2c8,iVar4,uVar3,uVar8);
    uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),(char)uVar8 + *(char *)(ar4 + 0x728));
    FUN_8c01437c(auStack_34,&stack0xffffffb4,iVar4,uVar3);
    strcpy(ar4,auStack_34,iVar4,uVar3,uVar8);
    strcpy(ar4 + 0x20,ar7,iVar4,uVar3,uVar8);
    strcpy(ar4 + 0x40,s0,iVar4,uVar3,uVar8);
    uVar3 = s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,uVar3);
    *(undefined4 *)(ar4 + 0x2ec) = uVar3;
    *(undefined4 *)(*(int *)(ar4 + 0x72c) * 0x14 + ar4 + *(int *)(ar4 + 0x60) * 4 + 0x2f0) = 1;
    return 1;
  }
  return 0;
}



/* FUN_8c030568 @ 8c030568 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c030568(int ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 ar7_00;
  undefined1 auStack_34 [36];
  
  puVar7 = auStack_34;
  puVar5 = &DAT_8c132974;
  iVar4 = 0x10;
  do {
    puVar6 = puVar5 + 1;
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar7[1] = *puVar6;
    puVar7 = puVar7 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar3 = CONCAT13(DAT_8c132997,CONCAT12(DAT_8c132996,CONCAT11(DAT_8c132995,DAT_8c132994)));
  if ((((*(int *)(ar4 + 0x2e8) == -1) &&
       (iVar4 = ar6, ar7_00 = ar7, iVar1 = FUN_8c030538(ar4,ar5,ar6,ar7), iVar1 == 0)) &&
      (*(int *)(ar4 + 0x770) == 0)) &&
     ((*(int *)(ar4 + 0x778) == 0 && (*(int *)(ar4 + 0x60) <= ar6)))) {
    uVar2 = s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,ar7_00);
    *(undefined4 *)(ar4 + 0x2ec) = uVar2;
    *(undefined4 *)(ar4 + 0x72c) = ar5;
    *(undefined4 *)(ar4 + 0x770) = 2;
    *(int *)(ar4 + 0x60) = ar6;
    strcpy(auStack_34,ar4 + 0x2c8,iVar4,ar7_00,uVar3);
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),(char)uVar3 + *(char *)(ar4 + 0x728));
    FUN_8c01437c(auStack_34,&stack0xffffffb4,iVar4,ar7_00);
    strcpy(ar4,auStack_34,iVar4,ar7_00,uVar3);
    strcpy(ar4 + 0x20,ar7,iVar4,ar7_00,uVar3);
    strcpy(ar4 + 0x40,s0,iVar4,ar7_00,uVar3);
    uVar3 = s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,ar7_00);
    *(undefined4 *)(ar4 + 0x2ec) = uVar3;
    *(undefined4 *)(*(int *)(ar4 + 0x72c) * 0x14 + ar4 + *(int *)(ar4 + 0x60) * 4 + 0x2f0) = 1;
    return 1;
  }
  return 0;
}



/* FUN_8c03087c @ 8c03087c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03087c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 ar7_00;
  char cStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [36];
  
  puVar5 = auStack_2c;
  puVar3 = &DAT_8c1329bc;
  iVar2 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar5[1] = *puVar4;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  cStack_40 = DAT_8c1329dc;
  uStack_3f = DAT_8c1329dd;
  uStack_3e = DAT_8c1329de;
  uStack_3d = DAT_8c1329df;
  if (((*(int *)(ar4 + 0x2e8) == -1) && (*(int *)(ar4 + 0x770) == 0)) &&
     (*(int *)(ar4 + 0x778) == 0)) {
    uVar1 = ar6;
    ar7_00 = ar7;
    uStack_30 = s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,ar6,ar7);
    *(undefined4 *)(ar4 + 0x2ec) = uStack_30;
    *(undefined4 *)(ar4 + 0x72c) = ar5;
    *(undefined4 *)(ar4 + 0x770) = 2;
    *(undefined4 *)(ar4 + 0x60) = ar6;
    strcpy(auStack_2c,ar4 + 0x2c8,uVar1,ar7_00,ar5);
    cStack_40 = cStack_40 + *(char *)(ar4 + 0x728);
    FUN_8c01437c(auStack_2c,&cStack_40,uVar1,ar7_00);
    strcpy(ar4,auStack_2c,uVar1,ar7_00,ar5);
    strcpy(ar4 + 0x20,ar7,uVar1,ar7_00,ar5);
    strcpy(ar4 + 0x40,s0,uVar1,ar7_00,ar5);
    iStack_38 = *(int *)(ar4 + 0x72c);
    iStack_3c = *(int *)(ar4 + 0x60);
    *(undefined4 *)(iStack_38 * 0x14 + ar4 + iStack_3c * 4 + 0x2f0) = 1;
    uVar1 = s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,uVar1,ar7_00);
    *(undefined4 *)(ar4 + 0x2ec) = uVar1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* s_JUNGLE_0309ca @ 8c0309c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_JUNGLE_0309ca(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_2b [39];
  
  puVar5 = auStack_2b;
  puVar3 = &DAT_8c1329e0;
  iVar2 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar5[1] = *puVar4;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar1 = CONCAT13(DAT_8c132a02,CONCAT12(DAT_8c132a01,CONCAT11(DAT_8c132a00,(char)ar5)));
  if (((*(int *)(ar4 + 0x2e8) == -1) && (*(int *)(ar4 + 0x770) == 0)) &&
     (*(int *)(ar4 + 0x778) == 0)) {
    *(undefined4 *)(ar4 + 0x60) = 0;
    if ((char)ar5 == '\x01') {
      strcpy(ar4,s_JUNGLE_8c132a24,ar6,ar7,uVar1);
    }
    else {
      strcpy(auStack_2b,ar4 + 0x2c8,ar6,ar7,uVar1);
      uVar1 = CONCAT22((short)((uint)uVar1 >> 0x10),
                       CONCAT11((char)((uint)uVar1 >> 8) + *(char *)(ar4 + 0x728),(char)uVar1));
      FUN_8c01437c(auStack_2b,&stack0xffffffd1,ar6,ar7);
      strcpy(ar4,auStack_2b,ar6,ar7,uVar1);
    }
    strcpy(ar4 + 0x20,&DAT_8c132a2b,ar6,ar7,uVar1);
    strcpy(ar4 + 0x40,s_start_8c132a30,ar6,ar7,uVar1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Class_129cbc_m0_0312f4 @ 8c0312f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_129cbc_m0_0312f4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129cbc;
    Vec3_dtor(ar4 + 0x80,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x7b,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x76,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 0x6c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x5a,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x56,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x53,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x4f,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_033978(ar4 + 0x2c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x24,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x20,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x1b,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x15,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 5,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 1,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c032160 @ 8c032160 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c032160(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_PR;
  
  *(undefined4 *)(ar4 + 300) = 0;
  *(undefined4 *)(ar4 + 0x40) = 5;
  *(undefined4 *)(ar4 + 0x134) = 0;
  FUN_8c031b58(ar4 + 0xb0,ar5,ar6,ar7);
  FUN_8c032204(ar4 + 0xb0,ar5,ar6,ar7,in_PR);
  ar5_00 = 1;
  FUN_8c0321fc(ar4 + 0xb0,1,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x138) = 0;
  FUN_8c030eb8(ar4 + 0x1fc,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x214) = 1;
  *(undefined4 *)(ar4 + 0x218) = 0;
  *(undefined4 *)(ar4 + 0x1e8) = 0;
  return 0x1e8;
}



/* FUN_8c032484 @ 8c032484 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c032484(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c27d590,Vec3_dtor,0x10,0x96,in_PR);
  return uVar1;
}



/* free_if_nonnull_wrap_033978 @ 8c033978 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 *
free_if_nonnull_wrap_033978(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = &DAT_8c129cf8, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* free_if_nonnull_wrap_034d08 @ 8c034d08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_034d08(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c035e5c @ 8c035e5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035e5c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c02cb7c(*(int *)(ar4 + 8) + 0xa8,1,ar6,ar7,ar4);
  return 4;
}



/* FUN_8c035f58 @ 8c035f58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035f58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c028ec8(*(undefined4 *)(ar4 + 0x10),5,ar6,ar7);
  FUN_8c02cb6c(*(int *)(ar4 + 8) + 0xa8,1,ar6,ar7,in_PR);
  FUN_8c02cb8c(*(int *)(ar4 + 8) + 0xa8,0xd,ar6,ar7,in_PR);
  return 4;
}



/* FUN_8c035fa0 @ 8c035fa0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035fa0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c028ec8(*(undefined4 *)(ar4 + 0x10),3,ar6,ar7);
  FUN_8c02cb6c(*(int *)(ar4 + 8) + 0xa8,1,ar6,ar7,in_PR);
  FUN_8c02cb8c(*(int *)(ar4 + 8) + 0xa8,0x12,ar6,ar7,in_PR);
  return 4;
}



/* FUN_8c035fe8 @ 8c035fe8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035fe8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c028ec8(*(undefined4 *)(ar4 + 0x10),4,ar6,ar7);
  FUN_8c02cb6c(*(int *)(ar4 + 8) + 0xa8,1,ar6,ar7,in_PR);
  FUN_8c02cb8c(*(int *)(ar4 + 8) + 0xa8,0x13,ar6,ar7,in_PR);
  return 4;
}



/* CAnimal_m0_0361d8 @ 8c0361d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int CAnimal_m0_0361d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c129ea0;
    Class_129938_m0_017084(ar4 + 0x1088,0xffffffff,ar6,ar7);
    Class_12a03c_m0_03c32c(ar4 + 0xd2c,0xffffffff,ar6,ar7);
    Class_12a078_m0_05d804(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* s_GRAPHICS_FROGMANLINE_0384fa @ 8c0384f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_FROGMANLINE_0384fa(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  int ar6_01;
  undefined4 ar7_00;
  
  ar7_00 = 5;
  ar6_00 = 1;
  uVar1 = 6;
  FUN_8c0254d0(ar4,6,1,5,0,ar5,0x8c280050,0x8c280180,PTR_s_GRAPHICS_FROGMANLINE_8c1340e0);
  *(undefined **)(ar4 + 8) = &DAT_8c129d04;
  FUN_8c016fcc(ar4 + 0x490,uVar1,ar6_00,ar7_00);
  FUN_8c02ff6c(ar4 + 0x528,uVar1,ar6_00,ar7_00);
  FUN_8c030fa0(ar4 + 0x5c4,uVar1,ar6_00,ar7_00);
  FUN_8c014334(ar4 + 0xc,uVar1,ar6_00,ar7_00,s_FrogManEgg_8c135e5e);
  *(undefined1 *)(ar4 + 0x524) = 0xff;
  ar6_01 = ar4 + 0x490;
  uVar1 = *(undefined4 *)(*(int *)(ar4 + 0x328) + 0xb4);
  FUN_8c0f532c(ar4,uVar1,ar6_01,ar7_00);
  FUN_8c027224(ar4 + 0x5c4,uVar1,ar6_01,ar7_00,ar5);
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x28))((int *)(ar4 + 0xa8),ar4 + 0x30,ar6_01,ar7_00);
  *(undefined4 *)(ar4 + 0x330) = 0;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x10;
  *(int *)(ar4 + 0x308) = ar4 + 0x528;
  *(int *)(ar4 + 0x30c) = ar4 + 0x5c4;
  return ar4;
}



/* CAnimal_m0_038648 @ 8c038648 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int CAnimal_m0_038648(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c129d04;
    Class_129cbc_m0_0312f4(ar4 + 0x5c4,0xffffffff,ar6,ar7);
    Class_129c24_m0_02ff90(ar4 + 0x528,0xffffffff,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c038c54 @ 8c038c54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c038c54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  noop_038c8c(ar4,ar5,ar6,ar7,in_PR);
  uVar1 = 0;
  if (*(int *)(ar4 + 0x330) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x5c))
                      (*(int *)(ar4 + 0x330),ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c03a298 @ 8c03a298 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a298(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c27ed10,free_if_nonnull_wrap_03a3dc,4,0x65,in_PR);
  return uVar1;
}



/* FUN_8c03a2bc @ 8c03a2bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a2bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c27eb70,free_if_nonnull_wrap_0247b0,4,0x65,in_PR);
  return uVar1;
}



/* FUN_8c03a2e0 @ 8c03a2e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a2e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c27e9d0,free_if_nonnull_wrap_03a3dc,4,0x65,in_PR);
  return uVar1;
}



/* FUN_8c03a304 @ 8c03a304 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a304(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c27e830,free_if_nonnull_wrap_0247b0,4,0x65,in_PR);
  return uVar1;
}



/* FUN_8c03a328 @ 8c03a328 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a328(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c27e7c8,free_if_nonnull_wrap_03a3dc,4,0x17,in_PR);
  return uVar1;
}



/* FUN_8c03a34c @ 8c03a34c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a34c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c27e760,free_if_nonnull_wrap_0247b0,4,0x17,in_PR);
  return uVar1;
}



/* FUN_8c03a370 @ 8c03a370 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a370(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c27e6fc,free_if_nonnull_wrap_03a3dc,4,0x16,in_PR);
  return uVar1;
}



/* FUN_8c03a394 @ 8c03a394 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a394(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c27e698,free_if_nonnull_wrap_0247b0,4,0x16,in_PR);
  return uVar1;
}



/* FUN_8c03a3b8 @ 8c03a3b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a3b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c27e62c,free_if_nonnull_wrap_03a3dc,4,0x18,in_PR);
  return uVar1;
}



/* free_if_nonnull_wrap_03a3dc @ 8c03a3dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_03a3dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c03a40c @ 8c03a40c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a40c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c27e5c0,free_if_nonnull_wrap_0247b0,4,0x18,in_PR);
  return uVar1;
}



/* FUN_8c03a430 @ 8c03a430 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a430(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(&DAT_8c27e594,free_if_nonnull_wrap_03a454,0x10,2,in_PR);
  return uVar1;
}



/* free_if_nonnull_wrap_03a454 @ 8c03a454 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_03a454(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c03a484 @ 8c03a484 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a484(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c27dfd4,FUN_8c03a4ac,0x124,5,in_PR);
  return uVar1;
}



/* FUN_8c03a4ac @ 8c03a4ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c03a4ac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c024758(ar4 + 0xf8,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xd8,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0247b0(ar4 + 0xb0,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x98,0xffffffff,ar6,ar7);
    vec_delete_array(ar4 + 0x88,free_if_nonnull_wrap_0153e4,8,2,ain0);
    uVar2 = 2;
    uVar1 = 8;
    vec_delete_array(ar4 + 0x78,free_if_nonnull_wrap_0153e4,8,2,ain0);
    free_if_nonnull_wrap_016bfc(ar4 + 0x74,0xffffffff,uVar1,uVar2);
    vec_delete_array(ar4 + 0x70,free_if_nonnull_wrap_016bfc,4,1,ain0);
    vec_delete_array(ar4 + 0x48,free_if_nonnull_wrap_0247e0,0x14,2,ain0);
    uVar2 = 2;
    uVar1 = 0x14;
    ar5_00 = free_if_nonnull_wrap_0247e0;
    vec_delete_array(ar4 + 0x20,free_if_nonnull_wrap_0247e0,0x14,2,ain0);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,uVar1,uVar2,ain0);
    }
  }
  return ar4;
}



/* Class_12a03c_m0_03c32c @ 8c03c32c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12a03c_m0_03c32c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12a03c;
    Vec3_dtor(ar4 + 0xd3,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xc2,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xb5,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0xb2,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xaa,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x9a,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x96,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x92,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_129cbc_m0_0312f4(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* s_FROGMANLINE_05d646 @ 8c05d644 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * s_FROGMANLINE_05d646(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  FUN_8c02f064(ar4,ar5,ar6,ar7);
  *ar4 = &DAT_8c12a078;
  FUN_8c0300a4(ar4 + 0x27,ar5,ar6,ar7);
  FUN_8c02eac0(ar4 + 0x207,ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 0x20) = 0;
  ar4[0xe1] = 0xffffffff;
  ar4[0x214] = 0;
  ar4[0x215] = 0;
  *(undefined1 *)(ar4 + 0x21e) = 0;
  *(undefined1 *)((int)ar4 + 0x879) = 0;
  ar4[0x21b] = 0;
  *(undefined1 *)(ar4 + 0x21c) = 0;
  *(undefined1 *)((int)ar4 + 0x871) = 0;
  ar4[0x216] = 0;
  *(undefined1 *)(ar4 + 0x217) = 0;
  ar4[0x219] = 0;
  ar4[0x21a] = 0;
  ar4[0x21f] = 0;
  ar4[0x220] = 0;
  strcpy(ar4 + 0xd9,s_FROGMANLINE_8c136998,ar6,ar7,in_stack_fffffff4);
  strcpy(ar4 + 0x27,s_FROGMANLINE1_8c1369a4,ar6,ar7,in_stack_fffffff4);
  strcpy(ar4 + 0x2f,s_STATUS_FORMAT_8c1369b1,ar6,ar7,in_stack_fffffff4);
  strcpy(ar4 + 0x37,&DAT_8c1369bf,ar6,ar7,in_stack_fffffff4);
  ar4[0xe2] = 4;
  FUN_8c05d7f8(ar4 + 0x27,1,ar6,ar7);
  *(undefined1 *)((int)ar4 + 0x9a) = 2;
  ar4[0x222] = 1;
  ar4[0x221] = 1;
  ar4[0x218] = 0;
  ar4[0x21d] = 0x1b;
  ar4[0x223] = 0;
  ar4[0x224] = 0;
  ar4[0x225] = 0;
  ar4[0x226] = 0;
  return ar4;
}



/* Class_12a078_m0_05d804 @ 8c05d804 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12a078_m0_05d804(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12a078;
    free_if_nonnull_wrap_02eaec(ar4 + 0x207,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_129c70_m0_02f1b8(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* s_REACTION_CATCH_05f4a2 @ 8c05f4a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_REACTION_CATCH_05f4a2(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  char *ar7_00;
  undefined1 auStack_18 [20];
  
  if (*(int *)(ar4 + 0x6c) != 0) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  Vec3_ctor_copy(auStack_18,ar5 + 0x10,ar6,ar7);
  Vec3_assign_wrap_05f640(ar4,auStack_18,ar6,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  *(undefined4 *)(ar4 + 0x94) = 0x15;
  if (*(int *)(ar4 + 900) != -1) {
    *(undefined4 *)(ar4 + 0x94) = *(undefined4 *)(ar4 + 0x154);
    iVar1 = FUN_8c0fa2b8(0x8c35468c,uVar2,ar6,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x94) = 0;
      FUN_8c030870(ar4 + 0x9c,3,ar6,ar7);
      *(undefined4 *)(ar4 + 4) = 2;
      *(undefined4 *)(ar4 + 0x40) = 0x10;
      *(undefined4 *)(ar4 + 8) = 0x19;
      *(undefined1 *)(ar4 + 0x91) = 1;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined1 *)(ar4 + 0x80) = 1;
      *(undefined4 *)(ar4 + 900) = 0xffffffff;
    }
  }
  iVar1 = *(int *)(ar4 + 900);
  if (iVar1 == -1) {
    FUN_8c030870(ar4 + 0x9c,0,ar6,ar7);
    ar7_00 = s_REACTION_CATCH_8c136a22;
    uVar2 = 0;
    FUN_8c030568(ar4 + 0x9c,0x25,0,s_REACTION_CATCH_8c136a22,&DAT_8c1369bf);
    strcpy(ar4 + 0xbc,s_REACTION_CATCH_8c136a22,uVar2,ar7_00,ar5);
    strcpy(ar4 + 0xdc,&DAT_8c1369bf,uVar2,ar7_00,ar5);
    *(undefined4 *)(ar4 + 0xfc) = 0;
    iVar1 = ar4 + 0x9c;
    uVar2 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),iVar1,ar7_00);
    *(undefined4 *)(ar4 + 900) = uVar2;
    *(undefined4 *)(ar4 + 0x14c) = 0;
    iVar1 = FUN_8c030870(ar4 + 0x9c,2,iVar1,ar7_00);
  }
  return iVar1;
}



/* FUN_8c0611a8 @ 8c0611a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0611a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0293f8(ar4 + 0xf8,0x5f,ar6,ar7,ar4);
  return uVar1;
}



/* s_STATUS_SUCKED_0660da @ 8c0660d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_STATUS_SUCKED_0660da(int ar4,int *ar5,int *ar6,char *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *a5;
  int *a6;
  char *ar7_00;
  undefined4 in_stack_ffffffbc;
  
  a5 = ar5;
  a6 = ar6;
  if (((*(int *)(ar4 + 0x6c) == 0) && (*(int *)(ar4 + 0x40) == 0)) && (*(int *)(ar4 + 0x874) == 7))
  {
    uVar1 = FUN_8c066834(ar4,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = uVar1;
    if ((*(int *)(ar4 + 0x6c) == 0) || (*(int *)(ar4 + 4) != 0)) {
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
    else {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x74))(*(int *)(ar4 + 0x6c),a5,a6,ar7);
      *(undefined4 *)(ar4 + 0x40) = 6;
      *(undefined4 *)(ar4 + 4) = 6;
      *(undefined4 *)(ar4 + 0xc) = 0;
      a5 = (int *)0x2bb;
      FUN_8c02f298(ar4,699,a6,ar7);
    }
  }
  iVar2 = (**(code **)(*(int *)(*ar6 + 8) + 0xb8))(*ar6,a5,a6,ar7);
  if ((iVar2 == 1) && (*(int *)(ar4 + 4) != 1)) {
    iVar2 = get_field_6c_02f46c(*ar6,a5,a6,ar7);
    if (iVar2 == 0) {
      iVar2 = get_field_70_05f490(*ar6,a5,a6,ar7);
      if (iVar2 != 0) goto LAB_8c0661e8;
      a6 = (int *)0x1b;
      FUN_8c0b9ed4(ar6[6],0x1b,0x1b,ar7);
      *(undefined4 *)(ar4 + 0x38) = 2;
      *(undefined4 *)(ar4 + 4) = 1;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 8) = 99;
      a5 = (int *)0xc7;
      FUN_8c02f298(ar4,199,a6,ar7);
    }
    else {
LAB_8c0661e8:
      if (*(int *)(ar4 + 4) != 0xb) {
        *(undefined4 *)(ar4 + 0x38) = 2;
        *(undefined4 *)(ar4 + 4) = 0xb;
        *(undefined4 *)(ar4 + 8) = 99;
        *(undefined4 *)(ar4 + 0x40) = 0xe;
        a5 = (int *)0x4af;
        FUN_8c02f298(ar4,0x4af,a6,ar7);
        iVar2 = get_field_c8_061174(ar6[3],a5,a6,ar7);
        if ((iVar2 == 0) || (*(int *)(ar4 + 900) != -1)) {
          ar7 = s_STATUS_SUCKED_8c136e43;
          a6 = (int *)0x0;
          a5 = (int *)0x19;
          FUN_8c0306d4(ar4 + 0x9c,0x19,0,s_STATUS_SUCKED_8c136e43);
        }
        if (*(int *)(ar4 + 0x6c) != 0) {
          (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),a5,a6,ar7);
          *(undefined4 *)(ar4 + 0x6c) = 0;
        }
      }
    }
    if ((*(char *)(ar4 + 0x878) == '\x01') && (*(int *)(ar4 + 4) == 0)) {
      *(undefined1 *)(ar4 + 0x878) = 0;
    }
  }
  uVar1 = FUN_8c02bef8(ar6[1],a5,a6,ar7);
  if ((short)uVar1 != 1) {
    uVar1 = FUN_8c02bef8(ar6[1],a5,a6,ar7);
    in_stack_ffffffbc = CONCAT22((short)uVar1,(short)in_stack_ffffffbc);
    if ((short)uVar1 != 2) goto LAB_8c0662e6;
  }
  iVar2 = get_field_c_06645c(ar6[3],a5,a6,ar7);
  if (((iVar2 == 1) && (*(char *)(ar4 + 0x878) != '\x01')) && (*(int *)(ar4 + 4) != 0xd)) {
    *(undefined1 *)(ar4 + 0x878) = 1;
    FUN_8c02f298(ar4,0x2b9,a6,ar7);
    a5 = (int *)0x0;
    FUN_8c066454(ar6[3],0,a6,ar7,in_stack_ffffffbc);
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 6;
    *(undefined4 *)(ar4 + 0x38) = 2;
  }
LAB_8c0662e6:
  if (*(int *)(ar4 + 0x6c) == 0) {
    iVar2 = get_field_13c_028d9c(ar6[1],a5,a6,ar7);
    if ((iVar2 == 6) && (*(int *)(ar4 + 0x40) == 0)) {
      a5 = (int *)0xf;
      iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,0xf,a6,ar7);
      if ((0 < iVar2) && ((*(int *)(ar4 + 4) != 0xd && (*(int *)(ar4 + 4) != 6)))) {
        a5 = (int *)0x2b9;
        FUN_8c02f298(ar4,0x2b9,a6,ar7);
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 4) = 6;
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
    }
  }
  iVar2 = get_field_c4_066448(ar6[3],a5,a6,ar7);
  if (((iVar2 == 0) && (iVar2 = *(int *)(ar4 + 0x40), iVar2 == 0)) &&
     (iVar2 = *(int *)(ar4 + 900), iVar2 == -1)) {
    iVar2 = get_field_13c_028d9c(ar6[1],a5,a6,ar7);
    if (iVar2 == 7) {
      uVar1 = 10;
      iVar3 = (**(code **)(*ar5 + 0x11c))(ar5,10,a6,ar7);
      iVar2 = 1;
      if (0 < iVar3) {
        uVar1 = FUN_8c03584c(ar6[3],uVar1,a6,ar7);
        iVar2 = (int)(char)uVar1;
        if (iVar2 == 2) {
          ar7_00 = s_REACTION_FEED_FULL_8c136e51;
          uVar1 = 0;
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_REACTION_FEED_FULL_8c136e51);
          iVar2 = FUN_8c06643c(ar6[3],1,uVar1,ar7_00);
        }
      }
    }
  }
  return iVar2;
}



/* free_if_nonnull_wrap_0673dc @ 8c0673dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0673dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* Class_12a0c4_m0_0674c8 @ 8c0674c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a0c4_m0_0674c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12a0c4;
    free_if_nonnull_wrap_016ac4(ar4 + 0x284,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x278,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x268,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x208,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 0x204,0xffffffff,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0x170,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_12c1f0_m0_0f4108(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c068818 @ 8c068818 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c068818(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_068860(ar4 + 0xac,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_068860 @ 8c068860 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_068860(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* s_GRAPHICS_HERBLINE_06ce12 @ 8c06ce04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_HERBLINE_06ce12(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 a5;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 **ar7_00;
  int *a4;
  int a6;
  int in_stack_ffffff74;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 auStack_24 [2];
  
  auStack_24[0] = 0;
  puVar7 = (undefined4 *)0x0;
  puStack_28 = (undefined4 *)0x0;
  puVar6 = (undefined *)0x0;
  uStack_2c = 0;
  uVar1 = 0;
  for (a6 = 0; a6 < 2; a6 = a6 + 1) {
    iVar4 = *(int *)(ar4 + 0x224) + a6 * 0x124;
    if (*(int *)(iVar4 + 0x18) != 0) {
      puVar7 = (undefined4 *)(ar4 + a6);
      puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
      iVar2 = FUN_8c020ddc(ar5,*(undefined4 *)(iVar4 + 0x18),PTR_s_GRAPHICS_HERBLINE_8c136f4c,puVar7
                          );
      if (iVar2 == 0) {
        puVar7 = (undefined4 *)0x2;
        puVar6 = (undefined *)0x0;
        report_error_message
                  (*(undefined4 *)(iVar4 + 0x18),s_Failed_to_Load__CHerb__LoadGRWai_8c13741d,0,2);
      }
    }
    for (iVar2 = 0; iVar2 < *(short *)(iVar4 + 0xa4); iVar2 = iVar2 + 1) {
      if (**(char **)(iVar2 * 4 + *(int *)(iVar4 + 4)) == '\0') {
        puVar7 = (undefined4 *)0x2;
        puVar6 = (undefined *)0x0;
        report_error_message(s_Attach_NULL___8c137452,s_CHerb__LoadGRWait___8c137460,0,2);
        auStack_24[0] = 0;
      }
      else {
        puVar7 = auStack_24;
        puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
        iVar3 = FUN_8c020bec(ar5,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 4)),
                             PTR_s_GRAPHICS_HERBLINE_8c136f4c,puVar7);
        if (iVar3 == 0) {
          puVar7 = (undefined4 *)0x2;
          puVar6 = (undefined *)0x0;
          report_error_message
                    (*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 4)),s_Read_NMDM_Failed___8c13743f,
                     0,2);
        }
      }
      FUN_8c015bb0(*(int *)(iVar4 + 0xa0) + iVar2 * 4,auStack_24[0],puVar6,puVar7,in_stack_ffffff74)
      ;
    }
    for (iVar2 = 0; iVar2 < *(short *)(iVar4 + 0xac); iVar2 = iVar2 + 1) {
      if (**(char **)(iVar2 * 4 + *(int *)(iVar4 + 8)) == '\0') {
        auStack_24[0] = 0;
      }
      else {
        puVar7 = auStack_24;
        puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
        iVar3 = FUN_8c020ce4(ar5,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 8)),
                             PTR_s_GRAPHICS_HERBLINE_8c136f4c,puVar7);
        if (iVar3 == 0) {
          puVar7 = (undefined4 *)0x2;
          puVar6 = (undefined *)0x0;
          report_error_message
                    (*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 8)),s_Read_NSSM_Failed___8c137474,
                     0,2);
        }
        FUN_8c015be4(*(int *)(*(int *)(ar4 + 0x224) + a6 * 0x124 + 0xa8) + iVar2 * 4,auStack_24[0],
                     puVar6,puVar7,in_stack_ffffff74);
      }
      FUN_8c015be4(*(int *)(iVar4 + 0xa8) + iVar2 * 4,auStack_24[0],puVar6,puVar7,in_stack_ffffff74)
      ;
    }
    ar7_00 = &puStack_28;
    puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
    iVar2 = FUN_8c0209fc(ar5,*(undefined4 *)(iVar4 + 0xc),PTR_s_GRAPHICS_HERBLINE_8c136f4c,ar7_00);
    if (iVar2 == 0) {
      ar7_00 = (undefined4 **)0x2;
      puVar6 = (undefined *)0x0;
      report_error_message
                (*(undefined4 *)(iVar4 + 0xc),s_Read_NJCM_Failed___CHerb__LoadGR_8c137487,0,2);
    }
    FUN_8c015ad4(iVar4 + 0x70,puStack_28,puVar6,ar7_00,in_stack_ffffff74);
    in_stack_ffffff74 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,puVar6,ar7_00);
    if (in_stack_ffffff74 == 0) {
      if (*(int *)(iVar4 + 0x20) == 0) {
        puVar7 = &uStack_2c;
        puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
        iVar2 = FUN_8c020af4(ar5,*(undefined4 *)(iVar4 + 0xc),PTR_s_GRAPHICS_HERBLINE_8c136f4c,
                             puVar7);
        if (iVar2 == 0) {
          puVar7 = (undefined4 *)0x2;
          puVar6 = (undefined *)0x0;
          report_error_message
                    (*(undefined4 *)(iVar4 + 0xc),s_Read_NJTL_Failed___CHerb__LoadGR_8c1374ed,0,2);
        }
        (**(code **)(*(int *)(iVar4 + 0x78) + 8))((int *)(iVar4 + 0x78),uStack_2c,puVar6,puVar7);
        iVar4 = a6;
        (**(code **)(*(int *)(ar4 + 8) + 0xe4))(ar4,ar5,a6,puVar7);
        (**(code **)(*(int *)(ar4 + 0x208) + 8))((int *)(ar4 + 0x208),uStack_2c,iVar4,puVar7);
      }
      else {
        uVar1 = *(undefined4 *)(iVar4 + 0xc);
        s_CHerb_SetPVMTexture_s_06d61c(ar4,iVar4 + 0x20,uVar1,ar7_00);
        iVar2 = iVar4 + 0x28;
        (**(code **)(*(int *)(iVar4 + 0x78) + 8))((int *)(iVar4 + 0x78),iVar2,uVar1,ar7_00);
        uVar1 = get_field_4_0253e4(iVar4 + 0x78,iVar2,uVar1,ar7_00);
        pcVar5 = *(char **)(iVar4 + 0x20);
        puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
        iVar2 = FUN_8c02100c(ar5,pcVar5,PTR_s_GRAPHICS_HERBLINE_8c136f4c,uVar1);
        if (iVar2 == 0) {
          uVar1 = 2;
          puVar6 = (undefined *)0x0;
          pcVar5 = s_CAnimal__LoadGResourceWait___8c1374d0;
          report_error_message
                    (s_Failed_to_load_body_pvm_textuer__8c1374ae,
                     s_CAnimal__LoadGResourceWait___8c1374d0,0,2);
        }
        a5 = get_field_4_0253e4(iVar4 + 0x78,pcVar5,puVar6,uVar1);
        (**(code **)(*(int *)(ar4 + 0x208) + 8))((int *)(ar4 + 0x208),a5,puVar6,uVar1);
      }
    }
    else if (*(int *)(iVar4 + 0x34) == 0) {
      iVar2 = FUN_8c020af4(ar5,*(undefined4 *)(iVar4 + 0xc),PTR_s_GRAPHICS_HERBLINE_8c136f4c,
                           &uStack_2c);
      if (iVar2 == 0) {
        report_error_message
                  (*(undefined4 *)(iVar4 + 0xc),s_Read_NJTL_Failed___CHerb__LoadGR_8c1374ed,0,2);
      }
      a4 = (int *)(iVar4 + 0x78);
      (**(code **)(*a4 + 8))(a4,uStack_2c,*(code **)(*a4 + 8),a4);
      iVar4 = a6;
      (**(code **)(*(int *)(ar4 + 8) + 0xe4))(ar4,ar5,a6,a4);
      (**(code **)(*(int *)(ar4 + 0x208) + 8))((int *)(ar4 + 0x208),uStack_2c,iVar4,a4);
    }
    else {
      uVar1 = *(undefined4 *)(iVar4 + 0xc);
      s_CHerb_SetPVMTexture_s_06d61c(ar4,iVar4 + 0x34,uVar1,ar7_00);
      iVar2 = iVar4 + 0x3c;
      (**(code **)(*(int *)(iVar4 + 0x80) + 8))((int *)(iVar4 + 0x80),iVar2,uVar1,ar7_00);
      uVar1 = get_field_4_0253e4(iVar4 + 0x80,iVar2,uVar1,ar7_00);
      pcVar5 = *(char **)(iVar4 + 0x34);
      puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
      iVar2 = FUN_8c02100c(ar5,pcVar5,PTR_s_GRAPHICS_HERBLINE_8c136f4c,uVar1);
      if (iVar2 == 0) {
        uVar1 = 2;
        puVar6 = (undefined *)0x0;
        pcVar5 = s_CAnimal__LoadGResourceWait___8c1374d0;
        report_error_message
                  (s_Failed_to_load_body_pvm_textuer__8c1374ae,
                   s_CAnimal__LoadGResourceWait___8c1374d0,0,2);
      }
      uVar1 = get_field_4_0253e4(iVar4 + 0x80,pcVar5,puVar6,uVar1);
      (**(code **)(*(int *)(ar4 + 0x208) + 8))((int *)(ar4 + 0x208),uVar1,0x208,uVar1);
    }
    puVar6 = (undefined *)0x204;
    puVar7 = puStack_28;
    uVar1 = FUN_8c015ad4(ar4 + 0x204,puStack_28,0x204,puStack_28,in_stack_ffffff74);
  }
  return uVar1;
}



/* FUN_8c06e410 @ 8c06e410 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06e410(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c280a38,free_if_nonnull_wrap_0673dc,8,6,in_PR);
  return uVar1;
}



/* FUN_8c06e434 @ 8c06e434 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06e434(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c2809fc,free_if_nonnull_wrap_0673dc,8,6,in_PR);
  return uVar1;
}



/* FUN_8c06e458 @ 8c06e458 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06e458(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c2809b8,free_if_nonnull_wrap_0673dc,8,7,in_PR);
  return uVar1;
}



/* FUN_8c06e47c @ 8c06e47c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06e47c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c280964,free_if_nonnull_wrap_03a3dc,4,0xd,in_PR);
  return uVar1;
}



/* FUN_8c06e4a0 @ 8c06e4a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06e4a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c280924,free_if_nonnull_wrap_0247b0,4,0xd,in_PR);
  return uVar1;
}



/* FUN_8c06e4c4 @ 8c06e4c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c06e4c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c2804f0,FUN_8c03a4ac,0x124,2,in_PR);
  return uVar1;
}



/* Class_12a25c_m0_06f3c4 @ 8c06f3c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12a25c_m0_06f3c4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *a4;
  undefined4 ar5_00;
  undefined4 in_stack_fffffff0;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff0 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12a25c;
    if ((ar4[0x6b] != 0) && (a4 = (int *)ar4[0x6b], a4 != (int *)0x0)) {
      (**(code **)(*a4 + 8))(a4,1,ar6,ar7);
    }
    Vec3_dtor(ar4 + 0xaf,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xa0,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x9c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x99,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x95,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x91,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x8c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x89,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_129cbc_m0_0312f4(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c07e828 @ 8c07e828 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c07eb06) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c07e828(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  undefined4 uVar3;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar4;
  undefined4 unaff_r12;
  int *a4;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar5;
  float fVar6;
  undefined8 in_dr0;
  double dVar7;
  undefined8 uVar8;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar9;
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
  *(undefined4 *)(puVar5 + -0x1c) = in_PR;
  *(undefined4 *)(puVar5 + -0x104) = ar6;
  a4 = *(int **)(puVar5 + 4);
  *(undefined4 *)(ar4 + 0x214) = 0;
  uVar3 = ar5;
  FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7);
  uVar4 = 1;
  FUN_8c031700(ar4,uVar3,ar6,ar7);
  *(undefined4 *)(ar4 + 0x290) = 0xffffffff;
  Vec3_ctor_zero(puVar5 + -0x2c,uVar3,ar6,ar7);
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x178) = 1;
    FUN_8c031748(ar4,uVar3,ar6,ar7);
    FUN_8c031c74(ar4,&DAT_8c125e78,ar5,ar7);
    ar6 = ar5;
    if (*(int *)(ar4 + 0x40) == 0) {
      uVar3 = FUN_8c034148(ar4 + 0xb0,0x29,ar5,ar7);
      *(undefined4 *)(puVar5 + -0xc4) = uVar3;
      ar6 = ar5;
      if (0 < *(int *)(puVar5 + -0xc4)) {
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(undefined4 *)(ar4 + 0x290) = *(undefined4 *)(ar4 + 0x294);
        *(int *)(puVar5 + -0xf0) = ar4;
        *(int *)(*(int *)(puVar5 + -0xf0) + 300) = *(int *)(*(int *)(puVar5 + -0xf0) + 300) + 1;
      }
    }
  }
  else if (iVar1 == 1) {
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7,*(undefined4 *)(puVar5 + -0x104));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar5 + -200) = (int)((ulonglong)in_dr0 >> 0x20);
      in_fr15 = *(float *)(puVar5 + -200);
      dVar7 = (double)CONCAT44(0x43250000,(int)in_dr0);
    }
    else {
      *(undefined8 *)(puVar5 + -200) = in_dr0;
      dVar7 = 6.03203368746242e-312;
    }
    if (in_FPSCR_PR == '\0') {
      bVar9 = (float)((ulonglong)dVar7 >> 0x20) < in_fr15;
    }
    else {
      bVar9 = dVar7 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar9) {
      uVar3 = (**(code **)(*a4 + 0x11c))(a4,6,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xcc) = uVar3;
      if (*(int *)(puVar5 + -0xcc) == 0) {
        uVar3 = (**(code **)(*a4 + 0x11c))(a4,4,ar6,ar7);
        *(undefined4 *)(puVar5 + -0xd0) = uVar3;
        if (*(int *)(puVar5 + -0xd0) == 0) {
          *(undefined4 *)(puVar5 + -0xb8) = 2;
          Vec3_dtor(puVar5 + -0x2c,0xffffffff,ar6,ar7);
          return *(undefined4 *)(puVar5 + -0xb8);
        }
        uVar3 = 4;
      }
      else {
        uVar3 = 6;
      }
      ar5_00 = 0x2c;
      uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x2c,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xd4) = uVar2;
      uVar2 = deref_u32(*(undefined4 *)(puVar5 + -0xd4),ar5_00,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xd8) = uVar2;
      CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7,*(undefined4 *)(puVar5 + -0x104));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar5 + -0xdc) = (int)((ulonglong)dVar7 >> 0x20);
      }
      else {
        *(double *)(puVar5 + -0xdc) = dVar7;
      }
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0x4c;
      if (in_FPSCR_SZ == '\0') {
        uVar8 = CONCAT44(0x42f40000,SUB84(dVar7,0));
      }
      else {
        uVar8 = 0x8c0342d842f40000;
      }
      FUN_8c0342d8(ar4 + 0xb0,*(undefined4 *)**(undefined4 **)(puVar5 + -0xd8),ar6,ar7);
      Vec3_assign(puVar5 + -0x2c,puVar5 + -0x4c,ar6,ar7);
      Vec3_dtor(puVar5 + -0x4c,0xffffffff,ar6,ar7);
      vec3_copy_8c02b5fc(puVar5 + -0x58,*(undefined4 *)(puVar5 + -0x104),ar6,ar7);
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0x68;
      FUN_8c023484(puVar5 + -0x2c,puVar5 + -0x58,ar6,ar7,*(undefined4 *)(puVar5 + -0x108));
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0x78;
      Vec3_add(puVar5 + -0x68,ar5,ar6,ar7,*(undefined4 *)(puVar5 + -0x108));
      Vec3_assign(puVar5 + -0x2c,puVar5 + -0x78,ar6,ar7);
      Vec3_dtor(puVar5 + -0x78,0xffffffff,ar6,ar7);
      Vec3_dtor(puVar5 + -0x68,0xffffffff,ar6,ar7);
      object_dtor_delete(puVar5 + -0x58,0xffffffff,ar6,ar7);
      ar6 = *(undefined4 *)(ar4 + 0x294);
      uVar2 = (**(code **)(*a4 + 0x100))(a4,uVar3,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xe0) = uVar2;
      iVar1 = *(int *)(puVar5 + -0xe0);
      if (iVar1 != 0) {
        FUN_8c036988(iVar1,uVar3,ar6,ar7);
      }
      Vec3_ctor_xyz(puVar5 + -0x88,uVar3,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xf4) = *(undefined4 *)(ar4 + 0x294);
      Vec3_set_xyz(puVar5 + -0x94,uVar3,ar6,ar7);
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0xa4;
      FUN_8c023484(puVar5 + -0x88,puVar5 + -0x94,ar6,ar7,*(undefined4 *)(puVar5 + -0x108));
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0xb4;
      Vec3_scale(puVar5 + -0xa4,&DAT_8c1379c0,ar6,ar7,*(undefined4 *)(puVar5 + -0x108));
      Vec3_ctor_copy(puVar5 + -0x3c,puVar5 + -0xb4,ar6,ar7);
      Vec3_dtor(puVar5 + -0xb4,0xffffffff,ar6,ar7);
      Vec3_dtor(puVar5 + -0xa4,0xffffffff,ar6,ar7);
      object_dtor_delete(puVar5 + -0x94,0xffffffff,ar6,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(puVar5 + -0x88,0xffffffff,ar6,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7,*(undefined4 *)(puVar5 + -0x104));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar5 + -0xe4) = (int)((ulonglong)uVar8 >> 0x20);
        dVar7 = (double)CONCAT44(0x42f40000,*(undefined4 *)(puVar5 + -0xe4));
      }
      else {
        *(undefined8 *)(puVar5 + -0xe4) = uVar8;
        in_xd0 = *(undefined8 *)(puVar5 + -0xe4);
        dVar7 = -8.406882663868896e-251;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(0x42f00000,fVar6);
      }
      else {
        dVar7 = -7.95866521996774e-251;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar5 + -0xc0) = fVar6;
      }
      else {
        *(undefined8 *)(puVar5 + -0xc0) = in_xd0;
      }
      FUN_8c023bf4(puVar5 + -0x3c,puVar5 + -0xc0,ar6,ar7);
      ar5_01 = puVar5 + -0x3c;
      FUN_8c023aa0(puVar5 + -0x2c,ar5_01,ar6,ar7);
      FUN_8c036988(iVar1,ar5_01,ar6,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(puVar5 + -0x3c,0xffffffff,ar6,ar7);
    }
    else {
      vec3_clear(puVar5 + -0x2c,uVar3,ar6,ar7);
    }
    uVar2 = FUN_8c03f3ac(ar4 + 0xb0,uVar3,ar6,ar7);
    *(undefined4 *)(puVar5 + -0xe8) = uVar2;
    if (*(int *)(puVar5 + -0xe8) == 7) {
      if (in_FPSCR_PR == '\0') {
        iVar1 = (int)in_fr15;
      }
      else {
        iVar1 = (int)(double)CONCAT44(in_fr14,in_fr15);
      }
      if (iVar1 == 0xa5) {
        uVar3 = 6;
        FUN_8c033474(ar4,6,ar5,a4);
        ar6 = ar5;
        ar7 = a4;
      }
      *(int *)(puVar5 + -0xf8) = ar4;
      *(undefined4 *)(puVar5 + -0xfc) = *(undefined4 *)(*(int *)(puVar5 + -0xf8) + 0x294);
      *(int *)(*(int *)(puVar5 + -0xf8) + 0x294) = *(int *)(puVar5 + -0xfc) + 1;
      if (*(int *)(puVar5 + -0xfc) + 1 < 6) {
        *(undefined4 *)(ar4 + 0x290) = *(undefined4 *)(ar4 + 0x294);
      }
      else {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
        *(int *)(puVar5 + -0x100) = ar4;
        *(int *)(*(int *)(puVar5 + -0x100) + 300) = *(int *)(*(int *)(puVar5 + -0x100) + 300) + 1;
      }
    }
  }
  else if (iVar1 == 2) {
    uVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6,ar7);
    *(undefined4 *)(puVar5 + -0xec) = uVar2;
    if (*(int *)(puVar5 + -0xec) == 1) {
      uVar4 = 0;
      FUN_8c03c314(ar4,uVar3,ar6,ar7);
      *(undefined4 *)(ar4 + 0x214) = 1;
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x178) = 0;
    }
  }
  *(undefined4 *)(puVar5 + -0xbc) = uVar4;
  Vec3_dtor(puVar5 + -0x2c,0xffffffff,ar6,ar7);
  return *(undefined4 *)(puVar5 + -0xbc);
}



/* CAnimal_m0_08516c @ 8c08516c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int CAnimal_m0_08516c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12a434;
    Class_129938_m0_017084(ar4 + 0x1014,0xffffffff,ar6,ar7);
    Class_12a25c_m0_06f3c4(ar4 + 0xd20,0xffffffff,ar6,ar7);
    Class_12c3c4_m0_1030a4(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* s_GRAPHICS_HIGYOLINE_087ed2 @ 8c087ed0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_HIGYOLINE_087ed2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  int ar6_01;
  undefined4 ar7_00;
  
  ar7_00 = 0x15;
  ar6_00 = 1;
  uVar1 = 4;
  FUN_8c0254d0(ar4,4,1,0x15,0,ar5,0x8c283804,0x8c283934,PTR_s_GRAPHICS_HIGYOLINE_8c138578);
  *(undefined **)(ar4 + 8) = &DAT_8c12a298;
  FUN_8c016fcc(ar4 + 0x490,uVar1,ar6_00,ar7_00);
  FUN_8c02ff6c(ar4 + 0x528,uVar1,ar6_00,ar7_00);
  FUN_8c030fa0(ar4 + 0x5c4,uVar1,ar6_00,ar7_00);
  FUN_8c014334(ar4 + 0xc,uVar1,ar6_00,ar7_00,s_HigyoEgg_8c139e22);
  *(int *)(ar4 + 0x308) = ar4 + 0x528;
  *(int *)(ar4 + 0x30c) = ar4 + 0x5c4;
  *(undefined1 *)(ar4 + 0x524) = 0xff;
  ar6_01 = ar4 + 0x490;
  uVar1 = *(undefined4 *)(*(int *)(ar4 + 0x328) + 0xb4);
  FUN_8c0f532c(ar4,uVar1,ar6_01,ar7_00);
  FUN_8c027224(ar4 + 0x5c4,uVar1,ar6_01,ar7_00,ar5);
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x28))((int *)(ar4 + 0xa8),ar4 + 0x30,ar6_01,ar7_00);
  *(undefined4 *)(ar4 + 0x330) = 0;
  return ar4;
}



/* CAnimal_m0_08800c @ 8c08800c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int CAnimal_m0_08800c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12a298;
    Class_129cbc_m0_0312f4(ar4 + 0x5c4,0xffffffff,ar6,ar7);
    Class_129c24_m0_02ff90(ar4 + 0x528,0xffffffff,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0883a8 @ 8c0883a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0883a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  noop_038c8c(ar4,ar5,ar6,ar7,in_PR);
  uVar1 = 0;
  if (*(int *)(ar4 + 0x330) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x5c))
                      (*(int *)(ar4 + 0x330),ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c089ef0 @ 8c089ef0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089ef0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c282090,free_if_nonnull_wrap_03a3dc,4,0x34,in_PR);
  return uVar1;
}



/* FUN_8c089f14 @ 8c089f14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089f14(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281fb4,free_if_nonnull_wrap_0247b0,4,0x34,in_PR);
  return uVar1;
}



/* FUN_8c089f38 @ 8c089f38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089f38(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281f04,free_if_nonnull_wrap_03a3dc,4,0x29,in_PR);
  return uVar1;
}



/* FUN_8c089f5c @ 8c089f5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089f5c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281e54,free_if_nonnull_wrap_0247b0,4,0x29,in_PR);
  return uVar1;
}



/* FUN_8c089f80 @ 8c089f80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089f80(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281dd8,free_if_nonnull_wrap_03a3dc,4,0x1c,in_PR);
  return uVar1;
}



/* FUN_8c089fa4 @ 8c089fa4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089fa4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281d5c,free_if_nonnull_wrap_0247b0,4,0x1c,in_PR);
  return uVar1;
}



/* FUN_8c089fc8 @ 8c089fc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089fc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281ce0,free_if_nonnull_wrap_03a3dc,4,0x1c,in_PR);
  return uVar1;
}



/* FUN_8c089fec @ 8c089fec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089fec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281c64,free_if_nonnull_wrap_0247b0,4,0x1c,in_PR);
  return uVar1;
}



/* FUN_8c08a010 @ 8c08a010 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a010(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281be8,free_if_nonnull_wrap_03a3dc,4,0x1c,in_PR);
  return uVar1;
}



/* FUN_8c08a034 @ 8c08a034 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a034(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281b6c,free_if_nonnull_wrap_0247b0,4,0x1c,in_PR);
  return uVar1;
}



/* FUN_8c08a058 @ 8c08a058 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a058(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281af4,free_if_nonnull_wrap_03a3dc,4,0x1b,in_PR);
  return uVar1;
}



/* FUN_8c08a07c @ 8c08a07c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a07c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281a7c,free_if_nonnull_wrap_0247b0,4,0x1b,in_PR);
  return uVar1;
}



/* FUN_8c08a0a0 @ 8c08a0a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a0a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281a20,free_if_nonnull_wrap_03a3dc,4,0x14,in_PR);
  return uVar1;
}



/* FUN_8c08a0c4 @ 8c08a0c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a0c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c2819c4,free_if_nonnull_wrap_0247b0,4,0x14,in_PR);
  return uVar1;
}



/* FUN_8c08a0e8 @ 8c08a0e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a0e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c281970,free_if_nonnull_wrap_03a3dc,4,0x12,in_PR);
  return uVar1;
}



/* FUN_8c08a10c @ 8c08a10c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a10c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c28191c,free_if_nonnull_wrap_0247b0,4,0x12,in_PR);
  return uVar1;
}



/* FUN_8c08a130 @ 8c08a130 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a130(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(&DAT_8c2818e0,free_if_nonnull_wrap_03a454,0x10,3,in_PR);
  return uVar1;
}



/* FUN_8c08a154 @ 8c08a154 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a154(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c280fb4,FUN_8c03a4ac,0x124,8,in_PR);
  return uVar1;
}



/* Class_12a5d0_m0_08a3a4 @ 8c08a3a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a5d0_m0_08a3a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12a5d0;
    free_if_nonnull_wrap_016ac4(ar4 + 0x91c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x910,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x900,0xffffffff,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0x858,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_03a3dc(ar4 + 0x854,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0247b0(ar4 + 0x850,0xffffffff,ar6,ar7);
    Class_12a76c_m0_08dca8(ar4 + 0x538,0xffffffff,ar6,ar7);
    Class_12a7a8_m0_098ccc(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c08d9b0 @ 8c08d9b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08d9b0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c284110,free_if_nonnull_wrap_03a3dc,4,7,in_PR);
  return uVar1;
}



/* FUN_8c08d9d4 @ 8c08d9d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08d9d4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c2840e8,free_if_nonnull_wrap_0247b0,4,7,in_PR);
  return uVar1;
}



/* FUN_8c08d9f8 @ 8c08d9f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08d9f8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c2840d4,free_if_nonnull_wrap_03a3dc,4,2,in_PR);
  return uVar1;
}



/* FUN_8c08da1c @ 8c08da1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08da1c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c2840c0,free_if_nonnull_wrap_0247b0,4,2,in_PR);
  return uVar1;
}



/* FUN_8c08da40 @ 8c08da40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08da40(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c284064,free_if_nonnull_wrap_03a3dc,4,0x14,in_PR);
  return uVar1;
}



/* FUN_8c08da64 @ 8c08da64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08da64(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c284008,free_if_nonnull_wrap_0247b0,4,0x14,in_PR);
  return uVar1;
}



/* FUN_8c08da88 @ 8c08da88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08da88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(&DAT_8c283fcc,free_if_nonnull_wrap_03a454,0x10,3,in_PR);
  return uVar1;
}



/* FUN_8c08daac @ 8c08daac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08daac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c283b30,FUN_8c03a4ac,0x124,4,in_PR);
  return uVar1;
}



/* Class_12a76c_m0_08dca8 @ 8c08dca8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12a76c_m0_08dca8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12a76c;
    Vec3_dtor(ar4 + 0xb8,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xb4,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0xae,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xaa,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0xa7,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xa3,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x99,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x93,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x8c,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_129cbc_m0_0312f4(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c08e93c @ 8c08e93c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c08e93c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Vec3_dtor(ar4 + 0x4c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x3c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x30,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x20,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c097ef0 @ 8c097ef0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c097ef0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_PR;
  
  *(undefined4 *)(ar4 + 300) = 0;
  *(undefined4 *)(ar4 + 0x40) = 5;
  *(undefined4 *)(ar4 + 0x134) = 0;
  FUN_8c031b58(ar4 + 0xb0,ar5,ar6,ar7);
  FUN_8c032204(ar4 + 0xb0,ar5,ar6,ar7,in_PR);
  ar5_00 = 1;
  FUN_8c0321fc(ar4 + 0xb0,1,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x138) = 0;
  *(undefined4 *)(ar4 + 0x1e8) = 0;
  FUN_8c030eb8(ar4 + 0x1fc,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x214) = 1;
  if ((-1 < *(int *)(ar4 + 0x2f4)) && (-1 < *(int *)(ar4 + 0x2f8))) {
    FUN_8c06b1d8(*(undefined4 *)(ar4 + 0x2f4),*(undefined4 *)(ar4 + 0x2f8),ar6,ar7);
    *(undefined4 *)(ar4 + 0x2f4) = 0xffffffff;
    *(undefined4 *)(ar4 + 0x2f8) = 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x240) = 0;
  *(undefined4 *)(ar4 + 0x244) = 0;
  return 0x244;
}



/* Class_12a7a8_m0_098ccc @ 8c098ccc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12a7a8_m0_098ccc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12a7a8;
    ar5_00 = 0;
    Class_129c70_m0_02f1b8(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c099714 @ 8c099714 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c099714(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  undefined4 a5;
  int *piVar2;
  int in_stack_ffffffd8;
  
  piVar2 = ar6;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13a884 + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    FUN_8c099914(ar4,ar5,ar6,ar7);
    a5 = 1;
    FUN_8c02f404(ar4,1,piVar2,ar7,in_stack_ffffffd8);
  }
  else {
    in_stack_ffffffd8 = *(int *)(ar4 + 0xc);
    *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(&DAT_8c13a884 + in_stack_ffffffd8 * 4 + ar7 * 0xc)
    ;
    a5 = ar5;
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 2) {
    FUN_8c02f404(ar4,3,piVar2,ar7,in_stack_ffffffd8);
  }
  else if (iVar1 == 4) {
    if (*(int *)(ar4 + 0x8c) == 1) {
      *(undefined1 *)(ar4 + 0x98) = 7;
      *(undefined4 *)(ar4 + 0x8c) = 0;
    }
    FUN_8c099b0c(ar4,ar5,piVar2,ar7);
  }
  else if (iVar1 == 8) {
    iVar1 = (**(code **)(*(int *)(*ar6 + 8) + 0xb4))(*ar6,a5,piVar2,ar7);
    if (iVar1 == 1) {
      iVar1 = *ar6;
      FUN_8c027954(iVar1,a5,piVar2,ar7);
      FUN_8c0c4e2c(iVar1,a5,piVar2,ar7);
    }
  }
  else if ((iVar1 == 0xb) && (*(int *)(ar4 + 0x8c) == 1)) {
    FUN_8c099850(ar6[3],1,piVar2,ar7);
    *(undefined4 *)(ar4 + 0x8c) = 0;
  }
  return 1;
}



/* FUN_8c099858 @ 8c099858 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c099858(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  int in_stack_ffffffe4;
  
  if (*(int *)(ar4 + 0x3c) == 0) {
    ar6_00 = ar6;
    FUN_8c0999ac(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    in_stack_ffffffe4 = *(int *)(ar4 + 0xc);
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13a884 + in_stack_ffffffe4 * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 0xc) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 2;
      FUN_8c02f404(ar4,0,ar6_00,ar7,in_stack_ffffffe4);
      ar6 = ar6_00;
    }
    else {
      FUN_8c02f404(ar4,3,ar6_00,ar7,in_stack_ffffffe4);
      FUN_8c099914(ar4,ar5,ar6,ar7);
    }
  }
  iVar1 = *(int *)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = FUN_8c02f404(ar4,2,ar6,ar7,in_stack_ffffffe4);
  }
  return iVar1;
}



/* Class_12a7f4_m0_099fd8 @ 8c099fd8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a7f4_m0_099fd8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12a7f4;
    Class_129cbc_m0_0312f4(ar4 + 0x5cc,0xffffffff,ar6,ar7);
    Class_129c24_m0_02ff90(ar4 + 0x530,0xffffffff,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c09ac70 @ 8c09ac70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ac70(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  noop_038c8c(ar4,ar5,ar6,ar7,in_PR);
  uVar1 = 0;
  if (*(int *)(ar4 + 0x330) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x5c))
                      (*(int *)(ar4 + 0x330),ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c09b88c @ 8c09b88c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09b88c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_016ac4(ar4 + 0x18,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016ac4(ar4 + 0xc,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_016ac4(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12a990_m0_09bb44 @ 8c09bb44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a990_m0_09bb44(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12a990;
    FUN_8c09b88c(ar4 + 0x9a4,0xffffffff,ar6,ar7);
    Class_129cbc_m0_0312f4(ar4 + 0x780,0xffffffff,ar6,ar7);
    Class_129c24_m0_02ff90(ar4 + 0x6e4,0xffffffff,ar6,ar7);
    vec_delete_array(ar4 + 0x644,Vec3_dtor,0x10,8,ain0);
    vec_delete_array(ar4 + 0x5c4,Vec3_dtor,0x10,8,ain0);
    ar7_00 = 8;
    ar6_00 = 0x10;
    vec_delete_array(ar4 + 0x544,Vec3_dtor,0x10,8,ain0);
    Class_129938_m0_017084(ar4 + 0x490,0xffffffff,ar6_00,ar7_00);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* FUN_8c09ca80 @ 8c09ca80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ca80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a4;
  int iVar2;
  undefined4 in_stack_ffffffe8;
  
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffffe8);
  FUN_8c019198(uVar1,ar5,ar6,ar7);
  uVar1 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5,ar6,ar7);
  FUN_8c219a9a(uVar1,ar5,ar6,ar7);
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    if (*(int *)(ar4 + iVar2 * 4 + 0x524) != 0) {
      a4 = *(int *)(ar4 + iVar2 * 4 + 0x524);
      (**(code **)(*(int *)(a4 + 8) + 0x3c))(a4,ar5,ar6,ar7);
    }
  }
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09cb58 @ 8c09cb58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09cb58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  undefined4 in_stack_ffffffec;
  
  noop_038c8c(ar4,ar5,ar6,ar7,in_stack_ffffffec);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(ar4 + iVar1 * 4 + 0x524) != 0) {
      a4 = *(int *)(ar4 + iVar1 * 4 + 0x524);
      (**(code **)(*(int *)(a4 + 8) + 0x5c))(a4,ar5,ar6,ar7);
    }
  }
  return 8;
}



/* Class_12ab2c_m0_09dab8 @ 8c09dab8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12ab2c_m0_09dab8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12ab2c;
    FUN_8c09efb4(ar4,ar5,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0xf3c,0xffffffff,ar6,ar7);
    Class_12ad14_m0_0a0950(ar4 + 0xcc4,0xffffffff,ar6,ar7);
    Class_12acc8_m0_09f428(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c09dde4 @ 8c09dde4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09dde4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (*(int *)(ar4 + 0xfd0) != 0) {
    ar5 = 1;
    FUN_8c221916(*(int *)(ar4 + 0xfd0) + 1,1,ar6,ar7);
  }
  FUN_8c2219de(2,ar5,ar6,ar7,in_PR);
  FUN_8c2219de(3,ar5,ar6,ar7,in_PR);
  FUN_8c2219de(4,ar5,ar6,ar7,in_PR);
  FUN_8c21418e(2,ar5,ar6,ar7,in_PR);
  FUN_8c21418e(3,ar5,ar6,ar7,in_PR);
  uVar1 = FUN_8c21418e(4,ar5,ar6,ar7,in_PR);
  return uVar1;
}



/* FUN_8c09f36c @ 8c09f36c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09f36c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c284f78,free_if_nonnull_wrap_03a3dc,4,0xf,in_PR);
  return uVar1;
}



/* FUN_8c09f390 @ 8c09f390 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09f390(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c284f30,free_if_nonnull_wrap_0247b0,4,0xf,in_PR);
  return uVar1;
}



/* Class_12acc8_m0_09f428 @ 8c09f428 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12acc8_m0_09f428(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12acc8;
    ar5_00 = 0;
    Class_129c70_m0_02f1b8(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c09ff1c @ 8c09ff1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ff1c(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a5;
  int *ar6_00;
  
  a5 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13adfc + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    FUN_8c0a00f8(ar4,ar5,ar6,ar7);
    a5 = 1;
    FUN_8c02f404(ar4,1,ar6_00,ar7,iVar2);
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 2) {
    FUN_8c02f404(ar4,3,ar6_00,ar7,iVar2);
  }
  else if (iVar1 == 3) {
    if (*(int *)(ar4 + 4) == 0xb) {
      FUN_8c0a0278(ar4,ar5,ar6_00,ar7);
    }
    else {
      FUN_8c02f404(ar4,3,ar6_00,ar7,iVar2);
      FUN_8c02fdd8(ar4,ar5,ar6_00,ar7);
    }
  }
  else if (iVar1 == 6) {
    iVar2 = (**(code **)(*(int *)(*ar6 + 8) + 0xb4))(*ar6,a5,ar6_00,ar7);
    if (iVar2 == 1) {
      iVar2 = *ar6;
      FUN_8c027954(iVar2,a5,ar6_00,ar7);
      FUN_8c0c4e2c(iVar2,a5,ar6_00,ar7);
    }
  }
  else if (((iVar1 == 10) && (iVar2 = FUN_8c02c518(ar6[1],a5,ar6_00,ar7), iVar2 != 0)) &&
          (iVar2 == 1)) {
    *(undefined4 *)(ar4 + 0x40) = 0xe;
  }
  return 1;
}



/* FUN_8c0a0040 @ 8c0a0040 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0a0040(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  int in_stack_ffffffe4;
  
  if (*(int *)(ar4 + 0x3c) == 0) {
    ar6_00 = ar6;
    FUN_8c0a0184(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    in_stack_ffffffe4 = *(int *)(ar4 + 0xc);
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13adfc + in_stack_ffffffe4 * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 0xf) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0xc) = 0;
      FUN_8c02f404(ar4,0,ar6_00,ar7,in_stack_ffffffe4);
      ar6 = ar6_00;
    }
    else {
      FUN_8c02f404(ar4,3,ar6_00,ar7,in_stack_ffffffe4);
      FUN_8c0a00f8(ar4,ar5,ar6,ar7);
    }
  }
  iVar1 = *(int *)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = FUN_8c02f404(ar4,2,ar6,ar7,in_stack_ffffffe4);
  }
  return iVar1;
}



/* Class_12ad14_m0_0a0950 @ 8c0a0950 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12ad14_m0_0a0950(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12ad14;
    Vec3_dtor(ar4 + 0x98,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x94,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x8e,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x89,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_129cbc_m0_0312f4(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12aeec_m0_0a4694 @ 8c0a4694 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12aeec_m0_0a4694(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12aeec;
    Class_129938_m0_017084(ar4 + 0x26fc,0xffffffff,ar6,ar7);
    Class_12b088_m0_0a62cc(ar4 + 0x53c,0xffffffff,ar6,ar7);
    Class_12b0c4_m0_0ab7ac(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12ad50_m0_0a4f54 @ 8c0a4f54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12ad50_m0_0a4f54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12ad50;
    Class_129cbc_m0_0312f4(ar4 + 0x5cc,0xffffffff,ar6,ar7);
    Class_129c24_m0_02ff90(ar4 + 0x530,0xffffffff,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0a5550 @ 8c0a5550 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a5550(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  noop_038c8c(ar4,ar5,ar6,ar7,in_PR);
  uVar1 = 0;
  if (*(int *)(ar4 + 0x330) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x5c))
                      (*(int *)(ar4 + 0x330),ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0a60d4 @ 8c0a60d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a60d4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c285340,free_if_nonnull_wrap_03a3dc,4,9,in_PR);
  return uVar1;
}



/* FUN_8c0a60f8 @ 8c0a60f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a60f8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c285310,free_if_nonnull_wrap_0247b0,4,9,in_PR);
  return uVar1;
}



/* FUN_8c0a611c @ 8c0a611c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a611c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c28528c,free_if_nonnull_wrap_03a3dc,4,9,in_PR);
  return uVar1;
}



/* FUN_8c0a6140 @ 8c0a6140 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a6140(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c28525c,free_if_nonnull_wrap_0247b0,4,9,in_PR);
  return uVar1;
}



/* Class_12b088_m0_0a62cc @ 8c0a62cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b088_m0_0a62cc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b088;
    object_dtor_delete(ar4 + 0x86a,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x861,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x85d,0xffffffff,ar6,ar7);
    ar7_00 = 500;
    ar6_00 = 0x10;
    vec_delete_array(ar4 + 0x8d,Vec3_dtor,0x10,500,ain0);
    ar5_00 = 0;
    Class_129cbc_m0_0312f4(ar4,0,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* Class_12b088_m1_0a6468 @ 8c0a6468 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b088_m1_0a6468(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *a5;
  undefined1 *ar6_00;
  undefined4 uVar2;
  undefined4 in_stack_ffffffa8;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  a5 = ar5;
  Class_129cbc_m1_031598(ar4,ar5,ar6,ar7);
  uVar2 = 1;
  if ((*(int *)(ar4 + 0x21a4) == 2) || (*(int *)(ar4 + 0x2198) != 0)) {
    if (*(int *)(ar4 + 0x2198) != 8) {
      iVar1 = (**(code **)(*(int *)ar5[6] + 0x1a8))((int *)ar5[6],a5,ar6,ar7);
      if ((iVar1 == 1) && (*(int *)(ar4 + 0x124) != 4)) {
        ar7 = *(undefined4 *)(ar5[1] + 4);
        ar6 = ar5[6];
        FUN_8c0aa70c(ar4,*(undefined4 *)ar5[1],ar6,ar7);
        goto LAB_8c0a64f8;
      }
    }
    uVar2 = FUN_8c0a6628(ar4,ar5,ar6,ar7);
    in_stack_ffffffa8 = uVar2;
  }
  else {
    ar7 = *(undefined4 *)(ar5[1] + 4);
    ar6 = ar5[4];
    FUN_8c0a99c4(ar4,*(undefined4 *)ar5[1],ar6,ar7);
  }
LAB_8c0a64f8:
  FUN_8c02f2c0(*ar5,uVar2,ar6,ar7,in_stack_ffffffa8);
  if (*(int *)(ar4 + 0x178) == 1) {
    FUN_8c02f2c0(*ar5,1,ar6,ar7,in_stack_ffffffa8);
  }
  if ((*(int *)(ar4 + 0x2198) == 0) && (*(int *)(ar4 + 0x2198) != 8)) {
    FUN_8c031ab4(ar4,*(undefined4 *)(ar5[1] + 4),ar6,ar7);
  }
  Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_20);
  Vec3_add(auStack_20,ar4 + 0x90,ar6,ar7,auStack_30);
  Vec3_add(auStack_30,ar4 + 0x6c,ar6,ar7,auStack_40);
  Vec3_assign(ar4 + 4,auStack_40,ar6,ar7);
  Vec3_dtor(auStack_40,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
  FUN_8c03f480(*ar5,uVar2,ar6,ar7,auStack_50);
  ar6_00 = auStack_50;
  FUN_8c03220c(ar4,ar5[1],ar6_00,ar7);
  uVar2 = Vec3_dtor(auStack_50,0xffffffff,ar6_00,ar7);
  return uVar2;
}



/* FUN_8c0ab718 @ 8c0ab718 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ab718(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c2858ac,free_if_nonnull_wrap_03a3dc,4,9,in_PR);
  return uVar1;
}



/* FUN_8c0ab73c @ 8c0ab73c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ab73c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c28587c,free_if_nonnull_wrap_0247b0,4,9,in_PR);
  return uVar1;
}



/* Class_12b0c4_m0_0ab7ac @ 8c0ab7ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b0c4_m0_0ab7ac(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b0c4;
    ar5_00 = 0;
    Class_129c70_m0_02f1b8(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0abe84 @ 8c0abe84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0abe84(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  undefined4 ar5_00;
  int *ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13b2ec + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    FUN_8c0ac068(ar4,ar5,ar6,ar7);
    ar5_00 = 1;
    FUN_8c02f404(ar4,1,ar6_00,ar7,iVar2);
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
    FUN_8c0ac1f0(ar4,ar5,ar6_00,ar7);
  }
  else if (iVar1 == 1) {
    FUN_8c02f404(ar4,3,ar6_00,ar7,iVar2);
  }
  else if (iVar1 == 3) {
    iVar2 = FUN_8c02f414(ar4,ar5_00,ar6_00,ar7);
    if ((iVar2 == 1) && (*(int *)(ar4 + 0x88) == 1)) {
      iVar2 = get_field_6c_02f46c(*(undefined4 *)(ar4 + 0x6c),ar5_00,ar6_00,ar7);
      FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),iVar2 + -1,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x88) = 0;
    }
  }
  else if ((iVar1 == 4) &&
          (iVar2 = (**(code **)(*(int *)(*ar6 + 8) + 0xb4))(*ar6,ar5_00,ar6_00,ar7), iVar2 == 1)) {
    iVar2 = *ar6;
    FUN_8c027954(iVar2,ar5_00,ar6_00,ar7);
    FUN_8c0c4e2c(iVar2,ar5_00,ar6_00,ar7);
  }
  return 1;
}



/* FUN_8c0abfb0 @ 8c0abfb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0abfb0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  int in_stack_ffffffe4;
  
  if (*(int *)(ar4 + 0x3c) == 0) {
    ar6_00 = ar6;
    FUN_8c0ac124(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    in_stack_ffffffe4 = *(int *)(ar4 + 0xc);
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13b2ec + in_stack_ffffffe4 * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 6) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0xc) = 0;
      FUN_8c02f404(ar4,0,ar6_00,ar7,in_stack_ffffffe4);
      ar6 = ar6_00;
    }
    else {
      FUN_8c02f404(ar4,3,ar6_00,ar7,in_stack_ffffffe4);
      FUN_8c0ac068(ar4,ar5,ar6,ar7);
    }
  }
  iVar1 = *(int *)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = FUN_8c02f404(ar4,2,ar6,ar7,in_stack_ffffffe4);
  }
  return iVar1;
}



/* CAnimal_m0_0aca4c @ 8c0aca4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int CAnimal_m0_0aca4c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12b110;
    free_if_nonnull_wrap_0153e4(ar4 + 0x9bc,0xffffffff,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0x894,0xffffffff,ar6,ar7);
    Class_12b2ac_m0_0afbcc(ar4 + 0x53c,0xffffffff,ar6,ar7);
    Class_12b2e8_m0_0b5a88(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0af368 @ 8c0af368 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0af368(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_016ac4(ar4 + 0x24,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0af978 @ 8c0af978 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0af978(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c286b1c,free_if_nonnull_wrap_03a3dc,4,3,in_PR);
  return uVar1;
}



/* FUN_8c0af99c @ 8c0af99c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0af99c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c286b04,free_if_nonnull_wrap_0247b0,4,3,in_PR);
  return uVar1;
}



/* FUN_8c0af9c0 @ 8c0af9c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0af9c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c286a94,free_if_nonnull_wrap_03a3dc,4,0x19,in_PR);
  return uVar1;
}



/* FUN_8c0af9e4 @ 8c0af9e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0af9e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c286a24,free_if_nonnull_wrap_0247b0,4,0x19,in_PR);
  return uVar1;
}



/* FUN_8c0afa08 @ 8c0afa08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0afa08(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c285c78,FUN_8c0af368,0x4c,0x28,in_PR);
  return uVar1;
}



/* FUN_8c0afa2c @ 8c0afa2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0afa2c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c285974,FUN_8c0af368,0x4c,10,in_PR);
  return uVar1;
}



/* Class_12b2ac_m0_0afbcc @ 8c0afbcc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b2ac_m0_0afbcc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b2ac;
    Vec3_dtor(ar4 + 0xce,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xc1,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xbd,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xb9,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xb5,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xaf,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_033978(ar4 + 0x92,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x8d,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x89,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_129cbc_m0_0312f4(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12b2e8_m0_0b5a88 @ 8c0b5a88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b2e8_m0_0b5a88(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b2e8;
    ar5_00 = 0;
    Class_129c70_m0_02f1b8(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0b61bc @ 8c0b61bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b61bc(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *ar6_00;
  undefined4 ar6_01;
  
  uVar3 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13bb4c + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    FUN_8c0b63e0(ar4,ar5,ar6,ar7);
    uVar3 = 1;
    FUN_8c02f404(ar4,1,ar6_00,ar7,iVar2);
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_8c02f404(ar4,3,ar6_00,ar7,iVar2);
      FUN_8c02fdd8(ar4,ar5,ar6_00,ar7);
    }
    else if (iVar1 == 2) {
      iVar2 = (**(code **)(*(int *)(*ar6 + 8) + 0xb4))(*ar6,uVar3,ar6_00,ar7);
      if (iVar2 == 1) {
        FUN_8c027954(*ar6,uVar3,ar6_00,ar7);
      }
    }
    else if (iVar1 == 4) {
      iVar2 = FUN_8c02f414(ar4,uVar3,ar6_00,ar7);
      if (iVar2 == 1) {
        if (*(int *)(ar4 + 0x88) == 1) {
          ar6_01 = 0x1b;
          uVar3 = 7;
          FUN_8c0b9ed4(ar6[6],7,0x1b,ar7);
          uVar3 = get_field_6c_02f46c(*(undefined4 *)(ar4 + 0x6c),uVar3,ar6_01,ar7);
          FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),uVar3,ar6_01,ar7);
          *(char *)(ar4 + 0x9c) = *(char *)(ar4 + 0x9c) + '\x01';
          if (*(int *)(ar4 + 0x6c) != 0) {
            (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                      (*(int *)(ar4 + 0x6c),uVar3,ar6_01,ar7);
            *(undefined4 *)(ar4 + 0x6c) = 0;
          }
          *(undefined4 *)(ar4 + 0x88) = 0;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
    }
  }
  return 1;
}



/* FUN_8c0b6328 @ 8c0b6328 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b6328(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  int in_stack_ffffffe4;
  
  if (*(int *)(ar4 + 0x3c) == 0) {
    ar6_00 = ar6;
    FUN_8c0b6440(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    in_stack_ffffffe4 = *(int *)(ar4 + 0xc);
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13bb4c + in_stack_ffffffe4 * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 9) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0xc) = 0;
      FUN_8c02f404(ar4,0,ar6_00,ar7,in_stack_ffffffe4);
      ar6 = ar6_00;
    }
    else {
      FUN_8c02f404(ar4,3,ar6_00,ar7,in_stack_ffffffe4);
      FUN_8c0b63e0(ar4,ar5,ar6,ar7);
    }
  }
  iVar1 = *(int *)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = FUN_8c02f404(ar4,2,ar6,ar7,in_stack_ffffffe4);
  }
  return iVar1;
}



/* FUN_8c0b63e0 @ 8c0b63e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b63e0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 1) {
    iVar1 = FUN_8c0b6604(ar4,ar5,ar6,ar7);
  }
  else if (((iVar1 != 2) && (iVar1 == 4)) && (iVar1 = *(int *)(ar4 + 0x6c), iVar1 == 0)) {
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
    iVar1 = FUN_8c02f404(ar4,2,ar6,ar7,ar5);
  }
  return iVar1;
}



/* FUN_8c0b79f0 @ 8c0b79f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b79f0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_ffffffe8;
  
  FUN_8c0162f8(&stack0xffffffe8,ar5,ar6,ar7);
  ar7_00 = 4;
  ar6_00 = &DAT_8c4365bc;
  FUN_8c016318(&stack0xffffffe8,&DAT_8c43659c,&DAT_8c4365bc,4,in_stack_ffffffe8);
  uVar1 = 0x60;
  FUN_8c015198(&stack0xffffffe8,0x60,ar6_00,ar7_00,in_stack_ffffffe8);
  FUN_8c016340(&stack0xffffffe8,uVar1,ar6_00,ar7_00);
  uVar1 = free_if_nonnull_wrap_0151a0(&stack0xffffffe8,0xffffffff,ar6_00,ar7_00);
  return uVar1;
}



/* FUN_8c0b95a0 @ 8c0b95a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0b95a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *ar5_00;
  undefined4 uVar5;
  undefined4 ar7_00;
  undefined1 *ain0;
  undefined1 *puStack_120;
  int iStack_11c;
  undefined1 auStack_118 [2];
  byte bStack_116;
  undefined1 auStack_10c [2];
  undefined1 auStack_10a [106];
  int iStack_a0;
  undefined1 auStack_1c [20];
  
  uVar5 = ar5;
  iStack_11c = FUN_8c10287c(0x10000,ar5,ar6,ar7);
  if (iStack_11c == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined1 *)FUN_8c10287c(0x3c,uVar5,ar6,ar7);
    puStack_120 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      FUN_8c10289c(&iStack_11c,uVar5,ar6,ar7);
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      ar7_00 = 0;
      uVar5 = 0;
      iVar4 = iStack_11c;
      ain0 = puVar2;
      iVar3 = FUN_8c1f6f20(iStack_11c,puVar2,0,0);
      if (iVar3 != 0) {
        memset(auStack_10c,0,0xf0,ar7_00);
        uVar5 = 10;
        memmove(auStack_1c,ar5,10,ar7_00);
        FUN_8c1f7b64(auStack_1c,auStack_10c,uVar5,ar7_00);
        uVar5 = 10;
        ar5_00 = auStack_10a;
        puVar2 = auStack_1c;
        iVar4 = FUN_8c013ec0(puVar2,ar5_00,10,ar7_00);
        if (iVar4 != 0) {
          FUN_8c1f710c(puVar2,ar5_00,uVar5,ar7_00,ain0);
          FUN_8c10289c(&iStack_11c,ar5_00,uVar5,ar7_00);
          FUN_8c10289c(&puStack_120,ar5_00,uVar5,ar7_00);
          return 0;
        }
        puVar2 = auStack_118;
        FUN_8c1f8300(iStack_a0,puVar2,uVar5,ar7_00);
        uVar1 = (uint)bStack_116;
        iVar4 = iStack_a0;
      }
      FUN_8c1f710c(iVar4,puVar2,uVar5,ar7_00,ain0);
      FUN_8c10289c(&iStack_11c,puVar2,uVar5,ar7_00);
      FUN_8c10289c(&puStack_120,puVar2,uVar5,ar7_00);
    }
  }
  return uVar1;
}



/* FUN_8c0b96e4 @ 8c0b96e4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0b96e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *ar4_00;
  int iVar2;
  int iVar3;
  char *ar4_01;
  uint *ar5_00;
  char *ar5_01;
  undefined4 ar6_00;
  undefined4 ar7_00;
  ushort uVar4;
  uint unaff_r12;
  uint uStack_128;
  uint uStack_124;
  char acStack_120 [2];
  char acStack_11e [102];
  uint uStack_b8;
  uint uStack_a8;
  ushort uStack_a4;
  char acStack_30 [24];
  
  FUN_8c1f8176(acStack_30 + 10,ar5,ar6,ar7);
  FUN_8c1f826c(acStack_30 + 10,&uStack_124,ar6,ar7);
  ar5_00 = &uStack_128;
  FUN_8c1f826c(ar5,ar5_00,ar6,ar7);
  if (uStack_128 < uStack_124) {
    _DAT_8c4365f0 = (char *)malloc_thunk(0x10000,ar5_00,ar6,ar7);
    if (_DAT_8c4365f0 == (char *)0x0) {
      iVar1 = 0xb6;
    }
    else {
      _DAT_8c4365f4 = (char *)malloc_thunk(0x3c,ar5_00,ar6,ar7);
      if (_DAT_8c4365f4 == (char *)0x0) {
        FUN_8c1fb57c(_DAT_8c4365f0,ar5_00,ar6,ar7);
        iVar1 = 0xb6;
      }
      else {
        ar4_00 = (char *)malloc_thunk(0x44c,ar5_00,ar6,ar7);
        if (ar4_00 == (char *)0x0) {
          FUN_8c1fb57c(_DAT_8c4365f0,ar5_00,ar6,ar7);
          FUN_8c1fb57c(_DAT_8c4365f4,ar5_00,ar6,ar7);
          iVar1 = 0xb6;
        }
        else {
          iVar1 = 0xb6;
          ar7_00 = 0;
          ar6_00 = 0;
          ar4_01 = _DAT_8c4365f0;
          ar5_01 = _DAT_8c4365f4;
          iVar2 = FUN_8c1f6f20(_DAT_8c4365f0,_DAT_8c4365f4,0,0);
          if (iVar2 != 0) {
            for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
              acStack_30[iVar2] = ' ';
            }
            uVar4 = 0;
            ar4_01 = ar4_00;
            iVar2 = FUN_8c1f7c40(ar4_00,ar5_01,ar6_00,ar7_00);
            if (iVar2 != 0) {
              for (iVar2 = 0; iVar2 < 100; iVar2 = iVar2 + 1) {
                if (ar4_00[iVar2 * 0xb] != -1) {
                  ar5_01 = acStack_120;
                  ar4_01 = ar4_00 + iVar2 * 0xb;
                  iVar3 = FUN_8c1f7b64(ar4_01,ar5_01,ar6_00,ar7_00);
                  if (iVar3 != 0) {
                    ar6_00 = 10;
                    ar5_01 = acStack_11e;
                    ar4_01 = s_T39401M_8c13c830;
                    iVar3 = FUN_8c013ec0(s_T39401M_8c13c830,ar5_01,10,ar7_00);
                    if (iVar3 != 0) {
                      ar6_00 = 10;
                      ar5_01 = acStack_11e;
                      ar4_01 = s_T30003M_8c13c59a;
                      iVar3 = FUN_8c013ec0(s_T30003M_8c13c59a,ar5_01,10,ar7_00);
                      if (iVar3 != 0) {
                        ar6_00 = 10;
                        ar5_01 = acStack_11e;
                        ar4_01 = s_T30004M_8c13c5a5;
                        iVar3 = FUN_8c013ec0(s_T30004M_8c13c5a5,ar5_01,10,ar7_00);
                        if (iVar3 != 0) {
                          ar6_00 = 10;
                          ar5_01 = acStack_11e;
                          ar4_01 = s_T30005M_8c13c5b0;
                          iVar3 = FUN_8c013ec0(s_T30005M_8c13c5b0,ar5_01,10,ar7_00);
                          if (iVar3 != 0) {
                            ar6_00 = 10;
                            ar5_01 = acStack_11e;
                            ar4_01 = s_T30006M_8c13c5bb;
                            iVar3 = FUN_8c013ec0(s_T30006M_8c13c5bb,ar5_01,10,ar7_00);
                            if ((((iVar3 != 0) && (uStack_a8 < uStack_124)) &&
                                (uStack_128 < uStack_a8)) && (uVar4 < uStack_a4)) {
                              ar6_00 = 10;
                              ar5_01 = acStack_11e;
                              ar4_01 = acStack_30;
                              memmove(ar4_01,ar5_01,10,ar7_00);
                              unaff_r12 = uStack_b8;
                              uVar4 = uStack_a4;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              for (iVar2 = 0; iVar2 < 0xb2; iVar2 = iVar2 + 1) {
                ar6_00 = 10;
                ar5_01 = acStack_30;
                ar4_01 = (char *)(iVar2 * 10 + ar4 + 0xcc);
                iVar3 = FUN_8c013ec0(ar4_01,ar5_01,10,ar7_00);
                if (iVar3 == 0) {
                  iVar1 = iVar2;
                }
              }
              if (iVar1 == 0xb6) {
                if ((unaff_r12 & 0x400) != 0) {
                  iVar1 = 0xb3;
                }
                if ((unaff_r12 & 0x200) != 0) {
                  iVar1 = 0xb4;
                }
                if ((unaff_r12 & 0x100) != 0) {
                  iVar1 = 0xb5;
                }
                if ((unaff_r12 & 0x80) != 0) {
                  iVar1 = 0xb6;
                }
                if ((unaff_r12 & 0x40) != 0) {
                  iVar1 = 0xb7;
                }
                if ((unaff_r12 & 0x20) != 0) {
                  iVar1 = 0xb8;
                }
                if ((unaff_r12 & 0x10) != 0) {
                  iVar1 = 0xb9;
                }
                if ((unaff_r12 & 8) != 0) {
                  iVar1 = 0xba;
                }
                if ((unaff_r12 & 4) != 0) {
                  iVar1 = 0xbb;
                }
                if ((unaff_r12 & 2) != 0) {
                  iVar1 = 0xbc;
                }
                if ((unaff_r12 & 1) != 0) {
                  iVar1 = 0xbd;
                }
              }
            }
          }
          FUN_8c1f710c(ar4_01,ar5_01,ar6_00,ar7_00,ar5);
          FUN_8c1fb57c(_DAT_8c4365f0,ar5_01,ar6_00,ar7_00);
          FUN_8c1fb57c(_DAT_8c4365f4,ar5_01,ar6_00,ar7_00);
          FUN_8c1fb57c(ar4_00,ar5_01,ar6_00,ar7_00);
        }
      }
    }
  }
  else {
    iVar1 = 0xb6;
  }
  return iVar1;
}



/* FUN_8c0ba180 @ 8c0ba180 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba180(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    FUN_8c02441c(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0ba1f4 @ 8c0ba1f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba1f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    FUN_8c0ba234(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0ba234 @ 8c0ba234 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba234(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_016ac4(ar4 + 0x10,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    object_dtor_delete(ar4 + 4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0ba324 @ 8c0ba324 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba324(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0ba34c(ar4,ar5,ar6,ar7,ar5);
  return ar4;
}



/* free_if_nonnull_wrap_0ba8ac @ 8c0ba8ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 *
free_if_nonnull_wrap_0ba8ac(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = &DAT_8c12b36c, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c0ba9c8 @ 8c0ba9c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba9c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12b350_m0_0baa08 @ 8c0baa08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b350_m0_0baa08(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b350;
    FUN_8c0ba9c8(ar4 + 0x56,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0151a0(ar4 + 0x14,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x12,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    free_if_nonnull_wrap_0ba8ac(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0bf0bc @ 8c0bf0bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf0bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0bf0e8(ar4 + 0x13b24,ar5,ar6,ar7,ar4);
  return 4;
}



/* FUN_8c0bf0f0 @ 8c0bf0f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf0f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0bf11c(ar4 + 0x13b70,ar5,ar6,ar7,ar4);
  return 4;
}



/* FUN_8c0bf170 @ 8c0bf170 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf170(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  
  _DAT_8c4362f0 = 0;
  ar6_00 = ar6;
  strcpy(0x8c4362a0,ar5,ar6,ar7,ar5);
  strcpy(0x8c4362c0,ar6,ar6_00,ar7,ar5);
  _DAT_8c43627c = FUN_8c0f8320(0x8c35468c,6,0x8c436280,ar7);
  return _DAT_8c43627c;
}



/* Class_12b334_m0_0bf38c @ 8c0bf38c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b334_m0_0bf38c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b334;
    ar5_00 = 0;
    free_if_nonnull_wrap_0ba8ac(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* s_EPILOG_0bf440 @ 8c0bf440 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_EPILOG_0bf440(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  noop_102824(s_EPILOG_____8c13c990,300,0x1d6,0xd,0xffffffff);
  return 1;
}



/* FUN_8c0c0148 @ 8c0c0148 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c0148(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_10270c(ar4 + 0x28,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0c0188 @ 8c0c0188 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c0188(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c0c02a0(ar4 + 0x4c,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    FUN_8c0c01d8(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0c01d8 @ 8c0c01d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c01d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c0c0224(ar4 + 0x14,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    FUN_8c0c0224(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0c0224 @ 8c0c0224 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c0224(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0;
    free_if_nonnull_wrap_0c0264(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_0c0264 @ 8c0c0264 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 *
free_if_nonnull_wrap_0c0264(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff0;
  
  if (ar4 != (undefined4 *)0x0) {
    ar4[1] = 0;
    *ar4 = 0;
    if (0 < (short)ar5) {
      free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff0 >> 0x10),(short)ar5))
      ;
    }
  }
  return ar4;
}



/* FUN_8c0c02a0 @ 8c0c02a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c02a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 0x19;
    ar6_00 = 0x18;
    ar5_00 = FUN_8c0c02e8;
    vec_delete_array(ar4,FUN_8c0c02e8,0x18,0x19,ain0);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0c02e8 @ 8c0c02e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c02e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    FUN_8c0c0224(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0c0328 @ 8c0c0328 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c0328(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    FUN_8c068818(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0c0368 @ 8c0c0368 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c0368(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c0c0148(ar4 + 0x2e710,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x2e64c,0xffffffff,ar6,ar7);
    FUN_8c0c0188(ar4 + 0x2e3a8,0xffffffff,ar6,ar7);
    FUN_8c0ffc1c(ar4 + 0x2de08,0xffffffff,ar6,ar7);
    FUN_8c0c0328(ar4 + 0x2d59c,0xffffffff,ar6,ar7);
    Class_12b334_m0_0bf38c(ar4 + 0x2d578,0xffffffff,ar6,ar7);
    Class_12b388_m0_0c5928(ar4 + 0x17c,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Class_12b350_m0_0baa08(ar4 + 0xc,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_0c1cec @ 8c0c1cec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0c1cec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c0c23fc @ 8c0c23fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0c23fc(int ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c0bf7c8(ar4 + 0x2e710,ar5,ar6,ar7);
  FUN_8c0c1ce4(ar4 + 0x2e710,ar7,ar6_00,ar7_00,ar5);
  FUN_8c0c1cdc(ar4 + 0x2e710,1,ar6_00,ar7_00,ar5);
  *(undefined4 *)(ar4 + 0x2e75c) = 1;
  strcpy(ar4 + 0x2e740,s4,ar6_00,ar7_00,ar5);
  iVar1 = FUN_8c0bf780(*(undefined4 *)(ar5 + 0x7cc),s4,ar6_00,ar7_00);
  if (iVar1 == 1) {
    ar6 = 0x11;
  }
  return ar6;
}



/* FUN_8c0c412c @ 8c0c412c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0c412c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *ar6_00;
  int iVar2;
  int iVar3;
  int in_stack_ffffffd8;
  
  if (DAT_8c4368b4 == '\0') {
    _DAT_8c4368b0 = 0;
    DAT_8c4368b4 = '\x01';
  }
  if (DAT_8c4368cc == '\0') {
    _DAT_8c4368c8 = 0;
    DAT_8c4368cc = '\x01';
  }
  if (ar5 == 0) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(&DAT_8c4368b8 + iVar2 * 4) = 0xffffff;
    }
  }
  if (ar5 == 1) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(&DAT_8c4368b8 + iVar2 * 4) = 0x7fffffff;
    }
  }
  if (_DAT_8c4368b8 < 0x61000000) {
    if (0xffffff < _DAT_8c4368b8) {
      iVar2 = 0;
      while (iVar3 = iVar2, iVar3 < 4) {
        *(int *)(&DAT_8c4368b8 + iVar3 * 4) = *(int *)(&DAT_8c4368b8 + iVar3 * 4) + -0x1000000;
        in_stack_ffffffd8 = iVar3;
        iVar2 = iVar3 + 1;
      }
    }
  }
  else {
    _DAT_8c4368c8 = _DAT_8c4368c8 + 1;
    if (3 < _DAT_8c4368c8) {
      _DAT_8c4368c8 = 0;
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        *(int *)(&DAT_8c4368b8 + iVar2 * 4) = *(int *)(&DAT_8c4368b8 + iVar2 * 4) + -0x1000000;
      }
    }
  }
  uVar1 = 0xffffff;
  if (0xffffff < _DAT_8c4368b8) {
    FUN_8c01538c(ar4 + 4,ar5,ar6,ar7);
    FUN_8c014a94(ar4 + 4,7,ar6,ar7);
    uVar1 = 4;
    ar6_00 = &DAT_8c4368b8;
    iVar2 = ar4 + 0x330;
    FUN_8c016318(ar4 + 0xc,iVar2,&DAT_8c4368b8,4,in_stack_ffffffd8);
    uVar1 = FUN_8c016340(ar4 + 0xc,iVar2,ar6_00,uVar1);
  }
  return uVar1;
}



/* FUN_8c0c42b0 @ 8c0c42b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c42b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  
  iVar1 = 0;
  if (*(short *)(ar4 + 0x380) != 0) {
    ar7_00 = 4;
    ar6_00 = ar4 + 0x370;
    FUN_8c016318(ar4 + 0xc,ar4 + 0x350,ar6_00,4,in_stack_fffffff4);
    iVar1 = ar4 + 0x174;
    FUN_8c016324(ar4 + 0xc,iVar1,ar6_00,ar7_00);
    FUN_8c01538c(ar4 + 4,iVar1,ar6_00,ar7_00);
    ar5_00 = 8;
    FUN_8c014a94(ar4 + 4,8,ar6_00,ar7_00);
    FUN_8c01636c(ar4 + 0xc,ar5_00,ar6_00,ar7_00);
    *(short *)(ar4 + 0x380) = *(short *)(ar4 + 0x380) + -1;
    iVar1 = (int)*(short *)(ar4 + 0x380);
    if (iVar1 < 0) {
      iVar1 = 0x380;
      *(undefined2 *)(ar4 + 0x380) = 0;
    }
  }
  return iVar1;
}



/* FUN_8c0c491c @ 8c0c491c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c491c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 0xc;
    ar6_00 = 0x80;
    ar5_00 = FUN_8c0ba1f4;
    vec_delete_array(ar4,FUN_8c0ba1f4,0x80,0xc,ain0);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0c4968 @ 8c0c4968 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c4968(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    vec_delete_array(ar4 + 0x2794,FUN_8c0ba180,0xf0,10,ain0);
    vec_delete_array(ar4 + 0x14c4,FUN_8c0ba180,0xf0,0x14,ain0);
    vec_delete_array(ar4 + 0x1ec,FUN_8c0ba180,0xf0,0x14,ain0);
    ar7_00 = 3;
    ar6_00 = 0x10;
    vec_delete_array(ar4 + 0x1bc,Vec3_dtor,0x10,3,ain0);
    ar5_00 = 0xffffffff;
    FUN_8c0ba180(ar4 + 0xb0,0xffffffff,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_0c4a14 @ 8c0c4a14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0c4a14(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c0c4a44 @ 8c0c4a44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c4a44(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 0x96;
    ar6_00 = 0x5c;
    ar5_00 = FUN_8c0c4a90;
    vec_delete_array(ar4,FUN_8c0c4a90,0x5c,0x96,ain0);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0c4a90 @ 8c0c4a90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c4a90(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    FUN_8c0c4ad0(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0c4ad0 @ 8c0c4ad0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c4ad0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c0c4b3c(ar4 + 0x2c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x18,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 8,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    free_if_nonnull_wrap_0c0264(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0c4b3c @ 8c0c4b3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0c4b3c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12984c;
    ar5_00 = 0;
    free_if_nonnull_wrap_015c94(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0c4b84 @ 8c0c4b84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c4b84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_0153e4(ar4 + 700,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0151a0(ar4 + 0x1ac,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x1a4,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x19c,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x194,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0151a0(ar4 + 0x20,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0151a0(ar4 + 0xc,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0153e4(ar4 + 4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0c4c3c @ 8c0c4c3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0c4c3c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c286e8c,free_if_nonnull_wrap_03a3dc,4,9,in_PR);
  return uVar1;
}



/* FUN_8c0c4c60 @ 8c0c4c60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0c4c60(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c286e5c,free_if_nonnull_wrap_0247b0,4,9,in_PR);
  return uVar1;
}



/* FUN_8c0c4da0 @ 8c0c4da0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0c4da0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0c4dc8(ar5,*(undefined4 *)(ar4 + 0x24),ar6,ar7,ar4);
  return ar5;
}



/* free_if_nonnull_wrap_0c58f8 @ 8c0c58f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0c58f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* Class_12b388_m0_0c5928 @ 8c0c5928 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b388_m0_0c5928(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b388;
    free_if_nonnull_wrap_0153e4(ar4 + 0xb4fd,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0xb4ec,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0c58f8(ar4 + 0xb46c,0xffffffff,ar6,ar7);
    Class_12b3b8_m0_0e77ec(ar4 + 0xb32b,0xffffffff,ar6,ar7);
    Class_12b580_m0_0e61f4(ar4 + 0x9226,0xffffffff,ar6,ar7);
    Class_12b758_m0_0e46cc(ar4 + 0x8ca8,0xffffffff,ar6,ar7);
    Class_12b930_m0_0dde84(ar4 + 6,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    free_if_nonnull_wrap_0ba8ac(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0c5cb4 @ 8c0c5cb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0c5cb4(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int ar5_01;
  undefined4 in_stack_ffffffe8;
  int aiStack_10 [2];
  
  aiStack_10[0] = 0;
  ar5_00 = 0;
  FUN_8c0c412c(&DAT_8c2b5628,0,ar6,ar7);
  FUN_8c016340(0x8c431294,ar5_00,ar6,ar7);
  uVar1 = 0x8c35468c;
  FUN_8c0f8134(0x8c35468c,ar5_00,ar6,ar7);
  FUN_8c2565c4(uVar1,ar5_00,ar6,ar7,in_stack_ffffffe8);
  FUN_8c258e0a(0,ar5_00,ar6,ar7,in_stack_ffffffe8);
  FUN_8c0fef10(*(undefined4 *)(ar5 + 2000),ar5_00,ar6,ar7);
  aiStack_10[0] = FUN_8c0c5db0(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  if (aiStack_10[0] != 0) {
    ar5_00 = 1;
    FUN_8c0d1b90(aiStack_10,1,ar6,ar7);
  }
  FUN_8c0b936c(ar5,ar5_00,ar6,ar7);
  uVar1 = ar4;
  ar5_01 = ar5;
  FUN_8c0c75f4(ar4,ar5,ar6,ar7);
  FUN_8c0f7ea0(uVar1,ar5_01,ar6,ar7);
  FUN_8c0ce920(ar4,ar5_01,ar6,ar7);
  *(int *)(ar5 + 0x7e0) = *(int *)(ar5 + 0x7e0) + 1;
  *(undefined4 *)(ar5 + 0x7dc) = 0;
  return 0x7dc;
}



/* FUN_8c0c8480 @ 8c0c8480 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0c8480(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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



/* s_BUGBOX_3_0c8762 @ 8c0c8758 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_BUGBOX_3_0c8762(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 in_stack_ffffff84;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [36];
  
  iVar2 = ar5;
  FUN_8c0c84cc(auStack_38,ar5,ar6,ar7);
  uVar6 = 1;
  Vec3_ctor_zero(auStack_48,iVar2,ar6,ar7);
  puVar5 = auStack_38;
  iVar2 = ar5;
  (**(code **)(**(int **)(ar4 + 8) + 0xc))(*(int **)(ar4 + 8),ar5,puVar5,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0xb0))(*(int **)(ar4 + 8),iVar2,puVar5,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x30))(*(int **)(ar4 + 8),iVar2,puVar5,ar7);
  sVar1 = *(short *)(ar4 + 0x2d1ac);
  if (sVar1 == 0) {
    _DAT_8c436a18 = 0;
    _DAT_8c436a14 = 0;
    _DAT_8c436a10 = 0;
    _DAT_8c436a0c = 0;
    ar7 = 4;
    puVar5 = &DAT_8c436a0c;
    FUN_8c016318(0x8c436978,&DAT_8c4369ec,&DAT_8c436a0c,4,in_stack_ffffff84);
    iVar2 = 0x60;
    FUN_8c015198(0x8c436978,0x60,puVar5,ar7,in_stack_ffffff84);
    FUN_8c0c51c4(*(undefined4 *)(ar5 + 0x7cc),iVar2,puVar5,ar7);
    *(undefined2 *)(ar4 + 0x2d1ac) = 1;
  }
  else if (sVar1 == 1) {
    if (_DAT_8c436a0c < 0xfc000000) {
      for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
        *(int *)(&DAT_8c436a0c + iVar3 * 4) = *(int *)(&DAT_8c436a0c + iVar3 * 4) + 0x3000000;
      }
    }
    else {
      iVar2 = pack_acquire_entry_handle(0x8c2b59d0,s_BUGBOX_3_8c13d1a9,puVar5,ar7);
      ar7 = 0;
      puVar5 = (undefined1 *)0x0;
      DAT_8c13cbf4 = iVar2;
      FUN_8c021d90(0x8c2b59d0,iVar2,0,0);
      *(undefined2 *)(ar4 + 0x2d1ac) = 2;
    }
  }
  else if (sVar1 == 2) {
    (**(code **)(**(int **)(ar4 + 8) + 0x78))(*(int **)(ar4 + 8),0,puVar5,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x9c))(*(int **)(ar4 + 8),0,puVar5,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x18))(*(int **)(ar4 + 0xc),0x8c3eb334,puVar5,ar7);
    iVar2 = s_Shell_0fef9c(0x8c3eb324,0xe,0x1b,ar7);
    (**(code **)(*(int *)(iVar2 + 8) + 0xe0))(iVar2,0x8c3eb334,0,ar7);
    uVar6 = 1;
    puVar5 = auStack_48;
    (**(code **)(*(int *)(iVar2 + 8) + 0x150))(iVar2,puVar5,1,ar7);
    FUN_8c036988(iVar2,puVar5,uVar6,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar2,uVar6,ar7);
    iVar2 = s_Shell_0fef9c(0x8c3eb324,0xe,0x1b,ar7);
    (**(code **)(*(int *)(iVar2 + 8) + 0xe0))(iVar2,0x8c3eb334,0,ar7);
    uVar6 = 1;
    puVar5 = auStack_48;
    (**(code **)(*(int *)(iVar2 + 8) + 0x150))(iVar2,puVar5,1,ar7);
    FUN_8c036988(iVar2,puVar5,uVar6,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar2,uVar6,ar7);
    iVar3 = s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7);
    uVar4 = 0;
    uVar6 = 0x8c3eb334;
    (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3,0x8c3eb334,0,ar7);
    (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3,uVar6,uVar4,ar7);
    iVar2 = ar5;
    (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3,ar5,uVar4,ar7);
    FUN_8c036988(iVar3,iVar2,uVar4,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar3,uVar4,ar7);
    iVar3 = s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7);
    uVar4 = 0;
    uVar6 = 0x8c3eb334;
    (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3,0x8c3eb334,0,ar7);
    (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3,uVar6,uVar4,ar7);
    iVar2 = ar5;
    (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3,ar5,uVar4,ar7);
    FUN_8c036988(iVar3,iVar2,uVar4,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar3,uVar4,ar7);
    iVar3 = s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7);
    uVar4 = 0;
    uVar6 = 0x8c3eb334;
    (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3,0x8c3eb334,0,ar7);
    (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3,uVar6,uVar4,ar7);
    iVar2 = ar5;
    (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3,ar5,uVar4,ar7);
    FUN_8c036988(iVar3,iVar2,uVar4,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar3,uVar4,ar7);
    iVar3 = s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7);
    puVar5 = (undefined1 *)0x0;
    uVar6 = 0x8c3eb334;
    (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3,0x8c3eb334,0,ar7);
    (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3,uVar6,puVar5,ar7);
    iVar2 = ar5;
    (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3,ar5,puVar5,ar7);
    FUN_8c036988(iVar3,iVar2,puVar5,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar3,puVar5,ar7);
    FUN_8c0c51b8(*(undefined4 *)(ar5 + 0x7cc),1,puVar5,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x98))(*(int **)(ar4 + 0xc),0,puVar5,ar7);
    iVar2 = 0;
    (**(code **)(**(int **)(ar4 + 0xc) + 0x70))(*(int **)(ar4 + 0xc),0,puVar5,ar7);
    *(undefined2 *)(ar4 + 0x2d1ac) = 3;
    uVar6 = 0;
  }
  if (_DAT_8c436a0c != 0) {
    FUN_8c016340(0x8c436978,iVar2,puVar5,ar7);
  }
  Vec3_dtor(auStack_48,0xffffffff,puVar5,ar7);
  FUN_8c0c8480(auStack_38,0xffffffff,puVar5,ar7);
  return uVar6;
}



/* s_GRAPHICS_ENV_0ca2d4 @ 8c0ca2cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0ca2d4(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_1c;
  undefined4 auStack_18 [2];
  
  uVar4 = 2;
  auStack_18[0] = 0;
  uStack_1c = 0;
  iVar1 = *(int *)(ar5 + 4);
  if (iVar1 == 0) {
    puVar3 = auStack_18;
    pcVar2 = s_GRAPHICS_ENV_8c13d1c2;
    iVar1 = FUN_8c0209b0(0x8c3eb334,s_uzu_nj_8c13d1bb,s_GRAPHICS_ENV_8c13d1c2,puVar3);
    if (iVar1 == 1) {
      FUN_8c015ad4(0x8c437030,auStack_18[0],pcVar2,puVar3,ar4);
      *(undefined4 *)(ar5 + 4) = 1;
    }
    else if (iVar1 == 0) {
      report_error_message(s_uzu_nj_8c13d1bb,s_Failed_NJCM_CGame__LoadForEvent1_8c13d1f0,0,2);
    }
  }
  else if (iVar1 == 1) {
    puVar3 = &uStack_1c;
    pcVar2 = s_GRAPHICS_ENV_8c13d1c2;
    iVar1 = FUN_8c020aa8(0x8c3eb334,s_uzu_nj_8c13d1bb,s_GRAPHICS_ENV_8c13d1c2,puVar3);
    if (iVar1 == 1) {
      Class_129920_m0_015248(0x8c437028,uStack_1c,pcVar2,puVar3,ar4);
      *(undefined4 *)(ar5 + 4) = 2;
    }
    else if (iVar1 == 0) {
      report_error_message(s_uzu_nj_8c13d1bb,s_Failed_NJTL_CGame__LoadForEvent1_8c13d219,0,2);
    }
  }
  else if (iVar1 == 2) {
    ar7_00 = get_field_4_0253e4(0x8c437028,ar5,ar6,ar7);
    iVar1 = FUN_8c020e80(0x8c3eb334,s_SCREW_8c13d242,s_GRAPHICS_ENV_8c13d1c2,ar7_00);
    if (iVar1 == 1) {
      *(undefined4 *)(ar5 + 4) = 3;
      uVar4 = 4;
    }
    else if (iVar1 == 0) {
      report_error_message(s_SCREW_8c13d242,s_Failed_NJTL_CGame__LoadForEvent1_8c13d219,0,2);
    }
  }
  return uVar4;
}



/* FUN_8c0cb220 @ 8c0cb220 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0cb220(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *a4;
  undefined4 ar4_00;
  undefined4 in_PR;
  
  a4 = *(int **)(ar4 + 8);
  (**(code **)(*a4 + 0x44))(a4,ar5,ar6,ar7);
  FUN_8c219070(a4,ar5,ar6,ar7);
  ar4_00 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c019058(ar4_00,ar5,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x10) + 0x28))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
  FUN_8c256210(1,ar5,ar6,ar7);
  return 0;
}



/* FUN_8c0cb29c @ 8c0cb29c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0cb29c(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  undefined1 *ar7_00;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  iVar1 = ar5;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_38,iVar1,ar6,ar7);
  while (iVar1 = (**(code **)(**(int **)(ar4 + 8) + 0x11c))(*(int **)(ar4 + 8),5,ar6,ar7),
        iVar1 != 0) {
    ar6 = iVar1 + -1;
    uVar4 = (**(code **)(**(int **)(ar4 + 8) + 0x100))(*(int **)(ar4 + 8),5,ar6,ar7);
    uVar3 = uVar4;
    (**(code **)(**(int **)(ar4 + 8) + 0x5c))(*(int **)(ar4 + 8),uVar4,ar6,ar7);
    FUN_8c02f670(uVar4,uVar3,ar6,ar7,auStack_48);
    Vec3_assign(auStack_38,auStack_48,ar6,ar7);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
    FUN_8c036988(uVar4,uVar3,ar6,ar7);
    (**(code **)(**(int **)(ar4 + 0x10) + 0x4c))(*(int **)(ar4 + 0x10),uVar4,ar6,ar7);
  }
  (**(code **)(**(int **)(ar4 + 8) + 0x78))(*(int **)(ar4 + 8),2,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x9c))(*(int **)(ar4 + 8),2,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x1b0))(*(int **)(ar4 + 8),1,ar6,ar7);
  ar6_00 = 2;
  (**(code **)(**(int **)(ar4 + 8) + 0x1b4))(*(int **)(ar4 + 8),0x8c3eb334,2,ar7);
  uVar3 = 2;
  FUN_8c0c51b8(*(undefined4 *)(ar5 + 0x7cc),2,ar6_00,ar7);
  FUN_8c0c51c4(*(undefined4 *)(ar5 + 0x7cc),uVar3,ar6_00,ar7);
  uVar3 = 0x8c3eb334;
  (**(code **)(**(int **)(ar4 + 0x10) + 0x94))(*(int **)(ar4 + 0x10),0x8c3eb334,ar6_00,ar7);
  uVar3 = (**(code **)(**(int **)(ar4 + 0x10) + 0x14c))(*(int **)(ar4 + 0x10),uVar3,ar6_00,ar7);
  uVar4 = 0x8c3eb334;
  s_GRAPHICS_ENV_0d819c(uVar3,0x8c3eb334,ar6_00,ar7);
  noop_0d8458(uVar3,uVar4,ar6_00,ar7,iVar1);
  (**(code **)(**(int **)(ar4 + 0x10) + 0x70))(*(int **)(ar4 + 0x10),3,ar6_00,ar7);
  ar7_00 = auStack_20;
  ar6_01 = auStack_24;
  puVar2 = auStack_28;
  FUN_8c0cb1e0(0x8c436f4c,puVar2,ar6_01,ar7_00);
  FUN_8c019560(0x8c436f4c,puVar2,ar6_01,ar7_00);
  Class_129a24_m1_019b68(0x8c436f4c,puVar2,ar6_01,ar7_00);
  (**(code **)(**(int **)(ar4 + 0x10) + 0x28))(*(int **)(ar4 + 0x10),puVar2,ar6_01,ar7_00);
  (**(code **)(**(int **)(ar4 + 0x10) + 0xb4))(*(int **)(ar4 + 0x10),puVar2,ar6_01,ar7_00);
  uVar3 = 0x8c3eb334;
  puVar2 = &DAT_8c436a28;
  s_GRAPHICS_MESSAGE_0cef1c(&DAT_8c436a28,0x8c3eb334,ar6_01,ar7_00);
  *(undefined1 *)(ar5 + 0xa0) = 3;
  *(undefined4 *)(ar4 + 0x2d160) = 0;
  *(undefined4 *)(ar4 + 0x2d15c) = 2;
  FUN_8c0c4e2c(puVar2,uVar3,ar6_01,ar7_00);
  FUN_8c0c4e48(puVar2,uVar3,ar6_01,ar7_00);
  Vec3_dtor(auStack_38,0xffffffff,ar6_01,ar7_00);
  Vec3_dtor(auStack_28,0xffffffff,ar6_01,ar7_00);
  return 0;
}



/* FUN_8c0cee98 @ 8c0cee98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0cee98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0ceed8 @ 8c0ceed8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ceed8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_0cfe48 @ 8c0cfe48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0cfe48(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c0cfe78 @ 8c0cfe78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0cfe78(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    object_dtor_delete(ar4 + 0xc,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0cfed8 @ 8c0cfed8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0cfed8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_0151a0(ar4 + 0x3cc,0xffffffff,ar6,ar7);
    uVar2 = 0x19;
    uVar1 = 0x18;
    vec_delete_array(ar4 + 0x174,FUN_8c0cee98,0x18,0x19,ain0);
    free_if_nonnull_wrap_0151a0(ar4 + 0x160,0xffffffff,uVar1,uVar2);
    free_if_nonnull_wrap_0153e4(ar4 + 0x158,0xffffffff,uVar1,uVar2);
    uVar2 = 0x10;
    uVar1 = 0x14;
    ar5_00 = FUN_8c0ceed8;
    vec_delete_array(ar4 + 4,FUN_8c0ceed8,0x14,0x10,ain0);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,uVar1,uVar2,ain0);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_0cffc8 @ 8c0cffc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0cffc8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* s_GRAPHICS_ENV_0d0006 @ 8c0cfff8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_ENV_0d0006(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar7_00;
  undefined4 ar5_00;
  char *ar6_00;
  undefined4 *ar7_01;
  uint uVar2;
  undefined4 in_stack_ffffffb8;
  undefined4 uStack_28;
  undefined4 auStack_24 [2];
  
  auStack_24[0] = 0;
  uStack_28 = 0;
  iVar1 = FUN_8c0209fc(ar5,s_suisou_Heater_nj_8c13d46c,s_GRAPHICS_ENV_8c13d47d,auStack_24);
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_Heater_nj_8c13d46c,s_Failed_NJCM_CHeater__CreateModel_8c13d48a,1,2);
  }
  ar7_01 = &uStack_28;
  ar6_00 = s_GRAPHICS_ENV_8c13d47d;
  iVar1 = FUN_8c020af4(ar5,s_suisou_Heater_nj_8c13d46c,s_GRAPHICS_ENV_8c13d47d,ar7_01);
  if (iVar1 == 0) {
    ar7_01 = (undefined4 *)0x2;
    ar6_00 = (char *)0x1;
    report_error_message
              (s_suisou_Heater_nj_8c13d46c,s_Failed_NJTL_CHeater__CreateModel_8c13d4ad,1,2);
  }
  FUN_8c015ad4(ar4 + 2,auStack_24[0],ar6_00,ar7_01,in_stack_ffffffb8);
  ar5_00 = uStack_28;
  (**(code **)(*ar4 + 8))(ar4,uStack_28,ar6_00,ar7_01);
  ar7_00 = (int *)get_field_4_0253e4(ar4,ar5_00,ar6_00,ar7_01);
  iVar1 = FUN_8c015bb8(ar4 + 2,ar5_00,ar6_00,ar7_01);
  iVar1 = thunk_FUN_8c0151e8(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),0x17,ar6_00,ar7_01);
  ar4[8] = iVar1 + 4;
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x80000000;
  }
  iVar1 = FUN_8c020ef0(ar5,s_HEATER_8c13d4d0,s_GRAPHICS_ENV_8c13d47d,ar7_00);
  if (iVar1 == -1) {
    iVar1 = report_error_message(s_Failed_to_load_water_tank_textue_8c13d4d7,&DAT_8c13d4fb,1,2);
  }
  return iVar1;
}



/* FUN_8c0d0564 @ 8c0d0564 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0564(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c019058(uVar1,ar5,ar6,ar7);
  FUN_8c01538c(ar4,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 8,ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d05d0 @ 8c0d05d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d05d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c019058(uVar1,ar5,ar6,ar7);
  FUN_8c01538c(ar4,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 8,ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}



/* s_GRAPHICS_ENV_0d07f2 @ 8c0d07ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_ENV_0d07f2(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar7_00;
  int iVar1;
  undefined **ar5_00;
  uint uVar2;
  
  FUN_8c015ad4(ar4 + 2,&DAT_8c13d9d8,ar6,ar7,ar5);
  ar5_00 = &PTR_PTR_8c13d570;
  (**(code **)(*ar4 + 8))(ar4,&PTR_PTR_8c13d570,ar6,ar7);
  ar7_00 = (int *)get_field_4_0253e4(ar4,ar5_00,ar6,ar7);
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x80000000;
  }
  iVar1 = FUN_8c020ef0(ar5,s_O2SUPPLY_8c13d4fc,s_GRAPHICS_ENV_8c13d47d,ar7_00);
  if (iVar1 == -1) {
    iVar1 = report_error_message(s_Failed_to_load_o2_supply_textuer_8c13d505,&DAT_8c13d4fb,1,2);
  }
  return iVar1;
}



/* FUN_8c0d092c @ 8c0d092c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d092c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c019058(uVar1,ar5,ar6,ar7);
  FUN_8c01538c(ar4,ar5,ar6,ar7);
  FUN_8c015af8(ar4 + 8,ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d0990 @ 8c0d0990 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0990(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c019058(uVar1,ar5,ar6,ar7);
  FUN_8c01538c(ar4,ar5,ar6,ar7);
  FUN_8c015af8(ar4 + 8,ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d0abc @ 8c0d0abc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d0abc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = 0x8c1297f4;
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 0x15,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* s_GRAPHICS_ENV_0d0bd2 @ 8c0d0bcc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d0bd2(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar7_00;
  int iVar1;
  undefined **ar5_00;
  char *ar5_01;
  char *ar6_00;
  uint uVar2;
  
  FUN_8c015ad4(ar4 + 2,&DAT_8c13d9d8,ar6,ar7,ar5);
  ar5_00 = &PTR_PTR_8c13d570;
  (**(code **)(*ar4 + 8))(ar4,&PTR_PTR_8c13d570,ar6,ar7);
  ar7_00 = (int *)get_field_4_0253e4(ar4,ar5_00,ar6,ar7);
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x80000000;
  }
  ar6_00 = s_GRAPHICS_ENV_8c13d47d;
  ar5_01 = s_SPRINKLER_8c13d528;
  iVar1 = FUN_8c020ef0(ar5,s_SPRINKLER_8c13d528,s_GRAPHICS_ENV_8c13d47d,ar7_00);
  if (iVar1 == -1) {
    ar7_00 = (int *)0x2;
    ar6_00 = (char *)0x1;
    ar5_01 = &DAT_8c13d4fb;
    report_error_message(s_Failed_to_load_sprinkler_textuer_8c13d532,&DAT_8c13d4fb,1,2);
  }
  for (uVar2 = 0; uVar2 < 0x15e; uVar2 = uVar2 + 1) {
    FUN_8c014cd4(ar4 + uVar2 * 0x2b + 3,ar5_01,ar6_00,ar7_00);
    ar5_01 = (char *)0x1;
    FUN_8c0d0d0c(ar4 + uVar2 * 0x2b + 3,1,ar6_00,ar7_00);
    FUN_8c0d0ab4(ar4 + uVar2 * 0x2b + 3,ar5_01,ar6_00,ar7_00,ar5);
  }
  return 0x15e;
}



/* s_GRAPHICS_ENV_0d1fa0 @ 8c0d1fa0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_ENV_0d1fa0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar7_00;
  int iVar1;
  undefined **ar5_00;
  
  ar5_00 = &PTR_PTR_8c13f33c;
  Class_129920_m0_015248(0x8c4377f4,&PTR_PTR_8c13f33c,ar6,ar7,ar4);
  ar7_00 = get_field_4_0253e4(0x8c4377f4,ar5_00,ar6,ar7);
  iVar1 = FUN_8c020ef0(ar4,s_DEVICE_PANEL_8c13f8be,s_GRAPHICS_ENV_8c13f8cb,ar7_00);
  if (iVar1 == 0) {
    iVar1 = report_error_message
                      (s_Failed_to_load_device_panel_text_8c13f8d8,
                       s_CEnv__LoadDevicePanelTexture___8c13f8fe,0,2);
  }
  return iVar1;
}



/* FUN_8c0d2264 @ 8c0d2264 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d2264(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 ar4_00;
  int ar4_01;
  undefined4 uVar3;
  
  uVar2 = ar6;
  uVar3 = ar5;
  piVar1 = (int *)get_field_4_0253e4(ar5,ar5,ar6,ar7);
  ar4_00 = 0;
  FUN_8c256328(0,ar5,uVar2,ar7,uVar3);
  FUN_8c019058(ar4_00,ar5,uVar2,ar7);
  uVar3 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8) = uVar3;
  uVar3 = *(undefined4 *)(*piVar1 + 0xf8);
  *(undefined4 *)(*piVar1 + 0xf8) =
       *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8);
  *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8) = uVar3;
  uVar3 = *(undefined4 *)(*piVar1 + 0x1e8);
  ar4_01 = *piVar1;
  *(undefined4 *)(ar4_01 + 0x1e8) =
       *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8);
  *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8) = uVar3;
  FUN_8c019198(ar4_01,ar5,uVar2,ar7);
  FUN_8c015adc(ar6,ar5,uVar2,ar7);
  uVar3 = *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = uVar3;
  uVar3 = *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8);
  *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8) =
       *(undefined4 *)(*piVar1 + 0xf8);
  *(undefined4 *)(*piVar1 + 0xf8) = uVar3;
  uVar3 = *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8);
  *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8) =
       *(undefined4 *)(*piVar1 + 0x1e8);
  *(undefined4 *)(*piVar1 + 0x1e8) = uVar3;
  uVar2 = FUN_8c256210(1,ar5,uVar2,ar7);
  return uVar2;
}



/* FUN_8c0d2478 @ 8c0d2478 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d2478(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar6_00;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = ar5;
  uVar4 = ar7;
  uVar5 = ar6;
  piVar1 = (int *)get_field_4_0253e4(ar5,ar5,ar6,ar7);
  uVar2 = 0;
  FUN_8c256328(0,uVar3,ar6,uVar4,uVar5);
  FUN_8c019058(uVar2,uVar3,ar6,uVar4);
  uVar4 = 4;
  ar6_00 = ar4 + 0x2c;
  uVar3 = ar7;
  FUN_8c016464(ar7,uVar5,ar6_00,4);
  uVar2 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8) = uVar2;
  FUN_8c019198(uVar3,uVar5,ar6_00,uVar4);
  uVar3 = 0;
  FUN_8c014a94(ar5,0,ar6_00,uVar4);
  FUN_8c016524(ar7,uVar3,ar6_00,uVar4);
  uVar5 = *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = uVar5;
  uVar3 = FUN_8c256210(1,uVar3,ar6_00,uVar4);
  return uVar3;
}



/* FUN_8c0d261c @ 8c0d261c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d261c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 uVar1;
  undefined4 ar4_00;
  
  uVar1 = ar6;
  ar4_00 = ar5;
  FUN_8c0d2f14(ar4,ar5,ar6,ar7);
  ar5_00 = get_field_4_0253e4(ar4_00,ar5,uVar1,ar7);
  FUN_8c015ccc(ar4 + 0x48,ar5_00,uVar1,ar7,ar4_00);
  FUN_8c015cd4(ar4 + 0x48,ar6,uVar1,ar7,ar4_00);
  uVar1 = FUN_8c0d267c(ar4 + 0x48,ar6,uVar1,ar7);
  return uVar1;
}



/* FUN_8c0d3304 @ 8c0d3304 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d3304(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c0c4b3c(ar4 + 0x48,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x28,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x18,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0d336c @ 8c0d336c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d336c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_016ac4(ar4 + 0x10,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* s_GRAPHICS_ENV_0d39ea @ 8c0d39e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d39ea(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  char *ar6_00;
  undefined4 a7;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_1c = DAT_8c13f4e8;
  uStack_18 = DAT_8c13f4ec;
  uStack_14 = DAT_8c13f4f0;
  FUN_8c21279c(0,&uStack_1c,ar4 + 0x5d8,ar7,ar6);
  for (iVar3 = 0; iVar3 < 0x19; iVar3 = iVar3 + 1) {
    *(uint *)(iVar3 * 0xc + -0x73bc8950) = *(uint *)(iVar3 * 0xc + -0x73bc8950) | 0x80000000;
  }
  a7 = 0x19;
  uVar2 = 0x8c4312a8;
  FUN_8c239170(0x8c4376a4,0x8c4376ac,0x8c4312a8,0x19);
  uVar1 = 0x8c4376a4;
  (**(code **)(*(int *)(ar4 + 8) + 8))((int *)(ar4 + 8),0x8c4376a4,uVar2,a7);
  uVar1 = get_field_4_0253e4(ar4 + 8,uVar1,uVar2,a7);
  iVar3 = FUN_8c02100c(ar5,ar6,s_GRAPHICS_ENV_8c13f8cb,uVar1);
  if (iVar3 == 0) {
    report_error_message
              (s_Failed_to_load_water_face_textue_8c13fab9,s_WE__CreateStageC___8c13fadd,0,2);
  }
  for (iVar3 = 0; iVar3 < 0x3c; iVar3 = iVar3 + 1) {
    *(uint *)(iVar3 * 0xc + ar4 + 0x164) = *(uint *)(iVar3 * 0xc + ar4 + 0x164) | 0x80000000;
  }
  uVar2 = 0x3c;
  uVar1 = 0x8c4312a8;
  FUN_8c239170(ar4 + 0x158,ar4 + 0x160,0x8c4312a8,0x3c);
  iVar3 = ar4 + 0x158;
  (**(code **)(*(int *)(ar4 + 0x108) + 8))((int *)(ar4 + 0x108),iVar3,uVar1,uVar2);
  uVar1 = get_field_4_0253e4(ar4 + 0x108,iVar3,uVar1,uVar2);
  ar6_00 = s_GRAPHICS_ENV_8c13f8cb;
  iVar3 = FUN_8c02100c(ar5,s_hamon_pvm_8c13faf0,s_GRAPHICS_ENV_8c13f8cb,uVar1);
  if (iVar3 == 0) {
    uVar1 = 2;
    ar6_00 = (char *)0x0;
    report_error_message
              (s_Failed_to_load_hamon_textuer___8c13fafa,s_WE__CreateStageC___8c13fadd,0,2);
  }
  ar5_00 = &DAT_8c13f164;
  FUN_8c015ad4(ar4 + 0x154,&DAT_8c13f164,ar6_00,uVar1,ar6);
  iVar3 = FUN_8c015bb8(ar4 + 0x1c,ar5_00,ar6_00,uVar1);
  uVar2 = FUN_8c0151fc(*(undefined4 *)(*(int *)(iVar3 + 4) + 4),ar5_00,ar6_00,uVar1);
  *(undefined4 *)(ar4 + 0x2c) = uVar2;
  FUN_8c0d5de0(ar4,ar5_00,ar6_00,uVar1);
  return 1;
}



/* FUN_8c0d4038 @ 8c0d4038 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d4038(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = ar5;
  FUN_8c0d4bdc(ar4,ar5,ar6,ar7);
  piVar1 = (int *)get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7);
  uVar3 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = uVar3;
  FUN_8c01538c(ar4 + 8,ar5,ar6,ar7);
  uVar3 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,uVar4);
  FUN_8c019058(uVar3,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x10,ar5,ar6,ar7);
  FUN_8c256210(1,ar5,ar6,ar7);
  uVar4 = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 8) = uVar4;
  return iVar2;
}



/* s_GRAPHICS_ENV_0d57ee @ 8c0d57e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d57ee(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  undefined4 ar5_01;
  char *pcVar3;
  undefined4 in_stack_ffffffdc;
  undefined4 auStack_14 [2];
  
  uVar2 = CONCAT31((int3)((uint)in_stack_ffffffdc >> 8),(char)ar6);
  auStack_14[0] = 0;
  ar5_00 = ar5;
  while( true ) {
    iVar1 = get_field_d0_0d3f70(ar4 + 0x34,ar5_00,ar6,ar7);
    if (iVar1 == 0) break;
    iVar1 = get_field_d0_0d3f70(ar4 + 0x34,ar5_00,ar6,ar7);
    auStack_14[0] = s_CWaterSnowList_GetWaterSnowO_0fe76c(ar4 + 0x34,iVar1 + -1,ar6,ar7);
    s_CWaterSnowList_TakeOut_0fe694(ar4 + 0x34,auStack_14[0],ar6,ar7);
    ar5_00 = auStack_14;
    FUN_8c0fec4c(0x8c3e7d30,ar5_00,ar6,ar7);
  }
  FUN_8c0fe7f4(ar4 + 0x34,ar5_00,ar6,ar7);
  if ((char)uVar2 == '\x02') {
    FUN_8c020a70(ar5,s_suisou_WaterFace_small_nj_8c13fa0c,s_GRAPHICS_ENV_8c13f8cb,ar4);
    pcVar3 = s_GRAPHICS_ENV_8c13f8cb;
    iVar1 = ar4;
    FUN_8c020b68(ar5,s_suisou_WaterFace_small_nj_8c13fa0c,s_GRAPHICS_ENV_8c13f8cb,ar4);
    FUN_8c015ad4(ar4 + 0x10,0,pcVar3,iVar1,uVar2);
    FUN_8c020a70(ar5,s_suisou_Effect_small_nj_8c13fa7a,s_GRAPHICS_ENV_8c13f8cb,ar4);
    pcVar3 = s_GRAPHICS_ENV_8c13f8cb;
    iVar1 = ar4;
    FUN_8c020b68(ar5,s_suisou_Effect_small_nj_8c13fa7a,s_GRAPHICS_ENV_8c13f8cb,ar4);
    uVar2 = FUN_8c015ad4(ar4 + 0x1c,0,pcVar3,iVar1,uVar2);
  }
  else {
    FUN_8c020a70(ar5,s_suisou_WaterFace_nj_8c13f91e,s_GRAPHICS_ENV_8c13f8cb,ar4);
    pcVar3 = s_GRAPHICS_ENV_8c13f8cb;
    iVar1 = ar4;
    FUN_8c020b68(ar5,s_suisou_WaterFace_nj_8c13f91e,s_GRAPHICS_ENV_8c13f8cb,ar4);
    FUN_8c015ad4(ar4 + 0x10,0,pcVar3,iVar1,uVar2);
    FUN_8c020a70(ar5,s_suisou_Effect_nj_8c13f986,s_GRAPHICS_ENV_8c13f8cb,ar4);
    pcVar3 = s_GRAPHICS_ENV_8c13f8cb;
    iVar1 = ar4;
    FUN_8c020b68(ar5,s_suisou_Effect_nj_8c13f986,s_GRAPHICS_ENV_8c13f8cb,ar4);
    ar5_01 = 0;
    FUN_8c015ad4(ar4 + 0x1c,0,pcVar3,iVar1,uVar2);
    uVar2 = s_Failed_s_015312(ar4 + 0x12a5c,ar5_01,pcVar3,iVar1);
  }
  return uVar2;
}



/* s_GRAPHICS_ENV_0d5ee6 @ 8c0d5ee0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_ENV_0d5ee6(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 ar7_00;
  int *ar5_00;
  char *ar6_00;
  int **ar7_01;
  uint uVar3;
  uint in_stack_ffffffd0;
  int *piStack_18;
  undefined4 auStack_14 [2];
  
  auStack_14[0] = 0;
  piStack_18 = (int *)0x0;
  iVar2 = FUN_8c0209fc(ar5,s_kumonosu_nj_8c13fb9e,s_GRAPHICS_ENV_8c13f8cb,auStack_14);
  if (iVar2 == 0) {
    report_error_message(s_kumonosu_nj_8c13fb9e,s_Read_NJCM_Failed___SPIDER_WEB__C_8c13fbaa,0,2);
  }
  ar7_01 = &piStack_18;
  ar6_00 = s_GRAPHICS_ENV_8c13f8cb;
  iVar2 = FUN_8c020af4(ar5,s_kumonosu_nj_8c13fb9e,s_GRAPHICS_ENV_8c13f8cb,ar7_01);
  if (iVar2 == 0) {
    ar7_01 = (int **)0x2;
    ar6_00 = (char *)0x0;
    report_error_message(s_kumonosu_nj_8c13fb9e,s_Read_NJTL_Failed___SPIDER_WEB__C_8c13fbd2,0,2);
  }
  uVar1 = 0;
  while (uVar3 = uVar1, uVar3 < (uint)piStack_18[1]) {
    *(uint *)(uVar3 * 0xc + *piStack_18 + 4) = *(uint *)(uVar3 * 0xc + *piStack_18 + 4) | 0x80000000
    ;
    in_stack_ffffffd0 = uVar3;
    uVar1 = uVar3 + 1;
  }
  FUN_8c015ad4(ar4 + 2,auStack_14[0],ar6_00,ar7_01,in_stack_ffffffd0);
  ar5_00 = piStack_18;
  (**(code **)(*ar4 + 8))(ar4,piStack_18,ar6_00,ar7_01);
  ar7_00 = get_field_4_0253e4(ar4,ar5_00,ar6_00,ar7_01);
  iVar2 = FUN_8c020ef0(ar5,s_SPIDER_WEB_8c13fbfa,s_GRAPHICS_ENV_8c13f8cb,ar7_00);
  if (iVar2 == 0) {
    iVar2 = report_error_message
                      (s_Failed_to_load_web_tex_8c13fc05,s_SoilTank__Createt___8c13fc1c,0,2);
  }
  return iVar2;
}



/* free_if_nonnull_wrap_0d63c0 @ 8c0d63c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 *
free_if_nonnull_wrap_0d63c0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = &DAT_8c12c3a4, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c0d6424 @ 8c0d6424 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d6424(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12c394;
    ar5_00 = 0;
    free_if_nonnull_wrap_0d63c0(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_0d6ef8 @ 8c0d6ef8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0d6ef8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c0d6f68 @ 8c0d6f68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d6f68(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    object_dtor_delete(ar4 + 0x14,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_0d76b8 @ 8c0d76b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0d76b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c0d780c @ 8c0d780c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d780c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129808;
    Vec3_dtor(ar4 + 5,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 1,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0d7af8 @ 8c0d7af8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d7af8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  ar5_00 = ar5;
  FUN_8c0d63f8(ar4 + 0x1c,ar5,ar6,ar7);
  FUN_8c0d63f8(ar4 + 0x30,ar5,ar6_00,ar7);
  FUN_8c0d7e78(ar4,ar5_00,ar6,ar7,ar5_00);
  FUN_8c0d7dcc(ar4,ar5_00,ar6,ar7);
  return ar4;
}



/* FUN_8c0d8094 @ 8c0d8094 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d8094(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12bea8;
    ar5_00 = 0;
    FUN_8c0d780c(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0d80dc @ 8c0d80dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d80dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_0d63c0(ar4 + 0x30,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0d63c0(ar4 + 0x1c,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0d8128 @ 8c0d8128 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d8128(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0d76b8(ar4 + 0xc,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_0d8168 @ 8c0d8168 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0d8168(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* s_GRAPHICS_ENV_0d93b0 @ 8c0d93a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d93b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  char *ar5_00;
  char *pcVar2;
  undefined4 *puVar3;
  int **ar7_01;
  uint uVar4;
  undefined4 in_stack_ffffffb0;
  undefined4 uStack_20;
  int *piStack_1c;
  undefined4 auStack_18 [2];
  
  auStack_18[0] = 0;
  piStack_1c = (int *)0x0;
  uStack_20 = 0;
  puVar3 = auStack_18;
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c0209fc(ar5,s_Ring_Home_nj_8c13fc74,s_GRAPHICS_ENV_8c13f8cb,puVar3);
  if (iVar1 == 0) {
    report_error_message(s_Ring_Home_nj_8c13fc74,s_Read_NJCM_Failed__RING_UNIT__Cre_8c13fc81,0,2);
  }
  else {
    FUN_8c015ad4(ar4 + 0x28,auStack_18[0],pcVar2,puVar3,in_stack_ffffffb0);
  }
  ar7_01 = &piStack_1c;
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_Ring_Home_nj_8c13fc74,s_GRAPHICS_ENV_8c13f8cb,ar7_01);
  if (iVar1 == 0) {
    ar7_01 = (int **)0x2;
    pcVar2 = (char *)0x0;
    ar5_00 = s_Read_NJTL_Failed__RING_UNIT__Cre_8c13fcac;
    report_error_message(s_Ring_Home_nj_8c13fc74,s_Read_NJTL_Failed__RING_UNIT__Cre_8c13fcac,0,2);
  }
  else {
    ar5_00 = (char *)piStack_1c;
    (**(code **)(*(int *)(ar4 + 0x20) + 8))((int *)(ar4 + 0x20),piStack_1c,pcVar2,ar7_01);
  }
  piStack_1c = (int *)get_field_4_0253e4(ar4 + 0x20,ar5_00,pcVar2,ar7_01);
  for (uVar4 = 0; uVar4 < (uint)piStack_1c[1]; uVar4 = uVar4 + 1) {
    iVar1 = uVar4 * 0xc + *piStack_1c;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x80000000;
  }
  ar7_00 = get_field_4_0253e4(ar4 + 0x20,ar5_00,pcVar2,ar7_01);
  iVar1 = FUN_8c020ef0(ar5,&DAT_8c13fcd7,s_GRAPHICS_ENV_8c13f8cb,ar7_00);
  if (iVar1 == 0) {
    report_error_message
              (s_Failed_to_load_ring_textuer___8c13fcdc,s_RING_UNIT__CreateModel_8c13fcfa,0,2);
  }
  iVar1 = FUN_8c020ddc(ar5,s_RingMotion_npd_8c13fd11,s_GRAPHICS_ENV_8c13f8cb,ar4);
  if (iVar1 == 0) {
    report_error_message(s_RingMotion_npd_8c13fd11,s_Failed_to_Load_MotionPack__RING__8c13fd20,0,2);
  }
  for (uVar4 = 0; uVar4 < 7; uVar4 = uVar4 + 1) {
    puVar3 = &uStack_20;
    pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
    iVar1 = FUN_8c020bec(ar5,(&PTR_s_Ring_Idle1_njm_8c13f394)[uVar4],s_GRAPHICS_ENV_8c13f8cb,puVar3)
    ;
    if (iVar1 == 0) {
      report_error_message
                ((&PTR_s_Ring_Idle1_njm_8c13f394)[uVar4],s_Read_NMDM_Failed___8c13fd54,0,2);
    }
    else {
      FUN_8c015bb0(ar4 + uVar4 * 4 + 0x2c,uStack_20,pcVar2,puVar3,uVar4);
    }
  }
  return 7;
}



/* FUN_8c0d9720 @ 8c0d9720 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9720(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  FUN_8c01538c(ar4 + 0x20,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_fffffff4);
  FUN_8c019058(uVar1,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x10) == 8) {
    FUN_8c015adc(ar4 + 0x28,ar5,ar6,ar7);
  }
  else {
    ar5 = ar4 + *(int *)(ar4 + 0x10) * 4 + 0x2c;
    FUN_8c015b54(ar4 + 0x28,ar5,ar6,ar7);
  }
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}



/* Class_12bce0_m0_0d9a98 @ 8c0d9a98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12bce0_m0_0d9a98(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12bce0;
    free_if_nonnull_wrap_10270c(ar4 + 0x23,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_102790(ar4 + 0x20,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 0xc,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 10,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 3,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0153e4(ar4 + 1,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0da028 @ 8c0da028 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0da028(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c0d6424(ar4 + 0x11c,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0d63c0(ar4 + 0x108,0xffffffff,ar6,ar7);
    FUN_8c0d6424(ar4 + 0xe8,0xffffffff,ar6,ar7);
    ar7_00 = 4;
    ar6_00 = 0x20;
    vec_delete_array(ar4 + 0x68,FUN_8c0d6424,0x20,4,ain0);
    Vec3_dtor(ar4 + 0x40,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(ar4 + 0x30,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(ar4 + 0x20,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(ar4 + 0x10,0xffffffff,ar6_00,ar7_00);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0da0e8 @ 8c0da0e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0da0e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 0x23;
    ar6_00 = 0x10;
    ar5_00 = FUN_8c0da130;
    vec_delete_array(ar4,FUN_8c0da130,0x10,0x23,ain0);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0da130 @ 8c0da130 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0da130(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    FUN_8c0da170(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0da170 @ 8c0da170 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0da170(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0;
    free_if_nonnull_wrap_0c0264(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12bb08_m0_0da208 @ 8c0da208 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12bb08_m0_0da208(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12bb08;
    free_if_nonnull_wrap_0151a0(ar4 + 0x40a,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0e91f0(ar4 + 0x3d3,0xffffffff,ar6,ar7);
    uVar2 = 8;
    uVar1 = 0x68;
    vec_delete_array(ar4 + 0x303,FUN_8c0f68c0,0x68,8,ain0);
    free_if_nonnull_wrap_102790(ar4 + 0x2ea,0xffffffff,uVar1,uVar2);
    FUN_8c0da028(ar4 + 0x29a,0xffffffff,uVar1,uVar2);
    free_if_nonnull_wrap_019270(ar4 + 0x27a,0xffffffff,uVar1,uVar2);
    free_if_nonnull_wrap_015544(ar4 + 0x277,0xffffffff,uVar1,uVar2);
    FUN_8c0da0e8(ar4 + 0x1e9,0xffffffff,uVar1,uVar2);
    ar7_00 = 0x11;
    uVar2 = 0x3c;
    vec_delete_array(ar4 + 0xea,FUN_8c0fe250,0x3c,0x11,ain0);
    FUN_8c0fdf18(ar4 + 0x29,0xffffffff,uVar2,ar7_00);
    uVar1 = 0;
    Class_12bce0_m0_0d9a98(ar4,0,uVar2,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,uVar1,uVar2,ar7_00,ain0);
    }
  }
  return ar4;
}



/* s_GRAPHICS_COMMON_0dbb1a @ 8c0dbb14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_COMMON_0dbb1a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar7_00;
  int iVar1;
  undefined **ar5_00;
  uint uVar2;
  
  FUN_8c015ad4(ar4 + 0xc,&DAT_8c162770,ar6,ar7,ar5);
  ar5_00 = &PTR_PTR_8c1622e4;
  (**(code **)(*(int *)(ar4 + 4) + 8))((int *)(ar4 + 4),&PTR_PTR_8c1622e4,ar6,ar7);
  ar7_00 = (int *)get_field_4_0253e4(ar4 + 4,ar5_00,ar6,ar7);
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x80000000;
  }
  iVar1 = FUN_8c020ef0(ar5,&DAT_8c13fd91,s_GRAPHICS_COMMON_8c13f7c0,ar7_00);
  if (iVar1 == -1) {
    iVar1 = report_error_message(s_Failed_to_load_textuer___SHIT__8c13fd96,&DAT_8c13f91d,0,2);
  }
  return iVar1;
}



/* FUN_8c0ddb3c @ 8c0ddb3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ddb3c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Class_129938_m0_017084(ar4 + 0xc4,0xffffffff,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0x30,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x24,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x14,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 4,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_016bfc(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0ddbc8 @ 8c0ddbc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ddbc8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 7;
    ar6_00 = 4;
    vec_delete_array(ar4 + 0x2c,free_if_nonnull_wrap_0247b0,4,7,ain0);
    free_if_nonnull_wrap_016bfc(ar4 + 0x28,0xffffffff,ar6_00,ar7_00);
    free_if_nonnull_wrap_0153e4(ar4 + 0x20,0xffffffff,ar6_00,ar7_00);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0ddc40 @ 8c0ddc40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ddc40(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_0cffc8(ar4 + 0xeb48,0xffffffff,ar6,ar7);
    ar7_00 = 0x15e;
    ar6_00 = 0xac;
    vec_delete_array(ar4 + 0xc,FUN_8c0d0abc,0xac,0x15e,ain0);
    free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6_00,ar7_00);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0ddcc4 @ 8c0ddcc4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ddcc4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0ddd14 @ 8c0ddd14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ddd14(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_0cffc8(ar4 + 0x30,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0ddd74 @ 8c0ddd74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ddd74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c015428(ar4 + 0x12a5c,0xffffffff,ar6,ar7);
    vec_delete_array(ar4 + 0x62c,FUN_8c0d3304,0x88,0x226,ain0);
    vec_delete_array(ar4 + 0x5fc,free_if_nonnull_wrap_0cffc8,0x18,2,ain0);
    uVar2 = 5;
    uVar1 = 0x44;
    vec_delete_array(ar4 + 0x470,FUN_8c0d336c,0x44,5,ain0);
    free_if_nonnull_wrap_016bfc(ar4 + 0x154,0xffffffff,uVar1,uVar2);
    free_if_nonnull_wrap_0153e4(ar4 + 0x108,0xffffffff,uVar1,uVar2);
    FUN_8c0fe59c(ar4 + 0x34,0xffffffff,uVar1,uVar2);
    ar7_00 = 3;
    uVar2 = 4;
    vec_delete_array(ar4 + 0x20,free_if_nonnull_wrap_016bfc,4,3,ain0);
    free_if_nonnull_wrap_016bfc(ar4 + 0x1c,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_016bfc(ar4 + 0x10,0xffffffff,uVar2,ar7_00);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0153e4(ar4 + 8,0xffffffff,uVar2,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,uVar1,uVar2,ar7_00,ain0);
    }
  }
  return ar4;
}



/* Class_12b930_m0_0dde84 @ 8c0dde84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b930_m0_0dde84(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b930;
    vec_delete_array(ar4 + 0x8c96,free_if_nonnull_wrap_0cffc8,0x18,2,ain0);
    uVar2 = 3;
    uVar1 = 0x16c;
    vec_delete_array(ar4 + 0x8b52,FUN_8c0ddb3c,0x16c,3,ain0);
    free_if_nonnull_wrap_0153e4(ar4 + 0x8b50,0xffffffff,uVar1,uVar2);
    ar7_00 = 0x6e;
    uVar2 = 0xc;
    vec_delete_array(ar4 + 0x8a06,free_if_nonnull_wrap_0d6ef8,0xc,0x6e,ain0);
    Vec3_dtor(ar4 + 0x8a00,0xffffffff,uVar2,ar7_00);
    Vec3_dtor(ar4 + 0x89fc,0xffffffff,uVar2,ar7_00);
    Vec3_dtor(ar4 + 0x89f8,0xffffffff,uVar2,ar7_00);
    Vec3_dtor(ar4 + 0x89f4,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_0cfe48(ar4 + 0x89d3,0xffffffff,uVar2,ar7_00);
    FUN_8c0ddbc8(ar4 + 0x89c1,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_0153e4(ar4 + 0x89bf,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_016bfc(ar4 + 0x89be,0xffffffff,uVar2,ar7_00);
    FUN_8c0ddc40(ar4 + 0x4ee3,0xffffffff,uVar2,ar7_00);
    FUN_8c0ddcc4(ar4 + 0x4edc,0xffffffff,uVar2,ar7_00);
    FUN_8c0ddd14(ar4 + 0x4ec9,0xffffffff,uVar2,ar7_00);
    FUN_8c0ddd74(ar4 + 0x42b,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_016bfc(ar4 + 0x41f,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_016bfc(ar4 + 0x41e,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_016bfc(ar4 + 0x41d,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_0153e4(ar4 + 0x41b,0xffffffff,uVar2,ar7_00);
    uVar1 = 0;
    Class_12bb08_m0_0da208(ar4,0,uVar2,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,uVar1,uVar2,ar7_00,ain0);
    }
  }
  return ar4;
}



/* Class_12b930_m3_0de4b0 @ 8c0de4b0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 Class_12b930_m3_0de4b0(int ar4,int ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_stack_ffffffb8;
  undefined1 auStack_2c [16];
  
  iVar4 = ar5;
  uVar3 = ar6;
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  Vec3_set_zero(auStack_2c,iVar4,uVar3,ar7);
  a4 = FUN_8c0da588(ar4 + 0xa4,iVar4,uVar3,ar7);
  FUN_8c0e389c(ar4,iVar4,uVar3,ar7);
  FUN_8c0d0178(ar4 + 0x13b24,iVar4,uVar3,ar7);
  FUN_8c0d0d1c(ar4 + 0x13b8c,iVar4,uVar3,ar7);
  iVar4 = ar5;
  FUN_8c0d9600(ar4 + 0x22704,ar5,uVar3,ar7);
  FUN_8c0de6c0(ar4 + 0x13b24,iVar4,uVar3,ar7,in_stack_ffffffb8);
  FUN_8c0de6b0(ar4 + 0x13b70,iVar4,uVar3,ar7,in_stack_ffffffb8);
  iVar6 = a4;
  _DAT_8c437550 = iVar1;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar4 = ar5;
    uVar3 = ar6;
    ar7 = ar4;
    (**(code **)(*(int *)(iVar6 + 8) + 0x10))(iVar6,ar5,ar6,ar4);
    iVar6 = list_node_next(iVar6,iVar4,uVar3,ar7);
  }
  iVar6 = a4;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar4 = ar4;
    FUN_8c0f4258(iVar6,ar4,uVar3,ar7);
    iVar6 = list_node_next(iVar6,iVar4,uVar3,ar7);
  }
  iVar6 = a4;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar2 = FUN_8c0da4f8(iVar6,iVar4,uVar3,ar7);
    if (iVar2 == 1) {
      iVar4 = ar4;
      FUN_8c0f4974(iVar6,ar4,uVar3,ar7);
    }
    iVar6 = list_node_next(iVar6,iVar4,uVar3,ar7);
  }
  for (iVar6 = 0; iVar6 < iVar1; iVar6 = iVar6 + 1) {
    iVar4 = ar4;
    (**(code **)(*(int *)(a4 + 8) + 0x28))(a4,ar4,uVar3,ar7);
    a4 = list_node_next(a4,iVar4,uVar3,ar7);
  }
  FUN_8c0dbbe8(ar4,iVar4,uVar3,ar7);
  FUN_8c0e3994(ar4,ar4 + 0x10ac,uVar3,ar7);
  iVar4 = ar4 + 0x22eb4;
  FUN_8c0d3d6c(ar4 + 0x10ac,iVar4,uVar3,ar7);
  FUN_8c0dbd80(ar4,iVar4,uVar3,ar7);
  uVar3 = object_dtor_delete(auStack_2c,0xffffffff,uVar3,ar7);
  return uVar3;
}



/* free_if_nonnull_wrap_0deb30 @ 8c0deb30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0deb30(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c0dfdcc @ 8c0dfdcc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dfdcc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c0d0a3c(ar4 + 0x13b70,1,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x10dc) = 1;
  return 0x10dc;
}



/* FUN_8c0dfdfc @ 8c0dfdfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dfdfc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c0d0a3c(ar4 + 0x13b70,0,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x10dc) = 0;
  return 0x10dc;
}



/* FUN_8c0dffe8 @ 8c0dffe8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dffe8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = noop_0d09f4(ar4 + 0x13b70,ar5,ar6,ar7,ar4);
  return uVar1;
}



/* FUN_8c0e000c @ 8c0e000c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e000c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c0d1458(ar4 + 0x13b8c,ar5,ar6,ar7);
  uVar1 = FUN_8c0de6b0(ar4 + 0x13b70,ar5,ar6,ar7,in_PR);
  return uVar1;
}



/* FUN_8c0e004c @ 8c0e004c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e004c(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  uint a5;
  undefined4 in_PR;
  
  FUN_8c0db008(ar4,ar5,ar6,ar7);
  ar5_00 = 0;
  FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7);
  FUN_8c0d064c(ar4 + 0x4ec9,ar5_00,ar6,ar7);
  noop_0d98f4(ar4 + 0x89c1,ar5_00,ar6,ar7,in_PR);
  a5 = ar5;
  FUN_8c0d50ec(ar4 + 0x42b,ar5,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    (**(code **)(*ar4 + 0x1c4))(ar4,a5,ar6,ar7);
  }
  else {
    (**(code **)(*ar4 + 0x7c))(ar4,a5,ar6,ar7);
  }
  return 0;
}



/* FUN_8c0e00ec @ 8c0e00ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e00ec(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  noop_0d09f8(ar4 + 0x4edc,ar5,ar6,ar7,in_PR);
  (**(code **)(*ar4 + 0x15c))(ar4,ar5,ar6,ar7);
  return 0;
}



/* FUN_8c0e0488 @ 8c0e0488 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0488(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR;
  
  FUN_8c0db090(ar4,ar5,ar6,ar7);
  ar5_00 = ar5;
  FUN_8c0d5614(ar4 + 0x10ac,ar5,ar6,ar7);
  FUN_8c0d06c4(ar4 + 0x13b24,ar5_00,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    uVar1 = noop_0d0a34(ar4 + 0x13b70,ar5_00,ar6,ar7,in_PR);
  }
  else {
    uVar1 = FUN_8c0d14e8(ar4 + 0x13b8c,ar5_00,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0e0508 @ 8c0e0508 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0508(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR;
  
  ar5_00 = ar5;
  FUN_8c0d55d0(ar4 + 0x10ac,ar5,ar6,ar7);
  FUN_8c0d06ec(ar4 + 0x13b24,ar5_00,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    uVar1 = noop_0d0a38(ar4 + 0x13b70,ar5_00,ar6,ar7,in_PR);
  }
  else {
    uVar1 = FUN_8c0d1518(ar4 + 0x13b8c,ar5_00,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0e15fc @ 8c0e15fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e15fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c01538c(ar4 + 0x106c,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x107c,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c019058(uVar1,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x1074,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x1078,ar5,ar6,ar7);
  FUN_8c256210(1,ar5,ar6,ar7);
  FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7);
  uVar1 = FUN_8c015adc(ar4 + 0x30,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e462c @ 8c0e462c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e462c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0e468c @ 8c0e468c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e468c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12b758_m0_0e46cc @ 8c0e46cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b758_m0_0e46cc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b758;
    uVar2 = 1;
    uVar1 = 0x18;
    vec_delete_array(ar4 + 0x578,free_if_nonnull_wrap_0cffc8,0x18,1,ain0);
    FUN_8c0e462c(ar4 + 0x56f,0xffffffff,uVar1,uVar2);
    uVar2 = 100;
    uVar1 = 0xc;
    vec_delete_array(ar4 + 0x443,free_if_nonnull_wrap_0d6ef8,0xc,100,ain0);
    Vec3_dtor(ar4 + 0x43f,0xffffffff,uVar1,uVar2);
    Vec3_dtor(ar4 + 0x43b,0xffffffff,uVar1,uVar2);
    free_if_nonnull_wrap_016bfc(ar4 + 0x439,0xffffffff,uVar1,uVar2);
    free_if_nonnull_wrap_0153e4(ar4 + 0x437,0xffffffff,uVar1,uVar2);
    ar7_00 = 3;
    uVar2 = 0x24;
    vec_delete_array(ar4 + 0x41c,FUN_8c0e468c,0x24,3,ain0);
    uVar1 = 0;
    Class_12bb08_m0_0da208(ar4,0,uVar2,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,uVar1,uVar2,ar7_00,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0e6114 @ 8c0e6114 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e6114(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c015428(ar4 + 0x6e50,0xffffffff,ar6,ar7);
    vec_delete_array(ar4 + 0x6e20,free_if_nonnull_wrap_0cffc8,0x18,2,ain0);
    ar7_00 = 500;
    ar6_00 = 0x38;
    vec_delete_array(ar4 + 0xbc,FUN_8c0d8094,0x38,500,ain0);
    FUN_8c0d80dc(ar4 + 0x78,0xffffffff,ar6_00,ar7_00);
    FUN_8c0d8128(ar4 + 0x50,0xffffffff,ar6_00,ar7_00);
    free_if_nonnull_wrap_0d8168(ar4 + 0x34,0xffffffff,ar6_00,ar7_00);
    object_dtor_delete(ar4 + 0x28,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(ar4 + 0x18,0xffffffff,ar6_00,ar7_00);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 8,0xffffffff,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* Class_12b580_m0_0e61f4 @ 8c0e61f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b580_m0_0e61f4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b580;
    vec_delete_array(ar4 + 0x20fe,free_if_nonnull_wrap_0cffc8,0x18,1,ain0);
    ar7_00 = 100;
    ar6_00 = 0xc;
    vec_delete_array(ar4 + 0x1fd2,free_if_nonnull_wrap_0d6ef8,0xc,100,ain0);
    FUN_8c0e6114(ar4 + 0x437,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(ar4 + 0x433,0xffffffff,ar6_00,ar7_00);
    free_if_nonnull_wrap_016bfc(ar4 + 0x432,0xffffffff,ar6_00,ar7_00);
    free_if_nonnull_wrap_0153e4(ar4 + 0x430,0xffffffff,ar6_00,ar7_00);
    ar5_00 = 0;
    Class_12bb08_m0_0da208(ar4,0,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0e6c8c @ 8c0e6c8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6c8c(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR;
  
  ar5_00 = ar5;
  FUN_8c0d9b60(ar4,ar5,ar6,ar7);
  s_Failed_to_set_texture_s_015252(ar4 + 4,ar5_00,ar6,ar7);
  uVar1 = 2;
  if (2 < (ar5 & 0xff)) {
    uVar1 = noop_0d8458(ar4 + 0x10dc,ar5_00,ar6,ar7,in_PR);
  }
  return uVar1;
}



/* FUN_8c0e6cd8 @ 8c0e6cd8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6cd8(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR;
  
  ar5_00 = ar5;
  s_Failed_wrap_0d9b8c(ar4,ar5,ar6,ar7);
  s_Failed_s_015312(ar4 + 4,ar5_00,ar6,ar7);
  uVar1 = 2;
  if (2 < (ar5 & 0xff)) {
    uVar1 = noop_0d845c(ar4 + 0x10dc,ar5_00,ar6,ar7,in_PR);
  }
  return uVar1;
}



/* Class_12b3b8_m0_0e77ec @ 8c0e77ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b3b8_m0_0e77ec(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b3b8;
    FUN_8c015428(ar4 + 0x122,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_015c94(ar4 + 0x105,0xffffffff,ar6,ar7);
    Class_1299ec_m0_01a0f8(ar4 + 0xaa,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_019270(ar4 + 0x8a,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016660(ar4 + 0x89,0xffffffff,ar6,ar7);
    ar7_00 = 0xc;
    ar6_00 = 0x20;
    vec_delete_array(ar4 + 0x29,FUN_8c0d6f68,0x20,0xc,ain0);
    ar5_00 = 0;
    Class_12bce0_m0_0d9a98(ar4,0,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* s_GRAPHICS_ENV_0e78c4 @ 8c0e78c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0e78c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  char *ar5_00;
  undefined4 uVar3;
  char *ar6_00;
  undefined4 ar7_00;
  int iVar4;
  
  uVar1 = get_field_4_0253e4(ar4 + 0x488,ar5,ar6,ar7);
  ar7_00 = 2;
  uVar3 = 0x8c4312a8;
  iVar2 = ar4 + 0x498;
  FUN_8c239170(uVar1,iVar2,0x8c4312a8,2);
  for (iVar4 = 0; iVar4 < 2; iVar4 = iVar4 + 1) {
    *(undefined4 *)(iVar4 * 0xc + ar4 + 0x49c) = 0x80000000;
  }
  uVar1 = get_field_4_0253e4(ar4 + 0x488,iVar2,uVar3,ar7_00);
  ar6_00 = s_GRAPHICS_ENV_8c13f8cb;
  ar5_00 = s_Incubater_pvm_8c1400cd;
  iVar2 = FUN_8c02100c(ar5,s_Incubater_pvm_8c1400cd,s_GRAPHICS_ENV_8c13f8cb,uVar1);
  if (iVar2 == 0) {
    uVar1 = 2;
    ar6_00 = (char *)0x0;
    ar5_00 = s_CIncubater__Create___8c1400ff;
    report_error_message
              (s_Failed_to_load_incubater_textuer_8c1400db,s_CIncubater__Create___8c1400ff,0,2);
  }
  uVar3 = get_field_4_0253e4(ar4 + 0x488,ar5_00,ar6_00,uVar1);
  FUN_8c015ccc(ar4 + 0x414,uVar3,ar6_00,uVar1,ar5);
  uVar1 = FUN_8c015cd4(ar4 + 0x414,&DAT_8c13f750,ar6_00,uVar1,ar5);
  return uVar1;
}



/* FUN_8c0e8cfc @ 8c0e8cfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8cfc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0de6c0(ar4 + 0x13b24,ar5,ar6,ar7,ar4);
  return uVar1;
}



/* FUN_8c0e8d28 @ 8c0e8d28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8d28(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0de6b0(ar4 + 0x13b70,ar5,ar6,ar7,ar4);
  return uVar1;
}



/* free_if_nonnull_wrap_0e91f0 @ 8c0e91f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0e91f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c0f3f58 @ 8c0f3f58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f3f58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Vec3_dtor(ar4 + 0xb0,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xa0,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x8c,0xffffffff,ar6,ar7);
    vec_delete_array(ar4 + 0x6c,free_if_nonnull_wrap_0f3ffc,8,3,ain0);
    ar7_00 = 3;
    ar6_00 = 8;
    vec_delete_array(ar4 + 0x4c,free_if_nonnull_wrap_0f3ffc,8,3,ain0);
    ar5_00 = 0xffffffff;
    Class_129974_m0_016c2c(ar4 + 8,0xffffffff,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_0f3ffc @ 8c0f3ffc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0f3ffc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* Class_12c1f0_m0_0f4108 @ 8c0f4108 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12c1f0_m0_0f4108(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12c1f0;
    FUN_8c0f3f58(ar4 + 0xa0,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0d8168(ar4 + 0x90,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0d8168(ar4 + 0x80,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016ac4(ar4 + 0x5c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x50,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x40,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x30,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    free_if_nonnull_wrap_0c0264(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12c058_m0_0f55d8 @ 8c0f55d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12c058_m0_0f55d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12c058;
    Class_129938_m0_017084(ar4 + 0x17c,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 0x178,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x170,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_12c1f0_m0_0f4108(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0f5754 @ 8c0f5754 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5754(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c015ad4(ar4 + 0x178,ar5,ar6,ar7,ar4);
  return uVar1;
}



/* FUN_8c0f577c @ 8c0f577c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f577c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c019058(uVar1,ar5,ar6,ar7);
  FUN_8c019088(uVar1,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x178,ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f57f0 @ 8c0f57f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f57f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c01538c(ar4 + 0x170,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c019058(uVar1,ar5,ar6,ar7);
  FUN_8c019088(uVar1,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x178,ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}



/* Class_12bec0_m0_0f5a48 @ 8c0f5a48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12bec0_m0_0f5a48(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12bec0;
    Class_129938_m0_017084(ar4 + 0x1dc,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x1bc,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x1b4,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_12c1f0_m0_0f4108(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0f68c0 @ 8c0f68c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f68c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Vec3_dtor(ar4 + 0x34,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016ac4(ar4 + 0x1c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x10,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* game_init @ 8c0f7b70 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 game_init(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar7_00;
  undefined4 in_stack_ffffffc0;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = DAT_8c14029c;
  uStack_14 = DAT_8c1402a0;
  uStack_10 = DAT_8c1402a4;
  uStack_c = DAT_8c1402a8;
  uStack_28 = DAT_8c1402ac;
  uStack_24 = DAT_8c1402b0;
  uStack_20 = DAT_8c1402b4;
  uStack_1c = DAT_8c1402b8;
  (&DATA_8c1f5a2c) = (undefined *)((uint)(&DATA_8c1f5a2c) | 0xa0000000);
  iVar1 = FUN_8c1f7ea8(&uStack_28,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar3 = 2;
    uVar2 = 0;
    FUN_8c102bd0(0x31,0,2,ar7);
  }
  else {
    uVar3 = 1;
    uVar2 = 0;
    FUN_8c102bd0(0x34,0,1,ar7);
  }
  FUN_8c259a1c(0,uVar2,uVar3,ar7);
  _DAT_8c43b578 = malloc_thunk(0x2b000,uVar2,uVar3,ar7);
  uVar2 = 0x2b000;
  FUN_8c25b334(_DAT_8c43b578,0x2b000,uVar3,ar7,in_stack_ffffffc0);
  _DAT_8c43b57c = malloc_thunk(0x1db000,uVar2,uVar3,ar7);
  FUN_8c236250(_DAT_8c43b57c,0x1db000,uVar3,ar7);
  ar7_00 = 0;
  FUN_8c258b26(0xfffaf6f0,0,0x4b320,0);
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  FUN_8c233f98(0,0,0,ar7_00);
  FUN_8c2570ec(uVar2,uVar3,uVar4,ar7_00,in_stack_ffffffc0);
  _DAT_8c43b570 = malloc_thunk(0x1000,uVar3,uVar4,ar7_00);
  uVar4 = 0;
  uVar2 = 0x40;
  FUN_8c23633c(_DAT_8c43b570,0x40,0,ar7_00);
  FUN_8c255bea(0x8c42d408,uVar2,uVar4,ar7_00,in_stack_ffffffc0);
  _DAT_8c43b574 = malloc_thunk(0xabe00,uVar2,uVar4,ar7_00);
  FUN_8c233d6c(_DAT_8c43b574,11000,uVar4,ar7_00);
  uVar3 = 0x15e;
  uVar2 = 0x8c43b584;
  FUN_8c25b34a(0x8c43b584,0x15e,uVar4,ar7_00);
  FUN_8c213ee4(uVar2,uVar3,uVar4,ar7_00);
  uVar4 = 0xff000000;
  uVar2 = 0xff000000;
  FUN_8c259046(0xff000000,0xff000000,0xff000000,ar7_00);
  FUN_8c233d9c(0x820,uVar2,uVar4,ar7_00,in_stack_ffffffc0);
  uVar3 = 0x800;
  FUN_8c233da2(0xffffffff,0x800,uVar4,ar7_00,in_stack_ffffffc0);
  FUN_8c233dac(&uStack_28,uVar3,uVar4,ar7_00);
  FUN_8c259358(3,uVar3,uVar4,ar7_00);
  uVar2 = 1;
  FUN_8c2593ac(1,uVar3,uVar4,ar7_00);
  thunk_FUN_8c20a13a(uVar2,uVar3,uVar4,ar7_00);
  FUN_8c259556(2,uVar3,uVar4,ar7_00);
  FUN_8c259274(1,uVar3,uVar4,ar7_00);
  FUN_8c014370(5,uVar3,uVar4,ar7_00,in_stack_ffffffc0);
  _DAT_8c43b580 = malloc_thunk(0x4000,uVar3,uVar4,ar7_00);
  FUN_8c1f7ecc(_DAT_8c43b580,uVar3,uVar4,ar7_00);
  uVar2 = s_Tmcpack_idx_0c0448(0x8c286ebc,uVar3,uVar4,ar7_00);
  return uVar2;
}



/* FUN_8c0f7fa8 @ 8c0f7fa8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f7fa8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0fa80c(ar4 + 0x1054,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* s_CHAPTER_02d_0fa206 @ 8c0fa204 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CHAPTER_02d_0fa206(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  FUN_8c014334(*(undefined4 *)(ar4 + 0x1050),ar5,ar6,ar7,s_CHAPTER_02d_8c140bbd);
  strcpy(*(int *)(ar4 + 0x1050) + 0x20,*(undefined4 *)(ar4 + 0x1050),ar6_00,ar7,ar5);
  FUN_8c01437c(*(int *)(ar4 + 0x1050) + 0x20,&DAT_8c140bc9,ar6_00,ar7);
  FUN_8c01437c(*(int *)(ar4 + 0x1050) + 0x20,ar6,ar6_00,ar7);
  strcpy(*(int *)(ar4 + 0x1050) + 0x40,&DAT_8c1408e9,ar6_00,ar7,ar5);
  *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
  FUN_8c0fda28(ar4 + 0x1054,0,ar6_00,ar7);
  *(undefined4 *)(ar4 + 0x89130) = 3;
  return 0x89130;
}



/* FUN_8c0fa538 @ 8c0fa538 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fa538(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int ain0;
  
  iVar2 = 0;
  for (ain0 = 8; ain0 < 0x26; ain0 = ain0 + 1) {
    iVar1 = FUN_8c013bdc(ar4 + ain0 * 4 + 0x10,ar5,ar6,ar7);
    if (99 < iVar1) {
      ar5 = &DAT_8c140bcb;
      strcpy(ar4 + ain0 * 4 + 0x10,&DAT_8c140bcb,ar6,ar7,ain0);
    }
    if (2 < iVar1) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}



/* free_if_nonnull_wrap_0fa80c @ 8c0fa80c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0fa80c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* s_SPEECH_0fae26 @ 8c0fae24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_SPEECH_0fae26(undefined4 *ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_stack_ffffffb0;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [36];
  
  ar4[0x2e] = 0;
  strcpy(auStack_28,*(undefined4 *)(ar4[4] + 0x40),ar6,ar7,in_stack_ffffffb0);
  FUN_8c01437c(auStack_28,&DAT_8c141dd9,ar6,ar7);
  strcpy(auStack_48,*(undefined4 *)(ar4[4] + 0x40),ar6,ar7,in_stack_ffffffb0);
  FUN_8c01437c(auStack_48,&DAT_8c141dde,ar6,ar7);
  iVar1 = FUN_8c0faf30(ar4 + 5,auStack_28,ar6,ar7);
  if (iVar1 != 0) {
    if (*(char *)(ar4 + 5) != '\0') {
      FUN_8c021338(0x8c3eb334,ar4 + 5,s_SPEECH_8c141dd0,1);
      ar7 = 1;
      ar6 = s_SPEECH_8c141dd0;
      FUN_8c021338(0x8c3eb334,ar4 + 0xf,s_SPEECH_8c141dd0,1);
    }
    strcpy(ar4 + 5,auStack_28,ar6,ar7,in_stack_ffffffb0);
    strcpy(ar4 + 0xf,auStack_48,ar6,ar7,in_stack_ffffffb0);
    iVar1 = FUN_8c02126c(0x8c3eb334,ar4 + 5,s_SPEECH_8c141dd0,ar4 + 0xe);
    if (iVar1 == 0) {
      *(undefined1 *)(ar4 + 5) = 0;
      return 0;
    }
  }
  *ar4 = 3;
  return 1;
}



/* s_SPEECH_0faf9e @ 8c0faf98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_SPEECH_0faf9e(int ar4,char *ar5,char *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 in_stack_ffffffb8;
  undefined1 auStack_30 [36];
  
  if (*(int *)(ar4 + 0x38) == 0) {
    return 0;
  }
  if (*ar5 == '\0') {
    strcpy(auStack_30,*(undefined4 *)(ar4 + 0x38),ar6,ar7,in_stack_ffffffb8);
    iVar2 = 0;
  }
  else {
    strcpy(auStack_30,ar5,ar6,ar7,in_stack_ffffffb8);
    iVar2 = 0;
    while ((iVar2 < *(int *)(ar4 + 0x34) &&
           (iVar1 = FUN_8c0faf30(iVar2 * 0x28 + *(int *)(ar4 + 0x38),auStack_30,ar6,ar7), iVar1 != 0
           ))) {
      iVar2 = iVar2 + 1;
    }
    if (*(int *)(ar4 + 0x34) <= iVar2) {
      return 0;
    }
  }
  if ((*(char *)(ar4 + 0x5c) != '\0') &&
     ((*(int *)(iVar2 * 0x28 + *(int *)(ar4 + 0x38) + 0x20) != *(int *)(ar4 + 0x7c) ||
      (iVar1 = FUN_8c0faf30(auStack_30,ar4 + 0x5c,ar6,ar7), iVar1 != 0)))) {
    ar7 = 1;
    ar6 = s_SPEECH_8c141dd0;
    FUN_8c021338(0x8c3eb334,ar4 + 0x3c,s_SPEECH_8c141dd0,1);
    *(undefined1 *)(ar4 + 0x5c) = 0;
  }
  strcpy(ar4 + 0x5c,auStack_30,ar6,ar7,in_stack_ffffffb8);
  *(undefined4 *)(ar4 + 0x7c) = *(undefined4 *)(iVar2 * 0x28 + *(int *)(ar4 + 0x38) + 0x20);
  *(undefined4 *)(ar4 + 0x80) = *(undefined4 *)(iVar2 * 0x28 + *(int *)(ar4 + 0x38) + 0x24);
  return 1;
}



/* FUN_8c0fb20c @ 8c0fb20c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fb20c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_PR;
  
  if (ar4[0x2c] == 1) {
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    iVar2 = ar4[0x22];
    strcpy(*(int *)(ar4[4] + 0x40) + 0x20,iVar2 + 0x28,ar6,ar7,in_PR);
    strcpy(*(int *)(ar4[4] + 0x40) + 0x40,iVar2 + 0x48,ar6,ar7,in_PR);
    uVar1 = 4;
    *ar4 = 4;
  }
  return uVar1;
}



/* s_SPEECH_0fbe00 @ 8c0fbdfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_SPEECH_0fbe00(undefined4 *ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  char *ar6_00;
  int ar5_01;
  undefined4 in_stack_ffffffe4;
  
  ar5_01 = ar4[0x22];
  iVar1 = FUN_8c0faf30(ar5_01 + 0x2c,ar4 + 0x24,ar6,ar7);
  if (iVar1 != 0) {
    if (*(char *)(ar4 + 0x24) != '\0') {
      ar6 = s_SPEECH_8c141dd0;
      FUN_8c01d658(ar4[2],ar4 + 0x24,s_SPEECH_8c141dd0,ar7);
    }
    strcpy(ar4 + 0x24,ar5_01 + 0x2c,ar6,ar7,in_stack_ffffffe4);
  }
  ar6_00 = s_SPEECH_8c141dd0;
  ar5_00 = ar4 + 0x24;
  iVar1 = asr_register_strings(ar4[2],ar5_00,s_SPEECH_8c141dd0,ar7);
  if (iVar1 == 0) {
    FUN_8c01d868(ar4[2],ar5_00,ar6_00,ar7);
    uVar2 = 2;
    *ar4 = 2;
  }
  else {
    iVar1 = FUN_8c01d71c(ar4[2],ar5_00,ar6_00,ar7);
    if (iVar1 == 0) {
      uVar2 = 2;
      *ar4 = 2;
    }
    else {
      ar4[0x2e] = 0x96;
      ar4[0x33] = 0;
      iVar1 = FUN_8c0fc4fc(ar4,ar5_01,ar6_00,ar7);
      if ((iVar1 == 1) || (*(int *)(ar5_01 + 0x28) == 4)) {
        ar4[0x2e] = 300;
        ar4[0x33] = 1;
      }
      else if (*(int *)(ar5_01 + 0x28) == 1) {
        ar4[0x2e] = 0x96;
      }
      else if (*(int *)(ar5_01 + 0x28) == 2) {
        ar4[0x2e] = 0x5a;
      }
      uVar2 = 8;
      *ar4 = 8;
    }
  }
  return uVar2;
}



/* s_SPEECH_0fbf2e @ 8c0fbf28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_SPEECH_0fbf2e(undefined4 *ar4,undefined4 ar5,char *ar6,undefined1 *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *ar5_00;
  char *ar5_01;
  undefined *ar5_02;
  char *ar5_03;
  undefined4 in_stack_fffffe94;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [128];
  int aiStack_9c [3];
  char acStack_90 [132];
  
  if (ar4[0x2c] == 1) {
    FUN_8c01d868(ar4[2],ar5,ar6,ar7);
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    if (ar4[0x22035] == 1) {
      ar4[0x2e] = 0;
      ar4[0x22035] = 0;
    }
    if (ar4[0x33] == 1) {
      strcpy(auStack_11c,ar4 + 0x24,ar6,ar7,in_stack_fffffe94);
      FUN_8c01437c(auStack_11c,&DAT_8c141e17,ar6,ar7);
      ar7 = auStack_120;
      ar6 = s_SPEECH_8c141dd0;
      iVar2 = FUN_8c02126c(0x8c3eb334,auStack_11c,s_SPEECH_8c141dd0,ar7);
      if (iVar2 == 1) {
        ar7 = (undefined1 *)0x1;
        ar6 = s_SPEECH_8c141dd0;
        ar5_00 = ar4 + 0x24;
        FUN_8c021338(0x8c3eb334,ar5_00,s_SPEECH_8c141dd0,1);
        if (ar4[0x22035] == 0) {
          FUN_8c01bcf4(ar4[3],ar5_00,ar6,ar7);
        }
        if (ar4[0x22035] == 0) {
          FUN_8c01bd88(ar4[3],ar5_00,ar6,ar7);
        }
        FUN_8c01c964(ar4[3],&DAT_8c140bd0,ar6,ar7);
        ar4[0x33] = 0;
      }
    }
    ar5_03 = (char *)ar4[0x22];
    acStack_90[0] = '\0';
    aiStack_9c[0] = 0;
    if ((int)ar4[0x2e] < 1) {
      strcpy(acStack_90,&DAT_8c141e1c,ar6,ar7,in_stack_fffffe94);
      aiStack_9c[0] = 1;
    }
    else {
      FUN_8c01d684(ar4[2],aiStack_9c,ar6,ar7);
      if (aiStack_9c[0] != 0) {
        *(int *)(*(int *)(ar4[4] + 0x3c) + 4) = *(int *)(*(int *)(ar4[4] + 0x3c) + 4) + 1;
      }
    }
    if (aiStack_9c[0] == 0) {
      uVar1 = 0;
    }
    else {
      ar5_01 = s__NAME_8c141e20;
      iVar2 = FUN_8c0faf30(acStack_90,s__NAME_8c141e20,ar6,ar7);
      if (((iVar2 == 0) && (0 < **(int **)(ar4[4] + 0x3c))) &&
         (*(int *)(*(int *)(ar4[4] + 0x40) + 100) != **(int **)(ar4[4] + 0x3c))) {
        FUN_8c01d868(ar4[2],ar5_01,ar6,ar7);
        uVar1 = 2;
        *ar4 = 2;
      }
      else {
        for (iVar2 = 0; iVar2 < *(int *)(ar5_03 + 0x6c); iVar2 = iVar2 + 1) {
          ar5_01 = ar5_03 + iVar2 * 0x68 + 0x70;
          iVar3 = FUN_8c0faf30(acStack_90,ar5_01,ar6,ar7);
          if (iVar3 == 0) break;
        }
        if (*(int *)(ar5_03 + 0x6c) <= iVar2) {
          ar5_01 = &DAT_8c141e26;
          strcpy(acStack_90,&DAT_8c141e26,ar6,ar7,in_stack_fffffe94);
          for (iVar2 = 0; iVar2 < *(int *)(ar5_03 + 0x6c); iVar2 = iVar2 + 1) {
            ar5_01 = ar5_03 + iVar2 * 0x68 + 0x70;
            iVar3 = FUN_8c0faf30(acStack_90,ar5_01,ar6,ar7);
            if (iVar3 == 0) break;
          }
        }
        if (acStack_90[0] != '-') {
          if (acStack_90[0] == '?') {
            ar5_01 = &DAT_8c1417d0;
            FUN_8c01c978(ar4[3],&DAT_8c1417d0,ar6,ar7);
            FUN_8c0fc3e4(ar4,ar5_01,ar6,ar7);
          }
          else {
            ar5_02 = &DAT_8c1411d0;
            FUN_8c01c978(ar4[3],&DAT_8c1411d0,ar6,ar7);
            FUN_8c0fc3e4(ar4,ar5_02,ar6,ar7);
            ar5_01 = ar5_03;
            iVar3 = FUN_8c0fc4fc(ar4,ar5_03,ar6,ar7);
            if (iVar3 == 1) {
              ar5_01 = ar5_03;
              FUN_8c0fdaac(ar4,ar5_03,ar6,ar7);
            }
          }
        }
        if (iVar2 < *(int *)(ar5_03 + 0x6c)) {
          if (ar5_03[iVar2 * 0x68 + 0xb0] == '\0') {
            FUN_8c0fc44c(ar4,ar5_03 + iVar2 * 0x68 + 0x70,ar6,ar7);
          }
          else if (ar5_03[iVar2 * 0x68 + 0x90] == '\0') {
            ar6 = ar5_03 + iVar2 * 0x68 + 0x70;
            FUN_8c0fc94c(ar4,ar5_03 + iVar2 * 0x68 + 0xb0,ar6,ar7);
            FUN_8c0fc44c(ar4,ar5_03 + iVar2 * 0x68 + 0x70,ar6,ar7);
          }
          else {
            ar6 = ar5_03 + iVar2 * 0x68 + 0x90;
            FUN_8c0fc94c(ar4,ar5_03 + iVar2 * 0x68 + 0xb0,ar6,ar7);
            FUN_8c0fc44c(ar4,ar5_03 + iVar2 * 0x68 + 0x90,ar6,ar7);
          }
          ar5_01 = *(char **)(ar5_03 + iVar2 * 0x68 + 0xd4);
          FUN_8c0fdd68(*(undefined4 *)(ar4[4] + 0x40),ar5_01,ar6,ar7);
        }
        FUN_8c01d868(ar4[2],ar5_01,ar6,ar7);
        if (acStack_90[0] == '!') {
          ar6 = s_SPEECH_8c141dd0;
          asr_register_strings(ar4[2],ar4 + 0x24,s_SPEECH_8c141dd0,ar7);
        }
        if (*(int *)(*(int *)(ar4[4] + 0x40) + 0x70) == 0x11) {
          uVar1 = 2;
          *ar4 = 2;
        }
        else {
          uVar1 = s_ERROR_0fb0de(ar4,ar5_03 + iVar2 * 0x68 + 0xb4,ar6,ar7);
        }
      }
    }
  }
  return uVar1;
}



/* FUN_8c0fc44c @ 8c0fc44c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fc44c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = 0xf; 0 < iVar2; iVar2 = iVar2 + -1) {
    strcpy(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + iVar2 * 0x20 + 200,
           *(int *)(*(int *)(ar4 + 0x10) + 0x40) + (iVar2 + -1) * 0x20 + 200,ar6,ar7,ar5);
  }
  uVar1 = strcpy(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 200,ar5,ar6,ar7,ar5);
  return uVar1;
}



/* FUN_8c0fdaac @ 8c0fdaac callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0fdbb2) */
/* WARNING: Removing unreachable block (ram,0x8c0fdb74) */
/* WARNING: Removing unreachable block (ram,0x8c0fdb24) */
/* WARNING: Removing unreachable block (ram,0x8c0fdad6) */
/* WARNING: Removing unreachable block (ram,0x8c0fdafe) */
/* WARNING: Removing unreachable block (ram,0x8c0fdb54) */
/* WARNING: Removing unreachable block (ram,0x8c0fdb94) */
/* WARNING: Removing unreachable block (ram,0x8c0fdbce) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fdaac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_stack_ffffffc0;
  
  uVar1 = (uint)*(byte *)(ar4 + 0xd0);
  iVar2 = FUN_8c0faf30(uVar1 * 0x880 + ar4 + 0x8d1,ar4 + 0x14,ar6,ar7);
  if (((iVar2 != 0) ||
      (iVar2 = FUN_8c0faf30(uVar1 * 0x880 + ar4 + 0x911,ar4 + 0x5c,ar6,ar7), iVar2 != 0)) ||
     (iVar2 = FUN_8c0faf30(uVar1 * 0x880 + ar4 + 0x931,ar5,ar6,ar7), uVar3 = 0, iVar2 != 0)) {
    uVar1 = (uint)*(byte *)(ar4 + 0xd0);
    strcpy(uVar1 * 0x880 + ar4 + 0x8d1,ar4 + 0x14,ar6,ar7,in_stack_ffffffc0);
    strcpy(uVar1 * 0x880 + ar4 + 0x8f1,ar4 + 0x3c,ar6,ar7,in_stack_ffffffc0);
    strcpy(uVar1 * 0x880 + ar4 + 0x911,ar4 + 0x5c,ar6,ar7,in_stack_ffffffc0);
    strcpy(uVar1 * 0x880 + ar4 + 0x931,ar5,ar6,ar7,in_stack_ffffffc0);
    uVar3 = FUN_8c013fb4(uVar1 * 0x880 + ar4 + 0xd1,*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0x10,
                         0x800,ar7);
  }
  return uVar3;
}



/* FUN_8c0fdc20 @ 8c0fdc20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0fdc20(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int in_stack_fffffff0;
  
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0xffffffff;
  iVar1 = 0;
  while (iVar2 = iVar1, iVar2 < 0x400) {
    *(undefined1 *)(ar4 + iVar2 + 4) = 0;
    in_stack_fffffff0 = iVar2;
    iVar1 = iVar2 + 1;
  }
  strcpy(ar4 + 0x2b,&DAT_8c141e2a,ar6,ar7,in_stack_fffffff0);
  strcpy(ar4 + 0x2c,&DAT_8c141e2c,ar6,ar7,in_stack_fffffff0);
  return ar4;
}



/* FUN_8c0fde5c @ 8c0fde5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fde5c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  undefined4 in_stack_ffffffe8;
  
  ar5_00 = ar5;
  FUN_8c0f3ebc(ar4,ar5,ar6,ar7);
  FUN_8c0f3ebc(ar4 + 0x170,ar5_00,ar6,ar7);
  FUN_8c0fdf10(ar4,ar4 + 0x170,ar6,ar7,in_stack_ffffffe8);
  ar5_01 = ar4;
  FUN_8c0fdf08(ar4 + 0x170,ar4,ar6,ar7,in_stack_ffffffe8);
  ar6_00 = log_message(ar5,ar5_01,ar6,ar7);
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  FUN_8c0143c0(ar4 + 0x2e0,ar5,ar6_00,ar7);
  *(undefined1 *)(ar4 + ar6_00 + 0x2e1) = 0;
  *(undefined4 *)(ar4 + 0x300) = 0;
  return ar4;
}



/* FUN_8c0fdf18 @ 8c0fdf18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fdf18(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined1 *)(ar4 + 0x2e0) = 0;
    Class_12c1f0_m0_0f4108(ar4 + 0x170,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Class_12c1f0_m0_0f4108(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0fdf74 @ 8c0fdf74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fdf74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ain0;
  
  ain0 = ar5;
  uVar1 = get_field_4_0dac48(ar4 + 0x170,ar5,ar6,ar7);
  FUN_8c0fdf08(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = list_node_next(uVar2,uVar1,ar6,ar7);
  FUN_8c0fdf10(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = ar5;
  FUN_8c0fdf10(uVar2,ar5,ar6,ar7,ain0);
  uVar1 = list_node_next(ar5,uVar1,ar6,ar7);
  FUN_8c0fdf08(uVar1,ar5,ar6,ar7,ain0);
  *(int *)(ar4 + 0x300) = *(int *)(ar4 + 0x300) + 1;
  return ar4;
}



/* s_Item_pointer_is_NULL_CItemLi_0fe01c @ 8c0fe018 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_Item_pointer_is_NULL_CItemLi_0fe01c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 in_stack_ffffffe0;
  
  if (*(int *)(ar4 + 0x300) != 0) {
    if (ar5 == 0) {
      noop_102824(s_Item_pointer_is_NULL_CItemList___8c141e8f,0,0,0xd,0xffffffff);
      report_error_message
                (s_Item_pointer_is_NULL___8c141ebb,s_CItemList__TakeOutItem___8c141ed2,1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = list_node_next(ar5,ar5,ar6,ar7);
      uVar2 = get_field_4_0dac48(ar5,ar5_00,ar6,ar7);
      FUN_8c0fdf08(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      uVar1 = get_field_4_0dac48(ar5,uVar2,ar6,ar7);
      uVar2 = list_node_next(ar5,uVar2,ar6,ar7);
      FUN_8c0fdf10(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf08(ar5,0,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf10(ar5,0,ar6,ar7,in_stack_ffffffe0);
      *(int *)(ar4 + 0x300) = *(int *)(ar4 + 0x300) + -1;
    }
  }
  return ar4;
}



/* s_Invalid_Item_number_CItemLis_0fe110 @ 8c0fe108 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Invalid_Item_number_CItemLis_0fe110(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = list_node_next(ar4,ar5,ar6,ar7);
  if ((ar5 < 0) || (*(int *)(ar4 + 0x300) < ar5)) {
    noop_102824(s_Invalid_Item_number__CItemList___8c141eeb,0,0,0xd,0xffffffff);
    report_error_message(s_Invalid_Item_number_8c141f18,s_CItemList__DeleteItem___8c141f2c,1,2);
    ar4_00 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      ar4_00 = list_node_next(ar4_00,ar5_00,ar6,ar7);
    }
  }
  return ar4_00;
}



/* FUN_8c0fe1b8 @ 8c0fe1b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe1b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  undefined4 in_stack_ffffffe8;
  
  ar5_00 = ar5;
  FUN_8c0fddc4(ar4,ar5,ar6,ar7);
  FUN_8c0fddc4(ar4 + 0xc,ar5_00,ar6,ar7);
  FUN_8c0fdf10(ar4,ar4 + 0xc,ar6,ar7,in_stack_ffffffe8);
  ar5_01 = ar4;
  FUN_8c0fdf08(ar4 + 0xc,ar4,ar6,ar7,in_stack_ffffffe8);
  ar6_00 = log_message(ar5,ar5_01,ar6,ar7);
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  FUN_8c0143c0(ar4 + 0x18,ar5,ar6_00,ar7);
  *(undefined1 *)(ar4 + ar6_00 + 0x19) = 0;
  *(undefined4 *)(ar4 + 0x38) = 0;
  return ar4;
}



/* FUN_8c0fe250 @ 8c0fe250 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe250(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined1 *)(ar4 + 0x18) = 0;
    FUN_8c0da170(ar4 + 0xc,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    FUN_8c0da170(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0fe2a0 @ 8c0fe2a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe2a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ain0;
  
  ain0 = ar5;
  uVar1 = get_field_4_0dac48(ar4 + 0xc,ar5,ar6,ar7);
  FUN_8c0fdf08(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = list_node_next(uVar2,uVar1,ar6,ar7);
  FUN_8c0fdf10(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = ar5;
  FUN_8c0fdf10(uVar2,ar5,ar6,ar7,ain0);
  uVar1 = list_node_next(ar5,uVar1,ar6,ar7);
  FUN_8c0fdf08(uVar1,ar5,ar6,ar7,ain0);
  *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x38) + 1;
  return ar4;
}



/* s_Item_pointer_is_NULL_CNodePt_0fe338 @ 8c0fe334 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_Item_pointer_is_NULL_CNodePt_0fe338(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 in_stack_ffffffe0;
  
  if (*(int *)(ar4 + 0x38) != 0) {
    if (ar5 == 0) {
      noop_102824(s_Item_pointer_is_NULL_CNodePtrLis_8c141f84,0,0,0xd,0xffffffff);
      report_error_message
                (s_Item_pointer_is_NULL___8c141ebb,s_CNodePtrList__TakeOutItem___8c141fb3,1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = list_node_next(ar5,ar5,ar6,ar7);
      uVar2 = get_field_4_0dac48(ar5,ar5_00,ar6,ar7);
      FUN_8c0fdf08(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      uVar1 = get_field_4_0dac48(ar5,uVar2,ar6,ar7);
      uVar2 = list_node_next(ar5,uVar2,ar6,ar7);
      FUN_8c0fdf10(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf08(ar5,0,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf10(ar5,0,ar6,ar7,in_stack_ffffffe0);
      *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x38) + -1;
    }
  }
  return ar4;
}



/* s_Invalid_Item_number_CNodePtr_0fe424 @ 8c0fe41c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Invalid_Item_number_CNodePtr_0fe424(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = list_node_next(ar4,ar5,ar6,ar7);
  if ((ar5 < 0) || (*(int *)(ar4 + 0x38) < ar5)) {
    noop_102824(s_Invalid_Item_number__CNodePtrLis_8c141fcf,0,0,0xd,0xffffffff);
    report_error_message(s_Invalid_Item_number_8c141f18,s_CNodePtrList__DeleteItem___8c141fff,1,2);
    ar4_00 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      ar4_00 = list_node_next(ar4_00,ar5_00,ar6,ar7);
    }
  }
  return ar4_00;
}



/* FUN_8c0fe4c4 @ 8c0fe4c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fe4c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c0fdf10(ar4,ar4 + 0xc,ar6,ar7,in_PR);
  FUN_8c0fdf08(ar4 + 0xc,ar4,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x38) = 0;
  return 0;
}



/* FUN_8c0fe4f8 @ 8c0fe4f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe4f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  undefined4 in_stack_ffffffe8;
  
  ar5_00 = ar5;
  FUN_8c0fdde4(ar4,ar5,ar6,ar7);
  FUN_8c0fdde4(ar4 + 0x58,ar5_00,ar6,ar7);
  FUN_8c0fdf10(ar4,ar4 + 0x58,ar6,ar7,in_stack_ffffffe8);
  ar5_01 = ar4;
  FUN_8c0fdf08(ar4 + 0x58,ar4,ar6,ar7,in_stack_ffffffe8);
  ar6_00 = log_message(ar5,ar5_01,ar6,ar7);
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  FUN_8c0143c0(ar4 + 0xb0,ar5,ar6_00,ar7);
  *(undefined1 *)(ar4 + ar6_00 + 0xb1) = 0;
  *(undefined4 *)(ar4 + 0xd0) = 0;
  return ar4;
}



/* FUN_8c0fe59c @ 8c0fe59c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe59c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined1 *)(ar4 + 0xb0) = 0;
    FUN_8c0c4ad0(ar4 + 0x58,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    FUN_8c0c4ad0(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0fe5f0 @ 8c0fe5f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe5f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ain0;
  
  ain0 = ar5;
  uVar1 = get_field_4_0dac48(ar4 + 0x58,ar5,ar6,ar7);
  FUN_8c0fdf08(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = list_node_next(uVar2,uVar1,ar6,ar7);
  FUN_8c0fdf10(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = ar5;
  FUN_8c0fdf10(uVar2,ar5,ar6,ar7,ain0);
  uVar1 = list_node_next(ar5,uVar1,ar6,ar7);
  FUN_8c0fdf08(uVar1,ar5,ar6,ar7,ain0);
  *(int *)(ar4 + 0xd0) = *(int *)(ar4 + 0xd0) + 1;
  return ar4;
}



/* s_CWaterSnowList_TakeOut_0fe694 @ 8c0fe690 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_CWaterSnowList_TakeOut_0fe694(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 in_stack_ffffffe0;
  
  if (*(int *)(ar4 + 0xd0) != 0) {
    if (ar5 == 0) {
      report_error_message
                (s_POne_pointer_is_NULL___8c14201a,s_CWaterSnowList__TakeOut___8c142031,1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = list_node_next(ar5,ar5,ar6,ar7);
      uVar2 = get_field_4_0dac48(ar5,ar5_00,ar6,ar7);
      FUN_8c0fdf08(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      uVar1 = get_field_4_0dac48(ar5,uVar2,ar6,ar7);
      uVar2 = list_node_next(ar5,uVar2,ar6,ar7);
      FUN_8c0fdf10(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf08(ar5,0,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf10(ar5,0,ar6,ar7,in_stack_ffffffe0);
      *(int *)(ar4 + 0xd0) = *(int *)(ar4 + 0xd0) + -1;
    }
  }
  return ar4;
}



/* FUN_8c0fe7f4 @ 8c0fe7f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fe7f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c0fdf10(ar4,ar4 + 0x58,ar6,ar7,in_PR);
  FUN_8c0fdf08(ar4 + 0x58,ar4,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0xd0) = 0;
  return 0xd0;
}



/* FUN_8c0fe82c @ 8c0fe82c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe82c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  undefined4 in_stack_ffffffe8;
  
  ar5_00 = ar5;
  FUN_8c0fde34(ar4,ar5,ar6,ar7);
  FUN_8c0fde34(ar4 + 0x14,ar5_00,ar6,ar7);
  FUN_8c0fdf10(ar4,ar4 + 0x14,ar6,ar7,in_stack_ffffffe8);
  ar5_01 = ar4;
  FUN_8c0fdf08(ar4 + 0x14,ar4,ar6,ar7,in_stack_ffffffe8);
  ar6_00 = log_message(ar5,ar5_01,ar6,ar7);
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  FUN_8c0143c0(ar4 + 0x28,ar5,ar6_00,ar7);
  *(undefined1 *)(ar4 + ar6_00 + 0x29) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  return ar4;
}



/* FUN_8c0fe8c4 @ 8c0fe8c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe8c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ain0;
  
  ain0 = ar5;
  uVar1 = get_field_4_0dac48(ar4 + 0x14,ar5,ar6,ar7);
  FUN_8c0fdf08(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = list_node_next(uVar2,uVar1,ar6,ar7);
  FUN_8c0fdf10(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = ar5;
  FUN_8c0fdf10(uVar2,ar5,ar6,ar7,ain0);
  uVar1 = list_node_next(ar5,uVar1,ar6,ar7);
  FUN_8c0fdf08(uVar1,ar5,ar6,ar7,ain0);
  *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + 1;
  return ar4;
}



/* s_CItemGLoadRequestList_TakeOu_0fe960 @ 8c0fe95c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_CItemGLoadRequestList_TakeOu_0fe960(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 in_stack_ffffffe0;
  
  if (*(int *)(ar4 + 0x48) != 0) {
    if (ar5 == 0) {
      report_error_message
                (s_GLoad_Unit_pointer_is_NULL___8c142084,s_CItemGLoadRequestList__TakeOut___8c1420a1
                 ,1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = list_node_next(ar5,ar5,ar6,ar7);
      uVar2 = get_field_4_0dac48(ar5,ar5_00,ar6,ar7);
      FUN_8c0fdf08(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      uVar1 = get_field_4_0dac48(ar5,uVar2,ar6,ar7);
      uVar2 = list_node_next(ar5,uVar2,ar6,ar7);
      FUN_8c0fdf10(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf08(ar5,0,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf10(ar5,0,ar6,ar7,in_stack_ffffffe0);
      *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + -1;
    }
  }
  return ar4;
}



/* FUN_8c0feab8 @ 8c0feab8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0feab8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c0fdf10(ar4,ar4 + 0x14,ar6,ar7,in_PR);
  FUN_8c0fdf08(ar4 + 0x14,ar4,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}



/* FUN_8c0ff67c @ 8c0ff67c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ff67c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c441324,free_if_nonnull_wrap_03a3dc,4,9,in_PR);
  return uVar1;
}



/* FUN_8c0ff6a0 @ 8c0ff6a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ff6a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c4412f4,free_if_nonnull_wrap_0247b0,4,9,in_PR);
  return uVar1;
}



/* FUN_8c0ff6f0 @ 8c0ff6f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ff6f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0151a0(ar4 + 0xc,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0ffc1c @ 8c0ffc1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ffc1c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_015c94(ar4 + 0x15c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x14c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x13c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 300,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    FUN_8c0ff6f0(ar4 + 0xd8,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* s_GRAPHICS_0ffcb6 @ 8c0ffcb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_0ffcb6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  wchar16 *ar5_00;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  ar7_00 = 2;
  uVar2 = 0x8c4413f4;
  FUN_8c239170(0x8c4413d4,0x8c4413dc,0x8c4413f4,2);
  FUN_8c015ccc(ar4 + 0x15c,0x8c4413d4,uVar2,ar7_00,ar5);
  ar5_00 = u____8c1421cc;
  FUN_8c015cd4(ar4 + 0x15c,u____8c1421cc,uVar2,ar7_00,ar5);
  FUN_8c014a0c(ar4 + 0x15c,ar5_00,uVar2,ar7_00);
  uVar2 = get_field_1c_0ffd74(ar4 + 0x15c,ar5_00,uVar2,ar7_00);
  iVar1 = FUN_8c02100c(ar5,s_UsrPointer_pvm_8c142254,s_GRAPHICS_8c142263,uVar2);
  if (iVar1 == -1) {
    report_error_message(s_Failed_to_load_user_pointer_text_8c14226c,&DAT_8c142292,1,2);
  }
  return 1;
}



/* FUN_8c0fff84 @ 8c0fff84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fff84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_PR;
  
  if (*(int *)(ar4 + 0x188) != 6) {
    ar5_00 = *(undefined4 *)(ar4 + 0x188);
    FUN_8c0fffec(ar4 + 0x15c,ar5_00,ar6,ar7,in_PR);
    (**(code **)(*(int *)(ar4 + 0x15c) + 0x14))((int *)(ar4 + 0x15c),ar5_00,ar6,ar7);
  }
  return 1;
}



/* FUN_8c1002a8 @ 8c1002a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1002a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = input_is_mask_set_400_01ef20(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = input_is_mask_set_10000_01ec68(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c015cd4(ar4 + 0x15c,u____8c1421cc,ar6,ar7,0);
      FUN_8c0c51a0(ar4,2,ar6,ar7);
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* FUN_8c10031c @ 8c10031c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c10031c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = input_is_mask_set_10000_01ec68(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(ar4 + 0x188) == 2)) {
      FUN_8c015cd4(ar4 + 0x15c,u____8c1421cc,ar6,ar7,1);
      FUN_8c0c51a0(ar4,3,ar6,ar7);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c100694 @ 8c100694 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c100694(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c015cd4(ar4 + 0x15c,u____8c1421cc,ar6,ar7,ar4);
  return uVar1;
}



/* free_if_nonnull_wrap_10270c @ 8c10270c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_10270c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* free_if_nonnull_wrap_102790 @ 8c102790 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_102790(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c102bd0 @ 8c102bd0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c102bd0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  int iVar5;
  
  uVar2 = 0xf;
  uVar3 = ar5;
  uVar4 = ar6;
  FUN_8c102d20(0xf,ar5,ar6,ar7);
  FUN_8c1fa6b8(uVar2,uVar3,uVar4,ar7);
  FUN_8c1fb3e0(0x8c4c3ea0,0xb3b160,uVar4,ar7);
  uVar4 = ar4;
  pvr_25825a(ar4,ar5,ar6,ar7);
  FUN_8c1fa6e2(ar4,ar5,ar6,ar7);
  ar6_00 = 0x8c44d498;
  uVar3 = 0x8c441478;
  uVar2 = 0;
  FUN_8c1f5dd0(0,0x8c441478,0x8c44d498,ar7);
  FUN_8c1f8114(uVar2,uVar3,ar6_00,ar7);
  uVar2 = 0;
  FUN_8c102d20(0,uVar3,ar6_00,ar7);
  for (iVar5 = 8; 0 < iVar5; iVar5 = iVar5 + -1) {
    ar6_00 = 0x800;
    uVar2 = 8;
    uVar3 = 0x8c4594c0;
    ar7 = 0x8c45a860;
    iVar1 = thunk_FUN_8c1f38c0(8,0x8c4594c0,0x800,0x8c45a860);
    if ((iVar1 == -0x17) || (iVar1 == -0x21)) {
      FUN_8c102d40(uVar2,uVar3,ar6_00,ar7);
      game_shutdown_b(uVar2,uVar3,ar6_00,ar7);
    }
    else if (iVar1 == 0) break;
  }
  if (iVar5 == 0) {
    FUN_8c102d40(uVar2,uVar3,ar6_00,ar7);
    game_shutdown_b(uVar2,uVar3,ar6_00,ar7);
  }
  uVar3 = FUN_8c0100b0(uVar2,uVar3,ar6_00,ar7,uVar4);
  return uVar3;
}



/* FUN_8c102d40 @ 8c102d40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c102d40(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c010080(ar4,ar5,ar6,ar7);
  FUN_8c1f38f2(ar4,ar5,ar6,ar7,in_PR);
  FUN_8c1f813e(ar4,ar5,ar6,ar7);
  FUN_8c1f62f0(ar4,ar5,ar6,ar7);
  FUN_8c2590bc(ar4,ar5,ar6,ar7);
  noop_1fb43a(ar4,ar5,ar6,ar7,in_PR);
  FUN_8c1fa6f2(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c102d20(0xf,ar5,ar6,ar7);
  return uVar1;
}



/* s_HIGYOLINE_102eee @ 8c102eec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * s_HIGYOLINE_102eee(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff0;
  
  FUN_8c02f064(ar4,ar5,ar6,ar7);
  *ar4 = &DAT_8c12c3c4;
  FUN_8c0300a4(ar4 + 0x27,ar5,ar6,ar7);
  FUN_8c02eac0(ar4 + 0x207,ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 0x20) = 0;
  ar4[0xe1] = 0xffffffff;
  ar4[0x213] = 0;
  ar4[0x214] = 0;
  *(undefined1 *)((int)ar4 + 0x855) = 0;
  ar4[0x217] = 0;
  ar4[0x216] = 0;
  *(undefined1 *)(ar4 + 0x215) = 0;
  strcpy(ar4 + 0xd9,"HIGYOLINE",ar6,ar7,in_stack_fffffff0);
  strcpy(ar4 + 0x27,"HIGYOLINE1",ar6,ar7,in_stack_fffffff0);
  strcpy(ar4 + 0x2f,"STATUS_FORMAT",ar6,ar7,in_stack_fffffff0);
  strcpy(ar4 + 0x37,&DAT_8c1eeec3,ar6,ar7,in_stack_fffffff0);
  ar4[0xe2] = 4;
  ar4[0x210] = 0;
  ar4[0x211] = 0;
  ar4[0x212] = 0x22;
  *(undefined1 *)((int)ar4 + 0x9a) = 2;
  *(undefined1 *)((int)ar4 + 0x865) = 0;
  ar4[0x21c] = 1;
  ar4[0x21b] = 1;
  ar4[0x21a] = 1;
  ar4[0x21c] = 0;
  ar4[0x21d] = 0;
  *(undefined1 *)(ar4 + 0x219) = 0;
  ar4[0x218] = 0x1b;
  ar4[0x21e] = 0;
  *(undefined1 *)(ar4 + 0x21f) = 0;
  ar4[0x220] = 0;
  ar4[0x221] = 0;
  ar4[0x222] = 0;
  ar4[0x223] = 0;
  return ar4;
}



/* Class_12c3c4_m0_1030a4 @ 8c1030a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12c3c4_m0_1030a4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12c3c4;
    free_if_nonnull_wrap_02eaec(ar4 + 0x207,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_129c70_m0_02f1b8(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* s_REACTION_CATCH_1046a0 @ 8c10469c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_REACTION_CATCH_1046a0(int ar4,int ar5,int ar6,char *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [20];
  
  if (*(int *)(ar4 + 4) == 1) {
    iVar1 = 1;
  }
  else {
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
    Vec3_ctor_copy(auStack_1c,ar5 + 0x10,ar6,ar7);
    Vec3_assign_wrap_05f640(ar4,auStack_1c,ar6,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
    *(undefined4 *)(ar4 + 0x94) = 0x15;
    if (*(int *)(ar4 + 900) == -1) {
      FUN_8c030870(ar4 + 0x9c,0,ar6,ar7);
      ar7 = "REACTION_CATCH";
      uVar2 = 0;
      FUN_8c030568(ar4 + 0x9c,0x25,0,"REACTION_CATCH",&DAT_8c1eeec3);
      strcpy(ar4 + 0xbc,"REACTION_CATCH",uVar2,ar7,ar5);
      strcpy(ar4 + 0xdc,&DAT_8c1eeec3,uVar2,ar7,ar5);
      *(undefined4 *)(ar4 + 0xfc) = 0;
      ar6 = ar4 + 0x9c;
      uVar2 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),ar6,ar7);
      *(undefined4 *)(ar4 + 900) = uVar2;
      *(undefined4 *)(ar4 + 0x14c) = 0;
      uVar2 = 2;
      FUN_8c030870(ar4 + 0x9c,2,ar6,ar7);
    }
    iVar1 = *(int *)(ar4 + 900);
    if (iVar1 != -1) {
      *(undefined4 *)(ar4 + 0x94) = *(undefined4 *)(ar4 + 0x154);
      iVar1 = FUN_8c0fa2b8(0x8c35468c,uVar2,ar6,ar7);
      if (iVar1 == 0) {
        *(undefined4 *)(ar4 + 0x94) = 0;
        FUN_8c030870(ar4 + 0x9c,3,ar6,ar7);
        *(undefined4 *)(ar4 + 4) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0;
        *(undefined4 *)(ar4 + 8) = 0x19;
        *(undefined1 *)(ar4 + 0x91) = 1;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined1 *)(ar4 + 0x80) = 1;
        iVar1 = 900;
        *(undefined4 *)(ar4 + 900) = 0xffffffff;
      }
    }
  }
  return iVar1;
}



/* s_STATUS_SUCKED_1093aa @ 8c1093a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_STATUS_SUCKED_1093aa(int ar4,int *ar5,int *ar6,char *ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *ar5_00;
  int *ar6_00;
  undefined4 in_stack_ffffffac;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar1 = (**(code **)(*(int *)(*ar6 + 8) + 0xb8))(*ar6,ar5,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 4) != 1)) {
    iVar1 = get_field_6c_02f46c(*ar6,ar5_00,ar6_00,ar7);
    if ((iVar1 == 0) && (iVar1 = get_field_70_05f490(*ar6,ar5_00,ar6_00,ar7), iVar1 == 0)) {
      ar6_00 = (int *)0x1b;
      FUN_8c0b9ed4(ar6[6],0xe,0x1b,ar7);
      *(undefined4 *)(ar4 + 0x38) = 2;
      *(undefined4 *)(ar4 + 4) = 1;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 8) = 99;
      ar5_00 = (int *)0xc7;
      FUN_8c02f298(ar4,199,ar6_00,ar7);
      *(undefined1 *)(ar4 + 0x98) = 10;
    }
    else if (*(int *)(ar4 + 4) != 0xb) {
      *(undefined4 *)(ar4 + 0x38) = 2;
      *(undefined4 *)(ar4 + 4) = 0xb;
      *(undefined4 *)(ar4 + 8) = 99;
      *(undefined4 *)(ar4 + 0x40) = 0xd;
      FUN_8c02f298(ar4,0x4af,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x840) = 0xd;
      DAT_8c1eee30 = 0xd;
      *(undefined4 *)(ar4 + 0x844) = 0x22;
      DAT_8c1eee34 = 0x22;
      ar7 = "STATUS_SUCKED";
      ar6_00 = (int *)0x0;
      ar5_00 = (int *)0x19;
      FUN_8c0306d4(ar4 + 0x9c,0x19,0,"STATUS_SUCKED");
      if (*(int *)(ar4 + 0x6c) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                  (*(int *)(ar4 + 0x6c),ar5_00,ar6_00,ar7);
        *(undefined4 *)(ar4 + 0x6c) = 0;
      }
    }
    if ((*(char *)(ar4 + 0x864) == '\x01') && (*(int *)(ar4 + 4) == 0)) {
      *(undefined1 *)(ar4 + 0x864) = 0;
    }
  }
  uVar2 = FUN_8c02bef8(ar6[1],ar5_00,ar6_00,ar7);
  if ((short)uVar2 == 1) {
LAB_8c109510:
    iVar1 = get_field_8_1097a0(ar6[3],ar5_00,ar6_00,ar7);
    if ((((iVar1 == 1) && (*(char *)(ar4 + 0x864) != '\x01')) &&
        (iVar1 = FUN_8c02c518(ar6[1],ar5_00,ar6_00,ar7), iVar1 == -1)) && (*(int *)(ar4 + 4) != 0xd)
       ) {
      *(undefined1 *)(ar4 + 0x864) = 1;
      FUN_8c02f298(ar4,0x2b9,ar6_00,ar7);
      ar5_00 = (int *)0x0;
      FUN_8c109798(ar6[3],0,ar6_00,ar7,in_stack_ffffffac);
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 6;
      *(undefined4 *)(ar4 + 0x38) = 2;
    }
  }
  else {
    uVar2 = FUN_8c02bef8(ar6[1],ar5_00,ar6_00,ar7);
    in_stack_ffffffac = CONCAT22((short)uVar2,(short)in_stack_ffffffac);
    if ((short)uVar2 == 2) goto LAB_8c109510;
  }
  iVar1 = get_field_c4_066448(ar6[3],ar5_00,ar6_00,ar7);
  if (((iVar1 == 0) && (*(int *)(ar4 + 0x40) == 0)) && (*(int *)(ar4 + 900) == -1)) {
    iVar1 = get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7);
    if ((iVar1 == 3) || (iVar1 = get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7), iVar1 == 4)) {
      ar5_00 = (int *)0xf;
      iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,0xf,ar6_00,ar7);
      if (iVar1 < 1) {
        ar7 = (char *)0xa;
        ar5_00 = ar5;
        ar6_00 = ar6;
        iVar1 = FUN_8c02f880(ar4,ar5,ar6,10);
        if (iVar1 == 0) goto LAB_8c1096ec;
      }
      uVar2 = FUN_8c03584c(ar6[3],ar5_00,ar6_00,ar7);
      if (((char)uVar2 == '\x02') && (*(char *)(ar4 + 0x98) < '\b')) {
        ar7 = "REACTION_FEED_FULL";
        ar6_00 = (int *)0x0;
        FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_FEED_FULL");
        ar5_00 = (int *)0x1;
        FUN_8c06643c(ar6[3],1,ar6_00,ar7);
      }
    }
    else {
      ar5_00 = (int *)0xf;
      iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,0xf,ar6_00,ar7);
      if ((0 < iVar1) && (*(char *)(ar4 + 0x865) == '\x01')) {
        ar7 = "REACTION_FEED_FULL";
        ar6_00 = (int *)0x0;
        FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_FEED_FULL");
        ar5_00 = (int *)0x1;
        FUN_8c06643c(ar6[3],1,ar6_00,ar7);
      }
    }
  }
LAB_8c1096ec:
  iVar1 = *(int *)(ar4 + 0x6c);
  if (((iVar1 == 0) && (iVar1 = get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7), iVar1 == 2)) &&
     (iVar1 = *(int *)(ar4 + 0x40), iVar1 == 0)) {
    iVar3 = (**(code **)(*ar5 + 0x11c))(ar5,0xf,ar6_00,ar7);
    iVar1 = 1;
    if (((0 < iVar3) && (iVar1 = (int)*(char *)(ar4 + 0x865), iVar1 == 0)) &&
       ((iVar1 = *(int *)(ar4 + 4), iVar1 != 0xd && (iVar1 = *(int *)(ar4 + 4), iVar1 != 6)))) {
      FUN_8c02f298(ar4,0x2b9,ar6_00,ar7);
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 6;
      *(undefined4 *)(ar4 + 0x38) = 2;
      iVar1 = 0x865;
      *(undefined1 *)(ar4 + 0x865) = 1;
    }
  }
  return iVar1;
}



/* FUN_8c109e40 @ 8c109e40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c109e40(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_ffffffe4;
  
  iVar1 = *(int *)(ar4 + 0x874);
  if (iVar1 == 0) {
    *(undefined1 *)(ar4 + 0x98) = 3;
    FUN_8c02cb7c(*(int *)(ar5 + 4) + 0xa8,0,ar6,ar7,in_stack_ffffffe4);
    FUN_8c02cb74(*(int *)(ar5 + 4) + 0xa8,0,ar6,ar7);
    uVar2 = 1;
    FUN_8c035718(*(undefined4 *)(ar5 + 0x10),1,ar6,ar7);
    iVar1 = FUN_8c02c340(*(int *)(ar5 + 4) + 0x90,uVar2,ar6,ar7);
    if (0x5e < iVar1) {
      uVar2 = get_field_4_02d1e0(*(int *)(ar5 + 4) + 0x90,uVar2,ar6,ar7);
      iVar1 = libgcc_divide_helper_0101e4(uVar2,10,ar6,ar7);
      FUN_8c02cbbc(*(int *)(ar5 + 4) + 0x90,iVar1 * 9,ar6,ar7);
    }
    iVar1 = 0x874;
    *(undefined4 *)(ar4 + 0x874) = 1;
  }
  return iVar1;
}



/* FUN_8c110bec @ 8c110bec callers=0 callees=0 */

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



/* FUN_8c11189a @ 8c11189a callers=0 callees=0 */

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



/* FUN_8c111e72 @ 8c111e72 callers=0 callees=0 */

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



/* FUN_8c113e98 @ 8c113e98 callers=0 callees=0 */

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



/* FUN_8c1209ec @ 8c1209ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1209ec(int *ar4,int ar5,int *ar6,int *ar7)

{
  char cVar1;
  uint uVar2;
  int *ar6_00;
  int *ar7_00;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int in_stack_ffffffd8;
  int *piVar7;
  
  piVar3 = (int *)&stack0xffffffd8;
  uVar4 = 0;
  ar4[1] = ar4[1] + 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  if (ar5 != 0) {
    cVar1 = *(char *)(ar5 + 4);
    iVar5 = 0;
    if (0 < *ar4) {
      do {
        if (cVar1 == *(char *)((int)ar4 + iVar5 * 2 + 8)) {
          ar7_00 = (int *)0x0;
          ar6_00 = ar7;
          uVar2 = (**(code **)(ar5 + 0x1c))(ar5,(int)*(char *)((int)ar4 + iVar5 * 2 + 9),ar7,0);
          uVar4 = uVar4 | (uVar2 & 0xff) == 0;
          FUN_8c1209be(ar4,iVar5,ar6_00,ar7_00,in_stack_ffffffd8);
        }
        else {
          iVar5 = iVar5 + 1;
        }
      } while (iVar5 < *ar4);
    }
    if (*ar4 != 0) {
      iVar5 = 0;
      ar6_00 = ar4;
      (**(code **)(ar5 + 0x1c))(ar5,0xf8,ar4,&stack0xffffffd8);
      ar7_00 = piVar3;
      if (-1 < iVar5) {
        piVar3 = (int *)(iVar5 + (int)ar7);
        for (iVar6 = 0; iVar6 < (int)(uint)*(byte *)(ar5 + 9); iVar6 = iVar6 + 1) {
          ar6_00 = ar4;
          piVar7 = piVar3;
          uVar2 = FUN_8c1113d0(*(undefined4 *)(iVar6 * 4 + *(int *)(ar5 + 0x10)),0xf8,ar4,piVar3);
          uVar4 = uVar4 | (uVar2 & 0xff) == 0;
          ar7_00 = piVar3;
          piVar3 = piVar7;
        }
      }
    }
  }
  iVar5 = ar4[1];
  ar4[1] = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    (*(code *)ar6[6])(ar6,ar4,ar6_00,ar7_00);
  }
  return uVar4;
}



/* FUN_8c1213d0 @ 8c1213d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1213d0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *ar4_00;
  int iVar7;
  undefined4 *a6;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int ar4_01;
  uint *ar4_02;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 *ar7_00;
  uint ain0;
  uint uVar14;
  uint uVar15;
  int a4;
  undefined4 *puStack_5c;
  uint uStack_58;
  uint uStack_50;
  
  ar4_01 = *(int *)(ar4 + 0xfc);
  a4 = *(int *)(ar4 + 0x108);
  iVar6 = ar5;
  uVar1 = (**(code **)(a4 + 8))(a4,ar5,ar6,ar7);
  iVar2 = (**(code **)(a4 + 0x70))(a4,iVar6,ar6,ar7);
  iVar10 = *(int *)(ar5 * 8 + ar4 + 0x26c);
  ain0 = (uint)*(ushort *)(ar4 + 0x288);
  iVar3 = (**(code **)(a4 + 0x20))(a4,iVar6,ar6,ar7);
  iVar4 = (**(code **)(a4 + 0x9c))(a4,iVar6,ar6,ar7);
  uVar5 = (**(code **)(a4 + 0x50))(a4,iVar6,ar6,ar7);
  iVar6 = (**(code **)(a4 + 0x94))(a4,iVar6,ar6,ar7);
  ar7_00 = (undefined4 *)(ar4 + 0xf4);
  ar4_00 = (undefined4 *)FUN_8c11c914(ar4_01,ain0 << 1,4,ar7_00);
  puVar13 = (undefined4 *)(ain0 * 4);
  ar4_02 = (uint *)((int)puVar13 + (int)ar4_00);
  memset(ar4_02,0xff,puVar13,ar7_00);
  uStack_50 = 0;
  puVar11 = (undefined4 *)((ain0 - 1) * 2 + iVar10);
  if (uVar5 != 0) {
    do {
      uVar14 = 0;
      uStack_58 = 0;
      puStack_5c = *(undefined4 **)(ar4 + 0x284);
      iVar10 = uVar1 * ((uint)*(ushort *)(iVar6 + uStack_50 * 2) - iVar3);
      if (uVar1 != 0) {
        do {
          uVar15 = uVar14;
          uVar9 = (**(code **)(a4 + 0x84))(a4,uVar14,puVar13,ar7_00);
          iVar7 = (**(code **)(a4 + 0xc0))(uVar9,uVar15,puVar13,ar7_00);
          a6 = (undefined4 *)(**(code **)(a4 + 0x68))(uVar9,uVar15,puVar13,ar7_00);
          uVar9 = (**(code **)(a4 + 0x60))(uVar9,uVar15,puVar13,ar7_00);
          if (iVar4 == 0) {
            iVar7 = (uint)*(ushort *)(iVar2 + (iVar10 + uVar14) * 2) + iVar7;
            iVar8 = FUN_8c1211ac(iVar7,uVar9,a6,ar7_00);
            ar7_00 = (undefined4 *)*puStack_5c;
            FUN_8c1211f0(ar4_00,iVar7,a6,ar7_00,ain0,uVar9,iVar7);
          }
          else {
            uVar15 = (uint)*(ushort *)(iVar2 + (iVar10 + uVar14) * 2);
            puVar13 = (undefined4 *)(uVar15 & 1);
            iVar7 = ((int)uVar15 >> 1) + iVar7;
            iVar8 = FUN_8c121260(iVar7,puVar13,uVar9,a6);
            ar7_00 = a6;
            FUN_8c1212d4(ar4_00,iVar7,puVar13,a6,*puStack_5c,ain0,uVar9,puVar13);
            a6 = puVar13;
          }
          uStack_58 = uStack_58 + iVar8;
          uVar14 = uVar14 + 1;
          puStack_5c = (undefined4 *)puStack_5c[4];
          puVar13 = a6;
        } while (uVar14 < uVar1);
      }
      uVar14 = 0;
      puVar12 = ar4_02;
      puVar13 = puVar11;
      ar7_00 = ar4_00;
      if (ain0 != 0) {
        do {
          uVar15 = ar4_00[uVar14] - (uStack_58 >> 1);
          if (uVar15 < ar4_02[uVar14]) {
            *puVar12 = uVar15;
            *(undefined2 *)puVar13 = *(undefined2 *)(uStack_50 * 2 + iVar6);
          }
          uVar14 = uVar14 + 1;
          *ar7_00 = 0;
          puVar13 = (undefined4 *)((int)puVar13 + -2);
          ar7_00 = ar7_00 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar14 < ain0);
      }
      uStack_50 = uStack_50 + 1;
    } while (uStack_50 < uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x8c121684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(ar4_01 + 0x18))(ar4_00,ar4 + 0xf4);
  return uVar9;
}



/* FUN_8c1b91d8 @ 8c1b91d8 callers=0 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b91d8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c1b9994(ar4,ar5,ar6,ar7,uRamffffffd2);
  TrapAlways(0xcb);
  FUN_8c1b9044(ar4,ar5,ar6,ar7,uRamffffffd2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9428 @ 8c1b9428 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9428(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int in_r1;
  int in_GBR;
  
  uVar1 = FUN_8c1ba396(ar4,ar5,ar6,ar7,*(undefined4 *)(&stack0x00000000 + -in_r1));
  *(short *)(in_GBR + 0x196) = (short)uVar1;
  uVar1 = FUN_8c1ba1a4(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c1b9444 @ 8c1b9444 callers=0 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9444(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain1)

{
  uint uVar1;
  int in_r2;
  undefined4 in_R7_BANK;
  int in_GBR;
  char in_M;
  char in_Q;
  undefined4 *puVar2;
  
  *(undefined2 *)(in_GBR + 0x1a2) = *(undefined2 *)(in_GBR + 0x194);
  *(undefined4 *)(ain1 + -0xc) = in_R7_BANK;
  uVar1 = (int)(char)(ain1 + -8) << 1 | (uint)(0 < ain1 + -8);
  if (in_Q == '\0' && in_M == '\0') {
    puVar2 = (undefined4 *)(uVar1 - in_r2);
  }
  else if (in_Q == '\0' && in_M == '\x01') {
    puVar2 = (undefined4 *)(uVar1 + in_r2);
  }
  else if (in_Q == '\x01' && in_M == '\0') {
    puVar2 = (undefined4 *)(uVar1 + in_r2);
  }
  else {
    puVar2 = (undefined4 *)(uVar1 - in_r2);
  }
  FUN_8c1b9b9e(ar4,ar5,ar6,ar7,*puVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b946e @ 8c1b946e callers=0 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b946e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_00000000;
  
  FUN_8c1b979e(ar4,ar5,ar6,ar7,in_stack_00000000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b95f2 @ 8c1b95f2 callers=0 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b95f2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  short *extraout_r1;
  char *unaff_r12;
  int in_GBR;
  char extraout_S;
  undefined4 extraout_MACH;
  undefined4 extraout_MACL;
  undefined4 in_stack_00000000;
  
  FUN_8c1b91a2(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c1b940a(ar4,ar5,ar6,(int)*unaff_r12,in_stack_00000000);
  *(short *)(in_GBR + 0x1cc) = (short)uVar1;
  if (extraout_S != '\0') {
    mac_wOp(CONCAT44(extraout_MACH,extraout_MACL),(int)*extraout_r1 * (int)*extraout_r1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* halt_unimplemented_wrap_1b9668 @ 8c1b9668 callers=0 callees=0 */

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Unknown calling convention */

undefined4
halt_unimplemented_wrap_1b9668(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}



/* FUN_8c1b9702 @ 8c1b9702 callers=0 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9702(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r13;
  int in_GBR;
  undefined4 in_stack_00000000;
  
  uVar1 = FUN_8c1b9552(ar4,ar5,ar6,ar7,in_stack_00000000);
  *(char *)(in_GBR + 0xd1) = (char)uVar1;
  uVar2 = *(uint *)(unaff_r13 + 0x38);
  *(short *)(in_GBR + 0x192) = (short)uVar1;
  uVar1 = FUN_8c1b9444(ar4,ar5,ar6,ar7,
                       uVar2 & 0xffff0000 | (uVar2 & 0xff) << 8 | (uVar2 & 0xff00) >> 8);
  FUN_8c1b9556(ar4,ar5,ar6,ar7,uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b970a @ 8c1b970a callers=0 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b970a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int in_r3;
  int in_GBR;
  
  *(char *)(in_GBR + 0xd1) = (char)(undefined2)ain0;
  *(undefined2 *)(in_GBR + 0x192) = (undefined2)ain0;
  FUN_8c1b9444(ar4,ar5,ar6,ar7,*(undefined4 *)(&stack0x00000000 + in_r3));
  FUN_8c1b9556(ar4,ar5,ar6,ar7,*(undefined4 *)(&stack0x00000000 + in_r3));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b979e @ 8c1b979e callers=0 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b979e(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r2;
  uint in_r2;
  undefined1 extraout_r3;
  undefined1 in_r3;
  int ar7_00;
  int iVar4;
  char *unaff_r9;
  int unaff_r12;
  undefined4 in_R1_BANK;
  int in_GBR;
  bool bVar5;
  
  while( true ) {
    ar7_00 = (int)*unaff_r9;
    unaff_r9 = unaff_r9 + 1;
    uVar3 = (uint)((in_r2 & 0x80000000) != 0);
    iVar4 = uVar3 + ar4;
    *(uint *)(unaff_r12 + 4) = ain0;
    *ar5 = in_r3;
    *(char *)(in_GBR + 0xeb) = (char)ain0;
    iVar2 = FUN_8c1b9422(ar4,ar5,ar6,ar7_00,*(undefined4 *)((int)register0x0000003c + uVar3 + ar4));
    *(undefined4 *)(iVar2 + -4) = in_R1_BANK;
    *(short *)(in_GBR + 0x108) = (short)(undefined4 *)(iVar2 + -4);
    *(undefined1 **)(ar5 + 0x38) = (undefined1 *)((int)register0x0000003c + iVar4);
    uVar3 = FUN_8c1b960a(ar4,ar5,ar6,ar7_00);
    bVar5 = (uVar3 & 0x80000000) != 0;
    uVar1 = (ushort)(uVar3 << 1) | (ushort)bVar5;
    if (bVar5) break;
    uVar3 = FUN_8c1b946e(ar4,ar5,ar6,ar7_00);
    if ((int)unaff_r9 < 0) {
      ain0 = uVar3 >> (~(uint)unaff_r9 & 0x1f) + 1;
    }
    else {
      ain0 = uVar3 << ((uint)unaff_r9 & 0x1f);
    }
    register0x0000003c = (BADSPACEBASE *)(int)(char)ar4;
    *(short *)(in_GBR + 0x72) = (short)ain0;
    in_r2 = extraout_r2;
    in_r3 = extraout_r3;
  }
  *(ushort *)(in_GBR + 0x11a) = uVar1;
  iVar4 = (int)DAT_8c1b988a;
  *(ushort *)(in_GBR + 0xc) = uVar1;
  FUN_8c1b9664(ar4,ar5,ar6,iVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9902 @ 8c1b9902 callers=0 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4
FUN_8c1b9902(undefined4 ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7,undefined4 ain0)

{
  byte unaff_r9;
  undefined4 unaff_r11;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x150) = (undefined2)ain0;
  *ar6 = unaff_r11;
  FUN_8c1b9794(ar4,ar5,ar6,ar7,*(undefined4 *)(uint)unaff_r9);
  FUN_8c1b9750(ar4,ar5,(int)DAT_8c1b9aa2,ar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9996 @ 8c1b9996 callers=0 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9996(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int a7;
  int in_GBR;
  undefined4 in_stack_00000000;
  
  a7 = (int)DAT_8c1b9a52;
  *(undefined2 *)(in_GBR + 0xc) = (undefined2)ain0;
  FUN_8c1b9702(ar4,ar5,ar6,a7);
  uVar1 = FUN_8c1b982c(ar4,ar5,ar6,a7);
  *(char *)(in_GBR + 0xeb) = (char)uVar1;
  *(char *)(in_GBR + 0x93) = (char)uVar1;
  *(short *)(in_GBR + 0x108) = (short)uVar1;
  *(BADSPACEBASE **)(ar5 + 0x38) = register0x0000003c;
  uVar1 = FUN_8c1b9802(ar4,ar5,ar6,a7);
  *(char *)(in_GBR + 0x98) = (char)uVar1;
  uVar1 = FUN_8c1ba442(ar4,ar5,ar6,a7);
  *(short *)(in_GBR + 0x116) = (short)uVar1;
  *(char *)(in_GBR + 0xf) = (char)uVar1;
  FUN_8c1b9834(ar4,ar5,ar6,a7);
  FUN_8c1b95f2(ar4,ar5,ar6,a7);
  uVar1 = FUN_8c1b9996(ar4,ar5,ar6,a7,in_stack_00000000);
  *(short *)(in_GBR + 0x12a) = (short)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9a72 @ 8c1b9a72 callers=0 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9a72(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int extraout_r1;
  int extraout_r2;
  undefined1 extraout_r3;
  char cVar2;
  int a7;
  char *unaff_r9;
  int unaff_r12;
  int in_GBR;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte extraout_M;
  byte extraout_Q;
  byte in_IMASK;
  byte extraout_S;
  byte extraout_T;
  byte extraout_T_00;
  undefined4 in_stack_00000000;
  
  FUN_8c1b9902(ar4,ar5,ar6,ar7,in_stack_00000000);
  uVar1 = FUN_8c1b9756(ar4,ar5,ar6,ar7,
                       *(undefined4 *)((int)&stack0x00000000 + (uint)extraout_T + extraout_r1));
  *(char *)(in_GBR + 0x9d) = (char)uVar1;
  cVar2 = (char)ar4;
  *(short *)(in_GBR + 0x72) = (short)uVar1;
  a7 = (int)*unaff_r9;
  *(undefined4 *)(unaff_r12 + 4) = uVar1;
  mac_wOp_wrap_1b992a(ar4,ar5,ar6,a7);
  *ar5 = extraout_r3;
  uVar1 = FUN_8c1b970a(ar4,ar5,ar6,a7,*(undefined4 *)(int)cVar2);
  *(char *)(in_GBR + 0xb3) = (char)uVar1;
  *(ushort *)(in_GBR + 0x9a) = (ushort)uVar1 ^ 0x9f;
  *(uint *)(extraout_r2 + -4) =
       (uint)extraout_T_00 | (uint)extraout_S << 1 | (uint)in_IMASK << 4 | (uint)extraout_Q << 8 |
       (uint)extraout_M << 9 | (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d |
       (uint)in_MD << 0x1e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9c3a @ 8c1b9c3a callers=0 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9c3a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  int extraout_r3;
  int in_GBR;
  
  FUN_8c1ba52c(ar4,ar5,ar6,ar7);
  *(undefined4 *)(extraout_r3 + 0x18) = ar6;
  FUN_8c1b9a34(ar4,ar5,ar6,ar7,s0);
  uVar1 = FUN_8c1b9b9e(ar4,ar5,ar6,(int)&s0 << 0x10 | (uint)&s0 >> 0x10,s0);
  *(short *)(in_GBR + 0x18e) = (short)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9c52 @ 8c1b9c52 callers=0 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9c52(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short *extraout_r1;
  uint extraout_r2;
  int extraout_r2_00;
  int iVar3;
  int *unaff_r9;
  char *unaff_r12;
  int in_GBR;
  char extraout_S;
  char extraout_S_00;
  bool bVar4;
  undefined4 extraout_MACH;
  undefined4 extraout_MACH_00;
  undefined4 extraout_MACL;
  undefined4 extraout_MACL_00;
  
  iVar3 = (int)*unaff_r12;
  FUN_8c1b9a72(ar4,ar5,ar6,iVar3);
  uVar2 = DAT_8c1b9cd8;
  uVar1 = FUN_8c1b9c3a(ar4,DAT_8c1b9cd8,ar6,iVar3);
  *(short *)(in_GBR + 0x1ce) = (short)uVar1;
  bVar4 = (extraout_r2 & 1) != 0;
  if (extraout_S != '\0') {
    mac_lOp(CONCAT44(extraout_MACH,extraout_MACL),
            (longlong)*unaff_r9 * (longlong)*(int *)(extraout_r2 >> 1 | (uint)bVar4 << 0x1f));
  }
  uVar1 = FUN_8c1bab30(ar4,uVar2,ar6,iVar3,*(undefined4 *)(&stack0x00000000 + (-(uint)bVar4 - ar4)))
  ;
  *(short *)(unaff_r12 + 0xf) = (short)uVar1;
  iVar3 = (int)unaff_r12[1];
  FUN_8c1b9aa8(ar4,uVar2,ar6,iVar3);
  uVar2 = FUN_8c1b9c52(ar4,uVar2,ar6,iVar3);
  *(short *)(in_GBR + 0x1cc) = (short)uVar2;
  if (extraout_S_00 != '\0') {
    mac_wOp(CONCAT44(extraout_MACH_00,extraout_MACL_00),(int)*extraout_r1 * (int)*extraout_r1);
  }
  *(short *)(extraout_r2_00 + 0x1a) = (short)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9e00 @ 8c1b9e00 callers=0 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9e00(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c1b9c70(ar4,ar5,ar6,ar7,in_PR);
  FUN_8c1b9b02(ar4,ar5,ar6,ar7,in_PR);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* crt0_start @ 8c1ef400 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 crt0_start(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *ar4_00;
  undefined4 uVar1;
  undefined4 a6;
  
  a6 = 0x41474553;
  uVar1 = 0x8c00f400;
  ar4_00 = (undefined4 *)&DAT_8c00c000;
  do {
    *ar4_00 = 0x41474553;
    ar4_00 = ar4_00 + 1;
  } while (ar4_00 < (undefined4 *)0x8c00f400);
  FUN_8c1ef440(ar4_00,0x8c00f400,0x41474553,ar7,
               "\n--------------------------------------------------\n Shinobi Library for Dreamcast Version 1.65\n Copyright (C) 1998,1999 SEGA\n--------------------------------------------------\nShinobi Ver 1.65 Build:Dec 07 1999 10:48:27\n"
              );
  FUN_8c1ef430(ar4_00,uVar1,a6,ar7);
  main(ar4_00,uVar1,a6,ar7);
  uVar1 = FUN_8c1ef438(ar4_00,uVar1,a6,ar7);
  return uVar1;
}



/* FUN_8c1ef4fa @ 8c1ef4fa callers=0 callees=0 */

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



/* FUN_8c1f0a72 @ 8c1f0a72 callers=0 callees=0 */

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



/* FUN_8c1f0c14 @ 8c1f0c14 callers=0 callees=0 */

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



/* s_KATANA_FLASH_1f0d98 @ 8c1f0d94 callers=0 callees=0 */

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
      iVar3 = func_0x8c1f093c(_DAT_8c2739d8 + 0x1a,"KATANA_FLASH____",0xc,ar7);
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



/* s_KATANA_FLASH_1f0ea0 @ 8c1f0e9c callers=0 callees=0 */

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



/* FUN_8c1f1a7c @ 8c1f1a7c callers=0 callees=0 */

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
        iVar3 = FUN_8c1f19ec(0xb06e,1,a6,uVar6);
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



/* FUN_8c1f2008 @ 8c1f2008 callers=0 callees=0 */

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



/* FUN_8c1f2b70 @ 8c1f2b70 callers=0 callees=0 */

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



/* FUN_8c1f2d3e @ 8c1f2d3e callers=0 callees=0 */

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



/* FUN_8c1f2e3e @ 8c1f2e3e callers=0 callees=0 */

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



/* g2dma_1f4794 @ 8c1f4794 callers=0 callees=0 */

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



/* FUN_8c1f5a5e @ 8c1f5a5e callers=0 callees=0 */

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



/* FUN_8c1f67c2 @ 8c1f67c2 callers=0 callees=0 */

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



/* FUN_8c1f696e @ 8c1f696e callers=0 callees=0 */

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



/* s_SEGA_FH01_OK_1f6ce4 @ 8c1f6ce2 callers=0 callees=0 */

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



/* FUN_8c1f71b6 @ 8c1f71b6 callers=0 callees=0 */

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



/* FUN_8c1f7264 @ 8c1f7264 callers=0 callees=0 */

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



/* FUN_8c1f7558 @ 8c1f7558 callers=0 callees=0 */

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



/* FUN_8c1fa6b8 @ 8c1fa6b8 callers=0 callees=0 */

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



/* s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de @ 8c1fa7d0 callers=0 callees=0 */

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
  FUN_8c1fad9a("\r\n --- ADDRESS CHECKER TRAP --- \r\n",ar5,ar6,ar7,ain0);
  FUN_8c1faa08("FR0-7:    ",10,8,ar7);
  FUN_8c1faa08("FR8-15:   ",0x12,8,ar7);
  FUN_8c1faa08("FR0-7(B): ",0x1a,8,ar7);
  uVar6 = 8;
  uVar5 = 0x22;
  FUN_8c1faa08("FR8-15(B):",0x22,8,ar7);
  FUN_8c1fad9a("FPUL: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x2a],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" FPSCR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x2b],uVar5,uVar6,ar7);
  FUN_8c1faa08("\r\nR0-7:     ",0x2d,8,ar7);
  uVar5 = _DAT_8c475ec8[0x3c];
  _DAT_8c475ec8[0x3c] = _DAT_8c475ec8[1];
  FUN_8c1faa08("R8-15:    ",0x35,8,ar7);
  uVar6 = 8;
  _DAT_8c475ec8[0x3c] = uVar5;
  uVar5 = 2;
  FUN_8c1faa08("\r\nR0-7(B):  ",2,8,ar7);
  FUN_8c1fad9a("MACL: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3c],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" MACH: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3d],uVar5,uVar6,ar7);
  FUN_8c1fad9a("\r\nVBR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3e],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" GBR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3f],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" DBR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(*_DAT_8c475ec8,uVar5,uVar6,ar7);
  FUN_8c1fad9a("\r\nPR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x40],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" PC: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x41],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" SR: ",uVar5,uVar6,ar7);
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
    a4 = "Please, cancel the interrupt from ADRESS CHECKER,\r\n then hit RETURN key.";
  }
  else {
    a4 = "Please, cancel the interrupt from ADRESS CHECKER.";
  }
  FUN_8c1fad9a(a4,uVar5,uVar6,ar7);
  do {
    uVar4 = FUN_8c1fad0a(a4,uVar5,uVar6,ar7);
  } while ((char)uVar4 != '\r');
  _DAT_ff000024 = ain0 & 0xffff;
  uVar5 = FUN_8c1fad44(a4,uVar5,uVar6,ar7);
  return uVar5;
}



/* FUN_8c1faa08 @ 8c1faa08 callers=0 callees=0 */

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
  a4 = 0x14;
  FUN_8c1f03a6(0x14,FUN_8c1fbe84,ar6,ar7,ain0);
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



/* FUN_8c1fbdfc @ 8c1fbdfc callers=0 callees=0 */

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



/* FUN_8c1fbfd2 @ 8c1fbfd2 callers=0 callees=0 */

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



/* FUN_8c1fd1e2 @ 8c1fd1e2 callers=0 callees=0 */

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



/* FUN_8c1fd626 @ 8c1fd626 callers=0 callees=0 */

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



/* FUN_8c1fda04 @ 8c1fda04 callers=0 callees=0 */

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



/* FUN_8c201dea @ 8c201dea callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c201dea(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c20202e(ar4,ar5,ar6,ar7,ar4);
  return (uint)*ar4;
}



/* FUN_8c201dfe @ 8c201dfe callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201dfe(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c20202e(ar4,ar5,ar6,ar7,ar4);
  *ar4 = 0;
  return uVar1;
}



/* FUN_8c203406 @ 8c203406 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203406(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  int *unaff_r13;
  int iVar3;
  undefined4 in_PR;
  
  iVar1 = unaff_r13[2];
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    FUN_8c204e6c(iVar1,ar5,ar6,ar7,in_PR);
    iVar1 = iVar3;
  }
  iVar1 = *unaff_r13;
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    FUN_8c204e6c(iVar1,ar5,ar6,ar7,in_PR);
    iVar1 = iVar3;
  }
  iVar1 = unaff_r13[7];
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    FUN_8c204e6c(iVar1,ar5,ar6,ar7,in_PR);
    iVar1 = iVar3;
  }
  iVar1 = unaff_r13[5];
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    FUN_8c204e6c(iVar1,ar5,ar6,ar7,in_PR);
    iVar1 = iVar3;
  }
  ar6_00 = &DAT_8c47eba8;
  ar5_00 = &DAT_8c496ba8;
  puVar2 = (undefined2 *)&DAT_8c47eba8;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 0xc;
  } while (puVar2 < &DAT_8c496ba8);
  *unaff_r13 = 0;
  unaff_r13[1] = 0;
  unaff_r13[2] = 0;
  unaff_r13[3] = 0;
  unaff_r13[4] = 0;
  unaff_r13[5] = 0;
  unaff_r13[6] = 0;
  unaff_r13[7] = 0;
  unaff_r13[8] = 0;
  unaff_r13[9] = 0;
  iVar1 = DAT_8c275428;
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    FUN_8c2057c0(iVar1,ar5_00,ar6_00,ar7,in_PR);
    iVar1 = iVar3;
  }
  DAT_8c275428 = 0;
  return 0;
}



/* FUN_8c203a92 @ 8c203a92 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c203a92(uint ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint ar5_00;
  uint uVar5;
  uint unaff_r12;
  ushort *ar5_01;
  int in_stack_ffffffd0;
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined4 uStack_1c;
  uint uStack_18;
  
  ar5_00 = ar4;
  FUN_8c205640(&uStack_28,ar4,ar6,ar7);
  ar5_01 = (ushort *)0x0;
  if (DAT_8c275428 != (ushort *)0x0) {
    ar7 = 0xf000;
    puVar4 = DAT_8c275428;
    do {
      if (((*puVar4 & 0xf000) == uStack_28) &&
         (ar5_00 = 0, puVar3 = puVar4, ar6 = uStack_18, uStack_18 != 0)) {
        do {
          puVar4 = puVar3;
          uVar5 = ar5_00;
          if (*(int *)(puVar3 + ar5_00 * 2 + 6) == 0) {
            puVar4 = (ushort *)0x0;
            uVar5 = uStack_18;
            unaff_r12 = ar5_00;
            ar5_01 = puVar3;
          }
          ar5_00 = uVar5 + 1;
          puVar3 = puVar4;
        } while (ar5_00 < uStack_18);
      }
      if (ar5_01 == (ushort *)0x0) {
        puVar4 = *(ushort **)(puVar4 + 2);
      }
    } while (puVar4 != (ushort *)0x0);
  }
  if (ar5_01 == (ushort *)0x0) {
    ar5_01 = (ushort *)FUN_8c205768(0,ar5_00,ar6,ar7);
    if (ar5_01 != (ushort *)0x0) {
      puVar4 = ar5_01 + 6;
      do {
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      } while (puVar4 < ar5_01 + 0x26);
      unaff_r12 = 0;
      FUN_8c2057e6(&DAT_8c275428,ar5_01,ar6,ar7,in_stack_ffffffd0);
      *ar5_01 = *ar5_01 | (ushort)uStack_28;
      puVar4 = ar5_01;
      if ((_DAT_8c4a9bb0 & 4) == 0) {
        iVar1 = FUN_8c2049ec(1,uStack_1c,ar5_01,ar7);
      }
      else {
        FUN_8c204006(&stack0xffffffd0,&iStack_2c,ar6,ar7);
        iVar1 = FUN_8c2049ec((uint)(in_stack_ffffffd0 < iStack_2c),uStack_1c,ar5_01,ar7);
      }
      if (iVar1 == 0) goto LAB_8c203baa;
      FUN_8c2057c0(ar5_01,uStack_1c,puVar4,ar7,in_stack_ffffffd0);
    }
    uVar2 = 3;
  }
  else {
LAB_8c203baa:
    *(uint *)(ar4 + 0x1c) = unaff_r12 * (uStack_24 >> 2) * 4 + *(int *)(ar5_01 + 4);
    *(uint *)(ar5_01 + unaff_r12 * 2 + 6) = ar4;
    *ar5_01 = *ar5_01 | 2;
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c203cd0 @ 8c203cd0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203cd0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint unaff_r11;
  ushort *ar5_00;
  uint in_stack_ffffffd4;
  uint uStack_28;
  uint uStack_1c;
  
  FUN_8c205640(&stack0xffffffd4,ar4,ar6,ar7);
  uVar7 = 0;
  ar5_00 = (ushort *)0x0;
  puVar4 = DAT_8c275428;
  while (puVar4 != (ushort *)0x0) {
    if (((*puVar4 & 0xf000) == in_stack_ffffffd4) && (uVar5 = 0, puVar3 = puVar4, uStack_1c != 0)) {
      do {
        puVar4 = puVar3;
        uVar6 = uVar5;
        if ((*(int *)(puVar3 + uVar5 * 2 + 6) != 0) &&
           (uVar5 * (uStack_28 >> 2) * 4 + *(int *)(puVar3 + 4) == *(int *)(ar4 + 0x1c))) {
          puVar4 = (ushort *)0x0;
          uVar6 = uStack_1c;
          unaff_r11 = uVar5;
          ar5_00 = puVar3;
        }
        uVar5 = uVar6 + 1;
        puVar3 = puVar4;
      } while (uVar5 < uStack_1c);
    }
    if (ar5_00 == (ushort *)0x0) {
      puVar4 = *(ushort **)(puVar4 + 2);
    }
  }
  if (ar5_00 == (ushort *)0x0) {
    uVar7 = 7;
  }
  else {
    bVar1 = false;
    uVar5 = 0;
    (ar5_00 + unaff_r11 * 2 + 6)[0] = 0;
    (ar5_00 + unaff_r11 * 2 + 6)[1] = 0;
    if (uStack_1c != 0) {
      do {
        iVar2 = uVar5 * 2;
        uVar5 = uVar5 + 1;
        if (*(int *)(ar5_00 + iVar2 + 6) != 0) {
          bVar1 = true;
        }
      } while (uVar5 < uStack_1c);
    }
    if (!bVar1) {
      iVar2 = FUN_8c203bda(*(undefined4 *)(ar5_00 + 4),1,0,uStack_1c);
      if (iVar2 != 0) {
        return iVar2;
      }
      puVar4 = ar5_00;
      FUN_8c2057f8(&DAT_8c275428,ar5_00,uVar7,uStack_1c);
      FUN_8c2057c0(ar5_00,puVar4,uVar7,uStack_1c,in_stack_ffffffd4);
    }
    uVar7 = 0;
  }
  return uVar7;
}



/* FUN_8c204092 @ 8c204092 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c204092(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int unaff_r14;
  undefined4 in_PR;
  
  FUN_8c205020(unaff_r14,unaff_r14 + 4,ar6,ar7,in_PR);
  FUN_8c205020(&DAT_8c275414,&DAT_8c275418,ar6,ar7,in_PR);
  FUN_8c205020(unaff_r14 + 8,unaff_r14 + 0xc,ar6,ar7,in_PR);
  FUN_8c205020(&DAT_8c27541c,&DAT_8c275420,ar6,ar7,in_PR);
  return 0;
}



/* FUN_8c2043d4 @ 8c2043d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2043d4(undefined4 ar4,int ar5,uint ar6,int ar7,int s0,int s4)

{
  ushort *ar6_00;
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *ar6_01;
  int ain0;
  int iVar4;
  int iVar5;
  undefined4 a7;
  undefined4 in_stack_ffffffd0;
  
  iVar5 = ar5 + ar6;
  if ((int)ar6 < 0) {
    uVar1 = ~(~ar6 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar6 & 0x1f;
  }
  a7 = 0;
  if (uVar1 != 0) {
    ar6 = ar6 + (0x20 - uVar1);
  }
  iVar2 = (int)(short)ar4;
  ar6_00 = (ushort *)0x0;
  puVar3 = (ushort *)(&DAT_8c275408)[iVar2 * 5];
  iVar4 = ar5;
  while (puVar3 != (ushort *)0x0) {
    iVar4 = *(int *)(puVar3 + 6);
    if ((((ar5 < iVar4) || (*(int *)(puVar3 + 8) + iVar4 <= ar5)) || (iVar5 < iVar4)) ||
       (*(int *)(puVar3 + 8) + iVar4 < iVar5)) {
      puVar3 = *(ushort **)(puVar3 + 4);
    }
    else {
      ar6_00 = puVar3;
      puVar3 = (ushort *)0x0;
    }
  }
  if (ar6_00 == (ushort *)0x0) {
    return 3;
  }
  if (*(uint *)(ar6_00 + 8) == ar6) {
    FUN_8c204ed2(&DAT_8c275408 + iVar2 * 5,&DAT_8c27540c + iVar2 * 5,ar6_00,0,in_stack_ffffffd0);
    FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_00,a7,in_stack_ffffffd0);
    *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(ar6_00 + 6);
    *(int *)(ar6_00 + 10) = ar7;
    *ar6_00 = 1;
    if ((short)ar4 == 0) {
      *ar6_00 = *ar6_00 | 0x80;
    }
    else {
      *ar6_00 = *ar6_00 | 0x100;
    }
    if (s0 != 0) {
      *ar6_00 = *ar6_00 | 2;
    }
    if (s4 != 0) {
      *ar6_00 = *ar6_00 | 4;
    }
    iVar5 = *(int *)(ar6_00 + 8);
  }
  else {
    if (*(int *)(ar6_00 + 6) != ar5) {
      if (*(int *)(ar6_00 + 6) + *(int *)(ar6_00 + 8) == iVar5) {
        ar6_01 = (ushort *)FUN_8c204e40(0,iVar4,iVar5,0);
        if (ar6_01 == (ushort *)0x0) {
          return 3;
        }
        *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar6;
        *(int *)(ar6_01 + 6) = ar5;
        *(uint *)(ar6_01 + 8) = ar6;
        FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_01,a7,
                     &DAT_8c275400 + iVar2 * 5);
        *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(ar6_01 + 6);
        *(int *)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x80;
        }
        else {
          *ar6_01 = *ar6_01 | 0x100;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      else {
        ar6_01 = (ushort *)FUN_8c204e40(0,iVar4,iVar5,0);
        if (ar6_01 == (ushort *)0x0) {
          return 3;
        }
        ain0 = FUN_8c204e40(puVar3,iVar4,iVar5,a7);
        if (ain0 == 0) {
          FUN_8c204e6c(ar6_01,iVar4,iVar5,a7,0);
          return 3;
        }
        iVar5 = *(int *)(ar6_00 + 8);
        iVar4 = *(int *)(ar6_00 + 6);
        *(int *)(ar6_00 + 8) = ar5 - iVar4;
        *(int *)(ar6_01 + 6) = ar5;
        *(uint *)(ar6_01 + 8) = ar6;
        FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_01,a7,ain0);
        *(uint *)(ain0 + 0xc) = ar5 + ar6;
        *(uint *)(ain0 + 0x10) = (iVar5 - ar6) - (ar5 - iVar4);
        FUN_8c204eb6(&DAT_8c27540c + iVar2 * 5,ain0,(&DAT_8c27540c)[iVar2 * 5],a7,ain0);
        *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(ar6_01 + 6);
        *(int *)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x80;
        }
        else {
          *ar6_01 = *ar6_01 | 0x100;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      (&DAT_8c275410)[iVar2 * 5] = (&DAT_8c275410)[iVar2 * 5] - *(int *)(ar6_01 + 8);
      return 0;
    }
    puVar3 = (ushort *)FUN_8c204e40(0,iVar4,iVar5,0);
    if (puVar3 == (ushort *)0x0) {
      return 3;
    }
    *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(ar6_00 + 6);
    *(uint *)(puVar3 + 8) = ar6;
    *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar6;
    *(uint *)(ar6_00 + 6) = *(int *)(ar6_00 + 6) + ar6;
    FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,puVar3,a7,
                 &DAT_8c275400 + iVar2 * 5);
    *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(puVar3 + 6);
    *(int *)(puVar3 + 10) = ar7;
    if ((short)ar4 == 0) {
      *puVar3 = *puVar3 | 0x80;
    }
    else {
      *puVar3 = *puVar3 | 0x100;
    }
    if (s0 != 0) {
      *puVar3 = *puVar3 | 2;
    }
    if (s4 != 0) {
      *puVar3 = *puVar3 | 4;
    }
    iVar5 = *(int *)(puVar3 + 8);
  }
  (&DAT_8c275410)[iVar2 * 5] = (&DAT_8c275410)[iVar2 * 5] - iVar5;
  return 0;
}



/* FUN_8c2046d2 @ 8c2046d2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2046d2(undefined4 ar4,uint ar5,undefined4 *ar6,undefined4 ar7)

{
  ushort *puVar1;
  ushort *ar6_00;
  uint uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined4 in_stack_ffffffdc;
  
  if ((int)ar5 < 0) {
    uVar2 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ar5 & 0x1f;
  }
  if (uVar2 != 0) {
    ar5 = ar5 + (0x20 - uVar2);
  }
  iVar7 = (int)(short)ar4;
  puVar3 = (ushort *)(&DAT_8c275408)[iVar7 * 5];
  ar6_00 = (ushort *)0x0;
  while (puVar1 = puVar3, puVar1 != (ushort *)0x0) {
    if (*(int *)(puVar1 + 8) < (int)ar5) {
      puVar3 = *(ushort **)(puVar1 + 4);
    }
    else {
      puVar3 = (ushort *)0x0;
      ar6_00 = puVar1;
    }
  }
  if (ar6_00 == (ushort *)0x0) {
LAB_8c204880:
    uVar4 = 3;
  }
  else {
    sVar6 = (short)ar7;
    if (*(uint *)(ar6_00 + 8) == ar5) {
      FUN_8c204ed2(&DAT_8c275408 + iVar7 * 5,&DAT_8c27540c + iVar7 * 5,ar6_00,ar7,in_stack_ffffffdc)
      ;
      FUN_8c204e92(&DAT_8c275400 + iVar7 * 5,&DAT_8c275404 + iVar7 * 5,ar6_00,ar7,in_stack_ffffffdc)
      ;
      *ar6_00 = 1;
      if (sVar6 == 8) {
        ar6[7] = *(undefined4 *)(ar6_00 + 6);
        *(undefined4 **)(ar6_00 + 10) = ar6;
        *ar6_00 = *ar6_00 | 8;
      }
      else {
        if (sVar6 != 0x2000) goto LAB_8c204880;
        *ar6 = *(undefined4 *)(ar6_00 + 6);
        *(undefined4 **)(ar6_00 + 10) = ar6;
        *ar6_00 = *ar6_00 | 0x2000;
      }
      *ar6_00 = *ar6_00 | 4;
      iVar5 = *(int *)(ar6_00 + 8);
    }
    else {
      puVar3 = (ushort *)FUN_8c204e40(0,0,ar6,ar7);
      if (puVar3 == (ushort *)0x0) goto LAB_8c204880;
      *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(ar6_00 + 6);
      *(uint *)(puVar3 + 8) = ar5;
      *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar5;
      *(uint *)(ar6_00 + 6) = ar5 + *(int *)(ar6_00 + 6);
      FUN_8c204e92(&DAT_8c275400 + iVar7 * 5,&DAT_8c275404 + iVar7 * 5,puVar3,ar7,
                   &DAT_8c275400 + iVar7 * 5);
      if (sVar6 == 8) {
        ar6[7] = *(undefined4 *)(puVar3 + 6);
        *(undefined4 **)(puVar3 + 10) = ar6;
        *puVar3 = *puVar3 | 8;
      }
      else {
        if (sVar6 != 0x2000) goto LAB_8c204880;
        *ar6 = *(undefined4 *)(puVar3 + 6);
        *(undefined4 **)(puVar3 + 10) = ar6;
        *puVar3 = *puVar3 | 0x2000;
      }
      *puVar3 = *puVar3 | 4;
      iVar5 = *(int *)(puVar3 + 8);
    }
    uVar4 = 0;
    (&DAT_8c275410)[iVar7 * 5] = (&DAT_8c275410)[iVar7 * 5] - iVar5;
  }
  return uVar4;
}



/* FUN_8c2048aa @ 8c2048aa callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2048aa(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  ushort *puVar1;
  ushort *ar6_00;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_stack_ffffffdc;
  
  if ((int)ar5 < 0) {
    uVar3 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar3 = ar5 & 0x1f;
  }
  if (uVar3 != 0) {
    ar5 = ar5 + (0x20 - uVar3);
  }
  iVar7 = (int)(short)ar4;
  puVar4 = (ushort *)(&DAT_8c275408)[iVar7 * 5];
  ar6_00 = (ushort *)0x0;
  while (puVar1 = puVar4, puVar1 != (ushort *)0x0) {
    if (*(int *)(puVar1 + 8) < (int)ar5) {
      puVar4 = *(ushort **)(puVar1 + 4);
    }
    else {
      puVar4 = (ushort *)0x0;
      ar6_00 = puVar1;
    }
  }
  if (ar6_00 == (ushort *)0x0) {
LAB_8c204964:
    uVar5 = 3;
  }
  else {
    if (*(uint *)(ar6_00 + 8) == ar5) {
      FUN_8c204ed2(&DAT_8c275408 + iVar7 * 5,&DAT_8c27540c + iVar7 * 5,ar6_00,ar7,in_stack_ffffffdc)
      ;
      FUN_8c204e92(&DAT_8c275400 + iVar7 * 5,&DAT_8c275404 + iVar7 * 5,ar6_00,ar7,in_stack_ffffffdc)
      ;
      *(undefined4 *)(ar6 + 0x1c) = *(undefined4 *)(ar6_00 + 6);
      *(int *)(ar6_00 + 10) = ar6;
      *ar6_00 = 1;
      if ((short)ar4 == 0) {
        uVar2 = *ar6_00 | 0x20;
      }
      else {
        uVar2 = *ar6_00 | 0x40;
      }
      *ar6_00 = uVar2;
      *ar6_00 = *ar6_00 | 4;
      iVar6 = *(int *)(ar6_00 + 8);
    }
    else {
      puVar4 = (ushort *)FUN_8c204e40(0,0,ar6,ar7);
      if (puVar4 == (ushort *)0x0) goto LAB_8c204964;
      *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(ar6_00 + 6);
      *(uint *)(puVar4 + 8) = ar5;
      *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar5;
      *(uint *)(ar6_00 + 6) = *(int *)(ar6_00 + 6) + ar5;
      FUN_8c204e92(&DAT_8c275400 + iVar7 * 5,&DAT_8c275404 + iVar7 * 5,puVar4,ar7,
                   &DAT_8c275400 + iVar7 * 5);
      *(undefined4 *)(ar6 + 0x1c) = *(undefined4 *)(puVar4 + 6);
      *(int *)(puVar4 + 10) = ar6;
      if ((short)ar4 == 0) {
        uVar2 = *puVar4 | 0x20;
      }
      else {
        uVar2 = *puVar4 | 0x40;
      }
      *puVar4 = uVar2;
      *puVar4 = *puVar4 | 4;
      iVar6 = *(int *)(puVar4 + 8);
    }
    uVar5 = 0;
    (&DAT_8c275410)[iVar7 * 5] = (&DAT_8c275410)[iVar7 * 5] - iVar6;
  }
  return uVar5;
}



/* FUN_8c204cfc @ 8c204cfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c204cfc(undefined4 ar4,ushort *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined4 *ar5_00;
  undefined4 *puVar3;
  ushort *ar6_00;
  int iVar4;
  ushort *puVar5;
  undefined4 *in_stack_ffffffe0;
  
  iVar4 = (int)(short)ar4;
  *ar5 = *ar5 & 0xfffb;
  ar5_00 = &DAT_8c275404 + iVar4 * 5;
  ar6_00 = ar5;
  FUN_8c204ed2(&DAT_8c275400 + iVar4 * 5,ar5_00,ar5,ar7,in_stack_ffffffe0);
  (&DAT_8c275410)[iVar4 * 5] = (&DAT_8c275410)[iVar4 * 5] + *(int *)(ar5 + 8);
  puVar5 = (ushort *)(&DAT_8c275408)[iVar4 * 5];
  puVar2 = (ushort *)0x0;
  while (puVar1 = puVar5, puVar1 != (ushort *)0x0) {
    ar6_00 = *(ushort **)(ar5 + 6);
    ar5_00 = *(undefined4 **)(puVar1 + 6);
    if ((ar5_00 == (undefined4 *)(*(int *)(ar5 + 8) + (int)ar6_00)) ||
       (ar6_00 == (ushort *)(*(int *)(puVar1 + 8) + (int)ar5_00))) {
      puVar5 = (ushort *)0x0;
      puVar2 = puVar1;
    }
    else {
      puVar5 = *(ushort **)(puVar1 + 4);
    }
  }
  iVar4 = (int)(short)ar4;
  puVar3 = &DAT_8c275400 + iVar4 * 5;
  puVar5 = ar5;
  if (puVar2 != (ushort *)0x0) {
    do {
      ar5 = puVar2;
      if (*(int *)(ar5 + 6) == *(int *)(puVar5 + 6) + *(int *)(puVar5 + 8)) {
        *(undefined4 *)(ar5 + 6) = *(undefined4 *)(puVar5 + 6);
        *(int *)(ar5 + 8) = *(int *)(ar5 + 8) + *(int *)(puVar5 + 8);
      }
      else {
        *(int *)(ar5 + 8) = *(int *)(ar5 + 8) + *(int *)(puVar5 + 8);
      }
      FUN_8c204e6c(puVar5,ar5_00,ar6_00,ar7,in_stack_ffffffe0);
      ar5_00 = &DAT_8c27540c + iVar4 * 5;
      ar6_00 = ar5;
      FUN_8c204ed2(&DAT_8c275408 + iVar4 * 5,ar5_00,ar5,ar7,in_stack_ffffffe0);
      puVar5 = (ushort *)(&DAT_8c275408)[iVar4 * 5];
      puVar2 = (ushort *)0x0;
      while (puVar1 = puVar5, puVar1 != (ushort *)0x0) {
        ar5_00 = *(undefined4 **)(ar5 + 6);
        ar6_00 = *(ushort **)(puVar1 + 6);
        if ((ar6_00 == (ushort *)(*(int *)(ar5 + 8) + (int)ar5_00)) ||
           (ar5_00 == (undefined4 *)(*(int *)(puVar1 + 8) + (int)ar6_00))) {
          puVar5 = (ushort *)0x0;
          puVar2 = puVar1;
        }
        else {
          puVar5 = *(ushort **)(puVar1 + 4);
        }
      }
      puVar5 = ar5;
    } while (puVar2 != (ushort *)0x0);
    puVar3 = &DAT_8c275400 + (short)ar4 * 5;
    in_stack_ffffffe0 = puVar3;
  }
  FUN_8c204e92(puVar3 + 2,puVar3 + 3,ar5,ar7,in_stack_ffffffe0);
  return 0;
}



/* FUN_8c205020 @ 8c205020 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c205020(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int ar6_00;
  undefined4 in_stack_ffffffdc;
  int iVar5;
  
  if (*ar4 != 0) {
    iVar1 = *ar4;
    iVar3 = 0;
    iVar5 = iVar1;
    do {
      iVar4 = iVar3;
      if (*(int *)(iVar5 + 0xc) < *(int *)(iVar1 + 0xc)) {
        iVar5 = iVar1;
      }
      iVar1 = *(int *)(iVar1 + 8);
      iVar3 = iVar4 + 1;
    } while (iVar1 != 0);
    if (1 < iVar3) {
      if (*ar5 != iVar5) {
        FUN_8c204ed2(ar4,ar5,iVar5,ar7,in_stack_ffffffdc);
        ain0 = FUN_8c204eb6(ar5,iVar5,*ar5,ar7,in_stack_ffffffdc);
      }
      iVar4 = iVar4 + -1;
      iVar5 = 0;
      iVar3 = iVar4;
      if (0 < iVar4) {
        do {
          iVar1 = *ar4;
          iVar2 = 0;
          ar6_00 = iVar1;
          if (0 < iVar3) {
            do {
              ar6_00 = *(int *)(ar6_00 + 8);
              iVar2 = iVar2 + 1;
              if (*(int *)(iVar1 + 0xc) < *(int *)(ar6_00 + 0xc)) {
                iVar1 = ar6_00;
              }
            } while (iVar2 < iVar3);
          }
          if (ar6_00 != iVar1) {
            FUN_8c204ed2(ar4,ar5,iVar1,ar7,iVar5);
            ain0 = FUN_8c204eb6(ar5,iVar1,ar6_00,ar7,iVar5);
          }
          iVar3 = iVar3 + -1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
    }
  }
  return ain0;
}



/* FUN_8c2050de @ 8c2050de callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2050de(undefined4 ar4,int ar5,undefined4 *ar6,int ar7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *unaff_r8;
  int unaff_r9;
  int iVar5;
  undefined4 *ar6_00;
  int iVar6;
  ushort *puVar7;
  undefined4 in_PR;
  
  iVar6 = *unaff_r8;
  puVar7 = (ushort *)*ar6;
  if ((iVar6 == 0) || (puVar7 == (ushort *)0x0)) {
    return 0;
  }
  do {
    uVar1 = *puVar7;
    iVar5 = 0;
    if ((((uVar1 & 0x20) != 0) || ((uVar1 & 0x40) != 0)) ||
       (((uVar1 & 2) == 0 &&
        (((uVar1 & 0x80) != 0 || (((uVar1 & 2) == 0 && ((uVar1 & 0x100) != 0)))))))) {
      iVar5 = 1;
    }
    uVar1 = *puVar7;
    if ((((uVar1 & 0x200) != 0) || ((uVar1 & 0x400) != 0)) ||
       (((uVar1 & 2) == 0 &&
        (((uVar1 & 0x800) != 0 || (((uVar1 & 2) == 0 && ((uVar1 & 0x1000) != 0)))))))) {
      iVar5 = 2;
    }
    if (iVar5 == 0) {
      if (iVar6 == 0) {
        return 0;
      }
      if (*(int *)(iVar6 + 0xc) < *(int *)(puVar7 + 6)) {
        do {
          iVar6 = *(int *)(iVar6 + 8);
          if (iVar6 == 0) {
            return 0;
          }
        } while (*(int *)(iVar6 + 0xc) < *(int *)(puVar7 + 6));
      }
      if (iVar6 == 0) {
        return 0;
      }
      if (puVar7 == (ushort *)0x0) {
        return 0;
      }
      if (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc)) {
        do {
          puVar7 = *(ushort **)(puVar7 + 4);
          if (puVar7 == (ushort *)0x0) {
            return 0;
          }
        } while (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc));
      }
    }
    else {
      if (*(int *)(iVar6 + 0xc) + *(int *)(iVar6 + 0x10) == *(int *)(puVar7 + 6)) {
        uVar2 = *(uint *)(iVar6 + 0xc);
        if ((int)uVar2 < 0) {
          uVar2 = ~(~uVar2 + 1 & 0x1f) + 1;
        }
        else {
          uVar2 = uVar2 & 0x1f;
        }
        if (uVar2 != 0) {
          iVar3 = FUN_8c204e40((uint)uVar1,ar5,ar6,ar7);
          if (iVar3 == 0) {
            return 3;
          }
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
          *(uint *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 0x1fU & 0xffffffe0;
          iVar4 = *(int *)(iVar6 + 0xc) - *(int *)(iVar3 + 0xc);
          *(int *)(iVar3 + 0x10) = iVar4;
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) - iVar4;
          if (*(int *)(iVar6 + 4) == 0) {
            FUN_8c204e92(unaff_r8,unaff_r9,iVar3,ar7,in_PR);
          }
          else {
            FUN_8c204eb6(unaff_r9,iVar3,*(int *)(iVar6 + 4),ar7,in_PR);
          }
        }
        ar5 = *(int *)(puVar7 + 6);
        FUN_8c204f2a(*(undefined4 *)(iVar6 + 0xc),ar5,*(undefined4 *)(puVar7 + 8),ar7);
        iVar4 = *(int *)(puVar7 + 6);
        iVar3 = *(int *)(iVar6 + 0xc);
        *(int *)(puVar7 + 6) = iVar3;
        ar6 = (undefined4 *)(iVar4 - iVar3);
        *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + *(int *)(puVar7 + 8);
        if (iVar5 == 1) {
          *(undefined4 *)(*(int *)(puVar7 + 10) + 0x1c) = *(undefined4 *)(puVar7 + 6);
        }
        else {
          ar6 = (undefined4 *)((uint)ar6 >> 2);
          ar7 = (int)ar6 * 4;
          ar5 = 0;
          *(undefined4 *)(*(int *)(puVar7 + 10) + 8) = *(undefined4 *)(puVar7 + 6);
          uVar2 = 0;
          do {
            if (*(int *)(*(int *)(puVar7 + 10) + 0xc + uVar2) != 0) {
              iVar5 = *(int *)(*(int *)(puVar7 + 10) + 0xc + ar5);
              *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + (int)ar6 * -4;
            }
            uVar2 = uVar2 + 4;
            ar5 = ar5 + 4;
          } while (uVar2 < 0x40);
        }
        ar6_00 = *(undefined4 **)(iVar6 + 8);
        if ((ar6_00 != (undefined4 *)0x0) &&
           (*(int *)(iVar6 + 0xc) + *(int *)(iVar6 + 0x10) == ar6_00[3])) {
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + ar6_00[4];
          ar5 = unaff_r9;
          ar6 = ar6_00;
          FUN_8c204ed2(unaff_r8,unaff_r9,ar6_00,ar7,in_PR);
          FUN_8c204e6c(ar6_00,ar5,ar6,ar7,in_PR);
        }
      }
      if ((puVar7 != (ushort *)0x0) && (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc))) {
        do {
          puVar7 = *(ushort **)(puVar7 + 4);
          if (puVar7 == (ushort *)0x0) break;
        } while (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc));
      }
    }
    if (puVar7 == (ushort *)0x0) {
      return 0;
    }
    if (iVar6 == 0) {
      return 0;
    }
  } while( true );
}



/* FUN_8c2052f2 @ 8c2052f2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2052f2(undefined4 ar4,int ar5,uint ar6,int ar7,int s0,int s4)

{
  ushort *ar6_00;
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *ar6_01;
  int ain0;
  int iVar4;
  int iVar5;
  undefined4 a7;
  undefined4 in_stack_ffffffd0;
  
  iVar5 = ar5 + ar6;
  if ((int)ar6 < 0) {
    uVar1 = ~(~ar6 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar6 & 0x1f;
  }
  a7 = 0;
  if (uVar1 != 0) {
    ar6 = ar6 + (0x20 - uVar1);
  }
  iVar2 = (int)(short)ar4;
  ar6_00 = (ushort *)0x0;
  puVar3 = (ushort *)(&DAT_8c275408)[iVar2 * 5];
  iVar4 = ar5;
  while (puVar3 != (ushort *)0x0) {
    iVar4 = *(int *)(puVar3 + 6);
    if ((((ar5 < iVar4) || (*(int *)(puVar3 + 8) + iVar4 <= ar5)) || (iVar5 < iVar4)) ||
       (*(int *)(puVar3 + 8) + iVar4 < iVar5)) {
      puVar3 = *(ushort **)(puVar3 + 4);
    }
    else {
      ar6_00 = puVar3;
      puVar3 = (ushort *)0x0;
    }
  }
  if (ar6_00 == (ushort *)0x0) {
    return 3;
  }
  if (*(uint *)(ar6_00 + 8) == ar6) {
    FUN_8c204ed2(&DAT_8c275408 + iVar2 * 5,&DAT_8c27540c + iVar2 * 5,ar6_00,0,in_stack_ffffffd0);
    FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_00,a7,in_stack_ffffffd0);
    *(undefined4 *)(ar7 + 8) = *(undefined4 *)(ar6_00 + 6);
    *(int *)(ar6_00 + 10) = ar7;
    *ar6_00 = 1;
    if ((short)ar4 == 0) {
      *ar6_00 = *ar6_00 | 0x800;
    }
    else {
      *ar6_00 = *ar6_00 | 0x1000;
    }
    if (s0 != 0) {
      *ar6_00 = *ar6_00 | 2;
    }
    if (s4 != 0) {
      *ar6_00 = *ar6_00 | 4;
    }
    iVar5 = *(int *)(ar6_00 + 8);
  }
  else {
    if (*(int *)(ar6_00 + 6) != ar5) {
      if (*(int *)(ar6_00 + 6) + *(int *)(ar6_00 + 8) == iVar5) {
        ar6_01 = (ushort *)FUN_8c204e40(0,iVar4,iVar5,0);
        if (ar6_01 == (ushort *)0x0) {
          return 3;
        }
        *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar6;
        *(int *)(ar6_01 + 6) = ar5;
        *(uint *)(ar6_01 + 8) = ar6;
        FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_01,a7,
                     &DAT_8c275400 + iVar2 * 5);
        *(undefined4 *)(ar7 + 8) = *(undefined4 *)(ar6_01 + 6);
        *(int *)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x800;
        }
        else {
          *ar6_01 = *ar6_01 | 0x1000;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      else {
        ar6_01 = (ushort *)FUN_8c204e40(0,iVar4,iVar5,0);
        if (ar6_01 == (ushort *)0x0) {
          return 3;
        }
        ain0 = FUN_8c204e40(puVar3,iVar4,iVar5,a7);
        if (ain0 == 0) {
          FUN_8c204e6c(ar6_01,iVar4,iVar5,a7,0);
          return 3;
        }
        iVar5 = *(int *)(ar6_00 + 8);
        iVar4 = *(int *)(ar6_00 + 6);
        *(int *)(ar6_00 + 8) = ar5 - iVar4;
        *(int *)(ar6_01 + 6) = ar5;
        *(uint *)(ar6_01 + 8) = ar6;
        FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_01,a7,ain0);
        *(uint *)(ain0 + 0xc) = ar5 + ar6;
        *(uint *)(ain0 + 0x10) = (iVar5 - ar6) - (ar5 - iVar4);
        FUN_8c204eb6(&DAT_8c27540c + iVar2 * 5,ain0,(&DAT_8c27540c)[iVar2 * 5],a7,ain0);
        *(undefined4 *)(ar7 + 8) = *(undefined4 *)(ar6_01 + 6);
        *(int *)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x800;
        }
        else {
          *ar6_01 = *ar6_01 | 0x1000;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      (&DAT_8c275410)[iVar2 * 5] = (&DAT_8c275410)[iVar2 * 5] - *(int *)(ar6_01 + 8);
      return 0;
    }
    puVar3 = (ushort *)FUN_8c204e40(0,iVar4,iVar5,0);
    if (puVar3 == (ushort *)0x0) {
      return 3;
    }
    *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(ar6_00 + 6);
    *(uint *)(puVar3 + 8) = ar6;
    *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar6;
    *(uint *)(ar6_00 + 6) = *(int *)(ar6_00 + 6) + ar6;
    FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,puVar3,a7,
                 &DAT_8c275400 + iVar2 * 5);
    *(undefined4 *)(ar7 + 8) = *(undefined4 *)(puVar3 + 6);
    *(int *)(puVar3 + 10) = ar7;
    if ((short)ar4 == 0) {
      *puVar3 = *puVar3 | 0x800;
    }
    else {
      *puVar3 = *puVar3 | 0x1000;
    }
    if (s0 != 0) {
      *puVar3 = *puVar3 | 2;
    }
    if (s4 != 0) {
      *puVar3 = *puVar3 | 4;
    }
    iVar5 = *(int *)(puVar3 + 8);
  }
  (&DAT_8c275410)[iVar2 * 5] = (&DAT_8c275410)[iVar2 * 5] - iVar5;
  return 0;
}



/* s_r_nCOPYRIGHT_C_NEC_Corporati_205e72 @ 8c205e64 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4
s_r_nCOPYRIGHT_C_NEC_Corporati_205e72(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int ain0;
  char *pcVar4;
  int iVar5;
  char *ar5_00;
  undefined4 uVar6;
  int iVar7;
  int a7;
  undefined4 in_stack_ffffffd4;
  
  if (DAT_8c2756b0 == (undefined1 *)0x0) {
    DAT_8c2756b0 = &DAT_8c4a9ba8;
    ar5 = 0;
    ar6 = 0x4f4;
    memset(&DAT_8c4a9ba8,0,0x4f4,ar7);
  }
  _DAT_8c4aa09c = 3;
  _DAT_8c4aa0a0 = 2;
  _DAT_8c4aa0a4 = 6;
  _DAT_8c4aa0a8 = 0;
  _DAT_8c4aa0ac =
       "\r\nCOPYRIGHT        (C) NEC        Corporation 1998\r\n\r\nAll rights reserved by NEC Corporation. This program must be\r\nused solely for the purpose for which it was furnished by NEC\r\nCorporation. No part of this program may be reproduced or\r\ndisclosed to others, in any form, without the prior written\r\npermission of NEC Corporation.\r\nUse of copyright notice does not evidence publication of this\r\nprogram.\r\n\r\nDeveloped by \r\n * Semiconductor Solution Engineering Division\r\n   NEC Corpolation.\r\n * Home Multimedia Development Division\r\n   NEC Corpolation\r\n * Client Server Software Development Division\r\n   NEC Software,Ltd.\r\n"
  ;
  _DAT_8c4a9ba8 = &DAT_8c4aa09c;
  _DAT_8c4a9be0 = 0;
  _DAT_8c4a9be4 = 0;
  _DAT_8c4a9be8 = 0;
  _DAT_8c4a9bfc = 0;
  _DAT_8c4a9c00 = 0;
  _DAT_8c4aa084 = 0x1f0;
  _DAT_8c4aa088 = 0x200;
  _DAT_8c4aa08c = 0x210;
  _DAT_8c4aa090 = 0x220;
  _DAT_8c4aa094 = 0x230;
  FUN_8c2073a0(&DAT_8c4aa09c,ar5,ar6,ar7,in_stack_ffffffd4);
  _DAT_8c4a9db4 = 0;
  _DAT_8c4a9db8 = 0;
  pcVar4 = "VSYNCCount";
  uVar6 = 1;
  _DAT_8c4a9d8c = s_HARDWARE_205e00("RENDER","VSYNCCount",1,ar7);
  _DAT_8c4a9d8c = _DAT_8c4a9d8c + -1;
  _DAT_8c4a9bbc = 0x10000;
  _DAT_8c4a9bc0 = 0x800000;
  _DAT_8c4a9bc4 = 0x800000;
  _DAT_8c4a9d74 = 0;
  _DAT_8c4a9d70 = 0;
  _DAT_8c4a9d6c = 0;
  _DAT_8c4a9d88 = 3;
  _DAT_8c4a9e54 = 1;
  _DAT_8c4a9d90 = _DAT_8c4a9d8c;
  FUN_8c20828c(0x800000,pcVar4,uVar6,ar7);
  uVar1 = s_HARDWARE_205e00("RENDER","RegionSize",0x6000,ar7);
  uVar2 = s_HARDWARE_205e00("RENDER","ObjListSize",0x7a000,ar7);
  uVar3 = s_HARDWARE_205e00("RENDER","ISPParamSize",0x180000,ar7);
  _DAT_8c4a9c44 = s_HARDWARE_205e00("RENDER","TSPParamSize",0x180000,ar7);
  _DAT_8c4a9c40 = uVar3 & 0xfffff800;
  _DAT_8c4a9c44 = _DAT_8c4a9c44 & 0xfffff800;
  a7 = (uVar1 & 0xfffff800) + (uVar2 & 0xfffff800);
  ain0 = _DAT_8c4a9c40 + a7;
  iVar7 = 0;
  iVar5 = 0;
  for (uVar2 = 0; uVar2 < 0x20; uVar2 = uVar2 + 0x10) {
    *(int *)(&DAT_8c4a9c18 + uVar2) = iVar5;
    *(uint *)(&DAT_8c4a9c1c + uVar2) = iVar5 + (uVar1 & 0xfffff800);
    *(int *)(&DAT_8c4a9c20 + uVar2) = iVar5 + a7;
    *(int *)(&DAT_8c4a9c24 + uVar2) = ain0 + iVar5;
    *(int *)(iVar7 + -0x73b563c8) = 0x7d0000 - iVar5;
    iVar5 = iVar5 + 0x400000;
    iVar7 = iVar7 + 4;
  }
  _DAT_8c4a9ef0 = 0;
  _DAT_8c4a9fcc = 0;
  _DAT_8c4a9ef8 = 0;
  _DAT_8c4a9efc = 0xffffffff;
  _DAT_8c4a9f00 = 0xffffffff;
  _DAT_8c4a9f04 = 0xffffffff;
  _DAT_8c4a9f08 = 0;
  _DAT_8c4a9f0c = 0;
  _DAT_8c4a9f10 = 0;
  _DAT_8c4a9fd8 = 0;
  _DAT_8c4a9fe0 = 0;
  _DAT_8c4a9fdc = 1;
  _DAT_8c4a9fec = s_HARDWARE_205e00("VertexBuffer","BufferBase",0xacc00000,a7);
  _DAT_8c4a9ff0 = s_HARDWARE_205e00("VertexBuffer","BufferSize",0x400000,a7);
  _DAT_8c4a9c10 = s_HARDWARE_205e00("RENDER","PoolingTAStatus",0,a7);
  _DAT_8c4a9dd0 = s_HARDWARE_205e00("RENDER","RenderTimeOut",10,a7);
  _DAT_8c4a9dd4 = s_HARDWARE_205e00("RENDER","VertexTimeOut",10,a7);
  ar5_00 = "VSYNCTimeOut";
  uVar6 = 10;
  pcVar4 = "RENDER";
  _DAT_8c4a9dd8 = s_HARDWARE_205e00("RENDER","VSYNCTimeOut",10,a7);
  _DAT_8c4a9d80 = 0;
  _DAT_8c4a9d84 = 1;
  _DAT_8c4a9c14 = 0xf;
  _DAT_8c4a9dc4 = 0;
  _DAT_8c4a9dc8 = 0;
  uVar6 = noop_20b77a(pcVar4,ar5_00,uVar6,a7,ain0);
  return uVar6;
}



/* FUN_8c206146 @ 8c206146 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c206146(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 in_PR;
  
  if (DAT_8c2756b0 != 0) {
    ain0 = noop_205dd4(ar4,ar5,ar6,ar7,in_PR);
    DAT_8c2756b0 = 0;
  }
  return ain0;
}



/* FUN_8c206162 @ 8c206162 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c2061ba) */
/* WARNING: Removing unreachable block (ram,0x8c2061ae) */
/* WARNING: Removing unreachable block (ram,0x8c2061b4) */
/* WARNING: Removing unreachable block (ram,0x8c2061c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c206162(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  noop_20a840(ar4,ar5,ar6,ar7,in_PR);
  g2dma_205a62(ar4,ar5,ar6,ar7);
  FUN_8c25d780(ar4,ar5,ar6,ar7);
  FUN_8c2034c0(ar4,ar5,ar6,ar7);
  FUN_8c206300(ar4,ar5,ar6,ar7);
  FUN_8c205d80(ar4,ar5,ar6,ar7);
  _DAT_8c4aa004 = 0x100000;
  _DAT_8c4aa008 = 0;
  _DAT_8c4aa00c = 0;
  _DAT_8c4aa010 = 0;
  uVar1 = FUN_8c25d7c6(_DAT_8c4a9c18 >> 7,_DAT_8c4a9c1c >> 7,_DAT_8c4a9c20 >> 7,_DAT_8c4a9c24 >> 7,
                       _DAT_8c4a9c14);
  return uVar1;
}



/* FUN_8c208380 @ 8c208380 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c208380(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  int *a7;
  undefined4 ain0;
  int iStack_14;
  int aiStack_10 [2];
  
  iVar1 = *ar4;
  iStack_14 = ar4[1];
  a7 = aiStack_10;
  aiStack_10[0] = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar1 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar1 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar1 + 0xc);
  _DAT_8c4a9c68 = *(undefined4 *)(iVar1 + 0x18);
  _DAT_8c4a9c6c = *(undefined4 *)(iStack_14 + 4);
  _DAT_8c4a9c70 = *(undefined4 *)(iStack_14 + 8);
  _DAT_8c4a9c74 = *(undefined4 *)(iStack_14 + 0xc);
  _DAT_8c4a9c78 = *(undefined4 *)(iStack_14 + 0x18);
  _DAT_8c4a9c7c = *(undefined4 *)(aiStack_10[0] + 4);
  _DAT_8c4a9c80 = *(undefined4 *)(aiStack_10[0] + 8);
  _DAT_8c4a9c84 = *(undefined4 *)(aiStack_10[0] + 0xc);
  _DAT_8c4a9c88 = *(undefined4 *)(aiStack_10[0] + 0x18);
  _DAT_8c4a9d48 = 0x3c;
  ain0 = _DAT_8c4a9d50;
  ar4_00 = FUN_8c20820a(_DAT_8c4a9d4c,0x3c,&iStack_14,a7);
  FUN_8c2081e0(ar4_00,0,0,a7,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar1 + 0xc);
  return 0;
}



/* FUN_8c2087e4 @ 8c2087e4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2087e4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 a7;
  int a5;
  
  uVar2 = _DAT_8c4a9d4c;
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar4 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar4 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar4 + 0xc);
  uVar6 = *(undefined4 *)(iVar4 + 0x14);
  iVar1 = FUN_8c208270(_DAT_8c4a9d4c,6,*(undefined4 *)(iVar4 + 0x10),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 0x18);
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(iVar4 + 0x1c),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  iVar1 = FUN_8c208270(uVar2,iVar1 + 3,*(undefined4 *)(iVar3 + 0x10),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 0x18);
  iVar3 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(iVar3 + 0x1c),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar3 * 4) = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 1) * 4) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 2) * 4) = *(undefined4 *)(iVar5 + 0xc);
  a7 = *(undefined4 *)(iVar5 + 0x14);
  iVar1 = iVar5;
  iVar3 = FUN_8c208270(uVar2,iVar3 + 3,*(undefined4 *)(iVar5 + 0x10),a7);
  a5 = iVar3 + 1;
  *(undefined4 *)(&DAT_8c4a9c50 + iVar3 * 4) = *(undefined4 *)(iVar5 + 0x18);
  uVar6 = *(undefined4 *)(iVar5 + 0x1c);
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,a5,uVar6,a7);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,a5,uVar6,a7);
  FUN_8c2081e0(uVar2,0,0,a7,iVar1);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar4 + 0xc);
  return 0;
}



/* FUN_8c208980 @ 8c208980 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c208980(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ain0;
  int iVar4;
  undefined4 a6;
  
  uVar2 = _DAT_8c4a9d4c;
  ain0 = *ar4;
  iVar3 = ar4[1];
  iVar4 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(ain0 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(ain0 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(ain0 + 0xc);
  iVar1 = FUN_8c20823c(_DAT_8c4a9d4c,6,*(undefined4 *)(ain0 + 0x10),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(ain0 + 0x18);
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(ain0 + 0x1c),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(iVar3 + 0x10),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 0x18);
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(ain0 + 0x1c),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar4 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(iVar4 + 0x10),ar7);
  iVar3 = iVar1 + 1;
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 0x18);
  a6 = *(undefined4 *)(ain0 + 0x1c);
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,iVar3,a6,ar7);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,iVar3,a6,ar7);
  FUN_8c2081e0(uVar2,0,0,ar7,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(ain0 + 0xc);
  return 0;
}



/* FUN_8c209600 @ 8c209600 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c209600(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  int *ar7_00;
  undefined4 ain0;
  int iStack_14;
  int aiStack_10 [2];
  
  iVar1 = *ar4;
  iStack_14 = ar4[1];
  ar7_00 = aiStack_10;
  aiStack_10[0] = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar1 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar1 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar1 + 0xc);
  _DAT_8c4a9c68 = *(undefined4 *)(iVar1 + 0x10);
  _DAT_8c4a9c6c = *(undefined4 *)(iStack_14 + 4);
  _DAT_8c4a9c70 = *(undefined4 *)(iStack_14 + 8);
  _DAT_8c4a9c74 = *(undefined4 *)(iStack_14 + 0xc);
  _DAT_8c4a9c78 = *(undefined4 *)(iStack_14 + 0x10);
  _DAT_8c4a9c7c = *(undefined4 *)(aiStack_10[0] + 4);
  _DAT_8c4a9c80 = *(undefined4 *)(aiStack_10[0] + 8);
  _DAT_8c4a9c84 = *(undefined4 *)(aiStack_10[0] + 0xc);
  _DAT_8c4a9c88 = *(undefined4 *)(aiStack_10[0] + 0x10);
  _DAT_8c4a9d48 = 0x3c;
  ain0 = _DAT_8c4a9d50;
  ar4_00 = FUN_8c20820a(_DAT_8c4a9d4c,0x3c,&iStack_14,ar7_00);
  FUN_8c2081e0(ar4_00,0,0,ar7_00,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar1 + 0xc);
  return 0;
}



/* FUN_8c2098c0 @ 8c2098c0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2098c0(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 ar7_00;
  int ar5_00;
  
  uVar2 = _DAT_8c4a9d4c;
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar4 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar4 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar4 + 0xc);
  uVar6 = *(undefined4 *)(iVar4 + 0x14);
  iVar1 = FUN_8c208270(_DAT_8c4a9d4c,6,*(undefined4 *)(iVar4 + 0x10),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 0x18);
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(iVar4 + 0x1c),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  iVar1 = FUN_8c208270(uVar2,iVar1 + 3,*(undefined4 *)(iVar3 + 0x10),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 0x18);
  iVar3 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(iVar3 + 0x1c),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar3 * 4) = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 1) * 4) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 2) * 4) = *(undefined4 *)(iVar5 + 0xc);
  ar7_00 = *(undefined4 *)(iVar5 + 0x14);
  iVar1 = iVar5;
  iVar3 = FUN_8c208270(uVar2,iVar3 + 3,*(undefined4 *)(iVar5 + 0x10),ar7_00);
  ar5_00 = iVar3 + 1;
  *(undefined4 *)(&DAT_8c4a9c50 + iVar3 * 4) = *(undefined4 *)(iVar5 + 0x18);
  uVar6 = *(undefined4 *)(iVar5 + 0x1c);
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,ar5_00,uVar6,ar7_00);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,ar5_00,uVar6,ar7_00);
  FUN_8c2081e0(uVar2,0,0,ar7_00,iVar1);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar4 + 0xc);
  return 0;
}



/* FUN_8c209a40 @ 8c209a40 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c209a40(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ain0;
  int iVar4;
  undefined4 ar6_00;
  
  uVar2 = _DAT_8c4a9d4c;
  ain0 = *ar4;
  iVar3 = ar4[1];
  iVar4 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(ain0 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(ain0 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(ain0 + 0xc);
  iVar1 = FUN_8c20823c(_DAT_8c4a9d4c,6,*(undefined4 *)(ain0 + 0x10),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(ain0 + 0x18);
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(ain0 + 0x1c),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(ain0 + 0x10),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 0x18);
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(iVar3 + 0x1c),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar4 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(iVar4 + 0x10),ar7);
  iVar3 = iVar1 + 1;
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 0x18);
  ar6_00 = *(undefined4 *)(iVar4 + 0x1c);
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,iVar3,ar6_00,ar7);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,iVar3,ar6_00,ar7);
  FUN_8c2081e0(uVar2,0,0,ar7,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(ain0 + 0xc);
  return 0;
}



/* FUN_8c20a8e0 @ 8c20a8e0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a8e0(uint ar4,uint ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  uint ar6_00;
  uint ar6_01;
  uint ar5_00;
  byte in_IMASK;
  char in_S;
  byte in_T;
  undefined4 *in_stack_ffffffdc;
  
  if ((((ar4 & 0x1f) == 0) && ((ar5 & 0x1f) == 0)) &&
     (((in_T | in_S << 1) & 0xf0) == 0 && (in_IMASK & 0xf) == 0)) {
    ar5_00 = ar6;
    FUN_8c20a84e(ar5,ar6,ar6,ar7,in_stack_ffffffdc);
    ar6_01 = ar6 & 0xffffffe0;
    if (ar6_01 == 0) {
      _DAT_8c4a9fd8 = 0;
    }
    else {
      do {
        ar7 = 0x18;
        ar5_00 = ar5;
        iVar1 = sh4_dmac_202f40(ar4 + 0x11000000,ar5,ar6_01,0x18,&stack0xffffffdc);
      } while (iVar1 == 0x100);
      _DAT_8c4a9fd8 = *in_stack_ffffffdc;
    }
    ar6_00 = ar6 & 0x1f;
    if (ar6_00 != 0) {
      ar5_00 = ar5 + ar6_01;
      FUN_8c20731e(ar4 + ar6_01 + -0x5c000000,ar5_00,ar6_00,ar7);
    }
    if (_DAT_8c4a9fdc == 1) {
      FUN_8c203320(_DAT_8c4a9fd8,ar5_00,ar6_00,ar7);
    }
  }
  else {
    FUN_8c20731e(ar4 + 0xa4000000,ar5,ar6,ar7);
  }
  return 1;
}



/* FUN_8c20a9c2 @ 8c20a9c2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a9c2(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  FUN_8c20731e(ar4,ar5 + -0x5c000000,ar6,ar7);
  FUN_8c20a84e(ar4,ar6,ar6_00,ar7,ar4);
  return 1;
}



/* FUN_8c20ade0 @ 8c20ade0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20ade0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar5_00;
  int iVar1;
  uint ar6_00;
  int iVar2;
  uint ar7_00;
  uint ar7_01;
  uint uVar3;
  uint uVar4;
  uint ain0;
  
  uVar4 = _DAT_8c4a9e6c & 0xfff003ff;
  ar5_00 = _DAT_8c4a9eac & 0xffff;
  iVar1 = _DAT_8c4a9c0c;
  iVar2 = _DAT_8c4a9c08;
  uVar3 = _DAT_8c4a9bf0;
  if (ar4 == 0) {
    ar5_00 = _DAT_8c4a9eac & 0xff00;
  }
  else if ((((ar4 != 1) && (ar4 == 2)) && ((_DAT_8c4a9bcc & 3) == 0)) &&
          (((_DAT_8c4a9bcc & 0x20) != 0 &&
           (((_DAT_8c4a9bcc & 1) == 1 || ((_DAT_8c4a9bcc & 0x2c) != 0x20)))))) {
    ar5_00 = 0x471;
    iVar1 = _DAT_8c4a9c0c + 0xc;
    iVar2 = _DAT_8c4a9c08 + 0xc;
    uVar3 = 0xd6;
  }
  ain0 = _DAT_8c4a9eac & 0xffff0000 | ar5_00;
  ar6_00 = (iVar1 + _DAT_8c4a9c00) * 0x10000;
  ar7_00 = iVar2 + _DAT_8c4a9c00 | ar6_00;
  ar7_01 = ar7_00;
  FUN_8c2079fc(ar4,ar5_00,ar6_00,ar7_00,ain0);
  pvr_20a844(0x44,_DAT_8c4a9e74 & 0xfffffffe,ar6_00,ar7_01);
  pvr_20a844(0xe8,_DAT_8c4a9eb0 | 8,ar6_00,ar7_01);
  pvr_20a844(0xf0,ar7_00,ar6_00,ar7_01);
  pvr_20a844(0x5c,uVar4 | (uVar3 & 0x3ff) << 10,ar6_00,ar7_01);
  pvr_20a844(0xf4,ain0,ar6_00,ar7_01);
  _DAT_8c4a9e54 = 1;
  return 0;
}



/* FUN_8c20b260 @ 8c20b260 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20b260(undefined4 ar4,undefined *ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 ar5_00;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_stack_ffffffd8;
  
  if (DAT_8c275710 == 0) {
    if (_DAT_8c4a9ef0 == 0) {
      *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 1;
      _DAT_8c4a9f20 = 1;
    }
    else {
      _DAT_8c4aa0fc = _DAT_ffd8000c;
      _DAT_8c4a9f10 = _DAT_8c4a9f08;
      _DAT_8c4a9db8 = 1;
      _DAT_8c4a9f18 = 0;
      _DAT_8c4a9f14 = _DAT_8c4aa014;
      _DAT_8c4a9f20 = 1;
      _DAT_8c4aa0b8 = 0;
      *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 2;
      if ((_DAT_8c4a9fcc & 0x20) == 0) {
        iVar6 = _DAT_8c4a9f08 * 4;
        iVar5 = _DAT_8c4a9f08 * 4;
        iVar7 = _DAT_8c4a9fd0 * 0x10;
        iVar4 = _DAT_8c4a9fd0 * 0x10;
        do {
          ar7 = 0x10;
          ar5 = *(undefined **)(iVar6 + -0x73b560d4 + iVar4);
          ar6 = *(int *)(iVar5 + -0x73b56084 + iVar7) + 0x20;
          iVar2 = sh4_dmac_202f40(0x10000000,ar5,ar6,0x10,&stack0xffffffd8);
        } while (iVar2 == 0x100);
        FUN_8c20b160(_DAT_8c4a9fd0,ar5,ar6,ar7,in_stack_ffffffd8);
      }
      else {
        _DAT_ff000038 = 0x10;
        _DAT_ff00003c = 0x10;
        ar5 = &DAT_8c26d3f8;
        ar6 = 4;
        FUN_8c20731e(0xe0000000,&DAT_8c26d3f8,4,ar7);
        FUN_8c20b160(_DAT_8c4a9fd0,ar5,ar6,ar7,in_stack_ffffffd8);
      }
    }
  }
  _DAT_8c4a9f1c = 0;
  bVar1 = false;
  do {
    if (_DAT_8c4a9f20 == 0) goto LAB_8c20b3e0;
    (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
  } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd4 + _DAT_8c4a9dd0 + 1U);
  bVar1 = true;
LAB_8c20b3e0:
  if (bVar1) {
    _DAT_8c4a9db4 = 0;
    _DAT_8c4a9f1c = 0;
    bVar1 = false;
    do {
      if (_DAT_8c4a9f20 == 0) goto LAB_8c20b468;
      (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
    } while (_DAT_8c4a9f1c < 0x15);
    bVar1 = true;
LAB_8c20b468:
    if (bVar1) {
      FUN_8c2062c8(4,ar5,ar6,ar7);
    }
  }
  _DAT_8c4a9f08 = _DAT_8c4a9f08 + 1 & 3;
  *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 0;
  if ((_DAT_8c4a9ef0 == 1) || (DAT_8c275710 == 1)) {
    uVar3 = _DAT_8c4a9f08 & 1;
    pvr_20a844(8,1,ar6,ar7);
    pvr_20a844(8,0,ar6,ar7);
    iVar7 = uVar3 * 0x20;
    pvr_20a844(0x124,*(undefined4 *)(iVar7 + -0x73b55fdc),ar6,ar7);
    pvr_20a844(300,*(undefined4 *)(iVar7 + -0x73b55fd8),ar6,ar7);
    pvr_20a844(0x128,*(undefined4 *)(iVar7 + -0x73b55fd0),ar6,ar7);
    pvr_20a844(0x130,*(undefined4 *)(iVar7 + -0x73b55fcc),ar6,ar7);
    pvr_20a844(0x164,*(undefined4 *)(iVar7 + -0x73b55fd4),ar6,ar7);
    ar5_00 = 0x80000000;
    pvr_20a844(0x144,0x80000000,ar6,ar7);
    pvr_20a876(0x144,ar5_00,ar6,ar7);
    _DAT_8c4a9f18 = 0;
    _DAT_8c4a9f14 = _DAT_8c4aa014;
    if (DAT_8c275710 != 0) {
      _DAT_8c4a9f10 = _DAT_8c4a9f08;
      *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 2;
      _DAT_8c4a9db8 = 1;
      _DAT_8c4a9f28 = 1;
    }
  }
  return 0;
}



/* FUN_8c20bdc0 @ 8c20bdc0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20bdc0(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 a5;
  undefined4 uVar10;
  uint uStack_74;
  uint *puStack_70;
  uint *puStack_6c;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uStack_60 = 0x80000000;
  uStack_5c = 0;
  uStack_58 = 0x800400;
  uStack_54 = 0;
  uStack_50 = 0xffffffff;
  uStack_4c = 0xffffffff;
  uStack_48 = 0xffffffff;
  uStack_44 = 0xffffffff;
  puVar7 = &uStack_60;
  if (_DAT_8c4a9ef0 == 1) {
    _DAT_ff000038 = 0x10;
    _DAT_ff00003c = 0x10;
    uStack_60 = (_DAT_8c4a9fd0 & 7) << 0x18 | 0x80000000;
    ar6 = 0x20;
    FUN_8c20731e(*(uint *)(_DAT_8c4aa21c + _DAT_8c4a9fd0 * 4) & 0x3ffffff | 0xe0000000,puVar7,0x20,
                 ar7);
    ar5 = puVar7;
  }
  iVar4 = FUN_8c20b708(ar4,ar5,ar6,ar7);
  if (iVar4 != 0) {
    FUN_8c210cc0(DAT_8c27570c,ar5,ar6,ar7);
    return iVar4;
  }
  if ((*(uint *)(ar4 + 0x18) & 0x10) == 0) {
    _DAT_8c4aa114 = (*(uint *)(ar4 + 0xc) & 0xfffffff) >> 2;
  }
  else {
    uVar5 = pvr_20a876(0xe4,ar5,ar6,ar7);
    _DAT_8c4aa114 = (uVar5 & 0x1f) << 3;
  }
  uVar5 = _DAT_8c4a9f08;
  _DAT_8c4aa118 = *(uint *)(ar4 + 0x1c) | 0x1000000;
  puVar7 = (uint *)(_DAT_8c4a9f08 * 4);
  uVar9 = _DAT_8c4a9f08 & 1;
  puStack_6c = puVar7 + -0x1ced5835;
  puStack_70 = puVar7 + -0x1ced5821;
  if (_DAT_8c4a9ef0 == 0) {
    _DAT_8c4a9f1c = 0;
    iVar4 = 0;
    do {
      if (_DAT_8c4a9db8 == 0) goto LAB_8c20bf52;
      (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
    } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd4);
    iVar4 = 1;
LAB_8c20bf52:
    if (iVar4 != 0) {
      _DAT_8c4a9f24 = 0;
      goto override_prt_8c20c05a_7a4d7f16;
    }
  }
  puVar7[-0x1ced5835] = *_DAT_8c4aa218;
  puVar7[-0x1ced5831] = _DAT_8c4aa218[1];
  puVar7[-0x1ced582d] = _DAT_8c4aa218[2];
  puVar7[-0x1ced5829] = _DAT_8c4aa218[3];
  puVar7[-0x1ced5825] = _DAT_8c4aa218[4];
  uStack_74 = 0;
  do {
    iVar4 = uStack_74 * 4;
    iVar8 = *(int *)(_DAT_8c4aa21c + iVar4) - *puStack_6c;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 3;
    }
    *puStack_70 = (iVar8 >> 2) << 2;
    if ((_DAT_8c4a9ef0 == 0) || (uStack_74 != _DAT_8c4a9fd0)) {
      if ((int)uStack_74 < 0) {
        uVar6 = 1 >> (~uStack_74 & 0x1f) + 1;
      }
      else {
        uVar6 = 1 << (uStack_74 & 0x1f);
      }
      if ((uVar6 & _DAT_8c4aa014) != 0) {
        ar6 = 4;
        puVar7 = (uint *)&DAT_8c26d420;
        FUN_8c20731e(*(undefined4 *)(iVar4 + _DAT_8c4aa21c),&DAT_8c26d420,4,ar7);
        *(int *)(iVar4 + _DAT_8c4aa21c) = *(int *)(iVar4 + _DAT_8c4aa21c) + 0x20;
        if (*(uint *)(&DAT_8c4aa070 + iVar4) < *puStack_70) {
          FUN_8c2062c8(2,puVar7,ar6,ar7);
        }
      }
    }
    uVar10 = _DAT_8c4a9d60;
    puStack_70 = puStack_70 + 4;
    puStack_6c = puStack_6c + 4;
    uStack_74 = uStack_74 + 1;
  } while (uStack_74 < 5);
  _DAT_8c4a9f1c = 0;
  bVar1 = false;
  ar5 = puVar7;
  do {
    if (_DAT_8c4a9db4 == 0) goto LAB_8c20c050;
    (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
  } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd0);
  bVar1 = true;
LAB_8c20c050:
  if (!bVar1) {
    _DAT_8c4a9f24 = 1;
    _DAT_8c4a9db8 = 1;
    iVar4 = uVar9 << 5;
    if (_DAT_8c4a9ef0 == 0) {
      pvr_20a844(8,1,ar6,ar7);
      pvr_20a844(8,0,ar6,ar7);
      pvr_20a844(0x124,*(undefined4 *)(iVar4 + -0x73b55fdc),ar6,ar7);
      pvr_20a844(300,*(undefined4 *)(iVar4 + -0x73b55fd8),ar6,ar7);
      pvr_20a844(0x128,*(undefined4 *)(iVar4 + -0x73b55fd0),ar6,ar7);
      pvr_20a844(0x130,*(undefined4 *)(iVar4 + -0x73b55fcc),ar6,ar7);
      pvr_20a844(0x164,*(undefined4 *)(iVar4 + -0x73b55fd4),ar6,ar7);
      ar5 = (uint *)0x80000000;
      pvr_20a844(0x144,0x80000000,ar6,ar7);
      pvr_20a876(0x144,ar5,ar6,ar7);
    }
    _DAT_8c4a9f1c = 0;
    bVar1 = false;
    do {
      if (_DAT_8c4a9db4 == 0) goto LAB_8c20c18e;
      (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
    } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd0);
    bVar1 = true;
LAB_8c20c18e:
    if (bVar1) {
      _DAT_8c4a9f24 = 0;
      FUN_8c210cc0(DAT_8c27570c,ar5,ar6,ar7);
      return 0xfffffffe;
    }
    _DAT_8c4a9f10 = uVar5;
    _DAT_8c4a9f14 = _DAT_8c4aa014;
    _DAT_8c4a9f18 = 0;
    if (_DAT_8c4a9ef0 == 0) {
      uVar5 = 0xff;
    }
    else {
      _DAT_ff000038 = 0x10;
      _DAT_ff00003c = 0x10;
      ar6 = 4;
      ar5 = (uint *)&DAT_8c26d420;
      FUN_8c20731e(*(uint *)(_DAT_8c4aa21c + _DAT_8c4a9fd0 * 4) & 0x3ffffff | 0xe0000000,
                   &DAT_8c26d420,4,ar7);
      uVar5 = _DAT_8c4a9fd0;
    }
    FUN_8c20b160(uVar5,ar5,ar6,ar7,iVar4);
    uVar3 = _DAT_8c4a9e64;
    uVar2 = _DAT_8c4a9e60;
    uVar5 = _DAT_8c4a9bf8;
    if (*(uint *)(ar4 + 0x10) <= _DAT_8c4a9bf8) {
      uVar5 = *(uint *)(ar4 + 0x10) - 1;
    }
    a5 = 0;
    uVar9 = _DAT_8c4a9bf4;
    if (*(uint *)(ar4 + 0xc) <= _DAT_8c4a9bf4) {
      uVar9 = *(uint *)(ar4 + 0xc) - 1;
    }
    FUN_8c20a482(0,0,uVar9,uVar5);
    _DAT_8c4aa11c = _DAT_8c4a9e60;
    _DAT_8c4aa120 = _DAT_8c4a9e64;
    _DAT_8c4a9e60 = uVar2;
    _DAT_8c4a9e64 = uVar3;
    FUN_8c20b5a0(&DAT_8c4aa110,a5,uVar9,uVar5);
    _DAT_8c4a9d60 = uVar10;
    FUN_8c210cc0(DAT_8c27570c,a5,uVar9,uVar5);
    if (_DAT_8c4a9ef0 == 1) {
      _DAT_8c4a9f1c = 0;
      bVar1 = false;
      do {
        if (_DAT_8c4a9db4 == 0) goto LAB_8c20c350;
        (*_DAT_8c4a9e14)(_DAT_8c4a9e18,a5,uVar9,uVar5);
      } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd0);
      bVar1 = true;
LAB_8c20c350:
      if (bVar1) {
        _DAT_8c4a9f24 = 0;
        return 0xfffffffd;
      }
      pvr_20a844(8,1,uVar9,uVar5);
      pvr_20a844(8,0,uVar9,uVar5);
      pvr_20a844(0x124,*(undefined4 *)(iVar4 + -0x73b55fdc),uVar9,uVar5);
      pvr_20a844(300,*(undefined4 *)(iVar4 + -0x73b55fd8),uVar9,uVar5);
      pvr_20a844(0x128,*(undefined4 *)(iVar4 + -0x73b55fd0),uVar9,uVar5);
      pvr_20a844(0x130,*(undefined4 *)(iVar4 + -0x73b55fcc),uVar9,uVar5);
      pvr_20a844(0x164,*(undefined4 *)(iVar4 + -0x73b55fd4),uVar9,uVar5);
      uVar10 = 0x80000000;
      pvr_20a844(0x144,0x80000000,uVar9,uVar5);
      pvr_20a876(0x144,uVar10,uVar9,uVar5);
    }
    DAT_8c275710 = 0;
    _DAT_8c4a9e30 = &stack0xffffff88;
    return 0;
  }
override_prt_8c20c05a_7a4d7f16:
  _DAT_8c4a9db8 = 0;
  FUN_8c210cc0(DAT_8c27570c,ar5,ar6,ar7);
  return 0xffffffff;
}



/* FUN_8c20d9ce @ 8c20d9ce callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d9ce(int ar4,undefined1 *ar5,int ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  undefined4 ar6_01;
  undefined1 auStack_1c [3];
  undefined1 uStack_19;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  iVar2 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  if (ar6 < 3) {
    ar6_00 = (undefined1 *)0x8;
    ar5_00 = *(undefined1 **)(ar4 + 0x1c);
    FUN_8c20a9c2(auStack_1c,ar5_00,8,ar7);
    if (ar6 == 1) {
      uStack_19 = *ar5;
    }
    else {
      ar6_00 = auStack_14;
      puVar3 = auStack_18;
      ar5_00 = ar5;
      do {
        uVar1 = *ar5_00;
        ar5_00 = ar5_00 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (puVar3 < ar6_00);
    }
    iVar2 = *(int *)(ar4 + 0x1c);
    FUN_8c20732e(auStack_1c,ar5_00,ar6_00,ar7,iVar2);
    FUN_8c20732e(&s4,ar5_00,ar6_00,ar7,iVar2);
    ar6_01 = 8;
    ar5 = auStack_1c;
  }
  else {
    ar6_01 = *(undefined4 *)(&DAT_8c26d5b4 + iVar2 * 4);
    iVar2 = *(int *)(&DAT_8c26d588 + iVar2 * 4) + *(int *)(ar4 + 0x1c);
  }
  FUN_8c20a8e0(iVar2,ar5,ar6_01,ar7);
  return 0;
}



/* FUN_8c20daa0 @ 8c20daa0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20daa0(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *ar6_00;
  undefined4 ar6_01;
  undefined1 auStack_24 [6];
  undefined1 auStack_1e [2];
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [4];
  
  iVar2 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  if (ar6 < 3) {
    ar6_00 = (undefined1 *)0x10;
    FUN_8c20a9c2(auStack_24,*(undefined4 *)(ar4 + 0x1c),0x10,ar7);
    puVar4 = auStack_1c;
    if (ar6 == 1) {
      puVar3 = auStack_1e;
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (puVar3 < puVar4);
    }
    else {
      ar6_00 = auStack_14;
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (puVar4 < ar6_00);
    }
    iVar2 = *(int *)(ar4 + 0x1c);
    FUN_8c20732e(auStack_24,ar5,ar6_00,ar7,iVar2);
    FUN_8c20732e(&stack0xfffffffc,ar5,ar6_00,ar7,iVar2);
    ar6_01 = 0x10;
    ar5 = auStack_24;
  }
  else {
    ar6_01 = *(undefined4 *)(&DAT_8c26d4ac + iVar2 * 4);
    iVar2 = *(int *)(&DAT_8c26d480 + iVar2 * 4) + *(int *)(ar4 + 0x1c);
  }
  FUN_8c20a8e0(iVar2,ar5,ar6_01,ar7);
  return 0;
}



/* FUN_8c20dd80 @ 8c20dd80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20dd80(undefined4 ar4,undefined4 ar5,int ar6,int ar7,int s0,undefined4 s4)

{
  undefined4 uVar1;
  
  if ((s0 < 8) || (0x400 < s0)) {
LAB_8c20de00:
    uVar1 = 4;
  }
  else {
    if ((char)s4 == '\0') {
      uVar1 = 0;
    }
    else if ((char)s4 == '\x01') {
      uVar1 = 0x8000000;
    }
    else {
      if ((char)s4 != '\x02') goto LAB_8c20de00;
      uVar1 = 0x10000000;
    }
    if (ar6 == 1) {
      FUN_8c20e8c6(ar4,ar5,ar7,s0);
    }
    else {
      if (ar7 == 1) {
        FUN_8c20e9ae(ar5,s0,s0,uVar1);
      }
      s_UUUU_t_20ed60(ar4,ar5,s0,uVar1,ar7);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c20df7a @ 8c20df7a callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c20e00c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20df7a(int ar4,uint ar5,int ar6,uint *ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int ar6_00;
  uint *ar7_00;
  undefined4 in_PR;
  uint ain0;
  
  if (ar4 == 0) {
    uVar1 = 1;
  }
  else {
    ar6_00 = ar6;
    ar7_00 = ar7;
    ain0 = ar5;
    uVar2 = FUN_8c20e720(ar4,ar5,ar6,ar7);
    *ar7 = uVar2;
    if (ar6 != 0) {
      if (ain0 < *ar7) {
        return 2;
      }
      uVar2 = 0;
      if (*ar7 != 0) {
        do {
          FUN_8c010838(uVar2,ar5,ar6_00,ar7_00,ain0,in_PR);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *ar7);
      }
      FUN_8c20e78e(ar6,ar5,ar6_00,ar7_00);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c20e8dc @ 8c20e8dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c20e8dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            ,undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20,undefined4 s24)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a7;
  int unaff_r9;
  int unaff_r10;
  undefined4 unaff_r12;
  int *piVar3;
  int unaff_r14;
  undefined4 in_PR;
  
  iVar1 = FUN_8c20e838(ar7,ar5,ar6,ar7);
  if (unaff_r10 != 0) {
    FUN_8c20e9ae(unaff_r12,unaff_r14,unaff_r14,s24);
  }
  a7 = s24;
  s_UUUU_t_20ed60(*(int *)(&DAT_8c26d63c + iVar1 * 4) + unaff_r9,unaff_r12,unaff_r14,s24,in_PR);
  piVar3 = (int *)(&DAT_8c26d63c + (iVar1 + -1) * 4);
  do {
    FUN_8c20f25a(unaff_r12,unaff_r14,unaff_r14,a7);
    unaff_r14 = unaff_r14 >> 1;
    if (unaff_r10 != 0) {
      FUN_8c20e9ae(unaff_r12,unaff_r14,unaff_r14,s24);
    }
    a7 = s24;
    uVar2 = s_UUUU_t_20ed60(*piVar3 + unaff_r9,unaff_r12,unaff_r14,s24,in_PR);
    piVar3 = piVar3 + -1;
  } while (&UNK_8c26d63b < piVar3);
  return uVar2;
}



/* FUN_8c212440 @ 8c212440 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c212440(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int ar4_00;
  int iVar1;
  int iVar2;
  undefined1 *ar5_00;
  undefined1 *in_stack_fffffff0;
  undefined1 *ain0;
  
  ar5_00 = &stack0xfffffff0;
  ar4_00 = FUN_8c1f397e(ar4,0,ar6,ar7);
  if (ar4_00 != 0) {
    iVar1 = FUN_8c1f30ee(ar4_00,&stack0xfffffff0,ar6,ar7);
    ain0 = in_stack_fffffff0;
    if ((iVar1 == 1) &&
       (iVar1 = malloc_thunk((int)in_stack_fffffff0 * 0x800 + 8,ar5_00,ar6,ar7),
       ain0 = in_stack_fffffff0, iVar1 != 0)) {
      ar6 = iVar1;
      iVar2 = FUN_8c1f31c6(ar4_00,in_stack_fffffff0,iVar1,ar7);
      if (iVar2 == 0) {
        FUN_8c1f309c(ar4_00,in_stack_fffffff0,ar6,ar7,ain0);
        return iVar1;
      }
      FUN_8c1fb57c(iVar1,in_stack_fffffff0,ar6,ar7);
      ar5_00 = in_stack_fffffff0;
    }
    FUN_8c1f309c(ar4_00,ar5_00,ar6,ar7,ain0);
  }
  return 0;
}



/* FUN_8c213e32 @ 8c213e32 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4
FUN_8c213e32(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 *ain0,
            undefined4 ain1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *ar5_00;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  uint uVar8;
  uint uVar11;
  
  puVar3 = _DAT_8c4aa4c0;
  *ain0 = ain1;
  if (in_FPSCR_SZ == '\0') {
    uVar4 = (ulonglong)*puVar3;
    uVar6 = (ulonglong)puVar3[1];
    uVar9 = CONCAT44(0x3f800000,puVar3[2]);
    puVar2 = &DAT_8c278790;
    puVar3 = puVar3 + 7;
    *puVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = 0x3f800000;
    uVar9 = 0;
    puVar2 = (undefined4 *)&DAT_8c2787a0;
    puVar3 = puVar3 + 0xe;
    puVar3[0] = 0;
    puVar3[1] = 0x3f800000;
  }
  if (in_FPSCR_SZ == '\0') {
    puVar3[-1] = (uint)((ulonglong)uVar9 >> 0x20);
    puVar3[-2] = 0;
    puVar3[-3] = 0;
    uVar5 = puVar2[-0x10];
    uVar8 = puVar2[-0xf];
    uVar11 = puVar2[-0xe];
    ar5_00 = puVar2 + -0xc;
    puVar3[-4] = puVar2[-0xd];
    puVar3[-5] = uVar11;
    puVar3[-6] = uVar8;
    puVar3 = puVar3 + -7;
    *puVar3 = uVar5;
  }
  else {
    *(undefined8 *)(puVar3 + -2) = uVar9;
    *(ulonglong *)(puVar3 + -4) = uVar6;
    *(ulonglong *)(puVar3 + -6) = uVar4;
    uVar9 = *(undefined8 *)(puVar2 + -0x10);
    uVar7 = *(undefined8 *)(puVar2 + -0xe);
    uVar10 = *(undefined8 *)(puVar2 + -0xc);
    ar5_00 = puVar2 + -8;
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar2 + -10);
    *(undefined8 *)(puVar3 + -10) = uVar10;
    *(undefined8 *)(puVar3 + -0xc) = uVar7;
    puVar3 = puVar3 + -0xe;
    *(undefined8 *)puVar3 = uVar9;
  }
  _DAT_8c4aa4bc = puVar3;
  FUN_8c256fec(puVar3,ar5_00,ar6,ar7,in_PR);
  uVar1 = FUN_8c255d6c(puVar3,_DAT_8c4c0cc0,ar6,ar7,in_PR);
  if (in_FPSCR_SZ == '\0') {
    _DAT_8c4c0d00 = *(undefined8 *)puVar3;
    _DAT_8c4c0d08 = *(undefined8 *)(puVar3 + 2);
    _DAT_8c4c0d10 = *(undefined8 *)(puVar3 + 4);
    _DAT_8c4c0d18 = CONCAT44(puVar3[7],_DAT_8c4c0d18);
                    /* WARNING: Ignoring partial resolution of indirect */
    _DAT_8c4c0d18 = puVar3[6];
  }
  else {
    uRam8c4c0ce0 = *(undefined8 *)puVar3;
    uRam8c4c0ce8 = *(undefined8 *)(puVar3 + 2);
    uRam8c4c0cf0 = *(undefined8 *)(puVar3 + 4);
    uRam8c4c0cf8 = *(undefined8 *)(puVar3 + 6);
    _DAT_8c4c0d00 = *(undefined8 *)(puVar3 + 8);
    _DAT_8c4c0d08 = *(undefined8 *)(puVar3 + 10);
    _DAT_8c4c0d10 = *(undefined8 *)(puVar3 + 0xc);
    _DAT_8c4c0d18 = *(undefined8 *)(puVar3 + 0xe);
  }
  return uVar1;
}



/* FUN_8c2163d4 @ 8c2163d4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c21666a) */
/* WARNING: Removing unreachable block (ram,0x8c2165ee) */
/* WARNING: Removing unreachable block (ram,0x8c2165ba) */
/* WARNING: Removing unreachable block (ram,0x8c2164b4) */
/* WARNING: Removing unreachable block (ram,0x8c2164a6) */
/* WARNING: Removing unreachable block (ram,0x8c2164c0) */
/* WARNING: Removing unreachable block (ram,0x8c2165e4) */
/* WARNING: Removing unreachable block (ram,0x8c21662a) */
/* WARNING: Removing unreachable block (ram,0x8c216634) */
/* WARNING: Removing unreachable block (ram,0x8c216678) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

double * FUN_8c2163d4(short *ar4,int ar5,uint ar6,double *ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  undefined1 *ar5_00;
  int iVar3;
  undefined1 *ar6_00;
  int iVar4;
  undefined1 *ar7_00;
  int iVar5;
  uint uVar6;
  short *psVar7;
  short *psVar8;
  double *pdVar9;
  double *pdVar10;
  undefined1 *puVar11;
  float fVar12;
  double in_dr0;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 in_dr2;
  double dVar17;
  ulonglong uVar18;
  float fVar19;
  ulonglong in_dr4;
  double dVar20;
  double dVar21;
  double in_dr6;
  double in_dr8;
  undefined4 in_fr11;
  undefined4 in_fr10;
  undefined4 in_fr13;
  undefined4 in_fr12;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  undefined8 in_xd8;
  undefined8 in_xd10;
  undefined8 in_xd12;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  double dVar13;
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = auStack_1c;
  }
  else {
    puVar11 = auStack_20;
  }
  *(undefined4 *)(puVar11 + -4) = in_PR;
  fVar12 = (float)(in_dr4 >> 0x20);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(float *)(puVar11 + -0x60) = fVar12;
    *(undefined4 *)(puVar11 + -100) = in_fr14;
    *(undefined4 *)(puVar11 + -0x68) = in_fr13;
    *(undefined4 *)(puVar11 + -0x6c) = in_fr12;
    *(undefined4 *)(puVar11 + -0x70) = in_fr11;
    *(undefined4 *)(puVar11 + -0x74) = in_fr10;
    *(int *)(puVar11 + -0x78) = SUB84(in_dr8,0);
    *(int *)(puVar11 + -0x7c) = (int)((ulonglong)in_dr8 >> 0x20);
    *(int *)(puVar11 + -0x80) = SUB84(in_dr6,0);
    *(int *)(puVar11 + -0x84) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)(puVar11 + -0x88) = (int)in_dr4;
    *(float *)(puVar11 + -0x8c) = fVar12;
    *(int *)(puVar11 + -0x90) = (int)in_dr2;
    *(int *)(puVar11 + -0x94) = (int)((ulonglong)in_dr2 >> 0x20);
    *(int *)(puVar11 + -0x98) = SUB84(in_dr0,0);
    *(undefined4 *)(puVar11 + -0x9c) = uVar1;
    in_fr15 = fVar12;
  }
  else {
    *(ulonglong *)(puVar11 + -100) = in_dr4;
    *(ulonglong *)(puVar11 + -0x6c) = CONCAT44(in_fr14,in_fr15);
    *(undefined8 *)(puVar11 + -0x74) = in_xd12;
    *(ulonglong *)(puVar11 + -0x7c) = CONCAT44(in_fr12,in_fr13);
    *(undefined8 *)(puVar11 + -0x84) = in_xd10;
    *(ulonglong *)(puVar11 + -0x8c) = CONCAT44(in_fr10,in_fr11);
    *(undefined8 *)(puVar11 + -0x94) = in_xd8;
    *(double *)(puVar11 + -0x9c) = in_dr8;
    *(double *)(puVar11 + -0xa4) = in_xd6;
    *(double *)(puVar11 + -0xac) = in_dr6;
    *(double *)(puVar11 + -0xb4) = in_xd4;
    *(ulonglong *)(puVar11 + -0xbc) = in_dr4;
    *(double *)(puVar11 + -0xc4) = in_xd2;
    *(undefined8 *)(puVar11 + -0xcc) = in_dr2;
    *(undefined8 *)(puVar11 + -0xd4) = in_xd0;
    *(double *)(puVar11 + -0xdc) = in_dr0;
  }
  pdVar2 = (double *)(puVar11 + -0x1c);
  ar6_00 = &DAT_8c4ab1f0;
  ar7_00 = &DAT_8c4ab1ec;
  *(double **)(puVar11 + -0xbc) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1f0);
    in_dr0 = (double)CONCAT44(uVar1,_DAT_8c4ab1e4);
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4ab1e4,_DAT_8c4ab1e0);
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f4,_DAT_8c4ab1f0);
  }
  pdVar10 = (double *)(puVar11 + -0x18);
  pdVar9 = (double *)(puVar11 + -0x14);
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar17,0),SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab1ec);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f0,_DAT_8c4ab1ec);
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = SUB84(in_dr0,0) * SUB84(dVar17,0);
    dVar13 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar12);
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) - fVar12,SUB84(dVar17,0));
  }
  else {
    dVar13 = in_dr0 * dVar17;
    dVar17 = dVar17 - dVar13;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar2 = (int)((ulonglong)dVar17 >> 0x20);
  }
  else {
    *pdVar2 = dVar17;
  }
  *(double **)(puVar11 + -0xb8) = pdVar10;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4ab1e4,_DAT_8c4ab1e8);
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),_DAT_8c4ab1f0);
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4ab1e8,_DAT_8c4ab1e4);
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1e8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar17,0),SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab1dc);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1dc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = SUB84(dVar13,0) * SUB84(dVar17,0);
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),fVar12);
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) - fVar12,SUB84(dVar17,0));
  }
  else {
    dVar13 = dVar13 * dVar17;
    dVar17 = dVar17 - dVar13;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar10 = (int)((ulonglong)dVar17 >> 0x20);
  }
  else {
    *pdVar10 = dVar17;
  }
  *(double **)(puVar11 + -0xb4) = pdVar9;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1dc);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1dc);
    dVar17 = (double)CONCAT44(_DAT_8c4ab1f0,_DAT_8c4ab1ec);
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar17,0),SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),_DAT_8c4ab1e0);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab1e8);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1e8);
  }
  pdVar2 = (double *)(puVar11 + -0x5c);
  dVar21 = (double)(in_dr4 & 0xffffffff);
  if (in_FPSCR_PR == '\0') {
    fVar12 = SUB84(dVar13,0) * SUB84(dVar17,0);
    dVar13 = (double)(ulonglong)(uint)fVar12;
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) - fVar12,SUB84(dVar17,0));
  }
  else {
    dVar13 = dVar13 * dVar17;
    dVar17 = dVar17 - dVar13;
  }
  uVar1 = SUB84(dVar13,0);
  uVar15 = (undefined4)((ulonglong)dVar17 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar9 = uVar15;
  }
  else {
    *pdVar9 = dVar17;
  }
  *(double **)(puVar11 + -0xc0) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    uVar14 = *(undefined4 *)*(double **)(puVar11 + -0xbc);
    dVar17 = (double)CONCAT44(uVar15,uVar14);
    *(undefined4 *)pdVar2 = uVar14;
  }
  else {
    in_xd2 = **(double **)(puVar11 + -0xbc);
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(puVar11 + -0x58);
  *(double **)(puVar11 + -0xbc) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    uVar15 = *(undefined4 *)*(double **)(puVar11 + -0xb8);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),uVar15);
    *(undefined4 *)pdVar2 = uVar15;
  }
  else {
    in_xd2 = **(double **)(puVar11 + -0xb8);
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(puVar11 + -0x54);
  *(double **)(puVar11 + -0xb8) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    uVar15 = *(undefined4 *)*(double **)(puVar11 + -0xb4);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),uVar15);
    *(undefined4 *)pdVar2 = uVar15;
    *(undefined4 *)(puVar11 + -0x50) = 0;
  }
  else {
    in_xd2 = **(double **)(puVar11 + -0xb4);
    *pdVar2 = in_xd2;
    *(double *)(puVar11 + -0x50) = dVar21;
  }
  pdVar2 = (double *)(puVar11 + -0x4c);
  *(double **)(puVar11 + -0xb4) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab1dc);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1dc);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar2 = -SUB84(dVar17,0);
  }
  else {
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(puVar11 + -0x48);
  *(double **)(puVar11 + -0xa4) = pdVar2;
  fVar12 = _DAT_8c4ab1e0;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e4,_DAT_8c4ab1e0);
    fVar12 = -SUB84(dVar17,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar2 = -fVar12;
  }
  else {
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(puVar11 + -0x44);
  *(double **)(puVar11 + -0xa8) = pdVar2;
  fVar16 = _DAT_8c4ab1e4;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e8,_DAT_8c4ab1e4);
    fVar16 = -fVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar2 = -fVar16;
    *(undefined4 *)(puVar11 + -0x40) = 0;
  }
  else {
    *pdVar2 = in_xd2;
    *(double *)(puVar11 + -0x40) = dVar21;
  }
  pdVar2 = (double *)(puVar11 + -0x3c);
  *(double **)(puVar11 + -0xac) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar2 = _DAT_8c4ab1e8;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1e8);
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(puVar11 + -0x38);
  *(double **)(puVar11 + -0xa0) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar2 = _DAT_8c4ab1ec;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f0,_DAT_8c4ab1ec);
    *pdVar2 = in_xd2;
  }
  pdVar2 = (double *)(puVar11 + -0x34);
  *(double **)(puVar11 + -0xb0) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar2 = _DAT_8c4ab1f0;
    *(undefined4 *)(puVar11 + -0x30) = 0;
    *(undefined4 *)(puVar11 + -0x2c) = 0;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f4,_DAT_8c4ab1f0);
    *pdVar2 = in_xd2;
    *(double *)(puVar11 + -0x30) = dVar21;
    *(double *)(puVar11 + -0x2c) = dVar21;
  }
  ar5_00 = puVar11 + -0x9c;
  dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),0x3f800000);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar11 + -0x28) = 0;
    *(undefined4 *)(puVar11 + -0x24) = 0;
    *(undefined4 *)(puVar11 + -0x20) = 0x3f800000;
  }
  else {
    *(double *)(puVar11 + -0x28) = dVar21;
    *(double *)(puVar11 + -0x24) = dVar21;
    *(double *)(puVar11 + -0x20) = in_xd2;
  }
  FUN_8c255d6c(puVar11 + -0x5c,ar5_00,&DAT_8c4ab1f0,&DAT_8c4ab1ec,*(undefined4 *)(puVar11 + -0xc0));
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(_DAT_8c4ab15c,uVar1);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                              *(undefined4 *)*(double **)(puVar11 + -0xbc));
  }
  else {
    dVar13 = (double)CONCAT44(_DAT_8c4ab160,_DAT_8c4ab15c);
    in_xd2 = **(double **)(puVar11 + -0xbc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = SUB84(dVar17,0) * (float)((ulonglong)dVar13 >> 0x20);
  }
  else {
    fVar12 = SUB84(dVar17 * dVar13,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)**(ulonglong **)(puVar11 + -0xc0),fVar12);
    fVar12 = SUB84(dVar13,0);
    fVar16 = _DAT_8c4ab158;
  }
  else {
    uVar18 = **(ulonglong **)(puVar11 + -0xc0);
    fVar12 = _DAT_8c4ab158;
    fVar16 = _DAT_8c4ab15c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar18 = (ulonglong)(uint)(fVar16 * (float)(uVar18 >> 0x20) + (float)uVar18);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(*(undefined4 *)*(double **)(puVar11 + -0xb8),(int)uVar18);
    fVar16 = _DAT_8c4ab160;
  }
  else {
    dVar17 = **(double **)(puVar11 + -0xb8);
    fVar12 = _DAT_8c4ab160;
    fVar16 = _DAT_8c4ab164;
  }
  pdVar2 = (double *)(puVar11 + -0x10);
  if (in_FPSCR_PR == '\0') {
    fVar19 = (float)((ulonglong)dVar17 >> 0x20);
    dVar17 = (double)CONCAT44(fVar19,fVar16 * fVar19 + SUB84(dVar17,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar2 = SUB84(dVar17,0);
  }
  else {
    *pdVar2 = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(_DAT_8c4ab15c,fVar12);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                              *(undefined4 *)*(double **)(puVar11 + -0xa4));
  }
  else {
    dVar13 = (double)CONCAT44(_DAT_8c4ab160,_DAT_8c4ab15c);
    in_xd2 = **(double **)(puVar11 + -0xa4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = SUB84(dVar17,0) * (float)((ulonglong)dVar13 >> 0x20);
  }
  else {
    fVar12 = SUB84(dVar17 * dVar13,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)**(ulonglong **)(puVar11 + -0xb4),fVar12);
    fVar12 = SUB84(dVar13,0);
    fVar16 = _DAT_8c4ab158;
  }
  else {
    uVar18 = **(ulonglong **)(puVar11 + -0xb4);
    fVar12 = _DAT_8c4ab158;
    fVar16 = _DAT_8c4ab15c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar18 = (ulonglong)(uint)(fVar16 * (float)(uVar18 >> 0x20) + (float)uVar18);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(*(undefined4 *)*(double **)(puVar11 + -0xa8),(int)uVar18);
    fVar16 = _DAT_8c4ab160;
  }
  else {
    dVar17 = **(double **)(puVar11 + -0xa8);
    fVar12 = _DAT_8c4ab160;
    fVar16 = _DAT_8c4ab164;
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = (float)((ulonglong)dVar17 >> 0x20);
    dVar17 = (double)CONCAT44(fVar19,fVar16 * fVar19 + SUB84(dVar17,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar11 + -0xc) = SUB84(dVar17,0);
  }
  else {
    *(double *)(puVar11 + -0xc) = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(_DAT_8c4ab15c,fVar12);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                              *(undefined4 *)*(double **)(puVar11 + -0xa0));
  }
  else {
    dVar13 = (double)CONCAT44(_DAT_8c4ab160,_DAT_8c4ab15c);
    in_xd2 = **(double **)(puVar11 + -0xa0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = SUB84(dVar17,0) * (float)((ulonglong)dVar13 >> 0x20);
  }
  else {
    fVar12 = SUB84(dVar17 * dVar13,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)**(ulonglong **)(puVar11 + -0xac),fVar12);
    fVar12 = _DAT_8c4ab158;
  }
  else {
    uVar18 = **(ulonglong **)(puVar11 + -0xac);
    fVar12 = _DAT_8c4ab15c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar18 = (ulonglong)(uint)(fVar12 * (float)(uVar18 >> 0x20) + (float)uVar18);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)**(ulonglong **)(puVar11 + -0xb0),(int)uVar18);
    fVar12 = _DAT_8c4ab160;
  }
  else {
    uVar18 = **(ulonglong **)(puVar11 + -0xb0);
    fVar12 = _DAT_8c4ab164;
  }
  if (in_FPSCR_PR == '\0') {
    uVar18 = (ulonglong)(uint)(fVar12 * (float)(uVar18 >> 0x20) + (float)uVar18);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar11 + -8) = (int)uVar18;
  }
  else {
    *(double *)(puVar11 + -8) = in_xd2;
  }
  FUN_8c25ce48(pdVar2,ar5_00,ar6_00,ar7_00,*(undefined4 *)(puVar11 + -0xc0));
  uVar1 = FUN_8c213f28(pdVar2,ar5_00,ar6_00,ar7_00);
  *(uint *)(puVar11 + -0xc0) = (ar6 >> 0xe & 3) << 1;
  uVar6 = ar6 & 0x3fff;
  iVar4 = 0;
  iVar3 = 0;
  do {
    uVar15 = SUB84(dVar21,0);
    iVar5 = (int)*ar4;
    pdVar2 = (double *)(ar4[1] * 0x10 + ar5);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    dVar17 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),(float)(int)ar4[2]);
      dVar17 = in_xd6;
    }
    in_xd6 = dVar17;
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(in_dr6,0) * in_fr15;
    }
    else {
      fVar12 = SUB84(in_dr6 * (double)CONCAT44(in_fr14,in_fr15),0);
    }
    dVar17 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((float)(int)ar4[3],SUB84(in_dr8,0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * in_fr15,SUB84(dVar17,0));
    }
    else {
      dVar17 = dVar17 * (double)CONCAT44(in_fr14,in_fr15);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)pdVar2;
      pdVar2 = (double *)((int)pdVar2 + 4);
    }
    else {
      in_xd4 = *pdVar2;
      pdVar2 = pdVar2 + 1;
    }
    iVar4 = iVar4 + iVar5;
    iVar3 = iVar3 + iVar5;
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)pdVar2,fVar12);
      dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + 4),uVar15);
    }
    else {
      dVar13 = *pdVar2;
      dVar20 = pdVar2[1];
    }
    iVar5 = iVar5 + -2;
    psVar7 = ar4 + 5;
    pdVar2 = (double *)(ar4[4] * 0x10 + ar5);
    *(undefined4 *)((int)ar7 + 0x1c) = uVar1;
    *(undefined4 *)(ar7 + 3) = 0xff000000;
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)ar7 + 0x14) = (int)((ulonglong)dVar17 >> 0x20);
      *(int *)(ar7 + 2) = SUB84(dVar13,0);
      *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar20 >> 0x20);
      *(int *)(ar7 + 1) = (int)((ulonglong)dVar13 >> 0x20);
      pdVar9 = (double *)((int)ar7 + 4);
      *(int *)pdVar9 = SUB84(dVar20,0);
    }
    else {
      ar7[2] = dVar17;
      ar7[1] = in_xd6;
      *ar7 = dVar20;
      ar7[-1] = dVar13;
      pdVar9 = ar7 + -2;
      *pdVar9 = in_xd4;
    }
    *(undefined4 *)((int)pdVar9 + -4) = 0xe0000000;
    psVar8 = ar4 + 6;
    pdVar9 = (double *)((int)pdVar9 + 0x1c);
    ar4 = ar4 + 7;
    dVar21 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((float)(int)*psVar7,SUB84(dVar20,0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) * in_fr15,SUB84(dVar21,0));
    }
    else {
      dVar21 = dVar21 * (double)CONCAT44(in_fr14,in_fr15);
    }
    dVar20 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44((float)(int)*psVar8,SUB84(dVar13,0));
    }
    if (in_FPSCR_PR == '\0') {
      in_dr6 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * in_fr15,SUB84(dVar20,0));
    }
    else {
      in_dr6 = dVar20 * (double)CONCAT44(in_fr14,in_fr15);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr8 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar17,0));
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)((int)pdVar2 + 4));
      in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(pdVar2 + 1));
    }
    else {
      in_dr8 = *pdVar2;
      in_xd4 = pdVar2[1];
      in_xd6 = pdVar2[2];
    }
    do {
      psVar7 = ar4 + 1;
      pdVar2 = (double *)(*ar4 * 0x10 + ar5);
      *(undefined4 *)((int)pdVar9 + 0x1c) = uVar1;
      *(undefined4 *)(pdVar9 + 3) = 0xff000000;
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar9 + 0x14) = (int)((ulonglong)in_dr6 >> 0x20);
        *(int *)(pdVar9 + 2) = (int)((ulonglong)dVar21 >> 0x20);
        *(int *)((int)pdVar9 + 0xc) = SUB84(in_dr6,0);
        *(int *)(pdVar9 + 1) = SUB84(dVar21,0);
        pdVar10 = (double *)((int)pdVar9 + 4);
        *(int *)pdVar10 = (int)((ulonglong)in_dr8 >> 0x20);
      }
      else {
        pdVar9[2] = in_dr6;
        pdVar9[1] = dVar21;
        *pdVar9 = in_xd6;
        pdVar9[-1] = in_xd4;
        pdVar10 = pdVar9 + -2;
        *pdVar10 = in_dr8;
      }
      *(undefined4 *)((int)pdVar10 + -4) = 0xe0000000;
      psVar8 = ar4 + 2;
      pdVar9 = (double *)((int)pdVar10 + 0x1c);
      ar4 = (short *)((int)ar4 + *(int *)(puVar11 + -0xc0) + 6);
      dVar17 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44((float)(int)*psVar7,SUB84(dVar21,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * in_fr15,SUB84(dVar17,0));
      }
      else {
        dVar21 = dVar17 * (double)CONCAT44(in_fr14,in_fr15);
      }
      dVar17 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44((float)(int)*psVar8,SUB84(in_dr6,0));
      }
      if (in_FPSCR_PR == '\0') {
        in_dr6 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * in_fr15,SUB84(dVar17,0));
      }
      else {
        in_dr6 = dVar17 * (double)CONCAT44(in_fr14,in_fr15);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr8 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(in_dr8,0));
        pdVar2 = (double *)((int)pdVar2 + 4);
      }
      else {
        in_dr8 = *pdVar2;
        pdVar2 = pdVar2 + 1;
      }
      iVar5 = iVar5 + -1;
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)pdVar2);
        in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)((int)pdVar2 + 4))
        ;
      }
      else {
        in_xd4 = *pdVar2;
        in_xd6 = pdVar2[1];
      }
    } while (iVar5 != 0);
    *(undefined4 *)(pdVar10 + 7) = uVar1;
    *(undefined4 *)((int)pdVar10 + 0x34) = 0xff000000;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(pdVar10 + 6) = (int)((ulonglong)in_dr6 >> 0x20);
      *(int *)((int)pdVar10 + 0x2c) = (int)((ulonglong)dVar21 >> 0x20);
      *(int *)(pdVar10 + 5) = SUB84(in_dr6,0);
      *(int *)((int)pdVar10 + 0x24) = SUB84(dVar21,0);
      pdVar10 = pdVar10 + 4;
      *(int *)pdVar10 = (int)((ulonglong)in_dr8 >> 0x20);
    }
    else {
      *(double *)((int)pdVar10 + 0x2c) = in_dr6;
      *(double *)((int)pdVar10 + 0x24) = dVar21;
      *(double *)((int)pdVar10 + 0x1c) = in_xd6;
      *(double *)((int)pdVar10 + 0x14) = in_xd4;
      pdVar10 = (double *)((int)pdVar10 + 0xc);
      *pdVar10 = in_dr8;
    }
    *(undefined4 *)((int)pdVar10 + -4) = 0xf0000000;
    uVar6 = uVar6 - 1;
    ar7 = (double *)((int)pdVar10 + 0x1c);
  } while (uVar6 != 0);
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar4;
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar3;
  return ar7;
}



/* FUN_8c2166e8 @ 8c2166e8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c2169a4) */
/* WARNING: Removing unreachable block (ram,0x8c21692e) */
/* WARNING: Removing unreachable block (ram,0x8c2167de) */
/* WARNING: Removing unreachable block (ram,0x8c2167c4) */
/* WARNING: Removing unreachable block (ram,0x8c2167d2) */
/* WARNING: Removing unreachable block (ram,0x8c2168de) */
/* WARNING: Removing unreachable block (ram,0x8c216966) */
/* WARNING: Removing unreachable block (ram,0x8c216942) */
/* WARNING: Removing unreachable block (ram,0x8c216974) */
/* WARNING: Removing unreachable block (ram,0x8c2169b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

double * FUN_8c2166e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,double *ar7)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  double *pdVar5;
  short *psVar6;
  undefined1 *ar5_00;
  double *pdVar7;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  int iVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  short *psVar12;
  int iVar13;
  double *pdVar14;
  double *pdVar15;
  float fVar16;
  double in_dr0;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 in_dr2;
  double dVar22;
  ulonglong uVar23;
  double dVar24;
  ulonglong in_dr4;
  undefined4 uVar26;
  double dVar25;
  double in_dr6;
  double dVar27;
  double in_dr8;
  undefined4 in_fr11;
  undefined4 in_fr10;
  double in_dr12;
  float fVar28;
  double in_dr14;
  undefined8 in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  undefined8 in_xd8;
  undefined8 in_xd10;
  double in_xd12;
  double in_xd14;
  bool bVar29;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_3c [16];
  double dStack_2c;
  undefined8 uStack_24;
  double dVar17;
  
  uVar19 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uVar20 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = uVar19;
    pdVar15 = &dStack_2c;
    dStack_2c = (double)CONCAT44(SUB84(in_dr12,0),uVar20);
  }
  else {
    pdVar15 = (double *)auStack_3c;
    uStack_24 = in_xd14;
    dStack_2c = in_dr14;
  }
  *(undefined4 *)((int)pdVar15 + -4) = in_PR;
  *(undefined4 *)((int)pdVar15 + -0xd0) = ar4;
  *(undefined4 *)((int)pdVar15 + -200) = ar5;
  *(undefined4 *)((int)pdVar15 + -0xc0) = ar6;
  uVar26 = (undefined4)(in_dr4 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)pdVar15 + -0xcc) = uVar26;
    *(int *)((int)pdVar15 + -0x60) = SUB84(in_dr14,0);
    *(undefined4 *)((int)pdVar15 + -100) = uVar19;
    *(int *)((int)pdVar15 + -0x68) = SUB84(in_dr12,0);
    *(undefined4 *)((int)pdVar15 + -0x6c) = uVar20;
    *(undefined4 *)((int)pdVar15 + -0x70) = in_fr11;
    *(undefined4 *)((int)pdVar15 + -0x74) = in_fr10;
    *(int *)((int)pdVar15 + -0x78) = SUB84(in_dr8,0);
    *(int *)((int)pdVar15 + -0x7c) = (int)((ulonglong)in_dr8 >> 0x20);
    *(int *)((int)pdVar15 + -0x80) = SUB84(in_dr6,0);
    *(int *)((int)pdVar15 + -0x84) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)((int)pdVar15 + -0x88) = (int)in_dr4;
    *(undefined4 *)((int)pdVar15 + -0x8c) = uVar26;
    *(int *)((int)pdVar15 + -0x90) = (int)in_dr2;
    *(int *)((int)pdVar15 + -0x94) = (int)((ulonglong)in_dr2 >> 0x20);
    *(int *)((int)pdVar15 + -0x98) = SUB84(in_dr0,0);
    *(undefined4 *)((int)pdVar15 + -0x9c) = uVar18;
  }
  else {
    *(ulonglong *)((int)pdVar15 + -0xcc) = in_dr4;
    *(double *)((int)pdVar15 + -100) = in_xd14;
    *(double *)((int)pdVar15 + -0x6c) = in_dr14;
    *(double *)((int)pdVar15 + -0x74) = in_xd12;
    *(double *)((int)pdVar15 + -0x7c) = in_dr12;
    *(undefined8 *)((int)pdVar15 + -0x84) = in_xd10;
    *(ulonglong *)((int)pdVar15 + -0x8c) = CONCAT44(in_fr10,in_fr11);
    *(undefined8 *)((int)pdVar15 + -0x94) = in_xd8;
    *(double *)((int)pdVar15 + -0x9c) = in_dr8;
    *(double *)((int)pdVar15 + -0xa4) = in_xd6;
    *(double *)((int)pdVar15 + -0xac) = in_dr6;
    *(double *)((int)pdVar15 + -0xb4) = in_xd4;
    *(ulonglong *)((int)pdVar15 + -0xbc) = in_dr4;
    *(double *)((int)pdVar15 + -0xc4) = in_xd2;
    *(undefined8 *)((int)pdVar15 + -0xcc) = in_dr2;
    *(undefined8 *)((int)pdVar15 + -0xd4) = in_xd0;
    *(double *)((int)pdVar15 + -0xdc) = in_dr0;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x1c);
  ar6_00 = &DAT_8c4ab1f0;
  ar7_00 = &DAT_8c4ab1ec;
  pdVar11 = (double *)((int)pdVar15 + -0x14);
  *(double **)((int)pdVar15 + -0xbc) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1f0);
    in_dr0 = (double)CONCAT44(uVar18,_DAT_8c4ab1e4);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f4,_DAT_8c4ab1f0);
    dVar22 = (double)CONCAT44(_DAT_8c4ab1e4,_DAT_8c4ab1e0);
  }
  pdVar14 = (double *)((int)pdVar15 + -0x18);
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab1ec);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f0,_DAT_8c4ab1ec);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(in_dr0,0) * SUB84(dVar22,0);
    dVar17 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar16);
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - fVar16,SUB84(dVar22,0));
  }
  else {
    dVar17 = in_dr0 * dVar22;
    dVar22 = dVar22 - dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar5 = (int)((ulonglong)dVar22 >> 0x20);
  }
  else {
    *pdVar5 = dVar22;
  }
  *(double **)((int)pdVar15 + -0xb8) = pdVar14;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(_DAT_8c4ab1e4,_DAT_8c4ab1e8);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab1f0);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1e8);
    dVar22 = (double)CONCAT44(_DAT_8c4ab1e8,_DAT_8c4ab1e4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab1dc);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1dc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar17,0) * SUB84(dVar22,0);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),fVar16);
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - fVar16,SUB84(dVar22,0));
  }
  else {
    dVar17 = dVar17 * dVar22;
    dVar22 = dVar22 - dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar14 = (int)((ulonglong)dVar22 >> 0x20);
  }
  else {
    *pdVar14 = dVar22;
  }
  *(double **)((int)pdVar15 + -0xb4) = pdVar11;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1dc);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab1e0);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1dc);
    dVar22 = (double)CONCAT44(_DAT_8c4ab1f0,_DAT_8c4ab1ec);
  }
  pdVar5 = (double *)((int)pdVar15 + -0x5c);
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab1e8);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1e8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) * SUB84(dVar22,0));
  }
  else {
    dVar17 = dVar17 * dVar22;
  }
  dVar25 = (double)(in_dr4 & 0xffffffff);
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - SUB84(dVar17,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 - dVar17;
  }
  uVar20 = (undefined4)((ulonglong)dVar22 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar11 = uVar20;
  }
  else {
    *pdVar11 = dVar22;
  }
  *(double **)((int)pdVar15 + -0xc4) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar19 = *(undefined4 *)*(double **)((int)pdVar15 + -0xbc);
    dVar22 = (double)CONCAT44(uVar20,uVar19);
    *(undefined4 *)pdVar5 = uVar19;
  }
  else {
    in_xd2 = **(double **)((int)pdVar15 + -0xbc);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x58);
  *(double **)((int)pdVar15 + -0xbc) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar20 = *(undefined4 *)*(double **)((int)pdVar15 + -0xb8);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar20);
    *(undefined4 *)pdVar5 = uVar20;
  }
  else {
    in_xd2 = **(double **)((int)pdVar15 + -0xb8);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x54);
  *(double **)((int)pdVar15 + -0xb8) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar20 = *(undefined4 *)*(double **)((int)pdVar15 + -0xb4);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar20);
    *(undefined4 *)pdVar5 = uVar20;
    *(undefined4 *)((int)pdVar15 + -0x50) = 0;
  }
  else {
    in_xd2 = **(double **)((int)pdVar15 + -0xb4);
    *pdVar5 = in_xd2;
    *(double *)((int)pdVar15 + -0x50) = dVar25;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x4c);
  *(double **)((int)pdVar15 + -0xb4) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab1dc);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e0,_DAT_8c4ab1dc);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -SUB84(dVar22,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x48);
  *(double **)((int)pdVar15 + -0xa0) = pdVar5;
  fVar16 = _DAT_8c4ab1e0;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e4,_DAT_8c4ab1e0);
    fVar16 = -SUB84(dVar22,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -fVar16;
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x44);
  *(double **)((int)pdVar15 + -0xa4) = pdVar5;
  fVar28 = _DAT_8c4ab1e4;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1e8,_DAT_8c4ab1e4);
    fVar28 = -fVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -fVar28;
    *(undefined4 *)((int)pdVar15 + -0x40) = 0;
  }
  else {
    *pdVar5 = in_xd2;
    *(double *)((int)pdVar15 + -0x40) = dVar25;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x3c);
  *(double **)((int)pdVar15 + -0xac) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar5 = _DAT_8c4ab1e8;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1ec,_DAT_8c4ab1e8);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x38);
  *(double **)((int)pdVar15 + -0xa8) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar5 = _DAT_8c4ab1ec;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f0,_DAT_8c4ab1ec);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x34);
  *(double **)((int)pdVar15 + -0xb0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar5 = _DAT_8c4ab1f0;
    *(undefined4 *)((int)pdVar15 + -0x30) = 0;
    *(undefined4 *)((int)pdVar15 + -0x2c) = 0;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f4,_DAT_8c4ab1f0);
    *pdVar5 = in_xd2;
    *(double *)((int)pdVar15 + -0x30) = dVar25;
    *(double *)((int)pdVar15 + -0x2c) = dVar25;
  }
  ar5_00 = (undefined1 *)((int)pdVar15 + -0x9c);
  dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),0x3f800000);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)pdVar15 + -0x28) = 0;
    *(undefined4 *)((int)pdVar15 + -0x24) = 0;
    *(undefined4 *)((int)pdVar15 + -0x20) = 0x3f800000;
  }
  else {
    *(double *)((int)pdVar15 + -0x28) = dVar25;
    *(double *)((int)pdVar15 + -0x24) = dVar25;
    *(double *)((int)pdVar15 + -0x20) = in_xd2;
  }
  FUN_8c255d6c((undefined1 *)((int)pdVar15 + -0x5c),ar5_00,&DAT_8c4ab1f0,&DAT_8c4ab1ec,
               *(undefined4 *)((int)pdVar15 + -0xd0));
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4ab15c,SUB84(dVar17,0));
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                              *(undefined4 *)*(double **)((int)pdVar15 + -0xbc));
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4ab160,_DAT_8c4ab15c);
    in_xd2 = **(double **)((int)pdVar15 + -0xbc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar22,0) * (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar17,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)((int)pdVar15 + -0xc4),fVar16);
    fVar16 = SUB84(dVar17,0);
    fVar28 = _DAT_8c4ab158;
  }
  else {
    uVar23 = **(ulonglong **)((int)pdVar15 + -0xc4);
    fVar16 = _DAT_8c4ab158;
    fVar28 = _DAT_8c4ab15c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar28 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(*(undefined4 *)*(double **)((int)pdVar15 + -0xb8),(int)uVar23);
    fVar28 = _DAT_8c4ab160;
  }
  else {
    dVar22 = **(double **)((int)pdVar15 + -0xb8);
    fVar16 = _DAT_8c4ab160;
    fVar28 = _DAT_8c4ab164;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x10);
  if (in_FPSCR_PR == '\0') {
    fVar21 = (float)((ulonglong)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(fVar21,fVar28 * fVar21 + SUB84(dVar22,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar5 = SUB84(dVar22,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4ab15c,fVar16);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                              *(undefined4 *)*(double **)((int)pdVar15 + -0xa0));
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4ab160,_DAT_8c4ab15c);
    in_xd2 = **(double **)((int)pdVar15 + -0xa0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar22,0) * (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar17,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)((int)pdVar15 + -0xb4),fVar16);
    fVar16 = SUB84(dVar17,0);
    fVar28 = _DAT_8c4ab158;
  }
  else {
    uVar23 = **(ulonglong **)((int)pdVar15 + -0xb4);
    fVar16 = _DAT_8c4ab158;
    fVar28 = _DAT_8c4ab15c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar28 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(*(undefined4 *)*(double **)((int)pdVar15 + -0xa4),(int)uVar23);
    fVar28 = _DAT_8c4ab160;
  }
  else {
    dVar22 = **(double **)((int)pdVar15 + -0xa4);
    fVar16 = _DAT_8c4ab160;
    fVar28 = _DAT_8c4ab164;
  }
  if (in_FPSCR_PR == '\0') {
    fVar21 = (float)((ulonglong)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(fVar21,fVar28 * fVar21 + SUB84(dVar22,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar15 + -0xc) = SUB84(dVar22,0);
  }
  else {
    *(double *)((int)pdVar15 + -0xc) = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4ab15c,fVar16);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                              *(undefined4 *)*(double **)((int)pdVar15 + -0xa8));
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4ab160,_DAT_8c4ab15c);
    in_xd2 = **(double **)((int)pdVar15 + -0xa8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar22,0) * (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar17,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)((int)pdVar15 + -0xac),fVar16);
    fVar16 = SUB84(dVar17,0);
    fVar28 = _DAT_8c4ab158;
  }
  else {
    uVar23 = **(ulonglong **)((int)pdVar15 + -0xac);
    fVar16 = _DAT_8c4ab158;
    fVar28 = _DAT_8c4ab15c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar28 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)((int)pdVar15 + -0xb0),(int)uVar23);
    dVar22 = (double)CONCAT44(_DAT_8c4ab160,fVar16);
  }
  else {
    uVar23 = **(ulonglong **)((int)pdVar15 + -0xb0);
    dVar22 = (double)CONCAT44(_DAT_8c4ab164,_DAT_8c4ab160);
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)
             (uint)((float)((ulonglong)dVar22 >> 0x20) * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar15 + -8) = (int)uVar23;
  }
  else {
    *(double *)((int)pdVar15 + -8) = in_xd2;
  }
  FUN_8c25ce48(pdVar5,ar5_00,ar6_00,ar7_00,*(undefined4 *)((int)pdVar15 + -0xd0));
  _DAT_8c4aa2a4 = 0xff000000;
  _DAT_8c4aa2a0 = FUN_8c213f28(pdVar5,ar5_00,ar6_00,ar7_00);
  uVar4 = *(uint *)((int)pdVar15 + -0xc0);
  iVar9 = 0;
  iVar10 = 0;
  *(uint *)((int)pdVar15 + -0xc0) = *(uint *)((int)pdVar15 + -0xc0) & 0x3fff;
  *(uint *)((int)pdVar15 + -0xc4) = (uVar4 >> 0xe & 3) << 1;
  do {
    psVar12 = *(short **)((int)pdVar15 + -0xd0);
    *(short **)((int)pdVar15 + -0xd0) = psVar12 + 1;
    psVar6 = *(short **)((int)pdVar15 + -0xd0);
    iVar13 = (int)*psVar12;
    *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
    pdVar5 = (double *)(*psVar6 * 0x10 + *(int *)((int)pdVar15 + -200));
    if (iVar13 < 0) {
      iVar13 = -iVar13;
    }
    psVar6 = *(short **)((int)pdVar15 + -0xd0);
    iVar10 = iVar10 + iVar13;
    *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
    sVar1 = *psVar6;
    iVar8 = 0;
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + -0xcc),SUB84(in_dr6,0));
    }
    else {
      in_dr6 = *(double *)((int)pdVar15 + -0xcc);
    }
    iVar13 = iVar13 + -2;
    psVar6 = *(short **)((int)pdVar15 + -0xd0);
    *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
    sVar2 = *psVar6;
    psVar6 = *(short **)((int)pdVar15 + -0xd0);
    dVar17 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((float)(int)sVar1,SUB84(dVar25,0));
    }
    *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
    fVar16 = (float)((ulonglong)in_dr6 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * fVar16,SUB84(dVar17,0));
    }
    else {
      dVar17 = dVar17 * in_dr6;
    }
    pdVar11 = (double *)(*psVar6 * 0x10 + *(int *)((int)pdVar15 + -200));
    dVar25 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),(float)(int)sVar2);
      dVar25 = in_xd4;
    }
    in_xd4 = dVar25;
    if (in_FPSCR_PR == '\0') {
      dVar25 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) * fVar16);
    }
    else {
      dVar25 = dVar17 * in_dr6;
    }
    psVar6 = *(short **)((int)pdVar15 + -0xd0);
    *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
    sVar1 = *psVar6;
    psVar6 = *(short **)((int)pdVar15 + -0xd0);
    *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
    dVar17 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(float)(int)sVar1);
      dVar17 = in_xd14;
    }
    if (in_FPSCR_PR == '\0') {
      fVar28 = SUB84(in_dr14,0) * fVar16;
    }
    else {
      fVar28 = SUB84(in_dr14 * in_dr6,0);
    }
    dVar24 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44((float)(int)*psVar6,fVar28);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr14 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * fVar16,SUB84(dVar24,0));
    }
    else {
      in_dr14 = dVar24 * in_dr6;
    }
    do {
      psVar6 = *(short **)((int)pdVar15 + -0xd0);
      *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
      pdVar14 = (double *)(*psVar6 * 0x10 + *(int *)((int)pdVar15 + -200));
      psVar6 = *(short **)((int)pdVar15 + -0xd0);
      *(short **)((int)pdVar15 + -0xd0) = psVar6 + 1;
      if (in_FPSCR_SZ == '\0') {
        fVar16 = *(float *)((int)pdVar15 + -0xcc);
      }
      else {
        fVar16 = (float)((ulonglong)*(undefined8 *)((int)pdVar15 + -0xcc) >> 0x20);
      }
      psVar12 = *(short **)((int)pdVar15 + -0xd0);
      fVar28 = (float)(int)*psVar6;
      *(short **)((int)pdVar15 + -0xd0) = psVar12 + 1;
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar5 + 1),SUB84(in_dr6,0));
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),fVar28);
      }
      else {
        in_dr6 = pdVar5[1];
        in_xd12 = in_xd2;
      }
      if (in_FPSCR_PR == '\0') {
        fVar28 = SUB84(in_dr12,0) * fVar16;
      }
      else {
        fVar28 = SUB84(in_dr12 * (double)CONCAT44(fVar16,fVar28),0);
      }
      fVar21 = (float)(int)*psVar12;
      dVar24 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44(fVar21,fVar28);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr12 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * fVar16,SUB84(dVar24,0));
      }
      else {
        in_dr12 = dVar24 * (double)CONCAT44(fVar16,fVar21);
      }
      dVar24 = (double)((ulonglong)(uint)fVar16 << 0x20);
      fVar16 = (float)((ulonglong)in_dr6 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar29 = 0.0 < fVar16;
      }
      else {
        bVar29 = dVar24 < in_dr6;
      }
      bVar3 = false;
      if (bVar29) {
        if (in_FPSCR_SZ == '\0') {
          dVar24 = (double)((ulonglong)*(uint *)(pdVar11 + 1) << 0x20);
        }
        else {
          dVar24 = pdVar11[1];
        }
        if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar24 >> 0x20) <= SUB84(dVar24,0))
        goto LAB_8c2169e6;
        if (in_FPSCR_SZ == '\0') {
          fVar28 = *(float *)(pdVar14 + 1);
        }
        else {
          fVar28 = (float)((ulonglong)pdVar14[1] >> 0x20);
        }
        dVar24 = (double)((ulonglong)(uint)fVar28 << 0x20);
        if (in_FPSCR_PR != '\0' || fVar28 <= 0.0) goto LAB_8c2169e6;
        dVar24 = (double)CONCAT44(fVar28,0x3f800000);
        if (in_FPSCR_PR == '\0') {
          bVar29 = fVar16 < 1.0;
        }
        else {
          bVar29 = in_dr6 < dVar24;
        }
        if (!bVar29) goto LAB_8c2169e6;
        if (in_FPSCR_SZ == '\0') {
          fVar16 = *(float *)(pdVar11 + 1);
        }
        else {
          fVar16 = (float)((ulonglong)pdVar11[1] >> 0x20);
        }
        dVar24 = (double)CONCAT44(fVar16,0x3f800000);
        if (in_FPSCR_PR != '\0' || 1.0 <= fVar16) goto LAB_8c2169e6;
        if (in_FPSCR_SZ == '\0') {
          fVar16 = *(float *)(pdVar14 + 1);
        }
        else {
          fVar16 = (float)((ulonglong)pdVar14[1] >> 0x20);
        }
        dVar24 = (double)CONCAT44(fVar16,0x3f800000);
        if (in_FPSCR_PR != '\0' || 1.0 <= fVar16) goto LAB_8c2169e6;
      }
      else {
LAB_8c2169e6:
        bVar3 = true;
      }
      uVar4 = (uint)((ulonglong)in_dr14 >> 0x20);
      if (bVar3) {
        if (iVar8 != 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr8 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(in_dr8,0));
            pdVar7 = (double *)((int)pdVar11 + 4);
          }
          else {
            in_dr8 = *pdVar11;
            in_xd6 = pdVar11[1];
            pdVar7 = pdVar11 + 2;
          }
          in_dr6 = *pdVar7;
          *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa2a0;
          *(undefined4 *)(ar7 + 3) = _DAT_8c4aa2a4;
          if (in_FPSCR_SZ == '\0') {
            *(uint *)((int)ar7 + 0x14) = uVar4;
            *(int *)(ar7 + 2) = SUB84(in_dr14,0);
            *(int *)((int)ar7 + 0xc) = (int)((ulonglong)in_dr6 >> 0x20);
            *(int *)(ar7 + 1) = SUB84(in_dr6,0);
            pdVar7 = (double *)((int)ar7 + 4);
            *(int *)pdVar7 = (int)((ulonglong)in_dr8 >> 0x20);
          }
          else {
            ar7[2] = in_dr14;
            ar7[1] = dVar17;
            *ar7 = in_dr6;
            ar7[-1] = in_xd6;
            pdVar7 = ar7 + -2;
            *pdVar7 = in_dr8;
          }
          *(undefined4 *)((int)pdVar7 + -4) = 0xf0000000;
          iVar9 = iVar9 + iVar8 + 1;
          iVar8 = 0;
          ar7 = (double *)((int)pdVar7 + 0x1c);
        }
      }
      else {
        if (iVar8 == 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr8 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(in_dr8,0));
            pdVar7 = (double *)((int)pdVar5 + 4);
          }
          else {
            in_dr8 = *pdVar5;
            in_xd6 = pdVar5[1];
            pdVar7 = pdVar5 + 2;
          }
          dVar27 = *pdVar7;
          *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa2a0;
          *(undefined4 *)(ar7 + 3) = _DAT_8c4aa2a4;
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)ar7 + 0x14) = SUB84(dVar25,0);
            *(int *)(ar7 + 2) = (int)((ulonglong)dVar25 >> 0x20);
            *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar27 >> 0x20);
            *(int *)(ar7 + 1) = SUB84(dVar27,0);
            pdVar7 = (double *)((int)ar7 + 4);
            *(int *)pdVar7 = (int)((ulonglong)in_dr8 >> 0x20);
          }
          else {
            ar7[2] = in_xd4;
            ar7[1] = dVar25;
            *ar7 = dVar27;
            ar7[-1] = in_xd6;
            pdVar7 = ar7 + -2;
            *pdVar7 = in_dr8;
          }
          *(undefined4 *)((int)pdVar7 + -4) = 0xe0000000;
          iVar8 = 1;
          ar7 = (double *)((int)pdVar7 + 0x1c);
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr8 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(in_dr8,0));
          in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar11 + 1),*(undefined4 *)pdVar11);
        }
        else {
          in_xd6 = *pdVar11;
          in_dr8 = pdVar11[1];
          in_dr6 = pdVar11[2];
        }
        *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa2a0;
        *(undefined4 *)(ar7 + 3) = _DAT_8c4aa2a4;
        if (in_FPSCR_SZ == '\0') {
          *(uint *)((int)ar7 + 0x14) = uVar4;
          *(int *)(ar7 + 2) = SUB84(in_dr14,0);
          *(int *)((int)ar7 + 0xc) = (int)((ulonglong)in_dr6 >> 0x20);
          *(int *)(ar7 + 1) = (int)((ulonglong)in_dr8 >> 0x20);
          pdVar7 = (double *)((int)ar7 + 4);
          *(int *)pdVar7 = SUB84(in_dr6,0);
        }
        else {
          ar7[2] = in_dr14;
          ar7[1] = dVar17;
          *ar7 = in_dr6;
          ar7[-1] = in_dr8;
          pdVar7 = ar7 + -2;
          *pdVar7 = in_xd6;
        }
        *(undefined4 *)((int)pdVar7 + -4) = 0xe0000000;
        ar7 = (double *)((int)pdVar7 + 0x1c);
        iVar8 = iVar8 + 1;
      }
      if (bVar3) {
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar5 + 1),SUB84(in_dr6,0));
        }
        else {
          in_dr6 = pdVar5[1];
        }
        fVar16 = (float)((ulonglong)in_dr6 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar29 = 0.0 < fVar16;
        }
        else {
          bVar29 = (double)((ulonglong)dVar24 & 0xffffffff00000000) < in_dr6;
        }
        if (bVar29) {
          if (in_FPSCR_PR == '\0') {
            bVar29 = fVar16 < 1.0;
          }
          else {
            bVar29 = in_dr6 < 0.0078125;
          }
          if (!bVar29) goto LAB_8c216aa8;
LAB_8c216ac8:
          in_dr6 = dVar17;
          dVar24 = in_dr14;
          in_dr8 = in_xd12;
          if (in_FPSCR_SZ == '\0') {
            in_dr6 = (double)(ulonglong)uVar4;
            dVar24 = in_xd6;
            in_dr8 = (double)((ulonglong)in_dr12 >> 0x20);
          }
          in_xd6 = dVar24;
          ar7 = (double *)FUN_8c216b84(pdVar5,pdVar11,pdVar14,ar7);
        }
        else {
LAB_8c216aa8:
          if (in_FPSCR_SZ == '\0') {
            fVar16 = *(float *)(pdVar11 + 1);
          }
          else {
            fVar16 = (float)((ulonglong)pdVar11[1] >> 0x20);
          }
          if (in_FPSCR_PR == '\0' && 0.0 < fVar16) {
            if (in_FPSCR_SZ == '\0') {
              dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                        *(undefined4 *)(pdVar11 + 1));
            }
            if (in_FPSCR_PR == '\0') {
              bVar29 = SUB84(dVar22,0) < 1.0;
            }
            else {
              bVar29 = dVar22 < 0.0078125;
            }
            if (bVar29) goto LAB_8c216ac8;
          }
          if (in_FPSCR_SZ == '\0') {
            fVar16 = *(float *)(pdVar14 + 1);
          }
          else {
            fVar16 = (float)((ulonglong)pdVar14[1] >> 0x20);
          }
          if (in_FPSCR_PR == '\0' && 0.0 < fVar16) {
            if (in_FPSCR_SZ == '\0') {
              dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                        *(undefined4 *)(pdVar14 + 1));
            }
            if (in_FPSCR_PR == '\0') {
              bVar29 = SUB84(dVar22,0) < 1.0;
            }
            else {
              bVar29 = dVar22 < 0.0078125;
            }
            if (bVar29) goto LAB_8c216ac8;
          }
        }
      }
      *(int *)((int)pdVar15 + -0xd0) =
           *(int *)((int)pdVar15 + -0xd0) + *(int *)((int)pdVar15 + -0xc4);
      dVar24 = in_dr14;
      in_xd14 = in_xd12;
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr12,0));
        in_xd14 = dVar17;
        dVar17 = (double)CONCAT44(SUB84(in_dr14,0),SUB84(dVar25,0));
      }
      iVar13 = iVar13 + -1;
      uVar20 = (undefined4)((ulonglong)in_dr12 >> 0x20);
      in_dr14 = in_dr12;
      dVar25 = dVar17;
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(uVar20,SUB84(dVar24,0));
        dVar25 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),(int)((ulonglong)dVar24 >> 0x20))
        ;
        dVar24 = in_xd4;
      }
      in_xd4 = dVar24;
      pdVar5 = pdVar11;
      pdVar11 = pdVar14;
      dVar17 = in_xd14;
    } while (iVar13 != 0);
    if (iVar8 != 0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar14 + 4),SUB84(in_dr6,0));
        dVar25 = (double)CONCAT44(*(undefined4 *)(pdVar14 + 1),*(undefined4 *)pdVar14);
      }
      else {
        in_xd4 = *pdVar14;
        in_dr6 = pdVar14[1];
        dVar25 = pdVar14[2];
      }
      *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa2a0;
      *(undefined4 *)(ar7 + 3) = _DAT_8c4aa2a4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar7 + 0x14) = uVar20;
        *(int *)(ar7 + 2) = SUB84(in_dr12,0);
        *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar25 >> 0x20);
        *(int *)(ar7 + 1) = (int)((ulonglong)in_dr6 >> 0x20);
        pdVar5 = (double *)((int)ar7 + 4);
        *(int *)pdVar5 = SUB84(dVar25,0);
      }
      else {
        ar7[2] = in_dr12;
        ar7[1] = in_xd12;
        *ar7 = dVar25;
        ar7[-1] = in_dr6;
        pdVar5 = ar7 + -2;
        *pdVar5 = in_xd4;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xf0000000;
      iVar9 = iVar9 + iVar8 + 1;
      ar7 = (double *)((int)pdVar5 + 0x1c);
    }
    iVar13 = *(int *)((int)pdVar15 + -0xc0);
    *(int *)((int)pdVar15 + -0xc0) = iVar13 + -1;
    if (iVar13 + -1 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar9;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar10;
      return ar7;
    }
  } while( true );
}



/* FUN_8c2186a0 @ 8c2186a0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2186a0(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint *ain1)

{
  undefined4 ar7_00;
  int iVar1;
  longlong lVar2;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if ((*ain1 & 0x100) != 0) {
    if (in_FPSCR_SZ == '\0') {
      lVar2 = (ulonglong)(uint)ar4[5] << 0x20;
    }
    else {
      lVar2 = *(longlong *)(ar4 + 5);
    }
    if ((in_FPSCR_PR == '\0' && (float)lVar2 < (float)((ulonglong)lVar2 >> 0x20)) &&
       (iVar1 = FUN_8c217e18(ar4,ar5,ar6,ar7), iVar1 != 0)) {
      return 0xffffffff;
    }
  }
  ar7_00 = _DAT_8c4aa510;
  if (*ar4 != 0) {
    ar5 = FUN_8c21849c(*ar4,_DAT_8c4aa510,ar6,ar7);
  }
  if (ar4[1] != 0) {
    _DAT_8c4ab1d8 = ar5;
    FUN_8c217f12(ar4[1],ar5,_DAT_8c4c0fa0,ar7_00,in_PR);
  }
  return 0;
}



/* FUN_8c21870e @ 8c21870e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c21870e(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint unaff_r8;
  uint unaff_r10;
  uint unaff_r11;
  uint *unaff_r12;
  uint unaff_r13;
  uint uVar2;
  undefined4 in_PR;
  
  do {
    uVar2 = *unaff_r12;
    if ((uVar2 & 7) == 7) {
      uVar1 = 7;
      if ((uVar2 & unaff_r11) == 0) {
        ar4 = (uint *)unaff_r12[1];
        uVar1 = FUN_8c21869c(ar4,ar5,ar6,ar7);
      }
      if ((uVar2 & unaff_r10) == 0) {
        ar4 = (uint *)unaff_r12[0xb];
        uVar1 = FUN_8c2186f8(ar4,ar5,ar6,ar7);
      }
    }
    else {
      FUN_8c2563ac(ar4,ar5,ar6,ar7,in_PR);
      if ((uVar2 & 1) == 0) {
        ar4 = unaff_r12 + 2;
        noop_25b638(ar4,ar5,ar6,ar7,in_PR);
      }
      if ((uVar2 & 2) == 0) {
        unaff_r13 = uVar2 & 0x20;
        ar4 = unaff_r12 + 5;
        ar5 = unaff_r13;
        FUN_8c2569e0(ar4,unaff_r13,ar6,ar7,in_PR);
      }
      if ((uVar2 & unaff_r8) == 0) {
        ar4 = unaff_r12 + 8;
        FUN_8c257098(ar4,ar5,ar6,ar7,in_PR);
      }
      if ((uVar2 & unaff_r11) == 0) {
        ar4 = (uint *)unaff_r12[1];
        unaff_r13 = FUN_8c21869c(ar4,ar5,ar6,ar7);
      }
      if (((uVar2 & unaff_r10) == 0) && (((uVar2 & 0x100) == 0 || (unaff_r13 == 0)))) {
        ar4 = (uint *)unaff_r12[0xb];
        FUN_8c2186f8(ar4,ar5,ar6,ar7);
      }
      uVar1 = FUN_8c256254(ar4,ar5,ar6,ar7);
    }
    unaff_r12 = (uint *)unaff_r12[0xc];
  } while (unaff_r12 != (uint *)0x0);
  return uVar1;
}



/* FUN_8c218ea0 @ 8c218ea0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c218ea0(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint unaff_r8;
  uint unaff_r10;
  uint unaff_r11;
  uint *unaff_r12;
  uint unaff_r13;
  uint uVar2;
  undefined4 in_PR;
  
  do {
    uVar2 = *unaff_r12;
    if ((uVar2 & 7) == 7) {
      uVar1 = 7;
      if ((uVar2 & unaff_r11) == 0) {
        ar4 = (uint *)unaff_r12[1];
        uVar1 = FUN_8c218e00(ar4,ar5,ar6,ar7);
      }
      if ((uVar2 & unaff_r10) == 0) {
        ar4 = (uint *)unaff_r12[0xb];
        uVar1 = FUN_8c218e8a(ar4,ar5,ar6,ar7);
      }
    }
    else {
      FUN_8c2563ac(ar4,ar5,ar6,ar7,in_PR);
      if ((uVar2 & 1) == 0) {
        ar4 = unaff_r12 + 2;
        noop_25b638(ar4,ar5,ar6,ar7,in_PR);
      }
      if ((uVar2 & 2) == 0) {
        unaff_r13 = uVar2 & 0x20;
        ar4 = unaff_r12 + 5;
        ar5 = unaff_r13;
        FUN_8c2569e0(ar4,unaff_r13,ar6,ar7,in_PR);
      }
      if ((uVar2 & unaff_r8) == 0) {
        ar4 = unaff_r12 + 8;
        FUN_8c257098(ar4,ar5,ar6,ar7,in_PR);
      }
      if ((uVar2 & unaff_r11) == 0) {
        ar4 = (uint *)unaff_r12[1];
        unaff_r13 = FUN_8c218e00(ar4,ar5,ar6,ar7);
      }
      if (((uVar2 & unaff_r10) == 0) && (((uVar2 & 0x100) == 0 || (unaff_r13 == 0)))) {
        ar4 = (uint *)unaff_r12[0xb];
        FUN_8c218e8a(ar4,ar5,ar6,ar7);
      }
      uVar1 = FUN_8c256254(ar4,ar5,ar6,ar7);
    }
    unaff_r12 = (uint *)unaff_r12[0xc];
  } while (unaff_r12 != (uint *)0x0);
  return uVar1;
}



/* FUN_8c219962 @ 8c219962 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c219962(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint *ain0)

{
  int iVar1;
  uint in_r2;
  undefined4 *in_r3;
  int *unaff_r12;
  undefined4 ar5_00;
  int ar4_00;
  longlong lVar2;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  ar5_00 = *in_r3;
  ar4_00 = *unaff_r12;
  if ((*ain0 & in_r2) != 0) {
    if (in_FPSCR_SZ == '\0') {
      lVar2 = (ulonglong)(uint)unaff_r12[5] << 0x20;
    }
    else {
      lVar2 = *(longlong *)(unaff_r12 + 5);
    }
    if ((in_FPSCR_PR == '\0' && (float)lVar2 < (float)((ulonglong)lVar2 >> 0x20)) &&
       (iVar1 = FUN_8c217e18(unaff_r12,ar5,ar6,ar7), iVar1 != 0)) {
      return 0xffffffff;
    }
  }
  if (ar4_00 != 0) {
    FUN_8c21982e(ar4_00,ar5_00,ar6,ar7,in_PR);
  }
  if (unaff_r12[1] != 0) {
    FUN_8c21908e(unaff_r12[1],_DAT_8c4c0fa0,ar5_00,ar7);
  }
  return 0;
}



/* FUN_8c2199c0 @ 8c2199c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2199c0(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint unaff_r8;
  uint unaff_r10;
  uint unaff_r11;
  uint *unaff_r12;
  uint unaff_r13;
  uint uVar2;
  undefined4 in_PR;
  
  do {
    uVar2 = *unaff_r12;
    if ((uVar2 & 7) == 7) {
      uVar1 = 7;
      if ((uVar2 & unaff_r11) == 0) {
        ar4 = (uint *)unaff_r12[1];
        uVar1 = FUN_8c219954(ar4,ar5,ar6,ar7);
      }
      if ((uVar2 & unaff_r10) == 0) {
        ar4 = (uint *)unaff_r12[0xb];
        uVar1 = FUN_8c2199aa(ar4,ar5,ar6,ar7);
      }
    }
    else {
      FUN_8c2563ac(ar4,ar5,ar6,ar7,in_PR);
      if ((uVar2 & 1) == 0) {
        ar4 = unaff_r12 + 2;
        noop_25b638(ar4,ar5,ar6,ar7,in_PR);
      }
      if ((uVar2 & 2) == 0) {
        unaff_r13 = uVar2 & 0x20;
        ar4 = unaff_r12 + 5;
        ar5 = unaff_r13;
        FUN_8c2569e0(ar4,unaff_r13,ar6,ar7,in_PR);
      }
      if ((uVar2 & unaff_r8) == 0) {
        ar4 = unaff_r12 + 8;
        FUN_8c257098(ar4,ar5,ar6,ar7,in_PR);
      }
      if ((uVar2 & unaff_r11) == 0) {
        ar4 = (uint *)unaff_r12[1];
        unaff_r13 = FUN_8c219954(ar4,ar5,ar6,ar7);
      }
      if (((uVar2 & unaff_r10) == 0) && (((uVar2 & 0x100) == 0 || (unaff_r13 == 0)))) {
        ar4 = (uint *)unaff_r12[0xb];
        FUN_8c2199aa(ar4,ar5,ar6,ar7);
      }
      uVar1 = FUN_8c256254(ar4,ar5,ar6,ar7);
    }
    unaff_r12 = (uint *)unaff_r12[0xc];
  } while (unaff_r12 != (uint *)0x0);
  return uVar1;
}



/* FUN_8c21a718 @ 8c21a718 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c21a718(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint unaff_r8;
  uint unaff_r10;
  uint unaff_r11;
  uint *unaff_r12;
  uint unaff_r13;
  uint uVar2;
  undefined4 in_PR;
  
  do {
    uVar2 = *unaff_r12;
    if ((uVar2 & 7) == 7) {
      uVar1 = 7;
      if ((uVar2 & unaff_r11) == 0) {
        ar4 = (uint *)unaff_r12[1];
        uVar1 = FUN_8c21a678(ar4,ar5,ar6,ar7);
      }
      if ((uVar2 & unaff_r10) == 0) {
        ar4 = (uint *)unaff_r12[0xb];
        uVar1 = FUN_8c21a702(ar4,ar5,ar6,ar7);
      }
    }
    else {
      FUN_8c2563ac(ar4,ar5,ar6,ar7,in_PR);
      if ((uVar2 & 1) == 0) {
        ar4 = unaff_r12 + 2;
        noop_25b638(ar4,ar5,ar6,ar7,in_PR);
      }
      if ((uVar2 & 2) == 0) {
        unaff_r13 = uVar2 & 0x20;
        ar4 = unaff_r12 + 5;
        ar5 = unaff_r13;
        FUN_8c2569e0(ar4,unaff_r13,ar6,ar7,in_PR);
      }
      if ((uVar2 & unaff_r8) == 0) {
        ar4 = unaff_r12 + 8;
        FUN_8c257098(ar4,ar5,ar6,ar7,in_PR);
      }
      if ((uVar2 & unaff_r11) == 0) {
        ar4 = (uint *)unaff_r12[1];
        unaff_r13 = FUN_8c21a678(ar4,ar5,ar6,ar7);
      }
      if (((uVar2 & unaff_r10) == 0) && (((uVar2 & 0x100) == 0 || (unaff_r13 == 0)))) {
        ar4 = (uint *)unaff_r12[0xb];
        FUN_8c21a702(ar4,ar5,ar6,ar7);
      }
      uVar1 = FUN_8c256254(ar4,ar5,ar6,ar7);
    }
    unaff_r12 = (uint *)unaff_r12[0xc];
  } while (unaff_r12 != (uint *)0x0);
  return uVar1;
}



/* FUN_8c21a8be @ 8c21a8be callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c21a8be(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint unaff_r11;
  uint unaff_r12;
  uint *unaff_r14;
  undefined4 in_PR;
  
  do {
    FUN_8c2563ac(ar4,ar5,ar6,ar7,in_PR);
    if ((*unaff_r14 & unaff_r11) == 0) {
      ar4 = unaff_r14;
      (*_DAT_8c4aa340)(unaff_r14,ar5,ar6,ar7);
    }
    else {
      noop_25b638(unaff_r14 + 2,ar5,ar6,ar7,in_PR);
      ar5 = *unaff_r14 & unaff_r12;
      FUN_8c2569e0(unaff_r14 + 5,ar5,ar6,ar7);
      ar4 = unaff_r14 + 8;
      FUN_8c257098(ar4,ar5,ar6,ar7);
    }
    if (_DAT_8c4aa358 != (code *)0x0) {
      ar4 = unaff_r14;
      (*_DAT_8c4aa358)(unaff_r14,ar5,ar6,ar7);
    }
    if ((unaff_r14[1] != 0) && ((*unaff_r14 & 8) == 0)) {
      ar4 = (uint *)unaff_r14[1];
      (*_DAT_8c4aa368)(ar4,ar5,ar6,ar7);
    }
    if (unaff_r14[0xb] != 0) {
      ar4 = (uint *)unaff_r14[0xb];
      FUN_8c21a8b0(ar4,ar5,ar6,ar7);
    }
    uVar1 = FUN_8c256254(ar4,ar5,ar6,ar7);
    unaff_r14 = (uint *)unaff_r14[0xc];
  } while (unaff_r14 != (uint *)0x0);
  return uVar1;
}



/* FUN_8c21a952 @ 8c21a952 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c21a952(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint unaff_r10;
  uint unaff_r11;
  uint *unaff_r14;
  undefined4 in_PR;
  
  do {
    FUN_8c2563ac(ar4,ar5,ar6,ar7,in_PR);
    if ((*unaff_r14 & unaff_r10) == 0) {
      ar4 = unaff_r14;
      (*_DAT_8c4aa340)(unaff_r14,ar5,ar6,ar7);
    }
    else {
      noop_25b638(unaff_r14 + 2,ar5,ar6,ar7,in_PR);
      ar5 = *unaff_r14 & unaff_r11;
      FUN_8c2569e0(unaff_r14 + 5,ar5,ar6,ar7);
      ar4 = unaff_r14 + 8;
      FUN_8c257098(ar4,ar5,ar6,ar7,in_PR);
    }
    if (_DAT_8c4aa358 != (code *)0x0) {
      ar4 = unaff_r14;
      (*_DAT_8c4aa358)(unaff_r14,ar5,ar6,ar7);
    }
    if ((*unaff_r14 & 0x80) == 0) {
      ar4 = unaff_r14;
      (*_DAT_8c4aa36c)(unaff_r14,ar5,ar6,ar7);
    }
    else if ((unaff_r14[1] != 0) && ((*unaff_r14 & 8) == 0)) {
      ar4 = (uint *)unaff_r14[1];
      (*_DAT_8c4aa368)(ar4,ar5,ar6,ar7);
    }
    if (unaff_r14[0xb] != 0) {
      ar4 = (uint *)unaff_r14[0xb];
      FUN_8c21a942(ar4,ar5,ar6,ar7);
    }
    uVar1 = FUN_8c256254(ar4,ar5,ar6,ar7);
    unaff_r14 = (uint *)unaff_r14[0xc];
  } while (unaff_r14 != (uint *)0x0);
  return uVar1;
}



/* FUN_8c21b916 @ 8c21b916 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c21b916(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint unaff_r11;
  uint unaff_r12;
  uint *unaff_r14;
  undefined4 in_PR;
  
  do {
    FUN_8c2563ac(ar4,ar5,ar6,ar7,in_PR);
    if ((*unaff_r14 & unaff_r11) == 0) {
      ar4 = unaff_r14;
      (*_DAT_8c4aa340)(unaff_r14,ar5,ar6,ar7);
    }
    else {
      noop_25b638(unaff_r14 + 2,ar5,ar6,ar7,in_PR);
      ar5 = *unaff_r14 & unaff_r12;
      FUN_8c2569e0(unaff_r14 + 5,ar5,ar6,ar7);
      ar4 = unaff_r14 + 8;
      FUN_8c257098(ar4,ar5,ar6,ar7);
    }
    if (_DAT_8c4aa358 != (code *)0x0) {
      ar4 = unaff_r14;
      (*_DAT_8c4aa358)(unaff_r14,ar5,ar6,ar7);
    }
    if ((unaff_r14[1] != 0) && ((*unaff_r14 & 8) == 0)) {
      ar4 = (uint *)unaff_r14[1];
      FUN_8c219954(ar4,ar5,ar6,ar7);
    }
    if (unaff_r14[0xb] != 0) {
      ar4 = (uint *)unaff_r14[0xb];
      FUN_8c21b908(ar4,ar5,ar6,ar7);
    }
    uVar1 = FUN_8c256254(ar4,ar5,ar6,ar7);
    unaff_r14 = (uint *)unaff_r14[0xc];
  } while (unaff_r14 != (uint *)0x0);
  return uVar1;
}



/* FUN_8c21b9a8 @ 8c21b9a8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c21b9a8(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint unaff_r10;
  uint unaff_r11;
  uint *unaff_r14;
  undefined4 in_PR;
  
  do {
    FUN_8c2563ac(ar4,ar5,ar6,ar7,in_PR);
    if ((*unaff_r14 & unaff_r10) == 0) {
      ar4 = unaff_r14;
      (*_DAT_8c4aa340)(unaff_r14,ar5,ar6,ar7);
    }
    else {
      noop_25b638(unaff_r14 + 2,ar5,ar6,ar7,in_PR);
      ar5 = *unaff_r14 & unaff_r11;
      FUN_8c2569e0(unaff_r14 + 5,ar5,ar6,ar7);
      ar4 = unaff_r14 + 8;
      FUN_8c257098(ar4,ar5,ar6,ar7,in_PR);
    }
    if (_DAT_8c4aa358 != (code *)0x0) {
      ar4 = unaff_r14;
      (*_DAT_8c4aa358)(unaff_r14,ar5,ar6,ar7);
    }
    if ((*unaff_r14 & 0x80) == 0) {
      ar4 = unaff_r14;
      (*_DAT_8c4aa36c)(unaff_r14,ar5,ar6,ar7);
    }
    else if ((unaff_r14[1] != 0) && ((*unaff_r14 & 8) == 0)) {
      ar4 = (uint *)unaff_r14[1];
      FUN_8c219954(ar4,ar5,ar6,ar7);
    }
    if (unaff_r14[0xb] != 0) {
      ar4 = (uint *)unaff_r14[0xb];
      FUN_8c21b998(ar4,ar5,ar6,ar7);
    }
    uVar1 = FUN_8c256254(ar4,ar5,ar6,ar7);
    unaff_r14 = (uint *)unaff_r14[0xc];
  } while (unaff_r14 != (uint *)0x0);
  return uVar1;
}



/* FUN_8c22b7a8 @ 8c22b7a8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c22ba1a) */
/* WARNING: Removing unreachable block (ram,0x8c22b9e2) */
/* WARNING: Removing unreachable block (ram,0x8c22b9ac) */
/* WARNING: Removing unreachable block (ram,0x8c22b898) */
/* WARNING: Removing unreachable block (ram,0x8c22b87e) */
/* WARNING: Removing unreachable block (ram,0x8c22b88c) */
/* WARNING: Removing unreachable block (ram,0x8c22b994) */
/* WARNING: Removing unreachable block (ram,0x8c22b9c6) */
/* WARNING: Removing unreachable block (ram,0x8c22b9f6) */
/* WARNING: Removing unreachable block (ram,0x8c22bafa) */
/* WARNING: Removing unreachable block (ram,0x8c22b9fc) */
/* WARNING: Removing unreachable block (ram,0x8c22b9d6) */
/* WARNING: Removing unreachable block (ram,0x8c22ba20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

double * FUN_8c22b7a8(short *ar4,int ar5,uint ar6,double *ar7)

{
  double *pdVar1;
  double *pdVar2;
  undefined4 uVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  undefined1 *ar5_00;
  int iVar7;
  undefined1 *ar6_00;
  int iVar8;
  undefined1 *ar7_00;
  int iVar9;
  uint uVar10;
  short *psVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  float fVar16;
  double in_dr0;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 in_dr2;
  double dVar22;
  ulonglong uVar23;
  float fVar25;
  double dVar24;
  ulonglong in_dr4;
  double dVar26;
  double in_dr6;
  double in_dr8;
  double in_dr10;
  double dVar27;
  undefined8 in_dr12;
  double dVar28;
  undefined8 in_dr14;
  undefined4 uVar29;
  undefined8 in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  undefined8 in_xd8;
  double in_xd10;
  double dVar30;
  undefined8 in_xd12;
  double in_xd14;
  bool bVar31;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  undefined8 uStack_20;
  double dVar17;
  
  uVar3 = (undefined4)in_dr12;
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_20);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_20._0_4_ = uVar3;
    puVar15 = (undefined1 *)((int)&uStack_28 + 4);
    uStack_28 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_28);
  }
  else {
    puVar15 = auStack_30;
    uStack_20 = in_xd14;
    uStack_28 = in_xd12;
  }
  *(undefined4 *)(puVar15 + -4) = in_PR;
  uVar18 = (undefined4)in_dr4;
  uVar19 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uVar29 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar15 + -0x60) = (int)in_dr14;
    *(undefined4 *)(puVar15 + -100) = uVar29;
    *(undefined4 *)(puVar15 + -0x68) = uVar3;
    *(undefined4 *)(puVar15 + -0x6c) = uVar18;
    *(int *)(puVar15 + -0x70) = SUB84(in_dr10,0);
    *(int *)(puVar15 + -0x74) = (int)((ulonglong)in_dr10 >> 0x20);
    *(int *)(puVar15 + -0x78) = SUB84(in_dr8,0);
    *(int *)(puVar15 + -0x7c) = (int)((ulonglong)in_dr8 >> 0x20);
    *(int *)(puVar15 + -0x80) = SUB84(in_dr6,0);
    *(int *)(puVar15 + -0x84) = (int)((ulonglong)in_dr6 >> 0x20);
    *(undefined4 *)(puVar15 + -0x88) = uVar18;
    *(int *)(puVar15 + -0x8c) = (int)(in_dr4 >> 0x20);
    *(int *)(puVar15 + -0x90) = (int)in_dr2;
    *(int *)(puVar15 + -0x94) = (int)((ulonglong)in_dr2 >> 0x20);
    *(int *)(puVar15 + -0x98) = SUB84(in_dr0,0);
    *(undefined4 *)(puVar15 + -0x9c) = uVar19;
    dVar28 = (double)CONCAT44(uVar18,uVar3);
  }
  else {
    *(double *)(puVar15 + -100) = in_xd14;
    *(undefined8 *)(puVar15 + -0x6c) = in_dr14;
    *(undefined8 *)(puVar15 + -0x74) = in_xd12;
    *(double *)(puVar15 + -0x7c) = in_xd4;
    *(double *)(puVar15 + -0x84) = in_xd10;
    *(double *)(puVar15 + -0x8c) = in_dr10;
    *(undefined8 *)(puVar15 + -0x94) = in_xd8;
    *(double *)(puVar15 + -0x9c) = in_dr8;
    *(double *)(puVar15 + -0xa4) = in_xd6;
    *(double *)(puVar15 + -0xac) = in_dr6;
    *(double *)(puVar15 + -0xb4) = in_xd4;
    *(ulonglong *)(puVar15 + -0xbc) = in_dr4;
    *(double *)(puVar15 + -0xc4) = in_xd2;
    *(undefined8 *)(puVar15 + -0xcc) = in_dr2;
    *(undefined8 *)(puVar15 + -0xd4) = in_xd0;
    *(double *)(puVar15 + -0xdc) = in_dr0;
    dVar28 = in_xd4;
  }
  pdVar5 = (double *)(puVar15 + -0x1c);
  ar7_00 = &DAT_8c4ab208;
  ar6_00 = &DAT_8c4ab204;
  *(double **)(puVar15 + -0xc0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab208);
    in_dr0 = (double)CONCAT44(uVar19,_DAT_8c4ab1fc);
  }
  else {
    dVar22 = (double)CONCAT44(_DAT_8c4ab1fc,_DAT_8c4ab1f8);
    in_xd2 = (double)CONCAT44(uRam8c4ab20c,_DAT_8c4ab208);
  }
  pdVar2 = (double *)(puVar15 + -0x18);
  pdVar1 = (double *)(puVar15 + -0x14);
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab204);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab208,_DAT_8c4ab204);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(in_dr0,0) * SUB84(dVar22,0);
    dVar17 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar16);
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - fVar16,SUB84(dVar22,0));
  }
  else {
    dVar17 = in_dr0 * dVar22;
    dVar22 = dVar22 - dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar5 = (int)((ulonglong)dVar22 >> 0x20);
  }
  else {
    *pdVar5 = dVar22;
  }
  *(double **)(puVar15 + -0xb4) = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(_DAT_8c4ab1fc,_DAT_8c4ab200);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab208);
  }
  else {
    dVar22 = (double)CONCAT44(_DAT_8c4ab200,_DAT_8c4ab1fc);
    in_xd2 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab200);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab1f4);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab1f4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar17,0) * SUB84(dVar22,0);
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),fVar16);
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - fVar16,SUB84(dVar22,0));
  }
  else {
    dVar17 = dVar17 * dVar22;
    dVar22 = dVar22 - dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar2 = (int)((ulonglong)dVar22 >> 0x20);
  }
  else {
    *pdVar2 = dVar22;
  }
  *(double **)(puVar15 + -0xb8) = pdVar1;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab1f4);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab1f4);
    dVar22 = (double)CONCAT44(_DAT_8c4ab208,_DAT_8c4ab204);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 * dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c4ab1f8);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab200);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab200);
  }
  pdVar5 = (double *)(puVar15 + -0x5c);
  dVar26 = (double)(in_dr4 & 0xffffffff);
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar17,0) * SUB84(dVar22,0);
    dVar17 = (double)(ulonglong)(uint)fVar16;
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - fVar16,SUB84(dVar22,0));
  }
  else {
    dVar17 = dVar17 * dVar22;
    dVar22 = dVar22 - dVar17;
  }
  uVar3 = SUB84(dVar17,0);
  uVar19 = (undefined4)((ulonglong)dVar22 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar1 = uVar19;
  }
  else {
    *pdVar1 = dVar22;
  }
  *(double **)(puVar15 + -0xbc) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = *(undefined4 *)*(double **)(puVar15 + -0xc0);
    dVar22 = (double)CONCAT44(uVar19,uVar18);
    *(undefined4 *)pdVar5 = uVar18;
  }
  else {
    in_xd2 = **(double **)(puVar15 + -0xc0);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(puVar15 + -0x58);
  *(double **)(puVar15 + -0xc0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar19 = *(undefined4 *)*(double **)(puVar15 + -0xb4);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar19);
    *(undefined4 *)pdVar5 = uVar19;
  }
  else {
    in_xd2 = **(double **)(puVar15 + -0xb4);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(puVar15 + -0x54);
  *(double **)(puVar15 + -0xb4) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar19 = *(undefined4 *)*(double **)(puVar15 + -0xb8);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar19);
    *(undefined4 *)pdVar5 = uVar19;
    *(undefined4 *)(puVar15 + -0x50) = 0;
  }
  else {
    in_xd2 = **(double **)(puVar15 + -0xb8);
    *pdVar5 = in_xd2;
    *(double *)(puVar15 + -0x50) = dVar26;
  }
  pdVar5 = (double *)(puVar15 + -0x4c);
  *(double **)(puVar15 + -0xa0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),_DAT_8c4ab1f4);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab1f4);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -SUB84(dVar22,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(puVar15 + -0x48);
  *(double **)(puVar15 + -0xa4) = pdVar5;
  fVar16 = _DAT_8c4ab1f8;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1fc,_DAT_8c4ab1f8);
    fVar16 = -SUB84(dVar22,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -fVar16;
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(puVar15 + -0x44);
  *(double **)(puVar15 + -0xb8) = pdVar5;
  fVar20 = _DAT_8c4ab1fc;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab200,_DAT_8c4ab1fc);
    fVar20 = -fVar16;
  }
  fVar20 = -fVar20;
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = fVar20;
    *(undefined4 *)(puVar15 + -0x40) = 0;
  }
  else {
    *pdVar5 = in_xd2;
    *(double *)(puVar15 + -0x40) = dVar26;
  }
  pdVar5 = (double *)(puVar15 + -0x3c);
  *(double **)(puVar15 + -0xac) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = _DAT_8c4ab200;
    fVar20 = _DAT_8c4ab200;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab200);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(puVar15 + -0x38);
  *(double **)(puVar15 + -0xa8) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = _DAT_8c4ab204;
    fVar20 = _DAT_8c4ab204;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab208,_DAT_8c4ab204);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)(puVar15 + -0x34);
  *(double **)(puVar15 + -0xb0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = _DAT_8c4ab208;
    *(undefined4 *)(puVar15 + -0x30) = 0;
    *(undefined4 *)(puVar15 + -0x2c) = 0;
    fVar20 = _DAT_8c4ab208;
  }
  else {
    in_xd2 = (double)CONCAT44(uRam8c4ab20c,_DAT_8c4ab208);
    *pdVar5 = in_xd2;
    *(double *)(puVar15 + -0x30) = dVar26;
    *(double *)(puVar15 + -0x2c) = dVar26;
  }
  dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar20);
  ar5_00 = puVar15 + -0x9c;
  dVar17 = (double)CONCAT44(uVar29,0x3f800000);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar15 + -0x28) = 0;
    *(undefined4 *)(puVar15 + -0x24) = 0;
    *(undefined4 *)(puVar15 + -0x20) = 0x3f800000;
  }
  else {
    *(double *)(puVar15 + -0x28) = dVar26;
    *(double *)(puVar15 + -0x24) = dVar26;
    *(double *)(puVar15 + -0x20) = in_xd14;
  }
  FUN_8c255d6c(puVar15 + -0x5c,ar5_00,&DAT_8c4ab204,&DAT_8c4ab208,*(undefined4 *)(puVar15 + -0xc0));
  if (in_FPSCR_SZ == '\0') {
    dVar27 = (double)CONCAT44(_DAT_8c4ab19c,uVar3);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                              *(undefined4 *)*(double **)(puVar15 + -0xc0));
  }
  else {
    dVar27 = (double)CONCAT44(_DAT_8c4ab1a0,_DAT_8c4ab19c);
    in_xd2 = **(double **)(puVar15 + -0xc0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar22,0) * (float)((ulonglong)dVar27 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar27,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)(puVar15 + -0xbc),fVar16);
    fVar16 = SUB84(dVar27,0);
    fVar20 = _DAT_8c4ab198;
  }
  else {
    uVar23 = **(ulonglong **)(puVar15 + -0xbc);
    fVar16 = _DAT_8c4ab198;
    fVar20 = _DAT_8c4ab19c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar20 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(*(undefined4 *)*(double **)(puVar15 + -0xb4),(int)uVar23);
    fVar20 = _DAT_8c4ab1a0;
  }
  else {
    dVar22 = **(double **)(puVar15 + -0xb4);
    fVar16 = _DAT_8c4ab1a0;
    fVar20 = _DAT_8c4ab1a4;
  }
  pdVar5 = (double *)(puVar15 + -0x10);
  if (in_FPSCR_PR == '\0') {
    fVar25 = (float)((ulonglong)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(fVar25,fVar20 * fVar25 + SUB84(dVar22,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar5 = SUB84(dVar22,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar27 = (double)CONCAT44(_DAT_8c4ab19c,fVar16);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                              *(undefined4 *)*(double **)(puVar15 + -0xa4));
  }
  else {
    dVar27 = (double)CONCAT44(_DAT_8c4ab1a0,_DAT_8c4ab19c);
    in_xd2 = **(double **)(puVar15 + -0xa4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar22,0) * (float)((ulonglong)dVar27 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar27,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)(puVar15 + -0xa0),fVar16);
    fVar16 = SUB84(dVar27,0);
    fVar20 = _DAT_8c4ab198;
  }
  else {
    uVar23 = **(ulonglong **)(puVar15 + -0xa0);
    fVar16 = _DAT_8c4ab198;
    fVar20 = _DAT_8c4ab19c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar20 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(*(undefined4 *)*(double **)(puVar15 + -0xb8),(int)uVar23);
    fVar20 = _DAT_8c4ab1a0;
  }
  else {
    dVar22 = **(double **)(puVar15 + -0xb8);
    fVar16 = _DAT_8c4ab1a0;
    fVar20 = _DAT_8c4ab1a4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar25 = (float)((ulonglong)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(fVar25,fVar20 * fVar25 + SUB84(dVar22,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar15 + -0xc) = SUB84(dVar22,0);
  }
  else {
    *(double *)(puVar15 + -0xc) = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar27 = (double)CONCAT44(_DAT_8c4ab19c,fVar16);
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                              *(undefined4 *)*(double **)(puVar15 + -0xa8));
  }
  else {
    dVar27 = (double)CONCAT44(_DAT_8c4ab1a0,_DAT_8c4ab19c);
    in_xd2 = **(double **)(puVar15 + -0xa8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar22,0) * (float)((ulonglong)dVar27 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar22 * dVar27,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)(puVar15 + -0xac),fVar16);
    fVar16 = SUB84(dVar27,0);
    fVar20 = _DAT_8c4ab198;
  }
  else {
    uVar23 = **(ulonglong **)(puVar15 + -0xac);
    fVar16 = _DAT_8c4ab198;
    fVar20 = _DAT_8c4ab19c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)(uint)(fVar20 * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44((int)**(ulonglong **)(puVar15 + -0xb0),(int)uVar23);
    dVar22 = (double)CONCAT44(_DAT_8c4ab1a0,fVar16);
  }
  else {
    uVar23 = **(ulonglong **)(puVar15 + -0xb0);
    dVar22 = (double)CONCAT44(_DAT_8c4ab1a4,_DAT_8c4ab1a0);
  }
  if (in_FPSCR_PR == '\0') {
    uVar23 = (ulonglong)
             (uint)((float)((ulonglong)dVar22 >> 0x20) * (float)(uVar23 >> 0x20) + (float)uVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar15 + -8) = (int)uVar23;
  }
  else {
    *(double *)(puVar15 + -8) = in_xd2;
  }
  FUN_8c25ce48(pdVar5,ar5_00,ar6_00,ar7_00,*(undefined4 *)(puVar15 + -0xc0));
  *(undefined4 *)(puVar15 + -0xc0) = 0xff000000;
  uVar3 = FUN_8c221778(pdVar5,ar5_00,ar6_00,ar7_00);
  *(undefined4 *)(puVar15 + -0xbc) = uVar3;
  iVar13 = 0;
  uVar10 = ar6 & 0x3fff;
  iVar7 = 0;
  if (in_FPSCR_SZ == '\0') {
    dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar17,0));
  }
  if ((_DAT_8c4aa4f0 & 0x80000000) != 0) {
    dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),0xbf800000);
  }
  *(uint *)(puVar15 + -0xb8) = (ar6 >> 0xe & 3) << 1;
  do {
    iVar14 = (int)*ar4;
    iVar6 = ar4[1] * 0x20 + ar5;
    if (in_FPSCR_SZ == '\0') {
      in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),SUB84(dVar28,0));
    }
    if (iVar14 < 0) {
      in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),-SUB84(in_dr8,0));
      iVar14 = -iVar14;
    }
    iVar7 = iVar7 + iVar14;
    iVar14 = iVar14 + -2;
    iVar4 = 0;
    psVar11 = ar4 + 5;
    dVar27 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44((float)(int)ar4[2],SUB84(in_dr6,0));
    }
    fVar16 = (float)((ulonglong)dVar28 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      in_dr6 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar16,SUB84(dVar27,0));
    }
    else {
      in_dr6 = dVar27 * dVar28;
    }
    iVar8 = ar4[4] * 0x20 + ar5;
    dVar27 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),(float)(int)ar4[3]);
      dVar27 = in_xd4;
    }
    in_xd4 = dVar27;
    if (in_FPSCR_PR == '\0') {
      dVar26 = (double)(ulonglong)(uint)(SUB84(dVar26,0) * fVar16);
    }
    else {
      dVar26 = dVar26 * dVar28;
    }
    psVar12 = ar4 + 6;
    ar4 = ar4 + 7;
    dVar27 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44((float)(int)*psVar11,SUB84(in_dr10,0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar16,SUB84(dVar27,0));
    }
    else {
      dVar27 = dVar27 * dVar28;
    }
    dVar30 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),(float)(int)*psVar12);
      dVar30 = in_xd10;
    }
    dVar24 = in_xd14;
    if (in_FPSCR_PR == '\0') {
      in_dr10 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) * fVar16);
    }
    else {
      in_dr10 = dVar27 * dVar28;
    }
    do {
      iVar9 = *ar4 * 0x20 + ar5;
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(*(undefined4 *)(iVar8 + 8),SUB84(dVar26,0));
      }
      else {
        dVar27 = *(double *)(iVar8 + 8);
      }
      in_xd14 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),(float)(int)ar4[1]);
        in_xd14 = dVar24;
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) * fVar16);
      }
      else {
        dVar17 = dVar17 * dVar28;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(iVar8 + 4));
        dVar24 = (double)CONCAT44(*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar6 + 8));
        dVar26 = in_xd2;
        dVar22 = (double)CONCAT44((float)(int)ar4[2],SUB84(dVar22,0));
      }
      else {
        in_xd6 = *(double *)(iVar8 + 4);
        dVar24 = *(double *)(iVar9 + 4);
        dVar26 = *(double *)(iVar6 + 8);
        dVar22 = in_xd2;
      }
      in_xd2 = dVar26;
      fVar20 = (float)((ulonglong)dVar27 >> 0x20);
      fVar25 = SUB84(in_dr6,0);
      if (in_FPSCR_PR == '\0') {
        fVar21 = (SUB84(dVar24,0) - fVar20) * ((float)((ulonglong)dVar24 >> 0x20) - fVar25);
      }
      else {
        dVar26 = (dVar24 - dVar27) - in_dr6;
        fVar21 = SUB84(dVar26 * dVar26,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar26 = (double)CONCAT44(*(undefined4 *)(iVar6 + 4),fVar21);
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(iVar9 + 8));
      }
      else {
        dVar26 = *(double *)(iVar6 + 4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = SUB84(dVar22,0) - fVar20;
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar20);
        fVar21 = ((float)((ulonglong)dVar26 >> 0x20) - fVar25) * fVar20;
        dVar24 = (double)CONCAT44(fVar21,SUB84(dVar26,0) - fVar21);
      }
      else {
        dVar22 = dVar22 - dVar27;
        fVar20 = SUB84(dVar22,0);
        dVar24 = (dVar26 - in_dr6) * dVar22;
        dVar24 = dVar24 - dVar24;
      }
      dVar26 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar26 = (double)CONCAT44(SUB84(dVar24,0),SUB84(dVar27,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * SUB84(in_dr8,0),
                                  SUB84(dVar26,0));
      }
      else {
        dVar26 = dVar26 * in_dr8;
      }
      if (in_FPSCR_PR == '\0') {
        bVar31 = (float)((ulonglong)dVar26 >> 0x20) < 0.0;
        dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * fVar16,fVar20);
      }
      else {
        bVar31 = dVar26 < (double)((ulonglong)dVar24 & 0xffffffff00000000);
        dVar22 = dVar22 * dVar28;
      }
      uVar3 = SUB84(in_dr10,0);
      uVar19 = (undefined4)((ulonglong)in_dr10 >> 0x20);
      if (bVar31) {
        if (iVar4 == 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(iVar6 + 4));
            in_dr8 = (double)CONCAT44(*(undefined4 *)(iVar6 + 8),SUB84(in_dr8,0));
            dVar26 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0xc),SUB84(dVar26,0));
          }
          else {
            in_xd6 = *(double *)(iVar6 + 4);
            in_dr8 = *(double *)(iVar6 + 0xc);
            dVar26 = *(double *)(iVar6 + 0x14);
          }
          *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)(puVar15 + -0xbc);
          *(undefined4 *)(ar7 + 3) = *(undefined4 *)(puVar15 + -0xc0);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)ar7 + 0x14) = SUB84(dVar26,0);
            *(int *)(ar7 + 2) = (int)((ulonglong)in_dr6 >> 0x20);
            *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar26 >> 0x20);
            *(int *)(ar7 + 1) = (int)((ulonglong)in_dr8 >> 0x20);
            pdVar5 = (double *)((int)ar7 + 4);
            *(int *)pdVar5 = SUB84(in_dr6,0);
          }
          else {
            ar7[2] = in_xd4;
            ar7[1] = in_dr6;
            *ar7 = dVar26;
            ar7[-1] = in_dr8;
            pdVar5 = ar7 + -2;
            *pdVar5 = in_xd6;
          }
          *(undefined4 *)((int)pdVar5 + -4) = 0xe0000000;
          iVar4 = 1;
          ar7 = (double *)((int)pdVar5 + 0x1c);
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = (double)CONCAT44(*(undefined4 *)(iVar8 + 8),SUB84(in_dr6,0));
          dVar26 = (double)CONCAT44(*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 4));
        }
        else {
          in_xd4 = *(double *)(iVar8 + 4);
          in_dr6 = *(double *)(iVar8 + 0xc);
          dVar26 = *(double *)(iVar8 + 0x14);
        }
        *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)(puVar15 + -0xbc);
        *(undefined4 *)(ar7 + 3) = *(undefined4 *)(puVar15 + -0xc0);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)ar7 + 0x14) = uVar3;
          *(undefined4 *)(ar7 + 2) = uVar19;
          *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar26 >> 0x20);
          *(int *)(ar7 + 1) = (int)((ulonglong)in_dr6 >> 0x20);
          pdVar5 = (double *)((int)ar7 + 4);
          *(int *)pdVar5 = SUB84(dVar26,0);
        }
        else {
          ar7[2] = dVar30;
          ar7[1] = in_dr10;
          *ar7 = dVar26;
          ar7[-1] = in_dr6;
          pdVar5 = ar7 + -2;
          *pdVar5 = in_xd4;
        }
        *(undefined4 *)((int)pdVar5 + -4) = 0xe0000000;
        ar7 = (double *)((int)pdVar5 + 0x1c);
        iVar4 = iVar4 + 1;
        dVar27 = in_xd4;
      }
      else {
        dVar27 = in_xd4;
        if (iVar4 != 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr6 = (double)CONCAT44(*(undefined4 *)(iVar8 + 8),fVar25);
            dVar26 = (double)CONCAT44(*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 4));
          }
          else {
            dVar27 = *(double *)(iVar8 + 4);
            in_dr6 = *(double *)(iVar8 + 0xc);
            dVar26 = *(double *)(iVar8 + 0x14);
          }
          *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)(puVar15 + -0xbc);
          *(undefined4 *)(ar7 + 3) = *(undefined4 *)(puVar15 + -0xc0);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)ar7 + 0x14) = uVar3;
            *(undefined4 *)(ar7 + 2) = uVar19;
            *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar26 >> 0x20);
            *(int *)(ar7 + 1) = (int)((ulonglong)in_dr6 >> 0x20);
            pdVar5 = (double *)((int)ar7 + 4);
            *(int *)pdVar5 = SUB84(dVar26,0);
          }
          else {
            ar7[2] = dVar30;
            ar7[1] = in_dr10;
            *ar7 = dVar26;
            ar7[-1] = in_dr6;
            pdVar5 = ar7 + -2;
            *pdVar5 = dVar27;
          }
          *(undefined4 *)((int)pdVar5 + -4) = 0xf0000000;
          iVar13 = iVar13 + iVar4 + 1;
          iVar4 = 0;
          ar7 = (double *)((int)pdVar5 + 0x1c);
        }
      }
      ar4 = (short *)((int)ar4 + *(int *)(puVar15 + -0xb8) + 6);
      dVar24 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44(SUB84(dVar17,0),uVar3);
        in_dr10 = (double)CONCAT44(uVar19,SUB84(in_dr6,0));
      }
      in_dr6 = in_dr10;
      in_dr10 = dVar24;
      iVar14 = iVar14 + -1;
      in_xd4 = dVar30;
      if (in_FPSCR_SZ == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(in_dr10,0));
        in_xd4 = dVar27;
      }
      in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),-SUB84(in_dr8,0));
      uVar3 = (undefined4)((ulonglong)dVar22 >> 0x20);
      in_xd10 = dVar22;
      if (in_FPSCR_SZ == '\0') {
        in_dr10 = (double)CONCAT44((int)((ulonglong)in_dr10 >> 0x20),uVar3);
        in_xd10 = dVar30;
      }
      iVar6 = iVar8;
      iVar8 = iVar9;
      dVar30 = in_xd10;
      dVar24 = in_xd14;
    } while (iVar14 != 0);
    if (iVar4 != 0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44(*(undefined4 *)(iVar9 + 8),SUB84(in_dr6,0));
        dVar26 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0xc),*(undefined4 *)(iVar9 + 4));
      }
      else {
        in_xd4 = *(double *)(iVar9 + 4);
        in_dr6 = *(double *)(iVar9 + 0xc);
        dVar26 = *(double *)(iVar9 + 0x14);
      }
      *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)(puVar15 + -0xbc);
      *(undefined4 *)(ar7 + 3) = *(undefined4 *)(puVar15 + -0xc0);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar7 + 0x14) = uVar3;
        *(int *)(ar7 + 2) = SUB84(dVar17,0);
        *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar26 >> 0x20);
        *(int *)(ar7 + 1) = (int)((ulonglong)in_dr6 >> 0x20);
        pdVar5 = (double *)((int)ar7 + 4);
        *(int *)pdVar5 = SUB84(dVar26,0);
      }
      else {
        ar7[2] = dVar22;
        ar7[1] = in_xd14;
        *ar7 = dVar26;
        ar7[-1] = in_dr6;
        pdVar5 = ar7 + -2;
        *pdVar5 = in_xd4;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xf0000000;
      iVar13 = iVar13 + iVar4 + 1;
      ar7 = (double *)((int)pdVar5 + 0x1c);
    }
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar13;
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar7;
  return ar7;
}



/* FUN_8c22bb70 @ 8c22bb70 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c22be56) */
/* WARNING: Removing unreachable block (ram,0x8c22bde0) */
/* WARNING: Removing unreachable block (ram,0x8c22bd92) */
/* WARNING: Removing unreachable block (ram,0x8c22bc6a) */
/* WARNING: Removing unreachable block (ram,0x8c22bc52) */
/* WARNING: Removing unreachable block (ram,0x8c22bc5e) */
/* WARNING: Removing unreachable block (ram,0x8c22bd70) */
/* WARNING: Removing unreachable block (ram,0x8c22bdc2) */
/* WARNING: Removing unreachable block (ram,0x8c22be1a) */
/* WARNING: Removing unreachable block (ram,0x8c22bfbe) */
/* WARNING: Removing unreachable block (ram,0x8c22be28) */
/* WARNING: Removing unreachable block (ram,0x8c22bdf4) */
/* WARNING: Removing unreachable block (ram,0x8c22be6a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

double * FUN_8c22bb70(undefined4 ar4,undefined4 ar5,undefined4 ar6,double *ar7)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  double *pdVar5;
  short *psVar6;
  undefined1 *ar5_00;
  double *pdVar7;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  int iVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  short *psVar12;
  int iVar13;
  double *pdVar14;
  double *pdVar15;
  float fVar16;
  float fVar17;
  double in_dr0;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 in_dr2;
  double dVar23;
  double dVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  double dVar27;
  ulonglong in_dr4;
  undefined4 uVar28;
  double in_dr6;
  double dVar29;
  double in_dr8;
  undefined8 in_dr10;
  double in_dr12;
  double in_dr14;
  double in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  undefined8 in_xd8;
  undefined8 in_xd10;
  double in_xd12;
  undefined8 in_xd14;
  bool bVar30;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_3c [16];
  double dStack_2c;
  undefined8 uStack_24;
  double dVar18;
  
  uVar21 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = uVar21;
    pdVar15 = &dStack_2c;
    dStack_2c = (double)CONCAT44(SUB84(in_dr12,0),uVar19);
  }
  else {
    pdVar15 = (double *)auStack_3c;
    uStack_24 = in_xd14;
    dStack_2c = in_dr14;
  }
  *(undefined4 *)((int)pdVar15 + -4) = in_PR;
  *(undefined4 *)((int)pdVar15 + -0xdc) = ar4;
  *(undefined4 *)((int)pdVar15 + -0xd0) = ar5;
  *(undefined4 *)((int)pdVar15 + -200) = ar6;
  uVar28 = (undefined4)(in_dr4 >> 0x20);
  uVar20 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)pdVar15 + -0xc4) = uVar28;
    *(int *)((int)pdVar15 + -0xd8) = (int)in_dr4;
    *(int *)((int)pdVar15 + -0x60) = SUB84(in_dr14,0);
    *(undefined4 *)((int)pdVar15 + -100) = uVar21;
    *(int *)((int)pdVar15 + -0x68) = SUB84(in_dr12,0);
    *(undefined4 *)((int)pdVar15 + -0x6c) = uVar19;
    *(int *)((int)pdVar15 + -0x70) = (int)in_dr10;
    *(int *)((int)pdVar15 + -0x74) = (int)((ulonglong)in_dr10 >> 0x20);
    *(int *)((int)pdVar15 + -0x78) = SUB84(in_dr8,0);
    *(int *)((int)pdVar15 + -0x7c) = (int)((ulonglong)in_dr8 >> 0x20);
    *(int *)((int)pdVar15 + -0x80) = SUB84(in_dr6,0);
    *(int *)((int)pdVar15 + -0x84) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)((int)pdVar15 + -0x88) = (int)in_dr4;
    *(undefined4 *)((int)pdVar15 + -0x8c) = uVar28;
    *(int *)((int)pdVar15 + -0x90) = (int)in_dr2;
    *(int *)((int)pdVar15 + -0x94) = (int)((ulonglong)in_dr2 >> 0x20);
    *(int *)((int)pdVar15 + -0x98) = SUB84(in_dr0,0);
    *(undefined4 *)((int)pdVar15 + -0x9c) = uVar20;
  }
  else {
    *(ulonglong *)((int)pdVar15 + -0xc4) = in_dr4;
    *(double *)((int)pdVar15 + -0xd8) = in_xd4;
    *(undefined8 *)((int)pdVar15 + -100) = in_xd14;
    *(double *)((int)pdVar15 + -0x6c) = in_dr14;
    *(double *)((int)pdVar15 + -0x74) = in_xd12;
    *(double *)((int)pdVar15 + -0x7c) = in_dr12;
    *(undefined8 *)((int)pdVar15 + -0x84) = in_xd10;
    *(undefined8 *)((int)pdVar15 + -0x8c) = in_dr10;
    *(undefined8 *)((int)pdVar15 + -0x94) = in_xd8;
    *(double *)((int)pdVar15 + -0x9c) = in_dr8;
    *(double *)((int)pdVar15 + -0xa4) = in_xd6;
    *(double *)((int)pdVar15 + -0xac) = in_dr6;
    *(double *)((int)pdVar15 + -0xb4) = in_xd4;
    *(ulonglong *)((int)pdVar15 + -0xbc) = in_dr4;
    *(double *)((int)pdVar15 + -0xc4) = in_xd2;
    *(undefined8 *)((int)pdVar15 + -0xcc) = in_dr2;
    *(double *)((int)pdVar15 + -0xd4) = in_xd0;
    *(double *)((int)pdVar15 + -0xdc) = in_dr0;
  }
  ar6_00 = &DAT_8c4ab208;
  ar7_00 = &DAT_8c4ab204;
  pdVar11 = (double *)((int)pdVar15 + -0x1c);
  pdVar5 = (double *)((int)pdVar15 + -0x18);
  *(double **)((int)pdVar15 + -0xbc) = pdVar11;
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab208);
    in_dr0 = (double)CONCAT44(uVar20,_DAT_8c4ab1fc);
  }
  else {
    in_xd2 = (double)CONCAT44(uRam8c4ab20c,_DAT_8c4ab208);
    dVar23 = (double)CONCAT44(_DAT_8c4ab1fc,_DAT_8c4ab1f8);
    in_xd0 = (double)CONCAT44(_DAT_8c4ab200,_DAT_8c4ab1fc);
  }
  pdVar14 = (double *)((int)pdVar15 + -0x14);
  if (in_FPSCR_PR == '\0') {
    dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) * SUB84(dVar23,0),SUB84(dVar23,0));
  }
  else {
    dVar23 = dVar23 * dVar23;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),_DAT_8c4ab204);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab208,_DAT_8c4ab204);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(in_dr0,0) * SUB84(dVar23,0);
    dVar18 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar16);
    dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) - fVar16,SUB84(dVar23,0));
  }
  else {
    dVar18 = in_dr0 * dVar23;
    dVar23 = dVar23 - dVar18;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar11 = (int)((ulonglong)dVar23 >> 0x20);
  }
  else {
    *pdVar11 = dVar23;
  }
  *(double **)((int)pdVar15 + -0xc0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44(_DAT_8c4ab1fc,_DAT_8c4ab200);
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),_DAT_8c4ab208);
  }
  else {
    dVar23 = (double)CONCAT44(_DAT_8c4ab200,_DAT_8c4ab1fc);
    in_xd2 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab200);
    in_xd0 = (double)CONCAT44(uRam8c4ab20c,_DAT_8c4ab208);
  }
  if (in_FPSCR_PR == '\0') {
    dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) * SUB84(dVar23,0),SUB84(dVar23,0));
  }
  else {
    dVar23 = dVar23 * dVar23;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),_DAT_8c4ab1f4);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab1f4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar18,0) * SUB84(dVar23,0);
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),fVar16);
    dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) - fVar16,SUB84(dVar23,0));
  }
  else {
    dVar18 = dVar18 * dVar23;
    dVar23 = dVar23 - dVar18;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar5 = (int)((ulonglong)dVar23 >> 0x20);
  }
  else {
    *pdVar5 = dVar23;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x5c);
  dVar23 = (double)(in_dr4 & 0xffffffff);
  *(double **)((int)pdVar15 + -0xb8) = pdVar14;
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab1f4);
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),_DAT_8c4ab1f8);
  }
  else {
    dVar24 = (double)CONCAT44(_DAT_8c4ab208,_DAT_8c4ab204);
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab1f4);
    in_xd0 = (double)CONCAT44(_DAT_8c4ab1fc,_DAT_8c4ab1f8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * SUB84(dVar24,0),SUB84(dVar24,0));
  }
  else {
    dVar24 = dVar24 * dVar24;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),_DAT_8c4ab200);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab200);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar18,0) * SUB84(dVar24,0);
    dVar18 = (double)(ulonglong)(uint)fVar16;
    dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) - fVar16,SUB84(dVar24,0));
  }
  else {
    dVar18 = dVar18 * dVar24;
    dVar24 = dVar24 - dVar18;
  }
  uVar19 = SUB84(dVar18,0);
  uVar21 = (undefined4)((ulonglong)dVar24 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar14 = uVar21;
  }
  else {
    *pdVar14 = dVar24;
  }
  *(double **)((int)pdVar15 + -0xcc) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar20 = *(undefined4 *)*(double **)((int)pdVar15 + -0xbc);
    dVar24 = (double)CONCAT44(uVar21,uVar20);
    *(undefined4 *)pdVar5 = uVar20;
  }
  else {
    in_xd2 = **(double **)((int)pdVar15 + -0xbc);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x58);
  *(double **)((int)pdVar15 + -0xbc) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar21 = *(undefined4 *)*(double **)((int)pdVar15 + -0xc0);
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),uVar21);
    *(undefined4 *)pdVar5 = uVar21;
  }
  else {
    in_xd2 = **(double **)((int)pdVar15 + -0xc0);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x54);
  *(double **)((int)pdVar15 + -0xc0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    uVar21 = *(undefined4 *)*(double **)((int)pdVar15 + -0xb8);
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),uVar21);
    *(undefined4 *)pdVar5 = uVar21;
    *(undefined4 *)((int)pdVar15 + -0x50) = 0;
  }
  else {
    in_xd2 = **(double **)((int)pdVar15 + -0xb8);
    *pdVar5 = in_xd2;
    *(double *)((int)pdVar15 + -0x50) = dVar23;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x4c);
  *(double **)((int)pdVar15 + -0xb8) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),_DAT_8c4ab1f4);
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1f8,_DAT_8c4ab1f4);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -SUB84(dVar24,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x48);
  *(double **)((int)pdVar15 + -0xa4) = pdVar5;
  fVar16 = _DAT_8c4ab1f8;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab1fc,_DAT_8c4ab1f8);
    fVar16 = -SUB84(dVar24,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -fVar16;
  }
  else {
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x44);
  *(double **)((int)pdVar15 + -0xa8) = pdVar5;
  fVar22 = _DAT_8c4ab1fc;
  if (in_FPSCR_SZ != '\0') {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab200,_DAT_8c4ab1fc);
    fVar22 = -fVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar5 = -fVar22;
    *(undefined4 *)((int)pdVar15 + -0x40) = 0;
  }
  else {
    *pdVar5 = in_xd2;
    *(double *)((int)pdVar15 + -0x40) = dVar23;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x3c);
  *(double **)((int)pdVar15 + -0xa0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar5 = _DAT_8c4ab200;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab204,_DAT_8c4ab200);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x38);
  *(double **)((int)pdVar15 + -0xac) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar5 = _DAT_8c4ab204;
  }
  else {
    in_xd2 = (double)CONCAT44(_DAT_8c4ab208,_DAT_8c4ab204);
    *pdVar5 = in_xd2;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x34);
  *(double **)((int)pdVar15 + -0xb0) = pdVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar5 = _DAT_8c4ab208;
    *(undefined4 *)((int)pdVar15 + -0x30) = 0;
    *(undefined4 *)((int)pdVar15 + -0x2c) = 0;
  }
  else {
    in_xd2 = (double)CONCAT44(uRam8c4ab20c,_DAT_8c4ab208);
    *pdVar5 = in_xd2;
    *(double *)((int)pdVar15 + -0x30) = dVar23;
    *(double *)((int)pdVar15 + -0x2c) = dVar23;
  }
  ar5_00 = (undefined1 *)((int)pdVar15 + -0x9c);
  dVar18 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),0x3f800000);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)pdVar15 + -0x28) = 0;
    *(undefined4 *)((int)pdVar15 + -0x24) = 0;
    *(undefined4 *)((int)pdVar15 + -0x20) = 0x3f800000;
  }
  else {
    *(double *)((int)pdVar15 + -0x28) = dVar23;
    *(double *)((int)pdVar15 + -0x24) = dVar23;
    *(double *)((int)pdVar15 + -0x20) = in_xd2;
  }
  FUN_8c255d6c((undefined1 *)((int)pdVar15 + -0x5c),ar5_00,&DAT_8c4ab208,&DAT_8c4ab204,
               *(undefined4 *)((int)pdVar15 + -0xdc));
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(_DAT_8c4ab19c,uVar19);
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                              *(undefined4 *)*(double **)((int)pdVar15 + -0xbc));
  }
  else {
    dVar24 = (double)CONCAT44(_DAT_8c4ab1a0,_DAT_8c4ab19c);
    in_xd2 = **(double **)((int)pdVar15 + -0xbc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar18,0) * (float)((ulonglong)dVar24 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar18 * dVar24,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar25 = CONCAT44((int)**(ulonglong **)((int)pdVar15 + -0xcc),fVar16);
    fVar16 = SUB84(dVar24,0);
    fVar22 = _DAT_8c4ab198;
  }
  else {
    uVar25 = **(ulonglong **)((int)pdVar15 + -0xcc);
    fVar16 = _DAT_8c4ab198;
    fVar22 = _DAT_8c4ab19c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar25 = (ulonglong)(uint)(fVar22 * (float)(uVar25 >> 0x20) + (float)uVar25);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(*(undefined4 *)*(double **)((int)pdVar15 + -0xc0),(int)uVar25);
    fVar22 = _DAT_8c4ab1a0;
  }
  else {
    dVar18 = **(double **)((int)pdVar15 + -0xc0);
    fVar16 = _DAT_8c4ab1a0;
    fVar22 = _DAT_8c4ab1a4;
  }
  pdVar5 = (double *)((int)pdVar15 + -0x10);
  if (in_FPSCR_PR == '\0') {
    fVar17 = (float)((ulonglong)dVar18 >> 0x20);
    dVar18 = (double)CONCAT44(fVar17,fVar22 * fVar17 + SUB84(dVar18,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar5 = SUB84(dVar18,0);
  }
  else {
    *pdVar5 = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(_DAT_8c4ab19c,fVar16);
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                              *(undefined4 *)*(double **)((int)pdVar15 + -0xa4));
  }
  else {
    dVar24 = (double)CONCAT44(_DAT_8c4ab1a0,_DAT_8c4ab19c);
    in_xd2 = **(double **)((int)pdVar15 + -0xa4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar18,0) * (float)((ulonglong)dVar24 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar18 * dVar24,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar25 = CONCAT44((int)**(ulonglong **)((int)pdVar15 + -0xb8),fVar16);
    fVar16 = SUB84(dVar24,0);
    fVar22 = _DAT_8c4ab198;
  }
  else {
    uVar25 = **(ulonglong **)((int)pdVar15 + -0xb8);
    fVar16 = _DAT_8c4ab198;
    fVar22 = _DAT_8c4ab19c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar25 = (ulonglong)(uint)(fVar22 * (float)(uVar25 >> 0x20) + (float)uVar25);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(*(undefined4 *)*(double **)((int)pdVar15 + -0xa8),(int)uVar25);
    fVar22 = _DAT_8c4ab1a0;
  }
  else {
    dVar18 = **(double **)((int)pdVar15 + -0xa8);
    fVar16 = _DAT_8c4ab1a0;
    fVar22 = _DAT_8c4ab1a4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar17 = (float)((ulonglong)dVar18 >> 0x20);
    dVar18 = (double)CONCAT44(fVar17,fVar22 * fVar17 + SUB84(dVar18,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar15 + -0xc) = SUB84(dVar18,0);
  }
  else {
    *(double *)((int)pdVar15 + -0xc) = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(_DAT_8c4ab19c,fVar16);
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                              *(undefined4 *)*(double **)((int)pdVar15 + -0xac));
  }
  else {
    dVar24 = (double)CONCAT44(_DAT_8c4ab1a0,_DAT_8c4ab19c);
    in_xd2 = **(double **)((int)pdVar15 + -0xac);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = SUB84(dVar18,0) * (float)((ulonglong)dVar24 >> 0x20);
  }
  else {
    fVar16 = SUB84(dVar18 * dVar24,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar25 = CONCAT44((int)**(ulonglong **)((int)pdVar15 + -0xa0),fVar16);
    fVar16 = _DAT_8c4ab198;
  }
  else {
    uVar25 = **(ulonglong **)((int)pdVar15 + -0xa0);
    fVar16 = _DAT_8c4ab19c;
  }
  if (in_FPSCR_PR == '\0') {
    uVar25 = (ulonglong)(uint)(fVar16 * (float)(uVar25 >> 0x20) + (float)uVar25);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)((ulonglong)(uint)_DAT_8c4ab1a0 << 0x20);
    uVar26 = CONCAT44(*(undefined4 *)*(undefined8 **)((int)pdVar15 + -0xb0),(int)uVar25);
  }
  else {
    dVar18 = (double)CONCAT44(_DAT_8c4ab1a4,_DAT_8c4ab1a0);
    uVar26 = **(undefined8 **)((int)pdVar15 + -0xb0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = (float)((ulonglong)uVar26 >> 0x20);
    uVar26 = CONCAT44(fVar16,(float)((ulonglong)dVar18 >> 0x20) * fVar16 + (float)uVar26);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar15 + -8) = (int)uVar26;
  }
  else {
    *(double *)((int)pdVar15 + -8) = in_xd2;
  }
  FUN_8c25ce48(pdVar5,ar5_00,ar6_00,ar7_00,*(undefined4 *)((int)pdVar15 + -0xdc));
  _DAT_8c4aa38c = 0xff000000;
  _DAT_8c4aa388 = FUN_8c221778(pdVar5,ar5_00,ar6_00,ar7_00);
  uVar4 = *(uint *)((int)pdVar15 + -200);
  *(uint *)((int)pdVar15 + -200) = *(uint *)((int)pdVar15 + -200) & 0x3fff;
  iVar9 = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)pdVar15 + -0xb4) = 0x3f800000;
  }
  else {
    *(double *)((int)pdVar15 + -0xb4) = in_xd2;
  }
  iVar10 = 0;
  if ((_DAT_8c4aa4f0 & 0x80000000) != 0) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)pdVar15 + -0xb4) = 0xbf800000;
    }
    else {
      *(double *)((int)pdVar15 + -0xb4) = in_xd2;
    }
  }
  *(uint *)((int)pdVar15 + -0xcc) = (uVar4 >> 0xe & 3) << 1;
  do {
    fVar16 = SUB84(in_dr14,0);
    psVar12 = *(short **)((int)pdVar15 + -0xdc);
    *(short **)((int)pdVar15 + -0xdc) = psVar12 + 1;
    psVar6 = *(short **)((int)pdVar15 + -0xdc);
    iVar13 = (int)*psVar12;
    *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
    pdVar5 = (double *)(*psVar6 * 0x20 + *(int *)((int)pdVar15 + -0xd0));
    if (in_FPSCR_SZ == '\0') {
      fVar16 = *(float *)((int)pdVar15 + -0xb4);
    }
    if (iVar13 < 0) {
      fVar16 = -fVar16;
      iVar13 = -iVar13;
    }
    psVar6 = *(short **)((int)pdVar15 + -0xdc);
    iVar10 = iVar10 + iVar13;
    *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
    sVar1 = *psVar6;
    iVar13 = iVar13 + -2;
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + -0xd8),SUB84(in_dr6,0));
    }
    else {
      in_dr6 = *(double *)((int)pdVar15 + -0xd8);
    }
    iVar8 = 0;
    psVar6 = *(short **)((int)pdVar15 + -0xdc);
    *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
    sVar2 = *psVar6;
    psVar6 = *(short **)((int)pdVar15 + -0xdc);
    dVar24 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44((float)(int)sVar1,SUB84(dVar23,0));
    }
    *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
    fVar22 = (float)((ulonglong)in_dr6 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * fVar22,SUB84(dVar24,0));
    }
    else {
      dVar24 = dVar24 * in_dr6;
    }
    dVar23 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),(float)(int)sVar2);
      dVar23 = in_xd4;
    }
    in_xd4 = dVar23;
    if (in_FPSCR_PR == '\0') {
      dVar23 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0) * fVar22);
    }
    else {
      dVar23 = dVar24 * in_dr6;
    }
    pdVar11 = (double *)(*psVar6 * 0x20 + *(int *)((int)pdVar15 + -0xd0));
    psVar6 = *(short **)((int)pdVar15 + -0xdc);
    *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
    sVar1 = *psVar6;
    psVar6 = *(short **)((int)pdVar15 + -0xdc);
    *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
    dVar24 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(float)(int)sVar1);
      dVar24 = in_xd12;
    }
    if (in_FPSCR_PR == '\0') {
      in_dr12 = (double)(ulonglong)(uint)(SUB84(in_dr12,0) * fVar22);
    }
    else {
      in_dr12 = in_dr12 * in_dr6;
    }
    dVar27 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44((float)(int)*psVar6,fVar16);
    }
    dVar29 = in_xd0;
    if (in_FPSCR_PR == '\0') {
      in_dr14 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar22,SUB84(dVar27,0));
    }
    else {
      in_dr14 = dVar27 * in_dr6;
    }
    do {
      psVar6 = *(short **)((int)pdVar15 + -0xdc);
      *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
      pdVar14 = (double *)(*psVar6 * 0x20 + *(int *)((int)pdVar15 + -0xd0));
      psVar6 = *(short **)((int)pdVar15 + -0xdc);
      *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
      if (in_FPSCR_SZ == '\0') {
        fVar16 = *(float *)((int)pdVar15 + -0xd8);
      }
      else {
        fVar16 = (float)((ulonglong)*(undefined8 *)((int)pdVar15 + -0xd8) >> 0x20);
      }
      fVar22 = (float)(int)*psVar6;
      dVar27 = (double)CONCAT44(fVar16,fVar22);
      if (in_FPSCR_PR == '\0') {
        dVar27 = (double)CONCAT44(fVar16,fVar22 * fVar16);
      }
      else {
        dVar27 = dVar27 * dVar27;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar15 + -0xd4) = SUB84(dVar27,0);
      }
      else {
        *(double *)((int)pdVar15 + -0xd4) = in_xd2;
      }
      psVar6 = *(short **)((int)pdVar15 + -0xdc);
      fVar22 = (float)((ulonglong)dVar27 >> 0x20);
      *(short **)((int)pdVar15 + -0xdc) = psVar6 + 1;
      uVar19 = (undefined4)((ulonglong)dVar18 >> 0x20);
      fVar16 = (float)(int)*psVar6;
      dVar18 = (double)CONCAT44(uVar19,fVar16);
      dVar27 = dVar29;
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(fVar16,SUB84(in_dr12,0));
      }
      if (in_FPSCR_PR == '\0') {
        in_dr12 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar22,SUB84(dVar27,0));
      }
      else {
        in_dr12 = dVar27 * (double)CONCAT44(fVar22,0x3f800000);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(*(undefined4 *)pdVar5,0x3f800000);
      }
      else {
        dVar27 = *pdVar5;
      }
      bVar3 = false;
      if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar27 >> 0x20) <= SUB84(dVar27,0)) {
LAB_8c22be86:
        bVar3 = true;
        in_dr6 = (double)CONCAT44(0x3f800000,SUB84(in_dr6,0));
        in_xd0 = dVar29;
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar27 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(dVar27,0));
        }
        else {
          dVar27 = *pdVar11;
        }
        if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar27 >> 0x20) <= SUB84(dVar27,0))
        goto LAB_8c22be86;
        if (in_FPSCR_SZ == '\0') {
          fVar16 = *(float *)pdVar14;
        }
        else {
          fVar16 = (float)((ulonglong)*pdVar14 >> 0x20);
        }
        dVar27 = (double)CONCAT44(fVar16,0x3f800000);
        if (in_FPSCR_PR != '\0' || fVar16 <= 1.0) goto LAB_8c22be86;
        if (in_FPSCR_SZ == '\0') {
          fVar16 = *(float *)((int)pdVar11 + 4);
          dVar27 = (double)CONCAT44(fVar16,*(undefined4 *)((int)pdVar5 + 4));
          in_dr8 = (double)CONCAT44(fVar16,SUB84(in_dr8,0));
        }
        else {
          dVar27 = *(double *)((int)pdVar11 + 4);
          in_xd2 = *(double *)((int)pdVar5 + 4);
          fVar16 = (float)((ulonglong)dVar27 >> 0x20);
          in_dr8 = dVar27;
        }
        if (in_FPSCR_PR == '\0') {
          dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) - SUB84(dVar27,0),
                                    SUB84(dVar27,0));
        }
        else {
          dVar27 = dVar27 - dVar27;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),*(undefined4 *)(pdVar14 + 1));
          in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(pdVar11 + 1));
        }
        else {
          in_xd2 = pdVar14[1];
          in_xd6 = pdVar11[1];
        }
        fVar22 = SUB84(in_dr6,0);
        if (in_FPSCR_PR == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) - fVar22);
        }
        else {
          dVar27 = dVar27 - in_dr6;
        }
        in_xd0 = in_xd6;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44(uVar19,fVar22);
          in_xd0 = dVar29;
        }
        if (in_FPSCR_PR == '\0') {
          dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * SUB84(dVar27,0),
                                    SUB84(dVar27,0));
        }
        else {
          dVar27 = dVar27 * dVar27;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),*(undefined4 *)(pdVar5 + 1));
        }
        else {
          in_xd2 = pdVar5[1];
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                                    SUB84(dVar18,0) - SUB84(dVar27,0));
        }
        else {
          dVar18 = dVar18 - dVar27;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),
                                    *(undefined4 *)((int)pdVar14 + 4));
        }
        else {
          in_xd2 = *(double *)((int)pdVar14 + 4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar16 = SUB84(dVar27,0) - fVar16;
          fVar17 = SUB84(dVar18,0) * fVar16;
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),fVar17);
          dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) - fVar17,fVar16);
        }
        else {
          dVar18 = dVar18 * (dVar27 - in_dr8);
          dVar27 = (dVar27 - in_dr8) - dVar18;
        }
        dVar29 = dVar27;
        if (in_FPSCR_SZ == '\0') {
          dVar29 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),fVar22);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr6 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * SUB84(in_dr14,0),
                                    SUB84(dVar29,0));
        }
        else {
          in_dr6 = dVar29 * in_dr14;
        }
      }
      if (in_FPSCR_PR == '\0') {
        bVar30 = (float)((ulonglong)in_dr6 >> 0x20) < 0.0;
      }
      else {
        bVar30 = in_dr6 < (double)((ulonglong)dVar27 & 0xffffffff00000000);
      }
      uVar21 = (undefined4)((ulonglong)in_dr14 >> 0x20);
      uVar19 = SUB84(in_dr12,0);
      if (bVar30) {
        if (iVar8 == 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr8 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),SUB84(in_dr8,0));
            pdVar7 = pdVar5 + 1;
          }
          else {
            in_dr8 = *(double *)((int)pdVar5 + 4);
            in_xd6 = *(double *)((int)pdVar5 + 0xc);
            pdVar7 = (double *)((int)pdVar5 + 0x14);
          }
          dVar27 = *pdVar7;
          *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa388;
          *(undefined4 *)(ar7 + 3) = _DAT_8c4aa38c;
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)ar7 + 0x14) = SUB84(dVar23,0);
            *(int *)(ar7 + 2) = (int)((ulonglong)dVar23 >> 0x20);
            *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar27 >> 0x20);
            *(int *)(ar7 + 1) = SUB84(dVar27,0);
            pdVar7 = (double *)((int)ar7 + 4);
            *(int *)pdVar7 = (int)((ulonglong)in_dr8 >> 0x20);
          }
          else {
            ar7[2] = in_xd4;
            ar7[1] = dVar23;
            *ar7 = dVar27;
            ar7[-1] = in_xd6;
            pdVar7 = ar7 + -2;
            *pdVar7 = in_dr8;
          }
          *(undefined4 *)((int)pdVar7 + -4) = 0xe0000000;
          iVar8 = 1;
          ar7 = (double *)((int)pdVar7 + 0x1c);
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr8 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(in_dr8,0));
          pdVar7 = pdVar11 + 1;
        }
        else {
          in_dr8 = *(double *)((int)pdVar11 + 4);
          in_xd6 = *(double *)((int)pdVar11 + 0xc);
          pdVar7 = (double *)((int)pdVar11 + 0x14);
        }
        in_dr6 = *pdVar7;
        *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa388;
        *(undefined4 *)(ar7 + 3) = _DAT_8c4aa38c;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)ar7 + 0x14) = uVar21;
          *(undefined4 *)(ar7 + 2) = uVar19;
          *(int *)((int)ar7 + 0xc) = (int)((ulonglong)in_dr6 >> 0x20);
          *(int *)(ar7 + 1) = SUB84(in_dr6,0);
          pdVar7 = (double *)((int)ar7 + 4);
          *(int *)pdVar7 = (int)((ulonglong)in_dr8 >> 0x20);
        }
        else {
          ar7[2] = in_dr14;
          ar7[1] = dVar24;
          *ar7 = in_dr6;
          ar7[-1] = in_xd6;
          pdVar7 = ar7 + -2;
          *pdVar7 = in_dr8;
        }
        *(undefined4 *)((int)pdVar7 + -4) = 0xe0000000;
        ar7 = (double *)((int)pdVar7 + 0x1c);
        iVar8 = iVar8 + 1;
      }
      else if (iVar8 != 0) {
        if (in_FPSCR_SZ == '\0') {
          in_dr8 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(in_dr8,0));
          pdVar7 = pdVar11 + 1;
        }
        else {
          in_dr8 = *(double *)((int)pdVar11 + 4);
          in_xd6 = *(double *)((int)pdVar11 + 0xc);
          pdVar7 = (double *)((int)pdVar11 + 0x14);
        }
        in_dr6 = *pdVar7;
        *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa388;
        *(undefined4 *)(ar7 + 3) = _DAT_8c4aa38c;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)ar7 + 0x14) = uVar21;
          *(undefined4 *)(ar7 + 2) = uVar19;
          *(int *)((int)ar7 + 0xc) = (int)((ulonglong)in_dr6 >> 0x20);
          *(int *)(ar7 + 1) = SUB84(in_dr6,0);
          pdVar7 = (double *)((int)ar7 + 4);
          *(int *)pdVar7 = (int)((ulonglong)in_dr8 >> 0x20);
        }
        else {
          ar7[2] = in_dr14;
          ar7[1] = dVar24;
          *ar7 = in_dr6;
          ar7[-1] = in_xd6;
          pdVar7 = ar7 + -2;
          *pdVar7 = in_dr8;
        }
        *(undefined4 *)((int)pdVar7 + -4) = 0xf0000000;
        iVar9 = iVar9 + iVar8 + 1;
        iVar8 = 0;
        ar7 = (double *)((int)pdVar7 + 0x1c);
      }
      if (bVar3) {
        if (in_FPSCR_SZ == '\0') {
          fVar16 = *(float *)pdVar5;
        }
        else {
          fVar16 = (float)((ulonglong)*pdVar5 >> 0x20);
        }
        if (in_FPSCR_PR != '\0' || fVar16 <= 1.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar27 = (double)CONCAT44(*(undefined4 *)pdVar11,0x3f800000);
          }
          else {
            dVar27 = *pdVar11;
          }
          if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar27 >> 0x20) <= SUB84(dVar27,0)) {
            if (in_FPSCR_SZ == '\0') {
              fVar16 = *(float *)pdVar14;
            }
            else {
              fVar16 = (float)((ulonglong)*pdVar14 >> 0x20);
            }
            if (in_FPSCR_PR != '\0' || fVar16 <= 1.0) goto LAB_8c22bfa8;
          }
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr8 = (double)((ulonglong)in_dr12 >> 0x20);
          in_dr6 = (double)CONCAT44(uVar19,uVar21);
        }
        else {
          in_dr8 = *(double *)((int)pdVar15 + -0xd4);
          in_dr6 = dVar24;
          in_xd6 = in_dr14;
        }
        ar7 = (double *)FUN_8c22c058(pdVar5,pdVar11,pdVar14,ar7);
      }
LAB_8c22bfa8:
      *(int *)((int)pdVar15 + -0xdc) =
           *(int *)((int)pdVar15 + -0xdc) + *(int *)((int)pdVar15 + -0xcc);
      if (in_FPSCR_SZ == '\0') {
        uVar19 = SUB84(in_dr12,0);
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),
                                   *(undefined4 *)((int)pdVar15 + -0xd4));
        in_xd12 = dVar24;
        dVar24 = (double)CONCAT44(uVar19,SUB84(dVar23,0));
      }
      else {
        in_xd12 = *(double *)((int)pdVar15 + -0xd4);
      }
      iVar13 = iVar13 + -1;
      fVar16 = SUB84(in_dr14,0);
      uVar21 = (undefined4)((ulonglong)in_dr14 >> 0x20);
      uVar19 = (undefined4)((ulonglong)in_dr12 >> 0x20);
      in_dr14 = in_dr12;
      dVar23 = dVar24;
      dVar27 = (double)CONCAT44(uVar21,-fVar16);
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(uVar19,-fVar16);
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),uVar21);
        dVar27 = in_xd4;
      }
      in_xd4 = dVar27;
      pdVar5 = pdVar11;
      pdVar11 = pdVar14;
      dVar29 = in_xd0;
      dVar24 = in_xd12;
    } while (iVar13 != 0);
    if (iVar8 != 0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar14 + 1),SUB84(in_dr6,0));
        dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar14 + 0xc),
                                  *(undefined4 *)((int)pdVar14 + 4));
      }
      else {
        in_xd4 = *(double *)((int)pdVar14 + 4);
        in_dr6 = *(double *)((int)pdVar14 + 0xc);
        dVar23 = *(double *)((int)pdVar14 + 0x14);
      }
      *(undefined4 *)((int)ar7 + 0x1c) = _DAT_8c4aa388;
      *(undefined4 *)(ar7 + 3) = _DAT_8c4aa38c;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar7 + 0x14) = uVar19;
        *(undefined4 *)(ar7 + 2) = *(undefined4 *)((int)pdVar15 + -0xd4);
        *(int *)((int)ar7 + 0xc) = (int)((ulonglong)dVar23 >> 0x20);
        *(int *)(ar7 + 1) = (int)((ulonglong)in_dr6 >> 0x20);
        pdVar5 = (double *)((int)ar7 + 4);
        *(int *)pdVar5 = SUB84(dVar23,0);
      }
      else {
        ar7[2] = in_dr12;
        in_xd2 = *(double *)((int)pdVar15 + -0xd4);
        ar7[1] = in_xd2;
        *ar7 = dVar23;
        ar7[-1] = in_dr6;
        pdVar5 = ar7 + -2;
        *pdVar5 = in_xd4;
      }
      *(undefined4 *)((int)pdVar5 + -4) = 0xf0000000;
      iVar9 = iVar9 + iVar8 + 1;
      ar7 = (double *)((int)pdVar5 + 0x1c);
    }
    iVar13 = *(int *)((int)pdVar15 + -200);
    *(int *)((int)pdVar15 + -200) = iVar13 + -1;
    if (iVar13 + -1 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar9;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar10;
      return ar7;
    }
  } while( true );
}



/* FUN_8c233d20 @ 8c233d20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c233d20(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  double *unaff_r13;
  undefined4 *unaff_r14;
  undefined8 *puVar1;
  undefined4 in_fr1;
  double dVar2;
  double dVar3;
  undefined4 in_fr5;
  undefined4 uVar4;
  float fVar5;
  double in_dr12;
  undefined8 in_dr14;
  double dVar6;
  double in_xd2;
  double in_xd12;
  bool bVar7;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_8);
    puVar1 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = SUB84(in_dr12,0);
  }
  else {
    puVar1 = (undefined8 *)auStack_10;
    uStack_8 = in_dr14;
  }
  *(undefined4 *)((int)puVar1 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ain0 + (int)unaff_r13),in_fr1);
    dVar6 = (double)CONCAT44(*(undefined4 *)(ain0 + (int)unaff_r14),*unaff_r14);
  }
  else {
    dVar6 = *(double *)(ain0 + (int)unaff_r14);
    dVar2 = *(double *)(ain0 + (int)unaff_r13);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - (float)((ulonglong)dVar2 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 - dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(unaff_r13 + 1),*(undefined4 *)unaff_r13);
  }
  else {
    in_xd2 = *unaff_r13;
    dVar3 = unaff_r13[1];
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0) - SUB84(dVar3,0));
  }
  else {
    dVar6 = dVar6 - dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),unaff_r14[2]);
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),(int)((ulonglong)dVar6 >> 0x20));
  }
  else {
    in_xd12 = *(double *)(unaff_r14 + 2);
    in_xd2 = dVar6;
  }
  uVar4 = SUB84(in_xd2,0);
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(in_dr12,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar5 = SUB84(in_dr12 - dVar3 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    in_xd12 = (double)CONCAT44(fVar5,SUB84(dVar2,0));
    uVar4 = in_fr5;
  }
  FUN_8c258030(ar4,ar5,ar6,ar7,*(undefined4 *)((int)puVar1 + -4));
  if (in_FPSCR_SZ == '\0') {
    in_xd12 = (double)CONCAT44((int)((ulonglong)in_xd12 >> 0x20),uVar4);
    dVar2 = (double)CONCAT44(unaff_r14[3],*(undefined4 *)((int)unaff_r13 + 0xc));
  }
  else {
    dVar2 = *(double *)(unaff_r14 + 3);
  }
  if (in_FPSCR_PR == '\0') {
    bVar7 = (float)((ulonglong)in_xd12 >> 0x20) < (float)((ulonglong)dVar2 >> 0x20) + SUB84(dVar2,0)
    ;
  }
  else {
    bVar7 = in_xd12 < dVar2 + dVar2;
  }
  return (uint)bVar7;
}



/* FUN_8c234a6a @ 8c234a6a callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c234ac8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c234a6a(double *ar4,double *ar5,double *ar6,undefined4 ar7,int ain0)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  float fVar3;
  double in_dr0;
  double dVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  undefined4 in_fr5;
  float fVar11;
  undefined4 in_fr7;
  double dVar12;
  float fVar14;
  double in_dr14;
  double in_xd2;
  double dVar15;
  double in_xd4;
  undefined8 in_xd6;
  double in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  undefined4 uVar13;
  
  uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
    puVar2 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = uVar1;
  }
  else {
    puVar2 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar2 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    uVar13 = *(undefined4 *)(ain0 + (int)ar5);
    in_fr5 = *(undefined4 *)(ar5 + 2);
    dVar12 = (double)CONCAT44(uVar13,*(undefined4 *)ar5);
    dVar9 = (double)CONCAT44(uVar13,in_fr7);
  }
  else {
    dVar12 = *(double *)(ain0 + (int)ar5);
    in_xd2 = *ar5;
    in_xd4 = ar5[2];
    uVar13 = (undefined4)((ulonglong)dVar12 >> 0x20);
    dVar9 = dVar12;
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) * SUB84(dVar12,0),SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 * dVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),*(undefined4 *)((int)ar5 + 4));
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr5);
  }
  else {
    in_xd2 = *(double *)((int)ar5 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(in_dr0,0) * SUB84(dVar12,0);
  }
  else {
    fVar3 = SUB84(in_dr0 * dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(uVar13,*(undefined4 *)((int)ar5 + 0x14));
  }
  else {
    in_xd6 = *(undefined8 *)((int)ar5 + 0x14);
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44(-(float)((ulonglong)dVar12 >> 0x20),SUB84(dVar12,0));
  }
  else {
    dVar12 = -dVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),*(undefined4 *)(ar5 + 1));
    dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),fVar3);
  }
  else {
    in_xd2 = ar5[1];
    dVar4 = *(double *)((int)ar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) - SUB84(dVar4,0),SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 - dVar4;
  }
  fVar3 = SUB84(dVar9,0);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),fVar3);
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),SUB84(dVar4,0) * SUB84(dVar12,0));
  }
  else {
    dVar4 = dVar4 * dVar12;
  }
  dVar15 = in_xd4;
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),in_fr5);
    dVar15 = in_xd2;
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                              SUB84(dVar12,0) * (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    dVar12 = dVar12 * dVar4;
  }
  fVar7 = (float)((ulonglong)dVar9 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(*(undefined4 *)ar4,SUB84(dVar12,0));
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),in_fr5);
    dVar4 = (double)CONCAT44(fVar7,SUB84(dVar4,0));
  }
  else {
    dVar8 = *ar4;
    dVar4 = dVar9;
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) - SUB84(dVar4,0),SUB84(dVar12,0));
    fVar14 = (float)((ulonglong)dVar8 >> 0x20);
    dVar8 = (double)CONCAT44(fVar14,(float)((ulonglong)dVar4 >> 0x20) * fVar14 + SUB84(dVar8,0));
  }
  else {
    dVar12 = dVar12 - dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)(ulonglong)*(uint *)(ar4 + 1);
  }
  uVar5 = in_xd6;
  if (in_FPSCR_SZ == '\0') {
    uVar5 = CONCAT44(fVar3,SUB84(dVar4,0));
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),
                             (float)((ulonglong)uVar5 >> 0x20) * (float)uVar5 + SUB84(dVar8,0));
  }
  dVar4 = dVar15;
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)((ulonglong)(uint)fVar7 << 0x20);
    in_dr14 = (double)CONCAT44(uVar1,SUB84(dVar8,0));
    dVar4 = in_xd14;
  }
  if (in_FPSCR_PR == '\0') {
    fVar14 = SUB84(in_dr14,0) + (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar14 = SUB84(in_dr14 + dVar12,0);
  }
  fVar11 = SUB84(dVar12,0);
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar11);
    in_xd4 = dVar15;
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = (float)((ulonglong)dVar9 >> 0x20) * fVar7 + SUB84(dVar8,0) * fVar11;
  }
  else {
    fVar7 = SUB84(dVar8 * dVar12,0);
  }
  fVar6 = fVar3;
  if (in_FPSCR_SZ != '\0') {
    fVar6 = (float)((ulonglong)in_xd6 >> 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = fVar6 * fVar3 + fVar7;
  }
  dVar9 = in_xd4;
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(fVar7,fVar14);
  }
  if (ar6 != (double *)0x0) {
    if (in_FPSCR_SZ == '\0') {
      fVar7 = SUB84(dVar9,0);
      dVar4 = in_xd4;
    }
    dVar12 = dVar4;
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(-fVar7,fVar11);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = (float)((ulonglong)dVar12 >> 0x20) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar3 = (float)((ulonglong)(dVar12 / dVar9) >> 0x20);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)((int)ar5 + 0xc));
    }
    else {
      dVar4 = *(double *)((int)ar5 + 0xc);
      dVar9 = *ar4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44(fVar3 * SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20),
                               SUB84(dVar9,0));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)ar6 = (int)((ulonglong)dVar9 >> 0x20);
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar5 + 2),*(undefined4 *)((int)ar4 + 4));
    }
    else {
      *ar6 = dVar9;
      dVar4 = *(double *)((int)ar4 + 4);
      dVar9 = ar5[2];
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)(ulonglong)(uint)(fVar3 * (float)((ulonglong)dVar9 >> 0x20) + SUB84(dVar9,0));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)ar6 + 4) = SUB84(dVar9,0);
      uVar10 = CONCAT44(*(undefined4 *)((int)ar5 + 0x14),*(undefined4 *)(ar4 + 1));
    }
    else {
      *(double *)((int)ar6 + 4) = dVar4;
      dVar4 = ar4[1];
      uVar10 = *(ulonglong *)((int)ar5 + 0x14);
    }
    if (in_FPSCR_PR == '\0') {
      uVar10 = (ulonglong)(uint)(fVar3 * (float)(uVar10 >> 0x20) + (float)uVar10);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar6 + 1) = (int)uVar10;
    }
    else {
      ar6[1] = dVar4;
    }
  }
  uVar1 = FUN_8c258048(ar4,ar5,ar6,ar7,*(undefined4 *)((int)puVar2 + -4));
  return uVar1;
}



/* FUN_8c234b10 @ 8c234b10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c234b10(undefined4 *ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  iVar2 = ar5;
  if (ar6 == 0) {
    FUN_8c236454(ar4,ar5,0,ar7);
    uVar3 = 0x80002;
    FUN_8c237124(0x80002,ar5,ar6,ar7,iVar2);
    iVar1 = FUN_8c236510(uVar3,ar5,ar6,ar7);
  }
  else {
    FUN_8c236454(ar4,ar5,ar6,ar7);
    uVar3 = 0x2100002;
    FUN_8c237124(0x2100002,ar5,ar6,ar7,iVar2);
    iVar1 = FUN_8c2365e2(uVar3,ar5,ar6,ar7);
  }
  iVar1 = iVar1 + 0x1c;
  while( true ) {
    uVar3 = *ar4;
    ar5_00 = ar4[1];
    ar6_00 = ar4[2];
    ar7_00 = ar4[3];
    ar4 = ar4 + 4;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
    *(undefined4 *)(iVar1 + -4) = ar7_00;
    *(undefined4 *)(iVar1 + -0x10) = ar6_00;
    *(undefined4 *)(iVar1 + -0x14) = ar5_00;
    *(undefined4 *)(iVar1 + -0x18) = uVar3;
    *(undefined4 *)(iVar1 + -0x1c) = 0xe0000000;
    iVar1 = iVar1 + 0x20;
  }
  *(undefined4 *)(iVar1 + -4) = ar7_00;
  *(undefined4 *)(iVar1 + -0x10) = ar6_00;
  *(undefined4 *)(iVar1 + -0x14) = ar5_00;
  *(undefined4 *)(iVar1 + -0x18) = uVar3;
  *(undefined4 *)(iVar1 + -0x1c) = 0xf0000000;
  iVar1 = iVar1 + 4;
  FUN_8c2370dc(iVar1,ar5_00,ar6_00,ar7_00);
  uVar3 = FUN_8c2364b2(iVar1,ar5_00,ar6_00,ar7_00);
  return uVar3;
}



/* FUN_8c234bc0 @ 8c234bc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c234bc0(undefined4 *ar4,int ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 uVar4;
  
  if (ar7 == 0) {
    iVar1 = ar5;
    uVar3 = ar6;
    FUN_8c236454(ar4,ar5,ar6,0);
    FUN_8c237124(0x8000a,iVar1,ar6,ar7,uVar3);
    FUN_8c23728c(uVar3,iVar1,ar6,ar7);
    iVar1 = FUN_8c23666c(uVar3,iVar1,ar6,ar7);
  }
  else {
    iVar1 = ar5;
    uVar3 = ar6;
    FUN_8c236454(ar4,ar5,ar6,ar7);
    FUN_8c237124(0x210000a,iVar1,ar6,ar7,uVar3);
    FUN_8c23728c(uVar3,iVar1,ar6,ar7);
    iVar1 = FUN_8c236718(uVar3,iVar1,ar6,ar7);
  }
  iVar1 = iVar1 + 0x1c;
  while( true ) {
    uVar3 = *ar4;
    ar5_00 = ar4[1];
    ar6_00 = ar4[2];
    ar7_00 = ar4[3];
    uVar4 = ar4[4];
    puVar2 = ar4 + 5;
    ar4 = ar4 + 6;
    ar5 = ar5 + -1;
    if (ar5 == 0) break;
    *(undefined4 *)(iVar1 + -4) = *puVar2;
    *(undefined4 *)(iVar1 + -8) = uVar4;
    *(undefined4 *)(iVar1 + -0xc) = ar7_00;
    *(undefined4 *)(iVar1 + -0x10) = ar6_00;
    *(undefined4 *)(iVar1 + -0x14) = ar5_00;
    *(undefined4 *)(iVar1 + -0x18) = uVar3;
    *(undefined4 *)(iVar1 + -0x1c) = 0xe0000000;
    iVar1 = iVar1 + 0x20;
  }
  *(undefined4 *)(iVar1 + -4) = *puVar2;
  *(undefined4 *)(iVar1 + -8) = uVar4;
  *(undefined4 *)(iVar1 + -0xc) = ar7_00;
  *(undefined4 *)(iVar1 + -0x10) = ar6_00;
  *(undefined4 *)(iVar1 + -0x14) = ar5_00;
  *(undefined4 *)(iVar1 + -0x18) = uVar3;
  *(undefined4 *)(iVar1 + -0x1c) = 0xf0000000;
  iVar1 = iVar1 + 4;
  FUN_8c2370dc(iVar1,ar5_00,ar6_00,ar7_00);
  uVar3 = FUN_8c2364b2(iVar1,ar5_00,ar6_00,ar7_00);
  return uVar3;
}



/* FUN_8c234c94 @ 8c234c94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c234c94(undefined4 *ar4,int ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 uVar4;
  
  if (ar7 == 0) {
    iVar1 = ar5;
    uVar3 = ar6;
    FUN_8c236454(ar4,ar5,ar6,0);
    FUN_8c237124(0x8000a,iVar1,ar6,ar7,uVar3);
    FUN_8c23732a(uVar3,iVar1,ar6,ar7);
    iVar1 = FUN_8c23666c(uVar3,iVar1,ar6,ar7);
  }
  else {
    iVar1 = ar5;
    uVar3 = ar6;
    FUN_8c236454(ar4,ar5,ar6,ar7);
    FUN_8c237124(0x210000a,iVar1,ar6,ar7,uVar3);
    FUN_8c23732a(uVar3,iVar1,ar6,ar7);
    iVar1 = FUN_8c236718(uVar3,iVar1,ar6,ar7);
  }
  iVar1 = iVar1 + 0x1c;
  while( true ) {
    uVar3 = *ar4;
    ar5_00 = ar4[1];
    ar6_00 = ar4[2];
    ar7_00 = ar4[3];
    uVar4 = ar4[4];
    puVar2 = ar4 + 5;
    ar4 = ar4 + 6;
    ar5 = ar5 + -1;
    if (ar5 == 0) break;
    *(undefined4 *)(iVar1 + -4) = *puVar2;
    *(undefined4 *)(iVar1 + -8) = uVar4;
    *(undefined4 *)(iVar1 + -0xc) = ar7_00;
    *(undefined4 *)(iVar1 + -0x10) = ar6_00;
    *(undefined4 *)(iVar1 + -0x14) = ar5_00;
    *(undefined4 *)(iVar1 + -0x18) = uVar3;
    *(undefined4 *)(iVar1 + -0x1c) = 0xe0000000;
    iVar1 = iVar1 + 0x20;
  }
  *(undefined4 *)(iVar1 + -4) = *puVar2;
  *(undefined4 *)(iVar1 + -8) = uVar4;
  *(undefined4 *)(iVar1 + -0xc) = ar7_00;
  *(undefined4 *)(iVar1 + -0x10) = ar6_00;
  *(undefined4 *)(iVar1 + -0x14) = ar5_00;
  *(undefined4 *)(iVar1 + -0x18) = uVar3;
  *(undefined4 *)(iVar1 + -0x1c) = 0xf0000000;
  iVar1 = iVar1 + 4;
  FUN_8c2370dc(iVar1,ar5_00,ar6_00,ar7_00);
  uVar3 = FUN_8c2364b2(iVar1,ar5_00,ar6_00,ar7_00);
  return uVar3;
}



/* FUN_8c235248 @ 8c235248 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c235248(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  double in_dr2;
  undefined4 uVar3;
  undefined8 in_dr4;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd2;
  bool bVar4;
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
  *(int *)(puVar2 + -8) = ar4;
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = (float)((ulonglong)in_dr4 >> 0x20);
  }
  uVar1 = *(undefined4 *)(&DAT_8c277ac0 + ar4 * 4);
  FUN_8c237124(uVar1,ar5,ar6,ar7,*(undefined4 *)(puVar2 + -8));
  uVar3 = (undefined4)in_dr4;
  if (*(int *)(puVar2 + -8) == 0) {
    uVar1 = FUN_8c23666c(uVar1,ar5,ar6,ar7);
  }
  else {
    uVar1 = FUN_8c236718(uVar1,ar5,ar6,ar7);
  }
  if (in_FPSCR_PR == '\0') {
    _DAT_8c4aa3e0 = (double)CONCAT44(0xbf800000,uVar3);
    uVar3 = 0xbf800000;
    bVar4 = in_fr15 < -1.0;
  }
  else {
    _DAT_8c4aa3e0 = -(double)CONCAT44(0x3f800000,uVar3);
    uVar3 = (undefined4)((ulonglong)_DAT_8c4aa3e0 >> 0x20);
    bVar4 = (double)CONCAT44(in_fr14,in_fr15) < _DAT_8c4aa3e0;
  }
  if (bVar4) {
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar3);
      _DAT_8c4aa3e0 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      in_fr15 = SUB84(in_dr2,0) / in_fr15;
    }
    else {
      in_fr15 = SUB84(in_dr2 / (double)CONCAT44(in_fr14,in_fr15),0);
    }
  }
  else {
    in_fr15 = 1.0;
    _DAT_8c4aa3e0 = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    _DAT_8c4aa3e0 = (double)CONCAT44(uVar1,in_fr15);
  }
  return uVar1;
}



/* FUN_8c2376d8 @ 8c2376d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2376d8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int in_r2;
  undefined4 ar6_00;
  int ar5_00;
  int unaff_r13;
  int unaff_r14;
  int *piVar1;
  undefined4 in_PR;
  
  if (unaff_r13 != 0) {
    piVar1 = (int *)(unaff_r14 * 4 + in_r2);
    do {
      piVar1 = piVar1 + -1;
      ar6_00 = 0x10;
      ar5_00 = *(int *)(*piVar1 * 4 + -0x73b3ee20);
      FUN_8c23c7f4(0x8c4c13a0,0x8c4c0ce0,0x10,ar7);
      FUN_8c255d6c(0x8c4c13a0,ar5_00,ar6_00,ar7,in_PR);
      FUN_8c212740(0x8c4c13a0,ar5_00 + 0x40,ar5_00 + 0x90,ar7,in_PR);
      ain0 = FUN_8c21279c(0x8c4c13a0,ar5_00 + 0x4c,ar5_00 + 0x9c,ar7,in_PR);
      unaff_r13 = unaff_r13 + -1;
    } while (unaff_r13 != 0);
  }
  return ain0;
}



/* FUN_8c237830 @ 8c237830 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c237830(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *ar5_00;
  undefined4 *unaff_r14;
  undefined4 in_PR;
  
  if ((unaff_r14[4] & 2) == 0) {
    ar5_00 = unaff_r14 + 5;
    iVar1 = FUN_8c25a914(0,ar5_00,ar6,ar7);
    if (iVar1 < 0) {
      *(short *)((int)unaff_r14 + 0x42) = -(short)iVar1;
      return 0xffffffff;
    }
    *(undefined2 *)((int)unaff_r14 + 0x42) = 0;
    iVar1 = FUN_8c25a1ee((uint)unaff_r14[6] >> 0x10 & 0xff00,ar5_00,ar6,ar7);
    if (iVar1 == 0) {
      *(short *)(unaff_r14 + 0x10) = *(short *)(unaff_r14 + 0x10) + 1;
      unaff_r14[4] = unaff_r14[4] | 2;
      FUN_8c2571fe(unaff_r14,ar5_00,ar6,ar7);
    }
    else {
      FUN_8c25a608(*unaff_r14,2,unaff_r14[5],ar7,in_PR);
      unaff_r14[4] = unaff_r14[4] | 8;
    }
  }
  else {
    *(short *)(unaff_r14 + 0x10) = *(short *)(unaff_r14 + 0x10) + 1;
  }
  return 1;
}



/* FUN_8c2378ba @ 8c2378ba callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c2378ba(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int in_r2;
  undefined4 *in_r3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 unaff_r14;
  undefined4 in_PR;
  
  ar6_00 = *(undefined4 *)(*(int *)*in_r3 + in_r2 + 8);
  iVar2 = DAT_8c277b08;
  ar5_00 = DAT_8c277b0c;
  iVar1 = FUN_8c25a566(DAT_8c277b08,DAT_8c277b0c,ar6_00,ar7);
  FUN_8c25b5b4(iVar2,ar5_00,ar6_00,ar7,in_PR);
  if (iVar1 < 0) {
    _DAT_8c4aa6b4 = 1;
    iVar2 = -1;
    _DAT_8c4aa6ac = unaff_r14;
  }
  else {
    iVar2 = FUN_8c23782c(iVar1 * 0x44 + DAT_8c277b08,ar5_00,ar6_00,ar7);
    if (iVar2 < 0) {
      _DAT_8c4aa6ac = unaff_r14;
    }
  }
  return iVar2;
}



/* FUN_8c237964 @ 8c237964 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c237964(int *ar4,int ar5,undefined4 ar6,uint ar7)

{
  uint uVar1;
  int *ar5_00;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined *ar6_00;
  undefined4 uVar7;
  undefined4 in_stack_fffffe90;
  undefined1 auStack_16c [4];
  undefined1 auStack_168 [48];
  int iStack_138;
  uint uStack_134;
  int *piStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int aiStack_120 [64];
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  int *piStack_14;
  int *piStack_10;
  int iStack_c;
  int *piStack_8;
  
  iStack_12c = 0;
  uStack_134 = 0xffffffff;
  piStack_18 = (int *)(ar5 * 0xc + *ar4);
  piStack_10 = piStack_18 + 2;
  iStack_c = ar5;
  piStack_8 = ar4;
  if (((piStack_18[1] & 0x10000U) != 0) && (ar5 != 0)) {
    iStack_1c = (ar5 + -1) * 0xc + *ar4;
    piStack_14 = (int *)(iStack_1c + 8);
    uStack_134 = (uint)piStack_18[2] >> 0x1a;
    iStack_124 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piStack_130,ar7);
    if ((DAT_8c277b08[iStack_124 * 0x11 + 4] & 1U) == 0) {
      uVar7 = 2;
    }
    else {
      uVar7 = 3;
    }
    iVar4 = (int)piStack_14 + 0x14;
    FUN_8c25a380(piStack_10,iVar4,piStack_130,uVar7,uStack_134);
    *(undefined2 *)(*piStack_10 + 0x42) = 0;
    FUN_8c2571fe(*piStack_10,iVar4,piStack_130,uVar7);
    return 1;
  }
  ar6_00 = &DAT_8c26d960;
  iVar4 = *piStack_18;
  FUN_8c25a174(aiStack_120,iVar4,&DAT_8c26d960,ar7);
  piVar6 = DAT_8c277b0c;
  if ((*(uint *)(iStack_c * 0xc + *piStack_8 + 4) & 0x800000) == 0) {
    if ((*(uint *)(iStack_c * 0xc + *piStack_8 + 4) & 0x1000000) == 0) {
      iStack_20 = FUN_8c259be8(aiStack_120,iVar4,ar6_00,ar7);
      if (iStack_20 < 0) {
        FUN_8c23c814(auStack_168,&DAT_8c4ab10c,0x28,ar7);
        FUN_8c25a380(piStack_10,auStack_16c,piStack_130,0,0xffffffff);
        *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
        *(undefined2 *)(*piStack_10 + 0x40) = 0;
        return 0xffffffff;
      }
      iStack_12c = FUN_8c25a216(&piStack_130,iVar4,ar6_00,ar7);
      if (iStack_12c < 0) {
        FUN_8c23c814(auStack_168,&DAT_8c4ab10c,0x28,ar7);
        uVar7 = 0;
        puVar5 = auStack_16c;
        piVar6 = piStack_10;
        FUN_8c25a380(piStack_10,puVar5,piStack_130,0,0xffffffff);
        _DAT_8c4aa6b4 = -iStack_12c;
        FUN_8c259c40(piVar6,puVar5,piStack_130,uVar7);
        return 0xffffffff;
      }
      piVar3 = DAT_8c277b08;
      piVar6 = DAT_8c277b0c;
      piVar2 = piStack_130;
      iStack_124 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piStack_130,ar7);
      if (iStack_12c == 1) {
        uVar1 = (uint)piStack_18[2] >> 0x1a;
        uStack_134 = uVar1;
        if (iStack_124 < 0) {
          iStack_138 = 2;
        }
        else {
          piVar3 = DAT_8c277b08;
          piVar6 = DAT_8c277b0c;
          piVar2 = piStack_130;
          iStack_128 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,piStack_130,uVar1);
          ar7 = uVar1;
          if (iStack_128 < 0) {
            iStack_138 = 0;
          }
          else {
            iStack_138 = 1;
          }
        }
      }
      else if (iStack_124 < 0) {
        iStack_138 = 2;
      }
      else {
        iStack_138 = 1;
      }
    }
    else {
      piVar2 = (int *)(piStack_18[2] & 0x3ffffff);
      uStack_134 = (uint)piStack_18[2] >> 0x1a;
      piStack_130 = piVar2;
      iStack_124 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piVar2,ar7);
      if (iStack_124 < 0) {
        iStack_138 = 2;
      }
      else {
        piVar6 = DAT_8c277b0c;
        piVar2 = piStack_130;
        ar7 = uStack_134;
        iStack_128 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,piStack_130,uStack_134);
        if (iStack_128 < 0) {
          iStack_138 = 0;
        }
        else {
          iStack_138 = 1;
        }
      }
      iStack_12c = 1;
      piVar3 = aiStack_120;
      iStack_20 = FUN_8c259be8(piVar3,piVar6,piVar2,ar7);
      if (iStack_20 < 0) {
        FUN_8c23c814(auStack_168,&DAT_8c4ab10c,0x28,ar7);
        FUN_8c25a380(piStack_10,auStack_16c,piStack_130,0,uStack_134);
        *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
        *(undefined2 *)(*piStack_10 + 0x40) = 0;
        return 0xffffffff;
      }
    }
  }
  else {
    piVar2 = *(int **)(iStack_c * 0xc + *piStack_8 + 8);
    piStack_130 = piVar2;
    iStack_124 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piVar2,ar7);
    if (iStack_124 < 0) {
      iStack_138 = 2;
    }
    else {
      iStack_138 = 1;
    }
    piVar3 = aiStack_120;
    iStack_20 = FUN_8c259be8(piVar3,piVar6,piVar2,ar7);
    if (iStack_20 < 0) {
      FUN_8c23c814(auStack_168,&DAT_8c4ab10c,0x28,ar7);
      FUN_8c25a380(piStack_10,auStack_16c,piStack_130,0,0xffffffff);
      *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
      *(undefined2 *)(*piStack_10 + 0x40) = 0;
      return 0xffffffff;
    }
  }
  if (iStack_138 == 0) {
    piStack_14 = DAT_8c277b08 + iStack_124 * 0x11;
    if ((piStack_14[4] & 2U) == 0) {
      uVar1 = piStack_18[1] & 0xa0000000;
      if ((uVar1 == 0) || (uVar1 == 0x20000000)) {
        iStack_20 = FUN_8c25a914(piStack_18,piStack_14 + 5,piVar2,ar7);
        if (iStack_20 < 0) {
          uVar7 = 1;
          piVar3 = piStack_14 + 5;
          piVar6 = piStack_10;
          piVar2 = piStack_130;
          FUN_8c25a380(piStack_10,piVar3,piStack_130,1,uStack_134);
          *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
          _DAT_8c4aa6ac = iStack_c;
          _DAT_8c4aa6b0 = piStack_130;
          FUN_8c259c40(piVar6,piVar3,piVar2,uVar7);
          return 0xffffffff;
        }
        ar7 = 1;
        FUN_8c25a380(piStack_10,piStack_14 + 5,piStack_130,1,uStack_134);
        piVar6 = (int *)0x2;
        *(undefined2 *)(*piStack_10 + 0x42) = 0;
        piVar2 = *(int **)(*piStack_10 + 0x14);
        piVar3 = piStack_130;
        FUN_8c25a608(piStack_130,2,piVar2,ar7,in_stack_fffffe90);
        piStack_14[4] = piStack_14[4] | 8;
      }
      else if (uVar1 == 0x80000000) {
        ar7 = 1;
        piVar6 = piStack_14 + 5;
        piVar3 = piStack_10;
        piVar2 = piStack_130;
        FUN_8c25a380(piStack_10,piVar6,piStack_130,1,uStack_134);
        *(undefined2 *)(*piStack_10 + 0x42) = 0;
      }
    }
    else {
      uVar1 = piStack_18[1] & 0xa0000000;
      if (uVar1 == 0) {
        ar7 = piStack_14[4];
        piVar6 = piStack_14 + 5;
        piVar2 = piStack_130;
        FUN_8c25a380(piStack_10,piVar6,piStack_130,ar7,uStack_134);
        *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
        *(undefined2 *)(*piStack_10 + 0x42) = 0;
        piVar3 = piStack_130;
        FUN_8c25a6ea(piStack_130,piVar6,piVar2,ar7,in_stack_fffffe90);
      }
      else if (uVar1 == 0x80000000) {
        if ((piStack_14[4] & 1U) == 0) {
          iStack_20 = FUN_8c25a838(piStack_18,piStack_14 + 5,piVar2,ar7);
          if (iStack_20 < 0) {
            uVar7 = 2;
            piVar3 = piStack_14 + 5;
            piVar6 = piStack_10;
            piVar2 = piStack_130;
            FUN_8c25a380(piStack_10,piVar3,piStack_130,2,uStack_134);
            *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
            *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
            _DAT_8c4aa6ac = iStack_c;
            _DAT_8c4aa6b0 = piStack_130;
            FUN_8c259c40(piVar6,piVar3,piVar2,uVar7);
            return 0xffffffff;
          }
          ar7 = 2;
          FUN_8c25a380(piStack_10,piStack_14 + 5,piStack_130,2,uStack_134);
          piVar6 = (int *)0x1;
          *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
          *(undefined2 *)(*piStack_10 + 0x42) = 0;
          piVar2 = *(int **)(*piStack_10 + 0x14);
          piVar3 = piStack_130;
          FUN_8c25a608(piStack_130,1,piVar2,ar7,in_stack_fffffe90);
        }
        else {
          ar7 = 3;
          piVar6 = piStack_14 + 5;
          piVar3 = piStack_10;
          piVar2 = piStack_130;
          FUN_8c25a380(piStack_10,piVar6,piStack_130,3,uStack_134);
          *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
          *(undefined2 *)(*piStack_10 + 0x42) = 0;
        }
      }
      else if (uVar1 == 0x20000000) {
        if ((piStack_14[4] & 1U) == 0) {
          iStack_20 = FUN_8c25a838(piStack_18,piStack_14 + 5,piVar2,ar7);
          if (iStack_20 < 0) {
            uVar7 = 2;
            piVar3 = piStack_14 + 5;
            piVar6 = piStack_10;
            piVar2 = piStack_130;
            FUN_8c25a380(piStack_10,piVar3,piStack_130,2,uStack_134);
            *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
            *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
            _DAT_8c4aa6ac = iStack_c;
            _DAT_8c4aa6b0 = piStack_130;
            FUN_8c259c40(piVar6,piVar3,piVar2,uVar7);
            return 0xffffffff;
          }
          ar7 = 2;
          FUN_8c25a380(piStack_10,piStack_14 + 5,piStack_130,2,uStack_134);
          piVar6 = (int *)0x3;
          *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
          *(undefined2 *)(*piStack_10 + 0x42) = 0;
          piVar2 = *(int **)(*piStack_10 + 0x14);
          piVar3 = piStack_130;
          FUN_8c25a608(piStack_130,3,piVar2,ar7,in_stack_fffffe90);
        }
        else {
          ar7 = 3;
          piVar6 = piStack_14 + 5;
          piVar2 = piStack_130;
          FUN_8c25a380(piStack_10,piVar6,piStack_130,3,uStack_134);
          *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
          *(undefined2 *)(*piStack_10 + 0x42) = 0;
          piVar3 = piStack_130;
          FUN_8c25a6ea(piStack_130,piVar6,piVar2,ar7,in_stack_fffffe90);
        }
      }
    }
    FUN_8c259c40(piVar3,piVar6,piVar2,ar7);
    return 1;
  }
  if (iStack_138 != 1) {
    if (iStack_138 != 2) {
      return 1;
    }
    piVar3 = piStack_130;
    ar5_00 = (int *)FUN_8c25a710(piStack_130,piVar6,piVar2,ar7);
    uVar1 = piStack_18[1] & 0xa0000000;
    if (uVar1 == 0) {
      piVar6 = ar5_00;
      iStack_20 = FUN_8c25a770(piStack_18,ar5_00,piVar2,ar7);
      if (iStack_20 < 0) {
        uVar7 = 0;
        piVar2 = piStack_10;
        piVar3 = piStack_130;
        FUN_8c25a380(piStack_10,piVar6,piStack_130,0,uStack_134);
        *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
        *(undefined2 *)(*piStack_10 + 0x40) = 0;
        _DAT_8c4aa6ac = iStack_c;
        _DAT_8c4aa6b0 = piStack_130;
        FUN_8c259c40(piVar2,piVar6,piVar3,uVar7);
        return 0xffffffff;
      }
      ar7 = 2;
      piVar3 = piStack_10;
      piVar2 = piStack_130;
      FUN_8c25a380(piStack_10,piVar6,piStack_130,2,uStack_134);
      *(undefined2 *)(*piStack_10 + 0x42) = 0;
      if (iStack_12c != 0) {
        *(uint *)(*piStack_10 + 0x10) = *(uint *)(*piStack_10 + 0x10) | 8;
      }
    }
    else if (uVar1 == 0x80000000) {
      piVar6 = ar5_00;
      iStack_20 = FUN_8c25a838(piStack_18,ar5_00,piVar2,ar7);
      if (iStack_20 < 0) {
        uVar7 = 0;
        piVar2 = piStack_10;
        piVar3 = piStack_130;
        FUN_8c25a380(piStack_10,piVar6,piStack_130,0,uStack_134);
        *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
        _DAT_8c4aa6ac = iStack_c;
        _DAT_8c4aa6b0 = piStack_130;
        FUN_8c259c40(piVar2,piVar6,piVar3,uVar7);
        return 0xffffffff;
      }
      ar7 = 1;
      piVar3 = piStack_10;
      piVar2 = piStack_130;
      FUN_8c25a380(piStack_10,piVar6,piStack_130,1,uStack_134);
      *(undefined2 *)(*piStack_10 + 0x42) = 0;
    }
    else if (uVar1 == 0x20000000) {
      iStack_20 = FUN_8c25a838(piStack_18,ar5_00,piVar2,ar7);
      if (iStack_20 < 0) {
        uVar7 = 0;
        puVar5 = auStack_16c;
        piVar6 = piStack_10;
        piVar2 = piStack_130;
        FUN_8c25a380(piStack_10,puVar5,piStack_130,0,uStack_134);
        *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
        *(undefined2 *)(*piStack_10 + 0x40) = 0;
        _DAT_8c4aa6ac = iStack_c;
        _DAT_8c4aa6b0 = piStack_130;
        FUN_8c259c40(piVar6,puVar5,piVar2,uVar7);
        return 0xffffffff;
      }
      piVar6 = ar5_00;
      iStack_20 = FUN_8c25a914(piStack_18,ar5_00,piVar2,ar7);
      if (iStack_20 < 0) {
        uVar7 = 1;
        piVar2 = piStack_10;
        piVar3 = piStack_130;
        FUN_8c25a380(piStack_10,piVar6,piStack_130,1,uStack_134);
        *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
        _DAT_8c4aa6ac = iStack_c;
        _DAT_8c4aa6b0 = piStack_130;
        FUN_8c259c40(piVar2,piVar6,piVar3,uVar7);
        return 0xffffffff;
      }
      ar7 = 3;
      piVar3 = piStack_10;
      piVar2 = piStack_130;
      FUN_8c25a380(piStack_10,piVar6,piStack_130,3,uStack_134);
      *(undefined2 *)(*piStack_10 + 0x42) = 0;
      if (iStack_12c != 0) {
        *(uint *)(*piStack_10 + 0x10) = *(uint *)(*piStack_10 + 0x10) | 8;
      }
    }
    goto LAB_8c23878e;
  }
  piStack_14 = DAT_8c277b08 + iStack_124 * 0x11;
  piStack_18[2] = (int)piStack_14;
  uVar1 = piStack_18[1] & 0xa0000000;
  if (uVar1 == 0) {
    if ((piStack_14[4] & 2U) == 0) {
      piVar6 = piStack_14 + 5;
      piVar3 = piStack_18;
      iStack_20 = FUN_8c25a914(piStack_18,piVar6,piVar2,ar7);
      if (iStack_20 < 0) {
        *(short *)((int)piStack_14 + 0x42) = -(short)iStack_20;
        _DAT_8c4aa6ac = iStack_c;
        _DAT_8c4aa6b0 = piStack_130;
        FUN_8c259c40(piVar3,piVar6,piVar2,ar7);
        return 0xffffffff;
      }
      *(undefined2 *)((int)piStack_14 + 0x42) = 0;
      if (iStack_12c == 0) {
        piVar3 = piStack_14;
        FUN_8c2571fe(piStack_14,piVar6,piVar2,ar7);
        piStack_14[4] = piStack_14[4] | 2;
        *(short *)(piStack_14 + 0x10) = (short)piStack_14[0x10] + 1;
      }
      else {
        piVar6 = (int *)0x2;
        piVar2 = (int *)piStack_14[5];
        piVar3 = piStack_130;
        FUN_8c25a608(piStack_130,2,piVar2,ar7,in_stack_fffffe90);
        piStack_14[4] = piStack_14[4] | 8;
      }
      goto LAB_8c23878e;
    }
    if (iStack_12c == 0) {
      *(short *)(piStack_14 + 0x10) = (short)piStack_14[0x10] + 1;
      goto LAB_8c23878e;
    }
LAB_8c238436:
    piVar3 = piStack_130;
    FUN_8c25a6ea(piStack_130,piVar6,piVar2,ar7,in_stack_fffffe90);
  }
  else {
    if (uVar1 == 0x80000000) {
      if ((piStack_14[4] & 1U) != 0) goto LAB_8c23878e;
      piVar6 = piStack_14 + 5;
      piVar3 = piStack_18;
      iStack_20 = FUN_8c25a838(piStack_18,piVar6,piVar2,ar7);
      if (iStack_20 < 0) {
        *(short *)((int)piStack_14 + 0x42) = -(short)iStack_20;
        _DAT_8c4aa6ac = iStack_c;
        _DAT_8c4aa6b0 = piStack_130;
        FUN_8c259c40(piVar3,piVar6,piVar2,ar7);
        return 0xffffffff;
      }
      *(undefined2 *)((int)piStack_14 + 0x42) = 0;
      if (iStack_12c == 0) {
        piStack_14[4] = piStack_14[4] | 1;
        goto LAB_8c23878e;
      }
      piVar2 = (int *)piStack_14[5];
      piVar6 = (int *)0x1;
    }
    else {
      if (uVar1 != 0x20000000) goto LAB_8c23878e;
      if ((piStack_14[4] & 2U) == 0) {
        piVar6 = piStack_14 + 5;
        piVar3 = piStack_18;
        iStack_20 = FUN_8c25a914(piStack_18,piVar6,piVar2,ar7);
        if (iStack_20 < 0) {
          *(short *)((int)piStack_14 + 0x42) = -(short)iStack_20;
          _DAT_8c4aa6ac = iStack_c;
          _DAT_8c4aa6b0 = piStack_130;
          FUN_8c259c40(piVar3,piVar6,piVar2,ar7);
          return 0xffffffff;
        }
        *(undefined2 *)((int)piStack_14 + 0x42) = 0;
        if (iStack_12c == 0) {
          piVar3 = piStack_14;
          FUN_8c2571fe(piStack_14,piVar6,piVar2,ar7);
          piStack_14[4] = piStack_14[4] | 2;
          *(undefined2 *)(piStack_14 + 0x10) = 1;
        }
        else {
          piVar6 = (int *)0x2;
          piVar2 = (int *)piStack_14[5];
          piVar3 = piStack_130;
          FUN_8c25a608(piStack_130,2,piVar2,ar7,in_stack_fffffe90);
          piStack_14[4] = piStack_14[4] | 8;
        }
        goto LAB_8c23878e;
      }
      if ((piStack_14[4] & 1U) != 0) {
        if (iStack_12c == 0) {
          *(short *)(piStack_14 + 0x10) = (short)piStack_14[0x10] + 1;
          goto LAB_8c23878e;
        }
        goto LAB_8c238436;
      }
      piVar6 = piStack_14 + 5;
      piVar3 = piStack_18;
      iStack_20 = FUN_8c25a838(piStack_18,piVar6,piVar2,ar7);
      if (iStack_20 < 0) {
        *(short *)((int)piStack_14 + 0x42) = -(short)iStack_20;
        _DAT_8c4aa6ac = iStack_c;
        _DAT_8c4aa6b0 = piStack_130;
        FUN_8c259c40(piVar3,piVar6,piVar2,ar7);
        return 0xffffffff;
      }
      *(undefined2 *)((int)piStack_14 + 0x42) = 0;
      if (iStack_12c == 0) {
        piStack_14[4] = piStack_14[4] | 1;
        *(short *)(piStack_14 + 0x10) = (short)piStack_14[0x10] + 1;
        goto LAB_8c23878e;
      }
      piVar6 = (int *)0x3;
      piVar2 = (int *)piStack_14[5];
    }
    piVar3 = piStack_130;
    FUN_8c25a608(piStack_130,piVar6,piVar2,ar7,in_stack_fffffe90);
  }
LAB_8c23878e:
  FUN_8c259c40(piVar3,piVar6,piVar2,ar7);
  return 1;
}



/* FUN_8c2387a0 @ 8c2387a0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2387a0(int *ar4,int ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *ar5_00;
  int ar5_01;
  int ar5_02;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *ar4_00;
  int *a4;
  uint *a5;
  uint in_stack_ffffffc4;
  int iStack_38;
  undefined1 auStack_30 [4];
  int iStack_2c;
  uint uStack_28;
  ushort uStack_24;
  ushort uStack_22;
  
  ar5_00 = &stack0xffffffc4;
  ar4_00 = (undefined4 *)(*ar4 + ar5 * 0xc);
  a4 = ar4_00 + 2;
  if (((ar4_00[1] & 0x10000) != 0) && (ar5 != 0)) {
    iVar5 = *ar4;
    iVar1 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,in_stack_ffffffc4,ar7);
    if ((*(uint *)(iVar1 * 0x44 + DAT_8c277b08 + 0x10) & 1) == 0) {
      uVar7 = 2;
    }
    else {
      uVar7 = 3;
    }
    iVar1 = iVar5 + (ar5 + -1) * 0xc + 0x1c;
    FUN_8c25a380(a4,iVar1,in_stack_ffffffc4,uVar7);
    *(undefined2 *)(*a4 + 0x42) = 0;
    FUN_8c2571fe(*a4,iVar1,in_stack_ffffffc4,uVar7);
    goto LAB_8c238e44;
  }
  if ((ar4_00[1] & 0x800000) == 0) {
    if ((*(uint *)(ar5 * 0xc + *ar4 + 4) & 0x1000000) != 0) {
      uVar4 = ar4_00[2] & 0x3ffffff;
      uVar2 = (uint)ar4_00[2] >> 0x1a;
      iStack_38 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,uVar4,ar7);
      a5 = (uint *)*ar4_00;
      in_stack_ffffffc4 = *a5;
      uVar3 = FUN_8c25abf0(&uStack_28,auStack_30,in_stack_ffffffc4,ar7);
      if (uVar3 != 0) {
        *a5 = uVar3;
        a5[4] = (uint)uStack_24;
        a5[5] = (uint)uStack_22;
        a5[1] = uStack_28 << 0x10;
      }
      uVar3 = uVar4;
      if (iStack_38 < 0) {
        iVar1 = 2;
        uVar2 = ar7;
      }
      else {
        iVar1 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,uVar4,uVar2);
        in_stack_ffffffc4 = uVar4;
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = 1;
        }
      }
      iVar5 = 1;
      ar7 = uVar2;
      goto LAB_8c238a34;
    }
    a5 = (uint *)*ar4_00;
    uVar4 = *a5;
    uVar2 = FUN_8c25abf0(&uStack_28,&stack0xffffffc4,uVar4,ar7);
    if (uVar2 != 0) {
      *a5 = uVar2;
      a5[4] = (uint)uStack_24;
      a5[5] = (uint)uStack_22;
      a5[1] = uStack_28 << 0x10;
    }
    if (in_stack_ffffffc4 == 0xffffffff) {
      while (uVar7 = DAT_8c277b0c, in_stack_ffffffc4 = DAT_8c277b18,
            iVar1 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,DAT_8c277b18,ar7), iVar1 != -1) {
        DAT_8c277b18 = DAT_8c277b18 - 1;
      }
      uVar3 = DAT_8c277b18;
      iVar5 = FUN_8c25a1ee(uStack_28 & 0xff00,uVar7,in_stack_ffffffc4,ar7);
      iStack_38 = -1;
LAB_8c238a2e:
      iVar1 = 2;
      goto LAB_8c238a34;
    }
    iVar5 = FUN_8c25a1ee(uStack_28 & 0xff00,ar5_00,uVar4,ar7);
    uVar2 = in_stack_ffffffc4;
    iStack_38 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,in_stack_ffffffc4,ar7);
    uVar3 = uVar2;
    if (iVar5 == 1) {
      uVar4 = (uint)ar4_00[2] >> 0x1a;
      if (iStack_38 < 0) goto LAB_8c238a2e;
      iVar1 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,uVar2,uVar4);
      in_stack_ffffffc4 = uVar2;
      ar7 = uVar4;
      if (-1 < iVar1) goto LAB_8c238a32;
      iVar1 = 0;
      goto LAB_8c238a34;
    }
    if (uVar2 != 0xffffffff) {
      if (iStack_38 < 0) goto LAB_8c238a2e;
LAB_8c238a32:
      iVar1 = 1;
      goto LAB_8c238a34;
    }
    FUN_8c25a380(a4,a5,0xffffffff,0);
    *(undefined2 *)(*a4 + 0x42) = 9;
    *(undefined2 *)(*a4 + 0x40) = 0;
    _DAT_8c4aa6b4 = 9;
LAB_8c238e20:
    uVar7 = 0xffffffff;
  }
  else {
    in_stack_ffffffc4 = ar4_00[2];
    a5 = (uint *)*ar4_00;
    uVar2 = FUN_8c25abf0(&uStack_28,auStack_30,*a5,ar7);
    if (uVar2 != 0) {
      *a5 = uVar2;
      a5[4] = (uint)uStack_24;
      a5[5] = (uint)uStack_22;
      a5[1] = uStack_28 << 0x10;
    }
    uVar3 = in_stack_ffffffc4;
    iStack_38 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,in_stack_ffffffc4,ar7);
    if (iStack_38 < 0) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
    iVar5 = 0;
LAB_8c238a34:
    ar5_01 = iStack_38 * 0x44 + DAT_8c277b08;
    uVar2 = uVar3;
    if (iVar1 == 0) {
      if ((*(uint *)(ar5_01 + 0x10) & 2) == 0) {
        uVar2 = ar4_00[1] & 0xa0000000;
        if ((uVar2 != 0) && (uVar2 != 0x20000000)) {
          if (uVar2 == 0x80000000) {
            FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,1);
LAB_8c238dc6:
            *(undefined2 *)(*a4 + 0x42) = 0;
          }
          goto LAB_8c238e44;
        }
        iStack_2c = FUN_8c25a914(ar4_00,ar5_01 + 0x14,in_stack_ffffffc4,ar7);
        if (-1 < iStack_2c) {
          ar7 = 1;
          FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,1);
          *(undefined2 *)(*a4 + 0x42) = 0;
          goto LAB_8c238d18;
        }
        FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,1);
        _DAT_8c4aa6b0 = uVar3;
LAB_8c238e0a:
        *(short *)(*a4 + 0x42) = -(short)iStack_2c;
        _DAT_8c4aa6ac = ar5;
        goto LAB_8c238e20;
      }
      uVar4 = ar4_00[1] & 0xa0000000;
      if (uVar4 == 0) {
        ar7 = *(uint *)(ar5_01 + 0x10);
LAB_8c238b9e:
        iVar1 = ar5_01 + 0x14;
        FUN_8c25a380(a4,iVar1,uVar3,ar7);
        *(undefined2 *)(*a4 + 0x40) = *(undefined2 *)(ar5_01 + 0x40);
        *(undefined2 *)(*a4 + 0x42) = 0;
        in_stack_ffffffc4 = uVar3;
LAB_8c238cee:
        FUN_8c25a6ea(uVar2,iVar1,in_stack_ffffffc4,ar7,uVar2);
      }
      else {
        if (uVar4 == 0x80000000) {
          if ((*(uint *)(ar5_01 + 0x10) & 1) != 0) {
            FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,3);
            *(undefined2 *)(*a4 + 0x40) = *(undefined2 *)(ar5_01 + 0x40);
            goto LAB_8c238dc6;
          }
          iVar1 = FUN_8c25a8c0(ar4_00,ar5_01 + 0x14,in_stack_ffffffc4,ar7);
          if (iVar1 < 0) {
            FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,2);
            _DAT_8c4aa6b0 = uVar3;
            *(undefined2 *)(*a4 + 0x40) = *(undefined2 *)(ar5_01 + 0x40);
            *(short *)(*a4 + 0x42) = -(short)iVar1;
            *(uint *)(*a4 + 0x10) = *(uint *)(*a4 + 0x10) & 0xfffffff7;
            _DAT_8c4aa6ac = ar5;
            goto LAB_8c238e20;
          }
          ar7 = 2;
          FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,2);
          *(undefined2 *)(*a4 + 0x40) = *(undefined2 *)(ar5_01 + 0x40);
          *(undefined2 *)(*a4 + 0x42) = 0;
          *(uint *)(*a4 + 0x10) = *(uint *)(*a4 + 0x10) & 0xfffffff7;
LAB_8c238c8e:
          uVar6 = *(undefined4 *)(ar5_01 + 0x14);
          uVar7 = 1;
        }
        else {
          if (uVar4 != 0x20000000) goto LAB_8c238e44;
          if ((*(uint *)(ar5_01 + 0x10) & 1) != 0) {
            ar7 = 3;
            goto LAB_8c238b9e;
          }
          iStack_2c = FUN_8c25a8c0(ar4_00,ar5_01 + 0x14,in_stack_ffffffc4,ar7);
          if (iStack_2c < 0) {
            FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,2);
            *(undefined2 *)(*a4 + 0x40) = *(undefined2 *)(ar5_01 + 0x40);
            _DAT_8c4aa6b0 = uVar3;
            goto LAB_8c238e0a;
          }
          ar7 = 2;
          FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,2);
          *(undefined2 *)(*a4 + 0x40) = *(undefined2 *)(ar5_01 + 0x40);
          *(undefined2 *)(*a4 + 0x42) = 0;
LAB_8c238cd4:
          uVar6 = *(undefined4 *)(ar5_01 + 0x14);
          uVar7 = 3;
        }
        FUN_8c25a608(uVar3,uVar7,uVar6,ar7,uVar3);
      }
    }
    else if (iVar1 == 1) {
      ar4_00[2] = ar5_01;
      uVar4 = ar4_00[1] & 0xa0000000;
      if (uVar4 == 0) {
        if ((*(uint *)(ar5_01 + 0x10) & 2) == 0) {
          ar5_02 = ar5_01 + 0x14;
          iVar1 = FUN_8c25a914(ar4_00,ar5_02,in_stack_ffffffc4,ar7);
          if (iVar1 < 0) goto LAB_8c238d08;
          *(undefined2 *)(ar5_01 + 0x42) = 0;
          if (iVar5 != 0) {
LAB_8c238d18:
            FUN_8c25a608(uVar3,2,*(undefined4 *)(ar5_01 + 0x14),ar7,uVar3);
            *(uint *)(ar5_01 + 0x10) = *(uint *)(ar5_01 + 0x10) | 8;
            goto LAB_8c238e44;
          }
LAB_8c238d2a:
          FUN_8c2571fe(ar5_01,ar5_02,in_stack_ffffffc4,ar7);
          *(uint *)(ar5_01 + 0x10) = *(uint *)(ar5_01 + 0x10) | 2;
        }
        else {
joined_r0x8c238cec:
          iVar1 = ar5_01;
          if (iVar5 != 0) goto LAB_8c238cee;
        }
LAB_8c238d36:
        *(short *)(ar5_01 + 0x40) = *(short *)(ar5_01 + 0x40) + 1;
      }
      else if (uVar4 == 0x80000000) {
        if ((*(uint *)(ar5_01 + 0x10) & 1) == 0) {
          iVar1 = FUN_8c25a8c0(ar4_00,ar5_01 + 0x14,in_stack_ffffffc4,ar7);
          if (iVar1 < 0) goto LAB_8c238d08;
          *(undefined2 *)(ar5_01 + 0x42) = 0;
          if (iVar5 != 0) goto LAB_8c238c8e;
          *(uint *)(ar5_01 + 0x10) = *(uint *)(ar5_01 + 0x10) | 1;
        }
      }
      else if (uVar4 == 0x20000000) {
        if ((*(uint *)(ar5_01 + 0x10) & 2) == 0) {
          ar5_02 = ar5_01 + 0x14;
          iVar1 = FUN_8c25a914(ar4_00,ar5_02,in_stack_ffffffc4,ar7);
          if (-1 < iVar1) {
            *(undefined2 *)(ar5_01 + 0x42) = 0;
            if (iVar5 == 0) goto LAB_8c238d2a;
            goto LAB_8c238d18;
          }
        }
        else {
          if ((*(uint *)(ar5_01 + 0x10) & 1) != 0) goto joined_r0x8c238cec;
          iVar1 = FUN_8c25a8c0(ar4_00,ar5_01 + 0x14,in_stack_ffffffc4,ar7);
          if (-1 < iVar1) {
            *(undefined2 *)(ar5_01 + 0x42) = 0;
            if (iVar5 != 0) goto LAB_8c238cd4;
            *(uint *)(ar5_01 + 0x10) = *(uint *)(ar5_01 + 0x10) | 1;
            goto LAB_8c238d36;
          }
        }
LAB_8c238d08:
        _DAT_8c4aa6b0 = uVar3;
        *(short *)(ar5_01 + 0x42) = -(short)iVar1;
        _DAT_8c4aa6ac = ar5;
        goto LAB_8c238e20;
      }
    }
    else if (iVar1 == 2) {
      uVar7 = FUN_8c25a710(uVar3,ar5_01,in_stack_ffffffc4,ar7);
      uVar6 = 0x2c;
      FUN_8c23c814(uVar7,a5,0x2c,ar7);
      uVar2 = ar4_00[1] & 0xa0000000;
      if (uVar2 == 0) {
        iStack_2c = FUN_8c25a914(ar4_00,uVar7,uVar6,ar7);
        if (-1 < iStack_2c) {
          FUN_8c25a380(a4,uVar7,uVar3,2);
          *(undefined2 *)(*a4 + 0x42) = 0;
joined_r0x8c238da2:
          if (iVar5 != 0) {
            *(uint *)(*a4 + 0x10) = *(uint *)(*a4 + 0x10) | 8;
          }
          goto LAB_8c238e44;
        }
      }
      else if (uVar2 == 0x80000000) {
        iStack_2c = FUN_8c25a8c0(ar4_00,uVar7,uVar6,ar7);
        if (-1 < iStack_2c) {
          FUN_8c25a380(a4,uVar7,uVar3,1);
          goto LAB_8c238dc6;
        }
      }
      else {
        if (uVar2 != 0x20000000) goto LAB_8c238e44;
        iStack_2c = FUN_8c25a8c0(ar4_00,uVar7,uVar6,ar7);
        if (-1 < iStack_2c) {
          iStack_2c = FUN_8c25a914(ar4_00,uVar7,uVar6,ar7);
          if (iStack_2c < 0) {
            FUN_8c25a380(a4,uVar7,uVar3,1);
            _DAT_8c4aa6b0 = uVar3;
            goto LAB_8c238e0a;
          }
          FUN_8c25a380(a4,uVar7,uVar3,3);
          *(undefined2 *)(*a4 + 0x42) = 0;
          goto joined_r0x8c238da2;
        }
      }
      FUN_8c25a380(a4,uVar7,uVar3,0);
      _DAT_8c4aa6b0 = uVar3;
      goto LAB_8c238e0a;
    }
LAB_8c238e44:
    uVar7 = 1;
  }
  return uVar7;
}



/* FUN_8c238f2a @ 8c238f2a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c238f2a(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint in_stack_ffffffa4;
  undefined1 auStack_48 [44];
  
  uVar1 = *(ushort *)(ar6 + 4);
  sVar2 = *(short *)(ar6 + 6);
  iVar5 = 0;
  puVar6 = (undefined4 *)*ar4;
  if (0 < sVar2) {
    do {
      iVar3 = FUN_8c259c48(auStack_48,ar5,ar6,ar7);
      if (iVar3 < 0) {
        return 0xffffffff;
      }
      puVar4 = auStack_48;
      FUN_8c238ede(&stack0xffffffa4,auStack_48,ar6,ar7,in_stack_ffffffa4);
      puVar6[1] = puVar6[1] & 0xffff0000 | in_stack_ffffffa4 & 0xffff;
      iVar3 = 2;
      if ((uVar1 & 1) != 0) {
        ar6 = log_message(auStack_48 + 2,puVar4,ar6,ar7);
        FUN_8c23c814(*puVar6,auStack_48 + 2,ar6,ar7);
        iVar3 = 0x1e;
      }
      if ((uVar1 & 2) != 0) {
        iVar3 = iVar3 + 2;
      }
      if ((uVar1 & 4) != 0) {
        iVar3 = iVar3 + 2;
      }
      puVar4 = auStack_48 + iVar3;
      if ((uVar1 & 0x400) == 0) {
        if ((uVar1 & 8) != 0) {
          FUN_8c238eea(puVar6 + 2,puVar4,ar6,ar7,in_stack_ffffffa4);
        }
      }
      else if ((uVar1 & 8) != 0) {
        FUN_8c238eea(puVar6 + 2,puVar4,ar6,ar7,in_stack_ffffffa4);
        puVar6[1] = puVar6[1] | 0x1000000;
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 3;
    } while (iVar5 < sVar2);
  }
  return 1;
}



/* FUN_8c239212 @ 8c239212 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c239212(undefined4 ar4,int *ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int **ppiVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined *ar6_00;
  int *in_stack_fffffe78;
  int iStack_158;
  int iStack_154;
  uint uStack_150;
  int *piStack_14c;
  undefined4 uStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int *piStack_138;
  int iStack_134;
  int iStack_130;
  int *piStack_128;
  int *piStack_124;
  int *piStack_120;
  int iStack_11c;
  short sStack_118;
  short sStack_116;
  short sStack_114;
  short sStack_112;
  int iStack_110;
  undefined1 auStack_10c [256];
  int *piStack_c;
  undefined4 uStack_8;
  
  uStack_150 = 0xffffffff;
  piStack_c = ar5;
  uStack_8 = ar4;
  FUN_8c25b5b4(ar4,ar5,ar6,ar7,in_stack_fffffe78);
  ar6_00 = &DAT_8c26d968;
  uVar6 = uStack_8;
  FUN_8c25a174(auStack_10c,uStack_8,&DAT_8c26d968,ar7);
  iStack_13c = FUN_8c259be8(auStack_10c,uVar6,ar6_00,ar7);
  if (-1 < iStack_13c) {
    uVar6 = 4;
    piVar4 = &iStack_110;
    iVar1 = FUN_8c259c48(piVar4,4,ar6_00,ar7);
    if (iVar1 < 0) {
      FUN_8c259c40(piVar4,uVar6,ar6_00,ar7);
    }
    else if (iStack_110 == 0x484d5650) {
      uVar6 = 8;
      piVar4 = &iStack_11c;
      iVar1 = FUN_8c259c48(piVar4,8,ar6_00,ar7);
      if (iVar1 < 0) {
        FUN_8c259c40(piVar4,uVar6,ar6_00,ar7);
      }
      else {
        sStack_114 = sStack_118;
        sStack_112 = sStack_116;
        piStack_c[1] = (int)sStack_116;
        uStack_148 = FUN_8c238f02((int)sStack_118,uVar6,ar6_00,ar7);
        piVar3 = &iStack_11c;
        FUN_8c238f2a(piStack_c,uStack_148,piVar3,ar7);
        FUN_8c25a122(0,0,piVar3,ar7);
        piVar7 = (int *)0x1;
        piVar4 = (int *)(iStack_11c + 8);
        FUN_8c25a122(piVar4,1,piVar3,ar7);
        iVar1 = FUN_8c239012(piVar4,piVar7,piVar3,ar7);
        if (iVar1 < 0) {
          FUN_8c259c40(piVar4,piVar7,piVar3,ar7);
        }
        else {
          piStack_c[1] = (int)sStack_112;
          iVar1 = 0;
          while( true ) {
            iStack_140 = iVar1;
            if (sStack_112 <= iVar1) {
              FUN_8c259c40(piVar4,piVar7,piVar3,ar7);
              return 1;
            }
            piVar4 = piStack_c;
            iStack_144 = FUN_8c239150(piStack_c,iVar1,piVar3,ar7);
            piStack_128 = (int *)(iStack_144 * 0xc + *piStack_c);
            piStack_120 = piStack_128 + 2;
            if ((piStack_128[1] & 0x1000000U) != 0) {
              piVar3 = (int *)(piStack_128[2] & 0x3ffffff);
              uStack_150 = (uint)piStack_128[2] >> 0x1a;
              piVar4 = DAT_8c277b08;
              piVar7 = DAT_8c277b0c;
              piStack_138 = piVar3;
              iStack_130 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piVar3,ar7);
              if (iStack_130 < 0) {
                iStack_158 = 2;
              }
              else {
                piVar4 = DAT_8c277b08;
                piVar7 = DAT_8c277b0c;
                piVar3 = piStack_138;
                ar7 = uStack_150;
                iStack_134 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,piStack_138,uStack_150);
                if (iStack_134 < 0) {
                  iStack_158 = 0;
                }
                else {
                  iStack_158 = 1;
                }
              }
              iStack_154 = 1;
              goto LAB_8c2394ac;
            }
            iStack_154 = FUN_8c2391a8(piVar4,iVar1,piVar3,ar7);
            if (iStack_154 < 0) break;
            piVar4 = DAT_8c277b08;
            piVar7 = DAT_8c277b0c;
            if (iStack_154 == 1) {
              piVar3 = (int *)(piStack_128[2] & 0x3ffffff);
              uStack_150 = (uint)piStack_128[2] >> 0x1a;
              piStack_138 = piVar3;
              iStack_130 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piVar3,ar7);
              if (iStack_130 < 0) {
LAB_8c239438:
                iStack_158 = 2;
              }
              else {
                piVar4 = DAT_8c277b08;
                piVar7 = DAT_8c277b0c;
                piVar3 = piStack_138;
                ar7 = uStack_150;
                iStack_134 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,piStack_138,uStack_150);
                if (iStack_134 < 0) {
                  iStack_158 = 0;
                }
                else {
                  iStack_158 = 1;
                }
              }
            }
            else {
              piVar3 = (int *)piStack_128[2];
              piStack_138 = piVar3;
              iStack_130 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,piVar3,ar7);
              if (iStack_130 < 0) goto LAB_8c239438;
              iStack_158 = 1;
            }
LAB_8c2394ac:
            if (iStack_158 == 0) {
              piStack_124 = DAT_8c277b08 + iStack_130 * 0x11;
              FUN_8c25a122(4,1,piVar3,ar7);
              iVar1 = FUN_8c259c48(&piStack_14c,4,piVar3,ar7);
              if (iVar1 < 0) {
                uVar6 = 0;
                piVar3 = piStack_124 + 5;
                piVar4 = piStack_120;
                piVar7 = piStack_138;
                FUN_8c25a380(piStack_120,piVar3,piStack_138,0,uStack_150);
                *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                _DAT_8c4aa6ac = iStack_144;
                _DAT_8c4aa6b0 = piStack_138;
                FUN_8c259c40(piVar4,piVar3,piVar7,uVar6);
                return 0xffffffff;
              }
              piVar7 = (int *)0x1;
              piVar4 = piStack_14c;
              FUN_8c25a122(piStack_14c,1,piVar3,ar7);
              if ((piStack_124[4] & 2U) == 0) {
                uVar2 = piStack_128[1] & 0xa0000000;
                if ((uVar2 == 0) || (uVar2 == 0x20000000)) {
                  iStack_13c = FUN_8c25a914(piStack_128,piStack_124 + 5,piVar3,ar7);
                  if (iStack_13c < 0) {
                    uVar6 = 1;
                    piVar3 = piStack_124 + 5;
                    piVar4 = piStack_120;
                    piVar7 = piStack_138;
                    FUN_8c25a380(piStack_120,piVar3,piStack_138,1,uStack_150);
                    *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(piVar4,piVar3,piVar7,uVar6);
                    return 0xffffffff;
                  }
                  ar7 = 1;
                  FUN_8c25a380(piStack_120,piStack_124 + 5,piStack_138,1,uStack_150);
                  piVar7 = (int *)0x2;
                  *(undefined2 *)(*piStack_120 + 0x42) = 0;
                  piVar3 = (int *)piStack_124[5];
                  piVar4 = piStack_138;
                  FUN_8c25a608(piStack_138,2,piVar3,ar7,in_stack_fffffe78);
                  piStack_124[4] = piStack_124[4] | 8;
                }
                else if (uVar2 == 0x80000000) {
                  ar7 = 1;
                  piVar7 = piStack_124 + 5;
                  piVar4 = piStack_120;
                  piVar3 = piStack_138;
                  FUN_8c25a380(piStack_120,piVar7,piStack_138,1,uStack_150);
                  *(undefined2 *)(*piStack_120 + 0x42) = 0;
                }
              }
              else {
                uVar2 = piStack_128[1] & 0xa0000000;
                if (uVar2 == 0) {
                  ar7 = piStack_124[4];
                  piVar7 = piStack_124 + 5;
                  piVar3 = piStack_138;
                  FUN_8c25a380(piStack_120,piVar7,piStack_138,ar7,uStack_150);
                  *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                  *(undefined2 *)(*piStack_120 + 0x42) = 0;
LAB_8c239986:
                  piVar4 = piStack_138;
                  FUN_8c25a6ea(piStack_138,piVar7,piVar3,ar7,in_stack_fffffe78);
                }
                else if (uVar2 == 0x80000000) {
                  if ((piStack_124[4] & 1U) == 0) {
                    iStack_13c = FUN_8c25a838(piStack_128,piStack_124 + 5,piVar3,ar7);
                    if (iStack_13c < 0) {
                      uVar6 = 2;
                      piVar3 = piStack_124 + 5;
                      piVar4 = piStack_120;
                      piVar7 = piStack_138;
                      FUN_8c25a380(piStack_120,piVar3,piStack_138,2,uStack_150);
                      *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                      *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                      _DAT_8c4aa6ac = iStack_144;
                      _DAT_8c4aa6b0 = piStack_138;
                      FUN_8c259c40(piVar4,piVar3,piVar7,uVar6);
                      return 0xffffffff;
                    }
                    ar7 = 2;
                    FUN_8c25a380(piStack_120,piStack_124 + 5,piStack_138,2,uStack_150);
                    piVar7 = (int *)0x1;
                    *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                    *(undefined2 *)(*piStack_120 + 0x42) = 0;
                    piVar3 = *(int **)(*piStack_120 + 0x14);
                    piVar4 = piStack_138;
                    FUN_8c25a608(piStack_138,1,piVar3,ar7,in_stack_fffffe78);
                  }
                  else {
                    ar7 = 3;
                    piVar7 = piStack_124 + 5;
                    piVar4 = piStack_120;
                    piVar3 = piStack_138;
                    FUN_8c25a380(piStack_120,piVar7,piStack_138,3,uStack_150);
                    *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                    *(undefined2 *)(*piStack_120 + 0x42) = 0;
                  }
                }
                else if (uVar2 == 0x20000000) {
                  if ((piStack_124[4] & 1U) == 0) {
                    iStack_13c = FUN_8c25a838(piStack_128,piStack_124 + 5,piVar3,ar7);
                    if (iStack_13c < 0) {
                      uVar6 = 2;
                      piVar3 = piStack_124 + 5;
                      piVar4 = piStack_120;
                      piVar7 = piStack_138;
                      FUN_8c25a380(piStack_120,piVar3,piStack_138,2,uStack_150);
                      *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                      *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                      _DAT_8c4aa6ac = iStack_144;
                      _DAT_8c4aa6b0 = piStack_138;
                      FUN_8c259c40(piVar4,piVar3,piVar7,uVar6);
                      return 0xffffffff;
                    }
                    ar7 = 2;
                    FUN_8c25a380(piStack_120,piStack_124 + 5,piStack_138,2,uStack_150);
                    piVar7 = (int *)0x3;
                    *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                    *(undefined2 *)(*piStack_120 + 0x42) = 0;
                    piVar3 = (int *)piStack_124[5];
                    piVar4 = piStack_138;
                    FUN_8c25a608(piStack_138,3,piVar3,ar7,in_stack_fffffe78);
                  }
                  else {
                    ar7 = 3;
                    piVar7 = piStack_124 + 5;
                    piVar3 = piStack_138;
                    FUN_8c25a380(piStack_120,piVar7,piStack_138,3,uStack_150);
                    *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                    *(undefined2 *)(*piStack_120 + 0x42) = 0;
                    piVar4 = piStack_138;
                    FUN_8c25a6ea(piStack_138,piVar7,piVar3,ar7,in_stack_fffffe78);
                  }
                }
              }
            }
            else if (iStack_158 == 1) {
              piStack_124 = DAT_8c277b08 + iStack_130 * 0x11;
              piStack_128[2] = (int)piStack_124;
              uVar2 = piStack_128[1] & 0xa0000000;
              if (uVar2 == 0) {
                FUN_8c25a122(4,1,piVar3,ar7);
                uVar6 = 4;
                ppiVar5 = &piStack_14c;
                iVar1 = FUN_8c259c48(ppiVar5,4,piVar3,ar7);
                if (iVar1 < 0) {
                  _DAT_8c4aa6ac = iStack_144;
                  _DAT_8c4aa6b0 = piStack_138;
                  FUN_8c259c40(ppiVar5,uVar6,piVar3,ar7);
                  return 0xffffffff;
                }
                piVar7 = (int *)0x1;
                piVar4 = piStack_14c;
                FUN_8c25a122(piStack_14c,1,piVar3,ar7);
                if ((piStack_124[4] & 2U) == 0) {
                  piVar7 = piStack_124 + 5;
                  piVar4 = piStack_128;
                  iStack_13c = FUN_8c25a914(piStack_128,piVar7,piVar3,ar7);
                  if (iStack_13c < 0) {
                    *(short *)((int)piStack_124 + 0x42) = -(short)iStack_13c;
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(piVar4,piVar7,piVar3,ar7);
                    return 0xffffffff;
                  }
                  *(undefined2 *)((int)piStack_124 + 0x42) = 0;
                  if (iStack_154 == 0) {
                    piVar4 = piStack_124;
                    FUN_8c2571fe(piStack_124,piVar7,piVar3,ar7);
                    piStack_124[4] = piStack_124[4] | 2;
                    *(short *)(piStack_124 + 0x10) = (short)piStack_124[0x10] + 1;
                  }
                  else {
                    piVar7 = (int *)0x2;
                    piVar3 = (int *)piStack_124[5];
                    piVar4 = piStack_138;
                    FUN_8c25a608(piStack_138,2,piVar3,ar7,in_stack_fffffe78);
                    piStack_124[4] = piStack_124[4] | 8;
                  }
                }
                else {
                  if (iStack_154 != 0) goto LAB_8c239986;
                  *(short *)(piStack_124 + 0x10) = (short)piStack_124[0x10] + 1;
                }
              }
              else if (uVar2 == 0x80000000) {
                if ((piStack_124[4] & 1U) == 0) {
                  piVar7 = piStack_124 + 5;
                  piVar4 = piStack_128;
                  iStack_13c = FUN_8c25a838(piStack_128,piVar7,piVar3,ar7);
                  if (iStack_13c < 0) {
                    *(short *)((int)piStack_124 + 0x42) = -(short)iStack_13c;
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(piVar4,piVar7,piVar3,ar7);
                    return 0xffffffff;
                  }
                  *(undefined2 *)((int)piStack_124 + 0x42) = 0;
                  if (iStack_154 == 0) {
                    piStack_124[4] = piStack_124[4] | 1;
                  }
                  else {
                    piVar7 = (int *)0x1;
                    piVar3 = (int *)piStack_124[5];
                    piVar4 = piStack_138;
                    FUN_8c25a608(piStack_138,1,piVar3,ar7,in_stack_fffffe78);
                  }
                }
                else {
                  FUN_8c25a122(4,1,piVar3,ar7);
                  uVar6 = 4;
                  ppiVar5 = &piStack_14c;
                  iVar1 = FUN_8c259c48(ppiVar5,4,piVar3,ar7);
                  if (iVar1 < 0) {
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(ppiVar5,uVar6,piVar3,ar7);
                    return 0xffffffff;
                  }
                  piVar7 = (int *)0x1;
                  piVar4 = piStack_14c;
                  FUN_8c25a122(piStack_14c,1,piVar3,ar7);
                }
              }
              else if (uVar2 == 0x20000000) {
                if ((piStack_124[4] & 2U) == 0) {
                  FUN_8c25a122(4,1,piVar3,ar7);
                  uVar6 = 4;
                  ppiVar5 = &piStack_14c;
                  iVar1 = FUN_8c259c48(ppiVar5,4,piVar3,ar7);
                  if (iVar1 < 0) {
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(ppiVar5,uVar6,piVar3,ar7);
                    return 0xffffffff;
                  }
                  FUN_8c25a122(piStack_14c,1,piVar3,ar7);
                  piVar7 = piStack_124 + 5;
                  piVar4 = piStack_128;
                  iStack_13c = FUN_8c25a914(piStack_128,piVar7,piVar3,ar7);
                  if (iStack_13c < 0) {
                    *(short *)((int)piStack_124 + 0x42) = -(short)iStack_13c;
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(piVar4,piVar7,piVar3,ar7);
                    return 0xffffffff;
                  }
                  *(undefined2 *)((int)piStack_124 + 0x42) = 0;
                  if (iStack_154 == 0) {
                    piVar4 = piStack_124;
                    FUN_8c2571fe(piStack_124,piVar7,piVar3,ar7);
                    piStack_124[4] = piStack_124[4] | 2;
                    *(undefined2 *)(piStack_124 + 0x10) = 1;
                  }
                  else {
                    piVar7 = (int *)0x2;
                    piVar3 = (int *)piStack_124[5];
                    piVar4 = piStack_138;
                    FUN_8c25a608(piStack_138,2,piVar3,ar7,in_stack_fffffe78);
                    piStack_124[4] = piStack_124[4] | 8;
                  }
                }
                else if ((piStack_124[4] & 1U) == 0) {
                  piVar7 = piStack_124 + 5;
                  piVar4 = piStack_128;
                  iStack_13c = FUN_8c25a838(piStack_128,piVar7,piVar3,ar7);
                  if (iStack_13c < 0) {
                    *(short *)((int)piStack_124 + 0x42) = -(short)iStack_13c;
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(piVar4,piVar7,piVar3,ar7);
                    return 0xffffffff;
                  }
                  *(undefined2 *)((int)piStack_124 + 0x42) = 0;
                  if (iStack_154 == 0) {
                    piStack_124[4] = piStack_124[4] | 1;
                    *(short *)(piStack_124 + 0x10) = (short)piStack_124[0x10] + 1;
                  }
                  else {
                    piVar7 = (int *)0x3;
                    piVar3 = (int *)piStack_124[5];
                    piVar4 = piStack_138;
                    FUN_8c25a608(piStack_138,3,piVar3,ar7,in_stack_fffffe78);
                  }
                }
                else {
                  if (iStack_154 == 0) {
                    *(short *)(piStack_124 + 0x10) = (short)piStack_124[0x10] + 1;
                  }
                  else {
                    FUN_8c25a6ea(piStack_138,piVar7,piVar3,ar7,in_stack_fffffe78);
                  }
                  FUN_8c25a122(4,1,piVar3,ar7);
                  uVar6 = 4;
                  ppiVar5 = &piStack_14c;
                  iVar1 = FUN_8c259c48(ppiVar5,4,piVar3,ar7);
                  if (iVar1 < 0) {
                    _DAT_8c4aa6ac = iStack_144;
                    _DAT_8c4aa6b0 = piStack_138;
                    FUN_8c259c40(ppiVar5,uVar6,piVar3,ar7);
                    return 0xffffffff;
                  }
                  piVar7 = (int *)0x1;
                  piVar4 = piStack_14c;
                  FUN_8c25a122(piStack_14c,1,piVar3,ar7);
                }
              }
            }
            else if (iStack_158 == 2) {
              piVar4 = piStack_138;
              in_stack_fffffe78 = (int *)FUN_8c25a710(piStack_138,piVar7,piVar3,ar7);
              uVar2 = piStack_128[1] & 0xa0000000;
              if (uVar2 == 0) {
                piVar7 = in_stack_fffffe78;
                iStack_13c = FUN_8c25a770(piStack_128,in_stack_fffffe78,piVar3,ar7);
                if (iStack_13c < 0) {
                  uVar6 = 0;
                  piVar4 = piStack_120;
                  piVar3 = piStack_138;
                  FUN_8c25a380(piStack_120,piVar7,piStack_138,0,uStack_150);
                  *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                  _DAT_8c4aa6ac = iStack_144;
                  _DAT_8c4aa6b0 = piStack_138;
                  FUN_8c259c40(piVar4,piVar7,piVar3,uVar6);
                  return 0xffffffff;
                }
                ar7 = 2;
                piVar4 = piStack_120;
                piVar3 = piStack_138;
                in_stack_fffffe78 = piVar7;
                FUN_8c25a380(piStack_120,piVar7,piStack_138,2,uStack_150);
                *(undefined2 *)(*piStack_120 + 0x42) = 0;
                if (iStack_154 != 0) {
                  *(uint *)(*piStack_120 + 0x10) = *(uint *)(*piStack_120 + 0x10) | 8;
                }
              }
              else if (uVar2 == 0x80000000) {
                piVar7 = in_stack_fffffe78;
                iStack_13c = FUN_8c25a838(piStack_128,in_stack_fffffe78,piVar3,ar7);
                if (iStack_13c < 0) {
                  uVar6 = 0;
                  piVar4 = piStack_120;
                  piVar3 = piStack_138;
                  FUN_8c25a380(piStack_120,piVar7,piStack_138,0,uStack_150);
                  *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                  _DAT_8c4aa6ac = iStack_144;
                  _DAT_8c4aa6b0 = piStack_138;
                  FUN_8c259c40(piVar4,piVar7,piVar3,uVar6);
                  return 0xffffffff;
                }
                ar7 = 1;
                piVar4 = piStack_120;
                piVar3 = piStack_138;
                in_stack_fffffe78 = piVar7;
                FUN_8c25a380(piStack_120,piVar7,piStack_138,1,uStack_150);
                *(undefined2 *)(*piStack_120 + 0x42) = 0;
              }
              else if (uVar2 == 0x20000000) {
                iStack_13c = FUN_8c25a838(piStack_128,in_stack_fffffe78,piVar3,ar7);
                if (iStack_13c < 0) {
                  uVar6 = 0;
                  piVar4 = piStack_120;
                  piVar7 = piStack_138;
                  FUN_8c25a380(piStack_120,in_stack_fffffe78,piStack_138,0,uStack_150);
                  *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                  _DAT_8c4aa6ac = iStack_144;
                  _DAT_8c4aa6b0 = piStack_138;
                  FUN_8c259c40(piVar4,in_stack_fffffe78,piVar7,uVar6);
                  return 0xffffffff;
                }
                piVar7 = in_stack_fffffe78;
                iStack_13c = FUN_8c25a914(piStack_128,in_stack_fffffe78,piVar3,ar7);
                if (iStack_13c < 0) {
                  uVar6 = 1;
                  piVar4 = piStack_120;
                  piVar3 = piStack_138;
                  FUN_8c25a380(piStack_120,piVar7,piStack_138,1,uStack_150);
                  *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                  _DAT_8c4aa6ac = iStack_144;
                  _DAT_8c4aa6b0 = piStack_138;
                  FUN_8c259c40(piVar4,piVar7,piVar3,uVar6);
                  return 0xffffffff;
                }
                ar7 = 3;
                piVar4 = piStack_120;
                piVar3 = piStack_138;
                in_stack_fffffe78 = piVar7;
                FUN_8c25a380(piStack_120,piVar7,piStack_138,3,uStack_150);
                *(undefined2 *)(*piStack_120 + 0x42) = 0;
                if (iStack_154 != 0) {
                  *(uint *)(*piStack_120 + 0x10) = *(uint *)(*piStack_120 + 0x10) | 8;
                }
              }
            }
            iVar1 = iStack_140 + 1;
          }
          _DAT_8c4aa6ac = iStack_144;
          FUN_8c259c40(piVar4,iVar1,piVar3,ar7);
        }
      }
    }
    else {
      _DAT_8c4aa6b4 = 4;
      FUN_8c259c40(piVar4,uVar6,ar6_00,ar7);
    }
  }
  return 0xffffffff;
}



/* FUN_8c239f84 @ 8c239f84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c239f84(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int ar7_00;
  undefined4 *puVar6;
  uint in_stack_ffffffa8;
  int iStack_54;
  undefined1 auStack_48 [44];
  
  uVar1 = *(ushort *)(ar6 + 4);
  uVar2 = (uint)*(short *)(ar6 + 6);
  iStack_54 = 0;
  iVar5 = (int)*(short *)(ar6 + 6);
  puVar6 = (undefined4 *)*ar4;
  ar7_00 = iVar5;
  if (0 < iVar5) {
    do {
      FUN_8c238e98(auStack_48,ar5,ar6,ar7_00);
      puVar4 = auStack_48;
      uVar2 = FUN_8c238ede(&stack0xffffffa8,auStack_48,ar6,ar7_00,in_stack_ffffffa8);
      puVar6[1] = puVar6[1] & 0xffff0000 | in_stack_ffffffa8 & 0xffff;
      iVar3 = 2;
      if ((uVar1 & 1) != 0) {
        ar6 = log_message(auStack_48 + 2,puVar4,ar6,ar7_00);
        uVar2 = FUN_8c23c814(*puVar6,auStack_48 + 2,ar6,ar7_00);
        iVar3 = 0x1e;
      }
      if ((uVar1 & 2) != 0) {
        iVar3 = iVar3 + 2;
      }
      if ((uVar1 & 4) != 0) {
        iVar3 = iVar3 + 2;
      }
      puVar4 = auStack_48 + iVar3;
      if ((uVar1 & 0x400) == 0) {
        uVar2 = (uint)uVar1;
        if ((uVar1 & 8) != 0) {
          uVar2 = FUN_8c238eea(puVar6 + 2,puVar4,ar6,ar7_00,in_stack_ffffffa8);
        }
      }
      else if ((uVar1 & 8) != 0) {
        uVar2 = FUN_8c238eea(puVar6 + 2,puVar4,ar6,ar7_00,in_stack_ffffffa8);
        puVar6[1] = puVar6[1] | 0x1000000;
      }
      iStack_54 = iStack_54 + 1;
      puVar6 = puVar6 + 3;
    } while (iStack_54 < iVar5);
  }
  return uVar2;
}



/* FUN_8c23a29c @ 8c23a29c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c23a29c(undefined4 ar4,int *ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  int ain0;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int ar5_00;
  int *piVar6;
  uint ar7_00;
  int ar4_00;
  int *ar4_01;
  int *ar6_00;
  int iStack_68;
  int iStack_5c;
  int iStack_58;
  undefined1 auStack_54 [44];
  int iStack_28;
  short sStack_24;
  short sStack_22;
  
  ar7_00 = 0xffffffff;
  piVar6 = ar5;
  FUN_8c25b5b4(ar4,ar5,ar6,ar7,ar4);
  FUN_8c238e8c(ar4,piVar6,ar6,ar7,ar4);
  FUN_8c238e98(&iStack_58,4,ar6,ar7);
  if (iStack_58 == 0x484d5650) {
    uVar5 = 8;
    FUN_8c238e98(&iStack_28,8,ar6,ar7);
    iVar1 = (int)sStack_22;
    ar5[1] = iVar1;
    uVar5 = FUN_8c238f02((int)sStack_24,uVar5,ar6,ar7);
    piVar6 = &iStack_28;
    FUN_8c239f84(ar5,uVar5,piVar6,ar7);
    FUN_8c238eba(0,0,piVar6,ar7);
    uVar5 = 1;
    iVar4 = iStack_28 + 8;
    FUN_8c238eba(iVar4,1,piVar6,ar7);
    FUN_8c23a078(iVar4,uVar5,piVar6,ar7);
    ar5[1] = iVar1;
    iStack_5c = 0;
    if (0 < sStack_22) {
      do {
        iVar1 = FUN_8c239150(ar5,iStack_5c,piVar6,ar7);
        iVar4 = iVar1 * 0xc;
        ar4_00 = *ar5 + iVar4;
        ar4_01 = (int *)(ar4_00 + 8);
        if ((*(uint *)(ar4_00 + 4) & 0x1000000) == 0) {
          ain0 = FUN_8c23a21c(iVar4,0x1000000,piVar6,ar7);
          iVar4 = DAT_8c277b0c;
          if (ain0 == 1) {
            ar6_00 = (int *)(*(uint *)(ar4_00 + 8) & 0x3ffffff);
            ar7_00 = *(uint *)(ar4_00 + 8) >> 0x1a;
            piVar6 = ar6_00;
            iStack_68 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,ar6_00,ar7);
            if (iStack_68 < 0) {
LAB_8c23a3b6:
              iVar2 = 2;
            }
            else {
              iVar4 = DAT_8c277b0c;
              piVar6 = ar6_00;
              ar7 = ar7_00;
              iVar2 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,ar6_00,ar7_00);
              if (-1 < iVar2) goto LAB_8c23a3ba;
              iVar2 = 0;
            }
          }
          else {
            ar6_00 = *(int **)(ar4_00 + 8);
            piVar6 = ar6_00;
            iStack_68 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,ar6_00,ar7);
            if (iStack_68 < 0) goto LAB_8c23a3b6;
LAB_8c23a3ba:
            iVar2 = 1;
          }
        }
        else {
          ar6_00 = (int *)(*(uint *)(iVar4 + *ar5 + 8) & 0x3ffffff);
          ar7_00 = *(uint *)(ar4_00 + 8) >> 0x1a;
          iVar4 = DAT_8c277b0c;
          piVar6 = ar6_00;
          iStack_68 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,ar6_00,ar7);
          if (iStack_68 < 0) {
            iVar2 = 2;
          }
          else {
            iVar4 = DAT_8c277b0c;
            piVar6 = ar6_00;
            ar7 = ar7_00;
            iVar2 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,ar6_00,ar7_00);
            if (iVar2 < 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = 1;
            }
          }
          ain0 = 1;
        }
        if (iVar2 == 0) {
          iVar2 = iStack_68 * 0x44 + DAT_8c277b08;
          FUN_8c23a1b0(auStack_54,iVar4,piVar6,ar7);
          if ((*(uint *)(iVar2 + 0x10) & 2) == 0) {
            uVar3 = *(uint *)(ar4_00 + 4) & 0xa0000000;
            if ((uVar3 != 0) && (uVar3 != 0x20000000)) {
              if (uVar3 == 0x80000000) {
                ar7 = 1;
                FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,1,ar7_00);
                piVar6 = ar6_00;
LAB_8c23a7c0:
                *(undefined2 *)(*ar4_01 + 0x42) = 0;
              }
              goto LAB_8c23a852;
            }
            iStack_68 = FUN_8c25a914(ar4_00,iVar2 + 0x14,piVar6,ar7);
            if (-1 < iStack_68) {
              ar7 = 1;
              FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,1,ar7_00);
              *(undefined2 *)(*ar4_01 + 0x42) = 0;
              goto LAB_8c23a6f0;
            }
            FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,1,ar7_00);
LAB_8c23a816:
            *(short *)(*ar4_01 + 0x42) = -(short)iStack_68;
            _DAT_8c4aa6ac = iVar1;
            _DAT_8c4aa6b0 = ar6_00;
            goto LAB_8c23a82a;
          }
          uVar3 = *(uint *)(ar4_00 + 4) & 0xa0000000;
          if (uVar3 == 0) {
            iVar4 = iVar2 + 0x14;
            ar7 = *(uint *)(iVar2 + 0x10);
            piVar6 = ar6_00;
            FUN_8c25a380(ar4_01,iVar4,ar6_00,ar7,ar7_00);
LAB_8c23a578:
            *(undefined2 *)(*ar4_01 + 0x40) = *(undefined2 *)(iVar2 + 0x40);
            *(undefined2 *)(*ar4_01 + 0x42) = 0;
LAB_8c23a6c4:
            FUN_8c25a6ea(ar6_00,iVar4,piVar6,ar7,ain0);
          }
          else {
            if (uVar3 == 0x80000000) {
              if ((*(uint *)(iVar2 + 0x10) & 1) != 0) {
                ar7 = 3;
                FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,3,ar7_00);
                *(undefined2 *)(*ar4_01 + 0x40) = *(undefined2 *)(iVar2 + 0x40);
                piVar6 = ar6_00;
                goto LAB_8c23a7c0;
              }
              iStack_68 = FUN_8c25a8c0(ar4_00,iVar2 + 0x14,piVar6,ar7);
              if (iStack_68 < 0) {
LAB_8c23a52a:
                FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,2,ar7_00);
                *(undefined2 *)(*ar4_01 + 0x40) = *(undefined2 *)(iVar2 + 0x40);
                goto LAB_8c23a816;
              }
              ar7 = 2;
              FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,2,ar7_00);
              *(undefined2 *)(*ar4_01 + 0x40) = *(undefined2 *)(iVar2 + 0x40);
              *(undefined2 *)(*ar4_01 + 0x42) = 0;
LAB_8c23a674:
              piVar6 = *(int **)(iVar2 + 0x14);
              uVar5 = 1;
            }
            else {
              if (uVar3 != 0x20000000) goto LAB_8c23a852;
              if ((*(uint *)(iVar2 + 0x10) & 1) != 0) {
                iVar4 = iVar2 + 0x14;
                ar7 = 3;
                piVar6 = ar6_00;
                FUN_8c25a380(ar4_01,iVar4,ar6_00,3,ar7_00);
                goto LAB_8c23a578;
              }
              iStack_68 = FUN_8c25a8c0(ar4_00,iVar2 + 0x14,piVar6,ar7);
              if (iStack_68 < 0) goto LAB_8c23a52a;
              ar7 = 2;
              FUN_8c25a380(ar4_01,iVar2 + 0x14,ar6_00,2,ar7_00);
              *(undefined2 *)(*ar4_01 + 0x40) = *(undefined2 *)(iVar2 + 0x40);
              *(undefined2 *)(*ar4_01 + 0x42) = 0;
LAB_8c23a6a8:
              piVar6 = *(int **)(iVar2 + 0x14);
              uVar5 = 3;
            }
            FUN_8c25a608(ar6_00,uVar5,piVar6,ar7,ain0);
          }
        }
        else if (iVar2 == 1) {
          FUN_8c23a1b0(auStack_54,iVar4,piVar6,ar7);
          iVar2 = iStack_68 * 0x44 + DAT_8c277b08;
          *(int *)(ar4_00 + 8) = iVar2;
          uVar3 = *(uint *)(ar4_00 + 4) & 0xa0000000;
          if (uVar3 == 0) {
            if ((*(uint *)(iVar2 + 0x10) & 2) == 0) {
              ar5_00 = iVar2 + 0x14;
              iVar4 = FUN_8c25a914(ar4_00,ar5_00,piVar6,ar7);
              if (iVar4 < 0) goto LAB_8c23a6de;
              *(undefined2 *)(iVar2 + 0x42) = 0;
              if (ain0 != 0) {
LAB_8c23a6f0:
                piVar6 = *(int **)(iVar2 + 0x14);
                FUN_8c25a608(ar6_00,2,piVar6,ar7,ain0);
                *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 8;
                goto LAB_8c23a852;
              }
LAB_8c23a728:
              FUN_8c2571fe(iVar2,ar5_00,piVar6,ar7);
              *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 2;
            }
            else {
joined_r0x8c23a628:
              if (ain0 != 0) goto LAB_8c23a6c4;
            }
LAB_8c23a734:
            *(short *)(iVar2 + 0x40) = *(short *)(iVar2 + 0x40) + 1;
          }
          else if (uVar3 == 0x80000000) {
            if ((*(uint *)(iVar2 + 0x10) & 1) == 0) {
              iVar4 = FUN_8c25a8c0(ar4_00,iVar2 + 0x14,piVar6,ar7);
              if (iVar4 < 0) goto LAB_8c23a6de;
              *(undefined2 *)(iVar2 + 0x42) = 0;
              if (ain0 != 0) goto LAB_8c23a674;
              *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 1;
            }
          }
          else if (uVar3 == 0x20000000) {
            if ((*(uint *)(iVar2 + 0x10) & 2) == 0) {
              ar5_00 = iVar2 + 0x14;
              iVar4 = FUN_8c25a914(ar4_00,ar5_00,piVar6,ar7);
              if (-1 < iVar4) {
                *(undefined2 *)(iVar2 + 0x42) = 0;
                if (ain0 == 0) goto LAB_8c23a728;
                goto LAB_8c23a6f0;
              }
            }
            else {
              if ((*(uint *)(iVar2 + 0x10) & 1) != 0) goto joined_r0x8c23a628;
              iVar4 = FUN_8c25a8c0(ar4_00,iVar2 + 0x14,piVar6,ar7);
              if (-1 < iVar4) {
                *(undefined2 *)(iVar2 + 0x42) = 0;
                if (ain0 != 0) goto LAB_8c23a6a8;
                *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 1;
                goto LAB_8c23a734;
              }
            }
LAB_8c23a6de:
            *(short *)(iVar2 + 0x42) = -(short)iVar4;
            _DAT_8c4aa6ac = iVar1;
            _DAT_8c4aa6b0 = ar6_00;
            goto LAB_8c23a82a;
          }
        }
        else if (iVar2 == 2) {
          FUN_8c23a1b0(auStack_54,iVar4,piVar6,ar7);
          uVar5 = FUN_8c25a710(ar6_00,iVar4,piVar6,ar7);
          piVar6 = (int *)0x2c;
          FUN_8c23c814(uVar5,auStack_54,0x2c,ar7);
          uVar3 = *(uint *)(ar4_00 + 4) & 0xa0000000;
          if (uVar3 == 0) {
            iStack_68 = FUN_8c25a914(ar4_00,uVar5,piVar6,ar7);
            if (-1 < iStack_68) {
              ar7 = 2;
              FUN_8c25a380(ar4_00 + 8,uVar5,ar6_00,2,ar7_00);
              *(undefined2 *)(*ar4_01 + 0x42) = 0;
              piVar6 = ar6_00;
joined_r0x8c23a79c:
              if (ain0 != 0) {
                *(uint *)(*ar4_01 + 0x10) = *(uint *)(*ar4_01 + 0x10) | 8;
              }
              goto LAB_8c23a852;
            }
          }
          else if (uVar3 == 0x80000000) {
            iStack_68 = FUN_8c25a8c0(ar4_00,uVar5,piVar6,ar7);
            if (-1 < iStack_68) {
              ar7 = 1;
              FUN_8c25a380(ar4_01,uVar5,ar6_00,1,ar7_00);
              piVar6 = ar6_00;
              goto LAB_8c23a7c0;
            }
          }
          else {
            if (uVar3 != 0x20000000) goto LAB_8c23a852;
            iStack_68 = FUN_8c25a914(ar4_00,uVar5,piVar6,ar7);
            if (-1 < iStack_68) {
              iStack_68 = FUN_8c25a8c0(ar4_00,uVar5,piVar6,ar7);
              if (iStack_68 < 0) {
                FUN_8c25a380(ar4_01,uVar5,ar6_00,2,ar7_00);
                goto LAB_8c23a816;
              }
              ar7 = 3;
              FUN_8c25a380(ar4_01,uVar5,ar6_00,3,ar7_00);
              *(undefined2 *)(*ar4_01 + 0x42) = 0;
              piVar6 = ar6_00;
              goto joined_r0x8c23a79c;
            }
          }
          FUN_8c25a380(ar4_01,uVar5,ar6_00,0,ar7_00);
          goto LAB_8c23a816;
        }
LAB_8c23a852:
        iStack_5c = iStack_5c + 1;
      } while (iStack_5c < sStack_22);
    }
    uVar5 = 1;
  }
  else {
    _DAT_8c4aa6b4 = 4;
LAB_8c23a82a:
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* FUN_8c23bbac @ 8c23bbac callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23bbf4) */
/* WARNING: Removing unreachable block (ram,0x8c23bbe8) */
/* WARNING: Removing unreachable block (ram,0x8c23bc02) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c23bbac(double *ar4,undefined4 ar5,float *ar6,int ar7)

{
  double *ar4_00;
  int ar7_00;
  float in_fr3;
  float fVar1;
  double dVar2;
  undefined8 in_xd2;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 ar4_01;
  double adStack_3c [4];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  _DAT_8c4ab278 = adStack_3c;
  ar7_00 = ar7;
  _DAT_8c4ab27c = ar5;
  _DAT_8c4ab280 = ar6;
  ar4_01 = ar5;
  uStack_10 = in_PR;
  FUN_8c23ba30(_DAT_8c4ab278,ar5,ar6,ar7);
  ar4_00 = _DAT_8c4ab278 + 2;
  FUN_8c23ba30(ar4_00,ar5,ar6,ar7_00);
  if (ar7 != 0) {
    if (in_FPSCR_SZ == '\0') {
      in_fr3 = *_DAT_8c4ab280;
    }
    else {
      in_xd2 = *(undefined8 *)_DAT_8c4ab280;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar1 = _DAT_8c4ab280[1];
      fStack_1c = -in_fr3;
    }
    else {
      fStack_1c = (float)in_xd2;
      in_xd2 = *(undefined8 *)(_DAT_8c4ab280 + 1);
      fVar1 = -in_fr3;
    }
    if (in_FPSCR_SZ == '\0') {
      fStack_14 = _DAT_8c4ab280[2];
      fStack_18 = -fVar1;
    }
    else {
      fStack_18 = (float)in_xd2;
      in_xd2 = *(undefined8 *)(_DAT_8c4ab280 + 2);
      fStack_14 = -fVar1;
    }
    _DAT_8c4ab280 = &fStack_1c;
    fStack_14 = -fStack_14;
    if (in_FPSCR_SZ != '\0') {
      fStack_14 = (float)in_xd2;
      uStack_10 = (undefined4)((ulonglong)in_xd2 >> 0x20);
    }
  }
  FUN_8c23ba42(ar4_00,ar5,ar6,ar7_00);
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)_DAT_8c4ab278,_DAT_8c4c11b0);
  }
  else {
    dVar2 = *_DAT_8c4ab278;
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) + SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 + dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)_DAT_8c4ab278 = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *_DAT_8c4ab278 = dVar2;
  }
  FUN_8c23ba9c(ar4_01,ar5,ar6,ar7_00,ar4_01);
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)_DAT_8c4ab278);
  }
  else {
    dVar2 = *ar4;
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)ar4 = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *ar4 = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),*(undefined4 *)((int)_DAT_8c4ab278 + 4));
  }
  else {
    dVar2 = *(double *)((int)ar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)ar4 + 4) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *(double *)((int)ar4 + 4) = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),*(undefined4 *)(_DAT_8c4ab278 + 1));
  }
  else {
    dVar2 = ar4[1];
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 1) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    ar4[1] = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0xc),
                             *(undefined4 *)((int)_DAT_8c4ab278 + 0xc));
  }
  else {
    dVar2 = *(double *)((int)ar4 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)ar4 + 0xc) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *(double *)((int)ar4 + 0xc) = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x14),
                             *(undefined4 *)((int)_DAT_8c4ab278 + 0x14));
  }
  else {
    dVar2 = *(double *)((int)ar4 + 0x14);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)ar4 + 0x14) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *(double *)((int)ar4 + 0x14) = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 3),*(undefined4 *)(_DAT_8c4ab278 + 3));
  }
  else {
    dVar2 = ar4[3];
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 3) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    ar4[3] = dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x1c),
                             *(undefined4 *)((int)_DAT_8c4ab278 + 0x1c));
  }
  else {
    dVar2 = *(double *)((int)ar4 + 0x1c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) * SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)ar4 + 0x1c) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *(double *)((int)ar4 + 0x1c) = dVar2;
  }
  return 0xc;
}



/* FUN_8c23c4cc @ 8c23c4cc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c23c4cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  uint unaff_r10;
  int unaff_r11;
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 extraout_fr1;
  float extraout_fr0;
  float fVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_xd2;
  undefined8 uVar8;
  undefined8 in_xd14;
  undefined4 in_PR;
  int iVar9;
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
  *(undefined4 *)(puVar3 + -4) = in_PR;
  iVar1 = *(int *)(ain0 + unaff_r11);
  uVar7 = 0x3f800000;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    iVar2 = *(int *)(*(int *)(iVar1 * 4 + unaff_r11) * 4 + -0x73b3ee20);
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(_DAT_8c4c11a4,*(undefined4 *)(iVar2 + 200));
    }
    else {
      in_xd2 = *(undefined8 *)(iVar2 + 200);
      dVar5 = (double)CONCAT44(_DAT_8c4c11a8,_DAT_8c4c11a4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0xf8) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11a8,*(undefined4 *)(iVar2 + 0xcc));
    }
    else {
      *(double *)(iVar2 + 0xf8) = dVar5;
      in_xd2 = *(undefined8 *)(iVar2 + 0xcc);
      dVar5 = (double)CONCAT44(_DAT_8c4c11ac,_DAT_8c4c11a8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0xfc) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11ac,*(undefined4 *)(iVar2 + 0xd0));
    }
    else {
      *(double *)(iVar2 + 0xfc) = dVar5;
      in_xd2 = *(undefined8 *)(iVar2 + 0xd0);
      dVar5 = (double)CONCAT44(_DAT_8c4c11b0,_DAT_8c4c11ac);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x100) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11b4,*(undefined4 *)(iVar2 + 0xd8));
    }
    else {
      *(double *)(iVar2 + 0x100) = dVar5;
      in_xd2 = *(undefined8 *)(iVar2 + 0xd8);
      dVar5 = (double)CONCAT44(_DAT_8c4c11b8,_DAT_8c4c11b4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x108) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11b8,*(undefined4 *)(iVar2 + 0xdc));
    }
    else {
      *(double *)(iVar2 + 0x108) = dVar5;
      in_xd2 = *(undefined8 *)(iVar2 + 0xdc);
      dVar5 = (double)CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x10c) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11bc,*(undefined4 *)(iVar2 + 0xe0));
    }
    else {
      *(double *)(iVar2 + 0x10c) = dVar5;
      in_xd2 = *(undefined8 *)(iVar2 + 0xe0);
      dVar5 = (double)CONCAT44(_DAT_8c4c11c0,_DAT_8c4c11bc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x110) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11c4,*(undefined4 *)(iVar2 + 0xe8));
    }
    else {
      *(double *)(iVar2 + 0x110) = dVar5;
      in_xd2 = *(undefined8 *)(iVar2 + 0xe8);
      dVar5 = (double)CONCAT44(_DAT_8c4c11c8,_DAT_8c4c11c4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x118) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11c8,*(undefined4 *)(iVar2 + 0xec));
    }
    else {
      *(double *)(iVar2 + 0x118) = dVar5;
      in_xd2 = *(undefined8 *)(iVar2 + 0xec);
      dVar5 = (double)CONCAT44(_DAT_8c4c11cc,_DAT_8c4c11c8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar2 + 0x11c) = (int)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(_DAT_8c4c11cc,*(undefined4 *)(iVar2 + 0xf0));
      uVar8 = in_xd2;
    }
    else {
      *(double *)(iVar2 + 0x11c) = dVar5;
      uVar8 = *(undefined8 *)(iVar2 + 0xf0);
      dVar5 = (double)CONCAT44(_DAT_8c4c11d0,_DAT_8c4c11cc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    uVar6 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar2 + 0x120) = uVar6;
      *(undefined4 *)(iVar2 + 0x114) = *(undefined4 *)(iVar2 + 0xe4);
      dVar5 = (double)CONCAT44(uVar6,_DAT_8c4c11d0);
    }
    else {
      *(double *)(iVar2 + 0x120) = dVar5;
      *(undefined8 *)(iVar2 + 0x114) = *(undefined8 *)(iVar2 + 0xe4);
      uVar8 = CONCAT44(uRam8c4c11d4,_DAT_8c4c11d0);
    }
    if (in_FPSCR_PR == '\0') {
      iVar9 = (int)SUB84(dVar5,0);
    }
    else {
      iVar9 = (int)dVar5;
    }
    *(int *)(iVar2 + 0x88) = iVar9;
    ain0 = 0x124;
    in_xd2 = uVar8;
    if ((*(uint *)(iVar2 + 0x124) & unaff_r10) != 0) {
      FUN_8c23a8d8(*(undefined4 *)(iVar2 + 0x88),ar5,ar6,ar7,*(undefined4 *)(puVar3 + -4));
      in_xd2 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),uVar7);
        in_xd2 = uVar8;
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) / extraout_fr0;
      }
      else {
        fVar4 = SUB84(dVar5 / (double)CONCAT44(extraout_fr0,extraout_fr1),0);
      }
      ain0 = 0x80;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(iVar2 + 0x80) = fVar4;
      }
      else {
        *(undefined8 *)(iVar2 + 0x80) = in_xd2;
      }
    }
  }
  return ain0;
}



/* FUN_8c242234 @ 8c242234 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c242458) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c242234(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  double *unaff_r8;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  double in_dr0;
  float fVar12;
  double dVar13;
  float fVar15;
  uint uVar16;
  undefined8 uVar14;
  double in_dr4;
  undefined4 uVar18;
  double dVar17;
  undefined4 uVar19;
  float in_fr13;
  undefined4 in_fr12;
  double in_dr14;
  float fVar20;
  double in_xd2;
  double in_xd12;
  undefined8 in_xd14;
  bool bVar21;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [4];
  undefined8 uStack_20;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_20);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_20._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar11 = auStack_24;
  }
  else {
    puVar11 = auStack_30;
    uStack_20 = in_xd14;
  }
  *(undefined4 *)(puVar11 + -4) = in_PR;
  *(undefined4 *)(puVar11 + -0x10) = ar4;
  noop_23d694(ar4,ar5,ar6,ar7,*(undefined4 *)(puVar11 + -0x14));
  iVar2 = _DAT_8c4aa510;
  puVar8 = *(ushort **)(*(int *)(puVar11 + -0x10) + 4);
  *(uint *)(puVar11 + -8) = (uint)*(ushort *)(*(int *)(puVar11 + -0x10) + 2);
  *(undefined4 *)(puVar11 + -0xc) = 0;
  *(undefined4 *)(puVar11 + -0x10) = 0;
  do {
    uVar19 = SUB84(in_dr14,0);
    uVar1 = *puVar8;
    puVar9 = puVar8 + 1;
    *(uint *)(puVar11 + -0x14) = (uint)uVar1;
    if (in_FPSCR_SZ == '\0') {
      uVar19 = 0x3f800000;
    }
    if ((uVar1 & 0x8000) != 0) {
      if (in_FPSCR_PR == '\0') {
        uVar18 = 0xbf800000;
      }
      else {
        uVar18 = (undefined4)((ulonglong)-(double)CONCAT44(0x3f800000,SUB84(in_dr4,0)) >> 0x20);
      }
      *(uint *)(puVar11 + -0x14) = *(uint *)(puVar11 + -0x14) & 0x7fff;
      if (in_FPSCR_SZ == '\0') {
        uVar19 = uVar18;
      }
    }
    *(int *)(puVar11 + -0x10) = *(int *)(puVar11 + -0x10) + *(int *)(puVar11 + -0x14);
    *(int *)(puVar11 + -0x14) = *(int *)(puVar11 + -0x14) + -2;
    puVar10 = puVar8 + 2;
    puVar8 = puVar8 + 3;
    pdVar5 = (double *)((uint)*puVar10 * 0x40 + iVar2);
    pdVar4 = (double *)((uint)*puVar9 * 0x40 + iVar2);
    pdVar6 = unaff_r8;
    if (in_FPSCR_SZ == '\0') {
      in_fr13 = *(float *)((int)pdVar5 + 4);
      in_dr14 = (double)CONCAT44(*(undefined4 *)(pdVar5 + 1),uVar19);
      in_dr4 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),*(undefined4 *)(pdVar4 + 1));
    }
    else {
      in_xd12 = *(double *)((int)pdVar5 + 4);
      in_dr4 = *(double *)((int)pdVar4 + 4);
      in_dr14 = pdVar5[1];
    }
    do {
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
      pdVar7 = (double *)((uint)uVar1 * 0x40 + iVar2);
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 1),in_fr13);
      }
      else {
        dVar13 = pdVar7[1];
        in_xd2 = in_xd12;
      }
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                                  SUB84(dVar13,0) - (float)((ulonglong)in_dr4 >> 0x20));
      }
      else {
        dVar13 = dVar13 - in_dr4;
      }
      fVar20 = (float)((ulonglong)in_dr14 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) - fVar20,SUB84(dVar13,0));
      }
      else {
        dVar13 = dVar13 - in_dr14;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)((int)pdVar7 + 4))
        ;
      }
      if (in_FPSCR_PR == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - in_fr13);
        fVar12 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        in_dr0 = in_dr0 - (double)CONCAT44(in_fr12,in_fr13);
        fVar12 = SUB84(dVar13 * dVar13,0);
      }
      dVar13 = in_dr14;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(fVar20,fVar12);
      }
      fVar12 = SUB84(in_dr0,0);
      if (in_FPSCR_PR == '\0') {
        fVar15 = ((float)((ulonglong)dVar13 >> 0x20) - SUB84(in_dr4,0)) * fVar12;
        dVar13 = (double)CONCAT44(fVar15,SUB84(dVar13,0) - fVar15);
      }
      else {
        dVar13 = (dVar13 - in_dr4) * in_dr0;
        dVar13 = dVar13 - dVar13;
      }
      dVar17 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(SUB84(dVar13,0),SUB84(in_dr4,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(in_dr14,0),
                                  SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 * in_dr14;
      }
      uVar16 = (uint)((ulonglong)dVar13 >> 0x20);
      fVar15 = (float)((ulonglong)dVar17 >> 0x20);
      if (pdVar6 < unaff_r8) {
        if (in_FPSCR_PR == '\0') {
          bVar21 = fVar15 < 0.0;
        }
        else {
          bVar21 = dVar17 < (double)((ulonglong)uVar16 << 0x20);
        }
        if (bVar21) {
          *(undefined4 *)pdVar5 = 0xe0000000;
          CacheBlockWriteBack(pdVar5);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar5 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)pdVar5 + 0x24) = _DAT_8c4c11b4;
            uVar19 = _DAT_8c4c11b8;
            *(undefined4 *)(pdVar5 + 5) = _DAT_8c4c11b8;
            uVar14 = CONCAT44(_DAT_8c4c11bc,uVar19);
            *(undefined4 *)((int)pdVar5 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            pdVar5[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)pdVar5 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            pdVar5[5] = _DAT_8c4c11c0;
            uVar14 = _DAT_8c4c11c8;
            *(undefined8 *)((int)pdVar5 + 0x2c) = _DAT_8c4c11c8;
          }
          uVar19 = (undefined4)uVar14;
          CacheBlockWriteBack((undefined4 *)((int)pdVar5 + 0x2c));
LAB_8c242424:
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(in_dr0,0));
            dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),uVar19);
            pdVar4 = pdVar5 + 1;
          }
          else {
            in_dr0 = *pdVar5;
            dVar13 = pdVar5[1];
            pdVar4 = pdVar5 + 2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar19 = *(undefined4 *)(pdVar4 + 2);
            dVar17 = (double)CONCAT44(uVar19,SUB84(dVar17,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar4 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar19;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar13 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar17 = pdVar4[2];
            unaff_r8[3] = pdVar4[3];
            unaff_r8[2] = dVar17;
            unaff_r8[1] = dVar13;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          *(undefined4 *)pdVar5 = 0xf0000000;
          CacheBlockWriteBack(pdVar5);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar5 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)pdVar5 + 0x24) = _DAT_8c4c11b4;
            uVar19 = _DAT_8c4c11b8;
            *(undefined4 *)(pdVar5 + 5) = _DAT_8c4c11b8;
            uVar14 = CONCAT44(_DAT_8c4c11bc,uVar19);
            *(undefined4 *)((int)pdVar5 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            pdVar5[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)pdVar5 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            pdVar5[5] = _DAT_8c4c11c0;
            uVar14 = _DAT_8c4c11c8;
            *(undefined8 *)((int)pdVar5 + 0x2c) = _DAT_8c4c11c8;
          }
          CacheBlockWriteBack((undefined4 *)((int)pdVar5 + 0x2c));
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar12);
            dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),(int)uVar14);
            pdVar4 = pdVar5 + 1;
          }
          else {
            in_dr0 = *pdVar5;
            dVar13 = pdVar5[1];
            pdVar4 = pdVar5 + 2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar19 = *(undefined4 *)(pdVar4 + 2);
            dVar17 = (double)CONCAT44(uVar19,SUB84(dVar17,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar4 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar19;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar13 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar17 = pdVar4[2];
            unaff_r8[3] = pdVar4[3];
            unaff_r8[2] = dVar17;
            unaff_r8[1] = dVar13;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          *(int *)(puVar11 + -0xc) = (int)unaff_r8 + *(int *)(puVar11 + -0xc) + (0x20 - (int)pdVar6)
          ;
          pdVar6 = unaff_r8;
        }
      }
      else {
        if (in_FPSCR_PR == '\0') {
          bVar21 = fVar15 < 0.0;
        }
        else {
          bVar21 = dVar17 < (double)((ulonglong)uVar16 << 0x20);
        }
        if (bVar21) {
          *(undefined4 *)pdVar4 = 0xe0000000;
          CacheBlockWriteBack(pdVar4);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar4 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)pdVar4 + 0x24) = _DAT_8c4c11b4;
            uVar19 = _DAT_8c4c11b8;
            *(undefined4 *)(pdVar4 + 5) = _DAT_8c4c11b8;
            uVar14 = CONCAT44(_DAT_8c4c11bc,uVar19);
            *(undefined4 *)((int)pdVar4 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            pdVar4[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)pdVar4 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            pdVar4[5] = _DAT_8c4c11c0;
            uVar14 = _DAT_8c4c11c8;
            *(undefined8 *)((int)pdVar4 + 0x2c) = _DAT_8c4c11c8;
          }
          CacheBlockWriteBack((undefined4 *)((int)pdVar4 + 0x2c));
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar12);
            dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),(int)uVar14);
            pdVar4 = pdVar4 + 1;
          }
          else {
            in_dr0 = *pdVar4;
            dVar13 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar19 = *(undefined4 *)(pdVar4 + 2);
            dVar17 = (double)CONCAT44(uVar19,SUB84(dVar17,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar4 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar19;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar13 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar17 = pdVar4[2];
            unaff_r8[3] = pdVar4[3];
            unaff_r8[2] = dVar17;
            unaff_r8[1] = dVar13;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)pdVar5 = 0xe0000000;
          CacheBlockWriteBack(pdVar5);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar5 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)pdVar5 + 0x24) = _DAT_8c4c11b4;
            uVar19 = _DAT_8c4c11b8;
            *(undefined4 *)(pdVar5 + 5) = _DAT_8c4c11b8;
            uVar14 = CONCAT44(_DAT_8c4c11bc,uVar19);
            *(undefined4 *)((int)pdVar5 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            pdVar5[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)pdVar5 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            pdVar5[5] = _DAT_8c4c11c0;
            uVar14 = _DAT_8c4c11c8;
            *(undefined8 *)((int)pdVar5 + 0x2c) = _DAT_8c4c11c8;
          }
          uVar19 = (undefined4)uVar14;
          CacheBlockWriteBack((undefined4 *)((int)pdVar5 + 0x2c));
          goto LAB_8c242424;
        }
      }
      in_dr4 = in_xd12;
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = (double)CONCAT44(in_fr13,SUB84(dVar17,0));
      }
      iVar3 = *(int *)(puVar11 + -0x14);
      if (in_FPSCR_SZ == '\0') {
        in_fr13 = *(float *)((int)pdVar7 + 4);
      }
      else {
        in_xd12 = *(double *)((int)pdVar7 + 4);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),fVar20);
        dVar13 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 1),SUB84(in_dr14,0));
      }
      else {
        dVar13 = pdVar7[1];
      }
      in_dr14 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),-SUB84(dVar13,0));
      *(int *)(puVar11 + -0x14) = iVar3 + -1;
      pdVar4 = pdVar5;
      pdVar5 = pdVar7;
    } while (iVar3 + -1 != 0);
    if (pdVar6 < unaff_r8) {
      *(undefined4 *)pdVar7 = 0xf0000000;
      CacheBlockWriteBack(pdVar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(pdVar7 + 4) = _DAT_8c4c11b0;
        *(undefined4 *)((int)pdVar7 + 0x24) = _DAT_8c4c11b4;
        uVar19 = _DAT_8c4c11b8;
        *(undefined4 *)(pdVar7 + 5) = _DAT_8c4c11b8;
        uVar14 = CONCAT44(_DAT_8c4c11bc,uVar19);
        *(undefined4 *)((int)pdVar7 + 0x2c) = _DAT_8c4c11bc;
      }
      else {
        pdVar7[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
        *(ulonglong *)((int)pdVar7 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
        in_xd2 = _DAT_8c4c11c0;
        pdVar7[5] = _DAT_8c4c11c0;
        uVar14 = _DAT_8c4c11c8;
        *(undefined8 *)((int)pdVar7 + 0x2c) = _DAT_8c4c11c8;
      }
      CacheBlockWriteBack((undefined4 *)((int)pdVar7 + 0x2c));
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(in_dr0,0));
        dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),(int)uVar14);
        pdVar7 = pdVar7 + 1;
      }
      else {
        in_dr0 = *pdVar7;
        dVar13 = pdVar7[1];
        pdVar7 = pdVar7 + 2;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar19 = *(undefined4 *)(pdVar7 + 2);
        in_dr4 = (double)CONCAT44(uVar19,SUB84(in_dr4,0));
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar19;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar13 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar7[2];
        unaff_r8[3] = pdVar7[3];
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = dVar13;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
      *(int *)(puVar11 + -0xc) = (int)unaff_r8 + *(int *)(puVar11 + -0xc) + (0x20 - (int)pdVar6);
    }
    iVar3 = *(int *)(puVar11 + -8);
    *(int *)(puVar11 + -8) = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + (*(uint *)(puVar11 + -0xc) >> 5);
      _DAT_8c4aa51c = _DAT_8c4aa51c + *(int *)(puVar11 + -0x10);
      return 8;
    }
  } while( true );
}



/* FUN_8c253d20 @ 8c253d20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c253d20(undefined4 ar4,uint ar5,uint ar6,uint ar7)

{
  uint uVar1;
  uint *unaff_r14;
  undefined4 in_PR;
  
  do {
    uVar1 = *unaff_r14 & 7;
    if (uVar1 == 0) {
      FUN_8c256328(0,ar5,ar6,ar7);
      FUN_8c25b5d0(0,ar5,ar6,ar7,in_PR);
      if ((*unaff_r14 & 0x20) == 0) {
        ar5 = unaff_r14[5];
        ar7 = unaff_r14[7];
        ar6 = unaff_r14[6];
        FUN_8c256b0c(0,ar5,ar6,ar7,in_PR);
      }
      else {
        ar5 = unaff_r14[5];
        ar6 = unaff_r14[6];
        ar7 = unaff_r14[7];
        FUN_8c256e18(0,ar5,ar6,ar7);
      }
      FUN_8c256fec(0,ar5,ar6,ar7);
      if ((*unaff_r14 & 8) == 0) {
        FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
      }
      if ((*unaff_r14 & 0x10) == 0) {
        FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
      }
LAB_8c253fa8:
      uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
    }
    else {
      if (uVar1 == 1) {
        FUN_8c256328(0,ar5,ar6,ar7);
        if ((*unaff_r14 & 0x20) == 0) {
          ar5 = unaff_r14[5];
          ar7 = unaff_r14[7];
          ar6 = unaff_r14[6];
          FUN_8c256b0c(0,ar5,ar6,ar7,in_PR);
        }
        else {
          ar5 = unaff_r14[5];
          ar6 = unaff_r14[6];
          ar7 = unaff_r14[7];
          FUN_8c256e18(0,ar5,ar6,ar7);
        }
        FUN_8c256fec(0,ar5,ar6,ar7);
        if ((*unaff_r14 & 8) == 0) {
          FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 0x10) == 0) {
          FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 2) {
        FUN_8c256328(0,ar5,ar6,ar7);
        FUN_8c25b5d0(0,ar5,ar6,ar7,in_PR);
        FUN_8c256fec(0,ar5,ar6,ar7);
        if ((*unaff_r14 & 8) == 0) {
          FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 0x10) == 0) {
          FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 3) {
        FUN_8c256328(0,ar5,ar6,ar7);
        FUN_8c256fec(0,ar5,ar6,ar7);
        if ((*unaff_r14 & 8) == 0) {
          FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 0x10) == 0) {
          FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 4) {
        FUN_8c256328(0,ar5,ar6,ar7);
        FUN_8c25b5d0(0,ar5,ar6,ar7,in_PR);
        if ((*unaff_r14 & 0x20) == 0) {
          ar5 = unaff_r14[5];
          ar7 = unaff_r14[7];
          ar6 = unaff_r14[6];
          FUN_8c256b0c(0,ar5,ar6,ar7,in_PR);
        }
        else {
          ar5 = unaff_r14[5];
          ar6 = unaff_r14[6];
          ar7 = unaff_r14[7];
          FUN_8c256e18(0,ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 8) == 0) {
          FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 0x10) == 0) {
          FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 5) {
        FUN_8c256328(0,ar5,ar6,ar7);
        if ((*unaff_r14 & 0x20) == 0) {
          ar5 = unaff_r14[5];
          ar7 = unaff_r14[7];
          ar6 = unaff_r14[6];
          FUN_8c256b0c(0,ar5,ar6,ar7,in_PR);
        }
        else {
          ar5 = unaff_r14[5];
          ar6 = unaff_r14[6];
          ar7 = unaff_r14[7];
          FUN_8c256e18(0,ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 8) == 0) {
          FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 0x10) == 0) {
          FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 6) {
        FUN_8c256328(0,ar5,ar6,ar7);
        FUN_8c25b5d0(0,ar5,ar6,ar7,in_PR);
        if ((*unaff_r14 & 8) == 0) {
          FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 0x10) == 0) {
          FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 7) {
        uVar1 = *unaff_r14;
        if ((uVar1 & 8) == 0) {
          uVar1 = FUN_8c254026(unaff_r14[1],ar5,ar6,ar7);
        }
        if ((*unaff_r14 & 0x10) == 0) {
          uVar1 = FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7);
        }
      }
    }
    unaff_r14 = (uint *)unaff_r14[0xc];
    if (unaff_r14 == (uint *)0x0) {
      return uVar1;
    }
  } while( true );
}



/* FUN_8c254026 @ 8c254026 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c254026(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r8;
  
  uVar1 = FUN_8c2536a8(ar4,ar5,ar6,ar7,unaff_r8);
  return uVar1;
}



/* FUN_8c256164 @ 8c256164 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c256164(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *a4;
  int *ar5_00;
  int a5;
  int in_stack_ffffffdc;
  int iStack_1c;
  byte bStack_18;
  short sStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  
  a4 = (int *)&stack0xffffffdc;
  ar5_00 = ar5;
  FUN_8c25b5b4(ar4,ar5,ar6,ar7,in_stack_ffffffdc);
  iVar1 = FUN_8c259be8(ar4,ar5_00,ar6,ar7);
  if (-1 < iVar1) {
    a5 = 4;
    iVar1 = FUN_8c259c48(&stack0xffffffdc,4,ar6,ar7);
    if (-1 < iVar1) {
      if (in_stack_ffffffdc != 0x4c505650) {
        FUN_8c259c40(a4,a5,ar6,ar7);
        return 0xffffffff;
      }
      a5 = 0xc;
      a4 = &iStack_1c;
      iVar1 = FUN_8c259c48(a4,0xc,ar6,ar7);
      if (-1 < iVar1) {
        FUN_8c255f88((int)sStack_16,a5,ar6,ar7);
        a5 = iStack_1c + -8;
        a4 = (int *)*ar5;
        iVar1 = FUN_8c259c48(a4,a5,ar6,ar7);
        if (-1 < iVar1) {
          *(short *)((int)ar5 + 6) = sStack_16;
          *(undefined2 *)(ar5 + 2) = uStack_14;
          *(undefined2 *)((int)ar5 + 10) = uStack_12;
          *(ushort *)(ar5 + 1) = (ushort)bStack_18;
          FUN_8c259c40(a4,a5,ar6,ar7);
          return 1;
        }
      }
    }
    FUN_8c259c40(a4,a5,ar6,ar7);
  }
  return 0xffffffff;
}



/* FUN_8c2565d8 @ 8c2565d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c2565d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  int iVar1;
  uint uVar2;
  uint unaff_r8;
  uint unaff_r11;
  uint *a4;
  undefined4 in_PR;
  
  for (; unaff_r11 < DAT_8c277b0c; unaff_r11 = unaff_r11 + 1) {
    a4 = (uint *)(DAT_8c277b08 + ar4);
    if ((a4[4] & unaff_r8) != 0) {
      iVar1 = FUN_8c25a1ee(a4[6] >> 0x10 & 0xff00,ar5,ar6,ar7);
      FUN_8c2362de(a4[5],ar5,ar6,ar7,in_PR);
      if (iVar1 == 1) {
        ar6 = 0;
        ar5 = 1;
        FUN_8c25a674(*a4,1,0,ar7,in_PR);
      }
      else {
        uVar2 = a4[4];
        a4[4] = uVar2 & 0xfffffffe;
        if ((uVar2 & 0xfffffffe) == 0) {
          FUN_8c25a49e(a4,ar5,ar6,ar7);
        }
      }
    }
    ain0 = *a4;
    if ((ain0 != 0xffffffff) && (ain0 = a4[4], (ain0 & 3) == 0)) {
      ain0 = FUN_8c25a49e(a4,ar5,ar6,ar7);
    }
    ar4 = ar4 + 0x44;
  }
  return ain0;
}



/* FUN_8c25754c @ 8c25754c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c25754c(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  undefined *a4;
  code *pcVar3;
  uint ar6_00;
  code *pcVar4;
  
  iVar1 = ar5;
  ar6_00 = ar6;
  FUN_8c236454(ar4,ar5,ar6,ar7);
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x18),iVar1,ar6_00,ar7);
  FUN_8c2371be((int)*(short *)(*(int *)(ar4 + 0x1c) + ar5 * 0x14 + 0x10),iVar1,ar6_00,ar7);
  if ((ar6 & 0x20) == 0) {
    uVar2 = 0x80028;
    pcVar3 = FUN_8c236b3c;
  }
  else {
    uVar2 = 0x2100028;
    pcVar3 = FUN_8c236c38;
  }
  pcVar4 = pcVar3;
  FUN_8c237124(uVar2,pcVar3,ar6_00,ar7,pcVar3);
  a4 = &DAT_8c4aa52c;
  if ((ar6 & 2) == 0) {
    a4 = &DAT_8c271de8;
  }
  (*pcVar4)(a4,pcVar3,ar6_00,ar7);
  pcVar3 = FUN_8c257610;
  if ((ar6 & 0x10) == 0) {
    pcVar3 = FUN_8c2578ac;
  }
  iVar1 = (*pcVar3)(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    ar4 = ar4_00;
    FUN_8c2370dc(ar4_00,ar5,ar6,ar7);
  }
  uVar2 = FUN_8c2364b2(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c258e70 @ 8c258e70 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined1 * FUN_8c258e70(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined1 *ar4_00;
  uint unaff_r11;
  undefined4 in_PR;
  
  _DAT_8c4aad24 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  uVar1 = unaff_r11;
  if (_DAT_8c4aa6dc != 0) {
    while ((_DAT_8c4aa6d4 != 0 && (uVar1 < 0x28870))) {
      ar5 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
      ar4 = FUN_8c1f88f0(_DAT_8c4aad24,ar5,ar6,ar7);
      uVar1 = FUN_8c1f892a(ar4,ar5,ar6,ar7);
    }
    if (uVar1 < 0x28870) {
      FUN_8c258e50(ar4,ar5,ar6,ar7,in_PR);
    }
  }
  _DAT_8c4aa6d4 = 1;
  FUN_8c20b7a0(ar4,ar5,ar6,ar7);
  ar4_00 = &DAT_8c4aa540;
  _DAT_8c4aa540 = _DAT_8c4aa540 + 1;
  _DAT_8c4aa518 = unaff_r11;
  _DAT_8c4aa51c = unaff_r11;
  _DAT_8c4aa520 = unaff_r11;
  FUN_8c20b260(&DAT_8c4aa540,ar5,ar6,ar7);
  FUN_8c1f61c6(ar4_00,ar5,ar6,ar7,in_PR);
  _DAT_8c4aad28 = sh4_tmu_1f88e6(ar4_00,ar5,ar6,ar7);
  _DAT_8c4aa4f4 = *_DAT_8c4aabdc;
  _DAT_8c4aa4f8 = _DAT_8c4aabdc[1];
  _DAT_8c4aa4fc = _DAT_8c4aabdc[2];
  _DAT_8c4aa500 = _DAT_8c4aabdc[3];
  _DAT_8c4aa504 = _DAT_8c4aabdc[4];
  return &DAT_8c4aa4fc;
}



/* FUN_8c25a174 @ 8c25a174 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c25a174(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *ar4_00;
  undefined4 ar5_00;
  undefined4 ain0;
  undefined4 in_stack_ffffffe8;
  
  ar5_00 = ar5;
  ain0 = ar6;
  uVar1 = log_message(ar5,ar5,ar6,ar7);
  FUN_8c010998(uVar1,ar5_00,ar6,ar7,ain0,in_stack_ffffffe8);
  ar4_00 = &stack0xffffffe8;
  FUN_8c2033c0(ar4_00,ar5_00,ar6,ar7,ain0);
  uVar1 = ain0;
  if ((char)in_stack_ffffffe8 == '.') {
    ar4_00 = &stack0xffffffe8;
    iVar2 = FUN_8c0109e8(ar4_00,ain0,ar6,ar7);
    ar5_00 = ain0;
    if (iVar2 == 0) {
      FUN_8c010998(ar4_00,ain0,ar6,ar7,uVar1,in_stack_ffffffe8);
      FUN_8c01437c(ar4,ar5,ar6,ar7);
      return 1;
    }
  }
  FUN_8c010998(ar4_00,ar5_00,ar6,ar7,uVar1,in_stack_ffffffe8);
  FUN_8c01437c(ar4,ar5,ar6,ar7);
  FUN_8c01437c(ar4,uVar1,ar6,ar7);
  return 1;
}



/* FUN_8c25a770 @ 8c25a770 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c25a770(int ar4,int ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 a5;
  undefined1 *ar6_00;
  uint ar6_01;
  uint uVar5;
  int in_stack_ffffffc8;
  
  ar6_00 = &stack0xffffffc8;
  iVar1 = FUN_8c25af3c(ar5,*(undefined4 *)(ar4 + 4),&stack0xffffffc8,ar7);
  if (-1 < iVar1) {
    uVar5 = *(uint *)(ar5 + 0x18);
    uVar3 = in_stack_ffffffc8 - 8;
    if ((int)uVar5 < (int)uVar3) {
      iVar1 = uVar3 - uVar5;
      uVar3 = uVar5;
    }
    else {
      iVar1 = 0;
    }
    ar6_01 = 0;
    uVar5 = _DAT_8c4aa6d0;
    if (uVar3 <= _DAT_8c4aa6d0) {
      uVar5 = uVar3;
    }
    if (0 < (int)uVar3) {
      do {
        uVar4 = uVar5;
        iVar2 = FUN_8c259c48(_DAT_8c4aa6cc,uVar5,ar6_00,ar7);
        if (iVar2 < 0) {
          FUN_8c20cf88(ar5 + 4,uVar4,ar6_00,ar7);
          return 0xffffffff;
        }
        FUN_8c1f9e32(_DAT_8c4aa6cc,uVar5,ar6_00,ar7,iVar1);
        a5 = _DAT_8c4aa6cc;
        ar6_00 = (undefined1 *)ar6_01;
        ar7 = uVar5;
        FUN_8c25ab02(ar5 + 4,_DAT_8c4aa6cc,ar6_01,uVar5);
        ar6_01 = ar6_01 + uVar5;
        uVar4 = uVar3 - ar6_01;
        if (uVar4 < _DAT_8c4aa6d0) {
          uVar5 = uVar4;
        }
        do {
          iVar2 = FUN_8c20a7e0(uVar4,a5,ar6_00,ar7);
        } while (iVar2 != 0);
      } while (ar6_01 != uVar3);
    }
    if (0 < iVar1) {
      FUN_8c25a122(iVar1,1,ar6_00,ar7);
    }
    iVar1 = 1;
  }
  return iVar1;
}



/* FUN_8c25a838 @ 8c25a838 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c25a838(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  int ain0;
  undefined4 ar5_00;
  undefined1 *ar6_00;
  int in_stack_ffffffd8;
  
  ar6_00 = &stack0xffffffd8;
  ar5_00 = *(undefined4 *)(ar4 + 4);
  iVar1 = FUN_8c25afc0(ar5,ar5_00,&stack0xffffffd8,ar7);
  if (-1 < iVar1) {
    iVar1 = ar5[6];
    in_stack_ffffffd8 = in_stack_ffffffd8 + -8;
    if (iVar1 < in_stack_ffffffd8) {
      ain0 = in_stack_ffffffd8 - iVar1;
      in_stack_ffffffd8 = iVar1;
    }
    else {
      ain0 = 0;
    }
    ar4_00 = FUN_8c236278(in_stack_ffffffd8,ar5_00,ar6_00,ar7);
    if (ar4_00 == 0) {
      _DAT_8c4aa6b4 = 7;
      iVar1 = -7;
    }
    else {
      iVar1 = FUN_8c259c48(ar4_00,in_stack_ffffffd8,ar6_00,ar7);
      if (iVar1 < 0) {
        iVar1 = -5;
      }
      else {
        FUN_8c1f9e32(ar4_00,in_stack_ffffffd8,ar6_00,ar7,ain0);
        if (0 < ain0) {
          FUN_8c25a122(ain0,1,ar6_00,ar7);
        }
        iVar1 = 1;
        *ar5 = ar4_00;
      }
    }
  }
  return iVar1;
}



/* FUN_8c25a8c0 @ 8c25a8c0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c25a8c0(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  int *ar5_00;
  int ar6_00;
  undefined4 in_stack_ffffffe0;
  
  ar5_00 = ar5;
  iVar1 = FUN_8c25a962(ar5,ar5,ar6,ar7);
  if (-1 < iVar1) {
    iVar1 = ar5[6];
    ar4_00 = FUN_8c236278(iVar1,ar5_00,ar6,ar7);
    if (ar4_00 == 0) {
      _DAT_8c4aa6b4 = 7;
      iVar1 = -7;
    }
    else {
      ar6_00 = iVar1;
      FUN_8c23c814(ar4_00,*ar5,iVar1,ar7);
      FUN_8c1f9e32(ar4_00,iVar1,ar6_00,ar7,in_stack_ffffffe0);
      iVar1 = 1;
      *ar5 = ar4_00;
    }
  }
  return iVar1;
}



/* FUN_8c25b34a @ 8c25b34a callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c25b34a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c25a33c(ar4,ar5,ar6,ar7,in_PR);
  DAT_8c4aa5a8 = 0;
  DAT_8c277b24 = 2;
  DAT_8c277b28 = 0;
  _DAT_8c4ab10c = 0;
  _DAT_8c4ab110 = 0;
  _DAT_8c4ab114 = 0;
  _DAT_8c4ab118 = 0;
  _DAT_8c4ab11c = 0;
  _DAT_8c4ab120 = 0;
  _DAT_8c4ab124 = 0;
  _DAT_8c4ab128 = 0;
  return &DAT_8c277b28;
}



/* FUN_8c25b37c @ 8c25b37c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c25b37c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c2566c8(ar4,ar5,ar6,ar7,in_PR);
  uVar1 = FUN_8c2565c4(ar4,ar5,ar6,ar7,in_PR);
  _DAT_8c4ab10c = 0;
  _DAT_8c4ab110 = 0;
  _DAT_8c4ab114 = 0;
  _DAT_8c4ab118 = 0;
  _DAT_8c4ab11c = 0;
  _DAT_8c4ab120 = 0;
  _DAT_8c4ab124 = 0;
  _DAT_8c4ab128 = 0;
  return uVar1;
}



/* FUN_8c25b3a2 @ 8c25b3a2 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c25b3a2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint ar5_00;
  undefined4 in_PR;
  
  FUN_8c25b5b4(ar4,ar5,ar6,ar7,in_PR);
  if (*(int *)(ar4 + 4) == 0) {
    _DAT_8c4aa6b4 = 1;
    ar5_00 = _DAT_8c4aa6ac;
LAB_8c25b3d2:
    _DAT_8c4aa6ac = ar5_00;
    uVar2 = 0xffffffff;
  }
  else {
    for (ar5_00 = 0; ar5_00 < *(uint *)(ar4 + 4); ar5_00 = ar5_00 + 1) {
      iVar1 = FUN_8c23793c(ar4,ar5_00,ar6,ar7);
      if (iVar1 < 0) goto LAB_8c25b3d2;
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c25b4da @ 8c25b4da callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c25b4da(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  undefined4 in_stack_00000000;
  
  uVar1 = FUN_8c010998(ar4,ar5,ar6,ar7,in_PR,in_stack_00000000);
  return uVar1;
}



/* FUN_8c25e540 @ 8c25e540 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c25e6c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c25e540(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  undefined4 ar6_00;
  undefined4 a7;
  bool bVar2;
  undefined4 in_stack_fffffdec;
  undefined4 in_stack_fffffdf0;
  int aiStack_118 [13];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
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
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  aiStack_118[7] = 0x35f;
  aiStack_118[5] = 0x8d;
  aiStack_118[6] = 0x34b;
  uVar1 = 1;
  aiStack_118[0xb] = 0x3f;
  if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
    aiStack_118[10] = 0x138;
  }
  else {
    aiStack_118[10] = 0x270;
  }
  a7 = 0x42;
  ar6_00 = 0x16;
  if ((_DAT_8c4a9bcc & 0x42) == 0x42) {
    if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
      aiStack_118[8] = 0x16;
      aiStack_118[9] = 0x134;
    }
    else {
      aiStack_118[8] = 0x2c;
      aiStack_118[9] = 0x26c;
    }
    if ((_DAT_8c4a9bcc & 0x20) == 0) {
      uStack_90 = 0x136;
    }
    else {
      uStack_90 = 0x134;
    }
  }
  else {
    if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
      aiStack_118[8] = 0x16;
      aiStack_118[9] = 0x134;
    }
    else {
      aiStack_118[8] = 0x2c;
      aiStack_118[9] = 0x26c;
    }
    if ((_DAT_8c4a9bcc & 0x20) == 0) {
      uStack_90 = 0x136;
    }
    else {
      uStack_90 = 0x134;
    }
  }
  uStack_8c = 0x15;
  if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
    aiStack_118[0xc] = 3;
    uStack_e4 = 799;
    uStack_e0 = 0xf;
  }
  else {
    uStack_e4 = 0x16a;
    uStack_e0 = 0x1f;
    aiStack_118[0xc] = 5;
  }
  if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
    uStack_d4 = 0;
  }
  else {
    uStack_d4 = 1;
  }
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
    uStack_c0 = 2;
  }
  else {
    uStack_c0 = 0;
  }
  if (_DAT_8c4a9bac == 6) {
    uStack_94 = 0x16;
  }
  else {
    uStack_94 = 0x3f;
  }
  bVar2 = (_DAT_8c4a9bcc & 0x10) == 0;
  if (bVar2) {
    uStack_98 = 1;
  }
  else {
    uStack_98 = 0;
  }
  uStack_98 = (uint)bVar2;
  uStack_dc = 0;
  uStack_d8 = 1;
  uStack_bc = 1;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  ar5_00 = 0xf0;
  uStack_a0 = 0xf0;
  uStack_c = 0xae;
  if ((_DAT_8c4a9bcc & 0x42) == 0x42) {
    aiStack_118[0] = 0x2a;
    aiStack_118[1] = 0x26;
    aiStack_118[2] = 0x22;
    aiStack_118[3] = 0x1e;
    aiStack_118[4] = 0x1a;
    iStack_10 = aiStack_118[_DAT_8c4a9bdc];
    ar5_00 = iStack_10;
    if (((_DAT_8c4a9bcc & 1) != 1) && ((_DAT_8c4a9bcc & 0x2c) != 0)) {
      ar5_00 = iStack_10 + -1;
    }
    _DAT_8c4a9ecc =
         (int)(*(int *)(&DAT_8c4aa084 + _DAT_8c4a9bdc * 4) +
              (uint)(*(int *)(&DAT_8c4aa084 + _DAT_8c4a9bdc * 4) < 0)) >> 1;
    iStack_14 = ar5_00;
  }
  else {
    ar6_00 = 0x2e;
    if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
      iStack_14 = 0x2e;
    }
    else {
      iStack_14 = 0x2d;
    }
    iStack_10 = 0x2e;
    _DAT_8c4a9ecc = 0xf0;
  }
  _DAT_8c4a9ec4 = (aiStack_118[8] >> 1) + _DAT_8c4a9ecc;
  _DAT_8c4a9ec8 = aiStack_118[8];
  FUN_8c010838(1,ar5_00,ar6_00,0x42,in_stack_fffffdec,in_stack_fffffdf0);
  uVar1 = FUN_8c25e260(uVar1,ar5_00,ar6_00,a7);
  return uVar1;
}



/* FUN_8c25e884 @ 8c25e884 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c25e9d8) */
/* WARNING: Removing unreachable block (ram,0x8c25ea92) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c25e884(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  undefined4 in_stack_fffffe00;
  undefined4 in_stack_fffffe04;
  int iStack_f8;
  
  uVar1 = 1;
  a6 = 0x12;
  if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
    iStack_f8 = 0x12;
  }
  else {
    iStack_f8 = 0x24;
  }
  a7 = 0x1f;
  a5 = 0;
  _DAT_8c4a9ecc = 0xf0;
  _DAT_8c4a9ec4 = (iStack_f8 >> 1) + 0xf0;
  _DAT_8c4a9ec8 = iStack_f8;
  FUN_8c010838(1,0,0x12,0x1f,in_stack_fffffe00,in_stack_fffffe04);
  uVar1 = FUN_8c25e260(uVar1,a5,a6,a7);
  return uVar1;
}



/* FUN_8c25eb60 @ 8c25eb60 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c25eb60(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 in_stack_fffffe00;
  undefined4 in_stack_fffffe04;
  
  a5 = 0x28;
  a6 = 0x23;
  uVar1 = 0x1e0;
  _DAT_8c4a9ecc = 0x1e0;
  _DAT_8c4a9ec4 = 0x208;
  _DAT_8c4a9ec8 = 0x28;
  FUN_8c010838(0x1e0,0x28,0x23,ar7,in_stack_fffffe00,in_stack_fffffe04);
  uVar1 = FUN_8c25e260(uVar1,a5,a6,ar7);
  return uVar1;
}



/* FUN_8c25fbd0 @ 8c25fbd0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c25fbd0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined2 *ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined2 *ar4_01;
  
  iVar2 = 0;
  do {
    if (*(short *)(iVar2 * 0xac + -0x73b4cbc0) == 0) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  if (iVar2 != 8) {
    iVar2 = iVar2 * 0xac;
    ar6_00 = 0xac;
    ar4_01 = (undefined2 *)(iVar2 + -0x73b4cbc0);
    ar5_00 = 0;
    ar4_00 = ar4_01;
    ar7_00 = ar7;
    memset(ar4_01,0,0xac,ar7);
    *ar4_01 = 1;
    iVar1 = FUN_8c264eda(ar4_00,ar5_00,ar6_00,ar7_00);
    *(int *)(iVar2 + -0x73b4cbb8) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar2 + -0x73b4cb88) = ar4;
      *(undefined4 *)(iVar2 + -0x73b4cb84) = ar5;
      *(undefined4 *)(iVar2 + -0x73b4cb80) = ar6;
      *(undefined4 *)(iVar2 + -0x73b4cb7c) = ar7;
      *(undefined1 **)(iVar2 + -0x73b4cb38) = &LAB_8c25fba0;
      *(undefined2 **)(iVar2 + -0x73b4cb34) = ar4_01;
      *(undefined1 **)(iVar2 + -0x73b4cb30) = &LAB_8c25fbbe;
      *(undefined2 **)(iVar2 + -0x73b4cb2c) = ar4_01;
      return ar4_01;
    }
    FUN_8c25fc5c(ar4_01,ar5_00,ar6_00,ar7_00,ar5);
  }
  return 0;
}



/* FUN_8c25fc60 @ 8c25fc60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c25fc60(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined2 *unaff_r14;
  undefined4 in_PR;
  
  if (unaff_r14 != (undefined2 *)0x0) {
    FUN_8c264f6a(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7,in_PR);
    ain0 = memset(unaff_r14,0,0xac,ar7);
    *unaff_r14 = 0;
  }
  return ain0;
}



/* FUN_8c26014c @ 8c26014c callers=0 callees=0 */

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



/* FUN_8c26145e @ 8c26145e callers=0 callees=0 */

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



/* FUN_8c261ae2 @ 8c261ae2 callers=0 callees=0 */

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



/* FUN_8c26201c @ 8c26201c callers=0 callees=0 */

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



/* FUN_8c2620c8 @ 8c2620c8 callers=0 callees=0 */

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



/* FUN_8c26211c @ 8c26211c callers=0 callees=0 */

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



/* FUN_8c26216c @ 8c26216c callers=0 callees=0 */

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



/* s_E9040811_adxf_is_NULL_adxf_r_26220e @ 8c262208 callers=0 callees=0 */

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



/* FUN_8c2622e4 @ 8c2622e4 callers=0 callees=0 */

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



/* s_E9040816_adxf_is_NULL_ADXF_R_26231a @ 8c262312 callers=0 callees=0 */

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



/* s_E9040822_adxf_is_NULL_ADXF_S_262408 @ 8c262406 callers=0 callees=0 */

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



/* FUN_8c2624a0 @ 8c2624a0 callers=0 callees=0 */

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



/* FUN_8c262524 @ 8c262524 callers=0 callees=0 */

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



/* FUN_8c262814 @ 8c262814 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c262814(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 ar4_00;
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
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
    memset(&DAT_8c277fd0,0,0x4a0,ar7);
    ar4_00 = 0x900;
    ar7_00 = 0;
    ar5_00 = FUN_8c264010;
    ar6_00 = 0x70;
    DAT_8c278470 = FUN_8c1fa244(0x900,FUN_8c264010,0x70,0);
    ain0 = FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar7_00,in_PR);
  }
  *unaff_r14 = *unaff_r14 + 1;
  return ain0;
}



/* FUN_8c2628fa @ 8c2628fa callers=0 callees=0 */

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



/* FUN_8c262c08 @ 8c262c08 callers=0 callees=0 */

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



/* s_E8101210_can_t_open_s_ADXSTM_2632ee @ 8c2632ea callers=0 callees=0 */

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



/* FUN_8c26344a @ 8c26344a callers=0 callees=0 */

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



/* s_E8101214_GDFS_error_adxstmf__2635aa @ 8c2635a4 callers=0 callees=0 */

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



/* FUN_8c263702 @ 8c263702 callers=0 callees=0 */

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



/* FUN_8c2639fa @ 8c2639fa callers=0 callees=0 */

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



/* FUN_8c263b0c @ 8c263b0c callers=0 callees=0 */

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



/* FUN_8c263b34 @ 8c263b34 callers=0 callees=0 */

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



/* FUN_8c263bc8 @ 8c263bc8 callers=0 callees=0 */

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



/* FUN_8c263bfe @ 8c263bfe callers=0 callees=0 */

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



/* FUN_8c263c64 @ 8c263c64 callers=0 callees=0 */

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



/* s_E8101202_can_t_open_d_d_ADXT_26440a @ 8c264408 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_E8101202_can_t_open_d_d_ADXT_26440a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *ar7_00;
  int in_stack_ffffffe8;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar2 = ar4;
  uStack_10 = ar5;
  uStack_c = ar6;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  FUN_8c260ca0(iVar2,ar5,ar6,ar7,in_stack_ffffffe8);
  ar7_00 = &uStack_14;
  FUN_8c26270c(uStack_10,uStack_c,&stack0xffffffe8,ar7_00);
  uVar3 = *(undefined4 *)(ar4 + 0x10);
  iVar2 = in_stack_ffffffe8;
  iVar1 = s_E8101212_can_t_open_fad_d_ns_26338a(in_stack_ffffffe8,uStack_14,uVar3,ar7_00);
  *(int *)(ar4 + 8) = iVar1;
  if (iVar1 == 0) {
    FUN_8c260cc8(in_stack_ffffffe8,uStack_14,uVar3,ar7_00,iVar2);
    FUN_8c25ece6(in_stack_ffffffe8,uStack_14,uVar3,ar7_00,
                 "E8101202: can\'t open %d, %d (ADXT_StartAfs)\n",uStack_10);
    ar4 = in_stack_ffffffe8;
  }
  else {
    FUN_8c263bc0(ar4,uStack_14,uVar3,ar7_00);
  }
  uVar3 = FUN_8c260cc8(ar4,uStack_14,uVar3,ar7_00,iVar2);
  return uVar3;
}



/* s_E8101205_can_t_open_s_ADXT_S_26446e @ 8c26446c callers=0 callees=0 */

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



/* s_E8101207_can_t_create_sj_ADX_2644ba @ 8c2644b8 callers=0 callees=0 */

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



/* s_E8101207_can_t_create_sj_ADX_26450a @ 8c264504 callers=0 callees=0 */

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



/* FUN_8c2646fe @ 8c2646fe callers=0 callees=0 */

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



/* FUN_8c264ba0 @ 8c264ba0 callers=0 callees=0 */

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



/* FUN_8c264e88 @ 8c264e88 callers=0 callees=0 */

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



/* FUN_8c26501c @ 8c26501c callers=0 callees=0 */

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



/* aica_ram_2657ec @ 8c2657ec callers=0 callees=0 */

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



/* FUN_8c266d28 @ 8c266d28 callers=0 callees=0 */

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



/* FUN_8c267b30 @ 8c267b30 callers=0 callees=0 */

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



/* FUN_8c267f2c @ 8c267f2c callers=0 callees=0 */

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



/* FUN_8c2689c8 @ 8c2689c8 callers=0 callees=0 */

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



/* s_E1205_Illigal_parameter_MWRN_268d66 @ 8c268d64 callers=0 callees=0 */

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



/* s_E1205_Illigal_parameter_MWRN_2690dc @ 8c2690d8 callers=0 callees=0 */

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



/* s_E1205_Illigal_parameter_MWRN_269630 @ 8c26962c callers=0 callees=0 */

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



/* FUN_8c26b254 @ 8c26b254 callers=0 callees=0 */

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



/* FUN_8c26b568 @ 8c26b568 callers=0 callees=0 */

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


