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
undefined4 Class_12a25c_m1_06f530_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a25c_m1_06f530";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 164; for (int i_ = 0; i_ < 164; i_++) z_[i_] = 0; }
  int ar5_00;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_fr1 = 0;
  float fVar3;
  code *pcVar6;
  double dVar4;
  double dVar5;
  float fVar7;
  double in_dr14 = 0;
  double in_xd0 = 0;
  double dVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  puVar1 = ar5;
  if ((((*(int *)(unsigned)(ar4 + 0x124) == 0x10) || (*(int *)(unsigned)(ar4 + 0x124) == 0x11)) ||
      (*(int *)(unsigned)(ar4 + 0x124) == 0x12)) ||
     ((*(int *)(unsigned)(ar4 + 0x124) == 0x18 || (*(int *)(unsigned)(ar4 + 0x124) == 6)))) {
    *(undefined1 *)(unsigned)(ar4 + 0x210) = *(undefined1 *)(unsigned)(ar5 + 10);
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 164)), Class_129cbc_m1_031598(ar4,ar5,ar6,ar7));
  }
  *(undefined4 *)(unsigned)(ar4 + 0x2a4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
  if (ar5[4] != 1) {
    if (cVar11 != '\0') {
      in_fr1 = 0x43800000;
    }
    (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c03207c(ar4,puVar1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c0324ac(ar4,puVar1,ar6,ar7));
  }
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 164)), pure_virtual_stub(ar4,ar5,ar6,ar7));
  if ((*(int *)(unsigned)(ar4 + 0x178) == 1) && (ar5_00 != 1)) {
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 164)); FUN_8c02f2c0(*ar5,ar5_00,ar6,ar7); });
  if ((((*(int *)(unsigned)(ar4 + 0x124) == 0x10) || (*(int *)(unsigned)(ar4 + 0x124) == 0x11)) ||
      (*(int *)(unsigned)(ar4 + 0x124) == 0x12)) || (*(int *)(unsigned)(ar4 + 0x124) == 0x18)) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 164)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 164)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 164)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 164)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x74)),ar4 + 0x90,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_assign(ar4 + 4,((undefined1 *)(fr0_ - 0x84)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6,ar7));
    if (cVar11 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4));
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 8),in_fr1);
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 8);
    }
    if (cVar10 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 F32LO(in_dr14) + F32HI(dVar5));
    }
    else {
      in_dr14 = in_dr14 + dVar5;
    }
    (vsp = ((unsigned long)(fr0_ - 164)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],uVar2,ar6,ar7));
    fVar3 = F32HI(dVar5);
    if (cVar11 == '\0') {
      fVar7 = 160.0;
      dVar5 = in_xd0;
    }
    else {
      fVar3 = 160.0;
      fVar7 = 9.80909e-43;
    }
    if ((cVar10 == '\0' && fVar7 < fVar3) && (ar5[4] != 3)) {
      (vsp = ((unsigned long)(fr0_ - 164)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],uVar2,ar6,ar7));
      dVar4 = CONCAT44D(fVar7,fVar3);
      if (cVar10 == '\0') {
        bVar9 = SUB84(in_dr14,0) < fVar7;
      }
      else {
        bVar9 = in_dr14 < dVar4;
      }
      if (!bVar9) {
        (vsp = ((unsigned long)(fr0_ - 164)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],uVar2,ar6,ar7));
        dVar8 = dVar4;
        if (cVar11 == '\0') {
          dVar4 = (double)(D2U(dVar4) >> 0x20);
          dVar8 = dVar5;
        }
        if (cVar11 == '\0') {
          dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4),SUB84(dVar4,0));
        }
        else {
          dVar5 = *(double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
        }
        if (cVar10 == '\0') {
          fVar3 = F32LO(dVar5) - F32HI(dVar5);
        }
        else {
          fVar3 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar11 == '\0') {
          *(float *)(unsigned)(ar4 + 8) = fVar3;
        }
        else {
          *(double *)(unsigned)(ar4 + 8) = dVar8;
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 164)), vec3_clear(ar4 + 700,uVar2,ar6,ar7));
  }
  else {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x24))); *(unsigned *)((((unsigned long)(fr0_ - 164)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 164)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 164)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 164)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x24)),ar4 + 0x90,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 164)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 164)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x6c,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 164)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 164)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x44)),ar4 + 0x13c,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 164)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 164)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x54)),ar4 + 700,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_assign(ar4 + 4,((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 164)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
    if (cVar11 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4));
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 8),in_fr1);
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 8);
    }
    if (cVar10 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 F32LO(in_dr14) + F32HI(dVar5));
    }
    else {
      in_dr14 = in_dr14 + dVar5;
    }
    (vsp = ((unsigned long)(fr0_ - 164)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],uVar2,ar6,ar7));
    fVar3 = F32HI(dVar5);
    if (cVar11 == '\0') {
      pcVar6 = (code *)0x43200000;
      dVar5 = in_xd0;
    }
    else {
      fVar3 = 160.0;
      pcVar6 = ((void *)0x8c014e20);
    }
    if ((cVar10 == '\0' && (float)(uint)pcVar6 < fVar3) && (ar5[4] != 3)) {
      (vsp = ((unsigned long)(fr0_ - 164)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],uVar2,ar6,ar7));
      dVar4 = CONCAT44D(pcVar6,fVar3);
      if (cVar10 == '\0') {
        bVar9 = SUB84(in_dr14,0) < (float)(uint)pcVar6;
      }
      else {
        bVar9 = in_dr14 < dVar4;
      }
      if (!bVar9) {
        (vsp = ((unsigned long)(fr0_ - 164)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],uVar2,ar6,ar7));
        dVar8 = dVar4;
        if (cVar11 == '\0') {
          dVar4 = (double)(D2U(dVar4) >> 0x20);
          dVar8 = dVar5;
        }
        if (cVar11 == '\0') {
          dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4),SUB84(dVar4,0));
        }
        else {
          dVar5 = *(double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
        }
        if (cVar10 == '\0') {
          fVar3 = F32LO(dVar5) - F32HI(dVar5);
        }
        else {
          fVar3 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar11 == '\0') {
          *(float *)(unsigned)(ar4 + 8) = fVar3;
        }
        else {
          *(double *)(unsigned)(ar4 + 8) = dVar8;
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 164)), vec3_clear(ar4 + 0x13c,uVar2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 164)), vec3_clear(ar4 + 700,uVar2,ar6,ar7));
  }
  if (*(int *)(unsigned)(ar4 + 0x124) != 2) {
    (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c031ab4(ar4,*(undefined4 *)(unsigned)(ar5[1] + 4),ar6,ar7));
  }
  *(undefined4 *)(unsigned)(ar4 + 0x21c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 0;
  return 0x1d4;
}

__asm__(".globl _Class_12a25c_m1_06f530\n.set _Class_12a25c_m1_06f530, _Class_12a25c_m1_06f530_def\n");
