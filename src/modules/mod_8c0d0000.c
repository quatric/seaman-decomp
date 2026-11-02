/* Seaman (USA) region 0x8c0d0000-0x8c0e0000 (Ghidra decompiler) */

/* FUN_8c0d0178 @ 8c0d0178 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0178(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 auStack_c [2];
  
  if (*DAT_8c0d02a8 == '\0') {
    *DAT_8c0d02ac = 5;
    *DAT_8c0d02a8 = '\x01';
  }
  iVar1 = *(int *)(ar4 + 0x28);
  if (iVar1 == 0) {
    if (*(int *)(ar4 + 0x14) == 1) {
      auStack_c[0] = (*(code *)PTR_FUN_8c0d02b4)(DAT_8c0d02b0,ar5,ar6,ar7);
      ar6 = 9;
      (*(code *)PTR_FUN_8c0d02b8)(DAT_8c0d02b0,auStack_c[0],9,ar7);
      ar5 = auStack_c;
      (*(code *)PTR_FUN_8c0d02bc)(DAT_8c0d02b0,ar5,ar6,ar7);
      *(undefined2 *)(ar4 + 0x2c) = 0;
      *(undefined4 *)(ar4 + 0x28) = 1;
    }
  }
  else if (iVar1 == 1) {
    *(short *)(ar4 + 0x2c) = *(short *)(ar4 + 0x2c) + 1;
    if (*DAT_8c0d02ac <= (int)*(short *)(ar4 + 0x2c)) {
      *(undefined2 *)(ar4 + 0x2c) = 0;
      *(undefined4 *)(ar4 + 0x28) = 2;
    }
    if (*(int *)(ar4 + 0x14) == 0) {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(ar4 + 0x34) == -1) {
      uVar2 = (*(code *)PTR_FUN_8c0d02b4)(DAT_8c0d02b0,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x34) = uVar2;
      ar6 = 10;
      ar5 = *(undefined4 **)(ar4 + 0x34);
      (*(code *)PTR_FUN_8c0d02b8)(DAT_8c0d02b0,ar5,10,ar7);
    }
    if ((*(int *)(ar4 + 0x14) == 0) && (*(int *)(ar4 + 0x34) != -1)) {
      (*(code *)PTR_FUN_8c0d02c0)(DAT_8c0d02b0,*(undefined4 *)(ar4 + 0x34),ar6,ar7);
      ar5 = (undefined4 *)(ar4 + 0x34);
      (*(code *)PTR_FUN_8c0d02bc)(DAT_8c0d02b0,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x34) = 0xffffffff;
      *(undefined4 *)(ar4 + 0x28) = 3;
    }
  }
  else if (iVar1 == 3) {
    auStack_c[0] = (*(code *)PTR_FUN_8c0d02b4)(DAT_8c0d02b0,ar5,ar6,ar7);
    ar6 = 0xb;
    (*(code *)PTR_FUN_8c0d02b8)(DAT_8c0d02b0,auStack_c[0],0xb,ar7);
    ar5 = auStack_c;
    (*(code *)PTR_FUN_8c0d02bc)(DAT_8c0d02b0,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x28) = 0;
  }
  uVar2 = (*(code *)PTR_FUN_8c0d02c4)(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c0d02c8 @ 8c0d02c8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d03f4) */
/* WARNING: Removing unreachable block (ram,0x8c0d03ee) */
/* WARNING: Removing unreachable block (ram,0x8c0d03dc) */
/* WARNING: Removing unreachable block (ram,0x8c0d0344) */
/* WARNING: Removing unreachable block (ram,0x8c0d033c) */
/* WARNING: Removing unreachable block (ram,0x8c0d032e) */
/* WARNING: Removing unreachable block (ram,0x8c0d0322) */
/* WARNING: Removing unreachable block (ram,0x8c0d0318) */
/* WARNING: Removing unreachable block (ram,0x8c0d0314) */
/* WARNING: Removing unreachable block (ram,0x8c0d02f8) */
/* WARNING: Removing unreachable block (ram,0x8c0d02e0) */
/* WARNING: Removing unreachable block (ram,0x8c0d02de) */
/* WARNING: Removing unreachable block (ram,0x8c0d02f6) */
/* WARNING: Removing unreachable block (ram,0x8c0d0310) */
/* WARNING: Removing unreachable block (ram,0x8c0d0316) */
/* WARNING: Removing unreachable block (ram,0x8c0d031e) */
/* WARNING: Removing unreachable block (ram,0x8c0d0324) */
/* WARNING: Removing unreachable block (ram,0x8c0d0330) */
/* WARNING: Removing unreachable block (ram,0x8c0d0342) */
/* WARNING: Removing unreachable block (ram,0x8c0d0346) */
/* WARNING: Removing unreachable block (ram,0x8c0d03e0) */
/* WARNING: Removing unreachable block (ram,0x8c0d03f2) */
/* WARNING: Removing unreachable block (ram,0x8c0d03f6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0d02c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  float fVar6;
  ulonglong uVar5;
  double in_xd0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  if (DAT_8c4374b4 == '\0') {
    _DAT_8c4374b0 = 3.0525032e-05;
    DAT_8c4374b4 = '\x01';
  }
  if (DAT_8c4374bc == '\0') {
    _DAT_8c4374b8 = 0.015873017;
    DAT_8c4374bc = '\x01';
  }
  if (*(int *)(ar4 + 0x14) == 1) {
    *(float *)(ar4 + 0x10) = *(float *)(ar4 + 0x10) + _DAT_8c4374b0;
    if (_DAT_8c4374b8 < *(float *)(ar4 + 0x10)) {
      *(float *)(ar4 + 0x10) = _DAT_8c4374b8;
    }
    fVar3 = *(float *)(ar4 + 0xc) + *(float *)(ar4 + 0x10);
    uVar5 = (ulonglong)(uint)fVar3;
    *(float *)(ar4 + 0xc) = fVar3;
    iVar1 = libgcc_divide_helper_01031c((int)*(short *)(ar4 + 0x18),3,ar6,ar7);
    if (iVar1 == 0) {
      *(char *)(ar4 + 0x1b) = *(char *)(ar4 + 0x1b) + -1;
      *(char *)(ar4 + 0x1a) = *(char *)(ar4 + 0x1a) + -1;
      if (*(byte *)(ar4 + 0x1b) < 0x82) {
        *(undefined1 *)(ar4 + 0x1a) = 0x82;
        *(undefined1 *)(ar4 + 0x1b) = 0x82;
      }
    }
    iVar1 = libgcc_divide_helper_01031c((int)*(short *)(ar4 + 0x18),2,ar6,ar7);
    if (iVar1 == 0) {
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x24) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x24) = CONCAT44(0x3f800000,(int)uVar5);
      }
    }
    else if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0x24) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x24) = uVar5 & 0xffffffff;
    }
  }
  else {
    if (*(float *)(ar4 + 0x10) <= 0.0) {
      iVar1 = libgcc_divide_helper_01031c((int)*(short *)(ar4 + 0x18),2,ar6,ar7);
      if (iVar1 == 0) {
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x10) = 0xb8aec33e;
        }
        else {
          *(undefined8 *)(ar4 + 0x10) = 0xffb8aec33e;
        }
      }
    }
    else {
      *(float *)(ar4 + 0x10) = *(float *)(ar4 + 0x10) - 8.333333e-05;
    }
    pdVar2 = (double *)(ar4 + 0xc);
    if (cVar8 != '\0') {
      in_xd0 = *pdVar2;
      pdVar2 = (double *)(ar4 + 0x10);
    }
    dVar4 = *pdVar2;
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0xc) = fVar3;
    }
    else {
      *(double *)(ar4 + 0xc) = in_xd0;
    }
    iVar1 = libgcc_divide_helper_01031c((int)*(short *)(ar4 + 0x18),3,ar6,ar7);
    if ((iVar1 == 0) && (*(char *)(ar4 + 0x1b) != -1)) {
      *(char *)(ar4 + 0x1b) = *(char *)(ar4 + 0x1b) + '\x01';
      *(char *)(ar4 + 0x1a) = *(char *)(ar4 + 0x1a) + '\x01';
    }
  }
  if (cVar8 == '\0') {
    fVar3 = *(float *)(ar4 + 0xc);
    fVar6 = 35.0;
  }
  else {
    fVar3 = 35.0;
    fVar6 = 1.1546207e-19;
  }
  if (cVar7 != '\0' || fVar3 <= fVar6) {
    if (cVar8 == '\0') {
      fVar3 = *(float *)(ar4 + 0xc);
    }
    if (cVar7 == '\0' && fVar3 < 0.0) {
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x10) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x10) = (ulonglong)(uint)fVar3;
      }
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0xc) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xc) = (ulonglong)(uint)fVar3;
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      uVar5 = CONCAT44(0x420c0000,fVar3);
      *(undefined4 *)(ar4 + 0xc) = 0x420c0000;
    }
    else {
      uVar5 = 0x20085045420c0000;
      *(undefined8 *)(ar4 + 0xc) = 0x20085045420c0000;
    }
    if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0x10) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x10) = uVar5 & 0xffffffff;
    }
  }
  **(uint **)(ar4 + 0x20) =
       (uint)*(byte *)(ar4 + 0x1d) << 0x18 | (uint)*(byte *)(ar4 + 0x1c) << 0x10 |
       (uint)*(byte *)(ar4 + 0x1b) << 8 | (uint)*(byte *)(ar4 + 0x1a);
  iVar1 = *(short *)(ar4 + 0x18) + 1;
  *(short *)(ar4 + 0x18) = (short)iVar1;
  return iVar1;
}



/* FUN_8c0d0538 @ 8c0d0538 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d0538(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((*(int *)(ar4 + 0x14) == 0) && (ar5 == 1)) {
    iVar1 = 0x48;
    *(undefined4 *)(ar4 + 0x48) = 1;
  }
  else {
    iVar1 = *(int *)(ar4 + 0x14);
    if ((iVar1 == 1) && (ar5 == 0)) {
      iVar1 = 0x48;
      *(undefined4 *)(ar4 + 0x48) = 2;
    }
  }
  *(int *)(ar4 + 0x14) = ar5;
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



/* FUN_8c0d063c @ 8c0d063c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d063c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}



/* FUN_8c0d064c @ 8c0d064c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d064c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x34) != -1) {
    (*(code *)PTR_FUN_8c0d0684)(DAT_8c0d0680,*(undefined4 *)(ar4 + 0x34),ar6,ar7);
    (*(code *)PTR_FUN_8c0d0688)(DAT_8c0d0680,ar4 + 0x34,ar6,ar7);
    *(undefined4 *)(ar4 + 0x34) = 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}



/* s_Failed_to_set_texture_wrap_0d068c @ 8c0d068c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_Failed_to_set_texture_wrap_0d068c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d06a4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* s_Failed_wrap_0d06a8 @ 8c0d06a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_wrap_0d06a8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0d06c0)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d06c4 @ 8c0d06c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d06c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x34);
  if (iVar1 != -1) {
    iVar1 = (*(code *)PTR_FUN_8c0d06e8)(DAT_8c0d06e4,*(undefined4 *)(ar4 + 0x34),ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c0d06ec @ 8c0d06ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d06ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x34);
  if (iVar1 != -1) {
    iVar1 = (*(code *)PTR_FUN_8c0d0710)(DAT_8c0d070c,*(undefined4 *)(ar4 + 0x34),10,ar7);
  }
  return iVar1;
}



/* FUN_8c0d0714 @ 8c0d0714 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0714(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}



/* FUN_8c0d0720 @ 8c0d0720 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d0726) */
/* WARNING: Removing unreachable block (ram,0x8c0d072e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0720(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined2 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined2 *)(ar4 + 0x2c) = 0;
  *(undefined1 *)(ar4 + 0x1d) = 0xff;
  *(undefined1 *)(ar4 + 0x1c) = 0xff;
  *(undefined1 *)(ar4 + 0x1b) = 0xff;
  *(undefined1 *)(ar4 + 0x1a) = 0xff;
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}



/* s_GRAPHICS_ENV_0d076c @ 8c0d0768 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d076c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d07ac)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0d07a8 + 0x10,PTR_s_GRAPHICS_COMMON_8c0d07a8 + 0x21,ar4);
  uVar1 = (*(code *)PTR_FUN_8c0d07b0)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d07a8 + 0x10,PTR_s_GRAPHICS_COMMON_8c0d07a8 + 0x21
                     ,ar4);
  return uVar1;
}



/* FUN_8c0d07b4 @ 8c0d07b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d07b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0d07e0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d07e4)(ar4 + 8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d07e8)(ar4,ar5,ar6,ar7);
  return ar4;
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



/* FUN_8c0d08c0 @ 8c0d08c0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d08fc) */
/* WARNING: Removing unreachable block (ram,0x8c0d08f2) */
/* WARNING: Removing unreachable block (ram,0x8c0d08ec) */
/* WARNING: Removing unreachable block (ram,0x8c0d08e4) */
/* WARNING: Removing unreachable block (ram,0x8c0d08d6) */
/* WARNING: Removing unreachable block (ram,0x8c0d08c0) */
/* WARNING: Removing unreachable block (ram,0x8c0d08c6) */
/* WARNING: Removing unreachable block (ram,0x8c0d08e2) */
/* WARNING: Removing unreachable block (ram,0x8c0d08e6) */
/* WARNING: Removing unreachable block (ram,0x8c0d08f0) */
/* WARNING: Removing unreachable block (ram,0x8c0d08fa) */
/* WARNING: Removing unreachable block (ram,0x8c0d0900) */
/* WARNING: Unknown calling convention */

undefined * FUN_8c0d08c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  float fVar2;
  
  fVar2 = 5e-05;
  puVar1 = (undefined *)0x0;
  if (*(int *)(ar4 + 0x18) != 0) {
    if (*(int *)(ar4 + 0x14) == 1) {
      fVar2 = 0.05;
    }
    *(float *)(ar4 + 0xc) = *(float *)(ar4 + 0xc) + fVar2;
    puVar1 = &DAT_8c0d090c;
    if (100.0 < *(float *)(ar4 + 0xc)) {
      puVar1 = &DAT_8c0d090c;
      *(undefined4 *)(ar4 + 0xc) = 0x42c80000;
    }
  }
  return puVar1;
}



/* FUN_8c0d0910 @ 8c0d0910 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0910(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d0928)(ar4,ar5,ar6,ar7);
  return uVar1;
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



/* noop_0d09f4 @ 8c0d09f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d09f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0d09f8 @ 8c0d09f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d09f8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* s_Failed_to_set_texture_wrap_0d09fc @ 8c0d09fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_Failed_to_set_texture_wrap_0d09fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d0a14)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* s_Failed_wrap_0d0a18 @ 8c0d0a18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_wrap_0d0a18(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0d0a30)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* noop_0d0a34 @ 8c0d0a34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d0a34(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0d0a38 @ 8c0d0a38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d0a38(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0d0a3c @ 8c0d0a3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0a3c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x14) = ar5;
  return in_r0;
}



/* FUN_8c0d0a44 @ 8c0d0a44 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d0a74) */
/* WARNING: Removing unreachable block (ram,0x8c0d0a66) */
/* WARNING: Removing unreachable block (ram,0x8c0d0a5e) */
/* WARNING: Removing unreachable block (ram,0x8c0d0a50) */
/* WARNING: Removing unreachable block (ram,0x8c0d0a48) */
/* WARNING: Removing unreachable block (ram,0x8c0d0a4a) */
/* WARNING: Removing unreachable block (ram,0x8c0d0a5c) */
/* WARNING: Removing unreachable block (ram,0x8c0d0a60) */
/* WARNING: Removing unreachable block (ram,0x8c0d0a6a) */
/* WARNING: Removing unreachable block (ram,0x8c0d0a78) */
/* WARNING: Unknown calling convention */

int FUN_8c0d0a44(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 in_dr4;
  float fVar1;
  
  fVar1 = (float)((ulonglong)in_dr4 >> 0x20);
  if (0.00016666666 < fVar1) {
    fVar1 = 0.00016666666;
  }
  *(float *)(ar4 + 0xc) = *(float *)(ar4 + 0xc) - fVar1;
  if (*(float *)(ar4 + 0xc) <= 0.0) {
    *(undefined4 *)(ar4 + 0xc) = 0;
  }
  return ar4 + 0xc;
}



/* FUN_8c0d0a84 @ 8c0d0a84 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d0a90) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0a84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  uVar1 = FUN_8c0d0aac(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d0aac @ 8c0d0aac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0aac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x18) = 1;
  return 1;
}



/* FUN_8c0d0ab4 @ 8c0d0ab4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d0ab6) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0ab4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x70) = in_fr4;
  return ain0;
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



/* FUN_8c0d0b04 @ 8c0d0b04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0b04(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d0b48)(ar4,ar5,ar6,ar7);
  if (DAT_8c0d0b4c < *(uint *)(ar4 + 0x40)) {
    uVar1 = 0x40;
    *(int *)(ar4 + 0x40) = *(int *)(ar4 + 0x40) - DAT_8c0d0b50;
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c0d0b54)(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0d0b58 @ 8c0d0b58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d0b58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  
  (*(code *)PTR_FUN_8c0d0ba4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d0ba8)(ar4 + 8,ar5,ar6,ar7);
  ar5_00 = PTR_FUN_8c0d0bb8;
  ar6_00 = PTR_FUN_8c0d0bb4;
  ar7_00 = DAT_8c0d0bb0;
  (*(code *)PTR_FUN_8c0d0bbc)(ar4 + 0xc,PTR_FUN_8c0d0bb8,PTR_FUN_8c0d0bb4,DAT_8c0d0bb0,DAT_8c0d0bac)
  ;
  (*(code *)PTR_FUN_8c0d0bc4)(ar4 + DAT_8c0d0bc0,ar5_00,ar6_00,ar7_00);
  (*(code *)PTR_FUN_8c0d0bc8)(ar4,ar5_00,ar6_00,ar7_00);
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



/* FUN_8c0d0d0c @ 8c0d0d0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0d0c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x68) = 1;
  *(undefined1 *)(ar4 + 0x78) = (undefined1)ar5;
  return 0x78;
}



/* FUN_8c0d0d1c @ 8c0d0d1c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d0f2c) */
/* WARNING: Removing unreachable block (ram,0x8c0d0d4a) */
/* WARNING: Removing unreachable block (ram,0x8c0d0ee6) */
/* WARNING: Removing unreachable block (ram,0x8c0d0e6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0d1c(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  ulonglong in_xd0;
  char cVar11;
  char cVar12;
  undefined8 uStack_54;
  ulonglong uStack_38;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uStack_c = 0;
  if (DAT_8c4374c4 == '\0') {
    _DAT_8c4374c0 = 10;
    DAT_8c4374c4 = '\x01';
  }
  if (DAT_8c4374d4 == '\0') {
    uVar2 = Vec3_ctor_xyz(0x8c4374d8,ar5,ar6,ar7);
    ar6 = 0x8c4374c8;
    ar5 = Vec3_dtor;
    global_list_push(uVar2,Vec3_dtor,0x8c4374c8,ar7);
    DAT_8c4374d4 = '\x01';
  }
  Vec3_ctor_zero(auStack_20,ar5,ar6,ar7);
  uStack_38 = (ulonglong)(uint)uStack_38;
  iVar3 = *(int *)(ar4 + 0xeb60);
  if (iVar3 == 0) {
    if (*(int *)(ar4 + 0xeb44) == 1) {
      *(undefined2 *)(ar4 + 0xeb64) = 0;
      *(undefined4 *)(ar4 + 0xeb60) = 2;
    }
  }
  else if (iVar3 == 2) {
    if (*(int *)(ar4 + 0xeb4c) == -1) {
      uVar2 = FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0xeb4c) = uVar2;
      ar6 = 5;
      ar5 = *(code **)(ar4 + 0xeb4c);
      FUN_8c021994(0x8c2b59d0,ar5,5,ar7);
    }
    if ((*(int *)(ar4 + 0xeb44) == 0) && (*(int *)(ar4 + 0xeb4c) != -1)) {
      FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(ar4 + 0xeb4c),ar6,ar7);
      ar5 = (code *)(ar4 + 0xeb4c);
      FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0xeb4c) = 0xffffffff;
      *(undefined4 *)(ar4 + 0xeb60) = 3;
    }
  }
  else if (iVar3 == 3) {
    *(undefined4 *)(ar4 + 0xeb60) = 0;
  }
  if (*(int *)(ar4 + 0xeb44) == 1) {
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x41800000,*(undefined4 *)(ar4 + 0xeb38));
    }
    else {
      in_xd0 = *(ulonglong *)(ar4 + 0xeb38);
      dVar9 = 1.4411521620789166e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 + dVar9,0);
    }
    uStack_54 = in_xd0;
    if (cVar12 == '\0') {
      uStack_54 = CONCAT44(ar4,fVar8);
    }
    if (cVar12 == '\0') {
      *(float *)(uStack_54._4_4_ + 0xeb38) = (float)uStack_54;
      fVar10 = 360.0;
      fVar8 = (float)uStack_54;
    }
    else {
      *(ulonglong *)(uStack_54._4_4_ + 0xeb38) = uStack_54;
      fVar8 = 360.0;
      fVar10 = 2.41023e-43;
      in_xd0 = uStack_54;
    }
    if (cVar11 == '\0' && fVar10 < fVar8) {
      if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44(0x43b40000,*(undefined4 *)(ar4 + 0xeb38));
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + 0xeb38);
        dVar9 = 3.65544470367453e-312;
      }
      if (cVar11 == '\0') {
        fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0xeb38) = fVar8;
      }
      else {
        *(ulonglong *)(ar4 + 0xeb38) = in_xd0;
      }
    }
  }
  if (*(int *)(ar4 + 0xeb44) == 1) {
    iVar3 = 0;
    for (iVar7 = 0; iVar7 < 0x15e; iVar7 = iVar7 + 1) {
      iVar4 = get_field_100_0d1058(ar4 + iVar7 * 0xac + 0xc,ar5,ar6,ar7);
      iVar5 = iVar3;
      if (iVar4 != 1) {
        FUN_8c014be4(ar4 + iVar7 * 0xac + 0xc,0x2f999999,ar6,ar7);
        uVar2 = 0x8c4374d8;
        puVar6 = auStack_20;
        Vec3_assign(puVar6,0x8c4374d8,ar6,ar7);
        rand(puVar6,uVar2,ar6,ar7);
        FUN_8c023668(auStack_20,uVar2,ar6,ar7,auStack_30);
        uVar2 = 0xffffffff;
        puVar6 = auStack_30;
        Vec3_dtor(puVar6,0xffffffff,ar6,ar7);
        iVar5 = rand(puVar6,uVar2,ar6,ar7);
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(0x47000000,(float)iVar5);
        }
        else {
          dVar9 = 134217763.5;
        }
        if (cVar11 == '\0') {
          fVar8 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 / dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(0x41300000,fVar8);
        }
        else {
          dVar9 = 67108880.296875;
        }
        if (cVar11 == '\0') {
          fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(0x41900000,fVar8);
        }
        else {
          dVar9 = -7.9586651841963e-251;
        }
        if (cVar11 == '\0') {
          fVar8 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 + dVar9,0);
        }
        uVar1 = in_xd0;
        if (cVar12 == '\0') {
          uStack_38 = CONCAT44(uStack_38._4_4_,fVar8);
          uVar1 = uStack_38;
        }
        uStack_38 = uVar1;
        ar5 = (code *)&uStack_38;
        FUN_8c023bf4(auStack_20,ar5,ar6,ar7);
        FUN_8c014e38(ar4 + iVar7 * 0xac + 0xc,ar5,ar6,ar7);
        iVar5 = iVar3 + 1;
        if (7 < iVar3 + 1) break;
      }
      iVar3 = iVar5;
    }
  }
  FUN_8c0d1060(ar4,ar5,ar6,ar7);
  uVar2 = Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
  return uVar2;
}



/* get_field_100_0d1058 @ 8c0d1058 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_100_0d1058(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 100);
}



/* FUN_8c0d1060 @ 8c0d1060 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d10cc) */
/* WARNING: Removing unreachable block (ram,0x8c0d10c0) */
/* WARNING: Removing unreachable block (ram,0x8c0d10bc) */
/* WARNING: Removing unreachable block (ram,0x8c0d10a4) */
/* WARNING: Removing unreachable block (ram,0x8c0d1096) */
/* WARNING: Removing unreachable block (ram,0x8c0d1090) */
/* WARNING: Removing unreachable block (ram,0x8c0d1086) */
/* WARNING: Removing unreachable block (ram,0x8c0d1080) */
/* WARNING: Removing unreachable block (ram,0x8c0d1084) */
/* WARNING: Removing unreachable block (ram,0x8c0d1088) */
/* WARNING: Removing unreachable block (ram,0x8c0d1094) */
/* WARNING: Removing unreachable block (ram,0x8c0d10a2) */
/* WARNING: Removing unreachable block (ram,0x8c0d10b8) */
/* WARNING: Removing unreachable block (ram,0x8c0d10be) */
/* WARNING: Removing unreachable block (ram,0x8c0d10c8) */
/* WARNING: Removing unreachable block (ram,0x8c0d10d8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1060(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *a4;
  int iVar2;
  
  if (*(int *)(ar4 + 0xeb44) == 1) {
    *(float *)(ar4 + 0xeb40) = *(float *)(ar4 + 0xeb40) + 0.05;
    if (100.0 < *(float *)(ar4 + 0xeb40)) {
      *(undefined4 *)(ar4 + 0xeb40) = 0x42c80000;
    }
  }
  else {
    *(float *)(ar4 + 0xeb40) = *(float *)(ar4 + 0xeb40) - 0.00027777778;
    if (*(float *)(ar4 + 0xeb40) < 0.0) {
      *(undefined4 *)(ar4 + 0xeb40) = 0;
    }
  }
  for (iVar2 = 0; iVar2 < 0x15e; iVar2 = iVar2 + 1) {
    iVar1 = get_field_100_0d1058(ar4 + iVar2 * 0xac + 0xc,ar5,ar6,ar7);
    if (iVar1 == 1) {
      a4 = (int *)(ar4 + iVar2 * 0xac + 0xc);
      (**(code **)(*a4 + 8))(a4,ar5,ar6,ar7);
    }
  }
  *(short *)(ar4 + 0xeb64) = *(short *)(ar4 + 0xeb64) + 1;
  return 0xeb64;
}



/* FUN_8c0d1168 @ 8c0d1168 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1168(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *a4;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar4;
  float fVar5;
  float fVar7;
  double dVar6;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  undefined4 in_stack_ffffff30;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [68];
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  cVar9 = '\0';
  cVar8 = '\0';
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  uStack_4c = CONCAT44(DAT_8c13d420,DAT_8c13d41c);
  fStack_44 = DAT_8c13d424;
  fStack_40 = DAT_8c13d428;
  uStack_3c = DAT_8c13d42c;
  fStack_38 = DAT_8c13d430;
  fStack_34 = DAT_8c13d434;
  uStack_30 = DAT_8c13d438;
  fStack_2c = DAT_8c13d43c;
  fStack_28 = DAT_8c13d440;
  uStack_24 = DAT_8c13d444;
  fStack_20 = DAT_8c13d448;
  uStack_5c = DAT_8c13d44c;
  uStack_58 = DAT_8c13d450;
  uStack_54 = DAT_8c13d454;
  uStack_50 = DAT_8c13d458;
  ar7_00 = 4;
  FUN_8c01642c(auStack_b0,&uStack_4c,&uStack_5c,4);
  uStack_6c = 0;
  uStack_6a = 0;
  uStack_68 = 0;
  uStack_66 = 0x7f;
  uStack_64 = 0x7f;
  uStack_62 = 0x7f;
  uStack_60 = 0x7f;
  uStack_5e = 0;
  ar6_00 = 4;
  FUN_8c0164c8(auStack_b0,&uStack_6c,4,ar7_00);
  ar5_00 = 0x80000060;
  FUN_8c0d1450(auStack_b0,0x80000060,ar6_00,ar7_00,in_stack_ffffff30);
  uVar3 = 0;
  FUN_8c256328(0,ar5_00,ar6_00,ar7_00,in_stack_ffffff30);
  FUN_8c019058(uVar3,ar5_00,ar6_00,ar7_00);
  FUN_8c01538c(ar4,ar5_00,ar6_00,ar7_00);
  FUN_8c015af8(ar4 + 8,ar5_00,ar6_00,ar7_00);
  FUN_8c256210(1,ar5_00,ar6_00,ar7_00);
  for (iVar4 = 0; iVar4 < 0x15e; iVar4 = iVar4 + 1) {
    iVar2 = get_field_100_0d1058(ar4 + iVar4 * 0xac + 0xc,ar5_00,ar6_00,ar7_00);
    if (iVar2 == 1) {
      a4 = (int *)(ar4 + iVar4 * 0xac + 0xc);
      (**(code **)(*a4 + 0x10))(a4,ar5_00,ar6_00,ar7_00);
      FUN_8c014eac(ar4 + iVar4 * 0xac + 0xc,ar5_00,ar6_00,ar7_00,auStack_c0);
      Vec3_assign(&fStack_1c,auStack_c0,ar6_00,ar7_00);
      ar5_00 = 0xffffffff;
      Vec3_dtor(auStack_c0,0xffffffff,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        fVar7 = 200.0;
        fVar5 = fStack_18;
      }
      else {
        in_xd0 = CONCAT44(fStack_14,fStack_18);
        fVar5 = 200.0;
        fVar7 = 1500.0;
      }
      if (cVar8 != '\0' || fVar5 <= fVar7) {
        if (cVar9 == '\0') {
          fVar7 = 1500.0;
          fVar5 = fStack_1c;
        }
        else {
          in_xd0 = CONCAT44(fStack_18,fStack_1c);
          fVar5 = 1500.0;
          fVar7 = 2.63444e-43;
        }
        if (cVar8 == '\0' && fVar7 < fVar5) {
          if (cVar9 == '\0') {
            fVar7 = 800.0;
            fVar5 = fStack_14;
          }
          else {
            in_xd0 = CONCAT44(uStack_10,fStack_14);
            fVar5 = 800.0;
            fVar7 = 12.0;
          }
          if (cVar8 == '\0' && fVar7 < fVar5) {
            if (cVar9 == '\0') {
              dVar6 = (double)CONCAT44(0x41400000,fStack_1c);
            }
            else {
              in_xd0 = CONCAT44(fStack_18,fStack_1c);
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fVar5 = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 == '\0') {
              uStack_4c = CONCAT44(uStack_4c._4_4_,fVar5);
              dVar6 = (double)CONCAT44(0x41400000,fStack_14);
              uVar1 = in_xd0;
            }
            else {
              uVar1 = CONCAT44(uStack_10,fStack_14);
              dVar6 = 2.97620270990453e-312;
              uStack_4c = in_xd0;
            }
            if (cVar8 == '\0') {
              fStack_44 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fStack_44 = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = (double)CONCAT44(0x41400000,fStack_1c);
            }
            else {
              fStack_44 = (float)uVar1;
              uVar1 = CONCAT44(fStack_18,fStack_1c);
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fStack_40 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fStack_40 = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = (double)CONCAT44(0x41400000,fStack_14);
            }
            else {
              fStack_40 = (float)uVar1;
              uStack_3c = (undefined4)((ulonglong)uVar1 >> 0x20);
              uVar1 = CONCAT44(uStack_10,fStack_14);
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fStack_38 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fStack_38 = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = (double)CONCAT44(0x41400000,fStack_1c);
            }
            else {
              fStack_38 = (float)uVar1;
              uVar1 = CONCAT44(fStack_18,fStack_1c);
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fStack_34 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fStack_34 = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = (double)CONCAT44(0x41400000,fStack_14);
            }
            else {
              fStack_34 = (float)uVar1;
              uStack_30 = (undefined4)((ulonglong)uVar1 >> 0x20);
              uVar1 = CONCAT44(uStack_10,fStack_14);
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fStack_2c = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fStack_2c = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = (double)CONCAT44(0x41400000,fStack_1c);
            }
            else {
              fStack_2c = (float)uVar1;
              uVar1 = CONCAT44(fStack_18,fStack_1c);
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fStack_28 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fStack_28 = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = (double)CONCAT44(0x41400000,fStack_14);
              in_xd0 = uVar1;
            }
            else {
              fStack_28 = (float)uVar1;
              uStack_24 = (undefined4)((ulonglong)uVar1 >> 0x20);
              in_xd0 = CONCAT44(uStack_10,fStack_14);
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fStack_20 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
            }
            else {
              fStack_20 = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 != '\0') {
              fStack_20 = (float)in_xd0;
              fStack_1c = (float)((ulonglong)in_xd0 >> 0x20);
            }
            FUN_8c01538c(ar4,ar5_00,ar6_00,ar7_00);
            ar5_00 = 1;
            FUN_8c014a94(ar4,1,ar6_00,ar7_00);
            FUN_8c016524(auStack_b0,ar5_00,ar6_00,ar7_00);
          }
        }
      }
    }
  }
  uVar3 = Vec3_dtor(&fStack_1c,0xffffffff,ar6_00,ar7_00);
  return uVar3;
}



/* FUN_8c0d1450 @ 8c0d1450 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1450(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x14) = ar5;
  return in_r0;
}



/* FUN_8c0d1458 @ 8c0d1458 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d1458(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0d1464;
  *(undefined4 *)(DAT_8c0d1464 + ar4) = 0;
  return iVar1;
}



/* FUN_8c0d1468 @ 8c0d1468 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d1468(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_8c0d14a0 + ar4);
  if (iVar1 != -1) {
    (*(code *)PTR_FUN_8c0d14a8)(DAT_8c0d14a4,*(undefined4 *)(DAT_8c0d14a0 + ar4),ar6,ar7);
    (*(code *)PTR_FUN_8c0d14ac)(DAT_8c0d14a4,ar4 + DAT_8c0d14a0,ar6,ar7);
    iVar1 = DAT_8c0d14a0;
    *(undefined4 *)(DAT_8c0d14a0 + ar4) = 0xffffffff;
  }
  return iVar1;
}



/* s_Failed_to_set_texture_wrap_0d14b0 @ 8c0d14b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_Failed_to_set_texture_wrap_0d14b0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d14c8)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* s_Failed_wrap_0d14cc @ 8c0d14cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_wrap_0d14cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0d14e4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d14e8 @ 8c0d14e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d14e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_8c0d150c + ar4);
  if (iVar1 != -1) {
    iVar1 = (*(code *)PTR_FUN_8c0d1514)(DAT_8c0d1510,*(undefined4 *)(DAT_8c0d150c + ar4),ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c0d1518 @ 8c0d1518 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d1518(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_8c0d153c + ar4);
  if (iVar1 != -1) {
    iVar1 = (*(code *)PTR_FUN_8c0d1544)(DAT_8c0d1540,*(undefined4 *)(DAT_8c0d153c + ar4),5,ar7);
  }
  return iVar1;
}



/* FUN_8c0d1548 @ 8c0d1548 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1548(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d1560)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d1564 @ 8c0d1564 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d1588) */
/* WARNING: Removing unreachable block (ram,0x8c0d157c) */
/* WARNING: Removing unreachable block (ram,0x8c0d156c) */
/* WARNING: Removing unreachable block (ram,0x8c0d157e) */
/* WARNING: Removing unreachable block (ram,0x8c0d1592) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1564(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0xeb40) = 0;
  *(undefined4 *)(ar4 + 0xeb44) = 0;
  *(undefined4 *)(ar4 + 0xeb34) = 0x40a00000;
  *(undefined4 *)(ar4 + 0xeb38) = 0;
  *(undefined4 *)(ar4 + 0xeb3c) = 0;
  *(undefined4 *)(ar4 + 0xeb60) = 0;
  *(undefined2 *)(ar4 + 0xeb64) = 0;
  return 0xeb64;
}



/* FUN_8c0d15c4 @ 8c0d15c4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d15c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126430,ar5,ar6,ar7);
  uVar3 = 0x8c437478;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c437478,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126440,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437484;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c437484,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126450,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437490;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c437490,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126460,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c43749c,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126470 = CONCAT44(_UNK_8c126474,0x800000);
                    /* WARNING: Read-only address (ram,0x8c126474) is written */
  }
  else {
    _DAT_8c126470 = 0xffffffff00800000;
  }
  return 0x8c125864;
}



/* FUN_8c0d167c @ 8c0d167c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d167c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *ar5_00;
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [68];
  
  uVar1 = ar5;
  (*(code *)PTR_FUN_8c0d1734)(auStack_48,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d1734)(auStack_88,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0d1738)(auStack_48,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0d1738)(auStack_88,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0d173c)(auStack_48,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0d1740)(auStack_88,uVar1,ar6,ar7);
  ar5_00 = auStack_88;
  (*(code *)PTR_FUN_8c0d1744)(auStack_48,ar5_00,ar6,ar7);
  (*(code *)PTR_FUN_8c0d1738)(auStack_88,ar5_00,ar6,ar7);
  (*(code *)PTR_FUN_8c0d1748)(auStack_88,ar5_00,ar6,ar7);
  (*(code *)PTR_FUN_8c0d1744)(auStack_48,auStack_88,ar6,ar7);
  (*(code *)PTR_FUN_8c0d174c)(auStack_48,ar5,ar4,ar7);
  (*(code *)PTR_free_if_nonnull_wrap_023e4c_8c0d1750)(auStack_88,0xffffffff,ar4,ar7);
  uVar1 = (*(code *)PTR_free_if_nonnull_wrap_023e4c_8c0d1750)(auStack_48,0xffffffff,ar4,ar7);
  return uVar1;
}



/* FUN_8c0d1754 @ 8c0d1754 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1754(float *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float in_PR;
  char cVar5;
  char cVar6;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  cVar6 = '\0';
  cVar5 = '\0';
  fStack_10 = in_PR;
  FUN_8c256294(0,ar5,&fStack_20,ar7);
  FUN_8c256294(0,ar5,&fStack_18,ar7);
  for (iVar2 = 1; iVar2 < 8; iVar2 = iVar2 + 1) {
    FUN_8c256294(0,iVar2 * 0xc + ar5,&fStack_28,ar7);
    fVar3 = fStack_20;
    fVar4 = fStack_1c;
    if (cVar6 == '\0') {
      fVar3 = fStack_28;
      fVar4 = fStack_20;
    }
    if (cVar5 != '\0' || fVar4 <= fVar3) {
      fVar3 = fStack_18;
      fVar4 = fStack_14;
      if (cVar6 == '\0') {
        fVar3 = fStack_28;
        fVar4 = fStack_18;
      }
      if (cVar5 == '\0' && fVar4 < fVar3) {
        if (cVar6 == '\0') {
          fStack_18 = fStack_28;
        }
        else {
          fStack_18 = fStack_28;
          fStack_14 = fStack_24;
        }
      }
    }
    else {
      if (cVar6 != '\0') {
        fStack_1c = fStack_24;
      }
      fStack_20 = fStack_28;
    }
    fVar3 = fStack_1c;
    fVar4 = fStack_18;
    if (cVar6 == '\0') {
      fVar3 = fStack_24;
      fVar4 = fStack_1c;
    }
    if (cVar5 != '\0' || fVar4 <= fVar3) {
      fVar3 = fStack_14;
      fVar4 = fStack_10;
      if (cVar6 == '\0') {
        fVar3 = fStack_24;
        fVar4 = fStack_14;
      }
      if (cVar5 == '\0' && fVar4 < fVar3) {
        if (cVar6 == '\0') {
          fStack_14 = fStack_24;
        }
        else {
          fStack_14 = fStack_24;
          fStack_10 = fStack_20;
        }
      }
    }
    else {
      if (cVar6 != '\0') {
        fStack_18 = fStack_20;
      }
      fStack_1c = fStack_24;
    }
  }
  fVar3 = fStack_20;
  fVar4 = fStack_1c;
  if (cVar6 == '\0') {
    fVar3 = *ar4;
    fVar4 = fStack_20;
  }
  if (cVar5 != '\0' || fVar4 <= fVar3) {
    fVar3 = fStack_18;
    fVar4 = fStack_14;
    if (cVar6 == '\0') {
      fVar3 = *ar4;
      fVar4 = fStack_18;
    }
    if (cVar5 != '\0' || fVar3 <= fVar4) {
      fVar3 = fStack_1c;
      if (cVar6 == '\0') {
        fVar3 = ar4[1];
        fStack_18 = fStack_1c;
      }
      if (cVar5 != '\0' || fStack_18 <= fVar3) {
        fVar3 = fStack_14;
        if (cVar6 == '\0') {
          fVar3 = ar4[1];
          fStack_10 = fStack_14;
        }
        if (cVar5 != '\0' || fVar3 <= fStack_10) {
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
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c0d1858 @ 8c0d1858 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1858(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 in_fr1;
  double dVar4;
  undefined8 in_dr4;
  float in_fr15;
  float fVar5;
  undefined4 in_fr14;
  undefined8 in_xd14;
  bool bVar6;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 auStack_3c [3];
  undefined1 auStack_2f [39];
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
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = (float)((ulonglong)in_dr4 >> 0x20);
    dVar4 = (double)CONCAT44(*(undefined4 *)ar4,in_fr1);
    in_dr4 = in_xd14;
  }
  else {
    dVar4 = *ar4;
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)ar4 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(puVar2 + -0x2c) = DAT_8c0d19a0;
      ar5 = DAT_8c0d19a0;
      ar6 = DAT_8c0d19a4;
      ar7 = DAT_8c0d19a4;
      (*(code *)PTR_FUN_8c0d19ac)
                (DAT_8c0d19a8,DAT_8c0d19a0,DAT_8c0d19a4,DAT_8c0d19a4,*(undefined4 *)(puVar2 + -0x2c)
                );
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[1];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0xc),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)ar4 + 0xc);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(puVar2 + -0x2c) = DAT_8c0d19a0;
      ar5 = DAT_8c0d19a0;
      ar6 = DAT_8c0d19b0;
      ar7 = DAT_8c0d19b0;
      (*(code *)PTR_FUN_8c0d19ac)
                (DAT_8c0d19a8,DAT_8c0d19a0,DAT_8c0d19b0,DAT_8c0d19b0,*(undefined4 *)(puVar2 + -0x2c)
                );
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 2),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[2];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x14),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)ar4 + 0x14);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(puVar2 + -0x2c) = DAT_8c0d19a0;
      ar5 = DAT_8c0d19a0;
      ar6 = DAT_8c0d19b4;
      ar7 = DAT_8c0d19b4;
      (*(code *)PTR_FUN_8c0d19ac)
                (DAT_8c0d19a8,DAT_8c0d19a0,DAT_8c0d19b4,DAT_8c0d19b4,*(undefined4 *)(puVar2 + -0x2c)
                );
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 3),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[3];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x1c),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)ar4 + 0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(puVar2 + -0x2c) = DAT_8c0d19a0;
      ar5 = DAT_8c0d19a0;
      ar6 = DAT_8c0d19b0;
      ar7 = DAT_8c0d19b0;
      (*(code *)PTR_FUN_8c0d19ac)
                (DAT_8c0d19a8,DAT_8c0d19a0,DAT_8c0d19b0,DAT_8c0d19b0,*(undefined4 *)(puVar2 + -0x2c)
                );
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[4];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x24),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)ar4 + 0x24);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = (float)((ulonglong)dVar4 >> 0x20) < in_fr15;
    }
    else {
      bVar6 = dVar4 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (!bVar6) {
      *(undefined4 *)(puVar2 + -0x2c) = DAT_8c0d19a0;
      ar5 = DAT_8c0d19a0;
      ar6 = DAT_8c0d19a4;
      ar7 = DAT_8c0d19a4;
      (*(code *)PTR_FUN_8c0d19ac)
                (DAT_8c0d19a8,DAT_8c0d19a0,DAT_8c0d19a4,DAT_8c0d19a4,*(undefined4 *)(puVar2 + -0x2c)
                );
    }
  }
LAB_8c0d1936:
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c0d19b8,SUB84(dVar4,0));
  }
  else {
    dVar4 = (double)CONCAT44(DAT_8c0d19bc,DAT_8c0d19b8);
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
  }
  fVar5 = in_fr15;
  if ((!bVar6) && (fVar5 = DAT_8c0d19bc, in_FPSCR_SZ != '\0')) {
    in_dr4 = CONCAT44(PTR_s_GRAPHICS_COMMON_8c0d19c0,DAT_8c0d19bc);
    fVar5 = in_fr15;
  }
  if (in_FPSCR_SZ == '\0') {
    puVar3 = (undefined4 *)(puVar2 + -0x2c);
    *(float *)(puVar2 + -0x2c) = fVar5;
  }
  else {
    puVar3 = (undefined4 *)(puVar2 + -0x30);
    *(undefined8 *)(puVar2 + -0x30) = in_dr4;
  }
  puVar3[-1] = PTR_s_GRAPHICS_COMMON_8c0d19c0 + DAT_8c0d19c4;
  (*(code *)PTR_FUN_8c0d19c8)(puVar3 + 1,ar5,ar6,ar7,puVar3[-1]);
  *(undefined1 *)((int)puVar3 + 9) = 0;
  *puVar3 = 0x1c;
  (*(code *)PTR_FUN_8c0d19d8)(DAT_8c0d19a8,puVar3 + 1,0,0xe);
  *puVar3 = 0xffffffff;
  uVar1 = (*(code *)PTR_FUN_8c0d19ac)(DAT_8c0d19a8,0xffffffff,0xffffffff,0xffffffff,*puVar3);
  return uVar1;
}



/* FUN_8c0d19dc @ 8c0d19dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d19dc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int a5;
  int a6;
  
  a5 = ar4;
  a6 = ar5;
  a4 = s_Shell_0fef9c(0x8c3eb324,ar4,ar5,ar7);
  if (a4 != 0) {
    if ((ar4 < 0x10) && (-1 < ar4)) {
                    /* WARNING: Switch is manually overridden */
      switch(ar4) {
      default:
        a6 = 0;
        a5 = -0x73c14ccc;
        (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4,0x8c3eb334,0,ar7);
        break;
      case 3:
        break;
      }
    }
    if ((ar4 == 3) && (ar5 == 2)) {
      a6 = 0;
      a5 = -0x73c14ccc;
      (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4,0x8c3eb334,0,ar7);
    }
    else if ((ar4 == 3) && (ar5 == 3)) {
      a6 = 3;
      a5 = -0x73c14ccc;
      (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4,0x8c3eb334,3,ar7);
    }
    else if ((ar4 == 3) && (ar5 == 4)) {
      a6 = 6;
      a5 = -0x73c14ccc;
      (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4,0x8c3eb334,6,ar7);
    }
    else if ((ar4 == 5) && (ar5 == 6)) {
      a6 = 0;
      a5 = -0x73c14ccc;
      (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4,0x8c3eb334,0,ar7);
    }
    else if ((ar4 == 5) && (ar5 == 7)) {
      a6 = 3;
      a5 = -0x73c14ccc;
      (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4,0x8c3eb334,3,ar7);
    }
    else if ((ar4 == 10) && (ar5 == 0x11)) {
      a6 = 0;
      a5 = -0x73c14ccc;
      (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4,0x8c3eb334,0,ar7);
    }
    else if ((ar4 == 10) && (ar5 == 0x13)) {
      a6 = 3;
      a5 = -0x73c14ccc;
      (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4,0x8c3eb334,3,ar7);
    }
    (**(code **)(*(int *)(a4 + 8) + 0x5c))(a4,a5,a6,ar7);
  }
  return a4;
}



/* FUN_8c0d1b90 @ 8c0d1b90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1b90(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    a5 = ar5;
    (*(code *)PTR_get_field_24_05c284_8c0d1bfc)(*ar4,ar5,ar6,ar7);
    if (ar5 == 1) {
      uVar1 = (**(code **)(DAT_8c0d1c00 + *(int *)(*ar4 + 8)))(*ar4,a5,ar6,ar7);
      ar6 = (int)(short)uVar1;
      (**(code **)(DAT_8c0d1c08 + *(int *)(*ar4 + 8)))(*ar4,DAT_8c0d1c04,ar6,ar7);
    }
    (**(code **)(*(int *)(*ar4 + 8) + 0x58))(*ar4,DAT_8c0d1c0c,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c0d1c10)(DAT_8c0d1c0c,ar4,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0d1c14 @ 8c0d1c14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c0d1c14(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_8c0d1c1c;
  *DAT_8c0d1c1c = (undefined1)ar4;
  return puVar1;
}



/* FUN_8c0d1c20 @ 8c0d1c20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c0d1c20(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  *DAT_8c0d1c30 = ar4;
  *DAT_8c0d1c34 = ar5;
  puVar1 = DAT_8c0d1c38;
  *DAT_8c0d1c38 = (undefined1)ar6;
  return puVar1;
}



/* FUN_8c0d1c3c @ 8c0d1c3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1c3c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *DAT_8c0d1c70 = 1;
  if ((*DAT_8c0d1c74 == '\0') || (*DAT_8c0d1c74 == '\x01')) {
    (*(code *)PTR_FUN_8c0d1c78)(ar4,ar5,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_thunk_FUN_8c20a1d0_8c0d1c80)(DAT_8c0d1c7c,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d1c84 @ 8c0d1c84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d1c84(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *a4;
  uint a5;
  
  if (*DAT_8c0d1d24 == '\0') {
    *DAT_8c0d1d28 = 0;
    *DAT_8c0d1d24 = '\x01';
  }
  iVar1 = 0;
  if ((*DAT_8c0d1d2c != 0) && (iVar1 = 0, *DAT_8c0d1d30 != 0)) {
    (*(code *)PTR_FUN_8c0d1d3c)(DAT_8c0d1d38,ar5,ar6,ar7);
    do {
    } while (*DAT_8c0d1d40 != 1);
    if (*DAT_8c0d1d28 < 1) {
      iVar1 = *DAT_8c0d1d28 + 1;
      *DAT_8c0d1d28 = iVar1;
    }
    else {
      a5 = (uint)*DAT_8c0d1d44;
      a4 = (int *)*DAT_8c0d1d2c;
      (**(code **)(DAT_8c0d1d48 + *a4))(a4,a5,ar6,ar7);
      (*(code *)PTR_FUN_8c0d1d4c)(a4,a5,ar6,ar7);
      (**(code **)(DAT_8c0d1d50 + *(int *)*DAT_8c0d1d30))
                ((int *)*DAT_8c0d1d30,(uint)*DAT_8c0d1d44,ar6,ar7);
      *DAT_8c0d1d2c = 0;
      *DAT_8c0d1d30 = 0;
      iVar1 = 0;
      *DAT_8c0d1d28 = 0;
    }
  }
  return iVar1;
}



/* FUN_8c0d1d54 @ 8c0d1d54 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d1dfc) */
/* WARNING: Removing unreachable block (ram,0x8c0d1df0) */
/* WARNING: Removing unreachable block (ram,0x8c0d1de4) */
/* WARNING: Removing unreachable block (ram,0x8c0d1dd8) */
/* WARNING: Removing unreachable block (ram,0x8c0d1dcc) */
/* WARNING: Removing unreachable block (ram,0x8c0d1dc0) */
/* WARNING: Removing unreachable block (ram,0x8c0d1db4) */
/* WARNING: Removing unreachable block (ram,0x8c0d1da8) */
/* WARNING: Removing unreachable block (ram,0x8c0d1d9c) */
/* WARNING: Removing unreachable block (ram,0x8c0d1d70) */
/* WARNING: Removing unreachable block (ram,0x8c0d1d66) */
/* WARNING: Removing unreachable block (ram,0x8c0d1d7a) */
/* WARNING: Removing unreachable block (ram,0x8c0d1d9e) */
/* WARNING: Removing unreachable block (ram,0x8c0d1daa) */
/* WARNING: Removing unreachable block (ram,0x8c0d1db6) */
/* WARNING: Removing unreachable block (ram,0x8c0d1dc2) */
/* WARNING: Removing unreachable block (ram,0x8c0d1dce) */
/* WARNING: Removing unreachable block (ram,0x8c0d1dda) */
/* WARNING: Removing unreachable block (ram,0x8c0d1de6) */
/* WARNING: Removing unreachable block (ram,0x8c0d1df2) */
/* WARNING: Removing unreachable block (ram,0x8c0d1dfe) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1d54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(ar4 + 0x1a0) = 0;
  *(undefined4 *)(ar4 + 0x1b0) = 0;
  *(undefined4 *)(ar4 + 0x1a4) = 0;
  *(undefined1 *)(ar4 + 0x1b4) = 1;
  *(undefined4 *)(ar4 + 0x1b8) = 0;
  *(undefined4 *)(ar4 + 0x1a8) = 0;
  *(undefined4 *)(ar4 + 0x1ac) = 0;
  *(undefined4 *)(ar4 + 0x1bc) = 0x446a56b8;
  *(undefined4 *)(ar4 + 0x1c0) = 0x43340000;
  *(undefined4 *)(ar4 + 0x1c4) = 0x43557405;
  *(undefined4 *)(ar4 + 0x1cc) = 0x4475f20c;
  *(undefined4 *)(ar4 + 0x1d0) = 0x43340000;
  *(undefined4 *)(ar4 + 0x1d4) = 0x44390b33;
  *(undefined4 *)(ar4 + 0x1dc) = 0x440a7a8f;
  *(undefined4 *)(ar4 + 0x1e0) = 0x43340000;
  *(undefined4 *)(ar4 + 0x1e4) = 0x44406fa8;
  for (iVar2 = 0; iVar2 < 0x14; iVar2 = iVar2 + 1) {
    ar6 = 0xf0;
    ar5 = 0x8c437b48;
    FUN_8c013fb4(iVar2 * 0xf0 + ar4 + 0x1ec,0x8c437b48,0xf0,ar7);
  }
  uVar1 = s_Nautilus_0ae6a4(ar4 + 0x1ec,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d1eb8 @ 8c0d1eb8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d1eca) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1eb8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(ar4 + 0x14bc) = 0;
  *(undefined1 *)(ar4 + 0x14c0) = 0;
  *(undefined4 *)(ar4 + 0x14b4) = 1;
  *(undefined4 *)(ar4 + 0x14b8) = 1;
  for (iVar1 = 0; iVar1 < 0x14; iVar1 = iVar1 + 1) {
    FUN_8c013fb4(iVar1 * 0xf0 + ar4 + 0x14c4,0x8c437b48,0xf0,ar7);
  }
  return 0x14;
}



/* FUN_8c0d1f38 @ 8c0d1f38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1f38(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined1 *)(DAT_8c0d1f88 + ar4) = 0;
  *(undefined4 *)(DAT_8c0d1f8c + ar4) = 0;
  for (iVar1 = 0; iVar1 < 10; iVar1 = iVar1 + 1) {
    (*(code *)PTR_FUN_8c0d1f9c)(iVar1 * 0xf0 + ar4 + DAT_8c0d1f98,DAT_8c0d1f94,DAT_8c0d1f90,ar7);
  }
  return 10;
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



/* FUN_8c0d2028 @ 8c0d2028 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d2028(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d2048)(DAT_8c0d2044,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d204c)(DAT_8c0d2044,0,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d2050 @ 8c0d2050 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d2050(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_Vec3_ctor_zero_8c0d20ac)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d20b0)(ar4 + 0x10,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    *(undefined4 *)(ar4 + iVar1 * 4 + 0x2c) = 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x3c) = 3;
  (*(code *)PTR_FUN_8c0d20b4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d20b8)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0d20bc @ 8c0d20bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d20bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c08a9b8(ar4 + 0x10,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x1c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x1c) = CONCAT44(0x3f800000,extraout_fr1);
  }
  *(undefined2 *)(ar4 + 0x24) = 0;
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x40) = 0;
  return 0x40;
}



/* FUN_8c0d20f0 @ 8c0d20f0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d2174) */
/* WARNING: Removing unreachable block (ram,0x8c0d216e) */
/* WARNING: Removing unreachable block (ram,0x8c0d2160) */
/* WARNING: Removing unreachable block (ram,0x8c0d215a) */
/* WARNING: Removing unreachable block (ram,0x8c0d214c) */
/* WARNING: Removing unreachable block (ram,0x8c0d2146) */
/* WARNING: Removing unreachable block (ram,0x8c0d2132) */
/* WARNING: Removing unreachable block (ram,0x8c0d2126) */
/* WARNING: Removing unreachable block (ram,0x8c0d2118) */
/* WARNING: Removing unreachable block (ram,0x8c0d2112) */
/* WARNING: Removing unreachable block (ram,0x8c0d2104) */
/* WARNING: Removing unreachable block (ram,0x8c0d2100) */
/* WARNING: Removing unreachable block (ram,0x8c0d2108) */
/* WARNING: Removing unreachable block (ram,0x8c0d2114) */
/* WARNING: Removing unreachable block (ram,0x8c0d211c) */
/* WARNING: Removing unreachable block (ram,0x8c0d2128) */
/* WARNING: Removing unreachable block (ram,0x8c0d2134) */
/* WARNING: Removing unreachable block (ram,0x8c0d214a) */
/* WARNING: Removing unreachable block (ram,0x8c0d214e) */
/* WARNING: Removing unreachable block (ram,0x8c0d215e) */
/* WARNING: Removing unreachable block (ram,0x8c0d2162) */
/* WARNING: Removing unreachable block (ram,0x8c0d2172) */
/* WARNING: Removing unreachable block (ram,0x8c0d2176) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d20f0(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x18) = in_fr4;
  *(undefined4 *)(ar4 + 0x14) = in_fr4;
  *(undefined4 *)(ar4 + 0x10) = in_fr4;
  if (ar6 == 4) {
    *(float *)(ar4 + 0x10) = *(float *)(ar4 + 0x10) * 1.5;
    *(float *)(ar4 + 0x14) = *(float *)(ar4 + 0x14) * 1.5;
    *(float *)(ar4 + 0x18) = *(float *)(ar4 + 0x18) * 1.5;
  }
  FUN_8c0d25a0(ar4,ar5,ar6,ar7);
  *(undefined2 *)(ar4 + 0x24) = 0;
  *(undefined4 *)(ar4 + 0x28) = ar5;
  *(int *)(ar4 + 0x3c) = ar6;
  return ar5;
}



/* FUN_8c0d21a0 @ 8c0d21a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0d21a0(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined8 uStack_18;
  
  cVar7 = '\0';
  cVar6 = '\0';
  if ((ar5 & 1) == 0) {
    *(short *)(ar4 + 0x24) = *(short *)(ar4 + 0x24) + 1;
  }
  if (*(short *)(ar4 + 0x24) == 0x14) {
    FUN_8c0d20bc(ar4,ar5,ar6,ar7);
  }
  if (((*(int *)(ar4 + 0x3c) == 3) ||
      (puVar1 = *(undefined8 **)(ar4 + 0x3c), puVar1 == (undefined8 *)0x4)) &&
     (puVar1 = (undefined8 *)0x8, 7 < *(short *)(ar4 + 0x24))) {
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(0x3c03126f,*(undefined4 *)(ar4 + 0x20));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x20);
      dVar4 = 5.238690687974987e-11;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    pdVar2 = (double *)(ar4 + 0x20);
    if (cVar7 == '\0') {
      *(float *)(ar4 + 0x20) = fVar3;
      pdVar2 = (double *)(ar4 + 0x1c);
    }
    else {
      *(undefined8 *)(ar4 + 0x20) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x1c);
    }
    dVar4 = *pdVar2;
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    uStack_18 = in_xd0;
    if (cVar7 == '\0') {
      uStack_18 = CONCAT44(ar4,fVar3);
    }
    if (cVar7 == '\0') {
      *(float *)(uStack_18._4_4_ + 0x1c) = (float)uStack_18;
      fVar5 = 0.1;
      fVar3 = (float)uStack_18;
    }
    else {
      *(undefined8 *)(uStack_18._4_4_ + 0x1c) = uStack_18;
      fVar3 = 0.1;
      fVar5 = 3.8960407e-10;
      in_xd0 = uStack_18;
    }
    if (cVar6 == '\0' && fVar3 < fVar5) {
      if (cVar7 == '\0') {
        *(undefined4 *)(ar4 + 0x1c) = 0x3dcccccd;
      }
      else {
        *(undefined8 *)(ar4 + 0x1c) = 0x2fd62fe63dcccccd;
      }
    }
    puVar1 = (undefined8 *)(ar4 + 0x14);
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1c),*(undefined4 *)puVar1);
    }
    else {
      in_xd0 = *puVar1;
      dVar4 = *(double *)(ar4 + 0x1c);
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      *(float *)(ar4 + 0x14) = fVar3;
    }
    else {
      *(undefined8 *)(ar4 + 0x14) = in_xd0;
    }
  }
  return puVar1;
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



/* FUN_8c0d25a0 @ 8c0d25a0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d25a6) */
/* WARNING: Removing unreachable block (ram,0x8c0d25ac) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d25a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x1c) = 0x3f800000;
  *(undefined4 *)(ar4 + 0x20) = 0;
  return (undefined4 *)(ar4 + 0x1c);
}



/* FUN_8c0d25b4 @ 8c0d25b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d25b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_ctor_zero_8c0d2608)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0d2608)(ar4 + 0x18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0d2608)(ar4 + 0x28,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d260c)(ar4 + 0x48,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d2610)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d2614)(ar4 + 0x48,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d2618)(ar4 + 0x48,ar5,ar6,ar7);
  return ar4;
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



/* FUN_8c0d267c @ 8c0d267c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0d267c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(uint *)(ar4 + 0x28) | 2;
  *(uint *)(ar4 + 0x28) = uVar1;
  return uVar1;
}



/* FUN_8c0d2690 @ 8c0d2690 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d2690(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d26a8)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d26ac @ 8c0d26ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d26ac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d26e8)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d26ec)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d26f0 @ 8c0d26f0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d2704) */
/* WARNING: Removing unreachable block (ram,0x8c0d2732) */
/* WARNING: Unknown calling convention */

undefined * FUN_8c0d26f0(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  float *ar4_00;
  float fVar2;
  double dVar3;
  undefined8 in_xd0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar4_00 = ar4;
  iVar1 = rand(ar4,ar5,ar6,ar7);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar3 = 4294968432.0;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 / dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x41f00000,fVar2);
  }
  else {
    dVar3 = 1.1916598991585905e+22;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x44843000,fVar2);
  }
  else {
    dVar3 = 6473925613858816.0;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    *ar4 = fVar2;
    ar4[1] = 183.0;
  }
  else {
    *(undefined8 *)ar4 = in_xd0;
    ar4[1] = 183.0;
    ar4[2] = 711.0;
  }
  iVar1 = rand(ar4_00,ar5,ar6,ar7);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar3 = 4294968432.0;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 / dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x41f00000,fVar2);
  }
  else {
    dVar3 = 1.1916598991585905e+22;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x4431c000,fVar2);
  }
  else {
    dVar3 = -1.5729774353164037e+308;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    ar4[2] = fVar2;
  }
  else {
    *(undefined8 *)(ar4 + 2) = in_xd0;
  }
  return &DAT_8c0d2768;
}



/* FUN_8c0d276c @ 8c0d276c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d2884) */
/* WARNING: Removing unreachable block (ram,0x8c0d2790) */
/* WARNING: Removing unreachable block (ram,0x8c0d2780) */
/* WARNING: Removing unreachable block (ram,0x8c0d2772) */
/* WARNING: Removing unreachable block (ram,0x8c0d276e) */
/* WARNING: Removing unreachable block (ram,0x8c0d276c) */
/* WARNING: Removing unreachable block (ram,0x8c0d2770) */
/* WARNING: Removing unreachable block (ram,0x8c0d277c) */
/* WARNING: Removing unreachable block (ram,0x8c0d2782) */
/* WARNING: Removing unreachable block (ram,0x8c0d2842) */
/* WARNING: Removing unreachable block (ram,0x8c0d289e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d276c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 in_fr1;
  float fVar3;
  double dVar4;
  float fVar6;
  undefined1 *puVar7;
  double dVar5;
  undefined4 in_fr3;
  undefined4 uVar8;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined4 in_fr13;
  double dVar9;
  undefined4 uVar11;
  double dVar10;
  double in_xd0;
  double dVar12;
  double in_xd12;
  double in_xd14;
  bool bVar13;
  char cVar14;
  char cVar15;
  float fStack_2c;
  
  cVar15 = '\0';
  cVar14 = '\0';
  uVar11 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uVar8 = (undefined4)in_dr4;
  dVar9 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),in_fr13);
  iVar2 = ar4;
  iVar1 = rand(ar4,ar5,ar6,ar7);
  if (cVar15 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,in_fr1);
  }
  else {
    dVar4 = 0.1250000330619514;
  }
  if (cVar14 == '\0') {
    dVar10 = (double)CONCAT44(uVar11,(float)iVar1 / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    dVar10 = (double)CONCAT44(uVar11,(float)iVar1) / dVar4;
  }
  if (cVar15 == '\0') {
    dVar4 = (double)CONCAT44(0x3fc00000,SUB84(dVar4,0));
  }
  else {
    dVar4 = 1.3411048264966308e-08;
  }
  if (cVar14 == '\0') {
    bVar13 = (float)((ulonglong)dVar10 >> 0x20) < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar13 = dVar10 < dVar4;
  }
  fVar3 = SUB84(dVar10,0);
  if (bVar13) {
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x84) = 0x3f800000;
      dVar4 = (double)CONCAT44(0x41033333,fVar3);
    }
    else {
      *(undefined8 *)(ar4 + 0x84) = CONCAT44(0x3f800000,SUB84(dVar4,0));
      dVar4 = 512.000124001503;
      in_xd0 = in_xd14;
    }
    if (cVar14 == '\0') {
      fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar15 == '\0') {
      dVar4 = (double)CONCAT44(0x40800000,fVar3);
    }
    else {
      dVar4 = 2.80638087878186e-312;
    }
    if (cVar14 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar15 == '\0') {
      *(float *)(ar4 + 0x10) = fVar3;
    }
    else {
      *(double *)(ar4 + 0x10) = in_xd0;
    }
  }
  else {
    if (cVar15 == '\0') {
      dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),fVar3);
      fVar6 = 0.2;
    }
    else {
      fVar3 = 0.2;
      fVar6 = 0.3;
      in_xd0 = in_xd14;
      in_xd12 = in_xd14;
    }
    if (cVar14 == '\0' && fVar3 < fVar6) {
      if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),0x3e99999a);
      }
      else {
        in_xd12 = 157286.40556640626;
      }
    }
    if (cVar15 == '\0') {
      dVar4 = (double)CONCAT44(0x41033333,fVar3);
    }
    else {
      dVar4 = 512.000124001503;
    }
    if (cVar14 == '\0') {
      dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                               SUB84(dVar9,0) * (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      dVar9 = dVar9 * dVar4;
    }
    if (cVar15 == '\0') {
      dVar4 = (double)CONCAT44(0x40800000,SUB84(dVar4,0));
    }
    else {
      dVar4 = 2.80638087878186e-312;
    }
    if (cVar14 == '\0') {
      dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                               SUB84(dVar9,0) + (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      dVar9 = dVar9 + dVar4;
    }
    if (cVar15 == '\0') {
      *(int *)(ar4 + 0x10) = SUB84(dVar9,0);
      *(undefined4 *)(ar4 + 0x84) = 0x40400000;
    }
    else {
      *(double *)(ar4 + 0x10) = in_xd12;
      *(undefined8 *)(ar4 + 0x84) = 0x40b47ae140400000;
    }
  }
  if (cVar15 == '\0') {
    fVar3 = *(float *)(ar4 + 0x10);
    puVar7 = (undefined1 *)0x40b47ae1;
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x10);
    fVar3 = 5.64;
    puVar7 = &DAT_8c437c60;
  }
  if (cVar14 != '\0' || (float)puVar7 <= fVar3) {
    *(undefined4 *)(ar4 + 0x14) = 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x14) = 0;
  }
  iVar1 = rand(iVar2,ar5,ar6,ar7);
  if (cVar14 == '\0') {
    dVar4 = (double)CONCAT44((float)iVar1,in_fr3);
  }
  else {
    dVar4 = (double)iVar1;
  }
  if (cVar15 == '\0') {
    dVar5 = (double)CONCAT44(0x47000000,fVar3);
  }
  else {
    dVar5 = 0.1250000330619514;
  }
  fVar3 = (float)((ulonglong)dVar5 >> 0x20);
  if (cVar14 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) / fVar3,SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 / dVar5;
  }
  dVar12 = dVar9;
  if (cVar15 == '\0') {
    dVar5 = (double)CONCAT44(fVar3,(int)((ulonglong)dVar9 >> 0x20));
    dVar12 = in_xd0;
  }
  if (cVar14 == '\0') {
    fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar4,0);
  }
  if (cVar15 == '\0') {
    dVar4 = (double)CONCAT44(uVar8,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(fStack_2c,uVar8);
  }
  if (cVar14 == '\0') {
    _DAT_8c437c60 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    _DAT_8c437c60 = SUB84(dVar4 + dVar4,0);
  }
  if (cVar15 != '\0') {
    _DAT_8c437c60 = SUB84(dVar12,0);
    _DAT_8c437c64 = (undefined4)((ulonglong)dVar12 >> 0x20);
  }
  iVar2 = rand(iVar2,ar5,ar6,ar7);
  if (cVar15 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
  }
  else {
    dVar4 = 0.1250000330619514;
  }
  if (cVar14 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) * fVar3,SUB84(dVar9,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar9 = dVar9 * (dVar4 / dVar4);
  }
  if (cVar15 == '\0') {
    dVar4 = (double)CONCAT44(uVar8,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(fStack_2c,uVar8);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) + (float)((ulonglong)dVar4 >> 0x20),
                             SUB84(dVar9,0));
  }
  else {
    dVar9 = dVar9 + dVar4;
  }
  uVar11 = (undefined4)((ulonglong)dVar9 >> 0x20);
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x3e4ccccd,SUB84(dVar4,0));
    _DAT_8c437c64 = uVar11;
  }
  else {
    _DAT_8c437c64 = SUB84(dVar9,0);
    dVar9 = 3.8146987284548574e-07;
    _DAT_8c437c68 = uVar11;
  }
  if (cVar14 == '\0') {
    bVar13 = SUB84(dVar10,0) < (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    bVar13 = dVar10 < dVar9;
  }
  if (bVar13) {
    if (cVar15 == '\0') {
      _DAT_8c437c64 = 0;
      _DAT_8c437c60 = 0.0;
    }
    else {
      fStack_2c = SUB84(dVar9,0);
      _DAT_8c437c68 = 0;
      _DAT_8c437c60 = fStack_2c;
      _DAT_8c437c64 = 0;
    }
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x41f00000,_DAT_8c437c60);
  }
  else {
    dVar12 = (double)CONCAT44(_DAT_8c437c64,_DAT_8c437c60);
    dVar9 = -7.933197385572896e-251;
  }
  if (cVar14 == '\0') {
    fVar3 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x28) = -fVar3;
  }
  else {
    *(double *)(ar4 + 0x28) = dVar12;
  }
  if (cVar15 == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0;
    dVar9 = (double)CONCAT44(0x41f00000,_DAT_8c437c64);
  }
  else {
    *(ulonglong *)(ar4 + 0x2c) = (ulonglong)(uint)-fVar3;
    dVar12 = (double)CONCAT44(_DAT_8c437c68,_DAT_8c437c64);
    dVar9 = -7.933197385572896e-251;
  }
  if (cVar14 == '\0') {
    fVar3 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x30) = -fVar3;
  }
  else {
    *(double *)(ar4 + 0x30) = dVar12;
  }
  FUN_8c022d04(ar4 + 0x18,ar5,ar6,ar7);
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x3ee66666,*(undefined4 *)(ar4 + 0x10));
  }
  else {
    dVar12 = *(double *)(ar4 + 0x10);
    dVar9 = 1.1709360719622307e+17;
  }
  if (cVar14 == '\0') {
    fVar3 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x38) = fVar3;
    dVar9 = (double)CONCAT44(0x437a0000,fVar3);
  }
  else {
    *(double *)(ar4 + 0x38) = dVar12;
    dVar9 = 985162559995904.0;
  }
  if (cVar14 == '\0') {
    fVar3 = SUB84(dVar10,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar10 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x3c) = fVar3;
    dVar9 = (double)CONCAT44(0x430c0000,*(undefined4 *)(ar4 + 0x10));
  }
  else {
    *(double *)(ar4 + 0x3c) = in_xd14;
    dVar9 = 6.207226637267681e-78;
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) / SUB84(dVar9,0),SUB84(dVar9,0));
  }
  else {
    dVar9 = dVar9 / dVar9;
  }
  if (cVar15 == '\0') {
    *(int *)(ar4 + 0x40) = (int)((ulonglong)dVar9 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x40) = dVar9;
  }
  *(undefined4 *)(ar4 + 0x7c) = 0;
  return 0x7c;
}



/* FUN_8c0d294c @ 8c0d294c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d2a38) */
/* WARNING: Removing unreachable block (ram,0x8c0d2956) */
/* WARNING: Removing unreachable block (ram,0x8c0d294c) */
/* WARNING: Removing unreachable block (ram,0x8c0d2b26) */
/* WARNING: Removing unreachable block (ram,0x8c0d2a48) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d294c(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined1 *puVar3;
  float fVar4;
  double in_dr0;
  code *pcVar6;
  double dVar5;
  undefined8 in_dr4;
  float fVar7;
  undefined4 in_fr14;
  undefined8 in_xd14;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  fVar7 = (float)((ulonglong)in_dr4 >> 0x20);
  Vec3_ctor_zero(&uStack_1c,ar5,ar6,ar7);
  ar5_00 = ar4 + 0x18;
  puVar3 = ar4;
  FUN_8c023aa0(ar4,ar5_00,ar6,ar7);
  fVar4 = SUB84(in_dr0,0);
  iVar1 = *(int *)(ar4 + 0x74);
  if (iVar1 == 0) {
    puVar3 = ar4 + 0x28;
    FUN_8c023aa0(ar4 + 0x18,puVar3,ar6,ar7);
    if (cVar10 == '\0') {
      fVar4 = *(float *)(ar4 + 0x28);
    }
    if (cVar9 != '\0' || 0.0 <= fVar4) {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(ar4 + 0x28);
      }
      if (cVar9 == '\0' && 0.0 < fVar4) {
        if (cVar10 == '\0') {
          fVar4 = *(float *)(ar4 + 0x18);
        }
        if (cVar9 == '\0' && 0.0 < fVar4) {
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x18) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x18) = (ulonglong)(uint)fVar4;
          }
        }
      }
    }
    else {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(ar4 + 0x18);
      }
      if (cVar9 == '\0' && fVar4 < 0.0) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x18) = (ulonglong)(uint)fVar4;
        }
      }
    }
    if (cVar10 == '\0') {
      fVar4 = *(float *)(ar4 + 0x30);
    }
    if (cVar9 != '\0' || 0.0 <= fVar4) {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(ar4 + 0x30);
      }
      if (cVar9 == '\0' && 0.0 < fVar4) {
        if (cVar10 == '\0') {
          fVar4 = *(float *)(ar4 + 0x20);
        }
        if (cVar9 == '\0' && 0.0 < fVar4) {
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x20) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x20) = (ulonglong)(uint)fVar4;
          }
        }
      }
    }
    else {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(ar4 + 0x20);
      }
      if (cVar9 == '\0' && fVar4 < 0.0) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x20) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x20) = (ulonglong)(uint)fVar4;
        }
      }
    }
    if (cVar10 == '\0') {
      fVar4 = *(float *)(ar4 + 0x18);
    }
    in_dr0 = (double)(ulonglong)(uint)fVar4;
    if (fVar4 == 0.0) {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(ar4 + 0x20);
      }
      in_dr0 = (double)(ulonglong)(uint)fVar4;
      if (fVar4 == 0.0) {
        if (cVar10 == '\0') {
          in_dr0 = (double)CONCAT44(0x41126666,*(undefined4 *)(ar4 + 0x10));
        }
        else {
          in_dr0 = -7.947556305225132e-251;
        }
        if (cVar9 == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x18) = *(undefined4 *)(ar4 + 0x38);
            in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
          }
          else {
            *(undefined8 *)(ar4 + 0x18) = *(undefined8 *)(ar4 + 0x38);
            in_dr0 = *(double *)(ar4 + 0x40);
          }
          FUN_8c023570(ar4 + 0x18,puVar3,ar6,ar7,auStack_2c);
          Vec3_assign(ar4 + 0x18,auStack_2c,ar6,ar7);
          Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
        }
        *(undefined4 *)(ar4 + 0x74) = 1;
      }
    }
  }
  else if (iVar1 == 1) {
    if (cVar10 == '\0') {
      fVar4 = *(float *)(ar4 + 0x10);
      pcVar6 = (code *)0x41126666;
    }
    else {
      fVar4 = 9.15;
      pcVar6 = FUN_8c023570;
    }
    if (cVar9 == '\0' && fVar4 < (float)pcVar6) {
      FUN_8c023570(ar4 + 0x18,ar5_00,ar6,ar7,auStack_3c);
      Vec3_assign(ar4 + 0x18,auStack_3c,ar6,ar7);
      ar5_00 = (undefined1 *)0xffffffff;
      puVar3 = auStack_3c;
      Vec3_dtor(puVar3,0xffffffff,ar6,ar7);
    }
    if (cVar10 == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),fVar4);
    }
    else {
      in_dr0 = *(double *)(ar4 + 4);
    }
    if (cVar9 == '\0') {
      bVar8 = (float)((ulonglong)in_dr0 >> 0x20) < fVar7;
    }
    else {
      bVar8 = in_dr0 < (double)CONCAT44(in_fr14,fVar7);
    }
    if (!bVar8) {
      *(undefined4 *)(ar4 + 0x7c) = 0;
      iVar1 = rand(puVar3,ar5_00,ar6,ar7);
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x47000000,(float)iVar1);
      }
      else {
        dVar5 = 1099511918592.0;
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x42700000,fVar4);
      }
      else {
        dVar5 = 3.966050706335591e+20;
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        iVar1 = (int)fVar4;
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
        iVar1 = (int)(dVar5 * dVar5);
      }
      *(int *)(ar4 + 0x78) = iVar1 + 0xf;
      if (cVar10 != '\0') {
        fVar4 = 1072.5;
      }
      FUN_8c022d04(&uStack_1c,ar5_00,ar6,ar7);
      uVar2 = Vec3_length(&uStack_1c,ar5_00,ar6,ar7);
      Vec3_scale(uVar2,&DAT_8c13f478,ar6,ar7,auStack_4c);
      Vec3_assign(&uStack_1c,auStack_4c,ar6,ar7);
      Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
      if (cVar10 == '\0') {
        *(undefined4 *)(ar4 + 0x18) = uStack_1c;
        in_dr0 = (double)CONCAT44(uStack_14,fVar4);
        *(undefined4 *)(ar4 + 0x20) = uStack_14;
      }
      else {
        *(ulonglong *)(ar4 + 0x18) = CONCAT44(uStack_18,uStack_1c);
        in_dr0 = (double)CONCAT44(uStack_10,uStack_14);
        *(double *)(ar4 + 0x20) = in_dr0;
      }
      *(undefined4 *)(ar4 + 0x74) = 2;
    }
  }
  else if ((iVar1 == 2) && (*(int *)(ar4 + 0x78) < *(int *)(ar4 + 0x7c))) {
    FUN_8c0d2f14(ar4,ar5_00,ar6,ar7);
  }
  uVar2 = SUB84(in_dr0,0);
  *(int *)(ar4 + 0x7c) = *(int *)(ar4 + 0x7c) + 1;
  iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x7c),3,ar6,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = *(int *)(ar4 + 0x80), *(int *)(ar4 + 0x80) = iVar1 + 1, 3 < iVar1 + 1)) {
    *(undefined4 *)(ar4 + 0x80) = 0;
  }
  if (cVar10 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),uVar2);
  }
  else {
    dVar5 = *(double *)(ar4 + 4);
  }
  if (cVar9 == '\0') {
    bVar8 = (float)((ulonglong)dVar5 >> 0x20) < fVar7;
  }
  else {
    bVar8 = dVar5 < (double)CONCAT44(in_fr14,fVar7);
  }
  if (!bVar8) {
    if (cVar10 == '\0') {
      *(float *)(ar4 + 4) = fVar7;
    }
    else {
      *(undefined8 *)(ar4 + 4) = in_xd14;
    }
  }
  uVar2 = Vec3_dtor(&uStack_1c,0xffffffff,ar6,ar7);
  return uVar2;
}



/* FUN_8c0d2c84 @ 8c0d2c84 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d2e8c) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e44) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e40) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e38) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e32) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e2e) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e28) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e22) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e1e) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e14) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e0e) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e0a) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e04) */
/* WARNING: Removing unreachable block (ram,0x8c0d2dfe) */
/* WARNING: Removing unreachable block (ram,0x8c0d2dfa) */
/* WARNING: Removing unreachable block (ram,0x8c0d2df0) */
/* WARNING: Removing unreachable block (ram,0x8c0d2dea) */
/* WARNING: Removing unreachable block (ram,0x8c0d2de6) */
/* WARNING: Removing unreachable block (ram,0x8c0d2de0) */
/* WARNING: Removing unreachable block (ram,0x8c0d2dda) */
/* WARNING: Removing unreachable block (ram,0x8c0d2dd6) */
/* WARNING: Removing unreachable block (ram,0x8c0d2dcc) */
/* WARNING: Removing unreachable block (ram,0x8c0d2dc6) */
/* WARNING: Removing unreachable block (ram,0x8c0d2dc2) */
/* WARNING: Removing unreachable block (ram,0x8c0d2db2) */
/* WARNING: Removing unreachable block (ram,0x8c0d2da8) */
/* WARNING: Removing unreachable block (ram,0x8c0d2da2) */
/* WARNING: Removing unreachable block (ram,0x8c0d2d5c) */
/* WARNING: Removing unreachable block (ram,0x8c0d2d52) */
/* WARNING: Removing unreachable block (ram,0x8c0d2d4a) */
/* WARNING: Removing unreachable block (ram,0x8c0d2d40) */
/* WARNING: Removing unreachable block (ram,0x8c0d2d36) */
/* WARNING: Removing unreachable block (ram,0x8c0d2d2e) */
/* WARNING: Removing unreachable block (ram,0x8c0d2cb8) */
/* WARNING: Removing unreachable block (ram,0x8c0d2cae) */
/* WARNING: Removing unreachable block (ram,0x8c0d2ca4) */
/* WARNING: Removing unreachable block (ram,0x8c0d2c84) */
/* WARNING: Removing unreachable block (ram,0x8c0d2ca8) */
/* WARNING: Removing unreachable block (ram,0x8c0d2cb2) */
/* WARNING: Removing unreachable block (ram,0x8c0d2cbc) */
/* WARNING: Removing unreachable block (ram,0x8c0d2d32) */
/* WARNING: Removing unreachable block (ram,0x8c0d2d3c) */
/* WARNING: Removing unreachable block (ram,0x8c0d2d44) */
/* WARNING: Removing unreachable block (ram,0x8c0d2d4e) */
/* WARNING: Removing unreachable block (ram,0x8c0d2d58) */
/* WARNING: Removing unreachable block (ram,0x8c0d2d60) */
/* WARNING: Removing unreachable block (ram,0x8c0d2da6) */
/* WARNING: Removing unreachable block (ram,0x8c0d2db0) */
/* WARNING: Removing unreachable block (ram,0x8c0d2dbe) */
/* WARNING: Removing unreachable block (ram,0x8c0d2dc4) */
/* WARNING: Removing unreachable block (ram,0x8c0d2dc8) */
/* WARNING: Removing unreachable block (ram,0x8c0d2dd2) */
/* WARNING: Removing unreachable block (ram,0x8c0d2dd8) */
/* WARNING: Removing unreachable block (ram,0x8c0d2ddc) */
/* WARNING: Removing unreachable block (ram,0x8c0d2de2) */
/* WARNING: Removing unreachable block (ram,0x8c0d2de8) */
/* WARNING: Removing unreachable block (ram,0x8c0d2dec) */
/* WARNING: Removing unreachable block (ram,0x8c0d2df6) */
/* WARNING: Removing unreachable block (ram,0x8c0d2dfc) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e00) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e06) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e0c) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e10) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e1a) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e20) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e24) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e2a) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e30) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e34) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e3c) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e42) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e48) */
/* WARNING: Removing unreachable block (ram,0x8c0d2e8e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d2c84(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  float *pfStack_8c;
  undefined4 uStack_88;
  undefined2 *puStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float *pfStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fStack_1c = *ar4;
  fStack_18 = ar4[1];
  fStack_14 = ar4[2];
  uStack_2c = DAT_8c13f488;
  uStack_28 = DAT_8c13f48c;
  uStack_24 = DAT_8c13f490;
  uStack_20 = DAT_8c13f494;
  uStack_38 = DAT_8c13f49c;
  uStack_34 = DAT_8c13f4a0;
  uStack_30 = DAT_8c13f4a4;
  pfStack_3c = &fStack_1c;
  fStack_6c = DAT_8c13f4a8;
  fStack_64 = (float)DAT_8c13f4b0;
  fStack_60 = (float)DAT_8c13f4b4;
  fStack_58 = (float)DAT_8c13f4bc;
  fStack_54 = (float)DAT_8c13f4c0;
  fStack_4c = (float)DAT_8c13f4c8;
  fStack_48 = (float)DAT_8c13f4cc;
  fStack_40 = (float)DAT_8c13f4d4;
  fStack_68 = ar4[1] - 1.0;
  fStack_5c = ar4[1] - 1.0;
  fStack_50 = ar4[1] - 1.0;
  fStack_44 = ar4[1] - 1.0;
  uStack_88 = DAT_8c13f4dc;
  uStack_80 = DAT_8c13f4e4;
  pfStack_8c = &fStack_6c;
  puStack_84 = &uStack_7c;
  if (ar4[5] == 0.0) {
    uVar1 = FUN_8c234fd0(&pfStack_3c,1,0,ar7);
  }
  else {
    fVar2 = (ar4[4] / 12.2) * ar4[0x21];
    if (ar4[0x1d] == 2.8026e-45) {
      fStack_6c = *ar4 - fVar2 * 5.0;
      fStack_64 = ar4[2] + fVar2 * 5.0;
      fStack_60 = *ar4 - fVar2 * 5.0;
      fStack_58 = ar4[2] - fVar2 * 5.0;
      fStack_54 = *ar4 + fVar2 * 5.0;
      fStack_4c = ar4[2] - fVar2 * 5.0;
      fStack_48 = *ar4 + fVar2 * 5.0;
      fStack_40 = ar4[2] + fVar2 * 5.0;
      uStack_7c = 0;
      uStack_7a = 0;
      uStack_78 = 0;
      uStack_76 = 0x7f;
      uStack_74 = 0x7f;
      uStack_72 = 0x7f;
      uStack_70 = 0x7f;
      uStack_6e = 0;
      FUN_8c01538c(ar5,ar5,ar6,ar7);
      FUN_8c014a94(ar5,0,ar6,ar7);
      uVar1 = FUN_8c235bfc(&pfStack_8c,4,0x80000060,ar7);
    }
    else {
      FUN_8c0d2f04(ar4 + 0x12,ar5,ar6,ar7);
      uVar1 = (**(code **)((int)ar4[0x12] + 0x1c))(ar4 + 0x12,ar4[0x20],ar6,ar7);
    }
  }
  return uVar1;
}



/* FUN_8c0d2f04 @ 8c0d2f04 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d2f08) */
/* WARNING: Removing unreachable block (ram,0x8c0d2f0c) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d2f04(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x10) = in_fr4;
  *(undefined4 *)(ar4 + 0x14) = in_fr5;
  return (undefined4 *)(ar4 + 0x10);
}



/* FUN_8c0d2f14 @ 8c0d2f14 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d2f20) */
/* WARNING: Removing unreachable block (ram,0x8c0d2f1c) */
/* WARNING: Removing unreachable block (ram,0x8c0d2f24) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d2f14(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = '\0';
  FUN_8c022d04(ar4,ar5,ar6,ar7);
  vec3_clear(ar4 + 0x18,ar5,ar6,ar7);
  uVar2 = CONCAT44(0x3f800000,in_fr1);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x1c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x1c) = uVar2;
  }
  vec3_clear(ar4 + 0x28,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    uVar1 = (uint)uVar2;
    *(undefined4 *)(ar4 + 0x10) = 0x40800000;
  }
  else {
    uVar1 = 0x40800000;
    *(undefined8 *)(ar4 + 0x10) = 0x430c000040800000;
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x3c) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0x430c0000;
    *(undefined4 *)(ar4 + 0x38) = 0x3ee66666;
  }
  else {
    *(ulonglong *)(ar4 + 0x3c) = (ulonglong)uVar1;
    *(undefined8 *)(ar4 + 0x40) = 0x3ee66666430c0000;
    uVar1 = 0x3ee66666;
    *(undefined8 *)(ar4 + 0x38) = 0x803ee66666;
  }
  *(undefined4 *)(ar4 + 0x14) = 1;
  *(undefined4 *)(ar4 + 0x44) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0;
  *(undefined4 *)(ar4 + 0x80) = 0;
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x84) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x84) = CONCAT44(0x3f800000,uVar1);
  }
  return 0x84;
}



/* FUN_8c0d2fc0 @ 8c0d2fc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d2fc0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  *DAT_8c0d2fd4 = ar4;
  DAT_8c0d2fd4[1] = ar4;
  DAT_8c0d2fd4[2] = ar4;
  puVar1 = DAT_8c0d2fd4;
  DAT_8c0d2fd4[3] = ar4;
  return puVar1;
}



/* FUN_8c0d2fd8 @ 8c0d2fd8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d2fd8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 ar7_00;
  uint in_fr1;
  ulonglong uVar5;
  char cVar6;
  undefined4 in_stack_fffffff0;
  
  cVar6 = '\0';
  FUN_8c015224(ar4 + 8,ar5,ar6,ar7);
  FUN_8c015ab8(ar4 + 0x10,ar5,ar6,ar7);
  FUN_8c015ab8(ar4 + 0x1c,ar5,ar6,ar7);
  uVar4 = 4;
  pcVar3 = free_if_nonnull_wrap_016bfc;
  pcVar1 = FUN_8c015ab8;
  FUN_8c010120(ar4 + 0x20,FUN_8c015ab8,free_if_nonnull_wrap_016bfc,4,3);
  FUN_8c0d33bc(ar4 + 0x34,pcVar1,pcVar3,uVar4);
  FUN_8c015224(ar4 + 0x108,pcVar1,pcVar3,uVar4);
  FUN_8c016410(ar4 + 0x110,pcVar1,pcVar3,uVar4);
  FUN_8c015ab8(ar4 + 0x154,pcVar1,pcVar3,uVar4);
  FUN_8c010120(ar4 + 0x470,FUN_8c0d2050,FUN_8c0d336c,0x44,5);
  FUN_8c010120(ar4 + 0x5fc,FUN_8c02145c,free_if_nonnull_wrap_0cffc8,0x18,2);
  uVar4 = 0x88;
  pcVar3 = FUN_8c0d3304;
  pcVar1 = FUN_8c0d25b4;
  FUN_8c010120(ar4 + 0x62c,FUN_8c0d25b4,FUN_8c0d3304,0x88,0x226);
  FUN_8c0153b8(ar4 + 0x12a5c,pcVar1,pcVar3,uVar4);
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x18) = 0x3ec8c155;
  }
  else {
    in_fr1 = 0x3ec8c155;
    *(undefined8 *)(ar4 + 0x18) = 0x8c13e7803ec8c155;
  }
  FUN_8c015ad4(ar4 + 0x20,&DAT_8c13e780,pcVar3,uVar4,in_stack_fffffff0);
  FUN_8c015ad4(ar4 + 0x24,&DAT_8c13ea48,pcVar3,uVar4,in_stack_fffffff0);
  FUN_8c015ad4(ar4 + 0x28,&DAT_8c13ed20,pcVar3,uVar4,in_stack_fffffff0);
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x430) = 0xc3960000;
  }
  else {
    in_fr1 = 0xc3960000;
    *(undefined8 *)(ar4 + 0x430) = 0x434c3960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x434) = 0;
    *(undefined4 *)(ar4 + 0x438) = 0xc3960000;
    *(undefined4 *)(ar4 + 0x43c) = 0xc3960000;
  }
  else {
    *(ulonglong *)(ar4 + 0x434) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x438) = 0x434c3960000;
    in_fr1 = 0xc3960000;
    *(undefined8 *)(ar4 + 0x43c) = 0x434c3960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x440) = 0;
    *(undefined4 *)(ar4 + 0x444) = 0x43960000;
    *(undefined4 *)(ar4 + 0x448) = 0x43960000;
  }
  else {
    *(ulonglong *)(ar4 + 0x440) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x444) = 0x44843960000;
    in_fr1 = 0x43960000;
    *(undefined8 *)(ar4 + 0x448) = 0x44843960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x44c) = 0;
    *(undefined4 *)(ar4 + 0x450) = 0x43960000;
    uVar5 = CONCAT44(0x43960000,in_fr1);
    *(undefined4 *)(ar4 + 0x454) = 0x43960000;
  }
  else {
    *(ulonglong *)(ar4 + 0x44c) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x450) = 0x44843960000;
    uVar5 = 0x44843960000;
    *(undefined8 *)(ar4 + 0x454) = 0x44843960000;
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x458) = 0;
    *(undefined4 *)(ar4 + 0x45c) = 0xc3960000;
  }
  else {
    *(ulonglong *)(ar4 + 0x458) = uVar5 & 0xffffffff;
    *(undefined8 *)(ar4 + 0x45c) = 0x434c3960000;
  }
  *(undefined2 *)(ar4 + 0x460) = 0;
  *(undefined2 *)(ar4 + 0x462) = 0xff;
  *(undefined2 *)(ar4 + 0x464) = 0;
  *(undefined2 *)(ar4 + 0x466) = 0;
  *(undefined2 *)(ar4 + 0x468) = 0xff;
  *(undefined2 *)(ar4 + 0x46a) = 0;
  *(undefined2 *)(ar4 + 0x46c) = 0xff;
  *(undefined2 *)(ar4 + 0x46e) = 0xff;
  ar7_00 = 4;
  FUN_8c016464(ar4 + 0x110,ar4 + 0x430,0,4);
  uVar4 = 4;
  iVar2 = ar4 + 0x460;
  FUN_8c0164c8(ar4 + 0x110,iVar2,4,ar7_00);
  FUN_8c014790(ar4 + 0x110,iVar2,uVar4,ar7_00);
  FUN_8c014764(ar4 + 0x110,iVar2,uVar4,ar7_00);
  FUN_8c014a64(ar4 + 0x110,iVar2,uVar4,ar7_00);
  FUN_8c0d56dc(ar4,iVar2,uVar4,ar7_00);
  for (iVar2 = 0; iVar2 < 0x226; iVar2 = iVar2 + 1) {
    FUN_8c0d261c(iVar2 * 0x88 + ar4 + 0x62c,ar4 + 0x12a5c,&DAT_8c13f344,ar7_00);
  }
  return ar4;
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



/* FUN_8c0d33bc @ 8c0d33bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d33bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d33e4)(ar4,PTR_s_GRAPHICS_COMMON_8c0d33dc + DAT_8c0d33e0,ar6,ar7);
  return uVar1;
}



/* s_GRAPHICS_COMMON_0d33f4 @ 8c0d33e8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d35f6) */
/* WARNING: Removing unreachable block (ram,0x8c0d340a) */
/* WARNING: Removing unreachable block (ram,0x8c0d340c) */
/* WARNING: Removing unreachable block (ram,0x8c0d3618) */
/* WARNING: Removing unreachable block (ram,0x8c0d3634) */
/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_COMMON_0d33f4(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  char *ar5_00;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *ar6_00;
  undefined4 *puVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  double in_dr2;
  undefined8 in_xd0;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffffa8;
  undefined4 uStack_24;
  undefined4 auStack_20 [2];
  
  cVar11 = '\0';
  cVar10 = '\0';
  auStack_20[0] = 0;
  uStack_24 = 0;
  *(undefined4 *)ar4 = 0x44610000;
  iVar1 = FUN_8c0209fc(ar5,s_suisou_WaterFace_nj_8c13f91e,s_GRAPHICS_ENV_8c13f8cb,auStack_20);
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_WaterFace_nj_8c13f91e,s_Failed_NJCM_WATER_ELEMENT__Creat_8c13f932,0,2);
  }
  puVar6 = &uStack_24;
  pcVar4 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_WaterFace_nj_8c13f91e,s_GRAPHICS_ENV_8c13f8cb,puVar6);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x2;
    pcVar4 = (char *)0x0;
    report_error_message
              (s_suisou_WaterFace_nj_8c13f91e,s_Failed_NJTL_WATER_ELEMENT__Creat_8c13f95c,0,2);
  }
  FUN_8c015ad4(ar4 + 2,auStack_20[0],pcVar4,puVar6,in_stack_ffffffa8);
  iVar1 = FUN_8c0209fc(ar5,s_suisou_Effect_nj_8c13f986,s_GRAPHICS_ENV_8c13f8cb,auStack_20);
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_Effect_nj_8c13f986,s_Failed_NJCM_WATER_ELEMENT__Creat_8c13f932,0,2);
  }
  puVar6 = &uStack_24;
  pcVar4 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_Effect_nj_8c13f986,s_GRAPHICS_ENV_8c13f8cb,puVar6);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x2;
    pcVar4 = (char *)0x0;
    report_error_message
              (s_suisou_Effect_nj_8c13f986,s_Failed_NJTL_WATER_ELEMENT__Creat_8c13f95c,0,2);
  }
  uVar2 = auStack_20[0];
  FUN_8c015ad4((undefined4 *)((int)ar4 + 0x1c),auStack_20[0],pcVar4,puVar6,in_stack_ffffffa8);
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)((int)ar4 + iVar1 * 0xc + 0x12a70) = 0;
  }
  uVar2 = get_field_4_0253e4((undefined4 *)((int)ar4 + 0x12a5c),uVar2,pcVar4,puVar6);
  uVar7 = 1;
  uVar5 = 0x8c4312a8;
  puVar6 = (undefined4 *)((int)ar4 + 0x12a6c);
  FUN_8c239170(uVar2,puVar6,0x8c4312a8,1);
  uVar2 = get_field_4_0253e4((undefined4 *)((int)ar4 + 0x12a5c),puVar6,uVar5,uVar7);
  ar6_00 = s_GRAPHICS_ENV_8c13f8cb;
  pcVar4 = s_WBubble_pvm_8c13f997;
  iVar1 = FUN_8c02100c(ar5,s_WBubble_pvm_8c13f997,s_GRAPHICS_ENV_8c13f8cb,uVar2);
  if (iVar1 == 0) {
    uVar2 = 2;
    ar6_00 = (char *)0x0;
    pcVar4 = s_WE__CreateStage0___8c13f9c3;
    report_error_message
              (s_Failed_to_load_new_bubble_tex___8c13f9a3,s_WE__CreateStage0___8c13f9c3,0,2);
  }
  iVar1 = 0;
  do {
    uVar5 = SUB84(in_dr2,0);
    if (0x59 < iVar1) {
LAB_8c0d3658:
      for (iVar1 = 0; iVar1 < 0x226; iVar1 = iVar1 + 1) {
        FUN_8c0d2690((int)ar4 + iVar1 * 0x88 + 0x62c,pcVar4,ar6_00,uVar2);
      }
      for (iVar1 = 0; iVar1 < 0x3c; iVar1 = iVar1 + 1) {
        uVar7 = 1;
        uVar5 = ar6;
        FUN_8c0d59a4(ar4,1,ar6,uVar2);
        FUN_8c0d5ca8(ar4,uVar7,uVar5,uVar2);
      }
      s_GRAPHICS_ENV_0d39ea(ar4,ar5,s_wave_pvm_8c13fa03,uVar2);
      return 1;
    }
    uVar7 = 0x8c3e7d30;
    ar5_00 = (char *)FUN_8c0febf0(0x8c3e7d30,pcVar4,ar6_00,uVar2);
    if (ar5_00 == (char *)0x0) {
      uVar2 = 2;
      ar6_00 = (char *)0x1;
      pcVar4 = s_WATER_ELEMETNT__CreateStage0___8c13f9e4;
      report_error_message(s_Lack_of_mem___8c13f9d6,s_WATER_ELEMETNT__CreateStage0___8c13f9e4,1,2);
      goto LAB_8c0d3658;
    }
    iVar3 = rand(uVar7,pcVar4,ar6_00,uVar2);
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 7.971355902106255e+24;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x451a6000,fVar8);
    }
    else {
      dVar9 = 1.2986509772968826e+23;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(ar5_00 + 8) = fVar8;
    }
    else {
      *(undefined8 *)(ar5_00 + 8) = in_xd0;
    }
    iVar3 = rand(uVar7,pcVar4,ar6_00,uVar2);
    if (cVar11 == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)ar4,uVar5);
    }
    else {
      in_dr2 = *ar4;
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 7.971355902106255e+24;
    }
    if (cVar10 == '\0') {
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) *
                                (SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20)),SUB84(in_dr2,0)
                               );
    }
    else {
      in_dr2 = in_dr2 * (dVar9 / dVar9);
    }
    if (cVar11 == '\0') {
      *(int *)(ar5_00 + 0xc) = (int)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(ar5_00 + 0xc) = in_dr2;
    }
    iVar3 = rand(uVar7,pcVar4,ar6_00,uVar2);
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 7.971355902106255e+24;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x44bb8000,fVar8);
    }
    else {
      dVar9 = -1.3922581301884715e-250;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(ar5_00 + 0x10) = fVar8;
    }
    else {
      *(undefined8 *)(ar5_00 + 0x10) = in_xd0;
    }
    FUN_8c0fe5f0((undefined4 *)((int)ar4 + 0x34),ar5_00,ar6_00,uVar2);
    iVar1 = iVar1 + 1;
    pcVar4 = ar5_00;
  } while( true );
}



/* s_GRAPHICS_COMMON_0d377a @ 8c0d3770 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d38f0) */
/* WARNING: Removing unreachable block (ram,0x8c0d378e) */
/* WARNING: Removing unreachable block (ram,0x8c0d3790) */
/* WARNING: Removing unreachable block (ram,0x8c0d3918) */
/* WARNING: Removing unreachable block (ram,0x8c0d3934) */
/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_COMMON_0d377a(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  int iVar2;
  undefined4 ar4_00;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  undefined4 uVar8;
  double in_dr2;
  undefined8 in_xd0;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffffc0;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  cVar10 = '\0';
  cVar9 = '\0';
  aiStack_1c[0] = 0;
  uStack_20 = 0;
  *(undefined4 *)ar4 = 0x43200000;
  iVar1 = FUN_8c0209fc(ar5,s_suisou_WaterFace_small_nj_8c13fa0c,s_GRAPHICS_ENV_8c13f8cb,aiStack_1c);
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_WaterFace_small_nj_8c13fa0c,s_Failed_NJCM_WATER_ELEMENT__Creat_8c13fa26,0,2)
    ;
  }
  puVar4 = &uStack_20;
  pcVar3 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_WaterFace_small_nj_8c13fa0c,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    pcVar3 = (char *)0x0;
    report_error_message
              (s_suisou_WaterFace_small_nj_8c13fa0c,s_Failed_NJTL_WATER_ELEMENT__Creat_8c13fa50,0,2)
    ;
  }
  FUN_8c015ad4(ar4 + 2,aiStack_1c[0],pcVar3,puVar4,in_stack_ffffffc0);
  iVar1 = FUN_8c0209fc(ar5,s_suisou_Effect_small_nj_8c13fa7a,s_GRAPHICS_ENV_8c13f8cb,aiStack_1c);
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_Effect_small_nj_8c13fa7a,s_Failed_NJCM_WATER_ELEMENT__Creat_8c13fa26,0,2);
  }
  puVar4 = &uStack_20;
  pcVar3 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_Effect_small_nj_8c13fa7a,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    pcVar3 = (char *)0x0;
    report_error_message
              (s_suisou_Effect_small_nj_8c13fa7a,s_Failed_NJTL_WATER_ELEMENT__Creat_8c13fa50,0,2);
  }
  iVar1 = aiStack_1c[0];
  FUN_8c015ad4((undefined4 *)((int)ar4 + 0x1c),aiStack_1c[0],pcVar3,puVar4,in_stack_ffffffc0);
  iVar5 = 0;
  do {
    uVar8 = SUB84(in_dr2,0);
    if (0x31 < iVar5) {
LAB_8c0d395e:
      s_GRAPHICS_ENV_0d39ea(ar4,ar5,s_wave_small_pvm_8c13faaa,puVar4);
      return 1;
    }
    ar4_00 = 0x8c3e7d30;
    ar5_00 = FUN_8c0febf0(0x8c3e7d30,iVar1,pcVar3,puVar4);
    if (ar5_00 == 0) {
      puVar4 = (undefined4 *)0x2;
      report_error_message(s_Lack_of_mem___8c13f9d6,s_WATER_ELEMETNT__Create___8c13fa91,1,2);
      goto LAB_8c0d395e;
    }
    iVar2 = rand(ar4_00,iVar1,pcVar3,puVar4);
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x47000000,(float)iVar2);
    }
    else {
      dVar7 = 1.1215622395287742e+23;
    }
    if (cVar9 == '\0') {
      fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 / dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x44b7c000,fVar6);
    }
    else {
      dVar7 = 7.673846743559028e+21;
    }
    if (cVar9 == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x447a0000,fVar6);
    }
    else {
      dVar7 = 2.8924499526186286e+22;
    }
    if (cVar9 == '\0') {
      fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(ar5_00 + 8) = fVar6;
    }
    else {
      *(undefined8 *)(ar5_00 + 8) = in_xd0;
    }
    iVar2 = rand(ar4_00,iVar1,pcVar3,puVar4);
    if (cVar10 == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)ar4,uVar8);
    }
    else {
      in_dr2 = *ar4;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x47000000,(float)iVar2);
    }
    else {
      dVar7 = 1.1215622395287742e+23;
    }
    if (cVar9 == '\0') {
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) *
                                (SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20)),SUB84(in_dr2,0)
                               );
    }
    else {
      in_dr2 = in_dr2 * (dVar7 / dVar7);
    }
    if (cVar10 == '\0') {
      *(int *)(ar5_00 + 0xc) = (int)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(ar5_00 + 0xc) = in_dr2;
    }
    iVar1 = rand(ar4_00,iVar1,pcVar3,puVar4);
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x47000000,(float)iVar1);
    }
    else {
      dVar7 = 1.1215622395287742e+23;
    }
    if (cVar9 == '\0') {
      fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 / dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x44988000,fVar6);
    }
    else {
      dVar7 = 2.5220161595978547e+17;
    }
    if (cVar9 == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x438c0000,fVar6);
    }
    else {
      dVar7 = -1.392258127104201e-250;
    }
    if (cVar9 == '\0') {
      fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(ar5_00 + 0x10) = fVar6;
    }
    else {
      *(undefined8 *)(ar5_00 + 0x10) = in_xd0;
    }
    FUN_8c0fe5f0((undefined4 *)((int)ar4 + 0x34),ar5_00,pcVar3,puVar4);
    iVar5 = iVar5 + 1;
    iVar1 = ar5_00;
  } while( true );
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



/* FUN_8c0d3c08 @ 8c0d3c08 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d3c22) */
/* WARNING: Removing unreachable block (ram,0x8c0d3c0a) */
/* WARNING: Removing unreachable block (ram,0x8c0d3c08) */
/* WARNING: Removing unreachable block (ram,0x8c0d3c0c) */
/* WARNING: Removing unreachable block (ram,0x8c0d3c26) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d3c08(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  int iVar3;
  
  ar5_00 = 1;
  uVar2 = ar5;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = get_field_40_0d3d64(iVar3 * 0x44 + ar4 + 0x470,uVar2,ar6,ar7);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(ar4 + 0x5e8);
      FUN_8c0d21a0(iVar3 * 0x44 + ar4 + 0x470,uVar2,ar6,ar7);
    }
  }
  if (*(int *)(ar4 + 0x30) == 1) {
    if ((*(int *)(ar4 + 0x61c) < 2) &&
       (*(int *)(ar4 + 0x61c) = *(int *)(ar4 + 0x61c) + 2, 2 < *(int *)(ar4 + 0x61c))) {
      *(undefined4 *)(ar4 + 0x61c) = 2;
    }
    ar5_00 = 9;
  }
  else if ((-0x1e < *(int *)(ar4 + 0x61c)) &&
          (*(int *)(ar4 + 0x61c) = *(int *)(ar4 + 0x61c) + -2, *(int *)(ar4 + 0x61c) < -0x1e)) {
    *(undefined4 *)(ar4 + 0x61c) = 0xffffffe2;
  }
  FUN_8c0d59a4(ar4,ar5_00,ar5,ar7);
  uVar2 = FUN_8c0d5ca8(ar4,ar5_00,ar5,ar7);
  *(int *)(ar4 + 0x5e8) = *(int *)(ar4 + 0x5e8) + 1;
  return uVar2;
}



/* get_field_40_0d3d64 @ 8c0d3d64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_40_0d3d64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x40);
}



/* FUN_8c0d3d6c @ 8c0d3d6c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d3d6c(ulonglong *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  float fVar9;
  double dVar7;
  ulonglong uVar8;
  code *pcVar10;
  double in_xd0;
  int ar4_01;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  if (((ar4[0xbd] & 1) == 0) &&
     (*(short *)((int)ar4 + 4) = *(short *)((int)ar4 + 4) + 1, *(short *)((int)ar4 + 4) == 0x19)) {
    *(undefined2 *)((int)ar4 + 4) = 0;
  }
  uVar3 = ar5;
  iVar1 = get_field_d0_0d3f70((int)ar4 + 0x34,ar5,ar6,ar7);
  ar4_00 = FUN_8c0d3f50((int)ar4 + 0x34,ar5,ar6,ar7);
  for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
    if (cVar12 == '\0') {
      dVar6 = (double)CONCAT44(0x47800000,_DAT_8c437c68);
    }
    else {
      dVar6 = 1.4411521878487204e+18;
      in_xd0 = _DAT_8c437c68;
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar12 == '\0') {
      dVar6 = (double)CONCAT44(0x43b40000,fVar5);
    }
    else {
      dVar6 = -3.745782517784109e-250;
    }
    if (cVar11 == '\0') {
      fVar9 = (float)((ulonglong)dVar6 >> 0x20);
      fVar5 = SUB84(dVar6,0) / fVar9;
      dVar6 = (double)CONCAT44(fVar9,fVar5);
      ar4_01 = (int)fVar5;
    }
    else {
      dVar6 = dVar6 / dVar6;
      ar4_01 = (int)dVar6;
    }
    FUN_8c25747c(ar4_01,ar5,ar6,ar7,uVar3);
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x3f000000,(int)((ulonglong)dVar6 >> 0x20));
      dVar6 = in_xd0;
    }
    else {
      dVar7 = 3.5242919858872394e-14;
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      *(float *)(ar4_00 + 0x1c) = fVar5;
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 0x1c),*(undefined4 *)(ar4_00 + 0xc));
    }
    else {
      *(double *)(ar4_00 + 0x1c) = dVar6;
      dVar6 = *(double *)(ar4_00 + 0xc);
      dVar7 = *(double *)(ar4_00 + 0x1c);
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar12 == '\0') {
      *(float *)(ar4_00 + 0xc) = fVar5;
      uVar8 = CONCAT44((int)*ar4,*(undefined4 *)(ar4_00 + 0xc));
    }
    else {
      *(double *)(ar4_00 + 0xc) = dVar6;
      dVar6 = *(double *)(ar4_00 + 0xc);
      uVar8 = *ar4;
    }
    if (cVar11 != '\0' || (float)uVar8 <= (float)(uVar8 >> 0x20)) {
      if (cVar12 == '\0') {
        uVar8 = (ulonglong)*(uint *)(ar4_00 + 0xc);
      }
      else {
        dVar6 = *(double *)(ar4_00 + 0xc);
      }
      if (cVar11 == '\0' && (float)uVar8 < 0.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4_00 + 0xc) = 0;
        }
        else {
          *(ulonglong *)(ar4_00 + 0xc) = uVar8 & 0xffffffff;
        }
      }
    }
    else if (cVar12 == '\0') {
      *(int *)(ar4_00 + 0xc) = (int)*ar4;
    }
    else {
      *(ulonglong *)(ar4_00 + 0xc) = *ar4;
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x3d23d70a,_DAT_8c437c68);
      in_xd0 = dVar6;
    }
    else {
      dVar7 = -1.276550078099057e-250;
      in_xd0 = _DAT_8c437c68;
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar12 == '\0') {
      _DAT_8c437c68 = (double)CONCAT44(_DAT_8c437c6c,fVar5);
      pcVar10 = (code *)0x43b40000;
    }
    else {
      fVar5 = 360.0;
      pcVar10 = FUN_8c25747c;
      _DAT_8c437c68 = in_xd0;
    }
    dVar6 = _DAT_8c437c68;
    if (cVar11 == '\0' && (float)pcVar10 < fVar5) {
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000,SUB84(_DAT_8c437c68,0));
      }
      else {
        dVar6 = -3.745782517784109e-250;
        in_xd0 = _DAT_8c437c68;
      }
      if (cVar11 == '\0') {
        fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
      dVar6 = in_xd0;
      if (cVar12 == '\0') {
        _DAT_8c437c68 = (double)CONCAT44(_DAT_8c437c6c,fVar5);
        dVar6 = _DAT_8c437c68;
      }
    }
    _DAT_8c437c68 = dVar6;
    ar4_00 = list_node_next(ar4_00,ar5,ar6,ar7);
  }
  if (((int)ar4[6] == 1) && ((int)ar4[0xc3] == -1)) {
    uVar2 = FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0xc3) = uVar2;
    ar6 = 1;
    FUN_8c021994(0x8c2b59d0,(int)ar4[0xc3],1,ar7);
  }
  if ((int)ar4[0xc3] != -1) {
    ar6 = *(undefined4 *)((int)ar4 + 0x61c);
    FUN_8c021a0c(0x8c2b59d0,(int)ar4[0xc3],ar6,ar7);
  }
  if (((int)ar4[6] == 0) && ((int)ar4[0xc3] != -1)) {
    FUN_8c021a60(0x8c2b59d0,(int)ar4[0xc3],ar6,ar7);
    FUN_8c021a8c(0x8c2b59d0,ar4 + 0xc3,ar6,ar7);
    *(undefined4 *)(ar4 + 0xc3) = 0xffffffff;
  }
  uVar3 = FUN_8c0d3c08(ar4,uVar3,ar6,ar7);
  return uVar3;
}



/* list_node_next @ 8c0d3f48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 list_node_next(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}



/* FUN_8c0d3f50 @ 8c0d3f50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d3f50(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_list_node_next_8c0d3f6c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* get_field_d0_0d3f70 @ 8c0d3f70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_d0_0d3f70(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0d3f78 + ar4);
}



/* FUN_8c0d3f7c @ 8c0d3f7c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d3fa4) */
/* WARNING: Removing unreachable block (ram,0x8c0d3fa0) */
/* WARNING: Removing unreachable block (ram,0x8c0d3fa6) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d3f7c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(ar5 + 0xc) + 100);
  if (((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 6)) {
    if (*(float *)(*(int *)(ar5 + 0xc) + 4) <= 900.0) {
      DAT_8c13f4f7 = 0xff;
    }
    else {
      DAT_8c13f4f7 = 0x78;
    }
  }
  else {
    DAT_8c13f4f7 = 0xff;
  }
  **(uint **)(ar4 + 0x14) = (uint)DAT_8c13f4f7 << 0x18 | 0xffffff;
  uVar2 = FUN_8c0d4038(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c0d400c @ 8c0d400c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d400c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  **(undefined4 **)(ar4 + 0x14) = DAT_8c0d4030;
  uVar1 = (*(code *)PTR_FUN_8c0d4034)(ar4,ar5,ar6,ar7);
  return uVar1;
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



/* FUN_8c0d4124 @ 8c0d4124 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d4124) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d4124(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int *piVar2;
  float *pfVar3;
  int ar5_00;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar8;
  code *pcVar9;
  double dVar7;
  undefined8 in_xd0;
  undefined4 in_PR;
  int ar4_00;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffff9c;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar5_00 = ar5;
  uStack_1c = in_PR;
  piVar2 = (int *)get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7);
  uVar4 = *(undefined4 *)(*piVar2 + 8);
  *(undefined4 *)(*piVar2 + 8) = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar2 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar2 + 8) = uVar4;
  FUN_8c01538c(ar4 + 8,ar5_00,ar6,ar7);
  FUN_8c015af8(ar4 + 0x1c,ar5_00,ar6,ar7);
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    FUN_8c0d43cc(&fStack_24,ar5_00,ar6,ar7);
    if (cVar11 == '\0') {
      fVar8 = -150.0;
      fVar6 = fStack_24;
    }
    else {
      in_xd0 = CONCAT44(fStack_20,fStack_24);
      fVar6 = -150.0;
      fVar8 = 800.0;
    }
    if (cVar10 != '\0' || fVar8 <= fVar6) {
      if (cVar11 == '\0') {
        fVar8 = 800.0;
        fVar6 = fStack_24;
      }
      else {
        in_xd0 = CONCAT44(fStack_20,fStack_24);
        fVar6 = 800.0;
        fVar8 = -100.0;
      }
      if (cVar10 != '\0' || fVar6 <= fVar8) {
        if (cVar11 == '\0') {
          fVar8 = -100.0;
          fVar6 = fStack_20;
        }
        else {
          in_xd0 = CONCAT44(uStack_1c,fStack_20);
          fVar6 = -100.0;
          fVar8 = 600.0;
        }
        if (cVar10 != '\0' || fVar8 <= fVar6) {
          if (cVar11 == '\0') {
            fVar8 = 600.0;
            fVar6 = fStack_20;
          }
          else {
            in_xd0 = CONCAT44(uStack_1c,fStack_20);
            fVar6 = 600.0;
            fVar8 = 4.87652e-43;
          }
          if (cVar10 != '\0' || fVar6 <= fVar8) {
            pfVar3 = (float *)(ar5 + iVar5 * 0x16c + 0x15c);
            if (cVar11 == '\0') {
              fVar6 = *pfVar3;
              pcVar9 = (code *)0xbf6b851f;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar3;
              fVar6 = -0.92;
              pcVar9 = FUN_8c256328;
            }
            if (cVar10 != '\0' || (float)pcVar9 <= fVar6) {
              uVar4 = 0;
              FUN_8c256328(0,ar5_00,ar6,ar7,in_stack_ffffff9c);
              FUN_8c019058(uVar4,ar5_00,ar6,ar7);
              FUN_8c019160(uVar4,ar5_00,ar6,ar7);
              FUN_8c015b30(ar4 + iVar5 * 4 + 0x20,ar5_00,ar6,ar7);
              FUN_8c256210(1,ar5_00,ar6,ar7);
            }
          }
        }
      }
    }
  }
  uVar4 = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar2 + 8);
  iVar5 = (int)*(short *)(ar4 + 4);
  *(undefined4 *)(iVar5 * 0xc + *piVar2 + 8) = *(undefined4 *)(*piVar2 + 8);
  *(undefined4 *)(*piVar2 + 8) = uVar4;
  FUN_8c0d49cc(ar4,ar5_00,ar6,ar7);
  FUN_8c0d4a90(ar4,ar5_00,ar6,ar7);
  FUN_8c0d5d28(ar4,ar5_00,ar6,ar7);
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,_DAT_8c437c6c);
  }
  else {
    dVar7 = 1.4411521878487204e+18;
    in_xd0 = _DAT_8c437c6c;
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
    dVar7 = -3.745782517784109e-250;
  }
  if (cVar10 == '\0') {
    ar4_00 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    ar4_00 = (int)(dVar7 / dVar7);
  }
  FUN_8c25747c(ar4_00,ar5_00,ar6,ar7,iVar5);
  FUN_8c010e38(ar4_00,ar5_00,ar6,ar7,iVar5);
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x41200000,(int)_DAT_8c437c6c);
  }
  else {
    dVar7 = 1.1409237244491948e+308;
    in_xd0 = _DAT_8c437c6c;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 + dVar7,0);
  }
  if (cVar11 == '\0') {
    _DAT_8c437c6c = CONCAT44(_DAT_8c437c70,fVar6);
    pcVar9 = (code *)0x43b40000;
  }
  else {
    fVar6 = 360.0;
    pcVar9 = FUN_8c25747c;
    _DAT_8c437c6c = in_xd0;
  }
  uVar1 = _DAT_8c437c6c;
  if (cVar10 != '\0' || (float)pcVar9 <= fVar6) {
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,(int)_DAT_8c437c6c);
    }
    else {
      dVar7 = -3.745782517784109e-250;
      in_xd0 = _DAT_8c437c6c;
    }
    if (cVar10 == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    uVar1 = in_xd0;
    if (cVar11 == '\0') {
      _DAT_8c437c6c = CONCAT44(_DAT_8c437c70,fVar6);
      uVar1 = _DAT_8c437c6c;
    }
  }
  _DAT_8c437c6c = uVar1;
  return &DAT_8c0d43bc;
}



/* FUN_8c0d43cc @ 8c0d43cc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d4402) */
/* WARNING: Removing unreachable block (ram,0x8c0d43fa) */
/* WARNING: Removing unreachable block (ram,0x8c0d43f2) */
/* WARNING: Removing unreachable block (ram,0x8c0d43d6) */
/* WARNING: Removing unreachable block (ram,0x8c0d43d2) */
/* WARNING: Removing unreachable block (ram,0x8c0d43da) */
/* WARNING: Removing unreachable block (ram,0x8c0d43f6) */
/* WARNING: Removing unreachable block (ram,0x8c0d43fe) */
/* WARNING: Removing unreachable block (ram,0x8c0d4406) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d43cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_10 [16];
  
  uVar1 = FUN_8c256294(0,auStack_10,ar4,ar7);
  return uVar1;
}



/* FUN_8c0d4428 @ 8c0d4428 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d4428) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d4428(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int *piVar2;
  float *pfVar3;
  int ar5_00;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar8;
  code *pcVar9;
  double dVar7;
  undefined8 in_xd0;
  undefined4 in_PR;
  int ar4_00;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffff9c;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar5_00 = ar5;
  uStack_1c = in_PR;
  piVar2 = (int *)get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7);
  uVar4 = *(undefined4 *)(*piVar2 + 8);
  *(undefined4 *)(*piVar2 + 8) = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar2 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar2 + 8) = uVar4;
  FUN_8c01538c(ar4 + 8,ar5_00,ar6,ar7);
  FUN_8c015af8(ar4 + 0x1c,ar5_00,ar6,ar7);
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    FUN_8c0d43cc(&fStack_24,ar5_00,ar6,ar7);
    if (cVar11 == '\0') {
      fVar8 = -150.0;
      fVar6 = fStack_24;
    }
    else {
      in_xd0 = CONCAT44(fStack_20,fStack_24);
      fVar6 = -150.0;
      fVar8 = 800.0;
    }
    if (cVar10 != '\0' || fVar8 <= fVar6) {
      if (cVar11 == '\0') {
        fVar8 = 800.0;
        fVar6 = fStack_24;
      }
      else {
        in_xd0 = CONCAT44(fStack_20,fStack_24);
        fVar6 = 800.0;
        fVar8 = -100.0;
      }
      if (cVar10 != '\0' || fVar6 <= fVar8) {
        if (cVar11 == '\0') {
          fVar8 = -100.0;
          fVar6 = fStack_20;
        }
        else {
          in_xd0 = CONCAT44(uStack_1c,fStack_20);
          fVar6 = -100.0;
          fVar8 = 600.0;
        }
        if (cVar10 != '\0' || fVar8 <= fVar6) {
          if (cVar11 == '\0') {
            fVar8 = 600.0;
            fVar6 = fStack_20;
          }
          else {
            in_xd0 = CONCAT44(uStack_1c,fStack_20);
            fVar6 = 600.0;
            fVar8 = 4.87652e-43;
          }
          if (cVar10 != '\0' || fVar6 <= fVar8) {
            pfVar3 = (float *)(ar5 + iVar5 * 0x16c + 0x15c);
            if (cVar11 == '\0') {
              fVar6 = *pfVar3;
              pcVar9 = (code *)0xbf6b851f;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar3;
              fVar6 = -0.92;
              pcVar9 = FUN_8c256328;
            }
            if (cVar10 != '\0' || (float)pcVar9 <= fVar6) {
              uVar4 = 0;
              FUN_8c256328(0,ar5_00,ar6,ar7,in_stack_ffffff9c);
              FUN_8c019058(uVar4,ar5_00,ar6,ar7);
              FUN_8c019160(uVar4,ar5_00,ar6,ar7);
              FUN_8c015af8(ar4 + iVar5 * 4 + 0x20,ar5_00,ar6,ar7);
              FUN_8c256210(1,ar5_00,ar6,ar7);
            }
          }
        }
      }
    }
  }
  uVar4 = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar2 + 8);
  iVar5 = (int)*(short *)(ar4 + 4);
  *(undefined4 *)(iVar5 * 0xc + *piVar2 + 8) = *(undefined4 *)(*piVar2 + 8);
  *(undefined4 *)(*piVar2 + 8) = uVar4;
  FUN_8c0d49cc(ar4,ar5_00,ar6,ar7);
  FUN_8c0d4a90(ar4,ar5_00,ar6,ar7);
  FUN_8c0d5d28(ar4,ar5_00,ar6,ar7);
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,_DAT_8c437c70);
  }
  else {
    dVar7 = 1.4411521878487204e+18;
    in_xd0 = _DAT_8c437c70;
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
    dVar7 = -3.745782517784109e-250;
  }
  if (cVar10 == '\0') {
    ar4_00 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    ar4_00 = (int)(dVar7 / dVar7);
  }
  FUN_8c25747c(ar4_00,ar5_00,ar6,ar7,iVar5);
  FUN_8c010e38(ar4_00,ar5_00,ar6,ar7,iVar5);
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x41200000,(int)_DAT_8c437c70);
  }
  else {
    dVar7 = 6.207226606352174e-78;
    in_xd0 = _DAT_8c437c70;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 + dVar7,0);
  }
  if (cVar11 == '\0') {
    _DAT_8c437c70 = CONCAT44(_DAT_8c437c74,fVar6);
    pcVar9 = (code *)0x43b40000;
  }
  else {
    fVar6 = 360.0;
    pcVar9 = FUN_8c25747c;
    _DAT_8c437c70 = in_xd0;
  }
  uVar1 = _DAT_8c437c70;
  if (cVar10 != '\0' || (float)pcVar9 <= fVar6) {
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,(int)_DAT_8c437c70);
    }
    else {
      dVar7 = -3.745782517784109e-250;
      in_xd0 = _DAT_8c437c70;
    }
    if (cVar10 == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    uVar1 = in_xd0;
    if (cVar11 == '\0') {
      _DAT_8c437c70 = CONCAT44(_DAT_8c437c74,fVar6);
      uVar1 = _DAT_8c437c70;
    }
  }
  _DAT_8c437c70 = uVar1;
  return &DAT_8c0d46bc;
}



/* FUN_8c0d46cc @ 8c0d46cc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d46cc) */
/* WARNING: Removing unreachable block (ram,0x8c0d46e4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d46cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffffa8;
  float fStack_24;
  float fStack_20;
  
  cVar8 = '\0';
  cVar7 = '\0';
  piVar1 = (int *)get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7);
  uVar2 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = uVar2;
  FUN_8c01538c(ar4 + 8,ar5,ar6,ar7);
  FUN_8c233dac(ar4 + 0x5ec,ar5,ar6,ar7);
  FUN_8c015af8(ar4 + 0x1c,ar5,ar6,ar7);
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    FUN_8c0d43cc(&fStack_24,ar5,ar6,ar7);
    if (cVar8 == '\0') {
      fVar5 = -150.0;
      fVar4 = fStack_24;
    }
    else {
      fVar4 = -150.0;
      fVar5 = 800.0;
    }
    if (cVar7 != '\0' || fVar5 <= fVar4) {
      if (cVar8 == '\0') {
        fVar5 = 800.0;
        fVar4 = fStack_24;
      }
      else {
        fVar4 = 800.0;
        fVar5 = -100.0;
      }
      if (cVar7 != '\0' || fVar4 <= fVar5) {
        if (cVar8 == '\0') {
          fVar5 = -100.0;
          fVar4 = fStack_20;
        }
        else {
          fVar4 = -100.0;
          fVar5 = 600.0;
        }
        if (cVar7 != '\0' || fVar5 <= fVar4) {
          if (cVar8 == '\0') {
            pcVar6 = (code *)0x44160000;
            fVar4 = fStack_20;
          }
          else {
            fVar4 = 600.0;
            pcVar6 = FUN_8c256328;
          }
          if (cVar7 != '\0' || fVar4 <= (float)pcVar6) {
            uVar2 = 0;
            FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffffa8);
            FUN_8c019058(uVar2,ar5,ar6,ar7);
            FUN_8c019160(uVar2,ar5,ar6,ar7);
            FUN_8c015af8(ar4 + iVar3 * 4 + 0x20,ar5,ar6,ar7);
            FUN_8c256210(1,ar5,ar6,ar7);
          }
        }
      }
    }
  }
  uVar2 = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = uVar2;
  FUN_8c233dac(&DAT_8c13f320,ar5,ar6,ar7);
  FUN_8c0d49cc(ar4,ar5,ar6,ar7);
  FUN_8c0d4a90(ar4,ar5,ar6,ar7);
  uVar2 = FUN_8c0d5d28(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c0d4900 @ 8c0d4900 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4900(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(*(code *)PTR_get_field_4_0253e4_8c0d49b8)(ar4 + 8,ar5,ar6,ar7);
  uVar2 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = uVar2;
  (*(code *)PTR_FUN_8c0d49bc)(ar4 + 8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d49c0)(ar4 + 0x1c,ar5,ar6,ar7);
  uVar2 = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = uVar2;
  (*(code *)PTR_FUN_8c0d49c4)(ar4,ar5,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c0d49c8)(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c0d49cc @ 8c0d49cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d49cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar2;
  undefined4 in_PR;
  char cVar3;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar3 = '\0';
  uStack_34 = DAT_8c13f4f8;
  uStack_28 = DAT_8c13f504;
  uStack_24 = DAT_8c13f508;
  puStack_30 = &uStack_20;
  puStack_2c = &uStack_34;
  uStack_14 = in_PR;
  iVar1 = get_field_d0_0d3f70(ar4 + 0x34,ar5,ar6,ar7);
  ar4_00 = FUN_8c0d3f50(ar4 + 0x34,ar5,ar6,ar7);
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    if (cVar3 == '\0') {
      uStack_20 = *(undefined4 *)(ar4_00 + 8);
      uStack_1c = *(undefined4 *)(ar4_00 + 0xc);
      uStack_18 = *(undefined4 *)(ar4_00 + 0x10);
    }
    else {
      uStack_20 = (undefined4)*(undefined8 *)(ar4_00 + 8);
      uStack_1c = (undefined4)*(undefined8 *)(ar4_00 + 0xc);
      uStack_18 = (undefined4)*(undefined8 *)(ar4_00 + 0x10);
      uStack_14 = (undefined4)((ulonglong)*(undefined8 *)(ar4_00 + 0x10) >> 0x20);
    }
    ar6_00 = 0x40;
    ar5_00 = 1;
    FUN_8c234fd0(&puStack_30,1,0x40,ar7);
    ar4_00 = list_node_next(ar4_00,ar5_00,ar6_00,ar7);
  }
  return ar4_00;
}



/* FUN_8c0d4a90 @ 8c0d4a90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4a90(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  float fVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  FUN_8c01538c(ar4 + 0x108,ar5,ar6,ar7);
  iVar2 = 0;
  do {
    if (4 < iVar2) {
      return 5;
    }
    iVar1 = get_field_40_0d3d64(iVar2 * 0x44 + ar4 + 0x470,ar5,ar6,ar7);
    if (iVar1 != 0) {
      iVar1 = get_field_40_0d3d64(iVar2 * 0x44 + ar4 + 0x470,ar5,ar6,ar7);
      if (iVar1 == 1) {
        if (cVar6 == '\0') {
          fVar3 = *(float *)(iVar2 * 0x44 + ar4 + 0x478);
          pcVar4 = (code *)0x44960000;
        }
        else {
          fVar3 = 1200.0;
          pcVar4 = get_field_3c_0d4bd4;
        }
        if (cVar5 == '\0' && (float)pcVar4 < fVar3) goto LAB_8c0d4b8e;
      }
      iVar1 = get_field_3c_0d4bd4(iVar2 * 0x44 + ar4 + 0x470,ar5,ar6,ar7);
      if ((iVar1 == 3) || (iVar1 == 4)) {
        ar6 = ar4 + 0x154;
        ar5 = ar4 + 0x108;
        FUN_8c0d2264(iVar2 * 0x44 + ar4 + 0x470,ar5,ar6,ar7);
      }
      else {
        ar7 = ar4 + 0x110;
        ar6 = ar4 + 0x430;
        ar5 = ar4 + 0x108;
        FUN_8c0d2478(iVar2 * 0x44 + ar4 + 0x470,ar5,ar6,ar7);
      }
    }
LAB_8c0d4b8e:
    iVar2 = iVar2 + 1;
  } while( true );
}



/* get_field_3c_0d4bd4 @ 8c0d4bd4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_3c_0d4bd4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x3c);
}



/* FUN_8c0d4bdc @ 8c0d4bdc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d4c1e) */
/* WARNING: Removing unreachable block (ram,0x8c0d4c16) */
/* WARNING: Removing unreachable block (ram,0x8c0d4c08) */
/* WARNING: Removing unreachable block (ram,0x8c0d4c00) */
/* WARNING: Removing unreachable block (ram,0x8c0d4bf8) */
/* WARNING: Removing unreachable block (ram,0x8c0d4bee) */
/* WARNING: Removing unreachable block (ram,0x8c0d4bea) */
/* WARNING: Removing unreachable block (ram,0x8c0d4bf0) */
/* WARNING: Removing unreachable block (ram,0x8c0d4bfc) */
/* WARNING: Removing unreachable block (ram,0x8c0d4c04) */
/* WARNING: Removing unreachable block (ram,0x8c0d4c12) */
/* WARNING: Removing unreachable block (ram,0x8c0d4c1a) */
/* WARNING: Removing unreachable block (ram,0x8c0d4c22) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4bdc(float *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  undefined1 auStack_20 [12];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(float *)(*(int *)(ar5 + 0xc) + 4) <= *ar4) {
    uStack_10 = 0x3f34fdf4;
  }
  else {
    uStack_10 = 0xbf34fdf4;
  }
  uStack_c = 0xbf34fdf4;
  uStack_14 = 0;
  ar6_00 = auStack_20;
  ar5_00 = &uStack_14;
  uVar1 = 0;
  FUN_8c21279c(0,ar5_00,ar6_00,ar7,ar4);
  FUN_8c219038(uVar1,ar5_00,ar6_00,ar7);
  uVar1 = FUN_8c219070(uVar1,ar5_00,ar6_00,ar7);
  return uVar1;
}



/* FUN_8c0d4c74 @ 8c0d4c74 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d4c74) */
/* WARNING: Removing unreachable block (ram,0x8c0d4c88) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4c74(float *ar4,undefined4 *ar5,int ar6,float ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  int ar6_00;
  float ar7_00;
  int iVar3;
  float fVar4;
  undefined8 in_dr0;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  undefined4 auStack_20 [2];
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar3 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  while( true ) {
    if (4 < iVar3) {
      if (ar6 == 3) {
        auStack_20[0] = FUN_8c02190c(0x8c2b59d0,ar5_00,ar6_00,ar7_00);
        ar6_00 = 8;
        FUN_8c021994(0x8c2b59d0,auStack_20[0],8,ar7_00);
        ar5_00 = auStack_20;
        FUN_8c021a8c(0x8c2b59d0,ar5_00,ar6_00,ar7_00);
      }
      else if (ar6 == 1) {
        auStack_20[0] = FUN_8c02190c(0x8c2b59d0,ar5_00,ar6_00,ar7_00);
        ar6_00 = 0x11;
        FUN_8c021994(0x8c2b59d0,auStack_20[0],0x11,ar7_00);
        ar5_00 = auStack_20;
        FUN_8c021a8c(0x8c2b59d0,ar5_00,ar6_00,ar7_00);
      }
      else if (ar6 == 2) {
        auStack_20[0] = FUN_8c02190c(0x8c2b59d0,ar5_00,ar6_00,ar7_00);
        ar6_00 = 7;
        FUN_8c021994(0x8c2b59d0,auStack_20[0],7,ar7_00);
        ar5_00 = auStack_20;
        FUN_8c021a8c(0x8c2b59d0,ar5_00,ar6_00,ar7_00);
      }
      else if (ar6 == 4) {
        auStack_20[0] = FUN_8c02190c(0x8c2b59d0,ar5_00,ar6_00,ar7_00);
        ar6_00 = 0x13;
        FUN_8c021994(0x8c2b59d0,auStack_20[0],0x13,ar7_00);
        ar5_00 = auStack_20;
        FUN_8c021a8c(0x8c2b59d0,ar5_00,ar6_00,ar7_00);
      }
      iVar3 = 0;
      while( true ) {
        if (4 < iVar3) {
          return 5;
        }
        iVar1 = get_field_40_0d3d64(ar4 + iVar3 * 0x11 + 0x11c,ar5_00,ar6_00,ar7_00);
        fVar4 = (float)in_dr0;
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 1;
      }
      Vec3_assign(ar4 + iVar3 * 0x11 + 0x11c,ar5,ar6_00,ar7_00);
      if (cVar6 == '\0') {
        fVar4 = *ar4;
      }
      else {
        in_xd0 = *(undefined8 *)ar4;
      }
      if (cVar5 == '\0') {
        fVar4 = fVar4 - 1.0;
      }
      else {
        fVar4 = SUB84((double)CONCAT44(0x3f800000,fVar4) - (double)CONCAT44(0x3f800000,fVar4),0);
      }
      if (cVar6 == '\0') {
        ar4[iVar3 * 0x11 + 0x11d] = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + iVar3 * 0x11 + 0x11d) = in_xd0;
      }
      FUN_8c0d20f0(ar4 + iVar3 * 0x11 + 0x11c,ar7,ar6,ar7_00);
      uVar2 = FUN_8c0d4e7c(ar4 + iVar3 * 0x11 + 0x11c,ar7,ar6,ar7_00);
      return uVar2;
    }
    iVar1 = get_field_40_0d3d64(ar4 + iVar3 * 0x11 + 0x11c,ar5_00,ar6_00,ar7_00);
    if ((iVar1 == 1) && (ar4[iVar3 * 0x11 + 0x126] == ar7)) break;
    iVar3 = iVar3 + 1;
  }
  return ar4[iVar3 * 0x11 + 0x126];
}



/* FUN_8c0d4e7c @ 8c0d4e7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4e7c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x40) = 1;
  return 0x40;
}



/* FUN_8c0d4e88 @ 8c0d4e88 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d4e92) */
/* WARNING: Removing unreachable block (ram,0x8c0d4e88) */
/* WARNING: Removing unreachable block (ram,0x8c0d4e94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined1 * FUN_8c0d4e88(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  float fVar1;
  undefined8 in_dr0;
  undefined4 uVar3;
  undefined1 *puVar4;
  double dVar2;
  float fVar5;
  undefined4 in_fr3;
  double dVar6;
  double in_xd0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  Class_12c394_m0_102b04(0x8c437a78,ar5,ar6,ar7);
  uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar8 == '\0') {
    fVar1 = *(float *)(ar5 + 8);
    puVar4 = (undefined1 *)0x44bb8000;
    _DAT_8c437c78 = uVar3;
  }
  else {
    _DAT_8c437c78 = (undefined4)in_dr0;
    in_xd0 = *(double *)(ar5 + 8);
    fVar1 = 1500.0;
    puVar4 = &DAT_8c437844;
    _DAT_8c437c7c = uVar3;
  }
  if (cVar7 != '\0' || fVar1 <= (float)puVar4) {
    if (cVar8 == '\0') {
      dVar2 = (double)CONCAT44(0x44bb8000,_DAT_8c437c78);
    }
    else {
      in_xd0 = (double)CONCAT44(_DAT_8c437c7c,_DAT_8c437c78);
      dVar2 = -1.3596743611313892e-249;
    }
    if (cVar7 == '\0') {
      fVar1 = (float)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)CONCAT44(fVar1,SUB84(dVar2,0) * fVar1);
    }
    else {
      dVar2 = dVar2 * dVar2;
    }
    if (cVar8 == '\0') {
      _DAT_8c437844 = SUB84(dVar2,0);
    }
    else {
      _DAT_8c437844 = SUB84(in_xd0,0);
      _DAT_8c437848 = (float)((ulonglong)in_xd0 >> 0x20);
    }
  }
  else {
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar5 + 8),in_fr3);
      dVar2 = (double)CONCAT44(0x44bb8000,fVar1);
    }
    else {
      dVar6 = *(double *)(ar5 + 8);
      dVar2 = -1.3596743611313892e-249;
    }
    if (cVar7 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - (float)((ulonglong)dVar2 >> 0x20)
                               ,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - dVar2;
    }
    if (cVar8 == '\0') {
      dVar2 = (double)CONCAT44(0x44bb8000,_DAT_8c437c78);
    }
    else {
      in_xd0 = (double)CONCAT44(_DAT_8c437c7c,_DAT_8c437c78);
      dVar2 = -1.3596743611313892e-249;
    }
    if (cVar7 == '\0') {
      fVar5 = (float)((ulonglong)dVar2 >> 0x20);
      fVar1 = SUB84(dVar2,0) * fVar5;
      dVar2 = (double)CONCAT44(fVar5,fVar1);
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + fVar1,SUB84(dVar6,0));
    }
    else {
      dVar2 = dVar2 * dVar2;
      dVar6 = dVar6 + dVar2;
    }
    fVar1 = (float)((ulonglong)dVar6 >> 0x20);
    _DAT_8c437844 = fVar1;
    if (cVar8 != '\0') {
      _DAT_8c437844 = SUB84(dVar6,0);
      _DAT_8c437848 = fVar1;
    }
  }
  Class_12c394_m0_102b04(0x8c437aa4,ar5_00,ar6,ar7);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(0x44bb8000,(int)((ulonglong)dVar2 >> 0x20));
    dVar2 = in_xd0;
  }
  else {
    dVar6 = -1.3596743611313892e-249;
  }
  if (cVar7 == '\0') {
    fVar1 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar6 * dVar6,0);
  }
  fVar5 = _DAT_8c437844;
  _DAT_8c437c74 = fVar1;
  if (cVar8 != '\0') {
    _DAT_8c437c74 = SUB84(dVar2,0);
    _DAT_8c437c78 = (undefined4)((ulonglong)dVar2 >> 0x20);
    dVar2 = (double)CONCAT44(_DAT_8c437848,_DAT_8c437844);
    fVar5 = fVar1;
  }
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(_DAT_8c437c74,fVar5);
  }
  else {
    dVar6 = (double)CONCAT44(_DAT_8c437c78,_DAT_8c437c74);
  }
  if (cVar7 == '\0') {
    _DAT_8c437848 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    _DAT_8c437848 = SUB84(dVar6 + dVar6,0);
  }
  if (cVar8 != '\0') {
    _DAT_8c437848 = SUB84(dVar2,0);
    _DAT_8c43784c = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  return &DAT_8c437c74;
}



/* FUN_8c0d4f3c @ 8c0d4f3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4f3c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  DAT_8c0d4f64[2] = 0x32;
  DAT_8c0d4f64[1] = 0x32;
  *DAT_8c0d4f64 = 0x1f;
  *DAT_8c0d4f68 = 1;
  uVar1 = (*(code *)PTR_FUN_8c0d4f6c)(0xffffffff,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d4f70 @ 8c0d4f70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4f70(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  DAT_8c0d4f98[2] = 10;
  DAT_8c0d4f98[1] = 10;
  *DAT_8c0d4f98 = 10;
  *DAT_8c0d4f9c = 1;
  uVar1 = (*(code *)PTR_FUN_8c0d4fa4)(DAT_8c0d4fa0,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d4fa8 @ 8c0d4fa8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4fa8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((byte)ar5 < 2) {
    uVar1 = (*(code *)PTR_s_40_BUBBLE_MONO_0d4fea_8c0d4fe0)(ar4,ar5,ar6,ar7);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c0d4fe4)(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* s_40_BUBBLE_MONO_0d4fea @ 8c0d4fe8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_40_BUBBLE_MONO_0d4fea(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d5024)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_pack_find_by_name_buffered_8c0d5034)
                    (DAT_8c0d5030,PTR_s_GRAPHICS_COMMON_8c0d5028 + DAT_8c0d502c,ar6,ar7);
  *(undefined4 *)(DAT_8c0d5038 + ar4) = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c0d503c)(DAT_8c0d5030,*(undefined4 *)(DAT_8c0d5038 + ar4),ar6,ar7);
  return uVar1;
}



/* FUN_8c0d5040 @ 8c0d5040 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d5040(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_pack_find_by_name_buffered_8c0d508c)
                    (DAT_8c0d5088,PTR_s_GRAPHICS_COMMON_8c0d5080 + DAT_8c0d5084,ar6,ar7);
  *(undefined4 *)(DAT_8c0d5090 + ar4) = uVar1;
  (*(code *)PTR_FUN_8c0d5094)(DAT_8c0d5088,*(undefined4 *)(DAT_8c0d5090 + ar4),ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d509c)(DAT_8c0d5088,DAT_8c0d5098,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d50a0 @ 8c0d50a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d50a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d50b0)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d50b4 @ 8c0d50b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d50b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d50e4)(DAT_8c0d50e0,*(undefined4 *)(DAT_8c0d50dc + ar4),ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d50e8)(DAT_8c0d50e0,*(undefined4 *)(DAT_8c0d50dc + ar4),ar6,ar7);
  return uVar1;
}



/* FUN_8c0d50ec @ 8c0d50ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d50ec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((byte)ar5 < 2) {
    uVar1 = (*(code *)PTR_FUN_8c0d5124)(ar4,ar5,ar6,ar7);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c0d5128)(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0d512c @ 8c0d512c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d512c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0d51d8)(DAT_8c0d51d4,*(undefined4 *)(DAT_8c0d51d0 + ar4),ar6,ar7);
  (*(code *)PTR_FUN_8c0d51dc)(DAT_8c0d51d4,*(undefined4 *)(DAT_8c0d51d0 + ar4),ar6,ar7);
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c0d51e0 + iVar1 * 0x18 + ar4) != -1) {
      (*(code *)PTR_FUN_8c0d51e4)
                (DAT_8c0d51d4,*(undefined4 *)(DAT_8c0d51e0 + iVar1 * 0x18 + ar4),ar6,ar7);
      (*(code *)PTR_FUN_8c0d51e8)(DAT_8c0d51d4,iVar1 * 0x18 + ar4 + DAT_8c0d51e0,ar6,ar7);
      *(undefined4 *)(DAT_8c0d51e0 + iVar1 * 0x18 + ar4) = 0xffffffff;
    }
  }
  return 2;
}



/* FUN_8c0d51ec @ 8c0d51ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d51ec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0d5210)(DAT_8c0d520c,0,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d5214)(ar4,uVar1,ar6,ar7);
  return uVar1;
}



/* s_GRAPHICS_ENV_0d5220 @ 8c0d5218 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d546c) */
/* WARNING: Removing unreachable block (ram,0x8c0d5494) */
/* WARNING: Removing unreachable block (ram,0x8c0d54b0) */
/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d5220(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar4_00;
  undefined4 ***ar5_00;
  char *pcVar4;
  double *pdVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 **ppuVar8;
  double dVar9;
  double in_dr2;
  undefined8 in_xd0;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffffac;
  undefined4 uStack_20;
  undefined4 **ppuStack_1c;
  undefined4 **appuStack_18 [2];
  
  cVar11 = '\0';
  cVar10 = '\0';
  appuStack_18[0] = (undefined4 ***)0x0;
  ppuStack_1c = (undefined4 ***)0x0;
  uStack_20 = 0;
  FUN_8c235ee4(ar4,ar5,ar6,ar7);
  FUN_8c020a70(ar5,s_suisou_WaterFace_nj_8c13f91e,s_GRAPHICS_ENV_8c13f8cb,ar4);
  pcVar4 = s_GRAPHICS_ENV_8c13f8cb;
  pdVar5 = ar4;
  FUN_8c020b68(ar5,s_suisou_WaterFace_nj_8c13f91e,s_GRAPHICS_ENV_8c13f8cb,ar4);
  FUN_8c015ad4(ar4 + 2,0,pcVar4,pdVar5,in_stack_ffffffac);
  FUN_8c020a70(ar5,s_suisou_Effect_nj_8c13f986,s_GRAPHICS_ENV_8c13f8cb,ar4);
  pcVar4 = s_GRAPHICS_ENV_8c13f8cb;
  pdVar5 = ar4;
  FUN_8c020b68(ar5,s_suisou_Effect_nj_8c13f986,s_GRAPHICS_ENV_8c13f8cb,ar4);
  FUN_8c015ad4((int)ar4 + 0x1c,0,pcVar4,pdVar5,in_stack_ffffffac);
  iVar1 = FUN_8c0209fc(ar5,s_suisou_WaterFace_small_nj_8c13fa0c,s_GRAPHICS_ENV_8c13f8cb,&ppuStack_1c
                      );
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_WaterFace_small_nj_8c13fa0c,s_Failed_NJCM_WATER_ELEMENT__Prepa_8c13fb30,0,2)
    ;
  }
  puVar6 = &uStack_20;
  pcVar4 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_WaterFace_small_nj_8c13fa0c,s_GRAPHICS_ENV_8c13f8cb,puVar6);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x2;
    pcVar4 = (char *)0x0;
    report_error_message
              (s_suisou_WaterFace_small_nj_8c13fa0c,s_Failed_NJTL_WATER_ELEMENT__Prepa_8c13fb67,0,2)
    ;
  }
  FUN_8c015ad4(ar4 + 2,ppuStack_1c,pcVar4,puVar6,in_stack_ffffffac);
  iVar1 = FUN_8c0209fc(ar5,s_suisou_Effect_small_nj_8c13fa7a,s_GRAPHICS_ENV_8c13f8cb,&ppuStack_1c);
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_Effect_small_nj_8c13fa7a,s_Failed_NJCM_WATER_ELEMENT__Prepa_8c13fb30,0,2);
  }
  puVar6 = &uStack_20;
  pcVar4 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_Effect_small_nj_8c13fa7a,s_GRAPHICS_ENV_8c13f8cb,puVar6);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x2;
    pcVar4 = (char *)0x0;
    report_error_message
              (s_suisou_Effect_small_nj_8c13fa7a,s_Failed_NJTL_WATER_ELEMENT__Prepa_8c13fb67,0,2);
  }
  ar5_00 = (undefined4 ***)ppuStack_1c;
  FUN_8c015ad4((int)ar4 + 0x1c,ppuStack_1c,pcVar4,puVar6,in_stack_ffffffac);
  iVar1 = FUN_8c015bb8((int)ar4 + 0x1c,ar5_00,pcVar4,puVar6);
  uVar2 = FUN_8c0151fc(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),ar5_00,pcVar4,puVar6);
  *(undefined4 *)((int)ar4 + 0x2c) = uVar2;
  FUN_8c0d5de0(ar4,ar5_00,pcVar4,puVar6);
  while (iVar1 = get_field_d0_0d3f70((int)ar4 + 0x34,ar5_00,pcVar4,puVar6), iVar1 != 0) {
    iVar1 = get_field_d0_0d3f70((int)ar4 + 0x34,ar5_00,pcVar4,puVar6);
    appuStack_18[0] =
         (undefined4 **)
         s_CWaterSnowList_GetWaterSnowO_0fe76c((int)ar4 + 0x34,iVar1 + -1,pcVar4,puVar6);
    s_CWaterSnowList_TakeOut_0fe694((int)ar4 + 0x34,appuStack_18[0],pcVar4,puVar6);
    ar5_00 = appuStack_18;
    FUN_8c0fec4c(0x8c3e7d30,ar5_00,pcVar4,puVar6);
  }
  FUN_8c0fe7f4((int)ar4 + 0x34,ar5_00,pcVar4,puVar6);
  for (iVar1 = 0; uVar2 = SUB84(in_dr2,0), iVar1 < 0x32; iVar1 = iVar1 + 1) {
    ar4_00 = 0x8c3e7d30;
    appuStack_18[0] = (undefined4 **)FUN_8c0febf0(0x8c3e7d30,ar5_00,pcVar4,puVar6);
    if ((undefined4 ***)appuStack_18[0] == (undefined4 ***)0x0) break;
    iVar3 = rand(ar4_00,ar5_00,pcVar4,puVar6);
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 1.1215622395287742e+23;
    }
    if (cVar10 == '\0') {
      fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x44b7c000,fVar7);
    }
    else {
      dVar9 = 7.673846743559028e+21;
    }
    if (cVar10 == '\0') {
      fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x447a0000,fVar7);
    }
    else {
      dVar9 = 2.8924499526186286e+22;
    }
    if (cVar10 == '\0') {
      ppuVar8 = (undefined4 **)(SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      ppuVar8 = SUB84(dVar9 + dVar9,0);
    }
    if (cVar11 == '\0') {
      appuStack_18[0][2] = ppuVar8;
    }
    else {
      *(undefined8 *)(appuStack_18[0] + 2) = in_xd0;
    }
    iVar3 = rand(ar4_00,ar5_00,pcVar4,puVar6);
    if (cVar11 == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)ar4,uVar2);
    }
    else {
      in_dr2 = *ar4;
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 1.1215622395287742e+23;
    }
    if (cVar10 == '\0') {
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) *
                                (SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20)),SUB84(in_dr2,0)
                               );
    }
    else {
      in_dr2 = in_dr2 * (dVar9 / dVar9);
    }
    if (cVar11 == '\0') {
      appuStack_18[0][3] = (undefined4 **)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(appuStack_18[0] + 3) = in_dr2;
    }
    iVar3 = rand(ar4_00,ar5_00,pcVar4,puVar6);
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x47000000,(float)iVar3);
    }
    else {
      dVar9 = 1.1215622395287742e+23;
    }
    if (cVar10 == '\0') {
      fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x44988000,fVar7);
    }
    else {
      dVar9 = 2.5220161595978547e+17;
    }
    if (cVar10 == '\0') {
      fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x438c0000,fVar7);
    }
    else {
      dVar9 = -1.392258127104201e-250;
    }
    if (cVar10 == '\0') {
      ppuVar8 = (undefined4 **)(SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      ppuVar8 = SUB84(dVar9 + dVar9,0);
    }
    if (cVar11 == '\0') {
      appuStack_18[0][4] = ppuVar8;
    }
    else {
      *(undefined8 *)(appuStack_18[0] + 4) = in_xd0;
    }
    ar5_00 = (undefined4 ***)appuStack_18[0];
    FUN_8c0fe5f0((int)ar4 + 0x34,appuStack_18[0],pcVar4,puVar6);
  }
  uVar2 = FUN_8c0d5040(ar4,ar5_00,pcVar4,puVar6);
  return uVar2;
}



/* FUN_8c0d5578 @ 8c0d5578 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d5578(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d559c)(ar4 + 8,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d559c)(ar4 + DAT_8c0d55a0,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d55a4 @ 8c0d55a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d55a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_s_Failed_s_015312_8c0d55c8)(ar4 + 8,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0d55c8)(ar4 + DAT_8c0d55cc,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d55d0 @ 8c0d55d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d55d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0d5608)(DAT_8c0d5604,*(undefined4 *)(DAT_8c0d5600 + ar4),ar6,ar7);
  iVar1 = *(int *)(DAT_8c0d560c + ar4);
  if (iVar1 != -1) {
    iVar1 = (*(code *)PTR_FUN_8c0d5610)(DAT_8c0d5604,*(undefined4 *)(DAT_8c0d560c + ar4),1,ar7);
  }
  return iVar1;
}



/* FUN_8c0d5614 @ 8c0d5614 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d5614(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0d5680)(DAT_8c0d567c,*(undefined4 *)(DAT_8c0d5678 + ar4),ar6,ar7);
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c0d5684 + iVar1 * 0x18 + ar4) != -1) {
      (*(code *)PTR_FUN_8c0d5688)
                (DAT_8c0d567c,*(undefined4 *)(DAT_8c0d5684 + iVar1 * 0x18 + ar4),ar6,ar7);
    }
  }
  return 2;
}



/* FUN_8c0d568c @ 8c0d568c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d568c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d56b0)(DAT_8c0d56ac,*(undefined4 *)(DAT_8c0d56a8 + ar4),ar6,ar7);
  return uVar1;
}



/* FUN_8c0d56b4 @ 8c0d56b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d56b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d56d8)(DAT_8c0d56d4,*(undefined4 *)(DAT_8c0d56d0 + ar4),ar6,ar7);
  return uVar1;
}



/* FUN_8c0d56dc @ 8c0d56dc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d5706) */
/* WARNING: Removing unreachable block (ram,0x8c0d56fa) */
/* WARNING: Removing unreachable block (ram,0x8c0d56ee) */
/* WARNING: Removing unreachable block (ram,0x8c0d56f0) */
/* WARNING: Removing unreachable block (ram,0x8c0d56fc) */
/* WARNING: Removing unreachable block (ram,0x8c0d5708) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d56dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(ar4 + 0x5c4) = 0x3f4ccccd;
  *(undefined4 *)(ar4 + 0x5c8) = 0x3f4ccccd;
  *(undefined4 *)(ar4 + 0x5cc) = 0x3f4ccccd;
  *(undefined2 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 0x5e8) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    if (*(int *)(iVar1 * 0x18 + ar4 + 0x600) != -1) {
      FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(iVar1 * 0x18 + ar4 + 0x600),ar6,ar7);
      FUN_8c021a8c(0x8c2b59d0,iVar1 * 0x18 + ar4 + 0x600,ar6,ar7);
      *(undefined4 *)(iVar1 * 0x18 + ar4 + 0x600) = 0xffffffff;
    }
  }
  *(undefined4 *)(ar4 + 0x61c) = 0xffffffe2;
  DAT_8c437843 = 0xff;
  DAT_8c437842 = 0x32;
  DAT_8c437841 = 0x32;
  DAT_8c437840 = 0x1f;
  return 0x1f;
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



/* FUN_8c0d59a4 @ 8c0d59a4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d59be) */
/* WARNING: Removing unreachable block (ram,0x8c0d59ba) */
/* WARNING: Removing unreachable block (ram,0x8c0d59a6) */
/* WARNING: Removing unreachable block (ram,0x8c0d59a4) */
/* WARNING: Removing unreachable block (ram,0x8c0d59a8) */
/* WARNING: Removing unreachable block (ram,0x8c0d59bc) */
/* WARNING: Removing unreachable block (ram,0x8c0d5aa2) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d59a4(int ar4,int ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *ar4_00;
  int ar5_00;
  int ar6_00;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined8 in_dr0;
  double dVar8;
  float fVar9;
  char cVar10;
  char cVar11;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  iVar5 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_34,ar5,ar6,ar7);
  iVar6 = 0;
  while ((iVar6 < 0x226 && (iVar5 < ar5))) {
    iVar3 = get_field_44_0d5ca0(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
    uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = get_field_164_0d5c94(ar6,ar5_00,ar6_00,ar7);
      if (iVar3 == 2) {
        FUN_8c0d26ac(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
        FUN_8c0d5c88(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
        FUN_8c0d5c68(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7,auStack_44);
        Vec3_assign(auStack_34,auStack_44,ar6_00,ar7);
        ar5_00 = -1;
        ar4_00 = auStack_44;
        Vec3_dtor(ar4_00,0xffffffff,ar6_00,ar7);
        iVar3 = rand(ar4_00,ar5_00,ar6_00,ar7);
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44(0x47000000,(float)iVar3);
        }
        else {
          dVar8 = 3.051758619676548e-05;
        }
        if (cVar10 == '\0') {
          fVar7 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 / dVar8,0);
        }
        if (cVar11 == '\0') {
          fVar9 = 0.5;
        }
        else {
          fVar7 = 0.5;
          fVar9 = 183.0;
        }
        if (cVar10 != '\0' || fVar9 <= fVar7) {
          if (cVar11 == '\0') {
            in_dr0 = CONCAT44(*(undefined4 *)(ar6 + 0x158),fVar7);
          }
          else {
            in_dr0 = *(undefined8 *)(ar6 + 0x158);
          }
          FUN_8c0d5c58(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
        }
        else {
          if (cVar11 == '\0') {
            in_dr0 = CONCAT44(*(undefined4 *)(ar6 + 0x158),fVar7);
          }
          else {
            in_dr0 = *(undefined8 *)(ar6 + 0x158);
          }
          FUN_8c0d5c58(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
        }
        iVar5 = iVar5 + 1;
      }
      else {
        FUN_8c0d26f0(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
        FUN_8c0d5c68(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7,auStack_54);
        FUN_8c022fc0(auStack_54,ar6 + 4,ar6_00,ar7);
        if (cVar11 == '\0') {
          in_dr0 = CONCAT44(*(undefined4 *)(ar6 + 0x158),uVar4);
        }
        else {
          in_dr0 = *(undefined8 *)(ar6 + 0x158);
        }
        bVar1 = cVar10 != '\0';
        fVar7 = (float)in_dr0;
        uVar2 = (ulonglong)in_dr0 >> 0x20;
        ar5_00 = -1;
        Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
        if (bVar1 || (float)uVar2 <= fVar7) {
          FUN_8c0d276c(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
          FUN_8c0d5c88(iVar6 * 0x88 + ar4 + 0x62c,ar5_00,ar6_00,ar7);
          iVar5 = iVar5 + 1;
        }
      }
    }
    iVar6 = iVar6 + 1;
  }
  uVar4 = Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
  return uVar4;
}



/* FUN_8c0d5c58 @ 8c0d5c58 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d5c5e) */
/* WARNING: Removing unreachable block (ram,0x8c0d5c58) */
/* WARNING: Removing unreachable block (ram,0x8c0d5c62) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d5c58(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4 + 1;
}



/* FUN_8c0d5c68 @ 8c0d5c68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d5c68(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c0d5c84)(s0,ar4,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d5c88 @ 8c0d5c88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d5c88(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x44) = 1;
  return 0x44;
}



/* get_field_164_0d5c94 @ 8c0d5c94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_164_0d5c94(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0d5c9c + ar4);
}



/* get_field_44_0d5ca0 @ 8c0d5ca0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_44_0d5ca0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x44);
}



/* FUN_8c0d5ca8 @ 8c0d5ca8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d5ca8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < DAT_8c0d5d24; iVar3 = iVar3 + 1) {
    iVar1 = (*(code *)PTR_get_field_44_0d5ca0_8c0d5d1c)
                      (iVar3 * 0x88 + ar4 + DAT_8c0d5d18,ar5,ar6,ar7);
    if (iVar1 == 1) {
      (*(code *)PTR_FUN_8c0d5d20)(iVar3 * 0x88 + ar4 + DAT_8c0d5d18,ar5,ar6,ar7);
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}



/* FUN_8c0d5d28 @ 8c0d5d28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d5d28(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(DAT_8c0d5db8 + 2) == '2') {
    (*(code *)PTR_FUN_8c0d5dc0)(PTR_DAT_8c0d5dbc,ar5,ar6,ar7);
  }
  else {
    (*(code *)PTR_FUN_8c0d5dc0)(PTR_DAT_8c0d5dc4,ar5,ar6,ar7);
  }
  for (iVar3 = 0; iVar3 < DAT_8c0d5dd8; iVar3 = iVar3 + 1) {
    iVar1 = (*(code *)PTR_get_field_44_0d5ca0_8c0d5dcc)
                      (iVar3 * 0x88 + ar4 + DAT_8c0d5dc8,ar5,ar6,ar7);
    if (iVar1 == 1) {
      ar5 = ar4 + DAT_8c0d5dd0;
      (*(code *)PTR_FUN_8c0d5dd4)(iVar3 * 0x88 + ar4 + DAT_8c0d5dc8,ar5,ar6,ar7);
    }
  }
  uVar2 = (*(code *)PTR_FUN_8c0d5dc0)(PTR_DAT_8c0d5ddc,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c0d5de0 @ 8c0d5de0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d5de0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c0d5e24)(ar4 + 0x10,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_thunk_FUN_8c0151e8_8c0d5e28)
                    (*(undefined4 *)(*(int *)(iVar1 + 4) + 4),0x17,ar6,ar7);
  *(int *)(ar4 + 0x14) = iVar1 + 4;
  return iVar1;
}



/* FUN_8c0d5e2c @ 8c0d5e2c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d5e66) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d5e2c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*DAT_8c0d5e7c == 1) {
    (*(code *)PTR_FUN_8c0d5e88)
              ((uint)DAT_8c0d5e80[2] << 0x10 | DAT_8c0d5e84 | (uint)DAT_8c0d5e80[1] << 8 |
               (uint)*DAT_8c0d5e80,ar5,ar6,ar7);
    *DAT_8c0d5e7c = 0;
  }
  uVar1 = (*(code *)PTR_FUN_8c0d5e98)(DAT_8c0d5e94,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d5e9c @ 8c0d5e9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d5e9c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0d5ed0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d5ed4)(ar4 + 8,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0d5ed8)(ar4 + 0x10,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d5edc)(ar4,ar5,ar6,ar7);
  return ar4;
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



/* s_Failed_to_set_texture_wrap_0d6058 @ 8c0d6058 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_Failed_to_set_texture_wrap_0d6058(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d6070)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* s_Failed_wrap_0d6074 @ 8c0d6074 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_wrap_0d6074(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0d608c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d6090 @ 8c0d6090 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6090(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d60b0)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d60b4)(ar4 + 8,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d60b8 @ 8c0d60b8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d60c0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d60b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0x3f800000;
  return 0;
}



/* s_GRAPHICS_ENV_0d60cc @ 8c0d60c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d60cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d6114)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0d6108 + DAT_8c0d6110,
             PTR_s_GRAPHICS_COMMON_8c0d6108 + DAT_8c0d610c,ar4);
  uVar1 = (*(code *)PTR_FUN_8c0d6118)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d6108 + DAT_8c0d6110,
                     PTR_s_GRAPHICS_COMMON_8c0d6108 + DAT_8c0d610c,ar4);
  return uVar1;
}



/* FUN_8c0d611c @ 8c0d611c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d611c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  cVar1 = '\0';
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x10) = 0x3dcccccd;
  }
  else {
    *(undefined8 *)(ar4 + 0x10) = 0xffffff3dcccccd;
  }
  *(undefined4 *)(ar4 + 0x1c) = 0xffffff;
  *(undefined4 *)(ar4 + 0x20) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x14) = 0xbf000000;
  }
  else {
    *(undefined8 *)(ar4 + 0x14) = 0x4f222fe6bf000000;
  }
  *(undefined4 *)(ar4 + 0x18) = 0;
  return ar4;
}



/* FUN_8c0d6164 @ 8c0d6164 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d61ec) */
/* WARNING: Removing unreachable block (ram,0x8c0d61bc) */
/* WARNING: Removing unreachable block (ram,0x8c0d61b6) */
/* WARNING: Removing unreachable block (ram,0x8c0d61a8) */
/* WARNING: Removing unreachable block (ram,0x8c0d61a2) */
/* WARNING: Removing unreachable block (ram,0x8c0d6194) */
/* WARNING: Removing unreachable block (ram,0x8c0d618c) */
/* WARNING: Removing unreachable block (ram,0x8c0d617e) */
/* WARNING: Removing unreachable block (ram,0x8c0d6178) */
/* WARNING: Removing unreachable block (ram,0x8c0d617c) */
/* WARNING: Removing unreachable block (ram,0x8c0d6180) */
/* WARNING: Removing unreachable block (ram,0x8c0d6192) */
/* WARNING: Removing unreachable block (ram,0x8c0d6196) */
/* WARNING: Removing unreachable block (ram,0x8c0d61a6) */
/* WARNING: Removing unreachable block (ram,0x8c0d61aa) */
/* WARNING: Removing unreachable block (ram,0x8c0d61ba) */
/* WARNING: Removing unreachable block (ram,0x8c0d61be) */
/* WARNING: Removing unreachable block (ram,0x8c0d61f0) */
/* WARNING: Unknown calling convention */

float * FUN_8c0d6164(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  
  *(float *)(ar4 + 0x14) = *(float *)(ar4 + 0x14) + -0.1;
  *(float *)(ar4 + 4) = *(float *)(ar4 + 4) + *(float *)(ar4 + 0x14);
  *(float *)(ar4 + 8) = *(float *)(ar4 + 8) + -4.0;
  *(float *)(ar4 + 0x10) = *(float *)(ar4 + 0x10) + 0.015;
  pfVar1 = *(float **)(ar4 + 0x18);
  if (pfVar1 == (float *)0x0) {
    if (*(uint *)(ar4 + 0x1c) < 0xe6ffffff) {
      *(int *)(ar4 + 0x1c) = *(int *)(ar4 + 0x1c) + 0x19000000;
    }
    pfVar1 = (float *)(ar4 + 0x10);
    if (1.0 <= *pfVar1) {
      *(undefined4 *)(ar4 + 0x1c) = 0xffffffff;
      pfVar1 = (float *)0x1;
      *(undefined4 *)(ar4 + 0x18) = 1;
    }
  }
  else if (pfVar1 == (float *)0x1) {
    pfVar1 = (float *)libgcc_divide_helper_0103d0(ar5,0x2d,ar6,ar7);
    if (pfVar1 == (float *)0x0) {
      pfVar1 = (float *)0x2;
      *(undefined4 *)(ar4 + 0x18) = 2;
    }
  }
  else if (pfVar1 == (float *)0x2) {
    if (*(uint *)(ar4 + 0x1c) < 0x7000000) {
      pfVar1 = (float *)0x0;
      *(undefined4 *)(ar4 + 0x20) = 0;
    }
    else {
      pfVar1 = (float *)0x6000000;
      *(int *)(ar4 + 0x1c) = *(int *)(ar4 + 0x1c) + -0x6000000;
    }
  }
  return pfVar1;
}



/* FUN_8c0d6264 @ 8c0d6264 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d6272) */
/* WARNING: Removing unreachable block (ram,0x8c0d626e) */
/* WARNING: Removing unreachable block (ram,0x8c0d6276) */
/* WARNING: Unknown calling convention */

int FUN_8c0d6264(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  code *ar6_00;
  undefined4 ar7_00;
  undefined4 in_fr1;
  ulonglong uVar1;
  char cVar2;
  
  cVar2 = '\0';
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x20,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x30,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x40,ar5,ar6,ar7);
  ar7_00 = 0x20;
  ar6_00 = FUN_8c0d6424;
  ar5_00 = FUN_8c0d646c;
  FUN_8c010120(ar4 + 0x68,FUN_8c0d646c,FUN_8c0d6424,0x20,4);
  FUN_8c0d646c(ar4 + 0xe8,ar5_00,ar6_00,ar7_00);
  FUN_8c0d63f8(ar4 + 0x108,ar5_00,ar6_00,ar7_00);
  FUN_8c0d646c(ar4 + 0x11c,ar5_00,ar6_00,ar7_00);
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x54) = 0x459c4000;
    uVar1 = CONCAT44(0x44bb8000,in_fr1);
    *(undefined4 *)(ar4 + 0x58) = 0x44bb8000;
  }
  else {
    *(undefined8 *)(ar4 + 0x54) = 0x44bb8000459c4000;
    uVar1 = 0x13c44bb8000;
    *(undefined8 *)(ar4 + 0x58) = 0x13c44bb8000;
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x5c) = 0;
    *(undefined4 *)(ar4 + 0x13c) = 0x42340000;
  }
  else {
    *(ulonglong *)(ar4 + 0x5c) = uVar1 & 0xffffffff;
    *(undefined8 *)(ar4 + 0x13c) = 0x4316000042340000;
  }
  FUN_8c102a7c(ar4 + 0x11c,ar5_00,ar6_00,ar7_00);
  FUN_8c102a7c(ar4 + 0xe8,ar5_00,ar6_00,ar7_00);
  FUN_8c0d6c9c(ar4,ar5_00,ar6_00,ar7_00);
  return ar4;
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



/* FUN_8c0d63f8 @ 8c0d63f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d63f8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d6420)(ar4,ar5,ar6,ar7);
  return uVar1;
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



/* FUN_8c0d646c @ 8c0d646c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d646c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d649c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d64a0 @ 8c0d64a0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d64a0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d64a0(undefined8 *ar4,undefined4 ar5,undefined8 *ar6,undefined8 *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *a5;
  double in_dr0;
  undefined8 uVar3;
  float fVar6;
  double dVar4;
  double dVar5;
  undefined8 in_dr14;
  uint uVar8;
  double dVar7;
  undefined8 in_xd0;
  double in_xd14;
  char cVar9;
  char cVar10;
  undefined4 auStack_3c [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar8 = (uint)((ulonglong)in_dr14 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  Vec3_ctor_zero(&uStack_1c,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_2c,ar5,ar6,ar7);
  dVar7 = (double)((ulonglong)uVar8 << 0x20);
  iVar2 = *(int *)((int)ar4 + 100);
  if ((iVar2 < 7) && (-1 < iVar2)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    case 0:
      if (cVar10 == '\0') {
        uVar3 = CONCAT44(*(undefined4 *)(ar4 + 0xb),*(undefined4 *)(ar4 + 1));
      }
      else {
        uVar3 = ar4[0xb];
      }
      if (cVar9 == '\0' && (float)uVar3 < (float)((ulonglong)uVar3 >> 0x20)) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 1) = *(undefined4 *)(ar4 + 0xb);
        }
        else {
          ar4[1] = ar4[0xb];
        }
      }
      break;
    case 2:
      if (*(int *)(ar4 + 0xc) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0xc) + 8) + 0x80))(*(int *)(ar4 + 0xc),ar5,ar6,ar7);
        ar7 = ar4 + 7;
        ar6 = (undefined8 *)((int)ar4 + 0x34);
        a5 = ar4 + 6;
        (**(code **)(*(int *)(*(int *)(ar4 + 0xc) + 8) + 0x134))(*(int *)(ar4 + 0xc),a5,ar6,ar7);
        (**(code **)(*(int *)(*(int *)(ar4 + 0xc) + 8) + 0x130))(*(int *)(ar4 + 0xc),a5,ar6,ar7);
        uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        if (cVar10 == '\0') {
          in_dr0 = (double)CONCAT44(uVar1,*(undefined4 *)(ar4 + 7));
        }
        else {
          in_xd0 = ar4[7];
          auStack_3c[0] = uVar1;
        }
        if (cVar9 == '\0') {
          fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
          in_dr0 = (double)CONCAT44(fVar6,SUB84(in_dr0,0) + fVar6);
        }
        else {
          in_dr0 = in_dr0 + in_dr0;
        }
        if (cVar10 == '\0') {
          *(int *)(ar4 + 7) = SUB84(in_dr0,0);
        }
        else {
          ar4[7] = in_xd0;
        }
      }
      Vec3_sub(ar4 + 6,ar4,ar6,ar7,auStack_3c);
      Vec3_assign(&uStack_1c,auStack_3c,ar6,ar7);
      uVar1 = 0xffffffff;
      Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7);
      Vec3_length_sq(&uStack_1c,uVar1,ar6,ar7);
      (**(code **)(*(int *)((int)ar4 + 0x11c) + 8))((int *)((int)ar4 + 0x11c),uVar1,ar6,ar7);
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
        in_dr0 = in_xd14;
      }
      Vec3_length(&uStack_1c,uVar1,ar6,ar7);
      fStack_24 = SUB84(dVar7,0);
      dVar4 = in_dr0;
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(fStack_24,uStack_1c);
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * SUB84(dVar4,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar4;
      }
      if (cVar10 == '\0') {
        uStack_2c = (undefined4)((ulonglong)dVar4 >> 0x20);
        dVar4 = (double)CONCAT44(fStack_24,uStack_18);
      }
      else {
        uStack_2c = SUB84(dVar4,0);
        dVar4 = in_dr0;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * SUB84(dVar4,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar4;
      }
      uStack_28 = SUB84(dVar4,0);
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(uStack_14,uStack_28);
        uStack_28 = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        dVar5 = (double)CONCAT44(uStack_10,uStack_14);
      }
      if (cVar9 == '\0') {
        fStack_24 = fStack_24 * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_24 = SUB84(dVar7 * dVar5,0);
      }
      if (cVar10 != '\0') {
        fStack_24 = SUB84(in_dr0,0);
        uStack_20 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      }
      FUN_8c023aa0(ar4,&uStack_2c,ar6,ar7);
      break;
    case 4:
      ar6 = ar4 + 6;
      iVar2 = FUN_8c0d6d58(ar4,ar4,ar6,ar7);
      if (iVar2 == 4) {
        *(undefined4 *)((int)ar4 + 100) = 3;
      }
      if (cVar10 == '\0') {
        *(undefined4 *)(ar4 + 4) = *(undefined4 *)ar4;
      }
      else {
        ar4[4] = *ar4;
      }
      break;
    case 5:
      ar6 = ar4 + 6;
      iVar2 = FUN_8c0d6d58(ar4,ar4,ar6,ar7);
      if (iVar2 == 4) {
        *(undefined4 *)((int)ar4 + 100) = 0;
      }
      break;
    case 6:
      ar6 = ar4 + 6;
      iVar2 = FUN_8c0d6d58(ar4,ar4,ar6,ar7);
      if (iVar2 == 4) {
        *(undefined4 *)((int)ar4 + 100) = 0;
      }
      if (cVar10 == '\0') {
        *(undefined4 *)(ar4 + 4) = *(undefined4 *)ar4;
      }
      else {
        ar4[4] = *ar4;
      }
    }
  }
  Vec3_dtor(&uStack_2c,0xffffffff,ar6,ar7);
  uVar1 = Vec3_dtor(&uStack_1c,0xffffffff,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d66d8 @ 8c0d66d8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d675e) */
/* WARNING: Removing unreachable block (ram,0x8c0d6752) */
/* WARNING: Removing unreachable block (ram,0x8c0d674c) */
/* WARNING: Removing unreachable block (ram,0x8c0d6740) */
/* WARNING: Removing unreachable block (ram,0x8c0d6734) */
/* WARNING: Removing unreachable block (ram,0x8c0d672a) */
/* WARNING: Removing unreachable block (ram,0x8c0d6722) */
/* WARNING: Removing unreachable block (ram,0x8c0d671c) */
/* WARNING: Removing unreachable block (ram,0x8c0d6714) */
/* WARNING: Removing unreachable block (ram,0x8c0d670c) */
/* WARNING: Removing unreachable block (ram,0x8c0d66fc) */
/* WARNING: Removing unreachable block (ram,0x8c0d66ee) */
/* WARNING: Removing unreachable block (ram,0x8c0d66e6) */
/* WARNING: Removing unreachable block (ram,0x8c0d66d8) */
/* WARNING: Removing unreachable block (ram,0x8c0d66ec) */
/* WARNING: Removing unreachable block (ram,0x8c0d66fa) */
/* WARNING: Removing unreachable block (ram,0x8c0d6708) */
/* WARNING: Removing unreachable block (ram,0x8c0d670e) */
/* WARNING: Removing unreachable block (ram,0x8c0d6716) */
/* WARNING: Removing unreachable block (ram,0x8c0d6720) */
/* WARNING: Removing unreachable block (ram,0x8c0d6728) */
/* WARNING: Removing unreachable block (ram,0x8c0d6730) */
/* WARNING: Removing unreachable block (ram,0x8c0d6736) */
/* WARNING: Removing unreachable block (ram,0x8c0d6742) */
/* WARNING: Removing unreachable block (ram,0x8c0d6750) */
/* WARNING: Removing unreachable block (ram,0x8c0d675c) */
/* WARNING: Removing unreachable block (ram,0x8c0d6764) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d66d8(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar6;
  double dVar3;
  double dVar4;
  double dVar5;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd0;
  double in_xd14;
  bool bVar7;
  char cVar8;
  char cVar9;
  float afStack_1c [5];
  
  cVar9 = '\0';
  cVar8 = '\0';
  fVar2 = *(float *)(ar4 + 1);
  fVar6 = *(float *)((int)ar4 + 0x54);
  if (fVar6 < fVar2) {
    fVar6 = *(float *)((int)ar4 + 0x54);
    *(float *)(ar4 + 1) = fVar6;
  }
  if (*(float *)((int)ar4 + 100) == 4.2039e-45) {
    if (360.0 <= *(float *)ar4) {
      if (2140.0 < *(float *)ar4) {
        *(float *)ar4 = 2140.0;
      }
    }
    else {
      *(float *)ar4 = 360.0;
    }
    fVar2 = *(float *)(ar4 + 1);
    if (240.0 <= fVar2) {
      fVar2 = *(float *)(ar4 + 1);
      fVar6 = 1300.0;
      if (1300.0 < fVar2) {
        fVar6 = 1300.0;
        *(float *)(ar4 + 1) = 1300.0;
      }
    }
    else {
      fVar6 = 240.0;
      *(float *)(ar4 + 1) = 240.0;
    }
  }
  (**(code **)((int)*(float *)(ar4 + 0x15) + 0xc))(ar4 + 0x15,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44(*(float *)ar4,fVar2);
    in_fr15 = fVar6;
  }
  else {
    in_xd14 = (double)CONCAT44(fVar6,fVar2);
    dVar3 = *ar4;
    afStack_1c[0] = fVar6;
  }
  if (cVar8 == '\0') {
    bVar7 = in_fr15 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar7 = (double)CONCAT44(in_fr14,in_fr15) < dVar3;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)ar4 = in_fr15;
    }
    else {
      *ar4 = in_xd14;
    }
  }
  (**(code **)((int)*(float *)(ar4 + 0x19) + 0xc))(ar4 + 0x19,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    dVar4 = (double)CONCAT44(*(float *)ar4,SUB84(dVar3,0));
    in_fr15 = (float)((ulonglong)dVar3 >> 0x20);
    dVar3 = in_xd14;
  }
  else {
    dVar4 = *ar4;
  }
  if (cVar8 == '\0') {
    bVar7 = (float)((ulonglong)dVar4 >> 0x20) < in_fr15;
  }
  else {
    bVar7 = dVar4 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)ar4 = in_fr15;
    }
    else {
      *ar4 = dVar3;
    }
  }
  if (((*(float *)((int)ar4 + 100) == 0.0) || (*(float *)((int)ar4 + 100) == 1.4013e-45)) ||
     (dVar5 = dVar4, *(float *)((int)ar4 + 100) == 2.8026e-45)) {
    (**(code **)((int)*(float *)(ar4 + 0xd) + 0xc))(ar4 + 0xd,ar5,ar6,ar7);
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44(*(float *)((int)ar4 + 4),SUB84(dVar4,0));
      in_fr15 = (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      dVar5 = *(double *)((int)ar4 + 4);
      dVar3 = dVar4;
    }
    if (cVar8 == '\0') {
      bVar7 = in_fr15 < (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      bVar7 = (double)CONCAT44(in_fr14,in_fr15) < dVar5;
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        *(float *)((int)ar4 + 4) = in_fr15;
      }
      else {
        *(double *)((int)ar4 + 4) = dVar3;
      }
    }
  }
  (**(code **)((int)*(float *)(ar4 + 0x11) + 0xc))(ar4 + 0x11,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    dVar4 = (double)CONCAT44(*(float *)((int)ar4 + 4),SUB84(dVar5,0));
    in_fr15 = (float)((ulonglong)dVar5 >> 0x20);
    dVar5 = dVar3;
  }
  else {
    dVar4 = *(double *)((int)ar4 + 4);
  }
  if (cVar8 == '\0') {
    bVar7 = (float)((ulonglong)dVar4 >> 0x20) < in_fr15;
  }
  else {
    bVar7 = dVar4 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)((int)ar4 + 4) = in_fr15;
    }
    else {
      *(double *)((int)ar4 + 4) = dVar5;
    }
  }
  (**(code **)((int)*(float *)(ar4 + 0x1d) + 8))(ar4 + 0x1d,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44(*(float *)((int)ar4 + 4),SUB84(dVar4,0));
    in_fr15 = (float)((ulonglong)dVar4 >> 0x20);
    dVar4 = dVar5;
  }
  else {
    dVar3 = *(double *)((int)ar4 + 4);
  }
  if (cVar8 == '\0') {
    bVar7 = (float)((ulonglong)dVar3 >> 0x20) < in_fr15;
  }
  else {
    bVar7 = dVar3 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)((int)ar4 + 4) = in_fr15;
    }
    else {
      *(double *)((int)ar4 + 4) = dVar4;
    }
  }
  fVar2 = *(float *)((int)ar4 + 100);
  if (fVar2 == 0.0) {
    Vec3_assign(ar4 + 4,ar4,ar6,ar7);
    fVar2 = SUB84(dVar3,0);
    if (cVar9 == '\0') {
      fVar2 = *(float *)(ar4 + 5);
    }
    else {
      in_xd0 = ar4[5];
    }
    if (cVar8 == '\0') {
      fVar2 = fVar2 - 1.0;
    }
    else {
      fVar2 = SUB84((double)CONCAT44(0x3f800000,fVar2) - (double)CONCAT44(0x3f800000,fVar2),0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar4 + 5) = fVar2;
    }
    else {
      ar4[5] = in_xd0;
    }
    goto LAB_8c0d68ba;
  }
  if (fVar2 != 2.8026e-45) {
    if (fVar2 == 4.2039e-45) {
      if (cVar9 == '\0') {
        *(float *)(ar4 + 4) = *(float *)ar4;
        dVar3 = (double)(ulonglong)(uint)*(float *)(ar4 + 1);
      }
      else {
        dVar3 = *ar4;
        ar4[4] = dVar3;
        in_xd0 = ar4[1];
      }
      dVar4 = (double)CONCAT44(0x3f800000,SUB84(dVar3,0));
      if (cVar8 == '\0') {
        fVar2 = SUB84(dVar3,0) - 1.0;
      }
      else {
        fVar2 = SUB84(dVar4 - dVar4,0);
      }
      if (cVar9 == '\0') {
        *(float *)(ar4 + 5) = fVar2;
      }
      else {
        ar4[5] = in_xd0;
      }
      goto LAB_8c0d68ba;
    }
    if (fVar2 != 7.00649e-45) goto LAB_8c0d68ba;
  }
  Vec3_assign(ar4 + 4,ar4,ar6,ar7);
  fVar2 = SUB84(dVar3,0);
  if (cVar9 == '\0') {
    fVar2 = *(float *)(ar4 + 5);
  }
  else {
    in_xd0 = ar4[5];
  }
  if (cVar8 == '\0') {
    fVar2 = fVar2 - 1.0;
  }
  else {
    fVar2 = SUB84((double)CONCAT44(0x3f800000,fVar2) - (double)CONCAT44(0x3f800000,fVar2),0);
  }
  if (cVar9 == '\0') {
    *(float *)(ar4 + 5) = fVar2;
  }
  else {
    ar4[5] = in_xd0;
  }
LAB_8c0d68ba:
  Vec3_sub(ar4 + 4,ar4,ar6,ar7,afStack_1c);
  Vec3_assign(ar4 + 2,afStack_1c,ar6,ar7);
  uVar1 = Vec3_dtor(afStack_1c,0xffffffff,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d6920 @ 8c0d6920 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6920(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d6950)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d6954 @ 8c0d6954 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6954(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_assign_8c0d697c)(ar4 + 0x30,ar4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 100) = 0;
  return 100;
}



/* FUN_8c0d6980 @ 8c0d6980 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d6994) */
/* WARNING: Removing unreachable block (ram,0x8c0d698c) */
/* WARNING: Removing unreachable block (ram,0x8c0d699c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6980(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x38) = 0;
  *(undefined4 *)(ar4 + 0x60) = 0;
  return 0x60;
}



/* FUN_8c0d69a8 @ 8c0d69a8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d69a8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d69a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  undefined4 extraout_fr1;
  undefined4 extraout_fr0;
  char cVar1;
  undefined8 uStack_14;
  
  cVar1 = '\0';
  *(undefined4 *)(ar4 + 0x60) = ar5;
  a5 = (int)&uStack_14 + 4;
  (**(code **)(*(int *)(*(int *)(ar4 + 0x60) + 8) + 0x160))(*(int *)(ar4 + 0x60),a5,ar6,ar7);
  if (cVar1 == '\0') {
    uStack_14 = CONCAT44(uStack_14._4_4_,extraout_fr0);
  }
  else {
    uStack_14 = CONCAT44(extraout_fr0,extraout_fr1);
  }
  FUN_8c102a7c(ar4 + 0x11c,a5,ar6,ar7);
  *(undefined4 *)(ar4 + 100) = 2;
  return 100;
}



/* FUN_8c0d6a20 @ 8c0d6a20 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d6a8a) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a80) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a74) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a6c) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a60) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a52) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a46) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a40) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a38) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a2e) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a24) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a26) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a30) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a3a) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a44) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a50) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a5c) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a62) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a6e) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a76) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a82) */
/* WARNING: Removing unreachable block (ram,0x8c0d6a8c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6a20(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[0xc] = *ar4;
  ar4[0xd] = 0x44ed8000;
  ar4[0xe] = 0x4445c000;
  if (360.0 <= (float)ar4[0xc]) {
    if (2140.0 < (float)ar4[0xc]) {
      ar4[0xc] = 0x4505c000;
    }
  }
  else {
    ar4[0xc] = 0x43b40000;
  }
  ar4[8] = *ar4;
  ar4[9] = ar4[1];
  ar4[10] = 0x44458000;
  ar4[0x19] = 4;
  return 100;
}



/* FUN_8c0d6aac @ 8c0d6aac callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d6ae4) */
/* WARNING: Removing unreachable block (ram,0x8c0d6ad8) */
/* WARNING: Removing unreachable block (ram,0x8c0d6acc) */
/* WARNING: Removing unreachable block (ram,0x8c0d6ac0) */
/* WARNING: Removing unreachable block (ram,0x8c0d6ab8) */
/* WARNING: Removing unreachable block (ram,0x8c0d6aac) */
/* WARNING: Removing unreachable block (ram,0x8c0d6abc) */
/* WARNING: Removing unreachable block (ram,0x8c0d6aca) */
/* WARNING: Removing unreachable block (ram,0x8c0d6ad6) */
/* WARNING: Removing unreachable block (ram,0x8c0d6ae2) */
/* WARNING: Removing unreachable block (ram,0x8c0d6aea) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6aac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 in_dr4;
  float in_fr6;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd14;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  *(int *)(ar4 + 0x30) = (int)((ulonglong)in_dr4 >> 0x20);
  *(int *)(ar4 + 0x34) = (int)in_dr4;
  *(float *)(ar4 + 0x38) = in_fr6;
  (**(code **)(*(int *)(ar4 + 0xa8) + 0xc))((int *)(ar4 + 0xa8),ar5,ar6,ar7);
  if (cVar6 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),in_fr1);
    in_fr15 = in_fr6;
  }
  else {
    in_xd14 = (double)CONCAT44(in_fr6,in_fr1);
    dVar1 = *(double *)(ar4 + 0x30);
  }
  if (cVar5 == '\0') {
    bVar4 = in_fr15 < (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    bVar4 = (double)CONCAT44(in_fr14,in_fr15) < dVar1;
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      *(float *)(ar4 + 0x30) = in_fr15;
    }
    else {
      *(double *)(ar4 + 0x30) = in_xd14;
    }
  }
  (**(code **)(*(int *)(ar4 + 200) + 0xc))((int *)(ar4 + 200),ar5,ar6,ar7);
  if (cVar6 == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),SUB84(dVar1,0));
    in_fr15 = (float)((ulonglong)dVar1 >> 0x20);
    dVar1 = in_xd14;
  }
  else {
    dVar2 = *(double *)(ar4 + 0x30);
  }
  if (cVar5 == '\0') {
    bVar4 = (float)((ulonglong)dVar2 >> 0x20) < in_fr15;
  }
  else {
    bVar4 = dVar2 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      *(float *)(ar4 + 0x30) = in_fr15;
    }
    else {
      *(double *)(ar4 + 0x30) = dVar1;
    }
  }
  (**(code **)(*(int *)(ar4 + 0x68) + 0xc))((int *)(ar4 + 0x68),ar5,ar6,ar7);
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar2,0));
    in_fr15 = (float)((ulonglong)dVar2 >> 0x20);
    dVar2 = dVar1;
  }
  else {
    dVar3 = *(double *)(ar4 + 0x34);
  }
  if (cVar5 == '\0') {
    bVar4 = in_fr15 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar4 = (double)CONCAT44(in_fr14,in_fr15) < dVar3;
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      *(float *)(ar4 + 0x34) = in_fr15;
    }
    else {
      *(double *)(ar4 + 0x34) = dVar2;
    }
  }
  (**(code **)(*(int *)(ar4 + 0x88) + 0xc))((int *)(ar4 + 0x88),ar5,ar6,ar7);
  if (cVar6 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar3,0));
    in_fr15 = (float)((ulonglong)dVar3 >> 0x20);
    dVar3 = dVar2;
  }
  else {
    dVar1 = *(double *)(ar4 + 0x34);
  }
  if (cVar5 == '\0') {
    bVar4 = (float)((ulonglong)dVar1 >> 0x20) < in_fr15;
  }
  else {
    bVar4 = dVar1 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      *(float *)(ar4 + 0x34) = in_fr15;
    }
    else {
      *(double *)(ar4 + 0x34) = dVar3;
    }
  }
  (**(code **)(*(int *)(ar4 + 0xe8) + 8))((int *)(ar4 + 0xe8),ar5,ar6,ar7);
  if (cVar6 == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar1,0));
    in_fr15 = (float)((ulonglong)dVar1 >> 0x20);
    dVar1 = dVar3;
  }
  else {
    dVar2 = *(double *)(ar4 + 0x34);
  }
  if (cVar5 == '\0') {
    bVar4 = (float)((ulonglong)dVar2 >> 0x20) < in_fr15;
  }
  else {
    bVar4 = dVar2 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      *(float *)(ar4 + 0x34) = in_fr15;
      *(float *)(ar4 + 0x24) = in_fr15;
    }
    else {
      *(double *)(ar4 + 0x34) = dVar1;
      *(double *)(ar4 + 0x24) = dVar1;
    }
  }
  FUN_8c0d66d8(ar4,ar5,ar6,ar7);
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x34);
  }
  else {
    *(undefined8 *)(ar4 + 0x24) = *(undefined8 *)(ar4 + 0x34);
  }
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 100) = 5;
  return 100;
}



/* FUN_8c0d6c18 @ 8c0d6c18 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d6c34) */
/* WARNING: Removing unreachable block (ram,0x8c0d6c2c) */
/* WARNING: Removing unreachable block (ram,0x8c0d6c24) */
/* WARNING: Removing unreachable block (ram,0x8c0d6c18) */
/* WARNING: Removing unreachable block (ram,0x8c0d6c28) */
/* WARNING: Removing unreachable block (ram,0x8c0d6c30) */
/* WARNING: Removing unreachable block (ram,0x8c0d6c38) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6c18(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 in_dr0;
  double dVar1;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd14;
  bool bVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  FUN_8c0d6aac(ar4,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 0xe8) + 8))((int *)(ar4 + 0xe8),ar5,ar6,ar7);
  if (cVar4 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),(int)in_dr0);
    in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
    in_dr0 = in_xd14;
  }
  else {
    dVar1 = *(double *)(ar4 + 0x34);
  }
  if (cVar3 == '\0') {
    bVar2 = (float)((ulonglong)dVar1 >> 0x20) < in_fr15;
  }
  else {
    bVar2 = dVar1 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar2) {
    if (cVar4 == '\0') {
      *(float *)(ar4 + 0x34) = in_fr15;
      *(float *)(ar4 + 0x24) = in_fr15;
    }
    else {
      *(undefined8 *)(ar4 + 0x34) = in_dr0;
      *(undefined8 *)(ar4 + 0x24) = in_dr0;
    }
  }
  *(undefined4 *)(ar4 + 100) = 6;
  return 100;
}



/* FUN_8c0d6c9c @ 8c0d6c9c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d6cca) */
/* WARNING: Removing unreachable block (ram,0x8c0d6cbe) */
/* WARNING: Removing unreachable block (ram,0x8c0d6cb2) */
/* WARNING: Removing unreachable block (ram,0x8c0d6caa) */
/* WARNING: Removing unreachable block (ram,0x8c0d6ca6) */
/* WARNING: Removing unreachable block (ram,0x8c0d6cae) */
/* WARNING: Removing unreachable block (ram,0x8c0d6cb4) */
/* WARNING: Removing unreachable block (ram,0x8c0d6cc0) */
/* WARNING: Removing unreachable block (ram,0x8c0d6ccc) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6c9c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  float in_fr1;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_xd0;
  char cVar1;
  char cVar2;
  
  cVar2 = '\0';
  cVar1 = '\0';
  *ar4 = (int)((ulonglong)in_dr4 >> 0x20);
  ar4[1] = (int)in_dr4;
  ar4[2] = (int)((ulonglong)in_dr6 >> 0x20);
  ar5_00 = Vec3_assign(ar4 + 0xc,ar4,ar6,ar7);
  Vec3_assign(ar4 + 8,ar5_00,ar6,ar7);
  if (cVar2 == '\0') {
    in_fr1 = (float)ar4[10];
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 10);
  }
  if (cVar1 == '\0') {
    in_fr1 = in_fr1 - 1.0;
  }
  else {
    in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) - (double)CONCAT44(0x3f800000,in_fr1),0);
  }
  if (cVar2 == '\0') {
    ar4[10] = in_fr1;
  }
  else {
    *(undefined8 *)(ar4 + 10) = in_xd0;
  }
  FUN_8c022d04(ar4 + 4,ar5_00,ar6,ar7);
  FUN_8c022d04(ar4 + 0x10,ar5_00,ar6,ar7);
  ar4[0x18] = 0;
  if (cVar2 == '\0') {
    ar4[0x14] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x14) = (ulonglong)(uint)in_fr1;
  }
  ar4[0x19] = 0;
  return 100;
}



/* FUN_8c0d6d58 @ 8c0d6d58 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6d58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  float fVar3;
  ulonglong in_dr0;
  code *pcVar5;
  double dVar4;
  ulonglong in_xd0;
  char cVar6;
  char cVar7;
  undefined1 auStack_3c [16];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(&uStack_1c,ar5,ar6,ar7);
  Vec3_ctor_zero(&fStack_2c,uVar2,ar6_00,ar7);
  if (DAT_8c437c80 == '\0') {
    in_dr0 = in_dr0 & 0xffffffff;
    uVar1 = in_dr0;
    if (cVar7 == '\0') {
      _DAT_8c437c7c = _DAT_8c437c7c & 0xffffffff00000000;
      uVar1 = _DAT_8c437c7c;
    }
    _DAT_8c437c7c = uVar1;
    _DAT_8c437c7c = CONCAT14(1,_DAT_8c437c7c);
  }
  if (DAT_8c437c88 == '\0') {
    in_dr0 = in_dr0 & 0xffffffff;
    uVar1 = in_dr0;
    if (cVar7 == '\0') {
      _DAT_8c437c84 = _DAT_8c437c84 & 0xffffffff00000000;
      uVar1 = _DAT_8c437c84;
    }
    _DAT_8c437c84 = uVar1;
    _DAT_8c437c84 = CONCAT14(1,_DAT_8c437c84);
  }
  Vec3_sub(ar6,ar5,ar6_00,ar7,auStack_3c);
  Vec3_assign(&uStack_1c,auStack_3c,ar6_00,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7);
  Vec3_length_sq(&uStack_1c,uVar2,ar6_00,ar7);
  uVar1 = in_dr0;
  if (cVar7 == '\0') {
    _DAT_8c437c7c = CONCAT44(_DAT_8c437c80,(int)(in_dr0 >> 0x20));
    uVar1 = _DAT_8c437c7c;
  }
  _DAT_8c437c7c = uVar1;
  (**(code **)(*(int *)(ar4 + 0x11c) + 8))((int *)(ar4 + 0x11c),uVar2,ar6_00,ar7);
  fVar3 = (float)(in_dr0 >> 0x20);
  if (cVar7 == '\0') {
    _DAT_8c437c84 = CONCAT44(_DAT_8c437c88,fVar3);
    pcVar5 = (code *)0x3f000000;
    in_dr0 = in_xd0;
  }
  else {
    fVar3 = 0.5;
    pcVar5 = Vec3_length;
    _DAT_8c437c84 = in_dr0;
  }
  if (cVar6 == '\0' && (float)pcVar5 < fVar3) {
    Vec3_length(&uStack_1c,uVar2,ar6_00,ar7);
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_1c,_DAT_8c437c84);
    }
    else {
      dVar4 = (double)CONCAT44(uStack_18,uStack_1c);
      in_dr0 = _DAT_8c437c84;
    }
    if (cVar6 == '\0') {
      fStack_2c = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_2c = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_18,_DAT_8c437c84);
    }
    else {
      fStack_2c = (float)in_dr0;
      dVar4 = (double)CONCAT44(uStack_14,uStack_18);
      in_dr0 = _DAT_8c437c84;
    }
    if (cVar6 == '\0') {
      fStack_28 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_28 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_14,_DAT_8c437c84);
    }
    else {
      fStack_28 = (float)in_dr0;
      dVar4 = (double)CONCAT44(uStack_10,uStack_14);
      in_dr0 = _DAT_8c437c84;
    }
    if (cVar6 == '\0') {
      fStack_24 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_24 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 != '\0') {
      fStack_24 = (float)in_dr0;
      uStack_20 = (undefined4)(in_dr0 >> 0x20);
    }
    FUN_8c023aa0(ar5,&fStack_2c,ar6_00,ar7);
    Vec3_dtor(&fStack_2c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(&uStack_1c,0xffffffff,ar6_00,ar7);
    uVar2 = 2;
  }
  else {
    Vec3_assign(ar5,ar6,ar6_00,ar7);
    Vec3_dtor(&fStack_2c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(&uStack_1c,0xffffffff,ar6_00,ar7);
    uVar2 = 4;
  }
  return uVar2;
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



/* FUN_8c0d6f28 @ 8c0d6f28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d6f28(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_ctor_zero_8c0d6f5c)(ar4 + 1,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0d6f60)(ar4 + 5,ar5,ar6,ar7);
  *ar4 = 0;
  (*(code *)PTR_FUN_8c0d6f64)(ar4 + 5,ar5,ar6,ar7);
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



/* FUN_8c0d6fb8 @ 8c0d6fb8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d6ff4) */
/* WARNING: Removing unreachable block (ram,0x8c0d7018) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d6fb8(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  int ar4_00;
  float fVar3;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  puVar2 = (undefined4 *)0x0;
  if (*ar4 != 0) {
    ar4_00 = *ar4;
    iVar1 = get_field_24_05c284(ar4_00,ar5,ar6,ar7);
    if ((iVar1 == 0) || (iVar1 == 0xf)) {
      puVar2 = (undefined4 *)FUN_8c02a1fc(ar4 + 5,ar5,ar6,ar7);
    }
    else {
      iVar1 = rand(ar4_00,ar5,ar6,ar7);
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
      }
      else {
        dVar4 = 1.4411521857012367e+18;
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000,fVar3);
      }
      else {
        dVar4 = -5629500670083072.0;
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0xc3340000,fVar3);
      }
      else {
        dVar4 = -8.132627540887082e-251;
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar6 == '\0') {
        ar4[6] = (int)fVar3;
      }
      else {
        *(undefined8 *)(ar4 + 6) = in_xd0;
      }
      iVar1 = rand(ar4_00,ar5,ar6,ar7);
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
      }
      else {
        dVar4 = 1.4411521857012367e+18;
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000,fVar3);
      }
      else {
        dVar4 = -5629500670083072.0;
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      puVar2 = &DAT_8c0d7058;
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0xc3340000,fVar3);
      }
      else {
        dVar4 = -8.132627540887082e-251;
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar6 == '\0') {
        ar4[7] = (int)fVar3;
      }
      else {
        *(undefined8 *)(ar4 + 7) = in_xd0;
      }
    }
  }
  return puVar2;
}



/* FUN_8c0d7060 @ 8c0d7060 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d7060(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c015ab8(ar4,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 4,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x14,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x24,ar5,ar6,ar7);
  FUN_8c016fcc(ar4 + 0x30,ar5,ar6,ar7);
  FUN_8c016fcc(ar4 + 0xc4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x164) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x158) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x158) = CONCAT44(0x3f800000,extraout_fr1);
  }
  FUN_8c0d7314(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0d70e4 @ 8c0d70e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d70e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d70fc)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d7100 @ 8c0d7100 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7100(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  undefined1 *ar6_00;
  int a7;
  undefined1 auStack_14 [16];
  
  ar6_00 = auStack_14;
  (*(code *)PTR_Vec3_set_zero_8c0d7144)(auStack_14,ar5,ar6,ar7);
  a7 = ar4 + 0x30;
  a5 = ar4 + 4;
  (**(code **)(*(int *)(ar4 + DAT_8c0d7148) + 0xc))((int *)(ar4 + DAT_8c0d7148),a5,auStack_14,a7);
  (*(code *)PTR_FUN_8c0d714c)(ar4,a5,ar6_00,a7);
  uVar1 = (*(code *)PTR_object_dtor_delete_8c0d7150)(auStack_14,0xffffffff,ar6_00,a7);
  return uVar1;
}



/* FUN_8c0d7154 @ 8c0d7154 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d720c) */
/* WARNING: Removing unreachable block (ram,0x8c0d7204) */
/* WARNING: Removing unreachable block (ram,0x8c0d71f8) */
/* WARNING: Removing unreachable block (ram,0x8c0d71f2) */
/* WARNING: Removing unreachable block (ram,0x8c0d71da) */
/* WARNING: Removing unreachable block (ram,0x8c0d71cc) */
/* WARNING: Removing unreachable block (ram,0x8c0d71c6) */
/* WARNING: Removing unreachable block (ram,0x8c0d71c0) */
/* WARNING: Removing unreachable block (ram,0x8c0d71b2) */
/* WARNING: Removing unreachable block (ram,0x8c0d71ac) */
/* WARNING: Removing unreachable block (ram,0x8c0d7182) */
/* WARNING: Removing unreachable block (ram,0x8c0d717a) */
/* WARNING: Removing unreachable block (ram,0x8c0d716e) */
/* WARNING: Removing unreachable block (ram,0x8c0d7168) */
/* WARNING: Removing unreachable block (ram,0x8c0d7164) */
/* WARNING: Removing unreachable block (ram,0x8c0d716a) */
/* WARNING: Removing unreachable block (ram,0x8c0d7178) */
/* WARNING: Removing unreachable block (ram,0x8c0d717e) */
/* WARNING: Removing unreachable block (ram,0x8c0d718c) */
/* WARNING: Removing unreachable block (ram,0x8c0d71b0) */
/* WARNING: Removing unreachable block (ram,0x8c0d71b6) */
/* WARNING: Removing unreachable block (ram,0x8c0d71c2) */
/* WARNING: Removing unreachable block (ram,0x8c0d71ca) */
/* WARNING: Removing unreachable block (ram,0x8c0d71d8) */
/* WARNING: Removing unreachable block (ram,0x8c0d71ee) */
/* WARNING: Removing unreachable block (ram,0x8c0d71f4) */
/* WARNING: Removing unreachable block (ram,0x8c0d7202) */
/* WARNING: Removing unreachable block (ram,0x8c0d7208) */
/* WARNING: Removing unreachable block (ram,0x8c0d7218) */
/* WARNING: Unknown calling convention */

undefined * FUN_8c0d7154(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  float fVar2;
  
  if ((*(int *)(ar4 + 0x164) == 2) &&
     (fVar2 = *(float *)(ar4 + 0x2c) - 1.5, *(float *)(ar4 + 0x2c) = fVar2, fVar2 < 0.0)) {
    *(undefined4 *)(ar4 + 0x2c) = 0;
    *(undefined4 *)(ar4 + 0x164) = 0;
  }
  puVar1 = *(undefined **)(ar4 + 0x160);
  if (puVar1 == (undefined *)0x0) {
    fVar2 = *(float *)(ar4 + 0x15c) + 0.05;
    *(float *)(ar4 + 0x15c) = fVar2;
    puVar1 = (undefined *)0x0;
    if (0.0 < fVar2) {
      *(undefined4 *)(ar4 + 0x15c) = 0;
      puVar1 = (undefined *)0x160;
      *(undefined4 *)(ar4 + 0x160) = 2;
    }
  }
  else if (puVar1 == (undefined *)0x1) {
    fVar2 = *(float *)(ar4 + 0x15c) - 0.05;
    *(float *)(ar4 + 0x15c) = fVar2;
    puVar1 = &DAT_8c0d7238;
    if (fVar2 < -1.0) {
      *(undefined4 *)(ar4 + 0x15c) = 0xbf800000;
      puVar1 = (undefined *)0x160;
      *(undefined4 *)(ar4 + 0x160) = 3;
    }
  }
  return puVar1;
}



/* FUN_8c0d723c @ 8c0d723c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d723c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_fr1;
  uint extraout_fr1;
  char cVar2;
  
  cVar2 = '\0';
  iVar1 = *(int *)(ar4 + 0x168);
  if (0 < iVar1) {
    iVar1 = *(int *)(ar4 + 0x168) + -1;
    *(int *)(ar4 + 0x168) = iVar1;
    if (iVar1 == 0) {
      iVar1 = FUN_8c0d7288(ar4,0,ar6,ar7);
      in_fr1 = extraout_fr1;
    }
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x2c) = (ulonglong)in_fr1;
  }
  return iVar1;
}



/* FUN_8c0d7288 @ 8c0d7288 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d7288(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0d7290;
  *(undefined4 *)(DAT_8c0d7290 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c0d7294 @ 8c0d7294 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d7294(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_8c0d730c + ar4);
  if (iVar1 == 0) {
LAB_8c0d72c0:
    iVar2 = (*(code *)PTR_FUN_8c0d7310)(ar4,ar5,ar6,ar7);
    iVar1 = DAT_8c0d730c;
    if (iVar2 == 1) {
      *(undefined4 *)(DAT_8c0d730c + ar4) = 1;
      iVar2 = iVar1;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) goto LAB_8c0d72c0;
      if (iVar1 != 3) {
        return iVar1;
      }
    }
    iVar2 = (*(code *)PTR_FUN_8c0d7310)(ar4,ar5,ar6,ar7);
    iVar1 = DAT_8c0d730c;
    if (iVar2 == 0) {
      *(undefined4 *)(DAT_8c0d730c + ar4) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



/* FUN_8c0d7314 @ 8c0d7314 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7314(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c02a1fc(ar4 + 0x24,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x168) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x15c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x15c) = (ulonglong)extraout_fr1;
  }
  *(undefined4 *)(ar4 + 0x160) = 2;
  return 0x160;
}



/* FUN_8c0d7354 @ 8c0d7354 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d738c) */
/* WARNING: Removing unreachable block (ram,0x8c0d7390) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7354(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar4_00;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = DAT_8c13f530;
  uStack_10 = DAT_8c13f534;
  uStack_c = DAT_8c13f538;
  uStack_18 = *(undefined4 *)(ar4 + 0x15c);
  uVar1 = DAT_8c13f53c;
  FUN_8c233dac(&uStack_18,ar5,ar6,ar7);
  ar4_00 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,uVar1);
  FUN_8c019058(ar4_00,ar5,ar6,ar7);
  FUN_8c019160(ar4_00,ar5,ar6,ar7);
  FUN_8c015b30(ar4,ar5,ar6,ar7);
  FUN_8c256210(1,ar5,ar6,ar7);
  uVar1 = FUN_8c233dac(&stack0xffffffd8,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d7410 @ 8c0d7410 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d7448) */
/* WARNING: Removing unreachable block (ram,0x8c0d744c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7410(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar4_00;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = DAT_8c13f550;
  uStack_10 = DAT_8c13f554;
  uStack_c = DAT_8c13f558;
  uStack_18 = *(undefined4 *)(ar4 + 0x15c);
  uVar1 = DAT_8c13f55c;
  FUN_8c233dac(&uStack_18,ar5,ar6,ar7);
  ar4_00 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,uVar1);
  FUN_8c019058(ar4_00,ar5,ar6,ar7);
  FUN_8c019160(ar4_00,ar5,ar6,ar7);
  FUN_8c015af8(ar4,ar5,ar6,ar7);
  FUN_8c256210(1,ar5,ar6,ar7);
  uVar1 = FUN_8c233dac(&stack0xffffffd8,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d74cc @ 8c0d74cc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d74d6) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d74cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  undefined4 in_PR;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c0d7288(ar4,1,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = in_fr4;
  }
  else {
    *(undefined8 *)(ar4 + 0x2c) = CONCAT44(in_PR,in_fr4);
  }
  *(undefined4 *)(ar4 + 0x168) = 0x1e;
  return 0x168;
}



/* FUN_8c0d7508 @ 8c0d7508 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d7528) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d7508(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 ar6_00;
  float fVar3;
  double dVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  undefined4 auStack_c [2];
  
  cVar7 = '\0';
  cVar6 = '\0';
  auStack_c[0] = 0xffffffff;
  puVar1 = *(undefined4 **)(ar4 + 0x164);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = rand(ar4,ar5,ar6,ar7);
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
    }
    else {
      dVar4 = 5.2386908071071214e-11;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    puVar1 = &DAT_8c0d7588;
    if (cVar7 == '\0') {
      fVar5 = 0.1;
    }
    else {
      fVar3 = 0.1;
      fVar5 = -1.3200388e-31;
    }
    if (cVar6 != '\0' || fVar3 <= fVar5) {
      auStack_c[0] = FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7);
      ar6_00 = 0x12;
      FUN_8c021994(0x8c2b59d0,auStack_c[0],0x12,ar7);
      FUN_8c021a8c(0x8c2b59d0,auStack_c,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x164) = 2;
      puVar1 = &DAT_8c0d759c;
      if (cVar7 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0x40400000;
      }
      else {
        *(undefined8 *)(ar4 + 0x2c) = 0x4f222fe640400000;
      }
    }
  }
  return puVar1;
}



/* FUN_8c0d75a0 @ 8c0d75a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d75a0(int ar4,float *ar5,int ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_44;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  
  cVar4 = '\0';
  cVar3 = '\0';
  (**(code **)(*(int *)(ar4 + 0xc4) + 0x38))((int *)(ar4 + 0xc4),&fStack_68,ar6,ar7);
  fVar1 = fStack_24;
  if (cVar4 == '\0') {
    fVar1 = *(float *)(ar6 + 8);
    fStack_20 = fStack_24;
  }
  if (cVar3 != '\0' || fVar1 <= fStack_20) {
    fVar1 = fStack_68;
    fVar2 = fStack_64;
    if (cVar4 == '\0') {
      fVar1 = *ar5;
      fVar2 = fStack_68;
    }
    if (cVar3 != '\0' || fVar2 <= fVar1) {
      fVar1 = fStack_44;
      if (cVar4 == '\0') {
        fVar1 = *ar5;
        fStack_40 = fStack_44;
      }
      if (cVar3 != '\0' || fVar1 <= fStack_40) {
        fVar1 = fStack_34;
        if (cVar4 == '\0') {
          fVar1 = ar5[1];
          fStack_30 = fStack_34;
        }
        if (cVar3 != '\0' || fStack_30 <= fVar1) {
          fVar1 = fStack_64;
          if (cVar4 == '\0') {
            fVar1 = ar5[1];
            fStack_60 = fStack_64;
          }
          if (cVar3 != '\0' || fVar1 <= fStack_60) {
            return 1;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}



/* FUN_8c0d761c @ 8c0d761c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d7658) */
/* WARNING: Removing unreachable block (ram,0x8c0d7648) */
/* WARNING: Removing unreachable block (ram,0x8c0d7642) */
/* WARNING: Removing unreachable block (ram,0x8c0d7636) */
/* WARNING: Removing unreachable block (ram,0x8c0d762e) */
/* WARNING: Removing unreachable block (ram,0x8c0d7622) */
/* WARNING: Removing unreachable block (ram,0x8c0d762c) */
/* WARNING: Removing unreachable block (ram,0x8c0d7632) */
/* WARNING: Removing unreachable block (ram,0x8c0d7640) */
/* WARNING: Removing unreachable block (ram,0x8c0d7646) */
/* WARNING: Removing unreachable block (ram,0x8c0d7650) */
/* WARNING: Removing unreachable block (ram,0x8c0d765a) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d761c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[2] = 0x3f800000;
  ar4[1] = 0x3f800000;
  *ar4 = 0x3f800000;
  ar4[3] = 0x3f800000;
  ar4[4] = 0x3e6b851f;
  return ar4;
}



/* FUN_8c0d7668 @ 8c0d7668 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d767a) */
/* WARNING: Removing unreachable block (ram,0x8c0d766e) */
/* WARNING: Removing unreachable block (ram,0x8c0d7668) */
/* WARNING: Removing unreachable block (ram,0x8c0d7674) */
/* WARNING: Removing unreachable block (ram,0x8c0d7680) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d7668(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr8;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  ar4[3] = in_fr7;
  ar4[4] = in_fr8;
  return ar4;
}



/* FUN_8c0d7688 @ 8c0d7688 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d7688(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0d76b4)(ar4 + 3,ar5,ar6,ar7);
  *ar4 = 0;
  ar4[1] = 0;
  ar4[9] = 0;
  ar4[2] = 0;
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



/* FUN_8c0d76e8 @ 8c0d76e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d76e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *DAT_8c0d77cc = 0;
  DAT_8c0d77cc[1] = 0;
  DAT_8c0d77cc[2] = 0;
  DAT_8c0d77cc[3] = 0x7f;
  DAT_8c0d77cc[4] = 0x7f;
  DAT_8c0d77cc[5] = 0x7f;
  DAT_8c0d77cc[6] = 0x7f;
  DAT_8c0d77cc[7] = 0;
  DAT_8c0d77cc[8] = (short)DAT_8c0d77d0;
  DAT_8c0d77cc[9] = 0;
  DAT_8c0d77cc[10] = (short)DAT_8c0d77d0;
  DAT_8c0d77cc[0xb] = 0x7f;
  DAT_8c0d77cc[0xc] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0xd] = 0x7f;
  DAT_8c0d77cc[0xe] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0xf] = 0;
  DAT_8c0d77cc[0x10] = 0;
  DAT_8c0d77cc[0x11] = (short)DAT_8c0d77d0;
  DAT_8c0d77cc[0x12] = 0;
  DAT_8c0d77cc[0x13] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0x14] = 0x7f;
  DAT_8c0d77cc[0x15] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0x16] = 0x7f;
  DAT_8c0d77cc[0x17] = (short)DAT_8c0d77d0;
  DAT_8c0d77cc[0x18] = (short)DAT_8c0d77d0;
  DAT_8c0d77cc[0x19] = (short)DAT_8c0d77d0;
  DAT_8c0d77cc[0x1a] = (short)DAT_8c0d77d0;
  DAT_8c0d77cc[0x1b] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0x1c] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0x1d] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0x1e] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0x1f] = (short)DAT_8c0d77d0;
  return 0x3e;
}



/* FUN_8c0d77d8 @ 8c0d77d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int * FUN_8c0d77d8(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0d7804)(ar4,ar5,ar6,ar7);
  *ar4 = (int)PTR_DAT_8c0d7808;
  (**(code **)(*ar4 + 0x14))(ar4,ar5,ar6,ar7);
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



/* Class_12bea8_m1_0d7860 @ 8c0d7860 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d786a) */
/* WARNING: Removing unreachable block (ram,0x8c0d7860) */
/* WARNING: Removing unreachable block (ram,0x8c0d78ae) */
/* WARNING: Unknown calling convention */

double * Class_12bea8_m1_0d7860(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  int iVar2;
  int *ar4_00;
  int *ar5_00;
  undefined4 in_fr1;
  double dVar3;
  double dVar4;
  undefined4 in_fr4;
  float fVar5;
  undefined8 in_dr14;
  undefined8 in_xd14;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  dVar4 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  pdVar1 = (double *)ar4[0xc];
  if (pdVar1 == (double *)0x0) {
    ar5_00 = ar4 + 5;
    ar4_00 = ar4 + 1;
    FUN_8c023aa0(ar4_00,ar5_00,ar6,ar7);
    pdVar1 = (double *)(ar4 + 2);
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(*(int *)pdVar1,in_fr1);
    }
    else {
      dVar3 = *pdVar1;
    }
    if (cVar7 == '\0') {
      bVar6 = (float)((ulonglong)dVar3 >> 0x20) < SUB84(dVar4,0);
    }
    else {
      bVar6 = dVar3 < dVar4;
    }
    if (bVar6) {
      if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44(0x3f000000,SUB84(dVar3,0));
      }
      else {
        dVar3 = -7.532505566649672e-251;
      }
      if (cVar7 == '\0') {
        fVar5 = SUB84(dVar4,0) + (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar4 + dVar3,0);
      }
      if (cVar8 == '\0') {
        ar4[2] = (int)fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 2) = in_xd14;
      }
      iVar2 = rand(ar4_00,ar5_00,ar6,ar7);
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
      }
      else {
        dVar4 = 409.60016536712646;
      }
      if (cVar7 == '\0') {
        fVar5 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x4079999a,fVar5);
      }
      else {
        dVar4 = 2.99393119985475e-78;
      }
      if (cVar7 == '\0') {
        iVar2 = (int)(SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        iVar2 = (int)(dVar4 * dVar4);
      }
      ar4[0xd] = iVar2;
      pdVar1 = (double *)0x1;
      ar4[0xc] = 1;
    }
  }
  else if (pdVar1 == (double *)0x1) {
    pdVar1 = (double *)0x2;
    ar4[0xc] = 2;
  }
  else if (pdVar1 == (double *)0x2) {
    pdVar1 = (double *)(**(code **)(*ar4 + 0x14))(ar4,ar5,ar6,ar7);
  }
  return pdVar1;
}



/* FUN_8c0d7900 @ 8c0d7900 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d79e8) */
/* WARNING: Removing unreachable block (ram,0x8c0d79e2) */
/* WARNING: Removing unreachable block (ram,0x8c0d79d8) */
/* WARNING: Removing unreachable block (ram,0x8c0d79ce) */
/* WARNING: Removing unreachable block (ram,0x8c0d79c8) */
/* WARNING: Removing unreachable block (ram,0x8c0d79be) */
/* WARNING: Removing unreachable block (ram,0x8c0d79b8) */
/* WARNING: Removing unreachable block (ram,0x8c0d79ae) */
/* WARNING: Removing unreachable block (ram,0x8c0d79a4) */
/* WARNING: Removing unreachable block (ram,0x8c0d799e) */
/* WARNING: Removing unreachable block (ram,0x8c0d7994) */
/* WARNING: Removing unreachable block (ram,0x8c0d798e) */
/* WARNING: Removing unreachable block (ram,0x8c0d7984) */
/* WARNING: Removing unreachable block (ram,0x8c0d797a) */
/* WARNING: Removing unreachable block (ram,0x8c0d7974) */
/* WARNING: Removing unreachable block (ram,0x8c0d796a) */
/* WARNING: Removing unreachable block (ram,0x8c0d7964) */
/* WARNING: Removing unreachable block (ram,0x8c0d795a) */
/* WARNING: Removing unreachable block (ram,0x8c0d7950) */
/* WARNING: Removing unreachable block (ram,0x8c0d794a) */
/* WARNING: Removing unreachable block (ram,0x8c0d794e) */
/* WARNING: Removing unreachable block (ram,0x8c0d7954) */
/* WARNING: Removing unreachable block (ram,0x8c0d795e) */
/* WARNING: Removing unreachable block (ram,0x8c0d7968) */
/* WARNING: Removing unreachable block (ram,0x8c0d796e) */
/* WARNING: Removing unreachable block (ram,0x8c0d7978) */
/* WARNING: Removing unreachable block (ram,0x8c0d797e) */
/* WARNING: Removing unreachable block (ram,0x8c0d7988) */
/* WARNING: Removing unreachable block (ram,0x8c0d7992) */
/* WARNING: Removing unreachable block (ram,0x8c0d7998) */
/* WARNING: Removing unreachable block (ram,0x8c0d79a2) */
/* WARNING: Removing unreachable block (ram,0x8c0d79a8) */
/* WARNING: Removing unreachable block (ram,0x8c0d79b2) */
/* WARNING: Removing unreachable block (ram,0x8c0d79bc) */
/* WARNING: Removing unreachable block (ram,0x8c0d79c2) */
/* WARNING: Removing unreachable block (ram,0x8c0d79cc) */
/* WARNING: Removing unreachable block (ram,0x8c0d79d2) */
/* WARNING: Removing unreachable block (ram,0x8c0d79dc) */
/* WARNING: Removing unreachable block (ram,0x8c0d79e6) */
/* WARNING: Removing unreachable block (ram,0x8c0d79ec) */
/* WARNING: Unknown calling convention */

int FUN_8c0d7900(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  float *ar5_00;
  undefined4 ar5_01;
  undefined4 *ar6_00;
  undefined4 ar6_01;
  undefined4 ar7_00;
  undefined1 auStack_90 [68];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  
  fStack_3c = *(float *)(ar4 + 4) - 12.0;
  uStack_38 = *(undefined4 *)(ar4 + 8);
  fStack_34 = *(float *)(ar4 + 0xc) - 12.0;
  fStack_30 = *(float *)(ar4 + 4) - 12.0;
  uStack_2c = *(undefined4 *)(ar4 + 8);
  fStack_28 = *(float *)(ar4 + 0xc) + 12.0;
  fStack_24 = *(float *)(ar4 + 4) + 12.0;
  uStack_20 = *(undefined4 *)(ar4 + 8);
  fStack_1c = *(float *)(ar4 + 0xc) + 12.0;
  fStack_18 = *(float *)(ar4 + 4) + 12.0;
  uStack_14 = *(undefined4 *)(ar4 + 8);
  fStack_10 = *(float *)(ar4 + 0xc) - 12.0;
  uStack_4c = DAT_8c13f59c;
  uStack_48 = DAT_8c13f5a0;
  uStack_44 = DAT_8c13f5a4;
  uStack_40 = DAT_8c13f5a8;
  ar7_00 = 4;
  ar6_00 = &uStack_4c;
  ar5_00 = &fStack_3c;
  FUN_8c01642c(auStack_90,ar5_00,ar6_00,4);
  iVar1 = *(int *)(ar4 + 0x30);
  if (iVar1 == 0) {
    iVar1 = Class_129808_m2_0148d8(ar4,ar5_00,ar6_00,ar7_00);
  }
  else if (iVar1 == 1) {
    FUN_8c01538c(ar5,ar5_00,ar6_00,ar7_00);
    FUN_8c014a94(ar5,ar6,ar6_00,ar7_00);
    ar6_01 = 4;
    FUN_8c0164c8(auStack_90,&DAT_8c4377fc + *(int *)(ar4 + 0x34) * 0x10,4,ar7_00);
    ar5_01 = 0x80000060;
    FUN_8c0d1450(auStack_90,0x80000060,ar6_01,ar7_00,ar6);
    iVar1 = FUN_8c016524(auStack_90,ar5_01,ar6_01,ar7_00);
  }
  return iVar1;
}



/* Class_12bea8_m3_0d7ac0 @ 8c0d7ac0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12bea8_m3_0d7ac0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  uVar1 = (*(code *)PTR_Class_129808_m3_014978_8c0d7af4)(ar4,ar5,ar6,ar7);
  return uVar1;
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



/* FUN_8c0d7b44 @ 8c0d7b44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7b44(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d7b5c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d7b60 @ 8c0d7b60 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d7b94) */
/* WARNING: Removing unreachable block (ram,0x8c0d7b8e) */
/* WARNING: Removing unreachable block (ram,0x8c0d7b8a) */
/* WARNING: Removing unreachable block (ram,0x8c0d7b82) */
/* WARNING: Removing unreachable block (ram,0x8c0d7b7a) */
/* WARNING: Removing unreachable block (ram,0x8c0d7b64) */
/* WARNING: Removing unreachable block (ram,0x8c0d7b60) */
/* WARNING: Removing unreachable block (ram,0x8c0d7b62) */
/* WARNING: Removing unreachable block (ram,0x8c0d7b66) */
/* WARNING: Removing unreachable block (ram,0x8c0d7b7e) */
/* WARNING: Removing unreachable block (ram,0x8c0d7b86) */
/* WARNING: Removing unreachable block (ram,0x8c0d7b8c) */
/* WARNING: Removing unreachable block (ram,0x8c0d7b90) */
/* WARNING: Removing unreachable block (ram,0x8c0d7ba6) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

uint FUN_8c0d7b60(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int *a4;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  double in_dr0;
  float fVar8;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_dr8;
  ulonglong uVar9;
  undefined8 in_xd14;
  float in_PR;
  int iVar10;
  int ar5_00;
  char cVar11;
  char cVar12;
  uint in_stack_00000000;
  undefined4 auStack_5c [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint auStack_40 [4];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  cVar12 = '\0';
  cVar11 = '\0';
  puVar7 = auStack_5c + 1;
  auStack_5c[1] = (undefined4)((ulonglong)in_dr4 >> 0x20);
  auStack_5c[2] = (undefined4)in_dr4;
  auStack_5c[3] = (undefined4)((ulonglong)in_dr6 >> 0x20);
  uStack_4c = (undefined4)in_dr6;
  uStack_48 = (undefined4)((ulonglong)in_dr8 >> 0x20);
  uVar9 = (ulonglong)in_stack_00000000;
  iVar4 = 0;
  uVar2 = 0;
  if (*ar4 != 0) {
    fStack_28 = in_PR;
    (**(code **)(ar4[7] + 8))(ar4 + 7,ar5,ar6,ar7);
    fStack_2c = SUB84(in_dr0,0);
    fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
    fVar1 = fVar8;
    if (cVar12 == '\0') {
      fStack_2c = fVar8;
      fVar1 = fStack_28;
    }
    fStack_28 = fVar1;
    if (cVar11 == '\0') {
      iVar10 = (int)fVar8;
    }
    else {
      iVar10 = (int)in_dr0;
    }
    (**(code **)(ar4[0xc] + 8))(ar4 + 0xc,ar5,ar6,ar7);
    fStack_30 = SUB84(in_dr0,0);
    fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
    fVar1 = fVar8;
    if (cVar12 == '\0') {
      fStack_30 = fVar8;
      fVar1 = fStack_2c;
    }
    fStack_2c = fVar1;
    if (cVar11 == '\0') {
      ar5_00 = (int)fVar8;
    }
    else {
      ar5_00 = (int)in_dr0;
    }
    uVar2 = libgcc_divide_helper_0103d0(ar4[1],ar5_00,ar6,ar7);
    if (uVar2 == 0) {
      uVar5 = 0;
      auStack_40[2] = 0;
      while ((uVar2 = ar4[4], uVar5 < uVar2 && (iVar4 <= iVar10))) {
        puVar7[7] = uVar5;
        uVar3 = get_field_2c_0d7ca8((puVar7[7] * 8 - puVar7[7]) * 8 + ar4[3],ar5_00,ar6,ar7);
        puVar7[9] = uVar3;
        if (puVar7[9] == 0) {
          puVar7[6] = uVar5;
          if (cVar12 == '\0') {
            puVar6 = puVar7 + 0xffffffff;
            puVar7[0xffffffff] = (int)uVar9;
          }
          else {
            puVar6 = puVar7 + 0xfffffffe;
            *(undefined8 *)(puVar7 + 0xfffffffe) = in_xd14;
          }
          a4 = (int *)((*(int *)((int)puVar6 + 0x1c) * 8 - *(int *)((int)puVar6 + 0x1c)) * 8 +
                      ar4[3]);
          (**(code **)(*a4 + 8))(a4,ar5_00,ar6,ar7);
          puVar7 = (undefined4 *)((int)puVar6 + 4);
          *(uint *)((int)puVar6 + 0x18) = uVar5;
          FUN_8c0d7ca0((*(int *)((int)puVar6 + 0x18) * 8 - *(int *)((int)puVar6 + 0x18)) * 8 +
                       ar4[3],ar5_00,ar6,ar7);
          iVar4 = iVar4 + 1;
        }
        uVar5 = uVar5 + 1;
      }
    }
  }
  return uVar2;
}



/* FUN_8c0d7ca0 @ 8c0d7ca0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7ca0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x2c) = 1;
  return 1;
}



/* get_field_2c_0d7ca8 @ 8c0d7ca8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_2c_0d7ca8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x2c);
}



/* FUN_8c0d7cb0 @ 8c0d7cb0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d7cb0) */
/* WARNING: Removing unreachable block (ram,0x8c0d7cbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int * FUN_8c0d7cb0(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float fVar4;
  undefined8 in_dr0;
  undefined8 uVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  cVar7 = '\0';
  cVar6 = '\0';
  piVar2 = (int *)0x0;
  if (*ar4 != 0) {
    for (uVar3 = 0; fVar4 = (float)in_dr0, uVar3 < (uint)ar4[4]; uVar3 = uVar3 + 1) {
      iVar1 = get_field_2c_0d7ca8(uVar3 * 0x38 + ar4[3],ar5,ar6,ar7);
      if (iVar1 == 1) {
        piVar2 = (int *)(uVar3 * 0x38 + ar4[3]);
        (**(code **)(*piVar2 + 0xc))(piVar2,ar5,ar6,ar7);
      }
    }
    ar4[1] = ar4[1] + 1;
    piVar2 = (int *)*ar4;
    if (piVar2 == (int *)0x1) {
      if (cVar7 == '\0') {
        fVar4 = (float)ar4[5];
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 5);
      }
      if (cVar6 == '\0') {
        fVar4 = fVar4 + 1.0;
      }
      else {
        fVar4 = SUB84((double)CONCAT44(0x3f800000,fVar4) + (double)CONCAT44(0x3f800000,fVar4),0);
      }
      uStack_28 = in_xd0;
      if (cVar7 == '\0') {
        uStack_28 = CONCAT44(ar4,fVar4);
      }
      if (cVar7 == '\0') {
        *(undefined4 *)(uStack_28._4_4_ + 0x14) = (undefined4)uStack_28;
        uVar5 = CONCAT44(ar4[6],(undefined4)uStack_28);
      }
      else {
        *(undefined8 *)(uStack_28._4_4_ + 0x14) = uStack_28;
        uVar5 = *(undefined8 *)(ar4 + 6);
      }
      piVar2 = ar4 + 6;
      if (cVar6 == '\0' && (float)((ulonglong)uVar5 >> 0x20) < (float)uVar5) {
        _DAT_8c437c8c = ar4[1];
        if (cVar7 == '\0') {
          ar4[5] = ar4[6];
        }
        else {
          *(undefined8 *)(ar4 + 5) = *(undefined8 *)(ar4 + 6);
        }
        piVar2 = (int *)0x2;
        *ar4 = 2;
      }
    }
    else if (piVar2 == (int *)0x2) {
      piVar2 = (int *)ar4[2];
      if (piVar2 < (int *)ar4[1]) {
        piVar2 = (int *)0x3;
        *ar4 = 3;
      }
    }
    else if (piVar2 == (int *)0x3) {
      if (cVar7 == '\0') {
        fVar4 = (float)ar4[5];
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 5);
      }
      if (cVar6 == '\0') {
        fVar4 = fVar4 - 1.0;
      }
      else {
        fVar4 = SUB84((double)CONCAT44(0x3f800000,fVar4) - (double)CONCAT44(0x3f800000,fVar4),0);
      }
      uStack_30 = in_xd0;
      if (cVar7 == '\0') {
        uStack_30 = CONCAT44(ar4,fVar4);
      }
      if (cVar7 == '\0') {
        *(float *)(uStack_30._4_4_ + 0x14) = (float)uStack_30;
        uVar5 = CONCAT44((float)uStack_30,fVar4);
      }
      else {
        *(undefined8 *)(uStack_30._4_4_ + 0x14) = uStack_30;
        uVar5 = uStack_30;
      }
      fVar4 = (float)uVar5;
      piVar2 = (int *)0x0;
      if (cVar7 == '\0') {
        fVar4 = (float)uStack_30;
      }
      if (cVar6 == '\0' && fVar4 < 0.0) {
        if (cVar7 == '\0') {
          ar4[5] = 0;
        }
        else {
          *(ulonglong *)(ar4 + 5) = (ulonglong)(uint)fVar4;
        }
        piVar2 = (int *)0x0;
        *ar4 = 0;
      }
    }
  }
  return piVar2;
}



/* FUN_8c0d7dcc @ 8c0d7dcc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7dcc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint in_fr1;
  uint extraout_fr1;
  char cVar2;
  
  cVar2 = '\0';
  for (uVar1 = 0; uVar1 < (uint)ar4[4]; uVar1 = uVar1 + 1) {
    FUN_8c0149d4(uVar1 * 0x38 + ar4[3],ar5,ar6,ar7);
    in_fr1 = extraout_fr1;
  }
  ar4[2] = 4100000000;
  *ar4 = 0;
  ar4[1] = 0;
  if (cVar2 == '\0') {
    ar4[5] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 5) = (ulonglong)in_fr1;
  }
  return 0;
}



/* FUN_8c0d7e24 @ 8c0d7e24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0d7e24(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(ar4 + 0x10); uVar1 = uVar1 + 1) {
    (*(code *)PTR_FUN_8c0d7e74)(uVar1 * 0x38 + *(int *)(ar4 + 0xc),ar5,ar6,ar7);
  }
  return *(uint *)(ar4 + 0x10);
}



/* FUN_8c0d7e78 @ 8c0d7e78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7e78(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  *(undefined4 *)(ar4 + 0x10) = ar6;
  return in_r0;
}



/* FUN_8c0d7e80 @ 8c0d7e80 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d7ed0) */
/* WARNING: Removing unreachable block (ram,0x8c0d7eb8) */
/* WARNING: Removing unreachable block (ram,0x8c0d7eb0) */
/* WARNING: Removing unreachable block (ram,0x8c0d7ea8) */
/* WARNING: Removing unreachable block (ram,0x8c0d7eac) */
/* WARNING: Removing unreachable block (ram,0x8c0d7eb4) */
/* WARNING: Removing unreachable block (ram,0x8c0d7ec8) */
/* WARNING: Removing unreachable block (ram,0x8c0d7ed8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7e80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int s0,int s4)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  double dVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  FUN_8c102974(ar4 + 0x1c,ar5,ar6,ar7);
  uVar1 = FUN_8c102974(ar4 + 0x30,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    dVar2 = (double)CONCAT44((float)s4,in_fr1);
  }
  else {
    dVar2 = (double)s4;
  }
  if (cVar4 == '\0') {
    *(int *)(ar4 + 0x18) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x18) = dVar2;
  }
  return uVar1;
}



/* FUN_8c0d7f04 @ 8c0d7f04 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d7f12) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7f04(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 1;
  ar4[2] = ar5;
  ar4[1] = 0;
  ar4[5] = 0;
  return 0;
}



/* s_66_JUNGLE_RAIN_5_0d7f1a @ 8c0d7f18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * s_66_JUNGLE_RAIN_5_0d7f1a(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  code *ar6_00;
  undefined4 uVar1;
  uint in_fr1;
  ulonglong uVar2;
  char cVar3;
  
  cVar3 = '\0';
  Vec3_ctor_zero(ar4 + 2,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 6,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 10,ar5,ar6,ar7);
  FUN_8c102800(ar4 + 0xd,ar5,ar6,ar7);
  FUN_8c0d7688(ar4 + 0x14,ar5,ar6,ar7);
  FUN_8c0d7af8(ar4 + 0x1e,ar4 + 0x2f,500,ar7);
  FUN_8c010120(ar4 + 0x2f,FUN_8c0d77d8,FUN_8c0d8094,0x38,500);
  uVar1 = 0x18;
  ar6_00 = free_if_nonnull_wrap_0cffc8;
  ar5_00 = FUN_8c02145c;
  FUN_8c010120(ar4 + 0x1b88,FUN_8c02145c,free_if_nonnull_wrap_0cffc8,0x18,2);
  FUN_8c0153b8(ar4 + 0x1b94,ar5_00,ar6_00,uVar1);
  FUN_8c0d92b0(ar4,ar5_00,ar6_00,uVar1);
  if (cVar3 == '\0') {
    ar4[6] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 6) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar3 == '\0') {
    ar4[7] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 7) = (ulonglong)in_fr1;
  }
  uVar2 = (ulonglong)in_fr1;
  if (cVar3 == '\0') {
    ar4[8] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 8) = uVar2;
  }
  Vec3_assign(ar4 + 2,ar4 + 6,ar6_00,uVar1);
  if (cVar3 == '\0') {
    uVar1 = (undefined4)uVar2;
    ar4[0xb] = 0x41700000;
  }
  else {
    uVar1 = 0x41700000;
    *(undefined8 *)(ar4 + 0xb) = 0x3e4ccccd41700000;
  }
  if (cVar3 == '\0') {
    ar4[0xe] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0xe) = CONCAT44(0x3f800000,uVar1);
  }
  if (cVar3 == '\0') {
    ar4[0xf] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0xf) = CONCAT44(0x3f800000,uVar1);
  }
  if (cVar3 == '\0') {
    ar4[0x10] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x10) = CONCAT44(0x3f800000,uVar1);
  }
  if (cVar3 == '\0') {
    ar4[0x11] = 0x3f800000;
    ar4[0x12] = 0x3e4ccccd;
  }
  else {
    *(ulonglong *)(ar4 + 0x11) = CONCAT44(0x3f800000,uVar1);
    *(undefined8 *)(ar4 + 0x12) = 0x8c13f3083e4ccccd;
  }
  *ar4 = 0;
  ar4[0x1b88] = PTR_s_66_JUNGLE_RAIN_5_8c13f308;
  ar4[0x1b8e] = PTR_s_68_JUNGLE_THUNDER_8c13f30c;
  ar4[0x1b91] = 0;
  if (cVar3 == '\0') {
    ar4[0x1b87] = 0x41000000;
  }
  else {
    *(undefined8 *)(ar4 + 0x1b87) = 0x4f222fe641000000;
  }
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



/* s_GRAPHICS_ENV_0d819c @ 8c0d8198 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d819c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  undefined4 uVar1;
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0d8290)(ar4,0,ar6,ar7);
  (*(code *)PTR_thunk_FUN_8c20a1d0_8c0d8298)(DAT_8c0d8294,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0d82a0)(DAT_8c0d829c,uVar1,ar6,ar7);
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined4 *)(DAT_8c0d82a4 + iVar2 * 0xc + ar4) = 0;
  }
  ar4_00 = (*(code *)PTR_get_field_4_0253e4_8c0d82ac)(ar4 + DAT_8c0d82a8,uVar1,ar6,ar7);
  ar7_00 = 1;
  iVar2 = ar4 + DAT_8c0d82b4;
  uVar1 = DAT_8c0d82b0;
  (*(code *)PTR_FUN_8c0d82b8)(ar4_00,iVar2,DAT_8c0d82b0,1);
  uVar1 = (*(code *)PTR_get_field_4_0253e4_8c0d82ac)(ar4 + DAT_8c0d82a8,iVar2,uVar1,ar7_00);
  ar6_00 = PTR_s_GRAPHICS_COMMON_8c0d82bc + DAT_8c0d82c0;
  ar5_00 = PTR_s_GRAPHICS_COMMON_8c0d82bc + DAT_8c0d82c4;
  iVar2 = (*(code *)PTR_FUN_8c0d82c8)(ar5,ar5_00,ar6_00,uVar1);
  if (iVar2 == 0) {
    uVar1 = 2;
    ar6_00 = (undefined *)0x0;
    ar5_00 = PTR_s_GRAPHICS_COMMON_8c0d82bc + DAT_8c0d82cc;
    (*(code *)PTR_report_error_message_8c0d82d4)
              (PTR_s_GRAPHICS_COMMON_8c0d82bc + DAT_8c0d82d0,ar5_00,0,2);
  }
  (*(code *)PTR_FUN_8c0d82d8)(ar4 + 0x78,ar5_00,ar6_00,uVar1);
  uVar1 = 0x5a;
  (*(code *)PTR_FUN_8c0d82e0)(ar4 + 0x78,1,0xf,0x5a,1,DAT_8c0d82dc);
  uVar1 = (*(code *)PTR_FUN_8c0d82ec)(ar4 + 0x78,DAT_8c0d82e8,DAT_8c0d82e4,uVar1);
  return uVar1;
}



/* FUN_8c0d82f0 @ 8c0d82f0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d835c) */
/* WARNING: Removing unreachable block (ram,0x8c0d8352) */
/* WARNING: Removing unreachable block (ram,0x8c0d834c) */
/* WARNING: Removing unreachable block (ram,0x8c0d8344) */
/* WARNING: Removing unreachable block (ram,0x8c0d8334) */
/* WARNING: Removing unreachable block (ram,0x8c0d832e) */
/* WARNING: Removing unreachable block (ram,0x8c0d8326) */
/* WARNING: Removing unreachable block (ram,0x8c0d8312) */
/* WARNING: Removing unreachable block (ram,0x8c0d830e) */
/* WARNING: Removing unreachable block (ram,0x8c0d82fc) */
/* WARNING: Removing unreachable block (ram,0x8c0d82f0) */
/* WARNING: Removing unreachable block (ram,0x8c0d82f2) */
/* WARNING: Removing unreachable block (ram,0x8c0d830c) */
/* WARNING: Removing unreachable block (ram,0x8c0d8310) */
/* WARNING: Removing unreachable block (ram,0x8c0d8322) */
/* WARNING: Removing unreachable block (ram,0x8c0d832c) */
/* WARNING: Removing unreachable block (ram,0x8c0d8332) */
/* WARNING: Removing unreachable block (ram,0x8c0d8340) */
/* WARNING: Removing unreachable block (ram,0x8c0d834a) */
/* WARNING: Removing unreachable block (ram,0x8c0d8350) */
/* WARNING: Removing unreachable block (ram,0x8c0d8356) */
/* WARNING: Removing unreachable block (ram,0x8c0d83a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d82f0(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  undefined8 uVar2;
  double dVar3;
  undefined8 in_dr4;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined8 in_xd0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  fVar4 = (float)((ulonglong)in_dr4 >> 0x20);
  if (DAT_8c437c98 == '\0') {
    _DAT_8c437c94 = fVar4 + 7980.0;
    in_fr1 = 0x45f96000;
    _DAT_8c437c98 = CONCAT31(DAT_8c437c98_1,1);
  }
  if (ar5 < 36000) {
    fVar5 = (float)(int)ar5;
    if (fVar5 < 0.0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
  }
  else {
    fVar5 = (float)(int)(72000 - ar5);
    if (fVar5 < 0.0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
  }
  dVar6 = (double)CONCAT44(fVar4,fVar5 / 4500.0);
  uVar2 = CONCAT44(0x3f800000,in_fr1);
  if (1.0 < fVar5 / 4500.0) {
    dVar6 = (double)CONCAT44(fVar4,0x3f800000);
  }
  Class_12c3a4_m0_1029d0(0x8c437b28,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    _DAT_8c437c9c = CONCAT44(_DAT_8c437ca0,(int)((ulonglong)uVar2 >> 0x20));
    dVar3 = (double)CONCAT44(0x45034000,(int)uVar2);
  }
  else {
    dVar3 = -1.3608465208426776e-249;
    _DAT_8c437c9c = uVar2;
  }
  fVar4 = (float)((ulonglong)dVar6 >> 0x20);
  if (cVar8 == '\0') {
    bVar7 = (float)((ulonglong)dVar3 >> 0x20) < fVar4;
  }
  else {
    bVar7 = dVar3 < dVar6;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(0x45034000,SUB84(dVar3,0));
    }
    else {
      dVar3 = -1.3608465208426776e-249;
    }
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44(fVar4 - (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - dVar3;
    }
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(0x45034000,(int)_DAT_8c437c9c);
    }
    else {
      dVar3 = -1.3608465208426776e-249;
    }
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                               SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + dVar3 * dVar3;
    }
    fVar4 = (float)((ulonglong)dVar6 >> 0x20);
    _DAT_8c437c90 = fVar4;
    if (cVar9 != '\0') {
      _DAT_8c437c90 = SUB84(dVar6,0);
      _DAT_8c437c94 = fVar4;
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(0x45034000,(int)_DAT_8c437c9c);
    }
    else {
      dVar6 = -1.3608465208426776e-249;
      in_xd0 = _DAT_8c437c9c;
    }
    if (cVar8 == '\0') {
      _DAT_8c437c90 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      _DAT_8c437c90 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar9 != '\0') {
      _DAT_8c437c90 = (float)in_xd0;
      _DAT_8c437c94 = (float)((ulonglong)in_xd0 >> 0x20);
    }
  }
  uVar1 = FUN_8c235f84(0x8c43786c,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d8400 @ 8c0d8400 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d8400(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0d8430)(ar4,0,ar6,ar7);
  (*(code *)PTR_thunk_FUN_8c20a1d0_8c0d8438)(DAT_8c0d8434,uVar1,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d8440)(DAT_8c0d843c,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d8444 @ 8c0d8444 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d8444(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d8454)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* noop_0d8458 @ 8c0d8458 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d8458(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0d845c @ 8c0d845c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d845c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0d8460 @ 8c0d8460 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d8460(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(DAT_8c0d8498 + ar4) != -1) {
    (*(code *)PTR_pack_release_entry_handle_8c0d84a0)
              (DAT_8c0d849c,*(undefined4 *)(DAT_8c0d8498 + ar4),ar6,ar7);
  }
  iVar1 = *(int *)(DAT_8c0d84a4 + ar4);
  if (iVar1 != -1) {
    iVar1 = (*(code *)PTR_pack_release_entry_handle_8c0d84a0)
                      (DAT_8c0d849c,*(undefined4 *)(DAT_8c0d84a4 + ar4),ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c0d84a8 @ 8c0d84a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d84a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(DAT_8c0d84d8 + ar4);
  if (iVar1 != -1) {
    uVar2 = (*(code *)PTR_pack_acquire_entry_handle_8c0d84e4)
                      (DAT_8c0d84e0,*(undefined4 *)(DAT_8c0d84dc + ar4),ar6,ar7);
    iVar1 = DAT_8c0d84d8;
    *(undefined4 *)(DAT_8c0d84d8 + ar4) = uVar2;
  }
  return iVar1;
}



/* FUN_8c0d84e8 @ 8c0d84e8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d850a) */
/* WARNING: Removing unreachable block (ram,0x8c0d84e8) */
/* WARNING: Removing unreachable block (ram,0x8c0d850c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d84e8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 in_dr0;
  float fVar4;
  undefined4 in_fr14;
  bool bVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  if (DAT_8c437ca4 == '\0') {
    in_dr0 = CONCAT44(0x3e8f5c29,(int)in_dr0);
    _DAT_8c437ca0 = 0x3e8f5c29;
    _DAT_8c437ca4 = CONCAT31(DAT_8c437ca4_1,1);
  }
  fVar4 = 0.0;
  FUN_8c0d8710(ar4,ar5,ar6,ar7);
  if (ar4[1] == 0) {
    iVar1 = FUN_8c0d8aa0(ar4,*ar4,ar6,ar7);
    puVar2 = (undefined8 *)(iVar1 * 0x14 + -0x73bc6a84);
    if (cVar7 == '\0') {
      ar4[0xe] = *(undefined4 *)puVar2;
    }
    else {
      *(undefined8 *)(ar4 + 0xe) = *puVar2;
    }
    puVar2 = (undefined8 *)(iVar1 * 0x14 + -0x73bc6a80);
    if (cVar7 == '\0') {
      ar4[0xf] = *(undefined4 *)puVar2;
    }
    else {
      *(undefined8 *)(ar4 + 0xf) = *puVar2;
    }
    puVar2 = (undefined8 *)(iVar1 * 0x14 + -0x73bc6a7c);
    if (cVar7 == '\0') {
      ar4[0x10] = *(undefined4 *)puVar2;
    }
    else {
      *(undefined8 *)(ar4 + 0x10) = *puVar2;
    }
    puVar2 = (undefined8 *)(iVar1 * 0x14 + -0x73bc6a78);
    if (cVar7 == '\0') {
      ar4[0x11] = *(undefined4 *)puVar2;
    }
    else {
      *(undefined8 *)(ar4 + 0x11) = *puVar2;
    }
    puVar2 = (undefined8 *)(iVar1 * 0x14 + -0x73bc6a74);
    if (cVar7 == '\0') {
      ar4[0x12] = *(undefined4 *)puVar2;
      in_dr0 = CONCAT44(_DAT_8c437ca0,ar4[0x12]);
    }
    else {
      *(undefined8 *)(ar4 + 0x12) = *puVar2;
      in_dr0 = CONCAT44(_DAT_8c437ca4,_DAT_8c437ca0);
    }
    if (cVar6 == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < (float)in_dr0) {
      if (cVar7 == '\0') {
        in_dr0 = CONCAT44(_DAT_8c437ca0,(float)in_dr0);
        ar4[0x12] = _DAT_8c437ca0;
      }
      else {
        in_dr0 = CONCAT44(_DAT_8c437ca4,_DAT_8c437ca0);
        *(undefined8 *)(ar4 + 0x12) = in_dr0;
      }
    }
  }
  else if (ar4[1] == 1) {
    if (cVar7 == '\0') {
      ar4[0xe] = ar4[0x17];
      ar4[0xf] = ar4[0x18];
      ar4[0x10] = ar4[0x19];
      ar4[0x11] = ar4[0x1a];
      in_dr0 = CONCAT44(ar4[0x1b],(int)in_dr0);
      ar4[0x12] = ar4[0x1b];
    }
    else {
      *(undefined8 *)(ar4 + 0xe) = *(undefined8 *)(ar4 + 0x17);
      *(undefined8 *)(ar4 + 0xf) = *(undefined8 *)(ar4 + 0x18);
      *(undefined8 *)(ar4 + 0x10) = *(undefined8 *)(ar4 + 0x19);
      *(undefined8 *)(ar4 + 0x11) = *(undefined8 *)(ar4 + 0x1a);
      in_dr0 = *(undefined8 *)(ar4 + 0x1b);
      *(undefined8 *)(ar4 + 0x12) = in_dr0;
    }
    if (((ar4[0x1c] == 1) && (ar4[0x1d] == 0)) && (ar4[0x1b8f] == -1)) {
      uVar3 = pack_acquire_entry_handle(0x8c2b59d0,ar4[0x1b8e],ar6,ar7);
      ar4[0x1b8f] = uVar3;
    }
    if (((ar4[0x1c] == 0) && (ar4[0x1b8f] != -1)) && (ar4[0x1b91] == 0)) {
      pack_release_entry_handle(0x8c2b59d0,ar4[0x1b8f],ar6,ar7);
      ar4[0x1b8f] = 0xffffffff;
    }
    if (ar4[0x1b89] != -1) {
      ar7 = ar4[0x1b8a];
      ar6 = 0;
      FUN_8c021d90(0x8c2b59d0,ar4[0x1b89],0,ar7);
    }
  }
  uVar3 = *ar4;
  FUN_8c0d82f0(ar4,uVar3,ar6,ar7);
  if (cVar7 == '\0') {
    fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
  }
  if (cVar6 == '\0') {
    bVar5 = fVar4 < 1.0;
  }
  else {
    bVar5 = (double)CONCAT44(in_fr14,fVar4) < (double)CONCAT44(0x3f800000,(int)in_dr0);
  }
  if (bVar5) {
    uVar3 = FUN_8c235f14(ar4,uVar3,ar6,ar7);
  }
  else {
    uVar3 = FUN_8c235ee4(ar4,uVar3,ar6,ar7);
  }
  return uVar3;
}



/* FUN_8c0d8710 @ 8c0d8710 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d8710(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint ar5_00;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  int iStack_14;
  
  cVar4 = '\0';
  uStack_1c = ar5;
  if (*ar4 == 0) {
    FUN_8c0d8890(ar4,ar5,ar6,ar7);
  }
  ar5_00 = *ar4;
  iVar1 = FUN_8c0d8bf0(ar4,ar5_00,ar6,ar7);
  if (cVar4 == '\0') {
    puVar3 = (undefined8 *)((int)&uStack_24 + 4);
    uStack_24 = CONCAT44(ar4[0x1b87],(undefined4)uStack_24);
  }
  else {
    uStack_24 = *(undefined8 *)(ar4 + 0x1b87);
    puVar3 = &uStack_24;
  }
  iStack_14 = iVar1;
  FUN_8c0d7b60(ar4 + 0x1e,ar5_00,ar6,ar7);
  FUN_8c0d7cb0(ar4 + 0x1e,ar5_00,ar6,ar7);
  if ((iVar1 == 0) || (iVar1 == 1)) {
    ar4[1] = 0;
  }
  else {
    ar4[1] = 1;
  }
  if (ar4[1] == 0) {
    *(uint **)((int)puVar3 + 8) = ar4;
    **(int **)((int)puVar3 + 8) = **(int **)((int)puVar3 + 8) + 1;
  }
  uVar2 = 72000;
  if (71999 < *ar4) {
    uVar2 = 0;
    *ar4 = 0;
  }
  return uVar2;
}



/* FUN_8c0d8808 @ 8c0d8808 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d8828) */
/* WARNING: Removing unreachable block (ram,0x8c0d881e) */
/* WARNING: Removing unreachable block (ram,0x8c0d8814) */
/* WARNING: Removing unreachable block (ram,0x8c0d8818) */
/* WARNING: Removing unreachable block (ram,0x8c0d8822) */
/* WARNING: Removing unreachable block (ram,0x8c0d882c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d8808(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  undefined4 in_stack_ffffffe0;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  ar6_00 = &stack0xffffffe0;
  uStack_14 = *(undefined4 *)(ar4 + 0x18);
  uStack_10 = *(undefined4 *)(ar4 + 0x1c);
  uStack_c = *(undefined4 *)(ar4 + 0x20);
  ar5_00 = &uStack_14;
  uVar1 = 0;
  FUN_8c21279c(0,ar5_00,&stack0xffffffe0,ar7,in_stack_ffffffe0);
  FUN_8c219038(uVar1,ar5_00,ar6_00,ar7);
  FUN_8c21907e(uVar1,ar5_00,ar6_00,ar7);
  uVar1 = FUN_8c219070(uVar1,ar5_00,ar6_00,ar7);
  return uVar1;
}



/* FUN_8c0d8890 @ 8c0d8890 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d891c) */
/* WARNING: Removing unreachable block (ram,0x8c0d8890) */
/* WARNING: Removing unreachable block (ram,0x8c0d889e) */
/* WARNING: Removing unreachable block (ram,0x8c0d8968) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d8890(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *ar5_00;
  undefined4 ar5_01;
  double dVar4;
  float fVar5;
  undefined4 in_fr14;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined1 auStack_18 [2];
  undefined1 uStack_16;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar5 = 0.2;
  ar5_00 = auStack_18;
  FUN_8c0b9d14(ar5,ar5_00,ar6,ar7);
  switch(uStack_16) {
  case 1:
  case 2:
  case 0xb:
  case 0xc:
    if (cVar8 == '\0') {
      fVar5 = 0.1;
    }
    break;
  default:
    if (cVar8 == '\0') {
      fVar5 = 0.2;
    }
    break;
  case 6:
  case 7:
    if (cVar8 == '\0') {
      fVar5 = 0.5;
    }
  }
  iVar1 = rand(ar5,ar5_00,ar6,ar7);
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 3.05573279121701e-310;
  }
  if (cVar7 == '\0') {
    bVar6 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20) < fVar5;
  }
  else {
    bVar6 = dVar4 / dVar4 < (double)CONCAT44(in_fr14,fVar5);
  }
  if (bVar6) {
    *(undefined4 *)(ar4 + 0x58) = 1;
    uVar2 = rand(ar5,ar5_00,ar6,ar7);
    ar5_01 = 0x3840;
    uVar3 = libgcc_divide_helper_0103d0(uVar2,0x3840,ar6,ar7);
    *(undefined4 *)(ar4 + 0x50) = uVar3;
    if (*(uint *)(ar4 + 0x50) < 0x1c20) {
      *(undefined4 *)(ar4 + 0x50) = 0x1c20;
    }
    iVar1 = rand(uVar2,ar5_01,ar6,ar7);
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
    }
    else {
      dVar4 = 3.05573279121701e-310;
    }
    if (cVar7 == '\0') {
      fVar5 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar4 / dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(0x44610000,fVar5);
    }
    else {
      dVar4 = 3.5336950296991835e+72;
    }
    if (cVar7 == '\0') {
      fVar5 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(0x44610000,fVar5);
    }
    else {
      dVar4 = 3.5336950296991835e+72;
    }
    if (cVar7 == '\0') {
      fVar5 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(0x4f000000,fVar5);
    }
    else {
      dVar4 = -9.046259633960061e+74;
    }
    if (cVar7 == '\0' && (float)((ulonglong)dVar4 >> 0x20) < SUB84(dVar4,0)) {
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0xcf800000,SUB84(dVar4,0));
      }
      else {
        dVar4 = 2.9939323502132253e-78;
      }
      if (cVar7 == '\0') {
        fVar5 = (float)((ulonglong)dVar4 >> 0x20);
        dVar4 = (double)CONCAT44(fVar5,SUB84(dVar4,0) + fVar5);
      }
      else {
        dVar4 = dVar4 + dVar4;
      }
    }
    if (cVar7 == '\0') {
      iVar1 = (int)SUB84(dVar4,0);
    }
    else {
      iVar1 = (int)dVar4;
    }
    uVar2 = 0x54;
    *(int *)(ar4 + 0x54) = iVar1;
  }
  else {
    uVar2 = 0x58;
    *(undefined4 *)(ar4 + 0x58) = 0;
  }
  return uVar2;
}



/* FUN_8c0d89d8 @ 8c0d89d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d89d8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (*(code *)PTR_get_field_10_0d8a98_8c0d8a70)(ar4 + 0x78,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_get_field_c_0d8a90_8c0d8a74)(ar4 + 0x78,ar5,ar6,ar7);
  iVar3 = (*(code *)PTR_FUN_8c0d8a78)(ar4 + 0x78,ar5,ar6,ar7);
  if (iVar3 != 0) {
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      iVar3 = (*(code *)PTR_get_field_2c_0d7ca8_8c0d8a7c)(iVar4 * 0x38 + iVar2,ar5,ar6,ar7);
      if (iVar3 == 1) {
        ar6 = 0;
        ar5 = ar4 + DAT_8c0d8a80;
        iVar3 = (*(code *)PTR_FUN_8c0d8a84)(iVar4 * 0x38 + iVar2,ar5,0,ar7);
      }
    }
  }
  return iVar3;
}



/* FUN_8c0d8a88 @ 8c0d8a88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d8a88(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}



/* get_field_c_0d8a90 @ 8c0d8a90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_c_0d8a90(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0xc);
}



/* get_field_10_0d8a98 @ 8c0d8a98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_10_0d8a98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x10);
}



/* FUN_8c0d8aa0 @ 8c0d8aa0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d8aea) */
/* WARNING: Removing unreachable block (ram,0x8c0d8aa0) */
/* WARNING: Removing unreachable block (ram,0x8c0d8aa2) */
/* WARNING: Removing unreachable block (ram,0x8c0d8b1e) */
/* WARNING: Unknown calling convention */

int FUN_8c0d8aa0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_fr1;
  ulonglong uVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  undefined8 in_dr14;
  undefined4 uVar7;
  double dVar6;
  undefined8 in_xd14;
  bool bVar8;
  int ar7_00;
  int ar6_00;
  int ar5_00;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffff8c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 auStack_58 [17];
  
  uVar7 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  FUN_8c25cddc(auStack_58,ar5,ar6,ar7,in_stack_ffffff8c);
  if (cVar10 == '\0') {
    uStack_64 = *(undefined4 *)(ar4 + 8);
    uStack_60 = *(undefined4 *)(ar4 + 0xc);
    uStack_5c = *(undefined4 *)(ar4 + 0x10);
    uVar2 = CONCAT44(uStack_5c,in_fr1);
  }
  else {
    uStack_64 = (undefined4)*(undefined8 *)(ar4 + 8);
    uStack_60 = (undefined4)*(undefined8 *)(ar4 + 0xc);
    uVar2 = *(ulonglong *)(ar4 + 0x10);
    uStack_5c = (undefined4)uVar2;
    auStack_58[0] = (undefined4)(uVar2 >> 0x20);
  }
  iVar1 = libgcc_divide_helper_0103d0(ar5,36000,ar6,ar7);
  fVar5 = (float)iVar1;
  dVar6 = (double)CONCAT44(uVar7,fVar5);
  dVar3 = (double)(uVar2 & 0xffffffff);
  if (cVar9 == '\0') {
    bVar8 = fVar5 < 0.0;
  }
  else {
    bVar8 = dVar6 < dVar3;
  }
  if (bVar8) {
    if (cVar10 == '\0') {
      dVar3 = (double)CONCAT44(0x4f800000,(int)uVar2);
    }
    else {
      dVar3 = 1.8578690272452215e+34;
    }
    if (cVar9 == '\0') {
      dVar6 = (double)(ulonglong)(uint)(fVar5 + (float)((ulonglong)dVar3 >> 0x20));
    }
    else {
      dVar6 = dVar6 + dVar3;
    }
  }
  if (cVar10 == '\0') {
    uVar2 = CONCAT44(0x470ca000,SUB84(dVar3,0));
  }
  else {
    uVar2 = 0x478ca000470ca000;
  }
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44((float)ar5,SUB84(dVar6,0) / (float)(uVar2 >> 0x20));
  }
  else {
    dVar3 = (double)ar5;
  }
  dVar6 = (double)(uVar2 & 0xffffffff);
  fVar5 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar9 == '\0') {
    bVar8 = fVar5 < 0.0;
  }
  else {
    bVar8 = dVar3 < dVar6;
  }
  if (bVar8) {
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44(0x4f800000,(int)uVar2);
    }
    else {
      dVar6 = 1.8578690272452215e+34;
    }
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(fVar5 + (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar6;
    }
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x478ca000,SUB84(dVar6,0));
  }
  else {
    dVar6 = 5629500734611456.0;
  }
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) / (float)((ulonglong)dVar6 >> 0x20),
                             SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 / dVar6;
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x43340000,SUB84(dVar6,0));
  }
  else {
    dVar6 = 2.6584566571173454e+36;
  }
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),
                             SUB84(dVar3,0) * (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    dVar3 = dVar3 * dVar6;
  }
  dVar6 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),-SUB84(dVar3,0));
  if (cVar10 == '\0') {
    *(float *)(ar4 + 0x30) = -SUB84(dVar3,0);
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x30));
  }
  else {
    *(undefined8 *)(ar4 + 0x30) = in_xd14;
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    ar7_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x2c));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    ar6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar3 / dVar3);
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x28));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    fVar4 = (float)((ulonglong)dVar3 >> 0x20);
    fVar5 = SUB84(dVar3,0) / fVar4;
    dVar3 = (double)CONCAT44(fVar4,fVar5);
    ar5_00 = (int)fVar5;
  }
  else {
    dVar3 = dVar3 / dVar3;
    ar5_00 = (int)dVar3;
  }
  uVar7 = SUB84(dVar3,0);
  FUN_8c256b0c(auStack_58,ar5_00,ar6_00,ar7_00,iVar1);
  FUN_8c21279c(auStack_58,&uStack_64,&uStack_70,ar7_00,iVar1);
  if (cVar10 == '\0') {
    *(undefined4 *)(ar4 + 0x18) = uStack_70;
    *(undefined4 *)(ar4 + 0x1c) = uStack_6c;
    *(undefined4 *)(ar4 + 0x20) = uStack_68;
    dVar3 = (double)CONCAT44(0x43b38000,uVar7);
  }
  else {
    *(undefined8 *)(ar4 + 0x18) = CONCAT44(uStack_6c,uStack_70);
    *(ulonglong *)(ar4 + 0x1c) = CONCAT44(uStack_68,uStack_6c);
    *(ulonglong *)(ar4 + 0x20) = CONCAT44(uStack_64,uStack_68);
    dVar3 = 1.606691858090454e+73;
  }
  if (cVar9 == '\0') {
    iVar1 = (int)((float)((ulonglong)dVar6 >> 0x20) * (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    iVar1 = (int)(dVar6 * dVar3);
  }
  return iVar1;
}



/* FUN_8c0d8bf0 @ 8c0d8bf0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d9160) */
/* WARNING: Removing unreachable block (ram,0x8c0d8d8c) */
/* WARNING: Removing unreachable block (ram,0x8c0d8e46) */
/* WARNING: Removing unreachable block (ram,0x8c0d8e34) */
/* WARNING: Removing unreachable block (ram,0x8c0d8e78) */
/* WARNING: Removing unreachable block (ram,0x8c0d9170) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d8bf0(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  code *ar5_00;
  float fVar3;
  float fVar5;
  double dVar4;
  undefined1 *puVar6;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  if (DAT_8c437cb4 == '\0') {
    uVar1 = FUN_8c0d761c(&DAT_8c437cb8,ar5,ar6,ar7);
    ar6 = 0x8c437ca8;
    ar5_00 = free_if_nonnull_wrap_0d76b8;
    global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c437ca8,ar7);
    DAT_8c437cb4 = '\x01';
  }
  if (DAT_8c437cd8 == '\0') {
    uVar1 = FUN_8c0d761c(&DAT_8c437cdc,ar5_00,ar6,ar7);
    ar6 = 0x8c437ccc;
    ar5_00 = free_if_nonnull_wrap_0d76b8;
    global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c437ccc,ar7);
    DAT_8c437cd8 = '\x01';
  }
  if (DAT_8c437cfc == '\0') {
    _DAT_8c437cf8 = 0;
    DAT_8c437cfc = '\x01';
  }
  switch(*(undefined4 *)(ar4 + 0x58)) {
  case 1:
    if (ar5 == *(code **)(ar4 + 0x50)) {
      *(undefined4 *)(ar4 + 0x58) = 2;
      *(undefined4 *)(ar4 + 0x74) = 0;
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar4 + 0x38);
        *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 0x3c);
        *(undefined4 *)(ar4 + 100) = *(undefined4 *)(ar4 + 0x40);
        *(undefined4 *)(ar4 + 0x68) = *(undefined4 *)(ar4 + 0x44);
        *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)(ar4 + 0x48);
        dVar4 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x68));
      }
      else {
        *(undefined8 *)(ar4 + 0x5c) = *(undefined8 *)(ar4 + 0x38);
        *(undefined8 *)(ar4 + 0x60) = *(undefined8 *)(ar4 + 0x3c);
        *(undefined8 *)(ar4 + 100) = *(undefined8 *)(ar4 + 0x40);
        *(undefined8 *)(ar4 + 0x68) = *(undefined8 *)(ar4 + 0x44);
        *(undefined8 *)(ar4 + 0x6c) = *(undefined8 *)(ar4 + 0x48);
        in_xd0 = *(undefined8 *)(ar4 + 0x68);
        dVar4 = 1548112633213747.2;
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 - dVar4,0);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x43160000,fVar3);
      }
      else {
        dVar4 = -1.3609530726902538e-249;
      }
      if (cVar7 == '\0') {
        _DAT_8c437cf0 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        _DAT_8c437cf0 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x3e19999a,*(undefined4 *)(ar4 + 0x6c));
      }
      else {
        _DAT_8c437cf0 = (float)in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x6c);
        dVar4 = -1.3608891160156975e-249;
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 - dVar4,0);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x43160000,fVar3);
      }
      else {
        dVar4 = -1.3609530726902538e-249;
      }
      if (cVar7 == '\0') {
        _DAT_8c437cf4 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        _DAT_8c437cf4 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar8 != '\0') {
        _DAT_8c437cf4 = (float)in_xd0;
        _DAT_8c437cf8 = (int)((ulonglong)in_xd0 >> 0x20);
      }
      _DAT_8c437cb8 = *(undefined4 *)(ar4 + 0x5c);
      _DAT_8c437cbc = *(undefined4 *)(ar4 + 0x60);
      _DAT_8c437cc0 = *(undefined4 *)(ar4 + 100);
      _DAT_8c437cc4 = *(float *)(ar4 + 0x68);
      _DAT_8c437cc8 = *(float *)(ar4 + 0x6c);
      iVar2 = rand(&DAT_8c437cb8,ar5_00,ar6,ar7);
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
      }
      else {
        dVar4 = 206158466560.0;
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x42480000,fVar3);
      }
      else {
        dVar4 = 4.604612304241727e-232;
      }
      if (cVar7 == '\0') {
        _DAT_8c437cf8 = (int)(SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        _DAT_8c437cf8 = (int)(dVar4 * dVar4);
      }
    }
    break;
  case 2:
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(_DAT_8c437cf0,*(undefined4 *)(ar4 + 0x68));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      dVar4 = (double)CONCAT44(_DAT_8c437cf4,_DAT_8c437cf0);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x68) = fVar3;
      dVar4 = (double)CONCAT44(_DAT_8c437cf4,*(undefined4 *)(ar4 + 0x6c));
    }
    else {
      *(undefined8 *)(ar4 + 0x68) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x6c);
      dVar4 = (double)CONCAT44(_DAT_8c437cf8,_DAT_8c437cf4);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x6c) = fVar3;
      fVar3 = *(float *)(ar4 + 0x68);
      fVar5 = 0.2;
    }
    else {
      *(undefined8 *)(ar4 + 0x6c) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      fVar3 = 0.2;
      fVar5 = 0.15;
    }
    if (cVar7 != '\0' || fVar3 <= fVar5) {
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x68) = 0x3e4ccccd;
      }
      else {
        *(undefined8 *)(ar4 + 0x68) = 0x3e19999a3e4ccccd;
      }
    }
    if (cVar8 == '\0') {
      fVar3 = *(float *)(ar4 + 0x6c);
      fVar5 = 0.15;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x6c);
      fVar3 = 0.15;
      fVar5 = -7.131649e+31;
    }
    if (cVar7 != '\0' || fVar3 <= fVar5) {
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x6c) = 0x3e19999a;
      }
      else {
        *(undefined8 *)(ar4 + 0x6c) = 0xf46109003e19999a;
      }
    }
    if (cVar8 == '\0') {
      fVar3 = *(float *)(ar4 + 0x68);
      fVar5 = 0.2;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      fVar3 = 0.2;
      fVar5 = 0.15;
    }
    if (fVar3 == fVar5) {
      if (cVar8 == '\0') {
        fVar3 = *(float *)(ar4 + 0x6c);
        fVar5 = 0.15;
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x6c);
        fVar3 = 0.15;
        fVar5 = -7.131649e+31;
      }
      if (fVar3 == fVar5) {
        *(undefined4 *)(ar4 + 0x58) = 3;
        uVar1 = 4100000000;
        iVar2 = ar4 + 0x78;
        FUN_8c0d7f04(iVar2,4100000000,ar6,ar7);
        iVar2 = rand(iVar2,uVar1,ar6,ar7);
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
        }
        else {
          dVar4 = 33554440.875;
        }
        if (cVar7 == '\0') {
          fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 / dVar4,0);
        }
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(0x41800000,fVar3);
        }
        else {
          dVar4 = -131072.03198242188;
        }
        if (cVar7 == '\0') {
          fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 * dVar4,0);
        }
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(0xc1000000,fVar3);
        }
        else {
          dVar4 = 5.98249051247822e-310;
        }
        if (cVar7 == '\0') {
          fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 + dVar4,0);
        }
        if (cVar8 == '\0') {
          *(float *)(ar4 + 0x6e1c) = fVar3;
        }
        else {
          *(undefined8 *)(ar4 + 0x6e1c) = in_xd0;
        }
        uVar1 = pack_acquire_entry_handle(0x8c2b59d0,*(undefined4 *)(ar4 + 0x6e20),ar6,ar7);
        *(undefined4 *)(ar4 + 0x6e24) = uVar1;
        *(undefined4 *)(ar4 + 0x6e28) = 0xbae;
      }
    }
    break;
  case 3:
    *(undefined4 *)(ar4 + 0x58) = 4;
    break;
  case 4:
    if ((500 < *(int *)(ar4 + 0x6e28)) &&
       (iVar2 = *(int *)(ar4 + 0x6e28) + -10, *(int *)(ar4 + 0x6e28) = iVar2, iVar2 < 500)) {
      *(undefined4 *)(ar4 + 0x6e28) = 500;
    }
    if (*(int *)(ar4 + 0x70) == 0) {
      iVar2 = ar4 + 0x78;
      uVar1 = get_field_4_0d92a8(iVar2,ar5_00,ar6,ar7);
      if ((uint)(int)(short)uVar1 < *(uint *)(ar4 + 0x54)) {
        uVar1 = rand(iVar2,ar5_00,ar6,ar7);
        ar5_00 = (code *)0x64;
        iVar2 = libgcc_divide_helper_01031c(uVar1,100,ar6,ar7);
        if ((iVar2 < 0x14) && (*(int *)(ar4 + 0x6e44) == 0)) {
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x40400000,_DAT_8c437cc4);
          }
          else {
            in_xd0 = CONCAT44(_DAT_8c437cc8,_DAT_8c437cc4);
            dVar4 = 206158463104.0;
          }
          if (cVar7 == '\0') {
            fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            fVar3 = SUB84(dVar4 - dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x42480000,fVar3);
          }
          else {
            dVar4 = 9.765628835367579e-05;
          }
          if (cVar7 == '\0') {
            _DAT_8c437ce8 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            _DAT_8c437ce8 = SUB84(dVar4 / dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x3f19999a,_DAT_8c437cb8);
          }
          else {
            _DAT_8c437ce8 = (float)in_xd0;
            uRam8c437cec = (undefined4)((ulonglong)in_xd0 >> 0x20);
            in_xd0 = CONCAT44(_DAT_8c437cbc,_DAT_8c437cb8);
            dVar4 = 3.051758529863946e-05;
          }
          if (cVar7 == '\0') {
            fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            fVar3 = SUB84(dVar4 - dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x42480000,fVar3);
          }
          else {
            dVar4 = 9.765628835367579e-05;
          }
          if (cVar7 == '\0') {
            _DAT_8c437cdc = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            _DAT_8c437cdc = SUB84(dVar4 / dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x3f19999a,_DAT_8c437cbc);
          }
          else {
            _DAT_8c437cdc = (float)in_xd0;
            in_xd0 = CONCAT44(_DAT_8c437cc0,_DAT_8c437cbc);
            dVar4 = 3.051758529863946e-05;
          }
          if (cVar7 == '\0') {
            fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            fVar3 = SUB84(dVar4 - dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x42480000,fVar3);
          }
          else {
            dVar4 = 9.765628835367579e-05;
          }
          if (cVar7 == '\0') {
            _DAT_8c437ce0 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            _DAT_8c437ce0 = SUB84(dVar4 / dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x3f000000,_DAT_8c437cc0);
          }
          else {
            _DAT_8c437ce0 = (float)in_xd0;
            in_xd0 = CONCAT44(_DAT_8c437cc4,_DAT_8c437cc0);
            dVar4 = 6.58340905100917e-312;
          }
          if (cVar7 == '\0') {
            fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            fVar3 = SUB84(dVar4 - dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x42480000,fVar3);
          }
          else {
            dVar4 = 9.765628835367579e-05;
          }
          if (cVar7 == '\0') {
            _DAT_8c437ce4 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            _DAT_8c437ce4 = SUB84(dVar4 / dVar4,0);
          }
          if (cVar8 == '\0') {
            *(undefined4 *)(ar4 + 0x68) = 0x40400000;
            *(undefined4 *)(ar4 + 0x5c) = 0x3f19999a;
            *(undefined4 *)(ar4 + 0x60) = 0x3f19999a;
            *(undefined4 *)(ar4 + 100) = 0x3f000000;
          }
          else {
            _DAT_8c437ce4 = (float)in_xd0;
            _DAT_8c437ce8 = (float)((ulonglong)in_xd0 >> 0x20);
            *(undefined8 *)(ar4 + 0x68) = 0x4248000040400000;
            *(undefined8 *)(ar4 + 0x5c) = 0x3f0000003f19999a;
            *(undefined8 *)(ar4 + 0x60) = 0x3f0000003f19999a;
            *(undefined8 *)(ar4 + 100) = 0x1363f000000;
          }
          *(undefined4 *)(ar4 + 0x70) = 1;
          *(undefined4 *)(ar4 + 0x6e44) = 0x136;
          *(int *)(ar4 + 0x74) = _DAT_8c437cf8;
        }
      }
    }
    uVar1 = get_field_4_0d92a8(ar4 + 0x78,ar5_00,ar6,ar7);
    if (((*(uint *)(ar4 + 0x54) <= (uint)(int)(short)uVar1) && (*(int *)(ar4 + 0x70) == 0)) &&
       (*(int *)(ar4 + 0x6e44) == 0)) {
      *(undefined4 *)(ar4 + 0x58) = 5;
    }
    break;
  case 5:
    iVar2 = *(int *)(ar4 + 0x6e28);
    *(int *)(ar4 + 0x6e28) = iVar2 + 10;
    if (0xbae < iVar2 + 10) {
      *(undefined4 *)(ar4 + 0x6e28) = 0xbae;
      uVar1 = *(undefined4 *)(ar4 + 0x6e24);
      pack_release_entry_handle(0x8c2b59d0,uVar1,ar6,ar7);
      *(undefined4 *)(ar4 + 0x6e24) = 0xffffffff;
      FUN_8c0d92a0(ar4 + 0x78,uVar1,ar6,ar7);
      *(undefined4 *)(ar4 + 0x58) = 6;
    }
    break;
  case 6:
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(_DAT_8c437cf0,*(undefined4 *)(ar4 + 0x68));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      dVar4 = (double)CONCAT44(_DAT_8c437cf4,_DAT_8c437cf0);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x68) = fVar3;
      dVar4 = (double)CONCAT44(_DAT_8c437cf4,*(undefined4 *)(ar4 + 0x6c));
    }
    else {
      *(undefined8 *)(ar4 + 0x68) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x6c);
      dVar4 = (double)CONCAT44(_DAT_8c437cf8,_DAT_8c437cf4);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x6c) = fVar3;
      fVar3 = *(float *)(ar4 + 0x68);
      fVar5 = _DAT_8c437cc4;
    }
    else {
      *(undefined8 *)(ar4 + 0x6c) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      fVar3 = _DAT_8c437cc4;
      fVar5 = _DAT_8c437cc8;
    }
    if (cVar7 != '\0' || fVar5 <= fVar3) {
      if (cVar8 == '\0') {
        *(float *)(ar4 + 0x68) = _DAT_8c437cc4;
      }
      else {
        *(ulonglong *)(ar4 + 0x68) = CONCAT44(_DAT_8c437cc8,_DAT_8c437cc4);
      }
    }
    if (cVar8 == '\0') {
      fVar3 = *(float *)(ar4 + 0x6c);
      fVar5 = _DAT_8c437cc8;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x6c);
      fVar3 = _DAT_8c437cc8;
      fVar5 = fRam8c437ccc;
    }
    if (cVar7 != '\0' || fVar5 <= fVar3) {
      if (cVar8 == '\0') {
        *(float *)(ar4 + 0x6c) = _DAT_8c437cc8;
      }
      else {
        *(ulonglong *)(ar4 + 0x6c) = CONCAT44(fRam8c437ccc,_DAT_8c437cc8);
      }
    }
    if (cVar8 == '\0') {
      fVar3 = *(float *)(ar4 + 0x68);
      fVar5 = _DAT_8c437cc4;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      fVar3 = _DAT_8c437cc4;
      fVar5 = _DAT_8c437cc8;
    }
    if (fVar3 == fVar5) {
      if (cVar8 == '\0') {
        fVar3 = *(float *)(ar4 + 0x6c);
        fVar5 = _DAT_8c437cc8;
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x6c);
        fVar3 = _DAT_8c437cc8;
        fVar5 = fRam8c437ccc;
      }
      if (fVar3 == fVar5) {
        *(undefined4 *)(ar4 + 0x58) = 0;
      }
    }
  }
  if (*(int *)(ar4 + 0x70) == 1) {
    if (cVar8 == '\0') {
      fVar3 = *(float *)(ar4 + 0x68);
      puVar6 = (undefined1 *)0x3e4ccccd;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      fVar3 = 0.2;
      puVar6 = &DAT_8c437cdc;
    }
    if (cVar7 == '\0' && (float)puVar6 < fVar3) {
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(_DAT_8c437ce8,*(undefined4 *)(ar4 + 0x68));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x68);
        dVar4 = (double)CONCAT44(uRam8c437cec,_DAT_8c437ce8);
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar8 == '\0') {
        *(float *)(ar4 + 0x68) = fVar3;
        dVar4 = (double)CONCAT44(_DAT_8c437cdc,*(undefined4 *)(ar4 + 0x5c));
      }
      else {
        *(undefined8 *)(ar4 + 0x68) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x5c);
        dVar4 = (double)CONCAT44(_DAT_8c437ce0,_DAT_8c437cdc);
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar8 == '\0') {
        *(float *)(ar4 + 0x5c) = fVar3;
        dVar4 = (double)CONCAT44(_DAT_8c437ce0,*(undefined4 *)(ar4 + 0x60));
      }
      else {
        *(undefined8 *)(ar4 + 0x5c) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x60);
        dVar4 = (double)CONCAT44(_DAT_8c437ce4,_DAT_8c437ce0);
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar8 == '\0') {
        *(float *)(ar4 + 0x60) = fVar3;
        dVar4 = (double)CONCAT44(_DAT_8c437ce4,*(undefined4 *)(ar4 + 100));
      }
      else {
        *(undefined8 *)(ar4 + 0x60) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 100);
        dVar4 = (double)CONCAT44(_DAT_8c437ce8,_DAT_8c437ce4);
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar8 == '\0') {
        *(float *)(ar4 + 100) = fVar3;
        fVar3 = *(float *)(ar4 + 0x68);
        puVar6 = (undefined1 *)0x3e4ccccd;
      }
      else {
        *(undefined8 *)(ar4 + 100) = in_xd0;
        fVar3 = 0.2;
        puVar6 = &DAT_8c437cdc;
      }
      if (cVar7 == '\0' && fVar3 < (float)puVar6) {
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x68) = 0x3e4ccccd;
          *(undefined4 *)(ar4 + 0x5c) = _DAT_8c437cb8;
          *(undefined4 *)(ar4 + 0x60) = _DAT_8c437cbc;
          *(undefined4 *)(ar4 + 100) = _DAT_8c437cc0;
        }
        else {
          *(undefined8 *)(ar4 + 0x68) = 0x8c437cdc3e4ccccd;
          *(ulonglong *)(ar4 + 0x5c) = CONCAT44(_DAT_8c437cbc,_DAT_8c437cb8);
          *(ulonglong *)(ar4 + 0x60) = CONCAT44(_DAT_8c437cc0,_DAT_8c437cbc);
          *(ulonglong *)(ar4 + 100) = CONCAT44(_DAT_8c437cc4,_DAT_8c437cc0);
        }
        *(undefined4 *)(ar4 + 0x70) = 0;
      }
    }
  }
  if ((*(int *)(ar4 + 0x6e44) != 0) &&
     (*(int *)(ar4 + 0x6e44) = *(int *)(ar4 + 0x6e44) + -1, *(int *)(ar4 + 0x6e44) < 0)) {
    *(undefined4 *)(ar4 + 0x6e44) = 0;
  }
  if (0 < *(int *)(ar4 + 0x74)) {
    *(int *)(ar4 + 0x74) = *(int *)(ar4 + 0x74) + -1;
  }
  return *(undefined4 *)(ar4 + 0x58);
}



/* FUN_8c0d92a0 @ 8c0d92a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d92a0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 3;
  return 3;
}



/* get_field_4_0d92a8 @ 8c0d92a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_4_0d92a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}



/* FUN_8c0d92b0 @ 8c0d92b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d92b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(ar4 + 4) = 0;
  (*(code *)PTR_FUN_8c0d9314)(ar4 + 0x78,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x58) = 0;
  *(undefined4 *)(ar4 + 0x54) = 0;
  *(undefined4 *)(ar4 + 0x50) = 0;
  *(undefined4 *)(ar4 + 0x70) = 0;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    *(undefined4 *)(DAT_8c0d9318 + iVar1 * 0x18 + ar4) = 0xffffffff;
  }
  return 2;
}



/* FUN_8c0d931c @ 8c0d931c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0d931c(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  code *ar6_00;
  undefined4 ar7_00;
  char cVar1;
  
  cVar1 = '\0';
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  FUN_8c015224(ar4 + 4,ar5,ar6,ar7);
  FUN_8c015ab8(ar4 + 5,ar5,ar6,ar7);
  ar7_00 = 4;
  ar6_00 = free_if_nonnull_wrap_0247b0;
  ar5_00 = FUN_8c015b94;
  FUN_8c010120((undefined4 *)((int)ar4 + 0x2c),FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,7);
  if (cVar1 == '\0') {
    *(undefined4 *)ar4 = 0x43a6299a;
    *(undefined4 *)((int)ar4 + 4) = 0x44a05ccd;
    *(undefined4 *)(ar4 + 1) = 0x43557405;
  }
  else {
    *ar4 = 0x44a05ccd43a6299a;
    *(undefined8 *)((int)ar4 + 4) = 0x4355740544a05ccd;
    ar4[1] = 0x8c0d98f843557405;
  }
  FUN_8c0d98f8(ar4,ar5_00,ar6_00,ar7_00);
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



/* FUN_8c0d9600 @ 8c0d9600 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d9678) */
/* WARNING: Removing unreachable block (ram,0x8c0d9618) */
/* WARNING: Removing unreachable block (ram,0x8c0d9614) */
/* WARNING: Removing unreachable block (ram,0x8c0d961a) */
/* WARNING: Removing unreachable block (ram,0x8c0d96da) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d9600(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined4 in_fr3;
  double dVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar3 = *(float *)(ar4 + 0x14) + 1.0;
  *(float *)(ar4 + 0x14) = fVar3;
  iVar2 = *(int *)(ar4 + 0x10);
  puVar1 = (undefined4 *)0x8;
  if ((iVar2 < 9) && (-1 < iVar2)) {
    puVar1 = (undefined4 *)(&switchD_8c0d962e::switchdataD_8c0d9634)[iVar2];
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    default:
      puVar1 = (undefined4 *)FUN_8c031588(ar4 + *(int *)(ar4 + 0x10) * 4 + 0x2c,ar5,ar6,ar7);
      if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x14),in_fr3);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x14);
      }
      fVar3 = (float)(int)puVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar7 == '\0' && fVar3 < 0.0) {
        puVar1 = &DAT_8c0d9718;
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = -1.2916629790996152e-250;
        }
        if (cVar7 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar7 == '\0') {
        bVar6 = (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar4,0);
      }
      else {
        bVar6 = dVar5 < dVar4;
      }
      if (!bVar6) {
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x14) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x14) = (ulonglong)dVar4 & 0xffffffff;
        }
        *(char *)(ar4 + 0x18) = *(char *)(ar4 + 0x18) + -1;
        puVar1 = (undefined4 *)(uint)*(byte *)(ar4 + 0x18);
        if (puVar1 == (undefined4 *)0x0) {
          puVar1 = (undefined4 *)0x8;
          *(undefined4 *)(ar4 + 0x10) = 8;
        }
      }
      break;
    case 6:
      puVar1 = (undefined4 *)FUN_8c031588(ar4 + *(int *)(ar4 + 0x10) * 4 + 0x2c,ar5,ar6,ar7);
      if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x14),in_fr3);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x14);
      }
      fVar3 = (float)(int)puVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar7 == '\0' && fVar3 < 0.0) {
        puVar1 = &DAT_8c0d9718;
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = -1.2916629790996152e-250;
        }
        if (cVar7 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar7 == '\0') {
        bVar6 = (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar4,0);
      }
      else {
        bVar6 = dVar5 < dVar4;
      }
      if (!bVar6) {
        puVar1 = (undefined4 *)0x8;
        *(undefined4 *)(ar4 + 0x10) = 8;
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x14) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x14) = (ulonglong)dVar4 & 0xffffffff;
        }
      }
      break;
    case 7:
      break;
    case 8:
      puVar1 = (undefined4 *)FUN_8c0d97ec(ar4,ar5,ar6,ar7);
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x14) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x14) = (ulonglong)(uint)fVar3;
      }
    }
  }
  return puVar1;
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



/* s_Failed_to_set_texture_wrap_0d97b4 @ 8c0d97b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_to_set_texture_wrap_0d97b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d97cc)(ar4 + 0x20,ar5,ar6,ar7);
  return uVar1;
}



/* s_Failed_wrap_0d97d0 @ 8c0d97d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_wrap_0d97d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0d97e8)(ar4 + 0x20,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d97ec @ 8c0d97ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d97ec(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  uint extraout_fr1;
  char cVar4;
  
  cVar4 = '\0';
  uVar3 = *(undefined4 *)(ar4 + 0x1c);
  iVar1 = libgcc_divide_helper_0103d0(*ar5,uVar3,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = get_field_a0_035724(ar5,uVar3,ar6,ar7);
    if ((char)uVar2 == '\x02') {
      *(undefined4 *)(ar4 + 0x10) = 0;
    }
    else {
      *(undefined4 *)(ar4 + 0x10) = 1;
    }
    if (cVar4 == '\0') {
      *(undefined4 *)(ar4 + 0x14) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x14) = (ulonglong)extraout_fr1;
    }
    uVar3 = rand(ar5,uVar3,ar6,ar7);
    ar5_00 = 3;
    uVar2 = libgcc_divide_helper_01031c(uVar3,3,ar6,ar7);
    *(char *)(ar4 + 0x18) = (char)uVar2;
    *(char *)(ar4 + 0x18) = *(char *)(ar4 + 0x18) + '\x01';
    uVar3 = rand(uVar3,ar5_00,ar6,ar7);
    iVar1 = libgcc_divide_helper_01031c(uVar3,500,ar6,ar7);
    *(int *)(ar4 + 0x1c) = iVar1;
  }
  return iVar1;
}



/* FUN_8c0d9898 @ 8c0d9898 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d98ae) */
/* WARNING: Removing unreachable block (ram,0x8c0d98ac) */
/* WARNING: Removing unreachable block (ram,0x8c0d98c4) */
/* WARNING: Unknown calling convention */

int FUN_8c0d9898(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  float in_fr4;
  
  if (((*(int *)(ar4 + 0x10) == 8) || (*(int *)(ar4 + 0x10) == 0)) ||
     (iVar1 = *(int *)(ar4 + 0x10), iVar1 == 1)) {
    if (in_fr4 <= 5.0) {
      *(undefined4 *)(ar4 + 0x10) = 4;
    }
    else {
      *(undefined4 *)(ar4 + 0x10) = 3;
    }
    *(undefined4 *)(ar4 + 0x14) = 0;
    iVar1 = 0x18;
    *(undefined1 *)(ar4 + 0x18) = 1;
  }
  return iVar1;
}



/* FUN_8c0d98d4 @ 8c0d98d4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d98dc) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d98d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x10) = 6;
  *(undefined4 *)(ar4 + 0x14) = 0;
  return 6;
}



/* FUN_8c0d98e4 @ 8c0d98e4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d98ec) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d98e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  return 0;
}



/* noop_0d98f4 @ 8c0d98f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d98f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0d98f8 @ 8c0d98f8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d9906) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d98f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x10) = 8;
  *(undefined4 *)(ar4 + 0x14) = 0;
  return 8;
}



/* s_GRAPHICS_ENV_0d9912 @ 8c0d990c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d9912(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  (*(code *)PTR_FUN_8c0d99a0)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0d9994 + DAT_8c0d999c,
             PTR_s_GRAPHICS_COMMON_8c0d9994 + DAT_8c0d9998,ar4);
  (*(code *)PTR_FUN_8c0d99a4)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0d9994 + DAT_8c0d999c,
             PTR_s_GRAPHICS_COMMON_8c0d9994 + DAT_8c0d9998,ar4);
  (*(code *)PTR_FUN_8c0d99ac)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0d9994 + DAT_8c0d99a8,
             PTR_s_GRAPHICS_COMMON_8c0d9994 + DAT_8c0d9998,ar4);
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1) {
    (*(code *)PTR_FUN_8c0d99b4)
              (ar5,*(undefined4 *)(PTR_PTR_8c0d99b0 + uVar1 * 4),
               PTR_s_GRAPHICS_COMMON_8c0d9994 + DAT_8c0d9998,ar4);
  }
  return 7;
}



/* FUN_8c0d99b8 @ 8c0d99b8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d99d8) */
/* WARNING: Removing unreachable block (ram,0x8c0d99cc) */
/* WARNING: Removing unreachable block (ram,0x8c0d99bc) */
/* WARNING: Removing unreachable block (ram,0x8c0d99c2) */
/* WARNING: Removing unreachable block (ram,0x8c0d99ce) */
/* WARNING: Removing unreachable block (ram,0x8c0d99da) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d99b8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0x3f800000;
  ar4[2] = 0x3f800000;
  ar4[1] = 0x3f800000;
  ar4[3] = 0;
  return ar4;
}



/* FUN_8c0d99e8 @ 8c0d99e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d99e8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  
  *ar4 = PTR_DAT_8c0d9a6c;
  ar6_00 = ar6;
  (*(code *)PTR_FUN_8c0d9a70)(ar4 + 1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d9a74)(ar4 + 3,ar5,ar6_00,ar7);
  (*(code *)PTR_FUN_8c0d9a70)(ar4 + 10,ar5,ar6_00,ar7);
  (*(code *)PTR_FUN_8c0d9a74)(ar4 + 0xc,ar5,ar6_00,ar7);
  (*(code *)PTR_FUN_8c0d9a78)(ar4 + 0xd,ar5,ar6_00,ar7);
  (*(code *)PTR_FUN_8c0d9a80)((int)ar4 + DAT_8c0d9a7c,ar5,ar6_00,ar7);
  (*(code *)PTR_FUN_8c0d9a88)((int)ar4 + DAT_8c0d9a84,ar5,ar6_00,ar7);
  (*(code *)PTR_FUN_8c0d9a94)(ar4 + 4,ar5,ar6_00,ar7,PTR_s_GRAPHICS_COMMON_8c0d9a8c + DAT_8c0d9a90);
  ar4[9] = ar6;
  return ar4;
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



/* FUN_8c0d9b34 @ 8c0d9b34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9b34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d9b58)(ar4 + 0x28,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d9b5c)(ar4 + 0x30,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d9b60 @ 8c0d9b60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9b60(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d9b84)(ar4 + 0x28,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d9b88)(ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}



/* s_Failed_wrap_0d9b8c @ 8c0d9b8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_wrap_0d9b8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0d9ba4)(ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}



/* ret_const_0_0d9ba8 @ 8c0d9ba8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0d9ba8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_0d9bb0 @ 8c0d9bb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0d9bb0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_0d9bb8 @ 8c0d9bb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0d9bb8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_0d9bc0 @ 8c0d9bc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0d9bc0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_0d9bc8 @ 8c0d9bc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0d9bc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* noop_0d9bd0 @ 8c0d9bd0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d9bd0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0d9bd4 @ 8c0d9bd4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d9bd4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0d9bd8 @ 8c0d9bd8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d9bd8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0d9bdc @ 8c0d9bdc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9bdc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0d9be4;
}



/* FUN_8c0d9be8 @ 8c0d9be8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9be8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0d9bf0;
}



/* FUN_8c0d9bf4 @ 8c0d9bf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9bf4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0d9bfc;
}



/* FUN_8c0d9c00 @ 8c0d9c00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9c00(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0d9c08;
}



/* FUN_8c0d9c0c @ 8c0d9c0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9c0c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0d9c14;
}



/* FUN_8c0d9c18 @ 8c0d9c18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0d9c18(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint *s0)

{
  undefined4 uStack_4;
  
  uStack_4 = uStack_4 & 0xfffffffc;
  *s0 = uStack_4;
  return uStack_4;
}



/* FUN_8c0d9c48 @ 8c0d9c48 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d9c4e) */
/* WARNING: Removing unreachable block (ram,0x8c0d9c4a) */
/* WARNING: Removing unreachable block (ram,0x8c0d9c52) */
/* WARNING: Unknown calling convention */

undefined4
FUN_8c0d9c48(undefined4 ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7,undefined4 ain0)

{
  *ar5 = 0;
  *ar6 = 0;
  *ar7 = 0;
  return ain0;
}



/* ret_const_1_0d9c58 @ 8c0d9c58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_0d9c58(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c0d9c60 @ 8c0d9c60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9c60(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0d9c7c)(ar4 + 0x34,0,ar6,ar7);
  return 1;
}



/* FUN_8c0d9c80 @ 8c0d9c80 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d9c9e) */
/* WARNING: Removing unreachable block (ram,0x8c0d9c9a) */
/* WARNING: Removing unreachable block (ram,0x8c0d9c92) */
/* WARNING: Removing unreachable block (ram,0x8c0d9c80) */
/* WARNING: Removing unreachable block (ram,0x8c0d9c82) */
/* WARNING: Removing unreachable block (ram,0x8c0d9c96) */
/* WARNING: Removing unreachable block (ram,0x8c0d9c9c) */
/* WARNING: Removing unreachable block (ram,0x8c0d9ca2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d9c80(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *pcVar1;
  code *pcVar2;
  undefined1 *ar6_00;
  undefined4 uVar3;
  char cVar4;
  undefined4 ain0;
  
  cVar4 = '\0';
  uVar3 = ar7;
  ain0 = ar5;
  FUN_8c0d99e8(ar4,ar5,ar6,ar7);
  *ar4 = &DAT_8c12bb08;
  FUN_8c0da1dc(ar4 + 0x29,ar5,ar6,uVar3);
  uVar3 = 0x3c;
  pcVar2 = FUN_8c0fe250;
  pcVar1 = FUN_8c0da1b0;
  FUN_8c010120(ar4 + 0xea,FUN_8c0da1b0,FUN_8c0fe250,0x3c,0x11);
  FUN_8c0feb0c(ar4 + 0x1e9,pcVar1,pcVar2,uVar3);
  FUN_8c015520(ar4 + 0x277,pcVar1,pcVar2,uVar3);
  FUN_8c019208(ar4 + 0x27a,pcVar1,pcVar2,uVar3);
  FUN_8c0d6264(ar4 + 0x29a,pcVar1,pcVar2,uVar3);
  FUN_8c10277c(ar4 + 0x2ea,pcVar1,pcVar2,uVar3);
  ar4[0x2ed] = ar7;
  uVar3 = 0x68;
  pcVar2 = FUN_8c0f68c0;
  pcVar1 = FUN_8c0f6870;
  FUN_8c010120(ar4 + 0x303,FUN_8c0f6870,FUN_8c0f68c0,0x68,8);
  FUN_8c0e91b8(ar4 + 0x3d3,pcVar1,pcVar2,uVar3);
  FUN_8c0162f8(ar4 + 0x40a,pcVar1,pcVar2,uVar3);
  ar4[0x275] = 0;
  ar4[0x276] = 0;
  ar4[0x2b3] = 0;
  uVar3 = DAT_8c13f5b0;
  ar4[0x2ee] = DAT_8c13f5ac;
  ar4[0x2ef] = uVar3;
  ar4[0x2f0] = PTR_FUN_8c13f5b4;
  uVar3 = DAT_8c13f5bc;
  ar4[0x2f1] = DAT_8c13f5b8;
  ar4[0x2f2] = uVar3;
  ar4[0x2f3] = PTR_FUN_8c13f5c0;
  uVar3 = DAT_8c13f5c8;
  ar4[0x2f4] = DAT_8c13f5c4;
  ar4[0x2f5] = uVar3;
  ar4[0x2f6] = PTR_FUN_8c13f5cc;
  uVar3 = DAT_8c13f5d4;
  ar4[0x2f7] = DAT_8c13f5d0;
  ar4[0x2f8] = uVar3;
  ar4[0x2f9] = PTR_LAB_8c13f5d8;
  uVar3 = DAT_8c13f5e0;
  ar4[0x2fd] = DAT_8c13f5dc;
  ar4[0x2fe] = uVar3;
  ar4[0x2ff] = PTR_ret_const_1_0dc548_8c13f5e4;
  uVar3 = DAT_8c13f5ec;
  ar4[0x300] = DAT_8c13f5e8;
  ar4[0x301] = uVar3;
  ar4[0x302] = PTR_ret_const_1_0dc548_8c13f5f0;
  uVar3 = DAT_8c13f5f8;
  ar4[0x2fa] = DAT_8c13f5f4;
  ar4[0x2fb] = uVar3;
  ar4[0x2fc] = PTR_FUN_8c13f5fc;
  if (cVar4 == '\0') {
    ar4[0x40f] = 0x43480000;
    ar4[0x410] = 0x43de8000;
    ar4[0x411] = 0x43480000;
    ar4[0x412] = 0x43df8000;
    ar4[0x413] = 0x43dc0000;
    ar4[0x414] = 0x43df8000;
    ar4[0x415] = 0x43dc0000;
    ar4[0x416] = 0x43de8000;
  }
  else {
    *(undefined8 *)(ar4 + 0x40f) = 0x104043480000;
    *(undefined8 *)(ar4 + 0x410) = 0x104443de8000;
    *(undefined8 *)(ar4 + 0x411) = 0x104043480000;
    *(undefined8 *)(ar4 + 0x412) = 0x104c43df8000;
    *(undefined8 *)(ar4 + 0x413) = 0x105043dc0000;
    *(undefined8 *)(ar4 + 0x414) = 0x104c43df8000;
    *(undefined8 *)(ar4 + 0x415) = 0x105043dc0000;
    *(undefined8 *)(ar4 + 0x416) = 0x104443de8000;
  }
  *(undefined2 *)(ar4 + 0x417) = 0;
  *(undefined2 *)((int)ar4 + 0x105e) = 0x20;
  *(undefined2 *)(ar4 + 0x418) = 0;
  *(undefined2 *)((int)ar4 + 0x1062) = 0;
  *(undefined2 *)(ar4 + 0x419) = 0x80;
  *(undefined2 *)((int)ar4 + 0x1066) = 0;
  *(undefined2 *)(ar4 + 0x41a) = 0x80;
  *(undefined2 *)((int)ar4 + 0x106a) = 0x20;
  _DAT_8c4377d8 = 0xffffffff;
  _DAT_8c4377dc = 0xffffffff;
  _DAT_8c4377e0 = 0xffffffff;
  _DAT_8c4377e4 = 0xffffffff;
  uVar3 = 4;
  ar6_00 = &DAT_8c4377d8;
  FUN_8c016318(ar4 + 0x40a,ar4 + 0x40f,&DAT_8c4377d8,4,ain0);
  FUN_8c016324(ar4 + 0x40a,ar4 + 0x417,ar6_00,uVar3);
  FUN_8c015198(ar4 + 0x40a,0x80000060,ar6_00,uVar3,ain0);
  ar4[0x409] = 0;
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



/* FUN_8c0da1b0 @ 8c0da1b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0da1b0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0da1d8)(ar4,PTR_s_GRAPHICS_COMMON_8c0da1d0 + DAT_8c0da1d4,ar6,ar7);
  return uVar1;
}



/* FUN_8c0da1dc @ 8c0da1dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0da1dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0da204)(ar4,PTR_s_GRAPHICS_COMMON_8c0da1fc + DAT_8c0da200,ar6,ar7);
  return uVar1;
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



/* Class_12bb08_m1_0da338 @ 8c0da338 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12bb08_m1_0da338(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar6_00;
  int ar7_00;
  int iVar4;
  int iVar5;
  
  iVar1 = (*(code *)PTR_FUN_8c0da4c0)(ar4 + DAT_8c0da4bc,ar5,ar6,ar7);
  iVar3 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar4;
  (*(code *)PTR_FUN_8c0da4c8)(ar4 + DAT_8c0da4c4,ar5,ar6,ar4);
  iVar2 = (*(code *)PTR_get_field_300_0bf154_8c0da4cc)(ar4 + DAT_8c0da4bc,iVar3,ar6_00,ar7_00);
  *DAT_8c0da4d0 = iVar2;
  if (iVar2 != 0) {
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = ar5;
      ar6_00 = ar6;
      ar7_00 = ar4;
      (**(code **)(*(int *)(iVar5 + 8) + 0x10))(iVar5,ar5,ar6,ar4);
      iVar5 = (*(code *)PTR_list_node_next_8c0da4d4)(iVar5,iVar3,ar6_00,ar7_00);
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      (*(code *)PTR_FUN_8c0da4d8)(iVar5,ar4,ar6_00,ar7_00);
      iVar3 = ar4;
      (*(code *)PTR_FUN_8c0da4dc)(iVar5,ar4,ar6_00,ar7_00);
      iVar5 = (*(code *)PTR_list_node_next_8c0da4d4)(iVar5,iVar3,ar6_00,ar7_00);
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = (*(code *)PTR_FUN_8c0da4e0)(iVar5,iVar3,ar6_00,ar7_00);
      if (iVar3 == 1) {
        (*(code *)PTR_FUN_8c0da4e4)(iVar5,ar4,ar6_00,ar7_00);
      }
      iVar3 = ar4;
      (**(code **)(*(int *)(iVar5 + 8) + 0x24))(iVar5,ar4,ar6_00,ar7_00);
      iVar5 = (*(code *)PTR_list_node_next_8c0da4d4)(iVar5,iVar3,ar6_00,ar7_00);
    }
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      iVar3 = ar4;
      (**(code **)(*(int *)(iVar1 + 8) + 0x28))(iVar1,ar4,ar6_00,ar7_00);
      iVar1 = (*(code *)PTR_list_node_next_8c0da4d4)(iVar1,iVar3,ar6_00,ar7_00);
    }
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
      iVar2 = (*(code *)PTR_FUN_8c0da4ec)(ar4 + iVar1 * 0x68 + DAT_8c0da4e8,iVar3,ar6_00,ar7_00);
      if (iVar2 == 1) {
        iVar3 = ar4;
        (*(code *)PTR_FUN_8c0da4f0)(ar4 + iVar1 * 0x68 + DAT_8c0da4e8,ar4,ar6_00,ar7_00);
      }
    }
    (*(code *)PTR_FUN_8c0da4f4)(ar4,iVar3,ar6_00,ar7_00);
  }
  return 1;
}



/* FUN_8c0da4f8 @ 8c0da4f8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0da546) */
/* WARNING: Removing unreachable block (ram,0x8c0da538) */
/* WARNING: Removing unreachable block (ram,0x8c0da52a) */
/* WARNING: Removing unreachable block (ram,0x8c0da52e) */
/* WARNING: Removing unreachable block (ram,0x8c0da53c) */
/* WARNING: Removing unreachable block (ram,0x8c0da54a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0da4f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(int *)(ar4 + 0x104) != 0) || (*(int *)(ar4 + 0x108) != 0)) {
    return 1;
  }
  if ((*(int *)(ar4 + 0x124) == 0) && (*(int *)(ar4 + 0x128) == 0)) {
    if ((*(float *)(ar4 + 300) == 0.0) &&
       ((*(float *)(ar4 + 0x130) == 0.0 && (*(float *)(ar4 + 0x134) == 0.0)))) {
      if (*(int *)(ar4 + 0x13c) == -1) {
        return 0;
      }
      return 1;
    }
    return 1;
  }
  return 1;
}



/* FUN_8c0da588 @ 8c0da588 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0da588(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_list_node_next_8c0da5a4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* Class_12bb08_m2_0da5a8 @ 8c0da5a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12bb08_m2_0da5a8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar6_00;
  int ar7_00;
  int iVar4;
  int iVar5;
  
  iVar1 = (*(code *)PTR_FUN_8c0da724)(ar4 + DAT_8c0da720,ar5,ar6,ar7);
  iVar3 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar4;
  (*(code *)PTR_FUN_8c0da72c)(ar4 + DAT_8c0da728,ar5,ar6,ar4);
  iVar2 = (*(code *)PTR_get_field_300_0bf154_8c0da730)(ar4 + DAT_8c0da720,iVar3,ar6_00,ar7_00);
  if (iVar2 != 0) {
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = ar5;
      ar6_00 = ar6;
      ar7_00 = ar4;
      (**(code **)(*(int *)(iVar5 + 8) + 0x14))(iVar5,ar5,ar6,ar4);
      iVar5 = (*(code *)PTR_list_node_next_8c0da734)(iVar5,iVar3,ar6_00,ar7_00);
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = ar4;
      (*(code *)PTR_FUN_8c0da738)(iVar5,ar4,ar6_00,ar7_00);
      iVar5 = (*(code *)PTR_list_node_next_8c0da734)(iVar5,iVar3,ar6_00,ar7_00);
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = (*(code *)PTR_FUN_8c0da73c)(iVar5,iVar3,ar6_00,ar7_00);
      if (iVar3 == 1) {
        (*(code *)PTR_FUN_8c0da740)(iVar5,ar4,ar6_00,ar7_00);
      }
      iVar3 = ar4;
      (**(code **)(*(int *)(iVar5 + 8) + 0x24))(iVar5,ar4,ar6_00,ar7_00);
      iVar5 = (*(code *)PTR_list_node_next_8c0da734)(iVar5,iVar3,ar6_00,ar7_00);
    }
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      iVar3 = ar4;
      (**(code **)(*(int *)(iVar1 + 8) + 0x28))(iVar1,ar4,ar6_00,ar7_00);
      iVar1 = (*(code *)PTR_list_node_next_8c0da734)(iVar1,iVar3,ar6_00,ar7_00);
    }
    (*(code *)PTR_FUN_8c0da744)(ar4,iVar3,ar6_00,ar7_00);
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
      iVar2 = (*(code *)PTR_FUN_8c0da74c)(ar4 + iVar1 * 0x68 + DAT_8c0da748,iVar3,ar6_00,ar7_00);
      if (iVar2 == 1) {
        iVar3 = ar4;
        (*(code *)PTR_FUN_8c0da750)(ar4 + iVar1 * 0x68 + DAT_8c0da748,ar4,ar6_00,ar7_00);
      }
    }
  }
  return 1;
}



/* FUN_8c0da754 @ 8c0da754 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0da754(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  int iVar1;
  int iVar2;
  undefined1 *ar5_00;
  float *ar6_00;
  undefined1 *ar7_00;
  int iVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar4_00 = FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7);
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    if (_DAT_8c437550 < iVar1) {
      iVar1 = _DAT_8c437550;
    }
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      ar7_00 = auStack_18;
      FUN_8c0507a4(ar4_00,auStack_20,auStack_1c,ar7_00);
      ar6_00 = &fStack_28;
      ar5_00 = auStack_20;
      FUN_8c256294(0,ar5_00,ar6_00,ar7_00);
      if (cVar7 == '\0') {
        fVar5 = -150.0;
        fVar4 = fStack_28;
      }
      else {
        fVar4 = -150.0;
        fVar5 = 800.0;
      }
      if (cVar6 == '\0' && fVar4 < fVar5) {
LAB_8c0da802:
        iVar2 = get_field_24_05c284(ar4_00,ar5_00,ar6_00,ar7_00);
        if (iVar2 == 0xe) goto LAB_8c0da812;
      }
      else {
        if (cVar7 == '\0') {
          fVar5 = 800.0;
          fVar4 = fStack_28;
        }
        else {
          fVar4 = 800.0;
          fVar5 = -100.0;
        }
        if (cVar6 == '\0' && fVar5 < fVar4) goto LAB_8c0da802;
        if (cVar7 == '\0') {
          fVar5 = -100.0;
          fVar4 = fStack_24;
        }
        else {
          fVar4 = -100.0;
          fVar5 = 600.0;
        }
        if (cVar6 == '\0' && fVar4 < fVar5) goto LAB_8c0da802;
        if (cVar7 == '\0') {
          fVar5 = 600.0;
          fVar4 = fStack_24;
        }
        else {
          fVar4 = 600.0;
          fVar5 = 3.52567e-42;
        }
        if ((cVar6 == '\0' && fVar5 < fVar4) || (ar4_00 == *(int *)(ar4 + 0x9d4)))
        goto LAB_8c0da802;
LAB_8c0da812:
        FUN_8c0f4b44(ar4_00,ar5_00,ar6_00,ar7_00);
        (**(code **)(*(int *)(ar4_00 + 8) + 0x34))(ar4_00,ar5_00,ar6_00,ar7_00);
      }
      ar4_00 = list_node_next(ar4_00,ar5_00,ar6_00,ar7_00);
    }
  }
  return 1;
}



/* FUN_8c0da88c @ 8c0da88c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0da8b0) */
/* WARNING: Removing unreachable block (ram,0x8c0da8ac) */
/* WARNING: Removing unreachable block (ram,0x8c0da8a6) */
/* WARNING: Removing unreachable block (ram,0x8c0da88c) */
/* WARNING: Removing unreachable block (ram,0x8c0da8aa) */
/* WARNING: Removing unreachable block (ram,0x8c0da8ae) */
/* WARNING: Removing unreachable block (ram,0x8c0da8b2) */
/* WARNING: Unknown calling convention */

uint FUN_8c0da88c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 in_PR;
  
  bVar2 = *(int *)(ar4 + 0x9d4) != 0;
  if (bVar2) {
    uVar1 = 1;
    FUN_8c22195c(1,ar5,ar6,ar7,in_PR);
    FUN_8c219070(uVar1,ar5,ar6,ar7);
    FUN_8c0f4b44(*(undefined4 *)(ar4 + 0x9d4),ar5,ar6,ar7);
    (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x34))(*(int *)(ar4 + 0x9d4),ar5,ar6,ar7);
    uVar1 = 1;
    FUN_8c22195c(1,ar5,ar6,ar7,in_PR);
    FUN_8c219070(uVar1,ar5,ar6,ar7);
  }
  return (uint)bVar2;
}



/* s_CEnv_AddItem_0da93a @ 8c0da934 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CEnv_AddItem_0da93a(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c0da9f4)(ar4 + DAT_8c0da9f0,ar5,ar6,ar7);
  if (iVar1 == 0) {
    ar7 = 2;
    ar6 = 1;
    (*(code *)PTR_report_error_message_8c0daa04)
              (PTR_s_GRAPHICS_COMMON_8c0da9f8 + DAT_8c0daa00,
               PTR_s_GRAPHICS_COMMON_8c0da9f8 + DAT_8c0da9fc,1,2);
  }
  iVar2 = ar5;
  (*(code *)PTR_FUN_8c0daa08)(ar4,ar5,ar6,ar7);
  *(int *)(iVar1 + 8) = ar5;
  iVar2 = (*(code *)PTR_get_field_24_05c284_8c0daa0c)(ar5,iVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0daa14)(iVar2 * 0x3c + ar4 + DAT_8c0daa10,iVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0daa18)(ar5,iVar1,ar6,ar7);
  (**(code **)(*(int *)(ar5 + 8) + 0x60))(ar5,iVar1,ar6,ar7);
  iVar1 = ar5;
  (*(code *)PTR_FUN_8c0daa20)(ar4 + DAT_8c0daa1c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_assign_wrap_0f4da4_8c0daa24)(ar5,iVar1,ar6,ar7);
  return 0;
}



/* FUN_8c0daa28 @ 8c0daa28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0daa28(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0daa30;
  *(undefined4 *)(DAT_8c0daa30 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c0daa34 @ 8c0daa34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0daa34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((*(int *)(DAT_8c0daa7c + ar4) != 0) &&
     (iVar1 = (*(code *)PTR_get_field_70_05f490_8c0daa80)
                        (*(undefined4 *)(DAT_8c0daa7c + ar4),ar5,ar6,ar7), iVar1 == 0)) {
    (*(code *)PTR_FUN_8c0daa84)(*(undefined4 *)(DAT_8c0daa7c + ar4),ar5,ar6,ar7);
    *(undefined4 *)(DAT_8c0daa7c + ar4) = 0;
    return 1;
  }
  return 0;
}



/* FUN_8c0daa88 @ 8c0daa88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0daa88(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_8c0daacc + (int)ar4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*ar4 + 0x5c))(ar4,*(undefined4 *)(DAT_8c0daacc + (int)ar4),ar6,ar7);
    *(undefined4 *)(DAT_8c0daacc + (int)ar4) = 0;
  }
  return uVar1;
}



/* FUN_8c0daad0 @ 8c0daad0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0daad0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int iVar2;
  undefined4 auStack_14 [2];
  
  auStack_14[0] = 0;
  iVar2 = ar5;
  iVar1 = (*(code *)PTR_get_field_24_05c284_8c0dab60)(ar5,ar5,ar6,ar7);
  ar5_00 = (*(code *)PTR_get_field_160_0dab80_8c0dab64)(ar5,iVar2,ar6,ar7);
  (*(code *)PTR_s_Item_pointer_is_NULL_CNodePt_0fe338_8c0dab6c)
            (iVar1 * 0x3c + ar4 + DAT_8c0dab68,ar5_00,ar6,ar7);
  auStack_14[0] = (*(code *)PTR_get_field_160_0dab80_8c0dab64)(ar5,ar5_00,ar6,ar7);
  (*(code *)PTR_FUN_8c0dab74)(ar4 + DAT_8c0dab70,auStack_14,ar6,ar7);
  iVar2 = ar5;
  (*(code *)PTR_s_Item_pointer_is_NULL_CItemLi_0fe01c_8c0dab7c)(ar4 + DAT_8c0dab78,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar5 + 8) + 100))(ar5,iVar2,ar6,ar7);
  return ar5;
}



/* get_field_160_0dab80 @ 8c0dab80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_160_0dab80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0dab88 + ar4);
}



/* FUN_8c0dab8c @ 8c0dab8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dab8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0dac0c)(ar4 + DAT_8c0dac08,ar5,ar6,ar7);
  if (iVar1 != 0) {
    if ((*(int *)(DAT_8c0dac10 + ar4) == 0) ||
       (iVar1 = (*(code *)PTR_FUN_8c0dac14)(ar4 + DAT_8c0dac08,ar5,ar6,ar7),
       *(int *)(DAT_8c0dac10 + ar4) == iVar1)) {
      uVar2 = (*(code *)PTR_FUN_8c0dac18)(ar4 + DAT_8c0dac08,ar5,ar6,ar7);
      *(undefined4 *)(DAT_8c0dac10 + ar4) = uVar2;
    }
    else {
      uVar2 = (*(code *)PTR_list_node_next_8c0dac1c)
                        (*(undefined4 *)(DAT_8c0dac10 + ar4),ar5,ar6,ar7);
      *(undefined4 *)(DAT_8c0dac10 + ar4) = uVar2;
    }
    return *(undefined4 *)(DAT_8c0dac10 + ar4);
  }
  return 0;
}



/* FUN_8c0dac20 @ 8c0dac20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dac20(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_4_0dac48_8c0dac44)(ar4 + DAT_8c0dac40,ar5,ar6,ar7);
  return uVar1;
}



/* get_field_4_0dac48 @ 8c0dac48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_4_0dac48(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}



/* FUN_8c0dac50 @ 8c0dac50 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0dac68) */
/* WARNING: Removing unreachable block (ram,0x8c0dac64) */
/* WARNING: Removing unreachable block (ram,0x8c0dac7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0dac50(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  int iVar1;
  undefined4 uVar2;
  int *a4;
  float *ar5_00;
  undefined4 ar5_01;
  float *ar6_00;
  float fVar3;
  float fVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  float fStack_a4;
  float fStack_a0;
  int iStack_9c;
  float fStack_98;
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [8];
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_74 [100];
  
  cVar7 = '\0';
  cVar6 = '\0';
  fStack_98 = 3.4028235e+38;
  Vec3_ctor_zero(auStack_84,ar5,ar6,ar7);
  fVar3 = DAT_8c1264b8;
  fVar4 = _UNK_8c1264bc;
  if (cVar7 == '\0') {
    fVar3 = *ar5;
    fVar4 = DAT_8c1264b8;
  }
  if (fVar3 == fVar4) {
    *(undefined4 *)(ar4 + 0x9d4) = 0;
    Vec3_dtor(auStack_84,0xffffffff,ar6,ar7);
    ar4_00 = 0;
  }
  else {
    ar6_00 = &fStack_98;
    ar5_00 = ar5;
    ar4_00 = FUN_8c0dbe24(ar4,ar5,ar6_00,ar7);
    if (ar4_00 == 0) {
      *(undefined4 *)(ar4 + 0x9d4) = 0;
      Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
    }
    else {
      FUN_8c02f670(ar4_00,ar5_00,ar6_00,ar7,auStack_94);
      Vec3_assign(auStack_84,auStack_94,ar6_00,ar7);
      ar5_01 = 0xffffffff;
      Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7);
      fVar3 = fStack_7c;
      if (cVar7 == '\0') {
        fVar3 = *(float *)(ar4 + 0xa70);
        fStack_78 = fStack_7c;
      }
      if (cVar6 != '\0' || fStack_78 <= fVar3) {
        iVar1 = get_field_24_05c284(ar4_00,ar5_01,ar6_00,ar7);
        if (iVar1 == 0x10) {
          *(undefined4 *)(ar4 + 0x9d4) = 0;
          Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
          ar4_00 = 0;
        }
        else {
          if (iVar1 == 0xe) {
            uVar2 = (**(code **)(*(int *)(ar4_00 + 8) + 0x148))(ar4_00,ar5_01,ar6_00,ar7);
            iStack_9c = (int)(short)uVar2;
            if (iStack_9c == 1) {
              *(undefined4 *)(ar4 + 0x9d4) = 0;
              Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
              return 0;
            }
          }
          if (cVar7 == '\0') {
            pcVar5 = (code *)0x42700000;
            fVar3 = fStack_98;
          }
          else {
            fVar3 = 60.0;
            pcVar5 = get_field_a4_032154;
          }
          if (cVar6 != '\0' || (float)pcVar5 <= fVar3) {
            if (cVar7 == '\0') {
              fStack_a4 = *ar5;
              fStack_a0 = ar5[1];
            }
            else {
              fStack_a4 = (float)*(undefined8 *)ar5;
              fStack_a0 = (float)*(undefined8 *)(ar5 + 1);
              iStack_9c = (int)((ulonglong)*(undefined8 *)(ar5 + 1) >> 0x20);
            }
            a4 = (int *)get_field_a4_032154(ar4_00,ar5_01,ar6_00,ar7);
            (**(code **)(*a4 + 0x38))(a4,auStack_74,ar6_00,ar7);
            iVar1 = FUN_8c0d1754(&fStack_a4,auStack_74,ar6_00,ar7);
            if (iVar1 == 0) {
              ar4_00 = 0;
            }
            *(int *)(ar4 + 0x9d4) = ar4_00;
            Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
          }
          else {
            *(int *)(ar4 + 0x9d4) = ar4_00;
            Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
          }
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x9d4) = 0;
        Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
        ar4_00 = 0;
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x8c1264bc) is written */
  return ar4_00;
}



/* FUN_8c0daea8 @ 8c0daea8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0daea8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = ar5;
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0daf28)(ar4 + DAT_8c0daf24,ar5,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c0daf2c)(ar4 + DAT_8c0daf24,uVar3,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c0daf34)(DAT_8c0daf30,0,ar6,ar7);
  if (iVar1 != 0) {
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = ar5;
      (**(code **)(*(int *)(a4 + 8) + 0x7c))(a4,ar5,ar6,ar7);
      iVar2 = (*(code *)PTR_list_node_next_8c0daf38)(a4,uVar3,ar6,ar7);
      a4 = iVar2;
    }
  }
  return iVar2;
}



/* FUN_8c0daf3c @ 8c0daf3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0daf3c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_pure_virtual_stub_8c0daf7c)(ar4,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c0daf80 @ 8c0daf80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0daf80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  int iVar3;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0daff4)(ar4 + DAT_8c0daff0,ar5,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c0daff8)(ar4 + DAT_8c0daff0,ar5,ar6,ar7);
  iVar2 = DAT_8c0daffc;
  *(undefined4 *)(DAT_8c0daffc + ar4) = 0;
  if (iVar1 != 0) {
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      (**(code **)(*(int *)(a4 + 8) + 0x60))(a4,ar5,ar6,ar7);
      iVar2 = (*(code *)PTR_list_node_next_8c0db000)(a4,ar5,ar6,ar7);
      a4 = iVar2;
    }
  }
  return iVar2;
}



/* noop_0db004 @ 8c0db004 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0db004(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0db008 @ 8c0db008 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db008(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0db07c)(ar4 + DAT_8c0db078,ar5,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c0db080)(ar4 + DAT_8c0db078,ar5,ar6,ar7);
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      (**(code **)(*(int *)(a4 + 8) + 100))(a4,ar5,ar6,ar7);
      a4 = (*(code *)PTR_list_node_next_8c0db084)(a4,ar5,ar6,ar7);
    }
  }
  return 0;
}



/* ret_const_0_0db088 @ 8c0db088 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0db088(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c0db090 @ 8c0db090 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0db090(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0db0fc)(ar4 + DAT_8c0db0f8,ar5,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c0db100)(ar4 + DAT_8c0db0f8,ar5,ar6,ar7);
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      (**(code **)(DAT_8c0db104 + *(int *)(a4 + 8)))(a4,ar5,ar6,ar7);
      a4 = (*(code *)PTR_list_node_next_8c0db108)(a4,ar5,ar6,ar7);
    }
  }
  return a4;
}



/* FUN_8c0db10c @ 8c0db10c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0db10c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0db178)(ar4 + DAT_8c0db174,ar5,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c0db17c)(ar4 + DAT_8c0db174,ar5,ar6,ar7);
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      (**(code **)(*(int *)(a4 + 8) + 0x68))(a4,ar5,ar6,ar7);
      a4 = (*(code *)PTR_list_node_next_8c0db180)(a4,ar5,ar6,ar7);
    }
  }
  return a4;
}



/* noop_0db184 @ 8c0db184 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0db184(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0db188 @ 8c0db188 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db188(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0db200)(ar4 + DAT_8c0db1fc,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0db210)(ar4 + DAT_8c0db20c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0db220)(ar4 + DAT_8c0db20c,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + DAT_8c0db20c) + 0xc))((int *)(ar4 + DAT_8c0db20c),ar5,ar6,ar7);
  return 1;
}



/* FUN_8c0db224 @ 8c0db224 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db224(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar4_00;
  int *a4;
  int iVar2;
  undefined1 *ar5_00;
  int iVar3;
  undefined1 auStack_58 [72];
  
  ar5_00 = ar5;
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0db2e8)(ar4 + DAT_8c0db2e4,ar5,ar6,ar7);
  ar4_00 = (*(code *)PTR_FUN_8c0db2ec)(ar4 + DAT_8c0db2e4,ar5_00,ar6,ar7);
  (*(code *)PTR_FUN_8c0db2f0)(auStack_58,ar5_00,ar6,ar7);
  (*(code *)PTR_FUN_8c0db2f4)(auStack_58,ar5,ar6,ar7);
  iVar3 = 0;
  while( true ) {
    if (iVar1 <= iVar3) {
      (*(code *)PTR_Class_129974_m0_016c2c_8c0db2fc)(auStack_58,0xffffffff,ar6,ar7);
      return 0;
    }
    a4 = (int *)(*(code *)PTR_get_field_a4_032154_8c0db2f8)(ar4_00,ar5,ar6,ar7);
    ar5 = auStack_58;
    iVar2 = (**(code **)(*a4 + 0x14))(a4,ar5,ar6,ar7);
    if (iVar2 == 1) break;
    ar4_00 = (*(code *)PTR_list_node_next_8c0db300)(ar4_00,ar5,ar6,ar7);
    iVar3 = iVar3 + 1;
  }
  (*(code *)PTR_Class_129974_m0_016c2c_8c0db2fc)(auStack_58,0xffffffff,ar6,ar7);
  return 1;
}



/* FUN_8c0db304 @ 8c0db304 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db304(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0db328)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0db32c @ 8c0db32c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db32c(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined4 uVar1;
  undefined4 auStack_10 [2];
  
  if (ar7 == 0xe) {
    uVar1 = (*(code *)PTR_FUN_8c0db3ac)(DAT_8c0db3a8,0x26,ar6,0xe);
  }
  else {
    auStack_10[0] = (*(code *)PTR_FUN_8c0db3b0)(DAT_8c0db3a8,ar5,ar6,ar7);
    uVar1 = 0xd;
    (*(code *)PTR_FUN_8c0db3b4)(DAT_8c0db3a8,auStack_10[0],0xd,ar7);
    uVar1 = (*(code *)PTR_FUN_8c0db3b8)(DAT_8c0db3a8,auStack_10,uVar1,ar7);
  }
  return uVar1;
}



/* FUN_8c0db3bc @ 8c0db3bc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0db3bc) */
/* WARNING: Removing unreachable block (ram,0x8c0db3be) */
/* WARNING: Unknown calling convention */

int FUN_8c0db3bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int ar4_00;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  int iVar3;
  int iVar4;
  int a4;
  int iVar5;
  uint extraout_fr1;
  undefined4 extraout_fr1_00;
  undefined4 extraout_fr0;
  undefined4 in_fr15;
  float fVar6;
  undefined8 uVar7;
  undefined8 in_xd14;
  char cVar8;
  char cVar9;
  undefined8 uStack_4c;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [12];
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  iVar3 = 0;
  Vec3_ctor_zero(auStack_38,ar5,ar6,ar7);
  Vec3_ctor_zero((int)&uStack_4c + 4,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    uStack_4c = (ulonglong)uStack_4c._4_4_ << 0x20;
    uVar7 = CONCAT44(0x47435000,in_fr15);
  }
  else {
    uStack_4c = (ulonglong)extraout_fr1;
    uVar7 = 0x8c022cb047435000;
  }
  if (iVar1 == 0) {
    Vec3_dtor((int)&uStack_4c + 4,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
    iVar3 = 0;
  }
  else {
    FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7);
    ar7_00 = auStack_40;
    ar6_00 = auStack_44;
    iVar1 = (int)&uStack_4c + 4;
    FUN_8c0db5a8(ar4 + 0x9e8,iVar1,ar6_00,ar7_00);
    for (iVar4 = 3; iVar4 < 8; iVar4 = iVar4 + 1) {
      iVar2 = get_field_38_0db5a0(iVar4 * 0x3c + ar4 + 0x3a8,iVar1,ar6_00,ar7_00);
      if (iVar2 != 0) {
        ar4_00 = FUN_8c0db580(iVar4 * 0x3c + ar4 + 0x3a8,iVar1,ar6_00,ar7_00);
        a4 = *(int *)(ar4_00 + 8);
        for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
          ar7_00 = auStack_30;
          ar6_00 = auStack_34;
          (**(code **)(*(int *)(a4 + 8) + 0x134))(a4,auStack_38,ar6_00,ar7_00);
          iVar1 = ar4 + 0xa68;
          FUN_8c023b4c(auStack_38,iVar1,ar6_00,ar7_00);
          Vec3_length_sq(auStack_38,iVar1,ar6_00,ar7_00);
          if (cVar9 == '\0') {
            uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),extraout_fr0);
          }
          else {
            in_xd14 = CONCAT44(extraout_fr0,extraout_fr1_00);
          }
          fVar6 = (float)uVar7;
          if ((cVar8 == '\0' && fVar6 < (float)((ulonglong)uVar7 >> 0x20)) &&
             (iVar3 = a4, uVar7 = in_xd14, cVar9 == '\0')) {
            uVar7 = CONCAT44(fVar6,fVar6);
          }
          ar4_00 = list_node_next(ar4_00,iVar1,ar6_00,ar7_00);
          a4 = *(int *)(ar4_00 + 8);
        }
      }
    }
    Vec3_dtor((int)&uStack_4c + 4,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7_00);
  }
  return iVar3;
}



/* FUN_8c0db580 @ 8c0db580 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db580(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_list_node_next_8c0db59c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* get_field_38_0db5a0 @ 8c0db5a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_38_0db5a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x38);
}



/* FUN_8c0db5a8 @ 8c0db5a8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0db5ba) */
/* WARNING: Removing unreachable block (ram,0x8c0db5b4) */
/* WARNING: Removing unreachable block (ram,0x8c0db5ac) */
/* WARNING: Removing unreachable block (ram,0x8c0db5ae) */
/* WARNING: Removing unreachable block (ram,0x8c0db5b6) */
/* WARNING: Removing unreachable block (ram,0x8c0db5bc) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0db5a8(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x50);
  *ar6 = *(undefined4 *)(ar4 + 0x54);
  *ar7 = *(undefined4 *)(ar4 + 0x58);
  return (undefined4 *)(ar4 + 0x54);
}



/* FUN_8c0db5c4 @ 8c0db5c4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0db5c6) */
/* WARNING: Removing unreachable block (ram,0x8c0db5c4) */
/* WARNING: Removing unreachable block (ram,0x8c0db5c8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db5c4(int ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar4_00;
  double *ar5_00;
  undefined1 *puVar2;
  int ar5_01;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  double in_dr0;
  double dVar6;
  float fVar7;
  float fVar8;
  undefined4 in_fr12;
  undefined4 in_fr15;
  double dVar9;
  double in_xd14;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [12];
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar5_00 = ar5;
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  uVar3 = 0;
  Vec3_ctor_zero(auStack_34,ar5_00,ar6,ar7);
  Vec3_ctor_zero(auStack_44,ar5_00,ar6,ar7);
  fVar8 = 0.0;
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x47435000,in_fr15);
  }
  else {
    dVar9 = -7.932638084811958e-251;
  }
  if (iVar1 == 0) {
    Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
    uVar3 = 0;
  }
  else {
    ar7_00 = auStack_3c;
    ar6_00 = auStack_40;
    puVar2 = auStack_44;
    FUN_8c0db5a8(ar4 + 0x9e8,puVar2,ar6_00,ar7_00);
    ar4_00 = FUN_8c0da588(ar4 + 0xa4,puVar2,ar6_00,ar7_00);
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      ar7_00 = auStack_2c;
      ar6_00 = auStack_30;
      FUN_8c0507a4(ar4_00,auStack_34,ar6_00,ar7_00);
      ar5_01 = ar4 + 0xa68;
      FUN_8c023b4c(auStack_34,ar5_01,ar6_00,ar7_00);
      Vec3_length_sq(auStack_34,ar5_01,ar6_00,ar7_00);
      dVar6 = in_dr0;
      if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
        dVar6 = in_xd14;
      }
      in_xd14 = dVar6;
      Vec3_length(auStack_34,ar5_01,ar6_00,ar7_00);
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      puVar2 = auStack_34;
      FUN_8c022dac(auStack_44,puVar2,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0xba4));
        fVar8 = fVar5;
      }
      else {
        dVar6 = -1.2765500855395165e-250;
      }
      if (cVar11 == '\0') {
        fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 / dVar6,0);
      }
      if (cVar12 == '\0') {
        in_dr0 = (double)CONCAT44(0x40000000,fVar5);
      }
      else {
        in_dr0 = -1.2765500855395165e-250;
      }
      if (cVar11 == '\0') {
        fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
        fVar5 = SUB84(in_dr0,0) + fVar7;
        in_dr0 = (double)CONCAT44(fVar7,fVar5);
        bVar10 = fVar8 < fVar5;
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
        bVar10 = (double)CONCAT44(in_fr12,fVar8) < in_dr0;
      }
      if (((bVar10) &&
          (fVar5 = SUB84(dVar9,0), cVar11 == '\0' && fVar5 < (float)((ulonglong)dVar9 >> 0x20))) &&
         (uVar3 = ar4_00, dVar9 = in_xd14, cVar12 == '\0')) {
        dVar9 = (double)CONCAT44(fVar5,fVar5);
      }
      ar4_00 = list_node_next(ar4_00,puVar2,ar6_00,ar7_00);
    }
    if (cVar12 == '\0') {
      *(int *)ar5 = (int)((ulonglong)dVar9 >> 0x20);
    }
    else {
      *ar5 = dVar9;
    }
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7_00);
  }
  return uVar3;
}



/* FUN_8c0db764 @ 8c0db764 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db764(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Invalid_Item_number_CItemLis_0fe110_8c0db78c)
                    (ar4 + DAT_8c0db788,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0db790 @ 8c0db790 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db790(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_s_Invalid_Item_number_CNodePtr_0fe424_8c0db7d0)
                    (ar5 * 0x3c + ar4 + DAT_8c0db7cc,ar6,ar6,ar7);
  return *(undefined4 *)(iVar1 + 8);
}



/* FUN_8c0db7d4 @ 8c0db7d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db7d4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_38_0db5a0_8c0db80c)(ar5 * 0x3c + ar4 + DAT_8c0db808,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0db810 @ 8c0db810 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0db810(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = (*(code *)PTR_FUN_8c0db85c)(ar4 + DAT_8c0db858,ar5,ar6,ar7);
  iVar1 = 1;
  while (ar4_00 != ar5) {
    ar4_00 = (*(code *)PTR_list_node_next_8c0db860)(ar4_00,ar5_00,ar6,ar7);
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* FUN_8c0db864 @ 8c0db864 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0db864(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c0db89c)(ar4,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_get_field_300_0bf154_8c0db8a4)(ar4 + DAT_8c0db8a0,ar5,ar6,ar7);
  return iVar2 - iVar1;
}



/* FUN_8c0db8a8 @ 8c0db8a8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0db8c0) */
/* WARNING: Removing unreachable block (ram,0x8c0db8b8) */
/* WARNING: Removing unreachable block (ram,0x8c0db8ae) */
/* WARNING: Removing unreachable block (ram,0x8c0db8b0) */
/* WARNING: Removing unreachable block (ram,0x8c0db8ba) */
/* WARNING: Removing unreachable block (ram,0x8c0db8c2) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db8a8(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0xa68);
  *ar6 = *(undefined4 *)(ar4 + 0xa6c);
  *ar7 = *(undefined4 *)(ar4 + 0xa70);
  return 0xa70;
}



/* FUN_8c0db8d4 @ 8c0db8d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db8d4(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *ar5_00;
  int iVar2;
  undefined4 uStack_18;
  undefined4 auStack_14 [2];
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_18 = 0;
  ar5_00 = ar5;
  for (iVar2 = 0; iVar2 < 0x11; iVar2 = iVar2 + 1) {
    while (iVar1 = (*(code *)PTR_get_field_38_0db5a0_8c0dba18)
                             (iVar2 * 0x3c + ar4 + DAT_8c0dba14,ar5_00,ar6,ar7), iVar1 != 0) {
      iVar1 = (*(code *)PTR_get_field_38_0db5a0_8c0dba18)
                        (iVar2 * 0x3c + ar4 + DAT_8c0dba14,ar5_00,ar6,ar7);
      auStack_14[0] =
           (*(code *)PTR_s_Invalid_Item_number_CNodePtr_0fe424_8c0dba1c)
                     (iVar2 * 0x3c + ar4 + DAT_8c0dba14,iVar1 + -1,ar6,ar7);
      (*(code *)PTR_s_Item_pointer_is_NULL_CNodePt_0fe338_8c0dba20)
                (iVar2 * 0x3c + ar4 + DAT_8c0dba14,auStack_14[0],ar6,ar7);
      ar5_00 = auStack_14;
      (*(code *)PTR_FUN_8c0dba28)(ar4 + DAT_8c0dba24,ar5_00,ar6,ar7);
    }
    (*(code *)PTR_FUN_8c0dba2c)(iVar2 * 0x3c + ar4 + DAT_8c0dba14,ar5_00,ar6,ar7);
  }
  while (iVar2 = (*(code *)PTR_get_field_300_0bf154_8c0dba34)(ar4 + DAT_8c0dba30,ar5_00,ar6,ar7),
        iVar2 != 0) {
    iVar2 = (*(code *)PTR_get_field_300_0bf154_8c0dba34)(ar4 + DAT_8c0dba30,ar5_00,ar6,ar7);
    uStack_18 = (*(code *)PTR_s_Invalid_Item_number_CItemLis_0fe110_8c0dba38)
                          (ar4 + DAT_8c0dba30,iVar2 + -1,ar6,ar7);
    (*(code *)PTR_s_Item_pointer_is_NULL_CItemLi_0fe01c_8c0dba3c)
              (ar4 + DAT_8c0dba30,uStack_18,ar6,ar7);
    ar5_00 = ar5;
    (*(code *)PTR_FUN_8c0dba40)(&uStack_18,ar5,ar6,ar7);
  }
  *(undefined4 *)(DAT_8c0dba44 + ar4) = 0;
  *(undefined4 *)(DAT_8c0dba48 + ar4) = 0;
  *(undefined4 *)(DAT_8c0dba4c + ar4) = 0;
  return 1;
}



/* FUN_8c0dba50 @ 8c0dba50 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0dba50) */
/* WARNING: Removing unreachable block (ram,0x8c0dba64) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dba50(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  int iVar2;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  iVar2 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  while( true ) {
    if (7 < iVar2) {
      return 0;
    }
    iVar1 = FUN_8c0f6ab0(ar4 + iVar2 * 0x68 + 0xc0c,ar5_00,ar6_00,ar7);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  Vec3_ctor_copy(auStack_28,ar5,ar6_00,ar7);
  Vec3_ctor_copy(auStack_38,ar6,ar6_00,ar7);
  ar6_01 = auStack_38;
  FUN_8c0f69ec(ar4 + iVar2 * 0x68 + 0xc0c,auStack_28,ar6_01,ar7);
  Vec3_dtor(auStack_38,0xffffffff,ar6_01,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6_01,ar7);
  return 1;
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



/* FUN_8c0dbbe8 @ 8c0dbbe8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0dbbe8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar5_00;
  int iVar4;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0dbd24)(ar4 + DAT_8c0dbd20,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c0dbd28)(ar4 + DAT_8c0dbd20,ar5,ar6,ar7);
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
    aiStack_1c[0] = iVar2;
    iVar3 = (*(code *)PTR_FUN_8c0dbd2c)(iVar2,ar5,ar6,ar7);
    if (iVar3 == 0) {
      iVar2 = (*(code *)PTR_get_field_24_05c284_8c0dbd30)(aiStack_1c[0],ar5,ar6,ar7);
      if (iVar2 == 0xd) {
        *DAT_8c0dbd34 = 0;
      }
      if (aiStack_1c[0] == *(int *)(DAT_8c0dbd38 + ar4)) {
        *(undefined4 *)(DAT_8c0dbd38 + ar4) = 0;
      }
      if (aiStack_1c[0] == *(int *)(DAT_8c0dbd3c + ar4)) {
        *(undefined4 *)(DAT_8c0dbd3c + ar4) = 0;
      }
      iVar2 = aiStack_1c[0];
      iVar3 = (*(code *)PTR_get_field_24_05c284_8c0dbd30)(aiStack_1c[0],ar5,ar6,ar7);
      if (iVar3 != 0xf) {
        (*(code *)PTR_FUN_8c0dbd40)(iVar2,ar5,ar6,ar7);
      }
      iVar2 = (*(code *)PTR_list_node_next_8c0dbd44)(aiStack_1c[0],ar5,ar6,ar7);
      iVar3 = (*(code *)PTR_get_field_24_05c284_8c0dbd30)(aiStack_1c[0],ar5,ar6,ar7);
      ar5_00 = (*(code *)PTR_get_field_160_0dab80_8c0dbd48)(aiStack_1c[0],ar5,ar6,ar7);
      (*(code *)PTR_s_Item_pointer_is_NULL_CNodePt_0fe338_8c0dbd50)
                (iVar3 * 0x3c + ar4 + DAT_8c0dbd4c,ar5_00,ar6,ar7);
      uStack_20 = (*(code *)PTR_get_field_160_0dab80_8c0dbd48)(aiStack_1c[0],ar5_00,ar6,ar7);
      (*(code *)PTR_FUN_8c0dbd58)(ar4 + DAT_8c0dbd54,&uStack_20,ar6,ar7);
      (*(code *)PTR_s_Item_pointer_is_NULL_CItemLi_0fe01c_8c0dbd5c)
                (ar4 + DAT_8c0dbd20,aiStack_1c[0],ar6,ar7);
      ar5 = 1;
      iVar3 = (*(code *)PTR_FUN_8c0dbd60)(aiStack_1c,1,ar6,ar7);
    }
    else {
      iVar3 = (*(code *)PTR_list_node_next_8c0dbd44)(iVar2,ar5,ar6,ar7);
      iVar2 = iVar3;
    }
  }
  return iVar3;
}



/* FUN_8c0dbd64 @ 8c0dbd64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dbd64(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0dbd7c)(ar4,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c0dbd80 @ 8c0dbd80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dbd80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar4_00;
  int iVar2;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0dbde4)(ar4 + DAT_8c0dbde0,ar5,ar6,ar7);
  ar4_00 = (*(code *)PTR_FUN_8c0dbde8)(ar4 + DAT_8c0dbde0,ar5,ar6,ar7);
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    (*(code *)PTR_Vec3_assign_wrap_0f4da4_8c0dbdec)(ar4_00,ar5,ar6,ar7);
    ar4_00 = (*(code *)PTR_list_node_next_8c0dbdf0)(ar4_00,ar5,ar6,ar7);
  }
  return ar4_00;
}



/* FUN_8c0dbdf4 @ 8c0dbdf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dbdf4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0dbe20)(ar4 + DAT_8c0dbe1c,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0dbe24 @ 8c0dbe24 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0dbe24) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dbe24(int ar4,undefined4 ar5,undefined8 *ar6,int ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 ar4_00;
  undefined4 uVar3;
  undefined8 *ar6_00;
  undefined4 uVar4;
  int iVar5;
  undefined8 in_dr0;
  undefined4 uVar6;
  undefined8 in_xd14;
  char cVar7;
  char cVar8;
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [128];
  undefined8 uStack_34;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = ar5;
  ar6_00 = ar6;
  iVar2 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  uVar4 = 0;
  Vec3_ctor_zero(&uStack_34,uVar3,ar6_00,ar7);
  uVar6 = 0;
  FUN_8c0191e4(auStack_b4,uVar3,ar6_00,ar7);
  if (iVar2 == 0) {
    free_if_nonnull_wrap_019270(auStack_b4,0xffffffff,ar6_00,ar7);
    Vec3_dtor(&uStack_34,0xffffffff,ar6_00,ar7);
    uVar4 = 0;
  }
  else {
    ar4_00 = FUN_8c0da588(ar4 + 0xa4,uVar3,ar6_00,ar7);
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      uVar3 = FUN_8c0dbf88(ar4_00,uVar3,ar6_00,ar7);
      Vec3_ctor_copy(auStack_c4,uVar3,ar6_00,ar7);
      ar7 = (int)&uStack_34 + 4;
      ar6_00 = &uStack_34;
      FUN_8c019508(auStack_b4,auStack_c4,ar6_00,ar7);
      Vec3_dtor(auStack_c4,0xffffffff,ar6_00,ar7);
      uVar3 = ar5;
      FUN_8c022fc0(&uStack_34,ar5,ar6_00,ar7);
      uVar1 = in_dr0;
      if (cVar8 == '\0') {
        uVar6 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = CONCAT44(uVar6,*(undefined4 *)ar6);
        uVar1 = in_xd14;
      }
      in_xd14 = uVar1;
      if (cVar7 == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < (float)in_dr0) {
        uVar4 = ar4_00;
        if (cVar8 == '\0') {
          *(undefined4 *)ar6 = uVar6;
        }
        else {
          *ar6 = in_xd14;
        }
      }
      ar4_00 = list_node_next(ar4_00,uVar3,ar6_00,ar7);
    }
    free_if_nonnull_wrap_019270(auStack_b4,0xffffffff,ar6_00,ar7);
    Vec3_dtor(&uStack_34,0xffffffff,ar6_00,ar7);
  }
  return uVar4;
}



/* FUN_8c0dbf88 @ 8c0dbf88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0dbf88(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 0x30;
}



/* FUN_8c0dbf90 @ 8c0dbf90 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0dbf90) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dbf90(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  double in_dr0;
  double dVar4;
  float fVar5;
  undefined4 in_fr3;
  double dVar6;
  ulonglong in_dr14;
  double dVar7;
  double in_xd0;
  double in_xd14;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  dVar7 = (double)(in_dr14 & 0xffffffff00000000);
  piVar2 = ar5;
  iVar1 = FUN_8c100a58(ar5,ar5,ar6,ar7);
  if (iVar1 == 1) {
    piVar2 = (int *)0x0;
    FUN_8c0c51a0(ar5,0,ar6,ar7);
    FUN_8c0dc27c(ar5,piVar2,ar6,ar7);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(ar4[0x29c],in_fr3);
      dVar4 = (double)CONCAT44(0x41200000,(int)((ulonglong)in_dr0 >> 0x20));
    }
    else {
      dVar6 = *(double *)(ar4 + 0x29c);
      dVar4 = -1.4003621681683483e-250;
      in_xd0 = in_dr0;
    }
    if (cVar8 == '\0') {
      fVar5 = (float)((ulonglong)dVar4 >> 0x20);
      fVar3 = SUB84(dVar4,0) * fVar5;
      in_dr0 = (double)CONCAT44(fVar5,fVar3);
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + fVar3,SUB84(dVar6,0));
    }
    else {
      in_dr0 = dVar4 * dVar4;
      dVar6 = dVar6 + in_dr0;
    }
    if (cVar9 == '\0') {
      ar4[0x29c] = (int)((ulonglong)dVar6 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x29c) = dVar6;
    }
  }
  else {
    iVar1 = FUN_8c100abc(ar5,piVar2,ar6,ar7);
    if (iVar1 == 1) {
      piVar2 = (int *)0x0;
      FUN_8c0c51a0(ar5,0,ar6,ar7);
      FUN_8c0dc27c(ar5,piVar2,ar6,ar7);
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(ar4[0x29c],in_fr3);
        dVar4 = (double)CONCAT44(0x41200000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar6 = *(double *)(ar4 + 0x29c);
        dVar4 = -1.4003621681683483e-250;
        in_xd0 = in_dr0;
      }
      if (cVar8 == '\0') {
        fVar5 = (float)((ulonglong)dVar4 >> 0x20);
        fVar3 = SUB84(dVar4,0) * fVar5;
        in_dr0 = (double)CONCAT44(fVar5,fVar3);
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + fVar3,SUB84(dVar6,0));
      }
      else {
        in_dr0 = dVar4 * dVar4;
        dVar6 = dVar6 + in_dr0;
      }
      if (cVar9 == '\0') {
        ar4[0x29c] = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x29c) = dVar6;
      }
    }
  }
  (**(code **)(ar4[0x2dc] + 8))(ar4 + 0x2dc,piVar2,ar6,ar7);
  dVar6 = in_dr0;
  if (cVar9 == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    dVar6 = in_xd14;
  }
  iVar1 = FUN_8c100b20(ar5,piVar2,ar6,ar7);
  if (iVar1 == 1) {
    FUN_8c0dc27c(ar5,piVar2,ar6,ar7);
    if (cVar8 == '\0') {
      in_dr0 = (double)CONCAT44(-(float)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0));
    }
    else {
      in_dr0 = -in_dr0;
    }
    dVar4 = dVar6;
    if (cVar9 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(dVar7,0));
      dVar4 = in_xd0;
    }
    if (cVar8 == '\0') {
      fVar3 = SUB84(in_dr0,0) * (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      fVar3 = SUB84(in_dr0 * in_dr0,0);
    }
    if (cVar9 == '\0') {
      in_dr0 = (double)CONCAT44(ar4[0x29b],fVar3);
    }
    else {
      in_dr0 = *(double *)(ar4 + 0x29b);
    }
    if (cVar8 == '\0') {
      fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(fVar3,SUB84(in_dr0,0) + fVar3);
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
    }
    if (cVar9 == '\0') {
      ar4[0x29b] = SUB84(in_dr0,0);
    }
    else {
      *(double *)(ar4 + 0x29b) = dVar4;
    }
    FUN_8c1004b4(ar5,piVar2,ar6,ar7);
  }
  else {
    iVar1 = FUN_8c100b84(ar5,piVar2,ar6,ar7);
    if (iVar1 == 1) {
      FUN_8c0dc27c(ar5,piVar2,ar6,ar7);
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(-(float)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0));
      }
      else {
        in_dr0 = -in_dr0;
      }
      dVar4 = dVar6;
      if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(dVar7,0));
        dVar4 = in_xd0;
      }
      if (cVar8 == '\0') {
        fVar3 = SUB84(in_dr0,0) * (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        fVar3 = SUB84(in_dr0 * in_dr0,0);
      }
      if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44(ar4[0x29b],fVar3);
      }
      else {
        in_dr0 = *(double *)(ar4 + 0x29b);
      }
      if (cVar8 == '\0') {
        fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = (double)CONCAT44(fVar3,SUB84(in_dr0,0) + fVar3);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
      if (cVar9 == '\0') {
        ar4[0x29b] = SUB84(in_dr0,0);
      }
      else {
        *(double *)(ar4 + 0x29b) = dVar4;
      }
      FUN_8c10052c(ar5,piVar2,ar6,ar7);
    }
  }
  iVar1 = FUN_8c100be8(ar5,piVar2,ar6,ar7);
  if (iVar1 == 1) {
    FUN_8c0dc26c(ar5,piVar2,ar6,ar7);
    if (cVar8 == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                               SUB84(dVar7,0) * (float)((ulonglong)in_dr0 >> 0x20));
    }
    else {
      dVar7 = dVar7 * in_dr0;
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(ar4[0x29a],SUB84(in_dr0,0));
    }
    else {
      dVar4 = *(double *)(ar4 + 0x29a);
    }
    if (cVar8 == '\0') {
      fVar3 = SUB84(dVar7,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar7 + dVar4,0);
    }
    if (cVar9 == '\0') {
      ar4[0x29a] = (int)fVar3;
    }
    else {
      *(double *)(ar4 + 0x29a) = dVar6;
    }
    FUN_8c1005a4(ar5,piVar2,ar6,ar7);
  }
  else {
    iVar1 = FUN_8c100c34(ar5,piVar2,ar6,ar7);
    if (iVar1 == 1) {
      FUN_8c0dc26c(ar5,piVar2,ar6,ar7);
      if (cVar8 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                                 SUB84(dVar7,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar7 = dVar7 * in_dr0;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(ar4[0x29a],SUB84(in_dr0,0));
      }
      else {
        dVar4 = *(double *)(ar4 + 0x29a);
      }
      if (cVar8 == '\0') {
        fVar3 = SUB84(dVar7,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar7 + dVar4,0);
      }
      if (cVar9 == '\0') {
        ar4[0x29a] = (int)fVar3;
      }
      else {
        *(double *)(ar4 + 0x29a) = dVar6;
      }
      FUN_8c10061c(ar5,piVar2,ar6,ar7);
    }
  }
  piVar2 = ar5;
  FUN_8c0dc990(ar4,ar5,ar6,ar7);
  if (((ar4[9] != 2) && (ar4[0x275] != 0)) && (iVar1 = FUN_8c0dc244(ar5,piVar2,ar6,ar7), iVar1 == 1)
     ) {
    piVar2 = (int *)ar4[0x275];
    FUN_8c0d69a8(ar4 + 0x29a,piVar2,ar6,ar7);
    ar4[0x275] = 0;
    FUN_8c0c51c4(ar5,piVar2,ar6,ar7);
  }
  iVar1 = FUN_8c10022c(ar5,piVar2,ar6,ar7);
  if (iVar1 == 1) {
    piVar2 = ar4 + 0x29a;
    (**(code **)(*ar4 + 0x68))(ar4,piVar2,ar6,ar7);
  }
  FUN_8c1002a8(ar5,piVar2,ar6,ar7);
  return 1;
}



/* FUN_8c0dc244 @ 8c0dc244 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc244(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0dc268)(*(undefined4 *)(DAT_8c0dc264 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0dc26c @ 8c0dc26c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc26c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0dc278;
}



/* FUN_8c0dc27c @ 8c0dc27c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc27c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0dc288;
}



/* FUN_8c0dc28c @ 8c0dc28c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc28c(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  piVar3 = ar5;
  iVar1 = FUN_8c0dc520(ar5,ar5,ar6,ar7);
  if ((((iVar1 == 1) && (ar4[0x275] == ar4[0x2b2])) ||
      ((iVar1 = FUN_8c0dc520(ar5,piVar3,ar6,ar7), iVar1 == 1 && (ar4[0x275] == 0)))) ||
     (ar4[0x2b2] == 0)) {
    if (cVar8 == '\0') {
      uVar5 = CONCAT44(ar4[0x2b0],ar4[0x29c]);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x29c);
      uVar5 = *(undefined8 *)(ar4 + 0x2b0);
    }
    if (cVar7 != '\0' || (float)((ulonglong)uVar5 >> 0x20) <= (float)uVar5) {
      if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(0x43160000,ar4[0x29c]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x29c);
        dVar6 = 5.66204084872116e-311;
      }
      if (cVar7 == '\0') {
        fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar8 == '\0') {
        ar4[0x2a8] = (int)fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x2a8) = in_xd0;
      }
    }
    else if (cVar8 == '\0') {
      ar4[0x2a8] = ar4[0x2b0];
    }
    else {
      *(undefined8 *)(ar4 + 0x2a8) = *(undefined8 *)(ar4 + 0x2b0);
    }
    FUN_8c0dca2c(ar4,ar5,ar6,ar7);
  }
  else {
    iVar1 = FUN_8c0dc520(ar5,piVar3,ar6,ar7);
    if ((iVar1 == 1) && (ar4[0x275] != ar4[0x2b2])) {
      piVar3 = (int *)ar4[0x275];
      FUN_8c0d69a8(ar4 + 0x29a,piVar3,ar6,ar7);
      ar4[0x275] = 0;
      FUN_8c0c51c4(ar5,piVar3,ar6,ar7);
    }
    iVar1 = get_field_24_05c284(ar4[0x2b2],piVar3,ar6,ar7);
    if ((iVar1 == 0xe) &&
       (uVar2 = (**(code **)(*(int *)(ar4[0x2b2] + 8) + 0x148))(ar4[0x2b2],piVar3,ar6,ar7),
       (short)uVar2 == 1)) {
      if (cVar8 == '\0') {
        uVar5 = CONCAT44(ar4[0x2b0],ar4[0x29c]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x29c);
        uVar5 = *(undefined8 *)(ar4 + 0x2b0);
      }
      if (cVar7 != '\0' || (float)((ulonglong)uVar5 >> 0x20) <= (float)uVar5) {
        if (cVar8 == '\0') {
          dVar6 = (double)CONCAT44(0x42480000,ar4[0x29c]);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x29c);
          dVar6 = -1.4004953740190736e-250;
        }
        if (cVar7 == '\0') {
          fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar6 + dVar6,0);
        }
        if (cVar8 == '\0') {
          ar4[0x2a8] = (int)fVar4;
        }
        else {
          *(undefined8 *)(ar4 + 0x2a8) = in_xd0;
        }
      }
      else if (cVar8 == '\0') {
        ar4[0x2a8] = ar4[0x2b0];
      }
      else {
        *(undefined8 *)(ar4 + 0x2a8) = *(undefined8 *)(ar4 + 0x2b0);
      }
      FUN_8c0dca2c(ar4,ar5,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c100b20(ar5,piVar3,ar6,ar7);
      if (iVar1 == 1) {
        FUN_8c1004b4(ar5,piVar3,ar6,ar7);
      }
      else {
        iVar1 = FUN_8c100b84(ar5,piVar3,ar6,ar7);
        if (iVar1 == 1) {
          FUN_8c10052c(ar5,piVar3,ar6,ar7);
        }
      }
      iVar1 = FUN_8c100be8(ar5,piVar3,ar6,ar7);
      if (iVar1 == 1) {
        FUN_8c1005a4(ar5,piVar3,ar6,ar7);
      }
      else {
        iVar1 = FUN_8c100c34(ar5,piVar3,ar6,ar7);
        if (iVar1 == 1) {
          FUN_8c10061c(ar5,piVar3,ar6,ar7);
        }
      }
      piVar3 = ar5;
      FUN_8c0dc990(ar4,ar5,ar6,ar7);
      iVar1 = FUN_8c10022c(ar5,piVar3,ar6,ar7);
      if (iVar1 == 1) {
        piVar3 = ar4 + 0x29a;
        (**(code **)(*ar4 + 0x68))(ar4,piVar3,ar6,ar7);
      }
      FUN_8c1002a8(ar5,piVar3,ar6,ar7);
    }
  }
  return 1;
}



/* FUN_8c0dc520 @ 8c0dc520 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc520(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0dc544)(*(undefined4 *)(DAT_8c0dc540 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* ret_const_1_0dc548 @ 8c0dc548 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_0dc548(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c0dc558 @ 8c0dc558 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc558(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c0dc5b4)(ar5,ar5,ar6,ar7);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c0dc5c8)(ar4 + DAT_8c0dc5c4,ar5_00,ar6,ar7);
    (*(code *)PTR_FUN_8c0dc5cc)(ar5,ar5_00,ar6,ar7);
  }
  return 1;
}



/* FUN_8c0dc5d0 @ 8c0dc5d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc5d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_input_is_mask_set_20000_01ebd8_8c0dc614)
                    (*(undefined4 *)(DAT_8c0dc610 + ar4),ar5,ar6,ar7);
  if ((iVar1 != 0) &&
     (iVar1 = (*(code *)PTR_input_is_mask_set_10000_01ec68_8c0dc618)
                        (*(undefined4 *)(DAT_8c0dc610 + ar4),ar5,ar6,ar7), iVar1 != 0)) {
    return 0;
  }
  return 1;
}



/* FUN_8c0dc61c @ 8c0dc61c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0dc61c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = ar5;
  if (*(int *)(DAT_8c0dc780 + ar4) == 0) {
    iVar1 = (*(code *)PTR_FUN_8c0dc78c)(ar4,ar5,ar6,ar7);
    if (iVar1 != 0) {
      uVar3 = 0;
      (**(code **)(DAT_8c0dc788 + *(int *)(iVar1 + 8)))(iVar1,0,ar6,ar7);
    }
  }
  else {
    iVar1 = (*(code *)PTR_get_field_24_05c284_8c0dc784)
                      (*(undefined4 *)(DAT_8c0dc780 + ar4),ar5,ar6,ar7);
    if (((iVar1 == 3) || (iVar1 == 5)) || (iVar1 == 7)) {
      uVar3 = 0;
      (**(code **)(DAT_8c0dc788 + *(int *)(*(int *)(DAT_8c0dc780 + ar4) + 8)))
                (*(int *)(DAT_8c0dc780 + ar4),0,ar6,ar7);
    }
  }
  iVar1 = (*(code *)PTR_FUN_8c0dc790)(ar5,uVar3,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0dc798)(ar4 + DAT_8c0dc794,uVar3,ar6,ar7);
    iVar2 = (*(code *)PTR_FUN_8c0dc79c)(ar4 + DAT_8c0dc794,uVar3,ar6,ar7);
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = 1;
      (**(code **)(DAT_8c0dc788 + *(int *)(iVar2 + 8)))(iVar2,1,ar6,ar7);
      iVar2 = (*(code *)PTR_list_node_next_8c0dc7a0)(iVar2,uVar3,ar6,ar7);
    }
  }
  iVar1 = (*(code *)PTR_FUN_8c0dc7a4)(ar5,uVar3,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0dc798)(ar4 + DAT_8c0dc794,uVar3,ar6,ar7);
    iVar2 = (*(code *)PTR_FUN_8c0dc79c)(ar4 + DAT_8c0dc794,uVar3,ar6,ar7);
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = 2;
      (**(code **)(DAT_8c0dc788 + *(int *)(iVar2 + 8)))(iVar2,2,ar6,ar7);
      iVar2 = (*(code *)PTR_list_node_next_8c0dc7a0)(iVar2,uVar3,ar6,ar7);
    }
  }
  iVar1 = 0;
  if (*(int *)(DAT_8c0dc780 + ar4) != 0) {
    iVar1 = (*(code *)PTR_FUN_8c0dc7a8)(ar5,uVar3,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = (*(code *)PTR_FUN_8c0dc7ac)(ar5,uVar3,ar6,ar7);
    }
  }
  return iVar1;
}



/* FUN_8c0dc7b0 @ 8c0dc7b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc7b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined2 *)(DAT_8c0dc7bc + ar4) = 0x78;
  return 1;
}



/* FUN_8c0dc7c0 @ 8c0dc7c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc7c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0dc7e4)(*(undefined4 *)(DAT_8c0dc7e0 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0dc7e8 @ 8c0dc7e8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0dc802) */
/* WARNING: Removing unreachable block (ram,0x8c0dc808) */
/* WARNING: Unknown calling convention */

int FUN_8c0dc7e8(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  int iVar2;
  undefined4 *ar5_00;
  int iVar3;
  undefined4 uStack_20;
  undefined4 auStack_1c [2];
  
  auStack_1c[0] = 0;
  uStack_20 = 0;
  ar5_00 = ar5;
  iVar1 = FUN_8c100d5c(ar5,ar5,ar6,ar7);
  if ((iVar1 == 1) && (iVar1 = *(int *)(ar4 + 0x9d8), iVar1 == 0)) {
    ar4_00 = FUN_8c0da588(ar4 + 0xa4,ar5_00,ar6,ar7);
    iVar2 = get_field_300_0bf154(ar4 + 0xa4,ar5_00,ar6,ar7);
    iVar1 = iVar2;
    for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
      iVar1 = get_field_24_05c284(ar4_00,ar5_00,ar6,ar7);
      if ((iVar1 == 3) || (iVar1 = get_field_24_05c284(ar4_00,ar5_00,ar6,ar7), iVar1 == 5)) {
        ar6 = &uStack_20;
        ar5_00 = auStack_1c;
        FUN_8c101210(ar5,ar5_00,ar6,ar7);
        (**(code **)(*(int *)(ar4_00 + 8) + 0x8c))(ar4_00,ar5_00,ar6,ar7);
      }
      iVar1 = list_node_next(ar4_00,ar5_00,ar6,ar7);
      ar4_00 = iVar1;
    }
  }
  return iVar1;
}



/* FUN_8c0dc8fc @ 8c0dc8fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0dc8fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  int iVar1;
  undefined4 ar5_00;
  int iVar2;
  int iVar3;
  
  ar5_00 = ar5;
  ar4_00 = (*(code *)PTR_FUN_8c0dc97c)(ar4 + DAT_8c0dc978,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_get_field_38_0db5a0_8c0dc980)(ar4 + DAT_8c0dc978,ar5_00,ar6,ar7);
  iVar2 = iVar1;
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    ar5_00 = (*(code *)PTR_get_field_b0_10113c_8c0dc984)(ar5,ar5_00,ar6,ar7);
    (**(code **)(DAT_8c0dc988 + *(int *)(*(int *)(ar4_00 + 8) + 8)))
              (*(int *)(ar4_00 + 8),ar5_00,ar6,ar7);
    iVar2 = (*(code *)PTR_list_node_next_8c0dc98c)(ar4_00,ar5_00,ar6,ar7);
    ar4_00 = iVar2;
  }
  return iVar2;
}



/* FUN_8c0dc990 @ 8c0dc990 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0dc990(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c0dca0c)(ar5,ar5,ar6,ar7);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c0dca10)(ar5,ar5_00,ar6,ar7);
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c0dca14)(ar5,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      (*(code *)PTR_FUN_8c0dca18)(ar5,ar5_00,ar6,ar7);
    }
  }
  iVar1 = (*(code *)PTR_FUN_8c0dca1c)(ar5,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = (*(code *)PTR_FUN_8c0dca20)(ar5,ar5_00,ar6,ar7);
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c0dca24)(ar5,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = (*(code *)PTR_FUN_8c0dca28)(ar5,ar5_00,ar6,ar7);
    }
  }
  return iVar1;
}



/* FUN_8c0dca2c @ 8c0dca2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dca2c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = ar5;
  (*(code *)PTR_FUN_8c0dca6c)(ar4 + DAT_8c0dca68,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0dca70)(ar5,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c0dca74 @ 8c0dca74 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0dca82) */
/* WARNING: Removing unreachable block (ram,0x8c0dca7a) */
/* WARNING: Removing unreachable block (ram,0x8c0dca88) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dca74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 0xa68) = in_fr4;
  *(undefined4 *)(ar4 + 0xa6c) = in_fr5;
  *(undefined4 *)(ar4 + 0xa70) = in_fr6;
  return 0xa70;
}



/* s_WaterTank_0dcaa2 @ 8c0dca9c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0dcac0) */
/* WARNING: Removing unreachable block (ram,0x8c0dcab8) */
/* WARNING: Removing unreachable block (ram,0x8c0dcab0) */
/* WARNING: Removing unreachable block (ram,0x8c0dcab4) */
/* WARNING: Removing unreachable block (ram,0x8c0dcabc) */
/* WARNING: Removing unreachable block (ram,0x8c0dcac4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * s_WaterTank_0dcaa2(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined4 ar6_00;
  code *pcVar3;
  code *pcVar4;
  undefined8 *ar6_01;
  undefined4 *ar4_00;
  undefined4 ar7_00;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 in_fr1;
  float fVar8;
  double dVar9;
  undefined8 in_xd0;
  char cVar10;
  char cVar11;
  undefined4 in_stack_fffffee4;
  float fStack_90;
  undefined1 auStack_8c [4];
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
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
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar7_00 = 3;
  ar6_00 = 0;
  FUN_8c0d9c80(ar4,s_WaterTank_8c13fdb5,0,3);
  ar5_00 = &DAT_8c12b930;
  *ar4 = &DAT_8c12b930;
  FUN_8c015224(ar4 + 0x41b,&DAT_8c12b930,ar6_00,ar7_00);
  FUN_8c015ab8(ar4 + 0x41d,ar5_00,ar6_00,ar7_00);
  FUN_8c015ab8(ar4 + 0x41e,ar5_00,ar6_00,ar7_00);
  FUN_8c015ab8(ar4 + 0x41f,ar5_00,ar6_00,ar7_00);
  FUN_8c0d2fd8(ar4 + 0x42b,ar5_00,ar6_00,ar7_00);
  uVar2 = 0x13b24;
  FUN_8c0cff78(ar4 + 0x4ec9,0x13b24,ar6_00,ar7_00);
  FUN_8c0d07b4(ar4 + 0x4edc,uVar2,ar6_00,ar7_00);
  FUN_8c0d0b58(ar4 + 0x4ee3,uVar2,ar6_00,ar7_00);
  FUN_8c015ab8(ar4 + 0x89be,uVar2,ar6_00,ar7_00);
  FUN_8c015224(ar4 + 0x89bf,uVar2,ar6_00,ar7_00);
  FUN_8c0d931c(ar4 + 0x89c1,uVar2,ar6_00,ar7_00);
  FUN_8c017830(ar4 + 0x89d3,uVar2,ar6_00,ar7_00);
  Vec3_ctor_zero(ar4 + 0x89f4,uVar2,ar6_00,ar7_00);
  Vec3_ctor_zero(ar4 + 0x89f8,uVar2,ar6_00,ar7_00);
  Vec3_ctor_zero(ar4 + 0x89fc,uVar2,ar6_00,ar7_00);
  Vec3_ctor_zero(ar4 + 0x8a00,uVar2,ar6_00,ar7_00);
  uVar2 = 0xc;
  pcVar3 = free_if_nonnull_wrap_0d6ef8;
  FUN_8c010120(ar4 + 0x8a06,FUN_8c0d6ee0,free_if_nonnull_wrap_0d6ef8,0xc,0x6e);
  FUN_8c015224(ar4 + 0x8b50,FUN_8c015224,pcVar3,uVar2);
  FUN_8c010120(ar4 + 0x8b52,FUN_8c0d7060,FUN_8c0ddb3c,0x16c,3);
  uVar2 = 0x18;
  pcVar4 = free_if_nonnull_wrap_0cffc8;
  pcVar3 = FUN_8c02145c;
  FUN_8c010120(ar4 + 0x8c96,FUN_8c02145c,free_if_nonnull_wrap_0cffc8,0x18,2);
  Vec3_ctor_zero(&fStack_90,pcVar3,pcVar4,uVar2);
  pcVar3 = Vec3_ctor_zero;
  Vec3_ctor_zero(&uStack_80,Vec3_ctor_zero,pcVar4,uVar2);
  Vec3_ctor_zero(&uStack_70,pcVar3,pcVar4,uVar2);
  Vec3_ctor_zero(&uStack_60,pcVar3,pcVar4,uVar2);
  Vec3_ctor_zero(&uStack_50,pcVar3,pcVar4,uVar2);
  Vec3_ctor_zero(&uStack_40,pcVar3,pcVar4,uVar2);
  Vec3_ctor_zero(&uStack_30,pcVar3,pcVar4,uVar2);
  Vec3_ctor_zero(&uStack_20,pcVar3,pcVar4,uVar2);
  _DAT_8c437c38 = 0;
  _DAT_8c437c3a = 0xff;
  _DAT_8c437c3c = 0;
  _DAT_8c437c3e = 0;
  _DAT_8c437c40 = 0xff;
  _DAT_8c437c42 = 0;
  _DAT_8c437c44 = 0xff;
  _DAT_8c437c46 = 0xff;
  for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
    *(undefined4 *)(iVar6 * 4 + -0x73bc83b8) = 0xffffffff;
  }
  FUN_8c0e0da4(ar4,pcVar3,pcVar4,uVar2);
  ar4[0x89bd] = 0;
  if (cVar11 == '\0') {
    ar4[0x2e9] = 0x425dae14;
    ar4[0x2af] = 0x4573bfff;
    ar4[0x2b0] = 0x44c80199;
    ar4[0x2b1] = 0x44fd2000;
  }
  else {
    *(undefined8 *)(ar4 + 0x2e9) = 0xabc425dae14;
    *(undefined8 *)(ar4 + 0x2af) = 0xac04573bfff;
    *(undefined8 *)(ar4 + 0x2b0) = 0xac444c80199;
    in_fr1 = 0x44fd2000;
    *(undefined8 *)(ar4 + 0x2b1) = 0xa03cee0044fd2000;
  }
  for (iVar6 = 0; iVar6 < 0xb; iVar6 = iVar6 + 1) {
    for (iVar7 = 0; iVar7 < 10; iVar7 = iVar7 + 1) {
      if (cVar11 == '\0') {
        ar4[iVar6 * 0x1e + iVar7 * 3 + 0x8a06] = 0x43340000;
      }
      else {
        in_fr1 = 0x43340000;
        *(undefined8 *)(ar4 + iVar6 * 0x1e + iVar7 * 3 + 0x8a06) = 0x2281c43340000;
      }
      ar4[iVar6 * 0x1e + iVar7 * 3 + 0x8a07] = 0;
    }
  }
  for (iVar6 = 6; iVar6 < 0xb; iVar6 = iVar6 + 1) {
    for (iVar7 = 3; iVar7 < 10; iVar7 = iVar7 + 1) {
      if (cVar11 == '\0') {
        ar4[iVar6 * 0x1e + iVar7 * 3 + 0x8a06] = 0x40000000;
      }
      else {
        in_fr1 = 0x40000000;
        *(undefined8 *)(ar4 + iVar6 * 0x1e + iVar7 * 3 + 0x8a06) = 0x2281c40000000;
      }
      ar4[iVar6 * 0x1e + iVar7 * 3 + 0x8a07] = 1;
    }
  }
  for (iVar6 = 5; iVar6 < 10; iVar6 = iVar6 + 1) {
    ar4[iVar6 * 3 + 0x8a9d] = 2;
    if (cVar11 == '\0') {
      ar4[iVar6 * 3 + 0x8a9c] = 0x40000000;
    }
    else {
      in_fr1 = 0x40000000;
      *(undefined8 *)(ar4 + iVar6 * 3 + 0x8a9c) = 0xfd6e05c40000000;
    }
  }
  for (iVar6 = 5; iVar6 < 10; iVar6 = iVar6 + 1) {
    ar4[iVar6 * 3 + 0x8abb] = 2;
  }
  for (iVar6 = 6; iVar6 < 0xb; iVar6 = iVar6 + 1) {
    ar4[iVar6 * 0x1e + 0x8a13] = 2;
  }
  for (iVar6 = 6; iVar6 < 0xb; iVar6 = iVar6 + 1) {
    ar4[iVar6 * 0x1e + 0x8a10] = 2;
    if (cVar11 == '\0') {
      ar4[iVar6 * 0x1e + 0x8a0f] = 0x40000000;
    }
    else {
      in_fr1 = 0x40000000;
      *(undefined8 *)(ar4 + iVar6 * 0x1e + 0x8a0f) = 0x22ba040000000;
    }
  }
  ar4[0x8ae8] = 2;
  ar4[0x8ac7] = 2;
  ar4[0x8ac4] = 0;
  if (cVar11 == '\0') {
    ar4[0x8ac3] = 0x43340000;
  }
  else {
    in_fr1 = 0x43340000;
    *(undefined8 *)(ar4 + 0x8ac3) = 0xa024ee0043340000;
  }
  for (iVar6 = 2; iVar6 < 5; iVar6 = iVar6 + 1) {
    for (iVar7 = 0; iVar7 < 6; iVar7 = iVar7 + 1) {
      ar4[iVar6 * 0x1e + iVar7 * 3 + 0x8a08] = 1;
    }
  }
  ar4[0x8a4d] = 0;
  ar4[0x8a6b] = 0;
  ar4[0x8a89] = 0;
  if (cVar11 == '\0') {
    ar4[0x20] = 0x430c0000;
    ar4[0x21] = 0x42c80000;
    ar4[0x23] = 0x43a00000;
    ar4[0x24] = 0x42e00000;
    ar4[0x25] = 0x41000000;
  }
  else {
    *(undefined8 *)(ar4 + 0x20) = 0x84430c0000;
    *(undefined8 *)(ar4 + 0x21) = 0x8c42c80000;
    *(undefined8 *)(ar4 + 0x23) = 0x9043a00000;
    *(undefined8 *)(ar4 + 0x24) = 0x9442e00000;
    in_fr1 = 0x41000000;
    *(undefined8 *)(ar4 + 0x25) = 0x9841000000;
  }
  if (cVar11 == '\0') {
    ar4[0x26] = 0x3f800000;
    ar4[0x27] = 0x41300000;
    ar4[0x28] = 0x40400000;
  }
  else {
    *(ulonglong *)(ar4 + 0x26) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(ar4 + 0x27) = 0xa041300000;
    in_fr1 = 0x40400000;
    *(undefined8 *)(ar4 + 0x28) = 0x2318c40400000;
  }
  uVar2 = DAT_8c13f604;
  ar4[0x8c63] = DAT_8c13f600;
  ar4[0x8c64] = uVar2;
  ar4[0x8c65] = PTR_FUN_8c13f608;
  uVar2 = DAT_8c13f610;
  ar4[0x8c66] = DAT_8c13f60c;
  ar4[0x8c67] = uVar2;
  ar4[0x8c68] = PTR_FUN_8c13f614;
  uVar2 = DAT_8c13f61c;
  pfVar5 = (float *)(ar4 + 0x8c69);
  ar6_01 = (undefined8 *)&DAT_8c13f618;
  *pfVar5 = DAT_8c13f618;
  ar4[0x8c6a] = uVar2;
  ar4[0x8c6b] = PTR_FUN_8c13f620;
  uVar2 = DAT_8c13f628;
  ar4[0x8c6c] = DAT_8c13f624;
  ar4[0x8c6d] = uVar2;
  ar4[0x8c6e] = PTR_FUN_8c13f62c;
  uVar2 = DAT_8c13f634;
  ar4[0x8c72] = DAT_8c13f630;
  ar4[0x8c73] = uVar2;
  ar4[0x8c74] = PTR_FUN_8c13f638;
  uVar2 = DAT_8c13f640;
  ar4[0x8c75] = DAT_8c13f63c;
  ar4[0x8c76] = uVar2;
  ar4[0x8c77] = PTR_FUN_8c13f644;
  uVar2 = DAT_8c13f64c;
  ar4[0x8c6f] = DAT_8c13f648;
  ar4[0x8c70] = uVar2;
  ar4[0x8c71] = PTR_FUN_8c13f650;
  uVar2 = DAT_8c13f658;
  ar4[0x8c78] = DAT_8c13f654;
  ar4[0x8c79] = uVar2;
  ar4[0x8c7a] = PTR_FUN_8c13f65c;
  uVar2 = DAT_8c13f664;
  ar4[0x8c7b] = DAT_8c13f660;
  ar4[0x8c7c] = uVar2;
  ar4[0x8c7d] = PTR_FUN_8c13f668;
  uVar2 = DAT_8c13f670;
  ar4[0x8c7e] = DAT_8c13f66c;
  ar4[0x8c7f] = uVar2;
  ar4[0x8c80] = PTR_FUN_8c13f674;
  uVar2 = DAT_8c13f67c;
  ar4[0x8c81] = DAT_8c13f678;
  ar4[0x8c82] = uVar2;
  ar4[0x8c83] = PTR_FUN_8c13f680;
  uVar2 = DAT_8c13f688;
  ar4[0x8c84] = DAT_8c13f684;
  ar4[0x8c85] = uVar2;
  ar4[0x8c86] = PTR_FUN_8c13f68c;
  uVar2 = DAT_8c13f694;
  ar4[0x8c87] = DAT_8c13f690;
  ar4[0x8c88] = uVar2;
  ar4[0x8c89] = PTR_FUN_8c13f698;
  uVar2 = DAT_8c13f6a0;
  ar4[0x8c8a] = DAT_8c13f69c;
  ar4[0x8c8b] = uVar2;
  ar4[0x8c8c] = PTR_FUN_8c13f6a4;
  uVar2 = DAT_8c13f6ac;
  ar4[0x8c8d] = DAT_8c13f6a8;
  ar4[0x8c8e] = uVar2;
  ar4[0x8c8f] = PTR_FUN_8c13f6b0;
  uVar2 = DAT_8c13f6b8;
  ar4[0x8c90] = DAT_8c13f6b4;
  ar4[0x8c91] = uVar2;
  ar4[0x8c92] = PTR_FUN_8c13f6bc;
  (**(code **)(ar4[0x8b50] + 8))(ar4 + 0x8b50,&PTR_PTR_8c13da18,&DAT_8c13f618,pfVar5);
  FUN_8c015ad4(ar4 + 0x8b52,&DAT_8c13dde0,ar6_01,pfVar5,in_stack_fffffee4);
  if (cVar11 == '\0') {
    ar4[0x8b53] = 0x446a56b8;
    ar4[0x8b54] = 0x43340000;
    ar4[0x8b55] = 0x43557405;
  }
  else {
    *(undefined8 *)(ar4 + 0x8b53) = 0x22d50446a56b8;
    *(undefined8 *)(ar4 + 0x8b54) = 0x22d5443340000;
    in_fr1 = 0x43557405;
    *(undefined8 *)(ar4 + 0x8b55) = 0x22d5c43557405;
  }
  Vec3_assign(ar4 + 0x8b57,ar4 + 0x8b53,ar6_01,pfVar5);
  if (cVar11 == '\0') {
    ar4[0x8ba8] = 0x43160000;
  }
  else {
    *(undefined8 *)(ar4 + 0x8ba8) = 0xc307b33343160000;
    uStack_88._4_4_ = 0xc3024ccd;
    uStack_74 = 0xa4;
    uStack_64 = 0xa4;
    uStack_54 = 0xc3024ccd;
    in_fr1 = 0xc307b333;
  }
  uStack_50 = 0xc307b333;
  uStack_58 = 0x430acccd;
  uStack_5c = 0x4384e666;
  uStack_60 = 0x430eb333;
  uStack_68 = 0xc3024ccd;
  uStack_6c = 0x4384e666;
  uStack_70 = 0x430eb333;
  uStack_78 = 0xc3024ccd;
  uStack_7c = 0x4384e666;
  uStack_80 = 0xc307b333;
  uStack_88._0_4_ = 0x430acccd;
  auStack_8c = (undefined1  [4])0x4384e666;
  fStack_90 = -135.7;
  if (cVar11 == '\0') {
    uStack_4c = 0;
  }
  else {
    uStack_44 = 0xc3024ccd;
    in_fr1 = 0xc307b333;
    uStack_4c = in_fr1;
  }
  uStack_40 = 0xc307b333;
  uStack_48 = 0x430acccd;
  if (cVar11 == '\0') {
    uStack_3c = 0;
  }
  else {
    uStack_34 = 0xa4;
    in_fr1 = 0x430eb333;
    uStack_3c = in_fr1;
  }
  uStack_30 = 0x430eb333;
  uStack_38 = 0xc3024ccd;
  if (cVar11 == '\0') {
    uStack_2c = 0;
  }
  else {
    uStack_24 = 0xa4;
    in_fr1 = 0x430eb333;
    uStack_2c = in_fr1;
  }
  uStack_20 = 0x430eb333;
  uStack_28 = 0xc3024ccd;
  if (cVar11 == '\0') {
    uStack_1c = 0;
    dVar9 = (double)CONCAT44(0x430acccd,in_fr1);
  }
  else {
    dVar9 = -643874257197465.6;
    uStack_14 = 0xc3024ccd;
    uStack_1c = in_fr1;
  }
  uStack_18 = 0x430acccd;
  for (iVar6 = 0; uVar2 = SUB84(dVar9,0), iVar6 < 8; iVar6 = iVar6 + 1) {
    pfVar1 = &fStack_90 + iVar6 * 4;
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*pfVar1);
    }
    else {
      in_xd0 = *(undefined8 *)pfVar1;
      dVar9 = 3.02834788845756e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *pfVar1 = fVar8;
    }
    else {
      *(undefined8 *)pfVar1 = in_xd0;
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(auStack_8c + iVar6 * 0x10));
    }
    else {
      in_xd0 = *(undefined8 *)(auStack_8c + iVar6 * 0x10);
      dVar9 = 3.02834788845756e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(auStack_8c + iVar6 * 0x10) = fVar8;
    }
    else {
      *(undefined8 *)(auStack_8c + iVar6 * 0x10) = in_xd0;
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(&uStack_88 + iVar6 * 2));
    }
    else {
      in_xd0 = (&uStack_88)[iVar6 * 2];
      dVar9 = 3.02834788845756e-309;
    }
    if (cVar10 == '\0') {
      dVar9 = (double)(ulonglong)(uint)(SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      dVar9 = dVar9 * dVar9;
    }
    if (cVar11 == '\0') {
      *(int *)(&uStack_88 + iVar6 * 2) = SUB84(dVar9,0);
    }
    else {
      (&uStack_88)[iVar6 * 2] = in_xd0;
    }
  }
  (**(code **)(ar4[0x8b5e] + 0x30))(ar4 + 0x8b5e,&fStack_90,ar6_01,pfVar5);
  FUN_8c015ad4(ar4 + 0x8bad,&DAT_8c13e0c4,ar6_01,pfVar5,in_stack_fffffee4);
  if (cVar11 == '\0') {
    ar4[0x8bae] = 0x4475f20c;
    ar4[0x8baf] = 0x43340000;
    ar4[0x8bb0] = 0x44390b33;
  }
  else {
    *(undefined8 *)(ar4 + 0x8bae) = 0x22ebc4475f20c;
    *(undefined8 *)(ar4 + 0x8baf) = 0x22ec043340000;
    uVar2 = 0x44390b33;
    *(undefined8 *)(ar4 + 0x8bb0) = 0x22ec844390b33;
  }
  Vec3_assign(ar4 + 0x8bb2,ar4 + 0x8bae,ar6_01,pfVar5);
  if (cVar11 == '\0') {
    ar4[0x8c03] = 0x428c0000;
  }
  else {
    *(undefined8 *)(ar4 + 0x8c03) = 0xc2780000428c0000;
    uStack_88._4_4_ = 0x94;
    uStack_74 = 0xa4;
    uStack_64 = 0xa4;
    uStack_54 = 0x94;
    uVar2 = 0xc2780000;
  }
  uStack_50 = 0xc2780000;
  uStack_58 = 0x428b0000;
  uStack_5c = 0x429c3333;
  uStack_60 = 0x42816666;
  uStack_68 = 0xc289999a;
  uStack_6c = 0x429c3333;
  uStack_70 = 0x42816666;
  uStack_78 = 0xc289999a;
  uStack_7c = 0x429c3333;
  uStack_80 = 0xc2780000;
  uStack_88._0_4_ = 0x428b0000;
  auStack_8c = (undefined1  [4])0x429c3333;
  fStack_90 = -62.0;
  if (cVar11 == '\0') {
    uStack_4c = 0;
  }
  else {
    uStack_44 = 0x94;
    uVar2 = 0xc2780000;
    uStack_4c = uVar2;
  }
  uStack_40 = 0xc2780000;
  uStack_48 = 0x428b0000;
  if (cVar11 == '\0') {
    uStack_3c = 0;
  }
  else {
    uStack_34 = 0xa4;
    uVar2 = 0x42816666;
    uStack_3c = uVar2;
  }
  uStack_30 = 0x42816666;
  uStack_38 = 0xc289999a;
  if (cVar11 != '\0') {
    uStack_24 = 0xa4;
    uVar2 = 0x42816666;
    uStack_1c = 0xac;
  }
  uStack_20 = 0x42816666;
  uStack_28 = 0xc289999a;
  if (cVar11 == '\0') {
    uStack_2c = 0;
    dVar9 = (double)CONCAT44(0x428b0000,uVar2);
  }
  else {
    uStack_28 = 0;
    dVar9 = 3.14606954795696e-312;
    uStack_14 = 0x94;
    uStack_2c = uVar2;
  }
  uStack_18 = 0x428b0000;
  for (iVar6 = 0; uVar2 = SUB84(dVar9,0), iVar6 < 8; iVar6 = iVar6 + 1) {
    pfVar5 = &fStack_90 + iVar6 * 4;
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*pfVar5);
    }
    else {
      in_xd0 = *(undefined8 *)pfVar5;
      dVar9 = 3.03607195313667e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *pfVar5 = fVar8;
    }
    else {
      *(undefined8 *)pfVar5 = in_xd0;
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(auStack_8c + iVar6 * 0x10));
    }
    else {
      in_xd0 = *(undefined8 *)(auStack_8c + iVar6 * 0x10);
      dVar9 = 3.03607195313667e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(auStack_8c + iVar6 * 0x10) = fVar8;
    }
    else {
      *(undefined8 *)(auStack_8c + iVar6 * 0x10) = in_xd0;
    }
    pfVar5 = &fStack_90 + iVar6 * 4;
    ar6_01 = &uStack_88 + iVar6 * 2;
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(&uStack_88 + iVar6 * 2));
    }
    else {
      in_xd0 = (&uStack_88)[iVar6 * 2];
      dVar9 = 3.03607195313667e-309;
    }
    if (cVar10 == '\0') {
      dVar9 = (double)(ulonglong)(uint)(SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      dVar9 = dVar9 * dVar9;
    }
    if (cVar11 == '\0') {
      *(int *)ar6_01 = SUB84(dVar9,0);
    }
    else {
      *ar6_01 = in_xd0;
    }
  }
  (**(code **)(ar4[0x8bb9] + 0x30))(ar4 + 0x8bb9,&fStack_90,ar6_01,pfVar5);
  FUN_8c015ad4(ar4 + 0x8c08,&DAT_8c13e3c4,ar6_01,pfVar5,in_stack_fffffee4);
  if (cVar11 == '\0') {
    ar4[0x8c09] = 0x440a7a8f;
    ar4[0x8c0a] = 0x43340000;
    ar4[0x8c0b] = 0x44406fa8;
  }
  else {
    *(undefined8 *)(ar4 + 0x8c09) = 0x23028440a7a8f;
    *(undefined8 *)(ar4 + 0x8c0a) = 0x2302c43340000;
    uVar2 = 0x44406fa8;
    *(undefined8 *)(ar4 + 0x8c0b) = 0x2303444406fa8;
  }
  Vec3_assign(ar4 + 0x8c0d,ar4 + 0x8c09,ar6_01,pfVar5);
  if (cVar11 == '\0') {
    ar4[0x8c5e] = 0x42480000;
  }
  else {
    *(undefined8 *)(ar4 + 0x8c5e) = 0xc240000042480000;
    uStack_88._4_4_ = 0x94;
    uStack_74 = 0xa4;
    uStack_64 = 0xa4;
    uStack_54 = 0x94;
    uVar2 = 0xc2400000;
  }
  uStack_50 = 0xc2400000;
  uStack_58 = 0x42286666;
  uStack_5c = 0x42ef0000;
  uStack_60 = 0x42400000;
  uStack_68 = 0xc22ccccd;
  uStack_6c = 0x42ef0000;
  uStack_70 = 0x42400000;
  uStack_78 = 0xc22ccccd;
  uStack_7c = 0x42ef0000;
  uStack_80 = 0xc2400000;
  uStack_88._0_4_ = 0x42286666;
  auStack_8c = (undefined1  [4])0x42ef0000;
  fStack_90 = -48.0;
  if (cVar11 == '\0') {
    uStack_4c = 0;
  }
  else {
    uStack_44 = 0x94;
    uVar2 = 0xc2400000;
    uStack_4c = uVar2;
  }
  uStack_40 = 0xc2400000;
  uStack_48 = 0x42286666;
  if (cVar11 == '\0') {
    uStack_3c = 0;
  }
  else {
    uStack_34 = 0xa4;
    uVar2 = 0x42400000;
    uStack_3c = uVar2;
  }
  uStack_30 = 0x42400000;
  uStack_38 = 0xc22ccccd;
  if (cVar11 == '\0') {
    uStack_2c = 0;
    uStack_1c = uVar2;
  }
  else {
    uStack_24 = 0xa4;
    uStack_1c = 0x42400000;
    uStack_2c = uVar2;
  }
  uStack_20 = 0x42400000;
  uStack_28 = 0xc22ccccd;
  if (cVar11 == '\0') {
    uStack_1c = 0;
  }
  else {
    uStack_14 = 0x94;
  }
  uStack_18 = 0x42286666;
  for (iVar6 = 0; iVar6 < 8; iVar6 = iVar6 + 1) {
    pfVar5 = &fStack_90 + iVar6 * 4;
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*pfVar5);
    }
    else {
      in_xd0 = *(undefined8 *)pfVar5;
      dVar9 = 3.043796017815786e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *pfVar5 = fVar8;
    }
    else {
      *(undefined8 *)pfVar5 = in_xd0;
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(auStack_8c + iVar6 * 0x10));
    }
    else {
      in_xd0 = *(undefined8 *)(auStack_8c + iVar6 * 0x10);
      dVar9 = 3.043796017815786e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(auStack_8c + iVar6 * 0x10) = fVar8;
    }
    else {
      *(undefined8 *)(auStack_8c + iVar6 * 0x10) = in_xd0;
    }
    if (cVar11 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(&uStack_88 + iVar6 * 2));
    }
    else {
      in_xd0 = (&uStack_88)[iVar6 * 2];
      dVar9 = 3.043796017815786e-309;
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar11 == '\0') {
      *(float *)(&uStack_88 + iVar6 * 2) = fVar8;
    }
    else {
      (&uStack_88)[iVar6 * 2] = in_xd0;
    }
  }
  iVar6 = ar4[0x8c14];
  pcVar3 = *(code **)(iVar6 + 0x30);
  (*pcVar3)(ar4 + 0x8c14,&fStack_90,pcVar3,iVar6);
  ar4[0x8c96] = PTR_s_71_OPEN_WALL_NEW_8c13f2f8;
  Vec3_dtor(&uStack_20,0xffffffff,pcVar3,iVar6);
  pcVar4 = Vec3_dtor;
  Vec3_dtor(&uStack_30,0xffffffff,pcVar3,Vec3_dtor);
  uVar2 = 0xffffffff;
  Vec3_dtor(&uStack_40,0xffffffff,0xffffffff,pcVar4);
  Vec3_dtor(&uStack_50,0xffffffff,uVar2,pcVar4);
  uVar2 = 0xffffffff;
  ar4_00 = &uStack_60;
  Vec3_dtor(ar4_00,0xffffffff,ar4_00,0xffffffff);
  Vec3_dtor(&uStack_70,0xffffffff,ar4_00,uVar2);
  Vec3_dtor(&uStack_80,0xffffffff,ar4_00,uVar2);
  Vec3_dtor(&fStack_90,0xffffffff,ar4_00,uVar2);
  return ar4;
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



/* FUN_8c0de07c @ 8c0de07c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0de07c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  undefined4 extraout_fr1;
  undefined4 extraout_fr0;
  char cVar2;
  undefined8 uStack_20;
  undefined1 auStack_1c [20];
  
  cVar2 = '\0';
  s_GRAPHICS_ENV_0e16a0(ar4,ar5,ar6,ar7);
  ar6_00 = ar4 + 0x22eb4;
  s_GRAPHICS_COMMON_0d33f4(ar4 + 0x10ac,ar5,ar6_00,ar7);
  iVar1 = ar4 + 0xa68;
  Vec3_ctor_copy((undefined1 *)((int)register0x0000003c + -0x1c),iVar1,ar6_00,ar7);
  FUN_8c0bf11c(ar4 + 0x13b70,iVar1,ar6_00,ar7,(undefined4)uStack_20);
  if (cVar2 == '\0') {
    uStack_20._0_4_ = extraout_fr0;
  }
  else {
    uStack_20 = CONCAT44(extraout_fr0,extraout_fr1);
  }
  FUN_8c0d4e88(ar4 + 0x10ac,(undefined1 *)((int)register0x0000003c + -0x1c),ar6_00,ar7);
  ar5_00 = 0xffffffff;
  Vec3_dtor((undefined1 *)((int)register0x0000003c + -0x1c),0xffffffff,ar6_00,ar7);
  if ((*(int *)(ar4 + 0x22810) == 1) || (*(int *)(ar4 + 0x22814) == 1)) {
    iVar1 = ar4 + 0x10ac;
    FUN_8c0d4f3c(iVar1,ar5_00,ar6_00,ar7);
  }
  else {
    iVar1 = ar4 + 0x10ac;
    FUN_8c0d4f70(iVar1,ar5_00,ar6_00,ar7);
  }
  FUN_8c0d5e2c(iVar1,ar5_00,ar6_00,ar7);
  uStack_20._0_4_ = thunk_FUN_8c20a1d0(0x8c43786c,ar5_00,ar6_00,ar7);
  return (undefined4)uStack_20;
}



/* FUN_8c0de170 @ 8c0de170 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0de170(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*ar4 + 0x1c))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0de18c @ 8c0de18c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0de18c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_s_GRAPHICS_ENV_0e16a0_8c0de1c8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_s_GRAPHICS_COMMON_0d377a_8c0de1d0)(ar4 + DAT_8c0de1cc,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_s_GRAPHICS_ENV_0d0bd2_8c0de1d8)(ar4 + DAT_8c0de1d4,ar5,ar6,ar7);
  return uVar1;
}



/* Class_12b930_m1_0de1dc @ 8c0de1dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b930_m1_0de1dc(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *ar6_00;
  int iVar3;
  float fVar4;
  double in_dr0;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [12];
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar2 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_20,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_30,iVar2,ar6_00,ar7);
  if (*(int *)(ar4 + 0xacc) == 2) {
    ar7 = auStack_18;
    ar6_00 = auStack_1c;
    FUN_8c0db5a8(ar4 + 0x9e8,auStack_20,ar6_00,ar7);
    iVar2 = ar4 + 0xa98;
    Vec3_assign(auStack_30,iVar2,ar6_00,ar7);
    (**(code **)(*(int *)(*(int *)(ar4 + 0xac8) + 8) + 0x130))
              (*(int *)(ar4 + 0xac8),iVar2,ar6_00,ar7);
    uVar1 = uStack_28;
    if (cVar6 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),(int)uStack_28);
      uVar1 = in_xd0;
    }
    if (cVar5 == '\0') {
      fVar4 = SUB84(in_dr0,0) - (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      fVar4 = SUB84(in_dr0 - in_dr0,0);
    }
    if (cVar6 == '\0') {
      uStack_28 = CONCAT44(uStack_28._4_4_,fVar4);
      uVar1 = uStack_28;
    }
    uStack_28 = uVar1;
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      ar7 = auStack_20;
      ar6_00 = auStack_30;
      iVar2 = ar4 + 0xa68;
      FUN_8c0d7294(ar4 + iVar3 * 0x16c + 0x22d48,iVar2,ar6_00,ar7);
    }
  }
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    FUN_8c0d7100(ar4 + iVar3 * 0x16c + 0x22d48,iVar2,ar6_00,ar7);
  }
  FUN_8c0e389c(ar4,iVar2,ar6_00,ar7);
  FUN_8c0d0178(ar4 + 0x13b24,iVar2,ar6_00,ar7);
  iVar2 = ar5;
  FUN_8c0d9600(ar4 + 0x22704,ar5,ar6_00,ar7);
  get_field_a0_035724(ar5,iVar2,ar6_00,ar7);
  pure_virtual_stub(ar4,ar5,ar6_00,ar7);
  Class_12bb08_m1_0da338(ar4,ar5,ar6,ar7);
  iVar2 = ar4 + 0x10ac;
  FUN_8c0e3994(ar4,iVar2,ar6,ar7);
  FUN_8c0d64a0(ar4 + 0xa68,iVar2,ar6,ar7);
  FUN_8c0dbd80(ar4,iVar2,ar6,ar7);
  FUN_8c0d0714(ar4 + 0x13b24,iVar2,ar6,ar7);
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
  return 1;
}



/* Class_12b930_m2_0de3d4 @ 8c0de3d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b930_m2_0de3d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    (*(code *)PTR_FUN_8c0de484)(ar4 + iVar1 * DAT_8c0de47c + DAT_8c0de480,ar5_00,ar6_00,ar7);
  }
  (*(code *)PTR_FUN_8c0de48c)(ar4 + DAT_8c0de488,ar5_00,ar6_00,ar7);
  iVar1 = ar4 + DAT_8c0de490;
  (*(code *)PTR_FUN_8c0de498)(ar4 + DAT_8c0de494,iVar1,ar6_00,ar7);
  (*(code *)PTR_get_field_a0_035724_8c0de49c)(ar5,iVar1,ar6_00,ar7);
  (*(code *)PTR_pure_virtual_stub_8c0de4a4)(ar4,ar5,ar6_00,ar7);
  (*(code *)PTR_Class_12bb08_m2_0da5a8_8c0de4a8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0de4ac)(ar4,ar5,ar6,ar7);
  return 1;
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



/* FUN_8c0de6b0 @ 8c0de6b0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0de6b2) */
/* WARNING: Removing unreachable block (ram,0x8c0de6ba) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0de6b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  float in_fr4;
  
  if (in_fr4 < 0.0) {
    in_fr4 = 0.0;
  }
  *(float *)(ar4 + 0xc) = in_fr4;
  return ain0;
}



/* FUN_8c0de6c0 @ 8c0de6c0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0de6c2) */
/* WARNING: Removing unreachable block (ram,0x8c0de6ca) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0de6c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  float in_fr4;
  
  if (in_fr4 < 0.0) {
    in_fr4 = 0.0;
  }
  *(float *)(ar4 + 0xc) = in_fr4;
  return ain0;
}



/* FUN_8c0de6d0 @ 8c0de6d0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0de702) */
/* WARNING: Removing unreachable block (ram,0x8c0de6ea) */
/* WARNING: Removing unreachable block (ram,0x8c0de6ec) */
/* WARNING: Removing unreachable block (ram,0x8c0de704) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0de6d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined8 in_dr0;
  undefined8 uVar7;
  float fVar8;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffff98;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  
  cVar10 = '\0';
  cVar9 = '\0';
  if (DAT_8c437e18 == '\0') {
    in_dr0 = CONCAT44(0x438d0000,(int)in_dr0);
    _DAT_8c437e10 = CONCAT44(0x438d0000,_DAT_8c437e10);
    DAT_8c437e18 = '\x01';
  }
  if (DAT_8c437e20 == '\0') {
    in_dr0 = CONCAT44(0x43cf8000,(int)in_dr0);
    _DAT_8c437e1c = 0x43cf8000;
    DAT_8c437e20 = '\x01';
  }
  puVar5 = &uStack_20;
  FUN_8c0d99b8(puVar5,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x1024) != 0) {
    FUN_8c0d2028(puVar5,ar5,ar6,ar7);
    FUN_8c016340(ar4 + 0x1028,ar5,ar6,ar7);
  }
  if (*(int *)(ar4 + 0x1024) == 2) {
    if (*(int *)(ar4 + 0x1020) == 0) {
      FUN_8c0bf0e8(ar4 + 0x13b24,ar5,ar6,ar7,in_stack_ffffff98);
      fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
      if (cVar10 == '\0') {
        fVar6 = fStack_38;
      }
      fStack_38 = fVar6;
      FUN_8c0d1858(&DAT_8c13f3b0,ar5,ar6,ar7);
    }
    else if (*(int *)(ar4 + 0x1020) == 1) {
      FUN_8c0bf11c(ar4 + 0x13b70,ar5,ar6,ar7,in_stack_ffffff98);
      FUN_8c0d1858(&DAT_8c13f400,ar5,ar6,ar7);
    }
  }
  uVar2 = (undefined4)in_dr0;
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  iVar3 = ar4 + 0xa68;
  Vec3_ctor_copy(auStack_30,iVar3,ar6,ar7);
  FUN_8c0bf11c(ar4 + 0x13b70,iVar3,ar6,ar7,in_stack_ffffff98);
  FUN_8c0d4e88(ar4 + 0x10ac,auStack_30,ar6,ar7);
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  iVar4 = ar4 + 0x7c;
  iVar3 = ar4 + 0x78;
  FUN_8c0e3ebc(ar4,iVar3,iVar4,ar7);
  if (cVar10 == '\0') {
    uStack_20 = *(undefined4 *)(ar4 + 0x78);
    uStack_1c = *(undefined4 *)(ar4 + 0x7c);
    uVar7 = CONCAT44(uStack_1c,uVar2);
  }
  else {
    uStack_20 = (undefined4)*(undefined8 *)(ar4 + 0x78);
    uVar7 = *(undefined8 *)(ar4 + 0x7c);
    uStack_1c = (undefined4)uVar7;
    iStack_18 = (int)((ulonglong)uVar7 >> 0x20);
  }
  iStack_14 = ar4 + 0xa68;
  FUN_8c0bf11c(ar4 + 0x13b70,iVar3,iVar4,ar7,in_stack_ffffff98);
  iStack_18 = (int)uVar7;
  iVar3 = (int)((ulonglong)uVar7 >> 0x20);
  if (cVar10 == '\0') {
    iStack_18 = iVar3;
    iVar3 = iStack_14;
  }
  iStack_14 = iVar3;
  puVar5 = &uStack_20;
  FUN_8c0d3f7c(ar4 + 0x10ac,puVar5,iVar4,ar7);
  FUN_8c0e3f24(ar4,puVar5,iVar4,ar7);
  puVar5 = &uStack_20;
  iVar3 = ar4 + 0x22d48;
  FUN_8c0d4124(ar4 + 0x10ac,iVar3,puVar5,ar7);
  if (cVar10 == '\0') {
    _DAT_8c437e10 = CONCAT44(_DAT_8c437e14,(int)((ulonglong)uVar7 >> 0x20));
    uVar7 = _DAT_8c437e10;
  }
  _DAT_8c437e10 = uVar7;
  FUN_8c01538c(ar4 + 0x22d40,iVar3,puVar5,ar7);
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    FUN_8c0d43cc(&fStack_38,iVar3,puVar5,ar7);
    if (cVar10 == '\0') {
      fVar8 = -150.0;
      fVar6 = fStack_38;
    }
    else {
      fVar6 = -150.0;
      fVar8 = 800.0;
    }
    if (cVar9 != '\0' || fVar8 <= fVar6) {
      if (cVar10 == '\0') {
        fVar8 = 800.0;
        fVar6 = fStack_38;
      }
      else {
        fVar6 = 800.0;
        fVar8 = -100.0;
      }
      if (cVar9 != '\0' || fVar6 <= fVar8) {
        if (cVar10 == '\0') {
          fVar8 = -100.0;
          fVar6 = fStack_34;
        }
        else {
          fVar6 = -100.0;
          fVar8 = 600.0;
        }
        if (cVar9 != '\0' || fVar8 <= fVar6) {
          if (cVar10 == '\0') {
            fVar8 = 600.0;
            fVar6 = fStack_34;
          }
          else {
            fVar6 = 600.0;
            fVar8 = 1.99915e-40;
          }
          if (cVar9 != '\0' || fVar6 <= fVar8) {
            FUN_8c0d7354(ar4 + iVar4 * 0x16c + 0x22d48,iVar3,puVar5,ar7);
          }
        }
      }
    }
  }
  FUN_8c0e14fc(ar4,iVar3,puVar5,ar7);
  FUN_8c0d43cc(&fStack_38,iVar3,puVar5,ar7);
  if (cVar10 == '\0') {
    fVar8 = -150.0;
    fVar6 = fStack_38;
  }
  else {
    fVar6 = -150.0;
    fVar8 = 800.0;
  }
  if (cVar9 != '\0' || fVar8 <= fVar6) {
    if (cVar10 == '\0') {
      fVar8 = 800.0;
      fVar6 = fStack_38;
    }
    else {
      fVar6 = 800.0;
      fVar8 = -100.0;
    }
    if (cVar9 != '\0' || fVar6 <= fVar8) {
      if (cVar10 == '\0') {
        fVar8 = -100.0;
        fVar6 = fStack_34;
      }
      else {
        fVar6 = -100.0;
        fVar8 = 600.0;
      }
      if (cVar9 != '\0' || fVar8 <= fVar6) {
        if (cVar10 == '\0') {
          fVar6 = 600.0;
        }
        else {
          fStack_34 = 600.0;
          fVar6 = 1.99915e-40;
        }
        if (cVar9 != '\0' || fStack_34 <= fVar6) {
          FUN_8c0d0564(ar4 + 0x13b24,iVar3,puVar5,ar7);
        }
      }
    }
  }
  FUN_8c0d43cc(&fStack_38,iVar3,puVar5,ar7);
  if (cVar10 == '\0') {
    fVar8 = 650.0;
    fVar6 = fStack_38;
  }
  else {
    fVar6 = 650.0;
    fVar8 = 1.9765e-40;
  }
  if (cVar9 != '\0' || fVar6 <= fVar8) {
    iVar3 = ar4 + 0x226f8;
    FUN_8c0e4198(ar4,iVar3,puVar5,ar7);
  }
  FUN_8c0d9720(ar4 + 0x22704,iVar3,puVar5,ar7);
  FUN_8c0d092c(ar4 + 0x13b70,iVar3,puVar5,ar7);
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar1 = FUN_8c0f6ab0(ar4 + iVar4 * 0x68 + 0xc0c,iVar3,puVar5,ar7);
    if (iVar1 == 1) {
      puVar5 = (undefined4 *)(ar4 + 4);
      iVar3 = ar4 + 0xc;
      FUN_8c0f7118(ar4 + iVar4 * 0x68 + 0xc0c,iVar3,puVar5,ar7);
    }
  }
  FUN_8c0da754(ar4,iVar3,puVar5,ar7);
  uVar2 = free_if_nonnull_wrap_0deb30(&uStack_20,0xffffffff,puVar5,ar7);
  return uVar2;
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



/* FUN_8c0deb60 @ 8c0deb60 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0deb60(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined8 in_dr0;
  undefined8 uVar7;
  float fVar8;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffff98;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  
  cVar10 = '\0';
  cVar9 = '\0';
  puVar5 = &uStack_20;
  FUN_8c0d99b8(puVar5,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x1024) != 0) {
    FUN_8c0d2028(puVar5,ar5,ar6,ar7);
    FUN_8c016340(ar4 + 0x1028,ar5,ar6,ar7);
  }
  if (*(int *)(ar4 + 0x1024) == 2) {
    if (*(int *)(ar4 + 0x1020) == 0) {
      FUN_8c0bf0e8(ar4 + 0x13b24,ar5,ar6,ar7,in_stack_ffffff98);
      fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
      if (cVar10 == '\0') {
        fVar6 = fStack_38;
      }
      fStack_38 = fVar6;
      FUN_8c0d1858(&DAT_8c13f3b0,ar5,ar6,ar7);
    }
    else if (*(int *)(ar4 + 0x1020) == 1) {
      FUN_8c0bf11c(ar4 + 0x13b70,ar5,ar6,ar7,in_stack_ffffff98);
      FUN_8c0d1858(&DAT_8c13f400,ar5,ar6,ar7);
    }
  }
  uVar2 = (undefined4)in_dr0;
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  iVar3 = ar4 + 0xa68;
  Vec3_ctor_copy(auStack_30,iVar3,ar6,ar7);
  FUN_8c0bf11c(ar4 + 0x13b70,iVar3,ar6,ar7,in_stack_ffffff98);
  FUN_8c0d4e88(ar4 + 0x10ac,auStack_30,ar6,ar7);
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  iVar4 = ar4 + 0x7c;
  iVar3 = ar4 + 0x78;
  FUN_8c0e3ebc(ar4,iVar3,iVar4,ar7);
  if (cVar10 == '\0') {
    uStack_20 = *(undefined4 *)(ar4 + 0x78);
    uStack_1c = *(undefined4 *)(ar4 + 0x7c);
    uVar7 = CONCAT44(uStack_1c,uVar2);
  }
  else {
    uStack_20 = (undefined4)*(undefined8 *)(ar4 + 0x78);
    uVar7 = *(undefined8 *)(ar4 + 0x7c);
    uStack_1c = (undefined4)uVar7;
    iStack_18 = (int)((ulonglong)uVar7 >> 0x20);
  }
  iStack_14 = ar4 + 0xa68;
  FUN_8c0bf11c(ar4 + 0x13b70,iVar3,iVar4,ar7,in_stack_ffffff98);
  iStack_18 = (int)uVar7;
  iVar3 = (int)((ulonglong)uVar7 >> 0x20);
  if (cVar10 == '\0') {
    iStack_18 = iVar3;
    iVar3 = iStack_14;
  }
  iStack_14 = iVar3;
  puVar5 = &uStack_20;
  FUN_8c0d3f7c(ar4 + 0x10ac,puVar5,iVar4,ar7);
  FUN_8c0e3f24(ar4,puVar5,iVar4,ar7);
  puVar5 = &uStack_20;
  iVar3 = ar4 + 0x22d48;
  FUN_8c0d4428(ar4 + 0x10ac,iVar3,puVar5,ar7);
  if (cVar10 == '\0') {
    _DAT_8c437f34 = CONCAT44(DAT_8c437f34_4,(int)((ulonglong)uVar7 >> 0x20));
    uVar7 = _DAT_8c437f34;
  }
  _DAT_8c437f34 = uVar7;
  FUN_8c0e157c(ar4,iVar3,puVar5,ar7);
  FUN_8c01538c(ar4 + 0x22d40,iVar3,puVar5,ar7);
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    FUN_8c0d43cc(&fStack_38,iVar3,puVar5,ar7);
    if (cVar10 == '\0') {
      fVar8 = -150.0;
      fVar6 = fStack_38;
    }
    else {
      fVar6 = -150.0;
      fVar8 = 800.0;
    }
    if (cVar9 != '\0' || fVar8 <= fVar6) {
      if (cVar10 == '\0') {
        fVar8 = 800.0;
        fVar6 = fStack_38;
      }
      else {
        fVar6 = 800.0;
        fVar8 = -100.0;
      }
      if (cVar9 != '\0' || fVar6 <= fVar8) {
        if (cVar10 == '\0') {
          fVar8 = -100.0;
          fVar6 = fStack_34;
        }
        else {
          fVar6 = -100.0;
          fVar8 = 600.0;
        }
        if (cVar9 != '\0' || fVar8 <= fVar6) {
          if (cVar10 == '\0') {
            fVar8 = 600.0;
            fVar6 = fStack_34;
          }
          else {
            fVar6 = 600.0;
            fVar8 = 1.99915e-40;
          }
          if (cVar9 != '\0' || fVar6 <= fVar8) {
            FUN_8c0d7410(ar4 + iVar4 * 0x16c + 0x22d48,iVar3,puVar5,ar7);
          }
        }
      }
    }
  }
  FUN_8c0d43cc(&fStack_38,iVar3,puVar5,ar7);
  if (cVar10 == '\0') {
    fVar8 = -150.0;
    fVar6 = fStack_38;
  }
  else {
    fVar6 = -150.0;
    fVar8 = 800.0;
  }
  if (cVar9 != '\0' || fVar8 <= fVar6) {
    if (cVar10 == '\0') {
      fVar8 = 800.0;
      fVar6 = fStack_38;
    }
    else {
      fVar6 = 800.0;
      fVar8 = -100.0;
    }
    if (cVar9 != '\0' || fVar6 <= fVar8) {
      if (cVar10 == '\0') {
        fVar8 = -100.0;
        fVar6 = fStack_34;
      }
      else {
        fVar6 = -100.0;
        fVar8 = 600.0;
      }
      if (cVar9 != '\0' || fVar8 <= fVar6) {
        if (cVar10 == '\0') {
          fVar6 = 600.0;
        }
        else {
          fStack_34 = 600.0;
          fVar6 = 1.99915e-40;
        }
        if (cVar9 != '\0' || fStack_34 <= fVar6) {
          FUN_8c0d05d0(ar4 + 0x13b24,iVar3,puVar5,ar7);
        }
      }
    }
  }
  FUN_8c0d43cc(&fStack_38,iVar3,puVar5,ar7);
  if (cVar10 == '\0') {
    fVar8 = 650.0;
    fVar6 = fStack_38;
  }
  else {
    fVar6 = 650.0;
    fVar8 = 1.9765e-40;
  }
  if (cVar9 != '\0' || fVar6 <= fVar8) {
    iVar3 = ar4 + 0x226f8;
    FUN_8c0e4198(ar4,iVar3,puVar5,ar7);
  }
  FUN_8c0d9720(ar4 + 0x22704,iVar3,puVar5,ar7);
  FUN_8c0d0990(ar4 + 0x13b70,iVar3,puVar5,ar7);
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar1 = FUN_8c0f6ab0(ar4 + iVar4 * 0x68 + 0xc0c,iVar3,puVar5,ar7);
    if (iVar1 == 1) {
      puVar5 = (undefined4 *)(ar4 + 4);
      iVar3 = ar4 + 0xc;
      FUN_8c0f7118(ar4 + iVar4 * 0x68 + 0xc0c,iVar3,puVar5,ar7);
    }
  }
  FUN_8c0da754(ar4,iVar3,puVar5,ar7);
  uVar2 = free_if_nonnull_wrap_0deb30(&uStack_20,0xffffffff,puVar5,ar7);
  return uVar2;
}



/* FUN_8c0def78 @ 8c0def78 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0def78(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 in_dr0;
  code *pcVar6;
  char cVar7;
  undefined4 in_stack_ffffffb8;
  undefined4 auStack_2c [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  cVar7 = '\0';
  puVar4 = &uStack_1c;
  FUN_8c0d99b8(puVar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x1024) != 0) {
    FUN_8c0d2028(puVar4,ar5,ar6,ar7);
    FUN_8c016340(ar4 + 0x1028,ar5,ar6,ar7);
  }
  if (*(int *)(ar4 + 0x1024) == 2) {
    if (*(int *)(ar4 + 0x1020) == 0) {
      FUN_8c0bf0e8(ar4 + 0x13b24,ar5,ar6,ar7,in_stack_ffffffb8);
      uVar2 = (int)((ulonglong)in_dr0 >> 0x20);
      if (cVar7 == '\0') {
        uVar2 = auStack_2c[0];
      }
      auStack_2c[0] = uVar2;
      FUN_8c0d1858(&DAT_8c13f3b0,ar5,ar6,ar7);
    }
    else if (*(int *)(ar4 + 0x1020) == 1) {
      FUN_8c0bf11c(ar4 + 0x13b70,ar5,ar6,ar7,in_stack_ffffffb8);
      FUN_8c0d1858(&DAT_8c13f400,ar5,ar6,ar7);
    }
  }
  uVar2 = (undefined4)in_dr0;
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  iVar3 = ar4 + 0xa68;
  Vec3_ctor_copy(auStack_2c,iVar3,ar6,ar7);
  FUN_8c0bf11c(ar4 + 0x13b70,iVar3,ar6,ar7,in_stack_ffffffb8);
  FUN_8c0d4e88(ar4 + 0x10ac,auStack_2c,ar6,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
  iVar3 = ar4 + 0x7c;
  FUN_8c0e3ebc(ar4,ar4 + 0x78,iVar3,ar7);
  if (cVar7 == '\0') {
    uStack_1c = *(undefined4 *)(ar4 + 0x78);
    uStack_18 = *(undefined4 *)(ar4 + 0x7c);
    pcVar6 = (code *)0x42c80000;
  }
  else {
    uStack_1c = (undefined4)*(undefined8 *)(ar4 + 0x78);
    uStack_18 = (undefined4)*(undefined8 *)(ar4 + 0x7c);
    uVar2 = 0x42c80000;
    pcVar6 = FUN_8c0d3f7c;
  }
  uStack_14 = 0x42c80000;
  iStack_10 = ar4 + 0xa68;
  puVar4 = &uStack_1c;
  FUN_8c0d3f7c(ar4 + 0x10ac,puVar4,iVar3,ar7);
  FUN_8c0e3f24(ar4,puVar4,iVar3,ar7);
  puVar4 = &uStack_1c;
  iVar3 = ar4 + 0x22d48;
  FUN_8c0d46cc(ar4 + 0x10ac,iVar3,puVar4,ar7);
  if (cVar7 == '\0') {
    _DAT_8c438048 = CONCAT44(DAT_8c438048_4,pcVar6);
  }
  else {
    _DAT_8c438048 = CONCAT44(pcVar6,uVar2);
  }
  FUN_8c0e157c(ar4,iVar3,puVar4,ar7);
  FUN_8c01538c(ar4 + 0x22d40,iVar3,puVar4,ar7);
  FUN_8c0d7410(ar4 + 0x22d48,iVar3,puVar4,ar7);
  FUN_8c0d7410(ar4 + 0x22eb4,iVar3,puVar4,ar7);
  FUN_8c0d7410(ar4 + 0x23020,iVar3,puVar4,ar7);
  FUN_8c0d0990(ar4 + 0x13b70,iVar3,puVar4,ar7);
  FUN_8c0d05d0(ar4 + 0x13b24,iVar3,puVar4,ar7);
  iVar3 = ar4 + 0x226f8;
  FUN_8c0e4198(ar4,iVar3,puVar4,ar7);
  FUN_8c0d9720(ar4 + 0x22704,iVar3,puVar4,ar7);
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    iVar1 = FUN_8c0f6ab0(ar4 + iVar5 * 0x68 + 0xc0c,iVar3,puVar4,ar7);
    if (iVar1 == 1) {
      puVar4 = (undefined4 *)(ar4 + 4);
      iVar3 = ar4 + 0xc;
      FUN_8c0f7118(ar4 + iVar5 * 0x68 + 0xc0c,iVar3,puVar4,ar7);
    }
  }
  FUN_8c0da754(ar4,iVar3,puVar4,ar7);
  uVar2 = free_if_nonnull_wrap_0deb30(&uStack_1c,0xffffffff,puVar4,ar7);
  return uVar2;
}



/* FUN_8c0df250 @ 8c0df250 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0df250(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 in_fr1;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffffa0;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  cVar11 = '\0';
  cVar10 = '\0';
  FUN_8c0d99b8(&uStack_20,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_30,ar5,ar6,ar7);
  if (cVar11 == '\0') {
    uStack_30 = *(undefined4 *)(ar4 + 0x22d4c);
    uStack_2c = *(undefined4 *)(ar4 + 0x22d50);
    uStack_28 = *(undefined4 *)(ar4 + 0x22d54);
    uVar7 = CONCAT44(uStack_28,in_fr1);
  }
  else {
    uStack_30 = (undefined4)*(undefined8 *)(ar4 + 0x22d4c);
    uStack_2c = (undefined4)*(undefined8 *)(ar4 + 0x22d50);
    uVar7 = *(undefined8 *)(ar4 + 0x22d54);
    uStack_28 = (undefined4)uVar7;
    uStack_24 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  iVar4 = ar4;
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x1024) != 0) {
    FUN_8c0d2028(iVar4,ar5,ar6,ar7);
    FUN_8c016340(ar4 + 0x1028,ar5,ar6,ar7);
  }
  if (*(int *)(ar4 + 0x1024) == 2) {
    if (*(int *)(ar4 + 0x1020) == 0) {
      FUN_8c0bf0e8(ar4 + 0x13b24,ar5,ar6,ar7,in_stack_ffffffa0);
      fVar6 = (float)((ulonglong)uVar7 >> 0x20);
      if (cVar11 == '\0') {
        fVar6 = fStack_38;
      }
      fStack_38 = fVar6;
      FUN_8c0d1858(&DAT_8c13f3d8,ar5,ar6,ar7);
    }
    else if (*(int *)(ar4 + 0x1020) == 4) {
      FUN_8c0bf0ac(ar4 + 0x13b8c,ar5,ar6,ar7);
      FUN_8c0d1858(&DAT_8c13f428,ar5,ar6,ar7);
    }
  }
  uVar2 = (undefined4)uVar7;
  iVar4 = ar4 + 0x7c;
  FUN_8c0e3ebc(ar4,ar4 + 0x78,iVar4,ar7);
  if (cVar11 == '\0') {
    uStack_20 = *(undefined4 *)(ar4 + 0x78);
    uStack_1c = *(undefined4 *)(ar4 + 0x7c);
    uVar8 = 0x42c80000;
  }
  else {
    uStack_20 = (undefined4)*(undefined8 *)(ar4 + 0x78);
    uStack_1c = (undefined4)*(undefined8 *)(ar4 + 0x7c);
    uVar2 = 0x42c80000;
    uVar8 = 0xa68;
  }
  uStack_18 = 0x42c80000;
  iStack_14 = ar4 + 0xa68;
  puVar3 = &uStack_20;
  FUN_8c0d400c(ar4 + 0x10ac,puVar3,iVar4,ar7);
  FUN_8c0e3f24(ar4,puVar3,iVar4,ar7);
  puVar3 = &uStack_20;
  FUN_8c0d4900(ar4 + 0x10ac,puVar3,iVar4,ar7);
  if (cVar11 == '\0') {
    _DAT_8c43814c = CONCAT44(DAT_8c43814c_4,uVar8);
  }
  else {
    _DAT_8c43814c = CONCAT44(uVar8,uVar2);
  }
  FUN_8c0e15fc(ar4,puVar3,iVar4,ar7);
  FUN_8c01538c(ar4 + 0x22d40,puVar3,iVar4,ar7);
  FUN_8c0d7410(ar4 + 0x22d48,puVar3,iVar4,ar7);
  for (iVar5 = 1; iVar5 < 3; iVar5 = iVar5 + 1) {
    FUN_8c0d43cc(&fStack_38,puVar3,iVar4,ar7);
    if (cVar11 == '\0') {
      fVar9 = -150.0;
      fVar6 = fStack_38;
    }
    else {
      fVar6 = -150.0;
      fVar9 = 800.0;
    }
    if (cVar10 != '\0' || fVar9 <= fVar6) {
      if (cVar11 == '\0') {
        fVar9 = 800.0;
        fVar6 = fStack_38;
      }
      else {
        fVar6 = 800.0;
        fVar9 = -100.0;
      }
      if (cVar10 != '\0' || fVar6 <= fVar9) {
        if (cVar11 == '\0') {
          fVar9 = -100.0;
          fVar6 = fStack_34;
        }
        else {
          fVar6 = -100.0;
          fVar9 = 600.0;
        }
        if (cVar10 != '\0' || fVar9 <= fVar6) {
          if (cVar11 == '\0') {
            fVar9 = 600.0;
            fVar6 = fStack_34;
          }
          else {
            fVar6 = 600.0;
            fVar9 = 1.99915e-40;
          }
          if (cVar10 != '\0' || fVar6 <= fVar9) {
            FUN_8c0d7410(ar4 + iVar5 * 0x16c + 0x22d48,puVar3,iVar4,ar7);
          }
        }
      }
    }
  }
  FUN_8c0d43cc(&fStack_38,puVar3,iVar4,ar7);
  if (cVar11 == '\0') {
    fVar9 = -150.0;
    fVar6 = fStack_38;
  }
  else {
    fVar6 = -150.0;
    fVar9 = 800.0;
  }
  if (cVar10 != '\0' || fVar9 <= fVar6) {
    if (cVar11 == '\0') {
      fVar9 = 800.0;
      fVar6 = fStack_38;
    }
    else {
      fVar6 = 800.0;
      fVar9 = -100.0;
    }
    if (cVar10 != '\0' || fVar6 <= fVar9) {
      if (cVar11 == '\0') {
        fVar9 = -100.0;
        fVar6 = fStack_34;
      }
      else {
        fVar6 = -100.0;
        fVar9 = 600.0;
      }
      if (cVar10 != '\0' || fVar9 <= fVar6) {
        if (cVar11 == '\0') {
          fVar6 = 600.0;
        }
        else {
          fStack_34 = 600.0;
          fVar6 = 1.99915e-40;
        }
        if (cVar10 != '\0' || fStack_34 <= fVar6) {
          FUN_8c0d05d0(ar4 + 0x13b24,puVar3,iVar4,ar7);
        }
      }
    }
  }
  FUN_8c0d43cc(&fStack_38,puVar3,iVar4,ar7);
  if (cVar11 == '\0') {
    fVar9 = 650.0;
    fVar6 = fStack_38;
  }
  else {
    fVar6 = 650.0;
    fVar9 = 1.9765e-40;
  }
  if (cVar10 != '\0' || fVar6 <= fVar9) {
    puVar3 = (undefined4 *)(ar4 + 0x226f8);
    FUN_8c0e4198(ar4,puVar3,iVar4,ar7);
  }
  FUN_8c0d9720(ar4 + 0x22704,puVar3,iVar4,ar7);
  FUN_8c0d1168(ar4 + 0x13b8c,puVar3,iVar4,ar7);
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    iVar1 = FUN_8c0f6ab0(ar4 + iVar5 * 0x68 + 0xc0c,puVar3,iVar4,ar7);
    if (iVar1 == 1) {
      iVar4 = ar4 + 4;
      puVar3 = (undefined4 *)(ar4 + 0xc);
      FUN_8c0f7118(ar4 + iVar5 * 0x68 + 0xc0c,puVar3,iVar4,ar7);
    }
  }
  FUN_8c0da754(ar4,puVar3,iVar4,ar7);
  Vec3_dtor(&uStack_30,0xffffffff,iVar4,ar7);
  uVar2 = free_if_nonnull_wrap_0deb30(&uStack_20,0xffffffff,iVar4,ar7);
  return uVar2;
}



/* FUN_8c0df668 @ 8c0df668 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0df668(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int ar5_00;
  int iVar4;
  int iVar5;
  undefined4 in_fr1;
  undefined8 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  cVar8 = '\0';
  FUN_8c0d99b8(&uStack_1c,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_2c,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    uStack_2c = *(undefined4 *)(ar4 + 0x22d4c);
    uStack_28 = *(undefined4 *)(ar4 + 0x22d50);
    uStack_24 = *(undefined4 *)(ar4 + 0x22d54);
    uVar6 = CONCAT44(uStack_24,in_fr1);
  }
  else {
    uStack_2c = (undefined4)*(undefined8 *)(ar4 + 0x22d4c);
    uStack_28 = (undefined4)*(undefined8 *)(ar4 + 0x22d50);
    uVar6 = *(undefined8 *)(ar4 + 0x22d54);
    uStack_24 = (undefined4)uVar6;
    uStack_20 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  uVar2 = (undefined4)uVar6;
  iVar4 = ar4;
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x1024) != 0) {
    FUN_8c0d2028(iVar4,ar5,ar6,ar7);
    FUN_8c016340(ar4 + 0x1028,ar5,ar6,ar7);
  }
  iVar4 = ar4 + 0x7c;
  FUN_8c0e3ebc(ar4,ar4 + 0x78,iVar4,ar7);
  if (cVar8 == '\0') {
    uStack_1c = *(undefined4 *)(ar4 + 0x78);
    uStack_18 = *(undefined4 *)(ar4 + 0x7c);
    uVar7 = 0x42c80000;
  }
  else {
    uStack_1c = (undefined4)*(undefined8 *)(ar4 + 0x78);
    uStack_18 = (undefined4)*(undefined8 *)(ar4 + 0x7c);
    uVar2 = 0x42c80000;
    uVar7 = 0xa68;
  }
  uStack_14 = 0x42c80000;
  iStack_10 = ar4 + 0xa68;
  puVar3 = &uStack_1c;
  FUN_8c0d400c(ar4 + 0x10ac,puVar3,iVar4,ar7);
  FUN_8c0e3f24(ar4,puVar3,iVar4,ar7);
  puVar3 = &uStack_1c;
  FUN_8c0d4900(ar4 + 0x10ac,puVar3,iVar4,ar7);
  if (cVar8 == '\0') {
    _DAT_8c438250 = CONCAT44(_DAT_8c438254,uVar7);
  }
  else {
    _DAT_8c438250 = CONCAT44(uVar7,uVar2);
    uStack_2c = uVar7;
  }
  FUN_8c0e15fc(ar4,puVar3,iVar4,ar7);
  FUN_8c01538c(ar4 + 0x22d40,puVar3,iVar4,ar7);
  FUN_8c0d7410(ar4 + 0x22d48,puVar3,iVar4,ar7);
  FUN_8c0d7410(ar4 + 0x22eb4,puVar3,iVar4,ar7);
  FUN_8c0d7410(ar4 + 0x23020,puVar3,iVar4,ar7);
  FUN_8c0d1168(ar4 + 0x13b8c,puVar3,iVar4,ar7);
  FUN_8c0d05d0(ar4 + 0x13b24,puVar3,iVar4,ar7);
  ar5_00 = ar4 + 0x226f8;
  FUN_8c0e4198(ar4,ar5_00,iVar4,ar7);
  FUN_8c0d9720(ar4 + 0x22704,ar5_00,iVar4,ar7);
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    iVar1 = FUN_8c0f6ab0(ar4 + iVar5 * 0x68 + 0xc0c,ar5_00,iVar4,ar7);
    if (iVar1 == 1) {
      iVar4 = ar4 + 4;
      ar5_00 = ar4 + 0xc;
      FUN_8c0f7118(ar4 + iVar5 * 0x68 + 0xc0c,ar5_00,iVar4,ar7);
    }
  }
  FUN_8c0da754(ar4,ar5_00,iVar4,ar7);
  Vec3_dtor(&uStack_2c,0xffffffff,iVar4,ar7);
  uVar2 = free_if_nonnull_wrap_0deb30(&uStack_1c,0xffffffff,iVar4,ar7);
  return uVar2;
}



/* FUN_8c0df8d0 @ 8c0df8d0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0df8fe) */
/* WARNING: Removing unreachable block (ram,0x8c0df8fa) */
/* WARNING: Removing unreachable block (ram,0x8c0df8d0) */
/* WARNING: Removing unreachable block (ram,0x8c0df8fc) */
/* WARNING: Removing unreachable block (ram,0x8c0df900) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0df8d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (*(int *)(ar4 + 0x9d4) == 0) {
    uVar1 = 0;
  }
  else {
    if ((*(int *)(ar4 + 0x22810) == 0) && (*(int *)(ar4 + 0x22814) == 0)) {
      uVar1 = 1;
      FUN_8c22195c(1,ar5,ar6,ar7,in_PR);
      FUN_8c219070(uVar1,ar5,ar6,ar7);
      FUN_8c0f4b44(*(undefined4 *)(ar4 + 0x9d4),ar5,ar6,ar7);
      (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x34))(*(int *)(ar4 + 0x9d4),ar5,ar6,ar7);
      uVar1 = 1;
      FUN_8c22195c(1,ar5,ar6,ar7,in_PR);
      FUN_8c219070(uVar1,ar5,ar6,ar7);
    }
    else {
      FUN_8c0da88c(ar4,ar5,ar6,ar7);
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* FUN_8c0df998 @ 8c0df998 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0df998(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0df9e4)(ar4 + DAT_8c0df9e0,ar5,ar6,ar7);
  if (iVar1 != 0x19) {
    ar5 = (*(code *)PTR_s_CEnv_AddItem_0da93a_8c0df9e8)(ar4,ar5,ar6,ar7);
  }
  return ar5;
}



/* FUN_8c0df9ec @ 8c0df9ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0df9ec(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  uVar1 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0dfa6c)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0dfa70)(ar5,uVar1,ar6,ar7,auStack_28);
  (*(code *)PTR_Vec3_assign_8c0dfa74)(auStack_18,auStack_28,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0dfa78)(auStack_28,0xffffffff,ar6,ar7);
  (*(code *)PTR_FUN_8c0dfa80)(ar5,uVar1,ar6,ar7);
  uVar1 = (**(code **)(*ar4 + 0x4c))(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0dfa78)(auStack_18,0xffffffff,ar6,ar7);
  return uVar1;
}



/* FUN_8c0dfa84 @ 8c0dfa84 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0dfa86) */
/* WARNING: Removing unreachable block (ram,0x8c0dfa84) */
/* WARNING: Removing unreachable block (ram,0x8c0dfad8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dfa84(int ar4,undefined4 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  int iVar2;
  int iVar3;
  float fVar5;
  double dVar4;
  double in_dr14;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [132];
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  FUN_8c0191e4(auStack_a0,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_b0,ar5_00,ar6,ar7);
  if (cVar8 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),0x7f7fffff);
  }
  iVar3 = 0;
  iVar2 = 0;
  if (*(int *)(ar4 + 0x9d8) == 0) {
    iVar2 = FUN_8c0dac50(ar4,ar5,ar6,ar7);
  }
  if (iVar2 == 0) {
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c1264b8,*ar5);
    }
    else {
      dVar4 = (double)CONCAT44(_UNK_8c1264bc,DAT_8c1264b8);
    }
    if (SUB84(dVar4,0) == (float)((ulonglong)dVar4 >> 0x20)) {
      *(undefined4 *)(ar4 + 0x9d8) = 0;
    }
    else {
      for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
        ar7 = auStack_ac;
        ar6 = auStack_b0;
        FUN_8c019508(auStack_a0,ar4 + iVar2 * 0x16c + 0x22d4c,ar6,ar7);
        uVar1 = SUB84(in_dr14,0);
        FUN_8c022fc0(auStack_b0,ar5,ar6,ar7);
        fVar5 = (float)((ulonglong)dVar4 >> 0x20);
        in_dr14 = dVar4;
        if (cVar8 == '\0') {
          in_dr14 = (double)CONCAT44(fVar5,uVar1);
        }
        if (cVar7 == '\0') {
          bVar6 = fVar5 < SUB84(in_dr14,0);
        }
        else {
          bVar6 = dVar4 < in_dr14;
        }
        if (bVar6) {
          if (cVar8 == '\0') {
            uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
            in_dr14 = (double)CONCAT44(uVar1,uVar1);
          }
          iVar3 = ar4 + iVar2 * 0x16c + 0x22d48;
        }
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x428c0000,SUB84(dVar4,0));
      }
      else {
        dVar4 = 5.33949302018055e-311;
      }
      if (cVar7 == '\0') {
        bVar6 = SUB84(in_dr14,0) < (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        bVar6 = in_dr14 < dVar4;
      }
      if (bVar6) {
        *(int *)(ar4 + 0x9d8) = iVar3;
      }
      else {
        *(undefined4 *)(ar4 + 0x9d8) = 0;
      }
    }
  }
  uVar1 = *(undefined4 *)(ar4 + 0x9d4);
  Vec3_dtor(auStack_b0,0xffffffff,ar6,ar7);
  free_if_nonnull_wrap_019270(auStack_a0,0xffffffff,ar6,ar7);
  return uVar1;
}



/* FUN_8c0dfbdc @ 8c0dfbdc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dfbdc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar4_00;
  undefined4 ar5_00;
  int a4;
  uint extraout_fr1;
  uint extraout_fr1_00;
  uint uVar2;
  char cVar3;
  
  cVar3 = '\0';
  ar5_00 = ar5;
  iVar1 = get_field_38_0db5a0(ar4 + 0x768,ar5,ar6,ar7);
  if (iVar1 != 0) {
    iVar1 = FUN_8c0db580(ar4 + 0x768,ar5_00,ar6,ar7);
    a4 = *(int *)(iVar1 + 8);
    iVar1 = (**(code **)(*(int *)(a4 + 8) + 0xcc))(a4,ar5_00,ar6,ar7);
    if ((iVar1 == 1) &&
       (iVar1 = (**(code **)(*(int *)(a4 + 8) + 0xd0))(a4,ar5_00,ar6,ar7), iVar1 == 1)) {
      ar4_00 = (**(code **)(*(int *)(a4 + 8) + 0x178))(a4,ar5_00,ar6,ar7);
      ar6 = get_field_4_0253e4(ar4_00,ar5_00,ar6,ar7);
      s_GRAPHICS_SQUIDLINE_0ae646(0x8c3eb334,12000,ar6,ar7);
    }
  }
  FUN_8c0db8d4(ar4,ar5,ar6,ar7);
  FUN_8c0e96b8(ar4 + 0xf4c,ar5,ar6,ar7);
  FUN_8c0d6920(ar4 + 0xa68,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 0x9e8) + 0x10))((int *)(ar4 + 0x9e8),ar5,ar6,ar7);
  FUN_8c0d0720(ar4 + 0x13b24,ar5,ar6,ar7);
  FUN_8c0d0a84(ar4 + 0x13b70,ar5,ar6,ar7);
  FUN_8c0d1548(ar4 + 0x13b8c,ar5,ar6,ar7);
  FUN_8c0d98f8(ar4 + 0x22704,ar5,ar6,ar7);
  uVar2 = extraout_fr1;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    FUN_8c0d7314(ar4 + iVar1 * 0x16c + 0x22d48,ar5,ar6,ar7);
    uVar2 = extraout_fr1_00;
  }
  *(undefined4 *)(ar4 + 0x22810) = 1;
  *(undefined4 *)(ar4 + 0x22814) = 1;
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x2324c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x2324c) = (ulonglong)uVar2;
  }
  *(undefined4 *)(ar4 + 0x23250) = 0;
  *(undefined4 *)(ar4 + 0x23254) = 0;
  return 1;
}



/* noop_0dfdc4 @ 8c0dfdc4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0dfdc4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0dfdc8 @ 8c0dfdc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0dfdc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
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



/* FUN_8c0dfe2c @ 8c0dfe2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dfe2c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  
  (*(code *)PTR_FUN_8c0dfec4)(ar4,ar5,ar6,ar7);
  ar5_00 = ar5;
  (*(code *)PTR_pure_virtual_stub_8c0dfed0)(ar4,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_FUN_8c0dfed4)(ar5,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    uVar2 = (*(code *)PTR_get_field_cc_0dfee8_8c0dfed8)(ar5,ar5_00,ar6,ar7);
    uVar2 = (*(code *)PTR_FUN_8c0dfedc)(uVar2,ar5_00,ar6,ar7);
    (*(code *)PTR_FUN_8c0dfee0)(uVar2,ar5_00,ar6,ar7);
  }
  (*(code *)PTR_pure_virtual_stub_8c0dfed0)(ar4,ar5,ar6,ar7);
  return 1;
}



/* get_field_cc_0dfee8 @ 8c0dfee8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_cc_0dfee8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0dfef0 + ar4);
}



/* FUN_8c0dfef4 @ 8c0dfef4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dfef4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0dff18)(*(undefined4 *)(DAT_8c0dff14 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0dff1c @ 8c0dff1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dff1c(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ar5;
  (*(code *)PTR_FUN_8c0dffb4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0dffbc)((int)ar4 + DAT_8c0dffb8,uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0dffc4)((int)ar4 + DAT_8c0dffc0,uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0dffcc)((int)ar4 + DAT_8c0dffc8,uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0dffd0)(ar4,uVar2,ar6,ar7);
  *(undefined4 *)(DAT_8c0dffd4 + (int)ar4) = 0;
  (*(code *)PTR_FUN_8c0dffd8)(ar4,uVar2,ar6,ar7);
  uVar2 = ar5;
  (*(code *)PTR_FUN_8c0dffe0)((int)ar4 + DAT_8c0dffdc,ar5,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    uVar1 = (**(code **)(DAT_8c0dffe4 + *ar4))(ar4,uVar2,ar6,ar7);
  }
  else {
    uVar1 = (**(code **)(*ar4 + 0x74))(ar4,uVar2,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0dffe8 @ 8c0dffe8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dffe8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = noop_0d09f4(ar4 + 0x13b70,ar5,ar6,ar7,ar4);
  return uVar1;
}


