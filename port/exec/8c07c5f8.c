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
undefined4 FUN_8c07c5f8_def(int ar4,int ar5,undefined4 ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c07c5f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 348; for (int i_ = 0; i_ < 348; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar4;
  uint uVar5;
  undefined8 in_dr0 = 0;
  ulonglong uVar6;
  undefined8 uVar7;
  char cVar8;
  
  cVar8 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
  uVar4 = 1;
  iVar1 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 348)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 348)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),iVar1,ar6_00,ar7_00));
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      if ((*(int *)(fr0_ + 0x00000004)) == 1) {
        uVar4 = 0;
        break;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2ac) = 1;
      (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c031748(ar4,iVar1 * 4,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c03f39c((*(undefined4 *)(fr0_ + 0x0000000c)),((void *)0x8c03f39c),ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 348)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 348)) - 8); Vec3_scale(ar7,((undefined1 *)(unsigned)0x8c1379b4),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 348)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 348)) - 8); Vec3_add(ar6,((undefined1 *)(fr0_ - 0x48)),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 348)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 348)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x58)),ar5,ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_normalize(((undefined1 *)(fr0_ - 0x68)),((void *)0x8c022ec0),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x78)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7_00));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x88)),ar4 + 0x54,ar6_00,ar7_00));
      ar6_00 = 1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x88)),1,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6_00,ar7_00));
      if (iVar1 == 0) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        ar6_00 = 0xffffffff;
        uVar2 = 1;
        (vsp = ((unsigned long)(fr0_ - 348)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 348)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00));
      break;
    case 2:
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x98)),ar7,ar6_00,ar7_00));
      ar7_00 = ((undefined1 *)(fr0_ - 0x98));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c032d48(ar4,ar5,ar6,ar7_00));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ar6,ar7_00));
      ar6_00 = ar6;
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 348)), vec3_clear(ar4 + 0x244,uVar2,ar6,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 0x298) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        ar6_00 = ar6;
      }
      (vsp = ((unsigned long)(fr0_ - 348)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00));
      break;
    case 3:
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xa8)),iVar1 * 4,ar6_00,ar7_00));
      ar6_00 = 1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0xa8)),1,ar7_00));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,ar6_00,ar7_00));
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 348)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xb8)),uVar2,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xb8)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,ar6_00,ar7_00));
        ar7_00 = (undefined1 *)(unsigned)0x0;
        ar6_00 = 0xffffffff;
        uVar2 = 0;
        (vsp = ((unsigned long)(fr0_ - 348)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 348)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 4:
      uVar2 = 0x11;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c031de8(ar4,0x11,ar6_00,ar7_00));
      if (iVar1 == 0) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        ar6_00 = 0xffffffff;
        uVar4 = 0x13;
        (vsp = ((unsigned long)(fr0_ - 348)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0));
        uVar5 = (uint)in_dr0;
        (vsp = ((unsigned long)(fr0_ - 348)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00));
        uVar6 = (ulonglong)uVar5;
        if (cVar8 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar6;
        }
        iVar1 = ar4 + 0x14;
        (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(ar4 + 0x80,iVar1,ar6_00,ar7_00));
        if (cVar8 == '\0') {
          uVar7 = CONCAT44(0x40000000,(int)uVar6);
          *(undefined4 *)(unsigned)(ar4 + 0x38) = 0x40000000;
        }
        else {
          uVar7 = 0x8c03c31440000000;
          *(undefined8 *)(unsigned)(ar4 + 0x38) = 0x8c03c31440000000;
        }
        (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c03c314(ar4,iVar1,ar6_00,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x298) = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2ac) = 0;
        *(undefined4 *)(unsigned)(ar4 + 100) = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        uVar4 = 0;
        (vsp = ((unsigned long)(fr0_ - 348)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000008)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000008)),ar5,ar6_00,ar7_00));
        if (cVar8 == '\0') {
          *(int *)(unsigned)(ar5 + 4) = (int)((ulonglong)uVar7 >> 0x20);
        }
        else {
          *(undefined8 *)(unsigned)(ar5 + 4) = uVar7;
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), get_field_1c_026dd8(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
        if (iVar1 == 0x11) {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x158))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c034384(ar4 + 0xb0,
                       *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1377f8) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18),ar6_00,
                       ar7_00));
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0xc8)),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6_00,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 348)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 348)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x28)),ar4 + 0x244,ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0xd8)),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6_00,ar7_00));
          puVar3 = ((undefined1 *)(fr0_ - 0x28));
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(ar4 + 0x244,puVar3,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xe8)),puVar3,ar6_00,ar7_00));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c023d04(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0xe8)),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,ar6_00,ar7_00));
          uVar2 = 0;
          if (iVar1 != 0) {
            (vsp = ((unsigned long)(fr0_ - 348)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0xf4)),(*(undefined4 *)(fr0_ + 0x00000000)),ar6_00,ar7_00));
            puVar3 = ((undefined1 *)(fr0_ - 0xf4));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x104))); *(unsigned *)((((unsigned long)(fr0_ - 348)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 348)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x38)),puVar3,ar6_00,ar7_00); });
            uVar2 = (vsp = ((unsigned long)(fr0_ - 348)), Vec3_length(((undefined1 *)(fr0_ - 0x104)),puVar3,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 348)), Vec3_assign(ar4 + 0x14,uVar2,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x104)),0xffffffff,ar6_00,ar7_00));
            uVar2 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 348)), object_dtor_delete(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,ar6_00,ar7_00));
          }
          (vsp = ((unsigned long)(fr0_ - 348)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x38)),uVar2,ar6_00,ar7_00));
          if (cVar8 == '\0') {
            *(int *)(unsigned)(ar4 + 0x28) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x28) = in_dr0;
          }
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 348)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7_00));
  return uVar4;
}

__asm__(".globl _FUN_8c07c5f8\n.set _FUN_8c07c5f8, _FUN_8c07c5f8_def\n");
