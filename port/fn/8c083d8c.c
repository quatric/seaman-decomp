#include "../decls.h"
undefined4 FUN_8c083d8c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  undefined *puVar8;
  float fVar9;
  double dVar6;
  double dVar7;
  undefined4 in_fr3;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined4 in_stack_fffffec4;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar12 = '\0';
  cVar11 = '\0';
  uVar4 = 1;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  iVar1 = *(int *)(ar4 + 0x134);
  if ((4 < iVar1) || (iVar1 < 0)) goto switchD_8c083dce_default;
                    
  switch(iVar1) {
  case 0:
    ar6 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,ar6,ar7);
    if (ar6 == 1) {
      if (cVar12 == '\0') {
        fVar5 = *(float *)**(undefined4 **)(ar5 + 4);
        puVar8 = (undefined *)0x449a6000;
      }
      else {
        in_xd0 = *(undefined8 *)**(undefined4 **)(ar5 + 4);
        fVar5 = 1235.0;
        puVar8 = &DAT_8c125e48;
      }
      if (cVar11 != '\0' || fVar5 <= (float)(uint)puVar8) {
        Vec3_scale(&DAT_8c125e48,&DAT_8c1379d4,1,ar7,auStack_38);
        Vec3_assign(ar4 + 0x54,auStack_38,ar6,ar7);
        Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
      }
      else {
        Vec3_assign(ar4 + 0x54,&DAT_8c125e48,1,ar7);
      }
      ar7 = 0;
      uVar3 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar3,ar7);
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar5);
      }
      else {
        dVar6 = *(double *)(ar4 + 0x48);
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(-(float)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = -dVar6;
      }
      if (cVar12 == '\0') {
        uStack_e0 = (double)CONCAT44((*(uint*)((uchar*)&uStack_e0+4)),(int)((ulonglong)dVar6 >> 0x20));
        dVar6 = uStack_e0;
      }
      uStack_e0 = dVar6;
      Vec3_scale(ar4 + 0x54,&uStack_e0,uVar3,ar7,auStack_48);
      Vec3_scale(auStack_48,&DAT_8c1379d8,uVar3,ar7,auStack_58);
      Vec3_add(**(undefined4 **)(ar5 + 4),auStack_58,uVar3,ar7,auStack_68);
      ar6 = 0x280;
      Vec3_assign(ar4 + 0x280,auStack_68,0x280,ar7);
      Vec3_dtor(auStack_68,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_58,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x288));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x288);
        dVar6 = 6.54086966663815e-312;
      }
      if (cVar11 == '\0') {
        fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x288) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 0x288) = in_xd0;
      }
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      *(undefined4 *)(ar4 + 0x2b0) = 0;
    }
    break;
  case 1:
    Vec3_ctor_copy(auStack_78,ar4 + 0x54,ar6,ar7);
    ar6 = 1;
    iVar1 = FUN_8c0811b4(ar4,auStack_78,1,ar7);
    Vec3_dtor(auStack_78,0xffffffff,ar6,ar7);
    if (iVar1 == 0) {
      if (*(int *)(ar4 + 0x128) == 6) {
        ar7 = 0;
        ar6 = -1;
        uVar3 = 0x23;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x23,0xffffffff,0);
      }
      else {
        ar7 = 0;
        ar6 = -1;
        uVar3 = 0x2d;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2d,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    }
    break;
  case 2:
    Vec3_sub(**(undefined4 **)(ar5 + 4),ar4 + 0x280,ar6,ar7,auStack_88);
    Vec3_assign(auStack_28,auStack_88,ar6,ar7);
    Vec3_dtor(auStack_88,0xffffffff,ar6,ar7);
    Vec3_ctor_copy(auStack_98,auStack_28,ar6,ar7);
    FUN_8c082378(ar4,auStack_98,ar6,ar7);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_98,0xffffffff,ar6,ar7);
    FUN_8c031748(ar4,uVar3,ar6,ar7);
    ar6 = **(int **)(ar5 + 4);
    uVar3 = **(undefined4 **)(ar5 + 4);
    FUN_8c031c74(ar4,uVar3,ar6,ar7);
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6,ar7);
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7,in_stack_fffffec4);
    if (cVar12 == '\0') {
      fVar9 = 100.0;
    }
    else {
      fVar5 = 100.0;
      fVar9 = 4.316e-43;
    }
    if (cVar11 != '\0' || fVar9 <= fVar5) {
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      ar6 = 6;
      uVar3 = rand_range(ar4,4,6,ar7);
      *(undefined4 *)(ar4 + 0x294) = uVar3;
    }
    break;
  case 3:
    Vec3_sub(**(undefined4 **)(ar5 + 4),ar4 + 0x280,ar6,ar7,auStack_a8);
    Vec3_assign(auStack_28,auStack_a8,ar6,ar7);
    Vec3_dtor(auStack_a8,0xffffffff,ar6,ar7);
    Vec3_ctor_copy(auStack_b8,auStack_28,ar6,ar7);
    FUN_8c082378(ar4,auStack_b8,ar6,ar7);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_b8,0xffffffff,ar6,ar7);
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7,in_stack_fffffec4);
    if (cVar12 == '\0') {
      in_fr15 = fVar5;
    }
    if (cVar11 == '\0') {
      iVar1 = (int)in_fr15;
    }
    else {
      iVar1 = (int)(double)CONCAT44(in_fr14,in_fr15);
    }
    if ((iVar1 == 0x8a) && (*(int *)(ar4 + 0x294) < 1)) {
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x3ca3d70a,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 985162545658593.2;
      }
      if (cVar11 == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x28) = fVar5;
        fVar5 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      if (cVar11 == '\0' && 0.0 < fVar5) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
        }
      }
      iVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar3,ar6,ar7);
      if (iVar1 == 7) {
        ar6 = 6;
        uVar3 = 4;
        uVar2 = rand_range(ar4,4,6,ar7);
        *(undefined4 *)(ar4 + 0x294) = uVar2;
      }
    }
    else {
      iVar1 = FUN_8c03f3ac(ar4 + 0xb0,uVar3,ar6,ar7);
      if (iVar1 == 7) {
        FUN_8c032ab0(ar4,uVar3,ar6,ar7);
        FUN_8c032204(ar4 + 0xb0,uVar3,ar6,ar7,in_stack_fffffec4);
        *(int *)(ar4 + 0x294) = *(int *)(ar4 + 0x294) + -1;
      }
    }
    FUN_8c031748(ar4,uVar3,ar6,ar7);
    if (cVar12 == '\0') {
      dVar6 = (double)CONCAT44(0x3c23d70a,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar6 = 87960945987420.16;
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar12 == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
      fVar5 = *(float *)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
    }
    if (cVar11 == '\0' && 0.0 < fVar5) {
      if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
      }
    }
    if (cVar12 == '\0') {
      dVar6 = (double)CONCAT44(0x42d40000,fVar5);
    }
    else {
      dVar6 = 211106267570176.0;
    }
    if (cVar11 == '\0') {
      bVar10 = (float)((ulonglong)dVar6 >> 0x20) < in_fr15;
    }
    else {
      bVar10 = dVar6 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar10) {
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x42e80000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 492581279399936.0;
      }
      if (cVar11 == '\0') {
        bVar10 = in_fr15 < (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        bVar10 = (double)CONCAT44(in_fr14,in_fr15) < dVar6;
      }
      if (!bVar10) goto LAB_8c08437e;
LAB_8c08438e:
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0xc0400000,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 1.1920937492693184e-07;
      }
      if (cVar11 == '\0' && (float)((ulonglong)dVar6 >> 0x20) < SUB84(dVar6,0)) {
        if (cVar12 == '\0') {
          dVar6 = (double)CONCAT44(0x3e800000,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar6 = -7.957972465383526e-251;
        }
        if (cVar11 == '\0') {
          fVar5 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) - fVar5);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        if (cVar12 == '\0') {
          *(int *)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
      }
    }
    else {
LAB_8c08437e:
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x42fc0000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 844425070608384.0;
      }
      if (cVar11 == '\0') {
        bVar10 = (float)((ulonglong)dVar6 >> 0x20) < in_fr15;
      }
      else {
        bVar10 = dVar6 < (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar10) {
        if (cVar12 == '\0') {
          dVar6 = (double)CONCAT44(0x43080000,SUB84(dVar6,0));
        }
        else {
          dVar6 = -32.00000799074769;
        }
        if (cVar11 == '\0') {
          bVar10 = in_fr15 < (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          bVar10 = (double)CONCAT44(in_fr14,in_fr15) < dVar6;
        }
        if (bVar10) goto LAB_8c08438e;
      }
    }
    Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_c8);
    Vec3_add(**(undefined4 **)(ar5 + 4),auStack_c8,ar6,ar7,auStack_d8);
    FUN_8c022fc0(auStack_d8,ar4 + 0x280,ar6,ar7);
    if (cVar12 == '\0') {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),in_fr3);
      dVar7 = (double)CONCAT44(0x3f99999a,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar7 = -7.932637885456047e-251;
    }
    if (cVar11 == '\0') {
      bVar10 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20) <
               (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar10 = dVar7 * dVar7 < dVar6;
    }
    Vec3_dtor(auStack_d8,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_c8,0xffffffff,ar6,ar7);
    if (bVar10) {
      if (*(int *)(ar4 + 0x2b8) == 1) {
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
        ar7 = 0x2b4;
        ar6 = 0;
        *(undefined4 *)(ar4 + 0x2b4) = 0;
      }
    }
    else {
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      ar6 = ar4;
    }
    break;
  case 4:
    FUN_8c031748(ar4,FUN_8c031748,ar6,ar7);
    ar6 = **(int **)(ar5 + 4);
    uVar3 = **(undefined4 **)(ar5 + 4);
    FUN_8c031c74(ar4,uVar3,ar6,ar7);
    iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar3,ar6,ar7);
    if (iVar1 == 1) {
      uVar4 = 0;
      *(undefined4 *)(ar4 + 0x134) = 0;
      *(undefined4 *)(ar4 + 0x294) = 0;
      FUN_8c03c314(ar4,0,ar6,ar7);
      *(undefined4 *)(ar4 + 0x178) = 0;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      ar7 = 0;
      ar6 = -1;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,ar6,ar7);
      FUN_8c032204(ar4 + 0xb0,ar4 + 0xb0,ar6,ar7,in_stack_fffffec4);
    }
  }
switchD_8c083dce_default:
  (*(uint*)((uchar*)&uStack_e0+4)) = uVar4;
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  return (*(uint*)((uchar*)&uStack_e0+4));
}

__asm__(".globl _FUN_8c083d8c\n.set _FUN_8c083d8c, _FUN_8c083d8c_def\n");
