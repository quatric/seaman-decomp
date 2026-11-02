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
undefined4 FUN_8c0ac1f0_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ac1f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 228; for (int i_ = 0; i_ < 228; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *ar5_00;
  undefined1 *ar5_01;
  undefined4 uVar4;
  undefined4 *a6;
  undefined1 *ar6_00;
  undefined4 *a7;
  undefined4 *puVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  undefined4 in_fr3 = 0;
  undefined4 uVar9;
  double dVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 228)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 228)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x30)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 228)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x40)),ar5_00,ar6,ar7));
  a7 = &(*(undefined4 *)(fr0_ - 0xa4));
  a6 = &(*(undefined4 *)(fr0_ - 0xa0));
  puVar5 = &(*(undefined4 *)(fr0_ - 0x9c));
  (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x120))))(ar5,puVar5,a6,a7));
  iVar2 = ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 228)), get_field_4_05eed8(ar4,puVar5,a6,a7));
  if (iVar1 != 1) {
    if (iVar1 == 8) {
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0x9c)),in_fr3);
        dVar7 = CONCAT44D(0x3dcccccd,(*(undefined4 *)(fr0_ - 0x9c)));
      }
      else {
        dVar10 = CONCAT44D(((undefined4 *)(fr0_ - 0x98))[0],(*(undefined4 *)(fr0_ - 0x9c)));
        dVar7 = 1.3411048210842936e-08;
      }
      if (cVar11 == '\0') {
        dVar10 = CONCAT44D(F32HI(dVar10) -
                                  F32LO(dVar7) * F32HI(dVar7),SUB84(dVar10,0)
                                 );
      }
      else {
        dVar10 = dVar10 - dVar7 * dVar7;
      }
      (*(undefined4 *)(fr0_ - 0x9c)) = SUB84(dVar10,0);
      uVar3 = (undefined4)(D2U(dVar10) >> 0x20);
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa0)),(*(undefined4 *)(fr0_ - 0x9c)));
        dVar7 = CONCAT44D(0x3e4ccccd,(*(undefined4 *)(fr0_ - 0xa0)));
        (*(undefined4 *)(fr0_ - 0x9c)) = uVar3;
      }
      else {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0x9c)),(*(undefined4 *)(fr0_ - 0xa0)));
        dVar7 = -7.532505548438758e-251;
        ((undefined4 *)(fr0_ - 0x98))[0] = uVar3;
      }
      if (cVar11 == '\0') {
        dVar10 = CONCAT44D(F32HI(dVar10) -
                                  F32LO(dVar7) * F32HI(dVar7),SUB84(dVar10,0)
                                 );
      }
      else {
        dVar10 = dVar10 - dVar7 * dVar7;
      }
      (*(undefined4 *)(fr0_ - 0xa0)) = SUB84(dVar10,0);
      uVar3 = (undefined4)(D2U(dVar10) >> 0x20);
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa4)),(*(undefined4 *)(fr0_ - 0xa0)));
        dVar7 = CONCAT44D(0x3dcccccd,(*(undefined4 *)(fr0_ - 0xa4)));
        (*(undefined4 *)(fr0_ - 0xa0)) = uVar3;
      }
      else {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa0)),(*(undefined4 *)(fr0_ - 0xa4)));
        dVar7 = 1.3411048210842936e-08;
        (*(undefined4 *)(fr0_ - 0x9c)) = uVar3;
      }
      if (cVar11 == '\0') {
        fVar8 = F32HI(dVar7);
        fVar6 = F32LO(dVar7) * fVar8;
        dVar7 = CONCAT44D(fVar8,fVar6);
        dVar10 = CONCAT44D(F32HI(dVar10) - fVar6,SUB84(dVar10,0));
      }
      else {
        dVar7 = dVar7 * dVar7;
        dVar10 = dVar10 - dVar7;
      }
      uVar3 = SUB84(dVar7,0);
      uVar4 = (undefined4)(D2U(dVar10) >> 0x20);
      (*(undefined4 *)(fr0_ - 0xa4)) = uVar4;
      if (cVar12 != '\0') {
        (*(undefined4 *)(fr0_ - 0xa4)) = SUB84(dVar10,0);
        (*(undefined4 *)(fr0_ - 0xa0)) = uVar4;
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 228)), rand(iVar2,puVar5,a6,a7));
      uVar9 = SUB84(dVar10,0);
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0x9c)),uVar3);
      }
      else {
        dVar10 = CONCAT44D(((undefined4 *)(fr0_ - 0x98))[0],(*(undefined4 *)(fr0_ - 0x9c)));
      }
      if (cVar11 == '\0') {
        iVar2 = (int)F32HI(dVar10);
      }
      else {
        iVar2 = (int)dVar10;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 228)), libgcc_divide_helper_01031c(uVar4,iVar2,a6,a7));
      if (cVar11 == '\0') {
        dVar10 = CONCAT44D((float)iVar1,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = (int)(D2U(dVar10) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = dVar10;
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 228)), rand(uVar4,iVar2,a6,a7));
      (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x180))))(ar5,iVar2,a6,a7));
      if (cVar12 == '\0') {
        (*(undefined8 *)(fr0_ - 0xc0)) = CONCAT44D(uVar3,(int)(D2U(dVar10) >> 0x20));
        dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa0)),SUB84(dVar10,0));
      }
      else {
        dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x9c)),(*(undefined4 *)(fr0_ - 0xa0)));
        (*(undefined8 *)(fr0_ - 0xc0)) = dVar10;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)F32HI(dVar7);
      }
      else {
        iVar2 = (int)dVar7;
      }
      uVar3 = (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc0))+4));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 228)), libgcc_divide_helper_01031c((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc0))+4)),iVar2,a6,a7));
      if (cVar11 == '\0') {
        dVar10 = CONCAT44D((float)iVar1,uVar9);
      }
      else {
        dVar10 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        dVar7 = CONCAT44D(0x42c80000,(undefined4)(*(undefined8 *)(fr0_ - 0xc0)));
      }
      else {
        dVar7 = 6.03200357491229e-312;
      }
      if (cVar11 == '\0') {
        fVar8 = F32HI(dVar7);
        fVar6 = F32LO(dVar7) / fVar8;
        dVar7 = CONCAT44D(fVar8,fVar6);
        dVar10 = CONCAT44D(F32HI(dVar10) * fVar6,SUB84(dVar10,0));
      }
      else {
        dVar7 = dVar7 / dVar7;
        dVar10 = dVar10 * dVar7;
      }
      uVar4 = SUB84(dVar7,0);
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2c) = (int)(D2U(dVar10) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x2c) = dVar10;
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 228)), rand(uVar3,iVar2,a6,a7));
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa4)),uVar4);
      }
      else {
        dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa0)),(*(undefined4 *)(fr0_ - 0xa4)));
      }
      if (cVar11 == '\0') {
        iVar2 = (int)F32HI(dVar10);
      }
      else {
        iVar2 = (int)dVar10;
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 228)), libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7));
      if (cVar11 == '\0') {
        dVar10 = CONCAT44D((float)iVar2,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)iVar2;
      }
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar10) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x30) = dVar10;
      }
    }
    else if (iVar1 == 0xb) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,5,a6,a7));
      if (iVar2 == 0) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 228)); FUN_8c02f404(ar4,2,a6,a7); });
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x43fa0000;
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x43fa0000;
          *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x43fa0000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x10043fa0000;
          *(undefined8 *)(unsigned)(ar4 + 0x2c) = 0x10043fa0000;
          *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x10043fa0000;
        }
      }
      else {
        for (puVar5 = (undefined4 *)(unsigned)0x0; iVar2 = (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,5,a6,a7)),
            (int)puVar5 < iVar2; puVar5 = (undefined4 *)(unsigned)((int)puVar5 + 1)) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,5,puVar5,a7));
          a7 = &(*(undefined4 *)(fr0_ - 0xb0));
          ar6_00 = ((undefined1 *)(fr0_ - 0xac));
          ar5_01 = ((undefined1 *)(fr0_ - 0xa8));
          (vsp = ((unsigned long)(fr0_ - 228)), FUN_8c03f414(uVar3,ar5_01,ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 228)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x4c)),ar5_01,ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 228)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x68)),((undefined1 *)(fr0_ - 0x4c)),ar6_00,a7));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 228)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 228)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x68)),ar6_00,a7); });
          (vsp = ((unsigned long)(fr0_ - 228)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x5c)),((undefined1 *)(fr0_ - 0x78)),ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 228)), object_dtor_delete(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,a7));
          uVar4 = 5;
          a6 = puVar5;
          uVar3 = (vsp = ((unsigned long)(fr0_ - 228)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,5,puVar5,a7));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 228)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 228)) - 8); FUN_8c02f670(uVar3,uVar4,a6,a7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 228)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 228)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(fr0_ - 0x5c)),a6,a7); });
          (vsp = ((unsigned long)(fr0_ - 228)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x20)),((undefined4 *)(fr0_ - 0x98)),a6,a7));
          (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined4 *)(fr0_ - 0x98)),0xffffffff,a6,a7));
          (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,a6,a7));
          if (cVar12 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = (*(undefined4 *)(fr0_ - 0x20));
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = (*(undefined4 *)(fr0_ - 0x1c));
            *(undefined4 *)(unsigned)(ar4 + 0x30) = (*(undefined4 *)(fr0_ - 0x18));
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x28) = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
            *(ulonglong *)(unsigned)(ar4 + 0x2c) = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
            *(ulonglong *)(unsigned)(ar4 + 0x30) = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
          }
          (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,a6,a7));
          (vsp = ((unsigned long)(fr0_ - 228)), object_dtor_delete(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,a6,a7));
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,a6,a7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 228)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,a6,a7));
  return uVar3;
}

__asm__(".globl _FUN_8c0ac1f0\n.set _FUN_8c0ac1f0, _FUN_8c0ac1f0_def\n");
