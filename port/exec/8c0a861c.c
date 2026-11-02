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
undefined4 FUN_8c0a861c_def(int ar4,undefined8 *ar5,ulonglong *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a861c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 224; for (int i_ = 0; i_ < 224; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  int iVar2;
  undefined *ar5_00;
  undefined4 uVar3;
  uint *ar5_01;
  ulonglong *ar6_00;
  undefined4 uVar4;
  float fVar5;
  ulonglong in_dr0 = 0;
  double dVar6;
  uint uVar8;
  undefined8 uVar7;
  ulonglong in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 224)), Vec3_ctor_zero(&(*(undefined8 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0xb8)) = 1;
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar2 < 5) && (-1 < iVar2)) {
    uVar3 = (undefined4)in_dr0;
                    
    switch(iVar2) {
    case 0:
      ar6_00 = (ulonglong *)(unsigned)0x2;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 224)), rand_range(ar4,0,2,ar7));
      if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(&(*(undefined8 *)(fr0_ - 0x24)),ar5,ar6_00,ar7));
        if (cVar10 == '\0') {
        }
        else {
          (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x24))+4)) = 0x219c;
        }
        (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x24))+0)) = 0x42c80000;
        (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x54,&(*(undefined8 *)(fr0_ - 0x24)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(&(*(undefined8 *)(fr0_ - 0x24)),ar5,ar6_00,ar7));
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x42c80000,(int)*ar6);
        }
        else {
          in_xd0 = *ar6;
          dVar6 = 1.82582053383223e-310;
        }
        if (cVar9 == '\0') {
          fVar5 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar5,F32LO(dVar6) - fVar5);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        uVar1 = in_xd0;
        if (cVar10 == '\0') {
          (*(undefined8 *)(fr0_ - 0x24)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x24))+4)),SUB84(dVar6,0));
          uVar1 = (*(undefined8 *)(fr0_ - 0x24));
        }
        (*(undefined8 *)(fr0_ - 0x24)) = uVar1;
        *(undefined4 *)(unsigned)(ar4 + 0x219c) = 4;
        (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7));
        (*(undefined4 *)(fr0_ - 0xd0)) = (undefined4)(D2U(dVar6) >> 0x20);
        if (cVar10 == '\0') {
          (*(undefined4 *)(fr0_ - 0xd4)) = (*(undefined4 *)(fr0_ - 0xd0));
          (*(undefined4 *)(fr0_ - 0xd0)) = 0;
        }
        else {
          (*(undefined4 *)(fr0_ - 0xd4)) = SUB84(dVar6,0);
        }
        (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c022fc0(ar5,&(*(undefined8 *)(fr0_ - 0x24)),ar6_00,ar7));
        uVar3 = (undefined4)(D2U(dVar6) >> 0x20);
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(uVar3,(*(undefined4 *)(fr0_ - 0xd4)));
        }
        else {
          in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0xd0)),uVar3);
        }
        if (cVar9 != '\0' || SUB84(dVar6,0) <= F32HI(dVar6)) {
          (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x54,&(*(undefined8 *)(fr0_ - 0x24)),ar6_00,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x219c) = 3;
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(&(*(undefined8 *)(fr0_ - 0x24)),ar5,ar6_00,ar7));
        if (cVar10 == '\0') {
        }
        else {
          (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1c))+4)) = 0xf0;
        }
        (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1c))+0)) = 0x42c80000;
        (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x54,&(*(undefined8 *)(fr0_ - 0x24)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(&(*(undefined8 *)(fr0_ - 0x24)),ar5,ar6_00,ar7));
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x42c80000,(int)ar6[1]);
        }
        else {
          in_xd0 = ar6[1];
          dVar6 = 5.09832542688757e-312;
        }
        if (cVar9 == '\0') {
          fVar5 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar5,F32LO(dVar6) - fVar5);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        uVar1 = in_xd0;
        if (cVar10 == '\0') {
          (*(undefined8 *)(fr0_ - 0x1c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1c))+4)),SUB84(dVar6,0));
          uVar1 = (*(undefined8 *)(fr0_ - 0x1c));
        }
        (*(undefined8 *)(fr0_ - 0x1c)) = uVar1;
        *(undefined4 *)(unsigned)(ar4 + 0x219c) = 2;
        (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7));
        uVar3 = (undefined4)(D2U(dVar6) >> 0x20);
        (*(undefined4 *)(fr0_ - 0xdc)) = uVar3;
        if (cVar10 != '\0') {
          (*(undefined4 *)(fr0_ - 0xdc)) = SUB84(dVar6,0);
          (*(undefined4 *)(fr0_ - 0xd8)) = uVar3;
        }
        (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c022fc0(ar5,&(*(undefined8 *)(fr0_ - 0x24)),ar6_00,ar7));
        uVar3 = (undefined4)(D2U(dVar6) >> 0x20);
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(uVar3,(*(undefined4 *)(fr0_ - 0xdc)));
        }
        else {
          in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0xd8)),uVar3);
        }
        if (cVar9 != '\0' || SUB84(dVar6,0) <= F32HI(dVar6)) {
          (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x54,&(*(undefined8 *)(fr0_ - 0x24)),ar6_00,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x219c) = 1;
        }
      }
      fVar5 = F32LO(dVar6);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 224)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7); });
      ar5_00 = ((undefined1 *)(unsigned)0x8c13b298);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 224)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c13b298),ar6_00,ar7); });
      uVar3 = (vsp = ((unsigned long)(fr0_ - 224)), Vec3_length(((undefined1 *)(fr0_ - 0x34)),ar5_00,ar6_00,ar7));
      (*(int *)(fr0_ - 0xc0)) = (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c023cd4(uVar3,((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
      if ((*(int *)(fr0_ - 0xc0)) != 0) {
        if (cVar10 == '\0') {
          fVar5 = *(float *)(unsigned)(ar4 + 0x54);
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x54);
        }
        if (cVar9 == '\0') {
          fVar5 = fVar5 + 1.0;
        }
        else {
          fVar5 = SUB84(CONCAT44D(0x3f800000,fVar5) + CONCAT44D(0x3f800000,fVar5),0);
        }
        if (cVar10 == '\0') {
          *(float *)(unsigned)(ar4 + 0x54) = fVar5;
          fVar5 = *(float *)(unsigned)(ar4 + 0x5c);
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x54) = in_xd0;
          in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x5c);
        }
        if (cVar9 == '\0') {
          fVar5 = fVar5 + 1.0;
        }
        else {
          fVar5 = SUB84(CONCAT44D(0x3f800000,fVar5) + CONCAT44D(0x3f800000,fVar5),0);
        }
        if (cVar10 == '\0') {
          *(float *)(unsigned)(ar4 + 0x5c) = fVar5;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x5c) = in_xd0;
        }
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x54)),ar5,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_ctor_copy(((ulonglong *)(fr0_ - 0x64)),ar4 + 0x54,ar6_00,ar7));
      ar6_00 = ((ulonglong *)(fr0_ - 0x64));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c0a72b4(ar4,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7));
      (*(uint *)(fr0_ - 0xc4)) = (uint)(iVar2 == 0);
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((ulonglong *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
      if ((*(uint *)(fr0_ - 0xc4)) != 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7));
      break;
    case 2:
      iVar2 = *(int *)(unsigned)(ar4 + 0x219c);
      if (iVar2 == 1) {
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x54) = *(undefined4 *)(unsigned)ar5;
          *(undefined4 *)(unsigned)(ar4 + 0x58) = 0x43480000;
          in_dr0 = CONCAT44((int)ar6[1],uVar3);
          *(int *)(unsigned)(ar4 + 0x5c) = (int)ar6[1];
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x54) = *ar5;
          *(undefined8 *)(unsigned)(ar4 + 0x58) = 0x9843480000;
          in_dr0 = ar6[1];
          *(ulonglong *)(unsigned)(ar4 + 0x5c) = in_dr0;
        }
      }
      else if (iVar2 == 2) {
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x54) = *(undefined4 *)(unsigned)ar5;
          in_dr0 = CONCAT44(0x43480000,uVar3);
          *(undefined4 *)(unsigned)(ar4 + 0x58) = 0x43480000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x54) = *ar5;
          in_dr0 = 0x705460e343480000;
          *(undefined8 *)(unsigned)(ar4 + 0x58) = 0x705460e343480000;
        }
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x5c) = in_dr0;
        }
      }
      else if (iVar2 == 3) {
        if (cVar10 == '\0') {
          *(int *)(unsigned)(ar4 + 0x54) = (int)*ar6;
          *(undefined4 *)(unsigned)(ar4 + 0x58) = 0x43480000;
          in_dr0 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 1),uVar3);
          *(undefined4 *)(unsigned)(ar4 + 0x5c) = *(undefined4 *)(unsigned)(ar5 + 1);
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x54) = *ar6;
          *(undefined8 *)(unsigned)(ar4 + 0x58) = 0x705460e343480000;
          in_dr0 = ar5[1];
          *(ulonglong *)(unsigned)(ar4 + 0x5c) = in_dr0;
        }
      }
      else if (iVar2 == 4) {
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x54) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x58) = 0x43480000;
          in_dr0 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 1),uVar3);
          *(undefined4 *)(unsigned)(ar4 + 0x5c) = *(undefined4 *)(unsigned)(ar5 + 1);
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x54) = in_dr0 & 0xffffffff;
          *(undefined8 *)(unsigned)(ar4 + 0x58) = 0x705460e343480000;
          in_dr0 = ar5[1];
          *(ulonglong *)(unsigned)(ar4 + 0x5c) = in_dr0;
        }
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 224)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_length(ar4 + 0x14,uVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7));
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x40a00000,(int)(in_dr0 >> 0x20));
      }
      else {
        dVar6 = 2.72151140845083e-312;
        in_xd0 = in_dr0;
      }
      if (cVar9 == '\0') {
        fVar5 = F32LO(dVar6) / F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 / dVar6,0);
      }
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar5;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x2174,ar4 + 0x80,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 3:
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x2194));
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)(ar4 + 0x2194);
        dVar6 = 0.007811875057814177;
      }
      if (cVar9 == '\0') {
        fVar5 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2194) = fVar5;
        fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2194) = in_xd0;
      }
      if (cVar9 != '\0' || 1.0 <= fVar5) {
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0x3f7fff58;
        }
        else {
          fVar5 = 0.99999;
          *(undefined8 *)(unsigned)(ar4 + 0x2194) = 0x883f7fff58;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      if (cVar10 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x2194);
      }
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(1.0 - fVar5,fVar5);
      }
      else {
        dVar6 = CONCAT44D(0x3f800000,fVar5) - CONCAT44D(0x3f800000,fVar5);
      }
      uVar8 = (uint)(D2U(dVar6) >> 0x20);
      (*(uint *)(fr0_ - 0xc8)) = uVar8;
      if (cVar10 != '\0') {
        (*(uint *)(fr0_ - 0xc8)) = SUB84(dVar6,0);
        (*(uint *)(fr0_ - 0xc4)) = uVar8;
      }
      ar5_01 = &(*(uint *)(fr0_ - 0xc8));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 224)) - 8); Vec3_scale(ar4 + 0x2174,ar5_01,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x94)),ar5_01,ar6_00,ar7));
      if (cVar10 == '\0') {
        (*(undefined4 *)(fr0_ - 0xcc)) = *(undefined4 *)(unsigned)(ar4 + 0x2194);
      }
      else {
        uVar7 = *(undefined8 *)(unsigned)(ar4 + 0x2194);
        (*(undefined4 *)(fr0_ - 0xcc)) = (undefined4)uVar7;
        (*(uint *)(fr0_ - 0xc8)) = (uint)((ulonglong)uVar7 >> 0x20);
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 224)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x94)),&(*(undefined4 *)(fr0_ - 0xcc)),ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 224)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 224)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0xa4)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0xb4)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
      break;
    case 4:
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar10 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0;
      }
      (vsp = ((unsigned long)(fr0_ - 224)), Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7));
      uVar4 = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      if (cVar10 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2194) = in_dr0 & 0xffffffff;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2198) = *(undefined4 *)(unsigned)(ar4 + 0x219c);
    }
  }
  (*(undefined4 *)(fr0_ - 0xbc)) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 224)), Vec3_dtor(&(*(undefined8 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  return (*(undefined4 *)(fr0_ - 0xbc));
}

__asm__(".globl _FUN_8c0a861c\n.set _FUN_8c0a861c, _FUN_8c0a861c_def\n");
