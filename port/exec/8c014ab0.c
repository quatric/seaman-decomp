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
undefined4 * FUN_8c014ab0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c014ab0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 ar5_00;
  int iVar2;
  uint uVar3;
  undefined8 in_dr0 = 0;
  undefined8 uVar4;
  uint in_PR = 0;
  char cVar5;
  
  cVar5 = '\0';
  *ar4 = 0x8c1297f4;
  (vsp = ((unsigned long)(fr0_ - 20)), Vec3_ctor_zero(ar4 + 0x15,ar5,ar6,ar7));
  ar4[0x1f] = 0;
  ar4[0x20] = 0xffffffff;
  ar4[0x21] = ((void *)0x8c014f74);
  ar4[0x22] = 0;
  ar4[0x23] = 0xffffffff;
  ar4[0x24] = ((void *)0x8c014fd0);
  ar4[0x25] = 0;
  ar4[0x26] = 0xffffffff;
  ar4[0x27] = ((void *)0x8c015054);
  ar4[0x28] = 0;
  ar4[0x29] = 0xffffffff;
  ar4[0x2a] = ((void *)0x8c015098);
  (*(uint *)(fr0_ - 0xc)) = in_PR;
  for (iVar2 = 0; uVar3 = (uint)in_dr0, iVar2 < 5; iVar2 = iVar2 + 1) {
    if (cVar5 == '\0') {
      (*(uint *)(fr0_ - 0x10)) = 0;
    }
    else {
      (*(uint *)(fr0_ - 0xc)) = 0;
      (*(uint *)(fr0_ - 0x10)) = uVar3;
    }
    uVar1 = (*(uint *)(fr0_ - 0x10));
    if (cVar5 == '\0') {
      ar4[iVar2 * 3 + 3] = (*(uint *)(fr0_ - 0x10));
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + iVar2 * 3 + 3) = CONCAT44((*(uint *)(fr0_ - 0xc)),(*(uint *)(fr0_ - 0x10)));
      (*(uint *)(fr0_ - 0x10)) = (*(uint *)(fr0_ - 0xc));
      uVar3 = uVar1;
    }
    if (cVar5 == '\0') {
      uVar4 = CONCAT44(uVar1,uVar3);
      ar4[iVar2 * 3 + 2] = uVar1;
    }
    else {
      uVar4 = CONCAT44((*(uint *)(fr0_ - 0x10)),uVar1);
      *(undefined8 *)(unsigned)(ar4 + iVar2 * 3 + 2) = uVar4;
    }
    if (cVar5 == '\0') {
      in_dr0 = CONCAT44(uVar1,(int)uVar4);
      ar4[iVar2 * 3 + 1] = uVar1;
    }
    else {
      in_dr0 = CONCAT44((*(uint *)(fr0_ - 0x10)),uVar1);
      *(undefined8 *)(unsigned)(ar4 + iVar2 * 3 + 1) = in_dr0;
    }
  }
  ar5_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c014ef8(ar4,0xffffffff,ar6,ar7));
  ar4[0x1a] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x1e) = 1;
  if (cVar5 == '\0') {
    ar4[0x1d] = 0;
    ar4[0x1c] = 0x3ca3d70a;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x1d) = (ulonglong)uVar3;
    *(undefined8 *)(unsigned)(ar4 + 0x1c) = 0x8c014d903ca3d70a;
  }
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c014d90(ar4,ar5_00,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c014ab0\n.set _FUN_8c014ab0, _FUN_8c014ab0_def\n");
