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
undefined4 FUN_8c0a0278_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a0278";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 220; for (int i_ = 0; i_ < 220; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *ar5_00;
  undefined4 uVar4;
  undefined4 *a6;
  undefined1 *ar6_00;
  undefined4 *a7;
  undefined4 *puVar5;
  float fVar6;
  ulonglong in_dr0 = 0;
  double dVar7;
  float fVar9;
  double dVar8;
  undefined4 in_fr3 = 0;
  undefined4 uVar10;
  undefined8 in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  a7 = &(*(undefined4 *)(fr0_ - 0x84));
  a6 = &(*(undefined4 *)(fr0_ - 0x80));
  puVar5 = &(*(undefined4 *)(fr0_ - 0x7c));
  (vsp = ((unsigned long)(fr0_ - 220)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x120))))(ar5,puVar5,a6,a7));
  iVar2 = ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 220)), get_field_4_05eed8(ar4,puVar5,a6,a7));
  if (iVar1 != 1) {
    if (iVar1 == 8) {
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x7c)),in_fr3);
        dVar7 = CONCAT44D(0x3dcccccd,(*(undefined4 *)(fr0_ - 0x7c)));
      }
      else {
        dVar8 = CONCAT44D(((undefined4 *)(fr0_ - 0x78))[0],(*(undefined4 *)(fr0_ - 0x7c)));
        dVar7 = 1.3411048210842936e-08;
      }
      if (cVar11 == '\0') {
        dVar8 = CONCAT44D(F32HI(dVar8) -
                                 F32LO(dVar7) * F32HI(dVar7),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 - dVar7 * dVar7;
      }
      (*(undefined4 *)(fr0_ - 0x7c)) = SUB84(dVar8,0);
      uVar3 = (undefined4)(D2U(dVar8) >> 0x20);
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x80)),(*(undefined4 *)(fr0_ - 0x7c)));
        dVar7 = CONCAT44D(0x3e4ccccd,(*(undefined4 *)(fr0_ - 0x80)));
        (*(undefined4 *)(fr0_ - 0x7c)) = uVar3;
      }
      else {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x7c)),(*(undefined4 *)(fr0_ - 0x80)));
        dVar7 = -7.532505548438758e-251;
        ((undefined4 *)(fr0_ - 0x78))[0] = uVar3;
      }
      if (cVar11 == '\0') {
        dVar8 = CONCAT44D(F32HI(dVar8) -
                                 F32LO(dVar7) * F32HI(dVar7),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 - dVar7 * dVar7;
      }
      (*(undefined4 *)(fr0_ - 0x80)) = SUB84(dVar8,0);
      uVar3 = (undefined4)(D2U(dVar8) >> 0x20);
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x84)),(*(undefined4 *)(fr0_ - 0x80)));
        dVar7 = CONCAT44D(0x3dcccccd,(*(undefined4 *)(fr0_ - 0x84)));
        (*(undefined4 *)(fr0_ - 0x80)) = uVar3;
      }
      else {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x80)),(*(undefined4 *)(fr0_ - 0x84)));
        dVar7 = 1.3411048210842936e-08;
        (*(undefined4 *)(fr0_ - 0x7c)) = uVar3;
      }
      if (cVar11 == '\0') {
        fVar9 = F32HI(dVar7);
        fVar6 = F32LO(dVar7) * fVar9;
        dVar7 = CONCAT44D(fVar9,fVar6);
        dVar8 = CONCAT44D(F32HI(dVar8) - fVar6,SUB84(dVar8,0));
      }
      else {
        dVar7 = dVar7 * dVar7;
        dVar8 = dVar8 - dVar7;
      }
      uVar3 = SUB84(dVar7,0);
      uVar4 = (undefined4)(D2U(dVar8) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x84)) = uVar4;
      if (cVar12 != '\0') {
        (*(undefined4 *)(fr0_ - 0x84)) = SUB84(dVar8,0);
        (*(undefined4 *)(fr0_ - 0x80)) = uVar4;
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 220)), rand(iVar2,puVar5,a6,a7));
      uVar10 = SUB84(dVar8,0);
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x7c)),uVar3);
      }
      else {
        dVar8 = CONCAT44D(((undefined4 *)(fr0_ - 0x78))[0],(*(undefined4 *)(fr0_ - 0x7c)));
      }
      if (cVar11 == '\0') {
        iVar2 = (int)F32HI(dVar8);
      }
      else {
        iVar2 = (int)dVar8;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 220)), libgcc_divide_helper_01031c(uVar4,iVar2,a6,a7));
      if (cVar11 == '\0') {
        dVar8 = CONCAT44D((float)iVar1,SUB84(dVar8,0));
      }
      else {
        dVar8 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = (int)(D2U(dVar8) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x28) = dVar8;
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), rand(uVar4,iVar2,a6,a7));
      (vsp = ((unsigned long)(fr0_ - 220)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x180))))(ar5,iVar2,a6,a7));
      if (cVar12 == '\0') {
        (*(undefined8 *)(fr0_ - 0xa0)) = CONCAT44D(uVar3,(int)(D2U(dVar8) >> 0x20));
        dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x80)),SUB84(dVar8,0));
      }
      else {
        dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x7c)),(*(undefined4 *)(fr0_ - 0x80)));
        (*(undefined8 *)(fr0_ - 0xa0)) = dVar8;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)F32HI(dVar7);
      }
      else {
        iVar2 = (int)dVar7;
      }
      uVar3 = (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xa0))+4));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 220)), libgcc_divide_helper_01031c((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xa0))+4)),iVar2,a6,a7));
      if (cVar11 == '\0') {
        dVar8 = CONCAT44D((float)iVar1,uVar10);
      }
      else {
        dVar8 = (double)iVar1;
      }
      if (cVar12 == '\0') {
        dVar7 = CONCAT44D(0x42c80000,(undefined4)(*(undefined8 *)(fr0_ - 0xa0)));
      }
      else {
        dVar7 = 5.085573493628304e+232;
      }
      if (cVar11 == '\0') {
        fVar9 = F32HI(dVar7);
        fVar6 = F32LO(dVar7) / fVar9;
        dVar7 = CONCAT44D(fVar9,fVar6);
        dVar8 = CONCAT44D(F32HI(dVar8) * fVar6,SUB84(dVar8,0));
      }
      else {
        dVar7 = dVar7 / dVar7;
        dVar8 = dVar8 * dVar7;
      }
      uVar4 = SUB84(dVar7,0);
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2c) = (int)(D2U(dVar8) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x2c) = dVar8;
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), rand(uVar3,iVar2,a6,a7));
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x84)),uVar4);
      }
      else {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x80)),(*(undefined4 *)(fr0_ - 0x84)));
      }
      if (cVar11 == '\0') {
        iVar2 = (int)F32HI(dVar8);
      }
      else {
        iVar2 = (int)dVar8;
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7));
      if (cVar11 == '\0') {
        dVar8 = CONCAT44D((float)iVar2,SUB84(dVar8,0));
      }
      else {
        dVar8 = (double)iVar2;
      }
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar8) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x30) = dVar8;
      }
    }
    else if (iVar1 == 0xb) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,2,a6,a7));
      if (iVar2 == 0) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c02f404(ar4,2,a6,a7); });
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x43960000;
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x43960000;
          *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x43960000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = 0xa092ed0043960000;
          *(undefined8 *)(unsigned)(ar4 + 0x2c) = 0xa092ed0043960000;
          *(undefined8 *)(unsigned)(ar4 + 0x30) = 0xa092ed0043960000;
        }
      }
      else {
        for (puVar5 = (undefined4 *)(unsigned)0x0; iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,2,a6,a7)),
            (int)puVar5 < iVar2; puVar5 = (undefined4 *)(unsigned)((int)puVar5 + 1)) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,2,puVar5,a7));
          a7 = &(*(undefined4 *)(fr0_ - 0x90));
          ar6_00 = ((undefined1 *)(fr0_ - 0x8c));
          ar5_00 = ((undefined1 *)(fr0_ - 0x88));
          (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c03f414(uVar3,ar5_00,ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x2c)),ar5_00,ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 220)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x2c)),ar6_00,a7));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c12619c),((undefined1 *)(fr0_ - 0x48)),ar6_00,a7); });
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x58)),ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,a7));
          (vsp = ((unsigned long)(fr0_ - 220)), object_dtor_delete(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,a7));
          uVar4 = 2;
          a6 = puVar5;
          uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,2,puVar5,a7));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); FUN_8c02f670(uVar3,uVar4,a6,a7); });
          ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x68)),((undefined1 *)(fr0_ - 0x3c)),a6,a7); });
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x20)),((undefined4 *)(fr0_ - 0x78)),a6,a7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined4 *)(fr0_ - 0x78)),0xffffffff,a6,a7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,a6,a7));
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
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,a6,a7));
          (vsp = ((unsigned long)(fr0_ - 220)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,a6,a7));
        }
      }
    }
    else if ((iVar1 == 0xd) && (*(int *)(unsigned)(ar4 + 0x40) == 9)) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), rand(iVar2,puVar5,a6,a7));
      uVar4 = 2;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), libgcc_divide_helper_01031c(uVar3,2,a6,a7));
      if (iVar2 == 0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0 & 0xffffffff;
        }
      }
      else if (cVar12 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = (*(undefined4 *)(fr0_ - 0x7c));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = CONCAT44(((undefined4 *)(fr0_ - 0x78))[0],(*(undefined4 *)(fr0_ - 0x7c)));
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), rand(uVar3,uVar4,a6,a7));
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(0x442f0000,(*(undefined4 *)(fr0_ - 0x80)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x7c)),(*(undefined4 *)(fr0_ - 0x80)));
        dVar8 = -7.425279834635228e-251;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(F32LO(dVar8) - F32HI(dVar8));
      }
      else {
        iVar2 = (int)(dVar8 - dVar8);
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 220)), libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7));
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(0x43af0000,(float)iVar1);
      }
      else {
        dVar8 = 3.458765095218184e+18;
      }
      if (cVar11 == '\0') {
        fVar6 = F32LO(dVar8) + F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2c) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2c) = in_xd0;
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), rand(uVar3,iVar2,a6,a7));
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(0x43c80000,(*(undefined4 *)(fr0_ - 0x84)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x80)),(*(undefined4 *)(fr0_ - 0x84)));
        dVar8 = 13510801156472832.0;
      }
      if (cVar11 == '\0') {
        iVar2 = (int)(F32LO(dVar8) - F32HI(dVar8));
      }
      else {
        iVar2 = (int)(dVar8 - dVar8);
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), libgcc_divide_helper_01031c(uVar3,iVar2,a6,a7));
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(0x43480000,(float)iVar2);
      }
      else {
        dVar8 = 2.5193118417763846e+177;
      }
      if (cVar11 == '\0') {
        fVar6 = F32LO(dVar8) + F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x30) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
      }
    }
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,a6,a7));
  return uVar3;
}

__asm__(".globl _FUN_8c0a0278\n.set _FUN_8c0a0278, _FUN_8c0a0278_def\n");
