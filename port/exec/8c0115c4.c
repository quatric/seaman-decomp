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
int FUN_8c0115c4_def(int ar4,char *ar5,int ar6,byte *ar7)

{
  ring[rp++ & 255] = "FUN_8c0115c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *extraout_r2 = 0;
  char *pcVar5;
  undefined4 unaff_r8 = 0;
  int iVar6;
  int iVar7;
  
  *ar5 = '\0';
  if (((ar6 == 100) || (ar6 == 0x69)) || (ar6 == 0x75)) {
    unaff_r8 = 10;
  }
  else if (ar6 == 0x6f) {
    unaff_r8 = 8;
  }
  else if ((ar6 == 0x78) || (ar6 == 0x58)) {
    unaff_r8 = 0x10;
  }
  iVar3 = ar4;
  if (((ar6 == 100) || (ar6 == 0x69)) && (ar4 < 0)) {
    iVar3 = -ar4;
  }
  iVar7 = 0;
  iVar6 = 0;
  pcVar5 = ar5;
  if ((iVar3 == 0) && (*(int *)(unsigned)(ar7 + 8) != 0)) {
    ((char *)(fr0_ - 0x2d))[1] = 0x30;
    iVar7 = 1;
  }
  else {
    while (iVar3 != 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), libgcc_divide_helper_0106dc(iVar3,unaff_r8,vr6,vr7));
      *extraout_r2 = (char)uVar2;
      if (((char *)(fr0_ - 0x2d))[iVar7 + 1] < '\n') {
        ((char *)(fr0_ - 0x2d))[iVar7 + 1] = ((char *)(fr0_ - 0x2d))[iVar7 + 1] + '0';
      }
      else {
        pcVar4 = ((char *)(fr0_ - 0x2d)) + iVar7 + 1;
        if (ar6 == 0x78) {
          *pcVar4 = *pcVar4 + 'W';
        }
        else {
          *pcVar4 = *pcVar4 + '7';
        }
      }
      iVar3 = (vsp = ((unsigned long)(fr0_ - 48)), libgcc_divide_helper_01051c(iVar3,unaff_r8,vr6,vr7));
      iVar7 = iVar7 + 1;
    }
  }
  if ((*ar7 & 4) != 0) {
    if (ar6 == 0x6f) {
      if (ar4 != 0) {
        ((char *)(fr0_ - 0x2d))[iVar7 + 1] = '0';
        iVar7 = iVar7 + 1;
      }
    }
    else if (((ar6 == 0x78) || (ar6 == 0x58)) && (ar4 != 0)) {
      *pcVar5 = '0';
      pcVar5[1] = (char)ar6;
      iVar6 = 2;
      pcVar5 = pcVar5 + 2;
    }
  }
  iVar6 = iVar6 + iVar7;
  if (((ar6 == 100) || (ar6 == 0x69)) && ((*(int *)(unsigned)(ar7 + 8) != 0 || (ar4 != 0)))) {
    if (ar4 < 0) {
      *pcVar5 = '-';
    }
    else {
      if ((*ar7 & 8) == 0) {
        if ((*ar7 & 0x10) != 0) {
          *pcVar5 = ' ';
          iVar6 = iVar6 + 1;
          pcVar5 = pcVar5 + 1;
        }
        goto LAB_8c011706;
      }
      *pcVar5 = '+';
    }
    iVar6 = iVar6 + 1;
    pcVar5 = pcVar5 + 1;
  }
LAB_8c011706:
  cVar1 = *ar5;
  if (((cVar1 == '+') || (cVar1 == '-')) || (cVar1 == ' ')) {
    *(unsigned *)(unsigned)(ar7 + 0x14) = ar5 + 1;
  }
  else if ((*ar7 & 4) == 0) {
    *(unsigned *)(unsigned)(ar7 + 0x14) = ar5;
  }
  else if ((ar6 == 0x58) || (ar6 == 0x78)) {
    *(unsigned *)(unsigned)(ar7 + 0x14) = ar5 + 2;
  }
  else if (ar6 == 0x6f) {
    *(unsigned *)(unsigned)(ar7 + 0x14) = ar5 + 1;
  }
  if (iVar6 < *(int *)(unsigned)(ar7 + 8)) {
    *(int *)(unsigned)(ar7 + 0x20) = *(int *)(unsigned)(ar7 + 8) - iVar6;
    iVar6 = *(int *)(unsigned)(ar7 + 8);
  }
  else {
    ar7[0x20] = 0;
    ar7[0x21] = 0;
    ar7[0x22] = 0;
    ar7[0x23] = 0;
  }
  iVar3 = (int)*ar5;
  if (((iVar3 == 0x2b) || (iVar3 == 0x2d)) || (iVar3 == 0x20)) {
    if (iVar6 < *(int *)(unsigned)(ar7 + 4)) {
      iVar3 = (int)(char)ar7[1];
      if (iVar3 == 0x30) {
        *(int *)(unsigned)(ar7 + 0x20) = *(int *)(unsigned)(ar7 + 0x20) + (*(int *)(unsigned)(ar7 + 4) - iVar6);
        ar7[0x28] = 0;
        ar7[0x29] = 0;
        ar7[0x2a] = 0;
        ar7[0x2b] = 0;
        goto joined_r0x8c0117a8;
      }
      goto LAB_8c011792;
    }
  }
  else {
LAB_8c011792:
    if (iVar6 < *(int *)(unsigned)(ar7 + 4)) {
      *(int *)(unsigned)(ar7 + 0x28) = *(int *)(unsigned)(ar7 + 4) - iVar6;
      goto joined_r0x8c0117a8;
    }
  }
  ar7[0x28] = 0;
  ar7[0x29] = 0;
  ar7[0x2a] = 0;
  ar7[0x2b] = 0;
joined_r0x8c0117a8:
  while (iVar6 = iVar7 + -1, -1 < iVar6) {
    *pcVar5 = ((char *)(fr0_ - 0x2d))[iVar7];
    pcVar5 = pcVar5 + 1;
    iVar3 = iVar6;
    iVar7 = iVar6;
  }
  *pcVar5 = '\0';
  return iVar3;
}

__asm__(".globl _FUN_8c0115c4\n.set _FUN_8c0115c4, _FUN_8c0115c4_def\n");
