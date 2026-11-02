#include "../decls.h"
undefined4 FUN_8c07ff08_def(int ar4,float *ar5,float *ar6,int *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar4_00;
  undefined4 *ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined4 in_fr3;
  float fVar8;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar9;
  char cVar10;
  char cVar11;
  int *ain0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float afStack_38 [4];
  undefined1 auStack_28 [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  ain0 = ar7;
  uVar1 = (**(code **)(*ar7 + 0x10c))(ar7,ar5,ar6,ar7);
  Vec3_ctor_copy(auStack_28,uVar1,ar6,ar7);
  fVar8 = 0.0;
  Vec3_ctor_zero(afStack_38,uVar1,ar6,ar7);
  Vec3_ctor_zero(&uStack_48,Vec3_ctor_zero,ar6,ar7);
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x40e00000,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x48);
    dVar6 = 512.0001237392426;
  }
  if (cVar10 == '\0') {
    afStack_38[0] = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    afStack_38[0] = SUB84(dVar6 * dVar6,0);
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x40800000,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    afStack_38[0] = (float)in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x48);
    dVar6 = 7.971355785012665e+24;
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x451a6000,fVar5);
  }
  else {
    dVar6 = 7.321052503998254e+19;
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar6,0),SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 - dVar6;
  }
  uStack_48 = SUB84(dVar6,0);
  if (cVar11 == '\0') {
    uStack_48 = (undefined4)((ulonglong)dVar6 >> 0x20);
    fVar5 = 750.0;
  }
  else {
    afStack_38[3] = 4.14784e-43;
    fVar5 = 4.14784e-43;
    uStack_3c = 0x128;
  }
  afStack_38[2] = 750.0;
  afStack_38[1] = 575.0;
  uStack_40 = 0x443b8000;
  uStack_44 = 0x440fc000;
  ar5_00 = &uStack_48;
  Vec3_sub(ar5,ar5_00,ar6,ar7,auStack_68);
  Vec3_normalize(auStack_68,ar5_00,ar6,ar7);
  Vec3_ctor_copy(auStack_58,auStack_78,ar6,ar7);
  Vec3_dtor(auStack_78,0xffffffff,ar6,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_68,0xffffffff,ar6,ar7);
  if (*(int *)(ar4 + 0x128) < 6) {
    Vec3_dtor(auStack_58,0xffffffff,ar6,ar7);
    Vec3_dtor(&uStack_48,0xffffffff,ar6,ar7);
    Vec3_dtor(afStack_38,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
    return 0;
  }
  iVar2 = *(int *)(ar4 + 300);
  if ((6 < iVar2) || (iVar2 < 0)) goto switchD_8c0800be_default;
                    
  switch(iVar2) {
  case 0:
    ar7 = (int *)0xb0;
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,ar6,0xb0);
    if (iVar2 == 1) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    break;
  case 1:
    ar6 = afStack_38;
    iVar2 = pure_virtual_stub(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x40) = 5;
      ar6 = (float *)0x5;
      uVar1 = rand_range(ar4,3,5,ar7);
      *(undefined4 *)(ar4 + 0x294) = uVar1;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
    }
    break;
  case 2:
    FUN_8c0230f0(ar4 + 0x14,uVar1,ar6,ar7,auStack_88);
    FUN_8c082378(ar4,auStack_88,ar6,ar7);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_88,0xffffffff,ar6,ar7);
    ar4_00 = ar4 + 0xb0;
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4_00,uVar1,ar6,ar7);
    if (iVar2 == 1) {
      FUN_8c010e38(ar4_00,uVar1,ar6,ar7,ain0);
      if (cVar11 == '\0') {
        fVar8 = 0.03;
      }
      else {
        fVar5 = 0.03;
        fVar8 = 4.2039e-43;
      }
      if (cVar10 == '\0' && fVar5 < fVar8) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(undefined4 *)(ar4 + 0x2b4) = 0;
      }
    }
    break;
  case 3:
    Vec3_ctor_copy(auStack_98,auStack_58,ar6,ar7);
    ar6 = (float *)0x1;
    iVar2 = FUN_8c0811b4(ar4,auStack_98,1,ar7);
    Vec3_dtor(auStack_98,0xffffffff,ar6,ar7);
    if (iVar2 == 0) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      if (*(int *)(ar4 + 0x128) == 6) {
        ar7 = (int *)0x0;
        ar6 = (float *)0xffffffff;
        uVar1 = 0x23;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x23,0xffffffff,0);
      }
      else {
        ar7 = (int *)0x0;
        ar6 = (float *)0xffffffff;
        uVar1 = 0x2d;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2d,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6,ar7);
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      FUN_8c032ab0(ar4,uVar1,ar6,ar7);
      FUN_8c032204(ar4 + 0xb0,uVar1,ar6,ar7,ain0);
    }
    break;
  case 4:
    *(undefined4 *)(ar4 + 0x178) = 1;
    Vec3_ctor_copy(auStack_a8,auStack_58,ar6,ar7);
    FUN_8c082378(ar4,auStack_a8,ar6,ar7);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_a8,0xffffffff,ar6,ar7);
    FUN_8c031748(ar4,uVar1,ar6,ar7);
    ar6 = ar5;
    FUN_8c031c74(ar4,ar5,ar5,ar7);
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
    CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7,ain0);
    if (cVar11 == '\0') {
      fVar8 = 100.0;
    }
    else {
      fVar5 = 100.0;
      fVar8 = 4.2039e-43;
    }
    if (cVar10 != '\0' || fVar8 <= fVar5) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      ar6 = (float *)0x6;
      uVar1 = rand_range(ar4,4,6,ar7);
      *(undefined4 *)(ar4 + 0x294) = uVar1;
      *(undefined4 *)(ar4 + 0x218) = 0xf;
    }
    break;
  case 5:
    Vec3_ctor_copy(auStack_b8,auStack_58,ar6,ar7);
    FUN_8c082378(ar4,auStack_b8,ar6,ar7);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_b8,0xffffffff,ar6,ar7);
    *(undefined4 *)(ar4 + 0x178) = 1;
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6,ar7,ain0);
    if (cVar11 == '\0') {
      fVar8 = fVar5;
    }
    if (cVar10 == '\0') {
      iVar2 = (int)fVar8;
    }
    else {
      iVar2 = (int)(double)CONCAT44(in_fr14,fVar8);
    }
    if ((iVar2 == 0x8a) && (*(int *)(ar4 + 0x294) < 1)) {
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x3ca3d70a,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 985162545658593.2;
      }
      if (cVar10 == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar11 == '\0') {
        *(float *)(ar4 + 0x28) = fVar5;
        fVar5 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      if (cVar10 == '\0' && 0.0 < fVar5) {
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
        }
      }
      iVar2 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar1,ar6,ar7);
      if (iVar2 == 7) {
        ar6 = (float *)0x6;
        uVar1 = 4;
        uVar3 = rand_range(ar4,4,6,ar7);
        *(undefined4 *)(ar4 + 0x294) = uVar3;
      }
    }
    else {
      iVar2 = FUN_8c03f3ac(ar4 + 0xb0,uVar1,ar6,ar7);
      if (iVar2 == 7) {
        FUN_8c032ab0(ar4,uVar1,ar6,ar7);
        FUN_8c032204(ar4 + 0xb0,uVar1,ar6,ar7,ain0);
        *(int *)(ar4 + 0x294) = *(int *)(ar4 + 0x294) + -1;
      }
    }
    FUN_8c031748(ar4,uVar1,ar6,ar7);
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x3d4ccccd,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar6 = 87960946291507.2;
    }
    if (cVar10 == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar11 == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
      fVar5 = *(float *)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
    }
    if (cVar10 == '\0' && 0.0 < fVar5) {
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
      }
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x42d40000,fVar5);
    }
    else {
      dVar6 = 211106267570176.0;
    }
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)dVar6 >> 0x20) < fVar8;
    }
    else {
      bVar9 = dVar6 < (double)CONCAT44(in_fr14,fVar8);
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x42e80000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 492581279399936.0;
      }
      if (cVar10 == '\0') {
        bVar9 = fVar8 < (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        bVar9 = (double)CONCAT44(in_fr14,fVar8) < dVar6;
      }
      if (!bVar9) goto LAB_8c08060a;
LAB_8c08061a:
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0xc0400000,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 1.1920937492693184e-07;
      }
      if (cVar10 == '\0' && (float)((ulonglong)dVar6 >> 0x20) < SUB84(dVar6,0)) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(0x3e800000,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar6 = 3.06085459277653e-312;
        }
        if (cVar10 == '\0') {
          fVar8 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar8,SUB84(dVar6,0) - fVar8);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
      }
    }
    else {
LAB_8c08060a:
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x42fc0000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 844425070608384.0;
      }
      if (cVar10 == '\0') {
        bVar9 = (float)((ulonglong)dVar6 >> 0x20) < fVar8;
      }
      else {
        bVar9 = dVar6 < (double)CONCAT44(in_fr14,fVar8);
      }
      if (bVar9) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(0x43080000,SUB84(dVar6,0));
        }
        else {
          dVar6 = -32.00000799074769;
        }
        if (cVar10 == '\0') {
          bVar9 = fVar8 < (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          bVar9 = (double)CONCAT44(in_fr14,fVar8) < dVar6;
        }
        if (bVar9) goto LAB_8c08061a;
      }
    }
    Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_c8);
    Vec3_add(ar5,auStack_c8,ar6,ar7,auStack_d8);
    FUN_8c022fc0(auStack_d8,&uStack_48,ar6,ar7);
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),in_fr3);
      dVar7 = (double)CONCAT44(0x3f99999a,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar7 = 3.051758535548288e-05;
    }
    if (cVar10 == '\0') {
      bVar9 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20) < (float)((ulonglong)dVar6 >> 0x20)
      ;
    }
    else {
      bVar9 = dVar7 * dVar7 < dVar6;
    }
    Vec3_dtor(auStack_d8,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_c8,0xffffffff,ar6,ar7);
    if (!bVar9) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
    }
    break;
  case 6:
    *(undefined4 *)(ar4 + 0x178) = 1;
    FUN_8c031748(ar4,0x178,ar6,ar7);
    FUN_8c031c74(ar4,ar5,ar5,ar7);
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,ar5,ar7);
    ar6 = ar5;
    if (iVar2 == 1) {
      uVar4 = 0;
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x294) = 0;
      FUN_8c03c314(ar4,0,ar5,ar7);
      *(undefined4 *)(ar4 + 0x178) = 0;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      ar7 = (int *)0x0;
      uVar3 = 0xffffffff;
      uVar1 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar3,ar7);
      FUN_8c032204(ar4 + 0xb0,uVar1,uVar3,ar7,ain0);
      ar6 = (float *)0xffffffff;
      *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
    }
  }
switchD_8c0800be_default:
  Vec3_dtor(auStack_58,0xffffffff,ar6,ar7);
  Vec3_dtor(&uStack_48,0xffffffff,ar6,ar7);
  Vec3_dtor(afStack_38,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c07ff08\n.set _FUN_8c07ff08, _FUN_8c07ff08_def\n");
