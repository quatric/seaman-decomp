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
uint FUN_8c0ae84c_def(int ar4,undefined8 *ar5,code *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0ae84c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  double *pdVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined1 *ar4_00;
  int ar4_01;
  undefined4 uVar5;
  undefined8 *ar5_00;
  code *ar6_00;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  undefined8 in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  iVar6 = 0;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x30)),ar5,ar6,ar7));
  uVar4 = 0;
  for (iVar8 = 0; iVar8 < 10; iVar8 = iVar8 + 1) {
    ar6_00 = (code *)0x4c;
    if (*(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) == 0) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(uVar4,((void *)0x8c014200),0x4c,ar7));
      uVar5 = 0x1e;
      iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,0x1e,ar6_00,ar7));
      if (iVar7 == 0) {
        for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
          uVar5 = 0x8c285974;
          *(undefined1 *)(unsigned)(iVar8 * 0x4c + iVar7 * 4 + -0x73d7a659) = 1;
        }
        *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a648) = 10;
        *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) = 1;
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023de0(((undefined1 *)(fr0_ - 0x3c)),uVar5,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023e04(iVar8 * 0x4c + -0x73d7a668,((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7));
        ar4_00 = ((undefined1 *)(fr0_ - 0x3c));
        (vsp = ((unsigned long)(fr0_ - 116)), free_if_nonnull_wrap_016ac4(ar4_00,0xffffffff,ar6_00,ar7));
        puVar1 = (undefined8 *)(unsigned)(iVar8 * 0x4c + -0x73d7a68c);
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)puVar1 = *(undefined4 *)(unsigned)ar5;
        }
        else {
          *puVar1 = *ar5;
        }
        puVar1 = (undefined8 *)(unsigned)(iVar8 * 0x4c + -0x73d7a688);
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)puVar1 = *(undefined4 *)(unsigned)((int)ar5 + 4);
        }
        else {
          *puVar1 = *(undefined8 *)(unsigned)((int)ar5 + 4);
        }
        puVar1 = (undefined8 *)(unsigned)(iVar8 * 0x4c + -0x73d7a684);
        ar5_00 = ar5 + 1;
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)puVar1 = *(undefined4 *)(unsigned)ar5_00;
        }
        else {
          *puVar1 = *ar5_00;
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(ar4_00,ar5_00,ar6_00,ar7));
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,0x14,ar6_00,ar7));
        if (cVar12 == '\0') {
          dVar10 = CONCAT44D(0x42c80000,(float)iVar7);
        }
        else {
          dVar10 = 7.64472037604589e-312;
        }
        if (cVar11 == '\0') {
          (*(float *)(fr0_ - 0x30)) = F32LO(dVar10) / F32HI(dVar10);
        }
        else {
          (*(float *)(fr0_ - 0x30)) = SUB84(dVar10 / dVar10,0);
        }
        if (cVar12 != '\0') {
          (*(float *)(fr0_ - 0x30)) = (float)in_xd0;
          (*(float *)(fr0_ - 0x2c)) = F32HI(in_xd0);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(((void *)0x8c014200),iVar7,ar6_00,ar7));
        uVar5 = 2;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,2,ar6_00,ar7));
        if (iVar7 == 0) {
          if (cVar12 == '\0') {
            dVar10 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x30)));
          }
          else {
            in_xd0 = CONCAT44((*(float *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
            dVar10 = 6.04234156954332e-312;
          }
          if (cVar11 == '\0') {
            (*(float *)(fr0_ - 0x30)) = F32LO(dVar10) * F32HI(dVar10);
          }
          else {
            (*(float *)(fr0_ - 0x30)) = SUB84(dVar10 * dVar10,0);
          }
          if (cVar12 != '\0') {
            (*(float *)(fr0_ - 0x30)) = (float)in_xd0;
            (*(float *)(fr0_ - 0x2c)) = F32HI(in_xd0);
          }
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(uVar4,uVar5,ar6_00,ar7));
        uVar5 = 0x14;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,0x14,ar6_00,ar7));
        if (cVar12 == '\0') {
          dVar10 = CONCAT44D(0x42c80000,(float)iVar7);
        }
        else {
          dVar10 = 7.64472037604589e-312;
        }
        if (cVar11 == '\0') {
          (*(float *)(fr0_ - 0x2c)) = F32LO(dVar10) / F32HI(dVar10);
        }
        else {
          (*(float *)(fr0_ - 0x2c)) = SUB84(dVar10 / dVar10,0);
        }
        if (cVar12 != '\0') {
          (*(float *)(fr0_ - 0x2c)) = (float)in_xd0;
          (*(float *)(fr0_ - 0x28)) = F32HI(in_xd0);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(uVar4,uVar5,ar6_00,ar7));
        uVar5 = 2;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,2,ar6_00,ar7));
        if (iVar7 == 0) {
          if (cVar12 == '\0') {
            dVar10 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x2c)));
          }
          else {
            in_xd0 = CONCAT44((*(float *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
            dVar10 = 6.04234156954332e-312;
          }
          if (cVar11 == '\0') {
            (*(float *)(fr0_ - 0x2c)) = F32LO(dVar10) * F32HI(dVar10);
          }
          else {
            (*(float *)(fr0_ - 0x2c)) = SUB84(dVar10 * dVar10,0);
          }
          if (cVar12 != '\0') {
            (*(float *)(fr0_ - 0x2c)) = (float)in_xd0;
            (*(float *)(fr0_ - 0x28)) = F32HI(in_xd0);
          }
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(uVar4,uVar5,ar6_00,ar7));
        uVar5 = 100;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,100,ar6_00,ar7));
        if (cVar12 == '\0') {
          dVar10 = CONCAT44D(0x42c80000,(float)iVar7);
        }
        else {
          dVar10 = 7.64472037604589e-312;
        }
        if (cVar11 == '\0') {
          fVar9 = F32LO(dVar10) / F32HI(dVar10);
        }
        else {
          fVar9 = SUB84(dVar10 / dVar10,0);
        }
        (*(float *)(fr0_ - 0x28)) = fVar9;
        if (cVar12 != '\0') {
          (*(float *)(fr0_ - 0x28)) = (float)in_xd0;
          (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(uVar4,uVar5,ar6_00,ar7));
        uVar5 = 2;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,2,ar6_00,ar7));
        if (iVar7 == 0) {
          if (cVar12 == '\0') {
            dVar10 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x28)));
          }
          else {
            in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
            dVar10 = 6.04234156954332e-312;
          }
          if (cVar11 == '\0') {
            fVar9 = F32LO(dVar10) * F32HI(dVar10);
          }
          else {
            fVar9 = SUB84(dVar10 * dVar10,0);
          }
          (*(float *)(fr0_ - 0x28)) = fVar9;
          if (cVar12 != '\0') {
            (*(float *)(fr0_ - 0x28)) = (float)in_xd0;
            (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
          }
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c02ace4(ar4 + 0x53c,uVar5,ar6_00,ar7); });
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(iVar8 * 0x4c + -0x73d7a67c,((undefined1 *)(fr0_ - 0x4c)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7));
        pfVar3 = &(*(float *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023aa0(iVar8 * 0x4c + -0x73d7a67c,pfVar3,ar6_00,ar7));
        iVar7 = iVar8 * 0x4c + -0x73d7a67c;
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length(iVar7,pfVar3,ar6_00,ar7));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(iVar7,pfVar3,ar6_00,ar7));
        uVar5 = 10;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,10,ar6_00,ar7));
        pdVar2 = (double *)(unsigned)(iVar8 * 0x4c + -0x73d7a66c);
        if (cVar11 == '\0') {
          dVar10 = CONCAT44D((float)iVar7,fVar9);
        }
        else {
          dVar10 = (double)iVar7;
        }
        if (cVar12 == '\0') {
          *(int *)(unsigned)pdVar2 = (int)(D2U(dVar10) >> 0x20);
        }
        else {
          *pdVar2 = dVar10;
        }
        ar4_01 = ar4 + 0x53c;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_314_0b58d0(ar4_01,uVar5,ar6_00,ar7));
        if (iVar7 < 1) {
          ar6_00 = ((void *)0x8c014200);
          uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(ar4_01,iVar7,((void *)0x8c014200),ar7));
          uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,3,ar6_00,ar7));
          *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a644) = uVar4;
        }
        else {
          uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), rand(ar4_01,((void *)0x8c014200),ar6_00,ar7));
          ar6_00 = (code *)(vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar4,6,ar6_00,ar7));
          *(unsigned *)(unsigned)(iVar8 * 0x4c + -0x73d7a644) = ar6_00;
          iVar7 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_124_027930(ar4 + 0x53c,0x53c,ar6_00,ar7));
          if ((iVar7 == 2) && (*(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a644) < 3)) {
            iVar7 = iVar8 * 0x4c;
            ar7 = iVar7 + -0x73d7a68c;
            ar6_00 = (code *)(*(int *)(unsigned)(iVar7 + -0x73d7a644) + 3);
            *(unsigned *)(unsigned)(iVar7 + -0x73d7a644) = ar6_00;
          }
        }
      }
    }
    uVar4 = 0x4c;
    if (*(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) == 1) break;
  }
  for (iVar8 = 0; iVar8 < 10; iVar8 = iVar8 + 1) {
    if (0 < *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c)) {
      if (*(int *)(unsigned)(ar4 + 0x1710) < (int)ar6) {
        *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) =
             *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) + *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a648);
      }
      else if (1 < *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c)) {
        ar6_00 = (code *)0x40;
        *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) =
             *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) + *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a648);
      }
      pfVar3 = (float *)(unsigned)(iVar8 * 0x4c + -0x73d7a668);
      puVar1 = (undefined8 *)(unsigned)(iVar8 * 0x4c + -0x73d7a668);
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)puVar1);
      }
      else {
        in_xd0 = *puVar1;
        dVar10 = 6.71062932991538e-312;
      }
      if (cVar11 == '\0') {
        fVar9 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *pfVar3 = fVar9;
      }
      else {
        *(undefined8 *)(unsigned)pfVar3 = in_xd0;
      }
      pfVar3 = (float *)(unsigned)(iVar8 * 0x4c + -0x73d7a664);
      puVar1 = (undefined8 *)(unsigned)(iVar8 * 0x4c + -0x73d7a664);
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)puVar1);
      }
      else {
        in_xd0 = *puVar1;
        dVar10 = 6.71062932991538e-312;
      }
      if (cVar11 == '\0') {
        fVar9 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *pfVar3 = fVar9;
      }
      else {
        *(undefined8 *)(unsigned)pfVar3 = in_xd0;
      }
      pfVar3 = (float *)(unsigned)(iVar8 * 0x4c + -0x73d7a660);
      puVar1 = (undefined8 *)(unsigned)(iVar8 * 0x4c + -0x73d7a660);
      if (cVar12 == '\0') {
        dVar10 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)puVar1);
      }
      else {
        in_xd0 = *puVar1;
        dVar10 = 6.71062932991538e-312;
      }
      if (cVar11 == '\0') {
        fVar9 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *pfVar3 = fVar9;
      }
      else {
        *(undefined8 *)(unsigned)pfVar3 = in_xd0;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_scale(iVar8 * 0x4c + -0x73d7a67c,iVar8 * 0x4c + -0x73d7a66c,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023aa0(iVar8 * 0x4c + -0x73d7a68c,((undefined1 *)(fr0_ - 0x5c)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7));
      if (0xfe < *(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c)) {
        *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) = 0xff;
        *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a648) = 0xfffffff6;
      }
      if (*(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) < 1) {
        *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) = 0;
        *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a648) = 10;
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023de0(((undefined1 *)(fr0_ - 0x68)),0x4c,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c023e04(iVar8 * 0x4c + -0x73d7a668,((undefined1 *)(fr0_ - 0x68)),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 116)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7));
      }
      for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
        *(char *)(unsigned)(iVar8 * 0x4c + iVar7 * 4 + -0x73d7a659) =
             (char)*(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c);
      }
    }
  }
  for (iVar8 = 0; iVar8 < 10; iVar8 = iVar8 + 1) {
    if (*(int *)(unsigned)(ar4 + 0x1710) < (int)ar6) {
      ar7 = 4;
      ar6_00 = (code *)(iVar8 * 0x4c + -0x73d7a65c);
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c016464(iVar8 * 0x44 + ar4 + 0x9c4,((undefined1 *)(unsigned)0x8c13b474),ar6_00,4));
    }
    else if (*(int *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) < 2) {
      iVar6 = iVar6 + 1;
      *(undefined4 *)(unsigned)(iVar8 * 0x4c + -0x73d7a64c) = 0;
    }
    else {
      ar7 = 4;
      ar6_00 = (code *)(iVar8 * 0x4c + -0x73d7a65c);
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c016464(iVar8 * 0x44 + ar4 + 0x9c4,((undefined1 *)(unsigned)0x8c13b474),ar6_00,4));
    }
  }
  *(int *)(unsigned)(ar4 + 0x1710) = *(int *)(unsigned)(ar4 + 0x1710) + 1;
  if (iVar6 == 10) {
    *(undefined4 *)(unsigned)(ar4 + 0x170c) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x1710) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(&(*(float *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7));
  return (uint)(iVar6 == 10);
}

__asm__(".globl _FUN_8c0ae84c\n.set _FUN_8c0ae84c, _FUN_8c0ae84c_def\n");
