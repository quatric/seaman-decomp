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
undefined4 FUN_8c0cbd74_def(int ar4,undefined *ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0cbd74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 184; for (int i_ = 0; i_ < 184; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 *a6;
  undefined1 *a5;
  int ar7_00;
  int ar4_00;
  float fVar5;
  undefined4 uVar6;
  double in_dr0 = 0;
  ulonglong uVar7;
  undefined8 uVar8;
  float fVar10;
  double dVar9;
  undefined *puVar11;
  undefined4 in_fr3 = 0;
  double in_xd0 = 0;
  bool bVar12;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  puVar3 = ar5;
  iVar4 = ar6;
  ar7_00 = ar7;
  if (*(undefined4 *)(unsigned)0x8c437320 == '\0') {
    (*(undefined4 *)(fr0_ - 0x44)) = (vsp = ((unsigned long)(fr0_ - 184)), Vec3_set_zero(0x8c437324,ar5,ar6,ar7));
    puVar3 = ((void *)(unsigned)0x8c014a34);
    iVar4 = 0x8c437314;
    (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101a0))))
              ((*(undefined4 *)(fr0_ - 0x44)),((void *)(unsigned)0x8c014a34),0x8c437314,ar7_00));
    *(undefined4 *)(unsigned)0x8c437320 = '\x01';
  }
  if (*(undefined4 *)(unsigned)0x8c43733c == '\0') {
    (*(undefined4 *)(fr0_ - 0x48)) = (vsp = ((unsigned long)(fr0_ - 184)), Vec3_ctor_zero(0x8c437340,puVar3,iVar4,ar7_00));
    puVar3 = ((void *)(unsigned)0x8c022cb0);
    iVar4 = 0x8c437330;
    (vsp = ((unsigned long)(fr0_ - 184)), global_list_push((*(undefined4 *)(fr0_ - 0x48)),((void *)(unsigned)0x8c022cb0),0x8c437330,ar7_00));
    *(undefined4 *)(unsigned)0x8c43733c = '\x01';
  }
  if (*(undefined4 *)(unsigned)0x8c437354 == '\0') {
    *(undefined4 *)(unsigned)0x8c437350 = 0;
    *(undefined4 *)(unsigned)0x8c437354 = '\x01';
  }
  (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0c84cc(((undefined1 *)(fr0_ - 0x3c)),puVar3,iVar4,ar7_00));
  (*(int *)(fr0_ - 0x4c)) = (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x144 + *(int *)(unsigned)(ar5 + 8)))))(ar5,puVar3,iVar4,ar7_00));
  uVar6 = SUB84(in_dr0,0);
  ar4_00 = (*(int *)(fr0_ - 0x4c)) + 0xb0;
  iVar1 = *(int *)(unsigned)(0x2d39c + ar4);
  if (iVar1 == 0) {
    (*(int *)(fr0_ - 0x50)) = (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x144 + *(int *)(unsigned)(ar5 + 8)))))(ar5,puVar3,iVar4,ar7_00));
    *(undefined4 *)(unsigned)0x8c437350 = (*(int *)(fr0_ - 0x50)) + 0xf8;
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44((undefined4)(*(undefined1 *)(unsigned)0x8c0cbf2c),uVar6);
      (*(undefined8 *)(fr0_ - 0x88)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x88))+4)),(undefined4)(*(undefined1 *)(unsigned)0x8c0cbf2c));
    }
    else {
      uVar7 = CONCAT44(0x2d3a4,(undefined4)(*(undefined1 *)(unsigned)0x8c0cbf2c));
      (*(undefined8 *)(fr0_ - 0x88)) = uVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2d3a4) = (undefined4)(*(undefined8 *)(fr0_ - 0x88));
      uVar7 = CONCAT44((undefined4)(*(undefined8 *)(fr0_ - 0x88)),(int)uVar7);
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x2d3a4) = (*(undefined8 *)(fr0_ - 0x88));
      uVar7 = (*(undefined8 *)(fr0_ - 0x88));
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2d3a8) = (undefined4)(*(undefined8 *)(fr0_ - 0x88));
      uVar7 = CONCAT44((undefined4)(*(undefined8 *)(fr0_ - 0x88)),(int)uVar7);
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x2d3a8) = (*(undefined8 *)(fr0_ - 0x88));
      uVar7 = (*(undefined8 *)(fr0_ - 0x88));
    }
    iVar1 = *(undefined4 *)(unsigned)0x8c437350;
    (vsp = ((unsigned long)(fr0_ - 184)), vec3_copy_8c023d8c(ar4 + 0x2d3b0,iVar1,iVar4,ar7_00));
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)0x8c437324 = 0;
    }
    else {
      *(undefined4 *)(unsigned)0x8c437324 = uVar7 & 0xffffffff;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((unsigned)0x8c437324 + 4) = 0;
    }
    else {
      *(ulonglong *)(unsigned)((unsigned)0x8c437324 + 4) = uVar7 & 0xffffffff;
    }
    uVar7 = uVar7 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(0x8c437324 + 1) = 0;
    }
    else {
      ((undefined1 *)(unsigned)1)[0x8c437324] = uVar7;
    }
    (*(int *)(fr0_ - 0x54)) = (vsp = ((unsigned long)(fr0_ - 184)), get_field_24_05c284(ar5,iVar1,iVar4,ar7_00));
    if ((*(int *)(fr0_ - 0x54)) == 1) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44D((undefined4)(*(undefined1 *)(unsigned)0x8c0cbfd8),(int)uVar7);
        *(undefined4 *)(unsigned)(ar4 + 0x2d3ac) = (undefined4)(*(undefined1 *)(unsigned)0x8c0cbfd8);
      }
      else {
        in_dr0 = CONCAT44D(0x8c437340,(undefined4)(*(undefined1 *)(unsigned)0x8c0cbfd8));
        *(double *)(unsigned)(ar4 + 0x2d3ac) = in_dr0;
      }
    }
    else {
      in_dr0 = (double)(uVar7 & 0xffffffff);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2d3ac) = 0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x2d3ac) = in_dr0;
      }
    }
    ar7_00 = 0x8c437340 + 8;
    iVar4 = 0x8c437340 + 4;
    iVar1 = 0x8c437340;
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0507a4(ar5,0x8c437340,iVar4,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c036988(ar5,iVar1,iVar4,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c078fb8(ar5,iVar1,iVar4,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar5 + 8) + 0x6c))))(ar5,iVar1,iVar4,ar7_00));
    *(undefined4 *)(unsigned)(0x2d39c + ar4) = 1;
    (*(int *)(fr0_ - 0x8c)) = (vsp = ((unsigned long)(fr0_ - 184)), get_field_d0_0c51fc(ar6,iVar1,iVar4,ar7_00));
    puVar3 = (undefined *)(unsigned)(uint)*(byte *)(unsigned)(0xa0 + ar7);
    piVar2 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + (*(int *)(fr0_ - 0x8c)) * 4 + 8));
    (*(int *)(fr0_ - 0x58)) = (*(int *)(fr0_ - 0x8c));
    (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar2 + 0x78))))(piVar2,puVar3,iVar4,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c235ee4(piVar2,puVar3,iVar4,ar7_00));
  }
  else if (iVar1 == 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar9 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0cc070),*(undefined4 *)(unsigned)(ar4 + 0x2d3a4));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x2d3a4);
      dVar9 = CONCAT44D(0x2d3a8,(*(undefined1 *)(unsigned)0x8c0cc070));
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = F32LO(dVar9) + F32HI(dVar9);
    }
    else {
      fVar5 = SUB84(dVar9 + dVar9,0);
    }
    (*(undefined8 *)(fr0_ - 0x94)) = in_xd0;
    if (in_FPSCR_SZ == '\0') {
      (*(undefined8 *)(fr0_ - 0x94)) = CONCAT44D(ar4,fVar5);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x94))+4)) + 0x2d3a4) = (undefined4)(*(undefined8 *)(fr0_ - 0x94));
      dVar9 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x94)),fVar5);
    }
    else {
      *(double *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x94))+4)) + 0x2d3a4) = (*(undefined8 *)(fr0_ - 0x94));
      dVar9 = (*(undefined8 *)(fr0_ - 0x94));
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2d3a8) = (undefined4)(*(undefined8 *)(fr0_ - 0x94));
      in_dr0 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x94)),SUB84(dVar9,0));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2d3a8) = (*(undefined8 *)(fr0_ - 0x94));
      in_dr0 = (*(undefined8 *)(fr0_ - 0x94));
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x2d3a4);
    }
    if (in_FPSCR_PR != '\0' || 0.0 <= SUB84(in_dr0,0)) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2d3a4) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2d3a4) = (ulonglong)in_dr0 & 0xffffffff;
      }
      *(undefined4 *)(unsigned)(0x2d39c + ar4) = 2;
    }
    in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    (*(int *)(fr0_ - 0x5c)) = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c1001e0(ar6,puVar3,iVar4,ar7_00));
    if ((*(int *)(fr0_ - 0x5c)) == 1) {
      *(undefined4 *)(unsigned)(0x2d39c + ar4) = 3;
    }
  }
  else if (iVar1 == 2) {
    (*(int *)(fr0_ - 0x60)) = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c1009c8(ar6,puVar3,iVar4,ar7_00));
    uVar6 = SUB84(in_dr0,0);
    if ((*(int *)(fr0_ - 0x60)) == 1) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = *(undefined4 *)(unsigned)(ar4 + 0x2d3b0);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x2d3b0);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(*(undefined4 *)(unsigned)0x8c437350 + 0x18),uVar6);
      }
      else {
        in_dr0 = *(double *)(unsigned)(*(undefined4 *)(unsigned)0x8c437350 + 0x18);
      }
      if (in_FPSCR_PR == '\0' && F32HI(in_dr0) < SUB84(in_dr0,0)) {
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0cc0c8),SUB84(in_dr0,0));
          *(undefined4 *)(unsigned)0x8c437324 = (*(undefined1 *)(unsigned)0x8c0cc0c8);
        }
        else {
          in_dr0 = CONCAT44D((*(uint *)(unsigned)0x8c0cc0cc),(*(undefined1 *)(unsigned)0x8c0cc0c8));
          *(undefined4 *)(unsigned)0x8c437324 = in_dr0;
        }
      }
    }
    else {
      (*(int *)(fr0_ - 0x64)) = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c1009ec(ar6,puVar3,iVar4,ar7_00));
      uVar6 = SUB84(in_dr0,0);
      if ((*(int *)(fr0_ - 0x64)) == 1) {
        if (in_FPSCR_SZ == '\0') {
          uVar6 = *(undefined4 *)(unsigned)(ar4 + 0x2d3b0);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x2d3b0);
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(*(undefined4 *)(unsigned)0x8c437350 + 0xc),uVar6);
        }
        else {
          in_dr0 = *(double *)(unsigned)(*(undefined4 *)(unsigned)0x8c437350 + 0xc);
        }
        if (in_FPSCR_PR == '\0' && SUB84(in_dr0,0) < F32HI(in_dr0)) {
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0cc148),SUB84(in_dr0,0));
            *(undefined4 *)(unsigned)0x8c437324 = (*(undefined1 *)(unsigned)0x8c0cc148);
          }
          else {
            in_dr0 = CONCAT44D(((void *)(unsigned)0x8c100a10),(*(undefined1 *)(unsigned)0x8c0cc148));
            *(undefined4 *)(unsigned)0x8c437324 = in_dr0;
          }
        }
      }
    }
    uVar6 = SUB84(in_dr0,0);
    (*(int *)(fr0_ - 0x68)) = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c100a10(ar6,puVar3,iVar4,ar7_00));
    if ((*(int *)(fr0_ - 0x68)) == 1) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = *(undefined4 *)(unsigned)(ar4 + 0x2d3b4);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x2d3b4);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar8 = CONCAT44(*(undefined4 *)(unsigned)(*(undefined4 *)(unsigned)0x8c437350 + 0x10),uVar6);
      }
      else {
        uVar8 = *(undefined8 *)(unsigned)(*(undefined4 *)(unsigned)0x8c437350 + 0x10);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar8 < F32HI(uVar8)) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((unsigned)0x8c437324 + 4) = (*(undefined1 *)(unsigned)0x8c0cc154);
        }
        else {
          *(undefined8 *)(unsigned)((unsigned)0x8c437324 + 4) = CONCAT44((*(uint *)(unsigned)0x8c0cc158),(*(undefined1 *)(unsigned)0x8c0cc154));
        }
      }
    }
    else {
      (*(int *)(fr0_ - 0x6c)) = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c100a34(ar6,puVar3,iVar4,ar7_00));
      if ((*(int *)(fr0_ - 0x6c)) == 1) {
        if (in_FPSCR_SZ == '\0') {
          uVar6 = *(undefined4 *)(unsigned)(ar4 + 0x2d3b4);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x2d3b4);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar8 = CONCAT44(*(undefined4 *)(unsigned)(*(undefined4 *)(unsigned)0x8c437350 + 0x1c),uVar6);
        }
        else {
          uVar8 = *(undefined8 *)(unsigned)(*(undefined4 *)(unsigned)0x8c437350 + 0x1c);
        }
        if (in_FPSCR_PR == '\0' && F32HI(uVar8) < (float)uVar8) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)((unsigned)0x8c437324 + 4) = (*(undefined1 *)(unsigned)0x8c0cc328);
          }
          else {
            *(ulonglong *)(unsigned)((unsigned)0x8c437324 + 4) = CONCAT44((*(undefined1 *)(unsigned)0x8c0cc32c),(*(undefined1 *)(unsigned)0x8c0cc328));
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(unsigned)0x8c437324;
      fVar10 = (*(undefined1 *)(unsigned)0x8c0cc32c);
    }
    else {
      in_xd0 = *(undefined4 *)(unsigned)0x8c437324;
      fVar5 = (*(undefined1 *)(unsigned)0x8c0cc32c);
      fVar10 = (*(undefined1 *)(unsigned)0x8c0cc330);
    }
    if (in_FPSCR_PR != '\0' || fVar5 <= fVar10) {
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)(unsigned)0x8c437324;
      }
      else {
        in_xd0 = *(undefined4 *)(unsigned)0x8c437324;
      }
      if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
        if (in_FPSCR_SZ == '\0') {
          dVar9 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0cc330),*(float *)(unsigned)0x8c437324);
        }
        else {
          in_xd0 = *(undefined4 *)(unsigned)0x8c437324;
          dVar9 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0cc334),(*(undefined1 *)(unsigned)0x8c0cc330));
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = F32LO(dVar9) - F32HI(dVar9);
        }
        else {
          fVar5 = SUB84(dVar9 - dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)0x8c437324 = fVar5;
          fVar5 = *(float *)(unsigned)0x8c437324;
        }
        else {
          *(undefined4 *)(unsigned)0x8c437324 = in_xd0;
          in_xd0 = *(undefined4 *)(unsigned)0x8c437324;
        }
        if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)0x8c437324 = 0.0;
          }
          else {
            *(undefined4 *)(unsigned)0x8c437324 = (double)(ulonglong)(uint)fVar5;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(unsigned)0x8c437324;
      fVar10 = (*(undefined1 *)(unsigned)0x8c0cc334);
    }
    else {
      in_xd0 = *(undefined4 *)(unsigned)0x8c437324;
      fVar5 = (*(undefined1 *)(unsigned)0x8c0cc334);
      fVar10 = 0x2d3b0;
    }
    if (in_FPSCR_PR != '\0' || fVar10 <= fVar5) {
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)(unsigned)0x8c437324;
      }
      else {
        in_xd0 = *(undefined4 *)(unsigned)0x8c437324;
      }
      if (in_FPSCR_PR == '\0' && fVar5 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar9 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0cc330),*(float *)(unsigned)0x8c437324);
        }
        else {
          in_xd0 = *(undefined4 *)(unsigned)0x8c437324;
          dVar9 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0cc334),(*(undefined1 *)(unsigned)0x8c0cc330));
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = F32LO(dVar9) + F32HI(dVar9);
        }
        else {
          fVar5 = SUB84(dVar9 + dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)0x8c437324 = fVar5;
          fVar5 = *(float *)(unsigned)0x8c437324;
        }
        else {
          *(undefined4 *)(unsigned)0x8c437324 = in_xd0;
          in_xd0 = *(undefined4 *)(unsigned)0x8c437324;
        }
        if (in_FPSCR_PR != '\0' || 0.0 <= fVar5) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)0x8c437324 = 0.0;
          }
          else {
            *(undefined4 *)(unsigned)0x8c437324 = (double)(ulonglong)(uint)fVar5;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(unsigned)((unsigned)0x8c437324 + 4);
      fVar10 = (*(undefined1 *)(unsigned)0x8c0cc32c);
    }
    else {
      in_xd0 = *(double *)(unsigned)((unsigned)0x8c437324 + 4);
      fVar5 = (*(undefined1 *)(unsigned)0x8c0cc32c);
      fVar10 = (*(undefined1 *)(unsigned)0x8c0cc330);
    }
    if (in_FPSCR_PR != '\0' || fVar5 <= fVar10) {
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)(unsigned)((unsigned)0x8c437324 + 4);
      }
      else {
        in_xd0 = *(double *)(unsigned)((unsigned)0x8c437324 + 4);
      }
      if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
        (*(unsigned *)(fr0_ - 0x98) = (unsigned)(unsigned long)(0x8c437324));
        if (in_FPSCR_SZ == '\0') {
          dVar9 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0cc330),*(float *)(unsigned)((unsigned)0x8c437324 + 4));
        }
        else {
          in_xd0 = *(double *)(unsigned)((unsigned)0x8c437324 + 4);
          dVar9 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0cc334),(*(undefined1 *)(unsigned)0x8c0cc330));
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = F32LO(dVar9) - F32HI(dVar9);
        }
        else {
          fVar5 = SUB84(dVar9 - dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((unsigned)0x8c437324 + 4) = fVar5;
        }
        else {
          *(double *)(unsigned)((unsigned)0x8c437324 + 4) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *(float *)(unsigned)((unsigned)0x8c437324 + 4);
        }
        else {
          in_xd0 = *(double *)(unsigned)((unsigned)0x8c437324 + 4);
        }
        if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)((unsigned)0x8c437324 + 4) = 0.0;
          }
          else {
            *(ulonglong *)(unsigned)((unsigned)0x8c437324 + 4) = (ulonglong)(uint)fVar5;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(unsigned)((unsigned)0x8c437324 + 4);
      fVar10 = (*(undefined1 *)(unsigned)0x8c0cc334);
    }
    else {
      in_xd0 = *(double *)(unsigned)((unsigned)0x8c437324 + 4);
      fVar5 = (*(undefined1 *)(unsigned)0x8c0cc334);
      fVar10 = 0x2d3b0;
    }
    if (in_FPSCR_PR != '\0' || fVar10 <= fVar5) {
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)(unsigned)((unsigned)0x8c437324 + 4);
      }
      else {
        in_xd0 = *(double *)(unsigned)((unsigned)0x8c437324 + 4);
      }
      if (in_FPSCR_PR == '\0' && fVar5 < 0.0) {
        (*(unsigned *)(fr0_ - 0x9c) = (unsigned)(unsigned long)(0x8c437324));
        if (in_FPSCR_SZ == '\0') {
          dVar9 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0cc330),*(float *)(unsigned)((unsigned)0x8c437324 + 4));
        }
        else {
          in_xd0 = *(double *)(unsigned)((unsigned)0x8c437324 + 4);
          dVar9 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0cc334),(*(undefined1 *)(unsigned)0x8c0cc330));
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = F32LO(dVar9) + F32HI(dVar9);
        }
        else {
          fVar5 = SUB84(dVar9 + dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((unsigned)0x8c437324 + 4) = fVar5;
        }
        else {
          *(double *)(unsigned)((unsigned)0x8c437324 + 4) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *(float *)(unsigned)((unsigned)0x8c437324 + 4);
        }
        else {
          in_xd0 = *(double *)(unsigned)((unsigned)0x8c437324 + 4);
        }
        if (in_FPSCR_PR != '\0' || 0.0 <= fVar5) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)((unsigned)0x8c437324 + 4) = 0.0;
          }
          else {
            *(ulonglong *)(unsigned)((unsigned)0x8c437324 + 4) = (ulonglong)(uint)fVar5;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = CONCAT44D(*(float *)(unsigned)0x8c437324,*(undefined4 *)(unsigned)(ar4 + (int)0x2d3b0));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + (int)0x2d3b0);
      dVar9 = *(undefined4 *)(unsigned)0x8c437324;
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = F32LO(dVar9) + F32HI(dVar9);
    }
    else {
      fVar5 = SUB84(dVar9 + dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(ar4 + (int)0x2d3b0) = fVar5;
    }
    else {
      *(double *)(unsigned)(ar4 + (int)0x2d3b0) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = CONCAT44D(*(float *)(unsigned)((unsigned)0x8c437324 + 4),*(undefined4 *)(unsigned)(ar4 + 0x2d3b4)
                              );
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x2d3b4);
      dVar9 = *(double *)(unsigned)((unsigned)0x8c437324 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = F32LO(dVar9) + F32HI(dVar9);
    }
    else {
      fVar5 = SUB84(dVar9 + dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(ar4 + 0x2d3b4) = fVar5;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2d3b4) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(unsigned)(ar4 + 0x2d3ac);
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x2d3ac);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = fVar5 + 1.0;
    }
    else {
      fVar5 = SUB84(CONCAT44D(0x3f800000,fVar5) + CONCAT44D(0x3f800000,fVar5),0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(ar4 + 0x2d3ac) = fVar5;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2d3ac) = in_xd0;
    }
    (*(int *)(fr0_ - 0xa8)) = ar4;
    (*(int *)(fr0_ - 0xa4)) = ar4;
    (*(int *)(fr0_ - 0xa0)) = ar4;
    (*(int *)(fr0_ - 0x70)) = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031588(ar4_00,puVar3,iVar4,ar7_00));
    if (in_FPSCR_SZ == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2d3ac),in_fr3);
    }
    else {
      dVar9 = *(double *)(unsigned)(ar4 + 0x2d3ac);
    }
    fVar5 = (float)(*(int *)(fr0_ - 0x70));
    in_dr0 = (double)(ulonglong)(uint)fVar5;
    if (in_FPSCR_PR == '\0' && fVar5 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0cc344),fVar5);
      }
      else {
        in_dr0 = CONCAT44D(((void *)(unsigned)0x8c05c284),(*(undefined1 *)(unsigned)0x8c0cc344));
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = F32HI(in_dr0);
        in_dr0 = CONCAT44D(fVar5,F32LO(in_dr0) + fVar5);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
    }
    if (in_FPSCR_PR == '\0') {
      bVar12 = F32HI(dVar9) < SUB84(in_dr0,0);
    }
    else {
      bVar12 = dVar9 < in_dr0;
    }
    if (!bVar12) {
      (*(int *)(fr0_ - 0x74)) = (vsp = ((unsigned long)(fr0_ - 184)), get_field_24_05c284(ar5,puVar3,iVar4,ar7_00));
      if ((*(int *)(fr0_ - 0x74)) == 1) {
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c0cc378),SUB84(in_dr0,0));
          *(undefined4 *)(unsigned)(ar4 + 0x2d3ac) = (*(undefined4 *)(unsigned)(unsigned)0x8c0cc378);
        }
        else {
          in_dr0 = CONCAT44D(((void *)(unsigned)0x8c1001e0),(*(undefined4 *)(unsigned)(unsigned)0x8c0cc378));
          *(double *)(unsigned)(ar4 + 0x2d3ac) = in_dr0;
        }
      }
      else {
        in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2d3ac) = 0;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x2d3ac) = in_dr0;
        }
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c1001e0(ar6,puVar3,iVar4,ar7_00));
    (*(undefined8 *)(fr0_ - 0x7c)) = CONCAT44(iVar1,(undefined4)(*(undefined8 *)(fr0_ - 0x7c)));
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(0x2d39c + ar4) = 3;
    }
  }
  else if (iVar1 == 3) {
    if (in_FPSCR_SZ == '\0') {
      dVar9 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0cc4ac),*(undefined4 *)(unsigned)(ar4 + 0x2d3a4));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x2d3a4);
      dVar9 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0cc4b0),(*(undefined1 *)(unsigned)0x8c0cc4ac));
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = F32LO(dVar9) - F32HI(dVar9);
    }
    else {
      fVar5 = SUB84(dVar9 - dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(ar4 + 0x2d3a4) = fVar5;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x2d3a4) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0cc4b0),*(undefined4 *)(unsigned)(ar4 + 0x2d3a4));
    }
    else {
      in_dr0 = CONCAT44D(0x2d39c,(*(undefined1 *)(unsigned)0x8c0cc4b0));
    }
    (*(int *)(fr0_ - 0xac)) = ar4;
    if (in_FPSCR_PR != '\0' || SUB84(in_dr0,0) <= F32HI(in_dr0)) {
      *(undefined4 *)(unsigned)(0x2d39c + ar4) = 5;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0xb4)) + 0x88) = 0;
  }
  else {
    *(ulonglong *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0xb4)) + 0x88) = (ulonglong)in_dr0 & 0xffffffff;
  }
  uVar7 = (ulonglong)in_dr0 & 0xffffffff;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0xb4)) + 0x8c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0xb4)) + 0x8c) = uVar7;
  }
  (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x120 + *(int *)(unsigned)(ar5 + 8)))))(ar5,puVar3,iVar4,ar7_00));
  uVar6 = (undefined4)(uVar7 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x7c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x7c))+4)),uVar6);
    *(undefined4 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0xb4)) + 0x90) = uVar6;
  }
  else {
    (*(undefined8 *)(fr0_ - 0x7c)) = uVar7;
    *(ulonglong *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0xb4)) + 0x90) = uVar7;
  }
  a6 = ((undefined1 *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar5 + 8) + 0x18))))(ar5,ar7,a6,ar7_00));
  if (*(int *)(unsigned)(0x2d39c + ar4) == 5) {
    puVar3 = (*(undefined1 *)(unsigned)0x8c0cc4cc);
    puVar11 = ((void *)(unsigned)0x8c036988);
    if (in_FPSCR_SZ == '\0') {
      puVar3 = ((undefined *)(unsigned long)*(unsigned *)(unsigned)(0x8c437340 + 8));
      puVar11 = (*(undefined1 *)(unsigned)0x8c0cc4cc);
    }
    if (in_FPSCR_PR == '\0' && (float)(uint)puVar11 < (float)(uint)puVar3) {
      if (in_FPSCR_SZ == '\0') {
        *(unsigned *)(unsigned)(0x8c437340 + 8) = (*(undefined1 *)(unsigned)0x8c0cc4cc);
      }
      else {
        *(undefined8 *)(unsigned)(0x8c437340 + 8) = CONCAT44(((void *)(unsigned)0x8c036988),(*(undefined1 *)(unsigned)0x8c0cc4cc));
      }
    }
    iVar1 = 0x8c437340 + 8;
    iVar4 = 0x8c437340;
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c036988(ar5,iVar1,0x8c437340,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar5 + 8) + 0x6c))))(ar5,iVar1,iVar4,ar7_00));
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xb4))+4)) = (vsp = ((unsigned long)(fr0_ - 184)), get_field_d0_0c51fc(ar6,iVar1,iVar4,ar7_00));
    a5 = (undefined1 *)(unsigned)(uint)*(byte *)(unsigned)(0xa0 + ar7);
    piVar2 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xb4))+4)) * 4 + 8));
    a6 = a5;
    (*(int *)(fr0_ - 0x80)) = (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xb4))+4));
    (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar2 + 0x70))))(piVar2,a5,a5,ar7_00));
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xb4))+0)) = (vsp = ((unsigned long)(fr0_ - 184)), get_field_d0_0c51fc(ar6,a5,a6,ar7_00));
    (*(undefined8 *)(fr0_ - 0x88)) = CONCAT44((int)(*(undefined8 *)(fr0_ - 0xb4)),(undefined4)(*(undefined8 *)(fr0_ - 0x88)));
    piVar2 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + (int)(*(undefined8 *)(fr0_ - 0xb4)) * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 184)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xa0 + *piVar2))))(piVar2,a5,a6,ar7_00));
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2d3a4) = (*(undefined1 *)(unsigned)0x8c0cc4b0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2d3a4) = CONCAT44(0x2d39c,(*(undefined1 *)(unsigned)0x8c0cc4b0));
    }
    (*(undefined4 *)(fr0_ - 0x40)) = 5;
    *(undefined4 *)(unsigned)(0x2d39c + ar4) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x40)) = *(undefined4 *)(unsigned)(0x2d39c + ar4);
  }
  (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c0c8480(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,a6,ar7_00));
  return (*(undefined4 *)(fr0_ - 0x40));
}

__asm__(".globl _FUN_8c0cbd74\n.set _FUN_8c0cbd74, _FUN_8c0cbd74_def\n");
