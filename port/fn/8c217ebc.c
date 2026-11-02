#include "../decls.h"
undefined4 FUN_8c217ebc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  undefined4 uVar5;
  double dVar6;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  double in_xd2;
  undefined8 in_xd4;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  pdVar4 = 0x8c4aa4e0;
  pdVar3 = 0x8c4aa4dc;
  pdVar2 = 0x8c4aa4a8;
  puVar1 = 0x8c4ab158;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)0x8c4ab158 = in_fr4;
    *(undefined4 *)((int)puVar1 + 4) = in_fr5;
    *(undefined4 *)(puVar1 + 1) = in_fr6;
    dVar6 = (double)CONCAT44(*(undefined4 *)pdVar2,*(undefined4 *)pdVar3);
  }
  else {
    *(undefined4 *)0x8c4ab158 = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)((int)puVar1 + 4) = in_xd4;
    puVar1[1] = CONCAT44(in_fr6,in_fr7);
    in_xd2 = *pdVar3;
    dVar6 = *pdVar2;
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * SUB84(dVar6,0),SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 * dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar1 + 0x24) = (int)((ulonglong)dVar6 >> 0x20);
    dVar6 = (double)CONCAT44(*(undefined4 *)pdVar2,*(undefined4 *)pdVar4);
  }
  else {
    *(double *)((int)puVar1 + 0x24) = dVar6;
    dVar6 = *pdVar2;
    in_xd2 = *pdVar4;
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * SUB84(dVar6,0),SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 * dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + 5) = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined4 *)((int)puVar1 + 0x2c) = *(undefined4 *)((int)pdVar2 + 0xc);
    uVar5 = *(undefined4 *)(pdVar2 + 2);
  }
  else {
    puVar1[5] = dVar6;
    uVar5 = SUB84(dVar6,0);
    *(undefined8 *)((int)puVar1 + 0x2c) = *(undefined8 *)((int)pdVar2 + 0xc);
    in_xd2 = pdVar2[2];
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar1 + 6) = uVar5;
  }
  else {
    puVar1[6] = in_xd2;
  }
  return 0x30;
}

__asm__(".globl _FUN_8c217ebc\n.set _FUN_8c217ebc, _FUN_8c217ebc_def\n");
