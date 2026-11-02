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
undefined4 FUN_8c097ba4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c097ba4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 152; for (int i_ = 0; i_ < 152; i_++) z_[i_] = 0; }
  double *pdVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar3 = ar6;
  ar6_00 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); Vec3_sub(ar5,ar6,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_normalize(((undefined1 *)(fr0_ - 0x34)),uVar3,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x44)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
  uVar3 = 1;
  if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
    (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
    uVar3 = 0;
  }
  else {
    if ((*(int *)(unsigned)(ar4 + 0x40) == 1) || (*(int *)(unsigned)(ar4 + 0x40) == 3)) {
      if (*(int *)(unsigned)(ar4 + 0x44) == 1) {
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c031fc4(ar4,uVar2,ar6_00,ar7));
      }
      pdVar1 = (double *)(unsigned)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar1;
        pdVar1 = (double *)(unsigned)(ar4 + 0x30);
      }
      dVar5 = *pdVar1;
      if (cVar8 == '\0') {
        fVar4 = F32LO(dVar5) / F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      dVar5 = in_xd0;
      if (cVar9 == '\0') {
        (*(undefined8 *)(fr0_ - 0x88)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x88))+4)),fVar4);
        dVar5 = (*(undefined8 *)(fr0_ - 0x88));
      }
      (*(undefined8 *)(fr0_ - 0x88)) = dVar5;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x24)),&(*(undefined8 *)(fr0_ - 0x88)),ar6_00,ar7); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); Vec3_add(ar4 + 0x14,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c023aa0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 152)), Vec3_normalize(ar4 + 0x14,uVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 152)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
      pdVar1 = (double *)(unsigned)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar1;
        pdVar1 = (double *)(unsigned)(ar4 + 0x30);
      }
      dVar5 = *pdVar1;
      if (SUB84(dVar5,0) != F32HI(dVar5)) {
        if (cVar9 == '\0') {
          dVar5 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (cVar8 == '\0' && 0.0 < SUB84(dVar5,0)) {
          if (cVar9 == '\0') {
            dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
            dVar5 = *(double *)(unsigned)(ar4 + 0x24);
          }
          if (cVar8 == '\0') {
            fVar4 = F32LO(dVar5) / F32HI(dVar5);
          }
          else {
            fVar4 = SUB84(dVar5 / dVar5,0);
          }
          if (cVar9 == '\0') {
            dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c),fVar4);
          }
          else {
            dVar5 = *(double *)(unsigned)(ar4 + 0x2c);
          }
          if (cVar8 == '\0') {
            fVar4 = F32LO(dVar5) + F32HI(dVar5);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar9 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2c) = fVar4;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x2c) = in_xd0;
          }
        }
        pdVar1 = (double *)(unsigned)(ar4 + 0x2c);
        if (cVar9 != '\0') {
          in_xd0 = *pdVar1;
          pdVar1 = (double *)(unsigned)(ar4 + 0x30);
        }
        dVar5 = *pdVar1;
        if (cVar8 == '\0' && F32HI(dVar5) < SUB84(dVar5,0)) {
          if (cVar9 == '\0') {
            uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x30);
            dVar5 = CONCAT44D(uVar2,SUB84(dVar5,0));
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = uVar2;
          }
          else {
            dVar5 = *(double *)(unsigned)(ar4 + 0x30);
            *(double *)(unsigned)(ar4 + 0x2c) = dVar5;
          }
        }
      }
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c022fc0(ar6,ar5,ar6_00,ar7));
      uVar2 = (undefined4)(D2U(dVar5) >> 0x20);
      if (cVar9 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),*(undefined4 *)(unsigned)(ar4 + 0x28));
        (*(undefined4 *)(fr0_ - 0x94)) = uVar2;
      }
      else {
        (*(undefined4 *)(fr0_ - 0x94)) = SUB84(dVar5,0);
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar5 = *(double *)(unsigned)(ar4 + 0x48);
        (*(undefined4 *)(fr0_ - 0x90)) = uVar2;
      }
      if (cVar8 == '\0') {
        fVar4 = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar9 == '\0') {
        uVar6 = CONCAT44((*(undefined4 *)(fr0_ - 0x94)),fVar4);
      }
      else {
        uVar6 = CONCAT44((*(undefined4 *)(fr0_ - 0x90)),(*(undefined4 *)(fr0_ - 0x94)));
      }
      if (cVar8 != '\0' || (float)(uVar6 >> 0x20) <= (float)uVar6) {
        dVar5 = (double)(uVar6 & 0xffffffff);
        if (cVar9 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x2c) = dVar5;
        }
        ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x88)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c022dac(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x88)) + 4,ar6_00,ar7));
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x42340000,(int)(D2U(dVar5) >> 0x20));
          dVar5 = in_xd0;
        }
        else {
          dVar7 = 2.993931213754161e-78;
        }
        if (cVar8 == '\0') {
          fVar4 = F32LO(dVar7) + F32HI(dVar7);
        }
        else {
          fVar4 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(unsigned)(ar4 + 0x38) = fVar4;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x38) = dVar5;
        }
        (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x88)) + 4,0xffffffff,ar6_00,ar7));
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          dVar5 = *(double *)(unsigned)(ar4 + 0x28);
          dVar7 = *(double *)(unsigned)(ar4 + 0x38);
        }
        if (cVar8 == '\0') {
          fVar4 = F32LO(dVar7) / F32HI(dVar7);
        }
        else {
          fVar4 = SUB84(dVar7 / dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(unsigned)(ar4 + 0x3c) = fVar4;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x3c) = dVar5;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
        uVar3 = 0;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  }
  return uVar3;
}

__asm__(".globl _FUN_8c097ba4\n.set _FUN_8c097ba4, _FUN_8c097ba4_def\n");
