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
int FUN_8c260810_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c260810";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  int a7;
  
  a7 = ar4 + 0xc;
  *(undefined2 *)(unsigned)(ar4 + 2) = 1;
  (*(undefined4 *)(fr0_ - 0x14)) = ar5;
  (*(undefined4 *)(fr0_ - 0x10)) = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c260658(ar5,ar6,((short *)(fr0_ - 0x18)),a7));
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    *(undefined2 *)(unsigned)(ar4 + 0x1c) = 0;
    *(undefined2 *)(unsigned)(ar4 + 0x4a) = 0;
    *(undefined2 *)(unsigned)(ar4 + 0x48) = 0;
    *(undefined2 *)(unsigned)(ar4 + 0x26) = 0;
    *(undefined2 *)(unsigned)(ar4 + 0x24) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x34) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
    *(int *)(unsigned)(ar4 + 0x58) = (int)*(char *)(unsigned)(ar4 + 0xe);
    *(int *)(unsigned)(ar4 + 0x5c) = (int)*(char *)(unsigned)(ar4 + 0xf);
    *(undefined4 *)(unsigned)(ar4 + 0x60) = *(undefined4 *)(unsigned)(ar4 + 0x10);
    *(undefined4 *)(unsigned)(ar4 + 100) = *(undefined4 *)(unsigned)(ar4 + 0x3c);
    *(undefined4 *)(unsigned)(ar4 + 0x68) = *(undefined4 *)(unsigned)(ar4 + 0x40);
    *(undefined4 *)(unsigned)(ar4 + 0x6c) = *(undefined4 *)(unsigned)(ar4 + 0x44);
    *(undefined2 *)(unsigned)(ar4 + 0x7c) = *(undefined2 *)(unsigned)(ar4 + 0x48);
    *(undefined2 *)(unsigned)(ar4 + 0x7e) = *(undefined2 *)(unsigned)(ar4 + 0x4a);
    *(int *)(unsigned)(ar4 + 0x80) = ar4 + 0x4c;
    *(undefined4 *)(unsigned)(ar4 + 0x9c) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x98) = 0;
    *(undefined2 *)(unsigned)(ar4 + 0xa8) = 1;
    (vsp = ((unsigned long)(fr0_ - 24)), memset(ar4 + 0x4c,0,4,a7));
    iVar1 = (int)((short *)(fr0_ - 0x18))[0];
  }
  return iVar1;
}

__asm__(".globl _FUN_8c260810\n.set _FUN_8c260810, _FUN_8c260810_def\n");
