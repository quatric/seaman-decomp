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
undefined4 FUN_8c048868_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c048868";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  ulonglong in_dr0 = 0;
  ulonglong uVar7;
  double dVar8;
  undefined8 in_xd0 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  uVar5 = 1;
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c10277c(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  iVar2 = ar4 + 0x14;
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_assign(ar4 + 0x80,iVar2,ar6,ar7));
LAB_8c0488bc:
  fVar6 = (float)in_dr0;
  iVar1 = *(int *)(unsigned)(ar4 + 0x134);
  if ((iVar1 < 7) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c05c28c(ar4,iVar2,ar6,ar7));
      if (iVar2 == 0) {
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      }
      break;
    case 1:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_1c_026dd8(ar4 + 0xb0,iVar2,ar6,ar7));
      if ((iVar1 != 0x15) && (iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_1c_026dd8(ar4 + 0xb0,iVar2,ar6,ar7)), iVar2 != 0x16))
      goto LAB_8c04899c;
      *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
      uVar5 = 0;
      break;
    case 2:
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(unsigned)(ar4 + 0x1c);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1c);
      }
      uVar7 = (ulonglong)(uint)fVar6;
      if (in_FPSCR_PR != '\0' || fVar6 <= 0.0) {
LAB_8c048a88:
        iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), rand_range(ar4,0,100,ar7));
        if (iVar2 < 0x33) {
          iVar2 = 0;
        }
        else {
          iVar2 = 1;
        }
      }
      else {
        ar6_00 = 100;
        uVar3 = 0;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), rand_range(ar4,0,100,ar7));
        if (2 < iVar2) goto LAB_8c048a88;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_94_02aaa4((*(undefined4 *)(fr0_ + 0x00000008)),uVar3,ar6_00,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), libgcc_divide_helper_0101e4(uVar3,5,ar6_00,ar7));
        if ((iVar2 == 3) || (iVar2 == 8)) {
          iVar2 = 4;
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xd;
        }
        else {
          iVar2 = 2;
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xb;
        }
      }
      ar7 = 0;
      ar6 = -1;
      (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar2,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar2,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c032ab0(ar4,iVar2,ar6,ar7));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(ar4 + 0x340) = (int)(uVar7 >> 0x20);
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x340) = uVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar7 & 0xffffffff;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_1c_026dd8(ar4 + 0xb0,iVar2,ar6,ar7));
      if ((iVar1 == 2) || (iVar1 == 4)) {
        ar6 = 4;
        iVar2 = 2;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), rand_range(ar4,2,4,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x280) = uVar3;
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
      }
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
    case 3:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar2,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_normalize(((undefined1 *)(fr0_ - 0x3c)),iVar2,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(unsigned)0x8c136588),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x5c)),ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar5,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar5,ar7));
      if (in_FPSCR_SZ == '\0') {
        dVar8 = CONCAT44D(0x3f7fbe77,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar8 = 52776566456188.93;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 * dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c05ae54(ar4,uVar3,ar5,ar7));
      if (*(int *)(unsigned)(ar4 + 0x280) < 1) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar3,ar5,ar7));
        ar6 = ar5;
        if (iVar2 == 1) {
          uVar5 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 0xffffffff;
        }
      }
      else {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_1c_026dd8(ar4 + 0xb0,uVar3,ar5,ar7));
        if ((iVar2 == 2) || (iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_1c_026dd8(ar4 + 0xb0,uVar3,ar5,ar7)), iVar2 == 4)) {
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031748(ar4,uVar3,ar5,ar7));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar3,ar5,ar7));
          ar6 = ar5;
          if (iVar2 == 7) {
            *(int *)(unsigned)(ar4 + 0x280) = *(int *)(unsigned)(ar4 + 0x280) + -1;
          }
        }
        else {
          iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar3,ar5,ar7));
          ar6 = ar5;
          if (iVar2 == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
          }
        }
      }
      break;
    case 4:
      if (*(int *)(unsigned)(ar4 + 0x128) == 0) {
        puVar4 = ((undefined4 *)(unsigned)0x8c125bf0);
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c032518(ar4,ar5,((undefined4 *)(unsigned)0x8c125bf0),(*(undefined4 *)(fr0_ + 0x00000004))));
        (vsp = ((unsigned long)(fr0_ - 128)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x6c)),puVar4,(*(undefined4 *)(fr0_ + 0x00000004))));
        (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,puVar4,(*(undefined4 *)(fr0_ + 0x00000004))));
      }
      else {
        puVar4 = ((undefined4 *)(unsigned)0x8c125bf0);
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c032518(ar4,ar5,((undefined4 *)(unsigned)0x8c125bf0),(*(undefined4 *)(fr0_ + 0x00000004))));
        (vsp = ((unsigned long)(fr0_ - 128)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x7c)),puVar4,(*(undefined4 *)(fr0_ + 0x00000004))));
        (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,puVar4,(*(undefined4 *)(fr0_ + 0x00000004))));
      }
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c031bb4(ar4,ar5,ar4 + 0x54,(*(undefined4 *)(fr0_ + 0x00000004))));
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      ar7 = (*(undefined4 *)(fr0_ + 0x00000004));
    case 5:
      ar6 = ar4 + 0x54;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), pure_virtual_stub(ar4,ar5,ar6,ar7));
      if (iVar2 == 0) {
        uVar5 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      }
      break;
    case 6:
      ar6 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x0000000c))[1];
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c05c9fc(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x0000000c)),ar6,ar7));
      if (iVar2 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        uVar5 = 0;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 128)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
  return uVar5;
LAB_8c04899c:
  ar6 = 200;
  iVar2 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 128)), rand_range(ar4,0,200,ar7));
  if (iVar1 < 100) {
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 2;
    in_dr0 = in_dr0 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x2c) = in_dr0;
    }
  }
  else if (iVar1 < 0xc5) {
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 4;
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x134) = 6;
  }
  goto LAB_8c0488bc;
}

__asm__(".globl _FUN_8c048868\n.set _FUN_8c048868, _FUN_8c048868_def\n");
