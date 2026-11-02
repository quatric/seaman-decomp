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
undefined4 FUN_8c023334_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023334";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 112; for (int i_ = 0; i_ < 112; i_++) z_[i_] = 0; }
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 in_dr0 = 0;
  code *pcVar4;
  char cVar5;
  char cVar6;
  
  fVar3 = F32HI(in_dr0);
  cVar6 = '\0';
  cVar5 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 1;
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02327c(ar5,ar5,ar6,ar7));
  fVar1 = fVar3;
  if (cVar6 == '\0') {
    fVar1 = ((float *)(fr0_ - 0x6c))[0];
  }
  ((float *)(fr0_ - 0x6c))[0] = fVar1;
  (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02327c(ar4,uVar2,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0230f0(ar4,uVar2,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x40)),ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0230f0(ar5,uVar2,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x50)),ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x5c)),uVar2,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((float *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x5c)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_assign(((undefined1 *)(fr0_ - 0x20)),((float *)(fr0_ - 0x6c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((float *)(fr0_ - 0x6c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), object_dtor_delete(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
  if (cVar6 == '\0') {
    pcVar4 = (code *)0x42b40000;
  }
  else {
    fVar3 = 90.0;
    pcVar4 = ((void *)0x8c023d68);
  }
  if (cVar5 == '\0' && (float)(uint)pcVar4 < fVar3) {
    uVar2 = 4;
  }
  else {
    uVar2 = 3;
  }
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c023334\n.set _FUN_8c023334, _FUN_8c023334_def\n");
