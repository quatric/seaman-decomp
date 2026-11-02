#include "../decls.h"
undefined4 s_HIGYOLINE0_0f8370_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 *ar5_00;
  int ar6_00;
  undefined4 in_stack_fffffea4;
  undefined1 auStack_74 [32];
  undefined1 auStack_54 [32];
  undefined1 auStack_34 [36];
  
  ar6_00 = ar6;
  FUN_8c0fda80(ar4 + 0x1054,0x1054,ar6,ar7);
  *(int *)(ar4 + 0x89130) = ar5;
  *(int *)(ar4 + 0x104c) = ar4;
  *(int *)(ar4 + 0x1050) = ar6;
  *(undefined4 *)(ar4 + 0x89134) = 1;
  strcpy(auStack_34,&DAT_8c1408e4,ar6_00,ar7,in_stack_fffffea4);
  strcpy(auStack_54,&DAT_8c1408e9,ar6_00,ar7,in_stack_fffffea4);
  strcpy(auStack_74,&DAT_8c1408e9,ar6_00,ar7,in_stack_fffffea4);
  if (ar5 == 1) {
    iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE0_8c1408ea,ar6_00,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x1044) = 0;
    }
    else {
      iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE1_8c1408f5,ar6_00,ar7);
      if (iVar1 == 0) {
        *(undefined4 *)(ar4 + 0x1044) = 1;
      }
      else {
        iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE2_8c140906,ar6_00,ar7);
        if (iVar1 == 0) {
          *(undefined4 *)(ar4 + 0x1044) = 2;
        }
        else {
          iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE3_8c140917,ar6_00,ar7);
          if ((((iVar1 == 0) ||
               (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE4_8c140922,ar6_00,ar7), iVar1 == 0)) ||
              (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE5_8c14092d,ar6_00,ar7), iVar1 == 0)) ||
             ((iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE6_8c140938,ar6_00,ar7), iVar1 == 0 ||
              (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE7_8c140943,ar6_00,ar7), iVar1 == 0)))) {
            *(undefined4 *)(ar4 + 0x1044) = 3;
          }
          else {
            iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE0_8c140954,ar6_00,ar7);
            if (((iVar1 == 0) ||
                (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE1_8c140961,ar6_00,ar7), iVar1 == 0))
               || (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE2_8c14096e,ar6_00,ar7), iVar1 == 0
                  )) {
              *(undefined4 *)(ar4 + 0x1044) = 4;
            }
            else {
              iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE3_8c140981,ar6_00,ar7);
              if ((iVar1 == 0) ||
                 (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE4_8c14098e,ar6_00,ar7), iVar1 == 0)
                 ) {
                *(undefined4 *)(ar4 + 0x1044) = 5;
              }
              else {
                iVar1 = s_FROGMANLINE2_0f970c(ar6,s_JUNGLE_8c1409e7,ar6_00,ar7);
                if (iVar1 != 0) {
                  return 0;
                }
                *(undefined4 *)(ar4 + 0x1044) = 6;
              }
            }
          }
        }
      }
    }
    iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE0_8c1408ea,ar6_00,ar7);
    if (((iVar1 == 0) ||
        (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE1_8c1408f5,ar6_00,ar7), iVar1 == 0)) ||
       (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE2_8c140906,ar6_00,ar7), iVar1 == 0)) {
      *(undefined4 *)(ar4 + 0x1048) = 0;
    }
    else {
      iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE3_8c140917,ar6_00,ar7);
      if (iVar1 == 0) {
        *(undefined4 *)(ar4 + 0x1048) = 1;
      }
      else {
        iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE4_8c140922,ar6_00,ar7);
        if (iVar1 == 0) {
          *(undefined4 *)(ar4 + 0x1048) = 2;
        }
        else {
          iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE5_8c14092d,ar6_00,ar7);
          if (iVar1 == 0) {
            *(undefined4 *)(ar4 + 0x1048) = 3;
          }
          else {
            iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE6_8c140938,ar6_00,ar7);
            if (iVar1 == 0) {
              *(undefined4 *)(ar4 + 0x1048) = 4;
            }
            else {
              iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE7_8c140943,ar6_00,ar7);
              if (iVar1 == 0) {
                iVar1 = FUN_8c0fa658(ar4,0,ar6_00,ar7);
                if (iVar1 == 5) {
                  *(undefined4 *)(ar4 + 0x1048) = 5;
                  *(undefined4 *)(*(int *)(ar4 + 0x104c) + 8) = *(undefined4 *)(ar4 + 0x102c);
                }
                else if ((iVar1 == 6) &&
                        (*(undefined4 *)(ar4 + 0x1048) = 5,
                        *(int *)(*(int *)(ar4 + 0x104c) + 8) < *(int *)(ar4 + 0x102c))) {
                  *(undefined4 *)(ar4 + 0x1048) = 6;
                }
              }
              else {
                iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE0_8c140954,ar6_00,ar7);
                if (iVar1 == 0) {
                  *(undefined4 *)(ar4 + 0x1048) = 7;
                }
                else {
                  iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE1_8c140961,ar6_00,ar7);
                  if (iVar1 == 0) {
                    *(undefined4 *)(ar4 + 0x1048) = 8;
                  }
                  else {
                    iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE2_8c14096e,ar6_00,ar7);
                    if (iVar1 == 0) {
                      *(undefined4 *)(ar4 + 0x1048) = 10;
                    }
                    else {
                      iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE3_8c140981,ar6_00,ar7);
                      if (iVar1 == 0) {
                        *(undefined4 *)(ar4 + 0x1048) = 0xc;
                      }
                      else {
                        pcVar3 = s_FROGMANLINE4_8c14098e;
                        iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE4_8c14098e,ar6_00,ar7);
                        if (iVar1 == 0) {
                          iVar1 = FUN_8c0fa658(ar4,pcVar3,ar6_00,ar7);
                          if ((iVar1 < 0x13) && (0xc < iVar1)) {
                    
                            switch(iVar1) {
                            default:
                              *(undefined4 *)(ar4 + 0x1048) = 0xe;
                              *(undefined4 *)(*(int *)(ar4 + 0x104c) + 8) =
                                   *(undefined4 *)(ar4 + 0x102c);
                              break;
                            case 0xf:
                            case 0x10:
                              *(undefined4 *)(ar4 + 0x1048) = 0xe;
                              if (*(int *)(*(int *)(ar4 + 0x104c) + 8) + 1 < *(int *)(ar4 + 0x102c))
                              {
                                *(undefined4 *)(ar4 + 0x1048) = 0x10;
                              }
                              break;
                            case 0x11:
                              *(undefined4 *)(ar4 + 0x1048) = 0x10;
                              if (*(int *)(*(int *)(ar4 + 0x104c) + 8) + 2 < *(int *)(ar4 + 0x102c))
                              {
                                *(undefined4 *)(ar4 + 0x1048) = 0x12;
                              }
                            }
                          }
                        }
                        else {
                          iVar1 = s_FROGMANLINE2_0f970c(ar6,s_JUNGLE_8c1409e7,ar6_00,ar7);
                          if (iVar1 != 0) {
                            return 0;
                          }
                          *(undefined4 *)(ar4 + 0x1048) = 0x12;
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
    }
    iVar1 = *(int *)(ar4 + 0x1044);
    if ((iVar1 < 7) && (-1 < iVar1)) {
                    
      switch(iVar1) {
      case 0:
        strcpy(auStack_34,s_B_LEARNING0_8c1409ee,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,&DAT_8c1409fa,ar6_00,ar7,in_stack_fffffea4);
        break;
      case 1:
        strcpy(auStack_34,s_B_LEARNING1_8c1409fe,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,&DAT_8c140a0a,ar6_00,ar7,in_stack_fffffea4);
        break;
      case 2:
        strcpy(auStack_34,s_B_LEARNING2_8c140a0e,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,&DAT_8c140a1a,ar6_00,ar7,in_stack_fffffea4);
        break;
      case 3:
        strcpy(auStack_34,s_A_LEARNING0_8c140a1e,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,&DAT_8c140a2a,ar6_00,ar7,in_stack_fffffea4);
        break;
      case 4:
        strcpy(auStack_34,s_A_LEARNING1_8c140a2e,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,&DAT_8c140a3a,ar6_00,ar7,in_stack_fffffea4);
        break;
      case 5:
        strcpy(auStack_34,s_A_LEARNING2_8c140a3e,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,&DAT_8c140a4a,ar6_00,ar7,in_stack_fffffea4);
        break;
      case 6:
        strcpy(auStack_34,s_A_LEARNINGJ_8c140a4e,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,&DAT_8c140a5a,ar6_00,ar7,in_stack_fffffea4);
      }
    }
    if (*(int *)(*(int *)(ar4 + 0x1050) + 0x94) == 1) {
      FUN_8c01437c(auStack_54,&DAT_8c140a5e,ar6_00,ar7);
    }
    else if (*(int *)(*(int *)(ar4 + 0x1050) + 0x68) < 2) {
      FUN_8c01437c(auStack_54,&DAT_8c140a63,ar6_00,ar7);
    }
    else {
      iVar1 = *(int *)(*(int *)(ar4 + 0x1050) + 0x7c);
      if ((9 < iVar1) || (iVar1 < 0)) {
switchD_8c0f933e_caseD_6:
        strcpy(auStack_54,&DAT_8c1408e9,ar6_00,ar7,in_stack_fffffea4);
        return 0;
      }
                    
      switch(iVar1) {
      case 0:
        if (*(int *)(*(int *)(ar4 + 0x1050) + 0x60) < 1) {
          FUN_8c01437c(auStack_54,s_NORMAL_8c140a6c,ar6_00,ar7);
        }
        else {
          FUN_8c01437c(auStack_54,&DAT_8c140a68,ar6_00,ar7);
        }
        break;
      case 1:
        if (*(int *)(*(int *)(ar4 + 0x1050) + 0x60) < 1) {
          FUN_8c01437c(auStack_54,s_NORMAL_8c140a6c,ar6_00,ar7);
        }
        else {
          FUN_8c01437c(auStack_54,&DAT_8c140a73,ar6_00,ar7);
        }
        break;
      case 2:
        if (*(int *)(*(int *)(ar4 + 0x1050) + 0x60) < 1) {
          FUN_8c01437c(auStack_54,s_NORMAL_8c140a6c,ar6_00,ar7);
        }
        else {
          FUN_8c01437c(auStack_54,s_OXYGEN_8c140a78,ar6_00,ar7);
        }
        break;
      case 3:
        if (*(int *)(*(int *)(ar4 + 0x1050) + 0x60) < 1) {
          FUN_8c01437c(auStack_54,s_NORMAL_8c140a6c,ar6_00,ar7);
        }
        else {
          FUN_8c01437c(auStack_54,s_HUMIDITY_8c140a7f,ar6_00,ar7);
        }
        break;
      case 4:
        if (*(int *)(*(int *)(ar4 + 0x1050) + 0x60) < 1) {
          FUN_8c01437c(auStack_54,s_NORMAL_8c140a6c,ar6_00,ar7);
        }
        else {
          FUN_8c01437c(auStack_54,s_HUNGRY_8c140a88,ar6_00,ar7);
        }
        break;
      case 5:
        FUN_8c01437c(auStack_54,&DAT_8c140a5e,ar6_00,ar7);
        break;
      case 6:
        goto switchD_8c0f933e_caseD_6;
      case 7:
        pcVar3 = s_NORMAL_8c140a6c;
        FUN_8c01437c(auStack_54,s_NORMAL_8c140a6c,ar6_00,ar7);
        iVar1 = FUN_8c0fa658(ar4,pcVar3,ar6_00,ar7);
        if ((1 < iVar1) && (*(undefined4 *)(ar4 + 0x1040) = 0, *(int *)(ar4 + 0xc) == 0)) {
          strcpy(auStack_34,s_CALENDAR_8c140a8f,ar6_00,ar7,in_stack_fffffea4);
          strcpy(auStack_54,&DAT_8c140a98,ar6_00,ar7,in_stack_fffffea4);
        }
        break;
      case 8:
        FUN_8c01437c(auStack_54,s_SLEEPY_8c140a9d,ar6_00,ar7);
        break;
      case 9:
        FUN_8c01437c(auStack_54,s_SLEEP_8c140aa4,ar6_00,ar7);
      }
    }
  }
  else if (ar5 == 4) {
    iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE0_8c1408ea,ar6_00,ar7);
    if ((iVar1 == 0) ||
       (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE1_8c1408f5,ar6_00,ar7), iVar1 == 0)) {
      strcpy(auStack_34,s_BIO_0_8c140900,ar6_00,ar7,in_stack_fffffea4);
      strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
    }
    else {
      iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE2_8c140906,ar6_00,ar7);
      if (iVar1 == 0) {
        strcpy(auStack_34,s_BIO_1_8c140911,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
      }
      else {
        iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE3_8c140917,ar6_00,ar7);
        if ((((iVar1 == 0) ||
             (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE4_8c140922,ar6_00,ar7), iVar1 == 0)) ||
            (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE5_8c14092d,ar6_00,ar7), iVar1 == 0)) ||
           ((iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE6_8c140938,ar6_00,ar7), iVar1 == 0 ||
            (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE7_8c140943,ar6_00,ar7), iVar1 == 0)))) {
          strcpy(auStack_34,s_BIO_2_8c14094e,ar6_00,ar7,in_stack_fffffea4);
          strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
        }
        else {
          iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE0_8c140954,ar6_00,ar7);
          if (((iVar1 == 0) ||
              (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE1_8c140961,ar6_00,ar7), iVar1 == 0))
             || (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE2_8c14096e,ar6_00,ar7), iVar1 == 0))
          {
            strcpy(auStack_34,s_BIO_3_8c14097b,ar6_00,ar7,in_stack_fffffea4);
            strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
          }
          else {
            iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE3_8c140981,ar6_00,ar7);
            if ((iVar1 == 0) ||
               (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE4_8c14098e,ar6_00,ar7), iVar1 == 0))
            {
              strcpy(auStack_34,s_BIO_4_8c14099b,ar6_00,ar7,in_stack_fffffea4);
              strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
            }
          }
        }
      }
    }
  }
  else if (ar5 == 5) {
    iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE0_8c1408ea,ar6_00,ar7);
    if ((iVar1 == 0) ||
       (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE1_8c1408f5,ar6_00,ar7), iVar1 == 0)) {
      strcpy(auStack_34,s_BIO_0_EVENT_8c1409a1,ar6_00,ar7,in_stack_fffffea4);
      strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
    }
    else {
      iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE2_8c140906,ar6_00,ar7);
      if (iVar1 == 0) {
        strcpy(auStack_34,s_BIO_1_EVENT_8c1409ad,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
      }
      else {
        iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE3_8c140917,ar6_00,ar7);
        if ((((iVar1 == 0) ||
             (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE4_8c140922,ar6_00,ar7), iVar1 == 0)) ||
            (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE5_8c14092d,ar6_00,ar7), iVar1 == 0)) ||
           ((iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE6_8c140938,ar6_00,ar7), iVar1 == 0 ||
            (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE7_8c140943,ar6_00,ar7), iVar1 == 0)))) {
          strcpy(auStack_34,s_BIO_2_EVENT_8c1409b9,ar6_00,ar7,in_stack_fffffea4);
          strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
        }
        else {
          iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE0_8c140954,ar6_00,ar7);
          if (((iVar1 == 0) ||
              (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE1_8c140961,ar6_00,ar7), iVar1 == 0))
             || (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE2_8c14096e,ar6_00,ar7), iVar1 == 0))
          {
            strcpy(auStack_34,s_BIO_3_EVENT_8c1409c5,ar6_00,ar7,in_stack_fffffea4);
            strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
          }
          else {
            iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE3_8c140981,ar6_00,ar7);
            if ((iVar1 == 0) ||
               (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE4_8c14098e,ar6_00,ar7), iVar1 == 0))
            {
              strcpy(auStack_34,s_BIO_4_EVENT_8c1409d1,ar6_00,ar7,in_stack_fffffea4);
              strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
            }
          }
        }
      }
    }
  }
  else if (ar5 == 6) {
    strcpy(auStack_34,s_NARRATION_8c1409dd,ar6_00,ar7,in_stack_fffffea4);
    strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
    strcpy(auStack_74,ar6 + 0x40,ar6_00,ar7,in_stack_fffffea4);
  }
  strcpy(*(undefined4 *)(ar4 + 0x1050),auStack_34,ar6_00,ar7,in_stack_fffffea4);
  strcpy(*(int *)(ar4 + 0x1050) + 0x20,auStack_54,ar6_00,ar7,in_stack_fffffea4);
  ar5_00 = auStack_74;
  strcpy(*(int *)(ar4 + 0x1050) + 0x40,ar5_00,ar6_00,ar7,in_stack_fffffea4);
  uVar2 = FUN_8c0f824c(ar4,ar5_00,ar6_00,ar7);
  return uVar2;
}

__asm__(".globl _s_HIGYOLINE0_0f8370\n.set _s_HIGYOLINE0_0f8370, _s_HIGYOLINE0_0f8370_def\n");
