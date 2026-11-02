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
uint FUN_8c2345c8_def(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2345c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined1 *a7;
  float fVar2;
  float fVar3;
  int a4;
  int a5;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dVar4;
  
  a7 = ((undefined1 *)(unsigned)0x8c4aa3d4);
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
    dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa394),(float)(int)(short)((uint)ar4 >> 0x10));
  }
  else {
    dVar4 = CONCAT44D((*(uint *)(unsigned)0x8c4aa398),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa394));
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = F32HI(dVar4);
    fVar2 = F32LO(dVar4) * fVar3;
    dVar4 = CONCAT44D(fVar3,fVar2);
    a4 = (int)fVar2;
  }
  else {
    dVar4 = dVar4 * dVar4;
    a4 = (int)dVar4;
  }
  fVar2 = F32HI(dVar4);
  dVar4 = CONCAT44D(fVar2,(float)(int)(short)ar4);
  if (in_FPSCR_PR == '\0') {
    fVar3 = (float)(int)(short)ar4 * fVar2;
    dVar4 = CONCAT44D(fVar2,fVar3);
    a5 = (int)fVar3;
  }
  else {
    dVar4 = dVar4 * dVar4;
    a5 = (int)dVar4;
  }
  while (ar6 = ar6 + -1, -1 < ar6) {
    fVar2 = F32LO(dVar4);
    uVar1 = -ar6;
    if ((int)uVar1 < 0) {
      uVar1 = ar5 >> (~uVar1 & 0x1f) + 1;
    }
    else {
      uVar1 = ar5 << (uVar1 & 0x1f);
    }
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2340a0(a4,a5,(uVar1 & 1) + 0x30,a7));
    if (in_FPSCR_SZ == '\0') {
      fVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa394);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = (float)(int)(short)a4 + fVar2;
      dVar4 = CONCAT44D(fVar3,fVar2);
      a4 = (int)fVar3;
    }
    else {
      dVar4 = (double)(int)(short)a4;
      dVar4 = dVar4 + dVar4;
      a4 = (int)dVar4;
    }
  }
  uVar1 = (uint)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3d0) & 0x3ffffff | (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3dc);
  *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aabdc) + 8) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c2345c8\n.set _FUN_8c2345c8, _FUN_8c2345c8_def\n");
