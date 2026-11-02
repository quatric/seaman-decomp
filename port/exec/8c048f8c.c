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
undefined4 FUN_8c048f8c_def(ulonglong *ar4,undefined4 ar5,int ar6,ulonglong *ar7)

{
  ring[rp++ & 255] = "FUN_8c048f8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 304; for (int i_ = 0; i_ < 304; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 *ar5_00;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  double in_dr0 = 0;
  ulonglong uVar8;
  float fVar11;
  undefined8 uVar9;
  double dVar10;
  undefined8 in_dr6 = 0;
  double in_dr14 = 0;
  ulonglong in_xd0 = 0;
  bool bVar12;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  uVar5 = (undefined4)((ulonglong)in_dr6 >> 0x20);
  uVar6 = 1;
  uVar4 = ar5;
  iVar2 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); Vec3_sub(ar6,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_normalize(((undefined1 *)(fr0_ - 0x54)),uVar4,iVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x64)),iVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,iVar2,ar7));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,iVar2,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c0230f0((undefined4 *)(unsigned)((int)ar4 + 0x14),uVar4,iVar2,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x34)),uVar4,iVar2,ar7); });
  (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x74)),((undefined1 *)(fr0_ - 0x84)),iVar2,ar7));
  (*(float *)(fr0_ - 0xe0)) = SUB84(in_dr0,0);
  fVar7 = F32HI(in_dr0);
  if (cVar14 == '\0') {
    (*(float *)(fr0_ - 0xe0)) = fVar7;
    fVar7 = ((float *)(fr0_ - 0xdc))[0];
  }
  ((float *)(fr0_ - 0xdc))[0] = fVar7;
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,iVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,iVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x44)),ar5,iVar2,ar7));
  ar5_00 = (undefined4 *)(unsigned)((int)ar4 + 0x14);
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign(ar4 + 0x10,ar5_00,iVar2,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 304)), get_field_1c_026dd8(ar4 + 0x16,ar5_00,iVar2,ar7));
  fVar7 = F32LO(in_dr0);
  if (iVar1 == 5) {
    if (cVar14 == '\0') {
      in_dr14 = 402653249.1875;
      in_dr0 = CONCAT44D(0x40a00000,fVar7);
    }
    else {
      in_dr14 = 2048.000501394272;
      in_dr0 = 2.97615090336666e-312;
      (*(float *)(fr0_ - 0xe0)) = 1.96182e-43;
    }
    (*(float *)(fr0_ - 0xe4)) = 5.0;
  }
  else if (iVar1 == 6) {
    in_dr0 = CONCAT44D(0x3f800000,fVar7);
    if (cVar14 == '\0') {
      (*(float *)(fr0_ - 0xe4)) = 1.0;
      in_dr14 = 402653249.1875;
    }
    else {
      (*(float *)(fr0_ - 0xe0)) = 1.0;
      in_dr14 = 2.97624156480792e-312;
      (*(float *)(fr0_ - 0xe4)) = fVar7;
    }
  }
  else if (iVar1 == 10) {
    if (cVar14 == '\0') {
      in_dr14 = 33554440.1484375;
    }
    else {
      in_dr14 = -8.977643917409603e-251;
    }
  }
  iVar1 = (int)ar4[8];
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c05c28c(ar4,ar5_00,iVar2,ar7));
      if (iVar1 != 0) {
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,iVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,iVar2,ar7));
        return 1;
      }
      if (cVar14 == '\0') {
        fVar7 = F32LO(in_dr0);
        *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x455ac000;
      }
      else {
        fVar7 = 3500.0;
        ar4[0x44] = 0x8c031bb4455ac000;
      }
      iVar1 = ar6;
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
      uVar4 = 0x8c2803f4;
      iVar2 = (int)ar4[0x25] * 0x18 + -0x73d7fc0c;
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c031b68(ar4,iVar2,iVar1,0x8c2803f4));
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c03c314(ar4,iVar2,iVar1,uVar4));
      if (cVar14 == '\0') {
        fVar7 = *(float *)(unsigned)((int)ar4 + 0x24);
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
      }
      uVar8 = (ulonglong)(uint)fVar7;
      if (fVar7 == 0.0) {
        if (cVar14 == '\0') {
          dVar10 = CONCAT44D(0x41a00000,fVar7);
          *(undefined4 *)(unsigned)(ar4 + 6) = 0x41a00000;
        }
        else {
          dVar10 = 4.67383042659946e-312;
          ar4[6] = 0xdc41a00000;
        }
      }
      else {
        iVar2 = ar6;
        (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022fc0(ar5,ar6,iVar1,uVar4));
        if (cVar14 == '\0') {
          dVar10 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x24),(int)(uVar8 >> 0x20));
        }
        else {
          dVar10 = *(double *)(unsigned)((int)ar4 + 0x24);
          in_xd0 = uVar8;
        }
        if (cVar13 == '\0') {
          dVar10 = (double)(ulonglong)(uint)(F32LO(dVar10) / F32HI(dVar10));
        }
        else {
          dVar10 = dVar10 / dVar10;
        }
        if (cVar14 == '\0') {
          *(int *)(unsigned)(ar4 + 6) = SUB84(dVar10,0);
        }
        else {
          ar4[6] = in_xd0;
        }
      }
      uVar8 = D2U(dVar10) & 0xffffffff;
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)((int)ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x2c) = uVar8;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c0230f0((undefined4 *)(unsigned)((int)ar4 + 0x14),iVar2,iVar1,uVar4); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x34)),iVar2,iVar1,uVar4); });
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(fr0_ - 0xa4)),iVar1,uVar4));
      if (cVar14 == '\0') {
        *(int *)(unsigned)((int)ar4 + 0x224) = (int)(uVar8 >> 0x20);
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x224) = uVar8;
      }
      (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,iVar1,uVar4));
      (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,iVar1,uVar4));
      if (cVar14 == '\0') {
        uVar8 = CONCAT44((int)ar4[0x44],*(undefined4 *)(unsigned)((int)ar4 + 0x24));
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
        uVar8 = ar4[0x44];
      }
      if (cVar13 == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 304)), rand_range(ar4,0,2,uVar4));
        ar7 = (ulonglong *)(unsigned)0x0;
        uVar4 = 0xffffffff;
        iVar2 = iVar2 + 5;
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,iVar2,0xffffffff,0));
      }
      else {
        ar7 = (ulonglong *)(unsigned)0x0;
        uVar4 = 0xffffffff;
        iVar2 = 10;
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,10,0xffffffff,0));
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 304)), get_field_1c_026dd8(ar4 + 0x16,iVar2,uVar4,ar7));
      if (iVar1 == 5) {
        if (cVar14 != '\0') {
          (*(float *)(fr0_ - 0xe0)) = 1.96182e-43;
        }
      }
      else if ((iVar1 == 6) && (cVar14 != '\0')) {
        (*(float *)(fr0_ - 0xe0)) = 1.0;
      }
      if (*(int *)(unsigned)((int)ar4 + 0x124) == 0x11) {
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)((int)ar4 + 0x24) = 0x40c00000;
        }
        else {
          *(undefined8 *)(unsigned)((int)ar4 + 0x24) = 0xb040c00000;
        }
      }
      puVar3 = ar4 + 0x16;
      (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetFrame_033e6e(puVar3,iVar2,uVar4,ar7));
      *(undefined4 *)(unsigned)(ar4 + 8) = 1;
      if (cVar14 == '\0') {
        uVar8 = CONCAT44(0x42340000,(*(float *)(fr0_ - 0xe0)));
      }
      else {
        in_xd0 = CONCAT44(((float *)(fr0_ - 0xdc))[0],(*(float *)(fr0_ - 0xe0)));
        uVar8 = 0x8c01420042340000;
      }
      if (cVar13 == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
        uVar5 = (vsp = ((unsigned long)(fr0_ - 304)), rand(puVar3,iVar2,uVar4,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 304)), libgcc_divide_helper_01031c(uVar5,8,uVar4,ar7));
        *(int *)(unsigned)(ar4 + 0x50) = iVar2 + 8;
        *(undefined4 *)(unsigned)(ar4 + 8) = 3;
        break;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)((int)ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x2c) = uVar8 & 0xffffffff;
      }
      ar7 = (ulonglong *)(unsigned)0x0;
      iVar2 = -1;
      ar5_00 = (undefined4 *)(unsigned)0x6;
      (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,6,0xffffffff,0));
      *(undefined4 *)(unsigned)(ar4 + 0x50) = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x4f) = 0x3f000000;
      }
      else {
        ar4[0x4f] = 0x2b83f000000;
      }
      *(undefined4 *)(unsigned)(ar4 + 8) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x57) = 3;
    case 1:
      if (cVar14 == '\0') {
        fVar7 = 90.0;
      }
      else {
        in_xd0 = CONCAT44(((float *)(fr0_ - 0xdc))[0],(*(float *)(fr0_ - 0xe0)));
        (*(float *)(fr0_ - 0xe0)) = 90.0;
        fVar7 = 3.0;
      }
      if (cVar13 == '\0' && fVar7 < (*(float *)(fr0_ - 0xe0))) {
        if (cVar14 == '\0') {
          fVar7 = *(float *)(unsigned)(ar4 + 5);
          fVar11 = 3.0;
        }
        else {
          in_xd0 = ar4[5];
          fVar7 = 3.0;
          fVar11 = 0.05;
        }
        if (cVar13 != '\0' || fVar7 <= fVar11) {
          if (cVar14 == '\0') {
            dVar10 = CONCAT44D(0x3d4ccccd,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 6.20130889485342e-312;
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar10) + F32HI(dVar10);
          }
          else {
            fVar7 = SUB84(dVar10 + dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)(ar4 + 5) = fVar7;
          }
          else {
            ar4[5] = in_xd0;
          }
        }
        else {
          if (cVar14 == '\0') {
            dVar10 = CONCAT44D(0x3d4ccccd,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 8.741916293825089e+86;
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar10) - F32HI(dVar10);
          }
          else {
            fVar7 = SUB84(dVar10 - dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)(ar4 + 5) = fVar7;
          }
          else {
            ar4[5] = in_xd0;
          }
        }
        iVar1 = ar6;
        if (*(int *)(unsigned)((int)ar4 + 0x124) == 0x11) {
          (vsp = ((unsigned long)(fr0_ - 304)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xb0)),ar5_00,iVar2,ar7));
          ar7 = (ulonglong *)(unsigned)((int)ar4 + 0x14);
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c031eb0(ar4,ar5,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign((undefined4 *)(unsigned)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0xc0)),iVar1,ar7));
          (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,iVar1,ar7));
          uVar4 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 304)), object_dtor_delete(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,iVar1,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 304)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xcc)),ar5_00,iVar2,ar7));
          ar7 = (ulonglong *)(unsigned)((int)ar4 + 0x14);
          ({ unsigned long t0_ = (unsigned long)(((float *)(fr0_ - 0xdc))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c031eb0(ar4,ar5,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign((undefined4 *)(unsigned)((int)ar4 + 0x14),((float *)(fr0_ - 0xdc)),iVar1,ar7));
          (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((float *)(fr0_ - 0xdc)),0xffffffff,iVar1,ar7));
          uVar4 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 304)), object_dtor_delete(((undefined1 *)(fr0_ - 0xcc)),0xffffffff,iVar1,ar7));
        }
        if (cVar14 == '\0') {
          dVar10 = CONCAT44D(0x3e99999a,(int)ar4[0x4f]);
        }
        else {
          in_xd0 = ar4[0x4f];
          dVar10 = 8192.001910400391;
        }
        if (cVar13 == '\0') {
          fVar7 = F32LO(dVar10) + F32HI(dVar10);
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar14 == '\0') {
          *(float *)(unsigned)(ar4 + 0x4f) = fVar7;
          fVar7 = *(float *)(unsigned)(ar4 + 0x4f);
          fVar11 = 6.0;
        }
        else {
          ar4[0x4f] = in_xd0;
          fVar7 = 6.0;
          fVar11 = 24.0;
        }
        if (cVar13 == '\0' && fVar11 < fVar7) {
          if (cVar14 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x4f) = 0x40c00000;
          }
          else {
            ar4[0x4f] = 0x41c0000040c00000;
          }
        }
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,uVar4,iVar1,ar7));
      }
      else {
        ar7 = (ulonglong *)(unsigned)0x0;
        uVar5 = 0xffffffff;
        uVar4 = 5;
        puVar3 = ar4 + 0x16;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(puVar3,5,0xffffffff,0));
        if (iVar2 != 6) {
          puVar3 = ar4 + 0x16;
          (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetFrame_033e6e(puVar3,uVar4,uVar5,ar7));
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x12) = 0;
        }
        else {
          ar4[0x12] = (ulonglong)(uint)(*(float *)(fr0_ - 0xe0));
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x13) = 0;
        }
        else {
          ar4[0x13] = (ulonglong)(uint)(*(float *)(fr0_ - 0xe0));
        }
        *(undefined4 *)(unsigned)(ar4 + 8) = 3;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 304)), rand(puVar3,uVar4,uVar5,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 304)), libgcc_divide_helper_01031c(uVar4,8,uVar5,ar7));
        *(int *)(unsigned)(ar4 + 0x50) = iVar2 + 8;
      }
      break;
    case 3:
      if (*(int *)(unsigned)((int)ar4 + 0x124) == 0x11) {
        if (cVar14 == '\0') {
          in_dr0 = (double)(ulonglong)(uint)ar4[0x4f];
        }
        else {
          in_xd0 = ar4[0x4f];
        }
        dVar10 = CONCAT44D(0x3f800000,SUB84(in_dr0,0));
        if (cVar13 == '\0') {
          fVar7 = F32LO(in_dr0) + 1.0;
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar14 == '\0') {
          *(float *)(unsigned)(ar4 + 0x4f) = fVar7;
          dVar10 = CONCAT44D(0x3f000000,(int)ar4[5]);
        }
        else {
          ar4[0x4f] = in_xd0;
          in_xd0 = ar4[5];
          dVar10 = 3.73993469111571e-312;
        }
        if (cVar13 == '\0') {
          fVar7 = F32LO(dVar10) + F32HI(dVar10);
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar14 == '\0') {
          *(float *)(unsigned)(ar4 + 5) = fVar7;
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x24),(int)ar4[5]);
        }
        else {
          ar4[5] = in_xd0;
          in_xd0 = ar4[5];
          in_dr0 = *(double *)(unsigned)((int)ar4 + 0x24);
        }
        if (cVar13 == '\0' && F32HI(in_dr0) < SUB84(in_dr0,0)) {
          if (cVar14 == '\0') {
            uVar4 = *(undefined4 *)(unsigned)((int)ar4 + 0x24);
            in_dr0 = CONCAT44D(uVar4,SUB84(in_dr0,0));
            *(undefined4 *)(unsigned)(ar4 + 5) = uVar4;
          }
          else {
            in_dr0 = *(double *)(unsigned)((int)ar4 + 0x24);
            ar4[5] = (ulonglong)in_dr0;
          }
        }
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 304)), get_field_1c_026dd8(ar4 + 0x16,ar4 + 0x16,iVar2,ar7));
      if ((iVar1 == 5) || (iVar1 == 6)) {
        ({ unsigned long ri0_ = (unsigned long)(uVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 304)); CAnimBody_GetCurFrame(ar4 + 0x16,iVar1,iVar2,ar7); });
        if (cVar13 == '\0') {
          bVar12 = SUB84(in_dr14,0) < F32HI(in_dr0);
        }
        else {
          bVar12 = in_dr14 < in_dr0;
        }
        if (bVar12) {
          if (cVar14 == '\0') {
            dVar10 = CONCAT44D(0x3d4ccccd,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 1.268568884059579e+106;
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar10) + F32HI(dVar10);
          }
          else {
            fVar7 = SUB84(dVar10 + dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)(ar4 + 5) = fVar7;
            uVar9 = CONCAT44(*(undefined4 *)(unsigned)((int)ar4 + 0x24),(int)ar4[5]);
          }
          else {
            ar4[5] = in_xd0;
            in_xd0 = ar4[5];
            uVar9 = *(undefined8 *)(unsigned)((int)ar4 + 0x24);
          }
          puVar3 = (ulonglong *)(unsigned)((int)ar4 + 0x24);
          if (cVar13 == '\0' && F32HI(uVar9) < (float)uVar9) {
            if (cVar14 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 5) = *(undefined4 *)(unsigned)((int)ar4 + 0x24);
            }
            else {
              ar4[5] = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
            }
          }
        }
        else {
          puVar3 = ar4 + 5;
          if (cVar14 == '\0') {
            dVar10 = CONCAT44D(0x3d4ccccd,(int)*puVar3);
          }
          else {
            in_xd0 = *puVar3;
            dVar10 = 1.34160945841353e-311;
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar10) - F32HI(dVar10);
          }
          else {
            fVar7 = SUB84(dVar10 - dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)(ar4 + 5) = fVar7;
            fVar7 = *(float *)(unsigned)(ar4 + 5);
          }
          else {
            ar4[5] = in_xd0;
            in_xd0 = ar4[5];
          }
          if (cVar13 == '\0' && fVar7 < 0.0) {
            if (cVar14 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 5) = 0;
            }
            else {
              ar4[5] = (ulonglong)(uint)fVar7;
            }
          }
        }
        if (cVar14 == '\0') {
          fVar7 = *(float *)(unsigned)(ar4 + 0x4f);
        }
        else {
          in_xd0 = ar4[0x4f];
          fVar7 = (*(float *)(fr0_ - 0xe4));
          (*(float *)(fr0_ - 0xe4)) = (*(float *)(fr0_ - 0xe0));
        }
        if (cVar13 != '\0' || fVar7 <= (*(float *)(fr0_ - 0xe4))) {
          if (cVar14 == '\0') {
            in_dr0 = CONCAT44D(0x3e19999a,(int)ar4[0x4f]);
          }
          else {
            in_xd0 = ar4[0x4f];
            in_dr0 = 1.3585920559782e-311;
          }
          if (cVar13 == '\0') {
            fVar7 = F32HI(in_dr0);
            in_dr0 = CONCAT44D(fVar7,F32LO(in_dr0) + fVar7);
          }
          else {
            in_dr0 = in_dr0 + in_dr0;
          }
          if (cVar14 == '\0') {
            *(int *)(unsigned)(ar4 + 0x4f) = SUB84(in_dr0,0);
          }
          else {
            ar4[0x4f] = in_xd0;
          }
        }
        else {
          if (cVar14 == '\0') {
            in_dr0 = CONCAT44D(0x3e19999a,(int)ar4[0x4f]);
          }
          else {
            in_xd0 = ar4[0x4f];
            in_dr0 = 2.6866146507523e+96;
          }
          if (cVar13 == '\0') {
            fVar7 = F32HI(in_dr0);
            in_dr0 = CONCAT44D(fVar7,F32LO(in_dr0) - fVar7);
          }
          else {
            in_dr0 = in_dr0 - in_dr0;
          }
          puVar3 = ar4;
          if (cVar14 == '\0') {
            *(int *)(unsigned)(ar4 + 0x4f) = SUB84(in_dr0,0);
          }
          else {
            ar4[0x4f] = in_xd0;
          }
        }
        if ((int)ar4[0x50] < 1) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,puVar3,iVar2,ar7));
          if (iVar1 == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x57) = 2;
            ar7 = (ulonglong *)(unsigned)0x0;
            iVar2 = -1;
            uVar4 = 0;
            (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0,0xffffffff,0));
            (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar4,iVar2,ar7));
            *(undefined4 *)(unsigned)(ar4 + 0x50) = 0;
          }
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,puVar3,iVar2,ar7));
          if (iVar1 == 1) {
            *(int *)(unsigned)(ar4 + 0x50) = (int)ar4[0x50] + -1;
          }
        }
      }
      else {
        (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x12c))+4)) = (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,iVar1,iVar2,ar7));
        if ((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x12c))+4)) == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x57) = 2;
          *(undefined4 *)(unsigned)(ar4 + 8) = 5;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022fc0(ar5,ar6,iVar2,ar7));
      if (cVar14 == '\0') {
        (*(undefined8 *)(fr0_ - 0x12c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x12c))+4)),(int)((ulonglong)in_dr0 >> 0x20));
        dVar10 = CONCAT44D((int)ar4[9],(int)ar4[5]);
      }
      else {
        in_xd0 = ar4[5];
        dVar10 = (double)ar4[9];
        (*(undefined8 *)(fr0_ - 0x12c)) = in_dr0;
      }
      if (cVar13 == '\0') {
        fVar7 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar14 == '\0') {
        (*(undefined8 *)(fr0_ - 0x12c)) = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x12c)),fVar7);
      }
      if (cVar13 != '\0' || F32HI((*(undefined8 *)(fr0_ - 0x12c))) <= SUB84((*(undefined8 *)(fr0_ - 0x12c)),0)) {
        uVar8 = (ulonglong)(*(undefined8 *)(fr0_ - 0x12c)) & 0xffffffff;
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)((int)ar4 + 0x2c) = 0;
          uVar8 = (ulonglong)(uint)ar4[7];
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x2c) = uVar8;
          in_xd0 = ar4[7];
        }
        if ((float)uVar8 == 0.0) {
          if (cVar14 == '\0') {
            dVar10 = CONCAT44D(0x41a00000,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 1.0392155376404425e+106;
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar10) / F32HI(dVar10);
          }
          else {
            fVar7 = SUB84(dVar10 / dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)((int)ar4 + 0x3c) = fVar7;
          }
          else {
            *(ulonglong *)(unsigned)((int)ar4 + 0x3c) = in_xd0;
          }
        }
        else {
          if (cVar14 == '\0') {
            dVar10 = CONCAT44D((int)ar4[7],(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = (double)ar4[7];
          }
          if (cVar13 == '\0') {
            fVar7 = F32LO(dVar10) / F32HI(dVar10);
          }
          else {
            fVar7 = SUB84(dVar10 / dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(unsigned)((int)ar4 + 0x3c) = fVar7;
          }
          else {
            *(ulonglong *)(unsigned)((int)ar4 + 0x3c) = in_xd0;
          }
        }
        ar7 = (ulonglong *)(unsigned)0x40;
        *(undefined4 *)(unsigned)(ar4 + 8) = 4;
      }
      break;
    case 4:
      if (cVar14 == '\0') {
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x3c),(int)ar4[5]);
      }
      else {
        in_xd0 = ar4[5];
        dVar10 = *(double *)(unsigned)((int)ar4 + 0x3c);
      }
      if (cVar13 == '\0') {
        fVar7 = F32LO(dVar10) - F32HI(dVar10);
      }
      else {
        fVar7 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar14 == '\0') {
        *(float *)(unsigned)(ar4 + 5) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 5);
      }
      else {
        ar4[5] = in_xd0;
      }
      if (cVar13 == '\0' && fVar7 < 0.0) {
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 5) = 0;
        }
        else {
          ar4[5] = (ulonglong)(uint)fVar7;
        }
      }
      ar7 = ar4 + 0x4f;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,((void *)0x8c033b98),0xb0,ar7));
      if (iVar2 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x57) = 2;
        uVar6 = 0;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c051a68(ar4,ar6,ar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar5,ar7));
  return uVar6;
}

__asm__(".globl _FUN_8c048f8c\n.set _FUN_8c048f8c, _FUN_8c048f8c_def\n");
