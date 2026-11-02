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
undefined4 FUN_8c21a854_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c21a854";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  undefined4 uVar4;
  double dVar5;
  double in_xd2 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  pdVar3 = 0x8c4aa4e0;
  pdVar2 = 0x8c4aa4a8;
  iVar1 = 0x8c4aa2f8;
  if (in_FPSCR_SZ == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4a8,*(undefined4 *)(unsigned)0x8c4aa4dc);
  }
  else {
    in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4dc;
    dVar5 = *(undefined4 *)(unsigned)0x8c4aa4a8;
  }
  if (in_FPSCR_PR == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)(0x8c4aa2f8 + 0x10) = (int)(D2U(dVar5) >> 0x20);
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,*(undefined4 *)(unsigned)pdVar3);
  }
  else {
    *(double *)(unsigned)(0x8c4aa2f8 + 0x10) = dVar5;
    dVar5 = *pdVar2;
    in_xd2 = *pdVar3;
  }
  if (in_FPSCR_PR == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)(iVar1 + 0x14) = (int)(D2U(dVar5) >> 0x20);
    *(undefined4 *)(unsigned)(iVar1 + 0x18) = *(undefined4 *)(unsigned)((int)pdVar2 + 0xc);
    uVar4 = *(undefined4 *)(unsigned)(pdVar2 + 2);
  }
  else {
    *(double *)(unsigned)(iVar1 + 0x14) = dVar5;
    uVar4 = SUB84(dVar5,0);
    *(undefined8 *)(unsigned)(iVar1 + 0x18) = *(undefined8 *)(unsigned)((int)pdVar2 + 0xc);
    in_xd2 = pdVar2[2];
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)(iVar1 + 0x1c) = uVar4;
  }
  else {
    *(double *)(unsigned)(iVar1 + 0x1c) = in_xd2;
  }
  return 0x1c;
}

__asm__(".globl _FUN_8c21a854\n.set _FUN_8c21a854, _FUN_8c21a854_def\n");
