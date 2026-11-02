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
undefined4 FUN_8c04dd34_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c04dd34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  undefined8 in_dr0 = 0;
  double dVar3;
  double in_dr14 = 0;
  undefined8 in_xd14 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x20))); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); FUN_8c0230f0(ar4 + 0x80,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c022dac(ar4 + 0x80,((undefined4 *)(fr0_ - 0x20)),ar6,ar7));
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar5 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),uVar1);
    (*(undefined4 *)(fr0_ - 0x24)) = uVar1;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)in_dr0;
    in_xd14 = in_dr0;
    ((undefined4 *)(fr0_ - 0x20))[0] = uVar1;
  }
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined4 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  fVar2 = (float)in_dr0;
  if (cVar5 == '\0') {
    fVar2 = *(float *)(unsigned)(ar4 + 0x84);
  }
  dVar3 = (double)(ulonglong)(uint)fVar2;
  if (cVar4 == '\0' && 0.0 < fVar2) {
    if (cVar5 == '\0') {
      dVar3 = CONCAT44D(0xbf800000,fVar2);
    }
    else {
      dVar3 = -7.94252464057912e-251;
    }
    if (cVar4 == '\0') {
      in_dr14 = (double)(ulonglong)(uint)(F32LO(in_dr14) * F32HI(dVar3));
    }
    else {
      in_dr14 = in_dr14 * dVar3;
    }
  }
  if (cVar5 == '\0') {
    *(int *)(unsigned)ar5 = SUB84(in_dr14,0);
  }
  else {
    *ar5 = in_xd14;
  }
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c02327c(ar4 + 0x80,uVar1,ar6,ar7));
  uVar1 = (undefined4)(D2U(dVar3) >> 0x20);
  (*(undefined4 *)(fr0_ - 0x28)) = uVar1;
  if (cVar5 != '\0') {
    (*(undefined4 *)(fr0_ - 0x28)) = SUB84(dVar3,0);
    (*(undefined4 *)(fr0_ - 0x24)) = uVar1;
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)((int)ar5 + 4) = (*(undefined4 *)(fr0_ - 0x28));
  }
  else {
    *(undefined8 *)(unsigned)((int)ar5 + 4) = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
  }
  return 0;
}

__asm__(".globl _FUN_8c04dd34\n.set _FUN_8c04dd34, _FUN_8c04dd34_def\n");
