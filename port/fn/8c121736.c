#include "../decls.h"
uint FUN_8c121736_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int in_r0;
  uint uVar3;
  uint uVar4;
  int unaff_r14;
  undefined *puVar5;
  double in_dr2;
  float fVar6;
  double in_dr4;
  float fVar8;
  double in_dr6;
  double dVar9;
  bool bVar10;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  char cVar2;
  double dVar7;
  
  if (in_FPSCR_SZ == 0) {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(in_r0 + unaff_r14));
  }
  if (in_FPSCR_PR == 0) {
    dVar9 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr6,0) + SUB84(in_dr2,0));
  }
  else {
    dVar9 = in_dr6 + in_dr2;
  }
  if (in_FPSCR_SZ == 0) {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c12195c);
  }
  fVar8 = (float)((ulonglong)dVar9 >> 0x20);
  if (in_FPSCR_PR == 0) {
    fVar6 = SUB84(in_dr4,0) + SUB84(in_dr2,0);
    dVar7 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),fVar6);
    bVar10 = fVar6 < fVar8;
  }
  else {
    dVar7 = in_dr4 + in_dr2;
    bVar10 = dVar7 < dVar9;
  }
  if ((bVar10) && (in_FPSCR_SZ == 0)) {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar8);
  }
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  uVar4 = (uVar3 & 0x80000) >> 0x13;
  cVar1 = (char)uVar4;
  uVar3 = (uVar3 & 0x100000) >> 0x14;
  cVar2 = (char)uVar3;
  fVar6 = SUB84(dVar7,0);
  if (cVar1 == '\0') {
    bVar10 = fVar6 < SUB84(dVar9,0);
  }
  else {
    bVar10 = dVar7 < dVar9;
  }
  if (bVar10) {
    if (cVar2 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(dVar9,0));
    }
    if (cVar1 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) - fVar6);
    }
    else {
      in_dr2 = in_dr2 - dVar7;
    }
    puVar5 = (&FUN_8c120348);
    if (cVar2 == '\0') {
      dVar9 = (double)CONCAT44(fVar8,fVar6);
      puVar5 = DAT_8c121964;
    }
    if (cVar1 == '\0') {
      dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                               (float)(uint)puVar5 * SUB84(in_dr2,0) + SUB84(dVar9,0));
    }
  }
  if (cVar2 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unaff_r14 + 100));
  }
  uVar3 = (uVar4 << 0x13 | uVar3 << 0x14) & 0xffe7ffff;
  uVar4 = (uVar3 & 0x80000) >> 0x13;
  if ((char)uVar4 == '\0') {
    bVar10 = SUB84(dVar9,0) < SUB84(in_dr2,0);
  }
  else {
    bVar10 = dVar9 < in_dr2;
  }
  if ((bVar10) && ((char)(uVar3 >> 0x14) == '\0')) {
    dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),*(undefined4 *)(unaff_r14 + 100));
  }
  if (*(uint *)(unaff_r14 + 0x38) < *(uint *)(unaff_r14 + 0x54)) {
    *(int *)(unaff_r14 + 0x38) = *(int *)(unaff_r14 + 0x38) + 1;
  }
  uVar4 = (uVar4 << 0x13 & 0xffe7ffff) >> 0x13;
  fVar8 = (float)((ulonglong)dVar7 >> 0x20);
  if ((char)uVar4 == '\0') {
    bVar10 = fVar8 < (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    bVar10 = dVar7 < dVar9;
  }
  if (bVar10) {
    *(int *)(unaff_r14 + 0x2c) = *(int *)(unaff_r14 + 0x2c) + 1;
  }
  else {
    *(undefined4 *)(unaff_r14 + 0x2c) = 0;
  }
  if (*(uint *)(unaff_r14 + 0x58) < *(uint *)(unaff_r14 + 0x2c)) {
    *(int *)(unaff_r14 + 0x38) = *(int *)(unaff_r14 + 0x58) + -1;
  }
  if ((char)((uVar4 << 0x13 & 0xffe7ffff) >> 0x13) == '\0') {
    bVar10 = fVar8 < SUB84(dVar9,0);
  }
  else {
    bVar10 = dVar7 < dVar9;
  }
  if (bVar10) {
    *(undefined4 *)(unaff_r14 + 0x34) = 0;
  }
  else {
    *(int *)(unaff_r14 + 0x34) = *(int *)(unaff_r14 + 0x34) + 1;
  }
  if (*(int *)(unaff_r14 + 0x34) == 4) {
    *(undefined1 *)(unaff_r14 + 0x45) = 1;
    *(undefined4 *)(unaff_r14 + 0x48) = 0;
  }
  else if ((*(char *)(unaff_r14 + 0x45) != '\0') &&
          (uVar4 = *(uint *)(unaff_r14 + 0x48), *(uint *)(unaff_r14 + 0x48) = uVar4 + 1,
          *(uint *)(unaff_r14 + 0x58) < uVar4)) {
    *(undefined1 *)(unaff_r14 + 0x45) = 0;
    FUN_8c120348(unaff_r14,0xc,(uint)*(byte *)(unaff_r14 + 4),4);
  }
  bVar10 = *(uint *)(unaff_r14 + 0x50) < *(uint *)(unaff_r14 + 0x34);
  if (bVar10) {
    *(undefined1 *)(unaff_r14 + 0x44) = 1;
    *(undefined4 *)(unaff_r14 + 0x34) = 0;
    *(undefined1 *)(unaff_r14 + 0x45) = 0;
  }
  return (uint)bVar10;
}

__asm__(".globl _FUN_8c121736\n.set _FUN_8c121736, _FUN_8c121736_def\n");
