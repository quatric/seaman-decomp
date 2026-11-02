/* Seaman (USA) region 0x8c0a0000-0x8c0b0000 (Ghidra decompiler) */

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



/* FUN_8c0a00f8 @ 8c0a00f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0a00f8(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  if ((*(int *)(ar4 + 0x38) == 2) && (*(int *)(ar4 + 0x6c) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 3) {
    iVar1 = FUN_8c0a0278(ar4,ar5,ar6_00,ar7);
  }
  else if ((((iVar1 != 6) && (iVar1 == 10)) &&
           (iVar1 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5_00,ar6_00,ar7),
           iVar1 != 0)) && (iVar1 == 1)) {
    iVar1 = 0x40;
    *(undefined4 *)(ar4 + 0x40) = 0xe;
  }
  return iVar1;
}



/* FUN_8c0a0184 @ 8c0a0184 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * FUN_8c0a0184(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(ar4 + 0x40);
  puVar1 = (undefined *)0xc;
  if ((iVar2 < 0xd) && (puVar1 = (undefined *)0x5, 4 < iVar2)) {
    puVar1 = (&switchD_8c0a01a0::switchdataD_8c0a01a4)[iVar2 + -5];
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    case 5:
      *(undefined4 *)(ar4 + 0x40) = 2;
      *(undefined4 *)(ar4 + 4) = 0;
      puVar1 = (undefined *)0x1e;
      *(undefined4 *)(ar4 + 8) = 0x1e;
      break;
    case 8:
      *(undefined4 *)(ar4 + 0x40) = 2;
      *(undefined4 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 8) = 0x1e;
      puVar1 = (undefined *)0x9c;
      *(int *)(ar4 + 0x9c) = *(int *)(ar4 + 0x9c) + 1;
      break;
    case 9:
      *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
      puVar1 = (undefined *)0xf;
      *(undefined4 *)(ar4 + 8) = 0xf;
      break;
    case 0xc:
      *(undefined1 *)(ar4 + 0x98) = 2;
      puVar1 = (undefined *)0xf;
      *(undefined4 *)(ar4 + 8) = 0xf;
    }
  }
  return puVar1;
}



/* FUN_8c0a0224 @ 8c0a0224 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0a0224(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  if (*(int *)(ar4 + 4) == 2) {
    get_field_8_066620(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0a0270;
  }
  else {
    get_field_8_066620(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0a0274;
  }
  return puVar1;
}



/* FUN_8c0a0278 @ 8c0a0278 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a045a) */
/* WARNING: Removing unreachable block (ram,0x8c0a048c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a0278(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *ar5_00;
  undefined4 uVar4;
  undefined4 *a6;
  undefined1 *ar6_00;
  undefined4 *a7;
  undefined4 *puVar5;
  float fVar6;
  ulonglong in_dr0;
  double dVar7;
  float fVar9;
  double dVar8;
  undefined4 in_fr3;
  undefined4 uVar10;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  undefined4 in_stack_ffffff28;
  undefined8 uStack_a0;
  undefined4 uStack_90;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 auStack_78 [4];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar12 = '\0';
  cVar11 = '\0';
  Vec3_ctor_zero(&uStack_20,ar5,ar6,ar7);
  a7 = &uStack_84;
  a6 = &uStack_80;
  puVar5 = &uStack_7c;
  (**(code **)(*ar5 + 0x120))(ar5,puVar5,a6,a7);
  iVar2 = ar4;
  iVar1 = get_field_4_05eed8(ar4,puVar5,a6,a7);
  if (iVar1 != 1) {
    if (iVar1 == 8) {
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(uStack_7c,in_fr3);
        dVar7 = (double)CONCAT44(0x3dcccccd,uStack_7c);
      }
      else {
        dVar8 = (double)CONCAT44(auStack_78[0],uStack_7c);
        dVar7 = 1.3411048210842936e-08;
      }
      if (cVar11 == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                                 SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 - dVar7 * dVar7;
      }
      uStack_7c = SUB84(dVar8,0);
      uVar3 = (undefined4)((ulonglong)dVar8 >> 0x20);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(uStack_80,uStack_7c);
        dVar7 = (double)CONCAT44(0x3e4ccccd,uStack_80);
        uStack_7c = uVar3;
      }
      else {
        dVar8 = (double)CONCAT44(uStack_7c,uStack_80);
        dVar7 = -7.532505548438758e-251;
        auStack_78[0] = uVar3;
      }
      if (cVar11 == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                                 SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 - dVar7 * dVar7;
      }
      uStack_80 = SUB84(dVar8,0);
      uVar3 = (undefined4)((ulonglong)dVar8 >> 0x20);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(uStack_84,uStack_80);
        dVar7 = (double)CONCAT44(0x3dcccccd,uStack_84);
        uStack_80 = uVar3;
      }
      else {
        dVar8 = (double)CONCAT44(uStack_80,uStack_84);
        dVar7 = 1.3411048210842936e-08;
        uStack_7c = uVar3;
      }
      if (cVar11 == '\0') {
        fVar9 = (float)((ulonglong)dVar7 >> 0x20);
        fVar6 = SUB84(dVar7,0) * fVar9;
        dVar7 = (double)CONCAT44(fVar9,fVar6);
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - fVar6,SUB84(dVar8,0));
      }
      else {
        dVar7 = dVar7 * dVar7;
        dVar8 = dVar8 - dVar7;
      }
      uVar3 = SUB84(dVar7,0);
      uVar4 = (undefined4)((ulonglong)dVar8 >> 0x20);
      uStack_84 = uVar4;
      if (cVar12 != '\0') {
        uStack_84 = SUB84(dVar8,0);
        uStack_80 = uVar4;
      }
      uVar4 = rand(iVar2,puVar5,a6,a7);
      uVar10 = SUB84(dVar8,0);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(uStack_7c,uVar3);
      }
      else {
        dVar8 = (double)CONCAT44(auStack_78[0],uStack_7c);
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        iVar2 = (int)dVar8;
      }
      iVar1 = libgcc_divide_helper_01031c(uVar4,iVar2,a6,a7);
      if (cVar11 == '\0') {
        dVar8 = (double)CONCAT44((float)iVar1,SUB84(dVar8,0));
      }
      else {
        dVar8 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x28) = (int)((ulonglong)dVar8 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x28) = dVar8;
      }
      uVar3 = rand(uVar4,iVar2,a6,a7);
      (**(code **)(*ar5 + 0x180))(ar5,iVar2,a6,a7);
      if (cVar12 == '\0') {
        uStack_a0 = (double)CONCAT44(uVar3,(int)((ulonglong)dVar8 >> 0x20));
        dVar7 = (double)CONCAT44(uStack_80,SUB84(dVar8,0));
      }
      else {
        dVar7 = (double)CONCAT44(uStack_7c,uStack_80);
        uStack_a0 = dVar8;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        iVar2 = (int)dVar7;
      }
      uVar3 = uStack_a0._4_4_;
      iVar1 = libgcc_divide_helper_01031c(uStack_a0._4_4_,iVar2,a6,a7);
      if (cVar11 == '\0') {
        dVar8 = (double)CONCAT44((float)iVar1,uVar10);
      }
      else {
        dVar8 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(0x42c80000,(undefined4)uStack_a0);
      }
      else {
        dVar7 = 5.085573493628304e+232;
      }
      if (cVar11 == '\0') {
        fVar9 = (float)((ulonglong)dVar7 >> 0x20);
        fVar6 = SUB84(dVar7,0) / fVar9;
        dVar7 = (double)CONCAT44(fVar9,fVar6);
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) * fVar6,SUB84(dVar8,0));
      }
      else {
        dVar7 = dVar7 / dVar7;
        dVar8 = dVar8 * dVar7;
      }
      uVar4 = SUB84(dVar7,0);
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x2c) = (int)((ulonglong)dVar8 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x2c) = dVar8;
      }
      uVar3 = rand(uVar3,iVar2,a6,a7);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(uStack_84,uVar4);
      }
      else {
        dVar8 = (double)CONCAT44(uStack_80,uStack_84);
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        iVar2 = (int)dVar8;
      }
      iVar2 = libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7);
      if (cVar11 == '\0') {
        dVar8 = (double)CONCAT44((float)iVar2,SUB84(dVar8,0));
      }
      else {
        dVar8 = (double)iVar2;
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar8 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar8;
      }
    }
    else if (iVar1 == 0xb) {
      iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,2,a6,a7);
      if (iVar2 == 0) {
        FUN_8c02f404(ar4,2,a6,a7,in_stack_ffffff28);
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0x43960000;
          *(undefined4 *)(ar4 + 0x2c) = 0x43960000;
          *(undefined4 *)(ar4 + 0x30) = 0x43960000;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = 0xa092ed0043960000;
          *(undefined8 *)(ar4 + 0x2c) = 0xa092ed0043960000;
          *(undefined8 *)(ar4 + 0x30) = 0xa092ed0043960000;
        }
      }
      else {
        for (puVar5 = (undefined4 *)0x0; iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,2,a6,a7),
            (int)puVar5 < iVar2; puVar5 = (undefined4 *)((int)puVar5 + 1)) {
          uVar3 = (**(code **)(*ar5 + 0x100))(ar5,2,puVar5,a7);
          a7 = &uStack_90;
          ar6_00 = auStack_8c;
          ar5_00 = auStack_88;
          FUN_8c03f414(uVar3,ar5_00,ar6_00,a7);
          Vec3_set_xyz(auStack_2c,ar5_00,ar6_00,a7);
          vec3_copy_8c02b5fc(auStack_48,auStack_2c,ar6_00,a7);
          FUN_8c023484(&DAT_8c12619c,auStack_48,ar6_00,a7,auStack_58);
          Vec3_ctor_copy(auStack_3c,auStack_58,ar6_00,a7);
          Vec3_dtor(auStack_58,0xffffffff,ar6_00,a7);
          object_dtor_delete(auStack_48,0xffffffff,ar6_00,a7);
          uVar4 = 2;
          a6 = puVar5;
          uVar3 = (**(code **)(*ar5 + 0x100))(ar5,2,puVar5,a7);
          FUN_8c02f670(uVar3,uVar4,a6,a7,auStack_68);
          Vec3_add(auStack_68,auStack_3c,a6,a7,auStack_78);
          Vec3_assign(&uStack_20,auStack_78,a6,a7);
          Vec3_dtor(auStack_78,0xffffffff,a6,a7);
          Vec3_dtor(auStack_68,0xffffffff,a6,a7);
          if (cVar12 == '\0') {
            *(undefined4 *)(ar4 + 0x28) = uStack_20;
            *(undefined4 *)(ar4 + 0x2c) = uStack_1c;
            *(undefined4 *)(ar4 + 0x30) = uStack_18;
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = CONCAT44(uStack_1c,uStack_20);
            *(ulonglong *)(ar4 + 0x2c) = CONCAT44(uStack_18,uStack_1c);
            *(ulonglong *)(ar4 + 0x30) = CONCAT44(uStack_14,uStack_18);
          }
          Vec3_dtor(auStack_3c,0xffffffff,a6,a7);
          object_dtor_delete(auStack_2c,0xffffffff,a6,a7);
        }
      }
    }
    else if ((iVar1 == 0xd) && (*(int *)(ar4 + 0x40) == 9)) {
      uVar3 = rand(iVar2,puVar5,a6,a7);
      uVar4 = 2;
      iVar2 = libgcc_divide_helper_01031c(uVar3,2,a6,a7);
      if (iVar2 == 0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
        }
      }
      else if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = uStack_7c;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = CONCAT44(auStack_78[0],uStack_7c);
      }
      uVar3 = rand(uVar3,uVar4,a6,a7);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x442f0000,uStack_80);
      }
      else {
        in_xd0 = CONCAT44(uStack_7c,uStack_80);
        dVar8 = -7.425279834635228e-251;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20));
      }
      else {
        iVar2 = (int)(dVar8 - dVar8);
      }
      iVar1 = libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x43af0000,(float)iVar1);
      }
      else {
        dVar8 = 3.458765095218184e+18;
      }
      if (cVar11 == '\0') {
        fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x2c) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x2c) = in_xd0;
      }
      uVar3 = rand(uVar3,iVar2,a6,a7);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x43c80000,uStack_84);
      }
      else {
        in_xd0 = CONCAT44(uStack_80,uStack_84);
        dVar8 = 13510801156472832.0;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20));
      }
      else {
        iVar2 = (int)(dVar8 - dVar8);
      }
      iVar2 = libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x43480000,(float)iVar2);
      }
      else {
        dVar8 = 2.5193118417763846e+177;
      }
      if (cVar11 == '\0') {
        fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x30) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = in_xd0;
      }
    }
  }
  uVar3 = Vec3_dtor(&uStack_20,0xffffffff,a6,a7);
  return uVar3;
}



/* FUN_8c0a06c0 @ 8c0a06c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a06c0(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined1 *)(0x98 + ar4) = *ar5;
  uVar1 = FUN_8c030d10(ar4 + 0xa8,ar5 + 8,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a06f8 @ 8c0a06f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a06f8(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *ar5 = *(undefined1 *)(0x98 + ar4);
  uVar1 = FUN_8c030d2c(ar4 + 0xa8,ar5 + 8,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a0730 @ 8c0a0730 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a0730(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126158,ar5,ar6,ar7);
  uVar3 = 0x8c285140;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285140,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126168,pcVar2,uVar3,ar7);
  uVar3 = 0x8c28514c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28514c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126178,pcVar2,uVar3,ar7);
  uVar3 = 0x8c285158;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285158,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126188,pcVar2,uVar3,ar7);
  uVar3 = 0x8c285164;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285164,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126198 = CONCAT44(_DAT_8c12619c,0x800000);
  }
  else {
                    /* WARNING: Read-only address (ram,0x8c12619c) is written */
    _DAT_8c126198 = 0xffffffff00800000;
  }
  uVar1 = Vec3_ctor_xyz(&DAT_8c12619c,pcVar2,uVar3,ar7);
  uVar1 = global_list_push(uVar1,Vec3_dtor,0x8c285170,ar7);
  return uVar1;
}



/* FUN_8c0a0818 @ 8c0a0818 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0a0818(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c030fa0(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12ad14);
  Vec3_ctor_zero((int)ar4 + 0x224,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x238,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x250,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x260,ar5,ar6,ar7);
  FUN_8c0a0890(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0a0890 @ 8c0a0890 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a0890(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  uint extraout_fr1_00;
  char cVar1;
  undefined1 auStack_14 [16];
  
  cVar1 = '\0';
  *(undefined ***)(ar4 + 0x1c8) = &PTR_s_Begin_iya__8c13af50;
  *(undefined4 *)(ar4 + 0x1cc) = 0xf;
  Vec3_set_xyz(auStack_14,ar5,ar6,ar7);
  vec3_copy_8c023d8c(ar4 + 0x238,auStack_14,ar6,ar7);
  object_dtor_delete(auStack_14,0xffffffff,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x244) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x244) = (ulonglong)extraout_fr1;
  }
  *(undefined4 *)(ar4 + 0x248) = 0;
  FUN_8c031b68(ar4,0x8c2851b0,ar6,ar7);
  *(undefined4 *)(ar4 + 0x24c) = 0;
  *(undefined4 *)(ar4 + 0x270) = 0;
  *(undefined4 *)(ar4 + 0x1d0) = 1;
  *(undefined4 *)(ar4 + 0x274) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x234) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x234) = (ulonglong)extraout_fr1_00;
  }
  return 0x234;
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



/* Class_12ad14_m1_0a09e8 @ 8c0a09e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ad14_m1_0a09e8(int ar4,undefined4 *ar5,undefined4 ar6,undefined1 *ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 in_dr0;
  double dVar5;
  float fVar6;
  undefined4 in_fr3;
  double dVar7;
  undefined8 in_xd0;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffff84;
  undefined8 uStack_78;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [16];
  
  cVar10 = '\0';
  cVar9 = '\0';
  Class_129cbc_m1_031598(ar4,ar5,ar6,ar7);
  uVar3 = 1;
  *(undefined4 *)(ar4 + 0x128) = 1;
  if ((*(int *)(ar4 + 0x124) == 0xb) || (*(int *)(ar4 + 0x124) == 0xc)) {
    FUN_8c03f460(auStack_1c,ar5[3],ar6,ar7);
    ar7 = auStack_1c;
    ar6 = ar5[6];
    uVar3 = FUN_8c0a0c88(ar4,*ar5,ar6,ar7);
    free_if_nonnull_wrap_102790(auStack_1c,0xffffffff,ar6,ar7);
  }
  else {
    iVar2 = FUN_8c0a37c8(ar4,ar5,ar6,ar7);
    if (iVar2 != 3) {
      FUN_8c03f460(auStack_28,ar5[3],ar6,ar7);
      ar7 = auStack_28;
      ar6 = ar5[6];
      uVar3 = FUN_8c0a0c88(ar4,*ar5,ar6,ar7);
      free_if_nonnull_wrap_102790(auStack_28,0xffffffff,ar6,ar7);
      uStack_78._4_4_ = uVar3;
    }
  }
  FUN_8c02f2c0(*ar5,uVar3,ar6,ar7,in_stack_ffffff84);
  if (*(int *)(ar4 + 0x178) == 1) {
    uVar3 = 1;
    FUN_8c02f2c0(*ar5,1,ar6,ar7,in_stack_ffffff84);
  }
  if ((*(int *)(ar4 + 0x124) != 6) && (*(int *)(ar4 + 0x124) != 0xb)) {
    uVar3 = *(undefined4 *)(ar5[1] + 4);
    FUN_8c031ab4(ar4,uVar3,ar6,ar7);
  }
  (**(code **)(*(int *)ar5[6] + 0x184))((int *)ar5[6],uVar3,ar6,ar7);
  uVar1 = in_dr0;
  if (cVar10 == '\0') {
    uStack_78 = CONCAT44(uStack_78._4_4_,(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = uStack_78;
  }
  uStack_78 = uVar1;
  if (cVar10 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 4),in_fr3);
    dVar5 = (double)CONCAT44(0x41200000,(int)uStack_78);
  }
  else {
    dVar7 = *(double *)(*(int *)ar5[1] + 4);
    dVar5 = -3.051758552885531e-05;
    in_xd0 = uStack_78;
  }
  if (cVar9 == '\0') {
    fVar6 = (float)((ulonglong)dVar5 >> 0x20);
    fVar4 = SUB84(dVar5,0) - fVar6;
    dVar5 = (double)CONCAT44(fVar6,fVar4);
    bVar8 = (float)((ulonglong)dVar7 >> 0x20) < fVar4;
  }
  else {
    dVar5 = dVar5 - dVar5;
    bVar8 = dVar7 < dVar5;
  }
  fVar4 = SUB84(dVar5,0);
  if (!bVar8) {
    if (cVar10 == '\0') {
      fVar4 = *(float *)(ar4 + 0x18);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x18);
    }
    if (cVar9 == '\0' && 0.0 < fVar4) {
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(0xbf000000,*(undefined4 *)(ar4 + 0x18));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x18);
        dVar7 = -7.937143354252696e-251;
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x18) = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x18) = in_xd0;
      }
      Vec3_length(ar4 + 0x14,uVar3,ar6,ar7);
    }
  }
  Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_38);
  Vec3_add(auStack_38,ar4 + 0x224,ar6,ar7,auStack_48);
  Vec3_add(auStack_48,ar4 + 0x90,ar6,ar7,auStack_58);
  Vec3_add(auStack_58,ar4 + 0x13c,ar6,ar7,auStack_68);
  Vec3_assign(ar4 + 4,auStack_68,ar6,ar7);
  Vec3_dtor(auStack_68,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_58,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
  vec3_clear(ar4 + 0x13c,uVar3,ar6,ar7);
  *(undefined4 *)(ar4 + 0x1d4) = 0;
  return 0x1d4;
}



/* FUN_8c0a0c4c @ 8c0a0c4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a0c4c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c032160(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x24c) = 0;
  *(undefined4 *)(ar4 + 0x214) = 1;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x234) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x234) = (ulonglong)extraout_fr1;
  }
  return 0x234;
}



/* FUN_8c0a0c88 @ 8c0a0c88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0a0c88(int ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 in_stack_00000000;
  undefined1 auStack_c8 [108];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  iVar4 = 1;
  puVar2 = ar6;
  puVar3 = ar7;
  FUN_8c03f480(ar5,FUN_8c03f480,ar6,ar7,auStack_44);
  Vec3_ctor_copy(auStack_24,auStack_44,puVar2,puVar3);
  ar5_00 = 0xffffffff;
  Vec3_dtor(auStack_44,0xffffffff,puVar2,puVar3);
  Vec3_ctor_zero(auStack_34,ar5_00,puVar2,puVar3);
  if (*(int *)(ar4 + 0x178) == 1) {
    Vec3_assign(auStack_24,ar4 + 0x168,puVar2,puVar3);
  }
  *(undefined4 *)(ar4 + 0x128) = 1;
  iVar1 = *(int *)(ar4 + 0x124);
  if ((iVar1 < 0xf) && (1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 2:
      FUN_8c03f460(auStack_5c,ar7,puVar2,puVar3);
      puVar2 = auStack_5c;
      puVar3 = ar6;
      iVar4 = FUN_8c0a14d8(ar4,in_stack_00000000,puVar2,ar6);
      free_if_nonnull_wrap_102790(auStack_5c,0xffffffff,puVar2,puVar3);
      break;
    case 3:
      puVar2 = ar7;
      puVar3 = ar6;
      iVar4 = FUN_8c0329ac(ar4,auStack_24,ar7,ar6);
      if (iVar4 == 0) {
        puVar2 = ar7;
        puVar3 = ar6;
        FUN_8c032788(ar4,auStack_24,ar7,ar6);
      }
      FUN_8c03f460(auStack_50,ar7,puVar2,puVar3);
      puVar3 = auStack_50;
      puVar2 = auStack_24;
      iVar4 = FUN_8c0a1828(ar4,in_stack_00000000,puVar2,puVar3);
      free_if_nonnull_wrap_102790(auStack_50,0xffffffff,puVar2,puVar3);
    }
  }
  if ((*(int *)(ar4 + 0x178) == 1) && (iVar4 == 0)) {
    FUN_8c031ce8(ar4,ar7,ar6,puVar3);
    Vec3_assign(ar4 + 0x168,auStack_c8,ar6,puVar3);
    Vec3_dtor(auStack_c8,0xffffffff,ar6,puVar3);
    puVar2 = ar6;
  }
  Vec3_dtor(auStack_34,0xffffffff,puVar2,puVar3);
  Vec3_dtor(auStack_24,0xffffffff,puVar2,puVar3);
  return iVar4;
}



/* FUN_8c0a14d8 @ 8c0a14d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0a14d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  int ar6_01;
  undefined4 uVar5;
  undefined1 *ar7_00;
  float fVar6;
  undefined8 in_dr0;
  float fVar7;
  char cVar8;
  char cVar9;
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar9 = '\0';
  cVar8 = '\0';
  iVar1 = *(int *)(ar4 + 0x134);
  uVar4 = ar6;
  uVar3 = ar7;
  uVar5 = ar7;
  if (iVar1 == 0) {
    ar6_00 = 100;
    uVar2 = rand_range(ar4,0,100,ar7);
    *(undefined4 *)(ar4 + 0x220) = uVar2;
    *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
  }
  else {
    ar6_00 = ar6;
    if (iVar1 != 1) {
      uVar3 = ar5;
      if (iVar1 == 2) goto LAB_8c0a15f4;
      if (iVar1 != 3) {
        return 1;
      }
      goto LAB_8c0a165a;
    }
  }
  if (*(int *)(ar4 + 0x220) < 0x2d) {
    iVar1 = FUN_8c0a2bf4(ar4,ar5,ar6_00,uVar3);
    if (iVar1 != 0) {
      return 1;
    }
    *(undefined4 *)(ar4 + 0x134) = 0;
    *(undefined4 *)(ar4 + 0x40) = 5;
    return 0;
  }
  if (0x59 < *(int *)(ar4 + 0x220)) {
    ar7 = 0;
    ar6 = 0;
    uVar3 = 0;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0,0);
    *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
LAB_8c0a15f4:
    Vec3_ctor_xyz(auStack_48,uVar3,ar6,ar7);
    FUN_8c031c74(ar4,auStack_48,ar5,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_48,0xffffffff,ar5,ar7);
    FUN_8c03207c(ar4,uVar4,ar5,ar7);
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar5,ar7);
    if (iVar1 != 1) {
      return 1;
    }
    *(undefined4 *)(ar4 + 0x134) = 0;
    return 0;
  }
  if (cVar9 == '\0') {
    fVar6 = 3.0;
  }
  else {
    fVar6 = 500.0;
  }
  FUN_8c032518(ar4,ar5,ar6,ar7);
  Vec3_assign(ar4 + 0x54,auStack_38,uVar4,uVar5);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,uVar4,uVar5);
  *(undefined4 *)(ar4 + 0x134) = 3;
LAB_8c0a165a:
  if (*(int *)(ar4 + 0x1d4) == 1) {
    uVar3 = Vec3_length(ar4 + 0x200,uVar3,uVar4,uVar5);
    Vec3_ctor_copy(auStack_28,uVar3,uVar4,uVar5);
    FUN_8c022dac(auStack_28,ar4 + 0x14,uVar4,uVar5);
    if (cVar9 == '\0') {
      fVar7 = 90.0;
    }
    else {
      fVar6 = 90.0;
      fVar7 = 2.0;
    }
    if (cVar8 == '\0' && fVar7 < fVar6) {
      FUN_8c03263c(ar4,auStack_28,uVar4,uVar5);
      Vec3_add(auStack_58,ar5,uVar4,uVar5,auStack_68);
      Vec3_assign(ar4 + 0x54,auStack_68,uVar4,uVar5);
      Vec3_dtor(auStack_68,0xffffffff,uVar4,uVar5);
      Vec3_dtor(auStack_58,0xffffffff,uVar4,uVar5);
      uVar4 = ar6;
      FUN_8c032788(ar4,ar4 + 0x54,ar6,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
      uVar5 = ar7;
    }
    Vec3_dtor(auStack_28,0xffffffff,uVar4,uVar5);
  }
  FUN_8c03f460(auStack_74,ar6,uVar4,uVar5);
  ar7_00 = auStack_74;
  ar6_01 = ar4 + 0x54;
  iVar1 = FUN_8c0a1828(ar4,ar5,ar6_01,ar7_00);
  free_if_nonnull_wrap_102790(auStack_74,0xffffffff,ar6_01,ar7_00);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x134) = 0;
  }
  return (uint)(iVar1 != 0);
}



/* FUN_8c0a1828 @ 8c0a1828 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a1c46) */
/* WARNING: Removing unreachable block (ram,0x8c0a18ee) */
/* WARNING: Removing unreachable block (ram,0x8c0a18e2) */
/* WARNING: Removing unreachable block (ram,0x8c0a18d8) */
/* WARNING: Removing unreachable block (ram,0x8c0a18ca) */
/* WARNING: Removing unreachable block (ram,0x8c0a18bc) */
/* WARNING: Removing unreachable block (ram,0x8c0a18b2) */
/* WARNING: Removing unreachable block (ram,0x8c0a18a4) */
/* WARNING: Removing unreachable block (ram,0x8c0a1896) */
/* WARNING: Removing unreachable block (ram,0x8c0a1894) */
/* WARNING: Removing unreachable block (ram,0x8c0a18a2) */
/* WARNING: Removing unreachable block (ram,0x8c0a18b0) */
/* WARNING: Removing unreachable block (ram,0x8c0a18ba) */
/* WARNING: Removing unreachable block (ram,0x8c0a18c8) */
/* WARNING: Removing unreachable block (ram,0x8c0a18d6) */
/* WARNING: Removing unreachable block (ram,0x8c0a18de) */
/* WARNING: Removing unreachable block (ram,0x8c0a18e4) */
/* WARNING: Removing unreachable block (ram,0x8c0a18f0) */
/* WARNING: Removing unreachable block (ram,0x8c0a1c4a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a1828(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *ar5_00;
  undefined4 *ar6_00;
  float fVar4;
  undefined8 in_dr0;
  float fVar7;
  double dVar5;
  undefined8 uVar6;
  undefined4 in_fr3;
  double dVar8;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffffb4;
  undefined1 auStack_24 [20];
  
  fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  iVar3 = *(int *)(ar4 + 0x40);
  if ((iVar3 < 6) && (-1 < iVar3)) {
    ar5_00 = ar5;
    ar6_00 = ar6;
                    /* WARNING: Switch is manually overridden */
    switch(iVar3) {
    case 0:
      if (*(int *)(ar4 + 0x270) == 1) {
        *(undefined4 *)(ar4 + 0x270) = 0;
      }
      if (*(int *)(ar4 + 0x1b8) == 1) {
        *(undefined4 *)(ar4 + 0x18c) = *ar5;
        *(undefined4 *)(ar4 + 400) = ar5[1];
        *(undefined4 *)(ar4 + 0x194) = ar5[2];
        *(undefined4 *)(ar4 + 0x198) = *ar6;
        *(undefined4 *)(ar4 + 0x19c) = ar6[1];
        *(undefined4 *)(ar4 + 0x1a0) = ar6[2];
      }
      if (3.0 <= *(float *)(ar4 + 0x28)) {
        *(undefined4 *)(ar4 + 0x28) = 0x40400000;
      }
      if (*(int *)(ar4 + 0x124) == 2) {
        FUN_8c031b68(ar4,0x8c2851b0,ar6,ar7);
      }
      else {
        FUN_8c031b68(ar4,0x8c2851c8,ar6,ar7);
      }
      FUN_8c031bb4(ar4,ar5,ar6,ar7);
      if (cVar10 == '\0') {
        uVar6 = CONCAT44(ar5[1],ar6[1]);
      }
      else {
        uVar6 = *(undefined8 *)(ar5 + 1);
      }
      if (cVar9 != '\0' || (float)uVar6 <= (float)((ulonglong)uVar6 >> 0x20)) {
        iVar3 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7);
        fVar4 = (float)((ulonglong)uVar6 >> 0x20);
        if (iVar3 != 9) {
          ar7 = 0;
          ar6_00 = (undefined4 *)0xffffffff;
          ar5_00 = (undefined4 *)0x9;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7);
        }
      }
      else {
        ar7 = 0;
        ar6_00 = (undefined4 *)0x0;
        ar5_00 = (undefined4 *)0x1;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0);
        fVar4 = (float)((ulonglong)uVar6 >> 0x20);
      }
      vec3_clear(ar4 + 0x90,ar5_00,ar6_00,ar7);
      vec3_clear(ar4 + 0x224,ar5_00,ar6_00,ar7);
    case 1:
      *(undefined4 *)(ar4 + 0x40) = 3;
    case 3:
      iVar3 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7);
      if (iVar3 == 1) {
        iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7);
        if (iVar3 == 1) {
          if (cVar10 == '\0') {
            uVar6 = CONCAT44(ar5[1],ar6[1]);
          }
          else {
            uVar6 = *(undefined8 *)(ar5 + 1);
          }
          if (cVar9 == '\0' && (float)uVar6 < (float)((ulonglong)uVar6 >> 0x20)) {
            vec3_clear(ar4 + 0x224,ar5_00,ar6_00,ar7);
            ar7 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0,0);
          }
        }
        else {
          CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7,in_stack_ffffffb4);
          if (cVar10 == '\0') {
            fVar7 = 15.0;
          }
          else {
            fVar4 = 15.0;
            fVar7 = 35.0;
          }
          if (cVar9 != '\0' || fVar7 <= fVar4) {
            CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7,in_stack_ffffffb4);
            if (cVar10 == '\0') {
              fVar4 = 35.0;
            }
            else {
              fVar7 = 35.0;
              fVar4 = 7.73517e-43;
            }
            if (cVar9 == '\0' && fVar7 < fVar4) {
              if (cVar10 == '\0') {
                dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x228),in_fr3);
                dVar5 = (double)CONCAT44(0x41a00000,DAT_8c13af4c);
              }
              else {
                dVar8 = *(double *)(ar4 + 0x228);
                dVar5 = 3.954695087201342e+231;
              }
              if (cVar9 == '\0') {
                dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) +
                                         SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20),
                                         SUB84(dVar8,0));
              }
              else {
                dVar8 = dVar8 + dVar5 / dVar5;
              }
              if (cVar10 == '\0') {
                *(int *)(ar4 + 0x228) = (int)((ulonglong)dVar8 >> 0x20);
              }
              else {
                *(double *)(ar4 + 0x228) = dVar8;
              }
            }
            else {
              if (cVar10 == '\0') {
                dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x228),in_fr3);
                dVar5 = (double)CONCAT44(0x41c80000,DAT_8c13af4c);
              }
              else {
                dVar8 = *(double *)(ar4 + 0x228);
                dVar5 = 2.8113808922932564e+173;
              }
              if (cVar9 == '\0') {
                dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                                         SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20),
                                         SUB84(dVar8,0));
              }
              else {
                dVar8 = dVar8 - dVar5 / dVar5;
              }
              if (cVar10 == '\0') {
                *(int *)(ar4 + 0x228) = (int)((ulonglong)dVar8 >> 0x20);
              }
              else {
                *(double *)(ar4 + 0x228) = dVar8;
              }
            }
          }
        }
      }
      else if (iVar3 == 9) {
        if (cVar10 == '\0') {
          uVar6 = CONCAT44(ar5[1],ar6[1]);
        }
        else {
          uVar6 = *(undefined8 *)(ar5 + 1);
        }
        if (cVar9 != '\0' || (float)uVar6 <= (float)((ulonglong)uVar6 >> 0x20)) {
          FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6_00,ar7);
        }
        else {
          CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7);
          ar7 = 0;
          uVar2 = 0;
          uVar1 = 1;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0);
          vec3_clear(ar4 + 0x224,uVar1,uVar2,ar7);
        }
      }
      else {
        iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7);
        if (iVar3 == 1) {
          if (cVar10 == '\0') {
            uVar6 = CONCAT44(ar5[1],ar6[1]);
          }
          else {
            uVar6 = *(undefined8 *)(ar5 + 1);
          }
          if (cVar9 != '\0' || (float)uVar6 <= (float)((ulonglong)uVar6 >> 0x20)) {
            ar7 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0,0);
          }
          else {
            ar7 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0);
          }
        }
      }
      break;
    case 4:
      FUN_8c03f3ac(ar4 + 0xb0,ar5,ar6,ar7);
    }
  }
  uVar1 = FUN_8c031764(ar4,ar6,ar5,ar7);
  FUN_8c0230f0(ar4 + 0x14,ar6,ar5,ar7,auStack_24);
  uVar2 = Vec3_length(auStack_24,ar6,ar5,ar7);
  Vec3_assign(ar4 + 0x80,uVar2,ar5,ar7);
  Vec3_dtor(auStack_24,0xffffffff,ar5,ar7);
  return uVar1;
}



/* FUN_8c0a1cdc @ 8c0a1cdc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a1e34) */
/* WARNING: Removing unreachable block (ram,0x8c0a1e2e) */
/* WARNING: Removing unreachable block (ram,0x8c0a1d28) */
/* WARNING: Removing unreachable block (ram,0x8c0a1dd8) */
/* WARNING: Removing unreachable block (ram,0x8c0a1dd4) */
/* WARNING: Removing unreachable block (ram,0x8c0a1dda) */
/* WARNING: Removing unreachable block (ram,0x8c0a1e32) */
/* WARNING: Removing unreachable block (ram,0x8c0a1e36) */
/* WARNING: Removing unreachable block (ram,0x8c0a1ddc) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a1cdc(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined4 in_fr3;
  double dVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar3 = 1;
  iVar1 = *(int *)(ar4 + 300);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      ar7 = 0;
      ar6 = (int *)0xffffffff;
      ar5 = 3;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      FUN_8c022d04(ar4 + 0x14,ar5,ar6,ar7);
    case 1:
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (iVar1 == 1) {
        uVar2 = 3;
        s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,3,ar6,ar7);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 2:
      uVar2 = 0x3c23d70a;
      *(float *)(ar4 + 0x94) = *(float *)(ar4 + 0x94) + 0.01;
      (**(code **)(*ar6 + 0x184))(ar6,ar5,ar6,ar7);
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),in_fr3);
        dVar5 = (double)CONCAT44(0x41200000,uVar2);
      }
      else {
        dVar7 = *(double *)(ar5 + 4);
        dVar5 = 6.28650578250278e-312;
      }
      if (cVar9 == '\0') {
        fVar6 = (float)((ulonglong)dVar5 >> 0x20);
        fVar4 = SUB84(dVar5,0) - fVar6;
        dVar5 = (double)CONCAT44(fVar6,fVar4);
        bVar8 = fVar4 < (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        dVar5 = dVar5 - dVar5;
        bVar8 = dVar5 < dVar7;
      }
      if (bVar8) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x94) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x94) = (ulonglong)dVar5 & 0xffffffff;
        }
      }
      break;
    case 3:
      uVar2 = 0x3c23d70a;
      *(float *)(ar4 + 0x94) = *(float *)(ar4 + 0x94) - 0.01;
      (**(code **)(*ar6 + 0x128))(ar6,ar5,ar6,ar7);
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),in_fr3);
        dVar5 = (double)CONCAT44(0x41200000,uVar2);
      }
      else {
        dVar7 = *(double *)(ar5 + 4);
        dVar5 = 6.28650578250278e-312;
      }
      if (cVar9 == '\0') {
        fVar6 = (float)((ulonglong)dVar5 >> 0x20);
        fVar4 = SUB84(dVar5,0) + fVar6;
        dVar5 = (double)CONCAT44(fVar6,fVar4);
        bVar8 = fVar4 < (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        dVar5 = dVar5 + dVar5;
        bVar8 = dVar5 < dVar7;
      }
      if (!bVar8) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x94) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x94) = (ulonglong)dVar5 & 0xffffffff;
        }
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}



/* s_CMushroomerBody_AwayFrom_0a1ed0 @ 8c0a1ec4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CMushroomerBody_AwayFrom_0a1ed0(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 uVar5;
  undefined4 in_fr1;
  double dVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar5 = 1;
  iVar1 = *(int *)(ar4 + 300);
  iVar3 = ar5;
  if (iVar1 == 0) {
    if (*(int *)(ar4 + 0x270) == 1) {
      FUN_8c033474(ar4,1,ar5,in_stack_00000000);
      *(undefined4 *)(ar4 + 0x270) = 0;
    }
    ar7_00 = 0;
    uVar4 = 0xffffffff;
    uVar2 = 5;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar4,ar7_00);
    if (ar6 == 0) {
LAB_8c0a1f82:
      Vec3_sub(ar5,ar7,uVar4,ar7_00,auStack_2c);
      uVar2 = Vec3_length(auStack_2c,ar7,uVar4,ar7_00);
      Vec3_assign(ar4 + 0x14,uVar2,uVar4,ar7_00);
      Vec3_dtor(auStack_2c,0xffffffff,uVar4,ar7_00);
      if (cVar8 != '\0') {
        in_fr1 = 0x40400000;
      }
      FUN_8c032518(ar4,ar5,in_stack_00000004,in_stack_00000000);
      Vec3_assign(ar4 + 0x260,auStack_3c,in_stack_00000004,in_stack_00000000);
      Vec3_dtor(auStack_3c,0xffffffff,in_stack_00000004,in_stack_00000000);
      ar7 = in_stack_00000000;
    }
    else {
      if (ar6 != 1) {
        ar7_00 = 2;
        uVar4 = 1;
        report_error_message
                  (s_Invalid_Flag_Number___8c13b03f,s_CMushroomerBody__AwayFrom___8c13b055,1,2);
        goto LAB_8c0a1f82;
      }
      Vec3_scale(ar7,&DAT_8c13af90,uVar4,ar7_00,auStack_4c);
      Vec3_assign(ar4 + 0x14,auStack_4c,uVar4,ar7_00);
      Vec3_dtor(auStack_4c,0xffffffff,uVar4,ar7_00);
      if (cVar8 != '\0') {
        in_fr1 = 0x40400000;
      }
      FUN_8c032518(ar4,ar5,in_stack_00000004,in_stack_00000000);
      Vec3_assign(ar4 + 0x260,auStack_5c,in_stack_00000004,in_stack_00000000);
      Vec3_dtor(auStack_5c,0xffffffff,in_stack_00000004,in_stack_00000000);
      ar7 = in_stack_00000000;
    }
    iVar1 = ar5;
    Vec3_sub(ar4 + 0x260,ar5,in_stack_00000004,ar7,auStack_6c);
    uVar2 = Vec3_length(auStack_6c,iVar1,in_stack_00000004,ar7);
    Vec3_assign(ar4 + 0x14,uVar2,in_stack_00000004,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_6c,0xffffffff,in_stack_00000004,ar7);
    vec3_clear(ar4 + 0x224,uVar2,in_stack_00000004,ar7);
    FUN_8c031b68(ar4,0x8c2851b0,in_stack_00000004,ar7);
    if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0x34) = 0x40000000;
    }
    else {
      in_fr1 = 0x40000000;
      *(undefined8 *)(ar4 + 0x34) = 0x8c032a6440000000;
    }
    uVar4 = 0x5a;
    uVar2 = 0x1e;
    iVar1 = rand_range(ar4,0x1e,0x5a,ar7);
    if (cVar7 == '\0') {
      dVar6 = (double)CONCAT44((float)iVar1,in_fr1);
    }
    else {
      dVar6 = (double)iVar1;
    }
    if (cVar8 == '\0') {
      *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar6 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x38) = dVar6;
    }
    FUN_8c032ab0(ar4,uVar2,uVar4,ar7);
    ar6 = ar4 + 0x260;
    FUN_8c031bb4(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      iVar3 = ar4 + 0x260;
      FUN_8c031764(ar4,iVar3,ar5,ar7);
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar3,ar5,ar7);
      ar6_00 = ar5;
      if (iVar1 == 1) {
        ar7 = 0;
        ar6_00 = -1;
        iVar3 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar3,ar6_00,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
    }
    else {
      ar6_00 = ar6;
      if (iVar1 == 3) {
        iVar3 = ar4 + 0x260;
        FUN_8c031764(ar4,iVar3,ar5,ar7);
        iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar3,ar5,ar7);
        ar6_00 = ar5;
        if (iVar1 == 1) {
          iVar3 = -0x73d7ae50;
          FUN_8c031b68(ar4,0x8c2851b0,ar5,ar7);
          uVar5 = 0;
          *(undefined4 *)(ar4 + 300) = 0;
          ar6_00 = ar5;
        }
      }
    }
    goto LAB_8c0a231a;
  }
  s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar3,ar6,ar7);
  iVar3 = ar4 + 0x260;
  FUN_8c031764(ar4,iVar3,ar5,ar7);
  ar6_00 = ar5;
  if (*(int *)(ar4 + 0x40) == 4) {
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
LAB_8c0a231a:
  FUN_8c0230f0(ar4 + 0x14,iVar3,ar6_00,ar7,auStack_7c);
  uVar2 = Vec3_length(auStack_7c,iVar3,ar6_00,ar7);
  Vec3_scale(uVar2,&DAT_8c13af94,ar6_00,ar7,auStack_8c);
  Vec3_assign(ar4 + 0x80,auStack_8c,ar6_00,ar7);
  Vec3_dtor(auStack_8c,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_7c,0xffffffff,ar6_00,ar7);
  return uVar5;
}



/* FUN_8c0a23c4 @ 8c0a23c4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a293a) */
/* WARNING: Removing unreachable block (ram,0x8c0a28f2) */
/* WARNING: Removing unreachable block (ram,0x8c0a23c4) */
/* WARNING: Removing unreachable block (ram,0x8c0a291a) */
/* WARNING: Removing unreachable block (ram,0x8c0a2aaa) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a23c4(int ar4,double *ar5,double *ar6,double *ar7)

{
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  code *ar5_00;
  double *ar6_00;
  undefined4 ar6_01;
  float *ar6_02;
  double *ar7_00;
  uint uVar4;
  float fVar5;
  double in_dr0;
  undefined8 uVar6;
  double dVar7;
  ulonglong uVar8;
  float fVar10;
  double dVar9;
  undefined4 in_fr3;
  double in_dr14;
  double in_xd0;
  char cVar11;
  char cVar12;
  undefined4 in_stack_ffffff18;
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [12];
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  cVar12 = '\0';
  cVar11 = '\0';
  pdVar3 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  if (DAT_8c285210 == '\0') {
    uVar1 = Vec3_set_zero(0x8c285214,ar5,ar6,ar7);
    ar6_00 = (double *)0x8c285204;
    global_list_push(uVar1,object_dtor_delete,0x8c285204,ar7_00);
    pdVar3 = (double *)&DAT_8c285210;
    DAT_8c285210 = '\x01';
  }
  Vec3_ctor_zero(&fStack_28,pdVar3,ar6_00,ar7_00);
  iVar2 = *(int *)(ar4 + 300);
  if ((5 < iVar2) || (iVar2 < 0)) goto switchD_8c0a242e_default;
                    /* WARNING: Switch is manually overridden */
  switch(iVar2) {
  case 0:
    ar7_00 = (double *)0x0;
    ar6_01 = 0xffffffff;
    uVar1 = 9;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_01,ar7_00);
    vec3_clear(ar4 + 0x224,uVar1,ar6_01,ar7_00);
    FUN_8c031b68(ar4,0x8c2851b0,ar6_01,ar7_00);
    pdVar3 = ar5;
    ar6_00 = ar6;
    FUN_8c031bb4(ar4,ar5,ar6,ar7_00);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    break;
  case 2:
    goto switchD_8c0a242e_caseD_2;
  case 3:
    goto switchD_8c0a242e_caseD_3;
  case 4:
    goto switchD_8c0a242e_caseD_4;
  case 5:
    goto switchD_8c0a242e_caseD_5;
  }
  FUN_8c03f3ac(ar4 + 0xb0,pdVar3,ar6_00,ar7_00);
  pdVar3 = ar6;
  ar6_00 = ar5;
  iVar2 = FUN_8c031764(ar4,ar6,ar5,ar7_00);
  if (iVar2 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 3;
    CAnimBody_GetCurFrame(ar4 + 0xb0,pdVar3,ar6_00,ar7_00,in_stack_ffffff18);
    if (cVar12 == '\0') {
      *(int *)(ar4 + 0x244) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x244) = in_dr0;
    }
    if (cVar12 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
    }
    *(undefined4 *)(ar4 + 300) = 3;
switchD_8c0a242e_caseD_3:
    Vec3_assign(&fStack_28,ar5,ar6_00,ar7_00);
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar6 + 1),in_fr3);
      dVar7 = (double)CONCAT44(0x41c80000,*(float *)(ar7 + 1));
    }
    else {
      dVar9 = ar6[1];
      in_xd0 = ar7[1];
      dVar7 = 4.24944422004087e-312;
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if ((float)((ulonglong)dVar9 >> 0x20) == fVar5) {
      if (cVar12 == '\0') {
        fStack_20 = *(float *)(ar7 + 1);
        dVar7 = (double)CONCAT44(fStack_20,fVar5);
      }
      else {
        dVar7 = ar7[1];
        fStack_20 = SUB84(dVar7,0);
        uStack_1c = (undefined4)((ulonglong)dVar7 >> 0x20);
      }
    }
    else {
      if (cVar12 == '\0') {
        uVar8 = CONCAT44(0x41c80000,*(undefined4 *)ar6);
      }
      else {
        in_xd0 = *ar6;
        uVar8 = 0xc041c80000;
      }
      if ((float)uVar8 == (float)(uVar8 >> 0x20)) {
        dVar7 = (double)(uVar8 & 0xffffffff);
        if (cVar12 == '\0') {
          fStack_28 = 0.0;
        }
        else {
          uStack_24 = 0;
          fStack_28 = (float)uVar8;
        }
      }
      else {
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)ar6,SUB84(dVar9,0));
          dVar7 = (double)CONCAT44(0x41c80000,*(float *)ar7);
        }
        else {
          dVar9 = *ar6;
          in_xd0 = *ar7;
          dVar7 = 4.07968455676365e-312;
        }
        if (cVar11 == '\0') {
          fVar5 = (float)((ulonglong)dVar7 >> 0x20);
          dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) - fVar5);
        }
        else {
          dVar7 = dVar7 - dVar7;
        }
        if ((float)((ulonglong)dVar9 >> 0x20) == SUB84(dVar7,0)) {
          if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(*(float *)ar7,SUB84(dVar7,0));
            fStack_28 = *(float *)ar7;
          }
          else {
            dVar7 = *ar7;
            fStack_28 = SUB84(dVar7,0);
            uStack_24 = (undefined4)((ulonglong)dVar7 >> 0x20);
          }
        }
      }
    }
    uVar1 = SUB84(dVar9,0);
    uVar4 = SUB84(dVar7,0);
    iVar2 = ar4 + 0x14;
    ar6_02 = &fStack_28;
    FUN_8c0a3dc0(ar4,ar5,ar6_02,iVar2,auStack_70);
    vec3_copy_8c023d8c(ar4 + 0x238,auStack_70,ar6_02,iVar2);
    object_dtor_delete(auStack_70,0xffffffff,ar6_02,iVar2);
    if (cVar12 == '\0') {
      *(undefined4 *)(ar4 + 0x238) = 0;
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x23c),uVar1);
      in_dr0 = (double)CONCAT44(0x41f00000,*(undefined4 *)(ar4 + 0x244));
    }
    else {
      *(ulonglong *)(ar4 + 0x238) = (ulonglong)uVar4;
      dVar9 = *(double *)(ar4 + 0x23c);
      in_xd0 = *(double *)(ar4 + 0x244);
      in_dr0 = 1.22281613457048e-311;
    }
    if (cVar11 == '\0') {
      fVar10 = (float)((ulonglong)in_dr0 >> 0x20);
      fVar5 = SUB84(in_dr0,0) + fVar10;
      in_dr0 = (double)CONCAT44(fVar10,fVar5);
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) / fVar5,SUB84(dVar9,0));
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
      dVar9 = dVar9 / in_dr0;
    }
    if (cVar12 == '\0') {
      *(int *)(ar4 + 0x23c) = (int)((ulonglong)dVar9 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x23c) = dVar9;
    }
    in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (cVar12 == '\0') {
      *(undefined4 *)(ar4 + 0x240) = 0;
    }
    else {
      *(double *)(ar4 + 0x240) = in_dr0;
    }
    ar7_00 = (double *)0x0;
    ar6_00 = (double *)0x0;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0,0);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
switchD_8c0a242e_caseD_4:
    fVar5 = SUB84(in_dr0,0);
    if (cVar12 == '\0') {
      fVar5 = *(float *)(ar4 + 0x28);
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x28);
    }
    if (cVar11 != '\0' || 0.0 <= fVar5) {
      vec3_copy_8c02b5fc(auStack_7c,ar4 + 0x238,ar6_00,ar7_00);
      FUN_8c023484(ar4 + 0x80,auStack_7c,ar6_00,ar7_00,auStack_8c);
      Vec3_assign(ar4 + 0x80,auStack_8c,ar6_00,ar7_00);
      Vec3_dtor(auStack_8c,0xffffffff,ar6_00,ar7_00);
      object_dtor_delete(auStack_7c,0xffffffff,ar6_00,ar7_00);
    }
    FUN_8c031764(ar4,ar6,ar5,ar7_00);
    *(undefined4 *)(ar4 + 0x40) = 3;
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x234),*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x28);
      dVar9 = *(double *)(ar4 + 0x234);
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar9 - dVar9,0);
    }
    if (cVar12 == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
      fVar5 = *(float *)(ar4 + 0x28);
    }
    else {
      *(double *)(ar4 + 0x28) = in_xd0;
    }
    if (cVar11 != '\0' || fVar5 <= 0.0) {
      if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
      }
    }
    fVar5 = 0.0;
    CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7_00,in_stack_ffffff18);
    if (cVar12 == '\0') {
      fVar10 = 30.0;
    }
    else {
      fVar5 = 30.0;
      fVar10 = 8.07148e-43;
    }
    if ((cVar11 != '\0' || fVar10 <= fVar5) &&
       (iVar2 = get_field_1c_026dd8(ar4 + 0xb0,ar6,ar5,ar7_00), iVar2 == 7)) {
      if (cVar12 == '\0') {
        fVar5 = *(float *)(ar4 + 0x28);
      }
      in_dr0 = (double)(ulonglong)(uint)fVar5;
      if (fVar5 == 0.0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
switchD_8c0a242e_caseD_5:
        uVar4 = SUB84(in_dr0,0);
        *(undefined4 *)(ar4 + 0x270) = 1;
        iVar2 = ar4 + 0xb0;
        ar5_00 = FUN_8c03f3ac;
        FUN_8c03f3ac(iVar2,FUN_8c03f3ac,iVar2,ar7_00);
        Vec3_set_xyz(auStack_98,ar5_00,iVar2,ar7_00);
        vec3_copy_8c023d8c(ar4 + 0x238,auStack_98,iVar2,ar7_00);
        object_dtor_delete(auStack_98,0xffffffff,iVar2,ar7_00);
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar4;
        }
        goto switchD_8c0a242e_default;
      }
    }
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7_00);
  }
  else {
    Vec3_set_xyz(auStack_34,pdVar3,ar6_00,ar7_00);
    ar7_00 = (double *)(ar4 + 0x14);
    ar6_00 = ar6;
    FUN_8c031eb0(ar4,ar5,ar6,ar7_00,auStack_44);
    Vec3_assign(&fStack_28,auStack_44,ar6_00,ar7_00);
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
    object_dtor_delete(auStack_34,0xffffffff,ar6_00,ar7_00);
    pdVar3 = ar6;
    FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
    fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
    if (cVar12 == '\0') {
      fVar10 = 200.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar5 = 200.0;
      fVar10 = 0.01;
    }
    if (cVar11 == '\0' && fVar5 < fVar10) {
      if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x14),fStack_28);
      }
      else {
        in_dr0 = (double)CONCAT44(uStack_24,fStack_28);
        dVar9 = *(double *)(ar4 + 0x14);
      }
      if (cVar11 == '\0') {
        fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar12 == '\0') {
        fVar10 = 0.01;
      }
      else {
        fVar5 = 0.01;
        fVar10 = -0.01;
      }
      if (cVar11 == '\0' && fVar5 < fVar10) {
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x14),fStack_28);
        }
        else {
          in_dr0 = (double)CONCAT44(uStack_24,fStack_28);
          dVar9 = *(double *)(ar4 + 0x14);
        }
        if (cVar11 == '\0') {
          fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar9 - dVar9,0);
        }
        if (cVar12 == '\0') {
          fVar10 = -0.01;
        }
        else {
          fVar5 = -0.01;
          fVar10 = 2.74654e-43;
        }
        if (cVar11 == '\0' && fVar10 < fVar5) {
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x18),uStack_24);
          }
          else {
            in_dr0 = (double)CONCAT44(fStack_20,uStack_24);
            dVar9 = *(double *)(ar4 + 0x18);
          }
          if (cVar11 == '\0') {
            fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar9 - dVar9,0);
          }
          if (cVar12 == '\0') {
            fVar10 = 0.01;
          }
          else {
            fVar5 = 0.01;
            fVar10 = -0.01;
          }
          if (cVar11 == '\0' && fVar5 < fVar10) {
            if (cVar12 == '\0') {
              dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x18),uStack_24);
            }
            else {
              in_dr0 = (double)CONCAT44(fStack_20,uStack_24);
              dVar9 = *(double *)(ar4 + 0x18);
            }
            if (cVar11 == '\0') {
              fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
            }
            else {
              fVar5 = SUB84(dVar9 - dVar9,0);
            }
            if (cVar12 == '\0') {
              fVar10 = -0.01;
            }
            else {
              fVar5 = -0.01;
              fVar10 = 2.74654e-43;
            }
            if (cVar11 == '\0' && fVar10 < fVar5) {
              if (cVar12 == '\0') {
                dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1c),fStack_20);
              }
              else {
                in_dr0 = (double)CONCAT44(uStack_1c,fStack_20);
                dVar9 = *(double *)(ar4 + 0x1c);
              }
              if (cVar11 == '\0') {
                fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
              }
              else {
                fVar5 = SUB84(dVar9 - dVar9,0);
              }
              if (cVar12 == '\0') {
                fVar10 = 0.01;
              }
              else {
                fVar5 = 0.01;
                fVar10 = -0.01;
              }
              if (cVar11 == '\0' && fVar5 < fVar10) {
                if (cVar12 == '\0') {
                  dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1c),fStack_20);
                  in_xd0 = in_dr0;
                }
                else {
                  in_xd0 = (double)CONCAT44(uStack_1c,fStack_20);
                  dVar9 = *(double *)(ar4 + 0x1c);
                }
                if (cVar11 == '\0') {
                  fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
                }
                else {
                  fVar5 = SUB84(dVar9 - dVar9,0);
                }
                if (cVar12 == '\0') {
                  fVar10 = -0.01;
                }
                else {
                  fVar5 = -0.01;
                  fVar10 = 2.74654e-43;
                }
                if (cVar11 == '\0' && fVar10 < fVar5) {
                  if (cVar12 == '\0') {
                    uVar1 = *(undefined4 *)(ar4 + 0x28);
                    uVar6 = CONCAT44(uVar1,fVar5);
                    *(undefined4 *)(ar4 + 0x24) = uVar1;
                  }
                  else {
                    uVar6 = *(undefined8 *)(ar4 + 0x28);
                    *(undefined8 *)(ar4 + 0x24) = uVar6;
                  }
                  pdVar3 = ar5;
                  FUN_8c022fc0(ar6,ar5,ar6_00,ar7_00);
                  if (cVar12 == '\0') {
                    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                               (int)((ulonglong)uVar6 >> 0x20));
                    dVar9 = (double)CONCAT44(0x40000000,(int)uVar6);
                  }
                  else {
                    dVar9 = 1.19733612505215e-311;
                  }
                  if (cVar11 == '\0') {
                    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                               SUB84(in_dr14,0) * (float)((ulonglong)dVar9 >> 0x20))
                    ;
                  }
                  else {
                    in_dr14 = in_dr14 * dVar9;
                  }
                  if (cVar12 == '\0') {
                    dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar9,0));
                  }
                  else {
                    dVar9 = *(double *)(ar4 + 0x28);
                  }
                  if (cVar11 == '\0') {
                    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                               SUB84(in_dr14,0) / (float)((ulonglong)dVar9 >> 0x20))
                    ;
                  }
                  else {
                    in_dr14 = in_dr14 / dVar9;
                  }
                  if (cVar12 == '\0') {
                    in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar9,0));
                  }
                  else {
                    in_dr0 = *(double *)(ar4 + 0x28);
                  }
                  if (cVar11 == '\0') {
                    in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) / SUB84(in_dr14,0),
                                              SUB84(in_dr0,0));
                  }
                  else {
                    in_dr0 = in_dr0 / in_dr14;
                  }
                  if (cVar12 == '\0') {
                    *(int *)(ar4 + 0x234) = (int)((ulonglong)in_dr0 >> 0x20);
                  }
                  else {
                    *(double *)(ar4 + 0x234) = in_dr0;
                  }
                  *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
switchD_8c0a242e_caseD_2:
                  fVar5 = SUB84(in_dr0,0);
                  if (cVar12 == '\0') {
                    fVar5 = *(float *)(ar4 + 0x28);
                  }
                  else {
                    in_xd0 = *(double *)(ar4 + 0x28);
                  }
                  uVar8 = (ulonglong)(uint)fVar5;
                  if (cVar11 == '\0' && 0.0 < fVar5) {
                    if (cVar12 == '\0') {
                      dVar9 = (double)CONCAT44(0x41f00000,*(undefined4 *)(ar4 + 0x244));
                    }
                    else {
                      in_xd0 = *(double *)(ar4 + 0x244);
                      dVar9 = 1.19735218507889e-311;
                    }
                    if (cVar11 == '\0') {
                      fVar5 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
                    }
                    else {
                      fVar5 = SUB84(dVar9 + dVar9,0);
                    }
                    if (cVar12 == '\0') {
                      dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x234),fVar5);
                    }
                    else {
                      dVar9 = *(double *)(ar4 + 0x234);
                    }
                    if (cVar11 == '\0') {
                      fVar5 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
                    }
                    else {
                      fVar5 = SUB84(dVar9 * dVar9,0);
                    }
                    if (cVar12 == '\0') {
                      uVar6 = CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar5);
                    }
                    else {
                      uVar6 = *(undefined8 *)(ar4 + 0x28);
                    }
                    if (cVar11 == '\0' && (float)uVar6 < (float)((ulonglong)uVar6 >> 0x20)) {
                      FUN_8c03f3ac(ar4 + 0xb0,pdVar3,ar6_00,ar7_00);
                      FUN_8c031764(ar4,ar6,ar5,ar7_00);
                      *(undefined4 *)(ar4 + 0x40) = 3;
                      if (cVar12 == '\0') {
                        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x234),
                                                 *(undefined4 *)(ar4 + 0x28));
                      }
                      else {
                        in_xd0 = *(double *)(ar4 + 0x28);
                        dVar9 = *(double *)(ar4 + 0x234);
                      }
                      if (cVar11 == '\0') {
                        fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
                      }
                      else {
                        fVar5 = SUB84(dVar9 - dVar9,0);
                      }
                      if (cVar12 == '\0') {
                        *(float *)(ar4 + 0x28) = fVar5;
                        fVar5 = *(float *)(ar4 + 0x28);
                      }
                      else {
                        *(double *)(ar4 + 0x28) = in_xd0;
                      }
                      if (cVar11 != '\0' || fVar5 <= 0.0) {
                        if (cVar12 == '\0') {
                          *(undefined4 *)(ar4 + 0x28) = 0;
                        }
                        else {
                          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
                        }
                      }
                      uVar8 = (ulonglong)(uint)fVar5;
                      FUN_8c0230f0(ar4 + 0x14,ar6,ar5,ar7_00,auStack_64);
                      uVar1 = Vec3_length(auStack_64,ar6,ar5,ar7_00);
                      Vec3_assign(ar4 + 0x80,uVar1,ar5,ar7_00);
                      uVar1 = 0xffffffff;
                      Vec3_dtor(auStack_64,0xffffffff,ar5,ar7_00);
                      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar5,ar7_00,in_stack_ffffff18);
                      if (cVar12 == '\0') {
                        *(int *)(ar4 + 0x244) = (int)(uVar8 >> 0x20);
                      }
                      else {
                        *(ulonglong *)(ar4 + 0x244) = uVar8;
                      }
                      goto switchD_8c0a242e_default;
                    }
                    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
                  }
                  else {
                    CAnimBody_GetCurFrame(ar4 + 0xb0,pdVar3,ar6_00,ar7_00,in_stack_ffffff18);
                    if (cVar12 == '\0') {
                      *(int *)(ar4 + 0x244) = (int)(uVar8 >> 0x20);
                    }
                    else {
                      *(ulonglong *)(ar4 + 0x244) = uVar8;
                    }
                    if (cVar12 == '\0') {
                      *(undefined4 *)(ar4 + 0x28) = 0;
                    }
                    else {
                      *(ulonglong *)(ar4 + 0x28) = uVar8 & 0xffffffff;
                    }
                    *(undefined4 *)(ar4 + 300) = 3;
                  }
                  goto switchD_8c0a242e_caseD_3;
                }
              }
            }
          }
        }
      }
    }
    FUN_8c0230f0(ar4 + 0x14,pdVar3,ar6_00,ar7_00,auStack_54);
    uVar1 = Vec3_length(auStack_54,pdVar3,ar6_00,ar7_00);
    Vec3_assign(ar4 + 0x80,uVar1,ar6_00,ar7_00);
    Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
  }
switchD_8c0a242e_default:
  Vec3_dtor(&fStack_28,0xffffffff,Vec3_dtor,&fStack_28);
  return 1;
}



/* FUN_8c0a2bf4 @ 8c0a2bf4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a358a) */
/* WARNING: Removing unreachable block (ram,0x8c0a2c0a) */
/* WARNING: Removing unreachable block (ram,0x8c0a2bf4) */
/* WARNING: Removing unreachable block (ram,0x8c0a2bf6) */
/* WARNING: Removing unreachable block (ram,0x8c0a2cda) */
/* WARNING: Removing unreachable block (ram,0x8c0a358e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a2bf4(int ar4,double *ar5,double *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  double *ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  float fVar6;
  double in_dr0;
  float fVar10;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  double in_dr2;
  double dVar11;
  undefined8 in_dr4;
  undefined4 uVar12;
  undefined8 in_dr14;
  double in_xd0;
  double in_xd14;
  bool bVar13;
  char cVar14;
  char cVar15;
  undefined4 in_stack_ffffff54;
  
  uVar3 = SUB84(in_dr2,0);
  cVar15 = '\0';
  cVar14 = '\0';
  dVar8 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr4 >> 0x20));
  ar5_00 = (double *)0x1;
  iVar2 = *(int *)(ar4 + 300);
  if (7 < iVar2) {
    return 1;
  }
  if (iVar2 < 0) {
    return 1;
  }
                    /* WARNING: Switch is manually overridden */
  switch(iVar2) {
  case 0:
    vec3_clear(ar4 + 0x224,1,ar6,ar7);
    Vec3_assign(ar4 + 0x54,ar5,ar6,ar7);
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44(SUB84(dVar8,0),0x41700000);
    }
    else {
      in_xd0 = -4.2458146733691317e-250;
      dVar7 = in_xd14;
    }
    if (cVar14 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar7;
    }
    if (cVar15 == '\0') {
      *(int *)(ar4 + 0x58) = (int)((ulonglong)dVar7 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x58) = dVar7;
    }
    FUN_8c031b68(ar4,0x8c2851b0,ar6,ar7);
    iVar2 = ar4 + 0x54;
    FUN_8c031bb4(ar4,ar5,iVar2,ar7);
    FUN_8c022fc0(ar5,ar4 + 0x54,iVar2,FUN_8c022fc0);
    uVar3 = SUB84(in_dr2,0);
    fVar6 = (float)((ulonglong)dVar7 >> 0x20);
    if (cVar15 == '\0') {
      fVar10 = 300.0;
    }
    else {
      fVar6 = 300.0;
      fVar10 = 2.46629e-43;
      in_xd0 = dVar7;
    }
    if (cVar14 != '\0' || fVar10 <= fVar6) {
      ar7 = 0;
      uVar4 = 1;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
      ar6 = (double *)0xb0;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,0xb0,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      goto switchD_8c0a2c2e_caseD_1;
    }
    ar7 = 0;
    ar6 = (double *)0x0;
    ar5_00 = (double *)0x2;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0,0);
    if (cVar15 == '\0') {
      fVar6 = *(float *)(ar4 + 0x28);
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x28);
    }
    in_dr0 = (double)(ulonglong)(uint)fVar6;
    if (fVar6 == 0.0) {
      in_dr0 = (double)CONCAT44(0x3f800000,fVar6);
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0x3f800000;
      }
      else {
        *(double *)(ar4 + 0x28) = in_dr0;
      }
    }
    *(undefined4 *)(ar4 + 300) = 3;
  case 3:
switchD_8c0a2c2e_caseD_3:
    fVar6 = SUB84(in_dr0,0);
    iVar2 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6,ar7);
    if (iVar2 == 2) {
      FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7);
    }
    else {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
    }
    if (cVar15 == '\0') {
      fVar6 = *(float *)(ar4 + 0x18);
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x18);
    }
    cVar5 = cVar14 == '\0' && 0.0 < fVar6;
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar4 + 0x54));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x54);
      dVar7 = *ar5;
    }
    if (cVar14 == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 != '\0' || 0.0 <= fVar6) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(ar4 + 0x14);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x14);
      }
      if (cVar14 != '\0' || 0.0 <= fVar6) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar4 + 0x54));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x54);
      dVar7 = *ar5;
    }
    if (cVar14 == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 == '\0' && fVar6 < 0.0) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(ar4 + 0x14);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x14);
      }
      if (cVar14 == '\0' && fVar6 < 0.0) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)(ar4 + 0x5c));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x5c);
      dVar7 = ar5[1];
    }
    if (cVar14 == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 != '\0' || 0.0 <= fVar6) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(ar4 + 0x1c);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x1c);
      }
      if (cVar14 != '\0' || 0.0 <= fVar6) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)(ar4 + 0x5c));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x5c);
      dVar7 = ar5[1];
    }
    if (cVar14 == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    dVar7 = (double)(ulonglong)(uint)fVar6;
    if (cVar14 == '\0' && fVar6 < 0.0) {
      if (cVar15 == '\0') {
        fVar6 = *(float *)(ar4 + 0x1c);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x1c);
      }
      dVar7 = (double)(ulonglong)(uint)fVar6;
      if (cVar14 == '\0' && fVar6 < 0.0) {
        cVar5 = cVar5 + '\x01';
      }
    }
    if (cVar5 == '\x03') {
      if (cVar15 == '\0') {
        uVar3 = *(undefined4 *)(ar4 + 0x28);
        dVar7 = (double)CONCAT44(uVar3,SUB84(dVar7,0));
        *(undefined4 *)(ar4 + 0x24) = uVar3;
      }
      else {
        dVar7 = *(double *)(ar4 + 0x28);
        *(double *)(ar4 + 0x24) = dVar7;
      }
      ar5_00 = (double *)(ar4 + 0x54);
      FUN_8c022fc0(ar5,ar5_00,ar6,ar7);
      if (cVar15 == '\0') {
        dVar11 = (double)CONCAT44(0x40000000,SUB84(dVar7,0));
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar11 = 1.19733612505215e-311;
      }
      if (cVar14 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) *
                                 (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 * dVar11;
      }
      if (cVar15 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar11,0));
      }
      else {
        dVar11 = *(double *)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) /
                                 (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar8 = dVar7 / dVar11;
      }
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar11,0));
      }
      else {
        dVar7 = *(double *)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) /
                                 (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 / dVar8;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x234) = (int)((ulonglong)dVar7 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x234) = dVar7;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    else {
      ar5_00 = (double *)(ar4 + 0x54);
      ar6 = ar5;
      iVar2 = FUN_8c031764(ar4,ar5_00,ar5,ar7);
      if (iVar2 != 0) {
        if (cVar15 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),SUB84(in_dr2,0));
          dVar7 = (double)CONCAT44(SUB84(dVar8,0),0x41700000);
        }
        else {
          in_dr2 = *(double *)((int)ar5 + 4);
          in_xd0 = 1.19734804055586e-311;
          dVar7 = in_xd14;
        }
        if (cVar14 == '\0') {
          fVar6 = (float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0);
          dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0));
          bVar13 = (float)((ulonglong)in_dr2 >> 0x20) < fVar6;
        }
        else {
          dVar7 = dVar7 - dVar7;
          bVar13 = in_dr2 < dVar7;
        }
        if (bVar13) {
          if (cVar15 == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x234),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x28);
            dVar7 = *(double *)(ar4 + 0x234);
          }
          if (cVar14 == '\0') {
            fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar7 - dVar7,0);
          }
          if (cVar15 == '\0') {
            *(float *)(ar4 + 0x28) = fVar6;
            fVar6 = *(float *)(ar4 + 0x28);
          }
          else {
            *(double *)(ar4 + 0x28) = in_xd0;
            in_xd0 = *(double *)(ar4 + 0x28);
          }
          if (cVar14 == '\0' && 0.0 < fVar6) {
            return 1;
          }
          if (cVar15 == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
          }
          if (cVar15 == '\0') {
            *(undefined4 *)(ar4 + 0x234) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x234) = (ulonglong)(uint)fVar6;
          }
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          break;
        }
      }
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar7 & 0xffffffff;
      }
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x234) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x234) = (ulonglong)dVar7 & 0xffffffff;
      }
      *(undefined4 *)(ar4 + 300) = 4;
    }
    break;
  case 1:
switchD_8c0a2c2e_caseD_1:
    ar5_00 = (double *)((int)ar5 + 4);
    if (cVar15 == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)ar5_00,uVar3);
      dVar7 = (double)CONCAT44(SUB84(dVar8,0),0x41700000);
    }
    else {
      in_dr2 = *ar5_00;
      in_xd0 = 1.19734804055586e-311;
      dVar7 = in_xd14;
    }
    if (cVar14 == '\0') {
      fVar6 = (float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0);
      dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0));
      bVar13 = (float)((ulonglong)in_dr2 >> 0x20) < fVar6;
    }
    else {
      dVar7 = dVar7 - dVar7;
      bVar13 = in_dr2 < dVar7;
    }
    if (bVar13) {
      ar5_00 = (double *)(ar4 + 0x54);
      FUN_8c022fc0(ar5,ar5_00,ar6,ar7);
      if (cVar15 == '\0') {
        in_dr0 = (double)CONCAT44(0x43960000,(int)((ulonglong)dVar7 >> 0x20));
      }
      else {
        in_dr0 = 6.37158960238423e-312;
        in_xd0 = dVar7;
      }
      if (cVar14 != '\0' || (float)((ulonglong)in_dr0 >> 0x20) <= SUB84(in_dr0,0)) {
LAB_8c0a2e1c:
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7,in_stack_ffffff54);
        fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
        if (cVar15 == '\0') {
          fVar10 = 15.0;
          in_dr0 = in_xd0;
        }
        else {
          fVar6 = 15.0;
          fVar10 = 1.79366e-43;
        }
        if (cVar14 == '\0' && fVar6 < fVar10) {
          return 1;
        }
        CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7,in_stack_ffffff54);
        if (cVar15 == '\0') {
          fVar6 = 35.0;
        }
        else {
          in_dr0 = (double)CONCAT44(fVar10,fVar6);
          fVar10 = 35.0;
          fVar6 = 7.73517e-43;
        }
        if (cVar14 == '\0' && fVar10 < fVar6) {
          if (cVar15 == '\0') {
            dVar8 = (double)CONCAT44(0x3e19999a,*(undefined4 *)(ar4 + 0x228));
          }
          else {
            in_dr0 = *(double *)(ar4 + 0x228);
            dVar8 = -8.3327967895966e-251;
          }
          if (cVar14 == '\0') {
            fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar8 + dVar8,0);
          }
          if (cVar15 == '\0') {
            *(float *)(ar4 + 0x228) = fVar6;
          }
          else {
            *(double *)(ar4 + 0x228) = in_dr0;
          }
        }
        else {
          if (cVar15 == '\0') {
            dVar8 = (double)CONCAT44(0x3df5c28f,*(undefined4 *)(ar4 + 0x228));
          }
          else {
            in_dr0 = *(double *)(ar4 + 0x228);
            dVar8 = 9.363579837252917e+86;
          }
          if (cVar14 == '\0') {
            fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar8 - dVar8,0);
          }
          if (cVar15 == '\0') {
            *(float *)(ar4 + 0x228) = fVar6;
          }
          else {
            *(double *)(ar4 + 0x228) = in_dr0;
          }
        }
        FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7);
        return 1;
      }
      if (cVar15 == '\0') {
        dVar7 = (double)(ulonglong)*(uint *)(ar4 + 0x18);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x18);
        dVar7 = in_dr0;
      }
      in_dr0 = (double)((ulonglong)dVar7 & 0xffffffff);
      if (cVar14 != '\0' || SUB84(dVar7,0) <= 0.0) goto LAB_8c0a2e1c;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      goto switchD_8c0a2c2e_caseD_2;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar7 & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x234) = (ulonglong)dVar7 & 0xffffffff;
    }
    *(undefined4 *)(ar4 + 300) = 4;
    vec3_clear(ar4 + 0x224,ar5_00,ar6,ar7);
    break;
  case 2:
switchD_8c0a2c2e_caseD_2:
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
    if (iVar2 == 1) {
      vec3_clear(ar4 + 0x224,ar5_00,ar6,ar7);
      uVar12 = SUB84(dVar8,0);
      uVar4 = SUB84(in_dr0,0);
      ar7 = 0;
      ar6 = (double *)0xffffffff;
      uVar3 = 2;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
      if (cVar15 == '\0') {
        uVar3 = *(undefined4 *)(ar4 + 0x28);
        dVar8 = (double)CONCAT44(uVar3,uVar4);
        *(undefined4 *)(ar4 + 0x24) = uVar3;
      }
      else {
        dVar8 = *(double *)(ar4 + 0x28);
        *(double *)(ar4 + 0x24) = dVar8;
      }
      ar5_00 = (double *)(ar4 + 0x54);
      FUN_8c022fc0(ar5,ar5_00,ar6,ar7);
      uVar3 = SUB84(dVar8,0);
      if (cVar15 == '\0') {
        dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),uVar12);
        dVar7 = (double)CONCAT44(0x40000000,uVar3);
      }
      else {
        dVar7 = 1.19733612505215e-311;
      }
      if (cVar14 == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) *
                                 (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 * dVar7;
      }
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar7,0));
      }
      else {
        dVar7 = *(double *)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) /
                                 (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 / dVar7;
      }
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar7,0));
      }
      else {
        dVar7 = *(double *)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) /
                                  (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar7,0));
      }
      else {
        in_dr0 = dVar7 / dVar8;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x234) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x234) = in_dr0;
      }
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      goto switchD_8c0a2c2e_caseD_3;
    }
    CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7,in_stack_ffffff54);
    fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
    if (cVar15 == '\0') {
      fVar10 = 15.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar6 = 15.0;
      fVar10 = 35.0;
    }
    if (cVar14 == '\0' && fVar6 < fVar10) {
      return 1;
    }
    CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7,in_stack_ffffff54);
    if (cVar15 == '\0') {
      fVar6 = 35.0;
    }
    else {
      in_dr0 = (double)CONCAT44(fVar10,fVar6);
      fVar10 = 35.0;
      fVar6 = 7.73517e-43;
    }
    in_xd0 = in_dr0;
    if (cVar14 == '\0' && fVar10 < fVar6) {
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(0x3e19999a,*(undefined4 *)(ar4 + 0x228));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x228);
        dVar7 = -8.3327967895966e-251;
      }
      if (cVar14 == '\0') {
        dVar7 = (double)(ulonglong)(uint)(SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20));
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x228) = SUB84(dVar7,0);
      }
      else {
        *(double *)(ar4 + 0x228) = in_xd0;
      }
    }
    else {
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(0x3df5c28f,*(undefined4 *)(ar4 + 0x228));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x228);
        dVar7 = 3.6211232371055283e+96;
      }
      if (cVar14 == '\0') {
        dVar7 = (double)(ulonglong)(uint)(SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20));
      }
      else {
        dVar7 = dVar7 - dVar7;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x228) = SUB84(dVar7,0);
      }
      else {
        *(double *)(ar4 + 0x228) = in_xd0;
      }
    }
    ar5_00 = (double *)(ar4 + 0x54);
    ar6 = ar5;
    iVar2 = FUN_8c031764(ar4,ar5_00,ar5,ar7);
    if (iVar2 != 0) {
      if (cVar15 == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),SUB84(in_dr2,0));
        dVar7 = (double)CONCAT44(SUB84(dVar8,0),0x41700000);
      }
      else {
        in_dr2 = *(double *)((int)ar5 + 4);
        in_xd0 = 1.19734804055586e-311;
        dVar7 = in_xd14;
      }
      if (cVar14 == '\0') {
        fVar6 = (float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0);
        dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0));
        bVar13 = (float)((ulonglong)in_dr2 >> 0x20) < fVar6;
      }
      else {
        dVar7 = dVar7 - dVar7;
        bVar13 = in_dr2 < dVar7;
      }
      if (bVar13) {
        return 1;
      }
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar7 & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x234) = (ulonglong)dVar7 & 0xffffffff;
    }
    *(undefined4 *)(ar4 + 300) = 4;
    break;
  case 5:
    goto switchD_8c0a2c2e_caseD_5;
  case 6:
    goto switchD_8c0a2c2e_caseD_6;
  case 7:
    if (*(int *)(ar4 + 0x248) < 0x12d) {
      FUN_8c03f3ac(ar4 + 0xb0,1,ar6,ar7);
      *(int *)(ar4 + 0x248) = *(int *)(ar4 + 0x248) + 1;
      return 1;
    }
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,1,ar6,ar7);
    if (iVar2 != 1) {
      return 1;
    }
    *(undefined4 *)(ar4 + 300) = 0;
    *(undefined4 *)(ar4 + 0x248) = 0;
    return 0;
  }
  uVar3 = SUB84(in_dr2,0);
  iVar2 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6,ar7);
  if (iVar2 == 2) {
    FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7);
  }
  else {
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
  }
  if (cVar15 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x234),*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x28);
    dVar7 = *(double *)(ar4 + 0x234);
  }
  if (cVar14 == '\0') {
    fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 - dVar7,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x28) = fVar6;
    fVar6 = *(float *)(ar4 + 0x28);
  }
  else {
    *(double *)(ar4 + 0x28) = in_xd0;
    in_xd0 = *(double *)(ar4 + 0x28);
  }
  dVar7 = (double)(ulonglong)(uint)fVar6;
  if (cVar14 == '\0' && 0.0 < fVar6) {
    iVar2 = FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7);
    if (iVar2 != 0) {
      if (cVar15 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),uVar3);
        in_xd14 = (double)CONCAT44(SUB84(dVar8,0),0x41700000);
      }
      else {
        dVar11 = *(double *)((int)ar5 + 4);
        in_xd0 = 1.19734804055586e-311;
      }
      if (cVar14 == '\0') {
        fVar6 = (float)((ulonglong)in_xd14 >> 0x20) - SUB84(in_xd14,0);
        dVar7 = (double)CONCAT44(fVar6,SUB84(in_xd14,0));
        bVar13 = (float)((ulonglong)dVar11 >> 0x20) < fVar6;
      }
      else {
        dVar7 = in_xd14 - in_xd14;
        bVar13 = dVar11 < dVar7;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar11,0));
          dVar7 = (double)CONCAT44(0x41f80000,*(undefined4 *)(ar4 + 0x234));
        }
        else {
          dVar8 = *(double *)(ar4 + 0x28);
          dVar7 = 6.37145555296751e-312;
        }
        if (cVar14 == '\0') {
          bVar13 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20) <
                   (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          bVar13 = dVar7 * dVar7 < dVar8;
        }
        if (bVar13) {
          return 1;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        return 1;
      }
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar7 & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x234) = (ulonglong)dVar7 & 0xffffffff;
    }
    *(undefined4 *)(ar4 + 300) = 5;
  }
  else {
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x234) = (ulonglong)(uint)fVar6;
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
switchD_8c0a2c2e_caseD_5:
  if (cVar15 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x234),*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x28);
    dVar7 = *(double *)(ar4 + 0x234);
  }
  if (cVar14 == '\0') {
    fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 - dVar7,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x28) = fVar6;
    fVar6 = *(float *)(ar4 + 0x28);
  }
  else {
    *(double *)(ar4 + 0x28) = in_xd0;
    in_xd0 = *(double *)(ar4 + 0x28);
  }
  dVar7 = (double)(ulonglong)(uint)fVar6;
  if (cVar14 != '\0' || fVar6 <= 0.0) {
LAB_8c0a3432:
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar7 & 0xffffffff;
    }
    dVar7 = (double)((ulonglong)dVar7 & 0xffffffff);
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x234) = 0;
    }
    else {
      *(double *)(ar4 + 0x234) = dVar7;
    }
  }
  else {
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44(0x41700000,*(undefined4 *)((int)ar5 + 4));
    }
    else {
      in_xd0 = *(double *)((int)ar5 + 4);
      dVar7 = -8.33279687642364e-251;
    }
    if (cVar14 == '\0') {
      bVar13 = SUB84(dVar7,0) < SUB84(dVar8,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      bVar13 = dVar7 < dVar8 - dVar7;
    }
    if (!bVar13) goto LAB_8c0a3432;
  }
  iVar2 = FUN_8c031764(ar4,ar4 + 0x54,ar5,ar4 + 0x54);
  if (iVar2 == 0) {
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar7 & 0xffffffff;
    }
  }
  ar7 = 0;
  uVar4 = 0xffffffff;
  uVar3 = 8;
  s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
  s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar4,ar7);
  *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
switchD_8c0a2c2e_caseD_6:
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x234),*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x28);
    dVar8 = *(double *)(ar4 + 0x234);
  }
  if (cVar14 == '\0') {
    fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 - dVar8,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x28) = fVar6;
    fVar6 = *(float *)(ar4 + 0x28);
  }
  else {
    *(double *)(ar4 + 0x28) = in_xd0;
  }
  if (cVar14 != '\0' || fVar6 <= 0.0) {
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x234) = (ulonglong)(uint)fVar6;
    }
  }
  uVar9 = (ulonglong)(uint)fVar6;
  iVar2 = ar4 + 0x54;
  iVar1 = FUN_8c031764(ar4,iVar2,ar5,ar7);
  if (iVar1 == 0) {
    uVar9 = uVar9 & 0xffffffff;
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar9;
    }
  }
  uVar3 = (undefined4)(uVar9 >> 0x20);
  CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar2,ar5,ar7);
  CAnimBody_GetCurFrame(ar4 + 0xb0,iVar2,ar5,ar7,in_stack_ffffff54);
  if (cVar15 == '\0') {
    uVar9 = CONCAT44(0x41f00000,uVar3);
  }
  else {
    uVar9 = 0x6013d10d41f00000;
  }
  if (cVar14 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar9 & 0xffffffff;
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  return 1;
}



/* FUN_8c0a3624 @ 8c0a3624 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a3668) */
/* WARNING: Removing unreachable block (ram,0x8c0a3660) */
/* WARNING: Removing unreachable block (ram,0x8c0a3658) */
/* WARNING: Removing unreachable block (ram,0x8c0a3664) */
/* WARNING: Removing unreachable block (ram,0x8c0a366c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a3624(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float in_fr1;
  float extraout_fr1;
  char cVar4;
  char cVar5;
  undefined1 auStack_20 [20];
  
  cVar5 = '\0';
  cVar4 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  if (*(int *)(ar4 + 300) == 0) {
    FUN_8c032518(ar4,ar5,ar6,ar7);
    Vec3_assign(ar4 + 0x54,auStack_20,ar6,ar7);
    Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
    ar7 = 0;
    ar6_00 = 0xffffffff;
    ar5_00 = 1;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    FUN_8c031b68(ar4,0x8c2851b0,ar6_00,ar7);
    ar6 = ar4 + 0x54;
    FUN_8c031bb4(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    in_fr1 = extraout_fr1;
  }
  else if (*(int *)(ar4 + 300) != 1) {
    return 1;
  }
  if (cVar5 == '\0') {
    in_fr1 = *(float *)(ar4 + 0x130);
  }
  if (cVar4 == '\0' && in_fr1 < 0.0) {
    vec3_clear(ar4 + 0x224,uVar2,ar6,ar7);
    uVar2 = ar5;
    FUN_8c031c74(ar4,ar5,ar5,ar7);
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,uVar2,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(ar4 + 300) = 0;
      uVar3 = 0;
    }
  }
  else {
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6,ar7);
    iVar1 = FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 300) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* FUN_8c0a37c8 @ 8c0a37c8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a3804) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a37c8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  ulonglong in_dr0;
  double dVar5;
  ulonglong uVar6;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uStack_c = 1;
  iVar3 = *(int *)(ar5 + 0x10);
  iVar1 = *(int *)(ar4 + 0x68);
  if (iVar1 == 0) {
    if (iVar3 != 3) {
      return iVar3;
    }
    FUN_8c032ab0(ar4,ar5,ar6,ar7);
    if (cVar8 == '\0') {
      *(int *)(ar4 + 0xa0) = (int)(in_dr0 >> 0x20);
    }
    else {
      *(ulonglong *)(ar4 + 0xa0) = in_dr0;
    }
    vec3_clear(ar4 + 0x224,ar5,ar6,ar7);
    if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
    }
    if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x234) = in_dr0 & 0xffffffff;
    }
    FUN_8c03c314(ar4,ar5,ar6,ar7);
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5 = 2;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
    *(int *)(ar4 + 0x68) = *(int *)(ar4 + 0x68) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return iVar3;
      }
      FUN_8c03f460(auStack_3c,*(undefined4 *)(ar5 + 0xc),ar6,ar7);
      iVar3 = ar4 + 0x54;
      uVar2 = 1;
      iVar1 = s_CMushroomerBody_AwayFrom_0a1ed0(ar4,**(undefined4 **)(ar5 + 4),1,iVar3);
      free_if_nonnull_wrap_102790(auStack_3c,0xffffffff,uVar2,iVar3);
      if (iVar1 == 0) {
        *(undefined4 *)(ar4 + 0x68) = 0;
        *(undefined4 *)(ar4 + 0x40) = 5;
        return 3;
      }
      return 3;
    }
    goto LAB_8c0a38c6;
  }
  CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
  FUN_8c0324ac(ar4,ar5,ar6,ar7);
  if (iVar3 == 3) {
    return 3;
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x3e99999a,*(undefined4 *)(ar4 + 0x94));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x94);
    dVar5 = 1.3411048233047396e-08;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x94) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x94) = in_xd0;
  }
  *(int *)(ar4 + 0x68) = *(int *)(ar4 + 0x68) + 1;
LAB_8c0a38c6:
  CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x94));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x94);
    dVar5 = -1.0142130068337341e-250;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x94) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x94) = in_xd0;
  }
  if (cVar8 == '\0') {
    *(undefined4 *)(ar4 + 0xa0) = 0;
    uVar6 = CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x94));
  }
  else {
    *(ulonglong *)(ar4 + 0xa0) = (ulonglong)(uint)fVar4;
    uVar6 = 0xb0bf800000;
  }
  if (cVar7 != '\0' || (float)(uVar6 >> 0x20) <= (float)uVar6) {
    FUN_8c073c9c(ar4,ar5,ar6,ar7);
    if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0x94) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x94) = uVar6 & 0xffffffff;
    }
    *(int *)(ar4 + 0x68) = *(int *)(ar4 + 0x68) + 1;
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(undefined4 *)(ar4 + 300) = 0;
    FUN_8c032ab0(ar4,ar5,ar6,ar7);
    FUN_8c032ab0(ar4,ar5,ar6,ar7);
    FUN_8c032ab0(ar4,ar5,ar6,ar7);
    Vec3_ctor_xyz(auStack_20,ar5,ar6,ar7);
    Vec3_assign(ar4 + 0x54,auStack_20,ar6,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
    Vec3_normalize(ar4 + 0x54,uVar2,ar6,ar7);
    Vec3_assign(ar4 + 0x54,auStack_30,ar6,ar7);
    Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  }
  return 3;
}



/* FUN_8c0a3aac @ 8c0a3aac callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a3ad0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a3aac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  undefined4 uVar4;
  float fVar5;
  code *pcVar6;
  undefined8 in_dr0;
  code *pcVar7;
  float fVar8;
  char cVar9;
  char cVar10;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  if (*(int *)(ar4 + 300) == 0) {
    ar7 = 0;
    ar6_00 = 0;
    uVar3 = 4;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0,0);
    *(undefined4 *)(ar4 + 0x274) = 1;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else {
    uVar3 = ar5;
    ar6_00 = ar6;
    if (*(int *)(ar4 + 300) != 1) {
      return 1;
    }
  }
  iVar1 = get_field_1c_026dd8(ar4 + 0xb0,uVar3,ar6_00,ar7);
  if (iVar1 == 4) {
    Vec3_set_xyz(auStack_18,uVar3,ar6_00,ar7);
    iVar1 = ar4 + 0x80;
    FUN_8c031eb0(ar4,ar5,ar6,iVar1,auStack_28);
    Vec3_assign(ar4 + 0x80,auStack_28,ar6,iVar1);
    Vec3_dtor(auStack_28,0xffffffff,ar6,iVar1);
    uVar3 = 0xffffffff;
    object_dtor_delete(auStack_18,0xffffffff,ar6,iVar1);
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1,ar5);
    if (cVar10 == '\0') {
      pcVar7 = (code *)0x41200000;
    }
    else {
      fVar5 = 10.0;
      pcVar7 = Vec3_set_xyz;
    }
    if (cVar9 != '\0' || (float)pcVar7 <= fVar5) {
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1,ar5);
      if (cVar10 == '\0') {
        pcVar6 = pcVar7;
        pcVar7 = (code *)0x42200000;
      }
      else {
        pcVar6 = (code *)0x42200000;
        pcVar7 = (code *)0x24c;
      }
      if (cVar9 == '\0' && (float)pcVar6 < (float)pcVar7) {
        iVar2 = *(int *)(ar4 + 0x24c);
        *(int *)(ar4 + 0x24c) = iVar2 + 1;
        *(int *)(ar4 + 0x24c) = iVar2 + 2;
        if (4 < *(int *)(ar4 + 0x24c)) {
          *(undefined4 *)(ar4 + 0x24c) = 5;
        }
      }
    }
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1,ar5);
    if (cVar10 == '\0') {
      fVar5 = 40.0;
    }
    else {
      pcVar7 = (code *)0x42200000;
      fVar5 = 8.23963e-43;
    }
    if ((cVar9 != '\0' || fVar5 <= (float)pcVar7) &&
       (*(int *)(ar4 + 0x24c) = *(int *)(ar4 + 0x24c) + -1, *(int *)(ar4 + 0x24c) < 3)) {
      *(undefined4 *)(ar4 + 0x24c) = 0;
    }
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6,iVar1);
    if (iVar2 == 1) {
      uVar4 = 0;
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x24c) = 0;
    }
    else if (*(int *)(ar4 + 0x274) != 0) {
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1,ar5);
      if (cVar10 == '\0') {
        fVar8 = 35.0;
      }
      else {
        fVar5 = 35.0;
        fVar8 = 6.50202e-43;
      }
      if (cVar9 != '\0' || fVar8 <= fVar5) {
        *(int *)(ar4 + 0x1d0) = *(int *)(ar4 + 0x1d0) + *(int *)(ar4 + 0x274);
        if (*(int *)(ar4 + 0x1d0) < 7) {
          if (*(int *)(ar4 + 0x1d0) < 2) {
            *(undefined4 *)(ar4 + 0x274) = 0;
          }
        }
        else {
          *(int *)(ar4 + 0x274) = -*(int *)(ar4 + 0x274);
        }
      }
    }
  }
  else {
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6_00,ar7);
  }
  return uVar4;
}



/* FUN_8c0a3d08 @ 8c0a3d08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0a3d08(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  undefined1 auStack_1c [16];
  
  uVar3 = ar6;
  ar7_00 = ar7;
  iVar1 = FUN_8c023cd4(ar4 + 0x250,ar6,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c03f460(auStack_1c,ar7,uVar3,ar7_00);
    ar7_01 = auStack_1c;
    uVar3 = ar6;
    iVar1 = FUN_8c0a1828(ar4,ar5,ar6,ar7_01);
    free_if_nonnull_wrap_102790(auStack_1c,0xffffffff,uVar3,ar7_01);
    if (iVar1 == 0) {
      Vec3_assign(ar4 + 0x250,ar6,uVar3,ar7_01);
    }
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
    uVar2 = FUN_8c031de8(ar4,0,uVar3,ar7_00);
  }
  return uVar2;
}



/* FUN_8c0a3dc0 @ 8c0a3dc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a3dc0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar3;
  double in_dr0;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  int iStack_64;
  int iStack_60;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_set_zero(&fStack_14,ar5,ar6,ar7);
  Vec3_sub(ar6,ar5,ar6_00,ar7_00,auStack_34);
  uVar1 = Vec3_length(auStack_34,ar5,ar6_00,ar7_00);
  Vec3_ctor_copy(auStack_24,uVar1,ar6_00,ar7_00);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7_00);
  FUN_8c0230f0(ar7,uVar1,ar6_00,ar7_00,auStack_44);
  FUN_8c0230f0(auStack_24,uVar1,ar6_00,ar7_00,auStack_54);
  FUN_8c022dac(auStack_44,auStack_54,ar6_00,ar7_00);
  uStack_10 = SUB84(in_dr0,0);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    uStack_10 = uVar1;
    uVar1 = uStack_c;
  }
  uStack_c = uVar1;
  Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
  ar5_00 = auStack_24;
  iStack_60 = FUN_8c023334(ar7,ar5_00,ar6_00,ar7_00);
  if (iStack_60 == 4) {
    if (cVar6 == '\0') {
      in_dr0 = (double)CONCAT44(0xbf800000,uStack_10);
    }
    else {
      in_xd0 = CONCAT44(uStack_c,uStack_10);
      in_dr0 = -7.941325842067545e-251;
    }
    if (cVar5 == '\0') {
      fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(fVar3,SUB84(in_dr0,0) * fVar3);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar6 == '\0') {
      uStack_10 = SUB84(in_dr0,0);
    }
    else {
      uStack_10 = (undefined4)in_xd0;
      uStack_c = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  FUN_8c0231c8(auStack_24,ar5_00,ar6_00,ar7_00);
  iVar2 = (int)((ulonglong)in_dr0 >> 0x20);
  iStack_64 = iVar2;
  if (cVar6 != '\0') {
    iStack_64 = SUB84(in_dr0,0);
    iStack_60 = iVar2;
  }
  FUN_8c0231c8(ar7,ar5_00,ar6_00,ar7_00);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    in_dr0 = (double)CONCAT44(uVar1,iStack_64);
  }
  else {
    in_xd0 = CONCAT44(iStack_60,uVar1);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(in_dr0,0) - (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    fVar3 = SUB84(in_dr0 - in_dr0,0);
  }
  fStack_14 = fVar3;
  if (cVar6 != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar5 == '\0' && fVar3 < 0.0) {
    if (cVar6 == '\0') {
      dVar4 = (double)CONCAT44(0xbf800000,fStack_14);
    }
    else {
      in_xd0 = CONCAT44(uStack_10,fStack_14);
      dVar4 = -7.941325842067545e-251;
    }
    if (cVar5 == '\0') {
      fStack_14 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_14 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar6 != '\0') {
      fStack_14 = (float)in_xd0;
      uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  iVar2 = FUN_8c0232e8(ar7,auStack_24,ar6_00,ar7_00);
  if (iVar2 == 1) {
    if (cVar6 == '\0') {
      dVar4 = (double)CONCAT44(0xbf800000,fStack_14);
    }
    else {
      in_xd0 = CONCAT44(uStack_10,fStack_14);
      dVar4 = -7.941325842067545e-251;
    }
    if (cVar5 == '\0') {
      fStack_14 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_14 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar6 != '\0') {
      fStack_14 = (float)in_xd0;
      uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  vec3_copy_8c02b5fc(s0,&fStack_14,ar6_00,ar7_00);
  Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7_00);
  object_dtor_delete(&fStack_14,0xffffffff,ar6_00,ar7_00);
  return 0;
}



/* FUN_8c0a3f4c @ 8c0a3f4c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a4076) */
/* WARNING: Removing unreachable block (ram,0x8c0a3f96) */
/* WARNING: Removing unreachable block (ram,0x8c0a3f4c) */
/* WARNING: Removing unreachable block (ram,0x8c0a3f9a) */
/* WARNING: Removing unreachable block (ram,0x8c0a407a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a3f4c(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  undefined4 ar6_01;
  undefined4 ar7_00;
  float in_fr1;
  float fVar3;
  double dVar4;
  code *pcVar6;
  double dVar5;
  float fVar7;
  undefined4 in_fr14;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  float fStack_70;
  float fStack_6c;
  float fStack_5c;
  float fStack_58;
  code *apcStack_54 [4];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [4];
  double dStack_20;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  FUN_8c022d04(ar4 + 0x200,ar5,ar6,ar7);
  dVar5 = (double)(ulonglong)(uint)in_fr1;
  if (cVar9 == '\0') {
    fStack_58 = 0.0;
  }
  else {
    apcStack_54[0] = (code *)0x0;
    fStack_58 = in_fr1;
  }
  fVar7 = 1.0;
  Vec3_ctor_zero(auStack_24,uVar2,ar6_00,ar7);
  if ((*(int *)(ar6 + 0x68) == 0) || (-1 < (int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1e))) {
    if ((*(int *)(ar6 + 100) == 0) || (-1 < (int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1d))) {
      uVar2 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
    }
    else if ((*(int *)(ar4 + 0x124) == 0xb) || (*(int *)(ar4 + 0x124) == 0xc)) {
      uVar2 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
    }
    else {
      iVar1 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x50),uVar2,ar6_00,ar7);
      if ((iVar1 == 2) &&
         (iVar1 = (**(code **)(*(int *)(*(int *)(ar6 + 0x50) + 8) + 0x180))
                            (*(int *)(ar6 + 0x50),uVar2,ar6_00,ar7), iVar1 == 4)) {
        *(undefined4 *)(ar4 + 0x214) = 0;
        ar7_00 = 0;
        ar6_01 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0);
        uVar2 = 3;
        s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,3,ar6_01,ar7_00);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_01,ar7_00);
        uVar2 = Vec3_dtor(auStack_24,0xffffffff,ar6_01,ar7_00);
      }
      else {
        (**(code **)(*(int *)(*(int *)(ar6 + 0x50) + 8) + 0x170))
                  (*(int *)(ar6 + 0x50),uVar2,ar6_00,ar7);
        fVar3 = (float)((ulonglong)dVar5 >> 0x20);
        fStack_6c = fVar3;
        if (cVar9 != '\0') {
          fStack_6c = SUB84(dVar5,0);
          fVar3 = fVar7;
        }
        FUN_8c02f670(*(undefined4 *)(ar6 + 0x50),uVar2,ar6_00,ar7,auStack_44);
        Vec3_sub(ar5,auStack_44,ar6_00,ar7,apcStack_54);
        Vec3_assign(ar4 + 0x200,apcStack_54,ar6_00,ar7);
        Vec3_dtor(apcStack_54,0xffffffff,ar6_00,ar7);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
        Vec3_length_sq(ar4 + 0x200,uVar2,ar6_00,ar7);
        fVar7 = (float)((ulonglong)dVar5 >> 0x20);
        if (cVar9 == '\0') {
          dVar5 = (double)CONCAT44(fVar7,*(undefined4 *)(ar4 + 0x48));
          fStack_70 = fVar7;
        }
        else {
          fStack_70 = SUB84(dVar5,0);
          in_xd0 = *(undefined8 *)(ar4 + 0x48);
          fStack_6c = fVar7;
        }
        if (cVar8 == '\0') {
          fVar3 = SUB84(dVar5,0) + fVar3;
        }
        else {
          fVar3 = SUB84(dVar5 + (double)CONCAT44(in_fr14,fVar3),0);
        }
        if (cVar9 == '\0') {
          dVar5 = (double)CONCAT44(fStack_70,fVar3);
        }
        else {
          dVar5 = (double)CONCAT44(fStack_6c,fStack_70);
        }
        if (cVar8 == '\0') {
          fVar7 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar9 == '\0') {
          pcVar6 = (code *)0x3f000000;
          fStack_58 = fVar7;
        }
        else {
          fStack_58 = (float)in_xd0;
          apcStack_54[0] = (code *)((ulonglong)in_xd0 >> 0x20);
          fVar7 = 0.5;
          pcVar6 = Vec3_length;
        }
        if (cVar8 == '\0' && fVar7 < (float)pcVar6) {
          if (cVar9 == '\0') {
            fStack_58 = 0.5;
          }
          else {
            fStack_58 = 0.5;
            apcStack_54[0] = Vec3_length;
          }
        }
        Vec3_length(ar4 + 0x200,uVar2,ar6_00,ar7);
        FUN_8c023bf4(ar4 + 0x200,&fStack_58,ar6_00,ar7);
        uVar2 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
      }
    }
  }
  else {
    *(undefined4 *)(ar4 + 0x1d4) = 1;
    if (cVar9 == '\0') {
      fVar7 = *(float *)(*(int *)(ar6 + 0x68) + 0x158);
    }
    Vec3_assign(auStack_24,*(int *)(ar6 + 0x68) + 4,ar6_00,ar7);
    dVar4 = dStack_20;
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(dStack_20._0_4_,SUB84(dVar5,0));
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar7,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + (double)CONCAT44(in_fr14,fVar7);
    }
    dVar5 = dVar4;
    if (cVar9 == '\0') {
      dStack_20 = (double)CONCAT44(dStack_20._4_4_,(int)((ulonglong)dVar4 >> 0x20));
      dVar5 = dStack_20;
    }
    dStack_20 = dVar5;
    Vec3_sub(ar5,auStack_24,ar6_00,ar7,auStack_34);
    Vec3_assign(ar4 + 0x200,auStack_34,ar6_00,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
    Vec3_length_sq(ar4 + 0x200,uVar2,ar6_00,ar7);
    fVar3 = (float)((ulonglong)dVar4 >> 0x20);
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x48));
      fStack_5c = fVar3;
    }
    else {
      fStack_5c = SUB84(dVar4,0);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      fStack_58 = fVar3;
    }
    if (cVar8 == '\0') {
      fVar7 = SUB84(dVar4,0) + fVar7;
    }
    else {
      fVar7 = SUB84(dVar4 + (double)CONCAT44(in_fr14,fVar7),0);
    }
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44(fStack_5c,fVar7);
    }
    else {
      dVar5 = (double)CONCAT44(fStack_58,fStack_5c);
    }
    if (cVar8 == '\0') {
      fVar7 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar9 == '\0') {
      pcVar6 = (code *)0x3f000000;
      fStack_58 = fVar7;
    }
    else {
      fStack_58 = (float)in_xd0;
      apcStack_54[0] = (code *)((ulonglong)in_xd0 >> 0x20);
      fVar7 = 0.5;
      pcVar6 = Vec3_length;
    }
    if (cVar8 == '\0' && fVar7 < (float)pcVar6) {
      if (cVar9 == '\0') {
        fStack_58 = 0.5;
      }
      else {
        fStack_58 = 0.5;
        apcStack_54[0] = Vec3_length;
      }
    }
    Vec3_length(ar4 + 0x200,uVar2,ar6_00,ar7);
    FUN_8c023bf4(ar4 + 0x200,&fStack_58,ar6_00,ar7);
    uVar2 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  }
  return uVar2;
}



/* Class_12ad14_m3_0a427c @ 8c0a427c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12ad14_m3_0a427c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(0x128 + ar4) == 0) {
    uVar4 = 0;
    uVar3 = 0xffffffff;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0)
    ;
    uVar2 = 3;
    s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,3,uVar3,uVar4);
    iVar1 = (*(code *)(&s_CAnimBody_SetFrame_033e6e))
                      (ar4 + 0xb0,uVar2,uVar3,uVar4);
  }
  else {
    iVar1 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7);
    if ((iVar1 == 0xd) ||
       (iVar1 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7),
       iVar1 == 0xe)) {
      iVar1 = FUN_8c03f3ac(ar4 + 0xb0,ar5,ar6,ar7);
      if (iVar1 == 7) {
        iVar1 = rand_range(ar4,0,100,ar7);
        if (iVar1 < 0x50) {
          iVar1 = (*(code *)(&s_CAnimBody_SetAnimation_033a94))
                            (ar4 + 0xb0,0xd,0xffffffff,0);
        }
        else {
          iVar1 = (*(code *)(&s_CAnimBody_SetAnimation_033a94))
                            (ar4 + 0xb0,0xe,0xffffffff,0);
        }
      }
    }
    else {
      uVar4 = 0;
      uVar3 = 0xffffffff;
      uVar2 = 0xe;
      (*(code *)(&s_CAnimBody_SetAnimation_033a94))
                (ar4 + 0xb0,0xe,0xffffffff,0);
      iVar1 = (*(code *)(&s_CAnimBody_SetFrame_033e6e))
                        (ar4 + 0xb0,uVar2,uVar3,uVar4);
    }
  }
  return iVar1;
}



/* Class_12ad14_m4_0a43d4 @ 8c0a43d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ad14_m4_0a43d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 0;
  ar6_00 = 0xffffffff;
  s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0);
  uVar1 = 3;
  s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,3,ar6_00,ar7_00);
  uVar1 = (*(code *)(&s_CAnimBody_SetFrame_033e6e))
                    (ar4 + 0xb0,uVar1,ar6_00,ar7_00);
  return uVar1;
}



/* FUN_8c0a4448 @ 8c0a4448 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a4448(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 auStack_34 [24];
  undefined1 auStack_1c [28];
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c1261b0),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c285180;
  global_list_push(uVar1,(&Vec3_dtor),0x8c285180,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1261c0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c28518c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c28518c,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1261d0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c285198;
  global_list_push(uVar1,(&Vec3_dtor),0x8c285198,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1261e0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2851a4;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2851a4,ar7);
  uVar1 = FUN_8c030e34(auStack_1c,puVar3,uVar2,ar7);
  FUN_8c05d608(0x8c2851b0,uVar1,uVar2,ar7);
  uVar1 = FUN_8c030e34(auStack_34,uVar1,uVar2,ar7);
  FUN_8c05d608(0x8c2851b0 + 0x18,uVar1,uVar2,ar7);
  uVar2 = Vec3_ctor_xyz(0x8c2851ec,uVar1,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c2851e0,ar7);
  return uVar2;
}



/* s_GRAPHICS_SPIDERLINE_0a4592 @ 8c0a4590 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_SPIDERLINE_0a4592(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 0x18;
  ar6_00 = 1;
  ar5_00 = 0xd;
  (*(code *)(&FUN_8c0254d0))
            (ar4,0xd,1,0x18,1,ar5,0x8c285370,0x8c2854a0,*(undefined4 *)(&DATA_8c13b08c));
  *(undefined **)(ar4 + 8) = (&DATA_8c12aeec);
  FUN_8c0ab760(ar4 + 0x490,ar5_00,ar6_00,ar7_00);
  FUN_8c0a6164(ar4 + 0x53c,ar5_00,ar6_00,ar7_00);
  FUN_8c016fcc(ar4 + 0x26fc,ar5_00,ar6_00,ar7_00);
  (*(code *)(&FUN_8c014334))
            (ar4 + 0xc,ar5_00,ar6_00,ar7_00,(&DATA_8c13b100) + 0xe1);
  *(int *)(0x308 + ar4) = ar4 + 0x490;
  *(int *)(0x30c + ar4) = ar4 + 0x53c;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  (*(code *)(&FUN_8c0f532c))
            (ar4,*(undefined4 *)(0xb4 + *(int *)(0x328 + ar4)),ar4 + 0x26fc,
             ar7_00);
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



/* Class_12aeec_m2_0a471c @ 8c0a471c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12aeec_m2_0a471c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  CAnimal_m2_02573c(ar4,ar5,ar6,ar7);
  return 1;
}



/* Class_12aeec_m3_0a4744 @ 8c0a4744 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12aeec_m3_0a4744(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  CAnimal_m3_026078(ar4,ar5,ar6,ar7);
  return 1;
}



/* Class_12aeec_m4_0a476c @ 8c0a476c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12aeec_m4_0a476c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x1c))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* Class_12aeec_m5_0a4784 @ 8c0a4784 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12aeec_m5_0a4784(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = (**(code **)(**(int **)(0x30c + ar4) + 0x14))
                    (*(int **)(0x30c + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* Class_12aeec_m6_0a47f0 @ 8c0a47f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12aeec_m6_0a47f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (**(code **)(*(int *)(ar4 + 8) + 0x1c))(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c02c398(ar4 + 0x174,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a481c @ 8c0a481c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a481c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ain0;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  int ar7_00;
  int ar6_00;
  int iVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffffcc;
  int s12;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar8 = '\0';
  cVar7 = '\0';
  FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffffcc);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_ffffffcc);
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    ar7_00 = (int)(SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar4 / dVar4);
  }
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    ar6_00 = (int)(SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar4 / dVar4);
  }
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    iVar6 = (int)(dVar4 / dVar4);
  }
  FUN_8c256b0c(0,iVar6,ar6_00,ar7_00,in_stack_ffffffcc);
  FUN_8c0a4a34(ar4 + 0x53c,iVar6,ar6_00,ar7_00,&stack0xffffffe0);
  vec3_copy_8c02b5fc(&stack0xffffffec,&stack0xffffffe0,ar6_00,ar7_00);
  object_dtor_delete(&stack0xffffffe0,0xffffffff,ar6_00,ar7_00);
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(0x47800000,uStack_10);
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    iVar6 = (int)(dVar4 / dVar4);
  }
  FUN_8c256ce0(0,iVar6,ar6_00,ar7_00,in_stack_ffffffcc);
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(0x47800000,in_stack_ffffffec);
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    iVar6 = (int)(dVar4 / dVar4);
  }
  FUN_8c256a78(0,iVar6,ar6_00,ar7_00,in_stack_ffffffcc);
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(0x47800000,uStack_c);
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    fVar5 = (float)((ulonglong)dVar4 >> 0x20);
    fVar3 = SUB84(dVar4,0) / fVar5;
    dVar4 = (double)CONCAT44(fVar5,fVar3);
    iVar6 = (int)fVar3;
  }
  else {
    dVar4 = dVar4 / dVar4;
    iVar6 = (int)dVar4;
  }
  FUN_8c256d7c(0,iVar6,ar6_00,ar7_00,in_stack_ffffffcc);
  FUN_8c256fec(0,iVar6,ar6_00,ar7_00,in_stack_ffffffcc);
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,iVar6,ar6_00,ar7_00);
  uVar1 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,iVar6,ar6_00,ar7_00);
  ain0 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar6,ar6_00,ar7_00);
  s12 = ain0;
  uVar2 = deref_u32(*(int *)(*(int *)(ar4 + 0x328) + 0xa0) + ain0 * 4,iVar6,ar6_00,ar7_00);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),iVar6,ar6_00,ar7_00);
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(uVar2,(int)((ulonglong)dVar4 >> 0x20));
  }
  uVar2 = (undefined4)((ulonglong)dVar4 >> 0x20);
  FUN_8c21ba62(uVar1,uVar2,ar6_00,ar7_00,ain0);
  FUN_8c256210(1,uVar2,ar6_00,ar7_00);
  FUN_8c233dac(&DAT_8c13b07c,uVar2,ar6_00,ar7_00);
  FUN_8c0a98cc(ar4 + 0x53c,uVar2,ar6_00,ar7_00,ain0,SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),
               s12,uVar1,in_stack_ffffffe0,in_stack_ffffffe4,in_stack_ffffffe8,in_stack_ffffffec);
  uVar1 = object_dtor_delete(&stack0xffffffec,0xffffffff,ar6_00,ar7_00);
  return uVar1;
}



/* FUN_8c0a4a34 @ 8c0a4a34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a4a34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = vec3_copy_8c02b5fc(s0,ar4 + 0x21a8,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a4a5c @ 8c0a4a5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a4a5c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ain0;
  undefined4 uVar2;
  undefined4 extraout_fr0;
  char cVar3;
  undefined4 uStack_14;
  
  cVar3 = '\0';
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  uVar1 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5,ar6,ar7);
  ain0 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uVar2 = deref_u32(*(int *)(*(int *)(ar4 + 0x328) + 0xa0) + ain0 * 4,ar5,ar6,ar7);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uStack_14 = extraout_fr0;
  if (cVar3 == '\0') {
    uStack_14 = uVar2;
  }
  uVar1 = FUN_8c21ba62(uVar1,uStack_14,ar6,ar7,ain0);
  return uVar1;
}



/* s_Sp_Home_njd_0a4af0 @ 8c0a4af0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a4d24) */
/* WARNING: Removing unreachable block (ram,0x8c0a4c1e) */
/* WARNING: Removing unreachable block (ram,0x8c0a4cee) */
/* WARNING: Removing unreachable block (ram,0x8c0a4c36) */
/* WARNING: Removing unreachable block (ram,0x8c0a4d26) */
/* WARNING: Removing unreachable block (ram,0x8c0a4cf6) */
/* WARNING: Removing unreachable block (ram,0x8c0a4cd0) */
/* WARNING: Removing unreachable block (ram,0x8c0a4c50) */
/* WARNING: Removing unreachable block (ram,0x8c0a4c20) */
/* WARNING: Removing unreachable block (ram,0x8c0a4bf0) */
/* WARNING: Removing unreachable block (ram,0x8c0a4c08) */
/* WARNING: Removing unreachable block (ram,0x8c0a4c38) */
/* WARNING: Removing unreachable block (ram,0x8c0a4cb8) */
/* WARNING: Removing unreachable block (ram,0x8c0a4cf2) */
/* WARNING: Removing unreachable block (ram,0x8c0a4d0e) */
/* WARNING: Removing unreachable block (ram,0x8c0a4bf2) */
/* WARNING: Removing unreachable block (ram,0x8c0a4cb6) */
/* WARNING: Removing unreachable block (ram,0x8c0a4d0c) */
/* WARNING: Removing unreachable block (ram,0x8c0a4cce) */
/* WARNING: Removing unreachable block (ram,0x8c0a4c4e) */
/* WARNING: Removing unreachable block (ram,0x8c0a4cf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_Sp_Home_njd_0a4af0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(iVar1 * 0x124 + -0x73d7ac8c) = &PTR_s_Sp_Creep_njm_8c13b0a4;
    *(undefined ***)(iVar1 * 0x124 + -0x73d7ac88) = &PTR_DAT_8c13b0c8;
    *(undefined **)(iVar1 * 0x124 + -0x73d7ac84) = PTR_s_Sp_Home_njd_8c13b094;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ac80) = 0;
    *(undefined **)(iVar1 * 0x124 + -0x73d7ac7c) = PTR_s_SPIDER_BODY_8c13b09c;
    *(undefined **)(iVar1 * 0x124 + -0x73d7ac78) = PTR_s_Sp_MotionPack_npd_8c13b098;
    *(undefined **)(iVar1 * 0x124 + -0x73d7ac70) = PTR_s_SP_PVM_8c13b0a0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ac6c) = 7;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ac60) = 0x8c2852b0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abdc) = 0x8c28559c;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abd8) = 0x3f000000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abd4) = 0x3f800000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abc4) = 0x3ca3d70a;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abc0) = 0x3f4ccccd;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abbc) = 0x43e10000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abf0) = 0x8c285310;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7abec) = 9;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7abe8) = 0x8c285340;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7abe4) = 9;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7aba0) = 0x43430000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ab9c) = 0x43480000;
    *(float *)(iVar1 * 0x124 + -0x73d7abc8) = *(float *)(iVar1 * 0x124 + -0x73d7abc8) * 0.7;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7aba4) = 0x41700000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ab70) = 0x433e0000;
  }
  _DAT_8c2854a0 = 0xffff;
  _DAT_8c2854a4 = 1;
  _DAT_8c2854a8 = 1;
  _DAT_8c2854ac = 0;
  return 0;
}



/* s_GRAPHICS_MOTHLINE_0a4dea @ 8c0a4de8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_MOTHLINE_0a4dea(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  int ar6_01;
  undefined4 ar7_00;
  uint in_fr1;
  char cVar2;
  
  cVar2 = '\0';
  ar7_00 = 0x19;
  ar6_00 = 1;
  uVar1 = 0xc;
  FUN_8c0254d0(ar4,0xc,1,0x19,1,ar5,0x8c28563c,0x8c28576c,PTR_s_GRAPHICS_MOTHLINE_8c13b0ec);
  *(undefined **)(ar4 + 8) = &DAT_8c12ad50;
  FUN_8c016fcc(ar4 + 0x490,uVar1,ar6_00,ar7_00);
  FUN_8c02ff6c(ar4 + 0x530,uVar1,ar6_00,ar7_00);
  FUN_8c030fa0(ar4 + 0x5cc,uVar1,ar6_00,ar7_00);
  FUN_8c014334(ar4 + 0xc,uVar1,ar6_00,ar7_00,s_SpiderEgg_8c13b244);
  *(int *)(ar4 + 0x308) = ar4 + 0x530;
  *(int *)(ar4 + 0x30c) = ar4 + 0x5cc;
  *(undefined1 *)(ar4 + 0x524) = 0xff;
  ar6_01 = ar4 + 0x490;
  uVar1 = *(undefined4 *)(*(int *)(ar4 + 0x328) + 0xb4);
  FUN_8c0f532c(ar4,uVar1,ar6_01,ar7_00);
  FUN_8c027224(ar4 + 0x5cc,uVar1,ar6_01,ar7_00,ar5);
  if (cVar2 != '\0') {
    in_fr1 = 0x40000000;
  }
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x28))((int *)(ar4 + 0xa8),ar4 + 0x30,ar6_01,ar7_00);
  *(undefined4 *)(ar4 + 0x330) = 0;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x528) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x528) = (ulonglong)in_fr1;
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x52c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x52c) = (ulonglong)in_fr1;
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



/* Class_12ad50_m2_0a4fdc @ 8c0a4fdc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a504a) */
/* WARNING: Removing unreachable block (ram,0x8c0a503c) */
/* WARNING: Removing unreachable block (ram,0x8c0a5036) */
/* WARNING: Removing unreachable block (ram,0x8c0a502c) */
/* WARNING: Removing unreachable block (ram,0x8c0a5026) */
/* WARNING: Removing unreachable block (ram,0x8c0a5014) */
/* WARNING: Removing unreachable block (ram,0x8c0a500a) */
/* WARNING: Removing unreachable block (ram,0x8c0a4fdc) */
/* WARNING: Removing unreachable block (ram,0x8c0a5012) */
/* WARNING: Removing unreachable block (ram,0x8c0a5016) */
/* WARNING: Removing unreachable block (ram,0x8c0a502a) */
/* WARNING: Removing unreachable block (ram,0x8c0a502e) */
/* WARNING: Removing unreachable block (ram,0x8c0a503a) */
/* WARNING: Removing unreachable block (ram,0x8c0a5048) */
/* WARNING: Removing unreachable block (ram,0x8c0a5220) */
/* WARNING: Unknown calling convention */

undefined4 Class_12ad50_m2_0a4fdc(int ar4,uint ar5,undefined4 ar6,int *ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *a7;
  float in_fr1;
  float fVar5;
  double dVar6;
  undefined4 in_fr3;
  double dVar7;
  undefined8 in_xd0;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
    *(float *)(ar4 + 0x34) = *(float *)(ar4 + 0x34) - *(float *)(ar4 + 0x52c);
    *(float *)(ar4 + 0x52c) = *(float *)(ar4 + 0x52c) + 0.5;
    in_fr1 = *(float *)(ar4 + 0x52c);
    if (10.0 < in_fr1) {
      *(undefined4 *)(ar4 + 0x52c) = 0x41200000;
    }
  }
  iVar3 = (int)*(char *)(ar4 + 0x524);
  uVar4 = ar5;
  a7 = ar7;
  if ((iVar3 < 4) && (-2 < iVar3)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar3) {
    case 0:
      uVar1 = ar6;
      uVar2 = FUN_8c02602c(ar5,ar5,ar6,ar7);
      iVar3 = get_field_c_02d1b8(ar4 + 0x21c,uVar4,ar6,a7);
      uVar4 = 0x3c;
      iVar3 = libgcc_divide_helper_0101e4((uVar2 & 0xffff) - iVar3,0x3c,ar6,a7);
      if (0 < iVar3) {
        *(undefined1 *)(ar4 + 0x524) = 1;
      }
      if (*(int *)(ar4 + 0x330) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))(*(int *)(ar4 + 0x330),1,ar6,a7);
        ar6 = uVar1;
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10))(*(int *)(ar4 + 0x330),ar5,ar6,ar7)
        ;
        FUN_8c036988(*(undefined4 *)(ar4 + 0x330),ar5,ar6,ar7);
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x144))
                  (*(int *)(ar4 + 0x330),ar5,ar6,ar7);
        FUN_8c038a10(*(undefined4 *)(ar4 + 0x330),ar5,ar6,ar7);
        uVar4 = ar5;
        a7 = ar7;
      }
      break;
    case 1:
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))(*(int *)(ar4 + 0x330),0,ar6,ar7);
      ar5 = *(uint *)(ar4 + 0x330);
      (**(code **)(*ar7 + 0x4c))(ar7,ar5,ar6,a7);
      FUN_8c027954(ar4,ar5,ar6,a7);
      *(undefined4 *)(ar4 + 0x330) = 0;
      *(undefined1 *)(ar4 + 0x524) = 2;
    case 2:
      if (cVar10 == '\0') {
        in_fr1 = *(float *)(ar4 + 0x528);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x528);
      }
      if (cVar9 == '\0') {
        fVar5 = in_fr1 + 1.0;
      }
      else {
        fVar5 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
      }
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x528) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 0x528) = in_xd0;
      }
      iVar3 = FUN_8c031588(*(undefined4 *)(*(int *)(ar4 + 0x328) + 0xa0),ar5,ar6,a7);
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x528),in_fr3);
      }
      else {
        dVar7 = *(double *)(ar4 + 0x528);
      }
      fVar5 = (float)(iVar3 + -1);
      dVar6 = (double)(ulonglong)(uint)fVar5;
      if (cVar9 == '\0' && fVar5 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x4f800000,fVar5);
        }
        else {
          dVar6 = -7.425280129038244e-251;
        }
        if (cVar9 == '\0') {
          fVar5 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) + fVar5);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        bVar8 = (float)((ulonglong)dVar7 >> 0x20) < SUB84(dVar6,0);
      }
      else {
        bVar8 = dVar7 < dVar6;
      }
      uVar4 = ar5;
      if (!bVar8) {
        *(undefined1 *)(ar4 + 0x524) = 3;
      }
      break;
    case -1:
      uVar1 = ar6;
      uVar4 = FUN_8c028ee4(ar5,ar5,ar6,ar7);
      uVar4 = uVar4 & 0xffff;
      FUN_8c028edc(ar4 + 0x21c,uVar4,ar6,ar7,uVar1);
      uVar4 = FUN_8c02602c(ar5,uVar4,ar6,ar7);
      uVar4 = uVar4 & 0xffff;
      FUN_8c028ed4(ar4 + 0x21c,uVar4,ar6,ar7,uVar1);
      if (*(int *)(ar4 + 0x330) != 0) {
        uVar4 = ar5;
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10c))
                  (*(int *)(ar4 + 0x330),ar5,ar6,ar7);
      }
      uVar1 = FUN_8c02602c(ar5,uVar4,ar6,ar7);
      a7 = ar7;
      if ((ushort)uVar1 < 5) {
        *(undefined1 *)(ar4 + 0x524) = 0;
      }
    }
  }
  (**(code **)(*(int *)(ar4 + 8) + 0xf8))(ar4,uVar4,ar6,a7);
  FUN_8c0f79b8(ar4 + 0xa0,uVar4,ar6,a7);
  return 1;
}



/* Class_12ad50_m6_0a5308 @ 8c0a5308 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ad50_m6_0a5308(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0294c0(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* Class_12ad50_m5_0a5328 @ 8c0a5328 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
Class_12ad50_m5_0a5328(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_4;
  
  iVar1 = -0x7d0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = ar4;
  FUN_8c0b7a54((int)&s0 + iVar1,ar5,ar6,ar7);
  FUN_8c0294c0(*(undefined4 *)((int)&uStack_4 + iVar1),(int)&s0 + iVar1,ar6,ar7);
  uVar2 = FUN_8c068818((int)&s0 + iVar1,0xffffffff,ar6,ar7);
  return uVar2;
}



/* Class_12ad50_m4_0a536c @ 8c0a536c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ad50_m4_0a536c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0294c0(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a538c @ 8c0a538c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a538c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0f4c0c(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* noop_0a53a8 @ 8c0a53a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0a53a8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0a53ac @ 8c0a53ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0a53ac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0a53b0 @ 8c0a53b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a53b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  float fVar2;
  double dVar3;
  int ar7_00;
  int ar6_01;
  int ar5_01;
  char cVar4;
  char cVar5;
  undefined4 in_stack_ffffffec;
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffffec);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_ffffffec);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
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
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
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
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
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
  FUN_8c256b0c(0,ar5_01,ar6_01,ar7_00,in_stack_ffffffec);
  FUN_8c256fec(0,ar5_01,ar6_01,ar7_00,in_stack_ffffffec);
  uVar1 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5_01,ar6_01,ar7_00);
  ar5_00 = deref_u32(*(undefined4 *)(*(int *)(ar4 + 0x328) + 0xa0),ar5_01,ar6_01,ar7_00);
  ar6_00 = FUN_8c026d74(*(undefined4 *)(*(int *)(ar4 + 0x328) + 0xa8),ar5_01,ar6_01,ar7_00);
  FUN_8c21bbb0(uVar1,ar5_00,ar6_00,ar7_00,ar6_00);
  uVar1 = FUN_8c256210(1,ar5_00,ar6_00,ar7_00);
  return uVar1;
}



/* FUN_8c0a54dc @ 8c0a54dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a54dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c01538c(*(int *)(0x328 + ar4) + 0x78,ar5,ar6,ar7);
  uVar1 = FUN_8c015bb8(*(int *)(0x328 + ar4) + 0x70,ar5,ar6,ar7);
  FUN_8c219a9a(uVar1,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(0x330 + ar4) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(0x330 + ar4) + 8) + 0x3c))
                      (*(int *)(0x330 + ar4),ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0a5538 @ 8c0a5538 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a5538(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x3c))(ar4,ar5,ar6,ar7);
  return uVar1;
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



/* FUN_8c0a5588 @ 8c0a5588 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a5588(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a6;
  undefined4 uVar1;
  
  a6 = s_Shell_0fef9c(ar5,0xd,0x18,ar7);
  uVar1 = 0;
  if (a6 != 0) {
    uVar1 = (**(code **)(0x100 + *(int *)(ar4 + 8)))(ar4,0,a6,ar7);
  }
  return uVar1;
}



/* FUN_8c0a55d4 @ 8c0a55d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0a55d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x330;
  *(undefined4 *)(0x330 + ar4) = ar6;
  return iVar1;
}



/* FUN_8c0a55e0 @ 8c0a55e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a55e0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(0x330 + ar4) != 0) {
    uVar1 = FUN_8c0ff500(ar5,ar4 + 0x330,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0a5614 @ 8c0a5614 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a5614(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0f4e34(ar4,ar5,ar6,ar7);
  FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7);
  uVar1 = FUN_8c035338(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a5674 @ 8c0a5674 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a5674(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0f4ebc(ar4,ar5,ar6,ar7);
  FUN_8c02ce58(ar4 + 0x174,ar5 + 0x24,ar6,ar7);
  uVar1 = FUN_8c035338(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a56cc @ 8c0a56cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a56cc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0f4f0c(ar4,ar5,ar6,ar7);
  FUN_8c02cf20(ar4 + 0x174,ar5 + 0x4c,ar6,ar7);
  uVar1 = FUN_8c03539c(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a572c @ 8c0a572c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a572c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0f4fa4(ar4,ar5,ar6,ar7);
  FUN_8c02d1f4(ar4 + 0x174,ar5 + 0x24,ar6,ar7);
  uVar1 = FUN_8c03539c(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7);
  return uVar1;
}



/* s_CSpiderEgg_LoadGRReq_0a578a @ 8c0a5784 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CSpiderEgg_LoadGRReq_0a578a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(0x420 + ar4) == 0) {
    iVar1 = s_Failed_to_load_Pack_CAnimal__027a86(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(0x420 + ar4) = 1;
    }
  }
  else if (*(int *)(0x420 + ar4) == 1) {
    if (*(int *)(0x330 + ar4) == 0) {
      (*(code *)(&report_error_message))
                ((&DATA_8c13b100) + 0x14e,
                 (&DATA_8c13b100) + 0x160,0,2);
      *(undefined4 *)(0x420 + ar4) = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = (**(code **)(0xdc + *(int *)(*(int *)(0x330 + ar4) + 8)))
                        (*(int *)(0x330 + ar4),ar5,0,ar7);
      if (iVar1 == 1) {
        *(undefined2 *)(0x41c + ar4) = 0;
        *(undefined4 *)(0x420 + ar4) = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



/* FUN_8c0a5854 @ 8c0a5854 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a5854(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  s_Failed_to_Load_CAnimal_LoadG_0284b8(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(0x330 + ar4) != 0) {
    uVar1 = (**(code **)(0xe0 + *(int *)(*(int *)(0x330 + ar4) + 8)))
                      (*(int *)(0x330 + ar4),ar5,0,ar7);
  }
  return uVar1;
}



/* FUN_8c0a58a4 @ 8c0a58a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a58a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c028afc(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(0x330 + ar4) != 0) {
    uVar1 = (**(code **)(0xec + *(int *)(*(int *)(0x330 + ar4) + 8)))
                      (*(int *)(0x330 + ar4),ar5,0,ar7);
  }
  return uVar1;
}



/* s_Cpe_Home_nj_0a58f4 @ 8c0a58f4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a5a0a) */
/* WARNING: Removing unreachable block (ram,0x8c0a5a20) */
/* WARNING: Removing unreachable block (ram,0x8c0a59f2) */
/* WARNING: Removing unreachable block (ram,0x8c0a5a3a) */
/* WARNING: Removing unreachable block (ram,0x8c0a5a08) */
/* WARNING: Removing unreachable block (ram,0x8c0a5a22) */
/* WARNING: Removing unreachable block (ram,0x8c0a5a38) */
/* WARNING: Unknown calling convention */

undefined4 s_Cpe_Home_nj_0a58f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(iVar1 * 0x124 + -0x73d7a9c0) = &PTR_s_Cpe_BeCatapillar_njm_8c13b0f8;
    *(undefined ***)(iVar1 * 0x124 + -0x73d7a9bc) = &PTR_s_Cpe_BeCatapillar_njs_8c13b0fc;
    *(undefined **)(iVar1 * 0x124 + -0x73d7a9b8) = PTR_s_Cpe_Home_nj_8c13b0f0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a9b4) = 0;
    *(undefined **)(iVar1 * 0x124 + -0x73d7a9b0) = PTR_s_MOTH_EGG_8c13b0f4;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a9ac) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a924) = 0x8c285788;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7a920) = 1;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a91c) = 0x8c285798;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7a918) = 1;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a910) = 0x8c2857a8;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a908) = 0x3f800000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a8f8) = 0x3ca3d70a;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a8f4) = 0x3f4ccccd;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7a8f0) = 0x42c80000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(iVar1 * 0x10 + -0x73d7a894) = 0xffff;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7a890) = 0;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7a88c) = 1;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7a888) = 0;
  }
  return 1;
}



/* Class_12aeec_m7_0a5af4 @ 8c0a5af4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a5af4) */
/* WARNING: Removing unreachable block (ram,0x8c0a5af6) */
/* WARNING: Unknown calling convention */

undefined4 Class_12aeec_m7_0a5af4(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *ar5_00;
  undefined4 *a6;
  float fVar2;
  double in_dr0;
  double dVar3;
  undefined4 uVar5;
  double dVar4;
  float fVar6;
  undefined8 in_dr14;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar9 = '\0';
  cVar8 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&uStack_24,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_34,ar5_00,ar6,ar7);
  dVar4 = (double)CONCAT44(uVar1,0x3f800000);
  a6 = &uStack_34;
  (**(code **)(*ar5 + 0x124))(ar5,&uStack_24,a6,ar7);
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x30));
  }
  fVar6 = SUB84(dVar4,0);
  if (cVar8 == '\0') {
    fVar2 = SUB84(in_dr0,0) - fVar6;
  }
  else {
    fVar2 = SUB84(in_dr0 - dVar4,0);
  }
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44(uStack_24,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(uStack_20,uStack_24);
  }
  fVar2 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar8 == '\0' && fVar2 < SUB84(dVar3,0)) {
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(fVar2,*(undefined4 *)(ar4 + 0x30));
    }
    if (cVar8 == '\0') {
      fVar2 = SUB84(dVar3,0) + fVar6;
    }
    else {
      fVar2 = SUB84(dVar3 + dVar4,0);
    }
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(uStack_34,fVar2);
    }
    else {
      dVar3 = (double)CONCAT44(fStack_30,uStack_34);
    }
    if (cVar8 != '\0' || (float)((ulonglong)dVar3 >> 0x20) <= SUB84(dVar3,0)) {
      if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(uStack_34,SUB84(dVar3,0));
      }
      else {
        dVar3 = (double)CONCAT44(fStack_30,uStack_34);
      }
      if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) - fVar6,SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 - dVar4;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar3 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar3;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(uStack_24,SUB84(dVar3,0));
    }
    else {
      dVar3 = (double)CONCAT44(uStack_20,uStack_24);
    }
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) + fVar6,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar4;
    }
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x30) = dVar3;
    }
  }
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),*(undefined4 *)(ar4 + 0x38));
  }
  if (cVar8 == '\0') {
    fVar2 = SUB84(dVar3,0) - fVar6;
  }
  else {
    fVar2 = SUB84(dVar3 - dVar4,0);
  }
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44(uStack_1c,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(uStack_18,uStack_1c);
  }
  fVar2 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar8 == '\0' && fVar2 < SUB84(dVar3,0)) {
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(fVar2,*(undefined4 *)(ar4 + 0x38));
    }
    if (cVar8 == '\0') {
      fVar2 = SUB84(dVar3,0) + fVar6;
    }
    else {
      fVar2 = SUB84(dVar3 + dVar4,0);
    }
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(fStack_2c,fVar2);
    }
    else {
      dVar3 = (double)CONCAT44(uStack_28,fStack_2c);
    }
    if (cVar8 != '\0' || (float)((ulonglong)dVar3 >> 0x20) <= SUB84(dVar3,0)) {
      if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(fStack_2c,SUB84(dVar3,0));
      }
      else {
        dVar3 = (double)CONCAT44(uStack_28,fStack_2c);
      }
      if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) - fVar6,SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 - dVar4;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar3 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x38) = dVar3;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(uStack_1c,SUB84(dVar3,0));
    }
    else {
      dVar3 = (double)CONCAT44(uStack_18,uStack_1c);
    }
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) + fVar6,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar4;
    }
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x38) = dVar3;
    }
  }
  (**(code **)(*ar5 + 0x128))(ar5,ar4 + 0x30,a6,ar7);
  uVar1 = SUB84(dVar3,0);
  uVar5 = (undefined4)((ulonglong)dVar3 >> 0x20);
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44(uVar5,SUB84(dVar4,0));
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),uVar1);
  }
  else {
    dVar4 = *(double *)(ar4 + 0x34);
    uStack_34 = uVar5;
  }
  fVar6 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar8 == '\0') {
    bVar7 = fVar6 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar7 = dVar3 < dVar4;
  }
  if (bVar7) {
    fVar6 = fStack_30;
    fVar2 = fStack_2c;
    if (cVar9 == '\0') {
      fVar6 = *(float *)(ar4 + 0x34);
      fVar2 = fStack_30;
    }
    if (cVar8 != '\0' || fVar2 <= fVar6) {
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x34) = fStack_30;
      }
      else {
        *(ulonglong *)(ar4 + 0x34) = CONCAT44(fStack_2c,fStack_30);
      }
    }
  }
  else if (cVar9 == '\0') {
    *(float *)(ar4 + 0x34) = fVar6;
  }
  else {
    *(double *)(ar4 + 0x34) = dVar3;
  }
  Vec3_dtor(&uStack_34,0xffffffff,a6,ar7);
  uVar1 = Vec3_dtor(&uStack_24,0xffffffff,a6,ar7);
  return uVar1;
}



/* FUN_8c0a5c2c @ 8c0a5c2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0a5c2c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c02fc8c(*(undefined4 *)(0x308 + ar4),ar5,ar6,ar7);
  return (uint)(iVar1 == 1);
}



/* Class_12ad50_m3_0a5c60 @ 8c0a5c60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ad50_m3_0a5c60(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x10))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* ret_const_1_0a5c88 @ 8c0a5c88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_0a5c88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c0a5c90 @ 8c0a5c90 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a5c90(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  
  cVar5 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1261f0,ar5,ar6,ar7);
  uVar3 = 0x8c285220;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285220,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126200,pcVar2,uVar3,ar7);
  uVar3 = 0x8c28522c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28522c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126210,pcVar2,uVar3,ar7);
  uVar3 = 0x8c285238;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285238,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126220,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c285244,ar7);
  uVar1 = 4;
  FUN_8c010120(0x8c28525c,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,9);
  global_list_push(0,FUN_8c0a6140,0x8c285250,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c28528c,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,9);
  global_list_push(0,FUN_8c0a611c,0x8c285280,uVar1);
  if (cVar5 == '\0') {
    _DAT_8c126230 = CONCAT44(_UNK_8c126234,0x800000);
                    /* WARNING: Read-only address (ram,0x8c126234) is written */
  }
  else {
    _DAT_8c126230 = 0xffffffff00800000;
  }
  uVar1 = 4;
  FUN_8c010120(0x8c285310,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,9);
  global_list_push(0,FUN_8c0a60f8,0x8c285304,uVar1);
  uVar4 = 4;
  FUN_8c010120(0x8c285340,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,9);
  uVar1 = 0x8c285334;
  pcVar2 = FUN_8c0a60d4;
  global_list_push(0,FUN_8c0a60d4,0x8c285334,uVar4);
  uVar1 = FUN_8c02452c(0x8c285370,pcVar2,uVar1,uVar4);
  uVar3 = 0x8c285364;
  pcVar2 = FUN_8c03a4ac;
  global_list_push(uVar1,FUN_8c03a4ac,0x8c285364,uVar4);
  uVar1 = FUN_8c024824(&DAT_8c2854a0,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c285494;
  pcVar2 = free_if_nonnull_wrap_03a454;
  global_list_push(uVar1,free_if_nonnull_wrap_03a454,0x8c285494,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2854bc,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2854b0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2854b0,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2854d8,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2854cc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2854cc,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2854f4,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2854e8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2854e8,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c285510,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c285504;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285504,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c28552c,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c285520;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285520,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c285548,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c28553c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28553c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c285564,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c285558;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285558,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c285580,pcVar2,uVar3,uVar4);
  global_list_push(uVar1,Vec3_dtor,0x8c285574,uVar4);
  uVar4 = 0x8c2854f4;
  uVar1 = FUN_8c017010(0x8c28559c,0x8c2854bc,0x8c2854d8,0x8c2854f4,0x8c285510,0x8c28552c,0x8c285548,
                       0x8c285564,0x8c285580);
  uVar3 = 0x8c285590;
  pcVar2 = Class_129938_m0_017084;
  global_list_push(uVar1,Class_129938_m0_017084,0x8c285590,uVar4);
  uVar1 = FUN_8c02452c(0x8c28563c,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c285630;
  pcVar2 = FUN_8c03a4ac;
  global_list_push(uVar1,FUN_8c03a4ac,0x8c285630,uVar4);
  uVar1 = FUN_8c024824(0x8c28576c,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c285760;
  pcVar2 = free_if_nonnull_wrap_03a454;
  global_list_push(uVar1,free_if_nonnull_wrap_03a454,0x8c285760,uVar4);
  uVar1 = FUN_8c015b94(0x8c285788,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c28577c;
  pcVar2 = free_if_nonnull_wrap_0247b0;
  global_list_push(uVar1,free_if_nonnull_wrap_0247b0,0x8c28577c,uVar4);
  uVar1 = FUN_8c015bc8(0x8c285798,pcVar2,uVar3,uVar4);
  global_list_push(uVar1,free_if_nonnull_wrap_03a3dc,0x8c28578c,uVar4);
  uVar3 = 0x8c2854f4;
  uVar1 = FUN_8c017010(0x8c2857a8,0x8c2854bc,0x8c2854d8,0x8c2854f4,0x8c285510,0x8c28552c,0x8c285548,
                       0x8c285564,0x8c285580);
  uVar1 = global_list_push(uVar1,Class_129938_m0_017084,0x8c28579c,uVar3);
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



/* FUN_8c0a6164 @ 8c0a6164 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0a6164(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  
  FUN_8c030fa0(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12b088);
  ar7_00 = 0x10;
  ar5_00 = (&Vec3_ctor_zero);
  ar6_00 = (&Vec3_dtor);
  (*(code *)(&FUN_8c010120))
            ((int)ar4 + 0x234,(&Vec3_ctor_zero),(&Vec3_dtor),0x10,
             0x1f4);
  Vec3_ctor_zero((int)ar4 + 0x2174,ar5_00,ar6_00,ar7_00);
  Vec3_ctor_zero((int)ar4 + 0x2184,ar5_00,ar6_00,ar7_00);
  Vec3_set_zero((int)ar4 + 0x21a8,ar5_00,ar6_00,ar7_00);
  FUN_8c0a61f8(ar4,0,ar6_00,ar7_00);
  return ar4;
}



/* FUN_8c0a61f8 @ 8c0a61f8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a6226) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a61f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 auStack_14 [16];
  
  *(undefined ***)(ar4 + 0x1c8) = &PTR_s_Moveto_8c13b27c;
  *(undefined4 *)(ar4 + 0x1cc) = 6;
  *(undefined4 *)(ar4 + 0x230) = 0;
  *(undefined4 *)(ar4 + 0x220) = 2;
  *(undefined4 *)(ar4 + 0x224) = 2;
  *(undefined4 *)(ar4 + 0x2194) = 0;
  *(undefined4 *)(ar4 + 0x219c) = 0;
  *(undefined4 *)(ar4 + 0x2198) = 0;
  Vec3_set_xyz(auStack_14,ar5,ar6,ar7);
  vec3_copy_8c023d8c(ar4 + 0x21a8,auStack_14,ar6,ar7);
  object_dtor_delete(auStack_14,0xffffffff,ar6,ar7);
  *(undefined4 *)(ar4 + 0x21a4) = 0;
  *(undefined4 *)(ar4 + 0x21b8) = 0;
  *(undefined4 *)(ar4 + 0x21bc) = 0;
  *(undefined4 *)(ar4 + 0x21b4) = 0;
  *(undefined4 *)(ar4 + 0x1d0) = 1;
  return 0x1d0;
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



/* FUN_8c0a6370 @ 8c0a6370 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a6370(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  FUN_8c031684(ar4,ar5,ar6,ar7);
  *(undefined4 *)(0x21a4 + ar4) = 0;
  *(undefined4 *)(0x2198 + ar4) = 0;
  *(undefined4 *)(0x219c + ar4) = 0;
  *(undefined4 *)(0x230 + ar4) = 0;
  Vec3_ctor_xyz(auStack_18,ar5,ar6,ar7);
  Vec3_assign(ar4 + 0x80,auStack_18,ar6,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  Vec3_ctor_xyz(auStack_28,uVar1,ar6,ar7);
  Vec3_assign(ar4 + 0x14,auStack_28,ar6,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  uVar1 = FUN_8c023d7c(ar4 + 0x21a8,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a6430 @ 8c0a6430 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0a6430(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c032160(ar4,ar5,ar6,ar7);
  *(undefined4 *)(0x21b8 + ar4) = 0;
  *(undefined4 *)(0x21bc + ar4) = 0;
  iVar1 = 0x21b4;
  *(undefined4 *)(0x21b4 + ar4) = 0;
  return iVar1;
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



/* FUN_8c0a6628 @ 8c0a6628 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0a6628(int ar4,int *ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 ar5_01;
  int iVar2;
  undefined8 in_dr0;
  float fVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  undefined4 in_stack_ffffff5c;
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [16];
  float fStack_20;
  undefined8 uStack_1c;
  undefined4 uStack_c;
  
  fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar6 = '\0';
  cVar5 = '\0';
  uStack_c = 1;
  iVar2 = 1;
  FUN_8c03f480(*ar5,ar5,ar6,ar7,auStack_30);
  Vec3_ctor_copy(&fStack_20,auStack_30,ar6,ar7);
  ar5_00 = -1;
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  if (DAT_8c2858ec == '\0') {
    _DAT_8c2858e8 = 0;
    DAT_8c2858ec = '\x01';
  }
  if (DAT_8c2858f4 == '\0') {
    _DAT_8c2858f0 = 0;
    DAT_8c2858f4 = '\x01';
  }
  if (*(int *)(ar4 + 0x178) == 1) {
    ar5_00 = ar4 + 0x168;
    Vec3_assign(&fStack_20,ar5_00,ar6,ar7);
  }
  iVar1 = *(int *)(ar4 + 0x124);
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      iVar2 = get_field_24_026024(ar5[6],ar5_00,ar6,ar7);
      if (iVar2 == 0) {
        if (cVar6 == '\0') {
          fVar3 = 1000.0;
        }
        else {
          fStack_20 = 1000.0;
          fVar3 = 180.0;
        }
        if (cVar5 == '\0' && fVar3 < fStack_20) {
          Vec3_dtor(&fStack_20,0xffffffff,ar6,ar7);
          return 2;
        }
        if (cVar6 == '\0') {
          uStack_1c = CONCAT44(uStack_1c._4_4_,0x43340000);
        }
        else {
          uStack_1c = 0x8843340000;
        }
      }
      Vec3_ctor_copy(auStack_4c,*(undefined4 *)ar5[1],ar6,ar7);
      Vec3_ctor_copy(auStack_5c,&fStack_20,ar6,ar7);
      ar6 = auStack_5c;
      iVar2 = FUN_8c0a72b4(ar4,auStack_4c,ar6,ar7);
      Vec3_dtor(auStack_5c,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
      break;
    case 1:
      FUN_8c03f460(auStack_3c,ar5[3],ar6,ar7);
      ar7 = *(undefined4 *)(ar5[1] + 4);
      ar6 = auStack_3c;
      iVar2 = FUN_8c0a6974(ar4,*(undefined4 *)ar5[1],ar6,ar7);
      free_if_nonnull_wrap_102790(auStack_3c,0xffffffff,ar6,ar7);
      break;
    case 2:
      iVar2 = 0;
      break;
    case 3:
      iVar2 = (**(code **)(*(int *)ar5[6] + 0x1a8))((int *)ar5[6],ar5_00,ar6,ar7);
      if (iVar2 == 1) {
        ar6 = (undefined1 *)*ar5;
        iVar2 = FUN_8c0aa11c(ar4,*(undefined4 *)ar5[1],ar6,ar7);
      }
      else {
        iVar2 = 2;
      }
      break;
    case 4:
      *(undefined4 *)(ar4 + 0x214) = 0;
      Vec3_ctor_xyz(auStack_6c,ar5_00,ar6,ar7);
      Vec3_assign(ar4 + 0x80,auStack_6c,ar6,ar7);
      Vec3_dtor(auStack_6c,0xffffffff,ar6,ar7);
      if (*(int *)(ar4 + 300) == 0) {
        ar5_01 = 6;
        FUN_8c031de8(ar4,6,ar6,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_01,ar6,ar7,in_stack_ffffff5c);
        if (cVar6 == '\0') {
          pcVar4 = (code *)0x42b40000;
        }
        else {
          fVar3 = 90.0;
          pcVar4 = s_CAnimBody_SetFrame_033e6e;
        }
        if (cVar5 != '\0' || (float)pcVar4 <= fVar3) {
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_01,ar6,ar7);
          iVar2 = 0;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      break;
    case 5:
      iVar2 = FUN_8c031de8(ar4,8,ar6,ar7);
    }
  }
  if ((*(int *)(ar4 + 0x178) == 1) && (iVar2 == 0)) {
    ar6 = (undefined1 *)ar5[6];
    FUN_8c031ce8(ar4,ar5[3],ar6,ar7);
    Vec3_assign(ar4 + 0x168,auStack_7c,ar6,ar7);
    Vec3_dtor(auStack_7c,0xffffffff,ar6,ar7);
  }
  Vec3_dtor(&fStack_20,0xffffffff,ar6,ar7);
  return iVar2;
}



/* FUN_8c0a6974 @ 8c0a6974 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0a6974(int ar4,ulonglong *ar5,ulonglong *ar6,ulonglong *ar7)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong *ar5_00;
  undefined4 ar6_00;
  ulonglong *ar6_01;
  undefined1 *puVar4;
  undefined4 ar7_00;
  ulonglong *ar7_01;
  int iVar5;
  ulonglong in_dr0;
  char cVar6;
  ulonglong *in_stack_00000000;
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  ulonglong auStack_28 [2];
  
  cVar6 = '\0';
  iVar5 = 1;
  iVar2 = *(int *)(ar4 + 0x134);
  if ((8 < iVar2) || (iVar2 < 0)) goto switchD_8c0a69b0_default;
  ar5_00 = ar5;
  puVar1 = ar6;
  ar7_01 = ar7;
                    /* WARNING: Switch is manually overridden */
  switch(iVar2) {
  case 0:
    iVar2 = (**(code **)((int)*in_stack_00000000 + 0x1a8))(in_stack_00000000,ar5,ar6,ar7);
    if (iVar2 == 1) {
      *(undefined4 *)(ar4 + 0x134) = 8;
      if (cVar6 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      }
      ar7_00 = 0;
      ar6_00 = 0xffffffff;
      uVar3 = 2;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_00);
      goto switchD_8c0a69b0_default;
    }
    ar5_00 = (ulonglong *)0x0;
    puVar1 = (ulonglong *)rand_range(ar4,0,7,ar7_01);
    if (((int)puVar1 < 7) && (-1 < (int)puVar1)) {
      ar6_01 = (ulonglong *)((int)puVar1 * 4);
                    /* WARNING: Switch is manually overridden */
      switch(puVar1) {
      case (ulonglong *)0x0:
        ar5_00 = (ulonglong *)(ar4 + 0x28);
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar6 == '\0') {
          *(undefined4 *)ar5_00 = 0;
        }
        else {
          *ar5_00 = in_dr0;
        }
        if (*(int *)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(ar4 + 0x134) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(ar4 + 0x228) = 0;
        puVar1 = ar6_01;
        break;
      case (ulonglong *)0x1:
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar6 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0;
        }
        if (*(int *)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(ar4 + 0x134) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(ar4 + 0x228) = 1;
        puVar1 = ar6_01;
        break;
      case (ulonglong *)0x2:
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar6 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0;
        }
        if (*(int *)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(ar4 + 0x134) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(ar4 + 0x228) = 2;
        puVar1 = ar6_01;
        break;
      case (ulonglong *)0x3:
        ar6_01 = (ulonglong *)(ar4 + 0x28);
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar6 == '\0') {
          *(int *)ar6_01 = 0;
        }
        else {
          *ar6_01 = in_dr0;
        }
        if (*(int *)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(ar4 + 0x134) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        ar5_00 = (ulonglong *)0x3;
        *(undefined4 *)(ar4 + 0x228) = 3;
        puVar1 = ar6_01;
        break;
      case (ulonglong *)0x4:
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar6 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0;
        }
        if (*(int *)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(ar4 + 0x134) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(ar4 + 0x228) = 4;
        puVar1 = ar6_01;
        break;
      case (ulonglong *)0x5:
switchD_8c0a6a7a_caseD_5:
        puVar1 = ar6_01;
        if (*(int *)(ar4 + 0x2198) == 6) {
          *(undefined4 *)(ar4 + 0x228) = 8;
        }
        else {
          *(undefined4 *)(ar4 + 0x228) = 5;
        }
        break;
      case (ulonglong *)0x6:
        if (*(int *)(ar4 + 0x2198) == 0) {
          iVar2 = get_field_24_026024(in_stack_00000000,ar5_00,ar6_01,ar7_01);
          puVar1 = ar6_01;
          if (iVar2 == 1) {
            *(undefined4 *)(ar4 + 0x228) = 6;
          }
          else {
            *(undefined4 *)(ar4 + 0x228) = 5;
          }
        }
        else if ((*(int *)(ar4 + 0x2198) == 5) || (*(int *)(ar4 + 0x2198) == 6)) {
          *(undefined4 *)(ar4 + 0x228) = 8;
          puVar1 = ar6_01;
        }
        else {
          puVar1 = (ulonglong *)0x2;
          ar5_00 = (ulonglong *)0x0;
          iVar2 = rand_range(ar4,0,2,ar7_01);
          if (iVar2 == 0) {
            *(undefined4 *)(ar4 + 0x228) = 7;
          }
          else {
            *(undefined4 *)(ar4 + 0x228) = 9;
          }
        }
      }
    }
    *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    break;
  case 2:
    goto switchD_8c0a69b0_caseD_2;
  case 3:
    goto switchD_8c0a69b0_caseD_3;
  case 4:
    goto switchD_8c0a69b0_caseD_4;
  case 5:
    goto switchD_8c0a69b0_caseD_5;
  case 6:
    goto switchD_8c0a69b0_caseD_6;
  case 7:
    goto switchD_8c0a69b0_caseD_7;
  case 8:
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
    goto switchD_8c0a69b0_default;
  }
  uVar3 = (undefined4)in_dr0;
  iVar2 = *(int *)(ar4 + 0x228);
  if ((9 < iVar2) || (iVar2 < 0)) goto switchD_8c0a6c88_default;
                    /* WARNING: Switch is manually overridden */
  switch(iVar2) {
  case 0:
    ar7_01 = (ulonglong *)0x0;
    puVar1 = (ulonglong *)0xffffffff;
    ar5_00 = (ulonglong *)0x2;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,puVar1,ar7_01);
    break;
  case 1:
    ar7_01 = (ulonglong *)0x0;
    puVar1 = (ulonglong *)0xffffffff;
    ar5_00 = (ulonglong *)0x3;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,puVar1,ar7_01);
    break;
  case 2:
    ar7_01 = (ulonglong *)0x0;
    puVar1 = (ulonglong *)0xffffffff;
    ar5_00 = (ulonglong *)0x4;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,puVar1,ar7_01);
    break;
  case 3:
    ar7_01 = (ulonglong *)0x0;
    puVar1 = (ulonglong *)0xffffffff;
    ar5_00 = (ulonglong *)0x5;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,puVar1,ar7_01);
    break;
  case 4:
    ar7_01 = (ulonglong *)0x0;
    puVar1 = (ulonglong *)0xffffffff;
    ar5_00 = (ulonglong *)0x6;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,puVar1,ar7_01);
    break;
  case 5:
    iVar5 = get_field_24_026024(in_stack_00000000,ar5_00,puVar1,ar7_01);
    if (iVar5 == 0) {
      FUN_8c10277c(auStack_28,ar5_00,puVar1,ar7_01);
      Vec3_ctor_xyz(auStack_38,ar5_00,puVar1,ar7_01);
      if (cVar6 == '\0') {
        in_dr0 = CONCAT44(0x40000000,uVar3);
      }
      else {
        in_dr0 = 0x42c8000040000000;
      }
      puVar1 = auStack_28;
      ar7_01 = in_stack_00000000;
      FUN_8c032518(ar4,ar5,puVar1,in_stack_00000000);
      Vec3_assign(ar4 + 0x54,auStack_48,puVar1,ar7_01);
      Vec3_dtor(auStack_48,0xffffffff,puVar1,ar7_01);
      Vec3_dtor(auStack_38,0xffffffff,puVar1,ar7_01);
      free_if_nonnull_wrap_102790(auStack_28,0xffffffff,puVar1,ar7_01);
    }
    else {
      if (cVar6 == '\0') {
        in_dr0 = CONCAT44(0x40400000,uVar3);
      }
      else {
        in_dr0 = 0x8c031ce840400000;
      }
      puVar1 = in_stack_00000000;
      FUN_8c031ce8(ar4,ar6,in_stack_00000000,ar7_01);
      Vec3_assign(ar4 + 0x54,auStack_58,puVar1,ar7_01);
      Vec3_dtor(auStack_58,0xffffffff,puVar1,ar7_01);
    }
    *(undefined4 *)(ar4 + 0x134) = 3;
switchD_8c0a69b0_caseD_3:
    if (*(int *)(ar4 + 0x2198) == 0) {
      (**(code **)((int)*in_stack_00000000 + 0x128))(in_stack_00000000,ar4 + 0x54,puVar1,ar7_01);
      if (cVar6 == '\0') {
        *(int *)(ar4 + 0x58) = (int)(in_dr0 >> 0x20);
      }
      else {
        *(ulonglong *)(ar4 + 0x58) = in_dr0;
      }
      Vec3_ctor_copy(auStack_68,ar5,puVar1,ar7_01);
      Vec3_ctor_copy(auStack_78,ar4 + 0x54,puVar1,ar7_01);
      puVar4 = auStack_78;
      iVar5 = FUN_8c0a72b4(ar4,auStack_68,puVar4,ar7_01);
      Vec3_dtor(auStack_78,0xffffffff,puVar4,ar7_01);
      Vec3_dtor(auStack_68,0xffffffff,puVar4,ar7_01);
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,puVar4,ar7_01);
    }
    else {
      switch(*(undefined4 *)(ar4 + 0x2198)) {
      case 1:
        if (cVar6 == '\0') {
          *(int *)(ar4 + 0x5c) = (int)ar6[1];
        }
        else {
          *(ulonglong *)(ar4 + 0x5c) = ar6[1];
        }
        break;
      case 2:
        if (cVar6 == '\0') {
          *(undefined4 *)(ar4 + 0x5c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x5c) = in_dr0 & 0xffffffff;
        }
        break;
      case 3:
        if (cVar6 == '\0') {
          *(int *)(ar4 + 0x54) = (int)*ar6;
        }
        else {
          *(ulonglong *)(ar4 + 0x54) = *ar6;
        }
        break;
      case 4:
        if (cVar6 == '\0') {
          *(undefined4 *)(ar4 + 0x54) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x54) = in_dr0 & 0xffffffff;
        }
        break;
      case 5:
        if (cVar6 == '\0') {
          *(int *)(ar4 + 0x58) = *(int *)((int)ar6 + 4);
        }
        else {
          *(undefined8 *)(ar4 + 0x58) = *(undefined8 *)((int)ar6 + 4);
        }
      }
      FUN_8c03f460(auStack_84,ar6,puVar1,ar7_01);
      iVar5 = FUN_8c0a8f94(ar4,ar5,ar4 + 0x54,auStack_84);
      free_if_nonnull_wrap_102790(auStack_84,0xffffffff,auStack_84,0xffffffff);
    }
    goto switchD_8c0a69b0_default;
  case 6:
    *(undefined4 *)(ar4 + 0x134) = 4;
switchD_8c0a69b0_caseD_4:
    FUN_8c03f460(auStack_90,ar6,puVar1,ar7_01);
    iVar5 = FUN_8c0a861c(ar4,ar5,auStack_90,ar7_01);
    free_if_nonnull_wrap_102790(auStack_90,0xffffffff,0xffffffff,ar7_01);
    goto switchD_8c0a69b0_default;
  case 7:
    *(undefined4 *)(ar4 + 0x134) = 5;
switchD_8c0a69b0_caseD_5:
    FUN_8c03f460(auStack_9c,ar6,FUN_8c03f460,ar7_01);
    puVar4 = auStack_9c;
    iVar5 = FUN_8c0a8c0c(ar4,ar5,puVar4,ar7);
    free_if_nonnull_wrap_102790(auStack_9c,0xffffffff,puVar4,ar7);
    goto switchD_8c0a69b0_default;
  case 8:
    *(undefined4 *)(ar4 + 0x134) = 6;
switchD_8c0a69b0_caseD_6:
    if (*(int *)(ar4 + 0x2198) == 6) {
      FUN_8c03f460(auStack_a8,ar6,puVar1,ar7_01);
      puVar4 = auStack_a8;
      iVar5 = FUN_8c0a8464(ar4,ar5,puVar4,ar7_01);
      free_if_nonnull_wrap_102790(auStack_a8,0xffffffff,puVar4,ar7_01);
    }
    else {
      (**(code **)((int)*in_stack_00000000 + 0x128))(in_stack_00000000,ar5,puVar1,ar7_01);
      iVar5 = FUN_8c0a77c8(ar4,ar5,ar7,ar7_01);
    }
    goto switchD_8c0a69b0_default;
  case 9:
    *(undefined4 *)(ar4 + 0x134) = 7;
switchD_8c0a69b0_caseD_7:
    FUN_8c03f460(auStack_b4,ar6,puVar1,ar7_01);
    puVar4 = auStack_b4;
    iVar5 = FUN_8c0a9578(ar4,ar5,puVar4,ar7);
    free_if_nonnull_wrap_102790(auStack_b4,0xffffffff,puVar4,ar7);
    goto switchD_8c0a69b0_default;
  }
switchD_8c0a6c88_default:
  *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
switchD_8c0a69b0_caseD_2:
  iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,puVar1,ar7_01);
  if (iVar2 == 1) {
    iVar5 = 0;
  }
switchD_8c0a69b0_default:
  if (iVar5 == 0) {
    *(undefined4 *)(ar4 + 0x134) = 0;
  }
  return iVar5;
}



/* FUN_8c0a72b4 @ 8c0a72b4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a72b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 unaff_r11;
  undefined4 uVar3;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  ulonglong in_dr0;
  undefined8 uVar7;
  double dVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined8 in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar4 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar4 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar4 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar4 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar4 + -0xc) = 1;
  *(undefined4 *)((int)puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar4 + -0x14) = in_PR;
  uVar3 = 1;
  uVar1 = ar5;
  ar6_00 = ar6;
  Vec3_set_zero((undefined1 *)((int)puVar4 + -0x20),ar5,ar6,ar7);
  uVar10 = (undefined4)in_dr14;
  iVar2 = *(int *)(ar4 + 0x40);
  if ((5 < iVar2) || (iVar2 < 0)) goto switchD_8c0a72f4_caseD_2;
                    /* WARNING: Switch is manually overridden */
  switch(iVar2) {
  case 0:
    uVar1 = rand_range(ar4,0,2,ar7);
    uVar5 = (undefined4)in_dr0;
    *(undefined4 *)((int)puVar4 + -0x28) = uVar1;
    if (*(int *)((int)puVar4 + -0x28) == 1) {
      ar7 = 0;
      ar6_00 = 0xffffffff;
      uVar1 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      *(undefined4 *)(ar4 + 0x220) = 0;
    }
    else {
      ar7 = 0;
      ar6_00 = 0xffffffff;
      uVar1 = 1;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
      *(undefined4 *)(ar4 + 0x220) = 1;
    }
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7);
    *(undefined4 *)(ar4 + 0x40) = 1;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(0xbf800000,uVar5);
      *(undefined4 *)(ar4 + 0x30) = 0xbf800000;
    }
    else {
      in_dr0 = 0xb0bf800000;
      *(undefined8 *)(ar4 + 0x30) = 0xb0bf800000;
    }
    *(undefined4 *)(ar4 + 0x224) = 2;
    break;
  case 2:
    goto switchD_8c0a72f4_caseD_2;
  case 3:
    goto switchD_8c0a72f4_caseD_3;
  case 4:
    *(int *)((int)puVar4 + -0x50) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(_DAT_8c2858d8,*(undefined4 *)(ar4 + 0x22c));
    }
    else {
      dVar8 = (double)CONCAT44(_DAT_8c2858dc,_DAT_8c2858d8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar8 / dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar4 + -0x50) + 0x28),fVar6);
    }
    else {
      dVar8 = *(double *)(*(int *)((int)puVar4 + -0x50) + 0x28);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - SUB84(dVar8,0),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)((int)puVar4 + -0x50) + 0x28) = (int)((ulonglong)dVar8 >> 0x20);
      dVar8 = (double)(ulonglong)*(uint *)(ar4 + 0x28);
    }
    else {
      *(double *)(*(int *)((int)puVar4 + -0x50) + 0x28) = dVar8;
    }
    if (in_FPSCR_PR != '\0' || SUB84(dVar8,0) <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar8 & 0xffffffff;
      }
    }
    uVar9 = (ulonglong)dVar8 & 0xffffffff;
    uVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7);
    *(undefined4 *)((int)puVar4 + -0x48) = uVar1;
    if (*(int *)((int)puVar4 + -0x48) == 1) {
      FUN_8c022fc0(ar5,ar6,ar6_00,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar4 + -0x4c) = (int)(uVar9 >> 0x20);
        dVar8 = (double)CONCAT44(0x40000000,_DAT_8c2858dc);
      }
      else {
        *(ulonglong *)((int)puVar4 + -0x4c) = uVar9;
        dVar8 = 1.8924005974588927e+232;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 * dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar6);
      }
      else {
        dVar8 = *(double *)(ar4 + 0x28);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar9 = CONCAT44(*(undefined4 *)((int)puVar4 + -0x4c),fVar6);
      }
      else {
        uVar9 = *(ulonglong *)((int)puVar4 + -0x4c);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar9 < (float)(uVar9 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar9 & 0xffffffff;
        }
        *(undefined4 *)(ar4 + 0x220) = *(undefined4 *)(ar4 + 0x224);
        *(undefined4 *)(ar4 + 0x40) = 1;
        if (*(int *)(ar4 + 0x220) == 0) {
          ar7 = 0;
          ar6_00 = 0xffffffff;
          ar6 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        }
        else if (*(int *)(ar4 + 0x220) == 1) {
          ar7 = 0;
          ar6_00 = 0xffffffff;
          ar6 = 1;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar6,ar6_00,ar7);
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar9 & 0xffffffff;
        }
        uVar3 = 0;
      }
    }
    goto switchD_8c0a72f4_caseD_2;
  }
  fVar6 = (float)in_dr0;
  if (*(int *)(ar4 + 0x220) == 0) {
    if (in_FPSCR_SZ == '\0') {
      _DAT_8c2858d4 = 1.0;
    }
    else {
      _DAT_8c2858dc = (code *)0x3f333333;
      _DAT_8c2858e8 = 0x7104d120;
      _DAT_8c2858d4 = fVar6;
      fVar6 = 0.7;
    }
    _DAT_8c2858e4 = 0.7;
    _DAT_8c2858e0 = 0.7;
    _DAT_8c2858d8 = 0x41300000;
  }
  else if (*(int *)(ar4 + 0x220) == 1) {
    if (in_FPSCR_SZ != '\0') {
      fVar6 = 7.0;
      _DAT_8c2858dc = FUN_8c031b68;
    }
    _DAT_8c2858d8 = 0x40e00000;
    _DAT_8c2858d4 = 10.0;
    if (in_FPSCR_SZ == '\0') {
      _DAT_8c2858e0 = 1.0;
      _DAT_8c2858e4 = 1.0;
    }
    else {
      _DAT_8c2858e8 = 0x3f800000;
      _DAT_8c2858e0 = fVar6;
      _DAT_8c2858e4 = fVar6;
    }
  }
  FUN_8c031b68(ar4,0x8c2858d0,ar6_00,ar7);
  if (in_FPSCR_SZ == '\0') {
    fVar6 = *(float *)(ar4 + 0x30);
  }
  in_dr0 = (ulonglong)(uint)fVar6;
  if (in_FPSCR_PR != '\0' || 0.0 <= fVar6) {
    if (in_FPSCR_SZ == '\0') {
      uVar10 = *(undefined4 *)(ar4 + 0x30);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x30);
      uVar10 = (undefined4)*(undefined8 *)(ar4 + 0x2c);
    }
  }
  uVar1 = ar5;
  ar6_00 = ar6;
  FUN_8c031bb4(ar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x224) != 2) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x30) = uVar10;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd14;
    }
  }
  *(undefined4 *)(ar4 + 0x40) = 3;
switchD_8c0a72f4_caseD_3:
  if (*(int *)(ar4 + 0x220) == 0) {
    FUN_8c03f3ac(ar4 + 0xb0,uVar1,ar6_00,ar7);
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7,*(undefined4 *)((int)puVar4 + -0x50));
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x2c) = (int)(in_dr0 >> 0x20);
      uVar7 = CONCAT44(0x41e80000,*(undefined4 *)((int)puVar4 + -0x2c));
    }
    else {
      *(ulonglong *)((int)puVar4 + -0x2c) = in_dr0;
      uVar7 = 0x8c032a6441e80000;
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar7 >> 0x20) <= (float)uVar7) {
      ar6_00 = 5;
      uVar1 = rand_range(ar4,0,5,ar7);
      *(undefined4 *)((int)puVar4 + -0x30) = uVar1;
      if (*(int *)((int)puVar4 + -0x30) != 1) {
        FUN_8c022fc0(ar5,ar6,ar6_00,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar4 + -0x34) = (int)((ulonglong)uVar7 >> 0x20);
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),_DAT_8c2858dc);
        }
        else {
          *(undefined8 *)((int)puVar4 + -0x34) = uVar7;
          dVar8 = *(double *)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar7 = CONCAT44(*(undefined4 *)((int)puVar4 + -0x34),fVar6);
        }
        else {
          uVar7 = *(undefined8 *)((int)puVar4 + -0x34);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar7 < (float)((ulonglong)uVar7 >> 0x20))
        goto LAB_8c0a761e;
      }
      *(undefined4 *)(ar4 + 0x224) = 1;
      *(undefined4 *)(ar4 + 0x220) = 2;
      *(undefined4 *)(ar4 + 0x40) = 4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x22c) = *(undefined4 *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x22c) = *(undefined8 *)(ar4 + 0x28);
      }
    }
  }
  else if (*(int *)(ar4 + 0x220) == 1) {
    FUN_8c03f3ac(ar4 + 0xb0,uVar1,ar6_00,ar7);
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7,*(undefined4 *)((int)puVar4 + -0x50));
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x38) = (int)(in_dr0 >> 0x20);
      uVar7 = CONCAT44(0x41200000,*(undefined4 *)((int)puVar4 + -0x38));
    }
    else {
      *(ulonglong *)((int)puVar4 + -0x38) = in_dr0;
      uVar7 = 0xb041200000;
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar7 >> 0x20) <= (float)uVar7) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0x40a00000;
        uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x28),(float)uVar7);
        *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = 0x4140000040a00000;
        uVar7 = *(undefined8 *)(ar4 + 0x28);
        *(undefined8 *)(ar4 + 0x24) = uVar7;
      }
    }
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7,*(undefined4 *)((int)puVar4 + -0x50));
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x3c) = (int)((ulonglong)uVar7 >> 0x20);
      uVar7 = CONCAT44(0x41400000,*(undefined4 *)((int)puVar4 + -0x3c));
    }
    else {
      *(undefined8 *)((int)puVar4 + -0x3c) = uVar7;
      uVar7 = 0x8c032a6441400000;
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar7 >> 0x20) <= (float)uVar7) {
      ar6_00 = 2;
      uVar1 = rand_range(ar4,0,2,ar7);
      *(undefined4 *)((int)puVar4 + -0x40) = uVar1;
      if (*(int *)((int)puVar4 + -0x40) != 1) {
        FUN_8c022fc0(ar5,ar6,ar6_00,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar4 + -0x44) = (int)((ulonglong)uVar7 >> 0x20);
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),_DAT_8c2858dc);
        }
        else {
          *(undefined8 *)((int)puVar4 + -0x44) = uVar7;
          dVar8 = *(double *)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar7 = CONCAT44(*(undefined4 *)((int)puVar4 + -0x44),fVar6);
        }
        else {
          uVar7 = *(undefined8 *)((int)puVar4 + -0x44);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar7 < (float)((ulonglong)uVar7 >> 0x20))
        goto LAB_8c0a761e;
      }
      *(undefined4 *)(ar4 + 0x224) = 0;
      *(undefined4 *)(ar4 + 0x220) = 2;
      *(undefined4 *)(ar4 + 0x40) = 4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x22c) = *(undefined4 *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x22c) = *(undefined8 *)(ar4 + 0x28);
      }
    }
  }
LAB_8c0a761e:
  if (*(int *)(ar4 + 0x40) != 4) {
    FUN_8c031764(ar4,ar6,ar5,ar7);
    *(undefined4 *)(ar4 + 0x40) = 3;
    ar6_00 = ar5;
  }
switchD_8c0a72f4_caseD_2:
  *(undefined4 *)((int)puVar4 + -0x24) = uVar3;
  object_dtor_delete((undefined1 *)((int)puVar4 + -0x20),0xffffffff,ar6_00,ar7);
  return *(undefined4 *)((int)puVar4 + -0x24);
}



/* FUN_8c0a77c8 @ 8c0a77c8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a7f62) */
/* WARNING: Removing unreachable block (ram,0x8c0a7ec4) */
/* WARNING: Removing unreachable block (ram,0x8c0a7ea8) */
/* WARNING: Removing unreachable block (ram,0x8c0a7a14) */
/* WARNING: Removing unreachable block (ram,0x8c0a7b52) */
/* WARNING: Removing unreachable block (ram,0x8c0a7c98) */
/* WARNING: Removing unreachable block (ram,0x8c0a7e48) */
/* WARNING: Removing unreachable block (ram,0x8c0a799a) */
/* WARNING: Removing unreachable block (ram,0x8c0a8308) */
/* WARNING: Removing unreachable block (ram,0x8c0a8150) */
/* WARNING: Removing unreachable block (ram,0x8c0a8132) */
/* WARNING: Removing unreachable block (ram,0x8c0a8118) */
/* WARNING: Removing unreachable block (ram,0x8c0a80fa) */
/* WARNING: Removing unreachable block (ram,0x8c0a805a) */
/* WARNING: Removing unreachable block (ram,0x8c0a8056) */
/* WARNING: Removing unreachable block (ram,0x8c0a8026) */
/* WARNING: Removing unreachable block (ram,0x8c0a8020) */
/* WARNING: Removing unreachable block (ram,0x8c0a8016) */
/* WARNING: Removing unreachable block (ram,0x8c0a8010) */
/* WARNING: Removing unreachable block (ram,0x8c0a7ffe) */
/* WARNING: Removing unreachable block (ram,0x8c0a7ff8) */
/* WARNING: Removing unreachable block (ram,0x8c0a77e4) */
/* WARNING: Removing unreachable block (ram,0x8c0a77c8) */
/* WARNING: Removing unreachable block (ram,0x8c0a77de) */
/* WARNING: Removing unreachable block (ram,0x8c0a77e8) */
/* WARNING: Removing unreachable block (ram,0x8c0a7ffc) */
/* WARNING: Removing unreachable block (ram,0x8c0a8000) */
/* WARNING: Removing unreachable block (ram,0x8c0a8014) */
/* WARNING: Removing unreachable block (ram,0x8c0a8018) */
/* WARNING: Removing unreachable block (ram,0x8c0a8024) */
/* WARNING: Removing unreachable block (ram,0x8c0a804a) */
/* WARNING: Removing unreachable block (ram,0x8c0a8058) */
/* WARNING: Removing unreachable block (ram,0x8c0a80ea) */
/* WARNING: Removing unreachable block (ram,0x8c0a8108) */
/* WARNING: Removing unreachable block (ram,0x8c0a8124) */
/* WARNING: Removing unreachable block (ram,0x8c0a8140) */
/* WARNING: Removing unreachable block (ram,0x8c0a83a6) */
/* WARNING: Removing unreachable block (ram,0x8c0a781c) */
/* WARNING: Removing unreachable block (ram,0x8c0a79a8) */
/* WARNING: Removing unreachable block (ram,0x8c0a7dc0) */
/* WARNING: Removing unreachable block (ram,0x8c0a7d2c) */
/* WARNING: Removing unreachable block (ram,0x8c0a7bec) */
/* WARNING: Removing unreachable block (ram,0x8c0a7aba) */
/* WARNING: Removing unreachable block (ram,0x8c0a7eb4) */
/* WARNING: Removing unreachable block (ram,0x8c0a7ed4) */
/* WARNING: Removing unreachable block (ram,0x8c0a7f72) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a77c8(int ar4,code *ar5,double *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  undefined4 uVar4;
  double *ar6_00;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double in_dr0;
  code *pcVar12;
  float fVar13;
  double dVar10;
  undefined8 uVar11;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined4 in_fr14;
  double in_xd0;
  bool bVar14;
  char cVar15;
  char cVar16;
  undefined8 uStack_60;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  cVar16 = '\0';
  cVar15 = '\0';
  fVar7 = (float)((ulonglong)in_dr4 >> 0x20);
  fVar9 = (float)((ulonglong)in_dr6 >> 0x20);
  uVar6 = 1;
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    ar7 = 0;
    pdVar3 = (double *)0xffffffff;
    ar5 = (code *)0x0;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
    fVar7 = SUB84(in_dr0,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,pdVar3,ar7);
    if (cVar16 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar7;
    }
    if (cVar16 == '\0') {
      *(undefined4 *)(ar4 + 0x94) = 0;
      fVar7 = *(float *)(ar4 + 0x21ac);
    }
    else {
      *(ulonglong *)(ar4 + 0x94) = (ulonglong)(uint)fVar7;
      in_xd0 = *(double *)(ar4 + 0x21ac);
    }
    dVar10 = (double)(ulonglong)(uint)fVar7;
    if (cVar15 == '\0' && fVar7 < 0.0) {
      while( true ) {
        fVar7 = SUB84(dVar10,0);
        if (cVar16 == '\0') {
          fVar7 = *(float *)(ar4 + 0x21ac);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x21ac);
        }
        if (cVar15 == '\0' && 0.0 < fVar7) break;
        ar5 = (code *)(ar4 + 0x21ac);
        if (cVar16 == '\0') {
          dVar10 = (double)CONCAT44(0x43b40000,*(undefined4 *)(ar4 + 0x21ac));
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x21ac);
          dVar10 = -5629500670083072.0;
        }
        if (cVar15 == '\0') {
          dVar10 = (double)(ulonglong)(uint)(SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20));
        }
        else {
          dVar10 = dVar10 + dVar10;
        }
        if (cVar16 == '\0') {
          *(float *)ar5 = SUB84(dVar10,0);
        }
        else {
          *(double *)ar5 = in_xd0;
        }
      }
      if (cVar16 == '\0') {
        dVar10 = (double)CONCAT44(0x43b40000,*(undefined4 *)(ar4 + 0x21ac));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x21ac);
        dVar10 = -5629500670083072.0;
      }
      if (cVar15 == '\0') {
        fVar7 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar16 == '\0') {
        *(float *)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(ar4 + 0x21ac);
        fVar9 = -180.0;
      }
      else {
        *(double *)(ar4 + 0x21ac) = in_xd0;
        in_xd0 = *(double *)(ar4 + 0x21ac);
        fVar7 = -180.0;
        fVar9 = 4.2039e-43;
      }
      if (cVar15 == '\0' && fVar7 < fVar9) {
        if (cVar16 == '\0') {
          dVar10 = (double)CONCAT44(0x43b40000,*(undefined4 *)(ar4 + 0x21ac));
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x21ac);
          dVar10 = -5629500670083072.0;
        }
        if (cVar15 == '\0') {
          fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar16 == '\0') {
          *(float *)(ar4 + 0x21ac) = fVar7;
        }
        else {
          *(double *)(ar4 + 0x21ac) = in_xd0;
        }
      }
    }
    else {
      while( true ) {
        fVar7 = SUB84(dVar10,0);
        if (cVar16 == '\0') {
          fVar7 = *(float *)(ar4 + 0x21ac);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x21ac);
        }
        if (cVar15 == '\0' && fVar7 < 0.0) break;
        if (cVar16 == '\0') {
          dVar10 = (double)CONCAT44(0x43b40000,*(undefined4 *)(ar4 + 0x21ac));
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x21ac);
          dVar10 = 5629500670083072.0;
        }
        if (cVar15 == '\0') {
          dVar10 = (double)(ulonglong)(uint)(SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20));
        }
        else {
          dVar10 = dVar10 - dVar10;
        }
        if (cVar16 == '\0') {
          *(int *)(ar4 + 0x21ac) = SUB84(dVar10,0);
        }
        else {
          *(double *)(ar4 + 0x21ac) = in_xd0;
        }
      }
      if (cVar16 == '\0') {
        dVar10 = (double)CONCAT44(0x43b40000,*(undefined4 *)(ar4 + 0x21ac));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x21ac);
        dVar10 = 5629500670083072.0;
      }
      if (cVar15 == '\0') {
        fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar16 == '\0') {
        *(float *)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(ar4 + 0x21ac);
        fVar9 = 180.0;
      }
      else {
        *(double *)(ar4 + 0x21ac) = in_xd0;
        in_xd0 = *(double *)(ar4 + 0x21ac);
        fVar7 = 180.0;
        fVar9 = -1.0;
      }
      if (cVar15 == '\0' && fVar9 < fVar7) {
        pdVar3 = (double *)(ar4 + 0x21ac);
        if (cVar16 == '\0') {
          dVar10 = (double)CONCAT44(*(float *)pdVar3,0x43b40000);
        }
        else {
          dVar10 = *pdVar3;
          in_xd0 = 5629500670083072.0;
        }
        if (cVar15 == '\0') {
          fVar7 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar10 - dVar10,0);
        }
        if (cVar16 == '\0') {
          dVar10 = (double)CONCAT44(0xbf800000,fVar7);
        }
        else {
          dVar10 = 4.6047243762097055e-232;
        }
        if (cVar15 == '\0') {
          fVar7 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar16 == '\0') {
          *(float *)(ar4 + 0x21ac) = fVar7;
        }
        else {
          *(double *)(ar4 + 0x21ac) = in_xd0;
        }
      }
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else {
    pdVar3 = ar6;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        *(float *)(ar4 + 0x21a8) = *(float *)(ar4 + 0x21a8) - 6.0;
        *(float *)(ar4 + 0x2194) = *(float *)(ar4 + 0x2194) + 6.0;
        fVar8 = *(float *)(ar4 + 0x2194);
        if (fVar8 < 90.0) {
          return 1;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x2194) = 0;
        fVar13 = -fVar9;
        in_dr0 = (double)CONCAT44(fVar13,fVar8);
        *(float *)(ar4 + 0x94) = fVar13;
      }
      else if (iVar1 != 3) {
        return 1;
      }
      pdVar3 = (double *)ar5;
      ar6_00 = ar6;
      FUN_8c022fc0(ar4 + 0x54,ar5,ar6,ar7);
      fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
      dVar10 = in_dr0;
      if (cVar16 == '\0') {
        uStack_60 = (double)CONCAT44(uStack_60._4_4_,fVar8);
        dVar10 = uStack_60;
      }
      uStack_60 = dVar10;
      if (cVar15 == '\0') {
        bVar14 = fVar8 < fVar7;
      }
      else {
        bVar14 = in_dr0 < (double)CONCAT44(in_fr14,fVar7);
      }
      if (bVar14) goto LAB_8c0a82ca;
      *(undefined4 *)(ar4 + 300) = 0;
      if (cVar16 == '\0') {
        *(undefined4 *)(ar4 + 0x94) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x94) = (ulonglong)in_dr0 & 0xffffffff;
      }
      uVar6 = 0;
      ar6_00 = (double *)0x2;
      pdVar3 = (double *)rand_range(ar4,0,2,ar7);
      if ((pdVar3 != (double *)0x0) || (*(int *)(ar4 + 0x2198) == 7)) {
        *(undefined4 *)(ar4 + 0x2198) = 6;
        goto LAB_8c0a82ca;
      }
      Vec3_assign(ar4 + 0x54,ar5,ar6_00,ar7);
      if (cVar16 == '\0') {
        *(int *)(ar4 + 0x58) = (int)in_dr4;
      }
      else {
        *(undefined8 *)(ar4 + 0x58) = CONCAT44(fVar9,(int)in_dr4);
      }
      *(undefined4 *)(ar4 + 0x2198) = 0;
      *(undefined4 *)(ar4 + 0x21a4) = 0;
      *(undefined4 *)(ar4 + 0x230) = 0;
      if (cVar16 == '\0') {
        fVar9 = *(float *)((int)ar6 + 4);
        fVar8 = 90.0;
      }
      else {
        in_xd0 = *(double *)((int)ar6 + 4);
        fVar9 = 90.0;
        fVar8 = 4.2039e-43;
      }
      if (fVar9 == fVar8) {
        if (cVar16 == '\0') {
          fVar9 = *(float *)(ar4 + 0x21ac);
          fVar8 = 90.0;
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x21ac);
          fVar9 = 90.0;
          fVar8 = 4.2039e-43;
        }
        if (fVar9 != fVar8) goto LAB_8c0a80fe;
LAB_8c0a8154:
        if (cVar16 == '\0') {
          dVar10 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x5c));
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x5c);
          dVar10 = 3.73983522256399e-312;
        }
        if (cVar15 == '\0') {
          fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar16 == '\0') {
          *(float *)(ar4 + 0x5c) = fVar9;
        }
        else {
          *(double *)(ar4 + 0x5c) = in_xd0;
        }
        Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7,auStack_2c);
        uVar4 = Vec3_length(auStack_2c,Vec3_length,ar6_00,ar7);
        Vec3_assign(ar4 + 0x80,uVar4,ar6_00,ar7);
        Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7);
      }
      else {
LAB_8c0a80fe:
        if (cVar16 == '\0') {
          fVar9 = *(float *)((int)ar6 + 4);
          fVar8 = -90.0;
        }
        else {
          in_xd0 = *(double *)((int)ar6 + 4);
          fVar9 = -90.0;
          fVar8 = 180.0;
        }
        if (fVar9 == fVar8) {
          if (cVar16 == '\0') {
            fVar9 = *(float *)(ar4 + 0x21ac);
            fVar8 = -90.0;
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x21ac);
            fVar9 = -90.0;
            fVar8 = 180.0;
          }
          if (fVar9 == fVar8) goto LAB_8c0a8154;
        }
        if (cVar16 == '\0') {
          fVar9 = *(float *)((int)ar6 + 4);
        }
        else {
          in_xd0 = *(double *)((int)ar6 + 4);
        }
        if (fVar9 == 0.0) {
          if (cVar16 == '\0') {
            fVar9 = *(float *)(ar4 + 0x21ac);
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x21ac);
          }
          if (fVar9 == 0.0) goto LAB_8c0a8154;
        }
        if (cVar16 == '\0') {
          fVar9 = *(float *)((int)ar6 + 4);
          fVar8 = 180.0;
        }
        else {
          in_xd0 = *(double *)((int)ar6 + 4);
          fVar9 = 180.0;
          fVar8 = 0.1;
        }
        if (fVar9 == fVar8) {
          if (cVar16 == '\0') {
            fVar9 = *(float *)(ar4 + 0x21ac);
            fVar8 = 180.0;
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x21ac);
            fVar9 = 180.0;
            fVar8 = 0.1;
          }
          if (fVar9 == fVar8) goto LAB_8c0a8154;
        }
        if (cVar16 == '\0') {
          dVar10 = (double)CONCAT44(0xbdcccccd,*(undefined4 *)(ar4 + 0x5c));
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x5c);
          dVar10 = 3.41092587496438e-312;
        }
        if (cVar15 == '\0') {
          fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar16 == '\0') {
          *(float *)(ar4 + 0x5c) = fVar9;
        }
        else {
          *(double *)(ar4 + 0x5c) = in_xd0;
        }
        Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7,auStack_3c);
        uVar4 = Vec3_length(auStack_3c,Vec3_length,ar6_00,ar7);
        Vec3_assign(ar4 + 0x80,uVar4,ar6_00,ar7);
        Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7);
      }
      iVar1 = ar4 + 0x80;
      Vec3_assign(ar4 + 0x14,iVar1,ar6_00,ar7);
      FUN_8c023d7c(ar4 + 0x21a8,iVar1,ar6_00,ar7);
      FUN_8c023d7c(ar6,iVar1,ar6_00,ar7);
      FUN_8c031ab4(ar4,ar6,ar6_00,ar7);
      pdVar3 = ar6;
LAB_8c0a82ca:
      if (499 < *(int *)(ar4 + 0x230)) {
        return uVar6;
      }
      if (cVar16 == '\0') {
        fVar9 = *(float *)(ar4 + 0x94);
        fVar8 = -3.0;
      }
      else {
        fVar9 = -3.0;
        fVar8 = 2.2959944e+08;
      }
      if (cVar15 != '\0' || fVar9 <= fVar8) {
        iVar1 = 0;
        while( true ) {
          if (cVar16 == '\0') {
            uVar11 = CONCAT44(*(undefined4 *)(ar4 + 0x94),(float)iVar1);
          }
          else {
            uVar11 = *(undefined8 *)(ar4 + 0x94);
          }
          if (cVar15 == '\0' && (float)uVar11 < (float)((ulonglong)uVar11 >> 0x20)) break;
          Vec3_ctor_xyz(auStack_4c,pdVar3,ar6_00,ar7);
          Vec3_add(ar5,auStack_4c,ar6_00,ar7,(int)&uStack_60 + 4);
          Vec3_assign(ar4 + *(int *)(ar4 + 0x230) * 0x10 + 0x234,(int)&uStack_60 + 4,ar6_00,ar7);
          Vec3_dtor((int)&uStack_60 + 4,0xffffffff,ar6_00,ar7);
          pdVar3 = (double *)0xffffffff;
          Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7);
          iVar2 = *(int *)(ar4 + 0x230);
          *(int *)(ar4 + 0x230) = iVar2 + 1;
          if (499 < iVar2 + 1) {
            *(undefined4 *)(ar4 + 0x230) = 500;
          }
          if (cVar15 == '\0') {
            bVar14 = (float)*(int *)(ar4 + 0x230) < fVar7;
          }
          else {
            bVar14 = (double)*(int *)(ar4 + 0x230) < (double)CONCAT44(in_fr14,fVar7);
          }
          if (!bVar14) {
            if (cVar15 == '\0') {
              iVar2 = (int)fVar7;
            }
            else {
              iVar2 = (int)(double)CONCAT44(in_fr14,fVar7);
            }
            *(int *)(ar4 + 0x230) = iVar2;
          }
          iVar1 = iVar1 + -2;
        }
        return uVar6;
      }
      Vec3_assign(ar4 + *(int *)(ar4 + 0x230) * 0x10 + 0x234,ar5,ar6_00,ar7);
      iVar1 = *(int *)(ar4 + 0x230);
      *(int *)(ar4 + 0x230) = iVar1 + 1;
      if (499 < iVar1 + 1) {
        *(undefined4 *)(ar4 + 0x230) = 500;
      }
      if (cVar15 == '\0') {
        bVar14 = (float)*(int *)(ar4 + 0x230) < fVar7;
      }
      else {
        bVar14 = (double)*(int *)(ar4 + 0x230) < (double)CONCAT44(in_fr14,fVar7);
      }
      if (bVar14) {
        return uVar6;
      }
      if (cVar15 == '\0') {
        iVar1 = (int)fVar7;
      }
      else {
        iVar1 = (int)(double)CONCAT44(in_fr14,fVar7);
      }
      *(int *)(ar4 + 0x230) = iVar1;
      return uVar6;
    }
  }
  if (cVar16 == '\0') {
    fVar7 = *(float *)((int)ar6 + 4);
    fVar9 = 90.0;
  }
  else {
    in_xd0 = *(double *)((int)ar6 + 4);
    fVar7 = 90.0;
    fVar9 = -90.0;
  }
  if (fVar7 != fVar9) {
    if (cVar16 == '\0') {
      fVar7 = *(float *)((int)ar6 + 4);
      fVar9 = -90.0;
    }
    else {
      in_xd0 = *(double *)((int)ar6 + 4);
      fVar7 = -90.0;
      fVar9 = -1.0;
    }
    if (fVar7 != fVar9) {
      if (cVar16 == '\0') {
        fVar7 = *(float *)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x21ac);
      }
      if (cVar15 != '\0' || 0.0 <= fVar7) {
        if (cVar16 == '\0') {
          fVar7 = *(float *)(ar4 + 0x21ac);
          fVar9 = 90.0;
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x21ac);
          fVar7 = 90.0;
          fVar9 = 180.0;
        }
        if (cVar15 == '\0' && fVar7 < fVar9) {
          if (cVar16 == '\0') {
            fVar7 = *(float *)(ar4 + 0x21ac);
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x21ac);
          }
          if (cVar15 == '\0') {
            fVar7 = fVar7 - 1.0;
          }
          else {
            fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) - (double)CONCAT44(0x3f800000,fVar7),0)
            ;
          }
          if (cVar16 == '\0') {
            *(float *)(ar4 + 0x21ac) = fVar7;
            fVar7 = *(float *)(ar4 + 0x21ac);
          }
          else {
            *(double *)(ar4 + 0x21ac) = in_xd0;
          }
          if (cVar15 != '\0' || fVar7 <= 0.0) {
            if (cVar16 == '\0') {
              fVar7 = *(float *)((int)ar6 + 4);
            }
            if (fVar7 == 0.0) {
              FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7);
            }
            else {
              FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7);
            }
            if (cVar16 == '\0') {
              *(undefined4 *)(ar4 + 0x21ac) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x21ac) = (ulonglong)(uint)fVar7;
            }
          }
        }
        else {
          if (cVar16 == '\0') {
            fVar7 = *(float *)(ar4 + 0x21ac);
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x21ac);
          }
          if (cVar15 == '\0') {
            fVar7 = fVar7 + 1.0;
          }
          else {
            fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0)
            ;
          }
          if (cVar16 == '\0') {
            *(float *)(ar4 + 0x21ac) = fVar7;
            fVar7 = *(float *)(ar4 + 0x21ac);
            pcVar12 = (code *)0x43340000;
          }
          else {
            *(double *)(ar4 + 0x21ac) = in_xd0;
            fVar7 = 180.0;
            pcVar12 = FUN_8c022d04;
          }
          if (cVar15 != '\0' || (float)pcVar12 <= fVar7) {
            if (cVar16 == '\0') {
              fVar7 = *(float *)((int)ar6 + 4);
            }
            if (fVar7 == 0.0) {
              FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7);
            }
            else {
              FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7);
            }
            if (cVar16 == '\0') {
              *(undefined4 *)(ar4 + 0x21ac) = 0x43340000;
            }
            else {
              *(undefined8 *)(ar4 + 0x21ac) = 0xfe6e04443340000;
            }
          }
        }
      }
      else {
        if (cVar16 == '\0') {
          fVar7 = *(float *)(ar4 + 0x21ac);
          fVar9 = -90.0;
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x21ac);
          fVar7 = -90.0;
          fVar9 = -180.0;
        }
        if (cVar15 == '\0' && fVar9 < fVar7) {
          if (cVar16 == '\0') {
            fVar7 = *(float *)(ar4 + 0x21ac);
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x21ac);
          }
          if (cVar15 == '\0') {
            fVar7 = fVar7 + 1.0;
          }
          else {
            fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0)
            ;
          }
          if (cVar16 == '\0') {
            *(float *)(ar4 + 0x21ac) = fVar7;
            fVar7 = *(float *)(ar4 + 0x21ac);
          }
          else {
            *(double *)(ar4 + 0x21ac) = in_xd0;
          }
          if (cVar15 != '\0' || 0.0 <= fVar7) {
            if (cVar16 == '\0') {
              fVar7 = *(float *)((int)ar6 + 4);
            }
            if (fVar7 == 0.0) {
              FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7);
            }
            else {
              FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7);
            }
            if (cVar16 == '\0') {
              *(undefined4 *)(ar4 + 0x21ac) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x21ac) = (ulonglong)(uint)fVar7;
            }
          }
        }
        else {
          if (cVar16 == '\0') {
            fVar7 = *(float *)(ar4 + 0x21ac);
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x21ac);
          }
          if (cVar15 == '\0') {
            fVar7 = fVar7 - 1.0;
          }
          else {
            fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) - (double)CONCAT44(0x3f800000,fVar7),0)
            ;
          }
          if (cVar16 == '\0') {
            *(float *)(ar4 + 0x21ac) = fVar7;
            fVar7 = *(float *)(ar4 + 0x21ac);
            pcVar12 = (code *)0xc3340000;
          }
          else {
            *(double *)(ar4 + 0x21ac) = in_xd0;
            fVar7 = -180.0;
            pcVar12 = FUN_8c022d04;
          }
          if (cVar15 != '\0' || fVar7 <= (float)pcVar12) {
            if (cVar16 == '\0') {
              fVar7 = *(float *)((int)ar6 + 4);
            }
            if (fVar7 == 0.0) {
              FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7);
            }
            else {
              FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7);
            }
            if (cVar16 == '\0') {
              *(undefined4 *)(ar4 + 0x21ac) = 0x43340000;
            }
            else {
              *(undefined8 *)(ar4 + 0x21ac) = 0x53ff1fef43340000;
            }
          }
        }
      }
      goto LAB_8c0a7e8a;
    }
  }
  if (cVar16 == '\0') {
    fVar7 = *(float *)(ar4 + 0x21ac);
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x21ac);
  }
  if (cVar15 == '\0' && 0.0 < fVar7) {
    if (cVar16 == '\0') {
      fVar7 = *(float *)(ar4 + 0x21ac);
      fVar9 = 90.0;
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x21ac);
      fVar7 = 90.0;
      fVar9 = -90.0;
    }
    if (cVar15 != '\0' || fVar9 <= fVar7) {
      ar5 = (code *)(ar4 + 0x21ac);
      if (cVar16 == '\0') {
        fVar7 = *(float *)ar5;
      }
      else {
        in_xd0 = *(double *)ar5;
      }
      if (cVar15 == '\0') {
        fVar7 = fVar7 - 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) - (double)CONCAT44(0x3f800000,fVar7),0);
      }
      if (cVar16 == '\0') {
        *(float *)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(ar4 + 0x21ac);
        fVar9 = 90.0;
      }
      else {
        *(double *)(ar4 + 0x21ac) = in_xd0;
        in_xd0 = *(double *)(ar4 + 0x21ac);
        fVar7 = 90.0;
        fVar9 = -90.0;
      }
      if (cVar15 != '\0' || fVar7 <= fVar9) {
        ar5 = (code *)(ar4 + 0x21ac);
        if (cVar16 == '\0') {
          *(float *)ar5 = 90.0;
          fVar7 = *(float *)((int)ar6 + 4);
          fVar9 = 90.0;
        }
        else {
          *(double *)ar5 = -21990236926976.0;
          in_xd0 = *(double *)((int)ar6 + 4);
          fVar7 = 90.0;
          fVar9 = -90.0;
        }
        if (fVar7 == fVar9) {
          FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7);
        }
        else {
          FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7);
        }
      }
    }
    if (cVar16 == '\0') {
      fVar7 = *(float *)(ar4 + 0x21ac);
      fVar9 = 90.0;
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x21ac);
      fVar7 = 90.0;
      fVar9 = -1.0;
    }
    if (cVar15 == '\0' && fVar7 < fVar9) {
      ar5 = (code *)(ar4 + 0x21ac);
      if (cVar16 == '\0') {
        fVar7 = *(float *)ar5;
      }
      else {
        in_xd0 = *(double *)ar5;
      }
      if (cVar15 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0);
      }
      if (cVar16 == '\0') {
        *(float *)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(ar4 + 0x21ac);
        fVar9 = 90.0;
      }
      else {
        *(double *)(ar4 + 0x21ac) = in_xd0;
        fVar7 = 90.0;
        fVar9 = -1.0;
      }
      if (cVar15 != '\0' || fVar9 <= fVar7) {
        ar5 = (code *)(ar4 + 0x21ac);
        if (cVar16 == '\0') {
          *(float *)ar5 = 90.0;
          fVar7 = *(float *)((int)ar6 + 4);
          fVar9 = 90.0;
        }
        else {
          *(double *)ar5 = -0.007812501941316441;
          fVar7 = 90.0;
          fVar9 = -1.0;
        }
        if (fVar7 == fVar9) {
          FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7);
        }
        else {
          FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7);
        }
      }
    }
  }
  else {
    if (cVar16 == '\0') {
      fVar7 = *(float *)(ar4 + 0x21ac);
      fVar9 = -90.0;
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x21ac);
      fVar7 = -90.0;
      fVar9 = 90.0;
    }
    if (cVar15 == '\0' && fVar7 < fVar9) {
      if (cVar16 == '\0') {
        fVar7 = *(float *)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x21ac);
      }
      if (cVar15 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0);
      }
      if (cVar16 == '\0') {
        *(float *)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(ar4 + 0x21ac);
        fVar9 = -90.0;
      }
      else {
        *(double *)(ar4 + 0x21ac) = in_xd0;
        in_xd0 = *(double *)(ar4 + 0x21ac);
        fVar7 = -90.0;
        fVar9 = 90.0;
      }
      if (cVar15 != '\0' || fVar9 <= fVar7) {
        if (cVar16 == '\0') {
          *(undefined4 *)(ar4 + 0x21ac) = 0xc2b40000;
          fVar7 = *(float *)((int)ar6 + 4);
          pcVar12 = (code *)0x42b40000;
        }
        else {
          *(undefined8 *)(ar4 + 0x21ac) = 0x42b40000c2b40000;
          in_xd0 = *(double *)((int)ar6 + 4);
          fVar7 = 90.0;
          pcVar12 = FUN_8c022d04;
        }
        if (fVar7 == (float)pcVar12) {
          FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7);
        }
        else {
          FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7);
        }
      }
    }
    ar5 = (code *)0x21ac;
    if (cVar16 == '\0') {
      fVar7 = *(float *)(ar4 + 0x21ac);
      fVar9 = -90.0;
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x21ac);
      fVar7 = -90.0;
      fVar9 = 90.0;
    }
    if (cVar15 == '\0' && fVar9 < fVar7) {
      if (cVar16 == '\0') {
        fVar7 = *(float *)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x21ac);
      }
      if (cVar15 == '\0') {
        fVar7 = fVar7 - 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) - (double)CONCAT44(0x3f800000,fVar7),0);
      }
      if (cVar16 == '\0') {
        *(float *)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(ar4 + 0x21ac);
        fVar9 = -90.0;
      }
      else {
        *(double *)(ar4 + 0x21ac) = in_xd0;
        fVar7 = -90.0;
        fVar9 = 90.0;
      }
      if (cVar15 != '\0' || fVar7 <= fVar9) {
        ar5 = (code *)(ar4 + 0x21ac);
        if (cVar16 == '\0') {
          *(float *)ar5 = -90.0;
          fVar7 = *(float *)((int)ar6 + 4);
          fVar9 = 90.0;
        }
        else {
          *(double *)ar5 = 21990245315584.0;
          fVar7 = 90.0;
          fVar9 = -6.935439e+32;
        }
        if (fVar7 == fVar9) {
          ar5 = FUN_8c022d04;
          FUN_8c022d04(ar4 + 0x14,FUN_8c022d04,pdVar3,ar7);
        }
        else {
          FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7);
        }
      }
    }
  }
LAB_8c0a7e8a:
  FUN_8c03f3ac(ar4 + 0xb0,ar5,pdVar3,ar7);
  if (cVar16 == '\0') {
    fVar7 = *(float *)((int)ar6 + 4);
    fVar9 = 90.0;
  }
  else {
    fVar7 = 90.0;
    fVar9 = -90.0;
  }
  if (fVar7 != fVar9) {
    if (cVar16 == '\0') {
      fVar7 = *(float *)((int)ar6 + 4);
      fVar9 = -90.0;
    }
    else {
      fVar7 = -90.0;
      fVar9 = 4.2039e-43;
    }
    if (fVar7 != fVar9) {
      if (cVar16 == '\0') {
        fVar7 = *(float *)(ar4 + 0x21ac);
      }
      if (fVar7 != 0.0) {
        if (cVar16 == '\0') {
          fVar7 = *(float *)(ar4 + 0x21ac);
          fVar9 = 180.0;
        }
        else {
          fVar7 = 180.0;
          fVar9 = 4.2039e-43;
        }
        if (fVar7 != fVar9) {
          return 1;
        }
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      uVar5 = 0;
      uVar4 = 0xffffffff;
      uVar6 = 2;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,uVar4,uVar5);
      if (cVar16 == '\0') {
        *(undefined4 *)(ar4 + 0x94) = 0xc0000000;
        return 1;
      }
      *(undefined8 *)(ar4 + 0x94) = 0x55fc1fecc0000000;
      return 1;
    }
  }
  if (cVar16 == '\0') {
    fVar7 = *(float *)(ar4 + 0x21ac);
    fVar9 = 90.0;
  }
  else {
    fVar7 = 90.0;
    fVar9 = -90.0;
  }
  if (fVar7 != fVar9) {
    if (cVar16 == '\0') {
      fVar7 = *(float *)(ar4 + 0x21ac);
      fVar9 = -90.0;
    }
    else {
      fVar7 = -90.0;
      fVar9 = 4.2039e-43;
    }
    if (fVar7 != fVar9) {
      return 1;
    }
  }
  *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  uVar5 = 0;
  uVar4 = 0xffffffff;
  uVar6 = 2;
  s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
  s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,uVar4,uVar5);
  if (cVar16 == '\0') {
    *(undefined4 *)(ar4 + 0x94) = 0xc0000000;
  }
  else {
    *(undefined8 *)(ar4 + 0x94) = 0x60e3d11ac0000000;
  }
  return 1;
}



/* FUN_8c0a8464 @ 8c0a8464 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a849c) */
/* WARNING: Removing unreachable block (ram,0x8c0a85b6) */
/* WARNING: Removing unreachable block (ram,0x8c0a85b2) */
/* WARNING: Removing unreachable block (ram,0x8c0a85b8) */
/* WARNING: Removing unreachable block (ram,0x8c0a85ca) */
/* WARNING: Removing unreachable block (ram,0x8c0a85aa) */
/* WARNING: Removing unreachable block (ram,0x8c0a858c) */
/* WARNING: Removing unreachable block (ram,0x8c0a8588) */
/* WARNING: Removing unreachable block (ram,0x8c0a857c) */
/* WARNING: Removing unreachable block (ram,0x8c0a8566) */
/* WARNING: Removing unreachable block (ram,0x8c0a8564) */
/* WARNING: Removing unreachable block (ram,0x8c0a8550) */
/* WARNING: Removing unreachable block (ram,0x8c0a854e) */
/* WARNING: Removing unreachable block (ram,0x8c0a8560) */
/* WARNING: Removing unreachable block (ram,0x8c0a8568) */
/* WARNING: Removing unreachable block (ram,0x8c0a8578) */
/* WARNING: Removing unreachable block (ram,0x8c0a857e) */
/* WARNING: Removing unreachable block (ram,0x8c0a8580) */
/* WARNING: Removing unreachable block (ram,0x8c0a858e) */
/* WARNING: Removing unreachable block (ram,0x8c0a849e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a8464(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = *(int *)(ar4 + 300);
  iVar2 = ar6;
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x94) = 0x40400000;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    Vec3_assign(ar4 + 0x54,ar5,ar6,ar7);
    if (cVar6 == '\0') {
      *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)(ar6 + 4);
    }
    else {
      *(undefined8 *)(ar4 + 0x58) = *(undefined8 *)(ar6 + 4);
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      *(undefined4 *)(ar4 + 0x94) = 0x40000000;
      *(float *)(ar4 + 0x21a8) = *(float *)(ar4 + 0x21a8) + 6.0;
      *(float *)(ar4 + 0x2194) = *(float *)(ar4 + 0x2194) + 6.0;
      if (*(float *)(ar4 + 0x2194) < 90.0) {
        return 1;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x2194) = 0;
      return 1;
    }
    if (iVar1 != 3) {
      return 1;
    }
    if (*(float *)(ar5 + 4) < *(float *)(ar6 + 4)) {
      return 1;
    }
    *(undefined4 *)(ar4 + 300) = 0;
    *(undefined4 *)(ar4 + 0x94) = 0;
    *(undefined4 *)(ar4 + 0x2198) = 5;
    return 0;
  }
  while( true ) {
    if (cVar6 == '\0') {
      uVar3 = CONCAT44(*(undefined4 *)(ar5 + 4),
                       *(undefined4 *)(ar4 + *(int *)(ar4 + 0x230) * 0x10 + 0x238));
    }
    else {
      uVar3 = *(undefined8 *)(ar5 + 4);
    }
    if (cVar5 == '\0' && (float)((ulonglong)uVar3 >> 0x20) < (float)uVar3) break;
    *(int *)(ar4 + 0x230) = *(int *)(ar4 + 0x230) + -1;
  }
  if (*(int *)(ar4 + 0x230) < 1) {
    FUN_8c022fc0(ar5,ar4 + 0x54,iVar2,ar7);
    if (cVar6 == '\0') {
      uVar4 = CONCAT44(0x42b40000,(int)((ulonglong)uVar3 >> 0x20));
    }
    else {
      uVar4 = 0x219442b40000;
    }
    if (cVar5 != '\0' || (float)uVar4 <= (float)(uVar4 >> 0x20)) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x230) = 0;
      if (cVar6 == '\0') {
        *(undefined4 *)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2194) = uVar4 & 0xffffffff;
      }
    }
  }
  return 1;
}



/* FUN_8c0a861c @ 8c0a861c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a861c(int ar4,undefined8 *ar5,ulonglong *ar6,undefined4 ar7)

{
  ulonglong uVar1;
  int iVar2;
  undefined *ar5_00;
  undefined4 uVar3;
  uint *ar5_01;
  ulonglong *ar6_00;
  undefined4 uVar4;
  float fVar5;
  ulonglong in_dr0;
  double dVar6;
  uint uVar8;
  undefined8 uVar7;
  ulonglong in_xd0;
  char cVar9;
  char cVar10;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  ulonglong auStack_64 [2];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined8 uStack_24;
  undefined8 uStack_1c;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  ar6_00 = ar6;
  Vec3_ctor_zero(&uStack_24,ar5,ar6,ar7);
  uStack_b8 = 1;
  iVar2 = *(int *)(ar4 + 300);
  if ((iVar2 < 5) && (-1 < iVar2)) {
    uVar3 = (undefined4)in_dr0;
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    case 0:
      ar6_00 = (ulonglong *)0x2;
      iVar2 = rand_range(ar4,0,2,ar7);
      if (iVar2 == 0) {
        Vec3_assign(&uStack_24,ar5,ar6_00,ar7);
        if (cVar10 == '\0') {
        }
        else {
          uStack_24._4_4_ = 0x219c;
        }
        uStack_24._0_4_ = 0x42c80000;
        Vec3_assign(ar4 + 0x54,&uStack_24,ar6_00,ar7);
        Vec3_assign(&uStack_24,ar5,ar6_00,ar7);
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x42c80000,(int)*ar6);
        }
        else {
          in_xd0 = *ar6;
          dVar6 = 1.82582053383223e-310;
        }
        if (cVar9 == '\0') {
          fVar5 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) - fVar5);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        uVar1 = in_xd0;
        if (cVar10 == '\0') {
          uStack_24 = CONCAT44(uStack_24._4_4_,SUB84(dVar6,0));
          uVar1 = uStack_24;
        }
        uStack_24 = uVar1;
        *(undefined4 *)(ar4 + 0x219c) = 4;
        FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7);
        uStack_d0 = (undefined4)((ulonglong)dVar6 >> 0x20);
        if (cVar10 == '\0') {
          uStack_d4 = uStack_d0;
          uStack_d0 = 0;
        }
        else {
          uStack_d4 = SUB84(dVar6,0);
        }
        FUN_8c022fc0(ar5,&uStack_24,ar6_00,ar7);
        uVar3 = (undefined4)((ulonglong)dVar6 >> 0x20);
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(uVar3,uStack_d4);
        }
        else {
          in_xd0 = CONCAT44(uStack_d0,uVar3);
        }
        if (cVar9 != '\0' || SUB84(dVar6,0) <= (float)((ulonglong)dVar6 >> 0x20)) {
          Vec3_assign(ar4 + 0x54,&uStack_24,ar6_00,ar7);
          *(undefined4 *)(ar4 + 0x219c) = 3;
        }
      }
      else {
        Vec3_assign(&uStack_24,ar5,ar6_00,ar7);
        if (cVar10 == '\0') {
        }
        else {
          uStack_1c._4_4_ = 0xf0;
        }
        uStack_1c._0_4_ = 0x42c80000;
        Vec3_assign(ar4 + 0x54,&uStack_24,ar6_00,ar7);
        Vec3_assign(&uStack_24,ar5,ar6_00,ar7);
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x42c80000,(int)ar6[1]);
        }
        else {
          in_xd0 = ar6[1];
          dVar6 = 5.09832542688757e-312;
        }
        if (cVar9 == '\0') {
          fVar5 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) - fVar5);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        uVar1 = in_xd0;
        if (cVar10 == '\0') {
          uStack_1c = CONCAT44(uStack_1c._4_4_,SUB84(dVar6,0));
          uVar1 = uStack_1c;
        }
        uStack_1c = uVar1;
        *(undefined4 *)(ar4 + 0x219c) = 2;
        FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7);
        uVar3 = (undefined4)((ulonglong)dVar6 >> 0x20);
        uStack_dc = uVar3;
        if (cVar10 != '\0') {
          uStack_dc = SUB84(dVar6,0);
          uStack_d8 = uVar3;
        }
        FUN_8c022fc0(ar5,&uStack_24,ar6_00,ar7);
        uVar3 = (undefined4)((ulonglong)dVar6 >> 0x20);
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(uVar3,uStack_dc);
        }
        else {
          in_xd0 = CONCAT44(uStack_d8,uVar3);
        }
        if (cVar9 != '\0' || SUB84(dVar6,0) <= (float)((ulonglong)dVar6 >> 0x20)) {
          Vec3_assign(ar4 + 0x54,&uStack_24,ar6_00,ar7);
          *(undefined4 *)(ar4 + 0x219c) = 1;
        }
      }
      fVar5 = SUB84(dVar6,0);
      Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7,auStack_34);
      ar5_00 = &DAT_8c13b298;
      Vec3_scale(ar4 + 0x14,&DAT_8c13b298,ar6_00,ar7,auStack_44);
      uVar3 = Vec3_length(auStack_34,ar5_00,ar6_00,ar7);
      iStack_c0 = FUN_8c023cd4(uVar3,auStack_44,ar6_00,ar7);
      Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
      if (iStack_c0 != 0) {
        if (cVar10 == '\0') {
          fVar5 = *(float *)(ar4 + 0x54);
        }
        else {
          in_xd0 = *(ulonglong *)(ar4 + 0x54);
        }
        if (cVar9 == '\0') {
          fVar5 = fVar5 + 1.0;
        }
        else {
          fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) + (double)CONCAT44(0x3f800000,fVar5),0);
        }
        if (cVar10 == '\0') {
          *(float *)(ar4 + 0x54) = fVar5;
          fVar5 = *(float *)(ar4 + 0x5c);
        }
        else {
          *(ulonglong *)(ar4 + 0x54) = in_xd0;
          in_xd0 = *(ulonglong *)(ar4 + 0x5c);
        }
        if (cVar9 == '\0') {
          fVar5 = fVar5 + 1.0;
        }
        else {
          fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) + (double)CONCAT44(0x3f800000,fVar5),0);
        }
        if (cVar10 == '\0') {
          *(float *)(ar4 + 0x5c) = fVar5;
        }
        else {
          *(ulonglong *)(ar4 + 0x5c) = in_xd0;
        }
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 1:
      Vec3_ctor_copy(auStack_54,ar5,ar6_00,ar7);
      Vec3_ctor_copy(auStack_64,ar4 + 0x54,ar6_00,ar7);
      ar6_00 = auStack_64;
      iVar2 = FUN_8c0a72b4(ar4,auStack_54,ar6_00,ar7);
      uStack_c4 = (uint)(iVar2 == 0);
      Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
      if (uStack_c4 != 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7);
      break;
    case 2:
      iVar2 = *(int *)(ar4 + 0x219c);
      if (iVar2 == 1) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)ar5;
          *(undefined4 *)(ar4 + 0x58) = 0x43480000;
          in_dr0 = CONCAT44((int)ar6[1],uVar3);
          *(int *)(ar4 + 0x5c) = (int)ar6[1];
        }
        else {
          *(undefined8 *)(ar4 + 0x54) = *ar5;
          *(undefined8 *)(ar4 + 0x58) = 0x9843480000;
          in_dr0 = ar6[1];
          *(ulonglong *)(ar4 + 0x5c) = in_dr0;
        }
      }
      else if (iVar2 == 2) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)ar5;
          in_dr0 = CONCAT44(0x43480000,uVar3);
          *(undefined4 *)(ar4 + 0x58) = 0x43480000;
        }
        else {
          *(undefined8 *)(ar4 + 0x54) = *ar5;
          in_dr0 = 0x705460e343480000;
          *(undefined8 *)(ar4 + 0x58) = 0x705460e343480000;
        }
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x5c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x5c) = in_dr0;
        }
      }
      else if (iVar2 == 3) {
        if (cVar10 == '\0') {
          *(int *)(ar4 + 0x54) = (int)*ar6;
          *(undefined4 *)(ar4 + 0x58) = 0x43480000;
          in_dr0 = CONCAT44(*(undefined4 *)(ar5 + 1),uVar3);
          *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar5 + 1);
        }
        else {
          *(ulonglong *)(ar4 + 0x54) = *ar6;
          *(undefined8 *)(ar4 + 0x58) = 0x705460e343480000;
          in_dr0 = ar5[1];
          *(ulonglong *)(ar4 + 0x5c) = in_dr0;
        }
      }
      else if (iVar2 == 4) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x54) = 0;
          *(undefined4 *)(ar4 + 0x58) = 0x43480000;
          in_dr0 = CONCAT44(*(undefined4 *)(ar5 + 1),uVar3);
          *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar5 + 1);
        }
        else {
          *(ulonglong *)(ar4 + 0x54) = in_dr0 & 0xffffffff;
          *(undefined8 *)(ar4 + 0x58) = 0x705460e343480000;
          in_dr0 = ar5[1];
          *(ulonglong *)(ar4 + 0x5c) = in_dr0;
        }
      }
      Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7,auStack_74);
      Vec3_assign(ar4 + 0x14,auStack_74,ar6_00,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
      Vec3_length(ar4 + 0x14,uVar3,ar6_00,ar7);
      FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7);
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x40a00000,(int)(in_dr0 >> 0x20));
      }
      else {
        dVar6 = 2.72151140845083e-312;
        in_xd0 = in_dr0;
      }
      if (cVar9 == '\0') {
        fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 / dVar6,0);
      }
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x28) = fVar5;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_xd0;
      }
      Vec3_assign(ar4 + 0x2174,ar4 + 0x80,ar6_00,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 3:
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x2194));
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + 0x2194);
        dVar6 = 0.007811875057814177;
      }
      if (cVar9 == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x2194) = fVar5;
        fVar5 = *(float *)(ar4 + 0x2194);
      }
      else {
        *(ulonglong *)(ar4 + 0x2194) = in_xd0;
      }
      if (cVar9 != '\0' || 1.0 <= fVar5) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x2194) = 0x3f7fff58;
        }
        else {
          fVar5 = 0.99999;
          *(undefined8 *)(ar4 + 0x2194) = 0x883f7fff58;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      if (cVar10 == '\0') {
        fVar5 = *(float *)(ar4 + 0x2194);
      }
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(1.0 - fVar5,fVar5);
      }
      else {
        dVar6 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
      }
      uVar8 = (uint)((ulonglong)dVar6 >> 0x20);
      uStack_c8 = uVar8;
      if (cVar10 != '\0') {
        uStack_c8 = SUB84(dVar6,0);
        uStack_c4 = uVar8;
      }
      ar5_01 = &uStack_c8;
      Vec3_scale(ar4 + 0x2174,ar5_01,ar6_00,ar7,auStack_84);
      Vec3_ctor_xyz(auStack_94,ar5_01,ar6_00,ar7);
      if (cVar10 == '\0') {
        uStack_cc = *(undefined4 *)(ar4 + 0x2194);
      }
      else {
        uVar7 = *(undefined8 *)(ar4 + 0x2194);
        uStack_cc = (undefined4)uVar7;
        uStack_c8 = (uint)((ulonglong)uVar7 >> 0x20);
      }
      Vec3_scale(auStack_94,&uStack_cc,ar6_00,ar7,auStack_a4);
      Vec3_add(auStack_84,auStack_a4,ar6_00,ar7,auStack_b4);
      Vec3_assign(ar4 + 0x80,auStack_b4,ar6_00,ar7);
      Vec3_dtor(auStack_b4,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
      break;
    case 4:
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar10 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0;
      }
      Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7);
      uVar4 = 0;
      *(undefined4 *)(ar4 + 300) = 0;
      if (cVar10 == '\0') {
        *(undefined4 *)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2194) = in_dr0 & 0xffffffff;
      }
      *(undefined4 *)(ar4 + 0x2198) = *(undefined4 *)(ar4 + 0x219c);
    }
  }
  uStack_bc = uVar4;
  Vec3_dtor(&uStack_24,0xffffffff,ar6_00,ar7);
  return uStack_bc;
}



/* FUN_8c0a8c0c @ 8c0a8c0c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a8f22) */
/* WARNING: Removing unreachable block (ram,0x8c0a8f2a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a8c0c(int ar4,undefined4 ar5,undefined8 *ar6,float *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar6_00;
  undefined8 *puVar3;
  undefined1 *ar7_00;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 in_dr0;
  double dVar7;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar5 = 1;
  iVar2 = *(int *)(ar4 + 300);
  if ((iVar2 < 5) && (-1 < iVar2)) {
    puVar3 = ar6;
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    case 0:
      *(undefined4 *)(ar4 + 0x230) = 0;
      Vec3_assign(ar4 + 0x54,ar5,ar6,ar7);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x42480000,*(undefined4 *)((int)ar6 + 4));
      }
      else {
        in_xd0 = *(undefined8 *)((int)ar6 + 4);
        dVar7 = 6.37148145623644e-312;
      }
      if (cVar8 == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x58) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x58) = in_xd0;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 1:
      FUN_8c03f460(auStack_24,ar6,puVar3,ar7);
      ar7_00 = auStack_24;
      ar6_00 = ar4 + 0x54;
      iVar2 = FUN_8c0a8f94(ar4,ar5,ar6_00,ar7_00);
      free_if_nonnull_wrap_102790(auStack_24,0xffffffff,ar6_00,ar7_00);
      if (iVar2 == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 2:
      iVar2 = *(int *)(ar4 + 0x2198);
      pfVar4 = ar7;
      if (iVar2 == 1) {
        Vec3_assign(ar4 + 0x54,ar5,ar6,ar7);
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x42480000,*(undefined4 *)(ar6 + 1));
        }
        else {
          in_xd0 = ar6[1];
          dVar7 = -7.956827045177258e-251;
        }
        if (cVar8 == '\0') {
          fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(ar4 + 0x5c) = fVar6;
          in_dr0 = CONCAT44(*(undefined4 *)((int)ar6 + 4),fVar6);
          *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)((int)ar6 + 4);
          ar6 = puVar3;
        }
        else {
          *(undefined8 *)(ar4 + 0x5c) = in_xd0;
          in_dr0 = *(undefined8 *)((int)ar6 + 4);
          *(undefined8 *)(ar4 + 0x58) = in_dr0;
          ar6 = puVar3;
        }
      }
      else if (iVar2 == 2) {
        Vec3_assign(ar4 + 0x54,ar5,ar6,ar7);
        if (cVar9 == '\0') {
          *(undefined4 *)(ar4 + 0x5c) = 0x42480000;
          in_dr0 = CONCAT44(*(undefined4 *)((int)ar6 + 4),(int)in_dr0);
          *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)((int)ar6 + 4);
          ar6 = puVar3;
        }
        else {
          *(undefined8 *)(ar4 + 0x5c) = 0x64e365c342480000;
          in_dr0 = *(undefined8 *)((int)ar6 + 4);
          *(undefined8 *)(ar4 + 0x58) = in_dr0;
          ar6 = puVar3;
        }
      }
      else if (iVar2 == 3) {
        Vec3_assign(ar4 + 0x54,ar5,ar6,ar7);
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x42480000,*(undefined4 *)ar6);
        }
        else {
          in_xd0 = *ar6;
          dVar7 = 9.825472717289265e+177;
        }
        if (cVar8 == '\0') {
          fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(ar4 + 0x54) = fVar6;
          in_dr0 = CONCAT44(*(undefined4 *)((int)ar6 + 4),fVar6);
          *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)((int)ar6 + 4);
          ar6 = puVar3;
        }
        else {
          *(undefined8 *)(ar4 + 0x54) = in_xd0;
          in_dr0 = *(undefined8 *)((int)ar6 + 4);
          *(undefined8 *)(ar4 + 0x58) = in_dr0;
          ar6 = puVar3;
        }
      }
      else if (iVar2 == 4) {
        Vec3_assign(ar4 + 0x54,ar5,ar6,ar7);
        if (cVar9 == '\0') {
          *(undefined4 *)(ar4 + 0x54) = 0x42480000;
          in_dr0 = CONCAT44(*(undefined4 *)((int)ar6 + 4),(int)in_dr0);
          *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)((int)ar6 + 4);
          ar6 = puVar3;
        }
        else {
          *(undefined8 *)(ar4 + 0x54) = 0x64e365c342480000;
          in_dr0 = *(undefined8 *)((int)ar6 + 4);
          *(undefined8 *)(ar4 + 0x58) = in_dr0;
          ar6 = puVar3;
        }
      }
      uVar1 = ar5;
      Vec3_sub(ar4 + 0x54,ar5,ar6,pfVar4,auStack_34);
      uVar1 = Vec3_length(auStack_34,uVar1,ar6,pfVar4);
      Vec3_assign(ar4 + 0x14,uVar1,ar6,pfVar4);
      Vec3_dtor(auStack_34,0xffffffff,ar6,pfVar4);
      FUN_8c022fc0(ar5,ar4 + 0x54,ar6,pfVar4);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x40a00000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar7 = 6.3713441689111e-312;
        in_xd0 = in_dr0;
      }
      if (cVar8 == '\0') {
        fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x28) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 3:
      iVar2 = *(int *)(ar4 + 0x2198);
      if (iVar2 == 1) {
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x41900000,*ar7);
        }
        else {
          in_xd0 = *(undefined8 *)ar7;
          dVar7 = 1.18886109352276e-311;
        }
        if (cVar8 == '\0') {
          fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar9 == '\0') {
          *ar7 = fVar6;
        }
        else {
          *(undefined8 *)ar7 = in_xd0;
        }
      }
      else if (iVar2 == 2) {
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x41900000,*ar7);
        }
        else {
          in_xd0 = *(undefined8 *)ar7;
          dVar7 = 5.633371060283568e+86;
        }
        if (cVar8 == '\0') {
          fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar9 == '\0') {
          *ar7 = fVar6;
        }
        else {
          *(undefined8 *)ar7 = in_xd0;
        }
      }
      else if (iVar2 == 3) {
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x41900000,ar7[2]);
        }
        else {
          in_xd0 = *(undefined8 *)(ar7 + 2);
          dVar7 = 5.94420282588366e+86;
        }
        if (cVar8 == '\0') {
          fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 == '\0') {
          ar7[2] = fVar6;
        }
        else {
          *(undefined8 *)(ar7 + 2) = in_xd0;
        }
      }
      else if (iVar2 == 4) {
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x41900000,ar7[2]);
        }
        else {
          in_xd0 = *(undefined8 *)(ar7 + 2);
          dVar7 = 6.255034591483752e+86;
        }
        if (cVar8 == '\0') {
          fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar9 == '\0') {
          ar7[2] = fVar6;
        }
        else {
          *(undefined8 *)(ar7 + 2) = in_xd0;
        }
      }
      *(int *)(ar4 + 0x230) = *(int *)(ar4 + 0x230) + 1;
      if (4 < *(int *)(ar4 + 0x230)) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 4:
      *(undefined4 *)(ar4 + 0x28) = 0;
      *(undefined4 *)(ar4 + 0x18) = 0;
      Vec3_length(ar4 + 0x14,ar5,ar6,ar7);
      FUN_8c023d7c(ar4 + 0x21a8,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x230) = 0;
      *(undefined4 *)(ar4 + 300) = 0;
      uVar5 = 0;
      *(undefined4 *)(ar4 + 0x2198) = 5;
      *(undefined4 *)(ar4 + 0x219c) = 0;
    }
  }
  return uVar5;
}



/* FUN_8c0a8f94 @ 8c0a8f94 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a8f94) */
/* WARNING: Unknown calling convention */

uint FUN_8c0a8f94(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *ar6_00;
  uint uVar5;
  float fVar6;
  double in_dr0;
  undefined4 uVar8;
  double dVar7;
  double in_dr14;
  char cVar9;
  char cVar10;
  undefined4 in_stack_00000000;
  undefined1 auStack_15c [16];
  undefined1 auStack_14c [12];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [16];
  undefined1 auStack_d4 [16];
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [12];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar5 = 1;
  uVar4 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x21b8) == 0) {
    switch(*(undefined4 *)(ar4 + 0x2198)) {
    case 1:
      FUN_8c023d7c(in_stack_00000000,uVar4,ar6_00,ar7);
      break;
    case 2:
      FUN_8c023d7c(in_stack_00000000,uVar4,ar6_00,ar7);
      break;
    case 3:
      FUN_8c023d7c(in_stack_00000000,uVar4,ar6_00,ar7);
      break;
    case 4:
      FUN_8c023d7c(in_stack_00000000,uVar4,ar6_00,ar7);
    }
    *(int *)(ar4 + 0x21b8) = *(int *)(ar4 + 0x21b8) + 1;
  }
  else if (*(int *)(ar4 + 0x21b8) != 1) goto LAB_8c0a951a;
  Vec3_assign(auStack_28,ar4 + 0x14,ar6_00,ar7);
  Vec3_ctor_copy(auStack_38,ar5,ar6_00,ar7);
  Vec3_ctor_copy(auStack_48,ar6,ar6_00,ar7);
  ar6_00 = auStack_48;
  iVar3 = FUN_8c0a72b4(ar4,auStack_38,ar6_00,ar7);
  Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
  uVar4 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
  if (iVar3 == 0) {
    *(undefined4 *)(ar4 + 0x21b8) = 0;
  }
  uVar5 = (uint)(iVar3 != 0);
  switch(*(undefined4 *)(ar4 + 0x2198)) {
  case 1:
  case 2:
    FUN_8c023138(auStack_28,uVar4,ar6_00,ar7,auStack_b4);
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    FUN_8c023138(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_c4);
    FUN_8c022dac(auStack_b4,auStack_c4,ar6_00,ar7);
    if (cVar10 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar8);
    }
    Vec3_dtor(auStack_c4,0xffffffff,ar6_00,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_b4,0xffffffff,ar6_00,ar7);
    FUN_8c023138(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_d4);
    FUN_8c023138(auStack_28,uVar4,ar6_00,ar7,auStack_e4);
    Vec3_set_xyz(auStack_f0,uVar4,ar6_00,ar7);
    FUN_8c023484(auStack_e4,auStack_f0,ar6_00,ar7,auStack_100);
    FUN_8c022dac(auStack_d4,auStack_100,ar6_00,ar7);
    if (cVar10 == '\0') {
      in_dr0 = (double)CONCAT44(0x42b40000,uVar8);
    }
    else {
      in_dr0 = 3.65536181321395e-312;
    }
    bVar1 = cVar9 != '\0';
    fVar6 = SUB84(in_dr0,0);
    uVar2 = (ulonglong)in_dr0 >> 0x20;
    Vec3_dtor(auStack_100,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_f0,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_e4,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_d4,0xffffffff,ar6_00,ar7);
    if (bVar1 || fVar6 <= (float)uVar2) {
      if (cVar10 == '\0') {
        in_dr0 = (double)CONCAT44(0xbf800000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 1.0192512720885868e-72;
      }
      if (cVar9 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
    }
    break;
  case 3:
  case 4:
    FUN_8c023180(auStack_28,uVar4,ar6_00,ar7,auStack_58);
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    FUN_8c023180(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_68);
    FUN_8c022dac(auStack_58,auStack_68,ar6_00,ar7);
    if (cVar10 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar8);
    }
    Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
    FUN_8c023180(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_78);
    FUN_8c023180(auStack_28,uVar4,ar6_00,ar7,auStack_88);
    Vec3_set_xyz(auStack_94,uVar4,ar6_00,ar7);
    FUN_8c023484(auStack_88,auStack_94,ar6_00,ar7,auStack_a4);
    FUN_8c022dac(auStack_78,auStack_a4,ar6_00,ar7);
    if (cVar10 == '\0') {
      in_dr0 = (double)CONCAT44(0x42b40000,uVar8);
    }
    else {
      in_dr0 = 5.607597940902e-312;
    }
    bVar1 = cVar9 != '\0';
    fVar6 = SUB84(in_dr0,0);
    uVar2 = (ulonglong)in_dr0 >> 0x20;
    Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_94,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_88,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_78,0xffffffff,ar6_00,ar7);
    if (bVar1 || fVar6 <= (float)uVar2) {
      if (cVar10 == '\0') {
        in_dr0 = (double)CONCAT44(0xbf800000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 1.0192410166384276e-72;
      }
      if (cVar9 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
    }
    break;
  case 5:
    FUN_8c0230f0(auStack_28,uVar4,ar6_00,ar7,auStack_110);
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_120);
    FUN_8c022dac(auStack_110,auStack_120,ar6_00,ar7);
    if (cVar10 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar8);
    }
    Vec3_dtor(auStack_120,0xffffffff,ar6_00,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_110,0xffffffff,ar6_00,ar7);
    FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_130);
    FUN_8c0230f0(auStack_28,uVar4,ar6_00,ar7,auStack_140);
    Vec3_set_xyz(auStack_14c,uVar4,ar6_00,ar7);
    FUN_8c023484(auStack_140,auStack_14c,ar6_00,ar7,auStack_15c);
    FUN_8c022dac(auStack_130,auStack_15c,ar6_00,ar7);
    if (cVar10 == '\0') {
      in_dr0 = (double)CONCAT44(0x42b40000,uVar8);
    }
    else {
      in_dr0 = -7.961142730794258e-251;
    }
    bVar1 = cVar9 != '\0';
    fVar6 = SUB84(in_dr0,0);
    uVar2 = (ulonglong)in_dr0 >> 0x20;
    Vec3_dtor(auStack_15c,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_14c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_140,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_130,0xffffffff,ar6_00,ar7);
    if (bVar1 || fVar6 <= (float)uVar2) {
      if (cVar10 == '\0') {
        in_dr0 = (double)CONCAT44(0xbf800000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 1.82507511546215e-310;
      }
      if (cVar9 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
    }
  }
  if ((*(int *)(ar4 + 0x2198) == 4) || (*(int *)(ar4 + 0x2198) == 2)) {
    if (cVar10 == '\0') {
      in_dr0 = (double)CONCAT44(0xbf800000,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = 1.82507511546215e-310;
    }
    if (cVar9 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) * (float)((ulonglong)in_dr0 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 * in_dr0;
    }
  }
  if (cVar10 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x21ac),SUB84(in_dr0,0));
  }
  else {
    dVar7 = *(double *)(ar4 + 0x21ac);
  }
  if (cVar9 == '\0') {
    dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + SUB84(in_dr14,0),SUB84(dVar7,0));
  }
  else {
    dVar7 = dVar7 + in_dr14;
  }
  if (cVar10 == '\0') {
    *(int *)(ar4 + 0x21ac) = (int)((ulonglong)dVar7 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x21ac) = dVar7;
  }
LAB_8c0a951a:
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
  return uVar5;
}



/* FUN_8c0a9578 @ 8c0a9578 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a9578(int ar4,undefined4 ar5,double *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  double *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  ulonglong in_dr0;
  double dVar6;
  double dVar7;
  double in_xd0;
  char cVar8;
  char cVar9;
  int *in_stack_00000000;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar3 = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  uVar4 = (uint)in_dr0;
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    Vec3_assign(ar4 + 0x2174,ar4 + 0x80,ar6_00,ar7_00);
    dVar7 = (double)(ulonglong)uVar4;
    if (cVar9 == '\0') {
      *(undefined4 *)(ar4 + 0x2194) = 0;
    }
    else {
      *(double *)(ar4 + 0x2194) = dVar7;
    }
    Vec3_assign(ar4 + 0x54,ar5,ar6_00,ar7_00);
    ar5_00 = ar4 + 0x14;
    Vec3_assign(ar4 + 0x80,ar5_00,ar6_00,ar7_00);
    FUN_8c023d7c(ar4 + 0x21a8,ar5_00,ar6_00,ar7_00);
    FUN_8c023d7c(ar7,ar5_00,ar6_00,ar7_00);
    iVar1 = *(int *)(ar4 + 0x2198);
    if (iVar1 == 1) {
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x42c80000,*(undefined4 *)(ar6 + 1));
      }
      else {
        in_xd0 = ar6[1];
        dVar7 = 1.82072774393391e-310;
      }
      if (cVar8 == '\0') {
        fVar5 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) - fVar5);
      }
      else {
        dVar7 = dVar7 - dVar7;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x5c) = SUB84(dVar7,0);
      }
      else {
        *(double *)(ar4 + 0x5c) = in_xd0;
      }
      FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00);
    }
    else if (iVar1 == 2) {
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x42c80000,SUB84(dVar7,0));
        *(undefined4 *)(ar4 + 0x5c) = 0x42c80000;
      }
      else {
        dVar7 = 1.82072774393391e-310;
        *(undefined8 *)(ar4 + 0x5c) = 0x218442c80000;
      }
      FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00);
    }
    else if (iVar1 == 3) {
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x42c80000,*(undefined4 *)ar6);
      }
      else {
        in_xd0 = *ar6;
        dVar7 = 1.82072774393391e-310;
      }
      if (cVar8 == '\0') {
        fVar5 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) - fVar5);
      }
      else {
        dVar7 = dVar7 - dVar7;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x54) = SUB84(dVar7,0);
      }
      else {
        *(double *)(ar4 + 0x54) = in_xd0;
      }
      FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00);
    }
    else if (iVar1 == 4) {
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x42c80000,SUB84(dVar7,0));
        *(undefined4 *)(ar4 + 0x54) = 0x42c80000;
      }
      else {
        dVar7 = 1.82072774393391e-310;
        *(undefined8 *)(ar4 + 0x54) = 0x218442c80000;
      }
      FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00);
    }
    (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000,ar4 + 0x54,ar6_00,ar7_00);
    uVar2 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (cVar9 == '\0') {
      *(undefined4 *)(ar4 + 0x58) = uVar2;
    }
    else {
      *(double *)(ar4 + 0x58) = dVar7;
      uStack_70 = uVar2;
    }
    FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7_00);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(0x40a00000,(int)((ulonglong)dVar7 >> 0x20));
    }
    else {
      dVar6 = -7.956827002088933e-251;
      in_xd0 = dVar7;
    }
    if (cVar8 == '\0') {
      fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
    }
    else {
      *(double *)(ar4 + 0x28) = in_xd0;
    }
    Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7_00,auStack_38);
    Vec3_assign(ar4 + 0x14,auStack_38,ar6_00,ar7_00);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7_00);
    Vec3_length(ar4 + 0x14,uVar2,ar6_00,ar7_00);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (cVar9 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      }
      if (cVar9 == '\0') {
        *(undefined4 *)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2194) = in_dr0 & 0xffffffff;
      }
      uVar3 = 0;
      Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7_00);
      *(undefined4 *)(ar4 + 0x2198) = 0;
      *(undefined4 *)(ar4 + 300) = 0;
    }
    goto LAB_8c0a984a;
  }
  if (cVar9 == '\0') {
    dVar7 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x2194));
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x2194);
    dVar7 = -7.957972460180408e-251;
  }
  if (cVar8 == '\0') {
    fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar7 + dVar7,0);
  }
  if (cVar9 == '\0') {
    *(float *)(ar4 + 0x2194) = fVar5;
    fVar5 = *(float *)(ar4 + 0x2194);
  }
  else {
    *(double *)(ar4 + 0x2194) = in_xd0;
  }
  if (cVar8 != '\0' || 1.0 <= fVar5) {
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    if (cVar9 == '\0') {
      *(undefined4 *)(ar4 + 0x2194) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x2194) = CONCAT44(0x3f800000,fVar5);
    }
  }
  if (cVar9 == '\0') {
    fVar5 = *(float *)(ar4 + 0x2194);
  }
  if (cVar8 == '\0') {
    dVar7 = (double)CONCAT44(1.0 - fVar5,fVar5);
  }
  else {
    dVar7 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
  }
  uVar2 = (undefined4)((ulonglong)dVar7 >> 0x20);
  uStack_70 = uVar2;
  if (cVar9 != '\0') {
    uStack_70 = SUB84(dVar7,0);
    uStack_6c = uVar2;
  }
  Vec3_scale(ar4 + 0x80,&uStack_70,ar6_00,ar7_00,auStack_48);
  Vec3_scale(ar4 + 0x2184,ar4 + 0x2194,ar6_00,ar7_00,auStack_58);
  Vec3_add(auStack_48,auStack_58,ar6_00,ar7_00,auStack_68);
  Vec3_assign(ar4 + 0x80,auStack_68,ar6_00,ar7_00);
  Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7_00);
  FUN_8c031ab4(ar4,ar7,ar6_00,ar7_00);
LAB_8c0a984a:
  uStack_6c = uVar3;
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_00);
  return uStack_6c;
}



/* FUN_8c0a98cc @ 8c0a98cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c0a98cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
            undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20,undefined4 s24,undefined4 s28
            ,undefined4 s32)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  int in_stack_ffffe088;
  undefined4 uStack_1f6c;
  undefined8 uStack_1f68;
  undefined8 *puStack_1f5c;
  undefined4 *puStack_1f58;
  undefined4 uStack_1f54;
  undefined4 uStack_1f50;
  undefined1 auStack_1f4c [8004];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar2 = 0x10;
  FUN_8c010120(auStack_1f4c,Vec3_ctor_zero,Vec3_dtor,0x10,500);
  uStack_1f6c = 0xffffffff;
  puStack_1f5c = &uStack_1f68;
  puStack_1f58 = &uStack_1f6c;
  uStack_1f54 = 0;
  uStack_1f50 = 1;
  for (iVar3 = 0; iVar3 < *(int *)(ar4 + 0x230) + -1; iVar3 = iVar3 + 1) {
    puVar1 = (undefined8 *)(ar4 + iVar3 * 0x10 + 0x234);
    if (cVar7 == '\0') {
      *(undefined4 *)puStack_1f5c = *(undefined4 *)puVar1;
    }
    else {
      *puStack_1f5c = *puVar1;
    }
    puVar1 = (undefined8 *)(ar4 + iVar3 * 0x10 + 0x238);
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(0x41700000,*(undefined4 *)puVar1);
    }
    else {
      in_xd0 = *puVar1;
      dVar5 = 1.21432400688359e-311;
    }
    if (cVar6 == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 == '\0') {
      *(float *)((int)puStack_1f5c + 4) = fVar4;
    }
    else {
      *(undefined8 *)((int)puStack_1f5c + 4) = in_xd0;
    }
    puVar1 = (undefined8 *)(ar4 + iVar3 * 0x10 + 0x23c);
    if (cVar7 == '\0') {
      *(undefined4 *)(puStack_1f5c + 1) = *(undefined4 *)puVar1;
    }
    else {
      puStack_1f5c[1] = *puVar1;
    }
    in_stack_ffffe088 = iVar3;
    FUN_8c234fd0(&puStack_1f5c,uStack_1f50,0,uVar2);
  }
  uVar2 = vec_delete_array(auStack_1f4c,Vec3_dtor,0x10,500,in_stack_ffffe088);
  return uVar2;
}



/* FUN_8c0a99c4 @ 8c0a99c4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a9fac) */
/* WARNING: Removing unreachable block (ram,0x8c0a9eaa) */
/* WARNING: Removing unreachable block (ram,0x8c0aa0a0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a99c4(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  undefined4 ar7_00;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  ulonglong in_dr0;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 in_xd0;
  char cVar10;
  char cVar11;
  int *in_stack_00000000;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [4];
  undefined8 uStack_1c;
  undefined4 uStack_c;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uStack_c = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_20,Vec3_ctor_zero,ar6,ar7);
  uStack_a0 = 1;
  if (*(int *)(ar4 + 0x2198) == 0) {
    FUN_8c023d7c(ar7,0,ar6_00,ar7_00);
  }
  uVar3 = (uint)in_dr0;
  iVar1 = *(int *)(ar4 + 0x68);
  uVar2 = 5;
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      while( true ) {
        uVar3 = (uint)in_dr0;
        FUN_8c03c314(ar4,FUN_8c03c314,ar6_00,ar7_00);
        in_dr0 = (ulonglong)uVar3;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x21a0) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x21a0) = in_dr0;
        }
        Vec3_assign(ar4 + 0x2174,ar4 + 0x14,ar6_00,ar7_00);
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2194) = in_dr0;
        }
        uVar2 = ar5;
        Vec3_assign(ar4 + 0x54,ar5,ar6_00,ar7_00);
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x58) = in_dr0;
        }
        FUN_8c023d7c(ar4 + 0x21a8,uVar2,ar6_00,ar7_00);
        uVar4 = (undefined4)in_dr0;
        if (ar6 != 0) {
          if (ar6 == 3) {
            ar7_00 = 0;
            ar6_00 = -1;
            uVar2 = 2;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
            if (cVar11 == '\0') {
              in_dr0 = CONCAT44(0x3dcccccd,uVar4);
              *(undefined4 *)(ar4 + 0xa0) = 0x3dcccccd;
            }
            else {
              in_dr0 = 0x8c0268583dcccccd;
              *(undefined8 *)(ar4 + 0xa0) = 0x8c0268583dcccccd;
            }
            in_dr0 = in_dr0 & 0xffffffff;
            if (cVar11 == '\0') {
              *(undefined4 *)(ar4 + 0x28) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x28) = in_dr0;
            }
            *(int *)(ar4 + 0x68) = *(int *)(ar4 + 0x68) + 1;
          }
          goto switchD_8c0a9a1a_caseD_1;
        }
        ar7_00 = 0;
        ar6_00 = -1;
        uVar2 = 7;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        if (cVar11 == '\0') {
          in_dr0 = CONCAT44(0x3a83126f,uVar4);
          *(undefined4 *)(ar4 + 0xa0) = 0x3a83126f;
        }
        else {
          in_dr0 = 0xc716e7003a83126f;
          *(undefined8 *)(ar4 + 0xa0) = 0xc716e7003a83126f;
        }
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0;
        }
        *(undefined4 *)(ar4 + 0x68) = 2;
switchD_8c0a9a1a_caseD_2:
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        uVar3 = (uint)in_dr0;
        if (ar6 != 3) break;
        *(undefined4 *)(ar4 + 0x68) = 0;
        *(undefined4 *)(ar4 + 0x21a4) = 0;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x18) = in_dr0 & 0xffffffff;
        }
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2194) = in_dr0;
        }
      }
      Vec3_set_xyz(auStack_2c,uVar2,ar6_00,ar7_00);
      FUN_8c023484(ar4 + 0x14,auStack_2c,ar6_00,ar7_00,auStack_3c);
      Vec3_assign(ar4 + 0x14,auStack_3c,ar6_00,ar7_00);
      Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7_00);
      uVar2 = 0xffffffff;
      object_dtor_delete(auStack_2c,0xffffffff,ar6_00,ar7_00);
      if ((ar6 != 1) && (ar6 != 2)) {
        FUN_8c03207c(ar4,uVar2,ar6_00,ar7_00);
        FUN_8c0324ac(ar4,uVar2,ar6_00,ar7_00);
        break;
      }
      *(undefined4 *)(ar4 + 0x68) = 5;
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2194) = (ulonglong)uVar3;
      }
      iVar1 = ar4 + 0x14;
      Vec3_assign(ar4 + 0x2174,iVar1,ar6_00,ar7_00);
      FUN_8c031700(ar4,iVar1,ar6_00,ar7_00);
    case 5:
      *(undefined4 *)(ar4 + 0x21a4) = 2;
      break;
    case 1:
switchD_8c0a9a1a_caseD_1:
      uVar3 = (uint)in_dr0;
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
      if (ar6 == 0) {
        FUN_8c073c9c(ar4,uVar2,ar6_00,ar7_00);
        *(undefined4 *)(ar4 + 0x68) = 0;
        break;
      }
      if (ar6 != 1) {
        FUN_8c0324ac(ar4,uVar2,ar6_00,ar7_00);
        break;
      }
      *(undefined4 *)(ar4 + 0x68) = 3;
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2194) = (ulonglong)uVar3;
      }
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0x94) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x94) = (ulonglong)uVar3;
      }
      uVar6 = (ulonglong)uVar3;
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xa0) = uVar6;
      }
      *(undefined4 *)(ar4 + 0x21a4) = 1;
      if (*(char *)(ar4 + 0x210) == '\x01') {
        ar7_00 = 0xd;
        ar6_00 = 1;
        (**(code **)(*in_stack_00000000 + 0xd0))(in_stack_00000000,ar5,1,0xd);
        uVar3 = (uint)uVar6;
        uVar2 = ar5;
      }
    case 3:
      uVar6 = (ulonglong)uVar3;
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xa0) = uVar6;
      }
      FUN_8c073c9c(ar4,uVar2,ar6_00,ar7_00);
      uVar7 = uVar6 & 0xffffffff;
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = uVar7;
      }
      if (ar6 == 1) {
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        uVar3 = (uint)uVar7;
        iVar1 = ar4 + 0x14;
        Vec3_assign(auStack_20,iVar1,ar6_00,ar7_00);
        uVar6 = (ulonglong)uVar3;
        if (cVar11 == '\0') {
          uStack_1c = (ulonglong)uStack_1c._4_4_ << 0x20;
          uVar6 = uStack_1c;
        }
        uStack_1c = uVar6;
        Vec3_length(auStack_20,iVar1,ar6_00,ar7_00);
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x2194));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x2194);
          dVar8 = 1.81732883613961e-310;
        }
        if (cVar10 == '\0') {
          fVar5 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 0x2194) = fVar5;
          fVar5 = *(float *)(ar4 + 0x2194);
        }
        else {
          *(undefined8 *)(ar4 + 0x2194) = in_xd0;
        }
        if (cVar10 != '\0' || 1.0 <= fVar5) {
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x2194) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + 0x2194) = CONCAT44(0x3f800000,fVar5);
          }
        }
        if (cVar11 == '\0') {
          fVar5 = *(float *)(ar4 + 0x2194);
        }
        if (cVar10 == '\0') {
          dVar8 = (double)CONCAT44(1.0 - fVar5,fVar5);
        }
        else {
          dVar8 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
        }
        uVar2 = (undefined4)((ulonglong)dVar8 >> 0x20);
        uStack_a8 = uVar2;
        if (cVar11 != '\0') {
          uStack_a8 = SUB84(dVar8,0);
          uStack_a4 = uVar2;
        }
        Vec3_scale(ar4 + 0x2174,&uStack_a8,ar6_00,ar7_00,auStack_4c);
        if (cVar11 == '\0') {
          uStack_ac = *(undefined4 *)(ar4 + 0x2194);
          uVar9 = CONCAT44(uStack_ac,SUB84(dVar8,0));
        }
        else {
          uVar9 = *(undefined8 *)(ar4 + 0x2194);
          uStack_ac = (undefined4)uVar9;
          uStack_a8 = (undefined4)((ulonglong)uVar9 >> 0x20);
        }
        fVar5 = (float)uVar9;
        Vec3_scale(auStack_20,&uStack_ac,ar6_00,ar7_00,auStack_5c);
        Vec3_add(auStack_4c,auStack_5c,ar6_00,ar7_00,auStack_6c);
        Vec3_assign(ar4 + 0x14,auStack_6c,ar6_00,ar7_00);
        Vec3_dtor(auStack_6c,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7_00);
        if (cVar11 == '\0') {
          fVar5 = *(float *)(ar4 + 0x2194);
        }
        if (fVar5 == 1.0) {
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x2194) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2194) = (ulonglong)(uint)fVar5;
          }
          *(undefined4 *)(ar4 + 0x21a4) = 2;
          *(undefined4 *)(ar4 + 0x40) = 5;
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x94) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x94) = (ulonglong)(uint)fVar5;
          }
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0xa0) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0xa0) = (ulonglong)(uint)fVar5;
          }
          *(undefined4 *)(ar4 + 0x68) = 0;
        }
        Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00);
      }
      else {
        *(undefined4 *)(ar4 + 0x68) = 0;
        *(undefined4 *)(ar4 + 0x21a4) = 0;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x18) = uVar6 & 0xffffffff;
        }
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2194) = uVar6 & 0xffffffff;
        }
      }
      break;
    case 2:
      goto switchD_8c0a9a1a_caseD_2;
    case 4:
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xa0) = in_dr0;
      }
      FUN_8c073c9c(ar4,5,ar6_00,ar7_00);
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0;
      }
      FUN_8c022d04(ar4 + 0x6c,uVar2,ar6_00,ar7_00);
      fVar5 = (float)in_dr0;
      if (ar6 == 1) {
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        if (cVar11 == '\0') {
          fVar5 = *(float *)(ar4 + 0x18);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x18);
        }
        uVar6 = (ulonglong)(uint)fVar5;
        if (fVar5 != 0.0) {
          iVar1 = ar4 + 0x14;
          Vec3_assign(auStack_20,iVar1,ar6_00,ar7_00);
          uVar6 = uVar6 & 0xffffffff;
          if (cVar11 == '\0') {
            uStack_1c = uStack_1c & 0xffffffff00000000;
            uVar6 = uStack_1c;
          }
          uStack_1c = uVar6;
          Vec3_length(auStack_20,iVar1,ar6_00,ar7_00);
          if (cVar11 == '\0') {
            dVar8 = (double)CONCAT44(0x3d4ccccd,*(undefined4 *)(ar4 + 0x2194));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x2194);
            dVar8 = 1.81732800723501e-310;
          }
          if (cVar10 == '\0') {
            fVar5 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar8 + dVar8,0);
          }
          if (cVar11 == '\0') {
            *(float *)(ar4 + 0x2194) = fVar5;
            fVar5 = *(float *)(ar4 + 0x2194);
          }
          else {
            *(undefined8 *)(ar4 + 0x2194) = in_xd0;
          }
          if (cVar10 != '\0' || 1.0 <= fVar5) {
            if (cVar11 == '\0') {
              *(undefined4 *)(ar4 + 0x2194) = 0x3f800000;
            }
            else {
              *(undefined8 *)(ar4 + 0x2194) = CONCAT44(0x3f800000,fVar5);
            }
          }
          if (cVar11 == '\0') {
            fVar5 = *(float *)(ar4 + 0x2194);
          }
          if (cVar10 == '\0') {
            dVar8 = (double)CONCAT44(1.0 - fVar5,fVar5);
          }
          else {
            dVar8 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
          }
          uVar2 = (undefined4)((ulonglong)dVar8 >> 0x20);
          uStack_b0 = uVar2;
          if (cVar11 != '\0') {
            uStack_b0 = SUB84(dVar8,0);
            uStack_ac = uVar2;
          }
          Vec3_scale(ar4 + 0x2174,&uStack_b0,ar6_00,ar7_00,auStack_7c);
          if (cVar11 == '\0') {
            uStack_b4 = *(undefined4 *)(ar4 + 0x2194);
            uVar9 = CONCAT44(uStack_b4,SUB84(dVar8,0));
          }
          else {
            uVar9 = *(undefined8 *)(ar4 + 0x2194);
            uStack_b4 = (undefined4)uVar9;
            uStack_b0 = (undefined4)((ulonglong)uVar9 >> 0x20);
          }
          fVar5 = (float)uVar9;
          Vec3_scale(auStack_20,&uStack_b4,ar6_00,ar7_00,auStack_8c);
          Vec3_add(auStack_7c,auStack_8c,ar6_00,ar7_00,auStack_9c);
          Vec3_assign(ar4 + 0x14,auStack_9c,ar6_00,ar7_00);
          Vec3_dtor(auStack_9c,0xffffffff,ar6_00,ar7_00);
          Vec3_dtor(auStack_8c,0xffffffff,ar6_00,ar7_00);
          Vec3_dtor(auStack_7c,0xffffffff,ar6_00,ar7_00);
          if (cVar11 == '\0') {
            fVar5 = *(float *)(ar4 + 0x2194);
          }
          if (fVar5 == 1.0) {
            if (cVar11 == '\0') {
              *(undefined4 *)(ar4 + 0x2194) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x2194) = (ulonglong)(uint)fVar5;
            }
          }
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x68) = 0;
        *(undefined4 *)(ar4 + 0x21a4) = 0;
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x18) = in_dr0 & 0xffffffff;
        }
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x2194) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2194) = in_dr0 & 0xffffffff;
        }
      }
    }
  }
  uStack_a4 = 0;
  Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7_00);
  return uStack_a4;
}



/* FUN_8c0aa11c @ 8c0aa11c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0aa11c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *ar5_00;
  undefined4 uVar4;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar5;
  float in_fr1;
  float fVar6;
  code *pcVar9;
  double dVar7;
  ulonglong uVar8;
  ulonglong in_xd0;
  char cVar10;
  char cVar11;
  undefined8 uStack_f8;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = 1;
  uVar4 = ar5;
  uVar3 = ar6;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  iVar2 = get_field_6c_028cc4(ar6,uVar4,uVar3,ar7);
  ar7_00 = auStack_24;
  ar6_00 = auStack_28;
  ar5_00 = auStack_2c;
  FUN_8c0507a4(iVar2,ar5_00,ar6_00,ar7_00);
  if (iVar2 == 0) {
    Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7_00);
    uVar5 = 2;
  }
  else {
    iVar2 = *(int *)(ar4 + 300);
    if ((iVar2 < 6) && (-1 < iVar2)) {
                    /* WARNING: Switch is manually overridden */
      switch(iVar2) {
      case 0:
        *(undefined4 *)(ar4 + 0x21bc) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        FUN_8c030f2c(ar4 + 0x1fc,ar5_00,ar6_00,ar7_00);
      case 1:
        ar6_00 = auStack_2c;
        iVar2 = FUN_8c0ab0d8(ar4,ar5,ar6_00,ar7_00);
        if (iVar2 == 0) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x2194) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2194) = (ulonglong)(uint)in_fr1;
          }
          FUN_8c03f3e8(ar6,ar5,ar6_00,ar7_00);
        }
        break;
      case 2:
        if (cVar11 == '\0') {
          in_fr1 = *(float *)(ar4 + 0x2194);
        }
        else {
          in_xd0 = *(ulonglong *)(ar4 + 0x2194);
        }
        if (cVar10 == '\0') {
          in_fr1 = in_fr1 + 1.0;
        }
        else {
          in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0
                        );
        }
        uStack_f8 = in_xd0;
        if (cVar11 == '\0') {
          uStack_f8 = CONCAT44(ar4,in_fr1);
        }
        if (cVar11 == '\0') {
          *(undefined4 *)(uStack_f8._4_4_ + 0x2194) = (undefined4)uStack_f8;
          uVar8 = CONCAT44(0x43160000,(undefined4)uStack_f8);
        }
        else {
          *(ulonglong *)(uStack_f8._4_4_ + 0x2194) = uStack_f8;
          uVar8 = 0x12c43160000;
        }
        if (cVar10 != '\0' || (float)(uVar8 >> 0x20) <= (float)uVar8) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x2194) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2194) = uVar8 & 0xffffffff;
          }
        }
        break;
      case 3:
        Vec3_ctor_xyz(auStack_3c,ar5_00,ar6_00,ar7_00);
        ar6_00 = auStack_3c;
        iVar2 = FUN_8c0ab0d8(ar4,ar5,ar6_00,ar7_00);
        Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7_00);
        if (iVar2 == 0) {
          ar7_00 = (undefined1 *)0x0;
          ar6_00 = (undefined1 *)0xffffffff;
          uVar4 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          uVar8 = (ulonglong)(uint)in_fr1;
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x22c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x22c) = uVar8;
          }
          Vec3_ctor_xyz(auStack_4c,uVar4,ar6_00,ar7_00);
          uVar3 = Vec3_length(auStack_4c,uVar4,ar6_00,ar7_00);
          FUN_8c023138(uVar3,uVar4,ar6_00,ar7_00,auStack_5c);
          FUN_8c023138(ar4 + 0x14,uVar4,ar6_00,ar7_00,auStack_6c);
          FUN_8c022dac(auStack_5c,auStack_6c,ar6_00,ar7_00);
          if (cVar11 == '\0') {
            *(int *)(ar4 + 0x2194) = (int)(uVar8 >> 0x20);
          }
          else {
            *(ulonglong *)(ar4 + 0x2194) = uVar8;
          }
          Vec3_dtor(auStack_6c,0xffffffff,ar6_00,ar7_00);
          Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7_00);
          uVar3 = 0xffffffff;
          Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7_00);
          FUN_8c023138(ar4 + 0x14,uVar3,ar6_00,ar7_00,auStack_7c);
          Vec3_ctor_xyz(auStack_8c,uVar3,ar6_00,ar7_00);
          uVar4 = Vec3_length(auStack_8c,uVar3,ar6_00,ar7_00);
          FUN_8c023138(uVar4,uVar3,ar6_00,ar7_00,auStack_9c);
          Vec3_set_xyz(auStack_a8,uVar3,ar6_00,ar7_00);
          FUN_8c023484(auStack_9c,auStack_a8,ar6_00,ar7_00,auStack_b8);
          FUN_8c022dac(auStack_7c,auStack_b8,ar6_00,ar7_00);
          if (cVar11 == '\0') {
            fVar6 = (float)(uVar8 >> 0x20);
            pcVar9 = (code *)0x42b40000;
            uVar8 = in_xd0;
          }
          else {
            fVar6 = 90.0;
            pcVar9 = Vec3_set_xyz;
          }
          bVar1 = cVar10 != '\0';
          Vec3_dtor(auStack_b8,0xffffffff,ar6_00,ar7_00);
          object_dtor_delete(auStack_a8,0xffffffff,ar6_00,ar7_00);
          Vec3_dtor(auStack_9c,0xffffffff,ar6_00,ar7_00);
          Vec3_dtor(auStack_8c,0xffffffff,ar6_00,ar7_00);
          Vec3_dtor(auStack_7c,0xffffffff,ar6_00,ar7_00);
          if (bVar1 || fVar6 <= (float)pcVar9) {
            if (cVar11 == '\0') {
              dVar7 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x2194));
            }
            else {
              uVar8 = *(ulonglong *)(ar4 + 0x2194);
              dVar7 = 3.75058611530083e-312;
            }
            if (cVar10 == '\0') {
              fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
            }
            else {
              fVar6 = SUB84(dVar7 * dVar7,0);
            }
            if (cVar11 == '\0') {
              *(float *)(ar4 + 0x2194) = fVar6;
            }
            else {
              *(ulonglong *)(ar4 + 0x2194) = uVar8;
            }
          }
        }
        break;
      case 4:
        if (cVar11 == '\0') {
          in_fr1 = *(float *)(ar4 + 0x2194);
        }
        else {
          in_xd0 = *(ulonglong *)(ar4 + 0x2194);
        }
        if (cVar10 != '\0' || in_fr1 <= 0.0) {
          if (cVar11 == '\0') {
            in_fr1 = *(float *)(ar4 + 0x22c);
          }
          else {
            in_xd0 = *(ulonglong *)(ar4 + 0x22c);
          }
          if (cVar10 == '\0') {
            in_fr1 = in_fr1 - 1.0;
          }
          else {
            in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) - (double)CONCAT44(0x3f800000,in_fr1)
                           ,0);
          }
          if (cVar11 == '\0') {
            *(float *)(ar4 + 0x22c) = in_fr1;
            uVar8 = CONCAT44(*(undefined4 *)(ar4 + 0x2194),*(undefined4 *)(ar4 + 0x22c));
          }
          else {
            *(ulonglong *)(ar4 + 0x22c) = in_xd0;
            in_xd0 = *(ulonglong *)(ar4 + 0x22c);
            uVar8 = *(ulonglong *)(ar4 + 0x2194);
          }
          if (cVar10 == '\0' && (float)(uVar8 >> 0x20) < (float)uVar8) {
            if (cVar11 == '\0') {
              uVar8 = (ulonglong)*(uint *)(ar4 + 0x21ac);
            }
            else {
              in_xd0 = *(ulonglong *)(ar4 + 0x21ac);
            }
            dVar7 = (double)CONCAT44(0x3f800000,(float)uVar8);
            if (cVar10 == '\0') {
              fVar6 = (float)uVar8 - 1.0;
            }
            else {
              fVar6 = SUB84(dVar7 - dVar7,0);
            }
            if (cVar11 == '\0') {
              *(float *)(ar4 + 0x21ac) = fVar6;
            }
            else {
              *(ulonglong *)(ar4 + 0x21ac) = in_xd0;
            }
          }
          else {
            if (cVar11 == '\0') {
              *(undefined4 *)(ar4 + 0x21ac) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x21ac) = uVar8 & 0xffffffff;
            }
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            FUN_8c022d04(ar4 + 0x14,ar5_00,ar6_00,ar7_00);
          }
        }
        else {
          if (cVar11 == '\0') {
            in_fr1 = *(float *)(ar4 + 0x22c);
          }
          else {
            in_xd0 = *(ulonglong *)(ar4 + 0x22c);
          }
          if (cVar10 == '\0') {
            in_fr1 = in_fr1 + 1.0;
          }
          else {
            in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1)
                           ,0);
          }
          if (cVar11 == '\0') {
            *(float *)(ar4 + 0x22c) = in_fr1;
            uVar8 = CONCAT44(*(undefined4 *)(ar4 + 0x2194),*(undefined4 *)(ar4 + 0x22c));
          }
          else {
            *(ulonglong *)(ar4 + 0x22c) = in_xd0;
            in_xd0 = *(ulonglong *)(ar4 + 0x22c);
            uVar8 = *(ulonglong *)(ar4 + 0x2194);
          }
          if (cVar10 == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
            if (cVar11 == '\0') {
              uVar8 = (ulonglong)*(uint *)(ar4 + 0x21ac);
            }
            else {
              in_xd0 = *(ulonglong *)(ar4 + 0x21ac);
            }
            dVar7 = (double)CONCAT44(0x3f800000,(float)uVar8);
            if (cVar10 == '\0') {
              fVar6 = (float)uVar8 + 1.0;
            }
            else {
              fVar6 = SUB84(dVar7 + dVar7,0);
            }
            if (cVar11 == '\0') {
              *(float *)(ar4 + 0x21ac) = fVar6;
            }
            else {
              *(ulonglong *)(ar4 + 0x21ac) = in_xd0;
            }
          }
          else {
            if (cVar11 == '\0') {
              *(undefined4 *)(ar4 + 0x21ac) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x21ac) = uVar8 & 0xffffffff;
            }
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            FUN_8c022d04(ar4 + 0x14,ar5_00,ar6_00,ar7_00);
          }
        }
        FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
        break;
      case 5:
        iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
        if (iVar2 == 1) {
          FUN_8c030eb8(ar4 + 0x1fc,ar5_00,ar6_00,ar7_00);
          *(undefined4 *)(ar4 + 300) = 0;
          uVar5 = 0;
        }
      }
    }
    Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7_00);
  }
  return uVar5;
}



/* FUN_8c0aa70c @ 8c0aa70c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0aa70c(int ar4,undefined4 ar5,int *ar6,undefined8 *ar7)

{
  int iVar1;
  undefined4 ar4_00;
  undefined4 *a5;
  int iVar2;
  undefined4 uVar3;
  float *a6;
  undefined8 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  double dVar8;
  float fVar11;
  ulonglong uVar9;
  double dVar10;
  undefined4 in_fr3;
  ulonglong in_xd0;
  char cVar12;
  char cVar13;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  float afStack_5c [3];
  float afStack_50 [3];
  float afStack_44 [2];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [16];
  undefined4 uStack_24;
  float fStack_20;
  undefined4 auStack_1c [2];
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar5 = 1;
  FUN_8c102748(&uStack_24,ar5,ar6,ar7);
  puVar4 = (undefined8 *)auStack_1c;
  a6 = &fStack_20;
  a5 = &uStack_24;
  (**(code **)(*ar6 + 0x120))(ar6,a5,a6,puVar4);
  Vec3_ctor_zero(auStack_34,a5,a6,puVar4);
  Vec3_ctor_zero(afStack_44,a5,a6,puVar4);
  iVar2 = ar4 + 0x14;
  Vec3_assign(auStack_34,iVar2,a6,puVar4);
  if (cVar13 == '\0') {
    dVar8 = (double)CONCAT44(0x42c80000,uStack_24);
  }
  else {
    in_xd0 = CONCAT44(fStack_20,uStack_24);
    dVar8 = 4.92856576361035e-312;
  }
  if (cVar12 == '\0') {
    afStack_44[0] = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    afStack_44[0] = SUB84(dVar8 - dVar8,0);
  }
  fVar7 = afStack_44[0];
  if (cVar13 != '\0') {
    afStack_44[0] = (float)in_xd0;
    uStack_38 = 0xe8;
    fVar7 = 100.0;
  }
  uStack_3c = 0x42c80000;
  iVar1 = *(int *)(ar4 + 0x21b4);
  if (iVar1 == 0) {
    if (*(int *)(ar4 + 0x2198) == 0) {
      FUN_8c03f460(afStack_50,&uStack_24,a6,puVar4);
      a6 = afStack_50;
      FUN_8c0a861c(ar4,ar5,a6,puVar4);
      free_if_nonnull_wrap_102790(afStack_50,0xffffffff,a6,puVar4);
      goto LAB_8c0aacb4;
    }
    if (*(int *)(ar4 + 0x2198) != 5) {
      FUN_8c03f460(afStack_5c,&uStack_24,a6,puVar4);
      a6 = afStack_5c;
      iVar2 = FUN_8c0a8c0c(ar4,ar5,a6,ar7);
      uVar3 = 0xffffffff;
      free_if_nonnull_wrap_102790(afStack_5c,0xffffffff,a6,ar7);
      puVar4 = ar7;
      if (iVar2 == 0) {
        *(int *)(ar4 + 0x21b4) = *(int *)(ar4 + 0x21b4) + 1;
        FUN_8c022d04(ar4 + 0x54,uVar3,a6,ar7);
        puVar4 = ar7;
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0x54) = uStack_24;
          *(float *)(ar4 + 0x58) = fStack_20;
        }
        else {
          *(undefined8 *)(ar4 + 0x54) = CONCAT44(fStack_20,uStack_24);
          *(ulonglong *)(ar4 + 0x58) = CONCAT44(auStack_1c[0],fStack_20);
        }
      }
      goto LAB_8c0aacb4;
    }
    *(undefined4 *)(ar4 + 0x21b4) = 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (cVar13 == '\0') {
        fVar7 = *(float *)(ar4 + 0x2194);
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + 0x2194);
      }
      if (cVar12 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0);
      }
      if (cVar13 == '\0') {
        *(float *)(ar4 + 0x2194) = fVar7;
        fVar7 = *(float *)(ar4 + 0x2194);
        fVar11 = 15.0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2194) = in_xd0;
        in_xd0 = *(ulonglong *)(ar4 + 0x2194);
        fVar7 = 15.0;
        fVar11 = 108.7;
      }
      if (cVar12 != '\0' || fVar7 <= fVar11) {
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0xc0981b4f,*(undefined4 *)(ar4 + 0x21a8));
        }
        else {
          in_xd0 = *(ulonglong *)(ar4 + 0x21a8);
          dVar8 = 1.8293200140039e-310;
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(ar4 + 0x21a8) = fVar7;
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x21ac),in_fr3);
          dVar10 = (double)CONCAT44(0x41700000,*(undefined4 *)(ar4 + 0x22c));
        }
        else {
          *(ulonglong *)(ar4 + 0x21a8) = in_xd0;
          dVar8 = *(double *)(ar4 + 0x21ac);
          dVar10 = 1.82412182335889e-310;
        }
        if (cVar12 == '\0') {
          dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) +
                                   SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20),
                                   SUB84(dVar8,0));
        }
        else {
          dVar8 = dVar8 + dVar10 / dVar10;
        }
        if (cVar13 == '\0') {
          *(int *)(ar4 + 0x21ac) = (int)((ulonglong)dVar8 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x21ac) = dVar8;
        }
      }
      else {
        if (cVar13 == '\0') {
          *(undefined4 *)ar7 = 0x42d96666;
          uVar9 = CONCAT44(0xc1c9999a,fVar7);
          *(undefined4 *)((int)ar7 + 4) = 0xc1c9999a;
        }
        else {
          *ar7 = 0xc1c9999a42d96666;
          uVar9 = 0x21a8c1c9999a;
          *(undefined8 *)((int)ar7 + 4) = 0x21a8c1c9999a;
        }
        if (cVar13 == '\0') {
          *(undefined4 *)(ar7 + 1) = 0;
        }
        else {
          ar7[1] = uVar9 & 0xffffffff;
        }
        FUN_8c023d7c(ar4 + 0x21a8,iVar2,a6,puVar4);
      }
      if (cVar13 == '\0') {
        uVar9 = CONCAT44(0x43480000,*(undefined4 *)(ar4 + 0x2194));
      }
      else {
        uVar9 = 0xbf80000043480000;
      }
      if (cVar12 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar9 & 0xffffffff;
        }
        FUN_8c022d04(ar4 + 0x14,iVar2,a6,puVar4);
        *(int *)(ar4 + 0x21b4) = *(int *)(ar4 + 0x21b4) + 1;
      }
      FUN_8c03f3ac(ar4 + 0xb0,iVar2,a6,puVar4);
    }
    else if ((iVar1 == 3) &&
            (iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar2,a6,puVar4), iVar2 == 1)) {
      *(undefined4 *)(ar4 + 0x2198) = 8;
      uVar5 = 0;
      *(undefined4 *)(ar4 + 0x134) = 0;
      *(undefined4 *)(ar4 + 0x21b4) = 0;
    }
    goto LAB_8c0aacb4;
  }
  FUN_8c03f460(&uStack_68,&uStack_24,a6,puVar4);
  puVar4 = &uStack_68;
  a6 = afStack_44;
  iVar2 = FUN_8c0a8f94(ar4,ar5,a6,puVar4);
  uVar3 = 0xffffffff;
  free_if_nonnull_wrap_102790(&uStack_68,0xffffffff,a6,puVar4);
  if (iVar2 == 0) {
    *(int *)(ar4 + 0x21b4) = *(int *)(ar4 + 0x21b4) + 1;
    uVar9 = (ulonglong)(uint)fVar7;
    if (cVar13 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar9;
    }
    FUN_8c0230f0(ar4 + 0x14,uVar3,a6,puVar4,auStack_78);
    Vec3_ctor_xyz(auStack_88,uVar3,a6,puVar4);
    uVar3 = ar5;
    Vec3_sub(auStack_88,ar5,a6,puVar4,auStack_98);
    ar4_00 = Vec3_length(auStack_98,uVar3,a6,puVar4);
    FUN_8c0230f0(ar4_00,uVar3,a6,puVar4,auStack_a8);
    FUN_8c022dac(auStack_78,auStack_a8,a6,puVar4);
    if (cVar13 == '\0') {
      *(int *)(ar4 + 0x22c) = (int)(uVar9 >> 0x20);
    }
    else {
      *(ulonglong *)(ar4 + 0x22c) = uVar9;
    }
    uVar6 = (uint)uVar9;
    Vec3_dtor(auStack_a8,0xffffffff,a6,puVar4);
    Vec3_dtor(auStack_98,0xffffffff,a6,puVar4);
    Vec3_dtor(auStack_88,0xffffffff,a6,puVar4);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_78,0xffffffff,a6,puVar4);
    Vec3_ctor_xyz(auStack_b8,uVar3,a6,puVar4);
    uVar3 = ar5;
    Vec3_sub(auStack_b8,ar5,a6,puVar4,auStack_c8);
    uVar3 = Vec3_length(auStack_c8,uVar3,a6,puVar4);
    Vec3_assign(ar4 + 0x14,uVar3,a6,puVar4);
    Vec3_dtor(auStack_c8,0xffffffff,a6,puVar4);
    Vec3_dtor(auStack_b8,0xffffffff,a6,puVar4);
    uVar9 = (ulonglong)uVar6;
    if (cVar13 == '\0') {
      *(undefined4 *)(ar4 + 0x21a8) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x21a8) = uVar9;
    }
    Vec3_assign(ar4 + 0x54,ar5,a6,puVar4);
    uVar9 = uVar9 & 0xffffffff;
    if (cVar13 == '\0') {
      *(undefined4 *)(ar4 + 0x2194) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2194) = uVar9;
    }
    Vec3_ctor_xyz(auStack_d8,ar5,a6,puVar4);
    iVar2 = ar4 + 0x54;
    Vec3_sub(auStack_d8,iVar2,a6,puVar4,auStack_e8);
    Vec3_length_sq(auStack_e8,iVar2,a6,puVar4);
    if (cVar13 == '\0') {
      dVar8 = (double)CONCAT44(0x43480000,(int)(uVar9 >> 0x20));
      uVar9 = in_xd0;
    }
    else {
      dVar8 = -0.007812501958142093;
    }
    if (cVar12 == '\0') {
      fVar7 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 / dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(ar4 + 0x28) = fVar7;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar9;
    }
    Vec3_dtor(auStack_e8,0xffffffff,a6,puVar4);
    Vec3_dtor(auStack_d8,0xffffffff,a6,puVar4);
    puVar4 = (undefined8 *)0x0;
    a6 = (float *)0xffffffff;
    uVar3 = 0;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,a6,puVar4);
  }
LAB_8c0aacb4:
  Vec3_dtor(afStack_44,0xffffffff,a6,puVar4);
  Vec3_dtor(auStack_34,0xffffffff,a6,puVar4);
  free_if_nonnull_wrap_102790(&uStack_24,0xffffffff,a6,puVar4);
  return uVar5;
}



/* FUN_8c0aad1c @ 8c0aad1c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0aaeca) */
/* WARNING: Removing unreachable block (ram,0x8c0aad78) */
/* WARNING: Removing unreachable block (ram,0x8c0aad7c) */
/* WARNING: Removing unreachable block (ram,0x8c0aaece) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0aad1c(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int ar6_00;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar3;
  float fVar4;
  double in_dr0;
  undefined4 uVar7;
  ulonglong uVar5;
  double dVar6;
  double in_dr14;
  double dVar8;
  undefined8 in_xd0;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar3 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar3 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar3 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar3 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar3 + -0x10) = in_PR;
  puVar2 = ar5;
  ar6_00 = ar6;
  FUN_8c022d04(ar4 + 0x200,ar5,ar6,ar7);
  (*(code *)(&Vec3_ctor_zero))
            ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),puVar2,ar6_00,ar7);
  (*(code *)(&Vec3_ctor_zero))
            ((undefined1 *)((int)puVar3 + 0xa0 + -0xd0),puVar2,ar6_00,ar7);
  (*(code *)(&Vec3_ctor_zero))
            ((undefined1 *)((int)puVar3 + 0x90 + -0xd0),puVar2,ar6_00,ar7);
  if ((*(int *)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(0x1fc + ar4) << 0x1e) < 0)) {
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar3 + 0xa0 + -0xd0),ar5,ar6_00,ar7);
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar3 + 0x90 + -0xd0),*(int *)(ar6 + 0x68) + 4,ar6_00,
               ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(*(int *)(ar6 + 0x68) + 0x158));
    }
    *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + 0x80 + -0xd0);
    (*(code *)(&Vec3_sub))
              ((undefined1 *)((int)puVar3 + 0xa4 + -0xd4),
               (undefined1 *)((int)puVar3 + 0x94 + -0xd4),ar6_00,ar7,
               *(undefined4 *)((int)puVar3 + -0xd4));
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)((int)puVar3 + 0x80 + -0xd0),ar6_00,ar7);
    uVar1 = 0xffffffff;
    (*(code *)(&Vec3_dtor))
              ((undefined1 *)((int)puVar3 + 0x80 + -0xd0),0xffffffff,ar6_00,ar7);
    (*(code *)(&Vec3_length_sq))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7);
    uVar7 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -0xb8) = uVar7;
      in_dr0 = (double)CONCAT44(uVar7,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)((int)puVar3 + -0xb8) = in_dr0;
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(in_dr0,0) + SUB84(in_dr14,0);
    }
    else {
      fVar4 = SUB84(in_dr0 + in_dr14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + -0xb8),fVar4);
    }
    else {
      dVar6 = *(double *)((int)puVar3 + -0xb8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 - dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar3 + -0xb4) = fVar4;
      fVar4 = *(float *)((int)puVar3 + -0xb4);
    }
    else {
      *(undefined8 *)((int)puVar3 + -0xb4) = in_xd0;
      in_xd0 = *(undefined8 *)((int)puVar3 + -0xb4);
    }
    uVar5 = (ulonglong)(uint)fVar4;
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(DAT_8c0ab0a4,fVar4);
        *(undefined4 *)((int)puVar3 + -0xb4) = DAT_8c0ab0a4;
      }
      else {
        uVar5 = CONCAT44((&Vec3_length),DAT_8c0ab0a4);
        *(ulonglong *)((int)puVar3 + -0xb4) = uVar5;
      }
    }
    (*(code *)(&Vec3_length))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7);
    Vec3_length_sq(ar4 + 4,uVar1,ar6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0xbc) = (int)(uVar5 >> 0x20);
      uVar5 = (ulonglong)*(uint *)((int)puVar3 + -0xbc);
    }
    else {
      *(ulonglong *)((int)puVar3 + -0xbc) = uVar5;
      in_xd0 = *(undefined8 *)((int)puVar3 + -0xbc);
    }
    fVar4 = (float)uVar5;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar4) {
      *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0x60);
      (*(code *)(&Vec3_scale))
                (ar4 + 0x14,(&DATA_8c13b29c),ar6_00,ar7,*(undefined4 *)((int)puVar3 + -0xd4));
      *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0x70);
      puVar2 = (undefined1 *)((int)puVar3 + -0x60);
      (*(code *)(&Vec3_add))
                ((undefined1 *)((int)puVar3 + 0xb4 + -0xd4),puVar2,ar6_00,ar7,
                 *(undefined4 *)((int)puVar3 + -0xd4));
      uVar1 = (*(code *)(&Vec3_length))
                        ((undefined1 *)((int)puVar3 + -0x70),puVar2,ar6_00,ar7);
      *(undefined4 *)((int)puVar3 + -0xc0) = uVar1;
      (*(code *)(&Vec3_assign))
                ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),
                 *(undefined4 *)((int)puVar3 + -0xc0),ar6_00,ar7);
      Vec3_dtor((undefined1 *)((int)puVar3 + -0x70),0xffffffff,ar6_00,ar7);
      Vec3_dtor((undefined1 *)((int)puVar3 + -0x60),0xffffffff,ar6_00,ar7);
    }
    (*(code *)(&FUN_8c023bf4))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)((int)puVar3 + -0xb4),ar6_00,ar7);
    in_dr0 = (double)(ulonglong)(uint)fVar4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + 0xb4 + -0xd0) = 0;
    }
    else {
      *(double *)((int)puVar3 + 0xb4 + -0xd0) = in_dr0;
    }
    puVar2 = (undefined1 *)((int)puVar3 + 0xb0 + -0xd0);
    Vec3_assign(ar4 + 0x200,puVar2,ar6_00,ar7);
  }
  if ((*(int *)(ar6 + 100) != 0) && ((int)((uint)*(byte *)(0x1fc + ar4) << 0x1d) < 0)) {
    (**(code **)(0x170 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
              (*(int *)(ar6 + 0x50),puVar2,ar6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0xc4) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)puVar3 + -0xc4));
      dVar6 = (double)CONCAT44(DAT_8c0ab0c4,SUB84(in_dr0,0));
    }
    else {
      *(double *)((int)puVar3 + -0xc4) = in_dr0;
      dVar6 = (double)CONCAT44((&FUN_8c02f670),DAT_8c0ab0c4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) + (float)((ulonglong)dVar6 >> 0x20));
    }
    else {
      dVar8 = in_dr14 + dVar6;
    }
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar3 + 0xa0 + -0xd0),ar5,ar6_00,ar7);
    *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0x80);
    (*(code *)(&FUN_8c02f670))
              (*(undefined4 *)(ar6 + 0x50),ar5,ar6_00,ar7,*(undefined4 *)((int)puVar3 + -0xd4));
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar3 + 0x90 + -0xd0),
               (undefined1 *)((int)puVar3 + -0x80),ar6_00,ar7);
    Vec3_dtor((undefined1 *)((int)puVar3 + -0x80),0xffffffff,ar6_00,ar7);
    *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0x90);
    (*(code *)(&Vec3_sub))
              ((undefined1 *)((int)puVar3 + 0xa4 + -0xd4),
               (undefined1 *)((int)puVar3 + 0x94 + -0xd4),ar6_00,ar7,
               *(undefined4 *)((int)puVar3 + -0xd4));
    (*(code *)(&Vec3_assign))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)((int)puVar3 + -0x90),ar6_00,ar7);
    uVar1 = 0xffffffff;
    Vec3_dtor((undefined1 *)((int)puVar3 + -0x90),0xffffffff,ar6_00,ar7);
    (*(code *)(&Vec3_length_sq))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7);
    uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -200) = uVar7;
      dVar6 = (double)CONCAT44(uVar7,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)((int)puVar3 + -200) = dVar6;
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) + SUB84(dVar8,0);
    }
    else {
      fVar4 = SUB84(dVar6 + dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + -200),fVar4);
    }
    else {
      dVar6 = *(double *)((int)puVar3 + -200);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 - dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0ab0cc,fVar4);
    }
    else {
      dVar6 = (double)CONCAT44((&DATA_8c13b2a0),DAT_8c0ab0cc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 * dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar3 + -0xb4) = fVar4;
      fVar4 = *(float *)((int)puVar3 + -0xb4);
    }
    else {
      *(undefined8 *)((int)puVar3 + -0xb4) = in_xd0;
    }
    uVar5 = (ulonglong)(uint)fVar4;
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(DAT_8c0ab0a4,fVar4);
        *(undefined4 *)((int)puVar3 + -0xb4) = DAT_8c0ab0a4;
      }
      else {
        uVar5 = CONCAT44((&Vec3_length),DAT_8c0ab0a4);
        *(ulonglong *)((int)puVar3 + -0xb4) = uVar5;
      }
    }
    (*(code *)(&Vec3_length))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),uVar1,ar6_00,ar7);
    Vec3_length_sq(ar4 + 4,uVar1,ar6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0xcc) = (int)(uVar5 >> 0x20);
      uVar5 = (ulonglong)*(uint *)((int)puVar3 + -0xcc);
    }
    else {
      *(ulonglong *)((int)puVar3 + -0xcc) = uVar5;
    }
    if (in_FPSCR_PR == '\0' && 0.0 < (float)uVar5) {
      *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0xa0);
      (*(code *)(&Vec3_scale))
                (ar4 + 0x14,(&DATA_8c13b2a0),ar6_00,ar7,*(undefined4 *)((int)puVar3 + -0xd4));
      *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0xb0);
      puVar2 = (undefined1 *)((int)puVar3 + -0xa0);
      (*(code *)(&Vec3_add))
                ((undefined1 *)((int)puVar3 + 0xb4 + -0xd4),puVar2,ar6_00,ar7,
                 *(undefined4 *)((int)puVar3 + -0xd4));
      uVar1 = (*(code *)(&Vec3_length))
                        ((undefined1 *)((int)puVar3 + -0xb0),puVar2,ar6_00,ar7);
      *(undefined4 *)((int)puVar3 + -0xd0) = uVar1;
      (*(code *)(&Vec3_assign))
                ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),
                 *(undefined4 *)((int)puVar3 + -0xd0),ar6_00,ar7);
      Vec3_dtor((undefined1 *)((int)puVar3 + -0xb0),0xffffffff,ar6_00,ar7);
      Vec3_dtor((undefined1 *)((int)puVar3 + -0xa0),0xffffffff,ar6_00,ar7);
    }
    (*(code *)(&FUN_8c023bf4))
              ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),
               (undefined1 *)((int)puVar3 + -0xb4),ar6_00,ar7);
    (*(code *)(&FUN_8c023aa0))
              (ar4 + 0x200,(undefined1 *)((int)puVar3 + 0xb0 + -0xd0),ar6_00,ar7);
  }
  (*(code *)(&Vec3_dtor))
            ((undefined1 *)((int)puVar3 + 0x90 + -0xd0),0xffffffff,ar6_00,ar7);
  (*(code *)(&Vec3_dtor))
            ((undefined1 *)((int)puVar3 + 0xa0 + -0xd0),0xffffffff,ar6_00,ar7);
  uVar1 = (*(code *)(&Vec3_dtor))
                    ((undefined1 *)((int)puVar3 + 0xb0 + -0xd0),0xffffffff,ar6_00,ar7);
  return uVar1;
}



/* FUN_8c0ab0d8 @ 8c0ab0d8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ab11c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ab0d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  double in_dr0;
  undefined8 uVar8;
  ulonglong uVar9;
  double dVar10;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar12 = '\0';
  cVar11 = '\0';
  iVar2 = *(int *)(ar4 + 0x21bc);
  if (iVar2 == 0) {
    ar7 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
    uVar6 = SUB84(in_dr0,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar5,ar7);
    if (cVar12 == '\0') {
      *(undefined4 *)(ar4 + 0x22c) = 0;
      uVar8 = CONCAT44(*(undefined4 *)(ar4 + 0x21ac),uVar6);
      *(undefined4 *)(ar4 + 0x21a0) = *(undefined4 *)(ar4 + 0x21ac);
    }
    else {
      *(ulonglong *)(ar4 + 0x22c) = (ulonglong)uVar6;
      uVar8 = *(undefined8 *)(ar4 + 0x21ac);
      *(undefined8 *)(ar4 + 0x21a0) = uVar8;
    }
    uVar4 = ar5;
    Vec3_sub(ar6,ar5,uVar5,ar7,auStack_28);
    uVar3 = Vec3_length(auStack_28,uVar4,uVar5,ar7);
    FUN_8c023138(uVar3,uVar4,uVar5,ar7,auStack_38);
    FUN_8c023138(ar4 + 0x14,uVar4,uVar5,ar7,auStack_48);
    FUN_8c022dac(auStack_38,auStack_48,uVar5,ar7);
    if (cVar12 == '\0') {
      *(int *)(ar4 + 0x2194) = (int)((ulonglong)uVar8 >> 0x20);
    }
    else {
      *(undefined8 *)(ar4 + 0x2194) = uVar8;
    }
    Vec3_dtor(auStack_48,0xffffffff,uVar5,ar7);
    Vec3_dtor(auStack_38,0xffffffff,uVar5,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_28,0xffffffff,uVar5,ar7);
    FUN_8c023138(ar4 + 0x14,uVar4,uVar5,ar7,auStack_58);
    uVar4 = ar5;
    Vec3_sub(ar6,ar5,uVar5,ar7,auStack_68);
    uVar3 = Vec3_length(auStack_68,uVar4,uVar5,ar7);
    FUN_8c023138(uVar3,uVar4,uVar5,ar7,auStack_78);
    Vec3_set_xyz(auStack_84,uVar4,uVar5,ar7);
    FUN_8c023484(auStack_78,auStack_84,uVar5,ar7,auStack_94);
    FUN_8c022dac(auStack_58,auStack_94,uVar5,ar7);
    if (cVar12 == '\0') {
      in_dr0 = (double)CONCAT44(0x42b40000,(int)((ulonglong)uVar8 >> 0x20));
    }
    else {
      in_dr0 = -7.961142730794258e-251;
      in_xd0 = uVar8;
    }
    bVar1 = cVar11 != '\0';
    fVar7 = SUB84(in_dr0,0);
    uVar9 = (ulonglong)in_dr0 >> 0x20;
    Vec3_dtor(auStack_94,0xffffffff,uVar5,ar7);
    object_dtor_delete(auStack_84,0xffffffff,uVar5,ar7);
    Vec3_dtor(auStack_78,0xffffffff,uVar5,ar7);
    Vec3_dtor(auStack_68,0xffffffff,uVar5,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_58,0xffffffff,uVar5,ar7);
    if (bVar1 || fVar7 <= (float)uVar9) {
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x2194));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x2194);
        dVar10 = 3.75058611530083e-312;
      }
      if (cVar11 == '\0') {
        in_dr0 = (double)(ulonglong)(uint)(SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20));
      }
      else {
        in_dr0 = dVar10 * dVar10;
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x2194) = SUB84(in_dr0,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x2194) = in_xd0;
      }
    }
    *(int *)(ar4 + 0x21bc) = *(int *)(ar4 + 0x21bc) + 1;
  }
  else {
    uVar4 = ar5;
    uVar5 = ar6;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        FUN_8c022fc0(ar5,ar6,ar6,ar7);
        if (cVar12 == '\0') {
          in_dr0 = (double)((ulonglong)in_dr0 >> 0x20);
        }
        if (cVar11 != '\0' || SUB84(in_dr0,0) <= 1.0) {
          if (cVar12 == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
          }
          *(int *)(ar4 + 0x21bc) = *(int *)(ar4 + 0x21bc) + 1;
        }
        FUN_8c03f3ac(ar4 + 0xb0,ar6,uVar5,ar7);
        return 1;
      }
      if (iVar2 != 3) {
        return 1;
      }
      iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (iVar2 != 1) {
        return 1;
      }
      *(undefined4 *)(ar4 + 0x21bc) = 0;
      return 0;
    }
  }
  fVar7 = SUB84(in_dr0,0);
  if (cVar12 == '\0') {
    fVar7 = *(float *)(ar4 + 0x2194);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2194);
  }
  if (cVar11 == '\0' && 0.0 < fVar7) {
    if (cVar12 == '\0') {
      fVar7 = *(float *)(ar4 + 0x22c);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x22c);
    }
    if (cVar11 == '\0') {
      fVar7 = fVar7 + 1.0;
    }
    else {
      fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0);
    }
    if (cVar12 == '\0') {
      *(float *)(ar4 + 0x22c) = fVar7;
      uVar9 = CONCAT44(*(undefined4 *)(ar4 + 0x2194),*(undefined4 *)(ar4 + 0x22c));
    }
    else {
      *(undefined8 *)(ar4 + 0x22c) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x22c);
      uVar9 = *(ulonglong *)(ar4 + 0x2194);
    }
    if (cVar11 == '\0' && (float)uVar9 < (float)(uVar9 >> 0x20)) {
      if (cVar12 == '\0') {
        uVar9 = (ulonglong)*(uint *)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x21ac);
      }
      dVar10 = (double)CONCAT44(0x3f800000,(float)uVar9);
      if (cVar11 == '\0') {
        fVar7 = (float)uVar9 + 1.0;
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x21ac) = in_xd0;
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2194),*(undefined4 *)(ar4 + 0x21a0));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x21a0);
        dVar10 = *(double *)(ar4 + 0x2194);
      }
      if (cVar11 == '\0') {
        fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x21ac) = in_xd0;
      }
      *(int *)(ar4 + 0x21bc) = *(int *)(ar4 + 0x21bc) + 1;
      Vec3_sub(ar6,ar5,uVar5,ar7,auStack_a4);
      uVar4 = Vec3_length(auStack_a4,ar5,uVar5,ar7);
      Vec3_assign(ar4 + 0x14,uVar4,uVar5,ar7);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_a4,0xffffffff,uVar5,ar7);
      if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0x3f333333;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = 0x53f41fe43f333333;
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      fVar7 = *(float *)(ar4 + 0x22c);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x22c);
    }
    if (cVar11 == '\0') {
      fVar7 = fVar7 - 1.0;
    }
    else {
      fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) - (double)CONCAT44(0x3f800000,fVar7),0);
    }
    if (cVar12 == '\0') {
      *(float *)(ar4 + 0x22c) = fVar7;
      uVar9 = CONCAT44(*(undefined4 *)(ar4 + 0x2194),*(undefined4 *)(ar4 + 0x22c));
    }
    else {
      *(undefined8 *)(ar4 + 0x22c) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x22c);
      uVar9 = *(ulonglong *)(ar4 + 0x2194);
    }
    if (cVar11 == '\0' && (float)(uVar9 >> 0x20) < (float)uVar9) {
      if (cVar12 == '\0') {
        uVar9 = (ulonglong)*(uint *)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x21ac);
      }
      dVar10 = (double)CONCAT44(0x3f800000,(float)uVar9);
      if (cVar11 == '\0') {
        fVar7 = (float)uVar9 - 1.0;
      }
      else {
        fVar7 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x21ac) = in_xd0;
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2194),*(undefined4 *)(ar4 + 0x21a0));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x21a0);
        dVar10 = *(double *)(ar4 + 0x2194);
      }
      if (cVar11 == '\0') {
        fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x21ac) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x21ac) = in_xd0;
      }
      *(int *)(ar4 + 0x21bc) = *(int *)(ar4 + 0x21bc) + 1;
      Vec3_sub(ar6,ar5,uVar5,ar7,auStack_b4);
      uVar4 = Vec3_length(auStack_b4,ar5,uVar5,ar7);
      Vec3_assign(ar4 + 0x14,uVar4,uVar5,ar7);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_b4,0xffffffff,uVar5,ar7);
      if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0x3f333333;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = 0x53f11fe13f333333;
      }
    }
  }
  FUN_8c03f3ac(ar4 + 0xb0,uVar4,uVar5,ar7);
  return 1;
}



/* FUN_8c0ab5c0 @ 8c0ab5c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ab5c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 ar7_00;
  undefined1 auStack_1c [28];
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c126238),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c285840;
  global_list_push(uVar1,(&Vec3_dtor),0x8c285840,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126248),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c28584c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c28584c,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126258),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c285858;
  global_list_push(uVar1,(&Vec3_dtor),0x8c285858,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c126268),puVar3,uVar2,ar7);
  global_list_push(uVar2,(&Vec3_dtor),0x8c285864,ar7);
  uVar2 = 4;
  (*(code *)(&FUN_8c010120))
            (0x8c28587c,(&FUN_8c015b94),(&free_if_nonnull_wrap_0247b0),4,9);
  global_list_push(0,(&FUN_8c0ab73c),0x8c285870,uVar2);
  ar7_00 = 4;
  (*(code *)(&FUN_8c010120))
            (0x8c2858ac,(&FUN_8c015bc8),(&free_if_nonnull_wrap_03a3dc),4,9);
  puVar3 = (&FUN_8c0ab718);
  uVar2 = 0x8c2858a0;
  global_list_push(0,(&FUN_8c0ab718),0x8c2858a0,ar7_00);
  uVar1 = FUN_8c030e34(auStack_1c,puVar3,uVar2,ar7_00);
  uVar2 = FUN_8c05d608(0x8c2858d0,uVar1,uVar2,ar7_00);
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



/* FUN_8c0ab760 @ 8c0ab760 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0ab760(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c02f064(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12b0c4);
  *(undefined4 *)(0x9c + (int)ar4) = 0;
  *(undefined4 *)(0xa0 + (int)ar4) = 6;
  *(undefined4 *)(0xa4 + (int)ar4) = 6;
  *(undefined4 *)(0xa8 + (int)ar4) = 6;
  return ar4;
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



/* Class_12b0c4_m1_0ab7f4 @ 8c0ab7f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b0c4_m1_0ab7f4(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *ar6_00;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [20];
  
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  puVar4 = auStack_50;
  puVar2 = &DAT_8c13b394;
  iVar5 = 0x10;
  do {
    puVar3 = puVar2 + 1;
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 2;
    puVar4[1] = *puVar3;
    puVar4 = puVar4 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  DAT_8c13b388 = *(undefined4 *)(ar4 + 0xa0);
  DAT_8c13b38c = *(undefined4 *)(ar4 + 0xa4);
  DAT_8c13b390 = *(undefined4 *)(ar4 + 0xa8);
  piVar7 = ar5;
  ar6_00 = ar6;
  FUN_8c0abfb0(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c0abc30(ar6[3],piVar7,ar6_00,ar7);
  if (((char)uVar1 == '\x01') && (iVar5 = get_field_24_026024(ar5,piVar7,ar6_00,ar7), iVar5 == 1)) {
    iVar6 = ar6[3];
    iVar5 = get_field_48_0abc28(iVar6,piVar7,ar6_00,ar7);
    if (iVar5 != 0) {
      uVar1 = rand(iVar6,piVar7,ar6_00,ar7);
      piVar7 = (int *)0x12c;
      iVar5 = libgcc_divide_helper_01031c(uVar1,300,ar6_00,ar7);
      if (iVar5 < 1) {
        uVar1 = get_field_48_0abc28(ar6[3],piVar7,ar6_00,ar7);
        *(undefined4 *)(ar4 + 0x6c) = uVar1;
        if (*(int *)(ar4 + 0x6c) != 0) {
          *(undefined4 *)(ar4 + 4) = 6;
          *(undefined4 *)(ar4 + 0x40) = 3;
          *(undefined4 *)(ar4 + 8) = 0x55;
          *(undefined4 *)(ar4 + 0xc) = 0;
          uVar1 = 699;
          FUN_8c02f298(ar4,699,ar6_00,ar7);
          (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x74))
                    (*(int *)(ar4 + 0x6c),uVar1,ar6_00,ar7);
          piVar7 = (int *)0x0;
          FUN_8c0996e4(ar6[3],0,ar6_00,ar7);
        }
      }
    }
  }
  iVar5 = get_field_24_026024(ar5,piVar7,ar6_00,ar7);
  if (iVar5 == 0) {
    iVar5 = ar6[6];
    uVar1 = get_field_a0_035724(iVar5,piVar7,ar6_00,ar7);
    if ((byte)uVar1 < 2) {
      *(undefined1 *)(ar4 + 0x98) = 1;
    }
    else {
      uVar1 = rand(iVar5,piVar7,ar6_00,ar7);
      piVar7 = (int *)0x3e8;
      iVar5 = libgcc_divide_helper_01031c(uVar1,1000,ar6_00,ar7);
      if ((iVar5 < 1) && (*(int *)(ar4 + 4) != 0xb)) {
        *(undefined4 *)(ar4 + 4) = 0xb;
        *(undefined4 *)(ar4 + 8) = 0x5a;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x38) = 2;
        FUN_8c0ac1f0(ar4,ar5,ar6_00,ar7);
        piVar7 = (int *)0x4a6;
        FUN_8c02f298(ar4,0x4a6,ar6_00,ar7);
      }
    }
  }
  iVar5 = (**(code **)(*(int *)(*ar6 + 8) + 0xb8))(*ar6,piVar7,ar6_00,ar7);
  if (iVar5 == 1) {
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                (*(int *)(ar4 + 0x6c),piVar7,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
    iVar5 = get_field_6c_02f46c(*ar6,piVar7,ar6_00,ar7);
    if ((iVar5 == 0) && (iVar5 = get_field_70_05f490(*ar6,piVar7,ar6_00,ar7), iVar5 == 0)) {
      uVar1 = (**(code **)(*ar5 + 0x148))(ar5,piVar7,ar6_00,ar7);
      piVar7 = (int *)0x0;
      FUN_8c0abc1c(uVar1,0,ar6_00,ar7);
      FUN_8c0f4d84(*ar6,piVar7,ar6_00,ar7);
    }
  }
  get_field_124_027930(ar6[2],piVar7,ar6_00,ar7);
  get_field_40_05eea0(ar4,piVar7,ar6_00,ar7);
  piVar7 = ar6;
  FUN_8c02f20c(ar4,ar6,ar6_00,ar7);
  get_field_124_027930(ar6[2],piVar7,ar6_00,ar7);
  get_field_40_05eea0(ar4,piVar7,ar6_00,ar7);
  uVar1 = get_field_4_05eed8(ar4,piVar7,ar6_00,ar7);
  piVar7 = ar6;
  FUN_8c0abe84(ar4,ar5,ar6,uVar1);
  get_field_124_027930(ar6[2],ar5,piVar7,uVar1);
  get_field_40_05eea0(ar4,ar5,piVar7,uVar1);
  if ((*(char *)(ar4 + 0x98) == '\x01') && ((*(int *)(ar4 + 0x40) != 4 || (*(int *)(ar4 + 4) != 1)))
     ) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 1;
    *(undefined4 *)(ar4 + 8) = 99;
    *(undefined4 *)(ar4 + 0x40) = 4;
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                (*(int *)(ar4 + 0x6c),ar5,piVar7,uVar1);
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
  }
  FUN_8c0ac19c(ar4,ar5,piVar7,uVar1);
  FUN_8c05ee90(ar6[2],ar5,piVar7,uVar1);
  iVar5 = get_field_124_027930(ar6[2],ar5,piVar7,uVar1);
  iVar6 = get_field_40_05eea0(ar4,ar5,piVar7,uVar1);
  if (iVar5 != iVar6) {
    ar5_00 = get_field_40_05eea0(ar4,ar5,piVar7,uVar1);
    piVar7 = (int *)0x1;
    FUN_8c031b08(ar6[2],ar5_00,1,uVar1);
  }
  uVar1 = Vec3_dtor(auStack_30,0xffffffff,piVar7,uVar1);
  return uVar1;
}



/* FUN_8c0abc1c @ 8c0abc1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c0abc1c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  puVar1 = 0x8c438470;
  *0x8c438470 = (undefined1)ar5;
  return puVar1;
}



/* get_field_48_0abc28 @ 8c0abc28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_48_0abc28(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x48);
}



/* FUN_8c0abc30 @ 8c0abc30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0abc30(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x45);
}



/* Class_12b0c4_m2_0abc38 @ 8c0abc38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b0c4_m2_0abc38(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_4c [32];
  undefined1 auStack_2c [20];
  
  piVar8 = ar5;
  piVar7 = ar6;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  puVar6 = auStack_4c;
  iVar3 = 0x10;
  puVar5 = (&DATA_8c13b3b4);
  do {
    puVar4 = puVar5 + 1;
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar6[1] = *puVar4;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((&DATA_8c13b2ec) + 0x9c) = *(undefined4 *)(0xa0 + ar4);
  *(undefined4 *)((&DATA_8c13b2ec) + 0xa0) = *(undefined4 *)(0xa4 + ar4);
  *(undefined4 *)((&DATA_8c13b2ec) + 0xa4) = *(undefined4 *)(0xa8 + ar4);
  get_field_18_02d1a0(ar6[1] + 0xa8,piVar8,piVar7,ar7);
  get_field_24_026024(ar5,piVar8,piVar7,ar7);
  (**(code **)(0x1a8 + *ar5))(ar5,piVar8,piVar7,ar7);
  iVar3 = get_field_18_02d1a0(ar6[1] + 0xa8,piVar8,piVar7,ar7);
  if (((0 < iVar3) &&
      (iVar3 = get_field_24_026024(ar5,piVar8,piVar7,ar7), iVar3 == 1)) &&
     (iVar3 = (**(code **)(0x1a8 + *ar5))(ar5,piVar8,piVar7,ar7), iVar3 == 0)) {
    (**(code **)(0xbc + *ar5))(ar5,piVar8,piVar7,ar7);
    get_field_18_02d1a0(ar6[1] + 0xa8,piVar8,piVar7,ar7);
  }
  piVar8 = ar5;
  piVar7 = ar6;
  FUN_8c0abfb0(ar4,ar5,ar6,ar7);
  iVar3 = (**(code **)(0xb8 + *(int *)(*ar6 + 8)))(*ar6,piVar8,piVar7,ar7);
  if (iVar3 == 1) {
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                (*(int *)(ar4 + 0x6c),piVar8,piVar7,ar7);
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
    iVar3 = get_field_6c_02f46c(*ar6,piVar8,piVar7,ar7);
    if ((iVar3 == 0) &&
       (iVar3 = get_field_70_05f490(*ar6,piVar8,piVar7,ar7), iVar3 == 0)) {
      FUN_8c0f4d84(*ar6,piVar8,piVar7,ar7);
    }
  }
  piVar8 = ar6;
  FUN_8c02f20c(ar4,ar6,piVar7,ar7);
  uVar1 = get_field_4_05eed8(ar4,piVar8,piVar7,ar7);
  piVar8 = ar6;
  FUN_8c0abe84(ar4,ar5,ar6,uVar1);
  FUN_8c0ac19c(ar4,ar5,piVar8,uVar1);
  FUN_8c05ee90(ar6[2],ar5,piVar8,uVar1);
  iVar3 = get_field_124_027930(ar6[2],ar5,piVar8,uVar1);
  iVar2 = get_field_40_05eea0(ar4,ar5,piVar8,uVar1);
  if (iVar3 != iVar2) {
    ar5_00 = get_field_40_05eea0(ar4,ar5,piVar8,uVar1);
    piVar8 = (int *)0x1;
    FUN_8c031b08(ar6[2],ar5_00,1,uVar1);
  }
  uVar1 = Vec3_dtor(auStack_2c,0xffffffff,piVar8,uVar1);
  return uVar1;
}



/* ret_const_0_0abe7c @ 8c0abe7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0abe7c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
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



/* FUN_8c0ac068 @ 8c0ac068 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ac068(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar4_00;
  int *a5;
  undefined4 ar5_00;
  
  a5 = ar5;
  if ((*(int *)(ar4 + 0x38) == 2) && (*(int *)(ar4 + 0x6c) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
    iVar1 = FUN_8c0ac1f0(ar4,ar5,ar6,ar7);
  }
  else if (iVar1 == 4) {
    ar4_00 = (**(code **)(0x148 + *ar5))(ar5,a5,ar6,ar7);
    ar5_00 = 0;
    FUN_8c0abc1c(ar4_00,0,ar6,ar7);
    iVar1 = FUN_8c02f414(ar4,ar5_00,ar6,ar7);
    if ((iVar1 == 1) && (iVar1 = 0, *(int *)(ar4 + 0x6c) != 0)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5_00,ar6,ar7);
      iVar1 = 0x6c;
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
  }
  return iVar1;
}



/* FUN_8c0ac124 @ 8c0ac124 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ac124(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 3) {
    ar5_00 = 0;
    FUN_8c099850(*(undefined4 *)(ar6 + 0xc),0,ar6,ar7);
    iVar1 = FUN_8c02f414(ar4,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      if (*(int *)(ar4 + 0x6c) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                  (*(int *)(ar4 + 0x6c),ar5_00,ar6,ar7);
        *(undefined4 *)(ar4 + 0x6c) = 0;
      }
      iVar1 = 0x88;
      *(undefined4 *)(0x88 + ar4) = 0;
    }
  }
  return iVar1;
}



/* FUN_8c0ac19c @ 8c0ac19c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0ac19c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  if (*(int *)(ar4 + 4) == 2) {
    get_field_8_066620(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0ac1e8;
  }
  else {
    get_field_8_066620(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0ac1ec;
  }
  return puVar1;
}



/* FUN_8c0ac1f0 @ 8c0ac1f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ac1f0(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *ar5_00;
  undefined1 *ar5_01;
  undefined4 uVar4;
  undefined4 *a6;
  undefined1 *ar6_00;
  undefined4 *a7;
  undefined4 *puVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  undefined4 in_fr3;
  undefined4 uVar9;
  double dVar10;
  char cVar11;
  char cVar12;
  undefined4 in_stack_ffffff20;
  undefined8 uStack_c0;
  undefined4 uStack_b0;
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 auStack_98 [4];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&uStack_20,ar5,ar6,ar7);
  Vec3_ctor_xyz(auStack_30,ar5_00,ar6,ar7);
  Vec3_ctor_xyz(auStack_40,ar5_00,ar6,ar7);
  a7 = &uStack_a4;
  a6 = &uStack_a0;
  puVar5 = &uStack_9c;
  (**(code **)(*ar5 + 0x120))(ar5,puVar5,a6,a7);
  iVar2 = ar4;
  iVar1 = get_field_4_05eed8(ar4,puVar5,a6,a7);
  if (iVar1 != 1) {
    if (iVar1 == 8) {
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(uStack_9c,in_fr3);
        dVar7 = (double)CONCAT44(0x3dcccccd,uStack_9c);
      }
      else {
        dVar10 = (double)CONCAT44(auStack_98[0],uStack_9c);
        dVar7 = 1.3411048210842936e-08;
      }
      if (cVar11 == '\0') {
        dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) -
                                  SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar10,0)
                                 );
      }
      else {
        dVar10 = dVar10 - dVar7 * dVar7;
      }
      uStack_9c = SUB84(dVar10,0);
      uVar3 = (undefined4)((ulonglong)dVar10 >> 0x20);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(uStack_a0,uStack_9c);
        dVar7 = (double)CONCAT44(0x3e4ccccd,uStack_a0);
        uStack_9c = uVar3;
      }
      else {
        dVar10 = (double)CONCAT44(uStack_9c,uStack_a0);
        dVar7 = -7.532505548438758e-251;
        auStack_98[0] = uVar3;
      }
      if (cVar11 == '\0') {
        dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) -
                                  SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar10,0)
                                 );
      }
      else {
        dVar10 = dVar10 - dVar7 * dVar7;
      }
      uStack_a0 = SUB84(dVar10,0);
      uVar3 = (undefined4)((ulonglong)dVar10 >> 0x20);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(uStack_a4,uStack_a0);
        dVar7 = (double)CONCAT44(0x3dcccccd,uStack_a4);
        uStack_a0 = uVar3;
      }
      else {
        dVar10 = (double)CONCAT44(uStack_a0,uStack_a4);
        dVar7 = 1.3411048210842936e-08;
        uStack_9c = uVar3;
      }
      if (cVar11 == '\0') {
        fVar8 = (float)((ulonglong)dVar7 >> 0x20);
        fVar6 = SUB84(dVar7,0) * fVar8;
        dVar7 = (double)CONCAT44(fVar8,fVar6);
        dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) - fVar6,SUB84(dVar10,0));
      }
      else {
        dVar7 = dVar7 * dVar7;
        dVar10 = dVar10 - dVar7;
      }
      uVar3 = SUB84(dVar7,0);
      uVar4 = (undefined4)((ulonglong)dVar10 >> 0x20);
      uStack_a4 = uVar4;
      if (cVar12 != '\0') {
        uStack_a4 = SUB84(dVar10,0);
        uStack_a0 = uVar4;
      }
      uVar4 = rand(iVar2,puVar5,a6,a7);
      uVar9 = SUB84(dVar10,0);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(uStack_9c,uVar3);
      }
      else {
        dVar10 = (double)CONCAT44(auStack_98[0],uStack_9c);
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        iVar2 = (int)dVar10;
      }
      iVar1 = libgcc_divide_helper_01031c(uVar4,iVar2,a6,a7);
      if (cVar11 == '\0') {
        dVar10 = (double)CONCAT44((float)iVar1,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x28) = (int)((ulonglong)dVar10 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x28) = dVar10;
      }
      uVar3 = rand(uVar4,iVar2,a6,a7);
      (**(code **)(*ar5 + 0x180))(ar5,iVar2,a6,a7);
      if (cVar12 == '\0') {
        uStack_c0 = (double)CONCAT44(uVar3,(int)((ulonglong)dVar10 >> 0x20));
        dVar7 = (double)CONCAT44(uStack_a0,SUB84(dVar10,0));
      }
      else {
        dVar7 = (double)CONCAT44(uStack_9c,uStack_a0);
        uStack_c0 = dVar10;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        iVar2 = (int)dVar7;
      }
      uVar3 = uStack_c0._4_4_;
      iVar1 = libgcc_divide_helper_01031c(uStack_c0._4_4_,iVar2,a6,a7);
      if (cVar11 == '\0') {
        dVar10 = (double)CONCAT44((float)iVar1,uVar9);
      }
      else {
        dVar10 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(0x42c80000,(undefined4)uStack_c0);
      }
      else {
        dVar7 = 6.03200357491229e-312;
      }
      if (cVar11 == '\0') {
        fVar8 = (float)((ulonglong)dVar7 >> 0x20);
        fVar6 = SUB84(dVar7,0) / fVar8;
        dVar7 = (double)CONCAT44(fVar8,fVar6);
        dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) * fVar6,SUB84(dVar10,0));
      }
      else {
        dVar7 = dVar7 / dVar7;
        dVar10 = dVar10 * dVar7;
      }
      uVar4 = SUB84(dVar7,0);
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x2c) = (int)((ulonglong)dVar10 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x2c) = dVar10;
      }
      uVar3 = rand(uVar3,iVar2,a6,a7);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(uStack_a4,uVar4);
      }
      else {
        dVar10 = (double)CONCAT44(uStack_a0,uStack_a4);
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        iVar2 = (int)dVar10;
      }
      iVar2 = libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7);
      if (cVar11 == '\0') {
        dVar10 = (double)CONCAT44((float)iVar2,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)iVar2;
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar10 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar10;
      }
    }
    else if (iVar1 == 0xb) {
      iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,5,a6,a7);
      if (iVar2 == 0) {
        FUN_8c02f404(ar4,2,a6,a7,in_stack_ffffff20);
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0x43fa0000;
          *(undefined4 *)(ar4 + 0x2c) = 0x43fa0000;
          *(undefined4 *)(ar4 + 0x30) = 0x43fa0000;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = 0x10043fa0000;
          *(undefined8 *)(ar4 + 0x2c) = 0x10043fa0000;
          *(undefined8 *)(ar4 + 0x30) = 0x10043fa0000;
        }
      }
      else {
        for (puVar5 = (undefined4 *)0x0; iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,5,a6,a7),
            (int)puVar5 < iVar2; puVar5 = (undefined4 *)((int)puVar5 + 1)) {
          uVar3 = (**(code **)(*ar5 + 0x100))(ar5,5,puVar5,a7);
          a7 = &uStack_b0;
          ar6_00 = auStack_ac;
          ar5_01 = auStack_a8;
          FUN_8c03f414(uVar3,ar5_01,ar6_00,a7);
          Vec3_set_xyz(auStack_4c,ar5_01,ar6_00,a7);
          vec3_copy_8c02b5fc(auStack_68,auStack_4c,ar6_00,a7);
          FUN_8c023484(auStack_30,auStack_68,ar6_00,a7,auStack_78);
          Vec3_ctor_copy(auStack_5c,auStack_78,ar6_00,a7);
          Vec3_dtor(auStack_78,0xffffffff,ar6_00,a7);
          object_dtor_delete(auStack_68,0xffffffff,ar6_00,a7);
          uVar4 = 5;
          a6 = puVar5;
          uVar3 = (**(code **)(*ar5 + 0x100))(ar5,5,puVar5,a7);
          FUN_8c02f670(uVar3,uVar4,a6,a7,auStack_88);
          Vec3_add(auStack_88,auStack_5c,a6,a7,auStack_98);
          Vec3_assign(&uStack_20,auStack_98,a6,a7);
          Vec3_dtor(auStack_98,0xffffffff,a6,a7);
          Vec3_dtor(auStack_88,0xffffffff,a6,a7);
          if (cVar12 == '\0') {
            *(undefined4 *)(ar4 + 0x28) = uStack_20;
            *(undefined4 *)(ar4 + 0x2c) = uStack_1c;
            *(undefined4 *)(ar4 + 0x30) = uStack_18;
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = CONCAT44(uStack_1c,uStack_20);
            *(ulonglong *)(ar4 + 0x2c) = CONCAT44(uStack_18,uStack_1c);
            *(ulonglong *)(ar4 + 0x30) = CONCAT44(uStack_14,uStack_18);
          }
          Vec3_dtor(auStack_5c,0xffffffff,a6,a7);
          object_dtor_delete(auStack_4c,0xffffffff,a6,a7);
        }
      }
    }
  }
  Vec3_dtor(auStack_40,0xffffffff,a6,a7);
  Vec3_dtor(auStack_30,0xffffffff,a6,a7);
  uVar3 = Vec3_dtor(&uStack_20,0xffffffff,a6,a7);
  return uVar3;
}



/* FUN_8c0ac598 @ 8c0ac598 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ac598(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x98;
  *(undefined1 *)(0x98 + ar4) = *ar5;
  return iVar1;
}



/* FUN_8c0ac5a8 @ 8c0ac5a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ac5a8(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  cVar1 = *(char *)(0x98 + ar4);
  *ar5 = cVar1;
  return (int)cVar1;
}



/* FUN_8c0ac5b8 @ 8c0ac5b8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ac5b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126278,ar5,ar6,ar7);
  uVar3 = 0x8c2858f8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2858f8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126288,pcVar2,uVar3,ar7);
  uVar3 = 0x8c285904;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285904,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126298,pcVar2,uVar3,ar7);
  uVar3 = 0x8c285910;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285910,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1262a8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c28591c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28591c,ar7);
  if (cVar4 == '\0') {
    _DAT_8c1262b8 = CONCAT44(_DAT_8c1262bc,0x800000);
  }
  else {
                    /* WARNING: Read-only address (ram,0x8c1262bc) is written */
    _DAT_8c1262b8 = 0xffffffff00800000;
  }
  uVar1 = Vec3_ctor_xyz(&DAT_8c1262bc,pcVar2,uVar3,ar7);
  uVar1 = global_list_push(uVar1,Vec3_dtor,0x8c285928,ar7);
  return uVar1;
}



/* s_GRAPHICS_SQUIDLINE_0ac6a4 @ 8c0ac6a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_SQUIDLINE_0ac6a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *ar5_00;
  undefined2 *ar5_01;
  undefined4 uVar2;
  undefined4 ar7_00;
  int iVar3;
  
  ar7_00 = 0xc;
  uVar2 = 1;
  uVar1 = 2;
  (*(code *)(&FUN_8c0254d0))
            (ar4,2,1,0xc,0,ar5,0x8c2868d8,0x8c286a08,*(undefined4 *)(&DATA_8c13b4d4));
  *(undefined **)(ar4 + 8) = (&DATA_8c12b110);
  FUN_8c0b5a30(ar4 + 0x490,uVar1,uVar2,ar7_00);
  FUN_8c0afa50(ar4 + 0x53c,uVar1,uVar2,ar7_00);
  FUN_8c016fcc(ar4 + 0x894,uVar1,uVar2,ar7_00);
  FUN_8c015224(ar4 + 0x9bc,uVar1,uVar2,ar7_00);
  FUN_8c010120(ar4 + 0x9c4,(&FUN_8c016410),0,0x44,10);
  uVar2 = 0x44;
  uVar1 = 0;
  ar5_00 = (&FUN_8c016410);
  FUN_8c010120(ar4 + 0xc6c,(&FUN_8c016410),0,0x44,0x28);
  (*(code *)(&FUN_8c014334))
            (ar4 + 0xc,ar5_00,uVar1,uVar2,(&DATA_8c13b5ec) + 0x338);
  *(undefined4 *)(0x170c + ar4) = 0;
  *(undefined4 *)(0x1710 + ar4) = 0;
  *(undefined4 *)(0x1714 + ar4) = 0xffffffff;
  *(int *)(0x308 + ar4) = ar4 + 0x490;
  *(int *)(0x30c + ar4) = ar4 + 0x53c;
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    *(undefined4 *)(0x928 + ar4 + iVar3 * 4) = 0;
    *(undefined4 *)(0x948 + ar4 + iVar3 * 4) = 0;
  }
  *(undefined1 *)(0x968 + ar4) = 0;
  *(undefined4 *)(0x88c + ar4) = 0;
  *(undefined4 *)(0x890 + ar4) = 0;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x10;
  (*(code *)(&FUN_8c0f532c))
            (ar4,*(undefined4 *)(0xb4 + *(int *)(0x328 + ar4)),ar4 + 0x894,
             uVar2);
  for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
    *(undefined4 *)(0x970 + iVar3 * 0xc + ar4) = 0;
  }
  uVar2 = 6;
  uVar1 = 0x8c4312a8;
  FUN_8c239170(ar4 + 0x9b4,ar4 + 0x96c,0x8c4312a8,6);
  iVar3 = ar4 + 0x9b4;
  (**(code **)(*(int *)(ar4 + 0x9bc) + 8))((int *)(ar4 + 0x9bc),iVar3,uVar1,uVar2);
  uVar1 = get_field_4_0253e4(ar4 + 0x9bc,iVar3,uVar1,uVar2);
  iVar3 = (*(code *)(&FUN_8c02100c))
                    (0x8c3eb334,(&DATA_8c13b5ec) + 0x342,
                     (&DATA_8c13b5ec) + 0x10,uVar1);
  if (iVar3 == -1) {
    (*(code *)(&report_error_message))
              ((&DATA_8c13b5ec) + 0x351,
               (&DATA_8c13b5ec) + 0x36a,0,2);
  }
  *0x8c286868 = 0;
  0x8c286868[1] = 0;
  0x8c286868[2] = (short)0xff;
  0x8c286868[3] = 0;
  0x8c286868[4] = (short)0xff;
  0x8c286868[5] = (short)0xff;
  0x8c286868[6] = 0;
  0x8c286868[7] = (short)0xff;
  *0x8c286858 = 0xffffffff;
  0x8c286858[1] = 0xffffffff;
  0x8c286858[2] = 0xffffffff;
  0x8c286858[3] = 0xffffffff;
  *(undefined1 *)((int)0x8c286858 + 3) = 0;
  *(undefined1 *)((int)0x8c286858 + 7) = 0;
  *(undefined1 *)((int)0x8c286858 + 0xb) = 0;
  *(undefined1 *)((int)0x8c286858 + 0xf) = 0;
  for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
    uVar2 = 4;
    FUN_8c016464(iVar3 * 0x44 + ar4 + 0x9c4,(&DATA_8c13b474),0x8c286858,4);
    uVar1 = 4;
    ar5_01 = 0x8c286868;
    FUN_8c0164c8(iVar3 * 0x44 + ar4 + 0x9c4,0x8c286868,4,uVar2);
    FUN_8c014790(iVar3 * 0x44 + ar4 + 0x9c4,ar5_01,uVar1,uVar2);
    FUN_8c014764(iVar3 * 0x44 + ar4 + 0x9c4,ar5_01,uVar1,uVar2);
    FUN_8c014a64(iVar3 * 0x44 + ar4 + 0x9c4,ar5_01,uVar1,uVar2);
  }
  return ar4;
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



/* CAnimal_m2_0acaec @ 8c0acaec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m2_0acaec(int ar4,int *ar5,int *ar6,int *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *a4;
  int *ar5_00;
  int *ar7_00;
  
  ar5_00 = ar5;
  ar7_00 = ar7;
  CAnimal_m2_02573c(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((((((char)uVar1 == '\x01') && (*(int *)(0x948 + ar4) == 0)) &&
       (*(int *)(0x94c + ar4) == 0)) &&
      ((*(int *)(0x950 + ar4) == 0 && (*(int *)(0x954 + ar4) == 0)))) &&
     (((*(int *)(0x958 + ar4) == 0 &&
       ((*(int *)(0x95c + ar4) == 0 && (*(int *)(0x960 + ar4) == 0)))) &&
      (*(int *)(0x964 + ar4) == 0)))) {
    ar5_00 = ar5;
    FUN_8c0ad050(ar4,ar5,ar6,ar7_00);
  }
  if ((((*(int *)(0x948 + ar4) != 0) || (*(int *)(0x94c + ar4) != 0)) ||
      (*(int *)(0x950 + ar4) != 0)) ||
     (((*(int *)(0x954 + ar4) != 0 || (*(int *)(0x958 + ar4) != 0)) ||
      ((*(int *)(0x95c + ar4) != 0 ||
       ((*(int *)(0x960 + ar4) != 0 || (*(int *)(0x964 + ar4) != 0)))))))) {
    ar5_00 = ar5;
    FUN_8c0ad0e0(ar4,ar5,ar6,ar7_00);
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((char)uVar1 == '\x02') {
    iVar2 = get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00);
    if (iVar2 != -1) {
      iVar2 = get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00);
      iVar3 = (**(code **)(**(int **)(0x308 + ar4) + 0x44))
                        (*(int **)(0x308 + ar4),ar5_00,ar6,ar7_00);
      if (iVar2 < iVar3) {
        if (*(char *)(0x968 + ar4) == '\0') {
          *(undefined1 *)(0x968 + ar4) = 1;
          *(undefined4 *)(&DATA_8c13bcc4) = 0;
        }
        ar5_00 = ar7;
        s_CSquidLine_0ad244(ar4,ar7,ar5,ar7_00);
        ar6 = ar5;
      }
    }
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((char)uVar1 == '\x02') {
    iVar2 = get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00);
    a4 = *(int **)(0x308 + ar4);
    iVar3 = (**(code **)(*a4 + 0x44))(a4,ar5_00,ar6,ar7_00);
    if ((iVar3 + -1 <= iVar2) && (*(char *)(0x968 + ar4) == '\x01')) {
      *(undefined4 *)(&DATA_8c13bcc4) = 1;
      *(undefined1 *)(0x968 + ar4) = 0;
      FUN_8c0c4e2c(a4,ar5_00,ar6,ar7_00);
    }
  }
  if (*(int *)(0x77c + ar4) == 1) {
    *(undefined4 *)(0x170c + ar4) = 1;
  }
  if (*(int *)(0x75c + ar4) == 1) {
    if ((*(int *)(0x88c + ar4) != 0) && (*(int *)(0x890 + ar4) != 0)) {
      (**(code **)(0xb8 + *ar7))
                (ar7,*(undefined4 *)(0x88c + ar4),*(undefined4 *)(0x890 + ar4),
                 ar4 + 0x760);
      *(undefined4 *)(0x88c + ar4) = 0;
      *(undefined4 *)(0x890 + ar4) = 0;
    }
    *(undefined4 *)(0x75c + ar4) = 0;
  }
  return 1;
}



/* noop_0acd64 @ 8c0acd64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0acd64(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* get_field_328_0acd68 @ 8c0acd68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_328_0acd68(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x328 + ar4);
}



/* CAnimal_m3_0acd74 @ 8c0acd74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m3_0acd74(int ar4,int *ar5,int *ar6,int *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *ar5_00;
  int *ar7_00;
  
  ar5_00 = ar5;
  ar7_00 = ar7;
  CAnimal_m3_026078(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((((((char)uVar1 == '\x01') && (*(int *)(0x948 + ar4) == 0)) &&
       (*(int *)(0x94c + ar4) == 0)) &&
      ((*(int *)(0x950 + ar4) == 0 && (*(int *)(0x954 + ar4) == 0)))) &&
     (((*(int *)(0x958 + ar4) == 0 &&
       ((*(int *)(0x95c + ar4) == 0 && (*(int *)(0x960 + ar4) == 0)))) &&
      (*(int *)(0x964 + ar4) == 0)))) {
    ar5_00 = ar5;
    FUN_8c0ad050(ar4,ar5,ar6,ar7_00);
  }
  if ((((*(int *)(0x948 + ar4) != 0) || (*(int *)(0x94c + ar4) != 0)) ||
      (*(int *)(0x950 + ar4) != 0)) ||
     (((*(int *)(0x954 + ar4) != 0 || (*(int *)(0x958 + ar4) != 0)) ||
      ((*(int *)(0x95c + ar4) != 0 ||
       ((*(int *)(0x960 + ar4) != 0 || (*(int *)(0x964 + ar4) != 0)))))))) {
    ar5_00 = ar5;
    FUN_8c0ad0e0(ar4,ar5,ar6,ar7_00);
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((char)uVar1 == '\x02') {
    iVar2 = get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00);
    if (iVar2 != -1) {
      iVar2 = get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00);
      iVar3 = (**(code **)(**(int **)(0x308 + ar4) + 0x44))
                        (*(int **)(0x308 + ar4),ar5_00,ar6,ar7_00);
      if (iVar2 < iVar3) {
        if (*(char *)(0x968 + ar4) == '\0') {
          *(undefined1 *)(0x968 + ar4) = 1;
          *(undefined4 *)(&DATA_8c13bcc4) = 0;
        }
        ar5_00 = ar7;
        s_CSquidLine_0ad244(ar4,ar7,ar5,ar7_00);
        ar6 = ar5;
      }
    }
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((char)uVar1 == '\x02') {
    iVar2 = get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00);
    iVar3 = (**(code **)(**(int **)(0x308 + ar4) + 0x44))
                      (*(int **)(0x308 + ar4),ar5_00,ar6,ar7_00);
    if ((iVar3 + -1 <= iVar2) && (*(char *)(0x968 + ar4) == '\x01')) {
      *(undefined4 *)(&DATA_8c13bcc4) = 1;
      *(undefined1 *)(0x968 + ar4) = 0;
    }
  }
  if (*(int *)(0x77c + ar4) == 1) {
    *(undefined4 *)(0x170c + ar4) = 1;
  }
  if (*(int *)(0x75c + ar4) == 1) {
    if ((*(int *)(0x88c + ar4) != 0) && (*(int *)(0x890 + ar4) != 0)) {
      (**(code **)(0xb8 + *ar7))
                (ar7,*(undefined4 *)(0x88c + ar4),*(undefined4 *)(0x890 + ar4),
                 ar4 + 0x760);
      *(undefined4 *)(0x88c + ar4) = 0;
      *(undefined4 *)(0x890 + ar4) = 0;
    }
    *(undefined4 *)(0x75c + ar4) = 0;
  }
  return 1;
}



/* CAnimal_m4_0acfe4 @ 8c0acfe4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m4_0acfe4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = (**(code **)(**(int **)(0x30c + ar4) + 0x1c))
                    (*(int **)(0x30c + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0ad050 @ 8c0ad050 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ad050(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    uVar1 = s_Shell_0fef9c(0x8c3eb324,3,2,ar7);
    *(undefined4 *)(0x928 + ar4 + iVar2 * 4) = uVar1;
    uVar1 = (*(code *)(&s_CItemGLoader_RegistToLoad_0fed74))
                      (*(undefined4 *)(0x7d0 + ar5),
                       *(undefined4 *)(0x928 + ar4 + iVar2 * 4),0,ar7);
    *(undefined4 *)(0x948 + ar4 + iVar2 * 4) = uVar1;
  }
  return 8;
}



/* FUN_8c0ad0e0 @ 8c0ad0e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ad0e0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  for (iVar3 = 0; iVar3 < 7; iVar3 = iVar3 + 1) {
    if (*(int *)(0x948 + ar4 + iVar3 * 4) != 0) {
      ar5_00 = *(int *)(0x948 + ar4 + iVar3 * 4);
      iVar1 = FUN_8c0feef8(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
      if (iVar1 == 1) {
        ar5_00 = ar4 + iVar3 * 4 + 0x948;
        uVar2 = FUN_8c0feeb0(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
        *(undefined4 *)(0x928 + ar4 + iVar3 * 4) = uVar2;
      }
    }
  }
  if (*(int *)(0x964 + ar4) != 0) {
    ar5_00 = *(int *)(0x964 + ar4);
    iVar3 = FUN_8c0feef8(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
    if (iVar3 == 1) {
      ar5_00 = ar4 + 0x964;
      uVar2 = FUN_8c0feeb0(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
      *(undefined4 *)(0x944 + ar4) = uVar2;
    }
  }
  iVar3 = *(int *)(0x948 + ar4);
  if (((((iVar3 == 0) && (iVar3 = *(int *)(0x94c + ar4), iVar3 == 0)) &&
       (iVar3 = *(int *)(0x950 + ar4), iVar3 == 0)) &&
      ((iVar3 = *(int *)(0x954 + ar4), iVar3 == 0 &&
       (iVar3 = *(int *)(0x958 + ar4), iVar3 == 0)))) &&
     ((iVar3 = *(int *)(0x95c + ar4), iVar3 == 0 &&
      ((iVar3 = *(int *)(0x960 + ar4), iVar3 == 0 &&
       (iVar3 = *(int *)(0x964 + ar4), iVar3 == 0)))))) {
    uVar2 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7);
    iVar3 = (int)(char)uVar2;
    if (iVar3 == 1) {
      iVar3 = FUN_8c035f4c(ar4 + 0x490,2,ar6,ar7);
    }
  }
  return iVar3;
}



/* s_CSquidLine_0ad244 @ 8c0ad240 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_CSquidLine_0ad244(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a6;
  
  a6 = ar6;
  iVar1 = get_field_328_0acd68(ar4 + 0x53c,ar5,ar6,ar7);
  if (*(int *)(0x928 + ar4 + iVar1 * 4) == 0) {
    iVar1 = (*(code *)(&report_error_message))
                      ((&DATA_8c13b5ec) + 0x379,
                       (&DATA_8c13b5ec) + 0x384,1,2);
  }
  else {
    iVar2 = *(int *)(0x928 + ar4 + iVar1 * 4);
    (**(code **)(0x10c + *(int *)(iVar2 + 8)))(iVar2,ar6,a6,ar7);
    FUN_8c036988(*(undefined4 *)(0x928 + ar4 + iVar1 * 4),ar6,a6,ar7);
    iVar2 = *(int *)(0x928 + ar4 + iVar1 * 4);
    (**(code **)(*(int *)(iVar2 + 8) + 0x5c))(iVar2,ar6,a6,ar7);
    (**(code **)(*ar5 + 0x4c))(ar5,*(undefined4 *)(0x928 + ar4 + iVar1 * 4),a6,ar7);
    *(undefined4 *)(0x928 + ar4 + iVar1 * 4) = 0;
    iVar1 = 0x170c;
    *(undefined4 *)(0x170c + ar4) = 1;
  }
  return iVar1;
}



/* FUN_8c0ad354 @ 8c0ad354 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ad6ec) */
/* WARNING: Unknown calling convention */

int FUN_8c0ad354(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 ar4_00;
  undefined4 ar6_00;
  int iVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  code *pcVar9;
  int ar7_00;
  int iVar10;
  char cVar11;
  char cVar12;
  int in_stack_ffffff48;
  int iStack_7c;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [68];
  
  cVar12 = '\0';
  cVar11 = '\0';
  FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffff48);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_ffffff48);
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    ar7_00 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar7 / dVar7);
  }
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    iStack_7c = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iStack_7c = (int)(dVar7 / dVar7);
  }
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    fVar8 = (float)((ulonglong)dVar7 >> 0x20);
    fVar6 = SUB84(dVar7,0) / fVar8;
    dVar7 = (double)CONCAT44(fVar8,fVar6);
    iVar10 = (int)fVar6;
  }
  else {
    dVar7 = dVar7 / dVar7;
    iVar10 = (int)dVar7;
  }
  iVar5 = (int)((ulonglong)dVar7 >> 0x20);
  FUN_8c256b0c(0,iVar10,iStack_7c,ar7_00,in_stack_ffffff48);
  FUN_8c256fec(0,iVar10,iStack_7c,ar7_00,in_stack_ffffff48);
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,iVar10,iStack_7c,ar7_00);
  iVar1 = get_field_124_027930(ar4 + 0x53c,iVar10,iStack_7c,ar7_00);
  iVar3 = iVar10;
  if (iVar1 != 8) {
    uVar2 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,iVar10,iStack_7c,ar7_00);
    iVar3 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar10,iStack_7c,ar7_00);
    iVar3 = deref_u32(*(int *)(*(int *)(ar4 + 0x328) + 0xa0) + iVar3 * 4,iVar10,iStack_7c,ar7_00);
    iVar1 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar10,iStack_7c,ar7_00);
    iVar1 = FUN_8c026d74(*(int *)(*(int *)(ar4 + 0x328) + 0xa8) + iVar1 * 4,iVar10,iStack_7c,ar7_00)
    ;
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),iVar10,iStack_7c,ar7_00);
    iStack_7c = iVar5;
    if (cVar12 == '\0') {
      iStack_7c = iVar1;
    }
    FUN_8c21bbb0(uVar2,iVar3,iStack_7c,ar7_00,in_stack_ffffff48);
  }
  FUN_8c256210(1,iVar3,iStack_7c,ar7_00);
  FUN_8c233dac(&DAT_8c13b464,iVar3,iStack_7c,ar7_00);
  if ((*(int *)(ar4 + 0x88c) != 0) && (*(int *)(ar4 + 0x890) != 0)) {
    FUN_8c256328(0,iVar3,iStack_7c,ar7_00,in_stack_ffffff48);
    FUN_8c25b5d0(0,iVar3,iStack_7c,ar7_00,in_stack_ffffff48);
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x778));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      ar7_00 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      ar7_00 = (int)(dVar7 / dVar7);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x774));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      iStack_7c = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      iStack_7c = (int)(dVar7 / dVar7);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x770));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      iVar3 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      iVar3 = (int)(dVar7 / dVar7);
    }
    FUN_8c256b0c(0,iVar3,iStack_7c,ar7_00,in_stack_ffffff48);
    FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x890),iVar3,iStack_7c,ar7_00);
    FUN_8c21a80e(*(undefined4 *)(ar4 + 0x88c),iVar3,iStack_7c,ar7_00);
    FUN_8c256210(1,iVar3,iStack_7c,ar7_00);
  }
  iVar10 = *(int *)(ar4 + 0x170c);
  if (iVar10 == 1) {
    FUN_8c0191c8(auStack_50,iVar3,iStack_7c,ar7_00);
    Vec3_ctor_copy(auStack_60,ar4 + 0x30,iStack_7c,ar7_00);
    ar6_00 = 0x1e;
    iVar10 = FUN_8c0ae84c(ar4,auStack_60,0x1e,ar7_00);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7_00);
    if (iVar10 == 1) {
      iVar10 = 0;
    }
    else {
      for (iVar5 = 0; iVar10 = 10, iVar5 < 10; iVar5 = iVar5 + 1) {
        if (cVar12 == '\0') {
          fVar6 = *(float *)(iVar5 * 0x4c + -0x73d7a684);
          pcVar9 = (code *)0x44bb8000;
        }
        else {
          fVar6 = 1500.0;
          pcVar9 = (code *)0x44bb6000;
        }
        if (cVar11 == '\0' && (float)pcVar9 < fVar6) {
          puVar4 = (undefined8 *)(iVar5 * 0x4c + -0x73d7a684);
          if (cVar12 == '\0') {
            pcVar9 = (code *)0x44bb6000;
            *(undefined4 *)puVar4 = 0x44bb6000;
          }
          else {
            pcVar9 = FUN_8c256328;
            *puVar4 = 0x8c25632844bb6000;
          }
        }
        FUN_8c256328(0,uVar2,ar6_00,ar7_00,in_stack_ffffff48);
        ar4_00 = 0;
        FUN_8c25b5d0(0,uVar2,ar6_00,ar7_00,in_stack_ffffff48);
        FUN_8c013b3c(ar4_00,uVar2,ar6_00,ar7_00);
        if (cVar12 == '\0') {
          dVar7 = (double)CONCAT44(0x47800000,pcVar9);
        }
        else {
          dVar7 = 12831.689682006836;
        }
        if (cVar11 == '\0') {
          fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 * dVar7,0);
        }
        if (cVar12 == '\0') {
          dVar7 = (double)CONCAT44(0x40c90fd8,fVar6);
        }
        else {
          dVar7 = 1.0382059669001045e+34;
        }
        if (cVar11 == '\0') {
          iVar10 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
        }
        else {
          iVar10 = (int)(dVar7 / dVar7);
        }
        if (cVar12 == '\0') {
          dVar7 = (double)CONCAT44(0x46fffe00,(float)iVar10);
        }
        else {
          dVar7 = -3.738952064572566e-250;
        }
        if (cVar11 == '\0') {
          iVar10 = (int)(SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20));
        }
        else {
          iVar10 = (int)(dVar7 - dVar7);
        }
        FUN_8c256a78(0,iVar10,ar6_00,ar7_00,in_stack_ffffff48);
        FUN_8c256fec(0,iVar10,ar6_00,ar7_00,in_stack_ffffff48);
        FUN_8c01538c(ar4 + 0x9bc,iVar10,ar6_00,ar7_00);
        uVar2 = *(undefined4 *)(iVar5 * 0x4c + -0x73d7a644);
        FUN_8c014a94(ar4 + 0x9bc,uVar2,ar6_00,ar7_00);
        in_stack_ffffff48 = iVar5;
        FUN_8c016524(iVar5 * 0x44 + ar4 + 0x9c4,uVar2,ar6_00,ar7_00);
        FUN_8c256210(1,uVar2,ar6_00,ar7_00);
      }
    }
  }
  return iVar10;
}



/* FUN_8c0ad7ec @ 8c0ad7ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ad7ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 ar6_00;
  int iVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  int ar7_00;
  int iVar9;
  char cVar10;
  char cVar11;
  int in_stack_ffffff8c;
  int iStack_3c;
  undefined1 auStack_20 [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffff8c);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_ffffff8c);
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    ar7_00 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar7 / dVar7);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    iStack_3c = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iStack_3c = (int)(dVar7 / dVar7);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    fVar8 = (float)((ulonglong)dVar7 >> 0x20);
    fVar6 = SUB84(dVar7,0) / fVar8;
    dVar7 = (double)CONCAT44(fVar8,fVar6);
    iVar9 = (int)fVar6;
  }
  else {
    dVar7 = dVar7 / dVar7;
    iVar9 = (int)dVar7;
  }
  iVar5 = (int)((ulonglong)dVar7 >> 0x20);
  FUN_8c256b0c(0,iVar9,iStack_3c,ar7_00,in_stack_ffffff8c);
  FUN_8c256fec(0,iVar9,iStack_3c,ar7_00,in_stack_ffffff8c);
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,iVar9,iStack_3c,ar7_00);
  iVar1 = get_field_124_027930(ar4 + 0x53c,iVar9,iStack_3c,ar7_00);
  iVar3 = iVar9;
  if (iVar1 != 8) {
    uVar2 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,iVar9,iStack_3c,ar7_00);
    iVar3 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar9,iStack_3c,ar7_00);
    iVar3 = deref_u32(*(int *)(*(int *)(ar4 + 0x328) + 0xa0) + iVar3 * 4,iVar9,iStack_3c,ar7_00);
    iVar1 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar9,iStack_3c,ar7_00);
    iVar1 = FUN_8c026d74(*(int *)(*(int *)(ar4 + 0x328) + 0xa8) + iVar1 * 4,iVar9,iStack_3c,ar7_00);
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),iVar9,iStack_3c,ar7_00);
    iStack_3c = iVar5;
    if (cVar11 == '\0') {
      iStack_3c = iVar1;
    }
    FUN_8c21bbb0(uVar2,iVar3,iStack_3c,ar7_00,in_stack_ffffff8c);
  }
  FUN_8c256210(1,iVar3,iStack_3c,ar7_00);
  FUN_8c233dac(&DAT_8c13b464,iVar3,iStack_3c,ar7_00);
  if ((*(int *)(ar4 + 0x88c) != 0) && (*(int *)(ar4 + 0x890) != 0)) {
    FUN_8c256328(0,iVar3,iStack_3c,ar7_00,in_stack_ffffff8c);
    FUN_8c25b5d0(0,iVar3,iStack_3c,ar7_00,in_stack_ffffff8c);
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x778));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar10 == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar10 == '\0') {
      ar7_00 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      ar7_00 = (int)(dVar7 / dVar7);
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x774));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar10 == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar10 == '\0') {
      iStack_3c = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      iStack_3c = (int)(dVar7 / dVar7);
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x770));
    }
    else {
      dVar7 = 1.4411521878487204e+18;
    }
    if (cVar10 == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,fVar6);
    }
    else {
      dVar7 = -3.739346301775294e-250;
    }
    if (cVar10 == '\0') {
      iVar9 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      iVar9 = (int)(dVar7 / dVar7);
    }
    FUN_8c256b0c(0,iVar9,iStack_3c,ar7_00,in_stack_ffffff8c);
    FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x890),iVar9,iStack_3c,ar7_00);
    FUN_8c219a9a(*(undefined4 *)(ar4 + 0x88c),iVar9,iStack_3c,ar7_00);
    FUN_8c256210(1,iVar9,iStack_3c,ar7_00);
  }
  iVar9 = *(int *)(ar4 + 0x170c);
  if (iVar9 == 1) {
    Vec3_ctor_copy(auStack_20,ar4 + 0x30,iStack_3c,ar7_00);
    ar6_00 = 0x1e;
    iVar9 = FUN_8c0ae84c(ar4,auStack_20,0x1e,ar7_00);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7_00);
    if (iVar9 == 1) {
      iVar9 = 0;
    }
    else {
      for (iVar5 = 0; iVar9 = 10, iVar5 < 10; iVar5 = iVar5 + 1) {
        if (cVar11 == '\0') {
          fVar6 = *(float *)(iVar5 * 0x4c + -0x73d7a684);
          fVar8 = 1500.0;
        }
        else {
          fVar6 = 1500.0;
          fVar8 = 1499.0;
        }
        if (cVar10 == '\0' && fVar8 < fVar6) {
          puVar4 = (undefined8 *)(iVar5 * 0x4c + -0x73d7a684);
          if (cVar11 == '\0') {
            *(undefined4 *)puVar4 = 0x44bb6000;
          }
          else {
            *puVar4 = 0x9bc44bb6000;
          }
        }
        FUN_8c256328(0,uVar2,ar6_00,ar7_00,in_stack_ffffff8c);
        FUN_8c25b5d0(0,uVar2,ar6_00,ar7_00,in_stack_ffffff8c);
        FUN_8c256fec(0,uVar2,ar6_00,ar7_00,in_stack_ffffff8c);
        FUN_8c01538c(ar4 + 0x9bc,uVar2,ar6_00,ar7_00);
        uVar2 = *(undefined4 *)(iVar5 * 0x4c + -0x73d7a644);
        FUN_8c014a94(ar4 + 0x9bc,uVar2,ar6_00,ar7_00);
        in_stack_ffffff8c = iVar5;
        FUN_8c016524(iVar5 * 0x44 + ar4 + 0x9c4,uVar2,ar6_00,ar7_00);
        FUN_8c256210(1,uVar2,ar6_00,ar7_00);
      }
    }
  }
  return iVar9;
}



/* FUN_8c0adc0c @ 8c0adc0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0adc0c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_fr0;
  char cVar5;
  undefined4 uStack_20;
  
  cVar5 = '\0';
  iVar4 = *(int *)(ar4 + 0x328);
  FUN_8c01538c(iVar4 + 0x78,ar5,ar6,ar7);
  uVar1 = FUN_8c015bb8(iVar4 + 0x70,ar5,ar6,ar7);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  ar5_00 = deref_u32(*(int *)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uVar3 = FUN_8c026d74(*(int *)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uStack_20 = extraout_fr0;
  if (cVar5 == '\0') {
    uStack_20 = uVar3;
  }
  FUN_8c21bbb0(uVar1,ar5_00,uStack_20,ar7,iVar2);
  uVar1 = 0;
  if ((*(int *)(ar4 + 0x88c) != 0) && (uVar1 = 0, *(int *)(ar4 + 0x890) != 0)) {
    FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x890),ar5_00,uStack_20,ar7);
    uVar1 = FUN_8c219a9a(*(undefined4 *)(ar4 + 0x88c),ar5_00,uStack_20,ar7);
  }
  return uVar1;
}



/* FUN_8c0add00 @ 8c0add00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0add00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  int ar7_00;
  int ar6_00;
  int ar5_01;
  char cVar8;
  char cVar9;
  undefined4 in_stack_ffffffd4;
  undefined4 uStack_20;
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar4 = *(int *)(ar4 + 0x328);
  FUN_8c01538c(iVar4 + 0x78,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffffd4);
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar8 == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar6 = 21990236992512.0;
  }
  if (cVar8 == '\0') {
    ar7_00 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar6 / dVar6);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar8 == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar6 = 21990236992512.0;
  }
  if (cVar8 == '\0') {
    ar6_00 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar6 / dVar6);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0x42b40000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar6 = -3.739346291369057e-250;
  }
  if (cVar8 == '\0') {
    fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 + dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,fVar5);
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar8 == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar6 = 21990236992512.0;
  }
  if (cVar8 == '\0') {
    fVar7 = (float)((ulonglong)dVar6 >> 0x20);
    fVar5 = SUB84(dVar6,0) / fVar7;
    dVar6 = (double)CONCAT44(fVar7,fVar5);
    ar5_01 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 / dVar6;
    ar5_01 = (int)dVar6;
  }
  uStack_20 = (undefined4)((ulonglong)dVar6 >> 0x20);
  FUN_8c256b0c(0,ar5_01,ar6_00,ar7_00,in_stack_ffffffd4);
  uVar1 = FUN_8c015bb8(iVar4 + 0x70,ar5_01,ar6_00,ar7_00);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_01,ar6_00,ar7_00);
  ar5_00 = deref_u32(*(int *)(iVar4 + 0xa0) + iVar2 * 4,ar5_01,ar6_00,ar7_00);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_01,ar6_00,ar7_00);
  uVar3 = FUN_8c026d74(*(int *)(iVar4 + 0xa8) + iVar2 * 4,ar5_01,ar6_00,ar7_00);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5_01,ar6_00,ar7_00);
  if (cVar9 == '\0') {
    uStack_20 = uVar3;
  }
  FUN_8c21bbb0(uVar1,ar5_00,uStack_20,ar7_00,iVar2);
  if ((*(int *)(ar4 + 0x88c) != 0) && (*(int *)(ar4 + 0x890) != 0)) {
    FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x890),ar5_00,uStack_20,ar7_00);
    FUN_8c25b5d0(0,ar5_00,uStack_20,ar7_00,iVar2);
    FUN_8c219a9a(*(undefined4 *)(ar4 + 0x88c),ar5_00,uStack_20,ar7_00);
  }
  uVar1 = FUN_8c256210(1,ar5_00,uStack_20,ar7_00);
  return uVar1;
}



/* CAnimal_m7_0ade84 @ 8c0ade84 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ade86) */
/* WARNING: Removing unreachable block (ram,0x8c0ade84) */
/* WARNING: Removing unreachable block (ram,0x8c0ade88) */
/* WARNING: Unknown calling convention */

undefined4 CAnimal_m7_0ade84(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *a6;
  float fVar3;
  float fVar4;
  double in_dr0;
  double dVar5;
  double dVar6;
  double dVar7;
  double in_dr12;
  undefined4 in_fr15;
  undefined8 in_xd0;
  double in_xd12;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  cVar10 = '\0';
  cVar9 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&uStack_2c,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_3c,ar5_00,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 8) + 0x170))(ar4,ar5_00,ar6,ar7);
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar10 == '\0') {
    in_fr15 = uVar2;
    uVar2 = uStack_3c;
  }
  uStack_3c = uVar2;
  (**(code **)(*(int *)(ar4 + 8) + 0x174))(ar4,ar5_00,ar6,ar7);
  dVar7 = in_dr0;
  if (cVar10 == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  iVar1 = get_field_124_027930(ar4 + 0x53c,ar5_00,ar6,ar7);
  if (((iVar1 == 8) || (iVar1 == 5)) || (iVar1 == 6)) {
    dVar7 = (double)((ulonglong)dVar7 & 0xffffffff);
  }
  a6 = &uStack_3c;
  (**(code **)(*ar5 + 0x124))(ar5,&uStack_2c,a6,ar7);
  if (cVar10 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x30));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x30);
  }
  fVar4 = SUB84(dVar7,0);
  if (cVar9 == '\0') {
    fVar3 = SUB84(in_dr0,0) - fVar4;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar5 = (double)CONCAT44(uStack_2c,fVar3);
  }
  else {
    dVar5 = (double)CONCAT44(uStack_28,uStack_2c);
  }
  fVar3 = (float)((ulonglong)dVar5 >> 0x20);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar5,0)) {
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x30));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x30);
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar5,0) + fVar4;
    }
    else {
      fVar3 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(uStack_3c,fVar3);
    }
    else {
      dVar5 = (double)CONCAT44(fStack_38,uStack_3c);
    }
    fVar3 = (float)((ulonglong)dVar5 >> 0x20);
    if (cVar9 != '\0' || fVar3 <= SUB84(dVar5,0)) {
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(fVar3,uStack_3c);
      }
      else {
        in_xd0 = CONCAT44(fStack_38,uStack_3c);
      }
      if (cVar9 == '\0') {
        fVar3 = SUB84(dVar5,0) - fVar4;
      }
      else {
        fVar3 = SUB84(dVar5 - dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),fVar3);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x30);
      }
      if (cVar9 == '\0') {
        fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x3dcccccd,fVar3);
      }
      else {
        dVar5 = 6.28623017172232e-312;
      }
      if (cVar9 == '\0') {
        fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),fVar3);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x30);
      }
      if (cVar9 == '\0') {
        fVar3 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) + fVar3);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
      if (cVar10 == '\0') {
        *(int *)(ar4 + 0x30) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = in_xd0;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(fVar3,uStack_2c);
    }
    else {
      in_xd0 = CONCAT44(uStack_28,uStack_2c);
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar5,0) + fVar4;
    }
    else {
      fVar3 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),fVar3);
    }
    else {
      dVar5 = *(double *)(ar4 + 0x30);
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(0x3dcccccd,fVar3);
    }
    else {
      dVar5 = 6.28623017172232e-312;
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),fVar3);
    }
    else {
      dVar5 = *(double *)(ar4 + 0x30);
    }
    if (cVar9 == '\0') {
      fVar3 = (float)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) + fVar3);
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(ar4 + 0x30) = SUB84(dVar5,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
    }
  }
  if (cVar10 == '\0') {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),*(undefined4 *)(ar4 + 0x38));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x38);
  }
  if (cVar9 == '\0') {
    fVar3 = SUB84(dVar5,0) - fVar4;
  }
  else {
    fVar3 = SUB84(dVar5 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar5 = (double)CONCAT44(uStack_24,fVar3);
  }
  else {
    dVar5 = (double)CONCAT44(uStack_20,uStack_24);
  }
  fVar3 = (float)((ulonglong)dVar5 >> 0x20);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar5,0)) {
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x38));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x38);
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar5,0) + fVar4;
    }
    else {
      fVar3 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(fStack_34,fVar3);
    }
    else {
      dVar5 = (double)CONCAT44(uStack_30,fStack_34);
    }
    fVar3 = (float)((ulonglong)dVar5 >> 0x20);
    if (cVar9 != '\0' || fVar3 <= SUB84(dVar5,0)) {
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(fVar3,fStack_34);
      }
      else {
        in_xd0 = CONCAT44(uStack_30,fStack_34);
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar5,0) - fVar4;
      }
      else {
        fVar4 = SUB84(dVar5 - dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),fVar4);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x38);
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x3dcccccd,fVar4);
      }
      else {
        dVar5 = 6.28623017172232e-312;
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),fVar4);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x38);
      }
      if (cVar9 == '\0') {
        fVar4 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) + fVar4);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
      if (cVar10 == '\0') {
        *(int *)(ar4 + 0x38) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x38) = in_xd0;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(fVar3,uStack_24);
    }
    else {
      in_xd0 = CONCAT44(uStack_20,uStack_24);
    }
    if (cVar9 == '\0') {
      fVar4 = SUB84(dVar5,0) + fVar4;
    }
    else {
      fVar4 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),fVar4);
    }
    else {
      dVar5 = *(double *)(ar4 + 0x38);
    }
    if (cVar9 == '\0') {
      fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(0x3dcccccd,fVar4);
    }
    else {
      dVar5 = 6.28623017172232e-312;
    }
    if (cVar9 == '\0') {
      fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),fVar4);
    }
    else {
      dVar5 = *(double *)(ar4 + 0x38);
    }
    if (cVar9 == '\0') {
      fVar4 = (float)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) + fVar4);
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(ar4 + 0x38) = SUB84(dVar5,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x38) = in_xd0;
    }
  }
  (**(code **)(*ar5 + 0x128))(ar5,ar4 + 0x30,a6,ar7);
  if (cVar10 == '\0') {
    in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(int)((ulonglong)dVar5 >> 0x20));
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar5,0));
    dVar5 = in_xd12;
  }
  else {
    dVar6 = *(double *)(ar4 + 0x34);
  }
  fVar4 = (float)((ulonglong)dVar7 >> 0x20);
  if (cVar9 == '\0') {
    fVar3 = (float)((ulonglong)dVar6 >> 0x20) - fVar4;
    dVar6 = (double)CONCAT44(fVar3,SUB84(dVar6,0));
    bVar8 = SUB84(in_dr12,0) < fVar3;
  }
  else {
    dVar6 = dVar6 - dVar7;
    bVar8 = in_dr12 < dVar6;
  }
  if (bVar8) {
    if (cVar10 == '\0') {
      fVar4 = *(float *)(ar4 + 0x34);
      fVar3 = fStack_38;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x34);
      fVar4 = fStack_38;
      fVar3 = fStack_34;
    }
    if (cVar9 != '\0' || fVar3 <= fVar4) {
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),fStack_38);
      }
      else {
        in_xd0 = CONCAT44(fStack_34,fStack_38);
        dVar7 = *(double *)(ar4 + 0x34);
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(0x3dcccccd,fVar4);
      }
      else {
        dVar7 = 6.28623017172232e-312;
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),fVar4);
      }
      else {
        dVar7 = *(double *)(ar4 + 0x34);
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x34) = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x34) = in_xd0;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),SUB84(in_dr12,0) + fVar4);
    }
    else {
      in_dr12 = in_dr12 + dVar7;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar6,0));
    }
    else {
      dVar7 = *(double *)(ar4 + 0x34);
    }
    if (cVar9 == '\0') {
      in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),
                                 SUB84(in_dr12,0) - (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      in_dr12 = in_dr12 - dVar7;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x3dcccccd,SUB84(dVar7,0));
    }
    else {
      dVar7 = 6.28623017172232e-312;
    }
    if (cVar9 == '\0') {
      in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),
                                 SUB84(in_dr12,0) * (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      in_dr12 = in_dr12 * dVar7;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar7,0));
    }
    else {
      dVar7 = *(double *)(ar4 + 0x34);
    }
    if (cVar9 == '\0') {
      fVar4 = SUB84(in_dr12,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar4 = SUB84(in_dr12 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(ar4 + 0x34) = fVar4;
    }
    else {
      *(double *)(ar4 + 0x34) = dVar5;
    }
  }
  Vec3_dtor(&uStack_3c,0xffffffff,a6,ar7);
  uVar2 = Vec3_dtor(&uStack_2c,0xffffffff,a6,ar7);
  return uVar2;
}



/* FUN_8c0ae0b0 @ 8c0ae0b0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ae0fe) */
/* WARNING: Removing unreachable block (ram,0x8c0ae0fa) */
/* WARNING: Removing unreachable block (ram,0x8c0ae0ec) */
/* WARNING: Removing unreachable block (ram,0x8c0ae0de) */
/* WARNING: Removing unreachable block (ram,0x8c0ae0da) */
/* WARNING: Removing unreachable block (ram,0x8c0ae0cc) */
/* WARNING: Removing unreachable block (ram,0x8c0ae0c0) */
/* WARNING: Removing unreachable block (ram,0x8c0ae0ba) */
/* WARNING: Removing unreachable block (ram,0x8c0ae0b0) */
/* WARNING: Removing unreachable block (ram,0x8c0ae0be) */
/* WARNING: Removing unreachable block (ram,0x8c0ae0ca) */
/* WARNING: Removing unreachable block (ram,0x8c0ae0ce) */
/* WARNING: Removing unreachable block (ram,0x8c0ae0dc) */
/* WARNING: Removing unreachable block (ram,0x8c0ae0ea) */
/* WARNING: Removing unreachable block (ram,0x8c0ae0ee) */
/* WARNING: Removing unreachable block (ram,0x8c0ae0fc) */
/* WARNING: Removing unreachable block (ram,0x8c0ae138) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ae0b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = (float)*(int *)(ar4 + 0x458) / 1800.0;
  *(float *)(ar4 + 0x438) = DAT_8c13b4f4 * fVar3;
  *(float *)(ar4 + 0x43c) = DAT_8c13b4f8 * fVar3;
  *(float *)(ar4 + 0x440) = DAT_8c13b4fc * fVar3;
  *(float *)(ar4 + 0x444) = DAT_8c13b500 * fVar3;
  iVar1 = *(int *)(ar4 + 0x458);
  *(int *)(ar4 + 0x458) = iVar1 + 1;
  uVar2 = 0x708;
  if (0x708 < iVar1 + 1) {
    *(undefined4 *)(ar4 + 0x458) = 0;
    uVar2 = 0x74;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0x7fffffff;
  }
  return uVar2;
}



/* FUN_8c0ae160 @ 8c0ae160 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ae160(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  s_Failed_to_Load_CAnimal_LoadG_0284b8(ar4,ar5,ar6,ar7);
  iVar1 = *(int *)(0x460 + ar4);
  if (iVar1 == 1) {
    iVar1 = (*(code *)(&s_GRAPHICS_SQUIDLINE_0ae54a))
                      (ar5,0x2ee0,ar4 + 0x88c,ar4 + 0x890);
  }
  return iVar1;
}



/* s_Squid_FreeGraphicResource_0ae1c0 @ 8c0ae1bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Squid_FreeGraphicResource_0ae1c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar5;
  FUN_8c028afc(ar4,ar5,ar6,ar7);
  if ((*(int *)(0x88c + ar4) != 0) && (*(int *)(0x890 + ar4) != 0)) {
    ar6 = *(undefined4 *)(0x890 + ar4);
    uVar2 = 0x2ee0;
    s_GRAPHICS_SQUIDLINE_0ae646(ar5,0x2ee0,ar6,ar7);
  }
  iVar1 = get_field_4_0253e4(ar4 + 0x9bc,uVar2,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = (*(code *)(&report_error_message))
                      ((&DATA_8c13b5ec) + 0x38c,
                       (&DATA_8c13b5ec) + 0x39f,1,2);
  }
  else {
    uVar2 = s_Failed_s_015312(ar4 + 0x9bc,uVar2,ar6,ar7);
  }
  return uVar2;
}



/* FUN_8c0ae270 @ 8c0ae270 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ae270(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = get_field_314_0b58d0(ar4 + 0x53c,ar5,ar6,ar7);
  if (iVar1 != 0) {
    *(undefined4 *)(0x460 + ar4) = 0;
  }
  uVar2 = FUN_8c028f60(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c0ae2b8 @ 8c0ae2b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ae2b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c028ccc(ar4,ar5,ar6,ar7);
  iVar1 = *(int *)(0x460 + ar4);
  if (iVar1 == 0) {
    iVar1 = FUN_8c0b58dc(ar4 + 0x53c,3,ar6,ar7);
  }
  return iVar1;
}



/* s_Sq_Bone_Home_njd_0ae2fc @ 8c0ae2fc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ae386) */
/* WARNING: Removing unreachable block (ram,0x8c0ae37a) */
/* WARNING: Removing unreachable block (ram,0x8c0ae36e) */
/* WARNING: Removing unreachable block (ram,0x8c0ae362) */
/* WARNING: Removing unreachable block (ram,0x8c0ae356) */
/* WARNING: Removing unreachable block (ram,0x8c0ae360) */
/* WARNING: Removing unreachable block (ram,0x8c0ae36c) */
/* WARNING: Removing unreachable block (ram,0x8c0ae378) */
/* WARNING: Removing unreachable block (ram,0x8c0ae384) */
/* WARNING: Removing unreachable block (ram,0x8c0ae3ae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Unknown calling convention */

undefined4 s_Sq_Bone_Home_njd_0ae2fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [12];
  undefined1 auStack_10 [16];
  
  cVar6 = '\0';
  cVar5 = '\0';
  _DAT_8c2868dc = &PTR_s_Sq_Bone_Idle1_njm_8c13b504;
  _DAT_8c2868e0 = &PTR_DAT_8c13b568;
  _DAT_8c2868e4 = PTR_s_Sq_Bone_Home_njd_8c13b4dc;
  _DAT_8c2868e8 = 0;
  _DAT_8c2868ec = PTR_s_SQUID_BODY_8c13b4e8;
  _DAT_8c2868f0 = PTR_s_Sq_KeyMotionPack_npd_8c13b4e0;
  _DAT_8c2868f4 = PTR_s_hand_nt_njm_8c13b4f0;
  _DAT_8c2868f8 = PTR_s_sq_mapset_1_pvm_8c13b4ec;
  _DAT_8c2868fc = 7;
  _DAT_8c286908 = 0x8c286878;
  _DAT_8c28698c = 0x8c286cf4;
  _DAT_8c286994 = 0x3f800000;
  _DAT_8c2869a0 = CONCAT44(0x3ca3d70a,_DAT_8c2869a0);
  _DAT_8c2869a8 = 0x3f4ccccd;
  _DAT_8c2869ac = 0x43b40000;
  _DAT_8c2869c0 = 0x42100000;
  _DAT_8c286978 = 0x8c286a24;
  _DAT_8c28697c = 0x19;
  _DAT_8c286980 = 0x8c286a94;
  _DAT_8c286984 = 0x19;
  Vec3_set_xyz(auStack_10,ar5,ar6,ar7);
  vec3_copy_8c023d8c(0x8c2869d0,auStack_10,ar6,ar7);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_10,0xffffffff,ar6,ar7);
  Vec3_set_xyz(auStack_1c,uVar2,ar6,ar7);
  vec3_copy_8c023d8c(0x8c2869dc,auStack_1c,ar6,ar7);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_1c,0xffffffff,ar6,ar7);
  Vec3_set_xyz(auStack_28,uVar2,ar6,ar7);
  vec3_copy_8c023d8c(0x8c2869e8,auStack_28,ar6,ar7);
  object_dtor_delete(auStack_28,0xffffffff,ar6,ar7);
  if (cVar6 == '\0') {
    _DAT_8c2869f8 = CONCAT44(DAT_8c2869f8_4,0x43af0000);
    _DAT_8c2869c4 = CONCAT44(DAT_8c2869c4_4,0x42c80000);
    dVar4 = (double)CONCAT44(0x3f99999a,_DAT_8c2869a0);
  }
  else {
    _DAT_8c2869f8 = 0xec43af0000;
    _DAT_8c2869c4 = 0xc842c80000;
    dVar4 = -4.2624166816346474e-250;
    in_xd0 = _DAT_8c2869a0;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  uVar1 = in_xd0;
  if (cVar6 == '\0') {
    _DAT_8c2869a0 = CONCAT44(_DAT_8c2869a4,fVar3);
    uVar1 = _DAT_8c2869a0;
  }
  _DAT_8c2869a0 = uVar1;
  _DAT_8c286a08 = 0xffff;
  _DAT_8c286a0c = 1;
  _DAT_8c286a10 = 0;
  _DAT_8c286a14 = 0;
  return 0;
}



/* s_GRAPHICS_SQUIDLINE_0ae54a @ 8c0ae544 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_SQUIDLINE_0ae54a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 *ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)(&FUN_8c0209fc))
                    (ar4,*(undefined4 *)(&DATA_8c13b5d8),*(undefined4 *)(&DATA_8c13b4d4),ar6);
  if (iVar1 == 0) {
    (*(code *)(&report_error_message))
              ((&DATA_8c13b5ec) + 0x3bc,
               (&DATA_8c13b5ec) + 0x297,1,2);
  }
  iVar1 = (*(code *)(&FUN_8c020af4))
                    (ar4,*(undefined4 *)(&DATA_8c13b5d8),*(undefined4 *)(&DATA_8c13b4d4),ar7);
  if (iVar1 == 0) {
    (*(code *)(&report_error_message))
              ((&DATA_8c13b5ec) + 0x3dc,
               (&DATA_8c13b5ec) + 0x297,1,2);
  }
  iVar1 = (*(code *)(&FUN_8c020ef0))
                    (ar4,(&DATA_8c13b5ec) + 0x3fe,
                     *(undefined4 *)(&DATA_8c13b4d4),*ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)(&report_error_message))
                      ((&DATA_8c13b5ec) + 0x406,
                       (&DATA_8c13b5ec) + 0x297,1,2);
  }
  return iVar1;
}



/* s_GRAPHICS_SQUIDLINE_0ae646 @ 8c0ae640 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_SQUIDLINE_0ae646(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  (*(code *)(&FUN_8c020a70))
            (ar4,*(undefined4 *)(&DATA_8c13b5d8),*(undefined4 *)(&DATA_8c13b4d4),ar5);
  ar6_00 = *(undefined4 *)(&DATA_8c13b4d4);
  ar5_00 = *(undefined4 *)(&DATA_8c13b5d8);
  uVar1 = FUN_8c020b68(ar4,ar5_00,ar6_00,ar5);
  if (ar6 != 0) {
    uVar1 = FUN_8c256670(ar6,ar5_00,ar6_00,ar5);
  }
  return uVar1;
}



/* s_Nautilus_0ae6a4 @ 8c0ae6a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Nautilus_0ae6a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *ar5_00;
  int iVar1;
  char cVar2;
  undefined4 in_stack_fffffff0;
  
  cVar2 = '\0';
  ar5_00 = s_Nautilus_8c13ba15;
  strcpy(ar4,s_Nautilus_8c13ba15,ar6,ar7,in_stack_fffffff0);
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 2;
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x1c) = 0x44a28000;
    *(undefined4 *)(ar4 + 0x20) = 0x43480000;
    *(undefined4 *)(ar4 + 0x24) = 0x44048000;
  }
  else {
    *(undefined8 *)(ar4 + 0x1c) = 0x4348000044a28000;
    *(undefined8 *)(ar4 + 0x20) = 0x4404800043480000;
    *(undefined8 *)(ar4 + 0x24) = 0x8c02a1fc44048000;
  }
  FUN_8c02a1fc(ar4 + 0x2c,ar5_00,ar6,ar7);
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0xc1f00000;
    *(undefined4 *)(ar4 + 0x30) = 0xc2b40000;
  }
  else {
    *(undefined8 *)(ar4 + 0x2c) = 0xc2b40000c1f00000;
    *(undefined8 *)(ar4 + 0x30) = 0x8c08a9b8c2b40000;
  }
  FUN_8c08a9b8(ar4 + 0x38,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x44) = 10;
  *(uint *)(ar4 + 0x48) = *(uint *)(ar4 + 0x48) | 0x80000001;
  FUN_8c0ae7a4(ar4 + 0x4c,ar5_00,ar6,ar7);
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(ar4 + iVar1 + 0xd8) = 0;
  }
  *(undefined1 *)(ar4 + 0xd8) = 1;
  *(undefined1 *)(ar4 + 200) = 0;
  *(undefined4 *)(ar4 + 0xcc) = 0;
  *(undefined4 *)(ar4 + 0xe8) = 1;
  return 0xe8;
}



/* FUN_8c0ae7a4 @ 8c0ae7a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ae7a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(ar4 + 4) = 6;
  *(undefined4 *)(ar4 + 8) = 0xc;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined1 *)(ar4 + 0x18) = 0;
  *(undefined1 *)(ar4 + 0x19) = 0;
  *(undefined4 *)(ar4 + 0x1c) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x24) = 0;
  *(undefined2 *)(ar4 + 0x28) = 0;
  *(undefined2 *)(ar4 + 0x2a) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(char *)(iVar1 * 0xc + ar4 + 0x34) = (char)iVar1;
    *(undefined1 *)(iVar1 * 0xc + ar4 + 0x35) = 0;
    *(undefined4 *)(iVar1 * 0xc + ar4 + 0x38) = 0;
    *(undefined1 *)(iVar1 * 0xc + ar4 + 0x3c) = 0;
  }
  return 6;
}



/* FUN_8c0ae84c @ 8c0ae84c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0aeade) */
/* WARNING: Removing unreachable block (ram,0x8c0aea0e) */
/* WARNING: Removing unreachable block (ram,0x8c0aea76) */
/* WARNING: Unknown calling convention */

uint FUN_8c0ae84c(int ar4,undefined8 *ar5,code *ar6,int ar7)

{
  undefined8 *puVar1;
  double *pdVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined1 *ar4_00;
  int ar4_01;
  undefined4 uVar5;
  undefined8 *ar5_00;
  code *ar6_00;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  cVar12 = '\0';
  cVar11 = '\0';
  iVar6 = 0;
  ar6_00 = ar6;
  Vec3_ctor_zero(&fStack_30,ar5,ar6,ar7);
  uVar4 = 0;
  for (iVar8 = 0; iVar8 < 10; iVar8 = iVar8 + 1) {
    ar6_00 = (code *)0x4c;
    if (*(int *)(iVar8 * 0x4c + -0x73d7a64c) == 0) {
      uVar4 = rand(uVar4,rand,0x4c,ar7);
      uVar5 = 0x1e;
      iVar7 = libgcc_divide_helper_01031c(uVar4,0x1e,ar6_00,ar7);
      if (iVar7 == 0) {
        for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
          uVar5 = 0x8c285974;
          *(undefined1 *)(iVar8 * 0x4c + iVar7 * 4 + -0x73d7a659) = 1;
        }
        *(undefined4 *)(iVar8 * 0x4c + -0x73d7a648) = 10;
        *(undefined4 *)(iVar8 * 0x4c + -0x73d7a64c) = 1;
        FUN_8c023de0(auStack_3c,uVar5,ar6_00,ar7);
        FUN_8c023e04(iVar8 * 0x4c + -0x73d7a668,auStack_3c,ar6_00,ar7);
        ar4_00 = auStack_3c;
        free_if_nonnull_wrap_016ac4(ar4_00,0xffffffff,ar6_00,ar7);
        puVar1 = (undefined8 *)(iVar8 * 0x4c + -0x73d7a68c);
        if (cVar12 == '\0') {
          *(undefined4 *)puVar1 = *(undefined4 *)ar5;
        }
        else {
          *puVar1 = *ar5;
        }
        puVar1 = (undefined8 *)(iVar8 * 0x4c + -0x73d7a688);
        if (cVar12 == '\0') {
          *(undefined4 *)puVar1 = *(undefined4 *)((int)ar5 + 4);
        }
        else {
          *puVar1 = *(undefined8 *)((int)ar5 + 4);
        }
        puVar1 = (undefined8 *)(iVar8 * 0x4c + -0x73d7a684);
        ar5_00 = ar5 + 1;
        if (cVar12 == '\0') {
          *(undefined4 *)puVar1 = *(undefined4 *)ar5_00;
        }
        else {
          *puVar1 = *ar5_00;
        }
        uVar4 = rand(ar4_00,ar5_00,ar6_00,ar7);
        iVar7 = libgcc_divide_helper_01031c(uVar4,0x14,ar6_00,ar7);
        if (cVar12 == '\0') {
          dVar10 = (double)CONCAT44(0x42c80000,(float)iVar7);
        }
        else {
          dVar10 = 7.64472037604589e-312;
        }
        if (cVar11 == '\0') {
          fStack_30 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fStack_30 = SUB84(dVar10 / dVar10,0);
        }
        if (cVar12 != '\0') {
          fStack_30 = (float)in_xd0;
          fStack_2c = (float)((ulonglong)in_xd0 >> 0x20);
        }
        uVar4 = rand(rand,iVar7,ar6_00,ar7);
        uVar5 = 2;
        iVar7 = libgcc_divide_helper_01031c(uVar4,2,ar6_00,ar7);
        if (iVar7 == 0) {
          if (cVar12 == '\0') {
            dVar10 = (double)CONCAT44(0xbf800000,fStack_30);
          }
          else {
            in_xd0 = CONCAT44(fStack_2c,fStack_30);
            dVar10 = 6.04234156954332e-312;
          }
          if (cVar11 == '\0') {
            fStack_30 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fStack_30 = SUB84(dVar10 * dVar10,0);
          }
          if (cVar12 != '\0') {
            fStack_30 = (float)in_xd0;
            fStack_2c = (float)((ulonglong)in_xd0 >> 0x20);
          }
        }
        uVar4 = rand(uVar4,uVar5,ar6_00,ar7);
        uVar5 = 0x14;
        iVar7 = libgcc_divide_helper_01031c(uVar4,0x14,ar6_00,ar7);
        if (cVar12 == '\0') {
          dVar10 = (double)CONCAT44(0x42c80000,(float)iVar7);
        }
        else {
          dVar10 = 7.64472037604589e-312;
        }
        if (cVar11 == '\0') {
          fStack_2c = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fStack_2c = SUB84(dVar10 / dVar10,0);
        }
        if (cVar12 != '\0') {
          fStack_2c = (float)in_xd0;
          fStack_28 = (float)((ulonglong)in_xd0 >> 0x20);
        }
        uVar4 = rand(uVar4,uVar5,ar6_00,ar7);
        uVar5 = 2;
        iVar7 = libgcc_divide_helper_01031c(uVar4,2,ar6_00,ar7);
        if (iVar7 == 0) {
          if (cVar12 == '\0') {
            dVar10 = (double)CONCAT44(0xbf800000,fStack_2c);
          }
          else {
            in_xd0 = CONCAT44(fStack_28,fStack_2c);
            dVar10 = 6.04234156954332e-312;
          }
          if (cVar11 == '\0') {
            fStack_2c = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fStack_2c = SUB84(dVar10 * dVar10,0);
          }
          if (cVar12 != '\0') {
            fStack_2c = (float)in_xd0;
            fStack_28 = (float)((ulonglong)in_xd0 >> 0x20);
          }
        }
        uVar4 = rand(uVar4,uVar5,ar6_00,ar7);
        uVar5 = 100;
        iVar7 = libgcc_divide_helper_01031c(uVar4,100,ar6_00,ar7);
        if (cVar12 == '\0') {
          dVar10 = (double)CONCAT44(0x42c80000,(float)iVar7);
        }
        else {
          dVar10 = 7.64472037604589e-312;
        }
        if (cVar11 == '\0') {
          fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 / dVar10,0);
        }
        fStack_28 = fVar9;
        if (cVar12 != '\0') {
          fStack_28 = (float)in_xd0;
          uStack_24 = (undefined4)((ulonglong)in_xd0 >> 0x20);
        }
        uVar4 = rand(uVar4,uVar5,ar6_00,ar7);
        uVar5 = 2;
        iVar7 = libgcc_divide_helper_01031c(uVar4,2,ar6_00,ar7);
        if (iVar7 == 0) {
          if (cVar12 == '\0') {
            dVar10 = (double)CONCAT44(0xbf800000,fStack_28);
          }
          else {
            in_xd0 = CONCAT44(uStack_24,fStack_28);
            dVar10 = 6.04234156954332e-312;
          }
          if (cVar11 == '\0') {
            fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar9 = SUB84(dVar10 * dVar10,0);
          }
          fStack_28 = fVar9;
          if (cVar12 != '\0') {
            fStack_28 = (float)in_xd0;
            uStack_24 = (undefined4)((ulonglong)in_xd0 >> 0x20);
          }
        }
        FUN_8c02ace4(ar4 + 0x53c,uVar5,ar6_00,ar7,auStack_4c);
        Vec3_assign(iVar8 * 0x4c + -0x73d7a67c,auStack_4c,ar6_00,ar7);
        Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7);
        pfVar3 = &fStack_30;
        FUN_8c023aa0(iVar8 * 0x4c + -0x73d7a67c,pfVar3,ar6_00,ar7);
        iVar7 = iVar8 * 0x4c + -0x73d7a67c;
        Vec3_length(iVar7,pfVar3,ar6_00,ar7);
        uVar4 = rand(iVar7,pfVar3,ar6_00,ar7);
        uVar5 = 10;
        iVar7 = libgcc_divide_helper_01031c(uVar4,10,ar6_00,ar7);
        pdVar2 = (double *)(iVar8 * 0x4c + -0x73d7a66c);
        if (cVar11 == '\0') {
          dVar10 = (double)CONCAT44((float)iVar7,fVar9);
        }
        else {
          dVar10 = (double)iVar7;
        }
        if (cVar12 == '\0') {
          *(int *)pdVar2 = (int)((ulonglong)dVar10 >> 0x20);
        }
        else {
          *pdVar2 = dVar10;
        }
        ar4_01 = ar4 + 0x53c;
        iVar7 = get_field_314_0b58d0(ar4_01,uVar5,ar6_00,ar7);
        if (iVar7 < 1) {
          ar6_00 = rand;
          uVar4 = rand(ar4_01,iVar7,rand,ar7);
          uVar4 = libgcc_divide_helper_01031c(uVar4,3,ar6_00,ar7);
          *(undefined4 *)(iVar8 * 0x4c + -0x73d7a644) = uVar4;
        }
        else {
          uVar4 = rand(ar4_01,rand,ar6_00,ar7);
          ar6_00 = (code *)libgcc_divide_helper_01031c(uVar4,6,ar6_00,ar7);
          *(code **)(iVar8 * 0x4c + -0x73d7a644) = ar6_00;
          iVar7 = get_field_124_027930(ar4 + 0x53c,0x53c,ar6_00,ar7);
          if ((iVar7 == 2) && (*(int *)(iVar8 * 0x4c + -0x73d7a644) < 3)) {
            iVar7 = iVar8 * 0x4c;
            ar7 = iVar7 + -0x73d7a68c;
            ar6_00 = (code *)(*(int *)(iVar7 + -0x73d7a644) + 3);
            *(code **)(iVar7 + -0x73d7a644) = ar6_00;
          }
        }
      }
    }
    uVar4 = 0x4c;
    if (*(int *)(iVar8 * 0x4c + -0x73d7a64c) == 1) break;
  }
  for (iVar8 = 0; iVar8 < 10; iVar8 = iVar8 + 1) {
    if (0 < *(int *)(iVar8 * 0x4c + -0x73d7a64c)) {
      if (*(int *)(ar4 + 0x1710) < (int)ar6) {
        *(int *)(iVar8 * 0x4c + -0x73d7a64c) =
             *(int *)(iVar8 * 0x4c + -0x73d7a64c) + *(int *)(iVar8 * 0x4c + -0x73d7a648);
      }
      else if (1 < *(int *)(iVar8 * 0x4c + -0x73d7a64c)) {
        ar6_00 = (code *)0x40;
        *(int *)(iVar8 * 0x4c + -0x73d7a64c) =
             *(int *)(iVar8 * 0x4c + -0x73d7a64c) + *(int *)(iVar8 * 0x4c + -0x73d7a648);
      }
      pfVar3 = (float *)(iVar8 * 0x4c + -0x73d7a668);
      puVar1 = (undefined8 *)(iVar8 * 0x4c + -0x73d7a668);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)puVar1);
      }
      else {
        in_xd0 = *puVar1;
        dVar10 = 6.71062932991538e-312;
      }
      if (cVar11 == '\0') {
        fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *pfVar3 = fVar9;
      }
      else {
        *(undefined8 *)pfVar3 = in_xd0;
      }
      pfVar3 = (float *)(iVar8 * 0x4c + -0x73d7a664);
      puVar1 = (undefined8 *)(iVar8 * 0x4c + -0x73d7a664);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)puVar1);
      }
      else {
        in_xd0 = *puVar1;
        dVar10 = 6.71062932991538e-312;
      }
      if (cVar11 == '\0') {
        fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *pfVar3 = fVar9;
      }
      else {
        *(undefined8 *)pfVar3 = in_xd0;
      }
      pfVar3 = (float *)(iVar8 * 0x4c + -0x73d7a660);
      puVar1 = (undefined8 *)(iVar8 * 0x4c + -0x73d7a660);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)puVar1);
      }
      else {
        in_xd0 = *puVar1;
        dVar10 = 6.71062932991538e-312;
      }
      if (cVar11 == '\0') {
        fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *pfVar3 = fVar9;
      }
      else {
        *(undefined8 *)pfVar3 = in_xd0;
      }
      Vec3_scale(iVar8 * 0x4c + -0x73d7a67c,iVar8 * 0x4c + -0x73d7a66c,ar6_00,ar7,auStack_5c);
      FUN_8c023aa0(iVar8 * 0x4c + -0x73d7a68c,auStack_5c,ar6_00,ar7);
      Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7);
      if (0xfe < *(int *)(iVar8 * 0x4c + -0x73d7a64c)) {
        *(undefined4 *)(iVar8 * 0x4c + -0x73d7a64c) = 0xff;
        *(undefined4 *)(iVar8 * 0x4c + -0x73d7a648) = 0xfffffff6;
      }
      if (*(int *)(iVar8 * 0x4c + -0x73d7a64c) < 1) {
        *(undefined4 *)(iVar8 * 0x4c + -0x73d7a64c) = 0;
        *(undefined4 *)(iVar8 * 0x4c + -0x73d7a648) = 10;
        FUN_8c023de0(auStack_68,0x4c,ar6_00,ar7);
        FUN_8c023e04(iVar8 * 0x4c + -0x73d7a668,auStack_68,ar6_00,ar7);
        free_if_nonnull_wrap_016ac4(auStack_68,0xffffffff,ar6_00,ar7);
      }
      for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
        *(char *)(iVar8 * 0x4c + iVar7 * 4 + -0x73d7a659) =
             (char)*(undefined4 *)(iVar8 * 0x4c + -0x73d7a64c);
      }
    }
  }
  for (iVar8 = 0; iVar8 < 10; iVar8 = iVar8 + 1) {
    if (*(int *)(ar4 + 0x1710) < (int)ar6) {
      ar7 = 4;
      ar6_00 = (code *)(iVar8 * 0x4c + -0x73d7a65c);
      FUN_8c016464(iVar8 * 0x44 + ar4 + 0x9c4,&DAT_8c13b474,ar6_00,4);
    }
    else if (*(int *)(iVar8 * 0x4c + -0x73d7a64c) < 2) {
      iVar6 = iVar6 + 1;
      *(undefined4 *)(iVar8 * 0x4c + -0x73d7a64c) = 0;
    }
    else {
      ar7 = 4;
      ar6_00 = (code *)(iVar8 * 0x4c + -0x73d7a65c);
      FUN_8c016464(iVar8 * 0x44 + ar4 + 0x9c4,&DAT_8c13b474,ar6_00,4);
    }
  }
  *(int *)(ar4 + 0x1710) = *(int *)(ar4 + 0x1710) + 1;
  if (iVar6 == 10) {
    *(undefined4 *)(ar4 + 0x170c) = 0;
    *(undefined4 *)(ar4 + 0x1710) = 0;
  }
  Vec3_dtor(&fStack_30,0xffffffff,ar6_00,ar7);
  return (uint)(iVar6 == 10);
}



/* FUN_8c0af2b8 @ 8c0af2b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0af2b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 auStack_14 [16];
  
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7);
  FUN_8c023dac(ar4 + 0x24,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0x14;
  *(undefined4 *)(ar4 + 0x48) = 0;
  FUN_8c023de0(auStack_14,ar5,ar6,ar7);
  FUN_8c023e04(ar4 + 0x24,auStack_14,ar6,ar7);
  free_if_nonnull_wrap_016ac4(auStack_14,0xffffffff,ar6,ar7);
  *(undefined4 *)(ar4 + 0x30) = 0xff2f2f2f;
  *(undefined4 *)(ar4 + 0x34) = 0xff2f2f2f;
  *(undefined4 *)(ar4 + 0x38) = 0xff2f2f2f;
  *(undefined4 *)(ar4 + 0x3c) = 0xff2f2f2f;
  *(undefined1 *)(ar4 + 0x33) = 0;
  *(undefined1 *)(ar4 + 0x37) = 0;
  *(undefined1 *)(ar4 + 0x3b) = 0;
  *(undefined1 *)(ar4 + 0x3f) = 0;
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



/* FUN_8c0af3c4 @ 8c0af3c4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0af3c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  
  cVar5 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1262d0,ar5,ar6,ar7);
  uVar3 = 0x8c285938;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285938,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1262e0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c285944;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285944,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1262f0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c285950;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285950,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126300,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c28595c,ar7);
  if (cVar5 == '\0') {
    _DAT_8c126310 = CONCAT44(_UNK_8c126314,0x800000);
                    /* WARNING: Read-only address (ram,0x8c126314) is written */
  }
  else {
    _DAT_8c126310 = 0xffffffff00800000;
  }
  uVar1 = 0x4c;
  FUN_8c010120(0x8c285974,FUN_8c0af2b8,FUN_8c0af368,0x4c,10);
  global_list_push(0,FUN_8c0afa2c,0x8c285968,uVar1);
  uVar4 = 0x4c;
  FUN_8c010120(0x8c285c78,FUN_8c0af2b8,FUN_8c0af368,0x4c,0x28);
  uVar1 = 0x8c285c6c;
  pcVar2 = FUN_8c0afa08;
  global_list_push(0,FUN_8c0afa08,0x8c285c6c,uVar4);
  uVar1 = FUN_8c02452c(0x8c2868d8,pcVar2,uVar1,uVar4);
  uVar3 = 0x8c2868cc;
  pcVar2 = FUN_8c03a4ac;
  global_list_push(uVar1,FUN_8c03a4ac,0x8c2868cc,uVar4);
  uVar1 = FUN_8c024824(&DAT_8c286a08,pcVar2,uVar3,uVar4);
  global_list_push(uVar1,free_if_nonnull_wrap_03a454,0x8c2869fc,uVar4);
  uVar1 = 4;
  FUN_8c010120(0x8c286a24,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x19);
  global_list_push(0,FUN_8c0af9e4,0x8c286a18,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c286a94,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x19);
  global_list_push(0,FUN_8c0af9c0,0x8c286a88,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c286b04,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,3);
  global_list_push(0,FUN_8c0af99c,0x8c286af8,uVar1);
  uVar4 = 4;
  FUN_8c010120(0x8c286b1c,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,3);
  uVar1 = 0x8c286b10;
  pcVar2 = FUN_8c0af978;
  global_list_push(0,FUN_8c0af978,0x8c286b10,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286b34,pcVar2,uVar1,uVar4);
  uVar3 = 0x8c286b28;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286b28,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286b50,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c286b44;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286b44,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286b6c,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c286b60;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286b60,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286b88,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c286b7c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286b7c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286ba4,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c286b98;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286b98,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286bc0,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c286bb4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286bb4,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286bdc,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c286bd0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286bd0,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286bf8,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c286bec;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286bec,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286c14,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c286c08;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286c08,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286c30,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c286c24;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286c24,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286c4c,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c286c40;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286c40,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286c68,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c286c5c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286c5c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286c84,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c286c78;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286c78,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286ca0,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c286c94;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286c94,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286cbc,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c286cb0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286cb0,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c286cd8,pcVar2,uVar3,uVar4);
  global_list_push(uVar1,Vec3_dtor,0x8c286ccc,uVar4);
  uVar3 = 0x8c286b6c;
  uVar1 = FUN_8c017010(0x8c286cf4,0x8c286b34,0x8c286b50,0x8c286b6c,0x8c286b88,0x8c286ba4,0x8c286bc0,
                       0x8c286bdc,0x8c286bf8);
  uVar1 = global_list_push(uVar1,Class_129938_m0_017084,0x8c286ce8,uVar3);
  return uVar1;
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



/* FUN_8c0afa50 @ 8c0afa50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0afa50(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c030fa0(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12b2ac);
  Vec3_ctor_zero((int)ar4 + 0x224,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x234,ar5,ar6,ar7);
  FUN_8c033954((int)ar4 + 0x248,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2bc,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2d4,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2e4,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2f4,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x304,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x338,ar5,ar6,ar7);
  FUN_8c0afb1c(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0afb1c @ 8c0afb1c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0afb1c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  *(undefined4 *)(ar4 + 0x31c) = 0;
  *(undefined4 *)(ar4 + 0x314) = 0;
  *(undefined4 *)(ar4 + 0x324) = 0;
  FUN_8c031748(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x328) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x32c) = 0;
  *(undefined4 *)(ar4 + 0x220) = 0;
  *(undefined4 *)(ar4 + 0x240) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x334) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x334) = (ulonglong)extraout_fr1;
  }
  vec3_clear(ar4 + 0x338,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x348) = 0;
  _DAT_8c286dec = 0;
  *(undefined ***)(ar4 + 0x1c8) = &PTR_DAT_8c13ba24;
  *(undefined4 *)(ar4 + 0x1cc) = 9;
  return 0x1cc;
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



/* Class_12b2ac_m6_0afcc0 @ 8c0afcc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b2ac_m6_0afcc0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  FUN_8c031b68(ar4,0x8c286dbc,ar6,ar7);
  *(undefined4 *)(0x128 + ar4) = ar5;
  if (1 < *(int *)(0x314 + ar4)) {
    ar7 = 0;
    ar6 = 0xffffffff;
    (*(code *)(&s_CAnimBody_SetAnimation_033a94))
              (ar4 + 0xb0,0xe,0xffffffff,0);
  }
  uVar3 = 0x12;
  uVar1 = FUN_8c03c0f0(ar4 + 0xb0,0x12,ar6,ar7);
  piVar2 = (int *)deref_u32(uVar1,uVar3,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(*piVar2 + 0x18) != 0) {
    uVar3 = 0x12;
    uVar1 = FUN_8c03c0f0(ar4 + 0xb0,0x12,ar6,ar7);
    uVar1 = deref_u32(uVar1,uVar3,ar6,ar7);
    uVar5 = 1;
    puVar4 = (&DATA_8c13ba4c);
    FUN_8c034a70(ar4 + 0xb0,uVar1,(&DATA_8c13ba4c),1);
    uVar3 = 0x13;
    uVar1 = FUN_8c03c0f0(ar4 + 0xb0,0x13,puVar4,uVar5);
    uVar1 = deref_u32(uVar1,uVar3,puVar4,uVar5);
    uVar5 = 1;
    puVar4 = (&DATA_8c13ba4c) + 0x18;
    FUN_8c034a70(ar4 + 0xb0,uVar1,puVar4,1);
    uVar3 = 0x14;
    uVar1 = FUN_8c03c0f0(ar4 + 0xb0,0x14,puVar4,uVar5);
    uVar1 = deref_u32(uVar1,uVar3,puVar4,uVar5);
    uVar1 = FUN_8c034a70(ar4 + 0xb0,uVar1,(&DATA_8c13ba4c) + 0x30,1);
  }
  return uVar1;
}



/* Class_12b2ac_m5_0afddc @ 8c0afddc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0afe6a) */
/* WARNING: Removing unreachable block (ram,0x8c0afe5e) */
/* WARNING: Removing unreachable block (ram,0x8c0afe62) */
/* WARNING: Removing unreachable block (ram,0x8c0afed2) */
/* WARNING: Unknown calling convention */

int Class_12b2ac_m5_0afddc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 in_dr0;
  char cVar4;
  undefined8 uStack_1c;
  undefined8 uStack_10;
  
  cVar4 = '\0';
  if (*(int *)(ar4 + 300) == 0) {
    iVar1 = get_field_10_031590(ar4 + 0xb0,ar5,ar6,ar7);
    uVar3 = 0;
    uVar2 = 0xffffffff;
    ar5_00 = iVar1 + -1;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar2,uVar3);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    FUN_8c032ab0(ar4,ar5_00,uVar2,uVar3);
    uStack_10 = in_dr0;
    if (cVar4 == '\0') {
      uStack_10 = CONCAT44(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
    }
    iVar1 = 0x1c;
    if (cVar4 == '\0') {
      *(int *)(ar4 + 0x34c) = (int)uStack_10;
    }
    else {
      *(undefined8 *)(ar4 + 0x34c) = uStack_10;
    }
  }
  else if (*(int *)(ar4 + 300) == 1) {
    iVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 7) {
      uVar3 = 100;
      uVar2 = 0;
      iVar1 = rand_range(ar4,0,100,ar7);
      if (iVar1 < 0x1f) {
        iVar1 = 300;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else {
        FUN_8c032ab0(ar4,uVar2,uVar3,ar7);
        uStack_1c = in_dr0;
        if (cVar4 == '\0') {
          uStack_1c = CONCAT44(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
        }
        iVar1 = 0x10;
        if (cVar4 == '\0') {
          *(int *)(ar4 + 0x34c) = (int)uStack_1c;
        }
        else {
          *(undefined8 *)(ar4 + 0x34c) = uStack_1c;
        }
      }
    }
  }
  else {
    iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = 300;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + -1;
    }
  }
  return iVar1;
}



/* Class_12b2ac_m1_0aff3c @ 8c0aff3c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0aff92) */
/* WARNING: Removing unreachable block (ram,0x8c0aff8a) */
/* WARNING: Removing unreachable block (ram,0x8c0aff62) */
/* WARNING: Removing unreachable block (ram,0x8c0aff3c) */
/* WARNING: Removing unreachable block (ram,0x8c0aff66) */
/* WARNING: Removing unreachable block (ram,0x8c0aff8e) */
/* WARNING: Removing unreachable block (ram,0x8c0aff96) */
/* WARNING: Unknown calling convention */

undefined4 Class_12b2ac_m1_0aff3c(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *ar5_00;
  int iVar4;
  double in_dr0;
  double dVar5;
  double dVar6;
  float fVar8;
  double in_dr2;
  double in_dr14;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_fffffea0;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fVar7;
  
  cVar11 = '\0';
  cVar10 = '\0';
  *(undefined4 *)(ar4 + 0x240) = 0;
  puVar3 = ar5;
  if (*(int *)(ar4 + 0x124) == 5) {
    FUN_8c03207c(ar4,ar5,ar6,ar7);
  }
  else {
    FUN_8c03207c(ar4,ar5,ar6,ar7);
  }
  if (*(int *)(ar4 + 0x124) == 8) {
    Vec3_ctor_xyz(auStack_30,puVar3,ar6,ar7);
    iVar4 = FUN_8c023cd4(ar4 + 0x14,auStack_30,ar6,ar7);
    Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
    ar5_00 = (code *)0x0;
    if (iVar4 != 0) {
      vec3_copy_8c02b5fc(auStack_3c,ar4 + 0x14c,ar6,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_3c,ar6,ar7,auStack_4c);
      Vec3_assign(ar4 + 0x14,auStack_4c,ar6,ar7);
      Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_3c,0xffffffff,ar6,ar7);
      vec3_copy_8c02b5fc(auStack_58,ar4 + 0x14c,ar6,ar7);
      FUN_8c023484(ar4 + 0x80,auStack_58,ar6,ar7,auStack_68);
      Vec3_assign(ar4 + 0x80,auStack_68,ar6,ar7);
      Vec3_dtor(auStack_68,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_58,0xffffffff,ar6,ar7);
      ar5_00 = FUN_8c02a1fc;
      FUN_8c02a1fc(ar4 + 0x14c,FUN_8c02a1fc,ar6,ar7);
    }
    vec3_clear(ar4 + 0x13c,ar5_00,ar6,ar7);
    FUN_8c031700(ar4,ar5_00,ar6,ar7);
  }
  else {
    Class_129cbc_m1_031598(ar4,ar5,ar6,ar7);
  }
  if ((ar5[4] == 3) || (*(int *)(ar4 + 0x68) != 0)) {
    FUN_8c0b5344(ar4,ar5[4],ar6,ar7);
    uVar1 = 1;
    FUN_8c02f2c0(*ar5,1,ar6,ar7,in_stack_fffffea0);
    if (*(int *)(ar4 + 0x124) != 2) {
      uVar1 = *(undefined4 *)(ar5[1] + 4);
      FUN_8c031ab4(ar4,uVar1,ar6,ar7);
    }
    FUN_8c0324ac(ar4,uVar1,ar6,ar7);
    Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_78);
    Vec3_add(auStack_78,ar4 + 0x90,ar6,ar7,auStack_88);
    Vec3_add(auStack_88,ar4 + 0x6c,ar6,ar7,auStack_98);
    Vec3_add(auStack_98,ar4 + 0x13c,ar6,ar7,auStack_a8);
    Vec3_add(auStack_a8,ar4 + 0x338,ar6,ar7,auStack_b8);
    Vec3_assign(ar4 + 4,auStack_b8,ar6,ar7);
    Vec3_dtor(auStack_b8,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_a8,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_98,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_88,0xffffffff,ar6,ar7);
    iVar4 = -1;
    Vec3_dtor(auStack_78,0xffffffff,ar6,ar7);
  }
  else {
    ar7 = ar5[6];
    ar6 = ar5[3];
    uVar1 = FUN_8c0b0784(ar4,*ar5,ar6,ar7);
    FUN_8c02f2c0(*ar5,uVar1,ar6,ar7,in_stack_fffffea0);
    uVar1 = *(undefined4 *)(ar5[1] + 4);
    FUN_8c031ab4(ar4,uVar1,ar6,ar7);
    FUN_8c0324ac(ar4,uVar1,ar6,ar7);
    Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_c8);
    Vec3_add(auStack_c8,ar4 + 0x90,ar6,ar7,auStack_d8);
    Vec3_add(auStack_d8,ar4 + 0x6c,ar6,ar7,auStack_e8);
    Vec3_add(auStack_e8,ar4 + 0x13c,ar6,ar7,auStack_f8);
    Vec3_add(auStack_f8,ar4 + 0x338,ar6,ar7,auStack_108);
    Vec3_assign(ar4 + 4,auStack_108,ar6,ar7);
    Vec3_dtor(auStack_108,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_f8,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_e8,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_d8,0xffffffff,ar6,ar7);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_c8,0xffffffff,ar6,ar7);
    vec3_clear(ar4 + 0x338,uVar1,ar6,ar7);
    Vec3_ctor_zero(&uStack_20,uVar1,ar6,ar7);
    Vec3_add(*(undefined4 *)ar5[1],ar4 + 4,ar6,ar7,auStack_118);
    Vec3_assign(&uStack_20,auStack_118,ar6,ar7);
    Vec3_dtor(auStack_118,0xffffffff,ar6,ar7);
    (**(code **)(*(int *)ar5[6] + 0x128))((int *)ar5[6],*(undefined4 *)ar5[1],ar6,ar7);
    if (cVar11 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20))
      ;
      in_dr0 = in_xd14;
    }
    if (((*(int *)(ar4 + 0x124) != 8) && (*(int *)(ar4 + 0x124) != 5)) &&
       (*(int *)(ar4 + 0x124) != 6)) {
      if (cVar11 == '\0') {
        in_dr2 = (double)CONCAT44(uStack_1c,SUB84(in_dr2,0));
        dVar5 = (double)CONCAT44(SUB84(in_dr14,0),0x42100000);
      }
      else {
        in_dr2 = (double)CONCAT44(uStack_18,uStack_1c);
        in_xd0 = 0x4000000042100000;
        dVar5 = in_dr0;
      }
      if (cVar10 == '\0') {
        fVar7 = (float)((ulonglong)dVar5 >> 0x20) + SUB84(dVar5,0);
        dVar5 = (double)CONCAT44(fVar7,SUB84(dVar5,0));
        bVar9 = (float)((ulonglong)in_dr2 >> 0x20) < fVar7;
      }
      else {
        dVar5 = dVar5 + dVar5;
        bVar9 = in_dr2 < dVar5;
      }
      if (bVar9) {
        if (cVar11 == '\0') {
          dVar5 = (double)CONCAT44(0x42100000,SUB84(dVar5,0));
        }
        else {
          dVar5 = 2.0000004922039807;
        }
        if (cVar10 == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                     SUB84(in_dr14,0) + (float)((ulonglong)dVar5 >> 0x20));
        }
        else {
          in_dr14 = in_dr14 + dVar5;
        }
        if (cVar11 == '\0') {
          dVar5 = (double)CONCAT44(uStack_1c,SUB84(dVar5,0));
        }
        else {
          dVar5 = (double)CONCAT44(uStack_18,uStack_1c);
        }
        if (cVar10 == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                     SUB84(in_dr14,0) - (float)((ulonglong)dVar5 >> 0x20));
        }
        else {
          in_dr14 = in_dr14 - dVar5;
        }
        if (cVar11 == '\0') {
          dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),SUB84(dVar5,0));
        }
        else {
          dVar5 = *(double *)(ar4 + 8);
        }
        if (cVar10 == '\0') {
          fVar7 = SUB84(in_dr14,0) + (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar7 = SUB84(in_dr14 + dVar5,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 8) = fVar7;
        }
        else {
          *(double *)(ar4 + 8) = in_dr0;
        }
      }
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(uStack_20,SUB84(in_dr2,0));
      dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar5 = (double)CONCAT44(uStack_1c,uStack_20);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20)
      ;
    }
    else {
      bVar9 = dVar5 < dVar6 * dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(uStack_20,fVar7);
      }
      else {
        dVar6 = (double)CONCAT44(uStack_1c,uStack_20);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),fVar7);
      }
      else {
        dVar6 = *(double *)(ar4 + 4);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar11 == '\0') {
        *(float *)(ar4 + 4) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 4) = in_xd0;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)ar5[3],SUB84(dVar5,0));
      dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)ar5[3];
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      fVar7 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
    }
    else {
      fVar7 = SUB84(dVar6 * dVar6,0);
      dVar5 = dVar5 - dVar6 * dVar6;
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(uStack_20,fVar7);
    }
    else {
      dVar6 = (double)CONCAT44(uStack_1c,uStack_20);
    }
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)dVar5 >> 0x20) < (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar9 = dVar5 < dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)ar5[3],SUB84(dVar5,0));
        dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar5 = *(double *)ar5[3];
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar8 = (float)((ulonglong)dVar6 >> 0x20);
        fVar7 = SUB84(dVar6,0) * fVar8;
        dVar6 = (double)CONCAT44(fVar8,fVar7);
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
      }
      else {
        dVar6 = dVar6 * dVar6;
        dVar5 = dVar5 - dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),uStack_20);
      }
      else {
        in_xd0 = CONCAT44(uStack_1c,uStack_20);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),fVar7);
      }
      else {
        dVar6 = *(double *)(ar4 + 4);
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar6,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (cVar11 == '\0') {
        *(int *)(ar4 + 4) = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(ar4 + 4) = dVar6;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar5[3] + 4),SUB84(dVar5,0));
      dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)(ar5[3] + 4);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      fVar7 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
    }
    else {
      fVar7 = SUB84(dVar6 * dVar6,0);
      dVar5 = dVar5 - dVar6 * dVar6;
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(uStack_1c,fVar7);
    }
    else {
      dVar6 = (double)CONCAT44(uStack_18,uStack_1c);
    }
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)dVar5 >> 0x20) < (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar9 = dVar5 < dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar5[3] + 4),SUB84(dVar5,0));
        dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar5 = *(double *)(ar5[3] + 4);
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar8 = (float)((ulonglong)dVar6 >> 0x20);
        fVar7 = SUB84(dVar6,0) * fVar8;
        dVar6 = (double)CONCAT44(fVar8,fVar7);
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
      }
      else {
        dVar6 = dVar6 * dVar6;
        dVar5 = dVar5 - dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),uStack_1c);
      }
      else {
        in_xd0 = CONCAT44(uStack_18,uStack_1c);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),fVar7);
      }
      else {
        dVar6 = *(double *)(ar4 + 8);
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar6,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (cVar11 == '\0') {
        *(int *)(ar4 + 8) = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(ar4 + 8) = dVar6;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(uStack_18,SUB84(dVar5,0));
      dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar5 = (double)CONCAT44(uStack_14,uStack_18);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20)
      ;
    }
    else {
      bVar9 = dVar5 < dVar6 * dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(uStack_18,fVar7);
      }
      else {
        dVar6 = (double)CONCAT44(uStack_14,uStack_18);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xc),fVar7);
      }
      else {
        dVar6 = *(double *)(ar4 + 0xc);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar11 == '\0') {
        *(float *)(ar4 + 0xc) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0xc) = in_xd0;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar5[3] + 8),SUB84(dVar5,0));
      dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)(ar5[3] + 8);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      fVar7 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
    }
    else {
      fVar7 = SUB84(dVar6 * dVar6,0);
      dVar5 = dVar5 - dVar6 * dVar6;
    }
    if (cVar11 == '\0') {
      in_dr0 = (double)CONCAT44(uStack_18,fVar7);
    }
    else {
      in_dr0 = (double)CONCAT44(uStack_14,uStack_18);
    }
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)dVar5 >> 0x20) < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar9 = dVar5 < in_dr0;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar5[3] + 8),SUB84(dVar5,0));
        dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar5 = *(double *)(ar5[3] + 8);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar8 = (float)((ulonglong)dVar6 >> 0x20);
        fVar7 = SUB84(dVar6,0) * fVar8;
        dVar6 = (double)CONCAT44(fVar8,fVar7);
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
      }
      else {
        dVar6 = dVar6 * dVar6;
        dVar5 = dVar5 - dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),uStack_18);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar6,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xc),fVar7);
      }
      else {
        in_dr0 = *(double *)(ar4 + 0xc);
      }
      if (cVar10 == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) - SUB84(in_dr0,0),
                                  SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 - in_dr0;
      }
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0xc) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0xc) = in_dr0;
      }
    }
    iVar4 = -1;
    Vec3_dtor(&uStack_20,0xffffffff,ar6,ar7);
  }
  iVar2 = *(int *)(ar4 + 0x314);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    case 0:
      Vec3_add(*(undefined4 *)ar5[1],ar4 + 4,ar6,ar7,auStack_128);
      Vec3_assign(ar4 + 0x224,auStack_128,ar6,ar7);
      Vec3_dtor(auStack_128,0xffffffff,ar6,ar7);
      iVar4 = *(int *)(ar5[1] + 4);
      vec3_copy_8c023d8c(ar4 + 0x234,iVar4,ar6,ar7);
      break;
    case 2:
      FUN_8c023aa0(ar4 + 0x224,ar4 + 0x304,ar6,ar7);
      FUN_8c023bf4(ar4 + 0x304,&DAT_8c13ba94,ar6,ar7);
      (**(code **)(*(int *)ar5[6] + 0x128))((int *)ar5[6],ar4 + 0x224,ar6,ar7);
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x228));
      }
      iVar4 = ar4 + 0x228;
      if (cVar10 != '\0' || SUB84(in_dr0,0) <= (float)((ulonglong)in_dr0 >> 0x20)) {
        (**(code **)(*(int *)ar5[6] + 0x128))((int *)ar5[6],ar4 + 0x224,ar6,ar7);
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x228) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x228) = in_dr0;
        }
        *(int *)(ar4 + 0x314) = *(int *)(ar4 + 0x314) + 1;
        iVar4 = ar4;
      }
      break;
    case 3:
      *(undefined4 *)(ar4 + 0x220) = 1;
      *(int *)(ar4 + 0x314) = *(int *)(ar4 + 0x314) + 1;
      iVar4 = ar4;
    }
  }
  vec3_clear(ar4 + 0x13c,iVar4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x1d4) = 0;
  return 0x1d4;
}


