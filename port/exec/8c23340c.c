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
undefined4 FUN_8c23340c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23340c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 548; for (int i_ = 0; i_ < 548; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  int *ar4_00;
  int *piVar4;
  int *piVar5;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  int *piVar6;
  uint uVar7;
  undefined8 uVar8;
  char cVar9;
  int *piVar10;
  
  cVar9 = '\0';
  uVar7 = 0;
  (vsp = ((unsigned long)(fr0_ - 548)), FUN_8c2360b0(ar4,((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x38)),ar7));
  (vsp = ((unsigned long)(fr0_ - 548)), FUN_8c2360b0(ar5,((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x50)),ar7));
  ar6_00 = ((undefined1 *)(fr0_ - 0x44));
  ar5_00 = ((undefined1 *)(fr0_ - 0x38));
  ar7_00 = ((undefined1 *)(fr0_ - 0x50));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 548)), FUN_8c212808(((undefined1 *)(fr0_ - 0x2c)),ar5_00,ar6_00,ar7_00));
  if (iVar1 != 0) {
    ar4_00 = ((int *)(fr0_ - 0xb0));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x114))); unsigned long ri1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x110))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 548)); FUN_8c010838(ar4_00,ar5_00,ar6_00,ar7_00); });
    piVar6 = ar4_00 + 0x18;
    piVar10 = ar4_00;
    while (ar4_00 < piVar6) {
      puVar3 = (undefined8 *)(unsigned)(*ar4_00 * 0xc + ar4);
      if (cVar9 == '\0') {
        (*(undefined4 *)(fr0_ - 0xe0)) = *(undefined4 *)(unsigned)puVar3;
      }
      else {
        (*(undefined4 *)(fr0_ - 0xe0)) = (undefined4)*puVar3;
      }
      iVar1 = *ar4_00 * 0xc + ar4;
      if (cVar9 == '\0') {
        (*(undefined4 *)(fr0_ - 0xdc)) = *(undefined4 *)(unsigned)(iVar1 + 4);
      }
      else {
        (*(undefined4 *)(fr0_ - 0xdc)) = (undefined4)*(undefined8 *)(unsigned)(iVar1 + 4);
      }
      iVar1 = *ar4_00 * 0xc + ar4;
      if (cVar9 == '\0') {
        (*(undefined4 *)(fr0_ - 0xd8)) = *(undefined4 *)(unsigned)(iVar1 + 8);
      }
      else {
        (*(undefined4 *)(fr0_ - 0xd8)) = (undefined4)*(undefined8 *)(unsigned)(iVar1 + 8);
      }
      piVar4 = ar4_00 + 1;
      puVar3 = (undefined8 *)(unsigned)(*piVar4 * 0xc + ar4);
      if (cVar9 == '\0') {
        (*(undefined4 *)(fr0_ - 0xd4)) = *(undefined4 *)(unsigned)puVar3;
      }
      else {
        (*(undefined4 *)(fr0_ - 0xd4)) = (undefined4)*puVar3;
      }
      iVar1 = *piVar4 * 0xc + ar4;
      if (cVar9 == '\0') {
        (*(undefined4 *)(fr0_ - 0xd0)) = *(undefined4 *)(unsigned)(iVar1 + 4);
      }
      else {
        (*(undefined4 *)(fr0_ - 0xd0)) = (undefined4)*(undefined8 *)(unsigned)(iVar1 + 4);
      }
      piVar5 = ar4_00 + 2;
      iVar1 = *piVar4 * 0xc + ar4;
      if (cVar9 == '\0') {
        (*(undefined4 *)(fr0_ - 0xcc)) = *(undefined4 *)(unsigned)(iVar1 + 8);
      }
      else {
        (*(undefined4 *)(fr0_ - 0xcc)) = (undefined4)*(undefined8 *)(unsigned)(iVar1 + 8);
      }
      puVar3 = (undefined8 *)(unsigned)(*piVar5 * 0xc + ar4);
      if (cVar9 == '\0') {
        (*(undefined4 *)(fr0_ - 0xc8)) = *(undefined4 *)(unsigned)puVar3;
      }
      else {
        (*(undefined4 *)(fr0_ - 0xc8)) = (undefined4)*puVar3;
      }
      iVar1 = *piVar5 * 0xc + ar4;
      if (cVar9 == '\0') {
        (*(undefined4 *)(fr0_ - 0xc4)) = *(undefined4 *)(unsigned)(iVar1 + 4);
      }
      else {
        (*(undefined4 *)(fr0_ - 0xc4)) = (undefined4)*(undefined8 *)(unsigned)(iVar1 + 4);
      }
      piVar4 = ar4_00 + 3;
      iVar1 = *piVar5 * 0xc + ar4;
      if (cVar9 == '\0') {
        (*(undefined4 *)(fr0_ - 0xc0)) = *(undefined4 *)(unsigned)(iVar1 + 8);
      }
      else {
        (*(undefined4 *)(fr0_ - 0xc0)) = (undefined4)*(undefined8 *)(unsigned)(iVar1 + 8);
      }
      puVar3 = (undefined8 *)(unsigned)(*piVar4 * 0xc + ar4);
      if (cVar9 == '\0') {
        (*(undefined4 *)(fr0_ - 0xbc)) = *(undefined4 *)(unsigned)puVar3;
      }
      else {
        (*(undefined4 *)(fr0_ - 0xbc)) = (undefined4)*puVar3;
      }
      iVar1 = *piVar4 * 0xc + ar4;
      if (cVar9 == '\0') {
        (*(undefined4 *)(fr0_ - 0xb8)) = *(undefined4 *)(unsigned)(iVar1 + 4);
      }
      else {
        (*(undefined4 *)(fr0_ - 0xb8)) = (undefined4)*(undefined8 *)(unsigned)(iVar1 + 4);
      }
      iVar1 = *piVar4 * 0xc + ar4;
      if (cVar9 == '\0') {
        (*(undefined4 *)(fr0_ - 0xb4)) = *(undefined4 *)(unsigned)(iVar1 + 8);
      }
      else {
        uVar8 = *(undefined8 *)(unsigned)(iVar1 + 8);
        (*(undefined4 *)(fr0_ - 0xb4)) = (undefined4)uVar8;
        ((int *)(fr0_ - 0xb0))[0] = (int)((ulonglong)uVar8 >> 0x20);
      }
      ar4_00 = ar4_00 + 4;
      piVar4 = piVar10;
      while (piVar4 < piVar6) {
        piVar5 = piVar4 + 3;
        piVar4 = piVar4 + 4;
        if (cVar9 != '\0') {
          (*(undefined4 *)(fr0_ - 0xe0)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(*piVar5 * 0xc + ar5 + 8) >> 0x20);
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 548)), FUN_8c212a30(&(*(undefined4 *)(fr0_ - 0xe0)),(fr0_ + (int)0xfffffef0),ar6_00,ar7_00));
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = (vsp = ((unsigned long)(fr0_ - 548)), FUN_8c2136b0(&(*(undefined4 *)(fr0_ - 0xe0)),(fr0_ + (int)0xfffffef0),ar6_00,ar7_00));
        uVar7 = uVar7 | uVar2;
        if (uVar7 == 7) {
          return 1;
        }
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c23340c\n.set _FUN_8c23340c, _FUN_8c23340c_def\n");
