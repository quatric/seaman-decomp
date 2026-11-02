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
undefined4 FUN_8c051a68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c051a68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  double in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ar6;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_sub(ar5,ar6,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_normalize(((undefined1 *)(fr0_ - 0x3c)),ar6,uVar1,ar7));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x4c)),uVar1,ar7));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,uVar1,ar7));
    uVar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar1,ar7));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),uVar5,uVar1,ar7));
    iVar2 = *(int *)(unsigned)(ar4 + 0x40);
    if ((iVar2 == 1) || (iVar2 == 3)) {
      pdVar3 = (double *)(unsigned)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar3;
        pdVar3 = (double *)(unsigned)(ar4 + 0x30);
      }
      dVar7 = *pdVar3;
      if (cVar8 == '\0') {
        fVar6 = F32LO(dVar7) / F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      dVar7 = in_xd0;
      if (cVar9 == '\0') {
        (*(undefined8 *)(fr0_ - 0x70)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x70))+4)),fVar6);
        dVar7 = (*(undefined8 *)(fr0_ - 0x70));
      }
      (*(undefined8 *)(fr0_ - 0x70)) = dVar7;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x1c)),&(*(undefined8 *)(fr0_ - 0x70)),uVar1,ar7); });
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023aa0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x5c)),uVar1,ar7));
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,uVar1,ar7));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_normalize(ar4 + 0x14,uVar5,uVar1,ar7));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x70)) + 4,uVar1,ar7));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x70)) + 4,0xffffffff,uVar1,ar7));
      pdVar3 = (double *)(unsigned)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar3;
        pdVar3 = (double *)(unsigned)(ar4 + 0x30);
      }
      dVar7 = *pdVar3;
      if (SUB84(dVar7,0) != F32HI(dVar7)) {
        if (cVar9 == '\0') {
          dVar7 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (cVar8 == '\0' && 0.0 < SUB84(dVar7,0)) {
          if (cVar9 == '\0') {
            dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
            dVar7 = *(double *)(unsigned)(ar4 + 0x24);
          }
          if (cVar8 == '\0') {
            fVar6 = F32LO(dVar7) / F32HI(dVar7);
          }
          else {
            fVar6 = SUB84(dVar7 / dVar7,0);
          }
          if (cVar9 == '\0') {
            dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c),fVar6);
          }
          else {
            dVar7 = *(double *)(unsigned)(ar4 + 0x2c);
          }
          if (cVar8 == '\0') {
            fVar6 = F32LO(dVar7) + F32HI(dVar7);
          }
          else {
            fVar6 = SUB84(dVar7 + dVar7,0);
          }
          puVar4 = (undefined8 *)(unsigned)(ar4 + 0x30);
          if (cVar9 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2c) = fVar6;
            puVar4 = (undefined8 *)(unsigned)(ar4 + 0x2c);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x2c) = in_xd0;
          }
          if (cVar8 == '\0' && (float)((ulonglong)*puVar4 >> 0x20) < (float)*puVar4) {
            if (cVar9 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x2c) = *(undefined4 *)(unsigned)(ar4 + 0x30);
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x2c) = *(undefined8 *)(unsigned)(ar4 + 0x30);
            }
          }
        }
      }
    }
    else if (iVar2 == 4) {
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c05ae54(ar4,uVar5,uVar1,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,uVar1,ar7));
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,uVar1,ar7));
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c051a68\n.set _FUN_8c051a68, _FUN_8c051a68_def\n");
