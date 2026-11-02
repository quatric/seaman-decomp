#include "../decls.h"
undefined4 s_EVENT_ENDING_0656da_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  code *ar5_00;
  char *ar5_01;
  undefined4 *ar6_00;
  undefined4 in_fr1;
  double dVar3;
  char cVar4;
  char cVar5;
  undefined4 in_stack_ffffff5c;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar5_00 = Vec3_ctor_zero;
  ar6_00 = ar6;
  Vec3_ctor_zero(&uStack_20,Vec3_ctor_zero,ar6,ar7);
  if (*(int *)(ar4 + 900) == -1) goto LAB_8c065be6;
  if ((*(int *)(ar4 + 4) == 0) && (*(int *)(ar4 + 0x14c) != 0)) {
    *(undefined4 *)(ar4 + 4) = 0xd;
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x840) = 0x12;
    DAT_8c136908 = 0x12;
    *(undefined4 *)(ar4 + 0x844) = 0xb;
    DAT_8c13690c = 0xb;
    *(undefined4 *)(ar4 + 0x848) = 0xc;
    DAT_8c136910 = 0xc;
    Vec3_ctor_copy(auStack_30,ar6[5] + 0x10,ar6_00,ar7);
    Vec3_assign_wrap_063818(ar4,auStack_30,ar6_00,ar7);
    Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7);
    if (cVar5 == '\0') {
      *(undefined4 *)(ar4 + 0x30) = 0x44960000;
    }
    else {
      in_fr1 = 0x44960000;
      *(undefined8 *)(ar4 + 0x30) = 0x8044960000;
    }
    *(undefined1 *)(ar4 + 0x80) = 0;
  }
  Vec3_ctor_copy(auStack_40,ar6[5] + 0x10,ar6_00,ar7);
  Vec3_assign_wrap_05f640(ar4,auStack_40,ar6_00,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_40,0xffffffff,ar6_00,ar7);
  FUN_8c02f670(*ar6,uVar2,ar6_00,ar7,auStack_50);
  Vec3_sub(auStack_50,ar6[5] + 0x10,ar6_00,ar7,auStack_60);
  Vec3_assign(&uStack_20,auStack_60,ar6_00,ar7);
  Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_50,0xffffffff,ar6_00,ar7);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(uStack_18,in_fr1);
  }
  else {
    dVar3 = (double)CONCAT44(uStack_14,uStack_18);
  }
  if (cVar4 == '\0') {
    iVar1 = (int)(float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    iVar1 = (int)dVar3;
  }
  *(int *)(ar4 + 0x158) = iVar1;
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(uStack_20,SUB84(dVar3,0));
  }
  else {
    dVar3 = (double)CONCAT44(uStack_1c,uStack_20);
  }
  if (cVar4 == '\0') {
    iVar1 = (int)(float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    iVar1 = (int)dVar3;
  }
  *(int *)(ar4 + 0x15c) = iVar1;
  iVar1 = get_field_89130_0fa740(0x8c35468c,uVar2,ar6_00,ar7);
  if ((iVar1 == 3) || (iVar1 = get_field_89130_0fa740(0x8c35468c,uVar2,ar6_00,ar7), iVar1 == 5)) {
    ar5_00 = (code *)0x1;
    FUN_8c065ca4(ar6[3],1,ar6_00,ar7);
  }
  else {
    ar5_00 = (code *)0x0;
    FUN_8c065ca4(ar6[3],0,ar6_00,ar7);
  }
  iVar1 = get_field_770_05eeb8(ar4 + 0x9c,ar5_00,ar6_00,ar7);
  if (iVar1 == 2) {
    *(undefined4 *)(ar4 + 0x14c) = 0;
  }
  iVar1 = FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6_00,ar7);
  if (iVar1 != 0) goto LAB_8c065be6;
  *(undefined4 *)(ar4 + 0x94) = 0;
  ar5_01 = (char *)0x3;
  FUN_8c030870(ar4 + 0x9c,3,ar6_00,ar7);
  if (*(int *)(ar4 + 0x40) == 0xc) {
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 8) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
  }
  uVar2 = FUN_8c02bef8(ar6[1],ar5_01,ar6_00,ar7);
  if ((((short)uVar2 == 3) &&
      (iVar1 = (**(code **)(*ar5 + 0x18c))(ar5,ar5_01,ar6_00,ar7), iVar1 == 0)) &&
     (*(int *)(ar4 + 0x10c) == 2)) {
    FUN_8c0637c0(ar6[3],1,ar6_00,ar7);
    ar6_00 = (undefined4 *)0x1b;
    FUN_8c0b9ed4(ar6[6],0x20,0x1b,ar7);
    FUN_8c065c9c(ar6[3],1,ar6_00,ar7);
    (**(code **)(*ar5 + 0x16c))(ar5,1,ar6_00,ar7);
    *(undefined4 *)(ar4 + 0x10c) = 0;
    ar5_01 = (char *)0x4;
    uVar2 = ar6[3];
    FUN_8c061180(uVar2,4,ar6_00,ar7,in_stack_ffffff5c);
    *(undefined4 *)(ar4 + 0x854) = 0;
    FUN_8c0c4e2c(uVar2,ar5_01,ar6_00,ar7);
  }
  uVar2 = FUN_8c02bef8(ar6[1],ar5_01,ar6_00,ar7);
  if (((3 < (short)uVar2) && (uVar2 = FUN_8c0637c8(ar6[3],ar5_01,ar6_00,ar7), (char)uVar2 == '\x01')
      ) && (*(int *)(ar4 + 0x10c) == 7)) {
    *(undefined4 *)(ar4 + 0x10c) = 0;
    ar5_01 = (char *)0x1;
    FUN_8c05f498(ar6[3],1,ar6_00,ar7);
  }
  if (((*(int *)(ar4 + 0x10c) == 6) || (*(int *)(ar4 + 0x10c) == 4)) &&
     ((uVar2 = FUN_8c02bef8(ar6[1],ar5_01,ar6_00,ar7), 3 < (short)uVar2 &&
      (uVar2 = FUN_8c0637c8(ar6[3],ar5_01,ar6_00,ar7), (char)uVar2 == '\x01')))) {
    if (*(int *)(ar4 + 0x10c) == 4) {
      *(undefined1 *)(ar4 + 0x871) = 1;
    }
    ar5_01 = (char *)0x4;
    FUN_8c05f498(ar6[3],4,ar6_00,ar7);
  }
  if (*(int *)(ar4 + 0x10c) == 5) {
LAB_8c065a4a:
    *(undefined4 *)(ar4 + 0x87c) = 1;
    *(undefined4 *)(ar4 + 0x10c) = 0;
  }
  else {
    ar5_01 = s_EVENT_ENDING_8c136c95;
    iVar1 = FUN_8c05edfc(ar4 + 0xbc,s_EVENT_ENDING_8c136c95,ar6_00,ar7);
    if (iVar1 == 0) goto LAB_8c065a4a;
  }
  uVar2 = FUN_8c025f68(ar6[1] + 0x78,ar5_01,ar6_00,ar7);
  if (((char)uVar2 == '\x01') && (*(int *)(ar4 + 0x10c) == 3)) {
    FUN_8c02e438(ar6[1] + 0x78,ar5_01,ar6_00,ar7);
    *(undefined4 *)(ar4 + 0x10c) = 0;
  }
  if (*(int *)(ar4 + 0x10c) == 0xf) {
    *(undefined4 *)(ar4 + 4) = 5;
    *(undefined4 *)(ar4 + 8) = 0x55;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(undefined4 *)(ar4 + 0x840) = 5;
    DAT_8c136908 = 5;
    *(undefined4 *)(ar4 + 0x844) = 0x36;
    DAT_8c13690c = 0x36;
    *(undefined4 *)(ar4 + 0x848) = 0x36;
    DAT_8c136910 = 0x36;
    *(undefined4 *)(ar4 + 0x10c) = 0;
  }
  if ((*(int *)(ar4 + 0x100) < 1) ||
     (iVar1 = get_field_b0_065c8c(ar6[3],ar5_01,ar6_00,ar7), *(int *)(ar4 + 0x100) < iVar1)) {
    ar5_00 = (code *)0x0;
    FUN_8c02af68(*ar6,0,ar6_00,ar7);
  }
  else {
    FUN_8c065c80(ar6[3],*(undefined4 *)(ar4 + 0x100),ar6_00,ar7);
    ar5_00 = (code *)0x1;
    FUN_8c02af68(*ar6,1,ar6_00,ar7);
  }
  s_STATUS_FORMAT_030306(ar4 + 0x9c,ar5_00,ar6_00,ar7);
  *(undefined1 *)(ar4 + 0x80) = 1;
  *(undefined4 *)(ar4 + 900) = 0xffffffff;
  *(undefined4 *)(ar4 + 0xfc) = 0;
LAB_8c065be6:
  iVar1 = FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6_00,ar7);
  if ((iVar1 == 0) && ((*(int *)(ar4 + 0x40) == 0xc || (*(int *)(ar4 + 0x40) == 0xb)))) {
    FUN_8c030870(ar4 + 0x9c,3,ar6_00,ar7);
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 8) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined1 *)(ar4 + 0x80) = 1;
  }
  uVar2 = Vec3_dtor(&uStack_20,0xffffffff,ar6_00,ar7);
  return uVar2;
}

__asm__(".globl _s_EVENT_ENDING_0656da\n.set _s_EVENT_ENDING_0656da, _s_EVENT_ENDING_0656da_def\n");
