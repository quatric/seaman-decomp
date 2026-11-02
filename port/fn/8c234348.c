#include "../decls.h"
uint FUN_8c234348_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  short sVar7;
  int a4;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dVar6;
  
  DAT_8c277b10 = 0xfffffffe;
  _DAT_8c4aa3d4 = *(uint *)(_DAT_8c4aabdc + 8);
  _DAT_8c4aa3dc = _DAT_8c4aa3d4 & 0xfc000000;
  _DAT_8c4aa3d8 = _DAT_8c4aa3d4 >> 0x18 & 0x1c;
  _DAT_8c4aa3d0 = (undefined4 *)((_DAT_8c4aa3d4 & 0x3ffffff | 0xe0000000) + 0x10);
  _DAT_ff000038 = _DAT_8c4aa3d8;
  _DAT_ff00003c = _DAT_8c4aa3d8;
  *_DAT_8c4aa3d0 = _DAT_8c4aa390;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3c0;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3c4;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3cc;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3c8;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + 8;
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(_DAT_8c4aa394,(float)(int)(short)((uint)ar4 >> 0x10));
  }
  else {
    dVar6 = (double)CONCAT44((*(uint *)0x8c4aa398),_DAT_8c4aa394);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = (float)((ulonglong)dVar6 >> 0x20);
    fVar4 = SUB84(dVar6,0) * fVar5;
    dVar6 = (double)CONCAT44(fVar5,fVar4);
    a4 = (int)fVar4;
  }
  else {
    dVar6 = dVar6 * dVar6;
    a4 = (int)dVar6;
  }
  fVar4 = (float)((ulonglong)dVar6 >> 0x20);
  dVar6 = (double)CONCAT44(fVar4,(float)(int)(short)ar4);
  if (in_FPSCR_PR == '\0') {
    fVar5 = (float)(int)(short)ar4 * fVar4;
    dVar6 = (double)CONCAT44(fVar4,fVar5);
    sVar7 = (short)(int)fVar5;
  }
  else {
    dVar6 = dVar6 * dVar6;
    sVar7 = (short)(int)dVar6;
  }
  fVar4 = SUB84(dVar6,0);
  if (ar5 < 0) {
    FUN_8c2340a0(a4,(int)sVar7,0x2d,ar7);
    ar5 = -ar5;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = _DAT_8c4aa394;
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = (float)(int)(short)a4 + fVar4;
      dVar6 = (double)CONCAT44(fVar5,fVar4);
      a4 = (int)fVar5;
    }
    else {
      dVar6 = (double)(int)(short)a4;
      dVar6 = dVar6 + dVar6;
      a4 = (int)dVar6;
    }
  }
  do {
    if (ar6 < 1) {
      uVar2 = (uint)_DAT_8c4aa3d0 & 0x3ffffff | _DAT_8c4aa3dc;
      *(uint *)(_DAT_8c4aabdc + 8) = uVar2;
      return uVar2;
    }
    fVar4 = SUB84(dVar6,0);
    if (ar6 == 1) {
      iVar1 = libgcc_divide_helper_010614(ar5,10);
    }
    else if (ar6 == 2) {
      iVar1 = libgcc_divide_helper_010468(ar5,10);
      ar5 = ar5 + iVar1 * -10;
    }
    else {
      if (ar6 == 3) {
        iVar1 = libgcc_divide_helper_010468(ar5,100);
        iVar3 = 100;
LAB_8c234536:
        iVar3 = iVar1 * iVar3;
      }
      else {
        if (ar6 == 4) {
          iVar1 = libgcc_divide_helper_010468(ar5,1000);
          iVar3 = 1000;
LAB_8c23454a:
          iVar3 = iVar1 * iVar3;
LAB_8c23454c:
          ar5 = ar5 - iVar3;
          goto LAB_8c234550;
        }
        if (ar6 == 5) {
          iVar1 = libgcc_divide_helper_010468(ar5,10000);
          iVar3 = 10000;
          goto LAB_8c234536;
        }
        if (ar6 == 6) {
          iVar1 = libgcc_divide_helper_010468(ar5,100000);
          iVar3 = 100000;
          goto LAB_8c23454a;
        }
        if (ar6 != 7) {
          if (ar6 != 8) {
            if (ar6 == 9) {
              iVar1 = libgcc_divide_helper_010468(ar5,100000000);
              iVar3 = 100000000;
              goto LAB_8c234536;
            }
            iVar1 = libgcc_divide_helper_010468(ar5,1000000000);
            iVar3 = 1000000000;
            goto LAB_8c23454a;
          }
          iVar1 = libgcc_divide_helper_010468(ar5,10000000);
          iVar3 = iVar1 * 10000000;
          goto LAB_8c23454c;
        }
        iVar1 = libgcc_divide_helper_010468(ar5,1000000);
        iVar3 = iVar1 * 1000000;
      }
      ar5 = ar5 - iVar3;
    }
LAB_8c234550:
    if (9 < iVar1) {
      iVar1 = 0;
    }
    FUN_8c2340a0(a4,(int)sVar7,iVar1 + 0x30,ar7);
    ar6 = ar6 + -1;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = _DAT_8c4aa394;
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = (float)(int)(short)a4 + fVar4;
      dVar6 = (double)CONCAT44(fVar5,fVar4);
      a4 = (int)fVar5;
    }
    else {
      dVar6 = (double)(int)(short)a4;
      dVar6 = dVar6 + dVar6;
      a4 = (int)dVar6;
    }
  } while( true );
}

__asm__(".globl _FUN_8c234348\n.set _FUN_8c234348, _FUN_8c234348_def\n");
