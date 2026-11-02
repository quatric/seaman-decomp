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
undefined4 FUN_8c0737fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0737fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0 = 0;
  double dVar6;
  code *pcVar7;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  uVar1 = ar5;
  uVar3 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); Vec3_sub(ar6,ar5,ar6,ar7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 128)), Vec3_length(((undefined1 *)(fr0_ - 0x3c)),uVar1,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x2c)),uVar1,uVar3,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar3,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar1,uVar3,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x2c)),uVar1,uVar3,ar7); });
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0x5c)),uVar3,ar7));
  if (cVar10 == '\0') {
    in_fr15 = F32HI(in_dr0);
  }
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,uVar3,ar7));
  ar5_00 = -1;
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,uVar3,ar7));
  iVar2 = *(int *)(unsigned)(ar4 + 0x40);
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c073c9c(ar4,ar5_00,uVar3,ar7));
      uVar3 = (undefined4)in_dr0;
      uVar1 = ar6;
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x42340000,uVar3);
      }
      else {
        dVar6 = 2.89140188323616e-312;
      }
      if (cVar9 == '\0') {
        bVar8 = in_fr15 < F32HI(dVar6);
      }
      else {
        bVar8 = CONCAT44D(in_fr14,in_fr15) < dVar6;
      }
      if (bVar8) {
        *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
      }
      else {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0x2c)),uVar1,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x220) = uVar1;
      }
      if (cVar10 == '\0') {
        in_dr0 = CONCAT44(0x40d9999a,*(undefined4 *)(unsigned)(ar4 + 0x24));
      }
      else {
        in_dr0 = 0x4093333340d9999a;
      }
      if (cVar9 == '\0' && (float)in_dr0 < F32HI(in_dr0)) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar1 = 1;
        (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
      }
      else {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar1 = 4;
        (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar3,ar7));
      ar5_00 = ar4 + 0x14;
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_assign(ar4 + 0x230,ar5_00,uVar3,ar7));
    case 1:
      fVar5 = F32HI(in_dr0);
      iVar2 = *(int *)(unsigned)(ar4 + 0x220);
      if (iVar2 == 0) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c034148(ar4 + 0xb0,0,uVar3,ar7));
        if (0 < iVar2) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
        }
      }
      else if ((iVar2 == 3) || (iVar2 == 4)) {
        (vsp = ((unsigned long)(fr0_ - 128)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,uVar3,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c0230f0(ar4 + 0x230,ar5_00,uVar3,ar7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,uVar3,ar7); });
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0x7c)),uVar3,ar7));
        if (cVar10 == '\0') {
          pcVar7 = (code *)0x40a00000;
        }
        else {
          fVar5 = 5.0;
          pcVar7 = ((void *)0x8c022cb0);
        }
        (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,uVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,uVar3,ar7));
        if (cVar9 != '\0' || (float)(uint)pcVar7 <= fVar5) {
          ar7 = 0;
          uVar1 = 0xffffffff;
          iVar2 = *(int *)(unsigned)(ar4 + 0x220) + 6;
          (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar2,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar2,uVar1,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
        }
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031764(ar4,ar6,ar5,ar7));
      uVar3 = ar5;
      break;
    case 3:
      uVar4 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031764(ar4,ar6,ar5,ar7));
      uVar1 = (undefined4)in_dr0;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_1c_026dd8(ar4 + 0xb0,ar6,ar5,ar7));
      uVar3 = ar5;
      if ((iVar2 < 0xb) && (-1 < iVar2)) {
                    
        switch(iVar2) {
        case 0:
          (vsp = ((unsigned long)(fr0_ - 128)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7));
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031e84(ar4,ar6,ar5,ar7));
          uVar3 = ar5;
          break;
        case 1:
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c034148(ar4 + 0xb0,0,ar5,ar7));
          uVar3 = ar5;
          break;
        default:
          if (cVar10 == '\0') {
            dVar6 = CONCAT44D(0x42340000,uVar1);
          }
          else {
            dVar6 = 3.74020019962227e-312;
          }
          if (cVar9 == '\0') {
            bVar8 = in_fr15 < F32HI(dVar6);
          }
          else {
            bVar8 = CONCAT44D(in_fr14,in_fr15) < dVar6;
          }
          if (bVar8) {
            (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c034148(ar4 + 0xb0,0,ar5,ar7));
            uVar3 = ar5;
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 128)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7));
            uVar3 = ar5;
          }
          break;
        case 4:
          break;
        }
      }
      break;
    case 4:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_1c_026dd8(ar4 + 0xb0,ar5_00,uVar3,ar7));
      if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 128)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,uVar3,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c034148(ar4 + 0xb0,0,uVar3,ar7));
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031764(ar4,ar6,ar5,ar7));
      uVar3 = ar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,uVar3,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c0737fc\n.set _FUN_8c0737fc, _FUN_8c0737fc_def\n");
