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
undefined4 FUN_8c07a68c_def(double *ar4,double *ar5,double *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c07a68c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 144; for (int i_ = 0; i_ < 144; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  float fVar3; int iSw;
  double *pdVar4;
  code *ar5_00;
  double *ar6_00;
  undefined4 ar7_00;
  double in_dr0 = 0;
  undefined4 *puVar7;
  double dVar5;
  float fVar8;
  double dVar6;
  double in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  pdVar4 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 144)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x24)),ar5,ar6,ar7));
  iSw = *(int *)(unsigned)(ar4 + 0xd);
  if ((5 < iSw) || (iSw < 0)) goto switchD_8c07a6ce_default;
                    
  switch(iSw) {
  case 0:
    *(float *)(unsigned)(ar4 + 0x2f) = 0.0;
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c030f2c((float *)(unsigned)((int)ar4 + 0x1fc),pdVar4,ar6_00,ar7));
    pdVar4 = ar4 + 0x48;
    dVar6 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (cVar10 == '\0') {
      *(float *)(unsigned)pdVar4 = 0.0;
    }
    else {
      *pdVar4 = dVar6;
    }
    (vsp = ((unsigned long)(fr0_ - 144)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x184))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),pdVar4,0x240,ar7));
    fVar3 = F32HI(dVar6);
    if (cVar10 == '\0') {
      puVar7 = (undefined4 *)(unsigned)0x44610000;
      dVar6 = in_xd0;
    }
    else {
      fVar3 = 900.0;
      puVar7 = ((undefined4 *)(unsigned)0x8c125be0);
    }
    if (cVar9 == '\0' && fVar3 < (float)(uint)puVar7) {
      if (cVar10 == '\0') {
        fVar3 = *(float *)(unsigned)ar5;
      }
      else {
        dVar6 = *ar5;
        fVar3 = 0.0;
      }
      if (cVar9 != '\0' || 0.0 <= fVar3) {
        if (cVar10 == '\0') {
          dVar5 = 1.2986507827891524e+23;
        }
        else {
          dVar6 = 0.0;
          dVar5 = 3.051758593897169e-05;
        }
        if (cVar9 == '\0') {
          fVar3 = F32LO(dVar5) + F32HI(dVar5);
        }
        else {
          fVar3 = SUB84(dVar5 + dVar5,0);
        }
        if (cVar10 == '\0') {
          dVar5 = CONCAT44D(0x3f000000,fVar3);
        }
        else {
          dVar5 = -0.007812501833541319;
        }
        if (cVar9 == '\0') {
          fVar3 = F32LO(dVar5) * F32HI(dVar5);
        }
        else {
          fVar3 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar10 == '\0') {
          dVar5 = CONCAT44D(*(float *)(unsigned)(ar5 + 1),fVar3);
        }
        else {
          dVar5 = ar5[1];
        }
        if (cVar9 == '\0') {
          fVar3 = F32LO(dVar5) - F32HI(dVar5);
        }
        else {
          fVar3 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar10 == '\0') {
          *(float *)(unsigned)((int)ar4 + 0x2c4) = fVar3;
        }
        else {
          *(double *)(unsigned)((int)ar4 + 0x2c4) = dVar6;
        }
      }
    }
    ar7_00 = 0;
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,8,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031b68(ar4,(int)*(float *)(unsigned)(ar4 + 0x25) * 0x18 + -0x73d7f14c,uVar2,ar7_00));
    pdVar4 = ar4 + 0x14;
    if (cVar10 == '\0') {
      in_dr0 = CONCAT44D(0x43160000,*(float *)(unsigned)pdVar4);
      in_xd0 = dVar6;
    }
    else {
      in_xd0 = *pdVar4;
      in_dr0 = -8.625516875868561e-251;
    }
    if (cVar9 == '\0') {
      fVar3 = F32HI(in_dr0);
      in_dr0 = CONCAT44D(fVar3,F32LO(in_dr0) * fVar3);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar4 + 0x14) = SUB84(in_dr0,0);
    }
    else {
      ar4[0x14] = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c03c314(ar4,pdVar4,0xa0,ar7_00));
    ar6_00 = ar4 + 0xd;
    *(int *)(unsigned)(ar4 + 0xd) = (int)*(float *)(unsigned)ar6_00 + 1;
  case 1:
    ar7 = ((void *)0x8c033b98);
    (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,pdVar4,ar6_00,((void *)0x8c033b98)));
    ar6_00 = (double *)(unsigned)((int)ar4 + 100);
    fVar3 = *(float *)(unsigned)ar6_00;
    if (fVar3 == 0.0) {
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_normalize((float *)(unsigned)((int)ar4 + 4),0,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign((float *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7));
      fVar3 = -NAN;
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
    }
    if (ar6 != (double *)(unsigned)0x3) {
      if (ar6 == (double *)(unsigned)0x1) {
        *(float *)(unsigned)(ar4 + 0xd) = 4.2039e-45;
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(ar4 + 0x46,(float *)(unsigned)((int)ar4 + 0x14),ar6_00,ar7));
switchD_8c07a6ce_caseD_3:
        in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (cVar10 == '\0') {
          *(float *)(unsigned)(ar4 + 5) = 0.0;
        }
        else {
          ar4[5] = in_dr0;
        }
        pdVar4 = ar4 + 0x46;
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(&(*(float *)(fr0_ - 0x24)),pdVar4,ar6_00,ar7));
        (*(float *)(fr0_ - 0x20)) = SUB84(in_dr0,0);
        if (cVar10 == '\0') {
          (*(float *)(fr0_ - 0x20)) = *(float *)(unsigned)(ar4 + 0x46);
        }
        else {
          in_xd0 = ar4[0x46];
        }
        if ((*(float *)(fr0_ - 0x20)) == 0.0) {
          if (cVar10 == '\0') {
            (*(float *)(fr0_ - 0x20)) = *(float *)(unsigned)(ar4 + 0x47);
          }
          else {
            in_xd0 = ar4[0x47];
          }
          if (((*(float *)(fr0_ - 0x20)) == 0.0) && ((*(float *)(fr0_ - 0x24)) = (*(float *)(fr0_ - 0x20)), cVar10 == '\0')) {
            (*(float *)(fr0_ - 0x24)) = 1.0;
          }
        }
        if (cVar10 == '\0') {
          (*(float *)(fr0_ - 0x20)) = 0.0;
        }
        else {
          (*(undefined4 *)(fr0_ - 0x1c)) = 0;
        }
        uVar2 = (vsp = ((unsigned long)(fr0_ - 144)), Vec3_length(&(*(float *)(fr0_ - 0x24)),pdVar4,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(&(*(float *)(fr0_ - 0x24)),uVar2,ar6_00,ar7));
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x3e4ccccd,*(float *)(unsigned)(ar4 + 0x48));
        }
        else {
          in_xd0 = ar4[0x48];
          dVar6 = 3.57011700451707e-312;
        }
        if (cVar9 == '\0') {
          fVar3 = F32LO(dVar6) + F32HI(dVar6);
        }
        else {
          fVar3 = SUB84(dVar6 + dVar6,0);
        }
        if (cVar10 == '\0') {
          *(float *)(unsigned)(ar4 + 0x48) = fVar3;
          fVar3 = *(float *)(unsigned)(ar4 + 0x48);
        }
        else {
          ar4[0x48] = in_xd0;
          in_xd0 = ar4[0x48];
        }
        if (cVar9 != '\0' || 1.0 <= fVar3) {
          if (cVar10 == '\0') {
            *(float *)(unsigned)(ar4 + 0x48) = 1.0;
          }
          else {
            ar4[0x48] = CONCAT44D(0x3f800000,fVar3);
          }
        }
        if (cVar10 == '\0') {
          fVar3 = *(float *)(unsigned)(ar4 + 0x48);
        }
        else {
          in_xd0 = ar4[0x48];
        }
        if (cVar9 == '\0') {
          dVar6 = CONCAT44D(1.0 - fVar3,fVar3);
        }
        else {
          dVar6 = CONCAT44D(0x3f800000,fVar3) - CONCAT44D(0x3f800000,fVar3);
        }
        uVar2 = (undefined4)(D2U(dVar6) >> 0x20);
        (*(undefined4 *)(fr0_ - 0x88)) = uVar2;
        if (cVar10 != '\0') {
          (*(undefined4 *)(fr0_ - 0x88)) = SUB84(dVar6,0);
          ((undefined4 *)(fr0_ - 0x84))[0] = uVar2;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); Vec3_scale(ar4 + 0x46,&(*(undefined4 *)(fr0_ - 0x88)),ar6_00,ar7); });
        if (cVar10 == '\0') {
          (*(float *)(fr0_ - 0x8c)) = *(float *)(unsigned)(ar4 + 0x48);
          dVar6 = CONCAT44D((*(float *)(fr0_ - 0x8c)),SUB84(dVar6,0));
        }
        else {
          dVar6 = ar4[0x48];
          (*(float *)(fr0_ - 0x8c)) = SUB84(dVar6,0);
          (*(undefined4 *)(fr0_ - 0x88)) = (undefined4)(D2U(dVar6) >> 0x20);
        }
        fVar3 = F32LO(dVar6);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); Vec3_scale(&(*(float *)(fr0_ - 0x24)),&(*(float *)(fr0_ - 0x8c)),ar6_00,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign((float *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
        if (cVar10 == '\0') {
          fVar3 = *(float *)(unsigned)(ar4 + 0x48);
        }
        else {
          in_xd0 = ar4[0x48];
        }
        if (fVar3 == 1.0) {
          ar7 = (code *)0x0;
          ar6_00 = (double *)(unsigned)0xffffffff;
          uVar2 = 0x13;
          (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0x13,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar2,ar6_00,ar7));
          dVar6 = (double)(ulonglong)(uint)fVar3;
          if (cVar10 == '\0') {
            *(float *)(unsigned)(ar4 + 0x48) = 0.0;
          }
          else {
            ar4[0x48] = dVar6;
          }
          *(float *)(unsigned)((int)ar4 + 100) = 1.4013e-45;
          *(float *)(unsigned)(ar4 + 0xd) = 0.0;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); FUN_8c0230f0((float *)(unsigned)((int)ar4 + 0x14),uVar2,ar6_00,ar7); });
          (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign((float *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7));
          uVar2 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 144)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)ar4 + 0x2c))))(ar4,uVar2,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031b68(ar4,(int)*(float *)(unsigned)(ar4 + 0x25) * 0x18 + -0x73d7f14c,ar6_00,ar7));
          pdVar4 = ar5;
          (vsp = ((unsigned long)(fr0_ - 144)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5,ar6_00,ar7));
          if (cVar10 == '\0') {
            dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),*(float *)(unsigned)((int)ar4 + 0x7c));
          }
          else {
            in_xd0 = *(double *)(unsigned)((int)ar4 + 0x7c);
          }
          if (cVar9 == '\0') {
            fVar3 = F32LO(dVar6) + F32HI(dVar6);
          }
          else {
            fVar3 = SUB84(dVar6 + dVar6,0);
          }
          if (cVar10 == '\0') {
            *(float *)(unsigned)((int)ar5 + 4) = fVar3;
          }
          else {
            *(double *)(unsigned)((int)ar5 + 4) = in_xd0;
          }
          (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c030f2c((float *)(unsigned)((int)ar4 + 0x1fc),pdVar4,ar6_00,ar7));
        }
      }
      else if (ar6 == (double *)(unsigned)0x2) {
        *(float *)(unsigned)(ar4 + 0x56) = 0.0;
        *(float *)(unsigned)((int)ar4 + 0x2b4) = 0.0;
        *(float *)(unsigned)(ar4 + 0xd) = 5.60519e-45;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 144)), Vec3_length_sq((float *)(unsigned)((int)ar4 + 4),fVar3,ar6_00,ar7));
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x3f4ccccd,(int)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          dVar6 = 6.2863545074132e-312;
          in_xd0 = in_dr0;
        }
        if (cVar9 == '\0') {
          fVar3 = F32HI(dVar6);
          in_dr0 = CONCAT44D(fVar3,F32LO(dVar6) * fVar3);
        }
        else {
          in_dr0 = dVar6 * dVar6;
        }
        if (cVar10 == '\0') {
          *(float *)(unsigned)(ar4 + 5) = SUB84(in_dr0,0);
        }
        else {
          ar4[5] = in_xd0;
        }
        (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031b68(ar4,(int)*(float *)(unsigned)(ar4 + 0x25) * 0x18 + -0x73d7f14c,ar6_00,ar7));
        *(float *)(unsigned)((int)ar4 + 0x44) = 1.4013e-45;
        *(float *)(unsigned)(ar4 + 8) = 7.00649e-45;
        *(int *)(unsigned)(ar4 + 0xd) = (int)*(float *)(unsigned)(ar4 + 0xd) + 1;
        pdVar4 = ar4;
