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
uint FUN_8c1fb81c_def(uint ar4,uint ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fb81c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 1024; for (int i_ = 0; i_ < 1024; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  
  uVar1 = (uint)0x100;
  uVar6 = *(undefined4 *)(unsigned)0xff000010 >> 0x12 & 0x3f;
  while ((uVar6 < 0x40 && ((*(uint *)(unsigned)(uVar6 * 0x100 + 0xf6000000) & uVar1) == uVar1))) {
    uVar6 = uVar6 + 1;
  }
  if (uVar6 == 0x40) {
    uVar6 = (uint)0xff;
  }
  else {
    cVar5 = (char)ar6;
    uVar1 = ar5 & (int)(int)0xfffffc00 | uVar1;
    if (cVar5 == '\x01') {
      ar6 = 0;
      uVar3 = 0x1ffffc00;
    }
    else if (cVar5 == '\x02') {
      ar6 = 0x10;
      uVar3 = 0x1ffff000;
    }
    else if (cVar5 == '\x03') {
      ar6 = (uint)0x80;
      uVar3 = 0x1fff0000;
    }
    else {
      uVar3 = uVar1;
      if (cVar5 == '\x04') {
        ar6 = (uint)0x90;
        uVar3 = 0x1ff00000;
      }
    }
    uVar2 = (uint)0x13e;
    puVar4 = (uint *)(unsigned)(uVar6 * 0x100 + 0xf7000000);
    *(uint *)(unsigned)(0xf6000000 + uVar6 * 0x100) = uVar1;
    *puVar4 = ar4 & uVar3 | ar6 | uVar2;
  }
  return uVar6;
}

__asm__(".globl _FUN_8c1fb81c\n.set _FUN_8c1fb81c, _FUN_8c1fb81c_def\n");
