#include "../decls.h"
undefined4 FUN_8c080e80_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *ar6_00;
  undefined4 uVar3;
  undefined4 in_fr1;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined4 in_fr3;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  undefined8 uStack_44;
  int iStack_28;
  int iStack_24;
  code *pcStack_20;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = 1;
  ar6_00 = ar6;
  uVar1 = (**(code **)(*ar6 + 0x10c))(ar6,ar5,ar6,ar7);
  Vec3_ctor_copy(&iStack_28,uVar1,ar6_00,ar7);
  if (cVar8 == '\0') {
    uStack_44 = (double)CONCAT44(0x444d0000,in_fr1);
  }
  else {
    uStack_44 = -8.332610471145132e-251;
    pcStack_20 = FUN_8c031748;
  }
  iStack_24 = 0x444d0000;
  FUN_8c031748(ar4,uVar1,ar6_00,ar7);
  iVar2 = *(int *)(ar4 + 300);
  if (iVar2 == 0) {
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7);
    if (iVar2 == 1) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x294) = 1;
      FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
    }
  }
  else if (iVar2 == 1) {
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44(iStack_28,in_fr3);
      dVar5 = (double)CONCAT44(0x40a00000,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar6 = (double)CONCAT44(iStack_24,iStack_28);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar5 = -0.007812501880835043;
    }
    if (cVar7 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                               SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + dVar5 * dVar5;
    }
    iVar2 = (int)((ulonglong)dVar6 >> 0x20);
    iStack_28 = iVar2;
    if (cVar8 != '\0') {
      iStack_28 = SUB84(dVar6,0);
      iStack_24 = iVar2;
    }
    ar6_00 = &iStack_28;
    iVar2 = pure_virtual_stub(ar4,ar5,ar6_00,ar7);
    if (iVar2 == 0) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
      if (*(int *)(ar4 + 0x128) == 7) {
        if (cVar8 == '\0') {
          dVar6 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x48);
          dVar6 = 0.0008789064584561856;
        }
        if (cVar7 == '\0') {
          fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar6 * dVar6,0);
        }
        if (cVar8 == '\0') {
          *(float *)(ar4 + 0x48) = fVar4;
        }
        else {
          *(undefined8 *)(ar4 + 0x48) = in_xd0;
        }
      }
      else {
        if (cVar8 == '\0') {
          dVar6 = (double)CONCAT44(0x3f4ccccd,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x48);
          dVar6 = -1.2917774888121279e-250;
        }
        if (cVar7 == '\0') {
          fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar6 * dVar6,0);
        }
        if (cVar8 == '\0') {
          *(float *)(ar4 + 0x48) = fVar4;
        }
        else {
          *(undefined8 *)(ar4 + 0x48) = in_xd0;
        }
      }
    }
  }
  else if (iVar2 == 2) {
    ar6_00 = &iStack_28;
    iVar2 = pure_virtual_stub(ar4,ar5,ar6_00,ar7);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      uVar1 = (**(code **)(*ar6 + 0x10c))(ar6,ar5,ar6_00,ar7);
      FUN_8c0d9898(uVar1,ar5,ar6_00,ar7);
      FUN_8c032ab0(ar4,ar5,ar6_00,ar7);
      if (cVar8 == '\0') {
        uStack_44 = (double)CONCAT44(uVar1,(int)((ulonglong)uStack_44 >> 0x20));
        dVar6 = (double)CONCAT44(0x3ccccccd,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
        dVar6 = -8.39273668135511e-251;
      }
      if (cVar7 == '\0') {
        fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar8 == '\0') {
        uStack_44 = (double)CONCAT44((undefined4)uStack_44,-fVar4);
      }
      if (cVar7 == '\0') {
        fVar4 = SUB84(uStack_44,0) * (float)((ulonglong)uStack_44 >> 0x20);
      }
      else {
        fVar4 = SUB84(uStack_44 * uStack_44,0);
      }
      if (cVar8 == '\0') {
        *(float *)(ar4 + 0x28) = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
    }
  }
  else if (iVar2 == 3) {
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7);
    if (iVar2 == 1) {
      ar7 = 0;
      ar6_00 = (int *)0xffffffff;
      uVar1 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
    }
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar6 = -8.625516738351765e-251;
    }
    if (cVar7 == '\0') {
      fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x28) = fVar4;
      fVar4 = *(float *)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd0;
    }
    if (cVar7 != '\0' || 0.0 <= fVar4) {
      *(undefined4 *)(ar4 + 300) = 2;
      *(undefined4 *)(ar4 + 0x40) = 5;
      iVar2 = *(int *)(ar4 + 0x294) + -1;
      *(int *)(ar4 + 0x294) = iVar2;
      if (iVar2 < 1) {
        *(undefined4 *)(ar4 + 300) = 0;
        uVar3 = 0;
        FUN_8c03c314(ar4,uVar1,ar6_00,ar7);
        FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7);
      }
    }
  }
  Vec3_dtor(&iStack_28,0xffffffff,ar6_00,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c080e80\n.set _FUN_8c080e80, _FUN_8c080e80_def\n");
