#include "../decls.h"
int FUN_8c013374_def(uint *ar4,char *ar5,int ar6,byte *ar7)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char cVar6;
  float *pfVar7;
  int iVar8;
  char *pcVar9;
  char *ar4_00;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  float fVar14;
  bool bVar15;
  byte in_FPSCR_DN;
  int in_stack_ffffffa0;
  int iStack_58;
  char acStack_4c [4];
  char acStack_48 [32];
  undefined1 auStack_28 [12];
  
  pcVar13 = (char *)*ar4;
  uVar11 = 3;
  pcVar5 = pcVar13 + 4;
  if (((uint)pcVar5 & 3) != 0) {
    pcVar5 = pcVar13 + 8;
  }
  *ar4 = (uint)pcVar5;
  pfVar7 = (float *)(pcVar5 + -4);
  if (((uint)pfVar7 & 3) != 0) {
    pfVar7 = (float *)(pcVar5 + -8);
  }
  fVar14 = *pfVar7;
  if (*(int *)(ar7 + 8) == -1) {
    ar7[8] = 6;
    ar7[9] = 0;
    ar7[10] = 0;
    ar7[0xb] = 0;
  }
  acStack_48[0] = '0';
  if ((char)((in_FPSCR_DN & 4) >> 2) == '\0') {
    fVar2 = 0.0;
  }
  else {
    fVar2 = -INFINITY;
  }
  if (fVar14 == fVar2) {
    acStack_4c[0] = '\x01';
    acStack_48[1] = 0;
  }
  else {
    pcVar13 = acStack_4c;
    iVar3 = FUN_8c013060(0x11,auStack_28,&stack0xffffffa0,pcVar13);
    if (iVar3 != 0) {
      *ar5 = '\0';
      if (*(int *)(ar7 + 4) < *(int *)(ar7 + 8)) {
        *(undefined4 *)(ar7 + 0x28) = *(undefined4 *)(ar7 + 8);
      }
      else {
        *(undefined4 *)(ar7 + 0x28) = *(undefined4 *)(ar7 + 4);
      }
      if (iVar3 == 1) {
        uVar11 = 0x2b;
      }
      else if (iVar3 == -1) {
        uVar11 = 0x2d;
      }
      else {
        uVar11 = 0x2a;
      }
      ar7[1] = (byte)uVar11;
      return uVar11;
    }
    pcVar5 = acStack_48 + 1;
    uVar11 = 0x11;
    FUN_8c01243c(auStack_28,pcVar5,0x11,pcVar13);
  }
  for (iVar3 = 1; acStack_48[iVar3] == '0'; iVar3 = iVar3 + 1) {
  }
  if (1 < iVar3) {
    pcVar5 = (char *)log_message(acStack_48 + iVar3,pcVar5,uVar11,pcVar13);
    iVar8 = 1;
    in_stack_ffffffa0 = in_stack_ffffffa0 + iVar3 + -1;
    if (0 < (int)pcVar5) {
      do {
        acStack_48[iVar8] = acStack_48[iVar3];
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar8 <= (int)pcVar5);
    }
    acStack_48[iVar8] = '\0';
  }
  ar4_00 = acStack_48 + 1;
  iVar3 = log_message(ar4_00,pcVar5,uVar11,pcVar13);
  iVar8 = (int)(iVar3 + (uint)(iVar3 < 0)) >> 1;
  pcVar9 = ar4_00 + iVar3;
  iVar12 = 0;
  pcVar5 = ar4_00;
  if (0 < iVar8) {
    do {
      pcVar9 = pcVar9 + -1;
      cVar6 = *pcVar5;
      pcVar13 = (char *)(int)cVar6;
      iVar12 = iVar12 + 1;
      *pcVar5 = *pcVar9;
      *pcVar9 = cVar6;
      pcVar5 = pcVar5 + 1;
    } while (iVar12 < iVar8);
  }
  if (iVar3 == 0) {
    iVar3 = 1;
    acStack_48[1] = 0x30;
    in_stack_ffffffa0 = 0;
  }
  if ((ar6 == 0x67) || (iStack_58 = ar6, ar6 == 0x47)) {
    *ar7 = *ar7 | 0x20;
    iVar8 = in_stack_ffffffa0 + iVar3 + -1;
    if ((iVar8 < -4) || (*(int *)(ar7 + 8) < iVar8)) {
      iStack_58 = ar6 + -2;
    }
    else {
      iStack_58 = 0x66;
    }
  }
  if (acStack_4c[0] == '\x01') {
    if ((*ar7 & 0x18) == 8) {
      cVar6 = '+';
    }
    else {
      pcVar5 = ar5;
      if ((*ar7 & 0x18) != 0x10) goto LAB_8c013572;
      cVar6 = ' ';
    }
    *ar5 = cVar6;
    pcVar5 = ar5 + 1;
  }
  else {
    *ar5 = '-';
    pcVar5 = ar5 + 1;
  }
