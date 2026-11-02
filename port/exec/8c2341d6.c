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
uint FUN_8c2341d6_def(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2341d6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  float fVar5;
  float fVar6;
  int a4;
  int a5;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dVar7;
  
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
    dVar7 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa394),(float)(int)(short)((uint)ar4 >> 0x10));
  }
  else {
    dVar7 = CONCAT44D((*(uint *)(unsigned)0x8c4aa398),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa394));
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = F32HI(dVar7);
    fVar5 = F32LO(dVar7) * fVar6;
    dVar7 = CONCAT44D(fVar6,fVar5);
    a4 = (int)fVar5;
  }
  else {
    dVar7 = dVar7 * dVar7;
    a4 = (int)dVar7;
  }
  fVar5 = F32HI(dVar7);
  dVar7 = CONCAT44D(fVar5,(float)(int)(short)ar4);
  if (in_FPSCR_PR == '\0') {
    fVar6 = (float)(int)(short)ar4 * fVar5;
    dVar7 = CONCAT44D(fVar5,fVar6);
    a5 = (int)fVar6;
  }
  else {
    dVar7 = dVar7 * dVar7;
    a5 = (int)dVar7;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), log_message(ar5,((undefined1 *)(unsigned)0x8c4aa3d8),((undefined1 *)(unsigned)0x8c4aa3d4),ar7));
  sVar4 = 0;
  if (0 < (short)uVar2) {
    do {
      fVar5 = F32LO(dVar7);
      cVar1 = *ar5;
      ar5 = ar5 + 1;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2340a0(a4,a5,(int)cVar1,ar7));
      if (in_FPSCR_SZ == '\0') {
        fVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa394);
      }
      sVar4 = sVar4 + 1;
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)(int)(short)a4 + fVar5;
        dVar7 = CONCAT44D(fVar6,fVar5);
        a4 = (int)fVar6;
      }
      else {
        dVar7 = (double)(int)(short)a4;
        dVar7 = dVar7 + dVar7;
        a4 = (int)dVar7;
      }
    } while (sVar4 < (short)uVar2);
  }
  uVar3 = (uint)((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3d0) & 0x3ffffff | (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3dc);
  *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aabdc) + 8) = uVar3;
  return uVar3;
}

__asm__(".globl _FUN_8c2341d6\n.set _FUN_8c2341d6, _FUN_8c2341d6_def\n");
