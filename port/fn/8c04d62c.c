#include "../decls.h"
undefined4 FUN_8c04d62c_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  int *ar6_00;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  double in_dr0;
  undefined4 uVar10;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  undefined4 in_fr3;
  undefined4 in_fr5;
  ulonglong in_dr14;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar3 = 1;
  dVar8 = (double)(in_dr14 & 0xffffffff00000000);
  if (2 < *(int *)(ar4 + 0x128)) {
    in_dr0 = (double)CONCAT44(0x3ecccccd,SUB84(in_dr0,0));
    dVar8 = (double)CONCAT44((int)(in_dr14 >> 0x20),*(float *)(ar4 + 0x48) * 0.4);
  }
  iVar1 = *(int *)(ar4 + 300);
  if ((iVar1 < 7) && (-1 < iVar1)) {
    ar5_00 = ar5;
    ar6_00 = ar6;
                    
    switch(iVar1) {
    case 0:
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (iVar1 == 1) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)in_dr0 & 0xffffffff;
        }
        *(undefined4 *)(ar4 + 0x2e8) = 1;
        FUN_8c022d04(ar4 + 0x2d4,ar5,ar6,ar7);
        FUN_8c022d04(ar4 + 0x2a8,ar5,ar6,ar7);
      }
      break;
    case 1:
      ar7 = 0;
      ar6_00 = (int *)0xffffffff;
      ar5_00 = 9;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      if (cVar13 == '\0') {
        in_fr5 = 0x3f99999a;
      }
      else {
        in_fr5 = 0x3f4ccccd;
      }
      FUN_8c032ab0(ar4,ar5_00,ar6_00,ar7);
      if (cVar13 == '\0') {
        *(int *)(ar4 + 0x278) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x278) = in_dr0;
      }
    case 2:
      uVar2 = SUB84(in_dr0,0);
      if (cVar13 != '\0') {
        in_fr5 = (undefined4)*(undefined8 *)(ar4 + 0x94);
      }
      FUN_8c03c314(ar4,ar5_00,ar6_00,ar7);
      if (cVar13 == '\0') {
        fVar6 = -0.005;
        *(undefined4 *)(ar4 + 0xa0) = 0xbba3d70a;
      }
      else {
        uVar2 = 0xbba3d70a;
        fVar6 = 5.43704e-43;
        *(undefined8 *)(ar4 + 0xa0) = 0x184bba3d70a;
      }
      (**(code **)(*ar6 + 0x184))(ar6,ar5_00,ar6_00,ar7);
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x48));
        uVar2 = in_fr3;
      }
      else {
        dVar7 = -8.332610302023455e-251;
      }
      if (cVar12 == '\0') {
        fVar4 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
        dVar8 = (double)CONCAT44((fVar6 - fVar4) - SUB84(dVar8,0),uVar2);
      }
      else {
        fVar4 = SUB84(dVar7 * dVar7,0);
        dVar8 = ((double)CONCAT44(fVar6,uVar2) - dVar7 * dVar7) - dVar8;
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),fVar4);
      }
      else {
        dVar7 = *(double *)(ar5 + 4);
      }
      if (cVar12 == '\0') {
        bVar11 = (float)((ulonglong)dVar8 >> 0x20) < (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        bVar11 = dVar8 < dVar7;
      }
      if (bVar11) {
        FUN_8c031748(ar4,ar5_00,ar6_00,ar7);
        dVar7 = (double)((ulonglong)dVar7 & 0xffffffff);
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0xa0) = 0;
        }
        else {
          *(double *)(ar4 + 0xa0) = dVar7;
        }
        vec3_clear(ar4 + 0x90,ar5_00,ar6_00,ar7);
      }
      uVar5 = SUB84(dVar7,0);
      if (cVar13 != '\0') {
        in_fr5 = 0x42c80000;
      }
      FUN_8c05ae54(ar4,ar5_00,ar6_00,ar7);
      if (cVar13 != '\0') {
        in_fr5 = (undefined4)*(undefined8 *)(ar4 + 0x278);
      }
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,ar6_00,ar7);
      if (iVar1 == 1) {
        uVar2 = 9;
        iVar1 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,9,ar6_00,ar7);
        if (cVar12 == '\0') {
          dVar8 = (double)CONCAT44((float)iVar1,in_fr5);
        }
        else {
          dVar8 = (double)iVar1;
        }
        if (cVar12 == '\0') {
          bVar11 = (float)((ulonglong)dVar8 >> 0x20) < 0.0;
        }
        else {
          bVar11 = dVar8 < (double)(ulonglong)uVar5;
        }
        if ((bVar11) && (cVar13 != '\0')) {
          uVar5 = 0x4f800000;
        }
        uVar10 = 0x3f800000;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7);
        FUN_8c03c314(ar4,uVar2,ar6_00,ar7);
        FUN_8c032ab0(ar4,uVar2,ar6_00,ar7);
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0xa0) = uVar10;
        }
        else {
          *(ulonglong *)(ar4 + 0xa0) = CONCAT44(uVar10,uVar5);
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 3:
      iVar1 = ar5;
      (**(code **)(*ar6 + 0x184))(ar6,ar5,ar6,ar7);
      if (cVar13 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
        dVar7 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar7 = 1.53683721570537e-311;
      }
      if (cVar12 == '\0') {
        fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
        dVar8 = (double)CONCAT44(((float)((ulonglong)in_dr0 >> 0x20) - fVar6) - SUB84(dVar8,0),
                                 SUB84(in_dr0,0));
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
        dVar8 = (in_dr0 - dVar7 * dVar7) - dVar8;
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),fVar6);
      }
      else {
        dVar7 = *(double *)(ar5 + 4);
      }
      if (cVar12 == '\0') {
        bVar11 = (float)((ulonglong)dVar8 >> 0x20) < (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        bVar11 = dVar8 < dVar7;
      }
      if (bVar11) {
        FUN_8c022d04(ar4 + 0x2d4,iVar1,ar6,ar7);
        uVar5 = SUB84(dVar7,0);
        FUN_8c022d04(ar4 + 0x2a8,iVar1,ar6,ar7);
        FUN_8c022d04(ar4 + 0x90,iVar1,ar6,ar7);
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0xa0) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0xa0) = (ulonglong)uVar5;
        }
        iVar1 = ar4 + 0x14;
        Vec3_assign(ar4 + 0x80,iVar1,ar6,ar7);
        FUN_8c031748(ar4,iVar1,ar6,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x280) = 0x1518;
      }
      break;
    case 4:
      FUN_8c031748(ar4,ar5,ar6,ar7);
      iVar1 = *(int *)(ar4 + 0x280);
      *(int *)(ar4 + 0x280) = iVar1 + -1;
      if (iVar1 < 1) {
        uVar9 = (ulonglong)in_dr0 & 0xffffffff;
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar9;
        }
        FUN_8c03c314(ar4,ar5,ar6,ar7);
        FUN_8c032ab0(ar4,ar5,ar6,ar7);
        if (cVar13 == '\0') {
          *(int *)(ar4 + 0xa0) = (int)(uVar9 >> 0x20);
        }
        else {
          *(ulonglong *)(ar4 + 0xa0) = uVar9;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        FUN_8c031700(ar4,ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 0x280) = 0;
      }
      break;
    case 5:
      iVar1 = ar5;
      (**(code **)(*ar6 + 0x128))(ar6,ar5,ar6,ar7);
      uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44(0x3da3d70a,*(undefined4 *)(ar4 + 0x48));
        uStack_3c = uVar2;
      }
      else {
        uStack_3c = SUB84(in_dr0,0);
        dVar8 = -8.332610297860959e-251;
        uStack_38 = uVar2;
      }
      if (cVar12 == '\0') {
        fVar6 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44(uStack_3c,fVar6);
      }
      else {
        dVar8 = (double)CONCAT44(uStack_38,uStack_3c);
      }
      if (cVar12 == '\0') {
        fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (cVar13 == '\0') {
        uVar9 = CONCAT44(*(undefined4 *)(ar5 + 4),fVar6);
      }
      else {
        uVar9 = *(ulonglong *)(ar5 + 4);
      }
      if (cVar12 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
        uVar9 = uVar9 & 0xffffffff;
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0x70) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x70) = uVar9;
        }
        FUN_8c031748(ar4,iVar1,ar6,ar7);
        uVar5 = (uint)uVar9;
        FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7fc0c,ar6,ar7);
        *(undefined4 *)(ar4 + 0x280) = 0;
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0xa0) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0xa0) = (ulonglong)uVar5;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x2e8) = 0;
      }
      break;
    case 6:
      *(undefined4 *)(ar4 + 0x70) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c04d62c\n.set _FUN_8c04d62c, _FUN_8c04d62c_def\n");
