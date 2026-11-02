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
  undefined *puVar4;
  undefined1 *puVar5;
  char cStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 auStack_28 [36];
  
  puVar5 = auStack_28;
  iVar2 = 0x10;
  puVar4 = PTR_DAT_8c030398;
  do {
    puVar3 = puVar4 + 1;
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 2;
    puVar5[1] = *puVar3;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  cStack_2c = *PTR_DAT_8c03039c;
  uStack_2b = PTR_DAT_8c03039c[1];
  uStack_2a = PTR_DAT_8c03039c[2];
  uStack_29 = PTR_DAT_8c03039c[3];
  (*(code *)PTR_strcpy_8c0303a4)(auStack_28,ar4 + DAT_8c0303a0,ar6,ar7);
  cStack_2c = cStack_2c + *(char *)(DAT_8c0303a8 + ar4);
  (*(code *)PTR_FUN_8c0303ac)(auStack_28,&cStack_2c,ar6,ar7);
  (*(code *)PTR_strcpy_8c0303a4)(ar4,auStack_28,ar6,ar7);
  *(undefined4 *)(DAT_8c0303b0 + ar4) = 4;
  (*(code *)PTR_strcpy_8c0303a4)(ar4 + 0x20,PTR_s_GRAPHICS_COMMON_8c0303b4 + 0x10,ar6,ar7);
  uVar1 = (*(code *)PTR_strcpy_8c0303a4)(ar4 + 0x40,PTR_s_GRAPHICS_COMMON_8c0303b4 + 0x1e,ar6,ar7);
  return uVar1;
}



/* FUN_8c0303b8 @ 8c0303b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0303b8(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined4 in_stack_00000000;
  char cStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined4 uStack_3c;
  int iStack_38;
  undefined1 auStack_34 [36];
  
  puVar5 = auStack_34;
  iVar2 = 0x10;
  puVar4 = PTR_DAT_8c0304fc;
  do {
    puVar3 = puVar4 + 1;
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 2;
    puVar5[1] = *puVar3;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  cStack_4c = *PTR_DAT_8c030500;
  uStack_4b = PTR_DAT_8c030500[1];
  uStack_4a = PTR_DAT_8c030500[2];
  uStack_49 = PTR_DAT_8c030500[3];
  iVar2 = ar6;
  uVar1 = ar7;
  if (0 < ar6) {
    iVar2 = 0;
    (*(code *)PTR_FUN_8c030504)(ar4,ar5,0,ar7);
  }
  if ((((*(int *)(DAT_8c030508 + ar4) == -1) &&
       (iStack_38 = (*(code *)PTR_FUN_8c03050c)(ar4,ar5,iVar2,uVar1), iStack_38 == 0)) &&
      (*(int *)(DAT_8c030510 + ar4) == 0)) &&
     ((*(int *)(DAT_8c030514 + ar4) == 0 && (*(int *)(ar4 + 0x60) <= ar6)))) {
    uStack_3c = (*(code *)PTR_s_EVENT_ROCK_PUSH_030ac6_8c030518)(ar4,ar7,iVar2,uVar1);
    *(undefined4 *)(DAT_8c03051c + ar4) = uStack_3c;
    *(undefined4 *)(DAT_8c030520 + ar4) = ar5;
    *(undefined4 *)(DAT_8c030510 + ar4) = 1;
    *(int *)(ar4 + 0x60) = ar6;
    (*(code *)PTR_strcpy_8c030528)(auStack_34,ar4 + DAT_8c030524,iVar2,uVar1);
    cStack_4c = cStack_4c + *(char *)(DAT_8c03052c + ar4);
    (*(code *)PTR_FUN_8c030530)(auStack_34,&cStack_4c,iVar2,uVar1);
    (*(code *)PTR_strcpy_8c030528)(ar4,auStack_34,iVar2,uVar1);
    (*(code *)PTR_strcpy_8c030528)(ar4 + 0x20,ar7,iVar2,uVar1);
    (*(code *)PTR_strcpy_8c030528)(ar4 + 0x40,in_stack_00000000,iVar2,uVar1);
    uVar1 = (*(code *)PTR_s_EVENT_ROCK_PUSH_030ac6_8c030518)(ar4,ar7,iVar2,uVar1);
    *(undefined4 *)(DAT_8c03051c + ar4) = uVar1;
    *(undefined4 *)
     (DAT_8c030534 + *(int *)(DAT_8c030520 + ar4) * 0x14 + ar4 + *(int *)(ar4 + 0x60) * 4) = 1;
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

undefined4 FUN_8c030568(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined4 in_stack_00000000;
  char cStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined4 uStack_3c;
  int iStack_38;
  undefined1 auStack_34 [36];
  
  puVar5 = auStack_34;
  iVar2 = 0x10;
  puVar4 = PTR_DAT_8c03069c;
  do {
    puVar3 = puVar4 + 1;
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 2;
    puVar5[1] = *puVar3;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  cStack_4c = *PTR_DAT_8c0306a0;
  uStack_4b = PTR_DAT_8c0306a0[1];
  uStack_4a = PTR_DAT_8c0306a0[2];
  uStack_49 = PTR_DAT_8c0306a0[3];
  if ((((*(int *)(DAT_8c0306a4 + ar4) == -1) &&
       (iVar2 = ar6, uVar1 = ar7, iStack_38 = (*(code *)PTR_FUN_8c0306a8)(ar4,ar5,ar6,ar7),
       iStack_38 == 0)) && (*(int *)(DAT_8c0306ac + ar4) == 0)) &&
     ((*(int *)(DAT_8c0306b0 + ar4) == 0 && (*(int *)(ar4 + 0x60) <= ar6)))) {
    uStack_3c = (*(code *)PTR_s_EVENT_ROCK_PUSH_030ac6_8c0306b4)(ar4,ar7,iVar2,uVar1);
    *(undefined4 *)(DAT_8c0306b8 + ar4) = uStack_3c;
    *(undefined4 *)(DAT_8c0306bc + ar4) = ar5;
    *(undefined4 *)(DAT_8c0306ac + ar4) = 2;
    *(int *)(ar4 + 0x60) = ar6;
    (*(code *)PTR_strcpy_8c0306c4)(auStack_34,ar4 + DAT_8c0306c0,iVar2,uVar1);
    cStack_4c = cStack_4c + *(char *)(DAT_8c0306c8 + ar4);
    (*(code *)PTR_FUN_8c0306cc)(auStack_34,&cStack_4c,iVar2,uVar1);
    (*(code *)PTR_strcpy_8c0306c4)(ar4,auStack_34,iVar2,uVar1);
    (*(code *)PTR_strcpy_8c0306c4)(ar4 + 0x20,ar7,iVar2,uVar1);
    (*(code *)PTR_strcpy_8c0306c4)(ar4 + 0x40,in_stack_00000000,iVar2,uVar1);
    uVar1 = (*(code *)PTR_s_EVENT_ROCK_PUSH_030ac6_8c0306b4)(ar4,ar7,iVar2,uVar1);
    *(undefined4 *)(DAT_8c0306b8 + ar4) = uVar1;
    *(undefined4 *)
     (DAT_8c0306d0 + *(int *)(DAT_8c0306bc + ar4) * 0x14 + ar4 + *(int *)(ar4 + 0x60) * 4) = 1;
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
  undefined4 a7;
  undefined4 uVar7;
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
    a7 = ar7;
    uVar1 = (*(code *)PTR_s_EVENT_ROCK_PUSH_030ac6_8c03084c)(ar4,ar7,ar6,ar7);
    *(undefined4 *)(DAT_8c030850 + ar4) = uVar1;
    if (*(int *)(DAT_8c030854 + ar4) == -1) {
      if (*(int *)(DAT_8c030854 + ar4) == -1) {
        (*(code *)PTR_FUN_8c03085c)(ar4,0,uVar2,a7);
        (*(code *)PTR_FUN_8c030858)(ar4,ar5,0,a7);
        uVar7 = (*(code *)PTR_FUN_8c030860)(ar4,ar5,ar6,ar7);
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
      (*(code *)PTR_FUN_8c030858)(ar4,ar5,0,a7);
      (*(code *)PTR_FUN_8c03085c)(ar4,0,uVar7,a7);
      uVar2 = ar6;
      uVar7 = (*(code *)PTR_FUN_8c030860)(ar4,ar5,ar6,ar7);
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

undefined4 FUN_8c03087c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined4 a7;
  undefined4 in_stack_00000000;
  char cStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [36];
  
  puVar5 = auStack_2c;
  iVar2 = 0x10;
  puVar4 = PTR_DAT_8c030994;
  do {
    puVar3 = puVar4 + 1;
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 2;
    puVar5[1] = *puVar3;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  cStack_40 = *PTR_DAT_8c030998;
  uStack_3f = PTR_DAT_8c030998[1];
  uStack_3e = PTR_DAT_8c030998[2];
  uStack_3d = PTR_DAT_8c030998[3];
  if (((*(int *)(DAT_8c03099c + ar4) == -1) && (*(int *)(DAT_8c0309a0 + ar4) == 0)) &&
     (*(int *)(DAT_8c0309a4 + ar4) == 0)) {
    uVar1 = ar6;
    a7 = ar7;
    uStack_30 = (*(code *)PTR_s_EVENT_ROCK_PUSH_030ac6_8c0309a8)(ar4,ar7,ar6,ar7);
    *(undefined4 *)(DAT_8c0309ac + ar4) = uStack_30;
    *(undefined4 *)(DAT_8c0309b0 + ar4) = ar5;
    *(undefined4 *)(DAT_8c0309a0 + ar4) = 2;
    *(undefined4 *)(ar4 + 0x60) = ar6;
    (*(code *)PTR_strcpy_8c0309b8)(auStack_2c,ar4 + DAT_8c0309b4,uVar1,a7);
    cStack_40 = cStack_40 + *(char *)(DAT_8c0309bc + ar4);
    (*(code *)PTR_FUN_8c0309c0)(auStack_2c,&cStack_40,uVar1,a7);
    (*(code *)PTR_strcpy_8c0309b8)(ar4,auStack_2c,uVar1,a7);
    (*(code *)PTR_strcpy_8c0309b8)(ar4 + 0x20,ar7,uVar1,a7);
    (*(code *)PTR_strcpy_8c0309b8)(ar4 + 0x40,in_stack_00000000,uVar1,a7);
    iStack_38 = *(int *)(DAT_8c0309b0 + ar4);
    iStack_3c = *(int *)(ar4 + 0x60);
    *(undefined4 *)(DAT_8c0309c4 + iStack_38 * 0x14 + ar4 + iStack_3c * 4) = 1;
    uVar1 = (*(code *)PTR_s_EVENT_ROCK_PUSH_030ac6_8c0309a8)(ar4,ar7,uVar1,a7);
    *(undefined4 *)(DAT_8c0309ac + ar4) = uVar1;
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
  undefined *puVar4;
  undefined1 *puVar5;
  char cStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 auStack_2b [39];
  
  puVar5 = auStack_2b;
  iVar2 = 0x10;
  puVar4 = PTR_DAT_8c030a9c;
  do {
    puVar3 = puVar4 + 1;
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 2;
    puVar5[1] = *puVar3;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  cStack_2f = *PTR_DAT_8c030aa0;
  uStack_2e = PTR_DAT_8c030aa0[1];
  uStack_2d = PTR_DAT_8c030aa0[2];
  uStack_2c = PTR_DAT_8c030aa0[3];
  if (((*(int *)(DAT_8c030aa4 + ar4) == -1) && (*(int *)(DAT_8c030aa8 + ar4) == 0)) &&
     (*(int *)(DAT_8c030aac + ar4) == 0)) {
    *(undefined4 *)(ar4 + 0x60) = 0;
    if ((char)ar5 == '\x01') {
      (*(code *)PTR_strcpy_8c030ab4)(ar4,PTR_s_GRAPHICS_COMMON_8c030ab0 + 0x20,ar6,ar7);
    }
    else {
      (*(code *)PTR_strcpy_8c030ab4)(auStack_2b,ar4 + DAT_8c030ab8,ar6,ar7);
      cStack_2f = cStack_2f + *(char *)(DAT_8c030abc + ar4);
      (*(code *)PTR_FUN_8c030ac0)(auStack_2b,&cStack_2f,ar6,ar7);
      (*(code *)PTR_strcpy_8c030ab4)(ar4,auStack_2b,ar6,ar7);
    }
    (*(code *)PTR_strcpy_8c030ab4)(ar4 + 0x20,PTR_s_GRAPHICS_COMMON_8c030ab0 + 0x27,ar6,ar7);
    (*(code *)PTR_strcpy_8c030ab4)(ar4 + 0x40,PTR_s_GRAPHICS_COMMON_8c030ab0 + 0x2c,ar6,ar7);
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

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c030d58(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c030de0)(PTR_DAT_8c030ddc,ar5,ar6,ar7);
  puVar4 = PTR_Vec3_dtor_8c030de8;
  uVar2 = DAT_8c030de4;
  (*(code *)PTR_global_list_push_8c030dec)(uVar1,PTR_Vec3_dtor_8c030de8,DAT_8c030de4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c030de0)(PTR_DAT_8c030df0,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c030de8;
  uVar2 = DAT_8c030df4;
  (*(code *)PTR_global_list_push_8c030dec)(uVar1,PTR_Vec3_dtor_8c030de8,DAT_8c030df4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c030de0)(PTR_DAT_8c030df8,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c030de8;
  uVar2 = DAT_8c030dfc;
  (*(code *)PTR_global_list_push_8c030dec)(uVar1,PTR_Vec3_dtor_8c030de8,DAT_8c030dfc,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c030de0)(PTR_DAT_8c030e00,puVar4,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c030dec)(uVar2,PTR_Vec3_dtor_8c030de8,DAT_8c030e04,ar7);
  puVar3 = DAT_8c030e0c;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c030e08 = *(undefined4 *)DAT_8c030e0c;
  }
  else {
    *(undefined8 *)PTR_DAT_8c030e08 = *DAT_8c030e0c;
  }
  return puVar3;
}



/* FUN_8c030e10 @ 8c030e10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c030e10(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c030e30)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0xc) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xc) = (ulonglong)extraout_fr1;
  }
  return ar4;
}



/* FUN_8c030e34 @ 8c030e34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c030e34(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined8 in_xd4;
  undefined8 in_xd6;
  undefined8 in_xd8;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = in_fr4;
    *(undefined4 *)((int)ar4 + 4) = in_fr5;
    *(undefined4 *)(ar4 + 1) = in_fr6;
    *(undefined4 *)((int)ar4 + 0xc) = in_fr7;
    *(undefined4 *)(ar4 + 2) = in_fr8;
    *(undefined4 *)((int)ar4 + 0x14) = in_fr9;
  }
  else {
    *ar4 = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)((int)ar4 + 4) = in_xd4;
    ar4[1] = CONCAT44(in_fr6,in_fr7);
    *(undefined8 *)((int)ar4 + 0xc) = in_xd6;
    ar4[2] = CONCAT44(in_fr8,in_fr9);
    *(undefined8 *)((int)ar4 + 0x14) = in_xd8;
  }
  return ar4;
}



/* FUN_8c030e5c @ 8c030e5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c030e5c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[6] = 0;
  ar4[3] = 0;
  ar4[4] = 3;
  if (in_FPSCR_SZ == '\0') {
    ar4[5] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 5) = (ulonglong)in_fr1;
  }
  ar4[7] = 0;
  if (in_FPSCR_SZ == '\0') {
    ar4[8] = 0;
    ar4[9] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 8) = (ulonglong)in_fr1;
    *(ulonglong *)(ar4 + 9) = CONCAT44(0x3f800000,in_fr1);
  }
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

int FUN_8c0310c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_fr1;
  undefined4 uVar2;
  ulonglong uVar3;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c031248)(ar4 + 0x14,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c031250)(ar4 + DAT_8c03124c,ar4 + 0x14,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44((undefined4)DAT_8c031254,in_fr1);
    *(undefined4 *)(ar4 + 0x24) = (undefined4)DAT_8c031254;
  }
  else {
    uVar3 = CONCAT44(DAT_8c031254._4_4_,(undefined4)DAT_8c031254);
    *(ulonglong *)(ar4 + 0x24) = uVar3;
  }
  uVar2 = (undefined4)uVar3;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x28) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x28) = uVar3 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,uVar2);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x30) = 0x3f800000;
    *(undefined4 *)(ar4 + 0x34) = DAT_8c031254._4_4_;
    uVar3 = CONCAT44(DAT_8c03125c,uVar2);
    *(undefined4 *)(ar4 + 0x38) = DAT_8c03125c;
  }
  else {
    *(undefined8 *)(ar4 + 0x30) = CONCAT44(0x3f800000,uVar2);
    *(ulonglong *)(ar4 + 0x34) = CONCAT44(DAT_8c03125c,DAT_8c031254._4_4_);
    uVar3 = CONCAT44(DAT_8c031260,DAT_8c03125c);
    *(ulonglong *)(ar4 + 0x38) = uVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x3c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x3c) = uVar3 & 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0;
  *(undefined4 *)(DAT_8c031260 + ar4) = 0;
  *(undefined4 *)(DAT_8c031264 + ar4) = 0;
  *(undefined4 *)(DAT_8c031268 + ar4) = 0;
  *(undefined4 *)(DAT_8c03126c + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44((undefined4)DAT_8c031274,(int)uVar3);
    *(undefined4 *)(ar4 + DAT_8c031270) = (undefined4)DAT_8c031274;
  }
  else {
    uVar3 = CONCAT44(DAT_8c031274._4_4_,(undefined4)DAT_8c031274);
    *(ulonglong *)(ar4 + DAT_8c031270) = uVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x48) = CONCAT44(0x3f800000,(int)uVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c031274._4_4_) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c031274._4_4_) = uVar3 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c03127c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c03127c) = uVar3 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c031280) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c031280) = uVar3 & 0xffffffff;
  }
  *(undefined4 *)(DAT_8c031284 + ar4) = 0;
  *(undefined4 *)(ar4 + 100) = 3;
  *(undefined4 *)(ar4 + 0x68) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x7c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x7c) = uVar3 & 0xffffffff;
  }
  *(undefined4 *)(DAT_8c031288 + ar4) = 0;
  *(undefined4 *)(DAT_8c03128c + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c031290) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c031290) = uVar3 & 0xffffffff;
  }
  *(undefined1 *)(DAT_8c031294 + ar4) = 1;
  *(undefined4 *)(DAT_8c031298 + ar4) = 1;
  *(undefined4 *)(DAT_8c03129c + ar4) = 0;
  *(undefined4 *)(DAT_8c0312a0 + ar4) = 0;
  *(undefined4 *)(DAT_8c0312a4 + ar4) = 0;
  *(undefined4 *)(DAT_8c0312a8 + ar4) = 0xffffffff;
  *(undefined4 *)(DAT_8c0312ac + ar4) = 0xffffffff;
  *(int *)(DAT_8c0312b0 + ar4) = ar4 + DAT_8c0312b4;
  *(int *)(DAT_8c0312b8 + ar4) = ar4 + DAT_8c0312ac;
  *(undefined4 *)(DAT_8c0312bc + ar4) = 0;
  *(undefined4 *)(DAT_8c0312c0 + ar4) = 2;
  *(undefined4 *)(DAT_8c0312c4 + ar4) = 0;
  (*(code *)PTR_FUN_8c0312d0)(ar4 + DAT_8c0312cc,PTR_DAT_8c0312c8,ar6,ar7);
  *(undefined4 *)(DAT_8c0312d4 + ar4) = 0;
  *(undefined4 *)(DAT_8c0312d8 + ar4) = 0;
  *(undefined4 *)(DAT_8c0312dc + ar4) = 0;
  *(undefined4 *)(DAT_8c0312e0 + ar4) = 0;
  *(undefined4 *)(DAT_8c0312e4 + ar4) = 0;
  *(undefined4 *)(DAT_8c0312e8 + ar4) = 0;
  *(undefined4 *)(DAT_8c0312ec + ar4) = 0;
  iVar1 = DAT_8c0312f0;
  *(undefined4 *)(DAT_8c0312f0 + ar4) = 0;
  return iVar1;
}



/* Class_129cbc_m0_0312f4 @ 8c0312f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_129cbc_m0_0312f4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0313f0;
    (*(code *)PTR_Vec3_dtor_8c0313f8)((int)ar4 + DAT_8c0313f4,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c031400)((int)ar4 + DAT_8c0313fc,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0313f8)((int)ar4 + DAT_8c031404,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c03140c)((int)ar4 + DAT_8c031408,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0313f8)((int)ar4 + DAT_8c031410,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c031400)((int)ar4 + DAT_8c031414,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c031400)((int)ar4 + DAT_8c031418,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0313f8)((int)ar4 + DAT_8c03141c,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_033978_8c031424)((int)ar4 + DAT_8c031420,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0313f8)((int)ar4 + DAT_8c031428,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0313f8)((int)ar4 + DAT_8c03142c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0313f8)(ar4 + 0x1b,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0313f8)(ar4 + 0x15,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0313f8)(ar4 + 5,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0313f8)(ar4 + 1,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c031430)(ar4,a5,ar6,ar7);
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
  undefined4 a7;
  
  iVar1 = (*(code *)PTR_get_field_10_031590_8c0314d4)(ar4 + DAT_8c0314d0,ar5,ar6,ar7);
  a7 = 0;
  uVar3 = 0xffffffff;
  iVar1 = iVar1 + -1;
  iVar2 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0314dc)
                    (ar4 + DAT_8c0314d0,iVar1,0xffffffff,0);
  if (iVar2 != 6) {
    iVar1 = (*(code *)PTR_get_field_1c_026dd8_8c0314e0)(ar4 + DAT_8c0314d0,iVar1,uVar3,a7);
    (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c0314e4)(ar4 + DAT_8c0314d0,iVar1,uVar3,a7);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0314f0)(ar4 + DAT_8c0314d0,iVar1,uVar3,a7);
  }
  uVar3 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0314f4)(ar4 + DAT_8c0314d0,iVar1,uVar3,a7)
  ;
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
  undefined1 *a5;
  undefined1 auStack_1c [8];
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int iStack_8;
  
  a5 = ar5;
  puStack_10 = ar5;
  iStack_8 = (*(code *)PTR_deref_u32_8c03156c)(*(int *)(ar4 + 0x14) + (int)ar5 * 4,ar5,ar6,ar7);
  if (iStack_8 == 0) {
    (*(code *)PTR_FUN_8c031578)(auStack_1c,a5,ar6,ar7);
    ar7 = 2;
    ar6 = 1;
    a5 = auStack_1c;
    (*(code *)PTR_report_error_message_8c031580)
              (PTR_s_GRAPHICS_COMMON_8c132c07_1_8c031570 + DAT_8c03157c,a5,1,2);
  }
  puStack_14 = ar5;
  uVar1 = (*(code *)PTR_FUN_8c031584)(*(int *)(ar4 + 0x14) + (int)ar5 * 4,a5,ar6,ar7);
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
  (*(code *)PTR_FUN_8c03166c)(ar4 + 0x14,auStack_14,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c031670)(ar4 + 0x14,auStack_24,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c031674)(auStack_24,0xffffffff,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c031678)(auStack_14,0xffffffff,ar6,ar7);
  (*(code *)PTR_vec3_copy_8c02b5fc_8c031668)(auStack_30,ar4 + DAT_8c031664,ar6,ar7);
  (*(code *)PTR_FUN_8c03166c)(ar4 + DAT_8c03167c,auStack_30,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c031670)(ar4 + DAT_8c03167c,auStack_40,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c031674)(auStack_40,0xffffffff,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c031678)(auStack_30,0xffffffff,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c031680)(ar4 + DAT_8c031664,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c031684 @ 8c031684 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c031684(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  uint extraout_fr1;
  char in_FPSCR_SZ;
  
  a7 = 0;
  a6 = 0xffffffff;
  a5 = 0;
  (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0316f0)
            ((int)ar4 + DAT_8c0316e8._4_4_,0,0xffffffff,0);
  (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0316f4)((int)ar4 + DAT_8c0316e8._4_4_,a5,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    ar4[10] = 0;
    ar4[9] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 10) = (ulonglong)extraout_fr1;
    *(ulonglong *)(ar4 + 9) = (ulonglong)extraout_fr1;
  }
  (*(code *)PTR_FUN_8c0316f8)(ar4,a5,a6,a7);
  (*(code *)PTR_FUN_8c0316fc)(ar4,a5,a6,a7);
  (**(code **)(*ar4 + 0x2c))(ar4,a5,a6,a7);
  ar4[0x1a] = 0;
  return 0x68;
}



/* FUN_8c031700 @ 8c031700 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c031700(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  uint in_PR;
  char in_FPSCR_SZ;
  ulonglong uStack_c;
  
  (*(code *)PTR_vec3_clear_8c03173c)(ar4 + 0x6c,ar5,ar6,ar7);
  uStack_c = (ulonglong)in_fr1;
  if (in_FPSCR_SZ == '\0') {
    uStack_c = (ulonglong)in_PR << 0x20;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c031740) = (undefined4)uStack_c;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c031740) = uStack_c;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c031744) = (undefined4)uStack_c;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c031744) = uStack_c;
  }
  return 0;
}



/* FUN_8c031748 @ 8c031748 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c031748(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_fr1;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(DAT_8c03175c + ar4) = 0;
  iVar1 = DAT_8c031760;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c031760) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c031760) = (ulonglong)in_fr1;
  }
  return iVar1;
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
  undefined4 a6;
  float in_fr1;
  float fVar6;
  ulonglong uVar7;
  double dVar8;
  double in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_84;
  undefined8 uStack_78;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  if (*(int *)(ar4 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = ar6;
    a6 = ar6;
    (*(code *)PTR_Vec3_sub_8c0317dc)(ar5,ar6,ar6,ar7);
    uVar2 = (*(code *)PTR_Vec3_length_8c0317e0)(auStack_44,uVar2,a6,ar7);
    (*(code *)PTR_Vec3_ctor_copy_8c0317e4)(auStack_24,uVar2,a6,ar7);
    uVar5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0317e8)(auStack_44,0xffffffff,a6,ar7);
    uVar1 = 1;
    iVar3 = *(int *)(ar4 + 0x40);
    if ((iVar3 == 1) || (iVar3 == 3)) {
      if (*(int *)(ar4 + 0x44) == 1) {
        (*(code *)PTR_FUN_8c031814)(ar4,uVar5,a6,ar7);
      }
      if (in_FPSCR_SZ == '\0') {
        in_fr1 = *(float *)(ar4 + 0x30);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x30);
      }
      if (in_fr1 == 0.0) {
        dVar8 = (double)CONCAT44(0x3f800000,in_fr1);
        if (in_FPSCR_SZ == '\0') {
          uStack_78 = (double)CONCAT44(uStack_78._4_4_,0x3f800000);
          dVar8 = uStack_78;
        }
      }
      else {
        pdVar4 = (double *)(ar4 + 0x2c);
        if (in_FPSCR_SZ != '\0') {
          in_xd0 = *pdVar4;
          pdVar4 = (double *)(ar4 + 0x30);
        }
        dVar8 = *pdVar4;
        if (in_FPSCR_PR == '\0') {
          fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 / dVar8,0);
        }
        dVar8 = in_xd0;
        if (in_FPSCR_SZ == '\0') {
          uStack_78 = (double)CONCAT44(uStack_78._4_4_,fVar6);
          dVar8 = uStack_78;
        }
      }
      uStack_78 = dVar8;
      (*(code *)PTR_Vec3_scale_8c03189c)(auStack_24,&uStack_78,a6,ar7);
      (*(code *)PTR_FUN_8c0318a0)(ar4 + 0x14,auStack_54,a6,ar7);
      uVar5 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0318a4)(auStack_54,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_length_8c0318a8)(ar4 + 0x14,uVar5,a6,ar7);
      pdVar4 = (double *)(ar4 + 0x2c);
      if (in_FPSCR_SZ != '\0') {
        in_xd0 = *pdVar4;
        pdVar4 = (double *)(ar4 + 0x30);
      }
      uStack_84 = *pdVar4;
      if (SUB84(uStack_84,0) != (float)((ulonglong)uStack_84 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)(ulonglong)*(uint *)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
          dVar8 = uStack_84;
        }
        uStack_84 = (double)((ulonglong)dVar8 & 0xffffffff);
        if (in_FPSCR_PR == '\0' && 0.0 < SUB84(dVar8,0)) {
          if (in_FPSCR_SZ == '\0') {
            uStack_84 = (double)(ulonglong)*(uint *)(ar4 + 0x24);
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x24);
          }
          if (SUB84(uStack_84,0) == 0.0) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar4 + 0x28);
            }
            else {
              *(undefined8 *)(ar4 + 0x2c) = *(undefined8 *)(ar4 + 0x28);
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
            }
            else {
              in_xd0 = *(double *)(ar4 + 0x28);
              dVar8 = *(double *)(ar4 + 0x24);
            }
            if (in_FPSCR_PR == '\0') {
              fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
            }
            else {
              fVar6 = SUB84(dVar8 / dVar8,0);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c),fVar6);
            }
            else {
              dVar8 = *(double *)(ar4 + 0x2c);
            }
            if (in_FPSCR_PR == '\0') {
              fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
            }
            else {
              fVar6 = SUB84(dVar8 + dVar8,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(ar4 + 0x2c) = fVar6;
            }
            else {
              *(double *)(ar4 + 0x2c) = in_xd0;
            }
          }
          pdVar4 = (double *)(ar4 + 0x2c);
          if (in_FPSCR_SZ != '\0') {
            in_xd0 = *pdVar4;
            pdVar4 = (double *)(ar4 + 0x30);
          }
          uStack_84 = *pdVar4;
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)uStack_84 >> 0x20) < SUB84(uStack_84,0)) {
            if (in_FPSCR_SZ == '\0') {
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
      (*(code *)PTR_FUN_8c031934)(ar6,ar5,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uStack_84 = (double)CONCAT44(uVar2,(int)((ulonglong)uStack_84 >> 0x20));
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar8 = *(double *)(ar4 + 0x48);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uStack_84 = (double)CONCAT44((undefined4)uStack_84,fVar6);
      }
      if (in_FPSCR_PR != '\0' || (float)((ulonglong)uStack_84 >> 0x20) <= SUB84(uStack_84,0)) {
        uVar7 = CONCAT44(0x3f800000,SUB84(uStack_84,0));
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          uVar7 = (ulonglong)*(uint *)(ar4 + 0x38);
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = uVar7;
          in_xd0 = *(double *)(ar4 + 0x38);
        }
        if ((float)uVar7 == 0.0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar4 + 0x28);
          }
          else {
            *(undefined8 *)(ar4 + 0x3c) = *(undefined8 *)(ar4 + 0x28);
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x28);
            dVar8 = *(double *)(ar4 + 0x38);
          }
          if (in_FPSCR_PR == '\0') {
            fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar8 / dVar8,0);
          }
          if (in_FPSCR_SZ == '\0') {
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
      (*(code *)PTR_FUN_8c031a38)(ar4 + 0x14,uVar5,a6,ar7);
      uVar2 = (*(code *)PTR_Vec3_length_8c031a3c)(auStack_64,uVar5,a6,ar7);
      (*(code *)PTR_Vec3_ctor_copy_8c031a40)(auStack_34,uVar2,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c031a44)(auStack_64,0xffffffff,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x2c));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x2c);
        dVar8 = *(double *)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 / dVar8,0);
      }
      dVar8 = in_xd0;
      if (in_FPSCR_SZ == '\0') {
        uStack_78 = (double)CONCAT44(uStack_78._4_4_,fVar6);
        dVar8 = uStack_78;
      }
      uStack_78 = dVar8;
      (*(code *)PTR_Vec3_scale_8c031a48)(auStack_34,&uStack_78,a6,ar7);
      (*(code *)PTR_FUN_8c031a4c)(ar4 + 0x14,(int)&uStack_78 + 4,a6,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c031a44)((int)&uStack_78 + 4,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_length_8c031a3c)(ar4 + 0x14,uVar2,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c031a44)(auStack_34,0xffffffff,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(ar4 + 0x28);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
      }
      if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x3c),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
          dVar8 = *(double *)(ar4 + 0x3c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        uStack_9c = in_xd0;
        if (in_FPSCR_SZ == '\0') {
          uStack_9c = (double)CONCAT44(ar4,fVar6);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(uStack_9c._4_4_ + 0x28) = (undefined4)uStack_9c;
          uStack_9c = (double)((ulonglong)uStack_9c & 0xffffffff);
        }
        else {
          *(double *)(uStack_9c._4_4_ + 0x28) = uStack_9c;
        }
        if (in_FPSCR_PR != '\0' || 0.0 <= SUB84(uStack_9c,0)) {
          *(undefined4 *)(ar4 + 0x40) = 0;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)uStack_9c & 0xffffffff;
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(uStack_9c,0));
          }
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x3c),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
          dVar8 = *(double *)(ar4 + 0x3c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        uStack_94 = in_xd0;
        if (in_FPSCR_SZ == '\0') {
          uStack_94 = (double)CONCAT44(ar4,fVar6);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(uStack_94._4_4_ + 0x28) = (undefined4)uStack_94;
          uStack_94 = (double)((ulonglong)uStack_94 & 0xffffffff);
        }
        else {
          *(double *)(uStack_94._4_4_ + 0x28) = uStack_94;
        }
        if (in_FPSCR_PR != '\0' || SUB84(uStack_94,0) <= 0.0) {
          *(undefined4 *)(ar4 + 0x40) = 0;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)uStack_94 & 0xffffffff;
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(uStack_94,0));
          }
        }
      }
    }
    (*(code *)PTR_Vec3_dtor_8c031ab0)(auStack_24,0xffffffff,a6,ar7);
  }
  return uVar1;
}



/* FUN_8c031ab4 @ 8c031ab4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c031ab4(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *a5;
  undefined8 in_dr0;
  undefined4 uVar1;
  char in_FPSCR_SZ;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  a5 = ar5;
  (*(code *)PTR_FUN_8c031b00)(ar4 + DAT_8c031afc,ar5,ar6,ar7);
  uStack_10 = (undefined4)in_dr0;
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = uVar1;
    uStack_10 = uVar1;
  }
  else {
    *ar5 = in_dr0;
  }
  (*(code *)PTR_FUN_8c031b04)(ar4 + DAT_8c031afc,a5,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uStack_14 = uVar1;
  if (in_FPSCR_SZ != '\0') {
    uStack_14 = (undefined4)in_dr0;
    uStack_10 = uVar1;
  }
  if (in_FPSCR_SZ == '\0') {
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
  undefined4 a5;
  
  iVar1 = *(int *)(DAT_8c031b48 + (int)ar4);
  if (iVar1 == 0) {
    if (ar6 == 1) {
      a5 = ar5;
      (**(code **)(*ar4 + 0x2c))(ar4,ar5,1,ar7);
      (*(code *)PTR_FUN_8c031b50)((int)ar4 + DAT_8c031b4c,a5,ar6,ar7);
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

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c031b68(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c031bb0) = *(undefined4 *)ar5;
    *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 0x38) = *(undefined4 *)(ar5 + 1);
    *(undefined4 *)(ar4 + 0x48) = *(undefined4 *)((int)ar5 + 0xc);
    *(undefined4 *)(ar4 + 0x4c) = *(undefined4 *)(ar5 + 2);
    *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)((int)ar5 + 0x14);
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c031bb0) = *ar5;
    *(undefined8 *)(ar4 + 0x34) = *(undefined8 *)((int)ar5 + 4);
    *(undefined8 *)(ar4 + 0x38) = ar5[1];
    *(undefined8 *)(ar4 + 0x48) = *(undefined8 *)((int)ar5 + 0xc);
    *(undefined8 *)(ar4 + 0x4c) = ar5[2];
    *(undefined8 *)(ar4 + 0x50) = *(undefined8 *)((int)ar5 + 0x14);
  }
  return ar5 + 2;
}



/* FUN_8c031bb4 @ 8c031bb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c031bb4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r14;
  undefined8 *puVar1;
  uint in_fr1;
  float fVar2;
  double dVar3;
  double in_dr4;
  undefined8 in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd4;
  undefined8 in_xd14;
  bool bVar4;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar1 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar1 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar1 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar1 + -8) = in_PR;
  *(undefined4 *)((int)puVar1 + -0x18) = ar5;
  *(undefined4 *)((int)puVar1 + -0x14) = ar6;
  fVar2 = (float)((ulonglong)in_dr4 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    in_xd4 = in_xd14;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,in_fr1);
  }
  dVar3 = (double)(ulonglong)in_fr1;
  if (in_FPSCR_PR == '\0') {
    bVar4 = 0.0 < fVar2;
  }
  else {
    bVar4 = dVar3 < in_dr4;
  }
  if (bVar4) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x24) = fVar2;
    }
    else {
      *(double *)(ar4 + 0x24) = in_dr4;
    }
  }
  else {
    (*(code *)PTR_FUN_8c031c58)(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar1 + -0xc) = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(*(undefined4 *)((int)puVar1 + -0xc),SUB84(dVar3,0));
      *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)((int)puVar1 + -0xc);
    }
    else {
      *(double *)((int)puVar1 + -0xc) = dVar3;
      dVar3 = *(double *)((int)puVar1 + -0xc);
      *(double *)(ar4 + 0x24) = dVar3;
    }
  }
  dVar3 = (double)((ulonglong)dVar3 & 0xffffffff);
  if (in_FPSCR_PR == '\0') {
    bVar4 = 0.0 < SUB84(in_dr4,0);
  }
  else {
    bVar4 = dVar3 < in_dr4;
  }
  if (bVar4) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x30) = SUB84(in_dr4,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd4;
    }
  }
  else {
    ar5 = *(undefined4 *)((int)puVar1 + -0x14);
    (*(code *)PTR_FUN_8c031c5c)(*(undefined4 *)((int)puVar1 + -0x18),ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar1 + -0x10) = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)((int)puVar1 + -0x10));
    }
    else {
      *(double *)((int)puVar1 + -0x10) = dVar3;
      in_xd0 = *(undefined8 *)((int)puVar1 + -0x10);
      dVar3 = *(double *)(ar4 + 0x24);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x30) = fVar2;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
    }
  }
  (*(code *)PTR_FUN_8c031c60)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x40) = 1;
  return 0x40;
}



/* FUN_8c031c64 @ 8c031c64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c031c64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x24) = in_fr4;
  }
  else {
    *(undefined8 *)(ar4 + 0x24) = CONCAT44(in_fr4,in_fr5);
  }
  *(undefined4 *)(ar4 + 0x44) = 1;
  return 0x44;
}



/* FUN_8c031c74 @ 8c031c74 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c031ca4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c031c74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  float fVar2;
  ulonglong uVar3;
  double dVar4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  uVar1 = 0;
  if (*(int *)(ar4 + 0x40) != 0) {
    if (*(int *)(ar4 + 0x40) != 4) {
      uVar3 = CONCAT44(0x3f800000,in_fr1);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
        uVar3 = (ulonglong)*(uint *)(ar4 + 0x38);
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = uVar3;
        in_xd0 = *(undefined8 *)(ar4 + 0x38);
      }
      if ((float)uVar3 == 0.0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x3c) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x3c) = CONCAT44(0x3f800000,(float)uVar3);
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar4 = *(double *)(ar4 + 0x38);
        }
        if (in_FPSCR_PR == '\0') {
          fVar2 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar2 = SUB84(dVar4 / dVar4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x3c) = fVar2;
        }
        else {
          *(undefined8 *)(ar4 + 0x3c) = in_xd0;
        }
      }
      *(undefined4 *)(ar4 + 0x40) = 4;
    }
    uVar1 = (*(code *)PTR_FUN_8c031ce4)(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c031ce8 @ 8c031ce8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c031ce8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar1;
  undefined8 in_dr0;
  undefined8 uVar2;
  undefined8 in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar1 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar1 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar1 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar1 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar1 + -0xc) = in_PR;
  *(undefined4 *)((int)puVar1 + -0x40) = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c031dc4)((undefined1 *)((int)puVar1 + -0x1c),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c031dc8)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar1 + -0x30) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar2 = CONCAT44(*(undefined4 *)((int)puVar1 + -0x30),(int)in_dr0);
    *(undefined4 *)((int)puVar1 + -0x1c) = *(undefined4 *)((int)puVar1 + -0x30);
  }
  else {
    *(undefined8 *)((int)puVar1 + -0x30) = in_dr0;
    uVar2 = *(undefined8 *)((int)puVar1 + -0x30);
    *(undefined8 *)((int)puVar1 + -0x1c) = uVar2;
  }
  (*(code *)PTR_FUN_8c031dc8)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar1 + -0x34) = (int)((ulonglong)uVar2 >> 0x20);
    uVar2 = CONCAT44(*(undefined4 *)((int)puVar1 + -0x34),(int)uVar2);
    *(undefined4 *)((int)puVar1 + -0x14) = *(undefined4 *)((int)puVar1 + -0x34);
  }
  else {
    *(undefined8 *)((int)puVar1 + -0x34) = uVar2;
    uVar2 = *(undefined8 *)((int)puVar1 + -0x34);
    *(undefined8 *)((int)puVar1 + -0x14) = uVar2;
  }
  (*(code *)PTR_Vec3_ctor_xyz_8c031dcc)((undefined1 *)((int)puVar1 + -0x2c),ar5,ar6,ar7);
  (**(code **)(DAT_8c031dd0 + **(int **)((int)puVar1 + -0x40)))
            (*(int **)((int)puVar1 + -0x40),(undefined1 *)((int)puVar1 + -0x2c),ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar1 + -0x38) = (int)((ulonglong)uVar2 >> 0x20);
  }
  else {
    *(undefined8 *)((int)puVar1 + -0x38) = uVar2;
  }
  a5 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c031dd4)((undefined1 *)((int)puVar1 + -0x2c),0xffffffff,ar6,ar7);
  (*(code *)PTR_FUN_8c031dc8)(ar4,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar1 + -0x3c) = (int)((ulonglong)uVar2 >> 0x20);
    *(undefined4 *)((int)puVar1 + -0x18) = *(undefined4 *)((int)puVar1 + -0x3c);
  }
  else {
    *(undefined8 *)((int)puVar1 + -0x3c) = uVar2;
    *(undefined8 *)((int)puVar1 + -0x18) = *(undefined8 *)((int)puVar1 + -0x3c);
  }
  (*(code *)PTR_Vec3_ctor_copy_8c031dd8)
            (*(undefined4 *)((int)puVar1 + 8),(undefined1 *)((int)puVar1 + -0x1c),ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c031dd4)((undefined1 *)((int)puVar1 + -0x1c),0xffffffff,ar6,ar7);
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

/* WARNING: Unknown calling convention */

int FUN_8c031e84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_fr1;
  double dVar2;
  float in_fr5;
  float in_fr4;
  undefined8 in_xd4;
  bool bVar3;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),in_fr1);
  }
  else {
    dVar2 = *(double *)(ar4 + 0x28);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) - in_fr4,SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 - (double)CONCAT44(in_fr4,in_fr5);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x28) = (int)((ulonglong)dVar2 >> 0x20);
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar2,0));
  }
  else {
    *(double *)(ar4 + 0x28) = dVar2;
    dVar2 = *(double *)(ar4 + 0x28);
  }
  iVar1 = ar4 + 0x28;
  if (in_FPSCR_PR == '\0') {
    bVar3 = in_fr5 < (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    bVar3 = (double)CONCAT44(in_fr4,in_fr5) < dVar2;
  }
  if (!bVar3) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x28) = in_fr5;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd4;
    }
    iVar1 = 0x40;
    *(undefined4 *)(ar4 + 0x40) = 5;
  }
  return iVar1;
}



/* FUN_8c031eb0 @ 8c031eb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c031eb0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *a5;
  undefined4 a7;
  undefined4 in_stack_00000000;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  
  a7 = ar7;
  (*(code *)PTR_FUN_8c031fa0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_vec3_copy_8c02b5fc_8c031fa4)(auStack_14,auStack_30,ar6,a7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c031fa8)(auStack_30,0xffffffff,ar6,a7);
  (*(code *)PTR_Vec3_set_xyz_8c031fac)(auStack_3c,uVar1,ar6,a7);
  a5 = auStack_3c;
  (*(code *)PTR_FUN_8c031fb0)(ar7,a5,ar6,a7);
  (*(code *)PTR_FUN_8c031fb4)(auStack_4c,a5,ar6,a7);
  uVar1 = (*(code *)PTR_Vec3_length_8c031fb8)(auStack_5c,a5,ar6,a7);
  (*(code *)PTR_Vec3_ctor_copy_8c031fbc)(auStack_24,uVar1,ar6,a7);
  (*(code *)PTR_Vec3_dtor_8c031fc0)(auStack_5c,0xffffffff,ar6,a7);
  (*(code *)PTR_Vec3_dtor_8c031fc0)(auStack_4c,0xffffffff,ar6,a7);
  (*(code *)PTR_object_dtor_delete_8c031fa8)(auStack_3c,0xffffffff,ar6,a7);
  (*(code *)PTR_Vec3_ctor_copy_8c031fbc)(in_stack_00000000,auStack_24,ar6,a7);
  (*(code *)PTR_Vec3_dtor_8c031fc0)(auStack_24,0xffffffff,ar6,a7);
  (*(code *)PTR_object_dtor_delete_8c031fa8)(auStack_14,0xffffffff,ar6,a7);
  return 0;
}



/* FUN_8c031fc4 @ 8c031fc4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c031fc4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  double dVar4;
  double in_dr14;
  undefined4 uVar6;
  double dVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined4 uStack_4;
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = &uStack_4;
    _auStack_8 = CONCAT44(SUB84(in_dr14,0),auStack_8);
  }
  else {
    puVar2 = (undefined4 *)auStack_8;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
  }
  else {
    uVar3 = *(undefined8 *)(ar4 + 0x24);
  }
  uVar6 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar3 >> 0x20) <= (float)uVar3) {
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
    }
    else {
      uVar3 = *(undefined8 *)(ar4 + 0x24);
    }
    if (in_FPSCR_PR != '\0' || (float)uVar3 <= (float)((ulonglong)uVar3 >> 0x20)) {
      iVar1 = 0x44;
      *(undefined4 *)(ar4 + 0x44) = 0;
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(uVar6,*(undefined4 *)(ar4 + 0x24));
        dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),(float)uVar3);
      }
      else {
        dVar4 = *(double *)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) / (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        dVar5 = in_dr14 / dVar4;
      }
      *(int *)((int)puVar2 + -8) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar2 + -8) + 0x28),SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)(*(int *)((int)puVar2 + -8) + 0x28);
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - SUB84(dVar5,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar2 + -8) + 0x28) = (int)((ulonglong)dVar4 >> 0x20);
        uVar3 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        *(double *)(*(int *)((int)puVar2 + -8) + 0x28) = dVar4;
        uVar3 = *(undefined8 *)(ar4 + 0x24);
      }
      iVar1 = ar4 + 0x24;
      if (in_FPSCR_PR != '\0' || (float)uVar3 <= (float)((ulonglong)uVar3 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
        }
        iVar1 = 0x44;
        *(undefined4 *)(ar4 + 0x44) = 0;
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44(uVar6,*(undefined4 *)(ar4 + 0x24));
      dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),(float)uVar3);
    }
    else {
      dVar4 = *(double *)(ar4 + 0x34);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) / (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      dVar5 = in_dr14 / dVar4;
    }
    *(int *)((int)puVar2 + -4) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar2 + -4) + 0x28),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(*(int *)((int)puVar2 + -4) + 0x28);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + SUB84(dVar5,0),SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)((int)puVar2 + -4) + 0x28) = (int)((ulonglong)dVar4 >> 0x20);
      uVar3 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
    }
    else {
      *(double *)(*(int *)((int)puVar2 + -4) + 0x28) = dVar4;
      uVar3 = *(undefined8 *)(ar4 + 0x24);
    }
    iVar1 = ar4 + 0x24;
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar3 >> 0x20) <= (float)uVar3) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
      }
      iVar1 = 0x44;
      *(undefined4 *)(ar4 + 0x44) = 0;
    }
  }
  return iVar1;
}



/* FUN_8c03207c @ 8c03207c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03207c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  undefined4 uVar4;
  undefined4 in_fr5;
  undefined4 in_fr4;
  uint in_fr7;
  uint in_fr6;
  undefined8 in_xd0;
  undefined4 in_xf4;
  undefined8 in_xd6;
  int iVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  float fStack_20;
  int iStack_1c;
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  float fVar3;
  
  uStack_30 = in_fr4;
  uStack_2c = in_fr5;
  uStack_28 = in_fr6;
  uStack_24 = in_fr7;
  if (in_FPSCR_SZ != '\0') {
    uStack_24 = (uint)in_xd6;
    fStack_20 = (float)((ulonglong)in_xd6 >> 0x20);
    uStack_30 = in_fr5;
    uStack_2c = in_xf4;
    uStack_28 = in_fr7;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(uStack_2c,*(undefined4 *)(ar4 + DAT_8c03213c));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c03213c);
    dVar2 = (double)CONCAT44(uStack_28,uStack_2c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  uStack_18 = in_xd0;
  if (in_FPSCR_SZ == '\0') {
    uStack_18 = CONCAT44(ar4,fVar1);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(uStack_18._4_4_ + DAT_8c03213c) = (undefined4)uStack_18;
    dVar2 = (double)CONCAT44(DAT_8c032140,(undefined4)uStack_18);
  }
  else {
    *(undefined8 *)(uStack_18._4_4_ + DAT_8c03213c) = uStack_18;
    dVar2 = (double)CONCAT44(DAT_8c032144,DAT_8c032140);
    in_xd0 = uStack_18;
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c032144,fVar1);
  }
  else {
    dVar2 = (double)CONCAT44(PTR_FUN_8c032148,DAT_8c032144);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = (float)((ulonglong)dVar2 >> 0x20);
    fVar1 = SUB84(dVar2,0) / fVar3;
    dVar2 = (double)CONCAT44(fVar3,fVar1);
    iVar5 = (int)fVar1;
  }
  else {
    dVar2 = dVar2 / dVar2;
    iVar5 = (int)dVar2;
  }
  (*(code *)PTR_FUN_8c032148)(iVar5,ar5,ar6,ar7);
  uStack_c = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(uStack_c,uStack_30);
  }
  else {
    uStack_c = SUB84(dVar2,0);
    in_xd0 = CONCAT44(uStack_2c,uStack_30);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x6c) = fVar1;
  }
  else {
    *(undefined8 *)(ar4 + 0x6c) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(uStack_24,*(undefined4 *)(ar4 + DAT_8c03214c));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c03214c);
    dVar2 = (double)CONCAT44(fStack_20,uStack_24);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_20 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fStack_20 = SUB84(dVar2 + dVar2,0);
  }
  iStack_1c = ar4;
  if (in_FPSCR_SZ != '\0') {
    fStack_20 = (float)in_xd0;
    iStack_1c = (int)((ulonglong)in_xd0 >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(iStack_1c + DAT_8c03214c) = fStack_20;
    dVar2 = (double)CONCAT44(DAT_8c032140,fStack_20);
  }
  else {
    *(ulonglong *)(iStack_1c + DAT_8c03214c) = CONCAT44(iStack_1c,fStack_20);
    in_xd0 = CONCAT44(iStack_1c,fStack_20);
    dVar2 = (double)CONCAT44(DAT_8c032144,DAT_8c032140);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c032144,fVar1);
  }
  else {
    dVar2 = (double)CONCAT44(PTR_FUN_8c032148,DAT_8c032144);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = (float)((ulonglong)dVar2 >> 0x20);
    fVar1 = SUB84(dVar2,0) / fVar3;
    dVar2 = (double)CONCAT44(fVar3,fVar1);
    iVar5 = (int)fVar1;
  }
  else {
    dVar2 = dVar2 / dVar2;
    iVar5 = (int)dVar2;
  }
  (*(code *)PTR_FUN_8c032148)(iVar5,ar5,ar6,ar7);
  uVar4 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)(ulonglong)uStack_28;
    uStack_10 = uVar4;
  }
  else {
    uStack_10 = SUB84(dVar2,0);
    in_xd0 = CONCAT44(uStack_24,uStack_28);
    uStack_c = uVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(uStack_10,SUB84(dVar2,0));
  }
  else {
    dVar2 = (double)CONCAT44(uStack_c,uStack_10);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
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

int FUN_8c032160(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  
  *(undefined4 *)(DAT_8c0321cc + ar4) = 0;
  *(undefined4 *)(ar4 + 0x40) = 5;
  *(undefined4 *)(DAT_8c0321d0 + ar4) = 0;
  (*(code *)PTR_FUN_8c0321d8)(ar4 + DAT_8c0321d4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0321dc)(ar4 + DAT_8c0321d4,ar5,ar6,ar7);
  a5 = 1;
  (*(code *)PTR_FUN_8c0321e0)(ar4 + DAT_8c0321d4,1,ar6,ar7);
  *(undefined4 *)(DAT_8c0321e4 + ar4) = 0;
  (*(code *)PTR_FUN_8c0321ec)(ar4 + DAT_8c0321e8,a5,ar6,ar7);
  *(undefined4 *)(DAT_8c0321f0 + ar4) = 1;
  *(undefined4 *)(DAT_8c0321f4 + ar4) = 0;
  iVar1 = DAT_8c0321f8;
  *(undefined4 *)(DAT_8c0321f8 + ar4) = 0;
  return iVar1;
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

/* WARNING: Unknown calling convention */

undefined4 FUN_8c032204(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x68) = in_fr4;
  }
  else {
    *(undefined8 *)(ar4 + 0x68) = CONCAT44(in_fr4,in_fr5);
  }
  return in_r0;
}



/* FUN_8c03220c @ 8c03220c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c03220c(int ar4,undefined4 *ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *a6;
  undefined1 *a6_00;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char in_FPSCR_SZ;
  int aiStack_1c [2];
  undefined4 uStack_c;
  
  uStack_c = 1;
  iVar1 = -DAT_8c032418;
  if (*(int *)(DAT_8c03241c + ar4) == 1) {
    if (*DAT_8c032420 == '\0') {
      *(int *)((int)aiStack_1c + iVar1) = DAT_8c032424;
      uVar4 = 0x10;
      (*(code *)PTR_FUN_8c032434)
                (DAT_8c032430,PTR_Vec3_ctor_zero_8c03242c,PTR_Vec3_dtor_8c032428,0x10);
      (*(code *)PTR_global_list_push_8c032440)(0,PTR_FUN_8c03243c,DAT_8c032438,uVar4);
      *DAT_8c032420 = '\x01';
    }
    *(int *)((int)aiStack_1c + iVar1) = DAT_8c032424;
    uVar4 = 0x10;
    a6 = PTR_Vec3_dtor_8c032428;
    (*(code *)PTR_FUN_8c032434)
              (&stack0x00000044 + iVar1,PTR_Vec3_ctor_zero_8c03242c,PTR_Vec3_dtor_8c032428,0x10);
    if (*DAT_8c032444 == '\0') {
      *DAT_8c032448 = 0;
      *DAT_8c032444 = '\x01';
    }
    *(undefined4 *)(&stack0x00000004 + iVar1) = 0xffffffff;
    *(undefined1 **)(&stack0x00000034 + iVar1) = &stack0x00000028 + iVar1;
    *(undefined1 **)(&stack0x00000038 + iVar1) = &stack0x00000004 + iVar1;
    *(undefined4 *)(&stack0x0000003c + iVar1) = 0;
    *(undefined4 *)(&stack0x00000040 + iVar1) = 1;
    *(int *)(&stack0x00000000 + iVar1) = *DAT_8c032448;
    (*(code *)PTR_Vec3_assign_8c03244c)
              (*(int *)(&stack0x00000000 + iVar1) * 0x10 + DAT_8c032430,*ar5,a6,uVar4);
    iVar6 = *DAT_8c032448;
    iVar2 = *DAT_8c032448;
    *(int *)(&stack0xfffffffc + iVar1) = *DAT_8c032448;
    *DAT_8c032448 = *(int *)(&stack0xfffffffc + iVar1) + 1;
    if (DAT_8c032424 <= *(int *)(&stack0xfffffffc + iVar1) + 1) {
      *DAT_8c032448 = 0;
    }
    for (iVar5 = 0; iVar5 < DAT_8c032424; iVar5 = iVar5 + 1) {
      if (DAT_8c032424 <= iVar6) {
        iVar6 = iVar6 - DAT_8c032424;
      }
      *(int *)(&stack0xfffffff8 + iVar1) = iVar6;
      puVar3 = (undefined8 *)(*(int *)(&stack0xfffffff8 + iVar1) * 0x10 + DAT_8c032430);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(&stack0x00000028 + iVar1) = *(undefined4 *)puVar3;
      }
      else {
        *(undefined8 *)(&stack0x00000028 + iVar1) = *puVar3;
      }
      *(int *)((int)&stack0xfffffff4 + iVar1) = iVar6;
      puVar3 = (undefined8 *)(*(int *)((int)&stack0xfffffff4 + iVar1) * 0x10 + DAT_8c032430 + 4);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(&stack0x0000002c + iVar1) = *(undefined4 *)puVar3;
      }
      else {
        *(undefined8 *)(&stack0x0000002c + iVar1) = *puVar3;
      }
      *(int *)(&stack0xfffffff0 + iVar1) = iVar6;
      puVar3 = (undefined8 *)(*(int *)(&stack0xfffffff0 + iVar1) * 0x10 + DAT_8c032430 + 8);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(&stack0x00000030 + iVar1) = *(undefined4 *)puVar3;
      }
      else {
        *(undefined8 *)(&stack0x00000030 + iVar1) = *puVar3;
      }
      if (iVar2 < 0) {
        iVar2 = DAT_8c032450;
      }
      *(int *)(&stack0xffffffec + iVar1) = iVar5;
      *(int *)((int)aiStack_1c + iVar1 + 4) = iVar2;
      (*(code *)PTR_Vec3_assign_8c03244c)
                (&stack0x00000044 + *(int *)(&stack0xffffffec + iVar1) * 0x10 + iVar1,
                 *(int *)((int)aiStack_1c + iVar1 + 4) * 0x10 + DAT_8c032430,a6,uVar4);
      a6 = (undefined *)0x0;
      (*(code *)PTR_FUN_8c032454)
                (&stack0x00000034 + iVar1,*(undefined4 *)(&stack0x00000040 + iVar1),0,uVar4);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    }
    ar6 = 0x10;
    ar7 = DAT_8c032424;
    (*(code *)PTR_vec_delete_array_8c032458)
              (&stack0x00000044 + iVar1,PTR_Vec3_dtor_8c032428,0x10,DAT_8c032424);
  }
  if (*(int *)(DAT_8c03245c + ar4) == 1) {
    ar6 = 0;
    (*(code *)PTR_FUN_8c032468)(ar4 + DAT_8c032464,*(int *)(DAT_8c032460 + ar4) + -1,0,ar7);
  }
  iVar2 = *(int *)(DAT_8c03246c + ar4);
  if (iVar2 == 1) {
    *(undefined1 **)((int)aiStack_1c + iVar1) = &stack0x00000018 + iVar1;
    (*(code *)PTR_Vec3_scale_8c032474)(ar4 + DAT_8c032470,ar4 + 0x48,ar6,ar7);
    *(undefined1 **)((int)aiStack_1c + iVar1) = &stack0x00000008 + iVar1;
    (*(code *)PTR_Vec3_scale_8c032474)(&stack0x00000018 + iVar1,PTR_DAT_8c032478,ar6,ar7);
    a6_00 = &stack0x00000008 + iVar1;
    uVar4 = DAT_8c03247c;
    (*(code *)PTR_FUN_8c032480)(ar4,*ar5,a6_00,DAT_8c03247c);
    (*(code *)PTR_Vec3_dtor_8c032428)(&stack0x00000008 + iVar1,0xffffffff,a6_00,uVar4);
    iVar2 = (*(code *)PTR_Vec3_dtor_8c032428)(&stack0x00000018 + iVar1,0xffffffff,a6_00,uVar4);
  }
  return iVar2;
}



/* FUN_8c032484 @ 8c032484 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c032484(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c0324a8)
                    (DAT_8c0324a4,PTR_Vec3_dtor_8c0324a0,0x10,DAT_8c03249c);
  return uVar1;
}



/* FUN_8c0324ac @ 8c0324ac callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

double * FUN_8c0324ac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  undefined4 in_fr1;
  float fVar2;
  double dVar3;
  undefined4 in_fr5;
  float in_fr4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  pdVar1 = *(double **)(DAT_8c032508 + ar4);
  if (pdVar1 == (double *)0x1) {
    if (in_FPSCR_SZ == '\0') {
      in_fr1 = *(undefined4 *)(ar4 + DAT_8c03250c);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c03250c);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c032510),in_fr1);
    }
    else {
      dVar3 = *(double *)(ar4 + DAT_8c032510);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = (float)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(fVar2,SUB84(dVar3,0) - fVar2);
    }
    else {
      dVar3 = dVar3 - dVar3;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c03250c) = SUB84(dVar3,0);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c03250c) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),*(undefined4 *)(ar4 + DAT_8c032510));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c032510);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) * in_fr4;
    }
    else {
      fVar2 = SUB84(dVar3 * (double)CONCAT44(in_fr4,in_fr5),0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c032514,fVar2);
    }
    else {
      dVar3 = (double)CONCAT44(_FUN_8c032518,DAT_8c032514);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    pdVar1 = (double *)(ar4 + DAT_8c03250c);
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)pdVar1,fVar2);
    }
    else {
      dVar3 = *pdVar1;
    }
    fVar2 = (float)((ulonglong)dVar3 >> 0x20);
    if (in_FPSCR_PR == '\0' && fVar2 < SUB84(dVar3,0)) {
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(fVar2,*(undefined4 *)(ar4 + DAT_8c032510));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c032510);
      }
      if (in_FPSCR_PR == '\0') {
        fVar2 = SUB84(dVar3,0) * in_fr4;
      }
      else {
        fVar2 = SUB84(dVar3 * (double)CONCAT44(in_fr4,in_fr5),0);
      }
      pdVar1 = (double *)&DAT_8c032514;
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(DAT_8c032514,fVar2);
      }
      else {
        dVar3 = (double)CONCAT44(_FUN_8c032518,DAT_8c032514);
      }
      if (in_FPSCR_PR == '\0') {
        fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar3 * dVar3,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c03250c) = fVar2;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c03250c) = in_xd0;
      }
    }
  }
  return pdVar1;
}



/* FUN_8c032518 @ 8c032518 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c032518(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r11;
  undefined4 unaff_r13;
  undefined4 uVar4;
  undefined4 unaff_r14;
  undefined1 *puVar5;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_xd4;
  undefined8 in_xd6;
  undefined4 in_PR;
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
  *(undefined4 *)(puVar5 + -0xc) = 1;
  *(undefined4 *)(puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar5 + -0x14) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar5 + -0x60) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)(puVar5 + -0x5c) = (int)in_dr4;
    *(int *)(puVar5 + -0x58) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)(puVar5 + -0x54) = (int)in_dr6;
  }
  else {
    *(undefined8 *)(puVar5 + -0x60) = in_dr4;
    *(undefined8 *)(puVar5 + -0x5c) = in_xd4;
    *(undefined8 *)(puVar5 + -0x58) = in_dr6;
    *(undefined8 *)(puVar5 + -0x54) = in_xd6;
  }
  *(undefined4 *)(puVar5 + -0x50) = ar5;
  uVar4 = *(undefined4 *)(puVar5 + 8);
  *(undefined1 **)(puVar5 + -100) = puVar5 + -0x34;
  uVar2 = ar6;
  uVar3 = ar7;
  (*(code *)PTR_FUN_8c032624)(ar4,ar4 + 0x14,ar6,ar7);
  *(undefined1 **)(puVar5 + -100) = puVar5 + -0x44;
  (*(code *)PTR_Vec3_add_8c032628)(puVar5 + -0x34,*(undefined4 *)(puVar5 + -0x50),uVar2,uVar3);
  (*(code *)PTR_Vec3_ctor_copy_8c03262c)(puVar5 + -0x24,puVar5 + -0x44,uVar2,uVar3);
  (*(code *)PTR_Vec3_dtor_8c032630)(puVar5 + -0x44,0xffffffff,uVar2,uVar3);
  (*(code *)PTR_Vec3_dtor_8c032630)(puVar5 + -0x34,0xffffffff,uVar2,uVar3);
  *(undefined4 *)(puVar5 + -100) = uVar4;
  uVar2 = ar6;
  uVar3 = ar7;
  uVar1 = (*(code *)PTR_FUN_8c032634)(ar4,puVar5 + -0x24,ar6,ar7);
  *(undefined4 *)(puVar5 + -0x48) = uVar1;
  if (*(int *)(puVar5 + -0x48) == 0) {
    *(undefined4 *)(puVar5 + -100) = uVar4;
    uVar2 = (*(code *)PTR_FUN_8c032638)(ar4,puVar5 + -0x24,ar6,ar7);
    *(undefined4 *)(puVar5 + -0x4c) = uVar2;
    (*(code *)PTR_Vec3_ctor_copy_8c03262c)
              (*(undefined4 *)(puVar5 + 4),*(undefined4 *)(puVar5 + -0x4c),ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c032630)(puVar5 + -0x24,0xffffffff,ar6,ar7);
  }
  else {
    (*(code *)PTR_Vec3_ctor_copy_8c03262c)(*(undefined4 *)(puVar5 + 4),puVar5 + -0x24,uVar2,uVar3);
    (*(code *)PTR_Vec3_dtor_8c032630)(puVar5 + -0x24,0xffffffff,uVar2,uVar3);
  }
  return 0;
}



/* FUN_8c03263c @ 8c03263c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03263c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *a5;
  undefined4 unaff_r14;
  undefined8 *puVar1;
  float in_fr1;
  ulonglong uVar2;
  double dVar3;
  undefined8 in_dr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_dr12;
  float fVar4;
  undefined8 in_dr14;
  double in_xd4;
  undefined8 in_xd6;
  undefined8 in_xd12;
  undefined8 in_xd14;
  bool bVar5;
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
  *(undefined4 *)((int)puVar1 + -8) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar1 + -0x50) = (int)((ulonglong)in_dr4 >> 0x20);
    *(undefined4 *)((int)puVar1 + -0x4c) = in_fr6;
    in_xd4 = (double)CONCAT44((int)in_dr4,in_fr7);
    in_xd6 = in_xd12;
  }
  else {
    *(undefined8 *)((int)puVar1 + -0x50) = in_dr4;
    *(ulonglong *)((int)puVar1 + -0x4c) = CONCAT44(in_fr6,in_fr7);
  }
  *(undefined4 *)((int)puVar1 + -0x48) = ar5;
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(float *)((int)puVar1 + -0x50);
  }
  uVar2 = (ulonglong)(uint)in_fr1;
  if (in_FPSCR_PR == '\0' && 0.0 < in_fr1) {
    if (in_FPSCR_SZ == '\0') {
      uVar2 = CONCAT44(DAT_8c032768,in_fr1);
    }
    else {
      uVar2 = CONCAT44(PTR_FUN_8c03276c,DAT_8c032768);
    }
    (*(code *)PTR_FUN_8c03276c)(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar1 + -0x3c) = (int)(uVar2 >> 0x20);
    }
    else {
      *(ulonglong *)((int)puVar1 + -0x3c) = uVar2;
    }
  }
  dVar3 = (double)(uVar2 & 0xffffffff);
  fVar4 = (float)((ulonglong)in_xd4 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar5 = 0.0 < fVar4;
  }
  else {
    bVar5 = dVar3 < in_xd4;
  }
  if (bVar5) {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c032768,(int)uVar2);
    }
    else {
      dVar3 = (double)CONCAT44(PTR_FUN_8c03276c,DAT_8c032768);
    }
    if (in_FPSCR_PR == '\0') {
      in_xd4 = (double)CONCAT44(fVar4 * (float)((ulonglong)dVar3 >> 0x20),SUB84(in_xd4,0));
    }
    else {
      in_xd4 = in_xd4 * dVar3;
    }
    (*(code *)PTR_FUN_8c03276c)(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar1 + -0x40) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)((int)puVar1 + -0x40) = dVar3;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)((int)puVar1 + -0x4c),SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)((int)puVar1 + -0x4c);
  }
  if (in_FPSCR_PR == '\0') {
    bVar5 = SUB84(in_xd4,0) < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar5 = in_xd4 < dVar3;
  }
  if (bVar5) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar1 + -0x38) = SUB84(in_xd4,0);
    }
    else {
      *(undefined8 *)((int)puVar1 + -0x38) = in_xd6;
    }
  }
  else {
    (*(code *)PTR_FUN_8c03276c)(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar1 + -0x44) = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined4 *)((int)puVar1 + -0x38) = *(undefined4 *)((int)puVar1 + -0x44);
    }
    else {
      *(double *)((int)puVar1 + -0x44) = dVar3;
      *(undefined8 *)((int)puVar1 + -0x38) = *(undefined8 *)((int)puVar1 + -0x44);
    }
  }
  (*(code *)PTR_Vec3_set_xyz_8c032770)((undefined1 *)((int)puVar1 + -0x14),ar5,ar6,ar7);
  *(undefined1 **)((int)puVar1 + -0x54) = (undefined1 *)((int)puVar1 + -0x24);
  a5 = (undefined1 *)((int)puVar1 + -0x14);
  (*(code *)PTR_FUN_8c032774)(*(undefined4 *)((int)puVar1 + -0x48),a5,ar6,ar7);
  *(undefined1 **)((int)puVar1 + -0x54) = (undefined1 *)((int)puVar1 + -0x34);
  (*(code *)PTR_FUN_8c032778)((undefined1 *)((int)puVar1 + -0x24),a5,ar6,ar7);
  *(undefined4 *)((int)puVar1 + -0x54) = *(undefined4 *)((int)puVar1 + 0x10);
  (*(code *)PTR_Vec3_scale_8c03277c)
            ((undefined1 *)((int)puVar1 + -0x34),(undefined1 *)((int)puVar1 + -0x38),ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c032780)((undefined1 *)((int)puVar1 + -0x34),0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c032780)((undefined1 *)((int)puVar1 + -0x24),0xffffffff,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c032784)((undefined1 *)((int)puVar1 + -0x14),0xffffffff,ar6,ar7)
  ;
  return 0;
}



/* FUN_8c032788 @ 8c032788 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

double * FUN_8c032788(undefined4 ar4,double *ar5,double *ar6,undefined4 ar7)

{
  undefined4 unaff_r13;
  double *pdVar1;
  undefined4 unaff_r14;
  double *pdVar2;
  undefined4 in_fr1;
  double dVar3;
  float fVar6;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 in_fr3;
  undefined4 in_fr5;
  undefined4 in_fr4;
  double in_dr12;
  undefined4 uVar8;
  double dVar7;
  float fVar9;
  double in_dr14;
  undefined4 uVar11;
  double dVar10;
  float fVar12;
  double in_xd0;
  double in_xd12;
  double in_xd14;
  bool bVar13;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  double dStack_10;
  undefined8 uStack_8;
  
  uVar11 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = uVar11;
    pdVar2 = &dStack_10;
    dStack_10 = (double)CONCAT44(SUB84(in_dr12,0),uVar8);
  }
  else {
    pdVar2 = (double *)auStack_20;
    uStack_8 = in_xd14;
    dStack_10 = in_dr14;
  }
  *(undefined4 *)((int)pdVar2 + -4) = unaff_r14;
  *(undefined4 *)((int)pdVar2 + -8) = unaff_r13;
  *(undefined4 *)((int)pdVar2 + -0xc) = 1;
  *(undefined4 *)((int)pdVar2 + -0x10) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)pdVar2 + -0x24) = in_fr4;
  }
  else {
    *(ulonglong *)((int)pdVar2 + -0x24) = CONCAT44(in_fr4,in_fr5);
  }
  *(undefined4 *)((int)pdVar2 + -0x20) = ar7;
  pdVar1 = *(double **)((int)pdVar2 + 0x10);
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44(uVar11,*(undefined4 *)((int)pdVar2 + -0x24));
    dVar3 = (double)CONCAT44(*(undefined4 *)pdVar1,in_fr1);
  }
  else {
    in_xd14 = *(double *)((int)pdVar2 + -0x24);
    dVar3 = *pdVar1;
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr14,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar9 = SUB84(in_dr14 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)ar6,fVar9);
    dVar3 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(dVar3,0));
  }
  else {
    dVar10 = *ar6;
    dVar3 = *pdVar1;
  }
  if (in_FPSCR_PR == '\0') {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + (float)((ulonglong)dVar3 >> 0x20)
                              ,SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 + dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + -0x24),SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)((int)pdVar2 + -0x24);
  }
  if (in_FPSCR_PR == '\0') {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) - (float)((ulonglong)dVar3 >> 0x20)
                              ,SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 - dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr12 = (double)CONCAT44(uVar8,*(undefined4 *)((int)pdVar2 + -0x24));
    dVar3 = (double)CONCAT44(*(undefined4 *)(pdVar1 + 1),SUB84(dVar3,0));
  }
  else {
    in_xd12 = *(double *)((int)pdVar2 + -0x24);
    dVar3 = pdVar1[1];
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr12,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar9 = SUB84(in_dr12 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar6 + 1),fVar9);
    dVar3 = (double)CONCAT44(*(undefined4 *)(pdVar1 + 1),SUB84(dVar3,0));
  }
  else {
    dVar7 = ar6[1];
    dVar3 = pdVar1[1];
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + (float)((ulonglong)dVar3 >> 0x20),
                             SUB84(dVar7,0));
  }
  else {
    dVar7 = dVar7 + dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + -0x24),SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)((int)pdVar2 + -0x24);
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - (float)((ulonglong)dVar3 >> 0x20),
                             SUB84(dVar7,0));
  }
  else {
    dVar7 = dVar7 - dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)ar5,SUB84(dVar3,0));
  }
  else {
    dVar3 = *ar5;
  }
  fVar9 = SUB84(dVar10,0);
  if (in_FPSCR_PR == '\0') {
    bVar13 = fVar9 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar13 = dVar10 < dVar3;
  }
  fVar12 = (float)((ulonglong)dVar10 >> 0x20);
  if (bVar13) {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)ar5,SUB84(dVar3,0));
    }
    else {
      dVar3 = *ar5;
    }
    fVar6 = (float)((ulonglong)dVar3 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar13 = fVar6 < fVar12;
    }
    else {
      bVar13 = dVar3 < dVar10;
    }
    if (!bVar13) {
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(fVar6,*(undefined4 *)ar5);
      }
      else {
        in_xd0 = *ar5;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar3,0) - fVar12;
      }
      else {
        fVar6 = SUB84(dVar3 - dVar10,0);
      }
      dVar3 = dVar10;
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(fVar12,fVar6);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)dVar3 >> 0x20) - SUB84(dVar3,0);
        dVar3 = (double)CONCAT44(fVar6,SUB84(dVar3,0));
        bVar13 = fVar9 < fVar6;
      }
      else {
        dVar3 = dVar3 - dVar3;
        bVar13 = dVar10 < dVar3;
      }
      if (bVar13) {
        if (in_FPSCR_SZ == '\0') {
          dVar3 = (double)CONCAT44(*(undefined4 *)ar5,SUB84(dVar3,0));
        }
        else {
          dVar3 = *ar5;
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = (float)((ulonglong)dVar3 >> 0x20) - fVar12;
          dVar3 = (double)CONCAT44(fVar6,SUB84(dVar3,0));
          dVar10 = (double)CONCAT44(fVar12 - fVar6,fVar9);
        }
        else {
          dVar3 = dVar3 - dVar10;
          dVar10 = dVar10 - dVar3;
        }
        dVar3 = (double)CONCAT44(0x3f800000,SUB84(dVar3,0));
        if (in_FPSCR_PR == '\0') {
          dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) - 1.0,SUB84(dVar10,0));
        }
        else {
          dVar10 = dVar10 - dVar3;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)ar5 = (int)((ulonglong)dVar10 >> 0x20);
        }
        else {
          *ar5 = dVar10;
        }
      }
      else {
        dVar3 = (double)CONCAT44(0x3f800000,SUB84(dVar3,0));
        if (in_FPSCR_PR == '\0') {
          fVar9 = fVar9 + 1.0;
        }
        else {
          fVar9 = SUB84(dVar10 + dVar3,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)ar5 = fVar9;
        }
        else {
          *ar5 = in_xd14;
        }
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(fVar9,*(undefined4 *)ar5);
    }
    else {
      in_xd0 = *ar5;
      dVar3 = in_xd14;
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = ((float)((ulonglong)dVar3 >> 0x20) - SUB84(dVar3,0)) + fVar9;
      dVar3 = (double)CONCAT44(fVar6,SUB84(dVar3,0));
      bVar13 = fVar6 < fVar12;
    }
    else {
      dVar3 = (dVar3 - dVar3) + dVar10;
      bVar13 = dVar3 < dVar10;
    }
    if (bVar13) {
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(*(undefined4 *)ar5,fVar9);
        in_xd14 = in_xd0;
      }
      else {
        dVar3 = *ar5;
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = (SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20)) + fVar9;
      }
      else {
        fVar9 = SUB84((dVar3 - dVar3) + dVar10,0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar3 = (double)(ulonglong)(uint)(fVar9 + 1.0);
      }
      else {
        dVar3 = (double)CONCAT44(0x3f800000,fVar9) + (double)CONCAT44(0x3f800000,fVar9);
      }
      in_xd0 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        *(int *)ar5 = SUB84(dVar3,0);
      }
      else {
        *ar5 = in_xd14;
      }
    }
    else {
      dVar3 = (double)CONCAT44(0x3f800000,SUB84(dVar3,0));
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44(fVar12 - 1.0,fVar9);
      }
      else {
        dVar10 = dVar10 - dVar3;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)ar5 = (int)((ulonglong)dVar10 >> 0x20);
      }
      else {
        *ar5 = dVar10;
      }
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),SUB84(dVar3,0));
  }
  else {
    dVar3 = ar5[1];
  }
  fVar9 = SUB84(dVar7,0);
  if (in_FPSCR_PR == '\0') {
    bVar13 = fVar9 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar13 = dVar7 < dVar3;
  }
  fVar12 = (float)((ulonglong)dVar7 >> 0x20);
  if (bVar13) {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),SUB84(dVar3,0));
    }
    else {
      dVar3 = ar5[1];
    }
    fVar6 = (float)((ulonglong)dVar3 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar13 = fVar6 < fVar12;
    }
    else {
      bVar13 = dVar3 < dVar7;
    }
    if (!bVar13) {
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(fVar6,*(undefined4 *)(ar5 + 1));
      }
      else {
        in_xd0 = ar5[1];
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar3,0) - fVar12;
      }
      else {
        fVar6 = SUB84(dVar3 - dVar7,0);
      }
      dVar3 = dVar7;
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(fVar12,fVar6);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)dVar3 >> 0x20) - SUB84(dVar3,0);
        dVar3 = (double)CONCAT44(fVar6,SUB84(dVar3,0));
        bVar13 = fVar9 < fVar6;
      }
      else {
        dVar3 = dVar3 - dVar3;
        bVar13 = dVar7 < dVar3;
      }
      if (bVar13) {
        if (in_FPSCR_SZ == '\0') {
          dVar3 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),SUB84(dVar3,0));
        }
        else {
          dVar3 = ar5[1];
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = (float)((ulonglong)dVar3 >> 0x20) - fVar12;
          dVar3 = (double)CONCAT44(fVar6,SUB84(dVar3,0));
          dVar7 = (double)CONCAT44(fVar12 - fVar6,fVar9);
        }
        else {
          dVar3 = dVar3 - dVar7;
          dVar7 = dVar7 - dVar3;
        }
        dVar3 = (double)CONCAT44(0x3f800000,SUB84(dVar3,0));
        if (in_FPSCR_PR == '\0') {
          dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - 1.0,SUB84(dVar7,0));
        }
        else {
          dVar7 = dVar7 - dVar3;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar5 + 1) = (int)((ulonglong)dVar7 >> 0x20);
        }
        else {
          ar5[1] = dVar7;
        }
      }
      else {
        dVar3 = (double)CONCAT44(0x3f800000,SUB84(dVar3,0));
        if (in_FPSCR_PR == '\0') {
          fVar9 = fVar9 + 1.0;
        }
        else {
          fVar9 = SUB84(dVar7 + dVar3,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar5 + 1) = fVar9;
        }
        else {
          ar5[1] = in_xd12;
        }
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(fVar9,*(undefined4 *)(ar5 + 1));
    }
    else {
      in_xd0 = ar5[1];
      dVar3 = in_xd12;
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = ((float)((ulonglong)dVar3 >> 0x20) - SUB84(dVar3,0)) + fVar9;
      dVar3 = (double)CONCAT44(fVar6,SUB84(dVar3,0));
      bVar13 = fVar6 < fVar12;
    }
    else {
      dVar3 = (dVar3 - dVar3) + dVar7;
      bVar13 = dVar3 < dVar7;
    }
    if (bVar13) {
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),fVar9);
        in_xd12 = in_xd0;
      }
      else {
        dVar3 = ar5[1];
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = (SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20)) + fVar9;
      }
      else {
        fVar9 = SUB84((dVar3 - dVar3) + dVar7,0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar3 = (double)CONCAT44(0x3f800000,fVar9 + 1.0);
      }
      else {
        dVar3 = (double)CONCAT44(0x3f800000,fVar9) + (double)CONCAT44(0x3f800000,fVar9);
      }
      in_xd0 = in_xd12;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar5 + 1) = SUB84(dVar3,0);
      }
      else {
        ar5[1] = in_xd12;
      }
    }
    else {
      dVar3 = (double)CONCAT44(0x3f800000,SUB84(dVar3,0));
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44(fVar12 - 1.0,fVar9);
      }
      else {
        dVar7 = dVar7 - dVar3;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar5 + 1) = (int)((ulonglong)dVar7 >> 0x20);
      }
      else {
        ar5[1] = dVar7;
      }
    }
  }
  (**(code **)(DAT_8c0329a8 + **(int **)((int)pdVar2 + -0x20)))
            (*(int **)((int)pdVar2 + -0x20),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar2 + -0x1c) = (int)((ulonglong)dVar3 >> 0x20);
    dVar3 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + -0x1c),
                             *(undefined4 *)((int)pdVar2 + -0x24));
  }
  else {
    *(double *)((int)pdVar2 + -0x1c) = dVar3;
    in_xd0 = *(double *)((int)pdVar2 + -0x24);
    dVar3 = *(double *)((int)pdVar2 + -0x1c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)pdVar2 + -0x14) = fVar9;
    dVar3 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + -0x24),*(undefined4 *)((int)ar6 + 4));
  }
  else {
    *(double *)((int)pdVar2 + -0x14) = in_xd0;
    in_xd0 = *(double *)((int)ar6 + 4);
    dVar3 = *(double *)((int)pdVar2 + -0x24);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar3 - dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)pdVar2 + -0x18) = fVar9;
    uVar4 = CONCAT44(*(undefined4 *)((int)pdVar2 + -0x14),*(undefined4 *)((int)ar5 + 4));
  }
  else {
    *(double *)((int)pdVar2 + -0x18) = in_xd0;
    in_xd0 = *(double *)((int)ar5 + 4);
    uVar4 = *(undefined8 *)((int)pdVar2 + -0x14);
  }
  if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar4 >> 0x20) < (float)uVar4) {
    if (in_FPSCR_SZ == '\0') {
      uVar4 = CONCAT44(*(undefined4 *)((int)pdVar2 + -0x18),*(undefined4 *)((int)ar5 + 4));
    }
    else {
      in_xd0 = *(double *)((int)ar5 + 4);
      uVar4 = *(undefined8 *)((int)pdVar2 + -0x18);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar4 >> 0x20) <= (float)uVar4) {
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),in_fr3);
        dVar10 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + -0x18),(float)uVar4);
      }
      else {
        dVar3 = *(double *)((int)ar5 + 4);
        dVar10 = *(double *)((int)pdVar2 + -0x18);
      }
      fVar9 = (float)((ulonglong)dVar10 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) - fVar9,SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 - dVar10;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(fVar9,*(undefined4 *)((int)pdVar2 + -0x18));
      }
      else {
        in_xd0 = *(double *)((int)pdVar2 + -0x18);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar10 - dVar3,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)((int)pdVar2 + -0x14),fVar9);
      }
      else {
        uVar5 = *(ulonglong *)((int)pdVar2 + -0x14);
      }
      if (in_FPSCR_PR == '\0' && (float)(uVar5 >> 0x20) < (float)uVar5) {
        if (in_FPSCR_SZ == '\0') {
          dVar3 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),SUB84(dVar3,0));
          dVar10 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + -0x18),(float)uVar5);
        }
        else {
          dVar3 = *(double *)((int)ar5 + 4);
          dVar10 = *(double *)((int)pdVar2 + -0x18);
        }
        fVar9 = (float)((ulonglong)dVar10 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) - fVar9,SUB84(dVar3,0));
        }
        else {
          dVar3 = dVar3 - dVar10;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(fVar9,*(undefined4 *)((int)pdVar2 + -0x18));
        }
        else {
          in_xd0 = *(double *)((int)pdVar2 + -0x18);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar3 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 - dVar3,0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = fVar9 - 1.0;
        }
        else {
          fVar9 = SUB84((double)CONCAT44(0x3f800000,fVar9) - (double)CONCAT44(0x3f800000,fVar9),0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)ar5 + 4) = fVar9;
        }
        else {
          *(double *)((int)ar5 + 4) = in_xd0;
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          uVar5 = (ulonglong)*(uint *)((int)pdVar2 + -0x14);
        }
        else {
          in_xd0 = *(double *)((int)pdVar2 + -0x14);
        }
        dVar3 = (double)CONCAT44(0x3f800000,(float)uVar5);
        if (in_FPSCR_PR == '\0') {
          fVar9 = (float)uVar5 + 1.0;
        }
        else {
          fVar9 = SUB84(dVar3 + dVar3,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)ar5 + 4) = fVar9;
        }
        else {
          *(double *)((int)ar5 + 4) = in_xd0;
        }
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),*(undefined4 *)((int)pdVar2 + -0x14));
    }
    else {
      in_xd0 = *(double *)((int)pdVar2 + -0x14);
      dVar3 = *(double *)((int)ar5 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar3 - dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + -0x14),fVar9);
    }
    else {
      dVar3 = *(double *)((int)pdVar2 + -0x14);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar3 + dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(*(undefined4 *)((int)pdVar2 + -0x18),fVar9);
    }
    else {
      uVar5 = *(ulonglong *)((int)pdVar2 + -0x18);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar5 < (float)(uVar5 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),*(undefined4 *)((int)pdVar2 + -0x14))
        ;
      }
      else {
        in_xd0 = *(double *)((int)pdVar2 + -0x14);
        dVar3 = *(double *)((int)ar5 + 4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar3 - dVar3,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(*(undefined4 *)((int)pdVar2 + -0x14),fVar9);
      }
      else {
        dVar3 = *(double *)((int)pdVar2 + -0x14);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar3 + dVar3,0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = fVar9 + 1.0;
      }
      else {
        fVar9 = SUB84((double)CONCAT44(0x3f800000,fVar9) + (double)CONCAT44(0x3f800000,fVar9),0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)ar5 + 4) = fVar9;
      }
      else {
        *(double *)((int)ar5 + 4) = in_xd0;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        uVar5 = (ulonglong)*(uint *)((int)pdVar2 + -0x18);
      }
      else {
        in_xd0 = *(double *)((int)pdVar2 + -0x18);
      }
      dVar3 = (double)CONCAT44(0x3f800000,(float)uVar5);
      if (in_FPSCR_PR == '\0') {
        fVar9 = (float)uVar5 - 1.0;
      }
      else {
        fVar9 = SUB84(dVar3 - dVar3,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)ar5 + 4) = fVar9;
      }
      else {
        *(double *)((int)ar5 + 4) = in_xd0;
      }
    }
  }
  return ar5;
}



/* FUN_8c0329ac @ 8c0329ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0329ac(undefined4 ar4,undefined8 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 unaff_r13;
  double *pdVar1;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  float in_fr4;
  float in_fr15;
  undefined4 in_fr14;
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
  *(undefined4 *)(puVar2 + -0xc) = 1;
  *(undefined4 *)(puVar2 + -0x10) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = in_fr4;
  }
  *(undefined4 *)(puVar2 + -0x18) = ar7;
  pdVar1 = *(double **)(puVar2 + 4);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)pdVar1,in_fr15);
  }
  else {
    dVar4 = *pdVar1;
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar5 = CONCAT44(*(undefined4 *)ar5,fVar3);
  }
  else {
    uVar5 = *ar5;
  }
  if (in_FPSCR_PR == '\0' && (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20)) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)pdVar1,*ar6);
    }
    else {
      dVar4 = *pdVar1;
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = (SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20)) - in_fr15;
    }
    else {
      fVar3 = SUB84((dVar4 + dVar4) - (double)CONCAT44(in_fr14,in_fr15),0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(*(undefined4 *)ar5,fVar3);
    }
    else {
      uVar5 = *ar5;
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar5 >> 0x20) < (float)uVar5) {
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(*(undefined4 *)(pdVar1 + 1),in_fr15);
      }
      else {
        dVar4 = pdVar1[1];
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(ar5 + 1),fVar3);
      }
      else {
        uVar5 = ar5[1];
      }
      if (in_FPSCR_PR == '\0' && (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(*(undefined4 *)(pdVar1 + 1),ar6[2]);
        }
        else {
          dVar4 = pdVar1[1];
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = (SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20)) - in_fr15;
        }
        else {
          fVar3 = SUB84((dVar4 + dVar4) - (double)CONCAT44(in_fr14,in_fr15),0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar5 = CONCAT44(*(undefined4 *)(ar5 + 1),fVar3);
        }
        else {
          uVar5 = ar5[1];
        }
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar5 >> 0x20) < (float)uVar5) {
          (**(code **)(DAT_8c032a60 + **(int **)(puVar2 + -0x18)))
                    (*(int **)(puVar2 + -0x18),ar5,ar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar2 + -0x14) = (int)((ulonglong)uVar5 >> 0x20);
            dVar4 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0x14),in_fr15);
          }
          else {
            *(undefined8 *)(puVar2 + -0x14) = uVar5;
            dVar4 = *(double *)(puVar2 + -0x14);
          }
          if (in_FPSCR_PR == '\0') {
            fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            fVar3 = SUB84(dVar4 + dVar4,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),fVar3);
          }
          else {
            dVar4 = *(double *)((int)ar5 + 4);
          }
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          if (in_FPSCR_PR == '\0' && SUB84(dVar4,0) < fVar3) {
            if (in_FPSCR_SZ == '\0') {
              dVar4 = (double)CONCAT44(fVar3,ar6[1]);
            }
            if (in_FPSCR_PR == '\0') {
              fVar3 = SUB84(dVar4,0) - in_fr15;
            }
            else {
              fVar3 = SUB84(dVar4 - (double)CONCAT44(in_fr14,in_fr15),0);
            }
            if (in_FPSCR_SZ == '\0') {
              uVar5 = CONCAT44(*(undefined4 *)((int)ar5 + 4),fVar3);
            }
            else {
              uVar5 = *(undefined8 *)((int)ar5 + 4);
            }
            if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar5 >> 0x20) < (float)uVar5) {
              return 1;
            }
          }
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}



/* rand_range @ 8c032a64 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c032a86) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int rand_range(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  double dVar2;
  undefined4 in_fr3;
  double dVar3;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar1 = (*(code *)PTR_rand_8c032aa8)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)(ar6 - ar5),in_fr3);
  }
  else {
    dVar3 = (double)(ar6 - ar5);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c032aac,(float)iVar1);
  }
  else {
    dVar2 = (double)CONCAT44(_FUN_8c032ab0,DAT_8c032aac);
  }
  if (in_FPSCR_PR == '\0') {
    iVar1 = (int)((float)((ulonglong)dVar3 >> 0x20) *
                 (SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20)));
  }
  else {
    iVar1 = (int)(dVar3 * (dVar2 / dVar2));
  }
  return iVar1 + ar5;
}



/* FUN_8c032ab0 @ 8c032ab0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c032ad2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c032ab0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 in_fr5;
  undefined8 in_dr14;
  undefined8 in_xd4;
  undefined8 in_xd14;
  undefined4 in_PR;
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
  *(undefined4 *)(puVar2 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar2 + -0xc) = in_fr5;
  }
  else {
    *(undefined8 *)(puVar2 + -0xc) = in_xd4;
  }
  uVar1 = (*(code *)PTR_rand_8c032af0)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(puVar2 + -8) = uVar1;
  return &DAT_8c032af4;
}



/* FUN_8c032af8 @ 8c032af8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c032b56) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c032af8(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int iVar3;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar4;
  undefined4 in_fr1;
  double dVar5;
  float fVar6;
  undefined8 in_dr14;
  double dVar7;
  float fVar8;
  undefined8 in_xd14;
  bool bVar9;
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
  *(undefined4 *)((int)puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar4 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar4 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar4 + -0x1c) = unaff_r8;
  *(undefined4 *)((int)puVar4 + -0x20) = in_PR;
  *(undefined4 *)((int)puVar4 + -0x38) = ar7;
  iVar2 = ar5;
  if (ar5 != ar6) {
    uVar1 = (*(code *)PTR_rand_range_8c032bd4)(ar4,ar5,ar6,ar7);
    *(undefined4 *)((int)puVar4 + -0x24) = uVar1;
    iVar3 = *(int *)((int)puVar4 + -0x24);
    iVar2 = ar6;
    uVar1 = (*(code *)PTR_rand_range_8c032bd4)(ar4,ar5,ar6,ar7);
    *(undefined4 *)((int)puVar4 + -0x28) = uVar1;
    uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c032bd8)
                      (iVar3 + *(int *)((int)puVar4 + -0x28),2,iVar2,ar7);
    *(undefined4 *)((int)puVar4 + -0x2c) = uVar1;
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)(*(int *)((int)puVar4 + -0x38) + -0x32),
                               (float)*(int *)((int)puVar4 + -0x2c));
    }
    else {
      dVar7 = (double)(*(int *)((int)puVar4 + -0x38) + -0x32);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c032bdc,in_fr1);
    }
    else {
      dVar5 = (double)CONCAT44(_FUN_8c032be0,DAT_8c032bdc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = (float)((ulonglong)dVar7 >> 0x20) * (float)((ulonglong)dVar5 >> 0x20) *
              (float)(ar6 - ar5);
      fVar6 = SUB84(dVar7,0) + fVar8;
      dVar7 = (double)CONCAT44(fVar8,fVar6);
      bVar9 = (float)ar6 < fVar6;
    }
    else {
      dVar7 = dVar7 * dVar5 * (double)(ar6 - ar5);
      dVar7 = dVar7 + dVar7;
      fVar6 = SUB84(dVar7,0);
      bVar9 = (double)ar6 < dVar7;
    }
    if (bVar9) {
      *(int *)((int)puVar4 + -0x30) = ar6;
      if (in_FPSCR_PR == '\0') {
        iVar2 = (int)((float)(*(int *)((int)puVar4 + -0x30) << 1) - fVar6);
      }
      else {
        iVar2 = (int)((double)(*(int *)((int)puVar4 + -0x30) << 1) - dVar7);
      }
    }
    else {
      if (in_FPSCR_PR == '\0') {
        bVar9 = fVar6 < (float)ar5;
      }
      else {
        bVar9 = dVar7 < (double)ar5;
      }
      if (bVar9) {
        *(int *)((int)puVar4 + -0x34) = ar5;
        if (in_FPSCR_PR == '\0') {
          iVar2 = (int)((float)(*(int *)((int)puVar4 + -0x34) << 1) - fVar6);
        }
        else {
          iVar2 = (int)((double)(*(int *)((int)puVar4 + -0x34) << 1) - dVar7);
        }
      }
      else if (in_FPSCR_PR == '\0') {
        iVar2 = (int)fVar6;
      }
      else {
        iVar2 = (int)dVar7;
      }
    }
  }
  if (iVar2 < ar5) {
    iVar2 = ar5;
  }
  if (ar6 < iVar2) {
    iVar2 = ar6;
  }
  return iVar2;
}



/* FUN_8c032be0 @ 8c032be0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c032bfe) */
/* WARNING: Removing unreachable block (ram,0x8c032c4e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c032be0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 unaff_r14;
  undefined8 *puVar2;
  undefined4 in_fr1;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double in_dr4;
  undefined8 in_dr12;
  undefined4 uVar7;
  undefined8 in_dr14;
  float fVar8;
  undefined8 in_xd0;
  double in_xd4;
  double in_xd12;
  undefined8 in_xd14;
  bool bVar9;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar7 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar2 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12,uVar7);
  }
  else {
    puVar2 = (undefined8 *)auStack_20;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar2 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar2 + -8) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_dr12 = CONCAT44(uVar7,SUB84(in_dr4,0));
    in_xd4 = in_xd12;
    in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)in_dr14);
  }
  *(undefined4 *)((int)puVar2 + -0x24) = ar5;
  fVar3 = (float)in_dr12;
  if (in_FPSCR_SZ == '\0') {
    in_xd4 = (double)CONCAT44(fVar3,in_fr1);
  }
  fVar8 = (float)((ulonglong)in_dr4 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)in_xd4 >> 0x20) - fVar8,SUB84(in_xd4,0));
  }
  else {
    dVar4 = in_xd4 - in_dr4;
  }
  puVar1 = (undefined4 *)0xc;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar2 + -0x18) = (int)((ulonglong)dVar4 >> 0x20);
  }
  else {
    *(double *)((int)puVar2 + -0x18) = dVar4;
  }
  if (fVar8 != fVar3) {
    (*(code *)PTR_FUN_8c032cac)(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar2 + -0x1c) = (int)((ulonglong)dVar4 >> 0x20);
      uVar5 = CONCAT44(*(undefined4 *)((int)puVar2 + -0x1c),SUB84(dVar4,0));
      *(undefined4 *)((int)puVar2 + -0x10) = *(undefined4 *)((int)puVar2 + -0x1c);
    }
    else {
      *(double *)((int)puVar2 + -0x1c) = dVar4;
      uVar5 = *(undefined8 *)((int)puVar2 + -0x1c);
      *(undefined8 *)((int)puVar2 + -0x10) = uVar5;
    }
    (*(code *)PTR_FUN_8c032cac)(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar2 + -0x20) = (int)((ulonglong)uVar5 >> 0x20);
      *(undefined4 *)((int)puVar2 + -0x14) = *(undefined4 *)((int)puVar2 + -0x20);
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x10),fVar3);
      dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x14),(int)uVar5);
    }
    else {
      *(undefined8 *)((int)puVar2 + -0x20) = uVar5;
      *(undefined8 *)((int)puVar2 + -0x14) = *(undefined8 *)((int)puVar2 + -0x20);
      dVar4 = *(double *)((int)puVar2 + -0x10);
      dVar6 = *(double *)((int)puVar2 + -0x14);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + (float)((ulonglong)dVar6 >> 0x20)
                               ,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c032cb0,SUB84(dVar6,0));
    }
    else {
      dVar6 = (double)CONCAT44(DAT_8c032cb4,DAT_8c032cb0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) / (float)((ulonglong)dVar6 >> 0x20)
                               ,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 / dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c032cb4,(float)(*(int *)((int)puVar2 + -0x24) + -0x32));
    }
    else {
      dVar6 = (double)CONCAT44(_FUN_8c032cb8,DAT_8c032cb4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 * dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x18),fVar3);
    }
    else {
      dVar6 = *(double *)((int)puVar2 + -0x18);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 * dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar2 + -0xc) = fVar3;
    }
    else {
      *(undefined8 *)((int)puVar2 + -0xc) = in_xd0;
    }
    puVar1 = (undefined4 *)0x18;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0xc),fVar3);
    }
    else {
      dVar6 = *(double *)((int)puVar2 + -0xc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + (float)((ulonglong)dVar6 >> 0x20)
                               ,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar6;
    }
    fVar3 = (float)((ulonglong)dVar4 >> 0x20);
    if (in_FPSCR_PR != '\0' || fVar3 <= SUB84(dVar4,0)) {
      if (in_FPSCR_PR == '\0') {
        bVar9 = fVar3 < (float)((ulonglong)in_dr4 >> 0x20);
      }
      else {
        bVar9 = dVar4 < in_dr4;
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

/* WARNING: Unknown calling convention */

undefined4 FUN_8c032cb8(undefined4 ar4,undefined8 *ar5,double *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  double dVar2;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  puStack_1c = &uStack_34;
  puStack_18 = &uStack_3c;
  uStack_14 = 0;
  uStack_10 = 2;
  if (in_FPSCR_SZ == '\0') {
    uStack_34 = *(undefined4 *)ar5;
    uStack_30 = *(undefined4 *)((int)ar5 + 4);
    uStack_2c = *(undefined4 *)(ar5 + 1);
    dVar2 = (double)CONCAT44(*(undefined4 *)ar6,uStack_34);
  }
  else {
    uStack_34 = (undefined4)*ar5;
    uStack_30 = (undefined4)*(undefined8 *)((int)ar5 + 4);
    uStack_2c = (undefined4)ar5[1];
    in_xd0 = CONCAT44(uStack_30,uStack_34);
    dVar2 = *ar6;
  }
  if (in_FPSCR_PR == '\0') {
    fStack_28 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fStack_28 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar6 + 4),uStack_30);
  }
  else {
    fStack_28 = (float)in_xd0;
    in_xd0 = CONCAT44(uStack_2c,uStack_30);
    dVar2 = *(double *)((int)ar6 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_24 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fStack_24 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar6 + 1),uStack_2c);
  }
  else {
    fStack_24 = (float)in_xd0;
    in_xd0 = CONCAT44(fStack_28,uStack_2c);
    dVar2 = ar6[1];
  }
  if (in_FPSCR_PR == '\0') {
    fStack_20 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fStack_20 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ != '\0') {
    fStack_20 = (float)in_xd0;
    puStack_1c = (undefined4 *)((ulonglong)in_xd0 >> 0x20);
  }
  uStack_3c = ar7;
  uStack_38 = ar7;
  uVar1 = (*(code *)PTR_FUN_8c032d44)(&puStack_1c,1,0,ar7);
  return uVar1;
}



/* FUN_8c032d48 @ 8c032d48 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c032d48(int ar4,int ar5,int ar6,float ar7)

{
  int iVar1;
  int a6;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  double in_dr0;
  float fVar7;
  ulonglong uVar6;
  undefined4 in_fr3;
  double dVar8;
  undefined8 in_xd0;
  bool bVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_100;
  float fStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [116];
  double dVar5;
  
  uVar2 = 1;
  iVar1 = ar5;
  a6 = ar6;
  fStack_fc = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c032d98)((int)&fStack_fc + DAT_8c032d94,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c032da0)((int)&fStack_fc + DAT_8c032d9c,iVar1,a6,ar7);
  switch(*(undefined4 *)(DAT_8c032da4 + ar4)) {
  case 0:
    puStack_100 = (undefined1 *)((int)&fStack_fc + DAT_8c032ea4);
    (*(code *)PTR_Vec3_scale_8c032eac)(fStack_fc,PTR_DAT_8c032ea8,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c032eb4)
              ((int)&fStack_fc + DAT_8c032eb0,(int)&fStack_fc + DAT_8c032ea4,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c032eb8)((int)&fStack_fc + DAT_8c032ea4,0xffffffff,a6,ar7);
    puStack_100 = (undefined1 *)((int)&fStack_fc + DAT_8c032ebc);
    (*(code *)PTR_Vec3_scale_8c032eac)((int)&puStack_100 + DAT_8c032ec4,PTR_DAT_8c032ec0,a6,ar7);
    puStack_100 = (undefined1 *)((int)&fStack_fc + DAT_8c032ec8);
    (*(code *)PTR_Vec3_add_8c032ed0)(ar6,(int)&puStack_100 + DAT_8c032ecc,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c032eb4)(ar4 + 0x54,(int)&fStack_fc + DAT_8c032ec8,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c032eb8)((int)&fStack_fc + DAT_8c032ec8,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c032eb8)((int)&fStack_fc + DAT_8c032ebc,0xffffffff,a6,ar7);
    (*(code *)PTR_FUN_8c032ed8)(ar4,ar5,ar4 + 0x54,ar7);
    *(int *)(DAT_8c032edc + ar4) = *(int *)(DAT_8c032edc + ar4) + 1;
    iStack_d8 = ar4;
  case 1:
    fStack_bc = (float)(*(code *)PTR_FUN_8c032ee0)(ar4,ar4 + 0x54,ar5,ar7);
    a6 = ar5;
    if (fStack_bc == 0.0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(DAT_8c032edc + ar4) = *(int *)(DAT_8c032edc + ar4) + 1;
      iStack_dc = ar4;
    }
    break;
  case 2:
    (*(code *)PTR_Vec3_set_xyz_8c033024)((int)&fStack_fc + DAT_8c033020,iVar1,a6,ar7);
    puStack_100 = (undefined1 *)((int)&fStack_fc + DAT_8c033020);
    ar7 = (float)(ar4 + 0x14);
    (*(code *)PTR_FUN_8c03302c)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_vec3_copy_8c023d8c_8c033038)
              (ar4 + DAT_8c033034,(int)&fStack_fc + DAT_8c033030,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c03303c)((int)&fStack_fc + DAT_8c033030,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c03303c)((int)&fStack_fc + DAT_8c033020,0xffffffff,ar6,ar7);
    *(int *)(DAT_8c033040 + ar4) = *(int *)(DAT_8c033040 + ar4) + 1;
    a6 = ar6;
    iStack_e0 = ar4;
  case 3:
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c033044,*(undefined4 *)(ar4 + DAT_8c033034));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c033034);
      dVar5 = (double)CONCAT44(DAT_8c033048,DAT_8c033044);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 / dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)&fStack_fc + DAT_8c033048) = fVar4;
    }
    else {
      *(undefined8 *)((int)&fStack_fc + DAT_8c033048) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c033044,*(undefined4 *)(ar4 + DAT_8c03304c));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c03304c);
      dVar5 = (double)CONCAT44(DAT_8c033048,DAT_8c033044);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 / dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)&fStack_fc + DAT_8c033050) = fVar4;
    }
    else {
      *(undefined8 *)((int)&fStack_fc + DAT_8c033050) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c033044,*(undefined4 *)(ar4 + DAT_8c033054));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c033054);
      dVar5 = (double)CONCAT44(DAT_8c033048,DAT_8c033044);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 / dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)&fStack_fc + DAT_8c033058) = fVar4;
    }
    else {
      *(undefined8 *)((int)&fStack_fc + DAT_8c033058) = in_xd0;
    }
    (*(code *)PTR_vec3_copy_8c02b5fc_8c03305c)(auStack_84,(int)&fStack_fc + DAT_8c033048,a6,ar7);
    puStack_100 = auStack_94;
    (*(code *)PTR_FUN_8c033060)(ar4 + 0x14,auStack_84,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c033064)(ar4 + 0x14,auStack_94,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c033068)(auStack_94,0xffffffff,a6,ar7);
    (*(code *)PTR_object_dtor_delete_8c03303c)(auStack_84,0xffffffff,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + DAT_8c03306c);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c03306c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = fVar4 + 1.0;
    }
    else {
      fVar4 = SUB84((double)CONCAT44(0x3f800000,fVar4) + (double)CONCAT44(0x3f800000,fVar4),0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c03306c) = fVar4;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c03306c) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(DAT_8c033044,*(undefined4 *)(ar4 + DAT_8c03306c));
    }
    else {
      uVar6 = CONCAT44(DAT_8c033048,DAT_8c033044);
    }
    iStack_e4 = ar4;
    if (in_FPSCR_PR != '\0' || (float)(uVar6 >> 0x20) <= (float)uVar6) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c03306c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c03306c) = uVar6 & 0xffffffff;
      }
      *(int *)(DAT_8c033040 + ar4) = *(int *)(DAT_8c033040 + ar4) + 1;
      iStack_e8 = ar4;
    }
    break;
  case 4:
    puStack_100 = auStack_a4;
    (*(code *)PTR_Vec3_add_8c03317c)(ar5,ar6,a6,ar7);
    puStack_100 = auStack_b4;
    (*(code *)PTR_FUN_8c033184)(auStack_a4,PTR_DAT_8c033180,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c033188)(ar4 + 0x54,auStack_b4,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c03318c)(auStack_b4,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c03318c)(auStack_a4,0xffffffff,a6,ar7);
    a6 = ar4 + 0x54;
    (*(code *)PTR_FUN_8c033194)(ar4,ar5,a6,ar7);
    *(int *)(DAT_8c033198 + ar4) = *(int *)(DAT_8c033198 + ar4) + 1;
    iStack_ec = ar4;
  case 5:
    iVar1 = ar4 + 0x54;
    (*(code *)PTR_FUN_8c03319c)(ar5,iVar1,a6,ar7);
    fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(fVar4,in_fr3);
      dVar5 = (double)CONCAT44(DAT_8c0331a0,*(undefined4 *)(ar4 + 0x28));
      fStack_c0 = fVar4;
    }
    else {
      fStack_c0 = SUB84(in_dr0,0);
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar5 = (double)CONCAT44(PTR_FUN_8c0331a4,DAT_8c0331a0);
      fStack_bc = fVar4;
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = (float)((ulonglong)dVar5 >> 0x20);
      fVar4 = SUB84(dVar5,0) * fVar7;
      dVar5 = (double)CONCAT44(fVar7,fVar4);
      bVar9 = fVar4 < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      dVar5 = dVar5 * dVar5;
      bVar9 = dVar5 < in_dr0;
    }
    if (!bVar9) {
      (*(code *)PTR_FUN_8c03319c)(ar5,ar6,a6,ar7);
      fStack_c4 = SUB84(dVar5,0);
      fVar4 = (float)((ulonglong)dVar5 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(in_dr0,0));
        fStack_c4 = fVar4;
      }
      else {
        dVar8 = *(double *)(ar4 + 0x28);
        fStack_c0 = fVar4;
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) / fVar4,SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 / dVar5;
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = 1.0 - (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar4 = SUB84((double)CONCAT44(fVar4,0x3f800000) - dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar4);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x28);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)(ulonglong)(uint)(SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20));
      }
      else {
        dVar5 = dVar5 * dVar5;
      }
      iVar1 = ar6;
      iStack_f0 = ar4;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x28) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
    }
    uVar3 = SUB84(dVar5,0);
    (*(code *)PTR_FUN_8c0331a4)(ar4,iVar1,a6,ar7);
    fStack_c8 = (float)(*(code *)PTR_FUN_8c0331a8)(ar4,ar4 + 0x54,ar5,ar7);
    a6 = ar5;
    if (fStack_c8 == 0.0) {
      *(int *)(DAT_8c033198 + ar4) = *(int *)(DAT_8c033198 + ar4) + 1;
      *(undefined4 *)(ar4 + 0x40) = 3;
      iStack_f4 = ar4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x48) = CONCAT44(0x3f800000,uVar3);
      }
    }
    break;
  case 6:
    iVar1 = ar6;
    (*(code *)PTR_FUN_8c03328c)(ar5,ar6,a6,ar7);
    fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(fVar4,in_fr3);
      dVar5 = (double)CONCAT44(DAT_8c033290,*(undefined4 *)(ar4 + 0x28));
      fStack_cc = fVar4;
    }
    else {
      fStack_cc = SUB84(in_dr0,0);
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar5 = (double)CONCAT44(_DAT_8c033294,DAT_8c033290);
      fStack_c8 = fVar4;
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = (float)((ulonglong)dVar5 >> 0x20);
      fVar4 = SUB84(dVar5,0) * fVar7;
      dVar5 = (double)CONCAT44(fVar7,fVar4);
      bVar9 = fVar4 < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      dVar5 = dVar5 * dVar5;
      bVar9 = dVar5 < in_dr0;
    }
    if (!bVar9) {
      iVar1 = ar6;
      (*(code *)PTR_FUN_8c03328c)(ar5,ar6,a6,ar7);
      fStack_d0 = SUB84(dVar5,0);
      fVar4 = (float)((ulonglong)dVar5 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(in_dr0,0));
        fStack_d0 = fVar4;
      }
      else {
        dVar8 = *(double *)(ar4 + 0x28);
        fStack_cc = fVar4;
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) / fVar4,SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 / dVar5;
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = 1.0 - (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar4 = SUB84((double)CONCAT44(fVar4,0x3f800000) - dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar4);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x28);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      iStack_f8 = ar4;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x28) = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(_DAT_8c033294,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      uVar6 = CONCAT44(PTR_FUN_8c033298,_DAT_8c033294);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar6 < (float)(uVar6 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44(_DAT_8c033294,(float)uVar6);
        *(undefined4 *)(ar4 + 0x28) = _DAT_8c033294;
      }
      else {
        uVar6 = CONCAT44(PTR_FUN_8c033298,_DAT_8c033294);
        *(ulonglong *)(ar4 + 0x28) = uVar6;
      }
    }
    (*(code *)PTR_FUN_8c033298)(ar4,iVar1,a6,ar7);
    a6 = ar5;
    (*(code *)PTR_FUN_8c03329c)(ar4,ar6,ar5,ar7);
    (*(code *)PTR_FUN_8c03328c)(ar5,ar6,a6,ar7);
    fVar4 = (float)(uVar6 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      uVar6 = (ulonglong)(uint)fVar4;
      fStack_d4 = fVar4;
    }
    else {
      fStack_d4 = (float)uVar6;
      fStack_d0 = fVar4;
    }
    if (in_FPSCR_PR != '\0' || (float)uVar6 <= 1.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = uVar6 & 0xffffffff;
      }
      uVar2 = 0;
      *(undefined4 *)(DAT_8c0332a0 + ar4) = 0;
    }
  }
  uStack_b8 = uVar2;
  (*(code *)PTR_object_dtor_delete_8c0332a8)((int)&fStack_fc + DAT_8c0332a4,0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0332b0)((int)&fStack_fc + DAT_8c0332ac,0xffffffff,a6,ar7);
  return uStack_b8;
}



/* FUN_8c0332b4 @ 8c0332b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0332b4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *a5;
  undefined4 a6;
  undefined4 a7;
  double in_dr0;
  float fVar5;
  int iVar6;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double in_dr2;
  undefined8 in_xd0;
  bool bVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  float *in_stack_00000004;
  int iStack_68;
  int iStack_64;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  a6 = ar6;
  a7 = ar7;
  (*(code *)PTR_Vec3_set_zero_8c033444)(&fStack_18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_sub_8c033448)(ar6,ar5,a6,a7);
  uVar1 = (*(code *)PTR_Vec3_length_8c03344c)(auStack_38,ar5,a6,a7);
  (*(code *)PTR_Vec3_ctor_copy_8c033450)(auStack_28,uVar1,a6,a7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c033454)(auStack_38,0xffffffff,a6,a7);
  (*(code *)PTR_FUN_8c033458)(ar7,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c033458)(auStack_28,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c03345c)(auStack_48,auStack_58,a6,a7);
  fStack_14 = SUB84(in_dr0,0);
  fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    fStack_14 = fVar5;
    fVar5 = fStack_10;
  }
  fStack_10 = fVar5;
  (*(code *)PTR_Vec3_dtor_8c033454)(auStack_58,0xffffffff,a6,a7);
  (*(code *)PTR_Vec3_dtor_8c033454)(auStack_48,0xffffffff,a6,a7);
  a5 = auStack_28;
  iStack_64 = (*(code *)PTR_FUN_8c033460)(ar7,a5,a6,a7);
  if (iStack_64 == 4) {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c033464,fStack_14);
    }
    else {
      in_xd0 = CONCAT44(fStack_10,fStack_14);
      in_dr0 = (double)CONCAT44(PTR_FUN_8c033468,DAT_8c033464);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(fVar5,SUB84(in_dr0,0) * fVar5);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      fStack_14 = SUB84(in_dr0,0);
    }
    else {
      fStack_14 = (float)in_xd0;
      fStack_10 = (float)((ulonglong)in_xd0 >> 0x20);
    }
  }
  (*(code *)PTR_FUN_8c033468)(auStack_28,a5,a6,a7);
  iVar6 = (int)((ulonglong)in_dr0 >> 0x20);
  iStack_68 = iVar6;
  if (in_FPSCR_SZ != '\0') {
    iStack_68 = SUB84(in_dr0,0);
    iStack_64 = iVar6;
  }
  (*(code *)PTR_FUN_8c033468)(ar7,a5,a6,a7);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = (double)CONCAT44(uVar1,iStack_68);
  }
  else {
    in_xd0 = CONCAT44(iStack_64,uVar1);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_18 = SUB84(in_dr0,0) - (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    fStack_18 = SUB84(in_dr0 - in_dr0,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar2 = CONCAT44(*in_stack_00000004,fStack_18);
  }
  else {
    fStack_18 = (float)in_xd0;
    fStack_14 = (float)((ulonglong)in_xd0 >> 0x20);
    uVar2 = *(undefined8 *)in_stack_00000004;
  }
  if (in_FPSCR_PR != '\0' || (float)uVar2 <= (float)((ulonglong)uVar2 >> 0x20)) {
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44(fStack_18,SUB84(in_dr2,0));
      dVar3 = (double)CONCAT44(DAT_8c033464,*in_stack_00000004);
    }
    else {
      in_dr2 = (double)CONCAT44(fStack_14,fStack_18);
      in_xd0 = *(undefined8 *)in_stack_00000004;
      dVar3 = (double)CONCAT44(PTR_FUN_8c033468,DAT_8c033464);
    }
    if (in_FPSCR_PR == '\0') {
      bVar7 = (float)((ulonglong)in_dr2 >> 0x20) <
              SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      bVar7 = in_dr2 < dVar3 * dVar3;
    }
    if (bVar7) {
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(DAT_8c033464,*in_stack_00000004);
      }
      else {
        in_xd0 = *(undefined8 *)in_stack_00000004;
        dVar3 = (double)CONCAT44(PTR_FUN_8c033468,DAT_8c033464);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_18 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        fStack_18 = SUB84(dVar3 * dVar3,0);
      }
      if (in_FPSCR_SZ != '\0') {
        fStack_18 = (float)in_xd0;
        fStack_14 = (float)((ulonglong)in_xd0 >> 0x20);
      }
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    fStack_18 = *in_stack_00000004;
  }
  else {
    fStack_18 = (float)*(undefined8 *)in_stack_00000004;
    fStack_14 = (float)((ulonglong)*(undefined8 *)in_stack_00000004 >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar2 = CONCAT44(in_stack_00000004[1],fStack_14);
  }
  else {
    in_xd0 = CONCAT44(fStack_10,fStack_14);
    uVar2 = *(undefined8 *)(in_stack_00000004 + 1);
  }
  if (in_FPSCR_PR != '\0' || (float)uVar2 <= (float)((ulonglong)uVar2 >> 0x20)) {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(fStack_14,SUB84(in_dr2,0));
      dVar4 = (double)CONCAT44(DAT_8c033464,in_stack_00000004[1]);
    }
    else {
      dVar3 = (double)CONCAT44(fStack_10,fStack_14);
      in_xd0 = *(undefined8 *)(in_stack_00000004 + 1);
      dVar4 = (double)CONCAT44(PTR_FUN_8c033468,DAT_8c033464);
    }
    if (in_FPSCR_PR == '\0') {
      bVar7 = (float)((ulonglong)dVar3 >> 0x20) < SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20)
      ;
    }
    else {
      bVar7 = dVar3 < dVar4 * dVar4;
    }
    if (bVar7) {
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(DAT_8c033464,in_stack_00000004[1]);
      }
      else {
        in_xd0 = *(undefined8 *)(in_stack_00000004 + 1);
        dVar3 = (double)CONCAT44(PTR_FUN_8c033468,DAT_8c033464);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_14 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        fStack_14 = SUB84(dVar3 * dVar3,0);
      }
      if (in_FPSCR_SZ != '\0') {
        fStack_14 = (float)in_xd0;
        fStack_10 = (float)((ulonglong)in_xd0 >> 0x20);
      }
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    fStack_14 = in_stack_00000004[1];
  }
  else {
    uVar2 = *(undefined8 *)(in_stack_00000004 + 1);
    fStack_14 = (float)uVar2;
    fStack_10 = (float)((ulonglong)uVar2 >> 0x20);
  }
  (*(code *)PTR_vec3_copy_8c02b5fc_8c03346c)(in_stack_00000000,&fStack_18,a6,a7);
  (*(code *)PTR_Vec3_dtor_8c033454)(auStack_28,0xffffffff,a6,a7);
  (*(code *)PTR_object_dtor_delete_8c033470)(&fStack_18,0xffffffff,a6,a7);
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
    (*(code *)PTR_Vec3_sub_8c03351c)(ar6,auStack_14,a6,a7);
    (*(code *)PTR_Vec3_ctor_copy_8c033520)(auStack_24,auStack_34,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c033524)(auStack_34,0xffffffff,a6,a7);
    (*(code *)PTR_FUN_8c03352c)(DAT_8c033528,ar5,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c033524)(auStack_24,0xffffffff,a6,a7);
    uVar1 = (*(code *)PTR_Vec3_dtor_8c033524)(auStack_14,0xffffffff,a6,a7);
  }
  return uVar1;
}



/* FUN_8c033530 @ 8c033530 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0335a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c033530(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 a5;
  undefined8 *puVar3;
  float fVar4;
  double dVar5;
  undefined8 in_dr4;
  double in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar6;
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
  *(undefined4 *)((int)puVar3 + -4) = in_PR;
  *(undefined4 *)((int)puVar3 + -0x7c) = ar4;
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr4 >> 0x20));
    in_dr4 = in_xd14;
  }
  (*(code *)PTR_Vec3_ctor_zero_8c0336a8)((undefined1 *)((int)puVar3 + -0x14),ar5,ar6,ar7);
  puVar2 = (undefined1 *)((int)puVar3 + -0x24);
  (*(code *)PTR_Vec3_ctor_xyz_8c0336b4)(puVar2,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar3 + -0x58) = _DAT_8c0336b8;
  }
  else {
    *(ulonglong *)((int)puVar3 + -0x58) = CONCAT44(PTR_rand_8c0336bc,_DAT_8c0336b8);
  }
  uVar1 = (*(code *)PTR_rand_8c0336bc)(puVar2,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0x5c) = uVar1;
  uVar1 = (*(code *)PTR_rand_8c0336bc)(puVar2,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0x60) = uVar1;
  uVar1 = (*(code *)PTR_rand_8c0336bc)(puVar2,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -100) = uVar1;
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0336c0)
                    (*(undefined4 *)((int)puVar3 + -0x5c),100,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0x6c) = uVar1;
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0336c0)
                    (*(undefined4 *)((int)puVar3 + -0x60),100,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0x70) = uVar1;
  a5 = 100;
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0336c0)
                    (*(undefined4 *)((int)puVar3 + -100),100,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0x74) = uVar1;
  (*(code *)PTR_FUN_8c0336c4)((undefined1 *)((int)puVar3 + -0x14),a5,ar6,ar7);
  *(undefined1 **)((int)puVar3 + -0x80) = (undefined1 *)((int)puVar3 + -0x34);
  (*(code *)PTR_Vec3_normalize_8c0336c8)((undefined1 *)((int)puVar3 + -0x14),a5,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c0336cc)
            ((undefined1 *)((int)puVar3 + -0x14),(undefined1 *)((int)puVar3 + -0x34),ar6,ar7);
  uVar1 = 0xffffffff;
  puVar2 = (undefined1 *)((int)puVar3 + -0x34);
  (*(code *)PTR_Vec3_dtor_8c0336d0)(puVar2,0xffffffff,ar6,ar7);
  uVar1 = (*(code *)PTR_rand_8c0336bc)(puVar2,uVar1,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0x68) = uVar1;
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0336c0)
                    (*(undefined4 *)((int)puVar3 + -0x68),100,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0x78) = uVar1;
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0336d4,*(undefined4 *)((int)puVar3 + -0x58));
  }
  else {
    in_xd0 = *(undefined8 *)((int)puVar3 + -0x58);
    dVar5 = (double)CONCAT44(PTR_Vec3_scale_8c0336d8,DAT_8c0336d4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = fVar4 * (float)*(int *)((int)puVar3 + -0x78);
  }
  else {
    dVar5 = (double)*(int *)((int)puVar3 + -0x78);
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)puVar3 + -0x58) = fVar4;
  }
  else {
    *(undefined8 *)((int)puVar3 + -0x58) = in_xd0;
  }
  *(undefined1 **)((int)puVar3 + -0x80) = (undefined1 *)((int)puVar3 + -0x44);
  (*(code *)PTR_Vec3_scale_8c0336d8)
            ((undefined1 *)((int)puVar3 + -0x14),(undefined1 *)((int)puVar3 + -0x58),ar6,ar7);
  *(undefined1 **)((int)puVar3 + -0x80) = (undefined1 *)((int)puVar3 + -0x54);
  (*(code *)PTR_Vec3_add_8c0336dc)
            ((undefined1 *)((int)puVar3 + -0x44),(undefined1 *)((int)puVar3 + -0x24),ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c0336cc)
            ((undefined1 *)((int)puVar3 + -0x14),(undefined1 *)((int)puVar3 + -0x54),ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0336d0)((undefined1 *)((int)puVar3 + -0x54),0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0336d0)((undefined1 *)((int)puVar3 + -0x44),0xffffffff,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + -0x10),fVar4);
  }
  else {
    dVar5 = *(double *)((int)puVar3 + -0x10);
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = SUB84(in_dr14,0) < (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    bVar6 = in_dr14 < dVar5;
  }
  if (bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar3 + -0x7c) + 0x48),SUB84(dVar5,0))
      ;
    }
    else {
      dVar5 = *(double *)(*(int *)((int)puVar3 + -0x7c) + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(in_dr14,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(in_dr14 - dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar3 + -0x10) = fVar4;
    }
    else {
      *(undefined8 *)((int)puVar3 + -0x10) = in_dr4;
    }
  }
  (*(code *)PTR_Vec3_ctor_copy_8c0336e4)
            (*(undefined4 *)((int)puVar3 + DAT_8c0336e0 + -0x7c),(undefined1 *)((int)puVar3 + -0x14)
             ,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0336d0)((undefined1 *)((int)puVar3 + -0x24),0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0336d0)((undefined1 *)((int)puVar3 + -0x14),0xffffffff,ar6,ar7);
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
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = in_PR;
  (*(code *)PTR_Vec3_set_zero_8c033754)(&uStack_18,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c033758)(ar4,&uStack_18,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(uStack_18,*(undefined4 *)ar5);
  }
  else {
    in_xd0 = *ar5;
    dVar3 = (double)CONCAT44(uStack_14,uStack_18);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c03375c) = fVar2;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c03375c) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(uStack_14,*(undefined4 *)((int)ar5 + 4));
  }
  else {
    in_xd0 = *(undefined8 *)((int)ar5 + 4);
    dVar3 = (double)CONCAT44(uStack_10,uStack_14);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c033760) = fVar2;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c033760) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(uStack_10,*(undefined4 *)(ar5 + 1));
  }
  else {
    in_xd0 = ar5[1];
    dVar3 = (double)CONCAT44(uStack_c,uStack_10);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c033764) = fVar2;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c033764) = in_xd0;
  }
  uVar1 = (*(code *)PTR_object_dtor_delete_8c033768)(&uStack_18,0xffffffff,ar6,ar7);
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
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = PTR_DAT_8c0339a8, 0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c0339ac)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c0339b0 @ 8c0339b0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0339b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  ulonglong uVar1;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x20) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x20) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(ar4 + 0x1c) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x24) = 1;
  *(undefined1 *)(ar4 + 0x54) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x58) = 0;
    uVar1 = CONCAT44(DAT_8c033a88,in_fr1);
    *(undefined4 *)(ar4 + 100) = DAT_8c033a88;
  }
  else {
    *(ulonglong *)(ar4 + 0x58) = (ulonglong)in_fr1;
    uVar1 = CONCAT44(_s_CAnimBody_SetAnimation_033a94,DAT_8c033a88);
    *(ulonglong *)(ar4 + 100) = uVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x60) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x60) = uVar1 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x5c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x5c) = uVar1 & 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x38) = 0;
  *(undefined4 *)(ar4 + 0x34) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 0x3c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x40) = uVar1 & 0xffffffff;
    *(ulonglong *)(ar4 + 0x3c) = uVar1 & 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x50) = 0;
    *(undefined4 *)(ar4 + 0x4c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x50) = uVar1 & 0xffffffff;
    *(ulonglong *)(ar4 + 0x4c) = uVar1 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x68) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x68) = CONCAT44(0x3f800000,(int)uVar1);
  }
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
  int a5;
  
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
      a5 = ar5;
      (*(code *)PTR_s_CAnimBody_SetInterpolate_033f7e_8c033b94)(ar4,ar5,1,ar7);
      *(int *)(ar4 + 0x1c) = ar5;
      (*(code *)PTR_FUN_8c033b88)(ar4,a5,ar6,ar7);
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

/* WARNING: Removing unreachable block (ram,0x8c033cd4) */
/* WARNING: Unknown calling convention */

undefined4 s_CAnimBody_AdvanceFrame_033ba0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  int iVar2;
  undefined4 unaff_r13;
  undefined4 uVar3;
  undefined4 unaff_r14;
  undefined1 *puVar4;
  undefined4 in_fr1;
  float fVar5;
  double dVar6;
  undefined4 in_fr5;
  float in_fr4;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
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
  *(undefined4 *)(puVar4 + -0xc) = 1;
  *(undefined4 *)(puVar4 + -0x10) = in_PR;
  if (in_FPSCR_SZ != '\0') {
    in_xd14 = CONCAT44(in_fr4,in_fr5);
    in_fr4 = in_fr15;
  }
  if (*(int *)(ar4 + 0x1c) < 0) {
    *(undefined4 *)(puVar4 + -0x28) = 5;
    ar7 = 2;
    ar6 = 1;
    (*(code *)PTR_report_error_message_8c033d28)
              (PTR_s_Invalid_AnimationID___8c033d24 + 0x30,
               PTR_s_Invalid_AnimationID___8c033d24 + 0x42,1,2);
    *(undefined4 *)(ar4 + 0x1c) = 0;
  }
  uVar3 = 0;
  *(int *)(puVar4 + -0x18) = ar4;
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)*(int *)(ar4 + 0x24),in_fr1);
  }
  else {
    dVar6 = (double)*(int *)(ar4 + 0x24);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),in_fr4);
    in_xd14 = in_xd0;
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar4 + -0x18) + 0x20),fVar5);
  }
  else {
    dVar6 = *(double *)(*(int *)(puVar4 + -0x18) + 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 + dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(*(int *)(puVar4 + -0x18) + 0x20) = fVar5;
  }
  else {
    *(undefined8 *)(*(int *)(puVar4 + -0x18) + 0x20) = in_xd14;
  }
  a5 = *(undefined4 *)(ar4 + 0x1c);
  uVar1 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c033d2c)(ar4,a5,ar6,ar7);
  *(undefined4 *)(puVar4 + -0x14) = uVar1;
  iVar2 = *(int *)(puVar4 + -0x14);
  *(undefined4 *)(ar4 + 0x70) = 0;
  if (*(int *)(ar4 + 0x28) == 0) {
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(ar4 + 0x20);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x20);
    }
    iVar2 = iVar2 + -1;
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)iVar2,fVar5);
    }
    else {
      dVar6 = (double)iVar2;
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar6 >> 0x20) < SUB84(dVar6,0)) {
      (*(code *)PTR_FUN_8c033d30)(ar4,a5,ar6,ar7);
      uVar3 = 1;
      *(undefined4 *)(ar4 + 0x70) = 1;
      if (*(int *)(ar4 + 0x2c) != -1) {
        *(undefined4 *)(ar4 + 0x1c) = *(undefined4 *)(ar4 + 0x2c);
        *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x30);
        *(undefined4 *)(ar4 + 0x2c) = 0xffffffff;
        uVar3 = 2;
        *(undefined4 *)(ar4 + 0x70) = 0;
      }
    }
    if (*(char *)(ar4 + 0x54) != '\0') {
      *(int *)(puVar4 + -0x1c) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(ar4 + 0x60));
      }
      else {
        in_xd14 = *(undefined8 *)(ar4 + 0x60);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar6,0) * in_fr4;
      }
      else {
        fVar5 = SUB84(dVar6 * (double)CONCAT44(in_fr14,in_fr4),0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar4 + -0x1c) + 0x58),fVar5);
      }
      else {
        dVar6 = *(double *)(*(int *)(puVar4 + -0x1c) + 0x58);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)(puVar4 + -0x1c) + 0x58) = fVar5;
      }
      else {
        *(undefined8 *)(*(int *)(puVar4 + -0x1c) + 0x58) = in_xd14;
      }
      uVar3 = 3;
      *(undefined4 *)(ar4 + 0x70) = 0;
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)(ar4 + 0x58);
      }
      if (in_FPSCR_PR != '\0' || 1.0 <= fVar5) {
        *(undefined1 *)(ar4 + 0x54) = 0;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x58) = (ulonglong)(uint)fVar5;
        }
        uVar3 = 4;
        *(undefined4 *)(ar4 + 0x70) = 1;
      }
    }
  }
  else if (*(int *)(ar4 + 0x28) == 1) {
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(ar4 + 0x20);
    }
    iVar2 = iVar2 + -1;
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)iVar2,fVar5);
    }
    else {
      dVar6 = (double)iVar2;
    }
    if (in_FPSCR_PR != '\0' || SUB84(dVar6,0) <= (float)((ulonglong)dVar6 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)(ulonglong)*(uint *)(ar4 + 0x20);
      }
      fVar5 = SUB84(dVar6,0);
      if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *(float *)(ar4 + 0x20);
        }
        if (fVar5 != 0.0) {
          *(int *)(puVar4 + -0x24) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar6 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar4 + -0x24) + 0x20),fVar5);
          }
          else {
            dVar6 = *(double *)(*(int *)(puVar4 + -0x24) + 0x20);
          }
          if (in_FPSCR_PR == '\0') {
            dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + in_fr4,SUB84(dVar6,0));
          }
          else {
            dVar6 = dVar6 + (double)CONCAT44(in_fr14,in_fr4);
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(*(int *)(puVar4 + -0x24) + 0x20) = (int)((ulonglong)dVar6 >> 0x20);
          }
          else {
            *(double *)(*(int *)(puVar4 + -0x24) + 0x20) = dVar6;
          }
        }
        *(undefined4 *)(ar4 + 0x24) = 1;
        uVar3 = 1;
        *(undefined4 *)(ar4 + 0x70) = 1;
        if (*(int *)(ar4 + 0x2c) != -1) {
          *(undefined4 *)(ar4 + 0x1c) = *(undefined4 *)(ar4 + 0x2c);
          *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x30);
          *(undefined4 *)(ar4 + 0x2c) = 0xffffffff;
          uVar3 = 2;
          *(undefined4 *)(ar4 + 0x70) = 0;
        }
      }
    }
    else {
      *(int *)(puVar4 + -0x20) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar4 + -0x20) + 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = *(double *)(*(int *)(puVar4 + -0x20) + 0x20);
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - in_fr4,SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - (double)CONCAT44(in_fr14,in_fr4);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)(puVar4 + -0x20) + 0x20) = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(*(int *)(puVar4 + -0x20) + 0x20) = dVar6;
      }
      *(undefined4 *)(ar4 + 0x24) = 0xffffffff;
      uVar3 = 5;
    }
  }
  return uVar3;
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
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar1 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c033d84)
                    (ar4,*(undefined4 *)(ar4 + 0x1c),ar6,ar7);
  while( true ) {
    uVar3 = SUB84(in_dr0,0);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = *(undefined4 *)(ar4 + 0x20);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x20);
    }
    iVar2 = iVar1 + -1;
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)iVar2,uVar3);
    }
    else {
      dVar4 = (double)iVar2;
    }
    if (in_FPSCR_PR != '\0' || SUB84(dVar4,0) <= (float)((ulonglong)dVar4 >> 0x20)) break;
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)(ulonglong)*(uint *)(ar4 + 0x20);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x20);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr0 = (double)(ulonglong)(uint)(SUB84(dVar4,0) - (float)iVar1);
    }
    else {
      in_dr0 = (double)iVar1 - (double)iVar1;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x20) = SUB84(in_dr0,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x20) = in_xd0;
    }
  }
  return iVar2;
}



/* s_CAnimBody_AdvanceFrame_033d90 @ 8c033d88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CAnimBody_AdvanceFrame_033d90(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r13;
  undefined4 uVar1;
  undefined4 unaff_r14;
  undefined8 *puVar2;
  undefined4 in_fr1;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  undefined8 in_dr14;
  double in_xd0;
  double dVar6;
  undefined8 in_xd4;
  undefined8 in_xd14;
  bool bVar7;
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
  *(undefined4 *)((int)puVar2 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar2 + -0xc) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar2 + -0x18) = in_fr5;
    in_fr5 = in_fr6;
  }
  else {
    *(undefined8 *)((int)puVar2 + -0x18) = in_xd4;
  }
  dVar5 = (double)CONCAT44(in_fr4,in_fr5);
  if (*(int *)(ar4 + 0x1c) < 0) {
    *(undefined4 *)((int)puVar2 + -0x1c) = 5;
    ar7 = 2;
    ar6 = 1;
    ar5 = PTR_s_Invalid_AnimationID___8c033e5c + 0x42;
    (*(code *)PTR_report_error_message_8c033e60)
              (PTR_s_Invalid_AnimationID___8c033e5c + 0x30,ar5,1,2);
    *(undefined4 *)(ar4 + 0x1c) = 0;
  }
  *(undefined4 *)(ar4 + 0x70) = 0;
  uVar1 = 0;
  *(int *)((int)puVar2 + -0x10) = ar4;
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)*(int *)(ar4 + 0x24),in_fr1);
  }
  else {
    dVar4 = (double)*(int *)(ar4 + 0x24);
  }
  dVar6 = dVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),(int)((ulonglong)dVar5 >> 0x20));
    dVar6 = in_xd0;
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar2 + -0x10) + 0x20),fVar3);
  }
  else {
    dVar4 = *(double *)(*(int *)((int)puVar2 + -0x10) + 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(*(int *)((int)puVar2 + -0x10) + 0x20) = fVar3;
  }
  else {
    *(double *)(*(int *)((int)puVar2 + -0x10) + 0x20) = dVar6;
  }
  (*(code *)PTR_FUN_8c033e64)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x20),fVar3);
  }
  else {
    dVar4 = *(double *)(ar4 + 0x20);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar7 = fVar3 < SUB84(dVar5,0);
  }
  else {
    bVar7 = dVar4 < dVar5;
  }
  if (!bVar7) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x20));
    }
    else {
      dVar6 = *(double *)(ar4 + 0x20);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) - SUB84(dVar5,0);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x18),fVar3);
    }
    else {
      dVar4 = *(double *)((int)puVar2 + -0x18);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = (float)((ulonglong)dVar4 >> 0x20);
      dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
    }
    else {
      dVar4 = dVar4 + dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x20) = SUB84(dVar4,0);
    }
    else {
      *(double *)(ar4 + 0x20) = dVar6;
    }
    uVar1 = 7;
  }
  if (*(char *)(ar4 + 0x54) != '\0') {
    *(int *)((int)puVar2 + -0x14) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 0x60));
    }
    else {
      dVar6 = *(double *)(ar4 + 0x60);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar2 + -0x14) + 0x58),fVar3);
    }
    else {
      dVar5 = *(double *)(*(int *)((int)puVar2 + -0x14) + 0x58);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 + dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar2 + -0x14) + 0x58) = fVar3;
    }
    else {
      *(double *)(*(int *)((int)puVar2 + -0x14) + 0x58) = dVar6;
    }
    uVar1 = 3;
    if (in_FPSCR_SZ == '\0') {
      fVar3 = *(float *)(ar4 + 0x58);
    }
    if (in_FPSCR_PR != '\0' || 1.0 <= fVar3) {
      *(undefined1 *)(ar4 + 0x54) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x58) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x58) = (ulonglong)(uint)fVar3;
      }
      uVar1 = 4;
    }
  }
  return uVar1;
}



/* s_CAnimBody_SetFrame_033e6e @ 8c033e68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CAnimBody_SetFrame_033e6e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 uVar2;
  undefined4 in_fr1;
  float fVar3;
  undefined4 uVar4;
  double dVar5;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_18;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_18 = CONCAT44(uStack_18._4_4_,in_fr4);
  }
  else {
    uStack_18 = CONCAT44(in_fr4,in_fr5);
  }
  if (*(int *)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    (*(code *)PTR_report_error_message_8c033f68)
              (PTR_s_Invalid_AnimationID___8c033f64 + 0x30,
               PTR_s_Invalid_AnimationID___8c033f64 + 0x79,1,2);
    *(undefined4 *)(ar4 + 0x1c) = 0;
  }
  *(undefined4 *)(ar4 + 0x70) = 0;
  uVar2 = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x20) = (undefined4)uStack_18;
    uStack_18 = CONCAT44((undefined4)uStack_18,in_fr1);
  }
  else {
    *(undefined8 *)(ar4 + 0x20) = uStack_18;
  }
  uVar4 = (undefined4)uStack_18;
  a5 = *(undefined4 *)(ar4 + 0x1c);
  iVar1 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c033f6c)(ar4,a5,ar6,ar7);
  if (*(char *)(ar4 + 0x54) == '\0') {
    if (in_FPSCR_SZ == '\0') {
      uVar4 = *(undefined4 *)(ar4 + 0x20);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)(iVar1 + -1),uVar4);
    }
    else {
      dVar5 = (double)(iVar1 + -1);
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar5,0)) {
      (*(code *)PTR_FUN_8c033f70)(ar4,a5,ar6,ar7);
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
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(ar4 + 0x20));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x20);
      dVar5 = *(double *)(ar4 + 0x5c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 - dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 100),fVar3);
    }
    else {
      dVar5 = *(double *)(ar4 + 100);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 / dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x58) = fVar3;
    }
    else {
      *(undefined8 *)(ar4 + 0x58) = in_xd0;
    }
    uVar2 = 3;
    if (in_FPSCR_SZ == '\0') {
      fVar3 = *(float *)(ar4 + 0x58);
    }
    if (in_FPSCR_PR != '\0' || 1.0 <= fVar3) {
      *(undefined1 *)(ar4 + 0x54) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x5c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x5c) = (ulonglong)(uint)fVar3;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x58) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x58) = (ulonglong)(uint)fVar3;
      }
      (*(code *)PTR_FUN_8c033f70)(ar4,a5,ar6,ar7);
      uVar2 = 4;
      *(undefined4 *)(ar4 + 0x70) = 1;
    }
  }
  return uVar2;
}



/* s_CAnimBody_SetInterpolate_033f7e @ 8c033f74 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c03403a) */
/* WARNING: Unknown calling convention */

undefined4 s_CAnimBody_SetInterpolate_033f7e(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *a5;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int iVar2;
  undefined4 unaff_r14;
  undefined1 *puVar3;
  undefined4 in_fr1;
  float fVar4;
  double dVar5;
  ulonglong uVar6;
  undefined4 in_fr5;
  float in_fr4;
  float in_fr15;
  undefined8 in_xd0;
  undefined8 in_xd14;
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
  *(undefined4 *)(puVar3 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar3 + -0x14) = in_PR;
  if (in_FPSCR_SZ != '\0') {
    in_xd14 = CONCAT44(in_fr4,in_fr5);
    in_fr4 = in_fr15;
  }
  a5 = ar5;
  if (*(int *)(ar4 + 0x1c) < 0) {
    *(undefined4 *)(puVar3 + -0x4c) = 5;
    ar7 = 2;
    ar6 = 1;
    a5 = PTR_s_Invalid_AnimationID___8c034128 + DAT_8c03412c;
    (*(code *)PTR_report_error_message_8c034130)(PTR_s_Invalid_AnimationID___8c034128 + 0x30,a5,1,2)
    ;
    *(undefined4 *)(ar4 + 0x1c) = 0;
  }
  *(undefined4 *)(puVar3 + -0x30) = *(undefined4 *)(ar4 + 0x1c);
  uVar1 = (*(code *)PTR_deref_u32_8c034134)
                    (*(int *)(ar4 + 0x14) + *(int *)(puVar3 + -0x30) * 4,a5,ar6,ar7);
  *(undefined4 *)(puVar3 + -0x18) = uVar1;
  *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(puVar3 + -0x18);
  *(undefined **)(puVar3 + -0x34) = ar5;
  uVar1 = (*(code *)PTR_deref_u32_8c034134)
                    (*(int *)(ar4 + 0x14) + *(int *)(puVar3 + -0x34) * 4,a5,ar6,ar7);
  *(undefined4 *)(puVar3 + -0x1c) = uVar1;
  *(undefined4 *)(ar4 + 0x38) = *(undefined4 *)(puVar3 + -0x1c);
  *(undefined4 *)(puVar3 + -0x38) = *(undefined4 *)(ar4 + 0x1c);
  uVar1 = (*(code *)PTR_FUN_8c034138)
                    (*(int *)(ar4 + 0x18) + *(int *)(puVar3 + -0x38) * 4,a5,ar6,ar7);
  *(undefined4 *)(puVar3 + -0x20) = uVar1;
  *(undefined4 *)(ar4 + 0x44) = *(undefined4 *)(puVar3 + -0x20);
  *(undefined **)(puVar3 + -0x3c) = ar5;
  uVar1 = (*(code *)PTR_FUN_8c034138)
                    (*(int *)(ar4 + 0x18) + *(int *)(puVar3 + -0x3c) * 4,a5,ar6,ar7);
  *(undefined4 *)(puVar3 + -0x24) = uVar1;
  *(undefined4 *)(ar4 + 0x48) = *(undefined4 *)(puVar3 + -0x24);
  (*(code *)PTR_FUN_8c03413c)(ar4,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar3 + -0x40) = *(undefined4 *)(ar4 + 0x20);
    *(undefined4 *)(ar4 + 0x4c) = *(undefined4 *)(puVar3 + -0x40);
    *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(puVar3 + -0x40);
    dVar5 = (double)CONCAT44(DAT_8c034140,in_fr1);
  }
  else {
    *(undefined8 *)(puVar3 + -0x40) = *(undefined8 *)(ar4 + 0x20);
    *(undefined8 *)(ar4 + 0x4c) = *(undefined8 *)(puVar3 + -0x40);
    *(undefined8 *)(ar4 + 0x3c) = *(undefined8 *)(puVar3 + -0x40);
    dVar5 = (double)CONCAT44(PTR_s_Check_This_Motion_Data_0314fc_8c034144,DAT_8c034140);
  }
  if (in_fr4 == (float)((ulonglong)dVar5 >> 0x20)) {
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 100),*(undefined4 *)(ar4 + 0x20));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x20);
      dVar5 = *(double *)(ar4 + 100);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)(ulonglong)(uint)(SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20));
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x40) = SUB84(dVar5,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x40) = in_xd0;
    }
    uVar1 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c034144)
                      (ar4,*(undefined4 *)(ar4 + 0x1c),ar6,ar7);
    *(undefined4 *)(puVar3 + -0x28) = uVar1;
    iVar2 = *(int *)(puVar3 + -0x28);
    while( true ) {
      uVar1 = SUB84(dVar5,0);
      if (in_FPSCR_SZ == '\0') {
        uVar1 = *(undefined4 *)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x40);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)(iVar2 + -1),uVar1);
      }
      else {
        dVar5 = (double)(iVar2 + -1);
      }
      if (in_FPSCR_PR != '\0' || SUB84(dVar5,0) <= (float)((ulonglong)dVar5 >> 0x20)) break;
      *(int *)(puVar3 + -0x44) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)(ulonglong)*(uint *)(*(int *)(puVar3 + -0x44) + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)(puVar3 + -0x44) + 0x40);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)(ulonglong)(uint)(SUB84(dVar5,0) - (float)iVar2);
      }
      else {
        dVar5 = (double)iVar2 - (double)iVar2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)(puVar3 + -0x44) + 0x40) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(*(int *)(puVar3 + -0x44) + 0x40) = in_xd0;
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x40) = in_fr4;
    }
    else {
      *(undefined8 *)(ar4 + 0x40) = in_xd14;
    }
    uVar1 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c034144)
                      (ar4,*(undefined4 *)(ar4 + 0x1c),ar6,ar7);
    *(undefined4 *)(puVar3 + -0x2c) = uVar1;
    iVar2 = *(int *)(puVar3 + -0x2c);
    while( true ) {
      uVar1 = SUB84(dVar5,0);
      if (in_FPSCR_SZ == '\0') {
        uVar1 = *(undefined4 *)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x40);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)(iVar2 + -1),uVar1);
      }
      else {
        dVar5 = (double)(iVar2 + -1);
      }
      if (in_FPSCR_PR != '\0' || SUB84(dVar5,0) <= (float)((ulonglong)dVar5 >> 0x20)) break;
      *(int *)(puVar3 + -0x48) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)(ulonglong)*(uint *)(*(int *)(puVar3 + -0x48) + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)(puVar3 + -0x48) + 0x40);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)(ulonglong)(uint)(SUB84(dVar5,0) - (float)iVar2);
      }
      else {
        dVar5 = (double)iVar2 - (double)iVar2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)(puVar3 + -0x48) + 0x40) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(*(int *)(puVar3 + -0x48) + 0x40) = in_xd0;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 100),*(undefined4 *)(ar4 + 0x40));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x40);
      dVar5 = *(double *)(ar4 + 100);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x20) = fVar4;
    }
    else {
      *(undefined8 *)(ar4 + 0x20) = in_xd0;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar4 + 0x40);
    *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar4 + 0x20);
    uVar6 = (ulonglong)*(uint *)(ar4 + 100);
  }
  else {
    *(undefined8 *)(ar4 + 0x50) = *(undefined8 *)(ar4 + 0x40);
    uVar6 = *(ulonglong *)(ar4 + 0x20);
    *(ulonglong *)(ar4 + 0x5c) = uVar6;
  }
  fVar4 = (float)uVar6;
  if (in_FPSCR_PR == '\0') {
    dVar5 = (double)CONCAT44(1.0 / fVar4,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(0x3f800000,fVar4) / (double)CONCAT44(0x3f800000,fVar4);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x60) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x60) = dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x58) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x58) = (ulonglong)dVar5 & 0xffffffff;
  }
  *(undefined1 *)(ar4 + 0x54) = 1;
  return 0x54;
}



/* FUN_8c034148 @ 8c034148 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c034148(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = ar5;
  if (*(int *)(ar4 + 0x6c) == -1) {
    ar7 = 0;
    ar6 = 0;
    uVar1 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0342a4)(ar4,ar5,0,0);
    *(undefined4 *)(ar4 + 0x6c) = uVar1;
  }
  switch(*(undefined4 *)(ar4 + 0x6c)) {
  case 0:
    uVar4 = 2;
    *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
    break;
  case 1:
    iVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0342a8)(ar4,uVar3,ar6,ar7);
    if (iVar2 == 2) {
      uVar4 = 1;
      *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
    }
    break;
  case 3:
    iVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0342a8)(ar4,uVar3,ar6,ar7);
    if (iVar2 == 4) {
      uVar3 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0342a4)(ar4,ar5,0,0);
      *(undefined4 *)(ar4 + 0x6c) = uVar3;
    }
    break;
  case 5:
    iVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0342a8)(ar4,uVar3,ar6,ar7);
    if (iVar2 == 2) {
      uVar3 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0342a4)(ar4,ar5,0,0);
      *(undefined4 *)(ar4 + 0x6c) = uVar3;
    }
    break;
  case 6:
    if (*(int *)(ar4 + 0x2c) == -1) {
      uVar4 = 2;
      *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
    }
    else {
      iVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0342a8)(ar4,uVar3,ar6,ar7);
      if (iVar2 == 2) {
        uVar3 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0342a4)(ar4,ar5,0,0);
        *(undefined4 *)(ar4 + 0x6c) = uVar3;
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

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0342d8(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar1;
  uint in_fr1;
  float in_fr4;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar2;
  undefined4 in_PR;
  int iVar3;
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
  *(undefined4 *)(puVar1 + -8) = unaff_r13;
  *(undefined4 *)(puVar1 + -0xc) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = in_fr4;
  }
  (*(code *)PTR_Vec3_ctor_xyz_8c034378)(puVar1 + -0x1c,ar5,ar6,ar7);
  if (ar5 == (int *)0x0) {
    (*(code *)PTR_Vec3_ctor_copy_8c03437c)(*(undefined4 *)(puVar1 + 4),puVar1 + -0x1c,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c034380)(puVar1 + -0x1c,0xffffffff,ar6,ar7);
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar2 = in_fr15 < 0.0;
    }
    else {
      bVar2 = (double)CONCAT44(in_fr14,in_fr15) < (double)(ulonglong)in_fr1;
    }
    if (bVar2) {
      in_fr15 = 0.0;
    }
    while( true ) {
      if (in_FPSCR_PR == '\0') {
        iVar3 = (int)in_fr15;
      }
      else {
        iVar3 = (int)(double)CONCAT44(in_fr14,in_fr15);
      }
      if (iVar3 <= *ar5) break;
      ar5 = ar5 + 4;
    }
    if (in_FPSCR_PR == '\0') {
      iVar3 = (int)in_fr15;
    }
    else {
      iVar3 = (int)(double)CONCAT44(in_fr14,in_fr15);
    }
    if (*ar5 != iVar3) {
      ar5 = ar5 + -4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar1 + -0x1c) = ar5[1];
      *(int *)(puVar1 + -0x18) = ar5[2];
      *(int *)(puVar1 + -0x14) = ar5[3];
    }
    else {
      *(undefined8 *)(puVar1 + -0x1c) = *(undefined8 *)(ar5 + 1);
      *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(ar5 + 2);
      *(undefined8 *)(puVar1 + -0x14) = *(undefined8 *)(ar5 + 3);
    }
    (*(code *)PTR_Vec3_ctor_copy_8c03437c)(*(undefined4 *)(puVar1 + 4),puVar1 + -0x1c,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c034380)(puVar1 + -0x1c,0xffffffff,ar6,ar7);
  }
  return 0;
}



/* FUN_8c034384 @ 8c034384 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c03448a) */
/* WARNING: Removing unreachable block (ram,0x8c034436) */
/* WARNING: Removing unreachable block (ram,0x8c0343ea) */
/* WARNING: Removing unreachable block (ram,0x8c0343d4) */
/* WARNING: Removing unreachable block (ram,0x8c0343f8) */
/* WARNING: Removing unreachable block (ram,0x8c034460) */
/* WARNING: Removing unreachable block (ram,0x8c0344f2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c034384(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int *piVar1;
  undefined8 *puVar2;
  uint in_fr1;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 in_fr3;
  float fVar8;
  undefined4 in_fr5;
  undefined4 in_fr4;
  double in_dr14;
  undefined8 in_xd0;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_xd14;
  bool bVar11;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar2 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar2 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar2 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar2 + -0xc) = 1;
  *(undefined4 *)((int)puVar2 + -0x10) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  }
  else {
    in_xd14 = CONCAT44(in_fr4,in_fr5);
  }
  (*(code *)PTR_Vec3_ctor_xyz_8c034538)((undefined1 *)((int)puVar2 + -0x20),ar5,ar6,ar7);
  if (ar5 == (int *)0x0) {
    (*(code *)PTR_Vec3_ctor_copy_8c03453c)
              (*(undefined4 *)((int)puVar2 + 4),(undefined1 *)((int)puVar2 + -0x20),ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c034540)((undefined1 *)((int)puVar2 + -0x20),0xffffffff,ar6,ar7);
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar11 = SUB84(in_dr14,0) < 0.0;
    }
    else {
      bVar11 = in_dr14 < (double)(ulonglong)in_fr1;
    }
    if (bVar11) {
      in_dr14 = (double)((ulonglong)in_dr14 & 0xffffffff00000000);
    }
    while( true ) {
      fVar3 = (float)*ar5;
      dVar5 = (double)(ulonglong)(uint)fVar3;
      if (in_FPSCR_PR == '\0' && fVar3 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar5 = (double)CONCAT44(DAT_8c034544,fVar3);
        }
        else {
          dVar5 = (double)CONCAT44(_FUN_8c034548,DAT_8c034544);
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = (float)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) + fVar3);
        }
        else {
          dVar5 = dVar5 + dVar5;
        }
      }
      fVar3 = SUB84(in_dr14,0);
      if (in_FPSCR_PR == '\0') {
        bVar11 = SUB84(dVar5,0) < fVar3;
      }
      else {
        bVar11 = dVar5 < in_dr14;
      }
      if (!bVar11) break;
      ar5 = ar5 + 4;
    }
    fVar4 = (float)*ar5;
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c034544,fVar4);
      }
      else {
        dVar5 = (double)CONCAT44(_FUN_8c034548,DAT_8c034544);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 + dVar5,0);
      }
    }
    if (fVar4 == fVar3) {
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x20) = ar5[1];
        *(int *)((int)puVar2 + -0x1c) = ar5[2];
        *(int *)((int)puVar2 + -0x18) = ar5[3];
      }
      else {
        *(undefined8 *)((int)puVar2 + -0x20) = *(undefined8 *)(ar5 + 1);
        *(undefined8 *)((int)puVar2 + -0x1c) = *(undefined8 *)(ar5 + 2);
        *(undefined8 *)((int)puVar2 + -0x18) = *(undefined8 *)(ar5 + 3);
      }
    }
    else {
      piVar1 = ar5 + -4;
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(ar5[1],in_fr3);
        dVar6 = (double)CONCAT44(ar5[-3],fVar4);
      }
      else {
        dVar5 = *(double *)(ar5 + 1);
        dVar6 = *(double *)(ar5 + -3);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) -
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar6;
      }
      fVar4 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar4;
      if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c034544,fVar4);
        }
        else {
          dVar6 = (double)CONCAT44(_FUN_8c034548,DAT_8c034544);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) + fVar4);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar6,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x20) = (int)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(ar5[2],SUB84(dVar5,0));
        dVar6 = (double)CONCAT44(ar5[-2],SUB84(dVar6,0));
      }
      else {
        *(double *)((int)puVar2 + -0x20) = dVar5;
        dVar5 = *(double *)(ar5 + 2);
        dVar6 = *(double *)(ar5 + -2);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) -
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar6;
      }
      fVar4 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar4;
      if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c034544,fVar4);
        }
        else {
          dVar6 = (double)CONCAT44(_FUN_8c034548,DAT_8c034544);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) + fVar4);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar6,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x1c) = (int)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(ar5[3],SUB84(dVar5,0));
        dVar6 = (double)CONCAT44(ar5[-1],SUB84(dVar6,0));
      }
      else {
        *(double *)((int)puVar2 + -0x1c) = dVar5;
        dVar5 = *(double *)(ar5 + 3);
        dVar6 = *(double *)(ar5 + -1);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) -
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar6;
      }
      fVar4 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar4;
      if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c034544,fVar4);
        }
        else {
          dVar6 = (double)CONCAT44(_FUN_8c034548,DAT_8c034544);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) + fVar4);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar6,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x18) = (int)((ulonglong)dVar5 >> 0x20);
      }
      else {
        *(double *)((int)puVar2 + -0x18) = dVar5;
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar5 = (double)*piVar1;
      }
      dVar7 = (double)((ulonglong)dVar6 & 0xffffffff);
      fVar4 = (float)((ulonglong)dVar5 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar11 = fVar4 < 0.0;
      }
      else {
        bVar11 = dVar5 < dVar7;
      }
      if (bVar11) {
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c034544,SUB84(dVar6,0));
        }
        else {
          dVar7 = (double)CONCAT44(_FUN_8c034548,DAT_8c034544);
        }
        if (in_FPSCR_PR == '\0') {
          dVar5 = (double)CONCAT44(fVar4 + (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar5,0));
        }
        else {
          dVar5 = dVar5 + dVar7;
        }
      }
      uVar9 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar3);
        uVar9 = in_xd0;
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar7,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x20),fVar4);
      }
      else {
        dVar6 = *(double *)((int)puVar2 + -0x20);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 * dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(ar5[-3],fVar4);
      }
      else {
        dVar6 = *(double *)(ar5 + -3);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 + dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar2 + -0x20) = fVar4;
      }
      else {
        *(undefined8 *)((int)puVar2 + -0x20) = uVar9;
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar5 = (double)*piVar1;
      }
      dVar6 = (double)(ulonglong)(uint)fVar4;
      fVar8 = (float)((ulonglong)dVar5 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar11 = fVar8 < 0.0;
      }
      else {
        bVar11 = dVar5 < dVar6;
      }
      if (bVar11) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c034544,fVar4);
        }
        else {
          dVar6 = (double)CONCAT44(_FUN_8c034548,DAT_8c034544);
        }
        if (in_FPSCR_PR == '\0') {
          dVar5 = (double)CONCAT44(fVar8 + (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
        }
        else {
          dVar5 = dVar5 + dVar6;
        }
      }
      uVar10 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar3);
        uVar10 = uVar9;
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x1c),fVar4);
      }
      else {
        dVar5 = *(double *)((int)puVar2 + -0x1c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(ar5[-2],fVar4);
      }
      else {
        dVar5 = *(double *)(ar5 + -2);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 + dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar2 + -0x1c) = fVar4;
      }
      else {
        *(undefined8 *)((int)puVar2 + -0x1c) = uVar10;
      }
      fVar4 = (float)*piVar1;
      dVar5 = (double)(ulonglong)(uint)fVar4;
      if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar5 = (double)CONCAT44(DAT_8c034544,fVar4);
        }
        else {
          dVar5 = (double)CONCAT44(_FUN_8c034548,DAT_8c034544);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) + fVar4);
        }
        else {
          dVar5 = dVar5 + dVar5;
        }
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar3 - SUB84(dVar5,0));
      }
      else {
        dVar6 = in_dr14 - dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x18),SUB84(dVar5,0));
      }
      else {
        dVar5 = *(double *)((int)puVar2 + -0x18);
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                                 SUB84(dVar6,0) * (float)((ulonglong)dVar5 >> 0x20));
      }
      else {
        dVar6 = dVar6 * dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(ar5[-1],SUB84(dVar5,0));
      }
      else {
        dVar5 = *(double *)(ar5 + -1);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar6,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar6 + dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar2 + -0x18) = fVar3;
      }
      else {
        *(undefined8 *)((int)puVar2 + -0x18) = in_xd14;
      }
    }
    (*(code *)PTR_Vec3_ctor_copy_8c03453c)
              (*(undefined4 *)((int)puVar2 + 4),(undefined1 *)((int)puVar2 + -0x20),ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c034540)((undefined1 *)((int)puVar2 + -0x20),0xffffffff,ar6,ar7);
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
/* WARNING: Removing unreachable block (ram,0x8c0345d8) */
/* WARNING: Removing unreachable block (ram,0x8c034604) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c034574(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar1;
  uint in_fr1;
  float fVar2;
  double dVar3;
  float in_fr4;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar4;
  undefined4 in_PR;
  int iVar5;
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
  *(undefined4 *)(puVar1 + -8) = unaff_r13;
  *(undefined4 *)(puVar1 + -0xc) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = in_fr4;
  }
  (*(code *)PTR_Vec3_set_xyz_8c03463c)(puVar1 + -0x18,ar5,ar6,ar7);
  if (ar5 == (int *)0x0) {
    (*(code *)PTR_vec3_copy_8c02b5fc_8c034640)(*(undefined4 *)(puVar1 + 4),puVar1 + -0x18,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c034644)(puVar1 + -0x18,0xffffffff,ar6,ar7);
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar4 = in_fr15 < 0.0;
    }
    else {
      bVar4 = (double)CONCAT44(in_fr14,in_fr15) < (double)(ulonglong)in_fr1;
    }
    if (bVar4) {
      in_fr15 = 0.0;
    }
    while( true ) {
      if (in_FPSCR_PR == '\0') {
        iVar5 = (int)in_fr15;
      }
      else {
        iVar5 = (int)(double)CONCAT44(in_fr14,in_fr15);
      }
      if (iVar5 <= *ar5) break;
      ar5 = ar5 + 4;
    }
    if (in_FPSCR_PR == '\0') {
      iVar5 = (int)in_fr15;
    }
    else {
      iVar5 = (int)(double)CONCAT44(in_fr14,in_fr15);
    }
    if (*ar5 != iVar5) {
      ar5 = ar5 + -4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c034648,(float)ar5[1]);
    }
    else {
      dVar3 = (double)CONCAT44(DAT_8c03464c,DAT_8c034648);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c03464c,fVar2);
    }
    else {
      dVar3 = (double)CONCAT44(_FUN_8c034650,DAT_8c03464c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar1 + -0x18) = fVar2;
    }
    else {
      *(undefined8 *)(puVar1 + -0x18) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c034648,(float)ar5[2]);
    }
    else {
      dVar3 = (double)CONCAT44(DAT_8c03464c,DAT_8c034648);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c03464c,fVar2);
    }
    else {
      dVar3 = (double)CONCAT44(_FUN_8c034650,DAT_8c03464c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar1 + -0x14) = fVar2;
    }
    else {
      *(undefined8 *)(puVar1 + -0x14) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c034648,(float)ar5[3]);
    }
    else {
      dVar3 = (double)CONCAT44(DAT_8c03464c,DAT_8c034648);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c03464c,fVar2);
    }
    else {
      dVar3 = (double)CONCAT44(_FUN_8c034650,DAT_8c03464c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar1 + -0x10) = fVar2;
    }
    else {
      *(undefined8 *)(puVar1 + -0x10) = in_xd0;
    }
    (*(code *)PTR_vec3_copy_8c02b5fc_8c034640)(*(undefined4 *)(puVar1 + 4),puVar1 + -0x18,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c034644)(puVar1 + -0x18,0xffffffff,ar6,ar7);
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
/* WARNING: Removing unreachable block (ram,0x8c0346a0) */
/* WARNING: Removing unreachable block (ram,0x8c0346c4) */
/* WARNING: Removing unreachable block (ram,0x8c0346e2) */
/* WARNING: Removing unreachable block (ram,0x8c034730) */
/* WARNING: Removing unreachable block (ram,0x8c034794) */
/* WARNING: Removing unreachable block (ram,0x8c0347c8) */
/* WARNING: Removing unreachable block (ram,0x8c0347fc) */
/* WARNING: Removing unreachable block (ram,0x8c03482e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c034650(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int *piVar1;
  undefined8 *puVar2;
  uint in_fr1;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined4 in_fr3;
  double dVar7;
  undefined4 in_fr5;
  undefined4 in_fr4;
  double in_dr14;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar8;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar2 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar2 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar2 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar2 + -0xc) = 1;
  *(undefined4 *)((int)puVar2 + -0x10) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  }
  else {
    in_xd14 = (double)CONCAT44(in_fr4,in_fr5);
  }
  (*(code *)PTR_Vec3_set_xyz_8c034868)((undefined1 *)((int)puVar2 + -0x1c),ar5,ar6,ar7);
  if (ar5 == (int *)0x0) {
    (*(code *)PTR_vec3_copy_8c02b5fc_8c03486c)
              (*(undefined4 *)((int)puVar2 + 4),(undefined1 *)((int)puVar2 + -0x1c),ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c034870)
              ((undefined1 *)((int)puVar2 + -0x1c),0xffffffff,ar6,ar7);
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar8 = SUB84(in_dr14,0) < 0.0;
    }
    else {
      bVar8 = in_dr14 < (double)(ulonglong)in_fr1;
    }
    if (bVar8) {
      in_dr14 = (double)((ulonglong)in_dr14 & 0xffffffff00000000);
    }
    while( true ) {
      fVar3 = (float)*ar5;
      dVar5 = (double)(ulonglong)(uint)fVar3;
      if (in_FPSCR_PR == '\0' && fVar3 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar5 = (double)CONCAT44(DAT_8c034874,fVar3);
        }
        else {
          dVar5 = (double)CONCAT44(_DAT_8c034878,DAT_8c034874);
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = (float)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) + fVar3);
        }
        else {
          dVar5 = dVar5 + dVar5;
        }
      }
      fVar3 = SUB84(in_dr14,0);
      if (in_FPSCR_PR == '\0') {
        bVar8 = SUB84(dVar5,0) < fVar3;
      }
      else {
        bVar8 = dVar5 < in_dr14;
      }
      if (!bVar8) break;
      ar5 = ar5 + 4;
    }
    fVar4 = (float)*ar5;
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c034874,fVar4);
      }
      else {
        dVar5 = (double)CONCAT44(_DAT_8c034878,DAT_8c034874);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 + dVar5,0);
      }
    }
    if (fVar4 == fVar3) {
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(_DAT_8c034878,(float)ar5[1]);
      }
      else {
        dVar5 = (double)CONCAT44(DAT_8c03487c,_DAT_8c034878);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 * dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c03487c,fVar3);
      }
      else {
        dVar5 = (double)CONCAT44(_FUN_8c034880,DAT_8c03487c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 / dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar2 + -0x1c) = fVar3;
      }
      else {
        *(undefined8 *)((int)puVar2 + -0x1c) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(_DAT_8c034878,(float)ar5[2]);
      }
      else {
        dVar5 = (double)CONCAT44(DAT_8c03487c,_DAT_8c034878);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 * dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c03487c,fVar3);
      }
      else {
        dVar5 = (double)CONCAT44(_FUN_8c034880,DAT_8c03487c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 / dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar2 + -0x18) = fVar3;
      }
      else {
        *(undefined8 *)((int)puVar2 + -0x18) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(_DAT_8c034878,(float)ar5[3]);
      }
      else {
        dVar5 = (double)CONCAT44(DAT_8c03487c,_DAT_8c034878);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 * dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c03487c,fVar3);
      }
      else {
        dVar5 = (double)CONCAT44(_FUN_8c034880,DAT_8c03487c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 / dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar2 + -0x14) = fVar3;
      }
      else {
        *(undefined8 *)((int)puVar2 + -0x14) = in_xd0;
      }
    }
    else {
      piVar1 = ar5 + -4;
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)(ar5[1] - ar5[-3]),in_fr3);
      }
      else {
        dVar5 = (double)(ar5[1] - ar5[-3]);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(_DAT_8c034878,fVar4);
      }
      else {
        dVar6 = (double)CONCAT44(DAT_8c03487c,_DAT_8c034878);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) *
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 * dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c03487c,SUB84(dVar6,0));
      }
      else {
        dVar6 = (double)CONCAT44(_FUN_8c034880,DAT_8c03487c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) /
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar6;
      }
      fVar4 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar4;
      if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c034874,fVar4);
        }
        else {
          dVar6 = (double)CONCAT44(_DAT_8c034878,DAT_8c034874);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) + fVar4);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar6,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x1c) = (int)((ulonglong)dVar5 >> 0x20);
      }
      else {
        *(double *)((int)puVar2 + -0x1c) = dVar5;
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)(ar5[2] - ar5[-2]),SUB84(dVar5,0));
      }
      else {
        dVar5 = (double)(ar5[2] - ar5[-2]);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(_DAT_8c034878,SUB84(dVar6,0));
      }
      else {
        dVar6 = (double)CONCAT44(DAT_8c03487c,_DAT_8c034878);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) *
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 * dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c03487c,SUB84(dVar6,0));
      }
      else {
        dVar6 = (double)CONCAT44(_FUN_8c034880,DAT_8c03487c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) /
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar6;
      }
      fVar4 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar4;
      if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c034874,fVar4);
        }
        else {
          dVar6 = (double)CONCAT44(_DAT_8c034878,DAT_8c034874);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) + fVar4);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar6,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x18) = (int)((ulonglong)dVar5 >> 0x20);
      }
      else {
        *(double *)((int)puVar2 + -0x18) = dVar5;
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)(ar5[3] - ar5[-1]),SUB84(dVar5,0));
      }
      else {
        dVar5 = (double)(ar5[3] - ar5[-1]);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(_DAT_8c034878,SUB84(dVar6,0));
      }
      else {
        dVar6 = (double)CONCAT44(DAT_8c03487c,_DAT_8c034878);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) *
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 * dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c03487c,SUB84(dVar6,0));
      }
      else {
        dVar6 = (double)CONCAT44(_FUN_8c034880,DAT_8c03487c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) /
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar6;
      }
      fVar4 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar4;
      if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c034874,fVar4);
        }
        else {
          dVar6 = (double)CONCAT44(_DAT_8c034878,DAT_8c034874);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) + fVar4);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar6,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x14) = (int)((ulonglong)dVar5 >> 0x20);
      }
      else {
        *(double *)((int)puVar2 + -0x14) = dVar5;
      }
      fVar4 = (float)*piVar1;
      dVar6 = (double)(ulonglong)(uint)fVar4;
      if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c034874,fVar4);
        }
        else {
          dVar6 = (double)CONCAT44(_DAT_8c034878,DAT_8c034874);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) + fVar4);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      dVar7 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(fVar3,SUB84(dVar5,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar6,0),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 - dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x1c),SUB84(dVar6,0));
      }
      else {
        dVar5 = *(double *)((int)puVar2 + -0x1c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) *
                                 (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 * dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(_DAT_8c034878,(float)ar5[-3]);
      }
      else {
        dVar5 = (double)CONCAT44(DAT_8c03487c,_DAT_8c034878);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c03487c,fVar4);
      }
      else {
        dVar5 = (double)CONCAT44(_FUN_8c034880,DAT_8c03487c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) +
                                 SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar5 / dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x1c) = (int)((ulonglong)dVar7 >> 0x20);
      }
      else {
        *(double *)((int)puVar2 + -0x1c) = dVar7;
      }
      fVar4 = (float)*piVar1;
      dVar5 = (double)(ulonglong)(uint)fVar4;
      if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar5 = (double)CONCAT44(DAT_8c034874,fVar4);
        }
        else {
          dVar5 = (double)CONCAT44(_DAT_8c034878,DAT_8c034874);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) + fVar4);
        }
        else {
          dVar5 = dVar5 + dVar5;
        }
      }
      dVar6 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(fVar3,SUB84(dVar7,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar5,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x18),SUB84(dVar5,0));
      }
      else {
        dVar5 = *(double *)((int)puVar2 + -0x18);
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) *
                                 (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 * dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(_DAT_8c034878,(float)ar5[-2]);
      }
      else {
        dVar5 = (double)CONCAT44(DAT_8c03487c,_DAT_8c034878);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c03487c,fVar4);
      }
      else {
        dVar5 = (double)CONCAT44(_FUN_8c034880,DAT_8c03487c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                                 SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar5 / dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x18) = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)((int)puVar2 + -0x18) = dVar6;
      }
      fVar4 = (float)*piVar1;
      dVar5 = (double)(ulonglong)(uint)fVar4;
      if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar5 = (double)CONCAT44(DAT_8c034874,fVar4);
        }
        else {
          dVar5 = (double)CONCAT44(_DAT_8c034878,DAT_8c034874);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) + fVar4);
        }
        else {
          dVar5 = dVar5 + dVar5;
        }
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar3 - SUB84(dVar5,0));
      }
      else {
        dVar6 = in_dr14 - dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x14),SUB84(dVar5,0));
      }
      else {
        dVar5 = *(double *)((int)puVar2 + -0x14);
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                                 SUB84(dVar6,0) * (float)((ulonglong)dVar5 >> 0x20));
      }
      else {
        dVar6 = dVar6 * dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(_DAT_8c034878,(float)ar5[-1]);
      }
      else {
        dVar5 = (double)CONCAT44(DAT_8c03487c,_DAT_8c034878);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 * dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c03487c,fVar3);
      }
      else {
        dVar5 = (double)CONCAT44(_FUN_8c034880,DAT_8c03487c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar6,0) + SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar6 + dVar5 / dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar2 + -0x14) = fVar3;
      }
      else {
        *(double *)((int)puVar2 + -0x14) = in_xd14;
      }
    }
    (*(code *)PTR_vec3_copy_8c02b5fc_8c03486c)
              (*(undefined4 *)((int)puVar2 + 4),(undefined1 *)((int)puVar2 + -0x1c),ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c034870)
              ((undefined1 *)((int)puVar2 + -0x1c),0xffffffff,ar6,ar7);
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
/* WARNING: Removing unreachable block (ram,0x8c0348fc) */
/* WARNING: Removing unreachable block (ram,0x8c034920) */
/* WARNING: Removing unreachable block (ram,0x8c034988) */
/* WARNING: Removing unreachable block (ram,0x8c034a1a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0348ac(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int *piVar1;
  undefined8 *puVar2;
  uint in_fr1;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 in_fr3;
  float fVar8;
  undefined4 in_fr5;
  undefined4 in_fr4;
  double in_dr14;
  undefined8 in_xd0;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_xd14;
  bool bVar11;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar2 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar2 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar2 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar2 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar2 + -0x10) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  }
  else {
    in_xd14 = CONCAT44(in_fr4,in_fr5);
  }
  (*(code *)PTR_FUN_8c034a60)((undefined1 *)((int)puVar2 + -0x1c),ar5,ar6,ar7);
  if (ar5 == (int *)0x0) {
    (*(code *)PTR_FUN_8c034a64)
              (*(undefined4 *)((int)puVar2 + 4),(undefined1 *)((int)puVar2 + -0x1c),ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c034a68)
              ((undefined1 *)((int)puVar2 + -0x1c),0xffffffff,ar6,ar7);
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar11 = SUB84(in_dr14,0) < 0.0;
    }
    else {
      bVar11 = in_dr14 < (double)(ulonglong)in_fr1;
    }
    if (bVar11) {
      in_dr14 = (double)((ulonglong)in_dr14 & 0xffffffff00000000);
    }
    while( true ) {
      fVar3 = (float)*ar5;
      dVar5 = (double)(ulonglong)(uint)fVar3;
      if (in_FPSCR_PR == '\0' && fVar3 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar5 = (double)CONCAT44(DAT_8c034a6c,fVar3);
        }
        else {
          dVar5 = (double)CONCAT44(_FUN_8c034a70,DAT_8c034a6c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = (float)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) + fVar3);
        }
        else {
          dVar5 = dVar5 + dVar5;
        }
      }
      fVar3 = SUB84(in_dr14,0);
      if (in_FPSCR_PR == '\0') {
        bVar11 = SUB84(dVar5,0) < fVar3;
      }
      else {
        bVar11 = dVar5 < in_dr14;
      }
      if (!bVar11) break;
      ar5 = ar5 + 4;
    }
    fVar4 = (float)*ar5;
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c034a6c,fVar4);
      }
      else {
        dVar5 = (double)CONCAT44(_FUN_8c034a70,DAT_8c034a6c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 + dVar5,0);
      }
    }
    if (fVar4 == fVar3) {
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x1c) = ar5[1];
        *(int *)((int)puVar2 + -0x18) = ar5[2];
        *(int *)((int)puVar2 + -0x14) = ar5[3];
      }
      else {
        *(undefined8 *)((int)puVar2 + -0x1c) = *(undefined8 *)(ar5 + 1);
        *(undefined8 *)((int)puVar2 + -0x18) = *(undefined8 *)(ar5 + 2);
        *(undefined8 *)((int)puVar2 + -0x14) = *(undefined8 *)(ar5 + 3);
      }
    }
    else {
      piVar1 = ar5 + -4;
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(ar5[1],in_fr3);
        dVar6 = (double)CONCAT44(ar5[-3],fVar4);
      }
      else {
        dVar5 = *(double *)(ar5 + 1);
        dVar6 = *(double *)(ar5 + -3);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) -
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar6;
      }
      fVar4 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar4;
      if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c034a6c,fVar4);
        }
        else {
          dVar6 = (double)CONCAT44(_FUN_8c034a70,DAT_8c034a6c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) + fVar4);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar6,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x1c) = (int)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(ar5[2],SUB84(dVar5,0));
        dVar6 = (double)CONCAT44(ar5[-2],SUB84(dVar6,0));
      }
      else {
        *(double *)((int)puVar2 + -0x1c) = dVar5;
        dVar5 = *(double *)(ar5 + 2);
        dVar6 = *(double *)(ar5 + -2);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) -
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar6;
      }
      fVar4 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar4;
      if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c034a6c,fVar4);
        }
        else {
          dVar6 = (double)CONCAT44(_FUN_8c034a70,DAT_8c034a6c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) + fVar4);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar6,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x18) = (int)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(ar5[3],SUB84(dVar5,0));
        dVar6 = (double)CONCAT44(ar5[-1],SUB84(dVar6,0));
      }
      else {
        *(double *)((int)puVar2 + -0x18) = dVar5;
        dVar5 = *(double *)(ar5 + 3);
        dVar6 = *(double *)(ar5 + -1);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) -
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar6;
      }
      fVar4 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar4;
      if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c034a6c,fVar4);
        }
        else {
          dVar6 = (double)CONCAT44(_FUN_8c034a70,DAT_8c034a6c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) + fVar4);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar6,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x14) = (int)((ulonglong)dVar5 >> 0x20);
      }
      else {
        *(double *)((int)puVar2 + -0x14) = dVar5;
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar5 = (double)*piVar1;
      }
      dVar7 = (double)((ulonglong)dVar6 & 0xffffffff);
      fVar4 = (float)((ulonglong)dVar5 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar11 = fVar4 < 0.0;
      }
      else {
        bVar11 = dVar5 < dVar7;
      }
      if (bVar11) {
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c034a6c,SUB84(dVar6,0));
        }
        else {
          dVar7 = (double)CONCAT44(_FUN_8c034a70,DAT_8c034a6c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar5 = (double)CONCAT44(fVar4 + (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar5,0));
        }
        else {
          dVar5 = dVar5 + dVar7;
        }
      }
      uVar9 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar3);
        uVar9 = in_xd0;
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar7,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x1c),fVar4);
      }
      else {
        dVar6 = *(double *)((int)puVar2 + -0x1c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 * dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(ar5[-3],fVar4);
      }
      else {
        dVar6 = *(double *)(ar5 + -3);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 + dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar2 + -0x1c) = fVar4;
      }
      else {
        *(undefined8 *)((int)puVar2 + -0x1c) = uVar9;
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar5 = (double)*piVar1;
      }
      dVar6 = (double)(ulonglong)(uint)fVar4;
      fVar8 = (float)((ulonglong)dVar5 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar11 = fVar8 < 0.0;
      }
      else {
        bVar11 = dVar5 < dVar6;
      }
      if (bVar11) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c034a6c,fVar4);
        }
        else {
          dVar6 = (double)CONCAT44(_FUN_8c034a70,DAT_8c034a6c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar5 = (double)CONCAT44(fVar8 + (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar5,0));
        }
        else {
          dVar5 = dVar5 + dVar6;
        }
      }
      uVar10 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar3);
        uVar10 = uVar9;
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x18),fVar4);
      }
      else {
        dVar5 = *(double *)((int)puVar2 + -0x18);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(ar5[-2],fVar4);
      }
      else {
        dVar5 = *(double *)(ar5 + -2);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 + dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar2 + -0x18) = fVar4;
      }
      else {
        *(undefined8 *)((int)puVar2 + -0x18) = uVar10;
      }
      fVar4 = (float)*piVar1;
      dVar5 = (double)(ulonglong)(uint)fVar4;
      if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar5 = (double)CONCAT44(DAT_8c034a6c,fVar4);
        }
        else {
          dVar5 = (double)CONCAT44(_FUN_8c034a70,DAT_8c034a6c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) + fVar4);
        }
        else {
          dVar5 = dVar5 + dVar5;
        }
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar3 - SUB84(dVar5,0));
      }
      else {
        dVar6 = in_dr14 - dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x14),SUB84(dVar5,0));
      }
      else {
        dVar5 = *(double *)((int)puVar2 + -0x14);
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                                 SUB84(dVar6,0) * (float)((ulonglong)dVar5 >> 0x20));
      }
      else {
        dVar6 = dVar6 * dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(ar5[-1],SUB84(dVar5,0));
      }
      else {
        dVar5 = *(double *)(ar5 + -1);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar6,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar6 + dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar2 + -0x14) = fVar3;
      }
      else {
        *(undefined8 *)((int)puVar2 + -0x14) = in_xd14;
      }
    }
    (*(code *)PTR_FUN_8c034a64)
              (*(undefined4 *)((int)puVar2 + 4),(undefined1 *)((int)puVar2 + -0x1c),ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c034a68)
              ((undefined1 *)((int)puVar2 + -0x1c),0xffffffff,ar6,ar7);
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
  int a7;
  
  a7 = ar7;
  uVar1 = (*(code *)PTR_FUN_8c034b9c)(ar4,ar5,ar7,ar7);
  uVar2 = (*(code *)PTR_FUN_8c034ba0)(ar4,ar5,ar7,a7);
  uVar3 = (*(code *)PTR_FUN_8c034ba4)(ar4,ar5,ar7,a7);
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
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c034d34)(ar4,ar5,ar6,ar7);
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
  undefined4 *a5;
  undefined4 *a6;
  
  a5 = ar5;
  a6 = ar6;
  uVar1 = (*(code *)PTR_FUN_8c034f14)(ar6[2],ar5,ar6,ar7);
  if (((((short)uVar1 != 8) ||
       (iVar2 = (*(code *)PTR_get_field_24_026024_8c034f18)(*ar6,a5,a6,ar7), iVar2 == 1)) &&
      ((uVar1 = (*(code *)PTR_FUN_8c034f14)(ar6[2],a5,a6,ar7), (short)uVar1 != 0x10 ||
       (iVar2 = (*(code *)PTR_get_field_24_026024_8c034f18)(*ar6,a5,a6,ar7), iVar2 == 1)))) &&
     ((*(int *)(ar4 + 4) != 0 ||
      (iVar2 = (*(code *)PTR_get_field_c0_034f3c_8c034f1c)(ar6[5],a5,a6,ar7), iVar2 != 1)))) {
    if ((char)ar4[0x14] == '\x01') {
      a5 = ar6;
      (*(code *)PTR_FUN_8c034f20)(ar4,ar6,a6,ar7);
    }
    iVar2 = (*(code *)PTR_get_field_c_02d1b8_8c034f28)(ar6[2] + DAT_8c034f24,a5,a6,ar7);
    iVar2 = (int)ar5 - iVar2;
    uVar1 = 0x3c;
    iVar3 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c034f2c)(iVar2,0x3c,a6,ar7);
    if ((iVar3 == 1) && (iVar2 != *(int *)(ar4 + 0x10))) {
      *(int *)(ar4 + 0x12) = *(int *)(ar4 + 0x12) + 1;
      uVar1 = (*(code *)PTR_libgcc_divide_helper_010284_8c034f30)(iVar2,0x3c,a6,ar7);
      a6 = ar6;
      (*(code *)PTR_FUN_8c034f34)(ar4,uVar1,ar6,ar7);
    }
    *(int *)(ar4 + 0x10) = iVar2;
    if (*ar4 == -1) {
      (*(code *)PTR_FUN_8c034f38)(ar4,ar6,a6,ar7);
    }
    else {
      if (*(int *)(ar4 + 4) == 1) {
        uVar4 = (**(code **)(*(int *)(*(int *)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x14))(ar6,uVar1,a6,ar7)
        ;
        *(undefined4 *)(ar4 + 4) = uVar4;
      }
      if ((*(int *)(ar4 + 4) == 2) || (*(int *)(ar4 + 4) == 3)) {
        uVar4 = (**(code **)(*(int *)(*(int *)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x18))(ar6,uVar1,a6,ar7)
        ;
        *(undefined4 *)(ar4 + 4) = uVar4;
        *(undefined1 *)((int)ar4 + *ar4 + 0xc) = 4;
      }
      if (*(int *)(ar4 + 4) == 4) {
        uVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x1c))(ar6,uVar1,a6,ar7)
        ;
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
  int a5;
  int iVar3;
  
  a5 = ar5;
  (*(code *)PTR_FUN_8c034ff8)(*(undefined4 *)(ar5 + 8),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c034ffc)(*(undefined4 *)(ar5 + 8),a5,ar6,ar7);
  for (iVar3 = 0; iVar2 = (int)*(short *)(*(int *)(ar4 + 0x1c) + 2), iVar3 < iVar2;
      iVar3 = iVar3 + 1) {
    if ((*(char *)(ar4 + iVar3 + 0xc) == '\0') || (*(char *)(ar4 + iVar3 + 0xc) == '\x06')) {
      uVar1 = (*(code *)PTR_FUN_8c034ff8)(*(undefined4 *)(ar5 + 8),a5,ar6,ar7);
      if (*(short *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 4) <= (short)uVar1) {
        iVar2 = (*(code *)PTR_FUN_8c034ffc)(*(undefined4 *)(ar5 + 8),a5,ar6,ar7);
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
  int a5;
  int iVar2;
  short sVar3;
  int iVar4;
  
  iVar2 = -1;
  sVar3 = 0;
  a5 = ar5;
  for (iVar4 = 0; iVar4 < *(short *)(*(int *)(ar4 + 0xe) + 2); iVar4 = iVar4 + 1) {
    if (*(char *)((int)ar4 + iVar4 + 0xc) == '\x02') {
      iVar1 = (*(code *)PTR_FUN_8c035254)(*(undefined4 *)(ar5 + 8),a5,ar6,ar7);
      if ((iVar1 == -1) && (sVar3 < *(short *)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 2)))
      {
        if (*(char *)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x21) == '\0') {
          iVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x10))
                            (ar5,a5,ar6,ar7);
          if (iVar1 == 1) {
            iVar2 = (int)**(short **)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4);
            sVar3 = *(short *)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 2);
          }
        }
        else if (*(char *)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x21) == '\x01') {
          a5 = ar5;
          iVar1 = (*(code *)PTR_FUN_8c035258)(ar4,ar5,ar6,ar7);
          if (iVar1 == 1) {
            iVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x10))
                              (ar5,a5,ar6,ar7);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c03525c(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  float *a6;
  float fVar1;
  float fVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  (*(code *)PTR_FUN_8c035318)(*(undefined4 *)(ar5 + 4),ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c03531c)(auStack_20,auStack_30,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c035320)(auStack_30,0xffffffff,ar6,ar7);
  a6 = &fStack_38;
  (*(code *)PTR_FUN_8c035324)(0,auStack_10,a6,ar7);
  fVar1 = DAT_8c035328;
  fVar2 = DAT_8c03532c;
  if (in_FPSCR_SZ == '\0') {
    fVar1 = fStack_38;
    fVar2 = DAT_8c035328;
  }
  if (in_FPSCR_PR == '\0' && fVar2 < fVar1) {
    fVar1 = DAT_8c03532c;
    fVar2 = DAT_8c035330;
    if (in_FPSCR_SZ == '\0') {
      fVar1 = fStack_38;
      fVar2 = DAT_8c03532c;
    }
    if (in_FPSCR_PR == '\0' && fVar1 < fVar2) {
      fVar1 = DAT_8c035330;
      fVar2 = DAT_8c035334;
      if (in_FPSCR_SZ == '\0') {
        fVar1 = fStack_34;
        fVar2 = DAT_8c035330;
      }
      if (in_FPSCR_PR == '\0' && fVar2 < fVar1) {
        fVar1 = DAT_8c035334;
        fVar2 = _FUN_8c035338;
        if (in_FPSCR_SZ == '\0') {
          fVar1 = fStack_34;
          fVar2 = DAT_8c035334;
        }
        if (in_FPSCR_PR == '\0' && fVar1 < fVar2) {
          (*(code *)PTR_Vec3_dtor_8c035320)(auStack_20,0xffffffff,a6,ar7);
          return 1;
        }
      }
    }
  }
  (*(code *)PTR_Vec3_dtor_8c035320)(auStack_20,0xffffffff,a6,ar7);
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
  undefined4 a5;
  int iVar3;
  
  a5 = ar5;
  (*(code *)PTR_FUN_8c035460)(ar5,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c035464)(ar5,a5,ar6,ar7);
  for (iVar3 = 0; iVar2 = (int)*(short *)(*(int *)(ar4 + 0x1c) + 2), iVar3 < iVar2;
      iVar3 = iVar3 + 1) {
    if (*(char *)(ar4 + iVar3 + 0xc) == '\0') {
      uVar1 = (*(code *)PTR_FUN_8c035460)(ar5,a5,ar6,ar7);
      if (*(short *)(*(int *)(*(int *)(ar4 + 0x1c) + iVar3 * 4 + 4) + 4) <= (short)uVar1) {
        iVar2 = (*(code *)PTR_FUN_8c035464)(ar5,a5,ar6,ar7);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c035af8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 in_dr0;
  float fVar3;
  float fVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
  uVar1 = (*(code *)PTR_FUN_8c035b44)(ar4[5],ar5,ar6,ar7);
  if ((char)uVar1 < '\x04') {
    (**(code **)(DAT_8c035b48 + *(int *)*ar4))((int *)*ar4,ar5,ar6,ar7);
    fVar2 = DAT_8c035b4c;
    fVar4 = _FUN_8c035b50;
    if (in_FPSCR_SZ == '\0') {
      fVar2 = fVar3;
      fVar4 = DAT_8c035b4c;
    }
    if (in_FPSCR_PR == '\0' && fVar4 < fVar2) {
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
  undefined *puVar2;
  undefined8 in_dr0;
  undefined *puVar3;
  undefined *puVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  puVar3 = (undefined *)((ulonglong)in_dr0 >> 0x20);
  uVar1 = (*(code *)PTR_FUN_8c035bb4)(ar4[5],ar5,ar6,ar7);
  if ((char)uVar1 < '\x01') {
    (**(code **)(DAT_8c035bb8 + *(int *)*ar4))((int *)*ar4,ar5,ar6,ar7);
    puVar2 = DAT_8c035bbc;
    puVar4 = PTR_FUN_8c035bc0;
    if (in_FPSCR_SZ == '\0') {
      puVar2 = puVar3;
      puVar4 = DAT_8c035bbc;
    }
    if (in_FPSCR_PR == '\0' && (float)puVar4 < (float)puVar2) {
      (*(code *)PTR_FUN_8c035bc0)(ar4[5],ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c035bc4)(ar4[5],ar5,ar6,ar7);
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
  undefined *puVar2;
  undefined8 in_dr0;
  undefined *puVar3;
  undefined *puVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  puVar3 = (undefined *)((ulonglong)in_dr0 >> 0x20);
  uVar1 = (*(code *)PTR_FUN_8c035c5c)(ar4[5],ar5,ar6,ar7);
  if ((char)uVar1 < '\x04') {
    (**(code **)(DAT_8c035c60 + *(int *)*ar4))((int *)*ar4,ar5,ar6,ar7);
    puVar2 = DAT_8c035c64;
    puVar4 = PTR_FUN_8c035c68;
    if (in_FPSCR_SZ == '\0') {
      puVar2 = puVar3;
      puVar4 = DAT_8c035c64;
    }
    if (in_FPSCR_PR == '\0' && (float)puVar4 < (float)puVar2) {
      (*(code *)PTR_FUN_8c035c68)(ar4[5],ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c035c6c)(ar4[5],ar5,ar6,ar7);
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
  undefined *puVar3;
  undefined8 in_dr0;
  undefined *puVar4;
  undefined *puVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  puVar4 = (undefined *)((ulonglong)in_dr0 >> 0x20);
  uVar1 = (*(code *)PTR_FUN_8c035d34)(ar4[5],ar5,ar6,ar7);
  if (((char)uVar1 < '\x02') &&
     (uVar1 = (*(code *)PTR_FUN_8c035d38)(ar4[5],ar5,ar6,ar7), (char)uVar1 < '\x03')) {
    uVar1 = 0xb;
    iVar2 = (**(code **)(DAT_8c035d3c + *(int *)*ar4))((int *)*ar4,0xb,ar6,ar7);
    if (iVar2 < 2) {
      (**(code **)(DAT_8c035d40 + *(int *)*ar4))((int *)*ar4,uVar1,ar6,ar7);
      puVar3 = DAT_8c035d44;
      puVar5 = PTR_FUN_8c035d48;
      if (in_FPSCR_SZ == '\0') {
        puVar3 = puVar4;
        puVar5 = DAT_8c035d44;
      }
      if (in_FPSCR_PR == '\0' && (float)puVar5 < (float)puVar3) {
        (*(code *)PTR_FUN_8c035d48)(ar4[5],uVar1,ar6,ar7);
        (*(code *)PTR_FUN_8c035d48)(ar4[5],uVar1,ar6,ar7);
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
  (*(code *)PTR_FUN_8c035e80)(*(int *)(ar4 + 8) + DAT_8c035e7c,1,ar6,ar7);
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
  (*(code *)PTR_FUN_8c035f90)(*(undefined4 *)(ar4 + 0x10),5,ar6,ar7);
  (*(code *)PTR_FUN_8c035f98)(*(int *)(ar4 + 8) + DAT_8c035f94,1,ar6,ar7);
  (*(code *)PTR_FUN_8c035f9c)(*(int *)(ar4 + 8) + DAT_8c035f94,0xd,ar6,ar7);
  return 4;
}



/* FUN_8c035fa0 @ 8c035fa0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035fa0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c035fd8)(*(undefined4 *)(ar4 + 0x10),3,ar6,ar7);
  (*(code *)PTR_FUN_8c035fe0)(*(int *)(ar4 + 8) + DAT_8c035fdc,1,ar6,ar7);
  (*(code *)PTR_FUN_8c035fe4)(*(int *)(ar4 + 8) + DAT_8c035fdc,0x12,ar6,ar7);
  return 4;
}



/* FUN_8c035fe8 @ 8c035fe8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c035fe8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c036020)(*(undefined4 *)(ar4 + 0x10),4,ar6,ar7);
  (*(code *)PTR_FUN_8c036028)(*(int *)(ar4 + 8) + DAT_8c036024,1,ar6,ar7);
  (*(code *)PTR_FUN_8c03602c)(*(int *)(ar4 + 8) + DAT_8c036024,0x13,ar6,ar7);
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

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c036078(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c036100)(PTR_DAT_8c0360fc,ar5,ar6,ar7);
  puVar4 = PTR_Vec3_dtor_8c036108;
  uVar2 = DAT_8c036104;
  (*(code *)PTR_global_list_push_8c03610c)(uVar1,PTR_Vec3_dtor_8c036108,DAT_8c036104,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c036100)(PTR_DAT_8c036110,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c036108;
  uVar2 = DAT_8c036114;
  (*(code *)PTR_global_list_push_8c03610c)(uVar1,PTR_Vec3_dtor_8c036108,DAT_8c036114,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c036100)(PTR_DAT_8c036118,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c036108;
  uVar2 = DAT_8c03611c;
  (*(code *)PTR_global_list_push_8c03610c)(uVar1,PTR_Vec3_dtor_8c036108,DAT_8c03611c,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c036100)(PTR_DAT_8c036120,puVar4,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c03610c)(uVar2,PTR_Vec3_dtor_8c036108,DAT_8c036124,ar7);
  puVar3 = DAT_8c03612c;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c036128 = *(undefined4 *)DAT_8c03612c;
  }
  else {
    *(undefined8 *)PTR_DAT_8c036128 = *DAT_8c03612c;
  }
  return puVar3;
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
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c03623c;
    (*(code *)PTR_Class_129938_m0_017084_8c036244)(ar4 + DAT_8c036240,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_12a03c_m0_03c32c_8c03624c)(ar4 + DAT_8c036248,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_12a078_m0_05d804_8c036254)(ar4 + DAT_8c036250,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_CAnimal_m0_025688_8c036258)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c03625c)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* s_GRAPHICS_FROGMANLINE_036266 @ 8c036260 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_FROGMANLINE_036266(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  undefined4 a7;
  int iVar2;
  undefined4 extraout_fr1;
  char in_FPSCR_SZ;
  
  a6 = 1;
  uVar1 = 5;
  a7 = ar6;
  (*(code *)PTR_FUN_8c0363a8)(ar4,5,1,ar6);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c0363ac;
  (*(code *)PTR_s_FROGMANLINE_05d646_8c0363b4)(ar4 + DAT_8c0363b0,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c0363bc)(ar4 + DAT_8c0363b8,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c0363c4)(ar4 + DAT_8c0363c0,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c0363d0)(ar4 + 0xc,uVar1,a6,a7);
  *(int *)(DAT_8c0363d4 + ar4) = ar4 + DAT_8c0363b0;
  uVar1 = (*(code *)PTR_FUN_8c0363dc)(ar4 + DAT_8c0363d8,ar6,a6,a7);
  (*(code *)PTR_FUN_8c0363e0)(*(undefined4 *)(DAT_8c0363d4 + ar4),uVar1,a6,a7);
  *(int *)(DAT_8c0363e4 + ar4) = ar4 + DAT_8c0363b8;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(undefined4 *)(DAT_8c0363e8 + ar4 + iVar2 * 4) = 0;
    *(undefined4 *)(DAT_8c0363ec + ar4 + iVar2 * 4) = 0;
  }
  *(undefined1 *)(DAT_8c0363f0 + ar4) = 0;
  (*(code *)PTR_FUN_8c0363fc)
            (ar4,*(undefined4 *)(DAT_8c0363f8 + *(int *)(DAT_8c0363f4 + ar4)),ar4 + DAT_8c0363c0,a7)
  ;
  *(undefined4 *)(DAT_8c036400 + ar4) = *(undefined4 *)(**(int **)(DAT_8c0363f4 + ar4) + 0x40);
  *(undefined4 *)(DAT_8c036404 + ar4) = *(undefined4 *)(**(int **)(DAT_8c0363f4 + ar4) + 0x40);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c036408) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c036408) = CONCAT44(0x3f800000,extraout_fr1);
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
  int a5;
  int a7;
  
  uVar1 = (*(code *)PTR_get_field_a0_035724_8c036524)(ar5,ar5,ar6,ar7);
  if (((char)uVar1 == '\x02') && (*(int *)(DAT_8c036528 + ar5) == 1)) {
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x20;
  }
  a5 = ar5;
  a7 = ar7;
  (*(code *)PTR_CAnimal_m2_02573c_8c03652c)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c036534)(ar4 + DAT_8c036530,a5,ar6,a7);
  if (((char)uVar1 == '\x01') && (*(int *)(DAT_8c036538 + ar4) == 0)) {
    a5 = ar5;
    (*(code *)PTR_FUN_8c03653c)(ar4,ar5,ar6,a7);
  }
  if (*(int *)(DAT_8c036540 + ar4) != 0) {
    a5 = ar5;
    (*(code *)PTR_FUN_8c036544)(ar4,ar5,ar6,a7);
  }
  uVar1 = (*(code *)PTR_FUN_8c036534)(ar4 + DAT_8c036530,a5,ar6,a7);
  if ((char)uVar1 == '\x02') {
    iVar2 = (*(code *)PTR_get_field_2f0_03655c_8c03654c)(ar4 + DAT_8c036548,a5,ar6,a7);
    if (iVar2 == 1) {
      (*(code *)PTR_s_CSquidLine_036894_8c036550)(ar4,ar7,ar5,a7);
      a5 = ar7;
      ar6 = ar5;
    }
  }
  (*(code *)PTR_FUN_8c036554)(ar4,a5,ar6,a7);
  (*(code *)PTR_FUN_8c036558)(ar4,a5,ar6,a7);
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
  int a5;
  int a7;
  
  uVar1 = (*(code *)PTR_get_field_a0_035724_8c036680)(ar5,ar5,ar6,ar7);
  if (((char)uVar1 == '\x02') && (*(int *)(DAT_8c036684 + ar5) == 1)) {
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x20;
  }
  a5 = ar5;
  a7 = ar7;
  (*(code *)PTR_CAnimal_m3_026078_8c036688)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c036690)(ar4 + DAT_8c03668c,a5,ar6,a7);
  if (((char)uVar1 == '\x01') && (*(int *)(DAT_8c036694 + ar4) == 0)) {
    a5 = ar5;
    (*(code *)PTR_FUN_8c036698)(ar4,ar5,ar6,a7);
  }
  if (*(int *)(DAT_8c03669c + ar4) != 0) {
    a5 = ar5;
    (*(code *)PTR_FUN_8c0366a0)(ar4,ar5,ar6,a7);
  }
  uVar1 = (*(code *)PTR_FUN_8c036690)(ar4 + DAT_8c03668c,a5,ar6,a7);
  if ((char)uVar1 == '\x02') {
    iVar2 = (*(code *)PTR_get_field_2f0_03655c_8c0366a8)(ar4 + DAT_8c0366a4,a5,ar6,a7);
    if (iVar2 == 1) {
      (*(code *)PTR_s_CSquidLine_036894_8c0366ac)(ar4,ar7,ar5,a7);
      a5 = ar7;
      ar6 = ar5;
    }
  }
  (*(code *)PTR_FUN_8c0366b0)(ar4,a5,ar6,a7);
  (*(code *)PTR_FUN_8c0366b4)(ar4,a5,ar6,a7);
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
  undefined4 a5;
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
      a5 = ar6;
      (**(code **)(DAT_8c03696c + *(int *)(iVar1 + 8)))(iVar1,ar6,a6,ar7);
      (*(code *)PTR_FUN_8c036970)(*(undefined4 *)(DAT_8c036968 + ar4 + iVar2 * 4),a5,a6,ar7);
      iVar1 = *(int *)(DAT_8c036968 + ar4 + iVar2 * 4);
      (**(code **)(*(int *)(iVar1 + 8) + 0x5c))(iVar1,a5,a6,ar7);
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

/* WARNING: Unknown calling convention */

undefined4 FUN_8c036988(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x30) = in_fr4;
    *(undefined4 *)(ar4 + 0x34) = in_fr5;
    *(undefined4 *)(ar4 + 0x38) = in_fr6;
  }
  else {
    *(undefined8 *)(ar4 + 0x30) = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)(ar4 + 0x34) = in_xd4;
    *(ulonglong *)(ar4 + 0x38) = CONCAT44(in_fr6,in_fr7);
  }
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

/* WARNING: Removing unreachable block (ram,0x8c0369ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

double * FUN_8c0369c4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  int iVar2;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar3;
  float fVar4;
  double dVar5;
  undefined8 uVar6;
  undefined4 in_fr3;
  double dVar8;
  undefined4 in_fr15;
  double in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  undefined4 uVar7;
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = auStack_4;
  }
  else {
    puVar3 = auStack_8;
  }
  *(undefined4 *)(puVar3 + -4) = unaff_r14;
  *(undefined4 *)(puVar3 + -8) = unaff_r13;
  *(undefined4 *)(puVar3 + -0xc) = in_PR;
  *(int *)(puVar3 + -0x14) = ar4;
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar3 + -0x14) + DAT_8c036ab8),in_fr3);
  }
  else {
    dVar8 = *(double *)(*(int *)(puVar3 + -0x14) + DAT_8c036ab8);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c036ac0,(float)(int)*(char *)(DAT_8c036abc + ar4));
  }
  else {
    dVar5 = (double)CONCAT44(DAT_8c036ac4,DAT_8c036ac0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c036ac4,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(_DAT_8c036ac8,DAT_8c036ac4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) + fVar4,SUB84(dVar8,0));
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
    dVar8 = dVar8 + dVar5 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(*(int *)(puVar3 + -0x14) + DAT_8c036ab8) = (int)((ulonglong)dVar8 >> 0x20);
  }
  else {
    *(double *)(*(int *)(puVar3 + -0x14) + DAT_8c036ab8) = dVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = *(undefined4 *)(ar4 + DAT_8c036ab8);
    uVar6 = CONCAT44(uVar7,fVar4);
    *(undefined4 *)(puVar3 + -0x10) = uVar7;
  }
  else {
    uVar6 = *(undefined8 *)(ar4 + DAT_8c036ab8);
    *(undefined8 *)(puVar3 + -0x10) = uVar6;
  }
  fVar4 = (float)uVar6;
  if (in_FPSCR_SZ == '\0') {
    fVar4 = *(float *)(ar4 + DAT_8c036ab8);
  }
  iVar2 = ar5;
  if (in_FPSCR_PR != '\0' || fVar4 <= 1.0) {
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + DAT_8c036ab8);
    }
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c036ab8) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c036ab8) = (ulonglong)(uint)fVar4;
      }
    }
  }
  else {
    uVar7 = (*(code *)PTR_FUN_8c036acc)(ar4 + _DAT_8c036ac8,ar5,ar6,ar7);
    *(short *)(puVar3 + -0x18) = (short)uVar7;
    if (*(short *)(puVar3 + -0x18) == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c036ab8) = DAT_8c036ad0;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c036ab8) = CONCAT44(PTR_FUN_8c036ad4,DAT_8c036ad0);
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c036ab8) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c036ab8) = CONCAT44(0x3f800000,fVar4);
    }
  }
  pdVar1 = (double *)(*(int *)(ar5 + 4) + 0x14);
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = *(undefined4 *)pdVar1;
  }
  else {
    in_xd14 = *pdVar1;
  }
  pdVar1 = (double *)(*(int *)(ar5 + 4) + 0x14);
  dVar8 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(in_fr15,*(undefined4 *)(ar4 + DAT_8c036ab8));
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) * SUB84(dVar8,0),SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 * dVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar1 = (int)((ulonglong)dVar8 >> 0x20);
  }
  else {
    *pdVar1 = dVar8;
  }
  (*(code *)PTR_FUN_8c036ad4)(0,iVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c036ad8)(ar4,*(undefined4 *)(ar5 + 4),ar6,ar7);
  pdVar1 = (double *)(*(int *)(ar5 + 4) + 0x14);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar1 = in_fr15;
  }
  else {
    *pdVar1 = in_xd14;
  }
  return pdVar1;
}



/* FUN_8c036adc @ 8c036adc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c036adc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  int iVar1;
  undefined4 *a6;
  float *a6_00;
  undefined1 *a7;
  float fVar2;
  double dVar3;
  undefined8 in_dr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined8 in_xd0;
  undefined4 in_xf6;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 *puStack_ac;
  undefined1 *puStack_a8;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
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
  undefined4 uStack_28;
  
  uStack_a4._0_4_ = (int)in_dr6;
  uStack_a4._4_4_ = in_xf6;
  uStack_9c = in_fr9;
  if (in_FPSCR_SZ == '\0') {
    uStack_a4._0_4_ = (int)((ulonglong)in_dr6 >> 0x20);
    uStack_a4._4_4_ = (int)in_dr6;
    uStack_9c = in_fr8;
  }
  a5 = 1;
  (*(code *)PTR_FUN_8c036cb0)(*(undefined4 *)(DAT_8c036cac + ar4),1,ar6,ar7);
  (*(code *)PTR_FUN_8c036cb8)(ar4 + DAT_8c036cb4,a5,ar6,ar7);
  iStack_94 = (*(code *)PTR_get_field_2fc_036d20_8c036cbc)(ar4 + DAT_8c036cb4,a5,ar6,ar7);
  if (iStack_94 == 1) {
    iVar1 = ar4 + 0x50;
    (*(code *)PTR_vec3_copy_8c02b5fc_8c036cc0)(auStack_40,iVar1,ar6,ar7);
    iStack_98 = (**(code **)(DAT_8c036cc4 + *(int *)(ar4 + 8)))(ar4,iVar1,ar6,ar7);
    puStack_a8 = auStack_50;
    (*(code *)PTR_FUN_8c036ccc)(iStack_98 + DAT_8c036cc8,auStack_40,ar6,ar7);
    puStack_a8 = auStack_60;
    (*(code *)PTR_Vec3_add_8c036cd0)(ar4 + 0x30,auStack_50,ar6,ar7);
    (*(code *)PTR_Vec3_ctor_copy_8c036cd8)((int)&uStack_a4 + DAT_8c036cd4,auStack_60,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c036cdc)(auStack_60,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c036cdc)(auStack_50,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c036ce0)(auStack_40,0xffffffff,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)&uStack_a4 + DAT_8c036ce4) =
           *(undefined4 *)((int)&uStack_a4 + DAT_8c036cd4);
      *(undefined4 *)((int)&uStack_a4 + DAT_8c036cec) =
           *(undefined4 *)((int)&uStack_a4 + DAT_8c036ce8);
      *(undefined4 *)((int)&uStack_a4 + DAT_8c036cf4) =
           *(undefined4 *)((int)&uStack_a4 + DAT_8c036cf0);
    }
    else {
      *(undefined8 *)((int)&uStack_a4 + DAT_8c036ce4) =
           *(undefined8 *)((int)&uStack_a4 + DAT_8c036cd4);
      *(undefined8 *)((int)&uStack_a4 + DAT_8c036cec) =
           *(undefined8 *)((int)&uStack_a4 + DAT_8c036ce8);
      *(undefined8 *)((int)&uStack_a4 + DAT_8c036cf4) =
           *(undefined8 *)((int)&uStack_a4 + DAT_8c036cf0);
    }
    a6 = &uStack_90;
    iVar1 = (int)&uStack_a4 + DAT_8c036ce4;
    (*(code *)PTR_FUN_8c036cf8)(0,iVar1,a6,ar7);
    (*(code *)PTR_Vec3_ctor_zero_8c036cfc)(&fStack_34,iVar1,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(uStack_90,uStack_a4._4_4_);
    }
    else {
      in_xd0 = CONCAT44(uStack_9c,uStack_a4._4_4_);
      dVar3 = (double)CONCAT44(uStack_8c,uStack_90);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 - dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)((int)&uStack_a4 + DAT_8c036cd4),fVar2);
    }
    else {
      dVar3 = *(double *)((int)&uStack_a4 + DAT_8c036cd4);
    }
    if (in_FPSCR_PR == '\0') {
      fStack_34 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fStack_34 = SUB84(dVar3 + dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(uStack_8c,uStack_9c);
    }
    else {
      fStack_34 = (float)in_xd0;
      fStack_30 = (float)((ulonglong)in_xd0 >> 0x20);
      in_xd0 = CONCAT44(iStack_98,uStack_9c);
      dVar3 = (double)CONCAT44(auStack_88[0],uStack_8c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 - dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c036d00,fVar2);
    }
    else {
      dVar3 = (double)CONCAT44(DAT_8c036d04,DAT_8c036d00);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)((int)&uStack_a4 + DAT_8c036ce8),fVar2);
    }
    else {
      dVar3 = *(double *)((int)&uStack_a4 + DAT_8c036ce8);
    }
    if (in_FPSCR_PR == '\0') {
      fStack_30 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fStack_30 = SUB84(dVar3 + dVar3,0);
    }
    if (in_FPSCR_SZ != '\0') {
      fStack_30 = (float)in_xd0;
      uStack_28 = uStack_a4._4_4_;
    }
    uStack_2c = (undefined4)uStack_a4;
    puStack_a8 = auStack_70;
    (*(code *)PTR_FUN_8c036d08)(*(undefined4 *)(DAT_8c036d04 + ar4),iVar1,a6,ar7);
    (*(code *)PTR_Vec3_set_xyz_8c036d10)(auStack_7c,iVar1,a6,ar7);
    puStack_a8 = auStack_7c;
    puStack_ac = auStack_88;
    a7 = auStack_70;
    a6_00 = &fStack_34;
    (*(code *)PTR_FUN_8c036d14)
              (*(undefined4 *)(DAT_8c036d04 + ar4),(int)&puStack_ac + DAT_8c036cf0,a6_00,a7);
    (*(code *)PTR_vec3_copy_8c023d8c_8c036d1c)(ar4 + DAT_8c036d18,auStack_88,a6_00,a7);
    (*(code *)PTR_object_dtor_delete_8c036ce0)(auStack_88,0xffffffff,a6_00,a7);
    (*(code *)PTR_object_dtor_delete_8c036ce0)(auStack_7c,0xffffffff,a6_00,a7);
    (*(code *)PTR_Vec3_dtor_8c036cdc)(auStack_70,0xffffffff,a6_00,a7);
    (*(code *)PTR_Vec3_dtor_8c036cdc)(&fStack_34,0xffffffff,a6_00,a7);
    iStack_94 = (*(code *)PTR_Vec3_dtor_8c036cdc)
                          ((int)&uStack_a4 + DAT_8c036cd4,0xffffffff,a6_00,a7);
  }
  return iStack_94;
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

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m7_036d7c(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *a5;
  undefined1 *a5_00;
  undefined1 *a6;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar2;
  float fVar3;
  double in_dr0;
  double dVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 in_dr14;
  double dVar8;
  undefined8 in_xd14;
  bool bVar9;
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
  *(undefined4 *)((int)puVar2 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar2 + -0xc) = in_PR;
  a5 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c036ee0)((undefined1 *)((int)puVar2 + -0x1c),ar5,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(code *)PTR_Vec3_ctor_zero_8c036ee0)((undefined1 *)((int)puVar2 + -0x2c),a5,ar6,ar7);
  dVar8 = (double)CONCAT44(uVar1,0x3f800000);
  uVar1 = (*(code *)PTR_get_field_300_036f50_8c036ee8)(ar4 + DAT_8c036ee4,a5,ar6,ar7);
  *(undefined4 *)((int)puVar2 + -0x30) = uVar1;
  if (*(int *)((int)puVar2 + -0x30) == 1) {
    (**(code **)(DAT_8c036eec + *(int *)(ar4 + 8)))(ar4,a5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar2 + -0x34) = (int)((ulonglong)in_dr0 >> 0x20);
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),*(undefined4 *)((int)puVar2 + -0x34))
      ;
    }
    else {
      *(double *)((int)puVar2 + -0x34) = in_dr0;
    }
  }
  a6 = (undefined1 *)((int)puVar2 + -0x2c);
  a5_00 = (undefined1 *)((int)puVar2 + -0x1c);
  (**(code **)(DAT_8c036ef0 + *ar5))(ar5,a5_00,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x30));
  }
  fVar6 = SUB84(dVar8,0);
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(in_dr0,0) - fVar6;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x1c),fVar3);
  }
  else {
    dVar4 = *(double *)((int)puVar2 + -0x1c);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (in_FPSCR_PR == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x30));
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x2c),fVar3);
    }
    else {
      dVar4 = *(double *)((int)puVar2 + -0x2c);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar4 >> 0x20) <= SUB84(dVar4,0)) {
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x2c),SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)((int)puVar2 + -0x2c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar8;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar4;
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x1c),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)puVar2 + -0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x30) = dVar4;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 0x38));
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) - fVar6;
  }
  else {
    fVar3 = SUB84(dVar4 - dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x14),fVar3);
  }
  else {
    dVar4 = *(double *)((int)puVar2 + -0x14);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (in_FPSCR_PR == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x38));
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x24),fVar3);
    }
    else {
      dVar4 = *(double *)((int)puVar2 + -0x24);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar4 >> 0x20) <= SUB84(dVar4,0)) {
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x24),SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)((int)puVar2 + -0x24);
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar8;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x38) = dVar4;
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x14),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)puVar2 + -0x14);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x38) = dVar4;
    }
  }
  uVar1 = (*(code *)PTR_get_field_338_036f00_8c036ef4)(ar4 + DAT_8c036ee4,a5_00,a6,ar7);
  uVar7 = SUB84(dVar8,0);
  *(undefined4 *)((int)puVar2 + -0x38) = uVar1;
  if (*(int *)((int)puVar2 + -0x38) != 1) {
    (**(code **)(DAT_8c036ef8 + *ar5))(ar5,ar4 + 0x30,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar2 + -0x3c) = (int)((ulonglong)dVar4 >> 0x20);
      dVar8 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x3c),uVar7);
      dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar4,0));
    }
    else {
      *(double *)((int)puVar2 + -0x3c) = dVar4;
      dVar8 = *(double *)((int)puVar2 + -0x3c);
      dVar4 = *(double *)(ar4 + 0x34);
    }
    fVar6 = (float)((ulonglong)dVar8 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar9 = fVar6 < (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      bVar9 = dVar8 < dVar4;
    }
    if (bVar9) {
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)((int)puVar2 + -0x28),*(undefined4 *)(ar4 + 0x34));
      }
      else {
        uVar5 = *(undefined8 *)((int)puVar2 + -0x28);
      }
      if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar5 >> 0x20) <= (float)uVar5) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)((int)puVar2 + -0x28);
        }
        else {
          *(undefined8 *)(ar4 + 0x34) = *(undefined8 *)((int)puVar2 + -0x28);
        }
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x34) = fVar6;
    }
    else {
      *(double *)(ar4 + 0x34) = dVar8;
    }
  }
  (*(code *)PTR_Vec3_dtor_8c036efc)((undefined1 *)((int)puVar2 + -0x2c),0xffffffff,a6,ar7);
  uVar1 = (*(code *)PTR_Vec3_dtor_8c036efc)((undefined1 *)((int)puVar2 + -0x1c),0xffffffff,a6,ar7);
  return uVar1;
}



/* get_field_338_036f00 @ 8c036f00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_338_036f00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c036f08 + ar4);
}



/* FUN_8c036f0c @ 8c036f0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c036f0c(int ar4,ulonglong *ar5,undefined8 *ar6,undefined4 ar7)

{
  int iVar1;
  uint in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = 0;
  }
  else {
    *ar5 = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar5 + 4) = 0;
  }
  else {
    *(ulonglong *)((int)ar5 + 4) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar5 + 1) = 0;
  }
  else {
    ar5[1] = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar6 = *(undefined4 *)(ar4 + DAT_8c036f44);
  }
  else {
    *ar6 = *(undefined8 *)(ar4 + DAT_8c036f44);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar6 + 4) = *(undefined4 *)(ar4 + DAT_8c036f48);
  }
  else {
    *(undefined8 *)((int)ar6 + 4) = *(undefined8 *)(ar4 + DAT_8c036f48);
  }
  iVar1 = DAT_8c036f4c;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar6 + 1) = *(undefined4 *)(ar4 + DAT_8c036f4c);
  }
  else {
    ar6[1] = *(undefined8 *)(ar4 + DAT_8c036f4c);
  }
  return iVar1;
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

/* WARNING: Removing unreachable block (ram,0x8c036f8e) */
/* WARNING: Unknown calling convention */

int FUN_8c036f84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
    dVar3 = (double)CONCAT44(DAT_8c037014,in_fr1);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c037018,DAT_8c037014);
  }
  if (in_FPSCR_PR == '\0') {
    dVar5 = (double)CONCAT44(uVar6,(float)*(int *)(DAT_8c037010 + ar4) /
                                   (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    dVar5 = (double)CONCAT44(uVar6,(float)*(int *)(DAT_8c037010 + ar4)) / dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c03701c,SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)PTR_DAT_8c03701c;
  }
  fVar4 = SUB84(dVar5,0);
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c037018) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c037018) = dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c03701c + 4),SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)(PTR_DAT_8c03701c + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c037020) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c037020) = dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c03701c + 8),SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)(PTR_DAT_8c03701c + 8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c037024) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c037024) = dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c03701c + 0xc),SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)(PTR_DAT_8c03701c + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c037028) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c037028) = dVar3;
  }
  *(int *)((int)puVar2 + -4) = ar4;
  *(undefined4 *)((int)puVar2 + -8) = *(undefined4 *)(DAT_8c037010 + *(int *)((int)puVar2 + -4));
  *(int *)(DAT_8c037010 + *(int *)((int)puVar2 + -4)) = *(int *)((int)puVar2 + -8) + 1;
  iVar1 = DAT_8c03702c;
  if (DAT_8c03702c < *(int *)((int)puVar2 + -8) + 1) {
    *(undefined4 *)(DAT_8c037010 + ar4) = 0;
    *(int *)((int)puVar2 + -0xc) = ar4;
    iVar1 = 0x74;
    *(uint *)(*(int *)((int)puVar2 + -0xc) + 0x74) =
         *(uint *)(*(int *)((int)puVar2 + -0xc) + 0x74) & DAT_8c037030;
  }
  return iVar1;
}



/* FUN_8c037034 @ 8c037034 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

float * FUN_8c037034(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  uint in_fr1;
  float fVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c037234)(ar4,ar5,ar6,ar7);
  uVar3 = (*(code *)PTR_FUN_8c03723c)(ar4 + DAT_8c037238,ar5,ar6,ar7);
  sVar2 = (short)uVar3;
  uVar3 = (*(code *)PTR_FUN_8c03724c)
                    (*(int *)(sVar2 * DAT_8c037244 + *(int *)(DAT_8c037240 + ar4)) + DAT_8c037248,
                     ar5,ar6,ar7);
  iVar4 = (*(code *)PTR_FUN_8c037250)
                    (*(int *)(DAT_8c037240 + ar4) + sVar2 * DAT_8c037244 + 0x70,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c037254 + ar4) =
       *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x2c) + 0x2c) + 0x2c);
  *(undefined4 *)(DAT_8c037258 + ar4) = *(undefined4 *)(*(int *)(DAT_8c037254 + ar4) + 0x2c);
  *(undefined4 *)(DAT_8c03725c + ar4) =
       *(undefined4 *)(*(int *)(*(int *)(DAT_8c037254 + ar4) + 0x2c) + 0x30);
  if (sVar2 < 3) {
    *(undefined4 *)(DAT_8c037260 + ar4) =
         *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_8c037254 + ar4) + 0x2c) + 0x30) + 0x30);
  }
  else {
    *(undefined4 *)(DAT_8c037260 + ar4) =
         *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(*(int *)(DAT_8c037254 + ar4) + 0x2c) + 0x30) + 0x30) + 0x30);
  }
  *(undefined4 *)(*(int *)(DAT_8c037258 + ar4) + 4) = uVar3;
  *(undefined4 *)(*(int *)(DAT_8c03725c + ar4) + 4) = uVar3;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c037264) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c037264) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c037268) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c037268) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar8 = CONCAT44(DAT_8c037270,in_fr1);
    *(undefined4 *)(ar4 + DAT_8c03726c) = DAT_8c037270;
  }
  else {
    uVar8 = CONCAT44(DAT_8c037274,DAT_8c037270);
    *(ulonglong *)(ar4 + DAT_8c03726c) = uVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c037274) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c037274) = uVar8 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c037278) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c037278) = uVar8 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar9 = CONCAT44(DAT_8c037270,(int)uVar8);
    *(undefined4 *)(ar4 + DAT_8c03727c) = DAT_8c037270;
  }
  else {
    uVar9 = CONCAT44(DAT_8c037274,DAT_8c037270);
    *(undefined8 *)(ar4 + DAT_8c03727c) = uVar9;
  }
  fVar7 = (float)uVar9;
  (*(code *)PTR_FUN_8c037280)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c037284)(ar4,ar5,ar6,ar7);
  uVar3 = (*(code *)PTR_FUN_8c03723c)(ar4 + DAT_8c037238,ar5,ar6,ar7);
  iVar6 = (int)(short)uVar3;
  pfVar5 = (float *)0x4;
  if ((iVar6 < 5) && (-1 < iVar6)) {
    pfVar5 = (float *)(&switchD_8c03716a::switchdataD_8c037170)[iVar6];
    switch((short)uVar3) {
    case 0:
      *(undefined4 *)(DAT_8c037288 + ar4) =
           *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x2c) + 0x2c) + 0x2c) + 0x30);
      *(undefined4 *)(DAT_8c03728c + ar4) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x30);
      pfVar5 = DAT_8c037290;
      *(undefined1 *)((int)DAT_8c037290 + ar4) = 0xff;
      break;
    case 1:
      *(undefined4 *)(DAT_8c037294 + ar4) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x2c);
      pfVar5 = DAT_8c037298;
      *(undefined4 *)((int)DAT_8c037298 + ar4) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                     0x30) + 0x2c);
      break;
    case 2:
      *(undefined4 *)(DAT_8c037288 + ar4) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x2c) + 0x2c) + 0x2c) +
                                       0x30) + 0x30) + 0x30) + 0x2c);
      *(undefined4 *)(DAT_8c03728c + ar4) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x2c) + 0x2c) +
                                                         0x2c) + 0x30) + 0x30) + 0x30) + 0x30) +
            0x2c);
      pfVar1 = DAT_8c03729c;
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)(ar4 + (int)DAT_8c03729c);
      }
      pfVar5 = (float *)(ar4 + (int)DAT_8c03729c);
      if (in_FPSCR_PR == '\0' && 1.0 < fVar7) {
        pfVar5 = pfVar1;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + (int)DAT_8c03729c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + (int)DAT_8c03729c) = (ulonglong)(uint)fVar7;
        }
      }
      break;
    case 3:
      *(undefined4 *)(DAT_8c037288 + ar4) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x2c) + 0x2c) +
                                                         0x2c) + 0x30) + 0x30) + 0x30) + 0x30) +
            0x30);
      pfVar5 = DAT_8c037290;
      *(undefined1 *)((int)DAT_8c037290 + ar4) = 0xff;
    }
  }
  return pfVar5;
}



/* s_Tm1_Home_njd_0372a2 @ 8c0372a0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_Tm1_Home_njd_0372a2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulonglong *a6;
  int iVar4;
  int iVar5;
  undefined4 in_fr1;
  float fVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  double dVar9;
  undefined8 in_xd0;
  undefined2 uVar10;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined1 auStack_bc [12];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [76];
  
  iVar4 = 0;
  while (iVar5 = iVar4, iVar5 < 5) {
    *(undefined4 *)(DAT_8c0375d8 + iVar5 * DAT_8c0375d4) = DAT_8c0375dc;
    iStack_c0 = iVar5;
    iVar4 = iVar5 + 1;
  }
  *(undefined **)(DAT_8c0375d8 + 4) = PTR_PTR_8c0375e0;
  *(undefined **)(DAT_8c0375d8 + 8) = PTR_PTR_8c0375e4;
  *(undefined4 *)(DAT_8c0375d8 + 0xc) = *(undefined4 *)PTR_PTR_8c0375e8;
  *(undefined4 *)(DAT_8c0375d8 + 0x10) = *(undefined4 *)PTR_PTR_8c0375ec;
  *(undefined4 *)(DAT_8c0375d8 + 0x14) = *(undefined4 *)PTR_PTR_8c0375f0;
  *(undefined4 *)(DAT_8c0375d8 + 0x18) = *(undefined4 *)PTR_PTR_8c0375f4;
  *(undefined4 *)(DAT_8c0375d8 + 0x1c) = *(undefined4 *)PTR_PTR_8c0375f8;
  *(undefined4 *)(DAT_8c0375d8 + 0x20) = *(undefined4 *)PTR_PTR_8c0375fc;
  *(undefined4 *)(DAT_8c0375d8 + 0x24) = 2;
  *(undefined4 *)(DAT_8c0375d8 + 0x30) = DAT_8c037600;
  *(undefined4 *)(DAT_8c0375d8 + 0x34) = *(undefined4 *)PTR_PTR_8c037604;
  *(undefined4 *)(DAT_8c0375d8 + 0x38) = 2;
  *(undefined4 *)(DAT_8c0375d8 + 0x44) = DAT_8c037608;
  *(undefined4 *)(DAT_8c0375d8 + 0x48) = *(undefined4 *)PTR_PTR_8c03760c;
  *(undefined4 *)(DAT_8c0375d8 + 0x4c) = 10;
  *(undefined4 *)(DAT_8c0375d8 + 0x58) = DAT_8c037610;
  *(undefined4 *)(DAT_8c0375d8 + 0x5c) = *(undefined4 *)PTR_PTR_8c037614;
  *(undefined4 *)(DAT_8c0375d8 + 0x60) = 10;
  *(undefined4 *)(DAT_8c0375d8 + 0x6c) = DAT_8c037618;
  *(undefined4 *)(DAT_8c03761c + DAT_8c0375d8) = DAT_8c037620;
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44((undefined4)DAT_8c037628,in_fr1);
    *(undefined4 *)(DAT_8c0375d8 + DAT_8c037624) = (undefined4)DAT_8c037628;
  }
  else {
    uVar7 = CONCAT44(DAT_8c037628._4_4_,(undefined4)DAT_8c037628);
    *(undefined8 *)(DAT_8c0375d8 + DAT_8c037624) = uVar7;
  }
  uVar8 = CONCAT44(0x3f800000,(int)uVar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0375d8 + DAT_8c037628._4_4_) = 0x3f800000;
  }
  else {
    *(ulonglong *)(DAT_8c0375d8 + DAT_8c037628._4_4_) = uVar8;
  }
  iVar4 = DAT_8c0375d8;
  if (in_FPSCR_SZ == '\0') {
    uVar8 = (ulonglong)*(uint *)(DAT_8c0375d8 + DAT_8c037628._4_4_);
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c0375d8 + DAT_8c037628._4_4_);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(*(undefined4 *)(DAT_8c0375d8 + DAT_8c037624),(int)uVar8);
  }
  else {
    dVar9 = *(double *)(DAT_8c0375d8 + DAT_8c037624);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar9 - dVar9,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(*(undefined4 *)(DAT_8c0375d8 + DAT_8c037634),fVar6);
  }
  else {
    dVar9 = *(double *)(DAT_8c0375d8 + DAT_8c037634);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar9 / dVar9,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(DAT_8c037638,fVar6);
  }
  else {
    dVar9 = (double)CONCAT44(_DAT_8c03763c,DAT_8c037638);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = (float)((ulonglong)dVar9 >> 0x20) / SUB84(dVar9,0);
    dVar9 = (double)CONCAT44(fVar6,SUB84(dVar9,0));
    uVar10 = (undefined2)(int)fVar6;
  }
  else {
    dVar9 = dVar9 / dVar9;
    uVar10 = (undefined2)(int)dVar9;
  }
  *(undefined2 *)(DAT_8c037630 + DAT_8c0375d8) = uVar10;
  if (*(short *)(DAT_8c037630 + DAT_8c0375d8) == 0) {
    *(undefined2 *)(DAT_8c037630 + DAT_8c0375d8) = 1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c037640,SUB84(dVar9,0));
    *(undefined4 *)(DAT_8c0375d8 + _DAT_8c03763c) = DAT_8c037640;
  }
  else {
    uVar7 = CONCAT44(DAT_8c037644,DAT_8c037640);
    *(undefined8 *)(DAT_8c0375d8 + _DAT_8c03763c) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c037648,(int)uVar7);
    *(undefined4 *)(DAT_8c0375d8 + DAT_8c037644) = DAT_8c037648;
  }
  else {
    uVar7 = CONCAT44(DAT_8c03764c,DAT_8c037648);
    *(undefined8 *)(DAT_8c0375d8 + DAT_8c037644) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar8 = CONCAT44(DAT_8c037650,(int)uVar7);
    *(undefined4 *)(DAT_8c0375d8 + DAT_8c03764c) = DAT_8c037650;
  }
  else {
    uVar8 = CONCAT44(DAT_8c037654,DAT_8c037650);
    *(ulonglong *)(DAT_8c0375d8 + DAT_8c03764c) = uVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0375d8 + DAT_8c037654) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c0375d8 + DAT_8c037654) = uVar8 & 0xffffffff;
  }
  a6 = (ulonglong *)(DAT_8c0375d8 + DAT_8c037658);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)a6 = 0;
  }
  else {
    *a6 = uVar8 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0375d8 + DAT_8c03765c) = DAT_8c037660;
  }
  else {
    *(undefined8 *)(DAT_8c0375d8 + DAT_8c03765c) = CONCAT44(PTR_PTR_8c037664,DAT_8c037660);
  }
  (*(code *)PTR_Class_129920_m0_015248_8c03766c)
            (DAT_8c0375d8 + DAT_8c037668,PTR_PTR_8c037664,a6,iVar4);
  (*(code *)PTR_Class_129920_m0_015248_8c03766c)
            (DAT_8c0375d8 + DAT_8c037670,PTR_PTR_8c037664,a6,iVar4);
  *(undefined4 *)(DAT_8c037674 + DAT_8c0375d8) = DAT_8c037678;
  *(undefined2 *)(DAT_8c03767c + DAT_8c0375d8) = 0x18;
  uVar1 = DAT_8c037684;
  *(undefined4 *)(DAT_8c037680 + DAT_8c0375d8) = DAT_8c037684;
  *(undefined2 *)(DAT_8c037688 + DAT_8c0375d8) = 0x18;
  (*(code *)PTR_Vec3_set_xyz_8c037690)((int)&iStack_cc + DAT_8c037624,uVar1,a6,iVar4);
  (*(code *)PTR_vec3_copy_8c023d8c_8c037698)
            (DAT_8c0375d8 + DAT_8c037694,(int)&iStack_cc + DAT_8c037624,a6,iVar4);
  uVar1 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c03769c)((int)&iStack_cc + DAT_8c037624,0xffffffff,a6,iVar4);
  (*(code *)PTR_Vec3_set_xyz_8c037690)((int)&iStack_cc + DAT_8c037688,uVar1,a6,iVar4);
  (*(code *)PTR_vec3_copy_8c023d8c_8c037698)
            (DAT_8c0375d8 + _DAT_8c0376a4,(int)&iStack_cc + DAT_8c037688,a6,iVar4);
  uVar1 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c03769c)((int)&iStack_cc + DAT_8c037688,0xffffffff,a6,iVar4);
  (*(code *)PTR_Vec3_set_xyz_8c037690)((int)&iStack_cc + DAT_8c037674,uVar1,a6,iVar4);
  (*(code *)PTR_vec3_copy_8c023d8c_8c037698)
            (DAT_8c0375d8 + _DAT_8c0376b0,(int)&iStack_cc + DAT_8c037674,a6,iVar4);
  (*(code *)PTR_object_dtor_delete_8c03769c)((int)&iStack_cc + DAT_8c037674,0xffffffff,a6,iVar4);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0375d8 + DAT_8c0376b4) = (undefined4)DAT_8c0376b8;
  }
  else {
    *(undefined8 *)(DAT_8c0375d8 + DAT_8c0376b4) =
         CONCAT44(DAT_8c0376b8._4_4_,(undefined4)DAT_8c0376b8);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0375d8 + DAT_8c0376b8._4_4_) = DAT_8c0376c0;
  }
  else {
    *(undefined8 *)(DAT_8c0375d8 + DAT_8c0376b8._4_4_) = CONCAT44(DAT_8c0376c4,DAT_8c0376c0);
  }
  iStack_c4 = DAT_8c0375d8;
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44((undefined4)DAT_8c037628,*(undefined4 *)(DAT_8c0375d8 + DAT_8c0376c4));
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c0375d8 + DAT_8c0376c4);
    dVar9 = (double)CONCAT44(DAT_8c037628._4_4_,(undefined4)DAT_8c037628);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar9 * dVar9,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c0375d8 + DAT_8c0376c4) = fVar6;
  }
  else {
    *(undefined8 *)(DAT_8c0375d8 + DAT_8c0376c4) = in_xd0;
  }
  *(undefined **)(DAT_8c0376c8 + DAT_8c0375d8) = PTR_PTR_8c0376cc;
  *(undefined **)(DAT_8c0376d0 + DAT_8c0375d8) = PTR_PTR_8c0376d4;
  *(undefined4 *)(DAT_8c0376d8 + DAT_8c0375d8) = *(undefined4 *)PTR_PTR_8c0376dc;
  iVar4 = DAT_8c0376e0;
  *(undefined4 *)(DAT_8c0376e0 + DAT_8c0375d8) = *(undefined4 *)PTR_PTR_8c0376e4;
  *(undefined4 *)(DAT_8c0376e8 + DAT_8c0375d8) = *(undefined4 *)PTR_PTR_8c0376ec;
  *(undefined4 *)(DAT_8c0376f0 + DAT_8c0375d8) = *(undefined4 *)PTR_PTR_8c0376f4;
  *(undefined4 *)(DAT_8c0376f8 + DAT_8c0375d8) = *(undefined4 *)PTR_PTR_8c0376fc;
  *(undefined4 *)(DAT_8c037700 + DAT_8c0375d8) = *(undefined4 *)PTR_PTR_8c037704;
  *(undefined4 *)(DAT_8c037708 + DAT_8c0375d8) = 9;
  *(undefined4 *)(DAT_8c03770c + DAT_8c0375d8) = DAT_8c037710;
  *(undefined4 *)(DAT_8c037714 + DAT_8c0375d8) = *(undefined4 *)PTR_PTR_8c037718;
  *(undefined4 *)(DAT_8c03771c + DAT_8c0375d8) = 9;
  *(undefined4 *)(DAT_8c037720 + DAT_8c0375d8) = DAT_8c037724;
  *(undefined4 *)(DAT_8c037728 + DAT_8c0375d8) = *(undefined4 *)PTR_PTR_8c03772c;
  *(undefined4 *)(DAT_8c037730 + DAT_8c0375d8) = 10;
  *(undefined4 *)(DAT_8c037734 + DAT_8c0375d8) = DAT_8c037738;
  *(undefined4 *)(DAT_8c03773c + DAT_8c0375d8) = *(undefined4 *)PTR_PTR_8c037a64;
  *(undefined4 *)(DAT_8c037a6c + DAT_8c037a68) = 10;
  *(undefined4 *)(DAT_8c037a70 + DAT_8c037a68) = DAT_8c037a74;
  *(undefined4 *)(DAT_8c037a78 + DAT_8c037a68) = DAT_8c037a7c;
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44((undefined4)DAT_8c037a84,fVar6);
    *(undefined4 *)(DAT_8c037a68 + DAT_8c037a80) = (undefined4)DAT_8c037a84;
  }
  else {
    uVar7 = CONCAT44(DAT_8c037a84._4_4_,(undefined4)DAT_8c037a84);
    *(undefined8 *)(DAT_8c037a68 + DAT_8c037a80) = uVar7;
  }
  uVar8 = CONCAT44(0x3f800000,(int)uVar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c037a68 + DAT_8c037a84._4_4_) = 0x3f800000;
  }
  else {
    *(ulonglong *)(DAT_8c037a68 + DAT_8c037a84._4_4_) = uVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar8 = (ulonglong)*(uint *)(DAT_8c037a68 + DAT_8c037a84._4_4_);
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c037a68 + DAT_8c037a84._4_4_);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(*(undefined4 *)(DAT_8c037a68 + DAT_8c037a80),(int)uVar8);
  }
  else {
    dVar9 = *(double *)(DAT_8c037a68 + DAT_8c037a80);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar9 - dVar9,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(*(undefined4 *)(DAT_8c037a68 + DAT_8c037a90),fVar6);
  }
  else {
    dVar9 = *(double *)(DAT_8c037a68 + DAT_8c037a90);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar9 / dVar9,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(DAT_8c037a94,fVar6);
  }
  else {
    dVar9 = (double)CONCAT44(_DAT_8c037a98,DAT_8c037a94);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = (float)((ulonglong)dVar9 >> 0x20) / SUB84(dVar9,0);
    dVar9 = (double)CONCAT44(fVar6,SUB84(dVar9,0));
    uVar10 = (undefined2)(int)fVar6;
  }
  else {
    dVar9 = dVar9 / dVar9;
    uVar10 = (undefined2)(int)dVar9;
  }
  *(undefined2 *)(DAT_8c037a8c + DAT_8c037a68) = uVar10;
  iVar5 = DAT_8c037a68;
  if (*(short *)(DAT_8c037a8c + DAT_8c037a68) == 0) {
    *(undefined2 *)(DAT_8c037a8c + DAT_8c037a68) = 1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c037a9c,SUB84(dVar9,0));
    *(undefined4 *)(DAT_8c037a68 + _DAT_8c037a98) = DAT_8c037a9c;
  }
  else {
    uVar7 = CONCAT44(DAT_8c037aa0,DAT_8c037a9c);
    *(undefined8 *)(DAT_8c037a68 + _DAT_8c037a98) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c037aa4,(int)uVar7);
    *(undefined4 *)(DAT_8c037a68 + DAT_8c037aa0) = DAT_8c037aa4;
  }
  else {
    uVar7 = CONCAT44(DAT_8c037aa8,DAT_8c037aa4);
    *(undefined8 *)(DAT_8c037a68 + DAT_8c037aa0) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar8 = CONCAT44(DAT_8c037aac,(int)uVar7);
    *(undefined4 *)(DAT_8c037a68 + DAT_8c037aa8) = DAT_8c037aac;
  }
  else {
    uVar8 = CONCAT44(DAT_8c037ab0,DAT_8c037aac);
    *(ulonglong *)(DAT_8c037a68 + DAT_8c037aa8) = uVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c037a68 + DAT_8c037ab0) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c037a68 + DAT_8c037ab0) = uVar8 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c037a68 + DAT_8c037ab4) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c037a68 + DAT_8c037ab4) = uVar8 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c037a68 + DAT_8c037ab8) = DAT_8c037abc;
  }
  else {
    *(undefined8 *)(DAT_8c037a68 + DAT_8c037ab8) = CONCAT44(PTR_PTR_8c037ac0,DAT_8c037abc);
  }
  (*(code *)PTR_Class_129920_m0_015248_8c037ac8)
            (DAT_8c037a68 + DAT_8c037ac4,PTR_PTR_8c037ac0,iVar5,iVar4);
  (*(code *)PTR_Class_129920_m0_015248_8c037ac8)
            (DAT_8c037a68 + DAT_8c037acc,PTR_PTR_8c037ac0,iVar5,iVar4);
  *(undefined4 *)(DAT_8c037ad0 + DAT_8c037a68) = DAT_8c037ad4;
  *(undefined2 *)(DAT_8c037ad8 + DAT_8c037a68) = 0x16;
  *(undefined4 *)(DAT_8c037adc + DAT_8c037a68) = DAT_8c037ae0;
  iVar5 = DAT_8c037a68;
  *(undefined2 *)(DAT_8c037ae4 + DAT_8c037a68) = 0x16;
  (*(code *)PTR_Vec3_set_xyz_8c037af0)((int)&iStack_cc + DAT_8c037ae8._4_4_,0x16,iVar5,iVar4);
  iVar4 = DAT_8c037a68 + DAT_8c037af4;
  puVar2 = PTR_vec3_copy_8c023d8c_8c037af8;
  (*(code *)PTR_vec3_copy_8c023d8c_8c037af8)
            (iVar4,(int)&iStack_cc + DAT_8c037ae8._4_4_,PTR_vec3_copy_8c023d8c_8c037af8,iVar4);
  (*(code *)PTR_object_dtor_delete_8c037afc)
            ((int)&iStack_cc + DAT_8c037ae8._4_4_,0xffffffff,puVar2,iVar4);
  (*(code *)PTR_Vec3_set_xyz_8c037af0)
            ((int)&iStack_cc + DAT_8c037b04,(int)&iStack_cc + DAT_8c037b04,puVar2,iVar4);
  (*(code *)PTR_vec3_copy_8c023d8c_8c037af8)
            (DAT_8c037a68 + DAT_8c037b08,(int)&iStack_cc + DAT_8c037b04,puVar2,iVar4);
  uVar1 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c037afc)((int)&iStack_cc + DAT_8c037b04,0xffffffff,puVar2,iVar4)
  ;
  (*(code *)PTR_Vec3_set_xyz_8c037af0)(auStack_50,uVar1,puVar2,iVar4);
  (*(code *)PTR_vec3_copy_8c023d8c_8c037af8)(DAT_8c037a68 + _DAT_8c037b14,auStack_50,puVar2,iVar4);
  (*(code *)PTR_object_dtor_delete_8c037afc)(auStack_50,0xffffffff,auStack_50,iVar4);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c037a68 + DAT_8c037b18) = (undefined4)DAT_8c037b1c;
  }
  else {
    *(undefined8 *)(DAT_8c037a68 + DAT_8c037b18) =
         CONCAT44(DAT_8c037b1c._4_4_,(undefined4)DAT_8c037b1c);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c037a68 + DAT_8c037b1c._4_4_) = DAT_8c037b24;
  }
  else {
    *(undefined8 *)(DAT_8c037a68 + DAT_8c037b1c._4_4_) = CONCAT44(DAT_8c037b28,DAT_8c037b24);
  }
  iStack_c8 = DAT_8c037a68;
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(DAT_8c037b2c,*(undefined4 *)(DAT_8c037a68 + DAT_8c037b28));
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c037a68 + DAT_8c037b28);
    dVar9 = (double)CONCAT44(DAT_8c037b30,DAT_8c037b2c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar9 * dVar9,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c037a68 + DAT_8c037b28) = fVar6;
  }
  else {
    *(undefined8 *)(DAT_8c037a68 + DAT_8c037b28) = in_xd0;
  }
  *(undefined **)(DAT_8c037b30 + DAT_8c037a68) = PTR_PTR_8c037b34;
  *(undefined **)(DAT_8c037b38 + DAT_8c037a68) = PTR_PTR_8c037b3c;
  *(undefined4 *)(DAT_8c037b40 + DAT_8c037a68) = *(undefined4 *)PTR_PTR_8c037b44;
  *(undefined4 *)(DAT_8c037b48 + DAT_8c037a68) = *(undefined4 *)PTR_PTR_8c037b4c;
  *(undefined4 *)(DAT_8c037b50 + DAT_8c037a68) = *(undefined4 *)PTR_PTR_8c037b54;
  *(undefined4 *)(DAT_8c037b58 + DAT_8c037a68) = *(undefined4 *)PTR_PTR_8c037b5c;
  *(undefined4 *)(DAT_8c037b60 + DAT_8c037a68) = *(undefined4 *)PTR_PTR_8c037b64;
  *(undefined4 *)(DAT_8c037b68 + DAT_8c037a68) = *(undefined4 *)PTR_PTR_8c037b6c;
  *(undefined4 *)(DAT_8c037b70 + DAT_8c037a68) = 0xf;
  *(undefined4 *)(DAT_8c037b74 + DAT_8c037a68) = DAT_8c037b78;
  *(undefined4 *)(DAT_8c037b7c + DAT_8c037a68) = *(undefined4 *)PTR_PTR_8c037b80;
  *(undefined4 *)(DAT_8c037b84 + DAT_8c037a68) = 0xf;
  *(undefined4 *)(DAT_8c037b88 + DAT_8c037a68) = DAT_8c037b8c;
  *(undefined4 *)(DAT_8c037b90 + DAT_8c037a68) = *(undefined4 *)PTR_PTR_8c037b94;
  *(undefined4 *)(DAT_8c037b98 + DAT_8c037a68) = 10;
  *(undefined4 *)(DAT_8c037b9c + DAT_8c037a68) = DAT_8c037ba0;
  *(undefined4 *)(DAT_8c037ba4 + DAT_8c037a68) = *(undefined4 *)PTR_PTR_8c037ba8;
  *(undefined4 *)(DAT_8c037bac + DAT_8c037a68) = 10;
  *(undefined4 *)(DAT_8c037bb0 + DAT_8c037a68) = DAT_8c037bb4;
  *(undefined4 *)(DAT_8c037bb8 + DAT_8c037a68) = DAT_8c037bbc;
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44((undefined4)DAT_8c037bc4,fVar6);
    *(undefined4 *)(DAT_8c037a68 + DAT_8c037bc0) = (undefined4)DAT_8c037bc4;
  }
  else {
    uVar7 = CONCAT44(DAT_8c037bc4._4_4_,(undefined4)DAT_8c037bc4);
    *(undefined8 *)(DAT_8c037a68 + DAT_8c037bc0) = uVar7;
  }
  uVar8 = CONCAT44(0x3f800000,(int)uVar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c037a68 + DAT_8c037bc4._4_4_) = 0x3f800000;
  }
  else {
    *(ulonglong *)(DAT_8c037a68 + DAT_8c037bc4._4_4_) = uVar8;
  }
  iVar4 = DAT_8c037bcc;
  if (in_FPSCR_SZ == '\0') {
    uVar8 = (ulonglong)*(uint *)(DAT_8c037a68 + DAT_8c037bc4._4_4_);
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c037a68 + DAT_8c037bc4._4_4_);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(*(undefined4 *)(DAT_8c037a68 + DAT_8c037bc0),(int)uVar8);
  }
  else {
    dVar9 = *(double *)(DAT_8c037a68 + DAT_8c037bc0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar9 - dVar9,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(*(undefined4 *)(DAT_8c037a68 + DAT_8c037bd0),fVar6);
  }
  else {
    dVar9 = *(double *)(DAT_8c037a68 + DAT_8c037bd0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar9 / dVar9,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(DAT_8c037a94,fVar6);
  }
  else {
    dVar9 = (double)CONCAT44(_DAT_8c037a98,DAT_8c037a94);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = (float)((ulonglong)dVar9 >> 0x20) / SUB84(dVar9,0);
    dVar9 = (double)CONCAT44(fVar6,SUB84(dVar9,0));
    uVar10 = (undefined2)(int)fVar6;
  }
  else {
    dVar9 = dVar9 / dVar9;
    uVar10 = (undefined2)(int)dVar9;
  }
  *(undefined2 *)(DAT_8c037bcc + DAT_8c037a68) = uVar10;
  if (*(short *)(DAT_8c037bcc + DAT_8c037a68) == 0) {
    *(undefined2 *)(DAT_8c037f28 + DAT_8c037a68) = 1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c037f34,SUB84(dVar9,0));
    *(undefined4 *)(DAT_8c037f2c + DAT_8c037f30) = DAT_8c037f34;
  }
  else {
    uVar7 = CONCAT44(DAT_8c037f38,DAT_8c037f34);
    *(undefined8 *)(DAT_8c037f2c + DAT_8c037f30) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c037f3c,(int)uVar7);
    *(undefined4 *)(DAT_8c037f2c + DAT_8c037f38) = DAT_8c037f3c;
  }
  else {
    uVar7 = CONCAT44(DAT_8c037f40,DAT_8c037f3c);
    *(undefined8 *)(DAT_8c037f2c + DAT_8c037f38) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar8 = CONCAT44(DAT_8c037f44,(int)uVar7);
    *(undefined4 *)(DAT_8c037f2c + DAT_8c037f40) = DAT_8c037f44;
  }
  else {
    uVar8 = CONCAT44(DAT_8c037f48,DAT_8c037f44);
    *(ulonglong *)(DAT_8c037f2c + DAT_8c037f40) = uVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c037f2c + DAT_8c037f48) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c037f2c + DAT_8c037f48) = uVar8 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c037f2c + DAT_8c037f4c) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c037f2c + DAT_8c037f4c) = uVar8 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c037f54,(int)uVar8);
    *(undefined4 *)(DAT_8c037f2c + DAT_8c037f50) = DAT_8c037f54;
  }
  else {
    uVar7 = CONCAT44(DAT_8c037f58,DAT_8c037f54);
    *(undefined8 *)(DAT_8c037f2c + DAT_8c037f50) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c037f5c,(int)uVar7);
    *(undefined4 *)(DAT_8c037f2c + DAT_8c037f58) = DAT_8c037f5c;
  }
  else {
    uVar7 = CONCAT44(DAT_8c037f60,DAT_8c037f5c);
    *(undefined8 *)(DAT_8c037f2c + DAT_8c037f58) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c037f2c + DAT_8c037f60) = 0x3f800000;
  }
  else {
    *(undefined8 *)(DAT_8c037f2c + DAT_8c037f60) = CONCAT44(0x3f800000,(int)uVar7);
  }
  (*(code *)PTR_Class_129920_m0_015248_8c037f6c)
            (DAT_8c037f2c + DAT_8c037f68,PTR_PTR_8c037f64,PTR_Class_129920_m0_015248_8c037f6c,iVar4)
  ;
  puVar2 = PTR_PTR_8c037f64;
  (*(code *)PTR_Class_129920_m0_015248_8c037f6c)
            (DAT_8c037f2c + DAT_8c037f70,PTR_PTR_8c037f64,PTR_Class_129920_m0_015248_8c037f6c,iVar4)
  ;
  *(undefined4 *)(DAT_8c037f74 + DAT_8c037f2c) = DAT_8c037f78;
  *(undefined2 *)(DAT_8c037f7c + DAT_8c037f2c) = 0x17;
  *(undefined4 *)(DAT_8c037f80 + DAT_8c037f2c) = DAT_8c037f84;
  iVar5 = DAT_8c037f88;
  *(undefined2 *)(DAT_8c037f88 + DAT_8c037f2c) = 0x17;
  (*(code *)PTR_Vec3_set_xyz_8c037f90)(auStack_5c,puVar2,iVar5,iVar4);
  (*(code *)PTR_vec3_copy_8c023d8c_8c037f98)(DAT_8c037f2c + DAT_8c037f94,auStack_5c,iVar5,iVar4);
  uVar1 = 0xffffffff;
  puVar2 = PTR_object_dtor_delete_8c037f9c;
  (*(code *)PTR_object_dtor_delete_8c037f9c)
            (auStack_5c,0xffffffff,PTR_object_dtor_delete_8c037f9c,iVar4);
  (*(code *)PTR_Vec3_set_xyz_8c037f90)(auStack_68,uVar1,puVar2,iVar4);
  (*(code *)PTR_vec3_copy_8c023d8c_8c037f98)
            (DAT_8c037f2c + DAT_8c037fa0._4_4_,auStack_68,puVar2,iVar4);
  (*(code *)PTR_object_dtor_delete_8c037f9c)(auStack_68,0xffffffff,puVar2,iVar4);
  (*(code *)PTR_Vec3_set_xyz_8c037f90)(auStack_74,auStack_74,puVar2,iVar4);
  (*(code *)PTR_vec3_copy_8c023d8c_8c037f98)(DAT_8c037f2c + _DAT_8c037fb0,auStack_74,puVar2,iVar4);
  (*(code *)PTR_object_dtor_delete_8c037f9c)(auStack_74,0xffffffff,puVar2,iVar4);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c037f2c + DAT_8c037fb4) = (undefined4)DAT_8c037fb8;
  }
  else {
    *(undefined8 *)(DAT_8c037f2c + DAT_8c037fb4) =
         CONCAT44(DAT_8c037fb8._4_4_,(undefined4)DAT_8c037fb8);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c037f2c + DAT_8c037fb8._4_4_) = DAT_8c037fc0;
  }
  else {
    *(undefined8 *)(DAT_8c037f2c + DAT_8c037fb8._4_4_) = CONCAT44(DAT_8c037fc4,DAT_8c037fc0);
  }
  iStack_cc = DAT_8c037f2c;
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(DAT_8c037f3c,*(undefined4 *)(DAT_8c037f2c + DAT_8c037fc4));
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c037f2c + DAT_8c037fc4);
    dVar9 = (double)CONCAT44(DAT_8c037f40,DAT_8c037f3c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar9 * dVar9,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c037f2c + DAT_8c037fc4) = fVar6;
  }
  else {
    *(undefined8 *)(DAT_8c037f2c + DAT_8c037fc4) = in_xd0;
  }
  *(undefined **)(DAT_8c037fc8 + DAT_8c037f2c) = PTR_PTR_8c037fcc;
  *(undefined **)(DAT_8c037fd0 + DAT_8c037f2c) = PTR_PTR_8c037fd4;
  *(undefined4 *)(DAT_8c037fd8 + DAT_8c037f2c) = *(undefined4 *)PTR_PTR_8c037fdc;
  *(undefined4 *)(DAT_8c037fe0 + DAT_8c037f2c) = *(undefined4 *)PTR_PTR_8c037fe4;
  *(undefined4 *)(DAT_8c037fe8 + DAT_8c037f2c) = *(undefined4 *)PTR_PTR_8c037fec;
  iVar5 = DAT_8c037ff0;
  *(undefined4 *)(DAT_8c037ff0 + DAT_8c037f2c) = *(undefined4 *)PTR_PTR_8c037ff4;
  *(undefined4 *)(DAT_8c037ff8 + DAT_8c037f2c) = *(undefined4 *)PTR_PTR_8c037ffc;
  *(undefined4 *)(DAT_8c038000 + DAT_8c037f2c) = *(undefined4 *)PTR_PTR_8c038004;
  *(undefined4 *)(DAT_8c038008 + DAT_8c037f2c) = 0x11;
  *(undefined4 *)(DAT_8c03800c + DAT_8c037f2c) = DAT_8c038010;
  *(undefined4 *)(DAT_8c038014 + DAT_8c037f2c) = *(undefined4 *)PTR_PTR_8c038018;
  *(undefined4 *)(DAT_8c03801c + DAT_8c037f2c) = 0x11;
  *(undefined4 *)(DAT_8c038020 + DAT_8c037f2c) = DAT_8c038024;
  *(undefined4 *)(DAT_8c038028 + DAT_8c037f2c) = *(undefined4 *)PTR_PTR_8c03802c;
  *(undefined4 *)(DAT_8c038030 + DAT_8c037f2c) = 10;
  iVar4 = DAT_8c037f2c;
  *(undefined4 *)(DAT_8c038034 + DAT_8c037f2c) = DAT_8c038038;
  *(undefined4 *)(DAT_8c03803c + DAT_8c037f2c) = *(undefined4 *)PTR_PTR_8c038040;
  *(undefined4 *)(DAT_8c038044 + DAT_8c037f2c) = 10;
  *(undefined4 *)(DAT_8c038048 + DAT_8c037f2c) = DAT_8c03804c;
  *(undefined4 *)(DAT_8c038050 + DAT_8c037f2c) = DAT_8c038054;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c037f2c + DAT_8c038058) = 0x3f800000;
  }
  else {
    *(undefined8 *)(DAT_8c037f2c + DAT_8c038058) = CONCAT44(0x3f800000,fVar6);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c038060,fVar6);
    *(undefined4 *)(DAT_8c037f2c + DAT_8c03805c) = DAT_8c038060;
  }
  else {
    uVar7 = CONCAT44(DAT_8c038064,DAT_8c038060);
    *(undefined8 *)(DAT_8c037f2c + DAT_8c03805c) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c038068,(int)uVar7);
    *(undefined4 *)(DAT_8c037f2c + DAT_8c038064) = DAT_8c038068;
  }
  else {
    uVar7 = CONCAT44(DAT_8c03806c,DAT_8c038068);
    *(undefined8 *)(DAT_8c037f2c + DAT_8c038064) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar8 = CONCAT44(DAT_8c038070,(int)uVar7);
    *(undefined4 *)(DAT_8c037f2c + DAT_8c03806c) = DAT_8c038070;
  }
  else {
    uVar8 = CONCAT44(DAT_8c038074,DAT_8c038070);
    *(ulonglong *)(DAT_8c037f2c + DAT_8c03806c) = uVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c037f2c + DAT_8c038074) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c037f2c + DAT_8c038074) = uVar8 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c03807c,(int)uVar8);
    *(undefined4 *)(DAT_8c037f2c + DAT_8c038078) = DAT_8c03807c;
  }
  else {
    uVar7 = CONCAT44(DAT_8c038080,DAT_8c03807c);
    *(undefined8 *)(DAT_8c037f2c + DAT_8c038078) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c038084,(int)uVar7);
    *(undefined4 *)(DAT_8c037f2c + DAT_8c038080) = DAT_8c038084;
  }
  else {
    uVar7 = CONCAT44(PTR_PTR_8c038088,DAT_8c038084);
    *(undefined8 *)(DAT_8c037f2c + DAT_8c038080) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c037f3c,(int)uVar7);
    *(undefined4 *)(DAT_8c037f2c + DAT_8c037f58) = DAT_8c037f3c;
  }
  else {
    uVar7 = CONCAT44(DAT_8c037f40,DAT_8c037f3c);
    *(undefined8 *)(DAT_8c037f2c + DAT_8c037f58) = uVar7;
  }
  uVar7 = CONCAT44(0x3f800000,(int)uVar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c037f2c + DAT_8c037f60) = 0x3f800000;
  }
  else {
    *(undefined8 *)(DAT_8c037f2c + DAT_8c037f60) = uVar7;
  }
  (*(code *)PTR_Class_129920_m0_015248_8c037f6c)
            (DAT_8c037f2c + DAT_8c03808c,PTR_PTR_8c038088,iVar4,iVar5);
  uVar3 = (undefined4)uVar7;
  (*(code *)PTR_Class_129920_m0_015248_8c037f6c)
            (DAT_8c037f2c + DAT_8c038090,PTR_PTR_8c038088,iVar4,iVar5);
  *(undefined4 *)(DAT_8c038094 + DAT_8c037f2c) = DAT_8c038098;
  *(undefined2 *)(DAT_8c03809c + DAT_8c037f2c) = 0x65;
  iVar4 = DAT_8c0380a0;
  *(undefined4 *)(DAT_8c0380a0 + DAT_8c037f2c) = DAT_8c0380a4;
  *(undefined2 *)(DAT_8c0380a8 + DAT_8c037f2c) = 0x65;
  (*(code *)PTR_Vec3_set_xyz_8c037f90)(auStack_80,iVar4,PTR_Vec3_set_xyz_8c037f90,iVar5);
  iVar4 = DAT_8c037f2c + DAT_8c0380ac._4_4_;
  (*(code *)PTR_vec3_copy_8c023d8c_8c037f98)(iVar4,auStack_80,iVar4,iVar5);
  uVar1 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c037f9c)(auStack_80,0xffffffff,iVar4,iVar5);
  (*(code *)PTR_Vec3_set_xyz_8c0383b0)(auStack_8c,uVar1,iVar4,iVar5);
  iVar5 = DAT_8c0383b4 + DAT_8c0383b8;
  iVar4 = DAT_8c0383b8;
  (*(code *)PTR_vec3_copy_8c023d8c_8c0383bc)(iVar5,auStack_8c,DAT_8c0383b8,iVar5);
  uVar1 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c0383c0)(auStack_8c,0xffffffff,iVar4,iVar5);
  (*(code *)PTR_Vec3_set_xyz_8c0383b0)(auStack_98,uVar1,iVar4,iVar5);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0383bc)(DAT_8c0383b4 + _DAT_8c0383d0,auStack_98,iVar4,iVar5);
  (*(code *)PTR_object_dtor_delete_8c0383c0)(auStack_98,0xffffffff,iVar4,iVar5);
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44((undefined4)DAT_8c0383d8,uVar3);
    *(undefined4 *)(DAT_8c0383b4 + DAT_8c0383d4) = (undefined4)DAT_8c0383d8;
  }
  else {
    uVar7 = CONCAT44(DAT_8c0383d8._4_4_,(undefined4)DAT_8c0383d8);
    *(undefined8 *)(DAT_8c0383b4 + DAT_8c0383d4) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c0383e0,(int)uVar7);
    *(undefined4 *)(DAT_8c0383b4 + DAT_8c0383d8._4_4_) = DAT_8c0383e0;
  }
  else {
    uVar7 = CONCAT44(DAT_8c0383e4,DAT_8c0383e0);
    *(undefined8 *)(DAT_8c0383b4 + DAT_8c0383d8._4_4_) = uVar7;
  }
  *(undefined **)(DAT_8c0383e4 + DAT_8c0383b4) = PTR_PTR_8c0383e8;
  *(undefined **)(DAT_8c0383ec + DAT_8c0383b4) = PTR_PTR_8c0383f0;
  *(undefined4 *)(DAT_8c0383f4 + DAT_8c0383b4) = *(undefined4 *)PTR_PTR_8c0383f8;
  *(undefined4 *)(DAT_8c0383fc + DAT_8c0383b4) = *(undefined4 *)PTR_PTR_8c038400;
  *(undefined4 *)(DAT_8c038404 + DAT_8c0383b4) = *(undefined4 *)PTR_PTR_8c038408;
  *(undefined4 *)(DAT_8c03840c + DAT_8c0383b4) = *(undefined4 *)PTR_PTR_8c038410;
  *(undefined4 *)(DAT_8c038414 + DAT_8c0383b4) = *(undefined4 *)PTR_PTR_8c038418;
  *(undefined4 *)(DAT_8c03841c + DAT_8c0383b4) = *(undefined4 *)PTR_PTR_8c038420;
  *(undefined4 *)(DAT_8c038424 + DAT_8c0383b4) = 0xf;
  *(undefined4 *)(DAT_8c038428 + DAT_8c0383b4) = DAT_8c03842c;
  *(undefined4 *)(DAT_8c038430 + DAT_8c0383b4) = *(undefined4 *)PTR_PTR_8c038434;
  *(undefined4 *)(DAT_8c038438 + DAT_8c0383b4) = 0xf;
  *(undefined4 *)(DAT_8c03843c + DAT_8c0383b4) = DAT_8c038440;
  *(undefined4 *)(DAT_8c038444 + DAT_8c0383b4) = *(undefined4 *)PTR_PTR_8c038448;
  *(undefined4 *)(DAT_8c03844c + DAT_8c0383b4) = 10;
  *(undefined4 *)(DAT_8c038450 + DAT_8c0383b4) = DAT_8c038454;
  *(undefined4 *)(DAT_8c038458 + DAT_8c0383b4) = *(undefined4 *)PTR_PTR_8c03845c;
  *(undefined4 *)(DAT_8c038460 + DAT_8c0383b4) = 10;
  *(undefined4 *)(DAT_8c038464 + DAT_8c0383b4) = DAT_8c038468;
  *(undefined4 *)(DAT_8c03846c + DAT_8c0383b4) = DAT_8c038470;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0383b4 + DAT_8c038474) = 0x3f800000;
  }
  else {
    *(undefined8 *)(DAT_8c0383b4 + DAT_8c038474) = CONCAT44(0x3f800000,(int)uVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c03847c,(int)uVar7);
    *(undefined4 *)(DAT_8c0383b4 + DAT_8c038478) = DAT_8c03847c;
  }
  else {
    uVar7 = CONCAT44(DAT_8c038480,DAT_8c03847c);
    *(undefined8 *)(DAT_8c0383b4 + DAT_8c038478) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c038484,(int)uVar7);
    *(undefined4 *)(DAT_8c0383b4 + DAT_8c038480) = DAT_8c038484;
  }
  else {
    uVar7 = CONCAT44(DAT_8c038488,DAT_8c038484);
    *(undefined8 *)(DAT_8c0383b4 + DAT_8c038480) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar8 = CONCAT44(DAT_8c03848c,(int)uVar7);
    *(undefined4 *)(DAT_8c0383b4 + DAT_8c038488) = DAT_8c03848c;
  }
  else {
    uVar8 = CONCAT44(DAT_8c038490,DAT_8c03848c);
    *(ulonglong *)(DAT_8c0383b4 + DAT_8c038488) = uVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0383b4 + DAT_8c038490) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c0383b4 + DAT_8c038490) = uVar8 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0383b4 + DAT_8c038494) = DAT_8c038498;
  }
  else {
    *(undefined8 *)(DAT_8c0383b4 + DAT_8c038494) = CONCAT44(DAT_8c03849c,DAT_8c038498);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0383b4 + DAT_8c03849c) = DAT_8c0384a0;
  }
  else {
    *(undefined8 *)(DAT_8c0383b4 + DAT_8c03849c) = CONCAT44(PTR_PTR_8c0384a4,DAT_8c0384a0);
  }
  (*(code *)PTR_Class_129920_m0_015248_8c0384ac)
            (DAT_8c0383b4 + DAT_8c0384a8,PTR_PTR_8c0384a4,PTR_Class_129920_m0_015248_8c0384ac,iVar5)
  ;
  (*(code *)PTR_Class_129920_m0_015248_8c0384ac)
            (DAT_8c0383b4 + DAT_8c0384b0,PTR_PTR_8c0384a4,PTR_Class_129920_m0_015248_8c0384ac,iVar5)
  ;
  *(undefined4 *)(DAT_8c0384b4 + DAT_8c0383b4) = DAT_8c0384b8;
  *(undefined2 *)(DAT_8c0384bc + DAT_8c0383b4) = 0x65;
  uVar1 = DAT_8c0384c4;
  iVar4 = DAT_8c0384c0;
  *(undefined4 *)(DAT_8c0384c0 + DAT_8c0383b4) = DAT_8c0384c4;
  *(undefined2 *)(DAT_8c0384c8 + DAT_8c0383b4) = 0x65;
  (*(code *)PTR_Vec3_set_xyz_8c0383b0)(auStack_a4,auStack_a4,uVar1,iVar4);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0383bc)
            (DAT_8c0383b4 + DAT_8c0384cc._4_4_,auStack_a4,uVar1,iVar4);
  uVar3 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c0383c0)(auStack_a4,0xffffffff,uVar1,iVar4);
  (*(code *)PTR_Vec3_set_xyz_8c0383b0)(auStack_b0,uVar3,uVar1,iVar4);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0383bc)(DAT_8c0383b4 + _DAT_8c0384dc,auStack_b0,uVar1,iVar4);
  uVar1 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c0383c0)(auStack_b0,0xffffffff,auStack_b0,iVar4);
  (*(code *)PTR_Vec3_set_xyz_8c0383b0)(auStack_bc,uVar1,auStack_bc,iVar4);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0383bc)
            (DAT_8c0383b4 + _DAT_8c0384e4,auStack_bc,auStack_bc,iVar4);
  (*(code *)PTR_object_dtor_delete_8c0383c0)
            (auStack_bc,0xffffffff,PTR_object_dtor_delete_8c0383c0,iVar4);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0383b4 + DAT_8c0384e8) = DAT_8c03848c;
  }
  else {
    *(undefined8 *)(DAT_8c0383b4 + DAT_8c0384e8) = CONCAT44(DAT_8c038490,DAT_8c03848c);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0383b4 + DAT_8c0384ec) = DAT_8c0384f0;
  }
  else {
    *(undefined8 *)(DAT_8c0383b4 + DAT_8c0384ec) = CONCAT44(DAT_8c0384f4,DAT_8c0384f0);
  }
  *DAT_8c0384f4 = 3;
  *(undefined4 *)(DAT_8c0384f4 + 2) = 1;
  *(undefined4 *)(DAT_8c0384f4 + 4) = 0;
  *(undefined4 *)(DAT_8c0384f4 + 6) = 0;
  DAT_8c0384f4[8] = 0xffff;
  *(undefined4 *)(DAT_8c0384f4 + 10) = 1;
  *(undefined4 *)(DAT_8c0384f4 + 0xc) = 0;
  *(undefined4 *)(DAT_8c0384f4 + 0xe) = 0;
  return 0xffffffff;
}



/* s_GRAPHICS_FROGMANLINE_0384fa @ 8c0384f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_FROGMANLINE_0384fa(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  int a6_00;
  undefined4 a7;
  
  a7 = 5;
  a6 = 1;
  uVar1 = 6;
  (*(code *)PTR_FUN_8c0385f4)(ar4,6,1,5);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c0385f8;
  (*(code *)PTR_FUN_8c038600)(ar4 + DAT_8c0385fc,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c038608)(ar4 + DAT_8c038604,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c038610)(ar4 + DAT_8c03860c,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c03861c)(ar4 + 0xc,uVar1,a6,a7);
  *(undefined1 *)(DAT_8c038620 + ar4) = 0xff;
  a6_00 = ar4 + DAT_8c0385fc;
  uVar1 = *(undefined4 *)(DAT_8c038628 + *(int *)(DAT_8c038624 + ar4));
  (*(code *)PTR_FUN_8c03862c)(ar4,uVar1,a6_00,a7);
  (*(code *)PTR_FUN_8c038630)(ar4 + DAT_8c03860c,uVar1,a6_00,a7);
  (**(code **)(*(int *)(ar4 + DAT_8c038638) + 0x28))
            ((int *)(ar4 + DAT_8c038638),ar4 + 0x30,a6_00,a7);
  *(undefined4 *)(DAT_8c03863c + ar4) = 0;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x10;
  *(int *)(DAT_8c038640 + ar4) = ar4 + DAT_8c038604;
  *(int *)(DAT_8c038644 + ar4) = ar4 + DAT_8c03860c;
  return ar4;
}



/* CAnimal_m0_038648 @ 8c038648 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int CAnimal_m0_038648(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c0386ac;
    (*(code *)PTR_Class_129cbc_m0_0312f4_8c0386b4)(ar4 + DAT_8c0386b0,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_129c24_m0_02ff90_8c0386bc)(ar4 + DAT_8c0386b8,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_129938_m0_017084_8c0386c4)(ar4 + DAT_8c0386c0,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_CAnimal_m0_025688_8c0386c8)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0386cc)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* CAnimal_m2_0386d0 @ 8c0386d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m2_0386d0(int ar4,uint ar5,int *ar6,int *ar7)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  uint a5;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar6;
  undefined8 in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
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
  *(undefined4 *)((int)puVar6 + -0x18) = in_PR;
  cVar1 = *(char *)(DAT_8c0389ac + ar4);
  if (cVar1 == -1) {
    piVar4 = ar6;
    piVar5 = ar7;
    uVar2 = (*(code *)PTR_FUN_8c0389b0)(ar5,ar5,ar6,ar7);
    *(short *)((int)puVar6 + -0x36) = (short)uVar2;
    uVar3 = (uint)*(ushort *)((int)puVar6 + -0x36);
    (*(code *)PTR_FUN_8c0389b8)(ar4 + DAT_8c0389b4,uVar3,piVar4,piVar5);
    uVar2 = (*(code *)PTR_FUN_8c0389bc)(ar5,uVar3,piVar4,piVar5);
    *(short *)((int)puVar6 + -0x38) = (short)uVar2;
    uVar3 = (uint)*(ushort *)((int)puVar6 + -0x38);
    (*(code *)PTR_FUN_8c0389c0)(ar4 + DAT_8c0389b4,uVar3,piVar4,piVar5);
    if (*(int *)(DAT_8c0389c4 + ar4) != 0) {
      (**(code **)(DAT_8c0389c8 + *(int *)(*(int *)(DAT_8c0389c4 + ar4) + 8)))
                (*(int *)(DAT_8c0389c4 + ar4),ar5,piVar4,piVar5);
      (**(code **)(DAT_8c0389cc + *(int *)(*(int *)(DAT_8c0389c4 + ar4) + 8)))
                (*(int *)(DAT_8c0389c4 + ar4),1,piVar4,piVar5);
      uVar3 = ar5;
      (**(code **)(*(int *)(*(int *)(DAT_8c0389c4 + ar4) + 8) + 0x10))
                (*(int *)(DAT_8c0389c4 + ar4),ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0389d0)(*(undefined4 *)(DAT_8c0389c4 + ar4),uVar3,ar6,ar7);
      uVar2 = (**(code **)(DAT_8c0389d4 + *(int *)(*(int *)(DAT_8c0389c4 + ar4) + 8)))
                        (*(int *)(DAT_8c0389c4 + ar4),uVar3,ar6,ar7);
      *(undefined4 *)((int)puVar6 + -0x1c) = uVar2;
      (*(code *)PTR_FUN_8c0389dc)(*(undefined4 *)(DAT_8c0389c4 + ar4),uVar3,ar6,ar7);
      piVar4 = ar6;
      piVar5 = ar7;
    }
    uVar2 = (*(code *)PTR_FUN_8c0389bc)(ar5,uVar3,piVar4,piVar5);
    *(short *)((int)puVar6 + -0x3a) = (short)uVar2;
    ar5 = uVar3;
    ar6 = piVar4;
    ar7 = piVar5;
    if (*(ushort *)((int)puVar6 + -0x3a) < 5) {
      uVar2 = (*(code *)PTR_get_field_18_02d1a0_8c0389e0)(ar4 + DAT_8c0389b4,uVar3,piVar4,piVar5);
      *(undefined4 *)((int)puVar6 + -0x20) = uVar2;
      ar5 = uVar3;
      ar6 = piVar4;
      ar7 = piVar5;
      if (-1 < *(int *)((int)puVar6 + -0x20)) {
        *(undefined1 *)(DAT_8c0389ac + ar4) = 0;
      }
    }
  }
  else if (cVar1 == '\0') {
    uVar3 = ar5;
    piVar4 = ar6;
    piVar5 = ar7;
    uVar2 = (*(code *)PTR_FUN_8c0389bc)(ar5,ar5,ar6,ar7);
    *(short *)((int)puVar6 + -0x3c) = (short)uVar2;
    uVar2 = (*(code *)PTR_get_field_c_02d1b8_8c0389e4)(ar4 + DAT_8c0389b4,uVar3,piVar4,piVar5);
    *(undefined4 *)((int)puVar6 + -0x24) = uVar2;
    a5 = (uint)*(ushort *)((int)puVar6 + -0x3c) - *(int *)((int)puVar6 + -0x24);
    if (*(int *)(DAT_8c0389c4 + ar4) != 0) {
      (**(code **)(DAT_8c0389c8 + *(int *)(*(int *)(DAT_8c0389c4 + ar4) + 8)))
                (*(int *)(DAT_8c0389c4 + ar4),ar5,piVar4,piVar5);
      (**(code **)(DAT_8c0389cc + *(int *)(*(int *)(DAT_8c0389c4 + ar4) + 8)))
                (*(int *)(DAT_8c0389c4 + ar4),1,piVar4,piVar5);
      uVar3 = ar5;
      piVar5 = ar7;
      (**(code **)(*(int *)(*(int *)(DAT_8c0389c4 + ar4) + 8) + 0x10))
                (*(int *)(DAT_8c0389c4 + ar4),ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0389d0)(*(undefined4 *)(DAT_8c0389c4 + ar4),uVar3,ar6,piVar5);
      uVar2 = (**(code **)(DAT_8c0389d4 + *(int *)(*(int *)(DAT_8c0389c4 + ar4) + 8)))
                        (*(int *)(DAT_8c0389c4 + ar4),uVar3,ar6,piVar5);
      *(undefined4 *)((int)puVar6 + -0x28) = uVar2;
      (*(code *)PTR_FUN_8c0389dc)(*(undefined4 *)(DAT_8c0389c4 + ar4),uVar3,ar6,piVar5);
      piVar4 = ar6;
    }
    uVar2 = (**(code **)(DAT_8c0389e8 + *(int *)(ar4 + 8)))(ar4,uVar3,piVar4,piVar5);
    *(undefined4 *)((int)puVar6 + -0x2c) = uVar2;
    if (*(int *)((int)puVar6 + -0x2c) != 0) {
      uVar3 = a5;
      (*(code *)PTR_FUN_8c0389f0)(ar4 + DAT_8c0389ec,a5,ar7,piVar5);
      piVar4 = ar7;
    }
    uVar2 = (*(code *)PTR_FUN_8c0389f4)(ar4 + DAT_8c0389ec,uVar3,piVar4,piVar5);
    *(undefined4 *)((int)puVar6 + -0x30) = uVar2;
    if (*(int *)((int)puVar6 + -0x30) == -1) {
      ar5 = 0x3c;
      uVar2 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c0389f8)(a5,0x3c,piVar4,piVar5);
      *(undefined4 *)((int)puVar6 + -0x34) = uVar2;
      ar6 = piVar4;
      ar7 = piVar5;
      if (3 < *(int *)((int)puVar6 + -0x34)) {
        *(undefined1 *)(DAT_8c0389ac + ar4) = 1;
      }
    }
    else {
      uVar2 = (*(code *)PTR_FUN_8c0389b0)(ar5,uVar3,piVar4,piVar5);
      *(short *)((int)puVar6 + -0x3e) = (short)uVar2;
      uVar3 = (uint)*(ushort *)((int)puVar6 + -0x3e);
      (*(code *)PTR_FUN_8c0389b8)(ar4 + DAT_8c0389b4,uVar3,piVar4,piVar5);
      uVar2 = (*(code *)PTR_FUN_8c0389bc)(ar5,uVar3,piVar4,piVar5);
      *(short *)((int)puVar6 + -0x40) = (short)uVar2;
      ar5 = (uint)*(ushort *)((int)puVar6 + -0x40);
      (*(code *)PTR_FUN_8c0389c0)(ar4 + DAT_8c0389b4,ar5,piVar4,piVar5);
      ar6 = piVar4;
      ar7 = piVar5;
    }
  }
  else if (cVar1 == '\x01') {
    piVar4 = ar7;
    (**(code **)(DAT_8c0389cc + *(int *)(*(int *)(DAT_8c0389c4 + ar4) + 8)))
              (*(int *)(DAT_8c0389c4 + ar4),0,ar6,ar7);
    (**(code **)(*ar7 + 0x4c))(ar7,*(undefined4 *)(DAT_8c0389c4 + ar4),ar6,piVar4);
    *(undefined4 *)(DAT_8c0389c4 + ar4) = 0;
    ar6 = (int *)0x1b;
    uVar3 = 0x1a;
    (*(code *)PTR_FUN_8c0389fc)(ar5,0x1a,0x1b,piVar4);
    (*(code *)PTR_FUN_8c038a00)(ar4,uVar3,ar6,piVar4);
    ar5 = uVar3;
    ar7 = piVar4;
  }
  (**(code **)(DAT_8c038a04 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c038a0c)(ar4 + DAT_8c038a08,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c038a10 @ 8c038a10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c038a10(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x5c) = in_fr4;
    *(undefined4 *)(ar4 + 0x60) = in_fr5;
    *(undefined4 *)(ar4 + 100) = in_fr6;
  }
  else {
    *(undefined8 *)(ar4 + 0x5c) = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)(ar4 + 0x60) = in_xd4;
    *(ulonglong *)(ar4 + 100) = CONCAT44(in_fr6,in_fr7);
  }
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
  int a7;
  int a6;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c038c20)(*(int *)(DAT_8c038c1c + ar4) + 0x78,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c038c24)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c038c28)(0,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c038c2c,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c038c30,DAT_8c038c2c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c038c30,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c038c34,DAT_8c038c30);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a7 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c038c2c,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c038c30,DAT_8c038c2c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c038c30,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c038c34,DAT_8c038c30);
  }
  if (in_FPSCR_PR == '\0') {
    a6 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a6 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c038c2c,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c038c30,DAT_8c038c2c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c038c30,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c038c34,DAT_8c038c30);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  (*(code *)PTR_FUN_8c038c34)(0,a5,a6,a7);
  (*(code *)PTR_FUN_8c038c38)(0,a5,a6,a7);
  (*(code *)PTR_FUN_8c038c38)(0,a5,a6,a7);
  uVar1 = (*(code *)PTR_FUN_8c038c40)(*(int *)(DAT_8c038c1c + ar4) + 0x70,a5,a6,a7);
  (*(code *)PTR_FUN_8c038c44)(uVar1,a5,a6,a7);
  (*(code *)PTR_FUN_8c038c48)(1,a5,a6,a7);
  uVar1 = 0;
  if (*(int *)(DAT_8c038c4c + ar4) != 0) {
    (*(code *)PTR_FUN_8c038c50)(*(undefined4 *)(DAT_8c038c4c + ar4),a5,a6,a7);
    uVar1 = (**(code **)(*(int *)(*(int *)(DAT_8c038c4c + ar4) + 8) + 0x34))
                      (*(int *)(DAT_8c038c4c + ar4),a5,a6,a7);
  }
  return uVar1;
}



/* FUN_8c038c54 @ 8c038c54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c038c54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_noop_038c8c_8c038c84)(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c038c88 + ar4) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(DAT_8c038c88 + ar4) + 8) + 0x5c))
                      (*(int *)(DAT_8c038c88 + ar4),ar5,ar6,ar7);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_FROG_EGG_038ecc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_dr0;
  undefined8 uVar3;
  char in_FPSCR_SZ;
  
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined4 *)(DAT_8c0390a0 + iVar2 * DAT_8c03909c) = 0;
    *(undefined **)(iVar2 * DAT_8c03909c + DAT_8c0390a0 + 4) = PTR_PTR_8c0390a4;
    *(undefined **)(iVar2 * DAT_8c03909c + DAT_8c0390a0 + 8) = PTR_PTR_8c0390a8;
    *(undefined4 *)(iVar2 * DAT_8c03909c + DAT_8c0390a0 + 0xc) = *(undefined4 *)PTR_PTR_8c0390ac;
    *(undefined4 *)(iVar2 * DAT_8c03909c + DAT_8c0390a0 + 0x10) = 0;
    *(undefined4 *)(iVar2 * DAT_8c03909c + DAT_8c0390a0 + 0x14) = *(undefined4 *)PTR_PTR_8c0390b0;
    *(undefined4 *)(iVar2 * DAT_8c03909c + DAT_8c0390a0 + 0x18) = 0;
    *(undefined4 *)(iVar2 * DAT_8c03909c + DAT_8c0390a0 + 0x1c) = 0;
    *(undefined4 *)(DAT_8c0390b4 + iVar2 * DAT_8c03909c + DAT_8c0390a0) = DAT_8c0390b8;
    *(undefined2 *)(DAT_8c0390bc + iVar2 * DAT_8c03909c + DAT_8c0390a0) = 1;
    *(undefined4 *)(DAT_8c0390c0 + iVar2 * DAT_8c03909c + DAT_8c0390a0) = DAT_8c0390c4;
    *(undefined2 *)(DAT_8c0390c8 + iVar2 * DAT_8c03909c + DAT_8c0390a0) = 1;
    *(undefined4 *)(DAT_8c0390cc + iVar2 * DAT_8c03909c + DAT_8c0390a0) = DAT_8c0390d0;
    puVar1 = (undefined8 *)(iVar2 * DAT_8c03909c + DAT_8c0390a0 + DAT_8c0390d4);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,(int)in_dr0);
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c03909c + DAT_8c0390a0 + DAT_8c0390d8);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c0390dc,(int)in_dr0);
      *(undefined4 *)puVar1 = DAT_8c0390dc;
    }
    else {
      uVar3 = CONCAT44(_DAT_8c0390e0,DAT_8c0390dc);
      *puVar1 = uVar3;
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c03909c + DAT_8c0390a0 + _DAT_8c0390e0);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c0390e4,(int)uVar3);
      *(undefined4 *)puVar1 = DAT_8c0390e4;
    }
    else {
      uVar3 = CONCAT44(_DAT_8c0390e8,DAT_8c0390e4);
      *puVar1 = uVar3;
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c03909c + DAT_8c0390a0 + _DAT_8c0390e8);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(DAT_8c0390ec,(int)uVar3);
      *(undefined4 *)puVar1 = DAT_8c0390ec;
    }
    else {
      in_dr0 = CONCAT44(_DAT_8c0390f0,DAT_8c0390ec);
      *puVar1 = in_dr0;
    }
  }
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined2 *)(_DAT_8c0390f0 + iVar2 * 0x10) = 0xffff;
    *(undefined4 *)(iVar2 * 0x10 + _DAT_8c0390f0 + 4) = 1;
    *(undefined4 *)(iVar2 * 0x10 + _DAT_8c0390f0 + 8) = 0;
    *(undefined4 *)(iVar2 * 0x10 + _DAT_8c0390f0 + 0xc) = 0;
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
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char in_FPSCR_SZ;
  undefined4 auStack_fc [4];
  undefined4 uStack_ec;
  undefined4 uStack_e8;
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
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0394cc)(PTR_DAT_8c0394c8,PTR_Vec3_ctor_xyz_8c0394cc,ar6,ar7)
  ;
  *(undefined4 *)((int)auStack_fc + DAT_8c0394d0) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c0394d8;
  uVar1 = DAT_8c0394d4;
  (*(code *)PTR_global_list_push_8c0394dc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c0394d0),PTR_Vec3_dtor_8c0394d8,DAT_8c0394d4,ar7
            );
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0394cc)(PTR_DAT_8c0394e0,puVar2,uVar1,ar7);
  *(undefined4 *)((int)auStack_fc + DAT_8c0394e4) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c0394d8;
  (*(code *)PTR_global_list_push_8c0394dc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c0394e4),PTR_Vec3_dtor_8c0394d8,DAT_8c0394e8,ar7
            );
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0394cc)
                    (PTR_DAT_8c0394ec,puVar2,PTR_Vec3_ctor_xyz_8c0394cc,ar7);
  *(undefined4 *)((int)auStack_fc + DAT_8c0394f0) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c0394d8;
  (*(code *)PTR_global_list_push_8c0394dc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c0394f0),PTR_Vec3_dtor_8c0394d8,DAT_8c0394f4,ar7
            );
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0394cc)
                    (PTR_DAT_8c0394f8,puVar2,PTR_Vec3_ctor_xyz_8c0394cc,ar7);
  *(undefined4 *)((int)auStack_fc + DAT_8c0394fc) = uVar1;
  (*(code *)PTR_global_list_push_8c0394dc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c0394fc),PTR_Vec3_dtor_8c0394d8,DAT_8c039500,ar7
            );
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c039504 = *(undefined4 *)DAT_8c039508;
  }
  else {
    *(undefined8 *)PTR_DAT_8c039504 = *DAT_8c039508;
  }
  uVar1 = DAT_8c03950c;
  (*(code *)PTR_FUN_8c03951c)(DAT_8c039518,PTR_FUN_8c039514,PTR_FUN_8c039510,DAT_8c03950c);
  (*(code *)PTR_global_list_push_8c0394dc)(0,PTR_FUN_8c039524,DAT_8c039520,uVar1);
  uVar1 = 0x10;
  (*(code *)PTR_FUN_8c03951c)
            (DAT_8c039530,PTR_FUN_8c03952c,PTR_free_if_nonnull_wrap_03a454_8c039528,0x10);
  (*(code *)PTR_global_list_push_8c0394dc)(0,PTR_FUN_8c039538,DAT_8c039534,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c03951c)
            (DAT_8c039544,PTR_FUN_8c039540,PTR_free_if_nonnull_wrap_0247b0_8c03953c,4);
  (*(code *)PTR_global_list_push_8c0394dc)(0,PTR_FUN_8c03954c,DAT_8c039548,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c03951c)
            (DAT_8c039558,PTR_FUN_8c039554,PTR_free_if_nonnull_wrap_03a3dc_8c039550,4);
  (*(code *)PTR_global_list_push_8c0394dc)(0,PTR_FUN_8c039560,DAT_8c03955c,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c03951c)
            (DAT_8c039564,PTR_FUN_8c039540,PTR_free_if_nonnull_wrap_0247b0_8c03953c,4);
  (*(code *)PTR_global_list_push_8c0394dc)(0,PTR_FUN_8c03956c,DAT_8c039568,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c03951c)
            (DAT_8c039570,PTR_FUN_8c039554,PTR_free_if_nonnull_wrap_03a3dc_8c039550,4);
  (*(code *)PTR_global_list_push_8c0394dc)(0,PTR_FUN_8c039578,DAT_8c039574,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c03951c)
            (DAT_8c03957c,PTR_FUN_8c039540,PTR_free_if_nonnull_wrap_0247b0_8c03953c,4);
  (*(code *)PTR_global_list_push_8c0394dc)(0,PTR_FUN_8c039584,DAT_8c039580,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c03951c)
            (DAT_8c039588,PTR_FUN_8c039554,PTR_free_if_nonnull_wrap_03a3dc_8c039550,4);
  (*(code *)PTR_global_list_push_8c0394dc)(0,PTR_FUN_8c039590,DAT_8c03958c,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c03951c)
            (DAT_8c039594,PTR_FUN_8c039540,PTR_free_if_nonnull_wrap_0247b0_8c03953c,4);
  (*(code *)PTR_global_list_push_8c0394dc)(0,PTR_FUN_8c03959c,DAT_8c039598,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c03951c)
            (DAT_8c0395a0,PTR_FUN_8c039554,PTR_free_if_nonnull_wrap_03a3dc_8c039550,4);
  (*(code *)PTR_global_list_push_8c0394dc)(0,PTR_FUN_8c0395a8,DAT_8c0395a4,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c03951c)
            (DAT_8c0395ac,PTR_FUN_8c039540,PTR_free_if_nonnull_wrap_0247b0_8c03953c,4);
  (*(code *)PTR_global_list_push_8c0394dc)(0,PTR_FUN_8c0395b4,DAT_8c0395b0,uVar1);
  uVar3 = 4;
  (*(code *)PTR_FUN_8c03951c)
            (DAT_8c0395b8,PTR_FUN_8c039554,PTR_free_if_nonnull_wrap_03a3dc_8c039550,4);
  uVar1 = DAT_8c0395bc;
  (*(code *)PTR_global_list_push_8c0394dc)(0,PTR_FUN_8c0395c0,DAT_8c0395bc,uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0394cc)(DAT_8c0395d0,PTR_Vec3_ctor_xyz_8c0394cc,uVar1,uVar3)
  ;
  *(undefined4 *)((int)auStack_fc + DAT_8c0395d4) = uVar1;
  uVar1 = DAT_8c0395d8;
  (*(code *)PTR_global_list_push_8c0394dc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c0395d4),PTR_Vec3_dtor_8c0394d8,DAT_8c0395d8,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0394cc)(DAT_8c0395e4,PTR_Vec3_ctor_xyz_8c0394cc,uVar1,uVar3)
  ;
  *(undefined4 *)((int)auStack_fc + DAT_8c0395e8) = uVar1;
  uVar1 = DAT_8c0395ec;
  (*(code *)PTR_global_list_push_8c0394dc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c0395e8),PTR_Vec3_dtor_8c0394d8,DAT_8c0395ec,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0394cc)(DAT_8c0395f4,PTR_Vec3_ctor_xyz_8c0394cc,uVar1,uVar3)
  ;
  *(undefined4 *)((int)auStack_fc + DAT_8c0395f8) = uVar1;
  uVar1 = DAT_8c0395fc;
  (*(code *)PTR_global_list_push_8c0394dc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c0395f8),PTR_Vec3_dtor_8c0394d8,DAT_8c0395fc,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0394cc)(DAT_8c039600,PTR_Vec3_ctor_xyz_8c0394cc,uVar1,uVar3)
  ;
  *(undefined4 *)((int)auStack_fc + DAT_8c039604) = uVar1;
  uVar1 = DAT_8c039608;
  (*(code *)PTR_global_list_push_8c0394dc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039604),PTR_Vec3_dtor_8c0394d8,DAT_8c039608,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0394cc)(DAT_8c039610,PTR_Vec3_ctor_xyz_8c0394cc,uVar1,uVar3)
  ;
  *(undefined4 *)((int)auStack_fc + DAT_8c039614) = uVar1;
  uVar1 = DAT_8c039618;
  (*(code *)PTR_global_list_push_8c0394dc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039614),PTR_Vec3_dtor_8c0394d8,DAT_8c039618,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0394cc)(DAT_8c03961c,PTR_Vec3_ctor_xyz_8c0394cc,uVar1,uVar3)
  ;
  *(undefined4 *)((int)auStack_fc + DAT_8c039620) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c0394d8;
  uVar1 = DAT_8c039624;
  (*(code *)PTR_global_list_push_8c0394dc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039620),PTR_Vec3_dtor_8c0394d8,DAT_8c039624,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0394cc)(DAT_8c039628,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_fc + DAT_8c03962c) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c0394d8;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c0399f8),PTR_Vec3_dtor_8c0394d8,DAT_8c039630,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)
                    (DAT_8c039a0c,puVar2,PTR_Vec3_ctor_xyz_8c039a10,uVar3);
  *(undefined4 *)((int)auStack_fc + DAT_8c039a14) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  uVar1 = DAT_8c039a18;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039a14),PTR_Vec3_dtor_8c039a1c,DAT_8c039a18,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)(DAT_8c039a2c,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_fc + DAT_8c039a30) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  uVar1 = DAT_8c039a34;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039a30),PTR_Vec3_dtor_8c039a1c,DAT_8c039a34,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)(DAT_8c039a38._4_4_,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_fc + DAT_8c039a40) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  uVar1 = DAT_8c039a44;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039a40),PTR_Vec3_dtor_8c039a1c,DAT_8c039a44,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)(DAT_8c039a4c,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_fc + DAT_8c039a50) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  uVar1 = DAT_8c039a54;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039a50),PTR_Vec3_dtor_8c039a1c,DAT_8c039a54,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)(DAT_8c039a58,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_fc + DAT_8c039a5c) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  uVar1 = DAT_8c039a60;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039a5c),PTR_Vec3_dtor_8c039a1c,DAT_8c039a60,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)(DAT_8c039a68,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_fc + DAT_8c039a6c) = uVar1;
  uVar1 = DAT_8c039a70;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039a6c),PTR_Vec3_dtor_8c039a1c,DAT_8c039a70,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)(DAT_8c039a74,PTR_Vec3_ctor_xyz_8c039a10,uVar1,uVar3)
  ;
  *(undefined4 *)((int)auStack_fc + DAT_8c039a78) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  uVar1 = DAT_8c039a7c;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039a78),PTR_Vec3_dtor_8c039a1c,DAT_8c039a7c,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)(DAT_8c039a80,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_fc + DAT_8c039a84) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039a84),PTR_Vec3_dtor_8c039a1c,DAT_8c039a88,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)
                    (DAT_8c039a8c,puVar2,PTR_Vec3_ctor_xyz_8c039a10,uVar3);
  *(undefined4 *)((int)auStack_fc + DAT_8c039a90) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039a90),PTR_Vec3_dtor_8c039a1c,DAT_8c039a94,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)
                    (DAT_8c039aa4,puVar2,PTR_Vec3_ctor_xyz_8c039a10,uVar3);
  *(undefined4 *)((int)auStack_fc + DAT_8c039aa8) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039aa8),PTR_Vec3_dtor_8c039a1c,DAT_8c039aac,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)
                    (DAT_8c039ab0._4_4_,puVar2,PTR_Vec3_ctor_xyz_8c039a10,uVar3);
  *(undefined4 *)((int)auStack_fc + DAT_8c039ab8) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  uVar1 = DAT_8c039abc;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039ab8),PTR_Vec3_dtor_8c039a1c,DAT_8c039abc,
             DAT_8c039abc);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)
                    (DAT_8c039ac4,puVar2,PTR_Vec3_ctor_xyz_8c039a10,uVar1);
  *(undefined4 *)((int)auStack_fc + DAT_8c039ac8) = uVar1;
  puVar4 = PTR_global_list_push_8c0399fc;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039ac8),PTR_Vec3_dtor_8c039a1c,DAT_8c039acc,
             PTR_global_list_push_8c0399fc);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)
                    (DAT_8c039ad4,PTR_Vec3_ctor_xyz_8c039a10,DAT_8c039ad4,puVar4);
  *(undefined4 *)((int)auStack_fc + DAT_8c039ad8) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039ad8),PTR_Vec3_dtor_8c039a1c,DAT_8c039adc,
             puVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)
                    (DAT_8c039ae4,puVar2,PTR_Vec3_ctor_xyz_8c039a10,puVar4);
  *(undefined4 *)((int)auStack_fc + DAT_8c039ae8) = uVar1;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039ae8),PTR_Vec3_dtor_8c039a1c,DAT_8c039aec,
             uVar1);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)
                    (DAT_8c039af4,PTR_Vec3_ctor_xyz_8c039a10,DAT_8c039af4,uVar1);
  *(undefined4 *)((int)auStack_fc + DAT_8c039af8) = uVar1;
  uVar3 = *(undefined4 *)((int)auStack_fc + DAT_8c039af8);
  uVar1 = DAT_8c039afc;
  (*(code *)PTR_global_list_push_8c0399fc)(uVar3,PTR_Vec3_dtor_8c039a1c,DAT_8c039afc,uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)(DAT_8c039b00,DAT_8c039b00,uVar1,uVar3);
  *(undefined4 *)((int)auStack_fc + DAT_8c039b04) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  uVar1 = DAT_8c039b08;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039b04),PTR_Vec3_dtor_8c039a1c,DAT_8c039b08,
             uVar3);
  puVar4 = PTR_Vec3_ctor_xyz_8c039a10;
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)
                    (DAT_8c039b10,puVar2,uVar1,PTR_Vec3_ctor_xyz_8c039a10);
  *(undefined4 *)((int)auStack_fc + DAT_8c039b14) = uVar1;
  uVar1 = DAT_8c039b18;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039b14),PTR_Vec3_dtor_8c039a1c,DAT_8c039b18,
             puVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)(DAT_8c039b28,DAT_8c039b28,uVar1,puVar4);
  *(undefined4 *)((int)auStack_fc + DAT_8c039b2c) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  uVar1 = DAT_8c039b30;
  puVar4 = PTR_Vec3_dtor_8c039a1c;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039b2c),PTR_Vec3_dtor_8c039a1c,DAT_8c039b30,
             PTR_Vec3_dtor_8c039a1c);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)(DAT_8c039b34._4_4_,puVar2,uVar1,puVar4);
  *(undefined4 *)((int)auStack_fc + DAT_8c039b3c) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  (*(code *)PTR_global_list_push_8c0399fc)
            (*(undefined4 *)((int)auStack_fc + DAT_8c039b3c),PTR_Vec3_dtor_8c039a1c,DAT_8c039b40,
             puVar4);
  uVar3 = DAT_8c039b48;
  uStack_80 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)
                        (DAT_8c039b48,puVar2,PTR_Vec3_ctor_xyz_8c039a10,DAT_8c039b48);
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  uVar1 = DAT_8c039b4c;
  (*(code *)PTR_global_list_push_8c0399fc)(uStack_80,PTR_Vec3_dtor_8c039a1c,DAT_8c039b4c,uVar3);
  uStack_84 = (*(code *)PTR_Vec3_ctor_xyz_8c039a10)(DAT_8c039b50._4_4_,puVar2,uVar1,uVar3);
  puVar2 = PTR_Vec3_dtor_8c039a1c;
  uVar3 = DAT_8c039b58;
  (*(code *)PTR_global_list_push_8c039f2c)
            (uStack_84,PTR_Vec3_dtor_8c039a1c,DAT_8c039b58,DAT_8c039b58);
  uStack_88 = (*(code *)PTR_Vec3_ctor_xyz_8c039f3c)
                        (DAT_8c039f38,puVar2,PTR_Vec3_ctor_xyz_8c039f3c,uVar3);
  uVar1 = DAT_8c039f40;
  (*(code *)PTR_global_list_push_8c039f2c)(uStack_88,PTR_Vec3_dtor_8c039f44,DAT_8c039f40,uVar3);
  uStack_8c = (*(code *)PTR_Vec3_ctor_xyz_8c039f3c)
                        (DAT_8c039f48._4_4_,PTR_Vec3_ctor_xyz_8c039f3c,uVar1,uVar3);
  puVar2 = PTR_Vec3_dtor_8c039f44;
  uVar1 = DAT_8c039f50;
  (*(code *)PTR_global_list_push_8c039f2c)(uStack_8c,PTR_Vec3_dtor_8c039f44,DAT_8c039f50,uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c039f3c)(DAT_8c039f58,puVar2,uVar1,uVar3);
  uStack_90 = uVar1;
  (*(code *)PTR_global_list_push_8c039f2c)(uVar1,PTR_Vec3_dtor_8c039f44,DAT_8c039f5c,uVar1);
  uVar3 = (*(code *)PTR_Vec3_ctor_xyz_8c039f3c)
                    (DAT_8c039f60,PTR_Vec3_ctor_xyz_8c039f3c,DAT_8c039f60,uVar1);
  uVar1 = DAT_8c039f64;
  uStack_94 = uVar3;
  (*(code *)PTR_global_list_push_8c039f2c)(uVar3,PTR_Vec3_dtor_8c039f44,DAT_8c039f64,uVar3);
  uStack_98 = (*(code *)PTR_Vec3_ctor_xyz_8c039f3c)(DAT_8c039f74,DAT_8c039f74,uVar1,uVar3);
  puVar2 = PTR_Vec3_dtor_8c039f44;
  uVar1 = DAT_8c039f78;
  (*(code *)PTR_global_list_push_8c039f2c)(uStack_98,PTR_Vec3_dtor_8c039f44,DAT_8c039f78,uVar3);
  puVar4 = PTR_Vec3_ctor_xyz_8c039f3c;
  uStack_9c = (*(code *)PTR_Vec3_ctor_xyz_8c039f3c)
                        (DAT_8c039f7c._4_4_,puVar2,uVar1,PTR_Vec3_ctor_xyz_8c039f3c);
  uVar1 = DAT_8c039f84;
  (*(code *)PTR_global_list_push_8c039f2c)(uStack_9c,PTR_Vec3_dtor_8c039f44,DAT_8c039f84,puVar4);
  uStack_a0 = (*(code *)PTR_Vec3_ctor_xyz_8c039f3c)(DAT_8c039f8c,DAT_8c039f8c,uVar1,puVar4);
  uVar1 = DAT_8c039f90;
  (*(code *)PTR_global_list_push_8c039f2c)(uStack_a0,PTR_Vec3_dtor_8c039f44,DAT_8c039f90,puVar4);
  uStack_a4 = (*(code *)PTR_Vec3_ctor_xyz_8c039f3c)(DAT_8c039f94,DAT_8c039f94,uVar1,puVar4);
  uVar1 = DAT_8c039f98;
  (*(code *)PTR_global_list_push_8c039f2c)(uStack_a4,PTR_Vec3_dtor_8c039f44,DAT_8c039f98,puVar4);
  uStack_a8 = (*(code *)PTR_Vec3_ctor_xyz_8c039f3c)(DAT_8c039f9c,DAT_8c039f9c,uVar1,puVar4);
  uVar1 = DAT_8c039fa0;
  (*(code *)PTR_global_list_push_8c039f2c)(uStack_a8,PTR_Vec3_dtor_8c039f44,DAT_8c039fa0,puVar4);
  uStack_ac = (*(code *)PTR_Vec3_ctor_xyz_8c039f3c)(DAT_8c039fa4,DAT_8c039fa4,uVar1,puVar4);
  uVar1 = DAT_8c039fa8;
  (*(code *)PTR_global_list_push_8c039f2c)(uStack_ac,PTR_Vec3_dtor_8c039f44,DAT_8c039fa8,puVar4);
  uStack_b0 = (*(code *)PTR_Vec3_ctor_xyz_8c039f3c)(DAT_8c039fac,DAT_8c039fac,uVar1,puVar4);
  uVar1 = DAT_8c039fb0;
  (*(code *)PTR_global_list_push_8c039f2c)(uStack_b0,PTR_Vec3_dtor_8c039f44,DAT_8c039fb0,puVar4);
  uStack_b4 = (*(code *)PTR_Vec3_ctor_xyz_8c039f3c)(DAT_8c039fb8,DAT_8c039fb8,uVar1,puVar4);
  (*(code *)PTR_global_list_push_8c039f2c)(uStack_b4,PTR_Vec3_dtor_8c039f44,DAT_8c039fbc,puVar4);
  uVar1 = DAT_8c039fd4;
  uStack_b8 = (*(code *)PTR_FUN_8c039fe4)(DAT_8c039fe0,DAT_8c039fdc,DAT_8c039fd8,DAT_8c039fd4);
  (*(code *)PTR_global_list_push_8c039f2c)
            (uStack_b8,PTR_Class_129938_m0_017084_8c039fec,DAT_8c039fe8,uVar1);
  uVar1 = DAT_8c03a004;
  uStack_bc = (*(code *)PTR_FUN_8c039fe4)(DAT_8c03a010,DAT_8c03a00c,DAT_8c03a008,DAT_8c03a004);
  (*(code *)PTR_global_list_push_8c039f2c)
            (uStack_bc,PTR_Class_129938_m0_017084_8c039fec,DAT_8c03a014,uVar1);
  uVar1 = DAT_8c03a02c;
  uStack_c0 = (*(code *)PTR_FUN_8c039fe4)(DAT_8c03a038,DAT_8c03a034,DAT_8c03a030,DAT_8c03a02c);
  (*(code *)PTR_global_list_push_8c039f2c)
            (uStack_c0,PTR_Class_129938_m0_017084_8c039fec,DAT_8c03a03c,uVar1);
  uVar1 = DAT_8c03a044;
  uStack_c4 = (*(code *)PTR_FUN_8c039fe4)(DAT_8c03a050,DAT_8c03a04c,DAT_8c03a048,DAT_8c03a044);
  (*(code *)PTR_global_list_push_8c039f2c)
            (uStack_c4,PTR_Class_129938_m0_017084_8c039fec,DAT_8c03a054,uVar1);
  uVar3 = DAT_8c039f8c;
  uStack_c8 = (*(code *)PTR_FUN_8c039fe4)(DAT_8c03a058,DAT_8c039f74,DAT_8c039f7c._4_4_,DAT_8c039f8c)
  ;
  puVar2 = PTR_Class_129938_m0_017084_8c039fec;
  uVar1 = DAT_8c03a05c;
  (*(code *)PTR_global_list_push_8c039f2c)
            (uStack_c8,PTR_Class_129938_m0_017084_8c039fec,DAT_8c03a05c,uVar3);
  uStack_cc = (*(code *)PTR_FUN_8c03a064)(DAT_8c03a060,puVar2,uVar1,uVar3);
  puVar2 = PTR_FUN_8c03a06c;
  uVar1 = DAT_8c03a068;
  (*(code *)PTR_global_list_push_8c039f2c)(uStack_cc,PTR_FUN_8c03a06c,DAT_8c03a068,uVar3);
  uVar3 = (*(code *)PTR_FUN_8c03a074)(DAT_8c03a070,puVar2,uVar1,uVar3);
  puVar2 = PTR_free_if_nonnull_wrap_03a454_8c03a07c;
  uVar1 = DAT_8c03a078;
  uStack_d0 = uVar3;
  (*(code *)PTR_global_list_push_8c039f2c)
            (uVar3,PTR_free_if_nonnull_wrap_03a454_8c03a07c,DAT_8c03a078,uVar3);
  uStack_d4 = (*(code *)PTR_FUN_8c03a084)(DAT_8c03a080,puVar2,uVar1,uVar3);
  puVar2 = PTR_free_if_nonnull_wrap_0247b0_8c03a08c;
  uVar1 = DAT_8c03a088;
  (*(code *)PTR_global_list_push_8c039f2c)
            (uStack_d4,PTR_free_if_nonnull_wrap_0247b0_8c03a08c,DAT_8c03a088,uVar3);
  puVar4 = PTR_FUN_8c03a094;
  uStack_d8 = (*(code *)PTR_FUN_8c03a094)(DAT_8c03a090,puVar2,uVar1,PTR_FUN_8c03a094);
  puVar2 = PTR_free_if_nonnull_wrap_03a3dc_8c03a09c;
  uVar1 = DAT_8c03a098;
  (*(code *)PTR_global_list_push_8c039f2c)
            (uStack_d8,PTR_free_if_nonnull_wrap_03a3dc_8c03a09c,DAT_8c03a098,puVar4);
  uStack_dc = (*(code *)PTR_Vec3_ctor_xyz_8c03a234)(DAT_8c03a230,puVar2,uVar1,puVar4);
  puVar2 = PTR_Vec3_dtor_8c03a23c;
  uVar1 = DAT_8c03a238;
  puVar4 = PTR_Vec3_dtor_8c03a23c;
  (*(code *)PTR_global_list_push_8c03a240)
            (uStack_dc,PTR_Vec3_dtor_8c03a23c,DAT_8c03a238,PTR_Vec3_dtor_8c03a23c);
  uStack_e0 = (*(code *)PTR_Vec3_ctor_xyz_8c03a234)(DAT_8c03a24c,puVar2,uVar1,puVar4);
  puVar2 = PTR_Vec3_dtor_8c03a23c;
  uVar1 = DAT_8c03a250;
  (*(code *)PTR_global_list_push_8c03a240)(uStack_e0,PTR_Vec3_dtor_8c03a23c,DAT_8c03a250,puVar4);
  uVar3 = DAT_8c03a254;
  uStack_e4 = (*(code *)PTR_Vec3_ctor_xyz_8c03a234)(DAT_8c03a254,puVar2,uVar1,DAT_8c03a254);
  puVar2 = PTR_Vec3_dtor_8c03a23c;
  uVar1 = DAT_8c03a258;
  (*(code *)PTR_global_list_push_8c03a240)(uStack_e4,PTR_Vec3_dtor_8c03a23c,DAT_8c03a258,uVar3);
  uStack_e8 = (*(code *)PTR_Vec3_ctor_xyz_8c03a234)(DAT_8c03a25c._4_4_,puVar2,uVar1,uVar3);
  puVar2 = PTR_Vec3_dtor_8c03a23c;
  uVar1 = DAT_8c03a264;
  uVar3 = DAT_8c03a264;
  (*(code *)PTR_global_list_push_8c03a240)
            (uStack_e8,PTR_Vec3_dtor_8c03a23c,DAT_8c03a264,DAT_8c03a264);
  uStack_ec = (*(code *)PTR_Vec3_ctor_xyz_8c03a234)(DAT_8c03a268,puVar2,uVar1,uVar3);
  puVar2 = PTR_Vec3_dtor_8c03a23c;
  uVar1 = DAT_8c03a26c;
  puVar4 = PTR_global_list_push_8c03a240;
  (*(code *)PTR_global_list_push_8c03a240)
            (uStack_ec,PTR_Vec3_dtor_8c03a23c,DAT_8c03a26c,PTR_global_list_push_8c03a240);
  auStack_fc[3] = (*(code *)PTR_Vec3_ctor_xyz_8c03a234)(DAT_8c03a270,puVar2,uVar1,puVar4);
  puVar2 = PTR_Vec3_dtor_8c03a23c;
  uVar1 = DAT_8c03a274;
  (*(code *)PTR_global_list_push_8c03a240)(auStack_fc[3],PTR_Vec3_dtor_8c03a23c,DAT_8c03a274,puVar4)
  ;
  uVar3 = (*(code *)PTR_Vec3_ctor_xyz_8c03a234)(DAT_8c03a278,puVar2,uVar1,puVar4);
  puVar2 = PTR_Vec3_dtor_8c03a23c;
  uVar1 = DAT_8c03a27c;
  auStack_fc[2] = uVar3;
  (*(code *)PTR_global_list_push_8c03a240)(uVar3,PTR_Vec3_dtor_8c03a23c,DAT_8c03a27c,uVar3);
  auStack_fc[1] = (*(code *)PTR_Vec3_ctor_xyz_8c03a234)(DAT_8c03a280,puVar2,uVar1,uVar3);
  (*(code *)PTR_global_list_push_8c03a240)
            (auStack_fc[1],PTR_Vec3_dtor_8c03a23c,DAT_8c03a284,auStack_fc[1]);
  uVar1 = DAT_8c03a254;
  auStack_fc[0] = (*(code *)PTR_FUN_8c03a28c)(DAT_8c03a288,DAT_8c03a230,DAT_8c03a24c,DAT_8c03a254);
  uVar1 = (*(code *)PTR_global_list_push_8c03a240)
                    (auStack_fc[0],PTR_Class_129938_m0_017084_8c03a294,DAT_8c03a290,uVar1);
  return uVar1;
}



/* FUN_8c03a298 @ 8c03a298 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a298(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c03a2b8)
                    (DAT_8c03a2b4,PTR_free_if_nonnull_wrap_03a3dc_8c03a2b0,4,0x65);
  return uVar1;
}



/* FUN_8c03a2bc @ 8c03a2bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a2bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c03a2dc)
                    (DAT_8c03a2d8,PTR_free_if_nonnull_wrap_0247b0_8c03a2d4,4,0x65);
  return uVar1;
}



/* FUN_8c03a2e0 @ 8c03a2e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a2e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c03a300)
                    (DAT_8c03a2fc,PTR_free_if_nonnull_wrap_03a3dc_8c03a2f8,4,0x65);
  return uVar1;
}



/* FUN_8c03a304 @ 8c03a304 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a304(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c03a324)
                    (DAT_8c03a320,PTR_free_if_nonnull_wrap_0247b0_8c03a31c,4,0x65);
  return uVar1;
}



/* FUN_8c03a328 @ 8c03a328 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a328(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c03a348)
                    (DAT_8c03a344,PTR_free_if_nonnull_wrap_03a3dc_8c03a340,4,0x17);
  return uVar1;
}



/* FUN_8c03a34c @ 8c03a34c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a34c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c03a36c)
                    (DAT_8c03a368,PTR_free_if_nonnull_wrap_0247b0_8c03a364,4,0x17);
  return uVar1;
}



/* FUN_8c03a370 @ 8c03a370 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a370(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c03a390)
                    (DAT_8c03a38c,PTR_free_if_nonnull_wrap_03a3dc_8c03a388,4,0x16);
  return uVar1;
}



/* FUN_8c03a394 @ 8c03a394 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a394(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c03a3b4)
                    (DAT_8c03a3b0,PTR_free_if_nonnull_wrap_0247b0_8c03a3ac,4,0x16);
  return uVar1;
}



/* FUN_8c03a3b8 @ 8c03a3b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a3b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c03a3d8)
                    (DAT_8c03a3d4,PTR_free_if_nonnull_wrap_03a3dc_8c03a3d0,4,0x18);
  return uVar1;
}



/* free_if_nonnull_wrap_03a3dc @ 8c03a3dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_03a3dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c03a408)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c03a40c @ 8c03a40c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a40c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c03a42c)
                    (DAT_8c03a428,PTR_free_if_nonnull_wrap_0247b0_8c03a424,4,0x18);
  return uVar1;
}



/* FUN_8c03a430 @ 8c03a430 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a430(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c03a450)
                    (DAT_8c03a44c,PTR_free_if_nonnull_wrap_03a454_8c03a448,0x10,2);
  return uVar1;
}



/* free_if_nonnull_wrap_03a454 @ 8c03a454 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_03a454(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c03a480)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c03a484 @ 8c03a484 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03a484(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c03a4a8)(DAT_8c03a4a4,PTR_FUN_8c03a4a0,DAT_8c03a49c,5);
  return uVar1;
}



/* FUN_8c03a4ac @ 8c03a4ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c03a4ac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a5;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (ar4 != 0) {
    (*(code *)PTR_FUN_8c03a574)(ar4 + DAT_8c03a570,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c03a57c)(ar4 + DAT_8c03a578,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_0247b0_8c03a584)(ar4 + DAT_8c03a580,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c03a58c)(ar4 + DAT_8c03a588,0xffffffff,ar6,ar7);
    (*(code *)PTR_vec_delete_array_8c03a594)
              (ar4 + DAT_8c03a590,PTR_free_if_nonnull_wrap_0153e4_8c03a58c,8,2);
    uVar2 = 2;
    uVar1 = 8;
    (*(code *)PTR_vec_delete_array_8c03a594)
              (ar4 + 0x78,PTR_free_if_nonnull_wrap_0153e4_8c03a58c,8,2);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c03a598)(ar4 + 0x74,0xffffffff,uVar1,uVar2);
    (*(code *)PTR_vec_delete_array_8c03a594)
              (ar4 + 0x70,PTR_free_if_nonnull_wrap_016bfc_8c03a598,4,1);
    (*(code *)PTR_vec_delete_array_8c03a594)
              (ar4 + 0x48,PTR_free_if_nonnull_wrap_0247e0_8c03a59c,0x14,2);
    uVar2 = 2;
    uVar1 = 0x14;
    a5 = PTR_free_if_nonnull_wrap_0247e0_8c03a59c;
    (*(code *)PTR_vec_delete_array_8c03a594)
              (ar4 + 0x20,PTR_free_if_nonnull_wrap_0247e0_8c03a59c,0x14,2);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c03a5a0)(ar4,a5,uVar1,uVar2);
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

/* WARNING: Switch with 1 destination removed at 0x8c03a734 */
/* WARNING: Switch with 1 destination removed at 0x8c03a742 */
/* WARNING: Unknown calling convention */

undefined4 Class_12a03c_m6_03a65c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int a5;
  undefined *a6;
  undefined4 *a7;
  uint extraout_fr1;
  char in_FPSCR_SZ;
  int iStack_c;
  
  a6 = PTR_DAT_8c03a768;
  iVar2 = -DAT_8c03a758;
  a7 = (undefined4 *)((int)&iStack_c + DAT_8c03a75c + iVar2);
  uVar4 = *(undefined4 *)(PTR_DAT_8c03a760 + 4);
  *a7 = *(undefined4 *)PTR_DAT_8c03a760;
  a7[1] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c03a760 + 0xc);
  a7[2] = *(undefined4 *)(PTR_DAT_8c03a760 + 8);
  a7[3] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c03a760 + 0x14);
  a7[4] = *(undefined4 *)(PTR_DAT_8c03a760 + 0x10);
  a7[5] = uVar4;
  puVar5 = (undefined4 *)((int)&iStack_c + DAT_8c03a764 + iVar2);
  uVar4 = *(undefined4 *)(PTR_DAT_8c03a768 + 4);
  *puVar5 = *(undefined4 *)PTR_DAT_8c03a768;
  puVar5[1] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c03a768 + 0xc);
  puVar5[2] = *(undefined4 *)(PTR_DAT_8c03a768 + 8);
  puVar5[3] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c03a768 + 0x14);
  puVar5[4] = *(undefined4 *)(PTR_DAT_8c03a768 + 0x10);
  puVar5[5] = uVar4;
  *(int *)(DAT_8c03a76c + ar4) = ar5;
  *(int *)(&stack0xfffffff8 + iVar2) = ar5;
  a5 = (*(int *)(&stack0xfffffff8 + iVar2) * 2 + *(int *)(&stack0xfffffff8 + iVar2)) * 8 +
       DAT_8c03a770;
  (*(code *)PTR_FUN_8c03a774)(ar4,a5,a6,a7);
  (*(code *)PTR_FUN_8c03a778)(ar4,a5,a6,a7);
  cVar1 = *DAT_8c03a77c;
  if (cVar1 == '\0') {
    *DAT_8c03a780 = 0;
    *DAT_8c03a77c = '\x01';
  }
  if (1 < *DAT_8c03a780) {
    *DAT_8c03a780 = 0;
  }
  *(int *)((int)&iStack_c + iVar2) = *DAT_8c03a780;
  (*(code *)PTR_Vec3_assign_8c03a78c)
            (ar4 + DAT_8c03a788,*(int *)((int)&iStack_c + iVar2) * 0x10 + DAT_8c03a784,DAT_8c03a784,
             (int)cVar1);
  *DAT_8c03a780 = *DAT_8c03a780 + 1;
  puVar3 = (ulonglong *)(ar4 + 0x7c);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)puVar3 = 0;
  }
  else {
    *puVar3 = (ulonglong)extraout_fr1;
  }
  if ((ar5 < 5) && (-1 < ar5)) {
                    /* WARNING: Could not recover jumptable at 0x8c03a752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&PTR_LAB_8c03a790)[ar5])();
    return uVar4;
  }
  return puVar3;
}



/* FUN_8c03c0f0 @ 8c03c0f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c03c0f0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return *(int *)(ar4 + 0x14) + ar5 * 4;
}



/* FUN_8c03c100 @ 8c03c100 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c03c100(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_fr1;
  undefined8 uVar3;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(DAT_8c03c25c + ar4) = 0;
  (*(code *)PTR_FUN_8c03c260)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c03c264 + ar4) = 2;
  *(undefined4 *)(DAT_8c03c268 + ar4) = 0;
  *(undefined4 *)(DAT_8c03c26c + ar4) = 0;
  *(undefined4 *)(DAT_8c03c270 + ar4) = 0;
  *(undefined4 *)(DAT_8c03c274 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44((undefined4)DAT_8c03c27c,in_fr1);
    *(undefined4 *)(ar4 + DAT_8c03c278) = (undefined4)DAT_8c03c27c;
  }
  else {
    uVar3 = CONCAT44(DAT_8c03c27c._4_4_,(undefined4)DAT_8c03c27c);
    *(undefined8 *)(ar4 + DAT_8c03c278) = uVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44(DAT_8c03c284,(int)uVar3);
    *(undefined4 *)(ar4 + DAT_8c03c27c._4_4_) = DAT_8c03c284;
  }
  else {
    uVar3 = CONCAT44(DAT_8c03c288,DAT_8c03c284);
    *(undefined8 *)(ar4 + DAT_8c03c27c._4_4_) = uVar3;
  }
  uVar1 = (undefined4)uVar3;
  *(undefined4 *)(DAT_8c03c288 + ar4) = 0;
  *(undefined4 *)(DAT_8c03c28c + ar4) = 0;
  *(undefined4 *)(DAT_8c03c290 + ar4) = 1;
  *(undefined4 *)(DAT_8c03c294 + ar4) = 0x14;
  *(undefined4 *)(ar4 + 0x68) = 0;
  (*(code *)PTR_FUN_8c03c2a0)(ar4 + DAT_8c03c29c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c03c2a0)(ar4 + DAT_8c03c2a4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c03c2a0)(ar4 + DAT_8c03c2a8,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c03c2ac + ar4) = 0;
  *(undefined4 *)(DAT_8c03c2b0 + ar4) = 0;
  *(undefined4 *)(DAT_8c03c2b4 + ar4) = 0;
  *(undefined4 *)(DAT_8c03c2b8 + ar4) = 0;
  *(undefined4 *)(DAT_8c03c2bc + ar4) = 0;
  *(undefined **)(DAT_8c03c2c0 + ar4) = PTR_PTR_8c03c2c4;
  *(undefined4 *)(DAT_8c03c2c8 + ar4) = 0x36;
  *(undefined4 *)(DAT_8c03c2cc + ar4) = 0;
  *(undefined4 *)(DAT_8c03c2d0 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c03c2d4) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c03c2d4) = CONCAT44(0x3f800000,uVar1);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c03c2d8) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c03c2d8) = CONCAT44(0x3f800000,uVar1);
  }
  *(undefined4 *)(DAT_8c03c2dc + ar4) = 3;
  *(undefined4 *)(DAT_8c03c2e0 + ar4) = 0;
  *(undefined4 *)(DAT_8c03c2e4 + ar4) = 0;
  *(undefined4 *)(DAT_8c03c2e8 + ar4) = 0;
  *(undefined4 *)(DAT_8c03c2ec + ar4) = 0;
  *(undefined4 *)(DAT_8c03c2f0 + ar4) = 0xffffffff;
  *(undefined4 *)(DAT_8c03c2f4 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c03c2f8) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c03c2f8) = CONCAT44(0x3f800000,uVar1);
  }
  uVar1 = (*(code *)PTR_rand_range_8c03c2fc)(ar4,0,100,ar7);
  *(undefined4 *)(DAT_8c03c300 + ar4) = uVar1;
  *(undefined4 *)(DAT_8c03c304 + ar4) = 0;
  *(undefined4 *)(DAT_8c03c308 + ar4) = 0;
  *(undefined4 *)(DAT_8c03c30c + ar4) = 0;
  iVar2 = DAT_8c03c310;
  *(undefined4 *)(DAT_8c03c310 + ar4) = 0;
  return iVar2;
}



/* FUN_8c03c314 @ 8c03c314 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c03c314(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(DAT_8c03c324 + ar4) = 1;
  iVar1 = DAT_8c03c328;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c03c328) = in_fr4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c03c328) = CONCAT44(in_fr4,in_fr5);
  }
  return iVar1;
}



/* Class_12a03c_m0_03c32c @ 8c03c32c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12a03c_m0_03c32c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c03c3d8;
    (*(code *)PTR_Vec3_dtor_8c03c3e0)((int)ar4 + DAT_8c03c3dc,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c03c3e0)((int)ar4 + DAT_8c03c3e4,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c03c3e0)((int)ar4 + DAT_8c03c3e8,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c03c3f0)((int)ar4 + DAT_8c03c3ec,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c03c3e0)((int)ar4 + DAT_8c03c3f4,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c03c3e0)((int)ar4 + DAT_8c03c3f8,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c03c3e0)((int)ar4 + DAT_8c03c3fc,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c03c3e0)((int)ar4 + DAT_8c03c400,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_Class_129cbc_m0_0312f4_8c03c404)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c03c408)(ar4,a5,ar6,ar7);
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

/* WARNING: Unknown calling convention */

undefined4 Class_12a03c_m1_03c43c(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *a5;
  undefined1 *a5_00;
  undefined4 unaff_r12;
  int a5_01;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar2;
  float fVar3;
  double in_dr0;
  float fVar6;
  double dVar4;
  ulonglong uVar5;
  double in_dr14;
  double dVar7;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar8;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
    puVar2 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar2 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar2 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar2 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar2 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar2 + -0x10) = in_PR;
  (*(code *)PTR_Vec3_ctor_zero_8c03c6b8)
            ((undefined1 *)((int)puVar2 + DAT_8c03c6b4 + -0xa8),ar5,ar6,ar7);
  a5 = ar5;
  (*(code *)PTR_Class_129cbc_m1_031598_8c03c6bc)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c03c6c0 + ar4) = ar5[6];
  if ((ar5[4] == 0) || (ar5[4] == 2)) {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c03c6c8,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = (double)CONCAT44(DAT_8c03c6cc,DAT_8c03c6c8);
    }
    (*(code *)PTR_FUN_8c03c6d0)(ar4,a5,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c03c6d8)(ar4,a5,ar6,ar7);
  uVar1 = (*(code *)PTR_pure_virtual_stub_8c03c6e0)(ar4,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar2 + -0x94) = uVar1;
  a5_01 = *(int *)((int)puVar2 + -0x94);
  if ((*(int *)(DAT_8c03c6e4 + ar4) == 1) && (a5_01 != 1)) {
    *(undefined4 *)(DAT_8c03c6e4 + ar4) = 0;
  }
  (*(code *)PTR_FUN_8c03c6e8)(*ar5,a5_01,ar6,ar7);
  (*(code *)PTR_FUN_8c03c6ec)(ar4,*(undefined4 *)(ar5[1] + 4),ar6,ar7);
  *(undefined1 **)((int)puVar2 + -0xac) = (undefined1 *)((int)puVar2 + -0x30);
  (*(code *)PTR_Vec3_scale_8c03c6f0)(ar4 + 0x14,ar4 + 0x28,ar6,ar7);
  *(undefined1 **)((int)puVar2 + -0xac) = (undefined1 *)((int)puVar2 + -0x40);
  (*(code *)PTR_Vec3_add_8c03c6f8)((undefined1 *)((int)puVar2 + -0x30),ar4 + DAT_8c03c6f4,ar6,ar7);
  *(undefined1 **)((int)puVar2 + -0xac) = (undefined1 *)((int)puVar2 + -0x50);
  (*(code *)PTR_Vec3_add_8c03c6f8)((undefined1 *)((int)puVar2 + -0x40),ar4 + 0x6c,ar6,ar7);
  *(undefined1 **)((int)puVar2 + -0xac) = (undefined1 *)((int)puVar2 + -0x60);
  (*(code *)PTR_Vec3_add_8c03c6f8)((undefined1 *)((int)puVar2 + -0x50),ar4 + DAT_8c03c6fc,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c03c700)(ar4 + 4,(undefined1 *)((int)puVar2 + -0x60),ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c03c704)((undefined1 *)((int)puVar2 + -0x60),0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c03c704)((undefined1 *)((int)puVar2 + -0x50),0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c03c704)((undefined1 *)((int)puVar2 + -0x40),0xffffffff,ar6,ar7);
  a5_00 = (undefined1 *)0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c03c704)((undefined1 *)((int)puVar2 + -0x30),0xffffffff,ar6,ar7);
  (*(code *)PTR_vec3_clear_8c03c708)(ar4 + DAT_8c03c6fc,a5_00,ar6,ar7);
  if ((((ar5[4] == 0) || (ar5[4] == 2)) && (*(int *)(DAT_8c03c70c + ar4) != 0x18)) &&
     ((*(int *)(DAT_8c03c70c + ar4) != 2 && (*(int *)(DAT_8c03c710 + ar4) != 1)))) {
    (**(code **)(DAT_8c03c714 + *(int *)ar5[6]))((int *)ar5[6],a5_00,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar2 + -0x98) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)puVar2 + -0x98));
      dVar7 = (double)CONCAT44(DAT_8c03c6c4,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)((int)puVar2 + -0x98) = in_dr0;
      in_xd14 = *(undefined8 *)((int)puVar2 + -0x98);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar7 = (double)CONCAT44(DAT_8c03c6c8,DAT_8c03c6c4);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) -
                                 SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 - dVar7 * dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),*(undefined4 *)(*(int *)ar5[1] + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)ar5[1] + 4);
      in_dr0 = *(double *)(ar4 + 8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
      fVar3 = SUB84(in_dr0,0) + fVar6;
      in_dr0 = (double)CONCAT44(fVar6,fVar3);
      bVar8 = SUB84(in_dr14,0) < fVar3;
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
      fVar3 = SUB84(in_dr0,0);
      bVar8 = in_dr14 < in_dr0;
    }
    if (bVar8) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 4),fVar3);
      }
      else {
        in_dr0 = *(double *)(*(int *)ar5[1] + 4);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) - (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 - in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 8) = SUB84(in_dr14,0);
      }
      else {
        *(undefined8 *)(ar4 + 8) = in_xd14;
      }
    }
  }
  uVar1 = (*(code *)PTR_get_field_24_026024_8c03c718)(ar5[6],a5_00,ar6,ar7);
  *(undefined4 *)((int)puVar2 + -0x9c) = uVar1;
  if (*(int *)((int)puVar2 + -0x9c) == 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 8),SUB84(in_dr14,0));
      dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xc),SUB84(in_dr0,0));
    }
    else {
      dVar7 = *(double *)(*(int *)ar5[1] + 8);
      dVar4 = *(double *)(ar4 + 0xc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + (float)((ulonglong)dVar4 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c03c71c,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar4 = (double)CONCAT44(DAT_8c03c720,DAT_8c03c71c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      in_dr14 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + fVar3,SUB84(dVar7,0));
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
      in_dr14 = dVar7 + dVar4 * dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c03c720,fVar3);
    }
    else {
      in_dr0 = (double)CONCAT44(DAT_8c03c724,DAT_8c03c720);
    }
    fVar3 = (float)((ulonglong)in_dr14 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar8 = (float)((ulonglong)in_dr0 >> 0x20) < fVar3;
    }
    else {
      bVar8 = in_dr0 < in_dr14;
    }
    if (bVar8) {
      *(int *)((int)puVar2 + -0xa8) = ar4;
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c03c720,*(undefined4 *)(*(int *)((int)puVar2 + -0xa8) + 0xc))
        ;
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)puVar2 + -0xa8) + 0xc);
        in_dr0 = (double)CONCAT44(DAT_8c03c724,DAT_8c03c720);
      }
      fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar3 = fVar3 - fVar6;
        in_dr14 = (double)CONCAT44(fVar3,SUB84(in_dr14,0));
        in_dr0 = (double)CONCAT44(fVar6,SUB84(in_dr0,0) - fVar3);
      }
      else {
        in_dr14 = in_dr14 - in_dr0;
        in_dr0 = in_dr0 - in_dr14;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar2 + -0xa8) + 0xc) = SUB84(in_dr0,0);
      }
      else {
        *(undefined8 *)(*(int *)((int)puVar2 + -0xa8) + 0xc) = in_xd0;
      }
    }
  }
  if (*(int *)(DAT_8c03c724 + ar4) < 3) {
    if (((*(int *)(DAT_8c03c70c + ar4) != 0x2e) && (*(int *)(DAT_8c03c70c + ar4) != 0x18)) &&
       (*(int *)(DAT_8c03c70c + ar4) != 2)) {
      *(undefined1 **)((int)puVar2 + -0xac) = (undefined1 *)((int)puVar2 + -0x70);
      (*(code *)PTR_Vec3_add_8c03c6f8)(*(undefined4 *)ar5[1],ar4 + 4,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c03c700)
                ((undefined1 *)((int)puVar2 + DAT_8c03c6b4 + -0xa8),
                 (undefined1 *)((int)puVar2 + -0x70),ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c03c704)((undefined1 *)((int)puVar2 + -0x70),0xffffffff,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(PTR_DAT_8c03c728 + 8),
                         *(undefined4 *)((int)puVar2 + DAT_8c03c6f4 + -0xa8));
      }
      else {
        in_xd0 = *(undefined8 *)((int)puVar2 + DAT_8c03c6f4 + -0xa8);
        uVar5 = *(ulonglong *)(PTR_DAT_8c03c728 + 8);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar5 < (float)(uVar5 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          uVar5 = (ulonglong)*(uint *)(PTR_DAT_8c03c808 + 8);
        }
        else {
          in_xd0 = *(undefined8 *)(PTR_DAT_8c03c808 + 8);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 8),(int)uVar5);
        }
        else {
          dVar7 = *(double *)(*(int *)ar5[1] + 8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar7 - dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0xc) = fVar3;
        }
        else {
          *(undefined8 *)(ar4 + 0xc) = in_xd0;
        }
      }
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c03c808,
                                 *(undefined4 *)((int)puVar2 + DAT_8c03c80c + -0xa8));
      }
      else {
        in_xd0 = *(undefined8 *)((int)puVar2 + DAT_8c03c80c + -0xa8);
        dVar7 = *(double *)PTR_DAT_8c03c808;
      }
      if (in_FPSCR_PR == '\0' && SUB84(dVar7,0) < (float)((ulonglong)dVar7 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)(ulonglong)*(uint *)PTR_DAT_8c03c808;
        }
        else {
          in_xd0 = *(undefined8 *)PTR_DAT_8c03c808;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)*(double **)ar5[1],SUB84(dVar7,0));
        }
        else {
          dVar7 = **(double **)ar5[1];
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = (float)((ulonglong)dVar7 >> 0x20);
          dVar7 = (double)CONCAT44(fVar3,SUB84(dVar7,0) - fVar3);
        }
        else {
          dVar7 = dVar7 - dVar7;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + 4) = SUB84(dVar7,0);
        }
        else {
          *(undefined8 *)(ar4 + 4) = in_xd0;
        }
      }
      *(undefined1 **)((int)puVar2 + -0xac) = (undefined1 *)((int)puVar2 + -0x80);
      (*(code *)PTR_Vec3_add_8c03c810)(*(undefined4 *)ar5[1],ar4 + 4,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c03c814)
                ((undefined1 *)((int)puVar2 + DAT_8c03c80c + -0xa8),
                 (undefined1 *)((int)puVar2 + -0x80),ar6,ar7);
      a5_00 = (undefined1 *)0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c03c818)((undefined1 *)((int)puVar2 + -0x80),0xffffffff,ar6,ar7);
      (*(code *)PTR_FUN_8c03c820)(ar4,a5_00,ar6,ar7);
      if ((*(int *)(DAT_8c03c824 + ar4) != 0x18) && (*(int *)(DAT_8c03c824 + ar4) != 2)) {
        a5_00 = (undefined1 *)((int)puVar2 + DAT_8c03c80c + -0xa8);
        (**(code **)(DAT_8c03c828 + *(int *)ar5[6]))((int *)ar5[6],a5_00,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar2 + -0xa0) = (int)((ulonglong)dVar7 >> 0x20);
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x48));
          dVar7 = (double)CONCAT44(DAT_8c03c82c,SUB84(dVar7,0));
        }
        else {
          *(double *)((int)puVar2 + -0xa0) = dVar7;
          in_xd14 = *(undefined8 *)(ar4 + 0x48);
          dVar7 = (double)CONCAT44(DAT_8c03c830,DAT_8c03c82c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar4 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) * (float)((ulonglong)dVar7 >> 0x20));
        }
        else {
          dVar4 = in_dr14 * dVar7;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0xa0),SUB84(dVar7,0));
        }
        else {
          dVar7 = *(double *)((int)puVar2 + -0xa0);
        }
        if (in_FPSCR_PR == '\0') {
          dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),
                                   SUB84(dVar4,0) + (float)((ulonglong)dVar7 >> 0x20));
        }
        else {
          dVar4 = dVar4 + dVar7;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + DAT_8c03c830 + -0xa8),
                                   SUB84(dVar7,0));
        }
        else {
          dVar7 = *(double *)((int)puVar2 + DAT_8c03c830 + -0xa8);
        }
        if (in_FPSCR_PR == '\0') {
          bVar8 = (float)((ulonglong)dVar7 >> 0x20) < SUB84(dVar4,0);
        }
        else {
          bVar8 = dVar7 < dVar4;
        }
        if (bVar8) {
          if (in_FPSCR_SZ == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 4),SUB84(dVar7,0));
          }
          else {
            dVar7 = *(double *)(*(int *)ar5[1] + 4);
          }
          if (in_FPSCR_PR == '\0') {
            fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar3 = SUB84(dVar4 - dVar7,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + 8) = fVar3;
          }
          else {
            *(undefined8 *)(ar4 + 8) = in_xd14;
          }
          (*(code *)PTR_FUN_8c03c834)(ar4,a5_00,ar6,ar7);
        }
      }
    }
  }
  else if ((ar5[4] == 0) || (ar5[4] == 2)) {
    *(undefined1 **)((int)puVar2 + -0xac) = (undefined1 *)((int)puVar2 + -0x90);
    (*(code *)PTR_Vec3_add_8c03c910)(*(undefined4 *)ar5[1],ar4 + 4,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c03c918)
              ((undefined1 *)((int)puVar2 + DAT_8c03c914 + -0xa8),
               (undefined1 *)((int)puVar2 + -0x90),ar6,ar7);
    a5_00 = (undefined1 *)0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c03c91c)((undefined1 *)((int)puVar2 + -0x90),0xffffffff,ar6,ar7);
    if ((*(int *)(DAT_8c03c920 + ar4) != 2) && (*(int *)(DAT_8c03c924 + ar4) != 1)) {
      (*(code *)PTR_FUN_8c03c92c)(ar4,a5_00,ar6,ar7);
      a5_00 = (undefined1 *)((int)puVar2 + DAT_8c03c914 + -0xa8);
      (**(code **)(DAT_8c03c930 + *(int *)ar5[6]))((int *)ar5[6],a5_00,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0xa4) = (int)((ulonglong)in_dr0 >> 0x20);
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x48));
        dVar7 = (double)CONCAT44(DAT_8c03c934,SUB84(in_dr0,0));
      }
      else {
        *(double *)((int)puVar2 + -0xa4) = in_dr0;
        in_xd14 = *(undefined8 *)(ar4 + 0x48);
        dVar7 = (double)CONCAT44(DAT_8c03c938,DAT_8c03c934);
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) * (float)((ulonglong)dVar7 >> 0x20));
      }
      else {
        dVar4 = in_dr14 * dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0xa4),SUB84(dVar7,0));
      }
      else {
        dVar7 = *(double *)((int)puVar2 + -0xa4);
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),
                                 SUB84(dVar4,0) + (float)((ulonglong)dVar7 >> 0x20));
      }
      else {
        dVar4 = dVar4 + dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + DAT_8c03c938 + -0xa8),SUB84(dVar7,0))
        ;
      }
      else {
        dVar7 = *(double *)((int)puVar2 + DAT_8c03c938 + -0xa8);
      }
      if (in_FPSCR_PR == '\0') {
        bVar8 = (float)((ulonglong)dVar7 >> 0x20) < SUB84(dVar4,0);
      }
      else {
        bVar8 = dVar7 < dVar4;
      }
      if (bVar8) {
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 4),SUB84(dVar7,0));
        }
        else {
          dVar7 = *(double *)(*(int *)ar5[1] + 4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 - dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 8) = fVar3;
        }
        else {
          *(undefined8 *)(ar4 + 8) = in_xd14;
        }
        (*(code *)PTR_FUN_8c03c93c)(ar4,a5_00,ar6,ar7);
      }
    }
  }
  (*(code *)PTR_vec3_clear_8c03c944)(ar4 + DAT_8c03c940,a5_00,ar6,ar7);
  *(undefined4 *)(DAT_8c03c948 + ar4) = 0;
  uVar1 = (*(code *)PTR_Vec3_dtor_8c03c91c)
                    ((undefined1 *)((int)puVar2 + DAT_8c03c914 + -0xa8),0xffffffff,ar6,ar7);
  return uVar1;
}



/* FUN_8c03c94c @ 8c03c94c callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c03cb66 */
/* WARNING: Switch with 1 destination removed at 0x8c03cc00 */
/* WARNING: Switch with 1 destination removed at 0x8c03cc0e */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c03c94c(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined *a7;
  int iVar5;
  undefined4 in_fr1;
  uint uVar6;
  double dVar7;
  ulonglong uVar8;
  undefined4 in_fr5;
  double dVar9;
  undefined4 in_fr7;
  double dVar10;
  bool bVar11;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int aiStack_28 [3];
  uint uStack_1c;
  
  iVar1 = -DAT_8c03cb70;
  *(undefined4 *)((int)&uStack_1c + DAT_8c03cb74 + iVar1) = 1;
  *(int *)((int)aiStack_28 + iVar1 + 8) = (int)&uStack_1c + DAT_8c03cb78 + iVar1;
  (*(code *)PTR_FUN_8c03cb7c)(*ar5,PTR_FUN_8c03cb7c,1,ar7);
  puVar3 = PTR_Vec3_ctor_copy_8c03cb84;
  (*(code *)PTR_Vec3_ctor_copy_8c03cb84)
            ((int)&uStack_1c + DAT_8c03cb80 + iVar1,(int)&uStack_1c + DAT_8c03cb78 + iVar1,
             PTR_Vec3_ctor_copy_8c03cb84,ar7);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c03cb88)((int)&uStack_1c + DAT_8c03cb78 + iVar1,0xffffffff,puVar3,ar7);
  if (in_FPSCR_SZ != '\0') {
    in_fr7 = (undefined4)*(undefined8 *)(ar5[7] + 8);
  }
  if (in_FPSCR_SZ == '\0') {
    in_fr5 = *(undefined4 *)(ar5[7] + 0xc);
  }
  if (in_FPSCR_SZ != '\0') {
    in_fr5 = (undefined4)*(undefined8 *)ar5[7];
  }
  a7 = PTR_FUN_8c03cb90;
  (*(code *)PTR_FUN_8c03cb90)((int)&uStack_1c + DAT_8c03cb8c + iVar1,uVar2,puVar3,PTR_FUN_8c03cb90);
  iVar4 = (int)&uStack_1c + DAT_8c03cb94 + iVar1;
  (*(code *)PTR_Vec3_ctor_zero_8c03cb98)(iVar4,uVar2,iVar4,a7);
  (*(code *)PTR_FUN_8c03cba0)((int)&uStack_1c + DAT_8c03cb9c + iVar1,uVar2,iVar4,a7);
  puVar3 = PTR_Vec3_set_zero_8c03cba8;
  (*(code *)PTR_Vec3_set_zero_8c03cba8)
            ((int)&uStack_1c + DAT_8c03cba4 + iVar1,uVar2,iVar4,PTR_Vec3_set_zero_8c03cba8);
  iVar5 = ar5[4];
  (*(code *)PTR_Vec3_ctor_zero_8c03cb98)((int)&uStack_1c + DAT_8c03cbac + iVar1,uVar2,iVar4,puVar3);
  *(undefined4 *)(DAT_8c03cbb0 + ar4) = 0;
  *(undefined4 *)(DAT_8c03cbb4 + ar4) = 1;
  *(undefined4 *)(DAT_8c03cbb8 + ar4) = 0;
  *(undefined4 *)(DAT_8c03cbbc + ar4) = 0;
  if (iVar5 == 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c03cbc0 + 8),in_fr1);
      dVar9 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c03cbc4 + 8),in_fr5);
    }
    else {
      dVar7 = *(double *)(PTR_DAT_8c03cbc0 + 8);
      dVar9 = *(double *)(PTR_DAT_8c03cbc4 + 8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + (float)((ulonglong)dVar9 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + dVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)&uStack_1c + DAT_8c03cbc8 + iVar1) = (int)((ulonglong)dVar7 >> 0x20);
      dVar9 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c03cbc0,SUB84(dVar9,0));
      dVar10 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c03cbc4,in_fr7);
    }
    else {
      *(double *)((int)&uStack_1c + DAT_8c03cbc8 + iVar1) = dVar7;
      dVar9 = *(double *)PTR_DAT_8c03cbc0;
      dVar10 = *(double *)PTR_DAT_8c03cbc4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) +
                               (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 + dVar10;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)&uStack_1c + DAT_8c03cb9c + iVar1) = (int)((ulonglong)dVar9 >> 0x20);
      dVar9 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c03cbc0 + 4),SUB84(dVar9,0));
      dVar7 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c03cbc4 + 4),SUB84(dVar7,0));
    }
    else {
      *(double *)((int)&uStack_1c + DAT_8c03cb9c + iVar1) = dVar9;
      dVar9 = *(double *)(PTR_DAT_8c03cbc0 + 4);
      dVar7 = *(double *)(PTR_DAT_8c03cbc4 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) + (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 + dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)&uStack_1c + DAT_8c03cbcc + iVar1) = (int)((ulonglong)dVar9 >> 0x20);
    }
    else {
      *(double *)((int)&uStack_1c + DAT_8c03cbcc + iVar1) = dVar9;
    }
    (*(code *)PTR_Vec3_assign_8c03cbd0)
              ((int)&uStack_1c + DAT_8c03cb94 + iVar1,*(undefined4 *)ar5[1],(undefined4 *)ar5[1],
               puVar3);
    uVar2 = SUB84(dVar9,0);
    iVar5 = 0;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)&uStack_1c + DAT_8c03cb94 + iVar1),
                               SUB84(dVar7,0));
      dVar9 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c03cbc4,SUB84(dVar10,0));
    }
    else {
      dVar7 = *(double *)((int)&uStack_1c + DAT_8c03cb94 + iVar1);
      dVar9 = *(double *)PTR_DAT_8c03cbc4;
    }
    if (in_FPSCR_PR == '\0') {
      bVar11 = (float)((ulonglong)dVar7 >> 0x20) < (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      bVar11 = dVar7 < dVar9;
    }
    if (bVar11) {
      puVar3 = PTR_DAT_8c03cbc4;
      if (in_FPSCR_SZ == '\0') {
        uVar2 = *(undefined4 *)PTR_DAT_8c03cbc4;
        *(undefined4 *)((int)&uStack_1c + DAT_8c03cb94 + iVar1) = uVar2;
      }
      else {
        *(undefined8 *)((int)&uStack_1c + DAT_8c03cb94 + iVar1) = *(undefined8 *)PTR_DAT_8c03cbc4;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)((int)&uStack_1c + DAT_8c03cbd4 + iVar1),uVar2);
      dVar7 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c03cbc4 + 8),SUB84(dVar7,0));
    }
    else {
      dVar9 = *(double *)((int)&uStack_1c + DAT_8c03cbd4 + iVar1);
      dVar7 = *(double *)(PTR_DAT_8c03cbc4 + 8);
    }
    if (in_FPSCR_PR == '\0') {
      bVar11 = (float)((ulonglong)dVar9 >> 0x20) < (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      bVar11 = dVar9 < dVar7;
    }
    if (bVar11) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)&uStack_1c + DAT_8c03cbd4 + iVar1) =
             *(undefined4 *)(PTR_DAT_8c03cbc4 + 8);
      }
      else {
        *(undefined8 *)((int)&uStack_1c + DAT_8c03cbd4 + iVar1) =
             *(undefined8 *)(PTR_DAT_8c03cbc4 + 8);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar8 = CONCAT44(*(undefined4 *)((int)&uStack_1c + DAT_8c03cb9c + iVar1),
                       *(undefined4 *)((int)&uStack_1c + DAT_8c03cb94 + iVar1));
    }
    else {
      uVar8 = *(ulonglong *)((int)&uStack_1c + DAT_8c03cb9c + iVar1);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = *(uint *)((int)&uStack_1c + DAT_8c03cb9c + iVar1);
        uVar8 = (ulonglong)uVar6;
        *(uint *)((int)&uStack_1c + DAT_8c03cb94 + iVar1) = uVar6;
      }
      else {
        *(undefined8 *)((int)&uStack_1c + DAT_8c03cb94 + iVar1) =
             *(undefined8 *)((int)&uStack_1c + DAT_8c03cb9c + iVar1);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)&uStack_1c + DAT_8c03cbd4 + iVar1),
                               SUB84(dVar9,0));
      dVar9 = (double)CONCAT44(*(undefined4 *)((int)&uStack_1c + DAT_8c03cbc8 + iVar1),(int)uVar8);
    }
    else {
      dVar7 = *(double *)((int)&uStack_1c + DAT_8c03cbd4 + iVar1);
      dVar9 = *(double *)((int)&uStack_1c + DAT_8c03cbc8 + iVar1);
    }
    if (in_FPSCR_PR == '\0') {
      bVar11 = (float)((ulonglong)dVar7 >> 0x20) < (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      bVar11 = dVar7 < dVar9;
    }
    if (bVar11) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)&uStack_1c + DAT_8c03cbd4 + iVar1) =
             *(undefined4 *)((int)&uStack_1c + DAT_8c03cbc8 + iVar1);
      }
      else {
        *(undefined8 *)((int)&uStack_1c + DAT_8c03cbd4 + iVar1) =
             *(undefined8 *)((int)&uStack_1c + DAT_8c03cbc8 + iVar1);
      }
    }
  }
  iVar4 = *(int *)(DAT_8c03cbd8 + ar4);
  if (((iVar4 == 0) && (*(int *)(DAT_8c03cbdc + ar4) != 0x2e)) &&
     ((iVar5 == 3 || (*(int *)(ar4 + 0x68) != 0)))) {
    *(undefined4 *)((int)aiStack_28 + iVar1 + 8) = 0;
    *(undefined4 *)((int)aiStack_28 + iVar1 + 4) = ar5[6];
    *(undefined4 *)((int)aiStack_28 + iVar1) = ar5[3];
    uVar2 = ar5[1];
    (*(code *)PTR_FUN_8c03cbe0)(ar4,*(undefined4 *)ar5[1],uVar2,iVar5);
    *(undefined4 *)((int)&uStack_1c + DAT_8c03cbe4 + iVar1) = 1;
    puVar3 = PTR_Vec3_dtor_8c03cb88;
    (*(code *)PTR_Vec3_dtor_8c03cb88)
              ((int)&uStack_1c + DAT_8c03cbac + iVar1,0xffffffff,uVar2,PTR_Vec3_dtor_8c03cb88);
    (*(code *)PTR_object_dtor_delete_8c03cbe8)
              ((int)&uStack_1c + DAT_8c03cba4 + iVar1,0xffffffff,uVar2,puVar3);
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c03cbec)
              ((int)&uStack_1c + DAT_8c03cb9c + iVar1,0xffffffff,uVar2,puVar3);
    (*(code *)PTR_Vec3_dtor_8c03cb88)
              ((int)&uStack_1c + DAT_8c03cb94 + iVar1,0xffffffff,uVar2,puVar3);
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c03cbec)
              ((int)&uStack_1c + DAT_8c03cb8c + iVar1,0xffffffff,uVar2,puVar3);
    (*(code *)PTR_Vec3_dtor_8c03cb88)
              ((int)&uStack_1c + DAT_8c03cb80 + iVar1,0xffffffff,uVar2,puVar3);
    uVar2 = *(undefined4 *)((int)&uStack_1c + DAT_8c03cbe4 + iVar1);
  }
  else {
    iVar5 = *(int *)(DAT_8c03cc24 + ar4);
    if ((iVar5 < 0x2f) && (-1 < iVar5)) {
                    /* WARNING: Could not recover jumptable at 0x8c03cc1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&PTR_LAB_8c03cc28)[iVar5])();
      return uVar2;
    }
    (*(code *)PTR_FUN_8c03f36c)(ar4,*(undefined4 *)(ar5[1] + 4),iVar4,puVar3);
    *(undefined4 *)((int)&uStack_1c + DAT_8c03f370 + iVar1) = 2;
    (*(code *)PTR_Vec3_dtor_8c03f378)
              ((int)&uStack_1c + DAT_8c03f374 + iVar1,0xffffffff,iVar4,puVar3);
    (*(code *)PTR_object_dtor_delete_8c03f380)
              ((int)&uStack_1c + DAT_8c03f37c + iVar1,0xffffffff,iVar4,puVar3);
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c03f388)
              ((int)&uStack_1c + DAT_8c03f384 + iVar1,0xffffffff,iVar4,puVar3);
    (*(code *)PTR_Vec3_dtor_8c03f378)
              ((int)&uStack_1c + DAT_8c03f38c + iVar1,0xffffffff,iVar4,puVar3);
    uVar2 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c03f388)
              ((int)&uStack_1c + DAT_8c03f390 + iVar1,0xffffffff,0xffffffff,puVar3);
    (*(code *)PTR_Vec3_dtor_8c03f378)
              ((int)&uStack_1c + DAT_8c03f394 + iVar1,0xffffffff,uVar2,puVar3);
    uVar2 = *(undefined4 *)((int)&uStack_1c + DAT_8c03f370 + iVar1);
  }
  return uVar2;
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

/* WARNING: Unknown calling convention */

int FUN_8c03f3f8(int ar4,undefined8 *ar5,undefined8 *ar6,undefined8 *ar7)

{
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = *(undefined4 *)(ar4 + 0x5c);
    *(undefined4 *)ar6 = *(undefined4 *)(ar4 + 0x60);
    *(undefined4 *)ar7 = *(undefined4 *)(ar4 + 100);
  }
  else {
    *ar5 = *(undefined8 *)(ar4 + 0x5c);
    *ar6 = *(undefined8 *)(ar4 + 0x60);
    *ar7 = *(undefined8 *)(ar4 + 100);
  }
  return ar4 + 0x60;
}



/* FUN_8c03f414 @ 8c03f414 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c03f414(int ar4,undefined8 *ar5,undefined8 *ar6,undefined8 *ar7)

{
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = *(undefined4 *)(ar4 + 0x50);
    *(undefined4 *)ar6 = *(undefined4 *)(ar4 + 0x54);
    *(undefined4 *)ar7 = *(undefined4 *)(ar4 + 0x58);
  }
  else {
    *ar5 = *(undefined8 *)(ar4 + 0x50);
    *ar6 = *(undefined8 *)(ar4 + 0x54);
    *ar7 = *(undefined8 *)(ar4 + 0x58);
  }
  return ar4 + 0x54;
}



/* FUN_8c03f430 @ 8c03f430 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c03f430(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c03f45c)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0xc) = *(undefined4 *)(ar5 + 0xc);
  }
  else {
    *(undefined8 *)(ar4 + 0xc) = *(undefined8 *)(ar5 + 0xc);
  }
  return ar4;
}



/* FUN_8c03f460 @ 8c03f460 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c03f460(undefined8 *ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

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



/* FUN_8c03f480 @ 8c03f480 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c03f480(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c03f4a0)(in_stack_00000000,ar4 + 0x28,ar6,ar7);
  return uVar1;
}



/* FUN_8c03f4a4 @ 8c03f4a4 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c03f6a8 */
/* WARNING: Switch with 1 destination removed at 0x8c03f87c */
/* WARNING: Switch with 1 destination removed at 0x8c03f980 */
/* WARNING: Switch with 1 destination removed at 0x8c03f98e */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c03f4a4(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 a5;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined4 *a7;
  undefined4 unaff_r8;
  int a7_00;
  undefined4 unaff_r9;
  int iVar6;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar7;
  undefined4 in_fr1;
  double dVar8;
  double dVar9;
  undefined8 in_dr14;
  undefined8 in_xd4;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar7 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar7 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar7 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar7 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar7 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar7 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar7 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar7 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar7 + -0x1c) = unaff_r8;
  *(undefined4 *)((int)puVar7 + -0x20) = in_PR;
  iVar1 = -DAT_8c03f6b0;
  puVar4 = (undefined1 *)((int)puVar7 + DAT_8c03f6b4 + iVar1 + -0x20);
  *(undefined1 **)((int)puVar7 + iVar1 + -0x24) = puVar4;
  (*(code *)PTR_FUN_8c03f6b8)(*ar5,1,puVar4,ar7);
  puVar3 = PTR_Vec3_ctor_copy_8c03f6c0;
  (*(code *)PTR_Vec3_ctor_copy_8c03f6c0)
            ((undefined1 *)((int)puVar7 + DAT_8c03f6bc + iVar1 + -0x20),
             (undefined1 *)((int)puVar7 + DAT_8c03f6b4 + iVar1 + -0x20),puVar4,
             PTR_Vec3_ctor_copy_8c03f6c0);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c03f6c4)
            ((undefined1 *)((int)puVar7 + DAT_8c03f6b4 + iVar1 + -0x20),0xffffffff,puVar4,puVar3);
  (*(code *)PTR_Vec3_ctor_zero_8c03f6cc)
            ((undefined1 *)((int)puVar7 + DAT_8c03f6c8 + iVar1 + -0x20),uVar2,puVar4,puVar3);
  a7_00 = ar5[4];
  (*(code *)PTR_Vec3_ctor_zero_8c03f6cc)
            ((undefined1 *)((int)puVar7 + DAT_8c03f6d0 + iVar1 + -0x20),uVar2,puVar4,puVar3);
  puVar4 = (undefined1 *)((int)puVar7 + DAT_8c03f6d4 + iVar1 + -0x20);
  puVar3 = PTR_Vec3_ctor_zero_8c03f6cc;
  (*(code *)PTR_Vec3_ctor_zero_8c03f6cc)(puVar4,uVar2,PTR_Vec3_ctor_zero_8c03f6cc,puVar4);
  *(undefined4 *)((int)puVar7 + DAT_8c03f6d8 + iVar1 + -0x20) = 0;
  if (in_FPSCR_SZ != '\0') {
    in_xd4 = *(undefined8 *)(ar5[7] + 4);
  }
  (*(code *)PTR_FUN_8c03f6e4)
            ((undefined1 *)((int)puVar7 + DAT_8c03f6e0 + iVar1 + -0x20),uVar2,puVar3,puVar4);
  puVar4 = (undefined1 *)((int)puVar7 + DAT_8c03f6e8 + iVar1 + -0x20);
  puVar5 = PTR_Vec3_ctor_zero_8c03f6cc;
  (*(code *)PTR_Vec3_ctor_zero_8c03f6cc)(puVar4,uVar2,PTR_Vec3_ctor_zero_8c03f6cc,puVar4);
  (*(code *)PTR_Vec3_ctor_zero_8c03f6cc)
            ((undefined1 *)((int)puVar7 + DAT_8c03f6ec + iVar1 + -0x20),uVar2,puVar5,puVar4);
  puVar3 = PTR_DAT_8c03f6f0;
  (*(code *)PTR_FUN_8c03f6f8)
            ((undefined1 *)((int)puVar7 + DAT_8c03f6f4 + iVar1 + -0x20),PTR_DAT_8c03f6f0,puVar5,
             puVar4);
  (*(code *)PTR_Vec3_ctor_zero_8c03f6cc)
            ((undefined1 *)((int)puVar7 + DAT_8c03f6fc + iVar1 + -0x20),puVar3,
             PTR_Vec3_ctor_zero_8c03f6cc,(undefined1 *)((int)puVar7 + DAT_8c03f6fc + iVar1 + -0x20))
  ;
  if (((((*(int *)(DAT_8c03f700 + ar4) < 1) || (*(int *)(DAT_8c03f704 + ar4) == 0x29)) ||
       (*(int *)(DAT_8c03f704 + ar4) == 0x23)) ||
      ((*(int *)(DAT_8c03f704 + ar4) == 0x24 || (*(int *)(DAT_8c03f704 + ar4) == 0x27)))) ||
     ((*(int *)(DAT_8c03f704 + ar4) == 0x28 ||
      ((*(int *)(DAT_8c03f704 + ar4) == 0x32 || (*(int *)(DAT_8c03f704 + ar4) == 0x33)))))) {
    *(undefined4 *)(DAT_8c03f884 + ar4) = 0;
    *(undefined4 *)(DAT_8c03f888 + ar4) = 1;
    iVar6 = DAT_8c03f88c;
    uVar2 = 0;
    *(undefined4 *)(DAT_8c03f88c + ar4) = 0;
    *(undefined4 *)(DAT_8c03f890 + ar4) = 0;
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)((int)puVar7 + DAT_8c03f894 + iVar1 + -0x20),
                               *(undefined4 *)(PTR_DAT_8c03f898 + 8));
    }
    else {
      dVar9 = *(double *)((int)puVar7 + DAT_8c03f894 + iVar1 + -0x20);
      in_xd4 = *(undefined8 *)(PTR_DAT_8c03f898 + 8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) + SUB84(dVar9,0),SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 + dVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar7 + DAT_8c03f89c + iVar1 + -0x20) = (int)((ulonglong)dVar9 >> 0x20);
      dVar9 = (double)CONCAT44(*(undefined4 *)((int)puVar7 + DAT_8c03f8a0 + iVar1 + -0x20),
                               SUB84(dVar9,0));
      dVar8 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c03f898,in_fr1);
    }
    else {
      *(double *)((int)puVar7 + DAT_8c03f89c + iVar1 + -0x20) = dVar9;
      dVar9 = *(double *)((int)puVar7 + DAT_8c03f8a0 + iVar1 + -0x20);
      dVar8 = *(double *)PTR_DAT_8c03f898;
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) + (float)((ulonglong)dVar8 >> 0x20)
                               ,SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 + dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar7 + DAT_8c03f8a4 + iVar1 + -0x20) = (int)((ulonglong)dVar9 >> 0x20);
      dVar9 = (double)CONCAT44(*(undefined4 *)((int)puVar7 + DAT_8c03f8a8 + iVar1 + -0x20),
                               SUB84(dVar9,0));
      dVar8 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c03f898 + 4),SUB84(dVar8,0));
    }
    else {
      *(double *)((int)puVar7 + DAT_8c03f8a4 + iVar1 + -0x20) = dVar9;
      dVar9 = *(double *)((int)puVar7 + DAT_8c03f8a8 + iVar1 + -0x20);
      dVar8 = *(double *)(PTR_DAT_8c03f898 + 4);
    }
    puVar3 = PTR_DAT_8c03f898 + 4;
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) + (float)((ulonglong)dVar8 >> 0x20)
                               ,SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 + dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar7 + DAT_8c03f8ac + iVar1 + -0x20) = (int)((ulonglong)dVar9 >> 0x20);
    }
    else {
      *(double *)((int)puVar7 + DAT_8c03f8ac + iVar1 + -0x20) = dVar9;
    }
    if ((a7_00 == 3) && (0 < *(int *)(DAT_8c03f8b0 + ar4))) {
      a7_00 = 1;
    }
    if (((a7_00 == 3) || (*(int *)(ar4 + 0x68) != 0)) && (*(int *)(DAT_8c03f8b0 + ar4) == 0)) {
      *(undefined4 *)((int)puVar7 + iVar1 + -0x24) = ar5[0xb];
      *(undefined4 *)((int)puVar7 + iVar1 + -0x28) = ar5[6];
      *(undefined4 *)((int)puVar7 + iVar1 + -0x2c) = ar5[3];
      (*(code *)PTR_FUN_8c03f8b4)(ar4,*(undefined4 *)ar5[1],ar5[1],a7_00);
      a7 = (undefined4 *)ar5[1];
      puVar3 = PTR_Vec3_assign_8c03f8bc;
      (*(code *)PTR_Vec3_assign_8c03f8bc)(DAT_8c03f8b8,*a7,PTR_Vec3_assign_8c03f8bc,a7);
      *DAT_8c03f8c0 = a7_00;
      *(undefined4 *)((int)puVar7 + DAT_8c03f8c4 + iVar1 + -0x20) = 1;
      (*(code *)PTR_Vec3_dtor_8c03f8cc)
                ((undefined1 *)((int)puVar7 + DAT_8c03f8c8 + iVar1 + -0x20),0xffffffff,puVar3,a7);
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c03f8d0)
                ((undefined1 *)((int)puVar7 + DAT_8c03f8a0 + iVar1 + -0x20),0xffffffff,puVar3,a7);
      (*(code *)PTR_Vec3_dtor_8c03f8cc)
                ((undefined1 *)((int)puVar7 + DAT_8c03f8d4 + iVar1 + -0x20),0xffffffff,puVar3,a7);
      (*(code *)PTR_Vec3_dtor_8c03f8cc)
                ((undefined1 *)((int)puVar7 + DAT_8c03f8d8 + iVar1 + -0x20),0xffffffff,puVar3,a7);
      puVar4 = (undefined1 *)((int)puVar7 + DAT_8c03f8dc + iVar1 + -0x20);
      puVar5 = PTR_free_if_nonnull_wrap_102790_8c03f8d0;
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c03f8d0)
                (puVar4,0xffffffff,puVar4,PTR_free_if_nonnull_wrap_102790_8c03f8d0);
      (*(code *)PTR_Vec3_dtor_8c03f8cc)
                ((undefined1 *)((int)puVar7 + DAT_8c03f8e0 + iVar1 + -0x20),0xffffffff,puVar4,puVar5
                );
      (*(code *)PTR_Vec3_dtor_8c03f8cc)
                ((undefined1 *)((int)puVar7 + DAT_8c03f8e4 + iVar1 + -0x20),0xffffffff,puVar4,puVar5
                );
      puVar3 = PTR_Vec3_dtor_8c03f8cc;
      (*(code *)PTR_Vec3_dtor_8c03f8cc)
                ((undefined1 *)((int)puVar7 + DAT_8c03f8a4 + iVar1 + -0x20),0xffffffff,
                 PTR_Vec3_dtor_8c03f8cc,puVar5);
      (*(code *)PTR_Vec3_dtor_8c03f8cc)
                ((undefined1 *)((int)puVar7 + DAT_8c03f8e8 + iVar1 + -0x20),0xffffffff,puVar3,puVar5
                );
      uVar2 = *(undefined4 *)((int)puVar7 + DAT_8c03f8c4 + iVar1 + -0x20);
    }
    else {
      if (a7_00 == 1) {
        (*(code *)PTR_vec3_clear_8c03f9a8)(ar4 + 0x6c,puVar3,0,iVar6);
        *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar7 + DAT_8c03f9ac + iVar1 + -0x20);
        *(undefined4 *)((int)puVar7 + iVar1 + -0x24) = *(undefined4 *)((int)puVar7 + iVar1 + -0x20);
        puVar5 = PTR_FUN_8c03f9b0;
        (*(code *)PTR_FUN_8c03f9b0)(ar4 + 0x14,puVar3,uVar2,PTR_FUN_8c03f9b0);
        uVar2 = (*(code *)PTR_Vec3_length_8c03f9b4)
                          ((undefined1 *)((int)puVar7 + DAT_8c03f9ac + iVar1 + -0x20),puVar3,
                           (undefined1 *)((int)puVar7 + DAT_8c03f9ac + iVar1 + -0x20),puVar5);
        *(undefined4 *)((int)puVar7 + DAT_8c03f9b8 + iVar1 + -0x20) = uVar2;
        (*(code *)PTR_Vec3_assign_8c03f9bc)
                  (ar4 + 0x14,*(undefined4 *)((int)puVar7 + DAT_8c03f9b8 + iVar1 + -0x20),uVar2,
                   puVar5);
        a5 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c03f9c0)
                  ((undefined1 *)((int)puVar7 + DAT_8c03f9ac + iVar1 + -0x20),0xffffffff,uVar2,
                   puVar5);
        (*(code *)PTR_FUN_8c03f9c4)(ar4,a5,uVar2,puVar5);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c03f9c8) = 0;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c03f9c8) = in_xd4;
        }
      }
      if (*(int *)(DAT_8c03f9cc + ar4) == 2) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(*(int *)ar5[1] + 4) = DAT_8c03f9d0;
        }
        else {
          *(undefined8 *)(*(int *)ar5[1] + 4) = CONCAT44(DAT_8c03f9d4,DAT_8c03f9d0);
        }
      }
      iVar6 = *(int *)(DAT_8c03f9d4 + ar4);
      if ((iVar6 < 0x36) && (-1 < iVar6)) {
                    /* WARNING: Could not recover jumptable at 0x8c03f9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&PTR_LAB_8c03f9d8)[iVar6])();
        return uVar2;
      }
      puVar3 = PTR_FUN_8c046628;
      (*(code *)PTR_FUN_8c046628)
                (ar4,(undefined1 *)((int)puVar7 + DAT_8c046624 + iVar1 + -0x20),
                 *(undefined4 *)ar5[1],PTR_FUN_8c046628);
      iVar6 = *(int *)(DAT_8c04662c + ar4);
      if ((iVar6 != 2) && (*(int *)(DAT_8c04662c + ar4) != 0x14)) {
        (*(code *)PTR_FUN_8c046630)(ar4,*(undefined4 *)(ar5[1] + 4),iVar6,puVar3);
        (*(code *)PTR_Vec3_assign_8c046638)(ar4 + DAT_8c046634,ar4 + 0x14,iVar6,puVar3);
      }
      puVar3 = PTR_Vec3_assign_8c046638;
      (*(code *)PTR_Vec3_assign_8c046638)
                (DAT_8c04663c,*(undefined4 *)ar5[1],iVar6,PTR_Vec3_assign_8c046638);
      *DAT_8c046640 = a7_00;
      *(undefined4 *)((int)puVar7 + DAT_8c046644 + iVar1 + -0x20) = 0;
      (*(code *)PTR_Vec3_dtor_8c04664c)
                ((undefined1 *)((int)puVar7 + DAT_8c046648 + iVar1 + -0x20),0xffffffff,
                 (undefined1 *)((int)puVar7 + DAT_8c046648 + iVar1 + -0x20),puVar3);
      uVar2 = 0xffffffff;
      puVar3 = PTR_free_if_nonnull_wrap_102790_8c046654;
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c046654)
                ((undefined1 *)((int)puVar7 + DAT_8c046650 + iVar1 + -0x20),0xffffffff,0xffffffff,
                 PTR_free_if_nonnull_wrap_102790_8c046654);
      (*(code *)PTR_Vec3_dtor_8c04664c)
                ((undefined1 *)((int)puVar7 + DAT_8c046658 + iVar1 + -0x20),0xffffffff,uVar2,puVar3)
      ;
      (*(code *)PTR_Vec3_dtor_8c04664c)
                ((undefined1 *)((int)puVar7 + DAT_8c04665c + iVar1 + -0x20),0xffffffff,uVar2,puVar3)
      ;
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c046654)
                ((undefined1 *)((int)puVar7 + DAT_8c046660 + iVar1 + -0x20),0xffffffff,uVar2,puVar3)
      ;
      (*(code *)PTR_Vec3_dtor_8c04664c)
                ((undefined1 *)((int)puVar7 + DAT_8c046664 + iVar1 + -0x20),0xffffffff,uVar2,puVar3)
      ;
      uVar2 = 0xffffffff;
      puVar3 = PTR_Vec3_dtor_8c04664c;
      (*(code *)PTR_Vec3_dtor_8c04664c)
                ((undefined1 *)((int)puVar7 + DAT_8c046668 + iVar1 + -0x20),0xffffffff,
                 PTR_Vec3_dtor_8c04664c,0xffffffff);
      (*(code *)PTR_Vec3_dtor_8c04664c)
                ((undefined1 *)((int)puVar7 + DAT_8c04666c + iVar1 + -0x20),0xffffffff,puVar3,uVar2)
      ;
      (*(code *)PTR_Vec3_dtor_8c04664c)
                ((undefined1 *)((int)puVar7 + DAT_8c046624 + iVar1 + -0x20),0xffffffff,puVar3,uVar2)
      ;
      uVar2 = *(undefined4 *)((int)puVar7 + DAT_8c046644 + iVar1 + -0x20);
    }
  }
  else {
    (*(code *)PTR_Vec3_assign_8c03f70c)
              (DAT_8c03f708,*(undefined4 *)ar5[1],*(int *)(DAT_8c03f704 + ar4),DAT_8c03f704);
    *DAT_8c03f710 = a7_00;
    *(undefined4 *)((int)puVar7 + DAT_8c03f714 + iVar1 + -0x20) = 2;
    puVar4 = (undefined1 *)((int)puVar7 + DAT_8c03f6fc + iVar1 + -0x20);
    puVar3 = PTR_Vec3_dtor_8c03f6c4;
    (*(code *)PTR_Vec3_dtor_8c03f6c4)(puVar4,0xffffffff,PTR_Vec3_dtor_8c03f6c4,puVar4);
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c03f718)
              ((undefined1 *)((int)puVar7 + DAT_8c03f6f4 + iVar1 + -0x20),0xffffffff,puVar3,puVar4);
    puVar3 = PTR_Vec3_dtor_8c03f6c4;
    (*(code *)PTR_Vec3_dtor_8c03f6c4)
              ((undefined1 *)((int)puVar7 + DAT_8c03f6ec + iVar1 + -0x20),0xffffffff,
               PTR_Vec3_dtor_8c03f6c4,puVar4);
    (*(code *)PTR_Vec3_dtor_8c03f6c4)
              ((undefined1 *)((int)puVar7 + DAT_8c03f6e8 + iVar1 + -0x20),0xffffffff,puVar3,puVar4);
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c03f718)
              ((undefined1 *)((int)puVar7 + DAT_8c03f6e0 + iVar1 + -0x20),0xffffffff,puVar3,puVar4);
    (*(code *)PTR_Vec3_dtor_8c03f6c4)
              ((undefined1 *)((int)puVar7 + DAT_8c03f6d4 + iVar1 + -0x20),0xffffffff,puVar3,puVar4);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c03f6c4)
              ((undefined1 *)((int)puVar7 + DAT_8c03f6d0 + iVar1 + -0x20),0xffffffff,puVar3,
               0xffffffff);
    (*(code *)PTR_Vec3_dtor_8c03f6c4)
              ((undefined1 *)((int)puVar7 + DAT_8c03f6c8 + iVar1 + -0x20),0xffffffff,puVar3,uVar2);
    (*(code *)PTR_Vec3_dtor_8c03f6c4)
              ((undefined1 *)((int)puVar7 + DAT_8c03f6bc + iVar1 + -0x20),0xffffffff,
               (undefined1 *)((int)puVar7 + DAT_8c03f6bc + iVar1 + -0x20),uVar2);
    uVar2 = *(undefined4 *)((int)puVar7 + DAT_8c03f714 + iVar1 + -0x20);
  }
  return uVar2;
}


