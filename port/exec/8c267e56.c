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
int FUN_8c267e56_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c267e56";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int *in_r3 = 0;
  undefined1 uVar1;
  int ar5_00;
  uint uVar2;
  undefined4 in_PR = 0;
  
  if (*in_r3 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    uVar2 = (uint)(char)ar5;
    ar6 = (char)ar6 + 0x80;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4bd4d0) = 0x25;
    (*(undefined1 *)(unsigned)0x8c4bd4d4) = (((undefined1 *)(unsigned)0x8c278590))[uVar2 & 3] | *(byte *)(unsigned)(ar4 + 1);
    uVar1 = (undefined1)((uint)ar7 >> 8);
    if ((uVar2 == 0) || (uVar2 == 0xffffffff)) {
      (*(undefined1 *)(unsigned)0x8c4bd4d5) = (char)ar6;
      (*(undefined1 *)(unsigned)0x8c4bd4d6) = (char)ar7;
      (*(undefined1 *)(unsigned)0x8c4bd4d7) = uVar1;
    }
    if ((uVar2 == 1) || (uVar2 == 0xffffffff)) {
      (*(undefined1 *)(unsigned)0x8c4bd4d9) = (char)ar6;
      (*(undefined1 *)(unsigned)0x8c4bd4da) = (char)ar7;
      (*(undefined1 *)(unsigned)0x8c4bd4db) = uVar1;
    }
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c267fe8(((undefined1 *)(unsigned)0x8c4bd4d0),ar7,ar6,ar7));
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c2688a0(((void *)0x8c267e54),ar5_00,ar6,ar7); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267e56\n.set _FUN_8c267e56, _FUN_8c267e56_def\n");
