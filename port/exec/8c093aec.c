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
undefined4 FUN_8c093aec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c093aec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 164; for (int i_ = 0; i_ < 164; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double in_dr0 = 0;
  double dVar6;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd0 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar2 = ar6;
  uVar4 = ar7;
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  ar5_00 = ar4 + 0x24c;
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),ar5_00,uVar2,uVar4));
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c093b3c:
    if (*(char *)(unsigned)(ar4 + 0x280) == '\x01') {
      uVar4 = 0;
      uVar2 = 0xffffffff;
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 164)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 164)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,uVar4));
      *(undefined1 *)(unsigned)(ar4 + 0x280) = 0;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c034148(ar4 + 0xb0,0,uVar2,uVar4));
      if ((iVar1 != 1) && (iVar1 != 2)) {
        (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,uVar2,uVar4));
        return 1;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c022fc0(ar5,((undefined1 *)(fr0_ - 0x2c)),uVar2,uVar4));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),(int)((ulonglong)in_dr0 >> 0x20));
      in_dr0 = in_xd0;
    }
    else {
      dVar6 = *(double *)(unsigned)(ar4 + 0x24);
    }
    if (cVar8 == '\0') {
      fVar5 = F32LO(dVar6) / F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = fVar5;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = in_dr0;
      fVar5 = 2.0;
    }
    uVar2 = ar6;
    uVar4 = ar7;
    (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c032518(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0x4c)),uVar2,uVar4));
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,uVar2,uVar4));
    if (cVar9 == '\0') {
      in_dr0 = CONCAT44D(0x40a00000,fVar5);
    }
    else {
      in_dr0 = -8.360315941118363e-251;
    }
    uVar2 = ar7;
    uVar4 = (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c032788(ar4,ar4 + 0x24c,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_assign(ar4 + 0x24c,uVar4,ar6,uVar2));
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),ar4 + 0x24c,ar6,uVar2));
    uVar4 = 0x8c2846e8;
    (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c031b68(ar4,0x8c2846e8,ar6,uVar2));
    (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c031c64(ar4,uVar4,ar6,uVar2));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    ar5_00 = 0x24;
    uVar2 = ar5;
    (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c033474(ar4,0x24,ar5,ar7));
    uVar4 = ar7;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c093cfc;
    goto LAB_8c093b3c;
  }
  (vsp = ((unsigned long)(fr0_ - 164)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,uVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c0231c8(ar4 + 0x14,ar5_00,uVar2,uVar4));
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D(0xc1700000,SUB84(in_dr0,0));
    in_fr15 = F32HI(in_dr0);
  }
  else {
    dVar6 = 16777228.08984375;
  }
  if (cVar8 == '\0') {
    bVar7 = in_fr15 < F32HI(dVar6);
  }
  else {
    bVar7 = CONCAT44D(in_fr14,in_fr15) < dVar6;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      in_dr0 = CONCAT44D(0xc1700000,SUB84(dVar6,0));
    }
    else {
      in_dr0 = 16777228.08984375;
    }
    if (cVar8 == '\0') {
      in_dr0 = CONCAT44D(F32HI(in_dr0) - in_fr15,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = in_dr0 - CONCAT44D(in_fr14,in_fr15);
    }
  }
  else {
    if (cVar9 == '\0') {
      in_dr0 = CONCAT44D(0x41700000,SUB84(dVar6,0));
    }
    else {
      in_dr0 = -7.950726470801028e-251;
    }
    if (cVar8 == '\0') {
      bVar7 = F32HI(in_dr0) < in_fr15;
    }
    else {
      bVar7 = in_dr0 < CONCAT44D(in_fr14,in_fr15);
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        in_dr0 = CONCAT44D(0x41700000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = -7.950726470801028e-251;
      }
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44D(F32HI(in_dr0) - in_fr15,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 - CONCAT44D(in_fr14,in_fr15);
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c02374c(ar4 + 0x14,ar5_00,uVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x5c)),uVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,uVar2,uVar4));
LAB_8c093cfc:
  uVar3 = ar5;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 164)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 164)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x2c)),ar5,uVar2,uVar4); });
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_normalize(((undefined1 *)(fr0_ - 0x6c)),uVar3,uVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x7c)),uVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,uVar2,uVar4));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,uVar2,uVar4));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 164)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 164)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar3,uVar2,uVar4); });
  ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0xa0)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 164)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 164)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x3c)),uVar3,uVar2,uVar4); });
  (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x8c)),(int)&(*(undefined8 *)(fr0_ - 0xa0)) + 4,uVar2,uVar4));
  dVar6 = in_dr0;
  if (cVar9 == '\0') {
    (*(undefined8 *)(fr0_ - 0xa0)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xa0))+4)),(int)((ulonglong)in_dr0 >> 0x20));
    dVar6 = (*(undefined8 *)(fr0_ - 0xa0));
  }
  (*(undefined8 *)(fr0_ - 0xa0)) = dVar6;
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0xa0)) + 4,0xffffffff,uVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,uVar2,uVar4));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x2c)),ar5,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar5,uVar4));
  (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar5,uVar4));
  return uVar2;
}

__asm__(".globl _FUN_8c093aec\n.set _FUN_8c093aec, _FUN_8c093aec_def\n");
