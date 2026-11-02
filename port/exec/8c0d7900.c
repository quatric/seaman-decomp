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
int FUN_8c0d7900_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7900";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 144; for (int i_ = 0; i_ < 144; i_++) z_[i_] = 0; }
  int iVar1;
  float *ar5_00;
  undefined4 ar5_01;
  undefined4 *ar6_00;
  undefined4 ar6_01;
  undefined4 ar7_00;
  
  (*(float *)(fr0_ - 0x3c)) = *(float *)(unsigned)(ar4 + 4) - 12.0;
  (*(undefined4 *)(fr0_ - 0x38)) = *(undefined4 *)(unsigned)(ar4 + 8);
  (*(float *)(fr0_ - 0x34)) = *(float *)(unsigned)(ar4 + 0xc) - 12.0;
  (*(float *)(fr0_ - 0x30)) = *(float *)(unsigned)(ar4 + 4) - 12.0;
  (*(undefined4 *)(fr0_ - 0x2c)) = *(undefined4 *)(unsigned)(ar4 + 8);
  (*(float *)(fr0_ - 0x28)) = *(float *)(unsigned)(ar4 + 0xc) + 12.0;
  (*(float *)(fr0_ - 0x24)) = *(float *)(unsigned)(ar4 + 4) + 12.0;
  (*(undefined4 *)(fr0_ - 0x20)) = *(undefined4 *)(unsigned)(ar4 + 8);
  (*(float *)(fr0_ - 0x1c)) = *(float *)(unsigned)(ar4 + 0xc) + 12.0;
  (*(float *)(fr0_ - 0x18)) = *(float *)(unsigned)(ar4 + 4) + 12.0;
  (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(ar4 + 8);
  (*(float *)(fr0_ - 0x10)) = *(float *)(unsigned)(ar4 + 0xc) - 12.0;
  (*(undefined4 *)(fr0_ - 0x4c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13f59c);
  (*(undefined4 *)(fr0_ - 0x48)) = (*(undefined1 *)(unsigned)0x8c13f5a0);
  (*(undefined4 *)(fr0_ - 0x44)) = (*(undefined1 *)(unsigned)0x8c13f5a4);
  (*(undefined4 *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c13f5a8);
  ar7_00 = 4;
  ar6_00 = &(*(undefined4 *)(fr0_ - 0x4c));
  ar5_00 = &(*(float *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c01642c(((undefined1 *)(fr0_ - 0x90)),ar5_00,ar6_00,4));
  iVar1 = *(int *)(unsigned)(ar4 + 0x30);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), Class_129808_m2_0148d8(ar4,ar5_00,ar6_00,ar7_00));
  }
  else if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c01538c(ar5,ar5_00,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c014a94(ar5,ar6,ar6_00,ar7_00));
    ar6_01 = 4;
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c0164c8(((undefined1 *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c4377fc) + *(int *)(unsigned)(ar4 + 0x34) * 0x10,4,ar7_00));
    ar5_01 = 0x80000060;
    ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 144)); FUN_8c0d1450(((undefined1 *)(fr0_ - 0x90)),0x80000060,ar6_01,ar7_00); });
    iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c016524(((undefined1 *)(fr0_ - 0x90)),ar5_01,ar6_01,ar7_00));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d7900\n.set _FUN_8c0d7900, _FUN_8c0d7900_def\n");
