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
int FUN_8c0e9898_def(undefined1 *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e9898";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  
  ar5_00 = ar5;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e98f0(ar4,ar5,ar6,ar7));
  *ar5 = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e98e8(ar4,ar5_00,ar6,ar7));
  ar5[1] = (char)uVar2;
  ar5[2] = ar4[0x3d];
  ar5[3] = *ar4;
  cVar1 = ar4[0x3b];
  ar5[4] = cVar1;
  return (int)cVar1;
}

__asm__(".globl _FUN_8c0e9898\n.set _FUN_8c0e9898, _FUN_8c0e9898_def\n");
