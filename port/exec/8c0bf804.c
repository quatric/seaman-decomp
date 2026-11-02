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
undefined4 FUN_8c0bf804_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf804";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 216; for (int i_ = 0; i_ < 216; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (*(undefined4 *)(fr0_ - 0x2c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13be38);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined1 *)(unsigned)0x8c13be3c);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c13be40);
  (*(undefined4 *)(fr0_ - 0x20)) = (*(undefined1 *)(unsigned)0x8c13be44);
  (*(undefined4 *)(fr0_ - 0x1c)) = (*(undefined1 *)(unsigned)0x8c13be48);
  (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined1 *)(unsigned)0x8c13be4c);
  (*(undefined4 *)(fr0_ - 0x14)) = (*(undefined1 *)(unsigned)0x8c13be50);
  (*(undefined4 *)(fr0_ - 0x10)) = (*(undefined1 *)(unsigned)0x8c13be54);
  (*(undefined4 *)(fr0_ - 0x4c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13be58);
  (*(undefined4 *)(fr0_ - 0x48)) = (*(undefined1 *)(unsigned)0x8c13be5c);
  (*(undefined4 *)(fr0_ - 0x44)) = (*(undefined1 *)(unsigned)0x8c13be60);
  (*(undefined4 *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c13be64);
  (*(undefined4 *)(fr0_ - 0x3c)) = (*(undefined1 *)(unsigned)0x8c13be68);
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined1 *)(unsigned)0x8c13be6c);
  (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined1 *)(unsigned)0x8c13be70);
  (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined1 *)(unsigned)0x8c13be74);
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c0162f8(((undefined1 *)(fr0_ - 0x60)),ar5,ar6,ar7));
  uVar4 = 4;
  uVar3 = 0x8c43654c;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c016318(((undefined1 *)(fr0_ - 0x60)),&(*(undefined4 *)(fr0_ - 0x2c)),0x8c43654c,4); });
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c016324(((undefined1 *)(fr0_ - 0x60)),((undefined1 *)(unsigned)0x8c43655c),uVar3,uVar4));
  uVar2 = 0x80000060;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c015198(((undefined1 *)(fr0_ - 0x60)),0x80000060,uVar3,uVar4); });
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c0c453c(((undefined1 *)(unsigned)0x8c2b5628),uVar2,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c01538c(ar5,uVar2,uVar3,uVar4));
  uVar2 = *(undefined4 *)(unsigned)(ar4 + 8);
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c014a94(ar5,uVar2,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c01636c(((undefined1 *)(fr0_ - 0x60)),uVar2,uVar3,uVar4));
  uVar4 = 4;
  uVar3 = 0x8c43654c;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 216)); FUN_8c016318(((undefined1 *)(fr0_ - 0x60)),&(*(undefined4 *)(fr0_ - 0x4c)),0x8c43654c,4); });
  uVar2 = 1;
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c014a94(ar5,1,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c01636c(((undefined1 *)(fr0_ - 0x60)),uVar2,uVar3,uVar4));
  iVar1 = *(int *)(unsigned)(ar4 + 8);
  if (iVar1 == 3) {
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(0x42e20000,*(undefined4 *)(unsigned)(ar4 + 0x2c));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2c);
      dVar5 = -1.3340701484224984e-249;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c436774) = 0x43360000;
    if (cVar6 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c436778) = F32LO(dVar5) + F32HI(dVar5);
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c436778) = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c436778) = (float)in_xd0;
      (*(uint *)(unsigned)0x8c43677c) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c0c3b74(((undefined1 *)(unsigned)0x8c2b5628),uVar2,uVar3,uVar4));
  }
  else if (iVar1 == 5) {
    (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c1f8176((fr0_ + (int)0xffffff94),uVar2,uVar3,uVar4));
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(0x42c60000,*(undefined4 *)(unsigned)(ar4 + 0x2c));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2c);
      dVar5 = 9.367488658879283e+17;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c436774) = 0x43360000;
    if (cVar6 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c436778) = F32LO(dVar5) + F32HI(dVar5);
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c436778) = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c436778) = (float)in_xd0;
      (*(uint *)(unsigned)0x8c43677c) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c0c3b74(((undefined1 *)(unsigned)0x8c2b5628),uVar2,uVar3,uVar4));
  }
  else if (iVar1 == 9) {
    if (cVar7 != '\0') {
      (*(uint *)(unsigned)0x8c43677c) = 0x3f19999a;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c436778) = 145.0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436774) = 0x43aa0000;
    uVar4 = 0x10;
    uVar3 = 0;
    (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c0c4370(((undefined1 *)(unsigned)0x8c2b5628),ar4 + 0x10,0,0x10));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 216)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x60)),0xffffffff,uVar3,uVar4));
  return uVar2;
}

__asm__(".globl _FUN_8c0bf804\n.set _FUN_8c0bf804, _FUN_8c0bf804_def\n");
