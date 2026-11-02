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
int FUN_8c267fe8_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c267fe8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint ain0;
  int iVar2;
  int iVar3;
  int ar5_00;
  byte in_IMASK = 0;
  byte in_S = 0;
  byte in_T = 0;
  
  iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c2784c0);
  ar5_00 = 0;
  ain0 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x158;
    ar7 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x168);
    if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x16c) == 0x100) {
      ar5_00 = 0xa000001;
      ar6 = 0x100;
    }
    else {
      iVar3 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x170);
      *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x170) = iVar3 + 1;
      ar6 = iVar3 * 0x1c + *(int *)(unsigned)(iVar1 + 0x164);
      if (*(int *)(unsigned)(iVar1 + 0x170) == ar7) {
        *(undefined4 *)(unsigned)(iVar1 + 0x170) = 0;
      }
      *(undefined4 *)(unsigned)(ar6 + 0x14) = 1;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0107a0(0x14,ar6,ar4,vr7));
      *(int *)(unsigned)(iVar2 + 0x14) = *(int *)(unsigned)(iVar2 + 0x14) + 1;
    }
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c267fe8),ar5_00,ar6,ar7); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267fe8\n.set _FUN_8c267fe8, _FUN_8c267fe8_def\n");
