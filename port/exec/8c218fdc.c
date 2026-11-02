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
undefined4 FUN_8c218fdc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c218fdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  double dVar1;
  undefined8 in_xd2 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    dVar1 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
  }
  else {
    in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
    dVar1 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
  }
  if (in_FPSCR_PR == '\0') {
    dVar1 = CONCAT44D(F32HI(dVar1) * F32LO(dVar1),SUB84(dVar1,0));
  }
  else {
    dVar1 = dVar1 * dVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2c0) = (undefined4)(D2U(dVar1) >> 0x20);
    dVar1 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2c0) = SUB84(dVar1,0);
    dVar1 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
    in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0));
  }
  if (in_FPSCR_PR == '\0') {
    dVar1 = CONCAT44D(F32HI(dVar1) * F32LO(dVar1),SUB84(dVar1,0));
  }
  else {
    dVar1 = dVar1 * dVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2c4) = (undefined4)(D2U(dVar1) >> 0x20);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2cc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2c4) = SUB84(dVar1,0);
    in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2cc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2c4);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2c8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4);
  if (in_FPSCR_SZ != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2cc) = (undefined4)in_xd2;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa2d0) = (undefined4)((ulonglong)in_xd2 >> 0x20);
  }
  return 0x1c;
}

__asm__(".globl _FUN_8c218fdc\n.set _FUN_8c218fdc, _FUN_8c218fdc_def\n");
