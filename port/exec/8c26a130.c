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
undefined4 FUN_8c26a130_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26a130";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c2785e4));
  if (ar4 == 0) {
    *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2785e0)) = 0;
    *(undefined4 *)(unsigned)puVar1 = 0;
  }
  else {
    *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2785e0)) = ar4;
    *(undefined4 *)(unsigned)puVar1 = ar5;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), memset(0x8c4bea48,0,(int)0x100,vr7));
  return uVar2;
}

__asm__(".globl _FUN_8c26a130\n.set _FUN_8c26a130, _FUN_8c26a130_def\n");
