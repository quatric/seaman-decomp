#include "../decls.h"
int s_EVENT_QUIZ_107596_def(code *ar4,code *ar5,code *ar6,char *ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  code *ar7_00;
  code *pcVar6;
  char cVar7;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  cVar7 = '\0';
  pcVar6 = ar6;
  pcVar4 = ar5;
  uVar1 = FUN_8c02bef8(*(int *)(ar6 + 4),ar5,ar6,ar7);
  if (((6 < (short)uVar1) &&
      (iVar3 = FUN_8c02c340(*(int *)(ar6 + 4) + 0x90,ar5,pcVar6,ar7), iVar3 < 0x30)) &&
     (iVar3 = FUN_8c02c518(*(int *)(ar6 + 4),ar5,pcVar6,ar7), iVar3 == -1)) {
    uVar1 = FUN_8c05eec4(*(int *)(ar6 + 0xc),ar5,pcVar6,ar7);
    pcVar6 = (code *)(int)(char)uVar1;
    if ((((char)uVar1 == '\x02') &&
        (iVar3 = (**(code **)(*(int *)pcVar4 + 0x1d0))(pcVar4,ar5,2,ar7), iVar3 == 1)) &&
       ((iVar3 = get_field_178_035734(*(int *)(ar6 + 8),ar5,pcVar6,ar7), iVar3 == 0 &&
        (ar4[0x98] == (code)0x5)))) {
      uVar1 = FUN_8c0e98f0(*(int *)(ar6 + 0xc),ar5,pcVar6,ar7);
      if ((((char)uVar1 < '\x03') &&
          (iVar3 = FUN_8c02c518(*(int *)(ar6 + 4),ar5,pcVar6,ar7), iVar3 == -1)) &&
         ((ar5 = ar6, iVar3 = FUN_8c02fcc4(ar4,ar6,pcVar6,ar7), iVar3 == 1 &&
          ((iVar3 = FUN_8c0637d0(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),ar5,pcVar6,ar7),
           iVar3 == 0 && (iVar3 = *(int *)(ar4 + 0x878), iVar3 == 0)))))) {
        ar5 = FUN_8c0637c8;
        uVar1 = FUN_8c0637c8(*(int *)(ar6 + 0xc),FUN_8c0637c8,pcVar6,0);
        if ((char)uVar1 == '\0') {
          if (*(int *)(ar4 + 0x40) == 0x14) {
            ar7 = (char *)0x18;
            *(int *)(ar4 + 0x40) = 0x18;
          }
          else {
            uVar1 = FUN_8c0e98f0(*(int *)(ar6 + 0xc),ar5,pcVar6,iVar3);
            FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar1,pcVar6,iVar3);
            ar7 = "EVENT_QUIZ";
            pcVar6 = (code *)0x0;
            FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"EVENT_QUIZ");
            FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,0,pcVar6,ar7);
            *(int *)(ar4 + 4) = 0xd;
            *(int *)(ar4 + 8) = 99;
            *(int *)(ar4 + 0xc) = 0;
            *(int *)(ar4 + 0x40) = 0x21;
            *(int *)(ar4 + 0x840) = 0x21;
            DAT_8c1eee30 = 0x21;
            *(int *)(ar4 + 0x844) = 0xb;
            DAT_8c1eee34 = 0xb;
            *(int *)(ar4 + 0x848) = 10;
            DAT_8c1eee38 = 10;
            ar4[0x80] = (code)0x0;
            Vec3_ctor_copy(auStack_20,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7);
            Vec3_assign_wrap_063818(ar4,auStack_20,pcVar6,ar7);
            Vec3_dtor(auStack_20,0xffffffff,pcVar6,ar7);
            if (cVar7 == '\0') {
              *(int *)(ar4 + 0x30) = 0x44960000;
            }
            else {
              *(undefined8 *)(ar4 + 0x30) = 0xe444960000;
            }
            Vec3_ctor_copy(auStack_30,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7);
            Vec3_assign_wrap_05f640(ar4,auStack_30,pcVar6,ar7);
            ar5 = (code *)0xffffffff;
            Vec3_dtor(auStack_30,0xffffffff,pcVar6,ar7);
          }
          goto LAB_8c107c10;
        }
      }
      ar7_00 = FUN_8c0e98f0;
      uVar1 = FUN_8c0e98f0(*(int *)(ar6 + 0xc),ar5,pcVar6,FUN_8c0e98f0);
      ar7 = (char *)ar7_00;
      if (((char)uVar1 == '\x03') &&
         (iVar3 = FUN_8c02c518(*(int *)(ar6 + 4),ar5,pcVar6,ar7_00), ar7 = (char *)ar7_00,
         iVar3 == -1)) {
        pcVar6 = FUN_8c035000;
        ar5 = (code *)FUN_8c035000(*(int *)(ar6 + 4),ar5,FUN_8c035000,ar7_00);
        ar7 = (char *)ar7_00;
        if ((0 < (int)ar5) &&
           ((((iVar3 = FUN_8c0637d0(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),ar5,pcVar6,ar7_00)
              , ar7 = (char *)ar7_00, iVar3 == 0 && ((char)ar4[0x87c] < '\x03')) &&
             (ar5 = (code *)0x878, *(int *)(ar4 + 0x878) == 0)) &&
            (uVar1 = FUN_8c0637c8(*(int *)(ar6 + 0xc),0x878,pcVar6,ar7_00), ar7 = (char *)ar7_00,
            (char)uVar1 == '\0')))) {
          if (*(int *)(ar4 + 0x40) != 0x14) {
            uVar1 = FUN_8c0e98f0(*(int *)(ar6 + 0xc),ar5,pcVar6,ar7_00);
            FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar1,pcVar6,ar7_00);
            pcVar5 = "EVENT_QUIZ";
            uVar1 = 0;
            FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"EVENT_QUIZ");
            FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,0,uVar1,pcVar5);
            *(int *)(ar4 + 4) = 0xd;
            *(int *)(ar4 + 8) = 99;
            *(int *)(ar4 + 0xc) = 0;
            ar7 = (char *)0x21;
            *(int *)(ar4 + 0x40) = 0x21;
            *(int *)(ar4 + 0x840) = 0x21;
            DAT_8c1eee30 = 0x21;
            pcVar6 = (code *)0xb;
            *(int *)(ar4 + 0x844) = 0xb;
            DAT_8c1eee34 = 0xb;
            *(int *)(ar4 + 0x848) = 10;
            DAT_8c1eee38 = 10;
            ar4[0x80] = (code)0x0;
            Vec3_ctor_copy(auStack_40,*(int *)(ar6 + 0x14) + 0x10,0xb,0x21);
            Vec3_assign_wrap_063818(ar4,auStack_40,pcVar6,ar7);
            Vec3_dtor(auStack_40,0xffffffff,pcVar6,ar7);
            if (cVar7 == '\0') {
              *(int *)(ar4 + 0x30) = 0x44960000;
            }
            else {
              *(undefined8 *)(ar4 + 0x30) = 0xc444960000;
            }
            Vec3_ctor_copy(auStack_50,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7);
            Vec3_assign_wrap_05f640(ar4,auStack_50,pcVar6,ar7);
            ar5 = (code *)0xffffffff;
            Vec3_dtor(auStack_50,0xffffffff,pcVar6,ar7);
          }
          goto LAB_8c107c10;
        }
      }
      uVar2 = FUN_8c02602c(*(int *)(ar6 + 0x18),ar5,pcVar6,ar7);
      ar5 = (code *)0xa;
      iVar3 = libgcc_divide_helper_01031c(uVar2 & 0xffff,10,pcVar6,ar7);
      if (iVar3 == 1) {
        ar5 = *(code **)(ar4 + 0x878);
        if (0 < (int)ar5) {
          libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x878),3,pcVar6,ar7);
          iVar3 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x878),0x3c,pcVar6,ar7);
          if (2 < iVar3) {
            iVar3 = 2;
          }
          FUN_8c0fa5bc(0x8c35468c,iVar3,pcVar6,ar7);
          ar7 = "EVENT_ROCK_PUSH_INTERVAL";
          pcVar6 = (code *)0x0;
          ar5 = (code *)0x3;
          FUN_8c0306d4(ar4 + 0x9c,3,0,"EVENT_ROCK_PUSH_INTERVAL");
        }
        uVar1 = FUN_8c0e98f0(*(int *)(ar6 + 0xc),ar5,pcVar6,ar7);
        if (((char)uVar1 == '\x03') &&
           (iVar3 = FUN_8c035000(*(int *)(ar6 + 4),ar5,pcVar6,ar7), iVar3 == 0)) {
          libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x878),3,pcVar6,ar7);
          iVar3 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x878),0x3c,pcVar6,ar7);
          if (2 < iVar3) {
            iVar3 = 2;
          }
          FUN_8c0fa5bc(0x8c35468c,iVar3,pcVar6,ar7);
          ar7 = "EVENT_ROCK_PUSH_INTERVAL";
          pcVar6 = (code *)0x0;
          ar5 = (code *)0x3;
          FUN_8c0306d4(ar4 + 0x9c,3,0,"EVENT_ROCK_PUSH_INTERVAL");
        }
      }
    }
  }
