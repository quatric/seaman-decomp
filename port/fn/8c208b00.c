#include "../decls.h"
undefined4 FUN_8c208b00_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  double in_dr2;
  float in_fr15;
  undefined4 in_fr14;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  
  uVar2 = _DAT_8c4a9d4c;
  cVar14 = '\0';
  cVar13 = '\0';
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar4 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar4 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar4 + 0xc);
  uVar6 = *(undefined4 *)(iVar4 + 0x14);
  iVar1 = FUN_8c208270(_DAT_8c4a9d4c,6,*(undefined4 *)(iVar4 + 0x10),uVar6);
  if (cVar14 == '\0') {
    in_fr15 = 255.0;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x20));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    iVar8 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar8 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x24));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar9 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar9 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x28));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar10 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar10 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x2c));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar11 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar11 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = iVar8 << 0x18 | iVar9 << 0x10 | iVar10 << 8 | uVar11;
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x30));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar8 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar8 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x34));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar9 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar9 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x38));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    iVar10 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar10 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x3c));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    uVar11 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar11 = (uint)in_dr2;
  }
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,iVar8 << 0x18 | iVar9 << 0x10 | iVar10 << 8 | uVar11,uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  iVar1 = FUN_8c208270(uVar2,iVar1 + 3,*(undefined4 *)(iVar3 + 0x10),uVar6);
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x20));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    iVar8 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar8 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x24));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar9 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar9 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x28));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar10 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar10 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x2c));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar11 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar11 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = iVar8 << 0x18 | iVar9 << 0x10 | iVar10 << 8 | uVar11;
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x30));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar8 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar8 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x34));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar9 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar9 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x38));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    iVar10 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar10 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x3c));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    uVar11 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar11 = (uint)in_dr2;
  }
  iVar3 = FUN_8c208228(uVar2,iVar1 + 1,iVar8 << 0x18 | iVar9 << 0x10 | iVar10 << 8 | uVar11,uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar3 * 4) = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 1) * 4) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 2) * 4) = *(undefined4 *)(iVar5 + 0xc);
  uVar6 = *(undefined4 *)(iVar5 + 0x14);
  iVar1 = iVar5;
  iVar3 = FUN_8c208270(uVar2,iVar3 + 3,*(undefined4 *)(iVar5 + 0x10),uVar6);
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x20));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  iVar8 = iVar3 + 1;
  if (cVar13 == '\0') {
    iVar9 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar9 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x24));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar10 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar10 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x28));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar12 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar12 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x2c));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar11 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar11 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar3 * 4) = iVar9 << 0x18 | iVar10 << 0x10 | iVar12 << 8 | uVar11;
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x30));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar3 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar3 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x34));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar9 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar9 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x38));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    iVar10 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar10 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x3c));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    uVar11 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar11 = (uint)in_dr2;
  }
  uVar11 = iVar3 << 0x18 | iVar9 << 0x10 | iVar10 << 8 | uVar11;
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,iVar8,uVar11,uVar6);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,iVar8,uVar11,uVar6);
  FUN_8c2081e0(uVar2,0,0,uVar6,iVar1);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar4 + 0xc);
  return 0;
}

__asm__(".globl _FUN_8c208b00\n.set _FUN_8c208b00, _FUN_8c208b00_def\n");
