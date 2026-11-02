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
undefined4 FUN_8c07c318_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07c318";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 168; for (int i_ = 0; i_ < 168; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  undefined4 uVar5;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar6;
  double dVar7;
  double dVar8;
  double in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    uVar2 = ar6;
    ar6_00 = ar6;
    ar7_00 = ar7;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); Vec3_sub(ar5,ar6,ar6,ar7); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), Vec3_length(((undefined1 *)(fr0_ - 0x44)),uVar2,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),uVar2,ar6_00,ar7_00));
    uVar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7_00));
    iVar3 = *(int *)(unsigned)(ar4 + 0x40);
    if ((iVar3 == 1) || (iVar3 == 3)) {
      if (*(int *)(unsigned)(ar4 + 0x44) == 1) {
        (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c031fc4(ar4,uVar5,ar6_00,ar7_00));
      }
      pdVar4 = (double *)(unsigned)(ar4 + 0x2c);
      if (cVar10 != '\0') {
        in_xd0 = *pdVar4;
        pdVar4 = (double *)(unsigned)(ar4 + 0x30);
      }
      dVar8 = *pdVar4;
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar8) / F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 / dVar8,0);
      }
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0x84)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x84))+4)),fVar6);
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x18),(*(undefined4 *)(fr0_ - 0x20)));
        dVar8 = in_xd0;
      }
      else {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
        dVar7 = *(double *)(unsigned)(ar4 + 0x18);
        (*(undefined8 *)(fr0_ - 0x84)) = in_xd0;
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar7) - F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      dVar7 = (*(undefined8 *)(fr0_ - 0x84));
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x84)),fVar6);
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar7) * F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x18),fVar6);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x18);
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x18) = fVar6;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x18) = dVar8;
      }
      (vsp = ((unsigned long)(fr0_ - 168)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x50)),ar7,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x50)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x60)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7_00));
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 168)), object_dtor_delete(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_length(ar4 + 0x14,uVar5,ar6_00,ar7_00));
      pdVar4 = (double *)(unsigned)(ar4 + 0x2c);
      if (cVar10 != '\0') {
        dVar8 = *pdVar4;
        pdVar4 = (double *)(unsigned)(ar4 + 0x30);
      }
      (*(undefined8 *)(fr0_ - 0x90)) = *pdVar4;
      if (SUB84((*(undefined8 *)(fr0_ - 0x90)),0) != F32HI((*(undefined8 *)(fr0_ - 0x90)))) {
        if (cVar10 == '\0') {
          dVar7 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x28);
        }
        else {
          dVar8 = *(double *)(unsigned)(ar4 + 0x28);
          dVar7 = (*(undefined8 *)(fr0_ - 0x90));
        }
        (*(undefined8 *)(fr0_ - 0x90)) = (double)(D2U(dVar7) & 0xffffffff);
        if (cVar9 == '\0' && 0.0 < SUB84(dVar7,0)) {
          if (cVar10 == '\0') {
            dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(unsigned)(ar4 + 0x28);
            dVar7 = *(double *)(unsigned)(ar4 + 0x24);
          }
          if (cVar9 == '\0') {
            fVar6 = F32LO(dVar7) / F32HI(dVar7);
          }
          else {
            fVar6 = SUB84(dVar7 / dVar7,0);
          }
          if (cVar10 == '\0') {
            dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c),fVar6);
          }
          else {
            dVar7 = *(double *)(unsigned)(ar4 + 0x2c);
          }
          if (cVar9 == '\0') {
            fVar6 = F32LO(dVar7) + F32HI(dVar7);
          }
          else {
            fVar6 = SUB84(dVar7 + dVar7,0);
          }
          pdVar4 = (double *)(unsigned)(ar4 + 0x30);
          if (cVar10 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2c) = fVar6;
            pdVar4 = (double *)(unsigned)(ar4 + 0x2c);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x2c) = dVar8;
            dVar8 = *(double *)(unsigned)(ar4 + 0x2c);
          }
          (*(undefined8 *)(fr0_ - 0x90)) = *pdVar4;
          if (cVar9 == '\0' && F32HI((*(undefined8 *)(fr0_ - 0x90))) < SUB84((*(undefined8 *)(fr0_ - 0x90)),0)) {
            if (cVar10 == '\0') {
              uVar5 = *(undefined4 *)(unsigned)(ar4 + 0x30);
              (*(undefined8 *)(fr0_ - 0x90)) = CONCAT44D(uVar5,SUB84((*(undefined8 *)(fr0_ - 0x90)),0));
              *(undefined4 *)(unsigned)(ar4 + 0x2c) = uVar5;
            }
            else {
              (*(undefined8 *)(fr0_ - 0x90)) = *(double *)(unsigned)(ar4 + 0x30);
              *(double *)(unsigned)(ar4 + 0x2c) = (*(undefined8 *)(fr0_ - 0x90));
            }
          }
        }
      }
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c022fc0(ar6,ar5,ar6_00,ar7_00));
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0x90)) = CONCAT44D(uVar2,(int)((ulonglong)(*(undefined8 *)(fr0_ - 0x90)) >> 0x20));
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        dVar8 = *(double *)(unsigned)(ar4 + 0x28);
        dVar7 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0x90)) = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x90)),fVar6);
      }
      if (cVar9 != '\0' || F32HI((*(undefined8 *)(fr0_ - 0x90))) <= SUB84((*(undefined8 *)(fr0_ - 0x90)),0)) {
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
          dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84((*(undefined8 *)(fr0_ - 0x90)),0));
          dVar8 = *(double *)(unsigned)(ar4 + 0x28);
          dVar7 = *(double *)(unsigned)(ar4 + 0x38);
        }
        if (cVar9 == '\0') {
          fVar6 = F32LO(dVar7) / F32HI(dVar7);
        }
        else {
          fVar6 = SUB84(dVar7 / dVar7,0);
        }
        if (cVar10 == '\0') {
          *(float *)(unsigned)(ar4 + 0x3c) = fVar6;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x3c) = dVar8;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
        uVar1 = 0;
      }
    }
    else if (iVar3 == 4) {
      uVar1 = 0;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar5,ar6_00,ar7_00); });
      uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), Vec3_length(((undefined1 *)(fr0_ - 0x70)),uVar5,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7_00));
      if (cVar10 == '\0') {
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x2c));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x2c);
        dVar8 = *(double *)(unsigned)(ar4 + 0x38);
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar8) / F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 / dVar8,0);
      }
      dVar8 = in_xd0;
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0x84)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x84))+4)),fVar6);
        dVar8 = (*(undefined8 *)(fr0_ - 0x84));
      }
      (*(undefined8 *)(fr0_ - 0x84)) = dVar8;
      ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x84)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x34)),&(*(undefined8 *)(fr0_ - 0x84)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c023aa0(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x84)) + 4,ar6_00,ar7_00));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x84)) + 4,0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_length(ar4 + 0x14,uVar2,ar6_00,ar7_00));
      if (cVar10 == '\0') {
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x3c),*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar8 = *(double *)(unsigned)(ar4 + 0x3c);
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar8) - F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 - dVar8,0);
      }
      (*(undefined8 *)(fr0_ - 0xa4)) = in_xd0;
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0xa4)) = CONCAT44D(ar4,fVar6);
      }
      if (cVar10 == '\0') {
        *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xa4))+4)) + 0x28) = (undefined4)(*(undefined8 *)(fr0_ - 0xa4));
        (*(undefined8 *)(fr0_ - 0xa4)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0xa4)) & 0xffffffff);
      }
      else {
        *(double *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xa4))+4)) + 0x28) = (*(undefined8 *)(fr0_ - 0xa4));
      }
      if (cVar9 != '\0' || SUB84((*(undefined8 *)(fr0_ - 0xa4)),0) <= 0.0) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(*(undefined8 *)(fr0_ - 0xa4)) & 0xffffffff;
        }
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84((*(undefined8 *)(fr0_ - 0xa4)),0));
        }
      }
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
    }
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7_00));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c07c318\n.set _FUN_8c07c318, _FUN_8c07c318_def\n");
