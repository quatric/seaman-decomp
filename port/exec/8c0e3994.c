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
undefined4 FUN_8c0e3994_def(int ar4,code *ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0e3994";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 112; for (int i_ = 0; i_ < 112; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  int iVar3;
  int *a4;
  int iVar4;
  code *ar5_00;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar9;
  double dVar8;
  double in_dr2 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 112)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0da588(ar4 + 0xa4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x3c)),ar5_00,ar6,ar7));
  if ((*(undefined1 *)(unsigned)0x8c438280) == '\0') {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_xyz(0x8c438284,ar5_00,ar6,ar7));
    ar6 = 0x8c438274;
    ar5_00 = ((void *)0x8c022cb0);
    (vsp = ((unsigned long)(fr0_ - 112)), global_list_push(uVar2,((void *)0x8c022cb0),0x8c438274,ar7));
    (*(undefined1 *)(unsigned)0x8c438280) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4382a0) == '\0') {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_zero(0x8c4382a4,ar5_00,ar6,ar7));
    ar6 = 0x8c438294;
    ar5_00 = ((void *)0x8c022cb0);
    (vsp = ((unsigned long)(fr0_ - 112)), global_list_push(uVar2,((void *)0x8c022cb0),0x8c438294,ar7));
    (*(undefined1 *)(unsigned)0x8c4382a0) = '\x01';
  }
  iVar5 = 0;
  do {
    if (iVar1 <= iVar5) {
      (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
      return uVar2;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 112)), get_field_24_05c284(ar4_00,ar5_00,ar6,ar7));
    if (iVar3 != 0xe) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c02f670(ar4_00,ar5_00,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 112)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x4c)),ar6,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0e3e98(ar4_00,uVar2,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 112)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x5c)),ar6,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x13c))))(ar4_00,uVar2,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 112)), Vec3_assign(0x8c4382a4,((undefined1 *)(fr0_ - 0x6c)),ar6,ar7));
      ar5_00 = (code *)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6,ar7));
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)(unsigned)ar5,(*(undefined4 *)(fr0_ - 0x38)));
      }
      else {
        uVar7 = *(undefined8 *)(unsigned)ar5;
      }
      if (cVar11 != '\0' || F32HI(uVar7) <= (float)uVar7) {
        if (cVar12 == '\0') {
          uVar7 = CONCAT44(*(undefined4 *)(unsigned)ar5,(*(undefined4 *)(fr0_ - 0x28)));
        }
        else {
          uVar7 = *(undefined8 *)(unsigned)ar5;
        }
        if (cVar11 != '\0' || (float)uVar7 <= F32HI(uVar7)) {
          iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0xb4))))(ar4_00,ar5_00,ar6,ar7));
          fVar6 = F32HI(uVar7);
          if (iVar4 == 1) {
            iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x16c))))(ar4_00,ar5_00,ar6,ar7));
            if (iVar4 != 0) {
              a4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x16c))))(ar4_00,ar5_00,ar6,ar7));
              iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x28))))(a4,ar5_00,ar6,ar7));
              if (iVar4 == 1) {
                (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
                ar6 = 4;
                ar5_00 = (code *)((undefined1 *)(fr0_ - 0x2c));
                ar7 = ar4_00;
                (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0d4c74(ar5,ar5_00,4,ar4_00));
                goto LAB_8c0e3d7e;
              }
            }
            if (iVar3 == 5) {
              (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
              ar6 = 3;
              ar5_00 = (code *)((undefined1 *)(fr0_ - 0x2c));
              ar7 = ar4_00;
              (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0d4c74(ar5,ar5_00,3,ar4_00));
            }
            else {
              (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
              if (cVar12 == '\0') {
                fVar9 = 0.8;
              }
              else {
                fVar6 = 0.8;
                fVar9 = -1.5061567e-31;
              }
              if (cVar11 == '\0' && fVar9 < fVar6) {
                ar5_00 = (code *)0x8c4382a4;
                (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c022dac(0x8c438284,0x8c4382a4,ar6,ar7));
                if (cVar12 == '\0') {
                  fVar6 = fVar9;
                  fVar9 = 10.0;
                }
                else {
                  fVar6 = 10.0;
                  fVar9 = 2.18603e-43;
                }
                if (cVar11 == '\0' && fVar6 < fVar9) {
                  (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
                  ar6 = 3;
                  ar5_00 = (code *)((undefined1 *)(fr0_ - 0x2c));
                  ar7 = ar4_00;
                  (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0d4c74(ar5,ar5_00,3,ar4_00));
                  goto LAB_8c0e3d7e;
                }
              }
              (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
              if (cVar12 == '\0') {
                fVar6 = 0.8;
              }
              else {
                fVar9 = 0.8;
                fVar6 = -1.5061567e-31;
              }
              if (cVar11 == '\0' && fVar9 < fVar6) {
                ar5_00 = (code *)0x8c4382a4;
                (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c022dac(0x8c438284,0x8c4382a4,ar6,ar7));
                if (cVar12 == '\0') {
                  fVar9 = 10.0;
                }
                else {
                  fVar6 = 10.0;
                  fVar9 = 2.18603e-43;
                }
                if (cVar11 == '\0' && fVar6 < fVar9) {
                  (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
                  ar6 = 2;
                  ar5_00 = (code *)((undefined1 *)(fr0_ - 0x2c));
                  ar7 = ar4_00;
                  (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0d4c74(ar5,ar5_00,2,ar4_00));
                  goto LAB_8c0e3d7e;
                }
              }
              (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
              ar6 = 0;
              ar5_00 = (code *)((undefined1 *)(fr0_ - 0x2c));
              ar7 = ar4_00;
              (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0d4c74(ar5,ar5_00,0,ar4_00));
            }
          }
        }
      }
LAB_8c0e3d7e:
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)(unsigned)ar5,(*(undefined4 *)(fr0_ - 0x38)));
      }
      else {
        uVar7 = *(undefined8 *)(unsigned)ar5;
      }
      if (cVar11 != '\0' || (float)uVar7 <= F32HI(uVar7)) {
        if (cVar12 == '\0') {
          uVar7 = CONCAT44(*(undefined4 *)(unsigned)ar5,(*(undefined4 *)(fr0_ - 0x28)));
        }
        else {
          uVar7 = *(undefined8 *)(unsigned)ar5;
        }
        if ((cVar11 != '\0' || F32HI(uVar7) <= (float)uVar7) &&
           (iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0xb4))))(ar4_00,ar5_00,ar6,ar7)), iVar4 == 1))
        {
          if (iVar3 == 5) {
            (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
            ar6 = 1;
            ar5_00 = (code *)((undefined1 *)(fr0_ - 0x3c));
            ar7 = ar4_00;
            (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0d4c74(ar5,ar5_00,1,ar4_00));
          }
          goto LAB_8c0e3e34;
        }
      }
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)(unsigned)ar5,(*(undefined4 *)(fr0_ - 0x28)));
      }
      else {
        uVar7 = *(undefined8 *)(unsigned)ar5;
      }
      if (cVar11 != '\0' || (float)uVar7 <= F32HI(uVar7)) {
        if (cVar12 == '\0') {
          in_dr2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),SUB84(in_dr2,0));
          dVar8 = CONCAT44D(0x41200000,*(undefined4 *)(unsigned)ar5);
        }
        else {
          in_dr2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
          dVar8 = 5.94698645594833e-312;
        }
        if (cVar11 == '\0') {
          bVar10 = F32HI(in_dr2) <
                   F32LO(dVar8) - F32HI(dVar8);
        }
        else {
          bVar10 = in_dr2 < dVar8 - dVar8;
        }
        if (!bVar10) {
          (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
          ar6 = 0;
          ar5_00 = (code *)((undefined1 *)(fr0_ - 0x2c));
          ar7 = ar4_00;
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0d4c74(ar5,ar5_00,0,ar4_00));
        }
      }
    }
LAB_8c0e3e34:
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 112)), list_node_next(ar4_00,ar5_00,ar6,ar7));
    iVar5 = iVar5 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c0e3994\n.set _FUN_8c0e3994, _FUN_8c0e3994_def\n");
