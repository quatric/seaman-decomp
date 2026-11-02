#include "../decls.h"
undefined4 FUN_8c0a37c8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  ulonglong in_dr0;
  double dVar5;
  ulonglong uVar6;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uStack_c = 1;
  iVar3 = *(int *)(ar5 + 0x10);
  iVar1 = *(int *)(ar4 + 0x68);
  if (iVar1 == 0) {
    if (iVar3 != 3) {
      return iVar3;
    }
    FUN_8c032ab0(ar4,ar5,ar6,ar7);
    if (cVar8 == '\0') {
      *(int *)(ar4 + 0xa0) = (int)(in_dr0 >> 0x20);
    }
    else {
      *(ulonglong *)(ar4 + 0xa0) = in_dr0;
    }
    vec3_clear(ar4 + 0x224,ar5,ar6,ar7);
    if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
    }
    if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0x234) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x234) = in_dr0 & 0xffffffff;
    }
    FUN_8c03c314(ar4,ar5,ar6,ar7);
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5 = 2;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
    *(int *)(ar4 + 0x68) = *(int *)(ar4 + 0x68) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return iVar3;
      }
      FUN_8c03f460(auStack_3c,*(undefined4 *)(ar5 + 0xc),ar6,ar7);
      iVar3 = ar4 + 0x54;
      uVar2 = 1;
      iVar1 = s_CMushroomerBody_AwayFrom_0a1ed0(ar4,**(undefined4 **)(ar5 + 4),1,iVar3);
      free_if_nonnull_wrap_102790(auStack_3c,0xffffffff,uVar2,iVar3);
      if (iVar1 == 0) {
        *(undefined4 *)(ar4 + 0x68) = 0;
        *(undefined4 *)(ar4 + 0x40) = 5;
        return 3;
      }
      return 3;
    }
    goto LAB_8c0a38c6;
  }
  CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
  FUN_8c0324ac(ar4,ar5,ar6,ar7);
  if (iVar3 == 3) {
    return 3;
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x3e99999a,*(undefined4 *)(ar4 + 0x94));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x94);
    dVar5 = 1.3411048233047396e-08;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x94) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x94) = in_xd0;
  }
  *(int *)(ar4 + 0x68) = *(int *)(ar4 + 0x68) + 1;
LAB_8c0a38c6:
  CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x94));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x94);
    dVar5 = -1.0142130068337341e-250;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x94) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x94) = in_xd0;
  }
  if (cVar8 == '\0') {
    *(undefined4 *)(ar4 + 0xa0) = 0;
    uVar6 = CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x94));
  }
  else {
    *(ulonglong *)(ar4 + 0xa0) = (ulonglong)(uint)fVar4;
    uVar6 = 0xb0bf800000;
  }
  if (cVar7 != '\0' || (float)(uVar6 >> 0x20) <= (float)uVar6) {
    FUN_8c073c9c(ar4,ar5,ar6,ar7);
    if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0x94) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x94) = uVar6 & 0xffffffff;
    }
    *(int *)(ar4 + 0x68) = *(int *)(ar4 + 0x68) + 1;
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(undefined4 *)(ar4 + 300) = 0;
    FUN_8c032ab0(ar4,ar5,ar6,ar7);
    FUN_8c032ab0(ar4,ar5,ar6,ar7);
    FUN_8c032ab0(ar4,ar5,ar6,ar7);
    Vec3_ctor_xyz(auStack_20,ar5,ar6,ar7);
    Vec3_assign(ar4 + 0x54,auStack_20,ar6,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
    Vec3_normalize(ar4 + 0x54,uVar2,ar6,ar7);
    Vec3_assign(ar4 + 0x54,auStack_30,ar6,ar7);
    Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  }
  return 3;
}

__asm__(".globl _FUN_8c0a37c8\n.set _FUN_8c0a37c8, _FUN_8c0a37c8_def\n");
