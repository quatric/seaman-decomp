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
undefined4 FUN_8c201c3e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c201c3e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = 0x8c47e820;
  puVar2 = 0x8c47e820;
  while( true ) {
    if (0x8c47e820 + 0x100 <= puVar1) {
      return 0;
    }
    if (puVar1[1] == '\0') break;
    puVar1 = puVar1 + 0x10;
    puVar2 = puVar2 + 0x10;
  }
  *puVar2 = 0;
  *(undefined4 *)(unsigned)(puVar2 + 4) = ar4;
  *(undefined4 *)(unsigned)(puVar2 + 0xc) = 0;
  *(undefined4 *)(unsigned)(puVar2 + 8) = 0;
  puVar2[1] = 1;
  return puVar2;
}

__asm__(".globl _FUN_8c201c3e\n.set _FUN_8c201c3e, _FUN_8c201c3e_def\n");
