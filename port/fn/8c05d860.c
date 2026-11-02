#include "../decls.h"
undefined4 s_STATUS_SICK_05d86e_def(int *ar4,code *ar5,code *ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  code *pcVar11;
  int *ar5_00;
  undefined *ar6_00;
  int iVar12;
  code *pcVar13;
  char *pcVar14;
  int ar7_00;
  undefined4 in_stack_fffffe88;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [20];
  
  pcVar4 = ar5;
  pcVar11 = ar6;
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  puVar10 = auStack_50;
  puVar7 = &DAT_8c136948;
  iVar9 = 0x10;
  do {
    puVar8 = puVar7 + 1;
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 2;
    puVar10[1] = *puVar8;
    puVar10 = puVar10 + 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pcVar13 = FUN_8c02602c;
  uVar2 = FUN_8c02602c(*(int *)(ar6 + 0x18),pcVar4,pcVar11,FUN_8c02602c);
  if ((uVar2 & 0xffff) == 3) {
    uVar3 = FUN_8c02bef8(*(int *)(ar6 + 4),3,pcVar11,pcVar13);
    (**(code **)(*ar4 + 0x18))(ar4,*(int *)(ar6 + 0x18),(int)(short)uVar3,pcVar13);
  }
  DAT_8c136908 = ar4[0x210];
  pcVar14 = (char *)(uint)ar4[0x211];
  ar6_00 = &DAT_8c13686c;
  uVar3 = 0xa4;
  DAT_8c136910 = ar4[0x212];
  DAT_8c13690c = pcVar14;
  iVar9 = get_field_13c_028d9c(*(int *)(ar6 + 4),0xa4,&DAT_8c13686c,pcVar14);
  ar4[0x21d] = iVar9;
  uVar3 = FUN_8c02bef8(*(int *)(ar6 + 4),uVar3,ar6_00,pcVar14);
  FUN_8c030d04(ar4 + 0x27,(int)(short)uVar3,ar6_00,pcVar14);
  if ('\x01' < (char)ar4[0x26]) {
    FUN_8c05d7f8(ar4 + 0x27,0,ar6_00,pcVar14);
  }
  FUN_8c05ff40(ar4,ar5,ar6,pcVar14);
  s_STATUS_SUCKED_0660da(ar4,ar5,ar6,pcVar14);
  pcVar4 = ar6;
  s_STATUS_LASTONE_066468(ar4,ar5,ar6,pcVar14);
  pcVar11 = get_field_13c_028d9c;
  iVar9 = get_field_13c_028d9c(*(int *)(ar6 + 4),get_field_13c_028d9c,pcVar4,pcVar14);
  if ((((iVar9 == 7) &&
       (uVar3 = FUN_8c025f68(*(int *)(ar6 + 4) + 0x78,pcVar11,pcVar4,pcVar14), (char)uVar3 == '\x01'
       )) && (iVar9 = get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar11,pcVar4,pcVar14), iVar9 == 0))
     && (ar4[0xe1] == -1)) {
    uVar2 = FUN_8c02602c(*(int *)(ar6 + 0x18),pcVar11,pcVar4,pcVar14);
    uVar3 = 0x43;
    iVar9 = libgcc_divide_helper_01031c(uVar2 & 0xffff,0x43,pcVar4,pcVar14);
    if ((iVar9 == 0x16) && (ar4[1] == 0)) {
      uVar3 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x78,uVar3,pcVar4,pcVar14);
      FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar3,pcVar4,pcVar14);
      pcVar14 = s_STATUS_SICK_8c1369c1;
      FUN_8c0303b8(ar4 + 0x27,0x12,0,s_STATUS_SICK_8c1369c1,&DAT_8c1369bf);
    }
  }
  pcVar4 = ar5;
  pcVar11 = ar6;
  s_IDLEACTION_SNEEZE_065e70(ar4,ar5,ar6,pcVar14);
  iVar9 = get_field_124_027930(*(int *)(ar6 + 8),pcVar4,pcVar11,pcVar14);
  if (((iVar9 != 2) &&
      (iVar9 = get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14), iVar9 == 0)) &&
     ((ar4[1] == 0 &&
      (iVar9 = get_field_178_035734(*(int *)(ar6 + 8),pcVar4,pcVar11,pcVar14), iVar9 == 0)))) {
    pcVar4 = ar5;
    pcVar11 = ar6;
    FUN_8c0620d4(ar4,ar5,ar6,pcVar14);
  }
  iVar9 = get_field_124_027930(*(int *)(ar6 + 8),pcVar4,pcVar11,pcVar14);
  if (iVar9 != 2) {
    pcVar4 = ar6;
    FUN_8c02f20c(ar4,ar6,pcVar11,pcVar14);
  }
  pcVar14 = (char *)get_field_4_05eed8(ar4,pcVar4,pcVar11,pcVar14);
  pcVar4 = ar5;
  pcVar11 = ar6;
  s_STATUS_SNORE_05f668(ar4,ar5,ar6,pcVar14);
  iVar9 = get_field_124_027930(*(int *)(ar6 + 8),pcVar4,pcVar11,pcVar14);
  if (iVar9 != 2) {
    pcVar13 = s_REQUEST_ATTENTION_063846;
    pcVar4 = ar5;
    pcVar11 = ar6;
    s_REQUEST_ATTENTION_063846(ar4,ar5,ar6,s_REQUEST_ATTENTION_063846);
    iVar9 = get_field_178_035734(*(int *)(ar6 + 8),pcVar4,pcVar11,pcVar13);
    pcVar14 = (char *)pcVar13;
    if ((iVar9 == 0) &&
       (iVar9 = get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar13),
       pcVar14 = (char *)pcVar13, iVar9 == 0)) {
      pcVar4 = ar5;
      pcVar11 = ar6;
      s_REACTION_TITILLATE_064bb8(ar4,ar5,ar6,pcVar13);
      pcVar14 = (char *)pcVar13;
    }
    pcVar4 = (code *)get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
    if ((pcVar4 == (code *)0x0) && (ar4[1] != 0xd)) {
      s_GRATIFIC_RID_HOT_06522a(ar4,ar5,ar6,pcVar14);
      pcVar4 = ar5;
      pcVar11 = ar6;
      s_REACTION_TEMP_LACK_0628aa(ar4,ar5,ar6,pcVar14);
    }
    iVar9 = get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
    if (iVar9 == 0) {
      FUN_8c02e8e0(ar4 + 0x207,1,pcVar11,pcVar14);
      pcVar4 = ar5;
      pcVar11 = ar6;
      s_REACTION_WAKED_TAP_062b14(ar4,ar5,ar6,pcVar14);
    }
  }
  iVar9 = get_field_124_027930(*(int *)(ar6 + 8),pcVar4,pcVar11,pcVar14);
  if (iVar9 == 0) {
    iVar9 = get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
    if (iVar9 == 0) {
      uVar2 = get_field_a0_035724(*(int *)(ar6 + 0x18),pcVar4,pcVar11,pcVar14);
      pcVar4 = (code *)(uVar2 & 0xff);
      if ((pcVar4 == (code *)0x2) && (ar4[1] == 0)) {
        iVar9 = get_field_24_05eed0(*(int *)(ar6 + 4) + 0xf8,2,pcVar11,pcVar14);
        if (iVar9 == 1) {
          uVar2 = FUN_8c02602c(*(int *)(ar6 + 0x18),pcVar4,pcVar11,pcVar14);
          pcVar4 = (code *)0x7;
          iVar9 = libgcc_divide_helper_01031c(uVar2 & 0xffff,7,pcVar11,pcVar14);
          if ((iVar9 == 1) && (ar4[0xe1] == -1)) {
            pcVar14 = s_REQUEST_SLEEP_8c1369cd;
            pcVar11 = (code *)0x0;
            pcVar4 = (code *)0x0;
            FUN_8c0306d4(ar4 + 0x27,0,0,s_REQUEST_SLEEP_8c1369cd);
          }
        }
        uVar3 = FUN_8c05eec4(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
        if ((char)uVar3 == '\0') {
          uVar2 = FUN_8c02602c(*(int *)(ar6 + 0x18),pcVar4,pcVar11,pcVar14);
          pcVar4 = (code *)0x7;
          iVar9 = libgcc_divide_helper_01031c(uVar2 & 0xffff,7,pcVar11,pcVar14);
          if ((iVar9 == 1) && (ar4[0xe1] == -1)) {
            if (ar4[0x226] == 1) {
              pcVar14 = s_REQUEST_WAKE_UP_8c1369db;
              pcVar11 = (code *)0x0;
              pcVar4 = (code *)0x21;
              FUN_8c0306d4(ar4 + 0x27,0x21,0,s_REQUEST_WAKE_UP_8c1369db);
            }
            else {
              pcVar14 = s_REQUEST_WANT_LIGHT_8c1369eb;
              pcVar11 = (code *)0x0;
              pcVar4 = (code *)0x21;
              FUN_8c0306d4(ar4 + 0x27,0x21,0,s_REQUEST_WANT_LIGHT_8c1369eb);
            }
            ar4[0x226] = 0;
          }
        }
        uVar3 = FUN_8c05eec4(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
        if ((*(char *)((int)ar4 + 0x9a) != (char)uVar3) &&
           (uVar3 = FUN_8c02602c(*(int *)(ar6 + 0x18),pcVar4,pcVar11,pcVar14), 3 < (ushort)uVar3)) {
          uVar3 = FUN_8c05eec4(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
          if ((char)uVar3 == '\0') {
            pcVar14 = s_STATUS_LIGHT_OFF_8c1369fe;
            pcVar11 = (code *)0x0;
            pcVar4 = (code *)0xa;
            FUN_8c0306d4(ar4 + 0x27,10,0,s_STATUS_LIGHT_OFF_8c1369fe);
          }
          else {
            pcVar4 = (code *)FUN_8c05eec4(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
            if (*(char *)((int)ar4 + 0x9a) < (char)pcVar4) {
              pcVar14 = s_STATUS_LIGHT_8c136a0f;
              pcVar11 = (code *)0x0;
              pcVar4 = (code *)0x0;
              FUN_8c0306d4(ar4 + 0x27,0,0,s_STATUS_LIGHT_8c136a0f);
            }
          }
        }
      }
    }
    iVar9 = get_field_124_027930(*(int *)(ar6 + 8),pcVar4,pcVar11,pcVar14);
    if (iVar9 != 2) {
      if ((((ar4[1] != 7) &&
           (iVar9 = get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14), iVar9 == 0)) &&
          ('\x01' < (char)ar4[0x26])) &&
         (iVar9 = get_field_770_05eeb8(ar4 + 0x27,pcVar4,pcVar11,pcVar14), iVar9 == 1)) {
        if (ar4[0xe1] == -1) {
          pcVar11 = (code *)(ar4 + 0x27);
          pcVar4 = (code *)(uint)ar4[0xe2];
          iVar9 = FUN_8c0f8320(0x8c35468c,pcVar4,pcVar11,pcVar14);
          ar4[0xe1] = iVar9;
        }
        else {
          pcVar4 = (code *)0x2;
          FUN_8c030870(ar4 + 0x27,2,pcVar11,pcVar14);
        }
      }
      uVar3 = FUN_8c05eeb0(*(int *)(ar6 + 4) + 0xa8,pcVar4,pcVar11,pcVar14);
      if ((char)uVar3 == '\x01') {
        pcVar4 = get_field_140_025f70;
        iVar9 = get_field_140_025f70(*(int *)(ar6 + 4),get_field_140_025f70,pcVar11,pcVar14);
        if (iVar9 == 0) {
          *(undefined1 *)(ar4 + 0x26) = 4;
        }
      }
    }
  }
  if (((ar4[0x10] == 0) || (ar4[0x10] == 3)) &&
     ((ar4[1] != 7 &&
      ((pcVar4 = (code *)get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14),
       pcVar4 == (code *)0x0 && (pcVar14 = (char *)0x1, '\x01' < (char)ar4[0x26])))))) {
    pcVar14 = (char *)0x83;
    pcVar11 = (code *)(int)*(char *)((int)ar4 + 0x83);
    pcVar4 = (code *)(int)*(char *)((int)ar4 + 0x83);
    if ((pcVar4 == (code *)0x0) || (pcVar4 == (code *)0x1)) {
      pcVar4 = ar5;
      pcVar11 = ar6;
      FUN_8c0652f4(ar4,ar5,ar6,0x83);
    }
  }
  if (((ar4[1] != 1) && (iVar9 = (int)(char)ar4[0x26], iVar9 < 10)) && (-1 < iVar9)) {
                    
    switch(iVar9) {
    case 0:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 0x2e;
      ar4[0x10] = 0x2e;
      DAT_8c136908 = 0x2e;
      ar4[0x211] = 0x36;
      DAT_8c13690c = (char *)0x36;
      ar4[0x212] = 0x36;
      DAT_8c136910 = 0x36;
      iVar9 = (**(code **)(*(int *)(*(int *)ar6 + 8) + 0x18c))(*(int *)ar6,pcVar4,pcVar11,0x36);
      if (iVar9 == 0) {
        *(undefined1 *)(ar4 + 0x26) = 1;
      }
      break;
    case 1:
      if (ar4[0x10] != 0x18) {
        uVar3 = FUN_8c05eea8(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
        *(char *)((int)ar4 + 0x99) = (char)uVar3;
        ar4[3] = 0;
        ar4[1] = 0xd;
        ar4[2] = 99;
        ar4[0x210] = 0x18;
        ar4[0x10] = 0x18;
        DAT_8c136908 = 0x18;
        ar4[0x211] = 0x36;
        DAT_8c13690c = (char *)0x36;
        ar4[0x212] = 0x36;
        pcVar4 = (code *)0x36;
        DAT_8c136910 = 0x36;
        FUN_8c0c4e2c(FUN_8c0c4e2c,0x36,pcVar11,pcVar14);
      }
      break;
    case 2:
      uVar3 = FUN_8c05eea8(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
      *(char *)((int)ar4 + 0x99) = (char)uVar3;
      iVar9 = get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
      if (iVar9 == 7) {
        pcVar4 = (code *)(uint)ar4[0x21f];
        if (pcVar4 == (code *)0x1) {
          *(undefined1 *)(ar4 + 0x26) = 8;
        }
        if (ar4[0x10] != 0x17) {
          ar4[1] = 0xd;
          ar4[2] = 99;
          ar4[3] = 0;
          ar4[0x10] = 0x17;
          pcVar11 = (code *)0x17;
          ar4[0x210] = 0x17;
          DAT_8c136908 = 0x17;
          ar4[0x211] = 0x36;
          DAT_8c13690c = (char *)0x36;
          ar4[0x212] = 0x36;
          pcVar4 = (code *)&DAT_8c13686c;
          DAT_8c136910 = 0x36;
        }
      }
      break;
    case 3:
      break;
    case 4:
      FUN_8c02cb7c(*(int *)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14,in_stack_fffffe88);
      if (((ar4[1] == 7) || (ar4[0x10] == 8)) ||
         (pcVar13 = (code *)(uint)ar4[0x10], pcVar13 == (code *)0x9)) {
        ar4[1] = 0;
        ar4[2] = 0x4b;
        ar4[3] = 0;
        ar4[0x10] = 0;
        pcVar13 = FUN_8c02cb7c;
        FUN_8c02cb7c(*(int *)(ar6 + 4) + 0xa8,0,0x4b,FUN_8c02cb7c);
      }
      pcVar11 = *(code **)(ar6 + 0xc);
      pcVar4 = get_field_40_03598c;
      iVar9 = get_field_40_03598c(pcVar11,get_field_40_03598c,pcVar11,pcVar13);
      if ((iVar9 == 7) && (ar4[0x10] != 0x17)) {
        if (ar4[0x21f] == 1) {
          *(undefined1 *)(ar4 + 0x26) = 8;
        }
        FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,1,pcVar11,pcVar13);
        ar4[1] = 0xd;
        ar4[2] = 99;
        ar4[3] = 0;
        ar4[0x10] = 0x17;
        ar4[0x210] = 0x17;
        DAT_8c136908 = 0x17;
        ar4[0x211] = 0x36;
        DAT_8c13690c = (char *)0x36;
        ar4[0x212] = 0x36;
        pcVar4 = (code *)0x36;
        DAT_8c136910 = 0x36;
      }
      break;
    default:
      pcVar4 = (code *)0x0;
      FUN_8c02cb7c(*(int *)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14,in_stack_fffffe88);
      break;
    case 7:
      pcVar13 = FUN_8c02cb7c;
      FUN_8c02cb7c(*(int *)(ar6 + 4) + 0xa8,0,pcVar11,FUN_8c02cb7c);
      pcVar11 = (code *)(ar4 + 0x10);
      pcVar4 = *(code **)pcVar11;
      if ((pcVar4 != (code *)0x2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        ar4[0x10] = 2;
        if (ar4[0x1b] != 0) {
          (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],pcVar4,pcVar11,pcVar13);
          ar4[0x1b] = 0;
        }
      }
      break;
    case 8:
      FUN_8c02cb7c(*(int *)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14,in_stack_fffffe88);
      FUN_8c02c330(*(int *)(ar6 + 4),0,pcVar11,pcVar14,in_stack_fffffe88);
      FUN_8c02c330(*(int *)(ar6 + 4) + 0x18,0,pcVar11,pcVar14,in_stack_fffffe88);
      FUN_8c02c330(*(int *)(ar6 + 4) + 0x60,0,pcVar11,pcVar14,in_stack_fffffe88);
      pcVar4 = (code *)0x0;
      FUN_8c02c330(*(int *)(ar6 + 4) + 0x48,0,pcVar11,pcVar14,in_stack_fffffe88);
      if (ar4[0x21f] == 1) {
        *(undefined1 *)(ar4 + 0x26) = 9;
      }
      uVar3 = get_field_a0_035724(*(int *)(ar6 + 0x18),pcVar4,pcVar11,pcVar14);
      if ((char)uVar3 == '\x03') {
        pcVar4 = (code *)0x9;
        *(undefined1 *)(ar4 + 0x26) = 9;
      }
      if (*(char *)((int)ar4 + 0x879) == '\x02') {
        if ((ar4[0x10] == 0x30) || (ar4[0x21f] == 1)) {
          ar4[1] = 0;
          ar4[2] = 0x4b;
          ar4[3] = 0;
          ar4[0x10] = 0;
          ar4[0x210] = 0;
          DAT_8c136908 = 0;
          ar4[0x211] = 0x36;
          DAT_8c13690c = (char *)0x36;
          ar4[0x212] = 0x36;
          DAT_8c136910 = 0x36;
        }
        else {
          ar4[0x10] = 0x30;
          ar4[1] = 0xd;
          ar4[2] = 99;
          ar4[3] = 0;
          ar4[0x10] = 0x30;
          ar4[0x210] = 0x30;
          pcVar11 = (code *)0x9c;
          pcVar4 = (code *)0x30;
          DAT_8c136908 = 0x30;
          ar4[0x211] = 0x36;
          DAT_8c13690c = (char *)0x36;
          ar4[0x212] = 0x36;
          DAT_8c136910 = 0x36;
        }
      }
      else {
        *(undefined1 *)(ar4 + 0x26) = 9;
        if (*(char *)((int)ar4 + 0x879) != '\x02') {
          s_STATUS_FORMAT_030306(ar4 + 0x27,pcVar4,pcVar11,pcVar14);
        }
        FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,1,pcVar11,pcVar14);
        FUN_8c02cbbc(*(int *)(ar6 + 4) + 0x90,1,pcVar11,pcVar14);
        FUN_8c02c330(*(int *)(ar6 + 4) + 0x60,0,pcVar11,pcVar14,in_stack_fffffe88);
        ar4[0x10] = 0x2c;
        ar4[1] = 0xd;
        ar4[2] = 99;
        ar4[3] = 0;
        ar4[0x10] = 0x2c;
        ar4[0x210] = 0x2c;
        DAT_8c136908 = 0x2c;
        ar4[0x211] = 0x36;
        DAT_8c13690c = (char *)0x36;
        ar4[0x212] = 0x36;
        pcVar4 = (code *)0xa4;
        DAT_8c136910 = 0x36;
      }
      break;
    case 9:
      FUN_8c02cb7c(*(int *)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14,in_stack_fffffe88);
      FUN_8c02c330(*(int *)(ar6 + 4) + 0x78,0,pcVar11,FUN_8c02c330,in_stack_fffffe88);
      pcVar4 = (code *)0x0;
      pcVar11 = *(code **)(ar6 + 4);
      FUN_8c02ce00(pcVar11 + 0x78,0,pcVar11,0,in_stack_fffffe88);
      if (((ar4[0x10] == 0x30) || (ar4[0x10] == 0x17)) || (ar4[0x10] == 0x2c)) {
        ar4[1] = 0;
        ar4[2] = 0x4b;
        ar4[3] = 0;
        ar4[0x10] = 0;
        ar4[0x210] = 0;
        DAT_8c136908 = 0;
        ar4[0x211] = 0x36;
        DAT_8c13690c = (char *)0x36;
        pcVar11 = (code *)0x848;
        pcVar4 = (code *)0x36;
        ar4[0x212] = 0x36;
        DAT_8c136910 = 0x36;
      }
    }
  }
  FUN_8c0301f8(ar4 + 0x27,pcVar4,pcVar11,FUN_8c0301f8);
  ar7_00 = 0x91;
  iVar12 = (int)*(char *)((int)ar4 + 0x91);
  iVar9 = (int)*(char *)((int)ar4 + 0x91);
  get_field_124_027930(*(int *)(ar6 + 8),iVar9,iVar12,0x91);
  get_field_40_05eea0(ar4,iVar9,iVar12,ar7_00);
  s_EVENT_ENDING_0656da(ar4,ar5,ar6,ar7_00);
  pcVar4 = ar6;
  FUN_8c065cb0(ar4,ar5,ar6,ar7_00);
  iVar9 = get_field_124_027930(*(int *)(ar6 + 8),ar5,pcVar4,ar7_00);
  if (iVar9 != 2) {
    pcVar11 = ar6;
    FUN_8c0665a0(ar4,ar6,pcVar4,ar7_00);
    FUN_8c05ee90(*(int *)(ar6 + 8),pcVar11,pcVar4,ar7_00);
    if (ar4[1] == 2) {
      iVar9 = FUN_8c02c518(*(int *)(ar6 + 4),pcVar11,pcVar4,ar7_00);
      if (iVar9 == 0) {
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar9 == 1) {
        ar7_00 = ar4[0xe1];
        if (ar7_00 == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar9 == 3) {
        if (ar4[0xe1] == -1) {
          ar7_00 = 0x40;
          pcVar4 = (code *)0x0;
          ar4[0x10] = 0;
        }
      }
      else if (iVar9 == 4) {
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
        uVar3 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x60,*(int *)(ar6 + 4) + 0x60,pcVar4,ar7_00);
        in_stack_fffffe88 = CONCAT13((char)uVar3,(int3)in_stack_fffffe88);
        if ((char)uVar3 < '\x04') {
          ar4[0x10] = 0;
        }
      }
    }
    ar5 = (code *)(ar4 + 0x10);
    if (0x35 < *(int *)ar5) {
      ar4[0x10] = 0;
      ar4[1] = 0;
      ar4[0xe] = 2;
    }
    if ((*(char *)((int)ar4 + 0x91) == '\x01') ||
       (iVar9 = get_field_124_027930(*(int *)(ar6 + 8),ar5,pcVar4,ar7_00), ar4[0x10] != iVar9)) {
      pcVar4 = (code *)0x1;
      ar5 = (code *)(uint)ar4[0x10];
      FUN_8c031b08(*(int *)(ar6 + 8),ar5,1,ar7_00);
    }
  }
  *(undefined1 *)((int)ar4 + 0x83) = 4;
  uVar3 = FUN_8c025f68(*(int *)(ar6 + 4) + 0x78,ar5,pcVar4,ar7_00);
  cVar1 = (char)uVar3;
  uVar3 = CONCAT13((char)((uint)in_stack_fffffe88 >> 0x18),CONCAT12(cVar1,(short)in_stack_fffffe88))
  ;
  iVar9 = (int)cVar1;
  if (cVar1 == '\x01') {
    iVar9 = 1;
    FUN_8c05ee84(*(int *)(ar6 + 0xc),1,pcVar4,ar7_00);
  }
  iVar12 = FUN_8c02c518(*(int *)(ar6 + 4),iVar9,pcVar4,ar7_00);
  if (iVar12 != -1) {
    iVar9 = 0;
    FUN_8c05ee78(*(int *)(ar6 + 0xc),0,pcVar4,ar7_00);
  }
  uVar2 = FUN_8c02602c(*(int *)(ar6 + 0x18),iVar9,pcVar4,ar7_00);
  uVar2 = uVar2 & 0xffff;
  if (ar4[0x219] != uVar2) {
    uVar5 = FUN_8c02602c(*(int *)(ar6 + 0x18),uVar2,pcVar4,ar7_00);
    ar4[0x219] = uVar5 & 0xffff;
    uVar6 = FUN_8c025f68(*(int *)(ar6 + 4) + 0x78,uVar2,pcVar4,ar7_00);
    uVar3 = CONCAT22((short)((uint)uVar3 >> 0x10),CONCAT11((char)uVar6,(char)uVar3));
    iVar9 = (int)(char)uVar6;
    if (iVar9 == 1) {
      iVar9 = 0;
      FUN_8c02cbbc(*(int *)(ar6 + 4) + 0x90,0,pcVar4,FUN_8c02cbbc);
    }
    iVar12 = *(int *)(ar6 + 0xc);
    pcVar4 = get_field_d0_05ee6c;
    uVar2 = get_field_d0_05ee6c(iVar12,iVar9,get_field_d0_05ee6c,iVar12);
    if (uVar2 == 0) {
      uVar2 = 0;
      FUN_8c05ee64(*(int *)(ar6 + 4) + 0xf8,0,pcVar4,iVar12,uVar3);
    }
    iVar9 = FUN_8c02c340(*(int *)(ar6 + 4) + 0x90,uVar2,pcVar4,iVar12);
    if (iVar9 < 0x31) {
      FUN_8c0e9668(*(int *)(ar6 + 0xc),uVar2,pcVar4,iVar12);
    }
    else {
      FUN_8c0e9690(*(int *)(ar6 + 0xc),uVar2,pcVar4,iVar12);
    }
  }
  if (((ar4[0x10] != 0x23) || (ar4[0x10] != 0x16)) || (ar4[0x10] != 0x27)) {
    ar4[0x23] = 0;
  }
  *(undefined1 *)((int)ar4 + 0x82) = 0;
  *(undefined1 *)(ar4 + 0x21) = 0;
  *(undefined1 *)((int)ar4 + 0x85) = 0;
  uVar6 = 0x87;
  *(undefined1 *)((int)ar4 + 0x87) = 0;
  uVar3 = FUN_8c05eec4(*(int *)(ar6 + 0xc),uVar2,pcVar4,0x87);
  *(char *)((int)ar4 + 0x9a) = (char)uVar3;
  iVar9 = get_field_124_027930(*(int *)(ar6 + 8),uVar2,pcVar4,uVar6);
  if ((iVar9 == 2) && (ar4[0x25] = 0x36, ar4[0xe1] != -1)) {
    ar5_00 = ar4 + 0x37;
    iVar9 = FUN_8c05edfc(s_start_8c136a1c,ar5_00,pcVar4,uVar6);
    if (iVar9 == 0) {
      FUN_8c0f8214(0x8c35468c,ar5_00,pcVar4,uVar6);
      FUN_8c030870(ar4 + 0x27,3,pcVar4,uVar6);
      ar4[2] = 0;
      ar4[3] = 0;
      *(undefined1 *)(ar4 + 0x20) = 1;
      ar4[0xe1] = -1;
      ar4[0x3f] = 0;
    }
  }
  uVar3 = Vec3_dtor(auStack_30,0xffffffff,pcVar4,uVar6);
  return uVar3;
}

__asm__(".globl _s_STATUS_SICK_05d86e\n.set _s_STATUS_SICK_05d86e, _s_STATUS_SICK_05d86e_def\n");
