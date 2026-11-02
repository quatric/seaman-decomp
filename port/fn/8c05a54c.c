#include "../decls.h"
undefined4 FUN_8c05a54c_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double in_dr0;
  double dVar7;
  undefined4 uVar9;
  double dVar8;
  float fVar10;
  undefined4 in_fr3;
  float fVar11;
  undefined8 in_dr12;
  double dVar12;
  undefined4 in_fr15;
  undefined8 in_xd0;
  double in_xd12;
  bool bVar13;
  char cVar14;
  char cVar15;
  undefined4 in_stack_fffffefc;
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  uVar4 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  cVar15 = '\0';
  cVar14 = '\0';
  iVar3 = 1;
  iVar2 = *(int *)(ar4 + 300);
  if ((iVar2 < 0xb) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      if (*(int *)(ar4 + 0x2ec) < 5) {
        *(undefined4 *)(ar4 + 0x32c) = 6;
      }
      else {
        iVar3 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x2ec),8,ar6,ar7);
        if (iVar3 == 0) {
          *(undefined4 *)(ar4 + 0x32c) = 2;
        }
        else {
          *(undefined4 *)(ar4 + 0x32c) = 1;
        }
      }
      *(int *)(ar4 + 0x2ec) = *(int *)(ar4 + 0x2ec) + 1;
      iVar3 = *(int *)(ar4 + 0x32c);
      if ((iVar3 < 7) && (-1 < iVar3)) {
                    
        switch(iVar3) {
        default:
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          break;
        case 2:
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 3;
          break;
        case 3:
          break;
        case 4:
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 5;
          break;
        case 5:
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 7;
          break;
        case 6:
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 9;
        }
      }
      break;
    case 1:
      iVar3 = rand_range(ar4,0,0x10,ar7);
      if (iVar3 == 0) {
        ar7 = *(int *)(ar4 + 0x244);
        FUN_8c033474(ar4,0xe,ar5,ar7);
      }
      *(uint *)(ar4 + 0x2f4) = *(uint *)(ar4 + 0x2f4) ^ 1;
      if (*(int *)(ar4 + 0x2f4) == 0) {
        iVar3 = ar4;
        uVar4 = libgcc_divide_helper_0101e4(*(undefined4 *)(ar4 + 0x2ec),4,ar4,ar7);
        iVar3 = libgcc_divide_helper_01031c(uVar4,9,iVar3,ar7);
        ar7 = 0;
        ar6 = -1;
        iVar3 = iVar3 + 0x2f;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar3,0xffffffff,0);
      }
      else {
        iVar3 = ar4;
        uVar4 = libgcc_divide_helper_0101e4(*(undefined4 *)(ar4 + 0x2ec),4,ar4,ar7);
        iVar3 = libgcc_divide_helper_01031c(uVar4,9,iVar3,ar7);
        ar7 = 0;
        ar6 = -1;
        iVar3 = iVar3 + 0x26;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar3,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar3,ar6,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 2:
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar3,ar6,ar7);
      if (iVar3 == 1) {
        *(undefined4 *)(ar4 + 300) = 0;
      }
      break;
    case 3:
      uVar5 = 0x10;
      uVar6 = 0;
      iVar3 = rand_range(ar4,0,0x10,ar7);
      if (iVar3 == 0) {
        ar7 = *(int *)(ar4 + 0x244);
        uVar6 = 0xe;
        FUN_8c033474(ar4,0xe,ar5,ar7);
        uVar5 = ar5;
      }
      *(uint *)(ar4 + 0x2f4) = *(uint *)(ar4 + 0x2f4) ^ 1;
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x2e4));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x2e4);
        dVar7 = 4.51450460004832e-312;
      }
      if (cVar14 == '\0') {
        fVar11 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar15 == '\0') {
        *(float *)(ar4 + 0x2e4) = fVar11;
        fVar11 = *(float *)(ar4 + 0x2e4);
      }
      else {
        *(undefined8 *)(ar4 + 0x2e4) = in_xd0;
      }
      uVar9 = 0x3f800000;
      if (fVar11 == 1.0) {
        FUN_8c0230f0(ar4 + 0x14,uVar6,uVar5,ar7,auStack_30);
        Vec3_ctor_xyz(auStack_40,uVar6,uVar5,ar7);
        FUN_8c022dac(auStack_30,auStack_40,uVar5,ar7);
        if (cVar15 == '\0') {
          *(undefined4 *)(ar4 + 0x224) = uVar9;
        }
        else {
          *(ulonglong *)(ar4 + 0x224) = CONCAT44(uVar9,fVar11);
        }
        Vec3_dtor(auStack_40,0xffffffff,uVar5,ar7);
        Vec3_dtor(auStack_30,0xffffffff,uVar5,ar7);
      }
      else {
        FUN_8c0230f0(ar4 + 0x14,uVar6,uVar5,ar7,auStack_50);
        Vec3_ctor_xyz(auStack_60,uVar6,uVar5,ar7);
        FUN_8c022dac(auStack_50,auStack_60,uVar5,ar7);
        if (cVar15 == '\0') {
          *(undefined4 *)(ar4 + 0x224) = uVar9;
        }
        else {
          *(ulonglong *)(ar4 + 0x224) = CONCAT44(uVar9,fVar11);
        }
        Vec3_dtor(auStack_60,0xffffffff,uVar5,ar7);
        Vec3_dtor(auStack_50,0xffffffff,uVar5,ar7);
      }
      ar7 = 0;
      ar6 = -1;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x18,0xffffffff,0);
      iVar2 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x18,ar6,ar7);
      iVar3 = 0x31;
      iVar1 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x31,ar6,ar7);
      if (cVar14 == '\0') {
        dVar7 = (double)CONCAT44((float)iVar2,in_fr3);
      }
      else {
        dVar7 = (double)iVar2;
      }
      fVar10 = (float)((ulonglong)dVar7 >> 0x20);
      if (cVar14 == '\0') {
        bVar13 = fVar10 < 0.0;
      }
      else {
        bVar13 = dVar7 < (double)(ulonglong)(uint)fVar11;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar8 = (double)CONCAT44(0x4f800000,fVar11);
        }
        else {
          dVar8 = 8192.002426147461;
        }
        if (cVar14 == '\0') {
          dVar7 = (double)CONCAT44(fVar10 + (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar7,0));
        }
        else {
          dVar7 = dVar7 + dVar8;
        }
      }
      fVar11 = (float)iVar1;
      dVar8 = (double)(ulonglong)(uint)fVar11;
      if (cVar14 == '\0' && fVar11 < 0.0) {
        if (cVar15 == '\0') {
          dVar8 = (double)CONCAT44(0x4f800000,fVar11);
        }
        else {
          dVar8 = 8192.002426147461;
        }
        if (cVar14 == '\0') {
          fVar11 = (float)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)CONCAT44(fVar11,SUB84(dVar8,0) + fVar11);
        }
        else {
          dVar8 = dVar8 + dVar8;
        }
      }
      if (cVar14 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / SUB84(dVar8,0),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 / dVar8;
      }
      if (cVar15 == '\0') {
        in_dr0 = (double)CONCAT44(0x40c00000,SUB84(dVar8,0));
      }
      else {
        in_dr0 = -8.399316855946905e-251;
      }
      if (cVar14 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) *
                                 (float)((ulonglong)in_dr0 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 * in_dr0;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x278) = (int)((ulonglong)dVar7 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x278) = dVar7;
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar3,ar6,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 4:
      CAnimBody_GetCurFrame(ar4 + 0xb0,iVar3,ar6,ar7,in_stack_fffffefc);
      dVar7 = in_dr0;
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
      }
      uVar5 = 0x18;
      iVar3 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x18,ar6,ar7);
      fVar11 = (float)iVar3;
      dVar12 = (double)CONCAT44(uVar4,fVar11);
      dVar8 = (double)((ulonglong)in_dr0 & 0xffffffff);
      if (cVar14 == '\0') {
        bVar13 = fVar11 < 0.0;
      }
      else {
        bVar13 = dVar12 < dVar8;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar8 = (double)CONCAT44(0x4f800000,SUB84(in_dr0,0));
        }
        else {
          dVar8 = 8192.002426147461;
        }
        if (cVar14 == '\0') {
          dVar12 = (double)CONCAT44(uVar4,fVar11 + (float)((ulonglong)dVar8 >> 0x20));
        }
        else {
          dVar12 = dVar12 + dVar8;
        }
      }
      if (cVar15 == '\0') {
        dVar8 = (double)CONCAT44(0x3f000000,SUB84(dVar8,0));
      }
      else {
        dVar8 = 524288.123046875;
      }
      if (cVar14 == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                                  SUB84(dVar12,0) * (float)((ulonglong)dVar8 >> 0x20));
      }
      else {
        dVar12 = dVar12 * dVar8;
      }
      if (cVar15 == '\0') {
        in_xd12 = (double)CONCAT44(SUB84(dVar12,0),0x41200000);
      }
      fVar11 = (float)((ulonglong)dVar7 >> 0x20);
      if (cVar14 == '\0') {
        fVar10 = (float)((ulonglong)in_xd12 >> 0x20) - SUB84(in_xd12,0);
        in_xd12 = (double)CONCAT44(fVar10,SUB84(in_xd12,0));
        bVar13 = fVar11 < fVar10;
      }
      else {
        in_xd12 = in_xd12 - in_xd12;
        bVar13 = dVar7 < in_xd12;
      }
      if (!bVar13) {
        if (cVar15 == '\0') {
          in_xd12 = (double)CONCAT44(0x41200000,SUB84(in_xd12,0));
        }
        else {
          in_xd12 = 134217760.5625;
        }
        if (cVar14 == '\0') {
          bVar13 = fVar11 < SUB84(dVar12,0) + (float)((ulonglong)in_xd12 >> 0x20);
        }
        else {
          bVar13 = dVar7 < dVar12 + in_xd12;
        }
        if (bVar13) {
          if (cVar15 == '\0') {
            in_xd12 = (double)((ulonglong)in_xd12 & 0xffffffff);
          }
          else {
            in_xd12 = *(double *)(ar4 + 0x278);
          }
          Vec3_set_xyz(auStack_6c,uVar5,ar6,ar7);
          FUN_8c023484(ar4 + 0x14,auStack_6c,ar6,ar7,auStack_7c);
          Vec3_assign(ar4 + 0x14,auStack_7c,ar6,ar7);
          Vec3_dtor(auStack_7c,0xffffffff,ar6,ar7);
          object_dtor_delete(auStack_6c,0xffffffff,ar6,ar7);
          Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
        }
      }
      uVar4 = SUB84(in_xd12,0);
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0x278,ar6,ar7);
      if (iVar3 == 1) {
        if (cVar15 == '\0') {
          *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar4);
        }
        *(undefined4 *)(ar4 + 300) = 0;
      }
      break;
    case 5:
      ar7 = 0;
      ar6 = -1;
      uVar4 = 0x1e;
      iVar3 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1e,0xffffffff,0);
      if (iVar3 != 6) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6,ar7);
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      iVar3 = ar4;
    case 6:
      uVar4 = SUB84(in_dr0,0);
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar3,ar6,ar7);
      if (iVar3 == 1) {
        if (cVar15 == '\0') {
          *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar4);
        }
        *(undefined4 *)(ar4 + 300) = 0;
      }
      break;
    case 7:
      ar7 = 0;
      uVar4 = 0xffffffff;
      iVar3 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1f,0xffffffff,0);
      if (iVar3 != 6) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,uVar4,ar7);
      }
      ar6 = *(int *)(ar4 + 300) + 1;
      *(int *)(ar4 + 300) = ar6;
    case 8:
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,ar6,ar7);
      if (iVar3 == 1) {
        *(undefined4 *)(ar4 + 300) = 0;
      }
      break;
    case 9:
      uVar6 = 0;
      uVar5 = 0xffffffff;
      uVar4 = 0x3f;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x3f,0xffffffff,0);
      if (*(int *)(ar4 + 0x128) == 3) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,uVar5,uVar6);
      }
      else {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar5,uVar6);
      }
      ar7 = *(int *)(ar4 + 300);
      ar6 = ar7 + 1;
      *(int *)(ar4 + 300) = ar6;
    case 10:
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0x278,ar6,ar7);
      if (iVar3 == 1) {
        *(undefined4 *)(ar4 + 300) = 0;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c05a54c\n.set _FUN_8c05a54c, _FUN_8c05a54c_def\n");
