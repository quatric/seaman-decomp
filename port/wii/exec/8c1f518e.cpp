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
undefined4 FUN_8c1f518e_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f518e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = *ar5;
  (*(undefined1 *)(fr0_ - 0x4)) = (undefined1)uVar1;
  (*(undefined1 *)(fr0_ - 0x3)) = (undefined1)((uint)uVar1 >> 8);
  (*(undefined1 *)(fr0_ - 0x2)) = (undefined1)((uint)uVar1 >> 0x10);
  (*(undefined1 *)(fr0_ - 0x1)) = (undefined1)((uint)uVar1 >> 0x18);
  if (*(le<int>* )(unsigned)(*(le<undefined4>* )(unsigned)0x8c4727b4 + (int)0x10c4) == 1) {
    *(undefined1 *)(unsigned)(ar4 + 0xb) = (*(undefined1 *)(fr0_ - 0x4));
    *(undefined1 *)(unsigned)(ar4 + 10) = (*(undefined1 *)(fr0_ - 0x3));
    *(undefined1 *)(unsigned)(ar4 + 9) = (*(undefined1 *)(fr0_ - 0x2));
    *(undefined1 *)(unsigned)(ar4 + 8) = (*(undefined1 *)(fr0_ - 0x1));
  }
  else {
    *(undefined1 *)(unsigned)(ar4 + 8) = (*(undefined1 *)(fr0_ - 0x4));
    *(undefined1 *)(unsigned)(ar4 + 9) = (*(undefined1 *)(fr0_ - 0x3));
    *(undefined1 *)(unsigned)(ar4 + 10) = (*(undefined1 *)(fr0_ - 0x2));
    *(undefined1 *)(unsigned)(ar4 + 0xb) = (*(undefined1 *)(fr0_ - 0x1));
  }
  if (*(byte *)(unsigned)(ar4 + 8) == 0xff) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x14) = 0xffffffff;
  }
  else if ((short)(ushort)*(byte *)(unsigned)(ar4 + 8) < 0xe0) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x14) = 0;
  }
  else {
    *(le<undefined4>* )(unsigned)(ar4 + 0x14) = ar5[1];
  }
  return 0;
}

__asm__(".globl FUN_8c1f518e\n.set FUN_8c1f518e, FUN_8c1f518e_def\n");

}