LAB_8c013572:
  pcVar9 = ar5 + 1;
  if (iStack_58 == 0x66) {
    if (in_stack_ffffffa0 < 0) {
      in_stack_ffffffa0 = in_stack_ffffffa0 + iVar3;
      iVar8 = in_stack_ffffffa0 + *(int *)(ar7 + 8);
      if ((iVar8 < iVar3) && (-1 < iVar8)) {
        FUN_8c013a72(acStack_48,iVar8 + 1,iVar12,pcVar13,in_stack_ffffffa0);
      }
      if (in_stack_ffffffa0 < 1) {
        bVar15 = acStack_48[0] != '0';
        if (bVar15) {
          iVar3 = iVar3 + 1;
          in_stack_ffffffa0 = in_stack_ffffffa0 + 1;
        }
        uVar10 = (uint)!bVar15;
        if (in_stack_ffffffa0 < 1) {
          *pcVar5 = '0';
        }
        else {
          uVar10 = 1;
          *pcVar5 = acStack_48[0];
        }
        pcVar5[1] = '.';
        iVar8 = 2;
        pcVar5 = pcVar5 + 2;
        if (in_stack_ffffffa0 < 0) {
          *(char **)(ar7 + 0x14) = pcVar5;
          if (-in_stack_ffffffa0 < *(int *)(ar7 + 8)) {
            *(int *)(ar7 + 0x20) = -in_stack_ffffffa0;
            iVar8 = -in_stack_ffffffa0;
          }
          else {
            *(undefined4 *)(ar7 + 0x20) = *(undefined4 *)(ar7 + 8);
            iVar8 = *(int *)(ar7 + 8);
          }
          iVar8 = iVar8 + 2;
          *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + in_stack_ffffffa0;
        }
        while (((int)(uVar10 - !bVar15) < iVar3 && (0 < *(int *)(ar7 + 8)))) {
          iVar8 = iVar8 + 1;
          *pcVar5 = acStack_48[uVar10];
          uVar10 = uVar10 + 1;
          pcVar5 = pcVar5 + 1;
          *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + -1;
        }
        bVar1 = *ar7;
        if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
          if (0 < *(int *)(ar7 + 8)) {
            *(char **)(ar7 + 0x18) = pcVar5;
            *(undefined4 *)(ar7 + 0x24) = *(undefined4 *)(ar7 + 8);
            iVar8 = iVar8 + *(int *)(ar7 + 8);
          }
        }
        else if (pcVar5[-1] == '0') {
          for (; pcVar5[-1] == '0'; pcVar5 = pcVar5 + -1) {
            iVar8 = iVar8 + -1;
          }
        }
        if ((((*ar7 & 4) == 0) && (pcVar5[-1] == '.')) &&
           (((*(int *)(ar7 + 0x20) == 0 && (*(int *)(ar7 + 0x24) == 0)) || ((*ar7 & 0x20) != 0)))) {
          iVar12 = *(int *)(ar7 + 0x20);
          iVar3 = *(int *)(ar7 + 0x24);
          pcVar5 = pcVar5 + -1;
          ar7[0x24] = 0;
          ar7[0x25] = 0;
          ar7[0x26] = 0;
          ar7[0x27] = 0;
          ar7[0x20] = 0;
          ar7[0x21] = 0;
          ar7[0x22] = 0;
          ar7[0x23] = 0;
          *(char **)(ar7 + 0x14) = ar5;
          ar7[0x18] = 0;
          ar7[0x19] = 0;
          ar7[0x1a] = 0;
          ar7[0x1b] = 0;
          iVar8 = ((iVar8 - iVar12) - iVar3) + -1;
        }
        iVar12 = (int)*ar5;
        if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
           ((iVar8 < *(int *)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
          *(char **)(ar7 + 0x10) = pcVar9;
          *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar8;
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        else if (iVar8 < *(int *)(ar7 + 4)) {
          *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar8;
        }
        else {
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        if (*(char **)(ar7 + 0x14) == ar5) {
          *(undefined4 *)(ar7 + 0x14) = *(undefined4 *)(ar7 + 0x10);
        }
      }
      else {
        bVar15 = acStack_48[0] != '0';
        iVar8 = 0;
        if (bVar15) {
          iVar3 = iVar3 + 1;
          in_stack_ffffffa0 = in_stack_ffffffa0 + 1;
        }
        uVar10 = (uint)!bVar15;
        for (; 0 < in_stack_ffffffa0; in_stack_ffffffa0 = in_stack_ffffffa0 + -1) {
          iVar8 = iVar8 + 1;
          *pcVar5 = acStack_48[uVar10];
          uVar10 = uVar10 + 1;
          pcVar5 = pcVar5 + 1;
        }
        *pcVar5 = '.';
        pcVar13 = pcVar5;
        while( true ) {
          pcVar5 = pcVar13 + 1;
          iVar8 = iVar8 + 1;
          if ((iVar3 <= (int)(uVar10 - !bVar15)) || (*(int *)(ar7 + 8) < 1)) break;
          pcVar13 = acStack_48 + uVar10;
          uVar10 = uVar10 + 1;
          *pcVar5 = *pcVar13;
          *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + -1;
          pcVar13 = pcVar5;
        }
        bVar1 = *ar7;
        if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
          *(char **)(ar7 + 0x14) = pcVar5;
          iVar8 = iVar8 + *(int *)(ar7 + 8);
          *(undefined4 *)(ar7 + 0x20) = *(undefined4 *)(ar7 + 8);
        }
        else if (*pcVar13 == '0') {
          for (; pcVar5[-1] == '0'; pcVar5 = pcVar5 + -1) {
            iVar8 = iVar8 + -1;
          }
        }
        if ((((*ar7 & 4) == 0) && (pcVar5[-1] == '.')) &&
           ((*(int *)(ar7 + 0x20) == 0 || ((*ar7 & 0x20) != 0)))) {
          iVar3 = *(int *)(ar7 + 0x20);
          ar7[0x20] = 0;
          ar7[0x21] = 0;
          ar7[0x22] = 0;
          ar7[0x23] = 0;
          pcVar5 = pcVar5 + -1;
          *(char **)(ar7 + 0x14) = ar5;
          iVar8 = (iVar8 - iVar3) + -1;
        }
        iVar12 = (int)*ar5;
        if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
           ((iVar8 < *(int *)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
          *(char **)(ar7 + 0x10) = pcVar9;
          *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar8;
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        else if (iVar8 < *(int *)(ar7 + 4)) {
          *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar8;
        }
        else {
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        if (*(char **)(ar7 + 0x14) == ar5) {
          *(undefined4 *)(ar7 + 0x14) = *(undefined4 *)(ar7 + 0x10);
        }
      }
    }
    else {
      iVar8 = 0;
      if (0 < iVar3) {
        do {
          cVar6 = *ar4_00;
          ar4_00 = ar4_00 + 1;
          iVar8 = iVar8 + 1;
          *pcVar5 = cVar6;
          pcVar5 = pcVar5 + 1;
        } while (iVar8 < iVar3);
      }
      *(char **)(ar7 + 0x14) = pcVar5;
      *(int *)(ar7 + 0x20) = in_stack_ffffffa0;
      iVar8 = 0;
      if ((((*ar7 & 0x20) == 0) && (0 < *(int *)(ar7 + 8))) || ((*ar7 & 4) != 0)) {
        *pcVar5 = '.';
        iVar8 = 1;
        pcVar5 = pcVar5 + 1;
      }
      bVar1 = *ar7;
      if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
        *(char **)(ar7 + 0x18) = pcVar5;
        *(undefined4 *)(ar7 + 0x24) = *(undefined4 *)(ar7 + 8);
        iVar8 = iVar8 + *(int *)(ar7 + 8);
      }
      iVar12 = (int)*ar5;
      iVar3 = iVar8 + in_stack_ffffffa0 + iVar3;
      if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
         ((iVar3 < *(int *)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
        *(char **)(ar7 + 0x10) = pcVar9;
        *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar3;
        ar7[0x28] = 0;
        ar7[0x29] = 0;
        ar7[0x2a] = 0;
        ar7[0x2b] = 0;
      }
      else if (iVar3 < *(int *)(ar7 + 4)) {
        *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar3;
      }
      else {
        ar7[0x28] = 0;
        ar7[0x29] = 0;
        ar7[0x2a] = 0;
        ar7[0x2b] = 0;
      }
    }
  }
  else {
    if (*(int *)(ar7 + 8) + 1 < iVar3) {
      FUN_8c013a72(acStack_48,*(int *)(ar7 + 8) + 2,iVar12,pcVar13,in_stack_ffffffa0);
    }
    if (acStack_48[0] != '0') {
      iVar3 = iVar3 + 1;
      in_stack_ffffffa0 = in_stack_ffffffa0 + -1;
    }
    uVar10 = (uint)(acStack_48[0] == '0');
    in_stack_ffffffa0 = in_stack_ffffffa0 + (iVar3 - uVar10);
    iVar8 = 1;
    *pcVar5 = acStack_48[uVar10];
    pcVar5[1] = '.';
    pcVar5 = pcVar5 + 1;
    while( true ) {
      pcVar13 = pcVar5 + 1;
      uVar10 = uVar10 + 1;
      iVar8 = iVar8 + 1;
      if ((iVar3 < (int)uVar10) || (*(int *)(ar7 + 8) < 1)) break;
      *pcVar13 = acStack_48[uVar10];
      *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + -1;
      pcVar5 = pcVar13;
    }
    bVar1 = *ar7;
    if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
      *(char **)(ar7 + 0x14) = pcVar13;
      *(undefined4 *)(ar7 + 0x20) = *(undefined4 *)(ar7 + 8);
      iVar8 = iVar8 + *(int *)(ar7 + 8);
    }
    else if (*pcVar5 == '0') {
      for (; pcVar13[-1] == '0'; pcVar13 = pcVar13 + -1) {
        iVar8 = iVar8 + -1;
      }
    }
    if ((((*ar7 & 4) == 0) && (pcVar13[-1] == '.')) &&
       ((*(int *)(ar7 + 0x20) == 0 || ((*ar7 & 0x20) != 0)))) {
      iVar3 = *(int *)(ar7 + 0x20);
      *(char **)(ar7 + 0x14) = ar5;
      pcVar13 = pcVar13 + -1;
      ar7[0x20] = 0;
      ar7[0x21] = 0;
      ar7[0x22] = 0;
      ar7[0x23] = 0;
      iVar8 = (iVar8 - iVar3) + -1;
    }
    if (iStack_58 == 0x65) {
      cVar6 = 'e';
    }
    else {
      cVar6 = 'E';
    }
    *pcVar13 = cVar6;
    if (in_stack_ffffffa0 < 0) {
      pcVar13[1] = '-';
      in_stack_ffffffa0 = -in_stack_ffffffa0;
    }
    else {
      pcVar13[1] = '+';
    }
    if (in_stack_ffffffa0 < 100) {
      pcVar13[2] = '0';
      pcVar13 = pcVar13 + 3;
      iVar8 = iVar8 + 4;
      *pcVar13 = '0';
    }
    else {
      pcVar13 = pcVar13 + 4;
      iVar8 = iVar8 + 5;
    }
    pcVar5 = pcVar13 + 1;
    uVar11 = 10;
    for (; 0 < in_stack_ffffffa0;
        in_stack_ffffffa0 = libgcc_divide_helper_010468(in_stack_ffffffa0,uVar11)) {
      uVar4 = libgcc_divide_helper_010614(in_stack_ffffffa0,uVar11);
      *pcVar13 = (char)uVar4 + '0';
      pcVar13 = pcVar13 + -1;
    }
    iVar12 = (int)*ar5;
    if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
       ((iVar8 < *(int *)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
      *(char **)(ar7 + 0x10) = pcVar9;
      *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar8;
      ar7[0x28] = 0;
      ar7[0x29] = 0;
      ar7[0x2a] = 0;
      ar7[0x2b] = 0;
    }
    else if (iVar8 < *(int *)(ar7 + 4)) {
      *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar8;
    }
    else {
      ar7[0x28] = 0;
      ar7[0x29] = 0;
      ar7[0x2a] = 0;
      ar7[0x2b] = 0;
    }
    if (*(char **)(ar7 + 0x14) == ar5) {
      *(undefined4 *)(ar7 + 0x14) = *(undefined4 *)(ar7 + 0x10);
    }
  }
  *pcVar5 = '\0';
  return iVar12;
}

__asm__(".globl _FUN_8c013374\n.set _FUN_8c013374, _FUN_8c013374_def\n");
