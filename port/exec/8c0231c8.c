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
undefined4 * FUN_8c0231c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0231c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 ar5_00;
  float fVar2;
  ulonglong in_dr0 = 0;
  bool bVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c))); *(unsigned *)((((unsigned long)(fr0_ - 48)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 48)) - 8); FUN_8c0230f0(ar4,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  if (cVar5 == '\0') {
    in_dr0 = in_dr0 >> 0x20;
  }
  fVar2 = (float)in_dr0;
  bVar3 = fVar2 == 0.0;
  ar5_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  if (bVar3) {
    puVar1 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c023270);
  }
  else {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c))); *(unsigned *)((((unsigned long)(fr0_ - 48)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 48)) - 8); FUN_8c0230f0(ar4,ar5_00,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c022dac(ar4,((undefined1 *)(fr0_ - 0x2c)),ar6,ar7));
    puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
  }
  if (cVar5 == '\0') {
    fVar2 = *(float *)(unsigned)(ar4 + 4);
  }
  if (cVar4 == '\0' && 0.0 < fVar2) {
    puVar1 = ((undefined4 *)(unsigned)0x8c023278);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0231c8\n.set _FUN_8c0231c8, _FUN_8c0231c8_def\n");
