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
uint FUN_8c20af20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20af20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined *ar5_00;
  
  ar5_00 = ((undefined1 *)(unsigned)0x8c275714);
  (*(undefined4 *)(unsigned)(unsigned)0xff000038) = *((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa21c) >> 0x18;
  iVar1 = 4;
  uVar2 = *((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa21c) & 0x3ffffff | 0xe0000000;
  (*(undefined4 *)(unsigned)(unsigned)0xff00003c) = (*(undefined4 *)(unsigned)(unsigned)0xff000038);
  do {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c207300(uVar2,ar5_00,0x20,ar7));
    iVar1 = iVar1 + -1;
    uVar2 = uVar2 + 0x20;
    ar5_00 = ar5_00 + 0x20;
  } while (iVar1 != 0);
  uVar2 = *((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa21c);
  *(unsigned *)(unsigned long)*(unsigned *)0x8c4aa21c = (unsigned)(uVar2 + 0x80);
  return uVar2 + 0x80;
}

__asm__(".globl _FUN_8c20af20\n.set _FUN_8c20af20, _FUN_8c20af20_def\n");
