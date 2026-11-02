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
undefined4 FUN_8c0a6370_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a6370";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c031684(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0x21a4 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x2198 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x219c + ar4) = 0;
  *(undefined4 *)(unsigned)(0x230 + ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x18)),ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c023d7c(ar4 + 0x21a8,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0a6370\n.set _FUN_8c0a6370, _FUN_8c0a6370_def\n");
