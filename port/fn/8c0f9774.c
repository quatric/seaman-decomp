#include "../decls.h"
undefined4 s_REQUEST_HOT_0f9780_def(int ar4,undefined4 ar5,code *ar6,undefined4 ar7)

{
  int iVar1;
  code *pcVar2;
  code *ar5_00;
  char *pcVar3;
  uint uVar4;
  int ar4_00;
  undefined4 uVar5;
  bool bVar6;
  undefined4 in_stack_ffffff8c;
  uint uStack_2c;
  ushort auStack_28 [8];
  
  if (0 < *(int *)(ar4 + 0x1014)) {
    return 1;
  }
  uVar5 = *(undefined4 *)(ar4 + 0x1050);
  ar4_00 = *(int *)(ar4 + 0x1050) + 0x20;
  ar5_00 = (code *)&DAT_8c1408e9;
  strcpy(*(int *)(ar4 + 0x1050) + 0x40,&DAT_8c1408e9,ar6,ar7,in_stack_ffffff8c);
  uVar4 = 0;
  iVar1 = *(int *)(ar4 + 0x89130);
  if (iVar1 == 0) goto LAB_8c0fa1a8;
  if ((iVar1 != 1) && (iVar1 != 2)) {
    if (iVar1 == 3) {
      pcVar3 = (char *)0x1050;
      bVar6 = *(int *)(*(int *)(ar4 + 0x1050) + 0x70) == 0x11;
      if (bVar6) {
        pcVar3 = s_ESCAPE_8c140bb2;
        strcpy(ar4_00,s_ESCAPE_8c140bb2,ar6,ar7,in_stack_ffffff8c);
        *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
      }
      uVar4 = (uint)bVar6;
      pcVar2 = (code *)FUN_8c0fa658(ar4,pcVar3,ar6,ar7);
      ar5_00 = (code *)pcVar3;
      if ((((int)pcVar2 < 0x13) &&
          (ar5_00 = (code *)0x1, *(int *)(*(int *)(ar4 + 0x1050) + 0x78) != 1)) &&
         (ar5_00 = *(code **)(ar4 + 0x1048), (int)pcVar2 <= (int)*(code **)(ar4 + 0x1048))) {
        ar6 = (code *)&DAT_8c140ba6;
        s_CHAPTER_02d_0fa206(ar4,pcVar2,&DAT_8c140ba6,ar7);
        uVar4 = 1;
        ar5_00 = pcVar2;
      }
    }
    goto LAB_8c0fa1a8;
  }
  if (*(int *)(*(int *)(ar4 + 0x1050) + 0x70) == 0xb) {
    *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
    if (*(int *)(*(int *)(ar4 + 0x1050) + 0x7c) != 7) {
      pcVar2 = *(code **)(*(int *)(ar4 + 0x1050) + 0x7c);
      ar5_00 = pcVar2;
      if (((int)pcVar2 < 10) && (-1 < (int)pcVar2)) {
        ar5_00 = (code *)(&switchdata_8c0f9836_8c0f9840)[(int)pcVar2];
                    
        switch(pcVar2) {
        case 0x0:
          pcVar3 = s_REQUEST_HOT_8c140aaa;
          strcpy(ar4_00,s_REQUEST_HOT_8c140aaa,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 0x1:
          pcVar3 = s_REQUEST_COLD_8c140ab6;
          strcpy(ar4_00,s_REQUEST_COLD_8c140ab6,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 0x2:
          pcVar3 = s_REQUEST_OXYGEN_8c140ac3;
          strcpy(ar4_00,s_REQUEST_OXYGEN_8c140ac3,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 0x3:
          pcVar3 = s_REQUEST_HUMIDITY_8c140ad2;
          strcpy(ar4_00,s_REQUEST_HUMIDITY_8c140ad2,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 0x4:
          pcVar3 = s_REQUEST_HUNGRY_8c140ae3;
          strcpy(ar4_00,s_REQUEST_HUNGRY_8c140ae3,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 0x5:
          pcVar3 = s_STATUS_SICK_8c140af2;
          strcpy(ar4_00,s_STATUS_SICK_8c140af2,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 0x8:
          pcVar3 = s_REQUEST_SLEEP_8c140afe;
          strcpy(ar4_00,s_REQUEST_SLEEP_8c140afe,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 0x9:
          pcVar3 = s_STATUS_SNORE_8c140b0c;
          ar6 = strcpy;
          strcpy(ar4_00,s_STATUS_SNORE_8c140b0c,strcpy,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
        }
      }
      iVar1 = *(int *)(ar4 + 0x1044);
      if ((iVar1 < 7) && (-1 < iVar1)) {
                    
        switch(iVar1) {
        case 0:
          pcVar3 = s_BIO_0_8c140900;
          strcpy(uVar5,s_BIO_0_8c140900,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 1:
          pcVar3 = s_BIO_0_8c140900;
          strcpy(uVar5,s_BIO_0_8c140900,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 2:
          pcVar3 = s_BIO_1_8c140911;
          strcpy(uVar5,s_BIO_1_8c140911,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 3:
          pcVar3 = s_BIO_2_8c14094e;
          strcpy(uVar5,s_BIO_2_8c14094e,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 4:
          pcVar3 = s_BIO_2_8c14094e;
          strcpy(uVar5,s_BIO_2_8c14094e,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 5:
          pcVar3 = s_BIO_2_8c14094e;
          strcpy(uVar5,s_BIO_2_8c14094e,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 6:
          pcVar3 = s_BIO_2_8c14094e;
          strcpy(uVar5,s_BIO_2_8c14094e,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
        }
      }
      uVar4 = 1;
    }
    goto LAB_8c0fa1a8;
  }
  if (((*(int *)(*(int *)(ar4 + 0x1050) + 0x7c) != 7) &&
      (0 < *(int *)(*(int *)(ar4 + 0x1050) + 0x60))) ||
     (*(int *)(*(int *)(ar4 + 0x1050) + 0x68) < 2)) goto LAB_8c0fa1a8;
  iVar1 = FUN_8c0fa658(ar4,ar5_00,ar6,ar7);
  if ((*(int *)(ar4 + 0xc) == 0) && (1 < iVar1)) {
    iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR_8c140a8f,ar6,ar7);
    if (iVar1 == 0) {
      ar5_00 = (code *)&DAT_8c140a98;
      iVar1 = s_FROGMANLINE2_0f970c(ar4_00,&DAT_8c140a98,ar6,ar7);
      if (iVar1 == 0) {
        if ((*(int *)(*(int *)(ar4 + 0x1050) + 0x74) == 1) || (*(int *)(ar4 + 0x1034) == 1)) {
          pcVar3 = s_GREETING_8c140b19;
          strcpy(ar4_00,s_GREETING_8c140b19,ar6,ar7,in_stack_ffffff8c);
          uVar4 = 1;
          ar5_00 = (code *)pcVar3;
        }
        else {
          *(undefined4 *)(ar4 + 0xc) = 1;
          *(undefined4 *)(ar4 + 0x1018) = 1;
        }
        goto LAB_8c0fa1a8;
      }
    }
    iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR_8c140a8f,ar6,ar7);
    if (iVar1 == 0) {
      pcVar3 = s_GREETING_8c140b19;
      iVar1 = s_FROGMANLINE2_0f970c(ar4_00,s_GREETING_8c140b19,ar6,ar7);
      if (iVar1 == 0) {
        FUN_8c1f8176(auStack_28,pcVar3,ar6,ar7);
        if ((auStack_28[0] < 0x7d5) && (0x7ce < auStack_28[0])) {
                    
          switch(auStack_28[0]) {
          case 1999:
            pcVar3 = s_CALENDAR1999_8c140b22;
            strcpy(uVar5,s_CALENDAR1999_8c140b22,ar6,ar7);
            ar5_00 = (code *)pcVar3;
            break;
          case 2000:
            pcVar3 = s_CALENDAR2000_8c140b2f;
            ar6 = strcpy;
            strcpy(uVar5,s_CALENDAR2000_8c140b2f,strcpy,ar7);
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d1:
            pcVar3 = s_CALENDAR2001_8c140b3c;
            strcpy(uVar5,s_CALENDAR2001_8c140b3c,ar6,ar7);
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d2:
            pcVar3 = s_CALENDAR2002_8c140b49;
            strcpy(uVar5,s_CALENDAR2002_8c140b49,ar6,ar7);
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d3:
            pcVar3 = s_CALENDAR2003_8c140b56;
            strcpy(uVar5,s_CALENDAR2003_8c140b56,ar6,ar7);
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d4:
            pcVar3 = s_CALENDAR2004_8c140b63;
            strcpy(uVar5,s_CALENDAR2004_8c140b63,ar6,ar7);
            ar5_00 = (code *)pcVar3;
          }
        }
        else {
          pcVar3 = s_CALENDARXXXX_8c140b70;
          strcpy(uVar5,s_CALENDARXXXX_8c140b70,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
        }
        FUN_8c014334(ar4_00,ar5_00,ar6,ar7,&DAT_8c140b7d);
        uVar4 = 1;
        goto LAB_8c0fa1a8;
      }
    }
    iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR1999_8c140b22,ar6,ar7);
    if (((((iVar1 == 0) ||
          (iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR2000_8c140b2f,ar6,ar7), iVar1 == 0)) ||
         (iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR2001_8c140b3c,ar6,ar7), iVar1 == 0)) ||
        ((iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR2002_8c140b49,ar6,ar7), iVar1 == 0 ||
         (iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR2003_8c140b56,ar6,ar7), iVar1 == 0)))) ||
       ((iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR2004_8c140b63,ar6,ar7), iVar1 == 0 ||
        (iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDARXXXX_8c140b70,ar6,ar7), iVar1 == 0)))) {
      strcpy(uVar5,s_CALENDAR_8c140a8f,ar6,ar7,in_stack_ffffff8c);
      pcVar3 = s_USER_SPECIAL_DAY_8c140b82;
      strcpy(ar4_00,s_USER_SPECIAL_DAY_8c140b82,ar6,ar7,in_stack_ffffff8c);
      *(undefined4 *)(ar4 + 0xc) = 1;
      *(undefined4 *)(ar4 + 0x1018) = 1;
      uVar4 = 1;
      ar5_00 = (code *)pcVar3;
    }
    else {
      strcpy(uVar5,s_CALENDAR_8c140a8f,ar6,ar7,in_stack_ffffff8c);
      ar5_00 = (code *)&DAT_8c140a98;
      strcpy(ar4_00,&DAT_8c140a98,ar6,ar7,in_stack_ffffff8c);
      uVar4 = 1;
    }
    goto LAB_8c0fa1a8;
  }
  if (*(int *)(*(int *)(ar4 + 0x1050) + 0x7c) != 7) goto LAB_8c0fa1a8;
  iVar1 = *(int *)(*(int *)(ar4 + 0x1050) + 0x70);
  if ((iVar1 < 0x12) && (8 < iVar1)) {
                    
    switch(iVar1) {
    case 9:
      *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
      ar5_00 = (code *)0x1048;
      if (0 < *(int *)(ar4 + 0x1048)) {
        ar5_00 = (code *)FUN_8c0fa658(ar4,FUN_8c0fa658,ar6,ar7);
        if (*(int *)(ar4 + 0x1048) < (int)ar5_00) {
          ar5_00 = *(code **)(ar4 + 0x1048);
        }
        ar6 = (code *)&DAT_8c140ba6;
        s_CHAPTER_02d_0fa206(ar4,ar5_00,&DAT_8c140ba6,ar7);
        uVar4 = 1;
      }
      break;
    case 10:
      *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
      strcpy(uVar5,s_TRAINING_8c140ba9,ar6,ar7,in_stack_ffffff8c);
      ar5_00 = (code *)&DAT_8c1408e9;
      strcpy(ar4_00,&DAT_8c1408e9,ar6,ar7,in_stack_ffffff8c);
      uVar4 = 1;
      break;
    default:
      goto switchD_8c0f9e5a_caseD_b;
    case 0xc:
      *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
      strcpy(uVar5,s_Worry_8c140b93,ar6,ar7,in_stack_ffffff8c);
      ar5_00 = (code *)&DAT_8c1408e9;
      strcpy(ar4_00,&DAT_8c1408e9,ar6,ar7,in_stack_ffffff8c);
      uVar4 = 1;
      break;
    case 0xd:
      *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
      strcpy(uVar5,s_Civilization_8c140b99,ar6,ar7,in_stack_ffffff8c);
      ar5_00 = (code *)&DAT_8c1408e9;
      strcpy(ar4_00,&DAT_8c1408e9,ar6,ar7,in_stack_ffffff8c);
      uVar4 = 1;
      break;
    case 0x11:
      *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
      pcVar3 = s_ESCAPE_8c140bb2;
      strcpy(ar4_00,s_ESCAPE_8c140bb2,ar6,ar7,in_stack_ffffff8c);
      uVar4 = 1;
      ar5_00 = (code *)pcVar3;
    }
  }
  else {
switchD_8c0f9e5a_caseD_b:
    ar5_00 = *(code **)(ar4 + 0x1048);
    if (0 < (int)ar5_00) {
      ar5_00 = FUN_8c0fa658;
      iVar1 = ar4;
      pcVar2 = (code *)FUN_8c0fa658(ar4,FUN_8c0fa658,ar6,ar7);
      if ((int)pcVar2 <= *(int *)(ar4 + 0x1048)) {
        if (*(int *)(*(int *)(ar4 + 0x1050) + 0x74) == 1) {
          uVar5 = rand(iVar1,ar5_00,ar6,ar7);
          ar5_00 = (code *)0x4;
          iVar1 = libgcc_divide_helper_01031c(uVar5,4,ar6,ar7);
          if (iVar1 == 0) {
            ar6 = (code *)&DAT_8c140bb9;
            s_CHAPTER_02d_0fa206(ar4,pcVar2,&DAT_8c140bb9,ar7);
            uVar4 = 1;
            ar5_00 = pcVar2;
          }
        }
        else {
          FUN_8c1f8176(auStack_28,auStack_28,ar6,ar7);
          FUN_8c1f826c(auStack_28,&uStack_2c,ar6,ar7);
          ar5_00 = (code *)get_field_c8_0fc440(ar4 + 0x1054,ar4 + 0x1054,ar6,ar7);
          uStack_2c = uStack_2c - (int)ar5_00;
          if (600 < uStack_2c) {
            if (*(int *)(ar4 + 0x1034) == 1) {
              ar6 = (code *)&DAT_8c140bb9;
              s_CHAPTER_02d_0fa206(ar4,pcVar2,&DAT_8c140bb9,ar7);
            }
            else {
              ar6 = (code *)&DAT_8c140a98;
              s_CHAPTER_02d_0fa206(ar4,pcVar2,&DAT_8c140a98,ar7);
            }
            ar5_00 = FUN_8c0fc40c;
            FUN_8c0fc40c(ar4 + 0x1054,FUN_8c0fc40c,ar6,ar7);
            uVar4 = 1;
          }
        }
      }
    }
  }
LAB_8c0fa1a8:
  if (uVar4 == 1) {
    FUN_8c0f824c(ar4,ar5_00,ar6,ar7);
  }
  else {
    FUN_8c0fa70c(ar4,ar5_00,ar6,ar7);
  }
  return uVar4;
}

__asm__(".globl _s_REQUEST_HOT_0f9780\n.set _s_REQUEST_HOT_0f9780, _s_REQUEST_HOT_0f9780_def\n");
