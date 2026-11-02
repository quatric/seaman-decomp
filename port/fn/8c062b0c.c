#include "../decls.h"
int s_REACTION_WAKED_TAP_062b14_def(int ar4,code *ar5,code *ar6,char *ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int ar5_00;
  code *pcVar6;
  char *ar7_00;
  float fVar7;
  undefined8 in_dr0;
  float fVar8;
  char cVar9;
  char cVar10;
  undefined4 in_stack_fffffeb0;
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  pcVar5 = ar5;
  pcVar6 = ar6;
  if (((*(char *)(ar4 + 0x81) == '\x01') && (1 < *(int *)(ar4 + 0x104))) &&
     (*(int *)(ar4 + 4) != 0xd)) {
    iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),ar5,ar6,ar7);
    if (iVar2 == 0) {
      iVar2 = get_field_13c_028d9c(*(undefined4 *)(ar6 + 4),pcVar5,pcVar6,ar7);
      if (iVar2 == 6) {
        uVar1 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),pcVar5,pcVar6,ar7);
        pcVar6 = (code *)0xd;
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        pcVar5 = (code *)0x3c;
        iVar2 = libgcc_divide_helper_010284(uVar1 & 0xffff,0x3c,0xd,ar7);
        if (iVar2 == 0) {
          *(undefined4 *)(ar4 + 0x40) = 0x11;
          *(undefined4 *)(ar4 + 0x840) = 0x11;
          DAT_8c136908 = 0x11;
          *(undefined4 *)(ar4 + 0x844) = 0x36;
          DAT_8c13690c = 0x36;
          *(undefined4 *)(ar4 + 0x848) = 0x36;
          DAT_8c136910 = 0x36;
        }
        else if (iVar2 == 1) {
          *(undefined4 *)(ar4 + 0x40) = 0xb;
          *(undefined4 *)(ar4 + 0x840) = 0xb;
          DAT_8c136908 = 0xb;
          *(undefined4 *)(ar4 + 0x844) = 0x2c;
          DAT_8c13690c = 0x2c;
          *(undefined4 *)(ar4 + 0x848) = 0x36;
          DAT_8c136910 = 0x36;
          pcVar5 = (code *)0x36;
        }
        else {
          Vec3_ctor_copy(auStack_44,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7);
          Vec3_assign_wrap_063818(ar4,auStack_44,pcVar6,ar7);
          Vec3_dtor(auStack_44,0xffffffff,pcVar6,ar7);
          Vec3_ctor_copy(auStack_54,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7);
          Vec3_assign_wrap_05f640(ar4,auStack_54,pcVar6,ar7);
          pcVar5 = (code *)0xffffffff;
          Vec3_dtor(auStack_54,0xffffffff,pcVar6,ar7);
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x30) = 0x44960000;
            fVar7 = 1400.0;
            *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
          }
          else {
            *(undefined8 *)(ar4 + 0x30) = 0x44af000044960000;
            fVar7 = 2.95954e-42;
            *(undefined8 *)(ar4 + 0x78) = 0x84044af0000;
          }
          *(undefined4 *)(ar4 + 0x40) = 0x12;
          *(undefined4 *)(ar4 + 0x840) = 0x12;
          DAT_8c136908 = 0x12;
          *(undefined4 *)(ar4 + 0x844) = 0x36;
          DAT_8c13690c = 0x36;
          *(undefined4 *)(ar4 + 0x848) = 0x36;
          DAT_8c136910 = 0x36;
        }
      }
      else if (iVar2 == 7) {
        pcVar5 = Vec3_ctor_copy;
        Vec3_ctor_copy(auStack_24,*(int *)(ar6 + 0x14) + 0x10,pcVar6,Vec3_ctor_copy);
        pcVar6 = (code *)auStack_24;
        Vec3_assign_wrap_063818(ar4,pcVar6,pcVar6,pcVar5);
        Vec3_dtor(auStack_24,0xffffffff,pcVar6,pcVar5);
        Vec3_ctor_copy(auStack_34,*(int *)(ar6 + 0x14) + 0x10,pcVar6,pcVar5);
        Vec3_assign_wrap_05f640(ar4,auStack_34,pcVar6,pcVar5);
        Vec3_dtor(auStack_34,0xffffffff,pcVar6,pcVar5);
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x30) = 0x44960000;
          fVar7 = 1400.0;
          *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(ar4 + 0x30) = 0x44af000044960000;
          fVar7 = 2.95954e-42;
          *(undefined8 *)(ar4 + 0x78) = 0x84044af0000;
        }
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x4b;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x12;
        ar7 = (char *)0x12;
        *(undefined4 *)(ar4 + 0x840) = 0x12;
        DAT_8c136908 = 0x12;
        *(undefined4 *)(ar4 + 0x844) = 0x36;
        DAT_8c13690c = 0x36;
        *(undefined4 *)(ar4 + 0x848) = 0x36;
        DAT_8c136910 = 0x36;
        pcVar5 = (code *)0x12;
      }
    }
    else {
      iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),pcVar5,pcVar6,ar7);
      if (iVar2 == 3) {
        FUN_8c063810(*(int *)(ar6 + 4) + 0xf8,1,pcVar6,0xf8,in_stack_fffffeb0);
        ar7 = s_REACTION_WAKED_TAP_8c136cde;
        pcVar6 = (code *)0x0;
        pcVar5 = (code *)0x0;
        FUN_8c0306d4(ar4 + 0x9c,0,0,s_REACTION_WAKED_TAP_8c136cde);
      }
    }
  }
  else if (*(char *)(ar4 + 0x83) == '\x02') {
    pcVar5 = (code *)get_field_124_027930(*(undefined4 *)(ar6 + 8),ar5,ar6,ar7);
    if (pcVar5 == (code *)0x0) {
      iVar2 = get_field_13c_028d9c(*(undefined4 *)(ar6 + 4),0,pcVar6,ar7);
      if (iVar2 == 6) {
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x11;
        *(undefined4 *)(ar4 + 0x840) = 0x11;
        DAT_8c136908 = 0x11;
        *(undefined4 *)(ar4 + 0x844) = 0x36;
        DAT_8c13690c = 0x36;
        *(undefined4 *)(ar4 + 0x848) = 0x36;
        DAT_8c136910 = 0x36;
        pcVar5 = (code *)0x0;
        pcVar6 = (code *)0xd;
      }
      else if (iVar2 == 7) {
        Vec3_ctor_copy(auStack_64,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7);
        Vec3_assign_wrap_063818(ar4,auStack_64,pcVar6,ar7);
        Vec3_dtor(auStack_64,0xffffffff,pcVar6,ar7);
        Vec3_ctor_copy(auStack_74,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7);
        Vec3_assign_wrap_05f640(ar4,auStack_74,pcVar6,ar7);
        Vec3_dtor(auStack_74,0xffffffff,pcVar6,ar7);
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x30) = 0x44960000;
          fVar7 = 1400.0;
          *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(ar4 + 0x30) = 0x44af000044960000;
          fVar7 = 2.95954e-42;
          *(undefined8 *)(ar4 + 0x78) = 0x84044af0000;
        }
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x4b;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0xb;
        *(undefined4 *)(ar4 + 0x840) = 0xb;
        DAT_8c136908 = 0xb;
        *(undefined4 *)(ar4 + 0x844) = 0x2c;
        ar7 = &DAT_8c13686c;
        DAT_8c13690c = 0x2c;
        *(undefined4 *)(ar4 + 0x848) = 0x36;
        DAT_8c136910 = 0x36;
        pcVar5 = (code *)0x2c;
      }
    }
    else {
      iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),pcVar5,pcVar6,ar7);
      if (iVar2 == 3) {
        FUN_8c063810(*(int *)(ar6 + 4) + 0xf8,2,pcVar6,ar7,in_stack_fffffeb0);
        ar7 = s_REACTION_WAKED_TAP_8c136cde;
        pcVar6 = (code *)0x0;
        pcVar5 = (code *)0x0;
        FUN_8c0306d4(ar4 + 0x9c,0,0,s_REACTION_WAKED_TAP_8c136cde);
      }
    }
  }
  if (*(char *)(ar4 + 0x81) == '\x01') {
    pcVar5 = get_field_124_027930;
    iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),get_field_124_027930,pcVar6,ar7);
    if (iVar2 == 3) {
      FUN_8c063810(*(int *)(ar6 + 4) + 0xf8,1,pcVar6,ar7,in_stack_fffffeb0);
      ar7 = s_REACTION_WAKED_TAP_8c136cde;
      pcVar6 = (code *)0x0;
      pcVar5 = (code *)0x0;
      FUN_8c0306d4(ar4 + 0x9c,0,0,s_REACTION_WAKED_TAP_8c136cde);
    }
  }
  if ((*(char *)(ar4 + 0x83) == '\x02') &&
     (iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),pcVar5,pcVar6,ar7), iVar2 == 3)) {
    FUN_8c063810(*(int *)(ar6 + 4) + 0xf8,2,pcVar6,ar7,in_stack_fffffeb0);
    ar7 = s_REACTION_WAKED_TAP_8c136cde;
    pcVar6 = (code *)0x0;
    pcVar5 = (code *)0x0;
    FUN_8c0306d4(ar4 + 0x9c,0,0,s_REACTION_WAKED_TAP_8c136cde);
  }
  *(undefined1 *)(ar4 + 0x81) = 0;
  uVar3 = FUN_8c02bef8(*(undefined4 *)(ar6 + 4),pcVar5,pcVar6,ar7);
  if (((short)uVar3 == 3) &&
     (iVar2 = FUN_8c02c340(*(int *)(ar6 + 4) + 0x90,pcVar5,pcVar6,ar7), iVar2 < 0x31)) {
    (**(code **)(*(int *)ar5 + 0x178))(ar5,pcVar5,pcVar6,ar7);
    if (cVar10 == '\0') {
      fVar8 = 20.0;
    }
    else {
      fVar7 = 20.0;
      fVar8 = 25.0;
    }
    if (cVar9 == '\0' && fVar8 < fVar7) {
      (**(code **)(*(int *)ar5 + 0x178))(ar5,pcVar5,pcVar6,ar7);
      if (cVar10 == '\0') {
        fVar7 = 25.0;
      }
      else {
        fVar8 = 25.0;
        fVar7 = 5.54914e-43;
      }
      if (((((cVar9 == '\0' && fVar8 < fVar7) &&
            (iVar2 = (**(code **)(*(int *)ar5 + 0x18c))(ar5,pcVar5,pcVar6,ar7), iVar2 == 0)) &&
           (uVar3 = FUN_8c05eec4(*(undefined4 *)(ar6 + 0xc),pcVar5,pcVar6,ar7),
           (char)uVar3 == '\x02')) &&
          ((iVar2 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),pcVar5,pcVar6,ar7), iVar2 == -1 &&
           (uVar3 = FUN_8c025f68(*(int *)(ar6 + 4) + 0x78,pcVar5,pcVar6,ar7), (char)uVar3 != '\x01')
           ))) && (iVar2 = get_field_4_062878(*(undefined4 *)(ar6 + 0xc),pcVar5,pcVar6,ar7),
                  iVar2 == 1)) {
        FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,0,pcVar6,ar7);
        FUN_8c063800(*(undefined4 *)(ar6 + 0xc),0,pcVar6,ar7,in_stack_fffffeb0);
        *(undefined4 *)(ar4 + 0x854) = 0xfffffff6;
        pcVar5 = (code *)0x0;
        *(undefined4 *)(ar4 + 0x86c) = 0;
      }
    }
  }
  uVar3 = FUN_8c02bef8(*(undefined4 *)(ar6 + 4),pcVar5,pcVar6,ar7);
  iVar2 = (int)(short)uVar3;
  if (iVar2 == 3) {
    ar5_00 = iVar2;
    iVar4 = (**(code **)(*(int *)ar5 + 0x18c))(ar5,3,pcVar6,ar7);
    iVar2 = 0x80;
    if (iVar4 == 0) {
      iVar4 = FUN_8c0637d0(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),ar5_00,pcVar6,ar7);
      iVar2 = 0x7c;
      if ((iVar4 == 0) && (iVar2 = *(int *)(ar4 + 0x854), iVar2 == -10)) {
        uVar3 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),ar5_00,pcVar6,ar7);
        if (((char)uVar3 == '\0') && (iVar2 = FUN_8c02fcc4(ar4,ar6,pcVar6,ar7), iVar2 != 1)) {
          if (*(int *)(ar4 + 900) == -1) {
            FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7);
            ar7 = s_REQUEST_ATTENTION_8c136cf1;
            FUN_8c0303b8(ar4 + 0x9c,10,0,s_REQUEST_ATTENTION_8c136cf1,&DAT_8c1369bf);
            *(undefined4 *)(ar4 + 0xfc) = 0;
            pcVar6 = (code *)(ar4 + 0x9c);
            uVar3 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),pcVar6,ar7);
            *(undefined4 *)(ar4 + 900) = uVar3;
            *(undefined4 *)(ar4 + 0x14c) = 0;
            FUN_8c030870(ar4 + 0x9c,2,pcVar6,ar7);
          }
          pcVar5 = (code *)(*(int *)(ar4 + 0x86c) + 1);
          *(code **)(ar4 + 0x86c) = pcVar5;
        }
        else {
          pcVar5 = FUN_8c0637c8;
          uVar3 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),FUN_8c0637c8,pcVar6,ar7);
          if (((char)uVar3 == '\0') &&
             (pcVar5 = ar6, iVar2 = FUN_8c02fcc4(ar4,ar6,pcVar6,ar7), iVar2 == 1)) {
            pcVar5 = (code *)0x1;
            FUN_8c0637c0(*(undefined4 *)(ar6 + 0xc),1,pcVar6,ar7);
          }
        }
        uVar3 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),pcVar5,pcVar6,ar7);
        if (((char)uVar3 == '\x01') && (iVar2 = FUN_8c02fcc4(ar4,ar6,pcVar6,ar7), iVar2 == 1)) {
          if (*(int *)(ar4 + 900) == -1) {
            FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7);
            ar7_00 = s_EVENT_GET_SPRINKLER_8c136d03;
            FUN_8c0303b8(ar4 + 0x9c,0x2a,0,s_EVENT_GET_SPRINKLER_8c136d03,&DAT_8c1369bf);
            *(undefined4 *)(ar4 + 0xfc) = 0;
            pcVar6 = (code *)(ar4 + 0x9c);
            uVar3 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),pcVar6,ar7_00);
            *(undefined4 *)(ar4 + 900) = uVar3;
            *(undefined4 *)(ar4 + 0x14c) = 1;
          }
          if ((*(int *)(ar4 + 0x14c) != 0) && (*(int *)(ar4 + 900) != -1)) {
            *(undefined4 *)(ar4 + 4) = 0xd;
            *(undefined4 *)(ar4 + 8) = 0x5f;
            *(undefined4 *)(ar4 + 0xc) = 0;
            *(undefined4 *)(ar4 + 0x840) = 0x12;
            DAT_8c136908 = 0x12;
            *(undefined4 *)(ar4 + 0x844) = 0xb;
            DAT_8c13690c = 0xb;
            *(undefined4 *)(ar4 + 0x848) = 0xc;
            DAT_8c136910 = 0xc;
            iVar2 = *(int *)(ar6 + 0x14) + 0x10;
            pcVar6 = (code *)auStack_84;
            Vec3_ctor_copy(pcVar6,iVar2,pcVar6,iVar2);
            Vec3_assign_wrap_063818(ar4,auStack_84,pcVar6,iVar2);
            Vec3_dtor(auStack_84,0xffffffff,pcVar6,iVar2);
            if (cVar10 == '\0') {
              *(undefined4 *)(ar4 + 0x30) = 0x44960000;
            }
            else {
              *(undefined8 *)(ar4 + 0x30) = 0xbc44960000;
            }
            Vec3_ctor_copy(auStack_94,*(int *)(ar6 + 0x14) + 0x10,pcVar6,iVar2);
            Vec3_assign_wrap_05f640(ar4,auStack_94,pcVar6,iVar2);
            Vec3_dtor(auStack_94,0xffffffff,pcVar6,iVar2);
            if (cVar10 == '\0') {
              *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
            }
            else {
              *(undefined8 *)(ar4 + 0x78) = 0x8044af0000;
            }
            *(undefined1 *)(ar4 + 0x80) = 0;
          }
        }
        iVar2 = 300;
        if (300 < *(int *)(ar4 + 0x86c)) {
          uVar3 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),*(undefined4 *)(ar6 + 0xc),pcVar6,
                               *(int *)(ar4 + 0x86c));
          iVar2 = (int)(char)uVar3;
          if (iVar2 == 0) {
            *(undefined4 *)(ar4 + 0x854) = 0;
            iVar2 = 0x86c;
            *(undefined4 *)(ar4 + 0x86c) = 0;
          }
        }
      }
    }
  }
  return iVar2;
}

__asm__(".globl _s_REACTION_WAKED_TAP_062b14\n.set _s_REACTION_WAKED_TAP_062b14, _s_REACTION_WAKED_TAP_062b14_def\n");
