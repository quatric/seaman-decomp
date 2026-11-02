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
uint FUN_8c02db04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02db04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  bool bVar2;
  
  if (*(short *)(unsigned)(ar4 + 0x20) <= *(short *)(unsigned)(ar4 + 0x16)) {
    if ((int)*(short *)(unsigned)(ar4 + 0x14) != *(int *)(unsigned)(ar4 + 0x30)) {
      *(undefined2 *)(unsigned)(ar4 + 0x1e) = 1;
      return 1;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1c8(ar4,ar5,ar6,ar7));
    if ((char)uVar1 == '\x01') {
      *(undefined2 *)(unsigned)(ar4 + 0x1e) = 1;
      return 1;
    }
  }
  bVar2 = *(int *)(unsigned)(ar4 + 0x3c) == 1;
  if (bVar2) {
    *(undefined2 *)(unsigned)(ar4 + 0x1e) = 1;
  }
  return (uint)bVar2;
}

__asm__(".globl _FUN_8c02db04\n.set _FUN_8c02db04, _FUN_8c02db04_def\n");
