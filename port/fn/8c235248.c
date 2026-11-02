#include "../decls.h"
undefined4 FUN_8c235248_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  double in_dr2;
  undefined4 uVar3;
  undefined8 in_dr4;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd2;
  bool bVar4;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = auStack_4;
  }
  else {
    puVar2 = auStack_8;
  }
  *(undefined4 *)(puVar2 + -4) = in_PR;
  *(int *)(puVar2 + -8) = ar4;
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = (float)((ulonglong)in_dr4 >> 0x20);
  }
  uVar1 = *(undefined4 *)(&DAT_8c277ac0 + ar4 * 4);
  FUN_8c237124(uVar1,ar5,ar6,ar7,*(undefined4 *)(puVar2 + -8));
  uVar3 = (undefined4)in_dr4;
  if (*(int *)(puVar2 + -8) == 0) {
    uVar1 = FUN_8c23666c(uVar1,ar5,ar6,ar7);
  }
  else {
    uVar1 = FUN_8c236718(uVar1,ar5,ar6,ar7);
  }
  if (in_FPSCR_PR == '\0') {
    _DAT_8c4aa3e0 = (double)CONCAT44(0xbf800000,uVar3);
    uVar3 = 0xbf800000;
    bVar4 = in_fr15 < -1.0;
  }
  else {
    _DAT_8c4aa3e0 = -(double)CONCAT44(0x3f800000,uVar3);
    uVar3 = (undefined4)((ulonglong)_DAT_8c4aa3e0 >> 0x20);
    bVar4 = (double)CONCAT44(in_fr14,in_fr15) < _DAT_8c4aa3e0;
  }
  if (bVar4) {
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar3);
      _DAT_8c4aa3e0 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      in_fr15 = SUB84(in_dr2,0) / in_fr15;
    }
    else {
      in_fr15 = SUB84(in_dr2 / (double)CONCAT44(in_fr14,in_fr15),0);
    }
  }
  else {
    in_fr15 = 1.0;
    _DAT_8c4aa3e0 = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    _DAT_8c4aa3e0 = (double)CONCAT44(uVar1,in_fr15);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c235248\n.set _FUN_8c235248, _FUN_8c235248_def\n");
