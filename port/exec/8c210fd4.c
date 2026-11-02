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
int FUN_8c210fd4_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c210fd4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203ca0(*(undefined4 *)(unsigned)0x8c4aa280,*ar5,ar6,ar7));
  if (iVar1 != 0) {
    return iVar1;
  }
  puVar3 = 0x8c4aa288 + 5;
  for (puVar2 = 0x8c4aa288; puVar2 < puVar3; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c210fd4\n.set _FUN_8c210fd4, _FUN_8c210fd4_def\n");
