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
undefined4 Class_12a03c_m1_03c43c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a03c_m1_03c43c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 180; for (int i_ = 0; i_ < 180; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  uint *ar5_01;
  float fVar3;
  double in_dr0 = 0;
  double dVar4;
  float fVar5;
  double in_dr14 = 0;
  undefined8 in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_ctor_zero(&(*(uint *)(fr0_ - 0x28)),ar5,ar6,ar7));
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 180)), Class_129cbc_m1_031598(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x244) = ar5[6];
  if ((ar5[4] == 0) || (ar5[4] == 2)) {
    if (cVar8 == '\0') {
      in_dr0 = CONCAT44D(0x43fa0000,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = 1.3411048382276983e-08;
    }
    (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c03207c(ar4,ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0324ac(ar4,ar5_00,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 180)), pure_virtual_stub(ar4,ar5,ar6,ar7));
  if ((*(int *)(unsigned)(ar4 + 0x178) == 1) && (iVar1 != 1)) {
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 180)); FUN_8c02f2c0(*ar5,iVar1,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c031ab4(ar4,*(undefined4 *)(unsigned)(ar5[1] + 4),ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x90,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x48)),ar4 + 0x6c,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x58)),ar4 + 0x2a8,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(ar4 + 4,((undefined1 *)(fr0_ - 0x68)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
  ar5_01 = (uint *)(unsigned)0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), vec3_clear(ar4 + 0x2a8,ar5_01,ar6,ar7));
  if ((((ar5[4] == 0) || (ar5[4] == 2)) && (*(int *)(unsigned)(ar4 + 0x124) != 0x18)) &&
     ((*(int *)(unsigned)(ar4 + 0x124) != 2 && (*(int *)(unsigned)(ar4 + 0x334) != 1)))) {
    (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],ar5_01,ar6,ar7));
    if (cVar8 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20))
      ;
      dVar4 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      dVar4 = 2.9975963366641684e+19;
      in_xd14 = in_dr0;
    }
    if (cVar7 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) -
                                 F32LO(dVar4) * F32HI(dVar4));
    }
    else {
      in_dr14 = in_dr14 - dVar4 * dVar4;
    }
    if (cVar8 == '\0') {
      in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 8),*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
      in_dr0 = *(double *)(unsigned)(ar4 + 8);
    }
    if (cVar7 == '\0') {
      fVar5 = F32HI(in_dr0);
      fVar3 = F32LO(in_dr0) + fVar5;
      in_dr0 = CONCAT44D(fVar5,fVar3);
      bVar6 = SUB84(in_dr14,0) < fVar3;
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
      fVar3 = F32LO(in_dr0);
      bVar6 = in_dr14 < in_dr0;
    }
    if (bVar6) {
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4),fVar3);
      }
      else {
        in_dr0 = *(double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
      }
      if (cVar7 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) - F32HI(in_dr0));
      }
      else {
        in_dr14 = in_dr14 - in_dr0;
      }
      if (cVar8 == '\0') {
        *(int *)(unsigned)(ar4 + 8) = SUB84(in_dr14,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 8) = in_xd14;
      }
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 180)), get_field_24_026024(ar5[6],ar5_01,ar6,ar7));
  if (iVar1 == 0) {
    if (cVar8 == '\0') {
      in_dr14 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 8),SUB84(in_dr14,0));
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0xc),SUB84(in_dr0,0));
    }
    else {
      in_dr14 = *(double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 8);
      dVar4 = *(double *)(unsigned)(ar4 + 0xc);
    }
    if (cVar7 == '\0') {
      in_dr14 = CONCAT44D(F32HI(in_dr14) +
                                 F32HI(dVar4),SUB84(in_dr14,0));
    }
    else {
      in_dr14 = in_dr14 + dVar4;
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(0x3f99999a,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      dVar4 = 1.2986509618072377e+23;
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar4) * F32HI(dVar4);
      in_dr14 = CONCAT44D(F32HI(in_dr14) + fVar3,SUB84(in_dr14,0));
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
      in_dr14 = in_dr14 + dVar4 * dVar4;
    }
    if (cVar8 == '\0') {
      in_dr0 = CONCAT44D(0x44bb8000,fVar3);
    }
    else {
      in_dr0 = 6.28680480336352e-312;
    }
    fVar3 = F32HI(in_dr14);
    if (cVar7 == '\0') {
      bVar6 = F32HI(in_dr0) < fVar3;
    }
    else {
      bVar6 = in_dr0 < in_dr14;
    }
    if (bVar6) {
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44D(0x44bb8000,*(undefined4 *)(unsigned)(ar4 + 0xc));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0xc);
        in_dr0 = 6.28680480336352e-312;
      }
      fVar5 = F32HI(in_dr0);
      if (cVar7 == '\0') {
        fVar3 = fVar3 - fVar5;
        in_dr14 = CONCAT44D(fVar3,SUB84(in_dr14,0));
        in_dr0 = CONCAT44D(fVar5,F32LO(in_dr0) - fVar3);
      }
      else {
        in_dr14 = in_dr14 - in_dr0;
        in_dr0 = in_dr0 - in_dr14;
      }
      if (cVar8 == '\0') {
        *(int *)(unsigned)(ar4 + 0xc) = SUB84(in_dr0,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0xc) = in_xd0;
      }
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x128) < 3) {
    if (((*(int *)(unsigned)(ar4 + 0x124) != 0x2e) && (*(int *)(unsigned)(ar4 + 0x124) != 0x18)) &&
       (*(int *)(unsigned)(ar4 + 0x124) != 2)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); Vec3_add(*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 4,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(&(*(uint *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x78)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6,ar7));
      fVar3 = (*(float *)(fr0_ - 0x20));
      if (cVar8 != '\0') {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
        fVar3 = 0.0;
      }
      if (cVar7 == '\0' && fVar3 < 0.0) {
        if (cVar8 == '\0') {
          fVar3 = 0.0;
        }
        else {
          in_xd0 = 0;
        }
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 8),fVar3);
        }
        else {
          dVar4 = *(double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 8);
        }
        if (cVar7 == '\0') {
          fVar3 = F32LO(dVar4) - F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 - dVar4,0);
        }
        if (cVar8 == '\0') {
          *(float *)(unsigned)(ar4 + 0xc) = fVar3;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0xc) = in_xd0;
        }
      }
      if (cVar8 == '\0') {
        dVar4 = (double)(ulonglong)(*(uint *)(fr0_ - 0x28));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),(*(uint *)(fr0_ - 0x28)));
        dVar4 = 0.0;
      }
      if (cVar7 == '\0' && SUB84(dVar4,0) < 0.0) {
        if (cVar8 == '\0') {
          dVar4 = 0.0;
        }
        else {
          in_xd0 = 0;
        }
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)ar5[1]),SUB84(dVar4,0));
        }
        else {
          dVar4 = *((double *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
        }
        if (cVar7 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) - fVar3);
        }
        else {
          dVar4 = dVar4 - dVar4;
        }
        if (cVar8 == '\0') {
          *(int *)(unsigned)(ar4 + 4) = SUB84(dVar4,0);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 4) = in_xd0;
        }
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); Vec3_add(*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 4,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(&(*(uint *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x88)),ar6,ar7));
      ar5_01 = (uint *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c03c314(ar4,ar5_01,ar6,ar7));
      if ((*(int *)(unsigned)(ar4 + 0x124) != 0x18) && (*(int *)(unsigned)(ar4 + 0x124) != 2)) {
        ar5_01 = &(*(uint *)(fr0_ - 0x28));
        (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],ar5_01,ar6,ar7));
        (*(int *)(fr0_ - 0xa8)) = SUB84(dVar4,0);
        (*(int *)(fr0_ - 0xa4)) = (int)(D2U(dVar4) >> 0x20);
        if (cVar8 == '\0') {
          in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x48));
          dVar4 = CONCAT44D(0x3e99999a,(*(int *)(fr0_ - 0xa8)));
          (*(int *)(fr0_ - 0xa8)) = (*(int *)(fr0_ - 0xa4));
          (*(int *)(fr0_ - 0xa4)) = iVar1;
        }
        else {
          in_xd14 = *(double *)(unsigned)(ar4 + 0x48);
          dVar4 = 2.97598305018595e-312;
        }
        if (cVar7 == '\0') {
          in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                     F32LO(in_dr14) * F32HI(dVar4));
        }
        else {
          in_dr14 = in_dr14 * dVar4;
        }
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D((*(int *)(fr0_ - 0xa8)),SUB84(dVar4,0));
        }
        else {
          dVar4 = CONCAT44D((*(int *)(fr0_ - 0xa4)),(*(int *)(fr0_ - 0xa8)));
        }
        if (cVar7 == '\0') {
          in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                     F32LO(in_dr14) + F32HI(dVar4));
        }
        else {
          in_dr14 = in_dr14 + dVar4;
        }
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),SUB84(dVar4,0));
        }
        else {
          dVar4 = CONCAT44D((*(float *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
        }
        if (cVar7 == '\0') {
          bVar6 = F32HI(dVar4) < SUB84(in_dr14,0);
        }
        else {
          bVar6 = dVar4 < in_dr14;
        }
        if (bVar6) {
          if (cVar8 == '\0') {
            dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4),SUB84(dVar4,0));
          }
          else {
            dVar4 = *(double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
          }
          if (cVar7 == '\0') {
            fVar3 = F32LO(in_dr14) - F32HI(dVar4);
          }
          else {
            fVar3 = SUB84(in_dr14 - dVar4,0);
          }
          if (cVar8 == '\0') {
            *(float *)(unsigned)(ar4 + 8) = fVar3;
          }
          else {
            *(double *)(unsigned)(ar4 + 8) = in_xd14;
          }
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c031748(ar4,ar5_01,ar6,ar7));
        }
      }
    }
  }
  else if ((ar5[4] == 0) || (ar5[4] == 2)) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); Vec3_add(*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 4,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(&(*(uint *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x98)),ar6,ar7));
    ar5_01 = (uint *)(unsigned)0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ar6,ar7));
    if ((*(int *)(unsigned)(ar4 + 0x124) != 2) && (*(int *)(unsigned)(ar4 + 0x334) != 1)) {
      (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c03c314(ar4,ar5_01,ar6,ar7));
      ar5_01 = &(*(uint *)(fr0_ - 0x28));
      (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],ar5_01,ar6,ar7));
      (*(undefined4 *)(fr0_ - 0xac)) = SUB84(in_dr0,0);
      uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar8 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x48));
        dVar4 = CONCAT44D(0x3e99999a,(*(undefined4 *)(fr0_ - 0xac)));
        (*(undefined4 *)(fr0_ - 0xac)) = uVar2;
      }
      else {
        in_xd14 = *(double *)(unsigned)(ar4 + 0x48);
        dVar4 = 2.97598305018595e-312;
        (*(int *)(fr0_ - 0xa8)) = uVar2;
      }
      if (cVar7 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) * F32HI(dVar4));
      }
      else {
        in_dr14 = in_dr14 * dVar4;
      }
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0xac)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(int *)(fr0_ - 0xa8)),(*(undefined4 *)(fr0_ - 0xac)));
      }
      if (cVar7 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) + F32HI(dVar4));
      }
      else {
        in_dr14 = in_dr14 + dVar4;
      }
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
      }
      if (cVar7 == '\0') {
        bVar6 = F32HI(dVar4) < SUB84(in_dr14,0);
      }
      else {
        bVar6 = dVar4 < in_dr14;
      }
      if (bVar6) {
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4),SUB84(dVar4,0));
        }
        else {
          dVar4 = *(double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
        }
        if (cVar7 == '\0') {
          fVar3 = F32LO(in_dr14) - F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(in_dr14 - dVar4,0);
        }
        if (cVar8 == '\0') {
          *(float *)(unsigned)(ar4 + 8) = fVar3;
        }
        else {
          *(double *)(unsigned)(ar4 + 8) = in_xd14;
        }
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c031748(ar4,ar5_01,ar6,ar7));
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 180)), vec3_clear(ar4 + 0x2a8,ar5_01,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x21c) = 0;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(&(*(uint *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _Class_12a03c_m1_03c43c\n.set _Class_12a03c_m1_03c43c, _Class_12a03c_m1_03c43c_def\n");
