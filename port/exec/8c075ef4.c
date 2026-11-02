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
undefined4 FUN_8c075ef4_def(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c075ef4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  bool bVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  int ar5_00;
  undefined4 uVar5;
  float fVar6;
  double in_dr0 = 0;
  code *pcVar8;
  double dVar7;
  double in_xd0 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = 1;
  iVar3 = *(int *)(unsigned)(ar4 + 300);
  if (iVar3 == 0) {
    uVar4 = 0;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c034148(ar4 + 0xb0,0,ar6,ar7));
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        if (iVar3 != 2) {
          return 1;
        }
        (vsp = ((unsigned long)(fr0_ - 76)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6,ar7));
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
  }
  else {
    if (iVar3 == 1) {
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c031748(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02a1fc(ar4 + 0x264,ar5,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x1c)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      if (cVar11 == '\0') {
        fVar6 = F32HI(in_dr0);
        pcVar8 = (code *)0x42340000;
        in_dr0 = in_xd0;
      }
      else {
        fVar6 = 45.0;
        pcVar8 = ((void *)0x8c022cb0);
      }
      bVar1 = cVar10 != '\0';
      bVar9 = fVar6 <= (float)(uint)pcVar8;
      ar5 = (undefined *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
      if (bVar1 || bVar9) {
        *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
      }
      else {
        ar5 = ((undefined1 *)(unsigned)0x8c125e68);
        uVar4 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x260) = uVar4;
      }
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02327c(ar4 + 0x14,ar5,ar6,ar7));
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),pcVar8);
        dVar2 = in_dr0;
      }
      else {
        dVar2 = CONCAT44D(pcVar8,fVar6);
        dVar7 = *(double *)(unsigned)(ar4 + 0x38);
      }
      if (cVar10 == '\0') {
        fVar6 = F32LO(dVar7) / F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(0xbf800000,fVar6);
      }
      else {
        dVar7 = -8.625520112574138e-251;
      }
      if (cVar10 == '\0') {
        fVar6 = F32HI(dVar7);
        in_dr0 = CONCAT44D(fVar6,F32LO(dVar7) * fVar6);
      }
      else {
        in_dr0 = dVar7 * dVar7;
      }
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0x268) = SUB84(in_dr0,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x268) = dVar2;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    }
    else if (iVar3 != 2) {
      return 1;
    }
    fVar6 = F32HI(in_dr0);
    iVar3 = *(int *)(unsigned)(ar4 + 0x260);
    if (iVar3 == 0) {
      (vsp = ((unsigned long)(fr0_ - 76)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
        (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03c314(ar4,ar5,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar5 = 0;
      }
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      if (cVar11 == '\0') {
        pcVar8 = (code *)0x42aa0000;
      }
      else {
        fVar6 = 85.0;
        pcVar8 = ((void *)0x8c02b5fc);
      }
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
      if (cVar10 != '\0' || fVar6 <= (float)(uint)pcVar8) {
        if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
          ar5_00 = *(int *)(unsigned)(ar4 + 0x260) + 2;
          iVar3 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c034148(ar4 + 0xb0,ar5_00,ar6,ar7));
          if (iVar3 != 0) {
            (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03c314(ar4,ar5_00,ar6,ar7));
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            uVar5 = 0;
          }
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 76)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6,ar7));
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 76)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 76)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x264,ar6,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x38)),ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 76)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x48)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 76)), object_dtor_delete(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
      }
    }
  }
  return uVar5;
}

__asm__(".globl _FUN_8c075ef4\n.set _FUN_8c075ef4, _FUN_8c075ef4_def\n");
