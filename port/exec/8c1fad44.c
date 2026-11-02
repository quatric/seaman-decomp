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
uint FUN_8c1fad44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fad44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  int *piVar2;
  
  piVar2 = 0x8c475ed4;
  if (*(undefined4 *)(unsigned)0x8c475ed8 == 0) {
    *(undefined2 *)(unsigned)(*(undefined4 *)(unsigned)0x8c475ed4 + 8) = 0;
    *(undefined2 *)(unsigned)(*piVar2 + 0x18) = 6;
    *(undefined2 *)(unsigned)*piVar2 = 0;
    *(char *)(unsigned)(*piVar2 + 4) = (char)0xff;
    *(undefined2 *)(unsigned)(*piVar2 + 8) = 0;
    *(undefined2 *)(unsigned)(*piVar2 + 0x10) = 0;
    *(undefined2 *)(unsigned)(*piVar2 + 0x18) = 0;
    *(undefined2 *)(unsigned)(*piVar2 + 0x20) = 0;
    *(undefined2 *)(unsigned)(*piVar2 + 0x24) = 0;
  }
  cVar1 = *(undefined4 *)(unsigned)0xffc00004;
  *(undefined4 *)(unsigned)0xffc00004 = (char)((int)cVar1 | 1U);
  return (int)cVar1 | 1U;
}

__asm__(".globl _FUN_8c1fad44\n.set _FUN_8c1fad44, _FUN_8c1fad44_def\n");
