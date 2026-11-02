#include "../decls.h"
undefined4 FUN_8c054d6c_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int ar6_00;
  int ar7_00;
  undefined4 uVar3;
  undefined4 in_fr1;
  double dVar4;
  double in_dr14;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined1 auStack_2c [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  iVar2 = ar6;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_copy(auStack_2c,ar6,ar6,ar7);
  if (cVar7 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x48));
    dVar4 = (double)CONCAT44(0x40200000,in_fr1);
  }
  else {
    dVar4 = 6.3713027236808e-312;
  }
  if (cVar6 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) * (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    in_dr14 = in_dr14 * dVar4;
  }
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar2,ar6_00,ar7_00);
    if (*(int *)(ar4 + 0x128) < 3) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 2;
    }
    else if (ar7 == 1) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    else {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 2;
    }
  }
  else if (iVar1 == 1) {
    ar6_00 = ar4 + 0x34c;
    iVar2 = FUN_8c0564c4(ar4,ar5,ar6_00,ar7);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0x178) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    ar7_00 = ar7;
    if ((*(int *)(ar4 + 0x2b8) == 2) && (*(int *)(ar4 + 0x21c) == 1)) {
      *(undefined4 *)(ar4 + 300) = 3;
    }
  }
  else if (iVar1 == 2) {
    ar6_00 = ar6;
    iVar2 = pure_virtual_stub(ar4,ar5,ar6,ar7_00);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 300) = 3;
    }
    else {
      FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
      if (cVar6 == '\0') {
        bVar5 = (float)((ulonglong)dVar4 >> 0x20) < SUB84(in_dr14,0);
      }
      else {
        bVar5 = dVar4 < in_dr14;
      }
      if ((bVar5) && (*(int *)(ar4 + 0x304) == 1)) {
        *(undefined4 *)(ar4 + 300) = 3;
      }
    }
    if (*(int *)(ar4 + 0x21c) == 1) {
      *(undefined4 *)(ar4 + 300) = 3;
    }
  }
  else if (iVar1 == 3) {
    uVar3 = 0;
    *(undefined4 *)(ar4 + 300) = 0;
    Vec3_assign(ar4 + 600,ar6,ar6_00,ar7_00);
    *(undefined4 *)(ar4 + 0x290) = 0;
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(undefined4 *)(ar4 + 0x280) = 0;
  }
  Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7_00);
  return uVar3;
}

__asm__(".globl _FUN_8c054d6c\n.set _FUN_8c054d6c, _FUN_8c054d6c_def\n");
