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
undefined4 * FUN_8c02327c_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02327c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined8 in_dr0 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x20)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 36)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 36)) - 8); FUN_8c0230f0(ar4,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c022dac(((undefined1 *)(unsigned)0x8c1259a8),(int)&(*(undefined8 *)(fr0_ - 0x20)) + 4,ar6,ar7));
  uVar1 = in_dr0;
  if (cVar5 == '\0') {
    (*(undefined8 *)(fr0_ - 0x20)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x20))+4)),(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = (*(undefined8 *)(fr0_ - 0x20));
  }
  (*(undefined8 *)(fr0_ - 0x20)) = uVar1;
  puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 36)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x20)) + 4,0xffffffff,ar6,ar7));
  fVar3 = (float)in_dr0;
  if (cVar5 == '\0') {
    fVar3 = *ar4;
  }
  if (cVar4 == '\0' && fVar3 < 0.0) {
    puVar2 = ((undefined4 *)(unsigned)0x8c0232e4);
  }
  return puVar2;
}

__asm__(".globl _FUN_8c02327c\n.set _FUN_8c02327c, _FUN_8c02327c_def\n");
