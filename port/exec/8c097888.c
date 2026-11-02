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
undefined4 FUN_8c097888_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c097888";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 156; for (int i_ = 0; i_ < 156; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0 = 0;
  code *pcVar7;
  double dVar6;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined4 ain0;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar2 = ar5;
  ain0 = ar7;
  (vsp = ((unsigned long)(fr0_ - 156)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 156)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6,ar7));
  uVar3 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c0978d0:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c034148(ar4 + 0xb0,4,ar6,ar7));
    uVar4 = (undefined4)in_dr0;
    if ((iVar1 != 1) && (iVar1 != 2)) {
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
      return 1;
    }
    uVar2 = 0x8c2846e8;
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c031b68(ar4,0x8c2846e8,ar6,ar7));
    in_dr0 = CONCAT44(0x3f800000,uVar4);
    if (cVar10 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x48) = 0x3f800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x48) = in_dr0;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 3) {
      iVar1 = ar4 + 0x24c;
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),iVar1,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 156)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar1,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 156)); CAnimBody_GetCurFrame(ar4 + 0xb0,iVar1,ar6,ar7); });
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x42920000,(int)in_dr0);
        in_fr15 = F32HI(in_dr0);
      }
      else {
        dVar6 = 1.23979734631016e-311;
      }
      if (cVar9 == '\0') {
        bVar8 = in_fr15 < F32HI(dVar6);
      }
      else {
        bVar8 = CONCAT44D(in_fr14,in_fr15) < dVar6;
      }
      if (!bVar8) {
        *(undefined4 *)(unsigned)(ar4 + 0x248) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 156)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 156)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar1,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x54)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
      uVar2 = ar5;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 156)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 156)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_normalize(((undefined1 *)(fr0_ - 0x64)),uVar2,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x74)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 156)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 156)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7); });
      ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x98)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 156)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 156)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x84)),(int)&(*(undefined8 *)(fr0_ - 0x98)) + 4,ar6,ar7));
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0x98)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x98))+4)),(int)(D2U(dVar6) >> 0x20));
        dVar6 = (*(undefined8 *)(fr0_ - 0x98));
      }
      (*(undefined8 *)(fr0_ - 0x98)) = dVar6;
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x98)) + 4,0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x24)),ar5,ar7));
      ar6 = ar5;
      goto LAB_8c097b04;
    }
    if (iVar1 != 5) goto LAB_8c097b04;
    goto LAB_8c0978d0;
  }
  (vsp = ((unsigned long)(fr0_ - 156)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 156)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7); });
  if (cVar10 == '\0') {
    dVar6 = CONCAT44D(0x42200000,(int)in_dr0);
    in_fr15 = F32HI(in_dr0);
  }
  else {
    dVar6 = 2.7216357441417e-312;
  }
  if (cVar9 == '\0') {
    bVar8 = F32HI(dVar6) < in_fr15;
  }
  else {
    bVar8 = dVar6 < CONCAT44D(in_fr14,in_fr15);
  }
  if (bVar8) {
    (vsp = ((unsigned long)(fr0_ - 156)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6,ar7));
    if (cVar10 == '\0') {
      uVar2 = SUB84(dVar6,0);
      pcVar7 = (code *)0x40000000;
    }
    else {
      uVar2 = 0x40000000;
      pcVar7 = ((void *)0x8c033b98);
    }
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c031ce8(ar4,ain0,(*(undefined4 *)(fr0_ + 0x00000000)),ar7));
    (vsp = ((unsigned long)(fr0_ - 156)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0x44)),(*(undefined4 *)(fr0_ + 0x00000000)),ar7));
    (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,(*(undefined4 *)(fr0_ + 0x00000000)),ar7));
    ar5_00 = ((undefined1 *)(fr0_ - 0x24));
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c022fc0(ar5,ar5_00,(*(undefined4 *)(fr0_ + 0x00000000)),ar7));
    if (cVar10 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),pcVar7);
    }
    else {
      in_xd0 = CONCAT44(pcVar7,uVar2);
      dVar6 = *(double *)(unsigned)(ar4 + 0x24);
    }
    if (cVar9 == '\0') {
      fVar5 = F32LO(dVar6) / F32HI(dVar6);
    }
    else {
      fVar5 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = fVar5;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c031c64(ar4,ar5_00,(*(undefined4 *)(fr0_ + 0x00000000)),ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    ar6 = (*(undefined4 *)(fr0_ + 0x00000000));
  }
LAB_8c097b04:
  (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 156)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c097888\n.set _FUN_8c097888, _FUN_8c097888_def\n");
