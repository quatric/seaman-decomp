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
int FUN_8c2681d2_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2681d2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *in_r2 = 0;
  int iVar1;
  int ar5_00;
  undefined4 in_PR = 0;
  
  iVar1 = ar6;
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4bd518) = 0x16;
    (*(undefined1 *)(unsigned)0x8c4bd51c) = *(undefined1 *)(unsigned)(ar4 + 1);
    (*(undefined1 *)(unsigned)0x8c4bd51d) = (undefined1)((char)ar5 + 0x80);
    (*(undefined1 *)(unsigned)0x8c4bd51e) = (undefined1)ar6;
    iVar1 = ar6 >> 8;
    (*(undefined1 *)(unsigned)0x8c4bd51f) = (undefined1)((uint)ar6 >> 8);
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c267fe8(((undefined1 *)(unsigned)0x8c4bd518),(char)ar5 + 0x80,iVar1,ar7));
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c2681d0),ar5_00,iVar1,ar7); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2681d2\n.set _FUN_8c2681d2, _FUN_8c2681d2_def\n");
