#include "../decls.h"
undefined4 FUN_8c2076f6_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 in_dr2;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double in_xd4;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  uVar5 = (undefined4)((ulonglong)in_dr2 >> 0x20);
  if ((*(undefined4 *)0x8c4a9bb0 & 2) == 0) {
    uVar2 = 0;
    piVar1 = ar4;
  }
  else {
    piVar1 = (int *)pvr_20a876((int)0x10c,ar5,ar6,ar7);
    uVar2 = (int)0x3ff & (uint)piVar1;
  }
  iVar3 = *(undefined4 *)0x8c4a9c08 + *(undefined4 *)0x8c4a9c00;
  dVar7 = in_xd4;
  if (in_FPSCR_SZ == '\0') {
    dVar7 = 0.007812501848093234;
  }
  if ((*(undefined4 *)0x8c4a9bcc & 1) == 1) {
    iVar4 = (int)0x1e0;
  }
  else if (((*(undefined4 *)0x8c4a9bcc & 1) == 1) || ((*(undefined4 *)0x8c4a9bcc & 0x2c) == 0)) {
    iVar4 = (int)0xf0;
  }
  else {
    uVar6 = SUB84(dVar7,0);
    if ((*(undefined4 *)0x8c4a9bcc & 0x20) == 0) {
      iVar4 = (int)0xf0;
      iVar3 = iVar3 * 2;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44((undefined4)DAT_8c207808,uVar6);
      }
      else {
        dVar7 = (double)CONCAT44(0x8c4a9e9c,(undefined4)DAT_8c207808);
      }
    }
    else {
      iVar4 = (int)0x1e0;
      dVar7 = in_xd4;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(uVar6,uVar6);
      }
      iVar3 = iVar3 * 2;
    }
  }
  if ((((*(undefined4 *)0x8c4a9bcc & 1) != 1) && ((*(undefined4 *)0x8c4a9bcc & 0x2c) != 0)) &&
     (((uint)piVar1 & 0x40000) != 0)) {
    uVar2 = uVar2 + 1;
  }
  if (in_FPSCR_PR == '\0') {
    iVar3 = (int)((float)(int)(uVar2 - iVar3) * (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar3 = (int)((double)CONCAT44(uVar5,(float)(int)(uVar2 - iVar3)) * dVar7);
  }
  if (iVar4 < iVar3) {
    iVar3 = iVar3 - (*(undefined4 *)0x8c4a9e9c >> 0x10);
  }
  *ar4 = iVar3;
  return 0;
}

__asm__(".globl _FUN_8c2076f6\n.set _FUN_8c2076f6, _FUN_8c2076f6_def\n");
