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
undefined4 FUN_8c2650ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2650ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int ar5_00;
  uint ar4_00;
  undefined4 uVar2;
  
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c2784c0));
  ar5_00 = (int)0x100;
  *(uint *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0)) = 0x8c4ba677 & 0xffffffe0;
  ar4_00 = 0x8c4bb603 & 0xffffffe0;
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c265ac8(0x8c4babe4,0x40,ar6,ar7));
  uVar2 = 0x40;
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c265ba8(0x8c4bb3e4,0x40,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c266bd4(ar4_00,uVar2,ar6,ar7));
  uVar2 = 0x8c4bb804;
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c268920(0x8c4bb804,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2667cc(uVar2,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)((int)0x1a8 + *(int *)(unsigned)puVar1) = 0;
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f8d98(*(int *)(unsigned)puVar1 + (int)0x1ac,0,ar6,ar7));
  *(undefined4 *)(unsigned)0x8c4ba648 = *(undefined4 *)(unsigned)((int)0x1ac + *(int *)(unsigned)puVar1);
  return 0;
}

__asm__(".globl _FUN_8c2650ec\n.set _FUN_8c2650ec, _FUN_8c2650ec_def\n");
