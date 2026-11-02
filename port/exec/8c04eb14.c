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
uint FUN_8c04eb14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c04eb14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  uint uVar3;
  undefined4 in_fr1 = 0;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  uVar5 = CONCAT44(0x41200000,in_fr1);
  uVar2 = ar5;
  ar7_01 = ar7;
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  do {
    uVar4 = (uint)uVar5;
    iVar1 = *(int *)(unsigned)(ar4 + 0x134);
    if ((0xe < iVar1) || (iVar1 < 0)) goto switchD_8c04eb5c_caseD_4;
                    
    switch(iVar1) {
    case 0:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c057164(ar4,ar5,ar6,ar7_01));
      if (iVar1 == 0) {
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      }
      goto switchD_8c04eb5c_caseD_4;
    case 1:
      uVar5 = uVar5 & 0xffffffff;
      if (cVar7 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar5;
      }
      (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x178))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),uVar2,ar6,ar7_01));
      if (cVar7 == '\0') {
        uVar5 = CONCAT44(0x41a00000,(int)(uVar5 >> 0x20));
      }
      else {
        uVar5 = 0x13441a00000;
      }
      if (cVar6 != '\0' || (float)(uVar5 >> 0x20) <= (float)uVar5) {
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 10;
      }
      else {
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      }
      break;
    case 2:
      if ((*(int *)(unsigned)(ar4 + 0x128) == 4) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), rand_range(ar4,0,100,ar7_01)), 0x46 < iVar1)) {
        ar7_01 = (undefined1 *)(unsigned)0x0;
        ar6 = 0xffffffff;
        uVar2 = 0x20;
        (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x20,0xffffffff,0));
        *(undefined4 *)(unsigned)(ar4 + 0x218) = 5;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), rand_range(ar4,0,100,ar7_01));
        if (iVar1 < 0x47) {
          ar7_01 = (undefined1 *)(unsigned)0x0;
          ar6 = 0xffffffff;
          uVar2 = 0x1a;
          (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        }
        else {
          ar7_01 = (undefined1 *)(unsigned)0x0;
          ar6 = 0xffffffff;
          uVar2 = 0x11;
          (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0));
        }
      }
      (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7_01));
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
    case 3:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_1c_026dd8(ar4 + 0xb0,uVar2,ar6,ar7_01));
      if (iVar1 == 0x11) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar2,ar6,ar7_01));
        if (iVar1 == 7) {
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          uVar3 = 0;
        }
      }
      else if (iVar1 == 0x20) {
        *(undefined4 *)(unsigned)(ar4 + 0x218) = 5;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7_01));
        if (iVar1 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          uVar3 = 0;
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7_01));
        if (iVar1 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          uVar3 = 0;
        }
      }
switchD_8c04eb5c_caseD_4:
      (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7_01));
      return uVar3;
    default:
      goto switchD_8c04eb5c_caseD_4;
    case 10:
      if (*(int *)(unsigned)(ar4 + 0x128) != 4) {
LAB_8c04ee58:
        ar7_01 = (undefined1 *)(unsigned)0x0;
        ar6 = 0xffffffff;
        uVar2 = 0x47;
        (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x47,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7_01));
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
        goto switchD_8c04eb5c_caseD_b;
      }
      ar6 = 100;
      uVar2 = 0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), rand_range(ar4,0,100,ar7_01));
      if (iVar1 < 0x5b) goto LAB_8c04ee58;
      *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 2;
      break;
    case 0xb:
switchD_8c04eb5c_caseD_b:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7_01));
      if (iVar1 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        uVar3 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      }
      goto switchD_8c04eb5c_caseD_4;
    case 0xc:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x2c)),ar7,ar6,ar7_01));
      ar7_01 = ((undefined1 *)(fr0_ - 0x2c));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c059fc4(ar4,ar5,ar5,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 48)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar5,ar7_01));
      ar6 = ar5;
      if (iVar1 == 0) {
        uVar3 = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      goto switchD_8c04eb5c_caseD_4;
    case 0xd:
      ar7_00 = 0;
      ar6_00 = 0xffffffff;
      uVar2 = 0x55;
      (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x55,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 48)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 48)), vec3_clear(ar4 + 0x2d4,uVar2,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 48)), vec3_clear(ar4 + 0x2a8,uVar2,ar6_00,ar7_00));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0;
    case 0xe:
      ar7_01 = (undefined1 *)(unsigned)0x1c;
      ar6 = ar5;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c058024(ar4,ar5,ar5,0x1c));
      if (iVar1 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        (vsp = ((unsigned long)(fr0_ - 48)), vec3_clear(ar4 + 0x2d4,ar5,ar6,ar7_01));
        (vsp = ((unsigned long)(fr0_ - 48)), vec3_clear(ar4 + 0x2a8,ar5,ar6,ar7_01));
      }
      uVar3 = (uint)(iVar1 != 0);
      if (cVar7 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2ac) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2ac) = (ulonglong)uVar4;
      }
      goto switchD_8c04eb5c_caseD_4;
    }
  } while( true );
}

__asm__(".globl _FUN_8c04eb14\n.set _FUN_8c04eb14, _FUN_8c04eb14_def\n");
