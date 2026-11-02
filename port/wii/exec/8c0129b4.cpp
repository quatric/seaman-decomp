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
undefined4 FUN_8c0129b4_def(le<short>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0129b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  byte *ar6_00;
  
  puVar1 = ((void *)(unsigned)0x8c0128e8);
  *ar4 = (short)ar6 + *ar4;
  ar6_00 = ((byte *)(fr0_ - 0x1c));
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)(puVar1)))(ar5,ar7,((byte *)(fr0_ - 0x1c)),ar7));
  if ((((byte *)(fr0_ - 0x1c))[0] & 0x80) == 0) {
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c012854(((byte *)(fr0_ - 0x1c)),0x10,ar6_00,ar7));
  }
  else {
    *ar4 = *ar4 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c012e00(((byte *)(fr0_ - 0x1c)),0x10,0x42,ar7));
  (*(byte *)(fr0_ - 0x14)) = (*(byte *)(fr0_ - 0x14)) & 0xe0;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), memmove(ar5,((byte *)(fr0_ - 0x1c)),9,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c0129b4\n.set FUN_8c0129b4, FUN_8c0129b4_def\n");

}
