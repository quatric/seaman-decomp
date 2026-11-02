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
undefined4 s_CMushroomerBody_AwayFrom_0a1ed0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CMushroomerBody_AwayFrom_0a1ed0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 144; for (int i_ = 0; i_ < 144; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 uVar5;
  undefined4 in_fr1 = 0;
  double dVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar5 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  iVar3 = ar5;
  if (iVar1 == 0) {
    if (*(int *)(unsigned)(ar4 + 0x270) == 1) {
      (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c033474(ar4,1,ar5,(*(undefined4 *)(fr0_ + 0x00000000))));
      *(undefined4 *)(unsigned)(ar4 + 0x270) = 0;
    }
    ar7_00 = 0;
    uVar4 = 0xffffffff;
    uVar2 = 5;
    (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar4,ar7_00));
    if (ar6 == 0) {
LAB_8c0a1f82:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); Vec3_sub(ar5,ar7,uVar4,ar7_00); });
      uVar2 = (vsp = ((unsigned long)(fr0_ - 144)), Vec3_length(((undefined1 *)(fr0_ - 0x2c)),ar7,uVar4,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(ar4 + 0x14,uVar2,uVar4,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,uVar4,ar7_00));
      if (cVar8 != '\0') {
        in_fr1 = 0x40400000;
      }
      (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c032518(ar4,ar5,(*(undefined4 *)(fr0_ + 0x00000004)),(*(undefined4 *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(ar4 + 0x260,((undefined1 *)(fr0_ - 0x3c)),(*(undefined4 *)(fr0_ + 0x00000004)),(*(undefined4 *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,(*(undefined4 *)(fr0_ + 0x00000004)),(*(undefined4 *)(fr0_ + 0x00000000))));
      ar7 = (*(undefined4 *)(fr0_ + 0x00000000));
    }
    else {
      if (ar6 != 1) {
        ar7_00 = 2;
        uVar4 = 1;
        report_error_message
                  (((undefined1 *)(unsigned)0x8c13b03f),((undefined1 *)(unsigned)0x8c13b055),1,2);
        goto LAB_8c0a1f82;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); Vec3_scale(ar7,((undefined1 *)(unsigned)0x8c13af90),uVar4,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x4c)),uVar4,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,uVar4,ar7_00));
      if (cVar8 != '\0') {
        in_fr1 = 0x40400000;
      }
      (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c032518(ar4,ar5,(*(undefined4 *)(fr0_ + 0x00000004)),(*(undefined4 *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(ar4 + 0x260,((undefined1 *)(fr0_ - 0x5c)),(*(undefined4 *)(fr0_ + 0x00000004)),(*(undefined4 *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,(*(undefined4 *)(fr0_ + 0x00000004)),(*(undefined4 *)(fr0_ + 0x00000000))));
      ar7 = (*(undefined4 *)(fr0_ + 0x00000000));
    }
    iVar1 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); Vec3_sub(ar4 + 0x260,ar5,(*(undefined4 *)(fr0_ + 0x00000004)),ar7); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 144)), Vec3_length(((undefined1 *)(fr0_ - 0x6c)),iVar1,(*(undefined4 *)(fr0_ + 0x00000004)),ar7));
    (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(ar4 + 0x14,uVar2,(*(undefined4 *)(fr0_ + 0x00000004)),ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,(*(undefined4 *)(fr0_ + 0x00000004)),ar7));
    (vsp = ((unsigned long)(fr0_ - 144)), vec3_clear(ar4 + 0x224,uVar2,(*(undefined4 *)(fr0_ + 0x00000004)),ar7));
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031b68(ar4,0x8c2851b0,(*(undefined4 *)(fr0_ + 0x00000004)),ar7));
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x34) = 0x40000000;
    }
    else {
      in_fr1 = 0x40000000;
      *(undefined8 *)(unsigned)(ar4 + 0x34) = 0x8c032a6440000000;
    }
    uVar4 = 0x5a;
    uVar2 = 0x1e;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), rand_range(ar4,0x1e,0x5a,ar7));
    if (cVar7 == '\0') {
      dVar6 = CONCAT44D((float)iVar1,in_fr1);
    }
    else {
      dVar6 = (double)iVar1;
    }
    if (cVar8 == '\0') {
      *(int *)(unsigned)(ar4 + 0x38) = (int)(D2U(dVar6) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x38) = dVar6;
    }
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c032ab0(ar4,uVar2,uVar4,ar7));
    ar6 = ar4 + 0x260;
    (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      iVar3 = ar4 + 0x260;
      (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031764(ar4,iVar3,ar5,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar3,ar5,ar7));
      ar6_00 = ar5;
      if (iVar1 == 1) {
        ar7 = 0;
        ar6_00 = -1;
        iVar3 = 0;
        (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar3,ar6_00,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
    }
    else {
      ar6_00 = ar6;
      if (iVar1 == 3) {
        iVar3 = ar4 + 0x260;
        (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031764(ar4,iVar3,ar5,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar3,ar5,ar7));
        ar6_00 = ar5;
        if (iVar1 == 1) {
          iVar3 = -0x73d7ae50;
          (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031b68(ar4,0x8c2851b0,ar5,ar7));
          uVar5 = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          ar6_00 = ar5;
        }
      }
    }
    goto LAB_8c0a231a;
  }
  (vsp = ((unsigned long)(fr0_ - 144)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar3,ar6,ar7));
  iVar3 = ar4 + 0x260;
  (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c031764(ar4,iVar3,ar5,ar7));
  ar6_00 = ar5;
  if (*(int *)(unsigned)(ar4 + 0x40) == 4) {
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
LAB_8c0a231a:
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar3,ar6_00,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 144)), Vec3_length(((undefined1 *)(fr0_ - 0x7c)),iVar3,ar6_00,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x8c))); *(unsigned *)((((unsigned long)(fr0_ - 144)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 144)) - 8); Vec3_scale(uVar2,((undefined1 *)(unsigned)0x8c13af94),ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 144)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x8c)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 144)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_00,ar7));
  return uVar5;
}

__asm__(".globl _s_CMushroomerBody_AwayFrom_0a1ed0\n.set _s_CMushroomerBody_AwayFrom_0a1ed0, _s_CMushroomerBody_AwayFrom_0a1ed0_def\n");
