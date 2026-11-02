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
undefined4 FUN_8c032d48_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c032d48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 184; for (int i_ = 0; i_ < 184; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int ar6_00;
  int ar7_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double in_dr0 = 0;
  double dVar6;
  float fVar8;
  ulonglong uVar7;
  undefined4 in_fr3 = 0;
  double dVar9;
  undefined8 in_xd0 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar3 = 1;
  iVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_ctor_zero(((undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_set_zero(&(*(float *)(fr0_ - 0x30)),iVar2,ar6_00,ar7_00));
  iVar1 = *(int *)(unsigned)(ar4 + 0x1e8);
  if ((iVar1 < 7) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(ar7,((undefined1 *)(unsigned)0x8c132bfc),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(((undefined4 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x40)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(((undefined4 *)(fr0_ - 0x24)),((undefined1 *)(unsigned)0x8c132c00),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_add(ar6,((undefined1 *)(fr0_ - 0x50)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x60)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031bb4(ar4,ar5,ar4 + 0x54,ar7_00));
      *(int *)(unsigned)(ar4 + 0x1e8) = *(int *)(unsigned)(ar4 + 0x1e8) + 1;
    case 1:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7_00));
      ar6_00 = ar5;
      if (iVar2 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(int *)(unsigned)(ar4 + 0x1e8) = *(int *)(unsigned)(ar4 + 0x1e8) + 1;
      }
      break;
    case 2:
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x6c)),iVar2,ar6_00,ar7_00));
      ar7_00 = ar4 + 0x14;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); unsigned long t1_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c0332b4(ar4,ar5,ar6,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 184)), vec3_copy_8c023d8c(ar4 + 0x1ec,((undefined1 *)(fr0_ - 0x78)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), object_dtor_delete(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), object_dtor_delete(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6,ar7_00));
      *(int *)(unsigned)(ar4 + 0x1e8) = *(int *)(unsigned)(ar4 + 0x1e8) + 1;
      ar6_00 = ar6;
    case 3:
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x41200000,*(undefined4 *)(unsigned)(ar4 + 0x1ec));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1ec);
        dVar6 = 4.33426965481473e-312;
      }
      if (cVar11 == '\0') {
        (*(float *)(fr0_ - 0x30)) = F32LO(dVar6) / F32HI(dVar6);
      }
      else {
        (*(float *)(fr0_ - 0x30)) = SUB84(dVar6 / dVar6,0);
      }
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x41200000,*(undefined4 *)(unsigned)(ar4 + 0x1f0));
      }
      else {
        (*(float *)(fr0_ - 0x30)) = (float)in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1f0);
        dVar6 = 4.33426965481473e-312;
      }
      if (cVar11 == '\0') {
        (*(float *)(fr0_ - 0x2c)) = F32LO(dVar6) / F32HI(dVar6);
      }
      else {
        (*(float *)(fr0_ - 0x2c)) = SUB84(dVar6 / dVar6,0);
      }
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x41200000,*(undefined4 *)(unsigned)(ar4 + 500));
      }
      else {
        (*(float *)(fr0_ - 0x2c)) = (float)in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 500);
        dVar6 = 4.33426965481473e-312;
      }
      if (cVar11 == '\0') {
        fVar5 = F32LO(dVar6) / F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 / dVar6,0);
      }
      (*(float *)(fr0_ - 0x28)) = fVar5;
      if (cVar12 != '\0') {
        (*(float *)(fr0_ - 0x28)) = (float)in_xd0;
        ((undefined4 *)(fr0_ - 0x24))[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      (vsp = ((unsigned long)(fr0_ - 184)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x84)),&(*(float *)(fr0_ - 0x30)),ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x84)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x94)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), object_dtor_delete(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7_00));
      if (cVar12 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x1f8);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1f8);
      }
      if (cVar11 == '\0') {
        fVar5 = fVar5 + 1.0;
      }
      else {
        fVar5 = SUB84(CONCAT44D(0x3f800000,fVar5) + CONCAT44D(0x3f800000,fVar5),0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x1f8) = fVar5;
        uVar7 = CONCAT44(0x41200000,*(undefined4 *)(unsigned)(ar4 + 0x1f8));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x1f8) = in_xd0;
        uVar7 = 0xcc41200000;
      }
      if (cVar11 != '\0' || (float)(uVar7 >> 0x20) <= (float)uVar7) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x1f8) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x1f8) = uVar7 & 0xffffffff;
        }
        *(int *)(unsigned)(ar4 + 0x1e8) = *(int *)(unsigned)(ar4 + 0x1e8) + 1;
      }
      break;
    case 4:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_add(ar5,ar6,ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0xa4)),((undefined1 *)(unsigned)0x8c132c04),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xb4)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7_00));
      ar6_00 = ar4 + 0x54;
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031bb4(ar4,ar5,ar6_00,ar7_00));
      *(int *)(unsigned)(ar4 + 0x1e8) = *(int *)(unsigned)(ar4 + 0x1e8) + 1;
    case 5:
      iVar2 = ar4 + 0x54;
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022fc0(ar5,iVar2,ar6_00,ar7_00));
      if (cVar12 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
        dVar6 = CONCAT44D(0x42480000,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = -8.341321687789945e-251;
      }
      if (cVar11 == '\0') {
        fVar8 = F32HI(dVar6);
        fVar5 = F32LO(dVar6) * fVar8;
        dVar6 = CONCAT44D(fVar8,fVar5);
        bVar10 = fVar5 < F32HI(in_dr0);
      }
      else {
        dVar6 = dVar6 * dVar6;
        bVar10 = dVar6 < in_dr0;
      }
      if (!bVar10) {
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(in_dr0,0));
        }
        else {
          dVar9 = *(double *)(unsigned)(ar4 + 0x28);
        }
        fVar5 = F32HI(dVar6);
        if (cVar11 == '\0') {
          dVar9 = CONCAT44D(F32HI(dVar9) / fVar5,SUB84(dVar9,0));
        }
        else {
          dVar9 = dVar9 / dVar6;
        }
        if (cVar11 == '\0') {
          fVar5 = 1.0 - F32HI(dVar9);
        }
        else {
          fVar5 = SUB84(CONCAT44D(fVar5,0x3f800000) - dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),fVar5);
        }
        else {
          dVar6 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (cVar11 == '\0') {
          dVar6 = (double)(ulonglong)(uint)(F32LO(dVar6) * F32HI(dVar6));
        }
        else {
          dVar6 = dVar6 * dVar6;
        }
        iVar2 = ar6;
        if (cVar12 == '\0') {
          *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
      uVar4 = SUB84(dVar6,0);
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031c64(ar4,iVar2,ar6_00,ar7_00));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7_00));
      ar6_00 = ar5;
      if (iVar2 == 0) {
        *(int *)(unsigned)(ar4 + 0x1e8) = *(int *)(unsigned)(ar4 + 0x1e8) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x48) = 0x3f800000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x48) = CONCAT44(0x3f800000,uVar4);
        }
      }
      break;
    case 6:
      iVar2 = ar6;
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
      if (cVar12 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
        dVar6 = CONCAT44D(0x42480000,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = 5.2386907559463314e-11;
      }
      if (cVar11 == '\0') {
        fVar8 = F32HI(dVar6);
        fVar5 = F32LO(dVar6) * fVar8;
        dVar6 = CONCAT44D(fVar8,fVar5);
        bVar10 = fVar5 < F32HI(in_dr0);
      }
      else {
        dVar6 = dVar6 * dVar6;
        bVar10 = dVar6 < in_dr0;
      }
      if (!bVar10) {
        iVar2 = ar6;
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(in_dr0,0));
        }
        else {
          dVar9 = *(double *)(unsigned)(ar4 + 0x28);
        }
        fVar5 = F32HI(dVar6);
        if (cVar11 == '\0') {
          dVar9 = CONCAT44D(F32HI(dVar9) / fVar5,SUB84(dVar9,0));
        }
        else {
          dVar9 = dVar9 / dVar6;
        }
        if (cVar11 == '\0') {
          fVar5 = 1.0 - F32HI(dVar9);
        }
        else {
          fVar5 = SUB84(CONCAT44D(fVar5,0x3f800000) - dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),fVar5);
        }
        else {
          dVar6 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (cVar11 == '\0') {
          fVar5 = F32LO(dVar6) * F32HI(dVar6);
        }
        else {
          fVar5 = SUB84(dVar6 * dVar6,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar5;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        uVar7 = 0x8c031c643dcccccd;
      }
      if (cVar11 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
        if (cVar12 == '\0') {
          uVar7 = CONCAT44(0x3dcccccd,(float)uVar7);
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3dcccccd;
        }
        else {
          uVar7 = 0x8c031c643dcccccd;
          *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x8c031c643dcccccd;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031c64(ar4,iVar2,ar6_00,ar7_00));
      ar6_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031764(ar4,ar6,ar5,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
      if (cVar12 == '\0') {
        uVar7 = uVar7 >> 0x20;
      }
      if (cVar11 != '\0' || (float)uVar7 <= 1.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar7 & 0xffffffff;
        }
        uVar3 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x1e8) = 0;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 184)), object_dtor_delete(&(*(float *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined4 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c032d48\n.set _FUN_8c032d48, _FUN_8c032d48_def\n");
