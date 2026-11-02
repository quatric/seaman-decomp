#include "../decls.h"
undefined4 FUN_8c209c00_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int ar5_00;
  float fVar7;
  double in_dr2;
  float in_fr15;
  undefined4 in_fr14;
  uint uVar8;
  char cVar9;
  char cVar10;
  
  uVar2 = _DAT_8c4a9d4c;
  cVar10 = '\0';
  cVar9 = '\0';
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
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x18));
    in_fr15 = 255.0;
  }
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x1c));
  }
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8,uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  iVar1 = FUN_8c208270(uVar2,iVar1 + 3,*(undefined4 *)(iVar3 + 0x10),uVar6);
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x18));
  }
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x1c));
  }
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  iVar3 = FUN_8c208228(uVar2,iVar1 + 1,uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8,uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar3 * 4) = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 1) * 4) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 2) * 4) = *(undefined4 *)(iVar5 + 0xc);
  uVar6 = *(undefined4 *)(iVar5 + 0x14);
  iVar1 = iVar5;
  iVar3 = FUN_8c208270(uVar2,iVar3 + 3,*(undefined4 *)(iVar5 + 0x10),uVar6);
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x18));
  }
  ar5_00 = iVar3 + 1;
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar3 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x1c));
  }
  if (cVar9 == '\0') {
    uVar8 = (uint)(SUB84(in_dr2,0) * in_fr15);
  }
  else {
    uVar8 = (uint)(in_dr2 * (double)CONCAT44(in_fr14,in_fr15));
  }
  uVar8 = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,ar5_00,uVar8,uVar6);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,ar5_00,uVar8,uVar6);
  FUN_8c2081e0(uVar2,0,0,uVar6,iVar1);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar4 + 0xc);
  return 0;
}

__asm__(".globl _FUN_8c209c00\n.set _FUN_8c209c00, _FUN_8c209c00_def\n");
