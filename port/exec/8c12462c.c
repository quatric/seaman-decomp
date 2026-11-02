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
undefined4 FUN_8c12462c_def(undefined4 ar4,undefined4 ar5,uint *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c12462c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint a5;
  uint *ar6_00;
  int unaff_r14 = 0;
  float fVar2;
  char in_T = 0;
  byte in_FPSCR_DN = 0;
  
  if (in_T == '\x01') {
    if ((char)((in_FPSCR_DN & 4) >> 2) == '\0') {
      fVar2 = 100.0;
    }
    else {
      fVar2 = 0.0;
    }
    *(short *)(unsigned)ar6 = (short)(int)(*(float *)(unsigned)(unaff_r14 + 0x494) * 4.3429446 * fVar2);
  }
  else if (ain0 == 2) {
    *(undefined1 *)(unsigned)(unaff_r14 + 0x4bc) = 0;
    *(short *)(unsigned)(unaff_r14 + 0x4b8) = (short)ar6;
  }
  else if (ain0 == 3) {
    a5 = *ar6;
    ar6_00 = ar6;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12394c(unaff_r14,a5,ar6,ar7));
    if ((uVar1 & 0xff) != 0) {
      return 0;
    }
    if ((uint)*(byte *)(unsigned)(unaff_r14 + 0x4c8) != (ar6[1] & 0xff)) {
      *(char *)(unsigned)(unaff_r14 + 0x4c8) = (char)ar6[1];
      if (ar6[1] == 0) {
        *(undefined2 *)(unsigned)(unaff_r14 + 0x4c2) = 0x1eb8;
      }
      else {
        *(undefined2 *)(unsigned)(unaff_r14 + 0x4c2) = 0x3333;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12356c(unaff_r14,a5,ar6_00,ar7));
    }
    *(uint *)(unsigned)(unaff_r14 + 0x4dc) = ar6[2] * 100;
  }
  else if (ain0 == 4) {
    *ar6 = (uint)*(byte *)(unsigned)(unaff_r14 + 0x4ac);
    ar6[1] = (uint)*(byte *)(unsigned)(unaff_r14 + 0x4c8);
    fVar2 = (float)*(int *)(unsigned)(unaff_r14 + 0x4dc);
    if (*(int *)(unsigned)(unaff_r14 + 0x4dc) < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar2 = fVar2 / 100.0;
    if (2.1474836e+09 < fVar2) {
      fVar2 = fVar2 + -4.2949673e+09;
    }
    ar6[2] = (int)fVar2;
  }
  else {
    if (ain0 == 5) {
      if (ar6 == (uint *)(unsigned)0x0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c123e4c(unaff_r14,ar5,0,ar7));
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c123d00(unaff_r14,*ar7 + (int)ar6,ar6,ar7));
    }
    else {
      if (ain0 != 6) {
        if (ain0 == 7) {
          *(short *)(unsigned)(unaff_r14 + 0x4d4) = *(short *)(unsigned)(unaff_r14 + 0x4d4) + 1;
          return 1;
        }
        if (ain0 == 0xff) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(unaff_r14,ar5,ar6,ar7));
          return 1;
        }
        return 0;
      }
      if (ar6 != (uint *)(unsigned)0x0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c123bac(unaff_r14,*ar7 + (int)ar6,ar6,ar7));
      }
    }
    *ar7 = *ar7 + 0x204;
  }
  return 1;
}

__asm__(".globl _FUN_8c12462c\n.set _FUN_8c12462c, _FUN_8c12462c_def\n");
