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
undefined4 FUN_8c0c4cd8_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0c4cd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int *a4;
  undefined1 *a5;
  int ar6_00;
  
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  a5 = ((undefined1 *)(fr0_ - 0x1c));
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x150 + *(int *)(unsigned)(ar4 + 8)))))(ar4,a5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c036988(ar4,a5,ar6_00,ar7));
  a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 * 4 + ar5));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x50))))(a4,ar4,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0c4d70(0x8c2b5628,0x96,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0c4cd8\n.set _FUN_8c0c4cd8, _FUN_8c0c4cd8_def\n");
