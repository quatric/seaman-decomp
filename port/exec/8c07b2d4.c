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
undefined4 FUN_8c07b2d4_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07b2d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 260; for (int i_ = 0; i_ < 260; i_++) z_[i_] = 0; }
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  int ar6_00;
  uint in_fr1 = 0;
  float fVar4;
  uint uVar7;
  double dVar5;
  double dVar6;
  undefined4 uVar8;
  float fVar9;
  undefined4 in_fr14 = 0;
  double in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar3 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 260)), vec3_clear(ar4 + 0x200,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 0;
  dVar5 = (double)(ulonglong)in_fr1;
  dVar6 = dVar5;
  if (cVar11 == '\0') {
    (*(undefined8 *)(fr0_ - 0xc8)) = (double)((ulonglong)(*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc8))+4)) << 0x20);
    dVar6 = (*(undefined8 *)(fr0_ - 0xc8));
  }
  (*(undefined8 *)(fr0_ - 0xc8)) = dVar6;
  fVar9 = 1.0;
  (vsp = ((unsigned long)(fr0_ - 260)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),uVar3,ar6_00,ar7));
  (*(undefined4 *)(fr0_ - 0xcc)) = 0;
  (vsp = ((unsigned long)(fr0_ - 260)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x34)),uVar3,ar6_00,ar7));
  (*(int *)(fr0_ - 0xd0)) = (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c023d04(ar6 + 0xa0,((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
  if (((*(int *)(fr0_ - 0xd0)) != 0) && ((int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1f) < 0)) {
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x44)),uVar3,ar6_00,ar7));
    (*(int *)(fr0_ - 0xd4)) = (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c023d04(ar6 + 0xa0,((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
    if ((*(int *)(fr0_ - 0xd4)) != 0) {
      (vsp = ((unsigned long)(fr0_ - 260)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x54)),uVar3,ar6_00,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c023d04(ar6 + 0xa0,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7));
      (*(undefined8 *)(fr0_ - 0xdc)) = CONCAT44D(uVar3,(undefined4)(*(undefined8 *)(fr0_ - 0xdc)));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
      if ((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xdc))+4)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 260)), Vec3_length_sq(ar4 + 4,uVar3,ar6_00,ar7));
        uVar7 = (uint)(D2U(dVar5) >> 0x20);
        dVar6 = dVar5;
        dVar1 = dVar5;
        if (cVar11 == '\0') {
          (*(undefined8 *)(fr0_ - 0xc8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc8))+4)),uVar7);
          dVar5 = (double)(ulonglong)uVar7;
          dVar6 = in_xd0;
          dVar1 = (*(undefined8 *)(fr0_ - 0xc8));
        }
        (*(undefined8 *)(fr0_ - 0xc8)) = dVar1;
        dVar1 = (*(undefined8 *)(fr0_ - 0xc8));
        if ((cVar10 == '\0' && SUB84(dVar5,0) < 1.0) &&
           (dVar1 = CONCAT44D(0x3f800000,SUB84(dVar5,0)), cVar11 == '\0')) {
          (*(undefined8 *)(fr0_ - 0xc8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc8))+4)),0x3f800000);
          dVar1 = (*(undefined8 *)(fr0_ - 0xc8));
        }
        (*(undefined8 *)(fr0_ - 0xc8)) = dVar1;
        if (cVar11 == '\0') {
          dVar5 = CONCAT44D(0x3e99999a,(undefined4)(*(undefined8 *)(fr0_ - 0xc8)));
        }
        else {
          dVar5 = 3.3155023767404e-312;
          dVar6 = (*(undefined8 *)(fr0_ - 0xc8));
        }
        if (cVar10 == '\0') {
          fVar9 = F32LO(dVar5) * F32HI(dVar5);
        }
        else {
          fVar9 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar11 == '\0') {
          (*(undefined8 *)(fr0_ - 0xdc)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xdc))+4)),fVar9);
          dVar6 = (*(undefined8 *)(fr0_ - 0xdc));
        }
        (*(undefined8 *)(fr0_ - 0xdc)) = dVar6;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_scale(ar6 + 0xa0,&(*(undefined8 *)(fr0_ - 0xdc)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(ar4 + 0x200,((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 1;
        goto LAB_8c07b7a8;
      }
    }
  }
  if ((*(int *)(unsigned)(ar6 + 0x68) == 0) || (-1 < (int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1e))) {
    if ((*(int *)(unsigned)(ar6 + 100) == 0) || (-1 < (int)((uint)*(byte *)(unsigned)(ar4 + 0x1fc) << 0x1d))) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
      return uVar3;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 260)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x50),uVar3,ar6_00,ar7));
    if ((iVar2 == 0xf) ||
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 260)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar6 + 0x50),uVar3,ar6_00,ar7)), iVar2 == 10)) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
      return uVar3;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 1;
    (vsp = ((unsigned long)(fr0_ - 260)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x50) + 8) + 0x170))))(*(int *)(unsigned)(ar6 + 0x50),uVar3,ar6_00,ar7))
    ;
    fVar4 = F32HI(dVar5);
    (*(float *)(fr0_ - 0xfc)) = fVar4;
    if (cVar11 != '\0') {
      (*(float *)(fr0_ - 0xfc)) = SUB84(dVar5,0);
      fVar4 = fVar9;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar6 + 0x50),uVar3,ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_sub(ar5,((undefined1 *)(fr0_ - 0x94)),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(ar4 + 0x200,((undefined1 *)(fr0_ - 0xa4)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_length_sq(ar4 + 0x200,uVar3,ar6_00,ar7));
    fVar9 = F32HI(dVar5);
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(fVar9,*(undefined4 *)(unsigned)(ar4 + 0x48));
      (*(float *)(fr0_ - 0x100)) = fVar9;
    }
    else {
      (*(float *)(fr0_ - 0x100)) = SUB84(dVar5,0);
      in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
      (*(float *)(fr0_ - 0xfc)) = fVar9;
    }
    if (cVar10 == '\0') {
      fVar4 = F32LO(dVar5) + fVar4;
    }
    else {
      fVar4 = SUB84(dVar5 + CONCAT44D(in_fr14,fVar4),0);
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x100)),fVar4);
    }
    else {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0xfc)),(*(float *)(fr0_ - 0x100)));
    }
    if (cVar10 == '\0') {
      fVar9 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar9 = SUB84(dVar5 - dVar5,0);
    }
    dVar5 = in_xd0;
    if (cVar11 == '\0') {
      (*(undefined8 *)(fr0_ - 0xc8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc8))+4)),fVar9);
      dVar5 = (*(undefined8 *)(fr0_ - 0xc8));
    }
    (*(undefined8 *)(fr0_ - 0xc8)) = dVar5;
    dVar5 = (*(undefined8 *)(fr0_ - 0xc8));
    if ((cVar10 == '\0' && fVar9 < 1.0) && (dVar5 = (double)(ulonglong)(uint)fVar9, cVar11 == '\0'))
    {
      (*(undefined8 *)(fr0_ - 0xc8)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0xc8)) & 0xffffffff00000000);
      dVar5 = (*(undefined8 *)(fr0_ - 0xc8));
    }
    (*(undefined8 *)(fr0_ - 0xc8)) = dVar5;
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_length(ar4 + 0x200,uVar3,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_scale(ar4 + 0x200,&(*(undefined8 *)(fr0_ - 0xc8)),ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0xc8)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xb4)),((undefined1 *)(unsigned)0x8c1379a4),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(ar4 + 0x200,(int)&(*(undefined8 *)(fr0_ - 0xc8)) + 4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0xc8)) + 4,0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 1;
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 1;
    if (cVar11 == '\0') {
      fVar9 = *(float *)(unsigned)(*(int *)(unsigned)(ar6 + 0x68) + 0x158);
    }
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(((undefined1 *)(fr0_ - 0x24)),*(int *)(unsigned)(ar6 + 0x68) + 4,ar6_00,ar7));
    dVar6 = (*(double *)(fr0_ - 0x20));
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x20))+0)),SUB84(dVar5,0));
    }
    if (cVar10 == '\0') {
      dVar6 = CONCAT44D(F32HI(dVar6) + fVar9,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + CONCAT44D(in_fr14,fVar9);
    }
    dVar5 = dVar6;
    if (cVar11 == '\0') {
      (*(double *)(fr0_ - 0x20)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x20))+4)),(int)(D2U(dVar6) >> 0x20));
      dVar5 = (*(double *)(fr0_ - 0x20));
    }
    (*(double *)(fr0_ - 0x20)) = dVar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_sub(ar5,((undefined1 *)(fr0_ - 0x24)),ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 260)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 260)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x74)),((undefined1 *)(unsigned)0x8c13799c),ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_assign(ar4 + 0x200,((undefined1 *)(fr0_ - 0x84)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_length_sq(ar4 + 0x200,uVar3,ar6_00,ar7));
    uVar8 = (undefined4)(D2U(dVar6) >> 0x20);
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D(uVar8,*(undefined4 *)(unsigned)(ar4 + 0x48));
      (*(undefined4 *)(fr0_ - 0xf0)) = uVar8;
    }
    else {
      (*(undefined4 *)(fr0_ - 0xf0)) = SUB84(dVar6,0);
      in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
      (*(undefined4 *)(fr0_ - 0xec)) = uVar8;
    }
    if (cVar10 == '\0') {
      fVar9 = F32LO(dVar6) + fVar9;
    }
    else {
      fVar9 = SUB84(dVar6 + CONCAT44D(in_fr14,fVar9),0);
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0xf0)),fVar9);
    }
    else {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0xec)),(*(undefined4 *)(fr0_ - 0xf0)));
    }
    if (cVar10 == '\0') {
      fVar9 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar9 = SUB84(dVar5 - dVar5,0);
    }
    dVar5 = in_xd0;
    if (cVar11 == '\0') {
      (*(undefined8 *)(fr0_ - 0xc8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc8))+4)),fVar9);
      dVar5 = (*(undefined8 *)(fr0_ - 0xc8));
    }
    (*(undefined8 *)(fr0_ - 0xc8)) = dVar5;
    dVar5 = (*(undefined8 *)(fr0_ - 0xc8));
    if ((cVar10 == '\0' && fVar9 < 1.0) &&
       (dVar5 = CONCAT44D(0x3f800000,fVar9), cVar11 == '\0')) {
      (*(undefined8 *)(fr0_ - 0xc8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc8))+4)),0x3f800000);
      dVar5 = (*(undefined8 *)(fr0_ - 0xc8));
    }
    (*(undefined8 *)(fr0_ - 0xc8)) = dVar5;
    (vsp = ((unsigned long)(fr0_ - 260)), Vec3_length(ar4 + 0x200,uVar3,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c023bf4(ar4 + 0x200,&(*(undefined8 *)(fr0_ - 0xc8)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 260)), FUN_8c023bf4(ar4 + 0x200,((undefined1 *)(unsigned)0x8c1379a0),ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 1;
  }
LAB_8c07b7a8:
  uVar3 = (vsp = ((unsigned long)(fr0_ - 260)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c07b2d4\n.set _FUN_8c07b2d4, _FUN_8c07b2d4_def\n");
