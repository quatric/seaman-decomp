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
undefined4 FUN_8c08248c_def(int ar4,int ar5,undefined4 *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c08248c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 196; for (int i_ = 0; i_ < 196; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *ar5_00;
  undefined4 uVar5;
  int *ar7_00;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  double in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = 1;
  ar7_00 = ar7;
  puVar2 = ar6;
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  pcVar4 = ((void *)0x8c022c4c);
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),((void *)0x8c022c4c),ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),pcVar4,ar6,ar7_00));
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x3f99999a,*(undefined4 *)(unsigned)(ar4 + 0x48));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
    dVar8 = 7.971355768799707e+24;
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar8) * F32HI(dVar8);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0x451a6000,fVar7);
  }
  else {
    dVar8 = 8.23907165070957e-312;
  }
  if (cVar11 == '\0') {
    dVar8 = CONCAT44D(F32HI(dVar8) - F32LO(dVar8),SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 - dVar8;
  }
  uVar5 = (undefined4)(D2U(dVar8) >> 0x20);
  (*(undefined4 *)(fr0_ - 0x24)) = uVar5;
  if (cVar12 != '\0') {
    (*(undefined4 *)(fr0_ - 0x24)) = SUB84(dVar8,0);
    (*(float *)(fr0_ - 0x20)) = (float)uVar5;
  }
  (vsp = ((unsigned long)(fr0_ - 196)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x184))))(ar7,*ar7,ar6,ar7_00));
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x42480000,(int)(D2U(dVar8) >> 0x20));
    dVar8 = in_xd0;
  }
  else {
    dVar9 = 5.69244280312755e-312;
  }
  if (cVar11 == '\0') {
    (*(float *)(fr0_ - 0x20)) = F32LO(dVar9) - F32HI(dVar9);
  }
  else {
    (*(float *)(fr0_ - 0x20)) = SUB84(dVar9 - dVar9,0);
  }
  if (cVar12 == '\0') {
    uVar5 = 0x448e8000;
    fVar7 = (*(float *)(fr0_ - 0x20));
  }
  else {
    (*(float *)(fr0_ - 0x20)) = SUB84(dVar8,0);
    fVar7 = 1140.0;
    uVar5 = 0x110;
    (*(undefined4 *)(fr0_ - 0x18)) = 0x110;
  }
  (*(undefined4 *)(fr0_ - 0x1c)) = 0x448e8000;
  pcVar4 = ((void *)0x8c022ce8);
  (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x54)),((void *)0x8c022ce8),ar6,ar7_00));
  if (*(int *)(unsigned)(ar4 + 0x128) < 7) {
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7_00));
    uVar6 = 0;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 196)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x184))))(ar7,pcVar4,ar6,ar7_00));
    if (cVar12 == '\0') {
      uVar10 = CONCAT44(0x43200000,uVar5);
    }
    else {
      dVar8 = CONCAT44D(uVar5,fVar7);
      uVar10 = 0xd843200000;
    }
    if (cVar11 != '\0' || (float)uVar10 <= (float)(uVar10 >> 0x20)) {
      iVar3 = *(int *)(unsigned)(ar4 + 300);
      if ((iVar3 < 5) && (-1 < iVar3)) {
                    
        switch(iVar3) {
        case 0:
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(unsigned)(ar4 + 0x28);
            dVar9 = 3.73996784729797e-312;
          }
          if (cVar11 == '\0') {
            fVar7 = F32LO(dVar9) * F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x28) = fVar7;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x28) = dVar8;
          }
          iVar3 = (vsp = ((unsigned long)(fr0_ - 196)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar4,ar6,ar7_00));
          if (iVar3 == 1) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          }
          break;
        case 1:
          ar6 = &(*(undefined4 *)(fr0_ - 0x24));
          iVar3 = (vsp = ((unsigned long)(fr0_ - 196)), pure_virtual_stub(ar4,ar5,ar6,ar7_00));
          if (iVar3 == 0) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
            if (cVar12 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar10 & 0xffffffff;
            }
            *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xe;
          }
          break;
        case 2:
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(unsigned)(ar4 + 0x28);
            dVar9 = 4.24924683712963e-312;
          }
          if (cVar11 == '\0') {
            fVar7 = F32LO(dVar9) * F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x28) = fVar7;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x28) = dVar8;
          }
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); FUN_8c0230f0(ar4 + 0x14,pcVar4,ar6,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x64)),ar6,ar7_00));
          uVar5 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), vec3_clear(ar4 + 700,uVar5,ar6,ar7_00));
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),(*(float *)(fr0_ - 0x20)));
          }
          else {
            dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
            dVar9 = *(double *)(unsigned)(ar5 + 4);
          }
          if (cVar11 == '\0') {
            fVar7 = F32LO(dVar9) - F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 - dVar9,0);
          }
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(0x3c23d70a,fVar7);
          }
          else {
            dVar9 = 3.73969762439725e-312;
          }
          if (cVar11 == '\0') {
            fVar7 = F32LO(dVar9) * F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2c0) = fVar7;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x2c0) = dVar8;
          }
          iVar3 = (vsp = ((unsigned long)(fr0_ - 196)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar5,ar6,ar7_00));
          if ((iVar3 == 1) &&
             (iVar3 = *(int *)(unsigned)(ar4 + 0x294), *(int *)(unsigned)(ar4 + 0x294) = iVar3 + 1, 0 < iVar3)) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
          }
          break;
        case 3:
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(unsigned)(ar4 + 0x28);
            dVar9 = 1.4859225791956e-311;
          }
          if (cVar11 == '\0') {
            fVar7 = F32LO(dVar9) * F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x28) = fVar7;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x28) = dVar8;
          }
          (vsp = ((unsigned long)(fr0_ - 196)), vec3_clear(ar4 + 700,pcVar4,ar6,ar7_00));
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),(*(float *)(fr0_ - 0x20)));
          }
          else {
            dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
            dVar9 = *(double *)(unsigned)(ar5 + 4);
          }
          if (cVar11 == '\0') {
            fVar7 = F32LO(dVar9) - F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 - dVar9,0);
          }
          if (cVar12 == '\0') {
            dVar9 = CONCAT44D(0x3c23d70a,fVar7);
          }
          else {
            dVar9 = 4.58849594078336e-312;
          }
          if (cVar11 == '\0') {
            fVar7 = F32LO(dVar9) * F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x2c0) = fVar7;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x2c0) = dVar8;
          }
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x74)),((undefined1 *)(fr0_ - 0x54)),ar6,ar7_00));
          ar6 = (undefined4 *)(unsigned)0x1;
          iVar3 = (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x74)),1,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6,ar7_00));
          if (iVar3 == 0) {
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            ar7_00 = (int *)(unsigned)0x0;
            ar6 = (undefined4 *)(unsigned)0xffffffff;
            uVar5 = 0x32;
            (vsp = ((unsigned long)(fr0_ - 196)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x32,0xffffffff,0));
            uVar5 = (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c026db0(ar4,uVar5,ar6,ar7_00));
            uVar1 = (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6,ar7_00));
            puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 196)), deref_u32(uVar1,uVar5,ar6,ar7_00));
            uVar1 = puVar2[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar2;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar2[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1378e8);
            (vsp = ((unsigned long)(fr0_ - 196)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,ar6,ar7_00));
            *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
            (vsp = ((unsigned long)(fr0_ - 196)), vec3_clear(ar4 + 0x244,uVar5,ar6,ar7_00));
            if (cVar12 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)(uint)fVar7;
            }
          }
          break;
        case 4:
          (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c031748(ar4,pcVar4,ar6,ar7_00));
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2cc) = 1;
          ({ unsigned long ri0_ = (unsigned long)(puVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 196)); CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar4,ar6,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x84)),ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x244,ar6,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x94)),ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6,ar7_00));
          ar5_00 = ((undefined1 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_assign(ar4 + 0x244,ar5_00,ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xa4)),ar5_00,ar6,ar7_00));
          iVar3 = (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c023d04(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0xa4)),ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6,ar7_00));
          if (iVar3 != 0) {
            (vsp = ((unsigned long)(fr0_ - 196)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0xb0)),puVar2,ar6,ar7_00));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0xb0)),ar6,ar7_00); });
            (vsp = ((unsigned long)(fr0_ - 196)), Vec3_assign(ar4 + 700,((undefined1 *)(fr0_ - 0xc0)),ar6,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 196)), object_dtor_delete(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6,ar7_00));
          }
          iVar3 = CAnimBody_AdvanceFrame_wrapper
                            (ar4 + 0xb0,((void *)0x8c026858),ar6,ar7_00);
          if (iVar3 == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x2cc) = 0;
            uVar6 = 0;
            uVar5 = 0;
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            (vsp = ((unsigned long)(fr0_ - 196)), vec3_clear(ar4 + 0x244,0,ar6,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 196)), vec3_clear(ar4 + 700,uVar5,ar6,ar7_00));
            ar7_00 = (int *)(unsigned)0x0;
            ar6 = (undefined4 *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 196)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
            (vsp = ((unsigned long)(fr0_ - 196)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,ar6,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 196)), FUN_8c03c314(ar4,((void *)0x8c03c314),ar6,ar7_00));
            *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
          }
        }
      }
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7_00));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 196)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7_00));
      uVar6 = 0;
    }
  }
  return uVar6;
}

__asm__(".globl _FUN_8c08248c\n.set _FUN_8c08248c, _FUN_8c08248c_def\n");
