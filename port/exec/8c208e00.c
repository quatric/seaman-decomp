#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c208e00_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c208e00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ain0;
  int iVar4;
  float fVar5;
  double in_dr2 = 0;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  char cVar11;
  
  uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d4c);
  cVar11 = '\0';
  cVar10 = '\0';
  ain0 = *ar4;
  iVar3 = ar4[1];
  iVar4 = ar4[2];
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c50) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d4c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c54) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d50);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c58) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d54);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c5c) = *(undefined4 *)(unsigned)(ain0 + 4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c60) = *(undefined4 *)(unsigned)(ain0 + 8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c64) = *(undefined4 *)(unsigned)(ain0 + 0xc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20823c((*(undefined4 *)(unsigned)(unsigned)0x8c4a9d4c),6,*(undefined4 *)(unsigned)(ain0 + 0x10),ar7));
  if (cVar11 == '\0') {
    in_fr15 = 255.0;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(ain0 + 0x20));
  }
  if (cVar10 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),F32LO(in_dr2) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    iVar6 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(ain0 + 0x24));
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar7 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(ain0 + 0x28));
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar8 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    iVar8 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(ain0 + 0x2c));
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar9 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9;
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(ain0 + 0x30));
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar6 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(ain0 + 0x34));
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar7 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(ain0 + 0x38));
  }
  if (cVar10 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),F32LO(in_dr2) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    iVar8 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar8 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(ain0 + 0x3c));
  }
  if (cVar10 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),F32LO(in_dr2) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    uVar9 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar9 = (uint)in_dr2;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9,ar7));
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(undefined4 *)(unsigned)(iVar3 + 4);
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 1) * 4) = *(undefined4 *)(unsigned)(iVar3 + 8);
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 2) * 4) = *(undefined4 *)(unsigned)(iVar3 + 0xc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(unsigned)(ain0 + 0x10),ar7));
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 0x20));
  }
  if (cVar10 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),F32LO(in_dr2) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    iVar6 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 0x24));
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar7 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 0x28));
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar8 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    iVar8 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 0x2c));
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar9 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9;
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 0x30));
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar6 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 0x34));
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar7 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 0x38));
  }
  if (cVar10 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),F32LO(in_dr2) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    iVar8 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar8 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 0x3c));
  }
  if (cVar10 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),F32LO(in_dr2) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    uVar9 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar9 = (uint)in_dr2;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9,ar7));
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(undefined4 *)(unsigned)(iVar4 + 4);
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 1) * 4) = *(undefined4 *)(unsigned)(iVar4 + 8);
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 2) * 4) = *(undefined4 *)(unsigned)(iVar4 + 0xc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(unsigned)(ain0 + 0x10),ar7));
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x20));
  }
  if (cVar10 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),F32LO(in_dr2) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
  }
  iVar3 = iVar1 + 1;
  if (cVar10 == '\0') {
    iVar6 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x24));
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar7 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x28));
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar8 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    iVar8 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x2c));
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar9 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9;
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x30));
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar1 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    iVar1 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x34));
  }
  if (cVar10 == '\0') {
    fVar5 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar6 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x38));
  }
  if (cVar10 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),F32LO(in_dr2) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    iVar7 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x3c));
  }
  if (cVar10 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),F32LO(in_dr2) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    uVar9 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar9 = (uint)in_dr2;
  }
  uVar9 = iVar1 << 0x18 | iVar6 << 0x10 | iVar7 << 8 | uVar9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d48) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar3,uVar9,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d48) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d48) << 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20820a(uVar2,iVar3,uVar9,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2081e0(uVar2,0,0,ar7); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d5c) = *(undefined4 *)(unsigned)(ain0 + 0xc);
  return 0;
}

__asm__(".globl _FUN_8c208e00\n.set _FUN_8c208e00, _FUN_8c208e00_def\n");
