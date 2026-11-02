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
uint FUN_8c0bb158_def(int ar4,le<undefined2>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bb158");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  
  *ar5 = *(le<undefined2>* )(unsigned)(0x96 + ar4);
  *(undefined1 *)(unsigned)(ar5 + 1) = *(undefined1 *)(unsigned)(0x98 + ar4);
  *(undefined1 *)(unsigned)((int)ar5 + 3) = *(undefined1 *)(unsigned)(0x99 + ar4);
  *(undefined1 *)(unsigned)(ar5 + 2) = *(undefined1 *)(unsigned)(0x9a + ar4);
  *(undefined1 *)(unsigned)((int)ar5 + 5) = *(undefined1 *)(unsigned)(0x9b + ar4);
  *(undefined1 *)(unsigned)(ar5 + 3) = *(undefined1 *)(unsigned)(0x9c + ar4);
  *(undefined1 *)(unsigned)((int)ar5 + 7) = *(undefined1 *)(unsigned)(0x9d + ar4);
  bVar1 = *(byte *)(unsigned)(0x9e + ar4);
  *(byte *)(unsigned)(ar5 + 4) = bVar1;
  return (uint)bVar1;
}

__asm__(".globl FUN_8c0bb158\n.set FUN_8c0bb158, FUN_8c0bb158_def\n");

}