LAB_8c107c10:
  uVar1 = FUN_8c02bef8(*(int *)(ar6 + 4),ar5,pcVar6,ar7);
  if ((short)uVar1 == 3) {
    ar5 = FUN_8c0637c8;
    uVar1 = FUN_8c0637c8(*(int *)(ar6 + 0xc),FUN_8c0637c8,pcVar6,ar7);
    if ((char)uVar1 == '\0') {
      uVar2 = get_field_a0_035724(*(int *)(ar6 + 0x18),ar5,pcVar6,get_field_a0_035724);
      pcVar6 = (code *)(uVar2 & 0xff);
      ar7 = (char *)pcVar6;
      if (pcVar6 == (code *)0x0) {
        uVar1 = FUN_8c05eec4(*(int *)(ar6 + 0xc),*(int *)(ar6 + 0xc),0,0);
        ar5 = (code *)(int)(char)uVar1;
        if (((ar5 == (code *)0x2) &&
            (iVar3 = FUN_8c02c518(*(int *)(ar6 + 4),2,pcVar6,ar7), iVar3 == -1)) &&
           (iVar3 = get_field_4_062878(*(int *)(ar6 + 0xc),ar5,pcVar6,ar7), iVar3 == 1)) {
          ar5 = (code *)0x0;
          FUN_8c063800(*(int *)(ar6 + 0xc),0,pcVar6,ar7,pcVar4);
          *(int *)(ar4 + 0x850) = -10;
          *(int *)(ar4 + 0x858) = 0;
        }
      }
    }
  }
  uVar1 = FUN_8c02bef8(*(int *)(ar6 + 4),ar5,pcVar6,ar7);
  if ((short)uVar1 != 3) {
    return (int)(short)uVar1;
  }
  iVar3 = FUN_8c0637d0(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),ar5,pcVar6,ar7);
  if (iVar3 != 0) {
    return iVar3;
  }
  uVar1 = get_field_a0_035724(*(int *)(ar6 + 0x18),ar5,pcVar6,ar7);
  if ((char)uVar1 != '\0') {
    return (int)(char)uVar1;
  }
  if (*(int *)(ar4 + 0x850) != -10) {
    return *(int *)(ar4 + 0x850);
  }
  pcVar4 = (code *)FUN_8c0637c8(*(int *)(ar6 + 0xc),*(int *)(ar6 + 0xc),pcVar6,ar7);
  if ((char)pcVar4 == '\0') {
    iVar3 = FUN_8c02fcc4(ar4,ar6,pcVar6,ar7);
    pcVar4 = (code *)0x1;
    if (iVar3 != 1) {
      if (*(int *)(ar4 + 900) == -1) {
        FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7);
        pcVar5 = "REQUEST_ATTENTION";
        FUN_8c0303b8(ar4 + 0x9c,10,0,"REQUEST_ATTENTION",&DAT_8c1eeec3);
        *(int *)(ar4 + 0xfc) = 0;
        pcVar6 = ar4 + 0x9c;
        iVar3 = FUN_8c0f8320(0x8c35468c,*(int *)(ar4 + 0x388),pcVar6,pcVar5);
        *(int *)(ar4 + 900) = iVar3;
        *(int *)(ar4 + 0x14c) = 0;
        FUN_8c030870(ar4 + 0x9c,2,pcVar6,pcVar5);
      }
      *(int *)(ar4 + 0x858) = *(int *)(ar4 + 0x858) + 1;
      pcVar4 = ar4;
      goto LAB_8c107eb4;
    }
  }
  uVar1 = FUN_8c0637c8(*(int *)(ar6 + 0xc),pcVar4,pcVar6,ar7);
  if (((char)uVar1 == '\0') &&
     (pcVar4 = (code *)FUN_8c02fcc4(ar4,ar6,pcVar6,ar7), pcVar4 == (code *)0x1)) {
    pcVar4 = (code *)0x1;
    FUN_8c0637c0(*(int *)(ar6 + 0xc),1,pcVar6,ar7);
  }
