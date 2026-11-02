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
undefined4
FUN_8c25a394_def(int *ar4,undefined4 *ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c25a394";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);
  undefined4 s8 = *(undefined4 *)(vsp + 8);
  undefined4 s12 = *(undefined4 *)(vsp + 12);
  undefined4 s16 = *(undefined4 *)(vsp + 16);
  undefined4 s20 = *(undefined4 *)(vsp + 20);
  undefined4 s24 = *(undefined4 *)(vsp + 24);
  undefined4 s28 = *(undefined4 *)(vsp + 28);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint unaff_r8 = 0;
  uint *unaff_r9 = 0;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *unaff_r14 = 0;
  
  uVar2 = *unaff_r9;
  uVar3 = unaff_r8;
  if (*(int *)(unsigned)(uVar2 * 0x44 + *unaff_r14) != -1) {
    for (; (uVar2 = uVar3, uVar3 < (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c) && (*(int *)(unsigned)(uVar3 * 0x44 + *unaff_r14) != -1));
        uVar3 = uVar3 + 1) {
    }
  }
  if (uVar2 == (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c) - 1) {
    *unaff_r9 = unaff_r8;
  }
  else {
    *unaff_r9 = uVar2 + 1;
  }
  iVar4 = uVar2 * 0x44;
  *ar4 = *unaff_r14 + iVar4;
  *(undefined4 *)(unsigned)(*unaff_r14 + iVar4 + 0x18) = ar5[1];
  *(undefined4 *)(unsigned)(*unaff_r14 + iVar4 + 0x1c) = ar5[2];
  *(undefined4 *)(unsigned)(*unaff_r14 + iVar4 + 0x20) = ar5[3];
  *(undefined4 *)(unsigned)(*unaff_r14 + iVar4 + 0x24) = ar5[4];
  *(undefined4 *)(unsigned)(*unaff_r14 + iVar4 + 0x28) = ar5[5];
  *(undefined4 *)(unsigned)(*unaff_r14 + iVar4 + 0x2c) = ar5[6];
  *(undefined4 *)(unsigned)(*unaff_r14 + iVar4 + 0x30) = ar5[7];
  *(undefined4 *)(unsigned)(*unaff_r14 + iVar4 + 0x34) = ar5[8];
  *(undefined4 *)(unsigned)(*unaff_r14 + iVar4 + 0x14) = *ar5;
  *(undefined4 *)(unsigned)(*unaff_r14 + iVar4) = ar6;
  *(undefined4 *)(unsigned)(*unaff_r14 + iVar4 + 4) = s28;
  *(uint *)(unsigned)(*unaff_r14 + iVar4 + 0x10) = ar7;
  *(uint *)(unsigned)(*unaff_r14 + iVar4 + 0x10) = *(uint *)(unsigned)(*unaff_r14 + iVar4 + 0x10) & 0xfffffff7;
  if ((ar7 & 6) == 0) {
    uVar1 = 0x40;
    *(short *)(unsigned)(*unaff_r14 + iVar4 + 0x40) = (short)unaff_r8;
  }
  else {
    *(undefined2 *)(unsigned)(*unaff_r14 + iVar4 + 0x40) = 1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c2571fe(*unaff_r14 + iVar4,ar5,ar6,ar7));
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a4) <= uVar2) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a4) + 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c25a394\n.set _FUN_8c25a394, _FUN_8c25a394_def\n");
