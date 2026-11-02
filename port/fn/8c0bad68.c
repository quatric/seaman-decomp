#include "../decls.h"
undefined4 FUN_8c0bad68_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined *ar7)

{
  undefined4 ar4_00;
  int iVar1;
  undefined1 *ar4_01;
  undefined4 ar4_02;
  undefined1 *ar5_00;
  int iVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffff78;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [24];
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  ar4_00 = get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7);
  iVar3 = 0;
  ar4_01 = auStack_40;
  FUN_8c0162f8(ar4_01,ar5_00,ar6,ar7);
  iVar2 = 1;
  if (DAT_8c43660e == '\0') {
    DAT_8c43660d = '\0';
    DAT_8c43660e = '\x01';
  }
  if (*(int *)(ar4 + 0x30) == 0) {
    if (cVar8 == '\0') {
      dVar5 = (double)CONCAT44(0x3ca3d70a,*(undefined4 *)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x34);
      dVar5 = -3.3816247524205755e-250;
    }
    if (cVar7 == '\0') {
      fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x34) = fVar4;
    }
    else {
      *(undefined8 *)(ar4 + 0x34) = in_xd0;
    }
    FUN_8c235e84(ar4_01,ar5_00,ar6,ar7);
    if (cVar8 == '\0') {
      fVar4 = *(float *)(ar4 + 0x34);
      fVar6 = 0.2;
    }
    else {
      fVar4 = 0.2;
      fVar6 = 2.79699e-42;
    }
    if (cVar7 != '\0' || fVar4 <= fVar6) {
      *(undefined4 *)(ar4 + 0x30) = 2;
    }
  }
  ar4_02 = *(undefined4 *)(ar5 + 0x7cc);
  iVar1 = FUN_8c10003c(ar4_02,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(ar4 + 0x40) = 1;
  }
  if (*(int *)(ar4 + 0x40) == 1) {
    ar4_02 = *(undefined4 *)(ar5 + 0x7cc);
    iVar1 = FUN_8c0ffff4(ar4_02,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6,ar7);
      ar5_00 = *(undefined1 **)(ar4 + 0x148);
      pack_release_entry_handle(0x8c2b59d0,ar5_00,ar6,ar7);
      ar4_02 = 0x8c35468c;
      iVar1 = FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6,ar7);
      if (iVar1 == 1) {
        ar4_02 = 0x8c35468c;
        FUN_8c0f8214(0x8c35468c,ar5_00,ar6,ar7);
      }
      *(undefined4 *)(ar5 + 0x7dc) = 4;
    }
  }
  if (*(int *)(ar4 + 0x30) == 2) {
    iVar2 = FUN_8c0b7920(ar4_00,ar5_00,ar6,ar7);
    iVar3 = s_SEAMANDC_USR_0b76dc(ar4_00,ar5_00,ar6,ar7);
    ar4_02 = ar4_00;
  }
  if (iVar2 == 1) {
    if (DAT_8c43660d == '\0') {
      if (iVar3 == 0) {
        if (*(int *)(ar4 + 0x30) != 1) {
          ar5_00 = ar5;
          FUN_8c0bcedc(ar4,ar5,ar6,ar7);
        }
        if ((*(int *)(ar4 + 0x14c) == 0) || (*(int *)(ar4 + 0x14c) == 1)) {
          ar5_00 = ar5;
          FUN_8c0ba3e0(ar4 + 0x158,ar5,ar6,ar7);
        }
        if (((*(int *)(ar4 + 0x14c) != 0) &&
            (iVar2 = FUN_8c0bb1bc(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7), iVar2 == 1)) &&
           (*(int *)(ar4 + 0x30) == 2)) {
          ar5_00 = auStack_4c;
          FUN_8c0bb158(ar5,ar5_00,ar6,ar7);
          iVar2 = FUN_8c0b77a0(auStack_4c,ar5_00,ar6,ar7);
          if (iVar2 == 0) {
            DAT_8c43660d = '\x01';
          }
          else {
            *(undefined4 *)(ar4 + 0x30) = 1;
            iVar2 = FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6,ar7);
            if (iVar2 == 1) {
              FUN_8c0f8214(0x8c35468c,ar5_00,ar6,ar7);
              strcpy(auStack_2c,&DAT_8c13c8e2,ar6,ar7,in_stack_ffffff78);
              strcpy(0x8c4362a0,auStack_2c,ar6,ar7,in_stack_ffffff78);
              ar5_00 = ar5;
              FUN_8c0bf1c8(ar4,ar5,ar6,ar7,in_stack_ffffff78);
            }
          }
        }
      }
      else {
        FUN_8c0b787c(iVar3,ar5_00,ar6,ar7);
        FUN_8c0b79f0(iVar3,ar5_00,ar6,ar7);
      }
    }
    else {
      FUN_8c0b79f0(ar4_02,ar5_00,ar6,ar7);
      ar7 = &DAT_8c13c025;
      ar6 = 0;
      ar5_00 = (undefined1 *)0x5;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,5,0,&DAT_8c13c025);
    }
  }
  else {
    FUN_8c0b79f0(ar4_02,ar5_00,ar6,ar7);
    DAT_8c43660d = '\0';
  }
  if (*(int *)(ar4 + 0x30) == 1) {
    *(int *)(ar4 + 0x154) = *(int *)(ar4 + 0x154) + 0x5000000;
    if (((*(uint *)(ar4 + 0x154) < 0x20000001) &&
        (iVar2 = ar4, iVar3 = FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6,ar7), iVar3 == 0)) &&
       ((iVar3 = FUN_8c0b6e04(&DAT_8c13c8e2,0x8c4362a0,ar6,ar7), iVar3 == 0 &&
        (*(int *)(ar4 + 0x14c) != 4)))) {
      strcpy(0x8c4362c0,&DAT_8c13c025,ar6,ar7,iVar2);
      ar6 = 0x8c436280;
      _DAT_8c43627c = FUN_8c0f8320(0x8c35468c,6,0x8c436280,ar7);
    }
    if (0xfeffffff < *(uint *)(ar4 + 0x154)) {
      *(undefined4 *)(ar4 + 8) = 2;
    }
  }
  s_AMB_FOREST_0bb1f2(ar4,ar5,ar6,ar7);
  free_if_nonnull_wrap_0151a0(auStack_40,0xffffffff,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0bad68\n.set _FUN_8c0bad68, _FUN_8c0bad68_def\n");
