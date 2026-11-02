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
uint FUN_8c2346ce_def(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2346ce";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined1 *a7;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  short sVar7;
  int a4;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dVar6;
  
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
    dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa394),(float)(int)(short)((uint)ar4 >> 0x10));
  }
  else {
    dVar6 = CONCAT44D((*(uint *)(unsigned)0x8c4aa398),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa394));
  }
  iVar2 = ar6 + -1;
  iVar3 = iVar2 * 4;
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
  while (-1 < iVar2) {
    fVar4 = F32LO(dVar6);
    uVar1 = -iVar3;
    if ((int)uVar1 < 0) {
      uVar1 = ar5 >> (~uVar1 & 0x1f) + 1;
    }
    else {
      uVar1 = ar5 << (uVar1 & 0x1f);
    }
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2340a0(a4,(int)sVar7,(int)(char)(((undefined1 *)(unsigned)0x8c277a90))[uVar1 & 0xf],a7));
    if (in_FPSCR_SZ == '\0') {
      fVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa394);
    }
    iVar2 = iVar2 + -1;
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
    iVar3 = iVar3 + -4;
  }
  uVar1 = (uint)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3d0) & 0x3ffffff | (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3dc);
  *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aabdc) + 8) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c2346ce\n.set _FUN_8c2346ce, _FUN_8c2346ce_def\n");
