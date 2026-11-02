#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c013374_def(uint *ar4,char *ar5,int ar6,byte *ar7)

{
  ring[rp++ & 255] = "FUN_8c013374";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 192; for (int i_ = 0; i_ < 192; i_++) z_[i_] = 0; }
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
  byte in_FPSCR_DN = 0;
  
  pcVar13 = (char *)(unsigned)*ar4;
  uVar11 = 3;
  pcVar5 = pcVar13 + 4;
  if (((uint)pcVar5 & 3) != 0) {
    pcVar5 = pcVar13 + 8;
  }
  *ar4 = (uint)pcVar5;
  pfVar7 = (float *)(unsigned)(pcVar5 + -4);
  if (((uint)pfVar7 & 3) != 0) {
    pfVar7 = (float *)(unsigned)(pcVar5 + -8);
  }
  fVar14 = *pfVar7;
  if (*(int *)(unsigned)(ar7 + 8) == -1) {
    ar7[8] = 6;
    ar7[9] = 0;
    ar7[10] = 0;
    ar7[0xb] = 0;
  }
  ((char *)(fr0_ - 0x48))[0] = '0';
  if ((char)((in_FPSCR_DN & 4) >> 2) == '\0') {
    fVar2 = 0.0;
  }
  else {
    fVar2 = -INFINITY;
  }
  if (fVar14 == fVar2) {
    ((char *)(fr0_ - 0x4c))[0] = '\x01';
    ((char *)(fr0_ - 0x48))[1] = 0;
  }
  else {
    pcVar13 = ((char *)(fr0_ - 0x4c));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c013060(0x11,((undefined1 *)(fr0_ - 0x28)),(fr0_ + (int)0xffffffa0),pcVar13));
    if (iVar3 != 0) {
      *ar5 = '\0';
      if (*(int *)(unsigned)(ar7 + 4) < *(int *)(unsigned)(ar7 + 8)) {
        *(undefined4 *)(unsigned)(ar7 + 0x28) = *(undefined4 *)(unsigned)(ar7 + 8);
      }
      else {
        *(undefined4 *)(unsigned)(ar7 + 0x28) = *(undefined4 *)(unsigned)(ar7 + 4);
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
    pcVar5 = ((char *)(fr0_ - 0x48)) + 1;
    uVar11 = 0x11;
    (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c01243c(((undefined1 *)(fr0_ - 0x28)),pcVar5,0x11,pcVar13));
  }
  for (iVar3 = 1; ((char *)(fr0_ - 0x48))[iVar3] == '0'; iVar3 = iVar3 + 1) {
  }
  if (1 < iVar3) {
    pcVar5 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 192)), log_message(((char *)(fr0_ - 0x48)) + iVar3,pcVar5,uVar11,pcVar13));
    iVar8 = 1;
    (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x60)) + iVar3 + -1;
    if (0 < (int)pcVar5) {
      do {
        ((char *)(fr0_ - 0x48))[iVar8] = ((char *)(fr0_ - 0x48))[iVar3];
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar8 <= (int)pcVar5);
    }
    ((char *)(fr0_ - 0x48))[iVar8] = '\0';
  }
  ar4_00 = ((char *)(fr0_ - 0x48)) + 1;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 192)), log_message(ar4_00,pcVar5,uVar11,pcVar13));
  iVar8 = (int)(iVar3 + (uint)(iVar3 < 0)) >> 1;
  pcVar9 = ar4_00 + iVar3;
  iVar12 = 0;
  pcVar5 = ar4_00;
  if (0 < iVar8) {
    do {
      pcVar9 = pcVar9 + -1;
      cVar6 = *pcVar5;
      pcVar13 = (char *)(unsigned)(int)cVar6;
      iVar12 = iVar12 + 1;
      *pcVar5 = *pcVar9;
      *pcVar9 = cVar6;
      pcVar5 = pcVar5 + 1;
    } while (iVar12 < iVar8);
  }
  if (iVar3 == 0) {
    iVar3 = 1;
    ((char *)(fr0_ - 0x48))[1] = 0x30;
    (*(int *)(fr0_ - 0x60)) = 0;
  }
  if ((ar6 == 0x67) || ((*(int *)(fr0_ - 0x58)) = ar6, ar6 == 0x47)) {
    *ar7 = *ar7 | 0x20;
    iVar8 = (*(int *)(fr0_ - 0x60)) + iVar3 + -1;
    if ((iVar8 < -4) || (*(int *)(unsigned)(ar7 + 8) < iVar8)) {
      (*(int *)(fr0_ - 0x58)) = ar6 + -2;
    }
    else {
      (*(int *)(fr0_ - 0x58)) = 0x66;
    }
  }
  if (((char *)(fr0_ - 0x4c))[0] == '\x01') {
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
  if ((*(int *)(fr0_ - 0x58)) == 0x66) {
    if ((*(int *)(fr0_ - 0x60)) < 0) {
      (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x60)) + iVar3;
      iVar8 = (*(int *)(fr0_ - 0x60)) + *(int *)(unsigned)(ar7 + 8);
      if ((iVar8 < iVar3) && (-1 < iVar8)) {
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x60))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 192)); FUN_8c013a72(((char *)(fr0_ - 0x48)),iVar8 + 1,iVar12,pcVar13); });
      }
      if ((*(int *)(fr0_ - 0x60)) < 1) {
        bVar15 = ((char *)(fr0_ - 0x48))[0] != '0';
        if (bVar15) {
          iVar3 = iVar3 + 1;
          (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x60)) + 1;
        }
        uVar10 = (uint)!bVar15;
        if ((*(int *)(fr0_ - 0x60)) < 1) {
          *pcVar5 = '0';
        }
        else {
          uVar10 = 1;
          *pcVar5 = ((char *)(fr0_ - 0x48))[0];
        }
        pcVar5[1] = '.';
        iVar8 = 2;
        pcVar5 = pcVar5 + 2;
        if ((*(int *)(fr0_ - 0x60)) < 0) {
          *(unsigned *)(unsigned)(ar7 + 0x14) = pcVar5;
          if (-(*(int *)(fr0_ - 0x60)) < *(int *)(unsigned)(ar7 + 8)) {
            *(int *)(unsigned)(ar7 + 0x20) = -(*(int *)(fr0_ - 0x60));
            iVar8 = -(*(int *)(fr0_ - 0x60));
          }
          else {
            *(undefined4 *)(unsigned)(ar7 + 0x20) = *(undefined4 *)(unsigned)(ar7 + 8);
            iVar8 = *(int *)(unsigned)(ar7 + 8);
          }
          iVar8 = iVar8 + 2;
          *(int *)(unsigned)(ar7 + 8) = *(int *)(unsigned)(ar7 + 8) + (*(int *)(fr0_ - 0x60));
        }
        while (((int)(uVar10 - !bVar15) < iVar3 && (0 < *(int *)(unsigned)(ar7 + 8)))) {
          iVar8 = iVar8 + 1;
          *pcVar5 = ((char *)(fr0_ - 0x48))[uVar10];
          uVar10 = uVar10 + 1;
          pcVar5 = pcVar5 + 1;
          *(int *)(unsigned)(ar7 + 8) = *(int *)(unsigned)(ar7 + 8) + -1;
        }
        bVar1 = *ar7;
        if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
          if (0 < *(int *)(unsigned)(ar7 + 8)) {
            *(unsigned *)(unsigned)(ar7 + 0x18) = pcVar5;
            *(undefined4 *)(unsigned)(ar7 + 0x24) = *(undefined4 *)(unsigned)(ar7 + 8);
            iVar8 = iVar8 + *(int *)(unsigned)(ar7 + 8);
          }
        }
        else if (pcVar5[-1] == '0') {
          for (; pcVar5[-1] == '0'; pcVar5 = pcVar5 + -1) {
            iVar8 = iVar8 + -1;
          }
        }
        if ((((*ar7 & 4) == 0) && (pcVar5[-1] == '.')) &&
           (((*(int *)(unsigned)(ar7 + 0x20) == 0 && (*(int *)(unsigned)(ar7 + 0x24) == 0)) || ((*ar7 & 0x20) != 0)))) {
          iVar12 = *(int *)(unsigned)(ar7 + 0x20);
          iVar3 = *(int *)(unsigned)(ar7 + 0x24);
          pcVar5 = pcVar5 + -1;
          ar7[0x24] = 0;
          ar7[0x25] = 0;
          ar7[0x26] = 0;
          ar7[0x27] = 0;
          ar7[0x20] = 0;
          ar7[0x21] = 0;
          ar7[0x22] = 0;
          ar7[0x23] = 0;
          *(unsigned *)(unsigned)(ar7 + 0x14) = ar5;
          ar7[0x18] = 0;
          ar7[0x19] = 0;
          ar7[0x1a] = 0;
          ar7[0x1b] = 0;
          iVar8 = ((iVar8 - iVar12) - iVar3) + -1;
        }
        iVar12 = (int)*ar5;
        if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
           ((iVar8 < *(int *)(unsigned)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
          *(unsigned *)(unsigned)(ar7 + 0x10) = pcVar9;
          *(int *)(unsigned)(ar7 + 0x1c) = *(int *)(unsigned)(ar7 + 4) - iVar8;
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        else if (iVar8 < *(int *)(unsigned)(ar7 + 4)) {
          *(int *)(unsigned)(ar7 + 0x28) = *(int *)(unsigned)(ar7 + 4) - iVar8;
        }
        else {
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        if (((char *)(unsigned long)*(unsigned *)(unsigned)(ar7 + 0x14)) == ar5) {
          *(undefined4 *)(unsigned)(ar7 + 0x14) = *(undefined4 *)(unsigned)(ar7 + 0x10);
        }
      }
      else {
        bVar15 = ((char *)(fr0_ - 0x48))[0] != '0';
        iVar8 = 0;
        if (bVar15) {
          iVar3 = iVar3 + 1;
          (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x60)) + 1;
        }
        uVar10 = (uint)!bVar15;
        for (; 0 < (*(int *)(fr0_ - 0x60)); (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x60)) + -1) {
          iVar8 = iVar8 + 1;
          *pcVar5 = ((char *)(fr0_ - 0x48))[uVar10];
          uVar10 = uVar10 + 1;
          pcVar5 = pcVar5 + 1;
        }
        *pcVar5 = '.';
        pcVar13 = pcVar5;
        while( true ) {
          pcVar5 = pcVar13 + 1;
          iVar8 = iVar8 + 1;
          if ((iVar3 <= (int)(uVar10 - !bVar15)) || (*(int *)(unsigned)(ar7 + 8) < 1)) break;
          pcVar13 = ((char *)(fr0_ - 0x48)) + uVar10;
          uVar10 = uVar10 + 1;
          *pcVar5 = *pcVar13;
          *(int *)(unsigned)(ar7 + 8) = *(int *)(unsigned)(ar7 + 8) + -1;
          pcVar13 = pcVar5;
        }
        bVar1 = *ar7;
        if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
          *(unsigned *)(unsigned)(ar7 + 0x14) = pcVar5;
          iVar8 = iVar8 + *(int *)(unsigned)(ar7 + 8);
          *(undefined4 *)(unsigned)(ar7 + 0x20) = *(undefined4 *)(unsigned)(ar7 + 8);
        }
        else if (*pcVar13 == '0') {
          for (; pcVar5[-1] == '0'; pcVar5 = pcVar5 + -1) {
            iVar8 = iVar8 + -1;
          }
        }
        if ((((*ar7 & 4) == 0) && (pcVar5[-1] == '.')) &&
           ((*(int *)(unsigned)(ar7 + 0x20) == 0 || ((*ar7 & 0x20) != 0)))) {
          iVar3 = *(int *)(unsigned)(ar7 + 0x20);
          ar7[0x20] = 0;
          ar7[0x21] = 0;
          ar7[0x22] = 0;
          ar7[0x23] = 0;
          pcVar5 = pcVar5 + -1;
          *(unsigned *)(unsigned)(ar7 + 0x14) = ar5;
          iVar8 = (iVar8 - iVar3) + -1;
        }
        iVar12 = (int)*ar5;
        if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
           ((iVar8 < *(int *)(unsigned)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
          *(unsigned *)(unsigned)(ar7 + 0x10) = pcVar9;
          *(int *)(unsigned)(ar7 + 0x1c) = *(int *)(unsigned)(ar7 + 4) - iVar8;
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        else if (iVar8 < *(int *)(unsigned)(ar7 + 4)) {
          *(int *)(unsigned)(ar7 + 0x28) = *(int *)(unsigned)(ar7 + 4) - iVar8;
        }
        else {
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        if (((char *)(unsigned long)*(unsigned *)(unsigned)(ar7 + 0x14)) == ar5) {
          *(undefined4 *)(unsigned)(ar7 + 0x14) = *(undefined4 *)(unsigned)(ar7 + 0x10);
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
      *(unsigned *)(unsigned)(ar7 + 0x14) = pcVar5;
      *(int *)(unsigned)(ar7 + 0x20) = (*(int *)(fr0_ - 0x60));
      iVar8 = 0;
      if ((((*ar7 & 0x20) == 0) && (0 < *(int *)(unsigned)(ar7 + 8))) || ((*ar7 & 4) != 0)) {
        *pcVar5 = '.';
        iVar8 = 1;
        pcVar5 = pcVar5 + 1;
      }
      bVar1 = *ar7;
      if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
        *(unsigned *)(unsigned)(ar7 + 0x18) = pcVar5;
        *(undefined4 *)(unsigned)(ar7 + 0x24) = *(undefined4 *)(unsigned)(ar7 + 8);
        iVar8 = iVar8 + *(int *)(unsigned)(ar7 + 8);
      }
      iVar12 = (int)*ar5;
      iVar3 = iVar8 + (*(int *)(fr0_ - 0x60)) + iVar3;
      if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
         ((iVar3 < *(int *)(unsigned)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
        *(unsigned *)(unsigned)(ar7 + 0x10) = pcVar9;
        *(int *)(unsigned)(ar7 + 0x1c) = *(int *)(unsigned)(ar7 + 4) - iVar3;
        ar7[0x28] = 0;
        ar7[0x29] = 0;
        ar7[0x2a] = 0;
        ar7[0x2b] = 0;
      }
      else if (iVar3 < *(int *)(unsigned)(ar7 + 4)) {
        *(int *)(unsigned)(ar7 + 0x28) = *(int *)(unsigned)(ar7 + 4) - iVar3;
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
    if (*(int *)(unsigned)(ar7 + 8) + 1 < iVar3) {
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x60))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 192)); FUN_8c013a72(((char *)(fr0_ - 0x48)),*(int *)(unsigned)(ar7 + 8) + 2,iVar12,pcVar13); });
    }
    if (((char *)(fr0_ - 0x48))[0] != '0') {
      iVar3 = iVar3 + 1;
      (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x60)) + -1;
    }
    uVar10 = (uint)(((char *)(fr0_ - 0x48))[0] == '0');
    (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x60)) + (iVar3 - uVar10);
    iVar8 = 1;
    *pcVar5 = ((char *)(fr0_ - 0x48))[uVar10];
    pcVar5[1] = '.';
    pcVar5 = pcVar5 + 1;
    while( true ) {
      pcVar13 = pcVar5 + 1;
      uVar10 = uVar10 + 1;
      iVar8 = iVar8 + 1;
      if ((iVar3 < (int)uVar10) || (*(int *)(unsigned)(ar7 + 8) < 1)) break;
      *pcVar13 = ((char *)(fr0_ - 0x48))[uVar10];
      *(int *)(unsigned)(ar7 + 8) = *(int *)(unsigned)(ar7 + 8) + -1;
      pcVar5 = pcVar13;
    }
    bVar1 = *ar7;
    if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
      *(unsigned *)(unsigned)(ar7 + 0x14) = pcVar13;
      *(undefined4 *)(unsigned)(ar7 + 0x20) = *(undefined4 *)(unsigned)(ar7 + 8);
      iVar8 = iVar8 + *(int *)(unsigned)(ar7 + 8);
    }
    else if (*pcVar5 == '0') {
      for (; pcVar13[-1] == '0'; pcVar13 = pcVar13 + -1) {
        iVar8 = iVar8 + -1;
      }
    }
    if ((((*ar7 & 4) == 0) && (pcVar13[-1] == '.')) &&
       ((*(int *)(unsigned)(ar7 + 0x20) == 0 || ((*ar7 & 0x20) != 0)))) {
      iVar3 = *(int *)(unsigned)(ar7 + 0x20);
      *(unsigned *)(unsigned)(ar7 + 0x14) = ar5;
      pcVar13 = pcVar13 + -1;
      ar7[0x20] = 0;
      ar7[0x21] = 0;
      ar7[0x22] = 0;
      ar7[0x23] = 0;
      iVar8 = (iVar8 - iVar3) + -1;
    }
    if ((*(int *)(fr0_ - 0x58)) == 0x65) {
      cVar6 = 'e';
    }
    else {
      cVar6 = 'E';
    }
    *pcVar13 = cVar6;
    if ((*(int *)(fr0_ - 0x60)) < 0) {
      pcVar13[1] = '-';
      (*(int *)(fr0_ - 0x60)) = -(*(int *)(fr0_ - 0x60));
    }
    else {
      pcVar13[1] = '+';
    }
    if ((*(int *)(fr0_ - 0x60)) < 100) {
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
    for (; 0 < (*(int *)(fr0_ - 0x60));
        (*(int *)(fr0_ - 0x60)) = (vsp = ((unsigned long)(fr0_ - 192)), libgcc_divide_helper_010468((*(int *)(fr0_ - 0x60)),uVar11,vr6,vr7))) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 192)), libgcc_divide_helper_010614((*(int *)(fr0_ - 0x60)),uVar11,vr6,vr7));
      *pcVar13 = (char)uVar4 + '0';
      pcVar13 = pcVar13 + -1;
    }
    iVar12 = (int)*ar5;
    if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
       ((iVar8 < *(int *)(unsigned)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
      *(unsigned *)(unsigned)(ar7 + 0x10) = pcVar9;
      *(int *)(unsigned)(ar7 + 0x1c) = *(int *)(unsigned)(ar7 + 4) - iVar8;
      ar7[0x28] = 0;
      ar7[0x29] = 0;
      ar7[0x2a] = 0;
      ar7[0x2b] = 0;
    }
    else if (iVar8 < *(int *)(unsigned)(ar7 + 4)) {
      *(int *)(unsigned)(ar7 + 0x28) = *(int *)(unsigned)(ar7 + 4) - iVar8;
    }
    else {
      ar7[0x28] = 0;
      ar7[0x29] = 0;
      ar7[0x2a] = 0;
      ar7[0x2b] = 0;
    }
    if (((char *)(unsigned long)*(unsigned *)(unsigned)(ar7 + 0x14)) == ar5) {
      *(undefined4 *)(unsigned)(ar7 + 0x14) = *(undefined4 *)(unsigned)(ar7 + 0x10);
    }
  }
  *pcVar5 = '\0';
  return iVar12;
}

__asm__(".globl _FUN_8c013374\n.set _FUN_8c013374, _FUN_8c013374_def\n");
