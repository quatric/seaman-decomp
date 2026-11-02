#include "../decls.h"
undefined4 FUN_8c0988a4_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int *a6;
  float fVar2;
  ulonglong in_dr0;
  double dVar3;
  undefined8 in_xd0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x214) = 0;
    if (cVar5 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
    }
    *(undefined4 *)(ar4 + 0x300) = 0;
    if (cVar5 == '\0') {
      *(undefined4 *)(ar4 + 0xa0) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0xa0) = in_dr0 & 0xffffffff;
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    FUN_8c03c314(ar4,ar5,ar6,ar7);
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    a6 = ar6;
    FUN_8c0324ac(ar4,ar5,ar6,ar7);
    iVar1 = ar5;
    (**(code **)(*ar6 + 0x128))(ar6,ar5,a6,ar7);
    if (cVar5 == '\0') {
      in_dr0 = CONCAT44((int)(in_dr0 >> 0x20),*(undefined4 *)(ar5 + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(ar5 + 4);
    }
    if (cVar4 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) {
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x300) = 0;
      if (cVar5 == '\0') {
        *(undefined4 *)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xa0) = in_dr0 & 0xffffffff;
      }
      FUN_8c073c9c(ar4,iVar1,a6,ar7);
      return 0;
    }
    if (cVar5 == '\0') {
      dVar3 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0xa0));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0xa0);
      dVar3 = 1.6066918270171573e+73;
    }
    if (cVar4 == '\0') {
      fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar5 == '\0') {
      *(float *)(ar4 + 0xa0) = fVar2;
      return 1;
    }
    *(undefined8 *)(ar4 + 0xa0) = in_xd0;
    return 1;
  }
  iVar1 = *(int *)(ar4 + 0x300);
  *(int *)(ar4 + 0x300) = iVar1 + 1;
  if (0x95 < iVar1 + 1) {
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c0988a4\n.set _FUN_8c0988a4, _FUN_8c0988a4_def\n");
