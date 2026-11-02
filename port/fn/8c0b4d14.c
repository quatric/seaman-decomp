#include "../decls.h"
undefined4 FUN_8c0b4d14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 uVar6;
  float fVar7;
  undefined8 in_dr0;
  float fVar9;
  double dVar8;
  undefined4 uVar10;
  double in_dr14;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined4 in_stack_00000000;
  undefined4 ain0;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [8];
  double dStack_24;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar6 = 1;
  uVar4 = ar5;
  ar6_00 = ar6;
  ain0 = ar7;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  Vec3_set_zero(auStack_38,uVar4,ar6_00,ar7);
  iVar2 = get_field_6c_028cc4(ar5,uVar4,ar6_00,ar7);
  if (iVar2 == 0) {
    object_dtor_delete(auStack_38,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7);
    return 2;
  }
  iVar3 = *(int *)(ar4 + 300);
  if (iVar3 == 0) {
    ar7 = 0;
    ar6_00 = 0xffffffff;
    uVar4 = 0xb;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xb,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 == 2) {
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7,ain0);
      if (cVar13 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   (int)((ulonglong)in_dr0 >> 0x20));
      }
      if (cVar12 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr14,0) + 1.0);
      }
      else {
        in_dr14 = in_dr14 + (double)CONCAT44(0x3f800000,(int)in_dr0);
      }
      iVar3 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x16,ar6_00,ar7);
      fVar7 = (float)iVar3;
      dVar8 = (double)(ulonglong)(uint)fVar7;
      if (cVar12 == '\0' && fVar7 < 0.0) {
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x4f800000,fVar7);
        }
        else {
          dVar8 = -8.62186752335918e-251;
        }
        if (cVar12 == '\0') {
          fVar7 = (float)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)CONCAT44(fVar7,SUB84(dVar8,0) + fVar7);
        }
        else {
          dVar8 = dVar8 + dVar8;
        }
      }
      if (cVar12 == '\0') {
        bVar11 = SUB84(in_dr14,0) < SUB84(dVar8,0);
      }
      else {
        bVar11 = in_dr14 < dVar8;
      }
      if (!bVar11) {
        iVar3 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x16,ar6_00,ar7);
        dVar8 = (double)((ulonglong)dVar8 & 0xffffffff);
        if (cVar12 == '\0') {
          bVar11 = (float)iVar3 < 0.0;
        }
        else {
          bVar11 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(float)iVar3) < dVar8;
        }
        if (bVar11) {
          if (cVar13 == '\0') {
            dVar8 = 9.046256971665328e+74;
          }
          else {
            dVar8 = -8.62186752335918e-251;
          }
        }
      }
      uVar10 = (undefined4)((ulonglong)dVar8 >> 0x20);
      ar5_00 = 0x16;
      uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x16,ar6_00,ar7);
      puVar5 = (undefined4 *)deref_u32(uVar4,ar5_00,ar6_00,ar7);
      FUN_8c034384(ar4 + 0xb0,*(undefined4 *)*puVar5,ar6_00,ar7);
      Vec3_assign(auStack_2c,auStack_48,ar6_00,ar7);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7,ain0);
      if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44(0x41a00000,uVar10);
      }
      else {
        dVar8 = 3.14599345710447e-312;
      }
      dVar1 = dStack_24;
      if ((cVar12 != '\0' || (float)((ulonglong)dVar8 >> 0x20) <= SUB84(dVar8,0)) &&
         (dVar8 = (double)((ulonglong)dVar8 & 0xffffffff), dVar1 = dVar8, cVar13 == '\0')) {
        dStack_24 = (double)((ulonglong)dStack_24 & 0xffffffff00000000);
        dVar1 = dStack_24;
      }
      dStack_24 = dVar1;
      vec3_copy_8c02b5fc(auStack_54,ain0,ar6_00,ar7);
      FUN_8c023484(auStack_2c,auStack_54,ar6_00,ar7,auStack_64);
      Vec3_add(auStack_64,ar6,ar6_00,ar7,auStack_74);
      Vec3_assign(auStack_2c,auStack_74,ar6_00,ar7);
      Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
      uVar4 = 0xffffffff;
      object_dtor_delete(auStack_54,0xffffffff,ar6_00,ar7);
      FUN_8c036988(iVar2,uVar4,ar6_00,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7,ain0);
      if (cVar12 == '\0') {
        iVar2 = (int)(float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        iVar2 = (int)dVar8;
      }
      if (iVar2 == 0x28) {
        FUN_8c03f3e8(ar5,uVar4,ar6_00,ar7);
        *(undefined4 *)(ar4 + 0x348) = 1;
      }
      iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6_00,ar7);
      if (iVar2 == 1) {
        uVar6 = 0;
        *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb | 4;
        *(undefined4 *)(ar4 + 300) = 0;
      }
    }
    goto LAB_8c0b4fe2;
  }
  fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
  CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6_00,ar7);
  CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7,ain0);
  if (cVar13 == '\0') {
    fVar9 = 15.0;
  }
  else {
    fVar7 = 15.0;
    fVar9 = 2.57839e-43;
  }
  if (cVar12 != '\0' || fVar9 <= fVar7) {
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    FUN_8c033474(ar4,0xc,ar6,in_stack_00000000);
    *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb;
    ar6_00 = ar6;
    ar7 = in_stack_00000000;
  }
LAB_8c0b4fe2:
  object_dtor_delete(auStack_38,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7);
  return uVar6;
}

__asm__(".globl _FUN_8c0b4d14\n.set _FUN_8c0b4d14, _FUN_8c0b4d14_def\n");
