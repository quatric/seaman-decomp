#include "../decls.h"
undefined ** s_REQUEST_ATTENTION_063846_def(code *ar4,int *ar5,code *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *ar7_00;
  int iVar2;
  undefined **ppuVar3;
  int *ar5_00;
  int iVar4;
  code *ar5_01;
  undefined4 uVar5;
  code *pcVar6;
  char *ar7_01;
  float fVar7;
  undefined8 in_dr0;
  float fVar8;
  code *pcVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_fffffe84;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = *(undefined4 *)(ar6 + 0xc);
  ar5_00 = ar5;
  FUN_8c0637c8(uVar5,ar5,uVar5,ar7);
  FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5_00,uVar5,ar7);
  FUN_8c0637d0(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),ar5_00,uVar5,ar7);
  get_field_a0_035724(*(undefined4 *)(ar6 + 0x18),ar5_00,uVar5,ar7);
  uVar1 = FUN_8c02bef8(*(undefined4 *)(ar6 + 4),ar5_00,uVar5,ar7);
  iVar4 = (int)(short)uVar1;
  if (iVar4 < 4) {
    return (undefined **)(int)(short)uVar1;
  }
  ar7_00 = (code *)get_field_a0_035724(*(undefined4 *)(ar6 + 0x18),iVar4,uVar5,
                                       *(undefined4 *)(ar6 + 0x18));
  pcVar6 = (code *)((uint)ar7_00 & 0xff);
  if (pcVar6 != (code *)0x2) {
    return (undefined **)pcVar6;
  }
  iVar2 = get_field_178_035734(*(undefined4 *)(ar6 + 8),iVar4,2,ar7_00);
  if (iVar2 != 0) {
    return (undefined **)iVar2;
  }
  uVar1 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),iVar4,pcVar6,ar7_00);
  ar5_01 = (code *)(int)(char)uVar1;
  if (ar5_01 == (code *)0x0) {
    uVar1 = (**(code **)(*ar5 + 0x148))(ar5,0,pcVar6,ar7_00);
    iVar4 = get_field_ac_062880(uVar1,ar5_01,pcVar6,ar7_00);
    if (iVar4 == 4) {
      ar5_01 = *(code **)(ar6 + 0x18);
      pcVar6 = (code *)FUN_8c0637d0(*(undefined4 *)(ar5_01 + 0x7cc),ar5_01,pcVar6,ar7_00);
      if (((pcVar6 == (code *)0x0) &&
          (ar5_01 = (code *)FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5_01,0,ar7_00),
          ar5_01 == (code *)0xffffffff)) &&
         (iVar4 = get_field_124_027930(*(undefined4 *)(ar6 + 8),0xffffffff,pcVar6,ar7_00),
         iVar4 == 0)) {
        ar5_01 = *(code **)(ar6 + 0x18);
        uVar1 = get_field_a0_035724(ar5_01,ar5_01,pcVar6,ar7_00);
        if ((((char)uVar1 == '\x02') &&
            (uVar1 = FUN_8c035e8c(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_00),
            (char)uVar1 == '\x01')) &&
           ((ar4[0x879] == (code)0x0 &&
            ((iVar4 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_00),
             iVar4 == 0 &&
             (uVar1 = FUN_8c05eec4(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_00),
             (char)uVar1 == '\x02')))))) {
          iVar4 = FUN_8c02c340(*(int *)(ar6 + 4) + 0x90,ar5_01,pcVar6,ar7_00);
          uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
          if (iVar4 < 0x2d) {
            (**(code **)(*ar5 + 0x178))(ar5,ar5_01,pcVar6,ar7_00);
            if (cVar11 == '\0') {
              in_dr0 = CONCAT44(0x41a80000,uVar1);
            }
            else {
              in_dr0 = 0xfc41a80000;
            }
            if (cVar10 != '\0' || (float)((ulonglong)in_dr0 >> 0x20) <= (float)in_dr0) {
              (**(code **)(*ar5 + 0x178))(ar5,ar5_01,pcVar6,ar7_00);
              if (cVar11 == '\0') {
                in_dr0 = CONCAT44(0x41c80000,(int)((ulonglong)in_dr0 >> 0x20));
              }
              else {
                in_dr0 = 0x18841c80000;
              }
              if (cVar10 == '\0' && (float)in_dr0 < (float)((ulonglong)in_dr0 >> 0x20)) {
                (**(code **)(*ar5 + 0x188))(ar5,ar5_01,pcVar6,ar7_00);
                if (cVar11 == '\0') {
                  in_dr0 = CONCAT44(0x42980000,(int)((ulonglong)in_dr0 >> 0x20));
                }
                else {
                  in_dr0 = 0x8c025f6842980000;
                }
                if (((cVar10 == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < (float)in_dr0) &&
                    (uVar1 = FUN_8c025f68(*(int *)(ar6 + 4) + 0x78,ar5_01,pcVar6,ar7_00),
                    (char)uVar1 != '\x01')) &&
                   (iVar4 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_00),
                   iVar4 == 0)) {
                  FUN_8c035e84(*(undefined4 *)(ar6 + 0xc),0,pcVar6,ar7_00);
                  ar4[0x879] = (code)0x1;
                  *(undefined4 *)(ar4 + 0x86c) = 0;
                  ar5_01 = (code *)0x0;
                  FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,0,pcVar6,ar7_00);
                  *(undefined4 *)(ar4 + 4) = 0xd;
                  *(undefined4 *)(ar4 + 8) = 0x5f;
                  *(undefined4 *)(ar4 + 0xc) = 0;
                  *(undefined4 *)(ar4 + 0x840) = 0x12;
                  ar7_00 = (code *)0x12;
                  DAT_8c136908 = 0x12;
                  *(undefined4 *)(ar4 + 0x844) = 0xb;
                  DAT_8c13690c = 0xb;
                  pcVar6 = (code *)0xc;
                  *(undefined4 *)(ar4 + 0x848) = 0xc;
                  DAT_8c136910 = 0xc;
                }
              }
            }
          }
        }
      }
    }
  }
  fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
  iVar4 = FUN_8c0637d0(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),ar5_01,pcVar6,ar7_00);
  if (iVar4 == 0) {
    iVar4 = *ar5;
    uVar1 = (**(code **)(iVar4 + 0x148))(ar5,iVar4,pcVar6,ar7_00);
    ar7_00 = get_field_ac_062880;
    ar5_01 = (code *)get_field_ac_062880(uVar1,iVar4,pcVar6,get_field_ac_062880);
    pcVar6 = ar5_01;
    if ((ar5_01 == (code *)0x4) &&
       (uVar1 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),4,4,ar7_00), (char)uVar1 == '\0')) {
      pcVar6 = FUN_8c05eec4;
      uVar1 = FUN_8c05eec4(*(undefined4 *)(ar6 + 0xc),ar5_01,FUN_8c05eec4,ar7_00);
      if (((char)uVar1 == '\x02') &&
         (iVar4 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5_01,pcVar6,ar7_00), iVar4 == -1)) {
        ar5_01 = get_field_124_027930;
        iVar4 = get_field_124_027930(*(undefined4 *)(ar6 + 8),get_field_124_027930,pcVar6,ar7_00);
        if ((((iVar4 == 0) &&
             (uVar1 = get_field_a0_035724(*(undefined4 *)(ar6 + 0x18),ar5_01,pcVar6,ar7_00),
             (char)uVar1 == '\x02')) && (ar4[0x879] == (code)0x0)) &&
           (((ar5_01 = (code *)get_field_4_062878(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_00),
             ar5_01 == (code *)0x1 &&
             (iVar4 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),1,pcVar6,ar7_00), iVar4 == 0))
            && (uVar1 = FUN_8c05eec4(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_00),
               (char)uVar1 == '\x02')))) {
          iVar4 = FUN_8c02c340(*(int *)(ar6 + 4) + 0x90,FUN_8c02c340,pcVar6,ar7_00);
          ar5_01 = (code *)0x2d;
          if (iVar4 < 0x2d) {
            (**(code **)(*ar5 + 0x178))(ar5,0x2d,pcVar6,ar7_00);
            if (cVar11 == '\0') {
              fVar8 = 21.0;
            }
            else {
              fVar7 = 21.0;
              fVar8 = 2.85865e-43;
            }
            if (cVar10 != '\0' || fVar8 <= fVar7) {
              (**(code **)(*ar5 + 0x178))(ar5,ar5_01,pcVar6,ar7_00);
              if (cVar11 == '\0') {
                fVar7 = 25.0;
              }
              else {
                fVar8 = 25.0;
                fVar7 = 5.49309e-43;
              }
              if (cVar10 == '\0' && fVar8 < fVar7) {
                (**(code **)(*ar5 + 0x188))(ar5,ar5_01,pcVar6,ar7_00);
                if (cVar11 == '\0') {
                  pcVar9 = (code *)0x42980000;
                }
                else {
                  fVar7 = 76.0;
                  pcVar9 = FUN_8c025f68;
                }
                if (cVar10 == '\0' && (float)(uint)pcVar9 < fVar7) {
                  ar5_01 = *(code **)(ar6 + 4);
                  uVar1 = FUN_8c025f68(ar5_01 + 0x78,ar5_01,pcVar6,ar7_00);
                  if ((char)uVar1 != '\x01') {
                    if ((char)ar4[0x98] < '\x04') {
                      ar5_01 = (code *)0x5;
                      iVar4 = (**(code **)(*ar5 + 0x11c))(ar5,5,pcVar6,ar7_00);
                      if (iVar4 != 1) goto LAB_8c063f66;
                    }
                    iVar4 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_00);
                    if (iVar4 == 0) {
                      FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,0,pcVar6,ar7_00);
                      ar5_01 = (code *)0x0;
                      FUN_8c063800(*(undefined4 *)(ar6 + 0xc),0,pcVar6,ar7_00,in_stack_fffffe84);
                      ar4[0x879] = (code)0x1;
                      *(undefined4 *)(ar4 + 0x86c) = 0;
                      *(undefined4 *)(ar4 + 4) = 0xd;
                      *(undefined4 *)(ar4 + 8) = 0x5f;
                      *(undefined4 *)(ar4 + 0xc) = 0;
                      *(undefined4 *)(ar4 + 0x840) = 0x12;
                      DAT_8c136908 = 0x12;
                      *(undefined4 *)(ar4 + 0x844) = 0xb;
                      DAT_8c13690c = 0xb;
                      *(undefined4 *)(ar4 + 0x848) = 0xc;
                      DAT_8c136910 = 0xc;
                      pcVar6 = (code *)&DAT_8c13686c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_8c063f66:
  ar7_01 = (char *)ar7_00;
  if (ar4[0x879] == (code)0x1) {
    if (*(int *)(ar4 + 900) == -1) {
      FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7_00);
      ar7_01 = s_REQUEST_ATTENTION_8c136cf1;
      FUN_8c0303b8(ar4 + 0x9c,10,0,s_REQUEST_ATTENTION_8c136cf1,&DAT_8c1369bf);
      *(undefined4 *)(ar4 + 0xfc) = 0;
      pcVar6 = ar4 + 0x9c;
      uVar1 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),pcVar6,ar7_01);
      *(undefined4 *)(ar4 + 900) = uVar1;
      *(undefined4 *)(ar4 + 0x14c) = 0;
      FUN_8c030870(ar4 + 0x9c,2,pcVar6,ar7_01);
    }
    *(int *)(ar4 + 0x86c) = *(int *)(ar4 + 0x86c) + 1;
    pcVar6 = ar4;
    if ((300 < *(int *)(ar4 + 0x86c)) ||
       (iVar4 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),get_field_40_03598c,ar4,ar7_01),
       iVar4 != 0)) {
      ar4[0x879] = (code)0x0;
      *(undefined4 *)(ar4 + 0x86c) = 0;
    }
    ar5_01 = ar6;
    iVar4 = FUN_8c02fcc4(ar4,ar6,pcVar6,ar7_01);
    if (((iVar4 == 1) &&
        (uVar1 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_01), (char)uVar1 == '\0')
        ) && (iVar4 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_01),
             iVar4 == 0)) {
      FUN_8c0637c0(*(undefined4 *)(ar6 + 0xc),1,pcVar6,ar7_01);
      ar4[0x879] = (code)0x2;
      ar5_01 = (code *)0x2;
      FUN_8c05f498(*(undefined4 *)(ar6 + 0xc),2,pcVar6,ar7_01);
    }
  }
  uVar1 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_01);
  if ((char)uVar1 != 1) {
    return (undefined **)(int)(char)uVar1;
  }
  if ((char)ar4[0x879] != 2) {
    return (undefined **)(int)(char)ar4[0x879];
  }
  iVar4 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_01);
  if (8 < iVar4) {
    return (undefined **)8;
  }
  if (iVar4 < 0) {
    return (undefined **)8;
  }
  ppuVar3 = &switchdata_8c0641a8_8c0641ac;
                    
  switch(iVar4) {
  case 1:
    if (*(int *)(ar4 + 0x40) == 0x1b) {
      ppuVar3 = (undefined **)0x1b;
    }
    else {
      FUN_8c0637c0(*(undefined4 *)(ar6 + 0xc),1,pcVar6,ar7_01);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x1b;
      *(undefined4 *)(ar4 + 0x840) = 0x1b;
      DAT_8c136908 = 0x1b;
      *(undefined4 *)(ar4 + 0x844) = 0x36;
      DAT_8c13690c = 0x36;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      ppuVar3 = (undefined **)0xa4;
      DAT_8c136910 = 0x36;
    }
    break;
  case 2:
    ppuVar3 = *(undefined ***)(ar4 + 900);
    if (ppuVar3 == (undefined **)0xffffffff) {
      if (*(int *)(ar4 + 4) == 0xd) {
        ppuVar3 = (undefined **)0xd;
      }
      else {
        iVar4 = FUN_8c02fcc4(ar4,ar6,pcVar6,ar7_01);
        if (iVar4 == 1) {
          ppuVar3 = (undefined **)0x1;
        }
        else {
          if (*(int *)(ar4 + 900) == -1) {
            uVar1 = 0;
            FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7_01);
            uVar1 = FUN_8c064bac(*(undefined4 *)(ar6 + 0xc),uVar1,pcVar6,ar7_01);
            if ((char)uVar1 == '\0') {
              ar7_01 = s_EVENT_JUMP1_8c136d17;
              FUN_8c0303b8(ar4 + 0x9c,0x2a,0,s_EVENT_JUMP1_8c136d17,s_start_8c136a1c);
              *(undefined4 *)(ar4 + 0xfc) = 0;
              pcVar6 = ar4 + 0x9c;
              uVar1 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),pcVar6,ar7_01);
              *(undefined4 *)(ar4 + 900) = uVar1;
              *(undefined4 *)(ar4 + 0x14c) = 1;
            }
            else {
              ar7_01 = s_EVENT_JUMP3_8c136d23;
              FUN_8c0303b8(ar4 + 0x9c,0x2a,0,s_EVENT_JUMP3_8c136d23,&DAT_8c1369bf);
              *(undefined4 *)(ar4 + 0xfc) = 0;
              pcVar6 = ar4 + 0x9c;
              uVar1 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),pcVar6,ar7_01);
              *(undefined4 *)(ar4 + 900) = uVar1;
              *(undefined4 *)(ar4 + 0x14c) = 1;
            }
          }
          if (*(int *)(ar4 + 0x14c) == 0) {
            ppuVar3 = (undefined **)0x0;
          }
          else if (*(int *)(ar4 + 900) == -1) {
            ppuVar3 = (undefined **)0xffffffff;
          }
          else {
            *(undefined4 *)(ar4 + 4) = 0xd;
            *(undefined4 *)(ar4 + 8) = 0x5f;
            *(undefined4 *)(ar4 + 0xc) = 0;
            *(undefined4 *)(ar4 + 0x840) = 0x12;
            DAT_8c136908 = 0x12;
            *(undefined4 *)(ar4 + 0x844) = 0xb;
            DAT_8c13690c = 0xb;
            *(undefined4 *)(ar4 + 0x848) = 0xc;
            DAT_8c136910 = 0xc;
            Vec3_ctor_copy(auStack_30,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7_01);
            Vec3_assign_wrap_063818(ar4,auStack_30,pcVar6,ar7_01);
            Vec3_dtor(auStack_30,0xffffffff,pcVar6,ar7_01);
            if (cVar11 == '\0') {
              *(undefined4 *)(ar4 + 0x30) = 0x44960000;
            }
            else {
              *(undefined8 *)(ar4 + 0x30) = 0x13c44960000;
            }
            Vec3_ctor_copy(auStack_40,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7_01);
            Vec3_assign_wrap_05f640(ar4,auStack_40,pcVar6,ar7_01);
            Vec3_dtor(auStack_40,0xffffffff,pcVar6,ar7_01);
            if (cVar11 == '\0') {
              *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
            }
            else {
              *(undefined8 *)(ar4 + 0x78) = 0x8044af0000;
            }
            ppuVar3 = (undefined **)0x80;
            ar4[0x80] = (code)0x0;
          }
        }
      }
    }
    break;
  case 3:
    ppuVar3 = *(undefined ***)(ar4 + 900);
    if (ppuVar3 == (undefined **)0xffffffff) {
      FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7_01);
      FUN_8c0303b8(ar4 + 0x9c,3,0,s_EVENT_JUMP2_8c136d2f,s_start_8c136a1c);
      *(undefined4 *)(ar4 + 0xfc) = 0;
      uVar1 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),ar4 + 0x9c,FUN_8c0f8320);
      uVar5 = 900;
      *(undefined4 *)(ar4 + 900) = uVar1;
      *(undefined4 *)(ar4 + 0x14c) = 0;
      if (*(int *)(ar4 + 900) == -1) {
        ppuVar3 = (undefined **)0xffffffff;
      }
      else {
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x840) = 0xb;
        DAT_8c136908 = 0xb;
        *(undefined4 *)(ar4 + 0x844) = 0xc;
        DAT_8c13690c = 0xc;
        uVar1 = 0x36;
        *(undefined4 *)(ar4 + 0x848) = 0x36;
        DAT_8c136910 = 0x36;
        Vec3_ctor_copy(auStack_50,*(int *)(ar6 + 0x14) + 0x10,0x36,900);
        Vec3_assign_wrap_05f640(ar4,auStack_50,uVar1,uVar5);
        Vec3_dtor(auStack_50,0xffffffff,uVar1,uVar5);
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(ar4 + 0x78) = 0x8044af0000;
        }
        ppuVar3 = (undefined **)0x80;
        ar4[0x80] = (code)0x0;
      }
    }
    break;
  case 4:
    if (*(int *)(ar4 + 0x40) == 0x1d) {
      return (undefined **)0x1d;
    }
    if (*(int *)(ar4 + 0x40) == 0x1c) {
      return (undefined **)0x1c;
    }
    if (*(int *)(ar4 + 0x10c) == 0) {
      return (undefined **)0;
    }
    uVar1 = FUN_8c064bac(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_01);
    if (((((char)uVar1 < '\x02') ||
         (iVar4 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5_01,pcVar6,ar7_01), iVar4 != -1)) ||
        (uVar1 = FUN_8c05eec4(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_01),
        (char)uVar1 != '\x02')) || (*(int *)(ar4 + 0x10c) != 4)) {
      if (*(int *)(ar4 + 0x10c) == 4) {
LAB_8c064842:
        FUN_8c064b84(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_01);
      }
      else {
        ar7_01 = (char *)0x10c;
        pcVar6 = *(code **)(ar4 + 0x10c);
        if (pcVar6 == (code *)0x6) goto LAB_8c064842;
      }
      FUN_8c0637c0(*(undefined4 *)(ar6 + 0xc),1,pcVar6,ar7_01);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      if (*(int *)(ar4 + 0x10c) == 4) {
        *(undefined4 *)(ar4 + 0x40) = 0x31;
        *(undefined4 *)(ar4 + 0x840) = 0x31;
        DAT_8c136908 = 0x31;
      }
      else {
        *(undefined4 *)(ar4 + 0x40) = 0x1c;
        ar7_01 = (char *)0x840;
        *(undefined4 *)(ar4 + 0x840) = 0x1c;
        DAT_8c136908 = 0x1c;
      }
      *(undefined4 *)(ar4 + 0x844) = 0x36;
      DAT_8c13690c = 0x36;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      DAT_8c136910 = 0x36;
      FUN_8c0b9ed4(*(undefined4 *)(ar6 + 0x18),0x24,0x1b,ar7_01);
    }
    else {
      FUN_8c064ba0(*(undefined4 *)(ar6 + 0x18),3,pcVar6,ar7_01);
      (**(code **)(*ar5 + 0xd8))(ar5,*(undefined4 *)ar6,pcVar6,ar7_01);
      FUN_8c0637c0(*(undefined4 *)(ar6 + 0xc),1,pcVar6,ar7_01);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x1d;
      *(undefined4 *)(ar4 + 0x840) = 0x1d;
      DAT_8c136908 = 0x1d;
      *(undefined4 *)(ar4 + 0x844) = 0x2c;
      DAT_8c13690c = 0x2c;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      DAT_8c136910 = 0x36;
      FUN_8c0fa6c8(0x8c35468c,0x2c,pcVar6,ar7_01);
    }
    ppuVar3 = (undefined **)0x10c;
    *(undefined4 *)(ar4 + 0x10c) = 0;
    break;
  case 5:
    iVar4 = (**(code **)(*ar5 + 0xf0))(ar5,ar5_01,pcVar6,ar7_01);
    if (iVar4 == 1) {
      FUN_8c05f498(*(undefined4 *)(ar6 + 0xc),6,pcVar6,ar7_01);
      ppuVar3 = (undefined **)FUN_8c0b9ed4(*(undefined4 *)(ar6 + 0x18),0x25,0x1b,ar7_01);
    }
    else {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x2c;
      *(undefined4 *)(ar4 + 0x840) = 0x2c;
      DAT_8c136908 = 0x2c;
      *(undefined4 *)(ar4 + 0x844) = 0x36;
      DAT_8c13690c = 0x36;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      ppuVar3 = (undefined **)0xa4;
      DAT_8c136910 = 0x36;
    }
    break;
  case 6:
    ppuVar3 = (undefined **)FUN_8c05f498(*(undefined4 *)(ar6 + 0xc),7,pcVar6,ar7_01);
    break;
  case 7:
    if (*(int *)(ar4 + 0x40) == 0x17) {
      ppuVar3 = (undefined **)0x17;
    }
    else {
      FUN_8c0637c0(*(undefined4 *)(ar6 + 0xc),1,pcVar6,ar7_01);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 99;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x17;
      *(undefined4 *)(ar4 + 0x840) = 0x17;
      DAT_8c136908 = 0x17;
      *(undefined4 *)(ar4 + 0x844) = 0x36;
      DAT_8c13690c = 0x36;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      ppuVar3 = (undefined **)0xa4;
      DAT_8c136910 = 0x36;
    }
    break;
  case 8:
    ar4[0x879] = (code)0x0;
    pcVar6 = FUN_8c035e84;
    FUN_8c035e84(*(undefined4 *)(ar6 + 0xc),0,FUN_8c035e84,ar7_01);
    ar4[0x871] = (code)0x0;
    FUN_8c05f498(*(undefined4 *)(ar6 + 0xc),0,pcVar6,ar7_01);
    FUN_8c0637c0(*(undefined4 *)(ar6 + 0xc),0,pcVar6,ar7_01);
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 8) = 0x14;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 0x840) = 0;
    DAT_8c136908 = 0;
    *(undefined4 *)(ar4 + 0x844) = 0x36;
    DAT_8c13690c = 0x36;
    *(undefined4 *)(ar4 + 0x848) = 0x36;
    DAT_8c136910 = 0x36;
    ppuVar3 = (undefined **)FUN_8c0c4e2c(0x36,0xa0,&DAT_8c13686c,0x36);
  }
  return ppuVar3;
}

__asm__(".globl _s_REQUEST_ATTENTION_063846\n.set _s_REQUEST_ATTENTION_063846, _s_REQUEST_ATTENTION_063846_def\n");
