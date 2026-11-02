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
undefined4 FUN_8c25fbd0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25fbd0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined2 *ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined2 *ar4_01;
  
  iVar2 = 0;
  do {
    if (*(short *)(unsigned)(iVar2 * 0xac + -0x73b4cbc0) == 0) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  if (iVar2 != 8) {
    iVar2 = iVar2 * 0xac;
    ar6_00 = 0xac;
    ar4_01 = (undefined2 *)(unsigned)(iVar2 + -0x73b4cbc0);
    ar5_00 = 0;
    ar4_00 = ar4_01;
    ar7_00 = ar7;
    (vsp = ((unsigned long)(fr0_ - 0)), memset(ar4_01,0,0xac,ar7));
    *ar4_01 = 1;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c264eda(ar4_00,ar5_00,ar6_00,ar7_00));
    *(int *)(unsigned)(iVar2 + -0x73b4cbb8) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(unsigned)(iVar2 + -0x73b4cb88) = ar4;
      *(undefined4 *)(unsigned)(iVar2 + -0x73b4cb84) = ar5;
      *(undefined4 *)(unsigned)(iVar2 + -0x73b4cb80) = ar6;
      *(undefined4 *)(unsigned)(iVar2 + -0x73b4cb7c) = ar7;
      *(unsigned *)(unsigned)(iVar2 + -0x73b4cb38) = ((void *)(unsigned)0x8c25fba0);
      *(unsigned *)(unsigned)(iVar2 + -0x73b4cb34) = ar4_01;
      *(unsigned *)(unsigned)(iVar2 + -0x73b4cb30) = ((void *)(unsigned)0x8c25fbbe);
      *(unsigned *)(unsigned)(iVar2 + -0x73b4cb2c) = ar4_01;
      return ar4_01;
    }
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25fc5c(ar4_01,ar5_00,ar6_00,ar7_00); });
  }
  return 0;
}

__asm__(".globl _FUN_8c25fbd0\n.set _FUN_8c25fbd0, _FUN_8c25fbd0_def\n");
