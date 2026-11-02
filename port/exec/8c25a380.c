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
undefined4 FUN_8c25a380_def(int *ar4,undefined4 *ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c25a380";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c277cb0);
  if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277cb0) * 0x44 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08)) != -1) {
    for (uVar2 = 0; (uVar2 < (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c) && (*(int *)(unsigned)(uVar2 * 0x44 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08)) != -1));
        uVar2 = uVar2 + 1) {
    }
  }
  if (uVar2 == (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c) - 1) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c277cb0) = 0;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c277cb0) = uVar2 + 1;
  }
  iVar3 = uVar2 * 0x44;
  *ar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3;
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x18) = ar5[1];
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x1c) = ar5[2];
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x20) = ar5[3];
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x24) = ar5[4];
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x28) = ar5[5];
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x2c) = ar5[6];
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x30) = ar5[7];
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x34) = ar5[8];
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x14) = *ar5;
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3) = ar6;
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3 + 4) = s0;
  *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x10) = ar7;
  *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x10) = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x10) & 0xfffffff7;
  if ((ar7 & 6) == 0) {
    uVar1 = 0x40;
    *(undefined2 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x40) = 0;
  }
  else {
    *(undefined2 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x40) = 1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c2571fe((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3,ar5,ar6,ar7));
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a4) <= uVar2) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a4) + 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c25a380\n.set _FUN_8c25a380, _FUN_8c25a380_def\n");
