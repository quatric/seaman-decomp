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
undefined4 FUN_8c1f667e_def(int ar4,undefined4 ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f667e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  code *a6;
  undefined4 a7;
  
  iVar1 = (uint)(byte)(((undefined1 *)(unsigned)0x8c26c80c))[ar4] * 0xc;
  *(undefined4 *)(unsigned)(iVar1 + -0x73b8d2c0) = ar5;
  *(undefined4 *)(unsigned)(iVar1 + -0x73b8d2bc) = ar7;
  *(unsigned *)(unsigned)(iVar1 + -0x73b8d2b8) = ar6;
  a6 = ar6;
  a7 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f6494(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    iVar1 = -2;
  }
  else {
    a6 = (code *)0x0;
    a7 = 0;
    iVar1 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(((void *)(unsigned)0x8c1f65e8)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); s_FATAL_ERROR_Cannot_get_semap_1f06ae(ar4,8,0,0); });
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 0;
    }
  }
  if ((iVar1 < 0) && (ar6 != (code *)0x0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)ar6))(iVar1,ar7,a6,a7));
  }
  return 0;
}

__asm__(".globl _FUN_8c1f667e\n.set _FUN_8c1f667e, _FUN_8c1f667e_def\n");
