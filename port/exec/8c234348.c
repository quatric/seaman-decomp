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
uint FUN_8c234348_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c234348";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
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
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c277b10) = 0xfffffffe;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3d4) = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aabdc) + 8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3dc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3d4) & 0xfc000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3d8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3d4) >> 0x18 & 0x1c;
  *(unsigned *)0x8c4aa3d0 = (unsigned)(unsigned long)((undefined4 *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3d4) & 0x3ffffff | 0xe0000000) + 0x10));
  (*(undefined4 *)(unsigned)(unsigned)0xff000038) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3d8);
  (*(undefined4 *)(unsigned)(unsigned)0xff00003c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3d8);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3d0 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa390));
  *(unsigned *)0x8c4aa3d0 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3d0) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3d0 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3c0));
  *(unsigned *)0x8c4aa3d0 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3d0) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3d0 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3c4));
  *(unsigned *)0x8c4aa3d0 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3d0) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3d0 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3cc));
  *(unsigned *)0x8c4aa3d0 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3d0) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3d0 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3c8));
  *(unsigned *)0x8c4aa3d0 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3d0) + 8);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa394),(float)(int)(short)((uint)ar4 >> 0x10));
  }
  else {
    dVar6 = CONCAT44D((*(uint *)(unsigned)0x8c4aa398),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa394));
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = F32HI(dVar6);
    fVar4 = F32LO(dVar6) * fVar5;
    dVar6 = CONCAT44D(fVar5,fVar4);
    a4 = (int)fVar4;
  }
  else {
    dVar6 = dVar6 * dVar6;
    a4 = (int)dVar6;
  }
  fVar4 = F32HI(dVar6);
  dVar6 = CONCAT44D(fVar4,(float)(int)(short)ar4);
  if (in_FPSCR_PR == '\0') {
    fVar5 = (float)(int)(short)ar4 * fVar4;
    dVar6 = CONCAT44D(fVar4,fVar5);
    sVar7 = (short)(int)fVar5;
  }
  else {
    dVar6 = dVar6 * dVar6;
    sVar7 = (short)(int)dVar6;
  }
  fVar4 = F32LO(dVar6);
  if (ar5 < 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2340a0(a4,(int)sVar7,0x2d,ar7));
    ar5 = -ar5;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa394);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = (float)(int)(short)a4 + fVar4;
      dVar6 = CONCAT44D(fVar5,fVar4);
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
      uVar2 = (uint)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3d0) & 0x3ffffff | (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3dc);
      *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aabdc) + 8) = uVar2;
      return uVar2;
    }
    fVar4 = F32LO(dVar6);
    if (ar6 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010614(ar5,10,vr6,vr7));
    }
    else if (ar6 == 2) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468(ar5,10,vr6,vr7));
      ar5 = ar5 + iVar1 * -10;
    }
    else {
      if (ar6 == 3) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468(ar5,100,vr6,vr7));
        iVar3 = 100;
LAB_8c234536:
        iVar3 = iVar1 * iVar3;
      }
      else {
        if (ar6 == 4) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468(ar5,1000,vr6,vr7));
          iVar3 = 1000;
LAB_8c23454a:
          iVar3 = iVar1 * iVar3;
LAB_8c23454c:
          ar5 = ar5 - iVar3;
          goto LAB_8c234550;
        }
        if (ar6 == 5) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468(ar5,10000,vr6,vr7));
          iVar3 = 10000;
          goto LAB_8c234536;
        }
        if (ar6 == 6) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468(ar5,100000,vr6,vr7));
          iVar3 = 100000;
          goto LAB_8c23454a;
        }
        if (ar6 != 7) {
          if (ar6 != 8) {
            if (ar6 == 9) {
              iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468(ar5,100000000,vr6,vr7));
              iVar3 = 100000000;
              goto LAB_8c234536;
            }
            iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468(ar5,1000000000,vr6,vr7));
            iVar3 = 1000000000;
            goto LAB_8c23454a;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468(ar5,10000000,vr6,vr7));
          iVar3 = iVar1 * 10000000;
          goto LAB_8c23454c;
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468(ar5,1000000,vr6,vr7));
        iVar3 = iVar1 * 1000000;
      }
      ar5 = ar5 - iVar3;
    }
LAB_8c234550:
    if (9 < iVar1) {
      iVar1 = 0;
    }
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2340a0(a4,(int)sVar7,iVar1 + 0x30,ar7));
    ar6 = ar6 + -1;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa394);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = (float)(int)(short)a4 + fVar4;
      dVar6 = CONCAT44D(fVar5,fVar4);
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
