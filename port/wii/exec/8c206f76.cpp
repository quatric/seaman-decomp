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
undefined4 FUN_8c206f76_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c206f76");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* piVar2;
  
  *(volatile le<undefined4>* )(unsigned)0xa05f6908 = 4;
  piVar2 = 0x8c4a9f10;
  iVar1 = 0x8c4aa0b4;
  *(le<int>* )(unsigned)(0x8c4aa0b4 + 0x20) = *(le<int>* )(unsigned)(0x8c4aa0b4 + 0x20) + 1;
  piVar2[*piVar2 + -6] = -3;
  if (*(le<undefined4>* )(unsigned)0x8c4aa058 == 1) {
    *(le<int>* )(unsigned)(iVar1 + 0x14) = *(le<int>* )(unsigned)(iVar1 + 0x14) + 1;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c206e14(0,ar5,ar6,ar7));
  }
  return 0;
}

__asm__(".globl FUN_8c206f76\n.set FUN_8c206f76, FUN_8c206f76_def\n");

}