switchD_8c07a6ce_caseD_2:
        (vsp = ((unsigned long)(fr0_ - 144)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x184))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),pdVar4,ar6_00,ar7));
        fVar3 = F32HI(in_dr0);
        if (cVar10 == '\0') {
          fVar8 = 900.0;
          in_dr0 = in_xd0;
        }
        else {
          fVar3 = 900.0;
          fVar8 = 9.64093e-43;
        }
        if (cVar9 != '\0' || fVar8 <= fVar3) {
          (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,pdVar4,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c032ab0(ar4,pdVar4,ar6_00,ar7));
          if (cVar10 == '\0') {
            fVar3 = *(float *)(unsigned)(ar4 + 5);
          }
          else {
            in_dr0 = ar4[5];
          }
          if (cVar9 == '\0') {
            fVar3 = fVar3 * fVar8;
          }
          else {
            fVar3 = SUB84(CONCAT44D(fVar8,fVar3) * CONCAT44D(fVar8,fVar3),0);
          }
          if (cVar10 == '\0') {
            *(float *)(unsigned)(ar4 + 5) = fVar3;
          }
          else {
            ar4[5] = in_dr0;
          }
          if (cVar10 == '\0') {
            dVar6 = CONCAT44D(*(float *)(unsigned)(ar4 + 5),
                                     *(undefined4 *)(unsigned)
                                      ((int)*(float *)(unsigned)(ar4 + 0x25) * 0x18 + -0x73d7f13c));
          }
          else {
            dVar6 = ar4[5];
          }
          if (cVar9 == '\0' && F32HI(dVar6) < SUB84(dVar6,0)) {
            *(float *)(unsigned)((int)ar4 + 100) = 0.0;
            *(float *)(unsigned)(ar4 + 0xd) = 0.0;
            (vsp = ((unsigned long)(fr0_ - 144)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)ar4 + 0x2c))))(ar4,pdVar4,ar6_00,ar7));
            iVar1 = (int)*(float *)(unsigned)(ar4 + 0x25) * 0x18 + -0x73d7f14c;
            (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031b68(ar4,iVar1,ar6_00,ar7));
            (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c030eb8((float *)(unsigned)((int)ar4 + 0x1fc),iVar1,ar6_00,ar7));
          }
        }
        else {
          *(float *)(unsigned)(ar4 + 0x56) = 0.0;
          *(float *)(unsigned)((int)ar4 + 0x2b4) = 0.0;
          *(float *)(unsigned)(ar4 + 0xd) = 5.60519e-45;
          *(float *)(unsigned)(ar4 + 0x43) = 2.38221e-44;
        }
      }
    }
    break;
  case 2:
    goto switchD_8c07a6ce_caseD_2;
  case 3:
    goto switchD_8c07a6ce_caseD_3;
  case 4:
    if (cVar10 == '\0') {
      dVar6 = CONCAT44D(0x3f666666,*(float *)(unsigned)(ar4 + 5));
    }
    else {
      in_xd0 = ar4[5];
      dVar6 = -0.00781250184518285;
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar6) * F32HI(dVar6);
    }
    else {
      fVar3 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar4 + 5) = fVar3;
    }
    else {
      ar4[5] = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 144)), Vec3_ctor_xyz(((undefined4 *)(fr0_ - 0x84)),pdVar4,ar6_00,ar7));
    ar6_00 = (double *)(unsigned)0x1;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c0811b4(ar4,((undefined4 *)(fr0_ - 0x84)),1,ar7));
    (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined4 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7));
    if (iVar1 == 0) {
      pdVar4 = ar4 + 5;
      if (cVar10 == '\0') {
        *(float *)(unsigned)pdVar4 = 0.0;
      }
      else {
        *pdVar4 = (double)(ulonglong)(uint)fVar3;
      }
      *(int *)(unsigned)(ar4 + 0xd) = (int)*(float *)(unsigned)(ar4 + 0xd) + 1;
      *(float *)(unsigned)((int)ar4 + 0x2b4) = 0.0;
      *(float *)(unsigned)((int)ar4 + 100) = 0.0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), rand_range(ar4,0,100,pdVar4));
      if (iVar1 < 0x1f) {
        if (*(float *)(unsigned)(ar4 + 0x25) == 8.40779e-45) {
          ar7 = (code *)0x0;
          ar6_00 = (double *)(unsigned)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0x26,0xffffffff,0));
        }
        else {
          ar7 = (code *)0x0;
          ar6_00 = (double *)(unsigned)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0x30,0xffffffff,0));
        }
      }
      else {
        ar7 = (code *)0x0;
        ar6_00 = (double *)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,0xb0,ar6_00,ar7));
    }
    break;
  case 5:
    ar5_00 = ((void *)0x8c032ab0);
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c032ab0(ar4,((void *)0x8c032ab0),ar6_00,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,ar5_00,ar6_00,ar7));
    if (iVar1 == 1) {
      *(float *)(unsigned)(ar4 + 0xd) = 0.0;
      (vsp = ((unsigned long)(fr0_ - 144)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*(float *)(unsigned)ar4 + 0x2c))))(ar4,1,ar6_00,ar7));
      iVar1 = (int)*(float *)(unsigned)(ar4 + 0x25) * 0x18 + -0x73d7f14c;
      (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031b68(ar4,iVar1,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c030eb8((float *)(unsigned)((int)ar4 + 0x1fc),iVar1,ar6_00,ar7));
      ar7 = (code *)0x0;
      ar6_00 = (double *)(unsigned)0xffffffff;
      uVar2 = 0;
      (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar2,ar6_00,ar7));
    }
  }
switchD_8c07a6ce_default:
  uVar2 = (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(&(*(float *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c07a68c\n.set _FUN_8c07a68c, _FUN_8c07a68c_def\n");
