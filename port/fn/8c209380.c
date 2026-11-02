#include "../decls.h"
undefined4 FUN_8c209380_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
  uint uVar6;
  char cVar7;
  char cVar8;
  
  uVar2 = _DAT_8c4a9d4c;
  cVar8 = '\0';
  cVar7 = '\0';
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
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x18));
    in_fr15 = 255.0;
  }
  if (cVar7 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar6 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x1c));
  }
  if (cVar7 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar6 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)in_dr2;
  }
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6,ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(ain0 + 0x10),ar7);
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x18));
  }
  if (cVar7 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar6 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x1c));
  }
  if (cVar7 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar6 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)in_dr2;
  }
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6,ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar4 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(ain0 + 0x10),ar7);
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x18));
  }
  iVar3 = iVar1 + 1;
  if (cVar7 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar6 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x1c));
  }
  if (cVar7 == '\0') {
    uVar6 = (uint)(SUB84(in_dr2,0) * in_fr15);
  }
  else {
    uVar6 = (uint)(in_dr2 * (double)CONCAT44(in_fr14,in_fr15));
  }
  uVar6 = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,iVar3,uVar6,ar7);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,iVar3,uVar6,ar7);
  FUN_8c2081e0(uVar2,0,0,ar7,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(ain0 + 0xc);
  return 0;
}

__asm__(".globl _FUN_8c209380\n.set _FUN_8c209380, _FUN_8c209380_def\n");
