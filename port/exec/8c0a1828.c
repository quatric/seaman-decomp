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
undefined4 FUN_8c0a1828_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a1828";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *ar5_00;
  undefined4 *ar6_00;
  float fVar4;
  undefined8 in_dr0 = 0;
  float fVar7;
  double dVar5;
  undefined8 uVar6;
  undefined4 in_fr3 = 0;
  double dVar8;
  char cVar9;
  char cVar10;
  
  fVar4 = F32HI(in_dr0);
  cVar10 = '\0';
  cVar9 = '\0';
  iVar3 = *(int *)(unsigned)(ar4 + 0x40);
  if ((iVar3 < 6) && (-1 < iVar3)) {
    ar5_00 = ar5;
    ar6_00 = ar6;
                    
    switch(iVar3) {
    case 0:
      if (*(int *)(unsigned)(ar4 + 0x270) == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x270) = 0;
      }
      if (*(int *)(unsigned)(ar4 + 0x1b8) == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x18c) = *ar5;
        *(undefined4 *)(unsigned)(ar4 + 400) = ar5[1];
        *(undefined4 *)(unsigned)(ar4 + 0x194) = ar5[2];
        *(undefined4 *)(unsigned)(ar4 + 0x198) = *ar6;
        *(undefined4 *)(unsigned)(ar4 + 0x19c) = ar6[1];
        *(undefined4 *)(unsigned)(ar4 + 0x1a0) = ar6[2];
      }
      if (3.0 <= *(float *)(unsigned)(ar4 + 0x28)) {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x40400000;
      }
      if (*(int *)(unsigned)(ar4 + 0x124) == 2) {
        (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c031b68(ar4,0x8c2851b0,ar6,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c031b68(ar4,0x8c2851c8,ar6,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
      if (cVar10 == '\0') {
        uVar6 = CONCAT44(ar5[1],ar6[1]);
      }
      else {
        uVar6 = *(undefined8 *)(unsigned)(ar5 + 1);
      }
      if (cVar9 != '\0' || (float)uVar6 <= F32HI(uVar6)) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7));
        fVar4 = F32HI(uVar6);
        if (iVar3 != 9) {
          ar7 = 0;
          ar6_00 = (undefined4 *)(unsigned)0xffffffff;
          ar5_00 = (undefined4 *)(unsigned)0x9;
          (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7));
        }
      }
      else {
        ar7 = 0;
        ar6_00 = (undefined4 *)(unsigned)0x0;
        ar5_00 = (undefined4 *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0));
        fVar4 = F32HI(uVar6);
      }
      (vsp = ((unsigned long)(fr0_ - 80)), vec3_clear(ar4 + 0x90,ar5_00,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 80)), vec3_clear(ar4 + 0x224,ar5_00,ar6_00,ar7));
    case 1:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    case 3:
      iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7));
      if (iVar3 == 1) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7));
        if (iVar3 == 1) {
          if (cVar10 == '\0') {
            uVar6 = CONCAT44(ar5[1],ar6[1]);
          }
          else {
            uVar6 = *(undefined8 *)(unsigned)(ar5 + 1);
          }
          if (cVar9 == '\0' && (float)uVar6 < F32HI(uVar6)) {
            (vsp = ((unsigned long)(fr0_ - 80)), vec3_clear(ar4 + 0x224,ar5_00,ar6_00,ar7));
            ar7 = 0;
            (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0,0));
          }
        }
        else {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7); });
          if (cVar10 == '\0') {
            fVar7 = 15.0;
          }
          else {
            fVar4 = 15.0;
            fVar7 = 35.0;
          }
          if (cVar9 != '\0' || fVar7 <= fVar4) {
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7); });
            if (cVar10 == '\0') {
              fVar4 = 35.0;
            }
            else {
              fVar7 = 35.0;
              fVar4 = 7.73517e-43;
            }
            if (cVar9 == '\0' && fVar7 < fVar4) {
              if (cVar10 == '\0') {
                dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x228),in_fr3);
                dVar5 = CONCAT44D(0x41a00000,(*(undefined4 *)(unsigned)(unsigned)0x8c13af4c));
              }
              else {
                dVar8 = *(double *)(unsigned)(ar4 + 0x228);
                dVar5 = 3.954695087201342e+231;
              }
              if (cVar9 == '\0') {
                dVar8 = CONCAT44D(F32HI(dVar8) +
                                         F32LO(dVar5) / F32HI(dVar5),
                                         SUB84(dVar8,0));
              }
              else {
                dVar8 = dVar8 + dVar5 / dVar5;
              }
              if (cVar10 == '\0') {
                *(int *)(unsigned)(ar4 + 0x228) = (int)(D2U(dVar8) >> 0x20);
              }
              else {
                *(double *)(unsigned)(ar4 + 0x228) = dVar8;
              }
            }
            else {
              if (cVar10 == '\0') {
                dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x228),in_fr3);
                dVar5 = CONCAT44D(0x41c80000,(*(undefined4 *)(unsigned)(unsigned)0x8c13af4c));
              }
              else {
                dVar8 = *(double *)(unsigned)(ar4 + 0x228);
                dVar5 = 2.8113808922932564e+173;
              }
              if (cVar9 == '\0') {
                dVar8 = CONCAT44D(F32HI(dVar8) -
                                         F32LO(dVar5) / F32HI(dVar5),
                                         SUB84(dVar8,0));
              }
              else {
                dVar8 = dVar8 - dVar5 / dVar5;
              }
              if (cVar10 == '\0') {
                *(int *)(unsigned)(ar4 + 0x228) = (int)(D2U(dVar8) >> 0x20);
              }
              else {
                *(double *)(unsigned)(ar4 + 0x228) = dVar8;
              }
            }
          }
        }
      }
      else if (iVar3 == 9) {
        if (cVar10 == '\0') {
          uVar6 = CONCAT44(ar5[1],ar6[1]);
        }
        else {
          uVar6 = *(undefined8 *)(unsigned)(ar5 + 1);
        }
        if (cVar9 != '\0' || (float)uVar6 <= F32HI(uVar6)) {
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 80)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7));
          ar7 = 0;
          uVar2 = 0;
          uVar1 = 1;
          (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0));
          (vsp = ((unsigned long)(fr0_ - 80)), vec3_clear(ar4 + 0x224,uVar1,uVar2,ar7));
        }
      }
      else {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7));
        if (iVar3 == 1) {
          if (cVar10 == '\0') {
            uVar6 = CONCAT44(ar5[1],ar6[1]);
          }
          else {
            uVar6 = *(undefined8 *)(unsigned)(ar5 + 1);
          }
          if (cVar9 != '\0' || (float)uVar6 <= F32HI(uVar6)) {
            ar7 = 0;
            (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0,0));
          }
          else {
            ar7 = 0;
            (vsp = ((unsigned long)(fr0_ - 80)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0));
          }
        }
      }
      break;
    case 4:
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c03f3ac(ar4 + 0xb0,ar5,ar6,ar7));
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c031764(ar4,ar6,ar5,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x24))); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); FUN_8c0230f0(ar4 + 0x14,ar6,ar5,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_length(((undefined1 *)(fr0_ - 0x24)),ar6,ar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x80,uVar2,ar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar5,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0a1828\n.set _FUN_8c0a1828, _FUN_8c0a1828_def\n");
