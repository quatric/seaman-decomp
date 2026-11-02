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
undefined4 FUN_8c0b5098_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b5098";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 152; for (int i_ = 0; i_ < 152; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  double in_dr0 = 0;
  double dVar7;
  double dVar8;
  undefined4 in_fr5 = 0;
  undefined8 in_xd0 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  uVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x328) = 0xffffffff;
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 152)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (iVar2 == 1) {
        ar5 = 0x15;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 152)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x15,ar6,ar7));
        if (cVar10 == '\0') {
          dVar8 = CONCAT44D((float)iVar2,in_fr5);
        }
        else {
          dVar8 = (double)iVar2;
        }
        dVar7 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (cVar10 == '\0') {
          bVar9 = F32HI(dVar8) < 0.0;
        }
        else {
          bVar9 = dVar8 < dVar7;
        }
        if (bVar9) {
          if (cVar11 == '\0') {
            dVar7 = (double)((ulonglong)in_dr0 & 0xffffffff);
          }
          else {
            dVar7 = -8.399317239676898e-251;
          }
        }
        in_dr0 = (double)(D2U(dVar7) & 0xffffffff);
        (vsp = ((unsigned long)(fr0_ - 152)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 300) = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x32c) = 0;
        uVar4 = 0;
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c03f39c(uVar3,ar5,ar6,ar7));
      }
      else {
        ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7); });
        dVar8 = in_dr0;
        if (cVar11 == '\0') {
          (*(double *)(fr0_ - 0x74)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x74))+4)),(int)((ulonglong)in_dr0 >> 0x20));
          dVar8 = (*(double *)(fr0_ - 0x74));
        }
        (*(double *)(fr0_ - 0x74)) = dVar8;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 152)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x15,ar6,ar7));
        uVar3 = SUB84(in_dr0,0);
        ar5 = (vsp = ((unsigned long)(fr0_ - 152)), libgcc_divide_helper_0101e4(iVar2 + -1,8,ar6,ar7));
        in_dr0 = (*(double *)(fr0_ - 0x74));
        if (cVar11 == '\0') {
          in_dr0 = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x74))+0)),uVar3);
        }
        if (cVar10 == '\0') {
          iVar2 = (int)F32HI(in_dr0);
        }
        else {
          iVar2 = (int)in_dr0;
        }
        iVar2 = (vsp = ((unsigned long)(fr0_ - 152)), libgcc_divide_helper_01031c(iVar2,ar5,ar6,ar7));
        if (iVar2 == 0) {
          iVar2 = *(int *)(unsigned)(ar4 + 0x32c);
          *(int *)(unsigned)(ar4 + 0x32c) = iVar2 + 1;
          *(int *)(unsigned)(ar4 + 0x328) = iVar2;
        }
      }
    }
    else if (iVar2 == 2) {
      uVar4 = 0;
    }
    goto LAB_8c0b51e6;
  }
  ar5 = 0x15;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c034148(ar4 + 0xb0,0x15,ar6,ar7));
  uVar5 = SUB84(in_dr0,0);
  if (iVar2 == 1) {
LAB_8c0b50fa:
    *(undefined4 *)(unsigned)(ar4 + 0x32c) = 0;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar2 == 2) {
    (vsp = ((unsigned long)(fr0_ - 152)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
    goto LAB_8c0b50fa;
  }
  in_dr0 = (double)(ulonglong)uVar5;
  if (cVar11 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x2c) = in_dr0;
  }
LAB_8c0b51e6:
  fVar6 = F32LO(in_dr0);
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c))); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_normalize(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_assign(((undefined1 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x3c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
  if (cVar11 == '\0') {
    fVar6 = *(float *)(unsigned)(ar4 + 0x2c);
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2c);
  }
  if (cVar10 == '\0') {
    fVar6 = fVar6 + 1.0;
  }
  else {
    fVar6 = SUB84(CONCAT44D(0x3f800000,fVar6) + CONCAT44D(0x3f800000,fVar6),0);
  }
  (*(undefined8 *)(fr0_ - 0x94)) = in_xd0;
  if (cVar11 == '\0') {
    (*(undefined8 *)(fr0_ - 0x94)) = CONCAT44(ar4,fVar6);
  }
  if (cVar11 == '\0') {
    *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x94))+4)) + 0x2c) = (undefined4)(*(undefined8 *)(fr0_ - 0x94));
    dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),(undefined4)(*(undefined8 *)(fr0_ - 0x94)));
  }
  else {
    *(undefined8 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x94))+4)) + 0x2c) = (*(undefined8 *)(fr0_ - 0x94));
    dVar8 = *(double *)(unsigned)(ar4 + 0x38);
    in_xd0 = (*(undefined8 *)(fr0_ - 0x94));
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar8) / F32HI(dVar8);
  }
  else {
    fVar6 = SUB84(dVar8 / dVar8,0);
  }
  if (cVar11 == '\0') {
    dVar8 = CONCAT44D(0x3dcccccd,fVar6);
  }
  else {
    dVar8 = 2.72127724290066e-312;
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar8) * F32HI(dVar8);
  }
  else {
    fVar6 = SUB84(dVar8 * dVar8,0);
  }
  uVar1 = in_xd0;
  if (cVar11 == '\0') {
    (*(undefined8 *)(fr0_ - 0x60)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x60))+4)),fVar6);
    uVar1 = (*(undefined8 *)(fr0_ - 0x60));
  }
  (*(undefined8 *)(fr0_ - 0x60)) = uVar1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x1c)),&(*(undefined8 *)(fr0_ - 0x60)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c023aa0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x4c)),ar6,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_normalize(ar4 + 0x14,uVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_assign(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x60)) + 4,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x60)) + 4,0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 152)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c0b5098\n.set _FUN_8c0b5098, _FUN_8c0b5098_def\n");
