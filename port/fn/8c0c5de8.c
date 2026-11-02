#include "../decls.h"
undefined4 s_wtNumberOfItems_is_over_CGam_0c5df6_def(int ar4,int ar5,int ar6,undefined *ar7)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *ar7_00;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined8 in_dr0;
  undefined8 uVar11;
  char cVar12;
  undefined4 uStack_44;
  undefined4 uStack_40;
  byte bStack_28;
  
  cVar12 = '\0';
  puVar6 = ar7 + 0x14;
  iVar9 = ar6;
  puVar7 = ar7;
  FUN_8c0b9d14(ar5,puVar6,ar6,ar7);
  *(undefined2 *)(ar7 + 0x1e) = *(undefined2 *)(ar5 + 0x96);
  *(undefined2 *)(ar7 + 0x20) = *(undefined2 *)(ar5 + 0x98);
  *(undefined2 *)(ar7 + 0x22) = *(undefined2 *)(ar5 + 0x9a);
  *(undefined2 *)(ar7 + 0x24) = *(undefined2 *)(ar5 + 0x9c);
  *(undefined2 *)(ar7 + 0x26) = *(undefined2 *)(ar5 + 0x9e);
  uVar2 = FUN_8c028ee4(ar5,puVar6,iVar9,puVar7);
  *(short *)(ar7 + 0x28) = (short)uVar2;
  for (iVar8 = 0; iVar8 < 8; iVar8 = iVar8 + 1) {
    ar7[iVar8 + 0x2a] = *(undefined1 *)(ar5 + iVar8 + 4);
  }
  for (iVar8 = 0; iVar8 < 3; iVar8 = iVar8 + 1) {
    iVar9 = iVar8 * 10 + ar5;
    *(undefined2 *)(ar7 + iVar8 * 10 + 0x32) = *(undefined2 *)(iVar9 + 0xc);
    *(undefined2 *)(ar7 + iVar8 * 10 + 0x34) = *(undefined2 *)(iVar9 + 0xe);
    *(undefined2 *)(ar7 + iVar8 * 10 + 0x36) = *(undefined2 *)(iVar9 + 0x10);
    *(undefined2 *)(ar7 + iVar8 * 10 + 0x38) = *(undefined2 *)(iVar9 + 0x12);
    *(undefined2 *)(ar7 + iVar8 * 10 + 0x3a) = *(undefined2 *)(iVar9 + 0x14);
    iVar9 = ar5;
  }
  ar7_00 = FUN_8c0b9f5c;
  FUN_8c0b9f5c(ar7 + 0x50,ar5 + 0x2c,iVar9,FUN_8c0b9f5c);
  puVar6 = (undefined *)0xa8;
  puVar7 = (undefined *)(uint)*(byte *)(ar5 + 0xa0);
  ar7[0xa8] = *(byte *)(ar5 + 0xa0);
  uVar2 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),puVar7,0xa8,ar7_00);
  *(undefined4 *)(ar7 + 0xac) = uVar2;
  if (ar6 == 0) {
    *(undefined4 *)(ar7 + 200) = 0xffffffff;
  }
  else {
    puVar7 = ar7 + 0xb0;
    (**(code **)(*(int *)(ar6 + 8) + 0x158))(ar6,puVar7,puVar6,ar7_00);
  }
  for (iVar9 = 0; iVar9 < 0x14; iVar9 = iVar9 + 1) {
    *(undefined4 *)(ar7 + iVar9 * 0xf0 + 0x204) = 0xffffffff;
  }
  for (iVar9 = 0; iVar9 < 0x14; iVar9 = iVar9 + 1) {
    puVar6 = (undefined *)0xffffffff;
    *(undefined4 *)(ar7 + iVar9 * 0xf0 + 0x14dc) = 0xffffffff;
  }
  for (iVar9 = 0; iVar9 < 10; iVar9 = iVar9 + 1) {
    *(undefined4 *)(ar7 + iVar9 * 0xf0 + 0x27ac) = 0xffffffff;
  }
  if ((byte)ar7[0xa8] < 3) {
    uVar2 = (**(code **)(**(int **)(ar4 + 8) + 0x118))(*(int **)(ar4 + 8),puVar7,puVar6,ar7_00);
    ar7[0x1b4] = (char)uVar2;
    (**(code **)(**(int **)(ar4 + 8) + 0x178))(*(int **)(ar4 + 8),puVar7,puVar6,ar7_00);
    if (cVar12 == '\0') {
      *(int *)(ar7 + 0x1a0) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(undefined8 *)(ar7 + 0x1a0) = in_dr0;
    }
    (**(code **)(**(int **)(ar4 + 8) + 0x17c))(*(int **)(ar4 + 8),puVar7,puVar6,ar7_00);
    uStack_40 = (undefined4)in_dr0;
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (cVar12 == '\0') {
      *(undefined4 *)(ar7 + 0x1b0) = uVar2;
      uStack_40 = uVar2;
    }
    else {
      *(undefined8 *)(ar7 + 0x1b0) = in_dr0;
    }
    (**(code **)(**(int **)(ar4 + 8) + 0x188))(*(int **)(ar4 + 8),puVar7,puVar6,ar7_00);
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    uStack_44 = (int)in_dr0;
    if (cVar12 == '\0') {
      uStack_44 = uVar2;
      uVar2 = uStack_40;
    }
    uStack_40 = uVar2;
    puVar7 = (undefined *)0x1a4;
    if (cVar12 == '\0') {
      in_dr0 = CONCAT44(uStack_44,(int)in_dr0);
      *(undefined4 *)(ar7 + 0x1a4) = uStack_44;
    }
    else {
      in_dr0 = CONCAT44(uStack_40,uStack_44);
      *(undefined8 *)(ar7 + 0x1a4) = in_dr0;
    }
    uVar2 = (**(code **)(**(int **)(ar4 + 8) + 0x18c))(*(int **)(ar4 + 8),0x1a4,puVar6,ar7_00);
    *(undefined4 *)(ar7 + 0x1b8) = uVar2;
    ar7_00 = (code *)0x0;
    for (puVar10 = (undefined *)0x0; (int)puVar10 < 3; puVar10 = puVar10 + 1) {
      puVar7 = puVar10;
      iVar9 = (**(code **)(**(int **)(ar4 + 8) + 0x104))(*(int **)(ar4 + 8),puVar10,puVar6,ar7_00);
      if (puVar10 == (undefined *)0x0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar7 + 0x1bc) = 0x446a56b8;
          *(undefined4 *)(ar7 + 0x1c0) = 0x43340000;
          in_dr0 = CONCAT44(0x43557405,(int)in_dr0);
          *(undefined4 *)(ar7 + 0x1c4) = 0x43557405;
        }
        else {
          *(undefined8 *)(ar7 + 0x1bc) = 0x1c0446a56b8;
          *(undefined8 *)(ar7 + 0x1c0) = 0x1c443340000;
          in_dr0 = 0x54fb1feb43557405;
          *(undefined8 *)(ar7 + 0x1c4) = 0x54fb1feb43557405;
        }
      }
      else {
        if (cVar12 == '\0') {
          uVar2 = *(undefined4 *)(iVar9 + 4);
          uVar11 = CONCAT44(uVar2,(int)in_dr0);
          *(undefined4 *)(ar7 + (int)puVar10 * 0x10 + 0x1bc) = uVar2;
        }
        else {
          uVar11 = *(undefined8 *)(iVar9 + 4);
          *(undefined8 *)(ar7 + (int)puVar10 * 0x10 + 0x1bc) = uVar11;
        }
        if (cVar12 == '\0') {
          uVar2 = *(undefined4 *)(iVar9 + 8);
          uVar11 = CONCAT44(uVar2,(int)uVar11);
          *(undefined4 *)(ar7 + (int)puVar10 * 0x10 + 0x1c0) = uVar2;
        }
        else {
          uVar11 = *(undefined8 *)(iVar9 + 8);
          *(undefined8 *)(ar7 + (int)puVar10 * 0x10 + 0x1c0) = uVar11;
        }
        if (cVar12 == '\0') {
          uVar2 = *(undefined4 *)(iVar9 + 0xc);
          in_dr0 = CONCAT44(uVar2,(int)uVar11);
          *(undefined4 *)(ar7 + (int)puVar10 * 0x10 + 0x1c4) = uVar2;
        }
        else {
          in_dr0 = *(undefined8 *)(iVar9 + 0xc);
          *(undefined8 *)(ar7 + (int)puVar10 * 0x10 + 0x1c4) = in_dr0;
        }
      }
    }
    if (0x19 < (byte)ar7[0x1b4]) {
      ar7_00 = (code *)0x2;
      puVar6 = (undefined *)0x1;
      puVar7 = &DAT_8c13d092;
      report_error_message(s_wtNumberOfItems_is_over__CGame___8c13d062,&DAT_8c13d092,1,2);
    }
    (**(code **)(**(int **)(ar4 + 8) + 0x198))(*(int **)(ar4 + 8),puVar7,puVar6,ar7_00);
    if ((int)((uint)bStack_28 << 0x1f) < 0) {
      *(undefined4 *)(ar7 + 0x1a8) = 1;
    }
    else {
      *(undefined4 *)(ar7 + 0x1a8) = 0;
    }
    if ((int)((uint)bStack_28 << 0x1e) < 0) {
      *(undefined4 *)(ar7 + 0x1ac) = 1;
    }
    else {
      *(undefined4 *)(ar7 + 0x1ac) = 0;
    }
    bVar1 = ar7[0x1b4];
    iVar9 = 0;
    for (puVar10 = (undefined *)0x0; (int)puVar10 < (int)(uint)bVar1; puVar10 = puVar10 + 1) {
      puVar7 = puVar10;
      iVar8 = (**(code **)(**(int **)(ar4 + 8) + 0xfc))(*(int **)(ar4 + 8),puVar10,puVar6,ar7_00);
      iVar5 = get_field_24_05c284(iVar8,puVar7,puVar6,ar7_00);
      iVar4 = FUN_8c0c4c84(iVar8,puVar7,puVar6,ar7_00);
      if (((iVar4 == 1) || (iVar5 == 10)) || (iVar5 == 0xd)) {
        ar7[0x1b4] = ar7[0x1b4] + -1;
      }
      else {
        puVar7 = ar7 + iVar9 * 0xf0 + 0x1ec;
        (**(code **)(*(int *)(iVar8 + 8) + 0x158))(iVar8,puVar7,puVar6,ar7_00);
        iVar9 = iVar9 + 1;
      }
    }
    uVar2 = (**(code **)(**(int **)(ar4 + 8) + 0x148))(*(int **)(ar4 + 8),puVar7,puVar6,ar7_00);
    puVar7 = ar7 + 0x14ac;
    FUN_8c0e9898(uVar2,puVar7,puVar6,ar7_00);
  }
  else {
    uVar2 = (**(code **)(**(int **)(ar4 + 0x10) + 0x118))
                      (*(int **)(ar4 + 0x10),puVar7,puVar6,ar7_00);
    ar7[0x2790] = (char)uVar2;
    uVar2 = (**(code **)(**(int **)(ar4 + 0x10) + 0x140))
                      (*(int **)(ar4 + 0x10),puVar7,puVar6,ar7_00);
    *(undefined4 *)(ar7 + 0x278c) = uVar2;
    bVar1 = ar7[0x2790];
    iVar9 = 0;
    for (iVar8 = 0; iVar8 < (int)(uint)bVar1; iVar8 = iVar8 + 1) {
      iVar5 = iVar8;
      iVar4 = (**(code **)(**(int **)(ar4 + 0x10) + 0xfc))
                        (*(int **)(ar4 + 0x10),iVar8,puVar6,ar7_00);
      iVar3 = get_field_24_05c284(iVar4,iVar5,puVar6,ar7_00);
      iVar5 = FUN_8c0c4c84(iVar4,iVar5,puVar6,ar7_00);
      if (((iVar5 == 1) || (iVar3 == 10)) || (iVar3 == 0xd)) {
        ar7[0x2790] = ar7[0x2790] + -1;
        puVar7 = (undefined *)0x0;
        puVar6 = ar7;
      }
      else {
        puVar7 = ar7 + iVar9 * 0xf0 + 0x2794;
        (**(code **)(*(int *)(iVar4 + 8) + 0x158))(iVar4,puVar7,puVar6,ar7_00);
        iVar9 = iVar9 + 1;
      }
    }
  }
  uVar2 = (**(code **)(**(int **)(ar4 + 0xc) + 0x118))(*(int **)(ar4 + 0xc),puVar7,puVar6,ar7_00);
  ar7[0x14c0] = (char)uVar2;
  (**(code **)(**(int **)(ar4 + 0xc) + 0x188))(*(int **)(ar4 + 0xc),puVar7,puVar6,ar7_00);
  if (cVar12 == '\0') {
    *(int *)(ar7 + 0x14bc) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(undefined8 *)(ar7 + 0x14bc) = in_dr0;
  }
  if (0x19 < (byte)ar7[0x14c0]) {
    ar7_00 = (code *)0x2;
    puVar6 = (undefined *)0x1;
    puVar7 = &DAT_8c13d092;
    report_error_message(s_stNumberOfItems_is_over__CGame___8c13d0ca,&DAT_8c13d092,1,2);
  }
  (**(code **)(**(int **)(ar4 + 0xc) + 0x198))(*(int **)(ar4 + 0xc),puVar7,puVar6,ar7_00);
  if ((int)((uint)bStack_28 << 0x1e) < 0) {
    *(undefined4 *)(ar7 + 0x14b4) = 1;
  }
  if ((int)((uint)bStack_28 << 0x1f) < 0) {
    *(undefined4 *)(ar7 + 0x14b8) = 1;
  }
  bVar1 = ar7[0x14c0];
  iVar8 = 0;
  for (iVar9 = 0; iVar9 < (int)(uint)bVar1; iVar9 = iVar9 + 1) {
    iVar5 = iVar9;
    iVar4 = (**(code **)(**(int **)(ar4 + 0xc) + 0xfc))(*(int **)(ar4 + 0xc),iVar9,puVar6,ar7_00);
    iVar5 = FUN_8c0c4c84(iVar4,iVar5,puVar6,ar7_00);
    if (iVar5 == 1) {
      ar7[0x14c0] = ar7[0x14c0] + -1;
      puVar7 = ar7;
    }
    else {
      puVar7 = ar7 + iVar8 * 0xf0 + 0x14c4;
      (**(code **)(*(int *)(iVar4 + 8) + 0x158))(iVar4,puVar7,puVar6,ar7_00);
      iVar8 = iVar8 + 1;
    }
  }
  uVar2 = (**(code **)(**(int **)(ar4 + 0xc) + 0x148))(*(int **)(ar4 + 0xc),puVar7,puVar6,ar7_00);
  FUN_8c0e9898(uVar2,ar7 + 0x2784,puVar6,ar7_00);
  puVar7 = ar7 + 0x30f4;
  FUN_8c0fa310(0x8c35468c,puVar7,puVar6,ar7_00);
  uVar2 = FUN_8c01f528(0x8c3dd7dc,puVar7,puVar6,ar7_00);
  uVar2 = FUN_8c01e04c(uVar2,ar7 + 0x4104,puVar6,ar7_00);
  return uVar2;
}

__asm__(".globl _s_wtNumberOfItems_is_over_CGam_0c5df6\n.set _s_wtNumberOfItems_is_over_CGam_0c5df6, _s_wtNumberOfItems_is_over_CGam_0c5df6_def\n");
