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
undefined4 Class_12ad14_m1_0a09e8_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "Class_12ad14_m1_0a09e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 in_dr0 = 0;
  double dVar5;
  float fVar6;
  undefined4 in_fr3 = 0;
  double dVar7;
  undefined8 in_xd0 = 0;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  (vsp = ((unsigned long)(fr0_ - 128)), Class_129cbc_m1_031598(ar4,ar5,ar6,ar7));
  uVar3 = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x128) = 1;
  if ((*(int *)(unsigned)(ar4 + 0x124) == 0xb) || (*(int *)(unsigned)(ar4 + 0x124) == 0xc)) {
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x1c)),ar5[3],ar6,ar7));
    ar7 = ((undefined1 *)(fr0_ - 0x1c));
    ar6 = ar5[6];
    uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0a0c88(ar4,*ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0a37c8(ar4,ar5,ar6,ar7));
    if (iVar2 != 3) {
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x28)),ar5[3],ar6,ar7));
      ar7 = ((undefined1 *)(fr0_ - 0x28));
      ar6 = ar5[6];
      uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0a0c88(ar4,*ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 128)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
      (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x78))+4)) = uVar3;
    }
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02f2c0(*ar5,uVar3,ar6,ar7); });
  if (*(int *)(unsigned)(ar4 + 0x178) == 1) {
    uVar3 = 1;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02f2c0(*ar5,1,ar6,ar7); });
  }
  if ((*(int *)(unsigned)(ar4 + 0x124) != 6) && (*(int *)(unsigned)(ar4 + 0x124) != 0xb)) {
    uVar3 = *(undefined4 *)(unsigned)(ar5[1] + 4);
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031ab4(ar4,uVar3,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],uVar3,ar6,ar7));
  uVar1 = in_dr0;
  if (cVar10 == '\0') {
    (*(undefined8 *)(fr0_ - 0x78)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x78))+4)),(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = (*(undefined8 *)(fr0_ - 0x78));
  }
  (*(undefined8 *)(fr0_ - 0x78)) = uVar1;
  if (cVar10 == '\0') {
    dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4),in_fr3);
    dVar5 = CONCAT44D(0x41200000,(int)(*(undefined8 *)(fr0_ - 0x78)));
  }
  else {
    dVar7 = *(double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
    dVar5 = -3.051758552885531e-05;
    in_xd0 = (*(undefined8 *)(fr0_ - 0x78));
  }
  if (cVar9 == '\0') {
    fVar6 = F32HI(dVar5);
    fVar4 = F32LO(dVar5) - fVar6;
    dVar5 = CONCAT44D(fVar6,fVar4);
    bVar8 = F32HI(dVar7) < fVar4;
  }
  else {
    dVar5 = dVar5 - dVar5;
    bVar8 = dVar7 < dVar5;
  }
  fVar4 = F32LO(dVar5);
  if (!bVar8) {
    if (cVar10 == '\0') {
      fVar4 = *(float *)(unsigned)(ar4 + 0x18);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x18);
    }
    if (cVar9 == '\0' && 0.0 < fVar4) {
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(0xbf000000,*(undefined4 *)(unsigned)(ar4 + 0x18));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x18);
        dVar7 = -7.937143354252696e-251;
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar7) * F32HI(dVar7);
      }
      else {
        fVar4 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x18) = fVar4;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x18) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_length(ar4 + 0x14,uVar3,ar6,ar7));
    }
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x224,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x48)),ar4 + 0x90,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x58)),ar4 + 0x13c,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_assign(ar4 + 4,((undefined1 *)(fr0_ - 0x68)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), vec3_clear(ar4 + 0x13c,uVar3,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 0;
  return 0x1d4;
}

__asm__(".globl _Class_12ad14_m1_0a09e8\n.set _Class_12ad14_m1_0a09e8, _Class_12ad14_m1_0a09e8_def\n");
