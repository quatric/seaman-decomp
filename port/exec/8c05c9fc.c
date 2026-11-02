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
undefined4 FUN_8c05c9fc_def(int ar4,undefined1 *ar5,undefined1 *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c05c9fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 288; for (int i_ = 0; i_ < 288; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  code *ar5_00;
  undefined4 *puVar4;
  undefined4 a5;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  float fVar8;
  uint uVar9;
  double dVar10;
  undefined4 uVar12;
  double dVar11;
  float fVar13;
  undefined4 in_fr3 = 0;
  undefined8 in_xd0 = 0;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
  cVar14 = '\0';
  (*(undefined4 *)(fr0_ - 0x10)) = 1;
  uVar7 = 1;
  ar5_00 = ((void *)0x8c022c4c);
  puVar6 = ar6;
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),((void *)0x8c022c4c),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_zero((int)&(*(undefined8 *)(fr0_ - 0x48)) + 4,ar5_00,ar6,ar7));
  puVar4 = ((undefined4 *)(unsigned)0x8c125bf0);
  (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x50)),((undefined4 *)(unsigned)0x8c125bf0),ar6,ar7));
  if (cVar15 == '\0') {
    dVar10 = 2.597301565578305e+22;
  }
  else {
    in_xd0 = 0;
    dVar10 = 6.62631198776065e-312;
  }
  if (cVar14 == '\0') {
    dVar10 = CONCAT44D(F32HI(dVar10) - F32LO(dVar10),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 - dVar10;
  }
  dVar11 = dVar10;
  if (cVar15 == '\0') {
    (*(undefined8 *)(fr0_ - 0x48)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x48))+4)),(int)(D2U(dVar10) >> 0x20));
    dVar11 = (*(undefined8 *)(fr0_ - 0x48));
  }
  (*(undefined8 *)(fr0_ - 0x48)) = dVar11;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c05c28c(ar4,((void *)0x8c05c28c),ar6,ar7));
    if (iVar1 == 0) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      uVar5 = *(undefined4 *)(unsigned)(ar4 + 0x244);
      if (cVar15 == '\0') {
        uVar2 = SUB84(dVar10,0);
        uVar12 = 0x40000000;
      }
      else {
        uVar2 = 0x40000000;
        uVar12 = 0x43b40000;
      }
      ar6 = ((undefined1 *)(fr0_ - 0x50));
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c032518(ar4,ar5,ar6,uVar5));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x60)),ar6,uVar5));
      a5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6,uVar5));
      (vsp = ((unsigned long)(fr0_ - 288)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)) + 0x184))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)),a5,ar6,uVar5));
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),uVar12);
      }
      else {
        in_xd0 = CONCAT44(uVar12,uVar2);
        dVar10 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar14 == '\0') {
        fVar8 = F32HI(dVar10);
        dVar10 = CONCAT44D(fVar8,F32LO(dVar10) - fVar8);
      }
      else {
        dVar10 = dVar10 - dVar10;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x58) = SUB84(dVar10,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x58) = in_xd0;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar6,uVar5); });
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_normalize(((undefined1 *)(fr0_ - 0x70)),((void *)0x8c022ec0),ar6,uVar5));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x80)),ar4 + 0x48,ar6,uVar5); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c136614),ar6,uVar5); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xa0)),ar6,uVar5); });
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x248,((undefined1 *)(fr0_ - 0xb0)),ar6,uVar5));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6,uVar5));
      ar7 = ((void *)0x8c022cb0);
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6,((void *)0x8c022cb0)));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6,ar7));
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 288)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)) + 0x184))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)),uVar5,ar6,ar7));
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),in_fr3);
        dVar11 = CONCAT44D(0x3f000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        dVar11 = -2.4967168957076204e+265;
      }
      if (cVar14 == '\0') {
        dVar10 = CONCAT44D(F32HI(dVar10) -
                                  F32LO(dVar11) * F32HI(dVar11),
                                  SUB84(dVar10,0));
      }
      else {
        dVar10 = dVar10 - dVar11 * dVar11;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x24c) = (int)(D2U(dVar10) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x24c) = dVar10;
      }
    }
  }
  else if (iVar1 == 1) {
    ar6 = (undefined1 *)(unsigned)(ar4 + 0x248);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), pure_virtual_stub(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = D2U(dVar10) & 0xffffffff;
      }
      ar7 = (code *)0x0;
      ar6 = (undefined1 *)(unsigned)0xffffffff;
      uVar5 = 0;
      (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,ar6,ar7));
    }
  }
  else if (iVar1 == 2) {
    (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c05ae54(ar4,puVar4,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c136618),ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xc0)),ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0xd0)),ar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar5,ar7));
    uVar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar5,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar5,ar5,ar7));
    ar6 = ar5;
    if (iVar1 == 1) {
      if (cVar15 == '\0') {
        fVar8 = *(float *)(unsigned)(ar4 + 0x18);
        fVar13 = 0.03;
      }
      else {
        fVar8 = 0.03;
        fVar13 = 4.14784e-43;
      }
      if (cVar14 != '\0' || fVar8 <= fVar13) {
        if (*(int *)(unsigned)(ar4 + 0x128) == 0) {
          ar7 = (code *)0x0;
          ar6 = (undefined1 *)(unsigned)0xffffffff;
          uVar5 = 0x14;
          (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x14,0xffffffff,0));
          uVar5 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c026db0(ar4,uVar5,ar6,ar7));
          uVar2 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6,ar7));
          puVar4 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 288)), deref_u32(uVar2,uVar5,ar6,ar7));
          uVar2 = puVar4[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar4;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar4[2];
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1362f4);
        }
        else if (*(int *)(unsigned)(ar4 + 0x128) == 1) {
          ar7 = (code *)0x0;
          ar6 = (undefined1 *)(unsigned)0xffffffff;
          uVar5 = 0x14;
          (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x14,0xffffffff,0));
          uVar5 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c026db0(ar4,uVar5,ar6,ar7));
          uVar2 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6,ar7));
          puVar4 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 288)), deref_u32(uVar2,uVar5,ar6,ar7));
          uVar2 = puVar4[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar4;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar4[2];
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c13633c);
        }
        else {
          ar7 = (code *)0x0;
          ar6 = (undefined1 *)(unsigned)0xffffffff;
          uVar5 = 0x15;
          (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x15,0xffffffff,0));
          uVar5 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c026db0(ar4,uVar5,ar6,ar7));
          uVar2 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6,ar7));
          puVar4 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 288)), deref_u32(uVar2,uVar5,ar6,ar7));
          uVar2 = puVar4[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar4;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar4[2];
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c136384);
        }
        (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 288)), vec3_clear(ar4 + 0x2d4,uVar5,ar6,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
    }
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x334) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
    ({ unsigned long ri0_ = (unsigned long)(puVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 288)); CAnimBody_GetCurFrame(ar4 + 0xb0,puVar4,ar6,ar7); });
    uVar9 = SUB84(dVar10,0);
    (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0xe0)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x2d4,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0xf0)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,ar6,ar7));
    puVar3 = ((undefined1 *)(fr0_ - 0x34));
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x2d4,puVar3,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(puVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 288)); CAnimBody_GetCurFrame(ar4 + 0xb0,puVar3,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x100)),puVar3,ar6,ar7));
    ar7 = (code *)(ar4 + 0x2a8);
    puVar3 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 288)), FUN_8c023d04(ar7,((undefined1 *)(fr0_ - 0x100)),ar6,ar7));
    uVar5 = 0xffffffff;
    ar6 = puVar3;
    (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,puVar3,ar7));
    if (puVar3 != (undefined1 *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 288)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x10c)),puVar6,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x11c))); *(unsigned *)((((unsigned long)(fr0_ - 288)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 288)) - 8); FUN_8c023484(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x10c)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_assign(ar4 + 0x2a8,((undefined1 *)(fr0_ - 0x11c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x11c)),0xffffffff,ar6,ar7));
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 288)), object_dtor_delete(((undefined1 *)(fr0_ - 0x10c)),0xffffffff,ar6,ar7));
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar5,ar6,ar7));
    if (iVar1 == 1) {
      uVar7 = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x334) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)uVar9;
      }
      (vsp = ((unsigned long)(fr0_ - 288)), vec3_clear(ar4 + 0x2a8,ar4 + 0x2a8,ar6,ar7));
      ar7 = (code *)0x0;
      ar6 = (undefined1 *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 288)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 288)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x48)) + 4,0xffffffff,ar6,ar7));
  puVar6 = ((undefined1 *)(fr0_ - 0x34));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(puVar6,0xffffffff,puVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 288)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,puVar6,ar7));
  return uVar7;
}

__asm__(".globl _FUN_8c05c9fc\n.set _FUN_8c05c9fc, _FUN_8c05c9fc_def\n");
