/* Seaman (USA) region 0x8c030000-0x8c040000 (Ghidra decompiler) */

/* FUN_8c0300a4 @ 8c0300a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0300a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  (*(code *)PTR_FUN_8c0301bc)(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 0x2d; iVar1 = iVar1 + 1) {
    *(undefined4 *)(DAT_8c0301c0 + ar4 + iVar1 * 4) = 0;
    for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
      *(undefined4 *)(DAT_8c0301c4 + iVar1 * 0x14 + ar4 + iVar2 * 4) = 0;
    }
  }
  for (iVar1 = 0; iVar1 < 0x20; iVar1 = iVar1 + 1) {
    *(undefined1 *)(DAT_8c0301c8 + ar4 + iVar1) = 0;
    *(undefined1 *)(DAT_8c0301cc + ar4 + iVar1) = 0;
    *(undefined1 *)(DAT_8c0301d0 + ar4 + iVar1) = 0;
  }
  *(undefined4 *)(DAT_8c0301d4 + ar4) = 0xffffffff;
  *(undefined1 *)(DAT_8c0301d8 + ar4) = 0;
  *(undefined4 *)(DAT_8c0301dc + ar4) = 0;
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(DAT_8c0301e0 + ar4) = 0;
  *(undefined4 *)(DAT_8c0301e4 + ar4) = 0;
  *(undefined4 *)(DAT_8c0301e8 + ar4) = 0;
  *(undefined4 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x70) = 0;
  *(undefined4 *)(ar4 + 0x68) = 3;
  *(undefined4 *)(DAT_8c0301ec + ar4) = 4;
  *(undefined4 *)(DAT_8c0301f0 + ar4) = 0;
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    *(undefined1 *)(DAT_8c0301f4 + ar4 + iVar1 * 0x20) = 0;
  }
  return ar4;
}



/* FUN_8c0301f8 @ 8c0301f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0301f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 0x2d; iVar2 = iVar2 + 1) {
    uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c0302dc)
                      (DAT_8c0302d8,*(int *)(ar4 + 0x60) + 1,ar6,ar7);
    if (uVar1 < (uint)(*(int *)(DAT_8c0302e4 + ar4) - *(int *)(DAT_8c0302e0 + ar4 + iVar2 * 4))) {
      *(undefined4 *)(DAT_8c0302e0 + ar4 + iVar2 * 4) = 0;
    }
  }
  *(undefined4 *)(DAT_8c0302e8 + ar4) = 0;
  *(undefined4 *)(DAT_8c0302ec + ar4) = 0;
  *(undefined4 *)(DAT_8c0302f0 + ar4) = 0;
  *(undefined4 *)(DAT_8c0302f4 + ar4) = 0;
  if (*(int *)(DAT_8c0302f8 + ar4) == 2) {
    *(undefined4 *)(DAT_8c0302f8 + ar4) = 2;
  }
  if (*(int *)(DAT_8c0302f8 + ar4) == 3) {
    *(undefined4 *)(DAT_8c0302f8 + ar4) = 0;
    *(undefined4 *)(DAT_8c0302e0 + ar4 + *(int *)(DAT_8c0302fc + ar4) * 4) =
         *(undefined4 *)(DAT_8c0302e4 + ar4);
    *(undefined1 *)(DAT_8c030300 + ar4) = 0;
    *(undefined4 *)(DAT_8c0302fc + ar4) = 0;
    *(undefined4 *)(ar4 + 0x60) = 0;
  }
  if (*(int *)(DAT_8c0302f8 + ar4) == 1) {
    *(undefined4 *)(DAT_8c0302f8 + ar4) = 1;
  }
  iVar2 = DAT_8c0302e4;
  *(int *)(DAT_8c0302e4 + ar4) = *(int *)(DAT_8c0302e4 + ar4) + 1;
  return iVar2;
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



/* FUN_8c030538 @ 8c030538 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c030538(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c03054c + ar4 + ar5 * 4);
}



/* FUN_8c030550 @ 8c030550 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c030550(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c030564;
  *(undefined4 *)(DAT_8c030564 + ar4 + ar5 * 4) = ar6;
  return iVar1;
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



/* FUN_8c0306d4 @ 8c0306d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0306d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 ar7_00;
  undefined4 uVar7;
  undefined4 in_stack_00000000;
  undefined1 auStack_3c [36];
  
  puVar3 = auStack_3c;
  iVar6 = 0x10;
  puVar5 = PTR_DAT_8c03083c;
  do {
    puVar4 = puVar5 + 1;
    *puVar3 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar3[1] = *puVar4;
    puVar3 = puVar3 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar7 = 0;
  if ((*(char *)(DAT_8c030844 + ar4) == '\0') && (*(int *)(DAT_8c030848 + ar4) == 0)) {
    uVar2 = ar6;
    ar7_00 = ar7;
    uVar1 = (*(code *)PTR_s_EVENT_ROCK_PUSH_030ac6_8c03084c)(ar4,ar7,ar6,ar7);
    *(undefined4 *)(DAT_8c030850 + ar4) = uVar1;
    if (*(int *)(DAT_8c030854 + ar4) == -1) {
      if (*(int *)(DAT_8c030854 + ar4) == -1) {
        (*(code *)PTR_FUN_8c03085c)(ar4,0,uVar2,ar7_00);
        (*(code *)PTR_FUN_8c030858)(ar4,ar5,0,ar7_00);
        uVar7 = (*(code *)PTR_FUN_8c030860)(ar4,ar5,ar6,ar7,in_stack_00000000);
        *(undefined4 *)(DAT_8c030864 + ar4) = 0;
        *(undefined4 *)(ar4 + 0x60) = ar6;
        iVar6 = ar4;
        uVar2 = (*(code *)PTR_FUN_8c03086c)
                          (DAT_8c030868,*(undefined4 *)(DAT_8c030850 + ar4),ar4,ar7);
        *(undefined4 *)(DAT_8c030854 + ar4) = uVar2;
        (*(code *)PTR_FUN_8c03085c)(ar4,2,iVar6,ar7);
        if (*(int *)(DAT_8c030854 + ar4) != -1) {
          *(undefined1 *)(DAT_8c030844 + ar4) = 1;
        }
      }
    }
    else {
      *(undefined4 *)(DAT_8c030854 + ar4) = 0xffffffff;
      uVar7 = 0;
      (*(code *)PTR_FUN_8c030858)(ar4,ar5,0,ar7_00);
      (*(code *)PTR_FUN_8c03085c)(ar4,0,uVar7,ar7_00);
      uVar2 = ar6;
      uVar7 = (*(code *)PTR_FUN_8c030860)(ar4,ar5,ar6,ar7,in_stack_00000000);
      *(undefined4 *)(DAT_8c030864 + ar4) = 0;
      *(undefined4 *)(ar4 + 0x60) = ar6;
      (*(code *)PTR_FUN_8c03085c)(ar4,2,uVar2,ar7);
      uVar2 = (*(code *)PTR_FUN_8c03086c)(DAT_8c030868,*(undefined4 *)(DAT_8c030850 + ar4),ar4,ar7);
      *(undefined4 *)(DAT_8c030854 + ar4) = uVar2;
      if (*(int *)(DAT_8c030854 + ar4) != -1) {
        *(undefined1 *)(DAT_8c030844 + ar4) = 1;
      }
    }
  }
  return uVar7;
}



/* FUN_8c030870 @ 8c030870 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c030870(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c030878;
  *(undefined4 *)(DAT_8c030878 + ar4) = ar5;
  return iVar1;
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



/* s_EVENT_ROCK_PUSH_030ac6 @ 8c030ac4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_EVENT_ROCK_PUSH_030ac6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c030c68)(ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + 0x32,ar6,ar7);
  if (((((((iVar1 == 0) ||
          (iVar1 = (*(code *)PTR_FUN_8c030c68)(ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + 0x42,ar6,ar7),
          iVar1 == 0)) ||
         (iVar1 = (*(code *)PTR_FUN_8c030c68)(ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + 0x54,ar6,ar7),
         iVar1 == 0)) ||
        ((iVar1 = (*(code *)PTR_FUN_8c030c68)(ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + 0x68,ar6,ar7),
         iVar1 == 0 ||
         (iVar1 = (*(code *)PTR_FUN_8c030c68)(ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + 0x7a,ar6,ar7),
         iVar1 == 0)))) ||
       ((iVar1 = (*(code *)PTR_FUN_8c030c68)
                           (ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + DAT_8c030c6c,ar6,ar7), iVar1 == 0
        || ((iVar1 = (*(code *)PTR_FUN_8c030c68)
                               (ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + DAT_8c030c70,ar6,ar7),
            iVar1 == 0 ||
            (iVar1 = (*(code *)PTR_FUN_8c030c68)
                               (ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + DAT_8c030c74,ar6,ar7),
            iVar1 == 0)))))) ||
      (iVar1 = (*(code *)PTR_FUN_8c030c68)
                         (ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + DAT_8c030c78,ar6,ar7), iVar1 == 0))
     || ((((iVar1 = (*(code *)PTR_FUN_8c030c68)
                              (ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + DAT_8c030c7c,ar6,ar7),
           iVar1 == 0 ||
           (iVar1 = (*(code *)PTR_FUN_8c030c68)
                              (ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + DAT_8c030c80,ar6,ar7),
           iVar1 == 0)) ||
          (iVar1 = (*(code *)PTR_FUN_8c030c68)
                             (ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + DAT_8c030c84,ar6,ar7), iVar1 == 0
          )) || (((iVar1 = (*(code *)PTR_FUN_8c030c68)
                                     (ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + DAT_8c030c88,ar6,ar7),
                  iVar1 == 0 ||
                  (iVar1 = (*(code *)PTR_FUN_8c030c68)
                                     (ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + DAT_8c030c8c,ar6,ar7),
                  iVar1 == 0)) ||
                 ((iVar1 = (*(code *)PTR_FUN_8c030c68)
                                     (ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + DAT_8c030c90,ar6,ar7),
                  iVar1 == 0 ||
                  ((iVar1 = (*(code *)PTR_FUN_8c030c68)
                                      (ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + DAT_8c030c94,ar6,ar7),
                   iVar1 == 0 ||
                   (iVar1 = (*(code *)PTR_FUN_8c030c68)
                                      (ar5,PTR_s_GRAPHICS_COMMON_8c030c64 + DAT_8c030c98,ar6,ar7),
                   iVar1 == 0)))))))))) {
    uVar2 = 5;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



/* FUN_8c030c9c @ 8c030c9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c030c9c(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

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



/* FUN_8c030d04 @ 8c030d04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c030d04(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c030d0c;
  *(undefined1 *)(DAT_8c030d0c + ar4) = (undefined1)ar5;
  return iVar1;
}



/* FUN_8c030d10 @ 8c030d10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c030d10(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  *(int *)(ar4 + 100) = (int)*ar5;
  *(int *)(ar4 + 0x68) = (int)ar5[1];
  *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)(ar5 + 4);
  return 0x6c;
}



/* FUN_8c030d2c @ 8c030d2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c030d2c(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *ar5 = (char)*(undefined4 *)(ar4 + 100);
  ar5[1] = 3;
  uVar1 = *(undefined4 *)(ar4 + 0x6c);
  *(undefined4 *)(ar5 + 4) = uVar1;
  return uVar1;
}



/* FUN_8c030d44 @ 8c030d44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c030d44(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  *(undefined4 *)(ar4 + 4) = 0;
  return ar4;
}



/* FUN_8c030d58 @ 8c030d58 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c030d58(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b58,ar5,ar6,ar7);
  uVar3 = 0x8c27d500;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27d500,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b68,pcVar2,uVar3,ar7);
  uVar3 = 0x8c27d50c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27d50c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b78,pcVar2,uVar3,ar7);
  uVar3 = 0x8c27d518;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27d518,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b88,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c27d524,ar7);
  if (cVar4 == '\0') {
    _DAT_8c125b98 = CONCAT44(_UNK_8c125b9c,0x800000);
                    /* WARNING: Read-only address (ram,0x8c125b9c) is written */
  }
  else {
    _DAT_8c125b98 = 0xffffffff00800000;
  }
  return 0x8c125864;
}



/* FUN_8c030e10 @ 8c030e10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c030e10(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c102748(ar4,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0xc) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xc) = (ulonglong)extraout_fr1;
  }
  return ar4;
}



/* FUN_8c030e34 @ 8c030e34 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c030e4c) */
/* WARNING: Removing unreachable block (ram,0x8c030e40) */
/* WARNING: Removing unreachable block (ram,0x8c030e34) */
/* WARNING: Removing unreachable block (ram,0x8c030e3a) */
/* WARNING: Removing unreachable block (ram,0x8c030e46) */
/* WARNING: Removing unreachable block (ram,0x8c030e52) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c030e34(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  ar4[3] = in_fr7;
  ar4[4] = in_fr8;
  ar4[5] = in_fr9;
  return ar4;
}



/* FUN_8c030e5c @ 8c030e5c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c030e86) */
/* WARNING: Removing unreachable block (ram,0x8c030e7a) */
/* WARNING: Removing unreachable block (ram,0x8c030e8e) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c030e5c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[6] = 0;
  ar4[3] = 0;
  ar4[4] = 3;
  ar4[5] = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0x3f800000;
  *(undefined1 *)(ar4 + 10) = 1;
  return ar4;
}



/* FUN_8c030e9c @ 8c030e9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c030e9c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c030eb4)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c030eb8 @ 8c030eb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c030eb8(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  *ar4 = *ar4 & 0xfe | 1;
  *ar4 = *ar4 & 0xfd | 2;
  *ar4 = *ar4 & 0xfb | 4;
  *ar4 = *ar4 & 0xf7 | 8;
  *ar4 = *ar4 & 0xef | 0x10;
  uVar1 = *ar4 & 0xffffffdf | 0x20;
  *ar4 = (byte)uVar1;
  return uVar1;
}



/* FUN_8c030f2c @ 8c030f2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c030f2c(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  
  *ar4 = *ar4 & 0xfe;
  *ar4 = *ar4 & 0xfd;
  *ar4 = *ar4 & 0xfb;
  *ar4 = *ar4 & 0xf7;
  *ar4 = *ar4 & 0xef;
  bVar1 = *ar4;
  *ar4 = (byte)(bVar1 & 0xffffffdf);
  return bVar1 & 0xffffffdf;
}



/* FUN_8c030fa0 @ 8c030fa0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c030fa0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = PTR_DAT_8c031074;
  (*(code *)PTR_Vec3_ctor_zero_8c031078)(ar4 + 1,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c031078)(ar4 + 5,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c031078)(ar4 + 0x15,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c031078)(ar4 + 0x1b,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c031078)((int)ar4 + DAT_8c03107c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c031078)((int)ar4 + DAT_8c031080,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c031088)((int)ar4 + DAT_8c031084,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c031078)((int)ar4 + DAT_8c03108c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c031094)((int)ar4 + DAT_8c031090,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c031094)((int)ar4 + DAT_8c031098,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c031078)((int)ar4 + DAT_8c03109c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0310a4)((int)ar4 + DAT_8c0310a0,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c031078)((int)ar4 + DAT_8c0310a8,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c031094)((int)ar4 + DAT_8c0310ac,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0310b4)((int)ar4 + DAT_8c0310b0,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c031078)((int)ar4 + DAT_8c0310b8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0310bc)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0310c0 @ 8c0310c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0310c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c022d04(ar4 + 0x14,ar5,ar6,ar7);
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = 0x41200000;
  }
  else {
    in_fr1 = 0x41200000;
    *(undefined8 *)(ar4 + 0x24) = 0x41f0000041200000;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x28) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x30) = 0x3f800000;
    *(undefined4 *)(ar4 + 0x34) = 0x41f00000;
    *(undefined4 *)(ar4 + 0x38) = 0x42700000;
  }
  else {
    *(undefined8 *)(ar4 + 0x30) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(ar4 + 0x34) = 0x4270000041f00000;
    in_fr1 = 0x42700000;
    *(undefined8 *)(ar4 + 0x38) = 0x12442700000;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x3c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x3c) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0;
  *(undefined4 *)(ar4 + 0x124) = 0;
  *(undefined4 *)(ar4 + 300) = 0;
  *(undefined4 *)(ar4 + 0x138) = 0;
  *(undefined4 *)(ar4 + 0x134) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x130) = 0x42480000;
  }
  else {
    in_fr1 = 0x42480000;
    *(undefined8 *)(ar4 + 0x130) = 0xa042480000;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x48) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0xa0) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xa0) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0xa8) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xa8) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0xac) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xac) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(ar4 + 0x128) = 0;
  *(undefined4 *)(ar4 + 100) = 3;
  *(undefined4 *)(ar4 + 0x68) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x7c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x7c) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(ar4 + 0x1d4) = 0;
  *(undefined4 *)(ar4 + 0x1e8) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x1f8) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x1f8) = (ulonglong)in_fr1;
  }
  *(undefined1 *)(ar4 + 0x210) = 1;
  *(undefined4 *)(ar4 + 0x214) = 1;
  *(undefined4 *)(ar4 + 0x218) = 0;
  *(undefined4 *)(ar4 + 0x21c) = 0;
  *(undefined4 *)(ar4 + 0x178) = 0;
  *(undefined4 *)(ar4 + 0x1a8) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x1a4) = 0xffffffff;
  *(int *)(ar4 + 0x17c) = ar4 + 0x18c;
  *(int *)(ar4 + 0x180) = ar4 + 0x1a4;
  *(undefined4 *)(ar4 + 0x184) = 0;
  *(undefined4 *)(ar4 + 0x188) = 2;
  *(undefined4 *)(ar4 + 0x1ac) = 0;
  FUN_8c015ad4(ar4 + 0x1b0,&DAT_8c12f2cc,ar6,ar7,0xffffffff);
  *(undefined4 *)(ar4 + 0x1b4) = 0;
  *(undefined4 *)(ar4 + 0x1b8) = 0;
  *(undefined4 *)(ar4 + 0x1bc) = 0;
  *(undefined4 *)(ar4 + 0x1c0) = 0;
  *(undefined4 *)(ar4 + 0x1c4) = 0;
  *(undefined4 *)(ar4 + 0x1c8) = 0;
  *(undefined4 *)(ar4 + 0x1cc) = 0;
  *(undefined4 *)(ar4 + 0x1d0) = 0;
  return 0x1d0;
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



/* FUN_8c031434 @ 8c031434 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c031434(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c03143c;
  *(undefined4 *)(DAT_8c03143c + ar4) = ar5;
  return iVar1;
}



/* Class_129cbc_m5_031440 @ 8c031440 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129cbc_m5_031440(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  
  iVar1 = (*(code *)PTR_get_field_10_031590_8c0314d4)(ar4 + DAT_8c0314d0,ar5,ar6,ar7);
  ar7_00 = 0;
  uVar3 = 0xffffffff;
  iVar1 = iVar1 + -1;
  iVar2 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0314dc)
                    (ar4 + DAT_8c0314d0,iVar1,0xffffffff,0);
  if (iVar2 != 6) {
    iVar1 = (*(code *)PTR_get_field_1c_026dd8_8c0314e0)(ar4 + DAT_8c0314d0,iVar1,uVar3,ar7_00);
    (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c0314e4)(ar4 + DAT_8c0314d0,iVar1,uVar3,ar7_00);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0314f0)(ar4 + DAT_8c0314d0,iVar1,uVar3,ar7_00);
  }
  uVar3 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0314f4)
                    (ar4 + DAT_8c0314d0,iVar1,uVar3,ar7_00);
  return uVar3;
}



/* s_Check_This_Motion_Data_0314fc @ 8c0314f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Check_This_Motion_Data_0314fc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_24 [8];
  int iStack_1c;
  int iStack_18;
  int iStack_10;
  
  iStack_18 = ar5;
  iStack_10 = (*(code *)PTR_deref_u32_8c03156c)(*(int *)(ar4 + 0x14) + ar5 * 4);
  if (iStack_10 == 0) {
    (*(code *)PTR_FUN_8c031578)
              (auStack_24,PTR_s_GRAPHICS_COMMON_8c132c07_1_8c031570 + DAT_8c031574,ar5);
    (*(code *)PTR_report_error_message_8c031580)
              (PTR_s_GRAPHICS_COMMON_8c132c07_1_8c031570 + DAT_8c03157c,auStack_24,1,2,5);
  }
  iStack_1c = ar5;
  uVar1 = (*(code *)PTR_FUN_8c031584)(*(int *)(ar4 + 0x14) + ar5 * 4);
  return uVar1;
}



/* CAnimBody_CheckThisMotionData @ 8c0314fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimBody_CheckThisMotionData(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *ar5_00;
  undefined1 auStack_1c [8];
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int iStack_8;
  
  ar5_00 = ar5;
  puStack_10 = ar5;
  iStack_8 = (*(code *)PTR_deref_u32_8c03156c)(*(int *)(ar4 + 0x14) + (int)ar5 * 4,ar5,ar6,ar7);
  if (iStack_8 == 0) {
    (*(code *)PTR_FUN_8c031578)
              (auStack_1c,ar5_00,ar6,ar7,PTR_s_GRAPHICS_COMMON_8c132c07_1_8c031570 + DAT_8c031574);
    ar7 = 2;
    ar6 = 1;
    ar5_00 = auStack_1c;
    (*(code *)PTR_report_error_message_8c031580)
              (PTR_s_GRAPHICS_COMMON_8c132c07_1_8c031570 + DAT_8c03157c,ar5_00,1,2);
  }
  puStack_14 = ar5;
  uVar1 = (*(code *)PTR_FUN_8c031584)(*(int *)(ar4 + 0x14) + (int)ar5 * 4,ar5_00,ar6,ar7);
  return uVar1;
}



/* FUN_8c031588 @ 8c031588 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c031588(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*ar4 + 4);
}



/* get_field_10_031590 @ 8c031590 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_10_031590(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x10);
}



/* Class_129cbc_m1_031598 @ 8c031598 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_129cbc_m1_031598(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  
  *(undefined1 *)(DAT_8c031660 + ar4) = *(undefined1 *)(ar5 + 0x28);
  (*(code *)PTR_vec3_copy_8c02b5fc_8c031668)(auStack_14,ar4 + DAT_8c031664,ar6,ar7);
  (*(code *)PTR_FUN_8c03166c)(ar4 + 0x14,auStack_14,ar6,ar7,auStack_24);
  (*(code *)PTR_Vec3_assign_8c031670)(ar4 + 0x14,auStack_24,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c031674)(auStack_24,0xffffffff,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c031678)(auStack_14,0xffffffff,ar6,ar7);
  (*(code *)PTR_vec3_copy_8c02b5fc_8c031668)(auStack_30,ar4 + DAT_8c031664,ar6,ar7);
  (*(code *)PTR_FUN_8c03166c)(ar4 + DAT_8c03167c,auStack_30,ar6,ar7,auStack_40);
  (*(code *)PTR_Vec3_assign_8c031670)(ar4 + DAT_8c03167c,auStack_40,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c031674)(auStack_40,0xffffffff,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c031678)(auStack_30,0xffffffff,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c031680)(ar4 + DAT_8c031664,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c031684 @ 8c031684 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c03168e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c031684(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  ar7_00 = 0;
  ar6_00 = 0xffffffff;
  ar5_00 = 0;
  s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0);
  s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ar5_00,ar6_00,ar7_00);
  if (cVar1 == '\0') {
    ar4[10] = 0;
    ar4[9] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 10) = (ulonglong)extraout_fr1;
    *(ulonglong *)(ar4 + 9) = (ulonglong)extraout_fr1;
  }
  FUN_8c031748(ar4,ar5_00,ar6_00,ar7_00);
  FUN_8c031700(ar4,ar5_00,ar6_00,ar7_00);
  (**(code **)(*ar4 + 0x2c))(ar4,ar5_00,ar6_00,ar7_00);
  ar4[0x1a] = 0;
  return 0x68;
}



/* FUN_8c031700 @ 8c031700 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c031700(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  uint in_PR;
  char cVar1;
  undefined8 uStack_c;
  
  cVar1 = '\0';
  vec3_clear(ar4 + 0x6c,ar5,ar6,ar7);
  uStack_c = (ulonglong)in_fr1;
  if (cVar1 == '\0') {
    uStack_c = (ulonglong)in_PR << 0x20;
    *(undefined4 *)(ar4 + 0xac) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xac) = uStack_c;
  }
  if (cVar1 == '\0') {
    *(int *)(ar4 + 0xa8) = (int)uStack_c;
  }
  else {
    *(ulonglong *)(ar4 + 0xa8) = uStack_c;
  }
  return 0;
}



/* FUN_8c031748 @ 8c031748 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c031754) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c031748(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0xa4) = 0;
  *(undefined4 *)(ar4 + 0x94) = 0;
  return 0x94;
}



/* FUN_8c031764 @ 8c031764 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c031888) */
/* WARNING: Removing unreachable block (ram,0x8c031806) */
/* WARNING: Removing unreachable block (ram,0x8c031870) */
/* WARNING: Removing unreachable block (ram,0x8c03191e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c031764(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  undefined4 uVar5;
  undefined4 ar6_00;
  float in_fr1;
  float fVar6;
  ulonglong uVar7;
  double dVar8;
  double in_xd0;
  char cVar9;
  char cVar10;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_84;
  undefined8 uStack_78;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar10 = '\0';
  cVar9 = '\0';
  if (*(int *)(ar4 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = ar6;
    ar6_00 = ar6;
    Vec3_sub(ar5,ar6,ar6,ar7,auStack_44);
    uVar2 = Vec3_length(auStack_44,uVar2,ar6_00,ar7);
    Vec3_ctor_copy(auStack_24,uVar2,ar6_00,ar7);
    uVar5 = 0xffffffff;
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
    uVar1 = 1;
    iVar3 = *(int *)(ar4 + 0x40);
    if ((iVar3 == 1) || (iVar3 == 3)) {
      if (*(int *)(ar4 + 0x44) == 1) {
        FUN_8c031fc4(ar4,uVar5,ar6_00,ar7);
      }
      if (cVar10 == '\0') {
        in_fr1 = *(float *)(ar4 + 0x30);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x30);
      }
      if (in_fr1 == 0.0) {
        dVar8 = (double)CONCAT44(0x3f800000,in_fr1);
        if (cVar10 == '\0') {
          uStack_78 = (double)CONCAT44(uStack_78._4_4_,0x3f800000);
          dVar8 = uStack_78;
        }
      }
      else {
        pdVar4 = (double *)(ar4 + 0x2c);
        if (cVar10 != '\0') {
          in_xd0 = *pdVar4;
          pdVar4 = (double *)(ar4 + 0x30);
        }
        dVar8 = *pdVar4;
        if (cVar9 == '\0') {
          fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 / dVar8,0);
        }
        dVar8 = in_xd0;
        if (cVar10 == '\0') {
          uStack_78 = (double)CONCAT44(uStack_78._4_4_,fVar6);
          dVar8 = uStack_78;
        }
      }
      uStack_78 = dVar8;
      Vec3_scale(auStack_24,&uStack_78,ar6_00,ar7,auStack_54);
      FUN_8c023aa0(ar4 + 0x14,auStack_54,ar6_00,ar7);
      uVar5 = 0xffffffff;
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
      Vec3_length(ar4 + 0x14,uVar5,ar6_00,ar7);
      pdVar4 = (double *)(ar4 + 0x2c);
      if (cVar10 != '\0') {
        in_xd0 = *pdVar4;
        pdVar4 = (double *)(ar4 + 0x30);
      }
      uStack_84 = *pdVar4;
      if (SUB84(uStack_84,0) != (float)((ulonglong)uStack_84 >> 0x20)) {
        if (cVar10 == '\0') {
          dVar8 = (double)(ulonglong)*(uint *)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
          dVar8 = uStack_84;
        }
        uStack_84 = (double)((ulonglong)dVar8 & 0xffffffff);
        if (cVar9 == '\0' && 0.0 < SUB84(dVar8,0)) {
          if (cVar10 == '\0') {
            uStack_84 = (double)(ulonglong)*(uint *)(ar4 + 0x24);
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x24);
          }
          if (SUB84(uStack_84,0) == 0.0) {
            if (cVar10 == '\0') {
              *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar4 + 0x28);
            }
            else {
              *(undefined8 *)(ar4 + 0x2c) = *(undefined8 *)(ar4 + 0x28);
            }
          }
          else {
            if (cVar10 == '\0') {
              dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
            }
            else {
              in_xd0 = *(double *)(ar4 + 0x28);
              dVar8 = *(double *)(ar4 + 0x24);
            }
            if (cVar9 == '\0') {
              fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
            }
            else {
              fVar6 = SUB84(dVar8 / dVar8,0);
            }
            if (cVar10 == '\0') {
              dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c),fVar6);
            }
            else {
              dVar8 = *(double *)(ar4 + 0x2c);
            }
            if (cVar9 == '\0') {
              fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
            }
            else {
              fVar6 = SUB84(dVar8 + dVar8,0);
            }
            if (cVar10 == '\0') {
              *(float *)(ar4 + 0x2c) = fVar6;
            }
            else {
              *(double *)(ar4 + 0x2c) = in_xd0;
            }
          }
          pdVar4 = (double *)(ar4 + 0x2c);
          if (cVar10 != '\0') {
            in_xd0 = *pdVar4;
            pdVar4 = (double *)(ar4 + 0x30);
          }
          uStack_84 = *pdVar4;
          if (cVar9 == '\0' && (float)((ulonglong)uStack_84 >> 0x20) < SUB84(uStack_84,0)) {
            if (cVar10 == '\0') {
              uVar5 = *(undefined4 *)(ar4 + 0x30);
              uStack_84 = (double)CONCAT44(uVar5,SUB84(uStack_84,0));
              *(undefined4 *)(ar4 + 0x2c) = uVar5;
            }
            else {
              uStack_84 = *(double *)(ar4 + 0x30);
              *(double *)(ar4 + 0x2c) = uStack_84;
            }
          }
        }
      }
      FUN_8c022fc0(ar6,ar5,ar6_00,ar7);
      if (cVar10 == '\0') {
        uStack_84 = (double)CONCAT44(uVar2,(int)((ulonglong)uStack_84 >> 0x20));
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar8 = *(double *)(ar4 + 0x48);
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (cVar10 == '\0') {
        uStack_84 = (double)CONCAT44((undefined4)uStack_84,fVar6);
      }
      if (cVar9 != '\0' || (float)((ulonglong)uStack_84 >> 0x20) <= SUB84(uStack_84,0)) {
        uVar7 = CONCAT44(0x3f800000,SUB84(uStack_84,0));
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          uVar7 = (ulonglong)*(uint *)(ar4 + 0x38);
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = uVar7;
          in_xd0 = *(double *)(ar4 + 0x38);
        }
        if ((float)uVar7 == 0.0) {
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar4 + 0x28);
          }
          else {
            *(undefined8 *)(ar4 + 0x3c) = *(undefined8 *)(ar4 + 0x28);
          }
        }
        else {
          if (cVar10 == '\0') {
            dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x28);
            dVar8 = *(double *)(ar4 + 0x38);
          }
          if (cVar9 == '\0') {
            fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar8 / dVar8,0);
          }
          if (cVar10 == '\0') {
            *(float *)(ar4 + 0x3c) = fVar6;
          }
          else {
            *(double *)(ar4 + 0x3c) = in_xd0;
          }
        }
        *(undefined4 *)(ar4 + 0x40) = 4;
        uVar1 = 0;
      }
    }
    else if (iVar3 == 4) {
      uVar1 = 0;
      FUN_8c0230f0(ar4 + 0x14,uVar5,ar6_00,ar7,auStack_64);
      uVar2 = Vec3_length(auStack_64,uVar5,ar6_00,ar7);
      Vec3_ctor_copy(auStack_34,uVar2,ar6_00,ar7);
      Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
      if (cVar10 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x2c));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x2c);
        dVar8 = *(double *)(ar4 + 0x38);
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 / dVar8,0);
      }
      dVar8 = in_xd0;
      if (cVar10 == '\0') {
        uStack_78 = (double)CONCAT44(uStack_78._4_4_,fVar6);
        dVar8 = uStack_78;
      }
      uStack_78 = dVar8;
      Vec3_scale(auStack_34,&uStack_78,ar6_00,ar7,(int)&uStack_78 + 4);
      FUN_8c023aa0(ar4 + 0x14,(int)&uStack_78 + 4,ar6_00,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor((int)&uStack_78 + 4,0xffffffff,ar6_00,ar7);
      Vec3_length(ar4 + 0x14,uVar2,ar6_00,ar7);
      Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
      if (cVar10 == '\0') {
        fVar6 = *(float *)(ar4 + 0x28);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
      }
      if (cVar9 == '\0' && fVar6 < 0.0) {
        if (cVar10 == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x3c),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
          dVar8 = *(double *)(ar4 + 0x3c);
        }
        if (cVar9 == '\0') {
          fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        uStack_9c = in_xd0;
        if (cVar10 == '\0') {
          uStack_9c = (double)CONCAT44(ar4,fVar6);
        }
        if (cVar10 == '\0') {
          *(undefined4 *)(uStack_9c._4_4_ + 0x28) = (undefined4)uStack_9c;
          uStack_9c = (double)((ulonglong)uStack_9c & 0xffffffff);
        }
        else {
          *(double *)(uStack_9c._4_4_ + 0x28) = uStack_9c;
        }
        if (cVar9 != '\0' || 0.0 <= SUB84(uStack_9c,0)) {
          *(undefined4 *)(ar4 + 0x40) = 0;
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)uStack_9c & 0xffffffff;
          }
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(uStack_9c,0));
          }
        }
      }
      else {
        if (cVar10 == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x3c),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
          dVar8 = *(double *)(ar4 + 0x3c);
        }
        if (cVar9 == '\0') {
          fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        uStack_94 = in_xd0;
        if (cVar10 == '\0') {
          uStack_94 = (double)CONCAT44(ar4,fVar6);
        }
        if (cVar10 == '\0') {
          *(undefined4 *)(uStack_94._4_4_ + 0x28) = (undefined4)uStack_94;
          uStack_94 = (double)((ulonglong)uStack_94 & 0xffffffff);
        }
        else {
          *(double *)(uStack_94._4_4_ + 0x28) = uStack_94;
        }
        if (cVar9 != '\0' || SUB84(uStack_94,0) <= 0.0) {
          *(undefined4 *)(ar4 + 0x40) = 0;
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)uStack_94 & 0xffffffff;
          }
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(uStack_94,0));
          }
        }
      }
    }
    Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  }
  return uVar1;
}



/* FUN_8c031ab4 @ 8c031ab4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c031ab4(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *ar5_00;
  undefined8 in_dr0;
  undefined4 uVar1;
  char cVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar2 = '\0';
  ar5_00 = ar5;
  FUN_8c0231c8(ar4 + 0x80,ar5,ar6,ar7);
  uStack_10 = (undefined4)in_dr0;
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar2 == '\0') {
    *(undefined4 *)ar5 = uVar1;
    uStack_10 = uVar1;
  }
  else {
    *ar5 = in_dr0;
  }
  FUN_8c02327c(ar4 + 0x80,ar5_00,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uStack_14 = uVar1;
  if (cVar2 != '\0') {
    uStack_14 = (undefined4)in_dr0;
    uStack_10 = uVar1;
  }
  if (cVar2 == '\0') {
    *(undefined4 *)((int)ar5 + 4) = uStack_14;
  }
  else {
    *(undefined8 *)((int)ar5 + 4) = CONCAT44(uStack_10,uStack_14);
  }
  return 0;
}



/* FUN_8c031b08 @ 8c031b08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c031b08(int *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(int *)(DAT_8c031b48 + (int)ar4);
  if (iVar1 == 0) {
    if (ar6 == 1) {
      ar5_00 = ar5;
      (**(code **)(*ar4 + 0x2c))(ar4,ar5,1,ar7);
      (*(code *)PTR_FUN_8c031b50)((int)ar4 + DAT_8c031b4c,ar5_00,ar6,ar7);
    }
    iVar1 = DAT_8c031b54;
    *(undefined4 *)(DAT_8c031b54 + (int)ar4) = ar5;
  }
  return iVar1;
}



/* FUN_8c031b58 @ 8c031b58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c031b58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x2c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
  return 0x6c;
}



/* FUN_8c031b68 @ 8c031b68 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c031ba6) */
/* WARNING: Removing unreachable block (ram,0x8c031b9e) */
/* WARNING: Removing unreachable block (ram,0x8c031b92) */
/* WARNING: Removing unreachable block (ram,0x8c031b86) */
/* WARNING: Removing unreachable block (ram,0x8c031b7a) */
/* WARNING: Removing unreachable block (ram,0x8c031b6e) */
/* WARNING: Removing unreachable block (ram,0x8c031b70) */
/* WARNING: Removing unreachable block (ram,0x8c031b7c) */
/* WARNING: Removing unreachable block (ram,0x8c031b88) */
/* WARNING: Removing unreachable block (ram,0x8c031b94) */
/* WARNING: Removing unreachable block (ram,0x8c031ba0) */
/* WARNING: Removing unreachable block (ram,0x8c031ba8) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c031b68(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0xa0) = *ar5;
  *(undefined4 *)(ar4 + 0x34) = ar5[1];
  *(undefined4 *)(ar4 + 0x38) = ar5[2];
  *(undefined4 *)(ar4 + 0x48) = ar5[3];
  *(undefined4 *)(ar4 + 0x4c) = ar5[4];
  *(undefined4 *)(ar4 + 0x50) = ar5[5];
  return ar5 + 4;
}



/* FUN_8c031bb4 @ 8c031bb4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c031be0) */
/* WARNING: Removing unreachable block (ram,0x8c031bd2) */
/* WARNING: Removing unreachable block (ram,0x8c031bc6) */
/* WARNING: Removing unreachable block (ram,0x8c031bb6) */
/* WARNING: Removing unreachable block (ram,0x8c031bb4) */
/* WARNING: Removing unreachable block (ram,0x8c031bc4) */
/* WARNING: Removing unreachable block (ram,0x8c031bce) */
/* WARNING: Removing unreachable block (ram,0x8c031bda) */
/* WARNING: Removing unreachable block (ram,0x8c031c02) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c031bb4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fr1;
  float fVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double in_dr4;
  double in_xd0;
  undefined8 in_xd14;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  fVar3 = (float)((ulonglong)in_dr4 >> 0x20);
  *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
  uVar4 = (ulonglong)in_fr1;
  uVar1 = ar5;
  uVar2 = ar6;
  if (0.0 < fVar3) {
    *(float *)(ar4 + 0x24) = fVar3;
  }
  else {
    FUN_8c032ab0(ar4,ar5,ar6,ar7);
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x24) = (int)(uVar4 >> 0x20);
    }
    else {
      *(ulonglong *)(ar4 + 0x24) = uVar4;
    }
  }
  dVar5 = (double)(uVar4 & 0xffffffff);
  if (cVar8 == '\0') {
    bVar7 = 0.0 < SUB84(in_dr4,0);
  }
  else {
    bVar7 = dVar5 < in_dr4;
  }
  if (bVar7) {
    ar6 = uVar1;
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x30) = SUB84(in_dr4,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd14;
    }
  }
  else {
    FUN_8c022fc0(ar5,ar6,uVar2,ar7);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),(int)((ulonglong)dVar5 >> 0x20));
      dVar5 = in_xd0;
    }
    else {
      dVar6 = *(double *)(ar4 + 0x24);
    }
    if (cVar8 == '\0') {
      fVar3 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x30) = fVar3;
    }
    else {
      *(double *)(ar4 + 0x30) = dVar5;
    }
  }
  FUN_8c031c64(ar4,ar6,uVar2,ar7);
  *(undefined4 *)(ar4 + 0x40) = 1;
  return 0x40;
}



/* FUN_8c031c64 @ 8c031c64 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c031c68) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c031c64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x24) = in_fr4;
  *(undefined4 *)(ar4 + 0x44) = 1;
  return 0x44;
}



/* FUN_8c031c74 @ 8c031c74 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c031cc4) */
/* WARNING: Removing unreachable block (ram,0x8c031cbc) */
/* WARNING: Removing unreachable block (ram,0x8c031ca4) */
/* WARNING: Removing unreachable block (ram,0x8c031c9a) */
/* WARNING: Removing unreachable block (ram,0x8c031ca0) */
/* WARNING: Removing unreachable block (ram,0x8c031cae) */
/* WARNING: Removing unreachable block (ram,0x8c031cc2) */
/* WARNING: Removing unreachable block (ram,0x8c031cc6) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c031c74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(ar4 + 0x40) != 0) {
    if (*(int *)(ar4 + 0x40) != 4) {
      *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
      if (*(float *)(ar4 + 0x38) == 0.0) {
        *(undefined4 *)(ar4 + 0x3c) = 0x3f800000;
      }
      else {
        *(float *)(ar4 + 0x3c) = *(float *)(ar4 + 0x28) / *(float *)(ar4 + 0x38);
      }
      *(undefined4 *)(ar4 + 0x40) = 4;
    }
    uVar1 = FUN_8c031764(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c031ce8 @ 8c031ce8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c031cea) */
/* WARNING: Removing unreachable block (ram,0x8c031ce8) */
/* WARNING: Removing unreachable block (ram,0x8c031cf8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c031ce8(undefined4 ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *ar6_00;
  undefined8 in_dr0;
  undefined4 uVar2;
  char cVar3;
  undefined4 in_stack_00000000;
  undefined4 auStack_34 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar3 = '\0';
  ar6_00 = ar6;
  Vec3_ctor_zero(&uStack_24,ar5,ar6,ar7);
  FUN_8c032ab0(ar4,ar5,ar6_00,ar7);
  uStack_24 = (undefined4)in_dr0;
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uVar1 = uVar2;
  if (cVar3 == '\0') {
    uVar1 = auStack_34[0];
    uStack_24 = uVar2;
    uVar2 = uStack_20;
  }
  uStack_20 = uVar2;
  auStack_34[0] = uVar1;
  FUN_8c032ab0(ar4,ar5,ar6_00,ar7);
  uStack_1c = (undefined4)in_dr0;
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar3 == '\0') {
    uStack_1c = uVar1;
    uVar1 = uStack_18;
  }
  uStack_18 = uVar1;
  Vec3_ctor_xyz(auStack_34,ar5,ar6_00,ar7);
  (**(code **)(*ar6 + 0x128))(ar6,auStack_34,ar6_00,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
  FUN_8c032ab0(ar4,uVar1,ar6_00,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uStack_20 = uVar1;
  if (cVar3 != '\0') {
    uStack_20 = (undefined4)in_dr0;
    uStack_1c = uVar1;
  }
  Vec3_ctor_copy(in_stack_00000000,&uStack_24,ar6_00,ar7);
  Vec3_dtor(&uStack_24,0xffffffff,ar6_00,ar7);
  return 0;
}



/* FUN_8c031ddc @ 8c031ddc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c031ddc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c031de4;
}



/* FUN_8c031de8 @ 8c031de8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c031de8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(DAT_8c031e74 + ar4) == 0) {
    iVar1 = (*(code *)PTR_FUN_8c031e7c)(ar4 + DAT_8c031e78,ar5,ar6,ar7);
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        if (iVar1 != 2) {
          return 1;
        }
        (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c031e80)(ar4 + DAT_8c031e78,ar5,ar6,ar7);
      }
      *(int *)(DAT_8c031e74 + ar4) = *(int *)(DAT_8c031e74 + ar4) + 1;
    }
  }
  else if ((*(int *)(DAT_8c031e74 + ar4) == 1) &&
          (iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c031e80)
                             (ar4 + DAT_8c031e78,ar5,ar6,ar7), iVar1 == 1)) {
    *(undefined4 *)(DAT_8c031e74 + ar4) = 0;
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c031e84 @ 8c031e84 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c031e9c) */
/* WARNING: Removing unreachable block (ram,0x8c031e94) */
/* WARNING: Removing unreachable block (ram,0x8c031e90) */
/* WARNING: Removing unreachable block (ram,0x8c031e92) */
/* WARNING: Removing unreachable block (ram,0x8c031e9a) */
/* WARNING: Removing unreachable block (ram,0x8c031ea4) */
/* WARNING: Unknown calling convention */

float * FUN_8c031e84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float in_fr5;
  float in_fr4;
  
  *(float *)(ar4 + 0x28) = *(float *)(ar4 + 0x28) - in_fr4;
  pfVar1 = (float *)(ar4 + 0x28);
  if (*pfVar1 <= in_fr5) {
    *(float *)(ar4 + 0x28) = in_fr5;
    pfVar1 = (float *)0x40;
    *(undefined4 *)(ar4 + 0x40) = 5;
  }
  return pfVar1;
}



/* FUN_8c031eb0 @ 8c031eb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c031eb0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  undefined1 *ar5_00;
  undefined4 ar7_00;
  undefined4 in_stack_00000004;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  
  ar7_00 = ar7;
  (*(code *)PTR_FUN_8c031fa0)(ar4,ar5,ar6,ar7,auStack_30,in_stack_00000004);
  (*(code *)PTR_vec3_copy_8c02b5fc_8c031fa4)(auStack_14,auStack_30,ar6,ar7_00);
  uVar1 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c031fa8)(auStack_30,0xffffffff,ar6,ar7_00);
  (*(code *)PTR_Vec3_set_xyz_8c031fac)(auStack_3c,uVar1,ar6,ar7_00);
  ar5_00 = auStack_3c;
  (*(code *)PTR_FUN_8c031fb0)(ar7,ar5_00,ar6,ar7_00,auStack_4c);
  (*(code *)PTR_FUN_8c031fb4)(auStack_4c,ar5_00,ar6,ar7_00);
  uVar1 = (*(code *)PTR_Vec3_length_8c031fb8)(auStack_5c,ar5_00,ar6,ar7_00);
  (*(code *)PTR_Vec3_ctor_copy_8c031fbc)(auStack_24,uVar1,ar6,ar7_00);
  (*(code *)PTR_Vec3_dtor_8c031fc0)(auStack_5c,0xffffffff,ar6,ar7_00);
  (*(code *)PTR_Vec3_dtor_8c031fc0)(auStack_4c,0xffffffff,ar6,ar7_00);
  (*(code *)PTR_object_dtor_delete_8c031fa8)(auStack_3c,0xffffffff,ar6,ar7_00);
  (*(code *)PTR_Vec3_ctor_copy_8c031fbc)(s0,auStack_24,ar6,ar7_00);
  (*(code *)PTR_Vec3_dtor_8c031fc0)(auStack_24,0xffffffff,ar6,ar7_00);
  (*(code *)PTR_object_dtor_delete_8c031fa8)(auStack_14,0xffffffff,ar6,ar7_00);
  return 0;
}



/* FUN_8c031fc4 @ 8c031fc4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c032064) */
/* WARNING: Removing unreachable block (ram,0x8c032056) */
/* WARNING: Removing unreachable block (ram,0x8c03204e) */
/* WARNING: Removing unreachable block (ram,0x8c032046) */
/* WARNING: Removing unreachable block (ram,0x8c032038) */
/* WARNING: Removing unreachable block (ram,0x8c032030) */
/* WARNING: Removing unreachable block (ram,0x8c032026) */
/* WARNING: Removing unreachable block (ram,0x8c032010) */
/* WARNING: Removing unreachable block (ram,0x8c032002) */
/* WARNING: Removing unreachable block (ram,0x8c031ffa) */
/* WARNING: Removing unreachable block (ram,0x8c031ff2) */
/* WARNING: Removing unreachable block (ram,0x8c031fe4) */
/* WARNING: Removing unreachable block (ram,0x8c031fdc) */
/* WARNING: Removing unreachable block (ram,0x8c031fd2) */
/* WARNING: Removing unreachable block (ram,0x8c031fc4) */
/* WARNING: Removing unreachable block (ram,0x8c031fcc) */
/* WARNING: Removing unreachable block (ram,0x8c031fd4) */
/* WARNING: Removing unreachable block (ram,0x8c031fe2) */
/* WARNING: Removing unreachable block (ram,0x8c031ff0) */
/* WARNING: Removing unreachable block (ram,0x8c031ff4) */
/* WARNING: Removing unreachable block (ram,0x8c032000) */
/* WARNING: Removing unreachable block (ram,0x8c03200e) */
/* WARNING: Removing unreachable block (ram,0x8c032020) */
/* WARNING: Removing unreachable block (ram,0x8c032028) */
/* WARNING: Removing unreachable block (ram,0x8c032036) */
/* WARNING: Removing unreachable block (ram,0x8c032044) */
/* WARNING: Removing unreachable block (ram,0x8c032048) */
/* WARNING: Removing unreachable block (ram,0x8c032054) */
/* WARNING: Removing unreachable block (ram,0x8c032062) */
/* WARNING: Removing unreachable block (ram,0x8c032078) */
/* WARNING: Unknown calling convention */

float * FUN_8c031fc4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  
  if (*(float *)(ar4 + 0x24) <= *(float *)(ar4 + 0x28)) {
    if (*(float *)(ar4 + 0x28) <= *(float *)(ar4 + 0x24)) {
      pfVar1 = (float *)0x44;
      *(undefined4 *)(ar4 + 0x44) = 0;
    }
    else {
      *(float *)(ar4 + 0x28) =
           *(float *)(ar4 + 0x28) - *(float *)(ar4 + 0x24) / *(float *)(ar4 + 0x38);
      pfVar1 = (float *)(ar4 + 0x24);
      if (*(float *)(ar4 + 0x28) <= *pfVar1) {
        *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
        pfVar1 = (float *)0x44;
        *(undefined4 *)(ar4 + 0x44) = 0;
      }
    }
  }
  else {
    *(float *)(ar4 + 0x28) =
         *(float *)(ar4 + 0x28) + *(float *)(ar4 + 0x24) / *(float *)(ar4 + 0x34);
    pfVar1 = (float *)(ar4 + 0x24);
    if (*pfVar1 <= *(float *)(ar4 + 0x28)) {
      *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
      pfVar1 = (float *)0x44;
      *(undefined4 *)(ar4 + 0x44) = 0;
    }
  }
  return pfVar1;
}



/* FUN_8c03207c @ 8c03207c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0320c2) */
/* WARNING: Removing unreachable block (ram,0x8c0320bc) */
/* WARNING: Removing unreachable block (ram,0x8c0320b6) */
/* WARNING: Removing unreachable block (ram,0x8c0320b0) */
/* WARNING: Removing unreachable block (ram,0x8c0320a2) */
/* WARNING: Removing unreachable block (ram,0x8c03209c) */
/* WARNING: Removing unreachable block (ram,0x8c03208e) */
/* WARNING: Removing unreachable block (ram,0x8c032086) */
/* WARNING: Removing unreachable block (ram,0x8c03208a) */
/* WARNING: Removing unreachable block (ram,0x8c032092) */
/* WARNING: Removing unreachable block (ram,0x8c0320a0) */
/* WARNING: Removing unreachable block (ram,0x8c0320a6) */
/* WARNING: Removing unreachable block (ram,0x8c0320b2) */
/* WARNING: Removing unreachable block (ram,0x8c0320ba) */
/* WARNING: Removing unreachable block (ram,0x8c0320c0) */
/* WARNING: Removing unreachable block (ram,0x8c0320c4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c03207c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float fVar4;
  double dVar3;
  float in_fr5;
  float in_fr4;
  undefined4 in_fr7;
  uint in_fr6;
  undefined8 in_xd0;
  int ar4_00;
  char cVar5;
  char cVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar6 = '\0';
  cVar5 = '\0';
  fVar1 = *(float *)(ar4 + 0xa8) + in_fr5;
  *(float *)(ar4 + 0xa8) = fVar1;
  fVar2 = (fVar1 * 65536.0) / 6.283184;
  fVar4 = 6.283184;
  FUN_8c25747c((int)fVar2,ar5,ar6,ar7,in_fr4);
  uStack_c = fVar4;
  fVar1 = in_fr4;
  if (cVar6 != '\0') {
    in_xd0 = CONCAT44(in_fr5,in_fr4);
    uStack_c = fVar2;
    fVar1 = fVar2;
  }
  if (cVar5 == '\0') {
    fVar1 = fVar1 * fVar4;
  }
  else {
    fVar1 = SUB84((double)CONCAT44(fVar4,fVar1) * (double)CONCAT44(fVar4,fVar1),0);
  }
  if (cVar6 == '\0') {
    *(float *)(ar4 + 0x6c) = fVar1;
    dVar3 = (double)CONCAT44(in_fr7,*(undefined4 *)(ar4 + 0xac));
  }
  else {
    *(undefined8 *)(ar4 + 0x6c) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0xac);
    dVar3 = (double)CONCAT44(uStack_20,in_fr7);
  }
  if (cVar5 == '\0') {
    uStack_20 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    uStack_20 = SUB84(dVar3 + dVar3,0);
  }
  uStack_1c = ar4;
  if (cVar6 != '\0') {
    uStack_20 = (float)in_xd0;
    uStack_1c = (int)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar6 == '\0') {
    *(float *)(uStack_1c + 0xac) = uStack_20;
    dVar3 = (double)CONCAT44(0x47800000,uStack_20);
  }
  else {
    *(ulonglong *)(uStack_1c + 0xac) = CONCAT44(uStack_1c,uStack_20);
    in_xd0 = CONCAT44(uStack_1c,uStack_20);
    dVar3 = 12831.689682006836;
  }
  if (cVar5 == '\0') {
    fVar1 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(0x40c90fd8,fVar1);
  }
  else {
    dVar3 = -3.74578248742155e-250;
  }
  if (cVar5 == '\0') {
    fVar2 = (float)((ulonglong)dVar3 >> 0x20);
    fVar1 = SUB84(dVar3,0) / fVar2;
    dVar3 = (double)CONCAT44(fVar2,fVar1);
    ar4_00 = (int)fVar1;
  }
  else {
    dVar3 = dVar3 / dVar3;
    ar4_00 = (int)dVar3;
  }
  FUN_8c25747c(ar4_00,ar5,ar6,ar7,in_fr4);
  fVar1 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar6 == '\0') {
    dVar3 = (double)(ulonglong)in_fr6;
    uStack_10 = fVar1;
  }
  else {
    uStack_10 = SUB84(dVar3,0);
    in_xd0 = CONCAT44(in_fr7,in_fr6);
    uStack_c = fVar1;
  }
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(uStack_10,SUB84(dVar3,0));
  }
  else {
    dVar3 = (double)CONCAT44(uStack_c,uStack_10);
  }
  if (cVar5 == '\0') {
    fVar1 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar6 == '\0') {
    *(float *)(ar4 + 0x70) = fVar1;
  }
  else {
    *(undefined8 *)(ar4 + 0x70) = in_xd0;
  }
  return 0x20;
}



/* noop_032150 @ 8c032150 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_032150(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* get_field_a4_032154 @ 8c032154 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_a4_032154(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c03215c + ar4);
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



/* FUN_8c0321fc @ 8c0321fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0321fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x24) = ar5;
  return in_r0;
}



/* FUN_8c032204 @ 8c032204 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c032206) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c032204(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x68) = in_fr4;
  return ain0;
}



/* FUN_8c03220c @ 8c03220c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c03220c(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  code *ar6_00;
  undefined1 *ar6_01;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  int in_stack_fffff62c;
  undefined4 uStack_9b8;
  undefined1 auStack_9b4 [16];
  undefined1 auStack_9a4 [16];
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined4 *puStack_988;
  undefined4 *puStack_984;
  undefined4 uStack_980;
  undefined4 uStack_97c;
  undefined1 auStack_978 [2404];
  
  cVar7 = '\0';
  if (*(int *)(ar4 + 0x1b4) == 1) {
    if (DAT_8c27defc == '\0') {
      uVar4 = 0x10;
      FUN_8c010120(0x8c27d590,Vec3_ctor_zero,Vec3_dtor,0x10,0x96);
      global_list_push(0,FUN_8c032484,0x8c27def0,uVar4);
      DAT_8c27defc = '\x01';
    }
    uVar4 = 0x10;
    ar6_00 = Vec3_dtor;
    FUN_8c010120(auStack_978,Vec3_ctor_zero,Vec3_dtor,0x10,0x96);
    if (DAT_8c27df04 == '\0') {
      _DAT_8c27df00 = 0;
      DAT_8c27df04 = '\x01';
    }
    uStack_9b8 = 0xffffffff;
    puStack_988 = &uStack_994;
    puStack_984 = &uStack_9b8;
    uStack_980 = 0;
    uStack_97c = 1;
    Vec3_assign(_DAT_8c27df00 * 0x10 + -0x73d82a70,*ar5,ar6_00,uVar4);
    iVar1 = _DAT_8c27df00;
    iVar2 = _DAT_8c27df00 + 1;
    _DAT_8c27df00 = _DAT_8c27df00 + 1;
    if (0x95 < iVar2) {
      _DAT_8c27df00 = 0;
    }
    iVar2 = iVar1;
    for (iVar5 = 0; iVar5 < 0x96; iVar5 = iVar5 + 1) {
      if (0x95 < iVar2) {
        iVar2 = iVar2 + -0x96;
      }
      puVar3 = (undefined8 *)(iVar2 * 0x10 + -0x73d82a70);
      if (cVar7 == '\0') {
        uStack_994 = *(undefined4 *)puVar3;
      }
      else {
        uStack_994 = (undefined4)*puVar3;
      }
      puVar3 = (undefined8 *)(iVar2 * 0x10 + -0x73d82a6c);
      if (cVar7 == '\0') {
        uStack_990 = *(undefined4 *)puVar3;
      }
      else {
        uStack_990 = (undefined4)*puVar3;
      }
      puVar3 = (undefined8 *)(iVar2 * 0x10 + -0x73d82a68);
      if (cVar7 == '\0') {
        uStack_98c = *(undefined4 *)puVar3;
      }
      else {
        uVar6 = *puVar3;
        uStack_98c = (undefined4)uVar6;
        puStack_988 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
      }
      if (iVar1 < 0) {
        iVar1 = 0x95;
      }
      in_stack_fffff62c = iVar1;
      Vec3_assign(auStack_978 + iVar5 * 0x10,iVar1 * 0x10 + -0x73d82a70,ar6_00,uVar4);
      ar6_00 = (code *)0x0;
      FUN_8c234fd0(&puStack_988,uStack_97c,0,uVar4);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    }
    ar7 = 0x96;
    ar6 = 0x10;
    vec_delete_array(auStack_978,Vec3_dtor,0x10,0x96,in_stack_fffff62c);
  }
  if (*(int *)(ar4 + 0x1b8) == 1) {
    ar6 = 0;
    FUN_8c234d68(ar4 + 0x17c,*(int *)(ar4 + 0x188) + -1,0,ar7);
  }
  iVar1 = *(int *)(ar4 + 0x1c0);
  if (iVar1 == 1) {
    Vec3_scale(ar4 + 0x80,ar4 + 0x48,ar6,ar7,auStack_9a4);
    Vec3_scale(auStack_9a4,&DAT_8c132bf8,ar6,ar7,auStack_9b4);
    uVar4 = 0xffff0000;
    ar6_01 = auStack_9b4;
    FUN_8c032cb8(ar4,*ar5,ar6_01,0xffff0000);
    Vec3_dtor(auStack_9b4,0xffffffff,ar6_01,uVar4);
    iVar1 = Vec3_dtor(auStack_9a4,0xffffffff,ar6_01,uVar4);
  }
  return iVar1;
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



/* FUN_8c0324ac @ 8c0324ac callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c032500) */
/* WARNING: Removing unreachable block (ram,0x8c0324fa) */
/* WARNING: Removing unreachable block (ram,0x8c0324ea) */
/* WARNING: Removing unreachable block (ram,0x8c0324e0) */
/* WARNING: Removing unreachable block (ram,0x8c0324da) */
/* WARNING: Removing unreachable block (ram,0x8c0324d0) */
/* WARNING: Removing unreachable block (ram,0x8c0324cc) */
/* WARNING: Removing unreachable block (ram,0x8c0324c4) */
/* WARNING: Removing unreachable block (ram,0x8c0324ce) */
/* WARNING: Removing unreachable block (ram,0x8c0324d8) */
/* WARNING: Removing unreachable block (ram,0x8c0324de) */
/* WARNING: Removing unreachable block (ram,0x8c0324e8) */
/* WARNING: Removing unreachable block (ram,0x8c0324f8) */
/* WARNING: Removing unreachable block (ram,0x8c0324fe) */
/* WARNING: Removing unreachable block (ram,0x8c032502) */
/* WARNING: Unknown calling convention */

float * FUN_8c0324ac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float in_fr4;
  
  pfVar1 = *(float **)(ar4 + 0xa4);
  if (pfVar1 == (float *)0x1) {
    *(float *)(ar4 + 0x94) = *(float *)(ar4 + 0x94) - *(float *)(ar4 + 0xa0);
    pfVar1 = (float *)(ar4 + 0x94);
    if (*pfVar1 < *(float *)(ar4 + 0xa0) * in_fr4 * -1.0) {
      pfVar1 = (float *)&DAT_8c032514;
      *(float *)(ar4 + 0x94) = *(float *)(ar4 + 0xa0) * in_fr4 * -1.0;
    }
  }
  return pfVar1;
}



/* FUN_8c032518 @ 8c032518 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c032558) */
/* WARNING: Removing unreachable block (ram,0x8c032550) */
/* WARNING: Removing unreachable block (ram,0x8c032536) */
/* WARNING: Removing unreachable block (ram,0x8c03252e) */
/* WARNING: Removing unreachable block (ram,0x8c032518) */
/* WARNING: Removing unreachable block (ram,0x8c03252a) */
/* WARNING: Removing unreachable block (ram,0x8c032532) */
/* WARNING: Removing unreachable block (ram,0x8c03253c) */
/* WARNING: Removing unreachable block (ram,0x8c032554) */
/* WARNING: Removing unreachable block (ram,0x8c03255c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c032518(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_stack_00000000;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  uVar2 = ar6;
  uVar3 = ar7;
  FUN_8c03263c(ar4,ar4 + 0x14,ar6,ar7);
  Vec3_add(auStack_38,ar5,uVar2,uVar3,auStack_48);
  Vec3_ctor_copy(auStack_28,auStack_48,uVar2,uVar3);
  Vec3_dtor(auStack_48,0xffffffff,uVar2,uVar3);
  Vec3_dtor(auStack_38,0xffffffff,uVar2,uVar3);
  uVar2 = ar6;
  uVar3 = ar7;
  iVar1 = FUN_8c0329ac(ar4,auStack_28,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = FUN_8c032788(ar4,auStack_28,ar6,ar7);
    Vec3_ctor_copy(in_stack_00000000,uVar2,ar6,ar7);
    Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  }
  else {
    Vec3_ctor_copy(in_stack_00000000,auStack_28,uVar2,uVar3);
    Vec3_dtor(auStack_28,0xffffffff,uVar2,uVar3);
  }
  return 0;
}



/* FUN_8c03263c @ 8c03263c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c032678) */
/* WARNING: Removing unreachable block (ram,0x8c032670) */
/* WARNING: Removing unreachable block (ram,0x8c03266a) */
/* WARNING: Removing unreachable block (ram,0x8c032660) */
/* WARNING: Removing unreachable block (ram,0x8c032654) */
/* WARNING: Removing unreachable block (ram,0x8c03264e) */
/* WARNING: Removing unreachable block (ram,0x8c032640) */
/* WARNING: Removing unreachable block (ram,0x8c03263c) */
/* WARNING: Removing unreachable block (ram,0x8c03263e) */
/* WARNING: Removing unreachable block (ram,0x8c032642) */
/* WARNING: Removing unreachable block (ram,0x8c032650) */
/* WARNING: Removing unreachable block (ram,0x8c032656) */
/* WARNING: Removing unreachable block (ram,0x8c032664) */
/* WARNING: Removing unreachable block (ram,0x8c03266e) */
/* WARNING: Removing unreachable block (ram,0x8c032674) */
/* WARNING: Removing unreachable block (ram,0x8c03267a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c03263c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined1 *ar5_01;
  ulonglong uVar1;
  double dVar2;
  undefined8 in_dr4;
  float fVar3;
  undefined4 in_fr7;
  undefined4 in_fr6;
  float fVar5;
  double dVar4;
  undefined8 in_xd12;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_00000000;
  float fStack_54;
  float fStack_48;
  float afStack_44 [4];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar3 = (float)((ulonglong)in_dr4 >> 0x20);
  dVar4 = (double)CONCAT44((int)in_dr4,in_fr7);
  uVar1 = (ulonglong)(uint)fVar3;
  ar5_00 = ar5;
  fVar5 = fStack_48;
  if (0.0 < fVar3) {
    uVar1 = CONCAT44(0xbf000000,fVar3);
    FUN_8c032ab0(ar4,ar5,ar6,ar7);
    fVar5 = (float)(uVar1 >> 0x20);
    if (cVar8 == '\0') {
      fVar5 = fStack_48;
    }
  }
  fStack_48 = fVar5;
  dVar2 = (double)(uVar1 & 0xffffffff);
  fVar5 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar7 == '\0') {
    bVar6 = 0.0 < fVar5;
  }
  else {
    bVar6 = dVar2 < dVar4;
  }
  if (bVar6) {
    if (cVar8 == '\0') {
      dVar2 = (double)CONCAT44(0xbf000000,(int)uVar1);
    }
    else {
      dVar2 = -8.365700502157518e-251;
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(fVar5 * (float)((ulonglong)dVar2 >> 0x20),SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar2;
    }
    FUN_8c032ab0(ar4,ar5_00,ar6,ar7);
  }
  if (cVar8 == '\0') {
    dVar2 = (double)CONCAT44(in_fr6,SUB84(dVar2,0));
  }
  else {
    dVar2 = (double)CONCAT44(ar5,in_fr6);
  }
  if (cVar7 == '\0') {
    bVar6 = SUB84(dVar4,0) < (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    bVar6 = dVar4 < dVar2;
  }
  if (bVar6) {
    fStack_48 = SUB84(dVar4,0);
    if (cVar8 != '\0') {
      fStack_48 = (float)in_xd12;
      afStack_44[0] = (float)((ulonglong)in_xd12 >> 0x20);
    }
  }
  else {
    FUN_8c032ab0(ar4,ar5_00,ar6,ar7);
    fVar5 = (float)((ulonglong)dVar2 >> 0x20);
    fStack_48 = fVar5;
    if (cVar8 != '\0') {
      fStack_54 = SUB84(dVar2,0);
      fStack_48 = fStack_54;
      afStack_44[0] = fVar5;
    }
  }
  Vec3_set_xyz(auStack_24,ar5_00,ar6,ar7);
  ar5_01 = auStack_24;
  FUN_8c023484(ar5,ar5_01,ar6,ar7,auStack_34);
  FUN_8c02374c(auStack_34,ar5_01,ar6,ar7);
  Vec3_scale(afStack_44,&fStack_48,ar6,ar7,in_stack_00000000);
  Vec3_dtor(afStack_44,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
  object_dtor_delete(auStack_24,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c032788 @ 8c032788 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0328a8) */
/* WARNING: Removing unreachable block (ram,0x8c0328a2) */
/* WARNING: Removing unreachable block (ram,0x8c032892) */
/* WARNING: Removing unreachable block (ram,0x8c032886) */
/* WARNING: Removing unreachable block (ram,0x8c032882) */
/* WARNING: Removing unreachable block (ram,0x8c03287e) */
/* WARNING: Removing unreachable block (ram,0x8c032874) */
/* WARNING: Removing unreachable block (ram,0x8c032868) */
/* WARNING: Removing unreachable block (ram,0x8c032862) */
/* WARNING: Removing unreachable block (ram,0x8c032860) */
/* WARNING: Removing unreachable block (ram,0x8c032844) */
/* WARNING: Removing unreachable block (ram,0x8c032840) */
/* WARNING: Removing unreachable block (ram,0x8c03283c) */
/* WARNING: Removing unreachable block (ram,0x8c032832) */
/* WARNING: Removing unreachable block (ram,0x8c03282a) */
/* WARNING: Removing unreachable block (ram,0x8c032824) */
/* WARNING: Removing unreachable block (ram,0x8c03281c) */
/* WARNING: Removing unreachable block (ram,0x8c032814) */
/* WARNING: Removing unreachable block (ram,0x8c032810) */
/* WARNING: Removing unreachable block (ram,0x8c03280c) */
/* WARNING: Removing unreachable block (ram,0x8c032806) */
/* WARNING: Removing unreachable block (ram,0x8c0327fe) */
/* WARNING: Removing unreachable block (ram,0x8c0327f8) */
/* WARNING: Removing unreachable block (ram,0x8c0327f6) */
/* WARNING: Removing unreachable block (ram,0x8c0327e6) */
/* WARNING: Removing unreachable block (ram,0x8c0327e2) */
/* WARNING: Removing unreachable block (ram,0x8c0327de) */
/* WARNING: Removing unreachable block (ram,0x8c0327d8) */
/* WARNING: Removing unreachable block (ram,0x8c0327d4) */
/* WARNING: Removing unreachable block (ram,0x8c0327ce) */
/* WARNING: Removing unreachable block (ram,0x8c0327c4) */
/* WARNING: Removing unreachable block (ram,0x8c0327bc) */
/* WARNING: Removing unreachable block (ram,0x8c0327b6) */
/* WARNING: Removing unreachable block (ram,0x8c0327b0) */
/* WARNING: Removing unreachable block (ram,0x8c0327ac) */
/* WARNING: Removing unreachable block (ram,0x8c0327a8) */
/* WARNING: Removing unreachable block (ram,0x8c03278e) */
/* WARNING: Removing unreachable block (ram,0x8c03278a) */
/* WARNING: Removing unreachable block (ram,0x8c032788) */
/* WARNING: Removing unreachable block (ram,0x8c03278c) */
/* WARNING: Removing unreachable block (ram,0x8c0327a0) */
/* WARNING: Removing unreachable block (ram,0x8c0327aa) */
/* WARNING: Removing unreachable block (ram,0x8c0327ae) */
/* WARNING: Removing unreachable block (ram,0x8c0327b2) */
/* WARNING: Removing unreachable block (ram,0x8c0327b8) */
/* WARNING: Removing unreachable block (ram,0x8c0327c2) */
/* WARNING: Removing unreachable block (ram,0x8c0327ca) */
/* WARNING: Removing unreachable block (ram,0x8c0327d0) */
/* WARNING: Removing unreachable block (ram,0x8c0327d6) */
/* WARNING: Removing unreachable block (ram,0x8c0327da) */
/* WARNING: Removing unreachable block (ram,0x8c0327e0) */
/* WARNING: Removing unreachable block (ram,0x8c0327e4) */
/* WARNING: Removing unreachable block (ram,0x8c0327ee) */
/* WARNING: Removing unreachable block (ram,0x8c0327f4) */
/* WARNING: Removing unreachable block (ram,0x8c0327fa) */
/* WARNING: Removing unreachable block (ram,0x8c032800) */
/* WARNING: Removing unreachable block (ram,0x8c032808) */
/* WARNING: Removing unreachable block (ram,0x8c03280e) */
/* WARNING: Removing unreachable block (ram,0x8c032812) */
/* WARNING: Removing unreachable block (ram,0x8c03281a) */
/* WARNING: Removing unreachable block (ram,0x8c032822) */
/* WARNING: Removing unreachable block (ram,0x8c032826) */
/* WARNING: Removing unreachable block (ram,0x8c03282c) */
/* WARNING: Removing unreachable block (ram,0x8c032834) */
/* WARNING: Removing unreachable block (ram,0x8c03283e) */
/* WARNING: Removing unreachable block (ram,0x8c032842) */
/* WARNING: Removing unreachable block (ram,0x8c032850) */
/* WARNING: Removing unreachable block (ram,0x8c03285e) */
/* WARNING: Removing unreachable block (ram,0x8c032864) */
/* WARNING: Removing unreachable block (ram,0x8c03286a) */
/* WARNING: Removing unreachable block (ram,0x8c032876) */
/* WARNING: Removing unreachable block (ram,0x8c032880) */
/* WARNING: Removing unreachable block (ram,0x8c032884) */
/* WARNING: Removing unreachable block (ram,0x8c032890) */
/* WARNING: Removing unreachable block (ram,0x8c0328a0) */
/* WARNING: Removing unreachable block (ram,0x8c0328a4) */
/* WARNING: Removing unreachable block (ram,0x8c0328aa) */
/* WARNING: Removing unreachable block (ram,0x8c0327ec) */
/* WARNING: Removing unreachable block (ram,0x8c03284e) */
/* WARNING: Unknown calling convention */

float * FUN_8c032788(undefined4 ar4,float *ar5,float *ar6,int *ar7)

{
  float in_fr1;
  double dVar1;
  double dVar2;
  undefined4 in_fr3;
  float in_fr4;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 in_xd0;
  float in_PR;
  char cVar7;
  char cVar8;
  float *in_stack_00000000;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar5 = in_fr4 + *in_stack_00000000;
  fVar6 = (*ar6 + *in_stack_00000000) - in_fr4;
  fVar3 = in_fr4 + in_stack_00000000[2];
  fVar4 = (ar6[2] + in_stack_00000000[2]) - in_fr4;
  if (fVar5 < *ar5) {
    if (fVar6 <= *ar5) {
      in_fr1 = *ar5 - fVar6;
      if (fVar5 < fVar6 - in_fr1) {
        *ar5 = (fVar6 - (*ar5 - fVar6)) - 1.0;
      }
      else {
        *ar5 = fVar5 + 1.0;
      }
    }
  }
  else {
    in_fr1 = *ar5;
    if ((fVar5 - in_fr1) + fVar5 < fVar6) {
      in_fr1 = (fVar5 - *ar5) + fVar5 + 1.0;
      *ar5 = in_fr1;
    }
    else {
      *ar5 = fVar6 - 1.0;
    }
  }
  if (fVar3 < ar5[2]) {
    fVar5 = ar5[2];
    if (fVar4 <= fVar5) {
      in_fr1 = ar5[2] - fVar4;
      if (fVar3 < fVar4 - in_fr1) {
        fVar5 = 1.0;
        ar5[2] = (fVar4 - (ar5[2] - fVar4)) - 1.0;
      }
      else {
        fVar5 = 1.0;
        ar5[2] = fVar3 + 1.0;
      }
    }
  }
  else {
    in_fr1 = ar5[2];
    if ((fVar3 - in_fr1) + fVar3 < fVar4) {
      in_fr1 = (fVar3 - ar5[2]) + fVar3 + 1.0;
      fVar5 = 1.0;
      ar5[2] = in_fr1;
    }
    else {
      fVar5 = 1.0;
      ar5[2] = fVar4 - 1.0;
    }
  }
  (**(code **)(*ar7 + 0x128))(ar7,ar5,ar6,ar7);
  fStack_24 = in_fr4;
  if (cVar8 != '\0') {
    in_xd0 = CONCAT44(ar7,in_fr4);
    fStack_24 = in_fr1;
  }
  if (cVar7 == '\0') {
    fStack_24 = fStack_24 + fVar5;
  }
  else {
    fStack_24 = SUB84((double)CONCAT44(fVar5,fStack_24) + (double)CONCAT44(fVar5,fStack_24),0);
  }
  if (cVar8 == '\0') {
    dVar1 = (double)CONCAT44(in_fr4,ar6[1]);
    fStack_20 = in_PR;
  }
  else {
    fStack_24 = (float)in_xd0;
    fStack_20 = (float)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = *(undefined8 *)(ar6 + 1);
    dVar1 = (double)CONCAT44(ar7,in_fr4);
  }
  if (cVar7 == '\0') {
    fStack_28 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_28 = SUB84(dVar1 - dVar1,0);
  }
  if (cVar8 == '\0') {
    fVar3 = ar5[1];
    fVar4 = fStack_24;
  }
  else {
    fStack_28 = (float)in_xd0;
    fStack_24 = (float)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = *(undefined8 *)(ar5 + 1);
    fVar3 = fStack_24;
    fVar4 = fStack_20;
  }
  if (cVar7 == '\0' && fVar4 < fVar3) {
    if (cVar8 == '\0') {
      fVar3 = ar5[1];
      fVar4 = fStack_28;
    }
    else {
      in_xd0 = *(undefined8 *)(ar5 + 1);
      fVar3 = fStack_28;
      fVar4 = fStack_24;
    }
    if (cVar7 != '\0' || fVar4 <= fVar3) {
      if (cVar8 == '\0') {
        dVar1 = (double)CONCAT44(ar5[1],in_fr3);
        dVar2 = (double)CONCAT44(fStack_28,fVar3);
      }
      else {
        dVar1 = *(double *)(ar5 + 1);
        dVar2 = (double)CONCAT44(fStack_24,fStack_28);
      }
      fVar3 = (float)((ulonglong)dVar2 >> 0x20);
      if (cVar7 == '\0') {
        dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) - fVar3,SUB84(dVar1,0));
      }
      else {
        dVar1 = dVar1 - dVar2;
      }
      if (cVar8 == '\0') {
        dVar2 = (double)CONCAT44(fVar3,fStack_28);
      }
      else {
        in_xd0 = CONCAT44(fStack_24,fStack_28);
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar2,0) - (float)((ulonglong)dVar1 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar2 - dVar1,0);
      }
      fVar4 = fStack_24;
      fVar5 = fStack_20;
      if (cVar8 == '\0') {
        fVar4 = fVar3;
        fVar5 = fStack_24;
      }
      if (cVar7 == '\0' && fVar5 < fVar4) {
        if (cVar8 == '\0') {
          dVar1 = (double)CONCAT44(ar5[1],SUB84(dVar1,0));
          dVar2 = (double)CONCAT44(fStack_28,fVar4);
        }
        else {
          dVar1 = *(double *)(ar5 + 1);
          dVar2 = (double)CONCAT44(fStack_24,fStack_28);
        }
        fVar3 = (float)((ulonglong)dVar2 >> 0x20);
        if (cVar7 == '\0') {
          dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) - fVar3,SUB84(dVar1,0));
        }
        else {
          dVar1 = dVar1 - dVar2;
        }
        if (cVar8 == '\0') {
          dVar2 = (double)CONCAT44(fVar3,fStack_28);
        }
        else {
          in_xd0 = CONCAT44(fStack_24,fStack_28);
        }
        if (cVar7 == '\0') {
          fVar3 = SUB84(dVar2,0) - (float)((ulonglong)dVar1 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar2 - dVar1,0);
        }
        if (cVar7 == '\0') {
          fVar3 = fVar3 - 1.0;
        }
        else {
          fVar3 = SUB84((double)CONCAT44(0x3f800000,fVar3) - (double)CONCAT44(0x3f800000,fVar3),0);
        }
        if (cVar8 == '\0') {
          ar5[1] = fVar3;
        }
        else {
          *(undefined8 *)(ar5 + 1) = in_xd0;
        }
      }
      else {
        if (cVar8 != '\0') {
          in_xd0 = CONCAT44(fStack_20,fStack_24);
          fStack_24 = fVar4;
        }
        if (cVar7 == '\0') {
          fStack_24 = fStack_24 + 1.0;
        }
        else {
          fStack_24 = SUB84((double)CONCAT44(0x3f800000,fStack_24) +
                            (double)CONCAT44(0x3f800000,fStack_24),0);
        }
        if (cVar8 == '\0') {
          ar5[1] = fStack_24;
        }
        else {
          *(undefined8 *)(ar5 + 1) = in_xd0;
        }
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      dVar1 = (double)CONCAT44(ar5[1],fStack_24);
    }
    else {
      in_xd0 = CONCAT44(fStack_20,fStack_24);
      dVar1 = *(double *)(ar5 + 1);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar1 - dVar1,0);
    }
    if (cVar8 == '\0') {
      dVar1 = (double)CONCAT44(fStack_24,fVar3);
    }
    else {
      dVar1 = (double)CONCAT44(fStack_20,fStack_24);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar1,0) + (float)((ulonglong)dVar1 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar1 + dVar1,0);
    }
    fVar4 = fStack_28;
    fVar5 = fStack_24;
    if (cVar8 == '\0') {
      fVar4 = fVar3;
      fVar5 = fStack_28;
    }
    if (cVar7 == '\0' && fVar4 < fVar5) {
      if (cVar8 == '\0') {
        dVar1 = (double)CONCAT44(ar5[1],fStack_24);
      }
      else {
        in_xd0 = CONCAT44(fStack_20,fStack_24);
        dVar1 = *(double *)(ar5 + 1);
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar1 - dVar1,0);
      }
      if (cVar8 == '\0') {
        dVar1 = (double)CONCAT44(fStack_24,fVar3);
      }
      else {
        dVar1 = (double)CONCAT44(fStack_20,fStack_24);
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar1,0) + (float)((ulonglong)dVar1 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar1 + dVar1,0);
      }
      if (cVar7 == '\0') {
        fVar3 = fVar3 + 1.0;
      }
      else {
        fVar3 = SUB84((double)CONCAT44(0x3f800000,fVar3) + (double)CONCAT44(0x3f800000,fVar3),0);
      }
      if (cVar8 == '\0') {
        ar5[1] = fVar3;
      }
      else {
        *(undefined8 *)(ar5 + 1) = in_xd0;
      }
    }
    else {
      if (cVar8 != '\0') {
        in_xd0 = CONCAT44(fStack_24,fStack_28);
        fStack_28 = fVar4;
      }
      if (cVar7 == '\0') {
        fStack_28 = fStack_28 - 1.0;
      }
      else {
        fStack_28 = SUB84((double)CONCAT44(0x3f800000,fStack_28) -
                          (double)CONCAT44(0x3f800000,fStack_28),0);
      }
      if (cVar8 == '\0') {
        ar5[1] = fStack_28;
      }
      else {
        *(undefined8 *)(ar5 + 1) = in_xd0;
      }
    }
  }
  return ar5;
}



/* FUN_8c0329ac @ 8c0329ac callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c032a08) */
/* WARNING: Removing unreachable block (ram,0x8c032a00) */
/* WARNING: Removing unreachable block (ram,0x8c0329fa) */
/* WARNING: Removing unreachable block (ram,0x8c0329f0) */
/* WARNING: Removing unreachable block (ram,0x8c0329e8) */
/* WARNING: Removing unreachable block (ram,0x8c0329d8) */
/* WARNING: Removing unreachable block (ram,0x8c0329d4) */
/* WARNING: Removing unreachable block (ram,0x8c0329d0) */
/* WARNING: Removing unreachable block (ram,0x8c0329ca) */
/* WARNING: Removing unreachable block (ram,0x8c0329c6) */
/* WARNING: Removing unreachable block (ram,0x8c0329c2) */
/* WARNING: Removing unreachable block (ram,0x8c0329ac) */
/* WARNING: Removing unreachable block (ram,0x8c0329bc) */
/* WARNING: Removing unreachable block (ram,0x8c0329c4) */
/* WARNING: Removing unreachable block (ram,0x8c0329c8) */
/* WARNING: Removing unreachable block (ram,0x8c0329ce) */
/* WARNING: Removing unreachable block (ram,0x8c0329d2) */
/* WARNING: Removing unreachable block (ram,0x8c0329d6) */
/* WARNING: Removing unreachable block (ram,0x8c0329e6) */
/* WARNING: Removing unreachable block (ram,0x8c0329ea) */
/* WARNING: Removing unreachable block (ram,0x8c0329f2) */
/* WARNING: Removing unreachable block (ram,0x8c0329fe) */
/* WARNING: Removing unreachable block (ram,0x8c032a02) */
/* WARNING: Removing unreachable block (ram,0x8c032a0a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0329ac(undefined4 ar4,float *ar5,float *ar6,int *ar7)

{
  float fVar1;
  double dVar2;
  undefined8 uVar3;
  float in_fr4;
  undefined4 in_fr14;
  char cVar4;
  char cVar5;
  float *in_stack_00000000;
  
  cVar5 = '\0';
  cVar4 = '\0';
  if ((((in_fr4 + *in_stack_00000000 < *ar5) && (*ar5 < (*ar6 + *in_stack_00000000) - in_fr4)) &&
      (in_fr4 + in_stack_00000000[2] < ar5[2])) &&
     (fVar1 = (ar6[2] + in_stack_00000000[2]) - in_fr4, dVar2 = (double)CONCAT44(ar5[2],fVar1),
     ar5[2] < fVar1)) {
    (**(code **)(*ar7 + 0x128))(ar7,ar5,ar6,ar7);
    if (cVar5 == '\0') {
      dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),in_fr4);
    }
    if (cVar4 == '\0') {
      fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 + dVar2,0);
    }
    if (cVar5 == '\0') {
      dVar2 = (double)CONCAT44(ar5[1],fVar1);
    }
    else {
      dVar2 = *(double *)(ar5 + 1);
    }
    fVar1 = (float)((ulonglong)dVar2 >> 0x20);
    if (cVar4 == '\0' && SUB84(dVar2,0) < fVar1) {
      if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(fVar1,ar6[1]);
      }
      if (cVar4 == '\0') {
        fVar1 = SUB84(dVar2,0) - in_fr4;
      }
      else {
        fVar1 = SUB84(dVar2 - (double)CONCAT44(in_fr14,in_fr4),0);
      }
      if (cVar5 == '\0') {
        uVar3 = CONCAT44(ar5[1],fVar1);
      }
      else {
        uVar3 = *(undefined8 *)(ar5 + 1);
      }
      if (cVar4 == '\0' && (float)((ulonglong)uVar3 >> 0x20) < (float)uVar3) {
        return 1;
      }
    }
  }
  return 0;
}



/* rand_range @ 8c032a64 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c032a86) */
/* WARNING: Unknown calling convention */

int rand_range(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  double dVar2;
  undefined4 in_fr3;
  double dVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  iVar1 = rand(ar4,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    dVar3 = (double)CONCAT44((float)(ar6 - ar5),in_fr3);
  }
  else {
    dVar3 = (double)(ar6 - ar5);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar2 = -1.5729774447110699e+308;
  }
  if (cVar4 == '\0') {
    iVar1 = (int)((float)((ulonglong)dVar3 >> 0x20) *
                 (SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20)));
  }
  else {
    iVar1 = (int)(dVar3 * (dVar2 / dVar2));
  }
  return iVar1 + ar5;
}



/* FUN_8c032ab0 @ 8c032ab0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c032ac4) */
/* WARNING: Removing unreachable block (ram,0x8c032abe) */
/* WARNING: Removing unreachable block (ram,0x8c032ab4) */
/* WARNING: Removing unreachable block (ram,0x8c032ab0) */
/* WARNING: Removing unreachable block (ram,0x8c032ab2) */
/* WARNING: Removing unreachable block (ram,0x8c032aba) */
/* WARNING: Removing unreachable block (ram,0x8c032ac2) */
/* WARNING: Removing unreachable block (ram,0x8c032ad2) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c032ab0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  rand(ar4,ar5,ar6,ar7);
  return &DAT_8c032af4;
}



/* FUN_8c032af8 @ 8c032af8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c032afa) */
/* WARNING: Removing unreachable block (ram,0x8c032af8) */
/* WARNING: Removing unreachable block (ram,0x8c032b56) */
/* WARNING: Unknown calling convention */

int FUN_8c032af8(undefined4 ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int ar7_00;
  undefined4 in_fr1;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  iVar3 = ar5;
  if (ar5 != ar6) {
    ar7_00 = ar7;
    iVar1 = rand_range(ar4,ar5,ar6,ar7);
    iVar3 = ar6;
    iVar2 = rand_range(ar4,ar5,ar6,ar7_00);
    iVar3 = libgcc_divide_helper_0101e4(iVar1 + iVar2,2,iVar3,ar7_00);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44((float)(ar7 + -0x32),(float)iVar3);
    }
    else {
      dVar6 = (double)(ar7 + -0x32);
    }
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(0x3c23d70a,in_fr1);
    }
    else {
      dVar4 = -1.5729774083467465e+308;
    }
    if (cVar9 == '\0') {
      fVar7 = (float)((ulonglong)dVar6 >> 0x20) * (float)((ulonglong)dVar4 >> 0x20) *
              (float)(ar6 - ar5);
      fVar5 = SUB84(dVar6,0) + fVar7;
      dVar6 = (double)CONCAT44(fVar7,fVar5);
      bVar8 = (float)ar6 < fVar5;
    }
    else {
      dVar6 = dVar6 * dVar4 * (double)(ar6 - ar5);
      dVar6 = dVar6 + dVar6;
      fVar5 = SUB84(dVar6,0);
      bVar8 = (double)ar6 < dVar6;
    }
    if (bVar8) {
      if (cVar9 == '\0') {
        iVar3 = (int)((float)(ar6 << 1) - fVar5);
      }
      else {
        iVar3 = (int)((double)(ar6 << 1) - dVar6);
      }
    }
    else {
      if (cVar9 == '\0') {
        bVar8 = fVar5 < (float)ar5;
      }
      else {
        bVar8 = dVar6 < (double)ar5;
      }
      if (bVar8) {
        if (cVar9 == '\0') {
          iVar3 = (int)((float)(ar5 << 1) - fVar5);
        }
        else {
          iVar3 = (int)((double)(ar5 << 1) - dVar6);
        }
      }
      else if (cVar9 == '\0') {
        iVar3 = (int)fVar5;
      }
      else {
        iVar3 = (int)dVar6;
      }
    }
  }
  if (iVar3 < ar5) {
    iVar3 = ar5;
  }
  if (ar6 < iVar3) {
    iVar3 = ar6;
  }
  return iVar3;
}



/* FUN_8c032be0 @ 8c032be0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c032c0a) */
/* WARNING: Removing unreachable block (ram,0x8c032c02) */
/* WARNING: Removing unreachable block (ram,0x8c032bfc) */
/* WARNING: Removing unreachable block (ram,0x8c032bf6) */
/* WARNING: Removing unreachable block (ram,0x8c032bf0) */
/* WARNING: Removing unreachable block (ram,0x8c032be4) */
/* WARNING: Removing unreachable block (ram,0x8c032be0) */
/* WARNING: Removing unreachable block (ram,0x8c032be2) */
/* WARNING: Removing unreachable block (ram,0x8c032be6) */
/* WARNING: Removing unreachable block (ram,0x8c032bf2) */
/* WARNING: Removing unreachable block (ram,0x8c032bf8) */
/* WARNING: Removing unreachable block (ram,0x8c032bfe) */
/* WARNING: Removing unreachable block (ram,0x8c032c08) */
/* WARNING: Removing unreachable block (ram,0x8c032c4e) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c032be0(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int ar5_00;
  float in_fr1;
  float fVar3;
  float fVar4;
  double dVar2;
  float fVar5;
  undefined8 in_dr4;
  float fVar6;
  double dVar7;
  undefined4 in_fr15;
  double dVar8;
  undefined8 in_xd0;
  bool bVar9;
  undefined4 in_PR;
  char cVar10;
  char cVar11;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  cVar11 = '\0';
  cVar10 = '\0';
  fVar6 = (float)((ulonglong)in_dr4 >> 0x20);
  dVar8 = (double)CONCAT44(fVar6,in_fr15);
  fVar5 = (float)in_dr4;
  fVar3 = fVar5 - fVar6;
  puVar1 = (undefined4 *)0xc;
  if (fVar6 != fVar5) {
    ar5_00 = ar5;
    fVar4 = fVar3;
    FUN_8c032ab0(ar4,ar5,ar6,ar7);
    fStack_28 = fVar4;
    fStack_20 = in_fr1;
    fVar6 = fVar4;
    if (cVar11 == '\0') {
      fStack_28 = fVar3;
      fStack_20 = fVar4;
      fVar6 = fStack_1c;
    }
    fStack_1c = fVar6;
    FUN_8c032ab0(ar4,ar5_00,ar6,ar7);
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(fStack_20,fVar5);
      fStack_24 = fVar4;
    }
    else {
      dVar7 = (double)CONCAT44(fStack_1c,fVar4);
      fStack_24 = in_fr1;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + fVar4,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + (double)CONCAT44(fVar4,in_fr1);
    }
    if (cVar11 == '\0') {
      dVar2 = (double)CONCAT44(0x40000000,in_fr1);
    }
    else {
      dVar2 = 5.377642816887133e-19;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / (float)((ulonglong)dVar2 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar2;
    }
    if (cVar11 == '\0') {
      dVar2 = (double)CONCAT44(0x3c23d70a,(float)(ar5 + -0x32));
    }
    else {
      dVar2 = 2.9939311649880902e-78;
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar11 == '\0') {
      dVar2 = (double)CONCAT44(fStack_28,fVar3);
    }
    else {
      dVar2 = (double)CONCAT44(fStack_24,fStack_28);
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar2 * dVar2,0);
    }
    fStack_1c = fVar3;
    uStack_18 = in_PR;
    if (cVar11 != '\0') {
      fStack_1c = (float)in_xd0;
      uStack_18 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    puVar1 = (undefined4 *)0x18;
    if (cVar11 == '\0') {
      dVar2 = (double)CONCAT44(fStack_1c,fVar3);
    }
    else {
      dVar2 = (double)CONCAT44(uStack_18,fStack_1c);
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + (float)((ulonglong)dVar2 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + dVar2;
    }
    fVar3 = (float)((ulonglong)dVar7 >> 0x20);
    if (cVar10 != '\0' || fVar3 <= SUB84(dVar7,0)) {
      if (cVar10 == '\0') {
        bVar9 = fVar3 < (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        bVar9 = dVar7 < dVar8;
      }
      if (bVar9) {
        puVar1 = &DAT_8c032cb0;
      }
    }
    else {
      puVar1 = &DAT_8c032cb0;
    }
  }
  return puVar1;
}



/* FUN_8c032cb8 @ 8c032cb8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c032d22) */
/* WARNING: Removing unreachable block (ram,0x8c032d1c) */
/* WARNING: Removing unreachable block (ram,0x8c032d14) */
/* WARNING: Removing unreachable block (ram,0x8c032d0c) */
/* WARNING: Removing unreachable block (ram,0x8c032d04) */
/* WARNING: Removing unreachable block (ram,0x8c032d00) */
/* WARNING: Removing unreachable block (ram,0x8c032cf8) */
/* WARNING: Removing unreachable block (ram,0x8c032cf0) */
/* WARNING: Removing unreachable block (ram,0x8c032ce6) */
/* WARNING: Removing unreachable block (ram,0x8c032cea) */
/* WARNING: Removing unreachable block (ram,0x8c032cf4) */
/* WARNING: Removing unreachable block (ram,0x8c032cfc) */
/* WARNING: Removing unreachable block (ram,0x8c032d02) */
/* WARNING: Removing unreachable block (ram,0x8c032d08) */
/* WARNING: Removing unreachable block (ram,0x8c032d12) */
/* WARNING: Removing unreachable block (ram,0x8c032d18) */
/* WARNING: Removing unreachable block (ram,0x8c032d20) */
/* WARNING: Removing unreachable block (ram,0x8c032d26) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c032cb8(undefined4 ar4,float *ar5,float *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float *pfStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  pfStack_1c = &fStack_34;
  puStack_18 = &uStack_3c;
  uStack_14 = 0;
  uStack_10 = 2;
  fStack_34 = *ar5;
  fStack_30 = ar5[1];
  fStack_2c = ar5[2];
  fStack_28 = fStack_34 + *ar6;
  fStack_24 = fStack_30 + ar6[1];
  fStack_20 = fStack_2c + ar6[2];
  uStack_3c = ar7;
  uStack_38 = ar7;
  uVar1 = FUN_8c234d68(&pfStack_1c,1,0,ar7);
  return uVar1;
}



/* FUN_8c032d48 @ 8c032d48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c032d48(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int ar6_00;
  int ar7_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double in_dr0;
  double dVar6;
  float fVar8;
  ulonglong uVar7;
  undefined4 in_fr3;
  double dVar9;
  undefined8 in_xd0;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 auStack_24 [5];
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar3 = 1;
  iVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  Vec3_set_zero(&fStack_30,iVar2,ar6_00,ar7_00);
  iVar1 = *(int *)(ar4 + 0x1e8);
  if ((iVar1 < 7) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      Vec3_scale(ar7,&DAT_8c132bfc,ar6_00,ar7_00,auStack_40);
      Vec3_assign(auStack_24,auStack_40,ar6_00,ar7_00);
      Vec3_dtor(auStack_40,0xffffffff,ar6_00,ar7_00);
      Vec3_scale(auStack_24,&DAT_8c132c00,ar6_00,ar7_00,auStack_50);
      Vec3_add(ar6,auStack_50,ar6_00,ar7_00,auStack_60);
      Vec3_assign(ar4 + 0x54,auStack_60,ar6_00,ar7_00);
      Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_50,0xffffffff,ar6_00,ar7_00);
      FUN_8c031bb4(ar4,ar5,ar4 + 0x54,ar7_00);
      *(int *)(ar4 + 0x1e8) = *(int *)(ar4 + 0x1e8) + 1;
    case 1:
      iVar2 = FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7_00);
      ar6_00 = ar5;
      if (iVar2 == 0) {
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(int *)(ar4 + 0x1e8) = *(int *)(ar4 + 0x1e8) + 1;
      }
      break;
    case 2:
      Vec3_set_xyz(auStack_6c,iVar2,ar6_00,ar7_00);
      ar7_00 = ar4 + 0x14;
      FUN_8c0332b4(ar4,ar5,ar6,ar7_00,auStack_78,auStack_6c);
      vec3_copy_8c023d8c(ar4 + 0x1ec,auStack_78,ar6,ar7_00);
      object_dtor_delete(auStack_78,0xffffffff,ar6,ar7_00);
      object_dtor_delete(auStack_6c,0xffffffff,ar6,ar7_00);
      *(int *)(ar4 + 0x1e8) = *(int *)(ar4 + 0x1e8) + 1;
      ar6_00 = ar6;
    case 3:
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x41200000,*(undefined4 *)(ar4 + 0x1ec));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x1ec);
        dVar6 = 4.33426965481473e-312;
      }
      if (cVar11 == '\0') {
        fStack_30 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fStack_30 = SUB84(dVar6 / dVar6,0);
      }
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x41200000,*(undefined4 *)(ar4 + 0x1f0));
      }
      else {
        fStack_30 = (float)in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x1f0);
        dVar6 = 4.33426965481473e-312;
      }
      if (cVar11 == '\0') {
        fStack_2c = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fStack_2c = SUB84(dVar6 / dVar6,0);
      }
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x41200000,*(undefined4 *)(ar4 + 500));
      }
      else {
        fStack_2c = (float)in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 500);
        dVar6 = 4.33426965481473e-312;
      }
      if (cVar11 == '\0') {
        fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 / dVar6,0);
      }
      fStack_28 = fVar5;
      if (cVar12 != '\0') {
        fStack_28 = (float)in_xd0;
        auStack_24[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      vec3_copy_8c02b5fc(auStack_84,&fStack_30,ar6_00,ar7_00);
      FUN_8c023484(ar4 + 0x14,auStack_84,ar6_00,ar7_00,auStack_94);
      Vec3_assign(ar4 + 0x14,auStack_94,ar6_00,ar7_00);
      Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7_00);
      object_dtor_delete(auStack_84,0xffffffff,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        fVar5 = *(float *)(ar4 + 0x1f8);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x1f8);
      }
      if (cVar11 == '\0') {
        fVar5 = fVar5 + 1.0;
      }
      else {
        fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) + (double)CONCAT44(0x3f800000,fVar5),0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x1f8) = fVar5;
        uVar7 = CONCAT44(0x41200000,*(undefined4 *)(ar4 + 0x1f8));
      }
      else {
        *(undefined8 *)(ar4 + 0x1f8) = in_xd0;
        uVar7 = 0xcc41200000;
      }
      if (cVar11 != '\0' || (float)(uVar7 >> 0x20) <= (float)uVar7) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x1f8) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x1f8) = uVar7 & 0xffffffff;
        }
        *(int *)(ar4 + 0x1e8) = *(int *)(ar4 + 0x1e8) + 1;
      }
      break;
    case 4:
      Vec3_add(ar5,ar6,ar6_00,ar7_00,auStack_a4);
      FUN_8c023c30(auStack_a4,&DAT_8c132c04,ar6_00,ar7_00,auStack_b4);
      Vec3_assign(ar4 + 0x54,auStack_b4,ar6_00,ar7_00);
      Vec3_dtor(auStack_b4,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7_00);
      ar6_00 = ar4 + 0x54;
      FUN_8c031bb4(ar4,ar5,ar6_00,ar7_00);
      *(int *)(ar4 + 0x1e8) = *(int *)(ar4 + 0x1e8) + 1;
    case 5:
      iVar2 = ar4 + 0x54;
      FUN_8c022fc0(ar5,iVar2,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
        dVar6 = (double)CONCAT44(0x42480000,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = -8.341321687789945e-251;
      }
      if (cVar11 == '\0') {
        fVar8 = (float)((ulonglong)dVar6 >> 0x20);
        fVar5 = SUB84(dVar6,0) * fVar8;
        dVar6 = (double)CONCAT44(fVar8,fVar5);
        bVar10 = fVar5 < (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        dVar6 = dVar6 * dVar6;
        bVar10 = dVar6 < in_dr0;
      }
      if (!bVar10) {
        FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(in_dr0,0));
        }
        else {
          dVar9 = *(double *)(ar4 + 0x28);
        }
        fVar5 = (float)((ulonglong)dVar6 >> 0x20);
        if (cVar11 == '\0') {
          dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) / fVar5,SUB84(dVar9,0));
        }
        else {
          dVar9 = dVar9 / dVar6;
        }
        if (cVar11 == '\0') {
          fVar5 = 1.0 - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar5 = SUB84((double)CONCAT44(fVar5,0x3f800000) - dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar5);
        }
        else {
          dVar6 = *(double *)(ar4 + 0x28);
        }
        if (cVar11 == '\0') {
          dVar6 = (double)(ulonglong)(uint)(SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20));
        }
        else {
          dVar6 = dVar6 * dVar6;
        }
        iVar2 = ar6;
        if (cVar12 == '\0') {
          *(int *)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
      }
      uVar4 = SUB84(dVar6,0);
      FUN_8c031c64(ar4,iVar2,ar6_00,ar7_00);
      iVar2 = FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7_00);
      ar6_00 = ar5;
      if (iVar2 == 0) {
        *(int *)(ar4 + 0x1e8) = *(int *)(ar4 + 0x1e8) + 1;
        *(undefined4 *)(ar4 + 0x40) = 3;
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x48) = CONCAT44(0x3f800000,uVar4);
        }
      }
      break;
    case 6:
      iVar2 = ar6;
      FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
        dVar6 = (double)CONCAT44(0x42480000,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 5.2386907559463314e-11;
      }
      if (cVar11 == '\0') {
        fVar8 = (float)((ulonglong)dVar6 >> 0x20);
        fVar5 = SUB84(dVar6,0) * fVar8;
        dVar6 = (double)CONCAT44(fVar8,fVar5);
        bVar10 = fVar5 < (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        dVar6 = dVar6 * dVar6;
        bVar10 = dVar6 < in_dr0;
      }
      if (!bVar10) {
        iVar2 = ar6;
        FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(in_dr0,0));
        }
        else {
          dVar9 = *(double *)(ar4 + 0x28);
        }
        fVar5 = (float)((ulonglong)dVar6 >> 0x20);
        if (cVar11 == '\0') {
          dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) / fVar5,SUB84(dVar9,0));
        }
        else {
          dVar9 = dVar9 / dVar6;
        }
        if (cVar11 == '\0') {
          fVar5 = 1.0 - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar5 = SUB84((double)CONCAT44(fVar5,0x3f800000) - dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar5);
        }
        else {
          dVar6 = *(double *)(ar4 + 0x28);
        }
        if (cVar11 == '\0') {
          fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar6 * dVar6,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 0x28) = fVar5;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
      }
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        uVar7 = 0x8c031c643dcccccd;
      }
      if (cVar11 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
        if (cVar12 == '\0') {
          uVar7 = CONCAT44(0x3dcccccd,(float)uVar7);
          *(undefined4 *)(ar4 + 0x28) = 0x3dcccccd;
        }
        else {
          uVar7 = 0x8c031c643dcccccd;
          *(undefined8 *)(ar4 + 0x28) = 0x8c031c643dcccccd;
        }
      }
      FUN_8c031c64(ar4,iVar2,ar6_00,ar7_00);
      ar6_00 = ar5;
      FUN_8c031764(ar4,ar6,ar5,ar7_00);
      FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        uVar7 = uVar7 >> 0x20;
      }
      if (cVar11 != '\0' || (float)uVar7 <= 1.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar7 & 0xffffffff;
        }
        uVar3 = 0;
        *(undefined4 *)(ar4 + 0x1e8) = 0;
      }
    }
  }
  object_dtor_delete(&fStack_30,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7_00);
  return uVar3;
}



/* FUN_8c0332b4 @ 8c0332b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c0332b4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,float *s4)

{
  undefined4 uVar1;
  undefined1 *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  double in_dr0;
  float fVar5;
  int iVar6;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double in_dr2;
  undefined8 in_xd0;
  bool bVar7;
  char cVar8;
  char cVar9;
  int iStack_68;
  int iStack_64;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  cVar9 = '\0';
  cVar8 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_set_zero(&fStack_18,ar5,ar6,ar7);
  Vec3_sub(ar6,ar5,ar6_00,ar7_00,auStack_38);
  uVar1 = Vec3_length(auStack_38,ar5,ar6_00,ar7_00);
  Vec3_ctor_copy(auStack_28,uVar1,ar6_00,ar7_00);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7_00);
  FUN_8c0230f0(ar7,uVar1,ar6_00,ar7_00,auStack_48);
  FUN_8c0230f0(auStack_28,uVar1,ar6_00,ar7_00,auStack_58);
  FUN_8c022dac(auStack_48,auStack_58,ar6_00,ar7_00);
  fStack_14 = SUB84(in_dr0,0);
  fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
  if (cVar9 == '\0') {
    fStack_14 = fVar5;
    fVar5 = fStack_10;
  }
  fStack_10 = fVar5;
  Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7_00);
  ar5_00 = auStack_28;
  iStack_64 = FUN_8c023334(ar7,ar5_00,ar6_00,ar7_00);
  if (iStack_64 == 4) {
    if (cVar9 == '\0') {
      in_dr0 = (double)CONCAT44(0xbf800000,fStack_14);
    }
    else {
      in_xd0 = CONCAT44(fStack_10,fStack_14);
      in_dr0 = -7.941325842067545e-251;
    }
    if (cVar8 == '\0') {
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(fVar5,SUB84(in_dr0,0) * fVar5);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar9 == '\0') {
      fStack_14 = SUB84(in_dr0,0);
    }
    else {
      fStack_14 = (float)in_xd0;
      fStack_10 = (float)((ulonglong)in_xd0 >> 0x20);
    }
  }
  FUN_8c0231c8(auStack_28,ar5_00,ar6_00,ar7_00);
  iVar6 = (int)((ulonglong)in_dr0 >> 0x20);
  iStack_68 = iVar6;
  if (cVar9 != '\0') {
    iStack_68 = SUB84(in_dr0,0);
    iStack_64 = iVar6;
  }
  FUN_8c0231c8(ar7,ar5_00,ar6_00,ar7_00);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44(uVar1,iStack_68);
  }
  else {
    in_xd0 = CONCAT44(iStack_64,uVar1);
  }
  if (cVar8 == '\0') {
    fStack_18 = SUB84(in_dr0,0) - (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    fStack_18 = SUB84(in_dr0 - in_dr0,0);
  }
  if (cVar9 == '\0') {
    uVar2 = CONCAT44(*s4,fStack_18);
  }
  else {
    fStack_18 = (float)in_xd0;
    fStack_14 = (float)((ulonglong)in_xd0 >> 0x20);
    uVar2 = *(undefined8 *)s4;
  }
  if (cVar8 != '\0' || (float)uVar2 <= (float)((ulonglong)uVar2 >> 0x20)) {
    if (cVar9 == '\0') {
      in_dr2 = (double)CONCAT44(fStack_18,SUB84(in_dr2,0));
      dVar4 = (double)CONCAT44(0xbf800000,*s4);
    }
    else {
      in_dr2 = (double)CONCAT44(fStack_14,fStack_18);
      in_xd0 = *(undefined8 *)s4;
      dVar4 = -7.941325842067545e-251;
    }
    if (cVar8 == '\0') {
      bVar7 = (float)((ulonglong)in_dr2 >> 0x20) <
              SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      bVar7 = in_dr2 < dVar4 * dVar4;
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(0xbf800000,*s4);
      }
      else {
        in_xd0 = *(undefined8 *)s4;
        dVar4 = -7.941325842067545e-251;
      }
      if (cVar8 == '\0') {
        fStack_18 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fStack_18 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar9 != '\0') {
        fStack_18 = (float)in_xd0;
        fStack_14 = (float)((ulonglong)in_xd0 >> 0x20);
      }
    }
  }
  else if (cVar9 == '\0') {
    fStack_18 = *s4;
  }
  else {
    fStack_18 = (float)*(undefined8 *)s4;
    fStack_14 = (float)((ulonglong)*(undefined8 *)s4 >> 0x20);
  }
  if (cVar9 == '\0') {
    uVar2 = CONCAT44(s4[1],fStack_14);
  }
  else {
    in_xd0 = CONCAT44(fStack_10,fStack_14);
    uVar2 = *(undefined8 *)(s4 + 1);
  }
  if (cVar8 != '\0' || (float)uVar2 <= (float)((ulonglong)uVar2 >> 0x20)) {
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(fStack_14,SUB84(in_dr2,0));
      dVar3 = (double)CONCAT44(0xbf800000,s4[1]);
    }
    else {
      dVar4 = (double)CONCAT44(fStack_10,fStack_14);
      in_xd0 = *(undefined8 *)(s4 + 1);
      dVar3 = -7.941325842067545e-251;
    }
    if (cVar8 == '\0') {
      bVar7 = (float)((ulonglong)dVar4 >> 0x20) < SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20)
      ;
    }
    else {
      bVar7 = dVar4 < dVar3 * dVar3;
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(0xbf800000,s4[1]);
      }
      else {
        in_xd0 = *(undefined8 *)(s4 + 1);
        dVar4 = -7.941325842067545e-251;
      }
      if (cVar8 == '\0') {
        fStack_14 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fStack_14 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar9 != '\0') {
        fStack_14 = (float)in_xd0;
        fStack_10 = (float)((ulonglong)in_xd0 >> 0x20);
      }
    }
  }
  else if (cVar9 == '\0') {
    fStack_14 = s4[1];
  }
  else {
    uVar2 = *(undefined8 *)(s4 + 1);
    fStack_14 = (float)uVar2;
    fStack_10 = (float)((ulonglong)uVar2 >> 0x20);
  }
  vec3_copy_8c02b5fc(s0,&fStack_18,ar6_00,ar7_00);
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_00);
  object_dtor_delete(&fStack_18,0xffffffff,ar6_00,ar7_00);
  return 0;
}



/* FUN_8c033474 @ 8c033474 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c033474(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  undefined4 uVar1;
  undefined1 *a6;
  undefined1 *a7;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [12];
  
  uVar1 = 0;
  if (*(char *)(DAT_8c033510 + ar4) != '\0') {
    (*(code *)PTR_Vec3_ctor_zero_8c033514)(auStack_14,ar5,ar6,ar7);
    a7 = auStack_c;
    a6 = auStack_10;
    (**(code **)(DAT_8c033518 + *ar7))(ar7,auStack_14,a6,a7);
    (*(code *)PTR_Vec3_sub_8c03351c)(ar6,auStack_14,a6,a7,auStack_34);
    (*(code *)PTR_Vec3_ctor_copy_8c033520)(auStack_24,auStack_34,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c033524)(auStack_34,0xffffffff,a6,a7);
    (*(code *)PTR_FUN_8c03352c)(DAT_8c033528,ar5,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c033524)(auStack_24,0xffffffff,a6,a7);
    uVar1 = (*(code *)PTR_Vec3_dtor_8c033524)(auStack_14,0xffffffff,a6,a7);
  }
  return uVar1;
}



/* FUN_8c033530 @ 8c033530 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c033538) */
/* WARNING: Removing unreachable block (ram,0x8c033530) */
/* WARNING: Removing unreachable block (ram,0x8c0335a6) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c033530(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 ar4_00;
  undefined4 ar4_01;
  int iVar4;
  undefined1 *puVar5;
  float fVar6;
  code *pcVar8;
  double dVar7;
  undefined8 in_dr4;
  undefined8 in_dr14;
  double dVar9;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined4 in_stack_00000000;
  undefined8 uStack_5c;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [4];
  double dStack_14;
  undefined4 uStack_4;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uStack_4 = (undefined4)in_dr14;
  dVar9 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr4 >> 0x20));
  Vec3_ctor_zero(auStack_18,ar5,ar6,ar7);
  puVar5 = auStack_28;
  Vec3_ctor_xyz(puVar5,ar5,ar6,ar7);
  if (cVar12 == '\0') {
    uStack_5c = CONCAT44(uStack_5c._4_4_,0x43c6c000);
  }
  else {
    uStack_5c = 0x8c01420043c6c000;
  }
  uVar3 = rand(puVar5,ar5,ar6,ar7);
  ar4_00 = rand(puVar5,ar5,ar6,ar7);
  ar4_01 = rand(puVar5,ar5,ar6,ar7);
  libgcc_divide_helper_01031c(uVar3,100,ar6,ar7);
  libgcc_divide_helper_01031c(ar4_00,100,ar6,ar7);
  uVar3 = 100;
  libgcc_divide_helper_01031c(ar4_01,100,ar6,ar7);
  FUN_8c022d04(auStack_18,uVar3,ar6,ar7);
  Vec3_normalize(auStack_18,uVar3,ar6,ar7);
  Vec3_assign(auStack_18,auStack_38,ar6,ar7);
  uVar3 = 0xffffffff;
  puVar5 = auStack_38;
  Vec3_dtor(puVar5,0xffffffff,ar6,ar7);
  uVar3 = rand(puVar5,uVar3,ar6,ar7);
  iVar4 = libgcc_divide_helper_01031c(uVar3,100,ar6,ar7);
  if (cVar12 == '\0') {
    pcVar8 = (code *)0x42c80000;
    fVar6 = (float)uStack_5c;
  }
  else {
    fVar6 = 100.0;
    pcVar8 = Vec3_scale;
    in_xd0 = uStack_5c;
  }
  if (cVar11 == '\0') {
    fVar6 = (fVar6 / (float)pcVar8) * (float)iVar4;
  }
  else {
    fVar6 = SUB84((double)iVar4 * (double)iVar4,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    uStack_5c = CONCAT44(uStack_5c._4_4_,fVar6);
    uVar1 = uStack_5c;
  }
  uStack_5c = uVar1;
  Vec3_scale(auStack_18,&uStack_5c,ar6,ar7,auStack_48);
  Vec3_add(auStack_48,auStack_28,ar6,ar7,(int)&uStack_5c + 4);
  Vec3_assign(auStack_18,(int)&uStack_5c + 4,ar6,ar7);
  Vec3_dtor((int)&uStack_5c + 4,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
  dVar7 = dStack_14;
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44(dStack_14._0_4_,fVar6);
  }
  if (cVar11 == '\0') {
    bVar10 = SUB84(dVar9,0) < (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    bVar10 = dVar9 < dVar7;
  }
  dVar2 = dStack_14;
  if (bVar10) {
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),SUB84(dVar7,0));
    }
    else {
      dVar7 = *(double *)(ar4 + 0x48);
    }
    if (cVar11 == '\0') {
      fVar6 = SUB84(dVar9,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar9 - dVar7,0);
    }
    dVar2 = in_xd14;
    if (cVar12 == '\0') {
      dStack_14 = (double)CONCAT44(dStack_14._4_4_,fVar6);
      dVar2 = dStack_14;
    }
  }
  dStack_14 = dVar2;
  Vec3_ctor_copy(in_stack_00000000,auStack_18,ar6,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return 0;
}



/* FUN_8c0336e8 @ 8c0336e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0336e8(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined8 in_xd0;
  undefined4 in_PR;
  char cVar4;
  char cVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar5 = '\0';
  cVar4 = '\0';
  uStack_c = in_PR;
  Vec3_set_zero(&uStack_18,ar5,ar6,ar7);
  FUN_8c031ab4(ar4,&uStack_18,ar6,ar7);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(uStack_18,*(undefined4 *)ar5);
  }
  else {
    in_xd0 = *ar5;
    dVar3 = (double)CONCAT44(uStack_14,uStack_18);
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    *(float *)(ar4 + 0x158) = fVar2;
    dVar3 = (double)CONCAT44(uStack_14,*(undefined4 *)((int)ar5 + 4));
  }
  else {
    *(undefined8 *)(ar4 + 0x158) = in_xd0;
    in_xd0 = *(undefined8 *)((int)ar5 + 4);
    dVar3 = (double)CONCAT44(uStack_10,uStack_14);
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    *(float *)(ar4 + 0x15c) = fVar2;
    dVar3 = (double)CONCAT44(uStack_10,*(undefined4 *)(ar5 + 1));
  }
  else {
    *(undefined8 *)(ar4 + 0x15c) = in_xd0;
    in_xd0 = ar5[1];
    dVar3 = (double)CONCAT44(uStack_c,uStack_10);
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    *(float *)(ar4 + 0x160) = fVar2;
  }
  else {
    *(undefined8 *)(ar4 + 0x160) = in_xd0;
  }
  uVar1 = object_dtor_delete(&uStack_18,0xffffffff,ar6,ar7);
  return uVar1;
}



/* CAnimBody_AdvanceFrame_wrapper_wrap_03376c @ 8c03376c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
CAnimBody_AdvanceFrame_wrapper_wrap_03376c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c03378c)(ar4 + DAT_8c033788,ar5,ar6,ar7);
  return uVar1;
}



/* CAnimBody_AdvanceFrame_wrapper_wrap_033790 @ 8c033790 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
CAnimBody_AdvanceFrame_wrapper_wrap_033790(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0337b0)(ar4 + DAT_8c0337ac,ar5,ar6,ar7);
  return uVar1;
}



/* ret_const_0_0337b4 @ 8c0337b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0337b4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* get_field_218_0337bc @ 8c0337bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_218_0337bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0337c4 + ar4);
}



/* ret_const_0_0337c8 @ 8c0337c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0337c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c0337d0 @ 8c0337d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0337d0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0338e4)(PTR_DAT_8c0338e0,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c0338ec;
  uVar2 = DAT_8c0338e8;
  (*(code *)PTR_global_list_push_8c0338f0)(uVar1,PTR_Vec3_dtor_8c0338ec,DAT_8c0338e8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0338e4)(PTR_DAT_8c0338f4,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0338ec;
  uVar2 = DAT_8c0338f8;
  (*(code *)PTR_global_list_push_8c0338f0)(uVar1,PTR_Vec3_dtor_8c0338ec,DAT_8c0338f8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0338e4)(PTR_DAT_8c0338fc,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0338ec;
  uVar2 = DAT_8c033900;
  (*(code *)PTR_global_list_push_8c0338f0)(uVar1,PTR_Vec3_dtor_8c0338ec,DAT_8c033900,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0338e4)(PTR_DAT_8c033904,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0338ec;
  uVar2 = DAT_8c033908;
  (*(code *)PTR_global_list_push_8c0338f0)(uVar1,PTR_Vec3_dtor_8c0338ec,DAT_8c033908,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0338e4)(PTR_DAT_8c033914,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0338ec;
  uVar2 = DAT_8c033918;
  (*(code *)PTR_global_list_push_8c0338f0)(uVar1,PTR_Vec3_dtor_8c0338ec,DAT_8c033918,ar7);
  uVar1 = (*(code *)PTR_FUN_8c033928)(PTR_DAT_8c033924,puVar3,uVar2,ar7);
  puVar3 = PTR_free_if_nonnull_wrap_102790_8c033930;
  uVar2 = DAT_8c03392c;
  (*(code *)PTR_global_list_push_8c0338f0)
            (uVar1,PTR_free_if_nonnull_wrap_102790_8c033930,DAT_8c03392c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0338e4)(DAT_8c03393c,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0338ec;
  uVar2 = DAT_8c033940;
  (*(code *)PTR_global_list_push_8c0338f0)(uVar1,PTR_Vec3_dtor_8c0338ec,DAT_8c033940,ar7);
  uVar2 = (*(code *)PTR_FUN_8c033928)(PTR_DAT_8c03394c,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c0338f0)
                    (uVar2,PTR_free_if_nonnull_wrap_102790_8c033930,DAT_8c033950,ar7);
  return uVar2;
}



/* FUN_8c033954 @ 8c033954 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c033954(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = PTR_DAT_8c033970;
  (*(code *)PTR_FUN_8c033974)(ar4,ar5,ar6,ar7);
  return ar4;
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



/* FUN_8c0339b0 @ 8c0339b0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c033a5c) */
/* WARNING: Removing unreachable block (ram,0x8c033a50) */
/* WARNING: Removing unreachable block (ram,0x8c033a44) */
/* WARNING: Removing unreachable block (ram,0x8c033a2c) */
/* WARNING: Removing unreachable block (ram,0x8c033a20) */
/* WARNING: Removing unreachable block (ram,0x8c033a04) */
/* WARNING: Removing unreachable block (ram,0x8c0339f4) */
/* WARNING: Removing unreachable block (ram,0x8c0339ea) */
/* WARNING: Removing unreachable block (ram,0x8c0339c4) */
/* WARNING: Removing unreachable block (ram,0x8c0339f2) */
/* WARNING: Removing unreachable block (ram,0x8c0339fc) */
/* WARNING: Removing unreachable block (ram,0x8c033a16) */
/* WARNING: Removing unreachable block (ram,0x8c033a22) */
/* WARNING: Removing unreachable block (ram,0x8c033a2e) */
/* WARNING: Removing unreachable block (ram,0x8c033a4e) */
/* WARNING: Removing unreachable block (ram,0x8c033a5a) */
/* WARNING: Removing unreachable block (ram,0x8c033a64) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0339b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x1c) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x24) = 1;
  *(undefined1 *)(ar4 + 0x54) = 0;
  *(undefined4 *)(ar4 + 0x58) = 0;
  *(undefined4 *)(ar4 + 100) = 0x41f00000;
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 0x5c) = 0;
  *(undefined4 *)(ar4 + 0x38) = 0;
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x3c) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0;
  *(undefined4 *)(ar4 + 0x50) = 0;
  *(undefined4 *)(ar4 + 0x4c) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0x3f800000;
  *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x70) = 0;
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined2 *)(ar4 + 0xc) = 0;
  *(undefined2 *)(ar4 + 0xe) = 0;
  return 0;
}



/* s_CAnimBody_SetAnimation_033a94 @ 8c033a8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CAnimBody_SetAnimation_033a94(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  
  if (*(int *)(ar4 + 0x1c) == ar5) {
    *(undefined4 *)(ar4 + 0x70) = 0;
    uVar1 = 6;
  }
  else if (ar6 == -1) {
    *(int *)(ar4 + 0x1c) = ar5;
    *(undefined4 *)(ar4 + 0x28) = ar7;
    (*(code *)PTR_FUN_8c033b88)(ar4,ar5,0xffffffff,ar7);
    *(undefined1 *)(ar4 + 0x54) = 0;
    *(undefined4 *)(ar4 + 0x70) = 0;
    uVar1 = 0;
  }
  else if ((*(int *)(ar4 + 0x2c) < 0) || (ar6 == 1)) {
    if (*(char *)(ar4 + 0x54) == '\x01') {
      *(undefined4 *)(ar4 + 0x70) = 0;
      uVar1 = 3;
    }
    else if (*(int *)(ar4 + 0x10) + -1 < ar5) {
      (*(code *)PTR_report_error_message_8c033b90)
                (PTR_s_Invalid_AnimationID___8c033b8c,PTR_s_Invalid_AnimationID___8c033b8c + 0x16,1,
                 2);
      uVar1 = 4;
    }
    else if (ar6 == 0) {
      if (*(int *)(ar4 + 0x70) == 0) {
        *(int *)(ar4 + 0x2c) = ar5;
        *(undefined4 *)(ar4 + 0x30) = ar7;
        uVar1 = 1;
      }
      else {
        *(int *)(ar4 + 0x1c) = ar5;
        *(undefined4 *)(ar4 + 0x28) = ar7;
        uVar1 = 0;
      }
    }
    else if (ar6 == 1) {
      ar5_00 = ar5;
      (*(code *)PTR_s_CAnimBody_SetInterpolate_033f7e_8c033b94)(ar4,ar5,1,ar7);
      *(int *)(ar4 + 0x1c) = ar5;
      (*(code *)PTR_FUN_8c033b88)(ar4,ar5_00,ar6,ar7);
      uVar1 = 2;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else {
    *(undefined4 *)(ar4 + 0x70) = 0;
    uVar1 = 5;
  }
  return uVar1;
}



/* s_CAnimBody_AdvanceFrame_033ba0 @ 8c033b98 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c033ba6) */
/* WARNING: Removing unreachable block (ram,0x8c033b98) */
/* WARNING: Removing unreachable block (ram,0x8c033cd4) */
/* WARNING: Unknown calling convention */

undefined4 s_CAnimBody_AdvanceFrame_033ba0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 in_fr1;
  float fVar3;
  double dVar4;
  float in_fr4;
  undefined4 in_fr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  if (*(int *)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    report_error_message(s_Motion_is_NO_SET__8c132ce8,s_CAnimBody__AdvanceFrame___8c132cfa,1,2);
    *(undefined4 *)(ar4 + 0x1c) = 0;
  }
  uVar2 = 0;
  if (cVar5 == '\0') {
    dVar4 = (double)CONCAT44((float)*(int *)(ar4 + 0x24),in_fr1);
  }
  else {
    dVar4 = (double)*(int *)(ar4 + 0x24);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),in_fr4);
    in_xd14 = in_xd0;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x20),fVar3);
  }
  else {
    dVar4 = *(double *)(ar4 + 0x20);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(ar4 + 0x20) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x20) = in_xd14;
  }
  ar5_00 = *(undefined4 *)(ar4 + 0x1c);
  iVar1 = s_Check_This_Motion_Data_0314fc(ar4,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x70) = 0;
  if (*(int *)(ar4 + 0x28) == 0) {
    if (cVar6 == '\0') {
      fVar3 = *(float *)(ar4 + 0x20);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x20);
    }
    if (cVar5 == '\0') {
      dVar4 = (double)CONCAT44((float)(iVar1 + -1),fVar3);
    }
    else {
      dVar4 = (double)(iVar1 + -1);
    }
    if (cVar5 == '\0' && (float)((ulonglong)dVar4 >> 0x20) < SUB84(dVar4,0)) {
      FUN_8c033d34(ar4,ar5_00,ar6,ar7);
      uVar2 = 1;
      *(undefined4 *)(ar4 + 0x70) = 1;
      if (*(int *)(ar4 + 0x2c) != -1) {
        *(undefined4 *)(ar4 + 0x1c) = *(undefined4 *)(ar4 + 0x2c);
        *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x30);
        *(undefined4 *)(ar4 + 0x2c) = 0xffffffff;
        uVar2 = 2;
        *(undefined4 *)(ar4 + 0x70) = 0;
      }
    }
    if (*(char *)(ar4 + 0x54) != '\0') {
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 0x60));
      }
      else {
        in_xd14 = *(undefined8 *)(ar4 + 0x60);
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) * in_fr4;
      }
      else {
        fVar3 = SUB84(dVar4 * (double)CONCAT44(in_fr14,in_fr4),0);
      }
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x58),fVar3);
      }
      else {
        dVar4 = *(double *)(ar4 + 0x58);
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar6 == '\0') {
        *(float *)(ar4 + 0x58) = fVar3;
      }
      else {
        *(undefined8 *)(ar4 + 0x58) = in_xd14;
      }
      uVar2 = 3;
      *(undefined4 *)(ar4 + 0x70) = 0;
      if (cVar6 == '\0') {
        fVar3 = *(float *)(ar4 + 0x58);
      }
      if (cVar5 != '\0' || 1.0 <= fVar3) {
        *(undefined1 *)(ar4 + 0x54) = 0;
        if (cVar6 == '\0') {
          *(undefined4 *)(ar4 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x58) = (ulonglong)(uint)fVar3;
        }
        uVar2 = 4;
        *(undefined4 *)(ar4 + 0x70) = 1;
      }
    }
  }
  else if (*(int *)(ar4 + 0x28) == 1) {
    if (cVar6 == '\0') {
      fVar3 = *(float *)(ar4 + 0x20);
    }
    if (cVar5 == '\0') {
      dVar4 = (double)CONCAT44((float)(iVar1 + -1),fVar3);
    }
    else {
      dVar4 = (double)(iVar1 + -1);
    }
    if (cVar5 != '\0' || SUB84(dVar4,0) <= (float)((ulonglong)dVar4 >> 0x20)) {
      if (cVar6 == '\0') {
        dVar4 = (double)(ulonglong)*(uint *)(ar4 + 0x20);
      }
      fVar3 = SUB84(dVar4,0);
      if (cVar5 != '\0' || fVar3 <= 0.0) {
        if (cVar6 == '\0') {
          fVar3 = *(float *)(ar4 + 0x20);
        }
        if (fVar3 != 0.0) {
          if (cVar6 == '\0') {
            dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x20),fVar3);
          }
          else {
            dVar4 = *(double *)(ar4 + 0x20);
          }
          if (cVar5 == '\0') {
            dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + in_fr4,SUB84(dVar4,0));
          }
          else {
            dVar4 = dVar4 + (double)CONCAT44(in_fr14,in_fr4);
          }
          if (cVar6 == '\0') {
            *(int *)(ar4 + 0x20) = (int)((ulonglong)dVar4 >> 0x20);
          }
          else {
            *(double *)(ar4 + 0x20) = dVar4;
          }
        }
        *(undefined4 *)(ar4 + 0x24) = 1;
        uVar2 = 1;
        *(undefined4 *)(ar4 + 0x70) = 1;
        if (*(int *)(ar4 + 0x2c) != -1) {
          *(undefined4 *)(ar4 + 0x1c) = *(undefined4 *)(ar4 + 0x2c);
          *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x30);
          *(undefined4 *)(ar4 + 0x2c) = 0xffffffff;
          uVar2 = 2;
          *(undefined4 *)(ar4 + 0x70) = 0;
        }
      }
    }
    else {
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)(ar4 + 0x20);
      }
      if (cVar5 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - in_fr4,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - (double)CONCAT44(in_fr14,in_fr4);
      }
      if (cVar6 == '\0') {
        *(int *)(ar4 + 0x20) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x20) = dVar4;
      }
      *(undefined4 *)(ar4 + 0x24) = 0xffffffff;
      uVar2 = 5;
    }
  }
  return uVar2;
}



/* FUN_8c033d34 @ 8c033d34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c033d34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double in_dr0;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = s_Check_This_Motion_Data_0314fc(ar4,*(undefined4 *)(ar4 + 0x1c),ar6,ar7);
  while( true ) {
    uVar3 = SUB84(in_dr0,0);
    if (cVar6 == '\0') {
      uVar3 = *(undefined4 *)(ar4 + 0x20);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x20);
    }
    iVar2 = iVar1 + -1;
    if (cVar5 == '\0') {
      dVar4 = (double)CONCAT44((float)iVar2,uVar3);
    }
    else {
      dVar4 = (double)iVar2;
    }
    if (cVar5 != '\0' || SUB84(dVar4,0) <= (float)((ulonglong)dVar4 >> 0x20)) break;
    if (cVar6 == '\0') {
      dVar4 = (double)(ulonglong)*(uint *)(ar4 + 0x20);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x20);
    }
    if (cVar5 == '\0') {
      in_dr0 = (double)(ulonglong)(uint)(SUB84(dVar4,0) - (float)iVar1);
    }
    else {
      in_dr0 = (double)iVar1 - (double)iVar1;
    }
    if (cVar6 == '\0') {
      *(int *)(ar4 + 0x20) = SUB84(in_dr0,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x20) = in_xd0;
    }
  }
  return iVar2;
}



/* s_CAnimBody_AdvanceFrame_033d90 @ 8c033d88 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c033d9a) */
/* WARNING: Removing unreachable block (ram,0x8c033d8a) */
/* WARNING: Removing unreachable block (ram,0x8c033d88) */
/* WARNING: Removing unreachable block (ram,0x8c033d96) */
/* WARNING: Removing unreachable block (ram,0x8c033d9c) */
/* WARNING: Unknown calling convention */

undefined4 s_CAnimBody_AdvanceFrame_033d90(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  double in_xd0;
  double dVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined4 uStack_1c;
  
  cVar8 = '\0';
  cVar7 = '\0';
  dVar4 = (double)CONCAT44(in_fr4,in_fr6);
  if (*(int *)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    ar5 = s_CAnimBody__AdvanceFrame___8c132cfa;
    report_error_message(s_Motion_is_NO_SET__8c132ce8,s_CAnimBody__AdvanceFrame___8c132cfa,1,2);
    *(undefined4 *)(ar4 + 0x1c) = 0;
  }
  *(undefined4 *)(ar4 + 0x70) = 0;
  uVar1 = 0;
  if (cVar7 == '\0') {
    dVar3 = (double)CONCAT44((float)*(int *)(ar4 + 0x24),in_fr1);
  }
  else {
    dVar3 = (double)*(int *)(ar4 + 0x24);
  }
  dVar5 = dVar4;
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),(int)((ulonglong)dVar4 >> 0x20));
    dVar5 = in_xd0;
  }
  if (cVar7 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x20),fVar2);
  }
  else {
    dVar3 = *(double *)(ar4 + 0x20);
  }
  if (cVar7 == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x20) = fVar2;
  }
  else {
    *(double *)(ar4 + 0x20) = dVar5;
  }
  FUN_8c033d34(ar4,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x20),fVar2);
  }
  else {
    dVar3 = *(double *)(ar4 + 0x20);
  }
  fVar2 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar7 == '\0') {
    bVar6 = fVar2 < SUB84(dVar4,0);
  }
  else {
    bVar6 = dVar3 < dVar4;
  }
  if (!bVar6) {
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(fVar2,*(undefined4 *)(ar4 + 0x20));
    }
    else {
      dVar5 = *(double *)(ar4 + 0x20);
    }
    if (cVar7 == '\0') {
      fVar2 = SUB84(dVar3,0) - SUB84(dVar4,0);
    }
    else {
      fVar2 = SUB84(dVar3 - dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(in_fr5,fVar2);
    }
    else {
      dVar3 = (double)CONCAT44(uStack_1c,in_fr5);
    }
    if (cVar7 == '\0') {
      fVar2 = (float)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(fVar2,SUB84(dVar3,0) + fVar2);
    }
    else {
      dVar3 = dVar3 + dVar3;
    }
    if (cVar8 == '\0') {
      *(int *)(ar4 + 0x20) = SUB84(dVar3,0);
    }
    else {
      *(double *)(ar4 + 0x20) = dVar5;
    }
    uVar1 = 7;
  }
  if (*(char *)(ar4 + 0x54) != '\0') {
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),*(undefined4 *)(ar4 + 0x60));
    }
    else {
      dVar5 = *(double *)(ar4 + 0x60);
    }
    if (cVar7 == '\0') {
      fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x58),fVar2);
    }
    else {
      dVar4 = *(double *)(ar4 + 0x58);
    }
    if (cVar7 == '\0') {
      fVar2 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x58) = fVar2;
    }
    else {
      *(double *)(ar4 + 0x58) = dVar5;
    }
    uVar1 = 3;
    if (cVar8 == '\0') {
      fVar2 = *(float *)(ar4 + 0x58);
    }
    if (cVar7 != '\0' || 1.0 <= fVar2) {
      *(undefined1 *)(ar4 + 0x54) = 0;
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x58) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x58) = (ulonglong)(uint)fVar2;
      }
      uVar1 = 4;
    }
  }
  return uVar1;
}



/* s_CAnimBody_SetFrame_033e6e @ 8c033e68 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c033e76) */
/* WARNING: Unknown calling convention */

undefined4 s_CAnimBody_SetFrame_033e6e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 in_fr1;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined4 in_fr4;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  undefined4 uStack_14;
  
  cVar8 = '\0';
  cVar7 = '\0';
  if (*(int *)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    report_error_message(s_Motion_is_NO_SET__8c132ce8,s_CAnimBody__SetFrame___8c132d31,1,2);
    *(undefined4 *)(ar4 + 0x1c) = 0;
  }
  *(undefined4 *)(ar4 + 0x70) = 0;
  uVar2 = 0;
  if (cVar8 == '\0') {
    uVar5 = CONCAT44(in_fr4,in_fr1);
    *(undefined4 *)(ar4 + 0x20) = in_fr4;
  }
  else {
    uVar5 = CONCAT44(uStack_14,in_fr4);
    *(undefined8 *)(ar4 + 0x20) = uVar5;
  }
  uVar4 = (undefined4)uVar5;
  ar5_00 = *(undefined4 *)(ar4 + 0x1c);
  iVar1 = s_Check_This_Motion_Data_0314fc(ar4,ar5_00,ar6,ar7);
  if (*(char *)(ar4 + 0x54) == '\0') {
    if (cVar8 == '\0') {
      uVar4 = *(undefined4 *)(ar4 + 0x20);
    }
    if (cVar7 == '\0') {
      dVar6 = (double)CONCAT44((float)(iVar1 + -1),uVar4);
    }
    else {
      dVar6 = (double)(iVar1 + -1);
    }
    if (cVar7 == '\0' && (float)((ulonglong)dVar6 >> 0x20) < SUB84(dVar6,0)) {
      FUN_8c033d34(ar4,ar5_00,ar6,ar7);
      uVar2 = 1;
      *(undefined4 *)(ar4 + 0x70) = 1;
      if (*(int *)(ar4 + 0x2c) != -1) {
        *(undefined4 *)(ar4 + 0x1c) = *(undefined4 *)(ar4 + 0x2c);
        *(undefined4 *)(ar4 + 0x2c) = 0xffffffff;
        uVar2 = 2;
        *(undefined4 *)(ar4 + 0x70) = 0;
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(ar4 + 0x20));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x20);
      dVar6 = *(double *)(ar4 + 0x5c);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 - dVar6,0);
    }
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 100),fVar3);
    }
    else {
      dVar6 = *(double *)(ar4 + 100);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x58) = fVar3;
    }
    else {
      *(undefined8 *)(ar4 + 0x58) = in_xd0;
    }
    uVar2 = 3;
    if (cVar8 == '\0') {
      fVar3 = *(float *)(ar4 + 0x58);
    }
    if (cVar7 != '\0' || 1.0 <= fVar3) {
      *(undefined1 *)(ar4 + 0x54) = 0;
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x5c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x5c) = (ulonglong)(uint)fVar3;
      }
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x58) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x58) = (ulonglong)(uint)fVar3;
      }
      FUN_8c033d34(ar4,ar5_00,ar6,ar7);
      uVar2 = 4;
      *(undefined4 *)(ar4 + 0x70) = 1;
    }
  }
  return uVar2;
}



/* s_CAnimBody_SetInterpolate_033f7e @ 8c033f74 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c033f86) */
/* WARNING: Removing unreachable block (ram,0x8c033f74) */
/* WARNING: Removing unreachable block (ram,0x8c03403a) */
/* WARNING: Unknown calling convention */

undefined4 s_CAnimBody_SetInterpolate_033f7e(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  char *ar5_00;
  undefined4 in_fr1;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  ulonglong uVar6;
  float in_fr4;
  undefined8 in_xd0;
  undefined8 in_xd14;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  if (*(int *)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    ar5_00 = s_CAnimBody__SetInterpolate___8c132d47;
    report_error_message(s_Motion_is_NO_SET__8c132ce8,s_CAnimBody__SetInterpolate___8c132d47,1,2);
    *(undefined4 *)(ar4 + 0x1c) = 0;
  }
  uVar1 = deref_u32(*(int *)(ar4 + 0x14) + *(int *)(ar4 + 0x1c) * 4,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x34) = uVar1;
  uVar1 = deref_u32(*(int *)(ar4 + 0x14) + (int)ar5 * 4,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x38) = uVar1;
  uVar1 = FUN_8c026d74(*(int *)(ar4 + 0x18) + *(int *)(ar4 + 0x1c) * 4,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x44) = uVar1;
  uVar1 = FUN_8c026d74(*(int *)(ar4 + 0x18) + (int)ar5 * 4,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x48) = uVar1;
  FUN_8c033d34(ar4,ar5_00,ar6,ar7);
  if (cVar8 == '\0') {
    uVar1 = *(undefined4 *)(ar4 + 0x20);
    *(undefined4 *)(ar4 + 0x4c) = uVar1;
    *(undefined4 *)(ar4 + 0x3c) = uVar1;
    dVar5 = (double)CONCAT44(0xbf800000,in_fr1);
  }
  else {
    uVar4 = *(undefined8 *)(ar4 + 0x20);
    *(undefined8 *)(ar4 + 0x4c) = uVar4;
    *(undefined8 *)(ar4 + 0x3c) = uVar4;
    dVar5 = -8.32867096114109e-251;
  }
  if (in_fr4 == (float)((ulonglong)dVar5 >> 0x20)) {
    if (cVar8 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 100),*(undefined4 *)(ar4 + 0x20));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x20);
      dVar5 = *(double *)(ar4 + 100);
    }
    if (cVar7 == '\0') {
      dVar5 = (double)(ulonglong)(uint)(SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20));
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (cVar8 == '\0') {
      *(int *)(ar4 + 0x40) = SUB84(dVar5,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x40) = in_xd0;
    }
    iVar2 = s_Check_This_Motion_Data_0314fc(ar4,*(undefined4 *)(ar4 + 0x1c),ar6,ar7);
    while( true ) {
      uVar1 = SUB84(dVar5,0);
      if (cVar8 == '\0') {
        uVar1 = *(undefined4 *)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44((float)(iVar2 + -1),uVar1);
      }
      else {
        dVar5 = (double)(iVar2 + -1);
      }
      if (cVar7 != '\0' || SUB84(dVar5,0) <= (float)((ulonglong)dVar5 >> 0x20)) break;
      if (cVar8 == '\0') {
        dVar5 = (double)(ulonglong)*(uint *)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)(ulonglong)(uint)(SUB84(dVar5,0) - (float)iVar2);
      }
      else {
        dVar5 = (double)iVar2 - (double)iVar2;
      }
      if (cVar8 == '\0') {
        *(int *)(ar4 + 0x40) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x40) = in_xd0;
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x40) = in_fr4;
    }
    else {
      *(undefined8 *)(ar4 + 0x40) = in_xd14;
    }
    iVar2 = s_Check_This_Motion_Data_0314fc(ar4,*(undefined4 *)(ar4 + 0x1c),ar6,ar7);
    while( true ) {
      uVar1 = SUB84(dVar5,0);
      if (cVar8 == '\0') {
        uVar1 = *(undefined4 *)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44((float)(iVar2 + -1),uVar1);
      }
      else {
        dVar5 = (double)(iVar2 + -1);
      }
      if (cVar7 != '\0' || SUB84(dVar5,0) <= (float)((ulonglong)dVar5 >> 0x20)) break;
      if (cVar8 == '\0') {
        dVar5 = (double)(ulonglong)*(uint *)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)(ulonglong)(uint)(SUB84(dVar5,0) - (float)iVar2);
      }
      else {
        dVar5 = (double)iVar2 - (double)iVar2;
      }
      if (cVar8 == '\0') {
        *(int *)(ar4 + 0x40) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x40) = in_xd0;
      }
    }
    if (cVar8 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 100),*(undefined4 *)(ar4 + 0x40));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x40);
      dVar5 = *(double *)(ar4 + 100);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x20) = fVar3;
    }
    else {
      *(undefined8 *)(ar4 + 0x20) = in_xd0;
    }
  }
  if (cVar8 == '\0') {
    *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar4 + 0x40);
    *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar4 + 0x20);
    uVar6 = (ulonglong)*(uint *)(ar4 + 100);
  }
  else {
    *(undefined8 *)(ar4 + 0x50) = *(undefined8 *)(ar4 + 0x40);
    uVar6 = *(ulonglong *)(ar4 + 0x20);
    *(ulonglong *)(ar4 + 0x5c) = uVar6;
  }
  fVar3 = (float)uVar6;
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(1.0 / fVar3,fVar3);
  }
  else {
    dVar5 = (double)CONCAT44(0x3f800000,fVar3) / (double)CONCAT44(0x3f800000,fVar3);
  }
  if (cVar8 == '\0') {
    *(int *)(ar4 + 0x60) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x60) = dVar5;
  }
  if (cVar8 == '\0') {
    *(undefined4 *)(ar4 + 0x58) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x58) = (ulonglong)dVar5 & 0xffffffff;
  }
  *(undefined1 *)(ar4 + 0x54) = 1;
  return 0x54;
}



/* FUN_8c034148 @ 8c034148 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c034148(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar2 = ar5;
  if (*(int *)(ar4 + 0x6c) == -1) {
    ar7 = 0;
    ar6 = 0;
    uVar1 = s_CAnimBody_SetAnimation_033a94(ar4,ar5,0,0);
    *(undefined4 *)(ar4 + 0x6c) = uVar1;
  }
  iVar3 = *(int *)(ar4 + 0x6c);
  if ((iVar3 < 7) && (-1 < iVar3)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar3) {
    case 0:
      uVar4 = 2;
      *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
      break;
    case 1:
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4,uVar2,ar6,ar7);
      if (iVar3 == 2) {
        uVar4 = 1;
        *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
      }
      break;
    case 3:
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4,uVar2,ar6,ar7);
      if (iVar3 == 4) {
        uVar2 = s_CAnimBody_SetAnimation_033a94(ar4,ar5,0,0);
        *(undefined4 *)(ar4 + 0x6c) = uVar2;
      }
      break;
    case 5:
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4,uVar2,ar6,ar7);
      if (iVar3 == 2) {
        uVar2 = s_CAnimBody_SetAnimation_033a94(ar4,ar5,0,0);
        *(undefined4 *)(ar4 + 0x6c) = uVar2;
      }
      break;
    case 6:
      if (*(int *)(ar4 + 0x2c) == -1) {
        uVar4 = 2;
        *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
      }
      else {
        iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4,uVar2,ar6,ar7);
        if (iVar3 == 2) {
          uVar2 = s_CAnimBody_SetAnimation_033a94(ar4,ar5,0,0);
          *(undefined4 *)(ar4 + 0x6c) = uVar2;
        }
      }
    }
  }
  return uVar4;
}



/* FUN_8c0342ac @ 8c0342ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0342ac(undefined4 ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*ar5;
  for (iVar2 = 0; iVar2 < ar6; iVar2 = iVar2 + 1) {
    piVar1 = piVar1 + 6;
  }
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}



/* FUN_8c0342d8 @ 8c0342d8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0342d8) */
/* WARNING: Removing unreachable block (ram,0x8c0342e4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0342d8(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  float in_fr4;
  undefined4 in_fr14;
  bool bVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined4 in_stack_00000000;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  cVar4 = '\0';
  cVar3 = '\0';
  Vec3_ctor_xyz(&iStack_20,ar5,ar6,ar7);
  if (ar5 == (int *)0x0) {
    Vec3_ctor_copy(in_stack_00000000,&iStack_20,ar6,ar7);
    Vec3_dtor(&iStack_20,0xffffffff,ar6,ar7);
  }
  else {
    if (cVar3 == '\0') {
      bVar1 = in_fr4 < 0.0;
    }
    else {
      bVar1 = (double)CONCAT44(in_fr14,in_fr4) < (double)(ulonglong)in_fr1;
    }
    if (bVar1) {
      in_fr4 = 0.0;
    }
    while( true ) {
      if (cVar3 == '\0') {
        iVar2 = (int)in_fr4;
      }
      else {
        iVar2 = (int)(double)CONCAT44(in_fr14,in_fr4);
      }
      if (iVar2 <= *ar5) break;
      ar5 = ar5 + 4;
    }
    if (cVar3 == '\0') {
      iVar2 = (int)in_fr4;
    }
    else {
      iVar2 = (int)(double)CONCAT44(in_fr14,in_fr4);
    }
    if (*ar5 != iVar2) {
      ar5 = ar5 + -4;
    }
    if (cVar4 == '\0') {
      iStack_20 = ar5[1];
      iStack_1c = ar5[2];
      iStack_18 = ar5[3];
    }
    else {
      iStack_20 = (int)*(undefined8 *)(ar5 + 1);
      iStack_1c = (int)*(undefined8 *)(ar5 + 2);
      iStack_18 = (int)*(undefined8 *)(ar5 + 3);
      uStack_14 = (undefined4)((ulonglong)*(undefined8 *)(ar5 + 3) >> 0x20);
    }
    Vec3_ctor_copy(in_stack_00000000,&iStack_20,ar6,ar7);
    Vec3_dtor(&iStack_20,0xffffffff,ar6,ar7);
  }
  return 0;
}



/* FUN_8c034384 @ 8c034384 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c03448a) */
/* WARNING: Removing unreachable block (ram,0x8c034436) */
/* WARNING: Removing unreachable block (ram,0x8c0343ea) */
/* WARNING: Removing unreachable block (ram,0x8c034392) */
/* WARNING: Removing unreachable block (ram,0x8c034384) */
/* WARNING: Removing unreachable block (ram,0x8c0343d4) */
/* WARNING: Removing unreachable block (ram,0x8c0343f8) */
/* WARNING: Removing unreachable block (ram,0x8c034460) */
/* WARNING: Removing unreachable block (ram,0x8c0344f2) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c034384(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint in_fr1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined4 in_fr3;
  double dVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_fr4;
  undefined8 in_dr14;
  double dVar9;
  undefined8 in_xd0;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_xd14;
  bool bVar12;
  char cVar13;
  char cVar14;
  undefined4 in_stack_00000000;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  
  cVar14 = '\0';
  cVar13 = '\0';
  uStack_10 = 1;
  dVar9 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  Vec3_ctor_xyz(&fStack_24,ar5,ar6,ar7);
  if (ar5 == (int *)0x0) {
    Vec3_ctor_copy(in_stack_00000000,&fStack_24,ar6,ar7);
    Vec3_dtor(&fStack_24,0xffffffff,ar6,ar7);
  }
  else {
    if (cVar13 == '\0') {
      bVar12 = SUB84(dVar9,0) < 0.0;
    }
    else {
      bVar12 = dVar9 < (double)(ulonglong)in_fr1;
    }
    if (bVar12) {
      dVar9 = (double)((ulonglong)dVar9 & 0xffffffff00000000);
    }
    while( true ) {
      fVar2 = (float)*ar5;
      dVar4 = (double)(ulonglong)(uint)fVar2;
      if (cVar13 == '\0' && fVar2 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar2);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar2 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar2,SUB84(dVar4,0) + fVar2);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      fVar2 = SUB84(dVar9,0);
      if (cVar13 == '\0') {
        bVar12 = SUB84(dVar4,0) < fVar2;
      }
      else {
        bVar12 = dVar4 < dVar9;
      }
      if (!bVar12) break;
      ar5 = ar5 + 4;
    }
    fVar3 = (float)*ar5;
    if (cVar13 == '\0' && fVar3 < 0.0) {
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(0x4f800000,fVar3);
      }
      else {
        dVar4 = 2.9939313207017074e-78;
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
    }
    if (fVar3 == fVar2) {
      if (cVar14 == '\0') {
        fStack_24 = (float)ar5[1];
        fStack_20 = (float)ar5[2];
        fStack_1c = (float)ar5[3];
      }
      else {
        fStack_24 = (float)*(undefined8 *)(ar5 + 1);
        fStack_20 = (float)*(undefined8 *)(ar5 + 2);
        fStack_1c = (float)*(undefined8 *)(ar5 + 3);
        uStack_18 = (undefined4)((ulonglong)*(undefined8 *)(ar5 + 3) >> 0x20);
      }
    }
    else {
      piVar1 = ar5 + -4;
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(ar5[1],in_fr3);
        dVar5 = (double)CONCAT44(ar5[-3],fVar3);
      }
      else {
        dVar4 = *(double *)(ar5 + 1);
        dVar5 = *(double *)(ar5 + -3);
      }
      if (cVar13 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) -
                                 (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar5 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar5 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar5 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = (float)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) + fVar3);
        }
        else {
          dVar5 = dVar5 + dVar5;
        }
      }
      if (cVar13 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) / SUB84(dVar5,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar5;
      }
      fStack_24 = SUB84(dVar4,0);
      if (cVar14 == '\0') {
        dVar6 = (double)CONCAT44(ar5[2],fStack_24);
        dVar5 = (double)CONCAT44(ar5[-2],SUB84(dVar5,0));
        fStack_24 = (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        dVar6 = *(double *)(ar5 + 2);
        dVar5 = *(double *)(ar5 + -2);
      }
      if (cVar13 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) -
                                 (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar5;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) / SUB84(dVar4,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 / dVar4;
      }
      fStack_20 = SUB84(dVar6,0);
      if (cVar14 == '\0') {
        dVar5 = (double)CONCAT44(ar5[3],fStack_20);
        dVar4 = (double)CONCAT44(ar5[-1],SUB84(dVar4,0));
        fStack_20 = (float)(int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        dVar5 = *(double *)(ar5 + 3);
        dVar4 = *(double *)(ar5 + -1);
      }
      if (cVar13 == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) -
                                 (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar4;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar4,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar4;
      }
      uVar7 = (undefined4)((ulonglong)dVar5 >> 0x20);
      fStack_1c = (float)SUB84(dVar5,0);
      if (cVar14 == '\0') {
        fStack_1c = (float)uVar7;
        uVar7 = uStack_18;
      }
      uStack_18 = uVar7;
      if (cVar13 == '\0') {
        dVar5 = (double)CONCAT44((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar5 = (double)*piVar1;
      }
      dVar6 = (double)((ulonglong)dVar4 & 0xffffffff);
      fVar3 = (float)((ulonglong)dVar5 >> 0x20);
      if (cVar13 == '\0') {
        bVar12 = fVar3 < 0.0;
      }
      else {
        bVar12 = dVar5 < dVar6;
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          dVar6 = (double)CONCAT44(0x4f800000,SUB84(dVar4,0));
        }
        else {
          dVar6 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          dVar5 = (double)CONCAT44(fVar3 + (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
        }
        else {
          dVar5 = dVar5 + dVar6;
        }
      }
      uVar10 = in_xd14;
      if (cVar14 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar2);
        uVar10 = in_xd0;
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar6,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(fStack_24,fVar3);
      }
      else {
        dVar4 = (double)CONCAT44(fStack_20,fStack_24);
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(ar5[-3],fVar3);
      }
      else {
        dVar4 = *(double *)(ar5 + -3);
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      fStack_24 = fVar3;
      if (cVar14 != '\0') {
        fStack_24 = (float)uVar10;
        fStack_20 = (float)((ulonglong)uVar10 >> 0x20);
      }
      if (cVar13 == '\0') {
        dVar4 = (double)CONCAT44((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar4 = (double)*piVar1;
      }
      dVar5 = (double)(ulonglong)(uint)fVar3;
      fVar8 = (float)((ulonglong)dVar4 >> 0x20);
      if (cVar13 == '\0') {
        bVar12 = fVar8 < 0.0;
      }
      else {
        bVar12 = dVar4 < dVar5;
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          dVar5 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar5 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          dVar4 = (double)CONCAT44(fVar8 + (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar4,0));
        }
        else {
          dVar4 = dVar4 + dVar5;
        }
      }
      uVar11 = in_xd14;
      if (cVar14 == '\0') {
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),fVar2);
        uVar11 = uVar10;
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 - dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(fStack_20,fVar3);
      }
      else {
        dVar4 = (double)CONCAT44(fStack_1c,fStack_20);
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(ar5[-2],fVar3);
      }
      else {
        dVar4 = *(double *)(ar5 + -2);
      }
      if (cVar13 == '\0') {
        fStack_20 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fStack_20 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar14 != '\0') {
        fStack_20 = (float)uVar11;
        fStack_1c = (float)((ulonglong)uVar11 >> 0x20);
      }
      fVar3 = (float)*piVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),fVar2 - SUB84(dVar4,0));
      }
      else {
        dVar9 = dVar9 - dVar4;
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(fStack_1c,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(uStack_18,fStack_1c);
      }
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                                 SUB84(dVar9,0) * (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        dVar9 = dVar9 * dVar4;
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(ar5[-1],SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)(ar5 + -1);
      }
      if (cVar13 == '\0') {
        fStack_1c = SUB84(dVar9,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fStack_1c = SUB84(dVar9 + dVar4,0);
      }
      if (cVar14 != '\0') {
        fStack_1c = (float)in_xd14;
        uStack_18 = (undefined4)((ulonglong)in_xd14 >> 0x20);
      }
    }
    Vec3_ctor_copy(in_stack_00000000,&fStack_24,ar6,ar7);
    Vec3_dtor(&fStack_24,0xffffffff,ar6,ar7);
  }
  return 0;
}



/* FUN_8c034548 @ 8c034548 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c034548(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *ar5;
  for (iVar2 = 0; iVar2 < ar6; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + 0x18;
  }
  iVar1 = *(int *)(iVar1 + 4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



/* FUN_8c034574 @ 8c034574 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0345ee) */
/* WARNING: Removing unreachable block (ram,0x8c034580) */
/* WARNING: Removing unreachable block (ram,0x8c034574) */
/* WARNING: Removing unreachable block (ram,0x8c0345d8) */
/* WARNING: Removing unreachable block (ram,0x8c034604) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c034574(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  uint in_fr1;
  float fVar2;
  double dVar3;
  float in_fr4;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar4;
  undefined4 in_PR;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined4 in_stack_00000000;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uStack_10 = in_PR;
  Vec3_set_xyz(&fStack_1c,ar5,ar6,ar7);
  if (ar5 == (int *)0x0) {
    vec3_copy_8c02b5fc(in_stack_00000000,&fStack_1c,ar6,ar7);
    object_dtor_delete(&fStack_1c,0xffffffff,ar6,ar7);
  }
  else {
    if (cVar6 == '\0') {
      bVar4 = in_fr4 < 0.0;
    }
    else {
      bVar4 = (double)CONCAT44(in_fr14,in_fr4) < (double)(ulonglong)in_fr1;
    }
    if (bVar4) {
      in_fr4 = 0.0;
    }
    while( true ) {
      if (cVar6 == '\0') {
        iVar5 = (int)in_fr4;
      }
      else {
        iVar5 = (int)(double)CONCAT44(in_fr14,in_fr4);
      }
      if (iVar5 <= *ar5) break;
      ar5 = ar5 + 4;
    }
    if (cVar6 == '\0') {
      iVar5 = (int)in_fr4;
    }
    else {
      iVar5 = (int)(double)CONCAT44(in_fr14,in_fr4);
    }
    if (*ar5 != iVar5) {
      ar5 = ar5 + -4;
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x43b40000,(float)ar5[1]);
    }
    else {
      dVar3 = 2.6584566620691055e+36;
    }
    if (cVar6 == '\0') {
      fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x47800000,fVar2);
    }
    else {
      dVar3 = 6.207226708901173e-78;
    }
    if (cVar6 == '\0') {
      fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
    }
    fStack_1c = (float)in_xd0;
    fVar1 = fStack_1c;
    if (cVar7 == '\0') {
      fStack_1c = fVar2;
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x43b40000,(float)ar5[2]);
    }
    else {
      dVar3 = 2.6584566620691055e+36;
    }
    if (cVar6 == '\0') {
      fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x47800000,fVar2);
    }
    else {
      dVar3 = 6.207226708901173e-78;
    }
    if (cVar6 == '\0') {
      fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
    }
    fStack_18 = fVar1;
    if (cVar7 == '\0') {
      fStack_18 = fVar2;
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x43b40000,(float)ar5[3]);
    }
    else {
      dVar3 = 2.6584566620691055e+36;
    }
    if (cVar6 == '\0') {
      fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x47800000,fVar2);
    }
    else {
      dVar3 = 6.207226708901173e-78;
    }
    if (cVar6 == '\0') {
      fStack_14 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fStack_14 = SUB84(dVar3 / dVar3,0);
    }
    if (cVar7 != '\0') {
      uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
      fStack_14 = fVar1;
    }
    vec3_copy_8c02b5fc(in_stack_00000000,&fStack_1c,ar6,ar7);
    object_dtor_delete(&fStack_1c,0xffffffff,ar6,ar7);
  }
  return 0;
}



/* FUN_8c034650 @ 8c034650 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c034814) */
/* WARNING: Removing unreachable block (ram,0x8c0347e0) */
/* WARNING: Removing unreachable block (ram,0x8c0347ac) */
/* WARNING: Removing unreachable block (ram,0x8c034762) */
/* WARNING: Removing unreachable block (ram,0x8c0346f8) */
/* WARNING: Removing unreachable block (ram,0x8c0346cc) */
/* WARNING: Removing unreachable block (ram,0x8c0346b6) */
/* WARNING: Removing unreachable block (ram,0x8c03465e) */
/* WARNING: Removing unreachable block (ram,0x8c034650) */
/* WARNING: Removing unreachable block (ram,0x8c0346a0) */
/* WARNING: Removing unreachable block (ram,0x8c0346c4) */
/* WARNING: Removing unreachable block (ram,0x8c0346e2) */
/* WARNING: Removing unreachable block (ram,0x8c034730) */
/* WARNING: Removing unreachable block (ram,0x8c034794) */
/* WARNING: Removing unreachable block (ram,0x8c0347c8) */
/* WARNING: Removing unreachable block (ram,0x8c0347fc) */
/* WARNING: Removing unreachable block (ram,0x8c03482e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c034650(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint in_fr1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 in_fr3;
  double dVar7;
  undefined4 in_fr4;
  undefined8 in_dr14;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar8;
  float in_PR;
  char cVar9;
  char cVar10;
  undefined4 in_stack_00000000;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uStack_10 = 1;
  dVar5 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  fStack_14 = in_PR;
  Vec3_set_xyz(&fStack_20,ar5,ar6,ar7);
  if (ar5 == (int *)0x0) {
    vec3_copy_8c02b5fc(in_stack_00000000,&fStack_20,ar6,ar7);
    object_dtor_delete(&fStack_20,0xffffffff,ar6,ar7);
  }
  else {
    if (cVar9 == '\0') {
      bVar8 = SUB84(dVar5,0) < 0.0;
    }
    else {
      bVar8 = dVar5 < (double)(ulonglong)in_fr1;
    }
    if (bVar8) {
      dVar5 = (double)((ulonglong)dVar5 & 0xffffffff00000000);
    }
    while( true ) {
      fVar2 = (float)*ar5;
      dVar4 = (double)(ulonglong)(uint)fVar2;
      if (cVar9 == '\0' && fVar2 < 0.0) {
        if (cVar10 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar2);
        }
        else {
          dVar4 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar2 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar2,SUB84(dVar4,0) + fVar2);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      fVar2 = SUB84(dVar5,0);
      if (cVar9 == '\0') {
        bVar8 = SUB84(dVar4,0) < fVar2;
      }
      else {
        bVar8 = dVar4 < dVar5;
      }
      if (!bVar8) break;
      ar5 = ar5 + 4;
    }
    fVar3 = (float)*ar5;
    if (cVar9 == '\0' && fVar3 < 0.0) {
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(0x4f800000,fVar3);
      }
      else {
        dVar4 = 1.4411522222084588e+18;
      }
      if (cVar9 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
    }
    if (fVar3 == fVar2) {
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x43b40000,(float)ar5[1]);
      }
      else {
        dVar5 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x47800000,fVar2);
      }
      else {
        dVar5 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        fVar2 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar5 / dVar5,0);
      }
      fStack_20 = (float)in_xd0;
      fVar3 = fStack_20;
      if (cVar10 == '\0') {
        fStack_20 = fVar2;
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x43b40000,(float)ar5[2]);
      }
      else {
        dVar5 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x47800000,fVar2);
      }
      else {
        dVar5 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        fVar2 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar5 / dVar5,0);
      }
      fStack_1c = fVar3;
      if (cVar10 == '\0') {
        fStack_1c = fVar2;
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x43b40000,(float)ar5[3]);
      }
      else {
        dVar5 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(0x47800000,fVar2);
      }
      else {
        dVar5 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        fStack_18 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_18 = SUB84(dVar5 / dVar5,0);
      }
      if (cVar10 != '\0') {
        fStack_14 = (float)((ulonglong)in_xd0 >> 0x20);
        fStack_18 = fVar3;
      }
    }
    else {
      piVar1 = ar5 + -4;
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)(ar5[1] - ar5[-3]),in_fr3);
      }
      else {
        dVar4 = (double)(ar5[1] - ar5[-3]);
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000,fVar3);
      }
      else {
        dVar6 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) *
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar6;
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) /
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar3,SUB84(dVar6,0) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) / SUB84(dVar6,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fStack_20 = SUB84(dVar4,0);
      if (cVar10 == '\0') {
        fStack_20 = (float)((ulonglong)dVar4 >> 0x20);
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)(ar5[2] - ar5[-2]),SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)(ar5[2] - ar5[-2]);
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) *
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar6;
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) /
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar3,SUB84(dVar6,0) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) / SUB84(dVar6,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fStack_1c = SUB84(dVar4,0);
      if (cVar10 == '\0') {
        fStack_1c = (float)((ulonglong)dVar4 >> 0x20);
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)(ar5[3] - ar5[-1]),SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)(ar5[3] - ar5[-1]);
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) *
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar6;
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) /
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar3,SUB84(dVar6,0) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) / SUB84(dVar6,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = (float)((ulonglong)dVar4 >> 0x20);
      fStack_18 = SUB84(dVar4,0);
      if (cVar10 == '\0') {
        fStack_18 = fVar3;
        fVar3 = fStack_14;
      }
      fStack_14 = fVar3;
      fVar3 = (float)*piVar1;
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar3,SUB84(dVar6,0) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      dVar7 = in_xd14;
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(fVar2,SUB84(dVar4,0));
      }
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar6,0),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 - dVar6;
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(fStack_20,SUB84(dVar6,0));
      }
      else {
        dVar4 = (double)CONCAT44(fStack_1c,fStack_20);
      }
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) *
                                 (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 * dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000,(float)ar5[-3]);
      }
      else {
        dVar4 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000,fVar3);
      }
      else {
        dVar4 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) +
                                 SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar4 / dVar4;
      }
      fVar3 = (float)((ulonglong)dVar7 >> 0x20);
      fStack_20 = SUB84(dVar7,0);
      if (cVar10 == '\0') {
        fStack_20 = fVar3;
        fVar3 = fStack_1c;
      }
      fStack_1c = fVar3;
      fVar3 = (float)*piVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      dVar6 = in_xd14;
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(fVar2,SUB84(dVar7,0));
      }
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar4,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(fStack_1c,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(fStack_18,fStack_1c);
      }
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) *
                                 (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 * dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000,(float)ar5[-2]);
      }
      else {
        dVar4 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000,fVar3);
      }
      else {
        dVar4 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                                 SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar4 / dVar4;
      }
      fVar3 = (float)((ulonglong)dVar6 >> 0x20);
      fStack_1c = fVar3;
      if (cVar10 != '\0') {
        fStack_1c = SUB84(dVar6,0);
        fStack_18 = fVar3;
      }
      fVar3 = (float)*piVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar9 == '\0') {
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),fVar2 - SUB84(dVar4,0));
      }
      else {
        dVar5 = dVar5 - dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(fStack_18,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(fStack_14,fStack_18);
      }
      if (cVar9 == '\0') {
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),
                                 SUB84(dVar5,0) * (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        dVar5 = dVar5 * dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000,(float)ar5[-1]);
      }
      else {
        dVar4 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000,fVar2);
      }
      else {
        dVar4 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        fStack_18 = SUB84(dVar5,0) + SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fStack_18 = SUB84(dVar5 + dVar4 / dVar4,0);
      }
      if (cVar10 != '\0') {
        fStack_18 = SUB84(in_xd14,0);
        fStack_14 = (float)((ulonglong)in_xd14 >> 0x20);
      }
    }
    vec3_copy_8c02b5fc(in_stack_00000000,&fStack_20,ar6,ar7);
    object_dtor_delete(&fStack_20,0xffffffff,ar6,ar7);
  }
  return 0;
}



/* FUN_8c034880 @ 8c034880 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c034880(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *ar5;
  for (iVar2 = 0; iVar2 < ar6; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + 0x18;
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



/* FUN_8c0348ac @ 8c0348ac callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0349b2) */
/* WARNING: Removing unreachable block (ram,0x8c03495e) */
/* WARNING: Removing unreachable block (ram,0x8c034912) */
/* WARNING: Removing unreachable block (ram,0x8c0348ba) */
/* WARNING: Removing unreachable block (ram,0x8c0348ac) */
/* WARNING: Removing unreachable block (ram,0x8c0348fc) */
/* WARNING: Removing unreachable block (ram,0x8c034920) */
/* WARNING: Removing unreachable block (ram,0x8c034988) */
/* WARNING: Removing unreachable block (ram,0x8c034a1a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0348ac(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint in_fr1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined4 in_fr3;
  double dVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_fr4;
  undefined8 in_dr14;
  double dVar9;
  undefined8 in_xd0;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_xd14;
  bool bVar12;
  undefined4 in_PR;
  char cVar13;
  char cVar14;
  undefined4 in_stack_00000000;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  dVar9 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  uStack_14 = in_PR;
  FUN_8c023de0(&fStack_20,ar5,ar6,ar7);
  if (ar5 == (int *)0x0) {
    FUN_8c023e24(in_stack_00000000,&fStack_20,ar6,ar7);
    free_if_nonnull_wrap_016ac4(&fStack_20,0xffffffff,ar6,ar7);
  }
  else {
    if (cVar13 == '\0') {
      bVar12 = SUB84(dVar9,0) < 0.0;
    }
    else {
      bVar12 = dVar9 < (double)(ulonglong)in_fr1;
    }
    if (bVar12) {
      dVar9 = (double)((ulonglong)dVar9 & 0xffffffff00000000);
    }
    while( true ) {
      fVar2 = (float)*ar5;
      dVar4 = (double)(ulonglong)(uint)fVar2;
      if (cVar13 == '\0' && fVar2 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar2);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar2 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar2,SUB84(dVar4,0) + fVar2);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      fVar2 = SUB84(dVar9,0);
      if (cVar13 == '\0') {
        bVar12 = SUB84(dVar4,0) < fVar2;
      }
      else {
        bVar12 = dVar4 < dVar9;
      }
      if (!bVar12) break;
      ar5 = ar5 + 4;
    }
    fVar3 = (float)*ar5;
    if (cVar13 == '\0' && fVar3 < 0.0) {
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(0x4f800000,fVar3);
      }
      else {
        dVar4 = 2.9939313207017074e-78;
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
    }
    if (fVar3 == fVar2) {
      if (cVar14 == '\0') {
        fStack_20 = (float)ar5[1];
        fStack_1c = (float)ar5[2];
        fStack_18 = (float)ar5[3];
      }
      else {
        fStack_20 = (float)*(undefined8 *)(ar5 + 1);
        fStack_1c = (float)*(undefined8 *)(ar5 + 2);
        fStack_18 = (float)*(undefined8 *)(ar5 + 3);
        uStack_14 = (undefined4)((ulonglong)*(undefined8 *)(ar5 + 3) >> 0x20);
      }
    }
    else {
      piVar1 = ar5 + -4;
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(ar5[1],in_fr3);
        dVar5 = (double)CONCAT44(ar5[-3],fVar3);
      }
      else {
        dVar4 = *(double *)(ar5 + 1);
        dVar5 = *(double *)(ar5 + -3);
      }
      if (cVar13 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) -
                                 (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar5 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar5 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar5 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = (float)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) + fVar3);
        }
        else {
          dVar5 = dVar5 + dVar5;
        }
      }
      if (cVar13 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) / SUB84(dVar5,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar5;
      }
      fStack_20 = SUB84(dVar4,0);
      if (cVar14 == '\0') {
        dVar6 = (double)CONCAT44(ar5[2],fStack_20);
        dVar5 = (double)CONCAT44(ar5[-2],SUB84(dVar5,0));
        fStack_20 = (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        dVar6 = *(double *)(ar5 + 2);
        dVar5 = *(double *)(ar5 + -2);
      }
      if (cVar13 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) -
                                 (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar5;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) / SUB84(dVar4,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 / dVar4;
      }
      fStack_1c = SUB84(dVar6,0);
      if (cVar14 == '\0') {
        dVar5 = (double)CONCAT44(ar5[3],fStack_1c);
        dVar4 = (double)CONCAT44(ar5[-1],SUB84(dVar4,0));
        fStack_1c = (float)(int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        dVar5 = *(double *)(ar5 + 3);
        dVar4 = *(double *)(ar5 + -1);
      }
      if (cVar13 == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) -
                                 (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar4;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar4,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar4;
      }
      uVar7 = (undefined4)((ulonglong)dVar5 >> 0x20);
      fStack_18 = (float)SUB84(dVar5,0);
      if (cVar14 == '\0') {
        fStack_18 = (float)uVar7;
        uVar7 = uStack_14;
      }
      uStack_14 = uVar7;
      if (cVar13 == '\0') {
        dVar5 = (double)CONCAT44((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar5 = (double)*piVar1;
      }
      dVar6 = (double)((ulonglong)dVar4 & 0xffffffff);
      fVar3 = (float)((ulonglong)dVar5 >> 0x20);
      if (cVar13 == '\0') {
        bVar12 = fVar3 < 0.0;
      }
      else {
        bVar12 = dVar5 < dVar6;
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          dVar6 = (double)CONCAT44(0x4f800000,SUB84(dVar4,0));
        }
        else {
          dVar6 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          dVar5 = (double)CONCAT44(fVar3 + (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
        }
        else {
          dVar5 = dVar5 + dVar6;
        }
      }
      uVar10 = in_xd14;
      if (cVar14 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar2);
        uVar10 = in_xd0;
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar6,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(fStack_20,fVar3);
      }
      else {
        dVar4 = (double)CONCAT44(fStack_1c,fStack_20);
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(ar5[-3],fVar3);
      }
      else {
        dVar4 = *(double *)(ar5 + -3);
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      fStack_20 = fVar3;
      if (cVar14 != '\0') {
        fStack_20 = (float)uVar10;
        fStack_1c = (float)((ulonglong)uVar10 >> 0x20);
      }
      if (cVar13 == '\0') {
        dVar4 = (double)CONCAT44((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar4 = (double)*piVar1;
      }
      dVar5 = (double)(ulonglong)(uint)fVar3;
      fVar8 = (float)((ulonglong)dVar4 >> 0x20);
      if (cVar13 == '\0') {
        bVar12 = fVar8 < 0.0;
      }
      else {
        bVar12 = dVar4 < dVar5;
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          dVar5 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar5 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          dVar4 = (double)CONCAT44(fVar8 + (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar4,0));
        }
        else {
          dVar4 = dVar4 + dVar5;
        }
      }
      uVar11 = in_xd14;
      if (cVar14 == '\0') {
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),fVar2);
        uVar11 = uVar10;
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 - dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(fStack_1c,fVar3);
      }
      else {
        dVar4 = (double)CONCAT44(fStack_18,fStack_1c);
      }
      if (cVar13 == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(ar5[-2],fVar3);
      }
      else {
        dVar4 = *(double *)(ar5 + -2);
      }
      if (cVar13 == '\0') {
        fStack_1c = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fStack_1c = SUB84(dVar4 + dVar4,0);
      }
      if (cVar14 != '\0') {
        fStack_1c = (float)uVar11;
        fStack_18 = (float)((ulonglong)uVar11 >> 0x20);
      }
      fVar3 = (float)*piVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),fVar2 - SUB84(dVar4,0));
      }
      else {
        dVar9 = dVar9 - dVar4;
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(fStack_18,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(uStack_14,fStack_18);
      }
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                                 SUB84(dVar9,0) * (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        dVar9 = dVar9 * dVar4;
      }
      if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44(ar5[-1],SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)(ar5 + -1);
      }
      if (cVar13 == '\0') {
        fStack_18 = SUB84(dVar9,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fStack_18 = SUB84(dVar9 + dVar4,0);
      }
      if (cVar14 != '\0') {
        fStack_18 = (float)in_xd14;
        uStack_14 = (undefined4)((ulonglong)in_xd14 >> 0x20);
      }
    }
    FUN_8c023e24(in_stack_00000000,&fStack_20,ar6,ar7);
    free_if_nonnull_wrap_016ac4(&fStack_20,0xffffffff,ar6,ar7);
  }
  return 0;
}



/* FUN_8c034a70 @ 8c034a70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c034a70(undefined4 ar4,int *ar5,undefined4 *ar6,int ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar7_00;
  
  ar7_00 = ar7;
  uVar1 = (*(code *)PTR_FUN_8c034b9c)(ar4,ar5,ar7,ar7);
  uVar2 = (*(code *)PTR_FUN_8c034ba0)(ar4,ar5,ar7,ar7_00);
  uVar3 = (*(code *)PTR_FUN_8c034ba4)(ar4,ar5,ar7,ar7_00);
  *ar6 = uVar1;
  ar6[1] = uVar2;
  ar6[2] = uVar3;
  ar6[3] = *(undefined4 *)(ar7 * 0x18 + *ar5 + 0xc);
  ar6[4] = *(undefined4 *)(ar7 * 0x18 + *ar5 + 0x10);
  ar6[5] = *(undefined4 *)(ar7 * 0x18 + *ar5 + 0x14);
  *(undefined4 *)(*ar5 + ar7 * 0x18) = 0;
  *(undefined4 *)(ar7 * 0x18 + *ar5 + 4) = 0;
  *(undefined4 *)(ar7 * 0x18 + *ar5 + 8) = 0;
  *(undefined4 *)(ar7 * 0x18 + *ar5 + 0xc) = 0;
  *(undefined4 *)(ar7 * 0x18 + *ar5 + 0x10) = 0;
  *(undefined4 *)(ar7 * 0x18 + *ar5 + 0x14) = 0;
  return 0;
}



/* FUN_8c034ba8 @ 8c034ba8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c034ba8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c034c28)(PTR_DAT_8c034c24,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c034c30;
  uVar2 = DAT_8c034c2c;
  (*(code *)PTR_global_list_push_8c034c34)(uVar1,PTR_Vec3_dtor_8c034c30,DAT_8c034c2c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c034c28)(PTR_DAT_8c034c38,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c034c30;
  uVar2 = DAT_8c034c3c;
  (*(code *)PTR_global_list_push_8c034c34)(uVar1,PTR_Vec3_dtor_8c034c30,DAT_8c034c3c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c034c28)(PTR_DAT_8c034c40,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c034c30;
  uVar2 = DAT_8c034c44;
  (*(code *)PTR_global_list_push_8c034c34)(uVar1,PTR_Vec3_dtor_8c034c30,DAT_8c034c44,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c034c28)(PTR_DAT_8c034c48,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c034c34)(uVar2,PTR_Vec3_dtor_8c034c30,DAT_8c034c4c,ar7);
  return uVar2;
}



/* FUN_8c034c50 @ 8c034c50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined2 * FUN_8c034c50(undefined2 *ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = 0xffff;
  *(undefined4 *)(ar4 + 4) = 0;
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined *)((int)ar4 + iVar1 + 0xc) = PTR_DAT_8c034d00[iVar1 + ar6 * 0xf];
  }
  *(undefined **)(ar4 + 0xe) = PTR_DAT_8c034d04 + ar5 * 0x30;
  ar4[2] = 0xffff;
  *(undefined1 *)(ar4 + 1) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x12) = 0;
  for (iVar1 = 0; iVar1 < *(short *)(*(int *)(ar4 + 0xe) + 2); iVar1 = iVar1 + 1) {
    if (((*(char *)((int)ar4 + iVar1 + 0xc) == '\0') &&
        (*(short *)(*(int *)(*(int *)(ar4 + 0xe) + iVar1 * 4 + 4) + 4) == 0)) &&
       (*(short *)(*(int *)(*(int *)(ar4 + 0xe) + iVar1 * 4 + 4) + 6) == 0)) {
      *(undefined1 *)((int)ar4 + iVar1 + 0xc) = 1;
    }
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



/* FUN_8c034d38 @ 8c034d38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c034d38(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(DAT_8c034d44 + ar5);
}



/* FUN_8c034d48 @ 8c034d48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c034d48(short *ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *ar5_00;
  undefined4 *ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  uVar1 = (*(code *)PTR_FUN_8c034f14)(ar6[2],ar5,ar6,ar7);
  if (((((short)uVar1 != 8) ||
       (iVar2 = (*(code *)PTR_get_field_24_026024_8c034f18)(*ar6,ar5_00,ar6_00,ar7), iVar2 == 1)) &&
      ((uVar1 = (*(code *)PTR_FUN_8c034f14)(ar6[2],ar5_00,ar6_00,ar7), (short)uVar1 != 0x10 ||
       (iVar2 = (*(code *)PTR_get_field_24_026024_8c034f18)(*ar6,ar5_00,ar6_00,ar7), iVar2 == 1))))
     && ((*(int *)(ar4 + 4) != 0 ||
         (iVar2 = (*(code *)PTR_get_field_c0_034f3c_8c034f1c)(ar6[5],ar5_00,ar6_00,ar7), iVar2 != 1)
         ))) {
    if ((char)ar4[0x14] == '\x01') {
      ar5_00 = ar6;
      (*(code *)PTR_FUN_8c034f20)(ar4,ar6,ar6_00,ar7);
    }
    iVar2 = (*(code *)PTR_get_field_c_02d1b8_8c034f28)(ar6[2] + DAT_8c034f24,ar5_00,ar6_00,ar7);
    iVar2 = (int)ar5 - iVar2;
    uVar1 = 0x3c;
    iVar3 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c034f2c)(iVar2,0x3c,ar6_00,ar7);
    if ((iVar3 == 1) && (iVar2 != *(int *)(ar4 + 0x10))) {
      *(int *)(ar4 + 0x12) = *(int *)(ar4 + 0x12) + 1;
      uVar1 = (*(code *)PTR_libgcc_divide_helper_010284_8c034f30)(iVar2,0x3c,ar6_00,ar7);
      ar6_00 = ar6;
      (*(code *)PTR_FUN_8c034f34)(ar4,uVar1,ar6,ar7);
    }
    *(int *)(ar4 + 0x10) = iVar2;
    if (*ar4 == -1) {
      (*(code *)PTR_FUN_8c034f38)(ar4,ar6,ar6_00,ar7);
    }
    else {
      if (*(int *)(ar4 + 4) == 1) {
        uVar4 = (**(code **)(*(int *)(*(int *)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x14))
                          (ar6,uVar1,ar6_00,ar7);
        *(undefined4 *)(ar4 + 4) = uVar4;
      }
      if ((*(int *)(ar4 + 4) == 2) || (*(int *)(ar4 + 4) == 3)) {
        uVar4 = (**(code **)(*(int *)(*(int *)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x18))
                          (ar6,uVar1,ar6_00,ar7);
        *(undefined4 *)(ar4 + 4) = uVar4;
        *(undefined1 *)((int)ar4 + *ar4 + 0xc) = 4;
      }
      if (*(int *)(ar4 + 4) == 4) {
        uVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x1c))
                          (ar6,uVar1,ar6_00,ar7);
        *(undefined4 *)(ar4 + 4) = uVar1;
      }
      if (*(int *)(ar4 + 4) == 5) {
        *(undefined1 *)((int)ar4 + *ar4 + 0xc) = 5;
        if (*(char *)(*(int *)(*(int *)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x22) == '\0') {
          *(undefined1 *)((int)ar4 + *ar4 + 0xc) = 6;
        }
        *ar4 = -1;
        ar4[0x12] = 0;
        ar4[0x13] = 0;
        ar4[4] = 0;
        ar4[5] = 0;
      }
    }
  }
  *(undefined1 *)(ar4 + 1) = 0;
  *(undefined1 *)(ar4 + 0x14) = 0;
  return 0x28;
}



/* get_field_c0_034f3c @ 8c034f3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_c0_034f3c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c034f44 + ar4);
}



/* FUN_8c034f48 @ 8c034f48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c034f48(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  (*(code *)PTR_FUN_8c034ff8)(*(undefined4 *)(ar5 + 8),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c034ffc)(*(undefined4 *)(ar5 + 8),ar5_00,ar6,ar7);
  for (iVar3 = 0; iVar2 = (int)*(short *)(*(int *)(ar4 + 0x1c) + 2), iVar3 < iVar2;
      iVar3 = iVar3 + 1) {
    if ((*(char *)(ar4 + iVar3 + 0xc) == '\0') || (*(char *)(ar4 + iVar3 + 0xc) == '\x06')) {
      uVar1 = (*(code *)PTR_FUN_8c034ff8)(*(undefined4 *)(ar5 + 8),ar5_00,ar6,ar7);
      if (*(short *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 4) <= (short)uVar1) {
        iVar2 = (*(code *)PTR_FUN_8c034ffc)(*(undefined4 *)(ar5 + 8),ar5_00,ar6,ar7);
        if (*(short *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 6) <= iVar2) {
          *(undefined1 *)(ar4 + iVar3 + 0xc) = 1;
        }
      }
    }
  }
  return iVar2;
}



/* FUN_8c035000 @ 8c035000 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035000(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_18_02d1a0_8c035024)(ar4 + DAT_8c035020,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c035028 @ 8c035028 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c035028(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(ar4 + 0x24);
  for (iVar3 = 0; iVar1 = (int)*(short *)(*(int *)(ar4 + 0x1c) + 2), iVar3 < iVar1;
      iVar3 = iVar3 + 1) {
    if ((((*(short *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 0xc) == -1) ||
         ('\x04' < *(char *)(*(short *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 0xc) + ar4
                            + 0xc))) &&
        (*(uint *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 8) <= ar5)) &&
       ((*(short *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 0xe) <= iVar2 &&
        (*(char *)(ar4 + iVar3 + 0xc) == '\x01')))) {
      *(undefined4 *)(ar4 + 0x24) = 0;
      *(undefined1 *)(ar4 + iVar3 + 0xc) = 2;
    }
  }
  return iVar1;
}



/* FUN_8c035110 @ 8c035110 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c035110(undefined2 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  int iVar2;
  short sVar3;
  int iVar4;
  
  iVar2 = -1;
  sVar3 = 0;
  ar5_00 = ar5;
  for (iVar4 = 0; iVar4 < *(short *)(*(int *)(ar4 + 0xe) + 2); iVar4 = iVar4 + 1) {
    if (*(char *)((int)ar4 + iVar4 + 0xc) == '\x02') {
      iVar1 = (*(code *)PTR_FUN_8c035254)(*(undefined4 *)(ar5 + 8),ar5_00,ar6,ar7);
      if ((iVar1 == -1) && (sVar3 < *(short *)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 2)))
      {
        if (*(char *)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x21) == '\0') {
          iVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x10))
                            (ar5,ar5_00,ar6,ar7);
          if (iVar1 == 1) {
            iVar2 = (int)**(short **)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4);
            sVar3 = *(short *)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 2);
          }
        }
        else if (*(char *)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x21) == '\x01') {
          ar5_00 = ar5;
          iVar1 = (*(code *)PTR_FUN_8c035258)(ar4,ar5,ar6,ar7);
          if (iVar1 == 1) {
            iVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x10))
                              (ar5,ar5_00,ar6,ar7);
            if (iVar1 == 1) {
              iVar2 = (int)**(short **)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4);
              sVar3 = *(short *)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 2);
            }
          }
        }
      }
    }
  }
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  else {
    *(undefined1 *)((int)ar4 + iVar2 + 0xc) = 3;
    *ar4 = (short)iVar2;
    *(undefined4 *)(ar4 + 4) = 1;
    *(undefined4 *)(ar4 + 0x12) = 0;
  }
  return iVar2;
}



/* FUN_8c03525c @ 8c03525c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03525c(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  float *ar6_00;
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  cVar4 = '\0';
  cVar3 = '\0';
  FUN_8c02f670(*(undefined4 *)(ar5 + 4),ar5,ar6,ar7,auStack_30);
  Vec3_ctor_copy(auStack_20,auStack_30,ar6,ar7);
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  ar6_00 = &fStack_38;
  FUN_8c256294(0,auStack_10,ar6_00,ar7);
  if (cVar4 == '\0') {
    fVar2 = 150.0;
    fVar1 = fStack_38;
  }
  else {
    fVar1 = 150.0;
    fVar2 = 500.0;
  }
  if (cVar3 == '\0' && fVar2 < fVar1) {
    if (cVar4 == '\0') {
      fVar1 = 500.0;
    }
    else {
      fStack_38 = 500.0;
      fVar1 = 80.0;
    }
    if (cVar3 == '\0' && fStack_38 < fVar1) {
      if (cVar4 == '\0') {
        fVar2 = 80.0;
        fVar1 = fStack_34;
      }
      else {
        fVar1 = 80.0;
        fVar2 = 400.0;
      }
      if (cVar3 == '\0' && fVar2 < fVar1) {
        if (cVar4 == '\0') {
          fVar1 = 400.0;
        }
        else {
          fStack_34 = 400.0;
          fVar1 = -9.917997e+27;
        }
        if (cVar3 == '\0' && fStack_34 < fVar1) {
          Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7);
          return 1;
        }
      }
    }
  }
  Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7);
  return 0;
}



/* FUN_8c035338 @ 8c035338 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035338(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(ar4 + iVar1 + 0xc) = *(undefined1 *)(iVar1 + ar5);
  }
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    if ((((*(char *)(ar4 + iVar1 + 0xc) == '\x06') || (*(char *)(ar4 + iVar1 + 0xc) == '\x02')) ||
        (*(char *)(ar4 + iVar1 + 0xc) == '\x03')) || (*(char *)(ar4 + iVar1 + 0xc) == '\x04')) {
      *(undefined1 *)(ar4 + iVar1 + 0xc) = 1;
    }
  }
  return 0xf;
}



/* FUN_8c03539c @ 8c03539c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03539c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(iVar1 + ar5) = *(undefined1 *)(ar4 + iVar1 + 0xc);
  }
  return 0xf;
}



/* FUN_8c0353bc @ 8c0353bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0353bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  (*(code *)PTR_FUN_8c035460)(ar5,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c035464)(ar5,ar5_00,ar6,ar7);
  for (iVar3 = 0; iVar2 = (int)*(short *)(*(int *)(ar4 + 0x1c) + 2), iVar3 < iVar2;
      iVar3 = iVar3 + 1) {
    if (*(char *)(ar4 + iVar3 + 0xc) == '\0') {
      uVar1 = (*(code *)PTR_FUN_8c035460)(ar5,ar5_00,ar6,ar7);
      if (*(short *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 4) <= (short)uVar1) {
        iVar2 = (*(code *)PTR_FUN_8c035464)(ar5,ar5_00,ar6,ar7);
        if (*(short *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 6) <= iVar2) {
          *(undefined1 *)(ar4 + iVar3 + 0xc) = 1;
        }
      }
    }
  }
  return iVar2;
}



/* FUN_8c035470 @ 8c035470 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035470(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = (**(code **)(DAT_8c035574 + *(int *)(*(int *)(ar4 + 4) + 8)))
                    (*(int *)(ar4 + 4),ar5,ar6,ar7);
  if (iVar1 != 2) {
    uVar3 = (*(code *)PTR_FUN_8c035578)(*(undefined4 *)(ar4 + 0x20),ar5,ar6,ar7);
    ar5 = 0x3c;
    uVar3 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c03557c)(uVar3 & 0xffff,0x3c,ar6,ar7);
  }
  iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
  if (iVar1 < 8) {
    iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
    if ((iVar1 < 7) || ((uVar3 & 0xffff) < 10)) {
      iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
      if ((iVar1 < 6) || ((uVar3 & 0xffff) < 0xc)) {
        iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
        if ((iVar1 < 5) || ((uVar3 & 0xffff) < 0xf)) {
          iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
          if ((iVar1 < 4) || ((uVar3 & 0xffff) < 0x14)) {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c035580 @ 8c035580 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035580(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
  if ((3 < iVar1) &&
     (iVar1 = (**(code **)(DAT_8c0355c8 + *(int *)(*(int *)(ar4 + 4) + 8)))
                        (*(int *)(ar4 + 4),ar5,ar6,ar7), iVar1 != 2)) {
    return 1;
  }
  return 0;
}



/* FUN_8c0355cc @ 8c0355cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0355cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(DAT_8c0356f4 + *(int *)(*(int *)(ar4 + 4) + 8)))
                    (*(int *)(ar4 + 4),ar5,ar6,ar7);
  if ((((iVar1 == 0) &&
       (uVar2 = (*(code *)PTR_FUN_8c0356fc)(*(int *)(ar4 + 8) + DAT_8c0356f8,ar5,ar6,ar7),
       (char)uVar2 == '\x01')) &&
      (iVar1 = (*(code *)PTR_get_field_178_035734_8c035700)(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7),
      iVar1 == 0)) &&
     (iVar1 = (*(code *)PTR_get_field_140_025f70_8c035704)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7),
     iVar1 == 1)) {
    ar5 = 7;
    iVar1 = (*(code *)PTR_FUN_8c03570c)(DAT_8c035708,7,ar6,ar7);
    if (((iVar1 == 1) &&
        (uVar2 = (*(code *)PTR_get_field_a0_035724_8c035710)
                           (*(undefined4 *)(ar4 + 0x20),ar5,ar6,ar7), (char)uVar2 == '\x02')) &&
       (iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7),
       iVar1 == 0)) {
      return 1;
    }
  }
  iVar1 = (**(code **)(DAT_8c0356f4 + *(int *)(*(int *)(ar4 + 4) + 8)))
                    (*(int *)(ar4 + 4),ar5,ar6,ar7);
  if (((iVar1 == 0x1d) &&
      (uVar2 = (*(code *)PTR_FUN_8c0356fc)(*(int *)(ar4 + 8) + DAT_8c0356f8,ar5,ar6,ar7),
      (char)uVar2 == '\x01')) &&
     ((iVar1 = (*(code *)PTR_get_field_178_035734_8c035700)(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7),
      iVar1 == 0 &&
      (((iVar1 = (*(code *)PTR_get_field_140_025f70_8c035704)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7),
        iVar1 == 1 &&
        (uVar2 = (*(code *)PTR_get_field_a0_035724_8c035710)
                           (*(undefined4 *)(ar4 + 0x20),ar5,ar6,ar7), (char)uVar2 == '\x02')) &&
       (iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7),
       iVar1 == 0)))))) {
    (*(code *)PTR_FUN_8c035714)(*(undefined4 *)(ar4 + 0x18),4,ar6,ar7);
    return 1;
  }
  return 0;
}



/* FUN_8c035718 @ 8c035718 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035718(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + (char)ar5 + 0xc) = 1;
  return 1;
}



/* get_field_a0_035724 @ 8c035724 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint get_field_a0_035724(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (uint)*(byte *)(DAT_8c035730 + ar4);
}



/* get_field_178_035734 @ 8c035734 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_178_035734(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c03573c + ar4);
}



/* FUN_8c035740 @ 8c035740 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035740(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int a6;
  
  iVar3 = 0;
  a6 = 0;
  while( true ) {
    uVar2 = 3;
    iVar1 = (**(code **)(DAT_8c035834 + *(int *)*ar4))((int *)*ar4,3,ar6,ar7);
    if (iVar1 <= a6) break;
    uVar2 = 3;
    ar6 = a6;
    iVar1 = (**(code **)(DAT_8c035828 + *(int *)*ar4))((int *)*ar4,3,a6,ar7);
    iVar1 = (**(code **)(DAT_8c03582c + *(int *)(iVar1 + 8)))(iVar1,uVar2,ar6,ar7);
    if (iVar1 == 4) {
      uVar2 = 3;
      ar6 = a6;
      iVar1 = (**(code **)(DAT_8c035828 + *(int *)*ar4))((int *)*ar4,3,a6,ar7);
      iVar1 = (**(code **)(DAT_8c035830 + *(int *)(iVar1 + 8)))(iVar1,uVar2,ar6,ar7);
      if (iVar1 == 1) {
        iVar3 = iVar3 + 1;
      }
    }
    a6 = a6 + 1;
  }
  if ((((1 < iVar3) &&
       (iVar3 = (*(code *)PTR_get_field_178_035734_8c035838)(ar4[3],uVar2,ar6,ar7), iVar3 == 0)) &&
      (iVar3 = (*(code *)PTR_FUN_8c035840)(ar4[2] + DAT_8c03583c,uVar2,ar6,ar7), iVar3 < 0x31)) &&
     (uVar2 = (*(code *)PTR_FUN_8c035844)(ar4[5],uVar2,ar6,ar7), (char)uVar2 == '\x02')) {
    (*(code *)PTR_FUN_8c035848)(ar4[2] + DAT_8c03583c,0,ar6,ar7);
    return 1;
  }
  return 0;
}



/* FUN_8c03584c @ 8c03584c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c03584c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(DAT_8c035854 + ar4);
}



/* FUN_8c035858 @ 8c035858 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035858(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int a6;
  
  iVar4 = 0;
  a6 = 0;
  while( true ) {
    uVar3 = 5;
    iVar1 = (**(code **)(DAT_8c03596c + *(int *)*ar4))((int *)*ar4,5,ar6,ar7);
    if (iVar1 <= a6) break;
    uVar3 = 5;
    ar6 = a6;
    iVar1 = (**(code **)(DAT_8c035960 + *(int *)*ar4))((int *)*ar4,5,a6,ar7);
    iVar1 = (**(code **)(DAT_8c035964 + *(int *)(iVar1 + 8)))(iVar1,uVar3,ar6,ar7);
    if (iVar1 == 7) {
      uVar3 = 5;
      ar6 = a6;
      iVar1 = (**(code **)(DAT_8c035960 + *(int *)*ar4))((int *)*ar4,5,a6,ar7);
      iVar1 = (**(code **)(DAT_8c035968 + *(int *)(iVar1 + 8)))(iVar1,uVar3,ar6,ar7);
      if (iVar1 == 1) {
        iVar4 = iVar4 + 1;
      }
    }
    a6 = a6 + 1;
  }
  if ((((1 < iVar4) &&
       (iVar4 = (*(code *)PTR_get_field_178_035734_8c035970)(ar4[3],uVar3,ar6,ar7), iVar4 == 0)) &&
      (iVar4 = (*(code *)PTR_FUN_8c035978)(ar4[2] + DAT_8c035974,uVar3,ar6,ar7), iVar4 < 0x31)) &&
     (((uVar2 = (*(code *)PTR_FUN_8c03597c)(ar4[5],uVar3,ar6,ar7), (char)uVar2 == '\x02' &&
       (iVar4 = (*(code *)PTR_get_field_c0_034f3c_8c035980)(ar4[5],uVar3,ar6,ar7), iVar4 == 0)) &&
      (iVar4 = (*(code *)PTR_get_field_40_03598c_8c035984)(ar4[5],uVar3,ar6,ar7), iVar4 == 0)))) {
    (*(code *)PTR_FUN_8c035988)(ar4[2] + DAT_8c035974,0,ar6,ar7);
    return 1;
  }
  return 0;
}



/* get_field_40_03598c @ 8c03598c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_40_03598c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x40);
}



/* FUN_8c035994 @ 8c035994 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035994(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_FUN_8c035a28)(*(int *)(ar4 + 8) + DAT_8c035a24,ar5,ar6,ar7);
  if (((((char)uVar1 == '\x01') &&
       (iVar2 = (*(code *)PTR_get_field_178_035734_8c035a2c)(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7)
       , iVar2 == 0)) &&
      (iVar2 = (*(code *)PTR_get_field_140_025f70_8c035a30)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7),
      iVar2 == 1)) &&
     (uVar1 = (*(code *)PTR_get_field_a0_035724_8c035a34)(*(undefined4 *)(ar4 + 0x20),ar5,ar6,ar7),
     (char)uVar1 == '\x02')) {
    iVar2 = (*(code *)PTR_get_field_13c_028d9c_8c035a38)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
    if (iVar2 != 4) {
      return 1;
    }
    iVar2 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}



/* FUN_8c035a3c @ 8c035a3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035a3c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_FUN_8c035aa4)(*(int *)(ar4 + 8) + DAT_8c035aa0,ar5,ar6,ar7);
  if (((((char)uVar1 == '\x01') &&
       (iVar2 = (*(code *)PTR_get_field_178_035734_8c035aa8)(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7)
       , iVar2 == 0)) &&
      (iVar2 = (*(code *)PTR_get_field_140_025f70_8c035aac)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7),
      iVar2 == 1)) &&
     (uVar1 = (*(code *)PTR_FUN_8c035ab0)(*(undefined4 *)(ar4 + 0x10),ar5,ar6,ar7),
     (char)uVar1 == '\x02')) {
    return 1;
  }
  return 0;
}



/* FUN_8c035ab4 @ 8c035ab4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c035ab4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(DAT_8c035abc + ar4);
}



/* FUN_8c035ac8 @ 8c035ac8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c035ac8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c035af4)(*(undefined4 *)(ar4 + 0x10),ar5,ar6,ar7);
  return (uint)((char)uVar1 == '\x02');
}



/* FUN_8c035af8 @ 8c035af8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035af8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  float fVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  
  fVar2 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar5 = '\0';
  cVar4 = '\0';
  uVar1 = FUN_8c035b50(ar4[5],ar5,ar6,ar7);
  if ((char)uVar1 < '\x04') {
    (**(code **)(*(int *)*ar4 + 0x188))((int *)*ar4,ar5,ar6,ar7);
    if (cVar5 == '\0') {
      fVar3 = 40.0;
    }
    else {
      fVar2 = 40.0;
      fVar3 = 5.547118e+19;
    }
    if (cVar4 == '\0' && fVar3 < fVar2) {
      return 1;
    }
  }
  return 0;
}



/* FUN_8c035b50 @ 8c035b50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c035b50(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x4e);
}



/* FUN_8c035b58 @ 8c035b58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035b58(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 in_dr0;
  code *pcVar3;
  char cVar4;
  char cVar5;
  
  fVar2 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar5 = '\0';
  cVar4 = '\0';
  uVar1 = FUN_8c035bf8(ar4[5],ar5,ar6,ar7);
  if ((char)uVar1 < '\x01') {
    (**(code **)(*(int *)*ar4 + 0x188))((int *)*ar4,ar5,ar6,ar7);
    if (cVar5 == '\0') {
      pcVar3 = (code *)0x42200000;
    }
    else {
      fVar2 = 40.0;
      pcVar3 = FUN_8c035be0;
    }
    if (cVar4 == '\0' && (float)pcVar3 < fVar2) {
      FUN_8c035be0(ar4[5],ar5,ar6,ar7);
      FUN_8c035bc8(ar4[5],ar5,ar6,ar7);
      return 1;
    }
  }
  return 0;
}



/* FUN_8c035bc8 @ 8c035bc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035bc8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x4e) = *(char *)(ar4 + 0x4e) + -1;
  return 0x4e;
}



/* FUN_8c035be0 @ 8c035be0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035be0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x4f) = *(char *)(ar4 + 0x4f) + '\x01';
  return 0x4f;
}



/* FUN_8c035bf8 @ 8c035bf8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c035bf8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x4f);
}



/* FUN_8c035c00 @ 8c035c00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035c00(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 in_dr0;
  code *pcVar3;
  char cVar4;
  char cVar5;
  
  fVar2 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar5 = '\0';
  cVar4 = '\0';
  uVar1 = FUN_8c035ca0(ar4[5],ar5,ar6,ar7);
  if ((char)uVar1 < '\x04') {
    (**(code **)(*(int *)*ar4 + 0x188))((int *)*ar4,ar5,ar6,ar7);
    if (cVar5 == '\0') {
      pcVar3 = (code *)0x42200000;
    }
    else {
      fVar2 = 40.0;
      pcVar3 = FUN_8c035c88;
    }
    if (cVar4 == '\0' && (float)pcVar3 < fVar2) {
      FUN_8c035c88(ar4[5],ar5,ar6,ar7);
      FUN_8c035c70(ar4[5],ar5,ar6,ar7);
      return 1;
    }
  }
  return 0;
}



/* FUN_8c035c70 @ 8c035c70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035c70(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x4f) = *(char *)(ar4 + 0x4f) + -1;
  return 0x4f;
}



/* FUN_8c035c88 @ 8c035c88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035c88(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x50) = *(char *)(ar4 + 0x50) + '\x01';
  return 0x50;
}



/* FUN_8c035ca0 @ 8c035ca0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c035ca0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x50);
}



/* FUN_8c035ca8 @ 8c035ca8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035ca8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined8 in_dr0;
  code *pcVar4;
  char cVar5;
  char cVar6;
  
  fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar6 = '\0';
  cVar5 = '\0';
  uVar1 = FUN_8c035d64(ar4[5],ar5,ar6,ar7);
  if (((char)uVar1 < '\x02') && (uVar1 = FUN_8c035b50(ar4[5],ar5,ar6,ar7), (char)uVar1 < '\x03')) {
    uVar1 = 0xb;
    iVar2 = (**(code **)(*(int *)*ar4 + 0x11c))((int *)*ar4,0xb,ar6,ar7);
    if (iVar2 < 2) {
      (**(code **)(*(int *)*ar4 + 0x188))((int *)*ar4,uVar1,ar6,ar7);
      if (cVar6 == '\0') {
        pcVar4 = (code *)0x42200000;
      }
      else {
        fVar3 = 40.0;
        pcVar4 = FUN_8c035d4c;
      }
      if (cVar5 == '\0' && (float)pcVar4 < fVar3) {
        FUN_8c035d4c(ar4[5],uVar1,ar6,ar7);
        FUN_8c035d4c(ar4[5],uVar1,ar6,ar7);
        return 1;
      }
    }
  }
  return 0;
}



/* FUN_8c035d4c @ 8c035d4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035d4c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x4d) = *(char *)(ar4 + 0x4d) + '\x01';
  return 0x4d;
}



/* FUN_8c035d64 @ 8c035d64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c035d64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x4d);
}



/* FUN_8c035d7c @ 8c035d7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035d7c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c035d98)(*(undefined4 *)(ar4 + 0x10),1,ar6,ar7);
  return 4;
}



/* FUN_8c035d9c @ 8c035d9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035d9c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c035db8)(*(undefined4 *)(ar4 + 0x10),3,ar6,ar7);
  return 4;
}



/* FUN_8c035dbc @ 8c035dbc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035dbc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c035dd8)(*(undefined4 *)(ar4 + 0x10),4,ar6,ar7);
  return 4;
}



/* FUN_8c035ddc @ 8c035ddc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035ddc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c035df8)(*(undefined4 *)(ar4 + 0x10),6,ar6,ar7);
  return 4;
}



/* FUN_8c035dfc @ 8c035dfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035dfc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c035e18)(*(undefined4 *)(ar4 + 0x10),7,ar6,ar7);
  return 4;
}



/* FUN_8c035e1c @ 8c035e1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035e1c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c035e38)(*(undefined4 *)(ar4 + 0x10),8,ar6,ar7);
  return 4;
}



/* FUN_8c035e3c @ 8c035e3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035e3c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c035e58)(*(undefined4 *)(ar4 + 0x10),9,ar6,ar7);
  return 4;
}



/* FUN_8c035e5c @ 8c035e5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035e5c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c02cb7c(*(int *)(ar4 + 8) + 0xa8,1,ar6,ar7,ar4);
  return 4;
}



/* FUN_8c035e84 @ 8c035e84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035e84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x3a) = (undefined1)ar5;
  return 0x3a;
}



/* FUN_8c035e8c @ 8c035e8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c035e8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x3a);
}



/* FUN_8c035e94 @ 8c035e94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035e94(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)PTR_FUN_8c035ef0)(*(undefined4 *)(ar4 + 0x14),ar5,ar6,ar7);
  if ((char)uVar1 == '\0') {
    iVar2 = (*(code *)PTR_get_field_40_03598c_8c035ef4)(*(undefined4 *)(ar4 + 0x14),ar5,ar6,ar7);
    if (iVar2 == 0) {
      ar5 = 1;
      (*(code *)PTR_FUN_8c035ef8)(*(undefined4 *)(ar4 + 0x14),1,ar6,ar7);
    }
  }
  iVar2 = (*(code *)PTR_FUN_8c035efc)(*(undefined4 *)(ar4 + 0x10),ar5,ar6,ar7);
  if (iVar2 < 4) {
    (*(code *)PTR_FUN_8c035f00)(*(undefined4 *)(ar4 + 0x10),4,ar6,ar7);
  }
  return 4;
}



/* FUN_8c035f04 @ 8c035f04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c035f04(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(DAT_8c035f10 + ar4);
}



/* FUN_8c035f14 @ 8c035f14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035f14(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c035f44)(*(undefined4 *)(ar4 + 0x10),ar5,ar6,ar7);
  if ((char)uVar1 == '\0') {
    (*(code *)PTR_FUN_8c035f48)(*(undefined4 *)(ar4 + 0x10),1,ar6,ar7);
  }
  return 4;
}



/* FUN_8c035f4c @ 8c035f4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c035f4c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c035f54;
  *(undefined1 *)(DAT_8c035f54 + ar4) = (undefined1)ar5;
  return iVar1;
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



/* FUN_8c036030 @ 8c036030 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c036030(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c03604c)(*(undefined4 *)(ar4 + 0x18),0xffffffff,ar6,ar7);
  return 5;
}



/* FUN_8c036050 @ 8c036050 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c036050(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(short *)(ar4 + 4) = (short)ar5;
  return ar5;
}



/* FUN_8c036058 @ 8c036058 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c036058(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(iVar1 + ar4) = 0;
  }
  return ar4;
}



/* FUN_8c036078 @ 8c036078 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c036078(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125c58,ar5,ar6,ar7);
  uVar3 = 0x8c27df38;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27df38,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125c68,pcVar2,uVar3,ar7);
  uVar3 = 0x8c27df44;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27df44,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125c78,pcVar2,uVar3,ar7);
  uVar3 = 0x8c27df50;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27df50,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125c88,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c27df5c,ar7);
  if (cVar4 == '\0') {
    _DAT_8c125c98 = CONCAT44(_UNK_8c125c9c,0x800000);
                    /* WARNING: Read-only address (ram,0x8c125c9c) is written */
  }
  else {
    _DAT_8c125c98 = 0xffffffff00800000;
  }
  return 0x8c125864;
}



/* FUN_8c036130 @ 8c036130 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c036130(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0361b0)(PTR_DAT_8c0361ac,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c0361b8;
  uVar2 = DAT_8c0361b4;
  (*(code *)PTR_global_list_push_8c0361bc)(uVar1,PTR_Vec3_dtor_8c0361b8,DAT_8c0361b4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0361b0)(PTR_DAT_8c0361c0,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0361b8;
  uVar2 = DAT_8c0361c4;
  (*(code *)PTR_global_list_push_8c0361bc)(uVar1,PTR_Vec3_dtor_8c0361b8,DAT_8c0361c4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0361b0)(PTR_DAT_8c0361c8,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0361b8;
  uVar2 = DAT_8c0361cc;
  (*(code *)PTR_global_list_push_8c0361bc)(uVar1,PTR_Vec3_dtor_8c0361b8,DAT_8c0361cc,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0361b0)(PTR_DAT_8c0361d0,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c0361bc)(uVar2,PTR_Vec3_dtor_8c0361b8,DAT_8c0361d4,ar7);
  return uVar2;
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



/* s_GRAPHICS_FROGMANLINE_036266 @ 8c036260 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_FROGMANLINE_036266(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  undefined4 extraout_fr1;
  char cVar3;
  
  cVar3 = '\0';
  ar6_00 = 1;
  uVar1 = 5;
  ar7_00 = ar6;
  FUN_8c0254d0(ar4,5,1,ar6,0,ar5,0x8c27dfd4,&DAT_8c27e594,PTR_s_GRAPHICS_FROGMANLINE_8c13368c);
  *(undefined **)(ar4 + 8) = &DAT_8c129ea0;
  s_FROGMANLINE_05d646(ar4 + 0x490,uVar1,ar6_00,ar7_00);
  FUN_8c03a5a4(ar4 + 0xd2c,uVar1,ar6_00,ar7_00);
  FUN_8c016fcc(ar4 + 0x1088,uVar1,ar6_00,ar7_00);
  FUN_8c014334(ar4 + 0xc,uVar1,ar6_00,ar7_00,s_FrogManLine_8c135e05);
  *(int *)(ar4 + 0x308) = ar4 + 0x490;
  uVar1 = FUN_8c034d38(ar4 + 0x2dc,ar6,ar6_00,ar7_00);
  FUN_8c028ec8(*(undefined4 *)(ar4 + 0x308),uVar1,ar6_00,ar7_00);
  *(int *)(ar4 + 0x30c) = ar4 + 0xd2c;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(undefined4 *)(ar4 + iVar2 * 4 + 0x111c) = 0;
    *(undefined4 *)(ar4 + iVar2 * 4 + 0x1134) = 0;
  }
  *(undefined1 *)(ar4 + 0x114c) = 0;
  FUN_8c0f532c(ar4,*(undefined4 *)(*(int *)(ar4 + 0x328) + 0xb4),ar4 + 0x1088,ar7_00);
  *(undefined4 *)(ar4 + 0x3d8) = *(undefined4 *)(**(int **)(ar4 + 0x328) + 0x40);
  *(undefined4 *)(ar4 + 0x3dc) = *(undefined4 *)(**(int **)(ar4 + 0x328) + 0x40);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x468) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x468) = CONCAT44(0x3f800000,extraout_fr1);
  }
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  return ar4;
}



/* CAnimal_m2_03640c @ 8c03640c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m2_03640c(int ar4,int ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  int ar7_00;
  
  uVar1 = (*(code *)PTR_get_field_a0_035724_8c036524)(ar5,ar5,ar6,ar7);
  if (((char)uVar1 == '\x02') && (*(int *)(DAT_8c036528 + ar5) == 1)) {
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x20;
  }
  ar5_00 = ar5;
  ar7_00 = ar7;
  (*(code *)PTR_CAnimal_m2_02573c_8c03652c)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c036534)(ar4 + DAT_8c036530,ar5_00,ar6,ar7_00);
  if (((char)uVar1 == '\x01') && (*(int *)(DAT_8c036538 + ar4) == 0)) {
    ar5_00 = ar5;
    (*(code *)PTR_FUN_8c03653c)(ar4,ar5,ar6,ar7_00);
  }
  if (*(int *)(DAT_8c036540 + ar4) != 0) {
    ar5_00 = ar5;
    (*(code *)PTR_FUN_8c036544)(ar4,ar5,ar6,ar7_00);
  }
  uVar1 = (*(code *)PTR_FUN_8c036534)(ar4 + DAT_8c036530,ar5_00,ar6,ar7_00);
  if ((char)uVar1 == '\x02') {
    iVar2 = (*(code *)PTR_get_field_2f0_03655c_8c03654c)(ar4 + DAT_8c036548,ar5_00,ar6,ar7_00);
    if (iVar2 == 1) {
      (*(code *)PTR_s_CSquidLine_036894_8c036550)(ar4,ar7,ar5,ar7_00);
      ar5_00 = ar7;
      ar6 = ar5;
    }
  }
  (*(code *)PTR_FUN_8c036554)(ar4,ar5_00,ar6,ar7_00);
  (*(code *)PTR_FUN_8c036558)(ar4,ar5_00,ar6,ar7_00);
  return 1;
}



/* get_field_2f0_03655c @ 8c03655c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_2f0_03655c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c036564 + ar4);
}



/* CAnimal_m3_036568 @ 8c036568 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m3_036568(int ar4,int ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  int ar7_00;
  
  uVar1 = (*(code *)PTR_get_field_a0_035724_8c036680)(ar5,ar5,ar6,ar7);
  if (((char)uVar1 == '\x02') && (*(int *)(DAT_8c036684 + ar5) == 1)) {
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x20;
  }
  ar5_00 = ar5;
  ar7_00 = ar7;
  (*(code *)PTR_CAnimal_m3_026078_8c036688)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c036690)(ar4 + DAT_8c03668c,ar5_00,ar6,ar7_00);
  if (((char)uVar1 == '\x01') && (*(int *)(DAT_8c036694 + ar4) == 0)) {
    ar5_00 = ar5;
    (*(code *)PTR_FUN_8c036698)(ar4,ar5,ar6,ar7_00);
  }
  if (*(int *)(DAT_8c03669c + ar4) != 0) {
    ar5_00 = ar5;
    (*(code *)PTR_FUN_8c0366a0)(ar4,ar5,ar6,ar7_00);
  }
  uVar1 = (*(code *)PTR_FUN_8c036690)(ar4 + DAT_8c03668c,ar5_00,ar6,ar7_00);
  if ((char)uVar1 == '\x02') {
    iVar2 = (*(code *)PTR_get_field_2f0_03655c_8c0366a8)(ar4 + DAT_8c0366a4,ar5_00,ar6,ar7_00);
    if (iVar2 == 1) {
      (*(code *)PTR_s_CSquidLine_036894_8c0366ac)(ar4,ar7,ar5,ar7_00);
      ar5_00 = ar7;
      ar6 = ar5;
    }
  }
  (*(code *)PTR_FUN_8c0366b0)(ar4,ar5_00,ar6,ar7_00);
  (*(code *)PTR_FUN_8c0366b4)(ar4,ar5_00,ar6,ar7_00);
  return 1;
}



/* noop_0366b8 @ 8c0366b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0366b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0366bc @ 8c0366bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0366bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0366e0)(*(undefined4 *)(DAT_8c0366dc + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0366e4 @ 8c0366e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0366e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0366ec;
  *(undefined1 *)(DAT_8c0366ec + ar4) = (undefined1)ar5;
  return iVar1;
}



/* FUN_8c0366f0 @ 8c0366f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0366f0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a4;
  undefined4 a6;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    a6 = 5;
    uVar1 = (*(code *)PTR_s_Shell_0fef9c_8c036788)(DAT_8c036784,6,5,ar7);
    *(undefined4 *)(DAT_8c03678c + ar4 + iVar2 * 4) = uVar1;
    a4 = *(int *)(DAT_8c03678c + ar4 + iVar2 * 4);
    (**(code **)(*(int *)(a4 + 8) + 0x54))(a4,DAT_8c036784,a6,ar7);
    uVar1 = (*(code *)PTR_s_CItemGLoader_RegistToLoad_0fed74_8c036794)
                      (*(undefined4 *)(DAT_8c036790 + ar5),
                       *(undefined4 *)(DAT_8c03678c + ar4 + iVar2 * 4),0,ar7);
    *(undefined4 *)(DAT_8c036798 + ar4 + iVar2 * 4) = uVar1;
  }
  return 6;
}



/* FUN_8c03679c @ 8c03679c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c03679c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = (*(code *)PTR_FUN_8c036870)
                      (*(undefined4 *)(DAT_8c03686c + ar5),
                       *(undefined4 *)(DAT_8c036868 + ar4 + iVar3 * 4),ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(DAT_8c036868 + ar4 + iVar3 * 4) != 0)) {
      uVar2 = (*(code *)PTR_FUN_8c036874)
                        (*(undefined4 *)(DAT_8c03686c + ar5),ar4 + iVar3 * 4 + DAT_8c036868,ar6,ar7)
      ;
      *(undefined4 *)(DAT_8c036878 + ar4 + iVar3 * 4) = uVar2;
    }
  }
  iVar3 = (*(code *)PTR_FUN_8c036870)
                    (*(undefined4 *)(DAT_8c03686c + ar5),*(undefined4 *)(DAT_8c03687c + ar4),ar6,ar7
                    );
  if ((iVar3 == 1) && (iVar3 = 0, *(int *)(DAT_8c03687c + ar4) != 0)) {
    (*(code *)PTR_FUN_8c036884)(ar4 + DAT_8c036880,2,ar6,ar7);
    uVar2 = (*(code *)PTR_FUN_8c036874)
                      (*(undefined4 *)(DAT_8c03686c + ar5),ar4 + DAT_8c03687c,ar6,ar7);
    iVar3 = DAT_8c036888;
    *(undefined4 *)(DAT_8c036888 + ar4) = uVar2;
  }
  return iVar3;
}



/* s_CSquidLine_036894 @ 8c03688c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CSquidLine_036894(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 a6;
  int iVar2;
  
  a6 = ar6;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    if (*(int *)(DAT_8c036968 + ar4 + iVar2 * 4) == 0) {
      ar7 = 2;
      a6 = 1;
      (*(code *)PTR_report_error_message_8c036980)
                (PTR_s_GRAPHICS_COMMON_8c036974 + DAT_8c03697c,
                 PTR_s_GRAPHICS_COMMON_8c036974 + DAT_8c036978,1,2);
    }
    else {
      iVar1 = *(int *)(DAT_8c036968 + ar4 + iVar2 * 4);
      ar5_00 = ar6;
      (**(code **)(DAT_8c03696c + *(int *)(iVar1 + 8)))(iVar1,ar6,a6,ar7);
      (*(code *)PTR_FUN_8c036970)(*(undefined4 *)(DAT_8c036968 + ar4 + iVar2 * 4),ar5_00,a6,ar7);
      iVar1 = *(int *)(DAT_8c036968 + ar4 + iVar2 * 4);
      (**(code **)(*(int *)(iVar1 + 8) + 0x5c))(iVar1,ar5_00,a6,ar7);
      (**(code **)(*ar5 + 0x4c))(ar5,*(undefined4 *)(DAT_8c036968 + ar4 + iVar2 * 4),a6,ar7);
    }
  }
  return 6;
}



/* noop_036984 @ 8c036984 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_036984(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c036988 @ 8c036988 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c036992) */
/* WARNING: Removing unreachable block (ram,0x8c03698c) */
/* WARNING: Removing unreachable block (ram,0x8c036996) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c036988(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 0x30) = in_fr4;
  *(undefined4 *)(ar4 + 0x34) = in_fr5;
  *(undefined4 *)(ar4 + 0x38) = in_fr6;
  return 1;
}



/* noop_0369a0 @ 8c0369a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0369a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0369a4 @ 8c0369a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0369a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + DAT_8c0369c0) + 0x1c))
                    ((int *)(ar4 + DAT_8c0369c0),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0369c4 @ 8c0369c4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c036a54) */
/* WARNING: Removing unreachable block (ram,0x8c036a12) */
/* WARNING: Removing unreachable block (ram,0x8c036a06) */
/* WARNING: Removing unreachable block (ram,0x8c0369fa) */
/* WARNING: Removing unreachable block (ram,0x8c0369f6) */
/* WARNING: Removing unreachable block (ram,0x8c0369f0) */
/* WARNING: Removing unreachable block (ram,0x8c0369ea) */
/* WARNING: Removing unreachable block (ram,0x8c0369c4) */
/* WARNING: Removing unreachable block (ram,0x8c0369e0) */
/* WARNING: Removing unreachable block (ram,0x8c0369ee) */
/* WARNING: Removing unreachable block (ram,0x8c0369f4) */
/* WARNING: Removing unreachable block (ram,0x8c0369f8) */
/* WARNING: Removing unreachable block (ram,0x8c036a02) */
/* WARNING: Removing unreachable block (ram,0x8c036a0e) */
/* WARNING: Removing unreachable block (ram,0x8c036a50) */
/* WARNING: Removing unreachable block (ram,0x8c036a60) */
/* WARNING: Unknown calling convention */

double * FUN_8c0369c4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  undefined4 in_fr15;
  double in_xd14;
  char cVar6;
  char cVar7;
  undefined4 in_stack_ffffffe4;
  
  cVar7 = '\0';
  cVar6 = '\0';
  *(float *)(ar4 + 0x468) =
       *(float *)(ar4 + 0x468) + (float)(int)*(char *)(ar4 + 0x46c) * 2.3148148e-06 * 8.0;
  fVar4 = *(float *)(ar4 + 0x468);
  iVar3 = ar5;
  if (fVar4 <= 1.0) {
    if (*(float *)(ar4 + 0x468) < 0.0) {
      *(undefined4 *)(ar4 + 0x468) = 0;
    }
  }
  else {
    uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
    in_stack_ffffffe4 = CONCAT22((short)((uint)in_stack_ffffffe4 >> 0x10),(short)uVar1);
    if ((short)uVar1 == 1) {
      if (cVar7 == '\0') {
        *(undefined4 *)(ar4 + 0x468) = 0x3f8147ae;
      }
      else {
        *(undefined8 *)(ar4 + 0x468) = 0x8c256fec3f8147ae;
      }
    }
    else if (cVar7 == '\0') {
      *(undefined4 *)(ar4 + 0x468) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x468) = CONCAT44(0x3f800000,fVar4);
    }
  }
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
    dVar5 = (double)CONCAT44(in_fr15,*(undefined4 *)(ar4 + 0x468));
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
  FUN_8c256fec(0,iVar3,ar6,ar7,in_stack_ffffffe4);
  FUN_8c02a29c(ar4,*(undefined4 *)(ar5 + 4),ar6,ar7);
  pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
  if (cVar7 == '\0') {
    *(undefined4 *)pdVar2 = in_fr15;
  }
  else {
    *pdVar2 = in_xd14;
  }
  return pdVar2;
}



/* FUN_8c036adc @ 8c036adc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c036aec) */
/* WARNING: Removing unreachable block (ram,0x8c036ae8) */
/* WARNING: Removing unreachable block (ram,0x8c036af0) */
/* WARNING: Unknown calling convention */

int FUN_8c036adc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined1 *puVar2;
  undefined4 *ar6_00;
  float *ar6_01;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined8 in_dr6;
  float in_fr8;
  float in_xf0;
  char cVar6;
  char cVar7;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_88 [3];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [12];
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar7 = '\0';
  cVar6 = '\0';
  fVar5 = (float)in_dr6;
  ar5_00 = 1;
  FUN_8c036d3c(*(undefined4 *)(ar4 + 0x308),1,ar6,ar7);
  FUN_8c036d2c(ar4 + 0xd2c,ar5_00,ar6,ar7);
  iVar1 = get_field_2fc_036d20(ar4 + 0xd2c,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = ar4 + 0x50;
    vec3_copy_8c02b5fc(auStack_40,iVar1,ar6,ar7);
    iVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x144))(ar4,iVar1,ar6,ar7);
    FUN_8c023484(iVar1 + 0xd8,auStack_40,ar6,ar7,auStack_50);
    Vec3_add(ar4 + 0x30,auStack_50,ar6,ar7,auStack_60);
    Vec3_ctor_copy(&uStack_18,auStack_60,ar6,ar7);
    Vec3_dtor(auStack_60,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_50,0xffffffff,ar6,ar7);
    object_dtor_delete(auStack_40,0xffffffff,ar6,ar7);
    if (cVar7 != '\0') {
      uStack_18 = uStack_c;
    }
    ar6_00 = &uStack_90;
    puVar2 = auStack_24;
    FUN_8c256294(0,puVar2,ar6_00,ar7);
    Vec3_ctor_zero(&fStack_34,puVar2,ar6_00,ar7);
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_90,fVar5);
      fStack_30 = in_xf0;
    }
    else {
      dVar4 = (double)CONCAT44(uStack_8c,uStack_90);
      fStack_30 = fVar5;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_18,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(uStack_14,uStack_18);
    }
    if (cVar6 == '\0') {
      fStack_34 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_34 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_8c,in_fr8);
    }
    else {
      dVar4 = (double)CONCAT44(auStack_88[0],uStack_8c);
      fStack_34 = fStack_30;
      fStack_30 = in_fr8;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(0xbf800000,fVar3);
    }
    else {
      dVar4 = 1.65674406927311e-311;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_14,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(uStack_10,uStack_14);
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      fStack_30 = fVar3;
      fVar5 = fStack_28;
    }
    fStack_28 = fVar5;
    uStack_2c = (int)((ulonglong)in_dr6 >> 0x20);
    FUN_8c02ace4(*(undefined4 *)(ar4 + 0x30c),puVar2,ar6_00,ar7,auStack_70);
    Vec3_set_xyz(auStack_7c,puVar2,ar6_00,ar7);
    puVar2 = auStack_70;
    ar6_01 = &fStack_34;
    FUN_8c0332b4(*(undefined4 *)(ar4 + 0x30c),&uStack_18,ar6_01,puVar2,auStack_88,auStack_7c);
    vec3_copy_8c023d8c(ar4 + 0x3fc,auStack_88,ar6_01,puVar2);
    object_dtor_delete(auStack_88,0xffffffff,ar6_01,puVar2);
    object_dtor_delete(auStack_7c,0xffffffff,ar6_01,puVar2);
    Vec3_dtor(auStack_70,0xffffffff,ar6_01,puVar2);
    Vec3_dtor(&fStack_34,0xffffffff,ar6_01,puVar2);
    iVar1 = Vec3_dtor(&uStack_18,0xffffffff,ar6_01,puVar2);
  }
  return iVar1;
}



/* get_field_2fc_036d20 @ 8c036d20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_2fc_036d20(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c036d28 + ar4);
}



/* FUN_8c036d2c @ 8c036d2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c036d2c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c036d38;
  *(undefined4 *)(DAT_8c036d38 + ar4) = 1;
  return iVar1;
}



/* FUN_8c036d3c @ 8c036d3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c036d3c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c036d44;
  *(undefined1 *)(DAT_8c036d44 + ar4) = (undefined1)ar5;
  return iVar1;
}



/* FUN_8c036d48 @ 8c036d48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c036d48(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c036d6c)(*(undefined4 *)(DAT_8c036d68 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c036d70 @ 8c036d70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c036d70(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c036d78;
  *(undefined1 *)(DAT_8c036d78 + ar4) = (undefined1)ar5;
  return iVar1;
}



/* CAnimal_m7_036d7c @ 8c036d7c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c036d7c) */
/* WARNING: Removing unreachable block (ram,0x8c036d7e) */
/* WARNING: Unknown calling convention */

undefined4 CAnimal_m7_036d7c(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *a5;
  undefined4 *a6;
  float fVar3;
  double in_dr0;
  double dVar4;
  double dVar5;
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
  
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar9 = '\0';
  cVar8 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&uStack_24,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_34,ar5_00,ar6,ar7);
  dVar5 = (double)CONCAT44(uVar2,0x3f800000);
  iVar1 = get_field_300_036f50(ar4 + 0xd2c,ar5_00,ar6,ar7);
  if ((iVar1 == 1) && ((**(code **)(*(int *)(ar4 + 8) + 0x170))(ar4,ar5_00,ar6,ar7), cVar9 == '\0'))
  {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
  }
  a6 = &uStack_34;
  a5 = &uStack_24;
  (**(code **)(*ar5 + 0x124))(ar5,a5,a6,ar7);
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x30));
  }
  fVar6 = SUB84(dVar5,0);
  if (cVar8 == '\0') {
    fVar3 = SUB84(in_dr0,0) - fVar6;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar5,0);
  }
  if (cVar9 == '\0') {
    dVar4 = (double)CONCAT44(uStack_24,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(uStack_20,uStack_24);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar8 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x30));
    }
    if (cVar8 == '\0') {
      fVar3 = SUB84(dVar4,0) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar5,0);
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(uStack_34,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(fStack_30,uStack_34);
    }
    if (cVar8 != '\0' || (float)((ulonglong)dVar4 >> 0x20) <= SUB84(dVar4,0)) {
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(uStack_34,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(fStack_30,uStack_34);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar4;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(uStack_24,SUB84(dVar4,0));
    }
    else {
      dVar4 = (double)CONCAT44(uStack_20,uStack_24);
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar5;
    }
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x30) = dVar4;
    }
  }
  if (cVar9 == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 0x38));
  }
  if (cVar8 == '\0') {
    fVar3 = SUB84(dVar4,0) - fVar6;
  }
  else {
    fVar3 = SUB84(dVar4 - dVar5,0);
  }
  if (cVar9 == '\0') {
    dVar4 = (double)CONCAT44(uStack_1c,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(uStack_18,uStack_1c);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar8 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x38));
    }
    if (cVar8 == '\0') {
      fVar3 = SUB84(dVar4,0) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar5,0);
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(fStack_2c,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(uStack_28,fStack_2c);
    }
    if (cVar8 != '\0' || (float)((ulonglong)dVar4 >> 0x20) <= SUB84(dVar4,0)) {
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(fStack_2c,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(uStack_28,fStack_2c);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x38) = dVar4;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(uStack_1c,SUB84(dVar4,0));
    }
    else {
      dVar4 = (double)CONCAT44(uStack_18,uStack_1c);
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar5;
    }
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x38) = dVar4;
    }
  }
  iVar1 = get_field_338_036f00(ar4 + 0xd2c,a5,a6,ar7);
  uVar2 = SUB84(dVar5,0);
  if (iVar1 != 1) {
    (**(code **)(*ar5 + 0x128))(ar5,ar4 + 0x30,a6,ar7);
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar4,0));
      dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),uVar2);
    }
    else {
      dVar5 = *(double *)(ar4 + 0x34);
    }
    fVar6 = (float)((ulonglong)dVar4 >> 0x20);
    if (cVar8 == '\0') {
      bVar7 = fVar6 < (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      bVar7 = dVar4 < dVar5;
    }
    if (bVar7) {
      fVar6 = fStack_30;
      fVar3 = fStack_2c;
      if (cVar9 == '\0') {
        fVar6 = *(float *)(ar4 + 0x34);
        fVar3 = fStack_30;
      }
      if (cVar8 != '\0' || fVar3 <= fVar6) {
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
      *(double *)(ar4 + 0x34) = dVar4;
    }
  }
  Vec3_dtor(&uStack_34,0xffffffff,a6,ar7);
  uVar2 = Vec3_dtor(&uStack_24,0xffffffff,a6,ar7);
  return uVar2;
}



/* get_field_338_036f00 @ 8c036f00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_338_036f00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c036f08 + ar4);
}



/* FUN_8c036f0c @ 8c036f0c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c036f3c) */
/* WARNING: Removing unreachable block (ram,0x8c036f32) */
/* WARNING: Removing unreachable block (ram,0x8c036f24) */
/* WARNING: Removing unreachable block (ram,0x8c036f16) */
/* WARNING: Removing unreachable block (ram,0x8c036f0e) */
/* WARNING: Removing unreachable block (ram,0x8c036f1c) */
/* WARNING: Removing unreachable block (ram,0x8c036f26) */
/* WARNING: Removing unreachable block (ram,0x8c036f34) */
/* WARNING: Removing unreachable block (ram,0x8c036f3e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c036f0c(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  *ar5 = 0;
  ar5[1] = 0;
  ar5[2] = 0;
  *ar6 = *(undefined4 *)(ar4 + 0xba8);
  ar6[1] = *(undefined4 *)(ar4 + 0xbac);
  ar6[2] = *(undefined4 *)(ar4 + 0xbb0);
  return 0xbb0;
}



/* get_field_300_036f50 @ 8c036f50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_300_036f50(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c036f58 + ar4);
}



/* FUN_8c036f5c @ 8c036f5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c036f5c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(DAT_8c036f80 + ar4) + 0x48))
                    (*(int **)(DAT_8c036f80 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c036f84 @ 8c036f84 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c036fd2) */
/* WARNING: Removing unreachable block (ram,0x8c036fce) */
/* WARNING: Removing unreachable block (ram,0x8c036fc0) */
/* WARNING: Removing unreachable block (ram,0x8c036fb2) */
/* WARNING: Removing unreachable block (ram,0x8c036fae) */
/* WARNING: Removing unreachable block (ram,0x8c036fa0) */
/* WARNING: Removing unreachable block (ram,0x8c036f94) */
/* WARNING: Removing unreachable block (ram,0x8c036f8e) */
/* WARNING: Removing unreachable block (ram,0x8c036f84) */
/* WARNING: Removing unreachable block (ram,0x8c036f92) */
/* WARNING: Removing unreachable block (ram,0x8c036f9e) */
/* WARNING: Removing unreachable block (ram,0x8c036fa2) */
/* WARNING: Removing unreachable block (ram,0x8c036fb0) */
/* WARNING: Removing unreachable block (ram,0x8c036fbe) */
/* WARNING: Removing unreachable block (ram,0x8c036fc2) */
/* WARNING: Removing unreachable block (ram,0x8c036fd0) */
/* WARNING: Removing unreachable block (ram,0x8c03700c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c036f84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = (float)*(int *)(ar4 + 0x458) / 216000.0;
  *(float *)(ar4 + 0x438) = DAT_8c13367c * fVar3;
  *(float *)(ar4 + 0x43c) = DAT_8c133680 * fVar3;
  *(float *)(ar4 + 0x440) = DAT_8c133684 * fVar3;
  *(float *)(ar4 + 0x444) = DAT_8c133688 * fVar3;
  iVar1 = *(int *)(ar4 + 0x458);
  *(int *)(ar4 + 0x458) = iVar1 + 1;
  uVar2 = 0x34bc0;
  if (0x34bc0 < iVar1 + 1) {
    *(undefined4 *)(ar4 + 0x458) = 0;
    uVar2 = 0x74;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0x7fffffff;
  }
  return uVar2;
}



/* FUN_8c037034 @ 8c037034 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

float * FUN_8c037034(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float in_fr1;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  FUN_8c02702c(ar4,ar5,ar6,ar7);
  uVar2 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  sVar1 = (short)uVar2;
  uVar2 = FUN_8c015510(*(int *)(sVar1 * 0x124 + *(int *)(ar4 + 0x328)) + 0x1e8,ar5,ar6,ar7);
  iVar3 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + sVar1 * 0x124 + 0x70,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x344) = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c);
  *(undefined4 *)(ar4 + 0x348) = *(undefined4 *)(*(int *)(ar4 + 0x344) + 0x2c);
  *(undefined4 *)(ar4 + 0x34c) = *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x344) + 0x2c) + 0x30);
  if (sVar1 < 3) {
    *(undefined4 *)(ar4 + 0x350) =
         *(undefined4 *)(*(int *)(*(int *)(*(int *)(ar4 + 0x344) + 0x2c) + 0x30) + 0x30);
  }
  else {
    *(undefined4 *)(ar4 + 0x350) =
         *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(*(int *)(ar4 + 0x344) + 0x2c) + 0x30) + 0x30) + 0x30);
  }
  *(undefined4 *)(*(int *)(ar4 + 0x348) + 4) = uVar2;
  *(undefined4 *)(*(int *)(ar4 + 0x34c) + 4) = uVar2;
  if (cVar7 == '\0') {
    *(undefined4 *)(ar4 + 0x374) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x374) = (ulonglong)(uint)in_fr1;
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(ar4 + 0x378) = 0;
    *(undefined4 *)(ar4 + 0x37c) = 0x40a00000;
  }
  else {
    *(ulonglong *)(ar4 + 0x378) = (ulonglong)(uint)in_fr1;
    in_fr1 = 5.0;
    *(undefined8 *)(ar4 + 0x37c) = 0x3a040a00000;
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(ar4 + 0x3a0) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x3a0) = (ulonglong)(uint)in_fr1;
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(ar4 + 0x3a4) = 0;
    *(undefined4 *)(ar4 + 0x3a8) = 0x40a00000;
  }
  else {
    *(ulonglong *)(ar4 + 0x3a4) = (ulonglong)(uint)in_fr1;
    in_fr1 = 5.0;
    *(undefined8 *)(ar4 + 0x3a8) = 0x3a040a00000;
  }
  FUN_8c02a788(ar4,ar5,ar6,ar7);
  FUN_8c02aabc(ar4,ar5,ar6,ar7);
  uVar2 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  iVar5 = (int)(short)uVar2;
  pfVar4 = (float *)0x4;
  if ((iVar5 < 5) && (-1 < iVar5)) {
    pfVar4 = (float *)(&switchD_8c03716a::switchdataD_8c037170)[iVar5];
                    /* WARNING: Switch is manually overridden */
    switch(iVar5) {
    case 0:
      *(undefined4 *)(ar4 + 0x360) =
           *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30);
      *(undefined4 *)(ar4 + 0x35c) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x30);
      pfVar4 = (float *)0x46c;
      *(undefined1 *)(ar4 + 0x46c) = 0xff;
      break;
    case 1:
      *(undefined4 *)(ar4 + 0x358) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x2c);
      pfVar4 = (float *)0x354;
      *(undefined4 *)(ar4 + 0x354) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                     0x30) + 0x2c);
      break;
    case 2:
      *(undefined4 *)(ar4 + 0x360) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) + 0x2c) +
                                       0x30) + 0x30) + 0x30) + 0x2c);
      *(undefined4 *)(ar4 + 0x35c) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) +
                                                         0x2c) + 0x30) + 0x30) + 0x30) + 0x30) +
            0x2c);
      pfVar4 = (float *)(ar4 + 0x468);
      if (cVar7 == '\0') {
        in_fr1 = *pfVar4;
      }
      if (cVar6 == '\0' && 1.0 < in_fr1) {
        pfVar4 = (float *)0x468;
        if (cVar7 == '\0') {
          *(undefined4 *)(ar4 + 0x468) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x468) = (ulonglong)(uint)in_fr1;
        }
      }
      break;
    case 3:
      *(undefined4 *)(ar4 + 0x360) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x2c) + 0x2c) +
                                                         0x2c) + 0x30) + 0x30) + 0x30) + 0x30) +
            0x30);
      pfVar4 = (float *)0x46c;
      *(undefined1 *)(ar4 + 0x46c) = 0xff;
    }
  }
  return pfVar4;
}



/* s_Tm1_Home_njd_0372a2 @ 8c0372a0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c037410) */
/* WARNING: Removing unreachable block (ram,0x8c0373fc) */
/* WARNING: Removing unreachable block (ram,0x8c0373f0) */
/* WARNING: Removing unreachable block (ram,0x8c0373e4) */
/* WARNING: Removing unreachable block (ram,0x8c0373d8) */
/* WARNING: Removing unreachable block (ram,0x8c0373ae) */
/* WARNING: Removing unreachable block (ram,0x8c0373a8) */
/* WARNING: Removing unreachable block (ram,0x8c03739c) */
/* WARNING: Removing unreachable block (ram,0x8c037392) */
/* WARNING: Removing unreachable block (ram,0x8c03737a) */
/* WARNING: Removing unreachable block (ram,0x8c037378) */
/* WARNING: Removing unreachable block (ram,0x8c037384) */
/* WARNING: Removing unreachable block (ram,0x8c03739a) */
/* WARNING: Removing unreachable block (ram,0x8c0373a6) */
/* WARNING: Removing unreachable block (ram,0x8c0373ac) */
/* WARNING: Removing unreachable block (ram,0x8c0373b0) */
/* WARNING: Removing unreachable block (ram,0x8c0373da) */
/* WARNING: Removing unreachable block (ram,0x8c0373e6) */
/* WARNING: Removing unreachable block (ram,0x8c0373f2) */
/* WARNING: Removing unreachable block (ram,0x8c037406) */
/* WARNING: Removing unreachable block (ram,0x8c037412) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Unknown calling convention */

undefined4 s_Tm1_Home_njd_0372a2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined **ar5_00;
  undefined1 *ar6_00;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  undefined4 in_stack_ffffff34;
  undefined1 auStack_bc [12];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  undefined1 auStack_14 [16];
  
  _DAT_8c27e09c = (ulonglong)_DAT_8c27e09c;
  cVar12 = '\0';
  cVar11 = '\0';
  for (iVar6 = 0; iVar6 < 5; iVar6 = iVar6 + 1) {
    *(undefined1 **)(iVar6 * 0x124 + -0x73d8202c) = &DAT_8c27d1fc;
  }
  _DAT_8c27dfd8 = &PTR_s_Tm1_Idle1_njm_8c1336b8;
  _DAT_8c27dfdc = &PTR_s_Tm1_Idle1_njs_8c133718;
  _DAT_8c27dfe0 = PTR_s_Tm1_Home_njd_8c133694;
  _DAT_8c27dfe4 = PTR_s_TM1_FACE_8c1336ac;
  _DAT_8c27dfe8 = PTR_s_TM1_BODY_TEX_8c1336b0;
  _DAT_8c27dfec = PTR_s_Tm1_MotionPack_npd_8c133698;
  _DAT_8c27dff0 = PTR_s_Hand_for_tm1_njm_8c1336b4;
  _DAT_8c27dff4 = PTR_s_Tm1_normal_PVM_8c13369c;
  _DAT_8c27dff8 = 2;
  _DAT_8c27e004 = 0x8c27eea4;
  _DAT_8c27e008 = PTR_s_Tm1_special_PVM_8c1336a0;
  _DAT_8c27e00c = 2;
  _DAT_8c27e018 = 0x8c27eebc;
  _DAT_8c27e01c = PTR_s_Tm1_head_normal_PVM_8c1336a4;
  _DAT_8c27e020 = 10;
  _DAT_8c27e02c = 0x8c27eed4;
  _DAT_8c27e030 = PTR_s_Tm1_head_special_PVM_8c1336a8;
  _DAT_8c27e034 = 10;
  _DAT_8c27e040 = 0x8c27ef4c;
  _DAT_8c27e088 = 0x8c27fd30;
  _DAT_8c27e08c = 0x3f000000;
  _DAT_8c27e090 = 0x3f800000;
  uVar4 = 0x8c27dfd4;
  _DAT_8c27e098 = (short)(int)(14400.0 / (0.5 / _DAT_8c27e094));
  if (_DAT_8c27e098 == 0) {
    _DAT_8c27e098 = 1;
  }
  _DAT_8c27e09c = CONCAT44(0x3ca3d70a,_DAT_8c27e09c);
  _DAT_8c27e0a4 = 0x3f4ccccd;
  _DAT_8c27e0a8 = 0x43480000;
  _DAT_8c27e0ac = 0;
  ar6_00 = &DAT_8c27e0b0;
  _DAT_8c27e0b0 = 0;
  _DAT_8c27e0b4 = 0x41400000;
  Class_129920_m0_015248(0x8c27e05c,&PTR_PTR_8c13400c,&DAT_8c27e0b0,0x8c27dfd4,in_stack_ffffff34);
  Class_129920_m0_015248(0x8c27e064,&PTR_PTR_8c13400c,ar6_00,uVar4,in_stack_ffffff34);
  _DAT_8c27e074 = 0x8c27e5c0;
  _DAT_8c27e078 = 0x18;
  _DAT_8c27e07c = 0x8c27e62c;
  _DAT_8c27e080 = 0x18;
  Vec3_set_xyz(auStack_14,0x8c27e62c,ar6_00,uVar4);
  vec3_copy_8c023d8c(0x8c27e0cc,auStack_14,ar6_00,uVar4);
  uVar1 = 0xffffffff;
  object_dtor_delete(auStack_14,0xffffffff,ar6_00,uVar4);
  Vec3_set_xyz(auStack_20,uVar1,ar6_00,uVar4);
  vec3_copy_8c023d8c(0x8c27e0d8,auStack_20,ar6_00,uVar4);
  uVar1 = 0xffffffff;
  object_dtor_delete(auStack_20,0xffffffff,ar6_00,uVar4);
  Vec3_set_xyz(auStack_2c,uVar1,ar6_00,uVar4);
  vec3_copy_8c023d8c(0x8c27e0e4,auStack_2c,ar6_00,uVar4);
  object_dtor_delete(auStack_2c,0xffffffff,ar6_00,uVar4);
  if (cVar12 == '\0') {
    _DAT_8c27e0f4 = CONCAT44(DAT_8c27e0f4_4,0x42dc0000);
    _DAT_8c27e0c0 = CONCAT44(DAT_8c27e0c0_4,0x41c00000);
    dVar9 = (double)CONCAT44(0x3f000000,_DAT_8c27e09c);
  }
  else {
    _DAT_8c27e0f4 = 0xec42dc0000;
    _DAT_8c27e0c0 = 0xc841c00000;
    dVar9 = 3.99457418603154e-312;
    in_xd0 = _DAT_8c27e09c;
  }
  if (cVar11 == '\0') {
    _DAT_8c27e1b4 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    _DAT_8c27e1b4 = SUB84(dVar9 * dVar9,0);
  }
  uVar10 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c27e09c = CONCAT44(_DAT_8c27e0a0,_DAT_8c27e1b4);
    uVar10 = _DAT_8c27e09c;
  }
  _DAT_8c27e09c = uVar10;
  _DAT_8c27e0fc = &PTR_s_Tm2_Idle1_njm_8c1337a0;
  _DAT_8c27e100 = &PTR_s_Tm2_Idle1_njs_8c1337f8;
  _DAT_8c27e104 = PTR_s_Tm2_Home_njd_8c13377c;
  uVar4 = 0x134;
  _DAT_8c27e108 = PTR_s_TM2_FACE_8c133794;
  _DAT_8c27e10c = PTR_s_TM2_BODY_TEX_8c133798;
  _DAT_8c27e110 = PTR_s_Tm2_MotionPack_npd_8c133780;
  _DAT_8c27e114 = PTR_s_Hand_for_tm2_njm_8c13379c;
  _DAT_8c27e118 = PTR_s_Tm2_normal_PVM_8c133784;
  _DAT_8c27e11c = 9;
  _DAT_8c27e128 = 0x8c27efc4;
  _DAT_8c27e12c = PTR_s_Tm2_special_PVM_8c133788;
  _DAT_8c27e130 = 9;
  _DAT_8c27e13c = 0x8c27f030;
  _DAT_8c27e140 = PTR_s_Tm2_head_normal_PVM_8c13378c;
  _DAT_8c27e144 = 10;
  _DAT_8c27e150 = 0x8c27f09c;
  _DAT_8c27e154 = PTR_s_Tm2_head_special_PVM_8c133790;
  _DAT_8c27e158 = 10;
  _DAT_8c27e164 = 0x8c27f114;
  _DAT_8c27e1ac = 0x8c27fdd0;
  if (cVar12 != '\0') {
    _DAT_8c27e1b4 = 0.55;
  }
  _DAT_8c27e1b0 = 0x3f0ccccd;
  if (cVar12 == '\0') {
    _DAT_8c27e1b4 = 1.0;
    dVar9 = 5.493165366488029e-05;
  }
  else {
    _DAT_8c27e1b8 = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,_DAT_8c27e1b4);
    dVar9 = (double)CONCAT44(_DAT_8c27e1b4,0x3f0ccccd);
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar9 - dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(_DAT_8c27e1b8,fVar7);
  }
  else {
    dVar9 = (double)CONCAT26(uRam8c27e1be,CONCAT24(_DAT_8c27e1bc,_DAT_8c27e1b8));
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x46610000,fVar7);
  }
  else {
    dVar9 = 1.05309328631423e-311;
  }
  if (cVar11 == '\0') {
    fVar7 = (float)((ulonglong)dVar9 >> 0x20) / SUB84(dVar9,0);
    dVar9 = (double)CONCAT44(fVar7,SUB84(dVar9,0));
    _DAT_8c27e1bc = (short)(int)fVar7;
  }
  else {
    dVar9 = dVar9 / dVar9;
    _DAT_8c27e1bc = (short)(int)dVar9;
  }
  uVar1 = 0x8c27dfd4;
  if (_DAT_8c27e1bc == 0) {
    _DAT_8c27e1bc = 1;
  }
  if (cVar12 == '\0') {
    _DAT_8c27e1d4 = SUB84(dVar9,0);
  }
  else {
    _DAT_8c27e1d4 = 0x437a0000;
  }
  _DAT_8c27e1cc = 0x437a0000;
  _DAT_8c27e1c8 = 0x3f4ccccd;
  _DAT_8c27e1c0 = CONCAT44(0x3ca3d70a,(int)_DAT_8c27e1c0);
  if (cVar12 == '\0') {
    _DAT_8c27e1d4 = 0;
  }
  else {
    ppuRam8c27e1dc = &PTR_PTR_8c134050;
  }
  _DAT_8c27e1d8 = 0x41900000;
  _DAT_8c27e1d0 = _DAT_8c27e1d4;
  Class_129920_m0_015248(0x8c27e180,&PTR_PTR_8c134050,0x8c27dfd4,0x134,in_stack_ffffff34);
  Class_129920_m0_015248(0x8c27e188,&PTR_PTR_8c134050,uVar1,uVar4,in_stack_ffffff34);
  _DAT_8c27e198 = 0x8c27e698;
  _DAT_8c27e19c = 0x16;
  _DAT_8c27e1a0 = 0x8c27e6fc;
  _DAT_8c27e1a4 = 0x16;
  Vec3_set_xyz(auStack_38,0x16,0x8c27dfd4,uVar4);
  uVar1 = 0x8c27e1f0;
  pcVar2 = vec3_copy_8c023d8c;
  vec3_copy_8c023d8c(0x8c27e1f0,auStack_38,vec3_copy_8c023d8c,0x8c27e1f0);
  object_dtor_delete(auStack_38,0xffffffff,pcVar2,uVar1);
  Vec3_set_xyz(auStack_44,auStack_44,pcVar2,uVar1);
  vec3_copy_8c023d8c(0x8c27e1fc,auStack_44,pcVar2,uVar1);
  uVar4 = 0xffffffff;
  object_dtor_delete(auStack_44,0xffffffff,pcVar2,uVar1);
  Vec3_set_xyz(auStack_50,uVar4,pcVar2,uVar1);
  vec3_copy_8c023d8c(0x8c27e208,auStack_50,pcVar2,uVar1);
  object_dtor_delete(auStack_50,0xffffffff,auStack_50,uVar1);
  if (cVar12 == '\0') {
    _DAT_8c27e218 = CONCAT44(DAT_8c27e218_4,0x43200000);
    _DAT_8c27e1e4 = CONCAT44(DAT_8c27e1e4_4,0x42200000);
    dVar9 = (double)CONCAT44(0x3f19999a,_DAT_8c27e1c0);
  }
  else {
    _DAT_8c27e218 = 0x21043200000;
    _DAT_8c27e1e4 = 0x1ec42200000;
    dVar9 = 1.24825656389407e-311;
    in_xd0 = _DAT_8c27e1c0;
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar9 * dVar9,0);
  }
  uVar10 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c27e1c0 = CONCAT44(_DAT_8c27e1c4,fVar7);
    uVar10 = _DAT_8c27e1c0;
  }
  _DAT_8c27e1c0 = uVar10;
  _DAT_8c27e220 = &PTR_s_Tm3_Idle_njm_8c133878;
  _DAT_8c27e224 = &PTR_s_Tm3_Idle_njs_8c1338d4;
  _DAT_8c27e228 = PTR_s_Tm3_Home_njd_8c133854;
  _DAT_8c27e22c = PTR_s_TM3_FACE_8c13386c;
  _DAT_8c27e230 = PTR_s_TM3_BODY_TEX_8c133870;
  _DAT_8c27e234 = PTR_s_Tm3_MotionPack_npd_8c133858;
  _DAT_8c27e238 = PTR_s_Hand_for_tm3_njm_8c133874;
  _DAT_8c27e23c = PTR_s_Tm3_normal_PVM_8c13385c;
  _DAT_8c27e240 = 0xf;
  _DAT_8c27e24c = 0x8c27f18c;
  _DAT_8c27e250 = PTR_s_Tm3_special_PVM_8c133860;
  _DAT_8c27e254 = 0xf;
  _DAT_8c27e260 = 0x8c27f240;
  _DAT_8c27e264 = PTR_s_Tm3_head_normal_PVM_8c133864;
  _DAT_8c27e268 = 10;
  _DAT_8c27e274 = 0x8c27f2f4;
  _DAT_8c27e278 = PTR_s_Tm3_head_special_PVM_8c133868;
  _DAT_8c27e27c = 10;
  _DAT_8c27e288 = 0x8c27f36c;
  _DAT_8c27e2d0 = 0x8c27fe70;
  if (cVar12 == '\0') {
    _DAT_8c27e2d8 = 1.0;
  }
  else {
    _DAT_8c27e2d8 = 0.7;
    _DAT_8c27e2dc = 0x3f800000;
  }
  uVar4 = 0x30c;
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x3f333333,_DAT_8c27e2d8);
  }
  else {
    in_xd0 = CONCAT44(_DAT_8c27e2dc,_DAT_8c27e2d8);
    dVar9 = (double)CONCAT44(_DAT_8c27e2d8,0x3f333333);
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar9 - dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(_DAT_8c27e2dc,fVar7);
  }
  else {
    dVar9 = (double)CONCAT26(uRam8c27e2e2,CONCAT24(_DAT_8c27e2e0,_DAT_8c27e2dc));
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x46610000,fVar7);
  }
  else {
    dVar9 = 1.05309328631423e-311;
  }
  if (cVar11 == '\0') {
    fVar7 = (float)((ulonglong)dVar9 >> 0x20) / SUB84(dVar9,0);
    dVar9 = (double)CONCAT44(fVar7,SUB84(dVar9,0));
    _DAT_8c27e2e0 = (short)(int)fVar7;
  }
  else {
    dVar9 = dVar9 / dVar9;
    _DAT_8c27e2e0 = (short)(int)dVar9;
  }
  if (_DAT_8c27e2e0 == 0) {
    _DAT_8c27e2e0 = 1;
  }
  if (cVar12 == '\0') {
    uVar1 = SUB84(dVar9,0);
  }
  else {
    uVar1 = 0x43660000;
  }
  _DAT_8c27e2f0 = 0x43660000;
  _DAT_8c27e2ec = 0x3f4ccccd;
  _DAT_8c27e2e4 = CONCAT44(0x3ca3d70a,(int)_DAT_8c27e2e4);
  if (cVar12 == '\0') {
    _DAT_8c27e2f8 = 0;
    _DAT_8c27e2d8 = (float)uVar1;
  }
  else {
    uRam8c27e300 = 0x300;
    _DAT_8c27e2d8 = 0.92;
    _DAT_8c27e2f8 = uVar1;
  }
  _DAT_8c27e2fc = 0x41ec0000;
  _DAT_8c27e2d4 = 0x3f6b851f;
  if (cVar12 == '\0') {
    _DAT_8c27e2d8 = 1.0;
  }
  else {
    _DAT_8c27e2dc = 0x3f800000;
  }
  _DAT_8c27e2f4 = _DAT_8c27e2f8;
  Class_129920_m0_015248
            (0x8c27e2a4,&PTR_PTR_8c134094,Class_129920_m0_015248,0x30c,in_stack_ffffff34);
  ar5_00 = &PTR_PTR_8c134094;
  Class_129920_m0_015248
            (0x8c27e2ac,&PTR_PTR_8c134094,Class_129920_m0_015248,uVar4,in_stack_ffffff34);
  _DAT_8c27e2bc = 0x8c27e760;
  _DAT_8c27e2c0 = 0x17;
  _DAT_8c27e2c4 = 0x8c27e7c8;
  uVar1 = 0x2f4;
  _DAT_8c27e2c8 = 0x17;
  Vec3_set_xyz(auStack_5c,ar5_00,0x2f4,uVar4);
  vec3_copy_8c023d8c(0x8c27e314,auStack_5c,uVar1,uVar4);
  uVar1 = 0xffffffff;
  pcVar2 = object_dtor_delete;
  object_dtor_delete(auStack_5c,0xffffffff,object_dtor_delete,uVar4);
  Vec3_set_xyz(auStack_68,uVar1,pcVar2,uVar4);
  vec3_copy_8c023d8c(0x8c27e320,auStack_68,pcVar2,uVar4);
  object_dtor_delete(auStack_68,0xffffffff,pcVar2,uVar4);
  Vec3_set_xyz(auStack_74,auStack_74,pcVar2,uVar4);
  vec3_copy_8c023d8c(0x8c27e32c,auStack_74,pcVar2,uVar4);
  object_dtor_delete(auStack_74,0xffffffff,pcVar2,uVar4);
  if (cVar12 == '\0') {
    _DAT_8c27e33c = CONCAT44(DAT_8c27e33c_4,0x435c0000);
    _DAT_8c27e308 = CONCAT44(DAT_8c27e308_4,0x42820000);
  }
  else {
    _DAT_8c27e33c = 0x334435c0000;
    _DAT_8c27e308 = 0x31042820000;
  }
  uVar4 = 0x8c27dfd4;
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x3f4ccccd,_DAT_8c27e2e4);
  }
  else {
    dVar9 = 1.68963334622396e-311;
    in_xd0 = _DAT_8c27e2e4;
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar9 * dVar9,0);
  }
  uVar10 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c27e2e4 = CONCAT44(_DAT_8c27e2e8,fVar7);
    uVar10 = _DAT_8c27e2e4;
  }
  _DAT_8c27e2e4 = uVar10;
  _DAT_8c27e344 = &PTR_s_fm1_W_Idle_njm_8c133958;
  _DAT_8c27e348 = &PTR_DAT_8c133aec;
  _DAT_8c27e34c = PTR_s_Fm1_G_Home_njd_8c133934;
  _DAT_8c27e350 = PTR_s_FM1_FACE_8c13394c;
  _DAT_8c27e354 = PTR_s_FM1_BODY_TEX_8c133950;
  uVar5 = 900;
  _DAT_8c27e358 = PTR_s_fm1_MotionPack_npd_8c133938;
  _DAT_8c27e35c = PTR_s_Hand_for_fm1_njm_8c133954;
  _DAT_8c27e360 = PTR_s_fm1_normal_PVM_8c13393c;
  _DAT_8c27e364 = 0x11;
  _DAT_8c27e370 = 0x8c27f3e4;
  _DAT_8c27e374 = PTR_s_fm1_special_PVM_8c133940;
  _DAT_8c27e378 = 0x11;
  _DAT_8c27e384 = 0x8c27f4b0;
  _DAT_8c27e388 = PTR_s_Fm1_head_normal_PVM_8c133944;
  _DAT_8c27e38c = 10;
  uVar1 = 0x8c27dfd4;
  _DAT_8c27e398 = 0x8c27f57c;
  _DAT_8c27e39c = PTR_s_Fm1_head_special_PVM_8c133948;
  _DAT_8c27e3a0 = 10;
  _DAT_8c27e3ac = 0x8c27f5f4;
  _DAT_8c27e3f4 = 0x8c27ff10;
  uVar10 = CONCAT44(0x3f800000,fVar7);
  if (cVar12 == '\0') {
    _DAT_8c27e3fc = CONCAT44(DAT_8c27e3fc_4,0x3f800000);
  }
  else {
    fVar7 = 240.0;
    _DAT_8c27e3fc = uVar10;
  }
  _DAT_8c27e414 = 0x43700000;
  _DAT_8c27e410 = 0x3e99999a;
  _DAT_8c27e40c = 0x3a1d4952;
  if (cVar12 == '\0') {
    _DAT_8c27e418 = 0.0;
    fVar8 = fVar7;
  }
  else {
    ppuRam8c27e424 = &PTR_PTR_8c1340d8;
    fVar8 = 0.8;
    _DAT_8c27e418 = fVar7;
  }
  _DAT_8c27e420 = 0x427e0000;
  _DAT_8c27e41c = 0x42600000;
  _DAT_8c27e2d4 = 0x3f4ccccd;
  if (cVar12 == '\0') {
    _DAT_8c27e2d8 = 1.0;
  }
  else {
    _DAT_8c27e2dc = 0x3f800000;
    _DAT_8c27e2d8 = fVar8;
  }
  Class_129920_m0_015248(0x8c27e3c8,&PTR_PTR_8c1340d8,0x8c27dfd4,900,0x8c27dfd4);
  Class_129920_m0_015248(0x8c27e3d0,&PTR_PTR_8c1340d8,uVar1,uVar5,uVar4);
  _DAT_8c27e3e0 = 0x8c27e830;
  _DAT_8c27e3e4 = 0x65;
  _DAT_8c27e3e8 = 0x8c27e9d0;
  _DAT_8c27e3ec = 0x65;
  Vec3_set_xyz(auStack_80,0x414,Vec3_set_xyz,uVar5);
  uVar3 = 0x8c27e438;
  vec3_copy_8c023d8c(0x8c27e438,auStack_80,0x8c27e438,uVar5);
  uVar1 = 0xffffffff;
  object_dtor_delete(auStack_80,0xffffffff,uVar3,uVar5);
  Vec3_set_xyz(auStack_8c,uVar1,uVar3,uVar5);
  uVar5 = 0x470;
  uVar3 = 0x8c27e444;
  vec3_copy_8c023d8c(0x8c27e444,auStack_8c,0x470,0x8c27e444);
  uVar1 = 0xffffffff;
  object_dtor_delete(auStack_8c,0xffffffff,uVar5,uVar3);
  Vec3_set_xyz(auStack_98,uVar1,uVar5,uVar3);
  vec3_copy_8c023d8c(0x8c27e450,auStack_98,uVar5,uVar3);
  object_dtor_delete(auStack_98,0xffffffff,uVar5,uVar3);
  if (cVar12 == '\0') {
    _DAT_8c27e460 = CONCAT44(DAT_8c27e460_4,0x43660000);
    _DAT_8c27e42c = CONCAT44(DAT_8c27e42c_4,0x42a00000);
  }
  else {
    _DAT_8c27e460 = 0x45843660000;
    fVar8 = 80.0;
    _DAT_8c27e42c = 0x49442a00000;
  }
  _DAT_8c27e468 = &PTR_s_fm2_W_Idle1_njm_8c133ca8;
  _DAT_8c27e46c = &PTR_s_fm2_W_Idle1_njs_8c133e3c;
  _DAT_8c27e470 = PTR_s_Fm2_G_Home_njd_8c133c84;
  _DAT_8c27e474 = PTR_s_FM2_FACE_8c133c9c;
  _DAT_8c27e478 = PTR_s_FM2_BODY_TEX_8c133ca0;
  _DAT_8c27e47c = PTR_s_fm2_MotionPack_npd_8c133c88;
  _DAT_8c27e480 = PTR_s_Hand_for_fm2_njm_8c133ca4;
  _DAT_8c27e484 = PTR_s_fm2_normal_PVM_8c133c8c;
  _DAT_8c27e488 = 0xf;
  _DAT_8c27e494 = 0x8c27f66c;
  _DAT_8c27e498 = PTR_s_fm2_special_PVM_8c133c90;
  _DAT_8c27e49c = 0xf;
  _DAT_8c27e4a8 = 0x8c27f720;
  _DAT_8c27e4ac = PTR_s_Fm2_head_normal_PVM_8c133c94;
  _DAT_8c27e4b0 = 10;
  _DAT_8c27e4bc = 0x8c27f7d4;
  _DAT_8c27e4c0 = PTR_s_Fm2_head_special_PVM_8c133c98;
  _DAT_8c27e4c4 = 10;
  _DAT_8c27e4d0 = 0x8c27f84c;
  _DAT_8c27e518 = 0x8c27ffb0;
  if (cVar12 == '\0') {
    _DAT_8c27e520 = CONCAT44(DAT_8c27e520_4,0x3f800000);
    _DAT_8c27e53c = fVar8;
  }
  else {
    _DAT_8c27e53c = 270.0;
    _DAT_8c27e520 = CONCAT44(0x3f800000,fVar8);
  }
  _DAT_8c27e538 = 0x43870000;
  _DAT_8c27e534 = 0x3e99999a;
  _DAT_8c27e530 = 0x3a03126f;
  if (cVar12 == '\0') {
    _DAT_8c27e53c = 0.0;
  }
  else {
    ppuRam8c27e548 = &PTR_PTR_8c1340d8;
  }
  _DAT_8c27e544 = 0x42880000;
  _DAT_8c27e540 = 0x429a0000;
  Class_129920_m0_015248(0x8c27e4ec,&PTR_PTR_8c1340d8,Class_129920_m0_015248,uVar3,uVar4);
  Class_129920_m0_015248(0x8c27e4f4,&PTR_PTR_8c1340d8,Class_129920_m0_015248,uVar3,uVar4);
  _DAT_8c27e504 = 0x8c27eb70;
  _DAT_8c27e508 = 0x65;
  uVar5 = 0x538;
  uVar1 = 0x8c27ed10;
  _DAT_8c27e50c = 0x8c27ed10;
  _DAT_8c27e510 = 0x65;
  Vec3_set_xyz(auStack_a4,auStack_a4,0x8c27ed10,0x538);
  vec3_copy_8c023d8c(0x8c27e55c,auStack_a4,uVar1,uVar5);
  uVar4 = 0xffffffff;
  object_dtor_delete(auStack_a4,0xffffffff,uVar1,uVar5);
  Vec3_set_xyz(auStack_b0,uVar4,uVar1,uVar5);
  vec3_copy_8c023d8c(0x8c27e568,auStack_b0,uVar1,uVar5);
  uVar4 = 0xffffffff;
  object_dtor_delete(auStack_b0,0xffffffff,auStack_b0,uVar5);
  Vec3_set_xyz(auStack_bc,uVar4,auStack_bc,uVar5);
  vec3_copy_8c023d8c(0x8c27e574,auStack_bc,auStack_bc,uVar5);
  object_dtor_delete(auStack_bc,0xffffffff,object_dtor_delete,uVar5);
  if (cVar12 == '\0') {
    _DAT_8c27e584 = CONCAT44(DAT_8c27e584_4,0x43870000);
    _DAT_8c27e550 = CONCAT44(DAT_8c27e550_4,0x42c80000);
  }
  else {
    _DAT_8c27e584 = 0x56843870000;
    _DAT_8c27e550 = 0x8c27e59442c80000;
  }
  _DAT_8c27e594 = 3;
  _DAT_8c27e598 = 1;
  _DAT_8c27e59c = 0;
  _DAT_8c27e5a0 = 0;
  _DAT_8c27e5a4 = 0xffff;
  _DAT_8c27e5a8 = 1;
  _DAT_8c27e5ac = 0;
  _DAT_8c27e5b0 = 0;
  return 0xffffffff;
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



/* CAnimal_m2_0386d0 @ 8c0386d0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0386d0) */
/* WARNING: Removing unreachable block (ram,0x8c0386d2) */
/* WARNING: Unknown calling convention */

undefined4 CAnimal_m2_0386d0(int ar4,uint ar5,int *ar6,int *ar7)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined2 uVar8;
  undefined4 in_stack_ffffffb8;
  
  cVar1 = *(char *)(ar4 + 0x524);
  if (cVar1 == -1) {
    piVar6 = ar6;
    piVar7 = ar7;
    uVar5 = FUN_8c028ee4(ar5,ar5,ar6,ar7);
    uVar5 = uVar5 & 0xffff;
    FUN_8c028edc(ar4 + 0x21c,uVar5,piVar6,piVar7,in_stack_ffffffb8);
    uVar5 = FUN_8c02602c(ar5,uVar5,piVar6,piVar7);
    uVar5 = uVar5 & 0xffff;
    FUN_8c028ed4(ar4 + 0x21c,uVar5,piVar6,piVar7,in_stack_ffffffb8);
    if (*(int *)(ar4 + 0x330) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10c))
                (*(int *)(ar4 + 0x330),ar5,piVar6,piVar7);
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))
                (*(int *)(ar4 + 0x330),1,piVar6,piVar7);
      uVar5 = ar5;
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10))(*(int *)(ar4 + 0x330),ar5,ar6,ar7);
      FUN_8c036988(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,ar7);
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x144))
                (*(int *)(ar4 + 0x330),uVar5,ar6,ar7);
      FUN_8c038a10(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,ar7);
      piVar6 = ar6;
      piVar7 = ar7;
    }
    uVar2 = FUN_8c02602c(ar5,uVar5,piVar6,piVar7);
    ar5 = uVar5;
    ar6 = piVar6;
    ar7 = piVar7;
    if (((ushort)uVar2 < 5) &&
       (iVar4 = get_field_18_02d1a0(ar4 + 0x21c,uVar5,piVar6,piVar7), ar5 = uVar5, ar6 = piVar6,
       ar7 = piVar7, -1 < iVar4)) {
      *(undefined1 *)(ar4 + 0x524) = 0;
    }
  }
  else if (cVar1 == '\0') {
    uVar5 = ar5;
    piVar6 = ar6;
    piVar7 = ar7;
    uVar3 = FUN_8c02602c(ar5,ar5,ar6,ar7);
    uVar8 = (undefined2)in_stack_ffffffb8;
    iVar4 = get_field_c_02d1b8(ar4 + 0x21c,uVar5,piVar6,piVar7);
    uVar3 = (uVar3 & 0xffff) - iVar4;
    if (*(int *)(ar4 + 0x330) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10c))
                (*(int *)(ar4 + 0x330),ar5,piVar6,piVar7);
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))
                (*(int *)(ar4 + 0x330),1,piVar6,piVar7);
      uVar5 = ar5;
      piVar7 = ar7;
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10))(*(int *)(ar4 + 0x330),ar5,ar6,ar7);
      FUN_8c036988(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,piVar7);
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x144))
                (*(int *)(ar4 + 0x330),uVar5,ar6,piVar7);
      FUN_8c038a10(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,piVar7);
      piVar6 = ar6;
    }
    iVar4 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,uVar5,piVar6,piVar7);
    if (iVar4 != 0) {
      uVar5 = uVar3;
      FUN_8c02c030(ar4 + 0x174,uVar3,ar7,piVar7);
      piVar6 = ar7;
    }
    iVar4 = FUN_8c02c518(ar4 + 0x174,uVar5,piVar6,piVar7);
    if (iVar4 == -1) {
      ar5 = 0x3c;
      iVar4 = libgcc_divide_helper_0101e4(uVar3,0x3c,piVar6,piVar7);
      ar6 = piVar6;
      ar7 = piVar7;
      if (3 < iVar4) {
        *(undefined1 *)(ar4 + 0x524) = 1;
      }
    }
    else {
      uVar5 = FUN_8c028ee4(ar5,uVar5,piVar6,piVar7);
      uVar2 = CONCAT22((short)uVar5,uVar8);
      uVar5 = uVar5 & 0xffff;
      FUN_8c028edc(ar4 + 0x21c,uVar5,piVar6,piVar7,uVar2);
      uVar8 = (undefined2)((uint)uVar2 >> 0x10);
      uVar5 = FUN_8c02602c(ar5,uVar5,piVar6,piVar7);
      ar5 = uVar5 & 0xffff;
      FUN_8c028ed4(ar4 + 0x21c,ar5,piVar6,piVar7,CONCAT22(uVar8,(short)uVar5));
      ar6 = piVar6;
      ar7 = piVar7;
    }
  }
  else if (cVar1 == '\x01') {
    piVar6 = ar7;
    (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))(*(int *)(ar4 + 0x330),0,ar6,ar7);
    (**(code **)(*ar7 + 0x4c))(ar7,*(undefined4 *)(ar4 + 0x330),ar6,piVar6);
    *(undefined4 *)(ar4 + 0x330) = 0;
    ar6 = (int *)0x1b;
    uVar5 = 0x1a;
    FUN_8c0b9ed4(ar5,0x1a,0x1b,piVar6);
    FUN_8c0f4d84(ar4,uVar5,ar6,piVar6);
    ar5 = uVar5;
    ar7 = piVar6;
  }
  (**(code **)(*(int *)(ar4 + 8) + 0xf8))(ar4,ar5,ar6,ar7);
  FUN_8c0f79b8(ar4 + 0xa0,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c038a10 @ 8c038a10 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c038a1a) */
/* WARNING: Removing unreachable block (ram,0x8c038a14) */
/* WARNING: Removing unreachable block (ram,0x8c038a1e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c038a10(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 0x5c) = in_fr4;
  *(undefined4 *)(ar4 + 0x60) = in_fr5;
  *(undefined4 *)(ar4 + 100) = in_fr6;
  return 1;
}



/* ret_const_0_038a28 @ 8c038a28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_038a28(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_1_038a30 @ 8c038a30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_038a30(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* noop_038a38 @ 8c038a38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_038a38(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_038a3c @ 8c038a3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_038a3c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_038a40 @ 8c038a40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_038a40(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c038a44 @ 8c038a44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c038a44(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c038a8c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c038a94)(ar4 + DAT_8c038a90,ar5 + 0x4c,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c038aa0)(ar4 + DAT_8c038a9c,ar5 + DAT_8c038a98,ar6,ar7);
  return uVar1;
}



/* FUN_8c038aa4 @ 8c038aa4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c038aa4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c038aec)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c038af4)(ar4 + DAT_8c038af0,ar5 + 0x4c,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c038b00)(ar4 + DAT_8c038afc,ar5 + DAT_8c038af8,ar6,ar7);
  return uVar1;
}



/* FUN_8c038b04 @ 8c038b04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c038b04(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  int ar7_00;
  int ar6_00;
  int ar5_00;
  char cVar4;
  char cVar5;
  undefined4 in_stack_fffffff4;
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_fffffff4);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_fffffff4);
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
    ar6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar3 / dVar3);
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
    ar5_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar3 / dVar3);
  }
  FUN_8c256b0c(0,ar5_00,ar6_00,ar7_00,in_stack_fffffff4);
  FUN_8c256fec(0,ar5_00,ar6_00,ar7_00,in_stack_fffffff4);
  FUN_8c256fec(0,ar5_00,ar6_00,ar7_00,in_stack_fffffff4);
  uVar1 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5_00,ar6_00,ar7_00);
  FUN_8c219a9a(uVar1,ar5_00,ar6_00,ar7_00);
  FUN_8c256210(1,ar5_00,ar6_00,ar7_00);
  uVar1 = 0;
  if (*(int *)(ar4 + 0x330) != 0) {
    FUN_8c0f4b44(*(undefined4 *)(ar4 + 0x330),ar5_00,ar6_00,ar7_00);
    uVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x34))
                      (*(int *)(ar4 + 0x330),ar5_00,ar6_00,ar7_00);
  }
  return uVar1;
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



/* noop_038c8c @ 8c038c8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_038c8c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* s_CFrogManEgg_NewChild_038c92 @ 8c038c90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CFrogManEgg_NewChild_038c92(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a6;
  undefined4 uVar1;
  
  a6 = (*(code *)PTR_s_Shell_0fef9c_8c038cf4)(ar5,5,6,ar7);
  if (a6 == 0) {
    uVar1 = (*(code *)PTR_report_error_message_8c038d08)
                      (PTR_s_GRAPHICS_COMMON_8c038cfc + DAT_8c038d04,
                       PTR_s_GRAPHICS_COMMON_8c038cfc + DAT_8c038d00,1,2);
  }
  else {
    uVar1 = (**(code **)(DAT_8c038cf8 + *(int *)(ar4 + 8)))(ar4,0,a6,ar7);
  }
  return uVar1;
}



/* FUN_8c038d0c @ 8c038d0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c038d0c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c038d14;
  *(undefined4 *)(DAT_8c038d14 + ar4) = ar6;
  return iVar1;
}



/* FUN_8c038d18 @ 8c038d18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c038d18(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(DAT_8c038d44 + ar4) != 0) {
    uVar1 = (*(code *)PTR_FUN_8c038d48)(ar5,ar4 + DAT_8c038d44,ar6,ar7);
  }
  return uVar1;
}



/* s_CFrogManEgg_LoadGRReq_038d52 @ 8c038d4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CFrogManEgg_LoadGRReq_038d52(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(DAT_8c038df8 + ar4) == 0) {
    iVar1 = (*(code *)PTR_s_Failed_to_load_Pack_CAnimal__027a86_8c038dfc)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(DAT_8c038df8 + ar4) = 1;
    }
  }
  else if (*(int *)(DAT_8c038df8 + ar4) == 1) {
    if (*(int *)(DAT_8c038e00 + ar4) == 0) {
      (*(code *)PTR_report_error_message_8c038e10)
                (PTR_s_GRAPHICS_COMMON_8c038e04 + DAT_8c038e0c,
                 PTR_s_GRAPHICS_COMMON_8c038e04 + DAT_8c038e08,0,2);
      *(undefined4 *)(DAT_8c038df8 + ar4) = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = (**(code **)(DAT_8c038e14 + *(int *)(*(int *)(DAT_8c038e00 + ar4) + 8)))
                        (*(int *)(DAT_8c038e00 + ar4),ar5,0,ar7);
      if (iVar1 == 1) {
        *(undefined2 *)(DAT_8c038e18 + ar4) = 0;
        *(undefined4 *)(DAT_8c038df8 + ar4) = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



/* ret_const_1_038e1c @ 8c038e1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_038e1c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c038e24 @ 8c038e24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c038e24(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_s_Failed_to_Load_CAnimal_LoadG_0284b8_8c038e68)(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c038e6c + ar4) != 0) {
    uVar1 = (**(code **)(DAT_8c038e70 + *(int *)(*(int *)(DAT_8c038e6c + ar4) + 8)))
                      (*(int *)(DAT_8c038e6c + ar4),ar5,0,ar7);
  }
  return uVar1;
}



/* noop_038e74 @ 8c038e74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_038e74(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c038e78 @ 8c038e78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c038e78(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c038ebc)(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c038ec0 + ar4) != 0) {
    uVar1 = (**(code **)(DAT_8c038ec4 + *(int *)(*(int *)(DAT_8c038ec0 + ar4) + 8)))
                      (*(int *)(DAT_8c038ec0 + ar4),ar5,0,ar7);
  }
  return uVar1;
}



/* noop_038ec8 @ 8c038ec8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_038ec8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* s_FROG_EGG_038ecc @ 8c038ecc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c03900c) */
/* WARNING: Removing unreachable block (ram,0x8c039022) */
/* WARNING: Removing unreachable block (ram,0x8c038ff4) */
/* WARNING: Removing unreachable block (ram,0x8c03903c) */
/* WARNING: Removing unreachable block (ram,0x8c03900a) */
/* WARNING: Removing unreachable block (ram,0x8c039024) */
/* WARNING: Removing unreachable block (ram,0x8c03903a) */
/* WARNING: Unknown calling convention */

undefined4 s_FROG_EGG_038ecc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ffb0) = 0;
    *(undefined ***)(iVar1 * 0x124 + -0x73d7ffac) = &PTR_s_Tme_Birth_njm_8c1340ec;
    *(undefined ***)(iVar1 * 0x124 + -0x73d7ffa8) = &PTR_s_Tme_Birth_njs_8c1340f0;
    *(undefined **)(iVar1 * 0x124 + -0x73d7ffa4) = PTR_s_Tm_Egg_nj_8c1340e4;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ffa0) = 0;
    *(undefined **)(iVar1 * 0x124 + -0x73d7ff9c) = PTR_s_FROG_EGG_8c1340e8;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ff98) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ff94) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ff10) = 0x8c28019c;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7ff0c) = 1;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7ff08) = 0x8c2801ac;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7ff04) = 1;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fefc) = 0x8c28029c;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fef4) = 0x3f800000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fee4) = 0x3ca3d70a;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fee0) = 0x3f4ccccd;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fedc) = 0x42c80000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(iVar1 * 0x10 + -0x73d7fe80) = 0xffff;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7fe7c) = 1;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7fe78) = 0;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7fe74) = 0;
  }
  return 1;
}



/* CAnimal_m3_0390f4 @ 8c0390f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m3_0390f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x10))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* ret_const_1_03911c @ 8c03911c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_03911c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c039124 @ 8c039124 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c039124(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  char cVar6;
  
  cVar6 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125ce0,Vec3_ctor_xyz,ar6,ar7);
  uVar3 = 0x8c27df98;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27df98,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125cf0,pcVar2,uVar3,ar7);
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27dfa4,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125d00,pcVar2,Vec3_ctor_xyz,ar7);
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27dfb0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125d10,pcVar2,Vec3_ctor_xyz,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c27dfbc,ar7);
  if (cVar6 == '\0') {
    _DAT_8c125d20 = CONCAT44(_UNK_8c125d24,0x800000);
                    /* WARNING: Read-only address (ram,0x8c125d24) is written */
  }
  else {
    _DAT_8c125d20 = 0xffffffff00800000;
  }
  uVar1 = 0x124;
  FUN_8c010120(0x8c27dfd4,FUN_8c02452c,FUN_8c03a4ac,0x124,5);
  global_list_push(0,FUN_8c03a484,0x8c27dfc8,uVar1);
  uVar1 = 0x10;
  FUN_8c010120(&DAT_8c27e594,FUN_8c024824,free_if_nonnull_wrap_03a454,0x10,2);
  global_list_push(0,FUN_8c03a430,0x8c27e588,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c27e5c0,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x18);
  global_list_push(0,FUN_8c03a40c,0x8c27e5b4,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c27e62c,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x18);
  global_list_push(0,FUN_8c03a3b8,0x8c27e620,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c27e698,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x16);
  global_list_push(0,FUN_8c03a394,0x8c27e68c,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c27e6fc,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x16);
  global_list_push(0,FUN_8c03a370,0x8c27e6f0,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c27e760,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x17);
  global_list_push(0,FUN_8c03a34c,0x8c27e754,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c27e7c8,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x17);
  global_list_push(0,FUN_8c03a328,0x8c27e7bc,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c27e830,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x65);
  global_list_push(0,FUN_8c03a304,0x8c27e824,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c27e9d0,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x65);
  global_list_push(0,FUN_8c03a2e0,0x8c27e9c4,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c27eb70,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x65);
  global_list_push(0,FUN_8c03a2bc,0x8c27eb64,uVar1);
  uVar4 = 4;
  FUN_8c010120(0x8c27ed10,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x65);
  uVar1 = 0x8c27ed04;
  global_list_push(0,FUN_8c03a298,0x8c27ed04,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27f8d0,Vec3_ctor_xyz,uVar1,uVar4);
  uVar3 = 0x8c27f8c4;
  global_list_push(uVar1,Vec3_dtor,0x8c27f8c4,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27f8ec,Vec3_ctor_xyz,uVar3,uVar4);
  uVar3 = 0x8c27f8e0;
  global_list_push(uVar1,Vec3_dtor,0x8c27f8e0,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27f908,Vec3_ctor_xyz,uVar3,uVar4);
  uVar3 = 0x8c27f8fc;
  global_list_push(uVar1,Vec3_dtor,0x8c27f8fc,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27f924,Vec3_ctor_xyz,uVar3,uVar4);
  uVar3 = 0x8c27f918;
  global_list_push(uVar1,Vec3_dtor,0x8c27f918,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27f940,Vec3_ctor_xyz,uVar3,uVar4);
  uVar3 = 0x8c27f934;
  global_list_push(uVar1,Vec3_dtor,0x8c27f934,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27f95c,Vec3_ctor_xyz,uVar3,uVar4);
  uVar3 = 0x8c27f950;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27f950,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27f978,pcVar2,uVar3,uVar4);
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27f96c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27f994,pcVar2,Vec3_ctor_xyz,uVar4);
  uVar3 = 0x8c27f988;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27f988,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27f9b0,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c27f9a4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27f9a4,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27f9cc,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c27f9c0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27f9c0,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27f9e8,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c27f9dc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27f9dc,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27fa04,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c27f9f8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27f9f8,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27fa20,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c27fa14;
  global_list_push(uVar1,Vec3_dtor,0x8c27fa14,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27fa3c,Vec3_ctor_xyz,uVar3,uVar4);
  uVar3 = 0x8c27fa30;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27fa30,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27fa58,pcVar2,uVar3,uVar4);
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27fa4c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27fa74,pcVar2,Vec3_ctor_xyz,uVar4);
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27fa68,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27fa90,pcVar2,Vec3_ctor_xyz,uVar4);
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27fa84,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27faac,pcVar2,Vec3_ctor_xyz,uVar4);
  uVar3 = 0x8c27faa0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27faa0,0x8c27faa0);
  uVar1 = Vec3_ctor_xyz(0x8c27fac8,pcVar2,Vec3_ctor_xyz,uVar3);
  pcVar5 = global_list_push;
  global_list_push(uVar1,Vec3_dtor,0x8c27fabc,global_list_push);
  uVar1 = Vec3_ctor_xyz(0x8c27fae4,Vec3_ctor_xyz,0x8c27fae4,pcVar5);
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27fad8,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c27fb00,pcVar2,Vec3_ctor_xyz,pcVar5);
  global_list_push(uVar1,Vec3_dtor,0x8c27faf4,uVar1);
  uVar1 = Vec3_ctor_xyz(0x8c27fb1c,Vec3_ctor_xyz,0x8c27fb1c,uVar1);
  uVar3 = 0x8c27fb10;
  global_list_push(uVar1,Vec3_dtor,0x8c27fb10,uVar1);
  uVar3 = Vec3_ctor_xyz(0x8c27fb38,0x8c27fb38,uVar3,uVar1);
  uVar4 = 0x8c27fb2c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar3,Vec3_dtor,0x8c27fb2c,uVar1);
  pcVar5 = Vec3_ctor_xyz;
  uVar1 = Vec3_ctor_xyz(0x8c27fb54,pcVar2,uVar4,Vec3_ctor_xyz);
  uVar3 = 0x8c27fb48;
  global_list_push(uVar1,Vec3_dtor,0x8c27fb48,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c27fb70,0x8c27fb70,uVar3,pcVar5);
  uVar3 = 0x8c27fb64;
  pcVar5 = Vec3_dtor;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27fb64,Vec3_dtor);
  uVar1 = Vec3_ctor_xyz(0x8c27fb8c,pcVar2,uVar3,pcVar5);
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27fb80,pcVar5);
  uVar4 = 0x8c27fba8;
  uVar1 = Vec3_ctor_xyz(0x8c27fba8,pcVar2,Vec3_ctor_xyz,0x8c27fba8);
  uVar3 = 0x8c27fb9c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27fb9c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27fbc4,pcVar2,uVar3,uVar4);
  uVar4 = 0x8c27fbb8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27fbb8,0x8c27fbb8);
  uVar1 = Vec3_ctor_xyz(0x8c27fbe0,pcVar2,Vec3_ctor_xyz,uVar4);
  uVar3 = 0x8c27fbd4;
  global_list_push(uVar1,Vec3_dtor,0x8c27fbd4,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27fbfc,Vec3_ctor_xyz,uVar3,uVar4);
  uVar3 = 0x8c27fbf0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27fbf0,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c27fc18,pcVar2,uVar3,uVar4);
  global_list_push(uVar1,Vec3_dtor,0x8c27fc0c,uVar1);
  uVar1 = Vec3_ctor_xyz(0x8c27fc34,Vec3_ctor_xyz,0x8c27fc34,uVar1);
  uVar3 = 0x8c27fc28;
  global_list_push(uVar1,Vec3_dtor,0x8c27fc28,uVar1);
  uVar3 = Vec3_ctor_xyz(0x8c27fc50,0x8c27fc50,uVar3,uVar1);
  uVar4 = 0x8c27fc44;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar3,Vec3_dtor,0x8c27fc44,uVar1);
  pcVar5 = Vec3_ctor_xyz;
  uVar1 = Vec3_ctor_xyz(0x8c27fc6c,pcVar2,uVar4,Vec3_ctor_xyz);
  uVar3 = 0x8c27fc60;
  global_list_push(uVar1,Vec3_dtor,0x8c27fc60,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c27fc88,0x8c27fc88,uVar3,pcVar5);
  uVar3 = 0x8c27fc7c;
  global_list_push(uVar1,Vec3_dtor,0x8c27fc7c,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c27fca4,0x8c27fca4,uVar3,pcVar5);
  uVar3 = 0x8c27fc98;
  global_list_push(uVar1,Vec3_dtor,0x8c27fc98,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c27fcc0,0x8c27fcc0,uVar3,pcVar5);
  uVar3 = 0x8c27fcb4;
  global_list_push(uVar1,Vec3_dtor,0x8c27fcb4,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c27fcdc,0x8c27fcdc,uVar3,pcVar5);
  uVar3 = 0x8c27fcd0;
  global_list_push(uVar1,Vec3_dtor,0x8c27fcd0,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c27fcf8,0x8c27fcf8,uVar3,pcVar5);
  uVar3 = 0x8c27fcec;
  global_list_push(uVar1,Vec3_dtor,0x8c27fcec,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c27fd14,0x8c27fd14,uVar3,pcVar5);
  global_list_push(uVar1,Vec3_dtor,0x8c27fd08,pcVar5);
  uVar3 = 0x8c27f908;
  uVar1 = FUN_8c017010(0x8c27fd30,0x8c27f8d0,0x8c27f8ec,0x8c27f908,0x8c27f924,0x8c27f940,0x8c27f95c,
                       0x8c27f978,0x8c27f994);
  global_list_push(uVar1,Class_129938_m0_017084,0x8c27fd24,uVar3);
  uVar3 = 0x8c27f9e8;
  uVar1 = FUN_8c017010(0x8c27fdd0,0x8c27f9b0,0x8c27f9cc,0x8c27f9e8,0x8c27fa04,0x8c27fa20,0x8c27fa3c,
                       0x8c27fa58,0x8c27fa74);
  global_list_push(uVar1,Class_129938_m0_017084,0x8c27fdc4,uVar3);
  uVar3 = 0x8c27fac8;
  uVar1 = FUN_8c017010(0x8c27fe70,0x8c27fa90,0x8c27faac,0x8c27fac8,0x8c27fae4,0x8c27fb00,0x8c27fb1c,
                       0x8c27fb38,0x8c27fb54);
  global_list_push(uVar1,Class_129938_m0_017084,0x8c27fe64,uVar3);
  uVar3 = 0x8c27fba8;
  uVar1 = FUN_8c017010(0x8c27ff10,0x8c27fb70,0x8c27fb8c,0x8c27fba8,0x8c27fbc4,0x8c27fbe0,0x8c27fbfc,
                       0x8c27fc18,0x8c27fc34);
  global_list_push(uVar1,Class_129938_m0_017084,0x8c27ff04,uVar3);
  uVar4 = 0x8c27fc88;
  uVar1 = FUN_8c017010(0x8c27ffb0,0x8c27fc50,0x8c27fc6c,0x8c27fc88,0x8c27fca4,0x8c27fcc0,0x8c27fcdc,
                       0x8c27fcf8,0x8c27fd14);
  uVar3 = 0x8c27ffa4;
  pcVar2 = Class_129938_m0_017084;
  global_list_push(uVar1,Class_129938_m0_017084,0x8c27ffa4,uVar4);
  uVar1 = FUN_8c02452c(0x8c280050,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c280044;
  pcVar2 = FUN_8c03a4ac;
  global_list_push(uVar1,FUN_8c03a4ac,0x8c280044,uVar4);
  uVar1 = FUN_8c024824(0x8c280180,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c280174;
  pcVar2 = free_if_nonnull_wrap_03a454;
  global_list_push(uVar1,free_if_nonnull_wrap_03a454,0x8c280174,uVar1);
  uVar3 = FUN_8c015b94(0x8c28019c,pcVar2,uVar3,uVar1);
  uVar4 = 0x8c280190;
  pcVar2 = free_if_nonnull_wrap_0247b0;
  global_list_push(uVar3,free_if_nonnull_wrap_0247b0,0x8c280190,uVar1);
  pcVar5 = FUN_8c015bc8;
  uVar1 = FUN_8c015bc8(0x8c2801ac,pcVar2,uVar4,FUN_8c015bc8);
  uVar3 = 0x8c2801a0;
  pcVar2 = free_if_nonnull_wrap_03a3dc;
  global_list_push(uVar1,free_if_nonnull_wrap_03a3dc,0x8c2801a0,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c2801bc,pcVar2,uVar3,pcVar5);
  uVar3 = 0x8c2801b0;
  pcVar5 = Vec3_dtor;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2801b0,Vec3_dtor);
  uVar1 = Vec3_ctor_xyz(0x8c2801d8,pcVar2,uVar3,pcVar5);
  uVar3 = 0x8c2801cc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2801cc,pcVar5);
  uVar4 = 0x8c2801f4;
  uVar1 = Vec3_ctor_xyz(0x8c2801f4,pcVar2,uVar3,0x8c2801f4);
  uVar3 = 0x8c2801e8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2801e8,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c280210,pcVar2,uVar3,uVar4);
  uVar4 = 0x8c280204;
  uVar3 = 0x8c280204;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c280204,0x8c280204);
  uVar1 = Vec3_ctor_xyz(0x8c28022c,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c280220;
  pcVar2 = Vec3_dtor;
  pcVar5 = global_list_push;
  global_list_push(uVar1,Vec3_dtor,0x8c280220,global_list_push);
  uVar1 = Vec3_ctor_xyz(0x8c280248,pcVar2,uVar3,pcVar5);
  uVar3 = 0x8c28023c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28023c,pcVar5);
  uVar1 = Vec3_ctor_xyz(0x8c280264,pcVar2,uVar3,pcVar5);
  uVar3 = 0x8c280258;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c280258,uVar1);
  uVar1 = Vec3_ctor_xyz(0x8c280280,pcVar2,uVar3,uVar1);
  global_list_push(uVar1,Vec3_dtor,0x8c280274,uVar1);
  uVar3 = 0x8c2801f4;
  uVar1 = FUN_8c017010(0x8c28029c,0x8c2801bc,0x8c2801d8,0x8c2801f4,0x8c280210,0x8c28022c,0x8c280248,
                       0x8c280264,0x8c280280);
  uVar1 = global_list_push(uVar1,Class_129938_m0_017084,0x8c280290,uVar3);
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



/* FUN_8c03a5a4 @ 8c03a5a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c03a5a4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c03a628)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c03a62c;
  (*(code *)PTR_Vec3_ctor_zero_8c03a634)((int)ar4 + DAT_8c03a630,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c03a634)((int)ar4 + DAT_8c03a638,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c03a634)((int)ar4 + DAT_8c03a63c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c03a634)((int)ar4 + DAT_8c03a640,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c03a648)((int)ar4 + DAT_8c03a644,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c03a634)((int)ar4 + DAT_8c03a64c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c03a634)((int)ar4 + DAT_8c03a650,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c03a634)((int)ar4 + DAT_8c03a654,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c03a658)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* Class_12a03c_m6_03a65c @ 8c03a65c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

ulonglong * Class_12a03c_m6_03a65c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined4 *ar7_00;
  undefined4 uVar11;
  int ar7_01;
  uint extraout_fr1;
  char cVar12;
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
  undefined4 uStack_10;
  
  cVar12 = '\0';
  ar7_00 = &uStack_24;
  uStack_24 = DAT_8c1364c8;
  uStack_20 = DAT_8c1364cc;
  uStack_1c = DAT_8c1364d0;
  uStack_18 = DAT_8c1364d4;
  uStack_14 = DAT_8c1364d8;
  uStack_10 = DAT_8c1364dc;
  puVar7 = &DAT_8c1364e0;
  uStack_3c = DAT_8c1364e0;
  uStack_38 = DAT_8c1364e4;
  uStack_34 = DAT_8c1364e8;
  uStack_30 = DAT_8c1364ec;
  uStack_2c = DAT_8c1364f0;
  uStack_28 = DAT_8c1364f4;
  *(int *)(ar4 + 0x128) = ar5;
  iVar5 = ar5 * 0x18 + -0x73d7fc0c;
  FUN_8c031b68(ar4,iVar5,&DAT_8c1364e0,ar7_00);
  FUN_8c03c100(ar4,iVar5,puVar7,ar7_00);
  iVar5 = (int)DAT_8c280470;
  if (DAT_8c280470 == '\0') {
    _DAT_8c28046c = 0;
    DAT_8c280470 = '\x01';
  }
  if (1 < _DAT_8c28046c) {
    _DAT_8c28046c = 0;
  }
  Vec3_assign(ar4 + 0x34c,_DAT_8c28046c * 0x10 + -0x73d7fc2c,0x8c2803d4,iVar5);
  _DAT_8c28046c = _DAT_8c28046c + 1;
  puVar1 = (ulonglong *)(ar4 + 0x7c);
  if (cVar12 == '\0') {
    *(undefined4 *)puVar1 = 0;
  }
  else {
    *puVar1 = (ulonglong)extraout_fr1;
  }
  uVar6 = DAT_8c13655c;
  uVar2 = DAT_8c136544;
  uVar8 = 4;
  if ((ar5 < 5) && (-1 < ar5)) {
                    /* WARNING: Switch is manually overridden */
    switch(ar5) {
    case 0:
      uVar6 = 10;
      uVar2 = FUN_8c03c0f0(ar4 + 0xb0,10,4,iVar5);
      piVar3 = (int *)deref_u32(uVar2,uVar6,uVar2,iVar5);
      if (*(int *)(*piVar3 + 0x18) != 0) {
        uVar6 = 10;
        iVar5 = ar4 + 0xb0;
        pcVar9 = FUN_8c03c0f0;
        uVar2 = FUN_8c03c0f0(iVar5,10,FUN_8c03c0f0,iVar5);
        uVar2 = deref_u32(uVar2,uVar6,pcVar9,iVar5);
        uVar6 = 1;
        puVar7 = &uStack_24;
        FUN_8c034a70(ar4 + 0xb0,uVar2,puVar7,1);
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x14,puVar7,uVar6);
        uVar2 = deref_u32(uVar2,deref_u32,puVar7,uVar6);
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c1362f4,1);
      }
      uVar2 = DAT_8c1364fc;
      *(undefined4 *)(ar4 + 0x22c) = DAT_8c1364f8;
      *(undefined4 *)(ar4 + 0x230) = uVar2;
      *(undefined **)(ar4 + 0x234) = PTR_FUN_8c136500;
      uVar2 = DAT_8c136508;
      puVar1 = (ulonglong *)(ar4 + 0x238);
      *(undefined4 *)puVar1 = DAT_8c136504;
      *(undefined4 *)(ar4 + 0x23c) = uVar2;
      *(undefined **)(ar4 + 0x240) = PTR_FUN_8c13650c;
      break;
    case 1:
      uVar6 = 7;
      uVar2 = FUN_8c03c0f0(ar4 + 0xb0,7,4,iVar5);
      piVar3 = (int *)deref_u32(uVar2,uVar6,uVar8,iVar5);
      if (*(int *)(*piVar3 + 0x1c) != 0) {
        uVar6 = 7;
        pcVar9 = FUN_8c03c0f0;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,7,FUN_8c03c0f0,iVar5);
        uVar2 = deref_u32(uVar2,uVar6,pcVar9,iVar5);
        uVar8 = 1;
        puVar10 = &DAT_8c13630c;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c13630c,1);
        uVar6 = 8;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,8,puVar10,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,puVar10,uVar8);
        puVar10 = &DAT_8c136324;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c136324,1);
        pcVar9 = FUN_8c03c0f0;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,5,puVar10,FUN_8c03c0f0);
        uVar2 = deref_u32(uVar2,deref_u32,puVar10,pcVar9);
        uVar8 = 1;
        puVar7 = &uStack_24;
        FUN_8c034a70(ar4 + 0xb0,uVar2,puVar7,1);
        uVar6 = 5;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,5,puVar7,uVar8);
        pcVar9 = deref_u32;
        piVar3 = (int *)deref_u32(uVar2,uVar6,deref_u32,uVar8);
        *(undefined4 *)(*piVar3 + 0x1c) = uStack_20;
        uVar6 = 5;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,5,pcVar9,uVar8);
        pcVar9 = deref_u32;
        piVar3 = (int *)deref_u32(uVar2,uVar6,deref_u32,uVar8);
        *(undefined4 *)(*piVar3 + 0x28) = uStack_14;
        uVar6 = 0x14;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x14,pcVar9,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,pcVar9,uVar8);
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c13633c,1);
      }
      uVar2 = DAT_8c136514;
      *(undefined4 *)(ar4 + 0x22c) = DAT_8c136510;
      *(undefined4 *)(ar4 + 0x230) = uVar2;
      *(undefined **)(ar4 + 0x234) = PTR_FUN_8c136518;
      uVar2 = DAT_8c136520;
      *(undefined4 *)(ar4 + 0x238) = DAT_8c13651c;
      *(undefined4 *)(ar4 + 0x23c) = uVar2;
      puVar1 = (ulonglong *)PTR_FUN_8c136524;
      *(undefined **)(ar4 + 0x240) = PTR_FUN_8c136524;
      break;
    case 2:
      uVar6 = 7;
      uVar2 = FUN_8c03c0f0(ar4 + 0xb0,7,4,iVar5);
      piVar3 = (int *)deref_u32(uVar2,uVar6,uVar8,iVar5);
      if (*(int *)(*piVar3 + 0x1c) != 0) {
        uVar6 = 7;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,7,uVar8,iVar5);
        uVar2 = deref_u32(uVar2,uVar6,uVar8,iVar5);
        uVar8 = 1;
        puVar10 = &DAT_8c136354;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c136354,1);
        uVar6 = 8;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,8,puVar10,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,puVar10,uVar8);
        uVar8 = 1;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c13636c,1);
        uVar6 = 0x15;
        pcVar9 = FUN_8c03c0f0;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x15,FUN_8c03c0f0,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,pcVar9,uVar8);
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c136384,1);
      }
      uVar2 = DAT_8c13652c;
      *(undefined4 *)(ar4 + 0x22c) = DAT_8c136528;
      *(undefined4 *)(ar4 + 0x230) = uVar2;
      *(undefined **)(ar4 + 0x234) = PTR_FUN_8c136530;
      puVar1 = DAT_8c136538;
      *(undefined4 *)(ar4 + 0x238) = DAT_8c136534;
      *(ulonglong **)(ar4 + 0x23c) = puVar1;
      *(undefined **)(ar4 + 0x240) = PTR_FUN_8c13653c;
      break;
    case 3:
      *(undefined4 *)(ar4 + 0x22c) = DAT_8c136540;
      *(undefined4 *)(ar4 + 0x230) = uVar2;
      *(undefined **)(ar4 + 0x234) = PTR_FUN_8c136548;
      uVar2 = DAT_8c136550;
      *(undefined4 *)(ar4 + 0x238) = DAT_8c13654c;
      *(undefined4 *)(ar4 + 0x23c) = uVar2;
      *(undefined **)(ar4 + 0x240) = PTR_FUN_8c136554;
      uVar6 = 0x41;
      pcVar9 = FUN_8c03c0f0;
      uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x41,FUN_8c03c0f0,iVar5);
      piVar3 = (int *)deref_u32(uVar2,uVar6,pcVar9,iVar5);
      if (*(int *)(*piVar3 + 4) == 0) {
        puVar1 = (ulonglong *)0x0;
      }
      else {
        uVar6 = 0x41;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x41,*piVar3,iVar5);
        uVar2 = deref_u32(uVar2,uVar6,deref_u32,iVar5);
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c135ebc,0);
        uVar6 = 0x44;
        uVar8 = 0xb0;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x44,0xb0,0x44);
        uVar2 = deref_u32(uVar2,uVar6,uVar8,deref_u32);
        uVar6 = 0;
        puVar10 = &DAT_8c135f04;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c135f04,0);
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x42,puVar10,uVar6);
        uVar2 = deref_u32(uVar2,uVar2,puVar10,deref_u32);
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c135ed4,0);
        uVar8 = 0x45;
        uVar6 = 0xb0;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x45,0xb0,0x45);
        uVar2 = deref_u32(uVar2,deref_u32,uVar6,uVar8);
        uVar8 = 0;
        puVar10 = &DAT_8c135f1c;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c135f1c,0);
        uVar6 = 0x43;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x43,puVar10,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,puVar10,uVar8);
        uVar8 = 0;
        puVar10 = &DAT_8c135eec;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c135eec,0);
        uVar6 = 0x46;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x46,puVar10,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,puVar10,uVar8);
        uVar8 = 0;
        puVar10 = &DAT_8c135f34;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c135f34,0);
        uVar6 = 7;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,7,puVar10,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,puVar10,deref_u32);
        uVar8 = 1;
        puVar10 = &DAT_8c135fdc;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c135fdc,1);
        uVar6 = 8;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,8,puVar10,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,puVar10,uVar8);
        uVar8 = 1;
        puVar10 = &DAT_8c135ff4;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c135ff4,1);
        uVar6 = 0x4a;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x4a,puVar10,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,deref_u32,uVar8);
        uVar8 = 1;
        puVar7 = &DAT_8c135f64;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c135f64,1);
        uVar6 = 0x4a;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x4a,puVar7,uVar8);
        pcVar9 = deref_u32;
        piVar3 = (int *)deref_u32(uVar2,uVar6,deref_u32,uVar2);
        *(undefined4 *)(*piVar3 + 0x1c) = DAT_8c135f68;
        uVar8 = 0x4a;
        uVar6 = FUN_8c03c0f0(ar4 + 0xb0,0x4a,pcVar9,uVar2);
        piVar3 = (int *)deref_u32(uVar6,uVar8,pcVar9,uVar2);
        iVar5 = *piVar3;
        *(undefined4 *)(iVar5 + 0x28) = DAT_8c135f74;
        uVar8 = 0x48;
        uVar6 = FUN_8c03c0f0(ar4 + 0xb0,0x48,iVar5,uVar2);
        uVar2 = deref_u32(uVar6,uVar8,iVar5,uVar2);
        uVar8 = 0;
        puVar7 = &DAT_8c135f94;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c135f94,0);
        uVar6 = 0x48;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x48,puVar7,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,uVar2,uVar8);
        uVar8 = 1;
        puVar7 = &DAT_8c135f7c;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c135f7c,1);
        uVar6 = 0x48;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x48,puVar7,uVar8);
        piVar3 = (int *)deref_u32(uVar2,uVar6,deref_u32,uVar2);
        *(undefined4 *)(*piVar3 + 0x1c) = DAT_8c135f98;
        uVar8 = 0x48;
        iVar5 = ar4 + 0xb0;
        uVar6 = FUN_8c03c0f0(iVar5,0x48,iVar5,uVar2);
        piVar3 = (int *)deref_u32(uVar6,uVar8,iVar5,uVar2);
        *(undefined4 *)(*piVar3 + 0x28) = DAT_8c135fa4;
        uVar6 = FUN_8c03c0f0(ar4 + 0xb0,0x18,iVar5,uVar2);
        uVar2 = deref_u32(uVar6,uVar6,iVar5,uVar2);
        uVar8 = 1;
        puVar10 = &DAT_8c135fc4;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c135fc4,1);
        uVar6 = 0x19;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x19,puVar10,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,puVar10,uVar8);
        uVar8 = 1;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&uStack_24,1);
        uVar6 = 0x12;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x12,0x12,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,deref_u32,uVar8);
        uVar11 = 0;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c135fac,0);
        uVar8 = 99;
        uVar6 = 99;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,99,99,uVar11);
        uVar2 = deref_u32(uVar2,uVar6,uVar8,uVar11);
        puVar1 = (ulonglong *)FUN_8c034a70(ar4 + 0xb0,uVar2,&uStack_3c,1);
      }
      break;
    case 4:
      *(undefined4 *)(ar4 + 0x238) = DAT_8c136558;
      *(undefined4 *)(ar4 + 0x23c) = uVar6;
      *(undefined **)(ar4 + 0x240) = PTR_FUN_8c136560;
      uVar2 = DAT_8c136568;
      *(undefined4 *)(ar4 + 0x22c) = DAT_8c136564;
      *(undefined4 *)(ar4 + 0x230) = uVar2;
      *(undefined **)(ar4 + 0x234) = PTR_FUN_8c13656c;
      uVar6 = 0x41;
      iVar5 = ar4 + 0xb0;
      pcVar9 = FUN_8c03c0f0;
      uVar2 = FUN_8c03c0f0(iVar5,0x41,FUN_8c03c0f0,iVar5);
      piVar3 = (int *)deref_u32(uVar2,uVar6,pcVar9,iVar5);
      if (*(int *)(*piVar3 + 4) == 0) {
        puVar1 = (ulonglong *)0x0;
      }
      else {
        uVar8 = 0x41;
        uVar6 = 0xb0;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x41,0xb0,0x41);
        uVar2 = deref_u32(uVar2,deref_u32,uVar6,uVar8);
        uVar8 = 0;
        puVar10 = &DAT_8c13600c;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c13600c,0);
        uVar6 = 0x44;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x44,puVar10,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,puVar10,uVar8);
        uVar8 = 0;
        puVar10 = &DAT_8c136054;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c136054,0);
        uVar6 = 0x42;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x42,puVar10,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,puVar10,uVar8);
        uVar8 = 0;
        puVar10 = &DAT_8c136024;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c136024,0);
        uVar6 = 0x45;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x45,puVar10,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,puVar10,uVar8);
        uVar8 = 0;
        puVar10 = &DAT_8c13606c;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c13606c,0);
        uVar6 = 0x43;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x43,puVar10,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,puVar10,uVar8);
        uVar8 = 0;
        puVar10 = &DAT_8c13603c;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c13603c,0);
        uVar6 = 0x46;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x46,puVar10,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,deref_u32,uVar8);
        uVar6 = 0;
        puVar10 = &DAT_8c136084;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c136084,0);
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,7,puVar10,uVar6);
        uVar2 = deref_u32(uVar2,deref_u32,uVar2,uVar2);
        uVar8 = 1;
        puVar10 = &DAT_8c1362c4;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c1362c4,1);
        uVar6 = 8;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,8,puVar10,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,deref_u32,uVar8);
        uVar8 = 1;
        puVar10 = &DAT_8c1362dc;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c1362dc,1);
        uVar6 = 0x18;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x18,puVar10,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,puVar10,uVar8);
        uVar8 = 1;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c136264,1);
        uVar6 = 0x19;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x19,0x19,uVar8);
        uVar2 = deref_u32(uVar2,uVar2,uVar6,uVar8);
        FUN_8c034a70(ar4 + 0xb0,uVar2,&uStack_24,1);
        uVar11 = 0x4a;
        uVar6 = 0x4a;
        uVar8 = 0xb0;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x4a,0xb0,0x4a);
        uVar2 = deref_u32(uVar2,uVar6,uVar8,uVar11);
        uVar8 = 1;
        puVar10 = &DAT_8c136204;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c136204,1);
        uVar6 = 0x4a;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x4a,puVar10,uVar8);
        piVar3 = (int *)deref_u32(uVar2,uVar6,puVar10,uVar8);
        *(undefined4 *)(*piVar3 + 0x1c) = DAT_8c136208;
        uVar6 = 0x4a;
        uVar8 = 0xb0;
        iVar5 = ar4 + 0xb0;
        uVar2 = FUN_8c03c0f0(iVar5,0x4a,iVar5,0xb0);
        piVar3 = (int *)deref_u32(uVar2,uVar6,iVar5,uVar8);
        *(undefined4 *)(*piVar3 + 0x28) = DAT_8c136214;
        uVar6 = 0x48;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x48,iVar5,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,uVar2,uVar8);
        uVar11 = 0;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c136234,0);
        uVar6 = 0x48;
        uVar8 = 0xb0;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x48,0xb0,uVar11);
        uVar2 = deref_u32(uVar2,uVar6,uVar8,uVar11);
        puVar10 = &DAT_8c13621c;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c13621c,1);
        uVar6 = 0x48;
        pcVar9 = FUN_8c03c0f0;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x48,puVar10,FUN_8c03c0f0);
        piVar3 = (int *)deref_u32(uVar2,uVar6,uVar2,pcVar9);
        iVar5 = *piVar3;
        puVar10 = &DAT_8c136234;
        *(undefined4 *)(iVar5 + 0x1c) = DAT_8c136238;
        uVar6 = 0x48;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x48,&DAT_8c136234,iVar5);
        piVar3 = (int *)deref_u32(uVar2,uVar6,puVar10,iVar5);
        uVar2 = DAT_8c136244;
        *(undefined4 *)(*piVar3 + 0x28) = DAT_8c136244;
        uVar11 = 0x50;
        uVar8 = 0x50;
        uVar6 = FUN_8c03c0f0(ar4 + 0xb0,0x50,0x50,uVar2);
        uVar2 = deref_u32(uVar6,uVar8,uVar11,uVar2);
        puVar10 = &DAT_8c13612c;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c13612c,1);
        uVar6 = 0x50;
        iVar5 = ar4 + 0xb0;
        uVar2 = FUN_8c03c0f0(iVar5,0x50,puVar10,iVar5);
        piVar3 = (int *)deref_u32(uVar2,uVar6,puVar10,iVar5);
        *(undefined4 *)(*piVar3 + 0x1c) = DAT_8c136130;
        uVar6 = 0x50;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x50,puVar10,iVar5);
        piVar3 = (int *)deref_u32(uVar2,uVar6,uVar2,iVar5);
        *(undefined4 *)(*piVar3 + 0x28) = DAT_8c13613c;
        uVar8 = 0x51;
        uVar6 = FUN_8c03c0f0(ar4 + 0xb0,0x51,uVar2,iVar5);
        uVar2 = deref_u32(uVar6,uVar8,uVar2,iVar5);
        uVar8 = 1;
        puVar10 = &DAT_8c136144;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c136144,1);
        uVar6 = 0x51;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x51,puVar10,uVar8);
        pcVar9 = deref_u32;
        piVar3 = (int *)deref_u32(uVar2,uVar6,puVar10,deref_u32);
        *(undefined4 *)(*piVar3 + 0x1c) = DAT_8c136148;
        uVar6 = 0x51;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x51,puVar10,pcVar9);
        piVar3 = (int *)deref_u32(uVar2,uVar6,puVar10,pcVar9);
        uVar2 = DAT_8c136154;
        *(undefined4 *)(*piVar3 + 0x28) = DAT_8c136154;
        uVar8 = 0x52;
        uVar6 = FUN_8c03c0f0(ar4 + 0xb0,0x52,uVar2,pcVar9);
        uVar2 = deref_u32(uVar6,uVar8,uVar2,pcVar9);
        uVar8 = 1;
        puVar10 = &DAT_8c13615c;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c13615c,1);
        uVar6 = 0x52;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x52,puVar10,uVar8);
        piVar3 = (int *)deref_u32(uVar2,uVar6,puVar10,uVar8);
        iVar5 = *piVar3;
        *(undefined4 *)(iVar5 + 0x1c) = DAT_8c136160;
        uVar6 = 0x52;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x52,iVar5,piVar3);
        piVar4 = (int *)deref_u32(uVar2,uVar6,iVar5,piVar3);
        uVar2 = DAT_8c13616c;
        *(undefined4 *)(*piVar4 + 0x28) = DAT_8c13616c;
        uVar8 = 0x53;
        uVar6 = FUN_8c03c0f0(ar4 + 0xb0,0x53,uVar2,piVar3);
        uVar2 = deref_u32(uVar6,uVar8,uVar2,piVar3);
        uVar8 = 1;
        puVar10 = &DAT_8c13609c;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c13609c,1);
        uVar6 = 0x53;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x53,puVar10,uVar8);
        piVar3 = (int *)deref_u32(uVar2,uVar6,puVar10,uVar8);
        *(undefined4 *)(*piVar3 + 0x1c) = DAT_8c1360a0;
        uVar6 = 0x53;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x53,piVar3,uVar8);
        piVar3 = (int *)deref_u32(uVar2,uVar6,piVar3,uVar8);
        iVar5 = *piVar3;
        *(undefined4 *)(iVar5 + 0x28) = DAT_8c1360ac;
        uVar6 = 0x54;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x54,iVar5,piVar3);
        uVar2 = deref_u32(uVar2,uVar6,uVar2,piVar3);
        uVar6 = 1;
        puVar10 = &DAT_8c1360b4;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c1360b4,1);
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x54,puVar10,uVar6);
        piVar3 = (int *)deref_u32(uVar2,uVar2,puVar10,uVar6);
        iVar5 = *piVar3;
        *(undefined4 *)(iVar5 + 0x1c) = DAT_8c1360b8;
        uVar6 = 0x54;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x54,iVar5,piVar3);
        piVar4 = (int *)deref_u32(uVar2,uVar6,iVar5,piVar3);
        uVar2 = DAT_8c1360c4;
        *(undefined4 *)(*piVar4 + 0x28) = DAT_8c1360c4;
        uVar6 = 0x55;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x55,uVar2,piVar3);
        uVar2 = deref_u32(uVar2,uVar6,uVar2,piVar3);
        uVar8 = 1;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c1360cc,1);
        uVar6 = 0x55;
        pcVar9 = FUN_8c03c0f0;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x55,FUN_8c03c0f0,uVar8);
        piVar3 = (int *)deref_u32(uVar2,uVar6,pcVar9,uVar8);
        uVar2 = DAT_8c1360d0;
        *(undefined4 *)(*piVar3 + 0x1c) = DAT_8c1360d0;
        uVar6 = 0x55;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x55,0x55,uVar2);
        pcVar9 = deref_u32;
        piVar3 = (int *)deref_u32(uVar2,uVar6,deref_u32,uVar2);
        *(undefined4 *)(*piVar3 + 0x28) = DAT_8c1360dc;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x58,pcVar9,uVar2);
        uVar2 = deref_u32(uVar2,uVar2,pcVar9,deref_u32);
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c1361d4,1);
        uVar6 = 0x58;
        uVar8 = 0xb0;
        iVar5 = ar4 + 0xb0;
        uVar2 = FUN_8c03c0f0(iVar5,0x58,iVar5,0xb0);
        piVar3 = (int *)deref_u32(uVar2,uVar6,iVar5,uVar8);
        ar7_01 = *piVar3;
        *(undefined4 *)(ar7_01 + 0x1c) = DAT_8c1361d8;
        uVar6 = 0x58;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x58,iVar5,ar7_01);
        piVar3 = (int *)deref_u32(uVar2,uVar6,iVar5,ar7_01);
        *(undefined4 *)(*piVar3 + 0x28) = DAT_8c1361e4;
        uVar8 = 0x5c;
        uVar6 = 0x5c;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x5c,0x5c,ar7_01);
        uVar2 = deref_u32(uVar2,uVar6,uVar8,ar7_01);
        uVar8 = 1;
        puVar7 = &DAT_8c13627c;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c13627c,1);
        uVar6 = 0x5c;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x5c,puVar7,uVar8);
        piVar3 = (int *)deref_u32(uVar2,uVar6,puVar7,uVar8);
        *(undefined4 *)(*piVar3 + 0x1c) = DAT_8c136280;
        iVar5 = ar4 + 0xb0;
        uVar2 = FUN_8c03c0f0(iVar5,0x5c,puVar7,iVar5);
        piVar3 = (int *)deref_u32(uVar2,uVar2,puVar7,iVar5);
        *(undefined4 *)(*piVar3 + 0x28) = DAT_8c13628c;
        uVar6 = 0x5b;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x5b,puVar7,iVar5);
        uVar2 = deref_u32(uVar2,uVar6,deref_u32,iVar5);
        uVar8 = 1;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c136294,1);
        uVar6 = 0x5b;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x5b,FUN_8c03c0f0,uVar8);
        piVar3 = (int *)deref_u32(uVar2,uVar6,uVar2,uVar8);
        *(undefined4 *)(*piVar3 + 0x1c) = DAT_8c136298;
        uVar6 = 0x5b;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x5b,uVar2,uVar8);
        pcVar9 = deref_u32;
        piVar3 = (int *)deref_u32(uVar2,uVar6,deref_u32,uVar2);
        *(undefined4 *)(*piVar3 + 0x28) = DAT_8c1362a4;
        uVar8 = 0x4c;
        uVar6 = FUN_8c03c0f0(ar4 + 0xb0,0x4c,pcVar9,uVar2);
        uVar2 = deref_u32(uVar6,uVar8,pcVar9,uVar2);
        uVar11 = 1;
        puVar7 = &DAT_8c1362ac;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c1362ac,1);
        uVar6 = 0x4c;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x4c,puVar7,uVar11);
        piVar3 = (int *)deref_u32(uVar2,uVar6,puVar7,uVar11);
        *(undefined4 *)(*piVar3 + 0x1c) = DAT_8c1362b0;
        uVar6 = 0x4c;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x4c,puVar7,uVar11);
        piVar3 = (int *)deref_u32(uVar2,uVar6,uVar2,uVar11);
        *(undefined4 *)(*piVar3 + 0x28) = DAT_8c1362bc;
        uVar8 = 0x12;
        uVar6 = FUN_8c03c0f0(ar4 + 0xb0,0x12,uVar2,uVar11);
        uVar2 = deref_u32(uVar6,uVar8,uVar2,uVar11);
        uVar8 = 0;
        FUN_8c034a70(ar4 + 0xb0,uVar2,&DAT_8c13624c,0);
        uVar6 = 99;
        pcVar9 = FUN_8c03c0f0;
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,99,FUN_8c03c0f0,uVar8);
        uVar2 = deref_u32(uVar2,uVar6,pcVar9,uVar8);
        puVar1 = (ulonglong *)FUN_8c034a70(ar4 + 0xb0,uVar2,&uStack_3c,1);
      }
    }
  }
  return puVar1;
}



/* FUN_8c03c0f0 @ 8c03c0f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c03c0f0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return *(int *)(ar4 + 0x14) + ar5 * 4;
}



/* FUN_8c03c100 @ 8c03c100 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03c100(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  char cVar2;
  
  cVar2 = '\0';
  *(undefined4 *)(ar4 + 0x324) = 0;
  FUN_8c03c314(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x2b8) = 2;
  *(undefined4 *)(ar4 + 0x31c) = 0;
  *(undefined4 *)(ar4 + 800) = 0;
  *(undefined4 *)(ar4 + 0x318) = 0;
  *(undefined4 *)(ar4 + 0x304) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x220) = 0x41a00000;
    *(undefined4 *)(ar4 + 0x224) = 0x42340000;
  }
  else {
    *(undefined8 *)(ar4 + 0x220) = 0x22441a00000;
    in_fr1 = 0x42340000;
    *(undefined8 *)(ar4 + 0x224) = 0x2e842340000;
  }
  *(undefined4 *)(ar4 + 0x2e8) = 0;
  *(undefined4 *)(ar4 + 0x2fc) = 0;
  *(undefined4 *)(ar4 + 0x300) = 1;
  *(undefined4 *)(ar4 + 0x2f8) = 0x14;
  *(undefined4 *)(ar4 + 0x68) = 0;
  FUN_8c022d04(ar4 + 600,ar5,ar6,ar7);
  FUN_8c022d04(ar4 + 0x2d4,ar5,ar6,ar7);
  FUN_8c022d04(ar4 + 0x2a8,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x29c) = 0;
  *(undefined4 *)(ar4 + 0x2a0) = 0;
  *(undefined4 *)(ar4 + 0x298) = 0;
  *(undefined4 *)(ar4 + 0x294) = 0;
  *(undefined4 *)(ar4 + 0x28c) = 0;
  *(undefined ***)(ar4 + 0x1c8) = &PTR_s_Idle_8c1363ec;
  *(undefined4 *)(ar4 + 0x1cc) = 0x36;
  *(undefined4 *)(ar4 + 0x290) = 0;
  *(undefined4 *)(ar4 + 0x134) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x278) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x340) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x340) = CONCAT44(0x3f800000,in_fr1);
  }
  *(undefined4 *)(ar4 + 0x27c) = 3;
  *(undefined4 *)(ar4 + 0x284) = 0;
  *(undefined4 *)(ar4 + 0x280) = 0;
  *(undefined4 *)(ar4 + 0x288) = 0;
  *(undefined4 *)(ar4 + 700) = 0;
  *(undefined4 *)(ar4 + 0x2f0) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x2f4) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x2e4) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x2e4) = CONCAT44(0x3f800000,in_fr1);
  }
  uVar1 = rand_range(ar4,0,100,ar7);
  *(undefined4 *)(ar4 + 0x33c) = uVar1;
  *(undefined4 *)(ar4 + 0x330) = 0;
  *(undefined4 *)(ar4 + 0x32c) = 0;
  *(undefined4 *)(ar4 + 0x344) = 0;
  *(undefined4 *)(ar4 + 0x348) = 0;
  return 0x348;
}



/* FUN_8c03c314 @ 8c03c314 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c03c31e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c03c314(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0xa4) = 1;
  *(undefined4 *)(ar4 + 0x94) = in_fr4;
  return 0x94;
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



/* Class_12a03c_m7_03c40c @ 8c03c40c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a03c_m7_03c40c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c03c430)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c03c434 + ar4) = 0;
  iVar1 = DAT_8c03c438;
  *(undefined4 *)(DAT_8c03c438 + ar4) = 0;
  return iVar1;
}



/* Class_12a03c_m1_03c43c @ 8c03c43c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c03c43c) */
/* WARNING: Removing unreachable block (ram,0x8c03c43e) */
/* WARNING: Unknown calling convention */

undefined4 Class_12a03c_m1_03c43c(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  uint *ar5_01;
  float fVar3;
  double in_dr0;
  double dVar4;
  float fVar5;
  double in_dr14;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffff50;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  uint uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  cVar8 = '\0';
  cVar7 = '\0';
  Vec3_ctor_zero(&uStack_28,ar5,ar6,ar7);
  ar5_00 = ar5;
  Class_129cbc_m1_031598(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x244) = ar5[6];
  if ((ar5[4] == 0) || (ar5[4] == 2)) {
    if (cVar8 == '\0') {
      in_dr0 = (double)CONCAT44(0x43fa0000,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = 1.3411048382276983e-08;
    }
    FUN_8c03207c(ar4,ar5_00,ar6,ar7);
  }
  FUN_8c0324ac(ar4,ar5_00,ar6,ar7);
  iVar1 = pure_virtual_stub(ar4,ar5,ar6,ar7);
  if ((*(int *)(ar4 + 0x178) == 1) && (iVar1 != 1)) {
    *(undefined4 *)(ar4 + 0x178) = 0;
  }
  FUN_8c02f2c0(*ar5,iVar1,ar6,ar7,in_stack_ffffff50);
  FUN_8c031ab4(ar4,*(undefined4 *)(ar5[1] + 4),ar6,ar7);
  Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_38);
  Vec3_add(auStack_38,ar4 + 0x90,ar6,ar7,auStack_48);
  Vec3_add(auStack_48,ar4 + 0x6c,ar6,ar7,auStack_58);
  Vec3_add(auStack_58,ar4 + 0x2a8,ar6,ar7,auStack_68);
  Vec3_assign(ar4 + 4,auStack_68,ar6,ar7);
  Vec3_dtor(auStack_68,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_58,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
  ar5_01 = (uint *)0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
  vec3_clear(ar4 + 0x2a8,ar5_01,ar6,ar7);
  if ((((ar5[4] == 0) || (ar5[4] == 2)) && (*(int *)(ar4 + 0x124) != 0x18)) &&
     ((*(int *)(ar4 + 0x124) != 2 && (*(int *)(ar4 + 0x334) != 1)))) {
    (**(code **)(*(int *)ar5[6] + 0x184))((int *)ar5[6],ar5_01,ar6,ar7);
    if (cVar8 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20))
      ;
      dVar4 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar4 = 2.9975963366641684e+19;
      in_xd14 = in_dr0;
    }
    if (cVar7 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) -
                                 SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 - dVar4 * dVar4;
    }
    if (cVar8 == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),*(undefined4 *)(*(int *)ar5[1] + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)ar5[1] + 4);
      in_dr0 = *(double *)(ar4 + 8);
    }
    if (cVar7 == '\0') {
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      fVar3 = SUB84(in_dr0,0) + fVar5;
      in_dr0 = (double)CONCAT44(fVar5,fVar3);
      bVar6 = SUB84(in_dr14,0) < fVar3;
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
      fVar3 = SUB84(in_dr0,0);
      bVar6 = in_dr14 < in_dr0;
    }
    if (bVar6) {
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 4),fVar3);
      }
      else {
        in_dr0 = *(double *)(*(int *)ar5[1] + 4);
      }
      if (cVar7 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) - (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 - in_dr0;
      }
      if (cVar8 == '\0') {
        *(int *)(ar4 + 8) = SUB84(in_dr14,0);
      }
      else {
        *(double *)(ar4 + 8) = in_xd14;
      }
    }
  }
  iVar1 = get_field_24_026024(ar5[6],ar5_01,ar6,ar7);
  if (iVar1 == 0) {
    if (cVar8 == '\0') {
      in_dr14 = (double)CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 8),SUB84(in_dr14,0));
      dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xc),SUB84(in_dr0,0));
    }
    else {
      in_dr14 = *(double *)(*(int *)ar5[1] + 8);
      dVar4 = *(double *)(ar4 + 0xc);
    }
    if (cVar7 == '\0') {
      in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) +
                                 (float)((ulonglong)dVar4 >> 0x20),SUB84(in_dr14,0));
    }
    else {
      in_dr14 = in_dr14 + dVar4;
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(0x3f99999a,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar4 = 1.2986509618072377e+23;
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) + fVar3,SUB84(in_dr14,0));
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
      in_dr14 = in_dr14 + dVar4 * dVar4;
    }
    if (cVar8 == '\0') {
      in_dr0 = (double)CONCAT44(0x44bb8000,fVar3);
    }
    else {
      in_dr0 = 6.28680480336352e-312;
    }
    fVar3 = (float)((ulonglong)in_dr14 >> 0x20);
    if (cVar7 == '\0') {
      bVar6 = (float)((ulonglong)in_dr0 >> 0x20) < fVar3;
    }
    else {
      bVar6 = in_dr0 < in_dr14;
    }
    if (bVar6) {
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(0x44bb8000,*(undefined4 *)(ar4 + 0xc));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0xc);
        in_dr0 = 6.28680480336352e-312;
      }
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      if (cVar7 == '\0') {
        fVar3 = fVar3 - fVar5;
        in_dr14 = (double)CONCAT44(fVar3,SUB84(in_dr14,0));
        in_dr0 = (double)CONCAT44(fVar5,SUB84(in_dr0,0) - fVar3);
      }
      else {
        in_dr14 = in_dr14 - in_dr0;
        in_dr0 = in_dr0 - in_dr14;
      }
      if (cVar8 == '\0') {
        *(int *)(ar4 + 0xc) = SUB84(in_dr0,0);
      }
      else {
        *(undefined8 *)(ar4 + 0xc) = in_xd0;
      }
    }
  }
  if (*(int *)(ar4 + 0x128) < 3) {
    if (((*(int *)(ar4 + 0x124) != 0x2e) && (*(int *)(ar4 + 0x124) != 0x18)) &&
       (*(int *)(ar4 + 0x124) != 2)) {
      Vec3_add(*(undefined4 *)ar5[1],ar4 + 4,ar6,ar7,auStack_78);
      Vec3_assign(&uStack_28,auStack_78,ar6,ar7);
      Vec3_dtor(auStack_78,0xffffffff,ar6,ar7);
      fVar3 = fStack_20;
      if (cVar8 != '\0') {
        in_xd0 = CONCAT44(uStack_1c,fStack_20);
        fVar3 = 0.0;
      }
      if (cVar7 == '\0' && fVar3 < 0.0) {
        if (cVar8 == '\0') {
          fVar3 = 0.0;
        }
        else {
          in_xd0 = 0;
        }
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 8),fVar3);
        }
        else {
          dVar4 = *(double *)(*(int *)ar5[1] + 8);
        }
        if (cVar7 == '\0') {
          fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 - dVar4,0);
        }
        if (cVar8 == '\0') {
          *(float *)(ar4 + 0xc) = fVar3;
        }
        else {
          *(undefined8 *)(ar4 + 0xc) = in_xd0;
        }
      }
      if (cVar8 == '\0') {
        dVar4 = (double)(ulonglong)uStack_28;
      }
      else {
        in_xd0 = CONCAT44(uStack_24,uStack_28);
        dVar4 = 0.0;
      }
      if (cVar7 == '\0' && SUB84(dVar4,0) < 0.0) {
        if (cVar8 == '\0') {
          dVar4 = 0.0;
        }
        else {
          in_xd0 = 0;
        }
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(*(undefined4 *)*(double **)ar5[1],SUB84(dVar4,0));
        }
        else {
          dVar4 = **(double **)ar5[1];
        }
        if (cVar7 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) - fVar3);
        }
        else {
          dVar4 = dVar4 - dVar4;
        }
        if (cVar8 == '\0') {
          *(int *)(ar4 + 4) = SUB84(dVar4,0);
        }
        else {
          *(undefined8 *)(ar4 + 4) = in_xd0;
        }
      }
      Vec3_add(*(undefined4 *)ar5[1],ar4 + 4,ar6,ar7,auStack_88);
      Vec3_assign(&uStack_28,auStack_88,ar6,ar7);
      ar5_01 = (uint *)0xffffffff;
      Vec3_dtor(auStack_88,0xffffffff,ar6,ar7);
      FUN_8c03c314(ar4,ar5_01,ar6,ar7);
      if ((*(int *)(ar4 + 0x124) != 0x18) && (*(int *)(ar4 + 0x124) != 2)) {
        ar5_01 = &uStack_28;
        (**(code **)(*(int *)ar5[6] + 0x128))((int *)ar5[6],ar5_01,ar6,ar7);
        iStack_a8 = SUB84(dVar4,0);
        iStack_a4 = (int)((ulonglong)dVar4 >> 0x20);
        if (cVar8 == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x48));
          dVar4 = (double)CONCAT44(0x3e99999a,iStack_a8);
          iStack_a8 = iStack_a4;
          iStack_a4 = iVar1;
        }
        else {
          in_xd14 = *(double *)(ar4 + 0x48);
          dVar4 = 2.97598305018595e-312;
        }
        if (cVar7 == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                     SUB84(in_dr14,0) * (float)((ulonglong)dVar4 >> 0x20));
        }
        else {
          in_dr14 = in_dr14 * dVar4;
        }
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(iStack_a8,SUB84(dVar4,0));
        }
        else {
          dVar4 = (double)CONCAT44(iStack_a4,iStack_a8);
        }
        if (cVar7 == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                     SUB84(in_dr14,0) + (float)((ulonglong)dVar4 >> 0x20));
        }
        else {
          in_dr14 = in_dr14 + dVar4;
        }
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(uStack_24,SUB84(dVar4,0));
        }
        else {
          dVar4 = (double)CONCAT44(fStack_20,uStack_24);
        }
        if (cVar7 == '\0') {
          bVar6 = (float)((ulonglong)dVar4 >> 0x20) < SUB84(in_dr14,0);
        }
        else {
          bVar6 = dVar4 < in_dr14;
        }
        if (bVar6) {
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 4),SUB84(dVar4,0));
          }
          else {
            dVar4 = *(double *)(*(int *)ar5[1] + 4);
          }
          if (cVar7 == '\0') {
            fVar3 = SUB84(in_dr14,0) - (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            fVar3 = SUB84(in_dr14 - dVar4,0);
          }
          if (cVar8 == '\0') {
            *(float *)(ar4 + 8) = fVar3;
          }
          else {
            *(double *)(ar4 + 8) = in_xd14;
          }
          FUN_8c031748(ar4,ar5_01,ar6,ar7);
        }
      }
    }
  }
  else if ((ar5[4] == 0) || (ar5[4] == 2)) {
    Vec3_add(*(undefined4 *)ar5[1],ar4 + 4,ar6,ar7,auStack_98);
    Vec3_assign(&uStack_28,auStack_98,ar6,ar7);
    ar5_01 = (uint *)0xffffffff;
    Vec3_dtor(auStack_98,0xffffffff,ar6,ar7);
    if ((*(int *)(ar4 + 0x124) != 2) && (*(int *)(ar4 + 0x334) != 1)) {
      FUN_8c03c314(ar4,ar5_01,ar6,ar7);
      ar5_01 = &uStack_28;
      (**(code **)(*(int *)ar5[6] + 0x128))((int *)ar5[6],ar5_01,ar6,ar7);
      uStack_ac = SUB84(in_dr0,0);
      uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar8 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x48));
        dVar4 = (double)CONCAT44(0x3e99999a,uStack_ac);
        uStack_ac = uVar2;
      }
      else {
        in_xd14 = *(double *)(ar4 + 0x48);
        dVar4 = 2.97598305018595e-312;
        iStack_a8 = uVar2;
      }
      if (cVar7 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) * (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 * dVar4;
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(uStack_ac,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(iStack_a8,uStack_ac);
      }
      if (cVar7 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) + (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 + dVar4;
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(uStack_24,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(fStack_20,uStack_24);
      }
      if (cVar7 == '\0') {
        bVar6 = (float)((ulonglong)dVar4 >> 0x20) < SUB84(in_dr14,0);
      }
      else {
        bVar6 = dVar4 < in_dr14;
      }
      if (bVar6) {
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 4),SUB84(dVar4,0));
        }
        else {
          dVar4 = *(double *)(*(int *)ar5[1] + 4);
        }
        if (cVar7 == '\0') {
          fVar3 = SUB84(in_dr14,0) - (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(in_dr14 - dVar4,0);
        }
        if (cVar8 == '\0') {
          *(float *)(ar4 + 8) = fVar3;
        }
        else {
          *(double *)(ar4 + 8) = in_xd14;
        }
        FUN_8c031748(ar4,ar5_01,ar6,ar7);
      }
    }
  }
  vec3_clear(ar4 + 0x2a8,ar5_01,ar6,ar7);
  *(undefined4 *)(ar4 + 0x21c) = 0;
  uVar2 = Vec3_dtor(&uStack_28,0xffffffff,ar6,ar7);
  return uVar2;
}



/* FUN_8c03c94c @ 8c03c94c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c03defe) */
/* WARNING: Removing unreachable block (ram,0x8c03df26) */
/* WARNING: Unknown calling convention */

code * FUN_8c03c94c(code *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  double *pdVar6;
  code *pcVar7;
  float *pfVar8;
  code *pcVar9;
  undefined4 *ar6_00;
  undefined4 a6;
  code *pcVar10;
  undefined1 *ar7_00;
  undefined1 *puVar11;
  undefined8 *ar4_00;
  undefined4 uVar12;
  code *pcVar13;
  uint uVar14;
  float fVar15;
  double in_dr0;
  float fVar18;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined4 in_fr3;
  uint in_fr5;
  undefined4 uVar19;
  double dVar20;
  uint in_fr7;
  double dVar21;
  undefined8 in_xd0;
  bool bVar22;
  char cVar23;
  char cVar24;
  int iStack_444;
  int iStack_440;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  uint uStack_378;
  uint uStack_374;
  uint uStack_370;
  code *pcStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined1 auStack_358 [4];
  undefined4 uStack_354;
  undefined1 auStack_350 [16];
  undefined1 auStack_340 [16];
  undefined1 auStack_330 [12];
  undefined1 auStack_324 [16];
  undefined1 auStack_314 [16];
  undefined1 auStack_304 [12];
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [16];
  undefined1 auStack_2c8 [12];
  undefined1 auStack_2bc [16];
  undefined1 auStack_2ac [16];
  undefined1 auStack_29c [16];
  undefined1 auStack_28c [16];
  undefined1 auStack_27c [12];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [12];
  undefined1 auStack_1f4 [16];
  undefined1 auStack_1e4 [16];
  undefined1 auStack_1d4 [16];
  undefined1 auStack_1c4 [16];
  undefined1 auStack_1b4 [16];
  undefined1 auStack_1a4 [16];
  undefined1 auStack_194 [16];
  undefined1 auStack_184 [16];
  undefined1 auStack_174 [16];
  undefined1 auStack_164 [16];
  undefined1 auStack_154 [12];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [12];
  undefined1 auStack_10c [16];
  undefined1 auStack_fc [16];
  undefined1 auStack_ec [16];
  undefined1 auStack_dc [12];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  double dStack_40;
  undefined1 auStack_38 [12];
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  cVar24 = '\0';
  cVar23 = '\0';
  pcVar13 = (code *)0x1;
  uStack_354 = 1;
  FUN_8c03f480(*ar5,FUN_8c03f480,1,ar7,auStack_a0);
  pcVar7 = Vec3_ctor_copy;
  Vec3_ctor_copy(&uStack_2c,auStack_a0,Vec3_ctor_copy,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_a0,0xffffffff,pcVar7,ar7);
  if (cVar24 == '\0') {
    dVar21 = (double)(ulonglong)in_fr7;
  }
  else {
    dVar21 = *(double *)(ar5[7] + 8);
  }
  if (cVar24 == '\0') {
    in_fr5 = *(uint *)(ar5[7] + 0xc);
  }
  if (cVar24 != '\0') {
    in_fr5 = (uint)*(undefined8 *)ar5[7];
  }
  pcVar10 = FUN_8c10277c;
  FUN_8c10277c(auStack_38,uVar3,pcVar7,FUN_8c10277c);
  pfVar8 = &fStack_48;
  Vec3_ctor_zero(pfVar8,uVar3,pfVar8,pcVar10);
  FUN_8c102748(&fStack_54,uVar3,pfVar8,pcVar10);
  pcVar7 = Vec3_set_zero;
  Vec3_set_zero(auStack_60,uVar3,pfVar8,Vec3_set_zero);
  pcVar10 = (code *)ar5[4];
  Vec3_ctor_zero(auStack_70,uVar3,pfVar8,pcVar7);
  *(undefined4 *)(ar4 + 0x2fc) = 0;
  *(undefined4 *)(ar4 + 0x300) = 1;
  *(undefined4 *)(ar4 + 0x218) = 0;
  *(undefined4 *)(ar4 + 0x338) = 0;
  if (pcVar10 == (code *)0x1) {
    if (cVar24 == '\0') {
      in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
      dVar20 = (double)(ulonglong)in_fr5;
    }
    else {
      in_dr0 = 0.0;
      dVar20 = 0.0;
    }
    if (cVar23 != '\0') {
      in_dr0 = in_dr0 + dVar20;
    }
    fStack_4c = SUB84(in_dr0,0);
    fVar15 = (float)((ulonglong)in_dr0 >> 0x20);
    if (cVar24 == '\0') {
      dVar21 = (double)((ulonglong)dVar21 & 0xffffffff);
      fStack_4c = fVar15;
    }
    else {
      dVar20 = 0.0;
      dVar21 = 0.0;
      fStack_48 = fVar15;
    }
    if (cVar23 != '\0') {
      dVar20 = dVar20 + dVar21;
    }
    fStack_54 = SUB84(dVar20,0);
    if (cVar24 == '\0') {
      fStack_54 = (float)((ulonglong)dVar20 >> 0x20);
      dVar20 = (double)((ulonglong)dVar20 & 0xffffffff);
      in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    }
    else {
      dVar20 = 0.0;
      in_dr0 = 0.0;
    }
    if (cVar23 != '\0') {
      dVar20 = dVar20 + in_dr0;
    }
    fVar15 = (float)((ulonglong)dVar20 >> 0x20);
    fStack_50 = fVar15;
    if (cVar24 != '\0') {
      fStack_50 = SUB84(dVar20,0);
      fStack_4c = fVar15;
    }
    uVar3 = *(undefined4 *)ar5[1];
    Vec3_assign(&fStack_48,uVar3,(undefined4 *)ar5[1],pcVar7);
    uVar19 = SUB84(dVar20,0);
    pcVar10 = (code *)0x0;
    if (cVar24 == '\0') {
      dVar20 = (double)CONCAT44(fStack_48,SUB84(in_dr0,0));
      dVar21 = (double)((ulonglong)dVar21 & 0xffffffff);
    }
    else {
      dVar20 = (double)CONCAT44(fStack_44,fStack_48);
      dVar21 = 0.0;
    }
    if (cVar23 == '\0') {
      bVar22 = (float)((ulonglong)dVar20 >> 0x20) < 0.0;
    }
    else {
      bVar22 = dVar20 < dVar21;
    }
    if (bVar22) {
      pcVar7 = (code *)&DAT_8c125be0;
      if (cVar24 == '\0') {
        uVar19 = 0;
        fStack_48 = 0.0;
      }
      else {
        fStack_48 = 0.0;
        fStack_44 = 0.0;
      }
    }
    if (cVar24 == '\0') {
      dVar20 = (double)((ulonglong)dVar20 & 0xffffffff);
      dVar1 = (double)CONCAT44(dStack_40._0_4_,uVar19);
    }
    else {
      dVar20 = 0.0;
      dVar1 = dStack_40;
    }
    if (cVar23 == '\0') {
      bVar22 = (float)((ulonglong)dVar1 >> 0x20) < 0.0;
    }
    else {
      bVar22 = dVar1 < dVar20;
    }
    if (bVar22) {
      if (cVar24 == '\0') {
        dStack_40 = (double)((ulonglong)dStack_40 & 0xffffffff00000000);
      }
      else {
        dStack_40 = 0.0;
      }
    }
    fVar15 = fStack_48;
    fVar18 = fStack_54;
    if (cVar24 != '\0') {
      in_xd0 = CONCAT44(fStack_44,fStack_48);
      fVar15 = fStack_54;
      fVar18 = fStack_50;
    }
    if (cVar23 == '\0' && fVar15 < fVar18) {
      if (cVar24 == '\0') {
        fStack_48 = fStack_54;
        fVar15 = fStack_54;
      }
      else {
        in_xd0 = CONCAT44(fStack_50,fStack_54);
        fStack_48 = fStack_54;
        fStack_44 = fStack_50;
      }
    }
    if (cVar24 == '\0') {
      in_dr0 = (double)CONCAT44(fStack_4c,fVar15);
      dVar20 = (double)CONCAT44(dStack_40._0_4_,SUB84(dVar1,0));
    }
    else {
      in_dr0 = (double)CONCAT44(fStack_48,fStack_4c);
      dVar20 = dStack_40;
    }
    if (cVar23 == '\0') {
      bVar22 = (float)((ulonglong)dVar20 >> 0x20) < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar22 = dVar20 < in_dr0;
    }
    if (bVar22) {
      if (cVar24 == '\0') {
        in_dr0 = (double)CONCAT44(fStack_4c,SUB84(in_dr0,0));
        dStack_40 = (double)CONCAT44(dStack_40._4_4_,fStack_4c);
      }
      else {
        in_dr0 = (double)CONCAT44(fStack_48,fStack_4c);
        dStack_40 = in_dr0;
      }
    }
  }
  uVar19 = SUB84(dVar21,0);
  pcVar9 = *(code **)(ar4 + 0x2e8);
  if ((pcVar9 == (code *)0x0) && (*(int *)(ar4 + 0x124) != 0x2e)) {
    if ((pcVar10 == (code *)0x3) || (*(int *)(ar4 + 0x68) != 0)) {
      uVar3 = ar5[1];
      FUN_8c0507c0(ar4,*(undefined4 *)ar5[1],uVar3,pcVar10);
      uStack_35c = 1;
      pcVar13 = Vec3_dtor;
      Vec3_dtor(auStack_70,0xffffffff,uVar3,Vec3_dtor);
      object_dtor_delete(auStack_60,0xffffffff,uVar3,pcVar13);
      free_if_nonnull_wrap_102790(&fStack_54,0xffffffff,uVar3,pcVar13);
      Vec3_dtor(&fStack_48,0xffffffff,uVar3,pcVar13);
      free_if_nonnull_wrap_102790(auStack_38,0xffffffff,uVar3,pcVar13);
      Vec3_dtor(&uStack_2c,0xffffffff,uVar3,pcVar13);
      return (code *)uStack_35c;
    }
    uVar3 = 0;
  }
  iVar2 = *(int *)(ar4 + 0x124);
  if ((iVar2 < 0x2f) && (-1 < iVar2)) {
    pcVar7 = (code *)(&PTR_case_0_8c03cc28)[iVar2];
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    case 0:
      FUN_8c03f430(auStack_b0,ar5[7],pcVar9,pcVar7);
      pcVar9 = (code *)&uStack_2c;
      pcVar13 = (code *)FUN_8c048868(ar4,*(undefined4 *)ar5[1],pcVar9,pcVar10);
      pcVar7 = FUN_8c026038;
      FUN_8c026038(auStack_b0,0xffffffff,pcVar9,FUN_8c026038);
      break;
    case 1:
      pcVar9 = (code *)&uStack_2c;
      pcVar13 = (code *)pure_virtual_stub(ar4,*(undefined4 *)ar5[1],pcVar9,pcVar7);
      break;
    case 2:
      *(undefined4 *)(ar4 + 0x214) = 0;
      pcVar13 = (code *)FUN_8c04d62c(ar4,*(undefined4 *)ar5[1],ar5[6],pcVar7);
      pcVar9 = *(code **)ar5[1];
      FUN_8c031c74(ar4,&uStack_2c,pcVar9,pcVar7);
      break;
    case 3:
      puVar5 = &uStack_2c;
      FUN_8c031c74(ar4,puVar5,*(undefined4 *)ar5[1],pcVar7);
      pcVar9 = (code *)0x12c;
      if (*(int *)(ar4 + 300) == 0) {
        *(undefined4 *)(ar4 + 0x214) = 0;
        uVar19 = 0;
        uVar3 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0);
        uVar14 = SUB84(in_dr0,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar3,uVar19);
        pcVar7 = *(code **)(ar4 + 300);
        pcVar9 = pcVar7 + 1;
        *(code **)(ar4 + 300) = pcVar9;
        if (cVar24 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar14;
        }
      }
      else if (*(int *)(ar4 + 300) == 1) {
        FUN_8c05ae54(ar4,puVar5,300,pcVar7);
        fVar15 = (float)((ulonglong)in_dr0 >> 0x20);
        s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,puVar5,pcVar9,pcVar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,puVar5,pcVar9,pcVar7);
        if (cVar24 == '\0') {
          fVar18 = 190.0;
        }
        else {
          fVar15 = 190.0;
          fVar18 = 1.90577e-43;
        }
        if (cVar23 != '\0' || fVar18 <= fVar15) {
          pcVar7 = CAnimBody_GetCurFrame;
          CAnimBody_GetCurFrame(ar4 + 0xb0,puVar5,pcVar9,CAnimBody_GetCurFrame);
          pcVar9 = (code *)0xb0;
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,0xb0,pcVar7);
        }
      }
      break;
    case 4:
      pcVar9 = s_CAnimBody_AdvanceFrame_033ba0;
      iVar2 = s_CAnimBody_AdvanceFrame_033ba0
                        (ar4 + 0xb0,uVar3,s_CAnimBody_AdvanceFrame_033ba0,pcVar7);
      if (iVar2 == 1) {
        *(undefined4 *)(ar4 + 0x214) = 1;
        pcVar13 = (code *)0x0;
        *(undefined4 *)(ar4 + 300) = 0;
      }
      break;
    case 5:
      *(undefined4 *)(ar4 + 0x214) = 0;
      *(undefined4 *)(ar4 + 0x178) = 1;
      puVar5 = &uStack_2c;
      FUN_8c031c74(ar4,puVar5,*(undefined4 *)ar5[1],pcVar7);
      fVar15 = (float)((ulonglong)in_dr0 >> 0x20);
      iVar2 = *(int *)(ar4 + 300);
      if (iVar2 == 0) {
        pcVar7 = Vec3_ctor_copy;
        Vec3_ctor_copy(auStack_220,&DAT_8c125d48,&DAT_8c125d48,Vec3_ctor_copy);
        puVar11 = auStack_220;
        iVar2 = FUN_8c051c14(ar4,*(undefined4 *)ar5[1],puVar11,pcVar7);
        uStack_370 = (uint)(iVar2 == 0);
        Vec3_dtor(auStack_220,0xffffffff,puVar11,pcVar7);
        if (uStack_370 != 0) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          pcVar7 = (code *)0x0;
          uVar19 = 0xffffffff;
          uVar3 = 0xe;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xe,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar19,pcVar7);
        }
      }
      else if (iVar2 == 1) {
        pcVar7 = (code *)0xb0;
        pcVar10 = ar4 + 0xb0;
        CAnimBody_AdvanceFrame_wrapper(pcVar10,puVar5,pcVar10,0xb0);
        uVar3 = 0xb0;
        CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar10,pcVar7);
        if (cVar24 == '\0') {
          fVar18 = 34.0;
        }
        else {
          fVar15 = 34.0;
          fVar18 = 1.47977e-42;
        }
        if (cVar23 == '\0' && fVar18 < fVar15) {
          puVar11 = auStack_80;
          Vec3_ctor_zero(puVar11,uVar3,puVar11,pcVar7);
          iVar2 = get_field_24_026024(*(undefined4 *)(ar4 + 0x244),uVar3,puVar11,pcVar7);
          if (iVar2 == 0) {
            if (cVar24 == '\0') {
              dVar21 = (double)CONCAT44(0x44bb8000,*(undefined4 *)(*(int *)ar5[1] + 8));
            }
            else {
              dVar21 = 6.37168463500213e-312;
            }
            if (cVar23 == '\0') {
              dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - SUB84(dVar21,0),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar21;
            }
            uVar14 = (uint)((ulonglong)dVar21 >> 0x20);
            uStack_374 = uVar14;
            if (cVar24 != '\0') {
              uStack_374 = SUB84(dVar21,0);
              uStack_370 = uVar14;
            }
            Vec3_scale(ar4 + 0x14,&uStack_374,puVar11,pcVar7,auStack_230);
            pcVar10 = Vec3_scale;
            Vec3_scale(auStack_230,&DAT_8c136570,Vec3_scale,pcVar7,auStack_240);
            Vec3_assign(auStack_80,auStack_240,pcVar10,pcVar7);
            Vec3_dtor(auStack_240,0xffffffff,pcVar10,pcVar7);
            puVar11 = (undefined1 *)0xffffffff;
            Vec3_dtor(auStack_230,0xffffffff,pcVar10,0xffffffff);
          }
          else {
            if (cVar24 == '\0') {
              dVar21 = (double)CONCAT44(0x45034000,*(undefined4 *)(*(int *)ar5[1] + 8));
            }
            else {
              dVar21 = 6.28682803535784e-312;
            }
            if (cVar23 == '\0') {
              dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - SUB84(dVar21,0),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar21;
            }
            uVar14 = (uint)((ulonglong)dVar21 >> 0x20);
            uStack_378 = uVar14;
            if (cVar24 != '\0') {
              uStack_378 = SUB84(dVar21,0);
              uStack_374 = uVar14;
            }
            puVar5 = &uStack_378;
            Vec3_scale(ar4 + 0x14,puVar5,puVar5,auStack_250,auStack_250);
            puVar11 = auStack_260;
            Vec3_scale(auStack_250,&DAT_8c136574,puVar5,puVar11,puVar11);
            Vec3_assign(auStack_80,auStack_260,puVar5,puVar11);
            Vec3_dtor(auStack_260,0xffffffff,puVar5,puVar11);
            Vec3_dtor(auStack_250,0xffffffff,0xffffffff,puVar11);
          }
          puVar4 = auStack_80;
          FUN_8c02374c(puVar4,FUN_8c02374c,puVar4,puVar11);
          Vec3_assign(auStack_80,auStack_270,puVar4,puVar11);
          pcVar10 = Vec3_dtor;
          Vec3_dtor(auStack_270,0xffffffff,Vec3_dtor,puVar11);
          pcVar7 = FUN_8c032ab0;
          FUN_8c032ab0(ar4,FUN_8c032ab0,pcVar10,puVar11);
          Vec3_set_xyz(auStack_27c,pcVar7,pcVar10,puVar11);
          FUN_8c023484(auStack_80,auStack_27c,pcVar10,puVar11,auStack_28c);
          ar4_00 = (undefined8 *)auStack_80;
          pcVar7 = Vec3_assign;
          Vec3_assign(ar4_00,auStack_28c,Vec3_assign,ar4_00);
          Vec3_dtor(auStack_28c,0xffffffff,pcVar7,ar4_00);
          uVar3 = 0xffffffff;
          pcVar7 = object_dtor_delete;
          object_dtor_delete(auStack_27c,0xffffffff,object_dtor_delete,ar4_00);
          Vec3_ctor_zero(auStack_90,uVar3,pcVar7,ar4_00);
          iVar2 = *(int *)(ar4 + 0x128);
          if (iVar2 == 0) {
            Vec3_ctor_xyz(auStack_29c,uVar3,pcVar7,ar4_00);
            Vec3_assign(auStack_90,auStack_29c,pcVar7,ar4_00);
            Vec3_dtor(auStack_29c,0xffffffff,pcVar7,ar4_00);
          }
          else if (iVar2 == 1) {
            Vec3_ctor_xyz(auStack_2ac,uVar3,pcVar7,ar4_00);
            Vec3_assign(auStack_90,auStack_2ac,pcVar7,ar4_00);
            Vec3_dtor(auStack_2ac,0xffffffff,pcVar7,ar4_00);
          }
          else {
            if (iVar2 != 2) {
              uVar3 = 2;
              uStack_368 = 2;
              Vec3_dtor(auStack_90,0xffffffff,2,ar4_00);
              Vec3_dtor(auStack_80,0xffffffff,uVar3,ar4_00);
              uVar3 = 0xffffffff;
              Vec3_dtor(auStack_70,0xffffffff,0xffffffff,ar4_00);
              object_dtor_delete(auStack_60,0xffffffff,uVar3,ar4_00);
              free_if_nonnull_wrap_102790(&fStack_54,0xffffffff,uVar3,ar4_00);
              pfVar8 = &fStack_48;
              pcVar13 = Vec3_dtor;
              Vec3_dtor(pfVar8,0xffffffff,Vec3_dtor,pfVar8);
              free_if_nonnull_wrap_102790(auStack_38,0xffffffff,pcVar13,pfVar8);
              Vec3_dtor(&uStack_2c,0xffffffff,pcVar13,Vec3_dtor);
              return (code *)uStack_368;
            }
            Vec3_ctor_xyz(auStack_2bc,Vec3_ctor_xyz,pcVar7,ar4_00);
            ar4_00 = auStack_90;
            pcVar7 = Vec3_assign;
            Vec3_assign(ar4_00,auStack_2bc,Vec3_assign,ar4_00);
            Vec3_dtor(auStack_2bc,0xffffffff,pcVar7,ar4_00);
          }
          vec3_copy_8c02b5fc(auStack_2c8,*(undefined4 *)(ar5[1] + 4),pcVar7,ar4_00);
          FUN_8c023484(auStack_90,auStack_2c8,pcVar7,ar4_00,auStack_2d8);
          puVar11 = auStack_2e8;
          Vec3_add(*(undefined4 *)ar5[1],auStack_2d8,puVar11,ar4_00,puVar11);
          Vec3_assign(auStack_90,auStack_2e8,puVar11,ar4_00);
          Vec3_dtor(auStack_2e8,0xffffffff,puVar11,ar4_00);
          puVar11 = auStack_2d8;
          Vec3_dtor(puVar11,0xffffffff,puVar11,ar4_00);
          object_dtor_delete(auStack_2c8,0xffffffff,puVar11,ar4_00);
          pcVar7 = (code *)auStack_80;
          FUN_8c0dba50(ar5[6],auStack_90,pcVar7,pcVar7);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          Vec3_dtor(auStack_90,0xffffffff,ar4,pcVar7);
          Vec3_dtor(auStack_80,0xffffffff,Vec3_dtor,pcVar7);
        }
      }
      else if ((iVar2 == 2) &&
              (iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar4 + 0xb0,0xb0,pcVar7), iVar2 == 1
              )) {
        *(undefined4 *)(ar4 + 300) = 0;
        pcVar13 = (code *)0x0;
        *(undefined4 *)(ar4 + 0x178) = 0;
        pcVar7 = (code *)0x0;
        uVar3 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar3,pcVar7);
        *(undefined4 *)(ar4 + 0x214) = 1;
      }
      pcVar9 = (code *)0x80;
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,0x80,pcVar7);
      break;
    case 6:
      pcVar7 = (code *)&uStack_2c;
      pcVar9 = *(code **)ar5[1];
      pcVar13 = (code *)FUN_8c050300(ar4,*ar5,pcVar9,pcVar7);
      break;
    default:
      goto override_jmp_8c03cc1e_case_7;
    case 0xb:
      Vec3_ctor_copy(auStack_194,&DAT_8c125d48,&DAT_8c125d48,pcVar7);
      pcVar10 = (code *)auStack_194;
      pcVar7 = pcVar10;
      pcVar13 = (code *)FUN_8c051c14(ar4,*(undefined4 *)ar5[1],pcVar10,pcVar10);
      Vec3_dtor(auStack_194,0xffffffff,pcVar10,pcVar7);
      pcVar9 = *(code **)ar5[1];
      FUN_8c031c74(ar4,&uStack_2c,pcVar9,pcVar7);
      break;
    case 0xc:
      pcVar9 = *(code **)ar5[1];
      pcVar13 = (code *)FUN_8c0530e0(ar4,*ar5,pcVar9,pcVar7);
      break;
    case 0xe:
      iVar2 = *(int *)(ar4 + 300);
      if (iVar2 == 0) {
        *(undefined4 *)(ar4 + 0x214) = 0;
        ar4[0x1fc] = (code)((byte)ar4[0x1fc] & 0xfb);
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
LAB_8c03d4b8:
        ar6_00 = &DAT_8c125bf0;
        if (cVar24 == '\0') {
          uVar3 = SUB84(in_dr0,0);
          uVar19 = 0x40400000;
        }
        else {
          uVar3 = 0x40400000;
          uVar19 = 0x42c80000;
        }
        FUN_8c032518(ar4,*(undefined4 *)ar5[1],&DAT_8c125bf0,ar5[6]);
        pcVar7 = Vec3_assign;
        Vec3_assign(ar4 + 0x248,auStack_184,ar6_00,Vec3_assign);
        a6 = 0xffffffff;
        uVar12 = 0xffffffff;
        Vec3_dtor(auStack_184,0xffffffff,0xffffffff,pcVar7);
        (**(code **)(*(int *)ar5[6] + 0x184))((int *)ar5[6],uVar12,a6,pcVar7);
        if (cVar24 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),uVar19);
        }
        else {
          in_xd0 = CONCAT44(uVar19,uVar3);
          dVar21 = *(double *)(ar4 + 0x48);
        }
        if (cVar23 == '\0') {
          fVar15 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
        }
        else {
          fVar15 = SUB84(dVar21 - dVar21,0);
        }
        if (cVar24 == '\0') {
          *(float *)(ar4 + 0x24c) = fVar15;
        }
        else {
          *(undefined8 *)(ar4 + 0x24c) = in_xd0;
        }
        pcVar7 = (code *)ar5[7];
        if (cVar24 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(pcVar7 + 8),in_fr3);
          in_dr0 = (double)CONCAT44(0x40400000,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          dVar21 = *(double *)(pcVar7 + 8);
          in_dr0 = 52776566554624.0;
        }
        if (cVar23 == '\0') {
          fVar18 = (float)((ulonglong)in_dr0 >> 0x20);
          fVar15 = SUB84(in_dr0,0) * fVar18;
          in_dr0 = (double)CONCAT44(fVar18,fVar15);
          dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - fVar15,SUB84(dVar21,0));
        }
        else {
          in_dr0 = in_dr0 * in_dr0;
          dVar21 = dVar21 - in_dr0;
        }
        if (cVar24 == '\0') {
          *(int *)(ar4 + 0x250) = (int)((ulonglong)dVar21 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x250) = dVar21;
        }
        *(undefined4 *)(ar4 + 0x40) = 5;
        pcVar9 = (code *)0x12c;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        pdVar6 = (double *)(ar4 + 0x2c);
        in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (cVar24 == '\0') {
          *(undefined4 *)pdVar6 = 0;
        }
        else {
          *pdVar6 = in_dr0;
        }
LAB_8c03d592:
        FUN_8c05ae54(ar4,pdVar6,pcVar9,pcVar7);
        FUN_8c03f3ac(ar4 + 0xb0,pdVar6,pcVar9,pcVar7);
        *(undefined4 *)(ar4 + 0x40) = 3;
        FUN_8c031c74(ar4,ar4 + 0x248,*(undefined4 *)ar5[1],pcVar7);
      }
      else {
        if (iVar2 == 1) goto LAB_8c03d4b8;
        if (iVar2 == 2) {
          pdVar6 = (double *)0x2;
          goto LAB_8c03d592;
        }
      }
      uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      pcVar10 = ar4 + 0x14;
      pcVar9 = pcVar10;
      Vec3_assign(ar4 + 0x80,pcVar10,pcVar10,pcVar7);
      FUN_8c03c314(ar4,pcVar10,pcVar9,pcVar7);
      pcVar7 = (code *)**(undefined4 **)(ar4 + 0x244);
      (**(code **)(pcVar7 + 0x184))(*(undefined4 **)(ar4 + 0x244),pcVar10,pcVar9,pcVar7);
      if (cVar24 == '\0') {
        dVar21 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),uVar3);
      }
      else {
        dVar21 = *(double *)(ar4 + 0x48);
      }
      if (cVar23 == '\0') {
        fVar15 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
      }
      else {
        fVar15 = SUB84(dVar21 - dVar21,0);
      }
      if (cVar24 == '\0') {
        uVar16 = CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 4),fVar15);
      }
      else {
        uVar16 = *(undefined8 *)(*(int *)ar5[1] + 4);
      }
      if (cVar23 == '\0' && (float)uVar16 < (float)((ulonglong)uVar16 >> 0x20)) {
        pcVar7 = FUN_8c031748;
        FUN_8c031748(ar4,pcVar10,pcVar9,FUN_8c031748);
      }
      break;
    case 0xf:
      *(undefined4 *)(ar4 + 0x178) = 1;
      iVar2 = get_field_6c_028cc4(*ar5,1,pcVar9,pcVar7);
      if (iVar2 == 0) {
        uStack_360 = 2;
        Vec3_dtor(auStack_70,0xffffffff,pcVar9,pcVar7);
        object_dtor_delete(auStack_60,0xffffffff,pcVar9,pcVar7);
        uVar3 = 0xffffffff;
        free_if_nonnull_wrap_102790(&fStack_54,0xffffffff,0xffffffff,pcVar7);
        Vec3_dtor(&fStack_48,0xffffffff,uVar3,pcVar7);
        puVar11 = auStack_38;
        free_if_nonnull_wrap_102790(puVar11,0xffffffff,uVar3,puVar11);
        Vec3_dtor(&uStack_2c,0xffffffff,uVar3,puVar11);
        return (code *)uStack_360;
      }
      FUN_8c03f414(iVar2,auStack_60,auStack_5c,auStack_58);
      ar7_00 = auStack_358;
      puVar11 = auStack_358;
      puVar4 = auStack_358;
      FUN_8c03f3f8(iVar2,puVar4,puVar11,ar7_00);
      iVar2 = *(int *)(ar4 + 0x128);
      if (iVar2 == 0) {
        Vec3_ctor_xyz(auStack_d0,puVar4,puVar11,ar7_00);
        vec3_copy_8c02b5fc(auStack_dc,auStack_60,vec3_copy_8c02b5fc,ar7_00);
        pcVar7 = FUN_8c023484;
        FUN_8c023484(auStack_d0,auStack_dc,FUN_8c023484,ar7_00,auStack_ec);
        Vec3_scale(auStack_ec,auStack_358,pcVar7,ar7_00,auStack_fc);
        pcVar10 = FUN_8c023aa0;
        FUN_8c023aa0(&uStack_2c,auStack_fc,FUN_8c023aa0,ar7_00);
        Vec3_dtor(auStack_fc,0xffffffff,pcVar10,ar7_00);
        Vec3_dtor(auStack_ec,0xffffffff,pcVar10,ar7_00);
        pcVar7 = object_dtor_delete;
        object_dtor_delete(auStack_dc,0xffffffff,pcVar10,object_dtor_delete);
        pcVar9 = (code *)0xffffffff;
        Vec3_dtor(auStack_d0,0xffffffff,0xffffffff,pcVar7);
      }
      else if (iVar2 == 1) {
        Vec3_ctor_xyz(auStack_10c,puVar4,puVar11,ar7_00);
        pcVar9 = (code *)auStack_118;
        vec3_copy_8c02b5fc(pcVar9,auStack_60,pcVar9,ar7_00);
        FUN_8c023484(auStack_10c,auStack_118,pcVar9,ar7_00,auStack_128);
        Vec3_scale(auStack_128,auStack_358,pcVar9,ar7_00,auStack_138);
        FUN_8c023aa0(&uStack_2c,auStack_138,pcVar9,ar7_00);
        Vec3_dtor(auStack_138,0xffffffff,pcVar9,ar7_00);
        Vec3_dtor(auStack_128,0xffffffff,pcVar9,ar7_00);
        object_dtor_delete(auStack_118,0xffffffff,pcVar9,ar7_00);
        pcVar7 = Vec3_dtor;
        Vec3_dtor(auStack_10c,0xffffffff,pcVar9,Vec3_dtor);
      }
      else {
        if (iVar2 != 2) {
          uStack_364 = 2;
          uVar3 = 0xffffffff;
          Vec3_dtor(auStack_70,0xffffffff,puVar11,0xffffffff);
          object_dtor_delete(auStack_60,0xffffffff,puVar11,uVar3);
          free_if_nonnull_wrap_102790(&fStack_54,0xffffffff,puVar11,uVar3);
          pfVar8 = &fStack_48;
          Vec3_dtor(pfVar8,0xffffffff,pfVar8,uVar3);
          free_if_nonnull_wrap_102790(auStack_38,0xffffffff,pfVar8,uVar3);
          Vec3_dtor(&uStack_2c,0xffffffff,pfVar8,uVar3);
          return (code *)uStack_364;
        }
        puVar11 = auStack_148;
        Vec3_ctor_xyz(puVar11,Vec3_ctor_xyz,puVar11,ar7_00);
        vec3_copy_8c02b5fc(auStack_154,auStack_60,puVar11,ar7_00);
        FUN_8c023484(auStack_148,auStack_154,auStack_164,ar7_00,auStack_164);
        pcVar7 = Vec3_scale;
        Vec3_scale(auStack_164,auStack_358,Vec3_scale,ar7_00,auStack_174);
        FUN_8c023aa0(&uStack_2c,auStack_174,pcVar7,ar7_00);
        Vec3_dtor(auStack_174,0xffffffff,pcVar7,ar7_00);
        Vec3_dtor(auStack_164,0xffffffff,pcVar7,ar7_00);
        pcVar7 = (code *)0xffffffff;
        pcVar9 = (code *)auStack_154;
        object_dtor_delete(pcVar9,0xffffffff,pcVar9,0xffffffff);
        Vec3_dtor(auStack_148,0xffffffff,pcVar9,pcVar7);
      }
      if (*(int *)(ar4 + 0x134) == 0) {
        *(undefined4 *)(ar4 + 0x214) = 0;
        pcVar9 = (code *)&uStack_2c;
        pcVar7 = pure_virtual_stub;
        iVar2 = pure_virtual_stub(ar4,*(undefined4 *)ar5[1],pcVar9,pure_virtual_stub);
        if ((iVar2 == 0) || (*(int *)(ar4 + 0x40) == 4)) {
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          *(undefined4 *)(ar4 + 0x40) = 5;
          FUN_8c03f3e8(*ar5,FUN_8c03f3e8,2,pcVar7);
          pcVar9 = (code *)(*(int *)(ar4 + 0x134) + 1);
          *(code **)(ar4 + 0x134) = pcVar9;
        }
        Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar9,pcVar7);
      }
      else if (*(int *)(ar4 + 0x134) == 1) {
        pcVar7 = (code *)*ar5;
        pcVar9 = (code *)&uStack_2c;
        iVar2 = FUN_8c04ddd4(ar4,*(undefined4 *)ar5[1],pcVar9,pcVar7);
        if (iVar2 == 0) {
          *(undefined4 *)(ar4 + 0x134) = 0;
          *(undefined4 *)(ar4 + 0x214) = 1;
          pcVar13 = (code *)0x0;
        }
      }
      break;
    case 0x10:
      pcVar7 = (code *)ar5[7];
      pcVar13 = (code *)FUN_8c04e7e0(ar4,*(undefined4 *)ar5[1],pcVar10,pcVar7);
      pcVar9 = pcVar10;
      break;
    case 0x11:
      Vec3_ctor_xyz(auStack_c0,uVar3,pcVar9,pcVar7);
      pcVar7 = (code *)ar5[3];
      pcVar13 = (code *)FUN_8c055490(ar4,*(undefined4 *)ar5[1],auStack_c0,pcVar7);
      pcVar9 = pcVar13;
      Vec3_dtor(auStack_c0,0xffffffff,pcVar13,pcVar7);
      break;
    case 0x12:
      if (*(int *)(ar4 + 0x134) == 0) {
        if (cVar24 == '\0') {
          uVar17 = (ulonglong)uStack_2c;
        }
        else {
          uVar17 = 0;
        }
        if (cVar23 == '\0' && (float)uVar17 < 0.0) {
          pcVar13 = (code *)0x2;
          break;
        }
        if (*(int *)(ar4 + 0x21c) != 0) {
          if (cVar24 == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2c) = uVar17;
          }
          *(undefined4 *)(ar4 + 0x28c) = 0;
          *(undefined4 *)(ar4 + 0x134) = 0;
          pcVar13 = (code *)0x0;
          pcVar9 = (code *)0x0;
          break;
        }
        if (cVar24 != '\0') {
          uStack_20 = (undefined4)((ulonglong)*(undefined8 *)(ar5[7] + 8) >> 0x20);
        }
        if (cVar24 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(ar5[3] + 8),in_fr3);
          dVar20 = (double)CONCAT44(0x3fc00000,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          dVar21 = *(double *)(ar5[3] + 8);
          dVar20 = 2.43657959471436e-311;
        }
        if (cVar23 == '\0') {
          fVar15 = SUB84(dVar20,0) * (float)((ulonglong)dVar20 >> 0x20);
          dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - fVar15,SUB84(dVar21,0));
        }
        else {
          fVar15 = SUB84(dVar20 * dVar20,0);
          dVar21 = dVar21 - dVar20 * dVar20;
        }
        uVar3 = (undefined4)((ulonglong)dVar21 >> 0x20);
        uStack_24 = uVar3;
        if (cVar24 != '\0') {
          uStack_24 = SUB84(dVar21,0);
          uStack_20 = uVar3;
        }
        pdVar6 = (double *)(*(int *)ar5[1] + 4);
        if (cVar24 == '\0') {
          uStack_28 = *(undefined4 *)pdVar6;
          in_dr0 = (double)CONCAT44(uStack_28,fVar15);
        }
        else {
          in_dr0 = *pdVar6;
          uStack_28 = SUB84(in_dr0,0);
          uStack_24 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        }
        Vec3_assign(ar4 + 0x248,&uStack_2c,0x21c,pdVar6);
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      }
      else if (*(int *)(ar4 + 0x134) != 1) break;
      uVar14 = SUB84(in_dr0,0);
      pcVar9 = (code *)FUN_8c054d6c(ar4,*(undefined4 *)ar5[1],ar4 + 0x248,pcVar10);
      pcVar7 = pcVar10;
      if (pcVar9 == (code *)0x0) {
        if (cVar24 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar14;
        }
        *(undefined4 *)(ar4 + 0x134) = 0;
        pcVar13 = (code *)0x0;
        pcVar7 = (code *)0x0;
      }
      break;
    case 0x14:
      *(undefined4 *)(ar4 + 0x214) = 0;
      FUN_8c05ae54(ar4,uVar3,pcVar9,pcVar7);
      FUN_8c031c74(ar4,&uStack_2c,*(undefined4 *)ar5[1],pcVar7);
      pcVar7 = (code *)FUN_8c057280(ar4,*(undefined4 *)ar5[1],pcVar10,pcVar7);
      pcVar9 = pcVar10;
      if (pcVar7 == (code *)0x0) {
        *(undefined4 *)(ar4 + 0x214) = 1;
        pcVar13 = (code *)0x0;
      }
      break;
    case 0x15:
      uVar3 = *(undefined4 *)ar5[1];
      puVar5 = &uStack_2c;
      FUN_8c031c74(ar4,puVar5,uVar3,pcVar7);
      uVar14 = SUB84(in_dr0,0);
      FUN_8c031748(ar4,puVar5,uVar3,pcVar7);
      uVar17 = (ulonglong)uVar14;
      if (cVar24 == '\0') {
        *(undefined4 *)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xa0) = uVar17;
      }
      iVar2 = *(int *)(ar4 + 300);
      if (iVar2 == 0) {
        iVar2 = FUN_8c05c28c(ar4,0,uVar3,pcVar7);
        if (iVar2 == 0) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else if (iVar2 == 1) {
        *(undefined4 *)(ar4 + 0x2b8) = 3;
        FUN_8c032ab0(ar4,1,uVar3,pcVar7);
        uVar14 = (uint)uVar17;
        pcVar7 = (code *)s_CAnimBody_AdvanceFrame_033ba0
                                   (ar4 + 0xb0,s_CAnimBody_AdvanceFrame_033ba0,uVar3,pcVar7);
        if (pcVar7 == (code *)0x1) {
          pcVar7 = (code *)0x0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xb,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,0xb0,pcVar7);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          if (cVar24 == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar14;
          }
        }
      }
      else if (iVar2 == 2) {
        FUN_8c05ae54(ar4,2,uVar3,pcVar7);
        FUN_8c032ab0(ar4,iVar2,uVar3,pcVar7);
        iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar2,uVar3,pcVar7);
        if (iVar2 == 1) {
          uVar19 = 0xffffffff;
          uVar3 = 0xc;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xc,0xffffffff,0);
          pcVar7 = ar4 + 0xb0;
          s_CAnimBody_SetFrame_033e6e(pcVar7,uVar3,uVar19,pcVar7);
          *(undefined4 *)(ar4 + 300) = 1;
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          pcVar13 = (code *)0x0;
        }
      }
      pcVar9 = Vec3_assign;
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,Vec3_assign,pcVar7);
      break;
    case 0x16:
      pcVar9 = *(code **)ar5[1];
      puVar5 = &uStack_2c;
      FUN_8c031c74(ar4,puVar5,pcVar9,pcVar7);
      uVar14 = SUB84(in_dr0,0);
      FUN_8c031748(ar4,puVar5,pcVar9,pcVar7);
      uVar17 = (ulonglong)uVar14;
      if (cVar24 == '\0') {
        *(undefined4 *)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xa0) = uVar17;
      }
      iVar2 = *(int *)(ar4 + 300);
      if (iVar2 == 0) {
        pcVar10 = FUN_8c0230f0;
        FUN_8c0230f0(ar4 + 0x14,0,FUN_8c0230f0,pcVar7,auStack_1a4);
        Vec3_ctor_xyz(auStack_1b4,auStack_1b4,pcVar10,pcVar7);
        FUN_8c022dac(auStack_1a4,auStack_1b4,pcVar10,pcVar7);
        uVar3 = (undefined4)(uVar17 >> 0x20);
        uStack_3c8 = (int)uVar17;
        if (cVar24 == '\0') {
          uStack_3c8 = uVar3;
          uVar3 = uStack_3c4;
        }
        uStack_3c4 = uVar3;
        uVar3 = 0x224;
        if (cVar24 == '\0') {
          uVar16 = CONCAT44(uStack_3c8,(int)uVar17);
          *(undefined4 *)(ar4 + 0x224) = uStack_3c8;
        }
        else {
          uVar16 = CONCAT44(uStack_3c4,uStack_3c8);
          *(undefined8 *)(ar4 + 0x224) = uVar16;
        }
        Vec3_dtor(auStack_1b4,0xffffffff,pcVar10,0x224);
        uVar19 = 0xffffffff;
        Vec3_dtor(auStack_1a4,0xffffffff,pcVar10,uVar3);
        Vec3_ctor_xyz(auStack_1c4,uVar19,pcVar10,uVar3);
        FUN_8c0231c8(auStack_1c4,auStack_1c4,pcVar10,uVar3);
        pcVar7 = FUN_8c0231c8;
        FUN_8c0231c8(ar4 + 0x14,FUN_8c0231c8,pcVar10,uVar3);
        FUN_8c010e38(FUN_8c010e38,pcVar7,pcVar10,uVar3);
        if (cVar24 == '\0') {
          *(int *)(ar4 + 0x228) = (int)((ulonglong)uVar16 >> 0x20);
        }
        else {
          *(undefined8 *)(ar4 + 0x228) = uVar16;
        }
        Vec3_dtor(auStack_1c4,0xffffffff,ar4 + 0x228,uVar3);
        *(undefined4 *)(ar4 + 0x40) = 5;
        if (cVar24 == '\0') {
          fVar15 = *(float *)(ar4 + 0x224);
          fVar18 = 5.0;
        }
        else {
          fVar15 = 5.0;
          fVar18 = 4.14784e-43;
        }
        if (cVar23 == '\0' && fVar18 < fVar15) {
          if (*(int *)(ar4 + 0x128) == 0) {
            uVar3 = 5;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
            if (cVar24 == '\0') {
              *(undefined4 *)(ar4 + 0x278) = 0x40c00000;
            }
            else {
              *(undefined8 *)(ar4 + 0x278) = 0x66e3d71d40c00000;
            }
          }
          else {
            uVar3 = 0x278;
            pcVar7 = ar4 + 0x278;
            if (cVar24 == '\0') {
              *(undefined4 *)pcVar7 = 0x3f800000;
            }
            else {
              *(ulonglong *)pcVar7 = CONCAT44(0x3f800000,fVar15);
            }
            Vec3_ctor_xyz(auStack_1d4,ar4 + 0x224,pcVar7,0x278);
            uVar19 = FUN_8c023334(ar4 + 0x14,auStack_1d4,pcVar7,uVar3);
            *(undefined4 *)(ar4 + 0x27c) = uVar19;
            Vec3_dtor(auStack_1d4,0xffffffff,pcVar7,uVar3);
            if (*(int *)(ar4 + 0x27c) == 3) {
              uVar3 = 7;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
            }
            else {
              uVar3 = 8;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
            }
          }
          uVar19 = 0xb0;
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar4 + 0xb0,0xb0);
          pcVar9 = (code *)0x12c;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,300,uVar19);
        }
        else {
          *(undefined4 *)(ar4 + 300) = 2;
          uVar19 = 0;
          uVar3 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar4 + 0xb0,uVar19);
          pcVar9 = (code *)0x190;
          uVar3 = rand_range(ar4,0xfa,400,uVar19);
          *(undefined4 *)(ar4 + 0x280) = uVar3;
        }
      }
      else if (iVar2 == 1) {
        Vec3_ctor_xyz(auStack_1e4,1,pcVar9,pcVar7);
        puVar11 = auStack_1e4;
        pcVar7 = Vec3_add;
        Vec3_add(*(undefined4 *)ar5[1],puVar11,Vec3_add,*(undefined4 *)ar5[1],auStack_1f4);
        pcVar10 = get_field_1c_026dd8;
        uVar3 = get_field_1c_026dd8(ar4 + 0xb0,puVar11,pcVar7,get_field_1c_026dd8);
        s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar3,pcVar7,pcVar10);
        uVar3 = get_field_1c_026dd8(ar4 + 0xb0,uVar3,pcVar7,pcVar10);
        s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar3,s_Check_This_Motion_Data_0314fc,pcVar10);
        Vec3_set_xyz(auStack_200,ar4 + 0x278,0x228,pcVar10);
        pcVar10 = ar4 + 0x14;
        FUN_8c031eb0(ar4,*(undefined4 *)ar5[1],auStack_1f4,pcVar10,auStack_210);
        pcVar9 = Vec3_assign;
        Vec3_assign(ar4 + 0x14,auStack_210,Vec3_assign,pcVar10);
        Vec3_dtor(auStack_210,0xffffffff,pcVar9,pcVar10);
        object_dtor_delete(auStack_200,0xffffffff,pcVar9,pcVar10);
        Vec3_dtor(auStack_1f4,0xffffffff,pcVar9,pcVar10);
        Vec3_dtor(auStack_1e4,0xffffffff,pcVar9,pcVar10);
        pcVar7 = ar4 + 0x14;
        Vec3_assign(ar4 + 0x80,pcVar7,pcVar9,pcVar10);
        iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar7,pcVar9,pcVar10);
        if (iVar2 == 1) {
          uVar3 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          pcVar9 = (code *)0xb0;
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,0xb0,uVar3);
          *(undefined4 *)(ar4 + 300) = 0;
          if (*(int *)(ar4 + 0x328) == 0) {
            pcVar9 = (code *)0x12c;
            *(undefined4 *)(ar4 + 300) = 0;
            pcVar13 = (code *)0x0;
          }
        }
      }
      else if (iVar2 == 2) {
        *(undefined4 *)(ar4 + 0x2fc) = 1;
        iVar2 = *(int *)(ar4 + 0x280);
        pcVar9 = (code *)(iVar2 + -1);
        *(code **)(ar4 + 0x280) = pcVar9;
        if (iVar2 < 0) {
          FUN_8c03f39c(*ar5,2,pcVar9,iVar2);
          *(undefined4 *)(ar4 + 0x280) = 0;
          uVar12 = 0;
          uVar19 = 0xffffffff;
          uVar3 = 0x10;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar19,uVar12);
          pcVar9 = (code *)0x12c;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
        else if (*(int *)(ar4 + 0x328) == 0) {
          *(undefined4 *)(ar4 + 300) = 0;
          pcVar13 = (code *)0x0;
        }
      }
      else if (iVar2 == 3) {
        pcVar9 = s_CAnimBody_AdvanceFrame_033ba0;
        iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,3,s_CAnimBody_AdvanceFrame_033ba0,pcVar7)
        ;
        if (iVar2 == 1) {
          pcVar13 = (code *)0x0;
          *(undefined4 *)(ar4 + 300) = 0;
        }
      }
      *(undefined4 *)(ar4 + 0x328) = 0;
      pcVar7 = (code *)0x328;
      break;
    case 0x18:
      *(undefined4 *)(ar4 + 0x214) = 0;
      Vec3_ctor_xyz(auStack_2f8,uVar3,pcVar9,pcVar7);
      iVar2 = FUN_8c054f7c(ar4,*(undefined4 *)ar5[1],auStack_2f8,ar5[6]);
      pcVar10 = (code *)(uint)(iVar2 == 0);
      pcVar7 = Vec3_dtor;
      pcVar9 = pcVar10;
      Vec3_dtor(auStack_2f8,0xffffffff,pcVar10,Vec3_dtor);
      if (pcVar10 != (code *)0x0) {
        pcVar13 = (code *)0x0;
        *(undefined4 *)(ar4 + 0x214) = 1;
      }
      break;
    case 0x2c:
      FUN_8c05ae54(ar4,FUN_8c05ae54,pcVar9,pcVar7);
      uVar14 = SUB84(in_dr0,0);
      uVar19 = *(undefined4 *)ar5[1];
      puVar5 = &uStack_2c;
      FUN_8c031c74(ar4,puVar5,uVar19,pcVar7);
      FUN_8c031748(ar4,puVar5,uVar19,pcVar7);
      uVar3 = 0xa0;
      if (cVar24 == '\0') {
        *(undefined4 *)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xa0) = (ulonglong)uVar14;
      }
      vec3_clear(ar4 + 0x90,0xa0,uVar19,pcVar7);
      pcVar7 = (code *)0xb0;
      pcVar9 = ar4 + 0xb0;
      iVar2 = CAnimBody_AdvanceFrame_wrapper(pcVar9,uVar3,pcVar9,0xb0);
      if (iVar2 == 1) {
        pcVar13 = (code *)0x0;
      }
      break;
    case 0x2e:
      if (*(int *)(ar4 + 0x128) != 0) {
        pcVar13 = (code *)0x2;
        break;
      }
      iVar2 = *(int *)(ar4 + 300);
      if (iVar2 == 0) {
        *(undefined4 *)(ar4 + 0x214) = 0;
        *(undefined4 *)(ar4 + 0x2e8) = 1;
        uVar3 = 0x2d4;
        vec3_clear(ar4 + 0x2d4,ar4 + 0x2d4,0x2d4,pcVar7);
        uVar14 = SUB84(in_dr0,0);
        vec3_clear(ar4 + 0x2a8,vec3_clear,uVar3,pcVar7);
        vec3_clear(ar4 + 0x90,vec3_clear,ar4 + 0x90,pcVar7);
        if (cVar24 == '\0') {
          *(undefined4 *)(ar4 + 0xa0) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0xa0) = (ulonglong)uVar14;
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar14;
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
        }
        else {
          *(ulonglong *)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar14);
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
          in_dr0 = (double)CONCAT44(0x40000000,uVar14);
          *(undefined4 *)(ar4 + 0x2c4) = 0x40000000;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar14;
          in_dr0 = -0.00781250186264515;
          *(undefined8 *)(ar4 + 0x2c4) = 0xbf80000040000000;
        }
        pcVar7 = (code *)0x0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x15,0xffffffff,0);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        pcVar9 = ar4;
LAB_8c03ee06:
        *(undefined4 *)(ar4 + 0x2e8) = 1;
        if (cVar24 == '\0') {
          uVar3 = SUB84(in_dr0,0);
          *(undefined4 *)(ar4 + 0x2e4) = 0x42200000;
        }
        else {
          uVar3 = 0x42200000;
          *(undefined8 *)(ar4 + 0x2e4) = 0x8042200000;
        }
        Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar9,pcVar7);
        if (cVar24 == '\0') {
          uVar17 = CONCAT44(0x3f000000,uVar3);
          *(undefined4 *)(ar4 + 0x278) = 0x3f000000;
        }
        else {
          uVar17 = 0x8c032a643f000000;
          *(undefined8 *)(ar4 + 0x278) = 0x8c032a643f000000;
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = uVar17 & 0xffffffff;
        }
        iVar2 = rand_range(ar4,0,10,pcVar7);
        if (5 < iVar2) {
          uVar3 = rand_range(ar4,0x3c,0x78,pcVar7);
          *(undefined4 *)(ar4 + 0x280) = uVar3;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 2;
          pcVar9 = (code *)0x12c;
          break;
        }
        uVar3 = 300;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else {
        if (iVar2 == 1) goto LAB_8c03ee06;
        if (iVar2 != 2) {
          if (iVar2 == 3) {
            *(undefined4 *)(ar4 + 0x2e8) = 1;
            if (cVar24 == '\0') {
              uVar3 = SUB84(in_dr0,0);
            }
            else {
              uVar3 = (undefined4)*(undefined8 *)(ar4 + 0x278);
            }
            iStack_440 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,pcVar9,pcVar7);
            iVar2 = iStack_440;
            if (iStack_440 == 1) {
              pcVar9 = s_CAnimBody_SetFrame_033e6e;
              s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,1,s_CAnimBody_SetFrame_033e6e,pcVar7);
            }
            if (cVar24 == '\0') {
              uVar19 = *(undefined4 *)(ar4 + 0x2e4);
            }
            else {
              uVar19 = (undefined4)*(undefined8 *)(ar4 + 0x2c4);
            }
            puVar11 = auStack_330;
            Vec3_set_xyz(puVar11,iVar2,pcVar9,puVar11);
            FUN_8c023484(ar4 + 0x14,auStack_330,pcVar9,puVar11,auStack_340);
            Vec3_assign(ar4 + 0x14,auStack_340,pcVar9,puVar11);
            Vec3_dtor(auStack_340,0xffffffff,Vec3_dtor,puVar11);
            puVar11 = auStack_330;
            pcVar7 = object_dtor_delete;
            object_dtor_delete(puVar11,0xffffffff,object_dtor_delete,puVar11);
            Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar7,puVar11);
            pdVar6 = (double *)(ar4 + 0x2e4);
            if (cVar24 == '\0') {
              dVar21 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2e4),uVar3);
              dVar20 = (double)CONCAT44(0x3f4ccccd,uVar19);
            }
            else {
              dVar21 = *(double *)(ar4 + 0x2e4);
              dVar20 = 1.35860200283337e-311;
            }
            if (cVar23 == '\0') {
              dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) *
                                        (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 * dVar20;
            }
            if (cVar24 == '\0') {
              *(int *)pdVar6 = (int)((ulonglong)dVar21 >> 0x20);
            }
            else {
              *pdVar6 = dVar21;
            }
            iVar2 = *(int *)(ar4 + 0x280);
            uVar3 = 0x280;
            *(int *)(ar4 + 0x280) = iVar2 + -1;
            if (iVar2 < 0) {
              *(undefined4 *)(ar4 + 300) = 1;
            }
            pcVar7 = ar4;
            Vec3_ctor_xyz(auStack_350,pdVar6,0x280,ar4);
            FUN_8c0231c8(auStack_350,pdVar6,uVar3,pcVar7);
            iVar2 = (int)((ulonglong)dVar21 >> 0x20);
            iStack_444 = iVar2;
            if (cVar24 != '\0') {
              iStack_444 = SUB84(dVar21,0);
              iStack_440 = iVar2;
            }
            pcVar7 = FUN_8c0231c8;
            FUN_8c0231c8(ar4 + 0x14,pdVar6,uVar3,FUN_8c0231c8);
            uVar3 = (undefined4)((ulonglong)dVar21 >> 0x20);
            if (cVar24 == '\0') {
              dVar21 = (double)CONCAT44(uVar3,iStack_444);
            }
            else {
              in_xd0 = CONCAT44(iStack_440,uVar3);
            }
            if (cVar23 == '\0') {
              fVar15 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
            }
            else {
              fVar15 = SUB84(dVar21 - dVar21,0);
            }
            if (cVar24 == '\0') {
              *(float *)(ar4 + 0x224) = fVar15;
            }
            else {
              *(undefined8 *)(ar4 + 0x224) = in_xd0;
            }
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_350,0xffffffff,0x224,pcVar7);
            pcVar9 = FUN_8c05ae54;
            FUN_8c05ae54(ar4,uVar3,FUN_8c05ae54,pcVar7);
          }
          break;
        }
      }
      *(undefined4 *)(ar4 + 0x2e8) = 1;
      pcVar10 = ar4 + 0xb0;
      pcVar7 = s_CAnimBody_AdvanceFrame_033ba0;
      iVar2 = s_CAnimBody_AdvanceFrame_033ba0(pcVar10,uVar3,s_CAnimBody_AdvanceFrame_033ba0,pcVar10)
      ;
      if (iVar2 == 1) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,pcVar7,pcVar10);
      }
      uVar12 = 0x2e4;
      Vec3_set_xyz(auStack_304,uVar3,pcVar7,0x2e4);
      FUN_8c023484(ar4 + 0x14,auStack_304,pcVar7,uVar12,auStack_314);
      puVar11 = auStack_314;
      Vec3_assign(ar4 + 0x14,puVar11,puVar11,uVar12);
      Vec3_dtor(auStack_314,0xffffffff,puVar11,uVar12);
      object_dtor_delete(auStack_304,0xffffffff,puVar11,uVar12);
      pcVar10 = ar4 + 0x14;
      pcVar9 = Vec3_assign;
      Vec3_assign(ar4 + 0x80,pcVar10,Vec3_assign,uVar12);
      pcVar7 = ar4 + 0x2e4;
      if (cVar24 == '\0') {
        dVar21 = (double)CONCAT44(0x3f4ccccd,*(undefined4 *)pcVar7);
      }
      else {
        in_xd0 = *(undefined8 *)pcVar7;
        dVar21 = 3.051758532137683e-05;
      }
      if (cVar23 == '\0') {
        fVar15 = (float)((ulonglong)dVar21 >> 0x20);
        dVar21 = (double)CONCAT44(fVar15,SUB84(dVar21,0) * fVar15);
      }
      else {
        dVar21 = dVar21 * dVar21;
      }
      if (cVar24 == '\0') {
        *(int *)(ar4 + 0x2e4) = SUB84(dVar21,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x2e4) = in_xd0;
      }
      FUN_8c032ab0(ar4,pcVar10,pcVar9,pcVar7);
      uStack_434 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (cVar24 == '\0') {
        dVar21 = (double)CONCAT44(uStack_434,*(undefined4 *)(ar4 + 0x2e4));
      }
      else {
        uStack_434 = SUB84(dVar21,0);
        in_xd0 = *(undefined8 *)(ar4 + 0x2e4);
      }
      if (cVar23 == '\0' && SUB84(dVar21,0) < (float)((ulonglong)dVar21 >> 0x20)) {
        *(undefined4 *)(ar4 + 300) = 1;
      }
      dVar20 = 0.0;
      puVar11 = auStack_324;
      Vec3_ctor_xyz(puVar11,pcVar10,puVar11,pcVar7);
      FUN_8c0231c8(auStack_324,pcVar10,puVar11,pcVar7);
      uVar3 = (undefined4)((ulonglong)dVar21 >> 0x20);
      uStack_438 = uVar3;
      if (cVar24 != '\0') {
        uStack_438 = SUB84(dVar21,0);
        uStack_434 = uVar3;
      }
      FUN_8c0231c8(ar4 + 0x14,ar4 + 0x14,puVar11,pcVar7);
      uVar3 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (cVar24 == '\0') {
        dVar21 = (double)CONCAT44(uVar3,uStack_438);
      }
      else {
        in_xd0 = CONCAT44(uStack_434,uVar3);
      }
      if (cVar23 == '\0') {
        fVar15 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
      }
      else {
        fVar15 = SUB84(dVar21 - dVar21,0);
      }
      if (cVar24 == '\0') {
        *(float *)(ar4 + 0x224) = fVar15;
      }
      else {
        *(undefined8 *)(ar4 + 0x224) = in_xd0;
      }
      pcVar9 = Vec3_dtor;
      Vec3_dtor(auStack_324,0xffffffff,Vec3_dtor,pcVar7);
      if (cVar24 == '\0') {
        fVar15 = *(float *)(ar4 + 0x224);
        fVar18 = 80.0;
      }
      else {
        fVar15 = 80.0;
        fVar18 = -80.0;
      }
      if (cVar23 != '\0' || fVar15 <= fVar18) {
        if (cVar24 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x224),uVar19);
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),0xc2a00000);
        }
        else {
          dVar21 = *(double *)(ar4 + 0x224);
        }
        if (cVar23 == '\0') {
          bVar22 = (float)((ulonglong)dVar21 >> 0x20) < SUB84(dVar20,0);
        }
        else {
          bVar22 = dVar21 < dVar20;
        }
        if (!bVar22) break;
      }
      if (cVar24 == '\0') {
        dVar21 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c4),SUB84(dVar20,0));
        dVar20 = (double)CONCAT44(0xbf800000,fVar15);
      }
      else {
        dVar21 = *(double *)(ar4 + 0x2c4);
        dVar20 = -8.410980261839484e+168;
      }
      if (cVar23 == '\0') {
        dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) *
                                  (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar21,0));
      }
      else {
        dVar21 = dVar21 * dVar20;
      }
      pcVar7 = (code *)0x2c4;
      if (cVar24 == '\0') {
        *(int *)(ar4 + 0x2c4) = (int)((ulonglong)dVar21 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x2c4) = dVar21;
      }
    }
  }
  else {
override_jmp_8c03cc1e_case_7:
    pcVar13 = (code *)0x2;
  }
  FUN_8c031ab4(ar4,*(undefined4 *)(ar5[1] + 4),pcVar9,pcVar7);
  pcStack_36c = pcVar13;
  Vec3_dtor(auStack_70,0xffffffff,pcVar9,pcVar7);
  object_dtor_delete(auStack_60,0xffffffff,pcVar9,pcVar7);
  free_if_nonnull_wrap_102790(&fStack_54,0xffffffff,pcVar9,pcVar7);
  Vec3_dtor(&fStack_48,0xffffffff,pcVar9,pcVar7);
  uVar3 = 0xffffffff;
  free_if_nonnull_wrap_102790(auStack_38,0xffffffff,0xffffffff,pcVar7);
  Vec3_dtor(&uStack_2c,0xffffffff,uVar3,pcVar7);
  return pcStack_36c;
}



/* FUN_8c03f39c @ 8c03f39c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c03f39c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c03f3a8;
  *(undefined4 *)(DAT_8c03f3a8 + ar4) = 1;
  return iVar1;
}



/* FUN_8c03f3ac @ 8c03f3ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03f3ac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c03f3e4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c03f3e8 @ 8c03f3e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c03f3e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c03f3f4;
  *(undefined4 *)(DAT_8c03f3f4 + ar4) = 1;
  return iVar1;
}



/* FUN_8c03f3f8 @ 8c03f3f8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c03f40a) */
/* WARNING: Removing unreachable block (ram,0x8c03f404) */
/* WARNING: Removing unreachable block (ram,0x8c03f3fc) */
/* WARNING: Removing unreachable block (ram,0x8c03f3fe) */
/* WARNING: Removing unreachable block (ram,0x8c03f406) */
/* WARNING: Removing unreachable block (ram,0x8c03f40c) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c03f3f8(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x5c);
  *ar6 = *(undefined4 *)(ar4 + 0x60);
  *ar7 = *(undefined4 *)(ar4 + 100);
  return (undefined4 *)(ar4 + 0x60);
}



/* FUN_8c03f414 @ 8c03f414 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c03f426) */
/* WARNING: Removing unreachable block (ram,0x8c03f420) */
/* WARNING: Removing unreachable block (ram,0x8c03f418) */
/* WARNING: Removing unreachable block (ram,0x8c03f41a) */
/* WARNING: Removing unreachable block (ram,0x8c03f422) */
/* WARNING: Removing unreachable block (ram,0x8c03f428) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c03f414(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x50);
  *ar6 = *(undefined4 *)(ar4 + 0x54);
  *ar7 = *(undefined4 *)(ar4 + 0x58);
  return (undefined4 *)(ar4 + 0x54);
}



/* FUN_8c03f430 @ 8c03f430 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c03f430(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c03f460(ar4,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0xc) = *(undefined4 *)(ar5 + 0xc);
  }
  else {
    *(undefined8 *)(ar4 + 0xc) = *(undefined8 *)(ar5 + 0xc);
  }
  return ar4;
}



/* FUN_8c03f460 @ 8c03f460 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c03f476) */
/* WARNING: Removing unreachable block (ram,0x8c03f46c) */
/* WARNING: Removing unreachable block (ram,0x8c03f460) */
/* WARNING: Removing unreachable block (ram,0x8c03f462) */
/* WARNING: Removing unreachable block (ram,0x8c03f46e) */
/* WARNING: Removing unreachable block (ram,0x8c03f478) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c03f460(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}



/* FUN_8c03f480 @ 8c03f480 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03f480(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c03f4a0)(s0,ar4 + 0x28,ar6,ar7);
  return uVar1;
}



/* FUN_8c03f4a4 @ 8c03f4a4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c03f4a4(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *ar5_00;
  code *pcVar4;
  undefined1 *puVar5;
  double *pdVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  code *pcVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 unaff_r8;
  code *pcVar14;
  undefined4 unaff_r9;
  int iVar15;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  int iVar16;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar17;
  uint in_fr1;
  undefined4 uVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  uint uVar23;
  double dVar22;
  uint in_fr7;
  double dVar24;
  undefined8 uVar25;
  double in_dr14;
  float fVar26;
  undefined8 in_xd0;
  double in_xd4;
  undefined8 in_xd14;
  bool bVar27;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
    puVar17 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar17 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar17 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar17 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar17 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar17 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar17 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar17 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar17 + -0x1c) = unaff_r8;
  *(undefined4 *)((int)puVar17 + -0x20) = in_PR;
  iVar16 = 1;
  puVar5 = (undefined1 *)((int)puVar17 + -0xe8);
  *(undefined1 **)((int)puVar17 + -0xa74) = puVar5;
  FUN_8c03f480(*ar5,1,puVar5,ar7,*(undefined4 *)((int)puVar17 + -0xa74));
  pcVar10 = Vec3_ctor_copy;
  Vec3_ctor_copy((undefined1 *)((int)puVar17 + -0x30),(undefined1 *)((int)puVar17 + -0xe8),puVar5,
                 Vec3_ctor_copy);
  uVar2 = 0xffffffff;
  Vec3_dtor((undefined1 *)((int)puVar17 + -0xe8),0xffffffff,puVar5,pcVar10);
  Vec3_ctor_zero((undefined1 *)((int)puVar17 + -0x40),uVar2,puVar5,pcVar10);
  pcVar14 = (code *)ar5[4];
  Vec3_ctor_zero((undefined1 *)((int)puVar17 + -0x50),uVar2,puVar5,pcVar10);
  puVar5 = (undefined1 *)((int)puVar17 + -0x60);
  pcVar10 = Vec3_ctor_zero;
  Vec3_ctor_zero(puVar5,uVar2,Vec3_ctor_zero,puVar5);
  *(undefined4 *)((int)puVar17 + -0x640) = 0;
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)(ulonglong)in_fr7;
  }
  else {
    dVar24 = *(double *)(ar5[7] + 8);
  }
  if (in_FPSCR_SZ != '\0') {
    in_xd4 = *(double *)(ar5[7] + 4);
  }
  FUN_8c10277c((undefined1 *)((int)puVar17 + -0x6c),uVar2,pcVar10,puVar5);
  puVar5 = (undefined1 *)((int)puVar17 + -0x7c);
  pcVar10 = Vec3_ctor_zero;
  Vec3_ctor_zero(puVar5,uVar2,Vec3_ctor_zero,puVar5);
  Vec3_ctor_zero((undefined1 *)((int)puVar17 + -0x8c),uVar2,pcVar10,puVar5);
  puVar3 = &DAT_8c125bf0;
  FUN_8c03f460((undefined1 *)((int)puVar17 + -0x98),&DAT_8c125bf0,pcVar10,puVar5);
  Vec3_ctor_zero((undefined1 *)((int)puVar17 + -0xa8),puVar3,Vec3_ctor_zero,
                 (undefined1 *)((int)puVar17 + -0xa8));
  if (((((0 < *(int *)(ar4 + 0x31c)) && (*(int *)(ar4 + 0x124) != 0x29)) &&
       (*(int *)(ar4 + 0x124) != 0x23)) &&
      ((*(int *)(ar4 + 0x124) != 0x24 && (*(int *)(ar4 + 0x124) != 0x27)))) &&
     ((*(int *)(ar4 + 0x124) != 0x28 &&
      ((*(int *)(ar4 + 0x124) != 0x32 && (*(int *)(ar4 + 0x124) != 0x33)))))) {
    Vec3_assign(&DAT_8c2803a8,*(undefined4 *)ar5[1],*(int *)(ar4 + 0x124),0x124);
    *(undefined4 *)((int)puVar17 + -0x644) = 2;
    puVar5 = (undefined1 *)((int)puVar17 + -0xa8);
    pcVar10 = Vec3_dtor;
    _DAT_8c2803b8 = pcVar14;
    Vec3_dtor(puVar5,0xffffffff,Vec3_dtor,puVar5);
    free_if_nonnull_wrap_102790((undefined1 *)((int)puVar17 + -0x98),0xffffffff,pcVar10,puVar5);
    pcVar10 = Vec3_dtor;
    Vec3_dtor((undefined1 *)((int)puVar17 + -0x8c),0xffffffff,Vec3_dtor,puVar5);
    Vec3_dtor((undefined1 *)((int)puVar17 + -0x7c),0xffffffff,pcVar10,puVar5);
    free_if_nonnull_wrap_102790((undefined1 *)((int)puVar17 + -0x6c),0xffffffff,pcVar10,puVar5);
    Vec3_dtor((undefined1 *)((int)puVar17 + -0x60),0xffffffff,pcVar10,puVar5);
    uVar2 = 0xffffffff;
    Vec3_dtor((undefined1 *)((int)puVar17 + -0x50),0xffffffff,pcVar10,0xffffffff);
    Vec3_dtor((undefined1 *)((int)puVar17 + -0x40),0xffffffff,pcVar10,uVar2);
    Vec3_dtor((undefined1 *)((int)puVar17 + -0x30),0xffffffff,(undefined1 *)((int)puVar17 + -0x30),
              uVar2);
    return *(undefined4 *)((int)puVar17 + -0x644);
  }
  *(undefined4 *)(ar4 + 0x2fc) = 0;
  *(undefined4 *)(ar4 + 0x300) = 1;
  pcVar10 = (code *)0x218;
  uVar2 = 0;
  *(undefined4 *)(ar4 + 0x218) = 0;
  *(undefined4 *)(ar4 + 0x338) = 0;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)((ulonglong)*(uint *)((int)puVar17 + -0x90) << 0x20);
  }
  else {
    dVar21 = *(double *)((int)puVar17 + -0x90);
    in_xd4 = 0.0;
  }
  if (in_FPSCR_PR == '\0') {
    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 + dVar21;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar17 + -0x38) = (int)((ulonglong)dVar21 >> 0x20);
    dVar21 = (double)CONCAT44(*(undefined4 *)((int)puVar17 + -0x98),SUB84(dVar21,0));
    dVar19 = (double)(ulonglong)in_fr1;
  }
  else {
    *(double *)((int)puVar17 + -0x38) = dVar21;
    dVar21 = *(double *)((int)puVar17 + -0x98);
    dVar19 = 0.0;
  }
  if (in_FPSCR_PR == '\0') {
    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + 0.0,SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 + dVar19;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar17 + -0x40) = (int)((ulonglong)dVar21 >> 0x20);
    dVar21 = (double)CONCAT44(*(undefined4 *)((int)puVar17 + -0x94),SUB84(dVar21,0));
  }
  else {
    *(double *)((int)puVar17 + -0x40) = dVar21;
    dVar21 = *(double *)((int)puVar17 + -0x94);
  }
  ar5_00 = &DAT_8c125be4;
  if (in_FPSCR_SZ != '\0') {
    dVar19 = 0.0;
  }
  if (in_FPSCR_PR == '\0') {
    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + 0.0,SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 + dVar19;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar17 + -0x3c) = (int)((ulonglong)dVar21 >> 0x20);
  }
  else {
    *(double *)((int)puVar17 + -0x3c) = dVar21;
  }
  if ((pcVar14 == (code *)0x3) && (0 < *(int *)(ar4 + 0x2e8))) {
    pcVar14 = (code *)0x1;
  }
  if (((pcVar14 == (code *)0x3) || (*(int *)(ar4 + 0x68) != 0)) && (*(int *)(ar4 + 0x2e8) == 0)) {
    *(int *)((int)puVar17 + -0xa74) = ar5[0xb];
    *(int *)((int)puVar17 + -0xa78) = ar5[6];
    *(int *)((int)puVar17 + -0xa7c) = ar5[3];
    FUN_8c0507c0(ar4,*(undefined4 *)ar5[1],ar5[1],pcVar14);
    puVar3 = (undefined4 *)ar5[1];
    pcVar10 = Vec3_assign;
    Vec3_assign(&DAT_8c2803a8,*puVar3,Vec3_assign,puVar3);
    *(undefined4 *)((int)puVar17 + -0x648) = 1;
    _DAT_8c2803b8 = pcVar14;
    Vec3_dtor((undefined1 *)((int)puVar17 + -0xa8),0xffffffff,pcVar10,puVar3);
    free_if_nonnull_wrap_102790((undefined1 *)((int)puVar17 + -0x98),0xffffffff,pcVar10,puVar3);
    Vec3_dtor((undefined1 *)((int)puVar17 + -0x8c),0xffffffff,pcVar10,puVar3);
    Vec3_dtor((undefined1 *)((int)puVar17 + -0x7c),0xffffffff,pcVar10,puVar3);
    puVar5 = (undefined1 *)((int)puVar17 + -0x6c);
    pcVar14 = free_if_nonnull_wrap_102790;
    free_if_nonnull_wrap_102790(puVar5,0xffffffff,puVar5,free_if_nonnull_wrap_102790);
    Vec3_dtor((undefined1 *)((int)puVar17 + -0x60),0xffffffff,puVar5,pcVar14);
    Vec3_dtor((undefined1 *)((int)puVar17 + -0x50),0xffffffff,puVar5,pcVar14);
    pcVar10 = Vec3_dtor;
    Vec3_dtor((undefined1 *)((int)puVar17 + -0x40),0xffffffff,Vec3_dtor,pcVar14);
    Vec3_dtor((undefined1 *)((int)puVar17 + -0x30),0xffffffff,pcVar10,pcVar14);
    return *(undefined4 *)((int)puVar17 + -0x648);
  }
  if (pcVar14 == (code *)0x1) {
    vec3_clear(ar4 + 0x6c,&DAT_8c125be4,0,0x218);
    uVar23 = (uint)((ulonglong)dVar21 >> 0x20);
    *(undefined1 **)((int)puVar17 + -0xa70) = (undefined1 *)((int)puVar17 + -0xf8);
    *(undefined4 *)((int)puVar17 + -0xa74) = *(undefined4 *)((int)puVar17 + -0xa70);
    pcVar10 = FUN_8c0230f0;
    FUN_8c0230f0(ar4 + 0x14,ar5_00,uVar2,FUN_8c0230f0,*(undefined4 *)((int)puVar17 + -0xa74));
    uVar2 = Vec3_length((undefined1 *)((int)puVar17 + -0xf8),ar5_00,
                        (undefined1 *)((int)puVar17 + -0xf8),pcVar10);
    *(undefined4 *)((int)puVar17 + -0x694) = uVar2;
    Vec3_assign(ar4 + 0x14,*(undefined4 *)((int)puVar17 + -0x694),uVar2,pcVar10);
    ar5_00 = (undefined *)0xffffffff;
    Vec3_dtor((undefined1 *)((int)puVar17 + -0xf8),0xffffffff,uVar2,pcVar10);
    FUN_8c031748(ar4,ar5_00,uVar2,pcVar10);
    pcVar10 = (code *)0xa0;
    dVar21 = (double)((ulonglong)uVar23 << 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0xa0) = 0;
    }
    else {
      *(double *)(ar4 + 0xa0) = in_xd4;
    }
  }
  uVar2 = SUB84(dVar24,0);
  pdVar6 = (double *)0x2e8;
  if (*(int *)(ar4 + 0x2e8) == 2) {
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44(0x43340000,SUB84(dVar21,0));
      *(undefined4 *)(*(int *)ar5[1] + 4) = 0x43340000;
    }
    else {
      dVar21 = 6.20179820760257e-312;
      *(undefined8 *)(*(int *)ar5[1] + 4) = 0x12443340000;
    }
  }
  iVar15 = *(int *)(ar4 + 0x124);
  if ((iVar15 < 0x36) && (-1 < iVar15)) {
    uVar9 = SUB84(dVar21,0);
                    /* WARNING: Switch is manually overridden */
    switch(iVar15) {
    case 0:
      FUN_8c03f430((undefined1 *)((int)puVar17 + -0x108),ar5[7],0x2e8,FUN_8c03f430);
      iVar16 = ar5[1];
      *(int *)((int)puVar17 + -0xaa0) = *ar5;
      *(int *)((int)puVar17 + -0xa9c) = iVar16;
      iVar16 = ar5[3];
      *(int *)((int)puVar17 + -0xa98) = ar5[2];
      *(int *)((int)puVar17 + -0xa94) = iVar16;
      iVar16 = ar5[5];
      *(int *)((int)puVar17 + -0xa90) = ar5[4];
      *(int *)((int)puVar17 + -0xa8c) = iVar16;
      iVar16 = ar5[7];
      *(int *)((int)puVar17 + -0xa88) = ar5[6];
      *(int *)((int)puVar17 + -0xa84) = iVar16;
      iVar16 = ar5[9];
      *(int *)((int)puVar17 + -0xa80) = ar5[8];
      *(int *)((int)puVar17 + -0xa7c) = iVar16;
      iVar16 = ar5[0xb];
      *(int *)((int)puVar17 + -0xa78) = ar5[10];
      *(int *)((int)puVar17 + -0xa74) = iVar16;
      *(int *)((int)puVar17 + -0xaa4) = ar5[6];
      *(undefined1 **)((int)puVar17 + -0xaa8) = (undefined1 *)((int)puVar17 + -0x108);
      pcVar10 = (code *)FUN_8c046684(ar4,*(undefined4 *)ar5[1],(undefined1 *)((int)puVar17 + -0x30),
                                     pcVar14);
      *(code **)((int)puVar17 + -0x698) = pcVar10;
      iVar16 = *(int *)((int)puVar17 + -0x698);
      FUN_8c026038((undefined1 *)((int)puVar17 + -0x108),0xffffffff,0xffffffff,pcVar10);
      break;
    case 1:
      if ((pcVar14 == (code *)0x0) || (pcVar14 == (code *)0x2)) {
        uVar2 = FUN_8c04b168(ar4,*(undefined4 *)ar5[1],(undefined1 *)((int)puVar17 + -0x30),pcVar10)
        ;
        *(undefined4 *)((int)puVar17 + -0x69c) = uVar2;
        iVar16 = *(int *)((int)puVar17 + -0x69c);
      }
      else if (pcVar14 == (code *)0x1) {
        FUN_8c031748(ar4,ar5_00,0x2e8,pcVar10);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar17 + -0x2c) = 0x43340000;
        }
        else {
          *(undefined8 *)((int)puVar17 + -0x2c) = 0xa4443340000;
        }
        uVar2 = FUN_8c04c314(ar4,*(undefined4 *)ar5[1],(undefined1 *)((int)puVar17 + -0x30),pcVar10)
        ;
        *(undefined4 *)((int)puVar17 + -0x6a0) = uVar2;
        iVar16 = *(int *)((int)puVar17 + -0x6a0);
      }
      break;
    case 2:
      *(undefined4 *)(ar4 + 0x214) = 0;
      (**(code **)(*(int *)ar5[6] + 0x128))((int *)ar5[6],*(undefined4 *)ar5[1],0x2e8,pcVar10);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar17 + -0x8f4) = (int)((ulonglong)dVar19 >> 0x20);
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)((int)puVar17 + -0x8f4));
        dVar24 = (double)CONCAT44(0x43340000,SUB84(dVar21,0));
      }
      else {
        *(double *)((int)puVar17 + -0x8f4) = dVar19;
        dVar24 = -9.359181568001544e-251;
      }
      if (in_FPSCR_PR == '\0') {
        bVar27 = SUB84(in_dr14,0) < (float)((ulonglong)dVar24 >> 0x20);
      }
      else {
        bVar27 = in_dr14 < dVar24;
      }
      if (bVar27) {
        iVar16 = ar5[6];
        *(int *)((int)puVar17 + -0xa70) = ar5[1];
        pcVar10 = FUN_8c04d62c;
        uVar2 = FUN_8c04d62c(ar4,**(undefined4 **)((int)puVar17 + -0xa70),iVar16,FUN_8c04d62c);
        *(undefined4 *)((int)puVar17 + -0x900) = uVar2;
        iVar16 = *(int *)((int)puVar17 + -0x900);
        FUN_8c031c74(ar4,(undefined1 *)((int)puVar17 + -0x30),*(undefined4 *)ar5[1],pcVar10);
      }
      else {
        uVar9 = *(undefined4 *)ar5[1];
        pcVar10 = FUN_8c057164;
        uVar2 = FUN_8c057164(ar4,uVar9,uVar9,FUN_8c057164);
        *(undefined4 *)((int)puVar17 + -0x8f8) = uVar2;
        if (*(int *)((int)puVar17 + -0x8f8) == 0) {
          uVar2 = FUN_8c04db38(ar4,*(undefined4 *)ar5[1],uVar9,pcVar10);
          *(undefined4 *)((int)puVar17 + -0x8fc) = uVar2;
          iVar16 = *(int *)((int)puVar17 + -0x8fc);
          uVar2 = *(undefined4 *)(ar5[1] + 4);
          FUN_8c031ab4(ar4,uVar2,uVar2,pcVar10);
          Vec3_assign(ar4 + 0x80,ar4 + 0x14,uVar2,pcVar10);
        }
      }
      break;
    case 3:
      iVar15 = *(int *)(ar4 + 300);
      if (iVar15 == 0) {
        *(undefined4 *)(ar4 + 0x178) = 1;
        pcVar10 = pcVar14;
        uVar2 = FUN_8c055c38(ar4,*(undefined4 *)ar5[1],ar4 + 0x34c,pcVar14);
        *(undefined4 *)((int)puVar17 + -0x734) = uVar2;
        if (*(int *)((int)puVar17 + -0x734) == 0) {
          *(undefined4 *)(ar4 + 0x178) = 0;
          *(int *)((int)puVar17 + -0x950) = ar4;
          pcVar10 = *(code **)((int)puVar17 + -0x950);
          *(int *)(*(int *)((int)puVar17 + -0x950) + 300) = *(int *)(pcVar10 + 300) + 1;
        }
      }
      else if (iVar15 == 1) {
        uVar2 = FUN_8c057164(ar4,*(undefined4 *)ar5[1],300,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x738) = uVar2;
        if (*(int *)((int)puVar17 + -0x738) == 0) {
          *(undefined4 *)(ar4 + 0x2b8) = 3;
          uVar12 = 0;
          uVar9 = 0xffffffff;
          uVar2 = 0x1d;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,uVar12);
          *(int *)((int)puVar17 + -0x954) = ar4;
          pcVar10 = *(code **)(*(int *)((int)puVar17 + -0x954) + 300);
          *(code **)(*(int *)((int)puVar17 + -0x954) + 300) = pcVar10 + 1;
        }
      }
      else if (iVar15 == 2) {
        *(code **)((int)puVar17 + -0xa6c) = CAnimBody_AdvanceFrame_wrapper;
        uVar2 = (**(code **)((int)puVar17 + -0xa6c))(ar4 + 0xb0,ar5_00,300,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x73c) = uVar2;
        if (*(int *)((int)puVar17 + -0x73c) == 1) {
          *(int *)((int)puVar17 + -0x958) = ar4;
          *(undefined4 *)((int)puVar17 + -0xa68) =
               *(undefined4 *)(*(int *)((int)puVar17 + -0x958) + 300);
          *(undefined4 *)((int)puVar17 + -0xa64) = *(undefined4 *)((int)puVar17 + -0xa68);
          *(int *)((int)puVar17 + -0xa64) = *(int *)((int)puVar17 + -0xa64) + 1;
          *(undefined4 *)(*(int *)((int)puVar17 + -0x958) + 300) =
               *(undefined4 *)((int)puVar17 + -0xa64);
          uVar2 = 0x11;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0);
          pcVar10 = (code *)(ar4 + 0xb0);
          s_CAnimBody_SetFrame_033e6e(pcVar10,uVar2,0xb0,pcVar10);
          *(undefined4 *)(ar4 + 0x2b8) = 3;
        }
      }
      else if (iVar15 == 3) {
        s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5_00,300,pcVar10);
      }
      break;
    case 4:
      *(undefined4 *)(ar4 + 0x214) = 0;
      pcVar10 = (code *)0x0;
      iVar15 = -1;
      uVar9 = 0x11;
      uVar2 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0);
      *(undefined4 *)((int)puVar17 + -0x740) = uVar2;
      if (*(int *)((int)puVar17 + -0x740) != 6) {
        pcVar10 = (code *)0xb0;
        iVar15 = ar4 + 0xb0;
        s_CAnimBody_SetFrame_033e6e(iVar15,uVar9,iVar15,0xb0);
      }
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      uVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar9,iVar15,pcVar10);
      *(undefined4 *)((int)puVar17 + -0x744) = uVar2;
      if (*(int *)((int)puVar17 + -0x744) == 1) {
        pcVar10 = (code *)0x2b8;
        *(undefined4 *)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(ar4 + 0x214) = 1;
        iVar16 = 0;
        *(undefined4 *)(ar4 + 300) = 0;
      }
      break;
    case 5:
      *(undefined4 *)(ar4 + 0x178) = 1;
      *(undefined4 *)(ar4 + 0x214) = 0;
      iVar15 = *(int *)(ar4 + 300);
      if ((iVar15 < 6) && (-1 < iVar15)) {
                    /* WARNING: Could not recover jumptable at 0x8c040962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&PTR_LAB_8c040974)[iVar15])();
        return uVar2;
      }
      break;
    case 6:
      *(undefined4 *)(ar4 + 0x214) = 0;
      *(code **)((int)puVar17 + -0xa74) = pcVar14;
      *(undefined4 *)((int)puVar17 + -0xa78) = *(undefined4 *)(ar5[1] + 4);
      pcVar10 = (code *)((int)puVar17 + -0x30);
      uVar2 = FUN_8c04f034(ar4,*ar5,*(undefined4 *)ar5[1],pcVar10);
      *(undefined4 *)((int)puVar17 + -0x704) = uVar2;
      iVar16 = *(int *)((int)puVar17 + -0x704);
      if (iVar16 != 1) {
        *(undefined4 *)(ar4 + 0x214) = 1;
      }
      break;
    default:
      goto override_jmp_8c03f9a2_case_7;
    case 8:
      pcVar10 = (code *)0x214;
      *(undefined4 *)(ar4 + 0x214) = 0;
      *(undefined4 *)(ar4 + 0x178) = 1;
      if (*(int *)(ar4 + 0x128) < 4) {
        iVar16 = 2;
      }
      else {
        uVar2 = 300;
        iVar15 = *(int *)(ar4 + 300);
        if (iVar15 == 0) {
          uVar2 = FUN_8c055c38(ar4,*(undefined4 *)ar5[1],ar4 + 0x34c,pcVar14);
          *(undefined4 *)((int)puVar17 + -0x748) = uVar2;
          pcVar10 = *(code **)((int)puVar17 + -0x748);
          if (pcVar10 == (code *)0x0) {
            *(int *)((int)puVar17 + -0x95c) = ar4;
            *(int *)(*(int *)((int)puVar17 + -0x95c) + 300) =
                 *(int *)(*(int *)((int)puVar17 + -0x95c) + 300) + 1;
          }
        }
        else if (iVar15 == 1) {
          pcVar10 = FUN_8c057164;
          uVar2 = FUN_8c057164(ar4,*(undefined4 *)ar5[1],300,FUN_8c057164);
          *(undefined4 *)((int)puVar17 + -0x74c) = uVar2;
          if (*(int *)((int)puVar17 + -0x74c) == 0) {
            *(int *)((int)puVar17 + -0x960) = ar4;
            *(int *)(*(int *)((int)puVar17 + -0x960) + 300) =
                 *(int *)(*(int *)((int)puVar17 + -0x960) + 300) + 1;
            *(undefined4 *)(ar4 + 0x290) = 0;
            *(undefined4 *)(ar4 + 0x40) = 5;
            *(undefined4 *)(ar4 + 700) = 1;
          }
        }
        else if (iVar15 == 2) {
          *(undefined4 *)(ar4 + 700) = 1;
          pdVar6 = (double *)ar5[7];
          if (in_FPSCR_SZ == '\0') {
            dVar24 = (double)CONCAT44(*(undefined4 *)pdVar6,uVar9);
            dVar21 = (double)CONCAT44(0x40800000,SUB84(dVar19,0));
          }
          else {
            dVar24 = *pdVar6;
            dVar21 = 5.50074773365276e-311;
          }
          if (in_FPSCR_PR == '\0') {
            dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) /
                                      (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar24,0));
          }
          else {
            dVar24 = dVar24 / dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar17 + -0x50) = (int)((ulonglong)dVar24 >> 0x20);
            *(undefined4 *)((int)puVar17 + -0x48) = 0x44898000;
          }
          else {
            *(double *)((int)puVar17 + -0x50) = dVar24;
            *(undefined8 *)((int)puVar17 + -0x48) = 0xa2844898000;
          }
          puVar5 = (undefined1 *)((int)puVar17 + -0x50);
          (**(code **)(*(int *)ar5[6] + 0x128))((int *)ar5[6],puVar5,300,pdVar6);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar17 + -0x750) = (int)((ulonglong)dVar21 >> 0x20);
            *(undefined4 *)((int)puVar17 + -0x4c) = *(undefined4 *)((int)puVar17 + -0x750);
          }
          else {
            *(double *)((int)puVar17 + -0x750) = dVar21;
            *(undefined8 *)((int)puVar17 + -0x4c) = *(undefined8 *)((int)puVar17 + -0x750);
          }
          uVar23 = 0;
          Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x270),puVar5,uVar2,pdVar6);
          uVar9 = SUB84(dVar21,0);
          pcVar10 = (code *)((int)puVar17 + -0x270);
          Vec3_assign(ar4 + 0x54,pcVar10,pcVar10,pdVar6);
          uVar2 = 0xffffffff;
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x270),0xffffffff,pcVar10,pdVar6);
          if (ar5[2] == 1) {
            dVar24 = (double)(ulonglong)uVar23;
            if (in_FPSCR_SZ == '\0') {
              uVar23 = 0;
              dVar24 = in_xd4;
            }
            pdVar6 = (double *)((int)puVar17 + -0x280);
            pcVar10 = Vec3_ctor_xyz;
            Vec3_ctor_xyz(pdVar6,uVar2,Vec3_ctor_xyz,pdVar6);
            Vec3_assign(ar4 + 0x54,(undefined1 *)((int)puVar17 + -0x280),pcVar10,pdVar6);
            Vec3_dtor((undefined1 *)((int)puVar17 + -0x280),0xffffffff,pcVar10,pdVar6);
            if (in_FPSCR_SZ == '\0') {
              dVar21 = (double)CONCAT44(*(undefined4 *)((int)puVar17 + -0x50),uVar23);
              dVar19 = (double)CONCAT44(0x42a08000,uVar9);
            }
            else {
              dVar21 = *(double *)((int)puVar17 + -0x50);
              dVar19 = 3.715470586832486e+16;
            }
            if (in_FPSCR_PR == '\0') {
              dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) +
                                        (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 + dVar19;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar17 + -0x50) = (int)((ulonglong)dVar21 >> 0x20);
              dVar21 = (double)CONCAT44(0x43608000,*(undefined4 *)((int)puVar17 + -0x48));
            }
            else {
              *(double *)((int)puVar17 + -0x50) = dVar21;
              dVar24 = *(double *)((int)puVar17 + -0x48);
              dVar21 = 4.27850200525372e-311;
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = SUB84(dVar21,0) + (float)((ulonglong)dVar21 >> 0x20);
            }
            else {
              fVar20 = SUB84(dVar21 + dVar21,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)((int)puVar17 + -0x48) = fVar20;
            }
            else {
              *(double *)((int)puVar17 + -0x48) = dVar24;
            }
          }
          Vec3_ctor_copy((undefined1 *)((int)puVar17 + -0x290),ar4 + 0x54,pcVar10,pdVar6);
          pcVar10 = (code *)((int)puVar17 + -0x290);
          uVar2 = FUN_8c04e0e0(ar4,*(undefined4 *)ar5[1],(undefined1 *)((int)puVar17 + -0x50),
                               pcVar10);
          *(undefined4 *)((int)puVar17 + -0x754) = uVar2;
          *(uint *)((int)puVar17 + -0x668) = (uint)(*(int *)((int)puVar17 + -0x754) == 0);
          uVar2 = 0xffffffff;
          pcVar4 = Vec3_dtor;
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x290),0xffffffff,Vec3_dtor,pcVar10);
          if (*(int *)((int)puVar17 + -0x668) != 0) {
            FUN_8c022d04(ar4 + 0x2d4,uVar2,pcVar4,pcVar10);
            FUN_8c022d04(ar4 + 0x2a8,uVar2,pcVar4,0x2a8);
            *(int *)((int)puVar17 + -0x964) = ar4;
            *(int *)(*(int *)((int)puVar17 + -0x964) + 300) =
                 *(int *)(*(int *)((int)puVar17 + -0x964) + 300) + 1;
            pcVar10 = (code *)0x0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
            *(undefined4 *)(ar4 + 0x218) = 0;
          }
          if (*(int *)(ar4 + 0x290) == 1) {
            *(int *)((int)puVar17 + -0x968) = ar4;
            pcVar10 = *(code **)((int)puVar17 + -0x968);
            pcVar10[0x1fc] = (code)(*(byte *)(*(int *)((int)puVar17 + -0x968) + 0x1fc) & 0xfb);
          }
        }
        else if (iVar15 == 3) {
          CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar4 + 0xb0,0x214);
          iVar16 = 0;
        }
        *(undefined4 *)(ar4 + 0x178) = 1;
      }
      break;
    case 9:
      *(int *)((int)puVar17 + -0x96c) = ar4;
      *(undefined4 *)((int)puVar17 + -0xa70) = *(undefined4 *)((int)puVar17 + -0x96c);
      *(byte *)(*(int *)((int)puVar17 + -0x96c) + 0x1fc) =
           *(byte *)(*(int *)((int)puVar17 + -0xa70) + 0x1fc) & 0xfb;
      *(undefined4 *)(ar4 + 0x214) = 0;
      *(undefined4 *)(ar4 + 0x178) = 1;
      if (*(int *)(ar4 + 0x128) < 4) {
        pcVar10 = (code *)0x2;
        iVar16 = 2;
      }
      else {
        uVar2 = 0;
        if (in_FPSCR_SZ != '\0') {
          uVar9 = 0xbf800000;
        }
        uVar7 = 0xffffffff;
        iVar15 = ar5[2] + 0x4c;
        uVar12 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar15,0xffffffff,0);
        *(undefined4 *)((int)puVar17 + -0x758) = uVar12;
        if (*(int *)((int)puVar17 + -0x758) != 6) {
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar15,uVar7,uVar2);
        }
        pcVar10 = get_field_1c_026dd8;
        uVar2 = get_field_1c_026dd8(ar4 + 0xb0,iVar15,uVar7,get_field_1c_026dd8);
        *(undefined4 *)((int)puVar17 + -0x75c) = uVar2;
        if (*(int *)((int)puVar17 + -0x75c) == 0x4c) {
          uVar2 = FUN_8c026db0(ar4,iVar15,FUN_8c026db0,pcVar10);
          uVar7 = SUB84(in_dr14,0);
          *(undefined4 *)((int)puVar17 + -0x760) = uVar2;
          uVar12 = *(undefined4 *)((int)puVar17 + -0x760);
          iVar15 = ar4 + 0xb0;
          uVar2 = uVar12;
          uVar9 = FUN_8c03c0f0(iVar15,uVar12,uVar12,iVar15);
          *(undefined4 *)((int)puVar17 + -0x764) = uVar9;
          uVar2 = deref_u32(*(undefined4 *)((int)puVar17 + -0x764),uVar12,uVar2,iVar15);
          *(undefined4 *)((int)puVar17 + -0x768) = uVar2;
          puVar3 = *(undefined4 **)((int)puVar17 + -0x768);
          uVar2 = puVar3[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar3;
          *(undefined4 *)(ar4 + 0xb8) = uVar2;
          *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
          puVar3 = &DAT_8c1362ac;
          *(undefined4 **)(ar4 + 0xb4) = &DAT_8c1362ac;
          iVar15 = ar4 + 0xb0;
          CAnimBody_GetCurFrame(iVar15,uVar12,iVar15,&DAT_8c1362ac);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar17 + -0x76c) = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            *(double *)((int)puVar17 + -0x76c) = dVar19;
          }
          *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x2a0);
          FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),iVar15,puVar3);
          Vec3_assign((undefined1 *)((int)puVar17 + -0x7c),(undefined1 *)((int)puVar17 + -0x2a0),
                      iVar15,puVar3);
          uVar2 = 0xffffffff;
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x2a0),0xffffffff,iVar15,puVar3);
          FUN_8c022d04(ar4 + 0x2a8,uVar2,iVar15,puVar3);
          *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x2b0);
          pcVar10 = Vec3_sub;
          Vec3_sub((undefined1 *)((int)puVar17 + -0x7c),ar4 + 0x2d4,iVar15,Vec3_sub,
                   *(undefined4 *)((int)puVar17 + -0xa74));
          puVar5 = (undefined1 *)((int)puVar17 + -0x2b0);
          *(code **)((int)puVar17 + -0xa6c) = Vec3_assign;
          (**(code **)((int)puVar17 + -0xa6c))(ar4 + 0x2a8,puVar5,puVar5,pcVar10);
          uVar2 = 0xffffffff;
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x2b0),0xffffffff,puVar5,pcVar10);
          *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x2c0);
          FUN_8c0230f0(ar4 + 0x14,uVar2,puVar5,pcVar10,*(undefined4 *)((int)puVar17 + -0xa74));
          dVar24 = 5.26354424712089e-315;
          if (in_FPSCR_SZ == '\0') {
            dVar24 = in_xd4;
          }
          *(undefined1 **)((int)puVar17 + -0xa68) = (undefined1 *)((int)puVar17 + -0x2d0);
          *(code **)((int)puVar17 + -0xa64) = Vec3_ctor_xyz;
          (**(code **)((int)puVar17 + -0xa64))
                    (*(undefined4 *)((int)puVar17 + -0xa68),uVar2,puVar5,pcVar10);
          FUN_8c022dac((undefined1 *)((int)puVar17 + -0x2c0),(undefined1 *)((int)puVar17 + -0x2d0),
                       puVar5,pcVar10);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar17 + -0x770) = (int)((ulonglong)dVar19 >> 0x20);
            dVar21 = (double)CONCAT44(*(undefined4 *)((int)puVar17 + -0x770),uVar7);
          }
          else {
            *(double *)((int)puVar17 + -0x770) = dVar19;
            dVar21 = *(double *)((int)puVar17 + -0x770);
          }
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x2d0),0xffffffff,puVar5,pcVar10);
          puVar5 = (undefined1 *)((int)puVar17 + -0x2c0);
          Vec3_dtor(puVar5,0xffffffff,0xffffffff,puVar5);
          fVar20 = 0.0;
          pcVar4 = Vec3_ctor_xyz;
          Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x2e0),(undefined1 *)((int)puVar17 + -0x2e0),
                        Vec3_ctor_xyz,puVar5);
          uVar2 = FUN_8c023334(ar4 + 0x14,(undefined1 *)((int)puVar17 + -0x2e0),pcVar4,puVar5);
          *(undefined4 *)((int)puVar17 + -0x774) = uVar2;
          uVar9 = *(undefined4 *)((int)puVar17 + -0x774);
          *(undefined4 *)((int)puVar17 + -0x66c) = uVar9;
          uVar2 = 0xffffffff;
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x2e0),0xffffffff,pcVar4,uVar9);
          fVar26 = (float)((ulonglong)dVar21 >> 0x20);
          if (*(int *)((int)puVar17 + -0x66c) == 3) {
            if (in_FPSCR_PR == '\0') {
              dVar21 = (double)CONCAT44(-fVar26,SUB84(dVar21,0));
            }
            else {
              dVar21 = -dVar21;
            }
            dVar22 = dVar21;
            if (in_FPSCR_SZ == '\0') {
              fVar20 = (float)((ulonglong)dVar21 >> 0x20);
              dVar22 = dVar24;
            }
            dVar24 = dVar22;
            Vec3_set_xyz((undefined1 *)((int)puVar17 + -0x2ec),uVar2,pcVar4,uVar9);
            *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x2fc);
            uVar2 = 0x2a8;
            iVar15 = ar4 + 0x2a8;
            FUN_8c023484(iVar15,(undefined1 *)((int)puVar17 + -0x2ec),iVar15,0x2a8,
                         *(undefined4 *)((int)puVar17 + -0xa74));
            Vec3_assign(ar4 + 0x2a8,(undefined1 *)((int)puVar17 + -0x2fc),iVar15,uVar2);
            Vec3_dtor((undefined1 *)((int)puVar17 + -0x2fc),0xffffffff,iVar15,uVar2);
            pcVar4 = (code *)((int)puVar17 + -0x2ec);
            object_dtor_delete(pcVar4,0xffffffff,pcVar4,0xffffffff);
          }
          else if (*(int *)((int)puVar17 + -0x66c) == 4) {
            fVar20 = 0.0;
            dVar22 = dVar21;
            if (in_FPSCR_SZ == '\0') {
              dVar22 = dVar24;
              fVar20 = fVar26;
            }
            dVar24 = dVar22;
            Vec3_set_xyz((undefined1 *)((int)puVar17 + -0x308),uVar2,pcVar4,uVar9);
            *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x318);
            uVar2 = 0x2a8;
            iVar15 = ar4 + 0x2a8;
            FUN_8c023484(iVar15,(undefined1 *)((int)puVar17 + -0x308),iVar15,0x2a8,
                         *(undefined4 *)((int)puVar17 + -0xa74));
            Vec3_assign(ar4 + 0x2a8,(undefined1 *)((int)puVar17 + -0x318),iVar15,uVar2);
            pcVar4 = (code *)((int)puVar17 + -0x318);
            Vec3_dtor(pcVar4,0xffffffff,pcVar4,uVar2);
            object_dtor_delete((undefined1 *)((int)puVar17 + -0x308),0xffffffff,pcVar4,uVar2);
          }
          puVar8 = (undefined1 *)((int)puVar17 + -0x7c);
          pcVar10 = Vec3_assign;
          Vec3_assign(ar4 + 0x2d4,puVar8,pcVar4,Vec3_assign);
          puVar5 = (undefined1 *)0xb0;
          CAnimBody_GetCurFrame(ar4 + 0xb0,puVar8,0xb0,pcVar10);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar17 + -0x778) = (int)((ulonglong)dVar19 >> 0x20);
            dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                      *(undefined4 *)((int)puVar17 + -0x778));
          }
          else {
            *(double *)((int)puVar17 + -0x778) = dVar19;
          }
          dVar22 = (double)CONCAT44(0x3f800000,fVar20);
          if (in_FPSCR_PR == '\0') {
            bVar27 = SUB84(dVar21,0) < 1.0;
          }
          else {
            bVar27 = dVar21 < dVar22;
          }
          if (bVar27) {
            vec3_clear(ar4 + 0x54,puVar8,puVar5,pcVar10);
            if (in_FPSCR_SZ == '\0') {
              dVar21 = (double)CONCAT44(_DAT_8c2803b0,SUB84(dVar19,0));
            }
            else {
              dVar21 = (double)CONCAT44(uRam8c2803b4,_DAT_8c2803b0);
            }
            pcVar10 = (code *)ar5[1];
            puVar5 = *(undefined1 **)pcVar10;
            if (in_FPSCR_SZ == '\0') {
              dVar19 = (double)CONCAT44(*(undefined4 *)(puVar5 + 8),SUB84(dVar22,0));
            }
            else {
              dVar19 = *(double *)(puVar5 + 8);
            }
            if (in_FPSCR_PR == '\0') {
              dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) -
                                        (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar19;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),0x43608000);
            }
            if (in_FPSCR_PR == '\0') {
              dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - SUB84(dVar21,0),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar21;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),0x43480000);
            }
            if (in_FPSCR_PR == '\0') {
              dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) / SUB84(dVar21,0),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 / dVar21;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(ar4 + 0x5c) = (int)((ulonglong)dVar21 >> 0x20);
              dVar19 = (double)(ulonglong)_DAT_8c2803a8;
            }
            else {
              *(double *)(ar4 + 0x5c) = dVar21;
              dVar24 = (double)CONCAT44(uRam8c2803ac,_DAT_8c2803a8);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = (double)CONCAT44(*(undefined4 *)*(double **)ar5[1],SUB84(dVar19,0));
            }
            else {
              dVar21 = **(double **)ar5[1];
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
            }
            else {
              fVar20 = SUB84(dVar21 - dVar21,0);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = (double)CONCAT44(0x42a08000,fVar20);
            }
            else {
              dVar21 = -8.87015311948797e+250;
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
            }
            else {
              fVar20 = SUB84(dVar21 - dVar21,0);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = (double)CONCAT44(0x43480000,fVar20);
            }
            else {
              dVar21 = 9070973133824.0;
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = SUB84(dVar21,0) / (float)((ulonglong)dVar21 >> 0x20);
            }
            else {
              fVar20 = SUB84(dVar21 / dVar21,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(ar4 + 0x54) = fVar20;
            }
            else {
              *(double *)(ar4 + 0x54) = dVar24;
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = (double)CONCAT44(0x43480000,fVar20);
            }
            else {
              dVar24 = 1.44351483523651e-311;
            }
            if (in_FPSCR_PR == '\0') {
              bVar27 = SUB84(dVar21,0) < (float)((ulonglong)dVar24 >> 0x20);
            }
            else {
              bVar27 = dVar21 < dVar24;
            }
            if (bVar27) {
              puVar8 = (undefined1 *)(ar4 + 0x54);
              puVar5 = puVar8;
              FUN_8c023aa0(ar4 + 0x2a8,puVar8,puVar8,pcVar10);
            }
          }
          uVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,puVar8,puVar5,pcVar10);
          *(undefined4 *)((int)puVar17 + -0x77c) = uVar2;
          if (*(int *)((int)puVar17 + -0x77c) == 1) {
            *(undefined4 *)(ar4 + 0x214) = 1;
            FUN_8c022d04(ar4 + 0x2a8,puVar8,puVar5,1);
            *(undefined4 *)(ar4 + 300) = 0;
            *(int *)((int)puVar17 + -0x970) = ar4;
            *(byte *)(*(int *)((int)puVar17 + -0x970) + 0x1fc) =
                 *(byte *)(*(int *)((int)puVar17 + -0x970) + 0x1fc) & 0xfb | 4;
            pcVar10 = (code *)0x0;
            iVar16 = 0;
            *(undefined4 *)(ar4 + 0x178) = 0;
          }
        }
        else {
          CAnimBody_GetCurFrame(ar4 + 0xb0,iVar15,uVar7,pcVar10);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar17 + -0x780) = (int)((ulonglong)dVar19 >> 0x20);
            in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                       *(undefined4 *)((int)puVar17 + -0x780));
          }
          else {
            *(double *)((int)puVar17 + -0x780) = dVar19;
          }
          iVar11 = *(int *)(ar4 + 800);
          fVar20 = SUB84(in_dr14,0);
          if (iVar11 == 0) {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = (double)CONCAT44(0x43928000,uVar9);
            }
            else {
              dVar24 = 1.2313176683819e-311;
            }
            if (in_FPSCR_PR == '\0') {
              bVar27 = fVar20 < (float)((ulonglong)dVar24 >> 0x20);
            }
            else {
              bVar27 = in_dr14 < dVar24;
            }
            if (!bVar27) {
              iVar15 = 0x14;
              FUN_8c033474(ar4,0x14,*(undefined4 *)ar5[1],*(undefined4 *)(ar4 + 0x244));
              *(int *)((int)puVar17 + -0x974) = ar4;
              *(int *)(*(int *)((int)puVar17 + -0x974) + 800) =
                   *(int *)(*(int *)((int)puVar17 + -0x974) + 800) + 1;
            }
          }
          else if (iVar11 == 1) {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = (double)CONCAT44(0x43b18000,SUB84(dVar19,0));
            }
            else {
              dVar24 = 1.23131867213357e-311;
            }
            if (in_FPSCR_PR == '\0') {
              bVar27 = fVar20 < (float)((ulonglong)dVar24 >> 0x20);
            }
            else {
              bVar27 = in_dr14 < dVar24;
            }
            if (!bVar27) {
              iVar15 = 0x16;
              FUN_8c033474(ar4,0x16,*(undefined4 *)ar5[1],*(undefined4 *)(ar4 + 0x244));
              *(int *)((int)puVar17 + -0x978) = ar4;
              *(int *)(*(int *)((int)puVar17 + -0x978) + 800) =
                   *(int *)(*(int *)((int)puVar17 + -0x978) + 800) + 1;
            }
          }
          else if (iVar11 == 2) {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = (double)CONCAT44(0x43eb0000,SUB84(dVar19,0));
            }
            else {
              dVar24 = 1.23132053393102e-311;
            }
            if (in_FPSCR_PR == '\0') {
              bVar27 = fVar20 < (float)((ulonglong)dVar24 >> 0x20);
            }
            else {
              bVar27 = in_dr14 < dVar24;
            }
            if (!bVar27) {
              iVar15 = 0x18;
              FUN_8c033474(ar4,0x18,*(undefined4 *)ar5[1],*(undefined4 *)(ar4 + 0x244));
              *(int *)((int)puVar17 + -0x97c) = ar4;
              *(int *)(*(int *)((int)puVar17 + -0x97c) + 800) =
                   *(int *)(*(int *)((int)puVar17 + -0x97c) + 800) + 1;
            }
          }
          pcVar10 = (code *)(ar4 + 0xb0);
          uVar2 = s_CAnimBody_AdvanceFrame_033ba0(pcVar10,iVar15,0xb0,pcVar10);
          *(undefined4 *)((int)puVar17 + -0x784) = uVar2;
          if (*(int *)((int)puVar17 + -0x784) == 1) {
            *(undefined4 *)(ar4 + 0x214) = 1;
            iVar16 = 0;
            *(undefined4 *)(ar4 + 0x178) = 0;
            FUN_8c030eb8(ar4 + 0x1fc,0x178,0x1fc,pcVar10);
            *(undefined4 *)(ar4 + 800) = 0;
          }
        }
        *(undefined4 *)(ar4 + 0x178) = 1;
      }
      break;
    case 0xb:
      if (pcVar14 == (code *)0x1) {
        pcVar10 = (code *)FUN_8c0526a0(ar4,*(undefined4 *)ar5[1],1,pcVar10);
        *(code **)((int)puVar17 + -0x6ac) = pcVar10;
        iVar16 = *(int *)((int)puVar17 + -0x6ac);
      }
      else if ((pcVar14 == (code *)0x0) || (pcVar14 == (code *)0x2)) {
        FUN_8c031c74(ar4,(undefined1 *)((int)puVar17 + -0x30),*(undefined4 *)ar5[1],pcVar10);
        pcVar10 = (code *)FUN_8c0526a0(ar4,*(undefined4 *)ar5[1],pcVar14,pcVar10);
        *(code **)((int)puVar17 + -0x6b0) = pcVar10;
        iVar16 = *(int *)((int)puVar17 + -0x6b0);
      }
      else {
        iVar16 = 0;
      }
      break;
    case 0xc:
      if (pcVar14 == (code *)0x1) {
        *(undefined4 *)((int)puVar17 + -0xa74) = 0xffffffff;
        pcVar10 = *(code **)ar5[1];
        uVar2 = FUN_8c053f24(ar4,*ar5,1,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x6b4) = uVar2;
        iVar16 = *(int *)((int)puVar17 + -0x6b4);
      }
      else {
        *(undefined4 *)((int)puVar17 + -0xa74) = 0xffffffff;
        pcVar10 = *(code **)ar5[1];
        uVar2 = FUN_8c053730(ar4,*ar5,pcVar14,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x6b8) = uVar2;
        iVar16 = *(int *)((int)puVar17 + -0x6b8);
      }
      break;
    case 0x10:
      if (pcVar14 == (code *)0x1) {
        *(int *)((int)puVar17 + -0xa74) = ar5[6];
        pcVar10 = (code *)ar5[7];
        uVar2 = FUN_8c04eb14(ar4,*(undefined4 *)ar5[1],1,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x7a4) = uVar2;
        iVar16 = *(int *)((int)puVar17 + -0x7a4);
      }
      else {
        *(int *)((int)puVar17 + -0xa74) = ar5[6];
        pcVar10 = (code *)ar5[7];
        uVar2 = FUN_8c04e7e0(ar4,*(undefined4 *)ar5[1],pcVar14,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x7a0) = uVar2;
        iVar16 = *(int *)((int)puVar17 + -0x7a0);
      }
      break;
    case 0x11:
      if (pcVar14 == (code *)0x1) {
        *(undefined4 *)(ar4 + 700) = 1;
        Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x118),ar5_00,0x2e8,pcVar10);
        *(int *)((int)puVar17 + -0xa74) = ar5[6];
        pcVar10 = (code *)ar5[3];
        puVar5 = (undefined1 *)((int)puVar17 + -0x118);
        uVar2 = *(undefined4 *)ar5[1];
        *(code **)((int)puVar17 + -0xa6c) = FUN_8c055750;
        uVar2 = (**(code **)((int)puVar17 + -0xa6c))(ar4,uVar2,puVar5,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x6a4) = uVar2;
        iVar16 = *(int *)((int)puVar17 + -0x6a4);
        Vec3_dtor((undefined1 *)((int)puVar17 + -0x118),0xffffffff,puVar5,pcVar10);
      }
      else {
        *(code **)((int)puVar17 + -0xa68) = Vec3_ctor_xyz;
        (**(code **)((int)puVar17 + -0xa68))
                  ((undefined1 *)((int)puVar17 + -0x128),ar5_00,0x2e8,pcVar10);
        *(int *)((int)puVar17 + -0xa64) = ar5[6];
        *(undefined4 *)((int)puVar17 + -0xa74) = *(undefined4 *)((int)puVar17 + -0xa64);
        pcVar10 = (code *)ar5[3];
        uVar2 = FUN_8c055490(ar4,*(undefined4 *)ar5[1],(undefined1 *)((int)puVar17 + -0x128),pcVar10
                            );
        *(undefined4 *)((int)puVar17 + -0x6a8) = uVar2;
        iVar16 = *(int *)((int)puVar17 + -0x6a8);
        Vec3_dtor((undefined1 *)((int)puVar17 + -0x128),0xffffffff,
                  (undefined1 *)((int)puVar17 + -0x128),pcVar10);
      }
      break;
    case 0x12:
      *(undefined4 *)(ar4 + 700) = 1;
      while (iVar15 = *(int *)(ar4 + 0x134), iVar15 == 0) {
        if (ar5[0xb] == 1) {
          *(undefined4 *)((int)puVar17 + -0x64c) = 0;
          uVar2 = 0xffffffff;
          pcVar10 = Vec3_dtor;
          Vec3_dtor((undefined1 *)((int)puVar17 + -0xa8),0xffffffff,Vec3_dtor,0xffffffff);
          free_if_nonnull_wrap_102790((undefined1 *)((int)puVar17 + -0x98),0xffffffff,pcVar10,uVar2)
          ;
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x8c),0xffffffff,pcVar10,uVar2);
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x7c),0xffffffff,pcVar10,uVar2);
          free_if_nonnull_wrap_102790((undefined1 *)((int)puVar17 + -0x6c),0xffffffff,pcVar10,uVar2)
          ;
          uVar2 = 0xffffffff;
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x60),0xffffffff,pcVar10,0xffffffff);
          pcVar10 = Vec3_dtor;
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x50),0xffffffff,Vec3_dtor,uVar2);
          puVar5 = (undefined1 *)((int)puVar17 + -0x40);
          Vec3_dtor(puVar5,0xffffffff,pcVar10,puVar5);
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x30),0xffffffff,pcVar10,puVar5);
          return *(undefined4 *)((int)puVar17 + -0x64c);
        }
        uVar2 = get_field_24_026024(ar5[6],0x134,pdVar6,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x6d4) = uVar2;
        if (*(int *)((int)puVar17 + -0x6d4) == 0) {
          *(undefined4 *)(ar4 + 700) = 1;
          pcVar10 = *(code **)(ar4 + 0x21c);
          if (pcVar10 == (code *)0x0) {
            pdVar6 = (double *)(ar5[7] + 8);
            if (in_FPSCR_SZ == '\0') {
              dVar21 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)(ar4 + 0x48));
            }
            else {
              dVar21 = *pdVar6;
              in_xd4 = *(double *)(ar4 + 0x48);
            }
            if (in_FPSCR_PR == '\0') {
              dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - SUB84(dVar21,0),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar21;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar17 + -0x28) = (int)((ulonglong)dVar21 >> 0x20);
            }
            else {
              *(double *)((int)puVar17 + -0x28) = dVar21;
            }
            Vec3_assign(ar4 + 0x248,(undefined1 *)((int)puVar17 + -0x30),pdVar6,0);
            *(undefined4 *)(ar4 + 0x40) = 5;
            piVar1 = (int *)ar5[6];
            uVar2 = (**(code **)(*piVar1 + 0x130))(piVar1,ar4 + 0x248,pdVar6,pcVar10);
            *(undefined4 *)((int)puVar17 + -0x6d8) = uVar2;
            iVar15 = *(int *)((int)puVar17 + -0x6d8);
            if (iVar15 == 0) {
              *(int *)((int)puVar17 + -0x918) = ar4;
              *(int *)(*(int *)((int)puVar17 + -0x918) + 0x134) =
                   *(int *)(*(int *)((int)puVar17 + -0x918) + 0x134) + 1;
              *(undefined **)((int)puVar17 + -0xa74) = &DAT_8c125d58;
              pcVar10 = (code *)ar5[6];
              if (in_FPSCR_SZ == '\0') {
                dVar21 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),0x3f99999a);
              }
              else {
                dVar21 = *(double *)(ar4 + 0x48);
                in_xd4 = 1.23977272525323e-311;
              }
              if (in_FPSCR_PR == '\0') {
                uVar2 = SUB84(dVar21,0);
              }
              else {
                uVar2 = SUB84(dVar21 * dVar21,0);
              }
              *(int *)((int)puVar17 + -0xa6c) = ar5[3];
              pdVar6 = *(double **)((int)puVar17 + -0xa6c);
              FUN_8c032788(ar4,ar4 + 0x248,pdVar6,pcVar10);
              if (in_FPSCR_SZ == '\0') {
                dVar21 = (double)CONCAT44(0x43340000,uVar2);
                *(undefined4 *)(ar4 + 0x24c) = 0x43340000;
              }
              else {
                dVar21 = 4.591918305585602e-232;
                *(undefined8 *)(ar4 + 0x24c) = 0xfe6d01b43340000;
              }
            }
            else if (iVar15 == 1) {
              *(int *)((int)puVar17 + -0x91c) = ar4;
              *(undefined4 *)((int)puVar17 + -0xa68) = 0x134;
              *(undefined4 *)((int)puVar17 + -0xa64) = *(undefined4 *)((int)puVar17 + -0x91c);
              *(int *)(*(int *)((int)puVar17 + -0xa68) + *(int *)((int)puVar17 + -0x91c)) =
                   *(int *)(*(int *)((int)puVar17 + -0xa64) + 0x134) + 2;
              iVar15 = *(int *)ar5[6];
              pcVar10 = *(code **)(iVar15 + 0x128);
              (*pcVar10)((int *)ar5[6],ar4 + 0x248,iVar15,pcVar10);
              uVar2 = SUB84(dVar21,0);
              if (in_FPSCR_SZ == '\0') {
                *(int *)((int)puVar17 + -0x6dc) = (int)((ulonglong)dVar19 >> 0x20);
              }
              else {
                *(double *)((int)puVar17 + -0x6dc) = dVar19;
              }
              puVar3 = (undefined4 *)ar5[6];
              pdVar6 = (double *)*puVar3;
              (**(code **)((int)pdVar6 + 0x184))(puVar3,puVar3,pdVar6,pcVar10);
              uVar9 = (undefined4)((ulonglong)dVar19 >> 0x20);
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)((int)puVar17 + -0x6e0) = uVar9;
                dVar19 = (double)CONCAT44(uVar9,*(undefined4 *)((int)puVar17 + -0x6dc));
                dVar21 = (double)CONCAT44(*(undefined4 *)((int)puVar17 + -0x6e0),uVar2);
              }
              else {
                *(double *)((int)puVar17 + -0x6e0) = dVar19;
                in_xd0 = *(undefined8 *)((int)puVar17 + -0x6dc);
                dVar21 = *(double *)((int)puVar17 + -0x6e0);
              }
              if (in_FPSCR_PR == '\0') {
                dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                          SUB84(dVar19,0) + (float)((ulonglong)dVar21 >> 0x20));
              }
              else {
                dVar19 = dVar19 + dVar21;
              }
              if (in_FPSCR_SZ == '\0') {
                dVar21 = (double)CONCAT44(0x3f000000,SUB84(dVar21,0));
              }
              else {
                dVar21 = 2.8254433577314434e+192;
              }
              if (in_FPSCR_PR == '\0') {
                dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                          SUB84(dVar19,0) * (float)((ulonglong)dVar21 >> 0x20));
              }
              else {
                dVar19 = dVar19 * dVar21;
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)(ar4 + 0x24c) = SUB84(dVar19,0);
              }
              else {
                *(undefined8 *)(ar4 + 0x24c) = in_xd0;
              }
            }
            else if (iVar15 == 2) {
              puVar13 = (undefined8 *)(ar4 + 0x248);
              if (in_FPSCR_SZ == '\0') {
                dVar19 = (double)CONCAT44(0x44c80000,SUB84(dVar21,0));
                dVar21 = (double)CONCAT44(0x44c80000,*(undefined4 *)puVar13);
              }
              else {
                in_xd0 = *puVar13;
                dVar19 = -7.444220866666504e-251;
                dVar21 = dVar19;
              }
              if (in_FPSCR_PR == '\0') {
                uVar2 = SUB84(dVar19,0);
              }
              else {
                uVar2 = SUB84(dVar19 - dVar21,0);
              }
              pcVar10 = FUN_8c010e38;
              FUN_8c010e38(piVar1,FUN_8c010e38,pdVar6,puVar13);
              if (in_FPSCR_SZ == '\0') {
                *(int *)((int)puVar17 + -0x6e4) = (int)((ulonglong)dVar21 >> 0x20);
                dVar19 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x248),uVar2);
                dVar21 = (double)CONCAT44(0x44898000,SUB84(dVar21,0));
              }
              else {
                *(double *)((int)puVar17 + -0x6e4) = dVar21;
                dVar19 = *(double *)(ar4 + 0x248);
                dVar21 = 1.91885230228893e-311;
              }
              if (in_FPSCR_PR == '\0') {
                uVar2 = SUB84(dVar19,0);
              }
              else {
                uVar2 = SUB84(dVar19 - dVar21,0);
              }
              FUN_8c010e38(piVar1,pcVar10,pdVar6,puVar13);
              if (in_FPSCR_SZ == '\0') {
                *(int *)((int)puVar17 + -0x6e8) = (int)((ulonglong)dVar21 >> 0x20);
                dVar22 = (double)CONCAT44(*(undefined4 *)((int)puVar17 + -0x6e4),uVar2);
                dVar19 = (double)CONCAT44(*(undefined4 *)((int)puVar17 + -0x6e8),SUB84(dVar21,0));
              }
              else {
                *(double *)((int)puVar17 + -0x6e8) = dVar21;
                dVar22 = *(double *)((int)puVar17 + -0x6e4);
                dVar19 = *(double *)((int)puVar17 + -0x6e8);
              }
              if (in_FPSCR_PR == '\0') {
                bVar27 = (float)((ulonglong)dVar22 >> 0x20) < (float)((ulonglong)dVar19 >> 0x20);
              }
              else {
                bVar27 = dVar22 < dVar19;
              }
              uVar2 = SUB84(dVar22,0);
              if (bVar27) {
                if (in_FPSCR_SZ == '\0') {
                  uVar2 = 0x44c80000;
                  *(undefined4 *)(ar4 + 0x248) = 0x44c80000;
                }
                else {
                  in_xd4 = -7.444220866666504e-251;
                  *(undefined8 *)(ar4 + 0x248) = 0x8c010e3844c80000;
                }
                *(int *)((int)puVar17 + -0x920) = ar4;
                iVar11 = *(int *)((int)puVar17 + -0x920);
                *(int *)(*(int *)((int)puVar17 + -0x920) + 0x134) = *(int *)(iVar11 + 0x134) + 2;
                iVar15 = ar4 + 0x248;
                (**(code **)(*(int *)ar5[6] + 0x128))((int *)ar5[6],iVar15,0x134,iVar11);
                if (in_FPSCR_SZ == '\0') {
                  *(int *)((int)puVar17 + -0x6ec) = (int)((ulonglong)dVar19 >> 0x20);
                }
                else {
                  *(double *)((int)puVar17 + -0x6ec) = dVar19;
                }
                pcVar10 = *(code **)ar5[6];
                pdVar6 = *(double **)(pcVar10 + 0x184);
                (*(code *)pdVar6)((undefined4 *)ar5[6],iVar15,pdVar6,pcVar10);
                if (in_FPSCR_SZ == '\0') {
                  *(int *)((int)puVar17 + -0x6f0) = (int)((ulonglong)dVar19 >> 0x20);
                  in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                             *(undefined4 *)((int)puVar17 + -0x6ec));
                  dVar21 = (double)CONCAT44(*(undefined4 *)((int)puVar17 + -0x6f0),uVar2);
                }
                else {
                  *(double *)((int)puVar17 + -0x6f0) = dVar19;
                  in_xd14 = *(undefined8 *)((int)puVar17 + -0x6ec);
                  dVar21 = *(double *)((int)puVar17 + -0x6f0);
                }
                if (in_FPSCR_PR == '\0') {
                  dVar22 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                            SUB84(in_dr14,0) + (float)((ulonglong)dVar21 >> 0x20));
                }
                else {
                  dVar22 = in_dr14 + dVar21;
                }
                if (in_FPSCR_SZ == '\0') {
                  dVar21 = (double)CONCAT44(0x3f000000,SUB84(dVar21,0));
                }
                else {
                  dVar21 = 1.2139784006322344e+202;
                }
                if (in_FPSCR_PR == '\0') {
                  in_dr14 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                             SUB84(dVar22,0) * (float)((ulonglong)dVar21 >> 0x20));
                }
                else {
                  in_dr14 = dVar22 * dVar21;
                }
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(ar4 + 0x24c) = SUB84(in_dr14,0);
                }
                else {
                  *(undefined8 *)(ar4 + 0x24c) = in_xd14;
                }
              }
              else {
                if (in_FPSCR_SZ == '\0') {
                  dVar19 = (double)CONCAT44(0x44898000,SUB84(dVar19,0));
                  *(undefined4 *)(ar4 + 0x248) = 0x44898000;
                }
                else {
                  dVar19 = 7.05070709856793e-312;
                  *(undefined8 *)(ar4 + 0x248) = 0x14c44898000;
                }
                *(int *)((int)puVar17 + -0x924) = ar4;
                *(int *)(*(int *)((int)puVar17 + -0x924) + 0x134) =
                     *(int *)(*(int *)((int)puVar17 + -0x924) + 0x134) + 1;
                *(undefined **)((int)puVar17 + -0xa74) = &DAT_8c125d58;
                pcVar10 = (code *)ar5[6];
                if (in_FPSCR_SZ == '\0') {
                  dVar21 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),uVar2);
                  dVar24 = (double)CONCAT44(0x3f99999a,SUB84(dVar24,0));
                }
                else {
                  dVar21 = *(double *)(ar4 + 0x48);
                  dVar24 = -8.36031591445238e-251;
                }
                if (in_FPSCR_PR == '\0') {
                  uVar2 = SUB84(dVar21,0);
                }
                else {
                  uVar2 = SUB84(dVar21 * dVar24,0);
                }
                pdVar6 = (double *)ar5[3];
                FUN_8c032788(ar4,ar4 + 0x248,pdVar6,pcVar10);
                if (in_FPSCR_SZ == '\0') {
                  dVar21 = (double)CONCAT44(0x43340000,uVar2);
                  *(undefined4 *)(ar4 + 0x24c) = 0x43340000;
                }
                else {
                  dVar21 = -1.960381177040932e+159;
                  *(undefined8 *)(ar4 + 0x24c) = 0xe101d91f43340000;
                }
              }
            }
            goto LAB_8c040722;
          }
          *(undefined4 *)(ar4 + 0x134) = 3;
        }
        else {
          *(undefined4 *)(ar4 + 700) = 1;
          iVar15 = ar5[7];
          pdVar6 = (double *)(iVar15 + 8);
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)pdVar6);
            dVar24 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),SUB84(dVar24,0));
            dVar19 = (double)CONCAT44(0x40800000,SUB84(dVar19,0));
          }
          else {
            in_xd4 = *pdVar6;
            dVar24 = *(double *)(ar4 + 0x48);
            dVar19 = 5.58562756529137e-311;
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = (float)((ulonglong)dVar24 >> 0x20) * (float)((ulonglong)dVar19 >> 0x20);
            dVar24 = (double)CONCAT44(fVar20,SUB84(dVar24,0));
            dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) - fVar20);
          }
          else {
            dVar24 = dVar24 * dVar19;
            dVar21 = dVar21 - dVar24;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar17 + -0x28) = SUB84(dVar21,0);
          }
          else {
            *(double *)((int)puVar17 + -0x28) = in_xd4;
          }
          (**(code **)(*(int *)ar5[6] + 0x128))
                    ((int *)ar5[6],(undefined1 *)((int)puVar17 + -0x30),pdVar6,iVar15);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar17 + -0x6f4) = (int)((ulonglong)dVar19 >> 0x20);
            dVar19 = (double)CONCAT44(*(undefined4 *)((int)puVar17 + -0x6f4),SUB84(dVar19,0));
            *(undefined4 *)((int)puVar17 + -0x2c) = *(undefined4 *)((int)puVar17 + -0x6f4);
          }
          else {
            *(double *)((int)puVar17 + -0x6f4) = dVar19;
            dVar19 = *(double *)((int)puVar17 + -0x6f4);
            *(double *)((int)puVar17 + -0x2c) = dVar19;
          }
          pcVar10 = (code *)(ar4 + 0x248);
          Vec3_assign(pcVar10,(undefined1 *)((int)puVar17 + -0x30),Vec3_assign,pcVar10);
          *(int *)((int)puVar17 + -0x928) = ar4;
          pdVar6 = (double *)(*(int *)(*(int *)((int)puVar17 + -0x928) + 0x134) + 1);
          *(double **)(*(int *)((int)puVar17 + -0x928) + 0x134) = pdVar6;
LAB_8c040722:
          *(undefined4 *)(ar4 + 0x40) = 5;
        }
      }
      if (iVar15 == 1) {
        pcVar10 = pcVar14;
        uVar2 = FUN_8c054b74(ar4,*(undefined4 *)ar5[1],ar4 + 0x248,pcVar14);
        *(undefined4 *)((int)puVar17 + -0x6f8) = uVar2;
        if (*(int *)((int)puVar17 + -0x6f8) == 0) {
          *(int *)((int)puVar17 + -0x92c) = ar4;
          pcVar10 = *(code **)((int)puVar17 + -0x92c);
          *(int *)(pcVar10 + 0x134) = *(int *)(*(int *)((int)puVar17 + -0x92c) + 0x134) + 2;
        }
      }
      else if (iVar15 == 2) {
        pcVar10 = pcVar14;
        uVar2 = FUN_8c054d6c(ar4,*(undefined4 *)ar5[1],ar4 + 0x248,pcVar14);
        *(undefined4 *)((int)puVar17 + -0x6fc) = uVar2;
        if (*(int *)((int)puVar17 + -0x6fc) == 0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2c) = (ulonglong)in_dr14 & 0xffffffff;
          }
          *(int *)((int)puVar17 + -0x930) = ar4;
          pcVar10 = *(code **)((int)puVar17 + -0x930);
          *(int *)(pcVar10 + 0x134) = *(int *)(*(int *)((int)puVar17 + -0x930) + 0x134) + 1;
          *(undefined4 *)(ar4 + 0x28c) = 0;
        }
      }
      else if (iVar15 == 3) {
        *(undefined4 *)(ar4 + 700) = 1;
        uVar2 = FUN_8c0526a0(ar4,*(undefined4 *)ar5[1],pcVar14,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x700) = uVar2;
        if (*(int *)((int)puVar17 + -0x700) == 0) {
          *(undefined4 *)(ar4 + 700) = 0;
          *(undefined4 *)(ar4 + 0x134) = 0;
          *(undefined4 *)(ar4 + 700) = 0;
          *(undefined4 *)(ar4 + 0x134) = 0;
          iVar16 = 0;
        }
      }
      break;
    case 0x13:
      pcVar10 = (code *)0x214;
      *(undefined4 *)(ar4 + 0x214) = 0;
      if (*(int *)(ar4 + 0x128) < 4) {
        iVar16 = 2;
      }
      else {
        uVar2 = FUN_8c054a14(ar4,*(undefined4 *)ar5[1],FUN_8c054a14,0x214);
        *(undefined4 *)((int)puVar17 + -0x6bc) = uVar2;
        if (*(int *)((int)puVar17 + -0x6bc) == 0) {
          *(undefined4 *)(ar4 + 0x214) = 1;
          iVar16 = 0;
        }
      }
      break;
    case 0x14:
      *(undefined4 *)(ar4 + 0x214) = 0;
      if (pcVar14 != (code *)0x1) {
        FUN_8c031c74(ar4,(undefined1 *)((int)puVar17 + -0x30),*(undefined4 *)ar5[1],pcVar10);
      }
      uVar2 = FUN_8c057280(ar4,*(undefined4 *)ar5[1],pcVar14,pcVar10);
      *(undefined4 *)((int)puVar17 + -0x828) = uVar2;
      if (*(int *)((int)puVar17 + -0x828) == 0) {
        iVar16 = 0;
        pcVar10 = (code *)0x214;
        *(undefined4 *)(ar4 + 0x214) = 1;
      }
      break;
    case 0x15:
      if (pcVar14 == (code *)0x1) {
        if (*(int *)(ar4 + 300) == 0) {
          pcVar10 = *(code **)ar5[1];
          FUN_8c057164(ar4,pcVar10,FUN_8c057164,pcVar10);
          if (*(int *)(ar4 + 0x2b8) == 3) {
            *(int *)((int)puVar17 + -0x984) = ar4;
            *(undefined4 *)((int)puVar17 + -0xa6c) = *(undefined4 *)((int)puVar17 + -0x984);
            *(int *)(*(int *)((int)puVar17 + -0xa6c) + 300) =
                 *(int *)(*(int *)((int)puVar17 + -0x984) + 300) + 1;
          }
          else {
            *(undefined4 *)((int)puVar17 + -0xa68) = *(undefined4 *)(ar4 + 0x2b8);
            if (*(int *)((int)puVar17 + -0xa68) == 2) {
              *(int *)((int)puVar17 + -0x988) = ar4;
              *(undefined4 *)((int)puVar17 + -0xa64) = *(undefined4 *)((int)puVar17 + -0x988);
              *(int *)(*(int *)((int)puVar17 + -0xa64) + 300) =
                   *(int *)(*(int *)((int)puVar17 + -0x988) + 300) + 1;
              *(undefined4 *)(ar4 + 0x2b8) = 3;
              uVar2 = 0xffffffff;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0);
              pcVar10 = (code *)0xb0;
              s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,uVar2,0xb0);
            }
          }
        }
        else if (*(int *)(ar4 + 300) == 1) {
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),0x40400000);
          }
          FUN_8c032ab0(ar4,ar5_00,0x2e8,pcVar10);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar17 + -0x798) = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            *(double *)((int)puVar17 + -0x798) = dVar19;
          }
          uVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,pdVar6,pcVar10);
          *(undefined4 *)((int)puVar17 + -0x79c) = uVar2;
          if (*(int *)((int)puVar17 + -0x79c) == 1) {
            uVar12 = 0;
            uVar9 = 0xffffffff;
            uVar2 = 0x1d;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0);
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,uVar12);
            *(int *)((int)puVar17 + -0x98c) = ar4;
            *(int *)(*(int *)((int)puVar17 + -0x98c) + 300) =
                 *(int *)(*(int *)((int)puVar17 + -0x98c) + 300) + 1;
            *(undefined4 *)(ar4 + 0x2b8) = 2;
            pcVar10 = (code *)0x0;
            iVar16 = 0;
          }
        }
      }
      else if (*(int *)(ar4 + 300) == 0) {
        uVar2 = *(undefined4 *)ar5[1];
        puVar5 = (undefined1 *)((int)puVar17 + -0x30);
        FUN_8c031c74(ar4,puVar5,uVar2,pcVar10);
        uVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,puVar5,uVar2,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x790) = uVar2;
        if (*(int *)((int)puVar17 + -0x790) == 1) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0;
          }
          else {
            *(undefined8 *)(ar4 + 0x2c) = in_xd14;
          }
          *(int *)((int)puVar17 + -0x980) = ar4;
          pcVar10 = *(code **)((int)puVar17 + -0x980);
          *(int *)(pcVar10 + 300) = *(int *)(*(int *)((int)puVar17 + -0x980) + 300) + 1;
        }
      }
      else if (*(int *)(ar4 + 300) == 1) {
        FUN_8c031748(ar4,ar5_00,0x2e8,pcVar10);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0xa0) = 0;
        }
        else {
          *(undefined8 *)(ar4 + 0xa0) = in_xd0;
        }
        FUN_8c05ae54(ar4,ar5_00,pdVar6,pcVar10);
        uVar2 = *(undefined4 *)ar5[1];
        FUN_8c031c74(ar4,(undefined1 *)((int)puVar17 + -0x30),uVar2,pcVar10);
        uVar2 = FUN_8c031de8(ar4,0x10,uVar2,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x794) = uVar2;
        if (*(int *)((int)puVar17 + -0x794) == 0) {
          iVar16 = 0;
          *(undefined4 *)(ar4 + 300) = 0;
        }
      }
      break;
    case 0x16:
      if (pcVar14 != (code *)0x1) {
        pdVar6 = *(double **)ar5[1];
        ar5_00 = (undefined *)((int)puVar17 + -0x30);
        FUN_8c031c74(ar4,ar5_00,pdVar6,pcVar10);
      }
LAB_8c04475a:
      uVar9 = SUB84(dVar24,0);
      uVar2 = SUB84(dVar21,0);
      iVar15 = *(int *)(ar4 + 300);
      if ((0xd < iVar15) || (iVar15 < 0)) goto switchD_8c04477e_caseD_6;
      switch((&switchD_8c04477e::switchdataD_8c044790)[iVar15]) {
      case (undefined *)0x8c0447c8:
        if (pcVar14 == (code *)0x1) {
          *(int *)((int)puVar17 + -0x9ec) = ar4;
          pdVar6 = (double *)0x12c;
          pcVar10 = *(code **)((int)puVar17 + -0x9ec);
          *(int *)(*(int *)((int)puVar17 + -0x9ec) + 300) = *(int *)(pcVar10 + 300) + 1;
        }
        else {
          *(undefined4 *)(ar4 + 300) = 10;
        }
        *(undefined4 *)(ar4 + 0x280) = 0;
        goto LAB_8c04475a;
      case (undefined *)0x8c044814:
        uVar2 = FUN_8c057164(ar4,*(undefined4 *)ar5[1],pdVar6,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x854) = uVar2;
        if (*(int *)((int)puVar17 + -0x854) == 0) {
          if (*(int *)(ar4 + 0x328) == 0) {
            *(undefined4 *)(ar4 + 300) = 0;
            iVar16 = 0;
          }
          else {
            *(int *)((int)puVar17 + -0x9f0) = ar4;
            *(undefined4 *)((int)puVar17 + -0xa70) = *(undefined4 *)((int)puVar17 + -0x9f0);
            pcVar10 = *(code **)((int)puVar17 + -0x9f0);
            *(int *)(*(int *)((int)puVar17 + -0xa70) + 300) = *(int *)(pcVar10 + 300) + 1;
          }
        }
        goto switchD_8c04477e_caseD_6;
      case (undefined *)0x8c044888:
        *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x4c0);
        FUN_8c0230f0(ar4 + 0x14,(undefined1 *)((int)puVar17 + -0x4c0),pdVar6,pcVar10,
                     *(undefined4 *)((int)puVar17 + -0xa74));
        if (in_FPSCR_SZ == '\0') {
          uVar2 = uVar9;
        }
        dVar24 = 0.0;
        puVar5 = (undefined1 *)((int)puVar17 + -0x4d0);
        Vec3_ctor_xyz(puVar5,puVar5,pdVar6,pcVar10);
        *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x4e0);
        pcVar10 = FUN_8c0230f0;
        FUN_8c0230f0((undefined1 *)((int)puVar17 + -0x4d0),puVar5,pdVar6,FUN_8c0230f0,
                     *(undefined4 *)((int)puVar17 + -0xa74));
        puVar5 = (undefined1 *)((int)puVar17 + -0x4c0);
        FUN_8c022dac(puVar5,(undefined1 *)((int)puVar17 + -0x4e0),puVar5,pcVar10);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar17 + -0x858) = (int)((ulonglong)dVar19 >> 0x20);
          dVar21 = (double)CONCAT44(*(undefined4 *)((int)puVar17 + -0x858),uVar2);
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),0x40a00000);
        }
        else {
          *(double *)((int)puVar17 + -0x858) = dVar19;
          dVar21 = *(double *)((int)puVar17 + -0x858);
        }
        if (in_FPSCR_PR == '\0') {
          bVar27 = SUB84(dVar24,0) < (float)((ulonglong)dVar21 >> 0x20);
        }
        else {
          bVar27 = dVar24 < dVar21;
        }
        *(uint *)((int)puVar17 + -0x680) = (uint)bVar27;
        Vec3_dtor((undefined1 *)((int)puVar17 + -0x4e0),0xffffffff,puVar5,pcVar10);
        Vec3_dtor((undefined1 *)((int)puVar17 + -0x4d0),0xffffffff,puVar5,pcVar10);
        uVar2 = 0xffffffff;
        Vec3_dtor((undefined1 *)((int)puVar17 + -0x4c0),0xffffffff,puVar5,pcVar10);
        if (*(int *)((int)puVar17 + -0x680) == 0) {
          uVar2 = rand_range(ar4,0xfa,400,pcVar10);
          *(undefined4 *)((int)puVar17 + -0x85c) = uVar2;
          *(undefined4 *)(ar4 + 0x280) = *(undefined4 *)((int)puVar17 + -0x85c);
          uVar12 = 0;
          uVar9 = 0xffffffff;
          uVar2 = 0x1a;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,uVar12);
          *(int *)((int)puVar17 + -0x9f8) = ar4;
          pcVar10 = *(code **)((int)puVar17 + -0x9f8);
          *(undefined4 *)((int)puVar17 + -0xa6c) =
               *(undefined4 *)(*(int *)((int)puVar17 + -0x9f8) + 300);
          *(int *)(pcVar10 + 300) = *(int *)((int)puVar17 + -0xa6c) + 2;
          if (*(int *)(ar4 + 0x328) == 0) {
            *(undefined4 *)(ar4 + 300) = 0;
            iVar16 = 0;
          }
        }
        else {
          puVar8 = (undefined1 *)((int)puVar17 + -0x4f0);
          Vec3_ctor_xyz(puVar8,uVar2,puVar5,puVar8);
          *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x500);
          uVar2 = *(undefined4 *)ar5[1];
          Vec3_add(uVar2,(undefined1 *)((int)puVar17 + -0x4f0),uVar2,puVar8,
                   *(undefined4 *)((int)puVar17 + -0xa74));
          puVar5 = (undefined1 *)((int)puVar17 + -0x500);
          Vec3_ctor_copy((undefined1 *)((int)puVar17 + -0xd8),puVar5,uVar2,puVar5);
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x500),0xffffffff,uVar2,puVar5);
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x4f0),0xffffffff,uVar2,puVar5);
          FUN_8c057b6c(ar4,*(undefined4 *)ar5[1],(undefined1 *)((int)puVar17 + -0xd8),puVar5);
          *(int *)((int)puVar17 + -0x9f4) = ar4;
          pcVar10 = *(code **)((int)puVar17 + -0x9f4);
          iVar15 = *(int *)((int)puVar17 + -0x9f4);
          *(int *)(pcVar10 + 300) = *(int *)(iVar15 + 300) + 1;
          Vec3_dtor((undefined1 *)((int)puVar17 + -0xd8),0xffffffff,iVar15,pcVar10);
        }
        goto switchD_8c04477e_caseD_6;
      case (undefined *)0x8c044ad0:
        *(code **)((int)puVar17 + -0xa68) = FUN_8c057e58;
        uVar2 = (**(code **)((int)puVar17 + -0xa68))(ar4,ar5_00,pdVar6,pcVar10);
        *(undefined4 *)((int)puVar17 + -0xa64) = uVar2;
        *(undefined4 *)((int)puVar17 + -0x860) = *(undefined4 *)((int)puVar17 + -0xa64);
        if (*(int *)((int)puVar17 + -0x860) == 0) {
          if (*(int *)(ar4 + 0x328) == 0) {
            *(undefined4 *)(ar4 + 300) = 0;
            iVar16 = 0;
          }
          else {
            *(int *)((int)puVar17 + -0x9fc) = ar4;
            pcVar10 = (code *)0x12c;
            *(int *)(*(int *)((int)puVar17 + -0x9fc) + 300) =
                 *(int *)(*(int *)((int)puVar17 + -0x9fc) + 300) + -1;
          }
        }
        goto switchD_8c04477e_caseD_6;
      case (undefined *)0x8c044b44:
        uVar9 = 1;
        *(undefined4 *)(ar4 + 0x2fc) = 1;
        s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0x2fc,1,pcVar10);
        uVar12 = SUB84(dVar19,0);
        *(int *)((int)puVar17 + -0xa00) = ar4;
        uVar2 = *(undefined4 *)(*(int *)((int)puVar17 + -0xa00) + 0x280);
        *(undefined4 *)((int)puVar17 + -0xa04) = uVar2;
        *(int *)(*(int *)((int)puVar17 + -0xa00) + 0x280) = *(int *)((int)puVar17 + -0xa04) + -1;
        if (*(int *)((int)puVar17 + -0xa04) < 0) {
          FUN_8c03f39c(*ar5,uVar2,uVar9,0x280);
          *(undefined4 *)(ar4 + 0x280) = 0;
          if (*(int *)(ar4 + 0x128) == 3) {
            pcVar10 = (code *)0x0;
            uVar2 = 0x11;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0);
          }
          else {
            uVar2 = 0x22;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x22,0xffffffff,0);
            pcVar10 = (code *)0x7;
            *(undefined4 *)(ar4 + 0x218) = 7;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar25 = CONCAT44(0x3f4ccccd,uVar12);
          }
          else {
            uVar25 = 0x8c032ab03f4ccccd;
          }
          pcVar4 = FUN_8c032ab0;
          FUN_8c032ab0(ar4,uVar2,FUN_8c032ab0,pcVar10);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar17 + -0x864) = (int)((ulonglong)uVar25 >> 0x20);
            *(undefined4 *)(ar4 + 0x278) = *(undefined4 *)((int)puVar17 + -0x864);
          }
          else {
            *(undefined8 *)((int)puVar17 + -0x864) = uVar25;
            *(undefined8 *)(ar4 + 0x278) = *(undefined8 *)((int)puVar17 + -0x864);
          }
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,pcVar4,pcVar10);
          *(undefined4 *)(ar4 + 0x2b8) = 3;
          *(int *)((int)puVar17 + -0xa08) = ar4;
          *(int *)(*(int *)((int)puVar17 + -0xa08) + 300) =
               *(int *)(*(int *)((int)puVar17 + -0xa08) + 300) + 1;
        }
        else {
          pcVar10 = *(code **)(ar4 + 0x328);
          if (pcVar10 == (code *)0x0) {
            *(undefined4 *)(ar4 + 300) = 0;
            iVar16 = 0;
          }
        }
        goto switchD_8c04477e_caseD_6;
      case (undefined *)0x8c044cc8:
        if (*(int *)(ar4 + 0x128) == 3) {
          pcVar10 = (code *)(ar4 + 0xb0);
          s_CAnimBody_AdvanceFrame_033d90(pcVar10,ar5_00,s_CAnimBody_AdvanceFrame_033d90,pcVar10);
        }
        else {
          s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5_00,pdVar6,pcVar10);
        }
        if (*(int *)(ar4 + 0x328) == 0) {
          *(undefined4 *)(ar4 + 300) = 0;
          *(undefined4 *)(ar4 + 0x2b8) = 3;
          iVar16 = 0;
        }
        goto switchD_8c04477e_caseD_6;
      case (undefined *)0x8c044d7c:
        *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x510);
        FUN_8c0230f0(ar4 + 0x14,ar5_00,pdVar6,pcVar10,*(undefined4 *)((int)puVar17 + -0xa74));
        puVar5 = (undefined1 *)((int)puVar17 + -0x520);
        Vec3_ctor_xyz(puVar5,ar5_00,pdVar6,puVar5);
        *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x530);
        FUN_8c0230f0((undefined1 *)((int)puVar17 + -0x520),ar5_00,pdVar6,puVar5,
                     *(undefined4 *)((int)puVar17 + -0xa74));
        pcVar10 = FUN_8c022dac;
        FUN_8c022dac((undefined1 *)((int)puVar17 + -0x510),(undefined1 *)((int)puVar17 + -0x530),
                     FUN_8c022dac,puVar5);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar17 + -0x868) = (int)((ulonglong)dVar19 >> 0x20);
          *(undefined4 *)(ar4 + 0x224) = *(undefined4 *)((int)puVar17 + -0x868);
        }
        else {
          *(double *)((int)puVar17 + -0x868) = dVar19;
          *(undefined8 *)(ar4 + 0x224) = *(undefined8 *)((int)puVar17 + -0x868);
        }
        Vec3_dtor((undefined1 *)((int)puVar17 + -0x530),0xffffffff,pcVar10,puVar5);
        puVar5 = (undefined1 *)((int)puVar17 + -0x520);
        pcVar4 = Vec3_dtor;
        Vec3_dtor(puVar5,0xffffffff,Vec3_dtor,puVar5);
        uVar2 = 0xffffffff;
        Vec3_dtor((undefined1 *)((int)puVar17 + -0x510),0xffffffff,pcVar4,puVar5);
        Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x540),uVar2,pcVar4,puVar5);
        pcVar10 = FUN_8c0231c8;
        FUN_8c0231c8((undefined1 *)((int)puVar17 + -0x540),FUN_8c0231c8,pcVar4,puVar5);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar17 + -0x86c) = (int)((ulonglong)dVar19 >> 0x20);
        }
        else {
          *(double *)((int)puVar17 + -0x86c) = dVar19;
        }
        iVar15 = ar4 + 0x14;
        FUN_8c0231c8(iVar15,pcVar10,pcVar4,puVar5);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar17 + -0x870) = (int)((ulonglong)dVar19 >> 0x20);
          uVar25 = CONCAT44(*(undefined4 *)((int)puVar17 + -0x870),SUB84(dVar19,0));
        }
        else {
          *(double *)((int)puVar17 + -0x870) = dVar19;
          uVar25 = *(undefined8 *)((int)puVar17 + -0x870);
        }
        FUN_8c010e38(iVar15,pcVar10,pcVar4,puVar5);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar17 + -0x874) = (int)((ulonglong)uVar25 >> 0x20);
          *(undefined4 *)(ar4 + 0x228) = *(undefined4 *)((int)puVar17 + -0x874);
        }
        else {
          *(undefined8 *)((int)puVar17 + -0x874) = uVar25;
          *(undefined8 *)(ar4 + 0x228) = *(undefined8 *)((int)puVar17 + -0x874);
        }
        uVar2 = 0xffffffff;
        Vec3_dtor((undefined1 *)((int)puVar17 + -0x540),0xffffffff,pcVar4,puVar5);
        FUN_8c031748(ar4,uVar2,pcVar4,puVar5);
        *(undefined4 *)(ar4 + 0x40) = 1;
        puVar13 = (undefined8 *)(ar4 + 0x224);
        if (in_FPSCR_SZ == '\0') {
          uVar25 = CONCAT44(*(undefined4 *)puVar13,0x40a00000);
        }
        else {
          uVar25 = *puVar13;
        }
        if (in_FPSCR_PR == '\0' && (float)uVar25 < (float)((ulonglong)uVar25 >> 0x20)) {
          Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x550),uVar2,puVar13,puVar5);
          pcVar10 = FUN_8c023334;
          uVar2 = FUN_8c023334(ar4 + 0x14,(undefined1 *)((int)puVar17 + -0x550),puVar13,FUN_8c023334
                              );
          *(undefined4 *)((int)puVar17 + -0x878) = uVar2;
          uVar2 = *(undefined4 *)((int)puVar17 + -0x878);
          *(undefined4 *)(ar4 + 0x27c) = uVar2;
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x550),0xffffffff,uVar2,pcVar10);
          if (*(int *)(ar4 + 0x27c) == 3) {
            uVar2 = 7;
            uVar9 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
            *(undefined4 *)((int)puVar17 + -0x87c) = uVar9;
            if (*(int *)((int)puVar17 + -0x87c) != 6) {
              s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e);
            }
          }
          else {
            uVar9 = 0;
            uVar2 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
            *(undefined4 *)((int)puVar17 + -0x880) = uVar2;
            if (*(int *)((int)puVar17 + -0x880) != 6) {
              s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,0xb0,uVar9);
            }
          }
          *(int *)((int)puVar17 + -0xa0c) = ar4;
          *(undefined4 *)((int)puVar17 + -0xa70) =
               *(undefined4 *)(*(int *)((int)puVar17 + -0xa0c) + 300);
          *(int *)(*(int *)((int)puVar17 + -0xa0c) + 300) = *(int *)((int)puVar17 + -0xa70) + 1;
          pcVar10 = (code *)0xb0;
          s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar4 + 0xb0,0xb0);
        }
        else {
          *(undefined4 *)(ar4 + 300) = 0xc;
          uVar2 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          pcVar10 = (code *)0xb0;
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,s_CAnimBody_SetFrame_033e6e,0xb0);
          *(undefined4 *)(ar4 + 0x280) = 0;
          if (*(int *)(ar4 + 0x328) == 0) {
            *(undefined4 *)(ar4 + 300) = 0;
            iVar16 = 0;
          }
        }
switchD_8c04477e_caseD_6:
        *(undefined4 *)(ar4 + 0x328) = 0;
        break;
      case (undefined *)0x8c04509c:
        Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x560),ar5_00,pdVar6,pcVar10);
        *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x570);
        puVar5 = (undefined1 *)((int)puVar17 + -0x560);
        uVar2 = *(undefined4 *)ar5[1];
        Vec3_add(uVar2,puVar5,pdVar6,uVar2,*(undefined4 *)((int)puVar17 + -0xa74));
        uVar2 = get_field_1c_026dd8(ar4 + 0xb0,puVar5,ar4 + 0xb0,uVar2);
        *(undefined4 *)((int)puVar17 + -0x884) = uVar2;
        uVar9 = *(undefined4 *)((int)puVar17 + -0x884);
        uVar7 = 0xb0;
        uVar12 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar9,uVar2,0xb0);
        *(undefined4 *)((int)puVar17 + -0x888) = uVar12;
        uVar9 = get_field_1c_026dd8(ar4 + 0xb0,uVar9,uVar2,uVar7);
        *(undefined4 *)((int)puVar17 + -0x88c) = uVar9;
        uVar9 = *(undefined4 *)((int)puVar17 + -0x88c);
        uVar2 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar9,uVar2,uVar7);
        *(undefined4 *)((int)puVar17 + -0x890) = uVar2;
        Vec3_set_xyz((undefined1 *)((int)puVar17 + -0x57c),uVar9,
                     *(undefined4 *)((int)puVar17 + -0x890),0x224);
        *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x57c);
        *(undefined1 **)((int)puVar17 + -0xa78) = (undefined1 *)((int)puVar17 + -0x58c);
        iVar15 = ar4 + 0x14;
        puVar5 = (undefined1 *)((int)puVar17 + -0x570);
        FUN_8c031eb0(ar4,*(undefined4 *)ar5[1],puVar5,iVar15,*(undefined4 *)((int)puVar17 + -0xa78))
        ;
        Vec3_assign(ar4 + 0x14,(undefined1 *)((int)puVar17 + -0x58c),puVar5,iVar15);
        Vec3_dtor((undefined1 *)((int)puVar17 + -0x58c),0xffffffff,puVar5,iVar15);
        object_dtor_delete((undefined1 *)((int)puVar17 + -0x57c),0xffffffff,puVar5,iVar15);
        pcVar10 = (code *)0xffffffff;
        puVar5 = (undefined1 *)((int)puVar17 + -0x570);
        Vec3_dtor(puVar5,0xffffffff,puVar5,0xffffffff);
        uVar2 = 0xffffffff;
        *(undefined1 **)((int)puVar17 + -0xa6c) = (undefined1 *)((int)puVar17 + -0x560);
        Vec3_dtor(*(undefined4 *)((int)puVar17 + -0xa6c),0xffffffff,puVar5,pcVar10);
        uVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,puVar5,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x894) = uVar2;
        if (*(int *)((int)puVar17 + -0x894) == 1) {
          *(undefined4 *)((int)puVar17 + -0xa68) = 0;
          uVar9 = *(undefined4 *)((int)puVar17 + -0xa68);
          *(undefined4 *)((int)puVar17 + -0xa64) = 0xffffffff;
          uVar2 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,*(undefined4 *)((int)puVar17 + -0xa64),uVar9)
          ;
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,s_CAnimBody_SetFrame_033e6e,uVar9);
          *(undefined4 *)(ar4 + 300) = 0xc;
          uVar2 = rand_range(ar4,0xfa,400,uVar9);
          *(undefined4 *)((int)puVar17 + -0x898) = uVar2;
          pcVar10 = (code *)0x280;
          *(undefined4 *)(ar4 + 0x280) = *(undefined4 *)((int)puVar17 + -0x898);
          if (*(int *)(ar4 + 0x328) == 0) {
            *(undefined4 *)(ar4 + 300) = 0;
            iVar16 = 0;
          }
        }
        goto switchD_8c04477e_caseD_6;
      case (undefined *)0x8c045328:
        *(undefined4 *)(ar4 + 0x2fc) = 1;
        *(int *)((int)puVar17 + -0xa10) = ar4;
        pcVar10 = *(code **)((int)puVar17 + -0xa10);
        *(undefined4 *)((int)puVar17 + -0xa14) = *(undefined4 *)(pcVar10 + 0x280);
        *(int *)(*(int *)((int)puVar17 + -0xa10) + 0x280) = *(int *)((int)puVar17 + -0xa14) + -1;
        if (*(int *)((int)puVar17 + -0xa14) < 0) {
          *(undefined4 *)(ar4 + 0x280) = 0;
          uVar2 = 0x10;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0);
          pcVar10 = (code *)(ar4 + 0xb0);
          s_CAnimBody_SetFrame_033e6e(pcVar10,uVar2,s_CAnimBody_SetFrame_033e6e,pcVar10);
          *(int *)((int)puVar17 + -0xa18) = ar4;
          *(int *)(*(int *)((int)puVar17 + -0xa18) + 300) =
               *(int *)(*(int *)((int)puVar17 + -0xa18) + 300) + 1;
        }
        else if (*(int *)(ar4 + 0x328) == 0) {
          *(undefined4 *)(ar4 + 300) = 0;
          iVar16 = 0;
        }
        goto switchD_8c04477e_caseD_6;
      case (undefined *)0x8c0453ec:
        pcVar10 = (code *)s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,pdVar6,pcVar10);
        *(code **)((int)puVar17 + -0x89c) = pcVar10;
        if (*(int *)((int)puVar17 + -0x89c) == 1) {
          *(undefined4 *)(ar4 + 0x2fc) = 0;
          *(undefined4 *)(ar4 + 300) = 0;
          iVar16 = 0;
        }
      case (undefined *)0x8c045422:
        goto switchD_8c04477e_caseD_6;
      }
      break;
    case 0x17:
      *(undefined4 *)(ar4 + 0x178) = 1;
      iVar15 = *(int *)(ar4 + 300);
      if (iVar15 == 0) {
        pcVar10 = (code *)0x214;
        *(undefined4 *)(ar4 + 0x214) = 0;
        *(undefined4 *)(ar4 + 0x2e8) = 2;
        *(int *)((int)puVar17 + -0xa1c) = ar4;
        *(int *)(*(int *)((int)puVar17 + -0xa1c) + 300) =
             *(int *)(*(int *)((int)puVar17 + -0xa1c) + 300) + 1;
      }
      else {
        if (iVar15 == 1) {
          Vec3_assign(ar4 + 0x248,*(undefined4 *)ar5[1],0x2e8,pcVar10);
          *(undefined4 *)(ar4 + 700) = 1;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x250) = 0xc3fa0000;
            *(undefined4 *)(ar4 + 0x24c) = 0x43340000;
          }
          else {
            *(undefined8 *)(ar4 + 0x250) = 0x24cc3fa0000;
            *(undefined8 *)(ar4 + 0x24c) = 0x32043340000;
          }
          *(undefined4 *)(ar4 + 800) = 0;
          *(int *)((int)puVar17 + -0xa20) = ar4;
          pcVar10 = (code *)0x12c;
          *(int *)(*(int *)((int)puVar17 + -0xa20) + 300) =
               *(int *)(*(int *)((int)puVar17 + -0xa20) + 300) + 1;
        }
        else if (iVar15 != 2) {
          if (iVar15 == 3) {
            uVar2 = CAnimBody_AdvanceFrame_wrapper
                              (ar4 + 0xb0,0xb0,CAnimBody_AdvanceFrame_wrapper,pcVar10);
            *(undefined4 *)((int)puVar17 + -0x8b0) = uVar2;
            if (*(int *)((int)puVar17 + -0x8b0) == 1) {
              *(undefined4 *)(ar4 + 0x178) = 0;
              iVar16 = 0;
              *(undefined4 *)((int)puVar17 + -0xa70) = 0;
              *(undefined4 *)(ar4 + 300) = *(undefined4 *)((int)puVar17 + -0xa70);
              pcVar10 = (code *)0xffffffff;
              *(undefined4 *)(ar4 + 0x31c) = 0xffffffff;
              *(undefined4 *)(ar4 + 0x284) = 0;
            }
          }
          break;
        }
        uVar2 = FUN_8c04c314(ar4,*(undefined4 *)ar5[1],ar4 + 0x248,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x8ac) = uVar2;
        if (*(int *)((int)puVar17 + -0x8ac) == 0) {
          uVar2 = 0x1a;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
          pcVar10 = s_CAnimBody_SetFrame_033e6e;
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e);
          *(int *)((int)puVar17 + -0xa24) = ar4;
          *(int *)(*(int *)((int)puVar17 + -0xa24) + 300) =
               *(int *)(*(int *)((int)puVar17 + -0xa24) + 300) + 1;
        }
      }
      break;
    case 0x19:
      *(undefined4 *)((int)puVar17 + -0xa70) = 0x214;
      *(undefined4 *)(*(int *)((int)puVar17 + -0xa70) + ar4) = 0;
      *(undefined4 *)(ar4 + 0x178) = 1;
      pcVar10 = pcVar14;
      uVar2 = FUN_8c055c38(ar4,*(undefined4 *)ar5[1],ar4 + 0x34c,pcVar14);
      *(undefined4 *)((int)puVar17 + -0x788) = uVar2;
      if (*(int *)((int)puVar17 + -0x788) == 0) {
        *(undefined4 *)(ar4 + 0x178) = 0;
        pcVar10 = (code *)0x0;
        iVar16 = 0;
        *(undefined4 *)(ar4 + 0x214) = 1;
      }
      break;
    case 0x1a:
      *(undefined4 *)(ar4 + 700) = 1;
      *(undefined4 *)(ar4 + 0x178) = 1;
      *(undefined4 *)(ar4 + 0x214) = 0;
      uVar2 = FUN_8c0564c4(ar4,*(undefined4 *)ar5[1],ar4 + 0x34c,pcVar14);
      *(undefined4 *)((int)puVar17 + -0x78c) = uVar2;
      pcVar10 = *(code **)((int)puVar17 + -0x78c);
      if (pcVar10 == (code *)0x0) {
        *(undefined4 *)(ar4 + 0x178) = 0;
        iVar16 = 0;
        *(undefined4 *)(ar4 + 700) = 0;
        pcVar10 = (code *)0x1;
        *(undefined4 *)(ar4 + 0x214) = 1;
      }
      break;
    case 0x1b:
      *(undefined4 *)(ar4 + 0x214) = 0;
      *(undefined4 *)(ar4 + 0x324) = 1;
      *(undefined4 *)(ar4 + 0x178) = 1;
      pcVar10 = (code *)0x128;
      if (*(int *)(ar4 + 0x128) < 4) {
        *(undefined4 *)(ar4 + 0x178) = 0;
        iVar16 = 2;
      }
      else {
        uVar2 = (**(code **)(*(int *)ar5[6] + 0x1cc))((int *)ar5[6],*(int *)(ar4 + 0x128),0,0x128);
        *(undefined4 *)((int)puVar17 + -0x834) = uVar2;
        pcVar10 = pcVar14;
        uVar2 = FUN_8c058d60(ar4,*(undefined4 *)ar5[1],*(int *)((int)puVar17 + -0x834) + 4,pcVar14);
        *(undefined4 *)((int)puVar17 + -0x838) = uVar2;
        if (*(int *)((int)puVar17 + -0x838) == 0) {
          iVar16 = 0;
          pcVar10 = (code *)0x0;
          *(undefined4 *)(ar4 + 0x178) = 0;
          *(undefined4 *)(ar4 + 0x2e8) = 1;
        }
      }
      break;
    case 0x1c:
      *(undefined4 *)(ar4 + 0x214) = 0;
      *(undefined4 *)(ar4 + 0x2e8) = 1;
      *(undefined4 *)(ar4 + 0x178) = 1;
      *(undefined4 *)(ar4 + 0x324) = 1;
      if (*(int *)(ar4 + 0x128) < 4) {
        pcVar10 = (code *)0x2;
        iVar16 = 2;
      }
      else {
        uVar2 = (**(code **)(*(int *)ar5[6] + 0x1cc))((int *)ar5[6],ar5_00,0,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x844) = uVar2;
        *(undefined4 *)((int)puVar17 + -0xa74) = *(undefined4 *)(ar4 + 0x124);
        *(int *)((int)puVar17 + -0xa78) = *(int *)((int)puVar17 + -0x844) + 4;
        pcVar10 = (code *)FUN_8c0593cc(ar4,ar5[6],*ar5,*(undefined4 *)ar5[1]);
        *(code **)((int)puVar17 + -0x848) = pcVar10;
        if (*(int *)((int)puVar17 + -0x848) == 0) {
          *(undefined4 *)(ar4 + 0x324) = 0;
          iVar16 = 0;
          *(undefined4 *)(ar4 + 0x214) = 1;
          *(undefined4 *)(ar4 + 0x2e8) = 2;
        }
      }
      break;
    case 0x1d:
      *(undefined4 *)(ar4 + 0x214) = 0;
      *(undefined4 *)(ar4 + 0x324) = 1;
      pcVar10 = (code *)0x2e8;
      *(undefined4 *)(ar4 + 0x2e8) = 1;
      *(undefined4 *)(ar4 + 0x178) = 1;
      if (*(int *)(ar4 + 0x128) < 4) {
        *(undefined4 *)(ar4 + 0x178) = 0;
        iVar16 = 2;
      }
      else {
        uVar2 = (**(code **)(*(int *)ar5[6] + 0x1cc))((int *)ar5[6],ar5_00,1,0x2e8);
        *(undefined4 *)((int)puVar17 + -0x83c) = uVar2;
        *(undefined4 *)((int)puVar17 + -0xa74) = 0x1d;
        *(int *)((int)puVar17 + -0xa78) = *(int *)((int)puVar17 + -0x83c) + 4;
        pcVar10 = *(code **)ar5[1];
        uVar2 = FUN_8c0593cc(ar4,ar5[6],*ar5,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x840) = uVar2;
        if (*(int *)((int)puVar17 + -0x840) == 0) {
          pcVar10 = (code *)0x0;
          *(undefined4 *)(ar4 + 0x324) = 0;
          iVar16 = 0;
          *(undefined4 *)(ar4 + 0x214) = 1;
          *(undefined4 *)(ar4 + 0x2e8) = 2;
        }
      }
      break;
    case 0x1e:
      if (*(int *)(ar4 + 0x128) < 4) {
        iVar16 = 2;
      }
      else if (*(int *)(ar4 + 300) == 0) {
        *(undefined4 *)(ar4 + 0x178) = 1;
        pcVar10 = pcVar14;
        uVar2 = FUN_8c055c38(ar4,*(undefined4 *)ar5[1],ar4 + 0x34c,pcVar14);
        *(undefined4 *)((int)puVar17 + -0x82c) = uVar2;
        if (*(int *)((int)puVar17 + -0x82c) == 0) {
          *(undefined4 *)(ar4 + 0x178) = 0;
          *(int *)((int)puVar17 + -0x9e8) = ar4;
          pcVar10 = (code *)(*(int *)(*(int *)((int)puVar17 + -0x9e8) + 300) + 1);
          *(code **)(*(int *)((int)puVar17 + -0x9e8) + 300) = pcVar10;
        }
      }
      else if (*(int *)(ar4 + 300) == 1) {
        FUN_8c03f460((undefined1 *)((int)puVar17 + -0x4b0),ar5[7],ar5[7],pcVar10);
        *(undefined4 *)((int)puVar17 + -0xa6c) = 0xffffffff;
        *(undefined4 *)((int)puVar17 + -0xa74) = *(undefined4 *)((int)puVar17 + -0xa6c);
        pcVar10 = (code *)((int)puVar17 + -0x4b0);
        puVar5 = (undefined1 *)((int)puVar17 + -0x30);
        uVar2 = FUN_8c059fc4(ar4,*(undefined4 *)ar5[1],puVar5,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x830) = uVar2;
        *(undefined4 *)((int)puVar17 + -0xa68) = *(undefined4 *)((int)puVar17 + -0x830);
        *(uint *)((int)puVar17 + -0xa64) = (uint)(*(int *)((int)puVar17 + -0xa68) == 0);
        *(undefined4 *)((int)puVar17 + -0x67c) = *(undefined4 *)((int)puVar17 + -0xa64);
        free_if_nonnull_wrap_102790((undefined1 *)((int)puVar17 + -0x4b0),0xffffffff,puVar5,pcVar10)
        ;
        if (*(int *)((int)puVar17 + -0x67c) != 0) {
          iVar16 = 0;
          *(undefined4 *)(ar4 + 300) = 0;
        }
      }
      break;
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x26:
      if (*(int *)(ar4 + 0x128) < 4) {
        pcVar10 = (code *)0x2;
        iVar16 = 2;
      }
      else {
        iVar15 = *(int *)(ar4 + 300);
        if ((iVar15 < 6) && (-1 < iVar15)) {
                    /* WARNING: Could not recover jumptable at 0x8c042cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)(&PTR_LAB_8c042cc8)[iVar15])();
          return uVar2;
        }
      }
      break;
    case 0x23:
    case 0x24:
    case 0x27:
    case 0x28:
      pcVar10 = (code *)0x0;
      *(undefined4 *)(ar4 + 0x31c) = 0;
      *(undefined4 *)(ar4 + 0x214) = 0;
      *(undefined4 *)(ar4 + 0x178) = 1;
      if (*(int *)(ar4 + 0x128) < 4) {
        iVar16 = 2;
      }
      else {
        pcVar10 = (code *)0x12c;
        iVar15 = *(int *)(ar4 + 300);
        if (iVar15 == 0) {
          pcVar10 = pcVar14;
          uVar2 = FUN_8c055c38(ar4,*(undefined4 *)ar5[1],ar4 + 0x34c,pcVar14);
          *(undefined4 *)((int)puVar17 + -0x7a8) = uVar2;
          if (*(int *)((int)puVar17 + -0x7a8) == 0) {
            *(int *)((int)puVar17 + -0x990) = ar4;
            *(int *)(*(int *)((int)puVar17 + -0x990) + 300) =
                 *(int *)(*(int *)((int)puVar17 + -0x990) + 300) + 1;
          }
        }
        else if (iVar15 == 1) {
          pcVar10 = FUN_8c057164;
          uVar2 = FUN_8c057164(ar4,*(undefined4 *)ar5[1],1,FUN_8c057164);
          *(undefined4 *)((int)puVar17 + -0x7ac) = uVar2;
          if (*(int *)((int)puVar17 + -0x7ac) == 0) {
            *(int *)((int)puVar17 + -0x994) = ar4;
            *(int *)(*(int *)((int)puVar17 + -0x994) + 300) =
                 *(int *)(*(int *)((int)puVar17 + -0x994) + 300) + 1;
            *(undefined4 *)(ar4 + 0x290) = 0;
            *(undefined4 *)(ar4 + 0x40) = 5;
            pcVar10 = (code *)0x1;
            *(undefined4 *)(ar4 + 700) = 1;
          }
        }
        else if (iVar15 == 2) {
          uVar12 = 700;
          *(undefined4 *)(ar4 + 700) = 1;
          if (in_FPSCR_SZ == '\0') {
            dVar24 = (double)CONCAT44(*(undefined4 *)ar5[7],uVar9);
            dVar21 = (double)CONCAT44(0x40800000,SUB84(dVar19,0));
          }
          else {
            dVar24 = *(double *)ar5[7];
            dVar21 = 1.25675615172221e-311;
          }
          if (in_FPSCR_PR == '\0') {
            dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) /
                                      (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar24,0));
          }
          else {
            dVar24 = dVar24 / dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(ar4 + 0x248) = (int)((ulonglong)dVar24 >> 0x20);
            uVar25 = CONCAT44(0x44898000,uVar2);
            *(undefined4 *)(ar4 + 0x250) = 0x44898000;
          }
          else {
            *(double *)(ar4 + 0x248) = dVar24;
            uVar25 = 0xa2044898000;
            *(undefined8 *)(ar4 + 0x250) = 0xa2044898000;
          }
          puVar5 = (undefined1 *)((int)puVar17 + -0x50);
          (**(code **)(*(int *)ar5[6] + 0x128))((int *)ar5[6],puVar5,700,300);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar17 + -0x7b0) = (int)((ulonglong)dVar21 >> 0x20);
            *(undefined4 *)(ar4 + 0x24c) = *(undefined4 *)((int)puVar17 + -0x7b0);
          }
          else {
            *(double *)((int)puVar17 + -0x7b0) = dVar21;
            uVar25 = *(undefined8 *)((int)puVar17 + -0x7b0);
            *(undefined8 *)(ar4 + 0x24c) = uVar25;
            in_xd4 = dVar21;
          }
          uVar18 = (undefined4)uVar25;
          uVar2 = 0;
          Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x328),puVar5,uVar12,pcVar10);
          uVar7 = SUB84(dVar21,0);
          Vec3_assign(ar4 + 0x54,(undefined1 *)((int)puVar17 + -0x328),uVar12,pcVar10);
          uVar9 = 0xffffffff;
          pcVar4 = Vec3_dtor;
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x328),0xffffffff,Vec3_dtor,pcVar10);
          iVar15 = *(int *)(ar4 + 0x124);
          if (iVar15 < 0x33) {
            if (iVar15 < 0x32) {
              pcVar10 = (code *)0x28;
              if ((iVar15 < 0x29) && (0x22 < iVar15)) {
                if (iVar15 == 0x23) {
                  if (in_FPSCR_SZ == '\0') {
                    uVar2 = 0;
                  }
                  else {
                    uVar2 = 0xbf800000;
                  }
                  pcVar4 = Vec3_ctor_xyz;
                  Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x338),uVar9,Vec3_ctor_xyz,0x28);
                  Vec3_assign(ar4 + 0x54,(undefined1 *)((int)puVar17 + -0x338),pcVar4,pcVar10);
                  Vec3_dtor((undefined1 *)((int)puVar17 + -0x338),0xffffffff,pcVar4,pcVar10);
                  *(int *)((int)puVar17 + -0x998) = ar4;
                  if (in_FPSCR_SZ == '\0') {
                    dVar24 = (double)CONCAT44(*(undefined4 *)
                                               (*(int *)((int)puVar17 + -0x998) + 0x248),uVar2);
                    dVar21 = (double)CONCAT44(0x42d20000,uVar7);
                  }
                  else {
                    dVar24 = *(double *)(*(int *)((int)puVar17 + -0x998) + 0x248);
                    dVar21 = -7.123181745823468e+261;
                  }
                  if (in_FPSCR_PR == '\0') {
                    dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) +
                                              (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar24,0));
                  }
                  else {
                    dVar24 = dVar24 + dVar21;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(*(int *)((int)puVar17 + -0x998) + 0x248) =
                         (int)((ulonglong)dVar24 >> 0x20);
                  }
                  else {
                    *(double *)(*(int *)((int)puVar17 + -0x998) + 0x248) = dVar24;
                  }
                }
                else if (iVar15 == 0x24) {
                  if (in_FPSCR_SZ == '\0') {
                    uVar2 = uVar18;
                  }
                  Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x358),uVar9,pcVar4,0x28);
                  Vec3_assign(ar4 + 0x54,(undefined1 *)((int)puVar17 + -0x358),pcVar4,pcVar10);
                  *(undefined4 *)((int)puVar17 + -0xa70) = 0xffffffff;
                  pcVar10 = Vec3_dtor;
                  Vec3_dtor((undefined1 *)((int)puVar17 + -0x358),
                            *(undefined4 *)((int)puVar17 + -0xa70),pcVar4,Vec3_dtor);
                  *(int *)((int)puVar17 + -0x9a0) = ar4;
                  pcVar4 = (code *)(*(int *)((int)puVar17 + -0x9a0) + 0x248);
                  if (in_FPSCR_SZ == '\0') {
                    uVar9 = *(undefined4 *)(*(int *)((int)puVar17 + -0x9a0) + 0x248);
                    dVar24 = (double)CONCAT44(0x42d20000,uVar9);
                    dVar21 = (double)CONCAT44(uVar9,uVar2);
                  }
                  else {
                    dVar21 = *(double *)(*(int *)((int)puVar17 + -0x9a0) + 0x248);
                    dVar24 = -1.424828541595511e+262;
                  }
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) -
                                              (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 - dVar24;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)pcVar4 = (int)((ulonglong)dVar21 >> 0x20);
                  }
                  else {
                    *(double *)pcVar4 = dVar21;
                  }
                }
                else if (iVar15 == 0x27) {
                  if (in_FPSCR_SZ == '\0') {
                    dVar24 = -0.0078125;
                  }
                  else {
                    dVar24 = 3.88908364136857e-311;
                  }
                  Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x348),uVar9,pcVar4,0x28);
                  puVar5 = (undefined1 *)((int)puVar17 + -0x348);
                  pcVar10 = (code *)(ar4 + 0x54);
                  Vec3_assign(pcVar10,puVar5,puVar5,pcVar10);
                  Vec3_dtor((undefined1 *)((int)puVar17 + -0x348),0xffffffff,puVar5,pcVar10);
                  *(int *)((int)puVar17 + -0x99c) = ar4;
                  pcVar4 = (code *)0x248;
                  if (in_FPSCR_SZ == '\0') {
                    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),0x42dc0000);
                    dVar21 = (double)CONCAT44(*(undefined4 *)
                                               (*(int *)((int)puVar17 + -0x99c) + 0x248),uVar7);
                  }
                  else {
                    dVar21 = *(double *)(*(int *)((int)puVar17 + -0x99c) + 0x248);
                  }
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar24,0),
                                              SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 + dVar24;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(*(int *)((int)puVar17 + -0x99c) + 0x248) =
                         (int)((ulonglong)dVar21 >> 0x20);
                  }
                  else {
                    *(double *)(*(int *)((int)puVar17 + -0x99c) + 0x248) = dVar21;
                  }
                }
                else if (iVar15 == 0x28) {
                  dVar24 = 0.0;
                  if (in_FPSCR_SZ == '\0') {
                    dVar24 = in_xd4;
                  }
                  Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x368),
                                (undefined1 *)((int)puVar17 + -0x368),pcVar4,0x28);
                  pcVar10 = Vec3_assign;
                  Vec3_assign(ar4 + 0x54,(undefined1 *)((int)puVar17 + -0x368),pcVar4,Vec3_assign);
                  pcVar4 = (code *)((int)puVar17 + -0x368);
                  Vec3_dtor(pcVar4,0xffffffff,pcVar4,pcVar10);
                  *(int *)((int)puVar17 + -0x9a4) = ar4;
                  if (in_FPSCR_SZ == '\0') {
                    dVar21 = (double)CONCAT44(0x42dc0000,
                                              *(undefined4 *)
                                               (*(int *)((int)puVar17 + -0x9a4) + 0x248));
                  }
                  else {
                    dVar24 = *(double *)(*(int *)((int)puVar17 + -0x9a4) + 0x248);
                    dVar21 = -1.7995873979860088e+258;
                  }
                  if (in_FPSCR_PR == '\0') {
                    fVar20 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
                  }
                  else {
                    fVar20 = SUB84(dVar21 - dVar21,0);
                  }
                  if (in_FPSCR_SZ == '\0') {
                    *(float *)(*(int *)((int)puVar17 + -0x9a4) + 0x248) = fVar20;
                  }
                  else {
                    *(double *)(*(int *)((int)puVar17 + -0x9a4) + 0x248) = dVar24;
                  }
                }
              }
            }
            else {
              Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x388),uVar9,
                            (undefined1 *)((int)puVar17 + -0x388),pcVar10);
              pcVar4 = (code *)((int)puVar17 + -0x388);
              pcVar10 = Vec3_assign;
              Vec3_assign(ar4 + 0x54,pcVar4,pcVar4,Vec3_assign);
              Vec3_dtor((undefined1 *)((int)puVar17 + -0x388),0xffffffff,pcVar4,pcVar10);
              *(int *)((int)puVar17 + -0x9a8) = ar4;
              if (in_FPSCR_SZ == '\0') {
                dVar24 = (double)CONCAT44(0x43140000,
                                          *(undefined4 *)(*(int *)((int)puVar17 + -0x9a8) + 0x248));
              }
              else {
                in_xd4 = *(double *)(*(int *)((int)puVar17 + -0x9a8) + 0x248);
                dVar24 = 3.7182926394388e-311;
              }
              if (in_FPSCR_PR == '\0') {
                fVar20 = SUB84(dVar24,0) + (float)((ulonglong)dVar24 >> 0x20);
              }
              else {
                fVar20 = SUB84(dVar24 + dVar24,0);
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(*(int *)((int)puVar17 + -0x9a8) + 0x248) = fVar20;
              }
              else {
                *(double *)(*(int *)((int)puVar17 + -0x9a8) + 0x248) = in_xd4;
              }
            }
          }
          else if (iVar15 == 0x33) {
            Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x378),uVar9,pcVar4,pcVar10);
            Vec3_assign(ar4 + 0x54,(undefined1 *)((int)puVar17 + -0x378),pcVar4,pcVar10);
            pcVar10 = (code *)0xffffffff;
            Vec3_dtor((undefined1 *)((int)puVar17 + -0x378),0xffffffff,pcVar4,0xffffffff);
          }
          Vec3_ctor_copy((undefined1 *)((int)puVar17 + -0x398),ar4 + 0x54,pcVar4,pcVar10);
          pcVar10 = (code *)((int)puVar17 + -0x398);
          iVar15 = ar4 + 0x248;
          uVar2 = FUN_8c04e0e0(ar4,*(undefined4 *)ar5[1],iVar15,pcVar10);
          *(undefined4 *)((int)puVar17 + -0x7b4) = uVar2;
          *(uint *)((int)puVar17 + -0x670) = (uint)(*(int *)((int)puVar17 + -0x7b4) == 0);
          uVar2 = 0xffffffff;
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x398),0xffffffff,iVar15,pcVar10);
          if (*(int *)((int)puVar17 + -0x670) != 0) {
            FUN_8c022d04(ar4 + 0x2d4,uVar2,iVar15,pcVar10);
            FUN_8c022d04(ar4 + 0x2a8,uVar2,iVar15,pcVar10);
            *(int *)((int)puVar17 + -0x9ac) = ar4;
            *(int *)(*(int *)((int)puVar17 + -0x9ac) + 300) =
                 *(int *)(*(int *)((int)puVar17 + -0x9ac) + 300) + 1;
            pcVar10 = (code *)0x0;
            *(undefined4 *)((int)puVar17 + -0xa6c) = 0xb0;
            s_CAnimBody_SetAnimation_033a94(ar4 + *(int *)((int)puVar17 + -0xa6c),0x1a,0xffffffff,0)
            ;
            *(undefined4 *)(ar4 + 0x218) = 0;
          }
          if (*(int *)(ar4 + 0x290) == 1) {
            *(int *)((int)puVar17 + -0x9b0) = ar4;
            *(undefined4 *)((int)puVar17 + -0xa68) = *(undefined4 *)((int)puVar17 + -0x9b0);
            *(undefined4 *)((int)puVar17 + -0xa64) = 0x1fc;
            *(byte *)(*(int *)((int)puVar17 + -0xa64) + *(int *)((int)puVar17 + -0xa68)) =
                 *(byte *)(*(int *)((int)puVar17 + -0x9b0) + 0x1fc) & 0xfb;
          }
        }
        else if (iVar15 == 3) {
          pcVar10 = (code *)(ar4 + 0xb0);
          CAnimBody_AdvanceFrame_wrapper(pcVar10,ar5_00,0xb0,pcVar10);
          iVar16 = 0;
        }
        *(undefined4 *)(ar4 + 0x178) = 1;
      }
      break;
    case 0x29:
      *(undefined4 *)(ar4 + 700) = 1;
      pcVar10 = (code *)0x134;
      iVar15 = *(int *)(ar4 + 0x134);
      if ((iVar15 < 5) && (-1 < iVar15)) {
                    /* WARNING: Could not recover jumptable at 0x8c03fee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&PTR_LAB_8c03fef0)[iVar15])();
        return uVar2;
      }
      break;
    case 0x2a:
      *(undefined4 *)(ar4 + 0x214) = 0;
      FUN_8c05a54c(ar4,*(undefined4 *)ar5[1],0x2e8,pcVar10);
      break;
    case 0x2b:
      uVar12 = 0;
      uVar9 = 0x47;
      uVar2 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x47,0xffffffff,0);
      *(undefined4 *)((int)puVar17 + -0x84c) = uVar2;
      iVar15 = *(int *)((int)puVar17 + -0x84c);
      if (iVar15 != 6) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar9,iVar15,uVar12);
      }
      pcVar10 = (code *)(ar4 + 0xb0);
      uVar2 = s_CAnimBody_AdvanceFrame_033ba0(pcVar10,uVar9,iVar15,pcVar10);
      *(undefined4 *)((int)puVar17 + -0x850) = uVar2;
      if (*(int *)((int)puVar17 + -0x850) == 1) {
        iVar16 = 0;
      }
      break;
    case 0x2c:
      if (pcVar14 == (code *)0x1) {
        pcVar10 = *(code **)ar5[1];
        uVar2 = FUN_8c057164(ar4,pcVar10,0x2e8,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x8a4) = uVar2;
        if (*(int *)((int)puVar17 + -0x8a4) == 0) {
          uVar2 = FUN_8c0570cc(ar4,0x1a,pdVar6,pcVar10);
          *(undefined4 *)((int)puVar17 + -0x8a8) = uVar2;
          iVar16 = *(int *)((int)puVar17 + -0x8a8);
          *(undefined4 *)(ar4 + 0x218) = 0;
        }
      }
      else {
        pcVar10 = (code *)0x2e8;
        *(undefined4 *)(ar4 + 0x2e8) = 0;
        FUN_8c05ae54(ar4,ar5_00,0,0x2e8);
        puVar5 = (undefined1 *)((int)puVar17 + -0x30);
        FUN_8c031c74(ar4,puVar5,*(undefined4 *)ar5[1],pcVar10);
        pcVar4 = FUN_8c031748;
        FUN_8c031748(ar4,puVar5,FUN_8c031748,pcVar10);
        uVar9 = 0;
        uVar2 = FUN_8c031de8(ar4,0,pcVar4,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x8a0) = uVar2;
        if (*(int *)((int)puVar17 + -0x8a0) == 0) {
          *(undefined4 *)(ar4 + 300) = 0;
          FUN_8c03c314(ar4,uVar9,pcVar4,pcVar10);
          iVar16 = 0;
        }
      }
      break;
    case 0x2f:
      pcVar10 = (code *)0x3;
      if (*(int *)(ar4 + 0x128) < 4) {
        iVar16 = 2;
      }
      else {
        iVar15 = *(int *)(ar4 + 300);
        if (iVar15 == 0) {
          *(undefined4 *)((int)puVar17 + -0xa6c) = 0x214;
          *(undefined4 *)(*(int *)((int)puVar17 + -0xa6c) + ar4) = 0;
          pcVar10 = pcVar14;
          uVar2 = FUN_8c055c38(ar4,*(undefined4 *)ar5[1],ar4 + 0x34c,pcVar14);
          *(undefined4 *)((int)puVar17 + -0xa68) = uVar2;
          *(undefined4 *)((int)puVar17 + -0x8ec) = *(undefined4 *)((int)puVar17 + -0xa68);
          *(undefined4 *)((int)puVar17 + -0xa64) = *(undefined4 *)((int)puVar17 + -0x8ec);
          if (*(int *)((int)puVar17 + -0xa64) == 0) {
            *(undefined4 *)(ar4 + 0x2e8) = 2;
            *(int *)((int)puVar17 + -0xa54) = ar4;
            pcVar10 = (code *)(*(int *)(*(int *)((int)puVar17 + -0xa54) + 300) + 1);
            *(code **)(*(int *)((int)puVar17 + -0xa54) + 300) = pcVar10;
          }
        }
        else {
          if (iVar15 == 1) {
            iVar15 = ar4 + 0x34c;
            Vec3_assign(ar4 + 0x248,iVar15,iVar15,3);
            puVar13 = (undefined8 *)(ar4 + 0x248);
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)puVar13 = 0x449b0000;
              *(undefined4 *)(ar4 + 0x24c) = 0x439b0000;
            }
            else {
              *puVar13 = 0x24c449b0000;
              *(undefined8 *)(ar4 + 0x24c) = 0x44bb8000439b0000;
            }
            Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x5cc),0x24c,iVar15,puVar13);
            *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x5dc);
            puVar5 = (undefined1 *)((int)puVar17 + -0x5cc);
            pcVar10 = Vec3_sub;
            Vec3_sub(ar4 + 0x248,puVar5,iVar15,Vec3_sub,*(undefined4 *)((int)puVar17 + -0xa74));
            puVar8 = (undefined1 *)((int)puVar17 + -0x5ec);
            *(undefined1 **)((int)puVar17 + -0xa74) = puVar8;
            Vec3_normalize((undefined1 *)((int)puVar17 + -0x5dc),puVar5,puVar8,pcVar10);
            *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x5fc);
            Vec3_scale((undefined1 *)((int)puVar17 + -0x5ec),&DAT_8c136580,puVar8,pcVar10,
                       *(undefined4 *)((int)puVar17 + -0xa74));
            iVar15 = ar4 + 0x248;
            pcVar10 = FUN_8c023aa0;
            FUN_8c023aa0(iVar15,(undefined1 *)((int)puVar17 + -0x5fc),FUN_8c023aa0,iVar15);
            Vec3_dtor((undefined1 *)((int)puVar17 + -0x5fc),0xffffffff,pcVar10,iVar15);
            pcVar4 = Vec3_dtor;
            Vec3_dtor((undefined1 *)((int)puVar17 + -0x5ec),0xffffffff,pcVar10,Vec3_dtor);
            uVar9 = 0xffffffff;
            Vec3_dtor((undefined1 *)((int)puVar17 + -0x5dc),0xffffffff,0xffffffff,pcVar4);
            uVar2 = 0xffffffff;
            Vec3_dtor((undefined1 *)((int)puVar17 + -0x5cc),0xffffffff,uVar9,pcVar4);
            pcVar10 = Vec3_ctor_xyz;
            Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x60c),uVar2,Vec3_ctor_xyz,pcVar4);
            *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x61c);
            iVar15 = ar4 + 0x248;
            Vec3_sub((undefined1 *)((int)puVar17 + -0x60c),iVar15,pcVar10,pcVar4,
                     *(undefined4 *)((int)puVar17 + -0xa74));
            *(undefined1 **)((int)puVar17 + -0xa74) = (undefined1 *)((int)puVar17 + -0x62c);
            pcVar4 = Vec3_normalize;
            Vec3_normalize((undefined1 *)((int)puVar17 + -0x61c),iVar15,pcVar10,Vec3_normalize);
            puVar5 = (undefined1 *)((int)puVar17 + -0x62c);
            Vec3_assign(ar4 + 0x54,puVar5,puVar5,pcVar4);
            Vec3_dtor((undefined1 *)((int)puVar17 + -0x62c),0xffffffff,puVar5,pcVar4);
            pcVar10 = Vec3_dtor;
            Vec3_dtor((undefined1 *)((int)puVar17 + -0x61c),0xffffffff,puVar5,Vec3_dtor);
            Vec3_dtor((undefined1 *)((int)puVar17 + -0x60c),0xffffffff,0xffffffff,pcVar10);
            *(int *)((int)puVar17 + -0xa58) = ar4;
            pdVar6 = (double *)0x12c;
            *(int *)(*(int *)((int)puVar17 + -0xa58) + 300) =
                 *(int *)(*(int *)((int)puVar17 + -0xa58) + 300) + 1;
            *(undefined4 *)(ar4 + 700) = 1;
            *(undefined4 *)(ar4 + 0x40) = 5;
          }
          else if (iVar15 != 2) {
            if (iVar15 == 3) {
              CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,0x2e8,3);
              iVar16 = 0;
            }
            break;
          }
          Vec3_ctor_copy((undefined1 *)((int)puVar17 + -0x63c),ar4 + 0x54,pdVar6,pcVar10);
          pcVar10 = (code *)((int)puVar17 + -0x63c);
          uVar2 = FUN_8c04e0e0(ar4,*(undefined4 *)ar5[1],ar4 + 0x248,pcVar10);
          *(undefined4 *)((int)puVar17 + -0x8f0) = uVar2;
          *(uint *)((int)puVar17 + -0x690) = (uint)(*(int *)((int)puVar17 + -0x8f0) == 0);
          pcVar4 = (code *)0xffffffff;
          Vec3_dtor((undefined1 *)((int)puVar17 + -0x63c),0xffffffff,uVar2,pcVar10);
          if (*(int *)((int)puVar17 + -0x690) != 0) {
            pcVar10 = (code *)0x0;
            uVar2 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0,0);
            pcVar4 = s_CAnimBody_SetFrame_033e6e;
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,uVar2,pcVar10);
            *(undefined4 *)(ar4 + 0x40) = 5;
            *(undefined4 *)(ar4 + 0x218) = 0;
            *(int *)((int)puVar17 + -0xa5c) = ar4;
            *(int *)(*(int *)((int)puVar17 + -0xa5c) + 300) =
                 *(int *)(*(int *)((int)puVar17 + -0xa5c) + 300) + 1;
          }
          if (*(int *)(ar4 + 0x290) == 1) {
            *(int *)((int)puVar17 + -0xa60) = ar4;
            pcVar10 = (code *)0xfffffffb;
            *(byte *)(*(int *)((int)puVar17 + -0xa60) + 0x1fc) =
                 *(byte *)(*(int *)((int)puVar17 + -0xa60) + 0x1fc) & 0xfb;
            FUN_8c030f2c(ar4 + 0x1fc,pcVar4,0x1fc,0xfffffffb);
          }
        }
      }
      break;
    case 0x30:
      *(undefined4 *)(ar4 + 0x178) = 1;
      *(undefined4 *)(ar4 + 700) = 0;
      *(int *)((int)puVar17 + -0xa28) = ar4;
      iVar15 = *(int *)((int)puVar17 + -0xa28);
      pcVar10 = *(code **)(*(int *)((int)puVar17 + -0xa28) + 0x284);
      *(code **)(iVar15 + 0x284) = pcVar10 + 1;
      switch(*(undefined4 *)(ar4 + 300)) {
      case 0:
        uVar9 = 0x1a;
        uVar2 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
        *(undefined4 *)((int)puVar17 + -0x8b4) = uVar2;
        iVar15 = *(int *)((int)puVar17 + -0x8b4);
        if (iVar15 != 6) {
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar9,s_CAnimBody_SetFrame_033e6e,iVar15);
        }
        iVar11 = ar4 + 0xb0;
        CAnimBody_AdvanceFrame_wrapper(iVar11,uVar9,iVar11,iVar15);
        pcVar10 = (code *)*ar5;
        uVar2 = (**(code **)(*(int *)pcVar10 + 0x34))(pcVar10,uVar9,iVar11,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x8b8) = uVar2;
        if (*(int *)((int)puVar17 + -0x8b8) == 1) {
          (**(code **)(*(int *)*ar5 + 0x38))((int *)*ar5,0,iVar11,pcVar10);
          *(int *)((int)puVar17 + -0xa2c) = ar4;
          pcVar10 = *(code **)(*(int *)((int)puVar17 + -0xa2c) + 300);
          *(code **)(*(int *)((int)puVar17 + -0xa2c) + 300) = pcVar10 + 1;
        }
        break;
      case 1:
        Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x59c),iVar15,
                      (undefined1 *)((int)puVar17 + -0x59c),pcVar10);
        pcVar10 = (code *)((int)puVar17 + -0x59c);
        uVar9 = *(undefined4 *)ar5[1];
        uVar2 = FUN_8c04e0e0(ar4,*(undefined4 *)ar5[1],uVar9,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x8bc) = uVar2;
        *(uint *)((int)puVar17 + -0x684) = (uint)(*(int *)((int)puVar17 + -0x8bc) == 0);
        Vec3_dtor((undefined1 *)((int)puVar17 + -0x59c),0xffffffff,uVar9,pcVar10);
        if (*(int *)((int)puVar17 + -0x684) != 0) {
          uVar2 = 0x1a;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
          pcVar10 = (code *)0xb0;
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar4 + 0xb0,0xb0);
          *(int *)((int)puVar17 + -0xa30) = ar4;
          *(undefined4 *)((int)puVar17 + -0xa6c) = 300;
          *(int *)(*(int *)((int)puVar17 + -0xa6c) + *(int *)((int)puVar17 + -0xa30)) =
               *(int *)(*(int *)((int)puVar17 + -0xa30) + 300) + 1;
        }
        break;
      case 2:
        uVar7 = 0;
        *(undefined4 *)((int)puVar17 + -0xa68) = 0x1a;
        uVar12 = *(undefined4 *)((int)puVar17 + -0xa68);
        *(undefined4 *)((int)puVar17 + -0xa64) = 0xb0;
        uVar9 = s_CAnimBody_SetAnimation_033a94
                          (ar4 + *(int *)((int)puVar17 + -0xa64),uVar12,0xffffffff,0);
        uVar18 = SUB84(dVar19,0);
        *(undefined4 *)((int)puVar17 + -0x8c0) = uVar9;
        if (*(int *)((int)puVar17 + -0x8c0) != 6) {
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar12,s_CAnimBody_SetFrame_033e6e,uVar7);
        }
        uVar9 = 0xb0;
        iVar15 = ar4 + 0xb0;
        CAnimBody_AdvanceFrame_wrapper(iVar15,0xb0,iVar15,uVar7);
        pcVar10 = (code *)(**(code **)(*(int *)*ar5 + 0x34))((int *)*ar5,uVar9,iVar15,uVar7);
        *(code **)((int)puVar17 + -0x8c4) = pcVar10;
        if (*(int *)((int)puVar17 + -0x8c4) == 1) {
          (**(code **)(*(int *)*ar5 + 0x38))((int *)*ar5,0,iVar15,pcVar10);
          *(int *)((int)puVar17 + -0xa34) = ar4;
          *(int *)(*(int *)((int)puVar17 + -0xa34) + 300) =
               *(int *)(*(int *)((int)puVar17 + -0xa34) + 300) + 1;
          if (in_FPSCR_SZ != '\0') {
            in_xd4 = 3.75058611530083e-312;
          }
          uVar9 = 0x1d;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0);
          uVar23 = 0;
          iVar15 = ar4 + 0xb0;
          pcVar10 = s_CAnimBody_SetFrame_033e6e;
          s_CAnimBody_SetFrame_033e6e(iVar15,uVar9,s_CAnimBody_SetFrame_033e6e,iVar15);
          uVar9 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x1d,pcVar10,iVar15);
          *(undefined4 *)((int)puVar17 + -0x8c8) = uVar9;
          pcVar10 = (code *)0x278;
          if (in_FPSCR_PR == '\0') {
            dVar24 = (double)CONCAT44((float)*(int *)((int)puVar17 + -0x8c8),uVar18);
          }
          else {
            dVar24 = (double)*(int *)((int)puVar17 + -0x8c8);
          }
          dVar21 = (double)((ulonglong)uVar23 << 0x20);
          fVar20 = (float)((ulonglong)dVar24 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar27 = fVar20 < 0.0;
          }
          else {
            bVar27 = dVar24 < dVar21;
          }
          dVar19 = dVar24;
          if (bVar27) {
            if (in_FPSCR_SZ == '\0') {
              dVar21 = (double)CONCAT44(0x4f800000,fVar20);
            }
            else {
              dVar21 = 24189261021184.0;
              in_xd4 = dVar24;
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = (float)((ulonglong)dVar21 >> 0x20);
              dVar21 = (double)CONCAT44(fVar20,SUB84(dVar21,0) + fVar20);
            }
            else {
              dVar21 = dVar21 + dVar21;
            }
            dVar19 = in_xd4;
            if (in_FPSCR_SZ == '\0') {
              dVar19 = (double)CONCAT44(SUB84(dVar21,0),SUB84(dVar24,0));
            }
          }
          if (in_FPSCR_SZ == '\0') {
            dVar24 = (double)CONCAT44(0x42b60000,uVar2);
            dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                      (int)((ulonglong)dVar19 >> 0x20));
            dVar19 = in_xd4;
          }
          else {
            dVar24 = 3.5717906350717384e+163;
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = SUB84(dVar21,0) / (float)((ulonglong)dVar24 >> 0x20);
          }
          else {
            fVar20 = SUB84(dVar21 / dVar24,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + 0x278) = fVar20;
          }
          else {
            *(double *)(ar4 + 0x278) = dVar19;
          }
        }
        break;
      case 3:
        uVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar15,300,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x8cc) = uVar2;
        if (*(int *)((int)puVar17 + -0x8cc) == 1) {
          *(int *)((int)puVar17 + -0xa38) = ar4;
          *(int *)(*(int *)((int)puVar17 + -0xa38) + 300) =
               *(int *)(*(int *)((int)puVar17 + -0xa38) + 300) + 1;
          pcVar10 = (code *)0x0;
          uVar9 = 0xffffffff;
          uVar2 = 0x1a;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,pcVar10);
        }
        break;
      case 4:
        uVar12 = 0;
        uVar9 = 0x1a;
        uVar2 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
        *(undefined4 *)((int)puVar17 + -0x8d0) = uVar2;
        iVar15 = *(int *)((int)puVar17 + -0x8d0);
        if (iVar15 != 6) {
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar9,iVar15,uVar12);
        }
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar9,iVar15,uVar12);
        pcVar10 = (code *)(**(code **)(*(int *)*ar5 + 0x34))((int *)*ar5,uVar9,iVar15,uVar12);
        *(code **)((int)puVar17 + -0x8d4) = pcVar10;
        if (*(int *)((int)puVar17 + -0x8d4) == 1) {
          (**(code **)(*(int *)*ar5 + 0x38))((int *)*ar5,0,iVar15,pcVar10);
          *(int *)((int)puVar17 + -0xa3c) = ar4;
          *(int *)(*(int *)((int)puVar17 + -0xa3c) + 300) =
               *(int *)(*(int *)((int)puVar17 + -0xa3c) + 300) + 1;
        }
        break;
      case 5:
        Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x5ac),iVar15,300,pcVar10);
        pcVar10 = (code *)((int)puVar17 + -0x5ac);
        uVar9 = *(undefined4 *)ar5[1];
        uVar2 = FUN_8c04e0e0(ar4,*(undefined4 *)ar5[1],uVar9,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x8d8) = uVar2;
        *(uint *)((int)puVar17 + -0x688) = (uint)(*(int *)((int)puVar17 + -0x8d8) == 0);
        Vec3_dtor((undefined1 *)((int)puVar17 + -0x5ac),0xffffffff,uVar9,pcVar10);
        if (*(int *)((int)puVar17 + -0x688) != 0) {
          *(int *)((int)puVar17 + -0xa40) = ar4;
          *(int *)(*(int *)((int)puVar17 + -0xa40) + 300) =
               *(int *)(*(int *)((int)puVar17 + -0xa40) + 300) + 1;
        }
        break;
      case 6:
        uVar9 = 0xffffffff;
        uVar2 = 0x1a;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
        pcVar10 = (code *)0xb0;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,0xb0);
        piVar1 = (int *)*ar5;
        uVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,uVar2,piVar1,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x8dc) = uVar2;
        if (*(int *)((int)puVar17 + -0x8dc) == 1) {
          (**(code **)(*(int *)*ar5 + 0x38))((int *)*ar5,0,piVar1,pcVar10);
          uVar2 = 0x26;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x26,0xffffffff,0);
          pcVar10 = (code *)(ar4 + 0xb0);
          s_CAnimBody_SetFrame_033e6e(pcVar10,uVar2,0xb0,pcVar10);
          *(int *)((int)puVar17 + -0xa44) = ar4;
          *(int *)(*(int *)((int)puVar17 + -0xa44) + 300) =
               *(int *)(*(int *)((int)puVar17 + -0xa44) + 300) + 1;
        }
        break;
      case 7:
        if (*(int *)(ar4 + 0x128) == 4) {
          s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar15,4,pcVar10);
        }
        else {
          s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar15,*(int *)(ar4 + 0x128),pcVar10);
        }
        *(int *)((int)puVar17 + -0xa48) = ar4;
        *(undefined4 *)((int)puVar17 + -0xa70) = *(undefined4 *)((int)puVar17 + -0xa48);
        pcVar10 = *(code **)((int)puVar17 + -0xa48);
        *(int *)(*(int *)((int)puVar17 + -0xa70) + 300) = *(int *)(pcVar10 + 300) + 1;
        break;
      case 8:
        uVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,300,pcVar10);
        *(undefined4 *)((int)puVar17 + -0x8e0) = uVar2;
        if (*(int *)((int)puVar17 + -0x8e0) == 1) {
          *(undefined4 *)(ar4 + 0x40) = 5;
          *(int *)((int)puVar17 + -0xa4c) = ar4;
          pcVar10 = *(code **)((int)puVar17 + -0xa4c);
          *(int *)(pcVar10 + 300) = *(int *)(*(int *)((int)puVar17 + -0xa4c) + 300) + 1;
        }
        break;
      case 9:
        Vec3_ctor_xyz((undefined1 *)((int)puVar17 + -0x5bc),iVar15,300,pcVar10);
        pcVar10 = (code *)FUN_8c04e0e0(ar4,*(undefined4 *)ar5[1],*(undefined4 *)ar5[1],
                                       (undefined1 *)((int)puVar17 + -0x5bc));
        *(code **)((int)puVar17 + -0x8e4) = pcVar10;
        *(uint *)((int)puVar17 + -0x68c) = (uint)(*(int *)((int)puVar17 + -0x8e4) == 0);
        Vec3_dtor((undefined1 *)((int)puVar17 + -0x5bc),0xffffffff,Vec3_dtor,pcVar10);
        if (*(int *)((int)puVar17 + -0x68c) != 0) {
          uVar12 = 0;
          uVar9 = 0xffffffff;
          uVar2 = 0x1a;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,uVar12);
          *(int *)((int)puVar17 + -0xa50) = ar4;
          pcVar10 = *(code **)(*(int *)((int)puVar17 + -0xa50) + 300);
          *(code **)(*(int *)((int)puVar17 + -0xa50) + 300) = pcVar10 + 1;
        }
        break;
      case 10:
        pcVar10 = (code *)0x0;
        uVar12 = 0xffffffff;
        uVar9 = 0x1a;
        uVar2 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
        *(undefined4 *)((int)puVar17 + -0x8e8) = uVar2;
        if (*(int *)((int)puVar17 + -0x8e8) != 6) {
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar9,uVar12,pcVar10);
        }
        *(undefined4 *)(ar4 + 0x178) = 0;
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar9,uVar12,pcVar10);
        *(undefined4 *)(ar4 + 0x214) = 1;
        *(undefined4 *)(ar4 + 700) = 0;
      }
    }
  }
  else {
override_jmp_8c03f9a2_case_7:
    iVar16 = 0;
    pcVar10 = FUN_8c031c74;
    FUN_8c031c74(ar4,(undefined1 *)((int)puVar17 + -0x30),*(undefined4 *)ar5[1],FUN_8c031c74);
  }
  iVar15 = *(int *)(ar4 + 0x124);
  if ((iVar15 != 2) && (*(int *)(ar4 + 0x124) != 0x14)) {
    FUN_8c031ab4(ar4,*(undefined4 *)(ar5[1] + 4),iVar15,pcVar10);
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,iVar15,pcVar10);
  }
  pcVar10 = Vec3_assign;
  Vec3_assign(&DAT_8c2803a8,*(undefined4 *)ar5[1],iVar15,Vec3_assign);
  *(int *)((int)puVar17 + -0x650) = iVar16;
  _DAT_8c2803b8 = pcVar14;
  Vec3_dtor((undefined1 *)((int)puVar17 + -0xa8),0xffffffff,(undefined1 *)((int)puVar17 + -0xa8),
            pcVar10);
  uVar2 = 0xffffffff;
  pcVar10 = free_if_nonnull_wrap_102790;
  free_if_nonnull_wrap_102790
            ((undefined1 *)((int)puVar17 + -0x98),0xffffffff,0xffffffff,free_if_nonnull_wrap_102790)
  ;
  Vec3_dtor((undefined1 *)((int)puVar17 + -0x8c),0xffffffff,uVar2,pcVar10);
  Vec3_dtor((undefined1 *)((int)puVar17 + -0x7c),0xffffffff,uVar2,pcVar10);
  free_if_nonnull_wrap_102790((undefined1 *)((int)puVar17 + -0x6c),0xffffffff,uVar2,pcVar10);
  Vec3_dtor((undefined1 *)((int)puVar17 + -0x60),0xffffffff,uVar2,pcVar10);
  uVar2 = 0xffffffff;
  pcVar10 = Vec3_dtor;
  Vec3_dtor((undefined1 *)((int)puVar17 + -0x50),0xffffffff,Vec3_dtor,0xffffffff);
  Vec3_dtor((undefined1 *)((int)puVar17 + -0x40),0xffffffff,pcVar10,uVar2);
  Vec3_dtor((undefined1 *)((int)puVar17 + -0x30),0xffffffff,pcVar10,uVar2);
  return *(undefined4 *)((int)puVar17 + -0x650);
}


