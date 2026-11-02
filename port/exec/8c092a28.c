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
undefined4 FUN_8c092a28_def(code *ar4,undefined4 ar5,code *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c092a28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 296; for (int i_ = 0; i_ < 296; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *ar6_00;
  code *ar7_00;
  undefined4 uVar4;
  float fVar5;
  double in_dr0 = 0;
  undefined8 uVar6;
  double dVar7;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 296)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 296)) - 8); FUN_8c03f480(ar5,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 296)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7_00));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 296)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 296)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x38)),uVar2,ar6_00,ar7_00));
  iVar1 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar1 < 0xc) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      uVar4 = 0;
      break;
    default:
      goto switchD_8c092a98_caseD_1;
    case 2:
    case 7:
      uVar4 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c09344c(ar4,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
      ar6_00 = ar6;
      ar7_00 = ar7;
      break;
    case 4:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), get_field_24_026024(ar7,0xb,ar6_00,ar7_00));
      if (iVar1 != 0) {
        ar6_00 = (code *)((undefined1 *)(fr0_ - 0x28));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c093e80(ar4,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar6_00,ar6));
        ar7_00 = ar6;
        break;
      }
      iVar1 = *(int *)(unsigned)(ar4 + 300);
      if (iVar1 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
        if (cVar9 == '\0') {
          *(int *)(unsigned)(ar4 + 0x2e0) = *(int *)(unsigned)(iVar1 + 4);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2e0) = *(undefined8 *)(unsigned)(iVar1 + 4);
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
        if (cVar9 == '\0') {
          *(int *)(unsigned)(ar4 + 0x2e4) = *(int *)(unsigned)(iVar1 + 8);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2e4) = *(undefined8 *)(unsigned)(iVar1 + 8);
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
        if (cVar9 == '\0') {
          *(int *)(unsigned)(ar4 + 0x2e8) = *(int *)(unsigned)(iVar1 + 0xc);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x2e8) = *(undefined8 *)(unsigned)(iVar1 + 0xc);
        }
        ar7_00 = (code *)0x5;
        *(int *)(unsigned)(ar4 + 0x40) = 5;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        ar6_00 = ar4;
