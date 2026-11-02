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
undefined4 FUN_8c209c00_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c209c00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int ar5_00;
  float fVar7;
  double in_dr2 = 0;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  uint uVar8;
  char cVar9;
  char cVar10;
  
  uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d4c);
  cVar10 = '\0';
  cVar9 = '\0';
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c50) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d4c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c54) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d50);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c58) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d54);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c5c) = *(undefined4 *)(unsigned)(iVar4 + 4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c60) = *(undefined4 *)(unsigned)(iVar4 + 8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c64) = *(undefined4 *)(unsigned)(iVar4 + 0xc);
  uVar6 = *(undefined4 *)(unsigned)(iVar4 + 0x14);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208270((*(undefined4 *)(unsigned)(unsigned)0x8c4a9d4c),6,*(undefined4 *)(unsigned)(iVar4 + 0x10),uVar6));
  if (cVar10 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x18));
    in_fr15 = 255.0;
  }
  if (cVar9 == '\0') {
    fVar7 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  if (cVar10 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar4 + 0x1c));
  }
  if (cVar9 == '\0') {
    fVar7 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8,uVar6));
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(undefined4 *)(unsigned)(iVar3 + 4);
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 1) * 4) = *(undefined4 *)(unsigned)(iVar3 + 8);
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 2) * 4) = *(undefined4 *)(unsigned)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(unsigned)(iVar3 + 0x14);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208270(uVar2,iVar1 + 3,*(undefined4 *)(unsigned)(iVar3 + 0x10),uVar6));
  if (cVar10 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 0x18));
  }
  if (cVar9 == '\0') {
    fVar7 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  if (cVar10 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar3 + 0x1c));
  }
  if (cVar9 == '\0') {
    fVar7 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8,uVar6));
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar3 * 4) = *(undefined4 *)(unsigned)(iVar5 + 4);
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar3 + 1) * 4) = *(undefined4 *)(unsigned)(iVar5 + 8);
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar3 + 2) * 4) = *(undefined4 *)(unsigned)(iVar5 + 0xc);
  uVar6 = *(undefined4 *)(unsigned)(iVar5 + 0x14);
  iVar1 = iVar5;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208270(uVar2,iVar3 + 3,*(undefined4 *)(unsigned)(iVar5 + 0x10),uVar6));
  if (cVar10 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar5 + 0x18));
  }
  ar5_00 = iVar3 + 1;
  if (cVar9 == '\0') {
    fVar7 = F32LO(in_dr2) * in_fr15;
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * CONCAT44D(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar3 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  if (cVar10 == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar5 + 0x1c));
  }
  if (cVar9 == '\0') {
    uVar8 = (uint)(F32LO(in_dr2) * in_fr15);
  }
  else {
    uVar8 = (uint)(in_dr2 * CONCAT44D(in_fr14,in_fr15));
  }
  uVar8 = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d48) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,ar5_00,uVar8,uVar6));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d48) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d48) << 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20820a(uVar2,ar5_00,uVar8,uVar6));
  ({ unsigned long ri0_ = (unsigned long)(iVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2081e0(uVar2,0,0,uVar6); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d5c) = *(undefined4 *)(unsigned)(iVar4 + 0xc);
  return 0;
}

__asm__(".globl _FUN_8c209c00\n.set _FUN_8c209c00, _FUN_8c209c00_def\n");
