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
undefined4 FUN_8c02a2b8_def(int ar4,undefined4 ar5,undefined4 ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c02a2b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  code *pcVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  double *ar7_00;
  float *pfVar3;
  float fVar4;
  code *pcVar5;
  ulonglong uVar6;
  double dVar7;
  code *pcVar9;
  double dVar8;
  float fVar10;
  double in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x3c)),uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x4c)),uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x58)),uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x64)),uVar2,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c02a544(*(undefined4 *)(unsigned)(ar4 + 0x308),uVar2,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x3c)),((undefined4 *)(fr0_ - 0x74)),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined4 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7_00));
  if (cVar12 == '\0') {
    uVar6 = CONCAT44(0xc7c35000,(*(undefined4 *)(fr0_ - 0x3c)));
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x38)),(*(undefined4 *)(fr0_ - 0x3c)));
    uVar6 = 0x8c014a34c7c35000;
  }
  if ((float)uVar6 == (float)(uVar6 >> 0x20)) {
    if (cVar12 == '\0') {
      *(float *)(unsigned)ar7 = 0.0;
    }
    else {
      *ar7 = (double)(uVar6 & 0xffffffff);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)((int)ar7 + 4) = 0.0;
    }
    else {
      *(ulonglong *)(unsigned)((int)ar7 + 4) = uVar6 & 0xffffffff;
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)(ar7 + 1) = 0.0;
    }
    else {
      ar7[1] = (double)(uVar6 & 0xffffffff);
    }
    (vsp = ((unsigned long)(fr0_ - 128)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7_00));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7_00));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02a568(ar4,ar6,&(*(undefined4 *)(fr0_ - 0x4c)),ar7_00));
    ar6_01 = ((undefined1 *)(fr0_ - 0x2c));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02a5d4(ar4,ar5,ar6_01,ar7_00));
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x4c)),(*(undefined4 *)(fr0_ - 0x3c)));
    }
    else {
      in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x38)),(*(undefined4 *)(fr0_ - 0x3c)));
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x48)),(*(undefined4 *)(fr0_ - 0x4c)));
    }
    if (cVar11 == '\0') {
      (*(float *)(fr0_ - 0x1c)) = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      (*(float *)(fr0_ - 0x1c)) = SUB84(dVar7 - dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x48)),(*(undefined4 *)(fr0_ - 0x38)));
    }
    else {
      (*(float *)(fr0_ - 0x1c)) = SUB84(in_xd0,0);
      in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x44)),(*(undefined4 *)(fr0_ - 0x48)));
    }
    if (cVar11 == '\0') {
      (*(float *)(fr0_ - 0x18)) = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      (*(float *)(fr0_ - 0x18)) = SUB84(dVar7 - dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x44)),(*(undefined4 *)(fr0_ - 0x34)));
    }
    else {
      (*(float *)(fr0_ - 0x18)) = SUB84(in_xd0,0);
      in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x40)),(*(undefined4 *)(fr0_ - 0x44)));
    }
    if (cVar11 == '\0') {
      fVar4 = F32HI(dVar7);
      dVar7 = CONCAT44D(fVar4,F32LO(dVar7) - fVar4);
    }
    else {
      dVar7 = dVar7 - dVar7;
    }
    if (cVar12 == '\0') {
      (*(undefined4 *)(fr0_ - 0x14)) = SUB84(dVar7,0);
    }
    else {
      (*(undefined4 *)(fr0_ - 0x14)) = SUB84(in_xd0,0);
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0231c8(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6_01,ar7_00));
    (*(undefined4 *)(fr0_ - 0x58)) = SUB84(dVar7,0);
    pcVar5 = (code *)(D2U(dVar7) >> 0x20);
    uVar2 = pcVar5;
    if (cVar12 == '\0') {
      uVar2 = ((undefined4 *)(fr0_ - 0x74))[0];
      (*(undefined4 *)(fr0_ - 0x58)) = pcVar5;
      pcVar5 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x54));
    }
    (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)(pcVar5));
    ((undefined4 *)(fr0_ - 0x74))[0] = uVar2;
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0231c8(&(*(float *)(fr0_ - 0x1c)),ar5,ar6_01,ar7_00));
    (*(undefined4 *)(fr0_ - 0x64)) = (undefined4)(D2U(dVar7) >> 0x20);
    if (cVar12 == '\0') {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x58)),(*(undefined4 *)(fr0_ - 0x64)));
      dVar7 = in_xd0;
    }
    else {
      (*(undefined4 *)(fr0_ - 0x7c)) = SUB84(dVar7,0);
      dVar8 = CONCAT44D(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x54)),(*(undefined4 *)(fr0_ - 0x58)));
      (*(undefined4 *)(fr0_ - 0x64)) = (*(undefined4 *)(fr0_ - 0x7c));
      (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)((code *)(*(undefined4 *)(fr0_ - 0x64))));
    }
    if (cVar11 == '\0') {
      fVar4 = F32LO(dVar8) - F32HI(dVar8);
    }
    else {
      fVar4 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)ar7 = fVar4;
      pcVar5 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar7);
      fVar4 = -20.0;
    }
    else {
      *ar7 = dVar7;
      dVar7 = *ar7;
      pcVar5 = (code *)0xc1a00000;
      fVar4 = 20.0;
    }
    if (cVar11 != '\0' || fVar4 <= (float)(uint)pcVar5) {
      if (cVar12 == '\0') {
        pcVar5 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar7);
        pcVar9 = (code *)0x41a00000;
      }
      else {
        dVar7 = *ar7;
        pcVar5 = (code *)0x41a00000;
        pcVar9 = ((void *)0x8c02327c);
      }
      if (cVar11 == '\0' && (float)(uint)pcVar9 < (float)(uint)pcVar5) {
        if (cVar12 == '\0') {
          pcVar9 = (code *)0x41a00000;
          *(float *)(unsigned)ar7 = 20.0;
        }
        else {
          pcVar5 = (code *)0x41a00000;
          pcVar9 = ((void *)0x8c02327c);
          *ar7 = -7.94252136586639e-251;
        }
      }
    }
    else if (cVar12 == '\0') {
      pcVar9 = (code *)0xc1a00000;
      *(float *)(unsigned)ar7 = -20.0;
    }
    else {
      pcVar5 = (code *)0xc1a00000;
      pcVar9 = (code *)0x41a00000;
      *ar7 = 134217824.8125;
    }
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02327c(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6_01,ar7_00));
    (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)(pcVar5));
    pcVar1 = pcVar9;
    if (cVar12 == '\0') {
      (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)(pcVar9));
      pcVar1 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x50));
    }
    (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)(pcVar1));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02327c(&(*(float *)(fr0_ - 0x1c)),ar5,ar6_01,ar7_00));
    (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)(pcVar5));
    if (cVar12 == '\0') {
      dVar8 = CONCAT44D(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x54)),pcVar9);
      (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)(pcVar9));
    }
    else {
      dVar7 = CONCAT44D(pcVar9,((code *)(unsigned long)*(unsigned *)(fr0_ - 0x60)));
      dVar8 = CONCAT44D(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x50)),((code *)(unsigned long)*(unsigned *)(fr0_ - 0x54)));
      (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(pcVar9));
    }
    if (cVar11 == '\0') {
      fVar4 = F32LO(dVar8) - F32HI(dVar8);
    }
    else {
      fVar4 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)((int)ar7 + 4) = fVar4;
      fVar4 = *(float *)(unsigned)((int)ar7 + 4);
      fVar10 = -40.0;
    }
    else {
      *(double *)(unsigned)((int)ar7 + 4) = dVar7;
      fVar4 = -40.0;
      fVar10 = 40.0;
    }
    if (cVar11 != '\0' || fVar10 <= fVar4) {
      if (cVar12 == '\0') {
        fVar4 = *(float *)(unsigned)((int)ar7 + 4);
        fVar10 = 40.0;
      }
      else {
        fVar4 = 40.0;
        fVar10 = NAN;
      }
      if (cVar11 == '\0' && fVar10 < fVar4) {
        pfVar3 = (float *)(unsigned)((int)ar7 + 4);
        if (cVar12 == '\0') {
          *pfVar3 = 40.0;
        }
        else {
          pfVar3[0] = 40.0;
          pfVar3[1] = NAN;
        }
      }
    }
    else {
      pfVar3 = (float *)(unsigned)((int)ar7 + 4);
      if (cVar12 == '\0') {
        *pfVar3 = -40.0;
      }
      else {
        pfVar3[0] = -40.0;
        pfVar3[1] = 40.0;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 128)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x64)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x58)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x4c)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x3c)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_01,ar7_00));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6_01,ar7_00));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02a2b8\n.set _FUN_8c02a2b8, _FUN_8c02a2b8_def\n");
