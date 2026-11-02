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
undefined4 * FUN_8c264eda_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c264eda";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 *ar4_00;
  int ar4_01;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(unsigned)(iVar1 * 0x34 + 0x8c4ba4a8) == 0) break;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  if (iVar1 == 8) {
    ar4_00 = (undefined4 *)(unsigned)0x0;
  }
  else {
    ar4_00 = (undefined4 *)(unsigned)(iVar1 * 0x34 + 0x8c4ba4a8);
    (vsp = ((unsigned long)(fr0_ - 0)), memset(ar4_00,0,0x34,ar7));
    *ar4_00 = 1;
    ar5_00 = 0xac44;
    ar4_01 = (int)0x1f4;
    ar4_00[1] = iVar1;
    ar4_00[2] = 0;
    ar4_00[3] = 0;
    iVar1 = (int)ar4_00 + 0x32;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c260cf8(ar4_01,ar5_00,ar4_00 + 0xc,iVar1));
    (vsp = ((unsigned long)(fr0_ - 0)), memset(ar4_00 + 10,0,8,iVar1));
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c264eda\n.set _FUN_8c264eda, _FUN_8c264eda_def\n");
