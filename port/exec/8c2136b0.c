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
uint FUN_8c2136b0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2136b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *a6;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 extraout_fr3 = 0;
  undefined4 uVar7;
  undefined4 extraout_fr3_00 = 0;
  undefined8 in_xd2 = 0;
  char cVar8;
  
  cVar8 = '\0';
  uVar6 = 0;
  iVar1 = 0;
  uVar4 = 0;
  do {
    *(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x40)) + uVar4) = *(undefined4 *)(unsigned)(ar4 + iVar1);
    *(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x40)) + uVar4 + 4) = *(undefined4 *)(unsigned)(ar4 + iVar1 + 4);
    a6 = (undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x60)) + uVar4);
    *a6 = *(undefined4 *)(unsigned)(ar5 + iVar1);
    uVar3 = uVar4 + 8;
    *(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x60)) + uVar4 + 4) = *(undefined4 *)(unsigned)(ar5 + iVar1 + 4);
    iVar1 = iVar1 + 0xc;
    uVar4 = uVar3;
  } while (uVar3 < 0x20);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c212946(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0x60)),a6,ar7));
  iVar2 = 0;
  if (iVar1 != 0) {
    uVar6 = 4;
  }
  uVar4 = 0;
  uVar7 = extraout_fr3;
  do {
    if (cVar8 == '\0') {
      uVar7 = *(undefined4 *)(unsigned)(ar4 + iVar2);
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)(ar4 + iVar2);
    }
    puVar5 = (undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x40)) + uVar4);
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)puVar5 = uVar7;
    }
    else {
      *puVar5 = in_xd2;
    }
    if (cVar8 == '\0') {
      uVar7 = *(undefined4 *)(unsigned)(ar4 + iVar2 + 8);
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)(ar4 + iVar2 + 8);
    }
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x40)) + uVar4 + 4) = uVar7;
      uVar7 = *(undefined4 *)(unsigned)(ar5 + iVar2);
    }
    else {
      *(undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x40)) + uVar4 + 4) = in_xd2;
      in_xd2 = *(undefined8 *)(unsigned)(ar5 + iVar2);
    }
    puVar5 = (undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x60)) + uVar4);
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)puVar5 = uVar7;
    }
    else {
      *puVar5 = in_xd2;
    }
    if (cVar8 == '\0') {
      uVar7 = *(undefined4 *)(unsigned)(ar5 + iVar2 + 8);
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)(ar5 + iVar2 + 8);
    }
    uVar3 = uVar4 + 8;
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x60)) + uVar4 + 4) = uVar7;
    }
    else {
      *(undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x60)) + uVar4 + 4) = in_xd2;
    }
    iVar2 = iVar2 + 0xc;
    uVar4 = uVar3;
  } while (uVar3 < 0x20);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c212946(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0x60)),puVar5,ar7));
  iVar2 = 0;
  if (iVar1 != 0) {
    uVar6 = uVar6 | 2;
  }
  uVar4 = 0;
  uVar7 = extraout_fr3_00;
  do {
    if (cVar8 == '\0') {
      uVar7 = *(undefined4 *)(unsigned)(ar4 + iVar2 + 4);
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)(ar4 + iVar2 + 4);
    }
    puVar5 = (undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x40)) + uVar4);
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)puVar5 = uVar7;
    }
    else {
      *puVar5 = in_xd2;
    }
    if (cVar8 == '\0') {
      uVar7 = *(undefined4 *)(unsigned)(ar4 + iVar2 + 8);
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)(ar4 + iVar2 + 8);
    }
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x40)) + uVar4 + 4) = uVar7;
      uVar7 = *(undefined4 *)(unsigned)(ar5 + iVar2 + 4);
    }
    else {
      *(undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x40)) + uVar4 + 4) = in_xd2;
      in_xd2 = *(undefined8 *)(unsigned)(ar5 + iVar2 + 4);
    }
    puVar5 = (undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x60)) + uVar4);
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)puVar5 = uVar7;
    }
    else {
      *puVar5 = in_xd2;
    }
    if (cVar8 == '\0') {
      uVar7 = *(undefined4 *)(unsigned)(ar5 + iVar2 + 8);
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)(ar5 + iVar2 + 8);
    }
    uVar3 = uVar4 + 8;
    if (cVar8 == '\0') {
      *(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x60)) + uVar4 + 4) = uVar7;
    }
    else {
      *(undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x60)) + uVar4 + 4) = in_xd2;
    }
    iVar2 = iVar2 + 0xc;
    uVar4 = uVar3;
  } while (uVar3 < 0x20);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c212946(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0x60)),puVar5,ar7));
  if (iVar1 != 0) {
    uVar6 = uVar6 | 1;
  }
  return uVar6;
}

__asm__(".globl _FUN_8c2136b0\n.set _FUN_8c2136b0, _FUN_8c2136b0_def\n");
