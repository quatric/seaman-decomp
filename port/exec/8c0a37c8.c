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
undefined4 FUN_8c0a37c8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a37c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  ulonglong in_dr0 = 0;
  double dVar5;
  ulonglong uVar6;
  undefined8 in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 1;
  iVar3 = *(int *)(unsigned)(ar5 + 0x10);
  iVar1 = *(int *)(unsigned)(ar4 + 0x68);
  if (iVar1 == 0) {
    if (iVar3 != 3) {
      return iVar3;
    }
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
    if (cVar8 == '\0') {
      *(int *)(unsigned)(ar4 + 0xa0) = (int)(in_dr0 >> 0x20);
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0xa0) = in_dr0;
    }
    (vsp = ((unsigned long)(fr0_ - 64)), vec3_clear(ar4 + 0x224,ar5,ar6,ar7));
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = in_dr0 & 0xffffffff;
    }
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x234) = in_dr0 & 0xffffffff;
    }
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c03c314(ar4,ar5,ar6,ar7));
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5 = 2;
    (vsp = ((unsigned long)(fr0_ - 64)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 64)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
    *(int *)(unsigned)(ar4 + 0x68) = *(int *)(unsigned)(ar4 + 0x68) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return iVar3;
      }
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x3c)),*(undefined4 *)(unsigned)(ar5 + 0xc),ar6,ar7));
      iVar3 = ar4 + 0x54;
      uVar2 = 1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), s_CMushroomerBody_AwayFrom_0a1ed0(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)),1,iVar3));
      (vsp = ((unsigned long)(fr0_ - 64)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar2,iVar3));
      if (iVar1 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        return 3;
      }
      return 3;
    }
    goto LAB_8c0a38c6;
  }
  (vsp = ((unsigned long)(fr0_ - 64)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0324ac(ar4,ar5,ar6,ar7));
  if (iVar3 == 3) {
    return 3;
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x3e99999a,*(undefined4 *)(unsigned)(ar4 + 0x94));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x94);
    dVar5 = 1.3411048233047396e-08;
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x94) = fVar4;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x94) = in_xd0;
  }
  *(int *)(unsigned)(ar4 + 0x68) = *(int *)(unsigned)(ar4 + 0x68) + 1;
LAB_8c0a38c6:
  (vsp = ((unsigned long)(fr0_ - 64)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x94));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x94);
    dVar5 = -1.0142130068337341e-250;
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) + F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x94) = fVar4;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x94) = in_xd0;
  }
  if (cVar8 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
    uVar6 = CONCAT44(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x94));
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)(uint)fVar4;
    uVar6 = 0xb0bf800000;
  }
  if (cVar7 != '\0' || (float)(uVar6 >> 0x20) <= (float)uVar6) {
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c073c9c(ar4,ar5,ar6,ar7));
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x94) = uVar6 & 0xffffffff;
    }
    *(int *)(unsigned)(ar4 + 0x68) = *(int *)(unsigned)(ar4 + 0x68) + 1;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x20)),ar6,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_normalize(ar4 + 0x54,uVar2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  }
  return 3;
}

__asm__(".globl _FUN_8c0a37c8\n.set _FUN_8c0a37c8, _FUN_8c0a37c8_def\n");
