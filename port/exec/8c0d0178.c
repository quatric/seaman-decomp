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
undefined4 FUN_8c0d0178_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d0178";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (*(undefined4 *)(unsigned)0x8c4374ac == '\0') {
    *(undefined4 *)(unsigned)0x8c4374a8 = 5;
    *(undefined4 *)(unsigned)0x8c4374ac = '\x01';
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x28);
  if (iVar1 == 0) {
    if (*(int *)(unsigned)(ar4 + 0x14) == 1) {
      ((undefined4 *)(fr0_ - 0xc))[0] = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
      ar6 = 9;
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0xc))[0],9,ar7));
      ar5 = ((undefined4 *)(fr0_ - 0xc));
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7));
      *(undefined2 *)(unsigned)(ar4 + 0x2c) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 1;
    }
  }
  else if (iVar1 == 1) {
    *(short *)(unsigned)(ar4 + 0x2c) = *(short *)(unsigned)(ar4 + 0x2c) + 1;
    if (*(undefined4 *)(unsigned)0x8c4374a8 <= (int)*(short *)(unsigned)(ar4 + 0x2c)) {
      *(undefined2 *)(unsigned)(ar4 + 0x2c) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 2;
    }
    if (*(int *)(unsigned)(ar4 + 0x14) == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(unsigned)(ar4 + 0x34) == -1) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x34) = uVar2;
      ar6 = 10;
      ar5 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x34));
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021994(0x8c2b59d0,ar5,10,ar7));
    }
    if ((*(int *)(unsigned)(ar4 + 0x14) == 0) && (*(int *)(unsigned)(ar4 + 0x34) != -1)) {
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x34),ar6,ar7));
      ar5 = (undefined4 *)(unsigned)(ar4 + 0x34);
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x34) = 0xffffffff;
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 3;
    }
  }
  else if (iVar1 == 3) {
    ((undefined4 *)(fr0_ - 0xc))[0] = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
    ar6 = 0xb;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0xc))[0],0xb,ar7));
    ar5 = ((undefined4 *)(fr0_ - 0xc));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0d02c8(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0d0178\n.set _FUN_8c0d0178, _FUN_8c0d0178_def\n");
