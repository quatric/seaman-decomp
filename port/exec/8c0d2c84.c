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
undefined4 FUN_8c0d2c84_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d2c84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 140; for (int i_ = 0; i_ < 140; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  
  (*(float *)(fr0_ - 0x1c)) = *ar4;
  (*(float *)(fr0_ - 0x18)) = ar4[1];
  (*(float *)(fr0_ - 0x14)) = ar4[2];
  (*(undefined4 *)(fr0_ - 0x2c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13f488);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined1 *)(unsigned)0x8c13f48c);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c13f490);
  (*(undefined4 *)(fr0_ - 0x20)) = (*(undefined1 *)(unsigned)0x8c13f494);
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined1 *)(unsigned)0x8c13f49c);
  (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined1 *)(unsigned)0x8c13f4a0);
  (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined1 *)(unsigned)0x8c13f4a4);
  (*(unsigned *)(fr0_ - 0x3c) = (unsigned)(unsigned long)(&(*(float *)(fr0_ - 0x1c))));
  (*(float *)(fr0_ - 0x6c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13f4a8);
  (*(float *)(fr0_ - 0x64)) = (float)(*(undefined1 *)(unsigned)0x8c13f4b0);
  (*(float *)(fr0_ - 0x60)) = (float)(*(undefined1 *)(unsigned)0x8c13f4b4);
  (*(float *)(fr0_ - 0x58)) = (float)(*(undefined1 *)(unsigned)0x8c13f4bc);
  (*(float *)(fr0_ - 0x54)) = (float)(*(undefined1 *)(unsigned)0x8c13f4c0);
  (*(float *)(fr0_ - 0x4c)) = (float)(*(undefined1 *)(unsigned)0x8c13f4c8);
  (*(float *)(fr0_ - 0x48)) = (float)(*(undefined1 *)(unsigned)0x8c13f4cc);
  (*(float *)(fr0_ - 0x40)) = (float)(*(undefined1 *)(unsigned)0x8c13f4d4);
  (*(float *)(fr0_ - 0x68)) = ar4[1] - 1.0;
  (*(float *)(fr0_ - 0x5c)) = ar4[1] - 1.0;
  (*(float *)(fr0_ - 0x50)) = ar4[1] - 1.0;
  (*(float *)(fr0_ - 0x44)) = ar4[1] - 1.0;
  (*(undefined4 *)(fr0_ - 0x88)) = (*(undefined1 *)(unsigned)0x8c13f4dc);
  (*(undefined4 *)(fr0_ - 0x80)) = (*(undefined1 *)(unsigned)0x8c13f4e4);
  (*(unsigned *)(fr0_ - 0x8c) = (unsigned)(unsigned long)(&(*(float *)(fr0_ - 0x6c))));
  (*(unsigned *)(fr0_ - 0x84) = (unsigned)(unsigned long)(&(*(undefined2 *)(fr0_ - 0x7c))));
  if (ar4[5] == 0.0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c234fd0(((float * *)(fr0_ - 0x3c)),1,0,ar7));
  }
  else {
    fVar2 = (ar4[4] / 12.2) * ar4[0x21];
    if (ar4[0x1d] == 2.8026e-45) {
      (*(float *)(fr0_ - 0x6c)) = *ar4 - fVar2 * 5.0;
      (*(float *)(fr0_ - 0x64)) = ar4[2] + fVar2 * 5.0;
      (*(float *)(fr0_ - 0x60)) = *ar4 - fVar2 * 5.0;
      (*(float *)(fr0_ - 0x58)) = ar4[2] - fVar2 * 5.0;
      (*(float *)(fr0_ - 0x54)) = *ar4 + fVar2 * 5.0;
      (*(float *)(fr0_ - 0x4c)) = ar4[2] - fVar2 * 5.0;
      (*(float *)(fr0_ - 0x48)) = *ar4 + fVar2 * 5.0;
      (*(float *)(fr0_ - 0x40)) = ar4[2] + fVar2 * 5.0;
      (*(undefined2 *)(fr0_ - 0x7c)) = 0;
      (*(undefined2 *)(fr0_ - 0x7a)) = 0;
      (*(undefined2 *)(fr0_ - 0x78)) = 0;
      (*(undefined2 *)(fr0_ - 0x76)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x74)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x72)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x70)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x6e)) = 0;
      (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c01538c(ar5,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c014a94(ar5,0,ar6,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c235bfc(((float * *)(fr0_ - 0x8c)),4,0x80000060,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0d2f04(ar4 + 0x12,ar5,ar6,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)ar4[0x12] + 0x1c))))(ar4 + 0x12,ar4[0x20],ar6,ar7));
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d2c84\n.set _FUN_8c0d2c84, _FUN_8c0d2c84_def\n");
