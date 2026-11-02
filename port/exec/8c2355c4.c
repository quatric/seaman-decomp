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
undefined4 FUN_8c2355c4_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2355c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < ar5 + 1) {
    do {
      iVar2 = iVar1 * 4;
      *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + 6);
      *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar4[1] + iVar2));
      *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
      *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)((float)(int)*(short *)(unsigned)(ar4[2] + iVar2 + 2) * 0.00390625);
      *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
      *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)((float)(int)*(short *)(unsigned)(iVar2 + ar4[2]) * 0.00390625);
      *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
      *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0));
      *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
      *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(*ar4 + iVar1 * 8 + 4));
      *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
      *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(iVar1 * 8 + *ar4));
      *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
      *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(-3.689349e+19);
      iVar1 = iVar1 + 1;
      *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + 8);
    } while (iVar1 < ar5 + 1);
  }
  iVar2 = iVar1 * 4;
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + 6);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(ar4[1] + iVar2));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)((float)(int)*(short *)(unsigned)(ar4[2] + iVar2 + 2) * 0.00390625);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)((float)(int)*(short *)(unsigned)(iVar2 + ar4[2]) * 0.00390625);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(*ar4 + iVar1 * 8 + 4));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(*(float *)(unsigned)(iVar1 * 8 + *ar4));
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + -1);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa3e4 = (unsigned)(-1.5845633e+29);
  *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa3e4) + 8);
  return 4;
}

__asm__(".globl _FUN_8c2355c4\n.set _FUN_8c2355c4, _FUN_8c2355c4_def\n");
