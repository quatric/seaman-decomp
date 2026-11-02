#include "../decls.h"
undefined4 FUN_8c208e00_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ain0;
  int iVar4;
  float fVar5;
  double in_dr2;
  float in_fr15;
  undefined4 in_fr14;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  char cVar11;
  
  uVar2 = _DAT_8c4a9d4c;
  cVar11 = '\0';
  cVar10 = '\0';
  ain0 = *ar4;
  iVar3 = ar4[1];
  iVar4 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(ain0 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(ain0 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(ain0 + 0xc);
  iVar1 = FUN_8c20823c(_DAT_8c4a9d4c,6,*(undefined4 *)(ain0 + 0x10),ar7);
  if (cVar11 == '\0') {
    in_fr15 = 255.0;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x20));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    iVar6 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x24));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar7 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x28));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar8 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar8 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x2c));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar9 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9;
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x30));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar6 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x34));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar7 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x38));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    iVar8 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar8 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x3c));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    uVar9 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar9 = (uint)in_dr2;
  }
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9,ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(ain0 + 0x10),ar7);
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x20));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    iVar6 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x24));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar7 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x28));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar8 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar8 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x2c));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar9 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9;
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x30));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar6 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x34));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar7 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x38));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    iVar8 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar8 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x3c));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    uVar9 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar9 = (uint)in_dr2;
  }
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9,ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar4 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(ain0 + 0x10),ar7);
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x20));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  iVar3 = iVar1 + 1;
  if (cVar10 == '\0') {
    iVar6 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x24));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar7 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x28));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar8 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar8 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x2c));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar9 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9;
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x30));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar1 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar1 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x34));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar6 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x38));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    iVar7 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x3c));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    uVar9 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar9 = (uint)in_dr2;
  }
  uVar9 = iVar1 << 0x18 | iVar6 << 0x10 | iVar7 << 8 | uVar9;
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,iVar3,uVar9,ar7);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,iVar3,uVar9,ar7);
  FUN_8c2081e0(uVar2,0,0,ar7,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(ain0 + 0xc);
  return 0;
}

__asm__(".globl _FUN_8c208e00\n.set _FUN_8c208e00, _FUN_8c208e00_def\n");
