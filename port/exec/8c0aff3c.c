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
undefined4 Class_12b2ac_m1_0aff3c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b2ac_m1_0aff3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 356; for (int i_ = 0; i_ < 356; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *ar5_00;
  int iVar4;
  double in_dr0 = 0;
  double dVar5;
  double dVar6;
  float fVar8;
  double in_dr2 = 0;
  double in_dr14 = 0;
  undefined8 in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  float fVar7;
  
  cVar11 = '\0';
  cVar10 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x240) = 0;
  puVar3 = ar5;
  if (*(int *)(unsigned)(ar4 + 0x124) == 5) {
    (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c03207c(ar4,ar5,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c03207c(ar4,ar5,ar6,ar7));
  }
  if (*(int *)(unsigned)(ar4 + 0x124) == 8) {
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x30)),puVar3,ar6,ar7));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c023cd4(ar4 + 0x14,((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
    ar5_00 = (code *)0x0;
    if (iVar4 != 0) {
      (vsp = ((unsigned long)(fr0_ - 356)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x3c)),ar4 + 0x14c,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x3c)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 356)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x4c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x58)),ar4 + 0x14c,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); FUN_8c023484(ar4 + 0x80,((undefined1 *)(fr0_ - 0x58)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 356)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x68)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), object_dtor_delete(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
      ar5_00 = ((void *)0x8c02a1fc);
      (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c02a1fc(ar4 + 0x14c,((void *)0x8c02a1fc),ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 356)), vec3_clear(ar4 + 0x13c,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c031700(ar4,ar5_00,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 356)), Class_129cbc_m1_031598(ar4,ar5,ar6,ar7));
  }
  if ((ar5[4] == 3) || (*(int *)(unsigned)(ar4 + 0x68) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c0b5344(ar4,ar5[4],ar6,ar7));
    uVar1 = 1;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x160))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 356)); FUN_8c02f2c0(*ar5,1,ar6,ar7); });
    if (*(int *)(unsigned)(ar4 + 0x124) != 2) {
      uVar1 = *(undefined4 *)(unsigned)(ar5[1] + 4);
      (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c031ab4(ar4,uVar1,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c0324ac(ar4,uVar1,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x78)),ar4 + 0x90,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x88)),ar4 + 0x6c,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa8))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x98)),ar4 + 0x13c,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb8))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xa8)),ar4 + 0x338,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_assign(ar4 + 4,((undefined1 *)(fr0_ - 0xb8)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6,ar7));
    iVar4 = -1;
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6,ar7));
  }
  else {
    ar7 = ar5[6];
    ar6 = ar5[3];
    uVar1 = (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c0b0784(ar4,*ar5,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x160))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 356)); FUN_8c02f2c0(*ar5,uVar1,ar6,ar7); });
    uVar1 = *(undefined4 *)(unsigned)(ar5[1] + 4);
    (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c031ab4(ar4,uVar1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c0324ac(ar4,uVar1,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xc8)),ar4 + 0x90,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe8))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xd8)),ar4 + 0x6c,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf8))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xe8)),ar4 + 0x13c,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x108))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xf8)),ar4 + 0x338,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_assign(ar4 + 4,((undefined1 *)(fr0_ - 0x108)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x108)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6,ar7));
    uVar1 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), vec3_clear(ar4 + 0x338,uVar1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x20)),uVar1,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x118))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 4,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x118)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x118)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 356)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],*(undefined4 *)(unsigned)(uint)ar5[1],ar6,ar7));
    if (cVar11 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20))
      ;
      in_dr0 = in_xd14;
    }
    if (((*(int *)(unsigned)(ar4 + 0x124) != 8) && (*(int *)(unsigned)(ar4 + 0x124) != 5)) &&
       (*(int *)(unsigned)(ar4 + 0x124) != 6)) {
      if (cVar11 == '\0') {
        in_dr2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),SUB84(in_dr2,0));
        dVar5 = CONCAT44D(SUB84(in_dr14,0),0x42100000);
      }
      else {
        in_dr2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
        in_xd0 = 0x4000000042100000;
        dVar5 = in_dr0;
      }
      if (cVar10 == '\0') {
        fVar7 = F32HI(dVar5) + F32LO(dVar5);
        dVar5 = CONCAT44D(fVar7,SUB84(dVar5,0));
        bVar9 = F32HI(in_dr2) < fVar7;
      }
      else {
        dVar5 = dVar5 + dVar5;
        bVar9 = in_dr2 < dVar5;
      }
      if (bVar9) {
        if (cVar11 == '\0') {
          dVar5 = CONCAT44D(0x42100000,SUB84(dVar5,0));
        }
        else {
          dVar5 = 2.0000004922039807;
        }
        if (cVar10 == '\0') {
          in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                     F32LO(in_dr14) + F32HI(dVar5));
        }
        else {
          in_dr14 = in_dr14 + dVar5;
        }
        if (cVar11 == '\0') {
          dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),SUB84(dVar5,0));
        }
        else {
          dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
        }
        if (cVar10 == '\0') {
          in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                     F32LO(in_dr14) - F32HI(dVar5));
        }
        else {
          in_dr14 = in_dr14 - dVar5;
        }
        if (cVar11 == '\0') {
          dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 8),SUB84(dVar5,0));
        }
        else {
          dVar5 = *(double *)(unsigned)(ar4 + 8);
        }
        if (cVar10 == '\0') {
          fVar7 = F32LO(in_dr14) + F32HI(dVar5);
        }
        else {
          fVar7 = SUB84(in_dr14 + dVar5,0);
        }
        if (cVar11 == '\0') {
          *(float *)(unsigned)(ar4 + 8) = fVar7;
        }
        else {
          *(double *)(unsigned)(ar4 + 8) = in_dr0;
        }
      }
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),SUB84(in_dr2,0));
      dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      bVar9 = F32HI(dVar5) < F32LO(dVar6) * F32HI(dVar6)
      ;
    }
    else {
      bVar9 = dVar5 < dVar6 * dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) * F32HI(dVar6);
      }
      else {
        fVar7 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),fVar7);
      }
      else {
        dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) - F32HI(dVar6);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 4),fVar7);
      }
      else {
        dVar6 = *(double *)(unsigned)(ar4 + 4);
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar7 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)(ar4 + 4) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 4) = in_xd0;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(uint)ar5[3],SUB84(dVar5,0));
      dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)(unsigned)(uint)ar5[3];
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      fVar7 = F32LO(dVar6) * F32HI(dVar6);
      dVar5 = CONCAT44D(F32HI(dVar5) - fVar7,SUB84(dVar5,0));
    }
    else {
      fVar7 = SUB84(dVar6 * dVar6,0);
      dVar5 = dVar5 - dVar6 * dVar6;
    }
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),fVar7);
    }
    else {
      dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
    }
    if (cVar10 == '\0') {
      bVar9 = F32HI(dVar5) < F32HI(dVar6);
    }
    else {
      bVar9 = dVar5 < dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(uint)ar5[3],SUB84(dVar5,0));
        dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        dVar5 = *(double *)(unsigned)(uint)ar5[3];
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar8 = F32HI(dVar6);
        fVar7 = F32LO(dVar6) * fVar8;
        dVar6 = CONCAT44D(fVar8,fVar7);
        dVar5 = CONCAT44D(F32HI(dVar5) - fVar7,SUB84(dVar5,0));
      }
      else {
        dVar6 = dVar6 * dVar6;
        dVar5 = dVar5 - dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),(*(undefined4 *)(fr0_ - 0x20)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) - F32HI(dVar5);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 4),fVar7);
      }
      else {
        dVar6 = *(double *)(unsigned)(ar4 + 4);
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) - F32LO(dVar6),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 4) = (int)(D2U(dVar6) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 4) = dVar6;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar5[3] + 4),SUB84(dVar5,0));
      dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)(unsigned)(ar5[3] + 4);
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      fVar7 = F32LO(dVar6) * F32HI(dVar6);
      dVar5 = CONCAT44D(F32HI(dVar5) - fVar7,SUB84(dVar5,0));
    }
    else {
      fVar7 = SUB84(dVar6 * dVar6,0);
      dVar5 = dVar5 - dVar6 * dVar6;
    }
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),fVar7);
    }
    else {
      dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
    }
    if (cVar10 == '\0') {
      bVar9 = F32HI(dVar5) < F32HI(dVar6);
    }
    else {
      bVar9 = dVar5 < dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar5[3] + 4),SUB84(dVar5,0));
        dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        dVar5 = *(double *)(unsigned)(ar5[3] + 4);
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar8 = F32HI(dVar6);
        fVar7 = F32LO(dVar6) * fVar8;
        dVar6 = CONCAT44D(fVar8,fVar7);
        dVar5 = CONCAT44D(F32HI(dVar5) - fVar7,SUB84(dVar5,0));
      }
      else {
        dVar6 = dVar6 * dVar6;
        dVar5 = dVar5 - dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),(*(undefined4 *)(fr0_ - 0x1c)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) - F32HI(dVar5);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 8),fVar7);
      }
      else {
        dVar6 = *(double *)(unsigned)(ar4 + 8);
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) - F32LO(dVar6),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 8) = (int)(D2U(dVar6) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 8) = dVar6;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),SUB84(dVar5,0));
      dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      bVar9 = F32HI(dVar5) < F32LO(dVar6) * F32HI(dVar6)
      ;
    }
    else {
      bVar9 = dVar5 < dVar6 * dVar6;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) * F32HI(dVar6);
      }
      else {
        fVar7 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),fVar7);
      }
      else {
        dVar6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) - F32HI(dVar6);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0xc),fVar7);
      }
      else {
        dVar6 = *(double *)(unsigned)(ar4 + 0xc);
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar7 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar11 == '\0') {
        *(float *)(unsigned)(ar4 + 0xc) = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0xc) = in_xd0;
      }
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar5[3] + 8),SUB84(dVar5,0));
      dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)(unsigned)(ar5[3] + 8);
      dVar6 = 6.96545118384351e-312;
    }
    if (cVar10 == '\0') {
      fVar7 = F32LO(dVar6) * F32HI(dVar6);
      dVar5 = CONCAT44D(F32HI(dVar5) - fVar7,SUB84(dVar5,0));
    }
    else {
      fVar7 = SUB84(dVar6 * dVar6,0);
      dVar5 = dVar5 - dVar6 * dVar6;
    }
    if (cVar11 == '\0') {
      in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),fVar7);
    }
    else {
      in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
    }
    if (cVar10 == '\0') {
      bVar9 = F32HI(dVar5) < F32HI(in_dr0);
    }
    else {
      bVar9 = dVar5 < in_dr0;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar5[3] + 8),SUB84(dVar5,0));
        dVar6 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        dVar5 = *(double *)(unsigned)(ar5[3] + 8);
        dVar6 = 6.96545118384351e-312;
      }
      if (cVar10 == '\0') {
        fVar8 = F32HI(dVar6);
        fVar7 = F32LO(dVar6) * fVar8;
        dVar6 = CONCAT44D(fVar8,fVar7);
        dVar5 = CONCAT44D(F32HI(dVar5) - fVar7,SUB84(dVar5,0));
      }
      else {
        dVar6 = dVar6 * dVar6;
        dVar5 = dVar5 - dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),(*(undefined4 *)(fr0_ - 0x18)));
      }
      if (cVar10 == '\0') {
        fVar7 = F32LO(dVar6) - F32HI(dVar5);
      }
      else {
        fVar7 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0xc),fVar7);
      }
      else {
        in_dr0 = *(double *)(unsigned)(ar4 + 0xc);
      }
      if (cVar10 == '\0') {
        in_dr0 = CONCAT44D(F32HI(in_dr0) - F32LO(in_dr0),
                                  SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 - in_dr0;
      }
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0xc) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0xc) = in_dr0;
      }
    }
    iVar4 = -1;
    (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x314);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x128))); *(unsigned *)((((unsigned long)(fr0_ - 356)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 356)) - 8); Vec3_add(*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 4,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 356)), Vec3_assign(ar4 + 0x224,((undefined1 *)(fr0_ - 0x128)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), Vec3_dtor(((undefined1 *)(fr0_ - 0x128)),0xffffffff,ar6,ar7));
      iVar4 = *(int *)(unsigned)(ar5[1] + 4);
      (vsp = ((unsigned long)(fr0_ - 356)), vec3_copy_8c023d8c(ar4 + 0x234,iVar4,ar6,ar7));
      break;
    case 2:
      (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c023aa0(ar4 + 0x224,ar4 + 0x304,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), FUN_8c023bf4(ar4 + 0x304,((undefined1 *)(unsigned)0x8c13ba94),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 356)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],ar4 + 0x224,ar6,ar7));
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x228));
      }
      iVar4 = ar4 + 0x228;
      if (cVar10 != '\0' || SUB84(in_dr0,0) <= F32HI(in_dr0)) {
        (vsp = ((unsigned long)(fr0_ - 356)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],ar4 + 0x224,ar6,ar7));
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x228) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x228) = in_dr0;
        }
        *(int *)(unsigned)(ar4 + 0x314) = *(int *)(unsigned)(ar4 + 0x314) + 1;
        iVar4 = ar4;
      }
      break;
    case 3:
      *(undefined4 *)(unsigned)(ar4 + 0x220) = 1;
      *(int *)(unsigned)(ar4 + 0x314) = *(int *)(unsigned)(ar4 + 0x314) + 1;
      iVar4 = ar4;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 356)), vec3_clear(ar4 + 0x13c,iVar4,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 0;
  return 0x1d4;
}

__asm__(".globl _Class_12b2ac_m1_0aff3c\n.set _Class_12b2ac_m1_0aff3c, _Class_12b2ac_m1_0aff3c_def\n");
