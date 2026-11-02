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
undefined4 FUN_8c0d1168_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1168";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 212; for (int i_ = 0; i_ < 212; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *a4;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar4;
  float fVar5;
  float fVar7;
  double dVar6;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  (vsp = ((unsigned long)(fr0_ - 212)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (*(undefined8 *)(fr0_ - 0x4c)) = CONCAT44((*(undefined1 *)(unsigned)0x8c13d420),(*(undefined4 *)(unsigned)(unsigned)0x8c13d41c));
  (*(float *)(fr0_ - 0x44)) = (*(undefined1 *)(unsigned)0x8c13d424);
  (*(float *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c13d428);
  (*(undefined4 *)(fr0_ - 0x3c)) = (*(undefined1 *)(unsigned)0x8c13d42c);
  (*(float *)(fr0_ - 0x38)) = (*(undefined1 *)(unsigned)0x8c13d430);
  (*(float *)(fr0_ - 0x34)) = (*(undefined1 *)(unsigned)0x8c13d434);
  (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined1 *)(unsigned)0x8c13d438);
  (*(float *)(fr0_ - 0x2c)) = (*(undefined1 *)(unsigned)0x8c13d43c);
  (*(float *)(fr0_ - 0x28)) = (*(undefined1 *)(unsigned)0x8c13d440);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c13d444);
  (*(float *)(fr0_ - 0x20)) = (*(undefined1 *)(unsigned)0x8c13d448);
  (*(undefined4 *)(fr0_ - 0x5c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13d44c);
  (*(undefined4 *)(fr0_ - 0x58)) = (*(undefined1 *)(unsigned)0x8c13d450);
  (*(undefined4 *)(fr0_ - 0x54)) = (*(undefined1 *)(unsigned)0x8c13d454);
  (*(undefined4 *)(fr0_ - 0x50)) = (*(undefined1 *)(unsigned)0x8c13d458);
  ar7_00 = 4;
  (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c01642c(((undefined1 *)(fr0_ - 0xb0)),&(*(undefined8 *)(fr0_ - 0x4c)),&(*(undefined4 *)(fr0_ - 0x5c)),4));
  (*(undefined2 *)(fr0_ - 0x6c)) = 0;
  (*(undefined2 *)(fr0_ - 0x6a)) = 0;
  (*(undefined2 *)(fr0_ - 0x68)) = 0;
  (*(undefined2 *)(fr0_ - 0x66)) = 0x7f;
  (*(undefined2 *)(fr0_ - 0x64)) = 0x7f;
  (*(undefined2 *)(fr0_ - 0x62)) = 0x7f;
  (*(undefined2 *)(fr0_ - 0x60)) = 0x7f;
  (*(undefined2 *)(fr0_ - 0x5e)) = 0;
  ar6_00 = 4;
  (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c0164c8(((undefined1 *)(fr0_ - 0xb0)),&(*(undefined2 *)(fr0_ - 0x6c)),4,ar7_00));
  ar5_00 = 0x80000060;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 212)); FUN_8c0d1450(((undefined1 *)(fr0_ - 0xb0)),0x80000060,ar6_00,ar7_00); });
  uVar3 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 212)); FUN_8c256328(0,ar5_00,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c019058(uVar3,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c01538c(ar4,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c015af8(ar4 + 8,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c256210(1,ar5_00,ar6_00,ar7_00));
  for (iVar4 = 0; iVar4 < 0x15e; iVar4 = iVar4 + 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 212)), get_field_100_0d1058(ar4 + iVar4 * 0xac + 0xc,ar5_00,ar6_00,ar7_00));
    if (iVar2 == 1) {
      a4 = (int *)(unsigned)(ar4 + iVar4 * 0xac + 0xc);
      (vsp = ((unsigned long)(fr0_ - 212)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x10))))(a4,ar5_00,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 212)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 212)) - 8); FUN_8c014eac(ar4 + iVar4 * 0xac + 0xc,ar5_00,ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 212)), Vec3_assign(&(*(float *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0xc0)),ar6_00,ar7_00));
      ar5_00 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 212)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        fVar7 = 200.0;
        fVar5 = (*(float *)(fr0_ - 0x18));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
        fVar5 = 200.0;
        fVar7 = 1500.0;
      }
      if (cVar8 != '\0' || fVar5 <= fVar7) {
        if (cVar9 == '\0') {
          fVar7 = 1500.0;
          fVar5 = (*(float *)(fr0_ - 0x1c));
        }
        else {
          in_xd0 = CONCAT44((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
          fVar5 = 1500.0;
          fVar7 = 2.63444e-43;
        }
        if (cVar8 == '\0' && fVar7 < fVar5) {
          if (cVar9 == '\0') {
            fVar7 = 800.0;
            fVar5 = (*(float *)(fr0_ - 0x14));
          }
          else {
            in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
            fVar5 = 800.0;
            fVar7 = 12.0;
          }
          if (cVar8 == '\0' && fVar7 < fVar5) {
            if (cVar9 == '\0') {
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x1c)));
            }
            else {
              in_xd0 = CONCAT44((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              fVar5 = F32LO(dVar6) - F32HI(dVar6);
            }
            else {
              fVar5 = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 == '\0') {
              (*(undefined8 *)(fr0_ - 0x4c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x4c))+4)),fVar5);
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x14)));
              uVar1 = in_xd0;
            }
            else {
              uVar1 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
              dVar6 = 2.97620270990453e-312;
              (*(undefined8 *)(fr0_ - 0x4c)) = in_xd0;
            }
            if (cVar8 == '\0') {
              (*(float *)(fr0_ - 0x44)) = F32LO(dVar6) - F32HI(dVar6);
            }
            else {
              (*(float *)(fr0_ - 0x44)) = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x1c)));
            }
            else {
              (*(float *)(fr0_ - 0x44)) = (float)uVar1;
              uVar1 = CONCAT44((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              (*(float *)(fr0_ - 0x40)) = F32LO(dVar6) - F32HI(dVar6);
            }
            else {
              (*(float *)(fr0_ - 0x40)) = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x14)));
            }
            else {
              (*(float *)(fr0_ - 0x40)) = (float)uVar1;
              (*(undefined4 *)(fr0_ - 0x3c)) = (undefined4)((ulonglong)uVar1 >> 0x20);
              uVar1 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              (*(float *)(fr0_ - 0x38)) = F32LO(dVar6) + F32HI(dVar6);
            }
            else {
              (*(float *)(fr0_ - 0x38)) = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x1c)));
            }
            else {
              (*(float *)(fr0_ - 0x38)) = (float)uVar1;
              uVar1 = CONCAT44((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              (*(float *)(fr0_ - 0x34)) = F32LO(dVar6) + F32HI(dVar6);
            }
            else {
              (*(float *)(fr0_ - 0x34)) = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x14)));
            }
            else {
              (*(float *)(fr0_ - 0x34)) = (float)uVar1;
              (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)((ulonglong)uVar1 >> 0x20);
              uVar1 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              (*(float *)(fr0_ - 0x2c)) = F32LO(dVar6) + F32HI(dVar6);
            }
            else {
              (*(float *)(fr0_ - 0x2c)) = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x1c)));
            }
            else {
              (*(float *)(fr0_ - 0x2c)) = (float)uVar1;
              uVar1 = CONCAT44((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              (*(float *)(fr0_ - 0x28)) = F32LO(dVar6) + F32HI(dVar6);
            }
            else {
              (*(float *)(fr0_ - 0x28)) = SUB84(dVar6 + dVar6,0);
            }
            if (cVar9 == '\0') {
              dVar6 = CONCAT44D(0x41400000,(*(float *)(fr0_ - 0x14)));
              in_xd0 = uVar1;
            }
            else {
              (*(float *)(fr0_ - 0x28)) = (float)uVar1;
              (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)uVar1 >> 0x20);
              in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
              dVar6 = 2.97620270990453e-312;
            }
            if (cVar8 == '\0') {
              (*(float *)(fr0_ - 0x20)) = F32LO(dVar6) - F32HI(dVar6);
            }
            else {
              (*(float *)(fr0_ - 0x20)) = SUB84(dVar6 - dVar6,0);
            }
            if (cVar9 != '\0') {
              (*(float *)(fr0_ - 0x20)) = (float)in_xd0;
              (*(float *)(fr0_ - 0x1c)) = F32HI(in_xd0);
            }
            (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c01538c(ar4,ar5_00,ar6_00,ar7_00));
            ar5_00 = 1;
            (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c014a94(ar4,1,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 212)), FUN_8c016524(((undefined1 *)(fr0_ - 0xb0)),ar5_00,ar6_00,ar7_00));
          }
        }
      }
    }
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 212)), Vec3_dtor(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c0d1168\n.set _FUN_8c0d1168, _FUN_8c0d1168_def\n");
