#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c012f24_def(char *ar4,char *ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012f24");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  char cVar2;
  uint uVar3;
  
  if (ar6 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (ar6 != 0) {
    do {
      cVar1 = *ar5;
      ar5 = ar5 + 1;
      cVar2 = *ar4;
      ar4 = ar4 + 1;
      if (cVar2 != cVar1) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < ar6);
  }
  return (uint)(byte)ar4[-1] - (uint)(byte)ar5[-1];
}

__asm__(".globl FUN_8c012f24\n.set FUN_8c012f24, FUN_8c012f24_def\n");

}
