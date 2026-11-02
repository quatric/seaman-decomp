#include "../decls.h"
undefined4 FUN_8c07af10_def(int ar4,int ar5,int ar6,int *ar7)

{
  int iVar1;
  int iVar2;
  int ar6_00;
  int *ar7_00;
  undefined4 ar5_00;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  double in_dr0;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 in_fr5;
  double dVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  *(undefined4 *)(ar4 + 0x214) = 0;
  iVar1 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7);
  *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfd | 2;
  uVar3 = 1;
  ar5_00 = 0xb;
  if ((5 < *(int *)(ar4 + 0x128)) && (ar6 == 1)) {
    ar5_00 = 0x12;
  }
  iVar2 = *(int *)(ar4 + 300);
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      iVar1 = FUN_8c034148(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          if (iVar1 != 2) {
            return 1;
          }
          CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 1:
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6_00,ar7_00);
      uVar4 = SUB84(in_dr0,0);
      if (iVar1 == 1) {
        iVar1 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
        if (cVar10 == '\0') {
          dVar8 = (double)CONCAT44((float)iVar1,in_fr5);
        }
        else {
          dVar8 = (double)iVar1;
        }
        if (cVar10 == '\0') {
          bVar9 = (float)((ulonglong)dVar8 >> 0x20) < 0.0;
        }
        else {
          bVar9 = dVar8 < (double)(ulonglong)uVar4;
        }
        if ((bVar9) && (cVar11 != '\0')) {
          uVar4 = 0x4f800000;
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
        if (ar6 == 0) {
          FUN_8c03c314(ar4,ar5_00,ar6_00,ar7_00);
          if (cVar11 == '\0') {
            uVar6 = CONCAT44(0xbba3d70a,uVar4);
            *(undefined4 *)(ar4 + 0xa0) = 0xbba3d70a;
          }
          else {
            uVar6 = 0x298bba3d70a;
            *(undefined8 *)(ar4 + 0xa0) = 0x298bba3d70a;
          }
          *(undefined4 *)(ar4 + 0x298) = 0;
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2c) = uVar6 & 0xffffffff;
          }
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
        else {
          *(undefined4 *)(ar4 + 300) = 5;
          uVar3 = 0;
        }
      }
      break;
    case 2:
      (**(code **)(*ar7 + 0x184))(ar7,iVar1,ar6_00,ar7_00);
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar5 + 4));
      }
      if (cVar10 != '\0' || (float)((ulonglong)in_dr0 >> 0x20) <= SUB84(in_dr0,0)) {
        FUN_8c031748(ar4,iVar1,ar6_00,ar7_00);
        FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00);
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 3:
      (**(code **)(*ar7 + 0x184))(ar7,iVar1,ar6_00,ar7_00);
      if (cVar11 == '\0') {
        uVar6 = CONCAT44(*(undefined4 *)(ar5 + 4),SUB84(in_dr0,0));
      }
      else {
        uVar6 = *(ulonglong *)(ar5 + 4);
      }
      FUN_8c022d04(ar4 + 0x14,iVar1,ar6_00,ar7_00);
      Vec3_length_sq(ar4 + 0x14,iVar1,ar6_00,ar7_00);
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x28) = (int)(uVar6 >> 0x20);
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = uVar6;
      }
      Vec3_length(ar4 + 0x14,iVar1,ar6_00,ar7_00);
      iVar2 = *(int *)(ar4 + 0x294);
      *(int *)(ar4 + 0x294) = iVar2 + 1;
      if (0x1517 < iVar2 + 1) {
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar6 & 0xffffffff;
        }
        FUN_8c03c314(ar4,iVar1,ar6_00,ar7_00);
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0xa0) = 0x3d4ccccd;
        }
        else {
          *(undefined8 *)(ar4 + 0xa0) = 0x12c3d4ccccd;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 4:
      iVar1 = ar5;
      (**(code **)(*ar7 + 0x128))(ar7,ar5,ar6_00,ar7_00);
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x7c));
      }
      if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr0,0) + (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        fVar5 = SUB84(in_dr0 + in_dr0,0);
      }
      if (cVar11 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)(ar5 + 4),fVar5);
      }
      else {
        uVar7 = *(undefined8 *)(ar5 + 4);
      }
      if (cVar10 != '\0' || (float)((ulonglong)uVar7 >> 0x20) <= (float)uVar7) {
        FUN_8c031700(ar4,iVar1,ar6_00,ar7_00);
        FUN_8c031748(ar4,iVar1,ar6_00,ar7_00);
        FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        uVar3 = 0;
      }
      break;
    case 5:
      FUN_8c031700(ar4,iVar1,ar6_00,ar7_00);
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c07af10\n.set _FUN_8c07af10, _FUN_8c07af10_def\n");
