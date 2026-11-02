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
undefined4 FUN_8c034a70_def(undefined4 ar4,int *ar5,undefined4 *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c034a70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar7_00;
  
  ar7_00 = ar7;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0342ac(ar4,ar5,ar7,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034548(ar4,ar5,ar7,ar7_00));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034880(ar4,ar5,ar7,ar7_00));
  *ar6 = uVar1;
  ar6[1] = uVar2;
  ar6[2] = uVar3;
  ar6[3] = *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 0xc);
  ar6[4] = *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 0x10);
  ar6[5] = *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 0x14);
  *(undefined4 *)(unsigned)(*ar5 + ar7 * 0x18) = 0;
  *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 4) = 0;
  *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 8) = 0;
  *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 0xc) = 0;
  *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 0x10) = 0;
  *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 0x14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c034a70\n.set _FUN_8c034a70, _FUN_8c034a70_def\n");
