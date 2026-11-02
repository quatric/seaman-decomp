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
undefined4 FUN_8c10ba20_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ba20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = ar4[1];
  uVar2 = 0;
  (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(iVar3 + 4);
  (*(undefined4 *)(fr0_ - 0x18)) = ar4[2];
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c11d200(*ar4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],*ar4,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0xc))))(ar4,&(*(undefined4 *)(fr0_ - 0x1c)),ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c10ba20\n.set _FUN_8c10ba20, _FUN_8c10ba20_def\n");
