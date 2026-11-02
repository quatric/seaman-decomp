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
undefined4 FUN_8c03263c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03263c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined1 *ar5_01;
  ulonglong uVar1;
  double dVar2;
  undefined8 in_dr4 = 0;
  float fVar3;
  undefined4 in_fr7 = 0;
  undefined4 in_fr6 = 0;
  float fVar5;
  double dVar4;
  undefined8 in_xd12 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar3 = F32HI(in_dr4);
  dVar4 = CONCAT44D((int)in_dr4,in_fr7);
  uVar1 = (ulonglong)(uint)fVar3;
  ar5_00 = ar5;
  fVar5 = (*(float *)(fr0_ - 0x48));
  if (0.0 < fVar3) {
    uVar1 = CONCAT44(0xbf000000,fVar3);
    (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
    fVar5 = (float)(uVar1 >> 0x20);
    if (cVar8 == '\0') {
      fVar5 = (*(float *)(fr0_ - 0x48));
    }
  }
  (*(float *)(fr0_ - 0x48)) = fVar5;
  dVar2 = (double)(uVar1 & 0xffffffff);
  fVar5 = F32HI(dVar4);
  if (cVar7 == '\0') {
    bVar6 = 0.0 < fVar5;
  }
  else {
    bVar6 = dVar2 < dVar4;
  }
  if (bVar6) {
    if (cVar8 == '\0') {
      dVar2 = CONCAT44D(0xbf000000,(int)uVar1);
    }
    else {
      dVar2 = -8.365700502157518e-251;
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(fVar5 * F32HI(dVar2),SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar2;
    }
    (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c032ab0(ar4,ar5_00,ar6,ar7));
  }
  if (cVar8 == '\0') {
    dVar2 = CONCAT44D(in_fr6,SUB84(dVar2,0));
  }
  else {
    dVar2 = CONCAT44D(ar5,in_fr6);
  }
  if (cVar7 == '\0') {
    bVar6 = SUB84(dVar4,0) < F32HI(dVar2);
  }
  else {
    bVar6 = dVar4 < dVar2;
  }
  if (bVar6) {
    (*(float *)(fr0_ - 0x48)) = SUB84(dVar4,0);
    if (cVar8 != '\0') {
      (*(float *)(fr0_ - 0x48)) = (float)in_xd12;
      ((float *)(fr0_ - 0x44))[0] = F32HI(in_xd12);
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c032ab0(ar4,ar5_00,ar6,ar7));
    fVar5 = F32HI(dVar2);
    (*(float *)(fr0_ - 0x48)) = fVar5;
    if (cVar8 != '\0') {
      (*(float *)(fr0_ - 0x54)) = SUB84(dVar2,0);
      (*(float *)(fr0_ - 0x48)) = (*(float *)(fr0_ - 0x54));
      ((float *)(fr0_ - 0x44))[0] = fVar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x24)),ar5_00,ar6,ar7));
  ar5_01 = ((undefined1 *)(fr0_ - 0x24));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c023484(ar5,ar5_01,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c02374c(((undefined1 *)(fr0_ - 0x34)),ar5_01,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); Vec3_scale(((float *)(fr0_ - 0x44)),&(*(float *)(fr0_ - 0x48)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((float *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), object_dtor_delete(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c03263c\n.set _FUN_8c03263c, _FUN_8c03263c_def\n");