LAB_8c107eb4:
  uVar1 = FUN_8c0637c8(*(int *)(ar6 + 0xc),pcVar4,pcVar6,FUN_8c0637c8);
  pcVar5 = (char *)(int)(char)uVar1;
  pcVar6 = (code *)(int)(char)uVar1;
  if ((pcVar6 == (code *)0x1) && (pcVar4 = ar6, iVar3 = FUN_8c02fcc4(ar4,ar6,1,pcVar5), iVar3 == 1))
  {
    pcVar4 = *(code **)(ar4 + 900);
    if (pcVar4 == (code *)0xffffffff) {
      FUN_8c030870(ar4 + 0x9c,0,pcVar6,pcVar5);
      pcVar5 = "EVENT_GET_WORMBOX";
      FUN_8c0303b8(ar4 + 0x9c,0x2a,0,"EVENT_GET_WORMBOX",&DAT_8c1eeec3);
      *(int *)(ar4 + 0xfc) = 0;
      pcVar6 = ar4 + 0x9c;
      pcVar4 = *(code **)(ar4 + 0x388);
      iVar3 = FUN_8c0f8320(0x8c35468c,pcVar4,pcVar6,pcVar5);
      *(int *)(ar4 + 900) = iVar3;
      *(int *)(ar4 + 0x14c) = 1;
    }
    if ((*(int *)(ar4 + 0x14c) != 0) &&
       (pcVar4 = *(code **)(ar4 + 900), pcVar4 != (code *)0xffffffff)) {
      *(int *)(ar4 + 4) = 0xd;
      *(int *)(ar4 + 8) = 0x5f;
      *(int *)(ar4 + 0xc) = 0;
      *(int *)(ar4 + 0x840) = 0x14;
      DAT_8c1eee30 = 0x14;
      *(int *)(ar4 + 0x844) = 0xb;
      DAT_8c1eee34 = 0xb;
      *(int *)(ar4 + 0x848) = 10;
      DAT_8c1eee38 = 10;
      Vec3_ctor_copy(auStack_60,*(int *)(ar6 + 0x14) + 0x10,pcVar6,pcVar5);
      Vec3_assign_wrap_063818(ar4,auStack_60,pcVar6,pcVar5);
      Vec3_dtor(auStack_60,0xffffffff,pcVar6,pcVar5);
      if (cVar7 == '\0') {
        *(int *)(ar4 + 0x30) = 0x44960000;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = 0x8c05f64044960000;
      }
      Vec3_ctor_copy(auStack_70,*(int *)(ar6 + 0x14) + 0x10,pcVar6,pcVar5);
      Vec3_assign_wrap_05f640(ar4,auStack_70,pcVar6,pcVar5);
      pcVar4 = (code *)0xffffffff;
      Vec3_dtor(auStack_70,0xffffffff,pcVar6,pcVar5);
      ar4[0x80] = (code)0x0;
    }
  }
  iVar3 = 0x858;
  if (300 < *(int *)(ar4 + 0x858)) {
    uVar1 = FUN_8c0637c8(*(int *)(ar6 + 0xc),pcVar4,pcVar6,pcVar5);
    iVar3 = (int)(char)uVar1;
    if ((char)uVar1 == '\0') {
      *(int *)(ar4 + 0x850) = 0;
      iVar3 = 0x858;
      *(int *)(ar4 + 0x858) = 0;
    }
  }
  return iVar3;
}

__asm__(".globl _s_EVENT_QUIZ_107596\n.set _s_EVENT_QUIZ_107596, _s_EVENT_QUIZ_107596_def\n");