LAB_8c092c4e:
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
        if (cVar9 == '\0') {
          (*(undefined4 *)(fr0_ - 0x38)) = *(undefined4 *)(unsigned)(iVar1 + 4);
        }
        else {
          uVar6 = *(undefined8 *)(unsigned)(iVar1 + 4);
          (*(undefined4 *)(fr0_ - 0x38)) = (undefined4)uVar6;
          (*(float *)(fr0_ - 0x34)) = F32HI(uVar6);
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x42a00000,*(undefined4 *)(unsigned)(iVar1 + 8));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(iVar1 + 8);
          dVar7 = 5.0983124752531e-312;
        }
        if (cVar8 == '\0') {
          (*(float *)(fr0_ - 0x34)) = F32LO(dVar7) + F32HI(dVar7);
        }
        else {
          (*(float *)(fr0_ - 0x34)) = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 != '\0') {
          (*(float *)(fr0_ - 0x34)) = (float)in_xd0;
          (*(float *)(fr0_ - 0x30)) = F32HI(in_xd0);
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x41f00000,*(undefined4 *)(unsigned)(iVar1 + 0xc));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(iVar1 + 0xc);
          dVar7 = 262144.06439208984;
        }
        if (cVar8 == '\0') {
          fVar5 = F32LO(dVar7) + F32HI(dVar7);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x41100000,fVar5);
        }
        else {
          dVar7 = 5.18306279054705e-312;
        }
        if (cVar8 == '\0') {
          (*(float *)(fr0_ - 0x30)) = F32LO(dVar7) + F32HI(dVar7);
        }
        else {
          (*(float *)(fr0_ - 0x30)) = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 != '\0') {
          (*(float *)(fr0_ - 0x30)) = (float)in_xd0;
          (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
        }
        if (0 < *(int *)(unsigned)(ar4 + 0x260)) {
          (vsp = ((unsigned long)(fr0_ - 296)), Vec3_assign(ar4 + 0x264,&(*(undefined4 *)(fr0_ - 0x38)),ar6_00,ar7_00));
        }
        pcVar3 = ((void *)0x8c022ce8);
        (vsp = ((unsigned long)(fr0_ - 296)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x68)),((void *)0x8c022ce8),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 296)), Vec3_normalize(((undefined1 *)(fr0_ - 0x68)),pcVar3,ar6_00,ar7_00));
        ar7_00 = (code *)((undefined1 *)(fr0_ - 0x78));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c095548(ar4,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),&(*(undefined4 *)(fr0_ - 0x38)),ar7_00));
        (vsp = ((unsigned long)(fr0_ - 296)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,((void *)0x8c022cb0),ar7_00));
        ar6_00 = ((void *)0x8c022cb0);
        (vsp = ((unsigned long)(fr0_ - 296)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,((void *)0x8c022cb0),ar7_00));
        if (iVar1 == 0) {
          *(int *)(unsigned)(ar4 + 0x40) = 5;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else {
        if (iVar1 == 1) goto LAB_8c092c4e;
        if (iVar1 == 2) {
          if (cVar9 == '\0') {
            *(int *)(unsigned)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
          if (cVar9 == '\0') {
            (*(undefined4 *)(fr0_ - 0x38)) = *(undefined4 *)(unsigned)(iVar1 + 4);
          }
          else {
            uVar6 = *(undefined8 *)(unsigned)(iVar1 + 4);
            (*(undefined4 *)(fr0_ - 0x38)) = (undefined4)uVar6;
            (*(float *)(fr0_ - 0x34)) = F32HI(uVar6);
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
          if (cVar9 == '\0') {
            dVar7 = CONCAT44D(0x42a00000,*(undefined4 *)(unsigned)(iVar1 + 8));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(iVar1 + 8);
            dVar7 = 5.0983124752531e-312;
          }
          if (cVar8 == '\0') {
            (*(float *)(fr0_ - 0x34)) = F32LO(dVar7) + F32HI(dVar7);
          }
          else {
            (*(float *)(fr0_ - 0x34)) = SUB84(dVar7 + dVar7,0);
          }
          if (cVar9 != '\0') {
            (*(float *)(fr0_ - 0x34)) = (float)in_xd0;
            (*(float *)(fr0_ - 0x30)) = F32HI(in_xd0);
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
          if (cVar9 == '\0') {
            dVar7 = CONCAT44D(0x41f00000,*(undefined4 *)(unsigned)(iVar1 + 0xc));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(iVar1 + 0xc);
            dVar7 = 262144.06439208984;
          }
          if (cVar8 == '\0') {
            fVar5 = F32LO(dVar7) + F32HI(dVar7);
          }
          else {
            fVar5 = SUB84(dVar7 + dVar7,0);
          }
          if (cVar9 == '\0') {
            dVar7 = CONCAT44D(0x41100000,fVar5);
          }
          else {
            dVar7 = 5.18306279054705e-312;
          }
          if (cVar8 == '\0') {
            (*(float *)(fr0_ - 0x30)) = F32LO(dVar7) + F32HI(dVar7);
          }
          else {
            (*(float *)(fr0_ - 0x30)) = SUB84(dVar7 + dVar7,0);
          }
          if (cVar9 != '\0') {
            (*(float *)(fr0_ - 0x30)) = (float)in_xd0;
            (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
          }
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c031de8(ar4,1,ar6_00,ar7_00));
          uVar4 = 0;
        }
        else {
          *(int *)(unsigned)(ar4 + 300) = 0;
        }
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(*(int *)(unsigned)(ar4 + 0x2e0),*(undefined4 *)(unsigned)(iVar1 + 4));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(iVar1 + 4);
        dVar7 = *(double *)(unsigned)(ar4 + 0x2e0);
      }
      if (cVar8 == '\0') {
        fVar5 = F32LO(dVar7) - F32HI(dVar7);
      }
      else {
        fVar5 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2d0) = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2d0) = in_xd0;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(*(int *)(unsigned)(ar4 + 0x2e4),*(undefined4 *)(unsigned)(iVar1 + 8));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(iVar1 + 8);
        dVar7 = *(double *)(unsigned)(ar4 + 0x2e4);
      }
      if (cVar8 == '\0') {
        fVar5 = F32LO(dVar7) - F32HI(dVar7);
      }
      else {
        fVar5 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2d4) = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2d4) = in_xd0;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(*(int *)(unsigned)(ar4 + 0x2e8),*(undefined4 *)(unsigned)(iVar1 + 0xc));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(iVar1 + 0xc);
        dVar7 = *(double *)(unsigned)(ar4 + 0x2e8);
      }
      if (cVar8 == '\0') {
        fVar5 = F32LO(dVar7) - F32HI(dVar7);
      }
      else {
        fVar5 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2d8) = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2d8) = in_xd0;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2e0) = *(int *)(unsigned)(iVar1 + 4);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2e0) = *(undefined8 *)(unsigned)(iVar1 + 4);
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2e4) = *(int *)(unsigned)(iVar1 + 8);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2e4) = *(undefined8 *)(unsigned)(iVar1 + 8);
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar7 + 0x104))))(ar7,2,ar6_00,ar7_00));
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2e8) = *(int *)(unsigned)(iVar1 + 0xc);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2e8) = *(undefined8 *)(unsigned)(iVar1 + 0xc);
      }
      break;
    case 6:
      ar6_00 = (code *)((undefined1 *)(fr0_ - 0x28));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c093e80(ar4,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar6_00,ar6));
      ar7_00 = ar6;
      break;
    case 8:
      (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c0988a4(ar4,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar7,ar7_00));
      ar6_00 = ar7;
      break;
    case 9:
      *(int *)(unsigned)(ar4 + 0x214) = 0;
      if (*(int *)(unsigned)(ar4 + 300) == 0) {
        ar7_00 = (code *)0x0;
        ar6_00 = (code *)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 296)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
        pcVar3 = ar4 + 0xb0;
        (vsp = ((unsigned long)(fr0_ - 296)), s_CAnimBody_SetFrame_033e6e(pcVar3,pcVar3,ar6_00,ar7_00));
        ({ unsigned long ri0_ = (unsigned long)(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x124))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 296)); FUN_8c032204(ar4 + 0xb0,pcVar3,ar6_00,ar7_00); });
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        (*(unsigned *)(fr0_ - 0x124) = (unsigned)(unsigned long)(ar4));
      }
      uVar2 = 5;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c031de8(ar4,5,ar6_00,ar7_00));
      if (iVar1 == 0) {
        *(int *)(unsigned)(ar4 + 300) = 0;
        ({ unsigned long ri0_ = (unsigned long)(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x124))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 296)); FUN_8c032204(ar4 + 0xb0,uVar2,ar6_00,ar7_00); });
        uVar4 = 0;
        if ((-1 < *(int *)(unsigned)(ar4 + 0x2f4)) && (-1 < *(int *)(unsigned)(ar4 + 0x2f8))) {
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c06b1d8(*(int *)(unsigned)(ar4 + 0x2f4),*(int *)(unsigned)(ar4 + 0x2f8),ar6_00,ar7_00));
          ar7_00 = (code *)0x2f4;
          *(int *)(unsigned)(ar4 + 0x2f4) = -1;
          *(int *)(unsigned)(ar4 + 0x2f8) = -1;
        }
      }
      else {
        ({ unsigned long ri0_ = (unsigned long)(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x124))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 296)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6_00,ar7_00); });
        if (cVar9 == '\0') {
          *(int *)(unsigned)(ar4 + 0x2fc) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x2fc) = in_dr0;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x28)),((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar7_00));
      ar6_00 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      break;
    case 10:
      *(int *)(unsigned)(ar4 + 0x214) = 0;
      *(int *)(unsigned)(ar4 + 0x25c) = -1;
      iVar1 = *(int *)(unsigned)(ar4 + 300);
      if (iVar1 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c093aec(ar4,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar6,ar7));
        ar6_00 = ar6;
        ar7_00 = ar7;
        if (iVar1 == 0) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          ar7_00 = ar7;
        }
      }
      else if (iVar1 == 1) {
        ar6_00 = (code *)((undefined1 *)(fr0_ - 0x28));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c0967d8(ar4,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar6_00,ar6));
        ar7_00 = ar6;
        if (iVar1 == 0) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else if (iVar1 == 2) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c034148(ar4 + 0xb0,6,ar6_00,ar7_00));
        if (0 < iVar1) {
          uVar2 = 300;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 296)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 296)) - 8); FUN_8c0230f0(ar4 + 0x14,300,ar6_00,ar7_00); });
          uVar2 = (vsp = ((unsigned long)(fr0_ - 296)), Vec3_length(((undefined1 *)(fr0_ - 0x88)),uVar2,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 296)), Vec3_assign(ar4 + 0x14,uVar2,ar6_00,ar7_00));
          uVar2 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 296)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c031748(ar4,uVar2,ar6_00,ar7_00));
          *(int *)(unsigned)(ar4 + 0x284) = 0;
          ar6_00 = ((void *)0x8c032204);
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c032204(ar4 + 0xb0,0,((void *)0x8c032204),ar7_00));
        }
      }
      else if (iVar1 == 3) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c031de8(ar4,6,ar6_00,ar7_00));
        if (iVar1 == 0) {
          iVar1 = *(int *)(unsigned)(ar4 + 0x284);
          *(int *)(unsigned)(ar4 + 0x284) = iVar1 + 1;
          if (1 < iVar1 + 1) {
            *(int *)(unsigned)(ar4 + 0x284) = 0;
            *(int *)(unsigned)(ar4 + 300) = 0;
            uVar4 = 0;
            *(int *)(unsigned)(ar4 + 0x248) = 0;
            *(int *)(unsigned)(ar4 + 0x40) = 5;
          }
        }
        else {
          ({ unsigned long ri0_ = (unsigned long)(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x124))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 296)); CAnimBody_GetCurFrame(ar4 + 0xb0,((void *)0x8c026da8),ar6_00,ar7_00); });
          if (cVar8 == '\0') {
            iVar1 = (int)F32HI(in_dr0);
          }
          else {
            iVar1 = (int)in_dr0;
          }
          if (iVar1 == 0x38) {
            *(int *)(unsigned)(ar4 + 0x25c) = *(int *)(unsigned)(ar4 + 0x284);
          }
        }
      }
      break;
    case 0xb:
      (vsp = ((unsigned long)(fr0_ - 296)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x58)),0xb,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 296)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 296)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7_00));
      ar6_00 = (code *)((undefined1 *)(fr0_ - 0x28));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c097fcc(ar4,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar6_00,ar6));
      ar7_00 = ar6;
    }
  }
  else {
switchD_8c092a98_caseD_1:
    uVar4 = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 296)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 296)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7_00));
  return uVar4;
}

__asm__(".globl _FUN_8c092a28\n.set _FUN_8c092a28, _FUN_8c092a28_def\n");
