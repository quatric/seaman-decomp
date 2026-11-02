#include "../decls.h"
undefined4 FUN_8c1089e4_def(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *ar6_00;
  undefined4 in_fr1;
  double dVar5;
  char cVar6;
  char cVar7;
  undefined3 uVar8;
  undefined4 ain0;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar6_00 = ar6;
  Vec3_ctor_zero(&uStack_1c,ar5,ar6,ar7);
  if (*(int *)(ar4 + 900) != -1) {
    if ((*(int *)(ar4 + 4) == 0) && (*(int *)(ar4 + 0x14c) != 0)) {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x840) = 0x14;
      DAT_8c1eee30 = 0x14;
      *(undefined4 *)(ar4 + 0x844) = 0xb;
      DAT_8c1eee34 = 0xb;
      *(undefined4 *)(ar4 + 0x848) = 10;
      DAT_8c1eee38 = 10;
      Vec3_ctor_copy(auStack_2c,ar6[5] + 0x10,ar6_00,ar7);
      Vec3_assign_wrap_063818(ar4,auStack_2c,ar6_00,ar7);
      Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7);
      if (cVar7 == '\0') {
        *(undefined4 *)(ar4 + 0x30) = 0x44960000;
      }
      else {
        in_fr1 = 0x44960000;
        *(undefined8 *)(ar4 + 0x30) = 0x8044960000;
      }
      *(undefined1 *)(ar4 + 0x80) = 0;
    }
    Vec3_ctor_copy(auStack_3c,ar6[5] + 0x10,ar6_00,ar7);
    Vec3_assign_wrap_05f640(ar4,auStack_3c,ar6_00,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7);
    FUN_8c02f670(*ar6,uVar4,ar6_00,ar7,auStack_4c);
    Vec3_sub(auStack_4c,ar6[5] + 0x10,ar6_00,ar7,auStack_5c);
    Vec3_assign(&uStack_1c,auStack_5c,ar6_00,ar7);
    Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7);
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(uStack_14,in_fr1);
    }
    else {
      dVar5 = (double)CONCAT44(uStack_10,uStack_14);
    }
    if (cVar6 == '\0') {
      iVar3 = (int)(float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      iVar3 = (int)dVar5;
    }
    *(int *)(ar4 + 0x158) = iVar3;
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(uStack_1c,SUB84(dVar5,0));
    }
    else {
      dVar5 = (double)CONCAT44(uStack_18,uStack_1c);
    }
    if (cVar6 == '\0') {
      iVar3 = (int)(float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      iVar3 = (int)dVar5;
    }
    *(int *)(ar4 + 0x15c) = iVar3;
    iVar3 = get_field_89130_0fa740(0x8c35468c,uVar4,ar6_00,ar7);
    if ((iVar3 == 3) || (iVar3 = get_field_89130_0fa740(0x8c35468c,uVar4,ar6_00,ar7), iVar3 == 5)) {
      ar5 = 1;
      FUN_8c065ca4(ar6[3],1,ar6_00,ar7);
    }
    else {
      ar5 = 0;
      FUN_8c065ca4(ar6[3],0,ar6_00,ar7);
    }
    iVar3 = get_field_770_05eeb8(ar4 + 0x9c,ar5,ar6_00,ar7);
    if (iVar3 == 2) {
      *(undefined4 *)(ar4 + 0x14c) = 0;
    }
    iVar3 = FUN_8c0fa2b8(0x8c35468c,ar5,ar6_00,ar7);
    if (iVar3 == 0) {
      *(undefined4 *)(ar4 + 0x94) = 0;
      uVar4 = 3;
      FUN_8c030870(ar4 + 0x9c,3,ar6_00,ar7);
      if (*(int *)(ar4 + 0x40) == 10) {
        *(undefined4 *)(ar4 + 4) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0;
        *(undefined4 *)(ar4 + 8) = 0;
        *(undefined4 *)(ar4 + 0xc) = 0;
      }
      uVar2 = FUN_8c02bef8(ar6[1],uVar4,ar6_00,ar7);
      if ((short)uVar2 == 0) {
        uVar4 = 0;
        iVar3 = FUN_8c0fa388(0x8c35468c,0,ar6_00,ar7);
        if (iVar3 == 1) {
          ar6_00 = (undefined4 *)0x1b;
          uVar4 = 0xb;
          FUN_8c0b9ed4(ar6[6],0xb,0x1b,ar7);
        }
      }
      uVar2 = FUN_8c02bef8(ar6[1],uVar4,ar6_00,ar7);
      sVar1 = (short)uVar2;
      if (sVar1 == 3) {
        uVar2 = get_field_a0_035724(ar6[6],uVar4,ar6_00,ar7);
        uVar8 = CONCAT21(sVar1,(char)uVar2);
        if ((char)uVar2 == '\0') {
          uVar2 = FUN_8c0637c8(ar6[3],uVar4,ar6_00,ar7);
          ain0 = CONCAT31(uVar8,(char)uVar2);
          if (((char)uVar2 == '\x01') && (*(int *)(ar4 + 0x10c) == 1)) {
            ar6_00 = (undefined4 *)0x1b;
            FUN_8c0b9ed4(ar6[6],0xc,0x1b,ar7);
            FUN_8c0637c0(ar6[3],0,ar6_00,ar7);
            FUN_8c0e9888(ar6[3],1,ar6_00,ar7);
            FUN_8c064ba0(ar6[6],1,ar6_00,ar7);
            *(undefined4 *)(ar4 + 0x10c) = 0;
            uVar4 = 2;
            FUN_8c061180(ar6[3],2,ar6_00,ar7,ain0);
            *(undefined4 *)(ar4 + 0x850) = 0;
          }
        }
      }
      if ((*(int *)(ar4 + 0x100) < 1) ||
         (iVar3 = get_field_b0_065c8c(ar6[3],uVar4,ar6_00,ar7), *(int *)(ar4 + 0x100) < iVar3)) {
        ar5 = 0;
        FUN_8c02af68(*ar6,0,ar6_00,ar7);
      }
      else {
        FUN_8c065c80(ar6[3],*(undefined4 *)(ar4 + 0x100),ar6_00,ar7);
        FUN_8c02af68(*ar6,1,ar6_00,ar7);
        ar6_00 = (undefined4 *)0x1b;
        ar5 = 0xd;
        FUN_8c0b9ed4(ar6[6],0xd,0x1b,ar7);
      }
      if (*(int *)(ar4 + 0x10c) == 0xf) {
        *(undefined4 *)(ar4 + 4) = 5;
        *(undefined4 *)(ar4 + 8) = 0x55;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0xe;
        *(undefined4 *)(ar4 + 0x840) = 0xe;
        DAT_8c1eee30 = 0xe;
        *(undefined4 *)(ar4 + 0x844) = 0x22;
        DAT_8c1eee34 = 0x22;
        *(undefined4 *)(ar4 + 0x848) = 0x22;
        DAT_8c1eee38 = 0x22;
        *(undefined4 *)(ar4 + 0x10c) = 0;
      }
      if (*(int *)(ar4 + 0x10c) == 0x10) {
        FUN_8c02ce10(ar6[1] + 0x90,0,ar6_00,ar7);
        ar5 = 1;
        FUN_8c0637c0(ar6[3],1,ar6_00,ar7);
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 99;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x20;
        *(undefined4 *)(ar4 + 0x840) = 0x20;
        DAT_8c1eee30 = 0x20;
        *(undefined4 *)(ar4 + 0x844) = 0x22;
        DAT_8c1eee34 = 0x22;
        *(undefined4 *)(ar4 + 0x848) = 0x22;
        DAT_8c1eee38 = 0x22;
        *(undefined4 *)(ar4 + 0x10c) = 0;
        FUN_8c0fa6c8(0x8c35468c,ar5,ar6_00,ar7);
      }
      s_STATUS_FORMAT_030306(ar4 + 0x9c,ar5,ar6_00,ar7);
      *(undefined1 *)(ar4 + 0x80) = 1;
      *(undefined4 *)(ar4 + 900) = 0xffffffff;
      *(undefined4 *)(ar4 + 0xfc) = 0;
    }
  }
  iVar3 = FUN_8c0fa2b8(0x8c35468c,ar5,ar6_00,ar7);
  if ((iVar3 == 0) && ((*(int *)(ar4 + 0x40) == 10 || (*(int *)(ar4 + 0x40) == 0xb)))) {
    FUN_8c030870(ar4 + 0x9c,3,ar6_00,ar7);
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 0xfc) = 0;
    *(undefined4 *)(ar4 + 8) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined1 *)(ar4 + 0x80) = 1;
  }
  uVar4 = Vec3_dtor(&uStack_1c,0xffffffff,ar6_00,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c1089e4\n.set _FUN_8c1089e4, _FUN_8c1089e4_def\n");
