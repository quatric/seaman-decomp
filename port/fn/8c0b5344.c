#include "../decls.h"
int FUN_8c0b5344_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  int *piVar3;
  uint uVar4;
  float fVar5;
  double in_dr0;
  double dVar6;
  ulonglong uVar7;
  ulonglong in_xd0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar1 = ar4[0x1a];
  if (iVar1 == 0) {
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5_00 = 0;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0);
    uVar4 = SUB84(in_dr0,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ar5_00,ar6,ar7);
    uVar7 = (ulonglong)uVar4;
    if (cVar9 == '\0') {
      ar4[10] = 0;
    }
    else {
      *(ulonglong *)(ar4 + 10) = uVar7;
    }
    FUN_8c022d04(ar4 + 5,ar5_00,ar6,ar7);
    piVar3 = ar4 + 0x28;
    if (cVar9 == '\0') {
      in_dr0 = (double)CONCAT44(0x41100000,(int)uVar7);
      *piVar3 = 0x41100000;
    }
    else {
      in_dr0 = -8.625516823227636e-251;
      piVar3[0] = 0x41100000;
      piVar3[1] = -0x73fc3cec;
    }
    FUN_8c03c314(ar4,ar5_00,ar6,ar7);
    ar4[0x1a] = ar4[0x1a] + 1;
  }
  else {
    ar5_00 = ar5;
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return iVar1;
      }
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),ar4[10]);
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + 10);
      }
      if (cVar8 == '\0') {
        fVar5 = SUB84(in_dr0,0) * (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        fVar5 = SUB84(in_dr0 * in_dr0,0);
      }
      if (cVar9 == '\0') {
        ar4[10] = (int)fVar5;
        fVar5 = (float)ar4[10];
      }
      else {
        *(ulonglong *)(ar4 + 10) = in_xd0;
      }
      if (cVar9 == '\0') {
        uVar7 = CONCAT44(0x3dcccccd,fVar5);
      }
      else {
        uVar7 = 0x803dcccccd;
      }
      if (cVar8 != '\0' || (float)(uVar7 >> 0x20) <= (float)uVar7) {
        return (int)&DAT_8c0b54e8;
      }
      if (cVar9 == '\0') {
        ar4[10] = 0;
      }
      else {
        *(ulonglong *)(ar4 + 10) = uVar7 & 0xffffffff;
      }
      piVar3 = ar4 + 0x20;
      Vec3_assign(ar4 + 5,piVar3,ar6,ar7);
      ar4[0x1a] = 0;
      uVar2 = (**(code **)(*ar4 + 0x2c))(ar4,piVar3,ar6,ar7);
      return uVar2;
    }
  }
  uVar4 = SUB84(in_dr0,0);
  if (ar5 == 0) {
    FUN_8c031748(ar4,ar5_00,ar6,ar7);
    uVar7 = (ulonglong)uVar4;
    if (cVar9 == '\0') {
      ar4[0x28] = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar7;
    }
    Vec3_length_sq(ar4 + 1,ar5_00,ar6,ar7);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(0x3f4ccccd,(int)(uVar7 >> 0x20));
      uVar7 = in_xd0;
    }
    else {
      dVar6 = 0.0046875001760781744;
    }
    if (cVar8 == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar9 == '\0') {
      ar4[10] = (int)fVar5;
    }
    else {
      *(ulonglong *)(ar4 + 10) = uVar7;
    }
    ar5 = 0x68;
    ar4[0x1a] = ar4[0x1a] + 1;
  }
  else if ((ar5 == 1) || (ar5 == 2)) {
    ar4[0x1a] = 0;
    if (cVar9 == '\0') {
      ar4[10] = 0;
    }
    else {
      *(ulonglong *)(ar4 + 10) = (ulonglong)in_dr0 & 0xffffffff;
    }
    if (cVar9 == '\0') {
      ar4[0x28] = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
    }
    ar5 = FUN_8c031748(ar4,ar5_00,ar6,ar7);
  }
  return ar5;
}

__asm__(".globl _FUN_8c0b5344\n.set _FUN_8c0b5344, _FUN_8c0b5344_def\n");
